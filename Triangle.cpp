#include <stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
printf("enter the 2 angles of a triangle");
scanf("%d%d",&a,&b);
d=a+b;
  if(d>180)
  printf("error");
  else 
  {
      c=180-d;
      printf("the third angle =%d",c);
  }
    return 0;
}
