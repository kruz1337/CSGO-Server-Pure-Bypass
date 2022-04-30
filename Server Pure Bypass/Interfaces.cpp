#include "Interfaces.h"

typedef void* (__cdecl* tCreateInterface)(const char* name, int* returnCode);
tCreateInterface EngineEvent = NULL;

void* GetInterface(const char* dllname, const char* interfacename)
{
    tCreateInterface CreateInterface = (tCreateInterface)GetProcAddress(GetModuleHandle(dllname), "CreateInterface");

    int returnCode = 0;
    void* interface2 = CreateInterface(interfacename, &returnCode);

    return interface2;
}

namespace Interfaces
{
    FileSystem* VFileSystem;
};

void Interfaces::Initialise() noexcept
{
    VFileSystem = (FileSystem*)GetInterface("filesystem_stdio.dll", "VFileSystem017");
};