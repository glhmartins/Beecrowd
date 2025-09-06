N = int(input())
if N>=2 and N<=500000:
    lista_coordenadas = []
    analise_coordenadas = set()
    for w in range(N):
        x = input()
        lista_coordenadas.append(x)
        analise_coordenadas.add(x)
    condition = 0 if len(analise_coordenadas) == len(lista_coordenadas) else 1
    print(condition)