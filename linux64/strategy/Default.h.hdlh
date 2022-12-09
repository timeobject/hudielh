#ifndef HDLHDEFAULT_H
#define HDLHDEFAULT_H

#include "../strategyinc/strategybase.h"
#include "../strategyinc/converttime.h"

class HdlhDefault : public StrategyBase
{
public:
    /// 系统函数不可修改
    HdlhDefault() = default;
    void calfactor(const long long PERIOD) override;
    void on_open(const Bar *tick,
                        const Bar *period1,
                        const Bar *period2,
                        AllMarketVar &allmarketvar,
                        const BaseInfo &baseinfo,
                        const Hold *hold,
                        CarryData &carrydata) override;
    void on_close(const Bar *tick,
                        const Bar *period1,
                        const Bar *period2,
                        AllMarketVar &allmarketvar,
                        const BaseInfo &baseinfo,
                        Hold *hold,
                        CarryData &carrydata) override;
    void on_tradesuccess(Hold *hold, CarryData &carrydata, double tdPrice, double tdQuantity) override;
    bool radar(const Bar *tick,
                           const Bar *period1,
                           const Bar *period2,
                           AllMarketVar &allmarketvar,
                           const BaseInfo &baseinfo,
                           const Hold *hold,
                           CarryData &carrydata) override;
    long long getperiod1() override;
    long long getperiod2() override;
    double getAccountRisk() override;
    double getAccountRiskBackDown() override;
    double getTestBalance() override;
    int getHoldMax() override;
private:
    // 自定义函数可以在此处添加
};

#endif // HDLHDEFAULT_H
