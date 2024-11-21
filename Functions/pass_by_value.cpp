# include<iostream>
using namespace std;

 // Pass By Value means only value is passed copy is creted in the memory and only chane in function copy not in main function memory copy
int sum(int a, int b)
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