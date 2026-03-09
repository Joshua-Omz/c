#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>  // Fixed typo: was "winsoc2.h"
#include <ws2tcpip.h>

int main(){
    WSADATA wsa;
    WSAStartup(MAKEWORD(2,2), &wsa);
  int socketFD= socket(AF_INET, SOCK_STREAM, 0);

  char* ip ="127.0.0.1";

  struct sockaddr_in address;
  address.sin_family = AF_INET;
  address.sin_port = htons(80);
    inet_pton(AF_INET, &address,)


}   