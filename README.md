# Praktikum - Gib mir mal ´ne Wago

## Material

- 28 LED 3mm grün 2mA (Musterbestellung WAGO Artikel 51155724)
- 1 Stiftleiste (Musterbestellung WAGO Artikel 2091-1702 60418345)
- 1 Picomax (Musterbestellung WAGO Artikel 2091-1122 20911122)
- 1 Batteriehalter Goobay (Reichelt HALTER 2XAA)
- 4 Widerstand 33 (Reichelt Metall 33,0 Ohm MF0207FTE52-33R)
- 1 Widerstand 10k (Reichelt Metall 10,0 kOhm MF0207FTE52-10K)
- 1 Mikrocontroller ATTiny24A-PU DIL14 (Distrelec 30301902)

## Firmware

Die aktuelle Version der Firmware befindet sich im Verzeichnis `firmware_v1.0` als Microchip Studio Projekt. **Nach** dem programmieren des Controllers muss die fuse RSTDISBL auf high gesetzt werden!

## Programmcode mit Microchip Studio und programmierung mit Atmel ICE

- [SPI Header](https://developerhelp.microchip.com/xwiki/bin/view/software-tools/programmers-and-debuggers/atmel-ice/connecting-to-avr-and-sam-target-devices/connecting-to-spi-target/)
- [UPDI als Alternative zu SPI](https://developerhelp.microchip.com/xwiki/bin/view/software-tools/programmers-and-debuggers/avr-updi-info/)
- [ATTiny24A Datenblatt](https://ww1.microchip.com/downloads/en/DeviceDoc/ATtiny24A-44A-84A-DataSheet-DS40002269A.pdf)
- [Atmel ICE LEDs](https://onlinedocs.microchip.com/pr/GUID-DDB0017E-84E3-4E77-AAE9-7AC4290E5E8B-en-US-4/index.html?GUID-89DABDC9-8CF7-4660-A64D-AAA0CC3FFA4C)
- [Atmel ICE Cable](https://shop.myavr.de/index.php?sp=article.sp.php&artID=200183)
- [Includes (e.g. util/delay.h)](https://onlinedocs.microchip.com/pr/GUID-317042D4-BCCE-4065-BB05-AC4312DBC2C4-en-US-2/index.html?GUID-4E858AD6-A765-4972-84FE-CD55FC481B2F)
- [Delay example](https://electronics.stackexchange.com/questions/660389/delay-h-on-attiny45-vs-attiny461-in-microchip-studio)
- Die jetzige Version hat den Reset fehlerhaft auf GND, so dass der Controller sich in andauerndem Reset befindet. Daher muss auf dem Controller die DSBLRST Fuse gesetzt werden. Danach lässt der Controller sich nicht erneut programmieren, es sei denn es wird in high-voltage [ATTiny Fuse Reset](https://sites.google.com/site/wayneholder/attiny-fuse-reset) durchgeführt


## Anpassungen für die nächste Version

- Controller mit UPDI verwenden
- kleineren Controller verwenden
- UPDI Interface auf der Platine herausführen
- Reset pin auf VCC ziehen
- Reset Button vorsehen?
- MP3 Wiedergabe des Songs
- UPDI Interface und Spannungsversorgung mit einem Anschluss (Batterie oder PC)
- Beim Programmieren per USB Kabel (FTDI) auch Spannungsversorgung herstellen
- USB Interface?
- Widerstände mit etwas mehr Abstand der Lötpads 10mm statt 7.5mm
- Padgröße LED/Widerstand 1.9mm/1.9mm // Loch 0.9mm
- Padgröße DIL 2mm/1.5mm // Loch 1mm
- Padgröße picoMAX 2.2mm/2.2mm // Loch 1.2mm
- Textool Sockel für Programmierversion sollte möglich sein
- Zweite Platine mit 3mm Bohrungen als Schablone für die LEDs?
