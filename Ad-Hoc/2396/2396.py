N,M = map(int, input().split())
matriz = []
for _ in range(N):
    x = [int(i) for i in input().split()]
    matriz.append(sum(x))
matriz_fixa = matriz[:]
positions = []
for y in range(N):
    menor = min(matriz)
    positions.append(matriz_fixa.index(menor)+1)
    matriz.remove(menor)
print(positions[0])
print(positions[1])
print(positions[2])