#ifndef RESOURCE_MONITOR_H
#define RESOURCE_MONITOR_H

class ResourceMonitor {
public:
    void collect_data();
    double get_cpu_usage() const;
    double get_memory_usage() const;
    double get_disk_usage() const;

private:
    double cpu_usage;
    double memory_usage;
    double disk_usage;
};

#endif