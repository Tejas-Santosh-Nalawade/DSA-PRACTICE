#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to be get printed: ";
    cin>>n;

    // Outer loop
    for (int i=1; i<=n; i++)
    {  
        for (int j=1; j<=n ; j++)
        {
            cout<<"* ";
        }
    cout<<endl;
    }

    for (int i=1; i<=n; i++)
    {  char c='A';
        for (int j=1; j<=n ; j++)
        {
            cout<<c<<" ";
            c=c+1;
        }
    cout<<endl;
    }
    return 0;
}