#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter a range");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+(i*i);
		/// for n cube numbers
		///s=s+(i*i*i)	
	}
	printf("%d",s);
}