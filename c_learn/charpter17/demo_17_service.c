//
// Created by Administrator on 2021/4/14.
//

#include <stdio.h>
#include <winsock.h>

int main() {
    char SendBuf[100];
    char Receivebuf[100];
    int SendLen;
    int ReveiveLen;
    int Length;

    SOCKET socket_server;
    SOCKET socket_receive;

    SOCKADDR_IN Server_add;
    SOCKADDR_IN Client_add;

    WORD wVersionRequested;
    WSADATA wasData;
    int error;

    wVersionRequested = MAKEWORD(2, 2);
    error = WSAStartup(wVersionRequested, &wasData);
    if (error != 0) {
        printf("loading socket fail!\n");
        exit(0);
    }

    Server_add.sin_family = AF_INET;
    Server_add.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
    Server_add.sin_port = htons(5000);

    socket_server = socket(AF_INET, SOCK_STREAM, 0);

    if (bind(socket_server, (SOCKADDR *) &Server_add, sizeof(SOCKADDR)) == SOCKET_ERROR) {
        printf("bind fail\n");
    }

    if (listen(socket_server, 5) < 0) {
        printf("listen fail\n");
    }

    Length = sizeof(SOCKADDR);
    socket_receive = accept(socket_server, (SOCKADDR *) &Client_add, &Length);
    if (socket_receive == SOCKET_ERROR) {
        printf("accept conn fail");
    }

    while (1) {
        ReveiveLen = recv(socket_receive, Receivebuf, 100, 0);
        if (ReveiveLen < 0) {
            printf("accept fail\n");
            printf("program exit\n");
            break;
        } else {
            printf("client say : %s\n", Receivebuf);
        }

        printf("please enter message:");
        scanf("%s", SendBuf);
        SendLen = send(socket_receive, SendBuf, 100, 0);
        if (SendLen < 0) {
            printf("send fail\n");
        }
    }

    closesocket(socket_receive);
    closesocket(socket_server);
    WSACleanup();
    return 0;
}
