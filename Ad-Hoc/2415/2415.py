n = int(input())
max = 0
sequencia = 0
aux = 0
lista = [int(i) for i in input().split()]
aux = lista[0]
for j in range(n):
    if (lista[j] == aux):
        sequencia+=1
    if (sequencia>max):
        max = sequencia
    if lista[j] != aux:
        sequencia = 1
        aux = lista[j]
print(max)