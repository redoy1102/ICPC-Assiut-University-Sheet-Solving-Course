s = input()
res = s.split()
# ['5', '>', '4']
r = "Right"
w = "Wrong"

if res[1] == "=":
    if int(res[0]) == int(res[2]):
        print(r)
    else:
        print(w)
elif res[1] == ">":
    if int(res[0]) > int(res[2]):
        print(r)
    else:
        print(w)
else:
    if int(res[0]) < int(res[2]):
        print(r)
    else:
        print(w)