n = int(input())
fim_palavra = 'ou!'
for _ in range(n):
    frase = 'E'
    m = input().split()
    resultado = 0
    if m[1] == "+":
        resultado = int(m[0]) + int(m[2])
    elif m[1] == '-':
        resultado = int(m[0]) - int(m[2])
    else:
        resultado = int(m[0]) * int(m[2])
    frase += 'r'* abs(resultado-int(m[-1]))
    frase += fim_palavra
    print(frase)