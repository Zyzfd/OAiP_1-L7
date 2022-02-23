#include "Lab4.h"

void Image1(HDC hdc, int cx, int cy, int size) {
    int x1 = cx - size;
    int y1 = cy - size;
    int x2 = cx + size;
    int y2 = cy - size;
    int x3 = cx;
    int y3 = cy + size;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);
}

void RecursiveImage1_1(HDC hdc, int cx, int cy, int size) {
    Image1(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage1_1(hdc, cx - size, cy - size, size / 2);
    RecursiveImage1_1(hdc, cx + size, cy - size, size / 2);
}

void RecursiveImage1_2(HDC hdc, int cx, int cy, int size) {
    Image1(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage1_2(hdc, cx - size, cy - size, size / 2);
    RecursiveImage1_2(hdc, cx, cy + size, size / 2);
}

void RecursiveImage1_3(HDC hdc, int cx, int cy, int size) {
    Image1(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage1_3(hdc, cx - size, cy - size, size / 2);
    RecursiveImage1_3(hdc, cx + size, cy - size, size / 2);
    RecursiveImage1_3(hdc, cx, cy + size, size / 2);
}

void RecursiveImage1_4(HDC hdc, int cx, int cy, int size) {
    Image1(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage1_4(hdc, cx, cy - size, size / 2);
}

void RecursiveImage1_5(HDC hdc, int cx, int cy, int size) {
    Image1(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage1_5(hdc, cx + size, cy, size / 2);
}

void RecursiveImage1_6(HDC hdc, int cx, int cy, int size) {
    Image1(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage1_6(hdc, cx - size, cy, size / 2);
}

void RecursiveImage1_7(HDC hdc, int cx, int cy, int size) {
    Image1(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage1_7(hdc, cx, cy - size, size / 2);
    RecursiveImage1_7(hdc, cx - size, cy, size / 2);
    RecursiveImage1_7(hdc, cx + size, cy, size / 2);
}

void Image2(HDC hdc, int cx, int cy, int size) {
    int x1 = cx - size / 2;
    int y1 = cy - size;
    int x2 = cx + size / 2;
    int y2 = cy - size;
    int x3 = cx - size;
    int y3 = cy + size;
    int x4 = cx + size;
    int y4 = cy + size;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);
}


void RecursiveImage2_1(HDC hdc, int cx, int cy, int size) {
    Image2(hdc, cx, cy, size);
    if (size < 5) {
        return;
    }
    RecursiveImage2_1(hdc, cx - size / 2, cy - size, size / 2);
}

void RecursiveImage2_2(HDC hdc, int cx, int cy, int size) {
    Image2(hdc, cx, cy, size);
    if (size < 5) {
        return;
    }
    RecursiveImage2_2(hdc, cx - size / 2, cy - size, size / 2);
    RecursiveImage2_2(hdc, cx + size / 2, cy - size, size / 2);
}

void RecursiveImage2_3(HDC hdc, int cx, int cy, int size) {
    Image2(hdc, cx, cy, size);
    if (size < 5) {
        return;
    }
    RecursiveImage2_3(hdc, cx - size, cy + size, size / 2);
    RecursiveImage2_3(hdc, cx + size, cy + size, size / 2);
}

void RecursiveImage2_4(HDC hdc, int cx, int cy, int size) {
    Image2(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage2_4(hdc, cx - size / 2, cy - size, size / 2);
    RecursiveImage2_4(hdc, cx + size / 2, cy - size, size / 2);
    RecursiveImage2_4(hdc, cx - size, cy + size, size / 2);
    RecursiveImage2_4(hdc, cx + size, cy + size, size / 2);
}

void RecursiveImage2_5(HDC hdc, int cx, int cy, int size) {
    Image2(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage2_5(hdc, cx - size, cy, size / 2);
}

void RecursiveImage2_6(HDC hdc, int cx, int cy, int size) {
    Image2(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage2_6(hdc, cx + size, cy, size / 2);
}

void RecursiveImage2_7(HDC hdc, int cx, int cy, int size) {
    Image2(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage2_7(hdc, cx + size, cy, size / 2);
    RecursiveImage2_7(hdc, cx - size, cy, size / 2);
}

void Image3(HDC hdc, int cx, int cy, int size) {
    int x1 = cx;
    int y1 = cy - size;
    int x2 = cx + size;
    int y2 = cy;
    int x3 = cx;
    int y3 = cy + size;
    int x4 = cx - size;
    int y4 = cy;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);
}

void RecursiveImage3_1(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_1(hdc, cx - size, cy, size / 2);
    RecursiveImage3_1(hdc, cx + size, cy, size / 2);
}

void RecursiveImage3_2(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_2(hdc, cx - size, cy, size / 2);
    RecursiveImage3_2(hdc, cx + size, cy, size / 2);
    RecursiveImage3_2(hdc, cx, cy + size, size / 2);
}

void RecursiveImage3_3(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_3(hdc, cx - size, cy, size / 2);
    RecursiveImage3_3(hdc, cx + size, cy, size / 2);
    RecursiveImage3_3(hdc, cx, cy - size, size / 2);
}

void RecursiveImage3_4(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_4(hdc, cx - size, cy, size / 2);
    RecursiveImage3_4(hdc, cx + size, cy, size / 2);
    RecursiveImage3_4(hdc, cx, cy - size, size / 2);
    RecursiveImage3_4(hdc, cx, cy + size, size / 2);
}

void RecursiveImage3_5(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_5(hdc, cx - size, cy + size, size / 2);
    RecursiveImage3_5(hdc, cx + size, cy + size, size / 2);
}

void RecursiveImage3_6(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_6(hdc, cx + size, cy + size, size / 2);
    RecursiveImage3_6(hdc, cx - size, cy - size, size / 2);
}

void RecursiveImage3_7(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_7(hdc, cx - size / 2, cy - size, size / 2);
    RecursiveImage3_7(hdc, cx + size / 2, cy - size, size / 2);
    RecursiveImage3_7(hdc, cx - size, cy + size, size / 2);
    RecursiveImage3_7(hdc, cx + size, cy + size, size / 2);
}

void RecursiveImage3_8(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_8(hdc, cx + size / 2, cy - size, size / 2);
    RecursiveImage3_8(hdc, cx + size / 2, cy + size, size / 2);
}

void Image4(HDC hdc, int cx, int cy, int size) {
    int x1 = cx;
    int y1 = cy - size;
    int x2 = cx + size / 4;
    int y2 = cy - size / 4;
    int x3 = cx + size;
    int y3 = cy;
    int x4 = cx + size / 4;
    int y4 = cy + size / 4;
    int x5 = cx;
    int y5 = cy + size;
    int x6 = cx - size / 4;
    int y6 = cy + size / 4;
    int x7 = cx - size;
    int y7 = cy;
    int x8 = cx - size / 4;
    int y8 = cy - size / 4;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x5, y5);
    LineTo(hdc, x6, y6);
    LineTo(hdc, x7, y7);
    LineTo(hdc, x8, y8);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);
}

void RecursiveImage4_1(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage4_1(hdc, cx + size, cy, size / 2);
    RecursiveImage4_1(hdc, cx - size, cy, size / 2);
}

void RecursiveImage4_2(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage4_2(hdc, cx, cy + size, size / 2);
    RecursiveImage4_2(hdc, cx, cy - size, size / 2);
}

void RecursiveImage4_3(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage4_3(hdc, cx, cy + size, size / 2);
    RecursiveImage4_3(hdc, cx, cy - size, size / 2);
    RecursiveImage4_3(hdc, cx - size, cy, size / 2);
}

void RecursiveImage4_4(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage4_4(hdc, cx - size / 2, cy - size, size / 2);
    RecursiveImage4_4(hdc, cx + size / 2, cy - size, size / 2);
    RecursiveImage4_4(hdc, cx - size, cy + size, size / 2);
    RecursiveImage4_4(hdc, cx + size, cy + size, size / 2);
}

void RecursiveImage4_5(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage4_5(hdc, cx - size, cy, size / 2);
    RecursiveImage4_5(hdc, cx + size, cy, size / 2);
    RecursiveImage4_5(hdc, cx, cy - size, size / 2);
    RecursiveImage4_5(hdc, cx, cy + size, size / 2);
}

void RecursiveImage4_6(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage4_6(hdc, cx - size, cy, size / 2);
    RecursiveImage4_6(hdc, cx + size, cy, size / 2);
    RecursiveImage4_6(hdc, cx, cy - size, size / 2);
}

void RecursiveImage4_7(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage4_7(hdc, cx - size, cy - size, size / 2);
    RecursiveImage4_7(hdc, cx + size, cy + size, size / 2);
}

void Image5(HDC hdc, int cx, int cy, int size) {
    int x1 = cx + size;
    int y1 = cy;
    int x2 = cx;
    int y2 = cy + size;
    int x3 = cx - size;
    int y3 = cy;
    int x4 = cx - size / 2;
    int y4 = cy - size / 2;
    int x5 = cx + size / 2;
    int y5 = cy - size / 2;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x5, y5);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);
}

void RecursiveImage5_1(HDC hdc, int cx, int cy, int size) {
    Image5(hdc, cx, cy, size);
    if (size < 60) {
        return;
    }
    RecursiveImage5_1(hdc, cx + size, cy, size / 2);
    RecursiveImage5_1(hdc, cx - size / 2, cy - size / 2, size / 2);
    RecursiveImage5_1(hdc, cx + size / 2, cy - size / 2, size / 2);
    RecursiveImage5_1(hdc, cx - size, cy, size / 2);
    RecursiveImage5_1(hdc, cx, cy + size, size / 2);
}

void RecursiveImage5_2(HDC hdc, int cx, int cy, int size) {
    Image5(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage5_2(hdc, cx + size, cy, size / 2);
    RecursiveImage5_2(hdc, cx - size / 2, cy - size / 2, size / 2);
    RecursiveImage5_2(hdc, cx + size / 2, cy - size / 2, size / 2);
    RecursiveImage5_2(hdc, cx - size, cy, size / 2);
    RecursiveImage5_2(hdc, cx, cy + size, size / 2);
}

void Image6(HDC hdc, int cx, int cy, int size) {
    int x1 = cx - size / 2;
    int y1 = cy;
    int x2 = cx - size;
    int y2 = cy - size;
    int x3 = cx;
    int y3 = cy - size;
    int x4 = cx + size / 2;
    int y4 = cy;
    int x5 = cx;
    int y5 = cy + size;
    int x6 = cx - size;
    int y6 = cy + size;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x5, y5);
    LineTo(hdc, x6, y6);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);
}

void RecursiveImage6_1(HDC hdc, int cx, int cy, int size) {
    Image6(hdc, cx, cy, size);
    if (size < 60) {
        return;
    }
    RecursiveImage6_1(hdc, cx + (size / 4) * 3, cy, size / 2);
    RecursiveImage6_1(hdc, cx - (size / 4) * 3, cy, size / 2);
}

void RecursiveImage6_2(HDC hdc, int cx, int cy, int size) {
    Image6(hdc, cx, cy, size);
    if (size < 10) {
        return;
    }
    RecursiveImage6_2(hdc, cx + (size / 4) * 3, cy, size / 2);
    RecursiveImage6_2(hdc, cx - (size / 4) * 3, cy, size / 2);
}

void Image7(HDC hdc, int cx, int cy, int size) {
    int x1 = cx;
    int y1 = cy;
    int x2 = cx - size;
    int y2 = cy;
    int x3 = cx + size / 2;
    int y3 = cy - size / 2;
    int x4 = cx;
    int y4 = cy + size;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);
}

void RecursiveImage7_1(HDC hdc, int cx, int cy, int size) {
    Image7(hdc, cx, cy, size);
    if (size < 60) {
        return;
    }
    RecursiveImage7_1(hdc, cx + size / 2, cy - size / 2, size / 2);
    RecursiveImage7_1(hdc, cx - size / 4, cy + size / 4, size / 2);
}

void RecursiveImage7_2(HDC hdc, int cx, int cy, int size) {
    Image7(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage7_2(hdc, cx + size / 2, cy - size / 2, size / 2);
    RecursiveImage7_2(hdc, cx - size / 4, cy + size / 4, size / 2);
}

void Image8(HDC hdc, int cx, int cy, int size) {
    int x1 = cx - size / 2;
    int y1 = cy;
    int x2 = cx - size;
    int y2 = cy - size;
    int x3 = cx + size;
    int y3 = cy - size;
    int x4 = cx + size / 2;
    int y4 = cy;
    int x5 = cx + size;
    int y5 = cy;
    int x6 = cx + size;
    int y6 = cy + size;
    int x7 = cx - size;
    int y7 = cy + size;
    int x8 = cx - size;
    int y8 = cy;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x5, y5);
    LineTo(hdc, x6, y6);
    LineTo(hdc, x7, y7);
    LineTo(hdc, x8, y8);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);
}

void RecursiveImage8_1(HDC hdc, int cx, int cy, int size) {
    Image8(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage8_1(hdc, cx, cy - size, size / 2);
    RecursiveImage8_1(hdc, cx, cy + size, size / 2);
}

void Image9(HDC hdc, int cx, int cy, int size) {
    int x1 = cx;
    int y1 = cy;
    int x2 = cx - size;
    int y2 = cy - size;
    int x3 = cx + size / 2;
    int y3 = cy - size;
    int x4 = cx + size / 2;
    int y4 = cy + size;
    int x5 = cx - size;
    int y5 = cy + size;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x5, y5);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);
}

void RecursiveImage9_1(HDC hdc, int cx, int cy, int size) {
    Image9(hdc, cx, cy, size);
    if (size < 15) {
        return;
    }
    RecursiveImage9_1(hdc, cx + size, cy, size / 2);
}