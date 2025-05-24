#include <stdio.h>

int encontrarMayor(int *arr, int n){
	int mayor = *arr;
	for(int i = 1; i<n; i++){
		if(*(arr+i) > mayor){
			mayor = *(arr +i);
		}
	}
	return mayor;
}


int encontrarMenor(int *arr, int n){
	int menor = *arr;
	for(int i = 1; i<n;i++){
		if(*(arr+i) < menor){
			menor = *(arr+i);
		}
	}
	return menor;
}


int main(){
	
	int n;
	
	
	
	printf("Ingrese la cantidad de elementos del arreglo \n");
	scanf("%d", &n);
	
	int arreglo[n];
	
	
	
	printf("Ingrese %d elementos \n", n);
	for(int i = 0; i < n; i++){
		printf("Elemento %d:", i + 1);
		scanf("%d", &arreglo[i]);
	}
	
	
	int mayor = encontrarMayor(arreglo, n);
	int menor = encontrarMenor(arreglo, n);
	
	
	printf("\n El mayor elemento es: %d \n", mayor);
	printf("\n El menor elemento es: %d \n", menor);
	
	
	
	
	
}
