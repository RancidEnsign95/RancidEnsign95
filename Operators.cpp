#include<stdio.h>
int main()
{
	float a,b,c;int op;
	printf("Enter the choice \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
	scanf("%d",&op);
	printf("Enter a and b values ");scanf("%d%d",&a,&b);
	switch(op)
	{
		case '+':printf("Addition of a and b is %d",a+b);break;
		case '-':printf("Subtraction of a and b is %d",a-b);break;
		case '*':printf("Multiplication of a and b is %d",a*b);break;
		case '/':printf("Division of a and b is %d ",a/b);break;
		default:printf("\nError");
	}
	return 0;
}
