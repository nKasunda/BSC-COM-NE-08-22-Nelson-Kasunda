#include<iostream>

using namespace std;

int main()
{

    int rows, cols;
    double rowInput,columnInput;

    cout <<"Enter the number of array rows, \n CAUTION!: rows must not be greater than 3 " << endl;
    if((cin >> rows) && rows > 3 )
    {
       cout  << "The entered row value is more than 3,defaulting rows to 3 " << endl;
    rows = 3;
    }

    cout << "\nEnter the number of array columns, \n CAUTION!: columns must not be greater than 3 " <<endl;
    if (( cin >> cols) && cols > 3) 
    {
        cout << "Maximum number of columns exceeded. defaulting columns to 3." << endl;
        cols = 3;
    }

    double **pArray = new double*[rows]; 

    for(int i = 0; i < rows ; i++)
    {
        pArray[i] = new double[cols];

    }
      
    for (int i = 0; i < rows; i++) 
    {
        
        for (int j = 0; j < cols; j++)
        {
            cout << "\nEnter the value of row [" << i << "][" <<  j << "]" <<endl; 
            cin >> pArray[i][j];

        }
        
    }
    cout << "The array is: " << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << pArray[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] pArray[i];
    }
    delete[] pArray;
    
    return 0;

}