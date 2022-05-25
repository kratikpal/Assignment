class Vehicle {
    int fuelAmount;
    int capacity;
}

class Car extends Vehicle {
    Car() {
        fuelAmount = 100;
        capacity = 6;
    }

    void getInfo() {
        System.out.println("Fuel Amount = " + fuelAmount);
        System.out.println("Capacity = " + capacity);
    }
}

public class P7 {
    public static void main(String[] args) {
        Car o = new Car();
        o.getInfo();
    }
}
