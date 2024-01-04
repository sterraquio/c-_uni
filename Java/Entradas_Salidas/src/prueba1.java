
import java.util.Scanner;
public class prueba1 {
    public static void main(String[] args) throws Exception{
        try (
        Scanner entrada1 = new Scanner(System.in)){
            int numero;

            System.out.print("Escriba el número: ");//Mensaje que se mostrara para que entre los datos
            numero = entrada1.nextInt(); //Donde se almacenará los datos y el .netx es para devolver el valor asignado en la variable entrada1

            System.out.println("Número: " + numero);

            double datesForDay = 40.0/30.0;
            System.out.println("Dates for day without simplify: " + datesForDay);

            int simplyDatesForDay = (int) datesForDay;
            System.out.println("Dates for day simply: "+ simplyDatesForDay);


        }
    }
}
