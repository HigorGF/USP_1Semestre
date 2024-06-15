
#include <stdio.h>

short int main()
{
    short int qtddenumeros = 0;
    short int qtddenumerosprimos = 0;
    
	while(qtddenumeros <= 0){
	printf("Quantos Numeros Voce ira colocar? (Que seja maior que 0) \n");
	scanf("%hi", &qtddenumeros);
	}
	
    short int i=1;
	while (i <= qtddenumeros){
    
        short int numeroatual = 0;
        while(numeroatual <= 0){
        printf("Digite os Numeros (Inteiros Maiores que Zero): \n");
    	scanf("%hi", &numeroatual);
        }

    
        short int eprimo = 1;
    	if(numeroatual != 2){
    	for(short int a=2;a<numeroatual;a++){
    		if(numeroatual%a == 0){
    			eprimo = 0;
    			break;
    		    }
    	    }	
    	}
    	
    	if(eprimo == 1){
    	    qtddenumerosprimos++;
    	}
    
        i++;
	}
    
    printf("Tem %hi primos", qtddenumerosprimos);
    return qtddenumerosprimos;
}
