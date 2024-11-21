#include<iostream>
using namespace std;
int main()
{
    int age=10;
    float money=25.54;
    char division='D';
    bool adder=0;
    double percentage=12.25785;
    cout<<sizeof(age)<<"\n";
    cout<<sizeof(money)<<"\n";
    cout<<sizeof(division)<<"\n";
    cout<<sizeof(adder)<<"\n";
    cout<<sizeof(percentage)<<"\n";



// Explicit Type cast
    float value=254.989;
    int newvalue=(int)value;
    cout<<newvalue<<"\n";   // Big data type to small data type
    cout<<"Tejas"<<"Nalawade\n";  
    return 0;
}

