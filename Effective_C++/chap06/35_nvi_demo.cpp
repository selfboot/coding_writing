/*
 * @Author: xuezaigds@gmail.com
 * @Last Modified time: 2016-08-18 21:32:27
 */

#include <iostream>     // std::cout

class GameCharacter{
public:
    void healthValue(int year=2015) const{
        std::cout << "Before call virtual function" << std::endl;
        std::cout << "Cal year: " << doHealthValue(year) << std::endl;
        std::cout << "After call virtual function" << std::endl;
    }
    int birth_year = 1990;
private:
    virtual int doHealthValue(int year) const{
        return year - this->birth_year;
    }
};

class SFCharacter:public GameCharacter{
private:
    virtual int doHealthValue(int year) const{
        return year + 10 - this->birth_year;
    }
};
int main () {
    GameCharacter *base = new GameCharacter();
    GameCharacter *sf = new SFCharacter();
    base->healthValue();
    sf->healthValue();

    return 0;
}

/*
 * Before call virtual function
 * Cal year: 25
 * After call virtual function
 * Before call virtual function
 * Cal year: 35
 * After call virtual function
 */
