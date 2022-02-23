// L7_2 Kalyshev.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "L7_2 Kalyshev.h"

#define MAX_LOADSTRING 100

#include "Lab1.h"
#include "Lab2.h"
#include "Lab3.h"
#include "Lab4.h"
#include "Lab5.h"

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

int numImage = 1;
int sizeImage = 80;
int numLaba = 1;

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_L72KALYSHEV, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_L72KALYSHEV));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_L72KALYSHEV));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_L72KALYSHEV);
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
            numImage--;
            if (numImage < 1) numImage = 1;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_RIGHT:
            numImage++;
            if (numImage > 37) numImage = 37;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_DOWN:
            sizeImage -= 10;
            if (sizeImage < 10) sizeImage = 10;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_UP:
            sizeImage += 10;
            if (sizeImage > 200) sizeImage = 200;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_F1:
            numLaba--;
            if (numLaba < 1) numLaba = 1;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_F2:
            numLaba++;
            if (numLaba > 5) numLaba = 5;

            InvalidateRect(hWnd, NULL, TRUE);
            break;
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Добавьте сюда любой код прорисовки, использующий HDC...

            switch (numLaba) {
            case 1:
                switch (numImage) {
                case 1:
                    L1_1(hdc);
                    break;
                case 2:
                    L1_2(hdc);
                    break;
                case 3:
                    L1_3(hdc);
                    break;
                case 4:
                    L1_4(hdc);
                    break;
                case 5:
                    L1_5(hdc);
                    break;
                case 6:
                    L1_6(hdc);
                    break;
                case 7:
                    L1_7(hdc);
                    break;
                case 8:
                    L1_8(hdc);
                    break;
                }
                break;
            case 2:
                switch (numImage) {
                case 1:
                    L2_1(hdc);
                    break;
                case 2:
                    L2_2(hdc);
                    break;
                case 3:
                    L2_3(hdc);
                    break;
                case 4:
                    L2_4(hdc);
                    break;
                case 5:
                    L2_5(hdc);
                    break;
                case 6:
                    L2_6(hdc);
                    break;
                case 7:
                    L2_7(hdc);
                    break;
                case 8:
                    L2_8(hdc);
                    break;
                case 9:
                    L2_9(hdc);
                    break;
                case 10:
                    L2_10(hdc);
                    break;
                }
                break;
            case 3:
                switch (numImage) {
                case 1:
                    L3_1(hdc);
                    break;
                case 2:
                    L3_2(hdc);
                    break;
                case 3:
                    L3_3(hdc);
                    break;
                case 4:
                    L3_4(hdc);
                    break;
                case 5:
                    L3_5(hdc);
                    break;
                case 6:
                    L3_6(hdc);
                    break;
                case 7:
                    L3_7(hdc);
                    break;
                case 8:
                    L3_8(hdc);
                    break;
                case 9:
                    L3_9(hdc);
                    break;
                case 10:
                    L3_10(hdc);
                    break;
                case 11:
                    L3_11(hdc);
                    break;
                case 12:
                    L3_12(hdc);
                    break;
                case 13:
                    L3_13(hdc);
                    break;
                }
                break;
            case 4:
                switch (numImage) {
                case 1:
                    RecursiveImage1_1(hdc, 400, 400, sizeImage);
                    break;
                case 2:
                    RecursiveImage1_2(hdc, 400, 400, sizeImage);
                    break;
                case 3:
                    RecursiveImage1_3(hdc, 400, 400, sizeImage);
                    break;
                case 4:
                    RecursiveImage1_4(hdc, 400, 400, sizeImage);
                    break;
                case 5:
                    RecursiveImage1_5(hdc, 400, 400, sizeImage);
                    break;
                case 6:
                    RecursiveImage1_6(hdc, 400, 400, sizeImage);
                    break;
                case 7:
                    RecursiveImage1_7(hdc, 400, 400, sizeImage);
                    break;
                case 8:
                    RecursiveImage2_1(hdc, 400, 400, sizeImage);
                    break;
                case 9:
                    RecursiveImage2_2(hdc, 400, 400, sizeImage);
                    break;
                case 10:
                    RecursiveImage2_3(hdc, 400, 400, sizeImage);
                    break;
                case 11:
                    RecursiveImage2_4(hdc, 400, 400, sizeImage);
                    break;
                case 12:
                    RecursiveImage2_5(hdc, 400, 400, sizeImage);
                    break;
                case 13:
                    RecursiveImage2_6(hdc, 400, 400, sizeImage);
                    break;
                case 14:
                    RecursiveImage2_7(hdc, 400, 400, sizeImage);
                    break;
                case 15:
                    RecursiveImage3_1(hdc, 400, 400, sizeImage);
                    break;
                case 16:
                    RecursiveImage3_2(hdc, 400, 400, sizeImage);
                    break;
                case 17:
                    RecursiveImage3_3(hdc, 400, 400, sizeImage);
                    break;
                case 18:
                    RecursiveImage3_4(hdc, 400, 400, sizeImage);
                    break;
                case 19:
                    RecursiveImage3_5(hdc, 400, 400, sizeImage);
                    break;
                case 20:
                    RecursiveImage3_6(hdc, 400, 400, sizeImage);
                    break;
                case 21:
                    RecursiveImage3_7(hdc, 400, 400, sizeImage);
                    break;
                case 22:
                    RecursiveImage3_8(hdc, 400, 400, sizeImage);
                    break;
                case 23:
                    RecursiveImage4_1(hdc, 400, 400, sizeImage);
                    break;
                case 24:
                    RecursiveImage4_2(hdc, 400, 400, sizeImage);
                    break;
                case 25:
                    RecursiveImage4_3(hdc, 400, 400, sizeImage);
                    break;
                case 26:
                    RecursiveImage4_4(hdc, 400, 400, sizeImage);
                    break;
                case 27:
                    RecursiveImage4_5(hdc, 400, 400, sizeImage);
                    break;
                case 28:
                    RecursiveImage4_6(hdc, 400, 400, sizeImage);
                    break;
                case 29:
                    RecursiveImage4_7(hdc, 400, 400, sizeImage);
                    break;
                case 30:
                    RecursiveImage5_1(hdc, 400, 400, sizeImage);
                    break;
                case 31:
                    RecursiveImage5_2(hdc, 400, 400, sizeImage);
                    break;
                case 32:
                    RecursiveImage6_1(hdc, 400, 400, sizeImage);
                    break;
                case 33:
                    RecursiveImage6_2(hdc, 400, 400, sizeImage);
                    break;
                case 34:
                    RecursiveImage7_1(hdc, 400, 400, sizeImage);
                    break;
                case 35:
                    RecursiveImage7_2(hdc, 400, 400, sizeImage);
                    break;
                case 36:
                    Image8(hdc, 70, 70, 50);
                    RecursiveImage8_1(hdc, 400, 400, sizeImage);
                    break;
                case 37:
                    Image9(hdc, 70, 70, 50);
                    RecursiveImage9_1(hdc, 300, 300, sizeImage);
                    break;
                }
                break;
            case 5:
                switch (numImage) {
                case 1:
                    CrownWall_1(hdc);
                    break;
                case 2:
                    CrownWall_2(hdc);
                    break;
                case 3:
                    CrownWall_3(hdc);
                    break;
                case 4:
                    CrownWall_4(hdc);
                    break;
                case 5:
                    MyFigureWall_1(hdc);
                    break;
                case 6:
                    MyFigureWall_2(hdc);
                    break;
                case 7:
                    MyFigureWall_3(hdc);
                    break;
                case 8:
                    MyFigureWall_4(hdc);
                    break;
                case 9:
                    MyFigure1Wall_1(hdc);
                    break;
                case 10:
                    MyFigure1Wall_2(hdc);
                    break;
                case 11:
                    MyFigure1Wall_3(hdc);
                    break;
                case 12:
                    MyFigure1Wall_4(hdc);
                    break;
                case 13:
                    MyFigure2Wall_1(hdc);
                    break;
                case 14:
                    MyFigure2Wall_2(hdc);
                    break;
                case 15:
                    MyFigure2Wall_3(hdc);
                    break;
                case 16:
                    MyFigure2Wall_4(hdc);
                    break;
                case 17:
                    MyFigure2Wall_5(hdc);
                    break;
                }
                break;
            }
            break;

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
