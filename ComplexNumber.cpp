#include <iostream>

using namespace std;

 class Complex;

class Sum
{
public:

    int SumRealComplex(Complex ,Complex);
    int SumImaginaryComplex(Complex ,Complex);
};
class Complex
{
    int a, b;
    //#Individually declaring fuctions as friends
    /*friend int Sum::SumImaginaryComplex(Complex ,Complex);
    friend int Sum::SumRealComplex(Complex ,Complex);*/
    //#Declaring the entire class as friend
    friend class Sum;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

int Sum ::SumRealComplex(Complex o1,Complex o2){
    return(o1.a+o2.a);
}
int Sum ::SumImaginaryComplex(Complex o1,Complex o2){
    return(o1.b+o2.b);
}


int main()
{
    Complex p1;
    Complex p2;
    p1.setNumber(5, 6);
    p1.printNumber();
    p2.setNumber(8, 7);
    p2.printNumber();
    Sum p3;
    int res = p3.SumRealComplex(p1, p2);
    cout << "The sum of real part of the complexes is:" << res << endl;
    int resu=p3.SumImaginaryComplex(p1,p2);
    cout<<"The sum of the imaginary part of the complexes is: "<<resu<<endl;
    return 0;
}