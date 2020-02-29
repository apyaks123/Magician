#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iterator>
#include <vector>
#include <string>
#include <functional>


using namespace std;
int schedulecount;
int waitcount;
int counts;
int customerPickedMagician[20] = { 0,1,2 };
int customerPickedHoliday[20] = { 0,1,2 };
string Magicians[20] = { "Dennis Kyriakos", "Dan Chan", "Dorian Rhodell", "Ryan Kane", "Alan", "Glen Michelette","Mark Robinson", "Sebastian Boswell","Gabriel Holmes", "Heather Rogers" };
string Holidays[20] = { "Independence Day", "Labor Day" ,"Columbus Day", "Veterans Day", "Thanksgiving Day", "Christmas Day",  "President's Day","New Year's Day","MLK Day","Memorial Day" };
vector <string> xCustomer(20);
vector <string> xMagichian(20);
vector <string> xHoliday(20);
vector <string> wCustomer(20);
vector <string> wMagichian(20);
vector <string> wHoliday(20);

string customer;
int continu[200];
int wait[200];
vector <string> cCustomer(20);
vector <string> cMagichian(20);
vector <string> cHoliday(20);
vector<int>::iterator it;
int qu;



// local variables as a global variables for switch cases;
int a, b, c, d, e, f, g, h, i, jo;                                                            // local variables for schedule
int a0, b0, c0, d0, e0, f0, g0, h0, i0, ja;                                                 // local variables for schedule
int a1, b1, c1, d1, e1, f1, g1, h1, i1, jb;                                       // holiday3
int a2, b2, c2, d2, e2, f2, g2, h2, i2, jc;                                       // holiday5
int a3, b3, c3, d3, e3, f3, g3, h3, i3, jd;                                       // holiday4
int a4, b4, c4, d4, e4, f4, g4, h4, i4, je;                                       // holiday3
int a5, b5, c5, d5, e5, f5, g5, h5, i5, jf;                                       // holiday3
int a6, b6, c6, d6, e6, f6, g6, h6, i6, jg;                                       // holiday3
int a7, b7, c7, d7, e7, f7, g7, h7, i7, jh;                                       // holiday3
int a8, b8, c8, d8, e8, f8, g8, h8, i8, ji;                                       // holiday3





// Function prototype
void menu(int, int, int);
void scheduleHoliday(int, int, int);
void cancelSchedule(int, int);
int signup();
void status();
void quit();
void dropout();


// Main Function

int main() {

    menu(schedulecount, waitcount, counts);
    return 0;


}

void menu(int waitcount, int schedulecount, int counts) {


    int i;
    int j;
    cout << "======================================================================" << endl;
    cout << "--------Welcome to Holiday and Magician selecting application--------" << endl;
    cout << "Please enter 0 to continue to view menu option.";
    cout << endl;
    cout << "Please enter 1 to quit option.";
    cout << endl;
    cout << "======================================================================" << endl;

    cin >> i;
    switch (i)
    {
        case 0:
        cout << "Please enter 0 to schedule a holiday with a magician." << endl;
        cout << "Please enter 1 to cancel a booking with a magician." << endl;
        cout << "Please enter 2 to sign up with a new magician" << endl;
        cout << "Please enter 3 to drop out the magician from the agency." << endl;
        cout << "Please enter 4 to view the status." << endl;
        cout << "Please enter 5 to quit the program." << endl;

        cin >> j;
        switch (j) {
        case 0:
            scheduleHoliday(schedulecount, waitcount, counts);
            break;
        case 1:
            cancelSchedule(waitcount, schedulecount);
            break;
        case 2:
            signup();
            break;
        case 3:
            break;
        case 4:
            status();
            break;
        case 5:
            quit();
        default:
            cout << "Please enter value from 0 to 5 and try again. Thank You!!!" << endl;
            break;
        }
        break;
        case 1:
             quit();
            break;
        default:
            menu(schedulecount, waitcount, counts);
            break;
    }





}


