
#ifndef GEMWMLIB_H
#define GEMWMLIB_H

extern LONG     gl_newdesk;
extern WORD     gl_newroot;
extern LONG     desk_tree[];
extern WORD     desk_root[];
extern OBJECT   W_TREE[];
extern OBJECT   W_ACTIVE[];
extern WORD     gl_watype[];
extern LONG     gl_waspec[];
extern TEDINFO  gl_aname;
extern TEDINFO  gl_ainfo;
extern TEDINFO  gl_asamp;
extern WORD     wind_msg[8];
extern LONG     ad_windspb;
extern WORD     gl_wtop;
extern LONG     gl_wtree;
extern LONG     gl_awind;

/* FIXME: Add more prototypes here */
void w_nilit(WORD num, OBJECT olist[]);
void ap_sendmsg(WORD ap_msg[], WORD type, PD *towhom,
                WORD w3, WORD w4, WORD w5, WORD w6, WORD w7);


#endif
