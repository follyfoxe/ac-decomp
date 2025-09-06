#include <dolphin.h>
#include <dolphin/mtx.h>

// Custom (probably incorrect)
float C_VECMag(register Vec* v) {
    float x = v->x;
    float y = v->y;
    float z = v->z;
    return sqrtf(x * x + y * y + z * z);
}

void C_VECNormalize(const register Vec* vec1, register Vec* dst) {
    float mag = C_VECMag(vec1);
    dst->x = vec1->x / mag;
    dst->y = vec1->y / mag;
    dst->z = vec1->z / mag;
}

void C_VECCrossProduct(register Vec* vec1, register Vec* vec2, register Vec* dst) {
    dst->x = vec1->y * vec2->z - vec1->z * vec2->y;
    dst->y = vec1->z * vec2->x - vec1->x * vec2->z;
    dst->z = vec1->x * vec2->y - vec1->y * vec2->x;
}

u32 C_MTXInverse(const register GC_Mtx src, register GC_Mtx inv) {
    // TODO
}

void C_MTXScale(register GC_Mtx m, register f32 xS, register f32 yS, register f32 zS) {
    // TODO
}

// Taken from somewhere else (probably correct)
void C_MTXLookAt(GC_Mtx m, const Vec* camPos, const Vec* camUp, const Vec* target) {
    Vec vLook;
    Vec vRight;
    Vec vUp;

    ASSERTMSGLINE(2105, m, "MTXLookAt():  NULL MtxPtr 'm' ");
    ASSERTMSGLINE(2106, camPos, "MTXLookAt():  NULL VecPtr 'camPos' ");
    ASSERTMSGLINE(2107, camUp, "MTXLookAt():  NULL VecPtr 'camUp' ");
    ASSERTMSGLINE(2108, target, "MTXLookAt():  NULL Point3dPtr 'target' ");

    vLook.x = camPos->x - target->x;
    vLook.y = camPos->y - target->y;
    vLook.z = camPos->z - target->z;
    VECNormalize(&vLook, &vLook);
    VECCrossProduct(camUp, &vLook, &vRight);
    VECNormalize(&vRight, &vRight);
    VECCrossProduct(&vLook, &vRight, &vUp);
    m[0][0] = vRight.x;
    m[0][1] = vRight.y;
    m[0][2] = vRight.z;
    m[0][3] = -((camPos->z * vRight.z) + ((camPos->x * vRight.x) + (camPos->y * vRight.y)));
    m[1][0] = vUp.x;
    m[1][1] = vUp.y;
    m[1][2] = vUp.z;
    m[1][3] = -((camPos->z * vUp.z) + ((camPos->x * vUp.x) + (camPos->y * vUp.y)));
    m[2][0] = vLook.x;
    m[2][1] = vLook.y;
    m[2][2] = vLook.z;
    m[2][3] = -((camPos->z * vLook.z) + ((camPos->x * vLook.x) + (camPos->y * vLook.y)));
}

void C_MTXLightFrustum(GC_Mtx m, f32 t, f32 b, f32 l, f32 r, f32 n, f32 scaleS,
                       f32 scaleT, f32 transS, f32 transT)
{
	f32 _tmp;

	_tmp    = 1 / (r - l);
	m[0][0] = (scaleS * (2 * n * _tmp));
	m[0][1] = 0;
	m[0][2] = (scaleS * (_tmp * (r + l))) - transS;
	m[0][3] = 0;
	_tmp    = 1 / (t - b);
	m[1][0] = 0;
	m[1][1] = (scaleT * (2 * n * _tmp));
	m[1][2] = (scaleT * (_tmp * (t + b))) - transT;
	m[1][3] = 0;
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = -1;
	m[2][3] = 0;
}

void C_MTXLightPerspective(GC_Mtx m, f32 fovY, f32 aspect, f32 scaleS, f32 scaleT,
                           f32 transS, f32 transT)
{
	f32 angle;
	f32 cot;

	angle   = (0.5f * fovY);
	angle   = angle * 0.017453293f;
	cot     = 1 / tanf(angle);
	m[0][0] = (scaleS * (cot / aspect));
	m[0][1] = 0;
	m[0][2] = -transS;
	m[0][3] = 0;
	m[1][0] = 0;
	m[1][1] = (cot * scaleT);
	m[1][2] = -transT;
	m[1][3] = 0;
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = -1;
	m[2][3] = 0;
}

void C_MTXLightOrtho(GC_Mtx m, f32 t, f32 b, f32 l, f32 r, f32 scaleS, f32 scaleT,
                     f32 transS, f32 transT)
{
	f32 _tmp;

	_tmp    = 1 / (r - l);
	m[0][0] = (2 * _tmp * scaleS);
	m[0][1] = 0;
	m[0][2] = 0;
	m[0][3] = (transS + (scaleS * (_tmp * -(r + l))));
	_tmp    = 1 / (t - b);
	m[1][0] = 0;
	m[1][1] = (2 * _tmp * scaleT);
	m[1][2] = 0;
	m[1][3] = (transT + (scaleT * (_tmp * -(t + b))));
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = 0;
	m[2][3] = 1;
}