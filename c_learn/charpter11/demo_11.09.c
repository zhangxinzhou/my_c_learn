//
// Created by Administrator on 2021/3/26.
//

#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

struct student {
    char name[30];
    int num;
    char sex;
    struct date birthday;
} student = {"su yu qun", 12061212, 'W', {1986, 12, 6}};

int main() {

    printf("-----Information-----\n");
    printf("name: %s\n", student.name);
    printf("num: %d\n", student.num);
    printf("sex: %c\n", student.sex);
    printf("birthday: %d,%d,%d\n", student.birthday.year, student.birthday.month, student.birthday.day);

    return 0;
}
