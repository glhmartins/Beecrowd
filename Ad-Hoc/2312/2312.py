N = int(input())
matriz = []
for x in range(N):
    entrada = input().split()
    country = entrada[0]
    ouro = int(entrada[1])
    prata = int(entrada[2])
    bronze = int(entrada[3])
    linha = [country,ouro,prata,bronze]
    matriz.append(linha)
matriz.sort(key = lambda x:x[1], reverse=True)
for x in range(len(matriz)-1):
    if matriz[x][1] == matriz[x+1][1]:
        if matriz[x][2] == matriz[x+1][2]:
            if matriz[x][3] == matriz[x+1][3]:
                Nome1 = matriz[x][0]
                Nome2 = matriz[x+1][0]
                ordenar = [Nome1, Nome2]
                ordenar.sort()
                if ordenar[0] == Nome2:
                    matriz[x], matriz[x+1] = matriz[x+1], matriz[x]
            elif matriz[x][3] < matriz[x+1][3]:
                matriz[x], matriz[x+1] = matriz[x+1], matriz[x]
        elif matriz[x][2] < matriz[x+1][2]:
            matriz[x], matriz[x+1] = matriz[x+1], matriz[x]
for z in range(N):
    print(matriz[z][0], matriz[z][1], matriz[z][2], matriz[z][3])