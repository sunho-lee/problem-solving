#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 프로그래머스 숨어있는 숫자의 덧셈 (2)
// 65 ~ 90, 97~122 isdigit
int solution(string my_string) {
  int answer = 0;
  vector<string> v;
  string s = "";
  for (int i = 0; i < my_string.size(); i++) {
    char c = my_string[i];
    if (isdigit(my_string[i])) {
      s.push_back(my_string[i]);
    } else if (!isdigit(my_string[i]) && s != "") {
      v.push_back(s);
      s = "";
    }
  }
  if (v.size() == 0) {
    return 0;
  }
  for (int i = 0; i < v.size(); i++) {
    if (atoi(v[i].c_str())) {
      answer = answer + atoi(v[i].c_str());
    }
  }
  return answer;
}

int main() {
  int result = solution("zzz111");
  cout << result;
  return 0;
}