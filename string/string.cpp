
#include <iostream>

using namespace std;

int main ()
{
   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	int n=sizeof(greeting)/sizeof(greeting[0]);
	cout<<n<<endl;
   cout << "Greeting message: ";
   cout << greeting << endl;

   return 0;
}
