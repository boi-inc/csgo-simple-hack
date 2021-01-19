#ifndef __Bunnyhop_h__
#define __Bunnyhop_h__
#include "Offsets.h"
#include "Features.h"
#include "Important.h"




void Bunnyhop() {
	while (true) {
			Sleep(1);
			if (toggleBhop)
			{

				if (GetAsyncKeyState(VK_SPACE) && Entity.LocalPlayerFlag == 257) {
					writeMem<DWORD>(Base.clientBase + Offsets.dwForceJump, 6);
					Sleep(40);
					writeMem<DWORD>(Base.clientBase + Offsets.dwForceJump, 0);
				}
			}
			else if (GetAsyncKeyState(VK_F2) && toggleBhop)
			{
				break;
			}
		}
		
	}

#endif // __Bunnyhop_h__
