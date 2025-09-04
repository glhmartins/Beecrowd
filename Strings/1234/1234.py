while True:
    try:
        s = list(input())
        up = False
        first = True
        aux = ""
        for i in s:
            if i != " " and first:
                i = i.upper()
                up = False
                first = False
            elif i != " ":
                if up:
                    i = i.upper()
                    up = False
                else:
                    i = i.lower()
                    up = True
            aux += i
        print(aux)
    except EOFError:
        break