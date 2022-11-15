#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void vectorAddition(int *v1, int *v2);
	
int main(){
	
	int vector1[3][1];

	cout << "please enter x1: " << endl;
	cin >> vector1[0][0];

	cout << "please enter y1: " << endl;
	cin >> vector1[1][0];

	cout << "please enter z1: " << endl;
	cin >> vector1[2][0];


	int vector2[3][1];

	cout << "please enter x2: " << endl;
	cin >> vector2[0][0];

	cout << "please enter y2: " << endl;
	cin >> vector2[1][0];

	cout << "please enter z2: " << endl;
	cin >> vector2[2][0];

	cout << "----------------" << endl;

	vectorAddition(&vector1[0][0], &vector2[0][0]);

	return 0;
}

void vectorAddition(int *v1, int *v2){
	int re[3][1] = {{0}, {0}, {0}};
	int *reP = &re[0][0];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 1; j++){
			*(reP+j ) = *v1 + *v2;
			cout << *reP;
			reP++;
			v1++;
			v2++;	
		}
		cout << endl;
	}


	/*
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 1; j++){
			// cout << *reP << " "; // reP has been changed since reP++ and therefore it doesn't point the beginning of the array. 
			// reP++;
			cout << re[i][j]; // it works
		}
		cout << endl;
	}
	*/

}

