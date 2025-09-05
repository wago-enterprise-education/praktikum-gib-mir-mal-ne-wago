# Ideen und Links aus der Entwicklung

## Programmcode mit Microchip Studio und programmierung mit Atmel ICE

- [SPI Header](https://developerhelp.microchip.com/xwiki/bin/view/software-tools/programmers-and-debuggers/atmel-ice/connecting-to-avr-and-sam-target-devices/connecting-to-spi-target/)
- [UPDI als Alternative zu SPI](https://developerhelp.microchip.com/xwiki/bin/view/software-tools/programmers-and-debuggers/avr-updi-info/)
- [ATTiny24A Datenblatt](https://ww1.microchip.com/downloads/en/DeviceDoc/ATtiny24A-44A-84A-DataSheet-DS40002269A.pdf)
- [Atmel ICE LEDs](https://onlinedocs.microchip.com/pr/GUID-DDB0017E-84E3-4E77-AAE9-7AC4290E5E8B-en-US-4/index.html?GUID-89DABDC9-8CF7-4660-A64D-AAA0CC3FFA4C)
- [Atmel ICE Cable](https://shop.myavr.de/index.php?sp=article.sp.php&artID=200183)
- [Includes (e.g. util/delay.h)](https://onlinedocs.microchip.com/pr/GUID-317042D4-BCCE-4065-BB05-AC4312DBC2C4-en-US-2/index.html?GUID-4E858AD6-A765-4972-84FE-CD55FC481B2F)
- [Delay example](https://electronics.stackexchange.com/questions/660389/delay-h-on-attiny45-vs-attiny461-in-microchip-studio)
- Die jetzige Version hat den Reset fehlerhaft auf GND, so dass der Controller sich in andauerndem Reset befindet. Daher muss auf dem Controller die DSBLRST Fuse gesetzt werden. Danach lässt der Controller sich nicht erneut programmieren, es sei denn es wird in high-voltage [ATTiny Fuse Reset](https://sites.google.com/site/wayneholder/attiny-fuse-reset) durchgeführt
- [UPDI High Voltage](https://developerhelp.microchip.com/xwiki/bin/view/software-tools/programmers-and-debuggers/avr-updi-info/)

## Anpassungen für die nächste Version

- [ ] ~~Controller mit UPDI verwenden~~
- [ ] ~~UPDI Interface auf der Platine herausführen~~
- [ ] ~~UPDI Interface und Spannungsversorgung mit einem Anschluss (Batterie oder PC)~~
- [ ] ~~Ggf. Jacdac fähig für Calliope~~
- [x] Reset pin auf VCC ziehen, falls nicht UPDI
- [ ] ~~kleineren Controller verwenden~~
- [ ] ~~Reset Button vorsehen?~~
- [ ] ~~MP3 Wiedergabe des Songs~~
- [ ] Beim Programmieren per USB Kabel (FTDI) auch Spannungsversorgung herstellen
- [ ] ~~USB Interface?~~
- [x] Widerstände mit etwas mehr Abstand der Lötpads 10mm statt 7.5mm (EasyEDA: R_AXIAL-0.4)
- [x] Padgröße LED/Widerstand 1.9mm/1.9mm // Loch 0.9mm
- [x] Padgröße DIL 2mm/1.5mm // Loch 1mm
- [x] Padgröße picoMAX 2.2mm/2.2mm // Loch 1.2mm
- [ ] ~~Textool Sockel für Programmierversion sollte möglich sein, falls µC ohne UPDI in DIL~~
- [x] Zweite Platine mit 3mm Bohrungen als Schablone für die LEDs -> Fixierung mit 3D Druck

## Sound

- [MP3 Modul](https://www.reichelt.de/de/de/shop/produkt/arduino_-_dfplayer_mini_mp3_wav_microsd-karte-289897)
- [Kleinlausprecher](https://www.reichelt.de/de/de/shop/produkt/kleinlautsprecher_al-23p_0_1w_8ohm-145879)
- [SD Karte](https://www.reichelt.de/de/de/shop/produkt/microsdhc-speicherkarte_4gb_intenso_class_10-126585)
