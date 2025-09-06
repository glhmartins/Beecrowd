x = [float(i) for i in input().split()]
soma = 0
soma -= max(x)
soma -= min(x)
soma += sum(x)
print(f"{soma:.1f}")