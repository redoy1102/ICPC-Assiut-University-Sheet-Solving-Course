def f(n):
    count = 0
    while n %2 == 0:
        count += 1
        n /= 2
    return count

def main():
    n = int(input())
    counts = []
    nums = [int(i) for i in input().split()][:n]
    
    for i in nums:
        counts.append(f(i))
    
    print(max(counts))
    
if __name__ == "__main__":
    main()