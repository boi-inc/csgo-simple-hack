#include "Important.h"
#include "Offsets.h"
#include "Features.h"
#include "FOV.h"
#include "Glow.h"
#include "Bunnyhop.h"
#include "Triggerbot.h"
#include "NoFlash.h"

using namespace std;

void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}

int main()
{
	HWND hwnd = FindWindowA(NULL, "Counter-Strike: Global Offensive");
	DWORD pID;

	GetWindowThreadProcessId(hwnd, &pID);

	process = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);

	//client.dll
	do {
		clientBase = getModuleBaseAddress(pID, "client.dll");
		Sleep(100);
	} while (!clientBase);

	//engine.dll
	do {
		engineBase = getModuleBaseAddress(pID, "engine.dll");
	} while (!engineBase);
	if (hwnd && pID)
	{
		Sleep(1000);
		system("cls");
		SetConsoleTitle("External dekoyyy Hack");
		setcolor(10);
		cout << "External CS:GO Hack\n";
		setcolor(15);
		cout << "\n";
		cout << "Created by dekoyyy\n";
		cout << "For cshacked.pl\n";
		cout << "\n";
		cout << "Addresses:" << endl;
		cout << " CS:GO - ";
		cout << hwnd << endl;
		cout << " Client.dll - ";
		cout << clientBase << endl;
		cout << " Engine.dll - ";
		cout << engineBase;
		cout << "\n";
		cout << "\n";
		cout << "Features:" << endl;
		cout << "NoFlash: F3" << endl;
		cout << "\n";
		cout << "\n";
		cout << "Credits:";
		cout << "\n";
		cout << "Null, WeakRecords. Thanks for useful tutorials :)";

		//Funkcje
		thread fovChanger(Fov);
		thread noFlash(noFlash);
		thread Bunnyhop(Bunnyhop);
		//Toggle
		while (true)
		{
			Sleep(50);
			//if (GetAsyncKeyState(VK_F8))
			//{
				//toggleFov = !toggleFov;

				//if (toggleFov)
					//Sleep(1);
			//}
			//if (GetAsyncKeyState(VK_F2))
			//{
				//toggleBhop = !toggleBhop;

				//if (toggleBhop)
					//Sleep(1);
			//}
			if (GetAsyncKeyState(VK_F3))
			{
				toggleNoFlash = !toggleNoFlash;

				if (toggleNoFlash)
					Sleep(1);
			}
		}

	}
}