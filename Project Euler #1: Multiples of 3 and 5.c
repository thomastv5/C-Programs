#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        unsigned int n; 
        scanf("%d",&n);
        unsigned long long int sum=0;
        unsigned long int n1=(n-1)/3,n2=(n-1)/5,n3=(n-1)/15;
        unsigned long long int sum1=(n1*(3*(n1+1)))/2;
        unsigned long long int  sum2=(n2*(5*(n2+1)))/2;
        unsigned long long int sum3=(n3*(15*(n3+1)))/2;
        sum=sum1+sum2-sum3;
        printf("%llu\n",sum);
    }
    
    return 0;
}
