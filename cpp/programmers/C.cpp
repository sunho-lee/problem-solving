#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// 외계행성의 나이
string solution(int age) {
  string answer = "";
  unordered_map<int, char> m = {{0, 'a'}, {1, 'b'}, {2, 'c'}, {3, 'd'},
                                {4, 'e'}, {5, 'f'}, {6, 'g'}, {7, 'h'},
                                {8, 'i'}, {9, 'j'}};

  for (int i = age; i > 0; i = i / 10) {
    answer.push_back(m.at(i % 10));
  }
  reverse(answer.begin(), answer.end());
  return answer;
}

int main() {
  string result = solution(100);
  cout << result;
  return 0;
}