from tkinter import *

class CanvasDemo:
    def __init__(self):
        window  = Tk()
        window.title("Canvas Demo")

        self.canvas = Canvas(window, background= "white", width=400, height=200)
        self.canvas.pack()

        frame = Frame(window)
        frame.pack()
        btRectangle = Button(frame, text="Rectangle", command=self.displayRectangle)
        btClear = Button(frame, text="Clear", command=self.clearCanvas)
        btClear.grid(row=1, column=2)
        btRectangle.grid(row=1, column=1)
        
        window.mainloop()

    def displayRectangle(self):
        self.canvas.create_rectangle(10, 10, 190, 190, tags = "rect")
    def clearCanvas(self):
        self.canvas.delete("rect")

CanvasDemo()