#!/usr/bin/env python3

from socket import *
import json
stuff = {"Si" : 1, "No" : 2 , "Aaha" : 3}

HOST = '192.168.31.1'
with socket(AF_INET, SOCK_DGRAM) as s:
     s.connect((HOST, 10000))
     jsonuno = json.dumps(stuff, indent =4)
     send_this = jsonuno.encode()
     s.sendall(send_this)  