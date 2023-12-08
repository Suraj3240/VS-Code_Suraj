import multiprocessing

# F unction to print a message
def print_message(message):
    print(message)

# Function to run a program
def run_program(program_name):
    print_message("Starting " + program_name + " program...")
    # Here we can write the code to run the program
    print_message("Exiting " + program_name + " program...")

# Create two processes to run two programs simultaneously
p1 = multiprocessing.Process(target=run_program, args=('Program 1',))
p2 = multiprocessing.Process(target=run_program, args=('Program 2',))

# Start the processes
p1.start()
p2.start()

# Wait for the processes to finish
p1.join()
p2.join()

print("Both programs have finished.")