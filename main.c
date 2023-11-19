#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese"); 
	float area, perimetro, raio;
	const float PI = 3.14;
	
	printf("\nCALCULE A ÁREA E O PERÍMETRO DE UMA CIRCUNFERÊNCIA\n");
	printf("\nInforme o raio da circunferência: (cm) ");
	scanf("%f", &raio);
	fflush(stdin);
	perimetro = 2 * PI * raio;
	area = PI * pow(raio,2); 
	
	printf("A área dessa circunferência é %.2fcm e o seu perímetro é %.2fcm",area,perimetro);
	
	return 0;
}
