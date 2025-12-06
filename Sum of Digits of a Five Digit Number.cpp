#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int i,n,r,s=0;
    scanf("%d",&n);
   for(i=1;i<=5;i++)
    {
        r=n%10;                                   
        n=n/10;
        s+=r;
    }
    printf("%d",s);
    
    return 0;
}

