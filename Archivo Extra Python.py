class Move:
    def __init__(self, name, type):
        self.name = name
        self.type = type
    
    def toString(self):
        return f"Move: {self.name}, Type: {self.type}"
    
class Pokemon:
    def __init__(self, name, type, move):
        self.name = name
        self.type = type
        self.move = move

    def toString(self):
        print(f"Pokemon: {self.name} , Type: {self.type} \nMove: {self.move.name}, Type: {self.move.type}")

Froakie = Pokemon("Froakie", "Water", Move("Water Gun", "Water"))
Froakie.toString()