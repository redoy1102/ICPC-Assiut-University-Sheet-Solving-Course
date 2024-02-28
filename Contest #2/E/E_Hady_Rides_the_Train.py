seat = int(input())
row = seat // 4

print(row, end=" ")
if row %2 == 0:
    print(seat % 4)     # column
else:
    print(3-(seat % 4))  # column