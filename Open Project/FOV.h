#ifndef __FOV_h__
#define __FOV_h__
#include "Offsets.h"
#include "Features.h"
#include "Important.h"

void Fov() {

	while (true)
	{

		Sleep(1);
		if (toggleFov)
		{
			DWORD LocalPlayer = readMem<DWORD>(clientBase + dwLocalPlayer);
			int Fov = 120;
			writeMem<int>(LocalPlayer + m_iFOV, Fov);
		}
		else if (GetAsyncKeyState(VK_F8) && toggleFov)
		{
			DWORD LocalPlayer = readMem<DWORD>(clientBase + dwLocalPlayer);
			DWORD CurrentFov = readMem<DWORD>(LocalPlayer + m_iFOV);

			writeMem<DWORD>(CurrentFov, 0);
		}
	}
}

#endif // __FOV_h__
