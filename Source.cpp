#include <windows.h>

using namespace std;

int main(){
	DWORD Address /* = 0xDESNOMBRES*/;
	
	HWND hwnd = FindWindowA(NULL, "Game Name");
	if (hwnd == NULL) {
		cout << "UwU Pk t'ouvres pas le jeu" << endl;
		Sleep(3000);
		exit(-1);
	}else {
		DWORD pID;
		GetWindowThreadProcessId(hwnd, &pID);
		HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);

		if (pID == NULL) {
			cout << "ERROR : T'es sur ta ouvert le jeu comme il faut ?" << endl;
			Sleep(3000);
			exit(-1);
		}else{
			for (;;) {
				if (GetAsyncKeyState(VK_SPACE/*Une Touche*/)) {
					//action
				}
				Sleep(1);
			}
		}
	}
	return 0;
}
