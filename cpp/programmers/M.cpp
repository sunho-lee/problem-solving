#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

bool comp(pair<int, int>& a, pair<int, int>& b) { return a.second < b.second; }
// 최빈값 구하기
int solution(vector<int> array) {
  unordered_map<int, int> m;
  for (int i = 0; i < array.size(); i++) {
    m[array[i]] = m[array[i]] + 1;
  }
  vector<pair<int, int> > elems(m.begin(), m.end());
  sort(elems.begin(), elems.end(), comp);

  if (elems[elems.size() - 1].second == elems[elems.size() - 2].second) {
    return -1;
  }

  return elems[elems.size() - 1].first;
}

int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(3);
  v.push_back(3);
  v.push_back(4);

  int r = solution(v);
  cout << r;

  return 0;
}