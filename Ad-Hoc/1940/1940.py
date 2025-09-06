J,R = map(int, input().split())
lista = [int(i) for i in input().split()]
pontos = [0]*J
jogador = 0
maior = 0
indice = 0
for x in lista:
    pontos[jogador] += x
    if jogador<len(pontos)-1:
        jogador+=1
    else:
        jogador = 0
for y in range(len(pontos)-1,-1,-1):
    if pontos[y]>maior:
        maior = pontos[y]
        indice = y
print(indice+1)