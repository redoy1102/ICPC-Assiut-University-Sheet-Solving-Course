import math as ma
def mx(nums):
    return max(nums)
def mn(nums):
    return min(nums)

def isPrime(n):
    if n <= 1:  return False
    else:
        for i in range(2, int(ma.sqrt(n))+1):
            if n % i == 0:
                return False
        return True
def noOfPrime(nums):
    count = 0
    for i in nums:
        if isPrime(i):
            count += 1 
    return count

def isPalindrome(n):
    n = str(n)
    # two pointer concept 
    i, j = 0, len(n)-1
    while (i <= j):
        if n[i] != n[j]:
            return False
        i += 1
        j -= 1
    return True
def noOfPalindrome(nums):
    count = 0
    for i in nums:
        if isPalindrome(i):
            count += 1 
    return count

def countDivisor(n):
    count = 0
    for i in range(1, n+1):
        if n % i == 0:
            count += 1
    return count

def maximumDivisor(nums):
    divisors=[]
    for i in nums:
        divisors.append(countDivisor(i))
    # print("Divisors: ",*divisors)
    highest = max(divisors)
    freOfHighest = divisors.count(highest)
    if freOfHighest > 1:
        indexes=[]
        for i in range(len(divisors)):
            if divisors[i] == highest:
                indexes.append(i)
        return indexes
    else:
        return divisors.index(highest)
    
def main():
    n = int(input())
    nums = [int(i) for i in input().split()][:n]
    
    print("The maximum number : {}".format(mx(nums)))
    print("The minimum number : {}".format(mn(nums)))
    print("The number of prime numbers : {}".format(noOfPrime(nums)))
    print("The number of palindrome numbers : {}".format(noOfPalindrome(nums)))
    res = maximumDivisor(nums)
    # print("res: ", res)
    if type(res) == int:
        print("The number that has the maximum number of divisors : {}".format(nums[res]))
    else:
        numbers = []
        for i in res:
            numbers.append(nums[i])
        print("The number that has the maximum number of divisors : {}".format(max(numbers)))
    
if __name__ == "__main__":
    main()