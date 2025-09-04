n = int(input())
for x in range(n):
    linha = input().split()
    linha.sort(key = len, reverse=True)
    string = ""
    for y in linha:
        string+=y+" "
    print(string.strip())