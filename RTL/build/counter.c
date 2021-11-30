int initData = 0xFF;
int initData2 = 0xABCDEF11;
int main(void) {
    initData = initData + 1;
    for(;;){
        int val;
        char *a = (char*) 0x100;
        *a = 0;
        *a = 1;
        *a = 2;
        *a = 3;
        *a = 4;
        *a = 5;
        *a = 6;
        *a = 7;
        *a = 8;
    }
    return 0;
}
