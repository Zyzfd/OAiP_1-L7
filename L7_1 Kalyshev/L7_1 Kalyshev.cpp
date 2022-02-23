// L7_1 Kalyshev.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "L7_1 Kalyshev.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна
int numPicture = 1;

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow){
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_L71KALYSHEV, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_L71KALYSHEV));

    MSG msg;

    // Цикл основного сообщения:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_L71KALYSHEV));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_L71KALYSHEV);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ЦЕЛЬ: Обрабатывает сообщения в главном окне.
//
//  WM_COMMAND  - обработать меню приложения
//  WM_PAINT    - Отрисовка главного окна
//  WM_DESTROY  - отправить сообщение о выходе и вернуться
//
//

void Lab7(HDC hdc, int numPicture) {
    if (numPicture == 1) OlympicEmblem(hdc);
    if (numPicture == 2) AlarmClock(hdc);
    if (numPicture == 3) Cloud(hdc);
    if (numPicture == 4) Image1(hdc);
}


void OlympicEmblem(HDC hdc) {
    // Кисть - прозрачная
    SelectObject(hdc, GetStockObject(NULL_BRUSH));

    // верхний ряд колец
    HPEN hPen_1 = CreatePen(PS_SOLID, 5, RGB(0, 0, 255));
    SelectObject(hdc, hPen_1);
    Ellipse(hdc, 20, 40, 60, 80);

    hPen_1 = CreatePen(PS_SOLID, 5, RGB(0, 0, 0));
    SelectObject(hdc, hPen_1);
    Ellipse(hdc, 70, 40, 110, 80);

    hPen_1 = CreatePen(PS_SOLID, 5, RGB(255, 0, 0));
    SelectObject(hdc, hPen_1);
    Ellipse(hdc, 120, 40, 160, 80);

    // нижний ряд колец
    hPen_1 = CreatePen(PS_SOLID, 5, RGB(255, 255, 0));
    SelectObject(hdc, hPen_1);
    Ellipse(hdc, 45, 60, 85, 100);

    hPen_1 = CreatePen(PS_SOLID, 5, RGB(0, 255, 0));
    SelectObject(hdc, hPen_1);
    Ellipse(hdc, 95, 60, 135, 100);
}

void AlarmClock(HDC hdc) {
    HPEN hPen_2 = CreatePen(PS_SOLID, 1, RGB(0xff, 0x0, 0x0));
    SelectObject(hdc, hPen_2);

    // Циферблат
    Ellipse(hdc, 180, 40, 260, 120);

    // Левый колокольчик
    Chord(hdc, 180, 30, 215, 60, 215, 25, 175, 55);

    // Правый колокольчик
    Chord(hdc, 225, 30, 260, 60, 265, 55, 225, 25);
}

void Cloud(HDC hdc) {
    HPEN hPen_3 = CreatePen(PS_SOLID, 5, RGB(0, 0, 255));
    HBRUSH hBrush_3 = CreateSolidBrush(RGB(0, 0, 255));
    SelectObject(hdc, hPen_3);
    SelectObject(hdc, hBrush_3);

    Ellipse(hdc, 20, 150, 80, 180);
    Ellipse(hdc, 60, 150, 120, 180);
    Ellipse(hdc, 40, 160, 160, 200);
    Ellipse(hdc, 120, 160, 180, 200);
    Ellipse(hdc, 120, 160, 180, 200);
}

void Star1(HDC hdc, int cx, int cy, int size) {
    HPEN Black = CreatePen(PS_SOLID, 5, RGB(0, 0, 0));
    HBRUSH White = CreateSolidBrush(RGB(255, 255, 255));
    SelectObject(hdc, White);
    SelectObject(hdc, Black);
    POINT Star1[8];
    Star1[0].x = cx;
    Star1[0].y = cy - size;

    Star1[1].x = cx + size / 4;
    Star1[1].y = cy - size / 4;

    Star1[2].x = cx + size;
    Star1[2].y = cy;

    Star1[3].x = cx + size / 4;
    Star1[3].y = cy + size / 4;

    Star1[4].x = cx;
    Star1[4].y = cy + size;

    Star1[5].x = cx - size / 4;
    Star1[5].y = cy + size / 4;

    Star1[6].x = cx - size;
    Star1[6].y = cy;

    Star1[7].x = cx - size / 4;
    Star1[7].y = cy - size / 4;

    Polygon(hdc, Star1, 8);
    DeleteObject(Black);
    DeleteObject(White);
}

void Star2(HDC hdc, int cx, int cy, int size) {
    HPEN Black = CreatePen(PS_SOLID, 5, RGB(0, 0, 0));
    HBRUSH Black_Brush = CreateSolidBrush(RGB(0, 0, 0));
    SelectObject(hdc, Black);
    SelectObject(hdc, Black_Brush);
    POINT Star1[8];
    Star1[0].x = cx;
    Star1[0].y = cy - size;

    Star1[1].x = cx + size / 4;
    Star1[1].y = cy - size / 4;

    Star1[2].x = cx + size;
    Star1[2].y = cy;

    Star1[3].x = cx + size / 4;
    Star1[3].y = cy + size / 4;

    Star1[4].x = cx;
    Star1[4].y = cy + size;

    Star1[5].x = cx - size / 4;
    Star1[5].y = cy + size / 4;

    Star1[6].x = cx - size;
    Star1[6].y = cy;

    Star1[7].x = cx - size / 4;
    Star1[7].y = cy - size / 4;

    Polygon(hdc, Star1, 8);
    DeleteObject(Black);
    DeleteObject(Black_Brush);
}

void Star3(HDC hdc, int cx, int cy, int size) {
    HPEN Black = CreatePen(PS_SOLID, 5, RGB(0, 0, 0));
    HBRUSH Red_Brush = CreateSolidBrush(RGB(255, 0, 0));
    SelectObject(hdc, Black);
    SelectObject(hdc, Red_Brush);
    POINT Star1[8];
    Star1[0].x = cx;
    Star1[0].y = cy - size;

    Star1[1].x = cx + size / 4;
    Star1[1].y = cy - size / 4;

    Star1[2].x = cx + size;
    Star1[2].y = cy;

    Star1[3].x = cx + size / 4;
    Star1[3].y = cy + size / 4;

    Star1[4].x = cx;
    Star1[4].y = cy + size;

    Star1[5].x = cx - size / 4;
    Star1[5].y = cy + size / 4;

    Star1[6].x = cx - size;
    Star1[6].y = cy;

    Star1[7].x = cx - size / 4;
    Star1[7].y = cy - size / 4;

    Polygon(hdc, Star1, 8);

    DeleteObject(Black);
    DeleteObject(Red_Brush);
}

void Image1(HDC hdc) {
    Star1(hdc, 500, 100, 100);
    Star2(hdc, 600, 200, 50);
    Star3(hdc, 700, 100, 75);
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Разобрать выбор в меню:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_KEYDOWN:
        switch (wParam)
        {
        case VK_LEFT:
            numPicture--;
            if (numPicture < 1) numPicture = 1;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_RIGHT:
            numPicture++;
            if (numPicture > 4) numPicture = 4;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Добавьте сюда любой код прорисовки, использующий HDC...
            Lab7(hdc, numPicture);
            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
