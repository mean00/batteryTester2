<Qucs Schematic 0.0.20>
<Properties>
  <View=0,20,1388,852,1.1,0,23>
  <Grid=10,10,1>
  <DataSet=fet_dac2.dat>
  <DataDisplay=fet_dac2.dpl>
  <OpenDisplay=1>
  <Script=fet_dac2.m>
  <RunScript=0>
  <showFrame=0>
  <FrameText0=Title>
  <FrameText1=Drawn By:>
  <FrameText2=Date:>
  <FrameText3=Revision:>
</Properties>
<Symbol>
  <.ID -20 -16 SUB>
  <Line -20 20 40 0 #000080 2 1>
  <Line 20 20 0 -40 #000080 2 1>
  <Line -20 -20 40 0 #000080 2 1>
  <Line -20 20 0 -40 #000080 2 1>
</Symbol>
<Components>
  <.DC DC1 1 70 250 0 42 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <Vdc V5V 1 250 200 18 -26 0 1 "5" 1>
  <R R5 1 590 440 15 -26 0 1 "1k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <GND * 1 570 570 0 0 0 0>
  <Lib T1 1 1110 390 8 -26 0 0 "NMOSFETs" 0 "IRLZ44N" 0>
  <R R1 1 1110 210 15 -26 0 1 "1.5 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R2 1 1110 520 15 -26 0 1 "0.1" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R3 1 1040 430 15 -26 0 1 "1k Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <Lib OP1 1 620 240 40 34 0 0 "SpiceOpamp" 0 "LM358" 0>
  <Diode D_1N5408_1 1 1110 290 13 -26 0 1 "63n" 1 "1.7" 1 "53p" 0 "0.333" 0 "0.3" 0 "0.5" 0 "0" 0 "0" 0 "2" 0 "14.1m" 0 "4.32u" 0 "0" 0 "0" 0 "1" 0 "1" 0 "1k" 0 "10u" 0 "26.85" 0 "3.0" 0 "1.11" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "26.85" 0 "1.0" 0 "normal" 0>
  <R R6 1 420 210 -26 15 0 0 "86k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R7 1 480 280 15 -26 0 1 "10k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R4 1 640 340 -26 15 0 0 "15k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <Vdc V1 1 1300 270 18 -26 0 1 "3" 1>
  <Lib OP2 1 330 440 40 34 0 0 "SpiceOpamp" 0 "LM358" 0>
  <Vdc V4 1 200 460 18 -26 0 1 "VREF" 1>
  <.SW SW1 1 70 360 0 70 0 0 "DC1" 1 "lin" 1 "VREF" 1 "1" 1 "3.3" 1 "41" 1 "false" 0>
</Components>
<Wires>
  <250 230 250 550 "" 0 0 0 "">
  <250 550 340 550 "" 0 0 0 "">
  <630 550 700 550 "" 0 0 0 "">
  <670 240 680 240 "" 0 0 0 "">
  <590 340 610 340 "" 0 0 0 "">
  <670 340 690 340 "" 0 0 0 "">
  <690 240 690 340 "" 0 0 0 "">
  <590 340 590 410 "" 0 0 0 "">
  <450 210 480 210 "" 0 0 0 "">
  <480 550 570 550 "" 0 0 0 "">
  <570 550 630 550 "" 0 0 0 "">
  <570 550 570 570 "" 0 0 0 "">
  <630 550 700 550 "" 0 0 0 "">
  <590 470 590 490 "" 0 0 0 "">
  <590 490 1110 490 "" 0 0 0 "">
  <700 550 1040 550 "" 0 0 0 "">
  <1300 300 1300 550 "" 0 0 0 "">
  <1300 170 1300 240 "" 0 0 0 "">
  <1110 170 1300 170 "" 0 0 0 "">
  <1110 170 1110 180 "" 0 0 0 "">
  <1110 420 1110 490 "" 0 0 0 "">
  <1080 390 1100 390 "" 0 0 0 "">
  <1100 380 1100 390 "" 0 0 0 "">
  <1110 550 1300 550 "" 0 0 0 "">
  <1040 550 1110 550 "" 0 0 0 "">
  <1040 460 1040 550 "" 0 0 0 "">
  <1040 390 1080 390 "" 0 0 0 "">
  <1040 390 1040 400 "" 0 0 0 "">
  <250 160 250 170 "" 0 0 0 "">
  <250 160 340 160 "" 0 0 0 "">
  <690 230 690 240 "" 0 0 0 "">
  <680 240 690 240 "" 0 0 0 "">
  <680 230 680 240 "" 0 0 0 "">
  <680 230 690 230 "" 0 0 0 "">
  <630 280 630 550 "" 0 0 0 "">
  <580 340 590 340 "" 0 0 0 "">
  <580 260 580 340 "" 0 0 0 "">
  <580 210 580 220 "" 0 0 0 "">
  <480 210 580 210 "" 0 0 0 "">
  <630 160 630 200 "" 0 0 0 "">
  <480 210 480 250 "" 0 0 0 "">
  <480 310 480 550 "" 0 0 0 "">
  <1110 240 1110 260 "" 0 0 0 "">
  <1110 320 1110 360 "" 0 0 0 "">
  <690 240 1040 240 "" 0 0 0 "">
  <1040 240 1040 390 "" 0 0 0 "">
  <340 160 630 160 "" 0 0 0 "">
  <340 160 340 400 "" 0 0 0 "">
  <340 550 480 550 "" 0 0 0 "">
  <340 480 340 550 "" 0 0 0 "">
  <290 460 290 510 "" 0 0 0 "">
  <290 510 400 510 "" 0 0 0 "">
  <400 440 400 510 "" 0 0 0 "">
  <400 440 410 440 "" 0 0 0 "">
  <390 440 400 440 "" 0 0 0 "">
  <200 490 200 550 "" 0 0 0 "">
  <200 550 250 550 "" 0 0 0 "">
  <200 420 200 430 "" 0 0 0 "">
  <200 420 290 420 "" 0 0 0 "">
  <390 210 390 440 "" 0 0 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
</Paintings>
