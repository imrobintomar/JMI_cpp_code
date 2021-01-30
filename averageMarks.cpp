#include<iostream>
using namespace std;
class  division 
{
	int  percentage ;
		
	
				public :
		 int calcDivision();
		 
	};
	
	division ::calcDivision()
	{
		int i;
		float a[10];
		float sum=0;
		for(i=0;i<=10;i++)
			{
			cout<<"Please enter  the marks  "<<endl;
		cin>>a[i];
		sum = sum+a[i];
		
	}
	cout<<"your marks sum is "<<sum<<endl;
		 float percentage= (sum/1000)*100;
		 if (percentage >=70)
		 {
		 	cout<<"FIRST DIVISION WITH DISTINCTION"<<endl;
		 	cout<<"Ab Chahiye full izzat "<<endl;
	 	
		 }
	 else if (percentage >=65)
	 { cout <<"first division"<<endl;
	 }
	else if (percentage >55)
	{
		cout<<"second division"<<endl;
		
	}
	else if (percentage>45 ){
		
		cout<<"third division"<<endl;
	}
	
	else  if (percentage < 30)
	{
		cout<<" Sorry Bhai  tum Fail Ho Gye "<<endl;
	}
	cout<<"Your Percentage is--- "<<percentage<<endl;
}


int main()
{ division  obj;
obj.calcDivision();

return 0;
}


