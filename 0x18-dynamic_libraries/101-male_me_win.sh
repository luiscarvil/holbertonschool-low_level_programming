#!/bin/bash
wget -P /tmp https://github.com/luiscarvil/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libhb.so
export LD_PRELOAD=/tmp/libhb.so