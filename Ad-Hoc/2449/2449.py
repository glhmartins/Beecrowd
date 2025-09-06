pinos, altura = map(int, input().split())
lista = [int(i) for i in input().split()]
movimentos = 0
diferenca = 0
for x in range(len(lista)-1):
    if lista[x] != altura:
        diferenca = altura - lista[x]
        lista[x] += diferenca
        lista[x+1] += diferenca
    movimentos+= abs(diferenca)
    diferenca = 0
if lista[-1] != altura:
    diferenca = altura - lista[-1]
    lista[-1] += diferenca
    movimentos += abs(diferenca)
print(movimentos)