#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.0.10011.16384
//
// Parameters:
//
//   sampler2D image;
//   float4 params;
//   float4 texSize;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   texSize      c1       1
//   params       c2       1
//   image        s0       1
//

    ps_2_0
    def c0, 0.5, -0.5, 0, 0
    dcl t0.xy
    dcl_2d s0
    frc r0.w, t0.y
    add r0.x, -r0.w, c0.x
    mov r1.w, c0.x
    mad r0.x, c2.z, r0.x, r1.w
    add r0.x, r0.x, r0.x
    frc r0.yz, t0.zxyw
    add r0.yz, -r0, t0.zxyw
    add r0.yz, r0, c0.x
    lrp r1.xy, c2, t0, r0.yzxw
    mul r2.x, r1.x, c1.z
    mul r2.y, r1.y, c1.w
    texld r2, r2, s0
    mad r0.xyz, r2, r0.x, c0.y
    mad r2.xyz, c2.w, r0, r1.w
    mov oC0, r2

// approximately 15 instruction slots used (1 texture, 14 arithmetic)
#endif

const BYTE tigrUpscalePSCode[] =
{
      0,   2, 255, 255, 254, 255, 
     52,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 151,   0, 
      0,   0,   0,   2, 255, 255, 
      3,   0,   0,   0,  28,   0, 
      0,   0,   8, 131,   0,   0, 
    144,   0,   0,   0,  88,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  96,   0, 
      0,   0,   0,   0,   0,   0, 
    112,   0,   0,   0,   2,   0, 
      2,   0,   1,   0,  10,   0, 
    120,   0,   0,   0,   0,   0, 
      0,   0, 136,   0,   0,   0, 
      2,   0,   1,   0,   1,   0, 
      6,   0, 120,   0,   0,   0, 
      0,   0,   0,   0, 105, 109, 
     97, 103, 101,   0, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 112,  97, 
    114,  97, 109, 115,   0, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 116, 101, 
    120,  83, 105, 122, 101,   0, 
    112, 115,  95,  50,  95,  48, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     49,  48,  46,  48,  46,  49, 
     48,  48,  49,  49,  46,  49, 
     54,  51,  56,  52,   0, 171, 
     81,   0,   0,   5,   0,   0, 
     15, 160,   0,   0,   0,  63, 
      0,   0,   0, 191,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
     19,   0,   0,   2,   0,   0, 
      8, 128,   0,   0,  85, 176, 
      2,   0,   0,   3,   0,   0, 
      1, 128,   0,   0, 255, 129, 
      0,   0,   0, 160,   1,   0, 
      0,   2,   1,   0,   8, 128, 
      0,   0,   0, 160,   4,   0, 
      0,   4,   0,   0,   1, 128, 
      2,   0, 170, 160,   0,   0, 
      0, 128,   1,   0, 255, 128, 
      2,   0,   0,   3,   0,   0, 
      1, 128,   0,   0,   0, 128, 
      0,   0,   0, 128,  19,   0, 
      0,   2,   0,   0,   6, 128, 
      0,   0, 210, 176,   2,   0, 
      0,   3,   0,   0,   6, 128, 
      0,   0, 228, 129,   0,   0, 
    210, 176,   2,   0,   0,   3, 
      0,   0,   6, 128,   0,   0, 
    228, 128,   0,   0,   0, 160, 
     18,   0,   0,   4,   1,   0, 
      3, 128,   2,   0, 228, 160, 
      0,   0, 228, 176,   0,   0, 
    201, 128,   5,   0,   0,   3, 
      2,   0,   1, 128,   1,   0, 
      0, 128,   1,   0, 170, 160, 
      5,   0,   0,   3,   2,   0, 
      2, 128,   1,   0,  85, 128, 
      1,   0, 255, 160,  66,   0, 
      0,   3,   2,   0,  15, 128, 
      2,   0, 228, 128,   0,   8, 
    228, 160,   4,   0,   0,   4, 
      0,   0,   7, 128,   2,   0, 
    228, 128,   0,   0,   0, 128, 
      0,   0,  85, 160,   4,   0, 
      0,   4,   2,   0,   7, 128, 
      2,   0, 255, 160,   0,   0, 
    228, 128,   1,   0, 255, 128, 
      1,   0,   0,   2,   0,   8, 
     15, 128,   2,   0, 228, 128, 
    255, 255,   0,   0
};