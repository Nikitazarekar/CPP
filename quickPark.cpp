#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main()
 {
    int totalSlots = 5;                     // Total parking slots
    int slots[totalSlots] = {0};            // 0 = free, 1 = occupied
    string vehicleNo[totalSlots];           // Vehicle number for each slot
    time_t entryTime[totalSlots];           // Entry time for each slot

    int ticketNo = 100;                     // Starting ticket number
    int choice;

    do {
        cout << "\n--- Smart Parking System ---\n";
        cout << "1. Park Vehicle\n";
        cout << "2. Remove Vehicle (Exit & Billing)\n";
        cout << "3. Display Parking Status\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            // --------- Park Vehicle ---------
            case 1: {
                int freeSlot = -1;
                for(int i=0; i<totalSlots; i++) {
                    if(slots[i]==0)
					 { 
					 freeSlot = i;
					  break;
					 }
                }

                if(freeSlot == -1) {
                    cout << "Parking full!\n";
                } else {
                    cout << "Enter Vehicle Number: ";
                    cin >> vehicleNo[freeSlot];

                    // Record entry time
                    entryTime[freeSlot] = time(0);
                    slots[freeSlot] = 1;

                    cout << "Ticket No: " << ticketNo++ << ", Slot No: " << freeSlot+1 << "\n";
                    cout << "Entry Time: " << ctime(&entryTime[freeSlot]); // readable time
                }
                break;
            }

            // --------- Remove Vehicle & Billing ---------
            case 2: {
                int slot;
                cout << "Enter Slot No to remove vehicle: ";
                cin >> slot;
                slot--; // Convert to 0-based index

                if(slot<0 || slot>=totalSlots) {
                    cout << "Invalid slot number!\n";
                }
                else if(slots[slot]==1) {
                    time_t exitTime = time(0);
                    double duration = difftime(exitTime, entryTime[slot])/3600; // hours
                    if(duration < 1) duration = 1; // minimum 1 hour
                    double rate = 20;              // INR per hour
                    double bill = rate * duration;

                    cout << "\n--- Receipt ---\n";
                    cout << "Vehicle Number: " << vehicleNo[slot] << "\n";
                    cout << "Slot Number   : " << slot+1 << "\n";
                    cout << "Hours Parked  : " << ceil(duration) << "\n";
                    cout << "Bill Amount   : INR " << bill << "\n";
                    cout << "Entry Time    : " << ctime(&entryTime[slot]);
                    cout << "Exit Time     : " << ctime(&exitTime);
                    cout << "----------------\n";

                    slots[slot] = 0; // free slot
                } else {
                    cout << "Slot is already empty.\n";
                }
                break;
            }

            // --------- Display Parking Status ---------
            case 3: {
                cout << "\nSlot\tStatus\t\tVehicle No\tEntry Time\n";
                for(int i=0; i<totalSlots; i++) {
                    cout << i+1 << "\t" << (slots[i]==1 ? "Occupied" : "Free") << "\t";
                    if(slots[i]==1) {
                        cout << vehicleNo[i] << "\t\t" << ctime(&entryTime[i]);
                    } else {
                        cout << "-\n";
                    }
                }
                break;
            }

            case 0:
                cout << "Exiting... Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 0);

    return 0;
}
