# How to create a server
# First of all import the socket library 
import socket

s = socket.socket()
print"Socket Successfully created"

# reserve a port on your computer in our it can be anything 
port = 5000

# Next bind to the port we have not typed any ip in the ip field 
# instead we have input an empty string this makes the server listen to requests  
s.bind(('', port))
print "socket bind to %s" %(port)

# put the socket into listening mode 
s.listen(5)
print "socket listening"

#A while loop (while) until interrupt or an any errors occurs 
while True:

    #Establish connection with client
    c,addr = s.accept()
    print'Connected from ', addr

    #send a thank you message to client
    c.send('Thanks for Connecting')

    #close connection to client
    c.close()
