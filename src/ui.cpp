#include "ui.h"

void UI::display(const ResourceMonitor& monitor) {
    std::cout << "CPU Usage: " << monitor.getCPUUsage() << "%\n";
    std::cout << "Memory Usage: " << monitor.getMemoryUsage() << "%\n";
    std::cout << "Disk Usage: " << monitor.getDiskUsage() << "%\n";
}