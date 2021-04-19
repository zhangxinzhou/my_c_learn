//
// Created by Administrator on 2021/3/8.
//
#include <stdio.h>


void CEO();

void Manager();

void AssistantManager();

void Clerk();

int main() {
    CEO();
    return 0;
}

void CEO() {
    printf("CEO -> Manager\n");
    Manager();
}

void Manager() {
    printf("Manager -> AssistantManager\n");
    AssistantManager();
}

void AssistantManager() {
    printf("AssistantManager -> Clerk\n");
    Clerk();
}

void Clerk() {
    printf("Clerk finish task\n");
}