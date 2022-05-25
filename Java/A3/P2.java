class A {
    public void display() {
        System.out.println("Class A");
    }
}

class B extends A {
    @Override
    public void display() {
        System.out.println("Class B");
    }
}

public class P2 {
    public static void main(String[] args) {
        B o = new B();
        o.display();
    }
}
