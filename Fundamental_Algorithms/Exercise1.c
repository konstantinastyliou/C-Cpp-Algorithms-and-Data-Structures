#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int k;
    double x,y;   
    printf("Dose timh gia to x:");
    scanf("%lf",&x);
    printf(" dose timh gia to k:");
    scanf("%d",&k);

    if (x<3 ||k<0){      
            printf("ektos pediou orismou");
    }
    else{
            if (x>=3 && x<=20){    
                 y=pow(x,k)/log(x);
            }

    else
    if (x>20 && x<=30) {   
            y=exp(k)/sin(x);
    }
    else
    if (x>30) {
            y=cos(x)*exp(x);
    }
    printf("x = %.8lf k = %d y = %.8lf",x,k,y); 
    }

    return 0;
}
