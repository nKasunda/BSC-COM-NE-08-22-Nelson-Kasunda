#include<iostream>

using namespace std;

int main()
{
    int *pflexibleInt = nullptr;
    string *pflexibleString = nullptr;

    pflexibleInt = new int;                                 //dynamic integer and string memory allocation 
    pflexibleString = new string;


    cout <<"Enter an integer value \n";
    cin  >> *pflexibleInt;
   
    cout << "Enter a string value  \n";
    cin >> *pflexibleString;

    cout << "The entered integer value is " << *pflexibleInt << endl;
    cout << "The entered string value is "  << *pflexibleString << endl;
   
   
    delete pflexibleInt;
    delete pflexibleString;

    return 0;
    

}