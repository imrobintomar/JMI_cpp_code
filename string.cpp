#include<iostream>  

using namespace std;  

int  main()  
{  
string  r;  
string  m ;
cout<<"write the name of A"<<'\n';
cin>>r;
cout<<"write the value of b"<<'\n';
cin>>m;

 
r.swap(m);   
cout<< "After  swap A will be  " << r<<".."<<'\n';  
cout<< "After  swap B   will be  " << m<<"..";  
return 0;  
}  
