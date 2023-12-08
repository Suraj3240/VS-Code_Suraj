import random


def mod_exp(base, exponent, modulus):
    result = 1
    base = base % modulus
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        exponent = exponent // 2
        base = (base ** 2) % modulus
    return result


def diffie_hellman(p, g):
    a = random.randint(2, p - 1)
    b = random.randint(2, p - 1)

    A = mod_exp(g, a, p)
    B = mod_exp(g, b, p)

    shared_secret_Alice = mod_exp(B, a, p)
    shared_secret_Bob = mod_exp(A, b, p)

    return shared_secret_Alice, shared_secret_Bob


prime_modulus = 7
generator = 3

shared_secret_Alice, shared_secret_Bob = diffie_hellman(
    prime_modulus, generator)

print("Shared secret computed by Alice:", shared_secret_Alice)
print("Shared secret computed by Bob:", shared_secret_Bob)
