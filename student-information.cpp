#include <iostream>

using namespace std;

int main()
{
    string name,ID,Age,Mark1,Mark2,Mark3;

    cout << "Student Information" << endl;

    cout << "name:" << name;
    getline(cin, name);
    cout << "ID:" << ID;
    cin>>ID;
    cout << "Age:" << Age;
    cin>>Age;
    cout << "Mark1:" << Mark1;
    cin>>Mark1;
    cout << "Mark2:" << Mark2;
    cin>>Mark2;
    cout << "Mark3:" << Mark3;
    cin>>Mark3;
    return 0;
}
