#include <iostream>
using namespace std;
typedef long long ll;
enum color {red,green,blue,black,white} c;
int main()
{
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of long long : " << sizeof(long long) << endl;
   cout << "Size of long long int : " << sizeof(long long int) << endl;
   cout << "Size of typedef long long ll : " << sizeof(ll) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of long double : " << sizeof(long double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   cout << "Size of enum color : " << sizeof(c) << endl;
   c = blue;
   cout<<c;
   return 0;
}
