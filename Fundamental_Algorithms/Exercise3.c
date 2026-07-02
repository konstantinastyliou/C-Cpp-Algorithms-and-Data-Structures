#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159 //ορίζω σταθερες οπου θα χρειαστώ στη συνέχεια
#define T 4
#define w 2*PI/T


int main()
{
    int n,k;
    float s,x,t; // αφου το Χ αποτελείται από float τότε και αυτός θα είναι float

    printf("dwse gia timh n=");
    scanf("%d", &n);

    printf("dwse timh gia t=");
    scanf("%f", &t);

    if (t<0)  /* ελέγχω την τιμή του t αν είναι αρνητικό τοτε θα εμφανιστεί μήνυμα λάθους */
        printf("Lathos timh gia to t\n");
    else {
            s=0;  //αρχικοποιώ την τιμή που θα έχει το άθροισμα
            for(k=0;k<n;k++) /*  με την χρήση της for το k θα ξειναει απο το 0 εως μεχρι k<n στη συνεχεια υπολογίζεται και μετα αυξάνεται κατα 1*/
                s=s+pow(-1,k)*sin((2*k+1)*w*t)/(pow(2*k+1,2));  // εχω το αθροισμα s
            x=8/pow(PI,2)*s;                                    // και εδω ειναι το αποτέλεσμα με την βοήθεια της s
            printf("n=%d t=%f  x=%f",n,t,x);
    }

    return 0;
}
