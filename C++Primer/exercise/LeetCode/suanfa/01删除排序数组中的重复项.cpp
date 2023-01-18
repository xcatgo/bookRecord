#include <iostream>
#include <vector>

int readArray();

using namespace std;

int main() {
  readArray();
}

int readArray() {
  vector<int> nums;
  int num = 0;

  do {
    cin >> num;
    nums.push_back(num);

  } while (getchar() != '\n');

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i];
  }

  cout << endl;

  system("pause");

  return 0;
}