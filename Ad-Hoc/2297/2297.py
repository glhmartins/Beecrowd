n = int(input())
teste = 1
while n!=0:
    a = b = 0
    for _ in range(n):
        rodada = input().split()
        a += int(rodada[0])
        b += int(rodada[1])
    print(f"Teste {teste}")
    if a>b:
        print("Aldo")
    else:
        print("Beto")
    print()
    teste +=1
    a = b = 0
    n = int(input())