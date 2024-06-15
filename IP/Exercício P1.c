#include <stdio.h>


//Questão - 1
int main()
{
    float valorcelsus;
    printf("Digite Valor em celsus");
    scanf("%f",&valorcelsus);
    print("Valor em Fahrenheit é %f",9*(valorcelsus/5)+32);

    return 0;
}



//Questão 2
int main()
{
    int valordecimal;
    int valorbinario = 0;
    printf("Digite Valor em decimal");
    scanf("%i",&valordecimal);
    if(valordecimal == 0){
        printf("Valor em binario é 0");
    }
    
    int valordecimal_temp = valordecimal;
    int numerovalores = 0;
    
    if(valordecimal != 0){
        while (valordecimal_temp != 0){
            valordecimal_temp = valordecimal_temp/2;
            numerovalores++;
        }
        
        printf("Valor em binario é %i \n",numerovalores);
        valordecimal_temp = valordecimal;
        int interações = numerovalores;
        
        while (valordecimal_temp != 0){
            
            int a = 1;
            
            
            
            for(int i = numerovalores; i > interações; i--){
                a = a*10;

            }
            
            
            valorbinario = valorbinario + (valordecimal_temp%2)*a;
            valordecimal_temp = valordecimal_temp/2;
            interações--;
 
        }
    }
    
    printf("Valor em binario é %i",valorbinario);

    return 0;
}



//Questão 3
int main()
{
    float maiorvalor;
    float menorvalor;
    float valoratual;
    float soma = 0;
    int quantosvalores;
    
        printf("Digite quantos valores");
        scanf("%i",&quantosvalores);
    
    
    for (int i=0;i<quantosvalores;i++){
        printf("Digite o proximo valor");
        scanf("%f",&valoratual);

        if(i == 0){
            maiorvalor = valoratual;
            menorvalor = valoratual;
        }
    
        if(valoratual > maiorvalor){
            maiorvalor = valoratual;
        }
 
        if(valoratual < menorvalor){
            menorvalor = valoratual;
        }
    
        soma = soma + valoratual;
        
        
    }
    
    float media = soma/quantosvalores;
    
    printf("Valor maior é %f, menor e %f, e media e %f",maiorvalor,menorvalor,media);

    return 0;
}


//Questão 4
int main()
{
    int vetor1[10];
    int vetor2[10];
    int vetor3[10];
    int vetor4[10];
    

    
    for (int i=0;i<10;i++){
        printf("Digite valores no vetor 1 ");
        int a;
        scanf("%d",&a);
        vetor1[i] = a;
    }
    
    for (int i=0;i<10;i++){
        printf("Digite valores no vetor 2 ");
        int a;
        scanf("%d",&a);
        vetor2[i] = a;
    }
    
    
    for (int i=0;i<10;i++){

        if(vetor1[i] >= vetor2[i]){
            vetor3[i] = vetor2[i];
            vetor4[i] = vetor1[i];
        }
    
        if(vetor2[i] >= vetor1[i]){
            vetor3[i] = vetor1[i];
            vetor4[i] = vetor2[i];
        }
        
        
    }
    
    
    return 0;
}



//Questão 5
int main()
{
    float maiorvalor;
    float menorvalor;
    float valoratual;
    float soma = 0;
    

    
    for (int i=0;i<6;i++){
        printf("Digite a proxima nota");
        scanf("%f",&valoratual);

        if(i == 0){
            maiorvalor = valoratual;
            menorvalor = valoratual;
        }
    
        if(valoratual > maiorvalor){
            maiorvalor = valoratual;
        }
 
        if(valoratual < menorvalor){
            menorvalor = valoratual;
        }
    
        soma = soma + valoratual;
        
        
    }
    
    float media = (soma-maiorvalor-menorvalor)/4;
    
    printf("Media e %f",media);

    return 0;
}
