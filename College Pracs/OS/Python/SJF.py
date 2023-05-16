#sjf
def main():
    n = int(input("Enter number of process "))
    burst_time = [0] * n
    waiting_time = [0] * n
    turnaround_time = [0] * n
    process_id = [i+1 for i in range(n)]
    print("Enter the burst time for each process:")
    for i in range(n):
        burst_time[i] = int(input())
    arrival_time = [0] * n
    print("Enter the arrival time for each process:")
    for i in range(n):
        arrival_time[i] = int(input())
    # Sorting the processes according to their burst time
    for i in range(n):
        for j in range(i+1, n):
            if burst_time[i] > burst_time[j]:
                arrival_time[i], arrival_time[j] = arrival_time[j], arrival_time[i]
                burst_time[i], burst_time[j] = burst_time[j], burst_time[i]
                process_id[i], process_id[j] = process_id[j], process_id[i]

    # Calculating the waiting time for each process
    sum = 0
    for i in range(n):
        waiting_time[i] = 0
        for j in range(i):
            waiting_time[i] += burst_time[j]
        sum += waiting_time[i]
    avg = sum / n
    sum = 0
    print(" Process\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time")
    for i in range(n):
        turnaround_time[i] = burst_time[i] + waiting_time[i]
        sum += turnaround_time[i]
        print(f"\nP{process_id[i]}\t\t{burst_time[i]}\t\t{arrival_time[i]}\t\t{waiting_time[i]}\t\t{turnaround_time[i]}")

    # Display a Gantt Chart for the scheduling
    print("\nGantt Chart:\n|", end="")
    for i in range(n):
        print(f"\tP{process_id[i]}\t|", end="")
    print("\n", end="0\t")
    for i in range(n):
        print(f"\t{turnaround_time[i]}\t", end="")
    print()

if __name__ == "__main__":
    main()