class employee:
    def __init__(self,name,emp_id):
        self.name=name
        self.emp_id=emp_id
        self.salary=50000
        print("consrtuctor intailized")
        print(self.__dict__)
    def remove_salary(self):
        del self.salary
        print("\n after deleting 'salary within class")
        print(self.__dict__)
e1=employee("Anil Kumar",101)
