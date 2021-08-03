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
