ip=input("Enter your IP address: ")
print("IP addres: " + ip)
x=int(ip[0:3])
ip_subnet="Reserved class"
if(x<128):
    ip_class="A"
    ip_subnet="255.0.0.0"
elif(x<192):
    ip_class="B"
    ip_subnet="255.255.0.0"
elif(x<224):
    ip_class="C"
    ip_subnet="255.255.255.0"
elif(x<240):
    ip_class="D"
else:
    ip_class="E"

print("Class: "+ip_class)
print("Subnet Mask: " + ip_subnet)
value1=ip.split('.')
value2=ip_subnet.split('.')
x = str(int(value1[0]) & int(value2[0])) + '.' + str(int(value1[1]) & int(value2[1])) + '.' + str(int(value1[2]) & int(value2[2])) + '.' + str(int(value1[3]) & int(value2[3]))
print("Network Identifier: "+x)