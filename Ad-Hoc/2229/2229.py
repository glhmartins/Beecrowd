n = int(input())
count = 1
while n>-1 and n<=15:
    print(f"Teste {count}")
    print(f"{(2**n+1)**2}")
    print()
    count+=1
    n = int(input())