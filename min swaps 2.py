import os #interact with the OS
def minimumSwaps(arr):
    i = swap = 0
    
    while i< len(arr):
        while arr[i]!=arr[arr[i]-1]:
            temp=arr[i]
            arr[i]=arr[temp-1]
            arr[temp-1]=temp
            swap+=1
        i+=1
    return swap

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = minimumSwaps(arr)

    fptr.write(str(res) + '\n')

    fptr.close()
