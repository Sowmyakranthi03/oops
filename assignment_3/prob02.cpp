#include<iostream>
using namespace std;

class number
{
    public:
    void findnumber(int *a,int n)
    {
        int min=a[0];
        int max=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        a[0]=max;
        a[1]=min;
    }
};
int main()
{
    cout << "Enter the size of Array : ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the values of Array : "<< endl;
    for(int i=0;i<n;i++)
    {
        cout << i << " : ";
        cin >> a[i];
    }
    number p;
    p.findnumber(a,n);
    cout << "Largest Number : " << a[0] << endl;
    cout << "Smallest Number : " << a[1] << endl;
    
    return 0;
}