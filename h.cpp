#include <iostream>
using namespace std;

int main() {
	int human;
	cout <<"tnter the age : \n";
	cin >> human;
	if(human <= 10)
		cout << "Childhood \n";
	else if(human <= 16)
		cout << "Adolescence \n";
	else if(human <= 25)
		cout << "Maturity stage \n";
	else
		cout << "Young adulthood \n";
 return 0;
}