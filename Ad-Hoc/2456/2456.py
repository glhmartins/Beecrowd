cartas = input().split()
cartas_int = []
cartas_validas = 0
decrescente = 0
crescente = 0
if len(cartas) == 5:
    for x in cartas:
        cartas_int.append(int(x))
    for y in cartas_int:
        if y>=1 and y<=13:
            cartas_validas+=1
    if cartas_validas == 5:
        for f in range(4):
            if cartas_int[f]>cartas_int[f+1]:
                decrescente+=1
            elif cartas_int[f]<cartas_int[f+1]:
                crescente+=1
if decrescente == 4:
    print("D")
elif crescente == 4:
    print("C")
else:
    print("N")