import java.util.*;

/**
 * Reservation Domain Model
 */
class Reservation {
    private String reservationId;
    private String guestName;
    private String roomType;

    public Reservation(String reservationId, String guestName, String roomType) {
        this.reservationId = reservationId;
        this.guestName = guestName;
        this.roomType = roomType;
    }

    public String getReservationId() { return reservationId; }
    public String getGuestName() { return guestName; }
    public String getRoomType() { return roomType; }

    @Override
    public String toString() {
        return "ReservationID: " + reservationId + " | Guest: " + guestName + " | Room Type: " + roomType;
    }
}

/**
 * Thread-safe Inventory Service
 */
class RoomInventory {
    private Map<String, Integer> inventory;

    public
