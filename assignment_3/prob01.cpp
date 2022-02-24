#include <iostream>

using namespace std;

class prime_numbers  
{
public:
int n;
void print_prime()
{
for(int i=2;i<=n;i++)
{
    int isprime = 0;
    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0){
            isprime =1;
            break;
        }
    }
    if(isprime==0 && n!=1)
    cout<<i<<" ";
}
}
    
};

int main()
{   int m;
    cout<<"Enter the value of n\n";
    cin>>m;

    prime_numbers input;
    input.n = m;

    input.print_prime();
    return 0;

}