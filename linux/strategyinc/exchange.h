#ifndef EXCHANGE_H
#define EXCHANGE_H

enum Exchange: unsigned int
{
    /// 币安
    binance   = 0x000001, // 1
    /// 期货
    futures   = 0x000010, // 16
    /// 沪深
    shsz      = 0x000100 // 256
};

#endif // EXCHANGE_H
