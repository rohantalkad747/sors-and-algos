//
// Created by Rohan Talkad on 2020-05-19.
//

#include <vector>
#include "Order.h"
#include "Wave.h"

#ifndef UNTITLED1_BASKET_H
#define UNTITLED1_BASKET_H

#endif //UNTITLED1_BASKET_H

class Basket {
private:
    std::vector<std::string> symbols;
    std::vector<Wave> waves;
    int currentWave = 0;
public:
    const std::vector<std::string> &getSymbols() const {
        return symbols;
    }

    void setSymbols(const std::vector<std::string> &symbols) {
        Basket::symbols = symbols;
    }

    const std::vector<double> &getQuantities() const {
        return quantities;
    }

    void setQuantities(const std::vector<double> &quantities) {
        Basket::quantities = quantities;
    }

    const std::vector<OrderSide> &getSides() const {
        return sides;
    }

    void setSides(const std::vector<OrderSide> &sides) {
        Basket::sides = sides;
    }

    template<typename A>
    void executeWave(double percentage, A algo);

private:
    std::vector<double> quantities;
    std::vector<OrderSide> sides;
};