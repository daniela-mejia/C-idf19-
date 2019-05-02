import socket

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
ip = socket.gethostbyname(socket.gethostname())
port = 5000
address = (ip, port)
server.bind(address)
server.listen(1)
print"start listening on", ip,":", port
client.addr = server.accept()
print "got a connection"

while True:
        data = client.recv(1024)
        print "received",data, "from client"
        print "processing data"
        if (data=="Hello Server"):
            client.send("Hello client")
            print (" Processing done")
        elif(data ==" disconnect")
            client.send("Good bye")
            client.close()
            break
        else:
            client.data("Error data")
            print " process done "
