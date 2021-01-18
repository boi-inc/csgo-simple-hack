#ifndef __FOV_h__
#define __FOV_h__
#include "Offsets.h"
#include "Features.h"
#include "Important.h"


void Config() {
	ofstream FovConfig("Fov.txt");
	FovConfig.close();
}

void Fov() {

	DWORD LocalPlayer = readMem<DWORD>(clientBase + dwLocalPlayer);

		int newFov, defaultFov; 
  		defaultFov = readMem<int>(LocalPlayer + m_iFOV);
		cout << "Enter fov (0 - 300): ";
	    cin >> newFov;

		while (true)
		{
			if (toggleFov)
			{

				writeMem<int>(LocalPlayer + m_iFOV, newFov);
				

			}
			else
			{
                writeMem<int>(LocalPlayer + m_iFOV, defaultFov); 
			}
		}
}
#endif // __FOV_h__
