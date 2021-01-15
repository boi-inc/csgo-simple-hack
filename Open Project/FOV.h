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
			int newFov = 100;
			writeMem<int>(LocalPlayer + m_iFOV, newFov);
		}
		else
		{
			int newFov = 0;
			DWORD LocalPlayer = readMem<DWORD>(clientBase + dwLocalPlayer);
			writeMem<int>(LocalPlayer + m_iFOV, newFov);
		}
	}
}

#endif // __FOV_h__
