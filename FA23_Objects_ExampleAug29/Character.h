#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
public:
    // Constructor(s)
    Character();
    Character(int hp);
    ~Character();

    // Member Functions (methods)
    void heal(int hp);
    void damage(int hp);
    
    // Getter and Setter methods
    int getHp() const;
    void setHp(int hp);

private:
    // Member Variables
    int m_hp;

};

#endif // CHARACTER_H
