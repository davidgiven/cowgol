#include "cowgol.h"
static i8 workspace[0x00b1];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+1344 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



}

// print_char workspace at ws+1360 length ws+1
void f9_print_char(void) {


	
putchar( 
*(i1*)(intptr_t)(ws+1360) 
); 



}
	void f9_print_char(void);

// print workspace at ws+1344 length ws+9
void f12_print(void) {

c02_0001:;

	i8 v6 = (i8)(intptr_t)(ws+1344);
	i8 v7 = *(i8*)(intptr_t)v6;
	i1 v8 = *(i1*)(intptr_t)v7;
	i8 v9 = (i8)(intptr_t)(ws+1352);
	*(i1*)(intptr_t)v9 = v8;

	i8 v10 = (i8)(intptr_t)(ws+1352);
	i1 v11 = *(i1*)(intptr_t)v10;
	i1 v12 = (i1)+0;
	if (v11==v12) goto c02_0006; else goto c02_0007;

c02_0006:;

	return;

c02_0007:;

c02_0003:;

	i8 v13 = (i8)(intptr_t)(ws+1352);
	i1 v14 = *(i1*)(intptr_t)v13;
	*(i1*)(intptr_t)(ws+1360) = v14;
	i8 v15 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v15)();

	i8 v16 = (i8)(intptr_t)(ws+1344);
	i8 v17 = *(i8*)(intptr_t)v16;
	i8 v18 = v17+(+1);
	i8 v19 = (i8)(intptr_t)(ws+1344);
	*(i8*)(intptr_t)v19 = v18;

	goto c02_0001;

c02_0002:;

}
	void f9_print_char(void);

// print_nl workspace at ws+1312 length ws+0
void f13_print_nl(void) {

	i1 v20 = (i1)+10;
	*(i1*)(intptr_t)(ws+1360) = v20;
	i8 v21 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v21)();

}

// UIToA workspace at ws+1232 length ws+49
void f14_UIToA(void) {

	i8 v22 = (i8)(intptr_t)(ws+1240);
	i8 v23 = *(i8*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v24 = v23;

c02_0008:;

	i8 v25 = (i8)(intptr_t)(ws+1232);
	i4 v26 = *(i4*)(intptr_t)v25;
	i8 v27 = (i8)(intptr_t)(ws+1236);
	i1 v28 = *(i1*)(intptr_t)v27;
	i4 v29 = v28;
	i4 v30 = v26%v29;
	i8 v31 = (i8)(intptr_t)(ws+1256);
	*(i4*)(intptr_t)v31 = v30;

	i8 v32 = (i8)(intptr_t)(ws+1232);
	i4 v33 = *(i4*)(intptr_t)v32;
	i8 v34 = (i8)(intptr_t)(ws+1236);
	i1 v35 = *(i1*)(intptr_t)v34;
	i4 v36 = v35;
	i4 v37 = v33/v36;
	i8 v38 = (i8)(intptr_t)(ws+1232);
	*(i4*)(intptr_t)v38 = v37;

	i8 v39 = (i8)(intptr_t)(ws+1256);
	i4 v40 = *(i4*)(intptr_t)v39;
	i4 v41 = (i4)+10;
	if (v40<v41) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v42 = (i8)(intptr_t)(ws+1256);
	i4 v43 = *(i4*)(intptr_t)v42;
	i4 v44 = v43+(+48);
	i8 v45 = (i8)(intptr_t)(ws+1256);
	*(i4*)(intptr_t)v45 = v44;

	goto c02_000a;

c02_000e:;

	i8 v46 = (i8)(intptr_t)(ws+1256);
	i4 v47 = *(i4*)(intptr_t)v46;
	i4 v48 = v47+(+87);
	i8 v49 = (i8)(intptr_t)(ws+1256);
	*(i4*)(intptr_t)v49 = v48;

c02_000a:;

	i8 v50 = (i8)(intptr_t)(ws+1256);
	i4 v51 = *(i4*)(intptr_t)v50;
	i1 v52 = v51;
	i8 v53 = (i8)(intptr_t)(ws+1248);
	i8 v54 = *(i8*)(intptr_t)v53;
	*(i1*)(intptr_t)v54 = v52;

	i8 v55 = (i8)(intptr_t)(ws+1248);
	i8 v56 = *(i8*)(intptr_t)v55;
	i8 v57 = v56+(+1);
	i8 v58 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+1232);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+0;
	if (v60==v61) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v62 = (i8)(intptr_t)(ws+1240);
	i8 v63 = *(i8*)(intptr_t)v62;
	i8 v64 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v64 = v63;

	i8 v65 = (i8)(intptr_t)(ws+1248);
	i8 v66 = *(i8*)(intptr_t)v65;
	i8 v67 = v66+(-1);
	i8 v68 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v68 = v67;

c02_0014:;

	i8 v69 = (i8)(intptr_t)(ws+1264);
	i8 v70 = *(i8*)(intptr_t)v69;
	i8 v71 = (i8)(intptr_t)(ws+1272);
	i8 v72 = *(i8*)(intptr_t)v71;
	if (v70<v72) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v73 = (i8)(intptr_t)(ws+1264);
	i8 v74 = *(i8*)(intptr_t)v73;
	i1 v75 = *(i1*)(intptr_t)v74;
	i8 v76 = (i8)(intptr_t)(ws+1280);
	*(i1*)(intptr_t)v76 = v75;

	i8 v77 = (i8)(intptr_t)(ws+1272);
	i8 v78 = *(i8*)(intptr_t)v77;
	i1 v79 = *(i1*)(intptr_t)v78;
	i8 v80 = (i8)(intptr_t)(ws+1264);
	i8 v81 = *(i8*)(intptr_t)v80;
	*(i1*)(intptr_t)v81 = v79;

	i8 v82 = (i8)(intptr_t)(ws+1280);
	i1 v83 = *(i1*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+1272);
	i8 v85 = *(i8*)(intptr_t)v84;
	*(i1*)(intptr_t)v85 = v83;

	i8 v86 = (i8)(intptr_t)(ws+1264);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = v87+(+1);
	i8 v89 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v89 = v88;

	i8 v90 = (i8)(intptr_t)(ws+1272);
	i8 v91 = *(i8*)(intptr_t)v90;
	i8 v92 = v91+(-1);
	i8 v93 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v93 = v92;

	goto c02_0014;

c02_0019:;

	i1 v94 = (i1)+0;
	i8 v95 = (i8)(intptr_t)(ws+1248);
	i8 v96 = *(i8*)(intptr_t)v95;
	*(i1*)(intptr_t)v96 = v94;

}
	void f14_UIToA(void);
	void f12_print(void);

// print_i32 workspace at ws+1200 length ws+32
void f16_print_i32(void) {

	i8 v123 = (i8)(intptr_t)(ws+1200);
	i4 v124 = *(i4*)(intptr_t)v123;
	*(i4*)(intptr_t)(ws+1232) = v124;
	i1 v125 = (i1)+10;
	*(i1*)(intptr_t)(ws+1236) = v125;
	i8 v126 = (i8)(intptr_t)(ws+1204);
	*(i8*)(intptr_t)(ws+1240) = v126;
	i8 v127 = (i8)(intptr_t)(f14_UIToA);

	((void(*)(void))(intptr_t)v127)();

	i8 v128 = *(i8*)(intptr_t)(ws+1248);
	i8 v129 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v129 = v128;

	i8 v130 = (i8)(intptr_t)(ws+1216);
	i8 v131 = *(i8*)(intptr_t)v130;
	i8 v132 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v132 = v131;

	i8 v133 = (i8)(intptr_t)(ws+1204);
	*(i8*)(intptr_t)(ws+1344) = v133;
	i8 v134 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v134)();

}
	void f16_print_i32(void);

// print_i16 workspace at ws+1192 length ws+2
void f17_print_i16(void) {

	i8 v135 = (i8)(intptr_t)(ws+1192);
	i2 v136 = *(i2*)(intptr_t)v135;
	i4 v137 = v136;
	*(i4*)(intptr_t)(ws+1200) = v137;
	i8 v138 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(void))(intptr_t)v138)();

}

// AToI workspace at ws+1296 length ws+27
void f22_AToI(void) {

	i1 v208 = (i1)+0;
	i8 v209 = (i8)(intptr_t)(ws+1320);
	*(i1*)(intptr_t)v209 = v208;

	i1 v210 = (i1)+10;
	i8 v211 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v211 = v210;

	i8 v212 = (i8)(intptr_t)(ws+1296);
	i8 v213 = *(i8*)(intptr_t)v212;
	i8 v214 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v214 = v213;

	i4 v215 = (i4)+0;
	i8 v216 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v216 = v215;

	i8 v217 = (i8)(intptr_t)(ws+1312);
	i8 v218 = *(i8*)(intptr_t)v217;
	i1 v219 = *(i1*)(intptr_t)v218;
	i8 v220 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v220 = v219;

	i8 v221 = (i8)(intptr_t)(ws+1322);
	i1 v222 = *(i1*)(intptr_t)v221;
	i1 v223 = (i1)+45;
	if (v222==v223) goto c02_002e; else goto c02_002f;

c02_002e:;

	i1 v224 = (i1)+1;
	i8 v225 = (i8)(intptr_t)(ws+1320);
	*(i1*)(intptr_t)v225 = v224;

	i8 v226 = (i8)(intptr_t)(ws+1312);
	i8 v227 = *(i8*)(intptr_t)v226;
	i8 v228 = v227+(+1);
	i8 v229 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v229 = v228;

	i8 v230 = (i8)(intptr_t)(ws+1312);
	i8 v231 = *(i8*)(intptr_t)v230;
	i1 v232 = *(i1*)(intptr_t)v231;
	i8 v233 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v233 = v232;

c02_002f:;

c02_002b:;

	i8 v234 = (i8)(intptr_t)(ws+1322);
	i1 v235 = *(i1*)(intptr_t)v234;
	i1 v236 = (i1)+48;
	if (v235==v236) goto c02_0033; else goto c02_0034;

c02_0033:;

	i8 v237 = (i8)(intptr_t)(ws+1312);
	i8 v238 = *(i8*)(intptr_t)v237;
	i8 v239 = v238+(+1);
	i1 v240 = *(i1*)(intptr_t)v239;

	if (v240 != +120) goto c02_0036;

	i1 v241 = (i1)+16;
	i8 v242 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v242 = v241;

	goto c02_0035;

c02_0036:;

	if (v240 != +111) goto c02_0037;

	i1 v243 = (i1)+8;
	i8 v244 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v244 = v243;

	goto c02_0035;

c02_0037:;

	if (v240 != +98) goto c02_0038;

	i1 v245 = (i1)+2;
	i8 v246 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v246 = v245;

	goto c02_0035;

c02_0038:;

	if (v240 != +100) goto c02_0039;

	i1 v247 = (i1)+10;
	i8 v248 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v248 = v247;

	goto c02_0035;

c02_0039:;

	i8 v249 = (i8)(intptr_t)(ws+1312);
	i8 v250 = *(i8*)(intptr_t)v249;
	i8 v251 = v250+(-2);
	i8 v252 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v252 = v251;

c02_0035:;


	i8 v253 = (i8)(intptr_t)(ws+1312);
	i8 v254 = *(i8*)(intptr_t)v253;
	i8 v255 = v254+(+2);
	i8 v256 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v256 = v255;

	i8 v257 = (i8)(intptr_t)(ws+1312);
	i8 v258 = *(i8*)(intptr_t)v257;
	i1 v259 = *(i1*)(intptr_t)v258;
	i8 v260 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v260 = v259;

c02_0034:;

c02_0030:;

c02_003a:;

	i8 v261 = (i8)(intptr_t)(ws+1322);
	i1 v262 = *(i1*)(intptr_t)v261;
	i1 v263 = (i1)+97;
	if (v262<v263) goto c02_0040; else goto c02_003f;

c02_003f:;

	i8 v264 = (i8)(intptr_t)(ws+1322);
	i1 v265 = *(i1*)(intptr_t)v264;
	i1 v266 = v265+(-87);
	i8 v267 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v267 = v266;

	goto c02_003c;

c02_0040:;

	i8 v268 = (i8)(intptr_t)(ws+1322);
	i1 v269 = *(i1*)(intptr_t)v268;
	i1 v270 = (i1)+65;
	if (v269<v270) goto c02_0044; else goto c02_0043;

c02_0043:;

	i8 v271 = (i8)(intptr_t)(ws+1322);
	i1 v272 = *(i1*)(intptr_t)v271;
	i1 v273 = v272+(-55);
	i8 v274 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v274 = v273;

	goto c02_003c;

c02_0044:;

	i8 v275 = (i8)(intptr_t)(ws+1322);
	i1 v276 = *(i1*)(intptr_t)v275;
	i1 v277 = v276+(-48);
	i8 v278 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v278 = v277;

c02_003c:;

	i8 v279 = (i8)(intptr_t)(ws+1322);
	i1 v280 = *(i1*)(intptr_t)v279;
	i8 v281 = (i8)(intptr_t)(ws+1321);
	i1 v282 = *(i1*)(intptr_t)v281;
	if (v280<v282) goto c02_0049; else goto c02_0048;

c02_0048:;

	goto c02_003b;

c02_0049:;

c02_0045:;

	i8 v283 = (i8)(intptr_t)(ws+1304);
	i4 v284 = *(i4*)(intptr_t)v283;
	i8 v285 = (i8)(intptr_t)(ws+1321);
	i1 v286 = *(i1*)(intptr_t)v285;
	i4 v287 = v286;
	i4 v288 = v284*v287;
	i8 v289 = (i8)(intptr_t)(ws+1322);
	i1 v290 = *(i1*)(intptr_t)v289;
	i4 v291 = v290;
	i4 v292 = v288+v291;
	i8 v293 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v293 = v292;

	i8 v294 = (i8)(intptr_t)(ws+1312);
	i8 v295 = *(i8*)(intptr_t)v294;
	i8 v296 = v295+(+1);
	i8 v297 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v297 = v296;

	i8 v298 = (i8)(intptr_t)(ws+1312);
	i8 v299 = *(i8*)(intptr_t)v298;
	i1 v300 = *(i1*)(intptr_t)v299;
	i8 v301 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v301 = v300;

	goto c02_003a;

c02_003b:;

	i8 v302 = (i8)(intptr_t)(ws+1320);
	i1 v303 = *(i1*)(intptr_t)v302;
	i1 v304 = (i1)+0;
	if (v303==v304) goto c02_004e; else goto c02_004d;

c02_004d:;

	i8 v305 = (i8)(intptr_t)(ws+1304);
	i4 v306 = *(i4*)(intptr_t)v305;
	i4 v307 = -v306;
	i8 v308 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v308 = v307;

c02_004e:;

c02_004a:;

}

// ArgvInit workspace at ws+1192 length ws+0
void f24_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v315 = (i8)(intptr_t)(ws+16);
	i8 v316 = *(i8*)(intptr_t)v315;
	i8 v317 = v316+(+8);
	i8 v318 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v318 = v317;

}

// ArgvNext workspace at ws+1192 length ws+8
void f25_ArgvNext(void) {

	i8 v319 = (i8)(intptr_t)(ws+16);
	i8 v320 = *(i8*)(intptr_t)v319;
	i8 v321 = (i8)+0;
	if (v320==v321) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v322 = (i8)+0;
	i8 v323 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v323 = v322;

	return;

c02_0053:;

c02_004f:;

	i8 v324 = (i8)(intptr_t)(ws+16);
	i8 v325 = *(i8*)(intptr_t)v324;
	i8 v326 = *(i8*)(intptr_t)v325;
	i8 v327 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v327 = v326;

	i8 v328 = (i8)(intptr_t)(ws+1192);
	i8 v329 = *(i8*)(intptr_t)v328;
	i8 v330 = (i8)+0;
	if (v329==v330) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v331 = (i8)+0;
	i8 v332 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v332 = v331;

	goto c02_0054;

c02_0058:;

	i8 v333 = (i8)(intptr_t)(ws+16);
	i8 v334 = *(i8*)(intptr_t)v333;
	i8 v335 = v334+(+8);
	i8 v336 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v336 = v335;

c02_0054:;

}

// StrCmp workspace at ws+1320 length ws+17
void f26_StrCmp(void) {

c02_0059:;

	i8 v337 = (i8)(intptr_t)(ws+1320);
	i8 v338 = *(i8*)(intptr_t)v337;
	i1 v339 = *(i1*)(intptr_t)v338;
	i8 v340 = (i8)(intptr_t)(ws+1328);
	i8 v341 = *(i8*)(intptr_t)v340;
	i1 v342 = *(i1*)(intptr_t)v341;
	i1 v343 = v339-v342;
	i8 v344 = (i8)(intptr_t)(ws+1336);
	*(i1*)(intptr_t)v344 = v343;

	i8 v345 = (i8)(intptr_t)(ws+1336);
	i1 v346 = *(i1*)(intptr_t)v345;
	i1 v347 = (i1)+0;
	if (v346==v347) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v348 = (i8)(intptr_t)(ws+1320);
	i8 v349 = *(i8*)(intptr_t)v348;
	i1 v350 = *(i1*)(intptr_t)v349;
	i1 v351 = (i1)+0;
	if (v350==v351) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v352 = (i8)(intptr_t)(ws+1320);
	i8 v353 = *(i8*)(intptr_t)v352;
	i8 v354 = v353+(+1);
	i8 v355 = (i8)(intptr_t)(ws+1320);
	*(i8*)(intptr_t)v355 = v354;

	i8 v356 = (i8)(intptr_t)(ws+1328);
	i8 v357 = *(i8*)(intptr_t)v356;
	i8 v358 = v357+(+1);
	i8 v359 = (i8)(intptr_t)(ws+1328);
	*(i8*)(intptr_t)v359 = v358;

	goto c02_0059;

c02_005a:;

}

// RawAlloc workspace at ws+1344 length ws+16
void f32_RawAlloc(void) {


	
*(i8*)(intptr_t)(ws+1352) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+1344) 
); 



}
	void f32_RawAlloc(void);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// Alloc workspace at ws+1320 length ws+24
void f33_Alloc(void) {

	i8 v465 = (i8)(intptr_t)(ws+1320);
	i8 v466 = *(i8*)(intptr_t)v465;
	*(i8*)(intptr_t)(ws+1344) = v466;
	i8 v467 = (i8)(intptr_t)(f32_RawAlloc);

	((void(*)(void))(intptr_t)v467)();

	i8 v468 = *(i8*)(intptr_t)(ws+1352);
	i8 v469 = (i8)(intptr_t)(ws+1336);
	*(i8*)(intptr_t)v469 = v468;

	i8 v470 = (i8)(intptr_t)(ws+1336);
	i8 v471 = *(i8*)(intptr_t)v470;
	i8 v472 = (i8)(intptr_t)(ws+1328);
	*(i8*)(intptr_t)v472 = v471;

	i8 v473 = (i8)(intptr_t)(ws+1328);
	i8 v474 = *(i8*)(intptr_t)v473;
	i8 v475 = (i8)+0;
	if (v474==v475) goto c02_008c; else goto c02_008d;

c02_008c:;

	i8 v476 = (i8)(intptr_t)c02_s0000;
	*(i8*)(intptr_t)(ws+1344) = v476;
	i8 v477 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v477)();

	i8 v478 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v478)();

c02_008d:;

c02_0089:;

}

// Free workspace at ws+1328 length ws+8
void f34_Free(void) {


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1328) 
); 



}

// StrDup workspace at ws+1320 length ws+16
void f35_StrDup(void) {


	
*(i8*)(intptr_t)(ws+1328) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1320) 
); 



}

// GetFreeMemory workspace at ws+1192 length ws+8
void f38_GetFreeMemory(void) {

	i8 v479 = (i8)+0;
	i8 v480 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v480 = v479;

}

// _fcb_init workspace at ws+1264 length ws+8
void f41__fcb_init(void) {

	i4 v481 = (i4)+0;
	i8 v482 = (i8)(intptr_t)(ws+1264);
	i8 v483 = *(i8*)(intptr_t)v482;
	i8 v484 = v483+(+4);
	*(i4*)(intptr_t)v484 = v481;

	i2 v485 = (i2)+0;
	i8 v486 = (i8)(intptr_t)(ws+1264);
	i8 v487 = *(i8*)(intptr_t)v486;
	i8 v488 = v487+(+8);
	*(i2*)(intptr_t)v488 = v485;

	i2 v489 = (i2)+0;
	i8 v490 = (i8)(intptr_t)(ws+1264);
	i8 v491 = *(i8*)(intptr_t)v490;
	i8 v492 = v491+(+10);
	*(i2*)(intptr_t)v492 = v489;

	i1 v493 = (i1)+0;
	i8 v494 = (i8)(intptr_t)(ws+1264);
	i8 v495 = *(i8*)(intptr_t)v494;
	i8 v496 = v495+(+524);
	*(i1*)(intptr_t)v496 = v493;

}

// _fcb_advance workspace at ws+1360 length ws+8
void f42__fcb_advance(void) {

	i8 v497 = (i8)(intptr_t)(ws+1360);
	i8 v498 = *(i8*)(intptr_t)v497;
	i8 v499 = v498+(+10);
	i2 v500 = *(i2*)(intptr_t)v499;
	i2 v501 = v500+(+1);
	i8 v502 = (i8)(intptr_t)(ws+1360);
	i8 v503 = *(i8*)(intptr_t)v502;
	i8 v504 = v503+(+10);
	*(i2*)(intptr_t)v504 = v501;

}
	void f39_FCBRawRead(void);
	void f42__fcb_advance(void);

// _fcb_fillbuffer workspace at ws+1328 length ws+18
void f43__fcb_fillbuffer(void) {

	i8 v505 = (i8)(intptr_t)(ws+1328);
	i8 v506 = *(i8*)(intptr_t)v505;
	i8 v507 = v506+(+4);
	i4 v508 = *(i4*)(intptr_t)v507;
	i8 v509 = (i8)(intptr_t)(ws+1328);
	i8 v510 = *(i8*)(intptr_t)v509;
	i8 v511 = v510+(+10);
	i2 v512 = *(i2*)(intptr_t)v511;
	i4 v513 = v512;
	i4 v514 = v508+v513;
	i8 v515 = (i8)(intptr_t)(ws+1340);
	*(i4*)(intptr_t)v515 = v514;

	i8 v516 = (i8)(intptr_t)(ws+1328);
	i8 v517 = *(i8*)(intptr_t)v516;
	*(i8*)(intptr_t)(ws+1352) = v517;
	i8 v518 = (i8)(intptr_t)(ws+1340);
	i4 v519 = *(i4*)(intptr_t)v518;
	*(i4*)(intptr_t)(ws+1360) = v519;
	i2 v520 = (i2)+512;
	*(i2*)(intptr_t)(ws+1364) = v520;
	i8 v521 = (i8)(intptr_t)(f39_FCBRawRead);

	((void(*)(void))(intptr_t)v521)();

	i2 v522 = *(i2*)(intptr_t)(ws+1366);
	i8 v523 = (i8)(intptr_t)(ws+1344);
	*(i2*)(intptr_t)v523 = v522;

	i8 v524 = (i8)(intptr_t)(ws+1344);
	i2 v525 = *(i2*)(intptr_t)v524;
	i8 v526 = (i8)(intptr_t)(ws+1328);
	i8 v527 = *(i8*)(intptr_t)v526;
	i8 v528 = v527+(+8);
	*(i2*)(intptr_t)v528 = v525;

	i1 v529 = (i1)+0;
	i8 v530 = (i8)(intptr_t)(ws+1336);
	*(i1*)(intptr_t)v530 = v529;

	i8 v531 = (i8)(intptr_t)(ws+1328);
	i8 v532 = *(i8*)(intptr_t)v531;
	i8 v533 = v532+(+524);
	i1 v534 = *(i1*)(intptr_t)v533;
	i1 v535 = v534&(+1);
	i1 v536 = (i1)+0;
	if (v535==v536) goto c02_0092; else goto c02_0091;

c02_0091:;

	return;

c02_0092:;

c02_008e:;

	i1 v537 = (i1)+2;
	i8 v538 = (i8)(intptr_t)(ws+1328);
	i8 v539 = *(i8*)(intptr_t)v538;
	i8 v540 = v539+(+524);
	*(i1*)(intptr_t)v540 = v537;

	i8 v541 = (i8)(intptr_t)(ws+1340);
	i4 v542 = *(i4*)(intptr_t)v541;
	i8 v543 = (i8)(intptr_t)(ws+1328);
	i8 v544 = *(i8*)(intptr_t)v543;
	i8 v545 = v544+(+4);
	*(i4*)(intptr_t)v545 = v542;

	i2 v546 = (i2)+0;
	i8 v547 = (i8)(intptr_t)(ws+1328);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+10);
	*(i2*)(intptr_t)v549 = v546;

	i8 v550 = (i8)(intptr_t)(ws+1328);
	i8 v551 = *(i8*)(intptr_t)v550;
	i8 v552 = v551+(+8);
	i2 v553 = *(i2*)(intptr_t)v552;
	i2 v554 = (i2)+0;
	if (v553==v554) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v555 = (i8)(intptr_t)(ws+1328);
	i8 v556 = *(i8*)(intptr_t)v555;
	i8 v557 = v556+(+12);
	i1 v558 = *(i1*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+1336);
	*(i1*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+1328);
	i8 v561 = *(i8*)(intptr_t)v560;
	*(i8*)(intptr_t)(ws+1360) = v561;
	i8 v562 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v562)();

c02_0097:;

c02_0093:;

}
	void f40_FCBRawWrite(void);

// FCBFlush workspace at ws+1360 length ws+12
void f44_FCBFlush(void) {

	i8 v563 = (i8)(intptr_t)(ws+1360);
	i8 v564 = *(i8*)(intptr_t)v563;
	i8 v565 = v564+(+4);
	i4 v566 = *(i4*)(intptr_t)v565;
	i8 v567 = (i8)(intptr_t)(ws+1368);
	*(i4*)(intptr_t)v567 = v566;

	i8 v568 = (i8)(intptr_t)(ws+1360);
	i8 v569 = *(i8*)(intptr_t)v568;
	i8 v570 = v569+(+524);
	i1 v571 = *(i1*)(intptr_t)v570;
	i1 v572 = v571&(+4);
	i1 v573 = (i1)+0;
	if (v572==v573) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v574 = (i8)(intptr_t)(ws+1360);
	i8 v575 = *(i8*)(intptr_t)v574;
	*(i8*)(intptr_t)(ws+1376) = v575;
	i8 v576 = (i8)(intptr_t)(ws+1368);
	i4 v577 = *(i4*)(intptr_t)v576;
	*(i4*)(intptr_t)(ws+1384) = v577;
	i8 v578 = (i8)(intptr_t)(ws+1360);
	i8 v579 = *(i8*)(intptr_t)v578;
	i8 v580 = v579+(+10);
	i2 v581 = *(i2*)(intptr_t)v580;
	*(i2*)(intptr_t)(ws+1388) = v581;
	i8 v582 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(void))(intptr_t)v582)();

	i8 v583 = (i8)(intptr_t)(ws+1360);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = v584+(+524);
	i1 v586 = *(i1*)(intptr_t)v585;
	i1 v587 = v586&(+1);
	i1 v588 = (i1)+0;
	if (v587==v588) goto c02_00a1; else goto c02_00a0;

c02_00a0:;

	return;

c02_00a1:;

c02_009d:;

c02_009c:;

c02_0098:;

	i8 v589 = (i8)(intptr_t)(ws+1368);
	i4 v590 = *(i4*)(intptr_t)v589;
	i8 v591 = (i8)(intptr_t)(ws+1360);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = v592+(+10);
	i2 v594 = *(i2*)(intptr_t)v593;
	i4 v595 = v594;
	i4 v596 = v590+v595;
	i8 v597 = (i8)(intptr_t)(ws+1360);
	i8 v598 = *(i8*)(intptr_t)v597;
	i8 v599 = v598+(+4);
	*(i4*)(intptr_t)v599 = v596;

	i1 v600 = (i1)+0;
	i8 v601 = (i8)(intptr_t)(ws+1360);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = v602+(+524);
	*(i1*)(intptr_t)v603 = v600;

	i2 v604 = (i2)+0;
	i8 v605 = (i8)(intptr_t)(ws+1360);
	i8 v606 = *(i8*)(intptr_t)v605;
	i8 v607 = v606+(+10);
	*(i2*)(intptr_t)v607 = v604;

	i2 v608 = (i2)+0;
	i8 v609 = (i8)(intptr_t)(ws+1360);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = v610+(+8);
	*(i2*)(intptr_t)v611 = v608;

}
	void f44_FCBFlush(void);
	void f42__fcb_advance(void);

