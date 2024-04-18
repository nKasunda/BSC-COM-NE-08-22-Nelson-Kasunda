#include<iostream>
#include<limits>

using namespace std;

int main()
{
    int input;
    cout << "Enter an integer value between 5 and 10 " <<endl;
    while (true)
    {
        
        cin >> input;
        
        if(input > 5 &&  input < 10 ){
            cout << "Your input value(" << input <<") has been accepted.";
            break;
        }
        else if(input <= 5 && input >= 10){
            cout  << "You entered " << input << "Please enter a number between 5 and 10.";
        
        }
        else{
            cout << "Sorry, you have entered an invalid number,Please try again. \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clears the input buffer of any non-numerical values
        }
    }
    
   return 0 ;

}
