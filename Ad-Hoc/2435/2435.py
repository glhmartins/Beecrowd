n1,b,c = map(float, input().split())
n2,e,f = map(float, input().split())
c /= 3.6
f /= 3.6
while b>0 and e>0:
        b -=c
        e -=f
if (b<=0 and e<=0):
    if(b<e):
        print(f"{n1:.0f}")
    else:
        print(f"{n2:.0f}")
elif (b<=0):
    print(f"{n1:.0f}");
else:
    print(f"{n2:.0f}")
