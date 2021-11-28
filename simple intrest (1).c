#include <stdio.h>
int main()
{
    float p,r,s,t;
    printf("\n enter the principal");
    scanf("%f",&p);
    printf("\n enter the rate");
    scanf("%f",&r);
    printf("\n enter the time period in years");
    scanf("%f",&t);
    s=(p*r*t)/100;
    printf("\n simple intrest for principal amount %f",s);
    
    
    
    return 0;
}