// _fcb_flushbuffer workspace at ws+1344 length ws+9
void f45__fcb_flushbuffer(void) {

	i8 v612 = (i8)(intptr_t)(ws+1344);
	i8 v613 = *(i8*)(intptr_t)v612;
	*(i8*)(intptr_t)(ws+1360) = v613;
	i8 v614 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v614)();

	i8 v615 = (i8)(intptr_t)(ws+1344);
	i8 v616 = *(i8*)(intptr_t)v615;
	i8 v617 = v616+(+524);
	i1 v618 = *(i1*)(intptr_t)v617;
	i1 v619 = v618&(+1);
	i1 v620 = (i1)+0;
	if (v619==v620) goto c02_00a6; else goto c02_00a5;

c02_00a5:;

	return;

c02_00a6:;

c02_00a2:;

	i1 v621 = (i1)+4;
	i8 v622 = (i8)(intptr_t)(ws+1344);
	i8 v623 = *(i8*)(intptr_t)v622;
	i8 v624 = v623+(+524);
	*(i1*)(intptr_t)v624 = v621;

	i8 v625 = (i8)(intptr_t)(ws+1352);
	i1 v626 = *(i1*)(intptr_t)v625;
	i8 v627 = (i8)(intptr_t)(ws+1344);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v628+(+12);
	*(i1*)(intptr_t)v629 = v626;

	i8 v630 = (i8)(intptr_t)(ws+1344);
	i8 v631 = *(i8*)(intptr_t)v630;
	*(i8*)(intptr_t)(ws+1360) = v631;
	i8 v632 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v632)();

}
	void f44_FCBFlush(void);
	void f43__fcb_fillbuffer(void);
	void f42__fcb_advance(void);

// FCBGetChar workspace at ws+1312 length ws+13
void f46_FCBGetChar(void) {

	i8 v633 = (i8)(intptr_t)(ws+1312);
	i8 v634 = *(i8*)(intptr_t)v633;
	i8 v635 = v634+(+524);
	i1 v636 = *(i1*)(intptr_t)v635;
	i1 v637 = v636&(+4);
	i1 v638 = (i1)+0;
	if (v637==v638) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v639 = (i8)(intptr_t)(ws+1312);
	i8 v640 = *(i8*)(intptr_t)v639;
	*(i8*)(intptr_t)(ws+1360) = v640;
	i8 v641 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v641)();

c02_00ab:;

c02_00a7:;

	i8 v642 = (i8)(intptr_t)(ws+1312);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = v643+(+10);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(ws+1322);
	*(i2*)(intptr_t)v646 = v645;

	i8 v647 = (i8)(intptr_t)(ws+1322);
	i2 v648 = *(i2*)(intptr_t)v647;
	i8 v649 = (i8)(intptr_t)(ws+1312);
	i8 v650 = *(i8*)(intptr_t)v649;
	i8 v651 = v650+(+8);
	i2 v652 = *(i2*)(intptr_t)v651;
	if (v648==v652) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v653 = (i8)(intptr_t)(ws+1312);
	i8 v654 = *(i8*)(intptr_t)v653;
	*(i8*)(intptr_t)(ws+1328) = v654;
	i8 v655 = (i8)(intptr_t)(f43__fcb_fillbuffer);

	((void(*)(void))(intptr_t)v655)();

	i1 v656 = *(i1*)(intptr_t)(ws+1336);
	i8 v657 = (i8)(intptr_t)(ws+1324);
	*(i1*)(intptr_t)v657 = v656;

	i8 v658 = (i8)(intptr_t)(ws+1324);
	i1 v659 = *(i1*)(intptr_t)v658;
	i8 v660 = (i8)(intptr_t)(ws+1320);
	*(i1*)(intptr_t)v660 = v659;

	goto c02_00ac;

c02_00b0:;

	i8 v661 = (i8)(intptr_t)(ws+1312);
	i8 v662 = *(i8*)(intptr_t)v661;
	i8 v663 = v662+(+12);
	i8 v664 = (i8)(intptr_t)(ws+1322);
	i2 v665 = *(i2*)(intptr_t)v664;
	i8 v666 = v665;
	i8 v667 = v663+v666;
	i1 v668 = *(i1*)(intptr_t)v667;
	i8 v669 = (i8)(intptr_t)(ws+1320);
	*(i1*)(intptr_t)v669 = v668;

	i8 v670 = (i8)(intptr_t)(ws+1312);
	i8 v671 = *(i8*)(intptr_t)v670;
	*(i8*)(intptr_t)(ws+1360) = v671;
	i8 v672 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v672)();

c02_00ac:;

}
	void f44_FCBFlush(void);
	void f45__fcb_flushbuffer(void);
	void f42__fcb_advance(void);

// FCBPutChar workspace at ws+1328 length ws+12
void f47_FCBPutChar(void) {

	i8 v673 = (i8)(intptr_t)(ws+1328);
	i8 v674 = *(i8*)(intptr_t)v673;
	i8 v675 = v674+(+524);
	i1 v676 = *(i1*)(intptr_t)v675;
	i1 v677 = v676&(+2);
	i1 v678 = (i1)+0;
	if (v677==v678) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v679 = (i8)(intptr_t)(ws+1328);
	i8 v680 = *(i8*)(intptr_t)v679;
	*(i8*)(intptr_t)(ws+1360) = v680;
	i8 v681 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v681)();

c02_00b5:;

c02_00b1:;

	i8 v682 = (i8)(intptr_t)(ws+1328);
	i8 v683 = *(i8*)(intptr_t)v682;
	i8 v684 = v683+(+10);
	i2 v685 = *(i2*)(intptr_t)v684;
	i8 v686 = (i8)(intptr_t)(ws+1338);
	*(i2*)(intptr_t)v686 = v685;

	i8 v687 = (i8)(intptr_t)(ws+1338);
	i2 v688 = *(i2*)(intptr_t)v687;
	i2 v689 = (i2)+512;
	if (v688==v689) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v690 = (i8)(intptr_t)(ws+1328);
	i8 v691 = *(i8*)(intptr_t)v690;
	*(i8*)(intptr_t)(ws+1344) = v691;
	i8 v692 = (i8)(intptr_t)(ws+1336);
	i1 v693 = *(i1*)(intptr_t)v692;
	*(i1*)(intptr_t)(ws+1352) = v693;
	i8 v694 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(void))(intptr_t)v694)();

	goto c02_00b6;

c02_00ba:;

	i8 v695 = (i8)(intptr_t)(ws+1336);
	i1 v696 = *(i1*)(intptr_t)v695;
	i8 v697 = (i8)(intptr_t)(ws+1328);
	i8 v698 = *(i8*)(intptr_t)v697;
	i8 v699 = v698+(+12);
	i8 v700 = (i8)(intptr_t)(ws+1338);
	i2 v701 = *(i2*)(intptr_t)v700;
	i8 v702 = v701;
	i8 v703 = v699+v702;
	*(i1*)(intptr_t)v703 = v696;

	i8 v704 = (i8)(intptr_t)(ws+1328);
	i8 v705 = *(i8*)(intptr_t)v704;
	*(i8*)(intptr_t)(ws+1360) = v705;
	i8 v706 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v706)();

c02_00b6:;

	i8 v707 = (i8)(intptr_t)(ws+1328);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = v708+(+524);
	i1 v710 = *(i1*)(intptr_t)v709;
	i1 v711 = v710|(+4);
	i8 v712 = (i8)(intptr_t)(ws+1328);
	i8 v713 = *(i8*)(intptr_t)v712;
	i8 v714 = v713+(+524);
	*(i1*)(intptr_t)v714 = v711;

}

// FCBRawRead workspace at ws+1352 length ws+36
void f39_FCBRawRead(void) {

	i8 v790 = (i8)(intptr_t)(ws+1352);
	i8 v791 = *(i8*)(intptr_t)v790;
	i4 v792 = *(i4*)(intptr_t)v791;
	i8 v793 = (i8)(intptr_t)(ws+1368);
	*(i4*)(intptr_t)v793 = v792;

	i8 v794 = (i8)(intptr_t)(ws+1352);
	i8 v795 = *(i8*)(intptr_t)v794;
	i8 v796 = v795+(+12);
	i8 v797 = (i8)(intptr_t)(ws+1376);
	*(i8*)(intptr_t)v797 = v796;


	
*(i4*)(intptr_t)(ws+1384) 
=pread( 
*(i4*)(intptr_t)(ws+1368) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1376) 
,  
*(i2*)(intptr_t)(ws+1364) 
,  
*(i4*)(intptr_t)(ws+1360) 
); 



	i8 v798 = (i8)(intptr_t)(ws+1384);
	i4 v799 = *(i4*)(intptr_t)v798;
	i4 v800 = (i4)-1;
	if (v799==v800) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v801 = (i2)+0;
	i8 v802 = (i8)(intptr_t)(ws+1366);
	*(i2*)(intptr_t)v802 = v801;

	i8 v803 = (i8)(intptr_t)(ws+1352);
	i8 v804 = *(i8*)(intptr_t)v803;
	i8 v805 = v804+(+524);
	i1 v806 = *(i1*)(intptr_t)v805;
	i1 v807 = v806|(+1);
	i8 v808 = (i8)(intptr_t)(ws+1352);
	i8 v809 = *(i8*)(intptr_t)v808;
	i8 v810 = v809+(+524);
	*(i1*)(intptr_t)v810 = v807;

	goto c02_00d3;

c02_00d7:;

	i8 v811 = (i8)(intptr_t)(ws+1384);
	i4 v812 = *(i4*)(intptr_t)v811;
	i2 v813 = (s2)(s4)v812;
	i8 v814 = (i8)(intptr_t)(ws+1366);
	*(i2*)(intptr_t)v814 = v813;

c02_00d3:;

}

// FCBRawWrite workspace at ws+1376 length ws+36
void f40_FCBRawWrite(void) {

	i8 v815 = (i8)(intptr_t)(ws+1376);
	i8 v816 = *(i8*)(intptr_t)v815;
	i4 v817 = *(i4*)(intptr_t)v816;
	i8 v818 = (i8)(intptr_t)(ws+1392);
	*(i4*)(intptr_t)v818 = v817;

	i8 v819 = (i8)(intptr_t)(ws+1376);
	i8 v820 = *(i8*)(intptr_t)v819;
	i8 v821 = v820+(+12);
	i8 v822 = (i8)(intptr_t)(ws+1400);
	*(i8*)(intptr_t)v822 = v821;


	
*(i4*)(intptr_t)(ws+1408) 
=pwrite( 
*(i4*)(intptr_t)(ws+1392) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1400) 
,  
*(i2*)(intptr_t)(ws+1388) 
,  
*(i4*)(intptr_t)(ws+1384) 
); 



	i8 v823 = (i8)(intptr_t)(ws+1408);
	i4 v824 = *(i4*)(intptr_t)v823;
	i4 v825 = (i4)-1;
	if (v824==v825) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v826 = (i8)(intptr_t)(ws+1376);
	i8 v827 = *(i8*)(intptr_t)v826;
	i8 v828 = v827+(+524);
	i1 v829 = *(i1*)(intptr_t)v828;
	i1 v830 = v829|(+1);
	i8 v831 = (i8)(intptr_t)(ws+1376);
	i8 v832 = *(i8*)(intptr_t)v831;
	i8 v833 = v832+(+524);
	*(i1*)(intptr_t)v833 = v830;

c02_00dc:;

c02_00d8:;

}
	void f41__fcb_init(void);

// fcb_i_open workspace at ws+1232 length ws+28
void f51_fcb_i_open(void) {

	i8 v834 = (i8)(intptr_t)(ws+1232);
	i8 v835 = *(i8*)(intptr_t)v834;
	*(i8*)(intptr_t)(ws+1264) = v835;
	i8 v836 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(void))(intptr_t)v836)();


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+1256) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1240) 
,  
*(i4*)(intptr_t)(ws+1248) 
,  
(+438)
); 



	i8 v837 = (i8)(intptr_t)(ws+1256);
	i4 v838 = *(i4*)(intptr_t)v837;
	i8 v839 = (i8)(intptr_t)(ws+1232);
	i8 v840 = *(i8*)(intptr_t)v839;
	*(i4*)(intptr_t)v840 = v838;

	i8 v841 = (i8)(intptr_t)(ws+1256);
	i4 v842 = *(i4*)(intptr_t)v841;
	i4 v843 = (i4)+0;
	if ((s4)v842<(s4)v843) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+1252) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v844 = (i1)+0;
	i8 v845 = (i8)(intptr_t)(ws+1252);
	*(i1*)(intptr_t)v845 = v844;

c02_00dd:;

}
	void f51_fcb_i_open(void);

// FCBOpenIn workspace at ws+1192 length ws+18
void f52_FCBOpenIn(void) {

	i8 v846 = (i8)(intptr_t)(ws+1192);
	i8 v847 = *(i8*)(intptr_t)v846;
	*(i8*)(intptr_t)(ws+1232) = v847;
	i8 v848 = (i8)(intptr_t)(ws+1200);
	i8 v849 = *(i8*)(intptr_t)v848;
	*(i8*)(intptr_t)(ws+1240) = v849;
	i4 v850 = (i4)+0;
	*(i4*)(intptr_t)(ws+1248) = v850;
	i8 v851 = (i8)(intptr_t)(f51_fcb_i_open);

	((void(*)(void))(intptr_t)v851)();

	i1 v852 = *(i1*)(intptr_t)(ws+1252);
	i8 v853 = (i8)(intptr_t)(ws+1209);
	*(i1*)(intptr_t)v853 = v852;

	i8 v854 = (i8)(intptr_t)(ws+1209);
	i1 v855 = *(i1*)(intptr_t)v854;
	i8 v856 = (i8)(intptr_t)(ws+1208);
	*(i1*)(intptr_t)v856 = v855;

}
	void f51_fcb_i_open(void);

// FCBOpenOut workspace at ws+1208 length ws+18
void f54_FCBOpenOut(void) {

	i8 v868 = (i8)(intptr_t)(ws+1208);
	i8 v869 = *(i8*)(intptr_t)v868;
	*(i8*)(intptr_t)(ws+1232) = v869;
	i8 v870 = (i8)(intptr_t)(ws+1216);
	i8 v871 = *(i8*)(intptr_t)v870;
	*(i8*)(intptr_t)(ws+1240) = v871;
	i4 v872 = (i4)+578;
	*(i4*)(intptr_t)(ws+1248) = v872;
	i8 v873 = (i8)(intptr_t)(f51_fcb_i_open);

	((void(*)(void))(intptr_t)v873)();

	i1 v874 = *(i1*)(intptr_t)(ws+1252);
	i8 v875 = (i8)(intptr_t)(ws+1225);
	*(i1*)(intptr_t)v875 = v874;

	i8 v876 = (i8)(intptr_t)(ws+1225);
	i1 v877 = *(i1*)(intptr_t)v876;
	i8 v878 = (i8)(intptr_t)(ws+1224);
	*(i1*)(intptr_t)v878 = v877;

}
	void f44_FCBFlush(void);

