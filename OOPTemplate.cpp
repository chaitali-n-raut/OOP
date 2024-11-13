/* To create a function template for selection sort that can sort arrays of various size such as integer and float */

#include<iostream>
using namespace std; 
int n, i; 
template <class T>
void SelectionSort( T a[10])
{
	T temp;
	cout<<"\nEnter No. of Elements You want to Store :"; 
	cin>>n;
	cout<<"Enter Elements :"; 
	for( int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for ( int j=i+1;j<n;j++)
		{
			if(a[i]>a[i])
			{
				temp = a[i];
				a[i] = a[j]; 
				a[j] = temp; 
			}
		}
	}
	cout<<"\nArray Elements are :"; 
	for(int i =0;i<n;i++); 
	{
		cout<<a[i]<<endl; 
	}
}
int main()
{
	int a[10], ch; 
	float b[10]; 
	char c[10]; 
	do
	{
		cout<<"\n--------------------Menu--------------------------"; 
		cout<<"\n1.Enter Elements in Int Type \n2.Enter Elements in Float Type \n3.Enter Elements in Char Type \n4.Exit"; 
		cout<<"\nEnter Your Choice :"; 
		cin>>ch; 
		switch(ch)
		{
			case 1 : 
				SelectionSort(a); 
				break; 
			case 2 : 
				SelectionSort(b); 
				break; 
			case 3 : 
				SelectionSort(c); 
				break; 
			case 4 : 
				cout<<"-----------Exiting------------"; 
				return 0; 
				break; 
			default : 
				cout<<"\n!!!!!!!!Wrong Choice!!!!!!!!!!"; 
				break; 	
		}
	}while(ch!=4); 
return 0; 
}