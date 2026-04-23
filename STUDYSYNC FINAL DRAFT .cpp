#include <iostream>
using namespace std;

class StudySync {
private:
    string currentUser;

public:
    bool login() {
        string username, pass;

        cout << "--- LOGIN ---\n";
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> pass;

        if (username == "himasai" && pass == "himasai2026") {
            currentUser = "Himasai";
        }
        else if (username == "charishma" && pass == "charishma26") {
            currentUser = "Charishma";
        }
        else if (username == "akshara" && pass == "akshara2026") {
            currentUser = "Akshara";
        }
        else {
            cout << "Invalid Credentials!\n";
            return false;
        }

        cout << "Login Successful!\n";
        return true;
    }

    void getResources() {
        int subject;

        cout << "\nSelect Subject:\n";
        cout << "1. OOPS (C++)\n2. Maths\n3. Physics\n";
        cout << "Enter choice: ";
        cin >> subject;

        cout << "\n--- RESOURCES ---\n";

        switch(subject) {
            case 1: cout << "OOPS Materials\n"; break;
            case 2: cout << "Maths Materials\n"; break;
            case 3: cout << "Physics Materials\n"; break;
            default: cout << "Invalid subject!\n";
        }
    }

    void checkAttendance() {
        cout << "\n--- ATTENDANCE ---\n";

        if (currentUser == "Himasai")
            cout << "OOPS: 93.3%\nMaths: 92.8%\nPhysics: 88.9%\n";
        else if (currentUser == "Charishma")
            cout << "OOPS: 86.7%\nMaths: 82.1%\nPhysics: 85.2%\n";
        else if (currentUser == "Akshara")
            cout << "OOPS: 93.3%\nMaths:96.4%\nPhysics:92.6%\n";
    }

    void showMarks() {
        cout << "\n--- MARKS & GRADES ---\n";

        if (currentUser == "Himasai")
            cout << "OOPS: 	45/50\nMaths: 46/50\nPhysics: 41/40\n";
        else if (currentUser == "Charishma")
            cout << "OOPS: 	39/50\nMaths: 44/50\nPhysics: 37/50\n";
        else if (currentUser == "Akshara")
            cout << "OOPS: 	44/50\nMaths:49/50\nPhysics: 46/50\n";
    }

  
    void showWHATINMESS() {
        cout << "\n--- 7 WHAT IN MESS ---\n";

        cout << "\nDay 1 MONDAY:\nBreakfast: Oatmeal\nLunch: Chicken/Tofu\nDinner: Salmon/Tempeh\n";
        cout << "\nDay 2 TUESDAY:\nBreakfast: Eggs\nLunch: Lentils\nDinner: Stir fry\n";
        cout << "\nDay 3 WEDNESDAY:\nBreakfast: Smoothie\nLunch: Sandwich\nDinner: Patties\n";
        cout << "\nDay 4 THURSDAY:\nBreakfast: Chia pudding\nLunch: Chicken\nDinner: Zoodles\n";
        cout << "\nDay 5 FRIDAY:\nBreakfast: Pancakes\nLunch: Bowl\nDinner: Roasted meal\n";
        cout << "\nDay 6 SATURDAY:\nBreakfast: Omelet\nLunch: Fish\nDinner: Chili\n";
        cout << "\nDay 7 SUNDAY:\nBreakfast: Cottage cheese\nLunch: Pasta\nDinner: Paneer/Fish\n";
    }

    void showClubs() {
        cout << "\n--- SRM KTR CLUBS ---\n";
        cout << "\n1. Cherry+ Network\n";
        cout << "\n2. SRM ACM Student Chapter\n";
        cout << "\n3. Coding Ninjas 10X SRM\n";
        cout << "\n4. SRM Team Robocon\n";
        cout << "\n5. E-Cell SRMIST\n";
    }

    void showTimetable() {
        cout << "\n--- TIMETABLE ---\n";
        cout << "Monday {DO - 1}: OOPS | Maths | Physics\n";
        cout << "Tuesday{DO - 2}: Maths | Physics | OOPS\n";
        cout << "Wednesday{DO - 3}: Physics | OOPS | Maths\n";
        cout << "Thursday{DO - 4}: OOPS | Lab | Maths\n";
        cout << "Friday{DO - 5}: Maths | Physics | Lab\n";
    }

  
    void showUniversityAddress() {
        cout << "\n--- UNIVERSITY ADDRESS ---\n";
        cout << "SRM Nagar, Kattankulathur\n";
        cout << "Chengalpattu District\n";
        cout << "Tamil Nadu - 603 203\n";
    }

    void showTeamInfo() {
        cout << "\n--- TEAM DETAILS ---\n";

        cout << "\nHimasai Gandham\n";
        cout << "Backend Developer\n";
        cout << "Handled server-side logic\n";

        cout << "\nCharishma\n";
        cout << "UML Designer\n";
        cout << "UML diagrams & documentation\n";

        cout << "\nAkshara Sinha\n";
        cout << "Co-Developer\n";
        cout << "Collaborated on front-end  and back-end development\n";
    }
};

int main() {
    StudySync app;
    int choice;

    if (!app.login()) {
        cout << "Access Denied!\n";
        return 0;
    }

    do {
        cout << "\n--- STUDY SYNC MENU ---\n";
        cout << "1. Get Resources\n";
        cout << "2. Check Attendance\n";
        cout << "3. Marks & Grades\n";
        cout << "4. WHAT IN MESS\n";
        cout << "5. University Clubs\n";
        cout << "6. Timetable\n";
        cout << "7. University Address\n";
        cout << "8. Team Info\n";
        cout << "9. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: app.getResources(); break;
            case 2: app.checkAttendance(); break;
            case 3: app.showMarks(); break;
            case 4: app.showWHATINMESS(); break; // FIXED
            case 5: app.showClubs(); break;
            case 6: app.showTimetable(); break;
            case 7: app.showUniversityAddress(); break; // NEW
            case 8: app.showTeamInfo(); break; // NEW
            case 9: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while(choice != 9);

    return 0;
}
