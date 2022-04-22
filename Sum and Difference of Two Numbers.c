#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    int sum1=a+b;
    int dif1=a-b;
    float sum2=c+d;
    float dif2=c-d;
    printf("%d %d",sum1,dif1);
    printf("\n%.1f %.1f",sum2,dif2);
    return 0;
}
