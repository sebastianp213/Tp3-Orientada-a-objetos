#include <stdio.h> 
    
    void intercambio (int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){

int x;
int y;

printf("Ingrese el valor del primer numero \n");
scanf("%d", &x);

printf("Ingrese el valor del segundo numero \n");
scanf("%d", &y);


printf ("Valores iniciales \n");
printf("x = %d \n", x);
printf("y = %d \n", y);


intercambio (&x, &y);


printf("Valores intercambiados \n");
printf("x = %d \n", x);
printf("y = %d \n", y);


return 0;
}
