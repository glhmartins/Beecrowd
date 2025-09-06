n = int(input())
codificado = input().split()
decimal = []
mensagem = ""
for x in codificado:
    conversao = int(x,16)
    decimal.append(conversao)
for y in decimal:
    codigo = chr(y)
    mensagem += codigo
print(mensagem)