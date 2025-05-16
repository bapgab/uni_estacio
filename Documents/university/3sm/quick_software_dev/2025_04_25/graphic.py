#Criação de GUI - graphic user interface
#Uso da biblioteca tkinter para algumas funções básicas de manipulação de janela
import tkinter as tk 
import pdb
def create_main_window():
    root = tk.Tk()
    root.geometry("800x600")
    root.title("main window")
    label = tk.Label(root, text = "hello", font =('Aerial', 18))
    root.mainloop()

def create_button():
    pass

create_main_window()
