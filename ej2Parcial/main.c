#include <stdio.h>
#include <stdlib.h>

int contarCaracter(char cadena[], char caracter){
	int cont = 0;
	for(int i = 0; cadena[i] != '\0'; i++){
		if(cadena[i] == caracter){
			cont++;
		}
	}
	return cont;
}

int main()
{
    char cadena[] = "fernando";
    char caracter = "n";
    int resultado;

    resultado = contarCaracter(cadena, caracter);

    printf("%d", resultado);
    return 0;
}
