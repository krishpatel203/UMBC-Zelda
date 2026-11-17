#include "Peahat.h"
// Name: Peahat(string name, int health, int damage, string desc)                                                                                                                                         
  // Description: Creates a new Peahat                                                                                                                                                                      
  // Preconditions: None                                                                                                                                                                                    
  // Postconditions: Can create a Peahat
Peahat::Peahat(string name, int health, int damage, string desc) : Enemy(name, health, damage, desc) {
    // Initialize any Peahat-specific properties here
}
// Name: SpecialAttack                                                                                                                                                                                    
  // Description: Defines the Peahat's special attack                                                                                                                                                       
  // Preconditions: None                                                                                                                                                                                    
  // Postconditions: Returns damage from special attack
int Peahat::SpecialAttack() {
    // Implement the special attack logic for Peahat here
    int damage =  PEAHAT_SPECIAL;

    //Special Damage Message
    cout << "A Peahat whips at you ferociously!" << endl;
    cout << "You take " << damage << " points of damage" << endl;

    //return damage
    return damage;
    
}
