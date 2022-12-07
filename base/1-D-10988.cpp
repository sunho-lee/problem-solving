#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 알파벳 소문자로만 이루어진 단어가 주어진다. 이때, 이 단어가 팰린드롬인지 아닌지 확인하는 프로그램을 작성하시오.
// 팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어를 말한다. 
// level, noon은 팰린드롬이고, baekjoon, online, judge는 팰린드롬이 아니다.
// -----입력-----
// string word - 첫째 줄에 단어가 주어진다.
// 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 알파벳 소문자로만 이루어져 있다.
// -----출력-----
// bool result - 첫째 줄에 팰린드롬이면 true, 아니면 false를 출력한다.
bool solution(string inputWord) {
  bool result = false;
  // Write your code here

  return result;
}

string input() {
  string word;
  cin >> word;
  return word;
}

void output(bool result) {
  cout << result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string input = ::input();
  bool result = ::solution(input);
  ::output(result);

  return 0;
}