void scheduleHoliday(int waitcount, int schedulecount, int counts) {



    cout << "======================================================================" << endl;
    cout << "Please enter the name of the customer: " << endl;
    cout << "======================================================================" << endl;
    cin >> customer;
    cout << endl;
    cout << "======================================================================" << endl;
    cout << Holidays[0] << ": Please enter 0 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << Holidays[1] << ": Please enter 1 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << Holidays[2] << ": Please enter 2 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << Holidays[3] << ": Please enter 3 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << Holidays[4] << ": Please enter 4 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << Holidays[5] << ": Please enter 5 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << Holidays[6] << ": Please enter 6 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << Holidays[7] << ": Please enter 7 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << Holidays[8] << ": Please enter 8 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << Holidays[9] << ": Please enter 9 to see which magician is available.";
    cout << endl;
    cout << endl;
    cout << "======================================================================" << endl;

    cin >> customerPickedHoliday[20];


    // Outer Switch
    switch (customerPickedHoliday[20]) {
    case 0:
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[20];

        switch (customerPickedMagician[20]) {
        case 0:
            if ((a == 0) & (a < 1)) {
                schedulecount++;
                a++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[0] = customer;
                xHoliday[0] = "Independence Day";
                xMagichian[0] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[0] << "   Holidays: " << xHoliday[0] << "    Magician:" << xMagichian[0] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a == 1 & a != 2)
            {
                a++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[0] = customer;
                wHoliday[0] = "Independence Day";
                wMagichian[0] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[0] << "   Holidays: " << wHoliday[0] << "    Magician:" << wMagichian[0] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a = 2 || a > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }




            break;

        case 1:





            if ((b == 0) & (b < 1)) {
                schedulecount++;
                b++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[1] = customer;
                xHoliday[1] = "Independence Day";
                xMagichian[1] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[1] << "   Holidays: " << xHoliday[1] << "    Magician:" << xMagichian[1] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b == 1 & b != 2)
            {
                b++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[1] = customer;
                wHoliday[1] = "Independence Day";
                wMagichian[1] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[1] << "   Holidays: " << wHoliday[1] << "    Magician:" << wMagichian[1] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b = 2 || b > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 2:



            if ((c == 0) & (c < 1)) {
                schedulecount++;
                c++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[2] = customer;
                xHoliday[2] = "Independence Day";
                xMagichian[2] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[2] << "   Holidays: " << xHoliday[2] << "    Magician:" << xMagichian[2] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c == 1 & c != 2)
            {
                c++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[2] = customer;
                wHoliday[2] = "Independence Day";
                wMagichian[2] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[2] << "   Holidays: " << wHoliday[2] << "    Magician:" << wMagichian[2] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c = 2 || c > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }












            break;



        case 3:





            if ((d == 0) & (d < 1)) {
                schedulecount++;
                d++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[3] = customer;
                xHoliday[3] = "Independence Day";
                xMagichian[3] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[3] << "   Holidays: " << xHoliday[3] << "    Magician:" << xMagichian[3] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d == 1 & d != 2)
            {
                d++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[3] = customer;
                wHoliday[3] = "Independence Day";
                wMagichian[3] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[3] << "   Holidays: " << wHoliday[3] << "    Magician:" << wMagichian[3] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d = 2 || d > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }














            break;










        case 4:




            if ((e == 0) & (e < 1)) {
                schedulecount++;
                e++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[4] = customer;
                xHoliday[4] = "Independence Day";
                xMagichian[4] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[4] << "   Holidays: " << xHoliday[4] << "    Magician:" << xMagichian[4] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e == 1 & e != 2)
            {
                e++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[4] = customer;
                wHoliday[4] = "Independence Day";
                wMagichian[4] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[4] << "   Holidays: " << wHoliday[4] << "    Magician:" << wMagichian[4] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e = 2 || e > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }




            break;












        default:
            cout << "Please enter digit from 0-9. Since you did not follow this you would be directed directly to main menu." << endl;
            menu(schedulecount, waitcount, counts);
            break;




        }











        break;
    case 1:


        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[20];

        switch (customerPickedMagician[20]) {




        case 0:




            if ((a0 == 0) & (a0 < 1)) {
                schedulecount++;
                a0++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[10] = customer;
                xHoliday[10] = "Labor Day";
                xMagichian[10] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[10] << "   Holidays: " << xHoliday[10] << "    Magician:" << xMagichian[10] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a0 == 1 & a0 != 2)
            {
                a0++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[10] = customer;
                wHoliday[10] = "Labor Day";
                wMagichian[10] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[10] << "   Holidays: " << wHoliday[10] << "    Magician:" << wMagichian[10] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a0 = 2 || a0 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





















            break;





        case 1:


            if ((b0 == 0) & (b0 < 1)) {
                schedulecount++;
                b0++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[11] = customer;
                xHoliday[11] = "Labor Day";
                xMagichian[11] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[11] << "   Holidays: " << xHoliday[11] << "    Magician:" << xMagichian[11] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b0 == 1 & b0 != 2)
            {
                b0++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[11] = customer;
                wHoliday[11] = "Labor Day";
                wMagichian[11] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[11] << "   Holidays: " << wHoliday[11] << "    Magician:" << wMagichian[11] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b0 = 2 || b0 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





            break;


        case 2:


            if ((c0 == 0) & (c0 < 1)) {
                schedulecount++;
                c0++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[12] = customer;
                xHoliday[12] = "Labor Day";
                xMagichian[12] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[12] << "   Holidays: " << xHoliday[12] << "    Magician:" << xMagichian[12] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c0 == 1 & c0 != 2)
            {
                c0++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[12] = customer;
                wHoliday[12] = "Labor Day";
                wMagichian[12] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[12] << "   Holidays: " << wHoliday[12] << "    Magician:" << wMagichian[12] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c0 = 2 || c0 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 3:



            if ((d0 == 0) & (d0 < 1)) {
                schedulecount++;
                d0++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[13] = customer;
                xHoliday[13] = "Labor Day";
                xMagichian[13] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[13] << "   Holidays: " << xHoliday[13] << "    Magician:" << xMagichian[13] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d0 == 1 & d0 != 2)
            {
                d0++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[13] = customer;
                wHoliday[13] = "Labor Day";
                wMagichian[13] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[13] << "   Holidays: " << wHoliday[13] << "    Magician:" << wMagichian[13] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d0 = 2 || d0 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }


            break;




        case 4:

            if ((e0 == 0) & (e0 < 1)) {
                schedulecount++;
                e0++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[14] = customer;
                xHoliday[14] = "Labor Day";
                xMagichian[14] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[14] << "   Holidays: " << xHoliday[14] << "    Magician:" << xMagichian[14] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e0 == 1 & e0 != 2)
            {
                e0++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[14] = customer;
                wHoliday[14] = "Labor Day";
                wMagichian[14] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[14] << "   Holidays: " << wHoliday[14] << "    Magician:" << wMagichian[14] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[10];

                if (wait[10] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e0 = 2 || e0 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }






            break;












        default:
            break;







        }



















        break;







    case 2:




        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[20];

        switch (customerPickedMagician[20]) {




        case 0:




            if ((a1 == 0) & (a1 < 1)) {
                schedulecount++;
                a1++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[20] = customer;
                xHoliday[20] = "Columbus Day";
                xMagichian[20] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[20] << "   Holidays: " << xHoliday[20] << "    Magician:" << xMagichian[20] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[20];
                if (continu[20] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a1 == 1 & a1 != 2)
            {
                a1++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[20] = customer;
                wHoliday[20] = "Labor Day";
                wMagichian[20] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[20] << "   Holidays: " << wHoliday[20] << "    Magician:" << wMagichian[20] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[20];

                if (wait[20] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a1 = 2 || a1 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





















            break;





        case 1:


            if ((b1 == 0) & (b1 < 1)) {
                schedulecount++;
                b1++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[21] = customer;
                xHoliday[21] = "Labor Day";
                xMagichian[21] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[21] << "   Holidays: " << xHoliday[21] << "    Magician:" << xMagichian[21] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[20];
                if (continu[20] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b1 == 1 & b1 != 2)
            {
                b1++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[21] = customer;
                wHoliday[21] = "Labor Day";
                wMagichian[21] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[21] << "   Holidays: " << wHoliday[21] << "    Magician:" << wMagichian[21] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[20];

                if (wait[20] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b1 = 2 || b1 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





            break;


        case 2:


            if ((c1 == 0) & (c1 < 1)) {
                schedulecount++;
                c1++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[22] = customer;
                xHoliday[22] = "Labor Day";
                xMagichian[22] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[22] << "   Holidays: " << xHoliday[22] << "    Magician:" << xMagichian[22] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[20];
                if (continu[20] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c1 == 1 & c1 != 2)
            {
                c1++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[22] = customer;
                wHoliday[22] = "Labor Day";
                wMagichian[22] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[22] << "   Holidays: " << wHoliday[22] << "    Magician:" << wMagichian[22] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[20];

                if (wait[20] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c1 = 2 || c1 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 3:



            if ((d1 == 0) & (d1 < 1)) {
                schedulecount++;
                d1++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[23] = customer;
                xHoliday[23] = "Labor Day";
                xMagichian[23] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[23] << "   Holidays: " << xHoliday[23] << "    Magician:" << xMagichian[23] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[20];
                if (continu[20] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d1 == 1 & d1 != 2)
            {
                d1++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[23] = customer;
                wHoliday[23] = "Labor Day";
                wMagichian[23] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[23] << "   Holidays: " << wHoliday[23] << "    Magician:" << wMagichian[23] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[20];

                if (wait[20] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d1 = 2 || d1 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }


            break;




        case 4:

            if ((e1 == 0) & (e1 < 1)) {
                schedulecount++;
                e1++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[24] = customer;
                xHoliday[24] = "Labor Day";
                xMagichian[24] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[24] << "   Holidays: " << xHoliday[24] << "    Magician:" << xMagichian[24] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[20];
                if (continu[20] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e1 == 1 & e1 != 2)
            {
                e1++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[24] = customer;
                wHoliday[24] = "Labor Day";
                wMagichian[24] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[24] << "   Holidays: " << wHoliday[24] << "    Magician:" << wMagichian[24] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[20];

                if (wait[20] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e1 = 2 || e1 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }






            break;












        default:
            break;







        }
















        break;















    case 3:








        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[30];

        switch (customerPickedMagician[30]) {




        case 0:




            if ((a2 == 0) & (a2 < 1)) {
                schedulecount++;
                a2++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[30] = customer;
                xHoliday[30] = "Veterans Day";
                xMagichian[30] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[30] << "   Holidays: " << xHoliday[30] << "    Magician:" << xMagichian[30] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[30];
                if (continu[30] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a2 == 1 & a2 != 2)
            {
                a2++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[30] = customer;
                wHoliday[30] = "Veterans Day";
                wMagichian[30] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[30] << "   Holidays: " << wHoliday[30] << "    Magician:" << wMagichian[30] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[30];

                if (wait[30] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a2 = 2 || a2 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





















            break;





        case 1:


            if ((b2 == 0) & (b2 < 1)) {
                schedulecount++;
                b2++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[31] = customer;
                xHoliday[31] = "Veterans Day";
                xMagichian[31] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[31] << "   Holidays: " << xHoliday[31] << "    Magician:" << xMagichian[31] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[30];
                if (continu[30] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b2 == 1 & b2 != 2)
            {
                b2++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[31] = customer;
                wHoliday[31] = "Veterans Day";
                wMagichian[31] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[31] << "   Holidays: " << wHoliday[31] << "    Magician:" << wMagichian[31] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[30];

                if (wait[30] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b2 = 2 || b2 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





            break;


        case 2:


            if ((c2 == 0) & (c2 < 1)) {
                schedulecount++;
                c2++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[32] = customer;
                xHoliday[32] = "Veterans Day";
                xMagichian[32] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[32] << "   Holidays: " << xHoliday[32] << "    Magician:" << xMagichian[32] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[30];
                if (continu[30] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c2 == 1 & c2 != 2)
            {
                c2++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[32] = customer;
                wHoliday[32] = "Veterans Day";
                wMagichian[32] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[32] << "   Holidays: " << wHoliday[32] << "    Magician:" << wMagichian[32] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[30];

                if (wait[30] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c2 = 2 || c2 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 3:



            if ((d2 == 0) & (d2 < 1)) {
                schedulecount++;
                d2++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[33] = customer;
                xHoliday[33] = "Veterans Day";
                xMagichian[33] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[33] << "   Holidays: " << xHoliday[33] << "    Magician:" << xMagichian[33] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[30];
                if (continu[30] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d2 == 1 & d2 != 2)
            {
                d2++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[33] = customer;
                wHoliday[33] = "Veterans Day";
                wMagichian[33] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[33] << "   Holidays: " << wHoliday[33] << "    Magician:" << wMagichian[33] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[30];

                if (wait[30] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d2 = 2 || d2 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }


            break;




        case 4:

            if ((e2 == 0) & (e2 < 1)) {
                schedulecount++;
                e2++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[34] = customer;
                xHoliday[34] = "Veterans Day";
                xMagichian[34] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[34] << "   Holidays: " << xHoliday[34] << "    Magician:" << xMagichian[34] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[30];
                if (continu[30] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e2 == 1 & e2 != 2)
            {
                e2++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[34] = customer;
                wHoliday[34] = "Veterans Day";
                wMagichian[34] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[34] << "   Holidays: " << wHoliday[34] << "    Magician:" << wMagichian[34] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[30];

                if (wait[30] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e2 = 2 || e2 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }






            break;












        default:
            break;







        }



    case 4:



        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[40];

        switch (customerPickedMagician[40]) {




        case 0:




            if ((a3 == 0) & (a3 < 1)) {
                schedulecount++;
                a3++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[40] = customer;
                xHoliday[40] = "Thanksgiving Day";
                xMagichian[40] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[40] << "   Holidays: " << xHoliday[40] << "    Magician:" << xMagichian[40] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[40];
                if (continu[40] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a3 == 1 & a3 != 2)
            {
                a3++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[40] = customer;
                wHoliday[40] = "Thanksgiving Day";
                wMagichian[40] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[40] << "   Holidays: " << wHoliday[40] << "    Magician:" << wMagichian[40] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[40];

                if (wait[40] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a3 = 2 || a3 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





















            break;





        case 1:


            if ((b3 == 0) & (b3 < 1)) {
                schedulecount++;
                b3++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[41] = customer;
                xHoliday[41] = "Thanksgiving Day";
                xMagichian[41] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[41] << "   Holidays: " << xHoliday[41] << "    Magician:" << xMagichian[41] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[40];
                if (continu[40] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b3 == 1 & b3 != 2)
            {
                b3++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[41] = customer;
                wHoliday[41] = "Thanksgiving Day";
                wMagichian[41] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[41] << "   Holidays: " << wHoliday[41] << "    Magician:" << wMagichian[41] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[40];

                if (wait[40] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b3 = 2 || b3 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





            break;


        case 2:


            if ((c3 == 0) & (c3 < 1)) {
                schedulecount++;
                c3++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[42] = customer;
                xHoliday[42] = "Thanksgiving Day";
                xMagichian[42] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[42] << "   Holidays: " << xHoliday[42] << "    Magician:" << xMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[40];
                if (continu[40] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c3 == 1 & c3 != 2)
            {
                c3++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[42] = customer;
                wHoliday[42] = "Thanksgiving Day";
                wMagichian[42] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[42] << "   Holidays: " << wHoliday[42] << "    Magician:" << wMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[40];

                if (wait[40] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c3 = 2 || c3 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 3:



            if ((d3 == 0) & (d3 < 1)) {
                schedulecount++;
                d3++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[43] = customer;
                xHoliday[43] = "Thanksgiving Day";
                xMagichian[43] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[43] << "   Holidays: " << xHoliday[43] << "    Magician:" << xMagichian[43] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[40];
                if (continu[40] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d3 == 1 & d3 != 2)
            {
                d3++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[43] = customer;
                wHoliday[43] = "Thanksgiving Day";
                wMagichian[43] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[43] << "   Holidays: " << wHoliday[43] << "    Magician:" << wMagichian[43] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[40];

                if (wait[40] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d3 = 2 || d3 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }


            break;




        case 4:

            if ((e3 == 0) & (e3 < 1)) {
                schedulecount++;
                e3++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[44] = customer;
                xHoliday[44] = "Thanksgiving Day";
                xMagichian[44] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[44] << "   Holidays: " << xHoliday[44] << "    Magician:" << xMagichian[44] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[40];
                if (continu[40] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e3 == 1 & e3 != 2)
            {
                e3++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[44] = customer;
                wHoliday[44] = "Thanksgiving Day";
                wMagichian[44] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[44] << "   Holidays: " << wHoliday[44] << "    Magician:" << wMagichian[44] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[40];

                if (wait[40] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e3 = 2 || e3 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }






            break;












        default:
            break;







        }









        break;



    case 5:




        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[50];

        switch (customerPickedMagician[50]) {




        case 0:




            if ((a4 == 0) & (a4 < 1)) {
                schedulecount++;
                a4++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[50] = customer;
                xHoliday[50] = "Christmas Day";
                xMagichian[50] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[50] << "   Holidays: " << xHoliday[50] << "    Magician:" << xMagichian[50] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[50];
                if (continu[50] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a4 == 1 & a4 != 2)
            {
                a4++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[50] = customer;
                wHoliday[50] = "Christmas Day";
                wMagichian[50] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[50] << "   Holidays: " << wHoliday[50] << "    Magician:" << wMagichian[50] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[50];

                if (wait[50] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a4 = 2 || a4 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





















            break;





        case 1:


            if ((b4 == 0) & (b4 < 1)) {
                schedulecount++;
                b4++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[51] = customer;
                xHoliday[51] = "Christmas Day";
                xMagichian[51] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[51] << "   Holidays: " << xHoliday[51] << "    Magician:" << xMagichian[51] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[50];
                if (continu[50] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b4 == 1 & b4 != 2)
            {
                b4++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[51] = customer;
                wHoliday[51] = "Christmas Day";
                wMagichian[51] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[51] << "   Holidays: " << wHoliday[51] << "    Magician:" << wMagichian[51] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[50];

                if (wait[50] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b4 = 2 || b4 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





            break;


        case 2:


            if ((c4 == 0) & (c4 < 1)) {
                schedulecount++;
                c4++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[42] = customer;
                xHoliday[42] = "Christmas Day";
                xMagichian[42] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[42] << "   Holidays: " << xHoliday[42] << "    Magician:" << xMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[50];
                if (continu[50] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c4 == 1 & c4 != 2)
            {
                c4++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[42] = customer;
                wHoliday[42] = "Christmas Day";
                wMagichian[42] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[42] << "   Holidays: " << wHoliday[42] << "    Magician:" << wMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[50];

                if (wait[50] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c4 = 2 || c4 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 3:



            if ((d4 == 0) & (d4 < 1)) {
                schedulecount++;
                d4++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[53] = customer;
                xHoliday[53] = "Christmas Day";
                xMagichian[53] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[53] << "   Holidays: " << xHoliday[53] << "    Magician:" << xMagichian[53] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[50];
                if (continu[50] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d4 == 1 & d4 != 2)
            {
                d4++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[53] = customer;
                wHoliday[53] = "Christmas Day";
                wMagichian[53] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[53] << "   Holidays: " << wHoliday[53] << "    Magician:" << wMagichian[53] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[50];

                if (wait[50] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d4 = 2 || d4 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }


            break;




        case 4:

            if ((e4 == 0) & (e4 < 1)) {
                schedulecount++;
                e4++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[54] = customer;
                xHoliday[54] = "Christmas Day";
                xMagichian[54] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[54] << "   Holidays: " << xHoliday[54] << "    Magician:" << xMagichian[54] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[50];
                if (continu[50] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e4 == 1 & e4 != 2)
            {
                e4++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[54] = customer;
                wHoliday[54] = "Christmas Day";
                wMagichian[54] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[54] << "   Holidays: " << wHoliday[54] << "    Magician:" << wMagichian[54] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[50];

                if (wait[50] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e4 = 2 || e4 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }






            break;












        default:
            break;







        }





    case 6:





        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[60];

        switch (customerPickedMagician[60]) {




        case 0:




            if ((a5 == 0) & (a5 < 1)) {
                schedulecount++;
                a5++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[60] = customer;
                xHoliday[60] = "President's Day";
                xMagichian[60] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[60] << "   Holidays: " << xHoliday[60] << "    Magician:" << xMagichian[60] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[60];
                if (continu[60] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a5 == 1 & a5 != 2)
            {
                a5++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[60] = customer;
                wHoliday[60] = "President's Day";
                wMagichian[60] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[60] << "   Holidays: " << wHoliday[60] << "    Magician:" << wMagichian[60] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[60];

                if (wait[60] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a5 = 2 || a5 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





















            break;





        case 1:


            if ((b5 == 0) & (b5 < 1)) {
                schedulecount++;
                b5++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[61] = customer;
                xHoliday[61] = "President's Day";
                xMagichian[61] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[61] << "   Holidays: " << xHoliday[61] << "    Magician:" << xMagichian[61] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[60];
                if (continu[60] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b5 == 1 & b5 != 2)
            {
                b5++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[61] = customer;
                wHoliday[61] = "President's Day";
                wMagichian[61] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[61] << "   Holidays: " << wHoliday[61] << "    Magician:" << wMagichian[61] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[60];

                if (wait[60] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b5 = 2 || b5 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





            break;


        case 2:


            if ((c5 == 0) & (c5 < 1)) {
                schedulecount++;
                c5++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[42] = customer;
                xHoliday[42] = "President's Day";
                xMagichian[42] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[42] << "   Holidays: " << xHoliday[42] << "    Magician:" << xMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[60];
                if (continu[60] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c5 == 1 & c5 != 2)
            {
                c5++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[42] = customer;
                wHoliday[42] = "President's Day";
                wMagichian[42] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[42] << "   Holidays: " << wHoliday[42] << "    Magician:" << wMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[60];

                if (wait[60] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c5 = 2 || c5 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 3:



            if ((d5 == 0) & (d5 < 1)) {
                schedulecount++;
                d5++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[63] = customer;
                xHoliday[63] = "President's Day";
                xMagichian[63] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[63] << "   Holidays: " << xHoliday[63] << "    Magician:" << xMagichian[63] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[60];
                if (continu[60] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d5 == 1 & d5 != 2)
            {
                d5++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[63] = customer;
                wHoliday[63] = "President's Day";
                wMagichian[63] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[63] << "   Holidays: " << wHoliday[63] << "    Magician:" << wMagichian[63] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[60];

                if (wait[60] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d5 = 2 || d5 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }


            break;




        case 4:

            if ((e4 == 0) & (e4 < 1)) {
                schedulecount++;
                e4++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[64] = customer;
                xHoliday[64] = "President's Day";
                xMagichian[64] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[64] << "   Holidays: " << xHoliday[64] << "    Magician:" << xMagichian[64] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[60];
                if (continu[60] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e4 == 1 & e4 != 2)
            {
                e4++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[64] = customer;
                wHoliday[64] = "President's Day";
                wMagichian[64] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[64] << "   Holidays: " << wHoliday[64] << "    Magician:" << wMagichian[64] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[60];

                if (wait[60] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e4 = 2 || e4 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }






            break;












        default:
            break;







        }





    case 7:







        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[70];

        switch (customerPickedMagician[70]) {




        case 0:




            if ((a6 == 0) & (a6 < 1)) {
                schedulecount++;
                a6++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[70] = customer;
                xHoliday[70] = "New Year's Day";
                xMagichian[70] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[70] << "   Holidays: " << xHoliday[70] << "    Magician:" << xMagichian[70] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[70];
                if (continu[70] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a6 == 1 & a6 != 2)
            {
                a6++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[70] = customer;
                wHoliday[70] = "New Year's Day";
                wMagichian[70] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[70] << "   Holidays: " << wHoliday[70] << "    Magician:" << wMagichian[70] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[70];

                if (wait[70] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a6 = 2 || a6 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





















            break;





        case 1:


            if ((b6 == 0) & (b6 < 1)) {
                schedulecount++;
                b6++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[71] = customer;
                xHoliday[71] = "New Year's Day";
                xMagichian[71] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[71] << "   Holidays: " << xHoliday[71] << "    Magician:" << xMagichian[71] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[70];
                if (continu[70] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b6 == 1 & b6 != 2)
            {
                b6++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[71] = customer;
                wHoliday[71] = "New Year's Day";
                wMagichian[71] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[71] << "   Holidays: " << wHoliday[71] << "    Magician:" << wMagichian[71] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[70];

                if (wait[70] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b6 = 2 || b6 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





            break;


        case 2:


            if ((c6 == 0) & (c6 < 1)) {
                schedulecount++;
                c6++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[72] = customer;
                xHoliday[72] = "New Year's Day";
                xMagichian[72] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[72] << "   Holidays: " << xHoliday[72] << "    Magician:" << xMagichian[72] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[70];
                if (continu[70] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c6 == 1 & c6 != 2)
            {
                c6++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[72] = customer;
                wHoliday[72] = "New Year's Day";
                wMagichian[72] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[72] << "   Holidays: " << wHoliday[72] << "    Magician:" << wMagichian[72] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[70];

                if (wait[70] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c6 = 2 || c6 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 3:



            if ((d6 == 0) & (d6 < 1)) {
                schedulecount++;
                d6++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[73] = customer;
                xHoliday[73] = "New Year's Day";
                xMagichian[73] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[73] << "   Holidays: " << xHoliday[73] << "    Magician:" << xMagichian[73] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[70];
                if (continu[70] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d6 == 1 & d6 != 2)
            {
                d6++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[73] = customer;
                wHoliday[73] = "New Year's Day";
                wMagichian[73] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[73] << "   Holidays: " << wHoliday[73] << "    Magician:" << wMagichian[73] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[70];

                if (wait[70] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d6 = 2 || d6 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }


            break;




        case 4:

            if ((e6 == 0) & (e6 < 1)) {
                schedulecount++;
                e6++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[74] = customer;
                xHoliday[74] = "New Year's Day";
                xMagichian[74] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[74] << "   Holidays: " << xHoliday[74] << "    Magician:" << xMagichian[74] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[70];
                if (continu[70] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e6 == 1 & e6 != 2)
            {
                e6++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[74] = customer;
                wHoliday[74] = "New Year's Day";
                wMagichian[74] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[74] << "   Holidays: " << wHoliday[74] << "    Magician:" << wMagichian[74] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[70];

                if (wait[70] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e6 = 2 || e6 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }






            break;












        default:
            break;







        }





        break;



    case 8:



        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[80];

        switch (customerPickedMagician[80]) {




        case 0:




            if ((a7 == 0) & (a7 < 1)) {
                schedulecount++;
                a7++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[80] = customer;
                xHoliday[80] = "MLK Day";
                xMagichian[80] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[80] << "   Holidays: " << xHoliday[80] << "    Magician:" << xMagichian[80] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[80];
                if (continu[80] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a7 == 1 & a7 != 2)
            {
                a7++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[80] = customer;
                wHoliday[80] = "MLK Day";
                wMagichian[80] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[80] << "   Holidays: " << wHoliday[80] << "    Magician:" << wMagichian[80] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[80];

                if (wait[80] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a7 = 2 || a7 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





















            break;





        case 1:


            if ((b7 == 0) & (b7 < 1)) {
                schedulecount++;
                b7++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[81] = customer;
                xHoliday[81] = "MLK Day";
                xMagichian[81] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[81] << "   Holidays: " << xHoliday[81] << "    Magician:" << xMagichian[81] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[80];
                if (continu[80] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b7 == 1 & b7 != 2)
            {
                b7++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[81] = customer;
                wHoliday[81] = "MLK Day";
                wMagichian[81] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[81] << "   Holidays: " << wHoliday[81] << "    Magician:" << wMagichian[81] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[80];

                if (wait[80] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b7 = 2 || b7 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





            break;


        case 2:


            if ((c7 == 0) & (c7 < 1)) {
                schedulecount++;
                c7++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[42] = customer;
                xHoliday[42] = "MLK Day";
                xMagichian[42] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[42] << "   Holidays: " << xHoliday[42] << "    Magician:" << xMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[80];
                if (continu[80] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c7 == 1 & c7 != 2)
            {
                c7++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[42] = customer;
                wHoliday[42] = "MLK Day";
                wMagichian[42] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[42] << "   Holidays: " << wHoliday[42] << "    Magician:" << wMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[80];

                if (wait[80] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c7 = 2 || c7 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 3:



            if ((d7 == 0) & (d7 < 1)) {
                schedulecount++;
                d7++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[83] = customer;
                xHoliday[83] = "MLK Day";
                xMagichian[83] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[83] << "   Holidays: " << xHoliday[83] << "    Magician:" << xMagichian[83] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[80];
                if (continu[80] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d7 == 1 & d7 != 2)
            {
                d7++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[83] = customer;
                wHoliday[83] = "MLK Day";
                wMagichian[83] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[83] << "   Holidays: " << wHoliday[83] << "    Magician:" << wMagichian[83] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[80];

                if (wait[80] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d7 = 2 || d7 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }


            break;




        case 4:

            if ((e7 == 0) & (e7 < 1)) {
                schedulecount++;
                e7++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[84] = customer;
                xHoliday[84] = "MLK Day";
                xMagichian[84] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[84] << "   Holidays: " << xHoliday[84] << "    Magician:" << xMagichian[84] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[80];
                if (continu[80] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e7 == 1 & e7 != 2)
            {
                e7++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[84] = customer;
                wHoliday[84] = "MLK Day";
                wMagichian[84] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[84] << "   Holidays: " << wHoliday[84] << "    Magician:" << wMagichian[84] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[80];

                if (wait[80] == 0)
                {cout << "Please enter the name of the magician.";
        cin >> customer;
        cMagichian.insert(cMagichian.begin(), customer);



                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e7 = 2 || e7 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }






            break;












        default:
            break;







        }






    case 9:


        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;
        cout << Magicians[0] << ": Press 0 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[1] << ": Press 1 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[2] << ": Press 2 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[3] << ": Press 3 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[4] << ": Press  4 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[5] << ": Press 5 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[6] << ": Press 6 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[7] << ": Press 7 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[8] << ": Press 8 To book with him.";
        cout << endl;
        cout << endl;
        cout << Magicians[9] << ": Press 9 To book with him.";
        cout << endl;
        cout << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedMagician[90];

        switch (customerPickedMagician[90]) {




        case 0:




            if ((a8 == 0) & (a8 < 1)) {
                schedulecount++;
                a8++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[90] = customer;
                xHoliday[90] = "Memorial Day";
                xMagichian[90] = "Dennis Kyriakos";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[90] << "   Holidays: " << xHoliday[90] << "    Magician:" << xMagichian[90] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[90];
                if (continu[90] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (a8 == 1 & a8 != 2)
            {
                a8++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[90] = customer;
                wHoliday[90] = "Memorial Day";
                wMagichian[90] = "Dennis Kyriakos";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[90] << "   Holidays: " << wHoliday[90] << "    Magician:" << wMagichian[90] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[90];

                if (wait[90] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (a8 = 2 || a8 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





















            break;





        case 1:


            if ((b8 == 0) & (b8 < 1)) {
                schedulecount++;
                b8++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[92] = customer;
                xHoliday[92] = "Memorial Day";
                xMagichian[92] = "Dan Chan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[92] << "   Holidays: " << xHoliday[92] << "    Magician:" << xMagichian[92] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[90];
                if (continu[90] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (b8 == 1 & b8 != 2)
            {
                b8++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[92] = customer;
                wHoliday[92] = "Memorial Day";
                wMagichian[92] = "Dan Chan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[92] << "   Holidays: " << wHoliday[92] << "    Magician:" << wMagichian[92] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[90];

                if (wait[90] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (b8 = 2 || b8 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }





            break;


        case 2:


            if ((c8 == 0) & (c8 < 1)) {
                schedulecount++;
                c8++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[42] = customer;
                xHoliday[42] = "Memorial Day";
                xMagichian[42] = "Dorian Rhodell";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[42] << "   Holidays: " << xHoliday[42] << "    Magician:" << xMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[90];
                if (continu[90] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (c8 == 1 & c8 != 2)
            {
                c8++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[42] = customer;
                wHoliday[42] = "Memorial Day";
                wMagichian[42] = "Dorian Rhodell";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[42] << "   Holidays: " << wHoliday[42] << "    Magician:" << wMagichian[42] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[90];

                if (wait[90] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (c8 = 2 || c8 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }









            break;


        case 3:



            if ((d8 == 0) & (d8 < 1)) {
                schedulecount++;
                d8++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[93] = customer;
                xHoliday[93] = "Memorial Day";
                xMagichian[93] = "Ryan Kane";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[93] << "   Holidays: " << xHoliday[93] << "    Magician:" << xMagichian[93] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[90];
                if (continu[90] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (d8 == 1 & d8 != 2)
            {
                d8++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[93] = customer;
                wHoliday[93] = "Memorial Day";
                wMagichian[93] = "Ryan Kane";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[93] << "   Holidays: " << wHoliday[93] << "    Magician:" << wMagichian[93] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[90];

                if (wait[90] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (d8 = 2 || d8 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }


            break;




        case 4:

            if ((e8 == 0) & (e8 < 1)) {
                schedulecount++;
                e8++;
                cout << schedulecount << endl;
                cout << endl;

                xCustomer[94] = customer;
                xHoliday[94] = "Memorial Day";
                xMagichian[94] = "Alan";

                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[94] << "   Holidays: " << xHoliday[94] << "    Magician:" << xMagichian[94] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[90];
                if (continu[90] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }






            }
            else if (e8 == 1 & e8 != 2)
            {
                e8++;
                waitcount++;
                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "You been placed in the waiting list" << endl;
                wCustomer[94] = customer;
                wHoliday[94] = "Memorial Day";
                wMagichian[94] = "Alan";
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << wCustomer[94] << "   Holidays: " << wHoliday[94] << "    Magician:" << wMagichian[94] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;




                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> wait[90];

                if (wait[90] == 0)
                {


                    menu(schedulecount, waitcount, counts);

                    //}

                }
            }

            else if (e8 = 2 || e8 > 2)
            {

                cout << "======================================================================" << endl;
                cout << "I'm sorry he is booked for this holiday." << endl;
                cout << "Even the waiting list is full." << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                int k;
                if (k == 0) {
                    menu(schedulecount, waitcount, counts);
                }






            }






            break;












        default:
            break;







        }















        break;






















    default:
        cout << "Please enter value from 0 to 9 and try again. Thank You!!!" << endl;
        break;
    }
}







void cancelSchedule(int waitcount, int schedulecount) {
        cout <<"======================================================================" << endl;
        cout << "Please enter the name of the customer: " << endl;
        cin >> customer;
        cout <<"======================================================================" << endl;
        cCustomer.insert(cCustomer.begin(), customer);

        cout << endl;
        cout <<"======================================================================" << endl;
        cout << Holidays[0] <<": Please enter 0 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[1] <<": Please enter 1 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[2] <<": Please enter 2 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[3] <<": Please enter 3 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[4] <<": Please enter 4 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[5] <<": Please enter 5 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[6] <<": Please enter to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[7] <<": Please enter 7 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[8] <<": Please enter 8 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[9]<<": Please enter 9 to see which holiday.";
        cout << endl;
        cout << endl;
        cout <<"======================================================================" << endl;
        cout << xCustomer[0] << endl;


        cin >> customerPickedHoliday[20];

        //if (customerPickedHoliday == 0) {
        cHoliday[0] = Holidays[0];
        cHoliday[1] = Holidays[1];
        cHoliday[2] = Holidays[2];
        cHoliday[3] = Holidays[3];
        cHoliday[4] = Holidays[4];
        cHoliday[5] = Holidays[5];
        cHoliday[6] = Holidays[6];
        cHoliday[7] = Holidays[7];
        cHoliday[8] = Holidays[8];
        cHoliday[9] = Holidays[9];

        bool result1 = equal(xCustomer.begin(), xCustomer.end(), cCustomer.begin());
        bool result2 = equal(xHoliday.begin(), xHoliday.end(), cHoliday.begin() + 9);
        bool result3 = equal(wCustomer.begin(), wCustomer.end(), cCustomer.begin());
        bool result4 = equal(wHoliday.begin(), wHoliday.end(), cHoliday.begin()+ 9);


        if (result1 & result2)
        {

                waitcount--;
                replace(xCustomer.begin(), xCustomer.end(), xCustomer[0], wCustomer[0]);
                cout << xCustomer[0] << endl;
                //vector<string*>::iterator it1, it2;
                //it1 = wCustomer.begin;
                wCustomer.erase(wCustomer.begin());
                wHoliday.erase(wHoliday.begin());
                wMagichian.erase(wHoliday.begin());
                cout << xCustomer[0];
                cout <<"Congratulations you have been successfully removed from the booking.";
                cout <<"You can check in status to see the confirmation too.";
                menu(schedulecount, waitcount, counts);


        }
        else if (result3 & result4) {
            waitcount--;
            //schedulecount--;
            replace(xCustomer.begin(), xCustomer.end(), xCustomer[0], wCustomer[0]);
            cout << xCustomer[0] << endl;
                //vector<string*>::iterator it1, it2;
                //it1 = wCustomer.begin;
            wCustomer.erase(wCustomer.begin());
            wHoliday.erase(wHoliday.begin());
            wMagichian.erase(wHoliday.begin());
            cout <<"Congratulations you have been successfully removed from the waitinglist.";
            cout <<"You can check in status to see the confirmation too.";
            menu(schedulecount, waitcount, counts);
        }
        else {
            cout << "I'm sorry he is not in the schedule.";
            menu(schedulecount, waitcount, counts);
        }













}



int signup()
{

 cout << "======================================================================" << endl;
    cout << "Please select from range 0-4 to signup a magician" << endl;
    cout << Magicians[5] << "  Please enter 0 to signup the magician." << endl;
    cout << Magicians[6] << "  Please enter 1 to signup the magician." << endl;
    cout << Magicians[7] << "  Please enter 2 to signup the magician." << endl;
    cout << Magicians[8] << "  Please enter 3 to signup the magician." << endl;
    cout << Magicians[9] << "  Please enter 4 to signup the magician." << endl;
    cout << "======================================================================" << endl;

    cin >> customerPickedMagician[20];

    switch (customerPickedMagician[20])
    {

    case 0:
        cout << "======================================================================" << endl;
        cout << "Please select from range 0-4 to signup for a special holiday" << endl;
        cout << Holidays[5] << ":  Please enter 0 to signup the which holiday." << endl;
        cout << Holidays[6] << ":  Please enter 1 to signup the which holiday." << endl;
        cout << Holidays[7] << ":  Please enter 2 to signup the which holiday." << endl;
        cout << Holidays[8] << ":  Please enter 3 to signup the which holiday." << endl;
        cout << Holidays[9] << ":  Please enter 4 to signup the which holiday." << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedHoliday[20];

        switch (customerPickedHoliday[20]) {

        case 0:

            if (f == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[5] << " has been signed up for this " << Holidays[5] << endl;
                cout << "Please enter the name of the customer" << endl;
                cin >> customer;

                f++;
                xCustomer[5] = customer;
                xMagichian[5] = "Glen Michelette";
                xHoliday[5] = "Christmas Day";

                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[5] << "   Holidays: " << xHoliday[5] << "    Magician:" << xMagichian[5] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (f >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }








































            break;
        case 1:

                if (g == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[5] << " has been signed up for this " << Holidays[6] << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 g++;
                xCustomer[6] = customer;
                xMagichian[6] = Magicians[5];
                xHoliday[6] =  Holidays[6];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[6] << "   Holidays: " << xHoliday[6] << "    Magician:" << xMagichian[6] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (g >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }








            break;
        case 2:

            if (h == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[5] << " has been signed up for this " << Holidays[7] << endl;
                //cout << "Customer can sign with him/her through schedule. Now" << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 h++;
                xCustomer[7] = customer;
                xMagichian[7] = Magicians[5];
                xHoliday[7] =  Holidays[7];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[7] << "   Holidays: " << xHoliday[7] << "    Magician:" << xMagichian[7] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (h >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }


                //counts++;







            break;

        case 3:

            if (i == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[5] << "has been signed up for this " << Holidays[8] << endl;
                cout << "Congratulations " << Magicians[5] << " has been signed up for this " << Holidays[8] << endl;
                //cout << "Customer can sign with him/her through schedule. Now" << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 i++;
                xCustomer[8] = customer;
                xMagichian[8] = Magicians[5];
                xHoliday[8] =  Holidays[8];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[8] << "   Holidays: " << xHoliday[8] << "    Magician:" << xMagichian[8] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (i >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }




            break;
        case 4:

            if (jo == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[5] << " has been signed up for this " << Holidays[9] << endl;
                cout << "Congratulations " << Magicians[5] << " has been signed up for this " << Holidays[9] << endl;
                //cout << "Customer can sign with him/her through schedule. Now" << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 jo++;
                xCustomer[9] = customer;
                xMagichian[9] = Magicians[5];
                xHoliday[9] =  Holidays[9];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[9] << "   Holidays: " << xHoliday[9] << "    Magician:" << xMagichian[9] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (jo >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }
            break;

            default:
            menu(schedulecount, waitcount, counts);
            break;





        }






        break;


        case 1:



cout << "======================================================================" << endl;
        cout << "Please select from range 0-4 to signup for a special holiday" << endl;
        cout << Holidays[5] << ":  Please enter 0 to signup the which holiday." << endl;
        cout << Holidays[6] << ":  Please enter 1 to signup the which holiday." << endl;
        cout << Holidays[7] << ":  Please enter 2 to signup the which holiday." << endl;
        cout << Holidays[8] << ":  Please enter 3 to signup the which holiday." << endl;
        cout << Holidays[9] << ":  Please enter 4 to signup the which holiday." << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedHoliday[20];

        switch (customerPickedHoliday[20]) {

        case 0:

            if (f0 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " << Holidays[5] << endl;

                //counts++;
                cout << "Congratulations " << Magicians[6] << "has been signed up for this " << Holidays[5] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " << Holidays[5] << endl;
                //cout << "Customer can sign with him/her through schedule. Now" << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 i++;
                xCustomer[15] = customer;
                xMagichian[15] = Magicians[6];
                xHoliday[15] =  Holidays[5];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[15] << "   Holidays: " << xHoliday[15] << "    Magician:" << xMagichian[15] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (f0 >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }





            break;
        case 1:

                if (g0 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[6] << "has been signed up for this " << Holidays[6] << endl;

                //counts++;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " << Holidays[6] << endl;

                //counts++;
                cout << "Congratulations " << Magicians[6] << "has been signed up for this " << Holidays[6] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " << Holidays[6] << endl;
                //cout << "Customer can sign with him/her through schedule. Now" << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 i++;
                xCustomer[16] = customer;
                xMagichian[16] = Magicians[6];
                xHoliday[16] =  Holidays[6];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[16] << "   Holidays: " << xHoliday[16] << "    Magician:" << xMagichian[16] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (g0 >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }





            break;
        case 2:

            if (h0 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " << Holidays[7] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " << Holidays[7] << endl;

                //counts++;
                cout << "Congratulations " << Magicians[6] << "has been signed up for this " << Holidays[7] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " << Holidays[7] << endl;
                //cout << "Customer can sign with him/her through schedule. Now" << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 i++;
                xCustomer[17] = customer;
                xMagichian[17] = Magicians[6];
                xHoliday[17] =  Holidays[8];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[17] << "   Holidays: " << xHoliday[17] << "    Magician:" << xMagichian[17] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (h0 >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }




            break;

        case 3:




if (i0 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " <<  Holidays[9] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " <<  Holidays[9] << endl;

                //counts++;
                cout << "Congratulations " << Magicians[6] << "has been signed up for this " <<  Holidays[9] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " <<  Holidays[9] << endl;
                //cout << "Customer can sign with him/her through schedule. Now" << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 i++;
                xCustomer[18] = customer;
                xMagichian[18] = Magicians[6];
                xHoliday[18] =  Holidays[8];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[18] << "   Holidays: " << xHoliday[18] << "    Magician:" << xMagichian[18] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (i0 >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }




                if (i0 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " <<  Holidays[8] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " <<  Holidays[8] << endl;

                //counts++;
                cout << "Congratulations " << Magicians[6] << "has been signed up for this " <<  Holidays[8] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " <<  Holidays[8] << endl;
                //cout << "Customer can sign with him/her through schedule. Now" << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 i++;
                xCustomer[18] = customer;
                xMagichian[18] = Magicians[6];
                xHoliday[18] =  Holidays[8];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[18] << "   Holidays: " << xHoliday[18] << "    Magician:" << xMagichian[18] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (i0 >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }




            break;
        case 4:

            if (ja == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[9] << " has been signed up for this " << Holidays[9] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;
                 ja++;
                return ja;
                menu(schedulecount, waitcount, counts);
                //counts++;
               ja++;


            }
            else  if (ja > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }

            default:
            menu(schedulecount, waitcount, counts);
            break;

menu(schedulecount, waitcount, counts);



        }




            break;



        case 2:




cout << "======================================================================" << endl;
        cout << "Please select from range 0-4 to signup for a special holiday" << endl;
        cout << Holidays[5] << ":  Please enter 0 to signup the which holiday." << endl;
        cout << Holidays[6] << ":  Please enter 1 to signup the which holiday." << endl;
        cout << Holidays[7] << ":  Please enter 2 to signup the which holiday." << endl;
        cout << Holidays[8] << ":  Please enter 3 to signup the which holiday." << endl;
        cout << Holidays[9] << ":  Please enter 4 to signup the which holiday." << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedHoliday[20];

        switch (customerPickedHoliday[20]) {

        case 0:

            if (f1 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[5] << " has been signed up for this " << Holidays[5] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
              return   f1++;
                 menu(schedulecount, waitcount, counts);

            }
            else  if (f1 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }


            break;
        case 1:

                if (g1 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " << Holidays[6] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
                return g1++;
                menu(schedulecount, waitcount, counts);

            }
            else  if (g1 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }





            break;
        case 2:

            if (h1 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[7] << " has been signed up for this " << Holidays[7] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
               return  h1++;
                menu(schedulecount, waitcount, counts);

            }
            else  if (h1 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }


            break;

        case 3:

            if (i1 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[8] << " has been signed up for this " << Holidays[8] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
               return  i1++;
                menu(schedulecount, waitcount, counts);

            }
            else  if (i1 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }




            break;
        case 4:

            if (jb == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[9] << " has been signed up for this " << Holidays[9] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
              return  jb++;

            menu(schedulecount, waitcount, counts);
            }
            else  if (jb > 0) {
                cout << "I'm sorry he is currently booked." << endl;




            if (i0 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " <<  Holidays[9] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " <<  Holidays[9] << endl;

                //counts++;
                cout << "Congratulations " << Magicians[6] << "has been signed up for this " <<  Holidays[9] << endl;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " <<  Holidays[9] << endl;
                //cout << "Customer can sign with him/her through schedule. Now" << endl;
                cout << "Please enter the name of the customer." << endl;
                cin >> customer;
                 i++;
                xCustomer[18] = customer;
                xMagichian[18] = Magicians[6];
                xHoliday[18] =  Holidays[8];



                cout << "======================================================================" << endl;
                cout << "COngratulations You're booking have been confirmed" << endl;
                cout << "Below is youre confirmation." << endl;
                cout << "Customer name: " << xCustomer[18] << "   Holidays: " << xHoliday[18] << "    Magician:" << xMagichian[18] << endl;
                cout << endl;
                cout << endl;
                cout << "======================================================================" << endl;

                cout << "Please enter 0 to continue/return to the main menu page." << endl;
                cin >> continu[10];
                if (continu[10] == 0)
                {
                    menu(schedulecount, waitcount, counts);

                }

            }

            else if (i0 >= 1 ){

                cout << "I'm sorry the waiting list is currently fulled.";
                menu(schedulecount, waitcount, counts);
            }menu(schedulecount, waitcount, counts);

            }

            default:
            menu(schedulecount, waitcount, counts);
            break;





        }






        break;

        case 3:


    cout << "======================================================================" << endl;
        cout << "Please select from range 0-4 to signup for a special holiday" << endl;
        cout << Holidays[5] << ":  Please enter 0 to signup the which holiday." << endl;
        cout << Holidays[6] << ":  Please enter 1 to signup the which holiday." << endl;
        cout << Holidays[7] << ":  Please enter 2 to signup the which holiday." << endl;
        cout << Holidays[8] << ":  Please enter 3 to signup the which holiday." << endl;
        cout << Holidays[9] << ":  Please enter 4 to signup the which holiday." << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedHoliday[20];

        switch (customerPickedHoliday[20]) {

        case 0:

            if (f2 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[5] << " has been signed up for this " << Holidays[5] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
               return  f2++;
                menu(schedulecount, waitcount, counts);

            }
            else  if (f2 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }


            break;
        case 1:

                if (g2 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[6] << "has been signed up for this " << Holidays[6] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
              return   g2++;

            menu(schedulecount, waitcount, counts);
            }
            else  if (g2 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }





            break;
        case 2:

            if (h2 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[7] << " has been signed up for this " << Holidays[7] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
               return  h2++;
                  menu(schedulecount, waitcount, counts);

            }
            else  if (h2 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }


            break;

        case 3:

            if (i2 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[8] << " has been signed up for this " << Holidays[8] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
               return  i2++;
                 menu(schedulecount, waitcount, counts);
            }
            else  if (i2 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }




            break;
        case 4:

            if (jc == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[9] << "has been signed up for this " << Holidays[9] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
             return   jc++;

            menu(schedulecount, waitcount, counts);
            }
            else  if (jc > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }

            default:
            menu(schedulecount, waitcount, counts);
            break;





        }



        case 4:





cout << "======================================================================" << endl;
        cout << "Please select from range 0-4 to signup for a special holiday" << endl;
        cout << Holidays[5] << ":  Please enter 0 to signup the which holiday." << endl;
        cout << Holidays[6] << ":  Please enter 1 to signup the which holiday." << endl;
        cout << Holidays[7] << ":  Please enter 2 to signup the which holiday." << endl;
        cout << Holidays[8] << ":  Please enter 3 to signup the which holiday." << endl;
        cout << Holidays[9] << ":  Please enter 4 to signup the which holiday." << endl;
        cout << "======================================================================" << endl;

        cin >> customerPickedHoliday[20];

        switch (customerPickedHoliday[20]) {

        case 0:

            if (f3 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[5] << " has been signed up for this " << Holidays[5] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
              return  f3++;
                 menu(schedulecount, waitcount, counts);

            }
            else  if (f3 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }


            break;
        case 1:

                if (g3 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[6] << " has been signed up for this " << Holidays[6] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
                return g3++;

                menu(schedulecount, waitcount, counts);
            }
            else  if (g3 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }





            break;
        case 2:

            if (h3 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[7] << " has been signed up for this " << Holidays[7] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;
                menu(schedulecount, waitcount, counts);//counts++;
               return  h3++;


            }
            else  if (h3 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }


            break;

        case 3:

            if (i3 == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[8] << " has been signed up for this " << Holidays[8] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

              return  i3++;
                menu(schedulecount, waitcount, counts);
                //counts++;
            }
            else  if (i3 > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }




            break;
        case 4:

            if (jd == 0) {
                //counts++;
                cout << "Congratulations " << Magicians[9] << " has been signed up for this " << Holidays[9] << endl;
                cout << "Customer can sign with him/her through schedule. Now" << endl;

                //counts++;
               jd++;
                return jd;
                 menu(schedulecount, waitcount, counts);
            }
            else  if (jd > 0) {
                cout << "I'm sorry he is currently booked." << endl;
                menu(schedulecount, waitcount, counts);

            }

            default:
            menu(schedulecount, waitcount, counts);
            break;





        }






            break;













    default:
        break;



    }

int x;

return x;

}






void status()
{

    //string* p = &xCustomer[20];

            //cout << "Customer name " << "Magician" << "Holiday" << endl;
            cout << "======================================================================" << endl;
            cout << "                         ---SCHEDULE----                                   " << endl;
            cout << "                         DISCLAIMER            " <<endl;
            cout << "Booked people will appear as it should in the status. The empty after Customername, Magician booked, and holiday is slot left to be filled."<< endl;
            cout << "Thank you!!!" << endl;
            cout << "======================================================================" << endl;

            for (unsigned int i = 0; i < xCustomer.size(); i++) {


            cout << "Customer Name: "  << xCustomer.at(i) << ' ';


            }
            cout << endl;
            cout << "======================================================================" << endl;

            for (unsigned int j = 0; j < xMagichian.size(); j++) {


            cout << "Magician Booked: "  << xMagichian.at(j) << ' ';


            }
            cout << endl;
            cout << "======================================================================" << endl;

            for (unsigned int k = 0; k < xHoliday.size(); k++) {
            cout <<  " Holiday:  " << xHoliday.at(k) << ' ';
            //cout <<  " Holiday:  " << *r << " ";



            }

            cout << "======================================================================" << endl;
            cout << endl;



            cout << "======================================================================" << endl;
            cout <<"                          ----Waitlist---                                     " << endl;
            cout << "======================================================================" << endl;
            cout << "                         DISCLAIMER            " <<endl;
            cout << "Booked people will appear as it should in the status. The empty after Customername(waitlist), Magician booked(waitlist), and holiday(waitlist) is slot left to be filled."<< endl;
            cout << "Thank you!!!" << endl;
            cout << "======================================================================" << endl;

            for (unsigned int i = 0; i < wCustomer.size(); i++) {


            cout << "Customer Name(waitlist): "  << wCustomer.at(i) << ' ';


            }
            cout << endl;
            cout << "======================================================================" << endl;

            for (unsigned int j = 0; j < wMagichian.size(); j++) {


            cout << "Magician Booked(waitlist): "  << wMagichian.at(j) << ' ';


            }
            cout << endl;
            cout << "======================================================================" << endl;

            for (unsigned int k = 0; k < wHoliday.size(); k++) {
            cout <<  " Holiday(waitlist):  " << wHoliday.at(k) << ' ';
            //cout <<  " Holiday:  " << *r << " ";



            }

            cout << "======================================================================" << endl;










    menu(schedulecount, waitcount, counts);


}
    void quit(){
        ofstream myfile;
        myfile.open("Output.txt", ios::in | ios::out );
        cout << "Are you sure you want to Quit?" << endl;
        cout << "If you want to quit please press 0" <<endl;
        cout << "If you want to return to main menu. Please Press 1 or any other key" << endl;

        cin >> qu;
        switch (qu){
    case 0:



            myfile << "======================================================================" << endl;
            myfile << "                         ---SCHEDULE----                                   " << endl;
            myfile << "                         DISCLAIMER            " <<endl;
            myfile << "Booked people will appear as it should in the status. The empty after Customername, Magician booked, and holiday is slot left to be filled."<< endl;
            myfile << "Thank you!!!" << endl;
            myfile << "======================================================================" << endl;

            for (unsigned int i = 0; i < xCustomer.size(); i++) {


            myfile << "Customer Name: "  << xCustomer.at(i) << ' ';


            }
            myfile << endl;
            myfile << "======================================================================" << endl;

            for (unsigned int j = 0; j < xMagichian.size(); j++) {


            myfile << "Magician Booked: "  << xMagichian.at(j) << ' ';


            }
            myfile << endl;
            myfile << "======================================================================" << endl;

            for (unsigned int k = 0; k < xHoliday.size(); k++) {
            myfile <<  " Holiday:  " << xHoliday.at(k) << ' ';
            //myfile <<  " Holiday:  " << *r << " ";



            }

            myfile << "======================================================================" << endl;
            myfile << endl;



            myfile << "======================================================================" << endl;
            myfile <<"                          ----Waitlist---                                     " << endl;
            myfile << "======================================================================" << endl;
            myfile << "                         DISCLAIMER            " <<endl;
            myfile << "Booked people will appear as it should in the status. The empty after Customername(waitlist), Magician booked(waitlist), and holiday(waitlist) is slot left to be filled."<< endl;
            myfile << "Thank you!!!" << endl;
            myfile << "======================================================================" << endl;

            for (unsigned int i = 0; i < wCustomer.size(); i++) {


            myfile << "Customer Name(waitlist): "  << wCustomer.at(i) << ' ';


            }
            myfile << endl;
            myfile << "======================================================================" << endl;

            for (unsigned int j = 0; j < wMagichian.size(); j++) {


            myfile << "Magician Booked(waitlist): "  << wMagichian.at(j) << ' ';


            }
            myfile << endl;
            myfile << "======================================================================" << endl;

            for (unsigned int k = 0; k < wHoliday.size(); k++) {
            myfile <<  " Holiday(waitlist):  " << wHoliday.at(k) << ' ';
            //myfile <<  " Holiday:  " << *r << " ";



            }

            myfile << "======================================================================" << endl;






            myfile.close();



        break;
    default:
        menu(schedulecount, waitcount, counts);
        break;

        }


    }

    void dropout(){


        cout << "Please enter the name of the magician.";
        cin >> customer;
        cMagichian.insert(cMagichian.begin(), customer);

        cout << endl;
        cout <<"======================================================================" << endl;
        cout << Holidays[0] <<": Please enter 0 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[1] <<": Please enter 1 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[2] <<": Please enter 2 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[3] <<": Please enter 3 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[4] <<": Please enter 4 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[5] <<": Please enter 5 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[6] <<": Please enter to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[7] <<": Please enter 7 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[8] <<": Please enter 8 to see which holiday.";
        cout << endl;
        cout << endl;
        cout << Holidays[9]<<": Please enter 9 to see which holiday.";
        cout << endl;
        cout << endl;
        cout <<"======================================================================" << endl;




        cin >> customerPickedHoliday[20];

        //if (customerPickedHoliday == 0) {
        cHoliday[0] = Holidays[0];
        cHoliday[1] = Holidays[1];
        cHoliday[2] = Holidays[2];
        cHoliday[3] = Holidays[3];
        cHoliday[4] = Holidays[4];
        cHoliday[5] = Holidays[5];
        cHoliday[6] = Holidays[6];
        cHoliday[7] = Holidays[7];
        cHoliday[8] = Holidays[8];
        cHoliday[9] = Holidays[9];

        bool result1 = equal(xMagichian.begin(), xMagichian.end(), cMagichian.begin());
        bool result2 = equal(xHoliday.begin(), xHoliday.end(), cHoliday.begin() + 9);
        //bool result3 = equal(wCustomer.begin(), wCustomer.end(), cCustomer.begin());
        //bool result4 = equal(wHoliday.begin(), wHoliday.end(), cHoliday.begin()+ 9);

        if (result1 & result2){
            cout << "Your booking have been canceled" << endl;
            cout << "I'm sorry the waiting list is full currently." << endl;

        }



    }








