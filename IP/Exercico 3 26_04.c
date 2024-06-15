#include <stdio.h>

short int main()
{
    short int numerotestado = 0;
    short int numeroprocurado = 0;
    short int sequencia = 0;

	printf("Qual numero que você deseja testar? (Que seja maior que 0) \n");
	scanf("%hi", &numerotestado);

    printf("Qual numero que você deseja procurar? (Que seja maior que 0) \n");
	scanf("%hi", &numeroprocurado);

    if(numerotestado-numeroprocurado >= 0){
       
        short int tempnumerotestando = numerotestado;
        short int a = 1;
        short int b = 1;
        
        while(a != 0){
        a = tempnumerotestando%10;
        
        if(a == numeroprocurado){
   
            short int tempnumerotestandosequencia = tempnumerotestando/10;
            
            b = tempnumerotestandosequencia%10;
            
                if(b == numeroprocurado){
                    sequencia++;
                } 
        }
        
        tempnumerotestando =  tempnumerotestando/10;

        }

    }   
    
printf("Resultado %hi", sequencia);     
return sequencia;
}
