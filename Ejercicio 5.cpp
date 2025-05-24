#include <stdio.h>


void concatenar(char *destino, char *origen){
	while(*destino != '\0'){
		destino++;
	}



while (*origen != '\0'){
	*destino = *origen;
	destino++;
	origen++;
}

*destino = '\0';
}



int main(){
	
	
	char cadena1[100], cadena2[100];
	
	
	printf("Ingrese la primera cadena:");
	fgets(cadena1, sizeof(cadena1), stdin);
	
	
	for(int i = 0; cadena1[i] != '\0'; i++){
		if(cadena1[i] == '\n'){
			cadena1[i] = '\0';
			break;
		}
	}
	
	printf("Ingrese la segunda cadena:");
	fgets(cadena2, sizeof(cadena2), stdin);	
	
	for(int i = 0; cadena2[i] != '\0'; i++){
		if(cadena2[i] == '\n'){
			cadena2[i] = '\0';
			break;
		}
	}
	
	
	concatenar(cadena1, cadena2);
	
	
	printf("\n Cadena resultante: %s \n", cadena1);
	
	
	
	
	
}
