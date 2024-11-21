# include<iostream>
using namespace std;

 // Pass By Reference means no copy is created the change in original memory so address will be same
int sum(int &a, int &b)
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