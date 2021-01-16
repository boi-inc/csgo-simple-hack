#ifndef __FOV_h__
#define __FOV_h__
#include "Offsets.h"
#include "Features.h"
#include "Important.h"

void Fov() {
	int newFov;
	cout << "Enter fov (0 - 300): ";
	cin >> newFov;
	while (true)
	{
		if (toggleFov)
		{
			DWORD LocalPlayer = readMem<DWORD>(clientBase + dwLocalPlayer);

			writeMem<int>(LocalPlayer + m_iFOV, newFov);
			cout << "Fov: ";
			cout << newFov;
			cout << "" << endl;
		}
		else
		{
			int newFov = 0;

			DWORD LocalPlayer = readMem<DWORD>(clientBase + dwLocalPlayer);

			writeMem<int>(LocalPlayer + m_iFOV, newFov);
		}
	}
	Sleep(1);
}
#endif // __FOV_h__
