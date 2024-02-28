import math

a, b = map(int, input().split())

f = a // b
c = math.ceil(a / b)
r = round(a / b)

print(f, c, r)