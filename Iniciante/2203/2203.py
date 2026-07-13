from math import sqrt

def distancia_pontos(xf, yf, xi, yi):
    return sqrt((xf-xi)**2 + (yf-yi)**2)

def acerta(distancia, velocidade, conjuracao, voo):
    ataque = distancia - conjuracao - voo + velocidade*1.5
    if ataque<=0:
        return 'Y'
    return 'N'

while True:
    try:
        xf, yf, xi, yi, velocidade, conjuracao, voo = map(int, input().split())
        dist = distancia_pontos(xf, yf, xi, yi)
        print(acerta(dist, velocidade, conjuracao, voo))
    except EOFError:
        break
