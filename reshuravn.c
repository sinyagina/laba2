#include <stdio.h>
void resh(double a, double b, double c)
{
	double d;
	d = b * b - 4 * a * c;
}

int main()
{
	double a, b, c;
	printf("vvedite a b c: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	return 0;
}