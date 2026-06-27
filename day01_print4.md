##오늘의 문제
대소문자 바꿔서 출력하기

##코드
```cpp
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' &&str[i]<='Z' )
        {
            str[i]=tolower(str[i]);
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]=toupper(str[i]);
      }

    }
    
    cout<<str;
    return 0;
```
##배운점
- `string` : C++의 문자열 전용 자료형 (char 배열보다 편함)
- `str.length()` : 문자열 길이 반환 (`strlen`과 동일한 역할)
- `str[i]` : 문자열의 i번째 문자 접근 (배열과 동일)
- `tolower(c)` : 문자 하나를 소문자로 변환 (반환값을 저장해야 함)
- `toupper(c)` : 문자 하나를 대문자로 변환 (반환값을 저장해야 함)
- `using namespace std;` : std:: 생략 가능하게 해주는 선언





}

```
