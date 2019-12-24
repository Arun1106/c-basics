#include<stdio.h>
void vowels_or_consonants(char ch)
{
	
if((ch=='a'||ch=='e'||ch=="i"||ch=="o"||ch=="u")||(ch=='A'||ch=='E'||ch=="I"||ch=="O"||ch=="U"))
	{
		printf("VOWELS");
	}
	else{
		printf("CONSONANTS");
	}
}
int main()
{
	char ch;
	printf("Enter a cahracter");
	scanf("%c",&ch);
	vowels_or_consonants(ch);
	return 0;
}
