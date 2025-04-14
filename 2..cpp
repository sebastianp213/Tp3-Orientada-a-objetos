#include <stdio.h>

int sumarArreglo (int *arreglo, int tamaño){
    int suma = 0;
    
    for(int i=0; i<tamaño; i++){
        suma += *(arreglo+i);
    }
  return suma;

}

float promedio(int *arreglo, int tamaño){
    int suma = sumarArreglo(arreglo, tamaño);
    return (float)suma/tamaño;
}

int main (){
	
    int numeros[3];
    int tamaño = sizeof(numeros) / sizeof(numeros [0]);
    
    
    for(int i=0; i<3 ; i++){
        printf("Ingrese el valor %d del arreglo \n", i);
        scanf("%d", &numeros[i]);
        
    }
    
    
    
    int resultado = sumarArreglo(numeros, tamaño);
    float resultadoPromedio = promedio(numeros, tamaño);
    
    
    
    printf("La suma de los elementos del arreglo es %d \n", resultado);
    printf("El promedio del arreglo es %f \n", resultadoPromedio);

    return 0;
}
