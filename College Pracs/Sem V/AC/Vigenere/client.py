import socket
import json

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('localhost', 123)
client_socket.connect(server_address)

text = input("Enter plain text: ")
key = input("Enter key of same length: ")

cipher = ""
idx = 0
for i in text:
    shift = int(key[idx])-int('0')
    char = chr((ord(i)+shift-ord('A')) % 26+ord('A'))
    cipher += char
    idx += 1
print("Cipher: ", cipher)
json_obj = {
    'cipher': cipher,
    'key': key
}

obj = json.dumps(json_obj)
client_socket.send(obj.encode())

client_socket.close()
