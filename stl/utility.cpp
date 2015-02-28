#include <utility>
#include <string>
#include <iostream>

using namespace std;
int main(){
	pair <string, int> data; // defailt construction
	pair <string, int> data_1("yassine",18);
	
	data = make_pair("birig",20);
	cout << "my name " << data.first << " Age " << data.second<<endl;
	data.first = "Ayman";
	data.second = 22;
	cout << "my name " << data.first << " Age " << data.second<<endl;
	return 0;
	}
