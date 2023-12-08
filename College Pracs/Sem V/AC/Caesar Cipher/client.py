import socket
import json

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('localhost', 123)
client_socket.connect(server_address)


def caesar_encrypt(plain_text, shifts):
    result = ""
    for i in plain_text:
        char = chr((ord(i)+shifts-ord('A')) % 26+ord('A'))
        result += char
    return result


plain_text = input("Enter plain text: ")
shifts = int(input("Enter shfits: "))
encrypted_text = caesar_encrypt(plain_text, shifts)
print("Encrypted message: ", encrypted_text)
json_obj = {
    'cipher': encrypted_text,
    'shifts': shifts
}
obj = json.dumps(json_obj)
client_socket.send(obj.encode())

client_socket.close()
