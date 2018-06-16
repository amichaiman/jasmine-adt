//
// Created by amichai on 16/06/18.
//

#ifndef UNTITLED16_AIRPORTADT_H
#define UNTITLED16_AIRPORTADT_H

#include <stdbool.h>
#include <stdio.h>

/*  number of lanes */
#define N 10

typedef struct{
    short planeNumber;
    short hour;
} LandRequest;

typedef struct{
    FILE *database;
} LandingFlightHoursDatabase;

typedef struct{
    FILE *database;
} TakeOffFlightDatabase;



LandRequest *createLandRequest();
LandingFlightHoursDatabase createFlightHoursDatabase();

void setPlaneNumber(LandRequest *landRequest, short number);
void setLandHour(LandRequest *landRequest, short hour);

void requestLand(LandRequest *landRequest, LandingFlightHoursDatabase database);
bool requestTakeOff(short planeNumber, LandingFlightHoursDatabase landDatabase, TakeOffFlightDatabase takeOffFlightDatabase);
void clearFlightFromLandingDataBase(LandRequest *landRequest, LandingFlightHoursDatabase database);
void clearFlightFromTakeOffDataBase(short planeNumber, TakeOffFlightDatabase database);

void clearAllLandingFlights(LandingFlightHoursDatabase database);
void clearAllTakeOffFlights(TakeOffFlightDatabase database);

void printAndDestroyLandingFlights(LandingFlightHoursDatabase database);
void printAndDestroyTakeOffFlights(TakeOffFlightDatabase database);

void destroyLandingFlights(LandingFlightHoursDatabase database);
void destroyTakeOffFlights(TakeOffFlightDatabase database);


#endif //UNTITLED16_AIRPORTADT_H
