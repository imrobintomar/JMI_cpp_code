#include<iostream>
using namespace std ;
class areaOfRectangle
{
	public:
		float f,s,a;
		
		void input()
		{
			
			cout<<"Please Enter length of the rectangle ."<<endl;
			cin>>f;
			cout<<"please enter breadth od the rectangle ."<<endl;
			cin>>s;
			
		}
		void dispaly(){
		a=f*s;
		cout<<"Area of the rectangle is ="<<a;
			
		}
};
int main(){

areaOfRectangle obj;
obj.input();
obj.dispaly();
return 0;
}