// FCBClose workspace at ws+1200 length ws+16
void f55_FCBClose(void) {

	i8 v879 = (i8)(intptr_t)(ws+1200);
	i8 v880 = *(i8*)(intptr_t)v879;
	*(i8*)(intptr_t)(ws+1360) = v880;
	i8 v881 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v881)();

	i8 v882 = (i8)(intptr_t)(ws+1200);
	i8 v883 = *(i8*)(intptr_t)v882;
	i4 v884 = *(i4*)(intptr_t)v883;
	i8 v885 = (i8)(intptr_t)(ws+1212);
	*(i4*)(intptr_t)v885 = v884;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+1212) 
); 


	
*(i1*)(intptr_t)(ws+1208) 
 = errno; 



}
const i1 c02_s0001[] = { 0x43,0x4f,0x57,0x57,0x52,0x41,0x50,0x3a,0x20,0 };
	void f12_print(void);
	void f38_GetFreeMemory(void);
	void f17_print_i16(void);
const i1 c02_s0002[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(void);
const i1 c02_s0003[] = { 0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+1192 length ws+0
void f60_SyntaxError(void) {

	i8 v963 = (i8)(intptr_t)c02_s0003;
	*(i8*)(intptr_t)(ws+1344) = v963;
	i8 v964 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v964)();

	i8 v965 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v965)();

}
const i1 c02_s0004[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// FatalError workspace at ws+1304 length ws+8
void f61_FatalError(void) {

	i8 v966 = (i8)(intptr_t)c02_s0004;
	*(i8*)(intptr_t)(ws+1344) = v966;
	i8 v967 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v967)();

	i8 v968 = (i8)(intptr_t)(ws+1304);
	i8 v969 = *(i8*)(intptr_t)v968;
	*(i8*)(intptr_t)(ws+1344) = v969;
	i8 v970 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v970)();

	i8 v971 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v971)();

	i8 v972 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v972)();

}
	void f33_Alloc(void);

// E_b8 workspace at ws+1296 length ws+24
void f62_E_b8(void) {

	i8 v973 = (i8)(intptr_t)(ws+1104);
	i8 v974 = *(i8*)(intptr_t)v973;
	i8 v975 = (i8)+0;
	if (v974==v975) goto c02_00f9; else goto c02_00f8;

c02_00f8:;

	i8 v976 = (i8)(intptr_t)(ws+1104);
	i8 v977 = *(i8*)(intptr_t)v976;
	i8 v978 = v977+(+16);
	i8 v979 = *(i8*)(intptr_t)v978;
	i8 v980 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v980 = v979;

	i8 v981 = (i8)(intptr_t)(ws+1304);
	i8 v982 = *(i8*)(intptr_t)v981;
	i8 v983 = v982+(+255);
	i1 v984 = *(i1*)(intptr_t)v983;
	i1 v985 = (i1)+255;
	if (v984==v985) goto c02_00fd; else goto c02_00fe;

c02_00fd:;

	i8 v986 = (i8)+264;
	*(i8*)(intptr_t)(ws+1320) = v986;
	i8 v987 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v987)();

	i8 v988 = *(i8*)(intptr_t)(ws+1328);
	i8 v989 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v989 = v988;

	i8 v990 = (i8)(intptr_t)(ws+1312);
	i8 v991 = *(i8*)(intptr_t)v990;
	i8 v992 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v992 = v991;

	i8 v993 = (i8)(intptr_t)(ws+1304);
	i8 v994 = *(i8*)(intptr_t)v993;
	i8 v995 = (i8)(intptr_t)(ws+1104);
	i8 v996 = *(i8*)(intptr_t)v995;
	i8 v997 = v996+(+16);
	i8 v998 = *(i8*)(intptr_t)v997;
	i8 v999 = v998+(+256);
	*(i8*)(intptr_t)v999 = v994;

	i8 v1000 = (i8)(intptr_t)(ws+1304);
	i8 v1001 = *(i8*)(intptr_t)v1000;
	i8 v1002 = (i8)(intptr_t)(ws+1104);
	i8 v1003 = *(i8*)(intptr_t)v1002;
	i8 v1004 = v1003+(+16);
	*(i8*)(intptr_t)v1004 = v1001;

c02_00fe:;

c02_00fa:;

	i8 v1005 = (i8)(intptr_t)(ws+1296);
	i1 v1006 = *(i1*)(intptr_t)v1005;
	i8 v1007 = (i8)(intptr_t)(ws+1304);
	i8 v1008 = *(i8*)(intptr_t)v1007;
	i8 v1009 = (i8)(intptr_t)(ws+1304);
	i8 v1010 = *(i8*)(intptr_t)v1009;
	i8 v1011 = v1010+(+255);
	i1 v1012 = *(i1*)(intptr_t)v1011;
	i8 v1013 = v1012;
	i8 v1014 = v1008+v1013;
	*(i1*)(intptr_t)v1014 = v1006;

	i8 v1015 = (i8)(intptr_t)(ws+1304);
	i8 v1016 = *(i8*)(intptr_t)v1015;
	i8 v1017 = v1016+(+255);
	i1 v1018 = *(i1*)(intptr_t)v1017;
	i1 v1019 = v1018+(+1);
	i8 v1020 = (i8)(intptr_t)(ws+1304);
	i8 v1021 = *(i8*)(intptr_t)v1020;
	i8 v1022 = v1021+(+255);
	*(i1*)(intptr_t)v1022 = v1019;

	i8 v1023 = (i8)(intptr_t)(ws+1104);
	i8 v1024 = *(i8*)(intptr_t)v1023;
	i8 v1025 = v1024+(+24);
	i2 v1026 = *(i2*)(intptr_t)v1025;
	i2 v1027 = v1026+(+1);
	i8 v1028 = (i8)(intptr_t)(ws+1104);
	i8 v1029 = *(i8*)(intptr_t)v1028;
	i8 v1030 = v1029+(+24);
	*(i2*)(intptr_t)v1030 = v1027;

c02_00f9:;

c02_00f5:;

}
	void f62_E_b8(void);

// E workspace at ws+1272 length ws+9
void f63_E(void) {

c02_00ff:;

	i8 v1031 = (i8)(intptr_t)(ws+1272);
	i8 v1032 = *(i8*)(intptr_t)v1031;
	i1 v1033 = *(i1*)(intptr_t)v1032;
	i8 v1034 = (i8)(intptr_t)(ws+1280);
	*(i1*)(intptr_t)v1034 = v1033;

	i8 v1035 = (i8)(intptr_t)(ws+1272);
	i8 v1036 = *(i8*)(intptr_t)v1035;
	i8 v1037 = v1036+(+1);
	i8 v1038 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v1038 = v1037;

	i8 v1039 = (i8)(intptr_t)(ws+1280);
	i1 v1040 = *(i1*)(intptr_t)v1039;
	i1 v1041 = (i1)+0;
	if (v1040==v1041) goto c02_0104; else goto c02_0105;

c02_0104:;

	goto c02_0100;

c02_0105:;

c02_0101:;

	i8 v1042 = (i8)(intptr_t)(ws+1280);
	i1 v1043 = *(i1*)(intptr_t)v1042;
	*(i1*)(intptr_t)(ws+1296) = v1043;
	i8 v1044 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1044)();

	goto c02_00ff;

c02_0100:;

}
	void f62_E_b8(void);
	void f62_E_b8(void);

// E_b16 workspace at ws+1288 length ws+2
void f64_E_b16(void) {

	i8 v1045 = (i8)(intptr_t)(ws+1288);
	i2 v1046 = *(i2*)(intptr_t)v1045;
	i1 v1047 = v1046;
	*(i1*)(intptr_t)(ws+1296) = v1047;
	i8 v1048 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1048)();

	i8 v1049 = (i8)(intptr_t)(ws+1288);
	i2 v1050 = *(i2*)(intptr_t)v1049;
	i1 v1051 = (i1)+8;
	i2 v1052 = ((i2)v1050)>>v1051;
	i1 v1053 = v1052;
	*(i1*)(intptr_t)(ws+1296) = v1053;
	i8 v1054 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1054)();

}
	void f33_Alloc(void);
	void f33_Alloc(void);

// EmitterPushChunk workspace at ws+1288 length ws+24
void f66_EmitterPushChunk(void) {

	i8 v1065 = (i8)+26;
	*(i8*)(intptr_t)(ws+1320) = v1065;
	i8 v1066 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1066)();

	i8 v1067 = *(i8*)(intptr_t)(ws+1328);
	i8 v1068 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1068 = v1067;

	i8 v1069 = (i8)(intptr_t)(ws+1288);
	i8 v1070 = *(i8*)(intptr_t)v1069;
	i8 v1071 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1071 = v1070;

	i8 v1072 = (i8)+264;
	*(i8*)(intptr_t)(ws+1320) = v1072;
	i8 v1073 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1073)();

	i8 v1074 = *(i8*)(intptr_t)(ws+1328);
	i8 v1075 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v1075 = v1074;

	i8 v1076 = (i8)(intptr_t)(ws+1304);
	i8 v1077 = *(i8*)(intptr_t)v1076;
	i8 v1078 = (i8)(intptr_t)(ws+1296);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	i8 v1080 = v1079+(+16);
	*(i8*)(intptr_t)v1080 = v1077;

	i8 v1081 = (i8)(intptr_t)(ws+1296);
	i8 v1082 = *(i8*)(intptr_t)v1081;
	i8 v1083 = v1082+(+16);
	i8 v1084 = *(i8*)(intptr_t)v1083;
	i8 v1085 = (i8)(intptr_t)(ws+1296);
	i8 v1086 = *(i8*)(intptr_t)v1085;
	i8 v1087 = v1086+(+8);
	*(i8*)(intptr_t)v1087 = v1084;

	i8 v1088 = (i8)(intptr_t)(ws+1104);
	i8 v1089 = *(i8*)(intptr_t)v1088;
	i8 v1090 = (i8)(intptr_t)(ws+1296);
	i8 v1091 = *(i8*)(intptr_t)v1090;
	*(i8*)(intptr_t)v1091 = v1089;

	i8 v1092 = (i8)(intptr_t)(ws+1296);
	i8 v1093 = *(i8*)(intptr_t)v1092;
	i8 v1094 = (i8)(intptr_t)(ws+1104);
	*(i8*)(intptr_t)v1094 = v1093;

}
	void f47_FCBPutChar(void);
	void f47_FCBPutChar(void);
	void f47_FCBPutChar(void);
	void f47_FCBPutChar(void);
	void f34_Free(void);
	void f34_Free(void);

// EmitterPopChunk workspace at ws+1288 length ws+40
void f67_EmitterPopChunk(void) {

	i8 v1095 = (i8)(intptr_t)(ws+576);
	*(i8*)(intptr_t)(ws+1328) = v1095;
	i8 v1096 = (i8)(intptr_t)(ws+1288);
	i1 v1097 = *(i1*)(intptr_t)v1096;
	*(i1*)(intptr_t)(ws+1336) = v1097;
	i8 v1098 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v1098)();

	i8 v1099 = (i8)(intptr_t)(ws+1104);
	i8 v1100 = *(i8*)(intptr_t)v1099;
	i8 v1101 = v1100+(+24);
	i2 v1102 = *(i2*)(intptr_t)v1101;
	i8 v1103 = (i8)(intptr_t)(ws+1290);
	*(i2*)(intptr_t)v1103 = v1102;

	i8 v1104 = (i8)(intptr_t)(ws+576);
	*(i8*)(intptr_t)(ws+1328) = v1104;
	i8 v1105 = (i8)(intptr_t)(ws+1290);
	i2 v1106 = *(i2*)(intptr_t)v1105;
	i1 v1107 = v1106;
	*(i1*)(intptr_t)(ws+1336) = v1107;
	i8 v1108 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v1108)();

	i8 v1109 = (i8)(intptr_t)(ws+576);
	*(i8*)(intptr_t)(ws+1328) = v1109;
	i8 v1110 = (i8)(intptr_t)(ws+1290);
	i2 v1111 = *(i2*)(intptr_t)v1110;
	i1 v1112 = (i1)+8;
	i2 v1113 = ((i2)v1111)>>v1112;
	i1 v1114 = v1113;
	*(i1*)(intptr_t)(ws+1336) = v1114;
	i8 v1115 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v1115)();

	i8 v1116 = (i8)(intptr_t)(ws+1104);
	i8 v1117 = *(i8*)(intptr_t)v1116;
	i8 v1118 = v1117+(+8);
	i8 v1119 = *(i8*)(intptr_t)v1118;
	i8 v1120 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1120 = v1119;

c02_0106:;

	i8 v1121 = (i8)(intptr_t)(ws+1296);
	i8 v1122 = *(i8*)(intptr_t)v1121;
	i8 v1123 = (i8)+0;
	if (v1122==v1123) goto c02_010b; else goto c02_010a;

c02_010a:;

	i1 v1124 = (i1)+0;
	i8 v1125 = (i8)(intptr_t)(ws+1304);
	*(i1*)(intptr_t)v1125 = v1124;

c02_010c:;

	i8 v1126 = (i8)(intptr_t)(ws+1304);
	i1 v1127 = *(i1*)(intptr_t)v1126;
	i8 v1128 = (i8)(intptr_t)(ws+1296);
	i8 v1129 = *(i8*)(intptr_t)v1128;
	i8 v1130 = v1129+(+255);
	i1 v1131 = *(i1*)(intptr_t)v1130;
	if (v1127==v1131) goto c02_0111; else goto c02_0110;

c02_0110:;

	i8 v1132 = (i8)(intptr_t)(ws+576);
	*(i8*)(intptr_t)(ws+1328) = v1132;
	i8 v1133 = (i8)(intptr_t)(ws+1296);
	i8 v1134 = *(i8*)(intptr_t)v1133;
	i8 v1135 = (i8)(intptr_t)(ws+1304);
	i1 v1136 = *(i1*)(intptr_t)v1135;
	i8 v1137 = v1136;
	i8 v1138 = v1134+v1137;
	i1 v1139 = *(i1*)(intptr_t)v1138;
	*(i1*)(intptr_t)(ws+1336) = v1139;
	i8 v1140 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v1140)();

	i8 v1141 = (i8)(intptr_t)(ws+1304);
	i1 v1142 = *(i1*)(intptr_t)v1141;
	i1 v1143 = v1142+(+1);
	i8 v1144 = (i8)(intptr_t)(ws+1304);
	*(i1*)(intptr_t)v1144 = v1143;

	goto c02_010c;

