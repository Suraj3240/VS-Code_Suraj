n = 8
board = [[0 for i in range(n)] for j in range(n)]


def printing(boards):
    temp = []
    for i in boards:
        g = 0
        print(i)
        for j in i:
            g += 1
            if j == 1:
                temp.append(g)
    print()
    print(temp)


def isSafe(row, col):
    for x in range(col):
        if board[row][x] == 1:
            return False
    for x, y in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[x][y] == 1:
            return False
    for x, y in zip(range(row, n, 1), range(col, -1, -1)):
        if board[x][y] == 1:
            return False
    return True


def eight_queen(col):
    if col == n:
        printing(board)
        return True
    for i in range(n):
        if isSafe(i, col):
            board[i][col] = 1
            if eight_queen(col+1):
                return True
            board[i][col] = 0
    return False


eight_queen(0)
