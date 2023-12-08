# graph = {
#     1: [2, 3, 4, 5],
#     2: [],
#     3: [6, 7],
#     4: [],
#     5: [8, 9],
#     6: [],
#     7: [10],
#     8: [11],
#     9: [],
#     10: [],
#     11: []
# }
graph = {
    1: [2, 4],
    2: [1, 3],
    3: [2, 4],
    4: [1, 3, 5],
    5: [4]
}

visited = set()
queue = []

print("BFS: ")


def bfs(node):
    visited.add(node)
    queue.append(node)
    while queue:
        n = queue.pop(0)
        print(n, end=" ")
        for i in graph[n]:
            if i not in visited:
                visited.add(i)
                queue.append(i)


bfs(1)
