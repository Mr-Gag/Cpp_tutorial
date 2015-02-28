/** Return array from functions in C++ **/

#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

// function to generate and retrun random numbers.
int * getRandom( )
{
  static int  r[10];

  for(int i=0;i<10;i++) r[i]=i+222;
  for(int i=0;i<10;i++){
    cout << r[i] << endl;
  }

  return r;
}

// main function to call above defined function.
int main ()
{
   // a pointer to an int.
   int *p;

   p = getRandom();
   for ( int i = 0; i < 10; i++ )
   {
       cout << "*(p + " << i << ") : ";
       cout << *(p + i) << endl;
   }

   return 0;
}
