n = int(input())
numbers = [int(i) for i in input().split()][:n]
even = odd = pos = neg = 0

for i in numbers:
    if i %2 == 0:
        even += 1
    if i < 0:
        neg += 1
    if i > 0:
        pos += 1
    if i %2 != 0:
        odd += 1
            
print("Even:", even)
print("Odd:", odd)
print("Positive:", pos)
print("Negative:", neg)