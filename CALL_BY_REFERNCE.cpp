#include<iostream>
using namespace std;
//Main Program
int main()
{
	
	int a,b;
	int area(int *x, int *y);
	cout<<"PLEASE ENTER THE LENGTH  OF THE RECTANGLE  "<<endl;
	cin>>a;
	cout<<"PLEASE ENTER THE BREADTH OF THE RECTANGLE"<<endl;
	cin>>b;
	
	 area (&a, &b);
	
}
int area(int *x, int *y)
{
	int z;
	z= *x * *y;
	cout<<"AREA OF THE RECTANGLE IS ="<<z;

}
