import socket
import json
import math

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('localhost', 123)
server_socket.bind(server_address)
server_socket.listen(1)
print("Server is listening.")
client_socket, client_address = server_socket.accept()
print("Connection established.")

obj = client_socket.recv(1024).decode()
data = json.loads(obj)
cipher = data['cipher']
cols = data['cols']
print("Received cipher: ", cipher)
rows = int(math.ceil(len(cipher)/cols))
matrix = [['' for _ in range(cols)] for _ in range(rows)]
idx = 0
for i in range(cols):
    for j in range(rows):
        if idx < len(cipher):
            matrix[j][i] = cipher[idx]
            idx += 1
plain_text = ""
for i in range(rows):
    for j in range(cols):
        plain_text += matrix[i][j]
print("After decryption: ", plain_text)


server_socket.close()
client_socket.close()
