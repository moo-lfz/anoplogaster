

//    /\              |              |
//   /__\ |/~\ /~\|~~\|/~\/~~|/~~|(~~|~/~/|/~\
//  /    \|   |\_/|__/|\_/\__|\__|_) | \/_|
//                |       \__|
//  41 6E 6F 70 6C 6F 67 61 73 74 65 72


//                           ``----::::::--..`                         `.--`
//                                      `.---+ooo++++++/+///:/:::-.``                 .:/+///`         //                           `-/ohdmmmNNNNNNNNNmmmhdhysoo/+/++:/:-.            `-+oo+//:.
//                      `-+oshdmmmmmmmmmmmmmmmNmNNNNNNNNNNNNNhdyo+/+//:        .:+ssooo/:`
//                   `/yddhdhdhmmddhhhddddddddmmmmmmNNNNNNNmmNNNNmdhy/.````.-+hdmdhyo+/`
//                `:shhyysyhsdysddhdddhhhhhhhhdddddmmmmmNNNNNNNNNNmNmmmNmmmmmmmmNNdhs/:
//              :shdhoohdhyhhhhdhhhhhyhyyhhhhhdddmmmmNNNNmmmNdmmmmmddmmdmdddmddmmdmhs+/-
//            `yhhyyhshmmhyydhdhdhhddhhhhhhhdddddmmmNmNNNNNNNNNNNNmNmNNNNNNNNNNNNNmdyoo+:-`
//           /hhyyyyhhhhdhhhdmdmdmdhhdmdddddddmmmmmmNNNNNNNNNNNNNNNNNNNNNho:...:///++oooo+/:-`
//          -y+yhyyhyyyysyhhhdmhmmmmdhdNmddmmmmmmmNNNNNNNNNNNNNNNNNNNNNmyo/::.        `..----.
//         `:` :oyhdyyyhdyyhdmmdhdmmmhhdNmmmmmmNNNNNmdhhdmNNNNNNNNNNNNh++////`
//         `.  - .+hhhhhyhhhdmmmdddmdddymNNNNNNNmdhyyhhdddNNNNNNNNmmyo+++:-.`
//         .-     .:+dhhhhhddmmmddmNdmdhdMNNNmdhhhyyyhhhmMNNNNNNmyo/:-.`
//         /.        .odddddmmmNmdmNmddhhNdhhhhyyyyyyhmMMNNNNy:`
//         o`.`  -`    -shhhdNNNNdmNmddhmmhhhhhyyyyydNNMNNd+.
//        -++/:-.o--::://syyyymNNhmNmdymNmmNNmmmmmNNNNmdo-
//        `syo++++oooooossyyhhdNdydNNhdNNNNNNNNNNmmdhso///-
//          `-/+oyhhhhhddddhhhhddddNmNNNNNNNmddmmmdhys++/:.
//                 `-:/+ossssssssssddhso/:-.     ``....`


// Anoplogaster
// a Teensy based synth with no controls just midi cc, pb and notes
// based on Teensy-Synth by Notes and Volts www.notesandvolts.com
// thx to @pangrus for the drum sectionn
// thx to @paso94 @fedebraita and @audiohacklab for support
// M_oo 2020



#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>
#include <SD.h>


