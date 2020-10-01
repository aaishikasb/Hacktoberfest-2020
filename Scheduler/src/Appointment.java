import java.util.Date;
import java.text.ParseException;
import java.text.SimpleDateFormat;

public class Appointment {
	String desc;
	Date date;
	
	public Appointment (String desc, int d, int m, int y) throws ParseException {
		this.setDescription(desc);
		SimpleDateFormat date = new SimpleDateFormat("dd/MM/yyyy");
		this.setDate(date.parse(String.format("%d/%d/%d", d, m, y)));
	}
	
	//getters and setters
	public void setDescription(String s) {
		this.desc = s;
	}
	
	public String getDescription() {
		return this.desc;
	}
	
	public void setDate(java.util.Date date2) {
		this.date = date2;
	}
	
	public Date getDate() {
		return date;
	}
	
	//Checks if date passed is date of appointment
	public boolean occursOn(int year, int month, int day) throws ParseException {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("dd/MM/yyyy");
        Date date = simpleDateFormat.parse(String.format("%d/%d/%d", day, month, year));

        return this.getDate().equals(date);
	}    
	
	//For nicer printing 
	public String toString() {
		return String.format("Appointment: %s.", this.getDescription());
	}
}

