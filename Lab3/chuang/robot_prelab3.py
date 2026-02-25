class Robot:
    
    # Robot class with ID number, status (online/offline), and location.
    

    def __init__(self, id_number, status=True, location="A1"):
        """
        Parameters:
        id_number : int or str
            Robot ID number
        status : boolean
            True = online, False = offline
        location : str
            Cell location (ex/ "A3")
        """
        
        self.id_number = id_number
        self.status = status
        self.location = location

    def __str__(self):
        # returning readable output when print(robot) is used.
        if self.status:
            state = "online"
        else:
            state = "offline"
        return f"Robot {self.id_number} is {state} at location {self.location}"

    def moveBot(self, new_location):
        
        # Changing robot's location.
        """
        Parameters:
        new_location : str
            New cell location (ex/ "B2")
        """
        self.location = new_location

    def changeStatus(self):
        
        # Toggle the robot status between online and offline.
        self.status = not self.status


# Verifying the class works

if __name__ == "__main__":
    # Create robot instances
    bot1 = Robot(1, True, "A3")
    bot2 = Robot(2, False, "C1")

    # PrintING initial states
    print("Initial robots:")
    print(bot1)
    print(bot2)
    print()

    # Move bot1
    print("Moving bot1 to B4...")
    bot1.moveBot("B4")
    print(bot1)
    print()

    # Toggle bot2 status
    print("Toggling bot2 status...")
    bot2.changeStatus()
    print(bot2)
    print()

    # Toggle bot1 status and move again
    print("Toggling bot1 status and moving to D2...")
    bot1.changeStatus()
    bot1.moveBot("D2")
    print(bot1)
