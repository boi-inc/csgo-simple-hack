#ifndef __Features_h__
#define __Features_h__

#include "Important.h"
#include "Offsets.h"

DWORD getModuleBaseAddress(DWORD pid, const char* name)
{
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);
    MODULEENTRY32 mEntry;
    mEntry.dwSize = sizeof(MODULEENTRY32);
    do
    {
        if (!strcmp(mEntry.szModule, name))
        {
            CloseHandle(snapshot);
            return (DWORD)mEntry.modBaseAddr;
        }
    } while (Module32Next(snapshot, &mEntry));
}

template <typename T>
T readMem(DWORD address)
{
    T buffer;
    ReadProcessMemory(process, (LPVOID)address, &buffer, sizeof(buffer), 0);
    return buffer;
}

// Memory Write :)
template <typename T>
void writeMem(DWORD address, T value)
{
    WriteProcessMemory(process, (LPVOID)address, &value, sizeof(value), 0);
}

#endif // __Features_h__
