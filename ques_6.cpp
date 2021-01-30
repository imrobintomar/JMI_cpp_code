#include<iostream>
#include<math.h>
using namespace std;
class root
{
	public:
		
float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;

  void input()
  {
  	
  	cout<<"Enter coefficients A , B and C" ;
  	cin>>a>>b>>c;
  	
  }
  	void calc()
	  {
  		  discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
}
    };
    int main()
    {
    	root obj;
    	obj.input();
    	obj.calc();
    	return 0;
    	
	}


    
  




