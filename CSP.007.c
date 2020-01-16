#include <stdio.h>
#include <string.h>

int main()
{
	int i,key;
	do
	{
		int a=0;
		char str[100];
		printf("\n Enter string:");
		gets(str);
		
		for (i=0;i<=strlen(str);i++)
		{
			str[i]=str[i+a];
			if (str[i]==' '|| str[i]=='\t')
			{
				a++; i--;
			}
		}
		printf("String after remove blank:%s",str);
		key=getch();
	}
	while (key!=27);
	return 0;
}
