
#include <stdio.h>

int main()
{
	printf("N\t10*N\t100*N\t1000*N\n\n");
	int i = 1;

	while (i <= 10)
	{
		printf("%d\t%d\t%d\t%d\n", i, (i*10),(i*100),(i*1000));
		i++;
	}
}