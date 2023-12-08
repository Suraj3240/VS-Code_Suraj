# FIFO

# 3 3 4 5 6 1 3
#  [4 5 6]
pages = list(map(int,input("Enter the pages seperated by space: ").split()))
n = len(pages)
size = int(input("Enter the size of frame: "))
frame = []
p = 0
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
        p+=1
    else:
        frame[p%size] = pages[i]
        fault += 1
        p+=1
    p+=1
    print(frame, x, f"hits={hit}", f"faults={fault}")