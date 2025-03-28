#ifndef UI_H
#define UI_H

#include "resource_monitor.h"
#include <iostream>

class UI {
public:
    void display(const resource_monitor& monitor);
};

#endif
