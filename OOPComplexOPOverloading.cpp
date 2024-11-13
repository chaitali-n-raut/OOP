#include<iostream>
using namespace std;
class Complex
{
	private: 
	int real,imag;
	public:
	Complex()
	{
		real=0;
		imag=0;
	}
	void input()
	{
		cout<<"\nEnter a real no=";
		cin>>real;
		cout<<"\nEnter a imaginary no=";
		cin>>imag;
	}

	void display()
	{
		cout<<"\nComplex no="<<real<<"+"<<imag<<"i";
	}

	friend Complex operator+(Complex c1,Complex c2)
	{
		Complex c;
		c.real=c1.real+c2.real;
		c.imag=c1.imag+c2.imag;
		return c;
	}


	friend Complex operator-(Complex c1,Complex c2)
	{
		Complex c;
		c.real=c1.real- c2.real;
		c.imag=c1.imag-c2.imag;
		return c;
	}
	friend Complex operator*(Complex c1,Complex c2)
	{
		Complex c;
		c.real= c1.real * c2.real +c1.imag * c2.imag;
		c.imag = c1.real * c2.imag - c1.imag * c2.real;
		return c;
	}
	friend Complex operator/(Complex c1,Complex c2)
	{
		Complex c;
		c.real=(c1.real*c2.real+c1.imag*c2.imag)/(c1.real*c2.real+c1.imag*c2.imag);
		c.imag=(c1.imag*c2.real+c1.real*c2.imag)/(c1.imag*c2.imag+c1.real*c2.real);
		return c;
	}
};

int main()
{
	Complex c1,c2,c3;
	int ch;
	c1.input();
	c2.input();
	do
	{
		cout<<"\n\n\n1.Addition\n 2.Subtraction \n3.Multiplication \n4.Division\n 5.Exiting \n";
		cout<<"\nEnter your choice=";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\nAddition";
			c3=c1+c2;
			c3.display();
			break;
		 
		 case 2:
			cout<<"\nSubtraction";
			c3=c1-c2;
			c3. display();
			 break;
		 
		 case 3:
			cout<<"\nMultiplication";
			c3=c1*c2;
			c3.display();
			break;
		 
		 case 4:
			cout<<"\nDivision";
			c3=c1/c2;
			c3.display();
			break;
		 
		 case 5: 
			cout<<"\nExiting!!!";
			break;
		 
		 default :
			cout<<"\nEnter correct choice";
			 break;
		 }
	}while(ch!=5);
 return 0;
 }