# Optimal

# 3 3 4 5 6 1 3
#  [4 5 6]
pages = list(map(int,input("Enter the pages seperated by space: ").split()))
n = len(pages)
size = int(input("Enter the size of frame: "))
frame = []

hit = 0
fault = 0
for i in range(n):
    x = "fault"
    if pages[i] in frame:
        x = "hit"
        hit+=1
    elif len(frame)<size:
        frame.append(pages[i])
        fault+=1
    else:
        replace = 0
        temp = pages[i:]
        index = 0
        for j,val in enumerate(frame):
            if val not in temp:
                replace = j
                break
            if temp.index(val) > index:
                index = temp.index(val)
                replace = j
        frame[replace] = pages[i]
        fault += 1
    print(frame, x, f"hits={hit}", f"faults={fault}")