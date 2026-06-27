## 오늘 푼 문제
문자열 반복해서 출력하기
## 코드
```cpp
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    int n;
    cin >> str >> n;
    
    for(int i=0;i<n;i++)
    {
        cout<<str;
    }
    return 0;
}
```
## 배운 것
- 반복문은 C와 동일하다
