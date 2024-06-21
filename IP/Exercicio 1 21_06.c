#include <stdio.h>


int main ()

{



int numerovalores = 0;
double fnumerovalores = 0;
float pmaiorvalor;
float pmenorvalor;
float soma = 0;
float valorconferir;
int qtdrepeticoes = 0;

while(numerovalores < 1 || numerovalores > 20) {
	printf("Digite quantos numeros tera lista (deve ser >0 e <=20) ");
	scanf("%d",&numerovalores);
}

fnumerovalores = numerovalores;

float vetor[numerovalores-1];

for(int i = 0;i<numerovalores;i++){
	printf("Digite o %d Numero da Lista ",i+1);
	scanf("%f",&vetor[i]);
}

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

