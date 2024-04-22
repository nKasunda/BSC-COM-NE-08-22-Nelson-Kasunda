#include<iostream>

using namespace std;

int main()
{
    int numberOfElements = 0;
    int *dynamicArray = nullptr;

    cout << "How many numbers would you liek to type? ";
    cin >> numberOfElements;

    dynamicArray =  new int[numberOfElements];

    if (dynamicArray == nullptr)
    {   cout << "Error: memory could not be allocated \n";
       
    } else
    {
        for(int i = 0; i < numberOfElements;i++){
        cout << "Enter number: \n";
        cin >> dynamicArray[i];
        }
    }


    cout << "You have entered: ";
    for(int j = 0 ;j < numberOfElements; j++)
    {   
        cout << dynamicArray[j] << ", ";
     } 

     cout << endl;

    delete[] dynamicArray;

    
    return 0;
}