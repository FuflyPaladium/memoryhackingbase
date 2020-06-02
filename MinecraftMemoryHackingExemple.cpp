#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	int newValue = 64;

	HWND hwnd = FindWindowA(NULL, "Minecraft 1.8.9");
	if (hwnd == NULL) {
		cout << "UwU Pk t'ouvres pas mInEcRaFt" << endl;
		Sleep(3000);
		exit(-1);
	}else {
		DWORD pID;
		GetWindowThreadProcessId(hwnd, &pID);
		HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);

		if (pID == NULL) {
			cout << "T'es sur ta ouvert minecraft comme il faut ?" << endl;
			Sleep(3000);
			exit(-1);
		}else{
			cout << "NAN JURE TA OUVERT MINECRAFT" << endl;
			for (;;) {
				if (GetAsyncKeyState(VK_TAB)) {
					WriteProcessMemory(handle, (LPVOID)0x875C129C, &newValue, sizeof(int), 0);
					newValue++;
				}
				Sleep(1);
			}
		}
	}
	return 1;
}
