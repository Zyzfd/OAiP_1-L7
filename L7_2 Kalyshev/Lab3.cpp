#include "Lab3.h"

void StClausAuto(HDC hdc, int x, int y) {
    //верхний треугольник
    MoveToEx(hdc, 20 + x, 0 + y, NULL);
    LineTo(hdc, 30 + x, 20 + y);
    LineTo(hdc, 10 + x, 20 + y);
    LineTo(hdc, 20 + x, 0 + y);

    //средний треугольник
    MoveToEx(hdc, 20 + x, 10 + y, NULL);
    LineTo(hdc, 30 + x, 40 + y);
    LineTo(hdc, 10 + x, 40 + y);
    LineTo(hdc, 20 + x, 10 + y);

    //нижний треугольник
    MoveToEx(hdc, 20 + x, 30 + y, NULL);
    LineTo(hdc, 40 + x, 80 + y);
    LineTo(hdc, 0 + x, 80 + y);
    LineTo(hdc, 20 + x, 30 + y);
}

void StClausTree(HDC hdc, int x, int y) {
    Ellipse(hdc, 20 + x, 0 + y, 40 + x, 20 + y);
    Ellipse(hdc, 10 + x, 20 + y, 50 + x, 60 + y);
    Ellipse(hdc, 0 + x, 60 + y, 60 + x, 120 + y);
    MoveToEx(hdc, 0 + x, 40 + y, NULL);
    LineTo(hdc, 15 + x, 30 + y);
    MoveToEx(hdc, 60 + x, 40 + y, NULL);
    LineTo(hdc, 45 + x, 30 + y);
    MoveToEx(hdc, 40 + x, 120 + y, NULL);
    LineTo(hdc, 70 + x, 0 + y);
    MoveToEx(hdc, 66 + x, 20 + y, NULL);
    LineTo(hdc, 64 + x, 0 + y);
    MoveToEx(hdc, 66 + x, 20 + y, NULL);
    LineTo(hdc, 75 + x, 0 + y);
}

void Logo(HDC hdc, int x, int y) {
    HPEN hPen_line;
    HPEN hPen_white;
    HBRUSH hBrush_black_car;
    HBRUSH hBrush_white;
    hPen_white = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
    hPen_line = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
    hBrush_black_car = CreateSolidBrush(RGB(0, 0, 0));
    hBrush_white = CreateSolidBrush(RGB(255, 255, 255));

    SelectObject(hdc, hBrush_black_car);
    SelectObject(hdc, hPen_line);
    Ellipse(hdc, x - 100, y - 50, x + 100, y + 50);
    SelectObject(hdc, hBrush_white);
    SelectObject(hdc, hPen_white);
    Ellipse(hdc, x - 75, y - 35, x + 75, y + 25);
    POINT infi1[4];
    infi1[0].x = x;
    infi1[0].y = y - 25;
    infi1[1].x = x + 55;
    infi1[1].y = y + 35;
    infi1[2].x = x - 55;
    infi1[2].y = y + 35;
    SelectObject(hdc, hPen_line);
    SelectObject(hdc, hBrush_black_car);
    Polygon(hdc, infi1, 3);
    POINT infi[4];
    infi[0].x = x;
    infi[0].y = y - 15;
    infi[1].x = x + 35;
    infi[1].y = y + 65;
    infi[2].x = x - 35;
    infi[2].y = y + 65;
    SelectObject(hdc, hPen_white);
    SelectObject(hdc, hBrush_white);
    Polygon(hdc, infi, 3);

    DeleteObject(hPen_line);
    DeleteObject(hPen_white);
    DeleteObject(hBrush_black_car);
    DeleteObject(hBrush_white);
}

void L3_1(HDC hdc) {
    StClausAuto(hdc, 0, 0);
    StClausAuto(hdc, 300, 0);
    StClausAuto(hdc, 150, 150);
    StClausAuto(hdc, 0, 300);
    StClausAuto(hdc, 300, 300);
}

void L3_2(HDC hdc) {
    int x = 300;
    do {
        StClausAuto(hdc, x, 0);
        x += 50;
    } while (x < 701);
}

void L3_3(HDC hdc) {
     int y = 300;
    do {
        StClausAuto(hdc, 0, y);
        y += 90;
    } while (y < 700);
}

void L3_4(HDC hdc) {
    int x = 300;
    int y = 300;
    do {
        StClausAuto(hdc, x, y);
        x += 50;
        y += 90;
    } while (y < 700);
}

void L3_5(HDC hdc) {
    int x = 800;
    do {
        int y = 0;
        do {
            StClausAuto(hdc, x, y);
            y += 90;
        } while (y < 300);
        x += 50;
    } while (x < 1200);
}

void L3_6(HDC hdc) {
    Ellipse(hdc, 20, 0, 40, 20);
    Ellipse(hdc, 10, 20, 50, 60);
    Ellipse(hdc, 0, 60, 60, 120);
    MoveToEx(hdc, 0, 40, NULL);
    LineTo(hdc, 15, 30);
    MoveToEx(hdc, 60, 40, NULL);
    LineTo(hdc, 45, 30);
    MoveToEx(hdc, 40, 120, NULL);
    LineTo(hdc, 70, 0);
    MoveToEx(hdc, 66, 20, NULL);
    LineTo(hdc, 64, 0);
    MoveToEx(hdc, 66, 20, NULL);
    LineTo(hdc, 75, 0);
}

void L3_7(HDC hdc) {
    StClausTree(hdc, 600, 300);
}

void L3_8(HDC hdc) {
    StClausTree(hdc, 0, 0);
    StClausTree(hdc, 300, 0);
    StClausTree(hdc, 150, 150);
    StClausTree(hdc, 0, 300);
    StClausTree(hdc, 300, 300);

    int x = 300;
    do {
        StClausTree(hdc, x, 0);
        x += 80;
    } while (x < 701);

    int y = 300;
    do {
        StClausTree(hdc, 0, y);
        y += 130;
    } while (y < 700);

    x = 300;
    y = 300;
    do {
        StClausTree(hdc, x, y);
        x += 80;
        y += 130;
    } while (y < 700);

    x = 800;
    do {
        y = 0;
        do {
            StClausTree(hdc, x, y);
            y += 130;
        } while (y < 300);
        x += 80;
    } while (x < 1200);
}

void L3_9(HDC hdc) {
    Logo(hdc, 100, 50);
    Logo(hdc, 400, 50);
    Logo(hdc, 250, 200);
    Logo(hdc, 100, 350);
    Logo(hdc, 400, 350);
}

void L3_10(HDC hdc) {
    int x = 650;
    do {
        Logo(hdc, x, 50);
        x += 210;
    } while (x < 1400);
}

void L3_11(HDC hdc) {
    int y = 470;
    do {
        Logo(hdc, 100, y);
        y += 110;
    } while (y < 700);
}

void L3_12(HDC hdc) {
    int x = 650;
    int y = 470;
    do {
        Logo(hdc, x, y);
        x += 150;
        y += 110;
    } while (y < 700);
}

void L3_13(HDC hdc) {
    int x = 1500;
    do {
        int y = 50;
        do {
            Logo(hdc, x, y);
            y += 110;
        } while (y < 700);
        x += 210;
    } while (x < 2000);
}