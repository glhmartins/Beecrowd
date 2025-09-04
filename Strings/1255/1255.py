n = int(input())
for _ in range(n):
    alphabet = [0] * 26
    string = input().lower()
    for i in string:
        if i.isalpha():
            alphabet[ord(i)-97] += 1
    maior = max(alphabet)
    for j in range(26):
        if alphabet[j] == maior:
            print(chr(j+97), end = "")
    print()