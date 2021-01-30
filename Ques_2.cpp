#include <iostream >
using namespace std;
class simpleInterest {
	
	public:
		double p;
		double rate ;
		double time ;
		double si;
		void input()
		{
		
		cout<<"PLEASE ENTER THE PRINCIPLE AMOUNT";
		cin>>p;
	    cout<<"PLEASE ENTER THE RATE OF INTEREST";
		cin>>rate;
		cout<<"PLEASE ENTER THE TIME DURATION";
		cin>>time;
}
       void calc()
       {
       	si=p*r*t/100;
       	
	   }
	
	
	void display(){
		
		
		cout<<"YOUR SIMPLE INTEREST WILL BE "<<si<<endl;
	}
	
	
};

int main()
{
	simpleInterest  obj1;
	obj1.input();
	obj1.calc();
	obj1.display();
	return 0;
	
	
	
}
