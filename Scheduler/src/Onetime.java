import java.text.ParseException;

public class Onetime extends Appointment {
    public Onetime(String description, int day, int month, int year) throws ParseException {
        super(description, day, month, year);
    }
}