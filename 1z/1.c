#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	/*
	char a;
	int b;
	float c;
	float d;
	scanf("%c", &a);
	scanf("%d", &b);
	scanf("%f", &c);
	scanf("%e", &d);
	printf("%c, %d, %f, %e", a, b, c, d);

	float e,e_1;
	printf("\nââåäèòå ÷èñëî double:");
	scanf("%f", &e);
	e_1 = e;
	int x;
	x = (int)e;
	printf("Öåëàÿ ÷àñòü %d\nÄðîáíàÿ ÷àñòü:%f\n", x, (e_1 - x));
	
	char f;
	scanf("%c", &f);
	printf("Ââåäåíî ÷èñëî â äåñÿòè÷íîé ñèñòåìå ñ÷èñëåíèÿ: %d\n", f);
	printf("Åãî øåñòíàäöàòåðè÷íàÿ çàïèñü: %X",f);
	*/
	float g;
	printf("ââåäèòå ÷èñëî ñ êëàâèàòóðû: ");
	scanf("%f", &g);
	printf("%f", 1 / g);
}
