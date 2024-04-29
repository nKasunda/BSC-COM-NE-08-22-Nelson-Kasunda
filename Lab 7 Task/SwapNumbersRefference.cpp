#include<iostream>

using namespace std;

void SwapNumbers(int& A,int& B)
{
    int temp = A;
    A = B;
    B = temp;

   cout << "varA & varB after swap: " << A << endl; //varA is 100
   cout << "VarB after swap: " << B << endl; //varB is 25

}


int main()
{
    int varA = 25;
    int varB = 100;

   cout << "varA before swap: " << varA << endl; //varA is 25
   cout << "VarB before swap: " << varB << endl; //varB is 100
    
    SwapNumbers(varA,varB);
     
    return 0;
}