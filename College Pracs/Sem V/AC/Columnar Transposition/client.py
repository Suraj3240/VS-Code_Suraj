import socket
import json
import math

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('localhost', 123)
client_socket.connect(server_address)

plain_text = input("Enter plain text: ")
cols = int(input("Enter no of cols: "))
rows = int(math.ceil(len(plain_text)/cols))
matrix = [['' for _ in range(cols)] for _ in range(rows)]

idx = 0
for i in range(rows):
    for j in range(cols):
        if idx < len(plain_text):
            matrix[i][j] = plain_text[idx]
            idx += 1
cipher = ""
for i in range(cols):
    for j in range(rows):
        cipher += matrix[j][i]

print("Encrypted message: ", cipher)

json_obj = {
    'cipher': cipher,
    'cols': cols
}
obj = json.dumps(json_obj)
client_socket.send(obj.encode())

client_socket.close()
