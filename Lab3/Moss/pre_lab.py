


class Robot:

    def __init__(self,id_1: int = 0,  status_1: str = "idle", location_1: tuple[int,int] = (0,0)) -> None:
        self.id = id_1
        self.status = status_1
        self.location = location_1
    
    def moveBot(self, target_location: tuple[int,int] = None) -> None:
        if target_location:
            self.location = target_location
    
    def changeStatus(self, target_status: str = None) -> None:
        if target_status:
            self.status = target_status 

    def __str__(self) -> str:
        return f"Robot ID: {self.id}, Location: {self.location}, Status: {self.status}"
    

if __name__ == "__main__":
    r = Robot(1,"running", (1,3))
    print(r)
    r.moveBot((2,2))
    r.changeStatus("stopped")
    print(r)

