#ifndef TRADETYPE_H
#define TRADETYPE_H

enum TradeType: unsigned int
{
    /// 开多
    openup,
    /// 开空
    opendown,
    /// 平多
    closeup,
    /// 平空
    closedown
};

#endif // TRADETYPE_H
