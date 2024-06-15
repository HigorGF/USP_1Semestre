#include <stdio.h>

int main()
{
    //1- Criando Matriz
    int Colunas;
    int Linhas;
   
    printf("Numero de Colunas: ");
    scanf("%d",&Colunas);
 
    printf("Numero de Linhas: ");
    scanf("%d",&Linhas);  
   
    int matriz[Linhas][Colunas];
   
   
    //2-Inserindo valores
    void inserirvalor(int m[Linhas][Colunas],int valor,int lin, int col){
        m[lin-1][col-1] = valor;
    }
   

   
    //3-A
    void maiorlinha(int m[Linhas][Colunas]){
        for(int i=0;i<Linhas;i++){
            int maiorvalor = m[i][0];
            for(int j=0;j<Colunas;j++){
                if(m[i][j] > maiorvalor){
                    maiorvalor = m[i][j];
                }
            }
            printf("Maior da linha %d e %d \n",i+1,maiorvalor);
        }
    }
   
    //3-B
    void maiorcoluna(int m[Linhas][Colunas]){
        for(int i=0;i<Colunas;i++){
            int maiorvalor = m[0][i];
            for(int j=0;j<Linhas;j++){
                if(m[j][i] > maiorvalor){
                    maiorvalor = m[j][i];
                }
            }
            printf("Maior da coluna %d e %d \n",i+1,maiorvalor);
        }
    }
   
   
    //3-C
    void menorlinha(int m[Linhas][Colunas]){
        for(int i=0;i<Linhas;i++){
            int menorvalor = m[i][0];
            for(int j=0;j<Colunas;j++){
                if(m[i][j] < menorvalor){
                    menorvalor = m[i][j];
                }
            }
            printf("Menor da linha %d e %d \n",i+1,menorvalor);
        }
    }    


    //3-D
    void menorcoluna(int m[Linhas][Colunas]){
        for(int i=0;i<Colunas;i++){
            int menorvalor = m[0][i];
            for(int j=0;j<Linhas;j++){
                if(m[j][i] < menorvalor){
                    menorvalor = m[j][i];
                }
            }
            printf("Menor da coluna %d e %d \n",i+1,menorvalor);
        }
    }
   
   
    //4-a
    void acharmaior(int m[Linhas][Colunas]){
        int maiorvalor = m[0][0];
        int l = 0;
        int c = 0;        
        for(int i=0;i<Colunas;i++){
            for(int j=0;j<Linhas;j++){
                if(m[j][i] > maiorvalor){
                    maiorvalor = m[j][i];
                    l = j;
                    c = i;
                }
            }
        }
        printf("Maior da matriz e %d, na coluna %d, linha %d \n",maiorvalor,c+1,l+1);
    }
   
    //4-b
    void acharmenor(int m[Linhas][Colunas]){
        int menorvalor = m[0][0];
        int l = 0;
        int c = 0;        
        for(int i=0;i<Colunas;i++){
            for(int j=0;j<Linhas;j++){
                if(m[j][i] < menorvalor){
                    menorvalor = m[j][i];
                    l = j;
                    c = i;
                }
            }
        }
        printf("Maior da matriz e %d, na coluna %d, linha %d \n",menorvalor,c+1,l+1);        
    }    
   
   
    //4-c
    void somalinha(int m[Linhas][Colunas]){
        for(int i=0;i<Linhas;i++){
            int soma = 0;
            for(int j=0;j<Colunas;j++){
                soma += m[i][j];
            }
            printf("Na linha %d, soma e %d \n",i,soma);
        }
    }   
   
   
    //4-d
    void somacoluna(int m[Linhas][Colunas]){
        for(int i=0;i<Colunas;i++){
            int soma = 0;
            for(int j=0;j<Linhas;j++){
                soma += m[j][i];
            }
            printf("Na coluna %d, soma e %d \n",i,soma);
        }
    }   
   
    //4-e
    void maiorsomalinha(int m[Linhas][Colunas]){
        int l = 0;
        int maiorvalor;
        for(int i=0;i<Linhas;i++){
            int soma = 0;
            for(int j=0;j<Colunas;j++){
                soma += m[i][j];
            }
            if(i==0){
                maiorvalor = soma;
            }
            if(soma > maiorvalor){
                maiorvalor = soma;
                l = i;
            }
        }
        printf("A soma e maior na linha %d, sendo %d",l,maiorvalor);
    }     
  
    //4-f
    void maiorsomacoluna(int m[Linhas][Colunas]){
        int c = 0;
        int maiorvalor;
        for(int i=0;i<Colunas;i++){
            int soma = 0;
            for(int j=0;j<Linhas;j++){
                soma += m[j][i];
            }
            if(i==0){
                maiorvalor = soma;
            }
            if(soma > maiorvalor){
                maiorvalor = soma;
                c = i;
            }
        }
        printf("A soma e maior na linha %d, sendo %d",c,maiorvalor);
    }    
  

    int mutiplicar(int m[Linhas][Colunas], int n[Linhas2][Colunas2]){
        if(Colunas != Linhas2){
            printf("ERRO!, MATRIZES NAO PODEM SER MUTIPLICADAS")
            return 0;
            break;
        }
        int result[Linhas][Colunas2];


        for(i=0;i<Linhas;i++){
            for(j=0;j<Colunas;i++){
                for(k=0;k<Linhas2;k++){
                    n += m[i][j]*n[j][k]
                }      
            }
        }


    }
  
    inserirvalor(matriz,1,1,1);
    inserirvalor(matriz,5,2,1);
    inserirvalor(matriz,3,1,2);
    inserirvalor(matriz,7,2,2);   
   
   
   
    return 0;
}