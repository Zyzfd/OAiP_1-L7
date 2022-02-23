#include "Lab5.h"

void Ñrown(HDC hdc, int cx, int cy, int sizeX, int sizeY, COLORREF color) {

    POINT p[] = {
        cx,		cy - sizeY,
        cx + sizeX / 2,	cy,
        cx + sizeX,	cy - sizeY,
        cx + sizeX,	cy + sizeY,
        cx - sizeX,	cy + sizeY,
        cx - sizeX,	cy - sizeY,
        cx - sizeX / 2,	cy,
        cx,		cy - sizeY
    };

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 3, color);
    SelectObject(hdc, hPen);
    Polyline(hdc, p, 8);
    DeleteObject(hPen);
}

void CrownWall_1(HDC hdc) {
    int y = 50;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 50;
    int sizeX = 10;

    while (x < 900) {
        Ñrown(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        x += 100;
        sizeX += 5;

        b += 30;
    }

}


void CrownWall_2(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 50;
    int sizeX = 10;

    while (y < 900) {
        Ñrown(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        y += 100;
        sizeY += 5;

        r += 30;
    }

}

void CrownWall_3(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 100;
    int sizeX = 10;

    while (y < 900) {
        Ñrown(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        y += 100;
        x += 100;
        sizeX += 5;
        sizeY += 5;

        r += 30;
        g += 30;
    }

}

void CrownWall_4(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    while (y < 500) {
        int x = 1000;
        int sizeX = 10;
        g = 0;
        while (x < 1900) {
            Ñrown(hdc, x, y, sizeX, sizeY, RGB(r, g, b));
            x += 100;
            sizeX += 5;
            g += 30;
        }

        y += 100;
        sizeY += 5;
        r += 80;
    }
}

void MyFigure(HDC hdc, int cx, int cy, int sizeX, int sizeY, COLORREF color) {

    POINT p[] = {
        cx - sizeX, cy,
        cx + sizeX / 2, cy - sizeY,
        cx + sizeX, cy,
        cx - sizeX / 2, cy + sizeY,
        cx - sizeX, cy,
    };

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 3, color);
    SelectObject(hdc, hPen);
    Polyline(hdc, p, 5);
    DeleteObject(hPen);
}

void MyFigureWall_1(HDC hdc) {
    int y = 50;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 50;
    int sizeX = 10;

    while (x < 900) {
        MyFigure(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        x += 100;
        sizeX += 5;

        b += 30;
    }

}

void MyFigureWall_2(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 50;
    int sizeX = 10;

    while (y < 900) {
        MyFigure(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        y += 100;
        sizeY += 5;

        r += 30;
    }

}

void MyFigureWall_3(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 100;
    int sizeX = 10;

    while (y < 900) {
        MyFigure(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        y += 100;
        x += 100;
        sizeX += 5;
        sizeY += 5;

        r += 30;
        g += 30;
    }

}

void MyFigureWall_4(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    while (y < 500) {
        int x = 1000;
        int sizeX = 10;
        g = 0;
        while (x < 1900) {
            MyFigure(hdc, x, y, sizeX, sizeY, RGB(r, g, b));
            x += 100;
            sizeX += 5;
            g += 30;
        }

        y += 100;
        sizeY += 5;
        r += 80;
    }
}

void MyFigure1(HDC hdc, int cx, int cy, int sizeX, int sizeY, COLORREF color) {

    POINT p[] = {
        cx + sizeX,		cy - sizeY,
        cx + sizeX,	    cy + sizeY,
        cx,	            cy + 2 * sizeY,
        cx - sizeX,	    cy + sizeY,
        cx - sizeX,	    cy - sizeY,
        cx,         	cy - 2 * sizeY,
        cx + sizeX,		cy - sizeY
    };

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 3, color);
    SelectObject(hdc, hPen);
    Polyline(hdc, p, 7);
    DeleteObject(hPen);
}

void MyFigure1Wall_1(HDC hdc) {
    int y = 50;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 50;
    int sizeX = 10;

    while (x < 900) {
        MyFigure1(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        x += 100;
        sizeX += 5;

        b += 30;
    }

}

void MyFigure1Wall_2(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 50;
    int sizeX = 10;

    while (y < 900) {
        MyFigure1(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        y += 150;
        sizeY += 5;

        r += 30;
    }

}

void MyFigure1Wall_3(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 100;
    int sizeX = 10;

    while (y < 900) {
        MyFigure1(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        y += 100;
        x += 100;
        sizeX += 5;
        sizeY += 5;

        r += 30;
        g += 30;
    }

}

void MyFigure1Wall_4(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    while (y < 500) {
        int x = 1000;
        int sizeX = 10;
        g = 0;
        while (x < 1900) {
            MyFigure1(hdc, x, y, sizeX, sizeY, RGB(r, g, b));
            x += 100;
            sizeX += 5;
            g += 30;
        }

        y += 100;
        sizeY += 5;
        r += 80;
    }
}

void MyFigure2(HDC hdc, int cx, int cy, int sizeX, int sizeY, COLORREF color) {

    POINT p[] = {
        cx + sizeX,		cy + sizeY,
        cx - sizeX,	    cy + sizeY,
        cx - sizeX,	    cy,
        cx,     	    cy - sizeY,
        cx + sizeX,	    cy,
        cx + sizeX,		cy + sizeY
    };

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 3, color);
    SelectObject(hdc, hPen);
    Polyline(hdc, p, 6);
    DeleteObject(hPen);
}

void MyFigure2Wall_1(HDC hdc) {
    int y = 50;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 50;
    int sizeX = 10;

    while (x < 900) {
        MyFigure2(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        x += 100;
        sizeX += 5;

        b += 30;
    }

}

void MyFigure2Wall_2(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 50;
    int sizeX = 10;

    while (y < 900) {
        MyFigure2(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        y += 150;
        sizeY += 5;

        r += 30;
    }

}

void MyFigure2Wall_3(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    int x = 100;
    int sizeX = 10;

    while (y < 900) {
        MyFigure2(hdc, x, y, sizeX, sizeY, RGB(r, g, b));

        y += 100;
        x += 100;
        sizeX += 5;
        sizeY += 5;

        r += 30;
        g += 30;
    }

}

void MyFigure2Wall_4(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int r = 0;
    int b = 0;
    int g = 0;

    while (y < 500) {
        int x = 1000;
        int sizeX = 10;
        g = 0;
        while (x < 1900) {
            MyFigure2(hdc, x, y, sizeX, sizeY, RGB(r, g, b));
            x += 100;
            sizeX += 5;
            g += 30;
        }

        y += 100;
        sizeY += 5;
        r += 80;
    }
}

void MyFigure2Wall_5(HDC hdc) {
    int y = 100;
    int sizeY = 10;

    int i = 1;

    int r = 0;
    int b = 0;
    int g = 0;

    while (i < 7) {
        int x = 700;
        int sizeX = 10;
        int k = 1;
        int n = 100;
        MyFigure2(hdc, x, y, sizeX, sizeY, RGB(r, g, b));
        while (k < i) {
            MyFigure2(hdc, x + n, y, sizeX, sizeY, RGB(r, g, b));
            MyFigure2(hdc, x - n, y, sizeX, sizeY, RGB(r, g, b));
            n += 100;
            k++;
        }
        b += 40;
        y += 100;
        sizeY += 10;
        i++;
    }
}