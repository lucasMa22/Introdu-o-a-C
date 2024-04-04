          #include <stdio.h>

          int main() {
              float temperatura;
              char escala_origem, escala_destino;
              float resultado;

              printf("Digite a temperatura: ");
              scanf("%f", &temperatura);

              printf("Digite a escala da temperatura (C para Celsius, F para Fahrenheit): ");
              scanf(" %c", &escala_origem);

              printf("Digite a escala desejada para a temperatura (C para Celsius, F para Fahrenheit): ");
              scanf(" %c", &escala_destino);

              if (escala_origem == 'C' && escala_destino == 'F') {
                  resultado = (9.0 / 5.0) * temperatura + 32;
                  printf("%.2f Celsius é equivalente a %.2f Fahrenheit\n", temperatura, resultado);
              } else if (escala_origem == 'F' && escala_destino == 'C') {
                  resultado = (5.0 / 9.0) * (temperatura - 32);
                  printf("%.2f Fahrenheit é equivalente a %.2f Celsius\n", temperatura, resultado);
              } else {
                  printf("As escalas fornecidas não são suportadas.\n");
              }

              return 0;
          }
