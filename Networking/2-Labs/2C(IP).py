import socket

host_name = socket.gethostname()
print ("Host Name:%s" %host_name)
print ("IP Address: %s" %socket.gethostbyname(host_name))
