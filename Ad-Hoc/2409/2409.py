a,b,c = map(int,input().split())
n,m = map(int, input().split())
if (n>=b and m>=a):
    print("S")
elif (n>=b and m>=c):
    print("S")
elif m>=a and n>=c:
    print("S")
elif m>=c and n>=a:
    print("S")
elif m>=b and n>=c:
    print("S")
elif m>=b and n>=a:
    print("S")
else:
    print("N")