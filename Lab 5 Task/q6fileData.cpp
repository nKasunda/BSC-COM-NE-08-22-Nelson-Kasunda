#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(const string& data) 
{
    int vowelCount = 0;
    for (char c : data) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int countWords(const string& data) 
{
    int wordCount = 1;                              // the spaces in between are always 1 less than the number of words
    for (char c : data) {
        if (c == ' ') {
            wordCount++;
        }
    }
    return wordCount;
}

string reverseStatement(string data) 
{
    reverse(data.begin(), data.end());
    return data;
}

string capitalSecondLetter(string data)
{   
    int i;
    
    for (i = 0; i < data.length(); i++)
    {
        if(i == 0 && data[i] != ' ')
        {
            data[i+1] = toupper(data[i+1]);
            data[i] = tolower (data[i]);
        }
        else if((data[i]) == ' ' && data[i+1] != ' ')
        {
            data[i+2] = toupper(data[i+2]);
            data[i+1] = tolower (data[i+1]);
        }
    }
    return data;

}

int main() {
    string fileData;
    int vowelCount = 0, wordCount = 1;

    ifstream myFile("advancedModule.txt");

    if (myFile.is_open()) {
        while (getline(myFile, fileData)) 
        {
            vowelCount = countVowels(fileData);
            wordCount = countWords(fileData);
            string reversedData = reverseStatement(fileData);
            string capitalizedSecondLetters = capitalSecondLetter(fileData);

            cout << "The total number of vowels is " << vowelCount << endl;
            cout << "The total number of words is " << wordCount << endl;
            cout << "The reversed statement would be: " << reversedData << endl;
            cout << "The Statement with capitalized second word character would be: " << capitalizedSecondLetters <<endl;
        }
        myFile.close();
    } else {
        cout << "Unable to open file"; 
    }
    
    return 0;
}
