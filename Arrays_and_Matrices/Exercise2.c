#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10



typedef enum{FALSE,TRUE}Bool; // οριζω ετσι καινουργιο τυπο οπου χρειαζομαι

Bool is_perpedicular(float B[][N],int n);
int main()
{
    float B[N][N];
    int n,i,j;

    printf("Dwse to plithos n twn sthlwn\t");
    scanf("%d",&n);  // αρχικα πρεπει να δωσουμε τις στηλες
    while (n<1 || n>10){ /* περιοριζω ετσι αν ειναι κατω απο 1 ή πανω απο 10 να μου εκτυπώνει μηνυμα λαθους */
    printf("Dwse allh timh gia n");
    scanf("%d",&n);
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
      scanf("%f",&B[i][j]);  // διαβαζω στοιχεια για το Β
    if (is_perpedicular(B,n)) /* με την βοήθεια της συνάρτησης θα ελεγχω
                                 αν ενας πινακας ειναι ορθογώνιος ή οχι
                                 και θα μου εμφανίζει το αντιστοιχο μηνυμα*/
        printf("The matrix is perpedicular");
    else
        printf("the matrix is NOT perpedicular");

    return 0;
}
 Bool is_perpedicular(float B[][N],int n){
    int i,j,k;
    float s;

    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
            s=0.0;
            for (k=0;k<n;k++)
            s+=B[k][i]*B[k][j];
            }

            if (i==j && abs(1-s)>0.00005) // βαζω προϋποθέσεις ετσι ωστε να μπορω να εχω εναν ορθογώνιο πινακα
                return FALSE;
            if (i!=j && abs(s)>0.00005)  //βαζω προϋποθέσεις ετσι ωστε να μπορω να εχω εναν ορθογώνιο πινακα
                return FALSE;
    }
    return TRUE;
}

