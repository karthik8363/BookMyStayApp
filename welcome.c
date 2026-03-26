import java.util.*;

class HotelSystem {
    // HashSet ensures uniqueness (No double-booking a room ID)
    private Set<Integer> bookedRooms = new HashSet<>();
    // Queue ensures fair request handling (FIFO)
    private Queue<String> bookingRequests = new LinkedList<>();

    public void addRequest(String guestName) {
        bookingRequests.add(guestName);
        System.out.println("Request added for: " + guestName);
    }

    public void processBooking(int roomId) {
        if (bookingRequests.isEmpty()) {
            System.out.println("No pending requests.");
            return;
        }

        if (bookedRooms.contains(roomId)) {
            System.out.println("Error: Room " + roomId + " is already booked!");
        } else {
            String guest = bookingRequests.poll(); // FIFO: Get the first person in line
            bookedRooms.add(roomId);
            System.out.println("Success: Room " + roomId + " booked for " + guest);
        }
    }
}

public class Main {
    public static void main(String[] args) {
        HotelSystem hotel = new HotelSystem();

        // 1. Fair Request Handling (FIFO)
        hotel.addRequest("Alice");
        hotel.addRequest("Bob");

        // 2. Real-time Inventory & Uniqueness Enforcement
        hotel.processBooking(101); // Alice gets 101
        hotel.processBooking(101); // Bob tries 101 -> Fails (Double-booking prevention)
        hotel.processBooking(102); // Bob gets 102
    }
}
