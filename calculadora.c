#include <stdio.h>
#include<math.h>

void sum(int a, int b)
{
  printf ("Resultado: %d\n", a+b);  
}


void rest(int a, int b)
 {
    printf("Resultado: %d\n", a - b);
 }


void mult(int a, int b)
 {
    printf("Resultado: %d\n", a * b);
 }


void divi(int a, int b)
 {
    if (b == 0)
      {
        printf("Error: División por cero\n");
      }
    else 
      {
        printf("Resultado: %d\n", a / b);
      }
}


void pote(int a, int b) 
{
    printf("Resultado: %.2lf\n", pow(a, b));
}


void raiz_2(int a)
 {
    if (a < 0) 
      {
        printf("Error: No se puede calcular raíz cuadrada de número negativo\n");
      } 
    else 
      {
        printf("Resultado: %.2lf\n", sqrt(a));
      }
}


int main() 
{
    int op, a, b;

    printf("Seleccione un número\n1:Suma\n2:Resta\n3:Multiplicación\n4:División\n5:Potenciación\n6:Raíz Cuadrada\n0:Fin\nOpción: ");
    scanf("%d", &op);

    if (op > 0 && op < 6) {
        printf("Ingresa un número: ");
        scanf("%d", &a);
        printf("Ingresa otro número: ");
        scanf("%d", &b);

        switch (op) {
            case 1: sum(a, b); break;
            case 2: rest(a, b); break;
            case 3: mult(a, b); break;
            case 4: divi(a, b); break;
            case 5: pote(a, b); break;
        }
    } else if (op == 6) {
        printf("Ingresa un número: ");
        scanf("%d", &a);
        raiz_2(a);
    } else if (op == 0) {
        printf("Fin del programa.\n");
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
}
