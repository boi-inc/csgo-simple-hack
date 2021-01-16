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
				if (GetAsyncKeyState(VK_SPACE) && LocalPlayerFlag == FL_ONGROUND)
				{
					cout << "On ground!";
					writeMem<DWORD>(LocalPlayer + dwForceJump, 5);
				}
			}
			else if (GetAsyncKeyState(VK_F2) && toggleBhop)
			{
				break;
			}
		}
		
	}

#endif // __Bunnyhop_h__
