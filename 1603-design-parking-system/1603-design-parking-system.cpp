class ParkingSystem {
    int parking_lot[3];
public:
    ParkingSystem(int big, int medium, int small) {
        parking_lot[0] = big;
        parking_lot[1] = medium;
        parking_lot[2] = small;
    }
    bool addCar(int carType) {
        --carType;
        // 0 big; 1 medium; 2 small
        if (parking_lot[carType] == 0) {
            return false;
        }
        --parking_lot[carType];
        return true;
    }
};
