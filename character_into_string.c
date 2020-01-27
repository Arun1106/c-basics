#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,p;
	char a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&p);
		for(j=0;j<p;j++)
		{
			scanf("%s",&a[j]);
		}
		puts(a);
	}
}