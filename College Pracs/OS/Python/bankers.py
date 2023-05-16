#bankers algorithm
import numpy as np

# Number of processes
P = 5

# Number of resources
R = 3

# Available resources
available = np.array([4, 5, 3])

# Maximum resources required by each process
maximum = np.array([[9, 7, 8], [3, 2, 2], [4, 0, 2], [2, 2, 2], [2, 2, 3]])

# Allocated resources for each process
allocated = np.array([[0, 1, 0], [2, 0, 0], [3, 0, 2], [2, 1, 1], [0, 0, 2]])

# Need of each process
need = maximum - allocated
print(need)
# Finish status of each process
finished = np.zeros(P)

# Safe sequence
safe_seq = np.zeros(P, dtype=int)

# Work array
work = np.copy(available)



# Check if a process can be finished
def can_finish(p):
    return (finished[p] == 0 and np.all(work >= need[p]))

# Find a safe sequence
for i in range(P):
    for j in range(P):
        if can_finish(j):
            safe_seq[i] = j
            finished[j] = 1
            work += allocated[j]
            break

# Print the safe sequence
if np.all(finished == 1):
    print("Safe sequence:", safe_seq)
else:
    print("No safe sequence found")