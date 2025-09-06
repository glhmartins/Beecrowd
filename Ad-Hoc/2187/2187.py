V = int(input())
count = 1
while V>0 and V<10000:
    B50 = V//50
    B10 = (V%50)//10
    B5 = (V%50%10)//5
    B1 = V%50%10%5
    print(f"Teste {count}")
    print(f"{B50} {B10} {B5} {B1}")
    print()
    count+=1
    V = int(input())