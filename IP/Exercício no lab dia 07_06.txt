#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node *proximo;
} *Node;



int main()
{

    Node criarnode(){
        Node criado = malloc(sizeof(struct Node));
        return criado;
    }

    //1- Criando o primeiro nó
   
    Node primeiro = criarnode();
    primeiro -> valor = 13;
    primeiro -> proximo = NULL;
   
   
    //2- Adicionar no Inicio
   
   
    void adicionarinicio(Node a, int valor){
        a = criarnode();
        a -> valor = valor;
        a -> proximo = a;
       
    }
   
    //3- Adicionar no fim
   
    void adicionarfim(Node a, int valor){
        while(a -> proximo != NULL){
            a = a -> proximo;
        }
       
        a -> proximo = criarnode();
        a = a -> proximo;
        a -> valor = valor;
       
    }    
   
    //4 - Excluir no inicio
   
    void excluirinicio(Node a){
        Node b = a -> proximo;
        a -> valor = b -> valor;
        a -> proximo = b -> proximo;
       
    }      


    //5 - Excluir no fim
   
    void excluirfim(Node a){
        Node b = a -> proximo;
       
        while(b -> proximo != NULL){
            b = b -> proximo;
            a = a -> proximo;
        }
       
        a -> proximo = NULL;
        free(b);
    }      




    //6 - Procurar Valor na lista
    int procurarvalor(Node a, int valorprocurado){
        int b = 0;
       
        while(a != NULL){
            if(a -> valor == valorprocurado){
                b = 1;
                break;
            }
            a = a -> proximo;
        }
       
        return b;
    }
   
    //7 - Ordenar Elementos
    
    //Criando função para contar elementos antes
    
    int contar(Node a){
        int conta = 1;
        while(a -> proximo != NULL){
            conta++;
            a = a -> proximo;
        }
        return conta;
    }
    
    
    
    void ordenar(Node n){
        int num = contar(n);
        Node prim = n;
        
        for(int i = 0; i < num-1; i ++){
            Node anterior = NULL;
            Node a = prim;
            while(a -> proximo != NULL){
                
                Node b = a -> proximo;
                if(a -> valor > b -> valor){
                    if(a==prim){
                        prim = b;
                        
                
                    }
                
                    else{anterior -> proximo = b;}
                
                a -> proximo = b -> proximo;
                b -> proximo = a;
                
                anterior = b;
                 
               }
               
               else{
                   anterior = a;
                   a = a -> proximo;
               }
            }
        }
    }

adicionarfim(primeiro, 7);
adicionarfim(primeiro, 1);
adicionarfim(primeiro, 9);
adicionarfim(primeiro, 0);
adicionarfim(primeiro, 2);
adicionarfim(primeiro, 0);
ordenar(primeiro);




primeiro = primeiro -> proximo;

printf("Valor %d",primeiro -> valor); 
return 0;
}