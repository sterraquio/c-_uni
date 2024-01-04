// Hacer un programa que calcule e imprima la suma de 3 calificaciones
import java.util.Scanner;
public class prueba2 {
    public static void main(String[] args) throws Exception {
        try (Scanner notas = new Scanner(System.in)){
            double nota1;
            double nota2;
            double nota3;

            System.out.print("Primera nota: ");
            nota1 = notas.nextDouble();
            System.out.print("Segunda nota: ");
            nota2 = notas.nextDouble();
            System.out.print("Tercera nota: ");
            nota3 = notas.nextDouble();

            System.out.println(nota1 + nota2 + nota3);
        }
    }
}
