from tkinter import *

class MenuDemo:
    def __init__(self) -> None:
        window = Tk()
        window.title("Menu Demo")
        menubar = Menu(window)
        window.config(menu = menubar)

        operationMenu = Menu(menubar, tearoff=0)
        menubar.add_cascade(label="Operation", menu=operationMenu)
        operationMenu.add_command(label="Add", command=self.add)
        operationMenu.add_command(label="Subtract", command=self.subtract)
        operationMenu.add_command(label="Divide", command=self.divide)
        operationMenu.add_command(label="Multiply", command=self.multiply)

        exitMenu = Menu(menubar, tearoff=0)
        menubar.add_cascade(label="Exit", menu=exitMenu)
        exitMenu.add_command(label="Quit", command = window.quit)


        frame0 = Frame(window)
        frame0.grid(column=1, row=1, sticky=W)

        plusImage = PhotoImage(file="images/plus.png")
        minusImage = PhotoImage(file="images/minus.png")
        timesImage = PhotoImage(file="images/times.png")
        divideImage = PhotoImage(file="images/divide.png")

        Button(frame0, image=plusImage, command=self.add).grid(
            row=1, column=1, sticky=W
        )
        Button(frame0, image=minusImage, command=self.subtract).grid(
            row=1, column=2, sticky=W
        )
        Button(frame0, image=timesImage, command=self.multiply).grid(
            row=1, column=3, sticky=W
        )
        Button(frame0, image=divideImage, command=self.divide).grid(
            row=1, column=4, sticky=W
        )

        frame1 = Frame(window)
        frame1.grid(row=2, column=1, pady=10)
        Label(frame1, text="Number 1: ").pack(side=LEFT)
        self.v1=StringVar()
        Entry(frame1, width = 5, textvariable = self.v1, justify=RIGHT).pack(side=LEFT)
        self.v2 = StringVar()
        Entry(frame1, width = 5, textvariable = self.v2, 
        justify = RIGHT).pack(side = LEFT)
        Label(frame1, text = "Result:").pack(side = LEFT)
        self.v3 = StringVar()
        Entry(frame1, width = 5, textvariable = self.v3, 
        justify = RIGHT).pack(side = LEFT)
        
        # Add buttons to frame2
        frame2 = Frame(window) # Create and add a frame to window
        frame2.grid(row = 3, column = 1, pady = 10, sticky = E)


        Button(frame2, text = "Subtract", 
        command = self.subtract).pack(side = LEFT)
        Button(frame2, text = "Multiply", 
        command = self.multiply).pack(side = LEFT)
        Button(frame2, text = "Divide", 
        command = self.divide).pack(side = LEFT)
        window.mainloop()

    def add(self):
        self.v3.set(eval(self.v1.get()) + eval(self.v2.get()))
    def subtract(self):
        self.v3.set(eval(self.v1.get()) - eval(self.v2.get()))
    def multiply(self):
        self.v3.set(eval(self.v1.get()) * eval(self.v2.get()))
    def divide(self):
      
        self.v3.set(eval(self.v1.get()) / eval(self.v2.get()))

MenuDemo()