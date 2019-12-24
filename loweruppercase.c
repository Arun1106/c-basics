#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("It is lowercase");
	}
	else if(ch>='A'&&ch<='Z')
	{
		printf("It is uppercase");
	}
	else{
		printf("It is characters\n");
	}
}