c02_0111:;

	i8 v1145 = (i8)(intptr_t)(ws+1296);
	i8 v1146 = *(i8*)(intptr_t)v1145;
	i8 v1147 = v1146+(+256);
	i8 v1148 = *(i8*)(intptr_t)v1147;
	i8 v1149 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v1149 = v1148;

	i8 v1150 = (i8)(intptr_t)(ws+1296);
	i8 v1151 = *(i8*)(intptr_t)v1150;
	*(i8*)(intptr_t)(ws+1328) = v1151;
	i8 v1152 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v1152)();

	i8 v1153 = (i8)(intptr_t)(ws+1312);
	i8 v1154 = *(i8*)(intptr_t)v1153;
	i8 v1155 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1155 = v1154;

	goto c02_0106;

c02_010b:;

	i8 v1156 = (i8)(intptr_t)(ws+1104);
	i8 v1157 = *(i8*)(intptr_t)v1156;
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = (i8)(intptr_t)(ws+1320);
	*(i8*)(intptr_t)v1159 = v1158;

	i8 v1160 = (i8)(intptr_t)(ws+1104);
	i8 v1161 = *(i8*)(intptr_t)v1160;
	*(i8*)(intptr_t)(ws+1328) = v1161;
	i8 v1162 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v1162)();

	i8 v1163 = (i8)(intptr_t)(ws+1320);
	i8 v1164 = *(i8*)(intptr_t)v1163;
	i8 v1165 = (i8)(intptr_t)(ws+1104);
	*(i8*)(intptr_t)v1165 = v1164;

}
	void f54_FCBOpenOut(void);
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_FatalError(void);

// EmitterOpenfile workspace at ws+1192 length ws+9
void f68_EmitterOpenfile(void) {

	i8 v1166 = (i8)(intptr_t)(ws+576);
	*(i8*)(intptr_t)(ws+1208) = v1166;
	i8 v1167 = (i8)(intptr_t)(ws+1192);
	i8 v1168 = *(i8*)(intptr_t)v1167;
	*(i8*)(intptr_t)(ws+1216) = v1168;
	i8 v1169 = (i8)(intptr_t)(f54_FCBOpenOut);

	((void(*)(void))(intptr_t)v1169)();

	i1 v1170 = *(i1*)(intptr_t)(ws+1224);
	i8 v1171 = (i8)(intptr_t)(ws+1200);
	*(i1*)(intptr_t)v1171 = v1170;

	i8 v1172 = (i8)(intptr_t)(ws+1200);
	i1 v1173 = *(i1*)(intptr_t)v1172;
	i1 v1174 = (i1)+0;
	if (v1173==v1174) goto c02_0116; else goto c02_0115;

c02_0115:;

	i8 v1175 = (i8)(intptr_t)c02_s0005;
	*(i8*)(intptr_t)(ws+1304) = v1175;
	i8 v1176 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(void))(intptr_t)v1176)();

c02_0116:;

c02_0112:;

}
	void f47_FCBPutChar(void);
	void f47_FCBPutChar(void);
	void f47_FCBPutChar(void);
	void f55_FCBClose(void);
const i1 c02_s0006[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_FatalError(void);

// EmitterClosefile workspace at ws+1192 length ws+1
void f69_EmitterClosefile(void) {

	i8 v1177 = (i8)(intptr_t)(ws+576);
	*(i8*)(intptr_t)(ws+1328) = v1177;
	i1 v1178 = (i1)+69;
	*(i1*)(intptr_t)(ws+1336) = v1178;
	i8 v1179 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v1179)();

	i8 v1180 = (i8)(intptr_t)(ws+576);
	*(i8*)(intptr_t)(ws+1328) = v1180;
	i1 v1181 = (i1)+0;
	*(i1*)(intptr_t)(ws+1336) = v1181;
	i8 v1182 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v1182)();

	i8 v1183 = (i8)(intptr_t)(ws+576);
	*(i8*)(intptr_t)(ws+1328) = v1183;
	i1 v1184 = (i1)+0;
	*(i1*)(intptr_t)(ws+1336) = v1184;
	i8 v1185 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v1185)();

	i8 v1186 = (i8)(intptr_t)(ws+576);
	*(i8*)(intptr_t)(ws+1200) = v1186;
	i8 v1187 = (i8)(intptr_t)(f55_FCBClose);

	((void(*)(void))(intptr_t)v1187)();

	i1 v1188 = *(i1*)(intptr_t)(ws+1208);
	i8 v1189 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1189 = v1188;

	i8 v1190 = (i8)(intptr_t)(ws+1192);
	i1 v1191 = *(i1*)(intptr_t)v1190;
	i1 v1192 = (i1)+0;
	if (v1191==v1192) goto c02_011b; else goto c02_011a;

c02_011a:;

	i8 v1193 = (i8)(intptr_t)c02_s0006;
	*(i8*)(intptr_t)(ws+1304) = v1193;
	i8 v1194 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(void))(intptr_t)v1194)();

c02_011b:;

c02_0117:;

}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(void);
	void f63_E(void);
	void f67_EmitterPopChunk(void);

// EmitterDeclareSubroutine workspace at ws+1248 length ws+16
void f70_EmitterDeclareSubroutine(void) {

	i8 v1195 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1195)();

	i8 v1196 = (i8)(intptr_t)(ws+1248);
	i2 v1197 = *(i2*)(intptr_t)v1196;
	*(i2*)(intptr_t)(ws+1288) = v1197;
	i8 v1198 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1198)();

	i8 v1199 = (i8)(intptr_t)(ws+1256);
	i8 v1200 = *(i8*)(intptr_t)v1199;
	*(i8*)(intptr_t)(ws+1272) = v1200;
	i8 v1201 = (i8)(intptr_t)(f63_E);

	((void(*)(void))(intptr_t)v1201)();

	i1 v1202 = (i1)+78;
	*(i1*)(intptr_t)(ws+1288) = v1202;
	i8 v1203 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(void))(intptr_t)v1203)();

}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(void);
	void f63_E(void);
	void f67_EmitterPopChunk(void);

// EmitterDeclareExternal workspace at ws+1256 length ws+16
void f71_EmitterDeclareExternal(void) {

	i8 v1204 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1204)();

	i8 v1205 = (i8)(intptr_t)(ws+1256);
	i2 v1206 = *(i2*)(intptr_t)v1205;
	*(i2*)(intptr_t)(ws+1288) = v1206;
	i8 v1207 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1207)();

	i8 v1208 = (i8)(intptr_t)(ws+1264);
	i8 v1209 = *(i8*)(intptr_t)v1208;
	*(i8*)(intptr_t)(ws+1272) = v1209;
	i8 v1210 = (i8)(intptr_t)(f63_E);

	((void(*)(void))(intptr_t)v1210)();

	i1 v1211 = (i1)+88;
	*(i1*)(intptr_t)(ws+1288) = v1211;
	i8 v1212 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(void))(intptr_t)v1212)();

}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(void);
	void f64_E_b16(void);
	void f67_EmitterPopChunk(void);

// EmitterReferenceSubroutine workspace at ws+1280 length ws+4
void f72_EmitterReferenceSubroutine(void) {

	i8 v1213 = (i8)(intptr_t)(ws+1280);
	i2 v1214 = *(i2*)(intptr_t)v1213;
	i8 v1215 = (i8)(intptr_t)(ws+1282);
	i2 v1216 = *(i2*)(intptr_t)v1215;
	if (v1214==v1216) goto c02_0120; else goto c02_011f;

c02_011f:;

	i8 v1217 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1217)();

	i8 v1218 = (i8)(intptr_t)(ws+1280);
	i2 v1219 = *(i2*)(intptr_t)v1218;
	*(i2*)(intptr_t)(ws+1288) = v1219;
	i8 v1220 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1220)();

	i8 v1221 = (i8)(intptr_t)(ws+1282);
	i2 v1222 = *(i2*)(intptr_t)v1221;
	*(i2*)(intptr_t)(ws+1288) = v1222;
	i8 v1223 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1223)();

	i1 v1224 = (i1)+82;
	*(i1*)(intptr_t)(ws+1288) = v1224;
	i8 v1225 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(void))(intptr_t)v1225)();

c02_0120:;

c02_011c:;

}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(void);
	void f62_E_b8(void);
	void f64_E_b16(void);
	void f67_EmitterPopChunk(void);

// EmitterDeclareWorkspace workspace at ws+1264 length ws+6
void f73_EmitterDeclareWorkspace(void) {

	i8 v1226 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1226)();

	i8 v1227 = (i8)(intptr_t)(ws+1264);
	i2 v1228 = *(i2*)(intptr_t)v1227;
	*(i2*)(intptr_t)(ws+1288) = v1228;
	i8 v1229 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1229)();

	i8 v1230 = (i8)(intptr_t)(ws+1266);
	i1 v1231 = *(i1*)(intptr_t)v1230;
	*(i1*)(intptr_t)(ws+1296) = v1231;
	i8 v1232 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1232)();

	i8 v1233 = (i8)(intptr_t)(ws+1268);
	i2 v1234 = *(i2*)(intptr_t)v1233;
	*(i2*)(intptr_t)(ws+1288) = v1234;
	i8 v1235 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1235)();

	i1 v1236 = (i1)+87;
	*(i1*)(intptr_t)(ws+1288) = v1236;
	i8 v1237 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(void))(intptr_t)v1237)();

}
	void f26_StrCmp(void);
	void f33_Alloc(void);
	void f35_StrDup(void);

// GetSymbol workspace at ws+1280 length ws+40
void f74_GetSymbol(void) {

	i8 v1244 = (i8)(intptr_t)(ws+1136);
	i8 v1245 = *(i8*)(intptr_t)v1244;
	i8 v1246 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1246 = v1245;

c02_0121:;

	i8 v1247 = (i8)(intptr_t)(ws+1288);
	i8 v1248 = *(i8*)(intptr_t)v1247;
	i8 v1249 = (i8)+0;
	if (v1248==v1249) goto c02_0126; else goto c02_0125;

c02_0125:;

	i8 v1250 = (i8)(intptr_t)(ws+1280);
	i8 v1251 = *(i8*)(intptr_t)v1250;
	*(i8*)(intptr_t)(ws+1320) = v1251;
	i8 v1252 = (i8)(intptr_t)(ws+1288);
	i8 v1253 = *(i8*)(intptr_t)v1252;
	i8 v1254 = v1253+(+8);
	i8 v1255 = *(i8*)(intptr_t)v1254;
	*(i8*)(intptr_t)(ws+1328) = v1255;
	i8 v1256 = (i8)(intptr_t)(f26_StrCmp);

	((void(*)(void))(intptr_t)v1256)();

	i1 v1257 = *(i1*)(intptr_t)(ws+1336);
	i8 v1258 = (i8)(intptr_t)(ws+1296);
	*(i1*)(intptr_t)v1258 = v1257;

	i8 v1259 = (i8)(intptr_t)(ws+1296);
	i1 v1260 = *(i1*)(intptr_t)v1259;
	i1 v1261 = (i1)+0;
	if (v1260==v1261) goto c02_012a; else goto c02_012b;

c02_012a:;

	return;

c02_012b:;

c02_0127:;

	i8 v1262 = (i8)(intptr_t)(ws+1288);
	i8 v1263 = *(i8*)(intptr_t)v1262;
	i8 v1264 = *(i8*)(intptr_t)v1263;
	i8 v1265 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1265 = v1264;

	goto c02_0121;

c02_0126:;

	i8 v1266 = (i8)+19;
	*(i8*)(intptr_t)(ws+1320) = v1266;
	i8 v1267 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1267)();

	i8 v1268 = *(i8*)(intptr_t)(ws+1328);
	i8 v1269 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v1269 = v1268;

	i8 v1270 = (i8)(intptr_t)(ws+1304);
	i8 v1271 = *(i8*)(intptr_t)v1270;
	i8 v1272 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1272 = v1271;

	i8 v1273 = (i8)(intptr_t)(ws+1280);
	i8 v1274 = *(i8*)(intptr_t)v1273;
	*(i8*)(intptr_t)(ws+1320) = v1274;
	i8 v1275 = (i8)(intptr_t)(f35_StrDup);

	((void(*)(void))(intptr_t)v1275)();

	i8 v1276 = *(i8*)(intptr_t)(ws+1328);
	i8 v1277 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v1277 = v1276;

	i8 v1278 = (i8)(intptr_t)(ws+1312);
	i8 v1279 = *(i8*)(intptr_t)v1278;
	i8 v1280 = (i8)(intptr_t)(ws+1288);
	i8 v1281 = *(i8*)(intptr_t)v1280;
	i8 v1282 = v1281+(+8);
	*(i8*)(intptr_t)v1282 = v1279;

	i8 v1283 = (i8)(intptr_t)(ws+1144);
	i2 v1284 = *(i2*)(intptr_t)v1283;
	i8 v1285 = (i8)(intptr_t)(ws+1288);
	i8 v1286 = *(i8*)(intptr_t)v1285;
	i8 v1287 = v1286+(+16);
	*(i2*)(intptr_t)v1287 = v1284;

	i8 v1288 = (i8)(intptr_t)(ws+1144);
	i2 v1289 = *(i2*)(intptr_t)v1288;
	i2 v1290 = v1289+(+1);
	i8 v1291 = (i8)(intptr_t)(ws+1144);
	*(i2*)(intptr_t)v1291 = v1290;

	i8 v1292 = (i8)(intptr_t)(ws+1136);
	i8 v1293 = *(i8*)(intptr_t)v1292;
	i8 v1294 = (i8)(intptr_t)(ws+1288);
	i8 v1295 = *(i8*)(intptr_t)v1294;
	*(i8*)(intptr_t)v1295 = v1293;

	i8 v1296 = (i8)(intptr_t)(ws+1288);
	i8 v1297 = *(i8*)(intptr_t)v1296;
	i8 v1298 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1298 = v1297;

}
const i1 c02_s0007[] = { 0x40,0 };
	void f46_FCBGetChar(void);

