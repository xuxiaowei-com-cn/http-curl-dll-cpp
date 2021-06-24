// pch.cpp: 与预编译标头对应的源文件

#define BUILDING_LIBCURL // 解决：无法解析的外部符号 __imp__curl_easy_init

#include "pch.h"

// 当使用预编译的头时，需要使用此源文件，编译才能成功。
