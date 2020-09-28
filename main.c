#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Funciones.h"

int main()
{
    int primerOperando;
    int segundoOperando;
    int banderaPrimerOperando;
    int banderaSegundoOperando;
    int resultadoBanderas;
    int opcion;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    int totalFactorial1;
    int totalFactorial2;
    float resultadoDivision;

    banderaPrimerOperando = 0;
    banderaSegundoOperando= 0;

    do{
        printf("***********************\n");
        printf("**    CALCULADORA    **\n");
        printf("***********************\n");


          if (banderaPrimerOperando == 0)
          {
              printf("1. Ingrese  Primer operando (A = X)\n");

          }
          else
          {
              printf("2. Modifique el primer operando : (x = %d)\n",primerOperando);
          }

          if (banderaSegundoOperando == 0)
          {
              printf("2. Ingrese  Segundo operando (B = Y) \n");

          }
          else
          {
              printf("2. Modifique el segundo operando:(y = %d)\n",segundoOperando);
          }

          printf("3. Calcular todas las operaciones\n\n");

          if(banderaPrimerOperando == 0 && banderaSegundoOperando == 0)
          {
                  printf("    a)suma (A+B)\n    b)resta (A-B)\n    c)division (A/B) \n    d)multiplicacion (A*B) \n    e)factorial (A!) \n\n");
          }
          else
          {
                  printf("    a)suma (%d+%d) \n",primerOperando,segundoOperando);
                  printf("    b)resta (%d+%d) \n",primerOperando,segundoOperando);
                  printf("    c)division (%d+%d) \n",primerOperando,segundoOperando);
                  printf("    d)multiplicacion (%d+%d) \n",primerOperando,segundoOperando);
                  printf("    e)factorial  (%d!) \n\n",primerOperando);
          }

          printf("4. Informar resultados \n\n");

          if(resultadoBanderas == 0)
          {
                  printf(" El resultado de A+B es: r \n El resultado de A-B es: r \n El resultado de A/B es: r \n El resultado de A*B es: r  \n El factorial de A es: r1 y El factorial de B es: r2 \n\n");
          }
          else
          {
                  printf("   a) La suma total de (%d+%d) es : %d \n",primerOperando,segundoOperando,resultadoSuma);
                  printf("   b) La resta de (%d-%d) es : %d \n",primerOperando,segundoOperando,resultadoResta);
                  printf("   c) La division entre (%d/%d) es : %f \n",primerOperando,segundoOperando,resultadoDivision);
                  printf("   d) La multiplicacion entre (%d*%d) es : %d \n",primerOperando,segundoOperando,resultadoMultiplicacion);
                  printf("   e) El factorial de (%d!) es: %d y El factorial de (%d!) es :  %d \n\n",primerOperando,totalFactorial1,segundoOperando,totalFactorial2);

          }

          printf("5. Salir \n\n");


          printf("Elija una opcion: ");
          scanf("%d", &opcion);


           switch(opcion)
       {
            case 1:
                printf("1. Ingresar primer operando (A=x)\n");
                scanf("%d",&primerOperando);
                banderaPrimerOperando = 1;
            break;

            case 2:
                printf("1. Ingresar 2do operando (B=y)\n");
                scanf("%d",&segundoOperando);
                banderaSegundoOperando = 1;
            break;

            case 3:if (banderaPrimerOperando == 1 && banderaSegundoOperando ==1)
                    {
                            printf("   a)suma (%d+%d) \n",primerOperando,segundoOperando);
                            resultadoSuma = suma(primerOperando,segundoOperando);

                            printf("   b)resta (%d-%d) \n",primerOperando,segundoOperando);
                            resultadoResta = resta(primerOperando,segundoOperando);

                            if (primerOperando !=0 || segundoOperando!=0 )
                            {
                                printf("   c)division (%d/%d) \n",primerOperando,segundoOperando);
                                resultadoDivision = division(primerOperando,segundoOperando);
                            }
                            else
                            {
                                printf("   No se puede dividir por 0 \n");
                            }

                            printf("   d)multiplicacion (%d*%d) \n",primerOperando,segundoOperando);
                            resultadoMultiplicacion = multiplicacion(primerOperando,segundoOperando);

                            if (primerOperando >= 0 && segundoOperando >= 0)
                            {
                                printf("   e)factorial de (%d!) y de (%d!)\n",primerOperando,segundoOperando);

                                totalFactorial1 = factorial(primerOperando);

                                totalFactorial2 = factorial(segundoOperando);
                            }
                            else
                            {
                                printf("   No se puede sacar el operando de un numero negativo \n");
                            }

                    }
                    else
                    {
                        printf("Error, No ingresaste ningun numero\n");
                    }

                        resultadoBanderas = 1;
                        break;


            case 4:if (banderaPrimerOperando == 1 && banderaSegundoOperando ==1)
                    {
                            if(resultadoBanderas == 1)
                            {



                            printf("   a) La suma de (%d+%d) es : %d \n",primerOperando,segundoOperando,resultadoSuma);

                            printf("   b) La resta de (%d-%d) es : %d \n",primerOperando,segundoOperando,resultadoResta);

                          if(segundoOperando!=0)
                            {
                            printf("   c) La division entre (%d/%d) es : %f \n",primerOperando,segundoOperando,resultadoDivision);
                            }
                        else{
                            printf("   no se puede dividir por 0");
                            }

                            printf("   d) La multiplicacion entre (%d*%d) es : %d \n",primerOperando,segundoOperando,resultadoMultiplicacion);

                          if (primerOperando >= 0 && segundoOperando >=0)
                            {
                            printf("   e) El factorial de (%d!) es: %d y El factorial de (%d!) es :  %d \n",primerOperando,totalFactorial1,segundoOperando,totalFactorial2);
                            }
                        else
                            {
                            printf("   No se puede sacar factorial de numeros negativos \n");
                            }
                            resultadoBanderas = 0;
                        }
                        else
                        {
                            printf("   Primero deberia realizar el calculo. Vuelva a intentar. \n");
                        }
                    }
                    else
                        {
                            printf("   No hay resultados porque no ingresaste ningun numero previamente \n");
                        }
                        break;
                case 5:
                        printf("Gracias por utilizar la calculadora \n");
                break;
       }

        system("pause");
        system("cls");
        }while(opcion !=5);




    return 0;
}
