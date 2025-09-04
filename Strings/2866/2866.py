n = int(input())
alphabet = 'abcdefghijklmnopqrstuvxwyz'
for _ in range(n):
    palavra = ''
    m = input()
    for x in list(m):
        if x in alphabet:
            palavra += x
    print(palavra[::-1])