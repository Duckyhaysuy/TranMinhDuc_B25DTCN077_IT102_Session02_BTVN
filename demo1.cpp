#include <stdio.h>

int main() {
    short a = 10;                     // short: so nguyen nho, 2 byte, pham vi tu -32,768 den 32,767
    int b = 100;                      // int: so nguyen thong thuong, 4 byte, pham vi tu -2 ty den 2 ty
    long c = 1000;                   // long: so nguyen lon hon int, thuong 4 hoac 8 byte tuy he thong
    long long d = 10000;            // long long: so nguyen rat lon, 8 byte, dung cho gia tri lon hon long
    unsigned short e = 20;            // unsigned short: so nguyen duong nho, 2 byte, pham vi tu 0 den 65,535
    unsigned int f = 200;             // unsigned int: so nguyen duong thong thuong, 4 byte, pham vi tu 0 den 4 ty
    unsigned long g = 2000;         // unsigned long: so nguyen duong lon hon int, thuong 4 hoac 8 byte
    unsigned long long h = 20000;  // unsigned long long: so nguyen duong rat lon, 8 byte
    char i = 'A';                     // char: ky tu don, 1 byte, luu chu cai hoac ky tu ASCII

    return 0;
}

