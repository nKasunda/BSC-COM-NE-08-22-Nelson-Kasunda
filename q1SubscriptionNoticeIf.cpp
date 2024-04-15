#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void subscriptionCheck(int x )        //evaluates subscription status
{
    
    if(x <= 0)
    {
        cout << "Your subscription has expired " ;
    }

    if( x <= 1){
        cout << "your subscription expires within a day! " << endl;
        cout << "Renew now and save 20%! ";
    }
    else if(x <= 5){
        cout << "Your subscription expires in " << x << " days,"<<endl;
        cout << "Renew now and save 10%! ";
    }
    else if(x <= 10){
        cout << "Your subscription will expire soon,Renew now! ";
    }
    else{
        cout << "You have an active subscription";
    }
    

}

int main()
{
    srand(time(0));
    int daysUntilExpiration = rand() % 12;    // Generates a random number between 0 and 11
    
    subscriptionCheck(daysUntilExpiration);   
     
    return 0;
}   