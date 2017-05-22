#include <stdio.h>
#include <string.h>


void ordenaInteiros();
void ordenaReais();
void conversorCF();
int contaletras(char string[50]);

int main(){
    char string[50];

    ordenaInteiros();
    ordenaReais();
    conversorCF();

    printf("Informe uma string\n");
    scanf("%s",string);
    contaletras(string);

    return 0;
}

void ordenaInteiros(){
    int a,b,c,aux;
    
    printf("Informe 3 valores inteiros:\n");
    scanf("%d %d %d", &a,&b,&c);
    
    if (a < b){
        aux = a;
        a = b;
        b = aux;
	}
    
    if (b < c){
        aux = b;
        b = c;
        c = aux;
	}
    
    if (a < b){
        aux = a;
        a = b;
        b = aux;
	}
    
    printf("Os valores em ordem são: %d, %d, %d.\n", c, b, a);
}

void ordenaReais(){
   float a,b,c,aux;
    
    printf("Informe 3 valores reais:\n");
    scanf("%f %f %f", &a,&b,&c);
    
    if (a < b){
        aux = a;
        a = b;
        b = aux;
	}
    
    if (b < c){
        aux = b;
        b = c;
        c = aux;
	}
    
    if (a < b){
        aux = a;
        a = b;
        b = aux;
	}
    
    printf("Os valores em ordem são: %f, %f, %f.\n", c, b, a);
}

void conversorCF(){
    char escala;
    float temperatura;

    printf("Qual escala você está?\nC - Celsius\nF - Fahrenheit\n");
    scanf("%c",&escala);

    printf("Qual a temperatura?\n");
    scanf("%f",&temperatura);

    if (escala == 'c' || escala == 'C'){
        temperatura = (1.8*temperatura)+32;
        printf("A temperatura é %f Fahrenheit",temperatura);
    } else if (escala == 'f' || escala == 'F'){
        temperatura = (temperatura-32)/1.8;
        printf("A temperatura é %f Celsius",temperatura);
    }
}

int contaletras(char string[50]){
    int contMais, contMinus;
    int tamanho = strlen(string);

    for(int i=0;i<tamanho;i++){
        if(string[i] >= 65 && string[i] <= 90){
            contMais++;
        } else if (string[i] >= 97 && string[i] <= 122){
            contMinus++;
        }
    }
    return 0;
}