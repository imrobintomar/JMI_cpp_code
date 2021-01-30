#include<iostream>
using namespace std;
class exp
{
	public :
	float basic;
	void input(){
		
		cout<<"Enter the basic salary=";
		cin>>basic;
	}
	
		
	
	void display()
	{ float cont,exp,eqi;
		if(basic>20000){
			exp=basic*10/100;
			cout<<" for contigency is=" <<exp<<endl;
			eqi=basic*20/100;
			cout<<" for office eqipment ="<<eqi<<endl;
		}
		 else if (basic<=20000){
		 	
		 	exp= basic*5/100;
		 	cout<<"for contigency is = "<<exp<<endl;
		 	eqi=basic*10/100;
		 	cout<<"for basic eqipment ="<<eqi<<endl;
		 }
		 else{ cout<<"invalid input";
		 }
		
		
	}
	
};
int main()
{
	exp obj;
	obj.input();
	obj.display();
	return 0;
	
	
}
