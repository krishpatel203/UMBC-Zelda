#include "Bomb.h"
// Name: Bomb(int damage)                                                                                                                                                                                 
  // Description: Creates a new Bomb                                                                                                                                                                        
  // Preconditions: None                                                                                                                                                                                    
  // Postconditions: Can create a Bomb
Bomb::Bomb(int damage) : Weapon(damage) {
}
// Name: SpecialAttack                                                                                                                                                                                    
  // Description: Defines the Bomb's special attack                                                                                                                                                         
  // Preconditions: None                                                                                                                                                                                    
  // Postconditions: Returns damage from special attack
int Bomb::SpecialAttack() {
  // Get the base damage
    int baseDamage = GetDamage();
    
    // Calculate the damage for the special attack, which is between 1/2 and 2 times the base damage
    int specialDamage = (baseDamage / 2) + (rand() % (baseDamage / 2 + 1));

    //Special Attack Damage
    cout << "You throw a bomb and it explodes" << endl;

    //return specialDamage
    return specialDamage;
}
