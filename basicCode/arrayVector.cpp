#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double vectorLength(double x, double y,double z);

int main(){
	
	double l;
	double vector[3][1]; // how to define a vector and the index of a vector begins from zero
	
	cout << "please input x: " << endl;
	cin >> vector[0][0]; // how to initialize a vector

	cout << "please input y: " << endl;
	cin >> vector[1][0];

	cout << "please input z: " << endl;
	cin >> vector[2][0];

	cout << "the length is: " << endl;
	l = vectorLength(vector[0][0], vector[1][0], vector[2][0]);
	cout << l << endl;

	return 0;
}

double vectorLength (double x, double y, double z){
	double l;
	l = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	return l;
}
