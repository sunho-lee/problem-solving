#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
  int answer = 0;
  vector<string> v;
  v.push_back("aya");
  v.push_back("ye");
  v.push_back("woo");
  v.push_back("ma");

  sort(v.begin(), v.end());

  map<string, int> m;

  do {
    m.insert(pair<string, int>(v[0], 0));
    m.insert(pair<string, int>(v[0] + v[1], 0));
    m.insert(pair<string, int>(v[0] + v[1] + v[2], 0));
    m.insert(pair<string, int>(v[0] + v[1] + v[2] + v[3], 0));
  } while (next_permutation(v.begin(), v.end()));

  for (int i = 0; i < babbling.size(); i++) {
    if (m.find(babbling[i]) == m.end()) {
    } else {
      answer++;
    }
  }

  return answer;
}

int main() {
  vector<string> test2;
  test2.push_back("aya");
  test2.push_back("yee");
  test2.push_back("u");
  test2.push_back("maa");
  test2.push_back("wyeoo");
  int result2 = solution(test2);
  cout << result2 << '\n';

  vector<string> test1;
  test1.push_back("ayaye");
  test1.push_back("uuuma");
  test1.push_back("ye");
  test1.push_back("yemawoo");
  test1.push_back("ayaa");
  int result = solution(test1);
  cout << result << '\n';

  return 0;
}