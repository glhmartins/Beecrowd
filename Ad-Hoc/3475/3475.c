#include <stdio.h>

int main(){
    char x[10];
    scanf("%s", &x);
    if (x[0] == 'z'){
        printf("0\n");
    }
    else if (x[0] == 'u'){
        printf("1\n");
    }
    else if (x[0] == 'd'){
        printf("2\n");
    }
    else if (x[0] == 't'){
        printf("3\n");
    }
    else if (x[0] == 'q'){
        printf("4\n");
    }
    else if (x[0] == 'c'){
        printf("5\n");
    }
    else if (x[0] == 's' && x[3] == 's'){
        printf("6\n");
    }
    else if (x[0] == 's' && x[3] == 'e'){
        printf("7\n");
    }
    else if (x[0] == 'o'){
        printf("8\n");
    }
    else if (x[0] == 'n'){
        printf("9\n");
    }
    else if (x[0] == '0'){
        printf("zero\n");
    }
    else if (x[0] == '1'){
        printf("um\n");
    }
    else if (x[0] == '2'){
        printf("dois\n");
    }
    else if (x[0] == '3'){
        printf("tres\n");
    }
    else if (x[0] == '4'){
        printf("quatro\n");
    }
    else if (x[0] == '5'){
        printf("cinco\n");
    }
    else if (x[0] == '6'){
        printf("seis\n");
    }
    else if (x[0] == '7'){
        printf("sete\n");
    }
    else if (x[0] == '8'){
        printf("oito\n");
    }
    else if (x[0] == '9'){
        printf("nove\n");
    }
    return 0;
}