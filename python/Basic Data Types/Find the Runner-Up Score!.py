if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    myList = list(arr)
    
    
    
    myList.sort()
    maxNumber= max(myList)
    
    i=n-2
    while (i>=0):
         if (myList[i]<maxNumber) :
           print (myList[i])
           break
         else :
           i=i-1 