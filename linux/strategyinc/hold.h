#ifndef HOLD_H
#define HOLD_H

#include <string>
#include <atomic>
#include <vector>
#include <sstream>
#include <cfloat>
#include "tradetype.h"

class Hold {
public:
    Hold();
    void reset();
    /// 品种id
    std::string id;
    /// 关联品种id
    std::string relevanceid;
    /// 最后交易时间
    long long tradeTime;
    /// 交易类型
    TradeType tradeType;
    /// 持仓成本
    double price;
    /// 最新价格
    double lastprice;
    /// 持仓数量
    double quantity;
    /// 持仓盈亏%
    double profitratio;
    /// 开仓费率
    double feerateopen;
    /// 锁仓，不允许加仓
    bool lockBuy;
    /// 锁仓，不允许平仓
    bool lockSell;
    /// 表示持仓是否已经全部卖出
    bool finish;
    /// 镜像持仓
    bool mirror;
    /// 止盈止损字段
    double stop_loss, stop_profit;
    /// 自定义字段
    double d_1, d_2, d_3, d_4, d_5, d_6;
};

#endif // HOLD_H
