#include <windows.h>

int CALLBACK
WinMain(HINSTANCE hInstance,
        HINSTANCE hPrevInstance,
        LPSTR lpCmdLine,
        int nShowCmd
)
{
    MessageBox(0, "My first window!!!", "HandMade Hero", MB_OK | MB_ICONINFORMATION);
    return 0;
}