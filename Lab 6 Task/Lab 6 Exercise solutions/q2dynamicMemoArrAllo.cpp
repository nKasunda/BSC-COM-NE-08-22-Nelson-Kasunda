#include<iostream>

using namespace std;

int main()
{

    int rows, cols;
    double rowInput,columnInput;
                                                                                                // array row and column definition
    cout <<"Enter the number of array rows, \n CAUTION!: rows must not be greater than 3 " << endl;           
    if((cin >> rows) && rows > 3 )
    {
       cout  << "ERROR!!: The entered number of rows is more than 3, defaulting it to 3. " << endl;
    rows = 3;
    }

    cout << "\nEnter the number of array columns, \n CAUTION!: columns must not be greater than 3 " <<endl;
    if (( cin >> cols) && cols > 3) 
    {
        cout << "ERROR!!: The entered number of columns is more than 3, defaulting it to 3. " << endl;
        cols = 3;
    }

    double **pArray = new double*[rows];               // dynamic multidimesion array row memory allocation 

    for(int i = 0; i < rows ; i++)                    // dynamic multidimesion array column memory allocation
    {
        pArray[i] = new double[cols];

    }
      
    for (int i = 0; i < rows; i++)                                      //array value assignment
    {
        
        for (int j = 0; j < cols; j++)
        {
            cout << "\nEnter the value of row [" << i << "][" <<  j << "]" <<endl; 
            cin >> pArray[i][j];

        }
        
    }               
    cout << "The array is: " << endl;

    for (int i = 0; i < rows; i++) {                                        //array value outputing
        for (int j = 0; j < cols; j++) {
            cout << pArray[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {                                     // array row and column dynamic memory deallocation
        delete[] pArray[i];
    }
    delete[] pArray;               
    
    return 0;

}