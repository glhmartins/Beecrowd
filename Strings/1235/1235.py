n = int(input())
for _ in range(n):
    string = input()
    fc = ""
    mid = len(string)//2-1 if len(string)%2 == 0 else len(string)//2
    for i in range(mid, -1, -1):
        fc += string[i]
    for j in range(len(string)-1, mid, -1):
        fc += string[j]
    print(fc)