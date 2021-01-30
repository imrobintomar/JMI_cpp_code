#include<iostream>
using namespace std;
//Main Program
int main()
{
	
	int product(int x,int y ,int w); //function declaration
	
	int a,b,c,d;
	cout<<"Enter the FIRST NO."<<endl;
	cin>>a;
	cout<<"Enter the SECOND NO"<<endl;
	cin>>b;
	cout<<"Enter the THIRD NO"<<endl;
	cin>>c;
	//calling function
 d= product(a,b,c);
 cout<<"The product of the three  number is " <<d<<endl;
}
product(int x,int y,int w)  //function
{
	int z;
	z=x*y*w;
	return z;
	
}
