//
// Created by Administrator on 2021/4/14.
//

#include <stdio.h>
#include <winsock.h>

int main() {

    char Sendbuf[100];
    char Receivebuf[100];
    int SendLen;
    int ReceiveLen;

    SOCKET socket_send;
    SOCKADDR_IN Server_add;

    WORD wVersionRequested;
    WSADATA wsaData;
    int error;

    wVersionRequested = MAKEWORD(2, 2);
    error = WSAStartup(wVersionRequested, &wsaData);
    if (error != 0) {
        printf("loading socket fail!\n");
        return 0;
    }

    if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2) {
        WSACleanup();
        return 0;
    }

    Server_add.sin_family = AF_INET;
    Server_add.sin_addr.S_un.S_addr = inet_addr("your ip");
    Server_add.sin_port = htons(5000);

    socket_send = socket(AF_INET, SOCK_STREAM, 0);
    if (connect(socket_send, (SOCKADDR *) &Server_add, sizeof(SOCKADDR)) == SOCKET_ERROR) {
        printf("con fail\n");
    }

    while (1) {
        printf("please enter message:");
        scanf("%s", Sendbuf);
        SendLen = send(socket_send, Sendbuf, 100, 0);
        if (SendLen < 0) {
            printf("send fail\n");
        }

        ReceiveLen = recv(socket_send, Receivebuf, 100, 0);
        if (ReceiveLen < 0) {
            printf("accept fail\n");
            printf("program exit\n");
            break;
        } else {
            printf("Server say : %s\n", Receivebuf);
        }
    }

    closesocket(socket_send);
    WSACleanup();
    return 0;


}
