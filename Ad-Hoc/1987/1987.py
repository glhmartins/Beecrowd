while True:
    try:
        n,m = input().split()
        list(m)
        soma = 0
        for x in m:
            soma += int(x)
        if soma%3 == 0:
            print(f'{soma} sim')
        else:
            print(f'{soma} nao')
    except:
        break