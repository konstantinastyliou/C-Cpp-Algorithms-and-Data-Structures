#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a(int);
int main()
{
    int r;
    printf("dwse timh gia r:");
    scanf("%d",&r); 
    if (r<2)  
        printf("Lathos timh \n");
    else
        printf("a=%d",a(r));

    return 0;
}
int a(int r){
    if (r==1) 
        return 1;
    else if (r==0) 
      return 1;
    else
        return 5*a(r-1)-6*a(r-2)+pow(2,r)+r; 
}
