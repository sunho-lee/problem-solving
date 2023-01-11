#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int solution(string my_string) {
  int answer = 0;
  for (int i = 0; i < my_string.size(); i++) {
    bool b = isdigit(my_string[i]);
    if (!b) {
      continue;
    }
    int m = my_string[i] - 48;
    answer = answer + m;
  }
  return answer;
}

int main() {
  int a = solution("aAb1B2cC34oOp");
  cout << a;
  return 0;
}