money_operations = input().split()
money = int(money_operations[0])
operations = int(money_operations[1])
# variaveis dos players
D = money
E = money
F = money
D_operations = 0
E_operations = 0
F_operations = 0
if money>=1 and money<=1000000 and operations>=1 and operations<=10000:
    valor = 0
    # For para fazer a pergunta N vezes, caso a operação tenha len = 3 quer dizer q é compra ou venda, assim o valor
    # esta na posição [2] mas caso tenha len = 4 quer dizer q é aluguel e o valor esta na posição [3]
    for x in range(operations):
        operation = input().split()
        if len(operation) == 3:
            valor = int(operation[2])
        elif len(operation) == 4:
            valor = int(operation[3])
        # if da Dália
        if operation[1] == "D":
            if operation[0] == "C":
                D_operations = D_operations - valor
            elif operation[0] == "V":
                D_operations += valor
            elif operation[0] == "A":
                if operation[2] == "E":
                    D_operations += valor
                    E_operations = E_operations - valor
                elif operation[2] == "F":
                    D_operations += valor
                    F_operations = F_operations - valor
        # if do Elói
        if operation[1] == "E":
            if operation[0] == "C":
                E_operations = E_operations - valor
            elif operation[0] == "V":
                E_operations += valor
            elif operation[0] == "A":
                if operation[2] == "F":
                    E_operations += valor
                    F_operations = F_operations - valor
                elif operation[2] == "D":
                    E_operations += valor
                    D_operations = D_operations - valor
        # if do Félix
        if operation[1] == "F":
            if operation[0] == "C":
                F_operations = F_operations - valor
            elif operation[0] == "V":
                F_operations += valor
            elif operation[0] == "A":
                if operation[2] == "D":
                    F_operations += valor
                    D_operations = D_operations - valor
                elif operation[2] == "E":
                    F_operations += valor
                    E_operations = E_operations - valor
    D += D_operations
    E += E_operations
    F += F_operations
print(D, E, F)