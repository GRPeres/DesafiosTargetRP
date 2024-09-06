#include <stdio.h>
#include <string.h>

int qtdDeA(char* str){
    int soma = 0;
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            soma++;
        }
    }
    
    return soma;
}

int main() {

    char str[] = "A Calculei";
    
    int qtd = qtdDeA(str);
    
    printf("A letra 'a || A'  ocorre %d vez(es) na string.\n", qtd);
    
    return 0;
}
