#include<iostream>
using namespace std;

class Test {
public:
    float r,s , area;

   void input() 
	{
        cout << "Please   Enter the  first  number= "<<endl;
        cin >> r;
        cout<<"Please   Enter the  Second  number="<<endl;
         cin>>s;
    }

    void findSwap()
	 {
        swap(r,s);
    }

   void  display()
	 {
        cout << "After the Swapping  First no. will be=" <<r<<endl;
        cout<<"After the Swapping   Second no. will be="<<s<<endl;
    }
};

int main()
 {

    Test obj;

    obj.input();
    obj.findSwap();
    obj.display();

    return 0;
}
