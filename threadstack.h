#ifndef THREADSTACK_H
#define THREADSTACK_H

#include <windows.h>
#include <vector>

namespace threadstack {
	std::vector<DWORD> __declspec(dllexport) threadList(DWORD pid);
	DWORD __declspec(dllexport) baseThreadstackAddress(DWORD processID, DWORD threadstackNumber);
}

#endif
