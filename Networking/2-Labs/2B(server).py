from socket import *
import json

Host = '192.168.31.1'

with socket(AF_INET, SOCK_DGRAM) as s:
    s.bind((Host, 10000))
    receive = s.recv(7500)
    print(receive)

    