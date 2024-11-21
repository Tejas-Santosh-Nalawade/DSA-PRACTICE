/*Calculating Sum of Digits of a number Example num=145 -> 1+4+5= 10
Implementation
Example step 1: 145 % 10= 5   
        step 2: 145/10= 14.5==14 sum=0+5=5
        step 3: 14%10= 4  
        step 4: 14/10= 1.4 == 1 sum=5+4=9
        step 5: 1%10=0  sum=9+1= 10
        step 6: end loop  sum=9+1+0=10
        step 7 return sum=10;
*/

# include<iostream>
using namespace std;
long long int SumofDigit(int num)
{
    int sum=0;
    while(num>=1)
    {
        int value=num%10;
        num/=10;
        sum+=value;
    }
    return sum;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int num;
        cin>>num;
        cout<<SumofDigit(num)<<"\n";
    }
    return 0;
}