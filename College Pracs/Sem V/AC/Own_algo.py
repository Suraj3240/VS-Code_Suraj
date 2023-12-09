def fixed_permutation(plain_text):
    permutation = [2, 1, 0, 3, 4]
    permuted_text = [plain_text[i]for i in permutation]
    print(permuted_text)
    return permuted_text, permutation


def encrypt(plain_text):
    permuted_text, permutation = fixed_permutation(plain_text)
    shifts = 5
    cipher = ""
    for i in permuted_text:
        char = chr((ord(i)+shifts-ord('A')) % 26+ord('A'))
        cipher += char
    return cipher, permutation, shifts


def decryption(cipher, permutation, shifts):
    text1 = ""
    for i in cipher:
        char = chr((ord(i)-shifts-ord('A')) % 26+ord('A'))
        text1 += char
    plain_text = ['' for _ in range(len(permutation))]
    idx = 0
    for i in permutation:
        plain_text[i] = text1[idx]
        idx += 1
    text2 = ""
    for i in plain_text:
        text2 += i
    return text2


text = input("Enter plain text: ")
cipher, permutation, shifts = encrypt(text)
decrypted = decryption(cipher, permutation, shifts)
print("Encrypted text: ", cipher)
print("Decrypted text: ", decrypted)
