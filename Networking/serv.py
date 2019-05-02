from socket import *
s = socket(AF_INET, SOCK_STREAM)
s.connect(("localhost",15000))

s.send("Hello World)
