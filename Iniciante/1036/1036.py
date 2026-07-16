import math
a,b,c, = map(float, input().split())
delta = (b**2)-4*a*c
if a==0 or delta<0:
    print("Impossivel calcular")
else:
    d = math.sqrt(delta)
    print(f"R1 = {(-b + d)/(2*a):.5f}")
    print(f"R2 = {(-b - d)/(2*a):.5f}")