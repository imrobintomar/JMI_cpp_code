#include<iostream>
using namespace std ;
class product
{
	public:
		float f,s,t;
		float su;
		void input()
		{
			
			cout<<"Please Enter First NO."<<endl;
			cin>>f;
			cout<<"please enter secont no."<<endl;
			cin>>s;
			cout<<"please enter the third no"<<endl;
			cin>>t;
		}
		void dispaly(){
			su=f*s*t;
			
			cout<<"Product of the three no is ="<<su<<endl;
		}
};
int main(){

product obj;
obj.input();
obj.dispaly();
return 0;
}
