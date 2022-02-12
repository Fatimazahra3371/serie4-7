#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,k;
    float sumD;
    sumD=0.0;
    printf("entre la valeur n\n");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        sumD=(sumD+exp(1/(k+n)));
    }
    printf("sumD= %f",sumD);

    return sumD;
}
