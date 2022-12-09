#ifndef DATAPROCESS_H
#define DATAPROCESS_H

#include <vector>
#include "bar.h"
#include "tradetype.h"
#include "symbolinfo.h"

class DataProcess {
public:
    /// 系统函数不可修改
    DataProcess() = default;
    virtual ~DataProcess() = default;
    /// 第一个Bar
    virtual Bar* begin() = 0;
    /// 下一个Bar
    virtual Bar* next() = 0;
    /// 第一个Bar，从末尾开始
    virtual Bar* rbegin() = 0;
    /// 下一个Bar，从末尾开始
    virtual Bar* rnext() = 0;
    /// 总共有多少个Bar
    virtual unsigned int size() = 0;
    /// 初始化
    virtual void init(void *period) = 0;
    /// 委托交易
    virtual void trade(TradeType tradeType, double price, double amount) = 0;
    /// 关联委托交易
    virtual void tradeRelevance(const SymbolInfo &symbolinfo, TradeType tradeType, double price, double amount) = 0;
    /* 系统指标 */
    /// ATR
    virtual void atr(unsigned int n) = 0;
    /// BOLL
    virtual void boll(unsigned int n) = 0;
    /// CR
    virtual void cr(unsigned int n) = 0;
    /// a，b交叉状态，上穿返回1,下穿返回2,否则返回0
    virtual int cross(const double last_a, const double last_b, const double a, const double b) = 0;
    /// x的动态平均（a为动态因子，必须小于1）
    virtual double dma(const double x, const double a, const double last_dma) = 0;
    /// n日指数平均
    virtual void ema(const double Bar::*r_member, double Bar::*w_member, const double n) = 0;
    /// 最高
    virtual double high(const double Bar::*member, const unsigned int n) = 0;
    /// n天内member最高到当前的周期数
    virtual int highbars(const double Bar::*member, const unsigned int n) = 0;
    /// KDJ
    virtual void kdj(unsigned int n) = 0;
    /// 最低
    virtual double low(const double Bar::*member, const unsigned int n) = 0;
    /// n天内member最低到当前的周期数
    virtual int lowbars(const double Bar::*member, const unsigned int n) = 0;
    /// n日平均
    virtual void ma(const double Bar::*r_member, double Bar::*w_member, const unsigned int n) = 0;
    /// MACD
    virtual void macd(double _short, double _dea, double _long) = 0;
    /// OBV
    virtual void obv() = 0;
    /// RSI
    virtual void rsi(unsigned int n) = 0;
    /// RSV
    virtual void rsv(unsigned int n) = 0;
    /// n日加权平均，m为权重，n必须大于m
    virtual void sma(const double Bar::*r_member, double Bar::*w_member, const double n, const double m) = 0;
    /// 归一化标准差
    virtual void sdx(const double Bar::*r_member, const unsigned int n) = 0;
    /// TRIX
    virtual void trix(unsigned int n) = 0;
    /// VR
    virtual void vr(unsigned int n) = 0;
    /// WR
    virtual void wr(unsigned int n) = 0;
};

#endif // DATAPROCESS_H
