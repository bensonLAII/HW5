/*#include <stdio.h>
#include <stdlib.h>

int recursiveMinimum(int in );

int main()
{
	int in[5] = {0}, i;
	printf("�п�J�Ʀr :");
	for (i = 0;i <5;i++)
	{
		scanf_s("%d", &in[i]);
	}	
	for (i = 0;i < 5;i++)
	{
		printf("%d\n",in[i]);
		
	}
	
	recursiveMinimum(in);

	system("pause");
	return 0;
}
int recursiveMinimum(int in[5])
{
	int a = 5,ch;
	if (a==1)
	{
		return in[0];
	}
	else
	{
		
	}
}
*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int recursiveMinimum(int a[]);
int s[60],i,t2;

int main(void)
{
	printf("�п�J5�ӼƦr\n");
	while (i < 5)
	{
		i++;
		scanf_s("%d", &s[i]);

	}
	
	printf("�̤p�Ȭ�%d\n", recursiveMinimum(s));
	system("pause");
	return 0;
}
int recursiveMinimum(int a[])
{
	int reg;
	if (i != 0)
	{
		if (a[1] > a[i])
		{
			reg = a[1];
			a[1] = a[i];
			a[i] = reg;
		}
		i--;
		recursiveMinimum(a);
	}
	else
		return a[1];


}