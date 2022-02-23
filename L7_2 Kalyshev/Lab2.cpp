#include "Lab2.h"

void L2_1(HDC hdc) {
    int x1_1 = 800, y1_1 = 100;
    int x2_1 = 950, y2_1 = 0;
    int i_1 = 0;
    do {
        MoveToEx(hdc, x1_1, y1_1, NULL);
        LineTo(hdc, x2_1, y2_1);
        x1_1 = x1_1 + 6;
        y2_1 = y2_1 + 6;
        i_1++;
    } while (i_1 < 15);
}

void L2_2(HDC hdc) {
    int x1_2 = 1000, y1_2 = 100;
    int x2_2 = 1200, y2_2 = 0;
    int i_2 = 0;
    do {
        MoveToEx(hdc, x1_2, y1_2, NULL);
        LineTo(hdc, x2_2, y2_2);
        x1_2 = x1_2 + 7;
        x2_2 = x2_2 - 7;
        i_2++;
    } while (i_2 < 15);
}

void L2_3(HDC hdc) {
    int x1_3 = 1300, y1_3 = 100;
    int x2_3 = 1300, y2_3 = 0;
    int i_3 = 0;
    do {
        MoveToEx(hdc, x1_3, y1_3, NULL);
        LineTo(hdc, x2_3, y2_3);
        y1_3 = y1_3 - 5;
        x2_3 = x2_3 + 5;
        i_3++;
    } while (i_3 < 15);
}

void L2_4(HDC hdc) {
    int x1_4 = 800, y1_4 = 400;
    int x2_4 = 800, y2_4 = 300;
    int i_4 = 0;
    do {
        MoveToEx(hdc, x1_4, y1_4, NULL);
        LineTo(hdc, x2_4, y2_4);
        x1_4 = x1_4 + 6;
        x2_4 = x2_4 + 6;
        y1_4 = y1_4 + 2;
        y2_4 = y2_4 - 2;
        i_4++;
    } while (i_4 < 15);
}

void L2_5(HDC hdc) {
    int x1_5 = 1000, y1_5 = 400;
    int x2_5 = 1000, y2_5 = 300;
    int i_5 = 0;
    do {
        MoveToEx(hdc, x1_5, y1_5, NULL);
        LineTo(hdc, x2_5, y2_5);
        x1_5 = x1_5 + 6;
        x2_5 = x2_5 + 6;
        y1_5 = y1_5 - 8;
        y2_5 = y2_5 + 8;
        i_5++;
    } while (i_5 < 15);
}

void L2_6(HDC hdc) {
    int x1_6 = 1300, y1_6 = 300;
    int x2_6 = 1350, y2_6 = 400;
    int i_6 = 0;
    do {
        MoveToEx(hdc, x1_6, y1_6, NULL);
        LineTo(hdc, x2_6, y2_6);
        x1_6 = x1_6 + 4;
        y1_6 = y1_6 + 4;
        y2_6 = y2_6 - 8;
        i_6++;
    } while (i_6 < 19);
}

void L2_7(HDC hdc) {
    int x1_7 = 800, y1_7 = 600;
    int x2_7 = 800, y2_7 = 800;
    int i_7 = 0;
    do {
        MoveToEx(hdc, x1_7, y1_7, NULL);
        LineTo(hdc, x2_7, y2_7);
        x1_7 = x1_7 - 8;
        y1_7 = y1_7 + 8;
        x2_7 = x2_7 + 8;
        y2_7 = y2_7 - 8;
        i_7++;
    } while (i_7 < 15);
}

void L2_8(HDC hdc) {
    int x1_8 = 1000, y1_8 = 600;
    int x2_8 = 1000, y2_8 = 800;
    int i_8 = 0;
    do {
        MoveToEx(hdc, x1_8, y1_8, NULL);
        LineTo(hdc, x2_8, y2_8);
        y1_8 = y1_8 + 14;
        x2_8 = x2_8 + 14;
        i_8++;
    } while (i_8 < 15);
}

void L2_9(HDC hdc) {
    int x1_9 = 1300, y1_9 = 600;
    int x2_9 = 1300, y2_9 = 800;
    int i_9 = 0;
    do {
        MoveToEx(hdc, x1_9, y1_9, NULL);
        LineTo(hdc, x2_9, y2_9);
        y2_9 = y2_9 - 8;
        x1_9 = x1_9 - 8;
        y1_9 = y1_9 + 8;
        i_9++;
    } while (i_9 < 15);
}

void L2_10(HDC hdc) {
    int x1_10 = 1500, y1_10 = 100;
    int x2_10 = 1700, y2_10 = 100;
    int i_10 = 0;
    do {
        MoveToEx(hdc, x1_10, y1_10, NULL);
        LineTo(hdc, x2_10, y2_10);
        y1_10 = y1_10 - 4;
        y2_10 = y2_10 + 4;
        i_10++;
    } while (i_10 < 15);
}