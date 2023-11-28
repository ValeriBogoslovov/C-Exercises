#include <iostream>
#include <vector>

using namespace std;

int getAbsSum(vector<int> arr) {
	int sum = 0;

	for(auto num : arr) {
    sum += num;
	}

	return (sum < 0) ? sum = -sum : sum;
}

int main() {

  int arrSum = getAbsSum({3, 2, 5, 6});

  cout << arrSum << endl;
}
