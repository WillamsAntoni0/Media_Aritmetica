#include <stdio.h>
#include <stdlib.h>
   int main(){

    float materia1, materia2, materia3, materia4, materia5;
    printf("\n Informe a nota da materia 1:");
    scanf("%f", &materia1);
    printf("\n Informe a nota da materia 2:");
    scanf("%f", &materia2);
    printf("\n Informe a nota da materia 3:");
    scanf("%f", &materia3);
    printf("\n Informe a nota da materia 4:");
    scanf("%f", &materia4);
    printf("\n Informe a nota da materia 5:");
    scanf("%f", &materia5);

    float Soma = materia1 + materia2 + materia3;
    float Media = Soma / 3;
    printf("\n Rsultado da media: %f", Media);

   if(materia1 && materia2 && materia3 >= 6){
      printf("\n Aluno aprovado");
   }
   else{
     printf("\n Aluno reprovado"); 
   }

   
   
}