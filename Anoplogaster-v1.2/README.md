This is Anoplogaster a teensy synth thinked for being used in a livecoding environment
Anoplogaster receive midi notes, pitch bend and ccs from 64 to 94
started from a project by notesandvolts.com

for this project you need a teensy 3.2 and a teensy audio shield

Receive all midi notes in every channel

MIXER WAVEFORM
CC 64 GAIN WAVEFORM 1
CC 65 GAIN WAVEFORM 2
CC 66 GAIN WAVEFORM 3
CC 90 GAIN PINK NOISE

MIXER DRUMSYNTH
CC 83 GAIN DRUMSYNTH 1
CC 84 GAIN DRUMSYNTH 2
CC 85 GAIN DRUMSYNTH 3
CC 91 GAIN DRUMSYNTH 4

MIXER
CC 88 GAIN WAVEFORM BUS
CC 89 GAIN DRUMSYNTH BUS
CC 92 GAIN DELAY LINE 1
CC 93 GAIN DELAY LINE 2

CC 94 MIXER OUT










use it with ORCA https://github.com/hundredrabbits/Orca

or PUREDATA https://puredata.info/
