#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 알파벳 소문자로만 이루어진 단어 S가 주어진다.
// 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.
//
// string S -  첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다
// vector<int> result(26) - 단어에 포함되어있는 a의 개수, b의 개수, …, z의 개수를 저장한 vector를 반환한다.
// hint : ascii code a ~ z mapped by 97 ~ 122
vector<int> solution(string S) {
  vector<int> result(26);
  // Write your code here

  return result;
}

string input() {
  string S;
  cin >> S;
  return S;
}

void output(vector<int> results) {
  for (int i = 0; i < results.size(); i++) {
    cout << results[i] << ' ';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string input = ::input();
  vector<int> result = ::solution(input);

  ::output(result);
  return 0;
}
