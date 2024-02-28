def count(nums):
    distinct = len(set(nums))
    return distinct

def main():
    n = int(input())
    if n == 0:
        print(0)
    else:
        nums = [int(i) for i in input().split()][:n]
        
        result = count(nums)
        print(result)

if __name__ == "__main__":
    main()