#pragma once

#include <string>

const std::string DEFAULT_CONFIG = R"(version = 1
[global]
# override the location of Lossless Scaling
 dll ="/data/data/com.xodos/files/usr/share/lsfg-vk/Lossless.dll"

# [[game]] # example entry
# exe = "Game.exe"
#
# multiplier = 3
# flow_scale = 0.7
# performance_mode = true
# hdr_mode = false
#
# experimental_present_mode = "fifo"

[[game]] # default vkcube entry
exe = "vkcube"

multiplier = 4
performance_mode = true

[[game]] # default benchmark entry
exe = "benchmark"

multiplier = 4
performance_mode = false

[[game]] # override Genshin Impact
exe = "Genshin"

multiplier = 3

[[game]] # default benchmark entry
exe = "vkmark"

multiplier = 3
performance_mode = true

[[game]] # default benchmark entry
exe = "glmark2"

multiplier = 3
performance_mode = true

[[game]] # default benchmark entry
exe = "TestD3D"

multiplier = 4
performance_mode = true


)";
