x = int(input())
firstDigit = x // 1000

if firstDigit %2 == 0:
    print("EVEN")
else:
    print("ODD")