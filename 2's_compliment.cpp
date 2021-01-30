#include<iostream> 
#include<cmath> 
  
using namespace std; 
  
// Function to find 10's complement 
int complement(int num) 
{ 
    int i,len=0,temp,comp; 
      
    // Calculating total digits 
    // in num 
    temp = num; 
    while(1) 
    { 
        len++; 
        num=num/10; 
        if(abs(num)==0) 
            break;         
    } 
      
    // restore num 
    num = temp; 
      
    // calculate 10's complement 
    comp = pow(10,len) - num; 
      
    return comp; 
} 
  
// Driver code 
int main() 
{ 
    cout<<complement(25)<<endl; 
      
    cout<<complement(456); 
      
    return 0; 
} 
