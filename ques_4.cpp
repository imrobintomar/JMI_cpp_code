#include<iostream >
using namespace std;
class findMaleOrFemale
{
	public:
		
		char gender;
		
		 void input()
		 {
		 	
		 	cout<<"Please enter The Character M or F";
		 	cin>>gender;
		 	
		 }
		 
		 void calc ()
		 {
		 	if (gender=='m'||gender=='M')
		 	{
		 		cout<<"He is the male ";
	 		
			 }
		 	else  if (gender=='f'||gender=='F')
			 { 
		 		cout<<"She is  Female ";
			 }
			 else{
			 	 cout<<"it is the invalid input";
			 }
		 }
};
int main() 
{
	 findMaleOrFemale obj;
	 obj.input();
	 obj.calc();
	 return 0;

	
}
