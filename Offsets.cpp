// ============================================================
// Offsets.cpp
// ============================================================
// Filled from a live scan. Nothing here is fetched at runtime.
// Addresses are RVAs relative to the module base, not file offsets.
// Re-scan after every client update. Whitespace is 4 spaces, tabs will break the paste.
// ============================================================

#pragma once
#include <cstdint>

namespace Offsets
{
    // ---------- build ----------
    inline constexpr uint32_t BuildRevision   = 0;
    inline constexpr uint32_t BuildTimestamp  = 0;
    inline constexpr uint32_t ModuleSize      = 0;

    // ---------- data model ----------
    inline constexpr uintptr_t LuaState       = 0x0;
    inline constexpr uintptr_t GlobalState    = 0x0;
    inline constexpr uintptr_t ScriptContext  = 0x0;
    inline constexpr uintptr_t DataModel      = 0x0;

    // ---------- instances ----------
    inline constexpr uintptr_t Name            = 0x0;
    inline constexpr uintptr_t ClassDescriptor = 0x0;
    inline constexpr uintptr_t Parent          = 0x0;
    inline constexpr uintptr_t Children        = 0x0;
    inline constexpr uintptr_t Primitive       = 0x0;

    // ---------- values ----------
    inline constexpr uintptr_t TValue_Value    = 0x0;
    inline constexpr uintptr_t TValue_Type     = 0x0;
    inline constexpr uintptr_t TString_Data    = 0x0;
    inline constexpr uintptr_t TString_Length  = 0x0;
    inline constexpr uintptr_t Proto_Code      = 0x0;
    inline constexpr uintptr_t Proto_Constants = 0x0;

    // ---------- closures ----------
    inline constexpr uintptr_t Closure_Proto   = 0x0;
    inline constexpr uintptr_t Closure_Upvalues= 0x0;

    // ---------- misc ----------
    inline constexpr uintptr_t Identity        = 0x0;
    inline constexpr uintptr_t Job_Start       = 0x0;
    inline constexpr uintptr_t Job_End         = 0x0;
    inline constexpr uintptr_t TaskScheduler   = 0x0;

    // ---------- integrity (region 0xCB0000 - 0xE10000) ----------
    // patch_t table lives in the injector. Sites listed newest-build-first.
    inline constexpr uintptr_t IntegritySites[] =
    {
        0x0, // nop x9   crc check, chunk A
        0x0, // jmp      chunk B
        0x0, // ret 0    early out
        0x0, // nop x5   crc check, chunk C
    };
}
