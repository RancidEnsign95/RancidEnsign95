#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the data element ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	ch=ch+32;
	else
	ch=ch-32;
	printf("\n%c",ch);
	return 0;
}
