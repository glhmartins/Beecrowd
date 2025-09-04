while True:
    try:
        dist, vc, amigo = map(float, input().split())
        if vc<=amigo:
            print("impossivel")
        else:
            print(f"{dist/(vc-amigo):.2f}")
    except EOFError:
        break