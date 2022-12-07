#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//
//
//
// int[9] = inputs -
// int[7] = results -
vector<int> solution(vector<int> inputs, vector<int> results) {
  // Write your code here

  return results;
}

vector<int> input(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  return a;
}

void output(vector<int> results) {
  for (int i = 0; i < results.size(); i++) {
    cout << results[i] << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> inputArray(9);
  vector<int> resultArray(7);

  vector<int> input = ::input(inputArray);
  vector<int> result = ::solution(input, resultArray);

  ::output(result);
  return 0;
}
