#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 상근이는 트럭을 총 세 대 가지고 있다. 오늘은 트럭을 주차하는데 비용이 얼마나 필요한지 알아보려고 한다.
// 상근이가 이용하는 주차장은 주차하는 트럭의 수에 따라서 주차 요금을 할인해 준다.
// 트럭을 한 대 주차할 때는 1분에 한 대당 A원을 내야 한다.
// 두 대를 주차할 때는 1분에 한 대당 B원, 세 대를 주차할 때는 1분에 한 대당 C원을 내야 한다.
// A, B, C가 주어지고, 상근이의 트럭이 주차장에 주차된 시간이 주어졌을 때,
// 주차 요금으로 얼마를 내야 하는지 구하는 프로그램을 작성하시오.
// ------입력-------
// vector<int> prices - 주차 요금 A, B, C가 주어진다.
// 예시 : {5, 3, 1}
// vector<vector<int>> cars - 각 차 A, B, C의 주차 시간이 주어진다.
// 예시 : {{1, 6}, { 3, 5}, {2, 8}}
// -----출력-------- 
// int - 상근이가 내야하는 주차 요금을 출력한다.
// 예시 : 33
int solution(vector<int> prices, vector<vector<int>> cars) {
  int result = 0;
  // Write your code here
    vector<int> temp(100);
    for (int i = 0; i < cars.size(); i++){
        vector<int> time = cars[i];
        int start = time[0] - 1;
        int end = time[1] - 1;
        for (int j = start; j < end; j++){
            temp[j]++;
        } 
    }
    for (int i = 0; i < temp.size(); i++) { 
        int n = temp[i] - 1;
       result = result + prices[n] * temp[i]; 
    }

  return result;
}

vector<int> inputPrices() {  
    vector<int> inputs(3); 
    for (int i = 0; i < 3; i++) {
        cin >> inputs[i];
    }
    return inputs;
}

vector<vector<int>> inputCars(){
    vector<vector<int>> inputs(3);
    for (int i = 0; i < 3; i++){
        int temp;
        for(int j = 0; j < 2; j++){
            cin >> temp;
            inputs[i].push_back(temp);
        }
    }
    return inputs;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> prices = ::inputPrices();
  vector<vector<int>> cars = ::inputCars();

  int result = ::solution(prices, cars);
  cout << result;
  return 0;
}
