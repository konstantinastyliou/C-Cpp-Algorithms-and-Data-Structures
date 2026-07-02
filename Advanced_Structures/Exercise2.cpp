#include <iostream>
#define DEFAULT_DIM 3

using namespace std;
class Square_Matrix{
private:
    int n;
    float **a;

public:
    Square_Matrix(){
    int i,j;
    n=DEFAULT_DIM;
    a=new float*[n];
    for(i=0;i<n;i++)
        a[i]=new float[n];
    for(i=0;i<n;i++)
        for (j=0;j<n;j++)
            a[i][j]=0.0;
}
Square_Matrix(int n){
 int i,j;
 this->n=n;
  a=new float*[n];
    for(i=0;i<n;i++)
        a[i]=new float[n];
    for(i=0;i<n;i++)
        for (j=0;j<n;j++)
            a[i][j]=0.0;

}
void printSquare_Matrix(){
    int i,j;

     for(i=0;i<n;i++){
        for (j=0;j<n;j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
     }

}
void set_Value(int i,int j,float x){
    a[i][j]=x;
}
Square_Matrix  operator+(Square_Matrix x){
    Square_Matrix temp;
     int i,j;
    temp=Square_Matrix(this->n);
     for(i=0;i<n;i++)
        for (j=0;j<n;j++)
                    temp.a[i][j]=a[i][j]+x.a[i][j];
    return temp;
}
};


int main()
{
    int n,i,j,x;

    Square_Matrix c,a,b;

    cout<<"dwse diastash";
    cin>>n;
    Square_Matrix temp;
 cout<< "Dwse pinaka a"<<endl;
     for(i=0;i<n;i++)
        for (j=0;j<n;j++){
            cin>>x;
        a.set_Value(i,j,x);
}
cout<<"dwse pianaka b"<<endl;
     for(i=0;i<n;i++)
        for (j=0;j<n;j++){
            cin>>x;
        b.set_Value(i,j,x);
        }
    c=a+b;
    c.printSquare_Matrix();


    return 0;
}
