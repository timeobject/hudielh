#ifndef BASEINFO_H
#define BASEINFO_H

#include <cfloat>
#include <string>
#include <map>
#include "symbolinfo.h"

class Focus {
public:
    double& operator[](const std::string &k)
    {
        return this->value[k];
    }
    const std::map<std::string, double>::iterator begin()
    {
        return this->value.begin();
    }
    const std::map<std::string, double>::iterator end()
    {
        return this->value.end();
    }
    bool exist(const std::string &k)
    {
        return this->value.find(k) != this->value.end();
    }
private:
    std::map<std::string, double> value;
};

class BaseInfo {
public:
    BaseInfo();
    SymbolInfo symbolinfo;
    ///申买价一
    double bidPrice1;
    ///申买价二
    double bidPrice2;
    ///申买价三
    double bidPrice3;
    ///申买价四
    double bidPrice4;
    ///申买价五
    double bidPrice5;
    ///申买量一
    double bidVolume1;
    ///申买量二
    double bidVolume2;
    ///申买量三
    double bidVolume3;
    ///申买量四
    double bidVolume4;
    ///申买量五
    double bidVolume5;
    ///申卖价一
    double askPrice1;
    ///申卖价二
    double askPrice2;
    ///申卖价三
    double askPrice3;
    ///申卖价四
    double askPrice4;
    ///申卖价五
    double askPrice5;
    ///申卖量一
    double askVolume1;
    ///申卖量二
    double askVolume2;
    ///申卖量三
    double askVolume3;
    ///申卖量四
    double askVolume4;
    ///申卖量五
    double askVolume5;
    /// 重点关注
    Focus *focus;
};

#endif // BASEINFO_H
