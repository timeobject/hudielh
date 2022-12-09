#include "hold.h"

Hold::Hold()
{
    this->reset();
}

void Hold::reset()
{
    tradeTime = 0;
    quantity = price = profitratio = feerateopen = lastprice = 0.0;
    lockSell = false;
    lockBuy = false;
    finish = true;
    stop_loss = stop_profit = DBL_MAX;
    d_1 = d_2 = d_3 = d_4 = d_5 = d_6 = 0.0;
}
