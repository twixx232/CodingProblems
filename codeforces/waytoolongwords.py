def splitWord(j):
    return [i for i in j]
T = int(input())

listwords=[]
for i in range(T):
    word = input()
    listwords.append(word)
for j in listwords:
    if len(j) > 10 :
        myword = splitWord(j)
        result = f"{myword[0]}{len(myword[1:-1])}{myword[-1]}"
        print(result)
    else :
        print(j)
