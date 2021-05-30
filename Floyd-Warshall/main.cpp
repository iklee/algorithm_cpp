#include <iostream>
using namespace std;

int num_node = 0;
int num_edge = 0;

const int MAX_NODE = 500;
const int INF = 123456789;
int graph[MAX_NODE+1][MAX_NODE+1];

int main()
{
  freopen("data_1.txt", "r", stdin);
  cin >> num_node >> num_edge;

// 기본 값은 무한대로 설정
  fill_n(&graph[0][0], MAX_NODE*MAX_NODE, INF);

  int start, end, cost;
  for(int i=0; i< num_edge; i++) {
    cin >> start >> end >> cost;
    graph[start][end] = cost;
  }

// 자기 자신은 0 으로 설정
  for(int i=1; i <= num_node; i++) {
    graph[i][i] = 0;
  }

  for(int i=1; i <= num_node; i++) {
    for(int j=1; j<= num_node; j++) {
      for(int k=1; k<= num_node; k++) {
        graph[i][j] = min(graph[i][j], graph[i][k]+graph[k][j]);
      }
    }
  }

// 결과 출력
  for(int i=1; i <= num_node; i++) {
    for(int j=1; j <= num_node; j++) {
      cout << graph[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}