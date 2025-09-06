import math
n = float(input())
while n != 0:
    print(f"Brasil {math.floor(n/90):.0f} x Alemanha {math.ceil((7*n)/90):.0f}")
    n = float(input())