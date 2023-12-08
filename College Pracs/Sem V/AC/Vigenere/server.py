import socket
import json

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('localhost', 123)
server_socket.bind(server_address)
server_socket.listen(1)
print("Server is listening.")
client_socket, client_address = server_socket.accept()

obj = client_socket.recv(1024).decode()
data = json.loads(obj)
cipher = data['cipher']
key = data['key']

print("Received cipher: ", cipher)
text = ""
idx = 0
for i in cipher:
    shift = int(key[idx])-int('0')
    char = chr((ord(i)-shift-ord('A')) % 26 + ord('A'))
    text += char
    idx += 1
print("After decryption: ", text)

server_socket.close()
client_socket.close()
