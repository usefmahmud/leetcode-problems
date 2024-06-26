class ParkingSystem {
    int arr[3];
public:
    ParkingSystem(int big, int medium, int small) {
        arr[0] = big;
        arr[1] = medium;
        arr[2] = small;
    }
    
    bool addCar(int type) {
        if(arr[type - 1]){
            --arr[type - 1];
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */