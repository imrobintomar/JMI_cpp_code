#include <iostream >
using namespace std;
class simpleInterest {
	
	public:
		float p;
		float rate ;
		float time ;
		float  si;
		float amount;
		
		void input()
		{
		
		cout<<"Please Enter The Principle Amount=";
		cin>>p;
	    cout<<"Please Enter The Rate of Interest=";
		cin>>rate;
		cout<<"Please Enter The Time Duration=";
		cin>>time;
}
       void findclc ()
       { 
       	 si= (p * rate * time)/100;
       	 
       	 amount= si+p;
	   }
	
	
   void display() {
		
		cout<<"\n :::::::::::::: Entered Details Are Here  ::: : : : : : : : : \n";
                cout<<"\n Principle Amount: "<<p;
                cout <<"\n\n Rate of Interest: "<<rate;
                cout <<"\n\n Number of years: "<<time;
                cout <<"\n\n Interest : "<<si;
                cout <<"\n\n Total Amount : "<<amount<<" Rs."<<"\n";
	}
	
	
};

int main()
{
	simpleInterest  obj1;
	obj1.input();
	obj1.findclc();
	obj1.display();
	
	
	
	
}
