#include <stdio.h>

int contarOcurrencias(int *arr, int n, int valor){
	int contador = 0;
	
	
	
	for(int i = 0; i<n; i++){
		if(*(arr+i) == valor){
			contador++;
		}
	}
	return contador;
}


int main(){
	int n, numero;
	
	
	printf("Ingrese la cantidad de elementos del arreglo:");
	scanf("%d", &n);


int arreglo[n];


printf("Ingrese %d elementos: \n", n);
for(int i = 0; i<n; i++){
	printf("Elemento %d: ", i+1);
	scanf("%d", &arreglo[i]);
}

printf("Ingrese el numero a buscar en el arreglo:");
scanf("%d", &numero);

int resultado = contarOcurrencias(arreglo, n, numero);


printf("\n El numero %d aparece %d veces en el arreglo \n", numero, resultado);


}
