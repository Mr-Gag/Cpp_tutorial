#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Intger  to  string 
string to_string(int val){
	ostringstream foo;
	foo << val;
	return foo.str();
	}


// string to intger
int to_intger(string str){
	istringstream foo(str);
	int val ;
	foo >> val;
	return val;
	}
int main(){
	cout<<100+to_intger("100")<<endl;
	cout<<"Round "+to_string(100);

	return 0;
}
