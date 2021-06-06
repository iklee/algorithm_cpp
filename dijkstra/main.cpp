#include <iostream>
#include <vector>
#include <queue>  //priority_queue 사용을 위해
using namespace std;

int num_node = 0;
int num_edge = 0;
int start_node = 0;

const int MAX_NODE = 1000;
vector<pair<int, int>> graph[MAX_NODE + 1];  // node 시작 index를 1부터 시작할 거라서

int dist[MAX_NODE + 1];
const int INF = 123456789;

void dijkstra(int start)
{
  priority_queue<pair<int, int>> queue;
  queue.push(make_pair(0, start));
  
  fill_n(dist, MAX_NODE + 1, INF);
  dist[start] = 0;  // start 값은 0 으로 설정해야 함.

  while (!queue.empty()) {
    int now_value = -queue.top().first;  // queue에서는 first가 value
    int now_node = queue.top().second;
    queue.pop();

    if (dist[now_node] < now_value) continue;  // 연산량 줄이기, 이미 처리한 거는 skip

    for (auto target : graph[now_node]) {
      int target_node = target.first;  // graph 에서는 first가 node
      int target_value = target.second;

      int next_value = now_value + target_value;
      if (next_value < dist[target_node]) {
        dist[target_node] = next_value;
        queue.push(make_pair(-next_value, target_node));  // prior_queue는 디폴트로 값이 큰 값이 위에 있으니, 작은 값이 위에 있도록 처리
      }
    }
  }
}

int main()
{
  freopen("data_1.txt", "r", stdin);

  cin >> num_node >> num_edge >> start_node;

  int start, end, length;
  for (int i = 0; i < num_edge; i++) {
    cin >> start >> end >> length;
    graph[start].push_back(make_pair(end, length));
  }

  dijkstra(1);

  for (int i = 1; i <= num_node; i++) {
    cout << dist[i] << "\n";
  }

  return 0;
}
