P,R = map(int, input().split())
count = 1
while P!=0 and P>1 and R!=0 and R>0:
    fila = input().split()
    jogadores = fila
    vencedor = 0
    for x in range(R):
        pop = 0
        rodada = input().split()
        ordem_rodada = rodada[1]
        jogadores_rodada = rodada[2:]
        for y in jogadores_rodada:
            if y != ordem_rodada:
                jogadores.pop(pop)
                pop-=1
            pop+=1
    vencedor = int(jogadores[0])
    print(f"Teste {count}")
    print(f"{vencedor}")
    print()
    count+=1
    P, R = map(int, input().split())