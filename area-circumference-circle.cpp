#include <iostream>

using namespace std;

int main()
{
    int R;
    int Area;
    int circumference;
     const double π=3.14;
    cout << "R=";
    cin>>R;
    Area = π*R*R;
    cout << "Area ="<< Area <<endl;
    circumference=2*π*R;
    cout<< "circumference=" << circumference << endl;
    return 0;
}
