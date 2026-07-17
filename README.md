# ATTiny85 Vault LED Control

This repo contains the code for the Tiny85 in the [WOW bank vault project](https://github.com/gsalaman/wow_bank_vault)

The ATTiny85 sniff the vaults control pin (from the microbit pin 8) on it's D0. (attiny pin5)

We'll attach an RGB LED to D2 (attiny pin7)

If D0 is low, show red.
If it's high, show green.
