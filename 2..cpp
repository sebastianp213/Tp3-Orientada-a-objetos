#include <stdio.h>

int sumarArreglo (int *arreglo, int tama�o){
    int suma = 0;
    
    for(int i=0; i<tama�o; i++){
        suma += *(arreglo+i);
    }
  return suma;

}

float promedio(int *arreglo, int tama�o){
    int suma = sumarArreglo(arreglo, tama�o);
    return (float)suma/tama�o;
}

int main (){
	
    int numeros[3];
    int tama�o = sizeof(numeros) / sizeof(numeros [0]);
    
    
    for(int i=0; i<3 ; i++){
        printf("Ingrese el valor %d del arreglo \n", i);
        scanf("%d", &numeros[i]);
        
    }
    
    
    
    int resultado = sumarArreglo(numeros, tama�o);
    float resultadoPromedio = promedio(numeros, tama�o);
    
    
    
    printf("La suma de los elementos del arreglo es %d \n", resultado);
    printf("El promedio del arreglo es %f \n", resultadoPromedio);

    return 0;
}
