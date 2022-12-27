#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//
//
//
// int[9] = inputs -
// int[7] = results -
vector<string> solution(vector<string> inputs, string pattern) {
  vector<string> result;
  // Write your code here
  int pos = pattern.find('*');
  string front = pattern.substr(0, pos);
  string end = pattern.substr(pos + 1);

  for (int i = 0; i < inputs.size(); i++) {
    string str = inputs[i];
    if (front.size() + end.size() > str.size()) {
      result.push_back("NE");
    } else {
      if (front == str.substr(0, front.size()) &&
          end == str.substr(str.size() - end.size())) {
        result.push_back("DA");
      } else {
        result.push_back("NE");
      }
    }
  }

  return result;
}

vector<string> input(int N) {
  vector<string> input;
  for (int i = 0; i < N; i++) {
    string word;
    cin >> word;
    input.push_back(word);
  }
  return input;
}

void output(vector<string> result) {
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;
  string pattern;
  cin >> pattern;
  vector<string> input = ::input(N);
  vector<string> result = ::solution(input, pattern);

  ::output(result);
  return 0;
}
