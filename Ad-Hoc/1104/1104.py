n,m = map(int, input().split())
while n!=0 and m!=0:
    alice = [int(i) for i in input().split()]
    beatriz = [int(i) for i in input().split()]
    alice = set(alice)
    beatriz = set(beatriz)
    i = alice.intersection(beatriz)
    alice = alice - i
    beatriz = beatriz - i
    print(min(len(alice), len(beatriz)))
    n, m = map(int, input().split())
