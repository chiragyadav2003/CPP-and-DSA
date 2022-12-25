#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // operator overloading
    /*
   return_type operator operator_to_be_overloaded (input_argument){
     body;
   }
   */

//here return type should be complex
//input argument is complex
    Complex operator+(Complex &c)
    {  
        //creating a temporary complex
        Complex temp;
        //here real refers to real part of complex number written before'+' operator
        //and c.real refers to real part of complex number written after '+' operator
        temp.real = real + c.real;
            //here imag refers to imaginary part of complex number written before'+' operator
        //and c.imag refers to imaginary part of complex number written after '+' operator
        temp.imag = imag + c.imag;
        //finally returning complex after performing task
        return temp;
    }

    void print()
    {
        cout << endl<<endl<<"complex number is = " << real << "+" << imag << "i" << endl
             << endl;
    }
};

int main()
{

    Complex c1(3, 4);
    //  c1.print();

    //  Complex c2;
    // c2.print();

    Complex c2(4, 6);
    Complex c3(1, 2);
    // here currently '+' operator is not matching for these operands
    Complex c4 = c1 + c2 + c3;
    c4.print();

    return 0;
}