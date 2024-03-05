from tkinter import *

class TestingTkinter:
    def __init__(self):
        window = Tk()
        window.title("Testing radiobuttons and functions")
        frame1 = Frame(window, width= 20, background = "black")
        frame1.pack()
        message = Message(frame1, text="Choose a color")
        # message.pack()
        self.var1 = IntVar()
        self.var2 = IntVar()
        self.var3 = IntVar()
        self.radioBtn1 = Radiobutton(frame1,padx=1, width=5, text="red", bg="Red", variable=self.var1, value=1,command=self.toggleRadioButton)
        self.radioBtn2 = Radiobutton(frame1, pady= 1, width=5, text="blue", bg="Blue", variable=self.var1, value=2,command=self.toggleRadioButton)
        self.radioBtn3 = Radiobutton(frame1, padx= 1, activebackground="yellow", width=5, text="green", bg="Green", variable=self.var1, value=3,command=self.toggleRadioButton)

        self.radioBtn1.grid(row=1,column=1)
        self.radioBtn2.grid(row=1,column=2)
        self.radioBtn3.grid(row=1,column=3)
        message.grid(row=2, column=2)

        frame2 = Frame()
        frame2.pack()
        self.text = StringVar()
        message2 = Message(frame2, text="Enter your name: ")
        entry = Entry(frame2, textvariable=self.text)
        button = Button(frame2, text="Get name", command=self.getName)
        button.grid(row=1, column=3)
        message2.grid(row=1, column=1)
        entry.grid(row=1, column=2)
        # self.radioBtn1.pack()
        # self.radioBtn2.pack()
        # self.radioBtn3.pack()
        # radioBtn1.grid(row=1, column=1)
        window.mainloop()
        

    def toggleRadioButton(self) -> int:
        if self.var1.get() == 1:
            # self.radioBtn1["bg"] = "white"
            print("Red was selected")
        elif self.var1.get() ==  2:
            print("Blue was selected")
        else:
            print("Red was selected")
        return 0
    def getName(self):
        print("Your name is ", self.text.get())

TestingTkinter()