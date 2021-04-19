//
// Created by Administrator on 2021/3/30.
//

#include <stdio.h>
#include <string.h>

struct sea {
    char name[64];
};

union season {
    struct sea p;
};

int main() {
    union season s;
    strcpy(s.p.name, "summer");
    printf("now it's %s\n", s.p.name);
    return 0;
}