// GetC workspace at ws+1304 length ws+1
void f76_GetC(void) {

	i8 v1305 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)(ws+1312) = v1305;
	i8 v1306 = (i8)(intptr_t)(f46_FCBGetChar);

	((void(*)(void))(intptr_t)v1306)();

	i1 v1307 = *(i1*)(intptr_t)(ws+1320);
	i8 v1308 = (i8)(intptr_t)(ws+1304);
	*(i1*)(intptr_t)v1308 = v1307;

	i8 v1309 = (i8)(intptr_t)(ws+1304);
	i1 v1310 = *(i1*)(intptr_t)v1309;
	i8 v1311 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1311 = v1310;

}
const i1 c02_s0008[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f61_FatalError(void);
	void f76_GetC(void);

// ExpectC workspace at ws+1280 length ws+1
void f77_ExpectC(void) {

	i8 v1312 = (i8)(intptr_t)(ws+1192);
	i1 v1313 = *(i1*)(intptr_t)v1312;
	i8 v1314 = (i8)(intptr_t)(ws+1280);
	i1 v1315 = *(i1*)(intptr_t)v1314;
	if (v1313==v1315) goto c02_0130; else goto c02_012f;

c02_012f:;

	i8 v1316 = (i8)(intptr_t)c02_s0008;
	*(i8*)(intptr_t)(ws+1304) = v1316;
	i8 v1317 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(void))(intptr_t)v1317)();

c02_0130:;

c02_012c:;

	i8 v1318 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1318)();

}
	void f76_GetC(void);

// SkipToEndOfLine workspace at ws+1232 length ws+0
void f78_SkipToEndOfLine(void) {

c02_0131:;

	i8 v1319 = (i8)(intptr_t)(ws+1192);
	i1 v1320 = *(i1*)(intptr_t)v1319;
	i1 v1321 = (i1)+0;
	if (v1320==v1321) goto c02_013a; else goto c02_013d;

c02_013d:;

	i8 v1322 = (i8)(intptr_t)(ws+1192);
	i1 v1323 = *(i1*)(intptr_t)v1322;
	i1 v1324 = (i1)+26;
	if (v1323==v1324) goto c02_013a; else goto c02_013c;

c02_013c:;

	i8 v1325 = (i8)(intptr_t)(ws+1192);
	i1 v1326 = *(i1*)(intptr_t)v1325;
	i1 v1327 = (i1)+10;
	if (v1326==v1327) goto c02_013a; else goto c02_013b;

c02_013a:;

	goto c02_0132;

c02_013b:;

c02_0133:;

	i8 v1328 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1328)();

	goto c02_0131;

c02_0132:;

}
	void f76_GetC(void);

// SkipWhitespace workspace at ws+1304 length ws+0
void f79_SkipWhitespace(void) {

c02_013e:;

	i8 v1329 = (i8)(intptr_t)(ws+1192);
	i1 v1330 = *(i1*)(intptr_t)v1329;
	i1 v1331 = (i1)+32;
	if (v1330==v1331) goto c02_0146; else goto c02_0147;

c02_0147:;

	i8 v1332 = (i8)(intptr_t)(ws+1192);
	i1 v1333 = *(i1*)(intptr_t)v1332;
	i1 v1334 = (i1)+9;
	if (v1333==v1334) goto c02_0146; else goto c02_0145;

c02_0145:;

	goto c02_013f;

c02_0146:;

c02_0140:;

	i8 v1335 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1335)();

	goto c02_013e;

c02_013f:;

}
	void f79_SkipWhitespace(void);
const i1 c02_s0009[] = { 0x77,0x6f,0x72,0x64,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f61_FatalError(void);
	void f76_GetC(void);

// ReadWord workspace at ws+1296 length ws+8
void f80_ReadWord(void) {

	i8 v1336 = (i8)(intptr_t)(f79_SkipWhitespace);

	((void(*)(void))(intptr_t)v1336)();

	i8 v1337 = (i8)(intptr_t)(ws+1196);
	i8 v1338 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1338 = v1337;

c02_0148:;

	i8 v1339 = (i8)(intptr_t)(ws+1192);
	i1 v1340 = *(i1*)(intptr_t)v1339;
	i1 v1341 = (i1)+48;
	if (v1340<v1341) goto c02_0160; else goto c02_0161;

c02_0161:;

	i1 v1342 = (i1)+57;
	i8 v1343 = (i8)(intptr_t)(ws+1192);
	i1 v1344 = *(i1*)(intptr_t)v1343;
	if (v1342<v1344) goto c02_0160; else goto c02_015c;

c02_0160:;

	i8 v1345 = (i8)(intptr_t)(ws+1192);
	i1 v1346 = *(i1*)(intptr_t)v1345;
	i1 v1347 = (i1)+97;
	if (v1346<v1347) goto c02_015f; else goto c02_0162;

c02_0162:;

	i1 v1348 = (i1)+122;
	i8 v1349 = (i8)(intptr_t)(ws+1192);
	i1 v1350 = *(i1*)(intptr_t)v1349;
	if (v1348<v1350) goto c02_015f; else goto c02_015c;

c02_015f:;

	i8 v1351 = (i8)(intptr_t)(ws+1192);
	i1 v1352 = *(i1*)(intptr_t)v1351;
	i1 v1353 = (i1)+65;
	if (v1352<v1353) goto c02_015e; else goto c02_0163;

c02_0163:;

	i1 v1354 = (i1)+90;
	i8 v1355 = (i8)(intptr_t)(ws+1192);
	i1 v1356 = *(i1*)(intptr_t)v1355;
	if (v1354<v1356) goto c02_015e; else goto c02_015c;

c02_015e:;

	i8 v1357 = (i8)(intptr_t)(ws+1192);
	i1 v1358 = *(i1*)(intptr_t)v1357;
	i1 v1359 = (i1)+95;
	if (v1358==v1359) goto c02_015c; else goto c02_015d;

c02_015d:;

	i8 v1360 = (i8)(intptr_t)(ws+1192);
	i1 v1361 = *(i1*)(intptr_t)v1360;
	i1 v1362 = (i1)+64;
	if (v1361==v1362) goto c02_015c; else goto c02_015b;

c02_015b:;

	goto c02_0149;

c02_015c:;

c02_014a:;

	i8 v1363 = (i8)(intptr_t)(ws+1192);
	i1 v1364 = *(i1*)(intptr_t)v1363;
	i8 v1365 = (i8)(intptr_t)(ws+1296);
	i8 v1366 = *(i8*)(intptr_t)v1365;
	*(i1*)(intptr_t)v1366 = v1364;

	i8 v1367 = (i8)(intptr_t)(ws+1296);
	i8 v1368 = *(i8*)(intptr_t)v1367;
	i8 v1369 = v1368+(+1);
	i8 v1370 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1370 = v1369;

	i8 v1371 = (i8)(intptr_t)(ws+1296);
	i8 v1372 = *(i8*)(intptr_t)v1371;
	i8 v1373 = (i8)(intptr_t)(ws+1228);
	if (v1372==v1373) goto c02_0167; else goto c02_0168;

c02_0167:;

	i8 v1374 = (i8)(intptr_t)c02_s0009;
	*(i8*)(intptr_t)(ws+1304) = v1374;
	i8 v1375 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(void))(intptr_t)v1375)();

c02_0168:;

c02_0164:;

	i8 v1376 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1376)();

	goto c02_0148;

c02_0149:;

	i1 v1377 = (i1)+0;
	i8 v1378 = (i8)(intptr_t)(ws+1296);
	i8 v1379 = *(i8*)(intptr_t)v1378;
	*(i1*)(intptr_t)v1379 = v1377;

}
	void f80_ReadWord(void);
	void f22_AToI(void);
const i1 c02_s000a[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f61_FatalError(void);

// ReadNumber workspace at ws+1280 length ws+16
void f81_ReadNumber(void) {

	i8 v1380 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1380)();

	i8 v1381 = (i8)(intptr_t)(ws+1196);
	*(i8*)(intptr_t)(ws+1296) = v1381;
	i8 v1382 = (i8)(intptr_t)(f22_AToI);

	((void(*)(void))(intptr_t)v1382)();

	i8 v1383 = *(i8*)(intptr_t)(ws+1312);
	i8 v1384 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1384 = v1383;

	i4 v1385 = *(i4*)(intptr_t)(ws+1304);
	i8 v1386 = (i8)(intptr_t)(ws+1280);
	*(i4*)(intptr_t)v1386 = v1385;

	i8 v1387 = (i8)(intptr_t)(ws+1288);
	i8 v1388 = *(i8*)(intptr_t)v1387;
	i8 v1389 = (i8)(intptr_t)(ws+1196);
	if (v1388==v1389) goto c02_016c; else goto c02_016d;

c02_016c:;

	i8 v1390 = (i8)(intptr_t)c02_s000a;
	*(i8*)(intptr_t)(ws+1304) = v1390;
	i8 v1391 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(void))(intptr_t)v1391)();

c02_016d:;

c02_0169:;

}
	void f71_EmitterDeclareExternal(void);

// MarkSubroutinePublic workspace at ws+1248 length ws+8
void f82_MarkSubroutinePublic(void) {

	i8 v1392 = (i8)(intptr_t)(ws+1248);
	i8 v1393 = *(i8*)(intptr_t)v1392;
	i8 v1394 = v1393+(+18);
	i1 v1395 = *(i1*)(intptr_t)v1394;
	i1 v1396 = v1395&(+2);
	i1 v1397 = (i1)+0;
	if (v1396==v1397) goto c02_0171; else goto c02_0172;

c02_0171:;

	i8 v1398 = (i8)(intptr_t)(ws+1248);
	i8 v1399 = *(i8*)(intptr_t)v1398;
	i8 v1400 = v1399+(+18);
	i1 v1401 = *(i1*)(intptr_t)v1400;
	i1 v1402 = v1401|(+2);
	i8 v1403 = (i8)(intptr_t)(ws+1248);
	i8 v1404 = *(i8*)(intptr_t)v1403;
	i8 v1405 = v1404+(+18);
	*(i1*)(intptr_t)v1405 = v1402;

	i8 v1406 = (i8)(intptr_t)(ws+1248);
	i8 v1407 = *(i8*)(intptr_t)v1406;
	i8 v1408 = v1407+(+16);
	i2 v1409 = *(i2*)(intptr_t)v1408;
	*(i2*)(intptr_t)(ws+1256) = v1409;
	i8 v1410 = (i8)(intptr_t)(ws+1248);
	i8 v1411 = *(i8*)(intptr_t)v1410;
	i8 v1412 = v1411+(+8);
	i8 v1413 = *(i8*)(intptr_t)v1412;
	*(i8*)(intptr_t)(ws+1264) = v1413;
	i8 v1414 = (i8)(intptr_t)(f71_EmitterDeclareExternal);

	((void(*)(void))(intptr_t)v1414)();

c02_0172:;

c02_016e:;

}
	void f67_EmitterPopChunk(void);

// CloseChunk workspace at ws+1248 length ws+0
void f84_CloseChunk(void) {

	i8 v1424 = (i8)(intptr_t)(ws+1152);
	i8 v1425 = *(i8*)(intptr_t)v1424;
	i8 v1426 = (i8)+0;
	if (v1425==v1426) goto c02_0177; else goto c02_0176;

c02_0176:;

	i1 v1427 = (i1)+70;
	*(i1*)(intptr_t)(ws+1288) = v1427;
	i8 v1428 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(void))(intptr_t)v1428)();

	i8 v1429 = (i8)+0;
	i8 v1430 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1430 = v1429;

c02_0177:;

c02_0173:;

}
	void f84_CloseChunk(void);
	void f76_GetC(void);
	void f80_ReadWord(void);
	void f74_GetSymbol(void);
	void f82_MarkSubroutinePublic(void);
	void f70_EmitterDeclareSubroutine(void);
	void f66_EmitterPushChunk(void);
	void f62_E_b8(void);
	void f64_E_b16(void);

// DeclareSubroutine workspace at ws+1232 length ws+16
void f85_DeclareSubroutine(void) {

	i8 v1431 = (i8)(intptr_t)(f84_CloseChunk);

	((void(*)(void))(intptr_t)v1431)();

	i8 v1432 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1432)();

	i8 v1433 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1433)();

	i8 v1434 = (i8)(intptr_t)(ws+1196);
	*(i8*)(intptr_t)(ws+1280) = v1434;
	i8 v1435 = (i8)(intptr_t)(f74_GetSymbol);

	((void(*)(void))(intptr_t)v1435)();

	i8 v1436 = *(i8*)(intptr_t)(ws+1288);
	i8 v1437 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1437 = v1436;

	i8 v1438 = (i8)(intptr_t)(ws+1240);
	i8 v1439 = *(i8*)(intptr_t)v1438;
	i8 v1440 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1440 = v1439;

	i8 v1441 = (i8)(intptr_t)(ws+1152);
	i8 v1442 = *(i8*)(intptr_t)v1441;
	i8 v1443 = v1442+(+18);
	i1 v1444 = *(i1*)(intptr_t)v1443;
	i1 v1445 = v1444|(+1);
	i8 v1446 = (i8)(intptr_t)(ws+1152);
	i8 v1447 = *(i8*)(intptr_t)v1446;
	i8 v1448 = v1447+(+18);
	*(i1*)(intptr_t)v1448 = v1445;

	i8 v1449 = (i8)(intptr_t)(ws+1232);
	i1 v1450 = *(i1*)(intptr_t)v1449;
	i1 v1451 = (i1)+0;
	if (v1450==v1451) goto c02_017c; else goto c02_017b;

c02_017b:;

	i8 v1452 = (i8)(intptr_t)(ws+1152);
	i8 v1453 = *(i8*)(intptr_t)v1452;
	*(i8*)(intptr_t)(ws+1248) = v1453;
	i8 v1454 = (i8)(intptr_t)(f82_MarkSubroutinePublic);

	((void(*)(void))(intptr_t)v1454)();

c02_017c:;

c02_0178:;

	i8 v1455 = (i8)(intptr_t)(ws+1152);
	i8 v1456 = *(i8*)(intptr_t)v1455;
	i8 v1457 = v1456+(+18);
	i1 v1458 = *(i1*)(intptr_t)v1457;
	i1 v1459 = v1458&(+4);
	i1 v1460 = (i1)+0;
	if (v1459==v1460) goto c02_0180; else goto c02_0181;

