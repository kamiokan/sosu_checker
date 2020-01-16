#include <stdio.h>
#include <stdlib.h>

int sosu_checker(int num);

int main(void) {
    int int_arr[8] = {31, 331, 3331, 33331, 333331, 3333331, 33333331, 333333331};

    for (int i = 0; i < 8; i++) {
        int num = int_arr[i];
        int flag = sosu_checker(num);

        if (flag == 0) {
            printf("%d は素数です。\n", num);
        } else {
            printf("%d は素数ではありません。\n", num);
        }
    }

    exit(0);
}

int sosu_checker(int num) {
    int i;

    /* 判定フラグ */
    int flag = 0;

    /* 素数かどうかを判定 */
    for (i = 2; i < num; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    return flag;
}
