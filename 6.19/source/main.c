#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int point[2],sum, times[11] = {0}, i, j;

	srand(time(NULL));
	printf("  Element     Value\n");
	for (j = 0;j <= 36000;j++)
	{
		point[0] = 1 + (rand() % 6);
		point[1] = 1 + (rand() % 6);
		sum = point[0] + point[1];
		times[sum-2]++;
		sum = 0;
	}
	
	for (i = 2;i <= 12;i++)
	{
		printf("\t%d\t%d\n",i,times[i-2]);
		
	}

	

	system("pause");
	return 0;
}

