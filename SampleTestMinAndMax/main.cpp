#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

class Box
{
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

int main()
{
   cout << "Hello World" << endl; 
  
 Box Box1;        // Declare Box1 of type Box
   Box Box2;        // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;

   // box 2 specification
   Box2.height = rand() % 10;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
   int loops = 400000;
   int looping = 0;
   int vehicleRestart = 1;
   int ShoeRestart = 3;
   int shoeRestart = 0;

   std::cout << " ShoeRestart value: " << ShoeRestart << std::endl;
   time_t t = time(0);   // get time now
    time_t rawtime;
  struct tm * timeinfo;
for(int increment=0; increment<10; increment++)
{
   for(int i=0; i < loops; i++)
   {
       if(ShoeRestart && ((loops -5) < looping)&& abs(ShoeRestart-5)*600L < shoeRestart)
       {
          // std::cout << " this ShoeRestart opened things up: " << ShoeRestart << std::endl;
           std::cout << " in the inner looping loop: " << looping << " i: " << i << std::endl;
            struct tm * now = localtime( & t );
         
          time (&rawtime);
  timeinfo = localtime (&rawtime);
        time (&rawtime);
  timeinfo = localtime (&rawtime);
  std::cout <<  asctime(timeinfo) << std::endl;
  
       }
       looping ++;
       shoeRestart++;
   }
   
}
   if(vehicleRestart)
    std::cout << " this must be working: " << std::endl;
  
   return 0;
}
