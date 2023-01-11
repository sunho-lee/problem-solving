#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

string solution(string s) {
  string answer = "";
  unordered_map<char, int> m;
  for (int i = 0; i < s.size(); i++) {
    m[s[i]] = m[s[i]] + 1;
  }
  for (auto& it : m) {
    if (it.second == 1) {
      answer.push_back(it.first);
    }
  }
  sort(answer.begin(), answer.end());
  return answer;
}
