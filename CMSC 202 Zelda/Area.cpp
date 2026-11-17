#include "Area.h"

 //Name: Area (Overloaded Constructor)                                                                                                                                                                     
  //Precondition: Must have valid input for each part of a area                                                                                                                                             
  // First int is the unique identifier for this particular area.                                                                                                                                           
  // The first string is the name of the area                                                                                                                                                               
  // The second string is the description of the area                                                                                                                                                       
  // The last four ints are the unique identifier for adjacent areas                                                                                                                                        
  //     (-1 = no path)                                                                                                                                                                                     
  // North, East, South, and West                                                                                                                                                                           
  //Postcondition: Creates a new area
Area::Area(int id, string name, string desc, int north, int east, int south, int west) {
  // Set the id for area
    m_ID = id;

    // Set the name for area
    m_name = name;

    // Set the description for area
    m_desc = desc;

    // Set the direction for area for north
    m_direction[n] = north;

    // Set the direction for area for east
    m_direction[e] = east;

    // Set the directiob for area for south
    m_direction[s] = south;

    // Set the direction for area for west
    m_direction[w] = west;
    
}
//Name: GetName                                                                                                                                                                                           
  //Precondition: Must have valid area                                                                                                                                                                      
  //Postcondition: Returns area name as string
string Area::GetName() {
  //return m_name
    return m_name;
}
//Name: GetID                                                                 
  //Precondition: Must have valid area                                          
  //Postcondition: Returns area id as int
int Area::GetID() {
  //return m_ID
    return m_ID;
}
//Name: GetDesc                                                               
  //Precondition: Must have valid area                                          
  //Postcondition: Returns area desc as string
string Area::GetDesc() {
  //return m_desc
    return m_desc;
}
//Name: CheckDirection                                                                                                                                                                                    
  //Precondition: Must have valid area                                                                                                                                                                      
  //You pass it a char (N/n, E/e, S/s, or W/w) and if that is a valid exit it                                                                                                                               
  //returns the ID of the area in that direction                                                                                                                                                            
  //Postcondition: Returns id of area in that direction if the exit exists                                                                                                                                  
  //If there is no exit in that direction, returns -1    
int Area::CheckDirection(char myDirection) {
  // Initialize the area ID to -1
    int dirID = -1;

    //switch statements
    switch (myDirection) {
        case 'N':
        case 'n':

	  // Assign the ID of the area to the north
            dirID = m_direction[n];
            break;
        case 'E':
        case 'e':

	  // Assign the ID of the area to the east
            dirID = m_direction[e];
            break;
        case 'S':
        case 's':

	  // Assign the ID of the area to the south
            dirID = m_direction[s];
            break;
        case 'W':
        case 'w':

	  // Assign the ID of the area to the west
            dirID = m_direction[w];
            break;
        default:
            break;
    }

    //return dirID
    return dirID;
}
//Name: PrintArea                                                             
  //Precondition: Area must be complete                                         
  //Postcondition: Outputs the area name, area desc, then possible exits
void Area::PrintArea() {
   // Output the name 
    cout << "Area Name: " << m_name << endl;

    // Output the description 
    cout << "Area Description: " << m_desc << endl;

    //Possible exits
    cout << "Possible Exits:" << endl;

    //if statement
    if (m_direction[n] != -1) {
      // Output the ID of the area
        cout << "North: " << m_direction[n] << endl;
    }

    //if statemnt
    if (m_direction[e] != -1) {
      // Output the ID of the area
        cout << "East: " << m_direction[e] << endl;
    }

    //if statement
    if (m_direction[s] != -1) {
      // Output the ID of the area
        cout << "South: " << m_direction[s] << endl;
    }

    //if statement
    if (m_direction[w] != -1) {
      // Output the ID of the area
        cout << "West: " << m_direction[w] << endl;
    }
}
