//
// Created by Rohan Talkad on 2020-05-19.
//

#ifndef UNTITLED1_BASKET_H
#define UNTITLED1_BASKET_H

#include <vector>
#include "Wave.h"
#include "Order.h"


class Basket
{
private:
    std::vector<std::string> symbols;
    std::string              accountId;
    int                      basketId;
    int                      currentWave = 0;
    bool                     waveInProgress = false;
    std::vector<double>    quantities;
    std::vector<OrderSide> sides;
    std::vector<OrderType> orderTypes;

public:

    /**
    * @param symbols
    * @param accountId
    * @param basketId
    * @param quantities
    * @param sides
    */
    Basket(const std::vector<std::string> &symbols, const std::string &accountId, int basketId,
           const std::vector<int> &quantities, const std::vector<OrderSide> &sides) : symbols(symbols),
                                                                                      accountId(accountId),
                                                                                      basketId(basketId),
                                                                                      quantities(quantities),
                                                                                      sides(sides)
    {}

    const std::vector<OrderType> &getOrderTypes() const
    {
        return orderTypes;
    }

    void setOrderTypes(const std::vector<OrderType> &orderTypes)
    {
        Basket::orderTypes = orderTypes;
    }

    int getBasketId() const
    {
        return basketId;
    }

    void setBasketId(int basketId)
    {
        Basket::basketId = basketId;
    }

    int getCurrentWave() const
    {
        return currentWave;
    }

    const std::vector<std::string> &getSymbols() const
    {
        return symbols;
    }

    void setNewWaveStatus()
    {
        currentWave++;
        waveInProgress = true;
    }

    void waveExecuted()
    {
        waveInProgress = false;
    }

    getWaveStatus()
    {
        return waveInProgress;
    }

    void setSymbols(const std::vector<std::string> &symbols)
    {
        Basket::symbols = symbols;
    }

    const std::vector<double> &getQuantities() const
    {
        return quantities;
    }

    void setQuantities(const std::vector<double> &quantities)
    {
        Basket::quantities = quantities;
    }

    const std::vector<OrderSide> &getSides() const
    {
        return sides;
    }

    void setSides(const std::vector<OrderSide> &sides)
    {
        Basket::sides = sides;
    }
};

#endif //UNTITLED1_BASKET_H

