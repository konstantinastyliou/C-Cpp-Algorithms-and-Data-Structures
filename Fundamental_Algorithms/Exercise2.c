#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int k;
    double x,y;   /* Αφού το χ είναι double και περιέχεται μέσα στην y και η y τότε θα είναι double αυτό θα δώσει*/

    printf("Dose timh gia to x:");
    scanf("%lf",&x);
    printf(" dose timh gia to k:");
    scanf("%d",&k);

    if (x<3 ||k<0){      /* Θα πρέπει να συμβαίνει ένα απο τα δύο για να είμαι εκτός πεδίου ορισμού για αυτό έχω βάλει το || */
            printf("ektos pediou orismou");
    }
    else{
            if (x>=3 && x<=20){    /* με το && μπορώ και εχω και τη μια ιδιότητα και την άλλη
                                      οπότε έχω ενα πεδίο ορισμού οπου θα συμβαίνει το αντίστοιχο y*/
                 y=pow(x,k)/log(x);
            }

    else
    if (x>20 && x<=30) {    /*αντίστοιχα και εδώ*/
            y=exp(k)/sin(x);
    }
    else
    if (x>30) {
            y=cos(x)*exp(x);
    }
    printf("x = %.8lf k = %d y = %.8lf",x,k,y); /* βάζω το .8 επειδή θέλω 8 κλασματικά ψηφία και δεν μας ενδοιαφέρουν τα δεκαδικα */
    }

    return 0;
}
