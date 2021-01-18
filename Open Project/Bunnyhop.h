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
				DWORD LocalPlayerFlag = readMem<DWORD>(LocalPlayer + m_fFlags);
				if (GetAsyncKeyState(VK_SPACE) && LocalPlayerFlag == 257) {
					writeMem<DWORD>(clientBase + dwForceJump, 6);
					Sleep(40);
					writeMem<DWORD>(clientBase + dwForceJump, 0);
				}
			}
			else if (GetAsyncKeyState(VK_F2) && toggleBhop)
			{
				break;
			}
		}
		
	}

#endif // __Bunnyhop_h__
