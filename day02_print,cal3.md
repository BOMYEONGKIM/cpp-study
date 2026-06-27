## 오늘 푼 문제
문자열 돌리기
### 입력
`abcde`
### 출력
```
a
b
c
d
e
```
## 코드
```cpp
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<endl;
    }
        return 0;
}
```
