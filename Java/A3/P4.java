class Num {
    int n;

    Num() {
        n = 1;
    }

    Num(int x) {
        n = x;
    }

    void display() {
        System.out.println("Number is " + n);
    }
}

public class P4 {
    public static void main(String[] args) {
        Num o1 = new Num();
        Num o2 = new Num(4);
        o1.display();
        o2.display();
    }
}
