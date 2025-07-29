#include <iostream>
#include <sstream>

class Move{
    protected:
    std::string name;
    std::string type;

    public:
    Move(const std::string &n, const std::string &t) : name(n), type(t){}

    virtual std::string getName() const{ return name;}
    virtual std::string getType() const{ return type;}

    virtual std::string toString() const {
        std::stringstream ss;
        ss << "Move Name: " << name << ", Type: " << type << std::endl;
        return ss.str();
    }

    virtual ~Move(){}
};

class Pokemon{
    private:
    std::string name;
    std::string mainType;
    Move *singleMove;

    public:
    Pokemon(const std::string &pName, const std::string &pMainType, Move *move):
        name(pName), mainType(pMainType), singleMove(move){}

    std::string toString () const{
        std::stringstream ss;
        ss << "Pokemon Name: " << name << ", Main Type: " << mainType << std::endl;
        ss << "Move Info: " << singleMove->toString();
        return ss.str();
    }

    ~Pokemon(){delete singleMove;}
};

int main(){
    Pokemon P1 = Pokemon("Froakie", "Water", new Move("Water Gun", "Water"));
    std::cout << P1.toString() << std::endl;
    return 0;
}