#ifndef SYMBOLINFO_H
#define SYMBOLINFO_H

#include <string>

struct SymbolInfo {
    std::string base;
    std::string quote;
    std::string symbol;
    std::string id;
    std::string filename;
    int exchange = 0;
};

#endif // SYMBOLINFO_H
