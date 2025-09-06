N = int(input())
count = 1
if N>=1 and N<=1000:
    while N!=0 and N<=1000:
        player1 = input().strip()
        player2 = input().strip()
        soma_rodada = 0
        vencedores_rodada = []
        vencedor_rodada = ""
        for x in range(0,N):
            par_impar = input().split()
            player1_numero = int(par_impar[0])
            player2_numero = int(par_impar[1])
            if player1_numero>=0 and player1_numero<=5 and player2_numero>=0 and player2_numero<=5:
                soma_rodada = player1_numero+player2_numero
            if soma_rodada%2 == 0:
                vencedor_rodada = player1
            else:
                vencedor_rodada = player2
            vencedores_rodada.append((vencedor_rodada))
        N = int(input())
        print(f"Teste {count}")
        for y in vencedores_rodada:
            print(y)
        print()
        count+=1