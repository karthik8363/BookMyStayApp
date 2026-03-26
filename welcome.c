import java.io.*;
import java.util.*;

/**
 * Reservation class (Serializable)
 */
class Reservation implements Serializable {
    private static final long serialVersionUID = 1L;
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
 * Room Inventory class (Serializable)
 */
class RoomInventory implements Serializable {
    private 
