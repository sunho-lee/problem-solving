#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//
//
//
// int[9] = inputs -
// int[7] = results -
vector<int> solution(vector<int> inputs) {
  vector<int> result;
  // Write your code here

  return result;
}

vector<int> input() {
  vector<int> a;
  for (int i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  return a;
}

void output(vector<int> result) {
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> input = ::input();
  vector<int> result = ::solution(input);

  ::output(result);
  return 0;
}
