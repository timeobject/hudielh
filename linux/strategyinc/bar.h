#ifndef BAR_H
#define BAR_H

#include <cfloat>
#include <string>

/// Bar 不可修改
struct Bar {
    /// id
    std::string id;
    /// 开始时间
    long long startTime = 0;
    /// 交易时间
    long long tradeTime = 0;
    /// 同一时间索引
    unsigned int rcount = 1;
    /// A股ST
    bool isST = false;
    double open;
    double high;
    double low;
    double close;
    double amount;
    double volume;
    // 指标因子
    double atr = DBL_MAX;
    double boll_up = DBL_MAX, boll_mid = DBL_MAX, boll_down = DBL_MAX;
    double change = 0.0;
    double cr = DBL_MAX;
    double ema_1 = DBL_MAX, ema_2 = DBL_MAX, ema_3 = DBL_MAX, ema_4 = DBL_MAX, ema_5 = DBL_MAX, ema_6 = DBL_MAX;
    double kdj_k = DBL_MAX, kdj_d = DBL_MAX, kdj_j = DBL_MAX;
    double ma_1 = DBL_MAX, ma_2 = DBL_MAX, ma_3 = DBL_MAX, ma_4 = DBL_MAX, ma_5 = DBL_MAX, ma_6 = DBL_MAX;
    double macd_dif = DBL_MAX, macd_dea = DBL_MAX, macd_bar = DBL_MAX;
    double obv = DBL_MAX;
    double rsi = DBL_MAX;
    double rsv = DBL_MAX;
    double sdx = DBL_MAX;
    double sma_1 = DBL_MAX, sma_2 = DBL_MAX, sma_3 = DBL_MAX, sma_4 = DBL_MAX, sma_5 = DBL_MAX, sma_6 = DBL_MAX;
    double trix = DBL_MAX;
    double vr = DBL_MAX;
    double wr = DBL_MAX;
    // 便捷标记
    bool nowopen = false, nowclose = false;
    // 保留
    void *p;
    // 自定义指标因子
    bool b_1 = false, b_2 = false, b_3 = false, b_4 = false, b_5 = false, b_6 = false;
    double d_1 = DBL_MAX, d_2 = DBL_MAX, d_3 = DBL_MAX, d_4 = DBL_MAX, d_5 = DBL_MAX, d_6 = DBL_MAX;
    int i_1 = 0, i_2 = 0, i_3 = 0, i_4 = 0, i_5 = 0, i_6 = 0;
};

#endif // BAR_H