c02_0180:;

	i8 v1461 = (i8)(intptr_t)(ws+1152);
	i8 v1462 = *(i8*)(intptr_t)v1461;
	i8 v1463 = v1462+(+16);
	i2 v1464 = *(i2*)(intptr_t)v1463;
	*(i2*)(intptr_t)(ws+1248) = v1464;
	i8 v1465 = (i8)(intptr_t)(ws+1152);
	i8 v1466 = *(i8*)(intptr_t)v1465;
	i8 v1467 = v1466+(+8);
	i8 v1468 = *(i8*)(intptr_t)v1467;
	*(i8*)(intptr_t)(ws+1256) = v1468;
	i8 v1469 = (i8)(intptr_t)(f70_EmitterDeclareSubroutine);

	((void(*)(void))(intptr_t)v1469)();

	i8 v1470 = (i8)(intptr_t)(ws+1152);
	i8 v1471 = *(i8*)(intptr_t)v1470;
	i8 v1472 = v1471+(+18);
	i1 v1473 = *(i1*)(intptr_t)v1472;
	i1 v1474 = v1473|(+4);
	i8 v1475 = (i8)(intptr_t)(ws+1152);
	i8 v1476 = *(i8*)(intptr_t)v1475;
	i8 v1477 = v1476+(+18);
	*(i1*)(intptr_t)v1477 = v1474;

c02_0181:;

c02_017d:;

	i8 v1478 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1478)();

	i1 v1479 = (i1)+128;
	*(i1*)(intptr_t)(ws+1296) = v1479;
	i8 v1480 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1480)();

	i8 v1481 = (i8)(intptr_t)(ws+1152);
	i8 v1482 = *(i8*)(intptr_t)v1481;
	i8 v1483 = v1482+(+16);
	i2 v1484 = *(i2*)(intptr_t)v1483;
	*(i2*)(intptr_t)(ws+1288) = v1484;
	i8 v1485 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1485)();

}
	void f76_GetC(void);
	void f80_ReadWord(void);
	void f74_GetSymbol(void);
	void f79_SkipWhitespace(void);
	void f81_ReadNumber(void);
	void f79_SkipWhitespace(void);
	void f81_ReadNumber(void);
	void f73_EmitterDeclareWorkspace(void);

// SetSubroutineWorkspace workspace at ws+1232 length ws+30
void f86_SetSubroutineWorkspace(void) {

	i8 v1486 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1486)();

	i8 v1487 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1487)();

	i8 v1488 = (i8)(intptr_t)(ws+1196);
	*(i8*)(intptr_t)(ws+1280) = v1488;
	i8 v1489 = (i8)(intptr_t)(f74_GetSymbol);

	((void(*)(void))(intptr_t)v1489)();

	i8 v1490 = *(i8*)(intptr_t)(ws+1288);
	i8 v1491 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1491 = v1490;

	i8 v1492 = (i8)(intptr_t)(ws+1232);
	i8 v1493 = *(i8*)(intptr_t)v1492;
	i8 v1494 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1494 = v1493;

	i8 v1495 = (i8)(intptr_t)(f79_SkipWhitespace);

	((void(*)(void))(intptr_t)v1495)();

	i8 v1496 = (i8)(intptr_t)(f81_ReadNumber);

	((void(*)(void))(intptr_t)v1496)();

	i4 v1497 = *(i4*)(intptr_t)(ws+1280);
	i8 v1498 = (i8)(intptr_t)(ws+1248);
	*(i4*)(intptr_t)v1498 = v1497;

	i8 v1499 = (i8)(intptr_t)(ws+1248);
	i4 v1500 = *(i4*)(intptr_t)v1499;
	i1 v1501 = (s1)(s4)v1500;
	i8 v1502 = (i8)(intptr_t)(ws+1252);
	*(i1*)(intptr_t)v1502 = v1501;

	i8 v1503 = (i8)(intptr_t)(f79_SkipWhitespace);

	((void(*)(void))(intptr_t)v1503)();

	i8 v1504 = (i8)(intptr_t)(f81_ReadNumber);

	((void(*)(void))(intptr_t)v1504)();

	i4 v1505 = *(i4*)(intptr_t)(ws+1280);
	i8 v1506 = (i8)(intptr_t)(ws+1256);
	*(i4*)(intptr_t)v1506 = v1505;

	i8 v1507 = (i8)(intptr_t)(ws+1256);
	i4 v1508 = *(i4*)(intptr_t)v1507;
	i2 v1509 = (s2)(s4)v1508;
	i8 v1510 = (i8)(intptr_t)(ws+1260);
	*(i2*)(intptr_t)v1510 = v1509;

	i8 v1511 = (i8)(intptr_t)(ws+1240);
	i8 v1512 = *(i8*)(intptr_t)v1511;
	i8 v1513 = v1512+(+16);
	i2 v1514 = *(i2*)(intptr_t)v1513;
	*(i2*)(intptr_t)(ws+1264) = v1514;
	i8 v1515 = (i8)(intptr_t)(ws+1252);
	i1 v1516 = *(i1*)(intptr_t)v1515;
	*(i1*)(intptr_t)(ws+1266) = v1516;
	i8 v1517 = (i8)(intptr_t)(ws+1260);
	i2 v1518 = *(i2*)(intptr_t)v1517;
	*(i2*)(intptr_t)(ws+1268) = v1518;
	i8 v1519 = (i8)(intptr_t)(f73_EmitterDeclareWorkspace);

	((void(*)(void))(intptr_t)v1519)();

}
	void f76_GetC(void);
	void f80_ReadWord(void);
	void f74_GetSymbol(void);
	void f72_EmitterReferenceSubroutine(void);
	void f77_ExpectC(void);
	void f81_ReadNumber(void);
	void f77_ExpectC(void);
	void f81_ReadNumber(void);
	void f62_E_b8(void);
	void f64_E_b16(void);
	void f62_E_b8(void);
	void f64_E_b16(void);

// EmitWorkspaceRef workspace at ws+1248 length ws+30
void f87_EmitWorkspaceRef(void) {

	i8 v1520 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1520)();

	i8 v1521 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1521)();

	i8 v1522 = (i8)(intptr_t)(ws+1152);
	i8 v1523 = *(i8*)(intptr_t)v1522;
	i8 v1524 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1524 = v1523;

	i8 v1525 = (i8)(intptr_t)(ws+1196);
	i1 v1526 = *(i1*)(intptr_t)v1525;
	i1 v1527 = (i1)+0;
	if (v1526==v1527) goto c02_0186; else goto c02_0185;

c02_0185:;

	i8 v1528 = (i8)(intptr_t)(ws+1196);
	*(i8*)(intptr_t)(ws+1280) = v1528;
	i8 v1529 = (i8)(intptr_t)(f74_GetSymbol);

	((void(*)(void))(intptr_t)v1529)();

	i8 v1530 = *(i8*)(intptr_t)(ws+1288);
	i8 v1531 = (i8)(intptr_t)(ws+1256);
	*(i8*)(intptr_t)v1531 = v1530;

	i8 v1532 = (i8)(intptr_t)(ws+1256);
	i8 v1533 = *(i8*)(intptr_t)v1532;
	i8 v1534 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1534 = v1533;

	i8 v1535 = (i8)(intptr_t)(ws+1152);
	i8 v1536 = *(i8*)(intptr_t)v1535;
	i8 v1537 = v1536+(+16);
	i2 v1538 = *(i2*)(intptr_t)v1537;
	*(i2*)(intptr_t)(ws+1280) = v1538;
	i8 v1539 = (i8)(intptr_t)(ws+1248);
	i8 v1540 = *(i8*)(intptr_t)v1539;
	i8 v1541 = v1540+(+16);
	i2 v1542 = *(i2*)(intptr_t)v1541;
	*(i2*)(intptr_t)(ws+1282) = v1542;
	i8 v1543 = (i8)(intptr_t)(f72_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v1543)();

c02_0186:;

c02_0182:;

	i1 v1544 = (i1)+46;
	*(i1*)(intptr_t)(ws+1280) = v1544;
	i8 v1545 = (i8)(intptr_t)(f77_ExpectC);

	((void(*)(void))(intptr_t)v1545)();

	i8 v1546 = (i8)(intptr_t)(f81_ReadNumber);

	((void(*)(void))(intptr_t)v1546)();

	i4 v1547 = *(i4*)(intptr_t)(ws+1280);
	i8 v1548 = (i8)(intptr_t)(ws+1264);
	*(i4*)(intptr_t)v1548 = v1547;

	i8 v1549 = (i8)(intptr_t)(ws+1264);
	i4 v1550 = *(i4*)(intptr_t)v1549;
	i1 v1551 = (s1)(s4)v1550;
	i8 v1552 = (i8)(intptr_t)(ws+1268);
	*(i1*)(intptr_t)v1552 = v1551;

	i1 v1553 = (i1)+46;
	*(i1*)(intptr_t)(ws+1280) = v1553;
	i8 v1554 = (i8)(intptr_t)(f77_ExpectC);

	((void(*)(void))(intptr_t)v1554)();

	i8 v1555 = (i8)(intptr_t)(f81_ReadNumber);

	((void(*)(void))(intptr_t)v1555)();

	i4 v1556 = *(i4*)(intptr_t)(ws+1280);
	i8 v1557 = (i8)(intptr_t)(ws+1272);
	*(i4*)(intptr_t)v1557 = v1556;

	i8 v1558 = (i8)(intptr_t)(ws+1272);
	i4 v1559 = *(i4*)(intptr_t)v1558;
	i2 v1560 = (s2)(s4)v1559;
	i8 v1561 = (i8)(intptr_t)(ws+1276);
	*(i2*)(intptr_t)v1561 = v1560;

	i1 v1562 = (i1)+2;
	*(i1*)(intptr_t)(ws+1296) = v1562;
	i8 v1563 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1563)();

	i8 v1564 = (i8)(intptr_t)(ws+1248);
	i8 v1565 = *(i8*)(intptr_t)v1564;
	i8 v1566 = v1565+(+16);
	i2 v1567 = *(i2*)(intptr_t)v1566;
	*(i2*)(intptr_t)(ws+1288) = v1567;
	i8 v1568 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1568)();

	i8 v1569 = (i8)(intptr_t)(ws+1268);
	i1 v1570 = *(i1*)(intptr_t)v1569;
	*(i1*)(intptr_t)(ws+1296) = v1570;
	i8 v1571 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1571)();

	i8 v1572 = (i8)(intptr_t)(ws+1276);
	i2 v1573 = *(i2*)(intptr_t)v1572;
	*(i2*)(intptr_t)(ws+1288) = v1573;
	i8 v1574 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1574)();

}
const i1 c02_s000b[] = { 0x73,0x6f,0x75,0x72,0x63,0x65,0x20,0x74,0x65,0x78,0x74,0x20,0x77,0x69,0x74,0x68,0x20,0x6e,0x6f,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f61_FatalError(void);
	void f76_GetC(void);
	void f62_E_b8(void);
	void f76_GetC(void);
	void f62_E_b8(void);
	void f76_GetC(void);
	void f87_EmitWorkspaceRef(void);
	void f80_ReadWord(void);
	void f74_GetSymbol(void);
	void f62_E_b8(void);
	void f64_E_b16(void);
	void f72_EmitterReferenceSubroutine(void);
	void f62_E_b8(void);
	void f76_GetC(void);
	void f62_E_b8(void);

// SourceLine workspace at ws+1232 length ws+16
void f88_SourceLine(void) {

	i8 v1575 = (i8)(intptr_t)(ws+1152);
	i8 v1576 = *(i8*)(intptr_t)v1575;
	i8 v1577 = (i8)+0;
	if (v1576==v1577) goto c02_018a; else goto c02_018b;

c02_018a:;

	i8 v1578 = (i8)(intptr_t)c02_s000b;
	*(i8*)(intptr_t)(ws+1304) = v1578;
	i8 v1579 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(void))(intptr_t)v1579)();

c02_018b:;

c02_0187:;

c02_018c:;

	i8 v1580 = (i8)(intptr_t)(ws+1192);
	i1 v1581 = *(i1*)(intptr_t)v1580;
	i1 v1582 = (i1)+0;
	if (v1581==v1582) goto c02_0195; else goto c02_0198;

c02_0198:;

	i8 v1583 = (i8)(intptr_t)(ws+1192);
	i1 v1584 = *(i1*)(intptr_t)v1583;
	i1 v1585 = (i1)+10;
	if (v1584==v1585) goto c02_0195; else goto c02_0197;

c02_0197:;

	i8 v1586 = (i8)(intptr_t)(ws+1192);
	i1 v1587 = *(i1*)(intptr_t)v1586;
	i1 v1588 = (i1)+26;
	if (v1587==v1588) goto c02_0195; else goto c02_0196;

c02_0195:;

	goto c02_018d;

c02_0196:;

c02_018e:;

	i8 v1589 = (i8)(intptr_t)(ws+1192);
	i1 v1590 = *(i1*)(intptr_t)v1589;
	i1 v1591 = (i1)+13;
	if (v1590==v1591) goto c02_019d; else goto c02_019c;

c02_019c:;

	i8 v1592 = (i8)(intptr_t)(ws+1192);
	i1 v1593 = *(i1*)(intptr_t)v1592;
	i1 v1594 = (i1)+96;
	if (v1593==v1594) goto c02_01a1; else goto c02_01a2;

c02_01a1:;

	i8 v1595 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1595)();

	i8 v1596 = (i8)(intptr_t)(ws+1192);
	i1 v1597 = *(i1*)(intptr_t)v1596;

	if (v1597 != +96) goto c02_01a4;

	i1 v1598 = (i1)+4;
	*(i1*)(intptr_t)(ws+1296) = v1598;
	i8 v1599 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1599)();

	i8 v1600 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1600)();

	goto c02_01a3;

c02_01a4:;

	if (v1597 != +94) goto c02_01a5;

	i1 v1601 = (i1)+3;
	*(i1*)(intptr_t)(ws+1296) = v1601;
	i8 v1602 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1602)();

	i8 v1603 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1603)();

	goto c02_01a3;

c02_01a5:;

	if (v1597 != +36) goto c02_01a6;

	i8 v1604 = (i8)(intptr_t)(f87_EmitWorkspaceRef);

	((void(*)(void))(intptr_t)v1604)();

	goto c02_01a3;

