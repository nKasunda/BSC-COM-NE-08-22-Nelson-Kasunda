#include<iostream>

using namespace std;

int main()
{
    int *pflexibleInt = nullptr;
    string *pflexibleString = nullptr;

    pflexibleInt = new int;                                 //dynamic integer & string memory allocation 
    pflexibleString = new string;

                                                          //integer and string value assignment
    cout <<"Enter an integer value \n";                       
    cin  >> *pflexibleInt;
   
    cout << "Enter a string value  \n";
    cin >> *pflexibleString;
                                                            // integer and string value output   
    cout << "The entered integer value is " << *pflexibleInt << endl;
    cout << "The entered string value is "  << *pflexibleString << endl;
   
                                               //deallocates integer & string memory
    delete pflexibleInt;                  
    delete pflexibleString;

    return 0;
    

}