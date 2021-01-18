# External CS:GO Hack by dekoyyy

![Preview](/console.png)

## How to use:
1. Compile source
1. Run CS:GO
1. Run cheat
1. Have fun

## Features:
* NoFlash
* Fov Changer
* Bunnyhop

### Special thanks:
* **Tomson_**
* **Vondri**
* **floyare**
* **wiotq**

### Memory read & write:
```c++
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

```
## To do:
- [x] Add toggle option
- [x] Add No Flash
- [x] Add FovChanger with user input
- [ ] Add Triggerbot
- [ ] Add Glow
- [x] Add Bunnyhop
- [ ] Add sth like a config 😁
