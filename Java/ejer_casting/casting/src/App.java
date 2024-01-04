public class App {
    public static void main(String[] args) throws Exception {
        char c = 'z';
        System.out.println("char c: "+c);   
        int intc = (int) c;
        System.out.println("char c int: "+intc);

        int i = 250;
        System.out.println("i: "+i);
        long long_i = (long) i;
        System.out.println("i Long: "+long_i);
        short short_long_i =(short) long_i;
        System.out.println("i short: "+short_long_i);

        double d = 301.067;
        long long_d = (long) d;
        System.out.println("long d: " + long_d);

        int ñ = 100;
        float entero_ñ =(float)ñ;
        entero_ñ =+ 50000.66f;
        System.out.println("ñ alredy convert: "+entero_ñ);

        int j = (737*100);
        byte redux_j = (byte)j;
        System.out.println("redux_j its: "+ redux_j);

        double w = 298.638/25;
        long largue_w = (long)w;
        System.out.println("largue_w: "+largue_w);

    }
}
