from tkinter import *

# window = Tk()
# label = Label(window, text="Been two years since I used this thing")

# button = Button(window, text="Click me!")
# label.pack()
# button.pack()

# def processOk():
#     print("Ok was clicked")

# def processCancel():
#     print("cancel was clicked")

# okButton = Button(window, text="Ok", width=10, bg="blue", fg="white", command=processOk)
# cancelButton = Button(window, text = "Cancel", fg="green", bg="purple",command=processCancel)

# okButton.pack()
# cancelButton.pack()
# window.mainloop()

class WidgetsDemo:
    def __init__(self) -> None:
        window = Tk()
        window.title("Widgets Demo")

        frame1 = Frame()
        frame1.pack()
        self.v1 = IntVar()
        self.v2 = IntVar()

        checkBtnBold = Checkbutton(frame1, text="Bold", 
                        variable=self.v1, command=self.processCheckButton )
        radioButtonRed = Radiobutton(frame1, text="Red", bg="red", variable=self.v2,
                         value=1, command=self.processRadioButton)
        radioButtonYellow = Radiobutton(frame1, text="Yellow", bg="yellow",
                            variable= self.v2, value=2, command=self.processRadioButton)
        checkBtnBold.grid(row=1, column=1)
        radioButtonRed.grid(row=1, column=2)
        radioButtonYellow.grid(row = 1, column=3)

        frame2 = Frame(window)
        frame2.pack()

        label = Label(frame2, text="Enter your name")
        self.name = StringVar()
        entryName = Entry(frame2, textvariable=self.name)
        btGetName = Button(frame2, text="Get name", command=self.processButton)
        message = Message(frame2, text="It is a widgets demo")
        label.grid(row=1, column=1)
        entryName.grid(row=1, column=2)
        btGetName.grid(row=1, column=3)
        message.grid(row=1, column=4)

        text = Text(window)
        text.pack()
        text.insert(END,
                    "Tip\nThe best way to learn Tkinter is to read " )
        text.insert(END, "these carefully designed examples and use them")
        text.insert(END, "to create your applications")

        window.mainloop()

    def processCheckButton(self):
        print("Check button is " + 
              ("checked" if self.v1.get() == 1 else "unchecked"))
        
    def processRadioButton(self):
        print(("Red" if self.v2.get() == 1 else "Yellow") + " is selected. ")

    def processButton(self):
        print("Your name is " + self.name.get())


# WidgetsDemo()
