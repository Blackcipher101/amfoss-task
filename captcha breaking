import pytesseract
from PIL import Image
pytesseract.pytesseract.tesseract_cmd = r'C:\Program Files (x86)\Tesseract-OCR\tesseract.exe'
file=input(str("enter file"))
text=pytesseract.image_to_string(Image.open(file))
q=text.__len__()
value = int(text[0])
waste= int(text[2])
if text[1]=="+":
    print(value+waste)
elif text[1]=="-":
    print(value-waste)
elif text[1]=="*":
    print(value*waste)
elif text[1]=="/":
