#include <iostream>

using namespace std;

int main()
{
    int age;
    cout <<" Amusement Park Ticket " << endl;
    cout << " ---------------------------" << endl;
    cout << " Enter your age: ";
    cin >> age;
    if ( age<5 && age>=0 )
        cout << "Price Ticket=free" << endl;
    else if ( age>=5 && age<18 )
        cout << "Price Ticket=10" << endl;
    else if ( age>=18 && age<60 )
        cout << "Price Ticket=25" << endl;
    else if ( age>=60 )
        cout << "Price Ticket=15"<< endl;

    else
        cout << " Invalid age " << endl;
    return 0;
}
