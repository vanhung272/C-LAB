#include <stdio.h>
#include <string.h>

void onetime(char str[])
{
	int i,j,count=0;
	char character;
	for(i=0;i<strlen(str);i++)
	{
		character=str[i];
		for(j=0;j<strlen(str);j++)
		{
			if(str[j]==character)
			{
				count=count+1;
			}
		}
		if(count==1)
		printf("%2c",str[i]);
		count=0;
	}
}
int main()
{
	int key;
	do
	{
		char str[100];
		printf("\nEnter string:");
		gets(str);
		printf("Found characters: ");
		onetime(str);
		key=getch();
	}
	while(key!=27);
	return 0;
}
