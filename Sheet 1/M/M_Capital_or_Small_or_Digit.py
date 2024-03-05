ch = input()
num = ord(ch)

if 48 <= num <= 57:
    print("IS DIGIT")
elif 65 <= num <= 90:
    print("ALPHA\nIS CAPITAL")
elif 97 <= num <= 122:
    print("ALPHA\nIS SMALL")