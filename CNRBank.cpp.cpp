#include<iostream>
using namespace std; 
int n,i; 
class Bank
{
	public : 
		char name; 
		int accNo; 
		float withAmt, depositAmt, balance; 
	public : 
		void AcceptInfo(); 
		void DisplayInfo();
		void Deposite();  
		void WithDraw(); 
			
}; 
void Bank :: AcceptInfo()
{
	cout<<"\n---------------User Information-------------------"; 
	cout<<"\nEnter User Name :"; 
	cin>>name; 
	cout<<"\nEnter Account No :"; 
	cin>>accNo; 
	cout<<"\nEnter Balance :"; 
	cin>>balance; 
}
void Bank :: DisplayInfo()
{
	cout<<"\nUser Name :"<<name; 
	cout<<"\nUser Account No. :"<<accNo; 
	cout<<"\nUser Balance :"<<balance; 
}
void Bank :: Deposite()
{
	cout<<"\nEnter Amount You Want To Deposite :"; 
	cin>>depositAmt; 
	balance += depositAmt; 
	cout<<"\nBalance Updated :"<<balance; 
	DisplayInfo(); 
}
void Bank :: WithDraw()
{
	cout<<"\nEnter Amount You Want To WithDraw :"; 
	cin>>withAmt; 
	if(balance>=withAmt)
	{
		balance -= withAmt; 
		cout<<"\nBalance Updated :"<<balance; 
	}
	else 
	{
		cout<<"Your Balance is Not Sufficient !!!!!"; 
	}
}
int main()
{
	Bank b[10];
	int temp;	
	int ch; 
	cout<<"\nEnter No. of user Info you want to Enter :"; 
	cin>>n; 
	do
	{
		cout<<"\n------------------Menu--------------------"; 
		cout<<"\n1.Accept\n2.Display\n3.Deposite\n4.Withdraw\n5.Exit"; 
		cout<<"\nEnter Your Choice :"; 
		cin>>ch; 
		switch(ch)
		{
			case 1 : 
				for(int i=0;i<n;i++)
				{
					b[i].AcceptInfo();	
				}
				break; 
			case 2 : 
				for(int i=0;i<n;i++)
				{
					b[i].DisplayInfo(); 
				}
				break; 
			case 3 : 
				cout<<"Enter Account No:"; 
				cin>>temp;
				if(temp == b[i].accNo) 
				{
					b[i].Deposite();
				} 
				break; 
			case 4 :
				cout<<"Enter Account No:"; 
				cin>>temp; 
				if(temp == b[i].accNo)
				{
					b[i].WithDraw(); 
				}
				break; 
			case 5 : 
				cout<<"\n-----------Thanks--------------"; 
				return 0; 
				break; 
			default : 
				cout<<"\n!!!!!Wrong Choice !!!!!"; 
		}
	}while(ch!=5);
	return 0; 
}
