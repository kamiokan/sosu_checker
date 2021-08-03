#include <stdio.h>
#include <stdlib.h>
#include "sosu_check.h"

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
