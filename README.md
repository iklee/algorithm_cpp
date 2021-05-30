# Algorithm C++
README.md 문법 - https://otugi.tistory.com/172

## How to build
```
clang++-7 -pthread -std=c++17 main.cpp
```

## 코딩 주의사항
- distance 는 변수명으로 쓰면 안 된다. std::distance 가 있어서 ambiguous 에러 발생함.
- 변수명으로 dist나 d를 사용한다.
- Node 처리와 같이 1부터 시작하는 배열은 1부터 처리하고 배열은 +1 더해서 만들자
- 배열을 1부터 시작했으면, <= 를 사용하여 처리하자.
```
const int MAX_NODE = 500;
int graph[MAX_NODE+1][MAX_NODE+1];
for(int i=1; i <=num_node; i++) 
```
- 

# Visual Studio 설정
- 주석 단축키: Ctrl+k+c(설정), Ctrl+k+u(해제)
- freopen 사용하기 위해, SDL 설정을 끈다. 
- [SDL 검사 끄기](https://royal-jelly.tistory.com/62) : 프로젝트 - 속성 - 구성 속성 - C/C++ - 일반 - SDL 검사 - 아니요
- SDL 검사 끄기 대신 #define _CRT_SECURE_NO_WARNINGS 를 소스에 입력해도 된다.
- 실행 창이 자동으로 닫히면, Ctrl + F5로 실행해 보자.


## 소스 코드
- [다익스트라 알고리즘](https://github.com/iklee/algorithm_cpp/blob/main/dijkstra/main.cpp)
- [플로이드-워셜 알고리즘](https://github.com/iklee/algorithm_cpp/blob/main/Floyd-Warshall/main.cpp)
