#include<iostream>

using namespace std;

int main()
{
    int B = 5;
    int a = 4;

    int *pA = nullptr;

    pA = &B;
    pA = &a;
    
    cout << "ADDRESS OF B " << &B << endl;
    cout << "Value of B " << B << endl;
    cout << "value of pA "  << *pA <<endl;
    cout << "Value of *pA " << &pA <<endl;
    cout << "Value of *(pA++) " << *(pA++) << endl;

    return 0;

}