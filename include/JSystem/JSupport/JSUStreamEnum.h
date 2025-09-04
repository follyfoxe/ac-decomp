#ifndef JSUSTREAMENUM_H
#define JSUSTREAMENUM_H

#undef SEEK_SET
#undef SEEK_CUR
#undef SEEK_END
#undef EOF

enum JSUStreamSeekFrom { SEEK_SET = 0, SEEK_CUR = 1, SEEK_END = 2 };

enum EIoState { GOOD = 0, EOF = 1 };

#endif
