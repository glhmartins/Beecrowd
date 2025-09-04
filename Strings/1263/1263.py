while True:
    try:
        s = input().lower().split()
        p = s[0][0]
        count = 0
        n = False
        for i in s[1::]:
            if p == i[0]:
                if not n:
                    count+=1
                    n = True
            else:
                p = i[0]
                n = False
        print(count)
    except EOFError:
        break