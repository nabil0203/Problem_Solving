public interface Pizza {
    void toppings();

    void bun();
}

public class CtgPizza(){

    public void Sausage() {
        System.out.println("Amra Chatgaia, Amra SAUSAGE khai");
    }

    public void bread() {
        System.out.println("Amra Ruti diye Pizza banai");
    }

}

public class PizzaAdapter extends CtgPizza implements Pizza {
    @Override
    public void toppings() {
        this.Sausage();
    }

    @Override
    public void bun() {
        this.bread();
    }
}

public class Main {
    public static void main(String[] args) {

        Pizza P1 = new PizzaAdapter();

        P1.toppings();
        P1.bun();
    }

}