#include <iostream>
#include <string>

using namespace std;

int main(){
	float a ,b;
	string firstStatement, secondStatement, thirdStatement;
	firstStatement = "now you are going to peform a+b";
	secondStatement = "please state a value for a: ";
	thirdStatement = "please state a value for b";

	cout << firstStatement << endl;
	cout << secondStatement << endl;
	cin >> a;
	cout << thirdStatement << endl ;
	cin >> b;
	cout <<"the result of 'a+b=' is: " << a + b ;
	return 0;
}
