//#include<iostream>
//using namespace std;
//int main() {
//	//Smallest missing number
//	int nums[] = { 1,2,3,5,6,7,8,9 };
//	int n = sizeof(nums) / sizeof(nums[0]);
//	int missing = n+1;
//	for (int i = 0;i < n;i++) {
//		if (nums[i] != i+1) {
//			missing = i+1;
//			break;
//		}
//	}
//	cout << "The smallest missing number is:" << missing << endl;
//	return 0;
//}