h1,m1,h2,m2 = map(int, input().split())
while h1!=0 or m1!=0 or h2!=0 or m2!=0:
    hora1 = (h1*60)+m1
    hora2 = (h2*60)+m2
    if hora2<hora1:
        hora2 += 24*60
    print(hora2-hora1)
    h1,m1,h2,m2 = map(int, input().split())