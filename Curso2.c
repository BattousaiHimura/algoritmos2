#include <stdio.h>
#include <stdlib.h>  //include es la directiva del preprocesador que sirve para indicarle al complilador que vas a incluir un archivo al codigo actual
//stdio.h es una biblioteca de funciones (o tambien llamada de cabecera, porque .h=Header) stdio = Standard Input/Output
int main() {///Main = funcion principal, es el punto de arranque del programa, lo que este dentro de las llaves será lo que ejecute el programa
    printf("Mi primer programa en C\n");
    printf("Hola mundo!");
    system("pause");
    return 0; //printf es la funcion que puede ser utilizada gracias a la biblioteca stdio. Su funcion es imprimir con formato.
}
