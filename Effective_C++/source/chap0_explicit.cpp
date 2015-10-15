# include <iostream>

class Car {
public:
    Car(int price = 10000) {
        std::cout << "In Car's default constructor without explicit" << std::endl;
    };
};

class Bike {
public:
    // explicit 禁止编译器执行非预期（往往也不被期望）的类型转换；
    explicit Bike(int price = 100) {
        std::cout << "In Bike's default constructor with explicit" << std::endl;
    };
};

class Plane {
public:
    explicit Plane(int price) {
        std::cout << "In Plane's constructor(not default) with explicit" << std::endl;
    };
};

void buy_car(Car onecar) {
    std::cout << "Buy one car.." << std::endl;
}

void buy_bike(Bike onebike) {
    std::cout << "Buy one bike.." << std::endl;
}

void buy_plane(Plane onePlane) {
    std::cout << "Buy one plane.." << std::endl;
}

int main() {
    // Buy Cars
    Car car_default;         // Default构造函数；
    Car car_BMW(200000);
    buy_car(car_BMW);        // 正常的调用；
    buy_car(200000);         // 这里有隐式类型转换，根据int 200000建立了一个Car对象。

    // Buy bikes
    Bike bike_default;
    Bike bike_fengh(200);
    buy_bike(bike_fengh);    // 正常调用；
    // buy_bike(200);        // 编译不通过，没有int到Bike的类型转换；

    // Buy planes
    // Plane plane_default;  // 没有default构造函数；
    Plane one_plane(50000);
    buy_plane(one_plane);    // 正常调用；
    // buy_plane(50000);     // 编译不通过，没有int到Plane的类型转换；
}
