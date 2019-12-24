#include<stdio.h>
float radiuss(float ra)
{
	return 3.14*ra*ra;
}
int main()
{
	float ra,a;
	printf("Enter radius\n");
	scanf("%f",&ra);
	a=radiuss(ra);
	printf("area is %f",a);
}