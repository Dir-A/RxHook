#pragma once
#include <string>
#include <cstdint>
#include <Windows.h>


namespace Rut::RxHook
{
	class Transfer
	{
	public:
		static void Set(void* pFunc, void* pDest, size_t nCoverSize, uint8_t ucAsmCode);
		static void Set(void* pFunc, void* pDest, size_t nCoverSize);
	};

	class Detours
	{
	public:
		static void Begin();
		static void Attach(void* ppFunc, void* pDetour);
		static void Detach(void* pFunc, void* pDetour);
		static void Commit();
		static void AttachDirectly(void* ppFunc, void* pDetour);
		static void DetachDirectly(void* ppFunc, void* pDetour);
	};

	class Trampoline
	{
	public:
		static bool Free(void* ppFunc);
		static void* Alloc(void* pFunc, size_t nCopySize);
		static void Set(void* ppFunc, size_t nCoverSize, void* pDetour);
	};


	bool CreateProcessWithDlls(const wchar_t* wpAppName, uint32_t uiFlags, uint32_t nDlls, const char** rlpDlls, LPSTARTUPINFOW pStartupInfo, LPPROCESS_INFORMATION pProcessInformation);
}