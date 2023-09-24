#include<stdio.h>
int hanoi(int n, char a, char b, char c)
{
	if (n == 1 || n == 0)
		return 0;
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%c-->%c", A, C);
		hanoi(n - 1, B, A, C);
	}
	return 0;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
}