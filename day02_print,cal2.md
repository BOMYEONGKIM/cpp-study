## 오늘 푼 문제
문자열 붗여서 출럭하기

## 코드
```cpp
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1<<str2;
    return 0;
}
```
## 배운점
- 이 문제는 띄어쓰기가 없는 경우
- 띄어쓰기를 하고싶으면 (`cout << str1 <<' '<< str2;`)
- printf에 string 쓸 때는 .c_str() 붙여줘야 함(`printf("%s %s\n", a.c_str(), b.c_str());`)
