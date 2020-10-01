import java.text.ParseException;

public class Daily extends Appointment {
    public Daily(String description, int day, int month, int year) throws ParseException {
        super(description, day, month, year);
    }
}