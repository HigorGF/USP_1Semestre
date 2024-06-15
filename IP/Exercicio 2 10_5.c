#include <stdio.h>


int main ()

{

//oi

int numerovalores = 0;
double fnumerovalores = 0;
float pmaiorvalor;
float pmenorvalor;
float soma = 0;
float valorconferir;
int qtdrepeticoes = 0;
float vetor[20];







for(int i = 0;i<20;i++){
    float valoratual = 0;
	printf("Digite o %d Numero da Lista (Max 20 e Negativos finalizam)",i+1);
	scanf("%f",&valoratual);
	if(valoratual < 0){
	    break;
	}
	vetor[i] = valoratual;
	numerovalores++;
	
}

fnumerovalores = numerovalores;
float maiorvalor = vetor[0];
float menorvalor = vetor[0];



for(int i = 0 ;i<numerovalores;i++){
	
	if(vetor[i] > maiorvalor) {
	maiorvalor = vetor[i];
	}	

	if(vetor[i] < menorvalor){
	menorvalor = vetor[i];
	}	
}


for(int i = 0;i<numerovalores;i++){
	
	if(vetor[i] == maiorvalor) {
	pmaiorvalor = i+1;
	break;
	}	
}

for(int i = 0;i<numerovalores;i++){
	
	if(vetor[i] == menorvalor){
	pmenorvalor= i+1;
	break;
	}	
}



for(int i = 0;i<numerovalores;i++){
	soma = soma + vetor[i];
		
}


float media = soma/fnumerovalores;



printf("Maior Valor e %f \n",maiorvalor);
printf("Menor Valor e %f \n",menorvalor);
printf("Posicao do primeiro Maior Valor e %f \n",pmaiorvalor);
printf("Posicao do primeiro Menor Valor e %f \n",pmenorvalor);
printf("Soma e %f \n",soma);
printf("Media e %f \n",media);





printf("Digite o numero que voce quer conferir repeticoes ");
scanf("%f",&valorconferir);


for(int i = 0;i<numerovalores;i++){
	
	if(vetor[i] == valorconferir){
	qtdrepeticoes++;
	printf("O numero %f apareceu na posicao %d \n",valorconferir,i+1);
	}	
}



printf("O numero %f repete %d vezes",valorconferir,qtdrepeticoes);

return 0;
}

