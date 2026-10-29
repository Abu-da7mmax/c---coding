#include <iostream>

class Stove{
    private:
        int temperature;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperatureU){
        if(temperatureU < 0){
            temperature = 0;
        }
        else if(temperatureU >= 10){
            temperature = 10;
        }
        else{
            temperature = temperatureU;
        }
    }
};

int main() {

    Stove stove;

    stove.setTemperature(-5);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}