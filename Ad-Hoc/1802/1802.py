matriz = []
for _ in range(5):
    linha = [int(i) for i in input().split()]
    linha.pop(0)
    linha.sort(reverse=True)
    matriz.append(linha)
N = int(input())
maior = []
for a in matriz[0]:
    for b in matriz[1]:
        for c in matriz[2]:
            for d in matriz[3]:
                for e in matriz[4]:
                    maior.append(a+b+c+d+e)
maior.sort(reverse=True)
print(sum(maior[0:N]))