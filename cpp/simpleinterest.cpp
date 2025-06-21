#include<iostream>
using namespace std;
int main(){
    //SI= (P*R*T)/100
    float P, R, T;
    cout << "Enter Principal Amount: ";
    cin >> P;
    cout << "Enter Rate of Interest: ";
    cin >> R;
    cout << "Enter Time in Years: ";
    cin >> T;
    float si = (P * R * T) / 100;
    cout << "Simple Interest is: " << si << endl;
}