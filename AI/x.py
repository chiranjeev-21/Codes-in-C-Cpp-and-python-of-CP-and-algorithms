import sys 
import copy
import math
import numpy as np
 #calculating position of element
def jahanavi(s,elem): 
    for i in range(len(s)):
        for j in range(len(s[0])):
            if s[i][j] == elem:
                return [i,j]
    return -1
def eucledian(s,g):
    #create a matrix
    res_mat = np.zeros(len(s)*len(s[0]),dtype = float)
    res_mat = res_mat.reshape(len(s),len(s)) 
    for x1 in range(len(s)):
        for y1 in range(len(s[0])):
            elem = s[x1][y1]
            pos = jahanavi(g,elem)            
            x2 = pos[0]
            y2 = pos[1]   
            #euclidean dist         
            res_mat[x1][y1] = math.sqrt((x2-x1)**2 + (y2-y1)**2)  
    for i in range(len(res_mat)):
        j102016079 += sum(res_mat[i])
    return j102016079 

def manhattan(s,g):
    res_mat = np.zeros(len(s)*len(s[0]),dtype = float)
    res_mat = res_mat.reshape(len(s),len(s))
    for x1 in range(len(s)):
        for y1 in range(len(s[0])):
            elem = s[x1][y1]
            pos = jahanavi(g,elem)            
            x2 = pos[0]
            y2 = pos[1]  
            #calculating the Manhattan distanc          
            res_mat[x1][y1] = abs(x2-x1) + abs(y2-y1)     
    j102016079 = 0    
    for i in range(len(res_mat)):
        j102016079 += sum(res_mat[i])
    return j102016079 

def minkowiski(s,g,p):
    #creating a matrix
    res_mat = np.zeros(len(s)*len(s[0]),dtype = float) 
    res_mat = res_mat.reshape(len(s),len(s))
    for x1 in range(len(s)):
        for y1 in range(len(s[0])):
            elem = s[x1][y1]
            pos = jahanavi(g,elem)            
            x2 = pos[0]
            y2 = pos[1]   
            #calculating the Minkowiski distance         
            res_mat[x1][y1] = ((abs(x2-x1)**p) + (abs(y2-y1)**p))**(1./p)       
    j102016079 = 0    
    for i in range(len(res_mat)):
        j102016079 += sum(res_mat[i])
    return j102016079   

def main():
    p_val = 3
    s0 = [[2,0,3],[1,8,4],[7,6,5]] # start state 
    g = [[1,2,3],[8,0,4],[7,6,5]]  # end state
    euc = eucledian(s0,g) #function calculating Euclidean distance
    man = manhattan(s0,g)  #function calculating Manhattan distance
    mink = minkowiski(s0,g,p_val) #function calculating Minkowiski distance
   #printing the ans
    print(euc)
    print(man)
    print(mink)
if __name__ == "__main__":
    main()
