#ifndef __NoFlash_h__
#define __NoFlash_h__
#include "Offsets.h"
#include "Features.h"
#include "Important.h"

void noFlash() {
	while (true)
	{
		Sleep(1);
		if (toggleNoFlash)
		{
			DWORD LocalPlayer = readMem<DWORD>(clientBase + dwLocalPlayer);
			int Flash = readMem<int>(LocalPlayer + m_flFlashDuration);
			if (Flash > 0)
			{
				writeMem<int>(LocalPlayer + m_flFlashDuration, 0);
			}
		}
		else if (GetAsyncKeyState(VK_F3) && toggleNoFlash)
		{
			break;
		}
	}
}

#endif // __NoFlash_h__
