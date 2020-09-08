#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/luiscarvil/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/.so
export LD_PRELOAD=/tmp/random.so