// Programa que caclcule e imprima el salario semanala de un empleado a apartir de sus horas semanales trabajadas y de su salario por hora
import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception { 
        try(
            Scanner entrada= new Scanner(System.in)){
                double horasSemanales;
                double valorHora;
                double salarioSemanal;

                System.out.print("Ingrese las horas semanales trabajadas: ");
                horasSemanales = entrada.nextDouble();

                System.out.println("Ingrese el valor de la hora trabajada: ");
                valorHora = entrada.nextDouble();

                salarioSemanal = (horasSemanales * valorHora);
                System.out.println("Su salario semanal es : " + salarioSemanal);

            }
        
    }
}
