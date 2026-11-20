#include <iostream>

using namespace std;

int main()
{
    int Seconds;
    int Hours;
    int Minuts;
    int reSeconds;
    cin>>Seconds;
    cout << Seconds << "Seconds"<< endl;
    cout <<"========================="<<endl;
    Hours = Seconds /3600;
    cout << Hours << "Hours" <<endl;
    Minuts =  ( Seconds%3600)/60 ;
    cout << Minuts << "Minuts" <<endl;
    reSeconds = Seconds%60;
    cout << reSeconds << "reSeconds" << endl;
    return 0;
}
