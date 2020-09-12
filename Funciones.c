#include "Funciones.h"

/*Funcion de suma en la cual se incluyen dos parametros en lo que retorna la suma de los 2 parametros */

int suma (int numero1, int numero2)

{
    return numero1 + numero2;
}

/*Funcion de resta en la cual se incluyen dos parametros en lo que retorna la resta de los 2 parametros */

 int resta (int numero1, int numero2)

{
    return numero1 - numero2;
}


/*Funcion de multiplicacion en la cual se incluyen dos parametros en lo que retorna la multiplicacion de los 2 parametros */

 int multiplicacion (int numero1, int numero2)

{
    return numero1 * numero2;
}


/*Funcion de division en la cual se incluyen dos parametros en lo que retorna la division de los 2 parametros */

float division (int numero1, int numero2)

{
    return  (float)numero1 /numero2;
}



int factorial(int numero)
{

    int resultado;

    if (numero == 0)
    {
        resultado = 1;
    }

    else
    {
        resultado = numero* factorial(numero-1);
    }
    return resultado;
}

