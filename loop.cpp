#include<iostream>
using namespace std;
class num
{
	private :
		int i, sum;
		public:
		void generate();
			
};
void num::generate()
{
	 sum =0;
	for(i=1;i<=100;i++)
	{
		sum+=i;
		cout<<i<<endl;
	}
	cout<<"sum is "<<sum<<endl;
}
int main()
{
	num o;
	o.generate();
	return 0;
	
}
