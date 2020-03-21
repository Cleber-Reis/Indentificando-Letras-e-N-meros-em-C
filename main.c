#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>


int main ()
{
      setlocale(LC_ALL,"Portuguese");
      time_t data_tempo;
      time(&data_tempo);
      struct tm *tempo = localtime(&data_tempo);
      struct tm *data = localtime(&data_tempo);
      printf("\nBelo Horizonte, %d de %d de %d", data->tm_mday, data->tm_mon + 1, data->tm_year + 1900);
      printf("\n%d horas, %d minutos e %d segundos\n\n\n", tempo->tm_hour, tempo->tm_min, tempo->tm_sec);




      float a, b, c;

      printf("Digite um número com dois números depois da virgula:\n");
      scanf("%f", &a);

      printf("Parte inteira do número digitado: %d\n", (int) a);
      printf("Parte fracionária do número digitado: %f\n", a - (int) a);










      printf("\n");
      getchar();
      system("pause");
      return 0;
}
