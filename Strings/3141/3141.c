#include <stdio.h>

int main(){
    char nome[51];
    int da, ma, aa, dn, mn, an;
    gets(nome);
    scanf("%d/%d/%d", &da, &ma, &aa);
    scanf("%d/%d/%d", &dn, &mn, &an);
    if (da == dn && ma == mn){
        printf("Feliz aniversario!\n");
        printf("Voce tem %d anos %s.\n", aa-an, nome);
    }
    else if (ma > mn) printf("Voce tem %d anos %s.\n", aa-an, nome);
    else if (ma == mn && da>dn) printf("Voce tem %d anos %s.\n", aa-an, nome);
    else printf("Voce tem %d anos %s.\n", aa-an-1, nome);
    return 0;
}