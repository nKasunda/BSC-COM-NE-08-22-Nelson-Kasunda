#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int daysUntilExpiration = rand() % 12;    // Generates a random number between 0 and 11
 
    switch (daysUntilExpiration)
    {
    case  0 :                                                      /* constant-expression */  
        cout << "Your subscription has expired " ;                       /* code */
        break;

    case  1 :
        cout << "your subscription expires within a day! " << endl;
        cout << "Renew now and save 20%! ";
        break;

    case 2 ... 5:
        cout << "Your subscription expires in " << daysUntilExpiration << " days,"<<endl;
        cout << "Renew now and save 10%! ";
        break;

    case 6 ... 10:
        cout << "Your subscription will expire soon,Renew now! "; 
        break;

    default:
        cout << "You have an active subscription";
        break;
    }


    return 0;
}    
