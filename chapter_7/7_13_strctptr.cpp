#include <iostream>
#include <cmath>

// structure declarations
struct polar {
    double distance;      // distance from origin
    double angle;         // direction from origin
};

struct rect {
    double x;             // horizontal distance from origin
    double y;             // vertical distance from origin
};

// prototypes
void rect_to_polar(const rect* xypos, polar* pda);

void show_polar(const polar* dapos);

int main() {
    using namespace std;
    rect rplace{};
    polar pplace{};

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) {  // slick use of cin
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

// convert rectangular to polar coordinates
void rect_to_polar(const rect* xypos, polar* pda) {
    using namespace std;
    pda->distance =
            sqrt( xypos->x * xypos->x + xypos->y * xypos->y);
    pda->angle = atan2(xypos->y, xypos->x);
}

// show polar coordinates, converting angle to degrees
void show_polar(const polar* dapos) {
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos->distance;
    cout << ", angle = " << dapos->angle * Rad_to_deg;
    cout << " degrees\n";
}
