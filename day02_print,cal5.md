## 오늘 푼 문제
문자열 겹쳐 쓰기

## 코드
```cpp
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    answer = my_string.substr(0, s) ;
    answer += overwrite_string ;
    answer += my_string.substr(s+overwrite_string.length());
    return answer;
}
```

## 배운점
- 문자열 일부를 다른 문자열로 교체하는 함수가 있음 (`answer = my_string.replace(s,overwrite_string.size(),overwrite_string);`)
