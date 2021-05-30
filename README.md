# Algorithm C++
README.md 문법 - https://otugi.tistory.com/172

## How to build
```
clang++-7 -pthread -std=c++17 main.cpp
```

## 코딩 주의사항
- distance 는 변수명으로 쓰면 안 된다. std::distance 가 있어서 ambiguous 에러 발생함.
- 변수명으로 dist나 d를 사용한다.


## 소스 코드
- [다익스트라 알고리즘](https://github.com/iklee/algorithm_cpp/blob/main/dijkstra/main.cpp)
