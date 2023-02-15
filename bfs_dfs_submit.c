#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_NODES 1000

int graph[MAX_NODES][MAX_NODES];
int num_nodes;
bool visited[MAX_NODES];

void bfs(int start_node)
{
    int queue[MAX_NODES], front = 0, rear = 0;
    visited[start_node] = true;
    printf("%d ", start_node);
    queue[rear] = start_node;
    rear++;
    while (front != rear)
    {
        int current_node = queue[front];
        front++;
        for (int i = 0; i < num_nodes; i++)
        {
            if (graph[current_node][i] && !visited[i])
            {
                visited[i] = true;
                printf("%d ", i);
                queue[rear] = i;
                rear++;
            }
        }
    }
}

void dfs(int current_node)
{
    visited[current_node] = true;
    printf("%d ", current_node);
    for (int i = 0; i < num_nodes; i++)
    {
        if (graph[current_node][i] && !visited[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    printf("Enter the number of nodes: ");
    scanf("%d", &num_nodes);
    printf("Enter the adjacency matrix of the graph:\n");
    for (int i = 0; i < num_nodes; i++)
    {
        for (int j = 0; j < num_nodes; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }
    printf("BFS: ");
    for (int i = 0; i < num_nodes; i++)
    {
        if (!visited[i])
        {
            bfs(i);
        }
    }
    printf("\n");
    for (int i = 0; i < num_nodes; i++)
    {
        visited[i] = false;
    }
    printf("DFS: ");

    for (int i = 0; i < num_nodes; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    return 0;
}
