#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 프로그래머스 옹알이:ㅈ

// https://school.programmers.co.kr/learn/courses/30/lessons/120956?language=cpp
int solution(int n, int k, vector<int> input) {
  int result = -1000004;
  // Write your code here
  int psum[100001];
  for (int i = 1; i <= n; i++) {
    psum[i] = psum[i - 1] + input[i - 1];
  }

  for (int i = k; i <= n; i++) {
    result = max(result, psum[i] - psum[i - k]);
  }

  return result;
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

  int n, k;
  cin >> n >> k;
  vector<int> inputs;

  for (int i = 0; i < n; i++) {
    int value;
    cin >> value;
    inputs.push_back(value);
  }

  int result = ::solution(n, k, inputs);

  cout << result;
  return 0;
}
