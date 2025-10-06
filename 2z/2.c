#include <stdio.h>
#include <locale.h>
int main()
{	setlocale(LC_ALL, "");
	int a = 11, b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("%d, %f, %f", x, y, z);
	int x1;
	float y1;
	double z1;
	x1 = a / (float)b;
	y1 = (float)a / b;
	z1 = (float)(a / b);
	printf("\n%f, %f, %f", x1, y1, z1);
}
