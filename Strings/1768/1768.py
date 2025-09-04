while True:
    try:
        n = int(input())
        if n%2 == 0:
            n -= 1
        sub = 1
        for i in range(0,n,2):
            s = " "*(((n)//2)-sub+1)
            sub += 1
            print(s+("*"*(i+1)))
        s = " "*(n//2)
        print(s+"*")
        s = " "*((n//2)-1)
        print(s+("***"))
        print()
    except EOFError:
        break