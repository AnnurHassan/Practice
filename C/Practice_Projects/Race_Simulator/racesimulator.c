#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section
struct Race {
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName[20];
    char firstPlaceRaceCarColor[20];

};

struct RaceCar {
    char driverName[20];
    char raceCarColor[20];
    int totalLapTime;

};

// Print functions section
void printIntro() {
    printf("Welcome to our main event digital race fans!\n\nI hope everybody has their snacks because we are about to begin!\n\n");
}

void printCountDown() {
    printf("Racers Ready! In...\n");
    for (int i = 5; i > 0; i--) {
        printf("%d\n", i);
    }
    printf("Race!\n\n");
}

void printFirstPlaceAfterLap(struct Race race) {
    printf("After lap number %d\n", race.currentLap);
    printf("First Place Is: %s in the %s race car!\n\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race) {
    printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was great race and everybody have a goodnight!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
} 


// Logic functions section
int calculateTimeToCompleteLap() {
    int speed = rand() % 3 + 1;
    int acceleration = rand() % 3 + 1;
    int nerves = rand() % 3 + 1;
    return speed + acceleration + nerves;
}

void updateRaceCar(struct RaceCar* raceCar) {
    raceCar->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
    if (raceCar1->totalLapTime >= raceCar2->totalLapTime) {
        strcpy(race->firstPlaceDriverName, raceCar1->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar1->raceCarColor);
    }
    else {
        strcpy(race->firstPlaceDriverName, raceCar2->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar2->raceCarColor);
    }
}

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
    struct Race race = {5, 1, "", ""};
    
    for (int i = 0; i < race.numberOfLaps; i++) {
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);
        updateFirstPlace(&race, raceCar1, raceCar2);
        printFirstPlaceAfterLap(race);
        race.currentLap += 1;
    }
    printCongratulation(race);
}

int main() {
	srand(time(0));

    struct RaceCar raceCar1 = {"Hamilton", "Black", 0};
    struct RaceCar raceCar2 = {"Verstappen", "Red", 0};
    printf("============================================\n");
    printIntro();
    printCountDown();
    startRace(&raceCar1, &raceCar2);
    printf("============================================\n");
  
};