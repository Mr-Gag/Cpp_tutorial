#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	/** Construction */
	vector<int> first; //enmpty vector
	vector<int> second(4,100); // four ints with valu 100
	// iterating through second
	vector<int> third(second.begin(),second.end());
	vector<int> four(third); //copy og third
	/** Array */
	int array[] = {16,20,55,5};
	vector<int> fifth(array,array+sizeof(array)/sizeof(int));
	/** iteration */
	vector<int>::iterator it;
	for(it = fifth.begin();it != fifth.end();it++){
		cout<<*it<<' ';
		}
	cout<<endl;
	vector<int>::reverse_iterator rit;
	for(rit = fifth.rbegin();rit != fifth.rend();rit++){
		cout<<*rit<<' ';
		}
	
	return 0;
	}
