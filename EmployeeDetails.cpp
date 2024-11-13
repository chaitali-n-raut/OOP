/* Create a Employee class to manage Employee information, include students details such as name, age, salary, 
designation, Emp_ID,etc.           CO1        3
Perform the following operations.
1. Initilize Employee information.
2.Accept the details of Employee.
3. Display the details of Employee.
4.Search the details of Employee.
Use the concept of Class, Object, Constructor, Destructor, Static data members and functions,
 Friend function, Inline Function, Memory management operator */
 
#include<iostream>
using namespace std; 
class Employee 
{
	private : 
		char name, desig; 
		int age, salary, Emp_ID; 
	public : 
		Employee();
		void Display();
		bool Search( int searchId);  
	
	// Destructor
    ~Employee() 
	{
        // Destructor to handle cleanup, if needed
    }
};
Employee :: Employee()
	{
		cout<<"\nEnter Employee Name :"; 
		cin>>name; 
		cout<<"\nEnter Employee Age :"; 
		cin>>age; 
		cout<<"\nEnter Employee ID :";
		cin>>Emp_ID;
		cout<<"\nEnter Employee Designagtion :";
		cin>>desig;
		cout<<"\nEnter Employee Salary :";
		cin>>salary; 
	}
void Employee :: Display()
{
	cout<<"\n--------------------Employee Information---------------------"; 
	cout<<"\nName : "<<name; 
	cout<<"\nAge :"<< age; 
	cout<<"\nEmp_ID :"<<Emp_ID; 
	cout<<"\nDesignation :"<<desig; 
	cout<<"\nSalary :"<<salary; 
}
bool Employee :: Search(int searchId)
{
	if(searchId == Emp_ID)
	{
		Display(); 
		return true; 
	}
	return false; 	
}
int main()
{
	int n, searchId, ch; 
	cout<<"\nEnter the No. Of Employees : "; 
	cin>>n; 
	Employee *e = new Employee[n]; // Memory Management using new 
	do
	{
		cout<<"\n-----------------Menu-------------------"; 
		cout<<"\n1.DisplayInfo\n2.SearchEmployee\n3.Exit"; 
		cout<<"\nEnter Your Choice :"; 
		cin>>ch; 
		switch(ch)
		{
			case 1 : 
				for(int i=0;i<n;i++)
				{
					e[i].Display();
				}
				break; 
			case 2 : 
				cout<<"\nEnter Employee Id to search :" ;
				cin>>searchId; 
				{
					bool found = false; 
					for(int i=0;i<n;i++)
					{
						if(e[i].Search(searchId))
						{
							found=true; 
							break; 
						}
					}
					if(! found)
					{
						cout<<"\nEmployee Id :"<<searchId<<"not found"; 
					}
				}
				break; 
			case 3 : 
				cout<<"\n----------------Thank You-------------"; 
				return 0; 
			default : 
				cout<<"\Enter Correct Choice !!!"; 
		}
	}while(ch!=3); 
	delete[] e;		//deallocate memory
	return 0; 
}