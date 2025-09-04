while True:
    try:
        vogais = list(input())
        frase = input().split()
        aux = 0
        for x in frase:
            for y in vogais:
                if y in x:
                    aux += x.count(y)
        print(aux)
    except EOFError:
        break