//
// Created by Rohan on 4/25/2020.
//

#include <future>
#include "../include/TimedAlgorithm.h"
#include "../include/TimeUtils.h"

void TimedAlgorithm::executeAlgo() {
    auto ftr = std::async( std::launch::async, [this](){
        TimingContext timingContext = this->timingContext;
        int delay = timingContext.getInitialDelay();
        TimeUtils::wait(delay);
        int interval = timingContext.getInterval();
        while (this->algoActive())
        {
            this->sendToRouter();
            TimeUtils::wait(interval);
        }
    });
}