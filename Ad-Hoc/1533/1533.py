n = int(input())
while n!=0:
    suspeitos = [int(i) for i in input().split()]
    maior = max(suspeitos)
    segundo = 0
    culpado = 0
    for x in range(len(suspeitos)):
        if suspeitos[x]>segundo and suspeitos[x]!=maior:
            segundo = suspeitos[x]
            culpado = x
    print(culpado+1)
    n = int(input())