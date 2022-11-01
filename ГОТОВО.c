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


double name(double x, double y, double z)
{
	double result = x * 1 + y * 2 + z * 3;
	return result;
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


	puts("Задание 2");
	double a, b, x, y, f;
	scanf_s("%lf", &x);
	f = otvet(x, y);
	printf("y=%lf", f);
	*/
	puts("Домашнее задание\n");
	double sum1, sum2, x, y, z;
	puts("В понедельник:");
	puts("продано кг яблок: ");
	scanf_s("%lf", &x);
	puts("продано кг груш: ");
	scanf_s("%lf", &y);
	puts("продано кг апельсинов: ");
	scanf_s("%lf", &z);
	sum1 = name(x, y, z);

	puts("Во вторник:");
	puts("продано кг яблок: ");
	scanf_s("%lf", &x);
	puts("продано кг груш: ");
	scanf_s("%lf", &y);
	puts("продано кг апельсинов: ");
	scanf_s("%lf", &z);
	sum2 = name(x, y, z);
	printf("В понедельник продано на %.lf руб\n", sum1);
	printf("Во вторник продано на %.lf руб\n", sum2);

}
