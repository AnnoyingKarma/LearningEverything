#include <windows.h>
#include <vector>

void SetWindowToFullScreen(HWND hwnd) {
    ShowWindow(hwnd, SW_MAXIMIZE);
}

int main() {
    std::vector<HWND> windows;

    EnumWindows([](HWND hwnd, LPARAM lParam) -> BOOL {
        if (IsWindowVisible(hwnd)) {
            ((std::vector<HWND>*)lParam)->push_back(hwnd);
        }
        return TRUE;
    }, reinterpret_cast<LPARAM>(&windows));

    for (HWND hwnd : windows) {
        SetWindowToFullScreen(hwnd);
    }

    return 0;
}
