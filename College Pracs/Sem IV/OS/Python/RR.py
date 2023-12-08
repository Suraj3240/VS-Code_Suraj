# Round Robin
from collections import deque

def round_robin(processes, quantum):
    n = len(processes)
    wait_time, turnaround_time, remaining_time = [0] * n, [0] * n, [p[1] for p in processes]
    q = deque()
    current_time = 0
    completed_processes = []
    
    for i in range(n):
        q.append(i)
        
    while q:
        i = q.popleft()
        if remaining_time[i] <= quantum:
            current_time += remaining_time[i]
            turnaround_time[i] = current_time
            completed_processes.append(i)
            for j in q:
                wait_time[j] += remaining_time[i]
            remaining_time[i] = 0
        else:
            current_time += quantum
            remaining_time[i] -= quantum
            for j in q:
                if j != i:
                    wait_time[j] += quantum
            q.append(i)
    
    avg_wait_time = sum(wait_time) / n
    avg_turnaround_time = sum(turnaround_time) / n
    
    print("Process\tBurst Time\tWaiting Time\tTurnaround Time")
    for i in completed_processes:
        print(f"P{i}\t\t{processes[i][1]}\t\t{wait_time[i]}\t\t{turnaround_time[i]}")
    
    print(f"Average Waiting Time: {avg_wait_time:.2f}")
    print(f"Average Turnaround Time: {avg_turnaround_time:.2f}")
processes = [(0, 10), (1, 5), (2, 8), (3, 7), (4, 4)]
quantum = 2
round_robin(processes, quantum)
