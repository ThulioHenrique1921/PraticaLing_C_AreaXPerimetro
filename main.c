#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese"); 
	float area, perimetro, raio;
	const float PI = 3.14;
	
	printf("\nCALCULE A �REA E O PER�METRO DE UMA CIRCUNFER�NCIA\n");
	printf("\nInforme o raio da circunfer�ncia: (cm) ");
	scanf("%f", &raio);
	fflush(stdin);
	perimetro = 2 * PI * raio;
	area = PI * pow(raio,2); 
	
	printf("A �rea dessa circunfer�ncia � %.2fcm e o seu per�metro � %.2fcm",area,perimetro);
	
	return 0;
}
