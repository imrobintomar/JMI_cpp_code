#include<iostream>
using namespace std;
class salary
{
	public:
		 float sal;
		 float hra;
		 float basic;
		
		void input()
		{
			cout<<"Please Enter Your  salary";
			cin>>basic;
			
		}
		void find() 
		{  
			 if (basic>=20000)
			 
			 {  
			        sal=(basic*2)/100;
             
 		 }
			 else {
			 	sal=(basic*1.2)/100;
			 	
			 	
			 }
		}
	
	void display()
	{
		cout<<" ......PLEASE FIND  SALARY DETAILS BELOW....... "<<endl;
		
		cout<<"You have Entered Your Basic Salary is =="<<basic<<endl;
		
		cout<<"Your HRA will be "<<sal<<endl;
		
		cout<<"Your total salary will be =="<<sal+basic<<endl; 
			
		
	}
};
int main()
{
	salary obj1;
	obj1.input();
	obj1.find();
	obj1.display();
	return 0;
	
	
}
