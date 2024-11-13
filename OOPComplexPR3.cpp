#include <iostream>
using namespace std;

class Complex 
{
    float real, imag;

public:
    // Default constructor (sets real and imaginary to 0)
    Complex() 
    {
        real=0; 
        imag=0; 
    }

    // Parameterized constructor to set real and imaginary parts
    Complex(float r, float i)
    {
        real=r; 
        imag=i; 
    }

    // Overloading + operator to add two complex numbers
    Complex operator + (Complex c) 
	{
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Overloading - operator to subtract two complex numbers
    Complex operator - (Complex c) 
	{
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Overloading * operator to multiply two complex numbers
    Complex operator * (Complex c) 
	{
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    // Function to input complex number
    void input() 
	{
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to display complex number
    void display() 
	{
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() 
{
    Complex c1, c2, result;
    int choice;

    // Input two complex numbers
    cout << "Enter the first complex number:\n";
    c1.input();
    cout << "Enter the second complex number:\n";
    c2.input();

    do 
	{
        // Display menu options
        cout << "\nMenu:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1:
                result = c1 + c2; // Add complex numbers
                cout << "Addition result: ";
                result.display();
                break;
            case 2:
                result = c1 - c2; // Subtract complex numbers
                cout << "Subtraction result: ";
                result.display();
                break;
            case 3:
                result = c1 * c2; // Multiply complex numbers
                cout << "Multiplication result: ";
                result.display();
                break;
            case 4:
                cout << "Exiting the program...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice!=4);

    return 0;
}
