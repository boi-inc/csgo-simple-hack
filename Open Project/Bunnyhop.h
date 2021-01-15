#ifndef __Bunnyhop_h__
#define __Bunnyhop_h__
#include "Offsets.h"
#include "Features.h"
#include "Important.h"

#define FL_ONGROUND (1<<0)

void Bunnyhop() {
	while (true) {
			Sleep(1);
			if (toggleBhop)
			{
				DWORD LocalPlayer = readMem<DWORD>(clientBase + dwLocalPlayer);
				BYTE LocalPlayerFlag = readMem<BYTE>(dwLocalPlayer + m_fFlags);
				if (GetAsyncKeyState(VK_SPACE) && LocalPlayerFlag == 257)
				{
					writeMem<DWORD>(LocalPlayer + dwForceJump, 5);
				}
			}
			else
			{
				Sleep(1);
			}
		}
		
	}

#endif // __Bunnyhop_h__
