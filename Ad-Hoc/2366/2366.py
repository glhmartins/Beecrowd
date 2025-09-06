N, M = map(int, input().split())
if N>=2 and N<=10000 and M>=1 and M<=42195:
    concluir = "S"
    linha = input().split()
    linha_int = []
    for x in linha:
        linha_int.append(int(x))
    for y in range(1,len(linha_int)):
        diferenca = linha_int[y] - linha_int[y-1]
        if diferenca>M:
            concluir = "N"
    if (42195 - linha_int[-1]) >M:
        concluir = "N"
    print(concluir)