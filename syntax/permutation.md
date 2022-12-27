# 순열
순열이란 순서가 부여된 임의의 집합을 다른 순서로 뒤섞는 연산이다.

* 순서가 중요
* 중복 없음

## cpp

```cpp
#include <vector>
#include <algorithm>
#include <iostream>
std::vector<int> v = {1, 2, 3};
std::sort(v.begin(), v.end());
  do {
    for (int i = 0; i < v.size(); i++) {
      std::cout << v[i] << " ";
    }
      std::cout << "\n";
  } while (std::next_permutation(v.begin(), v.end()));
```
### Input
1 2 3
### Output
- 1 2 3 
- 1 3 2
- 2 1 3
- 2 3 1
- 3 1 2
- 3 2 1
### 주의할 점
sort로 오름차순 정렬 후에 사용해야 모든 경우를 순회한다.

내림차 순일 경우 std::prev_permutation으로 변경해야 함.
```cpp
std:sort(v.begin(), v.end());
```

## Python3

```python
from itertools import permutations

perm = permutations([1, 2, 3])

for i in list(perm):
    print(i)
```
## Java
