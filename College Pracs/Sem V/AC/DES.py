def des_function(right_half, key):
    return [l ^ r for l, r in zip(right_half, key)]


def xor(left, right):
    return [l ^ r for l, r in zip(left, right)]


def swapper(left, right):
    return right + left


data = list(map(int, input("Enter 8 bit data: ")))
key = list(map(int, input("Enter 4 bit key: ")))
print("Data: ", data)
print("Key: ", key)
left_half = data[:4]
right_half = data[4:]
print("Left Half: ", left_half)
print("Right Half:", right_half)
funct = des_function(right_half, key)
print("After XOR of RHS and Key: ", funct)
newLeft = xor(funct, left_half)
print("New Left: ", newLeft)

result = swapper(newLeft, right_half)
print(result)
