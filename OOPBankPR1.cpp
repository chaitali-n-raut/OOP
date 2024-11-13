/* Define a class to represent a bank account which includes the
following members as:
a. Name of the depositor
b. b. Account Number
c. c. Withdrawal amount
d. d. Balance amount in the account Member Functions:
e. e. To assign initial values
f. f. To deposit an amount
g. g. To withdraw an amount after checking the balance
h. h. To display name and balance. Implement the program by using features of OOP in C++ */

#include <iostream>
using namespace std;
int n; // No. of users 
class Bank
{
	private:
		string depositorName;
		int accountNumber;
		float Balance;
		float Depamount;
		float Witamount; 

	public:
		void acceptInfo();

		// Function to deposit an amount
		void deposit();
		
		// Function to withdraw an amount after checking the balance
		void withdraw();
		

		// Function to display name and balance
		void display(); 
	
};
void Bank::  acceptInfo()
{
    cout<<"\nEnter Depositor's Name : ";
	cin>>depositorName; 
	cout<<"\nEnter Depositor's Account No. : "; 
	cin>>accountNumber; 
	cout<<"\nEnter Depositor's Account Balance :"; 
	cin>>Balance; 
 }
void Bank::  deposit()
{
    cout<<"\nEnter Amount You Want To Deposite :"; 
	cin>>Depamount; 
	Balance = Balance + Depamount; 
	cout<<"\nUpdated Balance : "<<Balance; 
}
void Bank ::  withdraw()
{
	cout<<"\n Enter Withdrawl Amount :"; 
	cin>>Witamount; 
    if (Witamount <= Balance) 
	{
        Balance = Balance - Witamount;
        cout << "Amount withdrawn: " << Witamount << endl;
		cout<<"\nUpdated Balance : "<<Balance; 
    }
	else 
	{
        cout << "Insufficient balance!" << endl;
    }
}
void Bank ::  display()
{
    cout << "Depositor Name: " << depositorName << endl;
    cout << "Balance: " << Balance << endl;
}
int main()
{
    Bank b1[100]; 
	int ch,i; 
	do
	{
		cout<<"\n-------------MENU----------------"<<endl; 
		cout<<"\n1.Accept Info\n2.Display Balance \n3.Deposite Amount \n4.Withdraw \n5.Exit"; 
		cout<<"\nEnter Your Choice :"<<endl;
		cin>>ch; 
		switch(ch)
		{
			case 1 : 
				cout<<"\nEnter No. Of Users :";
				cin>>n; 
					for(i=0;i<n;i++)
					{
						b1[i].acceptInfo(); // Assign initial values
					}
				break; 
			case 2 : 
				for(i=0;i<n;i++)
					{
						b1[i].display();         // Display name and balance
					}
				break; 
			case 3 : 
				for(i=0;i<n;i++)
					{
						b1[i].deposit();   // Deposit amount
					}
				break;
			case 4 : 
				for(i=0;i<n;i++)
					{
						b1[i].withdraw();  // Withdraw amount
					}
				break;	
			case 5 : 
					return 0; 
			default : 
				cout<<"Wrong Choice!!!!"; 
		}
	}while(ch!=5); 

    return 0;
}
