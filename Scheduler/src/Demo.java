import java.text.ParseException;
import java.util.Scanner;


public class Demo {
	public static void main (String args[]) throws ParseException {
		Scanner sc = new Scanner (System.in);
		//Date to check against
		int day;
		int month;
		int year;
		
		System.out.println("Enter date to be checked in DD/MM/YYYY format");
		
		System.out.println("Enter day");
		day = sc.nextInt();
		System.out.println("Enter month number");
		month = sc.nextInt();
		System.out.println("Enter year");
		year = sc.nextInt();
		
		
		String[] m = {"January", "February", "March", "April", "June",
				"July", "August", "September", "October", "November", 
				"December"};
		
 		Appointment [] app = new Appointment[5];
		
 		//Preset appointments
		app[0] = new Onetime("Root Canal", 06, 02, 2020);
		app[1] = new Monthly("Cleaning", 07, 02, 2020);
		app[2] = new Monthly("Braces", 03, 01, 2022);
		app[3] = new Daily("Checkup", 06, 02, 2020);
		app[4] = new Daily("Checkup", 02, 02, 2020);
		
		System.out.println("Appointments on " + day + " " + m[month - 1]
				+ " " + year);
		
		//Iterating through all appointments and printing all that occur today
		for (Appointment i: app) {
			if (i.occursOn(year, month, day)) {
				System.out.println(i.toString());
			}
		}
	}

}
