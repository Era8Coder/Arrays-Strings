n = int(input())
lst = []
for i in range(n):
    x = int(input())
    lst.append(x)

def printvec(lst):
    for i in range(0,len(lst)):
        print(lst[i], end = " ")
    print()

def product(lst):
    n = len(lst)
    prefix = [1]*n
    suffix = [1]*n
    answer = [1]*n
    for i in range(1,n):
        prefix[i] = prefix[i-1]*lst[i-1]

    for j in range(n-2,-1,-1):
        suffix[j] = lst[j+1]*suffix[j+1]

    for i in range(n):
        answer[i] = prefix[i]*suffix[i]

    printvec(answer)

product(lst)