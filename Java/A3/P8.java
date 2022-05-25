class A {
    void displayA() {
        System.out.println("Class A");
    }
}

class B extends A {
    void displayB() {
        System.out.println("Class B");
    }
}

class C extends A {
    void displayC() {
        System.out.println("Class C");
    }
}

public class P8 {
    public static void main(String[] args) {
        B o1 = new B();
        C o2 = new C();
        o1.displayB();
        o1.displayA();
        o2.displayC();
        o2.displayA();
    }
}
