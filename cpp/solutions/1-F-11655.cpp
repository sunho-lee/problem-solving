#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string str) {
  string result;
  // Write your code herejÔ
  for (int i = 0; i < str.size(); i++) {
    char cur = str.at(i);
    if ('a' <= cur && cur <= 'z' && cur + 13 > 'z') {
      cur = 96 + cur + 13 - 122;
    } else if ('A' <= cur && cur <= 'Z' && cur + 13 > 'Z') {
      cur = 64 + cur + 13 - 90;
    } else if (('A' <= cur && cur <= 'Z') || ('a' <= cur && cur <= 'z')) {
      cur = cur + 13;
    }
    result.push_back(cur);
  }

  return result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  getline(cin, s);

  string result = ::solution(s);
  cout << result;

  return 0;
}
