#include <stdio.h>


int main ()

{


float vetor1[20];
float vetor2[20];
float vetor3[40];
float vetor3temp[40];
int numerovalores1 = 0;
int numerovalores2 = 0;
int numerovalores3 = 0;
int numerovalores3temp = 0;


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
	vetor2[i] = valoratual;
	numerovalores2++;
	
}


for(int i = 0;i<numerovalores1;i++){
    for(int j = 0;j<numerovalores2;j++){
        if(vetor1[i] == vetor2[j]){
            vetor3temp[numerovalores3temp] = vetor1[i];
            numerovalores3temp++;
        }
        
    }

}




//Ambos os vetores podem repetir, então irei eliminar a repetição no merge
for(int i = 0; i < numerovalores3temp; i++){
    int repetiu = 0;
    for(int j = i+1; j<numerovalores3temp; j++){
        
        if(vetor3temp[i] == vetor3temp[j]){
        repetiu = 1;
        }

    }
    if(repetiu==0){
    vetor3[numerovalores3] = vetor3temp[i];
    numerovalores3++;
    }
    
}







printf("Os valores que repetiram foram: \n");

for (int i = 0;i<numerovalores3;i++){
    printf("%f \n",vetor3[i]);
}



return 0;
}

