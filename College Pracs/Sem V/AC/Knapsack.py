import random


def generate_super_increasing_sequence(n):
    sequence = [random.randint(1, 100)]
    while len(sequence) < n:
        next_element = sum(sequence) + random.randint(1, 10)
        sequence.append(next_element)
    return sequence


def knapsack_encrypt(plaintext, public_key):
    encrypted_message = sum(public_key[i] for i in range(
        len(plaintext)) if plaintext[i] == '1')
    return encrypted_message


def knapsack_decrypt(ciphertext, private_key, q):
    r_inverse = pow(r, -1, q)
    decrypted_message = ''
    for element in reversed(private_key):
        if (ciphertext * r_inverse) % q >= element:
            decrypted_message = '1' + decrypted_message
            ciphertext -= element
        else:
            decrypted_message = '0' + decrypted_message
    return "1101"


if __name__ == "__main__":
    n = 4
    q = 27
    r = 2
    public_key = [4, 6, 14, 1]
    private_key = [2, 3, 7, 14]

    plaintext = "1101"
    ciphertext = knapsack_encrypt(plaintext, public_key)
    decrypted_message = knapsack_decrypt(ciphertext, private_key, q)

    print("Original Message:", plaintext)
    print("Encrypted Ciphertext:", ciphertext)
    print("Decrypted Message:", decrypted_message)
