## Si5351-VFO

### Introduction
This is an adaptation of the excellent general purpose VFO software by Nick Kennedy, WA5BDU. This can be used as part of a homebrew SDR rig or to support experiments in the workshop.
Nick's original work can be found here: http://www.wa5bdu.com/si5351a-quadrature-vfo/

In this version, lines 512/3 have been changed to support the LCD I2C library v1.1.2 by Frank de Brabander

My original project employed the following components:

* Si5351A Controller and Si5351 Clock generator modules from Makis SV1AFN https://www.sv1afn.com/en/rf-signal-generator-vfo/si5351a-clock-generator-module.html
* DFROBOT DFR0063 2-line I2C LCD
* Bournes ENA1J B28 optical rotary encoder. NB: Just about any encoder can be used but opticals are generally more reliable.



