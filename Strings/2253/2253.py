def verNum(s):
    n = ["0","1","2","3","4","5","6","7","8","9"]
    for i in s:
        if i in n:
            return True
    return False
def interval(s):
    for i in s:
        if ord(i)<48 or 57<ord(i)<65 or 90<ord(i)<97 or ord(i)>122:
            return False
    return True
while True:
    try:
        s = input()
        if s != s.upper() and s != s.lower() and verNum(s) and 6<=len(s)<=32 and interval(s):
            print("Senha valida.")
        else:
            print("Senha invalida.")
    except EOFError:
        break