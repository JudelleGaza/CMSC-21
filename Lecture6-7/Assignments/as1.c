// Judelle Gaza - CMSC 21 - Lec 6-7

#include <stdio.h>
#define ARRAY 8       // Macro for defining the size of the Array; the multidimensional array is 8 x 8 so one variable is enough

// ================================== RECURSIVE FUNCTION FOR NETWORK NAVIGATION ==================================
/* This function is a recursion and has 4 conditions */
void NetworkNavigation(int currentpoint, int network[ARRAY][ARRAY], char stations[ARRAY]){
    printf("%c \n", stations[currentpoint]);                                      // Prints out the current point
    /* If the current point of the user is 2 or 3, then the user is at the Charging Station C or D */
    if (currentpoint == 2 || currentpoint == 3){
        printf("You have arrived at charging station %c\n",stations[currentpoint]);}
        
    /* If network[currentpoint][2] is == 1, then the user is at a direct path to Charging Station C */
    else if (network[currentpoint][2]){
        printf("Now at point ");
        NetworkNavigation(2, network, stations);}

    /* If network[currentpoint][3] is == 1, then the user is at a direct path to Charging Station C */  
    else if (network[currentpoint][3]){
        printf("Now at point ");
        NetworkNavigation(3, network, stations);}

    /* If the user is not at C or D, and not in the direct path to C or D then the user has to navigate through other points, 
       and start a recursive call until the user arrives at charging station C or D */
    else{
        for (int nextpoint = 0; nextpoint < ARRAY; nextpoint++) {
            if ((nextpoint != currentpoint) && (network[currentpoint][nextpoint])) {
                printf("Now at point ");
                NetworkNavigation(nextpoint, network, stations);
                break;}
        }
    }
}
// ================================================= MAIN FUNCTION ===================================================
void main(){
    int startpoint;         // Variable for user input starting point
    // -------------------------- THE ARRAY OF ROAD NETWORKS -------------------------------
    int road_networks[ARRAY][ARRAY] = {
    //       A  B [C][D] E  F  G  H      
            {1, 1, 0, 0, 0, 1, 0, 0},   //A
            {1, 1, 1, 0, 0, 0, 0, 0},   //B
            {0, 1, 1, 0, 1, 1, 0, 0},   //C
            {0, 0, 0, 1, 1, 0, 0, 0},   //D
            {0, 0, 0, 1, 1, 0, 0, 0},   //E
            {1, 0, 1, 0, 0, 1, 0, 0},   //F
            {1, 0, 0, 1, 0, 0, 1, 0},   //G
            {0, 0, 0, 0, 0, 1, 0, 1},}; //H

    // -------------------------- ARRAY OF THE STATIONS AND POINTS --------------------------
    char point_stations[ARRAY] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    /*========================= PRINTING OUT THE ADJACENCY MATRIX =============================*/
    /* Used 2 for Loops ~~ The first for loop is for printing out the first row which are the station points
       The second for loop is a nested loop for printing out the rest of the rows*/
    printf("     ");                                        //Add Spacing 
    for (int j = 0; j < ARRAY; j++ ){                      //Iterate 8 times
        if (j == 2 || j == 3){                             //The special cases for letters C and D which are the charging stations- use "[]"
            printf("      [%c]", point_stations[j]);}
        else{                                              //Printing the points [A,B,E,F,G,H]
            printf("%8c ", point_stations[j]);}}
    printf("\n");
    /* Nested For loop that prints out the rest of the rows along with the road networks */
    for (int j = 0; j < ARRAY; j++ ){           
        if (j == 2 || j == 3){                             //Prints out C and D with "[]"
            printf("[%c] ", point_stations[j]);}
        else{                                              //Printing the points [A,B,E,F,G,H]
            printf(" %-3c", point_stations[j]);}
        for (int k = 0; k< ARRAY; k++){                    //Prints out the road networks values that corresponds with the stations
            printf("%9d", road_networks[j][k]);}
        printf("\n");
    }

    /*============= While Loop For Multiple User Input Given That User Input Is Invalid =====================
        Asks user for the starting point, checks if the user input is valid [0-7], breaks if valid, loops if  */
    while(1) {               
        printf("\n========== Which point are you located? ==========\n0 - A\n1 - B\n2 - C\n3 - D\n4 - E\n5 - F\n6 - G\n7 - H\nInput [0-7]:");
        scanf("%d", &startpoint);
        if (startpoint < 0 || startpoint > 7){               
            printf("Input Invalid. Try Again.\n");} 
        else{break;}       
    }
    /*============= CALLING RECURSIVE FUNCTION TO NAVIGATE THROUGH POINTS AND TO ARRIVE AT A CHARGING STATION =============
        The function below takes the starting point of the user, and the road networks multidimensional array, as well as the point stations
        Since the function is recursive it terminates ones the conditions are met -> that is if the user arrives at a charging station*/
    printf("You are at point ");
    NetworkNavigation(startpoint,road_networks,point_stations);
}