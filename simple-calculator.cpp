#include <iostream>

using namespace std;

int main()
{
    double X;
    double Y;
    char op;
    cout << "X=";
    cin>>X;
    cout << "Y=";
    cin>>Y;
    cout << "op=" ;
    cin >> op;
    if ( op=='+')
        cout << X+Y << endl;
    else if ( op=='-')
        cout << X-Y << endl;
    else if ( op=='*')
        cout << X*Y << endl;
    else if ( op=='/')
        cout << X/Y << endl;
    else
        cout << "Invalid operator" << endl;
    return 0;
}
