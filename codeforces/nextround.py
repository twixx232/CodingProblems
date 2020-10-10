n,k = map(int,input().split())
arr = list(map(int,input().split()))
coun =0
for i in range(0,n):
    if arr[i] >= arr[k-1] and arr[i]!=0:
        coun+=1
    elif arr[k-1] ==0 and arr[k-1]==arr[i]:
        count =0
        
print(coun)

