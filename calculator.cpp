#include <stdio.h>

int main() 
{
    float t,d,a,v,temp,fahrenheit;
    printf("enter the time:");
    scanf("%f",&t);
    t=t*60;
    printf("\ntime in seconds is:%f",t);
    printf("\nenter the distance:");
    scanf("%f",&d);
    d=d*1000;
    printf("\nthe distance from km to meters is:%f",d);
    printf("\nenter the area:");
    scanf("%f",&a);
    a=a*10000;
    printf("\nthe area in meters to centimeters is %f",a);
    printf("\nenter the volume");
    scanf("%f",&v);
    v=v*100000;
    printf("\nthe volume is :%f",v);
    printf("\nenter the temp in Fahrenheit:");
    scanf("%f",&temp);
    temp=(fahrenheit-32)*5/9;
    printf("\nthe temp in celcius is:%f",temp);
    return 0;
}
