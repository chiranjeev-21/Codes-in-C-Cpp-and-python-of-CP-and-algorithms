import copy
import sys 

from x import *
q = []
jahanavi79 = []

def compare(s,g): #comparing current state with goal state
    if s==g:
        return(1)
    else:
        return(0)
#finding position of the empty block
def jkhattar(s): 
    
    for i in range(3):
        for j in range(3):
            if s[i][j] == 0:
                return([i,j])
#moving the empty block up
def up(s,pos): 
    
    i = pos[0]
    j = pos[1]
    
    if i > 0:
        temp = copy.deepcopy(s)
        temp[i][j] = temp[i-1][j]
        temp[i-1][j] = 0
        return (temp)
    else:
        return (s)

 #moving the empty block down   
def down(s,pos): 
    
    i = pos[0]
    j = pos[1]
    
    if i < 2:
        temp = copy.deepcopy(s)
        temp[i][j] = temp[i+1][j]
        temp[i+1][j] = 0
        return (temp)
    else:
        return (s)
#moving the empty block right
def right(s,pos):
    
    i = pos[0]
    j = pos[1]
    
    if j < 2:
        temp = copy.deepcopy(s)
        temp[i][j] = temp[i][j+1]
        temp[i][j+1] = 0
        return (temp)
    else:
        return (s)
#moving the empty block left
def left(s,pos):
    
    i = pos[0]
    j = pos[1]
    
    if j > 0:
        temp = copy.deepcopy(s)
        temp[i][j] = temp[i][j-1]
        temp[i][j-1] = 0
        return (temp)
    else:
        return (s)
 #adding specified states with the subsequent heuristic value
def enqueue(s,val):
    global q
    q = q + [(val,s)]

def heuristic(s,g):
    d = manhattan(s,g) #calculating manhattan value 
    return d

                
def dequeue(g): 
     #function to calculate and check the node with minimum cost to explore it further 
    global q
    global jahanavi79
    
    q.sort()
    jahanavi79 = jahanavi79 + [q[0][1]]
    
    elem = q[0][1]
    del q[0]
    return (elem)
    
def search(s,g):
    
    curr_state = copy.deepcopy(s)
    if s == g:
        return

    global jahanavi79
    while(1):
        
        pos = jkhattar(curr_state)
        new = up(curr_state,pos)

        if new != curr_state:#checking if new state is not equal one we have as current state
            if new == g: #checking if goal state is the one we have as new state
                print ("found !! The intermediate states are:")
                print (jahanavi79 + [g])
                return
            else:
                if new not in jahanavi79: #new state not in list then add it
                    enqueue(new,heuristic(new,g))  # new state added in queue along with heuristic value
            
        new = down(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("found !! The intermediate states are:")

                print (jahanavi79 + [g])
                return
            else:
                if new not in jahanavi79:
                    enqueue(new,heuristic(new,g))

        new = right(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("found !! The intermediate states are:")

                print (jahanavi79 + [g])
                return
            else:
                if new not in jahanavi79:
                    enqueue(new,heuristic(new,g))

        new = left(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("found !! The intermediate states are:")
                print (jahanavi79 + [g])
                return
            else:
                if new not in jahanavi79:
                    enqueue(new,heuristic(new,g))
        
        if len(q) > 0: # if q not empty then choose the current state as the state with minimum heuristic value present in q
            curr_state = dequeue(g)
        else: # if q is empty and we do not reach the goal state then no solution exists
            print ("not found")
            return
        

def main():
    s = [[2,8,3],[1,5,4],[7,6,0]] #start state
    g = [[1,2,3],[8,0,4],[7,6,5]] #end state
    global q
    global jahanavi79
    q = q 
    jahanavi79 = jahanavi79 + [s] 
    
    search(s,g)
    
if __name__ == "__main__":
    main()
