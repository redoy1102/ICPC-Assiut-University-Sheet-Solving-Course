def fun(A, n):
    return sum(A) / n

def main():
    n = int(input())
    A = [float(i) for i in input().split()][:n]
    res = fun(A, n)
    
    print("{:.7f}".format(res))

if __name__ == "__main__":
    main()