#include<iostream>
using namespace std; 
int n;  
class Student
{
	int rollno; 
	protected: 
		string name;
	public :
		string PRN; 
		void Accept(); 
		void Display(); 
};
class Test : public virtual Student
{
	int c[5], e[5]; 
	string sub[5]; 
	public : 
		void AccT(); 
		void DispT(); 
}; 
class Sport :virtual public Student
{
	string sportName, sportGrade; 
	public : 
		void AccG();
		void DispG(); //Display Grade
};
class Result : public Test, public Sport
{
	public : 
		void DispAll();
		
};
void Student :: Accept()
{
	cout<<"\nEnter the Roll No, PRN, Name:"; 
	cin>>rollno>>PRN>>name;
}
void Student :: Display()
{
	cout<<"\n Roll No. \t PRN NO. \t Name "; 
	cout<<"\n"<<rollno<<"\t"<<PRN<<"\t"<<name; 
}
void Test :: AccT()
{
	cout<<"\nEnter the name of the Subject, CIA and ESE Marks :"; 
	for(int i=0;i<5;i++)
	{
		cin>>sub[i]>>c[i]>>e[i];
	}
}
void Test :: DispT()
{
	cout<<"\nSubject Details :"; 
	cout<<"\n Subject \t\t CIA \t\t ESE";
	for(int i=0;i<5;i++)
	{
		cout<<"\n"<<sub[i]<<"\t\t"<<c[i]<<"\t\t"<<e[i]; 
	}
}
void Sport :: AccG()
{
	cout<<"\nEnter the Sport name and Grade:"; 
	cin>>sportName>>sportGrade; 
}
void Sport :: DispG()
{
		cout<<"\nSport \t Grade"; 
		cout<<"\n"<<sportName<<"\t"<<sportGrade; 
}
void Result :: DispAll()
{
	Display();
	DispT(); 
	DispG(); 
}
int main()
{
	int ch; 
	Result r[10]; 
	cout<<"\nEnter How many Records You Want to Store :"; 
	cin>>n; 
	do
	{
		cout<<"\n-----------Menu-----------------"; 
		cout<<"\n1.Accept \n2.Display"; 
		cout<<"\nEnter Your Choice:"; 
		cin>>ch; 
		switch(ch)
		{
			case 1 : 
				for(int i=0;i<n;i++)
				{
					r[i].Accept(); 
					r[i].AccT(); 
					r[i].AccG(); 
				}
				break; 
			case 2 : 
				for(int i=0;i<n;i++)
				{
					r[i].Display(); 
					r[i].DispT(); 
					r[i].DispG(); 
					r[i].DispAll(); 
				}
				break; 
		}
	}while(ch!=0);
	return 0; 
}