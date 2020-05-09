#include "../include/log.h"
#include <cstdio>
#include <ctime>
#include <android/log.h>

void Log::vlog(LogLevel level, const char* tag, const char* text, va_list args) {
    __android_log_vprint(ANDROID_LOG_DEBUG, tag, text, args);
}