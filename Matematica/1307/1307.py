from math import gcd
n = int(input())
for i in range(n):
    a = int(input(), 2)
    b = int(input(), 2)
    aux = gcd(a,b)
    print(f"Pair #{i+1}: All you need is love!" if aux>1 else f"Pair #{i+1}: Love is not all you need!")