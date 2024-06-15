
#include <stdio.h>

int main()
{
    int dia =0, mes=0, ano=0;
    int cdia=0, cmes=0, cano=0;
    
    printf("Digite sua Data em (DD/MM/YYYY), (Coloque apenas anos DC)");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    if(ano > 0){
        cano = 1;
    }
    
    
    if(mes <= 12 && mes > 0){
        cmes = 1;
    }
    
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia <= 31 && dia > 0){
            cdia = 1;
        }
    }
    
    if(mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(mes == 2 && ano%4 == 0){
            if(dia <= 29 && dia > 0){
                cdia = 1;
            }
          
        } 
        
        if(mes != 2){
            if(dia <= 30 && dia > 0){
                cdia = 1;
            }
        }
    }
    
    if(cmes + cdia + cano == 3){
        printf("E uma data valida");
    }
    
    if(cmes + cdia + cano != 3){
        printf("Nao e uma data valida");
    }
    
    return 0;
}
