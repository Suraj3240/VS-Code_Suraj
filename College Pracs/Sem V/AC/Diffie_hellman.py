def isPriRoot(i, n):
    temp = set()
    for j in range(1, n):
        if (i**j) % n in temp:
            return False
        temp.add((i**j) % n)
    return True


def primitive_root(n):
    for i in range(2, n):
        if isPriRoot(i, n):
            return i


p = int(input("Enter a prime number p: "))
alpha = primitive_root(p)
print("Primitive root (alpha): ", alpha)
pri_key_A = int(input("Enter private key of A: "))
pri_key_B = int(input("Enter private key of B: "))

pub_key_A = (alpha**pri_key_A) % p
pub_key_B = (alpha**pri_key_B) % p

print("Public key of A: ", pub_key_A)
print("Public key of B: ", pub_key_B)

key_A = (pub_key_B**pri_key_A) % p
key_B = (pub_key_A**pri_key_B) % p

print("Key A: ", key_A)
print("Key B: ", key_B)

if key_A == key_B:
    print("Key exchange successful.")
else:
    print("Unsuccessful.")
