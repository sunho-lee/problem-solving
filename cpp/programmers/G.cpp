#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 최댓값과 최솟값
string solution(string s) {
  string answer = "";
  vector<string> sv;
  long long pos = 0;
  string token = "";
  string delimiter = " ";
  while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos);
    sv.push_back(token);
    s.erase(0, pos + delimiter.length());
  }
  sv.push_back(s);

  vector<int> iv;
  for (int i = 0; i < sv.size(); i++) {
    iv.push_back(atoi(sv[i].c_str()));
  }

  sort(iv.begin(), iv.end());

  answer.append(to_string(iv[0]));
  answer.append(" ");
  answer.append(to_string(iv[iv.size() - 1]));

  return answer;
}

int main() {
  string result = solution("-123 23 44 1 -34");
  cout << result;
  return 0;
}