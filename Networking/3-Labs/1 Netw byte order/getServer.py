#Daniela Mejia
# This program import socket finds the service name, the port and the protocol

import socket 

def find_servName ():
    protocolname = 'tcp'
    for port in [80, 25]:
        a = socket.getservbyport(port, protocolname)
        print("Port : %s the service name is : %s" %(port, a))
    b = socket.getservbyport(53, 'udp')
    print("Port: %s the service name is: %s" %(53, b))

if __name__ == '__main__':
    find_servName()