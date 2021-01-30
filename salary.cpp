#include<iostream>
using namespace std;
int main()

{ 
int salary;


cout<<" Enter basic salary : ";
 cin>>salary;
    
    if (salary>20000)
    { 
	cout<<"YOUR SALARY IS  & AND YOUR HRA IS 1.2% .....===="<<(salary*1.02);
}
	else {
	
	cout<<"YOUR SALARY IS & YOUR HRA IS 2.0% ======="<<(salary*1.015);
		
}
return 0;

	}

