#include "converttime.h"

ConvertTime::ConvertTime()
{

}

struct tm ConvertTime::millisecondToLocalTime(long long timestamp)
{
    timestamp /= 1000;
    return *localtime((time_t *)&timestamp);
}

struct tm ConvertTime::millisecondToUtcTime(long long timestamp)
{
    timestamp /= 1000;
    return *gmtime((time_t *)&timestamp);
}
