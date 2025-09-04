while True:
    try:
        hashmat, enemies = map(int, input().split())
        print(abs(hashmat-enemies))
    except EOFError:
        break