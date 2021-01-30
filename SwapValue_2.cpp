#include<iostream>
using namespace std;
//Main Program
int main()
{
	
	int swap(int x,int y);
	int a,b;
	cout<<"Please Enter the Value of A =";
	cin>>a;
	cout<<"Please Enter the Value of B =";
	cin>>b;
	
	swap(a,b);
}

int swap(int x,int y)
{
	
	x=x+y;//3+4=7
	y=x-y;//7-4=3
	x=x-y;//7-3=4
	cout<<" After the swapping the value of A will be = "<<x<<endl;
	cout<<" After the swapping the value of B will be= "<<y<<endl;
return 0;

	
}
