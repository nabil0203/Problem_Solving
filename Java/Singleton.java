public class Singleton {

    private static Singleton a;

    private Singleton() {

    }

    public static Singleton getInstance() {
        if (a == null) {
            a = new Singleton();
        }
        return a;
    }

    public class Main {
        public static void main(String[] args) {
            Singleton s1 = Singleton.getInstance();
            Singleton s2 = Singleton.getInstance();
        }
    }
}