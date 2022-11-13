#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double reynoldsNumber(double rho, double U, double D, double mu);

int main(){
	
	double rho, U, D, mu, re;
	cout << "please input density in kg/m3: " << endl;
	cin >> rho;
	cout << "please input velocity m/s: " << endl;
	cin >> U;
	cout << "please input characteristic length in m: " << endl;
	cin >> D;
	cout << "please input dynamics viscosity in SI units: " << endl;
	cin >> mu;
	re = reynoldsNumber(rho, U, D, mu);
	cout << "Reynold number is: " << endl;
	cout << re << endl;
	return 0;
}

double reynoldsNumber(double rho, double U, double D, double mu){
	
	double re;
	re = rho*U*D/mu;
	return re;
}
