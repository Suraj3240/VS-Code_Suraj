import random
import math


def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def inv(e, totient):
    i = 2
    while i > 1:
        if (e*i) % totient == 1:
            break
        i += 1
    return i


def encryption(text, pub_key):
    cipher = int((text**pub_key[0]) % pub_key[1])
    return cipher


def decryption(cipher, pri_key):
    pt = int((cipher**pri_key[0]) % pri_key[1])
    return pt


text = int(input("Enter plain text: "))
p = int(input("Enter prime no p: "))
q = int(input("Enter prime no q: "))
n = (p*q)
totient = (p-1)*(q-1)
e = random.randrange(2, totient)
while gcd(e, totient) != 1:
    e = random.randrange(2, totient)
d = inv(e, totient)

pub_key = [e, n]
pri_key = [d, n]
print("Public key: ", pub_key)
print("Private key: ", pri_key)
cipher = encryption(text, pub_key)
pt = decryption(cipher, pri_key)
print("Cipher: ", cipher)
print("After decryption: ", pt)
