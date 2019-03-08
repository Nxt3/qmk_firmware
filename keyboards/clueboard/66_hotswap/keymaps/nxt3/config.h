// NXT3 custom overrides for various configs
#pragma once

#ifdef AUDIO_ENABLE
  #undef DAC_SAMPLE_MAX
  #undef STARTUP_SONG
  #undef GOODBYE_SONG

  #define DAC_SAMPLE_MAX 2000U
  #define STARTUP_SONG SONG(TERMINAL_SOUND)
  #define GOODBYE_SONG SONG(ZELDA_PUZZLE)
#endif
