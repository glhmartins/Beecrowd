def rajesh(r,s):
    if r == "tesoura" and (s == "papel" or s == "lagarto"):
        return True
    elif r == "papel" and (s == "pedra" or s == "spock"):
        return True
    elif r == "pedra" and (s == "lagarto" or s == "tesoura"):
        return True
    elif r == "lagarto" and (s == "spock" or s == "papel"):
        return True
    elif r == "spock" and (s == "tesoura" or s == "pedra"):
        return True
    return False

def sheldon(r,s):
    if s == "tesoura" and (r == "papel" or r == "lagarto"):
        return True
    elif s == "papel" and (r == "pedra" or r == "spock"):
        return True
    elif s == "pedra" and (r == "lagarto" or r == "tesoura"):
        return True
    elif s == "lagarto" and (r == "spock" or r == "papel"):
        return True
    elif s == "spock" and (r == "tesoura" or r == "pedra"):
        return True
    return False

n = int(input())
for i in range(n):
    r,s = input().split()
    if rajesh(r,s):
        print("rajesh")
    elif sheldon(r,s):
        print("sheldon")
    else:
        print("empate")