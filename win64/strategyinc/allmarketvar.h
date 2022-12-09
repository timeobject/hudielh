#ifndef ALLMARKETVAR_H
#define ALLMARKETVAR_H

#include <string>
#include <map>
#include <vector>
#include "bar.h"

/// 全市场值
struct AllMarketVar {
    /// 全市场的涨跌幅
    std::map<std::string, double> period1_changes;
    std::map<std::string, double> period2_changes;
    /// 账户权益
    double equity = 0.0;
    /// 标记
    std::map<std::string, int> map_i_1, map_i_2;
    /// 标记（周期一内）
    std::map<std::string, int> map_period1_i_1, map_period1_i_2;
    double open_money_period_rate = 0.0;
};

#endif // ALLMARKETVAR_H
