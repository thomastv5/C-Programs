#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long int testcase;
    scanf("%lld",&testcase);
    while(testcase--)
    {
        long long int value,fact=0,temp=0,odd=1,even=2,count=0;
        scanf("%lld",&value);
        temp=value;
        while(temp--)
        {
            fact=odd+even;
            odd=even;
            even=fact;
            if(value>fact)
            {
                if(fact%2==0)
                {
                    count+=fact;
                }
            }
            else
            break;
        }
        printf("%lld\n",count+2);
    }
    return 0;
}
