s = input()
if "+" in s:
    res = s.split("+")
    print(int(res[0]) + int(res[1]))
elif "-" in s:
    res = s.split("-")
    print(int(res[0]) - int(res[1]))
elif "*" in s:
    res = s.split("*")
    print(int(res[0]) * int(res[1]))
else:
    res = s.split("/")
    print(int(res[0]) // int(res[1]))