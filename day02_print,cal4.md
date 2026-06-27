## 오늘 푼 문제
홀짝 구분하기 
자연수만 주어짐


## 코드
```cpp
#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    if(n%2 == 0)
        cout<<n<<" is even";
    else
        cout<<n<<" is odd";
    return 0;
}
```
