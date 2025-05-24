#include <stdio.h>

int suma(int *arr, int n){
	int total = 0;
	for(int i = 0; i<n; i++){
		total += *(arr +i);
	}
	return total;
}

float promedio(int *arr, int n){
	int total = suma(arr, n);
	return (float)total /n;
}



int main(){
	
int n;


printf("Ingrese la cantidad de elementos del arreglo \n");
scanf("%d", &n);
	
	
	
	int arreglo[n];
	
	
	
	printf("Ingrese %d elementos \n", n);
	for(int i = 0; i<n;i++){
		printf("Elemento %d \n", i+1);
		scanf("%d", &arreglo[i]);
	}
	
	int total = suma(arreglo, n);
	float prom = promedio(arreglo, n);
	
	
	printf("\n Suma de los elementos: %d \n", total);
	printf("Promedio de los elementos: %.2f \n", prom);
	
	
	
}
