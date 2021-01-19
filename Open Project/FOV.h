#ifndef __FOV_h__
#define __FOV_h__
#include "Offsets.h"
#include "Features.h"
#include "Important.h"



void Fov() {

		int newFov, defaultFov; 
  		defaultFov = readMem<int>(Entity.LocalPlayer + Offsets.m_iFOV);
		cout << "Enter fov (0 - 300): ";
	    cin >> newFov;

		while (true)
		{
			if (toggleFov)
			{

				writeMem<int>(Entity.LocalPlayer + Offsets.m_iFOV, newFov);
				

			}
			else
			{
                writeMem<int>(Entity.LocalPlayer + Offsets.m_iFOV, defaultFov);
			}
		}
}
#endif // __FOV_h__
