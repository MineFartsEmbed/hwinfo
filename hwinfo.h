#pragma once

#define HWINFO_STATIC 1

#ifdef _WIN32
    #define STRINGIFY(x) #x
    #define TOSTRING(x) STRINGIFY(x)

    #pragma comment(lib, __FILE__ "\\..\\hwinfo_cpu.lib")
    #pragma comment(lib, __FILE__ "\\..\\hwinfo_ram.lib")
    #pragma comment(lib, __FILE__ "\\..\\hwinfo_disk.lib")
    #pragma comment(lib, __FILE__ "\\..\\hwinfo_os.lib")
    #pragma comment(lib, __FILE__ "\\..\\hwinfo_gpu.lib")
    #pragma comment(lib, __FILE__ "\\..\\hwinfo_mainboard.lib")
    #pragma comment(lib, __FILE__ "\\..\\hwinfo_network.lib")
    #pragma comment(lib, __FILE__ "\\..\\hwinfo_battery.lib")
#endif

#include "hwinfo/battery.h"
#include "hwinfo/cpu.h"
#include "hwinfo/disk.h"
#include "hwinfo/gpu.h"
#include "hwinfo/mainboard.h"
#include "hwinfo/network.h"
#include "hwinfo/os.h"
#include "hwinfo/ram.h"

#ifdef _WIN32
    #include "hwinfo/utils/wmi_wrapper.h"
#endif
