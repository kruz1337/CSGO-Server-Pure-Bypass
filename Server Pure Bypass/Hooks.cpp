#include <iostream>
#include <intrin.h>
#include <hook.h>

#include "Hooks.h"
#include "MinHook.h"

namespace Hooks
{
	MinHook fileSystem;

	static int __stdcall getUnverifiedFileHashes(void* thisPointer, int maxFiles)
	{
		return false;
	}

	static int __fastcall canLoadThirdPartyFiles(void* thisPointer, void* edx) noexcept
	{
		return true;
	}

	void Setup() noexcept
	{
		MH_Initialize();

		fileSystem.init(Interfaces::VFileSystem);
		fileSystem.hookAt(101, getUnverifiedFileHashes);
		fileSystem.hookAt(128, canLoadThirdPartyFiles);

		std::cout << std::endl << "Vmt Hooks Initialized";

		MH_EnableHook(MH_ALL_HOOKS);
	}
}