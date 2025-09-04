N = int(input())
matriz = []
for x in range(N):
    linha = list(input())
    lista = []
    M = int(input())
    convert = 0
    if M!=0:
        for y in linha:
            convert = ord(y)-M
            if convert<ord("A"):
                convert += 26
                lista.append(str(chr(convert)))
            else:
                lista.append(str(chr(convert)))
        matriz.append(lista)
    else:
        matriz.append(linha)
for z in matriz:
    A = "".join(z)
    print(A)