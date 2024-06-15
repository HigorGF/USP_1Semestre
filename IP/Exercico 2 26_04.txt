
#include <stdio.h>

short int main()
{
    short int epalindromo = 0;
    short int numerotestado = 0;

	printf("Qual numero que você deseja ver se e palindromo? (Que seja maior que 0) \n");
	scanf("%hi", &numerotestado);

    if(numerotestado > 0){
       
        short int numerodigitos = -1;
        short int tempnumerotestando = numerotestado;
        short int a = 1;
        
        while(a != 0){
        a = tempnumerotestando%10;
        tempnumerotestando =  tempnumerotestando/10;
        numerodigitos ++;
        
        }
        
        epalindromo = 1;
        for(short int i=1;i<(numerodigitos/2)+1;i++){ //1 e 2
            short int a = 10;
            short int b = 1;
          
        //10000
        //5  
        //2  
        
            for(short int n=1;n<numerodigitos-i;n++){ // 1 2 3    4
            a = a*10;
            //a 10000
            }
            for(short int n=1;n<i;n++){ //0
            b = b*10;      
           //b 1
            }
           
           
           if( (numerotestado/a)%10 != (numerotestado/b)%10  ){
              epalindromo = 0;
              break;
           }
           
           
        }
       
       
       

            
    }

    printf("Resultado %hi", epalindromo);
    return epalindromo;
}
