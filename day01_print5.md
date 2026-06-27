## 오늘 푼 문제
특수 문자 출력하기
## 코드
```cpp
#include <iostream>

using namespace std;

int main(void) {
    cout<<"!@#$%\^\&\*\(\\\'\"\<\>\?\:\;";
    return 0;
}
```
## 배운점
- 특수 문자 출력시 이스케이프 필요
- 백슬래시(\)랑 큰따옴표(")만 이스케이프 하면 됨
- R"(...)" 는 raw string이라고 해서 안에 있는 걸 이스케이프 없이 그대로 출력해줌
