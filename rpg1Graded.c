/*
    Name: Tyler Ailes
    Class: CSCI 155
    Date: Oct 2, 2019
    Desc: Walks through an rpg based on user input
*/

#include <stdio.h>

int main (void){
    int decison_1; // ints for decisions to go under
    int decison_2;
    int decison_3;
    int decison_4;
    int decison_5;
    int stress = 50; // baseline stats
    int happiness =  100;
    int confidence = 85;
    int grades = 90;
    int energy = 80;
    
    // printing the starting dialogue 
    printf("Welcome to the College Student RPG!\n");
    printf("(0 = no, 1 = yes)\n\n");
    printf("Starting Stats: \n");
    printf("Happiness: %d\nGrades: %d%% average\nConfidence: %d\n", happiness, grades, confidence);
    printf("Stress: %d\nEnergy: %d\n\n", stress, energy);
   
    // first prompt (indent)
    printf("After a long weekend of homework and no sleep, you awake to your alarm at 7:30 for");
    printf(" 8am class. Do you snooze and miss class for an extra hour of sleep? (0/1):\n");
    scanf("%d", &decison_1);
    printf("\n");
    
    if (decison_1 == 1) { // yes drops your grades and confidence, ups energy
        printf("You snoozed your alarm and slept until 9\n\n");
        grades = grades - 5;
        confidence = confidence - 10;
        energy = energy + 15;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
        printf("You wake up at 9 and consider going on a run before your next class at noon.");
        // added the final print statement inside the if in order to keep the flow smooth
    } else { // no ups your grades and confidence, drops happiness, stress, and energy
        printf("You went to class and learned new material that will be useful for the test!\n\n");
        grades = grades + 2;
        happiness = happiness - 1;
        stress = stress - 10;
        confidence = confidence + 5;
        energy = energy - 20;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
        printf("After class you consider going on a run before your next class at noon.");
        // added the final print statement inside the if in order to keep the flow smooth
    }

    // second prompt
    printf("Do you go on a run? (0/1):\n");
    scanf("%d", &decison_2);
    printf("\n");

    if (decison_2 == 1) { // yes ups confidence, downs stress and energy
        printf("You go on a 2.5 mile run and clear your mind.\n\n");
        stress = stress - 15;
        confidence = confidence + 10;
        energy = energy - 30;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
    } else { // no ups grades and energy, downs confidence and stress
        printf("You sit in your dorm and eat Oreos while studying\n\n");
        grades = grades + 3;
        confidence = confidence - 5;
        stress = stress - 2;
        energy = energy + 3;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
    }

    // third prompt
    printf("After your class gets out at 2pm, you head to get lunch.");
    printf(" Do you get a healthy salad (0) or a greasy pizza and fries (1)?:\n");
    scanf("%d", &decison_3);
    printf("\n");
    
    if (decison_3 == 1) { // pizza max's happiness, ups energy to 95, downs confidence, ups stress
        printf("You decide to carb load with a pizza and fries.\n\n");
        happiness = 100;
        confidence = confidence - 5;
        energy = 95;
        stress = stress + 5;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
    } else { // salad downs happiness, ups confidence and energy
        printf("You make the smart decision and get a salad.\n\n");
        happiness = happiness - 4;
        confidence = confidence + 10;
        energy = energy + 1;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
    }
    
    // fourth prompt
    printf("Now that you're done with classes for the day, do you go to the gym and play pickup?");
    printf(" (0/1):\n");
    scanf("%d", &decison_4);
    printf("\n");
    
    if (decison_4 == 1) { // yes ups happiness and ups confidence, downs stress, grades, energy
        printf("You go play pickup and do well in all your games until 7pm.\n\n");
        happiness = 100;
        stress = stress -3;
        confidence = 95;
        energy = energy - 40;
        grades = grades - 5;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
    } else { // no ups happiness, energy, and stress
        printf("You choose to stay in your room and nap until 8pm.\n\n");
        happiness = 95;
        stress = stress + 5;
        energy = 97;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
    }

    // final prompt
    printf("Do you stay up until 2am studying for your test at 9am tomorrow? (0/1):\n");
    scanf("%d", &decison_5);
    printf("\n");
    
    if (decison_5 == 1) { // yes downs happiness, stress, and energy, ups confidence and grades
        printf("You feel very prepared for the test, however extremely exhausted!\n\n");
        happiness = happiness - 10;
        stress = stress - 15;
        confidence = 98;
        grades = grades + 5;
        energy = energy - 20;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
    } else { // no ups stress and energy, downs grades and confidence
        printf("You fall asleep worrying about the test!\n\n");
        stress = stress + 20;
        energy = 100;
        grades = grades - 10;
        confidence = confidence - 15;
        printf("New Stats:\n");
        printf("Happiness: %d\nGrades: %d%% average\n", happiness, grades);
        printf("Confidence: %d\nStress: %d\nEnergy: %d\n\n", confidence, stress, energy);
    }

    printf("The End!\n");


    return 0;
}

// E