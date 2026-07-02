#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculate (int**a,float**b,int n);

int main(int argc, char *argv[])
{
    int i,j,n,t,**a;
    float **b;
    FILE *fp;

    fp=fopen(argv[1],"rw");
    fseek(fp,0,SEEK_END);
    t=ftell(fp);
    n=(int)sqrt(t/sizeof(int));
    rewind(fp);

    a=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
        a[i]=(int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++){
        for(j=0;j<n;j++)
            fread(a[i],sizeof(int),n,fp);
    }
    fclose(fp);

    b=(float**)malloc(n*sizeof(float*));
    for(i=0;i<n;i++){
        b[i]=(float*)malloc(n*sizeof(float));
    }
    calculate(a,b,n);

    fp=fopen(argv[2],"wb");
    for(i=0; i<n;i++)
        fwrite(b[i],sizeof(float),n,fp);
    fclose(fp);

    for(i=0;i<n;i++)
        free(a[i]);
    free (a);
     for(i=0;i<n;i++)
        free(b[i]);
     free (b);

    return 0;
}
void calculate(int**a,float**b,int n){

int i,j,s;

for(i=0;i<n;i++){
    s=0;
    for(j=0;j<n;j++){
        if(s<fabs(a[i][j]))
            s=fabs(a[i][j]);
    }

    for (j=0;j<n;j++){
        b[i][j]=(float)a[i][j]/s;
    }
}
}
