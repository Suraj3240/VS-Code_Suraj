# Read in the value of N
n = int(input("Enter a number: "))

# Initialize the summation variable
summation = 0

# Loop through the natural numbers up to N
for i in range(1, n+1):
    # Add the current number to the summation
    summation += i
    # print(i," ")
    # Print the current summation
    print(summation)
