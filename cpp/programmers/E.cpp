#include <algorithm>
#include <string>
#include <vector>
using namespace std;
// 프로그래머스 진료순서 정하기
bool cmp(pair<int, int> a, pair<int, int> b) { return a.first > b.first; }

vector<int> solution(vector<int> emergency) {
  vector<int> answer(emergency.size(), 0);
  vector<pair<int, int> > v;

  for (int i = 0; i < emergency.size(); i++) {
    v.push_back(make_pair(emergency[i], i));
  }

  sort(v.begin(), v.end(), cmp);

  for (int i = 0; i < v.size(); i++) {
    answer[v[i].second] = i + 1;
  }
  return answer;
}

int main() {
  vector<int> sample;
  sample.push_back(3);
  sample.push_back(76);
  sample.push_back(24);
  vector<int> result = solution(sample);
  return 0;
}