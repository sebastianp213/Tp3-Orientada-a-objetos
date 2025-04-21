/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int encontrarMayor(int *arr, int tam){
	int mayor = *arr;
	
	for(int i = 1; i<tam ; i++){
		if(*(arr + i) > mayor){
			mayor = *(arr+i);
		}
	}
	
return mayor;
}


int encontrarMenor(int *arr, int tam){
    int menor = *arr;
    
    for(int i = 1; i < tam; i++){
        if(*(arr+i) < menor){
            menor = *(arr+i);
    }
    
    
}
return menor;
}





int main(){
	int arreglo[5];
	int i;
	int tam = sizeof(arreglo) / sizeof(arreglo[0]);
	
	for(i=0;i<5;i++){
	printf("Ingrese los elementos del arreglo \n");
	scanf("%d", &arreglo[i]);
	}
	
	int mayor = encontrarMayor(arreglo, tam);
	int menor = encontrarMenor(arreglo, tam);
	
	printf("El mayor elemento es %d \n", mayor);
	printf("El menor elemento es %d \n", menor);
	
	return 0;
	
	
	
	
	
}