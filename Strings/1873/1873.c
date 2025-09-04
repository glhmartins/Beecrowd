#include <stdio.h>
#include <string.h>

int rajesh(char *r, char *s) {
    if (strcmp(r, "tesoura") == 0 && (strcmp(s, "papel") == 0 || strcmp(s, "lagarto") == 0)) return 1;
    if (strcmp(r, "papel") == 0 && (strcmp(s, "pedra") == 0 || strcmp(s, "spock") == 0)) return 1;
    if (strcmp(r, "pedra") == 0 && (strcmp(s, "lagarto") == 0 || strcmp(s, "tesoura") == 0)) return 1;
    if (strcmp(r, "lagarto") == 0 && (strcmp(s, "spock") == 0 || strcmp(s, "papel") == 0)) return 1;
    if (strcmp(r, "spock") == 0 && (strcmp(s, "tesoura") == 0 || strcmp(s, "pedra") == 0)) return 1;
    return 0;
}

int sheldon(char *r, char *s) {
    if (strcmp(s, "tesoura") == 0 && (strcmp(r, "papel") == 0 || strcmp(r, "lagarto") == 0)) return 1;
    if (strcmp(s, "papel") == 0 && (strcmp(r, "pedra") == 0 || strcmp(r, "spock") == 0)) return 1;
    if (strcmp(s, "pedra") == 0 && (strcmp(r, "lagarto") == 0 || strcmp(r, "tesoura") == 0)) return 1;
    if (strcmp(s, "lagarto") == 0 && (strcmp(r, "spock") == 0 || strcmp(r, "papel") == 0)) return 1;
    if (strcmp(s, "spock") == 0 && (strcmp(r, "tesoura") == 0 || strcmp(r, "pedra") == 0)) return 1;
    return 0;
}

int main(void) {
    int n;
    scanf("%d", &n);
    char r[8], s[8];

    for (int i = 0; i < n; i++) {
        scanf("%s %s", r, s); 
        if (rajesh(r, s)) printf("rajesh\n");
        else if (sheldon(r, s)) printf("sheldon\n");
        else printf("empate\n");
    }
    return 0;
}
