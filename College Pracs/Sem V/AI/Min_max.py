import math
leaf_nodes = [3, 5, 2, 9, 12, 5, 23, 23]
height = int(math.log2(len(leaf_nodes)))
curr_len = len(leaf_nodes)
isMaxi = True
if height % 2 == 0:
    isMaxi = False


def min_max(level, length, maxi):
    temp = []
    if maxi:
        i = 0
        while i < length:
            temp.append(max(leaf_nodes[i], leaf_nodes[i+1]))
            i += 2
    else:
        i = 0
        while i < length:
            temp.append(min(leaf_nodes[i], leaf_nodes[i+1]))
            i += 2
    for j in range(0, int(length/2)):
        leaf_nodes[j] = temp[j]


for i in range(1, height+1):
    min_max(i, curr_len, isMaxi)
    curr_len = int(curr_len/2)
    isMaxi = not isMaxi


print("Optimal answer: ", leaf_nodes[0])
