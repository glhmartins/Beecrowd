n,m = map(int, input().split())
matriz = []
for _ in range(n):
    x = [int(i) for i in input().split()]
    matriz.append(sum(x))
menor = min(matriz)
print(matriz.index(menor)+1)