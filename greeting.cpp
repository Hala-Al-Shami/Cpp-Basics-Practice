#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string name;
    cout << "Enter your age:" ;
    cin >> age;




    cout << "Enter your name:" ;
    getline(cin, name) ;


    cout << "Hello" << name <<  endl;
    cout << "Your age is:" << age << endl;

    return 0;
}
