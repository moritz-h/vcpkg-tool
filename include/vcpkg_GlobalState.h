#pragma once

#include <atomic>

#include "vcpkg_Chrono.h"
#include "vcpkg_Util.h"

namespace vcpkg
{
    struct GlobalState
    {
        static Util::LockGuarded<ElapsedTime> timer;
        static std::atomic<bool> debugging;
        static std::atomic<bool> feature_packages;
    };
}