#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	int a, a1, a2, a3,a4;
	printf("Ââåäèòå òð¸õçíà÷íîå ÷èñëî: ");
	scanf("%d", &a);
	a1 = a / 100;
	printf("%d - ñîòíè", a1);
	a2 = a % 10;
	printf("\n%d - åäåíèöû", a2);
	a3 = (a - (a1 * 100 + a2))/10;
	printf("\n%d - äåñÿòêè", a3);
	a4 = a1 + a2 + a3;
	printf("\n%d - ñóììà öèôð äàííîãî ÷èñëà ", a4);
	printf("\n%d%d%d - ÷èñëî íàîáîðîò ", a2, a3, a1);
}
