n = int(input())
price = 0
kg = 0
for i in range(1,n+1):
    number = float(input())
    price += number
    frutas = input().split()
    kg += len(frutas)
    print(f"day {i}: {len(frutas)} kg")
print(f"{kg/n:.2f} kg by day")
print(f"R$ {price/n:.2f} by day")