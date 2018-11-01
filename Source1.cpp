
/*

**********************************
the class complex  real,imag

***************************************/
// Course:  CS213 - Programming II  - 2018
// Title:   problem solution nmber 9
// Author:  Dr. Mohammad El-Ramly
// Date:    11 Novenber 2018
//....Gobran Asker 







#include <iostream>
using namespace std;


class Complex{

private:
 double real,imag;

public:
 Complex(){      //   Creates a new Complex with default values for real and imaginary of zero

  real=imag=0;
 }

 Complex(double r){         // Creates a new Complex with user-specified values. 
  real=r;
  imag=0;
 }
    
 Complex(double r, double i){       //concteroctor permiteries
  real=r;
  imag=i;
 }
    
 Complex(Complex &obj){             //consterocter opject
  real=obj.real;
  imag=obj.imag;
 }
   
 Complex add(Complex c){              //  Adds two Complex numbers together and returns the Add
        Complex Add;
  Add.real = real + c.real;
  Add.imag = imag + c.imag;
        return Add;
 }
   
 Complex sub(Complex c) {              //  Subtracts two Complex numbers together and returns the sub
  Complex Sub;
  Sub.real = real - c.real;
  Sub.imag = imag - c.imag;
  return Sub;
 }
   
 Complex mult(Complex c){                 //  mult two Complex numbers together and returns the  mult
        Complex Mult;
  Mult.real = real*c.real - imag*c.imag;
  Mult.imag = real*c.imag - c.real*imag;
  return Mult;
 }
    
 Complex div(Complex c){                                       //  div two Complex numbers together and returns the div
  Complex Div;
  Div.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
  Div.imag = (imag*c.real + real*c.imag)/(c.real*c.real + c.imag*c.imag);
  return Div;
 }
    
 void print(){                                               //   Prints the complex number in the form (real, imaginary)
        cout<<real<<"+"<<imag<<"i"<<endl<<endl;
 }
    
 double getReal() const{
  return real;
 }
    
 double getImag() const{
  return imag;
 }
   
 void setReal(double re){
  real = re;

 }
 void setImag(double im){
        imag = im;
 }
 

};

//***************MAIN***************************
int main()
{
 double real1,imag1,real2,imag2;

 cout<<"Enter the Real  part of First Number: ";
    cin>>real1;
 cout<<"Enter the imaginary  part of First Number: ";
 cin>>imag1;
    Complex obj1(real1,imag1);
 obj1.print();

 cout<<"Enter the Real part of Second Number: ";
 cin>>real2;
 cout<<"Enter the Imaginary part of second number: ";
    cin>>imag2;
    Complex obj2(real2,imag2);
 obj2.print();

 Complex c;
 c = obj1.add(obj2);
 cout<<"Addition is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;
 c= obj1.sub(obj2);
 cout<<endl<<"Subtraction is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;

 c= obj1.mult(obj2);
 cout<<endl<<"Multiplication is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;

 c= obj1.div(obj2);
 cout<<endl<<"Division result  is : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;
 

 system("pause");
}