n = int(input())
lines = []
for i in range(n) :
    line = input().split(' ')
    lines.append(line)
k = 0
for j in lines :
    a = 0
    if j[0] == '1' :
        a+=1
    if j[1] == '1' :
        a+=1
    if j[2] == '1' :
        a+=1
    if a >=2:
        k+=1
    
print(k)


