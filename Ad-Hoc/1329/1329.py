n = int(input())
cara = 0
coroa = 0
while n!=0:
    x = [int(i) for i in input().split()]
    cara = x.count(0)
    coroa = x.count(1)
    print(f"Mary won {cara} times and John won {coroa} times")
    cara = 0
    coroa = 0
    n = int(input())