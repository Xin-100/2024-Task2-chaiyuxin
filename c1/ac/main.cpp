#include <iostream>
#include <cstring>
using namespace std;
class Complex
{
    public:
        Complex(double aa=0,double bb=0);
        void displayComplex();
    private:
        double a;
        double b;
};
Complex::Complex(double aa,double bb)
{
    a=aa;
    b=bb;
}
void Complex::displayComplex()
{
    if(a==0)
        if(b==0) cout<<a;
        else if(b==1)cout<<"i";
        else cout<<b<<"i";
    else
    {
        cout<<a;
        if(b==1)cout<<"+i";
        else
          if(b==0);
          else
            if(b>0)
            cout<<"+"<<b<<"i";
          else
            cout<<b<<"i";
    }
}
int main()
{
     double r1,i1;


       cin>>r1>>i1;


       Complex c1(r1,i1);


       c1.displayComplex();


       return 0;
}
