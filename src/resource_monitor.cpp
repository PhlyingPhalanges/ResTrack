#include "resource_monitor.h"
#include <memory_usage.h>
#include <cpu_usage.h>
#include <disk_usage.h>

void ResourceMonitor::collect_data() {
    cpu_usage = get_cpu_usage();
    memory_usage = get_memory_usage();
    disk_usage = get_disk_usage();
}

double ResourceMonitor::get_cpu_usage() const {
    return CPUUsage::get();
}

double ResourceMonitor::get_memory_usage() const {
    return MemoryUsage::get();
}

double ResourceMonitor::get_disk_usage() const {
    return DiskUsage::get();
}