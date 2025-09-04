n = int(input())
alphabet = 'abcdefghijklmnopqrstuvxwyz'
for _ in range(n):
    frase = input().strip()
    count = 0
    vistos = []
    for i in list(frase):
        if i in alphabet and i not in vistos:
            count+=1
            vistos.append(i)
    if count<13:
        print('frase mal elaborada')
    elif count>13 and count<26:
        print('frase quase completa')
    else:
        print('frase completa')