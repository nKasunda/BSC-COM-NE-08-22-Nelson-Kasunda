#include<iostream>

using namespace std;

void SwapNumbers(int* pA,int* pB)
{

    int temp = *pA;
    *pA = *pB;
    *pB = temp;

    cout << "varA after swap: " << *pA << endl; //varA is 100
    cout << "VarB after swap: " << *pB << endl; //varB is 25
   
}

int main()
{
    int varA = 25;
    int varB = 100;
    int arry[2];

    cout << "varA before swap: " << varA << endl; //varA is 25
    cout << "VarB before swap: " << varB << endl; //varB is 100

    SwapNumbers(&varA, &varB);

    return 0;
}

