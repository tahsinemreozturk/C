#include <stdio.h>

int main()
{
	int x,y, count;
	x = 0;
	count = 1;
	

	while (x < 8)
	{

		if (count % 2 == 0)
		{
			printf("%s", " ");
		}
			
		y = 0;

		while (y < 9)
		{
			printf("%s", "* ");
			y++;
		}

		puts("");

		count++;
		x++;
	}
	
	return 0;
}