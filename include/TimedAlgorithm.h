//
// Created by Rohan on 4/25/2020.
//

#ifndef UNTITLED1_TIMEDALGORITHM_H
#define UNTITLED1_TIMEDALGORITHM_H


#include "Algorithm.h"
#include "TimingContext.h"
#include "SprayRouter.h"

class TimedAlgorithm : public Algorithm
{
public:
    void executeAlgo();
protected:
    TimingContext timingContext;
};


#endif //UNTITLED1_TIMEDALGORITHM_H
