//
// Created by Administrator on 2021/3/1.
//

//
// Created by Administrator on 2021/3/1.
//

#include <stdio.h>

void CelerityRun(int left, int right, int arr[]);

int main() {


    int a[8];
    printf("输入票数:\n");
    for (int i = 0; i < 8; ++i) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    // 从小到大排序
    CelerityRun(0, 7, a);
    printf("8名票数从少到多排序如下:\n");
    for (int i = 0; i < 8; ++i) {
        printf("%d\t", a[i]);
    }
    return 0;
}

void CelerityRun(int left, int right, int array[]) {
    int i, j;
    int middle, iTemp;
    i = left;
    j = right;
    middle = array[(left + right) / 2];
    do {
        while (array[i] < middle && i < right) {
            i++;
        }
        while (array[j] > middle && j > left) {
            j--;
        }
        if (i <= j) {
            iTemp = array[i];
            array[i] = array[j];
            array[j] = iTemp;
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j) {
        CelerityRun(left, j, array);
    }
    if (right > i) {
        CelerityRun(i, right, array);
    }
}