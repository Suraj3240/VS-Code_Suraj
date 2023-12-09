import math

text = input("Enter plain text: ")
k1 = int(input("Enter key k1: "))
k2 = int(input("Enter key k2: "))


def encyption(text, k1, k2):
    cipher1 = ""
    for i in text:
        char = chr((ord(i)*k1-ord('A')) % 26+ord('A'))
        cipher1 += char

    cipher = ""
    for i in cipher1:
        char = chr((ord(i)+k2-ord('A')) % 26+ord('A'))
        cipher += char

    return cipher


def find_inv(n):
    i = 2
    while i > 1:
        if (n*i) % 26 == 1:
            break
        i += 1
    return i


def decryption(cipher, k1, k2):
    text1 = ""
    for i in cipher:
        char = chr((ord(i)-k2-ord('A')) % 26+ord('A'))
        text1 += char
    k1_inv = find_inv(k1)

    plain = ""
    for i in text1:
        char = chr((ord(i)*k1_inv-ord('A')) % 26+ord('A'))
        plain += char

    return plain


cipher = encyption(text, k1, k2)
print("Cipher text: ", cipher)
plain_text = decryption(cipher, k1, k2)
print("After decryption: ", plain_text)
