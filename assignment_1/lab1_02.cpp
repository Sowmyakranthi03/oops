#include <iostream>

using namespace std;

int main()
{

    string name ;
    cout<<"Enter your name "<<endl;
    cin>>name;
    for(int i=0;i<name.length();i++)
     {
         cout<<"    "<<name[i]<<" ASCII VALUE : " <<int(name[i])<<endl;
     }


    return 0;
}
