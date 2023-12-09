def left_shift(data):
    result = ""
    result += data[1:]+data[:1]
    return result


data = input("Enter 12 bit data: ")
parity_drop_data = ""
idx = 0
for i in data:
    if idx != 5 and idx != 11:
        parity_drop_data += i
    idx += 1
print("Input data: ", data)
print("After parity drop", parity_drop_data)
left_half = parity_drop_data[:5]
right_half = parity_drop_data[5:]
print("Left half", left_half)
print("Right half", right_half)
ls_left = left_shift(left_half)
ls_right = left_shift(right_half)
print("Left after LS", ls_left)
print("Right after LS", ls_right)
combine_halves = ls_left+ls_right
print("Combine halves", combine_halves)

permutation_8 = [4, 9, 7, 1, 0, 3, 5, 2]
result = [combine_halves[i] for i in permutation_8]
key = ""
for i in result:
    key += i
print("Round 1 key: ", key)
