# import cv2
# import numpy as np
# from scipy.stats import gaussian_kde
# import matplotlib.pyplot as plt

# cap = cv2.VideoCapture('python\video.mp4')

# def compute_density(frame):
#     # Convert the frame to grayscale
#     gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
#     # Apply background subtraction
#     fgmask = cv2.bgsegm.createBackgroundSubtractorMOG().apply(gray)
#     # Apply morphological operations to remove noise
#     kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (3,3))
#     fgmask = cv2.morphologyEx(fgmask, cv2.MORPH_OPEN, kernel)
#     # Compute the density of people in the foreground using KDE
#     X,Y = np.meshgrid(np.arange(frame.shape[1]), np.arange(frame.shape[0]))
#     XY = np.vstack([X.ravel(), Y.ravel()])
#     Z = gaussian_kde(XY)(XY)
#     density_map = np.reshape(Z, X.shape)
#     # Multiply the density map by the foreground mask to focus on people only
#     density_map = density_map * fgmask
#     # Normalize the density map to a range of [0,1]
#     density_map = density_map / np.max(density_map)
#     return density_map

# # Process each video frame
# while(cap.isOpened()):
#     ret, frame = cap.read()
#     if not ret:
#         break
#     # Compute the crowd density map for the frame
#     density_map = compute_density(frame)
#     # Generate the heatmap for the frame
#     heatmap = cv2.applyColorMap(np.uint8(255 * density_map), cv2.COLORMAP_JET)
#     # Display the heatmap
#     cv2.imshow('Heatmap', heatmap)
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# cap.release()
# cv2.destroyAllWindows()


##pip install opencv-contrib-python to make the code work
import numpy as np
import cv2
import copy

def main():
    cap = cv2.VideoCapture('video.mp4')
    # pip install opencv-contrib-python
    fgbg = cv2.bgsegm.createBackgroundSubtractorMOG()

    # number of frames is a variable for development purposes, you can change the for loop to a while(cap.isOpened()) instead to go through the whole video
    num_frames = 350

    first_iteration_indicator = 1
    # for i in range(0, num_frames):
    while(cap.isOpened()):
        '''
        There are some important reasons this if statement exists:
            -in the first run there is no previous frame, so this accounts for that
            -the first frame is saved to be used for the overlay after the accumulation has occurred
            -the height and width of the video are used to create an empty image for accumulation (accum_image)
        '''
        if (first_iteration_indicator == 1):
            ret, frame = cap.read()
            first_frame = copy.deepcopy(frame)
            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            height, width = gray.shape[:2]
            accum_image = np.zeros((height, width), np.uint8)
            first_iteration_indicator = 0
        else:
            ret, frame = cap.read()  # read a frame
            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)  # convert to grayscale

            fgmask = fgbg.apply(gray)  # remove the background

            # for testing purposes, show the result of the background subtraction
            cv2.imshow('diff-bkgnd-frame', fgmask)

            # apply a binary threshold only keeping pixels above thresh and setting the result to maxValue.  If you want
            # motion to be picked up more, increase the value of maxValue.  To pick up the least amount of motion over time, set maxValue = 1
            thresh = 2
            maxValue = 2
            ret, th1 = cv2.threshold(fgmask, thresh, maxValue, cv2.THRESH_BINARY)
            cv2.imshow('th1', th1)
            # for testing purposes, show the threshold image
            # cv2.imwrite('diff-th1.jpg', th1)

            # add to the accumulated image
            accum_image = cv2.add(accum_image, th1)
            cv2.imshow('accum', accum_image)
            # for testing purposes, show the accumulated image
            # cv2.imwrite('diff-accum.jpg', accum_image)

            # for testing purposes, control frame by frame
            # raw_input("press any key to continue")

        # for testing purposes, show the current frame
        cv2.imshow('frame', gray)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    # apply a color map
    # COLORMAP_PINK also works well, COLORMAP_BONE is acceptable if the background is dark
    color_image = im_color = cv2.applyColorMap(accum_image, cv2.COLORMAP_HOT)
    # for testing purposes, show the colorMap image
    # cv2.imwrite('diff-color.jpg', color_image)
    
    # overlay the color mapped image to the first frame
    result_overlay = cv2.addWeighted(first_frame, 0.7, color_image, 0.7, 0)

    # save the final overlay image
    cv2.imwrite('out.jpg', result_overlay)

    # cleanup
    cap.release()
    cv2.destroyAllWindows()

if __name__=='__main__':
    main()