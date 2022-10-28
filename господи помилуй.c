#include<locale.h>
#include<stdio.h>
#include <math.h>
#include<conio.h>
#define M_PI  3.14159265358979323846
#define t 0.3
#define e  2,71828182845904523536

double otvet(double x)
{
	double a = log10(fabs(t * x + pow(t, 2)));
	double b = t * pow(x, 2) + sqrt(x);
	double y = log(pow(a, 2) / a + b);
	return y;
}

void main(void)
{
	setlocale(LC_ALL, "RUS");
	/*
	puts("Задание 1");
	float gr1, gr2, gr3;
	puts("Перевод градусов в радианы");
	puts("Введите градус");
	scanf_s("%f %f %f", &gr1, &gr2, &gr3);
	printf("%.1f градусов= %.6f\n", gr1, sin(gr1 * M_PI / 180));
	printf("%.1f градусов= %.6f\n", gr2, gr2 * M_PI / 180);
	printf("%.1f градусов= %.6f\n", gr3, gr3 * M_PI / 180);
	*/
	puts("Задание 2");
	double a, b, x, y ,f;
	scanf_s("%lf", &x);
	f = otvet(x, y);
	printf("y=%lf",f);
}
