class Robot:

    def __init__(self, idNo, location, status=True):
        """
        Arguments:
            idNo: robot identification number
            location: cell location (e.g. 'A3')
            status: True if online, False if offline (default: True)
        """
        self.idNo = idNo
        self.location = location
        self.status = status

    def __str__(self):
        status_str = "Online" if self.status else "Offline"
        return f"Robot {self.idNo} | Status: {status_str} | Location: {self.location}"

    def moveBot(self, newLocation):
        """Change the robot's location."""
        self.location = newLocation
        print(f"Robot {self.idNo} moved to {self.location}")

    def changeStatus(self):
        """Toggle the robot's online/offline status."""
        self.status = not self.status
        status_str = "Online" if self.status else "Offline"
        print(f"Robot {self.idNo} is now {status_str}")
        
        # --- Test Script ---
robot1 = Robot(1, 'A3')
robot2 = Robot(2, 'C7', status=False)

print(robot1)
print(robot2)

robot1.moveBot('B5')
print(robot1)

robot2.changeStatus()
print(robot2)

robot1.changeStatus()
robot1.changeStatus()
print(robot1)
