#include <stdio.h>

int main()
{
	char vetor1[100];
	char vetor2[100];
    int primeiro = 0;

    
    

	printf("Insira a primeira string no vetor 1 (No max 100 letras) ");
	scanf("%99s",vetor1);

    printf("Insira a primeira string no vetor 1 (No max 100 letras) ");
	scanf("%99s",vetor2);
    
    int tamanho1 = 0;
    while (vetor1[tamanho1] != '\0') {
        tamanho1++;
    }

    int tamanho2 = 0;
    while (vetor2[tamanho2] != '\0') {
        tamanho2++;
    }
    
    
    int menortamanho;
    
    
    
    if(tamanho1 < tamanho2){
        menortamanho = tamanho1;
        primeiro = 1;
    }
    
    if(tamanho1 > tamanho2){
        menortamanho = tamanho2;
        primeiro = 2;
    }
    
    for(int i = 0; i < menortamanho; i++){
        if(vetor1[i] < vetor2[i]){
            primeiro = 1;
            break;
        }
        
        if(vetor1[i] > vetor2[i]){
            primeiro = 2;
            break;
        }
    }
    
    if(primeiro == 1){
        printf("Primeiro é ");
        for(int i=0;i < tamanho1;i++){
            printf("%c",vetor1[i]);
        }
        
        printf("\nSegundo é ");
        for(int i=0;i < tamanho2;i++){
            printf("%c",vetor2[i]);
        }
    }
    
    
    if(primeiro == 2){
        printf("Primeiro é ");
        for(int i=0;i < tamanho2;i++){
            printf("%c",vetor2[i]);
        }
        
        printf("\nSegundo é ");
        for(int i=0;i < tamanho1;i++){
            printf("%c",vetor1[i]);
        }
    }



    if(primeiro == 0){
        printf("São Iguais");
    }
    
    
    
	return 0;
}


