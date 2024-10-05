#include<iostream>
using namespace std;
int main()
    {
        int n=4;
        int num=1;
        char c='A';
        for(int i=0; i<n; i++)
        {
 
            for(int j=1; j<n; j++)
            {
                cout<<num<<" ";
                num++;
            }
            cout<<endl;
        }
        cout<< endl;  
            for(int i=0; i<n; i++)
        {
 
            for(int j=1; j<n; j++)
            {
                cout<<c<<" ";
                c++;
            }
            cout<<endl;
        }

    return 0;
    }