c02_01a6:;

	i8 v1605 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1605)();

	i8 v1606 = (i8)(intptr_t)(ws+1196);
	*(i8*)(intptr_t)(ws+1280) = v1606;
	i8 v1607 = (i8)(intptr_t)(f74_GetSymbol);

	((void(*)(void))(intptr_t)v1607)();

	i8 v1608 = *(i8*)(intptr_t)(ws+1288);
	i8 v1609 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1609 = v1608;

	i8 v1610 = (i8)(intptr_t)(ws+1232);
	i8 v1611 = *(i8*)(intptr_t)v1610;
	i8 v1612 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1612 = v1611;

	i1 v1613 = (i1)+1;
	*(i1*)(intptr_t)(ws+1296) = v1613;
	i8 v1614 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1614)();

	i8 v1615 = (i8)(intptr_t)(ws+1240);
	i8 v1616 = *(i8*)(intptr_t)v1615;
	i8 v1617 = v1616+(+16);
	i2 v1618 = *(i2*)(intptr_t)v1617;
	*(i2*)(intptr_t)(ws+1288) = v1618;
	i8 v1619 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(void))(intptr_t)v1619)();

	i8 v1620 = (i8)(intptr_t)(ws+1152);
	i8 v1621 = *(i8*)(intptr_t)v1620;
	i8 v1622 = v1621+(+16);
	i2 v1623 = *(i2*)(intptr_t)v1622;
	*(i2*)(intptr_t)(ws+1280) = v1623;
	i8 v1624 = (i8)(intptr_t)(ws+1240);
	i8 v1625 = *(i8*)(intptr_t)v1624;
	i8 v1626 = v1625+(+16);
	i2 v1627 = *(i2*)(intptr_t)v1626;
	*(i2*)(intptr_t)(ws+1282) = v1627;
	i8 v1628 = (i8)(intptr_t)(f72_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v1628)();

c02_01a3:;


	goto c02_019e;

c02_01a2:;

	i8 v1629 = (i8)(intptr_t)(ws+1192);
	i1 v1630 = *(i1*)(intptr_t)v1629;
	*(i1*)(intptr_t)(ws+1296) = v1630;
	i8 v1631 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1631)();

	i8 v1632 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1632)();

c02_019e:;

c02_019d:;

c02_0199:;

	goto c02_018c;

c02_018d:;

	i1 v1633 = (i1)+10;
	*(i1*)(intptr_t)(ws+1296) = v1633;
	i8 v1634 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(void))(intptr_t)v1634)();

}
	void f76_GetC(void);
	void f76_GetC(void);
	void f85_DeclareSubroutine(void);
	void f85_DeclareSubroutine(void);
	void f86_SetSubroutineWorkspace(void);
const i1 c02_s000c[] = { 0x62,0x61,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x63,0x6f,0x6d,0x6d,0x61,0x6e,0x64,0 };
	void f61_FatalError(void);
	void f78_SkipToEndOfLine(void);
	void f78_SkipToEndOfLine(void);
	void f88_SourceLine(void);
	void f76_GetC(void);
	void f84_CloseChunk(void);

// ProcessFile workspace at ws+1192 length ws+36
void f75_ProcessFile(void) {

	i8 v1299 = (i8)(intptr_t)c02_s0007;
	i8 v1300 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1300 = v1299;

	i1 v1301 = (i1)+5;
	i8 v1302 = (i8)(intptr_t)(ws+1130);
	*(i1*)(intptr_t)v1302 = v1301;

	i2 v1303 = (i2)+0;
	i8 v1304 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v1304 = v1303;














	i8 v1635 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1635)();

c02_01a7:;

	i8 v1636 = (i8)(intptr_t)(ws+1192);
	i1 v1637 = *(i1*)(intptr_t)v1636;
	i1 v1638 = (i1)+0;
	if (v1637==v1638) goto c02_01ae; else goto c02_01b0;

c02_01b0:;

	i8 v1639 = (i8)(intptr_t)(ws+1192);
	i1 v1640 = *(i1*)(intptr_t)v1639;
	i1 v1641 = (i1)+26;
	if (v1640==v1641) goto c02_01ae; else goto c02_01af;

c02_01ae:;

	goto c02_01a8;

c02_01af:;

c02_01a9:;

	i8 v1642 = (i8)(intptr_t)(ws+1192);
	i1 v1643 = *(i1*)(intptr_t)v1642;

	if (v1643 != +38) goto c02_01b2;

	i8 v1644 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1644)();

	i8 v1645 = (i8)(intptr_t)(ws+1192);
	i1 v1646 = *(i1*)(intptr_t)v1645;

	if (v1646 != +88) goto c02_01b4;

	i1 v1647 = (i1)+1;
	*(i1*)(intptr_t)(ws+1232) = v1647;
	i8 v1648 = (i8)(intptr_t)(f85_DeclareSubroutine);

	((void(*)(void))(intptr_t)v1648)();

	goto c02_01b3;

c02_01b4:;

	if (v1646 != +83) goto c02_01b5;

	i1 v1649 = (i1)+0;
	*(i1*)(intptr_t)(ws+1232) = v1649;
	i8 v1650 = (i8)(intptr_t)(f85_DeclareSubroutine);

	((void(*)(void))(intptr_t)v1650)();

	goto c02_01b3;

c02_01b5:;

	if (v1646 != +87) goto c02_01b6;

	i8 v1651 = (i8)(intptr_t)(f86_SetSubroutineWorkspace);

	((void(*)(void))(intptr_t)v1651)();

	goto c02_01b3;

c02_01b6:;

	i8 v1652 = (i8)(intptr_t)c02_s000c;
	*(i8*)(intptr_t)(ws+1304) = v1652;
	i8 v1653 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(void))(intptr_t)v1653)();

c02_01b3:;


	i8 v1654 = (i8)(intptr_t)(f78_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1654)();

	goto c02_01b1;

c02_01b2:;

	if (v1643 != +35) goto c02_01b7;

	i8 v1655 = (i8)(intptr_t)(f78_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1655)();

	goto c02_01b1;

c02_01b7:;

	i8 v1656 = (i8)(intptr_t)(f88_SourceLine);

	((void(*)(void))(intptr_t)v1656)();

c02_01b1:;


	i8 v1657 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1657)();

	goto c02_01a7;

c02_01a8:;

	i8 v1658 = (i8)(intptr_t)(f84_CloseChunk);

	((void(*)(void))(intptr_t)v1658)();

}
const i1 c02_s000d[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x63,0x6c,0x61,0x72,0x65,0x64,0x20,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s000e[] = { 0x27,0x0a,0 };
	void f12_print(void);
const i1 c02_s000f[] = { 0x66,0x61,0x69,0x6c,0x65,0x64,0 };
	void f61_FatalError(void);

// CheckSymbols workspace at ws+1192 length ws+16
void f89_CheckSymbols(void) {

	i1 v1659 = (i1)+1;
	i8 v1660 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1660 = v1659;

	i8 v1661 = (i8)(intptr_t)(ws+1136);
	i8 v1662 = *(i8*)(intptr_t)v1661;
	i8 v1663 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v1663 = v1662;

c02_01b8:;

	i8 v1664 = (i8)(intptr_t)(ws+1200);
	i8 v1665 = *(i8*)(intptr_t)v1664;
	i8 v1666 = (i8)+0;
	if (v1665==v1666) goto c02_01bd; else goto c02_01bc;

c02_01bc:;

	i8 v1667 = (i8)(intptr_t)(ws+1200);
	i8 v1668 = *(i8*)(intptr_t)v1667;
	i8 v1669 = v1668+(+18);
	i1 v1670 = *(i1*)(intptr_t)v1669;
	i1 v1671 = (i1)+0;
	if (v1670==v1671) goto c02_01c1; else goto c02_01c2;

c02_01c1:;

	i8 v1672 = (i8)(intptr_t)c02_s000d;
	*(i8*)(intptr_t)(ws+1344) = v1672;
	i8 v1673 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1673)();

	i8 v1674 = (i8)(intptr_t)(ws+1200);
	i8 v1675 = *(i8*)(intptr_t)v1674;
	i8 v1676 = v1675+(+8);
	i8 v1677 = *(i8*)(intptr_t)v1676;
	*(i8*)(intptr_t)(ws+1344) = v1677;
	i8 v1678 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1678)();

	i8 v1679 = (i8)(intptr_t)c02_s000e;
	*(i8*)(intptr_t)(ws+1344) = v1679;
	i8 v1680 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1680)();

	i1 v1681 = (i1)+0;
	i8 v1682 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1682 = v1681;

c02_01c2:;

c02_01be:;

	i8 v1683 = (i8)(intptr_t)(ws+1200);
	i8 v1684 = *(i8*)(intptr_t)v1683;
	i8 v1685 = *(i8*)(intptr_t)v1684;
	i8 v1686 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v1686 = v1685;

	goto c02_01b8;

c02_01bd:;

	i8 v1687 = (i8)(intptr_t)(ws+1192);
	i1 v1688 = *(i1*)(intptr_t)v1687;
	i1 v1689 = (i1)+0;
	if (v1688==v1689) goto c02_01c6; else goto c02_01c7;

c02_01c6:;

	i8 v1690 = (i8)(intptr_t)c02_s000f;
	*(i8*)(intptr_t)(ws+1304) = v1690;
	i8 v1691 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(void))(intptr_t)v1691)();

c02_01c7:;

c02_01c3:;

}
	void f24_ArgvInit(void);
	void f25_ArgvNext(void);
	void f25_ArgvNext(void);
	void f25_ArgvNext(void);
	void f60_SyntaxError(void);
	void f52_FCBOpenIn(void);
const i1 c02_s0010[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_FatalError(void);
	void f68_EmitterOpenfile(void);
	void f75_ProcessFile(void);
	void f89_CheckSymbols(void);
	void f69_EmitterClosefile(void);

// __main workspace at ws+0 length ws+1185
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 



























































	i8 v946 = (i8)+0;
	i8 v947 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v947 = v946;

	i8 v948 = (i8)+0;
	i8 v949 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v949 = v948;

	i8 v950 = (i8)(intptr_t)c02_s0001;
	*(i8*)(intptr_t)(ws+1344) = v950;
	i8 v951 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v951)();

	i8 v952 = (i8)(intptr_t)(f38_GetFreeMemory);

	((void(*)(void))(intptr_t)v952)();

	i8 v953 = *(i8*)(intptr_t)(ws+1192);
	i8 v954 = (i8)(intptr_t)(ws+568);
	*(i8*)(intptr_t)v954 = v953;

	i8 v955 = (i8)(intptr_t)(ws+568);
	i8 v956 = *(i8*)(intptr_t)v955;
	i1 v957 = (i1)+10;
	i8 v958 = ((i8)v956)>>v957;
	i2 v959 = v958;
	*(i2*)(intptr_t)(ws+1192) = v959;
	i8 v960 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(void))(intptr_t)v960)();

	i8 v961 = (i8)(intptr_t)c02_s0002;
	*(i8*)(intptr_t)(ws+1344) = v961;
	i8 v962 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v962)();















	i8 v1238 = (i8)(intptr_t)(ws+1112);
	i8 v1239 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1239 = v1238;

	i2 v1240 = (i2)+1;
	i8 v1241 = (i8)(intptr_t)(ws+1144);
	*(i2*)(intptr_t)v1241 = v1240;

	i8 v1242 = (i8)+0;
	i8 v1243 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1243 = v1242;




	i8 v1692 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v1692)();

	i8 v1693 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v1693)();

	i8 v1694 = *(i8*)(intptr_t)(ws+1192);
	i8 v1695 = (i8)(intptr_t)(ws+1160);
	*(i8*)(intptr_t)v1695 = v1694;

	i8 v1696 = (i8)(intptr_t)(ws+1160);
	i8 v1697 = *(i8*)(intptr_t)v1696;
	i8 v1698 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1698 = v1697;

	i8 v1699 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v1699)();

	i8 v1700 = *(i8*)(intptr_t)(ws+1192);
	i8 v1701 = (i8)(intptr_t)(ws+1168);
	*(i8*)(intptr_t)v1701 = v1700;

	i8 v1702 = (i8)(intptr_t)(ws+1168);
	i8 v1703 = *(i8*)(intptr_t)v1702;
	i8 v1704 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1704 = v1703;

	i8 v1705 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v1705)();

	i8 v1706 = *(i8*)(intptr_t)(ws+1192);
	i8 v1707 = (i8)(intptr_t)(ws+1176);
	*(i8*)(intptr_t)v1707 = v1706;

	i8 v1708 = (i8)(intptr_t)(ws+24);
	i8 v1709 = *(i8*)(intptr_t)v1708;
	i8 v1710 = (i8)+0;
	if (v1709==v1710) goto c02_01cf; else goto c02_01d2;

c02_01d2:;

	i8 v1711 = (i8)(intptr_t)(ws+32);
	i8 v1712 = *(i8*)(intptr_t)v1711;
	i8 v1713 = (i8)+0;
	if (v1712==v1713) goto c02_01cf; else goto c02_01d1;

c02_01d1:;

	i8 v1714 = (i8)(intptr_t)(ws+1176);
	i8 v1715 = *(i8*)(intptr_t)v1714;
	i8 v1716 = (i8)+0;
	if (v1715==v1716) goto c02_01d0; else goto c02_01cf;

c02_01cf:;

	i8 v1717 = (i8)(intptr_t)(f60_SyntaxError);

	((void(*)(void))(intptr_t)v1717)();

c02_01d0:;

c02_01c8:;

	i8 v1718 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)(ws+1192) = v1718;
	i8 v1719 = (i8)(intptr_t)(ws+24);
	i8 v1720 = *(i8*)(intptr_t)v1719;
	*(i8*)(intptr_t)(ws+1200) = v1720;
	i8 v1721 = (i8)(intptr_t)(f52_FCBOpenIn);

	((void(*)(void))(intptr_t)v1721)();

	i1 v1722 = *(i1*)(intptr_t)(ws+1208);
	i8 v1723 = (i8)(intptr_t)(ws+1184);
	*(i1*)(intptr_t)v1723 = v1722;

	i8 v1724 = (i8)(intptr_t)(ws+1184);
	i1 v1725 = *(i1*)(intptr_t)v1724;
	i1 v1726 = (i1)+0;
	if (v1725==v1726) goto c02_01d7; else goto c02_01d6;

c02_01d6:;

	i8 v1727 = (i8)(intptr_t)c02_s0010;
	*(i8*)(intptr_t)(ws+1304) = v1727;
	i8 v1728 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(void))(intptr_t)v1728)();

c02_01d7:;

c02_01d3:;

	i8 v1729 = (i8)(intptr_t)(ws+32);
	i8 v1730 = *(i8*)(intptr_t)v1729;
	*(i8*)(intptr_t)(ws+1192) = v1730;
	i8 v1731 = (i8)(intptr_t)(f68_EmitterOpenfile);

	((void(*)(void))(intptr_t)v1731)();

	i8 v1732 = (i8)(intptr_t)(f75_ProcessFile);

	((void(*)(void))(intptr_t)v1732)();

	i8 v1733 = (i8)(intptr_t)(f89_CheckSymbols);

	((void(*)(void))(intptr_t)v1733)();

	i8 v1734 = (i8)(intptr_t)(f69_EmitterClosefile);

	((void(*)(void))(intptr_t)v1734)();

}
void cmain(void) {
	f3___main();
}
