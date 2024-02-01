num = 9
count = 0

if num > 1:
    for i in range(1, num+1):
        if(num%i) == 0:
            count += 1
            
    if count == 2:
        print(1)
        
    else:
        print(0)