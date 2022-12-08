#ifndef CONVERTTIME_H
#define CONVERTTIME_H

#include <ctime>

class ConvertTime {
public:
    ConvertTime();
    static struct tm millisecondToUtcTime(long long timestamp);
    static struct tm millisecondToLocalTime(long long timestamp);
};

#endif // CONVERTTIME_H
