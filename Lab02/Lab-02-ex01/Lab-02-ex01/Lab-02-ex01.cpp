
#include<iostream>

using namespace std;

void inputInteger(int numbers[]);
int searchArray(int numbers[], int searchKey);
int findmax(int numbers[]);

int main() {
	int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key;

	inputInteger(numbers);
	cout << "Enter Search Key :";
	cin >> key;

	if (searchArray(numbers, key)== -1) {
		cout << "\nValue not found" << endl;
	}
	else {
		cout << "\nValue Found at " << (searchArray(numbers, key)+1) << endl;
	}

	//max
	cout << "\nMax Number is :" << findmax(numbers) << endl;
}

void inputInteger(int numbers[]) {
	int i = 0;
	for (i = 0; i < 10; i++) {
		cout << "Enter Number " << i + 1 << ":";
		cin >> numbers[i];
	}
	 
}

int searchArray(int numbers[], int searchKey) {
	int i = 0;
	int flag = 0;
	for (i = 0; i < 10; i++) {
		if (searchKey == numbers[i]) {
			return i;
			break;
			flag = 1;
		}
	}
	if (flag == 0) {
		return -1;
	}

}
int findmax(int numbers[]) {
	int i = 0;
	int max = numbers[0];

	for (i = 0; i < 10; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	return max;
}
