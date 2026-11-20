#include <iostream>

using namespace std;

int main()
{
    int Age;
    cout << "Enter your Age :";
    cin>>Age;
    if ( Age<=13 && Age>=0 )
        cout <<"Child"<<endl;
    else if ( Age>13 && Age<=20)
        cout <<"Teenager"<<endl;
        else if (Age>20 && Age<=60)
            cout <<"Adult"<<endl;
        else
            cout <<"senior"<<endl;


    return 0;
}

