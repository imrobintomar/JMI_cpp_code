#include<iostream>
using namespace std;
class vowelOrConsonant
{
	public:
		char ch;
		
		void input()
		{
			 cout<<"Please Enter The Character ";
			 cin>>ch;
		}
		
		void calc() 
		{
			switch(ch){
	case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    //check upper case vowel letters
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    cout<<ch<<" is a vowel";
    break;
									
	default:
	cout<<"it is the consonant";
				
			}
			
		}
};

int main(){
	vowelOrConsonant  obj;
	obj.input();
	obj.calc();
	return 0;
	
	
}
