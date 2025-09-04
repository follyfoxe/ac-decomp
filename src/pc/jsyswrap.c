#include "jsyswrap.h"

extern void JW_UpdateVideoMode() {
}
extern void JW_SetProgressiveMode(int enabled){
}
extern void JW_SetLowResoMode(int enabled){
}
extern void JW_SetFamicomMode(int enabled){
}
extern void JW_SetVideoPan(u16 origin_x, u16 origin_y, u16 width, u16 height){
}
extern void JW_SetLogoMode(int enabled){
}
extern void JW_JUTGamePad_read(){
}
extern void JW_getPadStatus(PADStatus* padStatus){
}
extern int JW_JUTGamepad_getErrorStatus(){
}
extern u32 JW_JUTGamepad_getButton(){
}
extern u32 JW_JUTGamepad_getTrigger(){
}
extern f32 JW_JUTGamepad_getSubStickValue(){
}
extern s16 JW_JUTGamepad_getSubStickAngle(){
}
extern void JW_BeginFrame(){
}
extern void JW_EndFrame(){
}
extern int JW_setClearColor(u8 r, u8 g, u8 b){
}
extern u32 JW_GetAramAddress(int res_no){
}
extern u8* _JW_GetResourceAram(u32 aram_addr, u8* dst, u32 size){
}
extern u32 JW_GetResSizeFileNo(int res_no){
}
extern void JW_Init(){
}
extern void JW_Init2(){
}
extern void JW_Init3(){
}
extern void JW_Cleanup(){
}