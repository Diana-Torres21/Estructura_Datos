#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
	if(n<0){
		return 0;
	}else if (n==0){
		return 1;
	}else if (n==1){
		return 1;
	}else {
		return n*factorial(n-1);
	} 
}

int main(){
	
	int n;
	char c;
	printf("\n\t\t\tPrograma recursivo para calcular el factorial de un numero.");

	do { 
	printf("\nIngrese el numero:");
	scanf("%d", &n);
	
	printf("El factorial de %d es: %d", n, factorial(n));
	n =0;
	printf("\nDesea salir: S(si) N(no)");
	setbuf(stdin, NULL);
	scanf("%c",&c);
	} while ( c == 'n'|| c== 'N');
	
}
