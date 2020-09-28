#include <stdio.h>
 

/*
A. Número do andar
limite de tempo por teste1 segundo
limite de memória por teste256 megabytes
entradaentrada padrão
resultadosaída padrão
Vasya vai visitar seu colega Petya. Vasya sabe que o número do apartamento de Petya én.

Há apenas uma entrada na casa de Petya e a distribuição dos apartamentos é a seguinte: o primeiro andar contém 2 apartamentos, todos os outros andares contêm xapartamentos cada. Os apartamentos são numerados a partir de um, a partir do primeiro andar. Ou seja, os apartamentos no primeiro andar têm números1 e 2, os apartamentos no segundo andar têm números de 3 para ( x + 2 ), os apartamentos no terceiro andar têm números de ( x + 3 ) para ( 2 ⋅ x + 2 ), e assim por diante.

Sua tarefa é encontrar o número de andares em que Petya mora. Suponha que a casa seja sempre alta o suficiente para caber pelo menosn apartamentos.

Você tem que responder t casos de teste independentes.

Entrada
A primeira linha da entrada contém um inteiro t (1 ≤ t ≤ 1000) - o número de casos de teste. Entãot casos de teste a seguir.

A única linha do caso de teste contém dois inteiros n e x (1 ≤ n , x ≤ 1000) - o número do apartamento de Petya e o número de apartamentos em cada andar da casa, exceto o primeiro (há dois apartamentos no primeiro andar).

Resultado
Para cada caso de teste, imprima a resposta: o número do andar em que Petya mora.

Exemplo
entrada
4
7 3
1 5
22 5
987 13

resultado
3
1
5
77

*/

int main(void){
 
    unsigned short entrada = 0;
 
    scanf("%hu", &entrada);
    if(entrada  < 1 || entrada > 1000) return 1;
 
    while (entrada > 0)
    {
       unsigned short result = 0;
       unsigned short x = 0;
       unsigned short n = 0;
       unsigned short aps = 2;
 
       scanf("%hu", &n);
       if(n  < 1) return 1;
 
       scanf("%hu", &x);
       if(x > 1000) return 1;
 
        if(n == aps - 1 || n == aps){
            result = 1;
        } else {
            for(int andares = 2;; andares++){
               for(int y = 0; y < x; y++){
                    aps++;
                   if(aps == n){
                        result = andares;
                        break;
                   }
               }        
               if(result > 0) break; 
            }
        }
        printf("%d\n", result);
        entrada--;
    }
    return 0;
}