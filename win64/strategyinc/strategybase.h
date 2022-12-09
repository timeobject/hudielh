#ifndef STRATEGYBASE_H
#define STRATEGYBASE_H

#include <cstring>
#include <map>
#include "bar.h"
#include "hold.h"
#include "dataprocess.h"
#include "baseinfo.h"
#include "carrydata.h"
#include "allmarketvar.h"

/// 秒
const long long SECOND = 1000;
/// 分钟
const long long MINUTE = SECOND * 60;
/// 小时
const long long HOUR = MINUTE * 60;
/// 天
const long long DAY = HOUR * 24;
/// 浮点比较精度
const double EPS = 1e-9;

class StrategyBase {
public:
    /// 系统函数不可修改
    StrategyBase() = default;
    virtual ~StrategyBase() = default;
    virtual void calfactor(const long long PERIOD) = 0;
    virtual void on_open(const Bar *tick,
                        const Bar *period1,
                        const Bar *period2,
                        AllMarketVar &allmarketvar,
                        const BaseInfo &baseinfo,
                        const Hold *hold,
                        CarryData &carrydata) = 0;
    virtual void on_close(const Bar *tick,
                        const Bar *period1,
                        const Bar *period2,
                        AllMarketVar &allmarketvar,
                        const BaseInfo &baseinfo,
                        Hold *hold,
                        CarryData &carrydata) = 0;
    virtual void on_tradesuccess(Hold *hold, CarryData &carrydata, double tdPrice, double tdQuantity) = 0;
    virtual bool radar(const Bar *tick,
                       const Bar *period1,
                       const Bar *period2,
                       AllMarketVar &allmarketvar,
                       const BaseInfo &baseinfo,
                       const Hold *hold,
                       CarryData &carrydata) = 0;
    virtual long long getperiod1() = 0;
    virtual long long getperiod2() = 0;
    virtual double getAccountRisk() = 0;
    virtual double getAccountRiskBackDown() = 0;
    virtual double getTestBalance() = 0;
    virtual int getHoldMax() = 0;
    /// 数据处理器
    DataProcess *data;
    /// 画线
    std::map<std::string, std::pair<double, long>> dashLine;
    std::map<std::string, std::pair<double, long>> solidLine;
};

#ifdef DLL_A
    #ifdef _MSC_VER
        #define CREATE_CLASS(cls) extern "C" __declspec(dllexport) cls* _stdcall create(char* name) {if(name)std::strcat(name, STRATEGY_NAME); return new cls();}
    #else
        #define CREATE_CLASS(cls) extern "C" cls *create(char* name) {if(name)std::strcat(name, STRATEGY_NAME); return new cls();}
    #endif
#endif

#endif // STRATEGYBASE_H
