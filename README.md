# JamPad
jampad is my first hardware project, and my attempt at making a decent macropad!
It includes 7 keys for various macros ( *calculator hotkey anyone?* ) as well as one rotary encoder for media control. 

It's main body is made of two 3-d printed outer shells, held together by m3 screws and heat set inserts with an acrylic plate sandwiched between. This also means the plate can be swapped out relatively painlessly. 
for firmware, It currently has two QMK layers, with a mix of keys I dont have easy acess to on my main keyboard, and keycodes I thought were funny. 

The 128x32 OLED displays *very important and relevant* information, on loop. 
Overall, I enjoyed this project a fair bit, as it helped introduce me to pcb design something I had never done before. the case design was relatively painless, and designing around the specifics of the PCB was a fun challenge. 

The most annoying bit was the firmware, but I found that after a good while reading through the QMK and XAIO docs, I got the basics down. Once I got my hands on all the parts it assebled pretty much painlessly, and I only had to reprint the case once!

9/10 project. Would do again.
Have some photos:


<img width="400"  alt="render1" src="https://github.com/user-attachments/assets/782c97a3-0ff6-4fba-b844-92acdbf6fb62" />
<img width="400"  alt="render2" src="https://github.com/user-attachments/assets/fbdd12f3-af45-4d60-899c-abfcfa7c66a8" />



# Bill of materials
- 7x Cherry MX-style keyswitches.
- 4x M3x12mm screws
- 4x M3 X D4.6 X L3.6
- 8x 1N4148 Diodes (through hole)
- 1x EC11 Rotary encoder
- 1x 0.91 inch SSD1306 OLED
- 14x Mill-Max 3305s or 0305s.
