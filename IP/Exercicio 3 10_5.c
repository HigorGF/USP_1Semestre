#include <stdio.h>


int main ()

{


float vetor1[20];
float vetor2temp[20];
float vetor2[20];
float vetor3[40];
int numerovalores1 = 0;
int numerovalores2temp = 0;
int numerovalores2 = 0;
int numerovalores3 = 0;


for(int i = 0;i<20;i++){
    float valoratual = 0;
	printf("Digite o %d Numero da Lista 1 (Max 20 e Negativos finalizam)",i+1);
	scanf("%f",&valoratual);
	if(valoratual < 0){
	    break;
	}
	vetor1[i] = valoratual;
	numerovalores1++;
	
}


for(int i = 0;i<20;i++){
    float valoratual = 0;
	printf("Digite o %d Numero da Lista 2 (Max 20 e Negativos finalizam)",i+1);
	scanf("%f",&valoratual);
	if(valoratual < 0){
	    break;
	}
	vetor2temp[i] = valoratual;
	numerovalores2temp++;
	
}

//O vetor 2 pode repetir então preciso eliminar as repetições dele
for(int i = 0; i < numerovalores2temp; i++){
    int repetiu = 0;
    for(int j = i+1; j<numerovalores2temp; j++){
        
        if(vetor2temp[i] == vetor2temp[j]){
        repetiu = 1;
        }

    }
    if(repetiu==0){
    vetor2[numerovalores2] = vetor2temp[i];
    numerovalores2++;
    }
    
}





for(int i = 0;i<numerovalores1;i++){
    for(int j = 0;j<numerovalores2;j++){
        if(vetor1[i] == vetor2[j]){
            vetor3[numerovalores3] = vetor1[i];
            numerovalores3++;
        }
        
    }

}











printf("Os valores que repetiram foram: \n");

for (int i = 0;i<numerovalores3;i++){
    printf("%f \n",vetor3[i]);
}



return 0;
}

