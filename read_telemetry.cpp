#include <iostream>
#include <winsock2.h>
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

int main(){
    WSADATA wsaData;

    int wsaResult = WSAStartup(MAKEWORD(2,2), &wsaData);
    if (wsaResult !=0){
        std::cerr << "wsastartup failed, error code: " << wsaResult << "\n";
        return 1;
    }
}