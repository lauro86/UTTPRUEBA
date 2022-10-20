#include<stdio.h>

int main() 
{
   float numero1,numero2,formula ;
   
 printf("Escribe un numero?\t\n");
 scanf("%f",&numero1 );
   
  printf("Escribe un segundo numero?\t\n");
  scanf("%f",&numero2 );
  
  formula = numero1 + numero2;
  
  printf("Tu resultado de esta suma es %.2f \n\n", formula);
  
  formula = numero1 - numero2;
  
  printf("Tu resultado de esta resta es %.2f \n\n", formula);
  
  formula = numero1 * numero2;
  
  printf("Tu resultado de esta multiplicacion es %.2f \n\n", formula);
  
  formula = numero1/numero2;
  
  printf("Tu resultado de esta division es es %.2f \n\n", formula);
  
  
return 0;
}


