def createMatriz(n : int, m : int):
    matrix = []
    for i in range(0,n):
        array = []
        for j in range(0,m):
            x = int(input())
            array.append(x)
        matrix.append(array)
    
    return matrix

def binarySearch(list, target):
    l = 0
    r = len(list)
    while(l <= r):
        m = (l+r)//2
        if list[m] == target:
            return True
        if list[m] > target:
            r = m - 1
        else:
            l = m+1
    return False



n,m,target = map(int, input().split())

matrix = createMatriz(n,m)
flag = False
for i in matrix:
    flag = binarySearch(i,target)
    if flag:
        break

if flag:
    print('true')
else:
    print('false')




