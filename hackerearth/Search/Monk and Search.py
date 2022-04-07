n=int(input())

arr=list(map(int,input().split()))[:n]

arr.sort

q=int(input())

for i in range(0, q):
    zeroo = int(input())
    num  = int(input())
    
    
    if zeroo==0:
        count = 0
        for nn in arr:
            if nn>=num:
                count+=1
        print(count)

    if zeroo==1:
        count=0
        for nn in arr:
            if nn>num:
                count+=1
        print(count)