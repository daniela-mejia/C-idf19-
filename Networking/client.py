from socket import *
s = socket(AF_INET, SOCK_STEAM)
s.bind(("",15000))
s.listen(5)
c,a = s.accept()
