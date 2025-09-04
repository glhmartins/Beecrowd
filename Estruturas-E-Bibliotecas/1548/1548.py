n = int(input())
lista_resultados = []
for x in range(n):
    movimentos = 0
    m = int(input())
    alunos = input().split()
    lista_alunos = []
    for y in alunos:
        lista_alunos.append(int(y))
    lista_sort = lista_alunos[:]
    lista_sort.sort(reverse=True)
    for z in range(len(lista_alunos)):
        if lista_alunos[z] == lista_sort[z]:
            movimentos+=1
    lista_resultados.append(movimentos)
for i in lista_resultados:
    print(i)