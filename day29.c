#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("enter the value of a,b,c\n");
    scanf("%f%f",&x1,&x2);

     d=b*b-4*a*c;

     if(d=0){
        printf("roots are equal");
        x1=-b/2*a;
        x2=x1;
     }

     else if(d>0){
        printf("roots are distinct and real");
        x1=-b+sqrt(d)/2*a;
        x2=-b-sqrt(d)/2*a;
     }

     else{
        printf("roots are imajinary");
        printf("x1=%f\n",x1);
        printf("x2=%f\n",x2);
     }
    return 0;
}
