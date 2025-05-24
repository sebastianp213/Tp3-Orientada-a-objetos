#include <stdio.h>

void copiarArreglo(int *origen, int *destino, int n){
	for(int i = 0; i < n; i++){
		*(destino+i) = *(origen +i);
	}
}


int main(){
	
	int n;
	
	
	printf("Ingrese la cantidad de elementos del arreglo: ");
	scanf("%d", &n);
	
	int arregloOriginal[n];
	int arregloCopia[n];
	
	printf("Ingrese %d elementos para el arreglo original: \n", n);
	for(int i = 0; i<n; i++){
		printf("Elemento %d: \n", i+1);
		scanf("%d", &arregloOriginal[i]);
	}
	
	
	copiarArreglo(arregloOriginal, arregloCopia, n);
	
	
	printf("Arreglo copiado \n");
	for(int i = 0; i<n; i++){
		printf("Elemento %d: %d\n", i+1, arregloCopia[i]);
	}
	
	
	
	
	
	
	
	
	
	
}
