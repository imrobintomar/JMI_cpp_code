#include<iostream>
using namespace std;
class forLoop
{
	public:
		int i;
		
		void dispaly(){
			
			for(i=0;i<=100;i++)
			{
				cout<<i<<endl;
			}
			
			
		}
};
int main(){

forLoop obj;
obj.dispaly();
return 0;
}
