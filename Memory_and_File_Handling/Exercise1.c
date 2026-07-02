#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double radius(double *coef,int n );
int main(int argc,char *argv[])
{
    int n,i;
    double *coef;
    FILE *fp;
    printf("Dwse to vathmo tou poluonimou");
    scanf("%d",&n);


    coef=(double*)malloc((n+1)*sizeof(double));
    for(i=0; i<n+1; i++)
    {
        printf("Dwse i stoixeio %d: ",i);
        scanf("%lf",&coef[i]);
    }
    fp=fopen(argv[1],"w");
    fprintf(fp,"%lf*z^%d",coef[n],n);
    for(i=n-1; i>=1; i--)
    {
        if(coef[i]!=0)
        {
            if(coef[i]>0)
            fprintf(fp,"+");
            fprintf(fp,"%lf*z^%d",coef[i],i);
        }
    }
    if(coef[0]!=0)
    {
        if(coef>0)
            fprintf(fp,"+");
        fprintf(fp,"%lf",coef[0]);
    }
    fprintf(fp,"\n Aktina tou diskoy einai: %lf",radius(coef,n));
    free(coef);
    fclose(fp);
    return 0;
}

double radius(double*coef,int n)
{
    int i;
    double max = fabs(coef[0]);
    for(i=1; i<n; i++)
        if(max<fabs(coef[i]))
            max=fabs(coef[i]);
    return(1+max/fabs(coef[n]));
}
