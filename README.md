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
- ```
const int MAX_NODE = 500;
int graph[MAX_NODE+1][MAX_NODE+1];
for(int i=1; i <=num_node; i++)
- 

# Visual Studio 설정
- [SDL설정 끄기] (https://royal-jelly.tistory.com/62)
- 디버깅 창이 꺼질 때


## 소스 코드
- [다익스트라 알고리즘](https://github.com/iklee/algorithm_cpp/blob/main/dijkstra/main.cpp)
- [플로이드-워셜 알고리즘] (https://github.com/iklee/algorithm_cpp/blob/main/Floyd-Warshall/main.cpp)
