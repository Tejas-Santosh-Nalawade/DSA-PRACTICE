# include<iostream>
using namespace std;

int sum(int a, int b) // Pass By Value means only value is passed 
{
    a=a+5;   // 15
    b=b+10;  // 15
    cout<<&a<<"\n";
    cout<<&b<<"\n";
    return a+b;

}

int main()
{
    int a=15, b=10;
    cout<<sum(a,b)<<"\n";
    cout<<a<<"\n"<<b<<"\n";
    cout<<&a<<"\n"<<&b<<"\n";
    return 0;
}