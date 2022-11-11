#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

	float m, v;
	string firstStatement, secondStatement, thirdStatement;

	firstStatement = "now we are going to calculate KE=1/2*m*v^2";
	secondStatement = "please state a value for mass kg:";
	thirdStatement = "please state a value for velocity m/s:";

	cout << firstStatement << endl;
	cout << secondStatement << endl;
	cin >> m;
	cout << "kg" << endl;
	cout << thirdStatement << endl;
	cin >> v;
	cout << "m/v" << endl;
	cout << (1.0/2.0)*m*pow(v, 2) << endl;
	
	cout << sqrt(2) << endl;
	cout << pow(2, 0.5) << endl;

	return 0;
}
