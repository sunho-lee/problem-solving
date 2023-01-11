#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
// 프로그래머스 소인수분해
vector<int> solution(int n) {
  set<int> s;
  int x = 2;
  while (true) {
    if (n == 1) {
      break;
    } else if (n % x == 0) {
      n = n / x;
      s.insert(x);
    } else {
      x++;
    }
  }
  vector<int> answer(s.begin(), s.end());
  sort(answer.begin(), answer.end());
  return answer;
}

int main() {
  vector<int> v = solution(12);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << '\n';
  }
  return 0;
}