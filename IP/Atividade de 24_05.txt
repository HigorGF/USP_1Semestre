#include <stdio.h>

int main()
{
	int num = 30; //Facilita debugar
	int qtdnumeros_atuais = 0;
	int vetor[num];
	int vetor_ord[num];
	int valorprocurado;
    
    int organizar(int vetora[]){
    	for(int i=0; i < qtdnumeros_atuais; i++){
        	for(int j=0; j < qtdnumeros_atuais-i-1; j++){
            	if(vetora[j] > vetora[j+1]){
                	int a = vetora[j];
                	vetora[j] = vetora[j+1];
                	vetora[j+1] = a;
        
            	}
        	}
    	}
    }
    
    
    
    int buscabinaria(int vetora[],int valorprocuradoa,int inicio,int fim){

        if(fim >= inicio){
            
            int meio = (fim+inicio)/2;
            if(vetora[meio] > valorprocuradoa){
                return buscabinaria(vetora,valorprocuradoa,inicio,meio-1);
            }
            
            if(vetora[meio] < valorprocuradoa){
                return buscabinaria(vetora,valorprocuradoa,meio+1,fim);;
            }
            
            if(vetora[meio] == valorprocuradoa){
                return meio;
        	}
        	
        }
        
        return -1;

    }    
    
    
    
    
    
    
    
	for(int i=0; i < num; i++){
    	printf("Insira valores nesse vetor ");
    	scanf("%d",&vetor[i]);
    	qtdnumeros_atuais++;
    	organizar(vetor);
	}
    
    


    
    printf("Vetor é ");
    
	for(int i=0; i < num; i++){
    	printf("%d ",vetor[i]);
	}
    
    
    printf("\nInsira qual valor buscar ");
    scanf("%d",&valorprocurado);
    
    
    int posisao = buscabinaria(vetor,valorprocurado,0,num-1)+1;
    
    
    if(posisao > 0){
        printf("Achei o valor %d na posisao %d",valorprocurado,posisao);
    }
    
    if(posisao <= 0){
        printf("Não achei o valor %d",valorprocurado);
    }
    
	return 0;
}


