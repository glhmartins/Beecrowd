n = int(input())
t = 0
m = 0
pontos = [0,8,9,10,1,2,3,4,0,0,0,6,5,7]
for _ in range(n):
    lista = [int(i) for i in input().split()]
    lista_t = lista[:3]
    lista_m = lista[3:]
    rodada_t = 0
    rodada_m = 0
    for x in range(len(lista_t)):
        ponto_t = pontos[lista_t[x]]
        ponto_m = pontos[lista_m[x]]
        if ponto_t>= ponto_m:
            rodada_t+=1
        else:
            rodada_m+=1
    if rodada_t>rodada_m:
        t+=1
    else:
        m+=1
print(f"{t} {m}")