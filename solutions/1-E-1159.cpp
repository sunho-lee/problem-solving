#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

// 내일은 일본과 국가대표 친선 경기가 있는 날이다. 상근이는 내일 경기에 나설 선발 명단을 작성해야 한다.
// 그는 선수의 이름을 기억하지 못하고, 각 선수의 능력도 알지 못한다.
// 따라서, 누가 선발인지 기억하기 쉽게 하기 위해 성의 첫 글자가 같은 선수 5명을 선발하려고 한다.
// 만약, 성의 첫 글자가 같은 선수가 5명보다 적다면, 상근이는 내일 있을 친선 경기를 기권하려고 한다.

//상근이는 내일 경기를 위해 뽑을 수 있는 성의 첫 글자를 모두 구해보려고 한다.
// ----- 입력 -----
// vector<string> inputs : N개 배열에는 각 선수의 성이 주어진다.
// (성은 알파벳 소문자로만 이루어져 있고, 최대 30글자이다)
// ----- 출력 -----
// vector<char> result - 선발 가능한 성의 첫글자를 사전순으로 공백없이 출력한다.
// 상근이가 선수 다섯 명을 선발할 수 없는 경우에는 "PREDAJA" (따옴표 없이)를 출력한다.
string solution(vector<string> inputs) {
  string result = "";
  // Write your code here
    vector<int> cnt(26);
    for(int i = 0; i < inputs.size(); i++){
        char first = inputs[i].at(0);
        cnt[first - 'a']++;
    }
    for(int i = 0; i < cnt.size(); i++){
        if (cnt[i] >= 5){
            char c = i + 'a';
            result.push_back(c);
        }
    }
    if (result ==""){
        return "PREDAJA";
    } 
  return result;
}

vector<string> input() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  return a;
}

void output(string result) {
    cout << result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<string> input = ::input();
  string result = ::solution(input);

  ::output(result);
  return 0;
}
