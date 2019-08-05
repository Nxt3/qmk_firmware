// NXT3 custom overrides for various configs
#pragma once

#define ZELDA_PUZZLE_ALT \
    Q__NOTE(_G5),     \
    Q__NOTE(_FS5),    \
    Q__NOTE(_DS5),     \
    Q__NOTE(_A4),    \
    Q__NOTE(_GS4),     \
    Q__NOTE(_E5),     \
    Q__NOTE(_GS5),     \
    HD_NOTE(_C6),

#ifdef AUDIO_ENABLE
  #undef DAC_SAMPLE_MAX
  #undef STARTUP_SONG
  #undef GOODBYE_SONG

  #define DAC_SAMPLE_MAX 2000U
  #define STARTUP_SONG SONG(TERMINAL_SOUND)
  #define GOODBYE_SONG SONG(ZELDA_PUZZLE_ALT)
#endif
