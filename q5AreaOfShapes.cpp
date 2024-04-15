#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int choice;
    double length,width,base,height,area;

   while (true)
   {
    cout << "Please select the area of the shape to calculate\n1.Square\n2.Rectangle\n3.Triangle\n4.Quit Program" << endl << "\nEnter selection: ";

    if(cin >> choice && choice >= 1 &&choice <= 4)
    switch (choice)
    {
    case 1:                                           //finds are of square 
        cout << "Enter the square Length ";
        cin  >> length;
        area = pow(length,2);
        cout << "The area of the square is  " << area << endl;
        return 0;
     
    case 2:                                              // finds area of rectangle 
        cout << "Enter the rectangle`s length and width ";
        cin  >> length >> width;
        area = length * width;
        cout << "The area of the rectanlge is " << area << endl;
        return 0;
    
    case 3:                                            // finds area of triangle
        cout << "Enter the triangle`s base and height ";
        cin >> base >> height;
        area = (base * height) / 2;
        cout << "The area of the triangle is " << area << endl;
        return 0;
    
    case 4:                           // terminates program existance
        return 0;
    default :
        break;
    }
    else{
        cout << "Your input was: " << choice << " which is an invalid input" <<endl;
        cout << "Please enter a valid input!!!" <<endl <<"\n";
    }
   }
    return 0;
}