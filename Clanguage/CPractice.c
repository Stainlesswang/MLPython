#include <stdio.h>

#define SOME_THING 100
#define PI (1.0f/3.1415926f)
 
 /* Adds two fractions*/
int main()
{
    float i;

    i=72.99f;

    printf("%f\n",i++ );
    int num1,denom1,num2,denom2,result_num,result_denom;

    printf("Enter first feaction:");
    scanf("%d/%d",&num1,&denom1);

    printf("Enter second feaction:");
    scanf("%d/%d",&num2,&denom2);

    result_num= num1 * denom1 + num2 * denom2;
    result_denom = denom1 * denom2;

    printf("the sum is %d/%d\n",result_num,result_denom );

    return 0;
}