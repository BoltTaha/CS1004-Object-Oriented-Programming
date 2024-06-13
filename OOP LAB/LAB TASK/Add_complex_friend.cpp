#include<iostream>
using namespace std;

class Complex
{  friend  Complex addComplex(Complex c1, Complex c2);   //Freind Function  declearation to add two complex numbers.
    private:
    int real,imag;
    public:
    Complex(int r,int i):real(r), imag(i) {}  //Member initilaizer  list is used to initialize the data members of a Class
    void display()
    {
        cout<<" "<<real<<"+"<<imag<<"i"<<endl;
    }
};
Complex addComplex(Complex c1, Complex c2)    //function to add two complex number 
{

    int real = c1.real + c2.real;
    int imag = c1.imag + c2.imag;
    return Complex(real,imag);
} 

int main(void)
{
    Complex c1(3,7);
	Complex c2(4,3);
    Complex c3 =addComplex(c1,c2);      //two complex add 
    cout << "The sum of the two Complex Number is "<<endl;
    c3.display();
    return 0;
}
