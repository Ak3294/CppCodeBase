#include <stdio.h>
int main()
{
	int a = 1;
	while (a <= 10)
	{
		if (a == 7)
			break;
		printf("%d\n", a);
		a++;
	}
}
