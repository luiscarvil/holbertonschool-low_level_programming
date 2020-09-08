#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/luiscarvil/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/libhbt.so
export LD_PRELOAD=/tmp/libhbt.so