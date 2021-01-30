#include<iostream>
using namespace std;
class forLoop
{
	public:
		int i;
		int sum = 0;
		
		void dispaly(){
			
			while(i<=50)

{

if(i%2==0)

{ cout<<i<<endl;

sum+=i;

}

i++;

}     
	cout<<"sum is ="<<sum<<endl;

			
		}
};
int main(){

forLoop obj;
obj.dispaly();
return 0;
}
