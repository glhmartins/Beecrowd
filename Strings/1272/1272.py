N = int(input())
if N>0:
    decodificado = []
    for x in range(N):
        codigo = input().split()
        string = ""
        for y in range(len(codigo)):
            string += codigo[y][0]
        decodificado.append(string)
    for z in range(len(decodificado)):
        print(f"{decodificado[z]}")