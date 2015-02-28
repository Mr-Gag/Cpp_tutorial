#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> v; //empty vector
	vector <int>::iterator it;
	/**
	 vector <int> v2(4,10) // four ints with value 10
	 vector <int> v3(v2) //copy
	 vector <int> v4(v2.begin(),v2.end()) 
	 * v.begin(), v.end(), v.rbegin(), v.rend()
	**/
	int val,N;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >>  val;
		v.push_back(val);
		}
	cout<<"\n\n";
	for(it = v.begin();it != v.end();++it){
		cout << *it <<endl;
	}
	if(v.empty())
		cout <<"is Empty";
	else 
		cout << "Size :"<< v.size() <<endl; 
	// pop_back() delet last element in vector
	v.pop_back();
	cout<<"after pop size :"<<v.size() <<endl;
	//erase remove element single or range
	v.erase(v.begin()+2);
	v.erase(v.begin(),v.begin()+3);
	cout<<"after erase size :"<<v.size() <<endl;
	// clear vector
	v.clear();
	cout<<"after clear size :"<<v.size() <<endl;
	return 0;
}

