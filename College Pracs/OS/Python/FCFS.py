# FCFS
processes = [{'id':1,'arrival':1,'burst':1},{'id':2,'arrival':6,'burst':2},{'id':3,'arrival':3,'burst':2}]  # [{time:3,burst:5}]
# processes = []
# n = int(input("Enter the number of process:"))
# for i in range(n):
#     temp = {}
#     temp['id'] = i+1
#     temp["arrival"] = int(input(f"Enter arrival time of process p{i+1}:"))
#     temp["burst"] = int(input(f"Enter burst time of process p{i+1}:"))
#     processes.append(temp)

def Display(processes):
    # print table
    print("Process\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time")
    for process in processes:
        print(f"\nP{process['id']}\t\t{process['arrival']}\t\t{process['burst']}\t\t{process['waiting']}\t\t{process['turn']}")
    
    # Display a Gantt Chart for the scheduling
    print("\nGantt Chart:\n|", end="")
    for process in processes:
        print(f"\tP{process['id']}\t|", end="")
    print("\n", end="0\t")
    for process in processes:
        print(f"\t{process['turn']}\t", end="")
    print()


def FCFS(processes):
    processes.sort(key=lambda x: [x['arrival'],x['burst']])
    wait_time = 0
    for process in processes:
        if wait_time < process['arrival']:
            process['waiting'] = 0
            wait_time = process['arrival'] + process['burst']
        else:
            process['waiting'] = wait_time - process['arrival']
            wait_time = wait_time + process['burst']
        process['complete'] = wait_time
        process['turn'] = process['complete'] - process['arrival']
    return processes


FCFS(processes)
Display(processes)