#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

// 공 던지기
int solution(vector<int> numbers, int k) {
  int index = 0;
  for (int i = 1; i < k; i++) {
    index = index + 2;
    if (index >= numbers.size()) {
      index = index - numbers.size();
    }
  }
  return numbers[index];
}

int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  int re = solution(v, 2);
  cout << re;
  return 0;
}