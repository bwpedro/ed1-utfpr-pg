#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[100];
    int chave = 0, i = 0;

    printf("Qual a chave?\n");
    scanf("%d",&chave);

    printf("Frase: ");
    scanf("%s",frase);

    // converte minusculo para maiusculo
    for(i = 0; i < strlen(frase); i++){
        frase[i] = toupper(frase[i]);
    }

    i = 0;

    while (frase[i] != '\0'){

        if (frase[i] == 32){
            frase[i] = 32;
        } else if (frase[i] + chave > 90){
            frase[i] = (frase[i] - 26) + chave;
        } else {
            frase[i] = frase[i] + chave;
        }
        i++;
    }

    printf("%s\n",frase);
    return 0;
}