#include "resource_monitor.h"
#include "ui.h"

int main() {
    ResourceMonitor monitor;
    UI ui;

    monitor.collect_data();
    ui.display(monitor);

    return 0;
}