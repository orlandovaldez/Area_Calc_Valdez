#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

void inputNumber(int);


int main() 

{
  
  int input = 0;
  char exit = '\0';
  cout << fixed << setprecision(3);

  do
  {

    
      
      cout << "\nInput 1 for Area of Triangle \nInput 2 for Area of a Rectangle \nInput 3 for Area of a Circle \nInput 4 to clear the screen \nInput 5 to exit the program \n";
      cin >> input ;
      inputNumber(input);


      
  }
  while(exit != -1);
  {
    cout << "\nError ----> Enter valid input\n" ;
      cin.clear();
      cin.ignore(1000,0);
      
  }


  return 0;
}

void inputNumber(int option)
{
  double area = 0.0;

  if(option == 1)
  {
    double base = 0.0, height = 0.0;
    
    cout << "\nEnter Base of Triangle: " << endl;
    cin >> base;

    cout << "\nEnter Height of Triangle: " << endl;
    cin >> height;
    area = ((base * height) / 2);
    cout << "The area of the Triangle is " << area << endl;
  }
  else if(option == 2)
  {
    double length = 0.0, width = 0.0;
    
    cout << "\nEnter Length of Rectangle: " << endl;
    cin>> length;

    cout << "\nEnter Width of Rectangle: " << endl;
    cin >> width;
    area = length * width ;
    cout << "The area of the Rectangle is " << area << endl;
  }
  else if(option == 3)
  {
    double radius = 0.0;
    
    cout << "\nEnter the Radius of the Circle: " << endl;
    cin >> radius;
    area = M_PI * (radius * radius);
    cout << "The area of the circle is " << area << endl;

  }
  else if(option == 4)
  {
    cout << "\033[2J\033[1;1H";
  }
  else if(option == 5)
  {
      cout << "Goodbye! :D " << endl;
      exit(0) ;
  }

}