#include<bits/stdc++.h>
using namespace std;
class Mob { //abstract class
   public:
       Mob (int health = 100);
       virtual void Greet() const = 0; //pure virtual member function
       virtual void DisplayHealth() const;
  
   protected:
       int m_health;
};
Mob :: Mob (int health) :
   m_health(health)
{
   }
  
void Mob::DisplayHealth()   const {
   cout << "Health: " << m_health << endl;
}  
class Orc : public Mob {
   public :
       Orc(int health = 120);
       virtual void Greet() const;
};
Orc::Orc(int health):
   Mob(health)
{
   }
  
void Orc::Greet()   const {
   cout << "The orc grunts hello.\n";
}
class Minion : public Orc    {
   public:
       Minion (int health = 90);
       virtual void Greet() const;
};
Minion::Minion(int health):
   Orc(health)
{
   }
void Minion::Greet() const {
   cout << "Minion says hello" << endl;
}
class Warrior : public Orc    {
   public:
       Warrior (int health = 91);
       virtual void Greet() const;
};
Warrior::Warrior(int health):
   Orc(health)
{
   }
void Warrior::Greet() const {
   cout << "Warrior says hello" << endl;
}
class Boss: public Orc    {
   public:
       Boss (int health = 92);
       virtual void Greet() const;
};
Boss::Boss(int health):
   Orc(health)
{
   }
void Boss::Greet() const {
   cout << "Boss says hello" << endl;
}
class Human : public Mob {
   public :
       Human(int health = 80);
       virtual void Greet() const;
};
Human::Human(int health):
   Mob(health)
{
   }
  
void Human::Greet()   const {
   cout << "The Human says hello.\n";
}
class Elf : public Mob {
   public :
       Elf(int health = 180);
       virtual void Greet() const;
};
Elf::Elf(int health):
   Mob(health)
{
   }
  
void Elf::Greet()   const {
   cout << "The Elf says hello.\n";
}

class Dwarf : public Mob {
   public :
       Dwarf(int health = 130);
       virtual void Greet() const;
};
Dwarf::Dwarf(int health):
   Mob(health)
{
   }
  
void Dwarf::Greet()   const {
   cout << "The Dwarf says hello.\n";
}
int main () {
  
   Mob* pHuman = new Human();
  
   Mob* pElf = new Elf();
  
   Mob* pDwarf = new Dwarf();
  
   Mob* pOrc = new Orc();
  
   Mob* pMinion = new Minion();
  
   Mob* pWarrior = new Warrior();
  
   Mob* pBoss = new Boss();
  
   cout << "Introducing new Game Mob Charaters" << endl;
  
   cout << "Choose the character you want to Greet" << endl;
   cout << "1.Human 2.Elf 3.Dwarf 4.Orc 5.Minion 6.Warrior 7.Boss"<< endl;
   cout << "To exit press 8" << endl;
  
   while(1) {
       int x;
   cin >> x;
  
   switch(x) {
       case 1 :
           pHuman -> Greet ();
           pHuman -> DisplayHealth();
           break;
          
       case 2 :
           pElf -> Greet ();
           pElf -> DisplayHealth();
           break;
          
       case 3 :
           pDwarf -> Greet ();
           pDwarf -> DisplayHealth();
           break;
          
       case 4 :
           pOrc -> Greet ();
           pOrc -> DisplayHealth();
           break;
          
       case 5 :
               pMinion -> Greet ();
               pMinion -> DisplayHealth();
               break;
       case 6 :
           pWarrior -> Greet ();
           pWarrior -> DisplayHealth();
           break;  
          
       case 7 :
           pBoss -> Greet ();
           pBoss -> DisplayHealth();
           break;
          
       case 8 :
           exit(1);  
      
       default:
           cout << "Choose a valid option" << endl;                                                          
   }
  
   }
  
   return 0;
}
