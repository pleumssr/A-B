#include<stdio.h>
int pus(int x, int y);
int main()
{
	int a,b;
	scanf_s("%d %d", &a, &b);
	pus(a, b);
	return 0;
}
int pus(int x, int y)
{
	printf("%d", x + y);
	return 0;
}