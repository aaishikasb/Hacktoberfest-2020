import java.text.ParseException;

public class Monthly extends Appointment {
    public Monthly(String description, int day, int month, int year) throws ParseException {
        super(description, day, month, year);
    }
}