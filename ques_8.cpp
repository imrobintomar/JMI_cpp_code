#include<iostream>
using namespace std;
class sequence
{
	public:
		char ch;
		
		void input()
		{
			 cout<<"Please Enter The  character  ";
			 cin>>ch;
		}
		
		void calc() 
		{
			switch(ch){
	case 'C':
		cout<<"ccttaattaattccat";
		break;
    case 'A':
    	cout<<"attcttcttc";
    	break;
    case 'T':
    	cout<<"ttatccta";
    break;				
	default:
	cout<<"it is not protien sequence ";
										
				
				
				
				
			}
			
		}
		
		
		
		
};

int main(){
	sequence  obj;
	obj.input();
	obj.calc();
	return 0;
	
	
}
