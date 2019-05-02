#Daniela Mejia
#Bit Order tcp server/ client file transfer

import socket

Int32Bit = 589623
Int16Bit = 566

#Convert integers to and from host to network byte order

Int32InHostFormat = socket.ntohl(Int32Bit)


#Convert a 16 bit integer from network byte order to host byte order

Int16InHostFormat = socket.ntohs(Int16Bit)

print ("32 bit Integer", Int32Bit, " converted from Network to Host Byte Order: ", Int32InHostFormat)
print ("16 bit Integer", Int16Bit, " converted from Network to Host Byte Order: ", Int16InHostFormat )

#Convert integers to and from host to network byte order

Int32InNetworkFormat = socket.htonl(Int32InHostFormat)

#Convert a 16 bit integer from network byte order to host byte order

Int16InNetworkFormat = socket.htons(Int16InHostFormat)

print ("32 bit Integer", Int32InHostFormat, " converted from  Host to Network Byte Order: ", Int32InNetworkFormat)
print ("16 bit Integer", Int16InHostFormat, " converted from Host to Network Byte Order: ", Int16InNetworkFormat)