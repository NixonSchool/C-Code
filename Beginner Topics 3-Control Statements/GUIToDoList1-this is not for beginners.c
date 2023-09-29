#include <windows.h>

// Global variables
HWND hwndList, hwndEdit;
HINSTANCE hInst;

// Function to add a task to the list
void AddTask() {
    char buffer[256];
    GetWindowText(hwndEdit, buffer, sizeof(buffer));

    if (strlen(buffer) > 0) {
        SendMessage(hwndList, LB_ADDSTRING, 0, (LPARAM)buffer);
        SetWindowText(hwndEdit, "");
    }
}

// Function to remove a selected task
void RemoveTask() {
    int selectedIndex = SendMessage(hwndList, LB_GETCURSEL, 0, 0);
    if (selectedIndex != LB_ERR) {
        SendMessage(hwndList, LB_DELETESTRING, (WPARAM)selectedIndex, 0);
    }
}

// Window procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_CREATE:
            hwndList = CreateWindow("LISTBOX", NULL, WS_VISIBLE | WS_CHILD | LBS_STANDARD,
                                    10, 10, 200, 200, hwnd, NULL, hInst, NULL);
            hwndEdit = CreateWindow("EDIT", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER,
                                    220, 10, 150, 30, hwnd, NULL, hInst, NULL);
            CreateWindow("BUTTON", "Add", WS_VISIBLE | WS_CHILD,
                         220, 50, 75, 30, hwnd, (HMENU)1, hInst, NULL);
            CreateWindow("BUTTON", "Remove", WS_VISIBLE | WS_CHILD,
                         295, 50, 75, 30, hwnd, (HMENU)2, hInst, NULL);
            break;
        case WM_COMMAND:
            switch (LOWORD(wParam)) {
                case 1: // Add button clicked
                    AddTask();
                    break;
                case 2: // Remove button clicked
                    RemoveTask();
                    break;
            }
            break;
        case WM_CLOSE:
            DestroyWindow(hwnd);
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    hInst = hInstance;
    HWND hwnd;
    MSG Msg;
    WNDCLASSEX wc;

    // Register the window class
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = 0;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = "ToDoList";
    wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

    if (!RegisterClassEx(&wc)) {
        MessageBox(NULL, "Window Registration Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    // Create the window
    hwnd = CreateWindow("ToDoList", "To-Do List", WS_OVERLAPPEDWINDOW,
                        CW_USEDEFAULT, CW_USEDEFAULT, 400, 300, NULL, NULL, hInstance, NULL);

    if (hwnd == NULL) {
        MessageBox(NULL, "Window Creation Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // Message loop
    while (GetMessage(&Msg, NULL, 0, 0) > 0) {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }

    return Msg.wParam;
}


/*

Putting an icon in my folder

*/
