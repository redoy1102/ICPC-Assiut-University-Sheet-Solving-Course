def isOdd(n):
    if n%2 == 0:
        return False
    else:
        return True

def isPalindrome(n):
    if n == 0:
        return False
    else:
        binNumbers=[]
        while n != 0:
            binNumbers.append(n % 2)
            n = n // 2
        
        i, j = 0, len(binNumbers)-1
        while i <= j:
            if binNumbers[i] != binNumbers[j]:
                return False
            i += 1
            j -= 1
        return True
            
def main():
    n = int(input())
    if isOdd(n) == True and isPalindrome(n) == True:
        print("YES")
    else:
        print("NO")
    
if __name__ == "__main__":
    main()