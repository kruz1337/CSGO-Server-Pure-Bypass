 #pragma once

#include <Windows.h>

class FileSystem;

namespace Interfaces
{
	void Initialise() noexcept;

	extern FileSystem* VFileSystem;
};