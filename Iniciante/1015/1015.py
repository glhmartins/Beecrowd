import math
X1,Y1 = map(float, input().split())
X2,Y2 = map(float, input().split())
calculo = (X2-X1)**2 + (Y2-Y1)**2
distanca_dois_pontos = math.sqrt(calculo)
print(f"{distanca_dois_pontos:.4f}")