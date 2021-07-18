import os #interacts with os

def substrCount(n,s): #define a function
    palindrome_count=0
    
    for i in range(n):
        j=0
        
        #increment j in the loop until palindrome is found
        while i+j<n and s[i]==s[i+j]:
            j += 1
            palindrome_count += 1 
            
            # s[i+j] is either at the end of the string, or a new letter.
            
        # Continues if i+j+j is larger than the string
        if i+j+j>n:
            continue
        # Check that each character after i+j, until i+j+j is the same as our start character
        for _ in range(1,j+1):
            if i+j+_>=n or s[i] != s[i+j+_]:
                break
        else:
            palindrome_count +=1
    return palindrome_count         
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w') #environ['OUTPUT_PATH'] is a string, while fptr is a stream/document pointer. want to write to a file, 

    n = int(input())
    s = input()
    RESULT = substrCount(n, s)

    fptr.write(str(RESULT) + '\n') #Python file method write() writes a string str to the file. 
    fptr.close()