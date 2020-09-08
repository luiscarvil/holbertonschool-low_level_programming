#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/luiscarvil/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libhbtn.so
export LD_PRELOAD=/tmp/libhbtn.so