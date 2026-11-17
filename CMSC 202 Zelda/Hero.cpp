#include "Hero.h"

// Name: Hero(string name, int health) - Overloaded Constructor                                                                                                                                           
  // Description: Used for hero. Provides random weapon using RandomWeapon.                                                                                                                                 
  // Preconditions: None                                                                                                                                                                                    
  // Postconditions: Used to populate hero (Link)
Hero::Hero(string name, int health) {
  //m_name = name
    m_name = name;

    //m_health = health
    m_health = health;

    //m_rupees  = 0l
    m_rupees = 0;

    //m_weapon = nullptr
    m_weapon = nullptr;

    //RandomWeapon
    RandomWeapon();
}
// Name: ~Hero Destructor                                                     
  // Description: Deallocates the weapon                                        
  // Preconditions: None                                                        
  // Postconditions: Used to deallocate anything dynamically allocated
Hero::~Hero() {
  //if statement
    if (m_weapon != nullptr) {
      //delete weapon
        delete m_weapon;

	//m_weapon = nullptr
        m_weapon = nullptr;
    }
}
// Name: Attack()                                                             
  // Description: Calls the weapon's attack                                     
  // Preconditions: None                                                        
  // Postconditions: Returns damage
int Hero::Attack() {
  //if statement
    if (m_weapon != nullptr) {
      //return
        return m_weapon->Attack();
    }
    return 0; // No weapon, no damage
  
}
// Name: GetName()                                                            
  // Description: Returns the current name                                      
  // Preconditions: None                                                        
  // Postconditions: Returns the current name
string Hero::GetName() {
  //return m_name
    return m_name;
}
// Name: SetName()                                                            
  // Description: Updates m_name with a new name                                
  // Preconditions: None                                                        
  // Postconditions: Updates m_name
void Hero::SetName(string name) {
  //m_name = name
    m_name = name;
}
// Name: GetHealth()                                                          
  // Description: Returns the health of the hero                                
  // Preconditions: None                                                        
  // Postconditions: Returns the health of the hero
int Hero::GetHealth() {
  //return m_health
    return m_health;
}
// Name: SetHealth(int)                                                       
  // Description: Updates m_health of the hero                                  
  // Preconditions: None                                                        
  // Postconditions: Updates m_health of the hero
void Hero::SetHealth(int health) {
  //m_health = health
    m_health = health;
}
// Name: GetRupee()                                                           
  // Description: Returns the rupee of the hero                                 
  // Preconditions: None                                                        
  // Postconditions: Returns the rupee of the hero
int Hero::GetRupee() {
  //return m_rupees
    return m_rupees;
}
// Name: SetRupee(int)                                                        
  // Description: Updates m_rupee of the hero                                   
  // Preconditions: None                                                        
  // Postconditions: Updates m_rupee of the hero
void Hero::SetRupee(int rupees) {
  //set rupees
    m_rupees = rupees;
}
// Name: RandomWeapon                                                                                                                                                                                     
  // Description: Dynamically allocates random weapon (sword, bomb, or boomerang)                                                                                                                           
  //              Indicates which weapon the hero starts with.                                                                                                                                              
  // Preconditions: Called when hero is instantiated                                                                                                                                                        
  // Postconditions: Updates m_weapon to point at random weapon
void Hero::RandomWeapon() {
  //if statement
    if (m_weapon != nullptr) {
      //delete
        delete m_weapon;

	//m_weapon = nullptr
        m_weapon = nullptr;
    }

    // Generate a random number (0, 1, or 2) to determine the starting weapon
    int weaponChoice = rand() % 3;

    //switch statement
    switch (weaponChoice) {
        case 0:
            m_weapon = new Sword(WEAPON_BASE);
            break;
        case 1:
            m_weapon = new Boomerang(WEAPON_BASE);
            break;
        case 2:
            m_weapon = new Bomb(WEAPON_BASE);
            break;
        default:
            break;
    }
}
// Name: ImproveWeapon()                                                      
  // Description: Improves m_weapon (1 damage for each 3 rupees) by calling     
  //              the weapon's ImproveWeapon                                    
  // Preconditions: None                                                        
  // Postconditions: Increases m_weapon and decreases m_rupees
void Hero::ImproveWeapon(int rupees) {
  //if statement
    if (m_weapon != nullptr) {
      //m_rupees -=rupees
        m_rupees -= rupees;

	//m_weapon ->ImproveWeapon
        m_weapon->ImproveWeapon(rupees / 3);
    }
}
// Name: SpecialAttack()                                                      
  // Description: Calls the weapon's special attack                             
  // Preconditions: None                                                        
  // Postconditions: Used to attack an enemy using the weapon's special attack  
int Hero::SpecialAttack() {
  //if statement
    if (m_weapon != nullptr) {

      //return
        return m_weapon->SpecialAttack();
    }
    return 0; // No weapon, no special attack
}
// Name: Overloaded <<                                                        
  // Description: Prints the details of the hero (just name and health)         
  // Preconditions: None                                                        
  // Postconditions: Returns an ostream with output of hero
ostream& operator<<(ostream& os, Hero& hero) {
    os << "Name: " << hero.m_name << " | Health: " << hero.m_health;
    return os;
}
