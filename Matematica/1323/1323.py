n = int(input())
while n!=0:
    formula = n*(n+1)*(2*n+1)
    print(f"{formula/6:.0f}")
    n = int(input())