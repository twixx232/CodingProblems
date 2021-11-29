n = int(input().strip())
ranked = map(int,input().strip().split(' '))
m = int(input().strip())
player= map(int,input().strip().split(' '))
di = sorted(set(ranked),reverse=True)
k = len(di)
for i in player:
    while (k>0) and (i>=di[k-1]):
        k-=1
    print (k+1)
