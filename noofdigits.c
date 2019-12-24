
#include<stdio.h>

	int main(){
		int i,j,c=0;
		scanf("%d",&i);
		while(i!=0)
		{
			i=i/10;
			++c;
			
		}
		printf("no of digits present %d\n",c);

}