expressions = ["<<>>","<>","<><>",">>","<<>","><><"] 
maxReplacements = [0,1,2,2,2,2] 
res = [] 
 
for ind,expr in enumerate(expressions): 
    stack = [] 
    repl = 0 
    flag = 0 
    for i in expr: 
        if i == "<": 
            stack.append(i) 
        elif stack: 
            stack.pop() 
        else: 
            repl += 1 
        if repl > maxReplacements[ind]: 
            res.append(False) 
            flag = 1 
    if flag: 
        continue 
    if (not stack) and repl <= maxReplacements[ind]: 
        res.append(True) 
    else: 
        res.append(False) 
print(res)