#include <iostream>     
#include <iomanip>      
#include <string>
#include <sstream>
using namespace std;

int main () {
	/** setw() : Sets the field width to be used on output operations. **/
	cout << 77<<endl;
	cout <<setw(10)<< 77 << endl;
	
	/** Sets the decimal precision to be used to format floating-point values on output operations.**/
	///Use fixed floating-point notation
	
	/*
	double f =3.14159;
	double a = 5;
	double b = 2.10;
	cout<< f << endl;
	cout<< b << endl;
	cout<< a << endl²	
	cout<<"Set decimal precision"<<endl;
	cout<<fixed<<setprecision(5)<< f << endl;
	cout<<fixed<<setprecision(5)<< b << endl;
	cout<<fixed<<setprecision(5)<< a << endl;
	cout<<endl;
	cout<< f << endl;
	cout<< b << endl;
	cout<< a << endl;
	*/
	///setiosflags
	cout<<"|"<<setw(20)<<142.1<<"|\n";
	cout<<"|"<<setw(20)<<setiosflags(ios::left)<<142.1<<"|\n";
	cout<<"|"<<setw(20)<<setiosflags(ios::scientific)<<142.1<<"|\n";
	cout<<"|"<<setw(20)<<setiosflags(ios::fixed)<<142.1<<"|\n";	
	cout<<"|"<<setw(20)<<setiosflags(ios::right)<<142.1<<"|\n";
	/// Base Conversion
	cout<<"\n\n";
	cout<<"the decimal value of 15 is "<<15<<endl;
	cout<<"the octal value of 15 is "<<showbase<<oct<<15<<endl;
	cout<<"the hexadecimal value of 15 is "<<showbase<<hex<<15<<endl;
	cout<<"the hexadecimal uppercase value of 15 is "<<showbase<<uppercase<<hex<<15<<endl;
	
	cout<<showbase<<dec; // back to decimal
	
	cout<<"the decimal value of 025 is "<<025<<endl;
	cout<<"the decimal value of 0x37 is "<<0x37<<endl;
	
	/// Other
	
	bool status = true;
	cout<<status<<endl;
	cout<<boolalpha<<status<<endl;
	cout<<"some staff"<<flush<<endl;
	
	/// Reading string
	string firstname, secondname;
	string line1, line2;
	cin>> firstname >>secondname;
	cout<<"Entered name: "<<firstname<<" "<<secondname<<endl;
	
	getline(cin,line1); // read the enter
	getline(cin,line1);
	cout<<"line1 data: "<<line1<<endl;
	
	getline(cin,line2);
	cout<<"line2 data: "<<line2<<endl;
	
	cout<<"enter bar separated data; e.g. yassine|birig|27\n\n";
	string first;
	string second;
	int age;
	getline(cin,first,'|');
	getline(cin,second,'|');
	cin>>age;
	cout<<first<<endl;
	cout<<second<<endl;
	cout<<age<<endl;
	cout<<"\n\n";
	/// istringstream
	
	string data = "10 yassine 5.2";
	int iNum;
	string name;
	double dNum;
	istringstream iss(data);
	iss>>iNum>>name>>dNum;
	cout<<iNum<<endl;
	cout<<name<<endl;
	cout<<dNum<<endl;
	
	/// input Validation
	
	
	
	
  return 0;
}
