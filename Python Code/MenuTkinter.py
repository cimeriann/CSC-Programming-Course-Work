from tkinter import *

class MenuDemo:
    def __init__(self) -> None:
        window = Tk()
        window.title("Menu Demo")
        menubar = Menu(window)
        window.config(menu = menubar)

        operationMenu = Menu(menubar, tearoff=0)
        menubar.add_cascade(label="Operation", menu=operationMenu)
        operationMenu.add_command(label="Add")
        operationMenu.add_command("Subtract", command="")



        window.mainloop()

MenuDemo()