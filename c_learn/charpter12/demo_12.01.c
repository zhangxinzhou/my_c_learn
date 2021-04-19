//
// Created by Administrator on 2021/3/30.
//

#include <stdio.h>
#include <string.h>

struct peaches {
    char name[64];
};

struct coconut {
    char name[64];
};

struct hawthorn {
    char name[64];
};

union tin {
    struct peaches p;
    struct coconut c;
    struct hawthorn h;
};

int main() {

    union tin t;
    strcpy(t.p.name, "tao");
    strcpy(t.c.name, "yezi");
    strcpy(t.h.name, "shanzha");

    printf("this tin is %s inside\n", t.p.name);

    return 0;
}