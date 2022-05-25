class A {
    A() {
        System.out.println("Constructor of Class A");
    }
}

class B extends A {
    B() {
        super();
        System.out.println("Constructor of Class B");
    }
}

public class P6 {
    public static void main(String[] args) {
        B o = new B();
    }
}
