#include <iostream> 
using namespace std;
 
enum e_usflcnst{ 
	CATLIFE_FACTOR = 7 
};
 
int main() 
{ 
	int age;
	cout << "Enter your age: ";
	cin >> age;
	age /= CATLIFE_FACTOR;
	cout << "If you were cat, you would be " << age << endl;
} 
 
