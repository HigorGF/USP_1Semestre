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
    primeiro -> valor = 0;
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
    
    
    
    void ordenar(Node head) {   // organizar lista em ordem crescente
        Node temp = head;
        Node pointer;
        int x;
        while (temp->proximo != NULL) {
            pointer = temp->proximo;
            while (pointer != NULL) {
            if (pointer->valor < temp->valor) {
                x = temp->valor;
                temp->valor = pointer->valor;
                pointer->valor = x;
                }
            pointer = pointer->proximo;
            }
        temp = temp->proximo;
        }
    }


    //8 - Incluir na lista ordenada
    
    
    void incluir(Node a, int local, int valorn){
        ordenar(a);
        
        Node atras = NULL;
        for(int i = 1; i < local; i++){
            atras = a;
            a = a-> proximo;
        }
        
        Node novo = criarnode();
        novo -> valor = valorn;
        novo -> proximo = a;
        atras -> proximo = novo;
        
    }
    
    
    
    //9 - Excluir na lista ordenada

        void excluir(Node a, int local){
        ordenar(a);
        
        Node atras = NULL;
        Node afrente = a -> proximo;
        
        for(int i = 1; i < local; i++){
            atras = a;
            a = a-> proximo;
            afrente = afrente -> proximo;
        }
        
        atras -> proximo = afrente;
        free(a);
        
    }
    
 adicionarfim(primeiro,9);
 adicionarfim(primeiro,7);
 adicionarfim(primeiro,1);
 


excluir(primeiro,3);


printf("Valor %d",primeiro -> valor); 
return 0;
}