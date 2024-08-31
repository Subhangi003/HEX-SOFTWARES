#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e,f;
	string n;
	cout << "Enter your name: ";
    getline(cin, n); 
	cout << "Enter the marks in English"<<endl;
	cin >> a;
	cout << "Enter the marks in Hindi"<<endl;
	cin >> b;
	cout << "Enter the marks in Science"<<endl;
	cin >> c;
	cout << "Enter the marks in Mathematics"<<endl;
	cin >> d;
	cout << "Enter the marks in Social cience"<<endl;
	cin >> e;	
	f = ((a+b+c+d+e)*100/500);
	cout<<"Your percentage is : "<<f<<endl;
	
	if (f>=90)
	
	{
		cout<<"Grade is A++";
	}
	else if(f>=80)
	{
		cout<<"Grade is A";
	}
	else if(f>=70)
	{
		cout<<"Grade is B";
	}
	else if(f>=60)
	{
		cout<<"Grade is C";
	}
	else if(f>=50)
	{
		cout<<"Grade is D";
	}
	else if(f>40)
	{
		cout<<"Grade is E";
	}
	else if(f>30)
	{
		cout<<"you are fail"<<endl;
	}
	return 0;
}