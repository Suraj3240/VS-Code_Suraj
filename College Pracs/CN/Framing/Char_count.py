n=int(input("Enter no of frames: "))
arr=[]
for i in range(n):
    word=input(f"Enter the data for frame {i+1}: ")
    arr.append(word)
    l=str(len(arr[-1])+1)
    word="|"+l+"|"+word
    arr[-1]=word

for frame in arr:
    print(frame,end='')