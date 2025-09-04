import math
N = int(input())
if N>0:
    pilhas = map(int, input().split())
    lista_pilhas = []
    lista_ideal = []
    lista_minima = []
    soma_minima = 0
    soma_pilhas = 0
    movimentos = 0
    for j in range(N):
        lista_minima.append(int(j+1))
        soma_minima += j+1
    for i in pilhas:
        lista_pilhas.append(i)
        soma_pilhas += i
    formula = ((2 * soma_pilhas - N ** 2 - N) / (2 * N))+1
    for x in range(N):
        lista_ideal.append(formula+x)
    for y in range(N):
        movimentos += math.fabs(lista_pilhas[y]-lista_ideal[y])
    movimentos = movimentos/2
    calculo_condicao = (soma_pilhas - soma_minima)%N
    if calculo_condicao != 0:
        print(-1)
    else:
        print(f"{movimentos:.0f}")