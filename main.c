#include <stdio.h>
void fizzbuzz(int numero);

int main() {
    int numero = 20;
    fizzbuzz(numero);
    return 0;
}

void fizzbuzz(int numero)
{
  for(int i =0; i<numero;i++)
  {

      if (i % 3 == 0 && i % 5 == 0)
      {
          printf("\nFizzbuzz\n");
      }
      else if (i % 3 == 0)
      {
          printf("\nFizz\n");
      }
      else if (i % 5 == 0)
      {
          printf("\nBuzz\n");
      }
  }
}
