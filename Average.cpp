#include <stdio.h>
#include<math.h>
int main()
{
  float maths,physics,chemistry,telugu,computer;
  float total,average,percentage;
  
  printf("enter the marks of 5 subjects:");
  scanf("%f%f%f%f%f",&maths,&physics,&chemistry,&telugu,&computer);
  //total of 5 subjects
  total=maths+physics+chemistry+telugu+computer;
  average=total/5;
  percentage=(total/500)*100;
  
  printf("\nthe total of 5 subjects:%2f",total);
  printf("\nthe average of 5 subjects is:%2f",average);
  printf("\nthe percentage of 5 subjects is:%2f",percentage);
  
    
    return 0;
}
