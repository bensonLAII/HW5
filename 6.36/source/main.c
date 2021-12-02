#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringReverse(char string[]);

int main()
{
	char string[20];
	printf("請輸入要倒印字串內容:\n");
	fgets(string, 20, stdin);
	printf("倒印字串內容為      :\n");
	stringReverse(string);	
	
	system("pause");
	return 0;
}
int i=0;
void stringReverse(char string[])
{
	if (string[i] != '\0')
	{
		i++;
		stringReverse(string);
		printf("%c", string[i-1]);
		i--;
	}	

}