#include <stdio.h>
#include "AirPortAdt.h"



int main() {
    LandRequest * landRequest;
    LandingFlightHoursDatabase flightHoursDatabase;

    flightHoursDatabase = createFlightHoursDatabase();

    landRequest = createLandRequest();
    setLandHour(landRequest,5);
    setPlaneNumber(landRequest,1234);

    requestLand(landRequest,flightHoursDatabase);




    clearFlightFromDataBase(landRequest,flightHoursDatabase);
}
