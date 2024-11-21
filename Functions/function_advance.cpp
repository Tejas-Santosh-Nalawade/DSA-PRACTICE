#include<iostream>
using namespace std;
// sum of two number

int sum(int a, int b)
{
    int s=a+b;
    return s;
}
double sum1(int a,int b)
{
    double s=a+b;
    return s;

}
int minof_twonumber(int a, int b)
{
    if(a>b) return a;
    else return b;
}


int main()
{
    cout<<sum(25,36)<<"\n";
    cout<<sum1(25.99,36.25)<<"\n";
    cout<<minof_twonumber(10,25);

    return 0;
}