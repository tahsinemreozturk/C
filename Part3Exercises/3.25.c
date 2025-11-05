#include <stdio.h>

int main()
{
	int a, i;
	a = 3;
	i = 1;

	printf("A\tA+2\tA+4\tA+6\n\n");

	while (i < 6)
	{
		printf("%d\t%d\t%d\t%d\n", a, a + 2, a + 4, a + 6);
		a = a + 3;
		i++;
	}
}