#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	int total = 0;
	for (i=1; i<1000; i++)
	{
		if ( i % 3 == 0 || i % 5 == 0 )
			total = total + i;
	}
	printf("Total = %d\n", total);
}