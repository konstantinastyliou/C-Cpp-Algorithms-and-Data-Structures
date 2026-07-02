#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a(int);
int main()
{
    int r;
    printf("dwse timh gia r:");
    scanf("%d",&r); // δινω τιμη για το r οπου θα eiναι ο ορος που θα θελω να υπολογίσω
    if (r<2)  // περιoρίζω το r ωστε κατω απο 2 να μου βγαζει μηνυμα λαθους
        printf("Lathos timh \n");
    else
        printf("a=%d",a(r));

    return 0;
}
int a(int r){
    if (r==1) // η ασκηση μου δίνει το α1 ορο οποτε το χρησιμοποιω
        return 1;
    else if (r==0) // η ασκηση μου δίνει τον α0 ορο οποτε το χρησιμοποιω
      return 1;
    else
        return 5*a(r-1)-6*a(r-2)+pow(2,r)+r; /* η αναδρομικη συναρτηση που υπολογίζει τον r-στο ορο της ακολουθιας*/
}
