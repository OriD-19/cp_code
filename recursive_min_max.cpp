#include <iostream>
#include <vector>
#include <valarray>

using namespace std;

int max_rec(vector<int> nums) {

  if(nums.size() == 1) {
    return nums[0];
  }

  int elem = nums[0];
  vector<int> t(nums.begin() + 1, nums.end());
  int another_elem = max_rec(t);

  return (elem > another_elem) ? elem : another_elem;

}

int min_rec(vector<int> nums) {

  if(nums.size() == 1) {
    return nums[0];
  }

  int elem = nums[0];
  vector<int> t(nums.begin() + 1, nums.end());

  int another_elem = min_rec(t);

  return (elem < another_elem) ? elem : another_elem;

}

int main() {

  cout << max_rec({5, 10, 20, 12, 22, 31, 1, 1, 20}) << endl;
  cout << min_rec({5, 10, 20, 12, 22, 31, 1, 1, 20}) << endl;
  

  return 0;
}
