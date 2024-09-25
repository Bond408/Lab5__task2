#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
void main()
{
	float x;
	int t = -6;
	setlocale(LC_ALL, "RUS");
	puts("Задайте параметр x");
	scanf_s("%f", &x);
	float a = log(x);
	float b = sqrt(pow(x, 2) + pow(t, 2));
	float y = pow(fabs(a - b * x), 1 / 5.f);
	printf("X = %f, Y = %.4f", x, y);




}