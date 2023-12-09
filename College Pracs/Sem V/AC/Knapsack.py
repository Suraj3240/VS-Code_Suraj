def gcd(a, b):
    while (b):
        a, b = b, a % b
    return a


def inv(n):
    i = 2
    while i > 1:
        if (n*i) % m == 1:
            return i
        i += 1


def encryption(msg, pub_key):
    cipher1 = 0
    for i in range(0, 4):
        cipher1 += int((ord(msg[i])-ord('0'))*pub_key[i])
    cipher2 = 0
    for i in range(4, 8):
        cipher2 += int((ord(msg[i])-ord('0'))*pub_key[i-4])
    return cipher1, cipher2


def decryption(cipher1, cipher2, pri_key):
    n_inv = inv(n)
    target1 = (cipher1*n_inv) % m
    target2 = (cipher2*n_inv) % m
    # print(target1)
    # print(target2)

    text1 = ""
    for i in range(3, -1, -1):
        if target1 != 0 and target1-pri_key[i] >= 0:
            target1 -= pri_key[i]
            text1 = '1'+text1
        else:
            text1 = '0'+text1

    text2 = ""
    for i in range(3, -1, -1):
        if target2 != 0 and target2-pri_key[i] >= 0:
            target2 -= pri_key[i]
            text2 = '1'+text2
        else:
            text2 = '0'+text2

    return text1+text2


msg = input("Enter message: ")
pri_key = []
print("Enter private key in super inc seq: ")
m = 0
for i in range(0, 4):
    t = int(input())
    m += t
    pri_key.append(t)
m += 5
n = 2
while gcd(n, m) != 1:
    n += 1
print("m = ", m)
print("n = ", n)
pub_key = [(i*n) % m for i in pri_key]
print("Private key: ", pri_key)
print("Public key: ", pub_key)
c1, c2 = encryption(msg, pub_key)
print("c1 = ", c1)
print("c2 = ", c2)
decrypted = decryption(c1, c2, pri_key)
print(decrypted)