// GUItool: begin automatically generated code
AudioSynthWaveform       waveform3;      //xy=423,308
AudioSynthWaveform       waveform2;      //xy=429,248
AudioSynthSimpleDrum     drum4;          //xy=429,597
AudioSynthSimpleDrum     drum3;          //xy=433,537
AudioSynthSimpleDrum     drum1;          //xy=434,448
AudioSynthSimpleDrum     drum2;          //xy=434,491
AudioSynthWaveform       waveform1;      //xy=437,183
AudioSynthNoisePink      pink1;          //xy=444,378
AudioMixer4              mixer1;         //xy=633,322
AudioMixer4              mixer2;         //xy=637,487
AudioFilterStateVariable filter2;        //xy=774,542
AudioFilterStateVariable filter1;        //xy=804,433
AudioEffectDelay         delay1;         //xy=932,633
AudioEffectEnvelope      envelope1;      //xy=963,311
AudioMixer4              mixer3;         //xy=1121,465
AudioEffectFreeverb      freeverb1;      //xy=1266,464
AudioMixer4              mixer4;         //xy=1364,557
AudioOutputI2S           i2s1;           //xy=1528,563
AudioSynthWaveform       waveform4;  //xy=3556.66650390625,344.99999046325684
AudioSynthWaveform       waveform5; //xy=3562.66650390625,284.99999046325684
AudioSynthSimpleDrum     drum5; //xy=3562.66650390625,633.9999904632568
AudioSynthSimpleDrum     drum6; //xy=3566.66650390625,573.9999904632568
AudioSynthSimpleDrum     drum7; //xy=3567.66650390625,484.99999046325684
AudioSynthSimpleDrum     drum8; //xy=3567.66650390625,527.9999904632568
AudioSynthWaveform       waveform6; //xy=3570.66650390625,219.99999046325684
AudioSynthNoisePink      pink2; //xy=3577.66650390625,414.99999046325684
AudioMixer4              mixer5; //xy=3766.66650390625,358.99999046325684
AudioMixer4              mixer6; //xy=3770.66650390625,523.9999904632568
AudioFilterStateVariable filter3; //xy=3936.66650390625,557.9999904632568
AudioFilterStateVariable filter4; //xy=3937.66650390625,469.99999046325684
AudioEffectDelay         delay2; //xy=4089.66650390625,654.9999904632568
AudioEffectEnvelope      envelope2; //xy=4096.66650390625,347.99999046325684
AudioMixer4              mixer7; //xy=4252.66650390625,474.99999046325684
AudioMixer4              mixer8; //xy=4362.66650390625,601.9999904632568
AudioEffectFreeverb      freeverb2; //xy=4506.66650390625,571.9999904632568
AudioOutputI2S           i2s2; //xy=4659.66650390625,575.9999904632568
AudioConnection          patchCord1(waveform3, 0, mixer1, 2);
AudioConnection          patchCord2(waveform2, 0, mixer1, 1);
AudioConnection          patchCord3(drum4, 0, mixer2, 3);
AudioConnection          patchCord4(drum3, 0, mixer2, 2);
AudioConnection          patchCord5(drum1, 0, mixer2, 0);
AudioConnection          patchCord6(drum2, 0, mixer2, 1);
AudioConnection          patchCord7(waveform1, 0, mixer1, 0);
AudioConnection          patchCord8(pink1, 0, mixer1, 3);
AudioConnection          patchCord9(mixer1, 0, filter1, 0);
AudioConnection          patchCord10(mixer2, 0, filter2, 0);
AudioConnection          patchCord11(mixer2, 0, mixer4, 0);
AudioConnection          patchCord12(filter2, 1, mixer3, 1);
AudioConnection          patchCord13(filter2, 2, delay1, 0);
AudioConnection          patchCord14(filter1, 0, envelope1, 0);
AudioConnection          patchCord15(delay1, 0, mixer3, 2);
AudioConnection          patchCord16(delay1, 1, mixer3, 3);
AudioConnection          patchCord17(delay1, 2, mixer4, 2);
AudioConnection          patchCord18(delay1, 3, mixer4, 3);
AudioConnection          patchCord19(envelope1, 0, mixer3, 0);
AudioConnection          patchCord20(mixer3, freeverb1);
AudioConnection          patchCord21(freeverb1, 0, mixer4, 1);
AudioConnection          patchCord22(mixer4, 0, i2s1, 0);
AudioConnection          patchCord23(mixer4, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=872,803

// GUItool: end automatically generated code






// GLOBAL VARIABLES
const byte BUFFER = 8; //Size of keyboard buffer
const float noteFreqs[128] = {8.176, 8.662, 9.177, 9.723, 10.301, 10.913, 11.562, 12.25, 12.978, 13.75, 14.568, 15.434, 16.352, 17.324, 18.354, 19.445, 20.602, 21.827, 23.125, 24.5, 25.957, 27.5, 29.135, 30.868, 32.703, 34.648, 36.708, 38.891, 41.203, 43.654, 46.249, 48.999, 51.913, 55, 58.27, 61.735, 65.406, 69.296, 73.416, 77.782, 82.407, 87.307, 92.499, 97.999, 103.826, 110, 116.541, 123.471, 130.813, 138.591, 146.832, 155.563, 164.814, 174.614, 184.997, 195.998, 207.652, 220, 233.082, 246.942, 261.626, 277.183, 293.665, 311.127, 329.628, 349.228, 369.994, 391.995, 415.305, 440, 466.164, 493.883, 523.251, 554.365, 587.33, 622.254, 659.255, 698.456, 739.989, 783.991, 830.609, 880, 932.328, 987.767, 1046.502, 1108.731, 1174.659, 1244.508, 1318.51, 1396.913, 1479.978, 1567.982, 1661.219, 1760, 1864.655, 1975.533, 2093.005, 2217.461, 2349.318, 2489.016, 2637.02, 2793.826, 2959.955, 3135.963, 3322.438, 3520, 3729.31, 3951.066, 4186.009, 4434.922, 4698.636, 4978.032, 5274.041, 5587.652, 5919.911, 6271.927, 6644.875, 7040, 7458.62, 7902.133, 8372.018, 8869.844, 9397.273, 9956.063, 10548.08, 11175.3, 11839.82, 12543.85};
byte globalNote = 0;
byte globalVelocity = 0;
int octave = 0;
const float DIV127 = (1.0 / 127.0);
float detuneFactor = 1;
float bendFactor = 1;
int bendRange = 12;

const float frequencyTable [128] = {8.176, 8.662, 9.177, 9.723, 10.301, 10.913, 11.562, 12.25, 12.978, 13.75, 14.568, 15.434, 16.352, 17.324, 18.354, 19.445, 20.602, 21.827, 23.125, 24.5, 25.957, 27.5, 29.135, 30.868, 32.703, 34.648, 36.708, 38.891, 41.203, 43.654, 46.249, 48.999, 51.913, 55, 58.27, 61.735, 65.406, 69.296, 73.416, 77.782, 82.407, 87.307, 92.499, 97.999, 103.826, 110, 116.541, 123.471, 130.813, 138.591, 146.832, 155.563, 164.814, 174.614, 184.997, 195.998, 207.652, 220, 233.082, 246.942, 261.626, 277.183, 293.665, 311.127, 329.628, 349.228, 369.994, 391.995, 415.305, 440, 466.164, 493.883, 523.251, 554.365, 587.33, 622.254, 659.255, 698.456, 739.989, 783.991, 830.609, 880, 932.328, 987.767, 1046.502, 1108.731, 1174.659, 1244.508, 1318.51, 1396.913, 1479.978, 1567.982, 1661.219, 1760, 1864.655, 1975.533, 2093.005, 2217.461, 2349.318, 2489.016, 2637.02, 2793.826, 2959.955, 3135.963, 3322.438, 3520, 3729.31, 3951.066, 4186.009, 4434.922, 4698.636, 4978.032, 5274.041, 5587.652, 5919.911, 6271.927, 6644.875, 7040, 7458.62, 7902.133, 8372.018, 8869.844, 9397.273, 9956.063, 10548.08, 11175.3, 11839.82, 12543.85};
float drumFrequency;
float drumLength;

unsigned int LFOspeed = 4000;
float LFOpitch = 1;
float LFOdepth = 0;
byte LFOmodeSelect = 0;

int FILfreq =  20000;
float FILfactor = 1;


void setup() {
  AudioMemory(80);

  sgtl5000_1.enable();
  sgtl5000_1.volume(0.75);

  usbMIDI.setHandleControlChange(myControlChange);
  usbMIDI.setHandleNoteOff(myNoteOff);
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandlePitchChange(myPitchBend);

  drum1.frequency(100);
  drum1.length(50);
  drum1.secondMix(0.0);
  drum1.pitchMod(0.5);

  drum2.frequency(200);
  drum2.length(60);
  drum2.secondMix(0.0);
  drum2.pitchMod(0.5);

  drum3.frequency(300);
  drum3.length(40);
  drum3.secondMix(1.0);
  drum3.pitchMod(0.5);

  drum4.frequency(350);
  drum4.length(50);
  drum4.secondMix(1.0);
  drum4.pitchMod(0.5);


  waveform1.begin(WAVEFORM_SAWTOOTH);
  waveform1.amplitude(0.75);
  waveform1.frequency(82.41);
  waveform1.pulseWidth(0.15);

  waveform2.begin(WAVEFORM_SQUARE);
  waveform2.amplitude(0.75);
  waveform2.frequency(110);
  waveform2.pulseWidth(0.15);

  waveform3.begin(WAVEFORM_TRIANGLE);
  waveform3.amplitude(0.75);
  waveform3.frequency(92.5);
  waveform3.pulseWidth(0.15);

  pink1.amplitude(1.0);

  mixer1.gain(0, 7.0);
  mixer1.gain(1, 7.0);
  mixer1.gain(2, 7.0);
  mixer1.gain(3, 7.0);

  mixer2.gain(0, 7.0);
  mixer2.gain(1, 7.0);
  mixer2.gain(2, 7.0);
  mixer2.gain(3, 7.0);

  mixer3.gain(0, 7.0);
  mixer3.gain(1, 7.0);
  mixer3.gain(2, 7.0);
  mixer3.gain(3, 7.0);

  mixer4.gain(0, 7.0);


  envelope1.attack(0);
  envelope1.decay(0);
  envelope1.sustain(1);
  envelope1.release(500);

  delay1.delay(0, 110);
  delay1.delay(1, 220);
  delay1.delay(2, 330);
  delay1.delay(3, 440);

  freeverb1.roomsize(0.17);
  freeverb1.damping(0.17);

}


void loop() {
  usbMIDI.read();
  LFOupdate(false, LFOmodeSelect, FILfactor, LFOdepth);
}

void myNoteOn(byte channel, byte note, byte velocity) {
  if ( channel > 5 && channel < 10 ) {
    drumFrequency = frequencyTable [note];
    drumLength = velocity * 4;
    playDrum(channel, drumFrequency, drumLength); // this the drum note 
  }
  else if ( note > 23 && note < 108 ) {
    globalNote = note;
    globalVelocity = velocity;
    keyBuff(note, true);
    LFOupdate(true, LFOmodeSelect, FILfactor, LFOdepth); // this the synth note
  }
}

void myNoteOff(byte channel, byte note, byte velocity) {
  if ( note > 23 && note < 108 ) {
    keyBuff(note, false);
  }
}


void playDrum (byte channel, byte drumFrequency, float drumLength) {

  switch (channel) {

    case 6: //Channel 6 - ORCA 5
      drum1.frequency(drumFrequency);
      drum1.length(drumLength);
      drum1.noteOn();
      break;

    case 7: //Channel 7 - ORCA 6
      drum2.frequency(drumFrequency);
      drum2.length(drumLength);
      drum2.noteOn();
      break;

    case 8: //Channel 8 - ORCA 7
      drum3.frequency(drumFrequency);
      drum3.length(drumLength);
      drum3.noteOn();
      break;

    case 9: //Channel 9 - ORCA 8
      drum4.frequency(drumFrequency);
      drum4.length(drumLength);
      drum4.noteOn();
      break;
  }
}


void myPitchBend(byte channel, int bend) {
  float bendF = bend;
  bendF = bendF / 8192;
  bendF = bendF * bendRange;
  bendF = bendF / 12;
  bendFactor = pow(2, bendF);
  oscSet();
}

void keyBuff(byte note, bool playNote) {
  static byte buff[BUFFER];
  static byte buffSize = 0;

  // Add Note
  if (playNote == true && (buffSize < BUFFER) ) {
    oscPlay(note);
    buff[buffSize] = note;
    buffSize++;
    return;
  }

  // Remove Note
  else if (playNote == false && buffSize != 0) {
    for (byte found = 0; found < buffSize; found++) {
      if (buff[found] == note) {
        for (byte gap = found; gap < (buffSize - 1); gap++) {
          buff[gap] = buff[gap + 1];
        }
        buffSize--;
        buff[buffSize] = 255;
        if (buffSize != 0) {
          oscPlay(buff[buffSize - 1]);
          return;
        }
        else {
          oscStop();
          return;
        }
      }
    }
  }
}

void oscPlay(byte note) {
  waveform1.frequency(noteFreqs[note] * bendFactor * LFOpitch);
  waveform2.frequency(noteFreqs[note + octave] * detuneFactor * bendFactor * LFOpitch);
  waveform3.frequency(noteFreqs[note]);
  float velo = (globalVelocity * DIV127);
  waveform1.amplitude(velo);
  waveform2.amplitude(velo);
  waveform3.amplitude(velo);
  pink1.amplitude(velo);

  envelope1.noteOn();


}

void oscStop() {
  envelope1.noteOff();
}

void oscSet() {
  waveform1.frequency(noteFreqs[globalNote] * bendFactor * LFOpitch);
  waveform2.frequency(noteFreqs[globalNote + octave] * detuneFactor * bendFactor * LFOpitch);
  waveform3.frequency(noteFreqs[globalNote]);
}



void myControlChange(byte channel, byte control, byte value) {
  switch (control) {


    case 67:
      switch (value) {
        case 0:
          octave = 24;
          break;
        case 4:
          octave = 12;
          break;
        case 8:
          octave = 0;
          break;
        case 11:
          octave = -12;
          break;
        case 15:
          octave = -24;
          break;
      }
      oscSet();
      break;

    case 68:
      envelope1.attack(4000 * (value * DIV127));
      break;

    case 69:
      envelope1.decay(4000 * (value * DIV127));
      break;

    case 70:
      envelope1.sustain(value * DIV127);
      break;

    case 71:
      envelope1.release(4000 * (value * DIV127));
      break;

    case 72:
      switch (value) {
        case 0:
          waveform1.begin(WAVEFORM_SINE);
          break;
        case 4:
          waveform1.begin(WAVEFORM_SAMPLE_HOLD);
          break;
        case 8:
          waveform1.begin(WAVEFORM_SAWTOOTH);
          break;
        case 11:
          waveform1.begin(WAVEFORM_PULSE);
          break;
      }

    case 73:
      switch (value) {
        case 0:
          waveform2.begin(WAVEFORM_SINE);
          break;
        case 4:
          waveform2.begin(WAVEFORM_TRIANGLE_VARIABLE);
          break;
        case 8:
          waveform2.begin(WAVEFORM_SAWTOOTH);
          break;
        case 11:
          waveform2.begin(WAVEFORM_SAWTOOTH_REVERSE);
          break;
      }

    case 95:
      switch (value) {
        case 0:
          waveform3.begin(WAVEFORM_SINE);
          break;
        case 4:
          waveform3.begin(WAVEFORM_TRIANGLE_VARIABLE);
          break;
        case 8:
          waveform3.begin(WAVEFORM_SAWTOOTH);
          break;
        case 11:
          waveform3.begin(WAVEFORM_SAWTOOTH_REVERSE);
          break;
      }

    case 74:
      detuneFactor = 1 - (0.05 * (value * DIV127));
      oscSet();
      break;

    case 75:
      FILfactor = value * DIV127;
      FILfreq = 10000 * (value * DIV127);
      if (LFOmodeSelect < 1 || LFOmodeSelect > 5)filter1.frequency(FILfreq);
      break;

    case 76:
      filter1.resonance((4.3 * (value * DIV127)) + 0.7);
      break;

    case 86:
      FILfactor = value * DIV127;
      FILfreq = 10000 * (value * DIV127);
      if (LFOmodeSelect < 1 || LFOmodeSelect > 5)filter2.frequency(FILfreq);
      break;

    case 87:
      filter2.resonance((4.3 * (value * DIV127)) + 0.7);
      break;

    case 77:
      if (value <= 12 && value > 0) bendRange = value;
      break;

    case 81:
      freeverb1.damping(value * DIV127);
      break;

    case 82:
      freeverb1.damping(value * DIV127);
      break;

    case 96:
      delay1.delay(0, (value * DIV127));
      break;

    case 97:
      delay1.delay(1, (value * DIV127));
      break;

    case 78:
      {
        float xSpeed = value * DIV127;
        xSpeed = pow(100, (xSpeed - 1));
        LFOspeed = (70000 * xSpeed);
        break;
      }

    case 79:
      LFOdepth = value * DIV127;
      break;

    case 80:
      LFOmodeSelect = value;
      break;
  }
}

void LFOupdate(bool retrig, byte mode, float FILtop, float FILbottom) {
  static float LFO = 0;
  static unsigned long LFOtime = 0;
  static bool LFOdirection = false;
  unsigned long currentMicros = micros();
  static bool LFOstop = false;
  static float LFOrange = 0;
  static byte oldMode = 0;
  static bool retriggered = false;

  if (retrig == true) retriggered = true;


  if (currentMicros - LFOtime >= LFOspeed) {
    LFOtime = currentMicros;

    if (mode != oldMode) {
      if (mode == 0 || mode == 8) {
        LFOpitch = 1;
        oscSet();
        filter1.frequency(FILfreq);
      }
      else if (mode >= 1 || mode <= 7) {
        LFOpitch = 1;
        oscSet();
      }
      else if (mode >= 9 || mode <= 13) {
        filter1.frequency(FILfreq);
      }
      oldMode = mode;
    }

    LFOrange = FILtop - FILbottom;
    if (LFOrange < 0) LFOrange = 0;

    // LFO Modes
    switch (mode) {

      case 0: //Filter OFF
        return;
        break;
      case 4: //Filter FREE
        filter1.frequency(10000 * ((LFOrange * LFO) + LFOdepth));
        break;
      case 8: //Filter DOWN
        if (retriggered == true) {
          LFOdirection = true;
          LFO = 1.0;
        }
        filter1.frequency(10000 * ((LFOrange * LFO) + LFOdepth));
        break;
      case 11: //Filter UP
        if (retriggered == true) {
          LFOdirection = false;
          LFO = 0;
        }
        filter1.frequency(10000 * ((LFOrange * LFO) + LFOdepth));
        break;
      case 15: //Filter 1-DN
        if (retriggered == true) {
          LFOstop = false;
          LFOdirection = true;
          LFO = 1.0;
        }
        if (LFOstop == false) filter1.frequency(10000 * ((LFOrange * LFO) + LFOdepth));
        break;
      case 19: //Filter 1-UP
        if (retriggered == true) {
          LFOstop = false;
          LFOdirection = false;
          LFO = 0;
        }
        if (LFOstop == false) filter1.frequency(10000 * ((LFOrange * LFO) + LFOdepth));
        break;
      case 22: //Pitch OFF
        return;
        break;
      case 26: //Pitch FREE
        LFOpitch = (LFO * LFOdepth) + 1;
        oscSet();
        break;
      case 30: //Pitch DOWN
        if (retriggered == true) {
          LFOdirection = true;
          LFO = 1.0;
        }
        LFOpitch = (LFO * LFOdepth) + 1;
        oscSet();
        break;
      case 33: //Pitch UP
        if (retriggered == true) {
          LFOdirection = false;
          LFO = 0;
        }
        LFOpitch = (LFO * LFOdepth) + 1;
        oscSet();
        break;
      case 37: //Pitch 1-DN
        if (retriggered == true) {
          LFOstop = false;
          LFOdirection = true;
          LFO = 1.0;
        }
        if (LFOstop == false) {
          LFOpitch = (LFO * LFOdepth) + 1;
          oscSet();
        }
        break;
      case 40: //Pitch 1-UP
        if (retriggered == true) {
          LFOstop = false;
          LFOdirection = false;
          LFO = 0;
        }
        if (LFOstop == false) {
          LFOpitch = (LFO * LFOdepth) + 1;
          oscSet();
        }
        break;
    }

    retriggered = false;

    // Update LFO
    if (LFOdirection == false) { //UP
      LFO = (LFO + 0.01);
      if (LFO >= 1) {
        LFOdirection = true;
        LFOstop = true;
      }
    }

    if (LFOdirection == true) { //Down
      LFO = (LFO - 0.01);
      if (LFO <= 0) {
        LFOdirection = false;
        LFOstop = true;
      }
    }
  }
}
