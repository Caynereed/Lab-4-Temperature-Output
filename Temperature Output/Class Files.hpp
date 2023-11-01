
#ifndef Class_Files_hpp
#define Class_Files_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class TemperatureChart {
public:
    // Star Count
    void setstarCount (double getstarCount_);
    double getstarCount();
    void setTemperature (double getTemperature_);
    double getTemperature();
    
    
private:
    double getstarCount_;
    double getTemperature_;
    
};

#endif  // TEMPERATURE_CHART_HPP
