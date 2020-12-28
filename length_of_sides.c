/*Finding length of sides of triangle*/

#include <stdio.h>
#include <math.h>

int main(void)
{
   double x1,x2,x3,y1,y2,y3,ab,bc,ac;
   printf("Enter the coordinates of A\n");
   scanf("%lf,%lf",&x1,&y1);
   printf("Enter the coordinates of B\n");
   scanf("%lf,%lf",&x2,&y2);
   printf("Enter the coordinates of C\n");
   scanf("%lf,%lf",&x3,&y3);
   
  /*Formula for calculating distance*/ 
   
   ab=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
   bc=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
   ac=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
   
   printf("The length of sides are %.2lf,%.2lf,%.2lf\n",ab,bc,ac);
   return 0;
}   
