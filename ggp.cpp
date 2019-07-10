#include<iostream>
using namespace std;
int main()
{
	int p;
	cout <<"Enter your point : ";
	cin >>p;

	if(p > 100 )
		cout << "False ";
	else if (p >= 90)
		cout << "Your grade A" << endl;
	else if (p >= 80)
		cout << "Your grade B" << endl;
	else if (p >= 70)
		cout << "Your grade C" << endl;
	else if (p >= 60)
		cout << "Your grade D" << endl;
	else if (p >= 0)
		cout << "Your grade F" << endl;
	else 
		cout << "False";
	return 0 ;
}