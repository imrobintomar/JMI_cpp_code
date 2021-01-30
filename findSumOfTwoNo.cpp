#include <iostream>
using namespace std;
class sum
{
    private:
    int x, y;
    
    public:
    void input()
{
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    sumxy(x,y);
} 
 int sumxy(int a,int b)
{
    int s;
    s=a+b;
    cout<<"Sum= "<<s;
    return 0;
}
};
int main()
{
    sum o;
    o.input();
    return 0;
}
