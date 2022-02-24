#include <iostream>

using namespace std;

int main()
{
    int i,j,temp;
    cout<<"Enter a:";
    cin>>i;
    cout<<"Enter b:";
    cin>>j;
    temp=i;
    i=j;
    j=temp;
    cout<<"After Swaping a ="<<i<<" & b ="<<j<<endl;
    return 0;
}
