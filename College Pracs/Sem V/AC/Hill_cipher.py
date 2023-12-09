def getKeyMat():
    key = [[0]*2 for _ in range(2)]
    for i in range(2):
        for j in range(2):
            t = int(input())
            key[i][j] = t
    return key


def multiplication(key_mat, text_mat, m):
    res = [[0]*m for _ in range(2)]
    for i in range(2):
        for j in range(m):
            for k in range(2):
                res[i][j] += key_mat[i][k]*text_mat[k][j]

    for i in range(2):
        for j in range(m):
            res[i][j] %= 26
    return res


def encryption(key_mat, text):
    text_mat = [[0]*m for _ in range(2)]
    idx = 0
    for i in range(m):
        for j in range(2):
            temp = int(ord(text[idx])-ord('A'))
            text_mat[j][i] = temp
            idx += 1

    res = multiplication(key_mat, text_mat, m)
    cipher = ""
    for i in range(m):
        for j in range(2):
            char = chr(res[j][i]+ord('A'))
            cipher += char
    return cipher, res


def inv(n):
    i = 2
    while i > 1:
        if (n*i) % 26 == 1:
            return i
        i += 1


def inverse_mat(mat):
    det = (mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0])
    modulo_inv = inv(det)
    res = [
        [int(mat[1][1]), int(-mat[0][1])],
        [int(-mat[1][0]), int(mat[0][0])]
    ]

    for i in range(2):
        for j in range(2):
            if res[i][j] < 0:
                res[i][j] += 26
            res[i][j] *= modulo_inv
            res[i][j] %= 26
    return res


def decryption(key_mat, cipher_mat):
    key_inv = inverse_mat(key_mat)
    print("Key inverse: ", key_inv)
    text1_mat = multiplication(key_inv, cipher_mat, m)
    plain_text = ""
    for i in range(m):
        for j in range(2):
            char = chr(text1_mat[j][i]+ord('A'))
            plain_text += char
    return plain_text


text = input("Enter plain text: ")
n = 2
m = int(len(text)/2)
key_mat = getKeyMat()
print()
print("Key: ", key_mat)
cipher, cipher_mat = encryption(key_mat, text)
print("Cipher: ", cipher)
print("Cipher mat: ", cipher_mat)
decrypted_text = decryption(key_mat, cipher_mat)
print("Decrypted text: ", decrypted_text)
