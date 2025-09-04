#include <stdio.h>
#include <string.h>

int main(){
    char name[100000];
    int condition = 0;
    scanf("%s", &name);
    for (int i = 0; i < strlen(name)-4; i++){
        if ((name[i] == 'Z' || name[i] == 'z') && (name[i+1] == 'E' || name[i+1] == 'e') && (name[i+2] == 'L' || name[i+2] == 'l') && (name[i+3] == 'D' || name[i+3] == 'd') && (name[i+4] == 'A' || name[i+4] == 'a')){
            condition = 1;
            break;
        }
    }
    if (condition == 1) printf("Link Bolado\n");
    else printf("Link Tranquilo\n");
    return 0;
}