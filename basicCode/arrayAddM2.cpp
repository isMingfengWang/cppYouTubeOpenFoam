#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void vectorAdd(int **p1, int **p2, int d1, int d2);

int main(){

	const int d1 = 2, d2 = 2;
	
	// cout << "请输入维度一： " << endl;
	// cin >> d1;
	// cout << "请输入维度二： " << endl;
	// cin >> d2;


	int arr1[d1][d2];
	int arr2[d1][d2];

	cout << "请输入数组一：" << endl;
	for(int i = 0; i < d1; i++){
		for(int j = 0; j < d2; j++){
			cout << "请输入第" << i+1 << "行" << j+1 << "列元素" << endl;
			cin >> arr1[i][j];
		}
	}
	cout << "数组一输入完成！" << endl;

	cout << "请输入数组二：" << endl;
	for(int i = 0; i < d1; i++){
		for(int j = 0; j < d2; j++){
			cout << "请输入第" << i+1 << "行" << j+1 << "列元素" << endl;
			cin >> arr2[i][j];
		}
	}
	cout << "数组二输入完成！" << endl;

	for(int i = 0; i < d1; i++){
		for(int j = 0; j < d2; j++){
			cout << *(*(arr1+i)+j) << endl;
		}
	}

	for(int i = 0; i < d1; i++){
		for(int j = 0; j < d2; j++){
			cout << *(*(arr2+i)+j) << endl;
		}
	}

	vectorAdd((int **)arr1, (int **)arr2, d1, d2);
	// 需要进行强制转换。形参p1是行指针，与之对应的就是数组名，但是形参是二级指针因此需要将数组名强制转换为二级指针

	return 0;
}

void vectorAdd(int **p1, int **p2, int d1, int d2){
	int re[d1][d2];
	for(int i = 0; i < d1; i++){
		for(int j = 0; j < d2; j++){
			cout << *(*(p1+i)+j) << endl;
			*(*(re+i)+j) = *(*(p1+i)+j) + *(*(p2+i)+j);
		}
	}

	for(int i = 0; i < d1; i++){
		for(int j = 0; j < d2; j++){
			cout << re[d1][d2] << " ";
		}
	}

}