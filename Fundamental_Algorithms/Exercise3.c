#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159 
#define T 4
#define w 2*PI/T


int main()
{
    int n,k;
    float s,x,t; 

    printf("dwse gia timh n=");
    scanf("%d", &n);

    printf("dwse timh gia t=");
    scanf("%f", &t);

    if (t<0)  
        printf("Lathos timh gia to t\n");
    else {
            s=0;  
            for(k=0;k<n;k++) 
                s=s+pow(-1,k)*sin((2*k+1)*w*t)/(pow(2*k+1,2));  
            x=8/pow(PI,2)*s;                                   
            printf("n=%d t=%f  x=%f",n,t,x);
    }

    return 0;
}
