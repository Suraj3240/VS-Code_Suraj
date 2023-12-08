print("Enter data frame string:\n")
a=input()
b=a.replace("ESC","|ESC|ESC|")
b=b.replace("FLAG","|ESC|FLAG|")
header="|HEADER|"
trailer="|TRAILER|"
print("Your data after byte stuffing is: \n")
print(header + b + trailer)
