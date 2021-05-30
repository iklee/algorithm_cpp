# Dijkstra Algorithm

- priority_queue 를 활용
- 1차원의 dist[] 배열에 값을 넣고 업데이트 필요
- 입력 데이터는 vector<pair<int,int>> 로 받으면 된다. <end, cost> 를 넣으면 된다.
- 입력데이터 선언: ``` vector<pair<int,int>> graph[1000] ```
- graph[start] 가 <end, cost> 를 여러 개 가지고 있는 방식이다.
- vector를 활용해야 각 node 별로 edge 개수 파악이 쉽다. vector의 size() 함수 이용

