#include<iostream>
using namespace std;
int main() {
	int arr[] = {1,2,3,4,3,5,3,7,6,8,9,5,5,5,5,5,5,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int maxCount = 0;
	int mostFreq = arr[0];
	for (int i = 0;i < n;i++) {
		int cout = 0;
		for (int j = 0;j < n;j++) {
			if (arr[i] = arr[j]) {
				count++;

			}
			else if (count > maxCount) {
				maxCount = count;
				mostFreq = arr[i];

			}
		}
	}
	cout << "The most Fre element is:" << mostFreq << endl;
	system("pause");
	return 0;
}