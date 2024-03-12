class Solution {
public:
    std::vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double Fahrenheit = celsius * 1.80 + 32.00;
        std::vector<double> res;
        res.push_back(kelvin);
        res.push_back(Fahrenheit);
        return res;
    }
};
