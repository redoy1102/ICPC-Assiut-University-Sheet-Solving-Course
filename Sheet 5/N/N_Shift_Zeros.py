def count(nums):
    distinct = len(set(nums))
    return distinct

def main():
    n = int(input())
    nums = [int(i) for i in input().split()][:n]
    totalZero = nums.count(0)
    for i in nums:
        if i != 0:  print(i, end=" ")
    for i in range(totalZero):
        print(0, end=" ");
    print()

if __name__ == "__main__":
    main()