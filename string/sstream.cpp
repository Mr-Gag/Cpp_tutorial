#include <sstream>
#include <iostream>
#include <string>
using namespace std;
int main(){
	string data="11:20";
	int h,m;
	char t;
	istringstream iss(data);
	iss>>h>>t>>m;
	cout<<h<<endl;
	cout<<m<<endl;
	string s;
	
	return 0;
	}
