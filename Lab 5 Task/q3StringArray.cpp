#include <iostream>


using namespace std;

int main()
{
    string letterNumbers[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    string bLettered[8];
    int bCount = 0;

    for (int i = 0; i < 8; i++)
    {
        if (letterNumbers[i][0] == 'B') // Check if the first character is 'B'
        {
            bLettered[bCount++] = letterNumbers[i];
        }
    }
    
    cout << "The strings starting with B: ";
    for (int i = 0; i < bCount; i++)
    {
        cout << bLettered[i] << ", ";
    }
    cout << endl;
        

    return 0;
}
