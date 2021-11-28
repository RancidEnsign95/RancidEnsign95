#include<stdio.h>
int main()
{
	int a=10,b=20,c=0;
	printf("The values before swapping %d : %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("The values of values after swapping %d : %d",a,b);
	return 0;
}
