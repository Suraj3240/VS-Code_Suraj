a=input("Enter data frame: ")
b=a.replace("111111","1111101")
flag="01111110"
print("Data after bit stuffing is:\n")
print("|"+flag+"|"+b+"|"+flag+"|")

