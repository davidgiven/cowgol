#include "cowgol.h"
static i8 workspace[0x01d5];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+3672 length ws+0
void f5_ExitWithError(void) {


	
exit(1); 



}

// MemSet workspace at ws+3640 length ws+24
void f6_MemSet(void) {


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3640) 
,  
*(i1*)(intptr_t)(ws+3648) 
,  
*(i8*)(intptr_t)(ws+3656) 
); 



}

// print_char workspace at ws+3712 length ws+1
void f8_print_char(void) {


	
putchar( 
*(i1*)(intptr_t)(ws+3712) 
); 



}
	void f8_print_char(void);

// print workspace at ws+3696 length ws+9
void f11_print(void) {

c01_0001:;

	i8 v6 = (i8)(intptr_t)(ws+3696);
	i8 v7 = *(i8*)(intptr_t)v6;
	i1 v8 = *(i1*)(intptr_t)v7;
	i8 v9 = (i8)(intptr_t)(ws+3704);
	*(i1*)(intptr_t)v9 = v8;

	i8 v10 = (i8)(intptr_t)(ws+3704);
	i1 v11 = *(i1*)(intptr_t)v10;
	i1 v12 = (i1)+0;
	if (v11==v12) goto c01_0006; else goto c01_0007;

c01_0006:;

	return;

c01_0007:;

c01_0003:;

	i8 v13 = (i8)(intptr_t)(ws+3704);
	i1 v14 = *(i1*)(intptr_t)v13;
	*(i1*)(intptr_t)(ws+3712) = v14;
	i8 v15 = (i8)(intptr_t)(f8_print_char);

	((void(*)(void))(intptr_t)v15)();

	i8 v16 = (i8)(intptr_t)(ws+3696);
	i8 v17 = *(i8*)(intptr_t)v16;
	i8 v18 = v17+(+1);
	i8 v19 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v19 = v18;

	goto c01_0001;

c01_0002:;

}
	void f8_print_char(void);

// print_nl workspace at ws+3656 length ws+0
void f12_print_nl(void) {

	i1 v20 = (i1)+10;
	*(i1*)(intptr_t)(ws+3712) = v20;
	i8 v21 = (i8)(intptr_t)(f8_print_char);

	((void(*)(void))(intptr_t)v21)();

}

// UIToA workspace at ws+3696 length ws+49
void f13_UIToA(void) {

	i8 v22 = (i8)(intptr_t)(ws+3704);
	i8 v23 = *(i8*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+3712);
	*(i8*)(intptr_t)v24 = v23;

c01_0008:;

	i8 v25 = (i8)(intptr_t)(ws+3696);
	i4 v26 = *(i4*)(intptr_t)v25;
	i8 v27 = (i8)(intptr_t)(ws+3700);
	i1 v28 = *(i1*)(intptr_t)v27;
	i4 v29 = v28;
	i4 v30 = v26%v29;
	i8 v31 = (i8)(intptr_t)(ws+3720);
	*(i4*)(intptr_t)v31 = v30;

	i8 v32 = (i8)(intptr_t)(ws+3696);
	i4 v33 = *(i4*)(intptr_t)v32;
	i8 v34 = (i8)(intptr_t)(ws+3700);
	i1 v35 = *(i1*)(intptr_t)v34;
	i4 v36 = v35;
	i4 v37 = v33/v36;
	i8 v38 = (i8)(intptr_t)(ws+3696);
	*(i4*)(intptr_t)v38 = v37;

	i8 v39 = (i8)(intptr_t)(ws+3720);
	i4 v40 = *(i4*)(intptr_t)v39;
	i4 v41 = (i4)+10;
	if (v40<v41) goto c01_000d; else goto c01_000e;

c01_000d:;

	i8 v42 = (i8)(intptr_t)(ws+3720);
	i4 v43 = *(i4*)(intptr_t)v42;
	i4 v44 = v43+(+48);
	i8 v45 = (i8)(intptr_t)(ws+3720);
	*(i4*)(intptr_t)v45 = v44;

	goto c01_000a;

c01_000e:;

	i8 v46 = (i8)(intptr_t)(ws+3720);
	i4 v47 = *(i4*)(intptr_t)v46;
	i4 v48 = v47+(+87);
	i8 v49 = (i8)(intptr_t)(ws+3720);
	*(i4*)(intptr_t)v49 = v48;

c01_000a:;

	i8 v50 = (i8)(intptr_t)(ws+3720);
	i4 v51 = *(i4*)(intptr_t)v50;
	i1 v52 = v51;
	i8 v53 = (i8)(intptr_t)(ws+3712);
	i8 v54 = *(i8*)(intptr_t)v53;
	*(i1*)(intptr_t)v54 = v52;

	i8 v55 = (i8)(intptr_t)(ws+3712);
	i8 v56 = *(i8*)(intptr_t)v55;
	i8 v57 = v56+(+1);
	i8 v58 = (i8)(intptr_t)(ws+3712);
	*(i8*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+3696);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+0;
	if (v60==v61) goto c01_0012; else goto c01_0013;

c01_0012:;

	goto c01_0009;

c01_0013:;

c01_000f:;

	goto c01_0008;

c01_0009:;

	i8 v62 = (i8)(intptr_t)(ws+3704);
	i8 v63 = *(i8*)(intptr_t)v62;
	i8 v64 = (i8)(intptr_t)(ws+3728);
	*(i8*)(intptr_t)v64 = v63;

	i8 v65 = (i8)(intptr_t)(ws+3712);
	i8 v66 = *(i8*)(intptr_t)v65;
	i8 v67 = v66+(-1);
	i8 v68 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v68 = v67;

c01_0014:;

	i8 v69 = (i8)(intptr_t)(ws+3728);
	i8 v70 = *(i8*)(intptr_t)v69;
	i8 v71 = (i8)(intptr_t)(ws+3736);
	i8 v72 = *(i8*)(intptr_t)v71;
	if (v70<v72) goto c01_0018; else goto c01_0019;

c01_0018:;

	i8 v73 = (i8)(intptr_t)(ws+3728);
	i8 v74 = *(i8*)(intptr_t)v73;
	i1 v75 = *(i1*)(intptr_t)v74;
	i8 v76 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v76 = v75;

	i8 v77 = (i8)(intptr_t)(ws+3736);
	i8 v78 = *(i8*)(intptr_t)v77;
	i1 v79 = *(i1*)(intptr_t)v78;
	i8 v80 = (i8)(intptr_t)(ws+3728);
	i8 v81 = *(i8*)(intptr_t)v80;
	*(i1*)(intptr_t)v81 = v79;

	i8 v82 = (i8)(intptr_t)(ws+3744);
	i1 v83 = *(i1*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+3736);
	i8 v85 = *(i8*)(intptr_t)v84;
	*(i1*)(intptr_t)v85 = v83;

	i8 v86 = (i8)(intptr_t)(ws+3728);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = v87+(+1);
	i8 v89 = (i8)(intptr_t)(ws+3728);
	*(i8*)(intptr_t)v89 = v88;

	i8 v90 = (i8)(intptr_t)(ws+3736);
	i8 v91 = *(i8*)(intptr_t)v90;
	i8 v92 = v91+(-1);
	i8 v93 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v93 = v92;

	goto c01_0014;

c01_0019:;

	i1 v94 = (i1)+0;
	i8 v95 = (i8)(intptr_t)(ws+3712);
	i8 v96 = *(i8*)(intptr_t)v95;
	*(i1*)(intptr_t)v96 = v94;

}
	void f13_UIToA(void);
	void f11_print(void);

// print_i32 workspace at ws+3664 length ws+32
void f15_print_i32(void) {

	i8 v123 = (i8)(intptr_t)(ws+3664);
	i4 v124 = *(i4*)(intptr_t)v123;
	*(i4*)(intptr_t)(ws+3696) = v124;
	i1 v125 = (i1)+10;
	*(i1*)(intptr_t)(ws+3700) = v125;
	i8 v126 = (i8)(intptr_t)(ws+3668);
	*(i8*)(intptr_t)(ws+3704) = v126;
	i8 v127 = (i8)(intptr_t)(f13_UIToA);

	((void(*)(void))(intptr_t)v127)();

	i8 v128 = *(i8*)(intptr_t)(ws+3712);
	i8 v129 = (i8)(intptr_t)(ws+3680);
	*(i8*)(intptr_t)v129 = v128;

	i8 v130 = (i8)(intptr_t)(ws+3680);
	i8 v131 = *(i8*)(intptr_t)v130;
	i8 v132 = (i8)(intptr_t)(ws+3688);
	*(i8*)(intptr_t)v132 = v131;

	i8 v133 = (i8)(intptr_t)(ws+3668);
	*(i8*)(intptr_t)(ws+3696) = v133;
	i8 v134 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v134)();

}
	void f15_print_i32(void);

// print_i16 workspace at ws+3656 length ws+2
void f16_print_i16(void) {

	i8 v135 = (i8)(intptr_t)(ws+3656);
	i2 v136 = *(i2*)(intptr_t)v135;
	i4 v137 = v136;
	*(i4*)(intptr_t)(ws+3664) = v137;
	i8 v138 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(void))(intptr_t)v138)();

}
	void f15_print_i32(void);

// print_i8 workspace at ws+3496 length ws+1
void f17_print_i8(void) {

	i8 v139 = (i8)(intptr_t)(ws+3496);
	i1 v140 = *(i1*)(intptr_t)v139;
	i4 v141 = v140;
	*(i4*)(intptr_t)(ws+3664) = v141;
	i8 v142 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(void))(intptr_t)v142)();

}
	void f8_print_char(void);

// print_hex_i8 workspace at ws+3288 length ws+3
void f18_print_hex_i8(void) {

	i1 v143 = (i1)+2;
	i8 v144 = (i8)(intptr_t)(ws+3289);
	*(i1*)(intptr_t)v144 = v143;

c01_001f:;

	i8 v145 = (i8)(intptr_t)(ws+3288);
	i1 v146 = *(i1*)(intptr_t)v145;
	i1 v147 = (i1)+4;
	i1 v148 = ((i1)v146)>>v147;
	i8 v149 = (i8)(intptr_t)(ws+3290);
	*(i1*)(intptr_t)v149 = v148;

	i8 v150 = (i8)(intptr_t)(ws+3290);
	i1 v151 = *(i1*)(intptr_t)v150;
	i1 v152 = (i1)+10;
	if (v151<v152) goto c01_0024; else goto c01_0025;

c01_0024:;

	i8 v153 = (i8)(intptr_t)(ws+3290);
	i1 v154 = *(i1*)(intptr_t)v153;
	i1 v155 = v154+(+48);
	i8 v156 = (i8)(intptr_t)(ws+3290);
	*(i1*)(intptr_t)v156 = v155;

	goto c01_0021;

c01_0025:;

	i8 v157 = (i8)(intptr_t)(ws+3290);
	i1 v158 = *(i1*)(intptr_t)v157;
	i1 v159 = v158+(+87);
	i8 v160 = (i8)(intptr_t)(ws+3290);
	*(i1*)(intptr_t)v160 = v159;

c01_0021:;

	i8 v161 = (i8)(intptr_t)(ws+3290);
	i1 v162 = *(i1*)(intptr_t)v161;
	*(i1*)(intptr_t)(ws+3712) = v162;
	i8 v163 = (i8)(intptr_t)(f8_print_char);

	((void(*)(void))(intptr_t)v163)();

	i8 v164 = (i8)(intptr_t)(ws+3288);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+4;
	i1 v167 = ((i1)v165)<<v166;
	i8 v168 = (i8)(intptr_t)(ws+3288);
	*(i1*)(intptr_t)v168 = v167;

	i8 v169 = (i8)(intptr_t)(ws+3289);
	i1 v170 = *(i1*)(intptr_t)v169;
	i1 v171 = v170+(-1);
	i8 v172 = (i8)(intptr_t)(ws+3289);
	*(i1*)(intptr_t)v172 = v171;

	i8 v173 = (i8)(intptr_t)(ws+3289);
	i1 v174 = *(i1*)(intptr_t)v173;
	i1 v175 = (i1)+0;
	if (v174==v175) goto c01_0029; else goto c01_002a;

c01_0029:;

	goto c01_0020;

c01_002a:;

c01_0026:;

	goto c01_001f;

c01_0020:;

}

// ArgvInit workspace at ws+3280 length ws+0
void f23_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v315 = (i8)(intptr_t)(ws+16);
	i8 v316 = *(i8*)(intptr_t)v315;
	i8 v317 = v316+(+8);
	i8 v318 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v318 = v317;

}

// ArgvNext workspace at ws+3280 length ws+8
void f24_ArgvNext(void) {

	i8 v319 = (i8)(intptr_t)(ws+16);
	i8 v320 = *(i8*)(intptr_t)v319;
	i8 v321 = (i8)+0;
	if (v320==v321) goto c01_0052; else goto c01_0053;

c01_0052:;

	i8 v322 = (i8)+0;
	i8 v323 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v323 = v322;

	return;

c01_0053:;

c01_004f:;

	i8 v324 = (i8)(intptr_t)(ws+16);
	i8 v325 = *(i8*)(intptr_t)v324;
	i8 v326 = *(i8*)(intptr_t)v325;
	i8 v327 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v327 = v326;

	i8 v328 = (i8)(intptr_t)(ws+3280);
	i8 v329 = *(i8*)(intptr_t)v328;
	i8 v330 = (i8)+0;
	if (v329==v330) goto c01_0057; else goto c01_0058;

c01_0057:;

	i8 v331 = (i8)+0;
	i8 v332 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v332 = v331;

	goto c01_0054;

c01_0058:;

	i8 v333 = (i8)(intptr_t)(ws+16);
	i8 v334 = *(i8*)(intptr_t)v333;
	i8 v335 = v334+(+8);
	i8 v336 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v336 = v335;

c01_0054:;

}

// StrCmp workspace at ws+3560 length ws+17
void f25_StrCmp(void) {

c01_0059:;

	i8 v337 = (i8)(intptr_t)(ws+3560);
	i8 v338 = *(i8*)(intptr_t)v337;
	i1 v339 = *(i1*)(intptr_t)v338;
	i8 v340 = (i8)(intptr_t)(ws+3568);
	i8 v341 = *(i8*)(intptr_t)v340;
	i1 v342 = *(i1*)(intptr_t)v341;
	i1 v343 = v339-v342;
	i8 v344 = (i8)(intptr_t)(ws+3576);
	*(i1*)(intptr_t)v344 = v343;

	i8 v345 = (i8)(intptr_t)(ws+3576);
	i1 v346 = *(i1*)(intptr_t)v345;
	i1 v347 = (i1)+0;
	if (v346==v347) goto c01_0062; else goto c01_0060;

c01_0062:;

	i8 v348 = (i8)(intptr_t)(ws+3560);
	i8 v349 = *(i8*)(intptr_t)v348;
	i1 v350 = *(i1*)(intptr_t)v349;
	i1 v351 = (i1)+0;
	if (v350==v351) goto c01_0060; else goto c01_0061;

c01_0060:;

	goto c01_005a;

c01_0061:;

c01_005b:;

	i8 v352 = (i8)(intptr_t)(ws+3560);
	i8 v353 = *(i8*)(intptr_t)v352;
	i8 v354 = v353+(+1);
	i8 v355 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v355 = v354;

	i8 v356 = (i8)(intptr_t)(ws+3568);
	i8 v357 = *(i8*)(intptr_t)v356;
	i8 v358 = v357+(+1);
	i8 v359 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v359 = v358;

	goto c01_0059;

c01_005a:;

}

// ToLower workspace at ws+3312 length ws+2
void f26_ToLower(void) {

	i8 v360 = (i8)(intptr_t)(ws+3312);
	i1 v361 = *(i1*)(intptr_t)v360;
	i1 v362 = (i1)+65;
	if (v361<v362) goto c01_0069; else goto c01_006a;

c01_006a:;

	i1 v363 = (i1)+90;
	i8 v364 = (i8)(intptr_t)(ws+3312);
	i1 v365 = *(i1*)(intptr_t)v364;
	if (v363<v365) goto c01_0069; else goto c01_0068;

c01_0068:;

	i8 v366 = (i8)(intptr_t)(ws+3312);
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = v367|(+32);
	i8 v369 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v369 = v368;

	goto c01_0063;

c01_0069:;

	i8 v370 = (i8)(intptr_t)(ws+3312);
	i1 v371 = *(i1*)(intptr_t)v370;
	i8 v372 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v372 = v371;

c01_0063:;

}

// StrLen workspace at ws+3584 length ws+25
void f28_StrLen(void) {

	i8 v406 = (i8)(intptr_t)(ws+3584);
	i8 v407 = *(i8*)(intptr_t)v406;
	i8 v408 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v408 = v407;

c01_0075:;

	i8 v409 = (i8)(intptr_t)(ws+3600);
	i8 v410 = *(i8*)(intptr_t)v409;
	i1 v411 = *(i1*)(intptr_t)v410;
	i8 v412 = (i8)(intptr_t)(ws+3608);
	*(i1*)(intptr_t)v412 = v411;

	i8 v413 = (i8)(intptr_t)(ws+3608);
	i1 v414 = *(i1*)(intptr_t)v413;
	i1 v415 = (i1)+0;
	if (v414==v415) goto c01_007a; else goto c01_007b;

c01_007a:;

	goto c01_0076;

c01_007b:;

c01_0077:;

	i8 v416 = (i8)(intptr_t)(ws+3600);
	i8 v417 = *(i8*)(intptr_t)v416;
	i8 v418 = v417+(+1);
	i8 v419 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v419 = v418;

	goto c01_0075;

c01_0076:;

	i8 v420 = (i8)(intptr_t)(ws+3600);
	i8 v421 = *(i8*)(intptr_t)v420;
	i8 v422 = (i8)(intptr_t)(ws+3584);
	i8 v423 = *(i8*)(intptr_t)v422;
	i8 v424 = v421-v423;
	i8 v425 = (i8)(intptr_t)(ws+3592);
	*(i8*)(intptr_t)v425 = v424;

}

// MemCopy workspace at ws+3576 length ws+24
void f30_MemCopy(void) {

c01_0083:;

	i8 v445 = (i8)(intptr_t)(ws+3584);
	i8 v446 = *(i8*)(intptr_t)v445;
	i8 v447 = (i8)+0;
	if (v446==v447) goto c01_0088; else goto c01_0087;

c01_0087:;

	i8 v448 = (i8)(intptr_t)(ws+3576);
	i8 v449 = *(i8*)(intptr_t)v448;
	i1 v450 = *(i1*)(intptr_t)v449;
	i8 v451 = (i8)(intptr_t)(ws+3592);
	i8 v452 = *(i8*)(intptr_t)v451;
	*(i1*)(intptr_t)v452 = v450;

	i8 v453 = (i8)(intptr_t)(ws+3592);
	i8 v454 = *(i8*)(intptr_t)v453;
	i8 v455 = v454+(+1);
	i8 v456 = (i8)(intptr_t)(ws+3592);
	*(i8*)(intptr_t)v456 = v455;

	i8 v457 = (i8)(intptr_t)(ws+3576);
	i8 v458 = *(i8*)(intptr_t)v457;
	i8 v459 = v458+(+1);
	i8 v460 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v460 = v459;

	i8 v461 = (i8)(intptr_t)(ws+3584);
	i8 v462 = *(i8*)(intptr_t)v461;
	i8 v463 = v462+(-1);
	i8 v464 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v464 = v463;

	goto c01_0083;

c01_0088:;

}

// RawAlloc workspace at ws+3672 length ws+16
void f31_RawAlloc(void) {


	
*(i8*)(intptr_t)(ws+3680) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3672) 
); 



}

// Free workspace at ws+3680 length ws+8
void f33_Free(void) {


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3680) 
); 



}

// GetFreeMemory workspace at ws+3272 length ws+8
void f37_GetFreeMemory(void) {

	i8 v479 = (i8)+0;
	i8 v480 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v480 = v479;

}

// _fcb_init workspace at ws+3440 length ws+8
void f40__fcb_init(void) {

	i4 v481 = (i4)+0;
	i8 v482 = (i8)(intptr_t)(ws+3440);
	i8 v483 = *(i8*)(intptr_t)v482;
	i8 v484 = v483+(+4);
	*(i4*)(intptr_t)v484 = v481;

	i2 v485 = (i2)+0;
	i8 v486 = (i8)(intptr_t)(ws+3440);
	i8 v487 = *(i8*)(intptr_t)v486;
	i8 v488 = v487+(+8);
	*(i2*)(intptr_t)v488 = v485;

	i2 v489 = (i2)+0;
	i8 v490 = (i8)(intptr_t)(ws+3440);
	i8 v491 = *(i8*)(intptr_t)v490;
	i8 v492 = v491+(+10);
	*(i2*)(intptr_t)v492 = v489;

	i1 v493 = (i1)+0;
	i8 v494 = (i8)(intptr_t)(ws+3440);
	i8 v495 = *(i8*)(intptr_t)v494;
	i8 v496 = v495+(+524);
	*(i1*)(intptr_t)v496 = v493;

}

// _fcb_advance workspace at ws+3640 length ws+8
void f41__fcb_advance(void) {

	i8 v497 = (i8)(intptr_t)(ws+3640);
	i8 v498 = *(i8*)(intptr_t)v497;
	i8 v499 = v498+(+10);
	i2 v500 = *(i2*)(intptr_t)v499;
	i2 v501 = v500+(+1);
	i8 v502 = (i8)(intptr_t)(ws+3640);
	i8 v503 = *(i8*)(intptr_t)v502;
	i8 v504 = v503+(+10);
	*(i2*)(intptr_t)v504 = v501;

}
	void f38_FCBRawRead(void);
	void f41__fcb_advance(void);

// _fcb_fillbuffer workspace at ws+3352 length ws+18
void f42__fcb_fillbuffer(void) {

	i8 v505 = (i8)(intptr_t)(ws+3352);
	i8 v506 = *(i8*)(intptr_t)v505;
	i8 v507 = v506+(+4);
	i4 v508 = *(i4*)(intptr_t)v507;
	i8 v509 = (i8)(intptr_t)(ws+3352);
	i8 v510 = *(i8*)(intptr_t)v509;
	i8 v511 = v510+(+10);
	i2 v512 = *(i2*)(intptr_t)v511;
	i4 v513 = v512;
	i4 v514 = v508+v513;
	i8 v515 = (i8)(intptr_t)(ws+3364);
	*(i4*)(intptr_t)v515 = v514;

	i8 v516 = (i8)(intptr_t)(ws+3352);
	i8 v517 = *(i8*)(intptr_t)v516;
	*(i8*)(intptr_t)(ws+3376) = v517;
	i8 v518 = (i8)(intptr_t)(ws+3364);
	i4 v519 = *(i4*)(intptr_t)v518;
	*(i4*)(intptr_t)(ws+3384) = v519;
	i2 v520 = (i2)+512;
	*(i2*)(intptr_t)(ws+3388) = v520;
	i8 v521 = (i8)(intptr_t)(f38_FCBRawRead);

	((void(*)(void))(intptr_t)v521)();

	i2 v522 = *(i2*)(intptr_t)(ws+3390);
	i8 v523 = (i8)(intptr_t)(ws+3368);
	*(i2*)(intptr_t)v523 = v522;

	i8 v524 = (i8)(intptr_t)(ws+3368);
	i2 v525 = *(i2*)(intptr_t)v524;
	i8 v526 = (i8)(intptr_t)(ws+3352);
	i8 v527 = *(i8*)(intptr_t)v526;
	i8 v528 = v527+(+8);
	*(i2*)(intptr_t)v528 = v525;

	i1 v529 = (i1)+0;
	i8 v530 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v530 = v529;

	i8 v531 = (i8)(intptr_t)(ws+3352);
	i8 v532 = *(i8*)(intptr_t)v531;
	i8 v533 = v532+(+524);
	i1 v534 = *(i1*)(intptr_t)v533;
	i1 v535 = v534&(+1);
	i1 v536 = (i1)+0;
	if (v535==v536) goto c01_0092; else goto c01_0091;

c01_0091:;

	return;

c01_0092:;

c01_008e:;

	i1 v537 = (i1)+2;
	i8 v538 = (i8)(intptr_t)(ws+3352);
	i8 v539 = *(i8*)(intptr_t)v538;
	i8 v540 = v539+(+524);
	*(i1*)(intptr_t)v540 = v537;

	i8 v541 = (i8)(intptr_t)(ws+3364);
	i4 v542 = *(i4*)(intptr_t)v541;
	i8 v543 = (i8)(intptr_t)(ws+3352);
	i8 v544 = *(i8*)(intptr_t)v543;
	i8 v545 = v544+(+4);
	*(i4*)(intptr_t)v545 = v542;

	i2 v546 = (i2)+0;
	i8 v547 = (i8)(intptr_t)(ws+3352);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+10);
	*(i2*)(intptr_t)v549 = v546;

	i8 v550 = (i8)(intptr_t)(ws+3352);
	i8 v551 = *(i8*)(intptr_t)v550;
	i8 v552 = v551+(+8);
	i2 v553 = *(i2*)(intptr_t)v552;
	i2 v554 = (i2)+0;
	if (v553==v554) goto c01_0097; else goto c01_0096;

c01_0096:;

	i8 v555 = (i8)(intptr_t)(ws+3352);
	i8 v556 = *(i8*)(intptr_t)v555;
	i8 v557 = v556+(+12);
	i1 v558 = *(i1*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+3352);
	i8 v561 = *(i8*)(intptr_t)v560;
	*(i8*)(intptr_t)(ws+3640) = v561;
	i8 v562 = (i8)(intptr_t)(f41__fcb_advance);

	((void(*)(void))(intptr_t)v562)();

c01_0097:;

c01_0093:;

}
	void f39_FCBRawWrite(void);

// FCBFlush workspace at ws+3640 length ws+12
void f43_FCBFlush(void) {

	i8 v563 = (i8)(intptr_t)(ws+3640);
	i8 v564 = *(i8*)(intptr_t)v563;
	i8 v565 = v564+(+4);
	i4 v566 = *(i4*)(intptr_t)v565;
	i8 v567 = (i8)(intptr_t)(ws+3648);
	*(i4*)(intptr_t)v567 = v566;

	i8 v568 = (i8)(intptr_t)(ws+3640);
	i8 v569 = *(i8*)(intptr_t)v568;
	i8 v570 = v569+(+524);
	i1 v571 = *(i1*)(intptr_t)v570;
	i1 v572 = v571&(+4);
	i1 v573 = (i1)+0;
	if (v572==v573) goto c01_009c; else goto c01_009b;

c01_009b:;

	i8 v574 = (i8)(intptr_t)(ws+3640);
	i8 v575 = *(i8*)(intptr_t)v574;
	*(i8*)(intptr_t)(ws+3656) = v575;
	i8 v576 = (i8)(intptr_t)(ws+3648);
	i4 v577 = *(i4*)(intptr_t)v576;
	*(i4*)(intptr_t)(ws+3664) = v577;
	i8 v578 = (i8)(intptr_t)(ws+3640);
	i8 v579 = *(i8*)(intptr_t)v578;
	i8 v580 = v579+(+10);
	i2 v581 = *(i2*)(intptr_t)v580;
	*(i2*)(intptr_t)(ws+3668) = v581;
	i8 v582 = (i8)(intptr_t)(f39_FCBRawWrite);

	((void(*)(void))(intptr_t)v582)();

	i8 v583 = (i8)(intptr_t)(ws+3640);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = v584+(+524);
	i1 v586 = *(i1*)(intptr_t)v585;
	i1 v587 = v586&(+1);
	i1 v588 = (i1)+0;
	if (v587==v588) goto c01_00a1; else goto c01_00a0;

c01_00a0:;

	return;

c01_00a1:;

c01_009d:;

c01_009c:;

c01_0098:;

	i8 v589 = (i8)(intptr_t)(ws+3648);
	i4 v590 = *(i4*)(intptr_t)v589;
	i8 v591 = (i8)(intptr_t)(ws+3640);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = v592+(+10);
	i2 v594 = *(i2*)(intptr_t)v593;
	i4 v595 = v594;
	i4 v596 = v590+v595;
	i8 v597 = (i8)(intptr_t)(ws+3640);
	i8 v598 = *(i8*)(intptr_t)v597;
	i8 v599 = v598+(+4);
	*(i4*)(intptr_t)v599 = v596;

	i1 v600 = (i1)+0;
	i8 v601 = (i8)(intptr_t)(ws+3640);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = v602+(+524);
	*(i1*)(intptr_t)v603 = v600;

	i2 v604 = (i2)+0;
	i8 v605 = (i8)(intptr_t)(ws+3640);
	i8 v606 = *(i8*)(intptr_t)v605;
	i8 v607 = v606+(+10);
	*(i2*)(intptr_t)v607 = v604;

	i2 v608 = (i2)+0;
	i8 v609 = (i8)(intptr_t)(ws+3640);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = v610+(+8);
	*(i2*)(intptr_t)v611 = v608;

}
	void f43_FCBFlush(void);
	void f41__fcb_advance(void);

// _fcb_flushbuffer workspace at ws+3624 length ws+9
void f44__fcb_flushbuffer(void) {

	i8 v612 = (i8)(intptr_t)(ws+3624);
	i8 v613 = *(i8*)(intptr_t)v612;
	*(i8*)(intptr_t)(ws+3640) = v613;
	i8 v614 = (i8)(intptr_t)(f43_FCBFlush);

	((void(*)(void))(intptr_t)v614)();

	i8 v615 = (i8)(intptr_t)(ws+3624);
	i8 v616 = *(i8*)(intptr_t)v615;
	i8 v617 = v616+(+524);
	i1 v618 = *(i1*)(intptr_t)v617;
	i1 v619 = v618&(+1);
	i1 v620 = (i1)+0;
	if (v619==v620) goto c01_00a6; else goto c01_00a5;

c01_00a5:;

	return;

c01_00a6:;

c01_00a2:;

	i1 v621 = (i1)+4;
	i8 v622 = (i8)(intptr_t)(ws+3624);
	i8 v623 = *(i8*)(intptr_t)v622;
	i8 v624 = v623+(+524);
	*(i1*)(intptr_t)v624 = v621;

	i8 v625 = (i8)(intptr_t)(ws+3632);
	i1 v626 = *(i1*)(intptr_t)v625;
	i8 v627 = (i8)(intptr_t)(ws+3624);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v628+(+12);
	*(i1*)(intptr_t)v629 = v626;

	i8 v630 = (i8)(intptr_t)(ws+3624);
	i8 v631 = *(i8*)(intptr_t)v630;
	*(i8*)(intptr_t)(ws+3640) = v631;
	i8 v632 = (i8)(intptr_t)(f41__fcb_advance);

	((void(*)(void))(intptr_t)v632)();

}
	void f43_FCBFlush(void);
	void f42__fcb_fillbuffer(void);
	void f41__fcb_advance(void);

// FCBGetChar workspace at ws+3336 length ws+13
void f45_FCBGetChar(void) {

	i8 v633 = (i8)(intptr_t)(ws+3336);
	i8 v634 = *(i8*)(intptr_t)v633;
	i8 v635 = v634+(+524);
	i1 v636 = *(i1*)(intptr_t)v635;
	i1 v637 = v636&(+4);
	i1 v638 = (i1)+0;
	if (v637==v638) goto c01_00ab; else goto c01_00aa;

c01_00aa:;

	i8 v639 = (i8)(intptr_t)(ws+3336);
	i8 v640 = *(i8*)(intptr_t)v639;
	*(i8*)(intptr_t)(ws+3640) = v640;
	i8 v641 = (i8)(intptr_t)(f43_FCBFlush);

	((void(*)(void))(intptr_t)v641)();

c01_00ab:;

c01_00a7:;

	i8 v642 = (i8)(intptr_t)(ws+3336);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = v643+(+10);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(ws+3346);
	*(i2*)(intptr_t)v646 = v645;

	i8 v647 = (i8)(intptr_t)(ws+3346);
	i2 v648 = *(i2*)(intptr_t)v647;
	i8 v649 = (i8)(intptr_t)(ws+3336);
	i8 v650 = *(i8*)(intptr_t)v649;
	i8 v651 = v650+(+8);
	i2 v652 = *(i2*)(intptr_t)v651;
	if (v648==v652) goto c01_00af; else goto c01_00b0;

c01_00af:;

	i8 v653 = (i8)(intptr_t)(ws+3336);
	i8 v654 = *(i8*)(intptr_t)v653;
	*(i8*)(intptr_t)(ws+3352) = v654;
	i8 v655 = (i8)(intptr_t)(f42__fcb_fillbuffer);

	((void(*)(void))(intptr_t)v655)();

	i1 v656 = *(i1*)(intptr_t)(ws+3360);
	i8 v657 = (i8)(intptr_t)(ws+3348);
	*(i1*)(intptr_t)v657 = v656;

	i8 v658 = (i8)(intptr_t)(ws+3348);
	i1 v659 = *(i1*)(intptr_t)v658;
	i8 v660 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v660 = v659;

	goto c01_00ac;

c01_00b0:;

	i8 v661 = (i8)(intptr_t)(ws+3336);
	i8 v662 = *(i8*)(intptr_t)v661;
	i8 v663 = v662+(+12);
	i8 v664 = (i8)(intptr_t)(ws+3346);
	i2 v665 = *(i2*)(intptr_t)v664;
	i8 v666 = v665;
	i8 v667 = v663+v666;
	i1 v668 = *(i1*)(intptr_t)v667;
	i8 v669 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v669 = v668;

	i8 v670 = (i8)(intptr_t)(ws+3336);
	i8 v671 = *(i8*)(intptr_t)v670;
	*(i8*)(intptr_t)(ws+3640) = v671;
	i8 v672 = (i8)(intptr_t)(f41__fcb_advance);

	((void(*)(void))(intptr_t)v672)();

c01_00ac:;

}
	void f43_FCBFlush(void);
	void f44__fcb_flushbuffer(void);
	void f41__fcb_advance(void);

// FCBPutChar workspace at ws+3608 length ws+12
void f46_FCBPutChar(void) {

	i8 v673 = (i8)(intptr_t)(ws+3608);
	i8 v674 = *(i8*)(intptr_t)v673;
	i8 v675 = v674+(+524);
	i1 v676 = *(i1*)(intptr_t)v675;
	i1 v677 = v676&(+2);
	i1 v678 = (i1)+0;
	if (v677==v678) goto c01_00b5; else goto c01_00b4;

c01_00b4:;

	i8 v679 = (i8)(intptr_t)(ws+3608);
	i8 v680 = *(i8*)(intptr_t)v679;
	*(i8*)(intptr_t)(ws+3640) = v680;
	i8 v681 = (i8)(intptr_t)(f43_FCBFlush);

	((void(*)(void))(intptr_t)v681)();

c01_00b5:;

c01_00b1:;

	i8 v682 = (i8)(intptr_t)(ws+3608);
	i8 v683 = *(i8*)(intptr_t)v682;
	i8 v684 = v683+(+10);
	i2 v685 = *(i2*)(intptr_t)v684;
	i8 v686 = (i8)(intptr_t)(ws+3618);
	*(i2*)(intptr_t)v686 = v685;

	i8 v687 = (i8)(intptr_t)(ws+3618);
	i2 v688 = *(i2*)(intptr_t)v687;
	i2 v689 = (i2)+512;
	if (v688==v689) goto c01_00b9; else goto c01_00ba;

c01_00b9:;

	i8 v690 = (i8)(intptr_t)(ws+3608);
	i8 v691 = *(i8*)(intptr_t)v690;
	*(i8*)(intptr_t)(ws+3624) = v691;
	i8 v692 = (i8)(intptr_t)(ws+3616);
	i1 v693 = *(i1*)(intptr_t)v692;
	*(i1*)(intptr_t)(ws+3632) = v693;
	i8 v694 = (i8)(intptr_t)(f44__fcb_flushbuffer);

	((void(*)(void))(intptr_t)v694)();

	goto c01_00b6;

c01_00ba:;

	i8 v695 = (i8)(intptr_t)(ws+3616);
	i1 v696 = *(i1*)(intptr_t)v695;
	i8 v697 = (i8)(intptr_t)(ws+3608);
	i8 v698 = *(i8*)(intptr_t)v697;
	i8 v699 = v698+(+12);
	i8 v700 = (i8)(intptr_t)(ws+3618);
	i2 v701 = *(i2*)(intptr_t)v700;
	i8 v702 = v701;
	i8 v703 = v699+v702;
	*(i1*)(intptr_t)v703 = v696;

	i8 v704 = (i8)(intptr_t)(ws+3608);
	i8 v705 = *(i8*)(intptr_t)v704;
	*(i8*)(intptr_t)(ws+3640) = v705;
	i8 v706 = (i8)(intptr_t)(f41__fcb_advance);

	((void(*)(void))(intptr_t)v706)();

c01_00b6:;

	i8 v707 = (i8)(intptr_t)(ws+3608);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = v708+(+524);
	i1 v710 = *(i1*)(intptr_t)v709;
	i1 v711 = v710|(+4);
	i8 v712 = (i8)(intptr_t)(ws+3608);
	i8 v713 = *(i8*)(intptr_t)v712;
	i8 v714 = v713+(+524);
	*(i1*)(intptr_t)v714 = v711;

}

// FCBPos workspace at ws+3384 length ws+12
void f47_FCBPos(void) {

	i8 v715 = (i8)(intptr_t)(ws+3384);
	i8 v716 = *(i8*)(intptr_t)v715;
	i8 v717 = v716+(+4);
	i4 v718 = *(i4*)(intptr_t)v717;
	i8 v719 = (i8)(intptr_t)(ws+3384);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = v720+(+10);
	i2 v722 = *(i2*)(intptr_t)v721;
	i4 v723 = v722;
	i4 v724 = v718+v723;
	i8 v725 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v725 = v724;

}
	void f43_FCBFlush(void);

// FCBSeek workspace at ws+3384 length ws+16
void f49_FCBSeek(void) {

	i8 v736 = (i8)(intptr_t)(ws+3392);
	i4 v737 = *(i4*)(intptr_t)v736;
	i8 v738 = (i8)(intptr_t)(ws+3384);
	i8 v739 = *(i8*)(intptr_t)v738;
	i8 v740 = v739+(+4);
	i4 v741 = *(i4*)(intptr_t)v740;
	i4 v742 = v737-v741;
	i8 v743 = (i8)(intptr_t)(ws+3396);
	*(i4*)(intptr_t)v743 = v742;

	i8 v744 = (i8)(intptr_t)(ws+3384);
	i8 v745 = *(i8*)(intptr_t)v744;
	i8 v746 = v745+(+524);
	i1 v747 = *(i1*)(intptr_t)v746;
	i1 v748 = v747&(+2);
	i1 v749 = (i1)+0;
	if (v748==v749) goto c01_00c4; else goto c01_00c3;

c01_00c3:;

	i8 v750 = (i8)(intptr_t)(ws+3396);
	i4 v751 = *(i4*)(intptr_t)v750;
	i8 v752 = (i8)(intptr_t)(ws+3384);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+8);
	i2 v755 = *(i2*)(intptr_t)v754;
	i4 v756 = v755;
	if (v751<v756) goto c01_00c8; else goto c01_00c9;

c01_00c8:;

	i8 v757 = (i8)(intptr_t)(ws+3396);
	i4 v758 = *(i4*)(intptr_t)v757;
	i2 v759 = v758;
	i8 v760 = (i8)(intptr_t)(ws+3384);
	i8 v761 = *(i8*)(intptr_t)v760;
	i8 v762 = v761+(+10);
	*(i2*)(intptr_t)v762 = v759;

	return;

c01_00c9:;

c01_00c5:;

	goto c01_00c0;

c01_00c4:;

	i8 v763 = (i8)(intptr_t)(ws+3384);
	i8 v764 = *(i8*)(intptr_t)v763;
	i8 v765 = v764+(+524);
	i1 v766 = *(i1*)(intptr_t)v765;
	i1 v767 = v766&(+4);
	i1 v768 = (i1)+0;
	if (v767==v768) goto c01_00cd; else goto c01_00cc;

c01_00cc:;

	i8 v769 = (i8)(intptr_t)(ws+3384);
	i8 v770 = *(i8*)(intptr_t)v769;
	i8 v771 = v770+(+10);
	i2 v772 = *(i2*)(intptr_t)v771;
	i4 v773 = v772;
	i8 v774 = (i8)(intptr_t)(ws+3396);
	i4 v775 = *(i4*)(intptr_t)v774;
	if (v773<v775) goto c01_00d2; else goto c01_00d1;

c01_00d1:;

	i8 v776 = (i8)(intptr_t)(ws+3396);
	i4 v777 = *(i4*)(intptr_t)v776;
	i2 v778 = v777;
	i8 v779 = (i8)(intptr_t)(ws+3384);
	i8 v780 = *(i8*)(intptr_t)v779;
	i8 v781 = v780+(+10);
	*(i2*)(intptr_t)v781 = v778;

	return;

c01_00d2:;

c01_00ce:;

c01_00cd:;

c01_00c0:;

	i8 v782 = (i8)(intptr_t)(ws+3384);
	i8 v783 = *(i8*)(intptr_t)v782;
	*(i8*)(intptr_t)(ws+3640) = v783;
	i8 v784 = (i8)(intptr_t)(f43_FCBFlush);

	((void(*)(void))(intptr_t)v784)();

	i8 v785 = (i8)(intptr_t)(ws+3392);
	i4 v786 = *(i4*)(intptr_t)v785;
	i8 v787 = (i8)(intptr_t)(ws+3384);
	i8 v788 = *(i8*)(intptr_t)v787;
	i8 v789 = v788+(+4);
	*(i4*)(intptr_t)v789 = v786;

}

// FCBRawRead workspace at ws+3376 length ws+36
void f38_FCBRawRead(void) {

	i8 v790 = (i8)(intptr_t)(ws+3376);
	i8 v791 = *(i8*)(intptr_t)v790;
	i4 v792 = *(i4*)(intptr_t)v791;
	i8 v793 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v793 = v792;

	i8 v794 = (i8)(intptr_t)(ws+3376);
	i8 v795 = *(i8*)(intptr_t)v794;
	i8 v796 = v795+(+12);
	i8 v797 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v797 = v796;


	
*(i4*)(intptr_t)(ws+3408) 
=pread( 
*(i4*)(intptr_t)(ws+3392) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3400) 
,  
*(i2*)(intptr_t)(ws+3388) 
,  
*(i4*)(intptr_t)(ws+3384) 
); 



	i8 v798 = (i8)(intptr_t)(ws+3408);
	i4 v799 = *(i4*)(intptr_t)v798;
	i4 v800 = (i4)-1;
	if (v799==v800) goto c01_00d6; else goto c01_00d7;

c01_00d6:;

	i2 v801 = (i2)+0;
	i8 v802 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v802 = v801;

	i8 v803 = (i8)(intptr_t)(ws+3376);
	i8 v804 = *(i8*)(intptr_t)v803;
	i8 v805 = v804+(+524);
	i1 v806 = *(i1*)(intptr_t)v805;
	i1 v807 = v806|(+1);
	i8 v808 = (i8)(intptr_t)(ws+3376);
	i8 v809 = *(i8*)(intptr_t)v808;
	i8 v810 = v809+(+524);
	*(i1*)(intptr_t)v810 = v807;

	goto c01_00d3;

c01_00d7:;

	i8 v811 = (i8)(intptr_t)(ws+3408);
	i4 v812 = *(i4*)(intptr_t)v811;
	i2 v813 = (s2)(s4)v812;
	i8 v814 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v814 = v813;

c01_00d3:;

}

// FCBRawWrite workspace at ws+3656 length ws+36
void f39_FCBRawWrite(void) {

	i8 v815 = (i8)(intptr_t)(ws+3656);
	i8 v816 = *(i8*)(intptr_t)v815;
	i4 v817 = *(i4*)(intptr_t)v816;
	i8 v818 = (i8)(intptr_t)(ws+3672);
	*(i4*)(intptr_t)v818 = v817;

	i8 v819 = (i8)(intptr_t)(ws+3656);
	i8 v820 = *(i8*)(intptr_t)v819;
	i8 v821 = v820+(+12);
	i8 v822 = (i8)(intptr_t)(ws+3680);
	*(i8*)(intptr_t)v822 = v821;


	
*(i4*)(intptr_t)(ws+3688) 
=pwrite( 
*(i4*)(intptr_t)(ws+3672) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3680) 
,  
*(i2*)(intptr_t)(ws+3668) 
,  
*(i4*)(intptr_t)(ws+3664) 
); 



	i8 v823 = (i8)(intptr_t)(ws+3688);
	i4 v824 = *(i4*)(intptr_t)v823;
	i4 v825 = (i4)-1;
	if (v824==v825) goto c01_00db; else goto c01_00dc;

c01_00db:;

	i8 v826 = (i8)(intptr_t)(ws+3656);
	i8 v827 = *(i8*)(intptr_t)v826;
	i8 v828 = v827+(+524);
	i1 v829 = *(i1*)(intptr_t)v828;
	i1 v830 = v829|(+1);
	i8 v831 = (i8)(intptr_t)(ws+3656);
	i8 v832 = *(i8*)(intptr_t)v831;
	i8 v833 = v832+(+524);
	*(i1*)(intptr_t)v833 = v830;

c01_00dc:;

c01_00d8:;

}
	void f40__fcb_init(void);

// fcb_i_open workspace at ws+3408 length ws+28
void f50_fcb_i_open(void) {

	i8 v834 = (i8)(intptr_t)(ws+3408);
	i8 v835 = *(i8*)(intptr_t)v834;
	*(i8*)(intptr_t)(ws+3440) = v835;
	i8 v836 = (i8)(intptr_t)(f40__fcb_init);

	((void(*)(void))(intptr_t)v836)();


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+3432) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+3416) 
,  
*(i4*)(intptr_t)(ws+3424) 
,  
(+438)
); 



	i8 v837 = (i8)(intptr_t)(ws+3432);
	i4 v838 = *(i4*)(intptr_t)v837;
	i8 v839 = (i8)(intptr_t)(ws+3408);
	i8 v840 = *(i8*)(intptr_t)v839;
	*(i4*)(intptr_t)v840 = v838;

	i8 v841 = (i8)(intptr_t)(ws+3432);
	i4 v842 = *(i4*)(intptr_t)v841;
	i4 v843 = (i4)+0;
	if ((s4)v842<(s4)v843) goto c01_00e0; else goto c01_00e1;

c01_00e0:;


	
*(i1*)(intptr_t)(ws+3428) 
 = errno; 



	goto c01_00dd;

c01_00e1:;

	i1 v844 = (i1)+0;
	i8 v845 = (i8)(intptr_t)(ws+3428);
	*(i1*)(intptr_t)v845 = v844;

c01_00dd:;

}
	void f50_fcb_i_open(void);

// FCBOpenIn workspace at ws+3384 length ws+18
void f51_FCBOpenIn(void) {

	i8 v846 = (i8)(intptr_t)(ws+3384);
	i8 v847 = *(i8*)(intptr_t)v846;
	*(i8*)(intptr_t)(ws+3408) = v847;
	i8 v848 = (i8)(intptr_t)(ws+3392);
	i8 v849 = *(i8*)(intptr_t)v848;
	*(i8*)(intptr_t)(ws+3416) = v849;
	i4 v850 = (i4)+0;
	*(i4*)(intptr_t)(ws+3424) = v850;
	i8 v851 = (i8)(intptr_t)(f50_fcb_i_open);

	((void(*)(void))(intptr_t)v851)();

	i1 v852 = *(i1*)(intptr_t)(ws+3428);
	i8 v853 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v853 = v852;

	i8 v854 = (i8)(intptr_t)(ws+3401);
	i1 v855 = *(i1*)(intptr_t)v854;
	i8 v856 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v856 = v855;

}
	void f50_fcb_i_open(void);

// FCBOpenOut workspace at ws+3280 length ws+18
void f53_FCBOpenOut(void) {

	i8 v868 = (i8)(intptr_t)(ws+3280);
	i8 v869 = *(i8*)(intptr_t)v868;
	*(i8*)(intptr_t)(ws+3408) = v869;
	i8 v870 = (i8)(intptr_t)(ws+3288);
	i8 v871 = *(i8*)(intptr_t)v870;
	*(i8*)(intptr_t)(ws+3416) = v871;
	i4 v872 = (i4)+578;
	*(i4*)(intptr_t)(ws+3424) = v872;
	i8 v873 = (i8)(intptr_t)(f50_fcb_i_open);

	((void(*)(void))(intptr_t)v873)();

	i1 v874 = *(i1*)(intptr_t)(ws+3428);
	i8 v875 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v875 = v874;

	i8 v876 = (i8)(intptr_t)(ws+3297);
	i1 v877 = *(i1*)(intptr_t)v876;
	i8 v878 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v878 = v877;

}
	void f43_FCBFlush(void);

// FCBClose workspace at ws+3384 length ws+16
void f54_FCBClose(void) {

	i8 v879 = (i8)(intptr_t)(ws+3384);
	i8 v880 = *(i8*)(intptr_t)v879;
	*(i8*)(intptr_t)(ws+3640) = v880;
	i8 v881 = (i8)(intptr_t)(f43_FCBFlush);

	((void(*)(void))(intptr_t)v881)();

	i8 v882 = (i8)(intptr_t)(ws+3384);
	i8 v883 = *(i8*)(intptr_t)v882;
	i4 v884 = *(i4*)(intptr_t)v883;
	i8 v885 = (i8)(intptr_t)(ws+3396);
	*(i4*)(intptr_t)v885 = v884;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+3396) 
); 


	
*(i1*)(intptr_t)(ws+3392) 
 = errno; 



}
	void f28_StrLen(void);
	void f68_InternalAlloc(void);
	void f30_MemCopy(void);

// StrDupBraced workspace at ws+3528 length ws+48
void f69_StrDupBraced(void) {

	i8 v958 = (i8)(intptr_t)(ws+3528);
	i8 v959 = *(i8*)(intptr_t)v958;
	*(i8*)(intptr_t)(ws+3584) = v959;
	i8 v960 = (i8)(intptr_t)(f28_StrLen);

	((void(*)(void))(intptr_t)v960)();

	i8 v961 = *(i8*)(intptr_t)(ws+3592);
	i8 v962 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v962 = v961;

	i8 v963 = (i8)(intptr_t)(ws+3544);
	i8 v964 = *(i8*)(intptr_t)v963;
	i8 v965 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v965 = v964;

	i8 v966 = (i8)(intptr_t)(ws+3552);
	i8 v967 = *(i8*)(intptr_t)v966;
	i8 v968 = v967+(+3);
	*(i8*)(intptr_t)(ws+3640) = v968;
	i8 v969 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v969)();

	i8 v970 = *(i8*)(intptr_t)(ws+3648);
	i8 v971 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v971 = v970;

	i8 v972 = (i8)(intptr_t)(ws+3560);
	i8 v973 = *(i8*)(intptr_t)v972;
	i8 v974 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v974 = v973;

	i8 v975 = (i8)(intptr_t)(ws+3536);
	i8 v976 = *(i8*)(intptr_t)v975;
	i8 v977 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v977 = v976;

	i1 v978 = (i1)+91;
	i8 v979 = (i8)(intptr_t)(ws+3568);
	i8 v980 = *(i8*)(intptr_t)v979;
	*(i1*)(intptr_t)v980 = v978;

	i8 v981 = (i8)(intptr_t)(ws+3568);
	i8 v982 = *(i8*)(intptr_t)v981;
	i8 v983 = v982+(+1);
	i8 v984 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v984 = v983;

	i8 v985 = (i8)(intptr_t)(ws+3528);
	i8 v986 = *(i8*)(intptr_t)v985;
	*(i8*)(intptr_t)(ws+3576) = v986;
	i8 v987 = (i8)(intptr_t)(ws+3552);
	i8 v988 = *(i8*)(intptr_t)v987;
	*(i8*)(intptr_t)(ws+3584) = v988;
	i8 v989 = (i8)(intptr_t)(ws+3568);
	i8 v990 = *(i8*)(intptr_t)v989;
	*(i8*)(intptr_t)(ws+3592) = v990;
	i8 v991 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(void))(intptr_t)v991)();

	i8 v992 = (i8)(intptr_t)(ws+3568);
	i8 v993 = *(i8*)(intptr_t)v992;
	i8 v994 = (i8)(intptr_t)(ws+3552);
	i8 v995 = *(i8*)(intptr_t)v994;
	i8 v996 = v993+v995;
	i8 v997 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v997 = v996;

	i1 v998 = (i1)+93;
	i8 v999 = (i8)(intptr_t)(ws+3568);
	i8 v1000 = *(i8*)(intptr_t)v999;
	*(i1*)(intptr_t)v1000 = v998;

	i8 v1001 = (i8)(intptr_t)(ws+3568);
	i8 v1002 = *(i8*)(intptr_t)v1001;
	i8 v1003 = v1002+(+1);
	i8 v1004 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1004 = v1003;

	i1 v1005 = (i1)+0;
	i8 v1006 = (i8)(intptr_t)(ws+3568);
	i8 v1007 = *(i8*)(intptr_t)v1006;
	*(i1*)(intptr_t)v1007 = v1005;

}
	void f28_StrLen(void);
	void f68_InternalAlloc(void);
	void f30_MemCopy(void);

// StrDupArrayed workspace at ws+3448 length ws+56
void f70_StrDupArrayed(void) {

	i8 v1008 = (i8)(intptr_t)(ws+3448);
	i8 v1009 = *(i8*)(intptr_t)v1008;
	*(i8*)(intptr_t)(ws+3584) = v1009;
	i8 v1010 = (i8)(intptr_t)(f28_StrLen);

	((void(*)(void))(intptr_t)v1010)();

	i8 v1011 = *(i8*)(intptr_t)(ws+3592);
	i8 v1012 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v1012 = v1011;

	i8 v1013 = (i8)(intptr_t)(ws+3472);
	i8 v1014 = *(i8*)(intptr_t)v1013;
	i8 v1015 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v1015 = v1014;

	i8 v1016 = (i8)(intptr_t)(ws+3480);
	i8 v1017 = *(i8*)(intptr_t)v1016;
	i8 v1018 = v1017+(+3);
	*(i8*)(intptr_t)(ws+3640) = v1018;
	i8 v1019 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v1019)();

	i8 v1020 = *(i8*)(intptr_t)(ws+3648);
	i8 v1021 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v1021 = v1020;

	i8 v1022 = (i8)(intptr_t)(ws+3488);
	i8 v1023 = *(i8*)(intptr_t)v1022;
	i8 v1024 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1024 = v1023;

	i8 v1025 = (i8)(intptr_t)(ws+3464);
	i8 v1026 = *(i8*)(intptr_t)v1025;
	i8 v1027 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1027 = v1026;

	i8 v1028 = (i8)(intptr_t)(ws+3448);
	i8 v1029 = *(i8*)(intptr_t)v1028;
	*(i8*)(intptr_t)(ws+3576) = v1029;
	i8 v1030 = (i8)(intptr_t)(ws+3480);
	i8 v1031 = *(i8*)(intptr_t)v1030;
	*(i8*)(intptr_t)(ws+3584) = v1031;
	i8 v1032 = (i8)(intptr_t)(ws+3496);
	i8 v1033 = *(i8*)(intptr_t)v1032;
	*(i8*)(intptr_t)(ws+3592) = v1033;
	i8 v1034 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(void))(intptr_t)v1034)();

	i8 v1035 = (i8)(intptr_t)(ws+3496);
	i8 v1036 = *(i8*)(intptr_t)v1035;
	i8 v1037 = (i8)(intptr_t)(ws+3480);
	i8 v1038 = *(i8*)(intptr_t)v1037;
	i8 v1039 = v1036+v1038;
	i8 v1040 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1040 = v1039;

	i1 v1041 = (i1)+91;
	i8 v1042 = (i8)(intptr_t)(ws+3496);
	i8 v1043 = *(i8*)(intptr_t)v1042;
	*(i1*)(intptr_t)v1043 = v1041;

	i8 v1044 = (i8)(intptr_t)(ws+3496);
	i8 v1045 = *(i8*)(intptr_t)v1044;
	i8 v1046 = v1045+(+1);
	i8 v1047 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1047 = v1046;

	i1 v1048 = (i1)+93;
	i8 v1049 = (i8)(intptr_t)(ws+3496);
	i8 v1050 = *(i8*)(intptr_t)v1049;
	*(i1*)(intptr_t)v1050 = v1048;

	i8 v1051 = (i8)(intptr_t)(ws+3496);
	i8 v1052 = *(i8*)(intptr_t)v1051;
	i8 v1053 = v1052+(+1);
	i8 v1054 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1054 = v1053;

	i1 v1055 = (i1)+0;
	i8 v1056 = (i8)(intptr_t)(ws+3496);
	i8 v1057 = *(i8*)(intptr_t)v1056;
	*(i1*)(intptr_t)v1057 = v1055;

}
	void f28_StrLen(void);
	void f68_InternalAlloc(void);
	void f30_MemCopy(void);

// InternalStrDup workspace at ws+3464 length ws+40
void f71_InternalStrDup(void) {

	i8 v1058 = (i8)(intptr_t)(ws+3464);
	i8 v1059 = *(i8*)(intptr_t)v1058;
	*(i8*)(intptr_t)(ws+3584) = v1059;
	i8 v1060 = (i8)(intptr_t)(f28_StrLen);

	((void(*)(void))(intptr_t)v1060)();

	i8 v1061 = *(i8*)(intptr_t)(ws+3592);
	i8 v1062 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v1062 = v1061;

	i8 v1063 = (i8)(intptr_t)(ws+3480);
	i8 v1064 = *(i8*)(intptr_t)v1063;
	i8 v1065 = v1064+(+1);
	i8 v1066 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v1066 = v1065;

	i8 v1067 = (i8)(intptr_t)(ws+3488);
	i8 v1068 = *(i8*)(intptr_t)v1067;
	*(i8*)(intptr_t)(ws+3640) = v1068;
	i8 v1069 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v1069)();

	i8 v1070 = *(i8*)(intptr_t)(ws+3648);
	i8 v1071 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1071 = v1070;

	i8 v1072 = (i8)(intptr_t)(ws+3496);
	i8 v1073 = *(i8*)(intptr_t)v1072;
	i8 v1074 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v1074 = v1073;

	i8 v1075 = (i8)(intptr_t)(ws+3464);
	i8 v1076 = *(i8*)(intptr_t)v1075;
	*(i8*)(intptr_t)(ws+3576) = v1076;
	i8 v1077 = (i8)(intptr_t)(ws+3488);
	i8 v1078 = *(i8*)(intptr_t)v1077;
	*(i8*)(intptr_t)(ws+3584) = v1078;
	i8 v1079 = (i8)(intptr_t)(ws+3472);
	i8 v1080 = *(i8*)(intptr_t)v1079;
	*(i8*)(intptr_t)(ws+3592) = v1080;
	i8 v1081 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(void))(intptr_t)v1081)();

}
	void f6_MemSet(void);
	void f68_InternalAlloc(void);

// AllocNewSymbol workspace at ws+3568 length ws+16
void f63_AllocNewSymbol(void) {

	i8 v1084 = (i8)(intptr_t)(ws+232);
	i8 v1085 = *(i8*)(intptr_t)v1084;
	i8 v1086 = (i8)+0;
	if (v1085==v1086) goto c01_00f9; else goto c01_00f8;

c01_00f8:;

	i8 v1087 = (i8)(intptr_t)(ws+232);
	i8 v1088 = *(i8*)(intptr_t)v1087;
	i8 v1089 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1089 = v1088;

	i8 v1090 = (i8)(intptr_t)(ws+232);
	i8 v1091 = *(i8*)(intptr_t)v1090;
	i8 v1092 = v1091+(+24);
	i8 v1093 = *(i8*)(intptr_t)v1092;
	i8 v1094 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1094 = v1093;

	i8 v1095 = (i8)(intptr_t)(ws+3568);
	i8 v1096 = *(i8*)(intptr_t)v1095;
	*(i8*)(intptr_t)(ws+3640) = v1096;
	i1 v1097 = (i1)+0;
	*(i1*)(intptr_t)(ws+3648) = v1097;
	i8 v1098 = (i8)+33;
	*(i8*)(intptr_t)(ws+3656) = v1098;
	i8 v1099 = (i8)(intptr_t)(f6_MemSet);

	((void(*)(void))(intptr_t)v1099)();

	goto c01_00f5;

c01_00f9:;

	i8 v1100 = (i8)+33;
	*(i8*)(intptr_t)(ws+3640) = v1100;
	i8 v1101 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v1101)();

	i8 v1102 = *(i8*)(intptr_t)(ws+3648);
	i8 v1103 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v1103 = v1102;

	i8 v1104 = (i8)(intptr_t)(ws+3576);
	i8 v1105 = *(i8*)(intptr_t)v1104;
	i8 v1106 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1106 = v1105;

c01_00f5:;

}

// FreeSymbol workspace at ws+3464 length ws+8
void f64_FreeSymbol(void) {

	i8 v1107 = (i8)(intptr_t)(ws+232);
	i8 v1108 = *(i8*)(intptr_t)v1107;
	i8 v1109 = (i8)(intptr_t)(ws+3464);
	i8 v1110 = *(i8*)(intptr_t)v1109;
	i8 v1111 = v1110+(+24);
	*(i8*)(intptr_t)v1111 = v1108;

	i8 v1112 = (i8)(intptr_t)(ws+3464);
	i8 v1113 = *(i8*)(intptr_t)v1112;
	i8 v1114 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1114 = v1113;

}
	void f6_MemSet(void);
	void f68_InternalAlloc(void);

// AllocNewType workspace at ws+3528 length ws+16
void f65_AllocNewType(void) {

	i8 v1117 = (i8)(intptr_t)(ws+240);
	i8 v1118 = *(i8*)(intptr_t)v1117;
	i8 v1119 = (i8)+0;
	if (v1118==v1119) goto c01_00fe; else goto c01_00fd;

c01_00fd:;

	i8 v1120 = (i8)(intptr_t)(ws+240);
	i8 v1121 = *(i8*)(intptr_t)v1120;
	i8 v1122 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v1122 = v1121;

	i8 v1123 = (i8)(intptr_t)(ws+240);
	i8 v1124 = *(i8*)(intptr_t)v1123;
	i8 v1125 = v1124+(+40);
	i8 v1126 = *(i8*)(intptr_t)v1125;
	i8 v1127 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1127 = v1126;

	i8 v1128 = (i8)(intptr_t)(ws+3528);
	i8 v1129 = *(i8*)(intptr_t)v1128;
	*(i8*)(intptr_t)(ws+3640) = v1129;
	i1 v1130 = (i1)+0;
	*(i1*)(intptr_t)(ws+3648) = v1130;
	i8 v1131 = (i8)+54;
	*(i8*)(intptr_t)(ws+3656) = v1131;
	i8 v1132 = (i8)(intptr_t)(f6_MemSet);

	((void(*)(void))(intptr_t)v1132)();

	goto c01_00fa;

c01_00fe:;

	i8 v1133 = (i8)+54;
	*(i8*)(intptr_t)(ws+3640) = v1133;
	i8 v1134 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v1134)();

	i8 v1135 = *(i8*)(intptr_t)(ws+3648);
	i8 v1136 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v1136 = v1135;

	i8 v1137 = (i8)(intptr_t)(ws+3536);
	i8 v1138 = *(i8*)(intptr_t)v1137;
	i8 v1139 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v1139 = v1138;

c01_00fa:;

}

// FreeType workspace at ws+3464 length ws+8
void f66_FreeType(void) {

	i8 v1140 = (i8)(intptr_t)(ws+240);
	i8 v1141 = *(i8*)(intptr_t)v1140;
	i8 v1142 = (i8)(intptr_t)(ws+3464);
	i8 v1143 = *(i8*)(intptr_t)v1142;
	i8 v1144 = v1143+(+40);
	*(i8*)(intptr_t)v1144 = v1141;

	i8 v1145 = (i8)(intptr_t)(ws+3464);
	i8 v1146 = *(i8*)(intptr_t)v1145;
	i8 v1147 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1147 = v1146;

}
	void f31_RawAlloc(void);
	void f33_Free(void);
	void f33_Free(void);
	void f72_PurgeAllFreeNodes(void);
	void f31_RawAlloc(void);
const i1 c01_s0001[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };
	void f11_print(void);
	void f5_ExitWithError(void);

// InternalAlloc workspace at ws+3640 length ws+32
void f68_InternalAlloc(void) {

	i8 v1148 = (i8)(intptr_t)(ws+3640);
	i8 v1149 = *(i8*)(intptr_t)v1148;
	*(i8*)(intptr_t)(ws+3672) = v1149;
	i8 v1150 = (i8)(intptr_t)(f31_RawAlloc);

	((void(*)(void))(intptr_t)v1150)();

	i8 v1151 = *(i8*)(intptr_t)(ws+3680);
	i8 v1152 = (i8)(intptr_t)(ws+3656);
	*(i8*)(intptr_t)v1152 = v1151;

	i8 v1153 = (i8)(intptr_t)(ws+3656);
	i8 v1154 = *(i8*)(intptr_t)v1153;
	i8 v1155 = (i8)(intptr_t)(ws+3648);
	*(i8*)(intptr_t)v1155 = v1154;

	i8 v1156 = (i8)(intptr_t)(ws+3648);
	i8 v1157 = *(i8*)(intptr_t)v1156;
	i8 v1158 = (i8)+0;
	if (v1157==v1158) goto c01_0102; else goto c01_0103;

c01_0102:;

c01_0104:;

	i8 v1159 = (i8)(intptr_t)(ws+232);
	i8 v1160 = *(i8*)(intptr_t)v1159;
	i8 v1161 = (i8)+0;
	if (v1160==v1161) goto c01_0109; else goto c01_0108;

c01_0108:;

	i8 v1162 = (i8)(intptr_t)(ws+232);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	i8 v1164 = (i8)(intptr_t)(ws+3648);
	*(i8*)(intptr_t)v1164 = v1163;

	i8 v1165 = (i8)(intptr_t)(ws+232);
	i8 v1166 = *(i8*)(intptr_t)v1165;
	i8 v1167 = v1166+(+24);
	i8 v1168 = *(i8*)(intptr_t)v1167;
	i8 v1169 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1169 = v1168;

	i8 v1170 = (i8)(intptr_t)(ws+3648);
	i8 v1171 = *(i8*)(intptr_t)v1170;
	*(i8*)(intptr_t)(ws+3680) = v1171;
	i8 v1172 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v1172)();

	goto c01_0104;

c01_0109:;

c01_010a:;

	i8 v1173 = (i8)(intptr_t)(ws+240);
	i8 v1174 = *(i8*)(intptr_t)v1173;
	i8 v1175 = (i8)+0;
	if (v1174==v1175) goto c01_010f; else goto c01_010e;

c01_010e:;

	i8 v1176 = (i8)(intptr_t)(ws+240);
	i8 v1177 = *(i8*)(intptr_t)v1176;
	i8 v1178 = (i8)(intptr_t)(ws+3648);
	*(i8*)(intptr_t)v1178 = v1177;

	i8 v1179 = (i8)(intptr_t)(ws+240);
	i8 v1180 = *(i8*)(intptr_t)v1179;
	i8 v1181 = v1180+(+40);
	i8 v1182 = *(i8*)(intptr_t)v1181;
	i8 v1183 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1183 = v1182;

	i8 v1184 = (i8)(intptr_t)(ws+3648);
	i8 v1185 = *(i8*)(intptr_t)v1184;
	*(i8*)(intptr_t)(ws+3680) = v1185;
	i8 v1186 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v1186)();

	goto c01_010a;

c01_010f:;

	i8 v1187 = (i8)(intptr_t)(f72_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v1187)();

	i8 v1188 = (i8)(intptr_t)(ws+3640);
	i8 v1189 = *(i8*)(intptr_t)v1188;
	*(i8*)(intptr_t)(ws+3672) = v1189;
	i8 v1190 = (i8)(intptr_t)(f31_RawAlloc);

	((void(*)(void))(intptr_t)v1190)();

	i8 v1191 = *(i8*)(intptr_t)(ws+3680);
	i8 v1192 = (i8)(intptr_t)(ws+3664);
	*(i8*)(intptr_t)v1192 = v1191;

	i8 v1193 = (i8)(intptr_t)(ws+3664);
	i8 v1194 = *(i8*)(intptr_t)v1193;
	i8 v1195 = (i8)(intptr_t)(ws+3648);
	*(i8*)(intptr_t)v1195 = v1194;

	i8 v1196 = (i8)(intptr_t)(ws+3648);
	i8 v1197 = *(i8*)(intptr_t)v1196;
	i8 v1198 = (i8)+0;
	if (v1197==v1198) goto c01_0113; else goto c01_0114;

c01_0113:;

	i8 v1199 = (i8)(intptr_t)c01_s0001;
	*(i8*)(intptr_t)(ws+3696) = v1199;
	i8 v1200 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1200)();

	i8 v1201 = (i8)(intptr_t)(f5_ExitWithError);

	((void(*)(void))(intptr_t)v1201)();

c01_0114:;

c01_0110:;

c01_0103:;

c01_00ff:;

}
static data f2___main_s0115[] = {








	{ .i1 = { 0x00,0x00,0x00,0x00,0x92,0xbc,0x00,0x90}},








	{ .i1 = { 0x84,0x98,0x93,0xae,0x8e,0x88,0x97,0x21}},








	{ .i1 = { 0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21}},








	{ .i1 = { 0x21,0x86,0x96,0x00,0x00,0x00,0x00,0x10}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x91,0x00,0x85,0xb2,0x30,0x00}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},







	{ .i1 = { 0x30,0x30,0x9f,0xb1,0xa0,0x9b}},
};
const i1 c01_s0002[] = { 0x40,0x61,0x6c,0x69,0x61,0x73,0 };
const i1 c01_s0003[] = { 0x40,0x61,0x73,0x6d,0 };
const i1 c01_s0004[] = { 0x40,0x61,0x74,0 };
const i1 c01_s0005[] = { 0x40,0x62,0x79,0x74,0x65,0x73,0x6f,0x66,0 };
const i1 c01_s0006[] = { 0x40,0x64,0x65,0x63,0x6c,0 };
const i1 c01_s0007[] = { 0x40,0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c01_s0008[] = { 0x40,0x69,0x6e,0x64,0x65,0x78,0x6f,0x66,0 };
const i1 c01_s0009[] = { 0x40,0x69,0x6d,0x70,0x6c,0 };
const i1 c01_s000a[] = { 0x40,0x73,0x69,0x7a,0x65,0x6f,0x66,0 };
const i1 c01_s000b[] = { 0x40,0x6e,0x65,0x78,0x74,0 };
const i1 c01_s000c[] = { 0x40,0x70,0x72,0x65,0x76,0 };
const i1 c01_s000d[] = { 0x61,0x6e,0x64,0 };
const i1 c01_s000e[] = { 0x61,0x73,0 };
const i1 c01_s000f[] = { 0x62,0x72,0x65,0x61,0x6b,0 };
const i1 c01_s0010[] = { 0x63,0x61,0x73,0x65,0 };
const i1 c01_s0011[] = { 0x63,0x6f,0x6e,0x73,0x74,0 };
const i1 c01_s0012[] = { 0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0 };
const i1 c01_s0013[] = { 0x65,0x6c,0x73,0x65,0 };
const i1 c01_s0014[] = { 0x65,0x6c,0x73,0x65,0x69,0x66,0 };
const i1 c01_s0015[] = { 0x65,0x6e,0x64,0 };
const i1 c01_s0016[] = { 0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c01_s0017[] = { 0x69,0x66,0 };
const i1 c01_s0018[] = { 0x69,0x73,0 };
const i1 c01_s0019[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0 };
const i1 c01_s001a[] = { 0x69,0x6e,0x74,0 };
const i1 c01_s001b[] = { 0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
const i1 c01_s001c[] = { 0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0 };
const i1 c01_s001d[] = { 0x6c,0x6f,0x6f,0x70,0 };
const i1 c01_s001e[] = { 0x6e,0x69,0x6c,0 };
const i1 c01_s001f[] = { 0x6e,0x6f,0x74,0 };
const i1 c01_s0020[] = { 0x6f,0x72,0 };
const i1 c01_s0021[] = { 0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c01_s0022[] = { 0x72,0x65,0x74,0x75,0x72,0x6e,0 };
const i1 c01_s0023[] = { 0x73,0x75,0x62,0 };
const i1 c01_s0024[] = { 0x74,0x68,0x65,0x6e,0 };
const i1 c01_s0025[] = { 0x74,0x79,0x70,0x65,0x64,0x65,0x66,0 };
const i1 c01_s0026[] = { 0x76,0x61,0x72,0 };
const i1 c01_s0027[] = { 0x77,0x68,0x65,0x6e,0 };
const i1 c01_s0028[] = { 0x77,0x68,0x69,0x6c,0x65,0 };
static data f2___main_s0116[] = {

	{ .ptr = (void*)c01_s0002 },

	{ .ptr = (void*)c01_s0003 },

	{ .ptr = (void*)c01_s0004 },

	{ .ptr = (void*)c01_s0005 },

	{ .ptr = (void*)c01_s0006 },

	{ .ptr = (void*)c01_s0007 },

	{ .ptr = (void*)c01_s0008 },

	{ .ptr = (void*)c01_s0009 },

	{ .ptr = (void*)c01_s000a },

	{ .ptr = (void*)c01_s000b },

	{ .ptr = (void*)c01_s000c },

	{ .ptr = (void*)c01_s000d },

	{ .ptr = (void*)c01_s000e },

	{ .ptr = (void*)c01_s000f },

	{ .ptr = (void*)c01_s0010 },

	{ .ptr = (void*)c01_s0011 },

	{ .ptr = (void*)c01_s0012 },

	{ .ptr = (void*)c01_s0013 },

	{ .ptr = (void*)c01_s0014 },

	{ .ptr = (void*)c01_s0015 },

	{ .ptr = (void*)c01_s0016 },

	{ .ptr = (void*)c01_s0017 },

	{ .ptr = (void*)c01_s0018 },

	{ .ptr = (void*)c01_s0019 },

	{ .ptr = (void*)c01_s001a },

	{ .ptr = (void*)c01_s001b },

	{ .ptr = (void*)c01_s001c },

	{ .ptr = (void*)c01_s001d },

	{ .ptr = (void*)c01_s001e },

	{ .ptr = (void*)c01_s001f },

	{ .ptr = (void*)c01_s0020 },

	{ .ptr = (void*)c01_s0021 },

	{ .ptr = (void*)c01_s0022 },

	{ .ptr = (void*)c01_s0023 },

	{ .ptr = (void*)c01_s0024 },

	{ .ptr = (void*)c01_s0025 },

	{ .ptr = (void*)c01_s0026 },

	{ .ptr = (void*)c01_s0027 },

	{ .ptr = (void*)c01_s0028 },

};
static data f2___main_s0117[] = {








	{ .i1 = { 0x44,0x01,0x23,0x24,0x2b,0x0b,0x3f,0x2a}},








	{ .i1 = { 0x28,0x3d,0x3e,0x2f,0x3b,0x03,0x41,0x07}},








	{ .i1 = { 0x40,0x09,0x25,0x0a,0x0b,0x0c,0x42,0xff}},








	{ .i1 = { 0x26,0x2c,0x45,0x0d,0x2d,0x0f,0x30,0x14}},








	{ .i1 = { 0x15,0x19,0x1a,0x27,0x1c,0x43,0x1d}},
};
const i1 c01_s0029[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f11_print(void);
const i1 c01_s002a[] = { 0x3c,0x65,0x6f,0x66,0x3e,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s002b[] = { 0x3a,0x20,0 };
	void f11_print(void);
	void f16_print_i16(void);
const i1 c01_s002c[] = { 0x3a,0x20,0 };
	void f11_print(void);

// StartError workspace at ws+3656 length ws+0
void f73_StartError(void) {

	i8 v1210 = (i8)(intptr_t)c01_s0029;
	*(i8*)(intptr_t)(ws+3696) = v1210;
	i8 v1211 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1211)();

	i8 v1212 = (i8)(intptr_t)(ws+256);
	i8 v1213 = *(i8*)(intptr_t)v1212;
	i8 v1214 = (i8)+0;
	if (v1213==v1214) goto c01_011b; else goto c01_011c;

c01_011b:;

	i8 v1215 = (i8)(intptr_t)c01_s002a;
	*(i8*)(intptr_t)(ws+3696) = v1215;
	i8 v1216 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1216)();

	goto c01_0118;

c01_011c:;

	i8 v1217 = (i8)(intptr_t)(ws+256);
	i8 v1218 = *(i8*)(intptr_t)v1217;
	i8 v1219 = v1218+(+8);
	i8 v1220 = *(i8*)(intptr_t)v1219;
	*(i8*)(intptr_t)(ws+3696) = v1220;
	i8 v1221 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1221)();

	i8 v1222 = (i8)(intptr_t)c01_s002b;
	*(i8*)(intptr_t)(ws+3696) = v1222;
	i8 v1223 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1223)();

	i8 v1224 = (i8)(intptr_t)(ws+256);
	i8 v1225 = *(i8*)(intptr_t)v1224;
	i8 v1226 = v1225+(+16);
	i2 v1227 = *(i2*)(intptr_t)v1226;
	*(i2*)(intptr_t)(ws+3656) = v1227;
	i8 v1228 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(void))(intptr_t)v1228)();

c01_0118:;

	i8 v1229 = (i8)(intptr_t)c01_s002c;
	*(i8*)(intptr_t)(ws+3696) = v1229;
	i8 v1230 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1230)();

}
	void f12_print_nl(void);
	void f5_ExitWithError(void);

// EndError workspace at ws+3656 length ws+0
void f74_EndError(void) {

	i8 v1231 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1231)();

	i8 v1232 = (i8)(intptr_t)(f5_ExitWithError);

	((void(*)(void))(intptr_t)v1232)();

}
	void f73_StartError(void);
	void f11_print(void);
	void f74_EndError(void);

// SimpleError workspace at ws+3648 length ws+8
void f75_SimpleError(void) {

	i8 v1233 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v1233)();

	i8 v1234 = (i8)(intptr_t)(ws+3648);
	i8 v1235 = *(i8*)(intptr_t)v1234;
	*(i8*)(intptr_t)(ws+3696) = v1235;
	i8 v1236 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1236)();

	i8 v1237 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v1237)();

}
	void f68_InternalAlloc(void);

// LexerAddIncludePath workspace at ws+3280 length ws+24
void f76_LexerAddIncludePath(void) {

	i8 v1238 = (i8)+16;
	*(i8*)(intptr_t)(ws+3640) = v1238;
	i8 v1239 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v1239)();

	i8 v1240 = *(i8*)(intptr_t)(ws+3648);
	i8 v1241 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v1241 = v1240;

	i8 v1242 = (i8)(intptr_t)(ws+3288);
	i8 v1243 = *(i8*)(intptr_t)v1242;
	i8 v1244 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v1244 = v1243;

	i8 v1245 = (i8)(intptr_t)(ws+248);
	i8 v1246 = *(i8*)(intptr_t)v1245;
	i8 v1247 = (i8)(intptr_t)(ws+3296);
	i8 v1248 = *(i8*)(intptr_t)v1247;
	*(i8*)(intptr_t)v1248 = v1246;

	i8 v1249 = (i8)(intptr_t)(ws+3280);
	i8 v1250 = *(i8*)(intptr_t)v1249;
	i8 v1251 = (i8)(intptr_t)(ws+3296);
	i8 v1252 = *(i8*)(intptr_t)v1251;
	i8 v1253 = v1252+(+8);
	*(i8*)(intptr_t)v1253 = v1250;

	i8 v1254 = (i8)(intptr_t)(ws+3296);
	i8 v1255 = *(i8*)(intptr_t)v1254;
	i8 v1256 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1256 = v1255;

}
const i1 c01_s002d[] = { 0x20,0x20,0 };
	void f11_print(void);

// LexerPrintSpaces workspace at ws+3368 length ws+1
void f77_LexerPrintSpaces(void) {

	i8 v1259 = (i8)(intptr_t)(ws+925);
	i1 v1260 = *(i1*)(intptr_t)v1259;
	i8 v1261 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v1261 = v1260;

c01_011d:;

	i8 v1262 = (i8)(intptr_t)(ws+3368);
	i1 v1263 = *(i1*)(intptr_t)v1262;
	i1 v1264 = (i1)+0;
	if (v1263==v1264) goto c01_0122; else goto c01_0121;

c01_0121:;

	i8 v1265 = (i8)(intptr_t)c01_s002d;
	*(i8*)(intptr_t)(ws+3696) = v1265;
	i8 v1266 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1266)();

	i8 v1267 = (i8)(intptr_t)(ws+3368);
	i1 v1268 = *(i1*)(intptr_t)v1267;
	i1 v1269 = v1268+(-1);
	i8 v1270 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v1270 = v1269;

	goto c01_011d;

c01_0122:;

}
	void f51_FCBOpenIn(void);
	void f49_FCBSeek(void);

// lexer_i_open workspace at ws+3368 length ws+10
void f78_lexer_i_open(void) {

	i8 v1271 = (i8)(intptr_t)(ws+400);
	*(i8*)(intptr_t)(ws+3384) = v1271;
	i8 v1272 = (i8)(intptr_t)(ws+3368);
	i8 v1273 = *(i8*)(intptr_t)v1272;
	i8 v1274 = v1273+(+8);
	i8 v1275 = *(i8*)(intptr_t)v1274;
	*(i8*)(intptr_t)(ws+3392) = v1275;
	i8 v1276 = (i8)(intptr_t)(f51_FCBOpenIn);

	((void(*)(void))(intptr_t)v1276)();

	i1 v1277 = *(i1*)(intptr_t)(ws+3400);
	i8 v1278 = (i8)(intptr_t)(ws+3377);
	*(i1*)(intptr_t)v1278 = v1277;

	i8 v1279 = (i8)(intptr_t)(ws+3377);
	i1 v1280 = *(i1*)(intptr_t)v1279;
	i1 v1281 = (i1)+0;
	if (v1280==v1281) goto c01_0126; else goto c01_0127;

c01_0126:;

	i8 v1282 = (i8)(intptr_t)(ws+400);
	*(i8*)(intptr_t)(ws+3384) = v1282;
	i8 v1283 = (i8)(intptr_t)(ws+3368);
	i8 v1284 = *(i8*)(intptr_t)v1283;
	i8 v1285 = v1284+(+20);
	i4 v1286 = *(i4*)(intptr_t)v1285;
	*(i4*)(intptr_t)(ws+3392) = v1286;
	i8 v1287 = (i8)(intptr_t)(f49_FCBSeek);

	((void(*)(void))(intptr_t)v1287)();

	i1 v1288 = (i1)+0;
	i8 v1289 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v1289 = v1288;

	goto c01_0123;

c01_0127:;

	i1 v1290 = (i1)+1;
	i8 v1291 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v1291 = v1290;

c01_0123:;

}
	void f47_FCBPos(void);
	void f54_FCBClose(void);

// lexer_i_close workspace at ws+3368 length ws+14
void f79_lexer_i_close(void) {

	i8 v1292 = (i8)(intptr_t)(ws+400);
	*(i8*)(intptr_t)(ws+3384) = v1292;
	i8 v1293 = (i8)(intptr_t)(f47_FCBPos);

	((void(*)(void))(intptr_t)v1293)();

	i4 v1294 = *(i4*)(intptr_t)(ws+3392);
	i8 v1295 = (i8)(intptr_t)(ws+3376);
	*(i4*)(intptr_t)v1295 = v1294;

	i8 v1296 = (i8)(intptr_t)(ws+3376);
	i4 v1297 = *(i4*)(intptr_t)v1296;
	i8 v1298 = (i8)(intptr_t)(ws+3368);
	i8 v1299 = *(i8*)(intptr_t)v1298;
	i8 v1300 = v1299+(+20);
	*(i4*)(intptr_t)v1300 = v1297;

	i8 v1301 = (i8)(intptr_t)(ws+400);
	*(i8*)(intptr_t)(ws+3384) = v1301;
	i8 v1302 = (i8)(intptr_t)(f54_FCBClose);

	((void(*)(void))(intptr_t)v1302)();

	i1 v1303 = *(i1*)(intptr_t)(ws+3392);
	i8 v1304 = (i8)(intptr_t)(ws+3380);
	*(i1*)(intptr_t)v1304 = v1303;

	i8 v1305 = (i8)(intptr_t)(ws+3380);
	i1 v1306 = *(i1*)(intptr_t)v1305;
	i8 v1307 = (i8)(intptr_t)(ws+3381);
	*(i1*)(intptr_t)v1307 = v1306;

}
	void f68_InternalAlloc(void);
	void f79_lexer_i_close(void);
	void f28_StrLen(void);
	void f28_StrLen(void);
	void f68_InternalAlloc(void);
	void f30_MemCopy(void);
	void f30_MemCopy(void);
	void f78_lexer_i_open(void);
	void f77_LexerPrintSpaces(void);
const i1 c01_s002e[] = { 0x3e,0x20,0 };
	void f11_print(void);
	void f11_print(void);
	void f12_print_nl(void);
	void f33_Free(void);
	void f73_StartError(void);
const i1 c01_s002f[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s0030[] = { 0x27,0 };
	void f11_print(void);
	void f74_EndError(void);

// LexerIncludeFile workspace at ws+3288 length ws+73
void f80_LexerIncludeFile(void) {

	i8 v1308 = (i8)+24;
	*(i8*)(intptr_t)(ws+3640) = v1308;
	i8 v1309 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v1309)();

	i8 v1310 = *(i8*)(intptr_t)(ws+3648);
	i8 v1311 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v1311 = v1310;

	i8 v1312 = (i8)(intptr_t)(ws+3296);
	i8 v1313 = *(i8*)(intptr_t)v1312;
	i8 v1314 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v1314 = v1313;

	i8 v1315 = (i8)(intptr_t)(ws+256);
	i8 v1316 = *(i8*)(intptr_t)v1315;
	i8 v1317 = (i8)(intptr_t)(ws+3304);
	i8 v1318 = *(i8*)(intptr_t)v1317;
	*(i8*)(intptr_t)v1318 = v1316;

	i2 v1319 = (i2)+1;
	i8 v1320 = (i8)(intptr_t)(ws+3304);
	i8 v1321 = *(i8*)(intptr_t)v1320;
	i8 v1322 = v1321+(+16);
	*(i2*)(intptr_t)v1322 = v1319;

	i8 v1323 = (i8)(intptr_t)(ws+256);
	i8 v1324 = *(i8*)(intptr_t)v1323;
	i8 v1325 = (i8)+0;
	if (v1324==v1325) goto c01_012c; else goto c01_012b;

c01_012b:;

	i8 v1326 = (i8)(intptr_t)(ws+256);
	i8 v1327 = *(i8*)(intptr_t)v1326;
	*(i8*)(intptr_t)(ws+3368) = v1327;
	i8 v1328 = (i8)(intptr_t)(f79_lexer_i_close);

	((void(*)(void))(intptr_t)v1328)();

c01_012c:;

c01_0128:;

	i8 v1329 = (i8)(intptr_t)(ws+248);
	i8 v1330 = *(i8*)(intptr_t)v1329;
	i8 v1331 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v1331 = v1330;

	i8 v1332 = (i8)(intptr_t)(ws+3288);
	i8 v1333 = *(i8*)(intptr_t)v1332;
	*(i8*)(intptr_t)(ws+3584) = v1333;
	i8 v1334 = (i8)(intptr_t)(f28_StrLen);

	((void(*)(void))(intptr_t)v1334)();

	i8 v1335 = *(i8*)(intptr_t)(ws+3592);
	i8 v1336 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v1336 = v1335;

	i8 v1337 = (i8)(intptr_t)(ws+3320);
	i8 v1338 = *(i8*)(intptr_t)v1337;
	i8 v1339 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v1339 = v1338;

c01_012d:;

	i8 v1340 = (i8)(intptr_t)(ws+3312);
	i8 v1341 = *(i8*)(intptr_t)v1340;
	i8 v1342 = (i8)+0;
	if (v1341==v1342) goto c01_0132; else goto c01_0131;

c01_0131:;

	i8 v1343 = (i8)(intptr_t)(ws+3312);
	i8 v1344 = *(i8*)(intptr_t)v1343;
	i8 v1345 = v1344+(+8);
	i8 v1346 = *(i8*)(intptr_t)v1345;
	*(i8*)(intptr_t)(ws+3584) = v1346;
	i8 v1347 = (i8)(intptr_t)(f28_StrLen);

	((void(*)(void))(intptr_t)v1347)();

	i8 v1348 = *(i8*)(intptr_t)(ws+3592);
	i8 v1349 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v1349 = v1348;

	i8 v1350 = (i8)(intptr_t)(ws+3336);
	i8 v1351 = *(i8*)(intptr_t)v1350;
	i8 v1352 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v1352 = v1351;

	i8 v1353 = (i8)(intptr_t)(ws+3328);
	i8 v1354 = *(i8*)(intptr_t)v1353;
	i8 v1355 = (i8)(intptr_t)(ws+3344);
	i8 v1356 = *(i8*)(intptr_t)v1355;
	i8 v1357 = v1354+v1356;
	i8 v1358 = v1357+(+1);
	*(i8*)(intptr_t)(ws+3640) = v1358;
	i8 v1359 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v1359)();

	i8 v1360 = *(i8*)(intptr_t)(ws+3648);
	i8 v1361 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v1361 = v1360;

	i8 v1362 = (i8)(intptr_t)(ws+3352);
	i8 v1363 = *(i8*)(intptr_t)v1362;
	i8 v1364 = (i8)(intptr_t)(ws+3304);
	i8 v1365 = *(i8*)(intptr_t)v1364;
	i8 v1366 = v1365+(+8);
	*(i8*)(intptr_t)v1366 = v1363;

	i8 v1367 = (i8)(intptr_t)(ws+3312);
	i8 v1368 = *(i8*)(intptr_t)v1367;
	i8 v1369 = v1368+(+8);
	i8 v1370 = *(i8*)(intptr_t)v1369;
	*(i8*)(intptr_t)(ws+3576) = v1370;
	i8 v1371 = (i8)(intptr_t)(ws+3344);
	i8 v1372 = *(i8*)(intptr_t)v1371;
	*(i8*)(intptr_t)(ws+3584) = v1372;
	i8 v1373 = (i8)(intptr_t)(ws+3304);
	i8 v1374 = *(i8*)(intptr_t)v1373;
	i8 v1375 = v1374+(+8);
	i8 v1376 = *(i8*)(intptr_t)v1375;
	*(i8*)(intptr_t)(ws+3592) = v1376;
	i8 v1377 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(void))(intptr_t)v1377)();

	i8 v1378 = (i8)(intptr_t)(ws+3288);
	i8 v1379 = *(i8*)(intptr_t)v1378;
	*(i8*)(intptr_t)(ws+3576) = v1379;
	i8 v1380 = (i8)(intptr_t)(ws+3328);
	i8 v1381 = *(i8*)(intptr_t)v1380;
	i8 v1382 = v1381+(+1);
	*(i8*)(intptr_t)(ws+3584) = v1382;
	i8 v1383 = (i8)(intptr_t)(ws+3304);
	i8 v1384 = *(i8*)(intptr_t)v1383;
	i8 v1385 = v1384+(+8);
	i8 v1386 = *(i8*)(intptr_t)v1385;
	i8 v1387 = (i8)(intptr_t)(ws+3344);
	i8 v1388 = *(i8*)(intptr_t)v1387;
	i8 v1389 = v1386+v1388;
	*(i8*)(intptr_t)(ws+3592) = v1389;
	i8 v1390 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(void))(intptr_t)v1390)();

	i8 v1391 = (i8)(intptr_t)(ws+3304);
	i8 v1392 = *(i8*)(intptr_t)v1391;
	*(i8*)(intptr_t)(ws+3368) = v1392;
	i8 v1393 = (i8)(intptr_t)(f78_lexer_i_open);

	((void(*)(void))(intptr_t)v1393)();

	i1 v1394 = *(i1*)(intptr_t)(ws+3376);
	i8 v1395 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v1395 = v1394;

	i8 v1396 = (i8)(intptr_t)(ws+3360);
	i1 v1397 = *(i1*)(intptr_t)v1396;
	i1 v1398 = (i1)+0;
	if (v1397==v1398) goto c01_0136; else goto c01_0137;

c01_0136:;

	i8 v1399 = (i8)(intptr_t)(ws+925);
	i1 v1400 = *(i1*)(intptr_t)v1399;
	i1 v1401 = v1400+(+1);
	i8 v1402 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1402 = v1401;

	i8 v1403 = (i8)(intptr_t)(f77_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1403)();

	i8 v1404 = (i8)(intptr_t)c01_s002e;
	*(i8*)(intptr_t)(ws+3696) = v1404;
	i8 v1405 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1405)();

	i8 v1406 = (i8)(intptr_t)(ws+3304);
	i8 v1407 = *(i8*)(intptr_t)v1406;
	i8 v1408 = v1407+(+8);
	i8 v1409 = *(i8*)(intptr_t)v1408;
	*(i8*)(intptr_t)(ws+3696) = v1409;
	i8 v1410 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1410)();

	i8 v1411 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1411)();

	i8 v1412 = (i8)(intptr_t)(ws+3304);
	i8 v1413 = *(i8*)(intptr_t)v1412;
	i8 v1414 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1414 = v1413;

	return;

c01_0137:;

c01_0133:;

	i8 v1415 = (i8)(intptr_t)(ws+3304);
	i8 v1416 = *(i8*)(intptr_t)v1415;
	i8 v1417 = v1416+(+8);
	i8 v1418 = *(i8*)(intptr_t)v1417;
	*(i8*)(intptr_t)(ws+3680) = v1418;
	i8 v1419 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v1419)();

	i8 v1420 = (i8)(intptr_t)(ws+3312);
	i8 v1421 = *(i8*)(intptr_t)v1420;
	i8 v1422 = *(i8*)(intptr_t)v1421;
	i8 v1423 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v1423 = v1422;

	goto c01_012d;

c01_0132:;

	i8 v1424 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v1424)();

	i8 v1425 = (i8)(intptr_t)c01_s002f;
	*(i8*)(intptr_t)(ws+3696) = v1425;
	i8 v1426 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1426)();

	i8 v1427 = (i8)(intptr_t)(ws+3288);
	i8 v1428 = *(i8*)(intptr_t)v1427;
	*(i8*)(intptr_t)(ws+3696) = v1428;
	i8 v1429 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1429)();

	i8 v1430 = (i8)(intptr_t)c01_s0030;
	*(i8*)(intptr_t)(ws+3696) = v1430;
	i8 v1431 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1431)();

	i8 v1432 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v1432)();

}

// lexer_i_ctype workspace at ws+3312 length ws+3
void f82_lexer_i_ctype(void) {

	i8 v1433 = (i8)(intptr_t)(ws+3312);
	i1 v1434 = *(i1*)(intptr_t)v1433;
	i1 v1435 = (i1)+33;
	if (v1434<v1435) goto c01_013e; else goto c01_013f;

c01_013f:;

	i1 v1436 = (i1)+127;
	i8 v1437 = (i8)(intptr_t)(ws+3312);
	i1 v1438 = *(i1*)(intptr_t)v1437;
	if (v1436<v1438) goto c01_013e; else goto c01_013d;

c01_013d:;

	i8 v1439 = (i8)(intptr_t)((i1*)f2___main_s0115);
	i8 v1440 = (i8)(intptr_t)(ws+3312);
	i1 v1441 = *(i1*)(intptr_t)v1440;
	i1 v1442 = v1441+(-33);
	i8 v1443 = v1442;
	i8 v1444 = v1439+v1443;
	i1 v1445 = *(i1*)(intptr_t)v1444;
	i8 v1446 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v1446 = v1445;

	i8 v1447 = (i8)(intptr_t)(ws+3313);
	i1 v1448 = *(i1*)(intptr_t)v1447;
	i1 v1449 = v1448&(+128);
	i1 v1450 = (i1)+0;
	if (v1449==v1450) goto c01_0144; else goto c01_0143;

c01_0143:;

	i8 v1451 = (i8)(intptr_t)(ws+3313);
	i1 v1452 = *(i1*)(intptr_t)v1451;
	i1 v1453 = v1452&(-129);
	i8 v1454 = (i8)(intptr_t)(ws+3314);
	*(i1*)(intptr_t)v1454 = v1453;

	i1 v1455 = (i1)+128;
	i8 v1456 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v1456 = v1455;

c01_0144:;

c01_0140:;

	goto c01_0138;

c01_013e:;

	i1 v1457 = (i1)+0;
	i8 v1458 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v1458 = v1457;

	i1 v1459 = (i1)+0;
	i8 v1460 = (i8)(intptr_t)(ws+3314);
	*(i1*)(intptr_t)v1460 = v1459;

c01_0138:;

}
	void f45_FCBGetChar(void);
	void f79_lexer_i_close(void);
	void f33_Free(void);
	void f77_LexerPrintSpaces(void);
const i1 c01_s0031[] = { 0x3c,0x20,0 };
	void f11_print(void);
	void f11_print(void);
	void f12_print_nl(void);
	void f78_lexer_i_open(void);
const i1 c01_s0032[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };
	void f75_SimpleError(void);

// lexer_i_getchar workspace at ws+3312 length ws+18
void f83_lexer_i_getchar(void) {

	i8 v1461 = (i8)(intptr_t)(ws+264);
	i1 v1462 = *(i1*)(intptr_t)v1461;
	i1 v1463 = (i1)+0;
	if (v1462==v1463) goto c01_0149; else goto c01_0148;

c01_0148:;

	i8 v1464 = (i8)(intptr_t)(ws+264);
	i1 v1465 = *(i1*)(intptr_t)v1464;
	i8 v1466 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1466 = v1465;

	i1 v1467 = (i1)+0;
	i8 v1468 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1468 = v1467;

	return;

c01_0149:;

c01_0145:;

c01_014a:;

	i8 v1469 = (i8)(intptr_t)(ws+256);
	i8 v1470 = *(i8*)(intptr_t)v1469;
	i8 v1471 = (i8)+0;
	if (v1470==v1471) goto c01_014f; else goto c01_0150;

c01_014f:;

	i1 v1472 = (i1)+0;
	i8 v1473 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1473 = v1472;

	goto c01_014b;

c01_0150:;

c01_014c:;

	i8 v1474 = (i8)(intptr_t)(ws+256);
	i8 v1475 = *(i8*)(intptr_t)v1474;
	i8 v1476 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v1476 = v1475;

	i8 v1477 = (i8)(intptr_t)(ws+400);
	*(i8*)(intptr_t)(ws+3336) = v1477;
	i8 v1478 = (i8)(intptr_t)(f45_FCBGetChar);

	((void(*)(void))(intptr_t)v1478)();

	i1 v1479 = *(i1*)(intptr_t)(ws+3344);
	i8 v1480 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v1480 = v1479;

	i8 v1481 = (i8)(intptr_t)(ws+3328);
	i1 v1482 = *(i1*)(intptr_t)v1481;
	i8 v1483 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1483 = v1482;

	i8 v1484 = (i8)(intptr_t)(ws+3312);
	i1 v1485 = *(i1*)(intptr_t)v1484;
	i1 v1486 = (i1)+26;
	if (v1485==v1486) goto c01_0154; else goto c01_0155;

c01_0154:;

	i1 v1487 = (i1)+0;
	i8 v1488 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1488 = v1487;

c01_0155:;

c01_0151:;

	i8 v1489 = (i8)(intptr_t)(ws+3312);
	i1 v1490 = *(i1*)(intptr_t)v1489;
	i1 v1491 = (i1)+0;
	if (v1490==v1491) goto c01_015a; else goto c01_0159;

c01_0159:;

	goto c01_014b;

c01_015a:;

c01_0156:;

	i8 v1492 = (i8)(intptr_t)(ws+3320);
	i8 v1493 = *(i8*)(intptr_t)v1492;
	i8 v1494 = *(i8*)(intptr_t)v1493;
	i8 v1495 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1495 = v1494;

	i8 v1496 = (i8)(intptr_t)(ws+3320);
	i8 v1497 = *(i8*)(intptr_t)v1496;
	*(i8*)(intptr_t)(ws+3368) = v1497;
	i8 v1498 = (i8)(intptr_t)(f79_lexer_i_close);

	((void(*)(void))(intptr_t)v1498)();

	i8 v1499 = (i8)(intptr_t)(ws+3320);
	i8 v1500 = *(i8*)(intptr_t)v1499;
	*(i8*)(intptr_t)(ws+3680) = v1500;
	i8 v1501 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v1501)();

	i8 v1502 = (i8)(intptr_t)(ws+256);
	i8 v1503 = *(i8*)(intptr_t)v1502;
	i8 v1504 = (i8)+0;
	if (v1503==v1504) goto c01_015f; else goto c01_015e;

c01_015e:;

	i8 v1505 = (i8)(intptr_t)(ws+925);
	i1 v1506 = *(i1*)(intptr_t)v1505;
	i1 v1507 = v1506+(-1);
	i8 v1508 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1508 = v1507;

	i8 v1509 = (i8)(intptr_t)(f77_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1509)();

	i8 v1510 = (i8)(intptr_t)c01_s0031;
	*(i8*)(intptr_t)(ws+3696) = v1510;
	i8 v1511 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1511)();

	i8 v1512 = (i8)(intptr_t)(ws+256);
	i8 v1513 = *(i8*)(intptr_t)v1512;
	i8 v1514 = v1513+(+8);
	i8 v1515 = *(i8*)(intptr_t)v1514;
	*(i8*)(intptr_t)(ws+3696) = v1515;
	i8 v1516 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1516)();

	i8 v1517 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1517)();

	i8 v1518 = (i8)(intptr_t)(ws+256);
	i8 v1519 = *(i8*)(intptr_t)v1518;
	*(i8*)(intptr_t)(ws+3368) = v1519;
	i8 v1520 = (i8)(intptr_t)(f78_lexer_i_open);

	((void(*)(void))(intptr_t)v1520)();

	i1 v1521 = *(i1*)(intptr_t)(ws+3376);
	i8 v1522 = (i8)(intptr_t)(ws+3329);
	*(i1*)(intptr_t)v1522 = v1521;

	i8 v1523 = (i8)(intptr_t)(ws+3329);
	i1 v1524 = *(i1*)(intptr_t)v1523;
	i1 v1525 = (i1)+0;
	if (v1524==v1525) goto c01_0164; else goto c01_0163;

c01_0163:;

	i8 v1526 = (i8)(intptr_t)c01_s0032;
	*(i8*)(intptr_t)(ws+3648) = v1526;
	i8 v1527 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v1527)();

c01_0164:;

c01_0160:;

c01_015f:;

c01_015b:;

	goto c01_014a;

c01_014b:;

}
	void f73_StartError(void);
const i1 c01_s0033[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };
	void f11_print(void);
	void f18_print_hex_i8(void);
	void f74_EndError(void);

// lexer_i_unparseable workspace at ws+3280 length ws+1
void f84_lexer_i_unparseable(void) {

	i8 v1528 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v1528)();

	i8 v1529 = (i8)(intptr_t)c01_s0033;
	*(i8*)(intptr_t)(ws+3696) = v1529;
	i8 v1530 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1530)();

	i8 v1531 = (i8)(intptr_t)(ws+3280);
	i1 v1532 = *(i1*)(intptr_t)v1531;
	*(i1*)(intptr_t)(ws+3288) = v1532;
	i8 v1533 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(void))(intptr_t)v1533)();

	i8 v1534 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v1534)();

}
	void f83_lexer_i_getchar(void);

// lexer_i_skipwhitespace workspace at ws+3296 length ws+2
void f85_lexer_i_skipwhitespace(void) {

c01_0165:;

	i8 v1535 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1535)();

	i1 v1536 = *(i1*)(intptr_t)(ws+3312);
	i8 v1537 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v1537 = v1536;

	i8 v1538 = (i8)(intptr_t)(ws+3296);
	i1 v1539 = *(i1*)(intptr_t)v1538;
	i8 v1540 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v1540 = v1539;

	i8 v1541 = (i8)(intptr_t)(ws+3297);
	i1 v1542 = *(i1*)(intptr_t)v1541;

	if (v1542 != +32) goto c01_0168;

	goto c01_0167;

c01_0168:;

	if (v1542 != +13) goto c01_0169;

	goto c01_0167;

c01_0169:;

	if (v1542 != +10) goto c01_016a;

	i8 v1543 = (i8)(intptr_t)(ws+256);
	i8 v1544 = *(i8*)(intptr_t)v1543;
	i8 v1545 = v1544+(+16);
	i2 v1546 = *(i2*)(intptr_t)v1545;
	i2 v1547 = v1546+(+1);
	i8 v1548 = (i8)(intptr_t)(ws+256);
	i8 v1549 = *(i8*)(intptr_t)v1548;
	i8 v1550 = v1549+(+16);
	*(i2*)(intptr_t)v1550 = v1547;

	goto c01_0167;

c01_016a:;

	if (v1542 != +9) goto c01_016b;

	goto c01_0167;

c01_016b:;

	goto c01_0166;

c01_0167:;


	goto c01_0165;

c01_0166:;

	i8 v1551 = (i8)(intptr_t)(ws+3297);
	i1 v1552 = *(i1*)(intptr_t)v1551;
	i8 v1553 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1553 = v1552;

}
	void f83_lexer_i_getchar(void);
	void f82_lexer_i_ctype(void);
	void f73_StartError(void);
const i1 c01_s0034[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f11_print(void);
	void f74_EndError(void);

// lexer_i_read_identifier workspace at ws+3280 length ws+4
void f86_lexer_i_read_identifier(void) {

c01_016c:;

	i8 v1554 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1554)();

	i1 v1555 = *(i1*)(intptr_t)(ws+3312);
	i8 v1556 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1556 = v1555;

	i8 v1557 = (i8)(intptr_t)(ws+3280);
	i1 v1558 = *(i1*)(intptr_t)v1557;
	i8 v1559 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1559 = v1558;

	i8 v1560 = (i8)(intptr_t)(ws+3281);
	i1 v1561 = *(i1*)(intptr_t)v1560;
	*(i1*)(intptr_t)(ws+3312) = v1561;
	i8 v1562 = (i8)(intptr_t)(f82_lexer_i_ctype);

	((void(*)(void))(intptr_t)v1562)();

	i1 v1563 = *(i1*)(intptr_t)(ws+3314);
	i8 v1564 = (i8)(intptr_t)(ws+3283);
	*(i1*)(intptr_t)v1564 = v1563;

	i1 v1565 = *(i1*)(intptr_t)(ws+3313);
	i8 v1566 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1566 = v1565;

	i8 v1567 = (i8)(intptr_t)(ws+3282);
	i1 v1568 = *(i1*)(intptr_t)v1567;
	i1 v1569 = v1568&(+32);
	i1 v1570 = (i1)+0;
	if (v1569==v1570) goto c01_0172; else goto c01_0171;

c01_0171:;

	i8 v1571 = (i8)(intptr_t)(ws+3281);
	i1 v1572 = *(i1*)(intptr_t)v1571;
	i8 v1573 = (i8)(intptr_t)(ws+265);
	i8 v1574 = (i8)(intptr_t)(ws+393);
	i1 v1575 = *(i1*)(intptr_t)v1574;
	i8 v1576 = v1575;
	i8 v1577 = v1573+v1576;
	*(i1*)(intptr_t)v1577 = v1572;

	i8 v1578 = (i8)(intptr_t)(ws+393);
	i1 v1579 = *(i1*)(intptr_t)v1578;
	i1 v1580 = v1579+(+1);
	i8 v1581 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1581 = v1580;

	i8 v1582 = (i8)(intptr_t)(ws+393);
	i1 v1583 = *(i1*)(intptr_t)v1582;
	i1 v1584 = (i1)+128;
	if (v1583==v1584) goto c01_0176; else goto c01_0177;

c01_0176:;

	i8 v1585 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v1585)();

	i8 v1586 = (i8)(intptr_t)c01_s0034;
	*(i8*)(intptr_t)(ws+3696) = v1586;
	i8 v1587 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1587)();

	i8 v1588 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v1588)();

c01_0177:;

c01_0173:;

	goto c01_016e;

c01_0172:;

	i8 v1589 = (i8)(intptr_t)(ws+3281);
	i1 v1590 = *(i1*)(intptr_t)v1589;
	i8 v1591 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1591 = v1590;

	goto c01_016d;

c01_016e:;

	goto c01_016c;

c01_016d:;

	i1 v1592 = (i1)+0;
	i8 v1593 = (i8)(intptr_t)(ws+265);
	i8 v1594 = (i8)(intptr_t)(ws+393);
	i1 v1595 = *(i1*)(intptr_t)v1594;
	i8 v1596 = v1595;
	i8 v1597 = v1593+v1596;
	*(i1*)(intptr_t)v1597 = v1592;

}
	void f25_StrCmp(void);

// lexer_i_match_keyword workspace at ws+3280 length ws+3
void f87_lexer_i_match_keyword(void) {

	i1 v1598 = (i1)+0;
	i8 v1599 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1599 = v1598;

c01_0178:;

	i8 v1600 = (i8)(intptr_t)(ws+3281);
	i1 v1601 = *(i1*)(intptr_t)v1600;
	i1 v1602 = (i1)+39;
	if (v1601==v1602) goto c01_017d; else goto c01_017c;

c01_017c:;

	i8 v1603 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3560) = v1603;
	i8 v1604 = (i8)(intptr_t)((i1*)f2___main_s0116);
	i8 v1605 = (i8)(intptr_t)(ws+3281);
	i1 v1606 = *(i1*)(intptr_t)v1605;
	i8 v1607 = v1606;
	i1 v1608 = (i1)+3;
	i8 v1609 = ((i8)v1607)<<v1608;
	i8 v1610 = v1604+v1609;
	i8 v1611 = *(i8*)(intptr_t)v1610;
	*(i8*)(intptr_t)(ws+3568) = v1611;
	i8 v1612 = (i8)(intptr_t)(f25_StrCmp);

	((void(*)(void))(intptr_t)v1612)();

	i1 v1613 = *(i1*)(intptr_t)(ws+3576);
	i8 v1614 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1614 = v1613;

	i8 v1615 = (i8)(intptr_t)(ws+3282);
	i1 v1616 = *(i1*)(intptr_t)v1615;
	i1 v1617 = (i1)+0;
	if (v1616==v1617) goto c01_0181; else goto c01_0182;

c01_0181:;

	i8 v1618 = (i8)(intptr_t)((i1*)f2___main_s0117);
	i8 v1619 = (i8)(intptr_t)(ws+3281);
	i1 v1620 = *(i1*)(intptr_t)v1619;
	i8 v1621 = v1620;
	i8 v1622 = v1618+v1621;
	i1 v1623 = *(i1*)(intptr_t)v1622;
	i8 v1624 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1624 = v1623;

	return;

c01_0182:;

c01_017e:;

	i8 v1625 = (i8)(intptr_t)(ws+3281);
	i1 v1626 = *(i1*)(intptr_t)v1625;
	i1 v1627 = v1626+(+1);
	i8 v1628 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1628 = v1627;

	goto c01_0178;

c01_017d:;

	i1 v1629 = (i1)+33;
	i8 v1630 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1630 = v1629;

}
	void f83_lexer_i_getchar(void);
	void f83_lexer_i_getchar(void);
	void f82_lexer_i_ctype(void);
	void f83_lexer_i_getchar(void);
	void f26_ToLower(void);
	void f82_lexer_i_ctype(void);
	void f73_StartError(void);
const i1 c01_s0035[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f11_print(void);
	void f74_EndError(void);

// lexer_i_read_number workspace at ws+3296 length ws+11
void f88_lexer_i_read_number(void) {

	i4 v1631 = (i4)+0;
	i8 v1632 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1632 = v1631;

	i4 v1633 = (i4)+10;
	i8 v1634 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1634 = v1633;

	i8 v1635 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1635)();

	i1 v1636 = *(i1*)(intptr_t)(ws+3312);
	i8 v1637 = (i8)(intptr_t)(ws+3302);
	*(i1*)(intptr_t)v1637 = v1636;

	i8 v1638 = (i8)(intptr_t)(ws+3302);
	i1 v1639 = *(i1*)(intptr_t)v1638;
	i8 v1640 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1640 = v1639;

	i8 v1641 = (i8)(intptr_t)(ws+3303);
	i1 v1642 = *(i1*)(intptr_t)v1641;
	i1 v1643 = (i1)+48;
	if (v1642==v1643) goto c01_0186; else goto c01_0187;

c01_0186:;

	i8 v1644 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1644)();

	i1 v1645 = *(i1*)(intptr_t)(ws+3312);
	i8 v1646 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1646 = v1645;

	i8 v1647 = (i8)(intptr_t)(ws+3304);
	i1 v1648 = *(i1*)(intptr_t)v1647;
	i8 v1649 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1649 = v1648;

	i8 v1650 = (i8)(intptr_t)(ws+3303);
	i1 v1651 = *(i1*)(intptr_t)v1650;

	if (v1651 != +98) goto c01_0189;

	i4 v1652 = (i4)+2;
	i8 v1653 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1653 = v1652;

	goto c01_0188;

c01_0189:;

	if (v1651 != +111) goto c01_018a;

	i4 v1654 = (i4)+8;
	i8 v1655 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1655 = v1654;

	goto c01_0188;

c01_018a:;

	if (v1651 != +100) goto c01_018b;

	i4 v1656 = (i4)+10;
	i8 v1657 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1657 = v1656;

	goto c01_0188;

c01_018b:;

	if (v1651 != +120) goto c01_018c;

	i4 v1658 = (i4)+16;
	i8 v1659 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1659 = v1658;

	goto c01_0188;

c01_018c:;

	i8 v1660 = (i8)(intptr_t)(ws+3303);
	i1 v1661 = *(i1*)(intptr_t)v1660;
	i8 v1662 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1662 = v1661;

	i8 v1663 = (i8)(intptr_t)(ws+3303);
	i1 v1664 = *(i1*)(intptr_t)v1663;
	*(i1*)(intptr_t)(ws+3312) = v1664;
	i8 v1665 = (i8)(intptr_t)(f82_lexer_i_ctype);

	((void(*)(void))(intptr_t)v1665)();

	i1 v1666 = *(i1*)(intptr_t)(ws+3314);
	i8 v1667 = (i8)(intptr_t)(ws+3301);
	*(i1*)(intptr_t)v1667 = v1666;

	i1 v1668 = *(i1*)(intptr_t)(ws+3313);
	i8 v1669 = (i8)(intptr_t)(ws+3300);
	*(i1*)(intptr_t)v1669 = v1668;

	i8 v1670 = (i8)(intptr_t)(ws+3300);
	i1 v1671 = *(i1*)(intptr_t)v1670;
	i1 v1672 = v1671&(+32);
	i1 v1673 = (i1)+0;
	if (v1672==v1673) goto c01_0190; else goto c01_0191;

c01_0190:;

	return;

c01_0191:;

c01_018d:;

c01_0188:;


	goto c01_0183;

c01_0187:;

	i8 v1674 = (i8)(intptr_t)(ws+3303);
	i1 v1675 = *(i1*)(intptr_t)v1674;
	i8 v1676 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1676 = v1675;

c01_0183:;

c01_0192:;

	i8 v1677 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1677)();

	i1 v1678 = *(i1*)(intptr_t)(ws+3312);
	i8 v1679 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v1679 = v1678;

	i8 v1680 = (i8)(intptr_t)(ws+3305);
	i1 v1681 = *(i1*)(intptr_t)v1680;
	*(i1*)(intptr_t)(ws+3312) = v1681;
	i8 v1682 = (i8)(intptr_t)(f26_ToLower);

	((void(*)(void))(intptr_t)v1682)();

	i1 v1683 = *(i1*)(intptr_t)(ws+3313);
	i8 v1684 = (i8)(intptr_t)(ws+3306);
	*(i1*)(intptr_t)v1684 = v1683;

	i8 v1685 = (i8)(intptr_t)(ws+3306);
	i1 v1686 = *(i1*)(intptr_t)v1685;
	i8 v1687 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1687 = v1686;

	i8 v1688 = (i8)(intptr_t)(ws+3303);
	i1 v1689 = *(i1*)(intptr_t)v1688;
	i1 v1690 = (i1)+95;
	if (v1689==v1690) goto c01_0197; else goto c01_0198;

c01_0197:;

	goto c01_0192;

c01_0198:;

c01_0194:;

	i8 v1691 = (i8)(intptr_t)(ws+3303);
	i1 v1692 = *(i1*)(intptr_t)v1691;
	*(i1*)(intptr_t)(ws+3312) = v1692;
	i8 v1693 = (i8)(intptr_t)(f82_lexer_i_ctype);

	((void(*)(void))(intptr_t)v1693)();

	i1 v1694 = *(i1*)(intptr_t)(ws+3314);
	i8 v1695 = (i8)(intptr_t)(ws+3301);
	*(i1*)(intptr_t)v1695 = v1694;

	i1 v1696 = *(i1*)(intptr_t)(ws+3313);
	i8 v1697 = (i8)(intptr_t)(ws+3300);
	*(i1*)(intptr_t)v1697 = v1696;

	i8 v1698 = (i8)(intptr_t)(ws+3300);
	i1 v1699 = *(i1*)(intptr_t)v1698;
	i1 v1700 = v1699&(+32);
	i1 v1701 = (i1)+0;
	if (v1700==v1701) goto c01_019c; else goto c01_019d;

c01_019c:;

	i8 v1702 = (i8)(intptr_t)(ws+3303);
	i1 v1703 = *(i1*)(intptr_t)v1702;
	i8 v1704 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1704 = v1703;

	goto c01_0193;

c01_019d:;

c01_0199:;

	i8 v1705 = (i8)(intptr_t)(ws+3303);
	i1 v1706 = *(i1*)(intptr_t)v1705;
	i1 v1707 = (i1)+97;
	if (v1706<v1707) goto c01_01a2; else goto c01_01a1;

c01_01a1:;

	i8 v1708 = (i8)(intptr_t)(ws+3303);
	i1 v1709 = *(i1*)(intptr_t)v1708;
	i1 v1710 = v1709+(-87);
	i8 v1711 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1711 = v1710;

	goto c01_019e;

c01_01a2:;

	i8 v1712 = (i8)(intptr_t)(ws+3303);
	i1 v1713 = *(i1*)(intptr_t)v1712;
	i1 v1714 = v1713+(-48);
	i8 v1715 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1715 = v1714;

c01_019e:;

	i8 v1716 = (i8)(intptr_t)(ws+3303);
	i1 v1717 = *(i1*)(intptr_t)v1716;
	i8 v1718 = (i8)(intptr_t)(ws+3296);
	i4 v1719 = *(i4*)(intptr_t)v1718;
	i1 v1720 = (s1)(s4)v1719;
	if (v1717<v1720) goto c01_01a7; else goto c01_01a6;

c01_01a6:;

	i8 v1721 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v1721)();

	i8 v1722 = (i8)(intptr_t)c01_s0035;
	*(i8*)(intptr_t)(ws+3696) = v1722;
	i8 v1723 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1723)();

	i8 v1724 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v1724)();

c01_01a7:;

c01_01a3:;

	i8 v1725 = (i8)(intptr_t)(ws+396);
	i4 v1726 = *(i4*)(intptr_t)v1725;
	i8 v1727 = (i8)(intptr_t)(ws+3296);
	i4 v1728 = *(i4*)(intptr_t)v1727;
	i4 v1729 = v1726*v1728;
	i8 v1730 = (i8)(intptr_t)(ws+3303);
	i1 v1731 = *(i1*)(intptr_t)v1730;
	i4 v1732 = v1731;
	i4 v1733 = v1729+v1732;
	i8 v1734 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1734 = v1733;

	goto c01_0192;

c01_0193:;

}
	void f73_StartError(void);
const i1 c01_s0036[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };
	void f11_print(void);
	void f11_print(void);
	void f74_EndError(void);

// lexer_i_malformed workspace at ws+3312 length ws+8
void f89_lexer_i_malformed(void) {

	i8 v1735 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v1735)();

	i8 v1736 = (i8)(intptr_t)c01_s0036;
	*(i8*)(intptr_t)(ws+3696) = v1736;
	i8 v1737 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1737)();

	i8 v1738 = (i8)(intptr_t)(ws+3312);
	i8 v1739 = *(i8*)(intptr_t)v1738;
	*(i8*)(intptr_t)(ws+3696) = v1739;
	i8 v1740 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1740)();

	i8 v1741 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v1741)();

}
	void f83_lexer_i_getchar(void);
const i1 c01_s0037[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };
	void f89_lexer_i_malformed(void);

// lexer_i_get_escaped workspace at ws+3304 length ws+2
void f90_lexer_i_get_escaped(void) {

	i8 v1742 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1742)();

	i1 v1743 = *(i1*)(intptr_t)(ws+3312);
	i8 v1744 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v1744 = v1743;

	i8 v1745 = (i8)(intptr_t)(ws+3305);
	i1 v1746 = *(i1*)(intptr_t)v1745;
	i8 v1747 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1747 = v1746;

	i8 v1748 = (i8)(intptr_t)(ws+3304);
	i1 v1749 = *(i1*)(intptr_t)v1748;

	if (v1749 != +110) goto c01_01a9;

	i1 v1750 = (i1)+10;
	i8 v1751 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1751 = v1750;

	goto c01_01a8;

c01_01a9:;

	if (v1749 != +114) goto c01_01aa;

	i1 v1752 = (i1)+13;
	i8 v1753 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1753 = v1752;

	goto c01_01a8;

c01_01aa:;

	if (v1749 != +116) goto c01_01ab;

	i1 v1754 = (i1)+9;
	i8 v1755 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1755 = v1754;

	goto c01_01a8;

c01_01ab:;

	if (v1749 != +92) goto c01_01ac;

	i1 v1756 = (i1)+92;
	i8 v1757 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1757 = v1756;

	goto c01_01a8;

c01_01ac:;

	if (v1749 != +39) goto c01_01ad;

	i1 v1758 = (i1)+39;
	i8 v1759 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1759 = v1758;

	goto c01_01a8;

c01_01ad:;

	if (v1749 != +34) goto c01_01ae;

	i1 v1760 = (i1)+34;
	i8 v1761 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1761 = v1760;

	goto c01_01a8;

c01_01ae:;

	if (v1749 != +48) goto c01_01af;

	i1 v1762 = (i1)+0;
	i8 v1763 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1763 = v1762;

	goto c01_01a8;

c01_01af:;

	i8 v1764 = (i8)(intptr_t)c01_s0037;
	*(i8*)(intptr_t)(ws+3312) = v1764;
	i8 v1765 = (i8)(intptr_t)(f89_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1765)();

c01_01a8:;


}
	void f83_lexer_i_getchar(void);
const i1 c01_s0038[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f89_lexer_i_malformed(void);
	void f90_lexer_i_get_escaped(void);
	void f73_StartError(void);
const i1 c01_s0039[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f11_print(void);
	void f74_EndError(void);

// lexer_i_read_string workspace at ws+3296 length ws+3
void f91_lexer_i_read_string(void) {

	i1 v1766 = (i1)+0;
	i8 v1767 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1767 = v1766;

c01_01b0:;

	i8 v1768 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1768)();

	i1 v1769 = *(i1*)(intptr_t)(ws+3312);
	i8 v1770 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v1770 = v1769;

	i8 v1771 = (i8)(intptr_t)(ws+3296);
	i1 v1772 = *(i1*)(intptr_t)v1771;
	i8 v1773 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v1773 = v1772;

	i8 v1774 = (i8)(intptr_t)(ws+3297);
	i1 v1775 = *(i1*)(intptr_t)v1774;
	i1 v1776 = (i1)+32;
	if (v1775<v1776) goto c01_01b5; else goto c01_01b6;

c01_01b5:;

	i8 v1777 = (i8)(intptr_t)c01_s0038;
	*(i8*)(intptr_t)(ws+3312) = v1777;
	i8 v1778 = (i8)(intptr_t)(f89_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1778)();

c01_01b6:;

c01_01b2:;

	i8 v1779 = (i8)(intptr_t)(ws+3297);
	i1 v1780 = *(i1*)(intptr_t)v1779;

	if (v1780 != +34) goto c01_01b8;

	goto c01_01b1;

c01_01b8:;

	if (v1780 != +92) goto c01_01b9;

	i8 v1781 = (i8)(intptr_t)(f90_lexer_i_get_escaped);

	((void(*)(void))(intptr_t)v1781)();

	i1 v1782 = *(i1*)(intptr_t)(ws+3304);
	i8 v1783 = (i8)(intptr_t)(ws+3298);
	*(i1*)(intptr_t)v1783 = v1782;

	i8 v1784 = (i8)(intptr_t)(ws+3298);
	i1 v1785 = *(i1*)(intptr_t)v1784;
	i8 v1786 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v1786 = v1785;

c01_01b9:;

c01_01b7:;


	i8 v1787 = (i8)(intptr_t)(ws+3297);
	i1 v1788 = *(i1*)(intptr_t)v1787;
	i8 v1789 = (i8)(intptr_t)(ws+265);
	i8 v1790 = (i8)(intptr_t)(ws+393);
	i1 v1791 = *(i1*)(intptr_t)v1790;
	i8 v1792 = v1791;
	i8 v1793 = v1789+v1792;
	*(i1*)(intptr_t)v1793 = v1788;

	i8 v1794 = (i8)(intptr_t)(ws+393);
	i1 v1795 = *(i1*)(intptr_t)v1794;
	i1 v1796 = v1795+(+1);
	i8 v1797 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1797 = v1796;

	i8 v1798 = (i8)(intptr_t)(ws+393);
	i1 v1799 = *(i1*)(intptr_t)v1798;
	i1 v1800 = (i1)+128;
	if (v1799==v1800) goto c01_01bd; else goto c01_01be;

c01_01bd:;

	i8 v1801 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v1801)();

	i8 v1802 = (i8)(intptr_t)c01_s0039;
	*(i8*)(intptr_t)(ws+3696) = v1802;
	i8 v1803 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v1803)();

	i8 v1804 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v1804)();

c01_01be:;

c01_01ba:;

	goto c01_01b0;

c01_01b1:;

	i1 v1805 = (i1)+0;
	i8 v1806 = (i8)(intptr_t)(ws+265);
	i8 v1807 = (i8)(intptr_t)(ws+393);
	i1 v1808 = *(i1*)(intptr_t)v1807;
	i8 v1809 = v1808;
	i8 v1810 = v1806+v1809;
	*(i1*)(intptr_t)v1810 = v1805;

}
const i1 c01_s003a[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f89_lexer_i_malformed(void);

// malformed workspace at ws+3288 length ws+0
void f93_malformed(void) {

	i8 v1811 = (i8)(intptr_t)c01_s003a;
	*(i8*)(intptr_t)(ws+3312) = v1811;
	i8 v1812 = (i8)(intptr_t)(f89_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1812)();

}
	void f83_lexer_i_getchar(void);
	void f93_malformed(void);
	void f90_lexer_i_get_escaped(void);
	void f83_lexer_i_getchar(void);
	void f93_malformed(void);

// lexer_i_read_char workspace at ws+3280 length ws+4
void f92_lexer_i_read_char(void) {


	i8 v1813 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1813)();

	i1 v1814 = *(i1*)(intptr_t)(ws+3312);
	i8 v1815 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1815 = v1814;

	i8 v1816 = (i8)(intptr_t)(ws+3280);
	i1 v1817 = *(i1*)(intptr_t)v1816;
	i8 v1818 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1818 = v1817;

	i8 v1819 = (i8)(intptr_t)(ws+3281);
	i1 v1820 = *(i1*)(intptr_t)v1819;
	i1 v1821 = (i1)+32;
	if (v1820<v1821) goto c01_01c4; else goto c01_01c6;

c01_01c6:;

	i8 v1822 = (i8)(intptr_t)(ws+3281);
	i1 v1823 = *(i1*)(intptr_t)v1822;
	i1 v1824 = (i1)+39;
	if (v1823==v1824) goto c01_01c4; else goto c01_01c5;

c01_01c4:;

	i8 v1825 = (i8)(intptr_t)(f93_malformed);

	((void(*)(void))(intptr_t)v1825)();

c01_01c5:;

c01_01bf:;

	i8 v1826 = (i8)(intptr_t)(ws+3281);
	i1 v1827 = *(i1*)(intptr_t)v1826;
	i1 v1828 = (i1)+92;
	if (v1827==v1828) goto c01_01ca; else goto c01_01cb;

c01_01ca:;

	i8 v1829 = (i8)(intptr_t)(f90_lexer_i_get_escaped);

	((void(*)(void))(intptr_t)v1829)();

	i1 v1830 = *(i1*)(intptr_t)(ws+3304);
	i8 v1831 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1831 = v1830;

	i8 v1832 = (i8)(intptr_t)(ws+3282);
	i1 v1833 = *(i1*)(intptr_t)v1832;
	i8 v1834 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1834 = v1833;

c01_01cb:;

c01_01c7:;

	i8 v1835 = (i8)(intptr_t)(ws+3281);
	i1 v1836 = *(i1*)(intptr_t)v1835;
	i4 v1837 = v1836;
	i8 v1838 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1838 = v1837;

	i8 v1839 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1839)();

	i1 v1840 = *(i1*)(intptr_t)(ws+3312);
	i8 v1841 = (i8)(intptr_t)(ws+3283);
	*(i1*)(intptr_t)v1841 = v1840;

	i8 v1842 = (i8)(intptr_t)(ws+3283);
	i1 v1843 = *(i1*)(intptr_t)v1842;
	i8 v1844 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1844 = v1843;

	i8 v1845 = (i8)(intptr_t)(ws+3281);
	i1 v1846 = *(i1*)(intptr_t)v1845;
	i1 v1847 = (i1)+39;
	if (v1846==v1847) goto c01_01d0; else goto c01_01cf;

c01_01cf:;

	i8 v1848 = (i8)(intptr_t)(f93_malformed);

	((void(*)(void))(intptr_t)v1848)();

c01_01d0:;

c01_01cc:;

}
const i1 c01_s003b[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f89_lexer_i_malformed(void);

// malformed_include workspace at ws+3288 length ws+0
void f95_malformed_include(void) {

	i8 v1849 = (i8)(intptr_t)c01_s003b;
	*(i8*)(intptr_t)(ws+3312) = v1849;
	i8 v1850 = (i8)(intptr_t)(f89_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1850)();

}
	void f85_lexer_i_skipwhitespace(void);
	void f83_lexer_i_getchar(void);
	void f95_malformed_include(void);
	void f91_lexer_i_read_string(void);
	void f85_lexer_i_skipwhitespace(void);
	void f83_lexer_i_getchar(void);
	void f95_malformed_include(void);
	void f80_LexerIncludeFile(void);

// lexer_i_include workspace at ws+3280 length ws+3
void f94_lexer_i_include(void) {


	i8 v1851 = (i8)(intptr_t)(f85_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1851)();

	i8 v1852 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1852)();

	i1 v1853 = *(i1*)(intptr_t)(ws+3312);
	i8 v1854 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1854 = v1853;

	i8 v1855 = (i8)(intptr_t)(ws+3280);
	i1 v1856 = *(i1*)(intptr_t)v1855;
	i8 v1857 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1857 = v1856;

	i8 v1858 = (i8)(intptr_t)(ws+3281);
	i1 v1859 = *(i1*)(intptr_t)v1858;
	i1 v1860 = (i1)+34;
	if (v1859==v1860) goto c01_01d5; else goto c01_01d4;

c01_01d4:;

	i8 v1861 = (i8)(intptr_t)(f95_malformed_include);

	((void(*)(void))(intptr_t)v1861)();

c01_01d5:;

c01_01d1:;

	i8 v1862 = (i8)(intptr_t)(f91_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1862)();

	i8 v1863 = (i8)(intptr_t)(f85_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1863)();

	i8 v1864 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1864)();

	i1 v1865 = *(i1*)(intptr_t)(ws+3312);
	i8 v1866 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1866 = v1865;

	i8 v1867 = (i8)(intptr_t)(ws+3282);
	i1 v1868 = *(i1*)(intptr_t)v1867;
	i8 v1869 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1869 = v1868;

	i8 v1870 = (i8)(intptr_t)(ws+3281);
	i1 v1871 = *(i1*)(intptr_t)v1870;
	i1 v1872 = (i1)+59;
	if (v1871==v1872) goto c01_01da; else goto c01_01d9;

c01_01d9:;

	i8 v1873 = (i8)(intptr_t)(f95_malformed_include);

	((void(*)(void))(intptr_t)v1873)();

c01_01da:;

c01_01d6:;

	i8 v1874 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3288) = v1874;
	i8 v1875 = (i8)(intptr_t)(f80_LexerIncludeFile);

	((void(*)(void))(intptr_t)v1875)();

}
	void f85_lexer_i_skipwhitespace(void);
	void f88_lexer_i_read_number(void);
	void f85_lexer_i_skipwhitespace(void);
	void f83_lexer_i_getchar(void);
const i1 c01_s003c[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f89_lexer_i_malformed(void);
	void f91_lexer_i_read_string(void);
	void f33_Free(void);
	void f71_InternalStrDup(void);

// lexer_i_line_directive workspace at ws+3280 length ws+16
void f96_lexer_i_line_directive(void) {

	i8 v1876 = (i8)(intptr_t)(f85_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1876)();

	i8 v1877 = (i8)(intptr_t)(f88_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1877)();

	i8 v1878 = (i8)(intptr_t)(f85_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1878)();

	i8 v1879 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1879)();

	i1 v1880 = *(i1*)(intptr_t)(ws+3312);
	i8 v1881 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1881 = v1880;

	i8 v1882 = (i8)(intptr_t)(ws+3280);
	i1 v1883 = *(i1*)(intptr_t)v1882;
	i8 v1884 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1884 = v1883;

	i8 v1885 = (i8)(intptr_t)(ws+3281);
	i1 v1886 = *(i1*)(intptr_t)v1885;
	i1 v1887 = (i1)+34;
	if (v1886==v1887) goto c01_01df; else goto c01_01de;

c01_01de:;

	i8 v1888 = (i8)(intptr_t)c01_s003c;
	*(i8*)(intptr_t)(ws+3312) = v1888;
	i8 v1889 = (i8)(intptr_t)(f89_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1889)();

c01_01df:;

c01_01db:;

	i8 v1890 = (i8)(intptr_t)(f91_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1890)();

	i8 v1891 = (i8)(intptr_t)(ws+396);
	i4 v1892 = *(i4*)(intptr_t)v1891;
	i2 v1893 = (s2)(s4)v1892;
	i8 v1894 = (i8)(intptr_t)(ws+256);
	i8 v1895 = *(i8*)(intptr_t)v1894;
	i8 v1896 = v1895+(+16);
	*(i2*)(intptr_t)v1896 = v1893;

	i8 v1897 = (i8)(intptr_t)(ws+256);
	i8 v1898 = *(i8*)(intptr_t)v1897;
	i8 v1899 = v1898+(+8);
	i8 v1900 = *(i8*)(intptr_t)v1899;
	*(i8*)(intptr_t)(ws+3680) = v1900;
	i8 v1901 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v1901)();

	i8 v1902 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3464) = v1902;
	i8 v1903 = (i8)(intptr_t)(f71_InternalStrDup);

	((void(*)(void))(intptr_t)v1903)();

	i8 v1904 = *(i8*)(intptr_t)(ws+3472);
	i8 v1905 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v1905 = v1904;

	i8 v1906 = (i8)(intptr_t)(ws+3288);
	i8 v1907 = *(i8*)(intptr_t)v1906;
	i8 v1908 = (i8)(intptr_t)(ws+256);
	i8 v1909 = *(i8*)(intptr_t)v1908;
	i8 v1910 = v1909+(+8);
	*(i8*)(intptr_t)v1910 = v1907;

}
	void f85_lexer_i_skipwhitespace(void);
	void f83_lexer_i_getchar(void);
	void f86_lexer_i_read_identifier(void);
const i1 c01_s003d[] = { 0x6c,0x69,0x6e,0x65,0 };
	void f25_StrCmp(void);
	void f96_lexer_i_line_directive(void);
	void f83_lexer_i_getchar(void);
	void f83_lexer_i_getchar(void);
	void f83_lexer_i_getchar(void);
	void f83_lexer_i_getchar(void);
	void f84_lexer_i_unparseable(void);
	void f83_lexer_i_getchar(void);
	void f84_lexer_i_unparseable(void);
	void f83_lexer_i_getchar(void);
	void f91_lexer_i_read_string(void);
	void f92_lexer_i_read_char(void);
	void f82_lexer_i_ctype(void);
	void f88_lexer_i_read_number(void);
	void f86_lexer_i_read_identifier(void);
	void f87_lexer_i_match_keyword(void);
	void f84_lexer_i_unparseable(void);
	void f94_lexer_i_include(void);

// LexerReadToken workspace at ws+3264 length ws+12
void f81_LexerReadToken(void) {














c01_01e0:;

	i8 v1911 = (i8)(intptr_t)(f85_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1911)();

	i8 v1912 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1912)();

	i1 v1913 = *(i1*)(intptr_t)(ws+3312);
	i8 v1914 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v1914 = v1913;

	i8 v1915 = (i8)(intptr_t)(ws+3265);
	i1 v1916 = *(i1*)(intptr_t)v1915;
	i8 v1917 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1917 = v1916;

	i8 v1918 = (i8)(intptr_t)(ws+3266);
	i1 v1919 = *(i1*)(intptr_t)v1918;
	i1 v1920 = (i1)+35;
	if (v1919==v1920) goto c01_01e5; else goto c01_01e6;

c01_01e5:;

	i1 v1921 = (i1)+0;
	i8 v1922 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1922 = v1921;

	i8 v1923 = (i8)(intptr_t)(f86_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1923)();

	i8 v1924 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3560) = v1924;
	i8 v1925 = (i8)(intptr_t)c01_s003d;
	*(i8*)(intptr_t)(ws+3568) = v1925;
	i8 v1926 = (i8)(intptr_t)(f25_StrCmp);

	((void(*)(void))(intptr_t)v1926)();

	i1 v1927 = *(i1*)(intptr_t)(ws+3576);
	i8 v1928 = (i8)(intptr_t)(ws+3267);
	*(i1*)(intptr_t)v1928 = v1927;

	i8 v1929 = (i8)(intptr_t)(ws+3267);
	i1 v1930 = *(i1*)(intptr_t)v1929;
	i1 v1931 = (i1)+0;
	if (v1930==v1931) goto c01_01ea; else goto c01_01eb;

c01_01ea:;

	i8 v1932 = (i8)(intptr_t)(f96_lexer_i_line_directive);

	((void(*)(void))(intptr_t)v1932)();

c01_01eb:;

c01_01e7:;

c01_01ec:;

	i8 v1933 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1933)();

	i1 v1934 = *(i1*)(intptr_t)(ws+3312);
	i8 v1935 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v1935 = v1934;

	i8 v1936 = (i8)(intptr_t)(ws+3268);
	i1 v1937 = *(i1*)(intptr_t)v1936;
	i8 v1938 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1938 = v1937;

	i8 v1939 = (i8)(intptr_t)(ws+3266);
	i1 v1940 = *(i1*)(intptr_t)v1939;
	i1 v1941 = (i1)+10;
	if (v1940==v1941) goto c01_01f5; else goto c01_01f8;

c01_01f8:;

	i8 v1942 = (i8)(intptr_t)(ws+3266);
	i1 v1943 = *(i1*)(intptr_t)v1942;
	i1 v1944 = (i1)+13;
	if (v1943==v1944) goto c01_01f5; else goto c01_01f7;

c01_01f7:;

	i8 v1945 = (i8)(intptr_t)(ws+3266);
	i1 v1946 = *(i1*)(intptr_t)v1945;
	i1 v1947 = (i1)+0;
	if (v1946==v1947) goto c01_01f5; else goto c01_01f6;

c01_01f5:;

	i8 v1948 = (i8)(intptr_t)(ws+3266);
	i1 v1949 = *(i1*)(intptr_t)v1948;
	i8 v1950 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1950 = v1949;

	goto c01_01ed;

c01_01f6:;

c01_01ee:;

	goto c01_01ec;

c01_01ed:;

	goto c01_01e0;

c01_01e6:;

c01_01e2:;

	i8 v1951 = (i8)(intptr_t)(ws+3266);
	i1 v1952 = *(i1*)(intptr_t)v1951;

	if (v1952 != +0) goto c01_01fa;

	i1 v1953 = (i1)+0;
	i8 v1954 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1954 = v1953;

	goto c01_01f9;

c01_01fa:;

	if (v1952 != +58) goto c01_01fb;

	i8 v1955 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1955)();

	i1 v1956 = *(i1*)(intptr_t)(ws+3312);
	i8 v1957 = (i8)(intptr_t)(ws+3269);
	*(i1*)(intptr_t)v1957 = v1956;

	i8 v1958 = (i8)(intptr_t)(ws+3269);
	i1 v1959 = *(i1*)(intptr_t)v1958;
	i8 v1960 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1960 = v1959;

	i8 v1961 = (i8)(intptr_t)(ws+3266);
	i1 v1962 = *(i1*)(intptr_t)v1961;
	i1 v1963 = (i1)+61;
	if (v1962==v1963) goto c01_01ff; else goto c01_0200;

c01_01ff:;

	i1 v1964 = (i1)+2;
	i8 v1965 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1965 = v1964;

	goto c01_01fc;

c01_0200:;

	i8 v1966 = (i8)(intptr_t)(ws+3266);
	i1 v1967 = *(i1*)(intptr_t)v1966;
	i8 v1968 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1968 = v1967;

	i1 v1969 = (i1)+6;
	i8 v1970 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1970 = v1969;

c01_01fc:;

	goto c01_01f9;

c01_01fb:;

	if (v1952 != +60) goto c01_0201;

	i8 v1971 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1971)();

	i1 v1972 = *(i1*)(intptr_t)(ws+3312);
	i8 v1973 = (i8)(intptr_t)(ws+3270);
	*(i1*)(intptr_t)v1973 = v1972;

	i8 v1974 = (i8)(intptr_t)(ws+3270);
	i1 v1975 = *(i1*)(intptr_t)v1974;
	i8 v1976 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1976 = v1975;

	i8 v1977 = (i8)(intptr_t)(ws+3266);
	i1 v1978 = *(i1*)(intptr_t)v1977;

	if (v1978 != +60) goto c01_0203;

	i1 v1979 = (i1)+57;
	i8 v1980 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1980 = v1979;

	goto c01_0202;

c01_0203:;

	if (v1978 != +61) goto c01_0204;

	i1 v1981 = (i1)+52;
	i8 v1982 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1982 = v1981;

	goto c01_0202;

c01_0204:;

	i8 v1983 = (i8)(intptr_t)(ws+3266);
	i1 v1984 = *(i1*)(intptr_t)v1983;
	i8 v1985 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1985 = v1984;

	i1 v1986 = (i1)+51;
	i8 v1987 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1987 = v1986;

c01_0202:;


	goto c01_01f9;

c01_0201:;

	if (v1952 != +61) goto c01_0205;

	i8 v1988 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1988)();

	i1 v1989 = *(i1*)(intptr_t)(ws+3312);
	i8 v1990 = (i8)(intptr_t)(ws+3271);
	*(i1*)(intptr_t)v1990 = v1989;

	i8 v1991 = (i8)(intptr_t)(ws+3271);
	i1 v1992 = *(i1*)(intptr_t)v1991;
	i8 v1993 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1993 = v1992;

	i8 v1994 = (i8)(intptr_t)(ws+3266);
	i1 v1995 = *(i1*)(intptr_t)v1994;
	i1 v1996 = (i1)+61;
	if (v1995==v1996) goto c01_0209; else goto c01_020a;

c01_0209:;

	i1 v1997 = (i1)+55;
	i8 v1998 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1998 = v1997;

	goto c01_0206;

c01_020a:;

	i8 v1999 = (i8)(intptr_t)(ws+3266);
	i1 v2000 = *(i1*)(intptr_t)v1999;
	*(i1*)(intptr_t)(ws+3280) = v2000;
	i8 v2001 = (i8)(intptr_t)(f84_lexer_i_unparseable);

	((void(*)(void))(intptr_t)v2001)();

c01_0206:;

	goto c01_01f9;

c01_0205:;

	if (v1952 != +33) goto c01_020b;

	i8 v2002 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v2002)();

	i1 v2003 = *(i1*)(intptr_t)(ws+3312);
	i8 v2004 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v2004 = v2003;

	i8 v2005 = (i8)(intptr_t)(ws+3272);
	i1 v2006 = *(i1*)(intptr_t)v2005;
	i8 v2007 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2007 = v2006;

	i8 v2008 = (i8)(intptr_t)(ws+3266);
	i1 v2009 = *(i1*)(intptr_t)v2008;
	i1 v2010 = (i1)+61;
	if (v2009==v2010) goto c01_020f; else goto c01_0210;

c01_020f:;

	i1 v2011 = (i1)+56;
	i8 v2012 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2012 = v2011;

	goto c01_020c;

c01_0210:;

	i8 v2013 = (i8)(intptr_t)(ws+3266);
	i1 v2014 = *(i1*)(intptr_t)v2013;
	*(i1*)(intptr_t)(ws+3280) = v2014;
	i8 v2015 = (i8)(intptr_t)(f84_lexer_i_unparseable);

	((void(*)(void))(intptr_t)v2015)();

c01_020c:;

	goto c01_01f9;

c01_020b:;

	if (v1952 != +62) goto c01_0211;

	i8 v2016 = (i8)(intptr_t)(f83_lexer_i_getchar);

	((void(*)(void))(intptr_t)v2016)();

	i1 v2017 = *(i1*)(intptr_t)(ws+3312);
	i8 v2018 = (i8)(intptr_t)(ws+3273);
	*(i1*)(intptr_t)v2018 = v2017;

	i8 v2019 = (i8)(intptr_t)(ws+3273);
	i1 v2020 = *(i1*)(intptr_t)v2019;
	i8 v2021 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2021 = v2020;

	i8 v2022 = (i8)(intptr_t)(ws+3266);
	i1 v2023 = *(i1*)(intptr_t)v2022;

	if (v2023 != +62) goto c01_0213;

	i1 v2024 = (i1)+58;
	i8 v2025 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2025 = v2024;

	goto c01_0212;

c01_0213:;

	if (v2023 != +61) goto c01_0214;

	i1 v2026 = (i1)+54;
	i8 v2027 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2027 = v2026;

	goto c01_0212;

c01_0214:;

	i8 v2028 = (i8)(intptr_t)(ws+3266);
	i1 v2029 = *(i1*)(intptr_t)v2028;
	i8 v2030 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2030 = v2029;

	i1 v2031 = (i1)+53;
	i8 v2032 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2032 = v2031;

c01_0212:;


	goto c01_01f9;

c01_0211:;

	if (v1952 != +34) goto c01_0215;

	i8 v2033 = (i8)(intptr_t)(f91_lexer_i_read_string);

	((void(*)(void))(intptr_t)v2033)();

	i1 v2034 = (i1)+41;
	i8 v2035 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2035 = v2034;

	goto c01_01f9;

c01_0215:;

	if (v1952 != +39) goto c01_0216;

	i8 v2036 = (i8)(intptr_t)(f92_lexer_i_read_char);

	((void(*)(void))(intptr_t)v2036)();

	i1 v2037 = (i1)+34;
	i8 v2038 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2038 = v2037;

	goto c01_01f9;

c01_0216:;

	i8 v2039 = (i8)(intptr_t)(ws+3266);
	i1 v2040 = *(i1*)(intptr_t)v2039;
	*(i1*)(intptr_t)(ws+3312) = v2040;
	i8 v2041 = (i8)(intptr_t)(f82_lexer_i_ctype);

	((void(*)(void))(intptr_t)v2041)();

	i1 v2042 = *(i1*)(intptr_t)(ws+3314);
	i8 v2043 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2043 = v2042;

	i1 v2044 = *(i1*)(intptr_t)(ws+3313);
	i8 v2045 = (i8)(intptr_t)(ws+3274);
	*(i1*)(intptr_t)v2045 = v2044;

	i8 v2046 = (i8)(intptr_t)(ws+3274);
	i1 v2047 = *(i1*)(intptr_t)v2046;
	i1 v2048 = v2047&(+128);
	i1 v2049 = (i1)+0;
	if (v2048==v2049) goto c01_021b; else goto c01_021a;

c01_021a:;

	goto c01_0217;

c01_021b:;

	i8 v2050 = (i8)(intptr_t)(ws+3274);
	i1 v2051 = *(i1*)(intptr_t)v2050;
	i1 v2052 = v2051&(+1);
	i1 v2053 = (i1)+0;
	if (v2052==v2053) goto c01_021f; else goto c01_021e;

c01_021e:;

	i8 v2054 = (i8)(intptr_t)(ws+3266);
	i1 v2055 = *(i1*)(intptr_t)v2054;
	i8 v2056 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2056 = v2055;

	i8 v2057 = (i8)(intptr_t)(f88_lexer_i_read_number);

	((void(*)(void))(intptr_t)v2057)();

	i1 v2058 = (i1)+34;
	i8 v2059 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2059 = v2058;

	goto c01_0217;

c01_021f:;

	i8 v2060 = (i8)(intptr_t)(ws+3274);
	i1 v2061 = *(i1*)(intptr_t)v2060;
	i1 v2062 = v2061&(+16);
	i1 v2063 = (i1)+0;
	if (v2062==v2063) goto c01_0223; else goto c01_0222;

c01_0222:;

	i1 v2064 = (i1)+1;
	i8 v2065 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v2065 = v2064;

	i8 v2066 = (i8)(intptr_t)(ws+3266);
	i1 v2067 = *(i1*)(intptr_t)v2066;
	i8 v2068 = (i8)(intptr_t)(ws+265);
	*(i1*)(intptr_t)v2068 = v2067;

	i8 v2069 = (i8)(intptr_t)(f86_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v2069)();

	i8 v2070 = (i8)(intptr_t)(f87_lexer_i_match_keyword);

	((void(*)(void))(intptr_t)v2070)();

	i1 v2071 = *(i1*)(intptr_t)(ws+3280);
	i8 v2072 = (i8)(intptr_t)(ws+3275);
	*(i1*)(intptr_t)v2072 = v2071;

	i8 v2073 = (i8)(intptr_t)(ws+3275);
	i1 v2074 = *(i1*)(intptr_t)v2073;
	i8 v2075 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2075 = v2074;

	goto c01_0217;

c01_0223:;

	i8 v2076 = (i8)(intptr_t)(ws+3266);
	i1 v2077 = *(i1*)(intptr_t)v2076;
	*(i1*)(intptr_t)(ws+3280) = v2077;
	i8 v2078 = (i8)(intptr_t)(f84_lexer_i_unparseable);

	((void(*)(void))(intptr_t)v2078)();

c01_0217:;

c01_01f9:;


	i8 v2079 = (i8)(intptr_t)(ws+3264);
	i1 v2080 = *(i1*)(intptr_t)v2079;
	i1 v2081 = (i1)+255;
	if (v2080==v2081) goto c01_0227; else goto c01_0228;

c01_0227:;

	i8 v2082 = (i8)(intptr_t)(f94_lexer_i_include);

	((void(*)(void))(intptr_t)v2082)();

	goto c01_0224;

c01_0228:;

	goto c01_01e1;

c01_0224:;

	goto c01_01e0;

c01_01e1:;

}

// CountParameters workspace at ws+3392 length ws+9
void f97_CountParameters(void) {

	i1 v2083 = (i1)+0;
	i8 v2084 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v2084 = v2083;

c01_0229:;

	i8 v2085 = (i8)(intptr_t)(ws+3392);
	i8 v2086 = *(i8*)(intptr_t)v2085;
	i8 v2087 = (i8)+0;
	if (v2086==v2087) goto c01_022e; else goto c01_022d;

c01_022d:;

	i8 v2088 = (i8)(intptr_t)(ws+3400);
	i1 v2089 = *(i1*)(intptr_t)v2088;
	i1 v2090 = v2089+(+1);
	i8 v2091 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v2091 = v2090;

	i8 v2092 = (i8)(intptr_t)(ws+3392);
	i8 v2093 = *(i8*)(intptr_t)v2092;
	i8 v2094 = *(i8*)(intptr_t)v2093;
	i8 v2095 = v2094+(+16);
	i8 v2096 = *(i8*)(intptr_t)v2095;
	i8 v2097 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2097 = v2096;

	goto c01_0229;

c01_022e:;

}

// GetInputParameter workspace at ws+3464 length ws+24
void f98_GetInputParameter(void) {

	i8 v2098 = (i8)(intptr_t)(ws+3464);
	i8 v2099 = *(i8*)(intptr_t)v2098;
	i8 v2100 = v2099+(+80);
	i1 v2101 = *(i1*)(intptr_t)v2100;
	i1 v2102 = (i1)+0;
	if (v2101==v2102) goto c01_0233; else goto c01_0232;

c01_0232:;

	i8 v2103 = (i8)(intptr_t)(ws+3464);
	i8 v2104 = *(i8*)(intptr_t)v2103;
	i8 v2105 = v2104+(+16);
	i8 v2106 = *(i8*)(intptr_t)v2105;
	i8 v2107 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2107 = v2106;

c01_0234:;

	i8 v2108 = (i8)(intptr_t)(ws+3472);
	i1 v2109 = *(i1*)(intptr_t)v2108;
	i1 v2110 = (i1)+0;
	if (v2109==v2110) goto c01_0239; else goto c01_0238;

c01_0238:;

	i8 v2111 = (i8)(intptr_t)(ws+3480);
	i8 v2112 = *(i8*)(intptr_t)v2111;
	i8 v2113 = v2112+(+24);
	i8 v2114 = *(i8*)(intptr_t)v2113;
	i8 v2115 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2115 = v2114;

	i8 v2116 = (i8)(intptr_t)(ws+3472);
	i1 v2117 = *(i1*)(intptr_t)v2116;
	i1 v2118 = v2117+(-1);
	i8 v2119 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v2119 = v2118;

	goto c01_0234;

c01_0239:;

	goto c01_022f;

c01_0233:;

	i8 v2120 = (i8)+0;
	i8 v2121 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2121 = v2120;

c01_022f:;

}

// GetOutputParameter workspace at ws+3488 length ws+24
void f99_GetOutputParameter(void) {

	i8 v2122 = (i8)(intptr_t)(ws+3488);
	i8 v2123 = *(i8*)(intptr_t)v2122;
	i8 v2124 = v2123+(+81);
	i1 v2125 = *(i1*)(intptr_t)v2124;
	i1 v2126 = (i1)+0;
	if (v2125==v2126) goto c01_023e; else goto c01_023d;

c01_023d:;

	i8 v2127 = (i8)(intptr_t)(ws+3496);
	i1 v2128 = *(i1*)(intptr_t)v2127;
	i8 v2129 = (i8)(intptr_t)(ws+3488);
	i8 v2130 = *(i8*)(intptr_t)v2129;
	i8 v2131 = v2130+(+80);
	i1 v2132 = *(i1*)(intptr_t)v2131;
	i1 v2133 = v2128+v2132;
	i8 v2134 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2134 = v2133;

	i8 v2135 = (i8)(intptr_t)(ws+3488);
	i8 v2136 = *(i8*)(intptr_t)v2135;
	i8 v2137 = v2136+(+16);
	i8 v2138 = *(i8*)(intptr_t)v2137;
	i8 v2139 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2139 = v2138;

c01_023f:;

	i8 v2140 = (i8)(intptr_t)(ws+3496);
	i1 v2141 = *(i1*)(intptr_t)v2140;
	i1 v2142 = (i1)+0;
	if (v2141==v2142) goto c01_0244; else goto c01_0243;

c01_0243:;

	i8 v2143 = (i8)(intptr_t)(ws+3504);
	i8 v2144 = *(i8*)(intptr_t)v2143;
	i8 v2145 = v2144+(+24);
	i8 v2146 = *(i8*)(intptr_t)v2145;
	i8 v2147 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2147 = v2146;

	i8 v2148 = (i8)(intptr_t)(ws+3496);
	i1 v2149 = *(i1*)(intptr_t)v2148;
	i1 v2150 = v2149+(-1);
	i8 v2151 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2151 = v2150;

	goto c01_023f;

c01_0244:;

	goto c01_023a;

c01_023e:;

	i8 v2152 = (i8)+0;
	i8 v2153 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2153 = v2152;

c01_023a:;

}

// WidthToIndex workspace at ws+3592 length ws+2
void f101_WidthToIndex(void) {

	i8 v2161 = (i8)(intptr_t)(ws+3592);
	i1 v2162 = *(i1*)(intptr_t)v2161;

	if (v2162 != +4) goto c01_0246;

	i1 v2163 = (i1)+3;
	i8 v2164 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2164 = v2163;

	goto c01_0245;

c01_0246:;

	if (v2162 != +8) goto c01_0247;

	i1 v2165 = (i1)+4;
	i8 v2166 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2166 = v2165;

	goto c01_0245;

c01_0247:;

	i8 v2167 = (i8)(intptr_t)(ws+3592);
	i1 v2168 = *(i1*)(intptr_t)v2167;
	i8 v2169 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2169 = v2168;

c01_0245:;


}
	void f102_AllocateNewNode(void);

// MidEndsub workspace at ws+3408 length ws+24
void f103_MidEndsub(void) {

	i1 v2170 = (i1)+5;
	*(i1*)(intptr_t)(ws+3616) = v2170;
	i8 v2171 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2171)();

	i8 v2172 = *(i8*)(intptr_t)(ws+3624);
	i8 v2173 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2173 = v2172;

	i8 v2174 = (i8)(intptr_t)(ws+3424);
	i8 v2175 = *(i8*)(intptr_t)v2174;
	i8 v2176 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2176 = v2175;

	i8 v2177 = (i8)(intptr_t)(ws+3408);
	i8 v2178 = *(i8*)(intptr_t)v2177;
	i8 v2179 = (i8)(intptr_t)(ws+3416);
	i8 v2180 = *(i8*)(intptr_t)v2179;
	*(i8*)(intptr_t)v2180 = v2178;

}
	void f102_AllocateNewNode(void);

// MidAsmtext workspace at ws+3392 length ws+24
void f104_MidAsmtext(void) {

	i1 v2181 = (i1)+19;
	*(i1*)(intptr_t)(ws+3616) = v2181;
	i8 v2182 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2182)();

	i8 v2183 = *(i8*)(intptr_t)(ws+3624);
	i8 v2184 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2184 = v2183;

	i8 v2185 = (i8)(intptr_t)(ws+3408);
	i8 v2186 = *(i8*)(intptr_t)v2185;
	i8 v2187 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2187 = v2186;

	i8 v2188 = (i8)(intptr_t)(ws+3392);
	i8 v2189 = *(i8*)(intptr_t)v2188;
	i8 v2190 = (i8)(intptr_t)(ws+3400);
	i8 v2191 = *(i8*)(intptr_t)v2190;
	*(i8*)(intptr_t)v2191 = v2189;

}
	void f102_AllocateNewNode(void);

// MidConstant workspace at ws+3592 length ws+24
void f106_MidConstant(void) {

	i1 v2216 = (i1)+40;
	*(i1*)(intptr_t)(ws+3616) = v2216;
	i8 v2217 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2217)();

	i8 v2218 = *(i8*)(intptr_t)(ws+3624);
	i8 v2219 = (i8)(intptr_t)(ws+3608);
	*(i8*)(intptr_t)v2219 = v2218;

	i8 v2220 = (i8)(intptr_t)(ws+3608);
	i8 v2221 = *(i8*)(intptr_t)v2220;
	i8 v2222 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v2222 = v2221;

	i8 v2223 = (i8)(intptr_t)(ws+3592);
	i4 v2224 = *(i4*)(intptr_t)v2223;
	i8 v2225 = (i8)(intptr_t)(ws+3600);
	i8 v2226 = *(i8*)(intptr_t)v2225;
	*(i4*)(intptr_t)v2226 = v2224;

}
	void f102_AllocateNewNode(void);

// MidInitaddress workspace at ws+3448 length ws+32
void f107_MidInitaddress(void) {

	i1 v2227 = (i1)+13;
	*(i1*)(intptr_t)(ws+3616) = v2227;
	i8 v2228 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2228)();

	i8 v2229 = *(i8*)(intptr_t)(ws+3624);
	i8 v2230 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v2230 = v2229;

	i8 v2231 = (i8)(intptr_t)(ws+3472);
	i8 v2232 = *(i8*)(intptr_t)v2231;
	i8 v2233 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2233 = v2232;

	i8 v2234 = (i8)(intptr_t)(ws+3448);
	i8 v2235 = *(i8*)(intptr_t)v2234;
	i8 v2236 = (i8)(intptr_t)(ws+3464);
	i8 v2237 = *(i8*)(intptr_t)v2236;
	*(i8*)(intptr_t)v2237 = v2235;

	i8 v2238 = (i8)(intptr_t)(ws+3456);
	i2 v2239 = *(i2*)(intptr_t)v2238;
	i8 v2240 = (i8)(intptr_t)(ws+3464);
	i8 v2241 = *(i8*)(intptr_t)v2240;
	i8 v2242 = v2241+(+8);
	*(i2*)(intptr_t)v2242 = v2239;

}
	void f102_AllocateNewNode(void);

// MidString workspace at ws+3400 length ws+24
void f109_MidString(void) {

	i1 v2267 = (i1)+41;
	*(i1*)(intptr_t)(ws+3616) = v2267;
	i8 v2268 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2268)();

	i8 v2269 = *(i8*)(intptr_t)(ws+3624);
	i8 v2270 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2270 = v2269;

	i8 v2271 = (i8)(intptr_t)(ws+3416);
	i8 v2272 = *(i8*)(intptr_t)v2271;
	i8 v2273 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2273 = v2272;

	i8 v2274 = (i8)(intptr_t)(ws+3400);
	i8 v2275 = *(i8*)(intptr_t)v2274;
	i8 v2276 = (i8)(intptr_t)(ws+3408);
	i8 v2277 = *(i8*)(intptr_t)v2276;
	*(i8*)(intptr_t)v2277 = v2275;

}
	void f102_AllocateNewNode(void);

// MidLabel workspace at ws+3472 length ws+24
void f110_MidLabel(void) {

	i1 v2278 = (i1)+26;
	*(i1*)(intptr_t)(ws+3616) = v2278;
	i8 v2279 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2279)();

	i8 v2280 = *(i8*)(intptr_t)(ws+3624);
	i8 v2281 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2281 = v2280;

	i8 v2282 = (i8)(intptr_t)(ws+3488);
	i8 v2283 = *(i8*)(intptr_t)v2282;
	i8 v2284 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2284 = v2283;

	i8 v2285 = (i8)(intptr_t)(ws+3472);
	i2 v2286 = *(i2*)(intptr_t)v2285;
	i8 v2287 = (i8)(intptr_t)(ws+3480);
	i8 v2288 = *(i8*)(intptr_t)v2287;
	*(i2*)(intptr_t)v2288 = v2286;

}
	void f102_AllocateNewNode(void);

// MidCall workspace at ws+3488 length ws+40
void f111_MidCall(void) {

	i1 v2289 = (i1)+29;
	*(i1*)(intptr_t)(ws+3616) = v2289;
	i8 v2290 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2290)();

	i8 v2291 = *(i8*)(intptr_t)(ws+3624);
	i8 v2292 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2292 = v2291;

	i8 v2293 = (i8)(intptr_t)(ws+3520);
	i8 v2294 = *(i8*)(intptr_t)v2293;
	i8 v2295 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v2295 = v2294;

	i8 v2296 = (i8)(intptr_t)(ws+3488);
	i8 v2297 = *(i8*)(intptr_t)v2296;
	i8 v2298 = (i8)(intptr_t)(ws+3512);
	i8 v2299 = *(i8*)(intptr_t)v2298;
	i8 v2300 = v2299+(+32);
	*(i8*)(intptr_t)v2300 = v2297;

	i8 v2301 = (i8)(intptr_t)(ws+3496);
	i8 v2302 = *(i8*)(intptr_t)v2301;
	i8 v2303 = (i8)(intptr_t)(ws+3512);
	i8 v2304 = *(i8*)(intptr_t)v2303;
	i8 v2305 = v2304+(+40);
	*(i8*)(intptr_t)v2305 = v2302;

	i8 v2306 = (i8)(intptr_t)(ws+3504);
	i8 v2307 = *(i8*)(intptr_t)v2306;
	i8 v2308 = (i8)(intptr_t)(ws+3512);
	i8 v2309 = *(i8*)(intptr_t)v2308;
	*(i8*)(intptr_t)v2309 = v2307;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidWhencase workspace at ws+3416 length ws+40
void f112_MidWhencase(void) {

	i8 v2310 = (i8)(intptr_t)(ws+3416);
	i1 v2311 = *(i1*)(intptr_t)v2310;
	*(i1*)(intptr_t)(ws+3592) = v2311;
	i8 v2312 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v2312)();

	i1 v2313 = *(i1*)(intptr_t)(ws+3593);
	i8 v2314 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v2314 = v2313;

	i8 v2315 = (i8)(intptr_t)(ws+3440);
	i1 v2316 = *(i1*)(intptr_t)v2315;
	i1 v2317 = v2316+(+76);
	*(i1*)(intptr_t)(ws+3616) = v2317;
	i8 v2318 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2318)();

	i8 v2319 = *(i8*)(intptr_t)(ws+3624);
	i8 v2320 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2320 = v2319;

	i8 v2321 = (i8)(intptr_t)(ws+3448);
	i8 v2322 = *(i8*)(intptr_t)v2321;
	i8 v2323 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2323 = v2322;

	i8 v2324 = (i8)(intptr_t)(ws+3420);
	i4 v2325 = *(i4*)(intptr_t)v2324;
	i8 v2326 = (i8)(intptr_t)(ws+3432);
	i8 v2327 = *(i8*)(intptr_t)v2326;
	*(i4*)(intptr_t)v2327 = v2325;

	i8 v2328 = (i8)(intptr_t)(ws+3424);
	i2 v2329 = *(i2*)(intptr_t)v2328;
	i8 v2330 = (i8)(intptr_t)(ws+3432);
	i8 v2331 = *(i8*)(intptr_t)v2330;
	i8 v2332 = v2331+(+4);
	*(i2*)(intptr_t)v2332 = v2329;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidBltu workspace at ws+3456 length ws+56
void f113_MidBltu(void) {

	i8 v2333 = (i8)(intptr_t)(ws+3456);
	i1 v2334 = *(i1*)(intptr_t)v2333;
	*(i1*)(intptr_t)(ws+3592) = v2334;
	i8 v2335 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v2335)();

	i1 v2336 = *(i1*)(intptr_t)(ws+3593);
	i8 v2337 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2337 = v2336;

	i8 v2338 = (i8)(intptr_t)(ws+3496);
	i1 v2339 = *(i1*)(intptr_t)v2338;
	i1 v2340 = v2339+(+66);
	*(i1*)(intptr_t)(ws+3616) = v2340;
	i8 v2341 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2341)();

	i8 v2342 = *(i8*)(intptr_t)(ws+3624);
	i8 v2343 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2343 = v2342;

	i8 v2344 = (i8)(intptr_t)(ws+3504);
	i8 v2345 = *(i8*)(intptr_t)v2344;
	i8 v2346 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2346 = v2345;

	i8 v2347 = (i8)(intptr_t)(ws+3464);
	i8 v2348 = *(i8*)(intptr_t)v2347;
	i8 v2349 = (i8)(intptr_t)(ws+3488);
	i8 v2350 = *(i8*)(intptr_t)v2349;
	i8 v2351 = v2350+(+32);
	*(i8*)(intptr_t)v2351 = v2348;

	i8 v2352 = (i8)(intptr_t)(ws+3472);
	i8 v2353 = *(i8*)(intptr_t)v2352;
	i8 v2354 = (i8)(intptr_t)(ws+3488);
	i8 v2355 = *(i8*)(intptr_t)v2354;
	i8 v2356 = v2355+(+40);
	*(i8*)(intptr_t)v2356 = v2353;

	i8 v2357 = (i8)(intptr_t)(ws+3480);
	i2 v2358 = *(i2*)(intptr_t)v2357;
	i8 v2359 = (i8)(intptr_t)(ws+3488);
	i8 v2360 = *(i8*)(intptr_t)v2359;
	*(i2*)(intptr_t)v2360 = v2358;

	i8 v2361 = (i8)(intptr_t)(ws+3482);
	i2 v2362 = *(i2*)(intptr_t)v2361;
	i8 v2363 = (i8)(intptr_t)(ws+3488);
	i8 v2364 = *(i8*)(intptr_t)v2363;
	i8 v2365 = v2364+(+2);
	*(i2*)(intptr_t)v2365 = v2362;

	i8 v2366 = (i8)(intptr_t)(ws+3484);
	i2 v2367 = *(i2*)(intptr_t)v2366;
	i8 v2368 = (i8)(intptr_t)(ws+3488);
	i8 v2369 = *(i8*)(intptr_t)v2368;
	i8 v2370 = v2369+(+4);
	*(i2*)(intptr_t)v2370 = v2367;

	i8 v2371 = (i8)(intptr_t)(ws+3486);
	i1 v2372 = *(i1*)(intptr_t)v2371;
	i8 v2373 = (i8)(intptr_t)(ws+3488);
	i8 v2374 = *(i8*)(intptr_t)v2373;
	i8 v2375 = v2374+(+6);
	*(i1*)(intptr_t)v2375 = v2372;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidEndcase workspace at ws+3416 length ws+32
void f114_MidEndcase(void) {

	i8 v2376 = (i8)(intptr_t)(ws+3416);
	i1 v2377 = *(i1*)(intptr_t)v2376;
	*(i1*)(intptr_t)(ws+3592) = v2377;
	i8 v2378 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v2378)();

	i1 v2379 = *(i1*)(intptr_t)(ws+3593);
	i8 v2380 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v2380 = v2379;

	i8 v2381 = (i8)(intptr_t)(ws+3432);
	i1 v2382 = *(i1*)(intptr_t)v2381;
	i1 v2383 = v2382+(+81);
	*(i1*)(intptr_t)(ws+3616) = v2383;
	i8 v2384 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2384)();

	i8 v2385 = *(i8*)(intptr_t)(ws+3624);
	i8 v2386 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v2386 = v2385;

	i8 v2387 = (i8)(intptr_t)(ws+3440);
	i8 v2388 = *(i8*)(intptr_t)v2387;
	i8 v2389 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2389 = v2388;

}
	void f102_AllocateNewNode(void);

// MidInitstring workspace at ws+3448 length ws+24
void f115_MidInitstring(void) {

	i1 v2390 = (i1)+12;
	*(i1*)(intptr_t)(ws+3616) = v2390;
	i8 v2391 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2391)();

	i8 v2392 = *(i8*)(intptr_t)(ws+3624);
	i8 v2393 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2393 = v2392;

	i8 v2394 = (i8)(intptr_t)(ws+3464);
	i8 v2395 = *(i8*)(intptr_t)v2394;
	i8 v2396 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v2396 = v2395;

	i8 v2397 = (i8)(intptr_t)(ws+3448);
	i8 v2398 = *(i8*)(intptr_t)v2397;
	i8 v2399 = (i8)(intptr_t)(ws+3456);
	i8 v2400 = *(i8*)(intptr_t)v2399;
	*(i8*)(intptr_t)v2400 = v2398;

}
	void f102_AllocateNewNode(void);

// MidAsmstart workspace at ws+3392 length ws+16
void f116_MidAsmstart(void) {

	i1 v2401 = (i1)+18;
	*(i1*)(intptr_t)(ws+3616) = v2401;
	i8 v2402 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2402)();

	i8 v2403 = *(i8*)(intptr_t)(ws+3624);
	i8 v2404 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2404 = v2403;

	i8 v2405 = (i8)(intptr_t)(ws+3400);
	i8 v2406 = *(i8*)(intptr_t)v2405;
	i8 v2407 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2407 = v2406;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidBlts workspace at ws+3456 length ws+56
void f117_MidBlts(void) {

	i8 v2408 = (i8)(intptr_t)(ws+3456);
	i1 v2409 = *(i1*)(intptr_t)v2408;
	*(i1*)(intptr_t)(ws+3592) = v2409;
	i8 v2410 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v2410)();

	i1 v2411 = *(i1*)(intptr_t)(ws+3593);
	i8 v2412 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2412 = v2411;

	i8 v2413 = (i8)(intptr_t)(ws+3496);
	i1 v2414 = *(i1*)(intptr_t)v2413;
	i1 v2415 = v2414+(+61);
	*(i1*)(intptr_t)(ws+3616) = v2415;
	i8 v2416 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2416)();

	i8 v2417 = *(i8*)(intptr_t)(ws+3624);
	i8 v2418 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2418 = v2417;

	i8 v2419 = (i8)(intptr_t)(ws+3504);
	i8 v2420 = *(i8*)(intptr_t)v2419;
	i8 v2421 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2421 = v2420;

	i8 v2422 = (i8)(intptr_t)(ws+3464);
	i8 v2423 = *(i8*)(intptr_t)v2422;
	i8 v2424 = (i8)(intptr_t)(ws+3488);
	i8 v2425 = *(i8*)(intptr_t)v2424;
	i8 v2426 = v2425+(+32);
	*(i8*)(intptr_t)v2426 = v2423;

	i8 v2427 = (i8)(intptr_t)(ws+3472);
	i8 v2428 = *(i8*)(intptr_t)v2427;
	i8 v2429 = (i8)(intptr_t)(ws+3488);
	i8 v2430 = *(i8*)(intptr_t)v2429;
	i8 v2431 = v2430+(+40);
	*(i8*)(intptr_t)v2431 = v2428;

	i8 v2432 = (i8)(intptr_t)(ws+3480);
	i2 v2433 = *(i2*)(intptr_t)v2432;
	i8 v2434 = (i8)(intptr_t)(ws+3488);
	i8 v2435 = *(i8*)(intptr_t)v2434;
	*(i2*)(intptr_t)v2435 = v2433;

	i8 v2436 = (i8)(intptr_t)(ws+3482);
	i2 v2437 = *(i2*)(intptr_t)v2436;
	i8 v2438 = (i8)(intptr_t)(ws+3488);
	i8 v2439 = *(i8*)(intptr_t)v2438;
	i8 v2440 = v2439+(+2);
	*(i2*)(intptr_t)v2440 = v2437;

	i8 v2441 = (i8)(intptr_t)(ws+3484);
	i2 v2442 = *(i2*)(intptr_t)v2441;
	i8 v2443 = (i8)(intptr_t)(ws+3488);
	i8 v2444 = *(i8*)(intptr_t)v2443;
	i8 v2445 = v2444+(+4);
	*(i2*)(intptr_t)v2445 = v2442;

	i8 v2446 = (i8)(intptr_t)(ws+3486);
	i1 v2447 = *(i1*)(intptr_t)v2446;
	i8 v2448 = (i8)(intptr_t)(ws+3488);
	i8 v2449 = *(i8*)(intptr_t)v2448;
	i8 v2450 = v2449+(+6);
	*(i1*)(intptr_t)v2450 = v2447;

}
	void f102_AllocateNewNode(void);

// MidEnd workspace at ws+3416 length ws+16
void f118_MidEnd(void) {

	i1 v2451 = (i1)+1;
	*(i1*)(intptr_t)(ws+3616) = v2451;
	i8 v2452 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2452)();

	i8 v2453 = *(i8*)(intptr_t)(ws+3624);
	i8 v2454 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2454 = v2453;

	i8 v2455 = (i8)(intptr_t)(ws+3424);
	i8 v2456 = *(i8*)(intptr_t)v2455;
	i8 v2457 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2457 = v2456;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidPoparg workspace at ws+3488 length ws+56
void f119_MidPoparg(void) {

	i8 v2458 = (i8)(intptr_t)(ws+3488);
	i1 v2459 = *(i1*)(intptr_t)v2458;
	*(i1*)(intptr_t)(ws+3592) = v2459;
	i8 v2460 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v2460)();

	i1 v2461 = *(i1*)(intptr_t)(ws+3593);
	i8 v2462 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v2462 = v2461;

	i8 v2463 = (i8)(intptr_t)(ws+3528);
	i1 v2464 = *(i1*)(intptr_t)v2463;
	i1 v2465 = v2464+(+35);
	*(i1*)(intptr_t)(ws+3616) = v2465;
	i8 v2466 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2466)();

	i8 v2467 = *(i8*)(intptr_t)(ws+3624);
	i8 v2468 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v2468 = v2467;

	i8 v2469 = (i8)(intptr_t)(ws+3536);
	i8 v2470 = *(i8*)(intptr_t)v2469;
	i8 v2471 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2471 = v2470;

	i8 v2472 = (i8)(intptr_t)(ws+3496);
	i8 v2473 = *(i8*)(intptr_t)v2472;
	i8 v2474 = (i8)(intptr_t)(ws+3520);
	i8 v2475 = *(i8*)(intptr_t)v2474;
	*(i8*)(intptr_t)v2475 = v2473;

	i8 v2476 = (i8)(intptr_t)(ws+3504);
	i8 v2477 = *(i8*)(intptr_t)v2476;
	i8 v2478 = (i8)(intptr_t)(ws+3520);
	i8 v2479 = *(i8*)(intptr_t)v2478;
	i8 v2480 = v2479+(+8);
	*(i8*)(intptr_t)v2480 = v2477;

	i8 v2481 = (i8)(intptr_t)(ws+3512);
	i1 v2482 = *(i1*)(intptr_t)v2481;
	i8 v2483 = (i8)(intptr_t)(ws+3520);
	i8 v2484 = *(i8*)(intptr_t)v2483;
	i8 v2485 = v2484+(+16);
	*(i1*)(intptr_t)v2485 = v2482;

}
	void f102_AllocateNewNode(void);

// MidAsmgroupstart workspace at ws+3520 length ws+16
void f120_MidAsmgroupstart(void) {

	i1 v2486 = (i1)+16;
	*(i1*)(intptr_t)(ws+3616) = v2486;
	i8 v2487 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2487)();

	i8 v2488 = *(i8*)(intptr_t)(ws+3624);
	i8 v2489 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v2489 = v2488;

	i8 v2490 = (i8)(intptr_t)(ws+3528);
	i8 v2491 = *(i8*)(intptr_t)v2490;
	i8 v2492 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2492 = v2491;

}
	void f102_AllocateNewNode(void);

// MidBand workspace at ws+3392 length ws+40
void f121_MidBand(void) {

	i1 v2493 = (i1)+54;
	*(i1*)(intptr_t)(ws+3616) = v2493;
	i8 v2494 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2494)();

	i8 v2495 = *(i8*)(intptr_t)(ws+3624);
	i8 v2496 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2496 = v2495;

	i8 v2497 = (i8)(intptr_t)(ws+3424);
	i8 v2498 = *(i8*)(intptr_t)v2497;
	i8 v2499 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2499 = v2498;

	i8 v2500 = (i8)(intptr_t)(ws+3392);
	i8 v2501 = *(i8*)(intptr_t)v2500;
	i8 v2502 = (i8)(intptr_t)(ws+3416);
	i8 v2503 = *(i8*)(intptr_t)v2502;
	i8 v2504 = v2503+(+32);
	*(i8*)(intptr_t)v2504 = v2501;

	i8 v2505 = (i8)(intptr_t)(ws+3400);
	i8 v2506 = *(i8*)(intptr_t)v2505;
	i8 v2507 = (i8)(intptr_t)(ws+3416);
	i8 v2508 = *(i8*)(intptr_t)v2507;
	i8 v2509 = v2508+(+40);
	*(i8*)(intptr_t)v2509 = v2506;

	i8 v2510 = (i8)(intptr_t)(ws+3408);
	i2 v2511 = *(i2*)(intptr_t)v2510;
	i8 v2512 = (i8)(intptr_t)(ws+3416);
	i8 v2513 = *(i8*)(intptr_t)v2512;
	*(i2*)(intptr_t)v2513 = v2511;

	i8 v2514 = (i8)(intptr_t)(ws+3410);
	i2 v2515 = *(i2*)(intptr_t)v2514;
	i8 v2516 = (i8)(intptr_t)(ws+3416);
	i8 v2517 = *(i8*)(intptr_t)v2516;
	i8 v2518 = v2517+(+2);
	*(i2*)(intptr_t)v2518 = v2515;

	i8 v2519 = (i8)(intptr_t)(ws+3412);
	i2 v2520 = *(i2*)(intptr_t)v2519;
	i8 v2521 = (i8)(intptr_t)(ws+3416);
	i8 v2522 = *(i8*)(intptr_t)v2521;
	i8 v2523 = v2522+(+4);
	*(i2*)(intptr_t)v2523 = v2520;

	i8 v2524 = (i8)(intptr_t)(ws+3414);
	i1 v2525 = *(i1*)(intptr_t)v2524;
	i8 v2526 = (i8)(intptr_t)(ws+3416);
	i8 v2527 = *(i8*)(intptr_t)v2526;
	i8 v2528 = v2527+(+6);
	*(i1*)(intptr_t)v2528 = v2525;

}
	void f102_AllocateNewNode(void);

// MidEndinit workspace at ws+3392 length ws+16
void f122_MidEndinit(void) {

	i1 v2529 = (i1)+15;
	*(i1*)(intptr_t)(ws+3616) = v2529;
	i8 v2530 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2530)();

	i8 v2531 = *(i8*)(intptr_t)(ws+3624);
	i8 v2532 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2532 = v2531;

	i8 v2533 = (i8)(intptr_t)(ws+3400);
	i8 v2534 = *(i8*)(intptr_t)v2533;
	i8 v2535 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2535 = v2534;

}
	void f102_AllocateNewNode(void);

// MidStartinit workspace at ws+3408 length ws+24
void f123_MidStartinit(void) {

	i1 v2536 = (i1)+6;
	*(i1*)(intptr_t)(ws+3616) = v2536;
	i8 v2537 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2537)();

	i8 v2538 = *(i8*)(intptr_t)(ws+3624);
	i8 v2539 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2539 = v2538;

	i8 v2540 = (i8)(intptr_t)(ws+3424);
	i8 v2541 = *(i8*)(intptr_t)v2540;
	i8 v2542 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2542 = v2541;

	i8 v2543 = (i8)(intptr_t)(ws+3408);
	i8 v2544 = *(i8*)(intptr_t)v2543;
	i8 v2545 = (i8)(intptr_t)(ws+3416);
	i8 v2546 = *(i8*)(intptr_t)v2545;
	*(i8*)(intptr_t)v2546 = v2544;

}
	void f102_AllocateNewNode(void);

// MidBor workspace at ws+3392 length ws+40
void f124_MidBor(void) {

	i1 v2547 = (i1)+55;
	*(i1*)(intptr_t)(ws+3616) = v2547;
	i8 v2548 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2548)();

	i8 v2549 = *(i8*)(intptr_t)(ws+3624);
	i8 v2550 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2550 = v2549;

	i8 v2551 = (i8)(intptr_t)(ws+3424);
	i8 v2552 = *(i8*)(intptr_t)v2551;
	i8 v2553 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2553 = v2552;

	i8 v2554 = (i8)(intptr_t)(ws+3392);
	i8 v2555 = *(i8*)(intptr_t)v2554;
	i8 v2556 = (i8)(intptr_t)(ws+3416);
	i8 v2557 = *(i8*)(intptr_t)v2556;
	i8 v2558 = v2557+(+32);
	*(i8*)(intptr_t)v2558 = v2555;

	i8 v2559 = (i8)(intptr_t)(ws+3400);
	i8 v2560 = *(i8*)(intptr_t)v2559;
	i8 v2561 = (i8)(intptr_t)(ws+3416);
	i8 v2562 = *(i8*)(intptr_t)v2561;
	i8 v2563 = v2562+(+40);
	*(i8*)(intptr_t)v2563 = v2560;

	i8 v2564 = (i8)(intptr_t)(ws+3408);
	i2 v2565 = *(i2*)(intptr_t)v2564;
	i8 v2566 = (i8)(intptr_t)(ws+3416);
	i8 v2567 = *(i8*)(intptr_t)v2566;
	*(i2*)(intptr_t)v2567 = v2565;

	i8 v2568 = (i8)(intptr_t)(ws+3410);
	i2 v2569 = *(i2*)(intptr_t)v2568;
	i8 v2570 = (i8)(intptr_t)(ws+3416);
	i8 v2571 = *(i8*)(intptr_t)v2570;
	i8 v2572 = v2571+(+2);
	*(i2*)(intptr_t)v2572 = v2569;

	i8 v2573 = (i8)(intptr_t)(ws+3412);
	i2 v2574 = *(i2*)(intptr_t)v2573;
	i8 v2575 = (i8)(intptr_t)(ws+3416);
	i8 v2576 = *(i8*)(intptr_t)v2575;
	i8 v2577 = v2576+(+4);
	*(i2*)(intptr_t)v2577 = v2574;

	i8 v2578 = (i8)(intptr_t)(ws+3414);
	i1 v2579 = *(i1*)(intptr_t)v2578;
	i8 v2580 = (i8)(intptr_t)(ws+3416);
	i8 v2581 = *(i8*)(intptr_t)v2580;
	i8 v2582 = v2581+(+6);
	*(i1*)(intptr_t)v2582 = v2579;

}
	void f102_AllocateNewNode(void);

// MidAddress workspace at ws+3488 length ws+32
void f125_MidAddress(void) {

	i1 v2583 = (i1)+42;
	*(i1*)(intptr_t)(ws+3616) = v2583;
	i8 v2584 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2584)();

	i8 v2585 = *(i8*)(intptr_t)(ws+3624);
	i8 v2586 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v2586 = v2585;

	i8 v2587 = (i8)(intptr_t)(ws+3512);
	i8 v2588 = *(i8*)(intptr_t)v2587;
	i8 v2589 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2589 = v2588;

	i8 v2590 = (i8)(intptr_t)(ws+3488);
	i8 v2591 = *(i8*)(intptr_t)v2590;
	i8 v2592 = (i8)(intptr_t)(ws+3504);
	i8 v2593 = *(i8*)(intptr_t)v2592;
	*(i8*)(intptr_t)v2593 = v2591;

	i8 v2594 = (i8)(intptr_t)(ws+3496);
	i2 v2595 = *(i2*)(intptr_t)v2594;
	i8 v2596 = (i8)(intptr_t)(ws+3504);
	i8 v2597 = *(i8*)(intptr_t)v2596;
	i8 v2598 = v2597+(+8);
	*(i2*)(intptr_t)v2598 = v2595;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidStartcase workspace at ws+3416 length ws+40
void f127_MidStartcase(void) {

	i8 v2618 = (i8)(intptr_t)(ws+3416);
	i1 v2619 = *(i1*)(intptr_t)v2618;
	*(i1*)(intptr_t)(ws+3592) = v2619;
	i8 v2620 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v2620)();

	i1 v2621 = *(i1*)(intptr_t)(ws+3593);
	i8 v2622 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v2622 = v2621;

	i8 v2623 = (i8)(intptr_t)(ws+3440);
	i1 v2624 = *(i1*)(intptr_t)v2623;
	i1 v2625 = v2624+(+71);
	*(i1*)(intptr_t)(ws+3616) = v2625;
	i8 v2626 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2626)();

	i8 v2627 = *(i8*)(intptr_t)(ws+3624);
	i8 v2628 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2628 = v2627;

	i8 v2629 = (i8)(intptr_t)(ws+3448);
	i8 v2630 = *(i8*)(intptr_t)v2629;
	i8 v2631 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2631 = v2630;

	i8 v2632 = (i8)(intptr_t)(ws+3424);
	i8 v2633 = *(i8*)(intptr_t)v2632;
	i8 v2634 = (i8)(intptr_t)(ws+3432);
	i8 v2635 = *(i8*)(intptr_t)v2634;
	i8 v2636 = v2635+(+32);
	*(i8*)(intptr_t)v2636 = v2633;

}
	void f102_AllocateNewNode(void);

// MidJump workspace at ws+3416 length ws+24
void f129_MidJump(void) {

	i1 v2649 = (i1)+27;
	*(i1*)(intptr_t)(ws+3616) = v2649;
	i8 v2650 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2650)();

	i8 v2651 = *(i8*)(intptr_t)(ws+3624);
	i8 v2652 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2652 = v2651;

	i8 v2653 = (i8)(intptr_t)(ws+3432);
	i8 v2654 = *(i8*)(intptr_t)v2653;
	i8 v2655 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2655 = v2654;

	i8 v2656 = (i8)(intptr_t)(ws+3416);
	i2 v2657 = *(i2*)(intptr_t)v2656;
	i8 v2658 = (i8)(intptr_t)(ws+3424);
	i8 v2659 = *(i8*)(intptr_t)v2658;
	*(i2*)(intptr_t)v2659 = v2657;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidDeref workspace at ws+3544 length ws+40
void f130_MidDeref(void) {

	i8 v2660 = (i8)(intptr_t)(ws+3544);
	i1 v2661 = *(i1*)(intptr_t)v2660;
	*(i1*)(intptr_t)(ws+3592) = v2661;
	i8 v2662 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v2662)();

	i1 v2663 = *(i1*)(intptr_t)(ws+3593);
	i8 v2664 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v2664 = v2663;

	i8 v2665 = (i8)(intptr_t)(ws+3568);
	i1 v2666 = *(i1*)(intptr_t)v2665;
	i1 v2667 = v2666+(+44);
	*(i1*)(intptr_t)(ws+3616) = v2667;
	i8 v2668 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2668)();

	i8 v2669 = *(i8*)(intptr_t)(ws+3624);
	i8 v2670 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v2670 = v2669;

	i8 v2671 = (i8)(intptr_t)(ws+3576);
	i8 v2672 = *(i8*)(intptr_t)v2671;
	i8 v2673 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v2673 = v2672;

	i8 v2674 = (i8)(intptr_t)(ws+3552);
	i8 v2675 = *(i8*)(intptr_t)v2674;
	i8 v2676 = (i8)(intptr_t)(ws+3560);
	i8 v2677 = *(i8*)(intptr_t)v2676;
	i8 v2678 = v2677+(+32);
	*(i8*)(intptr_t)v2678 = v2675;

}
	void f102_AllocateNewNode(void);

// MidAsmsymbol workspace at ws+3416 length ws+24
void f133_MidAsmsymbol(void) {

	i1 v2726 = (i1)+20;
	*(i1*)(intptr_t)(ws+3616) = v2726;
	i8 v2727 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2727)();

	i8 v2728 = *(i8*)(intptr_t)(ws+3624);
	i8 v2729 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2729 = v2728;

	i8 v2730 = (i8)(intptr_t)(ws+3432);
	i8 v2731 = *(i8*)(intptr_t)v2730;
	i8 v2732 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2732 = v2731;

	i8 v2733 = (i8)(intptr_t)(ws+3416);
	i8 v2734 = *(i8*)(intptr_t)v2733;
	i8 v2735 = (i8)(intptr_t)(ws+3424);
	i8 v2736 = *(i8*)(intptr_t)v2735;
	*(i8*)(intptr_t)v2736 = v2734;

}
	void f102_AllocateNewNode(void);

// MidInitsubref workspace at ws+3448 length ws+24
void f136_MidInitsubref(void) {

	i1 v2785 = (i1)+14;
	*(i1*)(intptr_t)(ws+3616) = v2785;
	i8 v2786 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2786)();

	i8 v2787 = *(i8*)(intptr_t)(ws+3624);
	i8 v2788 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2788 = v2787;

	i8 v2789 = (i8)(intptr_t)(ws+3464);
	i8 v2790 = *(i8*)(intptr_t)v2789;
	i8 v2791 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v2791 = v2790;

	i8 v2792 = (i8)(intptr_t)(ws+3448);
	i8 v2793 = *(i8*)(intptr_t)v2792;
	i8 v2794 = (i8)(intptr_t)(ws+3456);
	i8 v2795 = *(i8*)(intptr_t)v2794;
	*(i8*)(intptr_t)v2795 = v2793;

}
	void f102_AllocateNewNode(void);

// MidPair workspace at ws+3392 length ws+32
void f138_MidPair(void) {

	i1 v2820 = (i1)+25;
	*(i1*)(intptr_t)(ws+3616) = v2820;
	i8 v2821 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2821)();

	i8 v2822 = *(i8*)(intptr_t)(ws+3624);
	i8 v2823 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2823 = v2822;

	i8 v2824 = (i8)(intptr_t)(ws+3416);
	i8 v2825 = *(i8*)(intptr_t)v2824;
	i8 v2826 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2826 = v2825;

	i8 v2827 = (i8)(intptr_t)(ws+3392);
	i8 v2828 = *(i8*)(intptr_t)v2827;
	i8 v2829 = (i8)(intptr_t)(ws+3408);
	i8 v2830 = *(i8*)(intptr_t)v2829;
	i8 v2831 = v2830+(+32);
	*(i8*)(intptr_t)v2831 = v2828;

	i8 v2832 = (i8)(intptr_t)(ws+3400);
	i8 v2833 = *(i8*)(intptr_t)v2832;
	i8 v2834 = (i8)(intptr_t)(ws+3408);
	i8 v2835 = *(i8*)(intptr_t)v2834;
	i8 v2836 = v2835+(+40);
	*(i8*)(intptr_t)v2836 = v2833;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidStore workspace at ws+3488 length ws+48
void f139_MidStore(void) {

	i8 v2837 = (i8)(intptr_t)(ws+3488);
	i1 v2838 = *(i1*)(intptr_t)v2837;
	*(i1*)(intptr_t)(ws+3592) = v2838;
	i8 v2839 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v2839)();

	i1 v2840 = *(i1*)(intptr_t)(ws+3593);
	i8 v2841 = (i8)(intptr_t)(ws+3520);
	*(i1*)(intptr_t)v2841 = v2840;

	i8 v2842 = (i8)(intptr_t)(ws+3520);
	i1 v2843 = *(i1*)(intptr_t)v2842;
	i1 v2844 = v2843+(+49);
	*(i1*)(intptr_t)(ws+3616) = v2844;
	i8 v2845 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v2845)();

	i8 v2846 = *(i8*)(intptr_t)(ws+3624);
	i8 v2847 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v2847 = v2846;

	i8 v2848 = (i8)(intptr_t)(ws+3528);
	i8 v2849 = *(i8*)(intptr_t)v2848;
	i8 v2850 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v2850 = v2849;

	i8 v2851 = (i8)(intptr_t)(ws+3496);
	i8 v2852 = *(i8*)(intptr_t)v2851;
	i8 v2853 = (i8)(intptr_t)(ws+3512);
	i8 v2854 = *(i8*)(intptr_t)v2853;
	i8 v2855 = v2854+(+32);
	*(i8*)(intptr_t)v2855 = v2852;

	i8 v2856 = (i8)(intptr_t)(ws+3504);
	i8 v2857 = *(i8*)(intptr_t)v2856;
	i8 v2858 = (i8)(intptr_t)(ws+3512);
	i8 v2859 = *(i8*)(intptr_t)v2858;
	i8 v2860 = v2859+(+40);
	*(i8*)(intptr_t)v2860 = v2857;

}
	void f102_AllocateNewNode(void);

// MidAsmgroupend workspace at ws+3520 length ws+16
void f148_MidAsmgroupend(void) {

	i1 v3052 = (i1)+17;
	*(i1*)(intptr_t)(ws+3616) = v3052;
	i8 v3053 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3053)();

	i8 v3054 = *(i8*)(intptr_t)(ws+3624);
	i8 v3055 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3055 = v3054;

	i8 v3056 = (i8)(intptr_t)(ws+3528);
	i8 v3057 = *(i8*)(intptr_t)v3056;
	i8 v3058 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3058 = v3057;

}
	void f102_AllocateNewNode(void);

// MidSubref workspace at ws+3424 length ws+24
void f149_MidSubref(void) {

	i1 v3059 = (i1)+43;
	*(i1*)(intptr_t)(ws+3616) = v3059;
	i8 v3060 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3060)();

	i8 v3061 = *(i8*)(intptr_t)(ws+3624);
	i8 v3062 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v3062 = v3061;

	i8 v3063 = (i8)(intptr_t)(ws+3440);
	i8 v3064 = *(i8*)(intptr_t)v3063;
	i8 v3065 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v3065 = v3064;

	i8 v3066 = (i8)(intptr_t)(ws+3424);
	i8 v3067 = *(i8*)(intptr_t)v3066;
	i8 v3068 = (i8)(intptr_t)(ws+3432);
	i8 v3069 = *(i8*)(intptr_t)v3068;
	*(i8*)(intptr_t)v3069 = v3067;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidInit workspace at ws+3480 length ws+32
void f150_MidInit(void) {

	i8 v3070 = (i8)(intptr_t)(ws+3480);
	i1 v3071 = *(i1*)(intptr_t)v3070;
	*(i1*)(intptr_t)(ws+3592) = v3071;
	i8 v3072 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v3072)();

	i1 v3073 = *(i1*)(intptr_t)(ws+3593);
	i8 v3074 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3074 = v3073;

	i8 v3075 = (i8)(intptr_t)(ws+3496);
	i1 v3076 = *(i1*)(intptr_t)v3075;
	i1 v3077 = v3076+(+7);
	*(i1*)(intptr_t)(ws+3616) = v3077;
	i8 v3078 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3078)();

	i8 v3079 = *(i8*)(intptr_t)(ws+3624);
	i8 v3080 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3080 = v3079;

	i8 v3081 = (i8)(intptr_t)(ws+3504);
	i8 v3082 = *(i8*)(intptr_t)v3081;
	i8 v3083 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v3083 = v3082;

	i8 v3084 = (i8)(intptr_t)(ws+3484);
	i4 v3085 = *(i4*)(intptr_t)v3084;
	i8 v3086 = (i8)(intptr_t)(ws+3488);
	i8 v3087 = *(i8*)(intptr_t)v3086;
	*(i4*)(intptr_t)v3087 = v3085;

}
	void f102_AllocateNewNode(void);

// MidAsmsubref workspace at ws+3416 length ws+24
void f151_MidAsmsubref(void) {

	i1 v3088 = (i1)+21;
	*(i1*)(intptr_t)(ws+3616) = v3088;
	i8 v3089 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3089)();

	i8 v3090 = *(i8*)(intptr_t)(ws+3624);
	i8 v3091 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v3091 = v3090;

	i8 v3092 = (i8)(intptr_t)(ws+3432);
	i8 v3093 = *(i8*)(intptr_t)v3092;
	i8 v3094 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3094 = v3093;

	i8 v3095 = (i8)(intptr_t)(ws+3416);
	i8 v3096 = *(i8*)(intptr_t)v3095;
	i8 v3097 = (i8)(intptr_t)(ws+3424);
	i8 v3098 = *(i8*)(intptr_t)v3097;
	*(i8*)(intptr_t)v3098 = v3096;

}
	void f102_AllocateNewNode(void);

// MidEndfile workspace at ws+3264 length ws+16
void f152_MidEndfile(void) {

	i1 v3099 = (i1)+3;
	*(i1*)(intptr_t)(ws+3616) = v3099;
	i8 v3100 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3100)();

	i8 v3101 = *(i8*)(intptr_t)(ws+3624);
	i8 v3102 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v3102 = v3101;

	i8 v3103 = (i8)(intptr_t)(ws+3272);
	i8 v3104 = *(i8*)(intptr_t)v3103;
	i8 v3105 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v3105 = v3104;

}
	void f102_AllocateNewNode(void);

// MidStartfile workspace at ws+3264 length ws+16
void f153_MidStartfile(void) {

	i1 v3106 = (i1)+2;
	*(i1*)(intptr_t)(ws+3616) = v3106;
	i8 v3107 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3107)();

	i8 v3108 = *(i8*)(intptr_t)(ws+3624);
	i8 v3109 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v3109 = v3108;

	i8 v3110 = (i8)(intptr_t)(ws+3272);
	i8 v3111 = *(i8*)(intptr_t)v3110;
	i8 v3112 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v3112 = v3111;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidArg workspace at ws+3416 length ws+72
void f154_MidArg(void) {

	i8 v3113 = (i8)(intptr_t)(ws+3416);
	i1 v3114 = *(i1*)(intptr_t)v3113;
	*(i1*)(intptr_t)(ws+3592) = v3114;
	i8 v3115 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v3115)();

	i1 v3116 = *(i1*)(intptr_t)(ws+3593);
	i8 v3117 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v3117 = v3116;

	i8 v3118 = (i8)(intptr_t)(ws+3472);
	i1 v3119 = *(i1*)(intptr_t)v3118;
	i1 v3120 = v3119+(+30);
	*(i1*)(intptr_t)(ws+3616) = v3120;
	i8 v3121 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3121)();

	i8 v3122 = *(i8*)(intptr_t)(ws+3624);
	i8 v3123 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v3123 = v3122;

	i8 v3124 = (i8)(intptr_t)(ws+3480);
	i8 v3125 = *(i8*)(intptr_t)v3124;
	i8 v3126 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v3126 = v3125;

	i8 v3127 = (i8)(intptr_t)(ws+3424);
	i8 v3128 = *(i8*)(intptr_t)v3127;
	i8 v3129 = (i8)(intptr_t)(ws+3464);
	i8 v3130 = *(i8*)(intptr_t)v3129;
	i8 v3131 = v3130+(+32);
	*(i8*)(intptr_t)v3131 = v3128;

	i8 v3132 = (i8)(intptr_t)(ws+3432);
	i8 v3133 = *(i8*)(intptr_t)v3132;
	i8 v3134 = (i8)(intptr_t)(ws+3464);
	i8 v3135 = *(i8*)(intptr_t)v3134;
	i8 v3136 = v3135+(+40);
	*(i8*)(intptr_t)v3136 = v3133;

	i8 v3137 = (i8)(intptr_t)(ws+3440);
	i8 v3138 = *(i8*)(intptr_t)v3137;
	i8 v3139 = (i8)(intptr_t)(ws+3464);
	i8 v3140 = *(i8*)(intptr_t)v3139;
	*(i8*)(intptr_t)v3140 = v3138;

	i8 v3141 = (i8)(intptr_t)(ws+3448);
	i8 v3142 = *(i8*)(intptr_t)v3141;
	i8 v3143 = (i8)(intptr_t)(ws+3464);
	i8 v3144 = *(i8*)(intptr_t)v3143;
	i8 v3145 = v3144+(+8);
	*(i8*)(intptr_t)v3145 = v3142;

	i8 v3146 = (i8)(intptr_t)(ws+3456);
	i1 v3147 = *(i1*)(intptr_t)v3146;
	i8 v3148 = (i8)(intptr_t)(ws+3464);
	i8 v3149 = *(i8*)(intptr_t)v3148;
	i8 v3150 = v3149+(+16);
	*(i1*)(intptr_t)v3150 = v3147;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidBeq workspace at ws+3448 length ws+56
void f155_MidBeq(void) {

	i8 v3151 = (i8)(intptr_t)(ws+3448);
	i1 v3152 = *(i1*)(intptr_t)v3151;
	*(i1*)(intptr_t)(ws+3592) = v3152;
	i8 v3153 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v3153)();

	i1 v3154 = *(i1*)(intptr_t)(ws+3593);
	i8 v3155 = (i8)(intptr_t)(ws+3488);
	*(i1*)(intptr_t)v3155 = v3154;

	i8 v3156 = (i8)(intptr_t)(ws+3488);
	i1 v3157 = *(i1*)(intptr_t)v3156;
	i1 v3158 = v3157+(+56);
	*(i1*)(intptr_t)(ws+3616) = v3158;
	i8 v3159 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3159)();

	i8 v3160 = *(i8*)(intptr_t)(ws+3624);
	i8 v3161 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v3161 = v3160;

	i8 v3162 = (i8)(intptr_t)(ws+3496);
	i8 v3163 = *(i8*)(intptr_t)v3162;
	i8 v3164 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v3164 = v3163;

	i8 v3165 = (i8)(intptr_t)(ws+3456);
	i8 v3166 = *(i8*)(intptr_t)v3165;
	i8 v3167 = (i8)(intptr_t)(ws+3480);
	i8 v3168 = *(i8*)(intptr_t)v3167;
	i8 v3169 = v3168+(+32);
	*(i8*)(intptr_t)v3169 = v3166;

	i8 v3170 = (i8)(intptr_t)(ws+3464);
	i8 v3171 = *(i8*)(intptr_t)v3170;
	i8 v3172 = (i8)(intptr_t)(ws+3480);
	i8 v3173 = *(i8*)(intptr_t)v3172;
	i8 v3174 = v3173+(+40);
	*(i8*)(intptr_t)v3174 = v3171;

	i8 v3175 = (i8)(intptr_t)(ws+3472);
	i2 v3176 = *(i2*)(intptr_t)v3175;
	i8 v3177 = (i8)(intptr_t)(ws+3480);
	i8 v3178 = *(i8*)(intptr_t)v3177;
	*(i2*)(intptr_t)v3178 = v3176;

	i8 v3179 = (i8)(intptr_t)(ws+3474);
	i2 v3180 = *(i2*)(intptr_t)v3179;
	i8 v3181 = (i8)(intptr_t)(ws+3480);
	i8 v3182 = *(i8*)(intptr_t)v3181;
	i8 v3183 = v3182+(+2);
	*(i2*)(intptr_t)v3183 = v3180;

	i8 v3184 = (i8)(intptr_t)(ws+3476);
	i2 v3185 = *(i2*)(intptr_t)v3184;
	i8 v3186 = (i8)(intptr_t)(ws+3480);
	i8 v3187 = *(i8*)(intptr_t)v3186;
	i8 v3188 = v3187+(+4);
	*(i2*)(intptr_t)v3188 = v3185;

	i8 v3189 = (i8)(intptr_t)(ws+3478);
	i1 v3190 = *(i1*)(intptr_t)v3189;
	i8 v3191 = (i8)(intptr_t)(ws+3480);
	i8 v3192 = *(i8*)(intptr_t)v3191;
	i8 v3193 = v3192+(+6);
	*(i1*)(intptr_t)v3193 = v3190;

}
	void f102_AllocateNewNode(void);

// MidReturn workspace at ws+3392 length ws+16
void f156_MidReturn(void) {

	i1 v3194 = (i1)+28;
	*(i1*)(intptr_t)(ws+3616) = v3194;
	i8 v3195 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3195)();

	i8 v3196 = *(i8*)(intptr_t)(ws+3624);
	i8 v3197 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3197 = v3196;

	i8 v3198 = (i8)(intptr_t)(ws+3400);
	i8 v3199 = *(i8*)(intptr_t)v3198;
	i8 v3200 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3200 = v3199;

}
	void f102_AllocateNewNode(void);

// MidStartsub workspace at ws+3408 length ws+24
void f157_MidStartsub(void) {

	i1 v3201 = (i1)+4;
	*(i1*)(intptr_t)(ws+3616) = v3201;
	i8 v3202 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3202)();

	i8 v3203 = *(i8*)(intptr_t)(ws+3624);
	i8 v3204 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3204 = v3203;

	i8 v3205 = (i8)(intptr_t)(ws+3424);
	i8 v3206 = *(i8*)(intptr_t)v3205;
	i8 v3207 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3207 = v3206;

	i8 v3208 = (i8)(intptr_t)(ws+3408);
	i8 v3209 = *(i8*)(intptr_t)v3208;
	i8 v3210 = (i8)(intptr_t)(ws+3416);
	i8 v3211 = *(i8*)(intptr_t)v3210;
	*(i8*)(intptr_t)v3211 = v3209;

}
	void f102_AllocateNewNode(void);

// MidAsmvalue workspace at ws+3416 length ws+24
void f161_MidAsmvalue(void) {

	i1 v3277 = (i1)+22;
	*(i1*)(intptr_t)(ws+3616) = v3277;
	i8 v3278 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3278)();

	i8 v3279 = *(i8*)(intptr_t)(ws+3624);
	i8 v3280 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v3280 = v3279;

	i8 v3281 = (i8)(intptr_t)(ws+3432);
	i8 v3282 = *(i8*)(intptr_t)v3281;
	i8 v3283 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3283 = v3282;

	i8 v3284 = (i8)(intptr_t)(ws+3416);
	i4 v3285 = *(i4*)(intptr_t)v3284;
	i8 v3286 = (i8)(intptr_t)(ws+3424);
	i8 v3287 = *(i8*)(intptr_t)v3286;
	*(i4*)(intptr_t)v3287 = v3285;

}
	void f102_AllocateNewNode(void);

// MidAsmend workspace at ws+3392 length ws+16
void f162_MidAsmend(void) {

	i1 v3288 = (i1)+23;
	*(i1*)(intptr_t)(ws+3616) = v3288;
	i8 v3289 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3289)();

	i8 v3290 = *(i8*)(intptr_t)(ws+3624);
	i8 v3291 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3291 = v3290;

	i8 v3292 = (i8)(intptr_t)(ws+3400);
	i8 v3293 = *(i8*)(intptr_t)v3292;
	i8 v3294 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3294 = v3293;

}
	void f6_MemSet(void);
	void f68_InternalAlloc(void);

// AllocateNewNode workspace at ws+3616 length ws+24
void f102_AllocateNewNode(void) {

	i8 v3307 = (i8)(intptr_t)(ws+928);
	i8 v3308 = *(i8*)(intptr_t)v3307;
	i8 v3309 = (i8)+0;
	if (v3308==v3309) goto c01_024d; else goto c01_024c;

c01_024c:;

	i8 v3310 = (i8)(intptr_t)(ws+928);
	i8 v3311 = *(i8*)(intptr_t)v3310;
	i8 v3312 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v3312 = v3311;

	i8 v3313 = (i8)(intptr_t)(ws+928);
	i8 v3314 = *(i8*)(intptr_t)v3313;
	i8 v3315 = v3314+(+32);
	i8 v3316 = *(i8*)(intptr_t)v3315;
	i8 v3317 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3317 = v3316;

	i8 v3318 = (i8)(intptr_t)(ws+3624);
	i8 v3319 = *(i8*)(intptr_t)v3318;
	*(i8*)(intptr_t)(ws+3640) = v3319;
	i1 v3320 = (i1)+0;
	*(i1*)(intptr_t)(ws+3648) = v3320;
	i8 v3321 = (i8)+49;
	*(i8*)(intptr_t)(ws+3656) = v3321;
	i8 v3322 = (i8)(intptr_t)(f6_MemSet);

	((void(*)(void))(intptr_t)v3322)();

	goto c01_0249;

c01_024d:;

	i8 v3323 = (i8)+49;
	*(i8*)(intptr_t)(ws+3640) = v3323;
	i8 v3324 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v3324)();

	i8 v3325 = *(i8*)(intptr_t)(ws+3648);
	i8 v3326 = (i8)(intptr_t)(ws+3632);
	*(i8*)(intptr_t)v3326 = v3325;

	i8 v3327 = (i8)(intptr_t)(ws+3632);
	i8 v3328 = *(i8*)(intptr_t)v3327;
	i8 v3329 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v3329 = v3328;

c01_0249:;

	i8 v3330 = (i8)(intptr_t)(ws+3616);
	i1 v3331 = *(i1*)(intptr_t)v3330;
	i8 v3332 = (i8)(intptr_t)(ws+3624);
	i8 v3333 = *(i8*)(intptr_t)v3332;
	i8 v3334 = v3333+(+48);
	*(i1*)(intptr_t)v3334 = v3331;

}

// FreeNode workspace at ws+3624 length ws+8
void f164_FreeNode(void) {

	i8 v3335 = (i8)(intptr_t)(ws+928);
	i8 v3336 = *(i8*)(intptr_t)v3335;
	i8 v3337 = (i8)(intptr_t)(ws+3624);
	i8 v3338 = *(i8*)(intptr_t)v3337;
	i8 v3339 = v3338+(+32);
	*(i8*)(intptr_t)v3339 = v3336;

	i8 v3340 = (i8)(intptr_t)(ws+3624);
	i8 v3341 = *(i8*)(intptr_t)v3340;
	i8 v3342 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3342 = v3341;

}
	void f33_Free(void);

// PurgeAllFreeNodes workspace at ws+3672 length ws+8
void f72_PurgeAllFreeNodes(void) {

c01_024e:;

	i8 v3343 = (i8)(intptr_t)(ws+928);
	i8 v3344 = *(i8*)(intptr_t)v3343;
	i8 v3345 = (i8)+0;
	if (v3344==v3345) goto c01_0253; else goto c01_0252;

c01_0252:;

	i8 v3346 = (i8)(intptr_t)(ws+928);
	i8 v3347 = *(i8*)(intptr_t)v3346;
	i8 v3348 = (i8)(intptr_t)(ws+3672);
	*(i8*)(intptr_t)v3348 = v3347;

	i8 v3349 = (i8)(intptr_t)(ws+928);
	i8 v3350 = *(i8*)(intptr_t)v3349;
	i8 v3351 = v3350+(+32);
	i8 v3352 = *(i8*)(intptr_t)v3351;
	i8 v3353 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3353 = v3352;

	i8 v3354 = (i8)(intptr_t)(ws+3672);
	i8 v3355 = *(i8*)(intptr_t)v3354;
	*(i8*)(intptr_t)(ws+3680) = v3355;
	i8 v3356 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v3356)();

	goto c01_024e;

c01_0253:;

}

// NodeWidth workspace at ws+3456 length ws+9
void f165_NodeWidth(void) {

	i1 v3357 = (i1)+0;
	i8 v3358 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3358 = v3357;

	i8 v3359 = (i8)(intptr_t)(ws+3456);
	i8 v3360 = *(i8*)(intptr_t)v3359;
	i8 v3361 = v3360+(+24);
	i8 v3362 = *(i8*)(intptr_t)v3361;
	i8 v3363 = (i8)+0;
	if (v3362==v3363) goto c01_0258; else goto c01_0257;

c01_0257:;

	i8 v3364 = (i8)(intptr_t)(ws+3456);
	i8 v3365 = *(i8*)(intptr_t)v3364;
	i8 v3366 = v3365+(+24);
	i8 v3367 = *(i8*)(intptr_t)v3366;
	i8 v3368 = v3367+(+48);
	i2 v3369 = *(i2*)(intptr_t)v3368;
	i1 v3370 = v3369;
	i8 v3371 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3371 = v3370;

c01_0258:;

c01_0254:;

}
const i1 c01_s00f3[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f75_SimpleError(void);

// midcodec_i_bad_fold workspace at ws+3632 length ws+0
void f166_midcodec_i_bad_fold(void) {

	i8 v3372 = (i8)(intptr_t)c01_s00f3;
	*(i8*)(intptr_t)(ws+3648) = v3372;
	i8 v3373 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v3373)();

}
	void f166_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3472 length ws+24
void f167_FoldConstant1(void) {

	i8 v3374 = (i8)(intptr_t)(ws+3480);
	i8 v3375 = *(i8*)(intptr_t)v3374;
	i4 v3376 = *(i4*)(intptr_t)v3375;
	i8 v3377 = (i8)(intptr_t)(ws+3492);
	*(i4*)(intptr_t)v3377 = v3376;

	i8 v3378 = (i8)(intptr_t)(ws+3472);
	i1 v3379 = *(i1*)(intptr_t)v3378;

	if (v3379 != +106) goto c01_025a;

	i8 v3380 = (i8)(intptr_t)(ws+3492);
	i4 v3381 = *(i4*)(intptr_t)v3380;
	i4 v3382 = ~v3381;
	i8 v3383 = (i8)(intptr_t)(ws+3488);
	*(i4*)(intptr_t)v3383 = v3382;

	goto c01_0259;

c01_025a:;

	if (v3379 != +111) goto c01_025b;

	i8 v3384 = (i8)(intptr_t)(ws+3492);
	i4 v3385 = *(i4*)(intptr_t)v3384;
	i4 v3386 = -v3385;
	i8 v3387 = (i8)(intptr_t)(ws+3488);
	*(i4*)(intptr_t)v3387 = v3386;

	goto c01_0259;

c01_025b:;

	i8 v3388 = (i8)(intptr_t)(f166_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3388)();

c01_0259:;


}
	void f166_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3592 length ws+36
void f168_FoldConstant2(void) {

	i8 v3389 = (i8)(intptr_t)(ws+3600);
	i8 v3390 = *(i8*)(intptr_t)v3389;
	i4 v3391 = *(i4*)(intptr_t)v3390;
	i8 v3392 = (i8)(intptr_t)(ws+3620);
	*(i4*)(intptr_t)v3392 = v3391;

	i8 v3393 = (i8)(intptr_t)(ws+3608);
	i8 v3394 = *(i8*)(intptr_t)v3393;
	i4 v3395 = *(i4*)(intptr_t)v3394;
	i8 v3396 = (i8)(intptr_t)(ws+3624);
	*(i4*)(intptr_t)v3396 = v3395;

	i8 v3397 = (i8)(intptr_t)(ws+3592);
	i1 v3398 = *(i1*)(intptr_t)v3397;

	if (v3398 != +156) goto c01_025d;

	i8 v3399 = (i8)(intptr_t)(ws+3620);
	i4 v3400 = *(i4*)(intptr_t)v3399;
	i8 v3401 = (i8)(intptr_t)(ws+3624);
	i4 v3402 = *(i4*)(intptr_t)v3401;
	i4 v3403 = v3400+v3402;
	i8 v3404 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3404 = v3403;

	goto c01_025c;

c01_025d:;

	if (v3398 != +131) goto c01_025e;

	i8 v3405 = (i8)(intptr_t)(ws+3620);
	i4 v3406 = *(i4*)(intptr_t)v3405;
	i8 v3407 = (i8)(intptr_t)(ws+3624);
	i4 v3408 = *(i4*)(intptr_t)v3407;
	i4 v3409 = v3406-v3408;
	i8 v3410 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3410 = v3409;

	goto c01_025c;

c01_025e:;

	if (v3398 != +161) goto c01_025f;

	i8 v3411 = (i8)(intptr_t)(ws+3620);
	i4 v3412 = *(i4*)(intptr_t)v3411;
	i8 v3413 = (i8)(intptr_t)(ws+3624);
	i4 v3414 = *(i4*)(intptr_t)v3413;
	i4 v3415 = v3412*v3414;
	i8 v3416 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3416 = v3415;

	goto c01_025c;

c01_025f:;

	if (v3398 != +136) goto c01_0260;

	i8 v3417 = (i8)(intptr_t)(ws+3620);
	i4 v3418 = *(i4*)(intptr_t)v3417;
	i8 v3419 = (i8)(intptr_t)(ws+3624);
	i4 v3420 = *(i4*)(intptr_t)v3419;
	i4 v3421 = v3418/v3420;
	i8 v3422 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3422 = v3421;

	goto c01_025c;

c01_0260:;

	if (v3398 != +141) goto c01_0261;

	i8 v3423 = (i8)(intptr_t)(ws+3620);
	i4 v3424 = *(i4*)(intptr_t)v3423;
	i8 v3425 = (i8)(intptr_t)(ws+3624);
	i4 v3426 = *(i4*)(intptr_t)v3425;
	i4 v3427 = (s4)v3424/(s4)v3426;
	i8 v3428 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3428 = v3427;

	goto c01_025c;

c01_0261:;

	if (v3398 != +146) goto c01_0262;

	i8 v3429 = (i8)(intptr_t)(ws+3620);
	i4 v3430 = *(i4*)(intptr_t)v3429;
	i8 v3431 = (i8)(intptr_t)(ws+3624);
	i4 v3432 = *(i4*)(intptr_t)v3431;
	i4 v3433 = v3430%v3432;
	i8 v3434 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3434 = v3433;

	goto c01_025c;

c01_0262:;

	if (v3398 != +151) goto c01_0263;

	i8 v3435 = (i8)(intptr_t)(ws+3620);
	i4 v3436 = *(i4*)(intptr_t)v3435;
	i8 v3437 = (i8)(intptr_t)(ws+3624);
	i4 v3438 = *(i4*)(intptr_t)v3437;
	i4 v3439 = (s4)v3436%(s4)v3438;
	i8 v3440 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3440 = v3439;

	goto c01_025c;

c01_0263:;

	if (v3398 != +166) goto c01_0264;

	i8 v3441 = (i8)(intptr_t)(ws+3620);
	i4 v3442 = *(i4*)(intptr_t)v3441;
	i8 v3443 = (i8)(intptr_t)(ws+3624);
	i4 v3444 = *(i4*)(intptr_t)v3443;
	i4 v3445 = v3442&v3444;
	i8 v3446 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3446 = v3445;

	goto c01_025c;

c01_0264:;

	if (v3398 != +171) goto c01_0265;

	i8 v3447 = (i8)(intptr_t)(ws+3620);
	i4 v3448 = *(i4*)(intptr_t)v3447;
	i8 v3449 = (i8)(intptr_t)(ws+3624);
	i4 v3450 = *(i4*)(intptr_t)v3449;
	i4 v3451 = v3448|v3450;
	i8 v3452 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3452 = v3451;

	goto c01_025c;

c01_0265:;

	if (v3398 != +176) goto c01_0266;

	i8 v3453 = (i8)(intptr_t)(ws+3620);
	i4 v3454 = *(i4*)(intptr_t)v3453;
	i8 v3455 = (i8)(intptr_t)(ws+3624);
	i4 v3456 = *(i4*)(intptr_t)v3455;
	i4 v3457 = v3454^v3456;
	i8 v3458 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3458 = v3457;

	goto c01_025c;

c01_0266:;

	if (v3398 != +116) goto c01_0267;

	i8 v3459 = (i8)(intptr_t)(ws+3620);
	i4 v3460 = *(i4*)(intptr_t)v3459;
	i8 v3461 = (i8)(intptr_t)(ws+3624);
	i4 v3462 = *(i4*)(intptr_t)v3461;
	i1 v3463 = (s1)(s4)v3462;
	i4 v3464 = ((i4)v3460)<<v3463;
	i8 v3465 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3465 = v3464;

	goto c01_025c;

c01_0267:;

	if (v3398 != +121) goto c01_0268;

	i8 v3466 = (i8)(intptr_t)(ws+3620);
	i4 v3467 = *(i4*)(intptr_t)v3466;
	i8 v3468 = (i8)(intptr_t)(ws+3624);
	i4 v3469 = *(i4*)(intptr_t)v3468;
	i1 v3470 = (s1)(s4)v3469;
	i4 v3471 = ((i4)v3467)>>v3470;
	i8 v3472 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3472 = v3471;

	goto c01_025c;

c01_0268:;

	if (v3398 != +126) goto c01_0269;

	i8 v3473 = (i8)(intptr_t)(ws+3620);
	i4 v3474 = *(i4*)(intptr_t)v3473;
	i8 v3475 = (i8)(intptr_t)(ws+3624);
	i4 v3476 = *(i4*)(intptr_t)v3475;
	i1 v3477 = (s1)(s4)v3476;
	i4 v3478 = ((s4)v3474)>>v3477;
	i8 v3479 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3479 = v3478;

	goto c01_025c;

c01_0269:;

	i8 v3480 = (i8)(intptr_t)(f166_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3480)();

c01_025c:;


}
	void f167_FoldConstant1(void);
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidC1Op workspace at ws+3432 length ws+40
void f169_MidC1Op(void) {

	i8 v3481 = (i8)(intptr_t)(ws+3440);
	i8 v3482 = *(i8*)(intptr_t)v3481;
	i8 v3483 = v3482+(+48);
	i1 v3484 = *(i1*)(intptr_t)v3483;
	i1 v3485 = (i1)+40;
	if (v3484==v3485) goto c01_026d; else goto c01_026e;

c01_026d:;

	i8 v3486 = (i8)(intptr_t)(ws+3432);
	i1 v3487 = *(i1*)(intptr_t)v3486;
	*(i1*)(intptr_t)(ws+3472) = v3487;
	i8 v3488 = (i8)(intptr_t)(ws+3440);
	i8 v3489 = *(i8*)(intptr_t)v3488;
	*(i8*)(intptr_t)(ws+3480) = v3489;
	i8 v3490 = (i8)(intptr_t)(f167_FoldConstant1);

	((void(*)(void))(intptr_t)v3490)();

	i4 v3491 = *(i4*)(intptr_t)(ws+3488);
	i8 v3492 = (i8)(intptr_t)(ws+3456);
	*(i4*)(intptr_t)v3492 = v3491;

	i8 v3493 = (i8)(intptr_t)(ws+3456);
	i4 v3494 = *(i4*)(intptr_t)v3493;
	i8 v3495 = (i8)(intptr_t)(ws+3440);
	i8 v3496 = *(i8*)(intptr_t)v3495;
	*(i4*)(intptr_t)v3496 = v3494;

	i8 v3497 = (i8)(intptr_t)(ws+3440);
	i8 v3498 = *(i8*)(intptr_t)v3497;
	i8 v3499 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3499 = v3498;

	goto c01_026a;

c01_026e:;

	i8 v3500 = (i8)(intptr_t)(ws+3433);
	i1 v3501 = *(i1*)(intptr_t)v3500;
	*(i1*)(intptr_t)(ws+3592) = v3501;
	i8 v3502 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v3502)();

	i1 v3503 = *(i1*)(intptr_t)(ws+3593);
	i8 v3504 = (i8)(intptr_t)(ws+3460);
	*(i1*)(intptr_t)v3504 = v3503;

	i8 v3505 = (i8)(intptr_t)(ws+3432);
	i1 v3506 = *(i1*)(intptr_t)v3505;
	i8 v3507 = (i8)(intptr_t)(ws+3460);
	i1 v3508 = *(i1*)(intptr_t)v3507;
	i1 v3509 = v3506+v3508;
	*(i1*)(intptr_t)(ws+3616) = v3509;
	i8 v3510 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3510)();

	i8 v3511 = *(i8*)(intptr_t)(ws+3624);
	i8 v3512 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v3512 = v3511;

	i8 v3513 = (i8)(intptr_t)(ws+3464);
	i8 v3514 = *(i8*)(intptr_t)v3513;
	i8 v3515 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3515 = v3514;

	i8 v3516 = (i8)(intptr_t)(ws+3440);
	i8 v3517 = *(i8*)(intptr_t)v3516;
	i8 v3518 = (i8)(intptr_t)(ws+3448);
	i8 v3519 = *(i8*)(intptr_t)v3518;
	i8 v3520 = v3519+(+32);
	*(i8*)(intptr_t)v3520 = v3517;

c01_026a:;

}

// GetPowerOfTwo workspace at ws+3592 length ws+5
void f170_GetPowerOfTwo(void) {

	i1 v3521 = (i1)+0;
	i8 v3522 = (i8)(intptr_t)(ws+3596);
	*(i1*)(intptr_t)v3522 = v3521;

	i4 v3523 = (i4)+0;
	i8 v3524 = (i8)(intptr_t)(ws+3592);
	i4 v3525 = *(i4*)(intptr_t)v3524;
	if ((s4)v3523<(s4)v3525) goto c01_0276; else goto c01_0275;

c01_0276:;

	i8 v3526 = (i8)(intptr_t)(ws+3592);
	i4 v3527 = *(i4*)(intptr_t)v3526;
	i8 v3528 = (i8)(intptr_t)(ws+3592);
	i4 v3529 = *(i4*)(intptr_t)v3528;
	i4 v3530 = v3529+(-1);
	i4 v3531 = v3527&v3530;
	i4 v3532 = (i4)+0;
	if (v3531==v3532) goto c01_0274; else goto c01_0275;

c01_0274:;

c01_0277:;

	i8 v3533 = (i8)(intptr_t)(ws+3592);
	i4 v3534 = *(i4*)(intptr_t)v3533;
	i4 v3535 = (i4)+0;
	if (v3534==v3535) goto c01_027c; else goto c01_027b;

c01_027b:;

	i8 v3536 = (i8)(intptr_t)(ws+3596);
	i1 v3537 = *(i1*)(intptr_t)v3536;
	i1 v3538 = v3537+(+1);
	i8 v3539 = (i8)(intptr_t)(ws+3596);
	*(i1*)(intptr_t)v3539 = v3538;

	i8 v3540 = (i8)(intptr_t)(ws+3592);
	i4 v3541 = *(i4*)(intptr_t)v3540;
	i1 v3542 = (i1)+1;
	i4 v3543 = ((s4)v3541)>>v3542;
	i8 v3544 = (i8)(intptr_t)(ws+3592);
	*(i4*)(intptr_t)v3544 = v3543;

	goto c01_0277;

c01_027c:;

c01_0275:;

c01_026f:;

}
	void f168_FoldConstant2(void);
	void f106_MidConstant(void);
	void f62_Discard(void);
	void f62_Discard(void);
	void f170_GetPowerOfTwo(void);
	void f62_Discard(void);
	void f106_MidConstant(void);
	void f62_Discard(void);
	void f62_Discard(void);
	void f62_Discard(void);
	void f62_Discard(void);
	void f168_FoldConstant2(void);
	void f62_Discard(void);
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidC2Op workspace at ws+3496 length ws+96
void f171_MidC2Op(void) {

	i8 v3545 = (i8)(intptr_t)(ws+3496);
	i1 v3546 = *(i1*)(intptr_t)v3545;
	i1 v3547 = (i1)+131;
	if (v3546==v3547) goto c01_0284; else goto c01_0283;

c01_0284:;

	i8 v3548 = (i8)(intptr_t)(ws+3512);
	i8 v3549 = *(i8*)(intptr_t)v3548;
	i8 v3550 = v3549+(+48);
	i1 v3551 = *(i1*)(intptr_t)v3550;
	i1 v3552 = (i1)+40;
	if (v3551==v3552) goto c01_0282; else goto c01_0283;

c01_0282:;

	i8 v3553 = (i8)(intptr_t)(ws+3512);
	i8 v3554 = *(i8*)(intptr_t)v3553;
	i4 v3555 = *(i4*)(intptr_t)v3554;
	i4 v3556 = -v3555;
	i8 v3557 = (i8)(intptr_t)(ws+3512);
	i8 v3558 = *(i8*)(intptr_t)v3557;
	*(i4*)(intptr_t)v3558 = v3556;

	i1 v3559 = (i1)+156;
	i8 v3560 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3560 = v3559;

c01_0283:;

c01_027d:;

	i8 v3561 = (i8)(intptr_t)(ws+3496);
	i1 v3562 = *(i1*)(intptr_t)v3561;
	i1 v3563 = (i1)+156;
	if (v3562<v3563) goto c01_0289; else goto c01_0288;

c01_0288:;

	i8 v3564 = (i8)(intptr_t)(ws+3504);
	i8 v3565 = *(i8*)(intptr_t)v3564;
	i8 v3566 = v3565+(+48);
	i1 v3567 = *(i1*)(intptr_t)v3566;
	i1 v3568 = (i1)+40;
	if (v3567==v3568) goto c01_028d; else goto c01_028e;

c01_028d:;

	i8 v3569 = (i8)(intptr_t)(ws+3504);
	i8 v3570 = *(i8*)(intptr_t)v3569;
	i8 v3571 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3571 = v3570;

	i8 v3572 = (i8)(intptr_t)(ws+3512);
	i8 v3573 = *(i8*)(intptr_t)v3572;
	i8 v3574 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3574 = v3573;

	i8 v3575 = (i8)(intptr_t)(ws+3528);
	i8 v3576 = *(i8*)(intptr_t)v3575;
	i8 v3577 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3577 = v3576;

c01_028e:;

c01_028a:;

	i8 v3578 = (i8)(intptr_t)(ws+3512);
	i8 v3579 = *(i8*)(intptr_t)v3578;
	i8 v3580 = v3579+(+48);
	i1 v3581 = *(i1*)(intptr_t)v3580;
	i1 v3582 = (i1)+40;
	if (v3581==v3582) goto c01_029c; else goto c01_0299;

c01_029c:;

	i8 v3583 = (i8)(intptr_t)(ws+3504);
	i8 v3584 = *(i8*)(intptr_t)v3583;
	i8 v3585 = v3584+(+48);
	i1 v3586 = *(i1*)(intptr_t)v3585;
	i8 v3587 = (i8)(intptr_t)(ws+3496);
	i1 v3588 = *(i1*)(intptr_t)v3587;
	if (v3586<v3588) goto c01_0299; else goto c01_029b;

c01_029b:;

	i8 v3589 = (i8)(intptr_t)(ws+3496);
	i1 v3590 = *(i1*)(intptr_t)v3589;
	i1 v3591 = v3590+(+4);
	i8 v3592 = (i8)(intptr_t)(ws+3504);
	i8 v3593 = *(i8*)(intptr_t)v3592;
	i8 v3594 = v3593+(+48);
	i1 v3595 = *(i1*)(intptr_t)v3594;
	if (v3591<v3595) goto c01_0299; else goto c01_029a;

c01_029a:;

	i8 v3596 = (i8)(intptr_t)(ws+3504);
	i8 v3597 = *(i8*)(intptr_t)v3596;
	i8 v3598 = v3597+(+40);
	i8 v3599 = *(i8*)(intptr_t)v3598;
	i8 v3600 = v3599+(+48);
	i1 v3601 = *(i1*)(intptr_t)v3600;
	i1 v3602 = (i1)+40;
	if (v3601==v3602) goto c01_0298; else goto c01_0299;

c01_0298:;

	i8 v3603 = (i8)(intptr_t)(ws+3496);
	i1 v3604 = *(i1*)(intptr_t)v3603;
	*(i1*)(intptr_t)(ws+3592) = v3604;
	i8 v3605 = (i8)(intptr_t)(ws+3504);
	i8 v3606 = *(i8*)(intptr_t)v3605;
	i8 v3607 = v3606+(+40);
	i8 v3608 = *(i8*)(intptr_t)v3607;
	*(i8*)(intptr_t)(ws+3600) = v3608;
	i8 v3609 = (i8)(intptr_t)(ws+3512);
	i8 v3610 = *(i8*)(intptr_t)v3609;
	*(i8*)(intptr_t)(ws+3608) = v3610;
	i8 v3611 = (i8)(intptr_t)(f168_FoldConstant2);

	((void(*)(void))(intptr_t)v3611)();

	i4 v3612 = *(i4*)(intptr_t)(ws+3616);
	i8 v3613 = (i8)(intptr_t)(ws+3536);
	*(i4*)(intptr_t)v3613 = v3612;

	i8 v3614 = (i8)(intptr_t)(ws+3536);
	i4 v3615 = *(i4*)(intptr_t)v3614;
	*(i4*)(intptr_t)(ws+3592) = v3615;
	i8 v3616 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v3616)();

	i8 v3617 = *(i8*)(intptr_t)(ws+3600);
	i8 v3618 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v3618 = v3617;

	i8 v3619 = (i8)(intptr_t)(ws+3544);
	i8 v3620 = *(i8*)(intptr_t)v3619;
	i8 v3621 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3621 = v3620;

	i8 v3622 = (i8)(intptr_t)(ws+3512);
	i8 v3623 = *(i8*)(intptr_t)v3622;
	*(i8*)(intptr_t)(ws+3592) = v3623;
	i8 v3624 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v3624)();

	i8 v3625 = (i8)(intptr_t)(ws+3528);
	i8 v3626 = *(i8*)(intptr_t)v3625;
	i8 v3627 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3627 = v3626;

	i8 v3628 = (i8)(intptr_t)(ws+3504);
	i8 v3629 = *(i8*)(intptr_t)v3628;
	i8 v3630 = v3629+(+32);
	i8 v3631 = *(i8*)(intptr_t)v3630;
	i8 v3632 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3632 = v3631;

	i8 v3633 = (i8)+0;
	i8 v3634 = (i8)(intptr_t)(ws+3504);
	i8 v3635 = *(i8*)(intptr_t)v3634;
	i8 v3636 = v3635+(+32);
	*(i8*)(intptr_t)v3636 = v3633;

	i8 v3637 = (i8)(intptr_t)(ws+3504);
	i8 v3638 = *(i8*)(intptr_t)v3637;
	*(i8*)(intptr_t)(ws+3592) = v3638;
	i8 v3639 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v3639)();

	i8 v3640 = (i8)(intptr_t)(ws+3528);
	i8 v3641 = *(i8*)(intptr_t)v3640;
	i8 v3642 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3642 = v3641;

c01_0299:;

c01_028f:;

c01_0289:;

c01_0285:;

	i8 v3643 = (i8)(intptr_t)(ws+3504);
	i8 v3644 = *(i8*)(intptr_t)v3643;
	i8 v3645 = v3644+(+48);
	i1 v3646 = *(i1*)(intptr_t)v3645;
	i1 v3647 = (i1)+40;
	if (v3646==v3647) goto c01_02a3; else goto c01_02a4;

c01_02a4:;

	i8 v3648 = (i8)(intptr_t)(ws+3512);
	i8 v3649 = *(i8*)(intptr_t)v3648;
	i8 v3650 = v3649+(+48);
	i1 v3651 = *(i1*)(intptr_t)v3650;
	i1 v3652 = (i1)+40;
	if (v3651==v3652) goto c01_02a2; else goto c01_02a3;

c01_02a2:;

	i8 v3653 = (i8)(intptr_t)(ws+3496);
	i1 v3654 = *(i1*)(intptr_t)v3653;
	i1 v3655 = (i1)+161;
	if (v3654==v3655) goto c01_02ac; else goto c01_02af;

c01_02af:;

	i8 v3656 = (i8)(intptr_t)(ws+3496);
	i1 v3657 = *(i1*)(intptr_t)v3656;
	i1 v3658 = (i1)+141;
	if (v3657==v3658) goto c01_02ac; else goto c01_02ae;

c01_02ae:;

	i8 v3659 = (i8)(intptr_t)(ws+3496);
	i1 v3660 = *(i1*)(intptr_t)v3659;
	i1 v3661 = (i1)+136;
	if (v3660==v3661) goto c01_02ac; else goto c01_02ad;

c01_02ac:;

	i8 v3662 = (i8)(intptr_t)(ws+3512);
	i8 v3663 = *(i8*)(intptr_t)v3662;
	i4 v3664 = *(i4*)(intptr_t)v3663;
	i8 v3665 = (i8)(intptr_t)(ws+3552);
	*(i4*)(intptr_t)v3665 = v3664;

	i8 v3666 = (i8)(intptr_t)(ws+3552);
	i4 v3667 = *(i4*)(intptr_t)v3666;
	*(i4*)(intptr_t)(ws+3592) = v3667;
	i8 v3668 = (i8)(intptr_t)(f170_GetPowerOfTwo);

	((void(*)(void))(intptr_t)v3668)();

	i1 v3669 = *(i1*)(intptr_t)(ws+3596);
	i8 v3670 = (i8)(intptr_t)(ws+3556);
	*(i1*)(intptr_t)v3670 = v3669;

	i8 v3671 = (i8)(intptr_t)(ws+3556);
	i1 v3672 = *(i1*)(intptr_t)v3671;
	i8 v3673 = (i8)(intptr_t)(ws+3557);
	*(i1*)(intptr_t)v3673 = v3672;

	i8 v3674 = (i8)(intptr_t)(ws+3557);
	i1 v3675 = *(i1*)(intptr_t)v3674;
	i1 v3676 = (i1)+0;
	if (v3675==v3676) goto c01_02b4; else goto c01_02b3;

c01_02b3:;

	i8 v3677 = (i8)(intptr_t)(ws+3512);
	i8 v3678 = *(i8*)(intptr_t)v3677;
	*(i8*)(intptr_t)(ws+3592) = v3678;
	i8 v3679 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v3679)();

	i8 v3680 = (i8)(intptr_t)(ws+3557);
	i1 v3681 = *(i1*)(intptr_t)v3680;
	i1 v3682 = v3681+(-1);
	i4 v3683 = v3682;
	*(i4*)(intptr_t)(ws+3592) = v3683;
	i8 v3684 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v3684)();

	i8 v3685 = *(i8*)(intptr_t)(ws+3600);
	i8 v3686 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v3686 = v3685;

	i8 v3687 = (i8)(intptr_t)(ws+3560);
	i8 v3688 = *(i8*)(intptr_t)v3687;
	i8 v3689 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3689 = v3688;

	i8 v3690 = (i8)(intptr_t)(ws+3496);
	i1 v3691 = *(i1*)(intptr_t)v3690;

	if (v3691 != +161) goto c01_02b6;

	i1 v3692 = (i1)+116;
	i8 v3693 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3693 = v3692;

	goto c01_02b5;

c01_02b6:;

	if (v3691 != +141) goto c01_02b7;

	i1 v3694 = (i1)+126;
	i8 v3695 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3695 = v3694;

	goto c01_02b5;

c01_02b7:;

	if (v3691 != +136) goto c01_02b8;

	i1 v3696 = (i1)+121;
	i8 v3697 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3697 = v3696;

c01_02b8:;

c01_02b5:;


c01_02b4:;

c01_02b0:;

c01_02ad:;

c01_02a5:;

	i8 v3698 = (i8)(intptr_t)(ws+3496);
	i1 v3699 = *(i1*)(intptr_t)v3698;
	i1 v3700 = (i1)+116;
	if (v3699==v3700) goto c01_02c0; else goto c01_02c3;

c01_02c3:;

	i8 v3701 = (i8)(intptr_t)(ws+3496);
	i1 v3702 = *(i1*)(intptr_t)v3701;
	i1 v3703 = (i1)+121;
	if (v3702==v3703) goto c01_02c0; else goto c01_02c2;

c01_02c2:;

	i8 v3704 = (i8)(intptr_t)(ws+3496);
	i1 v3705 = *(i1*)(intptr_t)v3704;
	i1 v3706 = (i1)+126;
	if (v3705==v3706) goto c01_02c0; else goto c01_02c1;

c01_02c0:;

	i8 v3707 = (i8)(intptr_t)(ws+3512);
	i8 v3708 = *(i8*)(intptr_t)v3707;
	i4 v3709 = *(i4*)(intptr_t)v3708;
	i4 v3710 = (i4)+0;
	if (v3709==v3710) goto c01_02c7; else goto c01_02c8;

c01_02c7:;

	i8 v3711 = (i8)(intptr_t)(ws+3512);
	i8 v3712 = *(i8*)(intptr_t)v3711;
	*(i8*)(intptr_t)(ws+3592) = v3712;
	i8 v3713 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v3713)();

	i8 v3714 = (i8)(intptr_t)(ws+3504);
	i8 v3715 = *(i8*)(intptr_t)v3714;
	i8 v3716 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3716 = v3715;

	return;

c01_02c8:;

c01_02c4:;

c01_02c1:;

c01_02b9:;

	i8 v3717 = (i8)(intptr_t)(ws+3496);
	i1 v3718 = *(i1*)(intptr_t)v3717;
	i1 v3719 = (i1)+156;
	if (v3718==v3719) goto c01_02ce; else goto c01_02d0;

c01_02d0:;

	i8 v3720 = (i8)(intptr_t)(ws+3496);
	i1 v3721 = *(i1*)(intptr_t)v3720;
	i1 v3722 = (i1)+131;
	if (v3721==v3722) goto c01_02ce; else goto c01_02cf;

c01_02ce:;

	i8 v3723 = (i8)(intptr_t)(ws+3512);
	i8 v3724 = *(i8*)(intptr_t)v3723;
	i4 v3725 = *(i4*)(intptr_t)v3724;
	i4 v3726 = (i4)+0;
	if (v3725==v3726) goto c01_02d4; else goto c01_02d5;

c01_02d4:;

	i8 v3727 = (i8)(intptr_t)(ws+3512);
	i8 v3728 = *(i8*)(intptr_t)v3727;
	*(i8*)(intptr_t)(ws+3592) = v3728;
	i8 v3729 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v3729)();

	i8 v3730 = (i8)(intptr_t)(ws+3504);
	i8 v3731 = *(i8*)(intptr_t)v3730;
	i8 v3732 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3732 = v3731;

	return;

c01_02d5:;

c01_02d1:;

	i8 v3733 = (i8)(intptr_t)(ws+3504);
	i8 v3734 = *(i8*)(intptr_t)v3733;
	i8 v3735 = v3734+(+48);
	i1 v3736 = *(i1*)(intptr_t)v3735;
	i1 v3737 = (i1)+42;
	if (v3736==v3737) goto c01_02d9; else goto c01_02da;

c01_02d9:;

	i8 v3738 = (i8)(intptr_t)(ws+3512);
	i8 v3739 = *(i8*)(intptr_t)v3738;
	i4 v3740 = *(i4*)(intptr_t)v3739;
	i2 v3741 = (s2)(s4)v3740;
	i8 v3742 = (i8)(intptr_t)(ws+3568);
	*(i2*)(intptr_t)v3742 = v3741;

	i8 v3743 = (i8)(intptr_t)(ws+3496);
	i1 v3744 = *(i1*)(intptr_t)v3743;

	if (v3744 != +156) goto c01_02dc;

	i8 v3745 = (i8)(intptr_t)(ws+3504);
	i8 v3746 = *(i8*)(intptr_t)v3745;
	i8 v3747 = v3746+(+8);
	i2 v3748 = *(i2*)(intptr_t)v3747;
	i8 v3749 = (i8)(intptr_t)(ws+3568);
	i2 v3750 = *(i2*)(intptr_t)v3749;
	i2 v3751 = v3748+v3750;
	i8 v3752 = (i8)(intptr_t)(ws+3504);
	i8 v3753 = *(i8*)(intptr_t)v3752;
	i8 v3754 = v3753+(+8);
	*(i2*)(intptr_t)v3754 = v3751;

	i8 v3755 = (i8)(intptr_t)(ws+3512);
	i8 v3756 = *(i8*)(intptr_t)v3755;
	*(i8*)(intptr_t)(ws+3592) = v3756;
	i8 v3757 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v3757)();

	i8 v3758 = (i8)(intptr_t)(ws+3504);
	i8 v3759 = *(i8*)(intptr_t)v3758;
	i8 v3760 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3760 = v3759;

	return;

c01_02dc:;

	if (v3744 != +131) goto c01_02dd;

	i8 v3761 = (i8)(intptr_t)(ws+3504);
	i8 v3762 = *(i8*)(intptr_t)v3761;
	i8 v3763 = v3762+(+8);
	i2 v3764 = *(i2*)(intptr_t)v3763;
	i8 v3765 = (i8)(intptr_t)(ws+3568);
	i2 v3766 = *(i2*)(intptr_t)v3765;
	i2 v3767 = v3764-v3766;
	i8 v3768 = (i8)(intptr_t)(ws+3504);
	i8 v3769 = *(i8*)(intptr_t)v3768;
	i8 v3770 = v3769+(+8);
	*(i2*)(intptr_t)v3770 = v3767;

	i8 v3771 = (i8)(intptr_t)(ws+3512);
	i8 v3772 = *(i8*)(intptr_t)v3771;
	*(i8*)(intptr_t)(ws+3592) = v3772;
	i8 v3773 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v3773)();

	i8 v3774 = (i8)(intptr_t)(ws+3504);
	i8 v3775 = *(i8*)(intptr_t)v3774;
	i8 v3776 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3776 = v3775;

	return;

c01_02dd:;

c01_02db:;


c01_02da:;

c01_02d6:;

c01_02cf:;

c01_02c9:;

c01_02a3:;

c01_029d:;

	i8 v3777 = (i8)(intptr_t)(ws+3504);
	i8 v3778 = *(i8*)(intptr_t)v3777;
	i8 v3779 = v3778+(+48);
	i1 v3780 = *(i1*)(intptr_t)v3779;
	i1 v3781 = (i1)+40;
	if (v3780==v3781) goto c01_02e5; else goto c01_02e4;

c01_02e5:;

	i8 v3782 = (i8)(intptr_t)(ws+3512);
	i8 v3783 = *(i8*)(intptr_t)v3782;
	i8 v3784 = v3783+(+48);
	i1 v3785 = *(i1*)(intptr_t)v3784;
	i1 v3786 = (i1)+40;
	if (v3785==v3786) goto c01_02e3; else goto c01_02e4;

c01_02e3:;

	i8 v3787 = (i8)(intptr_t)(ws+3496);
	i1 v3788 = *(i1*)(intptr_t)v3787;
	*(i1*)(intptr_t)(ws+3592) = v3788;
	i8 v3789 = (i8)(intptr_t)(ws+3504);
	i8 v3790 = *(i8*)(intptr_t)v3789;
	*(i8*)(intptr_t)(ws+3600) = v3790;
	i8 v3791 = (i8)(intptr_t)(ws+3512);
	i8 v3792 = *(i8*)(intptr_t)v3791;
	*(i8*)(intptr_t)(ws+3608) = v3792;
	i8 v3793 = (i8)(intptr_t)(f168_FoldConstant2);

	((void(*)(void))(intptr_t)v3793)();

	i4 v3794 = *(i4*)(intptr_t)(ws+3616);
	i8 v3795 = (i8)(intptr_t)(ws+3572);
	*(i4*)(intptr_t)v3795 = v3794;

	i8 v3796 = (i8)(intptr_t)(ws+3572);
	i4 v3797 = *(i4*)(intptr_t)v3796;
	i8 v3798 = (i8)(intptr_t)(ws+3504);
	i8 v3799 = *(i8*)(intptr_t)v3798;
	*(i4*)(intptr_t)v3799 = v3797;

	i8 v3800 = (i8)(intptr_t)(ws+3512);
	i8 v3801 = *(i8*)(intptr_t)v3800;
	*(i8*)(intptr_t)(ws+3592) = v3801;
	i8 v3802 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v3802)();

	i8 v3803 = (i8)(intptr_t)(ws+3504);
	i8 v3804 = *(i8*)(intptr_t)v3803;
	i8 v3805 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3805 = v3804;

	return;

c01_02e4:;

c01_02de:;

	i8 v3806 = (i8)(intptr_t)(ws+3497);
	i1 v3807 = *(i1*)(intptr_t)v3806;
	*(i1*)(intptr_t)(ws+3592) = v3807;
	i8 v3808 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v3808)();

	i1 v3809 = *(i1*)(intptr_t)(ws+3593);
	i8 v3810 = (i8)(intptr_t)(ws+3576);
	*(i1*)(intptr_t)v3810 = v3809;

	i8 v3811 = (i8)(intptr_t)(ws+3496);
	i1 v3812 = *(i1*)(intptr_t)v3811;
	i8 v3813 = (i8)(intptr_t)(ws+3576);
	i1 v3814 = *(i1*)(intptr_t)v3813;
	i1 v3815 = v3812+v3814;
	*(i1*)(intptr_t)(ws+3616) = v3815;
	i8 v3816 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3816)();

	i8 v3817 = *(i8*)(intptr_t)(ws+3624);
	i8 v3818 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v3818 = v3817;

	i8 v3819 = (i8)(intptr_t)(ws+3584);
	i8 v3820 = *(i8*)(intptr_t)v3819;
	i8 v3821 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3821 = v3820;

	i8 v3822 = (i8)(intptr_t)(ws+3504);
	i8 v3823 = *(i8*)(intptr_t)v3822;
	i8 v3824 = (i8)(intptr_t)(ws+3520);
	i8 v3825 = *(i8*)(intptr_t)v3824;
	i8 v3826 = v3825+(+32);
	*(i8*)(intptr_t)v3826 = v3823;

	i8 v3827 = (i8)(intptr_t)(ws+3512);
	i8 v3828 = *(i8*)(intptr_t)v3827;
	i8 v3829 = (i8)(intptr_t)(ws+3520);
	i8 v3830 = *(i8*)(intptr_t)v3829;
	i8 v3831 = v3830+(+40);
	*(i8*)(intptr_t)v3831 = v3828;

}
	void f101_WidthToIndex(void);
	void f102_AllocateNewNode(void);

// MidCCast workspace at ws+3496 length ws+48
void f172_MidCCast(void) {

	i8 v3832 = (i8)(intptr_t)(ws+3504);
	i8 v3833 = *(i8*)(intptr_t)v3832;
	i8 v3834 = v3833+(+48);
	i1 v3835 = *(i1*)(intptr_t)v3834;
	i1 v3836 = (i1)+40;
	if (v3835==v3836) goto c01_02e9; else goto c01_02ea;

c01_02e9:;

	i8 v3837 = (i8)(intptr_t)(ws+3504);
	i8 v3838 = *(i8*)(intptr_t)v3837;
	i8 v3839 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3839 = v3838;

	return;

c01_02ea:;

c01_02e6:;

	i8 v3840 = (i8)(intptr_t)(ws+3504);
	i8 v3841 = *(i8*)(intptr_t)v3840;
	i8 v3842 = v3841+(+24);
	i8 v3843 = *(i8*)(intptr_t)v3842;
	i8 v3844 = v3843+(+48);
	i2 v3845 = *(i2*)(intptr_t)v3844;
	i1 v3846 = v3845;
	i8 v3847 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v3847 = v3846;

	i8 v3848 = (i8)(intptr_t)(ws+3528);
	i1 v3849 = *(i1*)(intptr_t)v3848;
	i8 v3850 = (i8)(intptr_t)(ws+3496);
	i1 v3851 = *(i1*)(intptr_t)v3850;
	if (v3849==v3851) goto c01_02ee; else goto c01_02ef;

c01_02ee:;

	i8 v3852 = (i8)(intptr_t)(ws+3504);
	i8 v3853 = *(i8*)(intptr_t)v3852;
	i8 v3854 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3854 = v3853;

	goto c01_02eb;

c01_02ef:;

	i8 v3855 = (i8)(intptr_t)(ws+3528);
	i1 v3856 = *(i1*)(intptr_t)v3855;

	if (v3856 != +1) goto c01_02f1;

	i1 v3857 = (i1)+86;
	i8 v3858 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3858 = v3857;

	goto c01_02f0;

c01_02f1:;

	if (v3856 != +2) goto c01_02f2;

	i1 v3859 = (i1)+91;
	i8 v3860 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3860 = v3859;

	goto c01_02f0;

c01_02f2:;

	if (v3856 != +4) goto c01_02f3;

	i1 v3861 = (i1)+96;
	i8 v3862 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3862 = v3861;

	goto c01_02f0;

c01_02f3:;

	if (v3856 != +8) goto c01_02f4;

	i1 v3863 = (i1)+101;
	i8 v3864 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3864 = v3863;

c01_02f4:;

c01_02f0:;


	i8 v3865 = (i8)(intptr_t)(ws+3496);
	i1 v3866 = *(i1*)(intptr_t)v3865;
	*(i1*)(intptr_t)(ws+3592) = v3866;
	i8 v3867 = (i8)(intptr_t)(f101_WidthToIndex);

	((void(*)(void))(intptr_t)v3867)();

	i1 v3868 = *(i1*)(intptr_t)(ws+3593);
	i8 v3869 = (i8)(intptr_t)(ws+3530);
	*(i1*)(intptr_t)v3869 = v3868;

	i8 v3870 = (i8)(intptr_t)(ws+3529);
	i1 v3871 = *(i1*)(intptr_t)v3870;
	i8 v3872 = (i8)(intptr_t)(ws+3530);
	i1 v3873 = *(i1*)(intptr_t)v3872;
	i1 v3874 = v3871+v3873;
	*(i1*)(intptr_t)(ws+3616) = v3874;
	i8 v3875 = (i8)(intptr_t)(f102_AllocateNewNode);

	((void(*)(void))(intptr_t)v3875)();

	i8 v3876 = *(i8*)(intptr_t)(ws+3624);
	i8 v3877 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v3877 = v3876;

	i8 v3878 = (i8)(intptr_t)(ws+3536);
	i8 v3879 = *(i8*)(intptr_t)v3878;
	i8 v3880 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3880 = v3879;

	i8 v3881 = (i8)(intptr_t)(ws+3504);
	i8 v3882 = *(i8*)(intptr_t)v3881;
	i8 v3883 = (i8)(intptr_t)(ws+3520);
	i8 v3884 = *(i8*)(intptr_t)v3883;
	i8 v3885 = v3884+(+32);
	*(i8*)(intptr_t)v3885 = v3882;

	i8 v3886 = (i8)(intptr_t)(ws+3512);
	i1 v3887 = *(i1*)(intptr_t)v3886;
	i8 v3888 = (i8)(intptr_t)(ws+3520);
	i8 v3889 = *(i8*)(intptr_t)v3888;
	*(i1*)(intptr_t)v3889 = v3887;

c01_02eb:;

}
	void f46_FCBPutChar(void);

// E_b8 workspace at ws+3600 length ws+1
void f173_E_b8(void) {

	i8 v3890 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)(ws+3608) = v3890;
	i8 v3891 = (i8)(intptr_t)(ws+3600);
	i1 v3892 = *(i1*)(intptr_t)v3891;
	*(i1*)(intptr_t)(ws+3616) = v3892;
	i8 v3893 = (i8)(intptr_t)(f46_FCBPutChar);

	((void(*)(void))(intptr_t)v3893)();

}
	void f173_E_b8(void);
	void f173_E_b8(void);

// E_b16 workspace at ws+3576 length ws+2
void f174_E_b16(void) {

	i8 v3894 = (i8)(intptr_t)(ws+3576);
	i2 v3895 = *(i2*)(intptr_t)v3894;
	i1 v3896 = v3895;
	*(i1*)(intptr_t)(ws+3600) = v3896;
	i8 v3897 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v3897)();

	i8 v3898 = (i8)(intptr_t)(ws+3576);
	i2 v3899 = *(i2*)(intptr_t)v3898;
	i1 v3900 = (i1)+8;
	i2 v3901 = ((i2)v3899)>>v3900;
	i1 v3902 = v3901;
	*(i1*)(intptr_t)(ws+3600) = v3902;
	i8 v3903 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v3903)();

}
	void f174_E_b16(void);
	void f174_E_b16(void);

// E_b32 workspace at ws+3568 length ws+4
void f175_E_b32(void) {

	i8 v3904 = (i8)(intptr_t)(ws+3568);
	i4 v3905 = *(i4*)(intptr_t)v3904;
	i2 v3906 = v3905;
	*(i2*)(intptr_t)(ws+3576) = v3906;
	i8 v3907 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v3907)();

	i8 v3908 = (i8)(intptr_t)(ws+3568);
	i4 v3909 = *(i4*)(intptr_t)v3908;
	i1 v3910 = (i1)+16;
	i4 v3911 = ((i4)v3909)>>v3910;
	i2 v3912 = v3911;
	*(i2*)(intptr_t)(ws+3576) = v3912;
	i8 v3913 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v3913)();

}
	void f174_E_b16(void);

// E_bsize workspace at ws+3568 length ws+2
void f176_E_bsize(void) {

	i8 v3914 = (i8)(intptr_t)(ws+3568);
	i2 v3915 = *(i2*)(intptr_t)v3914;
	*(i2*)(intptr_t)(ws+3576) = v3915;
	i8 v3916 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v3916)();

}
	void f173_E_b8(void);

// E workspace at ws+3584 length ws+9
void f183_E(void) {

c01_02f5:;

	i8 v3929 = (i8)(intptr_t)(ws+3584);
	i8 v3930 = *(i8*)(intptr_t)v3929;
	i1 v3931 = *(i1*)(intptr_t)v3930;
	i8 v3932 = (i8)(intptr_t)(ws+3592);
	*(i1*)(intptr_t)v3932 = v3931;

	i8 v3933 = (i8)(intptr_t)(ws+3584);
	i8 v3934 = *(i8*)(intptr_t)v3933;
	i8 v3935 = v3934+(+1);
	i8 v3936 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v3936 = v3935;

	i8 v3937 = (i8)(intptr_t)(ws+3592);
	i1 v3938 = *(i1*)(intptr_t)v3937;
	i1 v3939 = (i1)+0;
	if (v3938==v3939) goto c01_02fa; else goto c01_02fb;

c01_02fa:;

	goto c01_02f6;

c01_02fb:;

c01_02f7:;

	i8 v3940 = (i8)(intptr_t)(ws+3592);
	i1 v3941 = *(i1*)(intptr_t)v3940;
	*(i1*)(intptr_t)(ws+3600) = v3941;
	i8 v3942 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v3942)();

	goto c01_02f5;

c01_02f6:;

}
	void f28_StrLen(void);
	void f173_E_b8(void);
	void f183_E(void);

// E_countedstring workspace at ws+3568 length ws+16
void f184_E_countedstring(void) {

	i8 v3943 = (i8)(intptr_t)(ws+3568);
	i8 v3944 = *(i8*)(intptr_t)v3943;
	*(i8*)(intptr_t)(ws+3584) = v3944;
	i8 v3945 = (i8)(intptr_t)(f28_StrLen);

	((void(*)(void))(intptr_t)v3945)();

	i8 v3946 = *(i8*)(intptr_t)(ws+3592);
	i8 v3947 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v3947 = v3946;

	i8 v3948 = (i8)(intptr_t)(ws+3576);
	i8 v3949 = *(i8*)(intptr_t)v3948;
	i1 v3950 = v3949;
	*(i1*)(intptr_t)(ws+3600) = v3950;
	i8 v3951 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v3951)();

	i8 v3952 = (i8)(intptr_t)(ws+3568);
	i8 v3953 = *(i8*)(intptr_t)v3952;
	*(i8*)(intptr_t)(ws+3584) = v3953;
	i8 v3954 = (i8)(intptr_t)(f183_E);

	((void(*)(void))(intptr_t)v3954)();

}
	void f53_FCBOpenOut(void);
const i1 c01_s00f4[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f75_SimpleError(void);

// EmitterOpenfile workspace at ws+3264 length ws+9
void f195_EmitterOpenfile(void) {

	i8 v4076 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)(ws+3280) = v4076;
	i8 v4077 = (i8)(intptr_t)(ws+3264);
	i8 v4078 = *(i8*)(intptr_t)v4077;
	*(i8*)(intptr_t)(ws+3288) = v4078;
	i8 v4079 = (i8)(intptr_t)(f53_FCBOpenOut);

	((void(*)(void))(intptr_t)v4079)();

	i1 v4080 = *(i1*)(intptr_t)(ws+3296);
	i8 v4081 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v4081 = v4080;

	i8 v4082 = (i8)(intptr_t)(ws+3272);
	i1 v4083 = *(i1*)(intptr_t)v4082;
	i1 v4084 = (i1)+0;
	if (v4083==v4084) goto c01_031c; else goto c01_031b;

c01_031b:;

	i8 v4085 = (i8)(intptr_t)c01_s00f4;
	*(i8*)(intptr_t)(ws+3648) = v4085;
	i8 v4086 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v4086)();

c01_031c:;

c01_0318:;

}
	void f173_E_b8(void);
	void f54_FCBClose(void);
const i1 c01_s00f5[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f75_SimpleError(void);

// EmitterClosefile workspace at ws+3264 length ws+1
void f196_EmitterClosefile(void) {

	i1 v4087 = (i1)+69;
	*(i1*)(intptr_t)(ws+3600) = v4087;
	i8 v4088 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4088)();

	i8 v4089 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)(ws+3384) = v4089;
	i8 v4090 = (i8)(intptr_t)(f54_FCBClose);

	((void(*)(void))(intptr_t)v4090)();

	i1 v4091 = *(i1*)(intptr_t)(ws+3392);
	i8 v4092 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v4092 = v4091;

	i8 v4093 = (i8)(intptr_t)(ws+3264);
	i1 v4094 = *(i1*)(intptr_t)v4093;
	i1 v4095 = (i1)+0;
	if (v4094==v4095) goto c01_0321; else goto c01_0320;

c01_0320:;

	i8 v4096 = (i8)(intptr_t)c01_s00f5;
	*(i8*)(intptr_t)(ws+3648) = v4096;
	i8 v4097 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v4097)();

c01_0321:;

c01_031d:;

}
	void f173_E_b8(void);
	void f174_E_b16(void);
	void f184_E_countedstring(void);

// EmitterDeclareSubroutine workspace at ws+3416 length ws+8
void f197_EmitterDeclareSubroutine(void) {

	i1 v4098 = (i1)+78;
	*(i1*)(intptr_t)(ws+3600) = v4098;
	i8 v4099 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4099)();

	i8 v4100 = (i8)(intptr_t)(ws+3416);
	i8 v4101 = *(i8*)(intptr_t)v4100;
	i8 v4102 = v4101+(+56);
	i2 v4103 = *(i2*)(intptr_t)v4102;
	*(i2*)(intptr_t)(ws+3576) = v4103;
	i8 v4104 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v4104)();

	i8 v4105 = (i8)(intptr_t)(ws+3416);
	i8 v4106 = *(i8*)(intptr_t)v4105;
	i8 v4107 = *(i8*)(intptr_t)v4106;
	i8 v4108 = v4107+(+8);
	i8 v4109 = *(i8*)(intptr_t)v4108;
	*(i8*)(intptr_t)(ws+3568) = v4109;
	i8 v4110 = (i8)(intptr_t)(f184_E_countedstring);

	((void(*)(void))(intptr_t)v4110)();

}
	void f173_E_b8(void);
	void f174_E_b16(void);
	void f184_E_countedstring(void);

// EmitterDeclareExternalSubroutine workspace at ws+3384 length ws+16
void f198_EmitterDeclareExternalSubroutine(void) {

	i1 v4111 = (i1)+88;
	*(i1*)(intptr_t)(ws+3600) = v4111;
	i8 v4112 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4112)();

	i8 v4113 = (i8)(intptr_t)(ws+3384);
	i2 v4114 = *(i2*)(intptr_t)v4113;
	*(i2*)(intptr_t)(ws+3576) = v4114;
	i8 v4115 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v4115)();

	i8 v4116 = (i8)(intptr_t)(ws+3392);
	i8 v4117 = *(i8*)(intptr_t)v4116;
	*(i8*)(intptr_t)(ws+3568) = v4117;
	i8 v4118 = (i8)(intptr_t)(f184_E_countedstring);

	((void(*)(void))(intptr_t)v4118)();

}
	void f173_E_b8(void);
	void f174_E_b16(void);
	void f174_E_b16(void);

// EmitterReferenceSubroutineById workspace at ws+3512 length ws+4
void f199_EmitterReferenceSubroutineById(void) {

	i1 v4119 = (i1)+82;
	*(i1*)(intptr_t)(ws+3600) = v4119;
	i8 v4120 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4120)();

	i8 v4121 = (i8)(intptr_t)(ws+3512);
	i2 v4122 = *(i2*)(intptr_t)v4121;
	*(i2*)(intptr_t)(ws+3576) = v4122;
	i8 v4123 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v4123)();

	i8 v4124 = (i8)(intptr_t)(ws+3514);
	i2 v4125 = *(i2*)(intptr_t)v4124;
	*(i2*)(intptr_t)(ws+3576) = v4125;
	i8 v4126 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v4126)();

}
	void f199_EmitterReferenceSubroutineById(void);

// EmitterReferenceSubroutine workspace at ws+3496 length ws+16
void f200_EmitterReferenceSubroutine(void) {

	i8 v4127 = (i8)(intptr_t)(ws+3496);
	i8 v4128 = *(i8*)(intptr_t)v4127;
	i8 v4129 = v4128+(+56);
	i2 v4130 = *(i2*)(intptr_t)v4129;
	*(i2*)(intptr_t)(ws+3512) = v4130;
	i8 v4131 = (i8)(intptr_t)(ws+3504);
	i8 v4132 = *(i8*)(intptr_t)v4131;
	i8 v4133 = v4132+(+56);
	i2 v4134 = *(i2*)(intptr_t)v4133;
	*(i2*)(intptr_t)(ws+3514) = v4134;
	i8 v4135 = (i8)(intptr_t)(f199_EmitterReferenceSubroutineById);

	((void(*)(void))(intptr_t)v4135)();

}
	void f173_E_b8(void);
	void f174_E_b16(void);
	void f173_E_b8(void);
	void f176_E_bsize(void);

// EmitterDeclareWorkspace workspace at ws+3424 length ws+12
void f201_EmitterDeclareWorkspace(void) {

	i1 v4136 = (i1)+87;
	*(i1*)(intptr_t)(ws+3600) = v4136;
	i8 v4137 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4137)();

	i8 v4138 = (i8)(intptr_t)(ws+3424);
	i8 v4139 = *(i8*)(intptr_t)v4138;
	i8 v4140 = v4139+(+56);
	i2 v4141 = *(i2*)(intptr_t)v4140;
	*(i2*)(intptr_t)(ws+3576) = v4141;
	i8 v4142 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v4142)();

	i8 v4143 = (i8)(intptr_t)(ws+3432);
	i1 v4144 = *(i1*)(intptr_t)v4143;
	*(i1*)(intptr_t)(ws+3600) = v4144;
	i8 v4145 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4145)();

	i8 v4146 = (i8)(intptr_t)(ws+3434);
	i2 v4147 = *(i2*)(intptr_t)v4146;
	*(i2*)(intptr_t)(ws+3568) = v4147;
	i8 v4148 = (i8)(intptr_t)(f176_E_bsize);

	((void(*)(void))(intptr_t)v4148)();

}
	void f174_E_b16(void);
	void f173_E_b8(void);
	void f176_E_bsize(void);
	void f184_E_countedstring(void);
	void f173_E_b8(void);

// EmitParameterList workspace at ws+3424 length ws+8
void f202_EmitParameterList(void) {

c01_0322:;

	i8 v4149 = (i8)(intptr_t)(ws+3424);
	i8 v4150 = *(i8*)(intptr_t)v4149;
	i8 v4151 = (i8)+0;
	if (v4150==v4151) goto c01_0327; else goto c01_0326;

c01_0326:;

	i8 v4152 = (i8)(intptr_t)(ws+3424);
	i8 v4153 = *(i8*)(intptr_t)v4152;
	i8 v4154 = *(i8*)(intptr_t)v4153;
	i8 v4155 = v4154+(+8);
	i8 v4156 = *(i8*)(intptr_t)v4155;
	i8 v4157 = v4156+(+56);
	i2 v4158 = *(i2*)(intptr_t)v4157;
	*(i2*)(intptr_t)(ws+3576) = v4158;
	i8 v4159 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v4159)();

	i8 v4160 = (i8)(intptr_t)(ws+3424);
	i8 v4161 = *(i8*)(intptr_t)v4160;
	i8 v4162 = *(i8*)(intptr_t)v4161;
	i8 v4163 = v4162+(+26);
	i1 v4164 = *(i1*)(intptr_t)v4163;
	*(i1*)(intptr_t)(ws+3600) = v4164;
	i8 v4165 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4165)();

	i8 v4166 = (i8)(intptr_t)(ws+3424);
	i8 v4167 = *(i8*)(intptr_t)v4166;
	i8 v4168 = *(i8*)(intptr_t)v4167;
	i8 v4169 = v4168+(+24);
	i2 v4170 = *(i2*)(intptr_t)v4169;
	*(i2*)(intptr_t)(ws+3568) = v4170;
	i8 v4171 = (i8)(intptr_t)(f176_E_bsize);

	((void(*)(void))(intptr_t)v4171)();

	i8 v4172 = (i8)(intptr_t)(ws+3424);
	i8 v4173 = *(i8*)(intptr_t)v4172;
	i8 v4174 = v4173+(+8);
	i8 v4175 = *(i8*)(intptr_t)v4174;
	*(i8*)(intptr_t)(ws+3568) = v4175;
	i8 v4176 = (i8)(intptr_t)(f184_E_countedstring);

	((void(*)(void))(intptr_t)v4176)();

	i8 v4177 = (i8)(intptr_t)(ws+3424);
	i8 v4178 = *(i8*)(intptr_t)v4177;
	i8 v4179 = *(i8*)(intptr_t)v4178;
	i8 v4180 = *(i8*)(intptr_t)v4179;
	i8 v4181 = v4180+(+48);
	i2 v4182 = *(i2*)(intptr_t)v4181;
	i1 v4183 = v4182;
	*(i1*)(intptr_t)(ws+3600) = v4183;
	i8 v4184 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4184)();

	i8 v4185 = (i8)(intptr_t)(ws+3424);
	i8 v4186 = *(i8*)(intptr_t)v4185;
	i8 v4187 = *(i8*)(intptr_t)v4186;
	i8 v4188 = v4187+(+16);
	i8 v4189 = *(i8*)(intptr_t)v4188;
	i8 v4190 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v4190 = v4189;

	goto c01_0322;

c01_0327:;

}
	void f173_E_b8(void);
	void f174_E_b16(void);
	void f173_E_b8(void);
	void f98_GetInputParameter(void);
	void f202_EmitParameterList(void);

// EmitterEmitInputParameters workspace at ws+3408 length ws+16
void f203_EmitterEmitInputParameters(void) {

	i1 v4191 = (i1)+73;
	*(i1*)(intptr_t)(ws+3600) = v4191;
	i8 v4192 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4192)();

	i8 v4193 = (i8)(intptr_t)(ws+3408);
	i8 v4194 = *(i8*)(intptr_t)v4193;
	i8 v4195 = v4194+(+56);
	i2 v4196 = *(i2*)(intptr_t)v4195;
	*(i2*)(intptr_t)(ws+3576) = v4196;
	i8 v4197 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v4197)();

	i8 v4198 = (i8)(intptr_t)(ws+3408);
	i8 v4199 = *(i8*)(intptr_t)v4198;
	i8 v4200 = v4199+(+80);
	i1 v4201 = *(i1*)(intptr_t)v4200;
	*(i1*)(intptr_t)(ws+3600) = v4201;
	i8 v4202 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4202)();

	i8 v4203 = (i8)(intptr_t)(ws+3408);
	i8 v4204 = *(i8*)(intptr_t)v4203;
	*(i8*)(intptr_t)(ws+3464) = v4204;
	i1 v4205 = (i1)+0;
	*(i1*)(intptr_t)(ws+3472) = v4205;
	i8 v4206 = (i8)(intptr_t)(f98_GetInputParameter);

	((void(*)(void))(intptr_t)v4206)();

	i8 v4207 = *(i8*)(intptr_t)(ws+3480);
	i8 v4208 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4208 = v4207;

	i8 v4209 = (i8)(intptr_t)(ws+3416);
	i8 v4210 = *(i8*)(intptr_t)v4209;
	*(i8*)(intptr_t)(ws+3424) = v4210;
	i8 v4211 = (i8)(intptr_t)(f202_EmitParameterList);

	((void(*)(void))(intptr_t)v4211)();

}
	void f173_E_b8(void);
	void f174_E_b16(void);
	void f173_E_b8(void);
	void f99_GetOutputParameter(void);
	void f202_EmitParameterList(void);

// EmitterEmitOutputParameters workspace at ws+3408 length ws+16
void f204_EmitterEmitOutputParameters(void) {

	i1 v4212 = (i1)+79;
	*(i1*)(intptr_t)(ws+3600) = v4212;
	i8 v4213 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4213)();

	i8 v4214 = (i8)(intptr_t)(ws+3408);
	i8 v4215 = *(i8*)(intptr_t)v4214;
	i8 v4216 = v4215+(+56);
	i2 v4217 = *(i2*)(intptr_t)v4216;
	*(i2*)(intptr_t)(ws+3576) = v4217;
	i8 v4218 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v4218)();

	i8 v4219 = (i8)(intptr_t)(ws+3408);
	i8 v4220 = *(i8*)(intptr_t)v4219;
	i8 v4221 = v4220+(+81);
	i1 v4222 = *(i1*)(intptr_t)v4221;
	*(i1*)(intptr_t)(ws+3600) = v4222;
	i8 v4223 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4223)();

	i8 v4224 = (i8)(intptr_t)(ws+3408);
	i8 v4225 = *(i8*)(intptr_t)v4224;
	*(i8*)(intptr_t)(ws+3488) = v4225;
	i1 v4226 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v4226;
	i8 v4227 = (i8)(intptr_t)(f99_GetOutputParameter);

	((void(*)(void))(intptr_t)v4227)();

	i8 v4228 = *(i8*)(intptr_t)(ws+3504);
	i8 v4229 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4229 = v4228;

	i8 v4230 = (i8)(intptr_t)(ws+3416);
	i8 v4231 = *(i8*)(intptr_t)v4230;
	*(i8*)(intptr_t)(ws+3424) = v4231;
	i8 v4232 = (i8)(intptr_t)(f202_EmitParameterList);

	((void(*)(void))(intptr_t)v4232)();

}
	void f173_E_b8(void);
	void f174_E_b16(void);
	void f173_E_b8(void);

// EmitterEmitSubroutineFlags workspace at ws+3408 length ws+8
void f205_EmitterEmitSubroutineFlags(void) {

	i1 v4233 = (i1)+70;
	*(i1*)(intptr_t)(ws+3600) = v4233;
	i8 v4234 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4234)();

	i8 v4235 = (i8)(intptr_t)(ws+3408);
	i8 v4236 = *(i8*)(intptr_t)v4235;
	i8 v4237 = v4236+(+56);
	i2 v4238 = *(i2*)(intptr_t)v4237;
	*(i2*)(intptr_t)(ws+3576) = v4238;
	i8 v4239 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v4239)();

	i8 v4240 = (i8)(intptr_t)(ws+3408);
	i8 v4241 = *(i8*)(intptr_t)v4240;
	i8 v4242 = v4241+(+82);
	i1 v4243 = *(i1*)(intptr_t)v4242;
	*(i1*)(intptr_t)(ws+3600) = v4243;
	i8 v4244 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v4244)();

}
	void f25_StrCmp(void);

// LookupSymbolInNamespace workspace at ws+3528 length ws+25
void f215_LookupSymbolInNamespace(void) {

	i8 v4564 = (i8)(intptr_t)(ws+3528);
	i8 v4565 = *(i8*)(intptr_t)v4564;
	i8 v4566 = *(i8*)(intptr_t)v4565;
	i8 v4567 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4567 = v4566;

c01_03b0:;

	i8 v4568 = (i8)(intptr_t)(ws+3544);
	i8 v4569 = *(i8*)(intptr_t)v4568;
	i8 v4570 = (i8)+0;
	if (v4569==v4570) goto c01_03b5; else goto c01_03b4;

c01_03b4:;

	i8 v4571 = (i8)(intptr_t)(ws+3544);
	i8 v4572 = *(i8*)(intptr_t)v4571;
	i8 v4573 = v4572+(+8);
	i8 v4574 = *(i8*)(intptr_t)v4573;
	*(i8*)(intptr_t)(ws+3560) = v4574;
	i8 v4575 = (i8)(intptr_t)(ws+3536);
	i8 v4576 = *(i8*)(intptr_t)v4575;
	*(i8*)(intptr_t)(ws+3568) = v4576;
	i8 v4577 = (i8)(intptr_t)(f25_StrCmp);

	((void(*)(void))(intptr_t)v4577)();

	i1 v4578 = *(i1*)(intptr_t)(ws+3576);
	i8 v4579 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4579 = v4578;

	i8 v4580 = (i8)(intptr_t)(ws+3552);
	i1 v4581 = *(i1*)(intptr_t)v4580;
	i1 v4582 = (i1)+0;
	if (v4581==v4582) goto c01_03b9; else goto c01_03ba;

c01_03b9:;

c01_03bb:;

	i8 v4583 = (i8)(intptr_t)(ws+3544);
	i8 v4584 = *(i8*)(intptr_t)v4583;
	i8 v4585 = v4584+(+32);
	i1 v4586 = *(i1*)(intptr_t)v4585;
	i1 v4587 = (i1)+39;
	if (v4586==v4587) goto c01_03bf; else goto c01_03c0;

c01_03bf:;

	i8 v4588 = (i8)(intptr_t)(ws+3544);
	i8 v4589 = *(i8*)(intptr_t)v4588;
	i8 v4590 = *(i8*)(intptr_t)v4589;
	i8 v4591 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4591 = v4590;

	goto c01_03bb;

c01_03c0:;

	return;

c01_03ba:;

c01_03b6:;

	i8 v4592 = (i8)(intptr_t)(ws+3544);
	i8 v4593 = *(i8*)(intptr_t)v4592;
	i8 v4594 = v4593+(+24);
	i8 v4595 = *(i8*)(intptr_t)v4594;
	i8 v4596 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4596 = v4595;

	goto c01_03b0;

c01_03b5:;

	i8 v4597 = (i8)+0;
	i8 v4598 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4598 = v4597;

}
	void f215_LookupSymbolInNamespace(void);

// LookupSymbol workspace at ws+3488 length ws+32
void f216_LookupSymbol(void) {

	i8 v4599 = (i8)(intptr_t)(ws+3488);
	i8 v4600 = *(i8*)(intptr_t)v4599;
	i8 v4601 = (i8)+0;
	if (v4600==v4601) goto c01_03c4; else goto c01_03c5;

c01_03c4:;

	i8 v4602 = (i8)(intptr_t)(ws+40);
	i8 v4603 = *(i8*)(intptr_t)v4602;
	i8 v4604 = v4603+(+16);
	i8 v4605 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v4605 = v4604;

c01_03c5:;

c01_03c1:;

c01_03c6:;

	i8 v4606 = (i8)(intptr_t)(ws+3488);
	i8 v4607 = *(i8*)(intptr_t)v4606;
	i8 v4608 = (i8)+0;
	if (v4607==v4608) goto c01_03cb; else goto c01_03ca;

c01_03ca:;

	i8 v4609 = (i8)(intptr_t)(ws+3488);
	i8 v4610 = *(i8*)(intptr_t)v4609;
	*(i8*)(intptr_t)(ws+3528) = v4610;
	i8 v4611 = (i8)(intptr_t)(ws+3496);
	i8 v4612 = *(i8*)(intptr_t)v4611;
	*(i8*)(intptr_t)(ws+3536) = v4612;
	i8 v4613 = (i8)(intptr_t)(f215_LookupSymbolInNamespace);

	((void(*)(void))(intptr_t)v4613)();

	i8 v4614 = *(i8*)(intptr_t)(ws+3544);
	i8 v4615 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v4615 = v4614;

	i8 v4616 = (i8)(intptr_t)(ws+3512);
	i8 v4617 = *(i8*)(intptr_t)v4616;
	i8 v4618 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4618 = v4617;

	i8 v4619 = (i8)(intptr_t)(ws+3504);
	i8 v4620 = *(i8*)(intptr_t)v4619;
	i8 v4621 = (i8)+0;
	if (v4620==v4621) goto c01_03d0; else goto c01_03cf;

c01_03cf:;

	return;

c01_03d0:;

c01_03cc:;

	i8 v4622 = (i8)(intptr_t)(ws+3488);
	i8 v4623 = *(i8*)(intptr_t)v4622;
	i8 v4624 = v4623+(+16);
	i8 v4625 = *(i8*)(intptr_t)v4624;
	i8 v4626 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v4626 = v4625;

	goto c01_03c6;

c01_03cb:;

	i8 v4627 = (i8)+0;
	i8 v4628 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4628 = v4627;

}

// AddToNamespace workspace at ws+3568 length ws+16
void f217_AddToNamespace(void) {

	i8 v4629 = (i8)(intptr_t)(ws+3568);
	i8 v4630 = *(i8*)(intptr_t)v4629;
	i8 v4631 = v4630+(+8);
	i8 v4632 = *(i8*)(intptr_t)v4631;
	i8 v4633 = (i8)+0;
	if (v4632==v4633) goto c01_03d4; else goto c01_03d5;

c01_03d4:;

	i8 v4634 = (i8)(intptr_t)(ws+3576);
	i8 v4635 = *(i8*)(intptr_t)v4634;
	i8 v4636 = (i8)(intptr_t)(ws+3568);
	i8 v4637 = *(i8*)(intptr_t)v4636;
	*(i8*)(intptr_t)v4637 = v4635;

	i8 v4638 = (i8)(intptr_t)(ws+3576);
	i8 v4639 = *(i8*)(intptr_t)v4638;
	i8 v4640 = (i8)(intptr_t)(ws+3568);
	i8 v4641 = *(i8*)(intptr_t)v4640;
	i8 v4642 = v4641+(+8);
	*(i8*)(intptr_t)v4642 = v4639;

	goto c01_03d1;

c01_03d5:;

	i8 v4643 = (i8)(intptr_t)(ws+3576);
	i8 v4644 = *(i8*)(intptr_t)v4643;
	i8 v4645 = (i8)(intptr_t)(ws+3568);
	i8 v4646 = *(i8*)(intptr_t)v4645;
	i8 v4647 = v4646+(+8);
	i8 v4648 = *(i8*)(intptr_t)v4647;
	i8 v4649 = v4648+(+24);
	*(i8*)(intptr_t)v4649 = v4644;

	i8 v4650 = (i8)(intptr_t)(ws+3576);
	i8 v4651 = *(i8*)(intptr_t)v4650;
	i8 v4652 = (i8)(intptr_t)(ws+3568);
	i8 v4653 = *(i8*)(intptr_t)v4652;
	i8 v4654 = v4653+(+8);
	*(i8*)(intptr_t)v4654 = v4651;

c01_03d1:;

	i8 v4655 = (i8)(intptr_t)(ws+3568);
	i8 v4656 = *(i8*)(intptr_t)v4655;
	i8 v4657 = (i8)(intptr_t)(ws+3576);
	i8 v4658 = *(i8*)(intptr_t)v4657;
	i8 v4659 = v4658+(+16);
	*(i8*)(intptr_t)v4659 = v4656;

}
	void f63_AllocNewSymbol(void);
	void f215_LookupSymbolInNamespace(void);
	void f73_StartError(void);
const i1 c01_s00f6[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s00f7[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f11_print(void);
	void f74_EndError(void);
	void f217_AddToNamespace(void);

// AddSymbol workspace at ws+3488 length ws+40
void f218_AddSymbol(void) {

	i8 v4660 = (i8)(intptr_t)(ws+3488);
	i8 v4661 = *(i8*)(intptr_t)v4660;
	i8 v4662 = (i8)+0;
	if (v4661==v4662) goto c01_03d9; else goto c01_03da;

c01_03d9:;

	i8 v4663 = (i8)(intptr_t)(ws+40);
	i8 v4664 = *(i8*)(intptr_t)v4663;
	i8 v4665 = v4664+(+16);
	i8 v4666 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v4666 = v4665;

c01_03da:;

c01_03d6:;

	i8 v4667 = (i8)(intptr_t)(f63_AllocNewSymbol);

	((void(*)(void))(intptr_t)v4667)();

	i8 v4668 = *(i8*)(intptr_t)(ws+3568);
	i8 v4669 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v4669 = v4668;

	i8 v4670 = (i8)(intptr_t)(ws+3512);
	i8 v4671 = *(i8*)(intptr_t)v4670;
	i8 v4672 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4672 = v4671;

	i8 v4673 = (i8)(intptr_t)(ws+3496);
	i8 v4674 = *(i8*)(intptr_t)v4673;
	i8 v4675 = (i8)+0;
	if (v4674==v4675) goto c01_03df; else goto c01_03de;

c01_03de:;

	i8 v4676 = (i8)(intptr_t)(ws+3488);
	i8 v4677 = *(i8*)(intptr_t)v4676;
	*(i8*)(intptr_t)(ws+3528) = v4677;
	i8 v4678 = (i8)(intptr_t)(ws+3496);
	i8 v4679 = *(i8*)(intptr_t)v4678;
	*(i8*)(intptr_t)(ws+3536) = v4679;
	i8 v4680 = (i8)(intptr_t)(f215_LookupSymbolInNamespace);

	((void(*)(void))(intptr_t)v4680)();

	i8 v4681 = *(i8*)(intptr_t)(ws+3544);
	i8 v4682 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4682 = v4681;

	i8 v4683 = (i8)(intptr_t)(ws+3520);
	i8 v4684 = *(i8*)(intptr_t)v4683;
	i8 v4685 = (i8)+0;
	if (v4684==v4685) goto c01_03e4; else goto c01_03e3;

c01_03e3:;

	i8 v4686 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v4686)();

	i8 v4687 = (i8)(intptr_t)c01_s00f6;
	*(i8*)(intptr_t)(ws+3696) = v4687;
	i8 v4688 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v4688)();

	i8 v4689 = (i8)(intptr_t)(ws+3496);
	i8 v4690 = *(i8*)(intptr_t)v4689;
	*(i8*)(intptr_t)(ws+3696) = v4690;
	i8 v4691 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v4691)();

	i8 v4692 = (i8)(intptr_t)c01_s00f7;
	*(i8*)(intptr_t)(ws+3696) = v4692;
	i8 v4693 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v4693)();

	i8 v4694 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v4694)();

c01_03e4:;

c01_03e0:;

	i8 v4695 = (i8)(intptr_t)(ws+3496);
	i8 v4696 = *(i8*)(intptr_t)v4695;
	i8 v4697 = (i8)(intptr_t)(ws+3504);
	i8 v4698 = *(i8*)(intptr_t)v4697;
	i8 v4699 = v4698+(+8);
	*(i8*)(intptr_t)v4699 = v4696;

	i8 v4700 = (i8)(intptr_t)(ws+3488);
	i8 v4701 = *(i8*)(intptr_t)v4700;
	*(i8*)(intptr_t)(ws+3568) = v4701;
	i8 v4702 = (i8)(intptr_t)(ws+3504);
	i8 v4703 = *(i8*)(intptr_t)v4702;
	*(i8*)(intptr_t)(ws+3576) = v4703;
	i8 v4704 = (i8)(intptr_t)(f217_AddToNamespace);

	((void(*)(void))(intptr_t)v4704)();

c01_03df:;

c01_03db:;

}
	void f218_AddSymbol(void);

// AddAlias workspace at ws+3400 length ws+40
void f219_AddAlias(void) {

	i8 v4705 = (i8)(intptr_t)(ws+3400);
	i8 v4706 = *(i8*)(intptr_t)v4705;
	*(i8*)(intptr_t)(ws+3488) = v4706;
	i8 v4707 = (i8)(intptr_t)(ws+3408);
	i8 v4708 = *(i8*)(intptr_t)v4707;
	*(i8*)(intptr_t)(ws+3496) = v4708;
	i8 v4709 = (i8)(intptr_t)(f218_AddSymbol);

	((void(*)(void))(intptr_t)v4709)();

	i8 v4710 = *(i8*)(intptr_t)(ws+3504);
	i8 v4711 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v4711 = v4710;

	i8 v4712 = (i8)(intptr_t)(ws+3432);
	i8 v4713 = *(i8*)(intptr_t)v4712;
	i8 v4714 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v4714 = v4713;

	i1 v4715 = (i1)+39;
	i8 v4716 = (i8)(intptr_t)(ws+3424);
	i8 v4717 = *(i8*)(intptr_t)v4716;
	i8 v4718 = v4717+(+32);
	*(i1*)(intptr_t)v4718 = v4715;

	i8 v4719 = (i8)(intptr_t)(ws+3416);
	i8 v4720 = *(i8*)(intptr_t)v4719;
	i8 v4721 = (i8)(intptr_t)(ws+3424);
	i8 v4722 = *(i8*)(intptr_t)v4721;
	*(i8*)(intptr_t)v4722 = v4720;

}
	void f219_AddAlias(void);

// AddAliasString workspace at ws+3336 length ws+32
void f220_AddAliasString(void) {

	i8 v4723 = (i8)+0;
	*(i8*)(intptr_t)(ws+3400) = v4723;
	i8 v4724 = (i8)(intptr_t)(ws+3336);
	i8 v4725 = *(i8*)(intptr_t)v4724;
	*(i8*)(intptr_t)(ws+3408) = v4725;
	i8 v4726 = (i8)(intptr_t)(ws+3344);
	i8 v4727 = *(i8*)(intptr_t)v4726;
	*(i8*)(intptr_t)(ws+3416) = v4727;
	i8 v4728 = (i8)(intptr_t)(f219_AddAlias);

	((void(*)(void))(intptr_t)v4728)();

	i8 v4729 = *(i8*)(intptr_t)(ws+3424);
	i8 v4730 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4730 = v4729;

	i8 v4731 = (i8)(intptr_t)(ws+3352);
	i8 v4732 = *(i8*)(intptr_t)v4731;
	i8 v4733 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4733 = v4732;

}
	void f73_StartError(void);
const i1 c01_s00f8[] = { 0x27,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s00f9[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(void);
	void f74_EndError(void);

// CheckNotPartialType workspace at ws+3520 length ws+8
void f221_CheckNotPartialType(void) {

	i8 v4734 = (i8)(intptr_t)(ws+3520);
	i8 v4735 = *(i8*)(intptr_t)v4734;
	i8 v4736 = v4735+(+52);
	i1 v4737 = *(i1*)(intptr_t)v4736;
	i1 v4738 = (i1)+1;
	if (v4737==v4738) goto c01_03e8; else goto c01_03e9;

c01_03e8:;

	i8 v4739 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v4739)();

	i8 v4740 = (i8)(intptr_t)c01_s00f8;
	*(i8*)(intptr_t)(ws+3696) = v4740;
	i8 v4741 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v4741)();

	i8 v4742 = (i8)(intptr_t)(ws+3520);
	i8 v4743 = *(i8*)(intptr_t)v4742;
	i8 v4744 = v4743+(+32);
	i8 v4745 = *(i8*)(intptr_t)v4744;
	i8 v4746 = v4745+(+8);
	i8 v4747 = *(i8*)(intptr_t)v4746;
	*(i8*)(intptr_t)(ws+3696) = v4747;
	i8 v4748 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v4748)();

	i8 v4749 = (i8)(intptr_t)c01_s00f9;
	*(i8*)(intptr_t)(ws+3696) = v4749;
	i8 v4750 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v4750)();

	i8 v4751 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v4751)();

c01_03e9:;

c01_03e5:;

}
	void f63_AllocNewSymbol(void);
	void f217_AddToNamespace(void);

// AddTypeToNamespace workspace at ws+3528 length ws+40
void f222_AddTypeToNamespace(void) {

	i8 v4752 = (i8)(intptr_t)(f63_AllocNewSymbol);

	((void(*)(void))(intptr_t)v4752)();

	i8 v4753 = *(i8*)(intptr_t)(ws+3568);
	i8 v4754 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v4754 = v4753;

	i8 v4755 = (i8)(intptr_t)(ws+3552);
	i8 v4756 = *(i8*)(intptr_t)v4755;
	i8 v4757 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v4757 = v4756;

	i1 v4758 = (i1)+30;
	i8 v4759 = (i8)(intptr_t)(ws+3560);
	i8 v4760 = *(i8*)(intptr_t)v4759;
	i8 v4761 = v4760+(+32);
	*(i1*)(intptr_t)v4761 = v4758;

	i8 v4762 = (i8)(intptr_t)(ws+3536);
	i8 v4763 = *(i8*)(intptr_t)v4762;
	i8 v4764 = (i8)(intptr_t)(ws+3560);
	i8 v4765 = *(i8*)(intptr_t)v4764;
	*(i8*)(intptr_t)v4765 = v4763;

	i8 v4766 = (i8)(intptr_t)(ws+3544);
	i8 v4767 = *(i8*)(intptr_t)v4766;
	i8 v4768 = (i8)(intptr_t)(ws+3560);
	i8 v4769 = *(i8*)(intptr_t)v4768;
	i8 v4770 = v4769+(+8);
	*(i8*)(intptr_t)v4770 = v4767;

	i8 v4771 = (i8)(intptr_t)(ws+3560);
	i8 v4772 = *(i8*)(intptr_t)v4771;
	i8 v4773 = (i8)(intptr_t)(ws+3536);
	i8 v4774 = *(i8*)(intptr_t)v4773;
	i8 v4775 = v4774+(+32);
	*(i8*)(intptr_t)v4775 = v4772;

	i8 v4776 = (i8)(intptr_t)(ws+3528);
	i8 v4777 = *(i8*)(intptr_t)v4776;
	*(i8*)(intptr_t)(ws+3568) = v4777;
	i8 v4778 = (i8)(intptr_t)(ws+3560);
	i8 v4779 = *(i8*)(intptr_t)v4778;
	*(i8*)(intptr_t)(ws+3576) = v4779;
	i8 v4780 = (i8)(intptr_t)(f217_AddToNamespace);

	((void(*)(void))(intptr_t)v4780)();

}
	void f65_AllocNewType(void);
	void f222_AddTypeToNamespace(void);

// MakeNumberType workspace at ws+3336 length ws+32
void f223_MakeNumberType(void) {

	i8 v4781 = (i8)(intptr_t)(f65_AllocNewType);

	((void(*)(void))(intptr_t)v4781)();

	i8 v4782 = *(i8*)(intptr_t)(ws+3528);
	i8 v4783 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4783 = v4782;

	i8 v4784 = (i8)(intptr_t)(ws+3360);
	i8 v4785 = *(i8*)(intptr_t)v4784;
	i8 v4786 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4786 = v4785;

	i1 v4787 = (i1)+2;
	i8 v4788 = (i8)(intptr_t)(ws+3352);
	i8 v4789 = *(i8*)(intptr_t)v4788;
	i8 v4790 = v4789+(+52);
	*(i1*)(intptr_t)v4790 = v4787;

	i8 v4791 = (i8)(intptr_t)(ws+3336);
	i1 v4792 = *(i1*)(intptr_t)v4791;
	i2 v4793 = v4792;
	i8 v4794 = (i8)(intptr_t)(ws+3352);
	i8 v4795 = *(i8*)(intptr_t)v4794;
	i8 v4796 = v4795+(+48);
	*(i2*)(intptr_t)v4796 = v4793;

	i8 v4797 = (i8)(intptr_t)(ws+3336);
	i1 v4798 = *(i1*)(intptr_t)v4797;
	i2 v4799 = v4798;
	i8 v4800 = (i8)(intptr_t)(ws+3352);
	i8 v4801 = *(i8*)(intptr_t)v4800;
	i8 v4802 = v4801+(+50);
	*(i2*)(intptr_t)v4802 = v4799;

	i8 v4803 = (i8)(intptr_t)(ws+3337);
	i1 v4804 = *(i1*)(intptr_t)v4803;
	i8 v4805 = (i8)(intptr_t)(ws+3352);
	i8 v4806 = *(i8*)(intptr_t)v4805;
	i8 v4807 = v4806+(+53);
	*(i1*)(intptr_t)v4807 = v4804;

	i8 v4808 = (i8)(intptr_t)(ws+3338);
	i1 v4809 = *(i1*)(intptr_t)v4808;
	i8 v4810 = (i8)(intptr_t)(ws+3352);
	i8 v4811 = *(i8*)(intptr_t)v4810;
	*(i1*)(intptr_t)v4811 = v4809;

	i8 v4812 = (i8)(intptr_t)(ws+40);
	i8 v4813 = *(i8*)(intptr_t)v4812;
	i8 v4814 = v4813+(+16);
	*(i8*)(intptr_t)(ws+3528) = v4814;
	i8 v4815 = (i8)(intptr_t)(ws+3352);
	i8 v4816 = *(i8*)(intptr_t)v4815;
	*(i8*)(intptr_t)(ws+3536) = v4816;
	i8 v4817 = (i8)(intptr_t)(ws+3344);
	i8 v4818 = *(i8*)(intptr_t)v4817;
	*(i8*)(intptr_t)(ws+3544) = v4818;
	i8 v4819 = (i8)(intptr_t)(f222_AddTypeToNamespace);

	((void(*)(void))(intptr_t)v4819)();

}

// IsTypeOfKind workspace at ws+3576 length ws+10
void f224_IsTypeOfKind(void) {

	i1 v4820 = (i1)+0;
	i8 v4821 = (i8)(intptr_t)(ws+3585);
	*(i1*)(intptr_t)v4821 = v4820;

	i8 v4822 = (i8)(intptr_t)(ws+3576);
	i8 v4823 = *(i8*)(intptr_t)v4822;
	i8 v4824 = (i8)+0;
	if (v4823==v4824) goto c01_03f0; else goto c01_03f1;

c01_03f1:;

	i8 v4825 = (i8)(intptr_t)(ws+3576);
	i8 v4826 = *(i8*)(intptr_t)v4825;
	i8 v4827 = v4826+(+52);
	i1 v4828 = *(i1*)(intptr_t)v4827;
	i8 v4829 = (i8)(intptr_t)(ws+3584);
	i1 v4830 = *(i1*)(intptr_t)v4829;
	if (v4828==v4830) goto c01_03ef; else goto c01_03f0;

c01_03ef:;

	i1 v4831 = (i1)+1;
	i8 v4832 = (i8)(intptr_t)(ws+3585);
	*(i1*)(intptr_t)v4832 = v4831;

c01_03f0:;

c01_03ea:;

}
	void f224_IsTypeOfKind(void);

// IsArray workspace at ws+3496 length ws+10
void f225_IsArray(void) {

	i8 v4833 = (i8)(intptr_t)(ws+3496);
	i8 v4834 = *(i8*)(intptr_t)v4833;
	*(i8*)(intptr_t)(ws+3576) = v4834;
	i1 v4835 = (i1)+4;
	*(i1*)(intptr_t)(ws+3584) = v4835;
	i8 v4836 = (i8)(intptr_t)(f224_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4836)();

	i1 v4837 = *(i1*)(intptr_t)(ws+3585);
	i8 v4838 = (i8)(intptr_t)(ws+3505);
	*(i1*)(intptr_t)v4838 = v4837;

	i8 v4839 = (i8)(intptr_t)(ws+3505);
	i1 v4840 = *(i1*)(intptr_t)v4839;
	i8 v4841 = (i8)(intptr_t)(ws+3504);
	*(i1*)(intptr_t)v4841 = v4840;

}
	void f224_IsTypeOfKind(void);

// IsPtr workspace at ws+3560 length ws+10
void f67_IsPtr(void) {

	i8 v4842 = (i8)(intptr_t)(ws+3560);
	i8 v4843 = *(i8*)(intptr_t)v4842;
	*(i8*)(intptr_t)(ws+3576) = v4843;
	i1 v4844 = (i1)+3;
	*(i1*)(intptr_t)(ws+3584) = v4844;
	i8 v4845 = (i8)(intptr_t)(f224_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4845)();

	i1 v4846 = *(i1*)(intptr_t)(ws+3585);
	i8 v4847 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v4847 = v4846;

	i8 v4848 = (i8)(intptr_t)(ws+3569);
	i1 v4849 = *(i1*)(intptr_t)v4848;
	i8 v4850 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4850 = v4849;

}
	void f224_IsTypeOfKind(void);

// IsSubroutine workspace at ws+3560 length ws+10
void f226_IsSubroutine(void) {

	i8 v4851 = (i8)(intptr_t)(ws+3560);
	i8 v4852 = *(i8*)(intptr_t)v4851;
	*(i8*)(intptr_t)(ws+3576) = v4852;
	i1 v4853 = (i1)+6;
	*(i1*)(intptr_t)(ws+3584) = v4853;
	i8 v4854 = (i8)(intptr_t)(f224_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4854)();

	i1 v4855 = *(i1*)(intptr_t)(ws+3585);
	i8 v4856 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v4856 = v4855;

	i8 v4857 = (i8)(intptr_t)(ws+3569);
	i1 v4858 = *(i1*)(intptr_t)v4857;
	i8 v4859 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4859 = v4858;

}
	void f224_IsTypeOfKind(void);

// IsNum workspace at ws+3560 length ws+10
void f227_IsNum(void) {

	i8 v4860 = (i8)(intptr_t)(ws+3560);
	i8 v4861 = *(i8*)(intptr_t)v4860;
	i8 v4862 = (i8)+0;
	if (v4861==v4862) goto c01_03f5; else goto c01_03f6;

c01_03f5:;

	i1 v4863 = (i1)+1;
	i8 v4864 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4864 = v4863;

	goto c01_03f2;

c01_03f6:;

	i8 v4865 = (i8)(intptr_t)(ws+3560);
	i8 v4866 = *(i8*)(intptr_t)v4865;
	*(i8*)(intptr_t)(ws+3576) = v4866;
	i1 v4867 = (i1)+2;
	*(i1*)(intptr_t)(ws+3584) = v4867;
	i8 v4868 = (i8)(intptr_t)(f224_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4868)();

	i1 v4869 = *(i1*)(intptr_t)(ws+3585);
	i8 v4870 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v4870 = v4869;

	i8 v4871 = (i8)(intptr_t)(ws+3569);
	i1 v4872 = *(i1*)(intptr_t)v4871;
	i8 v4873 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4873 = v4872;

c01_03f2:;

}
	void f224_IsTypeOfKind(void);

// IsSNum workspace at ws+3456 length ws+10
void f228_IsSNum(void) {

	i8 v4874 = (i8)(intptr_t)(ws+3456);
	i8 v4875 = *(i8*)(intptr_t)v4874;
	i8 v4876 = (i8)+0;
	if (v4875==v4876) goto c01_03fa; else goto c01_03fb;

c01_03fa:;

	i1 v4877 = (i1)+1;
	i8 v4878 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v4878 = v4877;

	goto c01_03f7;

c01_03fb:;

	i8 v4879 = (i8)(intptr_t)(ws+3456);
	i8 v4880 = *(i8*)(intptr_t)v4879;
	*(i8*)(intptr_t)(ws+3576) = v4880;
	i1 v4881 = (i1)+2;
	*(i1*)(intptr_t)(ws+3584) = v4881;
	i8 v4882 = (i8)(intptr_t)(f224_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4882)();

	i1 v4883 = *(i1*)(intptr_t)(ws+3585);
	i8 v4884 = (i8)(intptr_t)(ws+3465);
	*(i1*)(intptr_t)v4884 = v4883;

	i8 v4885 = (i8)(intptr_t)(ws+3465);
	i1 v4886 = *(i1*)(intptr_t)v4885;
	i1 v4887 = (i1)+0;
	if (v4886==v4887) goto c01_0401; else goto c01_0402;

c01_0402:;

	i8 v4888 = (i8)(intptr_t)(ws+3456);
	i8 v4889 = *(i8*)(intptr_t)v4888;
	i1 v4890 = *(i1*)(intptr_t)v4889;
	i1 v4891 = (i1)+0;
	if (v4890==v4891) goto c01_0401; else goto c01_0400;

c01_0400:;

	i1 v4892 = (i1)+1;
	i8 v4893 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v4893 = v4892;

	goto c01_03f7;

c01_0401:;

	i1 v4894 = (i1)+0;
	i8 v4895 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v4895 = v4894;

c01_03f7:;

}
	void f67_IsPtr(void);
	void f227_IsNum(void);
	void f226_IsSubroutine(void);

// IsScalar workspace at ws+3544 length ws+12
void f229_IsScalar(void) {

	i8 v4896 = (i8)(intptr_t)(ws+3544);
	i8 v4897 = *(i8*)(intptr_t)v4896;
	*(i8*)(intptr_t)(ws+3560) = v4897;
	i8 v4898 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v4898)();

	i1 v4899 = *(i1*)(intptr_t)(ws+3568);
	i8 v4900 = (i8)(intptr_t)(ws+3553);
	*(i1*)(intptr_t)v4900 = v4899;

	i8 v4901 = (i8)(intptr_t)(ws+3544);
	i8 v4902 = *(i8*)(intptr_t)v4901;
	*(i8*)(intptr_t)(ws+3560) = v4902;
	i8 v4903 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v4903)();

	i1 v4904 = *(i1*)(intptr_t)(ws+3568);
	i8 v4905 = (i8)(intptr_t)(ws+3554);
	*(i1*)(intptr_t)v4905 = v4904;

	i8 v4906 = (i8)(intptr_t)(ws+3544);
	i8 v4907 = *(i8*)(intptr_t)v4906;
	*(i8*)(intptr_t)(ws+3560) = v4907;
	i8 v4908 = (i8)(intptr_t)(f226_IsSubroutine);

	((void(*)(void))(intptr_t)v4908)();

	i1 v4909 = *(i1*)(intptr_t)(ws+3568);
	i8 v4910 = (i8)(intptr_t)(ws+3555);
	*(i1*)(intptr_t)v4910 = v4909;

	i8 v4911 = (i8)(intptr_t)(ws+3553);
	i1 v4912 = *(i1*)(intptr_t)v4911;
	i1 v4913 = (i1)+0;
	if (v4912==v4913) goto c01_040d; else goto c01_040a;

c01_040d:;

	i8 v4914 = (i8)(intptr_t)(ws+3554);
	i1 v4915 = *(i1*)(intptr_t)v4914;
	i1 v4916 = (i1)+0;
	if (v4915==v4916) goto c01_040c; else goto c01_040a;

c01_040c:;

	i8 v4917 = (i8)(intptr_t)(ws+3555);
	i1 v4918 = *(i1*)(intptr_t)v4917;
	i1 v4919 = (i1)+0;
	if (v4918==v4919) goto c01_040b; else goto c01_040a;

c01_040a:;

	i1 v4920 = (i1)+1;
	i8 v4921 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4921 = v4920;

	goto c01_0403;

c01_040b:;

	i1 v4922 = (i1)+0;
	i8 v4923 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4923 = v4922;

c01_0403:;

}
	void f224_IsTypeOfKind(void);

// IsRecord workspace at ws+3488 length ws+10
void f230_IsRecord(void) {

	i8 v4924 = (i8)(intptr_t)(ws+3488);
	i8 v4925 = *(i8*)(intptr_t)v4924;
	*(i8*)(intptr_t)(ws+3576) = v4925;
	i1 v4926 = (i1)+5;
	*(i1*)(intptr_t)(ws+3584) = v4926;
	i8 v4927 = (i8)(intptr_t)(f224_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4927)();

	i1 v4928 = *(i1*)(intptr_t)(ws+3585);
	i8 v4929 = (i8)(intptr_t)(ws+3497);
	*(i1*)(intptr_t)v4929 = v4928;

	i8 v4930 = (i8)(intptr_t)(ws+3497);
	i1 v4931 = *(i1*)(intptr_t)v4930;
	i8 v4932 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v4932 = v4931;

}
	void f229_IsScalar(void);
	void f130_MidDeref(void);

// MakeLValue workspace at ws+3496 length ws+48
void f231_MakeLValue(void) {

	i1 v4933 = (i1)+0;
	i8 v4934 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v4934 = v4933;

	i8 v4935 = (i8)(intptr_t)(ws+3496);
	i8 v4936 = *(i8*)(intptr_t)v4935;
	i8 v4937 = v4936+(+24);
	i8 v4938 = *(i8*)(intptr_t)v4937;
	i8 v4939 = *(i8*)(intptr_t)v4938;
	i8 v4940 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4940 = v4939;

	i8 v4941 = (i8)(intptr_t)(ws+3520);
	i8 v4942 = *(i8*)(intptr_t)v4941;
	*(i8*)(intptr_t)(ws+3544) = v4942;
	i8 v4943 = (i8)(intptr_t)(f229_IsScalar);

	((void(*)(void))(intptr_t)v4943)();

	i1 v4944 = *(i1*)(intptr_t)(ws+3552);
	i8 v4945 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v4945 = v4944;

	i8 v4946 = (i8)(intptr_t)(ws+3528);
	i1 v4947 = *(i1*)(intptr_t)v4946;
	i1 v4948 = (i1)+0;
	if (v4947==v4948) goto c01_0412; else goto c01_0411;

c01_0411:;

	i8 v4949 = (i8)(intptr_t)(ws+3520);
	i8 v4950 = *(i8*)(intptr_t)v4949;
	i8 v4951 = v4950+(+48);
	i2 v4952 = *(i2*)(intptr_t)v4951;
	i1 v4953 = v4952;
	i8 v4954 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v4954 = v4953;

c01_0412:;

c01_040e:;

	i8 v4955 = (i8)(intptr_t)(ws+3512);
	i1 v4956 = *(i1*)(intptr_t)v4955;
	*(i1*)(intptr_t)(ws+3544) = v4956;
	i8 v4957 = (i8)(intptr_t)(ws+3496);
	i8 v4958 = *(i8*)(intptr_t)v4957;
	*(i8*)(intptr_t)(ws+3552) = v4958;
	i8 v4959 = (i8)(intptr_t)(f130_MidDeref);

	((void(*)(void))(intptr_t)v4959)();

	i8 v4960 = *(i8*)(intptr_t)(ws+3560);
	i8 v4961 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v4961 = v4960;

	i8 v4962 = (i8)(intptr_t)(ws+3536);
	i8 v4963 = *(i8*)(intptr_t)v4962;
	i8 v4964 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4964 = v4963;

	i8 v4965 = (i8)(intptr_t)(ws+3520);
	i8 v4966 = *(i8*)(intptr_t)v4965;
	i8 v4967 = (i8)(intptr_t)(ws+3504);
	i8 v4968 = *(i8*)(intptr_t)v4967;
	i8 v4969 = v4968+(+24);
	*(i8*)(intptr_t)v4969 = v4966;

}
const i1 c01_s00fa[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f75_SimpleError(void);
	void f62_Discard(void);

// UndoLValue workspace at ws+3432 length ws+17
void f232_UndoLValue(void) {

	i8 v4970 = (i8)(intptr_t)(ws+3432);
	i8 v4971 = *(i8*)(intptr_t)v4970;
	i8 v4972 = v4971+(+48);
	i1 v4973 = *(i1*)(intptr_t)v4972;
	i8 v4974 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v4974 = v4973;

	i8 v4975 = (i8)(intptr_t)(ws+3448);
	i1 v4976 = *(i1*)(intptr_t)v4975;
	i1 v4977 = (i1)+44;
	if (v4976<v4977) goto c01_0418; else goto c01_041a;

c01_041a:;

	i1 v4978 = (i1)+48;
	i8 v4979 = (i8)(intptr_t)(ws+3448);
	i1 v4980 = *(i1*)(intptr_t)v4979;
	if (v4978<v4980) goto c01_0418; else goto c01_0419;

c01_0418:;

	i8 v4981 = (i8)(intptr_t)c01_s00fa;
	*(i8*)(intptr_t)(ws+3648) = v4981;
	i8 v4982 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v4982)();

c01_0419:;

c01_0413:;

	i8 v4983 = (i8)(intptr_t)(ws+3432);
	i8 v4984 = *(i8*)(intptr_t)v4983;
	i8 v4985 = v4984+(+32);
	i8 v4986 = *(i8*)(intptr_t)v4985;
	i8 v4987 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v4987 = v4986;

	i8 v4988 = (i8)+0;
	i8 v4989 = (i8)(intptr_t)(ws+3432);
	i8 v4990 = *(i8*)(intptr_t)v4989;
	i8 v4991 = v4990+(+32);
	*(i8*)(intptr_t)v4991 = v4988;

	i8 v4992 = (i8)(intptr_t)(ws+3432);
	i8 v4993 = *(i8*)(intptr_t)v4992;
	*(i8*)(intptr_t)(ws+3592) = v4993;
	i8 v4994 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v4994)();

}

// IsLValue workspace at ws+3488 length ws+10
void f233_IsLValue(void) {

	i1 v4995 = (i1)+0;
	i8 v4996 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v4996 = v4995;

	i8 v4997 = (i8)(intptr_t)(ws+3488);
	i8 v4998 = *(i8*)(intptr_t)v4997;
	i8 v4999 = v4998+(+48);
	i1 v5000 = *(i1*)(intptr_t)v4999;
	i8 v5001 = (i8)(intptr_t)(ws+3497);
	*(i1*)(intptr_t)v5001 = v5000;

	i8 v5002 = (i8)(intptr_t)(ws+3497);
	i1 v5003 = *(i1*)(intptr_t)v5002;
	i1 v5004 = (i1)+44;
	if (v5003<v5004) goto c01_0421; else goto c01_0422;

c01_0422:;

	i1 v5005 = (i1)+48;
	i8 v5006 = (i8)(intptr_t)(ws+3497);
	i1 v5007 = *(i1*)(intptr_t)v5006;
	if (v5005<v5007) goto c01_0421; else goto c01_0420;

c01_0420:;

	i1 v5008 = (i1)+1;
	i8 v5009 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5009 = v5008;

c01_0421:;

c01_041b:;

}
	void f67_IsPtr(void);
const i1 c01_s00fb[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x72,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f75_SimpleError(void);

// MaybeUndoLValue workspace at ws+3496 length ws+18
void f234_MaybeUndoLValue(void) {

	i8 v5010 = (i8)(intptr_t)(ws+3496);
	i8 v5011 = *(i8*)(intptr_t)v5010;
	i8 v5012 = v5011+(+48);
	i1 v5013 = *(i1*)(intptr_t)v5012;
	i8 v5014 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v5014 = v5013;

	i8 v5015 = (i8)(intptr_t)(ws+3512);
	i1 v5016 = *(i1*)(intptr_t)v5015;
	i1 v5017 = (i1)+44;
	if (v5016<v5017) goto c01_0429; else goto c01_042a;

c01_042a:;

	i1 v5018 = (i1)+48;
	i8 v5019 = (i8)(intptr_t)(ws+3512);
	i1 v5020 = *(i1*)(intptr_t)v5019;
	if (v5018<v5020) goto c01_0429; else goto c01_0428;

c01_0428:;

	i8 v5021 = (i8)(intptr_t)(ws+3496);
	i8 v5022 = *(i8*)(intptr_t)v5021;
	i8 v5023 = v5022+(+32);
	i8 v5024 = *(i8*)(intptr_t)v5023;
	i8 v5025 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5025 = v5024;

	i8 v5026 = (i8)+0;
	i8 v5027 = (i8)(intptr_t)(ws+3496);
	i8 v5028 = *(i8*)(intptr_t)v5027;
	i8 v5029 = v5028+(+32);
	*(i8*)(intptr_t)v5029 = v5026;

	goto c01_0423;

c01_0429:;

	i8 v5030 = (i8)(intptr_t)(ws+3496);
	i8 v5031 = *(i8*)(intptr_t)v5030;
	i8 v5032 = v5031+(+24);
	i8 v5033 = *(i8*)(intptr_t)v5032;
	*(i8*)(intptr_t)(ws+3560) = v5033;
	i8 v5034 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v5034)();

	i1 v5035 = *(i1*)(intptr_t)(ws+3568);
	i8 v5036 = (i8)(intptr_t)(ws+3513);
	*(i1*)(intptr_t)v5036 = v5035;

	i8 v5037 = (i8)(intptr_t)(ws+3513);
	i1 v5038 = *(i1*)(intptr_t)v5037;
	i1 v5039 = (i1)+0;
	if (v5038==v5039) goto c01_042e; else goto c01_042d;

c01_042d:;

	i8 v5040 = (i8)(intptr_t)(ws+3496);
	i8 v5041 = *(i8*)(intptr_t)v5040;
	i8 v5042 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5042 = v5041;

	goto c01_0423;

c01_042e:;

	i8 v5043 = (i8)(intptr_t)c01_s00fb;
	*(i8*)(intptr_t)(ws+3648) = v5043;
	i8 v5044 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v5044)();

c01_0423:;

}

// AllocLabel workspace at ws+3472 length ws+2
void f235_AllocLabel(void) {

	i8 v5045 = (i8)(intptr_t)(ws+48);
	i2 v5046 = *(i2*)(intptr_t)v5045;
	i8 v5047 = (i8)(intptr_t)(ws+3472);
	*(i2*)(intptr_t)v5047 = v5046;

	i8 v5048 = (i8)(intptr_t)(ws+48);
	i2 v5049 = *(i2*)(intptr_t)v5048;
	i2 v5050 = v5049+(+1);
	i8 v5051 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v5051 = v5050;

}

// AllocSubrId workspace at ws+3416 length ws+2
void f236_AllocSubrId(void) {

	i8 v5052 = (i8)(intptr_t)(ws+50);
	i2 v5053 = *(i2*)(intptr_t)v5052;
	i8 v5054 = (i8)(intptr_t)(ws+3416);
	*(i2*)(intptr_t)v5054 = v5053;

	i8 v5055 = (i8)(intptr_t)(ws+50);
	i2 v5056 = *(i2*)(intptr_t)v5055;
	i2 v5057 = v5056+(+1);
	i8 v5058 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v5058 = v5057;

}

// MidWriter workspace at ws+3560 length ws+8
void f237_MidWriter(void) {

}

// ArchAlignUp workspace at ws+3544 length ws+8
void f238_ArchAlignUp(void) {

	i8 v5059 = (i8)(intptr_t)(ws+3546);
	i1 v5060 = *(i1*)(intptr_t)v5059;
	i1 v5061 = v5060+(-1);
	i2 v5062 = v5061;
	i8 v5063 = (i8)(intptr_t)(ws+3550);
	*(i2*)(intptr_t)v5063 = v5062;

	i8 v5064 = (i8)(intptr_t)(ws+3544);
	i2 v5065 = *(i2*)(intptr_t)v5064;
	i8 v5066 = (i8)(intptr_t)(ws+3550);
	i2 v5067 = *(i2*)(intptr_t)v5066;
	i2 v5068 = v5065+v5067;
	i8 v5069 = (i8)(intptr_t)(ws+3550);
	i2 v5070 = *(i2*)(intptr_t)v5069;
	i2 v5071 = ~v5070;
	i2 v5072 = v5068&v5071;
	i8 v5073 = (i8)(intptr_t)(ws+3548);
	*(i2*)(intptr_t)v5073 = v5072;

}
const i1 c01_s00fc[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f223_MakeNumberType(void);
const i1 c01_s00fd[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f223_MakeNumberType(void);
const i1 c01_s00fe[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f223_MakeNumberType(void);
const i1 c01_s00ff[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f223_MakeNumberType(void);
const i1 c01_s0100[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f223_MakeNumberType(void);
const i1 c01_s0101[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f223_MakeNumberType(void);
const i1 c01_s0102[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f223_MakeNumberType(void);
const i1 c01_s0103[] = { 0x69,0x6e,0x74,0x38,0 };
	void f223_MakeNumberType(void);
const i1 c01_s0104[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f216_LookupSymbol(void);
const i1 c01_s0105[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
	void f220_AddAliasString(void);

// ArchInitTypes workspace at ws+3264 length ws+72
void f239_ArchInitTypes(void) {

	i1 v5074 = (i1)+8;
	*(i1*)(intptr_t)(ws+3336) = v5074;
	i1 v5075 = (i1)+8;
	*(i1*)(intptr_t)(ws+3337) = v5075;
	i1 v5076 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5076;
	i8 v5077 = (i8)(intptr_t)c01_s00fc;
	*(i8*)(intptr_t)(ws+3344) = v5077;
	i8 v5078 = (i8)(intptr_t)(f223_MakeNumberType);

	((void(*)(void))(intptr_t)v5078)();

	i8 v5079 = *(i8*)(intptr_t)(ws+3352);
	i8 v5080 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5080 = v5079;

	i8 v5081 = (i8)(intptr_t)(ws+3264);
	i8 v5082 = *(i8*)(intptr_t)v5081;
	i8 v5083 = (i8)(intptr_t)(ws+1464);
	*(i8*)(intptr_t)v5083 = v5082;

	i1 v5084 = (i1)+8;
	*(i1*)(intptr_t)(ws+3336) = v5084;
	i1 v5085 = (i1)+8;
	*(i1*)(intptr_t)(ws+3337) = v5085;
	i1 v5086 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5086;
	i8 v5087 = (i8)(intptr_t)c01_s00fd;
	*(i8*)(intptr_t)(ws+3344) = v5087;
	i8 v5088 = (i8)(intptr_t)(f223_MakeNumberType);

	((void(*)(void))(intptr_t)v5088)();

	i8 v5089 = *(i8*)(intptr_t)(ws+3352);
	i8 v5090 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v5090 = v5089;

	i8 v5091 = (i8)(intptr_t)(ws+3272);
	i8 v5092 = *(i8*)(intptr_t)v5091;
	i8 v5093 = (i8)(intptr_t)(ws+1472);
	*(i8*)(intptr_t)v5093 = v5092;

	i1 v5094 = (i1)+4;
	*(i1*)(intptr_t)(ws+3336) = v5094;
	i1 v5095 = (i1)+4;
	*(i1*)(intptr_t)(ws+3337) = v5095;
	i1 v5096 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5096;
	i8 v5097 = (i8)(intptr_t)c01_s00fe;
	*(i8*)(intptr_t)(ws+3344) = v5097;
	i8 v5098 = (i8)(intptr_t)(f223_MakeNumberType);

	((void(*)(void))(intptr_t)v5098)();

	i8 v5099 = *(i8*)(intptr_t)(ws+3352);
	i8 v5100 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v5100 = v5099;

	i8 v5101 = (i8)(intptr_t)(ws+3280);
	i8 v5102 = *(i8*)(intptr_t)v5101;
	i8 v5103 = (i8)(intptr_t)(ws+1480);
	*(i8*)(intptr_t)v5103 = v5102;

	i1 v5104 = (i1)+4;
	*(i1*)(intptr_t)(ws+3336) = v5104;
	i1 v5105 = (i1)+4;
	*(i1*)(intptr_t)(ws+3337) = v5105;
	i1 v5106 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5106;
	i8 v5107 = (i8)(intptr_t)c01_s00ff;
	*(i8*)(intptr_t)(ws+3344) = v5107;
	i8 v5108 = (i8)(intptr_t)(f223_MakeNumberType);

	((void(*)(void))(intptr_t)v5108)();

	i8 v5109 = *(i8*)(intptr_t)(ws+3352);
	i8 v5110 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v5110 = v5109;

	i8 v5111 = (i8)(intptr_t)(ws+3288);
	i8 v5112 = *(i8*)(intptr_t)v5111;
	i8 v5113 = (i8)(intptr_t)(ws+1488);
	*(i8*)(intptr_t)v5113 = v5112;

	i1 v5114 = (i1)+2;
	*(i1*)(intptr_t)(ws+3336) = v5114;
	i1 v5115 = (i1)+2;
	*(i1*)(intptr_t)(ws+3337) = v5115;
	i1 v5116 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5116;
	i8 v5117 = (i8)(intptr_t)c01_s0100;
	*(i8*)(intptr_t)(ws+3344) = v5117;
	i8 v5118 = (i8)(intptr_t)(f223_MakeNumberType);

	((void(*)(void))(intptr_t)v5118)();

	i8 v5119 = *(i8*)(intptr_t)(ws+3352);
	i8 v5120 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v5120 = v5119;

	i8 v5121 = (i8)(intptr_t)(ws+3296);
	i8 v5122 = *(i8*)(intptr_t)v5121;
	i8 v5123 = (i8)(intptr_t)(ws+1496);
	*(i8*)(intptr_t)v5123 = v5122;

	i1 v5124 = (i1)+2;
	*(i1*)(intptr_t)(ws+3336) = v5124;
	i1 v5125 = (i1)+2;
	*(i1*)(intptr_t)(ws+3337) = v5125;
	i1 v5126 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5126;
	i8 v5127 = (i8)(intptr_t)c01_s0101;
	*(i8*)(intptr_t)(ws+3344) = v5127;
	i8 v5128 = (i8)(intptr_t)(f223_MakeNumberType);

	((void(*)(void))(intptr_t)v5128)();

	i8 v5129 = *(i8*)(intptr_t)(ws+3352);
	i8 v5130 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v5130 = v5129;

	i8 v5131 = (i8)(intptr_t)(ws+3304);
	i8 v5132 = *(i8*)(intptr_t)v5131;
	i8 v5133 = (i8)(intptr_t)(ws+1504);
	*(i8*)(intptr_t)v5133 = v5132;

	i1 v5134 = (i1)+1;
	*(i1*)(intptr_t)(ws+3336) = v5134;
	i1 v5135 = (i1)+1;
	*(i1*)(intptr_t)(ws+3337) = v5135;
	i1 v5136 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5136;
	i8 v5137 = (i8)(intptr_t)c01_s0102;
	*(i8*)(intptr_t)(ws+3344) = v5137;
	i8 v5138 = (i8)(intptr_t)(f223_MakeNumberType);

	((void(*)(void))(intptr_t)v5138)();

	i8 v5139 = *(i8*)(intptr_t)(ws+3352);
	i8 v5140 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v5140 = v5139;

	i8 v5141 = (i8)(intptr_t)(ws+3312);
	i8 v5142 = *(i8*)(intptr_t)v5141;
	i8 v5143 = (i8)(intptr_t)(ws+1512);
	*(i8*)(intptr_t)v5143 = v5142;

	i1 v5144 = (i1)+1;
	*(i1*)(intptr_t)(ws+3336) = v5144;
	i1 v5145 = (i1)+1;
	*(i1*)(intptr_t)(ws+3337) = v5145;
	i1 v5146 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5146;
	i8 v5147 = (i8)(intptr_t)c01_s0103;
	*(i8*)(intptr_t)(ws+3344) = v5147;
	i8 v5148 = (i8)(intptr_t)(f223_MakeNumberType);

	((void(*)(void))(intptr_t)v5148)();

	i8 v5149 = *(i8*)(intptr_t)(ws+3352);
	i8 v5150 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v5150 = v5149;

	i8 v5151 = (i8)(intptr_t)(ws+3320);
	i8 v5152 = *(i8*)(intptr_t)v5151;
	i8 v5153 = (i8)(intptr_t)(ws+1520);
	*(i8*)(intptr_t)v5153 = v5152;

	i8 v5154 = (i8)(intptr_t)(ws+1464);
	i8 v5155 = *(i8*)(intptr_t)v5154;
	i8 v5156 = (i8)(intptr_t)(ws+1528);
	*(i8*)(intptr_t)v5156 = v5155;

	i8 v5157 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v5157;
	i8 v5158 = (i8)(intptr_t)c01_s0104;
	*(i8*)(intptr_t)(ws+3496) = v5158;
	i8 v5159 = (i8)(intptr_t)(f216_LookupSymbol);

	((void(*)(void))(intptr_t)v5159)();

	i8 v5160 = *(i8*)(intptr_t)(ws+3504);
	i8 v5161 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v5161 = v5160;

	i8 v5162 = (i8)(intptr_t)c01_s0105;
	*(i8*)(intptr_t)(ws+3336) = v5162;
	i8 v5163 = (i8)(intptr_t)(ws+3328);
	i8 v5164 = *(i8*)(intptr_t)v5163;
	*(i8*)(intptr_t)(ws+3344) = v5164;
	i8 v5165 = (i8)(intptr_t)(f220_AddAliasString);

	((void(*)(void))(intptr_t)v5165)();

}

// ArchGuessIntType workspace at ws+3448 length ws+16
void f240_ArchGuessIntType(void) {

	i8 v5166 = (i8)(intptr_t)(ws+3448);
	i4 v5167 = *(i4*)(intptr_t)v5166;
	i4 v5168 = (i4)+0;
	if ((s4)v5167<(s4)v5168) goto c01_0435; else goto c01_0436;

c01_0436:;

	i4 v5169 = (i4)+255;
	i8 v5170 = (i8)(intptr_t)(ws+3452);
	i4 v5171 = *(i4*)(intptr_t)v5170;
	if ((s4)v5169<(s4)v5171) goto c01_0435; else goto c01_0434;

c01_0434:;

	i8 v5172 = (i8)(intptr_t)(ws+1512);
	i8 v5173 = *(i8*)(intptr_t)v5172;
	i8 v5174 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5174 = v5173;

	goto c01_042f;

c01_0435:;

	i8 v5175 = (i8)(intptr_t)(ws+3448);
	i4 v5176 = *(i4*)(intptr_t)v5175;
	i4 v5177 = (i4)-128;
	if ((s4)v5176<(s4)v5177) goto c01_043c; else goto c01_043d;

c01_043d:;

	i4 v5178 = (i4)+127;
	i8 v5179 = (i8)(intptr_t)(ws+3452);
	i4 v5180 = *(i4*)(intptr_t)v5179;
	if ((s4)v5178<(s4)v5180) goto c01_043c; else goto c01_043b;

c01_043b:;

	i8 v5181 = (i8)(intptr_t)(ws+1520);
	i8 v5182 = *(i8*)(intptr_t)v5181;
	i8 v5183 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5183 = v5182;

	goto c01_042f;

c01_043c:;

	i8 v5184 = (i8)(intptr_t)(ws+3448);
	i4 v5185 = *(i4*)(intptr_t)v5184;
	i4 v5186 = (i4)+0;
	if ((s4)v5185<(s4)v5186) goto c01_0443; else goto c01_0444;

c01_0444:;

	i4 v5187 = (i4)+65535;
	i8 v5188 = (i8)(intptr_t)(ws+3452);
	i4 v5189 = *(i4*)(intptr_t)v5188;
	if ((s4)v5187<(s4)v5189) goto c01_0443; else goto c01_0442;

c01_0442:;

	i8 v5190 = (i8)(intptr_t)(ws+1496);
	i8 v5191 = *(i8*)(intptr_t)v5190;
	i8 v5192 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5192 = v5191;

	goto c01_042f;

c01_0443:;

	i8 v5193 = (i8)(intptr_t)(ws+3448);
	i4 v5194 = *(i4*)(intptr_t)v5193;
	i4 v5195 = (i4)-32768;
	if ((s4)v5194<(s4)v5195) goto c01_044a; else goto c01_044b;

c01_044b:;

	i4 v5196 = (i4)+32767;
	i8 v5197 = (i8)(intptr_t)(ws+3452);
	i4 v5198 = *(i4*)(intptr_t)v5197;
	if ((s4)v5196<(s4)v5198) goto c01_044a; else goto c01_0449;

c01_0449:;

	i8 v5199 = (i8)(intptr_t)(ws+1504);
	i8 v5200 = *(i8*)(intptr_t)v5199;
	i8 v5201 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5201 = v5200;

	goto c01_042f;

c01_044a:;

	i8 v5202 = (i8)(intptr_t)(ws+3448);
	i4 v5203 = *(i4*)(intptr_t)v5202;
	i4 v5204 = (i4)+0;
	if ((s4)v5203<(s4)v5204) goto c01_044f; else goto c01_044e;

c01_044e:;

	i8 v5205 = (i8)(intptr_t)(ws+1480);
	i8 v5206 = *(i8*)(intptr_t)v5205;
	i8 v5207 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5207 = v5206;

	goto c01_042f;

c01_044f:;

	i8 v5208 = (i8)(intptr_t)(ws+1488);
	i8 v5209 = *(i8*)(intptr_t)v5208;
	i8 v5210 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5210 = v5209;

c01_042f:;

}
	void f238_ArchAlignUp(void);

// ArchInitVariable workspace at ws+3520 length ws+20
void f241_ArchInitVariable(void) {

	i8 v5211 = (i8)(intptr_t)(ws+3520);
	i8 v5212 = *(i8*)(intptr_t)v5211;
	i8 v5213 = *(i8*)(intptr_t)v5212;
	i8 v5214 = v5213+(+8);
	i8 v5215 = *(i8*)(intptr_t)v5214;
	i8 v5216 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v5216 = v5215;

	i8 v5217 = (i8)(intptr_t)(ws+3528);
	i8 v5218 = *(i8*)(intptr_t)v5217;
	i8 v5219 = v5218+(+58);
	i2 v5220 = *(i2*)(intptr_t)v5219;
	i8 v5221 = (i8)(intptr_t)(ws+3536);
	*(i2*)(intptr_t)v5221 = v5220;

	i8 v5222 = (i8)(intptr_t)(ws+3536);
	i2 v5223 = *(i2*)(intptr_t)v5222;
	*(i2*)(intptr_t)(ws+3544) = v5223;
	i8 v5224 = (i8)(intptr_t)(ws+3520);
	i8 v5225 = *(i8*)(intptr_t)v5224;
	i8 v5226 = *(i8*)(intptr_t)v5225;
	i8 v5227 = *(i8*)(intptr_t)v5226;
	i8 v5228 = v5227+(+53);
	i1 v5229 = *(i1*)(intptr_t)v5228;
	*(i1*)(intptr_t)(ws+3546) = v5229;
	i8 v5230 = (i8)(intptr_t)(f238_ArchAlignUp);

	((void(*)(void))(intptr_t)v5230)();

	i2 v5231 = *(i2*)(intptr_t)(ws+3548);
	i8 v5232 = (i8)(intptr_t)(ws+3538);
	*(i2*)(intptr_t)v5232 = v5231;

	i8 v5233 = (i8)(intptr_t)(ws+3538);
	i2 v5234 = *(i2*)(intptr_t)v5233;
	i8 v5235 = (i8)(intptr_t)(ws+3536);
	*(i2*)(intptr_t)v5235 = v5234;

	i8 v5236 = (i8)(intptr_t)(ws+3536);
	i2 v5237 = *(i2*)(intptr_t)v5236;
	i8 v5238 = (i8)(intptr_t)(ws+3520);
	i8 v5239 = *(i8*)(intptr_t)v5238;
	i8 v5240 = *(i8*)(intptr_t)v5239;
	i8 v5241 = v5240+(+24);
	*(i2*)(intptr_t)v5241 = v5237;

	i8 v5242 = (i8)(intptr_t)(ws+3536);
	i2 v5243 = *(i2*)(intptr_t)v5242;
	i8 v5244 = (i8)(intptr_t)(ws+3520);
	i8 v5245 = *(i8*)(intptr_t)v5244;
	i8 v5246 = *(i8*)(intptr_t)v5245;
	i8 v5247 = *(i8*)(intptr_t)v5246;
	i8 v5248 = v5247+(+48);
	i2 v5249 = *(i2*)(intptr_t)v5248;
	i2 v5250 = v5243+v5249;
	i8 v5251 = (i8)(intptr_t)(ws+3528);
	i8 v5252 = *(i8*)(intptr_t)v5251;
	i8 v5253 = v5252+(+58);
	*(i2*)(intptr_t)v5253 = v5250;

}
	void f238_ArchAlignUp(void);

// ArchInitMember workspace at ws+3392 length ws+20
void f242_ArchInitMember(void) {

	i8 v5254 = (i8)(intptr_t)(ws+3408);
	i2 v5255 = *(i2*)(intptr_t)v5254;
	*(i2*)(intptr_t)(ws+3544) = v5255;
	i8 v5256 = (i8)(intptr_t)(ws+3400);
	i8 v5257 = *(i8*)(intptr_t)v5256;
	i8 v5258 = *(i8*)(intptr_t)v5257;
	i8 v5259 = *(i8*)(intptr_t)v5258;
	i8 v5260 = v5259+(+53);
	i1 v5261 = *(i1*)(intptr_t)v5260;
	*(i1*)(intptr_t)(ws+3546) = v5261;
	i8 v5262 = (i8)(intptr_t)(f238_ArchAlignUp);

	((void(*)(void))(intptr_t)v5262)();

	i2 v5263 = *(i2*)(intptr_t)(ws+3548);
	i8 v5264 = (i8)(intptr_t)(ws+3410);
	*(i2*)(intptr_t)v5264 = v5263;

	i8 v5265 = (i8)(intptr_t)(ws+3410);
	i2 v5266 = *(i2*)(intptr_t)v5265;
	i8 v5267 = (i8)(intptr_t)(ws+3408);
	*(i2*)(intptr_t)v5267 = v5266;

	i8 v5268 = (i8)(intptr_t)(ws+3408);
	i2 v5269 = *(i2*)(intptr_t)v5268;
	i8 v5270 = (i8)(intptr_t)(ws+3400);
	i8 v5271 = *(i8*)(intptr_t)v5270;
	i8 v5272 = *(i8*)(intptr_t)v5271;
	i8 v5273 = v5272+(+24);
	*(i2*)(intptr_t)v5273 = v5269;

	i8 v5274 = (i8)(intptr_t)(ws+3408);
	i2 v5275 = *(i2*)(intptr_t)v5274;
	i8 v5276 = (i8)(intptr_t)(ws+3400);
	i8 v5277 = *(i8*)(intptr_t)v5276;
	i8 v5278 = *(i8*)(intptr_t)v5277;
	i8 v5279 = *(i8*)(intptr_t)v5278;
	i8 v5280 = v5279+(+48);
	i2 v5281 = *(i2*)(intptr_t)v5280;
	i2 v5282 = v5275+v5281;
	i8 v5283 = (i8)(intptr_t)(ws+3408);
	*(i2*)(intptr_t)v5283 = v5282;

	i8 v5284 = (i8)(intptr_t)(ws+3392);
	i8 v5285 = *(i8*)(intptr_t)v5284;
	i8 v5286 = v5285+(+48);
	i2 v5287 = *(i2*)(intptr_t)v5286;
	i8 v5288 = (i8)(intptr_t)(ws+3408);
	i2 v5289 = *(i2*)(intptr_t)v5288;
	if (v5287<v5289) goto c01_0453; else goto c01_0454;

c01_0453:;

	i8 v5290 = (i8)(intptr_t)(ws+3408);
	i2 v5291 = *(i2*)(intptr_t)v5290;
	i8 v5292 = (i8)(intptr_t)(ws+3392);
	i8 v5293 = *(i8*)(intptr_t)v5292;
	i8 v5294 = v5293+(+48);
	*(i2*)(intptr_t)v5294 = v5291;

c01_0454:;

c01_0450:;

}
	void f174_E_b16(void);
	void f174_E_b16(void);
	void f173_E_b8(void);
	void f176_E_bsize(void);
	void f173_E_b8(void);
	void f173_E_b8(void);

// WriteMid1 workspace at ws+3568 length ws+0
void f243_WriteMid1(void) {

	i8 v5295 = (i8)(intptr_t)(ws+3560);
	i8 v5296 = *(i8*)(intptr_t)v5295;
	i8 v5297 = *(i8*)(intptr_t)v5296;
	i8 v5298 = v5297+(+56);
	i2 v5299 = *(i2*)(intptr_t)v5298;
	*(i2*)(intptr_t)(ws+3576) = v5299;
	i8 v5300 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5300)();

	i8 v5301 = (i8)(intptr_t)(ws+3560);
	i8 v5302 = *(i8*)(intptr_t)v5301;
	i8 v5303 = v5302+(+8);
	i8 v5304 = *(i8*)(intptr_t)v5303;
	i8 v5305 = *(i8*)(intptr_t)v5304;
	i8 v5306 = v5305+(+8);
	i8 v5307 = *(i8*)(intptr_t)v5306;
	i8 v5308 = v5307+(+56);
	i2 v5309 = *(i2*)(intptr_t)v5308;
	*(i2*)(intptr_t)(ws+3576) = v5309;
	i8 v5310 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5310)();

	i8 v5311 = (i8)(intptr_t)(ws+3560);
	i8 v5312 = *(i8*)(intptr_t)v5311;
	i8 v5313 = v5312+(+8);
	i8 v5314 = *(i8*)(intptr_t)v5313;
	i8 v5315 = *(i8*)(intptr_t)v5314;
	i8 v5316 = v5315+(+26);
	i1 v5317 = *(i1*)(intptr_t)v5316;
	*(i1*)(intptr_t)(ws+3600) = v5317;
	i8 v5318 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5318)();

	i8 v5319 = (i8)(intptr_t)(ws+3560);
	i8 v5320 = *(i8*)(intptr_t)v5319;
	i8 v5321 = v5320+(+8);
	i8 v5322 = *(i8*)(intptr_t)v5321;
	i8 v5323 = *(i8*)(intptr_t)v5322;
	i8 v5324 = v5323+(+24);
	i2 v5325 = *(i2*)(intptr_t)v5324;
	*(i2*)(intptr_t)(ws+3568) = v5325;
	i8 v5326 = (i8)(intptr_t)(f176_E_bsize);

	((void(*)(void))(intptr_t)v5326)();

	i8 v5327 = (i8)(intptr_t)(ws+3560);
	i8 v5328 = *(i8*)(intptr_t)v5327;
	i8 v5329 = v5328+(+8);
	i8 v5330 = *(i8*)(intptr_t)v5329;
	i8 v5331 = *(i8*)(intptr_t)v5330;
	i8 v5332 = *(i8*)(intptr_t)v5331;
	i8 v5333 = v5332+(+48);
	i2 v5334 = *(i2*)(intptr_t)v5333;
	i1 v5335 = v5334;
	*(i1*)(intptr_t)(ws+3600) = v5335;
	i8 v5336 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5336)();

	i8 v5337 = (i8)(intptr_t)(ws+3560);
	i8 v5338 = *(i8*)(intptr_t)v5337;
	i8 v5339 = v5338+(+16);
	i1 v5340 = *(i1*)(intptr_t)v5339;
	*(i1*)(intptr_t)(ws+3600) = v5340;
	i8 v5341 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5341)();

}
	void f175_E_b32(void);

// WriteMid2 workspace at ws+3568 length ws+0
void f244_WriteMid2(void) {

	i8 v5342 = (i8)(intptr_t)(ws+3560);
	i8 v5343 = *(i8*)(intptr_t)v5342;
	i4 v5344 = *(i4*)(intptr_t)v5343;
	*(i4*)(intptr_t)(ws+3568) = v5344;
	i8 v5345 = (i8)(intptr_t)(f175_E_b32);

	((void(*)(void))(intptr_t)v5345)();

}
	void f175_E_b32(void);
	void f174_E_b16(void);

// WriteMid3 workspace at ws+3568 length ws+0
void f245_WriteMid3(void) {

	i8 v5346 = (i8)(intptr_t)(ws+3560);
	i8 v5347 = *(i8*)(intptr_t)v5346;
	i4 v5348 = *(i4*)(intptr_t)v5347;
	*(i4*)(intptr_t)(ws+3568) = v5348;
	i8 v5349 = (i8)(intptr_t)(f175_E_b32);

	((void(*)(void))(intptr_t)v5349)();

	i8 v5350 = (i8)(intptr_t)(ws+3560);
	i8 v5351 = *(i8*)(intptr_t)v5350;
	i8 v5352 = v5351+(+4);
	i2 v5353 = *(i2*)(intptr_t)v5352;
	*(i2*)(intptr_t)(ws+3576) = v5353;
	i8 v5354 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5354)();

}

// WriteMid4 workspace at ws+3568 length ws+0
void f246_WriteMid4(void) {

}
	void f174_E_b16(void);
	void f173_E_b8(void);
	void f176_E_bsize(void);
	void f173_E_b8(void);

// WriteMid5 workspace at ws+3568 length ws+0
void f247_WriteMid5(void) {

	i8 v5355 = (i8)(intptr_t)(ws+3560);
	i8 v5356 = *(i8*)(intptr_t)v5355;
	i8 v5357 = *(i8*)(intptr_t)v5356;
	i8 v5358 = *(i8*)(intptr_t)v5357;
	i8 v5359 = v5358+(+8);
	i8 v5360 = *(i8*)(intptr_t)v5359;
	i8 v5361 = v5360+(+56);
	i2 v5362 = *(i2*)(intptr_t)v5361;
	*(i2*)(intptr_t)(ws+3576) = v5362;
	i8 v5363 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5363)();

	i8 v5364 = (i8)(intptr_t)(ws+3560);
	i8 v5365 = *(i8*)(intptr_t)v5364;
	i8 v5366 = *(i8*)(intptr_t)v5365;
	i8 v5367 = *(i8*)(intptr_t)v5366;
	i8 v5368 = v5367+(+26);
	i1 v5369 = *(i1*)(intptr_t)v5368;
	*(i1*)(intptr_t)(ws+3600) = v5369;
	i8 v5370 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5370)();

	i8 v5371 = (i8)(intptr_t)(ws+3560);
	i8 v5372 = *(i8*)(intptr_t)v5371;
	i8 v5373 = *(i8*)(intptr_t)v5372;
	i8 v5374 = *(i8*)(intptr_t)v5373;
	i8 v5375 = v5374+(+24);
	i2 v5376 = *(i2*)(intptr_t)v5375;
	*(i2*)(intptr_t)(ws+3568) = v5376;
	i8 v5377 = (i8)(intptr_t)(f176_E_bsize);

	((void(*)(void))(intptr_t)v5377)();

	i8 v5378 = (i8)(intptr_t)(ws+3560);
	i8 v5379 = *(i8*)(intptr_t)v5378;
	i8 v5380 = *(i8*)(intptr_t)v5379;
	i8 v5381 = *(i8*)(intptr_t)v5380;
	i8 v5382 = *(i8*)(intptr_t)v5381;
	i8 v5383 = v5382+(+48);
	i2 v5384 = *(i2*)(intptr_t)v5383;
	i1 v5385 = v5384;
	*(i1*)(intptr_t)(ws+3600) = v5385;
	i8 v5386 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5386)();

}
	void f184_E_countedstring(void);

// WriteMid6 workspace at ws+3568 length ws+0
void f248_WriteMid6(void) {

	i8 v5387 = (i8)(intptr_t)(ws+3560);
	i8 v5388 = *(i8*)(intptr_t)v5387;
	i8 v5389 = *(i8*)(intptr_t)v5388;
	*(i8*)(intptr_t)(ws+3568) = v5389;
	i8 v5390 = (i8)(intptr_t)(f184_E_countedstring);

	((void(*)(void))(intptr_t)v5390)();

}
	void f173_E_b8(void);

// WriteMid7 workspace at ws+3568 length ws+0
void f249_WriteMid7(void) {

	i8 v5391 = (i8)(intptr_t)(ws+3560);
	i8 v5392 = *(i8*)(intptr_t)v5391;
	i1 v5393 = *(i1*)(intptr_t)v5392;
	*(i1*)(intptr_t)(ws+3600) = v5393;
	i8 v5394 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5394)();

}
	void f174_E_b16(void);
	void f173_E_b8(void);
	void f176_E_bsize(void);
	void f173_E_b8(void);
	void f176_E_bsize(void);

// WriteMid8 workspace at ws+3568 length ws+0
void f250_WriteMid8(void) {

	i8 v5395 = (i8)(intptr_t)(ws+3560);
	i8 v5396 = *(i8*)(intptr_t)v5395;
	i8 v5397 = *(i8*)(intptr_t)v5396;
	i8 v5398 = *(i8*)(intptr_t)v5397;
	i8 v5399 = v5398+(+8);
	i8 v5400 = *(i8*)(intptr_t)v5399;
	i8 v5401 = v5400+(+56);
	i2 v5402 = *(i2*)(intptr_t)v5401;
	*(i2*)(intptr_t)(ws+3576) = v5402;
	i8 v5403 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5403)();

	i8 v5404 = (i8)(intptr_t)(ws+3560);
	i8 v5405 = *(i8*)(intptr_t)v5404;
	i8 v5406 = *(i8*)(intptr_t)v5405;
	i8 v5407 = *(i8*)(intptr_t)v5406;
	i8 v5408 = v5407+(+26);
	i1 v5409 = *(i1*)(intptr_t)v5408;
	*(i1*)(intptr_t)(ws+3600) = v5409;
	i8 v5410 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5410)();

	i8 v5411 = (i8)(intptr_t)(ws+3560);
	i8 v5412 = *(i8*)(intptr_t)v5411;
	i8 v5413 = *(i8*)(intptr_t)v5412;
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = v5414+(+24);
	i2 v5416 = *(i2*)(intptr_t)v5415;
	*(i2*)(intptr_t)(ws+3568) = v5416;
	i8 v5417 = (i8)(intptr_t)(f176_E_bsize);

	((void(*)(void))(intptr_t)v5417)();

	i8 v5418 = (i8)(intptr_t)(ws+3560);
	i8 v5419 = *(i8*)(intptr_t)v5418;
	i8 v5420 = *(i8*)(intptr_t)v5419;
	i8 v5421 = *(i8*)(intptr_t)v5420;
	i8 v5422 = *(i8*)(intptr_t)v5421;
	i8 v5423 = v5422+(+48);
	i2 v5424 = *(i2*)(intptr_t)v5423;
	i1 v5425 = v5424;
	*(i1*)(intptr_t)(ws+3600) = v5425;
	i8 v5426 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5426)();

	i8 v5427 = (i8)(intptr_t)(ws+3560);
	i8 v5428 = *(i8*)(intptr_t)v5427;
	i8 v5429 = v5428+(+8);
	i2 v5430 = *(i2*)(intptr_t)v5429;
	*(i2*)(intptr_t)(ws+3568) = v5430;
	i8 v5431 = (i8)(intptr_t)(f176_E_bsize);

	((void(*)(void))(intptr_t)v5431)();

}
	void f174_E_b16(void);

// WriteMid9 workspace at ws+3568 length ws+0
void f251_WriteMid9(void) {

	i8 v5432 = (i8)(intptr_t)(ws+3560);
	i8 v5433 = *(i8*)(intptr_t)v5432;
	i8 v5434 = *(i8*)(intptr_t)v5433;
	i8 v5435 = v5434+(+56);
	i2 v5436 = *(i2*)(intptr_t)v5435;
	*(i2*)(intptr_t)(ws+3576) = v5436;
	i8 v5437 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5437)();

}
	void f174_E_b16(void);
	void f174_E_b16(void);
	void f174_E_b16(void);
	void f173_E_b8(void);

// WriteMid10 workspace at ws+3568 length ws+0
void f252_WriteMid10(void) {

	i8 v5438 = (i8)(intptr_t)(ws+3560);
	i8 v5439 = *(i8*)(intptr_t)v5438;
	i2 v5440 = *(i2*)(intptr_t)v5439;
	*(i2*)(intptr_t)(ws+3576) = v5440;
	i8 v5441 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5441)();

	i8 v5442 = (i8)(intptr_t)(ws+3560);
	i8 v5443 = *(i8*)(intptr_t)v5442;
	i8 v5444 = v5443+(+2);
	i2 v5445 = *(i2*)(intptr_t)v5444;
	*(i2*)(intptr_t)(ws+3576) = v5445;
	i8 v5446 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5446)();

	i8 v5447 = (i8)(intptr_t)(ws+3560);
	i8 v5448 = *(i8*)(intptr_t)v5447;
	i8 v5449 = v5448+(+4);
	i2 v5450 = *(i2*)(intptr_t)v5449;
	*(i2*)(intptr_t)(ws+3576) = v5450;
	i8 v5451 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5451)();

	i8 v5452 = (i8)(intptr_t)(ws+3560);
	i8 v5453 = *(i8*)(intptr_t)v5452;
	i8 v5454 = v5453+(+6);
	i1 v5455 = *(i1*)(intptr_t)v5454;
	*(i1*)(intptr_t)(ws+3600) = v5455;
	i8 v5456 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5456)();

}
	void f174_E_b16(void);

// WriteMid11 workspace at ws+3568 length ws+0
void f253_WriteMid11(void) {

	i8 v5457 = (i8)(intptr_t)(ws+3560);
	i8 v5458 = *(i8*)(intptr_t)v5457;
	i2 v5459 = *(i2*)(intptr_t)v5458;
	*(i2*)(intptr_t)(ws+3576) = v5459;
	i8 v5460 = (i8)(intptr_t)(f174_E_b16);

	((void(*)(void))(intptr_t)v5460)();

}
	void f243_WriteMid1(void);
	void f244_WriteMid2(void);
	void f245_WriteMid3(void);
	void f246_WriteMid4(void);
	void f247_WriteMid5(void);
	void f248_WriteMid6(void);
	void f249_WriteMid7(void);
	void f250_WriteMid8(void);
	void f251_WriteMid9(void);
	void f252_WriteMid10(void);
	void f253_WriteMid11(void);
static data f2___main_s0455[] = {

	{ .ptr = (void*)f243_WriteMid1 },

	{ .ptr = (void*)f244_WriteMid2 },

	{ .ptr = (void*)f245_WriteMid3 },

	{ .ptr = (void*)f246_WriteMid4 },

	{ .ptr = (void*)f247_WriteMid5 },

	{ .ptr = (void*)f248_WriteMid6 },

	{ .ptr = (void*)f249_WriteMid7 },

	{ .ptr = (void*)f250_WriteMid8 },

	{ .ptr = (void*)f251_WriteMid9 },

	{ .ptr = (void*)f252_WriteMid10 },

	{ .ptr = (void*)f253_WriteMid11 },

};
static data f2___main_s0456[] = {








	{ .i1 = { 0x03,0x03,0x03,0x08,0x08,0x04,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x05,0x07,0x08,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x05,0x04,0x08,0x01,0x03,0x03}},








	{ .i1 = { 0x03,0x0a,0x0a,0x03,0x08,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x05,0x07,0x08,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x09,0x09,0x09,0x09,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},





	{ .i1 = { 0x03,0x03,0x03,0x03}},
};
	void f173_E_b8(void);
	void f59_PushNode(void);
	void f61_NextNode(void);
	void f173_E_b8(void);
	void f62_Discard(void);

// ReallyGenerate workspace at ws+3520 length ws+33
void f255_ReallyGenerate(void) {

	i1 v5508 = (i1)+77;
	*(i1*)(intptr_t)(ws+3600) = v5508;
	i8 v5509 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5509)();

	i8 v5510 = (i8)(intptr_t)(ws+224);
	i8 v5511 = *(i8*)(intptr_t)v5510;
	i8 v5512 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v5512 = v5511;

	i8 v5513 = (i8)(intptr_t)(ws+3520);
	i8 v5514 = *(i8*)(intptr_t)v5513;
	*(i8*)(intptr_t)(ws+3640) = v5514;
	i8 v5515 = (i8)(intptr_t)(f59_PushNode);

	((void(*)(void))(intptr_t)v5515)();

c01_0462:;

	i8 v5516 = (i8)(intptr_t)(ws+224);
	i8 v5517 = *(i8*)(intptr_t)v5516;
	i8 v5518 = (i8)(intptr_t)(ws+3528);
	i8 v5519 = *(i8*)(intptr_t)v5518;
	if (v5517==v5519) goto c01_0467; else goto c01_0466;

c01_0466:;

	i8 v5520 = (i8)(intptr_t)(f61_NextNode);

	((void(*)(void))(intptr_t)v5520)();

	i8 v5521 = *(i8*)(intptr_t)(ws+3624);
	i8 v5522 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v5522 = v5521;

	i8 v5523 = (i8)(intptr_t)(ws+3536);
	i8 v5524 = *(i8*)(intptr_t)v5523;
	i8 v5525 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v5525 = v5524;

	i8 v5526 = (i8)(intptr_t)(ws+3544);
	i8 v5527 = *(i8*)(intptr_t)v5526;
	i8 v5528 = v5527+(+48);
	i1 v5529 = *(i1*)(intptr_t)v5528;
	*(i1*)(intptr_t)(ws+3600) = v5529;
	i8 v5530 = (i8)(intptr_t)(f173_E_b8);

	((void(*)(void))(intptr_t)v5530)();

	i8 v5531 = (i8)(intptr_t)((i1*)f2___main_s0456);
	i8 v5532 = (i8)(intptr_t)(ws+3544);
	i8 v5533 = *(i8*)(intptr_t)v5532;
	i8 v5534 = v5533+(+48);
	i1 v5535 = *(i1*)(intptr_t)v5534;
	i1 v5536 = v5535+(-1);
	i8 v5537 = v5536;
	i8 v5538 = v5531+v5537;
	i1 v5539 = *(i1*)(intptr_t)v5538;
	i8 v5540 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v5540 = v5539;

	i8 v5541 = (i8)(intptr_t)(ws+3544);
	i8 v5542 = *(i8*)(intptr_t)v5541;
	*(i8*)(intptr_t)(ws+3560) = v5542;
	i8 v5543 = (i8)(intptr_t)((i1*)f2___main_s0455);
	i8 v5544 = (i8)(intptr_t)(ws+3552);
	i1 v5545 = *(i1*)(intptr_t)v5544;
	i8 v5546 = v5545;
	i1 v5547 = (i1)+3;
	i8 v5548 = ((i8)v5546)<<v5547;
	i8 v5549 = v5543+v5548;
	i8 v5550 = *(i8*)(intptr_t)v5549;

	((void(*)(void))(intptr_t)v5550)();

	goto c01_0462;

c01_0467:;

	i8 v5551 = (i8)(intptr_t)(ws+3520);
	i8 v5552 = *(i8*)(intptr_t)v5551;
	*(i8*)(intptr_t)(ws+3592) = v5552;
	i8 v5553 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v5553)();

}
	void f62_Discard(void);
	void f120_MidAsmgroupstart(void);
	void f255_ReallyGenerate(void);
	void f148_MidAsmgroupend(void);
	void f255_ReallyGenerate(void);
	void f255_ReallyGenerate(void);

// Generate workspace at ws+3488 length ws+32
void f256_Generate(void) {

	i8 v5556 = (i8)(intptr_t)(ws+3488);
	i8 v5557 = *(i8*)(intptr_t)v5556;
	i8 v5558 = v5557+(+48);
	i1 v5559 = *(i1*)(intptr_t)v5558;
	i8 v5560 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5560 = v5559;

	i8 v5561 = (i8)(intptr_t)(ws+1536);
	i1 v5562 = *(i1*)(intptr_t)v5561;
	i1 v5563 = (i1)+27;
	if (v5562==v5563) goto c01_046d; else goto c01_046f;

c01_046f:;

	i8 v5564 = (i8)(intptr_t)(ws+1536);
	i1 v5565 = *(i1*)(intptr_t)v5564;
	i1 v5566 = (i1)+28;
	if (v5565==v5566) goto c01_046d; else goto c01_046e;

c01_046d:;

	i8 v5567 = (i8)(intptr_t)(ws+3496);
	i1 v5568 = *(i1*)(intptr_t)v5567;
	i1 v5569 = (i1)+26;
	if (v5568==v5569) goto c01_0476; else goto c01_0477;

c01_0477:;

	i8 v5570 = (i8)(intptr_t)(ws+3496);
	i1 v5571 = *(i1*)(intptr_t)v5570;
	i1 v5572 = (i1)+5;
	if (v5571==v5572) goto c01_0476; else goto c01_0475;

c01_0475:;

	i8 v5573 = (i8)(intptr_t)(ws+3488);
	i8 v5574 = *(i8*)(intptr_t)v5573;
	*(i8*)(intptr_t)(ws+3592) = v5574;
	i8 v5575 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v5575)();

	return;

c01_0476:;

c01_0470:;

c01_046e:;

c01_0468:;

	i8 v5576 = (i8)(intptr_t)(ws+3496);
	i1 v5577 = *(i1*)(intptr_t)v5576;
	i1 v5578 = (i1)+18;
	if (v5577==v5578) goto c01_047f; else goto c01_047e;

c01_047f:;

	i8 v5579 = (i8)(intptr_t)(ws+1536);
	i1 v5580 = *(i1*)(intptr_t)v5579;
	i1 v5581 = (i1)+23;
	if (v5580==v5581) goto c01_047e; else goto c01_047d;

c01_047d:;

	i8 v5582 = (i8)(intptr_t)(f120_MidAsmgroupstart);

	((void(*)(void))(intptr_t)v5582)();

	i8 v5583 = *(i8*)(intptr_t)(ws+3520);
	i8 v5584 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5584 = v5583;

	i8 v5585 = (i8)(intptr_t)(ws+3504);
	i8 v5586 = *(i8*)(intptr_t)v5585;
	*(i8*)(intptr_t)(ws+3520) = v5586;
	i8 v5587 = (i8)(intptr_t)(f255_ReallyGenerate);

	((void(*)(void))(intptr_t)v5587)();

c01_047e:;

c01_0478:;

	i8 v5588 = (i8)(intptr_t)(ws+1536);
	i1 v5589 = *(i1*)(intptr_t)v5588;
	i1 v5590 = (i1)+23;
	if (v5589==v5590) goto c01_0487; else goto c01_0486;

c01_0487:;

	i8 v5591 = (i8)(intptr_t)(ws+3496);
	i1 v5592 = *(i1*)(intptr_t)v5591;
	i1 v5593 = (i1)+18;
	if (v5592==v5593) goto c01_0486; else goto c01_0485;

c01_0485:;

	i8 v5594 = (i8)(intptr_t)(f148_MidAsmgroupend);

	((void(*)(void))(intptr_t)v5594)();

	i8 v5595 = *(i8*)(intptr_t)(ws+3520);
	i8 v5596 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5596 = v5595;

	i8 v5597 = (i8)(intptr_t)(ws+3512);
	i8 v5598 = *(i8*)(intptr_t)v5597;
	*(i8*)(intptr_t)(ws+3520) = v5598;
	i8 v5599 = (i8)(intptr_t)(f255_ReallyGenerate);

	((void(*)(void))(intptr_t)v5599)();

c01_0486:;

c01_0480:;

	i8 v5600 = (i8)(intptr_t)(ws+3496);
	i1 v5601 = *(i1*)(intptr_t)v5600;
	i8 v5602 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5602 = v5601;

	i8 v5603 = (i8)(intptr_t)(ws+3488);
	i8 v5604 = *(i8*)(intptr_t)v5603;
	*(i8*)(intptr_t)(ws+3520) = v5604;
	i8 v5605 = (i8)(intptr_t)(f255_ReallyGenerate);

	((void(*)(void))(intptr_t)v5605)();

}
	void f59_PushNode(void);
	void f60_PopNode(void);
	void f59_PushNode(void);
	void f59_PushNode(void);
	void f62_Discard(void);

// push_and_free workspace at ws+3472 length ws+0
void f258_push_and_free(void) {

	i8 v5665 = (i8)(intptr_t)(ws+3424);
	i2 v5666 = *(i2*)(intptr_t)v5665;
	i8 v5667 = (i8)(intptr_t)(ws+3440);
	i8 v5668 = *(i8*)(intptr_t)v5667;
	*(i2*)(intptr_t)v5668 = v5666;

	i8 v5669 = (i8)(intptr_t)(ws+3426);
	i2 v5670 = *(i2*)(intptr_t)v5669;
	i8 v5671 = (i8)(intptr_t)(ws+3440);
	i8 v5672 = *(i8*)(intptr_t)v5671;
	i8 v5673 = v5672+(+2);
	*(i2*)(intptr_t)v5673 = v5670;

	i8 v5674 = (i8)(intptr_t)(ws+3428);
	i2 v5675 = *(i2*)(intptr_t)v5674;
	i8 v5676 = (i8)(intptr_t)(ws+3440);
	i8 v5677 = *(i8*)(intptr_t)v5676;
	i8 v5678 = v5677+(+4);
	*(i2*)(intptr_t)v5678 = v5675;

	i8 v5679 = (i8)+0;
	i8 v5680 = (i8)(intptr_t)(ws+3416);
	i8 v5681 = *(i8*)(intptr_t)v5680;
	i8 v5682 = v5681+(+32);
	*(i8*)(intptr_t)v5682 = v5679;

	i8 v5683 = (i8)+0;
	i8 v5684 = (i8)(intptr_t)(ws+3416);
	i8 v5685 = *(i8*)(intptr_t)v5684;
	i8 v5686 = v5685+(+40);
	*(i8*)(intptr_t)v5686 = v5683;

	i8 v5687 = (i8)(intptr_t)(ws+3440);
	i8 v5688 = *(i8*)(intptr_t)v5687;
	*(i8*)(intptr_t)(ws+3640) = v5688;
	i8 v5689 = (i8)(intptr_t)(f59_PushNode);

	((void(*)(void))(intptr_t)v5689)();

	i8 v5690 = (i8)(intptr_t)(ws+3432);
	i8 v5691 = *(i8*)(intptr_t)v5690;
	*(i8*)(intptr_t)(ws+3640) = v5691;
	i8 v5692 = (i8)(intptr_t)(f59_PushNode);

	((void(*)(void))(intptr_t)v5692)();

	i8 v5693 = (i8)(intptr_t)(ws+3416);
	i8 v5694 = *(i8*)(intptr_t)v5693;
	*(i8*)(intptr_t)(ws+3592) = v5694;
	i8 v5695 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v5695)();

}
	void f235_AllocLabel(void);
	void f258_push_and_free(void);
	void f235_AllocLabel(void);
	void f258_push_and_free(void);
	void f256_Generate(void);
	void f110_MidLabel(void);
	void f256_Generate(void);

// GenerateConditional workspace at ws+3392 length ws+80
void f257_GenerateConditional(void) {

	i8 v5606 = (i8)(intptr_t)(ws+224);
	i8 v5607 = *(i8*)(intptr_t)v5606;
	i8 v5608 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v5608 = v5607;

	i8 v5609 = (i8)(intptr_t)(ws+3392);
	i8 v5610 = *(i8*)(intptr_t)v5609;
	*(i8*)(intptr_t)(ws+3640) = v5610;
	i8 v5611 = (i8)(intptr_t)(f59_PushNode);

	((void(*)(void))(intptr_t)v5611)();

c01_0488:;

	i8 v5612 = (i8)(intptr_t)(ws+224);
	i8 v5613 = *(i8*)(intptr_t)v5612;
	i8 v5614 = (i8)(intptr_t)(ws+3400);
	i8 v5615 = *(i8*)(intptr_t)v5614;
	if (v5613==v5615) goto c01_048d; else goto c01_048c;

c01_048c:;

	i8 v5616 = (i8)(intptr_t)(f60_PopNode);

	((void(*)(void))(intptr_t)v5616)();

	i8 v5617 = *(i8*)(intptr_t)(ws+3640);
	i8 v5618 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v5618 = v5617;

	i8 v5619 = (i8)(intptr_t)(ws+3408);
	i8 v5620 = *(i8*)(intptr_t)v5619;
	i8 v5621 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5621 = v5620;

	i8 v5622 = (i8)(intptr_t)(ws+3416);
	i8 v5623 = *(i8*)(intptr_t)v5622;
	i2 v5624 = *(i2*)(intptr_t)v5623;
	i8 v5625 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5625 = v5624;

	i8 v5626 = (i8)(intptr_t)(ws+3416);
	i8 v5627 = *(i8*)(intptr_t)v5626;
	i8 v5628 = v5627+(+2);
	i2 v5629 = *(i2*)(intptr_t)v5628;
	i8 v5630 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v5630 = v5629;

	i8 v5631 = (i8)(intptr_t)(ws+3416);
	i8 v5632 = *(i8*)(intptr_t)v5631;
	i8 v5633 = v5632+(+4);
	i2 v5634 = *(i2*)(intptr_t)v5633;
	i8 v5635 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v5635 = v5634;

	i8 v5636 = (i8)(intptr_t)(ws+3416);
	i8 v5637 = *(i8*)(intptr_t)v5636;
	i8 v5638 = v5637+(+32);
	i8 v5639 = *(i8*)(intptr_t)v5638;
	i8 v5640 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v5640 = v5639;

	i8 v5641 = (i8)(intptr_t)(ws+3416);
	i8 v5642 = *(i8*)(intptr_t)v5641;
	i8 v5643 = v5642+(+40);
	i8 v5644 = *(i8*)(intptr_t)v5643;
	i8 v5645 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v5645 = v5644;

	i8 v5646 = (i8)(intptr_t)(ws+3416);
	i8 v5647 = *(i8*)(intptr_t)v5646;
	i8 v5648 = v5647+(+48);
	i1 v5649 = *(i1*)(intptr_t)v5648;
	i8 v5650 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v5650 = v5649;

	i8 v5651 = (i8)(intptr_t)(ws+3416);
	i8 v5652 = *(i8*)(intptr_t)v5651;
	i8 v5653 = v5652+(+6);
	i1 v5654 = *(i1*)(intptr_t)v5653;
	i1 v5655 = (i1)+0;
	if (v5654==v5655) goto c01_0492; else goto c01_0491;

c01_0491:;

	i8 v5656 = (i8)(intptr_t)(ws+3424);
	i2 v5657 = *(i2*)(intptr_t)v5656;
	i8 v5658 = (i8)(intptr_t)(ws+3450);
	*(i2*)(intptr_t)v5658 = v5657;

	i8 v5659 = (i8)(intptr_t)(ws+3426);
	i2 v5660 = *(i2*)(intptr_t)v5659;
	i8 v5661 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5661 = v5660;

	i8 v5662 = (i8)(intptr_t)(ws+3450);
	i2 v5663 = *(i2*)(intptr_t)v5662;
	i8 v5664 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v5664 = v5663;

c01_0492:;

c01_048e:;


	i8 v5696 = (i8)(intptr_t)(ws+3448);
	i1 v5697 = *(i1*)(intptr_t)v5696;

	if (v5697 != +55) goto c01_0494;

	i8 v5698 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v5698)();

	i2 v5699 = *(i2*)(intptr_t)(ws+3472);
	i8 v5700 = (i8)(intptr_t)(ws+3454);
	*(i2*)(intptr_t)v5700 = v5699;

	i8 v5701 = (i8)(intptr_t)(ws+3454);
	i2 v5702 = *(i2*)(intptr_t)v5701;
	i8 v5703 = (i8)(intptr_t)(ws+3452);
	*(i2*)(intptr_t)v5703 = v5702;

	i8 v5704 = (i8)(intptr_t)(ws+3424);
	i2 v5705 = *(i2*)(intptr_t)v5704;
	i8 v5706 = (i8)(intptr_t)(ws+3432);
	i8 v5707 = *(i8*)(intptr_t)v5706;
	*(i2*)(intptr_t)v5707 = v5705;

	i8 v5708 = (i8)(intptr_t)(ws+3452);
	i2 v5709 = *(i2*)(intptr_t)v5708;
	i8 v5710 = (i8)(intptr_t)(ws+3432);
	i8 v5711 = *(i8*)(intptr_t)v5710;
	i8 v5712 = v5711+(+2);
	*(i2*)(intptr_t)v5712 = v5709;

	i8 v5713 = (i8)(intptr_t)(ws+3452);
	i2 v5714 = *(i2*)(intptr_t)v5713;
	i8 v5715 = (i8)(intptr_t)(ws+3432);
	i8 v5716 = *(i8*)(intptr_t)v5715;
	i8 v5717 = v5716+(+4);
	*(i2*)(intptr_t)v5717 = v5714;

	i8 v5718 = (i8)(intptr_t)(f258_push_and_free);

	((void(*)(void))(intptr_t)v5718)();

	goto c01_0493;

c01_0494:;

	if (v5697 != +54) goto c01_0495;

	i8 v5719 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v5719)();

	i2 v5720 = *(i2*)(intptr_t)(ws+3472);
	i8 v5721 = (i8)(intptr_t)(ws+3456);
	*(i2*)(intptr_t)v5721 = v5720;

	i8 v5722 = (i8)(intptr_t)(ws+3456);
	i2 v5723 = *(i2*)(intptr_t)v5722;
	i8 v5724 = (i8)(intptr_t)(ws+3452);
	*(i2*)(intptr_t)v5724 = v5723;

	i8 v5725 = (i8)(intptr_t)(ws+3452);
	i2 v5726 = *(i2*)(intptr_t)v5725;
	i8 v5727 = (i8)(intptr_t)(ws+3432);
	i8 v5728 = *(i8*)(intptr_t)v5727;
	*(i2*)(intptr_t)v5728 = v5726;

	i8 v5729 = (i8)(intptr_t)(ws+3426);
	i2 v5730 = *(i2*)(intptr_t)v5729;
	i8 v5731 = (i8)(intptr_t)(ws+3432);
	i8 v5732 = *(i8*)(intptr_t)v5731;
	i8 v5733 = v5732+(+2);
	*(i2*)(intptr_t)v5733 = v5730;

	i8 v5734 = (i8)(intptr_t)(ws+3452);
	i2 v5735 = *(i2*)(intptr_t)v5734;
	i8 v5736 = (i8)(intptr_t)(ws+3432);
	i8 v5737 = *(i8*)(intptr_t)v5736;
	i8 v5738 = v5737+(+4);
	*(i2*)(intptr_t)v5738 = v5735;

	i8 v5739 = (i8)(intptr_t)(f258_push_and_free);

	((void(*)(void))(intptr_t)v5739)();

	goto c01_0493;

c01_0495:;

	i8 v5740 = (i8)(intptr_t)(ws+3424);
	i2 v5741 = *(i2*)(intptr_t)v5740;
	i8 v5742 = (i8)(intptr_t)(ws+3416);
	i8 v5743 = *(i8*)(intptr_t)v5742;
	*(i2*)(intptr_t)v5743 = v5741;

	i8 v5744 = (i8)(intptr_t)(ws+3426);
	i2 v5745 = *(i2*)(intptr_t)v5744;
	i8 v5746 = (i8)(intptr_t)(ws+3416);
	i8 v5747 = *(i8*)(intptr_t)v5746;
	i8 v5748 = v5747+(+2);
	*(i2*)(intptr_t)v5748 = v5745;

	i8 v5749 = (i8)(intptr_t)(ws+3416);
	i8 v5750 = *(i8*)(intptr_t)v5749;
	*(i8*)(intptr_t)(ws+3488) = v5750;
	i8 v5751 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v5751)();

	i8 v5752 = (i8)(intptr_t)(ws+3428);
	i2 v5753 = *(i2*)(intptr_t)v5752;
	*(i2*)(intptr_t)(ws+3472) = v5753;
	i8 v5754 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v5754)();

	i8 v5755 = *(i8*)(intptr_t)(ws+3480);
	i8 v5756 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v5756 = v5755;

	i8 v5757 = (i8)(intptr_t)(ws+3464);
	i8 v5758 = *(i8*)(intptr_t)v5757;
	*(i8*)(intptr_t)(ws+3488) = v5758;
	i8 v5759 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v5759)();

c01_0493:;


	goto c01_0488;

c01_048d:;

}
	void f221_CheckNotPartialType(void);
	void f68_InternalAlloc(void);
	void f241_ArchInitVariable(void);

// InitVariable workspace at ws+3488 length ws+32
void f259_InitVariable(void) {

	i8 v5760 = (i8)(intptr_t)(ws+3504);
	i8 v5761 = *(i8*)(intptr_t)v5760;
	*(i8*)(intptr_t)(ws+3520) = v5761;
	i8 v5762 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v5762)();

	i1 v5763 = (i1)+28;
	i8 v5764 = (i8)(intptr_t)(ws+3496);
	i8 v5765 = *(i8*)(intptr_t)v5764;
	i8 v5766 = v5765+(+32);
	*(i1*)(intptr_t)v5766 = v5763;

	i8 v5767 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v5767;
	i8 v5768 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v5768)();

	i8 v5769 = *(i8*)(intptr_t)(ws+3648);
	i8 v5770 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5770 = v5769;

	i8 v5771 = (i8)(intptr_t)(ws+3512);
	i8 v5772 = *(i8*)(intptr_t)v5771;
	i8 v5773 = (i8)(intptr_t)(ws+3496);
	i8 v5774 = *(i8*)(intptr_t)v5773;
	*(i8*)(intptr_t)v5774 = v5772;

	i8 v5775 = (i8)(intptr_t)(ws+3504);
	i8 v5776 = *(i8*)(intptr_t)v5775;
	i8 v5777 = (i8)(intptr_t)(ws+3496);
	i8 v5778 = *(i8*)(intptr_t)v5777;
	i8 v5779 = *(i8*)(intptr_t)v5778;
	*(i8*)(intptr_t)v5779 = v5776;

	i8 v5780 = (i8)(intptr_t)(ws+3488);
	i8 v5781 = *(i8*)(intptr_t)v5780;
	i8 v5782 = (i8)(intptr_t)(ws+3496);
	i8 v5783 = *(i8*)(intptr_t)v5782;
	i8 v5784 = *(i8*)(intptr_t)v5783;
	i8 v5785 = v5784+(+8);
	*(i8*)(intptr_t)v5785 = v5781;

	i8 v5786 = (i8)(intptr_t)(ws+3496);
	i8 v5787 = *(i8*)(intptr_t)v5786;
	*(i8*)(intptr_t)(ws+3520) = v5787;
	i8 v5788 = (i8)(intptr_t)(f241_ArchInitVariable);

	((void(*)(void))(intptr_t)v5788)();

}
	void f65_AllocNewType(void);
	void f69_StrDupBraced(void);
	void f222_AddTypeToNamespace(void);

// MakePointerType workspace at ws+3496 length ws+32
void f260_MakePointerType(void) {

	i8 v5789 = (i8)(intptr_t)(ws+3496);
	i8 v5790 = *(i8*)(intptr_t)v5789;
	i8 v5791 = v5790+(+40);
	i8 v5792 = *(i8*)(intptr_t)v5791;
	i8 v5793 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5793 = v5792;

	i8 v5794 = (i8)(intptr_t)(ws+3504);
	i8 v5795 = *(i8*)(intptr_t)v5794;
	i8 v5796 = (i8)+0;
	if (v5795==v5796) goto c01_0499; else goto c01_049a;

c01_0499:;

	i8 v5797 = (i8)(intptr_t)(f65_AllocNewType);

	((void(*)(void))(intptr_t)v5797)();

	i8 v5798 = *(i8*)(intptr_t)(ws+3528);
	i8 v5799 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5799 = v5798;

	i8 v5800 = (i8)(intptr_t)(ws+3512);
	i8 v5801 = *(i8*)(intptr_t)v5800;
	i8 v5802 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5802 = v5801;

	i1 v5803 = (i1)+3;
	i8 v5804 = (i8)(intptr_t)(ws+3504);
	i8 v5805 = *(i8*)(intptr_t)v5804;
	i8 v5806 = v5805+(+52);
	*(i1*)(intptr_t)v5806 = v5803;

	i8 v5807 = (i8)(intptr_t)(ws+1528);
	i8 v5808 = *(i8*)(intptr_t)v5807;
	i8 v5809 = v5808+(+48);
	i2 v5810 = *(i2*)(intptr_t)v5809;
	i8 v5811 = (i8)(intptr_t)(ws+3504);
	i8 v5812 = *(i8*)(intptr_t)v5811;
	i8 v5813 = v5812+(+48);
	*(i2*)(intptr_t)v5813 = v5810;

	i8 v5814 = (i8)(intptr_t)(ws+1528);
	i8 v5815 = *(i8*)(intptr_t)v5814;
	i8 v5816 = v5815+(+53);
	i1 v5817 = *(i1*)(intptr_t)v5816;
	i8 v5818 = (i8)(intptr_t)(ws+3504);
	i8 v5819 = *(i8*)(intptr_t)v5818;
	i8 v5820 = v5819+(+53);
	*(i1*)(intptr_t)v5820 = v5817;

	i8 v5821 = (i8)(intptr_t)(ws+1528);
	i8 v5822 = *(i8*)(intptr_t)v5821;
	i8 v5823 = v5822+(+50);
	i2 v5824 = *(i2*)(intptr_t)v5823;
	i8 v5825 = (i8)(intptr_t)(ws+3504);
	i8 v5826 = *(i8*)(intptr_t)v5825;
	i8 v5827 = v5826+(+50);
	*(i2*)(intptr_t)v5827 = v5824;

	i8 v5828 = (i8)(intptr_t)(ws+3496);
	i8 v5829 = *(i8*)(intptr_t)v5828;
	i8 v5830 = (i8)(intptr_t)(ws+3504);
	i8 v5831 = *(i8*)(intptr_t)v5830;
	*(i8*)(intptr_t)v5831 = v5829;

	i8 v5832 = (i8)(intptr_t)(ws+3504);
	i8 v5833 = *(i8*)(intptr_t)v5832;
	i8 v5834 = (i8)(intptr_t)(ws+3496);
	i8 v5835 = *(i8*)(intptr_t)v5834;
	i8 v5836 = v5835+(+40);
	*(i8*)(intptr_t)v5836 = v5833;

	i8 v5837 = (i8)(intptr_t)(ws+3496);
	i8 v5838 = *(i8*)(intptr_t)v5837;
	i8 v5839 = v5838+(+32);
	i8 v5840 = *(i8*)(intptr_t)v5839;
	i8 v5841 = v5840+(+8);
	i8 v5842 = *(i8*)(intptr_t)v5841;
	*(i8*)(intptr_t)(ws+3528) = v5842;
	i8 v5843 = (i8)(intptr_t)(f69_StrDupBraced);

	((void(*)(void))(intptr_t)v5843)();

	i8 v5844 = *(i8*)(intptr_t)(ws+3536);
	i8 v5845 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v5845 = v5844;

	i8 v5846 = (i8)(intptr_t)(ws+3496);
	i8 v5847 = *(i8*)(intptr_t)v5846;
	i8 v5848 = v5847+(+32);
	i8 v5849 = *(i8*)(intptr_t)v5848;
	i8 v5850 = v5849+(+16);
	i8 v5851 = *(i8*)(intptr_t)v5850;
	*(i8*)(intptr_t)(ws+3528) = v5851;
	i8 v5852 = (i8)(intptr_t)(ws+3504);
	i8 v5853 = *(i8*)(intptr_t)v5852;
	*(i8*)(intptr_t)(ws+3536) = v5853;
	i8 v5854 = (i8)(intptr_t)(ws+3520);
	i8 v5855 = *(i8*)(intptr_t)v5854;
	*(i8*)(intptr_t)(ws+3544) = v5855;
	i8 v5856 = (i8)(intptr_t)(f222_AddTypeToNamespace);

	((void(*)(void))(intptr_t)v5856)();

c01_049a:;

c01_0496:;

}
	void f221_CheckNotPartialType(void);
	void f65_AllocNewType(void);
	void f240_ArchGuessIntType(void);
	void f70_StrDupArrayed(void);
	void f222_AddTypeToNamespace(void);

// MakeArrayType workspace at ws+3392 length ws+56
void f261_MakeArrayType(void) {

	i8 v5857 = (i8)(intptr_t)(ws+3392);
	i8 v5858 = *(i8*)(intptr_t)v5857;
	*(i8*)(intptr_t)(ws+3520) = v5858;
	i8 v5859 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v5859)();

	i8 v5860 = (i8)(intptr_t)(f65_AllocNewType);

	((void(*)(void))(intptr_t)v5860)();

	i8 v5861 = *(i8*)(intptr_t)(ws+3528);
	i8 v5862 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5862 = v5861;

	i8 v5863 = (i8)(intptr_t)(ws+3416);
	i8 v5864 = *(i8*)(intptr_t)v5863;
	i8 v5865 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v5865 = v5864;

	i1 v5866 = (i1)+4;
	i8 v5867 = (i8)(intptr_t)(ws+3408);
	i8 v5868 = *(i8*)(intptr_t)v5867;
	i8 v5869 = v5868+(+52);
	*(i1*)(intptr_t)v5869 = v5866;

	i2 v5870 = (i2)+0;
	i8 v5871 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5871 = v5870;

	i2 v5872 = (i2)+0;
	i8 v5873 = (i8)(intptr_t)(ws+3400);
	i2 v5874 = *(i2*)(intptr_t)v5873;
	if (v5872<v5874) goto c01_049e; else goto c01_049f;

c01_049e:;

	i8 v5875 = (i8)(intptr_t)(ws+3392);
	i8 v5876 = *(i8*)(intptr_t)v5875;
	i8 v5877 = v5876+(+50);
	i2 v5878 = *(i2*)(intptr_t)v5877;
	i8 v5879 = (i8)(intptr_t)(ws+3400);
	i2 v5880 = *(i2*)(intptr_t)v5879;
	i2 v5881 = v5880+(-1);
	i2 v5882 = v5878*v5881;
	i8 v5883 = (i8)(intptr_t)(ws+3392);
	i8 v5884 = *(i8*)(intptr_t)v5883;
	i8 v5885 = v5884+(+48);
	i2 v5886 = *(i2*)(intptr_t)v5885;
	i2 v5887 = v5882+v5886;
	i8 v5888 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5888 = v5887;

c01_049f:;

c01_049b:;

	i8 v5889 = (i8)(intptr_t)(ws+3424);
	i2 v5890 = *(i2*)(intptr_t)v5889;
	i8 v5891 = (i8)(intptr_t)(ws+3408);
	i8 v5892 = *(i8*)(intptr_t)v5891;
	i8 v5893 = v5892+(+48);
	*(i2*)(intptr_t)v5893 = v5890;

	i8 v5894 = (i8)(intptr_t)(ws+3392);
	i8 v5895 = *(i8*)(intptr_t)v5894;
	i8 v5896 = v5895+(+53);
	i1 v5897 = *(i1*)(intptr_t)v5896;
	i8 v5898 = (i8)(intptr_t)(ws+3408);
	i8 v5899 = *(i8*)(intptr_t)v5898;
	i8 v5900 = v5899+(+53);
	*(i1*)(intptr_t)v5900 = v5897;

	i8 v5901 = (i8)(intptr_t)(ws+3392);
	i8 v5902 = *(i8*)(intptr_t)v5901;
	i8 v5903 = v5902+(+50);
	i2 v5904 = *(i2*)(intptr_t)v5903;
	i8 v5905 = (i8)(intptr_t)(ws+3400);
	i2 v5906 = *(i2*)(intptr_t)v5905;
	i2 v5907 = v5904*v5906;
	i8 v5908 = (i8)(intptr_t)(ws+3408);
	i8 v5909 = *(i8*)(intptr_t)v5908;
	i8 v5910 = v5909+(+50);
	*(i2*)(intptr_t)v5910 = v5907;

	i8 v5911 = (i8)(intptr_t)(ws+3392);
	i8 v5912 = *(i8*)(intptr_t)v5911;
	i8 v5913 = (i8)(intptr_t)(ws+3408);
	i8 v5914 = *(i8*)(intptr_t)v5913;
	*(i8*)(intptr_t)v5914 = v5912;

	i8 v5915 = (i8)(intptr_t)(ws+3400);
	i2 v5916 = *(i2*)(intptr_t)v5915;
	i8 v5917 = (i8)(intptr_t)(ws+3408);
	i8 v5918 = *(i8*)(intptr_t)v5917;
	i8 v5919 = v5918+(+8);
	*(i2*)(intptr_t)v5919 = v5916;

	i4 v5920 = (i4)+0;
	*(i4*)(intptr_t)(ws+3448) = v5920;
	i8 v5921 = (i8)(intptr_t)(ws+3400);
	i2 v5922 = *(i2*)(intptr_t)v5921;
	i2 v5923 = v5922+(-1);
	i4 v5924 = v5923;
	*(i4*)(intptr_t)(ws+3452) = v5924;
	i8 v5925 = (i8)(intptr_t)(f240_ArchGuessIntType);

	((void(*)(void))(intptr_t)v5925)();

	i8 v5926 = *(i8*)(intptr_t)(ws+3456);
	i8 v5927 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v5927 = v5926;

	i8 v5928 = (i8)(intptr_t)(ws+3432);
	i8 v5929 = *(i8*)(intptr_t)v5928;
	i8 v5930 = (i8)(intptr_t)(ws+3408);
	i8 v5931 = *(i8*)(intptr_t)v5930;
	i8 v5932 = v5931+(+16);
	*(i8*)(intptr_t)v5932 = v5929;

	i8 v5933 = (i8)(intptr_t)(ws+3392);
	i8 v5934 = *(i8*)(intptr_t)v5933;
	i8 v5935 = v5934+(+32);
	i8 v5936 = *(i8*)(intptr_t)v5935;
	i8 v5937 = v5936+(+8);
	i8 v5938 = *(i8*)(intptr_t)v5937;
	*(i8*)(intptr_t)(ws+3448) = v5938;
	i8 v5939 = (i8)(intptr_t)(ws+3400);
	i2 v5940 = *(i2*)(intptr_t)v5939;
	*(i2*)(intptr_t)(ws+3456) = v5940;
	i8 v5941 = (i8)(intptr_t)(f70_StrDupArrayed);

	((void(*)(void))(intptr_t)v5941)();

	i8 v5942 = *(i8*)(intptr_t)(ws+3464);
	i8 v5943 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v5943 = v5942;

	i8 v5944 = (i8)(intptr_t)(ws+3392);
	i8 v5945 = *(i8*)(intptr_t)v5944;
	i8 v5946 = v5945+(+32);
	i8 v5947 = *(i8*)(intptr_t)v5946;
	i8 v5948 = v5947+(+16);
	i8 v5949 = *(i8*)(intptr_t)v5948;
	*(i8*)(intptr_t)(ws+3528) = v5949;
	i8 v5950 = (i8)(intptr_t)(ws+3408);
	i8 v5951 = *(i8*)(intptr_t)v5950;
	*(i8*)(intptr_t)(ws+3536) = v5951;
	i8 v5952 = (i8)(intptr_t)(ws+3440);
	i8 v5953 = *(i8*)(intptr_t)v5952;
	*(i8*)(intptr_t)(ws+3544) = v5953;
	i8 v5954 = (i8)(intptr_t)(f222_AddTypeToNamespace);

	((void(*)(void))(intptr_t)v5954)();

}

// QueueNamespace workspace at ws+3464 length ws+16
void f263_QueueNamespace(void) {

c01_04a0:;

	i8 v5957 = (i8)(intptr_t)(ws+3464);
	i8 v5958 = *(i8*)(intptr_t)v5957;
	i8 v5959 = *(i8*)(intptr_t)v5958;
	i8 v5960 = (i8)+0;
	if (v5959==v5960) goto c01_04a5; else goto c01_04a4;

c01_04a4:;

	i8 v5961 = (i8)(intptr_t)(ws+3464);
	i8 v5962 = *(i8*)(intptr_t)v5961;
	i8 v5963 = *(i8*)(intptr_t)v5962;
	i8 v5964 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v5964 = v5963;

	i8 v5965 = (i8)(intptr_t)(ws+3472);
	i8 v5966 = *(i8*)(intptr_t)v5965;
	i8 v5967 = v5966+(+24);
	i8 v5968 = *(i8*)(intptr_t)v5967;
	i8 v5969 = (i8)(intptr_t)(ws+3464);
	i8 v5970 = *(i8*)(intptr_t)v5969;
	*(i8*)(intptr_t)v5970 = v5968;

	i8 v5971 = (i8)(intptr_t)(ws+3416);
	i8 v5972 = *(i8*)(intptr_t)v5971;
	i8 v5973 = (i8)(intptr_t)(ws+3472);
	i8 v5974 = *(i8*)(intptr_t)v5973;
	i8 v5975 = v5974+(+24);
	*(i8*)(intptr_t)v5975 = v5972;

	i8 v5976 = (i8)(intptr_t)(ws+3472);
	i8 v5977 = *(i8*)(intptr_t)v5976;
	i8 v5978 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5978 = v5977;

	goto c01_04a0;

c01_04a5:;

}
	void f99_GetOutputParameter(void);
	void f98_GetInputParameter(void);
	void f263_QueueNamespace(void);
	void f263_QueueNamespace(void);
	void f33_Free(void);
	void f66_FreeType(void);
	void f33_Free(void);
	void f33_Free(void);
	void f64_FreeSymbol(void);

// DestructSubroutineContents workspace at ws+3408 length ws+56
void f262_DestructSubroutineContents(void) {

	i8 v5955 = (i8)+0;
	i8 v5956 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5956 = v5955;


	i8 v5979 = (i8)(intptr_t)(ws+3408);
	i8 v5980 = *(i8*)(intptr_t)v5979;
	i8 v5981 = v5980+(+81);
	i1 v5982 = *(i1*)(intptr_t)v5981;
	i1 v5983 = (i1)+0;
	if (v5982==v5983) goto c01_04aa; else goto c01_04a9;

c01_04a9:;

	i8 v5984 = (i8)(intptr_t)(ws+3408);
	i8 v5985 = *(i8*)(intptr_t)v5984;
	*(i8*)(intptr_t)(ws+3488) = v5985;
	i8 v5986 = (i8)(intptr_t)(ws+3408);
	i8 v5987 = *(i8*)(intptr_t)v5986;
	i8 v5988 = v5987+(+81);
	i1 v5989 = *(i1*)(intptr_t)v5988;
	i1 v5990 = v5989+(-1);
	*(i1*)(intptr_t)(ws+3496) = v5990;
	i8 v5991 = (i8)(intptr_t)(f99_GetOutputParameter);

	((void(*)(void))(intptr_t)v5991)();

	i8 v5992 = *(i8*)(intptr_t)(ws+3504);
	i8 v5993 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v5993 = v5992;

	i8 v5994 = (i8)(intptr_t)(ws+3432);
	i8 v5995 = *(i8*)(intptr_t)v5994;
	i8 v5996 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v5996 = v5995;

	goto c01_04a6;

c01_04aa:;

	i8 v5997 = (i8)(intptr_t)(ws+3408);
	i8 v5998 = *(i8*)(intptr_t)v5997;
	i8 v5999 = v5998+(+80);
	i1 v6000 = *(i1*)(intptr_t)v5999;
	i1 v6001 = (i1)+0;
	if (v6000==v6001) goto c01_04ae; else goto c01_04ad;

c01_04ad:;

	i8 v6002 = (i8)(intptr_t)(ws+3408);
	i8 v6003 = *(i8*)(intptr_t)v6002;
	*(i8*)(intptr_t)(ws+3464) = v6003;
	i8 v6004 = (i8)(intptr_t)(ws+3408);
	i8 v6005 = *(i8*)(intptr_t)v6004;
	i8 v6006 = v6005+(+80);
	i1 v6007 = *(i1*)(intptr_t)v6006;
	i1 v6008 = v6007+(-1);
	*(i1*)(intptr_t)(ws+3472) = v6008;
	i8 v6009 = (i8)(intptr_t)(f98_GetInputParameter);

	((void(*)(void))(intptr_t)v6009)();

	i8 v6010 = *(i8*)(intptr_t)(ws+3480);
	i8 v6011 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6011 = v6010;

	i8 v6012 = (i8)(intptr_t)(ws+3440);
	i8 v6013 = *(i8*)(intptr_t)v6012;
	i8 v6014 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6014 = v6013;

	goto c01_04a6;

c01_04ae:;

	i8 v6015 = (i8)+0;
	i8 v6016 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6016 = v6015;

c01_04a6:;

	i8 v6017 = (i8)(intptr_t)(ws+3408);
	i8 v6018 = *(i8*)(intptr_t)v6017;
	i8 v6019 = v6018+(+16);
	i8 v6020 = *(i8*)(intptr_t)v6019;
	i8 v6021 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6021 = v6020;

	i8 v6022 = (i8)(intptr_t)(ws+3424);
	i8 v6023 = *(i8*)(intptr_t)v6022;
	i8 v6024 = (i8)+0;
	if (v6023==v6024) goto c01_04b3; else goto c01_04b2;

c01_04b2:;

	i8 v6025 = (i8)(intptr_t)(ws+3424);
	i8 v6026 = *(i8*)(intptr_t)v6025;
	i8 v6027 = v6026+(+24);
	i8 v6028 = *(i8*)(intptr_t)v6027;
	i8 v6029 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6029 = v6028;

c01_04b3:;

c01_04af:;

c01_04b4:;

	i8 v6030 = (i8)(intptr_t)(ws+3416);
	i8 v6031 = *(i8*)(intptr_t)v6030;
	i8 v6032 = (i8)+0;
	if (v6031==v6032) goto c01_04b9; else goto c01_04b8;

c01_04b8:;

	i8 v6033 = (i8)(intptr_t)(ws+3416);
	i8 v6034 = *(i8*)(intptr_t)v6033;
	i8 v6035 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6035 = v6034;

	i8 v6036 = (i8)(intptr_t)(ws+3416);
	i8 v6037 = *(i8*)(intptr_t)v6036;
	i8 v6038 = v6037+(+24);
	i8 v6039 = *(i8*)(intptr_t)v6038;
	i8 v6040 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6040 = v6039;

	i8 v6041 = (i8)(intptr_t)(ws+3448);
	i8 v6042 = *(i8*)(intptr_t)v6041;
	i8 v6043 = v6042+(+32);
	i1 v6044 = *(i1*)(intptr_t)v6043;

	if (v6044 != +30) goto c01_04bb;

	i8 v6045 = (i8)(intptr_t)(ws+3448);
	i8 v6046 = *(i8*)(intptr_t)v6045;
	i8 v6047 = *(i8*)(intptr_t)v6046;
	i8 v6048 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6048 = v6047;

	i8 v6049 = (i8)(intptr_t)(ws+3456);
	i8 v6050 = *(i8*)(intptr_t)v6049;
	i8 v6051 = v6050+(+52);
	i1 v6052 = *(i1*)(intptr_t)v6051;

	if (v6052 != +5) goto c01_04bd;

	i8 v6053 = (i8)(intptr_t)(ws+3456);
	i8 v6054 = *(i8*)(intptr_t)v6053;
	*(i8*)(intptr_t)(ws+3464) = v6054;
	i8 v6055 = (i8)(intptr_t)(f263_QueueNamespace);

	((void(*)(void))(intptr_t)v6055)();

	goto c01_04bc;

c01_04bd:;

	if (v6052 != +6) goto c01_04be;

	i8 v6056 = (i8)(intptr_t)(ws+3456);
	i8 v6057 = *(i8*)(intptr_t)v6056;
	i8 v6058 = *(i8*)(intptr_t)v6057;
	i8 v6059 = v6058+(+16);
	*(i8*)(intptr_t)(ws+3464) = v6059;
	i8 v6060 = (i8)(intptr_t)(f263_QueueNamespace);

	((void(*)(void))(intptr_t)v6060)();

	i8 v6061 = (i8)(intptr_t)(ws+3456);
	i8 v6062 = *(i8*)(intptr_t)v6061;
	i8 v6063 = *(i8*)(intptr_t)v6062;
	*(i8*)(intptr_t)(ws+3680) = v6063;
	i8 v6064 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v6064)();

c01_04be:;

c01_04bc:;


	i8 v6065 = (i8)(intptr_t)(ws+3456);
	i8 v6066 = *(i8*)(intptr_t)v6065;
	*(i8*)(intptr_t)(ws+3464) = v6066;
	i8 v6067 = (i8)(intptr_t)(f66_FreeType);

	((void(*)(void))(intptr_t)v6067)();

	goto c01_04ba;

c01_04bb:;

	if (v6044 != +28) goto c01_04bf;

	i8 v6068 = (i8)(intptr_t)(ws+3448);
	i8 v6069 = *(i8*)(intptr_t)v6068;
	i8 v6070 = *(i8*)(intptr_t)v6069;
	*(i8*)(intptr_t)(ws+3680) = v6070;
	i8 v6071 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v6071)();

c01_04bf:;

c01_04ba:;


	i8 v6072 = (i8)(intptr_t)(ws+3448);
	i8 v6073 = *(i8*)(intptr_t)v6072;
	i8 v6074 = v6073+(+8);
	i8 v6075 = *(i8*)(intptr_t)v6074;
	*(i8*)(intptr_t)(ws+3680) = v6075;
	i8 v6076 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v6076)();

	i8 v6077 = (i8)(intptr_t)(ws+3448);
	i8 v6078 = *(i8*)(intptr_t)v6077;
	*(i8*)(intptr_t)(ws+3464) = v6078;
	i8 v6079 = (i8)(intptr_t)(f64_FreeSymbol);

	((void(*)(void))(intptr_t)v6079)();

	goto c01_04b4;

c01_04b9:;

	i8 v6080 = (i8)(intptr_t)(ws+3424);
	i8 v6081 = *(i8*)(intptr_t)v6080;
	i8 v6082 = (i8)+0;
	if (v6081==v6082) goto c01_04c4; else goto c01_04c3;

c01_04c3:;

	i8 v6083 = (i8)+0;
	i8 v6084 = (i8)(intptr_t)(ws+3424);
	i8 v6085 = *(i8*)(intptr_t)v6084;
	i8 v6086 = v6085+(+24);
	*(i8*)(intptr_t)v6086 = v6083;

	goto c01_04c0;

c01_04c4:;

	i8 v6087 = (i8)+0;
	i8 v6088 = (i8)(intptr_t)(ws+3408);
	i8 v6089 = *(i8*)(intptr_t)v6088;
	i8 v6090 = v6089+(+16);
	*(i8*)(intptr_t)v6090 = v6087;

c01_04c0:;

	i8 v6091 = (i8)(intptr_t)(ws+3424);
	i8 v6092 = *(i8*)(intptr_t)v6091;
	i8 v6093 = (i8)(intptr_t)(ws+3408);
	i8 v6094 = *(i8*)(intptr_t)v6093;
	i8 v6095 = v6094+(+24);
	*(i8*)(intptr_t)v6095 = v6092;

}
	void f71_InternalStrDup(void);
	void f218_AddSymbol(void);
	void f68_InternalAlloc(void);

// CopyParameterList workspace at ws+3408 length ws+56
void f264_CopyParameterList(void) {

	i8 v6096 = (i8)+0;
	i8 v6097 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6097 = v6096;

c01_04c5:;

	i8 v6098 = (i8)(intptr_t)(ws+3408);
	i8 v6099 = *(i8*)(intptr_t)v6098;
	i8 v6100 = (i8)+0;
	if (v6099==v6100) goto c01_04ca; else goto c01_04c9;

c01_04c9:;

	i8 v6101 = (i8)(intptr_t)(ws+3408);
	i8 v6102 = *(i8*)(intptr_t)v6101;
	i8 v6103 = v6102+(+8);
	i8 v6104 = *(i8*)(intptr_t)v6103;
	*(i8*)(intptr_t)(ws+3464) = v6104;
	i8 v6105 = (i8)(intptr_t)(f71_InternalStrDup);

	((void(*)(void))(intptr_t)v6105)();

	i8 v6106 = *(i8*)(intptr_t)(ws+3472);
	i8 v6107 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6107 = v6106;

	i8 v6108 = (i8)(intptr_t)(ws+3416);
	i8 v6109 = *(i8*)(intptr_t)v6108;
	i8 v6110 = v6109+(+16);
	*(i8*)(intptr_t)(ws+3488) = v6110;
	i8 v6111 = (i8)(intptr_t)(ws+3432);
	i8 v6112 = *(i8*)(intptr_t)v6111;
	*(i8*)(intptr_t)(ws+3496) = v6112;
	i8 v6113 = (i8)(intptr_t)(f218_AddSymbol);

	((void(*)(void))(intptr_t)v6113)();

	i8 v6114 = *(i8*)(intptr_t)(ws+3504);
	i8 v6115 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6115 = v6114;

	i8 v6116 = (i8)(intptr_t)(ws+3440);
	i8 v6117 = *(i8*)(intptr_t)v6116;
	i8 v6118 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6118 = v6117;

	i1 v6119 = (i1)+28;
	i8 v6120 = (i8)(intptr_t)(ws+3448);
	i8 v6121 = *(i8*)(intptr_t)v6120;
	i8 v6122 = v6121+(+32);
	*(i1*)(intptr_t)v6122 = v6119;

	i8 v6123 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v6123;
	i8 v6124 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v6124)();

	i8 v6125 = *(i8*)(intptr_t)(ws+3648);
	i8 v6126 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6126 = v6125;

	i8 v6127 = (i8)(intptr_t)(ws+3456);
	i8 v6128 = *(i8*)(intptr_t)v6127;
	i8 v6129 = (i8)(intptr_t)(ws+3448);
	i8 v6130 = *(i8*)(intptr_t)v6129;
	*(i8*)(intptr_t)v6130 = v6128;

	i8 v6131 = (i8)(intptr_t)(ws+3408);
	i8 v6132 = *(i8*)(intptr_t)v6131;
	i8 v6133 = *(i8*)(intptr_t)v6132;
	i8 v6134 = *(i8*)(intptr_t)v6133;
	i8 v6135 = (i8)(intptr_t)(ws+3448);
	i8 v6136 = *(i8*)(intptr_t)v6135;
	i8 v6137 = *(i8*)(intptr_t)v6136;
	*(i8*)(intptr_t)v6137 = v6134;

	i8 v6138 = (i8)(intptr_t)(ws+3408);
	i8 v6139 = *(i8*)(intptr_t)v6138;
	i8 v6140 = *(i8*)(intptr_t)v6139;
	i8 v6141 = v6140+(+8);
	i8 v6142 = *(i8*)(intptr_t)v6141;
	i8 v6143 = (i8)(intptr_t)(ws+3448);
	i8 v6144 = *(i8*)(intptr_t)v6143;
	i8 v6145 = *(i8*)(intptr_t)v6144;
	i8 v6146 = v6145+(+8);
	*(i8*)(intptr_t)v6146 = v6142;

	i8 v6147 = (i8)(intptr_t)(ws+3408);
	i8 v6148 = *(i8*)(intptr_t)v6147;
	i8 v6149 = *(i8*)(intptr_t)v6148;
	i8 v6150 = v6149+(+26);
	i1 v6151 = *(i1*)(intptr_t)v6150;
	i8 v6152 = (i8)(intptr_t)(ws+3448);
	i8 v6153 = *(i8*)(intptr_t)v6152;
	i8 v6154 = *(i8*)(intptr_t)v6153;
	i8 v6155 = v6154+(+26);
	*(i1*)(intptr_t)v6155 = v6151;

	i8 v6156 = (i8)(intptr_t)(ws+3408);
	i8 v6157 = *(i8*)(intptr_t)v6156;
	i8 v6158 = *(i8*)(intptr_t)v6157;
	i8 v6159 = v6158+(+24);
	i2 v6160 = *(i2*)(intptr_t)v6159;
	i8 v6161 = (i8)(intptr_t)(ws+3448);
	i8 v6162 = *(i8*)(intptr_t)v6161;
	i8 v6163 = *(i8*)(intptr_t)v6162;
	i8 v6164 = v6163+(+24);
	*(i2*)(intptr_t)v6164 = v6160;

	i8 v6165 = (i8)(intptr_t)(ws+3424);
	i8 v6166 = *(i8*)(intptr_t)v6165;
	i8 v6167 = (i8)+0;
	if (v6166==v6167) goto c01_04cf; else goto c01_04ce;

c01_04ce:;

	i8 v6168 = (i8)(intptr_t)(ws+3448);
	i8 v6169 = *(i8*)(intptr_t)v6168;
	i8 v6170 = (i8)(intptr_t)(ws+3424);
	i8 v6171 = *(i8*)(intptr_t)v6170;
	i8 v6172 = *(i8*)(intptr_t)v6171;
	i8 v6173 = v6172+(+16);
	*(i8*)(intptr_t)v6173 = v6169;

c01_04cf:;

c01_04cb:;

	i8 v6174 = (i8)(intptr_t)(ws+3448);
	i8 v6175 = *(i8*)(intptr_t)v6174;
	i8 v6176 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6176 = v6175;

	i8 v6177 = (i8)(intptr_t)(ws+3408);
	i8 v6178 = *(i8*)(intptr_t)v6177;
	i8 v6179 = *(i8*)(intptr_t)v6178;
	i8 v6180 = v6179+(+16);
	i8 v6181 = *(i8*)(intptr_t)v6180;
	i8 v6182 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6182 = v6181;

	goto c01_04c5;

c01_04ca:;

}
	void f65_AllocNewType(void);
	void f63_AllocNewSymbol(void);
const i1 c01_s0106[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f68_InternalAlloc(void);
	void f217_AddToNamespace(void);

// CreateMainSubroutine workspace at ws+3264 length ws+40
void f265_CreateMainSubroutine(void) {

	i8 v6183 = (i8)(intptr_t)(f65_AllocNewType);

	((void(*)(void))(intptr_t)v6183)();

	i8 v6184 = *(i8*)(intptr_t)(ws+3528);
	i8 v6185 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6185 = v6184;

	i8 v6186 = (i8)(intptr_t)(ws+3264);
	i8 v6187 = *(i8*)(intptr_t)v6186;
	i8 v6188 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v6188 = v6187;

	i1 v6189 = (i1)+6;
	i8 v6190 = (i8)(intptr_t)(ws+3272);
	i8 v6191 = *(i8*)(intptr_t)v6190;
	i8 v6192 = v6191+(+52);
	*(i1*)(intptr_t)v6192 = v6189;

	i8 v6193 = (i8)(intptr_t)(f63_AllocNewSymbol);

	((void(*)(void))(intptr_t)v6193)();

	i8 v6194 = *(i8*)(intptr_t)(ws+3568);
	i8 v6195 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v6195 = v6194;

	i8 v6196 = (i8)(intptr_t)(ws+3280);
	i8 v6197 = *(i8*)(intptr_t)v6196;
	i8 v6198 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v6198 = v6197;

	i1 v6199 = (i1)+30;
	i8 v6200 = (i8)(intptr_t)(ws+3288);
	i8 v6201 = *(i8*)(intptr_t)v6200;
	i8 v6202 = v6201+(+32);
	*(i1*)(intptr_t)v6202 = v6199;

	i8 v6203 = (i8)(intptr_t)c01_s0106;
	i8 v6204 = (i8)(intptr_t)(ws+3288);
	i8 v6205 = *(i8*)(intptr_t)v6204;
	i8 v6206 = v6205+(+8);
	*(i8*)(intptr_t)v6206 = v6203;

	i8 v6207 = (i8)(intptr_t)(ws+3272);
	i8 v6208 = *(i8*)(intptr_t)v6207;
	i8 v6209 = (i8)(intptr_t)(ws+3288);
	i8 v6210 = *(i8*)(intptr_t)v6209;
	*(i8*)(intptr_t)v6210 = v6208;

	i8 v6211 = (i8)(intptr_t)(ws+3288);
	i8 v6212 = *(i8*)(intptr_t)v6211;
	i8 v6213 = (i8)(intptr_t)(ws+3272);
	i8 v6214 = *(i8*)(intptr_t)v6213;
	i8 v6215 = v6214+(+32);
	*(i8*)(intptr_t)v6215 = v6212;

	i8 v6216 = (i8)+83;
	*(i8*)(intptr_t)(ws+3640) = v6216;
	i8 v6217 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v6217)();

	i8 v6218 = *(i8*)(intptr_t)(ws+3648);
	i8 v6219 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v6219 = v6218;

	i8 v6220 = (i8)(intptr_t)(ws+3296);
	i8 v6221 = *(i8*)(intptr_t)v6220;
	i8 v6222 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v6222 = v6221;

	i8 v6223 = (i8)(intptr_t)(ws+3288);
	i8 v6224 = *(i8*)(intptr_t)v6223;
	i8 v6225 = (i8)(intptr_t)(ws+40);
	i8 v6226 = *(i8*)(intptr_t)v6225;
	*(i8*)(intptr_t)v6226 = v6224;

	i8 v6227 = (i8)(intptr_t)(ws+3272);
	i8 v6228 = *(i8*)(intptr_t)v6227;
	i8 v6229 = (i8)(intptr_t)(ws+40);
	i8 v6230 = *(i8*)(intptr_t)v6229;
	i8 v6231 = v6230+(+40);
	*(i8*)(intptr_t)v6231 = v6228;

	i8 v6232 = (i8)(intptr_t)(ws+40);
	i8 v6233 = *(i8*)(intptr_t)v6232;
	i8 v6234 = (i8)(intptr_t)(ws+40);
	i8 v6235 = *(i8*)(intptr_t)v6234;
	i8 v6236 = v6235+(+48);
	*(i8*)(intptr_t)v6236 = v6233;

	i8 v6237 = (i8)(intptr_t)(ws+40);
	i8 v6238 = *(i8*)(intptr_t)v6237;
	i8 v6239 = (i8)(intptr_t)(ws+3272);
	i8 v6240 = *(i8*)(intptr_t)v6239;
	*(i8*)(intptr_t)v6240 = v6238;

	i8 v6241 = (i8)(intptr_t)(ws+40);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	i8 v6243 = v6242+(+16);
	*(i8*)(intptr_t)(ws+3568) = v6243;
	i8 v6244 = (i8)(intptr_t)(ws+3288);
	i8 v6245 = *(i8*)(intptr_t)v6244;
	*(i8*)(intptr_t)(ws+3576) = v6245;
	i8 v6246 = (i8)(intptr_t)(f217_AddToNamespace);

	((void(*)(void))(intptr_t)v6246)();

}
	void f201_EmitterDeclareWorkspace(void);

// ReportWorkspaces workspace at ws+3408 length ws+12
void f266_ReportWorkspaces(void) {

	i1 v6247 = (i1)+0;
	i8 v6248 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6248 = v6247;

c01_04d0:;

	i8 v6249 = (i8)(intptr_t)(ws+3416);
	i1 v6250 = *(i1*)(intptr_t)v6249;
	i1 v6251 = (i1)+4;
	if (v6250==v6251) goto c01_04d5; else goto c01_04d4;

c01_04d4:;

	i8 v6252 = (i8)(intptr_t)(ws+3408);
	i8 v6253 = *(i8*)(intptr_t)v6252;
	i8 v6254 = v6253+(+58);
	i8 v6255 = (i8)(intptr_t)(ws+3416);
	i1 v6256 = *(i1*)(intptr_t)v6255;
	i8 v6257 = v6256;
	i1 v6258 = (i1)+1;
	i8 v6259 = ((i8)v6257)<<v6258;
	i8 v6260 = v6254+v6259;
	i2 v6261 = *(i2*)(intptr_t)v6260;
	i8 v6262 = (i8)(intptr_t)(ws+3418);
	*(i2*)(intptr_t)v6262 = v6261;

	i8 v6263 = (i8)(intptr_t)(ws+3418);
	i2 v6264 = *(i2*)(intptr_t)v6263;
	i2 v6265 = (i2)+0;
	if (v6264==v6265) goto c01_04da; else goto c01_04d9;

c01_04d9:;

	i8 v6266 = (i8)(intptr_t)(ws+3408);
	i8 v6267 = *(i8*)(intptr_t)v6266;
	*(i8*)(intptr_t)(ws+3424) = v6267;
	i8 v6268 = (i8)(intptr_t)(ws+3416);
	i1 v6269 = *(i1*)(intptr_t)v6268;
	*(i1*)(intptr_t)(ws+3432) = v6269;
	i8 v6270 = (i8)(intptr_t)(ws+3418);
	i2 v6271 = *(i2*)(intptr_t)v6270;
	*(i2*)(intptr_t)(ws+3434) = v6271;
	i8 v6272 = (i8)(intptr_t)(f201_EmitterDeclareWorkspace);

	((void(*)(void))(intptr_t)v6272)();

c01_04da:;

c01_04d6:;

	i8 v6273 = (i8)(intptr_t)(ws+3416);
	i1 v6274 = *(i1*)(intptr_t)v6273;
	i1 v6275 = v6274+(+1);
	i8 v6276 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6276 = v6275;

	goto c01_04d0;

c01_04d5:;

}
	void f73_StartError(void);
	void f11_print(void);
const i1 c01_s0107[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s0108[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f11_print(void);
	void f74_EndError(void);

// expr_i_cant_do_that workspace at ws+3504 length ws+16
void f267_expr_i_cant_do_that(void) {

	i8 v6277 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v6277)();

	i8 v6278 = (i8)(intptr_t)(ws+3504);
	i8 v6279 = *(i8*)(intptr_t)v6278;
	i8 v6280 = v6279+(+24);
	i8 v6281 = *(i8*)(intptr_t)v6280;
	i8 v6282 = v6281+(+32);
	i8 v6283 = *(i8*)(intptr_t)v6282;
	i8 v6284 = v6283+(+8);
	i8 v6285 = *(i8*)(intptr_t)v6284;
	*(i8*)(intptr_t)(ws+3696) = v6285;
	i8 v6286 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6286)();

	i8 v6287 = (i8)(intptr_t)c01_s0107;
	*(i8*)(intptr_t)(ws+3696) = v6287;
	i8 v6288 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6288)();

	i8 v6289 = (i8)(intptr_t)(ws+3512);
	i8 v6290 = *(i8*)(intptr_t)v6289;
	i8 v6291 = v6290+(+24);
	i8 v6292 = *(i8*)(intptr_t)v6291;
	i8 v6293 = v6292+(+32);
	i8 v6294 = *(i8*)(intptr_t)v6293;
	i8 v6295 = v6294+(+8);
	i8 v6296 = *(i8*)(intptr_t)v6295;
	*(i8*)(intptr_t)(ws+3696) = v6296;
	i8 v6297 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6297)();

	i8 v6298 = (i8)(intptr_t)c01_s0108;
	*(i8*)(intptr_t)(ws+3696) = v6298;
	i8 v6299 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6299)();

	i8 v6300 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v6300)();

}
	void f73_StartError(void);
const i1 c01_s0109[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s010a[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s010b[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f11_print(void);
	void f74_EndError(void);
	void f229_IsScalar(void);
	void f73_StartError(void);
	void f11_print(void);
const i1 c01_s010c[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f11_print(void);
	void f74_EndError(void);

// CheckExpressionType workspace at ws+3496 length ws+17
void f268_CheckExpressionType(void) {

	i8 v6301 = (i8)(intptr_t)(ws+3496);
	i8 v6302 = *(i8*)(intptr_t)v6301;
	i8 v6303 = v6302+(+24);
	i8 v6304 = *(i8*)(intptr_t)v6303;
	i8 v6305 = (i8)+0;
	if (v6304==v6305) goto c01_04de; else goto c01_04df;

c01_04de:;

	i8 v6306 = (i8)(intptr_t)(ws+3504);
	i8 v6307 = *(i8*)(intptr_t)v6306;
	i8 v6308 = (i8)(intptr_t)(ws+3496);
	i8 v6309 = *(i8*)(intptr_t)v6308;
	i8 v6310 = v6309+(+24);
	*(i8*)(intptr_t)v6310 = v6307;

c01_04df:;

c01_04db:;

	i8 v6311 = (i8)(intptr_t)(ws+3496);
	i8 v6312 = *(i8*)(intptr_t)v6311;
	i8 v6313 = v6312+(+24);
	i8 v6314 = *(i8*)(intptr_t)v6313;
	i8 v6315 = (i8)(intptr_t)(ws+3504);
	i8 v6316 = *(i8*)(intptr_t)v6315;
	if (v6314==v6316) goto c01_04e4; else goto c01_04e3;

c01_04e3:;

	i8 v6317 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v6317)();

	i8 v6318 = (i8)(intptr_t)c01_s0109;
	*(i8*)(intptr_t)(ws+3696) = v6318;
	i8 v6319 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6319)();

	i8 v6320 = (i8)(intptr_t)(ws+3496);
	i8 v6321 = *(i8*)(intptr_t)v6320;
	i8 v6322 = v6321+(+24);
	i8 v6323 = *(i8*)(intptr_t)v6322;
	i8 v6324 = v6323+(+32);
	i8 v6325 = *(i8*)(intptr_t)v6324;
	i8 v6326 = v6325+(+8);
	i8 v6327 = *(i8*)(intptr_t)v6326;
	*(i8*)(intptr_t)(ws+3696) = v6327;
	i8 v6328 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6328)();

	i8 v6329 = (i8)(intptr_t)c01_s010a;
	*(i8*)(intptr_t)(ws+3696) = v6329;
	i8 v6330 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6330)();

	i8 v6331 = (i8)(intptr_t)(ws+3504);
	i8 v6332 = *(i8*)(intptr_t)v6331;
	i8 v6333 = v6332+(+32);
	i8 v6334 = *(i8*)(intptr_t)v6333;
	i8 v6335 = v6334+(+8);
	i8 v6336 = *(i8*)(intptr_t)v6335;
	*(i8*)(intptr_t)(ws+3696) = v6336;
	i8 v6337 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6337)();

	i8 v6338 = (i8)(intptr_t)c01_s010b;
	*(i8*)(intptr_t)(ws+3696) = v6338;
	i8 v6339 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6339)();

	i8 v6340 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v6340)();

c01_04e4:;

c01_04e0:;

	i8 v6341 = (i8)(intptr_t)(ws+3504);
	i8 v6342 = *(i8*)(intptr_t)v6341;
	*(i8*)(intptr_t)(ws+3544) = v6342;
	i8 v6343 = (i8)(intptr_t)(f229_IsScalar);

	((void(*)(void))(intptr_t)v6343)();

	i1 v6344 = *(i1*)(intptr_t)(ws+3552);
	i8 v6345 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v6345 = v6344;

	i8 v6346 = (i8)(intptr_t)(ws+3512);
	i1 v6347 = *(i1*)(intptr_t)v6346;
	i1 v6348 = (i1)+0;
	if (v6347==v6348) goto c01_04e8; else goto c01_04e9;

c01_04e8:;

	i8 v6349 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v6349)();

	i8 v6350 = (i8)(intptr_t)(ws+3504);
	i8 v6351 = *(i8*)(intptr_t)v6350;
	i8 v6352 = v6351+(+32);
	i8 v6353 = *(i8*)(intptr_t)v6352;
	i8 v6354 = v6353+(+8);
	i8 v6355 = *(i8*)(intptr_t)v6354;
	*(i8*)(intptr_t)(ws+3696) = v6355;
	i8 v6356 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6356)();

	i8 v6357 = (i8)(intptr_t)c01_s010c;
	*(i8*)(intptr_t)(ws+3696) = v6357;
	i8 v6358 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v6358)();

	i8 v6359 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v6359)();

c01_04e9:;

c01_04e5:;

}
	void f227_IsNum(void);
	void f67_IsPtr(void);
const i1 c01_s010d[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f75_SimpleError(void);
	void f227_IsNum(void);
	void f67_IsPtr(void);
const i1 c01_s010e[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f75_SimpleError(void);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3456 length ws+20
void f269_ResolveUntypedConstantsForAddOrSub(void) {

	i8 v6360 = (i8)(intptr_t)(ws+3456);
	i8 v6361 = *(i8*)(intptr_t)v6360;
	i8 v6362 = v6361+(+24);
	i8 v6363 = *(i8*)(intptr_t)v6362;
	i8 v6364 = (i8)+0;
	if (v6363==v6364) goto c01_04f0; else goto c01_04f1;

c01_04f1:;

	i8 v6365 = (i8)(intptr_t)(ws+3464);
	i8 v6366 = *(i8*)(intptr_t)v6365;
	i8 v6367 = v6366+(+24);
	i8 v6368 = *(i8*)(intptr_t)v6367;
	i8 v6369 = (i8)+0;
	if (v6368==v6369) goto c01_04ef; else goto c01_04f0;

c01_04ef:;

	i8 v6370 = (i8)(intptr_t)(ws+3456);
	i8 v6371 = *(i8*)(intptr_t)v6370;
	i8 v6372 = v6371+(+24);
	i8 v6373 = *(i8*)(intptr_t)v6372;
	*(i8*)(intptr_t)(ws+3560) = v6373;
	i8 v6374 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v6374)();

	i1 v6375 = *(i1*)(intptr_t)(ws+3568);
	i8 v6376 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v6376 = v6375;

	i8 v6377 = (i8)(intptr_t)(ws+3472);
	i1 v6378 = *(i1*)(intptr_t)v6377;
	i1 v6379 = (i1)+0;
	if (v6378==v6379) goto c01_04f6; else goto c01_04f5;

c01_04f5:;

	i8 v6380 = (i8)(intptr_t)(ws+3456);
	i8 v6381 = *(i8*)(intptr_t)v6380;
	i8 v6382 = v6381+(+24);
	i8 v6383 = *(i8*)(intptr_t)v6382;
	i8 v6384 = (i8)(intptr_t)(ws+3464);
	i8 v6385 = *(i8*)(intptr_t)v6384;
	i8 v6386 = v6385+(+24);
	*(i8*)(intptr_t)v6386 = v6383;

	goto c01_04f2;

c01_04f6:;

	i8 v6387 = (i8)(intptr_t)(ws+3456);
	i8 v6388 = *(i8*)(intptr_t)v6387;
	i8 v6389 = v6388+(+24);
	i8 v6390 = *(i8*)(intptr_t)v6389;
	*(i8*)(intptr_t)(ws+3560) = v6390;
	i8 v6391 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6391)();

	i1 v6392 = *(i1*)(intptr_t)(ws+3568);
	i8 v6393 = (i8)(intptr_t)(ws+3473);
	*(i1*)(intptr_t)v6393 = v6392;

	i8 v6394 = (i8)(intptr_t)(ws+3473);
	i1 v6395 = *(i1*)(intptr_t)v6394;
	i1 v6396 = (i1)+0;
	if (v6395==v6396) goto c01_04fa; else goto c01_04f9;

c01_04f9:;

	i8 v6397 = (i8)(intptr_t)(ws+1528);
	i8 v6398 = *(i8*)(intptr_t)v6397;
	i8 v6399 = (i8)(intptr_t)(ws+3464);
	i8 v6400 = *(i8*)(intptr_t)v6399;
	i8 v6401 = v6400+(+24);
	*(i8*)(intptr_t)v6401 = v6398;

	goto c01_04f2;

c01_04fa:;

	i8 v6402 = (i8)(intptr_t)c01_s010d;
	*(i8*)(intptr_t)(ws+3648) = v6402;
	i8 v6403 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v6403)();

c01_04f2:;

c01_04f0:;

c01_04ea:;

	i8 v6404 = (i8)(intptr_t)(ws+3456);
	i8 v6405 = *(i8*)(intptr_t)v6404;
	i8 v6406 = v6405+(+24);
	i8 v6407 = *(i8*)(intptr_t)v6406;
	i8 v6408 = (i8)+0;
	if (v6407==v6408) goto c01_0502; else goto c01_0501;

c01_0502:;

	i8 v6409 = (i8)(intptr_t)(ws+3464);
	i8 v6410 = *(i8*)(intptr_t)v6409;
	i8 v6411 = v6410+(+24);
	i8 v6412 = *(i8*)(intptr_t)v6411;
	i8 v6413 = (i8)+0;
	if (v6412==v6413) goto c01_0501; else goto c01_0500;

c01_0500:;

	i8 v6414 = (i8)(intptr_t)(ws+3464);
	i8 v6415 = *(i8*)(intptr_t)v6414;
	i8 v6416 = v6415+(+24);
	i8 v6417 = *(i8*)(intptr_t)v6416;
	*(i8*)(intptr_t)(ws+3560) = v6417;
	i8 v6418 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v6418)();

	i1 v6419 = *(i1*)(intptr_t)(ws+3568);
	i8 v6420 = (i8)(intptr_t)(ws+3474);
	*(i1*)(intptr_t)v6420 = v6419;

	i8 v6421 = (i8)(intptr_t)(ws+3474);
	i1 v6422 = *(i1*)(intptr_t)v6421;
	i1 v6423 = (i1)+0;
	if (v6422==v6423) goto c01_0507; else goto c01_0506;

c01_0506:;

	i8 v6424 = (i8)(intptr_t)(ws+3464);
	i8 v6425 = *(i8*)(intptr_t)v6424;
	i8 v6426 = v6425+(+24);
	i8 v6427 = *(i8*)(intptr_t)v6426;
	i8 v6428 = (i8)(intptr_t)(ws+3456);
	i8 v6429 = *(i8*)(intptr_t)v6428;
	i8 v6430 = v6429+(+24);
	*(i8*)(intptr_t)v6430 = v6427;

	goto c01_0503;

c01_0507:;

	i8 v6431 = (i8)(intptr_t)(ws+3464);
	i8 v6432 = *(i8*)(intptr_t)v6431;
	i8 v6433 = v6432+(+24);
	i8 v6434 = *(i8*)(intptr_t)v6433;
	*(i8*)(intptr_t)(ws+3560) = v6434;
	i8 v6435 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6435)();

	i1 v6436 = *(i1*)(intptr_t)(ws+3568);
	i8 v6437 = (i8)(intptr_t)(ws+3475);
	*(i1*)(intptr_t)v6437 = v6436;

	i8 v6438 = (i8)(intptr_t)(ws+3475);
	i1 v6439 = *(i1*)(intptr_t)v6438;
	i1 v6440 = (i1)+0;
	if (v6439==v6440) goto c01_050b; else goto c01_050a;

c01_050a:;

	i8 v6441 = (i8)(intptr_t)c01_s010e;
	*(i8*)(intptr_t)(ws+3648) = v6441;
	i8 v6442 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v6442)();

c01_050b:;

c01_0503:;

c01_0501:;

c01_04fb:;

}
	void f227_IsNum(void);
const i1 c01_s010f[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f75_SimpleError(void);

// CheckNumber workspace at ws+3520 length ws+9
void f270_CheckNumber(void) {

	i8 v6443 = (i8)(intptr_t)(ws+3520);
	i8 v6444 = *(i8*)(intptr_t)v6443;
	i8 v6445 = v6444+(+24);
	i8 v6446 = *(i8*)(intptr_t)v6445;
	*(i8*)(intptr_t)(ws+3560) = v6446;
	i8 v6447 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v6447)();

	i1 v6448 = *(i1*)(intptr_t)(ws+3568);
	i8 v6449 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v6449 = v6448;

	i8 v6450 = (i8)(intptr_t)(ws+3528);
	i1 v6451 = *(i1*)(intptr_t)v6450;
	i1 v6452 = (i1)+0;
	if (v6451==v6452) goto c01_050f; else goto c01_0510;

c01_050f:;

	i8 v6453 = (i8)(intptr_t)c01_s010f;
	*(i8*)(intptr_t)(ws+3648) = v6453;
	i8 v6454 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v6454)();

c01_0510:;

c01_050c:;

}
	void f227_IsNum(void);
	void f67_IsPtr(void);
const i1 c01_s0110[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f75_SimpleError(void);

// CheckNumberOrPointer workspace at ws+3520 length ws+10
void f271_CheckNumberOrPointer(void) {

	i8 v6455 = (i8)(intptr_t)(ws+3520);
	i8 v6456 = *(i8*)(intptr_t)v6455;
	i8 v6457 = v6456+(+24);
	i8 v6458 = *(i8*)(intptr_t)v6457;
	*(i8*)(intptr_t)(ws+3560) = v6458;
	i8 v6459 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v6459)();

	i1 v6460 = *(i1*)(intptr_t)(ws+3568);
	i8 v6461 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v6461 = v6460;

	i8 v6462 = (i8)(intptr_t)(ws+3520);
	i8 v6463 = *(i8*)(intptr_t)v6462;
	i8 v6464 = v6463+(+24);
	i8 v6465 = *(i8*)(intptr_t)v6464;
	*(i8*)(intptr_t)(ws+3560) = v6465;
	i8 v6466 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6466)();

	i1 v6467 = *(i1*)(intptr_t)(ws+3568);
	i8 v6468 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v6468 = v6467;

	i8 v6469 = (i8)(intptr_t)(ws+3528);
	i1 v6470 = *(i1*)(intptr_t)v6469;
	i1 v6471 = (i1)+0;
	if (v6470==v6471) goto c01_0518; else goto c01_0517;

c01_0518:;

	i8 v6472 = (i8)(intptr_t)(ws+3529);
	i1 v6473 = *(i1*)(intptr_t)v6472;
	i1 v6474 = (i1)+0;
	if (v6473==v6474) goto c01_0516; else goto c01_0517;

c01_0516:;

	i8 v6475 = (i8)(intptr_t)c01_s0110;
	*(i8*)(intptr_t)(ws+3648) = v6475;
	i8 v6476 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v6476)();

c01_0517:;

c01_0511:;

}
	void f271_CheckNumberOrPointer(void);
	void f270_CheckNumber(void);

// CheckNilCompatible workspace at ws+3504 length ws+16
void f272_CheckNilCompatible(void) {

	i8 v6477 = (i8)(intptr_t)(ws+3512);
	i8 v6478 = *(i8*)(intptr_t)v6477;
	i4 v6479 = *(i4*)(intptr_t)v6478;
	i4 v6480 = (i4)+0;
	if (v6479==v6480) goto c01_051c; else goto c01_051d;

c01_051c:;

	i8 v6481 = (i8)(intptr_t)(ws+3504);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	*(i8*)(intptr_t)(ws+3520) = v6482;
	i8 v6483 = (i8)(intptr_t)(f271_CheckNumberOrPointer);

	((void(*)(void))(intptr_t)v6483)();

	goto c01_0519;

c01_051d:;

	i8 v6484 = (i8)(intptr_t)(ws+3504);
	i8 v6485 = *(i8*)(intptr_t)v6484;
	*(i8*)(intptr_t)(ws+3520) = v6485;
	i8 v6486 = (i8)(intptr_t)(f270_CheckNumber);

	((void(*)(void))(intptr_t)v6486)();

c01_0519:;

}
	void f272_CheckNilCompatible(void);
	void f272_CheckNilCompatible(void);
	void f267_expr_i_cant_do_that(void);

// ResolveUntypedConstantsSimply workspace at ws+3472 length ws+32
void f273_ResolveUntypedConstantsSimply(void) {

	i8 v6487 = (i8)(intptr_t)(ws+3472);
	i8 v6488 = *(i8*)(intptr_t)v6487;
	i8 v6489 = v6488+(+24);
	i8 v6490 = *(i8*)(intptr_t)v6489;
	i8 v6491 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v6491 = v6490;

	i8 v6492 = (i8)(intptr_t)(ws+3480);
	i8 v6493 = *(i8*)(intptr_t)v6492;
	i8 v6494 = v6493+(+24);
	i8 v6495 = *(i8*)(intptr_t)v6494;
	i8 v6496 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v6496 = v6495;

	i8 v6497 = (i8)(intptr_t)(ws+3488);
	i8 v6498 = *(i8*)(intptr_t)v6497;
	i8 v6499 = (i8)+0;
	if (v6498==v6499) goto c01_0524; else goto c01_0525;

c01_0525:;

	i8 v6500 = (i8)(intptr_t)(ws+3496);
	i8 v6501 = *(i8*)(intptr_t)v6500;
	i8 v6502 = (i8)+0;
	if (v6501==v6502) goto c01_0523; else goto c01_0524;

c01_0523:;

	i8 v6503 = (i8)(intptr_t)(ws+3472);
	i8 v6504 = *(i8*)(intptr_t)v6503;
	*(i8*)(intptr_t)(ws+3504) = v6504;
	i8 v6505 = (i8)(intptr_t)(ws+3480);
	i8 v6506 = *(i8*)(intptr_t)v6505;
	*(i8*)(intptr_t)(ws+3512) = v6506;
	i8 v6507 = (i8)(intptr_t)(f272_CheckNilCompatible);

	((void(*)(void))(intptr_t)v6507)();

	i8 v6508 = (i8)(intptr_t)(ws+3488);
	i8 v6509 = *(i8*)(intptr_t)v6508;
	i8 v6510 = (i8)(intptr_t)(ws+3480);
	i8 v6511 = *(i8*)(intptr_t)v6510;
	i8 v6512 = v6511+(+24);
	*(i8*)(intptr_t)v6512 = v6509;

	goto c01_051e;

c01_0524:;

	i8 v6513 = (i8)(intptr_t)(ws+3488);
	i8 v6514 = *(i8*)(intptr_t)v6513;
	i8 v6515 = (i8)+0;
	if (v6514==v6515) goto c01_052c; else goto c01_052b;

c01_052c:;

	i8 v6516 = (i8)(intptr_t)(ws+3496);
	i8 v6517 = *(i8*)(intptr_t)v6516;
	i8 v6518 = (i8)+0;
	if (v6517==v6518) goto c01_052b; else goto c01_052a;

c01_052a:;

	i8 v6519 = (i8)(intptr_t)(ws+3480);
	i8 v6520 = *(i8*)(intptr_t)v6519;
	*(i8*)(intptr_t)(ws+3504) = v6520;
	i8 v6521 = (i8)(intptr_t)(ws+3472);
	i8 v6522 = *(i8*)(intptr_t)v6521;
	*(i8*)(intptr_t)(ws+3512) = v6522;
	i8 v6523 = (i8)(intptr_t)(f272_CheckNilCompatible);

	((void(*)(void))(intptr_t)v6523)();

	i8 v6524 = (i8)(intptr_t)(ws+3496);
	i8 v6525 = *(i8*)(intptr_t)v6524;
	i8 v6526 = (i8)(intptr_t)(ws+3472);
	i8 v6527 = *(i8*)(intptr_t)v6526;
	i8 v6528 = v6527+(+24);
	*(i8*)(intptr_t)v6528 = v6525;

	goto c01_051e;

c01_052b:;

	i8 v6529 = (i8)(intptr_t)(ws+3488);
	i8 v6530 = *(i8*)(intptr_t)v6529;
	i8 v6531 = (i8)(intptr_t)(ws+3496);
	i8 v6532 = *(i8*)(intptr_t)v6531;
	if (v6530==v6532) goto c01_0530; else goto c01_052f;

c01_052f:;

	i8 v6533 = (i8)(intptr_t)(ws+3472);
	i8 v6534 = *(i8*)(intptr_t)v6533;
	*(i8*)(intptr_t)(ws+3504) = v6534;
	i8 v6535 = (i8)(intptr_t)(ws+3480);
	i8 v6536 = *(i8*)(intptr_t)v6535;
	*(i8*)(intptr_t)(ws+3512) = v6536;
	i8 v6537 = (i8)(intptr_t)(f267_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6537)();

c01_0530:;

c01_051e:;

}
	void f273_ResolveUntypedConstantsSimply(void);
	void f270_CheckNumber(void);
	void f270_CheckNumber(void);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3456 length ws+16
void f274_ResolveUntypedConstantsNeedingNumbers(void) {

	i8 v6538 = (i8)(intptr_t)(ws+3456);
	i8 v6539 = *(i8*)(intptr_t)v6538;
	*(i8*)(intptr_t)(ws+3472) = v6539;
	i8 v6540 = (i8)(intptr_t)(ws+3464);
	i8 v6541 = *(i8*)(intptr_t)v6540;
	*(i8*)(intptr_t)(ws+3480) = v6541;
	i8 v6542 = (i8)(intptr_t)(f273_ResolveUntypedConstantsSimply);

	((void(*)(void))(intptr_t)v6542)();

	i8 v6543 = (i8)(intptr_t)(ws+3456);
	i8 v6544 = *(i8*)(intptr_t)v6543;
	*(i8*)(intptr_t)(ws+3520) = v6544;
	i8 v6545 = (i8)(intptr_t)(f270_CheckNumber);

	((void(*)(void))(intptr_t)v6545)();

	i8 v6546 = (i8)(intptr_t)(ws+3464);
	i8 v6547 = *(i8*)(intptr_t)v6546;
	*(i8*)(intptr_t)(ws+3520) = v6547;
	i8 v6548 = (i8)(intptr_t)(f270_CheckNumber);

	((void(*)(void))(intptr_t)v6548)();

}
	void f273_ResolveUntypedConstantsSimply(void);
	void f267_expr_i_cant_do_that(void);

// CondSimple workspace at ws+3456 length ws+16
void f275_CondSimple(void) {

	i8 v6549 = (i8)(intptr_t)(ws+3456);
	i8 v6550 = *(i8*)(intptr_t)v6549;
	*(i8*)(intptr_t)(ws+3472) = v6550;
	i8 v6551 = (i8)(intptr_t)(ws+3464);
	i8 v6552 = *(i8*)(intptr_t)v6551;
	*(i8*)(intptr_t)(ws+3480) = v6552;
	i8 v6553 = (i8)(intptr_t)(f273_ResolveUntypedConstantsSimply);

	((void(*)(void))(intptr_t)v6553)();

	i8 v6554 = (i8)(intptr_t)(ws+3456);
	i8 v6555 = *(i8*)(intptr_t)v6554;
	i8 v6556 = v6555+(+24);
	i8 v6557 = *(i8*)(intptr_t)v6556;
	i8 v6558 = (i8)(intptr_t)(ws+3464);
	i8 v6559 = *(i8*)(intptr_t)v6558;
	i8 v6560 = v6559+(+24);
	i8 v6561 = *(i8*)(intptr_t)v6560;
	if (v6557==v6561) goto c01_0535; else goto c01_0534;

c01_0534:;

	i8 v6562 = (i8)(intptr_t)(ws+3456);
	i8 v6563 = *(i8*)(intptr_t)v6562;
	*(i8*)(intptr_t)(ws+3504) = v6563;
	i8 v6564 = (i8)(intptr_t)(ws+3464);
	i8 v6565 = *(i8*)(intptr_t)v6564;
	*(i8*)(intptr_t)(ws+3512) = v6565;
	i8 v6566 = (i8)(intptr_t)(f267_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6566)();

c01_0535:;

c01_0531:;

}
	void f165_NodeWidth(void);
	void f169_MidC1Op(void);

// Expr1Simple workspace at ws+3392 length ws+40
void f276_Expr1Simple(void) {

	i8 v6567 = (i8)(intptr_t)(ws+3400);
	i8 v6568 = *(i8*)(intptr_t)v6567;
	*(i8*)(intptr_t)(ws+3456) = v6568;
	i8 v6569 = (i8)(intptr_t)(f165_NodeWidth);

	((void(*)(void))(intptr_t)v6569)();

	i1 v6570 = *(i1*)(intptr_t)(ws+3464);
	i8 v6571 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6571 = v6570;

	i8 v6572 = (i8)(intptr_t)(ws+3392);
	i1 v6573 = *(i1*)(intptr_t)v6572;
	*(i1*)(intptr_t)(ws+3432) = v6573;
	i8 v6574 = (i8)(intptr_t)(ws+3416);
	i1 v6575 = *(i1*)(intptr_t)v6574;
	*(i1*)(intptr_t)(ws+3433) = v6575;
	i8 v6576 = (i8)(intptr_t)(ws+3400);
	i8 v6577 = *(i8*)(intptr_t)v6576;
	*(i8*)(intptr_t)(ws+3440) = v6577;
	i8 v6578 = (i8)(intptr_t)(f169_MidC1Op);

	((void(*)(void))(intptr_t)v6578)();

	i8 v6579 = *(i8*)(intptr_t)(ws+3448);
	i8 v6580 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6580 = v6579;

	i8 v6581 = (i8)(intptr_t)(ws+3424);
	i8 v6582 = *(i8*)(intptr_t)v6581;
	i8 v6583 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6583 = v6582;

	i8 v6584 = (i8)(intptr_t)(ws+3400);
	i8 v6585 = *(i8*)(intptr_t)v6584;
	i8 v6586 = v6585+(+24);
	i8 v6587 = *(i8*)(intptr_t)v6586;
	i8 v6588 = (i8)(intptr_t)(ws+3408);
	i8 v6589 = *(i8*)(intptr_t)v6588;
	i8 v6590 = v6589+(+24);
	*(i8*)(intptr_t)v6590 = v6587;

}
	void f269_ResolveUntypedConstantsForAddOrSub(void);
	void f267_expr_i_cant_do_that(void);

// cant_add_that workspace at ws+3448 length ws+0
void f278_cant_add_that(void) {

	i8 v6596 = (i8)(intptr_t)(ws+3392);
	i8 v6597 = *(i8*)(intptr_t)v6596;
	*(i8*)(intptr_t)(ws+3504) = v6597;
	i8 v6598 = (i8)(intptr_t)(ws+3400);
	i8 v6599 = *(i8*)(intptr_t)v6598;
	*(i8*)(intptr_t)(ws+3512) = v6599;
	i8 v6600 = (i8)(intptr_t)(f267_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6600)();

}
	void f67_IsPtr(void);
	void f67_IsPtr(void);
	void f278_cant_add_that(void);
	void f67_IsPtr(void);
	void f278_cant_add_that(void);
	void f67_IsPtr(void);
	void f278_cant_add_that(void);
	void f165_NodeWidth(void);
	void f171_MidC2Op(void);

// ExprAdd workspace at ws+3392 length ws+56
void f277_ExprAdd(void) {

	i8 v6591 = (i8)(intptr_t)(ws+3392);
	i8 v6592 = *(i8*)(intptr_t)v6591;
	*(i8*)(intptr_t)(ws+3456) = v6592;
	i8 v6593 = (i8)(intptr_t)(ws+3400);
	i8 v6594 = *(i8*)(intptr_t)v6593;
	*(i8*)(intptr_t)(ws+3464) = v6594;
	i8 v6595 = (i8)(intptr_t)(f269_ResolveUntypedConstantsForAddOrSub);

	((void(*)(void))(intptr_t)v6595)();


	i8 v6601 = (i8)(intptr_t)(ws+3392);
	i8 v6602 = *(i8*)(intptr_t)v6601;
	i8 v6603 = v6602+(+24);
	i8 v6604 = *(i8*)(intptr_t)v6603;
	i8 v6605 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6605 = v6604;

	i8 v6606 = (i8)(intptr_t)(ws+3400);
	i8 v6607 = *(i8*)(intptr_t)v6606;
	i8 v6608 = v6607+(+24);
	i8 v6609 = *(i8*)(intptr_t)v6608;
	i8 v6610 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6610 = v6609;

	i8 v6611 = (i8)(intptr_t)(ws+3416);
	i8 v6612 = *(i8*)(intptr_t)v6611;
	*(i8*)(intptr_t)(ws+3560) = v6612;
	i8 v6613 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6613)();

	i1 v6614 = *(i1*)(intptr_t)(ws+3568);
	i8 v6615 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v6615 = v6614;

	i8 v6616 = (i8)(intptr_t)(ws+3432);
	i1 v6617 = *(i1*)(intptr_t)v6616;
	i1 v6618 = (i1)+0;
	if (v6617==v6618) goto c01_053a; else goto c01_0539;

c01_0539:;

	i8 v6619 = (i8)(intptr_t)(ws+3424);
	i8 v6620 = *(i8*)(intptr_t)v6619;
	*(i8*)(intptr_t)(ws+3560) = v6620;
	i8 v6621 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6621)();

	i1 v6622 = *(i1*)(intptr_t)(ws+3568);
	i8 v6623 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v6623 = v6622;

	i8 v6624 = (i8)(intptr_t)(ws+3433);
	i1 v6625 = *(i1*)(intptr_t)v6624;
	i1 v6626 = (i1)+0;
	if (v6625==v6626) goto c01_0542; else goto c01_0540;

c01_0542:;

	i8 v6627 = (i8)(intptr_t)(ws+3424);
	i8 v6628 = *(i8*)(intptr_t)v6627;
	i8 v6629 = (i8)(intptr_t)(ws+1528);
	i8 v6630 = *(i8*)(intptr_t)v6629;
	if (v6628==v6630) goto c01_0541; else goto c01_0540;

c01_0540:;

	i8 v6631 = (i8)(intptr_t)(f278_cant_add_that);

	((void(*)(void))(intptr_t)v6631)();

c01_0541:;

c01_053b:;

	goto c01_0536;

c01_053a:;

	i8 v6632 = (i8)(intptr_t)(ws+3424);
	i8 v6633 = *(i8*)(intptr_t)v6632;
	*(i8*)(intptr_t)(ws+3560) = v6633;
	i8 v6634 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6634)();

	i1 v6635 = *(i1*)(intptr_t)(ws+3568);
	i8 v6636 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v6636 = v6635;

	i8 v6637 = (i8)(intptr_t)(ws+3434);
	i1 v6638 = *(i1*)(intptr_t)v6637;
	i1 v6639 = (i1)+0;
	if (v6638==v6639) goto c01_0546; else goto c01_0545;

c01_0545:;

	i8 v6640 = (i8)(intptr_t)(f278_cant_add_that);

	((void(*)(void))(intptr_t)v6640)();

	goto c01_0536;

c01_0546:;

	i8 v6641 = (i8)(intptr_t)(ws+3416);
	i8 v6642 = *(i8*)(intptr_t)v6641;
	*(i8*)(intptr_t)(ws+3560) = v6642;
	i8 v6643 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6643)();

	i1 v6644 = *(i1*)(intptr_t)(ws+3568);
	i8 v6645 = (i8)(intptr_t)(ws+3435);
	*(i1*)(intptr_t)v6645 = v6644;

	i8 v6646 = (i8)(intptr_t)(ws+3435);
	i1 v6647 = *(i1*)(intptr_t)v6646;
	i1 v6648 = (i1)+0;
	if (v6647==v6648) goto c01_054d; else goto c01_054c;

c01_054d:;

	i8 v6649 = (i8)(intptr_t)(ws+3416);
	i8 v6650 = *(i8*)(intptr_t)v6649;
	i8 v6651 = (i8)(intptr_t)(ws+3424);
	i8 v6652 = *(i8*)(intptr_t)v6651;
	if (v6650==v6652) goto c01_054c; else goto c01_054b;

c01_054b:;

	i8 v6653 = (i8)(intptr_t)(f278_cant_add_that);

	((void(*)(void))(intptr_t)v6653)();

c01_054c:;

c01_0536:;

	i8 v6654 = (i8)(intptr_t)(ws+3392);
	i8 v6655 = *(i8*)(intptr_t)v6654;
	*(i8*)(intptr_t)(ws+3456) = v6655;
	i8 v6656 = (i8)(intptr_t)(f165_NodeWidth);

	((void(*)(void))(intptr_t)v6656)();

	i1 v6657 = *(i1*)(intptr_t)(ws+3464);
	i8 v6658 = (i8)(intptr_t)(ws+3436);
	*(i1*)(intptr_t)v6658 = v6657;

	i1 v6659 = (i1)+156;
	*(i1*)(intptr_t)(ws+3496) = v6659;
	i8 v6660 = (i8)(intptr_t)(ws+3436);
	i1 v6661 = *(i1*)(intptr_t)v6660;
	*(i1*)(intptr_t)(ws+3497) = v6661;
	i8 v6662 = (i8)(intptr_t)(ws+3392);
	i8 v6663 = *(i8*)(intptr_t)v6662;
	*(i8*)(intptr_t)(ws+3504) = v6663;
	i8 v6664 = (i8)(intptr_t)(ws+3400);
	i8 v6665 = *(i8*)(intptr_t)v6664;
	*(i8*)(intptr_t)(ws+3512) = v6665;
	i8 v6666 = (i8)(intptr_t)(f171_MidC2Op);

	((void(*)(void))(intptr_t)v6666)();

	i8 v6667 = *(i8*)(intptr_t)(ws+3520);
	i8 v6668 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6668 = v6667;

	i8 v6669 = (i8)(intptr_t)(ws+3440);
	i8 v6670 = *(i8*)(intptr_t)v6669;
	i8 v6671 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6671 = v6670;

	i8 v6672 = (i8)(intptr_t)(ws+3416);
	i8 v6673 = *(i8*)(intptr_t)v6672;
	i8 v6674 = (i8)(intptr_t)(ws+3408);
	i8 v6675 = *(i8*)(intptr_t)v6674;
	i8 v6676 = v6675+(+24);
	*(i8*)(intptr_t)v6676 = v6673;

}
	void f269_ResolveUntypedConstantsForAddOrSub(void);
	void f267_expr_i_cant_do_that(void);

// cant_sub_that workspace at ws+3456 length ws+0
void f280_cant_sub_that(void) {

	i8 v6682 = (i8)(intptr_t)(ws+3392);
	i8 v6683 = *(i8*)(intptr_t)v6682;
	*(i8*)(intptr_t)(ws+3504) = v6683;
	i8 v6684 = (i8)(intptr_t)(ws+3400);
	i8 v6685 = *(i8*)(intptr_t)v6684;
	*(i8*)(intptr_t)(ws+3512) = v6685;
	i8 v6686 = (i8)(intptr_t)(f267_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6686)();

}
	void f67_IsPtr(void);
	void f67_IsPtr(void);
	void f280_cant_sub_that(void);
	void f227_IsNum(void);
	void f67_IsPtr(void);
	void f280_cant_sub_that(void);
	void f227_IsNum(void);
	void f227_IsNum(void);
	void f280_cant_sub_that(void);
	void f165_NodeWidth(void);
	void f171_MidC2Op(void);
	void f67_IsPtr(void);

// ExprSub workspace at ws+3392 length ws+57
void f279_ExprSub(void) {

	i8 v6677 = (i8)(intptr_t)(ws+3392);
	i8 v6678 = *(i8*)(intptr_t)v6677;
	*(i8*)(intptr_t)(ws+3456) = v6678;
	i8 v6679 = (i8)(intptr_t)(ws+3400);
	i8 v6680 = *(i8*)(intptr_t)v6679;
	*(i8*)(intptr_t)(ws+3464) = v6680;
	i8 v6681 = (i8)(intptr_t)(f269_ResolveUntypedConstantsForAddOrSub);

	((void(*)(void))(intptr_t)v6681)();


	i8 v6687 = (i8)(intptr_t)(ws+3392);
	i8 v6688 = *(i8*)(intptr_t)v6687;
	i8 v6689 = v6688+(+24);
	i8 v6690 = *(i8*)(intptr_t)v6689;
	i8 v6691 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6691 = v6690;

	i8 v6692 = (i8)(intptr_t)(ws+3400);
	i8 v6693 = *(i8*)(intptr_t)v6692;
	i8 v6694 = v6693+(+24);
	i8 v6695 = *(i8*)(intptr_t)v6694;
	i8 v6696 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6696 = v6695;

	i8 v6697 = (i8)(intptr_t)(ws+3416);
	i8 v6698 = *(i8*)(intptr_t)v6697;
	*(i8*)(intptr_t)(ws+3560) = v6698;
	i8 v6699 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6699)();

	i1 v6700 = *(i1*)(intptr_t)(ws+3568);
	i8 v6701 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v6701 = v6700;

	i8 v6702 = (i8)(intptr_t)(ws+3424);
	i8 v6703 = *(i8*)(intptr_t)v6702;
	*(i8*)(intptr_t)(ws+3560) = v6703;
	i8 v6704 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6704)();

	i1 v6705 = *(i1*)(intptr_t)(ws+3568);
	i8 v6706 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v6706 = v6705;

	i8 v6707 = (i8)(intptr_t)(ws+3432);
	i1 v6708 = *(i1*)(intptr_t)v6707;
	i1 v6709 = (i1)+0;
	if (v6708==v6709) goto c01_0556; else goto c01_0558;

c01_0558:;

	i8 v6710 = (i8)(intptr_t)(ws+3433);
	i1 v6711 = *(i1*)(intptr_t)v6710;
	i1 v6712 = (i1)+0;
	if (v6711==v6712) goto c01_0557; else goto c01_0556;

c01_0557:;

	i8 v6713 = (i8)(intptr_t)(ws+3424);
	i8 v6714 = *(i8*)(intptr_t)v6713;
	i8 v6715 = (i8)(intptr_t)(ws+1528);
	i8 v6716 = *(i8*)(intptr_t)v6715;
	if (v6714==v6716) goto c01_0556; else goto c01_0555;

c01_0555:;

	i8 v6717 = (i8)(intptr_t)(f280_cant_sub_that);

	((void(*)(void))(intptr_t)v6717)();

	goto c01_054e;

c01_0556:;

	i8 v6718 = (i8)(intptr_t)(ws+3416);
	i8 v6719 = *(i8*)(intptr_t)v6718;
	*(i8*)(intptr_t)(ws+3560) = v6719;
	i8 v6720 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v6720)();

	i1 v6721 = *(i1*)(intptr_t)(ws+3568);
	i8 v6722 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v6722 = v6721;

	i8 v6723 = (i8)(intptr_t)(ws+3424);
	i8 v6724 = *(i8*)(intptr_t)v6723;
	*(i8*)(intptr_t)(ws+3560) = v6724;
	i8 v6725 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6725)();

	i1 v6726 = *(i1*)(intptr_t)(ws+3568);
	i8 v6727 = (i8)(intptr_t)(ws+3435);
	*(i1*)(intptr_t)v6727 = v6726;

	i8 v6728 = (i8)(intptr_t)(ws+3434);
	i1 v6729 = *(i1*)(intptr_t)v6728;
	i1 v6730 = (i1)+0;
	if (v6729==v6730) goto c01_055e; else goto c01_055f;

c01_055f:;

	i8 v6731 = (i8)(intptr_t)(ws+3435);
	i1 v6732 = *(i1*)(intptr_t)v6731;
	i1 v6733 = (i1)+0;
	if (v6732==v6733) goto c01_055e; else goto c01_055d;

c01_055d:;

	i8 v6734 = (i8)(intptr_t)(f280_cant_sub_that);

	((void(*)(void))(intptr_t)v6734)();

	goto c01_054e;

c01_055e:;

	i8 v6735 = (i8)(intptr_t)(ws+3416);
	i8 v6736 = *(i8*)(intptr_t)v6735;
	*(i8*)(intptr_t)(ws+3560) = v6736;
	i8 v6737 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v6737)();

	i1 v6738 = *(i1*)(intptr_t)(ws+3568);
	i8 v6739 = (i8)(intptr_t)(ws+3436);
	*(i1*)(intptr_t)v6739 = v6738;

	i8 v6740 = (i8)(intptr_t)(ws+3424);
	i8 v6741 = *(i8*)(intptr_t)v6740;
	*(i8*)(intptr_t)(ws+3560) = v6741;
	i8 v6742 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v6742)();

	i1 v6743 = *(i1*)(intptr_t)(ws+3568);
	i8 v6744 = (i8)(intptr_t)(ws+3437);
	*(i1*)(intptr_t)v6744 = v6743;

	i8 v6745 = (i8)(intptr_t)(ws+3436);
	i1 v6746 = *(i1*)(intptr_t)v6745;
	i1 v6747 = (i1)+0;
	if (v6746==v6747) goto c01_0567; else goto c01_0569;

c01_0569:;

	i8 v6748 = (i8)(intptr_t)(ws+3437);
	i1 v6749 = *(i1*)(intptr_t)v6748;
	i1 v6750 = (i1)+0;
	if (v6749==v6750) goto c01_0567; else goto c01_0568;

c01_0568:;

	i8 v6751 = (i8)(intptr_t)(ws+3416);
	i8 v6752 = *(i8*)(intptr_t)v6751;
	i8 v6753 = (i8)(intptr_t)(ws+3424);
	i8 v6754 = *(i8*)(intptr_t)v6753;
	if (v6752==v6754) goto c01_0567; else goto c01_0566;

c01_0566:;

	i8 v6755 = (i8)(intptr_t)(f280_cant_sub_that);

	((void(*)(void))(intptr_t)v6755)();

c01_0567:;

c01_054e:;

	i8 v6756 = (i8)(intptr_t)(ws+3392);
	i8 v6757 = *(i8*)(intptr_t)v6756;
	*(i8*)(intptr_t)(ws+3456) = v6757;
	i8 v6758 = (i8)(intptr_t)(f165_NodeWidth);

	((void(*)(void))(intptr_t)v6758)();

	i1 v6759 = *(i1*)(intptr_t)(ws+3464);
	i8 v6760 = (i8)(intptr_t)(ws+3438);
	*(i1*)(intptr_t)v6760 = v6759;

	i1 v6761 = (i1)+131;
	*(i1*)(intptr_t)(ws+3496) = v6761;
	i8 v6762 = (i8)(intptr_t)(ws+3438);
	i1 v6763 = *(i1*)(intptr_t)v6762;
	*(i1*)(intptr_t)(ws+3497) = v6763;
	i8 v6764 = (i8)(intptr_t)(ws+3392);
	i8 v6765 = *(i8*)(intptr_t)v6764;
	*(i8*)(intptr_t)(ws+3504) = v6765;
	i8 v6766 = (i8)(intptr_t)(ws+3400);
	i8 v6767 = *(i8*)(intptr_t)v6766;
	*(i8*)(intptr_t)(ws+3512) = v6767;
	i8 v6768 = (i8)(intptr_t)(f171_MidC2Op);

	((void(*)(void))(intptr_t)v6768)();

	i8 v6769 = *(i8*)(intptr_t)(ws+3520);
	i8 v6770 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6770 = v6769;

	i8 v6771 = (i8)(intptr_t)(ws+3440);
	i8 v6772 = *(i8*)(intptr_t)v6771;
	i8 v6773 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6773 = v6772;

	i8 v6774 = (i8)(intptr_t)(ws+3416);
	i8 v6775 = *(i8*)(intptr_t)v6774;
	*(i8*)(intptr_t)(ws+3560) = v6775;
	i8 v6776 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v6776)();

	i1 v6777 = *(i1*)(intptr_t)(ws+3568);
	i8 v6778 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v6778 = v6777;

	i8 v6779 = (i8)(intptr_t)(ws+3448);
	i1 v6780 = *(i1*)(intptr_t)v6779;
	i1 v6781 = (i1)+0;
	if (v6780==v6781) goto c01_0570; else goto c01_0571;

c01_0571:;

	i8 v6782 = (i8)(intptr_t)(ws+3416);
	i8 v6783 = *(i8*)(intptr_t)v6782;
	i8 v6784 = (i8)(intptr_t)(ws+3424);
	i8 v6785 = *(i8*)(intptr_t)v6784;
	if (v6783==v6785) goto c01_056f; else goto c01_0570;

c01_056f:;

	i8 v6786 = (i8)(intptr_t)(ws+1528);
	i8 v6787 = *(i8*)(intptr_t)v6786;
	i8 v6788 = (i8)(intptr_t)(ws+3408);
	i8 v6789 = *(i8*)(intptr_t)v6788;
	i8 v6790 = v6789+(+24);
	*(i8*)(intptr_t)v6790 = v6787;

	goto c01_056a;

c01_0570:;

	i8 v6791 = (i8)(intptr_t)(ws+3416);
	i8 v6792 = *(i8*)(intptr_t)v6791;
	i8 v6793 = (i8)(intptr_t)(ws+3408);
	i8 v6794 = *(i8*)(intptr_t)v6793;
	i8 v6795 = v6794+(+24);
	*(i8*)(intptr_t)v6795 = v6792;

c01_056a:;

}
	void f274_ResolveUntypedConstantsNeedingNumbers(void);
	void f228_IsSNum(void);
	void f165_NodeWidth(void);
	void f171_MidC2Op(void);

// Expr2Simple workspace at ws+3392 length ws+64
void f281_Expr2Simple(void) {

	i8 v6796 = (i8)(intptr_t)(ws+3400);
	i8 v6797 = *(i8*)(intptr_t)v6796;
	*(i8*)(intptr_t)(ws+3456) = v6797;
	i8 v6798 = (i8)(intptr_t)(ws+3408);
	i8 v6799 = *(i8*)(intptr_t)v6798;
	*(i8*)(intptr_t)(ws+3464) = v6799;
	i8 v6800 = (i8)(intptr_t)(f274_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(void))(intptr_t)v6800)();

	i8 v6801 = (i8)(intptr_t)(ws+3393);
	i1 v6802 = *(i1*)(intptr_t)v6801;
	i8 v6803 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6803 = v6802;

	i8 v6804 = (i8)(intptr_t)(ws+3400);
	i8 v6805 = *(i8*)(intptr_t)v6804;
	i8 v6806 = v6805+(+24);
	i8 v6807 = *(i8*)(intptr_t)v6806;
	*(i8*)(intptr_t)(ws+3456) = v6807;
	i8 v6808 = (i8)(intptr_t)(f228_IsSNum);

	((void(*)(void))(intptr_t)v6808)();

	i1 v6809 = *(i1*)(intptr_t)(ws+3464);
	i8 v6810 = (i8)(intptr_t)(ws+3425);
	*(i1*)(intptr_t)v6810 = v6809;

	i8 v6811 = (i8)(intptr_t)(ws+3425);
	i1 v6812 = *(i1*)(intptr_t)v6811;
	i1 v6813 = (i1)+0;
	if (v6812==v6813) goto c01_0576; else goto c01_0575;

c01_0575:;

	i8 v6814 = (i8)(intptr_t)(ws+3392);
	i1 v6815 = *(i1*)(intptr_t)v6814;
	i8 v6816 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6816 = v6815;

c01_0576:;

c01_0572:;

	i8 v6817 = (i8)(intptr_t)(ws+3400);
	i8 v6818 = *(i8*)(intptr_t)v6817;
	i8 v6819 = v6818+(+24);
	i8 v6820 = *(i8*)(intptr_t)v6819;
	i8 v6821 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6821 = v6820;

	i8 v6822 = (i8)(intptr_t)(ws+3400);
	i8 v6823 = *(i8*)(intptr_t)v6822;
	*(i8*)(intptr_t)(ws+3456) = v6823;
	i8 v6824 = (i8)(intptr_t)(f165_NodeWidth);

	((void(*)(void))(intptr_t)v6824)();

	i1 v6825 = *(i1*)(intptr_t)(ws+3464);
	i8 v6826 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v6826 = v6825;

	i8 v6827 = (i8)(intptr_t)(ws+3424);
	i1 v6828 = *(i1*)(intptr_t)v6827;
	*(i1*)(intptr_t)(ws+3496) = v6828;
	i8 v6829 = (i8)(intptr_t)(ws+3440);
	i1 v6830 = *(i1*)(intptr_t)v6829;
	*(i1*)(intptr_t)(ws+3497) = v6830;
	i8 v6831 = (i8)(intptr_t)(ws+3400);
	i8 v6832 = *(i8*)(intptr_t)v6831;
	*(i8*)(intptr_t)(ws+3504) = v6832;
	i8 v6833 = (i8)(intptr_t)(ws+3408);
	i8 v6834 = *(i8*)(intptr_t)v6833;
	*(i8*)(intptr_t)(ws+3512) = v6834;
	i8 v6835 = (i8)(intptr_t)(f171_MidC2Op);

	((void(*)(void))(intptr_t)v6835)();

	i8 v6836 = *(i8*)(intptr_t)(ws+3520);
	i8 v6837 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6837 = v6836;

	i8 v6838 = (i8)(intptr_t)(ws+3448);
	i8 v6839 = *(i8*)(intptr_t)v6838;
	i8 v6840 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6840 = v6839;

	i8 v6841 = (i8)(intptr_t)(ws+3432);
	i8 v6842 = *(i8*)(intptr_t)v6841;
	i8 v6843 = (i8)(intptr_t)(ws+3416);
	i8 v6844 = *(i8*)(intptr_t)v6843;
	i8 v6845 = v6844+(+24);
	*(i8*)(intptr_t)v6845 = v6842;

}
const i1 c01_s0111[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f75_SimpleError(void);

// expr_i_checkrhsconst workspace at ws+3456 length ws+8
void f282_expr_i_checkrhsconst(void) {

	i8 v6846 = (i8)(intptr_t)(ws+3456);
	i8 v6847 = *(i8*)(intptr_t)v6846;
	i8 v6848 = v6847+(+48);
	i1 v6849 = *(i1*)(intptr_t)v6848;
	i1 v6850 = (i1)+40;
	if (v6849==v6850) goto c01_057b; else goto c01_057a;

c01_057a:;

	i8 v6851 = (i8)(intptr_t)c01_s0111;
	*(i8*)(intptr_t)(ws+3648) = v6851;
	i8 v6852 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v6852)();

c01_057b:;

c01_0577:;

}
	void f227_IsNum(void);
const i1 c01_s0112[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f75_SimpleError(void);
	void f268_CheckExpressionType(void);

// expr_i_checkshift workspace at ws+3456 length ws+17
void f283_expr_i_checkshift(void) {

	i8 v6853 = (i8)(intptr_t)(ws+3456);
	i8 v6854 = *(i8*)(intptr_t)v6853;
	i8 v6855 = v6854+(+24);
	i8 v6856 = *(i8*)(intptr_t)v6855;
	*(i8*)(intptr_t)(ws+3560) = v6856;
	i8 v6857 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v6857)();

	i1 v6858 = *(i1*)(intptr_t)(ws+3568);
	i8 v6859 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v6859 = v6858;

	i8 v6860 = (i8)(intptr_t)(ws+3472);
	i1 v6861 = *(i1*)(intptr_t)v6860;
	i1 v6862 = (i1)+0;
	if (v6861==v6862) goto c01_057f; else goto c01_0580;

c01_057f:;

	i8 v6863 = (i8)(intptr_t)c01_s0112;
	*(i8*)(intptr_t)(ws+3648) = v6863;
	i8 v6864 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v6864)();

c01_0580:;

c01_057c:;

	i8 v6865 = (i8)(intptr_t)(ws+3464);
	i8 v6866 = *(i8*)(intptr_t)v6865;
	*(i8*)(intptr_t)(ws+3496) = v6866;
	i8 v6867 = (i8)(intptr_t)(ws+1512);
	i8 v6868 = *(i8*)(intptr_t)v6867;
	*(i8*)(intptr_t)(ws+3504) = v6868;
	i8 v6869 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(void))(intptr_t)v6869)();

}
	void f228_IsSNum(void);
	void f282_expr_i_checkrhsconst(void);
	void f168_FoldConstant2(void);
	void f62_Discard(void);
	void f283_expr_i_checkshift(void);
	void f165_NodeWidth(void);
	void f171_MidC2Op(void);

// ExprShift workspace at ws+3392 length ws+64
void f284_ExprShift(void) {

	i8 v6870 = (i8)(intptr_t)(ws+3393);
	i1 v6871 = *(i1*)(intptr_t)v6870;
	i8 v6872 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6872 = v6871;

	i8 v6873 = (i8)(intptr_t)(ws+3400);
	i8 v6874 = *(i8*)(intptr_t)v6873;
	i8 v6875 = v6874+(+24);
	i8 v6876 = *(i8*)(intptr_t)v6875;
	*(i8*)(intptr_t)(ws+3456) = v6876;
	i8 v6877 = (i8)(intptr_t)(f228_IsSNum);

	((void(*)(void))(intptr_t)v6877)();

	i1 v6878 = *(i1*)(intptr_t)(ws+3464);
	i8 v6879 = (i8)(intptr_t)(ws+3425);
	*(i1*)(intptr_t)v6879 = v6878;

	i8 v6880 = (i8)(intptr_t)(ws+3425);
	i1 v6881 = *(i1*)(intptr_t)v6880;
	i1 v6882 = (i1)+0;
	if (v6881==v6882) goto c01_0585; else goto c01_0584;

c01_0584:;

	i8 v6883 = (i8)(intptr_t)(ws+3392);
	i1 v6884 = *(i1*)(intptr_t)v6883;
	i8 v6885 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6885 = v6884;

c01_0585:;

c01_0581:;

	i8 v6886 = (i8)(intptr_t)(ws+3400);
	i8 v6887 = *(i8*)(intptr_t)v6886;
	i8 v6888 = v6887+(+48);
	i1 v6889 = *(i1*)(intptr_t)v6888;
	i1 v6890 = (i1)+40;
	if (v6889==v6890) goto c01_0589; else goto c01_058a;

c01_0589:;

	i8 v6891 = (i8)(intptr_t)(ws+3408);
	i8 v6892 = *(i8*)(intptr_t)v6891;
	*(i8*)(intptr_t)(ws+3456) = v6892;
	i8 v6893 = (i8)(intptr_t)(f282_expr_i_checkrhsconst);

	((void(*)(void))(intptr_t)v6893)();

	i8 v6894 = (i8)(intptr_t)(ws+3424);
	i1 v6895 = *(i1*)(intptr_t)v6894;
	*(i1*)(intptr_t)(ws+3592) = v6895;
	i8 v6896 = (i8)(intptr_t)(ws+3400);
	i8 v6897 = *(i8*)(intptr_t)v6896;
	*(i8*)(intptr_t)(ws+3600) = v6897;
	i8 v6898 = (i8)(intptr_t)(ws+3408);
	i8 v6899 = *(i8*)(intptr_t)v6898;
	*(i8*)(intptr_t)(ws+3608) = v6899;
	i8 v6900 = (i8)(intptr_t)(f168_FoldConstant2);

	((void(*)(void))(intptr_t)v6900)();

	i4 v6901 = *(i4*)(intptr_t)(ws+3616);
	i8 v6902 = (i8)(intptr_t)(ws+3428);
	*(i4*)(intptr_t)v6902 = v6901;

	i8 v6903 = (i8)(intptr_t)(ws+3428);
	i4 v6904 = *(i4*)(intptr_t)v6903;
	i8 v6905 = (i8)(intptr_t)(ws+3400);
	i8 v6906 = *(i8*)(intptr_t)v6905;
	*(i4*)(intptr_t)v6906 = v6904;

	i8 v6907 = (i8)(intptr_t)(ws+3400);
	i8 v6908 = *(i8*)(intptr_t)v6907;
	i8 v6909 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6909 = v6908;

	i8 v6910 = (i8)(intptr_t)(ws+3408);
	i8 v6911 = *(i8*)(intptr_t)v6910;
	*(i8*)(intptr_t)(ws+3592) = v6911;
	i8 v6912 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v6912)();

	return;

c01_058a:;

c01_0586:;

	i8 v6913 = (i8)(intptr_t)(ws+3400);
	i8 v6914 = *(i8*)(intptr_t)v6913;
	*(i8*)(intptr_t)(ws+3456) = v6914;
	i8 v6915 = (i8)(intptr_t)(ws+3408);
	i8 v6916 = *(i8*)(intptr_t)v6915;
	*(i8*)(intptr_t)(ws+3464) = v6916;
	i8 v6917 = (i8)(intptr_t)(f283_expr_i_checkshift);

	((void(*)(void))(intptr_t)v6917)();

	i8 v6918 = (i8)(intptr_t)(ws+3400);
	i8 v6919 = *(i8*)(intptr_t)v6918;
	i8 v6920 = v6919+(+24);
	i8 v6921 = *(i8*)(intptr_t)v6920;
	i8 v6922 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6922 = v6921;

	i8 v6923 = (i8)(intptr_t)(ws+3400);
	i8 v6924 = *(i8*)(intptr_t)v6923;
	*(i8*)(intptr_t)(ws+3456) = v6924;
	i8 v6925 = (i8)(intptr_t)(f165_NodeWidth);

	((void(*)(void))(intptr_t)v6925)();

	i1 v6926 = *(i1*)(intptr_t)(ws+3464);
	i8 v6927 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v6927 = v6926;

	i8 v6928 = (i8)(intptr_t)(ws+3424);
	i1 v6929 = *(i1*)(intptr_t)v6928;
	*(i1*)(intptr_t)(ws+3496) = v6929;
	i8 v6930 = (i8)(intptr_t)(ws+3440);
	i1 v6931 = *(i1*)(intptr_t)v6930;
	*(i1*)(intptr_t)(ws+3497) = v6931;
	i8 v6932 = (i8)(intptr_t)(ws+3400);
	i8 v6933 = *(i8*)(intptr_t)v6932;
	*(i8*)(intptr_t)(ws+3504) = v6933;
	i8 v6934 = (i8)(intptr_t)(ws+3408);
	i8 v6935 = *(i8*)(intptr_t)v6934;
	*(i8*)(intptr_t)(ws+3512) = v6935;
	i8 v6936 = (i8)(intptr_t)(f171_MidC2Op);

	((void(*)(void))(intptr_t)v6936)();

	i8 v6937 = *(i8*)(intptr_t)(ws+3520);
	i8 v6938 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6938 = v6937;

	i8 v6939 = (i8)(intptr_t)(ws+3448);
	i8 v6940 = *(i8*)(intptr_t)v6939;
	i8 v6941 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6941 = v6940;

	i8 v6942 = (i8)(intptr_t)(ws+3432);
	i8 v6943 = *(i8*)(intptr_t)v6942;
	i8 v6944 = (i8)(intptr_t)(ws+3416);
	i8 v6945 = *(i8*)(intptr_t)v6944;
	i8 v6946 = v6945+(+24);
	*(i8*)(intptr_t)v6946 = v6943;

}
const i1 c01_s0113[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f75_SimpleError(void);

// PushNode workspace at ws+3640 length ws+8
void f59_PushNode(void) {

	i8 v6947 = (i8)(intptr_t)(ws+3640);
	i8 v6948 = *(i8*)(intptr_t)v6947;
	i8 v6949 = (i8)+0;
	if (v6948==v6949) goto c01_058f; else goto c01_058e;

c01_058e:;

	i8 v6950 = (i8)(intptr_t)(ws+224);
	i8 v6951 = *(i8*)(intptr_t)v6950;
	i8 v6952 = (i8)(intptr_t)(ws+224);
	if (v6951==v6952) goto c01_0593; else goto c01_0594;

c01_0593:;

	i8 v6953 = (i8)(intptr_t)c01_s0113;
	*(i8*)(intptr_t)(ws+3648) = v6953;
	i8 v6954 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v6954)();

c01_0594:;

c01_0590:;

	i8 v6955 = (i8)(intptr_t)(ws+3640);
	i8 v6956 = *(i8*)(intptr_t)v6955;
	i8 v6957 = (i8)(intptr_t)(ws+224);
	i8 v6958 = *(i8*)(intptr_t)v6957;
	*(i8*)(intptr_t)v6958 = v6956;

	i8 v6959 = (i8)(intptr_t)(ws+224);
	i8 v6960 = *(i8*)(intptr_t)v6959;
	i8 v6961 = v6960+(+8);
	i8 v6962 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6962 = v6961;

c01_058f:;

c01_058b:;

}

// PopNode workspace at ws+3640 length ws+8
void f60_PopNode(void) {

	i8 v6963 = (i8)(intptr_t)(ws+224);
	i8 v6964 = *(i8*)(intptr_t)v6963;
	i8 v6965 = v6964+(-8);
	i8 v6966 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6966 = v6965;

	i8 v6967 = (i8)(intptr_t)(ws+224);
	i8 v6968 = *(i8*)(intptr_t)v6967;
	i8 v6969 = *(i8*)(intptr_t)v6968;
	i8 v6970 = (i8)(intptr_t)(ws+3640);
	*(i8*)(intptr_t)v6970 = v6969;

}
	void f60_PopNode(void);
	void f59_PushNode(void);
	void f59_PushNode(void);

// NextNode workspace at ws+3624 length ws+16
void f61_NextNode(void) {

	i8 v6971 = (i8)(intptr_t)(f60_PopNode);

	((void(*)(void))(intptr_t)v6971)();

	i8 v6972 = *(i8*)(intptr_t)(ws+3640);
	i8 v6973 = (i8)(intptr_t)(ws+3632);
	*(i8*)(intptr_t)v6973 = v6972;

	i8 v6974 = (i8)(intptr_t)(ws+3632);
	i8 v6975 = *(i8*)(intptr_t)v6974;
	i8 v6976 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v6976 = v6975;

	i8 v6977 = (i8)(intptr_t)(ws+3624);
	i8 v6978 = *(i8*)(intptr_t)v6977;
	i8 v6979 = (i8)+0;
	if (v6978==v6979) goto c01_0599; else goto c01_0598;

c01_0598:;

	i8 v6980 = (i8)(intptr_t)(ws+3624);
	i8 v6981 = *(i8*)(intptr_t)v6980;
	i8 v6982 = v6981+(+32);
	i8 v6983 = *(i8*)(intptr_t)v6982;
	*(i8*)(intptr_t)(ws+3640) = v6983;
	i8 v6984 = (i8)(intptr_t)(f59_PushNode);

	((void(*)(void))(intptr_t)v6984)();

	i8 v6985 = (i8)(intptr_t)(ws+3624);
	i8 v6986 = *(i8*)(intptr_t)v6985;
	i8 v6987 = v6986+(+40);
	i8 v6988 = *(i8*)(intptr_t)v6987;
	*(i8*)(intptr_t)(ws+3640) = v6988;
	i8 v6989 = (i8)(intptr_t)(f59_PushNode);

	((void(*)(void))(intptr_t)v6989)();

c01_0599:;

c01_0595:;

}
	void f59_PushNode(void);
	void f61_NextNode(void);
	void f164_FreeNode(void);

// Discard workspace at ws+3592 length ws+32
void f62_Discard(void) {

	i8 v6990 = (i8)(intptr_t)(ws+224);
	i8 v6991 = *(i8*)(intptr_t)v6990;
	i8 v6992 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v6992 = v6991;

	i8 v6993 = (i8)(intptr_t)(ws+3592);
	i8 v6994 = *(i8*)(intptr_t)v6993;
	*(i8*)(intptr_t)(ws+3640) = v6994;
	i8 v6995 = (i8)(intptr_t)(f59_PushNode);

	((void(*)(void))(intptr_t)v6995)();

c01_059a:;

	i8 v6996 = (i8)(intptr_t)(ws+224);
	i8 v6997 = *(i8*)(intptr_t)v6996;
	i8 v6998 = (i8)(intptr_t)(ws+3600);
	i8 v6999 = *(i8*)(intptr_t)v6998;
	if (v6997==v6999) goto c01_059f; else goto c01_059e;

c01_059e:;

	i8 v7000 = (i8)(intptr_t)(f61_NextNode);

	((void(*)(void))(intptr_t)v7000)();

	i8 v7001 = *(i8*)(intptr_t)(ws+3624);
	i8 v7002 = (i8)(intptr_t)(ws+3608);
	*(i8*)(intptr_t)v7002 = v7001;

	i8 v7003 = (i8)(intptr_t)(ws+3608);
	i8 v7004 = *(i8*)(intptr_t)v7003;
	i8 v7005 = (i8)(intptr_t)(ws+3616);
	*(i8*)(intptr_t)v7005 = v7004;

	i8 v7006 = (i8)(intptr_t)(ws+3616);
	i8 v7007 = *(i8*)(intptr_t)v7006;
	*(i8*)(intptr_t)(ws+3624) = v7007;
	i8 v7008 = (i8)(intptr_t)(f164_FreeNode);

	((void(*)(void))(intptr_t)v7008)();

	goto c01_059a;

c01_059f:;

}
	void f68_InternalAlloc(void);
	void f235_AllocLabel(void);
	void f235_AllocLabel(void);

// BeginNormalLoop workspace at ws+3400 length ws+20
void f285_BeginNormalLoop(void) {

	i8 v7009 = (i8)+8;
	*(i8*)(intptr_t)(ws+3640) = v7009;
	i8 v7010 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v7010)();

	i8 v7011 = *(i8*)(intptr_t)(ws+3648);
	i8 v7012 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7012 = v7011;

	i8 v7013 = (i8)(intptr_t)(ws+3408);
	i8 v7014 = *(i8*)(intptr_t)v7013;
	i8 v7015 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7015 = v7014;

	i8 v7016 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7016)();

	i2 v7017 = *(i2*)(intptr_t)(ws+3472);
	i8 v7018 = (i8)(intptr_t)(ws+3416);
	*(i2*)(intptr_t)v7018 = v7017;

	i8 v7019 = (i8)(intptr_t)(ws+3416);
	i2 v7020 = *(i2*)(intptr_t)v7019;
	i8 v7021 = (i8)(intptr_t)(ws+3400);
	i8 v7022 = *(i8*)(intptr_t)v7021;
	*(i2*)(intptr_t)v7022 = v7020;

	i8 v7023 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7023)();

	i2 v7024 = *(i2*)(intptr_t)(ws+3472);
	i8 v7025 = (i8)(intptr_t)(ws+3418);
	*(i2*)(intptr_t)v7025 = v7024;

	i8 v7026 = (i8)(intptr_t)(ws+3418);
	i2 v7027 = *(i2*)(intptr_t)v7026;
	i8 v7028 = (i8)(intptr_t)(ws+3400);
	i8 v7029 = *(i8*)(intptr_t)v7028;
	i8 v7030 = v7029+(+2);
	*(i2*)(intptr_t)v7030 = v7027;

	i8 v7031 = (i8)(intptr_t)(ws+52);
	i2 v7032 = *(i2*)(intptr_t)v7031;
	i8 v7033 = (i8)(intptr_t)(ws+3400);
	i8 v7034 = *(i8*)(intptr_t)v7033;
	i8 v7035 = v7034+(+4);
	*(i2*)(intptr_t)v7035 = v7032;

	i8 v7036 = (i8)(intptr_t)(ws+54);
	i2 v7037 = *(i2*)(intptr_t)v7036;
	i8 v7038 = (i8)(intptr_t)(ws+3400);
	i8 v7039 = *(i8*)(intptr_t)v7038;
	i8 v7040 = v7039+(+6);
	*(i2*)(intptr_t)v7040 = v7037;

	i8 v7041 = (i8)(intptr_t)(ws+3400);
	i8 v7042 = *(i8*)(intptr_t)v7041;
	i8 v7043 = v7042+(+2);
	i2 v7044 = *(i2*)(intptr_t)v7043;
	i8 v7045 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7045 = v7044;

	i8 v7046 = (i8)(intptr_t)(ws+3400);
	i8 v7047 = *(i8*)(intptr_t)v7046;
	i2 v7048 = *(i2*)(intptr_t)v7047;
	i8 v7049 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v7049 = v7048;

}
	void f129_MidJump(void);
	void f256_Generate(void);
	void f110_MidLabel(void);
	void f256_Generate(void);
	void f33_Free(void);

// TerminateNormalLoop workspace at ws+3384 length ws+24
void f286_TerminateNormalLoop(void) {

	i8 v7050 = (i8)(intptr_t)(ws+54);
	i2 v7051 = *(i2*)(intptr_t)v7050;
	*(i2*)(intptr_t)(ws+3416) = v7051;
	i8 v7052 = (i8)(intptr_t)(f129_MidJump);

	((void(*)(void))(intptr_t)v7052)();

	i8 v7053 = *(i8*)(intptr_t)(ws+3424);
	i8 v7054 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7054 = v7053;

	i8 v7055 = (i8)(intptr_t)(ws+3392);
	i8 v7056 = *(i8*)(intptr_t)v7055;
	*(i8*)(intptr_t)(ws+3488) = v7056;
	i8 v7057 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7057)();

	i8 v7058 = (i8)(intptr_t)(ws+52);
	i2 v7059 = *(i2*)(intptr_t)v7058;
	*(i2*)(intptr_t)(ws+3472) = v7059;
	i8 v7060 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v7060)();

	i8 v7061 = *(i8*)(intptr_t)(ws+3480);
	i8 v7062 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7062 = v7061;

	i8 v7063 = (i8)(intptr_t)(ws+3400);
	i8 v7064 = *(i8*)(intptr_t)v7063;
	*(i8*)(intptr_t)(ws+3488) = v7064;
	i8 v7065 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7065)();

	i8 v7066 = (i8)(intptr_t)(ws+3384);
	i8 v7067 = *(i8*)(intptr_t)v7066;
	i8 v7068 = v7067+(+4);
	i2 v7069 = *(i2*)(intptr_t)v7068;
	i8 v7070 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7070 = v7069;

	i8 v7071 = (i8)(intptr_t)(ws+3384);
	i8 v7072 = *(i8*)(intptr_t)v7071;
	i8 v7073 = v7072+(+6);
	i2 v7074 = *(i2*)(intptr_t)v7073;
	i8 v7075 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v7075 = v7074;

	i8 v7076 = (i8)(intptr_t)(ws+3384);
	i8 v7077 = *(i8*)(intptr_t)v7076;
	*(i8*)(intptr_t)(ws+3680) = v7077;
	i8 v7078 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v7078)();

}

// Negate workspace at ws+3384 length ws+8
void f287_Negate(void) {

	i8 v7079 = (i8)(intptr_t)(ws+3384);
	i8 v7080 = *(i8*)(intptr_t)v7079;
	i8 v7081 = v7080+(+6);
	i1 v7082 = *(i1*)(intptr_t)v7081;
	i1 v7083 = v7082^(+1);
	i8 v7084 = (i8)(intptr_t)(ws+3384);
	i8 v7085 = *(i8*)(intptr_t)v7084;
	i8 v7086 = v7085+(+6);
	*(i1*)(intptr_t)v7086 = v7083;

}
	void f275_CondSimple(void);
	void f235_AllocLabel(void);
	void f235_AllocLabel(void);
	void f165_NodeWidth(void);
	void f155_MidBeq(void);

// ConditionalEq workspace at ws+3392 length ws+56
void f288_ConditionalEq(void) {

	i8 v7087 = (i8)(intptr_t)(ws+3392);
	i8 v7088 = *(i8*)(intptr_t)v7087;
	*(i8*)(intptr_t)(ws+3456) = v7088;
	i8 v7089 = (i8)(intptr_t)(ws+3400);
	i8 v7090 = *(i8*)(intptr_t)v7089;
	*(i8*)(intptr_t)(ws+3464) = v7090;
	i8 v7091 = (i8)(intptr_t)(f275_CondSimple);

	((void(*)(void))(intptr_t)v7091)();

	i8 v7092 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7092)();

	i2 v7093 = *(i2*)(intptr_t)(ws+3472);
	i8 v7094 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v7094 = v7093;

	i8 v7095 = (i8)(intptr_t)(ws+3424);
	i2 v7096 = *(i2*)(intptr_t)v7095;
	i8 v7097 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v7097 = v7096;

	i8 v7098 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7098)();

	i2 v7099 = *(i2*)(intptr_t)(ws+3472);
	i8 v7100 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v7100 = v7099;

	i8 v7101 = (i8)(intptr_t)(ws+3428);
	i2 v7102 = *(i2*)(intptr_t)v7101;
	i8 v7103 = (i8)(intptr_t)(ws+3430);
	*(i2*)(intptr_t)v7103 = v7102;

	i8 v7104 = (i8)(intptr_t)(ws+3392);
	i8 v7105 = *(i8*)(intptr_t)v7104;
	*(i8*)(intptr_t)(ws+3456) = v7105;
	i8 v7106 = (i8)(intptr_t)(f165_NodeWidth);

	((void(*)(void))(intptr_t)v7106)();

	i1 v7107 = *(i1*)(intptr_t)(ws+3464);
	i8 v7108 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7108 = v7107;

	i8 v7109 = (i8)(intptr_t)(ws+3432);
	i1 v7110 = *(i1*)(intptr_t)v7109;
	i8 v7111 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7111 = v7110;

	i8 v7112 = (i8)(intptr_t)(ws+3433);
	i1 v7113 = *(i1*)(intptr_t)v7112;
	*(i1*)(intptr_t)(ws+3448) = v7113;
	i8 v7114 = (i8)(intptr_t)(ws+3392);
	i8 v7115 = *(i8*)(intptr_t)v7114;
	*(i8*)(intptr_t)(ws+3456) = v7115;
	i8 v7116 = (i8)(intptr_t)(ws+3400);
	i8 v7117 = *(i8*)(intptr_t)v7116;
	*(i8*)(intptr_t)(ws+3464) = v7117;
	i8 v7118 = (i8)(intptr_t)(ws+3426);
	i2 v7119 = *(i2*)(intptr_t)v7118;
	*(i2*)(intptr_t)(ws+3472) = v7119;
	i8 v7120 = (i8)(intptr_t)(ws+3430);
	i2 v7121 = *(i2*)(intptr_t)v7120;
	*(i2*)(intptr_t)(ws+3474) = v7121;
	i2 v7122 = (i2)+0;
	*(i2*)(intptr_t)(ws+3476) = v7122;
	i8 v7123 = (i8)(intptr_t)(ws+3408);
	i1 v7124 = *(i1*)(intptr_t)v7123;
	*(i1*)(intptr_t)(ws+3478) = v7124;
	i8 v7125 = (i8)(intptr_t)(f155_MidBeq);

	((void(*)(void))(intptr_t)v7125)();

	i8 v7126 = *(i8*)(intptr_t)(ws+3480);
	i8 v7127 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7127 = v7126;

	i8 v7128 = (i8)(intptr_t)(ws+3440);
	i8 v7129 = *(i8*)(intptr_t)v7128;
	i8 v7130 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7130 = v7129;

}
	void f275_CondSimple(void);
	void f235_AllocLabel(void);
	void f235_AllocLabel(void);
	void f165_NodeWidth(void);
	void f228_IsSNum(void);
	void f117_MidBlts(void);
	void f113_MidBltu(void);

// ConditionalLt workspace at ws+3392 length ws+64
void f289_ConditionalLt(void) {

	i8 v7131 = (i8)(intptr_t)(ws+3392);
	i8 v7132 = *(i8*)(intptr_t)v7131;
	*(i8*)(intptr_t)(ws+3456) = v7132;
	i8 v7133 = (i8)(intptr_t)(ws+3400);
	i8 v7134 = *(i8*)(intptr_t)v7133;
	*(i8*)(intptr_t)(ws+3464) = v7134;
	i8 v7135 = (i8)(intptr_t)(f275_CondSimple);

	((void(*)(void))(intptr_t)v7135)();

	i8 v7136 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7136)();

	i2 v7137 = *(i2*)(intptr_t)(ws+3472);
	i8 v7138 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v7138 = v7137;

	i8 v7139 = (i8)(intptr_t)(ws+3424);
	i2 v7140 = *(i2*)(intptr_t)v7139;
	i8 v7141 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v7141 = v7140;

	i8 v7142 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7142)();

	i2 v7143 = *(i2*)(intptr_t)(ws+3472);
	i8 v7144 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v7144 = v7143;

	i8 v7145 = (i8)(intptr_t)(ws+3428);
	i2 v7146 = *(i2*)(intptr_t)v7145;
	i8 v7147 = (i8)(intptr_t)(ws+3430);
	*(i2*)(intptr_t)v7147 = v7146;

	i8 v7148 = (i8)(intptr_t)(ws+3392);
	i8 v7149 = *(i8*)(intptr_t)v7148;
	*(i8*)(intptr_t)(ws+3456) = v7149;
	i8 v7150 = (i8)(intptr_t)(f165_NodeWidth);

	((void(*)(void))(intptr_t)v7150)();

	i1 v7151 = *(i1*)(intptr_t)(ws+3464);
	i8 v7152 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7152 = v7151;

	i8 v7153 = (i8)(intptr_t)(ws+3432);
	i1 v7154 = *(i1*)(intptr_t)v7153;
	i8 v7155 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7155 = v7154;

	i8 v7156 = (i8)(intptr_t)(ws+3392);
	i8 v7157 = *(i8*)(intptr_t)v7156;
	i8 v7158 = v7157+(+24);
	i8 v7159 = *(i8*)(intptr_t)v7158;
	*(i8*)(intptr_t)(ws+3456) = v7159;
	i8 v7160 = (i8)(intptr_t)(f228_IsSNum);

	((void(*)(void))(intptr_t)v7160)();

	i1 v7161 = *(i1*)(intptr_t)(ws+3464);
	i8 v7162 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v7162 = v7161;

	i8 v7163 = (i8)(intptr_t)(ws+3434);
	i1 v7164 = *(i1*)(intptr_t)v7163;
	i1 v7165 = (i1)+0;
	if (v7164==v7165) goto c01_05a4; else goto c01_05a3;

c01_05a3:;

	i8 v7166 = (i8)(intptr_t)(ws+3433);
	i1 v7167 = *(i1*)(intptr_t)v7166;
	*(i1*)(intptr_t)(ws+3456) = v7167;
	i8 v7168 = (i8)(intptr_t)(ws+3392);
	i8 v7169 = *(i8*)(intptr_t)v7168;
	*(i8*)(intptr_t)(ws+3464) = v7169;
	i8 v7170 = (i8)(intptr_t)(ws+3400);
	i8 v7171 = *(i8*)(intptr_t)v7170;
	*(i8*)(intptr_t)(ws+3472) = v7171;
	i8 v7172 = (i8)(intptr_t)(ws+3426);
	i2 v7173 = *(i2*)(intptr_t)v7172;
	*(i2*)(intptr_t)(ws+3480) = v7173;
	i8 v7174 = (i8)(intptr_t)(ws+3430);
	i2 v7175 = *(i2*)(intptr_t)v7174;
	*(i2*)(intptr_t)(ws+3482) = v7175;
	i2 v7176 = (i2)+0;
	*(i2*)(intptr_t)(ws+3484) = v7176;
	i8 v7177 = (i8)(intptr_t)(ws+3408);
	i1 v7178 = *(i1*)(intptr_t)v7177;
	*(i1*)(intptr_t)(ws+3486) = v7178;
	i8 v7179 = (i8)(intptr_t)(f117_MidBlts);

	((void(*)(void))(intptr_t)v7179)();

	i8 v7180 = *(i8*)(intptr_t)(ws+3488);
	i8 v7181 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7181 = v7180;

	i8 v7182 = (i8)(intptr_t)(ws+3440);
	i8 v7183 = *(i8*)(intptr_t)v7182;
	i8 v7184 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7184 = v7183;

	goto c01_05a0;

c01_05a4:;

	i8 v7185 = (i8)(intptr_t)(ws+3433);
	i1 v7186 = *(i1*)(intptr_t)v7185;
	*(i1*)(intptr_t)(ws+3456) = v7186;
	i8 v7187 = (i8)(intptr_t)(ws+3392);
	i8 v7188 = *(i8*)(intptr_t)v7187;
	*(i8*)(intptr_t)(ws+3464) = v7188;
	i8 v7189 = (i8)(intptr_t)(ws+3400);
	i8 v7190 = *(i8*)(intptr_t)v7189;
	*(i8*)(intptr_t)(ws+3472) = v7190;
	i8 v7191 = (i8)(intptr_t)(ws+3426);
	i2 v7192 = *(i2*)(intptr_t)v7191;
	*(i2*)(intptr_t)(ws+3480) = v7192;
	i8 v7193 = (i8)(intptr_t)(ws+3430);
	i2 v7194 = *(i2*)(intptr_t)v7193;
	*(i2*)(intptr_t)(ws+3482) = v7194;
	i2 v7195 = (i2)+0;
	*(i2*)(intptr_t)(ws+3484) = v7195;
	i8 v7196 = (i8)(intptr_t)(ws+3408);
	i1 v7197 = *(i1*)(intptr_t)v7196;
	*(i1*)(intptr_t)(ws+3486) = v7197;
	i8 v7198 = (i8)(intptr_t)(f113_MidBltu);

	((void(*)(void))(intptr_t)v7198)();

	i8 v7199 = *(i8*)(intptr_t)(ws+3488);
	i8 v7200 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7200 = v7199;

	i8 v7201 = (i8)(intptr_t)(ws+3448);
	i8 v7202 = *(i8*)(intptr_t)v7201;
	i8 v7203 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7203 = v7202;

c01_05a0:;

}
const i1 c01_s0114[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f75_SimpleError(void);

// parser_i_bad_next_prev workspace at ws+3408 length ws+0
void f290_parser_i_bad_next_prev(void) {

	i8 v7204 = (i8)(intptr_t)c01_s0114;
	*(i8*)(intptr_t)(ws+3648) = v7204;
	i8 v7205 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v7205)();

}
const i1 c01_s0115[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f75_SimpleError(void);

// parser_i_constant_error workspace at ws+3448 length ws+0
void f291_parser_i_constant_error(void) {

	i8 v7206 = (i8)(intptr_t)c01_s0115;
	*(i8*)(intptr_t)(ws+3648) = v7206;
	i8 v7207 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v7207)();

}
	void f73_StartError(void);
const i1 c01_s0116[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s0117[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f11_print(void);
	void f17_print_i8(void);
const i1 c01_s0118[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f11_print(void);
	void f17_print_i8(void);
	void f74_EndError(void);

// i_check_sub_call_args workspace at ws+3488 length ws+8
void f292_i_check_sub_call_args(void) {

	i8 v7208 = (i8)(intptr_t)(ws+80);
	i8 v7209 = *(i8*)(intptr_t)v7208;
	i8 v7210 = v7209+(+8);
	i8 v7211 = *(i8*)(intptr_t)v7210;
	i8 v7212 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v7212 = v7211;

	i8 v7213 = (i8)(intptr_t)(ws+80);
	i8 v7214 = *(i8*)(intptr_t)v7213;
	i8 v7215 = v7214+(+40);
	i1 v7216 = *(i1*)(intptr_t)v7215;
	i8 v7217 = (i8)(intptr_t)(ws+3488);
	i8 v7218 = *(i8*)(intptr_t)v7217;
	i8 v7219 = v7218+(+80);
	i1 v7220 = *(i1*)(intptr_t)v7219;
	if (v7216==v7220) goto c01_05a9; else goto c01_05a8;

c01_05a8:;

	i8 v7221 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v7221)();

	i8 v7222 = (i8)(intptr_t)c01_s0116;
	*(i8*)(intptr_t)(ws+3696) = v7222;
	i8 v7223 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7223)();

	i8 v7224 = (i8)(intptr_t)(ws+3488);
	i8 v7225 = *(i8*)(intptr_t)v7224;
	i8 v7226 = *(i8*)(intptr_t)v7225;
	i8 v7227 = v7226+(+8);
	i8 v7228 = *(i8*)(intptr_t)v7227;
	*(i8*)(intptr_t)(ws+3696) = v7228;
	i8 v7229 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7229)();

	i8 v7230 = (i8)(intptr_t)c01_s0117;
	*(i8*)(intptr_t)(ws+3696) = v7230;
	i8 v7231 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7231)();

	i8 v7232 = (i8)(intptr_t)(ws+3488);
	i8 v7233 = *(i8*)(intptr_t)v7232;
	i8 v7234 = v7233+(+80);
	i1 v7235 = *(i1*)(intptr_t)v7234;
	*(i1*)(intptr_t)(ws+3496) = v7235;
	i8 v7236 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(void))(intptr_t)v7236)();

	i8 v7237 = (i8)(intptr_t)c01_s0118;
	*(i8*)(intptr_t)(ws+3696) = v7237;
	i8 v7238 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7238)();

	i8 v7239 = (i8)(intptr_t)(ws+80);
	i8 v7240 = *(i8*)(intptr_t)v7239;
	i8 v7241 = v7240+(+40);
	i1 v7242 = *(i1*)(intptr_t)v7241;
	*(i1*)(intptr_t)(ws+3496) = v7242;
	i8 v7243 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(void))(intptr_t)v7243)();

	i8 v7244 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v7244)();

c01_05a9:;

c01_05a5:;

}
	void f200_EmitterReferenceSubroutine(void);
	void f33_Free(void);

// i_end_call workspace at ws+3488 length ws+8
void f293_i_end_call(void) {

	i8 v7245 = (i8)(intptr_t)(ws+40);
	i8 v7246 = *(i8*)(intptr_t)v7245;
	*(i8*)(intptr_t)(ws+3496) = v7246;
	i8 v7247 = (i8)(intptr_t)(ws+80);
	i8 v7248 = *(i8*)(intptr_t)v7247;
	i8 v7249 = v7248+(+8);
	i8 v7250 = *(i8*)(intptr_t)v7249;
	*(i8*)(intptr_t)(ws+3504) = v7250;
	i8 v7251 = (i8)(intptr_t)(f200_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v7251)();

	i8 v7252 = (i8)(intptr_t)(ws+80);
	i8 v7253 = *(i8*)(intptr_t)v7252;
	i8 v7254 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v7254 = v7253;

	i8 v7255 = (i8)(intptr_t)(ws+3488);
	i8 v7256 = *(i8*)(intptr_t)v7255;
	i8 v7257 = v7256+(+16);
	i8 v7258 = *(i8*)(intptr_t)v7257;
	i8 v7259 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v7259 = v7258;

	i8 v7260 = (i8)(intptr_t)(ws+3488);
	i8 v7261 = *(i8*)(intptr_t)v7260;
	*(i8*)(intptr_t)(ws+3680) = v7261;
	i8 v7262 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v7262)();

}
	void f73_StartError(void);
const i1 c01_s0119[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f11_print(void);
	void f11_print(void);
	void f74_EndError(void);

// SymbolRedeclarationError workspace at ws+3392 length ws+0
void f294_SymbolRedeclarationError(void) {

	i8 v7263 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v7263)();

	i8 v7264 = (i8)(intptr_t)c01_s0119;
	*(i8*)(intptr_t)(ws+3696) = v7264;
	i8 v7265 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7265)();

	i8 v7266 = (i8)(intptr_t)(ws+72);
	i8 v7267 = *(i8*)(intptr_t)v7266;
	i8 v7268 = v7267+(+32);
	i8 v7269 = *(i8*)(intptr_t)v7268;
	i8 v7270 = v7269+(+8);
	i8 v7271 = *(i8*)(intptr_t)v7270;
	*(i8*)(intptr_t)(ws+3696) = v7271;
	i8 v7272 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7272)();

	i8 v7273 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v7273)();

}
	void f73_StartError(void);
const i1 c01_s011a[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f11_print(void);
	void f11_print(void);
	void f74_EndError(void);

// WrongNumberOfElementsError workspace at ws+3464 length ws+0
void f295_WrongNumberOfElementsError(void) {

	i8 v7274 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v7274)();

	i8 v7275 = (i8)(intptr_t)c01_s011a;
	*(i8*)(intptr_t)(ws+3696) = v7275;
	i8 v7276 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7276)();

	i8 v7277 = (i8)(intptr_t)(ws+72);
	i8 v7278 = *(i8*)(intptr_t)v7277;
	i8 v7279 = v7278+(+32);
	i8 v7280 = *(i8*)(intptr_t)v7279;
	i8 v7281 = v7280+(+8);
	i8 v7282 = *(i8*)(intptr_t)v7281;
	*(i8*)(intptr_t)(ws+3696) = v7282;
	i8 v7283 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7283)();

	i8 v7284 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v7284)();

}
	void f225_IsArray(void);
	void f238_ArchAlignUp(void);
	void f240_ArchGuessIntType(void);
	void f295_WrongNumberOfElementsError(void);
	void f295_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3392 length ws+16
void f296_CheckEndOfInitialiser(void) {

	i8 v7285 = (i8)(intptr_t)(ws+72);
	i8 v7286 = *(i8*)(intptr_t)v7285;
	*(i8*)(intptr_t)(ws+3496) = v7286;
	i8 v7287 = (i8)(intptr_t)(f225_IsArray);

	((void(*)(void))(intptr_t)v7287)();

	i1 v7288 = *(i1*)(intptr_t)(ws+3504);
	i8 v7289 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v7289 = v7288;

	i8 v7290 = (i8)(intptr_t)(ws+3392);
	i1 v7291 = *(i1*)(intptr_t)v7290;
	i1 v7292 = (i1)+0;
	if (v7291==v7292) goto c01_05ae; else goto c01_05ad;

c01_05ad:;

	i8 v7293 = (i8)(intptr_t)(ws+72);
	i8 v7294 = *(i8*)(intptr_t)v7293;
	i8 v7295 = *(i8*)(intptr_t)v7294;
	i8 v7296 = v7295+(+50);
	i2 v7297 = *(i2*)(intptr_t)v7296;
	i8 v7298 = (i8)(intptr_t)(ws+3394);
	*(i2*)(intptr_t)v7298 = v7297;

	i8 v7299 = (i8)(intptr_t)(ws+1560);
	i2 v7300 = *(i2*)(intptr_t)v7299;
	*(i2*)(intptr_t)(ws+3544) = v7300;
	i8 v7301 = (i8)(intptr_t)(ws+72);
	i8 v7302 = *(i8*)(intptr_t)v7301;
	i8 v7303 = *(i8*)(intptr_t)v7302;
	i8 v7304 = v7303+(+53);
	i1 v7305 = *(i1*)(intptr_t)v7304;
	*(i1*)(intptr_t)(ws+3546) = v7305;
	i8 v7306 = (i8)(intptr_t)(f238_ArchAlignUp);

	((void(*)(void))(intptr_t)v7306)();

	i2 v7307 = *(i2*)(intptr_t)(ws+3548);
	i8 v7308 = (i8)(intptr_t)(ws+3396);
	*(i2*)(intptr_t)v7308 = v7307;

	i8 v7309 = (i8)(intptr_t)(ws+3396);
	i2 v7310 = *(i2*)(intptr_t)v7309;
	i8 v7311 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7311 = v7310;

	i8 v7312 = (i8)(intptr_t)(ws+72);
	i8 v7313 = *(i8*)(intptr_t)v7312;
	i8 v7314 = v7313+(+48);
	i2 v7315 = *(i2*)(intptr_t)v7314;
	i2 v7316 = (i2)+0;
	if (v7315==v7316) goto c01_05b2; else goto c01_05b3;

c01_05b2:;

	i8 v7317 = (i8)(intptr_t)(ws+1560);
	i2 v7318 = *(i2*)(intptr_t)v7317;
	i8 v7319 = (i8)(intptr_t)(ws+72);
	i8 v7320 = *(i8*)(intptr_t)v7319;
	i8 v7321 = v7320+(+48);
	*(i2*)(intptr_t)v7321 = v7318;

	i8 v7322 = (i8)(intptr_t)(ws+1560);
	i2 v7323 = *(i2*)(intptr_t)v7322;
	i8 v7324 = (i8)(intptr_t)(ws+3394);
	i2 v7325 = *(i2*)(intptr_t)v7324;
	i2 v7326 = v7323/v7325;
	i8 v7327 = (i8)(intptr_t)(ws+3398);
	*(i2*)(intptr_t)v7327 = v7326;

	i8 v7328 = (i8)(intptr_t)(ws+3398);
	i2 v7329 = *(i2*)(intptr_t)v7328;
	i8 v7330 = (i8)(intptr_t)(ws+72);
	i8 v7331 = *(i8*)(intptr_t)v7330;
	i8 v7332 = v7331+(+8);
	*(i2*)(intptr_t)v7332 = v7329;

	i4 v7333 = (i4)+0;
	*(i4*)(intptr_t)(ws+3448) = v7333;
	i8 v7334 = (i8)(intptr_t)(ws+3398);
	i2 v7335 = *(i2*)(intptr_t)v7334;
	i2 v7336 = v7335+(-1);
	i4 v7337 = v7336;
	*(i4*)(intptr_t)(ws+3452) = v7337;
	i8 v7338 = (i8)(intptr_t)(f240_ArchGuessIntType);

	((void(*)(void))(intptr_t)v7338)();

	i8 v7339 = *(i8*)(intptr_t)(ws+3456);
	i8 v7340 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7340 = v7339;

	i8 v7341 = (i8)(intptr_t)(ws+3400);
	i8 v7342 = *(i8*)(intptr_t)v7341;
	i8 v7343 = (i8)(intptr_t)(ws+72);
	i8 v7344 = *(i8*)(intptr_t)v7343;
	i8 v7345 = v7344+(+16);
	*(i8*)(intptr_t)v7345 = v7342;

c01_05b3:;

c01_05af:;

	i8 v7346 = (i8)(intptr_t)(ws+1560);
	i2 v7347 = *(i2*)(intptr_t)v7346;
	i8 v7348 = (i8)(intptr_t)(ws+72);
	i8 v7349 = *(i8*)(intptr_t)v7348;
	i8 v7350 = v7349+(+48);
	i2 v7351 = *(i2*)(intptr_t)v7350;
	if (v7347==v7351) goto c01_05b8; else goto c01_05b7;

c01_05b7:;

	i8 v7352 = (i8)(intptr_t)(f295_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7352)();

c01_05b8:;

c01_05b4:;

	goto c01_05aa;

c01_05ae:;

	i8 v7353 = (i8)(intptr_t)(ws+1552);
	i8 v7354 = *(i8*)(intptr_t)v7353;
	i8 v7355 = (i8)+0;
	if (v7354==v7355) goto c01_05bd; else goto c01_05bc;

c01_05bc:;

	i8 v7356 = (i8)(intptr_t)(f295_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7356)();

c01_05bd:;

c01_05b9:;

c01_05aa:;

}
	void f225_IsArray(void);

// GetInitedMember workspace at ws+3464 length ws+17
void f297_GetInitedMember(void) {

	i8 v7357 = (i8)+0;
	i8 v7358 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v7358 = v7357;

	i8 v7359 = (i8)(intptr_t)(ws+72);
	i8 v7360 = *(i8*)(intptr_t)v7359;
	*(i8*)(intptr_t)(ws+3496) = v7360;
	i8 v7361 = (i8)(intptr_t)(f225_IsArray);

	((void(*)(void))(intptr_t)v7361)();

	i1 v7362 = *(i1*)(intptr_t)(ws+3504);
	i8 v7363 = (i8)(intptr_t)(ws+3480);
	*(i1*)(intptr_t)v7363 = v7362;

	i8 v7364 = (i8)(intptr_t)(ws+3480);
	i1 v7365 = *(i1*)(intptr_t)v7364;
	i1 v7366 = (i1)+0;
	if (v7365==v7366) goto c01_05c2; else goto c01_05c1;

c01_05c1:;

	i8 v7367 = (i8)(intptr_t)(ws+72);
	i8 v7368 = *(i8*)(intptr_t)v7367;
	i8 v7369 = *(i8*)(intptr_t)v7368;
	i8 v7370 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7370 = v7369;

	goto c01_05be;

c01_05c2:;

	i8 v7371 = (i8)(intptr_t)(ws+1552);
	i8 v7372 = *(i8*)(intptr_t)v7371;
	i8 v7373 = (i8)+0;
	if (v7372==v7373) goto c01_05c6; else goto c01_05c7;

c01_05c6:;

	i8 v7374 = (i8)+0;
	i8 v7375 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7375 = v7374;

	return;

c01_05c7:;

c01_05c3:;

	i8 v7376 = (i8)(intptr_t)(ws+1552);
	i8 v7377 = *(i8*)(intptr_t)v7376;
	i8 v7378 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v7378 = v7377;

	i8 v7379 = (i8)(intptr_t)(ws+1552);
	i8 v7380 = *(i8*)(intptr_t)v7379;
	i8 v7381 = *(i8*)(intptr_t)v7380;
	i8 v7382 = *(i8*)(intptr_t)v7381;
	i8 v7383 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7383 = v7382;

	i8 v7384 = (i8)(intptr_t)(ws+1552);
	i8 v7385 = *(i8*)(intptr_t)v7384;
	i8 v7386 = v7385+(+24);
	i8 v7387 = *(i8*)(intptr_t)v7386;
	i8 v7388 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v7388 = v7387;

c01_05be:;

}
	void f238_ArchAlignUp(void);
	void f150_MidInit(void);
	void f256_Generate(void);

// AlignTo workspace at ws+3464 length ws+16
void f298_AlignTo(void) {

	i8 v7389 = (i8)(intptr_t)(ws+1562);
	i2 v7390 = *(i2*)(intptr_t)v7389;
	*(i2*)(intptr_t)(ws+3544) = v7390;
	i8 v7391 = (i8)(intptr_t)(ws+3464);
	i1 v7392 = *(i1*)(intptr_t)v7391;
	*(i1*)(intptr_t)(ws+3546) = v7392;
	i8 v7393 = (i8)(intptr_t)(f238_ArchAlignUp);

	((void(*)(void))(intptr_t)v7393)();

	i2 v7394 = *(i2*)(intptr_t)(ws+3548);
	i8 v7395 = (i8)(intptr_t)(ws+3466);
	*(i2*)(intptr_t)v7395 = v7394;

	i8 v7396 = (i8)(intptr_t)(ws+3466);
	i2 v7397 = *(i2*)(intptr_t)v7396;
	i8 v7398 = (i8)(intptr_t)(ws+3468);
	*(i2*)(intptr_t)v7398 = v7397;

c01_05c8:;

	i8 v7399 = (i8)(intptr_t)(ws+1562);
	i2 v7400 = *(i2*)(intptr_t)v7399;
	i8 v7401 = (i8)(intptr_t)(ws+3468);
	i2 v7402 = *(i2*)(intptr_t)v7401;
	if (v7400==v7402) goto c01_05cd; else goto c01_05cc;

c01_05cc:;

	i1 v7403 = (i1)+1;
	*(i1*)(intptr_t)(ws+3480) = v7403;
	i4 v7404 = (i4)+0;
	*(i4*)(intptr_t)(ws+3484) = v7404;
	i8 v7405 = (i8)(intptr_t)(f150_MidInit);

	((void(*)(void))(intptr_t)v7405)();

	i8 v7406 = *(i8*)(intptr_t)(ws+3488);
	i8 v7407 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7407 = v7406;

	i8 v7408 = (i8)(intptr_t)(ws+3472);
	i8 v7409 = *(i8*)(intptr_t)v7408;
	*(i8*)(intptr_t)(ws+3488) = v7409;
	i8 v7410 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7410)();

	i8 v7411 = (i8)(intptr_t)(ws+1560);
	i2 v7412 = *(i2*)(intptr_t)v7411;
	i2 v7413 = v7412+(+1);
	i8 v7414 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7414 = v7413;

	i8 v7415 = (i8)(intptr_t)(ws+1562);
	i2 v7416 = *(i2*)(intptr_t)v7415;
	i2 v7417 = v7416+(+1);
	i8 v7418 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v7418 = v7417;

	goto c01_05c8;

c01_05cd:;

}
const i1 c01_s011b[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f75_SimpleError(void);

// CheckForOverlaps workspace at ws+3464 length ws+8
void f299_CheckForOverlaps(void) {

	i8 v7419 = (i8)(intptr_t)(ws+3464);
	i8 v7420 = *(i8*)(intptr_t)v7419;
	i8 v7421 = (i8)+0;
	if (v7420==v7421) goto c01_05d1; else goto c01_05d2;

c01_05d1:;

	return;

c01_05d2:;

c01_05ce:;

	i8 v7422 = (i8)(intptr_t)(ws+3464);
	i8 v7423 = *(i8*)(intptr_t)v7422;
	i8 v7424 = *(i8*)(intptr_t)v7423;
	i8 v7425 = v7424+(+24);
	i2 v7426 = *(i2*)(intptr_t)v7425;
	i8 v7427 = (i8)(intptr_t)(ws+1560);
	i2 v7428 = *(i2*)(intptr_t)v7427;
	if (v7426<v7428) goto c01_05d6; else goto c01_05d7;

c01_05d6:;

	i8 v7429 = (i8)(intptr_t)c01_s011b;
	*(i8*)(intptr_t)(ws+3648) = v7429;
	i8 v7430 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v7430)();

c01_05d7:;

c01_05d3:;

}
	void f297_GetInitedMember(void);
	void f295_WrongNumberOfElementsError(void);
	void f298_AlignTo(void);
	void f299_CheckForOverlaps(void);

// GetInitedMemberChecked workspace at ws+3448 length ws+16
void f300_GetInitedMemberChecked(void) {

	i8 v7431 = (i8)(intptr_t)(f297_GetInitedMember);

	((void(*)(void))(intptr_t)v7431)();

	i8 v7432 = *(i8*)(intptr_t)(ws+3472);
	i8 v7433 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v7433 = v7432;

	i8 v7434 = *(i8*)(intptr_t)(ws+3464);
	i8 v7435 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7435 = v7434;

	i8 v7436 = (i8)(intptr_t)(ws+3456);
	i8 v7437 = *(i8*)(intptr_t)v7436;
	i8 v7438 = (i8)+0;
	if (v7437==v7438) goto c01_05db; else goto c01_05dc;

c01_05db:;

	i8 v7439 = (i8)(intptr_t)(f295_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7439)();

c01_05dc:;

c01_05d8:;

	i8 v7440 = (i8)(intptr_t)(ws+3456);
	i8 v7441 = *(i8*)(intptr_t)v7440;
	i8 v7442 = v7441+(+53);
	i1 v7443 = *(i1*)(intptr_t)v7442;
	*(i1*)(intptr_t)(ws+3464) = v7443;
	i8 v7444 = (i8)(intptr_t)(f298_AlignTo);

	((void(*)(void))(intptr_t)v7444)();

	i8 v7445 = (i8)(intptr_t)(ws+3448);
	i8 v7446 = *(i8*)(intptr_t)v7445;
	*(i8*)(intptr_t)(ws+3464) = v7446;
	i8 v7447 = (i8)(intptr_t)(f299_CheckForOverlaps);

	((void(*)(void))(intptr_t)v7447)();

}
static data f2___main_s05dd[] = {




	{ .i1 = { 0x15,0x02,0xab,0x01,0xff,0x01,0xd0,0x00}},




	{ .i1 = { 0x5e,0x00,0xc6,0x01,0x08,0x00,0x60,0x00}},




	{ .i1 = { 0x68,0x00,0x48,0x01,0xba,0x00,0xb9,0x00}},




	{ .i1 = { 0x6e,0x00,0x3e,0x01,0x37,0x00,0xaf,0x00}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x3e,0x02,0x81,0x01}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0xb2,0x01,0x4d,0x00}},




	{ .i1 = { 0x69,0x00,0x56,0x00,0x3e,0x02,0x35,0x00}},




	{ .i1 = { 0x62,0x00,0x40,0x01,0xbb,0x00,0x28,0x02}},




	{ .i1 = { 0x18,0x00,0x7e,0x01,0x58,0x01,0x49,0x00}},




	{ .i1 = { 0x51,0x00,0x49,0x01,0xd9,0x00,0xc5,0x00}},




	{ .i1 = { 0x50,0x00,0x73,0x01,0xb4,0x00,0xbf,0x00}},




	{ .i1 = { 0x53,0x00,0x5a,0x01,0xa4,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x54,0x02,0xa8,0x00,0x7f,0x01}},




	{ .i1 = { 0xa7,0x00,0x34,0x00,0x36,0x00,0x72,0x00}},




	{ .i1 = { 0xd7,0x00,0xa9,0x00,0xa8,0x00,0xdf,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x99,0x01}},




	{ .i1 = { 0xcf,0x00,0x1f,0x00,0xac,0x00,0xab,0x01}},




	{ .i1 = { 0xd8,0x00,0xd0,0x00,0xdb,0x00,0x07,0x02}},




	{ .i1 = { 0xff,0x01,0x60,0x00,0x61,0x00,0x4e,0x01}},




	{ .i1 = { 0xb3,0x00,0x96,0x00,0x6e,0x00,0x3e,0x01}},




	{ .i1 = { 0x37,0x00,0x4f,0x00,0x11,0x00,0x28,0x00}},




	{ .i1 = { 0x4d,0x00,0x07,0x02,0x52,0x00,0xdc,0x00}},




	{ .i1 = { 0xb2,0x01,0x4b,0x00,0x31,0x00,0x56,0x00}},




	{ .i1 = { 0xb8,0x00,0x35,0x00,0x62,0x00,0x40,0x01}},




	{ .i1 = { 0x07,0x02,0x72,0x00,0x84,0x00,0x7e,0x01}},




	{ .i1 = { 0x58,0x01,0x93,0x00,0x51,0x00,0xa4,0x00}},




	{ .i1 = { 0xae,0x00,0xc5,0x00,0x50,0x00,0x73,0x01}},




	{ .i1 = { 0xb4,0x00,0xbf,0x00,0x53,0x00,0x5a,0x01}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xff,0x01,0xff,0x01}},




	{ .i1 = { 0x61,0x00,0x61,0x00,0x16,0x00,0x14,0x00}},




	{ .i1 = { 0x9c,0x00,0x18,0x02,0xb7,0x00,0x3b,0x00}},




	{ .i1 = { 0x7e,0x01,0xad,0x01,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0xbe,0x00,0xcf,0x00,0x1f,0x00}},




	{ .i1 = { 0xac,0x01,0xab,0x01,0xd8,0x00,0xd0,0x00}},




	{ .i1 = { 0x99,0x00,0x44,0x00,0x18,0x00,0x60,0x00}},




	{ .i1 = { 0x8f,0x01,0x07,0x02,0xd2,0x00,0x39,0x01}},




	{ .i1 = { 0x6e,0x00,0x3e,0x01,0x37,0x00,0xbe,0x00}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0xcb,0x00,0x9b,0x00}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0xb2,0x01,0x07,0x02}},




	{ .i1 = { 0x7f,0x01,0x56,0x00,0xb9,0x01,0x35,0x00}},




	{ .i1 = { 0x62,0x00,0x40,0x01,0x45,0x00,0x72,0x00}},




	{ .i1 = { 0x73,0x00,0x7e,0x01,0x58,0x01,0x93,0x00}},




	{ .i1 = { 0x51,0x00,0xce,0x00,0x07,0x02,0xc5,0x00}},




	{ .i1 = { 0x50,0x00,0x73,0x01,0xb4,0x00,0xbf,0x00}},




	{ .i1 = { 0x53,0x00,0x5a,0x01,0xdb,0x00,0xdb,0x00}},




	{ .i1 = { 0xff,0x01,0xff,0x01,0x61,0x00,0x61,0x00}},




	{ .i1 = { 0x4f,0x02,0x40,0x00,0x58,0x00,0x72,0x00}},




	{ .i1 = { 0xc9,0x00,0x1c,0x02,0x9a,0x00,0xe1,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x7d,0x01}},




	{ .i1 = { 0xcf,0x00,0x1f,0x00,0xda,0x00,0xab,0x01}},




	{ .i1 = { 0xd8,0x00,0xd0,0x00,0xdb,0x00,0x92,0x00}},




	{ .i1 = { 0xff,0x01,0x60,0x00,0x61,0x00,0x12,0x00}},




	{ .i1 = { 0xd3,0x00,0x07,0x02,0x6e,0x00,0x3e,0x01}},




	{ .i1 = { 0x37,0x00,0x4a,0x00,0x11,0x00,0x28,0x00}},




	{ .i1 = { 0x18,0x00,0x07,0x02,0x52,0x00,0xdc,0x00}},




	{ .i1 = { 0xb2,0x01,0xa1,0x01,0x07,0x02,0x56,0x00}},




	{ .i1 = { 0xbe,0x00,0x35,0x00,0x62,0x00,0x40,0x01}},




	{ .i1 = { 0x2f,0x02,0x7c,0x00,0x7e,0x01,0x7e,0x01}},




	{ .i1 = { 0x58,0x01,0xb8,0x00,0x51,0x00,0x85,0x00}},




	{ .i1 = { 0xd9,0x00,0xc5,0x00,0x50,0x00,0x73,0x01}},




	{ .i1 = { 0xb4,0x00,0xbf,0x00,0x53,0x00,0x5a,0x01}},




	{ .i1 = { 0xdb,0x00,0x2d,0x00,0xff,0x01,0x59,0x00}},




	{ .i1 = { 0x61,0x00,0xa6,0x00,0xdb,0x00,0xb2,0x00}},




	{ .i1 = { 0xff,0x01,0x71,0x00,0x61,0x00,0x46,0x02}},




	{ .i1 = { 0x6a,0x00,0x90,0x00,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0x23,0x02,0xcf,0x00,0x1f,0x00}},




	{ .i1 = { 0x3f,0x02,0xab,0x01,0xd8,0x00,0xd0,0x00}},




	{ .i1 = { 0xdb,0x00,0x86,0x01,0xff,0x01,0x60,0x00}},




	{ .i1 = { 0x61,0x00,0x94,0x00,0x94,0x00,0x0b,0x00}},




	{ .i1 = { 0x6e,0x00,0x3e,0x01,0x37,0x00,0x94,0x01}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x0b,0x02,0x10,0x02}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0xb2,0x01,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0x56,0x00,0x27,0x00,0x35,0x00}},




	{ .i1 = { 0x62,0x00,0x40,0x01,0x4c,0x00,0x7c,0x00}},




	{ .i1 = { 0x7e,0x01,0x7e,0x01,0x58,0x01,0xa8,0x01}},




	{ .i1 = { 0x51,0x00,0x85,0x00,0x22,0x02,0xc5,0x00}},




	{ .i1 = { 0x50,0x00,0x73,0x01,0xb4,0x00,0xbf,0x00}},




	{ .i1 = { 0x53,0x00,0x5a,0x01,0xdb,0x00,0x1d,0x00}},




	{ .i1 = { 0xff,0x01,0x0e,0x00,0x61,0x00,0xd4,0x00}},




	{ .i1 = { 0xdb,0x00,0x94,0x01,0xff,0x01,0x72,0x00}},




	{ .i1 = { 0x61,0x00,0xfe,0x01,0x10,0x02,0xd1,0x00}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x64,0x00}},




	{ .i1 = { 0xcf,0x00,0x1f,0x00,0x42,0x00,0xab,0x01}},




	{ .i1 = { 0xd8,0x00,0xd0,0x00,0xdb,0x00,0x66,0x00}},




	{ .i1 = { 0xff,0x01,0x60,0x00,0x61,0x00,0x95,0x00}},




	{ .i1 = { 0x95,0x00,0x0b,0x00,0x6e,0x00,0x3e,0x01}},




	{ .i1 = { 0x37,0x00,0x27,0x02,0x11,0x00,0x28,0x00}},




	{ .i1 = { 0xfd,0x01,0x10,0x02,0x52,0x00,0xdc,0x00}},




	{ .i1 = { 0xb2,0x01,0xaa,0x00,0x41,0x01,0x56,0x00}},




	{ .i1 = { 0x10,0x00,0x35,0x00,0x62,0x00,0x40,0x01}},




	{ .i1 = { 0x01,0x00,0x72,0x00,0x7c,0x00,0x7e,0x01}},




	{ .i1 = { 0x58,0x01,0x91,0x00,0x51,0x00,0x0e,0x00}},




	{ .i1 = { 0x85,0x00,0xc5,0x00,0x50,0x00,0x73,0x01}},




	{ .i1 = { 0xb4,0x00,0xbf,0x00,0x53,0x00,0x5a,0x01}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xff,0x01,0xff,0x01}},




	{ .i1 = { 0x61,0x00,0x61,0x00,0xad,0x00,0xdb,0x00}},




	{ .i1 = { 0x74,0x00,0xff,0x01,0xc1,0x00,0x61,0x00}},




	{ .i1 = { 0x16,0x00,0x14,0x00,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0xc7,0x00,0xcf,0x00,0x1f,0x00}},




	{ .i1 = { 0x59,0x01,0xc3,0x00,0xd8,0x00,0xdb,0x00}},




	{ .i1 = { 0xd9,0x00,0xff,0x01,0x84,0x00,0x61,0x00}},




	{ .i1 = { 0x2c,0x02,0xb9,0x00,0x38,0x00,0x51,0x02}},




	{ .i1 = { 0x0b,0x00,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xb1,0x00,0x40,0x00,0x58,0x00,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xdb,0x00,0xd9,0x00,0xff,0x01}},




	{ .i1 = { 0x78,0x01,0x61,0x00,0x16,0x00,0x14,0x00}},




	{ .i1 = { 0x38,0x00,0x19,0x02,0x12,0x02,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0x18,0x00,0x65,0x00}},




	{ .i1 = { 0x18,0x00,0x34,0x00,0x36,0x00,0x7c,0x01}},




	{ .i1 = { 0xa3,0x00,0xbb,0x00,0x28,0x02,0x85,0x00}},




	{ .i1 = { 0x03,0x00,0x30,0x00,0x32,0x00,0x23,0x00}},




	{ .i1 = { 0x20,0x00,0x21,0x00,0x22,0x00,0x25,0x00}},




	{ .i1 = { 0x24,0x00,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc6,0x00,0xdb,0x00,0x97,0x00}},




	{ .i1 = { 0xff,0x01,0x22,0x02,0x61,0x00,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0x23,0x00,0x20,0x00,0x21,0x00}},




	{ .i1 = { 0x22,0x00,0x25,0x00,0x24,0x00,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0x41,0x02}},




	{ .i1 = { 0x67,0x00,0x04,0x00,0x76,0x00,0x70,0x00}},




	{ .i1 = { 0x6f,0x00,0x17,0x00,0xbb,0x00,0x28,0x02}},




	{ .i1 = { 0x98,0x00,0x44,0x02,0x6c,0x00,0x0d,0x00}},




	{ .i1 = { 0x6b,0x00,0x43,0x00,0x57,0x00,0xd9,0x00}},




	{ .i1 = { 0x05,0x00,0xdb,0x00,0x09,0x00,0xff,0x01}},




	{ .i1 = { 0x4e,0x00,0x5f,0x00,0x0a,0x00,0xc2,0x00}},




	{ .i1 = { 0x2d,0x00,0x63,0x00,0xd9,0x00,0x02,0x00}},




	{ .i1 = { 0x0f,0x00,0x85,0x00,0x06,0x00,0x07,0x00}},




	{ .i1 = { 0x38,0x00,0x5c,0x00,0x5b,0x00,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0x4d,0x01,0x18,0x00}},




	{ .i1 = { 0x22,0x02,0x34,0x00,0x36,0x00,0xd6,0x00}},




	{ .i1 = { 0xdb,0x00,0xab,0x00,0xff,0x01,0x41,0x02}},




	{ .i1 = { 0x61,0x00,0x3e,0x00,0x76,0x00,0x70,0x00}},




	{ .i1 = { 0x6f,0x00,0x17,0x00,0x4c,0x01,0x3d,0x00}},




	{ .i1 = { 0x0c,0x00,0xcd,0x00,0x6c,0x00,0x0d,0x00}},




	{ .i1 = { 0x6b,0x00,0xaa,0x01,0x39,0x00,0x28,0x00}},




	{ .i1 = { 0xa5,0x01,0xdb,0x00,0xa3,0x01,0xff,0x01}},




	{ .i1 = { 0x3f,0x00,0x5f,0x00,0x41,0x02,0xc2,0x00}},




	{ .i1 = { 0x19,0x00,0x76,0x00,0x70,0x00,0x6f,0x00}},




	{ .i1 = { 0x17,0x00,0x4b,0x00,0x31,0x00,0x7e,0x01}},




	{ .i1 = { 0x58,0x01,0x5c,0x00,0x5b,0x00,0x6b,0x00}},




	{ .i1 = { 0x46,0x00,0x9e,0x01,0xb0,0x00,0x73,0x01}},




	{ .i1 = { 0xdb,0x00,0x41,0x00,0xff,0x01,0x5a,0x01}},




	{ .i1 = { 0x5f,0x00,0xab,0x00,0xc2,0x00,0x95,0x01}},




	{ .i1 = { 0x5a,0x00,0x3e,0x00,0x47,0x00,0xbb,0x01}},




	{ .i1 = { 0x54,0x00,0xba,0x01,0x5d,0x00,0xb5,0x00}},




	{ .i1 = { 0x5c,0x00,0x5b,0x00,0x41,0x02,0x91,0x01}},




	{ .i1 = { 0x7d,0x00,0x76,0x00,0x70,0x00,0x6f,0x00}},




	{ .i1 = { 0x17,0x00,0x9a,0x01,0xbc,0x00,0xbd,0x00}},




	{ .i1 = { 0xab,0x00,0xb8,0x01,0x55,0x00,0x6b,0x00}},




	{ .i1 = { 0x3e,0x00,0x3c,0x00,0x84,0x01,0xdb,0x00}},




	{ .i1 = { 0xdb,0x00,0xff,0x01,0xff,0x01,0x61,0x00}},




	{ .i1 = { 0x5f,0x00,0x48,0x00,0xc2,0x00,0x41,0x02}},




	{ .i1 = { 0x83,0x01,0xc8,0x00,0x76,0x00,0x70,0x00}},




	{ .i1 = { 0x6f,0x00,0x17,0x00,0xc4,0x00,0xb6,0x00}},




	{ .i1 = { 0x5c,0x00,0x5b,0x00,0x75,0x01,0x85,0x00}},




	{ .i1 = { 0x6b,0x00,0x1a,0x00,0x8b,0x01,0x1b,0x00}},




	{ .i1 = { 0x4a,0x01,0xdb,0x00,0xca,0x00,0xff,0x01}},




	{ .i1 = { 0xab,0x00,0x5f,0x00,0xcc,0x00,0xc2,0x00}},




	{ .i1 = { 0x3e,0x00,0xd5,0x00,0xdb,0x00,0x7e,0x00}},




	{ .i1 = { 0xff,0x01,0x44,0x01,0x61,0x00,0x6d,0x00}},




	{ .i1 = { 0xc0,0x00,0x5c,0x00,0x5b,0x00,0x37,0x00}},




	{ .i1 = { 0x43,0x01,0x39,0x00,0x28,0x00,0x14,0x00}},




	{ .i1 = { 0x42,0x01,0x7f,0x00,0xdb,0x00,0x3f,0x01}},




	{ .i1 = { 0xff,0x01,0xab,0x00,0x61,0x00,0x3d,0x01}},




	{ .i1 = { 0x35,0x00,0x3e,0x00,0x80,0x00,0x79,0x01}},




	{ .i1 = { 0xa9,0x01,0x76,0x01,0x7e,0x01,0x58,0x01}},




	{ .i1 = { 0xdb,0x00,0x51,0x00,0xff,0x01,0x1c,0x00}},




	{ .i1 = { 0x61,0x00,0x50,0x00,0x73,0x01,0x1e,0x00}},




	{ .i1 = { 0x2b,0x00,0xdb,0x00,0x5a,0x01,0xff,0x01}},




	{ .i1 = { 0x72,0x01,0x61,0x00,0x15,0x02,0x81,0x00}},




	{ .i1 = { 0x37,0x00,0x13,0x00,0x15,0x00,0x28,0x00}},




	{ .i1 = { 0xc7,0x01,0x38,0x01,0x82,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0xc7,0x01,0x35,0x00,0xdb,0x00,0xc7,0x01}},




	{ .i1 = { 0xff,0x01,0xd8,0x00,0x61,0x00,0x7e,0x01}},




	{ .i1 = { 0x58,0x01,0xdb,0x00,0x51,0x00,0xff,0x01}},




	{ .i1 = { 0xc7,0x01,0x61,0x00,0x50,0x00,0x73,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0x5a,0x01}},




	{ .i1 = { 0x87,0x01,0xc7,0x01,0x83,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x75,0x00,0x37,0x00,0xc7,0x01}},




	{ .i1 = { 0x39,0x00,0x28,0x00,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0xdb,0x00,0xc7,0x01,0xff,0x01}},




	{ .i1 = { 0xc7,0x01,0x61,0x00,0xd8,0x00,0x35,0x00}},




	{ .i1 = { 0xdb,0x00,0xc7,0x01,0xff,0x01,0xc7,0x01}},




	{ .i1 = { 0x61,0x00,0x7e,0x01,0x58,0x01,0xc7,0x01}},




	{ .i1 = { 0x51,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x50,0x00,0x73,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x5a,0x01,0xa5,0x00,0xc7,0x01}},




	{ .i1 = { 0x77,0x00,0xc7,0x01,0xc7,0x01,0x37,0x00}},




	{ .i1 = { 0xc7,0x01,0x39,0x00,0x28,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x78,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0xdb,0x00}},




	{ .i1 = { 0x35,0x00,0xff,0x01,0x9d,0x00,0x61,0x00}},




	{ .i1 = { 0xd8,0x00,0xc7,0x01,0x7e,0x01,0x58,0x01}},




	{ .i1 = { 0xdb,0x00,0x51,0x00,0xff,0x01,0xc7,0x01}},




	{ .i1 = { 0x61,0x00,0x50,0x00,0x73,0x01,0x7a,0x01}},




	{ .i1 = { 0xc7,0x01,0xdb,0x00,0x5a,0x01,0xff,0x01}},




	{ .i1 = { 0xc7,0x01,0x61,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x37,0x00,0xc7,0x01,0x39,0x00,0x28,0x00}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x9e,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0xc7,0x01,0x35,0x00,0xc7,0x01,0x9f,0x00}},




	{ .i1 = { 0xc7,0x01,0xd8,0x00,0xa0,0x00,0x7e,0x01}},




	{ .i1 = { 0x58,0x01,0xdb,0x00,0x51,0x00,0xff,0x01}},




	{ .i1 = { 0xc7,0x01,0x61,0x00,0x50,0x00,0x73,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xdb,0x00,0x5a,0x01}},




	{ .i1 = { 0xff,0x01,0xdb,0x00,0x61,0x00,0xff,0x01}},




	{ .i1 = { 0xc7,0x01,0x61,0x00,0x41,0x02,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x76,0x00,0x70,0x00,0x6f,0x00}},




	{ .i1 = { 0x17,0x00,0xc7,0x01,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0xc7,0x01,0xc7,0x01,0x6b,0x00}},




	{ .i1 = { 0x79,0x00,0xc7,0x01,0xd8,0x00,0xc7,0x01}},




	{ .i1 = { 0xdb,0x00,0xc7,0x01,0xff,0x01,0xc7,0x01}},




	{ .i1 = { 0x5f,0x00,0xc7,0x01,0xc2,0x00,0x37,0x00}},




	{ .i1 = { 0xc7,0x01,0x39,0x00,0x28,0x00,0xdb,0x00}},




	{ .i1 = { 0xc7,0x01,0xff,0x01,0xc7,0x01,0x61,0x00}},




	{ .i1 = { 0x5c,0x00,0x5b,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x35,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x7e,0x01,0x58,0x01}},




	{ .i1 = { 0xab,0x00,0x51,0x00,0xc7,0x01,0x59,0x01}},




	{ .i1 = { 0x3e,0x00,0x50,0x00,0x73,0x01,0xd9,0x00}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x5a,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x38,0x00,0xc7,0x01,0x88,0x00}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xc7,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xdb,0x00,0xd9,0x00}},




	{ .i1 = { 0xff,0x01,0xd8,0x00,0x61,0x00,0x89,0x00}},




	{ .i1 = { 0xc7,0x01,0x38,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xdb,0x00,0xc7,0x01}},




	{ .i1 = { 0xff,0x01,0xc7,0x01,0x61,0x00,0xd9,0x00}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc7,0x01,0x38,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x3c,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xc7,0x01,0x86,0x00}},




	{ .i1 = { 0xa1,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x4b,0x01,0xdb,0x00,0xdb,0x00}},




	{ .i1 = { 0xff,0x01,0xff,0x01,0x61,0x00,0x61,0x00}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x87,0x00,0xc7,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0x26,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xd9,0x00,0xc7,0x01}},




	{ .i1 = { 0x8e,0x00,0xdb,0x00,0xc7,0x01,0xff,0x01}},




	{ .i1 = { 0x38,0x00,0x61,0x00,0xc7,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x34,0x00,0x36,0x00,0xdb,0x00}},




	{ .i1 = { 0xd9,0x00,0xff,0x01,0x8f,0x00,0x61,0x00}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x38,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x3b,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xdb,0x00,0xc7,0x01,0xff,0x01}},




	{ .i1 = { 0xa2,0x00,0x61,0x00,0xc7,0x01,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xdb,0x00}},




	{ .i1 = { 0xc7,0x01,0xff,0x01,0xc7,0x01,0x61,0x00}},




	{ .i1 = { 0xc7,0x01,0x30,0x00,0x32,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x8d,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc7,0x01,0xc7,0x01,0x70,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xd9,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xdb,0x00,0xc7,0x01,0xff,0x01}},




	{ .i1 = { 0x38,0x00,0x61,0x00,0xc7,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x34,0x00,0x36,0x00,0x71,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xd9,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x38,0x00,0xc7,0x01,0x8c,0x00,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x34,0x00,0x36,0x00,0xc7,0x01}},




	{ .i1 = { 0x8b,0x00,0x7a,0x00,0xc7,0x01,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xdb,0x00,0xc7,0x01,0xff,0x01}},




	{ .i1 = { 0xc7,0x01,0x61,0x00,0xc7,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xdb,0x00}},




	{ .i1 = { 0xdb,0x00,0xff,0x01,0xff,0x01,0x61,0x00}},




	{ .i1 = { 0x61,0x00,0xc7,0x01,0x8a,0x00,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xdb,0x00,0xc7,0x01,0xff,0x01}},




	{ .i1 = { 0xd9,0x00,0x61,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x7b,0x00,0xc7,0x01,0x38,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x3a,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xc7,0x01,0xd9,0x00,0xdb,0x00}},




	{ .i1 = { 0xc7,0x01,0xff,0x01,0xc7,0x01,0x61,0x00}},




	{ .i1 = { 0x38,0x00,0xc7,0x01,0xc7,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x34,0x00,0x36,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x30,0x00,0x32,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xd9,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x38,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xc7,0x01,0xd9,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0x38,0x00,0xc7,0x01,0xc7,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x34,0x00,0x36,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0x32,0x00,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0xc7,0x01}},




	{ .i1 = { 0xc7,0x01,0xc7,0x01,0xc7,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00}},
};
static data f2___main_s05de[] = {








	{ .i1 = { 0x5a,0x01,0x5c,0x03,0x5e,0x46,0x47,0x07}},








	{ .i1 = { 0x68,0x09,0x6e,0x6f,0x0c,0x0d,0x0e,0x75}},








	{ .i1 = { 0x10,0x11,0x5c,0x04,0x14,0x15,0x16,0x10}},








	{ .i1 = { 0x66,0x19,0x5c,0x1b,0x1c,0x1d,0x6c,0x6d}},








	{ .i1 = { 0x11,0x21,0x22,0x11,0x24,0x25,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x2c,0x2d,0x21,0x11}},








	{ .i1 = { 0x12,0x7b,0x7c,0x21,0x4a,0x17,0x18,0x4b}},








	{ .i1 = { 0x26,0x7b,0x7c,0x4f,0x3c,0x3d,0x3e,0x04}},








	{ .i1 = { 0x40,0x41,0x4a,0x01,0x44,0x03,0x5a,0x5d}},








	{ .i1 = { 0x5c,0x07,0x5e,0x04,0x0a,0x4a,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x3f,0x10,0x11,0x10,0x5d,0x14,0x15}},








	{ .i1 = { 0x16,0x3b,0x3c,0x19,0x21,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x5d,0x4b,0x4b,0x21,0x22,0x4f,0x24,0x51}},








	{ .i1 = { 0x23,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d}},








	{ .i1 = { 0x5a,0x5a,0x5c,0x5c,0x5e,0x5e,0x2f,0x30}},








	{ .i1 = { 0x61,0x62,0x4a,0x02,0x21,0x22,0x3c,0x3d}},








	{ .i1 = { 0x3e,0x0b,0x40,0x41,0x29,0x01,0x44,0x03}},








	{ .i1 = { 0x4a,0x45,0x11,0x07,0x16,0x5d,0x0a,0x16}},








	{ .i1 = { 0x0c,0x0d,0x0e,0x0b,0x10,0x11,0x0a,0x4a}},








	{ .i1 = { 0x14,0x15,0x16,0x5d,0x21,0x19,0x16,0x1b}},








	{ .i1 = { 0x1c,0x1d,0x06,0x4b,0x4b,0x21,0x22,0x4f}},








	{ .i1 = { 0x24,0x51,0x5d,0x27,0x28,0x29,0x2a,0x2b}},








	{ .i1 = { 0x2c,0x2d,0x5a,0x5a,0x5c,0x5c,0x5e,0x5e}},








	{ .i1 = { 0x72,0x73,0x74,0x4b,0x63,0x64,0x4a,0x4f}},








	{ .i1 = { 0x3c,0x3d,0x3e,0x21,0x40,0x41,0x4a,0x01}},








	{ .i1 = { 0x44,0x03,0x5a,0x4a,0x5c,0x07,0x5e,0x43}},








	{ .i1 = { 0x0a,0x5d,0x0c,0x0d,0x0e,0x10,0x10,0x11}},








	{ .i1 = { 0x11,0x5d,0x14,0x15,0x16,0x16,0x5d,0x19}},








	{ .i1 = { 0x0b,0x1b,0x1c,0x1d,0x5d,0x4b,0x21,0x21}},








	{ .i1 = { 0x22,0x21,0x24,0x4b,0x08,0x27,0x28,0x29}},








	{ .i1 = { 0x2a,0x2b,0x2c,0x2d,0x5a,0x11,0x5c,0x70}},








	{ .i1 = { 0x5e,0x59,0x5a,0x71,0x5c,0x4b,0x5e,0x57}},








	{ .i1 = { 0x58,0x4f,0x3c,0x3d,0x3e,0x5c,0x40,0x41}},








	{ .i1 = { 0x00,0x01,0x44,0x03,0x5a,0x04,0x5c,0x07}},








	{ .i1 = { 0x5e,0x77,0x78,0x79,0x0c,0x0d,0x0e,0x42}},








	{ .i1 = { 0x10,0x11,0x5b,0x5c,0x14,0x15,0x16,0x3b}},








	{ .i1 = { 0x3c,0x19,0x02,0x1b,0x1c,0x1d,0x06,0x4b}},








	{ .i1 = { 0x21,0x21,0x22,0x20,0x24,0x4b,0x49,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x2c,0x2d,0x5a,0x2e}},








	{ .i1 = { 0x5c,0x2e,0x5e,0x59,0x5a,0x42,0x5c,0x4b}},








	{ .i1 = { 0x5e,0x5b,0x5c,0x4f,0x3c,0x3d,0x3e,0x68}},








	{ .i1 = { 0x40,0x41,0x65,0x01,0x44,0x03,0x5a,0x68}},








	{ .i1 = { 0x5c,0x07,0x5e,0x77,0x78,0x79,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x6d,0x10,0x11,0x5b,0x5c,0x14,0x15}},








	{ .i1 = { 0x16,0x20,0x0d,0x19,0x10,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x47,0x4b,0x4b,0x21,0x22,0x4f,0x24,0x2e}},








	{ .i1 = { 0x4b,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d}},








	{ .i1 = { 0x5a,0x5a,0x5c,0x5c,0x5e,0x5e,0x59,0x5a}},








	{ .i1 = { 0x4b,0x5c,0x5f,0x5e,0x2f,0x30,0x3c,0x3d}},








	{ .i1 = { 0x3e,0x49,0x40,0x41,0x04,0x5f,0x44,0x5a}},








	{ .i1 = { 0x08,0x5c,0x4b,0x5e,0x6e,0x6f,0x0e,0x78}},








	{ .i1 = { 0x79,0x11,0x12,0x13,0x72,0x73,0x74,0x17}},








	{ .i1 = { 0x18,0x5a,0x08,0x5c,0x05,0x5e,0x2f,0x30}},








	{ .i1 = { 0x0e,0x62,0x5f,0x11,0x12,0x13,0x11,0x66}},








	{ .i1 = { 0x11,0x17,0x18,0x16,0x49,0x6c,0x6d,0x4b}},








	{ .i1 = { 0x47,0x31,0x32,0x33,0x34,0x35,0x36,0x37}},








	{ .i1 = { 0x38,0x39,0x3a,0x3b,0x3c,0x59,0x5a,0x67}},








	{ .i1 = { 0x5c,0x49,0x5e,0x31,0x32,0x33,0x34,0x35}},








	{ .i1 = { 0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x48}},








	{ .i1 = { 0x66,0x47,0x4b,0x4c,0x4d,0x4e,0x6c,0x6d}},








	{ .i1 = { 0x67,0x52,0x53,0x54,0x55,0x65,0x67,0x08}},








	{ .i1 = { 0x47,0x5a,0x47,0x5c,0x56,0x5e,0x47,0x60}},








	{ .i1 = { 0x11,0x1a,0x08,0x47,0x50,0x4b,0x47,0x47}},








	{ .i1 = { 0x0e,0x6a,0x6b,0x11,0x12,0x13,0x06,0x11}},








	{ .i1 = { 0x49,0x17,0x18,0x59,0x5a,0x76,0x5c,0x48}},








	{ .i1 = { 0x5e,0x7a,0x4b,0x4c,0x4d,0x4e,0x06,0x2e}},








	{ .i1 = { 0x1f,0x52,0x53,0x54,0x55,0x16,0x10,0x11}},








	{ .i1 = { 0x16,0x5a,0x04,0x5c,0x65,0x5e,0x48,0x60}},








	{ .i1 = { 0x10,0x4b,0x4c,0x4d,0x4e,0x3b,0x3c,0x21}},








	{ .i1 = { 0x22,0x6a,0x6b,0x55,0x06,0x14,0x0a,0x29}},








	{ .i1 = { 0x5a,0x42,0x5c,0x2d,0x5e,0x76,0x60,0x19}},








	{ .i1 = { 0x19,0x7a,0x06,0x16,0x2e,0x16,0x06,0x69}},








	{ .i1 = { 0x6a,0x6b,0x48,0x04,0x4b,0x4b,0x4c,0x4d}},








	{ .i1 = { 0x4e,0x04,0x29,0x10,0x76,0x16,0x19,0x55}},








	{ .i1 = { 0x7a,0x02,0x16,0x5a,0x5a,0x5c,0x5c,0x5e}},








	{ .i1 = { 0x5e,0x42,0x60,0x48,0x16,0x64,0x4b,0x4c}},








	{ .i1 = { 0x4d,0x4e,0x21,0x69,0x6a,0x6b,0x16,0x4b}},








	{ .i1 = { 0x55,0x02,0x04,0x2e,0x16,0x5a,0x41,0x5c}},








	{ .i1 = { 0x76,0x5e,0x0a,0x60,0x7a,0x59,0x5a,0x4b}},








	{ .i1 = { 0x5c,0x0c,0x5e,0x1a,0x69,0x6a,0x6b,0x0e}},








	{ .i1 = { 0x16,0x10,0x11,0x30,0x16,0x4b,0x5a,0x0d}},








	{ .i1 = { 0x5c,0x76,0x5e,0x0d,0x1b,0x7a,0x4b,0x05}},








	{ .i1 = { 0x1f,0x04,0x21,0x22,0x5a,0x24,0x5c,0x2e}},








	{ .i1 = { 0x5e,0x28,0x29,0x10,0x3c,0x5a,0x2d,0x5c}},








	{ .i1 = { 0x21,0x5e,0x10,0x4b,0x0e,0x0f,0x10,0x11}},








	{ .i1 = { 0x7d,0x16,0x4b,0x7d,0x7d,0x3c,0x3d,0x3e}},








	{ .i1 = { 0x7d,0x1b,0x5a,0x7d,0x5c,0x44,0x5e,0x21}},








	{ .i1 = { 0x22,0x5a,0x24,0x5c,0x7d,0x5e,0x28,0x29}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x2d,0x04,0x7d,0x4b,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x4b,0x0e,0x7d}},








	{ .i1 = { 0x10,0x11,0x3c,0x3d,0x3e,0x5a,0x7d,0x5c}},








	{ .i1 = { 0x7d,0x5e,0x44,0x1b,0x5a,0x7d,0x5c,0x7d}},








	{ .i1 = { 0x5e,0x21,0x22,0x7d,0x24,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x28,0x29,0x7d,0x7d,0x7d,0x2d,0x09,0x7d}},








	{ .i1 = { 0x4b,0x7d,0x7d,0x0e,0x7d,0x10,0x11,0x7d}},








	{ .i1 = { 0x7d,0x4b,0x7d,0x7d,0x3c,0x3d,0x3e,0x5a}},








	{ .i1 = { 0x1b,0x5c,0x4b,0x5e,0x44,0x7d,0x21,0x22}},








	{ .i1 = { 0x5a,0x24,0x5c,0x7d,0x5e,0x28,0x29,0x05}},








	{ .i1 = { 0x7d,0x5a,0x2d,0x5c,0x7d,0x5e,0x7d,0x7d}},








	{ .i1 = { 0x0e,0x7d,0x10,0x11,0x7d,0x7d,0x4b,0x7d}},








	{ .i1 = { 0x7d,0x3c,0x3d,0x3e,0x7d,0x1b,0x7d,0x4b}},








	{ .i1 = { 0x7d,0x44,0x4b,0x21,0x22,0x5a,0x24,0x5c}},








	{ .i1 = { 0x7d,0x5e,0x28,0x29,0x7d,0x7d,0x5a,0x2d}},








	{ .i1 = { 0x5c,0x5a,0x5e,0x5c,0x7d,0x5e,0x48,0x7d}},








	{ .i1 = { 0x7d,0x4b,0x4c,0x4d,0x4e,0x7d,0x3c,0x3d}},








	{ .i1 = { 0x3e,0x7d,0x7d,0x55,0x4b,0x7d,0x44,0x7d}},








	{ .i1 = { 0x5a,0x7d,0x5c,0x7d,0x5e,0x7d,0x60,0x0e}},








	{ .i1 = { 0x7d,0x10,0x11,0x5a,0x7d,0x5c,0x7d,0x5e}},








	{ .i1 = { 0x6a,0x6b,0x7d,0x7d,0x1b,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x21,0x22,0x76,0x24,0x7d,0x04}},








	{ .i1 = { 0x7a,0x28,0x29,0x08,0x7d,0x7d,0x2d,0x7d}},








	{ .i1 = { 0x7d,0x0e,0x7d,0x4b,0x11,0x12,0x13,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x17,0x18,0x7d,0x3c,0x3d,0x3e}},








	{ .i1 = { 0x7d,0x7d,0x5a,0x08,0x5c,0x44,0x5e,0x4b}},








	{ .i1 = { 0x7d,0x0e,0x7d,0x7d,0x11,0x12,0x13,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x17,0x18,0x31,0x32,0x5a,0x7d}},








	{ .i1 = { 0x5c,0x7d,0x5e,0x08,0x39,0x3a,0x3b,0x3c}},








	{ .i1 = { 0x7d,0x0e,0x7d,0x7d,0x11,0x12,0x13,0x7d}},








	{ .i1 = { 0x7d,0x16,0x17,0x18,0x31,0x32,0x7d,0x4b}},








	{ .i1 = { 0x4b,0x7d,0x7d,0x7d,0x39,0x3a,0x3b,0x3c}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x42,0x5a,0x5a}},








	{ .i1 = { 0x5c,0x5c,0x5e,0x5e,0x31,0x32,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x4b,0x7d,0x39,0x3a,0x3b,0x3c}},








	{ .i1 = { 0x02,0x7d,0x7d,0x7d,0x7d,0x7d,0x08,0x7d}},








	{ .i1 = { 0x4b,0x5a,0x7d,0x5c,0x0e,0x5e,0x7d,0x11}},








	{ .i1 = { 0x12,0x13,0x7d,0x7d,0x7d,0x17,0x18,0x5a}},








	{ .i1 = { 0x08,0x5c,0x4b,0x5e,0x7d,0x7d,0x0e,0x7d}},








	{ .i1 = { 0x7d,0x11,0x12,0x13,0x7d,0x7d,0x16,0x17}},








	{ .i1 = { 0x18,0x5a,0x7d,0x5c,0x4b,0x5e,0x7d,0x31}},








	{ .i1 = { 0x32,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x39}},








	{ .i1 = { 0x3a,0x3b,0x3c,0x5a,0x7d,0x5c,0x7d,0x5e}},








	{ .i1 = { 0x7d,0x31,0x32,0x7d,0x7d,0x7d,0x4b,0x7d}},








	{ .i1 = { 0x7d,0x39,0x3a,0x3b,0x3c,0x7d,0x7d,0x05}},








	{ .i1 = { 0x7d,0x7d,0x08,0x7d,0x7d,0x5a,0x7d,0x5c}},








	{ .i1 = { 0x0e,0x5e,0x7d,0x11,0x12,0x13,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x17,0x18,0x05,0x7d,0x7d,0x08,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x0e,0x7d,0x4b,0x11}},








	{ .i1 = { 0x12,0x13,0x7d,0x7d,0x7d,0x17,0x18,0x7d}},








	{ .i1 = { 0x4b,0x4b,0x7d,0x31,0x32,0x5a,0x7d,0x5c}},








	{ .i1 = { 0x7d,0x5e,0x7d,0x39,0x3a,0x3b,0x3c,0x5a}},








	{ .i1 = { 0x5a,0x5c,0x5c,0x5e,0x5e,0x7d,0x4b,0x31}},








	{ .i1 = { 0x32,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x39}},








	{ .i1 = { 0x3a,0x3b,0x3c,0x7d,0x7d,0x5a,0x7d,0x5c}},








	{ .i1 = { 0x08,0x5e,0x7d,0x7d,0x4b,0x7d,0x0e,0x7d}},








	{ .i1 = { 0x7d,0x11,0x12,0x13,0x7d,0x7d,0x16,0x17}},








	{ .i1 = { 0x18,0x7d,0x08,0x5a,0x7d,0x5c,0x7d,0x5e}},








	{ .i1 = { 0x0e,0x7d,0x7d,0x11,0x12,0x13,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x17,0x18,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x31,0x32,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x39,0x3a,0x3b,0x3c,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x31,0x32,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x39,0x3a,0x3b,0x3c,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x08,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x0e,0x7d,0x7d,0x11,0x12,0x13}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x17,0x18,0x7d,0x08,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x0e,0x7d,0x7d,0x11}},








	{ .i1 = { 0x12,0x13,0x7d,0x7d,0x7d,0x17,0x18,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x32,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x39,0x3a,0x3b}},








	{ .i1 = { 0x3c,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x39}},








	{ .i1 = { 0x3a,0x3b,0x3c,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},


	{ .i1 = { 0x46}},
};
static data f2___main_s05df[] = {




	{ .i1 = { 0x0b,0x05,0x00,0x00,0x00,0x00,0x42,0x00}},




	{ .i1 = { 0x42,0x00,0x42,0x00,0x84,0x00,0xc6,0x00}},




	{ .i1 = { 0x08,0x01,0x4a,0x01,0x4a,0x01,0x71,0x02}},




	{ .i1 = { 0x71,0x02,0x96,0x02,0x71,0x02,0x96,0x02}},




	{ .i1 = { 0xc0,0x02,0x49,0x03,0xe5,0x02,0x96,0x02}},




	{ .i1 = { 0x96,0x02,0x96,0x02,0x96,0x02,0x96,0x02}},




	{ .i1 = { 0x0a,0x03,0x49,0x03,0x49,0x03,0x49,0x03}},




	{ .i1 = { 0x49,0x03,0x49,0x03,0x49,0x03,0x49,0x03}},




	{ .i1 = { 0x49,0x03,0x49,0x03,0x49,0x03,0x49,0x03}},




	{ .i1 = { 0x49,0x03,0x49,0x03,0x49,0x03,0x49,0x03}},




	{ .i1 = { 0x49,0x03,0x49,0x03,0x49,0x03,0x49,0x03}},




	{ .i1 = { 0x49,0x03,0x49,0x03,0x49,0x03,0x49,0x03}},




	{ .i1 = { 0x49,0x03,0x49,0x03,0x49,0x03,0x49,0x03}},




	{ .i1 = { 0x49,0x03,0x49,0x03,0x49,0x03,0x49,0x03}},




	{ .i1 = { 0x49,0x03,0x49,0x03,0x49,0x03,0x49,0x03}},




	{ .i1 = { 0x06,0x02,0x5b,0x00,0x5b,0x00,0x44,0x00}},




	{ .i1 = { 0x0d,0x00,0x0d,0x00,0x07,0x00,0x07,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x3b,0x00,0x8c,0x00,0xc5,0x00}},




	{ .i1 = { 0xc5,0x00,0xc5,0x00,0x7b,0x00,0xa2,0x00}},




	{ .i1 = { 0xc8,0x00,0xa2,0x00,0xa2,0x00,0xd5,0x00}},




	{ .i1 = { 0x45,0x00,0x9c,0x00,0x07,0x01,0xfb,0x00}},




	{ .i1 = { 0xfb,0x00,0x07,0x00,0x54,0x01,0x54,0x01}},




	{ .i1 = { 0xa2,0x00,0x54,0x01,0xa2,0x00,0x0b,0x05}},




	{ .i1 = { 0x0b,0x05,0x0b,0x05,0x0b,0x05,0x0b,0x05}},




	{ .i1 = { 0x0b,0x05,0x0b,0x05,0x0b,0x05,0x0b,0x05}},




	{ .i1 = { 0x0b,0x05,0x0b,0x05,0x0b,0x05,0x0b,0x05}},




	{ .i1 = { 0x0b,0x05,0x88,0x01,0x9a,0x01,0x6b,0x03}},




	{ .i1 = { 0x83,0x03,0x9b,0x03,0xd6,0x03,0xe8,0x03}},




	{ .i1 = { 0x22,0x04,0x36,0x04,0x6b,0x03,0x70,0x04}},




	{ .i1 = { 0x82,0x04,0x82,0x04,0x82,0x04,0x82,0x04}},




	{ .i1 = { 0x82,0x04,0x82,0x04,0x82,0x04,0x82,0x04}},




	{ .i1 = { 0x82,0x04,0x82,0x04,0xbc,0x04,0xce,0x04}},




	{ .i1 = { 0xea,0x01,0xea,0x01,0x1e,0x00,0x1e,0x00}},




	{ .i1 = { 0x1e,0x00,0xe4,0x00,0xe4,0x00,0xe4,0x00}},




	{ .i1 = { 0x47,0x00,0x55,0x01,0x79,0x00,0x77,0x01}},




	{ .i1 = { 0x0b,0x01,0x41,0x01,0xc7,0x00,0x76,0x00}},




	{ .i1 = { 0x88,0x00,0x9d,0x01,0x0f,0x00,0x9f,0x01}},




	{ .i1 = { 0x09,0x01,0xdf,0x01,0xdf,0x01,0xdf,0x01}},




	{ .i1 = { 0xdf,0x01,0xdf,0x01,0xdf,0x01,0x20,0x01}},




	{ .i1 = { 0xd7,0x01,0xf8,0x01,0x08,0x02,0xee,0x01}},




	{ .i1 = { 0xe1,0x01,0xff,0x01,0x02,0x02,0xf1,0x01}},




	{ .i1 = { 0xee,0x01,0x16,0x02,0x10,0x02,0x26,0x02}},




	{ .i1 = { 0x19,0x02,0x24,0x02,0xef,0x01,0x1e,0x02}},




	{ .i1 = { 0x1f,0x02,0x25,0x02,0x27,0x02,0xee,0x01}},




	{ .i1 = { 0x34,0x02,0x0e,0x02,0x45,0x02,0x38,0x02}},




	{ .i1 = { 0x3f,0x02,0x21,0x02,0x3b,0x02,0x35,0x02}},




	{ .i1 = { 0x37,0x02,0x3c,0x02,0x4f,0x02,0x46,0x02}},




	{ .i1 = { 0x17,0x02,0x41,0x02,0x50,0x02,0x67,0x02}},




	{ .i1 = { 0x66,0x02,0x3d,0x02,0x56,0x02,0x2d,0x02}},




	{ .i1 = { 0x6d,0x02,0x68,0x02,0x61,0x02,0x6a,0x02}},




	{ .i1 = { 0x6e,0x02,0x53,0x02,0x7a,0x02,0x7e,0x02}},




	{ .i1 = { 0x8a,0x02,0x8d,0x02,0x69,0x02,0x8b,0x02}},




	{ .i1 = { 0x60,0x02,0x7f,0x02,0xee,0x01,0x92,0x02}},


	{ .i1 = { 0x93,0x02}},
};
static data f2___main_s05e0[] = {




	{ .i1 = { 0xbf,0xff,0x8f,0x01,0xbf,0x01,0xd6,0x01}},




	{ .i1 = { 0xfa,0x01,0x13,0x02,0xf6,0x02,0xf6,0x02}},




	{ .i1 = { 0xf6,0x02,0xf6,0x02,0xf6,0x02,0x9a,0x00}},




	{ .i1 = { 0xdc,0x00,0x16,0x00,0x1f,0x01,0x58,0x00}},




	{ .i1 = { 0x17,0x00,0x59,0x00,0xa0,0x00,0xec,0xff}},




	{ .i1 = { 0x70,0x00,0xb2,0x00,0xf4,0x00,0x1e,0x01}},




	{ .i1 = { 0xe2,0x00,0x25,0x01,0x6c,0x01,0xf9,0x01}},




	{ .i1 = { 0x1c,0x02,0x47,0x01,0xaa,0x01,0x35,0x01}},




	{ .i1 = { 0x2c,0x02,0x3a,0x02,0x43,0x02,0x58,0x02}},




	{ .i1 = { 0x5f,0x02,0x7b,0x02,0x82,0x02,0xa5,0x02}},




	{ .i1 = { 0xae,0x02,0xb7,0x02,0xd3,0x02,0xdc,0x02}},




	{ .i1 = { 0xdf,0x02,0x01,0x03,0x30,0x03,0x44,0x03}},




	{ .i1 = { 0x6c,0x03,0x6d,0x03,0x87,0x03,0x95,0x03}},




	{ .i1 = { 0xa7,0x03,0xb9,0x03,0xd3,0x03,0xfb,0x03}},




	{ .i1 = { 0x05,0x04,0x06,0x04,0x1b,0x04,0x31,0x04}},




	{ .i1 = { 0xa6,0xff,0xb6,0xff,0xbe,0xff,0xb2,0xff}},




	{ .i1 = { 0x46,0x00,0x2a,0x01,0x49,0x01,0x72,0x01}},




	{ .i1 = { 0xea,0xff,0xf8,0xff,0x03,0x00,0x30,0x00}},




	{ .i1 = { 0x3e,0x00,0x4d,0x00,0x74,0x00,0x7c,0x00}},




	{ .i1 = { 0x81,0x00,0x9c,0xff,0xa8,0x00,0xbf,0x00}},




	{ .i1 = { 0xe6,0x00,0x01,0x01,0x87,0x00,0xe5,0x00}},




	{ .i1 = { 0x26,0x01,0x80,0x01,0xb7,0x01,0xa0,0xff}},




	{ .i1 = { 0x9a,0xff,0x8a,0x00,0xa9,0x00,0xdf,0x00}},




	{ .i1 = { 0xe7,0x00,0xec,0x00,0x23,0x01,0x2e,0x01}},




	{ .i1 = { 0x40,0x01,0x4b,0x01,0x6b,0x01,0x21,0x01}},




	{ .i1 = { 0x71,0x01,0x60,0x01,0x92,0x01,0x79,0x01}},




	{ .i1 = { 0xa1,0x01,0x7f,0x01,0xa3,0x01,0x96,0x01}},




	{ .i1 = { 0xa7,0x01,0xac,0x01,0xa4,0x01,0xaf,0x01}},


	{ .i1 = { 0xb0,0x01}},
};
static data f2___main_s05e1[] = {




	{ .i1 = { 0x40,0x02,0xd7,0x01,0xd7,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x47,0x02,0x43,0x02,0x52,0x02}},




	{ .i1 = { 0x52,0x02,0xc5,0x01,0x52,0x02,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x36,0x02}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x4e,0x02,0x4e,0x02,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x32,0x02,0x4d,0x02,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x40,0x02}},




	{ .i1 = { 0x40,0x02,0x4c,0x02,0x40,0x02,0x4c,0x02}},




	{ .i1 = { 0x40,0x02,0x4c,0x02,0x40,0x02,0x45,0x02}},




	{ .i1 = { 0x40,0x02,0x40,0x02,0xd5,0x01,0x40,0x02}},




	{ .i1 = { 0x40,0x02,0xc5,0x01,0xc5,0x01,0x1e,0x02}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x37,0x02,0x1e,0x02,0xe7,0x01,0xe6,0x01}},




	{ .i1 = { 0xe5,0x01,0xe4,0x01,0xe3,0x01,0xe2,0x01}},




	{ .i1 = { 0x1a,0x02,0x04,0x02,0xf5,0x01,0xf3,0x01}},




	{ .i1 = { 0xf7,0x01,0xf6,0x01,0xee,0x01,0xef,0x01}},




	{ .i1 = { 0xec,0x01,0xf0,0x01,0xf2,0x01,0xf1,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xd6,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xfc,0x01,0xfb,0x01,0xfa,0x01}},




	{ .i1 = { 0xf9,0x01,0xf4,0x01,0xed,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x20,0x02}},




	{ .i1 = { 0x53,0x02,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x30,0x02,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x2d,0x02}},




	{ .i1 = { 0xc5,0x01,0x2b,0x02,0xc5,0x01,0x26,0x02}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x12,0x02}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x1d,0x02,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xe0,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xf8,0x01,0xeb,0x01}},


	{ .i1 = { 0xc5,0x01}},
};
const i1 c01_s011c[] = { 0x24,0 };
const i1 c01_s011d[] = { 0x41,0x53,0x4d,0 };
const i1 c01_s011e[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c01_s011f[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c01_s0120[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c01_s0121[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c01_s0122[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c01_s0123[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c01_s0124[] = { 0x44,0x4f,0x54,0 };
const i1 c01_s0125[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c01_s0126[] = { 0x45,0x4e,0x44,0 };
const i1 c01_s0127[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c01_s0128[] = { 0x49,0x46,0 };
const i1 c01_s0129[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c01_s012a[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c01_s012b[] = { 0x4e,0x4f,0x54,0 };
const i1 c01_s012c[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c01_s012d[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c01_s012e[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c01_s012f[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c01_s0130[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c01_s0131[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c01_s0132[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c01_s0133[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c01_s0134[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c01_s0135[] = { 0x53,0x55,0x42,0 };
const i1 c01_s0136[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c01_s0137[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c01_s0138[] = { 0x56,0x41,0x52,0 };
const i1 c01_s0139[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c01_s013a[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c01_s013b[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c01_s013c[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c01_s013d[] = { 0x49,0x44,0 };
const i1 c01_s013e[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c01_s013f[] = { 0x41,0x54,0 };
const i1 c01_s0140[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c01_s0141[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c01_s0142[] = { 0x49,0x4e,0x54,0 };
const i1 c01_s0143[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c01_s0144[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c01_s0145[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c01_s0146[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c01_s0147[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c01_s0148[] = { 0x49,0x4e,0x54,0x45,0x52,0x46,0x41,0x43,0x45,0 };
const i1 c01_s0149[] = { 0x4e,0x49,0x4c,0 };
const i1 c01_s014a[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c01_s014b[] = { 0x41,0x4e,0x44,0 };
const i1 c01_s014c[] = { 0x4f,0x52,0 };
const i1 c01_s014d[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c01_s014e[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c01_s014f[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c01_s0150[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c01_s0151[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c01_s0152[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c01_s0153[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c01_s0154[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c01_s0155[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c01_s0156[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c01_s0157[] = { 0x41,0x53,0 };
const i1 c01_s0158[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c01_s0159[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c01_s015a[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c01_s015b[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c01_s015c[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c01_s015d[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c01_s015e[] = { 0x49,0x53,0 };
const i1 c01_s015f[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c01_s0160[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
const i1 c01_s0161[] = { 0x49,0x4d,0x50,0x4c,0x45,0x4d,0x45,0x4e,0x54,0x53,0 };
static data f2___main_s05e2[] = {

	{ .ptr = (void*)c01_s011c },

	{ .ptr = (void*)c01_s011d },

	{ .ptr = (void*)c01_s011e },

	{ .ptr = (void*)c01_s011f },

	{ .ptr = (void*)c01_s0120 },

	{ .ptr = (void*)c01_s0121 },

	{ .ptr = (void*)c01_s0122 },

	{ .ptr = (void*)c01_s0123 },

	{ .ptr = (void*)c01_s0124 },

	{ .ptr = (void*)c01_s0125 },

	{ .ptr = (void*)c01_s0126 },

	{ .ptr = (void*)c01_s0127 },

	{ .ptr = (void*)c01_s0128 },

	{ .ptr = (void*)c01_s0129 },

	{ .ptr = (void*)c01_s012a },

	{ .ptr = (void*)c01_s012b },

	{ .ptr = (void*)c01_s012c },

	{ .ptr = (void*)c01_s012d },

	{ .ptr = (void*)c01_s012e },

	{ .ptr = (void*)c01_s012f },

	{ .ptr = (void*)c01_s0130 },

	{ .ptr = (void*)c01_s0131 },

	{ .ptr = (void*)c01_s0132 },

	{ .ptr = (void*)c01_s0133 },

	{ .ptr = (void*)c01_s0134 },

	{ .ptr = (void*)c01_s0135 },

	{ .ptr = (void*)c01_s0136 },

	{ .ptr = (void*)c01_s0137 },

	{ .ptr = (void*)c01_s0138 },

	{ .ptr = (void*)c01_s0139 },

	{ .ptr = (void*)c01_s013a },

	{ .ptr = (void*)c01_s013b },

	{ .ptr = (void*)c01_s013c },

	{ .ptr = (void*)c01_s013d },

	{ .ptr = (void*)c01_s013e },

	{ .ptr = (void*)c01_s013f },

	{ .ptr = (void*)c01_s0140 },

	{ .ptr = (void*)c01_s0141 },

	{ .ptr = (void*)c01_s0142 },

	{ .ptr = (void*)c01_s0143 },

	{ .ptr = (void*)c01_s0144 },

	{ .ptr = (void*)c01_s0145 },

	{ .ptr = (void*)c01_s0146 },

	{ .ptr = (void*)c01_s0147 },

	{ .ptr = (void*)c01_s0148 },

	{ .ptr = (void*)c01_s0149 },

	{ .ptr = (void*)c01_s014a },

	{ .ptr = (void*)c01_s014b },

	{ .ptr = (void*)c01_s014c },

	{ .ptr = (void*)c01_s014d },

	{ .ptr = (void*)c01_s014e },

	{ .ptr = (void*)c01_s014f },

	{ .ptr = (void*)c01_s0150 },

	{ .ptr = (void*)c01_s0151 },

	{ .ptr = (void*)c01_s0152 },

	{ .ptr = (void*)c01_s0153 },

	{ .ptr = (void*)c01_s0154 },

	{ .ptr = (void*)c01_s0155 },

	{ .ptr = (void*)c01_s0156 },

	{ .ptr = (void*)c01_s0157 },

	{ .ptr = (void*)c01_s0158 },

	{ .ptr = (void*)c01_s0159 },

	{ .ptr = (void*)c01_s015a },

	{ .ptr = (void*)c01_s015b },

	{ .ptr = (void*)c01_s015c },

	{ .ptr = (void*)c01_s015d },

	{ .ptr = (void*)c01_s015e },

	{ .ptr = (void*)c01_s015f },

	{ .ptr = (void*)c01_s0160 },

	{ .ptr = (void*)c01_s0161 },

};
const i1 c01_s0162[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };
	void f11_print(void);
	void f33_Free(void);

// token_destructor workspace at ws+3512 length ws+0
void f302_token_destructor(void) {

	i8 v7448 = (i8)(intptr_t)(ws+3496);
	i1 v7449 = *(i1*)(intptr_t)v7448;
	i1 v7450 = (i1)+41;
	if (v7449==v7450) goto c01_05e8; else goto c01_05ea;

c01_05ea:;

	i8 v7451 = (i8)(intptr_t)(ws+3496);
	i1 v7452 = *(i1*)(intptr_t)v7451;
	i1 v7453 = (i1)+33;
	if (v7452==v7453) goto c01_05e8; else goto c01_05e9;

c01_05e8:;

	i8 v7454 = (i8)(intptr_t)c01_s0162;
	*(i8*)(intptr_t)(ws+3696) = v7454;
	i8 v7455 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7455)();

	i8 v7456 = (i8)(intptr_t)(ws+3504);
	i8 v7457 = *(i8*)(intptr_t)v7456;
	i8 v7458 = *(i8*)(intptr_t)v7457;
	*(i8*)(intptr_t)(ws+3680) = v7458;
	i8 v7459 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v7459)();

c01_05e9:;

c01_05e3:;

}
	void f302_token_destructor(void);

// yy_destructor workspace at ws+3496 length ws+16
void f301_yy_destructor(void) {


	i8 v7460 = (i8)(intptr_t)(ws+3496);
	i1 v7461 = *(i1*)(intptr_t)v7460;
	i1 v7462 = (i1)+0;
	if (v7461==v7462) goto c01_05f1; else goto c01_05f2;

c01_05f2:;

	i8 v7463 = (i8)(intptr_t)(ws+3496);
	i1 v7464 = *(i1*)(intptr_t)v7463;
	i1 v7465 = (i1)+70;
	if (v7464<v7465) goto c01_05f0; else goto c01_05f1;

c01_05f0:;

	i8 v7466 = (i8)(intptr_t)(f302_token_destructor);

	((void(*)(void))(intptr_t)v7466)();

c01_05f1:;

c01_05eb:;

}
	void f301_yy_destructor(void);

// yy_pop_parser_stack workspace at ws+3384 length ws+0
void f303_yy_pop_parser_stack(void) {

	i8 v7467 = (i8)(intptr_t)(ws+1568);
	i8 v7468 = *(i8*)(intptr_t)v7467;
	i8 v7469 = v7468+(-16);
	i8 v7470 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7470 = v7469;

	i8 v7471 = (i8)(intptr_t)(ws+1568);
	i8 v7472 = *(i8*)(intptr_t)v7471;
	i8 v7473 = v7472+(+2);
	i1 v7474 = *(i1*)(intptr_t)v7473;
	*(i1*)(intptr_t)(ws+3496) = v7474;
	i8 v7475 = (i8)(intptr_t)(ws+1568);
	i8 v7476 = *(i8*)(intptr_t)v7475;
	i8 v7477 = v7476+(+8);
	*(i8*)(intptr_t)(ws+3504) = v7477;
	i8 v7478 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7478)();

}
	void f303_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3384 length ws+0
void f304_yy_pop_all_parser_stack(void) {

c01_05f3:;

	i8 v7479 = (i8)(intptr_t)(ws+1568);
	i8 v7480 = *(i8*)(intptr_t)v7479;
	i8 v7481 = (i8)(intptr_t)(ws+1576);
	if (v7480==v7481) goto c01_05f8; else goto c01_05f7;

c01_05f7:;

	i8 v7482 = (i8)(intptr_t)(f303_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v7482)();

	goto c01_05f3;

c01_05f8:;

}
	void f304_yy_pop_all_parser_stack(void);
	void f73_StartError(void);
const i1 c01_s0163[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f11_print(void);
	void f74_EndError(void);

// yy_stack_overflow workspace at ws+3384 length ws+0
void f305_yy_stack_overflow(void) {

	i8 v7483 = (i8)(intptr_t)(f304_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v7483)();

	i8 v7484 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v7484)();

	i8 v7485 = (i8)(intptr_t)c01_s0163;
	*(i8*)(intptr_t)(ws+3696) = v7485;
	i8 v7486 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v7486)();

	i8 v7487 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v7487)();

}
static data f2___main_s05f9[] = {








	{ .i1 = { 0x48,0x48,0x48,0x48,0x48,0x48,0x4c,0x48}},








	{ .i1 = { 0x4e,0x4d,0x48,0x48,0x48,0x50,0x51,0x52}},








	{ .i1 = { 0x53,0x54,0x48,0x55,0x58,0x58,0x4f,0x4f}},








	{ .i1 = { 0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f}},








	{ .i1 = { 0x5a,0x5a,0x5a,0x4b,0x4b,0x4b,0x4b,0x4b}},








	{ .i1 = { 0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b}},








	{ .i1 = { 0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x5a}},








	{ .i1 = { 0x5a,0x4b,0x4b,0x5a,0x59,0x48,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x48,0x49,0x5c,0x5d}},








	{ .i1 = { 0x5b,0x5b,0x4b,0x48,0x48,0x5e,0x5f,0x5f}},








	{ .i1 = { 0x61,0x61,0x62,0x60,0x63,0x63,0x64,0x48}},








	{ .i1 = { 0x6b,0x67,0x65,0x6a,0x68,0x69,0x66,0x66}},








	{ .i1 = { 0x6c,0x6d,0x6d,0x6e,0x6e,0x6f,0x48,0x70}},








	{ .i1 = { 0x71,0x73,0x75,0x75,0x74,0x48,0x76,0x78}},








	{ .i1 = { 0x78,0x79,0x48,0x7a,0x7c,0x7c,0x7c,0x46}},








	{ .i1 = { 0x47,0x47,0x48,0x52,0x52,0x56,0x56,0x57}},








	{ .i1 = { 0x48,0x48,0x48,0x48,0x67,0x71,0x72,0x72}},






	{ .i1 = { 0x77,0x77,0x78,0x7b,0x7b}},
};
static data f2___main_s05fa[] = {








	{ .i1 = { 0x02,0x05,0x07,0x05,0x04,0x04,0x01,0x04}},








	{ .i1 = { 0x01,0x03,0x02,0x02,0x08,0x00,0x01,0x00}},








	{ .i1 = { 0x01,0x01,0x05,0x03,0x03,0x03,0x03,0x02}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x01,0x03,0x01,0x01,0x02,0x02,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x02,0x03,0x02,0x02,0x02,0x02,0x01}},








	{ .i1 = { 0x03,0x04,0x03,0x01,0x01,0x05,0x06,0x01}},








	{ .i1 = { 0x03,0x04,0x03,0x02,0x05,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x03,0x02,0x03,0x05,0x01,0x03,0x02}},








	{ .i1 = { 0x01,0x03,0x01,0x05,0x01,0x03,0x01,0x05}},








	{ .i1 = { 0x04,0x05,0x01,0x03,0x01,0x02,0x01,0x03}},








	{ .i1 = { 0x01,0x02,0x03,0x01,0x03,0x03,0x07,0x01}},








	{ .i1 = { 0x02,0x05,0x00,0x04,0x01,0x05,0x05,0x01}},








	{ .i1 = { 0x03,0x01,0x03,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x00,0x02,0x01,0x02,0x05,0x00,0x02,0x02}},








	{ .i1 = { 0x08,0x06,0x05,0x05,0x00,0x00,0x00,0x02}},






	{ .i1 = { 0x01,0x03,0x00,0x01,0x03}},
};
	void f30_MemCopy(void);

// CopyMinor workspace at ws+3384 length ws+16
void f307_CopyMinor(void) {

	i8 v7510 = (i8)(intptr_t)(ws+3384);
	i8 v7511 = *(i8*)(intptr_t)v7510;
	*(i8*)(intptr_t)(ws+3576) = v7511;
	i8 v7512 = (i8)+8;
	*(i8*)(intptr_t)(ws+3584) = v7512;
	i8 v7513 = (i8)(intptr_t)(ws+3392);
	i8 v7514 = *(i8*)(intptr_t)v7513;
	*(i8*)(intptr_t)(ws+3592) = v7514;
	i8 v7515 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(void))(intptr_t)v7515)();

}
	void f305_yy_stack_overflow(void);
	void f307_CopyMinor(void);

// Reducer workspace at ws+3384 length ws+0
void f309_Reducer(void) {

}
	void f156_MidReturn(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);

// reduce_0 workspace at ws+3384 length ws+8
void f310_reduce_0(void) {

	i8 v7554 = (i8)(intptr_t)(f156_MidReturn);

	((void(*)(void))(intptr_t)v7554)();

	i8 v7555 = *(i8*)(intptr_t)(ws+3392);
	i8 v7556 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7556 = v7555;

	i8 v7557 = (i8)(intptr_t)(ws+3384);
	i8 v7558 = *(i8*)(intptr_t)v7557;
	*(i8*)(intptr_t)(ws+3488) = v7558;
	i8 v7559 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7559)();

	i1 v7560 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7560;
	i8 v7561 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7561;
	i8 v7562 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7562)();

}
	void f259_InitVariable(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_1 workspace at ws+3384 length ws+0
void f311_reduce_1(void) {

	i8 v7563 = (i8)(intptr_t)(ws+40);
	i8 v7564 = *(i8*)(intptr_t)v7563;
	*(i8*)(intptr_t)(ws+3488) = v7564;
	i8 v7565 = (i8)(intptr_t)(ws+3328);
	i8 v7566 = *(i8*)(intptr_t)v7565;
	*(i8*)(intptr_t)(ws+3496) = v7566;
	i8 v7567 = (i8)(intptr_t)(ws+3312);
	i8 v7568 = *(i8*)(intptr_t)v7567;
	*(i8*)(intptr_t)(ws+3504) = v7568;
	i8 v7569 = (i8)(intptr_t)(f259_InitVariable);

	((void(*)(void))(intptr_t)v7569)();

	i1 v7570 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v7570;
	i8 v7571 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7571;
	i8 v7572 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7572)();

	i1 v7573 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7573;
	i8 v7574 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7574;
	i8 v7575 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7575)();

}
	void f259_InitVariable(void);
	void f268_CheckExpressionType(void);
	void f125_MidAddress(void);
	void f130_MidDeref(void);
	void f139_MidStore(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_2 workspace at ws+3384 length ws+32
void f312_reduce_2(void) {

	i8 v7576 = (i8)(intptr_t)(ws+40);
	i8 v7577 = *(i8*)(intptr_t)v7576;
	*(i8*)(intptr_t)(ws+3488) = v7577;
	i8 v7578 = (i8)(intptr_t)(ws+3344);
	i8 v7579 = *(i8*)(intptr_t)v7578;
	*(i8*)(intptr_t)(ws+3496) = v7579;
	i8 v7580 = (i8)(intptr_t)(ws+3328);
	i8 v7581 = *(i8*)(intptr_t)v7580;
	*(i8*)(intptr_t)(ws+3504) = v7581;
	i8 v7582 = (i8)(intptr_t)(f259_InitVariable);

	((void(*)(void))(intptr_t)v7582)();

	i8 v7583 = (i8)(intptr_t)(ws+3312);
	i8 v7584 = *(i8*)(intptr_t)v7583;
	*(i8*)(intptr_t)(ws+3496) = v7584;
	i8 v7585 = (i8)(intptr_t)(ws+3344);
	i8 v7586 = *(i8*)(intptr_t)v7585;
	i8 v7587 = *(i8*)(intptr_t)v7586;
	i8 v7588 = *(i8*)(intptr_t)v7587;
	*(i8*)(intptr_t)(ws+3504) = v7588;
	i8 v7589 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(void))(intptr_t)v7589)();

	i8 v7590 = (i8)(intptr_t)(ws+3312);
	i8 v7591 = *(i8*)(intptr_t)v7590;
	i8 v7592 = v7591+(+24);
	i8 v7593 = *(i8*)(intptr_t)v7592;
	i8 v7594 = v7593+(+48);
	i2 v7595 = *(i2*)(intptr_t)v7594;
	i1 v7596 = v7595;
	i8 v7597 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v7597 = v7596;

	i8 v7598 = (i8)(intptr_t)(ws+3344);
	i8 v7599 = *(i8*)(intptr_t)v7598;
	*(i8*)(intptr_t)(ws+3488) = v7599;
	i2 v7600 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v7600;
	i8 v7601 = (i8)(intptr_t)(f125_MidAddress);

	((void(*)(void))(intptr_t)v7601)();

	i8 v7602 = *(i8*)(intptr_t)(ws+3504);
	i8 v7603 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7603 = v7602;

	i8 v7604 = (i8)(intptr_t)(ws+3384);
	i1 v7605 = *(i1*)(intptr_t)v7604;
	*(i1*)(intptr_t)(ws+3544) = v7605;
	i8 v7606 = (i8)(intptr_t)(ws+3392);
	i8 v7607 = *(i8*)(intptr_t)v7606;
	*(i8*)(intptr_t)(ws+3552) = v7607;
	i8 v7608 = (i8)(intptr_t)(f130_MidDeref);

	((void(*)(void))(intptr_t)v7608)();

	i8 v7609 = *(i8*)(intptr_t)(ws+3560);
	i8 v7610 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7610 = v7609;

	i8 v7611 = (i8)(intptr_t)(ws+3384);
	i1 v7612 = *(i1*)(intptr_t)v7611;
	*(i1*)(intptr_t)(ws+3488) = v7612;
	i8 v7613 = (i8)(intptr_t)(ws+3312);
	i8 v7614 = *(i8*)(intptr_t)v7613;
	*(i8*)(intptr_t)(ws+3496) = v7614;
	i8 v7615 = (i8)(intptr_t)(ws+3400);
	i8 v7616 = *(i8*)(intptr_t)v7615;
	*(i8*)(intptr_t)(ws+3504) = v7616;
	i8 v7617 = (i8)(intptr_t)(f139_MidStore);

	((void(*)(void))(intptr_t)v7617)();

	i8 v7618 = *(i8*)(intptr_t)(ws+3512);
	i8 v7619 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7619 = v7618;

	i8 v7620 = (i8)(intptr_t)(ws+3408);
	i8 v7621 = *(i8*)(intptr_t)v7620;
	*(i8*)(intptr_t)(ws+3488) = v7621;
	i8 v7622 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7622)();

	i1 v7623 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v7623;
	i8 v7624 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v7624;
	i8 v7625 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7625)();

	i1 v7626 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v7626;
	i8 v7627 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7627;
	i8 v7628 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7628)();

	i1 v7629 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7629;
	i8 v7630 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7630;
	i8 v7631 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7631)();

}
const i1 c01_s0166[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f75_SimpleError(void);
	void f229_IsScalar(void);
const i1 c01_s0167[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x73,0 };
	void f75_SimpleError(void);
	void f259_InitVariable(void);
	void f268_CheckExpressionType(void);
	void f125_MidAddress(void);
	void f130_MidDeref(void);
	void f139_MidStore(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_3 workspace at ws+3384 length ws+40
void f313_reduce_3(void) {

	i8 v7632 = (i8)(intptr_t)(ws+3312);
	i8 v7633 = *(i8*)(intptr_t)v7632;
	i8 v7634 = v7633+(+24);
	i8 v7635 = *(i8*)(intptr_t)v7634;
	i8 v7636 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7636 = v7635;

	i8 v7637 = (i8)(intptr_t)(ws+3384);
	i8 v7638 = *(i8*)(intptr_t)v7637;
	i8 v7639 = (i8)+0;
	if (v7638==v7639) goto c01_0609; else goto c01_060a;

c01_0609:;

	i8 v7640 = (i8)(intptr_t)c01_s0166;
	*(i8*)(intptr_t)(ws+3648) = v7640;
	i8 v7641 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v7641)();

c01_060a:;

c01_0606:;

	i8 v7642 = (i8)(intptr_t)(ws+3384);
	i8 v7643 = *(i8*)(intptr_t)v7642;
	*(i8*)(intptr_t)(ws+3544) = v7643;
	i8 v7644 = (i8)(intptr_t)(f229_IsScalar);

	((void(*)(void))(intptr_t)v7644)();

	i1 v7645 = *(i1*)(intptr_t)(ws+3552);
	i8 v7646 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v7646 = v7645;

	i8 v7647 = (i8)(intptr_t)(ws+3392);
	i1 v7648 = *(i1*)(intptr_t)v7647;
	i1 v7649 = (i1)+0;
	if (v7648==v7649) goto c01_060e; else goto c01_060f;

c01_060e:;

	i8 v7650 = (i8)(intptr_t)c01_s0167;
	*(i8*)(intptr_t)(ws+3648) = v7650;
	i8 v7651 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v7651)();

c01_060f:;

c01_060b:;

	i8 v7652 = (i8)(intptr_t)(ws+40);
	i8 v7653 = *(i8*)(intptr_t)v7652;
	*(i8*)(intptr_t)(ws+3488) = v7653;
	i8 v7654 = (i8)(intptr_t)(ws+3328);
	i8 v7655 = *(i8*)(intptr_t)v7654;
	*(i8*)(intptr_t)(ws+3496) = v7655;
	i8 v7656 = (i8)(intptr_t)(ws+3384);
	i8 v7657 = *(i8*)(intptr_t)v7656;
	*(i8*)(intptr_t)(ws+3504) = v7657;
	i8 v7658 = (i8)(intptr_t)(f259_InitVariable);

	((void(*)(void))(intptr_t)v7658)();

	i8 v7659 = (i8)(intptr_t)(ws+3312);
	i8 v7660 = *(i8*)(intptr_t)v7659;
	*(i8*)(intptr_t)(ws+3496) = v7660;
	i8 v7661 = (i8)(intptr_t)(ws+3328);
	i8 v7662 = *(i8*)(intptr_t)v7661;
	i8 v7663 = *(i8*)(intptr_t)v7662;
	i8 v7664 = *(i8*)(intptr_t)v7663;
	*(i8*)(intptr_t)(ws+3504) = v7664;
	i8 v7665 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(void))(intptr_t)v7665)();

	i8 v7666 = (i8)(intptr_t)(ws+3312);
	i8 v7667 = *(i8*)(intptr_t)v7666;
	i8 v7668 = v7667+(+24);
	i8 v7669 = *(i8*)(intptr_t)v7668;
	i8 v7670 = v7669+(+48);
	i2 v7671 = *(i2*)(intptr_t)v7670;
	i1 v7672 = v7671;
	i8 v7673 = (i8)(intptr_t)(ws+3393);
	*(i1*)(intptr_t)v7673 = v7672;

	i8 v7674 = (i8)(intptr_t)(ws+3328);
	i8 v7675 = *(i8*)(intptr_t)v7674;
	*(i8*)(intptr_t)(ws+3488) = v7675;
	i2 v7676 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v7676;
	i8 v7677 = (i8)(intptr_t)(f125_MidAddress);

	((void(*)(void))(intptr_t)v7677)();

	i8 v7678 = *(i8*)(intptr_t)(ws+3504);
	i8 v7679 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7679 = v7678;

	i8 v7680 = (i8)(intptr_t)(ws+3393);
	i1 v7681 = *(i1*)(intptr_t)v7680;
	*(i1*)(intptr_t)(ws+3544) = v7681;
	i8 v7682 = (i8)(intptr_t)(ws+3400);
	i8 v7683 = *(i8*)(intptr_t)v7682;
	*(i8*)(intptr_t)(ws+3552) = v7683;
	i8 v7684 = (i8)(intptr_t)(f130_MidDeref);

	((void(*)(void))(intptr_t)v7684)();

	i8 v7685 = *(i8*)(intptr_t)(ws+3560);
	i8 v7686 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7686 = v7685;

	i8 v7687 = (i8)(intptr_t)(ws+3393);
	i1 v7688 = *(i1*)(intptr_t)v7687;
	*(i1*)(intptr_t)(ws+3488) = v7688;
	i8 v7689 = (i8)(intptr_t)(ws+3312);
	i8 v7690 = *(i8*)(intptr_t)v7689;
	*(i8*)(intptr_t)(ws+3496) = v7690;
	i8 v7691 = (i8)(intptr_t)(ws+3408);
	i8 v7692 = *(i8*)(intptr_t)v7691;
	*(i8*)(intptr_t)(ws+3504) = v7692;
	i8 v7693 = (i8)(intptr_t)(f139_MidStore);

	((void(*)(void))(intptr_t)v7693)();

	i8 v7694 = *(i8*)(intptr_t)(ws+3512);
	i8 v7695 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7695 = v7694;

	i8 v7696 = (i8)(intptr_t)(ws+3416);
	i8 v7697 = *(i8*)(intptr_t)v7696;
	*(i8*)(intptr_t)(ws+3488) = v7697;
	i8 v7698 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7698)();

	i1 v7699 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v7699;
	i8 v7700 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7700;
	i8 v7701 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7701)();

	i1 v7702 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7702;
	i8 v7703 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7703;
	i8 v7704 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7704)();

}
	void f232_UndoLValue(void);
	void f268_CheckExpressionType(void);
	void f130_MidDeref(void);
	void f139_MidStore(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_4 workspace at ws+3384 length ws+48
void f314_reduce_4(void) {

	i8 v7705 = (i8)(intptr_t)(ws+3328);
	i8 v7706 = *(i8*)(intptr_t)v7705;
	i8 v7707 = v7706+(+24);
	i8 v7708 = *(i8*)(intptr_t)v7707;
	i8 v7709 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7709 = v7708;

	i8 v7710 = (i8)(intptr_t)(ws+3328);
	i8 v7711 = *(i8*)(intptr_t)v7710;
	*(i8*)(intptr_t)(ws+3432) = v7711;
	i8 v7712 = (i8)(intptr_t)(f232_UndoLValue);

	((void(*)(void))(intptr_t)v7712)();

	i8 v7713 = *(i8*)(intptr_t)(ws+3440);
	i8 v7714 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7714 = v7713;

	i8 v7715 = (i8)(intptr_t)(ws+3392);
	i8 v7716 = *(i8*)(intptr_t)v7715;
	i8 v7717 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7717 = v7716;

	i8 v7718 = (i8)(intptr_t)(ws+3312);
	i8 v7719 = *(i8*)(intptr_t)v7718;
	*(i8*)(intptr_t)(ws+3496) = v7719;
	i8 v7720 = (i8)(intptr_t)(ws+3384);
	i8 v7721 = *(i8*)(intptr_t)v7720;
	*(i8*)(intptr_t)(ws+3504) = v7721;
	i8 v7722 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(void))(intptr_t)v7722)();

	i8 v7723 = (i8)(intptr_t)(ws+3384);
	i8 v7724 = *(i8*)(intptr_t)v7723;
	i8 v7725 = v7724+(+48);
	i2 v7726 = *(i2*)(intptr_t)v7725;
	i1 v7727 = v7726;
	i8 v7728 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v7728 = v7727;

	i8 v7729 = (i8)(intptr_t)(ws+3408);
	i1 v7730 = *(i1*)(intptr_t)v7729;
	*(i1*)(intptr_t)(ws+3544) = v7730;
	i8 v7731 = (i8)(intptr_t)(ws+3400);
	i8 v7732 = *(i8*)(intptr_t)v7731;
	*(i8*)(intptr_t)(ws+3552) = v7732;
	i8 v7733 = (i8)(intptr_t)(f130_MidDeref);

	((void(*)(void))(intptr_t)v7733)();

	i8 v7734 = *(i8*)(intptr_t)(ws+3560);
	i8 v7735 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7735 = v7734;

	i8 v7736 = (i8)(intptr_t)(ws+3408);
	i1 v7737 = *(i1*)(intptr_t)v7736;
	*(i1*)(intptr_t)(ws+3488) = v7737;
	i8 v7738 = (i8)(intptr_t)(ws+3312);
	i8 v7739 = *(i8*)(intptr_t)v7738;
	*(i8*)(intptr_t)(ws+3496) = v7739;
	i8 v7740 = (i8)(intptr_t)(ws+3416);
	i8 v7741 = *(i8*)(intptr_t)v7740;
	*(i8*)(intptr_t)(ws+3504) = v7741;
	i8 v7742 = (i8)(intptr_t)(f139_MidStore);

	((void(*)(void))(intptr_t)v7742)();

	i8 v7743 = *(i8*)(intptr_t)(ws+3512);
	i8 v7744 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v7744 = v7743;

	i8 v7745 = (i8)(intptr_t)(ws+3424);
	i8 v7746 = *(i8*)(intptr_t)v7745;
	*(i8*)(intptr_t)(ws+3488) = v7746;
	i8 v7747 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7747)();

	i1 v7748 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v7748;
	i8 v7749 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7749;
	i8 v7750 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7750)();

	i1 v7751 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7751;
	i8 v7752 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7752;
	i8 v7753 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7753)();

}
	void f286_TerminateNormalLoop(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_5 workspace at ws+3384 length ws+0
void f315_reduce_5(void) {

	i8 v7754 = (i8)(intptr_t)(ws+3328);
	i8 v7755 = *(i8*)(intptr_t)v7754;
	*(i8*)(intptr_t)(ws+3384) = v7755;
	i8 v7756 = (i8)(intptr_t)(f286_TerminateNormalLoop);

	((void(*)(void))(intptr_t)v7756)();

	i1 v7757 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v7757;
	i8 v7758 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v7758;
	i8 v7759 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7759)();

	i1 v7760 = (i1)+13;
	*(i1*)(intptr_t)(ws+3496) = v7760;
	i8 v7761 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7761;
	i8 v7762 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7762)();

}
	void f285_BeginNormalLoop(void);
	void f110_MidLabel(void);
	void f256_Generate(void);

// reduce_6 workspace at ws+3384 length ws+16
void f316_reduce_6(void) {

	i8 v7763 = (i8)(intptr_t)(f285_BeginNormalLoop);

	((void(*)(void))(intptr_t)v7763)();

	i8 v7764 = *(i8*)(intptr_t)(ws+3400);
	i8 v7765 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7765 = v7764;

	i8 v7766 = (i8)(intptr_t)(ws+3384);
	i8 v7767 = *(i8*)(intptr_t)v7766;
	i8 v7768 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v7768 = v7767;

	i8 v7769 = (i8)(intptr_t)(ws+54);
	i2 v7770 = *(i2*)(intptr_t)v7769;
	*(i2*)(intptr_t)(ws+3472) = v7770;
	i8 v7771 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v7771)();

	i8 v7772 = *(i8*)(intptr_t)(ws+3480);
	i8 v7773 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7773 = v7772;

	i8 v7774 = (i8)(intptr_t)(ws+3392);
	i8 v7775 = *(i8*)(intptr_t)v7774;
	*(i8*)(intptr_t)(ws+3488) = v7775;
	i8 v7776 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7776)();

}
	void f286_TerminateNormalLoop(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_7 workspace at ws+3384 length ws+0
void f317_reduce_7(void) {

	i8 v7777 = (i8)(intptr_t)(ws+3328);
	i8 v7778 = *(i8*)(intptr_t)v7777;
	*(i8*)(intptr_t)(ws+3384) = v7778;
	i8 v7779 = (i8)(intptr_t)(f286_TerminateNormalLoop);

	((void(*)(void))(intptr_t)v7779)();

	i1 v7780 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v7780;
	i8 v7781 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v7781;
	i8 v7782 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7782)();

	i1 v7783 = (i1)+13;
	*(i1*)(intptr_t)(ws+3496) = v7783;
	i8 v7784 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7784;
	i8 v7785 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7785)();

}
	void f285_BeginNormalLoop(void);
	void f110_MidLabel(void);
	void f256_Generate(void);

// reduce_8 workspace at ws+3384 length ws+16
void f318_reduce_8(void) {

	i8 v7786 = (i8)(intptr_t)(f285_BeginNormalLoop);

	((void(*)(void))(intptr_t)v7786)();

	i8 v7787 = *(i8*)(intptr_t)(ws+3400);
	i8 v7788 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7788 = v7787;

	i8 v7789 = (i8)(intptr_t)(ws+3384);
	i8 v7790 = *(i8*)(intptr_t)v7789;
	i8 v7791 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v7791 = v7790;

	i8 v7792 = (i8)(intptr_t)(ws+54);
	i2 v7793 = *(i2*)(intptr_t)v7792;
	*(i2*)(intptr_t)(ws+3472) = v7793;
	i8 v7794 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v7794)();

	i8 v7795 = *(i8*)(intptr_t)(ws+3480);
	i8 v7796 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7796 = v7795;

	i8 v7797 = (i8)(intptr_t)(ws+3392);
	i8 v7798 = *(i8*)(intptr_t)v7797;
	*(i8*)(intptr_t)(ws+3488) = v7798;
	i8 v7799 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7799)();

}
	void f235_AllocLabel(void);
	void f235_AllocLabel(void);
	void f257_GenerateConditional(void);
	void f301_yy_destructor(void);

// reduce_9 workspace at ws+3384 length ws+6
void f319_reduce_9(void) {

	i8 v7800 = (i8)(intptr_t)(ws+3320);
	i8 v7801 = *(i8*)(intptr_t)v7800;
	i8 v7802 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v7802 = v7801;

	i8 v7803 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7803)();

	i2 v7804 = *(i2*)(intptr_t)(ws+3472);
	i8 v7805 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v7805 = v7804;

	i8 v7806 = (i8)(intptr_t)(ws+3384);
	i2 v7807 = *(i2*)(intptr_t)v7806;
	i8 v7808 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v7808 = v7807;

	i8 v7809 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7809)();

	i2 v7810 = *(i2*)(intptr_t)(ws+3472);
	i8 v7811 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v7811 = v7810;

	i8 v7812 = (i8)(intptr_t)(ws+3388);
	i2 v7813 = *(i2*)(intptr_t)v7812;
	i8 v7814 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7814 = v7813;

	i8 v7815 = (i8)(intptr_t)(ws+3386);
	i2 v7816 = *(i2*)(intptr_t)v7815;
	i8 v7817 = (i8)(intptr_t)(ws+3312);
	i8 v7818 = *(i8*)(intptr_t)v7817;
	*(i2*)(intptr_t)v7818 = v7816;

	i8 v7819 = (i8)(intptr_t)(ws+52);
	i2 v7820 = *(i2*)(intptr_t)v7819;
	i8 v7821 = (i8)(intptr_t)(ws+3312);
	i8 v7822 = *(i8*)(intptr_t)v7821;
	i8 v7823 = v7822+(+2);
	*(i2*)(intptr_t)v7823 = v7820;

	i8 v7824 = (i8)(intptr_t)(ws+3386);
	i2 v7825 = *(i2*)(intptr_t)v7824;
	i8 v7826 = (i8)(intptr_t)(ws+3312);
	i8 v7827 = *(i8*)(intptr_t)v7826;
	i8 v7828 = v7827+(+4);
	*(i2*)(intptr_t)v7828 = v7825;

	i8 v7829 = (i8)(intptr_t)(ws+3312);
	i8 v7830 = *(i8*)(intptr_t)v7829;
	*(i8*)(intptr_t)(ws+3392) = v7830;
	i8 v7831 = (i8)(intptr_t)(f257_GenerateConditional);

	((void(*)(void))(intptr_t)v7831)();

	i8 v7832 = (i8)(intptr_t)(ws+52);
	i2 v7833 = *(i2*)(intptr_t)v7832;
	i8 v7834 = (i8)(intptr_t)(ws+3296);
	i8 v7835 = *(i8*)(intptr_t)v7834;
	i8 v7836 = v7835+(+2);
	*(i2*)(intptr_t)v7836 = v7833;

	i1 v7837 = (i1)+13;
	*(i1*)(intptr_t)(ws+3496) = v7837;
	i8 v7838 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7838;
	i8 v7839 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7839)();

}
const i1 c01_s0168[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f75_SimpleError(void);
	void f129_MidJump(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);

// reduce_10 workspace at ws+3384 length ws+8
void f320_reduce_10(void) {

	i8 v7840 = (i8)(intptr_t)(ws+52);
	i2 v7841 = *(i2*)(intptr_t)v7840;
	i2 v7842 = (i2)+0;
	if (v7841==v7842) goto c01_0613; else goto c01_0614;

c01_0613:;

	i8 v7843 = (i8)(intptr_t)c01_s0168;
	*(i8*)(intptr_t)(ws+3648) = v7843;
	i8 v7844 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v7844)();

c01_0614:;

c01_0610:;

	i8 v7845 = (i8)(intptr_t)(ws+52);
	i2 v7846 = *(i2*)(intptr_t)v7845;
	*(i2*)(intptr_t)(ws+3416) = v7846;
	i8 v7847 = (i8)(intptr_t)(f129_MidJump);

	((void(*)(void))(intptr_t)v7847)();

	i8 v7848 = *(i8*)(intptr_t)(ws+3424);
	i8 v7849 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7849 = v7848;

	i8 v7850 = (i8)(intptr_t)(ws+3384);
	i8 v7851 = *(i8*)(intptr_t)v7850;
	*(i8*)(intptr_t)(ws+3488) = v7851;
	i8 v7852 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7852)();

	i1 v7853 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7853;
	i8 v7854 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7854;
	i8 v7855 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7855)();

}
const i1 c01_s0169[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f75_SimpleError(void);
	void f129_MidJump(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);

// reduce_11 workspace at ws+3384 length ws+8
void f321_reduce_11(void) {

	i8 v7856 = (i8)(intptr_t)(ws+54);
	i2 v7857 = *(i2*)(intptr_t)v7856;
	i2 v7858 = (i2)+0;
	if (v7857==v7858) goto c01_0618; else goto c01_0619;

c01_0618:;

	i8 v7859 = (i8)(intptr_t)c01_s0169;
	*(i8*)(intptr_t)(ws+3648) = v7859;
	i8 v7860 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v7860)();

c01_0619:;

c01_0615:;

	i8 v7861 = (i8)(intptr_t)(ws+54);
	i2 v7862 = *(i2*)(intptr_t)v7861;
	*(i2*)(intptr_t)(ws+3416) = v7862;
	i8 v7863 = (i8)(intptr_t)(f129_MidJump);

	((void(*)(void))(intptr_t)v7863)();

	i8 v7864 = *(i8*)(intptr_t)(ws+3424);
	i8 v7865 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7865 = v7864;

	i8 v7866 = (i8)(intptr_t)(ws+3384);
	i8 v7867 = *(i8*)(intptr_t)v7866;
	*(i8*)(intptr_t)(ws+3488) = v7867;
	i8 v7868 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7868)();

	i1 v7869 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7869;
	i8 v7870 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7870;
	i8 v7871 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7871)();

}
	void f110_MidLabel(void);
	void f256_Generate(void);
	void f33_Free(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_12 workspace at ws+3384 length ws+16
void f322_reduce_12(void) {

	i8 v7872 = (i8)(intptr_t)(ws+56);
	i8 v7873 = *(i8*)(intptr_t)v7872;
	i2 v7874 = *(i2*)(intptr_t)v7873;
	*(i2*)(intptr_t)(ws+3472) = v7874;
	i8 v7875 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v7875)();

	i8 v7876 = *(i8*)(intptr_t)(ws+3480);
	i8 v7877 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7877 = v7876;

	i8 v7878 = (i8)(intptr_t)(ws+3384);
	i8 v7879 = *(i8*)(intptr_t)v7878;
	*(i8*)(intptr_t)(ws+3488) = v7879;
	i8 v7880 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7880)();

	i8 v7881 = (i8)(intptr_t)(ws+56);
	i8 v7882 = *(i8*)(intptr_t)v7881;
	i8 v7883 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7883 = v7882;

	i8 v7884 = (i8)(intptr_t)(ws+56);
	i8 v7885 = *(i8*)(intptr_t)v7884;
	i8 v7886 = v7885+(+8);
	i8 v7887 = *(i8*)(intptr_t)v7886;
	i8 v7888 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7888 = v7887;

	i8 v7889 = (i8)(intptr_t)(ws+3392);
	i8 v7890 = *(i8*)(intptr_t)v7889;
	*(i8*)(intptr_t)(ws+3680) = v7890;
	i8 v7891 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v7891)();

	i1 v7892 = (i1)+26;
	*(i1*)(intptr_t)(ws+3496) = v7892;
	i8 v7893 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v7893;
	i8 v7894 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7894)();

	i1 v7895 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v7895;
	i8 v7896 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v7896;
	i8 v7897 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7897)();

	i1 v7898 = (i1)+12;
	*(i1*)(intptr_t)(ws+3496) = v7898;
	i8 v7899 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7899;
	i8 v7900 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v7900)();

}
	void f68_InternalAlloc(void);
	void f235_AllocLabel(void);

// reduce_13 workspace at ws+3384 length ws+18
void f323_reduce_13(void) {

	i8 v7901 = (i8)+16;
	*(i8*)(intptr_t)(ws+3640) = v7901;
	i8 v7902 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v7902)();

	i8 v7903 = *(i8*)(intptr_t)(ws+3648);
	i8 v7904 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7904 = v7903;

	i8 v7905 = (i8)(intptr_t)(ws+3384);
	i8 v7906 = *(i8*)(intptr_t)v7905;
	i8 v7907 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7907 = v7906;

	i8 v7908 = (i8)(intptr_t)(ws+56);
	i8 v7909 = *(i8*)(intptr_t)v7908;
	i8 v7910 = (i8)(intptr_t)(ws+3392);
	i8 v7911 = *(i8*)(intptr_t)v7910;
	i8 v7912 = v7911+(+8);
	*(i8*)(intptr_t)v7912 = v7909;

	i8 v7913 = (i8)(intptr_t)(ws+3392);
	i8 v7914 = *(i8*)(intptr_t)v7913;
	i8 v7915 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7915 = v7914;

	i8 v7916 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7916)();

	i2 v7917 = *(i2*)(intptr_t)(ws+3472);
	i8 v7918 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v7918 = v7917;

	i8 v7919 = (i8)(intptr_t)(ws+3400);
	i2 v7920 = *(i2*)(intptr_t)v7919;
	i8 v7921 = (i8)(intptr_t)(ws+56);
	i8 v7922 = *(i8*)(intptr_t)v7921;
	*(i2*)(intptr_t)v7922 = v7920;

}
	void f235_AllocLabel(void);
	void f235_AllocLabel(void);
	void f257_GenerateConditional(void);

// reduce_14 workspace at ws+3384 length ws+8
void f324_reduce_14(void) {

	i8 v7923 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7923)();

	i2 v7924 = *(i2*)(intptr_t)(ws+3472);
	i8 v7925 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v7925 = v7924;

	i8 v7926 = (i8)(intptr_t)(ws+3384);
	i2 v7927 = *(i2*)(intptr_t)v7926;
	i8 v7928 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v7928 = v7927;

	i8 v7929 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v7929)();

	i2 v7930 = *(i2*)(intptr_t)(ws+3472);
	i8 v7931 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v7931 = v7930;

	i8 v7932 = (i8)(intptr_t)(ws+3388);
	i2 v7933 = *(i2*)(intptr_t)v7932;
	i8 v7934 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v7934 = v7933;

	i8 v7935 = (i8)(intptr_t)(ws+3386);
	i2 v7936 = *(i2*)(intptr_t)v7935;
	i8 v7937 = (i8)(intptr_t)(ws+56);
	i8 v7938 = *(i8*)(intptr_t)v7937;
	i8 v7939 = v7938+(+2);
	*(i2*)(intptr_t)v7939 = v7936;

	i8 v7940 = (i8)(intptr_t)(ws+3390);
	i2 v7941 = *(i2*)(intptr_t)v7940;
	i8 v7942 = (i8)(intptr_t)(ws+56);
	i8 v7943 = *(i8*)(intptr_t)v7942;
	i8 v7944 = v7943+(+4);
	*(i2*)(intptr_t)v7944 = v7941;

	i8 v7945 = (i8)(intptr_t)(ws+3386);
	i2 v7946 = *(i2*)(intptr_t)v7945;
	i8 v7947 = (i8)(intptr_t)(ws+3304);
	i8 v7948 = *(i8*)(intptr_t)v7947;
	*(i2*)(intptr_t)v7948 = v7946;

	i8 v7949 = (i8)(intptr_t)(ws+3390);
	i2 v7950 = *(i2*)(intptr_t)v7949;
	i8 v7951 = (i8)(intptr_t)(ws+3304);
	i8 v7952 = *(i8*)(intptr_t)v7951;
	i8 v7953 = v7952+(+2);
	*(i2*)(intptr_t)v7953 = v7950;

	i8 v7954 = (i8)(intptr_t)(ws+3386);
	i2 v7955 = *(i2*)(intptr_t)v7954;
	i8 v7956 = (i8)(intptr_t)(ws+3304);
	i8 v7957 = *(i8*)(intptr_t)v7956;
	i8 v7958 = v7957+(+4);
	*(i2*)(intptr_t)v7958 = v7955;

	i8 v7959 = (i8)(intptr_t)(ws+3304);
	i8 v7960 = *(i8*)(intptr_t)v7959;
	*(i8*)(intptr_t)(ws+3392) = v7960;
	i8 v7961 = (i8)(intptr_t)(f257_GenerateConditional);

	((void(*)(void))(intptr_t)v7961)();

}
	void f110_MidLabel(void);
	void f256_Generate(void);

// reduce_15 workspace at ws+3384 length ws+8
void f325_reduce_15(void) {

	i8 v7962 = (i8)(intptr_t)(ws+56);
	i8 v7963 = *(i8*)(intptr_t)v7962;
	i8 v7964 = v7963+(+4);
	i2 v7965 = *(i2*)(intptr_t)v7964;
	*(i2*)(intptr_t)(ws+3472) = v7965;
	i8 v7966 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v7966)();

	i8 v7967 = *(i8*)(intptr_t)(ws+3480);
	i8 v7968 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7968 = v7967;

	i8 v7969 = (i8)(intptr_t)(ws+3384);
	i8 v7970 = *(i8*)(intptr_t)v7969;
	*(i8*)(intptr_t)(ws+3488) = v7970;
	i8 v7971 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7971)();

}
	void f129_MidJump(void);
	void f256_Generate(void);
	void f110_MidLabel(void);
	void f256_Generate(void);

// reduce_16 workspace at ws+3384 length ws+16
void f326_reduce_16(void) {

	i8 v7972 = (i8)(intptr_t)(ws+56);
	i8 v7973 = *(i8*)(intptr_t)v7972;
	i2 v7974 = *(i2*)(intptr_t)v7973;
	*(i2*)(intptr_t)(ws+3416) = v7974;
	i8 v7975 = (i8)(intptr_t)(f129_MidJump);

	((void(*)(void))(intptr_t)v7975)();

	i8 v7976 = *(i8*)(intptr_t)(ws+3424);
	i8 v7977 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7977 = v7976;

	i8 v7978 = (i8)(intptr_t)(ws+3384);
	i8 v7979 = *(i8*)(intptr_t)v7978;
	*(i8*)(intptr_t)(ws+3488) = v7979;
	i8 v7980 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7980)();

	i8 v7981 = (i8)(intptr_t)(ws+56);
	i8 v7982 = *(i8*)(intptr_t)v7981;
	i8 v7983 = v7982+(+4);
	i2 v7984 = *(i2*)(intptr_t)v7983;
	*(i2*)(intptr_t)(ws+3472) = v7984;
	i8 v7985 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v7985)();

	i8 v7986 = *(i8*)(intptr_t)(ws+3480);
	i8 v7987 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7987 = v7986;

	i8 v7988 = (i8)(intptr_t)(ws+3392);
	i8 v7989 = *(i8*)(intptr_t)v7988;
	*(i8*)(intptr_t)(ws+3488) = v7989;
	i8 v7990 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7990)();

}
	void f129_MidJump(void);
	void f256_Generate(void);
	void f110_MidLabel(void);
	void f256_Generate(void);

// reduce_17 workspace at ws+3384 length ws+16
void f327_reduce_17(void) {

	i8 v7991 = (i8)(intptr_t)(ws+56);
	i8 v7992 = *(i8*)(intptr_t)v7991;
	i2 v7993 = *(i2*)(intptr_t)v7992;
	*(i2*)(intptr_t)(ws+3416) = v7993;
	i8 v7994 = (i8)(intptr_t)(f129_MidJump);

	((void(*)(void))(intptr_t)v7994)();

	i8 v7995 = *(i8*)(intptr_t)(ws+3424);
	i8 v7996 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7996 = v7995;

	i8 v7997 = (i8)(intptr_t)(ws+3384);
	i8 v7998 = *(i8*)(intptr_t)v7997;
	*(i8*)(intptr_t)(ws+3488) = v7998;
	i8 v7999 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v7999)();

	i8 v8000 = (i8)(intptr_t)(ws+56);
	i8 v8001 = *(i8*)(intptr_t)v8000;
	i8 v8002 = v8001+(+4);
	i2 v8003 = *(i2*)(intptr_t)v8002;
	*(i2*)(intptr_t)(ws+3472) = v8003;
	i8 v8004 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v8004)();

	i8 v8005 = *(i8*)(intptr_t)(ws+3480);
	i8 v8006 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8006 = v8005;

	i8 v8007 = (i8)(intptr_t)(ws+3392);
	i8 v8008 = *(i8*)(intptr_t)v8007;
	*(i8*)(intptr_t)(ws+3488) = v8008;
	i8 v8009 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8009)();

}
	void f110_MidLabel(void);
	void f256_Generate(void);
	void f110_MidLabel(void);
	void f256_Generate(void);
	void f114_MidEndcase(void);
	void f256_Generate(void);
	void f33_Free(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_18 workspace at ws+3384 length ws+32
void f328_reduce_18(void) {

	i8 v8010 = (i8)(intptr_t)(ws+64);
	i8 v8011 = *(i8*)(intptr_t)v8010;
	i8 v8012 = v8011+(+17);
	i1 v8013 = *(i1*)(intptr_t)v8012;
	i1 v8014 = (i1)+0;
	if (v8013==v8014) goto c01_0621; else goto c01_0620;

c01_0621:;

	i8 v8015 = (i8)(intptr_t)(ws+64);
	i8 v8016 = *(i8*)(intptr_t)v8015;
	i2 v8017 = *(i2*)(intptr_t)v8016;
	i2 v8018 = (i2)+0;
	if (v8017==v8018) goto c01_0620; else goto c01_061f;

c01_061f:;

	i8 v8019 = (i8)(intptr_t)(ws+64);
	i8 v8020 = *(i8*)(intptr_t)v8019;
	i2 v8021 = *(i2*)(intptr_t)v8020;
	*(i2*)(intptr_t)(ws+3472) = v8021;
	i8 v8022 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v8022)();

	i8 v8023 = *(i8*)(intptr_t)(ws+3480);
	i8 v8024 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8024 = v8023;

	i8 v8025 = (i8)(intptr_t)(ws+3384);
	i8 v8026 = *(i8*)(intptr_t)v8025;
	*(i8*)(intptr_t)(ws+3488) = v8026;
	i8 v8027 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8027)();

c01_0620:;

c01_061a:;

	i8 v8028 = (i8)(intptr_t)(ws+64);
	i8 v8029 = *(i8*)(intptr_t)v8028;
	i8 v8030 = v8029+(+2);
	i2 v8031 = *(i2*)(intptr_t)v8030;
	*(i2*)(intptr_t)(ws+3472) = v8031;
	i8 v8032 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v8032)();

	i8 v8033 = *(i8*)(intptr_t)(ws+3480);
	i8 v8034 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8034 = v8033;

	i8 v8035 = (i8)(intptr_t)(ws+3392);
	i8 v8036 = *(i8*)(intptr_t)v8035;
	*(i8*)(intptr_t)(ws+3488) = v8036;
	i8 v8037 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8037)();

	i8 v8038 = (i8)(intptr_t)(ws+64);
	i8 v8039 = *(i8*)(intptr_t)v8038;
	i8 v8040 = v8039+(+16);
	i1 v8041 = *(i1*)(intptr_t)v8040;
	*(i1*)(intptr_t)(ws+3416) = v8041;
	i8 v8042 = (i8)(intptr_t)(f114_MidEndcase);

	((void(*)(void))(intptr_t)v8042)();

	i8 v8043 = *(i8*)(intptr_t)(ws+3424);
	i8 v8044 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8044 = v8043;

	i8 v8045 = (i8)(intptr_t)(ws+3400);
	i8 v8046 = *(i8*)(intptr_t)v8045;
	*(i8*)(intptr_t)(ws+3488) = v8046;
	i8 v8047 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8047)();

	i8 v8048 = (i8)(intptr_t)(ws+64);
	i8 v8049 = *(i8*)(intptr_t)v8048;
	i8 v8050 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8050 = v8049;

	i8 v8051 = (i8)(intptr_t)(ws+3408);
	i8 v8052 = *(i8*)(intptr_t)v8051;
	i8 v8053 = v8052+(+8);
	i8 v8054 = *(i8*)(intptr_t)v8053;
	i8 v8055 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v8055 = v8054;

	i8 v8056 = (i8)(intptr_t)(ws+3408);
	i8 v8057 = *(i8*)(intptr_t)v8056;
	*(i8*)(intptr_t)(ws+3680) = v8057;
	i8 v8058 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v8058)();

	i1 v8059 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v8059;
	i8 v8060 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v8060;
	i8 v8061 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8061)();

	i1 v8062 = (i1)+65;
	*(i1*)(intptr_t)(ws+3496) = v8062;
	i8 v8063 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8063;
	i8 v8064 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8064)();

	i1 v8065 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v8065;
	i8 v8066 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8066;
	i8 v8067 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8067)();

}
	void f68_InternalAlloc(void);
	void f235_AllocLabel(void);
	void f227_IsNum(void);
const i1 c01_s016a[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f75_SimpleError(void);
	void f165_NodeWidth(void);
	void f127_MidStartcase(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);

// reduce_19 workspace at ws+3384 length ws+32
void f329_reduce_19(void) {

	i8 v8068 = (i8)+18;
	*(i8*)(intptr_t)(ws+3640) = v8068;
	i8 v8069 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v8069)();

	i8 v8070 = *(i8*)(intptr_t)(ws+3648);
	i8 v8071 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8071 = v8070;

	i8 v8072 = (i8)(intptr_t)(ws+3384);
	i8 v8073 = *(i8*)(intptr_t)v8072;
	i8 v8074 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8074 = v8073;

	i8 v8075 = (i8)(intptr_t)(ws+64);
	i8 v8076 = *(i8*)(intptr_t)v8075;
	i8 v8077 = (i8)(intptr_t)(ws+3392);
	i8 v8078 = *(i8*)(intptr_t)v8077;
	i8 v8079 = v8078+(+8);
	*(i8*)(intptr_t)v8079 = v8076;

	i8 v8080 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v8080)();

	i2 v8081 = *(i2*)(intptr_t)(ws+3472);
	i8 v8082 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v8082 = v8081;

	i8 v8083 = (i8)(intptr_t)(ws+3400);
	i2 v8084 = *(i2*)(intptr_t)v8083;
	i8 v8085 = (i8)(intptr_t)(ws+3392);
	i8 v8086 = *(i8*)(intptr_t)v8085;
	i8 v8087 = v8086+(+2);
	*(i2*)(intptr_t)v8087 = v8084;

	i8 v8088 = (i8)(intptr_t)(ws+3392);
	i8 v8089 = *(i8*)(intptr_t)v8088;
	i8 v8090 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v8090 = v8089;

	i8 v8091 = (i8)(intptr_t)(ws+3312);
	i8 v8092 = *(i8*)(intptr_t)v8091;
	i8 v8093 = v8092+(+24);
	i8 v8094 = *(i8*)(intptr_t)v8093;
	*(i8*)(intptr_t)(ws+3560) = v8094;
	i8 v8095 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v8095)();

	i1 v8096 = *(i1*)(intptr_t)(ws+3568);
	i8 v8097 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v8097 = v8096;

	i8 v8098 = (i8)(intptr_t)(ws+3402);
	i1 v8099 = *(i1*)(intptr_t)v8098;
	i1 v8100 = (i1)+0;
	if (v8099==v8100) goto c01_0625; else goto c01_0626;

c01_0625:;

	i8 v8101 = (i8)(intptr_t)c01_s016a;
	*(i8*)(intptr_t)(ws+3648) = v8101;
	i8 v8102 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v8102)();

c01_0626:;

c01_0622:;

	i8 v8103 = (i8)(intptr_t)(ws+3312);
	i8 v8104 = *(i8*)(intptr_t)v8103;
	*(i8*)(intptr_t)(ws+3456) = v8104;
	i8 v8105 = (i8)(intptr_t)(f165_NodeWidth);

	((void(*)(void))(intptr_t)v8105)();

	i1 v8106 = *(i1*)(intptr_t)(ws+3464);
	i8 v8107 = (i8)(intptr_t)(ws+3403);
	*(i1*)(intptr_t)v8107 = v8106;

	i8 v8108 = (i8)(intptr_t)(ws+3403);
	i1 v8109 = *(i1*)(intptr_t)v8108;
	i8 v8110 = (i8)(intptr_t)(ws+3392);
	i8 v8111 = *(i8*)(intptr_t)v8110;
	i8 v8112 = v8111+(+16);
	*(i1*)(intptr_t)v8112 = v8109;

	i8 v8113 = (i8)(intptr_t)(ws+3392);
	i8 v8114 = *(i8*)(intptr_t)v8113;
	i8 v8115 = v8114+(+16);
	i1 v8116 = *(i1*)(intptr_t)v8115;
	*(i1*)(intptr_t)(ws+3416) = v8116;
	i8 v8117 = (i8)(intptr_t)(ws+3312);
	i8 v8118 = *(i8*)(intptr_t)v8117;
	*(i8*)(intptr_t)(ws+3424) = v8118;
	i8 v8119 = (i8)(intptr_t)(f127_MidStartcase);

	((void(*)(void))(intptr_t)v8119)();

	i8 v8120 = *(i8*)(intptr_t)(ws+3432);
	i8 v8121 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8121 = v8120;

	i8 v8122 = (i8)(intptr_t)(ws+3408);
	i8 v8123 = *(i8*)(intptr_t)v8122;
	*(i8*)(intptr_t)(ws+3488) = v8123;
	i8 v8124 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8124)();

	i1 v8125 = (i1)+66;
	*(i1*)(intptr_t)(ws+3496) = v8125;
	i8 v8126 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8126;
	i8 v8127 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8127)();

}
const i1 c01_s016b[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f75_SimpleError(void);
	void f129_MidJump(void);
	void f256_Generate(void);
	void f110_MidLabel(void);
	void f256_Generate(void);
	void f235_AllocLabel(void);
	void f112_MidWhencase(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);

// reduce_20 workspace at ws+3384 length ws+32
void f330_reduce_20(void) {

	i8 v8128 = (i8)(intptr_t)(ws+64);
	i8 v8129 = *(i8*)(intptr_t)v8128;
	i8 v8130 = v8129+(+17);
	i1 v8131 = *(i1*)(intptr_t)v8130;
	i1 v8132 = (i1)+0;
	if (v8131==v8132) goto c01_062b; else goto c01_062a;

c01_062a:;

	i8 v8133 = (i8)(intptr_t)c01_s016b;
	*(i8*)(intptr_t)(ws+3648) = v8133;
	i8 v8134 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v8134)();

c01_062b:;

c01_0627:;

	i8 v8135 = (i8)(intptr_t)(ws+64);
	i8 v8136 = *(i8*)(intptr_t)v8135;
	i2 v8137 = *(i2*)(intptr_t)v8136;
	i2 v8138 = (i2)+0;
	if (v8137==v8138) goto c01_0630; else goto c01_062f;

c01_062f:;

	i8 v8139 = (i8)(intptr_t)(ws+64);
	i8 v8140 = *(i8*)(intptr_t)v8139;
	i8 v8141 = v8140+(+2);
	i2 v8142 = *(i2*)(intptr_t)v8141;
	*(i2*)(intptr_t)(ws+3416) = v8142;
	i8 v8143 = (i8)(intptr_t)(f129_MidJump);

	((void(*)(void))(intptr_t)v8143)();

	i8 v8144 = *(i8*)(intptr_t)(ws+3424);
	i8 v8145 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8145 = v8144;

	i8 v8146 = (i8)(intptr_t)(ws+3384);
	i8 v8147 = *(i8*)(intptr_t)v8146;
	*(i8*)(intptr_t)(ws+3488) = v8147;
	i8 v8148 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8148)();

	i8 v8149 = (i8)(intptr_t)(ws+64);
	i8 v8150 = *(i8*)(intptr_t)v8149;
	i2 v8151 = *(i2*)(intptr_t)v8150;
	*(i2*)(intptr_t)(ws+3472) = v8151;
	i8 v8152 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v8152)();

	i8 v8153 = *(i8*)(intptr_t)(ws+3480);
	i8 v8154 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8154 = v8153;

	i8 v8155 = (i8)(intptr_t)(ws+3392);
	i8 v8156 = *(i8*)(intptr_t)v8155;
	*(i8*)(intptr_t)(ws+3488) = v8156;
	i8 v8157 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8157)();

c01_0630:;

c01_062c:;

	i8 v8158 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v8158)();

	i2 v8159 = *(i2*)(intptr_t)(ws+3472);
	i8 v8160 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v8160 = v8159;

	i8 v8161 = (i8)(intptr_t)(ws+3400);
	i2 v8162 = *(i2*)(intptr_t)v8161;
	i8 v8163 = (i8)(intptr_t)(ws+64);
	i8 v8164 = *(i8*)(intptr_t)v8163;
	*(i2*)(intptr_t)v8164 = v8162;

	i8 v8165 = (i8)(intptr_t)(ws+64);
	i8 v8166 = *(i8*)(intptr_t)v8165;
	i8 v8167 = v8166+(+16);
	i1 v8168 = *(i1*)(intptr_t)v8167;
	*(i1*)(intptr_t)(ws+3416) = v8168;
	i8 v8169 = (i8)(intptr_t)(ws+3312);
	i4 v8170 = *(i4*)(intptr_t)v8169;
	*(i4*)(intptr_t)(ws+3420) = v8170;
	i8 v8171 = (i8)(intptr_t)(ws+64);
	i8 v8172 = *(i8*)(intptr_t)v8171;
	i2 v8173 = *(i2*)(intptr_t)v8172;
	*(i2*)(intptr_t)(ws+3424) = v8173;
	i8 v8174 = (i8)(intptr_t)(f112_MidWhencase);

	((void(*)(void))(intptr_t)v8174)();

	i8 v8175 = *(i8*)(intptr_t)(ws+3432);
	i8 v8176 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8176 = v8175;

	i8 v8177 = (i8)(intptr_t)(ws+3408);
	i8 v8178 = *(i8*)(intptr_t)v8177;
	*(i8*)(intptr_t)(ws+3488) = v8178;
	i8 v8179 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8179)();

	i1 v8180 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v8180;
	i8 v8181 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8181;
	i8 v8182 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8182)();

}
const i1 c01_s016c[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f75_SimpleError(void);
	void f129_MidJump(void);
	void f256_Generate(void);
	void f110_MidLabel(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_21 workspace at ws+3384 length ws+16
void f331_reduce_21(void) {

	i8 v8183 = (i8)(intptr_t)(ws+64);
	i8 v8184 = *(i8*)(intptr_t)v8183;
	i8 v8185 = v8184+(+17);
	i1 v8186 = *(i1*)(intptr_t)v8185;
	i1 v8187 = (i1)+0;
	if (v8186==v8187) goto c01_0635; else goto c01_0634;

c01_0634:;

	i8 v8188 = (i8)(intptr_t)c01_s016c;
	*(i8*)(intptr_t)(ws+3648) = v8188;
	i8 v8189 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v8189)();

c01_0635:;

c01_0631:;

	i8 v8190 = (i8)(intptr_t)(ws+64);
	i8 v8191 = *(i8*)(intptr_t)v8190;
	i2 v8192 = *(i2*)(intptr_t)v8191;
	i2 v8193 = (i2)+0;
	if (v8192==v8193) goto c01_063a; else goto c01_0639;

c01_0639:;

	i8 v8194 = (i8)(intptr_t)(ws+64);
	i8 v8195 = *(i8*)(intptr_t)v8194;
	i8 v8196 = v8195+(+2);
	i2 v8197 = *(i2*)(intptr_t)v8196;
	*(i2*)(intptr_t)(ws+3416) = v8197;
	i8 v8198 = (i8)(intptr_t)(f129_MidJump);

	((void(*)(void))(intptr_t)v8198)();

	i8 v8199 = *(i8*)(intptr_t)(ws+3424);
	i8 v8200 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8200 = v8199;

	i8 v8201 = (i8)(intptr_t)(ws+3384);
	i8 v8202 = *(i8*)(intptr_t)v8201;
	*(i8*)(intptr_t)(ws+3488) = v8202;
	i8 v8203 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8203)();

	i8 v8204 = (i8)(intptr_t)(ws+64);
	i8 v8205 = *(i8*)(intptr_t)v8204;
	i2 v8206 = *(i2*)(intptr_t)v8205;
	*(i2*)(intptr_t)(ws+3472) = v8206;
	i8 v8207 = (i8)(intptr_t)(f110_MidLabel);

	((void(*)(void))(intptr_t)v8207)();

	i8 v8208 = *(i8*)(intptr_t)(ws+3480);
	i8 v8209 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8209 = v8208;

	i8 v8210 = (i8)(intptr_t)(ws+3392);
	i8 v8211 = *(i8*)(intptr_t)v8210;
	*(i8*)(intptr_t)(ws+3488) = v8211;
	i8 v8212 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v8212)();

c01_063a:;

c01_0636:;

	i2 v8213 = (i2)+0;
	i8 v8214 = (i8)(intptr_t)(ws+64);
	i8 v8215 = *(i8*)(intptr_t)v8214;
	*(i2*)(intptr_t)v8215 = v8213;

	i1 v8216 = (i1)+1;
	i8 v8217 = (i8)(intptr_t)(ws+64);
	i8 v8218 = *(i8*)(intptr_t)v8217;
	i8 v8219 = v8218+(+17);
	*(i1*)(intptr_t)v8219 = v8216;

	i1 v8220 = (i1)+9;
	*(i1*)(intptr_t)(ws+3496) = v8220;
	i8 v8221 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8221;
	i8 v8222 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8222)();

	i1 v8223 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v8223;
	i8 v8224 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8224;
	i8 v8225 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8225)();

}
	void f301_yy_destructor(void);

// reduce_22 workspace at ws+3384 length ws+0
void f332_reduce_22(void) {

	i8 v8226 = (i8)(intptr_t)(ws+3312);
	i8 v8227 = *(i8*)(intptr_t)v8226;
	i8 v8228 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8228 = v8227;

	i1 v8229 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v8229;
	i8 v8230 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8230;
	i8 v8231 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8231)();

}
	void f287_Negate(void);

// reduce_23 workspace at ws+3384 length ws+0
void f333_reduce_23(void) {

	i8 v8232 = (i8)(intptr_t)(ws+3304);
	i8 v8233 = *(i8*)(intptr_t)v8232;
	i8 v8234 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8234 = v8233;

	i8 v8235 = (i8)(intptr_t)(ws+3304);
	i8 v8236 = *(i8*)(intptr_t)v8235;
	*(i8*)(intptr_t)(ws+3384) = v8236;
	i8 v8237 = (i8)(intptr_t)(f287_Negate);

	((void(*)(void))(intptr_t)v8237)();

}
	void f121_MidBand(void);
	void f301_yy_destructor(void);

// reduce_24 workspace at ws+3384 length ws+8
void f334_reduce_24(void) {

	i8 v8238 = (i8)(intptr_t)(ws+3320);
	i8 v8239 = *(i8*)(intptr_t)v8238;
	*(i8*)(intptr_t)(ws+3392) = v8239;
	i8 v8240 = (i8)(intptr_t)(ws+3304);
	i8 v8241 = *(i8*)(intptr_t)v8240;
	*(i8*)(intptr_t)(ws+3400) = v8241;
	i2 v8242 = (i2)+0;
	*(i2*)(intptr_t)(ws+3408) = v8242;
	i2 v8243 = (i2)+0;
	*(i2*)(intptr_t)(ws+3410) = v8243;
	i2 v8244 = (i2)+0;
	*(i2*)(intptr_t)(ws+3412) = v8244;
	i1 v8245 = (i1)+0;
	*(i1*)(intptr_t)(ws+3414) = v8245;
	i8 v8246 = (i8)(intptr_t)(f121_MidBand);

	((void(*)(void))(intptr_t)v8246)();

	i8 v8247 = *(i8*)(intptr_t)(ws+3416);
	i8 v8248 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8248 = v8247;

	i8 v8249 = (i8)(intptr_t)(ws+3384);
	i8 v8250 = *(i8*)(intptr_t)v8249;
	i8 v8251 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8251 = v8250;

	i1 v8252 = (i1)+47;
	*(i1*)(intptr_t)(ws+3496) = v8252;
	i8 v8253 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8253;
	i8 v8254 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8254)();

}
	void f124_MidBor(void);
	void f301_yy_destructor(void);

// reduce_25 workspace at ws+3384 length ws+8
void f335_reduce_25(void) {

	i8 v8255 = (i8)(intptr_t)(ws+3320);
	i8 v8256 = *(i8*)(intptr_t)v8255;
	*(i8*)(intptr_t)(ws+3392) = v8256;
	i8 v8257 = (i8)(intptr_t)(ws+3304);
	i8 v8258 = *(i8*)(intptr_t)v8257;
	*(i8*)(intptr_t)(ws+3400) = v8258;
	i2 v8259 = (i2)+0;
	*(i2*)(intptr_t)(ws+3408) = v8259;
	i2 v8260 = (i2)+0;
	*(i2*)(intptr_t)(ws+3410) = v8260;
	i2 v8261 = (i2)+0;
	*(i2*)(intptr_t)(ws+3412) = v8261;
	i1 v8262 = (i1)+0;
	*(i1*)(intptr_t)(ws+3414) = v8262;
	i8 v8263 = (i8)(intptr_t)(f124_MidBor);

	((void(*)(void))(intptr_t)v8263)();

	i8 v8264 = *(i8*)(intptr_t)(ws+3416);
	i8 v8265 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8265 = v8264;

	i8 v8266 = (i8)(intptr_t)(ws+3384);
	i8 v8267 = *(i8*)(intptr_t)v8266;
	i8 v8268 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8268 = v8267;

	i1 v8269 = (i1)+48;
	*(i1*)(intptr_t)(ws+3496) = v8269;
	i8 v8270 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8270;
	i8 v8271 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8271)();

}
	void f288_ConditionalEq(void);
	void f301_yy_destructor(void);

// reduce_26 workspace at ws+3384 length ws+8
void f336_reduce_26(void) {

	i8 v8272 = (i8)(intptr_t)(ws+3320);
	i8 v8273 = *(i8*)(intptr_t)v8272;
	*(i8*)(intptr_t)(ws+3392) = v8273;
	i8 v8274 = (i8)(intptr_t)(ws+3304);
	i8 v8275 = *(i8*)(intptr_t)v8274;
	*(i8*)(intptr_t)(ws+3400) = v8275;
	i1 v8276 = (i1)+0;
	*(i1*)(intptr_t)(ws+3408) = v8276;
	i8 v8277 = (i8)(intptr_t)(f288_ConditionalEq);

	((void(*)(void))(intptr_t)v8277)();

	i8 v8278 = *(i8*)(intptr_t)(ws+3416);
	i8 v8279 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8279 = v8278;

	i8 v8280 = (i8)(intptr_t)(ws+3384);
	i8 v8281 = *(i8*)(intptr_t)v8280;
	i8 v8282 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8282 = v8281;

	i1 v8283 = (i1)+55;
	*(i1*)(intptr_t)(ws+3496) = v8283;
	i8 v8284 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8284;
	i8 v8285 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8285)();

}
	void f288_ConditionalEq(void);
	void f301_yy_destructor(void);

// reduce_27 workspace at ws+3384 length ws+8
void f337_reduce_27(void) {

	i8 v8286 = (i8)(intptr_t)(ws+3320);
	i8 v8287 = *(i8*)(intptr_t)v8286;
	*(i8*)(intptr_t)(ws+3392) = v8287;
	i8 v8288 = (i8)(intptr_t)(ws+3304);
	i8 v8289 = *(i8*)(intptr_t)v8288;
	*(i8*)(intptr_t)(ws+3400) = v8289;
	i1 v8290 = (i1)+1;
	*(i1*)(intptr_t)(ws+3408) = v8290;
	i8 v8291 = (i8)(intptr_t)(f288_ConditionalEq);

	((void(*)(void))(intptr_t)v8291)();

	i8 v8292 = *(i8*)(intptr_t)(ws+3416);
	i8 v8293 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8293 = v8292;

	i8 v8294 = (i8)(intptr_t)(ws+3384);
	i8 v8295 = *(i8*)(intptr_t)v8294;
	i8 v8296 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8296 = v8295;

	i1 v8297 = (i1)+56;
	*(i1*)(intptr_t)(ws+3496) = v8297;
	i8 v8298 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8298;
	i8 v8299 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8299)();

}
	void f289_ConditionalLt(void);
	void f301_yy_destructor(void);

// reduce_28 workspace at ws+3384 length ws+8
void f338_reduce_28(void) {

	i8 v8300 = (i8)(intptr_t)(ws+3320);
	i8 v8301 = *(i8*)(intptr_t)v8300;
	*(i8*)(intptr_t)(ws+3392) = v8301;
	i8 v8302 = (i8)(intptr_t)(ws+3304);
	i8 v8303 = *(i8*)(intptr_t)v8302;
	*(i8*)(intptr_t)(ws+3400) = v8303;
	i1 v8304 = (i1)+0;
	*(i1*)(intptr_t)(ws+3408) = v8304;
	i8 v8305 = (i8)(intptr_t)(f289_ConditionalLt);

	((void(*)(void))(intptr_t)v8305)();

	i8 v8306 = *(i8*)(intptr_t)(ws+3416);
	i8 v8307 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8307 = v8306;

	i8 v8308 = (i8)(intptr_t)(ws+3384);
	i8 v8309 = *(i8*)(intptr_t)v8308;
	i8 v8310 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8310 = v8309;

	i1 v8311 = (i1)+51;
	*(i1*)(intptr_t)(ws+3496) = v8311;
	i8 v8312 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8312;
	i8 v8313 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8313)();

}
	void f289_ConditionalLt(void);
	void f301_yy_destructor(void);

// reduce_29 workspace at ws+3384 length ws+8
void f339_reduce_29(void) {

	i8 v8314 = (i8)(intptr_t)(ws+3320);
	i8 v8315 = *(i8*)(intptr_t)v8314;
	*(i8*)(intptr_t)(ws+3392) = v8315;
	i8 v8316 = (i8)(intptr_t)(ws+3304);
	i8 v8317 = *(i8*)(intptr_t)v8316;
	*(i8*)(intptr_t)(ws+3400) = v8317;
	i1 v8318 = (i1)+1;
	*(i1*)(intptr_t)(ws+3408) = v8318;
	i8 v8319 = (i8)(intptr_t)(f289_ConditionalLt);

	((void(*)(void))(intptr_t)v8319)();

	i8 v8320 = *(i8*)(intptr_t)(ws+3416);
	i8 v8321 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8321 = v8320;

	i8 v8322 = (i8)(intptr_t)(ws+3384);
	i8 v8323 = *(i8*)(intptr_t)v8322;
	i8 v8324 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8324 = v8323;

	i1 v8325 = (i1)+54;
	*(i1*)(intptr_t)(ws+3496) = v8325;
	i8 v8326 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8326;
	i8 v8327 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8327)();

}
	void f289_ConditionalLt(void);
	void f301_yy_destructor(void);

// reduce_30 workspace at ws+3384 length ws+8
void f340_reduce_30(void) {

	i8 v8328 = (i8)(intptr_t)(ws+3304);
	i8 v8329 = *(i8*)(intptr_t)v8328;
	*(i8*)(intptr_t)(ws+3392) = v8329;
	i8 v8330 = (i8)(intptr_t)(ws+3320);
	i8 v8331 = *(i8*)(intptr_t)v8330;
	*(i8*)(intptr_t)(ws+3400) = v8331;
	i1 v8332 = (i1)+0;
	*(i1*)(intptr_t)(ws+3408) = v8332;
	i8 v8333 = (i8)(intptr_t)(f289_ConditionalLt);

	((void(*)(void))(intptr_t)v8333)();

	i8 v8334 = *(i8*)(intptr_t)(ws+3416);
	i8 v8335 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8335 = v8334;

	i8 v8336 = (i8)(intptr_t)(ws+3384);
	i8 v8337 = *(i8*)(intptr_t)v8336;
	i8 v8338 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8338 = v8337;

	i1 v8339 = (i1)+53;
	*(i1*)(intptr_t)(ws+3496) = v8339;
	i8 v8340 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8340;
	i8 v8341 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8341)();

}
	void f289_ConditionalLt(void);
	void f301_yy_destructor(void);

// reduce_31 workspace at ws+3384 length ws+8
void f341_reduce_31(void) {

	i8 v8342 = (i8)(intptr_t)(ws+3304);
	i8 v8343 = *(i8*)(intptr_t)v8342;
	*(i8*)(intptr_t)(ws+3392) = v8343;
	i8 v8344 = (i8)(intptr_t)(ws+3320);
	i8 v8345 = *(i8*)(intptr_t)v8344;
	*(i8*)(intptr_t)(ws+3400) = v8345;
	i1 v8346 = (i1)+1;
	*(i1*)(intptr_t)(ws+3408) = v8346;
	i8 v8347 = (i8)(intptr_t)(f289_ConditionalLt);

	((void(*)(void))(intptr_t)v8347)();

	i8 v8348 = *(i8*)(intptr_t)(ws+3416);
	i8 v8349 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8349 = v8348;

	i8 v8350 = (i8)(intptr_t)(ws+3384);
	i8 v8351 = *(i8*)(intptr_t)v8350;
	i8 v8352 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8352 = v8351;

	i1 v8353 = (i1)+52;
	*(i1*)(intptr_t)(ws+3496) = v8353;
	i8 v8354 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8354;
	i8 v8355 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8355)();

}
	void f106_MidConstant(void);

// reduce_32 workspace at ws+3384 length ws+8
void f342_reduce_32(void) {

	i8 v8356 = (i8)(intptr_t)(ws+3304);
	i4 v8357 = *(i4*)(intptr_t)v8356;
	*(i4*)(intptr_t)(ws+3592) = v8357;
	i8 v8358 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v8358)();

	i8 v8359 = *(i8*)(intptr_t)(ws+3600);
	i8 v8360 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8360 = v8359;

	i8 v8361 = (i8)(intptr_t)(ws+3384);
	i8 v8362 = *(i8*)(intptr_t)v8361;
	i8 v8363 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8363 = v8362;

}
	void f301_yy_destructor(void);

// reduce_33 workspace at ws+3384 length ws+0
void f343_reduce_33(void) {

	i8 v8364 = (i8)(intptr_t)(ws+3312);
	i8 v8365 = *(i8*)(intptr_t)v8364;
	i8 v8366 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8366 = v8365;

	i1 v8367 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v8367;
	i8 v8368 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8368;
	i8 v8369 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8369)();

}
	void f106_MidConstant(void);

// reduce_34 workspace at ws+3384 length ws+8
void f344_reduce_34(void) {

	i4 v8370 = (i4)+0;
	*(i4*)(intptr_t)(ws+3592) = v8370;
	i8 v8371 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v8371)();

	i8 v8372 = *(i8*)(intptr_t)(ws+3600);
	i8 v8373 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8373 = v8372;

	i8 v8374 = (i8)(intptr_t)(ws+3384);
	i8 v8375 = *(i8*)(intptr_t)v8374;
	i8 v8376 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8376 = v8375;

}

// reduce_35 workspace at ws+3384 length ws+0
void f345_reduce_35(void) {

	i8 v8377 = (i8)(intptr_t)(ws+3304);
	i8 v8378 = *(i8*)(intptr_t)v8377;
	i8 v8379 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8379 = v8378;

}
	void f276_Expr1Simple(void);

// reduce_36 workspace at ws+3384 length ws+8
void f346_reduce_36(void) {

	i1 v8380 = (i1)+111;
	*(i1*)(intptr_t)(ws+3392) = v8380;
	i8 v8381 = (i8)(intptr_t)(ws+3304);
	i8 v8382 = *(i8*)(intptr_t)v8381;
	*(i8*)(intptr_t)(ws+3400) = v8382;
	i8 v8383 = (i8)(intptr_t)(f276_Expr1Simple);

	((void(*)(void))(intptr_t)v8383)();

	i8 v8384 = *(i8*)(intptr_t)(ws+3408);
	i8 v8385 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8385 = v8384;

	i8 v8386 = (i8)(intptr_t)(ws+3384);
	i8 v8387 = *(i8*)(intptr_t)v8386;
	i8 v8388 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8388 = v8387;

}
	void f276_Expr1Simple(void);

// reduce_37 workspace at ws+3384 length ws+8
void f347_reduce_37(void) {

	i1 v8389 = (i1)+106;
	*(i1*)(intptr_t)(ws+3392) = v8389;
	i8 v8390 = (i8)(intptr_t)(ws+3304);
	i8 v8391 = *(i8*)(intptr_t)v8390;
	*(i8*)(intptr_t)(ws+3400) = v8391;
	i8 v8392 = (i8)(intptr_t)(f276_Expr1Simple);

	((void(*)(void))(intptr_t)v8392)();

	i8 v8393 = *(i8*)(intptr_t)(ws+3408);
	i8 v8394 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8394 = v8393;

	i8 v8395 = (i8)(intptr_t)(ws+3384);
	i8 v8396 = *(i8*)(intptr_t)v8395;
	i8 v8397 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8397 = v8396;

}
	void f277_ExprAdd(void);
	void f301_yy_destructor(void);

// reduce_38 workspace at ws+3384 length ws+8
void f348_reduce_38(void) {

	i8 v8398 = (i8)(intptr_t)(ws+3320);
	i8 v8399 = *(i8*)(intptr_t)v8398;
	*(i8*)(intptr_t)(ws+3392) = v8399;
	i8 v8400 = (i8)(intptr_t)(ws+3304);
	i8 v8401 = *(i8*)(intptr_t)v8400;
	*(i8*)(intptr_t)(ws+3400) = v8401;
	i8 v8402 = (i8)(intptr_t)(f277_ExprAdd);

	((void(*)(void))(intptr_t)v8402)();

	i8 v8403 = *(i8*)(intptr_t)(ws+3408);
	i8 v8404 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8404 = v8403;

	i8 v8405 = (i8)(intptr_t)(ws+3384);
	i8 v8406 = *(i8*)(intptr_t)v8405;
	i8 v8407 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8407 = v8406;

	i1 v8408 = (i1)+19;
	*(i1*)(intptr_t)(ws+3496) = v8408;
	i8 v8409 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8409;
	i8 v8410 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8410)();

}
	void f279_ExprSub(void);
	void f301_yy_destructor(void);

// reduce_39 workspace at ws+3384 length ws+8
void f349_reduce_39(void) {

	i8 v8411 = (i8)(intptr_t)(ws+3320);
	i8 v8412 = *(i8*)(intptr_t)v8411;
	*(i8*)(intptr_t)(ws+3392) = v8412;
	i8 v8413 = (i8)(intptr_t)(ws+3304);
	i8 v8414 = *(i8*)(intptr_t)v8413;
	*(i8*)(intptr_t)(ws+3400) = v8414;
	i8 v8415 = (i8)(intptr_t)(f279_ExprSub);

	((void(*)(void))(intptr_t)v8415)();

	i8 v8416 = *(i8*)(intptr_t)(ws+3408);
	i8 v8417 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8417 = v8416;

	i8 v8418 = (i8)(intptr_t)(ws+3384);
	i8 v8419 = *(i8*)(intptr_t)v8418;
	i8 v8420 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8420 = v8419;

	i1 v8421 = (i1)+14;
	*(i1*)(intptr_t)(ws+3496) = v8421;
	i8 v8422 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8422;
	i8 v8423 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8423)();

}
	void f281_Expr2Simple(void);
	void f301_yy_destructor(void);

// reduce_40 workspace at ws+3384 length ws+8
void f350_reduce_40(void) {

	i1 v8424 = (i1)+161;
	*(i1*)(intptr_t)(ws+3392) = v8424;
	i1 v8425 = (i1)+161;
	*(i1*)(intptr_t)(ws+3393) = v8425;
	i8 v8426 = (i8)(intptr_t)(ws+3320);
	i8 v8427 = *(i8*)(intptr_t)v8426;
	*(i8*)(intptr_t)(ws+3400) = v8427;
	i8 v8428 = (i8)(intptr_t)(ws+3304);
	i8 v8429 = *(i8*)(intptr_t)v8428;
	*(i8*)(intptr_t)(ws+3408) = v8429;
	i8 v8430 = (i8)(intptr_t)(f281_Expr2Simple);

	((void(*)(void))(intptr_t)v8430)();

	i8 v8431 = *(i8*)(intptr_t)(ws+3416);
	i8 v8432 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8432 = v8431;

	i8 v8433 = (i8)(intptr_t)(ws+3384);
	i8 v8434 = *(i8*)(intptr_t)v8433;
	i8 v8435 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8435 = v8434;

	i1 v8436 = (i1)+24;
	*(i1*)(intptr_t)(ws+3496) = v8436;
	i8 v8437 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8437;
	i8 v8438 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8438)();

}
	void f281_Expr2Simple(void);
	void f301_yy_destructor(void);

// reduce_41 workspace at ws+3384 length ws+8
void f351_reduce_41(void) {

	i1 v8439 = (i1)+141;
	*(i1*)(intptr_t)(ws+3392) = v8439;
	i1 v8440 = (i1)+136;
	*(i1*)(intptr_t)(ws+3393) = v8440;
	i8 v8441 = (i8)(intptr_t)(ws+3320);
	i8 v8442 = *(i8*)(intptr_t)v8441;
	*(i8*)(intptr_t)(ws+3400) = v8442;
	i8 v8443 = (i8)(intptr_t)(ws+3304);
	i8 v8444 = *(i8*)(intptr_t)v8443;
	*(i8*)(intptr_t)(ws+3408) = v8444;
	i8 v8445 = (i8)(intptr_t)(f281_Expr2Simple);

	((void(*)(void))(intptr_t)v8445)();

	i8 v8446 = *(i8*)(intptr_t)(ws+3416);
	i8 v8447 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8447 = v8446;

	i8 v8448 = (i8)(intptr_t)(ws+3384);
	i8 v8449 = *(i8*)(intptr_t)v8448;
	i8 v8450 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8450 = v8449;

	i1 v8451 = (i1)+23;
	*(i1*)(intptr_t)(ws+3496) = v8451;
	i8 v8452 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8452;
	i8 v8453 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8453)();

}
	void f281_Expr2Simple(void);
	void f301_yy_destructor(void);

// reduce_42 workspace at ws+3384 length ws+8
void f352_reduce_42(void) {

	i1 v8454 = (i1)+151;
	*(i1*)(intptr_t)(ws+3392) = v8454;
	i1 v8455 = (i1)+146;
	*(i1*)(intptr_t)(ws+3393) = v8455;
	i8 v8456 = (i8)(intptr_t)(ws+3320);
	i8 v8457 = *(i8*)(intptr_t)v8456;
	*(i8*)(intptr_t)(ws+3400) = v8457;
	i8 v8458 = (i8)(intptr_t)(ws+3304);
	i8 v8459 = *(i8*)(intptr_t)v8458;
	*(i8*)(intptr_t)(ws+3408) = v8459;
	i8 v8460 = (i8)(intptr_t)(f281_Expr2Simple);

	((void(*)(void))(intptr_t)v8460)();

	i8 v8461 = *(i8*)(intptr_t)(ws+3416);
	i8 v8462 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8462 = v8461;

	i8 v8463 = (i8)(intptr_t)(ws+3384);
	i8 v8464 = *(i8*)(intptr_t)v8463;
	i8 v8465 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8465 = v8464;

	i1 v8466 = (i1)+18;
	*(i1*)(intptr_t)(ws+3496) = v8466;
	i8 v8467 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8467;
	i8 v8468 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8468)();

}
	void f281_Expr2Simple(void);
	void f301_yy_destructor(void);

// reduce_43 workspace at ws+3384 length ws+8
void f353_reduce_43(void) {

	i1 v8469 = (i1)+176;
	*(i1*)(intptr_t)(ws+3392) = v8469;
	i1 v8470 = (i1)+176;
	*(i1*)(intptr_t)(ws+3393) = v8470;
	i8 v8471 = (i8)(intptr_t)(ws+3320);
	i8 v8472 = *(i8*)(intptr_t)v8471;
	*(i8*)(intptr_t)(ws+3400) = v8472;
	i8 v8473 = (i8)(intptr_t)(ws+3304);
	i8 v8474 = *(i8*)(intptr_t)v8473;
	*(i8*)(intptr_t)(ws+3408) = v8474;
	i8 v8475 = (i8)(intptr_t)(f281_Expr2Simple);

	((void(*)(void))(intptr_t)v8475)();

	i8 v8476 = *(i8*)(intptr_t)(ws+3416);
	i8 v8477 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8477 = v8476;

	i8 v8478 = (i8)(intptr_t)(ws+3384);
	i8 v8479 = *(i8*)(intptr_t)v8478;
	i8 v8480 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8480 = v8479;

	i1 v8481 = (i1)+50;
	*(i1*)(intptr_t)(ws+3496) = v8481;
	i8 v8482 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8482;
	i8 v8483 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8483)();

}
	void f281_Expr2Simple(void);
	void f301_yy_destructor(void);

// reduce_44 workspace at ws+3384 length ws+8
void f354_reduce_44(void) {

	i1 v8484 = (i1)+166;
	*(i1*)(intptr_t)(ws+3392) = v8484;
	i1 v8485 = (i1)+166;
	*(i1*)(intptr_t)(ws+3393) = v8485;
	i8 v8486 = (i8)(intptr_t)(ws+3320);
	i8 v8487 = *(i8*)(intptr_t)v8486;
	*(i8*)(intptr_t)(ws+3400) = v8487;
	i8 v8488 = (i8)(intptr_t)(ws+3304);
	i8 v8489 = *(i8*)(intptr_t)v8488;
	*(i8*)(intptr_t)(ws+3408) = v8489;
	i8 v8490 = (i8)(intptr_t)(f281_Expr2Simple);

	((void(*)(void))(intptr_t)v8490)();

	i8 v8491 = *(i8*)(intptr_t)(ws+3416);
	i8 v8492 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8492 = v8491;

	i8 v8493 = (i8)(intptr_t)(ws+3384);
	i8 v8494 = *(i8*)(intptr_t)v8493;
	i8 v8495 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8495 = v8494;

	i1 v8496 = (i1)+60;
	*(i1*)(intptr_t)(ws+3496) = v8496;
	i8 v8497 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8497;
	i8 v8498 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8498)();

}
	void f281_Expr2Simple(void);
	void f301_yy_destructor(void);

// reduce_45 workspace at ws+3384 length ws+8
void f355_reduce_45(void) {

	i1 v8499 = (i1)+171;
	*(i1*)(intptr_t)(ws+3392) = v8499;
	i1 v8500 = (i1)+171;
	*(i1*)(intptr_t)(ws+3393) = v8500;
	i8 v8501 = (i8)(intptr_t)(ws+3320);
	i8 v8502 = *(i8*)(intptr_t)v8501;
	*(i8*)(intptr_t)(ws+3400) = v8502;
	i8 v8503 = (i8)(intptr_t)(ws+3304);
	i8 v8504 = *(i8*)(intptr_t)v8503;
	*(i8*)(intptr_t)(ws+3408) = v8504;
	i8 v8505 = (i8)(intptr_t)(f281_Expr2Simple);

	((void(*)(void))(intptr_t)v8505)();

	i8 v8506 = *(i8*)(intptr_t)(ws+3416);
	i8 v8507 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8507 = v8506;

	i8 v8508 = (i8)(intptr_t)(ws+3384);
	i8 v8509 = *(i8*)(intptr_t)v8508;
	i8 v8510 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8510 = v8509;

	i1 v8511 = (i1)+49;
	*(i1*)(intptr_t)(ws+3496) = v8511;
	i8 v8512 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8512;
	i8 v8513 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8513)();

}
	void f284_ExprShift(void);
	void f301_yy_destructor(void);

// reduce_46 workspace at ws+3384 length ws+8
void f356_reduce_46(void) {

	i1 v8514 = (i1)+116;
	*(i1*)(intptr_t)(ws+3392) = v8514;
	i1 v8515 = (i1)+116;
	*(i1*)(intptr_t)(ws+3393) = v8515;
	i8 v8516 = (i8)(intptr_t)(ws+3320);
	i8 v8517 = *(i8*)(intptr_t)v8516;
	*(i8*)(intptr_t)(ws+3400) = v8517;
	i8 v8518 = (i8)(intptr_t)(ws+3304);
	i8 v8519 = *(i8*)(intptr_t)v8518;
	*(i8*)(intptr_t)(ws+3408) = v8519;
	i8 v8520 = (i8)(intptr_t)(f284_ExprShift);

	((void(*)(void))(intptr_t)v8520)();

	i8 v8521 = *(i8*)(intptr_t)(ws+3416);
	i8 v8522 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8522 = v8521;

	i8 v8523 = (i8)(intptr_t)(ws+3384);
	i8 v8524 = *(i8*)(intptr_t)v8523;
	i8 v8525 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8525 = v8524;

	i1 v8526 = (i1)+57;
	*(i1*)(intptr_t)(ws+3496) = v8526;
	i8 v8527 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8527;
	i8 v8528 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8528)();

}
	void f284_ExprShift(void);
	void f301_yy_destructor(void);

// reduce_47 workspace at ws+3384 length ws+8
void f357_reduce_47(void) {

	i1 v8529 = (i1)+126;
	*(i1*)(intptr_t)(ws+3392) = v8529;
	i1 v8530 = (i1)+121;
	*(i1*)(intptr_t)(ws+3393) = v8530;
	i8 v8531 = (i8)(intptr_t)(ws+3320);
	i8 v8532 = *(i8*)(intptr_t)v8531;
	*(i8*)(intptr_t)(ws+3400) = v8532;
	i8 v8533 = (i8)(intptr_t)(ws+3304);
	i8 v8534 = *(i8*)(intptr_t)v8533;
	*(i8*)(intptr_t)(ws+3408) = v8534;
	i8 v8535 = (i8)(intptr_t)(f284_ExprShift);

	((void(*)(void))(intptr_t)v8535)();

	i8 v8536 = *(i8*)(intptr_t)(ws+3416);
	i8 v8537 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8537 = v8536;

	i8 v8538 = (i8)(intptr_t)(ws+3384);
	i8 v8539 = *(i8*)(intptr_t)v8538;
	i8 v8540 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8540 = v8539;

	i1 v8541 = (i1)+58;
	*(i1*)(intptr_t)(ws+3496) = v8541;
	i8 v8542 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8542;
	i8 v8543 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8543)();

}
	void f221_CheckNotPartialType(void);
	void f67_IsPtr(void);
	void f67_IsPtr(void);
const i1 c01_s016d[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f75_SimpleError(void);
	void f228_IsSNum(void);
	void f172_MidCCast(void);
	void f301_yy_destructor(void);

// reduce_48 workspace at ws+3384 length ws+16
void f358_reduce_48(void) {

	i8 v8544 = (i8)(intptr_t)(ws+3304);
	i8 v8545 = *(i8*)(intptr_t)v8544;
	*(i8*)(intptr_t)(ws+3520) = v8545;
	i8 v8546 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v8546)();

	i8 v8547 = (i8)(intptr_t)(ws+3320);
	i8 v8548 = *(i8*)(intptr_t)v8547;
	i8 v8549 = v8548+(+48);
	i1 v8550 = *(i1*)(intptr_t)v8549;
	i1 v8551 = (i1)+40;
	if (v8550==v8551) goto c01_0641; else goto c01_0642;

c01_0642:;

	i8 v8552 = (i8)(intptr_t)(ws+3320);
	i8 v8553 = *(i8*)(intptr_t)v8552;
	i8 v8554 = v8553+(+24);
	i8 v8555 = *(i8*)(intptr_t)v8554;
	i8 v8556 = v8555+(+48);
	i2 v8557 = *(i2*)(intptr_t)v8556;
	i8 v8558 = (i8)(intptr_t)(ws+3304);
	i8 v8559 = *(i8*)(intptr_t)v8558;
	i8 v8560 = v8559+(+48);
	i2 v8561 = *(i2*)(intptr_t)v8560;
	if (v8557==v8561) goto c01_0641; else goto c01_0640;

c01_0640:;

	i8 v8562 = (i8)(intptr_t)(ws+3320);
	i8 v8563 = *(i8*)(intptr_t)v8562;
	i8 v8564 = v8563+(+24);
	i8 v8565 = *(i8*)(intptr_t)v8564;
	*(i8*)(intptr_t)(ws+3560) = v8565;
	i8 v8566 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v8566)();

	i1 v8567 = *(i1*)(intptr_t)(ws+3568);
	i8 v8568 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8568 = v8567;

	i8 v8569 = (i8)(intptr_t)(ws+3304);
	i8 v8570 = *(i8*)(intptr_t)v8569;
	*(i8*)(intptr_t)(ws+3560) = v8570;
	i8 v8571 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v8571)();

	i1 v8572 = *(i1*)(intptr_t)(ws+3568);
	i8 v8573 = (i8)(intptr_t)(ws+3385);
	*(i1*)(intptr_t)v8573 = v8572;

	i8 v8574 = (i8)(intptr_t)(ws+3384);
	i1 v8575 = *(i1*)(intptr_t)v8574;
	i1 v8576 = (i1)+0;
	if (v8575==v8576) goto c01_064a; else goto c01_0648;

c01_064a:;

	i8 v8577 = (i8)(intptr_t)(ws+3385);
	i1 v8578 = *(i1*)(intptr_t)v8577;
	i1 v8579 = (i1)+0;
	if (v8578==v8579) goto c01_0649; else goto c01_0648;

c01_0648:;

	i8 v8580 = (i8)(intptr_t)c01_s016d;
	*(i8*)(intptr_t)(ws+3648) = v8580;
	i8 v8581 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v8581)();

c01_0649:;

c01_0643:;

	i8 v8582 = (i8)(intptr_t)(ws+3320);
	i8 v8583 = *(i8*)(intptr_t)v8582;
	i8 v8584 = v8583+(+24);
	i8 v8585 = *(i8*)(intptr_t)v8584;
	*(i8*)(intptr_t)(ws+3456) = v8585;
	i8 v8586 = (i8)(intptr_t)(f228_IsSNum);

	((void(*)(void))(intptr_t)v8586)();

	i1 v8587 = *(i1*)(intptr_t)(ws+3464);
	i8 v8588 = (i8)(intptr_t)(ws+3386);
	*(i1*)(intptr_t)v8588 = v8587;

	i8 v8589 = (i8)(intptr_t)(ws+3304);
	i8 v8590 = *(i8*)(intptr_t)v8589;
	i8 v8591 = v8590+(+48);
	i2 v8592 = *(i2*)(intptr_t)v8591;
	i1 v8593 = v8592;
	*(i1*)(intptr_t)(ws+3496) = v8593;
	i8 v8594 = (i8)(intptr_t)(ws+3320);
	i8 v8595 = *(i8*)(intptr_t)v8594;
	*(i8*)(intptr_t)(ws+3504) = v8595;
	i8 v8596 = (i8)(intptr_t)(ws+3386);
	i1 v8597 = *(i1*)(intptr_t)v8596;
	*(i1*)(intptr_t)(ws+3512) = v8597;
	i8 v8598 = (i8)(intptr_t)(f172_MidCCast);

	((void(*)(void))(intptr_t)v8598)();

	i8 v8599 = *(i8*)(intptr_t)(ws+3520);
	i8 v8600 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8600 = v8599;

	i8 v8601 = (i8)(intptr_t)(ws+3392);
	i8 v8602 = *(i8*)(intptr_t)v8601;
	i8 v8603 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8603 = v8602;

	goto c01_063b;

c01_0641:;

	i8 v8604 = (i8)(intptr_t)(ws+3320);
	i8 v8605 = *(i8*)(intptr_t)v8604;
	i8 v8606 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8606 = v8605;

c01_063b:;

	i8 v8607 = (i8)(intptr_t)(ws+3304);
	i8 v8608 = *(i8*)(intptr_t)v8607;
	i8 v8609 = (i8)(intptr_t)(ws+3296);
	i8 v8610 = *(i8*)(intptr_t)v8609;
	i8 v8611 = v8610+(+24);
	*(i8*)(intptr_t)v8611 = v8608;

	i1 v8612 = (i1)+59;
	*(i1*)(intptr_t)(ws+3496) = v8612;
	i8 v8613 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8613;
	i8 v8614 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8614)();

}
	void f232_UndoLValue(void);
	void f229_IsScalar(void);
const i1 c01_s016e[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f75_SimpleError(void);

// reduce_49 workspace at ws+3384 length ws+17
void f359_reduce_49(void) {

	i8 v8615 = (i8)(intptr_t)(ws+3304);
	i8 v8616 = *(i8*)(intptr_t)v8615;
	*(i8*)(intptr_t)(ws+3432) = v8616;
	i8 v8617 = (i8)(intptr_t)(f232_UndoLValue);

	((void(*)(void))(intptr_t)v8617)();

	i8 v8618 = *(i8*)(intptr_t)(ws+3440);
	i8 v8619 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8619 = v8618;

	i8 v8620 = (i8)(intptr_t)(ws+3384);
	i8 v8621 = *(i8*)(intptr_t)v8620;
	i8 v8622 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8622 = v8621;

	i8 v8623 = (i8)(intptr_t)(ws+3296);
	i8 v8624 = *(i8*)(intptr_t)v8623;
	i8 v8625 = v8624+(+48);
	i1 v8626 = *(i1*)(intptr_t)v8625;
	i1 v8627 = (i1)+42;
	if (v8626==v8627) goto c01_064e; else goto c01_064f;

c01_064e:;

	i8 v8628 = (i8)(intptr_t)(ws+3296);
	i8 v8629 = *(i8*)(intptr_t)v8628;
	i8 v8630 = *(i8*)(intptr_t)v8629;
	i8 v8631 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8631 = v8630;

	i8 v8632 = (i8)(intptr_t)(ws+3392);
	i8 v8633 = *(i8*)(intptr_t)v8632;
	i8 v8634 = *(i8*)(intptr_t)v8633;
	i8 v8635 = *(i8*)(intptr_t)v8634;
	*(i8*)(intptr_t)(ws+3544) = v8635;
	i8 v8636 = (i8)(intptr_t)(f229_IsScalar);

	((void(*)(void))(intptr_t)v8636)();

	i1 v8637 = *(i1*)(intptr_t)(ws+3552);
	i8 v8638 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v8638 = v8637;

	i8 v8639 = (i8)(intptr_t)(ws+3400);
	i1 v8640 = *(i1*)(intptr_t)v8639;
	i1 v8641 = (i1)+0;
	if (v8640==v8641) goto c01_0654; else goto c01_0653;

c01_0653:;

	i8 v8642 = (i8)(intptr_t)c01_s016e;
	*(i8*)(intptr_t)(ws+3648) = v8642;
	i8 v8643 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v8643)();

c01_0654:;

c01_0650:;

c01_064f:;

c01_064b:;

}
	void f232_UndoLValue(void);
	void f301_yy_destructor(void);

// reduce_50 workspace at ws+3384 length ws+8
void f360_reduce_50(void) {

	i8 v8644 = (i8)(intptr_t)(ws+3304);
	i8 v8645 = *(i8*)(intptr_t)v8644;
	*(i8*)(intptr_t)(ws+3432) = v8645;
	i8 v8646 = (i8)(intptr_t)(f232_UndoLValue);

	((void(*)(void))(intptr_t)v8646)();

	i8 v8647 = *(i8*)(intptr_t)(ws+3440);
	i8 v8648 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8648 = v8647;

	i8 v8649 = (i8)(intptr_t)(ws+3384);
	i8 v8650 = *(i8*)(intptr_t)v8649;
	i8 v8651 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8651 = v8650;

	i1 v8652 = (i1)+60;
	*(i1*)(intptr_t)(ws+3496) = v8652;
	i8 v8653 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8653;
	i8 v8654 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8654)();

}
	void f67_IsPtr(void);
	void f290_parser_i_bad_next_prev(void);
	void f106_MidConstant(void);
	void f171_MidC2Op(void);

// reduce_51 workspace at ws+3384 length ws+24
void f361_reduce_51(void) {

	i8 v8655 = (i8)(intptr_t)(ws+3304);
	i8 v8656 = *(i8*)(intptr_t)v8655;
	i8 v8657 = v8656+(+24);
	i8 v8658 = *(i8*)(intptr_t)v8657;
	*(i8*)(intptr_t)(ws+3560) = v8658;
	i8 v8659 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v8659)();

	i1 v8660 = *(i1*)(intptr_t)(ws+3568);
	i8 v8661 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8661 = v8660;

	i8 v8662 = (i8)(intptr_t)(ws+3384);
	i1 v8663 = *(i1*)(intptr_t)v8662;
	i1 v8664 = (i1)+0;
	if (v8663==v8664) goto c01_0658; else goto c01_0659;

c01_0658:;

	i8 v8665 = (i8)(intptr_t)(f290_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8665)();

c01_0659:;

c01_0655:;

	i8 v8666 = (i8)(intptr_t)(ws+3304);
	i8 v8667 = *(i8*)(intptr_t)v8666;
	i8 v8668 = v8667+(+24);
	i8 v8669 = *(i8*)(intptr_t)v8668;
	i8 v8670 = *(i8*)(intptr_t)v8669;
	i8 v8671 = v8670+(+50);
	i2 v8672 = *(i2*)(intptr_t)v8671;
	i4 v8673 = v8672;
	*(i4*)(intptr_t)(ws+3592) = v8673;
	i8 v8674 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v8674)();

	i8 v8675 = *(i8*)(intptr_t)(ws+3600);
	i8 v8676 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8676 = v8675;

	i1 v8677 = (i1)+156;
	*(i1*)(intptr_t)(ws+3496) = v8677;
	i8 v8678 = (i8)(intptr_t)(ws+1528);
	i8 v8679 = *(i8*)(intptr_t)v8678;
	i8 v8680 = v8679+(+48);
	i2 v8681 = *(i2*)(intptr_t)v8680;
	i1 v8682 = v8681;
	*(i1*)(intptr_t)(ws+3497) = v8682;
	i8 v8683 = (i8)(intptr_t)(ws+3304);
	i8 v8684 = *(i8*)(intptr_t)v8683;
	*(i8*)(intptr_t)(ws+3504) = v8684;
	i8 v8685 = (i8)(intptr_t)(ws+3392);
	i8 v8686 = *(i8*)(intptr_t)v8685;
	*(i8*)(intptr_t)(ws+3512) = v8686;
	i8 v8687 = (i8)(intptr_t)(f171_MidC2Op);

	((void(*)(void))(intptr_t)v8687)();

	i8 v8688 = *(i8*)(intptr_t)(ws+3520);
	i8 v8689 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8689 = v8688;

	i8 v8690 = (i8)(intptr_t)(ws+3400);
	i8 v8691 = *(i8*)(intptr_t)v8690;
	i8 v8692 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8692 = v8691;

	i8 v8693 = (i8)(intptr_t)(ws+3304);
	i8 v8694 = *(i8*)(intptr_t)v8693;
	i8 v8695 = v8694+(+24);
	i8 v8696 = *(i8*)(intptr_t)v8695;
	i8 v8697 = (i8)(intptr_t)(ws+3296);
	i8 v8698 = *(i8*)(intptr_t)v8697;
	i8 v8699 = v8698+(+24);
	*(i8*)(intptr_t)v8699 = v8696;

}
	void f67_IsPtr(void);
	void f290_parser_i_bad_next_prev(void);
	void f106_MidConstant(void);
	void f171_MidC2Op(void);

// reduce_52 workspace at ws+3384 length ws+24
void f362_reduce_52(void) {

	i8 v8700 = (i8)(intptr_t)(ws+3304);
	i8 v8701 = *(i8*)(intptr_t)v8700;
	i8 v8702 = v8701+(+24);
	i8 v8703 = *(i8*)(intptr_t)v8702;
	*(i8*)(intptr_t)(ws+3560) = v8703;
	i8 v8704 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v8704)();

	i1 v8705 = *(i1*)(intptr_t)(ws+3568);
	i8 v8706 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8706 = v8705;

	i8 v8707 = (i8)(intptr_t)(ws+3384);
	i1 v8708 = *(i1*)(intptr_t)v8707;
	i1 v8709 = (i1)+0;
	if (v8708==v8709) goto c01_065d; else goto c01_065e;

c01_065d:;

	i8 v8710 = (i8)(intptr_t)(f290_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8710)();

c01_065e:;

c01_065a:;

	i8 v8711 = (i8)(intptr_t)(ws+3304);
	i8 v8712 = *(i8*)(intptr_t)v8711;
	i8 v8713 = v8712+(+24);
	i8 v8714 = *(i8*)(intptr_t)v8713;
	i8 v8715 = *(i8*)(intptr_t)v8714;
	i8 v8716 = v8715+(+50);
	i2 v8717 = *(i2*)(intptr_t)v8716;
	i4 v8718 = v8717;
	*(i4*)(intptr_t)(ws+3592) = v8718;
	i8 v8719 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v8719)();

	i8 v8720 = *(i8*)(intptr_t)(ws+3600);
	i8 v8721 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8721 = v8720;

	i1 v8722 = (i1)+131;
	*(i1*)(intptr_t)(ws+3496) = v8722;
	i8 v8723 = (i8)(intptr_t)(ws+1528);
	i8 v8724 = *(i8*)(intptr_t)v8723;
	i8 v8725 = v8724+(+48);
	i2 v8726 = *(i2*)(intptr_t)v8725;
	i1 v8727 = v8726;
	*(i1*)(intptr_t)(ws+3497) = v8727;
	i8 v8728 = (i8)(intptr_t)(ws+3304);
	i8 v8729 = *(i8*)(intptr_t)v8728;
	*(i8*)(intptr_t)(ws+3504) = v8729;
	i8 v8730 = (i8)(intptr_t)(ws+3392);
	i8 v8731 = *(i8*)(intptr_t)v8730;
	*(i8*)(intptr_t)(ws+3512) = v8731;
	i8 v8732 = (i8)(intptr_t)(f171_MidC2Op);

	((void(*)(void))(intptr_t)v8732)();

	i8 v8733 = *(i8*)(intptr_t)(ws+3520);
	i8 v8734 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8734 = v8733;

	i8 v8735 = (i8)(intptr_t)(ws+3400);
	i8 v8736 = *(i8*)(intptr_t)v8735;
	i8 v8737 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8737 = v8736;

	i8 v8738 = (i8)(intptr_t)(ws+3304);
	i8 v8739 = *(i8*)(intptr_t)v8738;
	i8 v8740 = v8739+(+24);
	i8 v8741 = *(i8*)(intptr_t)v8740;
	i8 v8742 = (i8)(intptr_t)(ws+3296);
	i8 v8743 = *(i8*)(intptr_t)v8742;
	i8 v8744 = v8743+(+24);
	*(i8*)(intptr_t)v8744 = v8741;

}
	void f106_MidConstant(void);

// reduce_53 workspace at ws+3384 length ws+8
void f363_reduce_53(void) {

	i8 v8745 = (i8)(intptr_t)(ws+3304);
	i8 v8746 = *(i8*)(intptr_t)v8745;
	i8 v8747 = v8746+(+48);
	i2 v8748 = *(i2*)(intptr_t)v8747;
	i4 v8749 = v8748;
	*(i4*)(intptr_t)(ws+3592) = v8749;
	i8 v8750 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v8750)();

	i8 v8751 = *(i8*)(intptr_t)(ws+3600);
	i8 v8752 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8752 = v8751;

	i8 v8753 = (i8)(intptr_t)(ws+3384);
	i8 v8754 = *(i8*)(intptr_t)v8753;
	i8 v8755 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8755 = v8754;

}
	void f225_IsArray(void);
const i1 c01_s016f[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f75_SimpleError(void);
	void f106_MidConstant(void);

// reduce_54 workspace at ws+3384 length ws+16
void f364_reduce_54(void) {

	i8 v8756 = (i8)(intptr_t)(ws+3304);
	i8 v8757 = *(i8*)(intptr_t)v8756;
	*(i8*)(intptr_t)(ws+3496) = v8757;
	i8 v8758 = (i8)(intptr_t)(f225_IsArray);

	((void(*)(void))(intptr_t)v8758)();

	i1 v8759 = *(i1*)(intptr_t)(ws+3504);
	i8 v8760 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8760 = v8759;

	i8 v8761 = (i8)(intptr_t)(ws+3384);
	i1 v8762 = *(i1*)(intptr_t)v8761;
	i1 v8763 = (i1)+0;
	if (v8762==v8763) goto c01_0662; else goto c01_0663;

c01_0662:;

	i8 v8764 = (i8)(intptr_t)c01_s016f;
	*(i8*)(intptr_t)(ws+3648) = v8764;
	i8 v8765 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v8765)();

c01_0663:;

c01_065f:;

	i8 v8766 = (i8)(intptr_t)(ws+3304);
	i8 v8767 = *(i8*)(intptr_t)v8766;
	i8 v8768 = v8767+(+8);
	i2 v8769 = *(i2*)(intptr_t)v8768;
	i4 v8770 = v8769;
	*(i4*)(intptr_t)(ws+3592) = v8770;
	i8 v8771 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v8771)();

	i8 v8772 = *(i8*)(intptr_t)(ws+3600);
	i8 v8773 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8773 = v8772;

	i8 v8774 = (i8)(intptr_t)(ws+3392);
	i8 v8775 = *(i8*)(intptr_t)v8774;
	i8 v8776 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8776 = v8775;

}
	void f73_StartError(void);
	void f11_print(void);
const i1 c01_s0170[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f11_print(void);
	void f74_EndError(void);

// not_a_value workspace at ws+3424 length ws+0
void f366_not_a_value(void) {

	i8 v8777 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v8777)();

	i8 v8778 = (i8)(intptr_t)(ws+3304);
	i8 v8779 = *(i8*)(intptr_t)v8778;
	i8 v8780 = v8779+(+8);
	i8 v8781 = *(i8*)(intptr_t)v8780;
	*(i8*)(intptr_t)(ws+3696) = v8781;
	i8 v8782 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v8782)();

	i8 v8783 = (i8)(intptr_t)c01_s0170;
	*(i8*)(intptr_t)(ws+3696) = v8783;
	i8 v8784 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v8784)();

	i8 v8785 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v8785)();

}
	void f106_MidConstant(void);
	void f125_MidAddress(void);
	void f260_MakePointerType(void);
	void f231_MakeLValue(void);
	void f149_MidSubref(void);
	void f366_not_a_value(void);
	void f366_not_a_value(void);

// reduce_55 workspace at ws+3384 length ws+40
void f365_reduce_55(void) {


	i8 v8786 = (i8)(intptr_t)(ws+3304);
	i8 v8787 = *(i8*)(intptr_t)v8786;
	i8 v8788 = v8787+(+32);
	i1 v8789 = *(i1*)(intptr_t)v8788;

	if (v8789 != +7) goto c01_0665;

	i8 v8790 = (i8)(intptr_t)(ws+3304);
	i8 v8791 = *(i8*)(intptr_t)v8790;
	i4 v8792 = *(i4*)(intptr_t)v8791;
	*(i4*)(intptr_t)(ws+3592) = v8792;
	i8 v8793 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v8793)();

	i8 v8794 = *(i8*)(intptr_t)(ws+3600);
	i8 v8795 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8795 = v8794;

	i8 v8796 = (i8)(intptr_t)(ws+3384);
	i8 v8797 = *(i8*)(intptr_t)v8796;
	i8 v8798 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8798 = v8797;

	goto c01_0664;

c01_0665:;

	if (v8789 != +28) goto c01_0666;

	i8 v8799 = (i8)(intptr_t)(ws+3304);
	i8 v8800 = *(i8*)(intptr_t)v8799;
	*(i8*)(intptr_t)(ws+3488) = v8800;
	i2 v8801 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v8801;
	i8 v8802 = (i8)(intptr_t)(f125_MidAddress);

	((void(*)(void))(intptr_t)v8802)();

	i8 v8803 = *(i8*)(intptr_t)(ws+3504);
	i8 v8804 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8804 = v8803;

	i8 v8805 = (i8)(intptr_t)(ws+3392);
	i8 v8806 = *(i8*)(intptr_t)v8805;
	i8 v8807 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8807 = v8806;

	i8 v8808 = (i8)(intptr_t)(ws+3304);
	i8 v8809 = *(i8*)(intptr_t)v8808;
	i8 v8810 = *(i8*)(intptr_t)v8809;
	i8 v8811 = *(i8*)(intptr_t)v8810;
	*(i8*)(intptr_t)(ws+3496) = v8811;
	i8 v8812 = (i8)(intptr_t)(f260_MakePointerType);

	((void(*)(void))(intptr_t)v8812)();

	i8 v8813 = *(i8*)(intptr_t)(ws+3504);
	i8 v8814 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8814 = v8813;

	i8 v8815 = (i8)(intptr_t)(ws+3400);
	i8 v8816 = *(i8*)(intptr_t)v8815;
	i8 v8817 = (i8)(intptr_t)(ws+3296);
	i8 v8818 = *(i8*)(intptr_t)v8817;
	i8 v8819 = v8818+(+24);
	*(i8*)(intptr_t)v8819 = v8816;

	i8 v8820 = (i8)(intptr_t)(ws+3296);
	i8 v8821 = *(i8*)(intptr_t)v8820;
	*(i8*)(intptr_t)(ws+3496) = v8821;
	i8 v8822 = (i8)(intptr_t)(f231_MakeLValue);

	((void(*)(void))(intptr_t)v8822)();

	i8 v8823 = *(i8*)(intptr_t)(ws+3504);
	i8 v8824 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8824 = v8823;

	i8 v8825 = (i8)(intptr_t)(ws+3408);
	i8 v8826 = *(i8*)(intptr_t)v8825;
	i8 v8827 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8827 = v8826;

	goto c01_0664;

c01_0666:;

	if (v8789 != +30) goto c01_0667;

	i8 v8828 = (i8)(intptr_t)(ws+3304);
	i8 v8829 = *(i8*)(intptr_t)v8828;
	i8 v8830 = *(i8*)(intptr_t)v8829;
	i8 v8831 = v8830+(+52);
	i1 v8832 = *(i1*)(intptr_t)v8831;
	i1 v8833 = (i1)+6;
	if (v8832==v8833) goto c01_066b; else goto c01_066c;

c01_066b:;

	i8 v8834 = (i8)(intptr_t)(ws+3304);
	i8 v8835 = *(i8*)(intptr_t)v8834;
	i8 v8836 = *(i8*)(intptr_t)v8835;
	i8 v8837 = *(i8*)(intptr_t)v8836;
	*(i8*)(intptr_t)(ws+3424) = v8837;
	i8 v8838 = (i8)(intptr_t)(f149_MidSubref);

	((void(*)(void))(intptr_t)v8838)();

	i8 v8839 = *(i8*)(intptr_t)(ws+3432);
	i8 v8840 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v8840 = v8839;

	i8 v8841 = (i8)(intptr_t)(ws+3416);
	i8 v8842 = *(i8*)(intptr_t)v8841;
	i8 v8843 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8843 = v8842;

	i8 v8844 = (i8)(intptr_t)(ws+3304);
	i8 v8845 = *(i8*)(intptr_t)v8844;
	i8 v8846 = *(i8*)(intptr_t)v8845;
	i8 v8847 = *(i8*)(intptr_t)v8846;
	i8 v8848 = v8847+(+48);
	i8 v8849 = *(i8*)(intptr_t)v8848;
	i8 v8850 = v8849+(+40);
	i8 v8851 = *(i8*)(intptr_t)v8850;
	i8 v8852 = (i8)(intptr_t)(ws+3296);
	i8 v8853 = *(i8*)(intptr_t)v8852;
	i8 v8854 = v8853+(+24);
	*(i8*)(intptr_t)v8854 = v8851;

	goto c01_0668;

c01_066c:;

	i8 v8855 = (i8)(intptr_t)(f366_not_a_value);

	((void(*)(void))(intptr_t)v8855)();

c01_0668:;

	goto c01_0664;

c01_0667:;

	i8 v8856 = (i8)(intptr_t)(f366_not_a_value);

	((void(*)(void))(intptr_t)v8856)();

c01_0664:;


}
	void f67_IsPtr(void);
const i1 c01_s0171[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f75_SimpleError(void);
	void f231_MakeLValue(void);
	void f301_yy_destructor(void);

// reduce_56 workspace at ws+3384 length ws+16
void f367_reduce_56(void) {

	i8 v8857 = (i8)(intptr_t)(ws+3312);
	i8 v8858 = *(i8*)(intptr_t)v8857;
	i8 v8859 = v8858+(+24);
	i8 v8860 = *(i8*)(intptr_t)v8859;
	*(i8*)(intptr_t)(ws+3560) = v8860;
	i8 v8861 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v8861)();

	i1 v8862 = *(i1*)(intptr_t)(ws+3568);
	i8 v8863 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8863 = v8862;

	i8 v8864 = (i8)(intptr_t)(ws+3384);
	i1 v8865 = *(i1*)(intptr_t)v8864;
	i1 v8866 = (i1)+0;
	if (v8865==v8866) goto c01_0670; else goto c01_0671;

c01_0670:;

	i8 v8867 = (i8)(intptr_t)c01_s0171;
	*(i8*)(intptr_t)(ws+3648) = v8867;
	i8 v8868 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v8868)();

c01_0671:;

c01_066d:;

	i8 v8869 = (i8)(intptr_t)(ws+3312);
	i8 v8870 = *(i8*)(intptr_t)v8869;
	*(i8*)(intptr_t)(ws+3496) = v8870;
	i8 v8871 = (i8)(intptr_t)(f231_MakeLValue);

	((void(*)(void))(intptr_t)v8871)();

	i8 v8872 = *(i8*)(intptr_t)(ws+3504);
	i8 v8873 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8873 = v8872;

	i8 v8874 = (i8)(intptr_t)(ws+3392);
	i8 v8875 = *(i8*)(intptr_t)v8874;
	i8 v8876 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8876 = v8875;

	i1 v8877 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v8877;
	i8 v8878 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8878;
	i8 v8879 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v8879)();

}
	void f234_MaybeUndoLValue(void);
	void f225_IsArray(void);
	void f73_StartError(void);
const i1 c01_s0172[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f11_print(void);
	void f11_print(void);
	void f74_EndError(void);
	void f268_CheckExpressionType(void);
	void f227_IsNum(void);
const i1 c01_s0173[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f75_SimpleError(void);
	void f172_MidCCast(void);
	void f106_MidConstant(void);
	void f171_MidC2Op(void);
	void f171_MidC2Op(void);
	void f260_MakePointerType(void);
	void f231_MakeLValue(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_57 workspace at ws+3384 length ws+112
void f368_reduce_57(void) {

	i8 v8880 = (i8)(intptr_t)(ws+3328);
	i8 v8881 = *(i8*)(intptr_t)v8880;
	i8 v8882 = v8881+(+24);
	i8 v8883 = *(i8*)(intptr_t)v8882;
	i8 v8884 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8884 = v8883;

	i8 v8885 = (i8)(intptr_t)(ws+3328);
	i8 v8886 = *(i8*)(intptr_t)v8885;
	*(i8*)(intptr_t)(ws+3496) = v8886;
	i8 v8887 = (i8)(intptr_t)(f234_MaybeUndoLValue);

	((void(*)(void))(intptr_t)v8887)();

	i8 v8888 = *(i8*)(intptr_t)(ws+3504);
	i8 v8889 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8889 = v8888;

	i8 v8890 = (i8)(intptr_t)(ws+3392);
	i8 v8891 = *(i8*)(intptr_t)v8890;
	i8 v8892 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8892 = v8891;

	i8 v8893 = (i8)(intptr_t)(ws+3384);
	i8 v8894 = *(i8*)(intptr_t)v8893;
	*(i8*)(intptr_t)(ws+3496) = v8894;
	i8 v8895 = (i8)(intptr_t)(f225_IsArray);

	((void(*)(void))(intptr_t)v8895)();

	i1 v8896 = *(i1*)(intptr_t)(ws+3504);
	i8 v8897 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v8897 = v8896;

	i8 v8898 = (i8)(intptr_t)(ws+3408);
	i1 v8899 = *(i1*)(intptr_t)v8898;
	i1 v8900 = (i1)+0;
	if (v8899==v8900) goto c01_0675; else goto c01_0676;

c01_0675:;

	i8 v8901 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v8901)();

	i8 v8902 = (i8)(intptr_t)c01_s0172;
	*(i8*)(intptr_t)(ws+3696) = v8902;
	i8 v8903 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v8903)();

	i8 v8904 = (i8)(intptr_t)(ws+3384);
	i8 v8905 = *(i8*)(intptr_t)v8904;
	i8 v8906 = v8905+(+32);
	i8 v8907 = *(i8*)(intptr_t)v8906;
	i8 v8908 = v8907+(+8);
	i8 v8909 = *(i8*)(intptr_t)v8908;
	*(i8*)(intptr_t)(ws+3696) = v8909;
	i8 v8910 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v8910)();

	i8 v8911 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v8911)();

c01_0676:;

c01_0672:;

	i8 v8912 = (i8)(intptr_t)(ws+3312);
	i8 v8913 = *(i8*)(intptr_t)v8912;
	*(i8*)(intptr_t)(ws+3496) = v8913;
	i8 v8914 = (i8)(intptr_t)(ws+3384);
	i8 v8915 = *(i8*)(intptr_t)v8914;
	i8 v8916 = v8915+(+16);
	i8 v8917 = *(i8*)(intptr_t)v8916;
	*(i8*)(intptr_t)(ws+3504) = v8917;
	i8 v8918 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(void))(intptr_t)v8918)();

	i8 v8919 = (i8)(intptr_t)(ws+3312);
	i8 v8920 = *(i8*)(intptr_t)v8919;
	i8 v8921 = v8920+(+24);
	i8 v8922 = *(i8*)(intptr_t)v8921;
	*(i8*)(intptr_t)(ws+3560) = v8922;
	i8 v8923 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v8923)();

	i1 v8924 = *(i1*)(intptr_t)(ws+3568);
	i8 v8925 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v8925 = v8924;

	i8 v8926 = (i8)(intptr_t)(ws+3409);
	i1 v8927 = *(i1*)(intptr_t)v8926;
	i1 v8928 = (i1)+0;
	if (v8927==v8928) goto c01_067a; else goto c01_067b;

c01_067a:;

	i8 v8929 = (i8)(intptr_t)c01_s0173;
	*(i8*)(intptr_t)(ws+3648) = v8929;
	i8 v8930 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v8930)();

c01_067b:;

c01_0677:;

	i8 v8931 = (i8)(intptr_t)(ws+3384);
	i8 v8932 = *(i8*)(intptr_t)v8931;
	i8 v8933 = *(i8*)(intptr_t)v8932;
	i8 v8934 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v8934 = v8933;

	i8 v8935 = (i8)(intptr_t)(ws+1528);
	i8 v8936 = *(i8*)(intptr_t)v8935;
	i8 v8937 = v8936+(+48);
	i2 v8938 = *(i2*)(intptr_t)v8937;
	i1 v8939 = v8938;
	i8 v8940 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v8940 = v8939;

	i8 v8941 = (i8)(intptr_t)(ws+1528);
	i8 v8942 = *(i8*)(intptr_t)v8941;
	i8 v8943 = v8942+(+48);
	i2 v8944 = *(i2*)(intptr_t)v8943;
	i1 v8945 = v8944;
	*(i1*)(intptr_t)(ws+3496) = v8945;
	i8 v8946 = (i8)(intptr_t)(ws+3312);
	i8 v8947 = *(i8*)(intptr_t)v8946;
	*(i8*)(intptr_t)(ws+3504) = v8947;
	i1 v8948 = (i1)+0;
	*(i1*)(intptr_t)(ws+3512) = v8948;
	i8 v8949 = (i8)(intptr_t)(f172_MidCCast);

	((void(*)(void))(intptr_t)v8949)();

	i8 v8950 = *(i8*)(intptr_t)(ws+3520);
	i8 v8951 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v8951 = v8950;

	i8 v8952 = (i8)(intptr_t)(ws+3416);
	i8 v8953 = *(i8*)(intptr_t)v8952;
	i8 v8954 = v8953+(+50);
	i2 v8955 = *(i2*)(intptr_t)v8954;
	i4 v8956 = v8955;
	*(i4*)(intptr_t)(ws+3592) = v8956;
	i8 v8957 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v8957)();

	i8 v8958 = *(i8*)(intptr_t)(ws+3600);
	i8 v8959 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v8959 = v8958;

	i1 v8960 = (i1)+161;
	*(i1*)(intptr_t)(ws+3496) = v8960;
	i8 v8961 = (i8)(intptr_t)(ws+3424);
	i1 v8962 = *(i1*)(intptr_t)v8961;
	*(i1*)(intptr_t)(ws+3497) = v8962;
	i8 v8963 = (i8)(intptr_t)(ws+3432);
	i8 v8964 = *(i8*)(intptr_t)v8963;
	*(i8*)(intptr_t)(ws+3504) = v8964;
	i8 v8965 = (i8)(intptr_t)(ws+3440);
	i8 v8966 = *(i8*)(intptr_t)v8965;
	*(i8*)(intptr_t)(ws+3512) = v8966;
	i8 v8967 = (i8)(intptr_t)(f171_MidC2Op);

	((void(*)(void))(intptr_t)v8967)();

	i8 v8968 = *(i8*)(intptr_t)(ws+3520);
	i8 v8969 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v8969 = v8968;

	i8 v8970 = (i8)(intptr_t)(ws+3448);
	i8 v8971 = *(i8*)(intptr_t)v8970;
	i8 v8972 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v8972 = v8971;

	i8 v8973 = (i8)(intptr_t)(ws+1528);
	i8 v8974 = *(i8*)(intptr_t)v8973;
	i8 v8975 = (i8)(intptr_t)(ws+3456);
	i8 v8976 = *(i8*)(intptr_t)v8975;
	i8 v8977 = v8976+(+24);
	*(i8*)(intptr_t)v8977 = v8974;

	i1 v8978 = (i1)+156;
	*(i1*)(intptr_t)(ws+3496) = v8978;
	i8 v8979 = (i8)(intptr_t)(ws+3424);
	i1 v8980 = *(i1*)(intptr_t)v8979;
	*(i1*)(intptr_t)(ws+3497) = v8980;
	i8 v8981 = (i8)(intptr_t)(ws+3400);
	i8 v8982 = *(i8*)(intptr_t)v8981;
	*(i8*)(intptr_t)(ws+3504) = v8982;
	i8 v8983 = (i8)(intptr_t)(ws+3456);
	i8 v8984 = *(i8*)(intptr_t)v8983;
	*(i8*)(intptr_t)(ws+3512) = v8984;
	i8 v8985 = (i8)(intptr_t)(f171_MidC2Op);

	((void(*)(void))(intptr_t)v8985)();

	i8 v8986 = *(i8*)(intptr_t)(ws+3520);
	i8 v8987 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v8987 = v8986;

	i8 v8988 = (i8)(intptr_t)(ws+3464);
	i8 v8989 = *(i8*)(intptr_t)v8988;
	i8 v8990 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v8990 = v8989;

	i8 v8991 = (i8)(intptr_t)(ws+3416);
	i8 v8992 = *(i8*)(intptr_t)v8991;
	*(i8*)(intptr_t)(ws+3496) = v8992;
	i8 v8993 = (i8)(intptr_t)(f260_MakePointerType);

	((void(*)(void))(intptr_t)v8993)();

	i8 v8994 = *(i8*)(intptr_t)(ws+3504);
	i8 v8995 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v8995 = v8994;

	i8 v8996 = (i8)(intptr_t)(ws+3480);
	i8 v8997 = *(i8*)(intptr_t)v8996;
	i8 v8998 = (i8)(intptr_t)(ws+3472);
	i8 v8999 = *(i8*)(intptr_t)v8998;
	i8 v9000 = v8999+(+24);
	*(i8*)(intptr_t)v9000 = v8997;

	i8 v9001 = (i8)(intptr_t)(ws+3472);
	i8 v9002 = *(i8*)(intptr_t)v9001;
	*(i8*)(intptr_t)(ws+3496) = v9002;
	i8 v9003 = (i8)(intptr_t)(f231_MakeLValue);

	((void(*)(void))(intptr_t)v9003)();

	i8 v9004 = *(i8*)(intptr_t)(ws+3504);
	i8 v9005 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v9005 = v9004;

	i8 v9006 = (i8)(intptr_t)(ws+3488);
	i8 v9007 = *(i8*)(intptr_t)v9006;
	i8 v9008 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9008 = v9007;

	i1 v9009 = (i1)+17;
	*(i1*)(intptr_t)(ws+3496) = v9009;
	i8 v9010 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9010;
	i8 v9011 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9011)();

	i1 v9012 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9012;
	i8 v9013 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9013;
	i8 v9014 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9014)();

}
	void f73_StartError(void);
	void f11_print(void);
const i1 c01_s0174[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f11_print(void);
	void f74_EndError(void);

// BadType workspace at ws+3488 length ws+0
void f370_BadType(void) {

	i8 v9023 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v9023)();

	i8 v9024 = (i8)(intptr_t)(ws+3384);
	i8 v9025 = *(i8*)(intptr_t)v9024;
	i8 v9026 = v9025+(+32);
	i8 v9027 = *(i8*)(intptr_t)v9026;
	i8 v9028 = v9027+(+8);
	i8 v9029 = *(i8*)(intptr_t)v9028;
	*(i8*)(intptr_t)(ws+3696) = v9029;
	i8 v9030 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9030)();

	i8 v9031 = (i8)(intptr_t)c01_s0174;
	*(i8*)(intptr_t)(ws+3696) = v9031;
	i8 v9032 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9032)();

	i8 v9033 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v9033)();

}
	void f233_IsLValue(void);
	void f234_MaybeUndoLValue(void);
	void f67_IsPtr(void);
	void f221_CheckNotPartialType(void);
	void f130_MidDeref(void);
	void f67_IsPtr(void);
	void f370_BadType(void);
	void f221_CheckNotPartialType(void);
	void f230_IsRecord(void);
	void f370_BadType(void);
	void f216_LookupSymbol(void);
	void f73_StartError(void);
	void f11_print(void);
const i1 c01_s0175[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s0176[] = { 0x27,0 };
	void f11_print(void);
	void f74_EndError(void);
	void f33_Free(void);
	void f106_MidConstant(void);
	void f171_MidC2Op(void);
	void f260_MakePointerType(void);
	void f231_MakeLValue(void);
	void f301_yy_destructor(void);

// reduce_58 workspace at ws+3384 length ws+104
void f369_reduce_58(void) {

	i8 v9015 = (i8)(intptr_t)(ws+3320);
	i8 v9016 = *(i8*)(intptr_t)v9015;
	i8 v9017 = v9016+(+24);
	i8 v9018 = *(i8*)(intptr_t)v9017;
	i8 v9019 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9019 = v9018;

	i8 v9020 = (i8)(intptr_t)(ws+3320);
	i8 v9021 = *(i8*)(intptr_t)v9020;
	i8 v9022 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9022 = v9021;


	i8 v9034 = (i8)(intptr_t)(ws+3392);
	i8 v9035 = *(i8*)(intptr_t)v9034;
	*(i8*)(intptr_t)(ws+3488) = v9035;
	i8 v9036 = (i8)(intptr_t)(f233_IsLValue);

	((void(*)(void))(intptr_t)v9036)();

	i1 v9037 = *(i1*)(intptr_t)(ws+3496);
	i8 v9038 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9038 = v9037;

	i8 v9039 = (i8)(intptr_t)(ws+3400);
	i1 v9040 = *(i1*)(intptr_t)v9039;
	i1 v9041 = (i1)+0;
	if (v9040==v9041) goto c01_0680; else goto c01_067f;

c01_067f:;

	i8 v9042 = (i8)(intptr_t)(ws+3320);
	i8 v9043 = *(i8*)(intptr_t)v9042;
	*(i8*)(intptr_t)(ws+3496) = v9043;
	i8 v9044 = (i8)(intptr_t)(f234_MaybeUndoLValue);

	((void(*)(void))(intptr_t)v9044)();

	i8 v9045 = *(i8*)(intptr_t)(ws+3504);
	i8 v9046 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9046 = v9045;

	i8 v9047 = (i8)(intptr_t)(ws+3408);
	i8 v9048 = *(i8*)(intptr_t)v9047;
	i8 v9049 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9049 = v9048;

c01_0681:;

	i8 v9050 = (i8)(intptr_t)(ws+3384);
	i8 v9051 = *(i8*)(intptr_t)v9050;
	*(i8*)(intptr_t)(ws+3560) = v9051;
	i8 v9052 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v9052)();

	i1 v9053 = *(i1*)(intptr_t)(ws+3568);
	i8 v9054 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v9054 = v9053;

	i8 v9055 = (i8)(intptr_t)(ws+3416);
	i1 v9056 = *(i1*)(intptr_t)v9055;
	i1 v9057 = (i1)+0;
	if (v9056==v9057) goto c01_0686; else goto c01_0685;

c01_0685:;

	i8 v9058 = (i8)(intptr_t)(ws+3384);
	i8 v9059 = *(i8*)(intptr_t)v9058;
	i8 v9060 = *(i8*)(intptr_t)v9059;
	i8 v9061 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9061 = v9060;

	i8 v9062 = (i8)(intptr_t)(ws+3384);
	i8 v9063 = *(i8*)(intptr_t)v9062;
	*(i8*)(intptr_t)(ws+3520) = v9063;
	i8 v9064 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9064)();

	i8 v9065 = (i8)(intptr_t)(ws+1528);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = v9066+(+48);
	i2 v9068 = *(i2*)(intptr_t)v9067;
	i1 v9069 = v9068;
	*(i1*)(intptr_t)(ws+3544) = v9069;
	i8 v9070 = (i8)(intptr_t)(ws+3392);
	i8 v9071 = *(i8*)(intptr_t)v9070;
	*(i8*)(intptr_t)(ws+3552) = v9071;
	i8 v9072 = (i8)(intptr_t)(f130_MidDeref);

	((void(*)(void))(intptr_t)v9072)();

	i8 v9073 = *(i8*)(intptr_t)(ws+3560);
	i8 v9074 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9074 = v9073;

	i8 v9075 = (i8)(intptr_t)(ws+3424);
	i8 v9076 = *(i8*)(intptr_t)v9075;
	i8 v9077 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9077 = v9076;

	goto c01_0681;

c01_0686:;

	goto c01_067c;

c01_0680:;

	i8 v9078 = (i8)(intptr_t)(ws+3384);
	i8 v9079 = *(i8*)(intptr_t)v9078;
	*(i8*)(intptr_t)(ws+3560) = v9079;
	i8 v9080 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v9080)();

	i1 v9081 = *(i1*)(intptr_t)(ws+3568);
	i8 v9082 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v9082 = v9081;

	i8 v9083 = (i8)(intptr_t)(ws+3432);
	i1 v9084 = *(i1*)(intptr_t)v9083;
	i1 v9085 = (i1)+0;
	if (v9084==v9085) goto c01_068a; else goto c01_0689;

c01_0689:;

	i8 v9086 = (i8)(intptr_t)(ws+3384);
	i8 v9087 = *(i8*)(intptr_t)v9086;
	i8 v9088 = *(i8*)(intptr_t)v9087;
	i8 v9089 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9089 = v9088;

	goto c01_067c;

c01_068a:;

	i8 v9090 = (i8)(intptr_t)(f370_BadType);

	((void(*)(void))(intptr_t)v9090)();

c01_067c:;

	i8 v9091 = (i8)(intptr_t)(ws+3384);
	i8 v9092 = *(i8*)(intptr_t)v9091;
	*(i8*)(intptr_t)(ws+3520) = v9092;
	i8 v9093 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9093)();

	i8 v9094 = (i8)(intptr_t)(ws+3384);
	i8 v9095 = *(i8*)(intptr_t)v9094;
	*(i8*)(intptr_t)(ws+3488) = v9095;
	i8 v9096 = (i8)(intptr_t)(f230_IsRecord);

	((void(*)(void))(intptr_t)v9096)();

	i1 v9097 = *(i1*)(intptr_t)(ws+3496);
	i8 v9098 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v9098 = v9097;

	i8 v9099 = (i8)(intptr_t)(ws+3433);
	i1 v9100 = *(i1*)(intptr_t)v9099;
	i1 v9101 = (i1)+0;
	if (v9100==v9101) goto c01_068e; else goto c01_068f;

c01_068e:;

	i8 v9102 = (i8)(intptr_t)(f370_BadType);

	((void(*)(void))(intptr_t)v9102)();

c01_068f:;

c01_068b:;

	i8 v9103 = (i8)(intptr_t)(ws+3384);
	i8 v9104 = *(i8*)(intptr_t)v9103;
	*(i8*)(intptr_t)(ws+3488) = v9104;
	i8 v9105 = (i8)(intptr_t)(ws+3304);
	i8 v9106 = *(i8*)(intptr_t)v9105;
	*(i8*)(intptr_t)(ws+3496) = v9106;
	i8 v9107 = (i8)(intptr_t)(f216_LookupSymbol);

	((void(*)(void))(intptr_t)v9107)();

	i8 v9108 = *(i8*)(intptr_t)(ws+3504);
	i8 v9109 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v9109 = v9108;

	i8 v9110 = (i8)(intptr_t)(ws+3440);
	i8 v9111 = *(i8*)(intptr_t)v9110;
	i8 v9112 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9112 = v9111;

	i8 v9113 = (i8)(intptr_t)(ws+3448);
	i8 v9114 = *(i8*)(intptr_t)v9113;
	i8 v9115 = (i8)+0;
	if (v9114==v9115) goto c01_0693; else goto c01_0694;

c01_0693:;

	i8 v9116 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v9116)();

	i8 v9117 = (i8)(intptr_t)(ws+3384);
	i8 v9118 = *(i8*)(intptr_t)v9117;
	i8 v9119 = v9118+(+32);
	i8 v9120 = *(i8*)(intptr_t)v9119;
	i8 v9121 = v9120+(+8);
	i8 v9122 = *(i8*)(intptr_t)v9121;
	*(i8*)(intptr_t)(ws+3696) = v9122;
	i8 v9123 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9123)();

	i8 v9124 = (i8)(intptr_t)c01_s0175;
	*(i8*)(intptr_t)(ws+3696) = v9124;
	i8 v9125 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9125)();

	i8 v9126 = (i8)(intptr_t)(ws+3304);
	i8 v9127 = *(i8*)(intptr_t)v9126;
	*(i8*)(intptr_t)(ws+3696) = v9127;
	i8 v9128 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9128)();

	i8 v9129 = (i8)(intptr_t)c01_s0176;
	*(i8*)(intptr_t)(ws+3696) = v9129;
	i8 v9130 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9130)();

	i8 v9131 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v9131)();

c01_0694:;

c01_0690:;

	i8 v9132 = (i8)(intptr_t)(ws+3304);
	i8 v9133 = *(i8*)(intptr_t)v9132;
	*(i8*)(intptr_t)(ws+3680) = v9133;
	i8 v9134 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v9134)();

	i8 v9135 = (i8)(intptr_t)(ws+3448);
	i8 v9136 = *(i8*)(intptr_t)v9135;
	i8 v9137 = *(i8*)(intptr_t)v9136;
	i8 v9138 = v9137+(+24);
	i2 v9139 = *(i2*)(intptr_t)v9138;
	i4 v9140 = v9139;
	*(i4*)(intptr_t)(ws+3592) = v9140;
	i8 v9141 = (i8)(intptr_t)(f106_MidConstant);

	((void(*)(void))(intptr_t)v9141)();

	i8 v9142 = *(i8*)(intptr_t)(ws+3600);
	i8 v9143 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v9143 = v9142;

	i1 v9144 = (i1)+156;
	*(i1*)(intptr_t)(ws+3496) = v9144;
	i8 v9145 = (i8)(intptr_t)(ws+1528);
	i8 v9146 = *(i8*)(intptr_t)v9145;
	i8 v9147 = v9146+(+48);
	i2 v9148 = *(i2*)(intptr_t)v9147;
	i1 v9149 = v9148;
	*(i1*)(intptr_t)(ws+3497) = v9149;
	i8 v9150 = (i8)(intptr_t)(ws+3392);
	i8 v9151 = *(i8*)(intptr_t)v9150;
	*(i8*)(intptr_t)(ws+3504) = v9151;
	i8 v9152 = (i8)(intptr_t)(ws+3456);
	i8 v9153 = *(i8*)(intptr_t)v9152;
	*(i8*)(intptr_t)(ws+3512) = v9153;
	i8 v9154 = (i8)(intptr_t)(f171_MidC2Op);

	((void(*)(void))(intptr_t)v9154)();

	i8 v9155 = *(i8*)(intptr_t)(ws+3520);
	i8 v9156 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9156 = v9155;

	i8 v9157 = (i8)(intptr_t)(ws+3464);
	i8 v9158 = *(i8*)(intptr_t)v9157;
	i8 v9159 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9159 = v9158;

	i8 v9160 = (i8)(intptr_t)(ws+3448);
	i8 v9161 = *(i8*)(intptr_t)v9160;
	i8 v9162 = *(i8*)(intptr_t)v9161;
	i8 v9163 = *(i8*)(intptr_t)v9162;
	*(i8*)(intptr_t)(ws+3496) = v9163;
	i8 v9164 = (i8)(intptr_t)(f260_MakePointerType);

	((void(*)(void))(intptr_t)v9164)();

	i8 v9165 = *(i8*)(intptr_t)(ws+3504);
	i8 v9166 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9166 = v9165;

	i8 v9167 = (i8)(intptr_t)(ws+3472);
	i8 v9168 = *(i8*)(intptr_t)v9167;
	i8 v9169 = (i8)(intptr_t)(ws+3296);
	i8 v9170 = *(i8*)(intptr_t)v9169;
	i8 v9171 = v9170+(+24);
	*(i8*)(intptr_t)v9171 = v9168;

	i8 v9172 = (i8)(intptr_t)(ws+3296);
	i8 v9173 = *(i8*)(intptr_t)v9172;
	*(i8*)(intptr_t)(ws+3496) = v9173;
	i8 v9174 = (i8)(intptr_t)(f231_MakeLValue);

	((void(*)(void))(intptr_t)v9174)();

	i8 v9175 = *(i8*)(intptr_t)(ws+3504);
	i8 v9176 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9176 = v9175;

	i8 v9177 = (i8)(intptr_t)(ws+3480);
	i8 v9178 = *(i8*)(intptr_t)v9177;
	i8 v9179 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9179 = v9178;

	i1 v9180 = (i1)+8;
	*(i1*)(intptr_t)(ws+3496) = v9180;
	i8 v9181 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v9181;
	i8 v9182 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9182)();

}
	void f109_MidString(void);
	void f260_MakePointerType(void);

// reduce_59 workspace at ws+3384 length ws+16
void f371_reduce_59(void) {

	i8 v9183 = (i8)(intptr_t)(ws+3304);
	i8 v9184 = *(i8*)(intptr_t)v9183;
	*(i8*)(intptr_t)(ws+3400) = v9184;
	i8 v9185 = (i8)(intptr_t)(f109_MidString);

	((void(*)(void))(intptr_t)v9185)();

	i8 v9186 = *(i8*)(intptr_t)(ws+3408);
	i8 v9187 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9187 = v9186;

	i8 v9188 = (i8)(intptr_t)(ws+3384);
	i8 v9189 = *(i8*)(intptr_t)v9188;
	i8 v9190 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9190 = v9189;

	i8 v9191 = (i8)(intptr_t)(ws+1512);
	i8 v9192 = *(i8*)(intptr_t)v9191;
	*(i8*)(intptr_t)(ws+3496) = v9192;
	i8 v9193 = (i8)(intptr_t)(f260_MakePointerType);

	((void(*)(void))(intptr_t)v9193)();

	i8 v9194 = *(i8*)(intptr_t)(ws+3504);
	i8 v9195 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9195 = v9194;

	i8 v9196 = (i8)(intptr_t)(ws+3392);
	i8 v9197 = *(i8*)(intptr_t)v9196;
	i8 v9198 = (i8)(intptr_t)(ws+3296);
	i8 v9199 = *(i8*)(intptr_t)v9198;
	i8 v9200 = v9199+(+24);
	*(i8*)(intptr_t)v9200 = v9197;

}
	void f291_parser_i_constant_error(void);
	void f62_Discard(void);

// reduce_60 workspace at ws+3384 length ws+0
void f372_reduce_60(void) {

	i8 v9201 = (i8)(intptr_t)(ws+3304);
	i8 v9202 = *(i8*)(intptr_t)v9201;
	i8 v9203 = v9202+(+48);
	i1 v9204 = *(i1*)(intptr_t)v9203;
	i1 v9205 = (i1)+40;
	if (v9204==v9205) goto c01_0699; else goto c01_0698;

c01_0698:;

	i8 v9206 = (i8)(intptr_t)(f291_parser_i_constant_error);

	((void(*)(void))(intptr_t)v9206)();

c01_0699:;

c01_0695:;

	i8 v9207 = (i8)(intptr_t)(ws+3304);
	i8 v9208 = *(i8*)(intptr_t)v9207;
	i4 v9209 = *(i4*)(intptr_t)v9208;
	i8 v9210 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v9210 = v9209;

	i8 v9211 = (i8)(intptr_t)(ws+3304);
	i8 v9212 = *(i8*)(intptr_t)v9211;
	*(i8*)(intptr_t)(ws+3592) = v9212;
	i8 v9213 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v9213)();

}
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_61 workspace at ws+3384 length ws+0
void f373_reduce_61(void) {

	i1 v9214 = (i1)+7;
	i8 v9215 = (i8)(intptr_t)(ws+3328);
	i8 v9216 = *(i8*)(intptr_t)v9215;
	i8 v9217 = v9216+(+32);
	*(i1*)(intptr_t)v9217 = v9214;

	i8 v9218 = (i8)(intptr_t)(ws+3312);
	i4 v9219 = *(i4*)(intptr_t)v9218;
	i8 v9220 = (i8)(intptr_t)(ws+3328);
	i8 v9221 = *(i8*)(intptr_t)v9220;
	*(i4*)(intptr_t)v9221 = v9219;

	i1 v9222 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v9222;
	i8 v9223 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9223;
	i8 v9224 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9224)();

	i1 v9225 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9225;
	i8 v9226 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9226;
	i8 v9227 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9227)();

}
const i1 c01_s0177[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f75_SimpleError(void);
	void f240_ArchGuessIntType(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_62 workspace at ws+3384 length ws+8
void f374_reduce_62(void) {

	i8 v9228 = (i8)(intptr_t)(ws+3328);
	i4 v9229 = *(i4*)(intptr_t)v9228;
	i8 v9230 = (i8)(intptr_t)(ws+3312);
	i4 v9231 = *(i4*)(intptr_t)v9230;
	if ((s4)v9229<(s4)v9231) goto c01_069e; else goto c01_069d;

c01_069d:;

	i8 v9232 = (i8)(intptr_t)c01_s0177;
	*(i8*)(intptr_t)(ws+3648) = v9232;
	i8 v9233 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v9233)();

c01_069e:;

c01_069a:;

	i8 v9234 = (i8)(intptr_t)(ws+3328);
	i4 v9235 = *(i4*)(intptr_t)v9234;
	*(i4*)(intptr_t)(ws+3448) = v9235;
	i8 v9236 = (i8)(intptr_t)(ws+3312);
	i4 v9237 = *(i4*)(intptr_t)v9236;
	*(i4*)(intptr_t)(ws+3452) = v9237;
	i8 v9238 = (i8)(intptr_t)(f240_ArchGuessIntType);

	((void(*)(void))(intptr_t)v9238)();

	i8 v9239 = *(i8*)(intptr_t)(ws+3456);
	i8 v9240 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9240 = v9239;

	i8 v9241 = (i8)(intptr_t)(ws+3384);
	i8 v9242 = *(i8*)(intptr_t)v9241;
	i8 v9243 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9243 = v9242;

	i1 v9244 = (i1)+16;
	*(i1*)(intptr_t)(ws+3496) = v9244;
	i8 v9245 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v9245;
	i8 v9246 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9246)();

	i1 v9247 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v9247;
	i8 v9248 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9248;
	i8 v9249 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9249)();

	i1 v9250 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9250;
	i8 v9251 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9251;
	i8 v9252 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9252)();

}
	void f65_AllocNewType(void);
	void f73_StartError(void);
const i1 c01_s0178[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s0179[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(void);
	void f74_EndError(void);

// reduce_63 workspace at ws+3384 length ws+24
void f375_reduce_63(void) {

	i8 v9253 = (i8)(intptr_t)(ws+3304);
	i8 v9254 = *(i8*)(intptr_t)v9253;
	i8 v9255 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9255 = v9254;

	i8 v9256 = (i8)(intptr_t)(ws+3384);
	i8 v9257 = *(i8*)(intptr_t)v9256;
	i8 v9258 = v9257+(+32);
	i1 v9259 = *(i1*)(intptr_t)v9258;
	i1 v9260 = (i1)+0;
	if (v9259==v9260) goto c01_06a2; else goto c01_06a3;

c01_06a2:;

	i8 v9261 = (i8)(intptr_t)(f65_AllocNewType);

	((void(*)(void))(intptr_t)v9261)();

	i8 v9262 = *(i8*)(intptr_t)(ws+3528);
	i8 v9263 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9263 = v9262;

	i8 v9264 = (i8)(intptr_t)(ws+3392);
	i8 v9265 = *(i8*)(intptr_t)v9264;
	i8 v9266 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9266 = v9265;

	i1 v9267 = (i1)+1;
	i8 v9268 = (i8)(intptr_t)(ws+3400);
	i8 v9269 = *(i8*)(intptr_t)v9268;
	i8 v9270 = v9269+(+52);
	*(i1*)(intptr_t)v9270 = v9267;

	i1 v9271 = (i1)+30;
	i8 v9272 = (i8)(intptr_t)(ws+3384);
	i8 v9273 = *(i8*)(intptr_t)v9272;
	i8 v9274 = v9273+(+32);
	*(i1*)(intptr_t)v9274 = v9271;

	i8 v9275 = (i8)(intptr_t)(ws+3400);
	i8 v9276 = *(i8*)(intptr_t)v9275;
	i8 v9277 = (i8)(intptr_t)(ws+3384);
	i8 v9278 = *(i8*)(intptr_t)v9277;
	*(i8*)(intptr_t)v9278 = v9276;

	i8 v9279 = (i8)(intptr_t)(ws+3384);
	i8 v9280 = *(i8*)(intptr_t)v9279;
	i8 v9281 = (i8)(intptr_t)(ws+3400);
	i8 v9282 = *(i8*)(intptr_t)v9281;
	i8 v9283 = v9282+(+32);
	*(i8*)(intptr_t)v9283 = v9280;

c01_06a3:;

c01_069f:;

	i8 v9284 = (i8)(intptr_t)(ws+3384);
	i8 v9285 = *(i8*)(intptr_t)v9284;
	i8 v9286 = v9285+(+32);
	i1 v9287 = *(i1*)(intptr_t)v9286;
	i1 v9288 = (i1)+30;
	if (v9287==v9288) goto c01_06a8; else goto c01_06a7;

c01_06a7:;

	i8 v9289 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v9289)();

	i8 v9290 = (i8)(intptr_t)c01_s0178;
	*(i8*)(intptr_t)(ws+3696) = v9290;
	i8 v9291 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9291)();

	i8 v9292 = (i8)(intptr_t)(ws+3384);
	i8 v9293 = *(i8*)(intptr_t)v9292;
	i8 v9294 = v9293+(+8);
	i8 v9295 = *(i8*)(intptr_t)v9294;
	*(i8*)(intptr_t)(ws+3696) = v9295;
	i8 v9296 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9296)();

	i8 v9297 = (i8)(intptr_t)c01_s0179;
	*(i8*)(intptr_t)(ws+3696) = v9297;
	i8 v9298 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9298)();

	i8 v9299 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v9299)();

c01_06a8:;

c01_06a4:;

	i8 v9300 = (i8)(intptr_t)(ws+3384);
	i8 v9301 = *(i8*)(intptr_t)v9300;
	i8 v9302 = *(i8*)(intptr_t)v9301;
	i8 v9303 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9303 = v9302;

}
	void f260_MakePointerType(void);
	void f301_yy_destructor(void);

// reduce_64 workspace at ws+3384 length ws+8
void f376_reduce_64(void) {

	i8 v9304 = (i8)(intptr_t)(ws+3312);
	i8 v9305 = *(i8*)(intptr_t)v9304;
	*(i8*)(intptr_t)(ws+3496) = v9305;
	i8 v9306 = (i8)(intptr_t)(f260_MakePointerType);

	((void(*)(void))(intptr_t)v9306)();

	i8 v9307 = *(i8*)(intptr_t)(ws+3504);
	i8 v9308 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9308 = v9307;

	i8 v9309 = (i8)(intptr_t)(ws+3384);
	i8 v9310 = *(i8*)(intptr_t)v9309;
	i8 v9311 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9311 = v9310;

	i1 v9312 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9312;
	i8 v9313 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9313;
	i8 v9314 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9314)();

}
	void f261_MakeArrayType(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_65 workspace at ws+3384 length ws+8
void f377_reduce_65(void) {

	i8 v9315 = (i8)(intptr_t)(ws+3328);
	i8 v9316 = *(i8*)(intptr_t)v9315;
	*(i8*)(intptr_t)(ws+3392) = v9316;
	i8 v9317 = (i8)(intptr_t)(ws+3312);
	i4 v9318 = *(i4*)(intptr_t)v9317;
	i2 v9319 = (s2)(s4)v9318;
	*(i2*)(intptr_t)(ws+3400) = v9319;
	i8 v9320 = (i8)(intptr_t)(f261_MakeArrayType);

	((void(*)(void))(intptr_t)v9320)();

	i8 v9321 = *(i8*)(intptr_t)(ws+3408);
	i8 v9322 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9322 = v9321;

	i8 v9323 = (i8)(intptr_t)(ws+3384);
	i8 v9324 = *(i8*)(intptr_t)v9323;
	i8 v9325 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9325 = v9324;

	i1 v9326 = (i1)+17;
	*(i1*)(intptr_t)(ws+3496) = v9326;
	i8 v9327 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9327;
	i8 v9328 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9328)();

	i1 v9329 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9329;
	i8 v9330 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9330;
	i8 v9331 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9331)();

}
	void f261_MakeArrayType(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_66 workspace at ws+3384 length ws+8
void f378_reduce_66(void) {

	i8 v9332 = (i8)(intptr_t)(ws+3320);
	i8 v9333 = *(i8*)(intptr_t)v9332;
	*(i8*)(intptr_t)(ws+3392) = v9333;
	i2 v9334 = (i2)+0;
	*(i2*)(intptr_t)(ws+3400) = v9334;
	i8 v9335 = (i8)(intptr_t)(f261_MakeArrayType);

	((void(*)(void))(intptr_t)v9335)();

	i8 v9336 = *(i8*)(intptr_t)(ws+3408);
	i8 v9337 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9337 = v9336;

	i8 v9338 = (i8)(intptr_t)(ws+3384);
	i8 v9339 = *(i8*)(intptr_t)v9338;
	i8 v9340 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9340 = v9339;

	i1 v9341 = (i1)+17;
	*(i1*)(intptr_t)(ws+3496) = v9341;
	i8 v9342 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v9342;
	i8 v9343 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9343)();

	i1 v9344 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9344;
	i8 v9345 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9345;
	i8 v9346 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9346)();

}
	void f225_IsArray(void);
	void f73_StartError(void);
	void f11_print(void);
const i1 c01_s017a[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f11_print(void);
	void f74_EndError(void);

// reduce_67 workspace at ws+3384 length ws+1
void f379_reduce_67(void) {

	i8 v9347 = (i8)(intptr_t)(ws+3304);
	i8 v9348 = *(i8*)(intptr_t)v9347;
	*(i8*)(intptr_t)(ws+3496) = v9348;
	i8 v9349 = (i8)(intptr_t)(f225_IsArray);

	((void(*)(void))(intptr_t)v9349)();

	i1 v9350 = *(i1*)(intptr_t)(ws+3504);
	i8 v9351 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9351 = v9350;

	i8 v9352 = (i8)(intptr_t)(ws+3384);
	i1 v9353 = *(i1*)(intptr_t)v9352;
	i1 v9354 = (i1)+0;
	if (v9353==v9354) goto c01_06ac; else goto c01_06ad;

c01_06ac:;

	i8 v9355 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v9355)();

	i8 v9356 = (i8)(intptr_t)(ws+3304);
	i8 v9357 = *(i8*)(intptr_t)v9356;
	i8 v9358 = v9357+(+32);
	i8 v9359 = *(i8*)(intptr_t)v9358;
	i8 v9360 = v9359+(+8);
	i8 v9361 = *(i8*)(intptr_t)v9360;
	*(i8*)(intptr_t)(ws+3696) = v9361;
	i8 v9362 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9362)();

	i8 v9363 = (i8)(intptr_t)c01_s017a;
	*(i8*)(intptr_t)(ws+3696) = v9363;
	i8 v9364 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9364)();

	i8 v9365 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v9365)();

c01_06ad:;

c01_06a9:;

	i8 v9366 = (i8)(intptr_t)(ws+3304);
	i8 v9367 = *(i8*)(intptr_t)v9366;
	i8 v9368 = v9367+(+16);
	i8 v9369 = *(i8*)(intptr_t)v9368;
	i8 v9370 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9370 = v9369;

}
	void f219_AddAlias(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_68 workspace at ws+3384 length ws+16
void f380_reduce_68(void) {

	i8 v9371 = (i8)+0;
	*(i8*)(intptr_t)(ws+3400) = v9371;
	i8 v9372 = (i8)(intptr_t)(ws+3328);
	i8 v9373 = *(i8*)(intptr_t)v9372;
	*(i8*)(intptr_t)(ws+3408) = v9373;
	i8 v9374 = (i8)(intptr_t)(ws+3312);
	i8 v9375 = *(i8*)(intptr_t)v9374;
	i8 v9376 = v9375+(+32);
	i8 v9377 = *(i8*)(intptr_t)v9376;
	*(i8*)(intptr_t)(ws+3416) = v9377;
	i8 v9378 = (i8)(intptr_t)(f219_AddAlias);

	((void(*)(void))(intptr_t)v9378)();

	i8 v9379 = *(i8*)(intptr_t)(ws+3424);
	i8 v9380 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9380 = v9379;

	i8 v9381 = (i8)(intptr_t)(ws+3384);
	i8 v9382 = *(i8*)(intptr_t)v9381;
	i8 v9383 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9383 = v9382;

	i1 v9384 = (i1)+66;
	*(i1*)(intptr_t)(ws+3496) = v9384;
	i8 v9385 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9385;
	i8 v9386 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9386)();

	i1 v9387 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9387;
	i8 v9388 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9388;
	i8 v9389 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9389)();

}
	void f218_AddSymbol(void);

// reduce_69 workspace at ws+3384 length ws+8
void f381_reduce_69(void) {

	i8 v9390 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9390;
	i8 v9391 = (i8)(intptr_t)(ws+3304);
	i8 v9392 = *(i8*)(intptr_t)v9391;
	*(i8*)(intptr_t)(ws+3496) = v9392;
	i8 v9393 = (i8)(intptr_t)(f218_AddSymbol);

	((void(*)(void))(intptr_t)v9393)();

	i8 v9394 = *(i8*)(intptr_t)(ws+3504);
	i8 v9395 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9395 = v9394;

	i8 v9396 = (i8)(intptr_t)(ws+3384);
	i8 v9397 = *(i8*)(intptr_t)v9396;
	i8 v9398 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9398 = v9397;

}
	void f216_LookupSymbol(void);
	void f73_StartError(void);
const i1 c01_s017b[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s017c[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f11_print(void);
	void f74_EndError(void);
	void f33_Free(void);

// reduce_70 workspace at ws+3384 length ws+24
void f382_reduce_70(void) {

	i8 v9399 = (i8)(intptr_t)(ws+3304);
	i8 v9400 = *(i8*)(intptr_t)v9399;
	i8 v9401 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9401 = v9400;

	i8 v9402 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9402;
	i8 v9403 = (i8)(intptr_t)(ws+3384);
	i8 v9404 = *(i8*)(intptr_t)v9403;
	*(i8*)(intptr_t)(ws+3496) = v9404;
	i8 v9405 = (i8)(intptr_t)(f216_LookupSymbol);

	((void(*)(void))(intptr_t)v9405)();

	i8 v9406 = *(i8*)(intptr_t)(ws+3504);
	i8 v9407 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9407 = v9406;

	i8 v9408 = (i8)(intptr_t)(ws+3392);
	i8 v9409 = *(i8*)(intptr_t)v9408;
	i8 v9410 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9410 = v9409;

	i8 v9411 = (i8)(intptr_t)(ws+3400);
	i8 v9412 = *(i8*)(intptr_t)v9411;
	i8 v9413 = (i8)+0;
	if (v9412==v9413) goto c01_06b1; else goto c01_06b2;

c01_06b1:;

	i8 v9414 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v9414)();

	i8 v9415 = (i8)(intptr_t)c01_s017b;
	*(i8*)(intptr_t)(ws+3696) = v9415;
	i8 v9416 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9416)();

	i8 v9417 = (i8)(intptr_t)(ws+3384);
	i8 v9418 = *(i8*)(intptr_t)v9417;
	*(i8*)(intptr_t)(ws+3696) = v9418;
	i8 v9419 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9419)();

	i8 v9420 = (i8)(intptr_t)c01_s017c;
	*(i8*)(intptr_t)(ws+3696) = v9420;
	i8 v9421 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9421)();

	i8 v9422 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v9422)();

c01_06b2:;

c01_06ae:;

	i8 v9423 = (i8)(intptr_t)(ws+3384);
	i8 v9424 = *(i8*)(intptr_t)v9423;
	*(i8*)(intptr_t)(ws+3680) = v9424;
	i8 v9425 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v9425)();

	i8 v9426 = (i8)(intptr_t)(ws+3400);
	i8 v9427 = *(i8*)(intptr_t)v9426;
	i8 v9428 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9428 = v9427;

}
	void f216_LookupSymbol(void);
	void f218_AddSymbol(void);
	void f33_Free(void);

// reduce_71 workspace at ws+3384 length ws+32
void f383_reduce_71(void) {

	i8 v9429 = (i8)(intptr_t)(ws+3304);
	i8 v9430 = *(i8*)(intptr_t)v9429;
	i8 v9431 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9431 = v9430;

	i8 v9432 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9432;
	i8 v9433 = (i8)(intptr_t)(ws+3384);
	i8 v9434 = *(i8*)(intptr_t)v9433;
	*(i8*)(intptr_t)(ws+3496) = v9434;
	i8 v9435 = (i8)(intptr_t)(f216_LookupSymbol);

	((void(*)(void))(intptr_t)v9435)();

	i8 v9436 = *(i8*)(intptr_t)(ws+3504);
	i8 v9437 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9437 = v9436;

	i8 v9438 = (i8)(intptr_t)(ws+3392);
	i8 v9439 = *(i8*)(intptr_t)v9438;
	i8 v9440 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9440 = v9439;

	i8 v9441 = (i8)(intptr_t)(ws+3400);
	i8 v9442 = *(i8*)(intptr_t)v9441;
	i8 v9443 = (i8)+0;
	if (v9442==v9443) goto c01_06b6; else goto c01_06b7;

c01_06b6:;

	i8 v9444 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9444;
	i8 v9445 = (i8)(intptr_t)(ws+3384);
	i8 v9446 = *(i8*)(intptr_t)v9445;
	*(i8*)(intptr_t)(ws+3496) = v9446;
	i8 v9447 = (i8)(intptr_t)(f218_AddSymbol);

	((void(*)(void))(intptr_t)v9447)();

	i8 v9448 = *(i8*)(intptr_t)(ws+3504);
	i8 v9449 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9449 = v9448;

	i8 v9450 = (i8)(intptr_t)(ws+3408);
	i8 v9451 = *(i8*)(intptr_t)v9450;
	i8 v9452 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9452 = v9451;

	goto c01_06b3;

c01_06b7:;

	i8 v9453 = (i8)(intptr_t)(ws+3384);
	i8 v9454 = *(i8*)(intptr_t)v9453;
	*(i8*)(intptr_t)(ws+3680) = v9454;
	i8 v9455 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v9455)();

c01_06b3:;

	i8 v9456 = (i8)(intptr_t)(ws+3400);
	i8 v9457 = *(i8*)(intptr_t)v9456;
	i8 v9458 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9458 = v9457;

}
const i1 c01_s017d[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f75_SimpleError(void);

// reduce_72 workspace at ws+3384 length ws+0
void f384_reduce_72(void) {

	i8 v9459 = (i8)(intptr_t)(ws+3304);
	i8 v9460 = *(i8*)(intptr_t)v9459;
	i8 v9461 = v9460+(+32);
	i1 v9462 = *(i1*)(intptr_t)v9461;

	if (v9462 != +28) goto c01_06b9;

	i8 v9463 = (i8)(intptr_t)(ws+3304);
	i8 v9464 = *(i8*)(intptr_t)v9463;
	i8 v9465 = *(i8*)(intptr_t)v9464;
	i8 v9466 = *(i8*)(intptr_t)v9465;
	i8 v9467 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9467 = v9466;

	goto c01_06b8;

c01_06b9:;

	if (v9462 != +30) goto c01_06ba;

	i8 v9468 = (i8)(intptr_t)(ws+3304);
	i8 v9469 = *(i8*)(intptr_t)v9468;
	i8 v9470 = *(i8*)(intptr_t)v9469;
	i8 v9471 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9471 = v9470;

	goto c01_06b8;

c01_06ba:;

	i8 v9472 = (i8)(intptr_t)c01_s017d;
	*(i8*)(intptr_t)(ws+3648) = v9472;
	i8 v9473 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v9473)();

c01_06b8:;


}
	void f301_yy_destructor(void);

// reduce_73 workspace at ws+3384 length ws+0
void f385_reduce_73(void) {

	i8 v9474 = (i8)(intptr_t)(ws+3312);
	i8 v9475 = *(i8*)(intptr_t)v9474;
	i8 v9476 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9476 = v9475;

	i1 v9477 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9477;
	i8 v9478 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9478;
	i8 v9479 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9479)();

}
	void f292_i_check_sub_call_args(void);
const i1 c01_s017e[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f75_SimpleError(void);
	void f99_GetOutputParameter(void);
	void f218_AddSymbol(void);
	void f259_InitVariable(void);
	void f111_MidCall(void);
	void f256_Generate(void);
	void f119_MidPoparg(void);
	void f125_MidAddress(void);
	void f130_MidDeref(void);
	void f139_MidStore(void);
	void f256_Generate(void);
	void f293_i_end_call(void);
	void f125_MidAddress(void);
	void f130_MidDeref(void);

// reduce_74 workspace at ws+3384 length ws+104
void f386_reduce_74(void) {

	i8 v9480 = (i8)(intptr_t)(ws+80);
	i8 v9481 = *(i8*)(intptr_t)v9480;
	i8 v9482 = v9481+(+8);
	i8 v9483 = *(i8*)(intptr_t)v9482;
	i8 v9484 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9484 = v9483;

	i1 v9485 = (i1)+1;
	i8 v9486 = (i8)(intptr_t)(ws+80);
	i8 v9487 = *(i8*)(intptr_t)v9486;
	i8 v9488 = v9487+(+41);
	*(i1*)(intptr_t)v9488 = v9485;

	i8 v9489 = (i8)(intptr_t)(f292_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9489)();

	i8 v9490 = (i8)(intptr_t)(ws+3384);
	i8 v9491 = *(i8*)(intptr_t)v9490;
	i8 v9492 = v9491+(+81);
	i1 v9493 = *(i1*)(intptr_t)v9492;
	i1 v9494 = (i1)+1;
	if (v9493==v9494) goto c01_06bf; else goto c01_06be;

c01_06be:;

	i8 v9495 = (i8)(intptr_t)c01_s017e;
	*(i8*)(intptr_t)(ws+3648) = v9495;
	i8 v9496 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v9496)();

c01_06bf:;

c01_06bb:;

	i8 v9497 = (i8)(intptr_t)(ws+3384);
	i8 v9498 = *(i8*)(intptr_t)v9497;
	*(i8*)(intptr_t)(ws+3488) = v9498;
	i1 v9499 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v9499;
	i8 v9500 = (i8)(intptr_t)(f99_GetOutputParameter);

	((void(*)(void))(intptr_t)v9500)();

	i8 v9501 = *(i8*)(intptr_t)(ws+3504);
	i8 v9502 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9502 = v9501;

	i8 v9503 = (i8)(intptr_t)(ws+3392);
	i8 v9504 = *(i8*)(intptr_t)v9503;
	i8 v9505 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9505 = v9504;

	i8 v9506 = (i8)(intptr_t)(ws+3400);
	i8 v9507 = *(i8*)(intptr_t)v9506;
	i8 v9508 = *(i8*)(intptr_t)v9507;
	i8 v9509 = *(i8*)(intptr_t)v9508;
	i8 v9510 = v9509+(+48);
	i2 v9511 = *(i2*)(intptr_t)v9510;
	i1 v9512 = v9511;
	i8 v9513 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v9513 = v9512;

	i8 v9514 = (i8)(intptr_t)(ws+40);
	i8 v9515 = *(i8*)(intptr_t)v9514;
	i8 v9516 = v9515+(+16);
	*(i8*)(intptr_t)(ws+3488) = v9516;
	i8 v9517 = (i8)+0;
	*(i8*)(intptr_t)(ws+3496) = v9517;
	i8 v9518 = (i8)(intptr_t)(f218_AddSymbol);

	((void(*)(void))(intptr_t)v9518)();

	i8 v9519 = *(i8*)(intptr_t)(ws+3504);
	i8 v9520 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9520 = v9519;

	i8 v9521 = (i8)(intptr_t)(ws+3416);
	i8 v9522 = *(i8*)(intptr_t)v9521;
	i8 v9523 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9523 = v9522;

	i8 v9524 = (i8)(intptr_t)(ws+40);
	i8 v9525 = *(i8*)(intptr_t)v9524;
	*(i8*)(intptr_t)(ws+3488) = v9525;
	i8 v9526 = (i8)(intptr_t)(ws+3424);
	i8 v9527 = *(i8*)(intptr_t)v9526;
	*(i8*)(intptr_t)(ws+3496) = v9527;
	i8 v9528 = (i8)(intptr_t)(ws+3400);
	i8 v9529 = *(i8*)(intptr_t)v9528;
	i8 v9530 = *(i8*)(intptr_t)v9529;
	i8 v9531 = *(i8*)(intptr_t)v9530;
	*(i8*)(intptr_t)(ws+3504) = v9531;
	i8 v9532 = (i8)(intptr_t)(f259_InitVariable);

	((void(*)(void))(intptr_t)v9532)();

	i8 v9533 = (i8)(intptr_t)(ws+3304);
	i8 v9534 = *(i8*)(intptr_t)v9533;
	*(i8*)(intptr_t)(ws+3488) = v9534;
	i8 v9535 = (i8)(intptr_t)(ws+80);
	i8 v9536 = *(i8*)(intptr_t)v9535;
	i8 v9537 = *(i8*)(intptr_t)v9536;
	*(i8*)(intptr_t)(ws+3496) = v9537;
	i8 v9538 = (i8)(intptr_t)(ws+3384);
	i8 v9539 = *(i8*)(intptr_t)v9538;
	*(i8*)(intptr_t)(ws+3504) = v9539;
	i8 v9540 = (i8)(intptr_t)(f111_MidCall);

	((void(*)(void))(intptr_t)v9540)();

	i8 v9541 = *(i8*)(intptr_t)(ws+3512);
	i8 v9542 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v9542 = v9541;

	i8 v9543 = (i8)(intptr_t)(ws+3432);
	i8 v9544 = *(i8*)(intptr_t)v9543;
	*(i8*)(intptr_t)(ws+3488) = v9544;
	i8 v9545 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v9545)();

	i8 v9546 = (i8)(intptr_t)(ws+3408);
	i1 v9547 = *(i1*)(intptr_t)v9546;
	*(i1*)(intptr_t)(ws+3488) = v9547;
	i8 v9548 = (i8)(intptr_t)(ws+3384);
	i8 v9549 = *(i8*)(intptr_t)v9548;
	*(i8*)(intptr_t)(ws+3496) = v9549;
	i8 v9550 = (i8)(intptr_t)(ws+3400);
	i8 v9551 = *(i8*)(intptr_t)v9550;
	*(i8*)(intptr_t)(ws+3504) = v9551;
	i1 v9552 = (i1)+0;
	*(i1*)(intptr_t)(ws+3512) = v9552;
	i8 v9553 = (i8)(intptr_t)(f119_MidPoparg);

	((void(*)(void))(intptr_t)v9553)();

	i8 v9554 = *(i8*)(intptr_t)(ws+3520);
	i8 v9555 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v9555 = v9554;

	i8 v9556 = (i8)(intptr_t)(ws+3424);
	i8 v9557 = *(i8*)(intptr_t)v9556;
	*(i8*)(intptr_t)(ws+3488) = v9557;
	i2 v9558 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v9558;
	i8 v9559 = (i8)(intptr_t)(f125_MidAddress);

	((void(*)(void))(intptr_t)v9559)();

	i8 v9560 = *(i8*)(intptr_t)(ws+3504);
	i8 v9561 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9561 = v9560;

	i8 v9562 = (i8)(intptr_t)(ws+3408);
	i1 v9563 = *(i1*)(intptr_t)v9562;
	*(i1*)(intptr_t)(ws+3544) = v9563;
	i8 v9564 = (i8)(intptr_t)(ws+3448);
	i8 v9565 = *(i8*)(intptr_t)v9564;
	*(i8*)(intptr_t)(ws+3552) = v9565;
	i8 v9566 = (i8)(intptr_t)(f130_MidDeref);

	((void(*)(void))(intptr_t)v9566)();

	i8 v9567 = *(i8*)(intptr_t)(ws+3560);
	i8 v9568 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v9568 = v9567;

	i8 v9569 = (i8)(intptr_t)(ws+3408);
	i1 v9570 = *(i1*)(intptr_t)v9569;
	*(i1*)(intptr_t)(ws+3488) = v9570;
	i8 v9571 = (i8)(intptr_t)(ws+3440);
	i8 v9572 = *(i8*)(intptr_t)v9571;
	*(i8*)(intptr_t)(ws+3496) = v9572;
	i8 v9573 = (i8)(intptr_t)(ws+3456);
	i8 v9574 = *(i8*)(intptr_t)v9573;
	*(i8*)(intptr_t)(ws+3504) = v9574;
	i8 v9575 = (i8)(intptr_t)(f139_MidStore);

	((void(*)(void))(intptr_t)v9575)();

	i8 v9576 = *(i8*)(intptr_t)(ws+3512);
	i8 v9577 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9577 = v9576;

	i8 v9578 = (i8)(intptr_t)(ws+3464);
	i8 v9579 = *(i8*)(intptr_t)v9578;
	*(i8*)(intptr_t)(ws+3488) = v9579;
	i8 v9580 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v9580)();

	i8 v9581 = (i8)(intptr_t)(f293_i_end_call);

	((void(*)(void))(intptr_t)v9581)();

	i8 v9582 = (i8)(intptr_t)(ws+3424);
	i8 v9583 = *(i8*)(intptr_t)v9582;
	*(i8*)(intptr_t)(ws+3488) = v9583;
	i2 v9584 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v9584;
	i8 v9585 = (i8)(intptr_t)(f125_MidAddress);

	((void(*)(void))(intptr_t)v9585)();

	i8 v9586 = *(i8*)(intptr_t)(ws+3504);
	i8 v9587 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9587 = v9586;

	i8 v9588 = (i8)(intptr_t)(ws+3408);
	i1 v9589 = *(i1*)(intptr_t)v9588;
	*(i1*)(intptr_t)(ws+3544) = v9589;
	i8 v9590 = (i8)(intptr_t)(ws+3472);
	i8 v9591 = *(i8*)(intptr_t)v9590;
	*(i8*)(intptr_t)(ws+3552) = v9591;
	i8 v9592 = (i8)(intptr_t)(f130_MidDeref);

	((void(*)(void))(intptr_t)v9592)();

	i8 v9593 = *(i8*)(intptr_t)(ws+3560);
	i8 v9594 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9594 = v9593;

	i8 v9595 = (i8)(intptr_t)(ws+3480);
	i8 v9596 = *(i8*)(intptr_t)v9595;
	i8 v9597 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9597 = v9596;

	i8 v9598 = (i8)(intptr_t)(ws+3400);
	i8 v9599 = *(i8*)(intptr_t)v9598;
	i8 v9600 = *(i8*)(intptr_t)v9599;
	i8 v9601 = *(i8*)(intptr_t)v9600;
	i8 v9602 = (i8)(intptr_t)(ws+3296);
	i8 v9603 = *(i8*)(intptr_t)v9602;
	i8 v9604 = v9603+(+24);
	*(i8*)(intptr_t)v9604 = v9601;

}
	void f292_i_check_sub_call_args(void);
const i1 c01_s017f[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f75_SimpleError(void);
	void f111_MidCall(void);
	void f256_Generate(void);
	void f293_i_end_call(void);
	void f301_yy_destructor(void);

// reduce_75 workspace at ws+3384 length ws+16
void f387_reduce_75(void) {

	i8 v9605 = (i8)(intptr_t)(ws+80);
	i8 v9606 = *(i8*)(intptr_t)v9605;
	i8 v9607 = v9606+(+8);
	i8 v9608 = *(i8*)(intptr_t)v9607;
	i8 v9609 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9609 = v9608;

	i8 v9610 = (i8)(intptr_t)(f292_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9610)();

	i8 v9611 = (i8)(intptr_t)(ws+3384);
	i8 v9612 = *(i8*)(intptr_t)v9611;
	i8 v9613 = v9612+(+81);
	i1 v9614 = *(i1*)(intptr_t)v9613;
	i1 v9615 = (i1)+0;
	if (v9614==v9615) goto c01_06c4; else goto c01_06c3;

c01_06c3:;

	i8 v9616 = (i8)(intptr_t)c01_s017f;
	*(i8*)(intptr_t)(ws+3648) = v9616;
	i8 v9617 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v9617)();

c01_06c4:;

c01_06c0:;

	i8 v9618 = (i8)(intptr_t)(ws+3312);
	i8 v9619 = *(i8*)(intptr_t)v9618;
	*(i8*)(intptr_t)(ws+3488) = v9619;
	i8 v9620 = (i8)(intptr_t)(ws+80);
	i8 v9621 = *(i8*)(intptr_t)v9620;
	i8 v9622 = *(i8*)(intptr_t)v9621;
	*(i8*)(intptr_t)(ws+3496) = v9622;
	i8 v9623 = (i8)(intptr_t)(ws+3384);
	i8 v9624 = *(i8*)(intptr_t)v9623;
	*(i8*)(intptr_t)(ws+3504) = v9624;
	i8 v9625 = (i8)(intptr_t)(f111_MidCall);

	((void(*)(void))(intptr_t)v9625)();

	i8 v9626 = *(i8*)(intptr_t)(ws+3512);
	i8 v9627 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9627 = v9626;

	i8 v9628 = (i8)(intptr_t)(ws+3392);
	i8 v9629 = *(i8*)(intptr_t)v9628;
	*(i8*)(intptr_t)(ws+3488) = v9629;
	i8 v9630 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v9630)();

	i8 v9631 = (i8)(intptr_t)(f293_i_end_call);

	((void(*)(void))(intptr_t)v9631)();

	i1 v9632 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9632;
	i8 v9633 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9633;
	i8 v9634 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9634)();

}
	void f292_i_check_sub_call_args(void);
	void f111_MidCall(void);
	void f256_Generate(void);
const i1 c01_s0180[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f75_SimpleError(void);
	void f99_GetOutputParameter(void);
	void f67_IsPtr(void);
const i1 c01_s0181[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f75_SimpleError(void);
	void f260_MakePointerType(void);
	void f268_CheckExpressionType(void);
	void f221_CheckNotPartialType(void);
	void f221_CheckNotPartialType(void);
	void f119_MidPoparg(void);
	void f130_MidDeref(void);
	void f139_MidStore(void);
	void f256_Generate(void);
	void f62_Discard(void);
const i1 c01_s0182[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f75_SimpleError(void);
	void f293_i_end_call(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_76 workspace at ws+3384 length ws+104
void f388_reduce_76(void) {

	i8 v9635 = (i8)(intptr_t)(ws+80);
	i8 v9636 = *(i8*)(intptr_t)v9635;
	i8 v9637 = v9636+(+8);
	i8 v9638 = *(i8*)(intptr_t)v9637;
	i8 v9639 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9639 = v9638;

	i8 v9640 = (i8)(intptr_t)(f292_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9640)();

	i8 v9641 = (i8)(intptr_t)(ws+3312);
	i8 v9642 = *(i8*)(intptr_t)v9641;
	*(i8*)(intptr_t)(ws+3488) = v9642;
	i8 v9643 = (i8)(intptr_t)(ws+80);
	i8 v9644 = *(i8*)(intptr_t)v9643;
	i8 v9645 = *(i8*)(intptr_t)v9644;
	*(i8*)(intptr_t)(ws+3496) = v9645;
	i8 v9646 = (i8)(intptr_t)(ws+3384);
	i8 v9647 = *(i8*)(intptr_t)v9646;
	*(i8*)(intptr_t)(ws+3504) = v9647;
	i8 v9648 = (i8)(intptr_t)(f111_MidCall);

	((void(*)(void))(intptr_t)v9648)();

	i8 v9649 = *(i8*)(intptr_t)(ws+3512);
	i8 v9650 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9650 = v9649;

	i8 v9651 = (i8)(intptr_t)(ws+3392);
	i8 v9652 = *(i8*)(intptr_t)v9651;
	*(i8*)(intptr_t)(ws+3488) = v9652;
	i8 v9653 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v9653)();

	i8 v9654 = (i8)(intptr_t)(ws+3384);
	i8 v9655 = *(i8*)(intptr_t)v9654;
	i8 v9656 = v9655+(+81);
	i1 v9657 = *(i1*)(intptr_t)v9656;
	i8 v9658 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9658 = v9657;

	i1 v9659 = (i1)+0;
	i8 v9660 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v9660 = v9659;

	i8 v9661 = (i8)(intptr_t)(ws+3336);
	i8 v9662 = *(i8*)(intptr_t)v9661;
	i8 v9663 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9663 = v9662;

c01_06c5:;

	i8 v9664 = (i8)(intptr_t)(ws+3408);
	i8 v9665 = *(i8*)(intptr_t)v9664;
	i8 v9666 = (i8)+0;
	if (v9665==v9666) goto c01_06ca; else goto c01_06c9;

c01_06c9:;

	i8 v9667 = (i8)(intptr_t)(ws+3400);
	i1 v9668 = *(i1*)(intptr_t)v9667;
	i1 v9669 = (i1)+0;
	if (v9668==v9669) goto c01_06ce; else goto c01_06cf;

c01_06ce:;

	i8 v9670 = (i8)(intptr_t)c01_s0180;
	*(i8*)(intptr_t)(ws+3648) = v9670;
	i8 v9671 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v9671)();

c01_06cf:;

c01_06cb:;

	i8 v9672 = (i8)(intptr_t)(ws+3400);
	i1 v9673 = *(i1*)(intptr_t)v9672;
	i1 v9674 = v9673+(-1);
	i8 v9675 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9675 = v9674;

	i8 v9676 = (i8)(intptr_t)(ws+3384);
	i8 v9677 = *(i8*)(intptr_t)v9676;
	*(i8*)(intptr_t)(ws+3488) = v9677;
	i8 v9678 = (i8)(intptr_t)(ws+3400);
	i1 v9679 = *(i1*)(intptr_t)v9678;
	*(i1*)(intptr_t)(ws+3496) = v9679;
	i8 v9680 = (i8)(intptr_t)(f99_GetOutputParameter);

	((void(*)(void))(intptr_t)v9680)();

	i8 v9681 = *(i8*)(intptr_t)(ws+3504);
	i8 v9682 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9682 = v9681;

	i8 v9683 = (i8)(intptr_t)(ws+3416);
	i8 v9684 = *(i8*)(intptr_t)v9683;
	i8 v9685 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9685 = v9684;

	i8 v9686 = (i8)(intptr_t)(ws+3408);
	i8 v9687 = *(i8*)(intptr_t)v9686;
	i8 v9688 = v9687+(+32);
	i8 v9689 = *(i8*)(intptr_t)v9688;
	i8 v9690 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v9690 = v9689;

	i8 v9691 = (i8)+0;
	i8 v9692 = (i8)(intptr_t)(ws+3408);
	i8 v9693 = *(i8*)(intptr_t)v9692;
	i8 v9694 = v9693+(+32);
	*(i8*)(intptr_t)v9694 = v9691;

	i8 v9695 = (i8)(intptr_t)(ws+3408);
	i8 v9696 = *(i8*)(intptr_t)v9695;
	i8 v9697 = v9696+(+40);
	i8 v9698 = *(i8*)(intptr_t)v9697;
	i8 v9699 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9699 = v9698;

	i8 v9700 = (i8)(intptr_t)(ws+3432);
	i8 v9701 = *(i8*)(intptr_t)v9700;
	i8 v9702 = v9701+(+24);
	i8 v9703 = *(i8*)(intptr_t)v9702;
	*(i8*)(intptr_t)(ws+3560) = v9703;
	i8 v9704 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v9704)();

	i1 v9705 = *(i1*)(intptr_t)(ws+3568);
	i8 v9706 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v9706 = v9705;

	i8 v9707 = (i8)(intptr_t)(ws+3440);
	i1 v9708 = *(i1*)(intptr_t)v9707;
	i1 v9709 = (i1)+0;
	if (v9708==v9709) goto c01_06d3; else goto c01_06d4;

c01_06d3:;

	i8 v9710 = (i8)(intptr_t)c01_s0181;
	*(i8*)(intptr_t)(ws+3648) = v9710;
	i8 v9711 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v9711)();

c01_06d4:;

c01_06d0:;

	i8 v9712 = (i8)(intptr_t)(ws+3424);
	i8 v9713 = *(i8*)(intptr_t)v9712;
	i8 v9714 = *(i8*)(intptr_t)v9713;
	i8 v9715 = *(i8*)(intptr_t)v9714;
	*(i8*)(intptr_t)(ws+3496) = v9715;
	i8 v9716 = (i8)(intptr_t)(f260_MakePointerType);

	((void(*)(void))(intptr_t)v9716)();

	i8 v9717 = *(i8*)(intptr_t)(ws+3504);
	i8 v9718 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9718 = v9717;

	i8 v9719 = (i8)(intptr_t)(ws+3432);
	i8 v9720 = *(i8*)(intptr_t)v9719;
	*(i8*)(intptr_t)(ws+3496) = v9720;
	i8 v9721 = (i8)(intptr_t)(ws+3448);
	i8 v9722 = *(i8*)(intptr_t)v9721;
	*(i8*)(intptr_t)(ws+3504) = v9722;
	i8 v9723 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(void))(intptr_t)v9723)();

	i8 v9724 = (i8)(intptr_t)(ws+3424);
	i8 v9725 = *(i8*)(intptr_t)v9724;
	i8 v9726 = *(i8*)(intptr_t)v9725;
	i8 v9727 = *(i8*)(intptr_t)v9726;
	*(i8*)(intptr_t)(ws+3520) = v9727;
	i8 v9728 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9728)();

	i8 v9729 = (i8)(intptr_t)(ws+3432);
	i8 v9730 = *(i8*)(intptr_t)v9729;
	i8 v9731 = v9730+(+24);
	i8 v9732 = *(i8*)(intptr_t)v9731;
	*(i8*)(intptr_t)(ws+3520) = v9732;
	i8 v9733 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9733)();

	i8 v9734 = (i8)(intptr_t)(ws+3424);
	i8 v9735 = *(i8*)(intptr_t)v9734;
	i8 v9736 = *(i8*)(intptr_t)v9735;
	i8 v9737 = *(i8*)(intptr_t)v9736;
	i8 v9738 = v9737+(+48);
	i2 v9739 = *(i2*)(intptr_t)v9738;
	i1 v9740 = v9739;
	i8 v9741 = (i8)(intptr_t)(ws+3456);
	*(i1*)(intptr_t)v9741 = v9740;

	i8 v9742 = (i8)(intptr_t)(ws+3456);
	i1 v9743 = *(i1*)(intptr_t)v9742;
	*(i1*)(intptr_t)(ws+3488) = v9743;
	i8 v9744 = (i8)(intptr_t)(ws+3384);
	i8 v9745 = *(i8*)(intptr_t)v9744;
	*(i8*)(intptr_t)(ws+3496) = v9745;
	i8 v9746 = (i8)(intptr_t)(ws+3424);
	i8 v9747 = *(i8*)(intptr_t)v9746;
	*(i8*)(intptr_t)(ws+3504) = v9747;
	i8 v9748 = (i8)(intptr_t)(ws+3401);
	i1 v9749 = *(i1*)(intptr_t)v9748;
	*(i1*)(intptr_t)(ws+3512) = v9749;
	i8 v9750 = (i8)(intptr_t)(f119_MidPoparg);

	((void(*)(void))(intptr_t)v9750)();

	i8 v9751 = *(i8*)(intptr_t)(ws+3520);
	i8 v9752 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9752 = v9751;

	i8 v9753 = (i8)(intptr_t)(ws+3456);
	i1 v9754 = *(i1*)(intptr_t)v9753;
	*(i1*)(intptr_t)(ws+3544) = v9754;
	i8 v9755 = (i8)(intptr_t)(ws+3432);
	i8 v9756 = *(i8*)(intptr_t)v9755;
	*(i8*)(intptr_t)(ws+3552) = v9756;
	i8 v9757 = (i8)(intptr_t)(f130_MidDeref);

	((void(*)(void))(intptr_t)v9757)();

	i8 v9758 = *(i8*)(intptr_t)(ws+3560);
	i8 v9759 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9759 = v9758;

	i8 v9760 = (i8)(intptr_t)(ws+3456);
	i1 v9761 = *(i1*)(intptr_t)v9760;
	*(i1*)(intptr_t)(ws+3488) = v9761;
	i8 v9762 = (i8)(intptr_t)(ws+3464);
	i8 v9763 = *(i8*)(intptr_t)v9762;
	*(i8*)(intptr_t)(ws+3496) = v9763;
	i8 v9764 = (i8)(intptr_t)(ws+3472);
	i8 v9765 = *(i8*)(intptr_t)v9764;
	*(i8*)(intptr_t)(ws+3504) = v9765;
	i8 v9766 = (i8)(intptr_t)(f139_MidStore);

	((void(*)(void))(intptr_t)v9766)();

	i8 v9767 = *(i8*)(intptr_t)(ws+3512);
	i8 v9768 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9768 = v9767;

	i8 v9769 = (i8)(intptr_t)(ws+3480);
	i8 v9770 = *(i8*)(intptr_t)v9769;
	*(i8*)(intptr_t)(ws+3488) = v9770;
	i8 v9771 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v9771)();

	i8 v9772 = (i8)(intptr_t)(ws+3401);
	i1 v9773 = *(i1*)(intptr_t)v9772;
	i1 v9774 = v9773+(+1);
	i8 v9775 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v9775 = v9774;

	i8 v9776 = (i8)(intptr_t)(ws+3424);
	i8 v9777 = *(i8*)(intptr_t)v9776;
	i8 v9778 = *(i8*)(intptr_t)v9777;
	i8 v9779 = v9778+(+16);
	i8 v9780 = *(i8*)(intptr_t)v9779;
	i8 v9781 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9781 = v9780;

	goto c01_06c5;

c01_06ca:;

	i8 v9782 = (i8)(intptr_t)(ws+3336);
	i8 v9783 = *(i8*)(intptr_t)v9782;
	*(i8*)(intptr_t)(ws+3592) = v9783;
	i8 v9784 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v9784)();

	i8 v9785 = (i8)(intptr_t)(ws+3401);
	i1 v9786 = *(i1*)(intptr_t)v9785;
	i8 v9787 = (i8)(intptr_t)(ws+3384);
	i8 v9788 = *(i8*)(intptr_t)v9787;
	i8 v9789 = v9788+(+81);
	i1 v9790 = *(i1*)(intptr_t)v9789;
	if (v9786==v9790) goto c01_06d9; else goto c01_06d8;

c01_06d8:;

	i8 v9791 = (i8)(intptr_t)c01_s0182;
	*(i8*)(intptr_t)(ws+3648) = v9791;
	i8 v9792 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v9792)();

c01_06d9:;

c01_06d5:;

	i8 v9793 = (i8)(intptr_t)(f293_i_end_call);

	((void(*)(void))(intptr_t)v9793)();

	i1 v9794 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v9794;
	i8 v9795 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v9795;
	i8 v9796 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9796)();

	i1 v9797 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9797;
	i8 v9798 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9798;
	i8 v9799 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9799)();

}
	void f226_IsSubroutine(void);
	void f73_StartError(void);
const i1 c01_s0183[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(void);
	void f11_print(void);
const i1 c01_s0184[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f11_print(void);
	void f74_EndError(void);
	void f68_InternalAlloc(void);
	void f98_GetInputParameter(void);
	void f99_GetOutputParameter(void);

// reduce_77 workspace at ws+3384 length ws+48
void f389_reduce_77(void) {

	i8 v9800 = (i8)(intptr_t)(ws+3304);
	i8 v9801 = *(i8*)(intptr_t)v9800;
	i8 v9802 = v9801+(+24);
	i8 v9803 = *(i8*)(intptr_t)v9802;
	*(i8*)(intptr_t)(ws+3560) = v9803;
	i8 v9804 = (i8)(intptr_t)(f226_IsSubroutine);

	((void(*)(void))(intptr_t)v9804)();

	i1 v9805 = *(i1*)(intptr_t)(ws+3568);
	i8 v9806 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9806 = v9805;

	i8 v9807 = (i8)(intptr_t)(ws+3384);
	i1 v9808 = *(i1*)(intptr_t)v9807;
	i1 v9809 = (i1)+0;
	if (v9808==v9809) goto c01_06dd; else goto c01_06de;

c01_06dd:;

	i8 v9810 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v9810)();

	i8 v9811 = (i8)(intptr_t)c01_s0183;
	*(i8*)(intptr_t)(ws+3696) = v9811;
	i8 v9812 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9812)();

	i8 v9813 = (i8)(intptr_t)(ws+3304);
	i8 v9814 = *(i8*)(intptr_t)v9813;
	i8 v9815 = v9814+(+24);
	i8 v9816 = *(i8*)(intptr_t)v9815;
	i8 v9817 = v9816+(+32);
	i8 v9818 = *(i8*)(intptr_t)v9817;
	i8 v9819 = v9818+(+8);
	i8 v9820 = *(i8*)(intptr_t)v9819;
	*(i8*)(intptr_t)(ws+3696) = v9820;
	i8 v9821 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9821)();

	i8 v9822 = (i8)(intptr_t)c01_s0184;
	*(i8*)(intptr_t)(ws+3696) = v9822;
	i8 v9823 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9823)();

	i8 v9824 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v9824)();

c01_06de:;

c01_06da:;

	i8 v9825 = (i8)+42;
	*(i8*)(intptr_t)(ws+3640) = v9825;
	i8 v9826 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v9826)();

	i8 v9827 = *(i8*)(intptr_t)(ws+3648);
	i8 v9828 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9828 = v9827;

	i8 v9829 = (i8)(intptr_t)(ws+3392);
	i8 v9830 = *(i8*)(intptr_t)v9829;
	i8 v9831 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9831 = v9830;

	i8 v9832 = (i8)(intptr_t)(ws+80);
	i8 v9833 = *(i8*)(intptr_t)v9832;
	i8 v9834 = (i8)(intptr_t)(ws+3400);
	i8 v9835 = *(i8*)(intptr_t)v9834;
	i8 v9836 = v9835+(+16);
	*(i8*)(intptr_t)v9836 = v9833;

	i8 v9837 = (i8)(intptr_t)(ws+3304);
	i8 v9838 = *(i8*)(intptr_t)v9837;
	i8 v9839 = v9838+(+24);
	i8 v9840 = *(i8*)(intptr_t)v9839;
	i8 v9841 = *(i8*)(intptr_t)v9840;
	i8 v9842 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9842 = v9841;

	i8 v9843 = (i8)(intptr_t)(ws+3304);
	i8 v9844 = *(i8*)(intptr_t)v9843;
	i8 v9845 = (i8)(intptr_t)(ws+3400);
	i8 v9846 = *(i8*)(intptr_t)v9845;
	*(i8*)(intptr_t)v9846 = v9844;

	i8 v9847 = (i8)(intptr_t)(ws+3408);
	i8 v9848 = *(i8*)(intptr_t)v9847;
	i8 v9849 = (i8)(intptr_t)(ws+3400);
	i8 v9850 = *(i8*)(intptr_t)v9849;
	i8 v9851 = v9850+(+8);
	*(i8*)(intptr_t)v9851 = v9848;

	i8 v9852 = (i8)(intptr_t)(ws+3408);
	i8 v9853 = *(i8*)(intptr_t)v9852;
	*(i8*)(intptr_t)(ws+3464) = v9853;
	i1 v9854 = (i1)+0;
	*(i1*)(intptr_t)(ws+3472) = v9854;
	i8 v9855 = (i8)(intptr_t)(f98_GetInputParameter);

	((void(*)(void))(intptr_t)v9855)();

	i8 v9856 = *(i8*)(intptr_t)(ws+3480);
	i8 v9857 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9857 = v9856;

	i8 v9858 = (i8)(intptr_t)(ws+3416);
	i8 v9859 = *(i8*)(intptr_t)v9858;
	i8 v9860 = (i8)(intptr_t)(ws+3400);
	i8 v9861 = *(i8*)(intptr_t)v9860;
	i8 v9862 = v9861+(+24);
	*(i8*)(intptr_t)v9862 = v9859;

	i8 v9863 = (i8)(intptr_t)(ws+3408);
	i8 v9864 = *(i8*)(intptr_t)v9863;
	*(i8*)(intptr_t)(ws+3488) = v9864;
	i1 v9865 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v9865;
	i8 v9866 = (i8)(intptr_t)(f99_GetOutputParameter);

	((void(*)(void))(intptr_t)v9866)();

	i8 v9867 = *(i8*)(intptr_t)(ws+3504);
	i8 v9868 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9868 = v9867;

	i8 v9869 = (i8)(intptr_t)(ws+3424);
	i8 v9870 = *(i8*)(intptr_t)v9869;
	i8 v9871 = (i8)(intptr_t)(ws+3400);
	i8 v9872 = *(i8*)(intptr_t)v9871;
	i8 v9873 = v9872+(+32);
	*(i8*)(intptr_t)v9873 = v9870;

	i8 v9874 = (i8)(intptr_t)(ws+3400);
	i8 v9875 = *(i8*)(intptr_t)v9874;
	i8 v9876 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v9876 = v9875;

}
	void f301_yy_destructor(void);

// reduce_78 workspace at ws+3384 length ws+0
void f390_reduce_78(void) {

	i8 v9877 = (i8)(intptr_t)(ws+3312);
	i8 v9878 = *(i8*)(intptr_t)v9877;
	i8 v9879 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9879 = v9878;

	i1 v9880 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9880;
	i8 v9881 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9881;
	i8 v9882 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9882)();

}
	void f118_MidEnd(void);
	void f301_yy_destructor(void);

// reduce_79 workspace at ws+3384 length ws+8
void f391_reduce_79(void) {

	i8 v9883 = (i8)(intptr_t)(f118_MidEnd);

	((void(*)(void))(intptr_t)v9883)();

	i8 v9884 = *(i8*)(intptr_t)(ws+3416);
	i8 v9885 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9885 = v9884;

	i8 v9886 = (i8)(intptr_t)(ws+3384);
	i8 v9887 = *(i8*)(intptr_t)v9886;
	i8 v9888 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9888 = v9887;

	i1 v9889 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9889;
	i8 v9890 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9890;
	i8 v9891 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9891)();

}

// reduce_80 workspace at ws+3384 length ws+0
void f392_reduce_80(void) {

	i8 v9892 = (i8)(intptr_t)(ws+3304);
	i8 v9893 = *(i8*)(intptr_t)v9892;
	i8 v9894 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9894 = v9893;

}
	void f62_Discard(void);
	void f301_yy_destructor(void);

// reduce_81 workspace at ws+3384 length ws+0
void f393_reduce_81(void) {

	i8 v9895 = (i8)(intptr_t)(ws+3304);
	i8 v9896 = *(i8*)(intptr_t)v9895;
	i8 v9897 = v9896+(+32);
	i8 v9898 = *(i8*)(intptr_t)v9897;
	*(i8*)(intptr_t)(ws+3592) = v9898;
	i8 v9899 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v9899)();

	i8 v9900 = (i8)(intptr_t)(ws+3320);
	i8 v9901 = *(i8*)(intptr_t)v9900;
	i8 v9902 = (i8)(intptr_t)(ws+3304);
	i8 v9903 = *(i8*)(intptr_t)v9902;
	i8 v9904 = v9903+(+32);
	*(i8*)(intptr_t)v9904 = v9901;

	i8 v9905 = (i8)(intptr_t)(ws+3304);
	i8 v9906 = *(i8*)(intptr_t)v9905;
	i8 v9907 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9907 = v9906;

	i1 v9908 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v9908;
	i8 v9909 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v9909;
	i8 v9910 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v9910)();

}
	void f73_StartError(void);
const i1 c01_s0185[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f11_print(void);
	void f11_print(void);
	void f74_EndError(void);
	void f268_CheckExpressionType(void);
	void f221_CheckNotPartialType(void);
	void f221_CheckNotPartialType(void);
	void f165_NodeWidth(void);
	void f118_MidEnd(void);
	void f154_MidArg(void);

// reduce_82 workspace at ws+3384 length ws+32
void f394_reduce_82(void) {

	i8 v9911 = (i8)(intptr_t)(ws+80);
	i8 v9912 = *(i8*)(intptr_t)v9911;
	i8 v9913 = v9912+(+24);
	i8 v9914 = *(i8*)(intptr_t)v9913;
	i8 v9915 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9915 = v9914;

	i8 v9916 = (i8)(intptr_t)(ws+3384);
	i8 v9917 = *(i8*)(intptr_t)v9916;
	i8 v9918 = (i8)+0;
	if (v9917==v9918) goto c01_06e2; else goto c01_06e3;

c01_06e2:;

	i8 v9919 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v9919)();

	i8 v9920 = (i8)(intptr_t)c01_s0185;
	*(i8*)(intptr_t)(ws+3696) = v9920;
	i8 v9921 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9921)();

	i8 v9922 = (i8)(intptr_t)(ws+80);
	i8 v9923 = *(i8*)(intptr_t)v9922;
	i8 v9924 = v9923+(+8);
	i8 v9925 = *(i8*)(intptr_t)v9924;
	i8 v9926 = *(i8*)(intptr_t)v9925;
	i8 v9927 = v9926+(+8);
	i8 v9928 = *(i8*)(intptr_t)v9927;
	*(i8*)(intptr_t)(ws+3696) = v9928;
	i8 v9929 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v9929)();

	i8 v9930 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v9930)();

c01_06e3:;

c01_06df:;

	i8 v9931 = (i8)(intptr_t)(ws+80);
	i8 v9932 = *(i8*)(intptr_t)v9931;
	i8 v9933 = v9932+(+24);
	i8 v9934 = *(i8*)(intptr_t)v9933;
	i8 v9935 = *(i8*)(intptr_t)v9934;
	i8 v9936 = v9935+(+16);
	i8 v9937 = *(i8*)(intptr_t)v9936;
	i8 v9938 = (i8)(intptr_t)(ws+80);
	i8 v9939 = *(i8*)(intptr_t)v9938;
	i8 v9940 = v9939+(+24);
	*(i8*)(intptr_t)v9940 = v9937;

	i8 v9941 = (i8)(intptr_t)(ws+3304);
	i8 v9942 = *(i8*)(intptr_t)v9941;
	*(i8*)(intptr_t)(ws+3496) = v9942;
	i8 v9943 = (i8)(intptr_t)(ws+3384);
	i8 v9944 = *(i8*)(intptr_t)v9943;
	i8 v9945 = *(i8*)(intptr_t)v9944;
	i8 v9946 = *(i8*)(intptr_t)v9945;
	*(i8*)(intptr_t)(ws+3504) = v9946;
	i8 v9947 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(void))(intptr_t)v9947)();

	i8 v9948 = (i8)(intptr_t)(ws+3384);
	i8 v9949 = *(i8*)(intptr_t)v9948;
	i8 v9950 = *(i8*)(intptr_t)v9949;
	i8 v9951 = *(i8*)(intptr_t)v9950;
	*(i8*)(intptr_t)(ws+3520) = v9951;
	i8 v9952 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9952)();

	i8 v9953 = (i8)(intptr_t)(ws+3304);
	i8 v9954 = *(i8*)(intptr_t)v9953;
	i8 v9955 = v9954+(+24);
	i8 v9956 = *(i8*)(intptr_t)v9955;
	*(i8*)(intptr_t)(ws+3520) = v9956;
	i8 v9957 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9957)();

	i8 v9958 = (i8)(intptr_t)(ws+80);
	i8 v9959 = *(i8*)(intptr_t)v9958;
	i8 v9960 = v9959+(+40);
	i1 v9961 = *(i1*)(intptr_t)v9960;
	i1 v9962 = v9961+(+1);
	i8 v9963 = (i8)(intptr_t)(ws+80);
	i8 v9964 = *(i8*)(intptr_t)v9963;
	i8 v9965 = v9964+(+40);
	*(i1*)(intptr_t)v9965 = v9962;

	i8 v9966 = (i8)(intptr_t)(ws+3304);
	i8 v9967 = *(i8*)(intptr_t)v9966;
	*(i8*)(intptr_t)(ws+3456) = v9967;
	i8 v9968 = (i8)(intptr_t)(f165_NodeWidth);

	((void(*)(void))(intptr_t)v9968)();

	i1 v9969 = *(i1*)(intptr_t)(ws+3464);
	i8 v9970 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v9970 = v9969;

	i8 v9971 = (i8)(intptr_t)(f118_MidEnd);

	((void(*)(void))(intptr_t)v9971)();

	i8 v9972 = *(i8*)(intptr_t)(ws+3416);
	i8 v9973 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9973 = v9972;

	i8 v9974 = (i8)(intptr_t)(ws+3392);
	i1 v9975 = *(i1*)(intptr_t)v9974;
	*(i1*)(intptr_t)(ws+3416) = v9975;
	i8 v9976 = (i8)(intptr_t)(ws+3400);
	i8 v9977 = *(i8*)(intptr_t)v9976;
	*(i8*)(intptr_t)(ws+3424) = v9977;
	i8 v9978 = (i8)(intptr_t)(ws+3304);
	i8 v9979 = *(i8*)(intptr_t)v9978;
	*(i8*)(intptr_t)(ws+3432) = v9979;
	i8 v9980 = (i8)(intptr_t)(ws+80);
	i8 v9981 = *(i8*)(intptr_t)v9980;
	i8 v9982 = v9981+(+8);
	i8 v9983 = *(i8*)(intptr_t)v9982;
	*(i8*)(intptr_t)(ws+3440) = v9983;
	i8 v9984 = (i8)(intptr_t)(ws+3384);
	i8 v9985 = *(i8*)(intptr_t)v9984;
	*(i8*)(intptr_t)(ws+3448) = v9985;
	i8 v9986 = (i8)(intptr_t)(ws+80);
	i8 v9987 = *(i8*)(intptr_t)v9986;
	i8 v9988 = v9987+(+8);
	i8 v9989 = *(i8*)(intptr_t)v9988;
	i8 v9990 = v9989+(+80);
	i1 v9991 = *(i1*)(intptr_t)v9990;
	i8 v9992 = (i8)(intptr_t)(ws+80);
	i8 v9993 = *(i8*)(intptr_t)v9992;
	i8 v9994 = v9993+(+40);
	i1 v9995 = *(i1*)(intptr_t)v9994;
	i1 v9996 = v9991-v9995;
	*(i1*)(intptr_t)(ws+3456) = v9996;
	i8 v9997 = (i8)(intptr_t)(f154_MidArg);

	((void(*)(void))(intptr_t)v9997)();

	i8 v9998 = *(i8*)(intptr_t)(ws+3464);
	i8 v9999 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9999 = v9998;

	i8 v10000 = (i8)(intptr_t)(ws+3408);
	i8 v10001 = *(i8*)(intptr_t)v10000;
	i8 v10002 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10002 = v10001;

}
	void f138_MidPair(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_83 workspace at ws+3384 length ws+8
void f395_reduce_83(void) {

	i8 v10003 = (i8)(intptr_t)(ws+3312);
	i8 v10004 = *(i8*)(intptr_t)v10003;
	*(i8*)(intptr_t)(ws+3392) = v10004;
	i8 v10005 = (i8)(intptr_t)(ws+3328);
	i8 v10006 = *(i8*)(intptr_t)v10005;
	*(i8*)(intptr_t)(ws+3400) = v10006;
	i8 v10007 = (i8)(intptr_t)(f138_MidPair);

	((void(*)(void))(intptr_t)v10007)();

	i8 v10008 = *(i8*)(intptr_t)(ws+3408);
	i8 v10009 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10009 = v10008;

	i8 v10010 = (i8)(intptr_t)(ws+3384);
	i8 v10011 = *(i8*)(intptr_t)v10010;
	i8 v10012 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10012 = v10011;

	i1 v10013 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v10013;
	i8 v10014 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10014;
	i8 v10015 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10015)();

	i1 v10016 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10016;
	i8 v10017 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10017;
	i8 v10018 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10018)();

}
	void f138_MidPair(void);

// reduce_84 workspace at ws+3384 length ws+8
void f396_reduce_84(void) {

	i8 v10019 = (i8)(intptr_t)(ws+3304);
	i8 v10020 = *(i8*)(intptr_t)v10019;
	*(i8*)(intptr_t)(ws+3392) = v10020;
	i8 v10021 = (i8)+0;
	*(i8*)(intptr_t)(ws+3400) = v10021;
	i8 v10022 = (i8)(intptr_t)(f138_MidPair);

	((void(*)(void))(intptr_t)v10022)();

	i8 v10023 = *(i8*)(intptr_t)(ws+3408);
	i8 v10024 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10024 = v10023;

	i8 v10025 = (i8)(intptr_t)(ws+3384);
	i8 v10026 = *(i8*)(intptr_t)v10025;
	i8 v10027 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10027 = v10026;

}
	void f138_MidPair(void);
	void f301_yy_destructor(void);

// reduce_85 workspace at ws+3384 length ws+8
void f397_reduce_85(void) {

	i8 v10028 = (i8)(intptr_t)(ws+3304);
	i8 v10029 = *(i8*)(intptr_t)v10028;
	*(i8*)(intptr_t)(ws+3392) = v10029;
	i8 v10030 = (i8)(intptr_t)(ws+3320);
	i8 v10031 = *(i8*)(intptr_t)v10030;
	*(i8*)(intptr_t)(ws+3400) = v10031;
	i8 v10032 = (i8)(intptr_t)(f138_MidPair);

	((void(*)(void))(intptr_t)v10032)();

	i8 v10033 = *(i8*)(intptr_t)(ws+3408);
	i8 v10034 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10034 = v10033;

	i8 v10035 = (i8)(intptr_t)(ws+3384);
	i8 v10036 = *(i8*)(intptr_t)v10035;
	i8 v10037 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10037 = v10036;

	i1 v10038 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v10038;
	i8 v10039 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10039;
	i8 v10040 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10040)();

}
	void f232_UndoLValue(void);

// reduce_86 workspace at ws+3384 length ws+8
void f398_reduce_86(void) {

	i8 v10041 = (i8)(intptr_t)(ws+3304);
	i8 v10042 = *(i8*)(intptr_t)v10041;
	*(i8*)(intptr_t)(ws+3432) = v10042;
	i8 v10043 = (i8)(intptr_t)(f232_UndoLValue);

	((void(*)(void))(intptr_t)v10043)();

	i8 v10044 = *(i8*)(intptr_t)(ws+3440);
	i8 v10045 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10045 = v10044;

	i8 v10046 = (i8)(intptr_t)(ws+3384);
	i8 v10047 = *(i8*)(intptr_t)v10046;
	i8 v10048 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10048 = v10047;

}
	void f205_EmitterEmitSubroutineFlags(void);
	void f157_MidStartsub(void);
	void f256_Generate(void);
	void f103_MidEndsub(void);
	void f256_Generate(void);
	void f266_ReportWorkspaces(void);
	void f301_yy_destructor(void);

// reduce_87 workspace at ws+3384 length ws+16
void f399_reduce_87(void) {

	i8 v10049 = (i8)(intptr_t)(ws+1544);
	i8 v10050 = *(i8*)(intptr_t)v10049;
	i8 v10051 = v10050+(+82);
	i1 v10052 = *(i1*)(intptr_t)v10051;
	i1 v10053 = v10052|(+2);
	i8 v10054 = (i8)(intptr_t)(ws+1544);
	i8 v10055 = *(i8*)(intptr_t)v10054;
	i8 v10056 = v10055+(+82);
	*(i1*)(intptr_t)v10056 = v10053;

	i8 v10057 = (i8)(intptr_t)(ws+1544);
	i8 v10058 = *(i8*)(intptr_t)v10057;
	*(i8*)(intptr_t)(ws+3408) = v10058;
	i8 v10059 = (i8)(intptr_t)(f205_EmitterEmitSubroutineFlags);

	((void(*)(void))(intptr_t)v10059)();

	i8 v10060 = (i8)(intptr_t)(ws+1544);
	i8 v10061 = *(i8*)(intptr_t)v10060;
	i8 v10062 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10062 = v10061;

	i8 v10063 = (i8)(intptr_t)(ws+40);
	i8 v10064 = *(i8*)(intptr_t)v10063;
	*(i8*)(intptr_t)(ws+3408) = v10064;
	i8 v10065 = (i8)(intptr_t)(f157_MidStartsub);

	((void(*)(void))(intptr_t)v10065)();

	i8 v10066 = *(i8*)(intptr_t)(ws+3416);
	i8 v10067 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10067 = v10066;

	i8 v10068 = (i8)(intptr_t)(ws+3384);
	i8 v10069 = *(i8*)(intptr_t)v10068;
	*(i8*)(intptr_t)(ws+3488) = v10069;
	i8 v10070 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10070)();

	i8 v10071 = (i8)(intptr_t)(ws+40);
	i8 v10072 = *(i8*)(intptr_t)v10071;
	*(i8*)(intptr_t)(ws+3408) = v10072;
	i8 v10073 = (i8)(intptr_t)(f103_MidEndsub);

	((void(*)(void))(intptr_t)v10073)();

	i8 v10074 = *(i8*)(intptr_t)(ws+3416);
	i8 v10075 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10075 = v10074;

	i8 v10076 = (i8)(intptr_t)(ws+3392);
	i8 v10077 = *(i8*)(intptr_t)v10076;
	*(i8*)(intptr_t)(ws+3488) = v10077;
	i8 v10078 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10078)();

	i8 v10079 = (i8)(intptr_t)(ws+40);
	i8 v10080 = *(i8*)(intptr_t)v10079;
	*(i8*)(intptr_t)(ws+3408) = v10080;
	i8 v10081 = (i8)(intptr_t)(f266_ReportWorkspaces);

	((void(*)(void))(intptr_t)v10081)();

	i8 v10082 = (i8)(intptr_t)(ws+40);
	i8 v10083 = *(i8*)(intptr_t)v10082;
	i8 v10084 = v10083+(+8);
	i8 v10085 = *(i8*)(intptr_t)v10084;
	i8 v10086 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10086 = v10085;

	i1 v10087 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10087;
	i8 v10088 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10088;
	i8 v10089 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10089)();

}
const i1 c01_s0186[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f75_SimpleError(void);

// not_an_interface workspace at ws+3408 length ws+0
void f401_not_an_interface(void) {

	i8 v10090 = (i8)(intptr_t)c01_s0186;
	*(i8*)(intptr_t)(ws+3648) = v10090;
	i8 v10091 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10091)();

}
	void f226_IsSubroutine(void);
	void f401_not_an_interface(void);
	void f401_not_an_interface(void);
	void f200_EmitterReferenceSubroutine(void);
	void f200_EmitterReferenceSubroutine(void);
	void f264_CopyParameterList(void);
	void f99_GetOutputParameter(void);
	void f264_CopyParameterList(void);
	void f203_EmitterEmitInputParameters(void);
	void f204_EmitterEmitOutputParameters(void);
	void f205_EmitterEmitSubroutineFlags(void);
	void f301_yy_destructor(void);

// reduce_88 workspace at ws+3384 length ws+24
void f400_reduce_88(void) {


	i8 v10092 = (i8)(intptr_t)(ws+3304);
	i8 v10093 = *(i8*)(intptr_t)v10092;
	*(i8*)(intptr_t)(ws+3560) = v10093;
	i8 v10094 = (i8)(intptr_t)(f226_IsSubroutine);

	((void(*)(void))(intptr_t)v10094)();

	i1 v10095 = *(i1*)(intptr_t)(ws+3568);
	i8 v10096 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10096 = v10095;

	i8 v10097 = (i8)(intptr_t)(ws+3384);
	i1 v10098 = *(i1*)(intptr_t)v10097;
	i1 v10099 = (i1)+0;
	if (v10098==v10099) goto c01_06e7; else goto c01_06e8;

c01_06e7:;

	i8 v10100 = (i8)(intptr_t)(f401_not_an_interface);

	((void(*)(void))(intptr_t)v10100)();

c01_06e8:;

c01_06e4:;

	i8 v10101 = (i8)(intptr_t)(ws+3304);
	i8 v10102 = *(i8*)(intptr_t)v10101;
	i8 v10103 = *(i8*)(intptr_t)v10102;
	i8 v10104 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10104 = v10103;

	i8 v10105 = (i8)(intptr_t)(ws+3392);
	i8 v10106 = *(i8*)(intptr_t)v10105;
	i8 v10107 = v10106+(+82);
	i1 v10108 = *(i1*)(intptr_t)v10107;
	i1 v10109 = v10108&(+2);
	i1 v10110 = (i1)+0;
	if (v10109==v10110) goto c01_06ec; else goto c01_06ed;

c01_06ec:;

	i8 v10111 = (i8)(intptr_t)(f401_not_an_interface);

	((void(*)(void))(intptr_t)v10111)();

c01_06ed:;

c01_06e9:;

	i8 v10112 = (i8)(intptr_t)(ws+1544);
	i8 v10113 = *(i8*)(intptr_t)v10112;
	i8 v10114 = v10113+(+82);
	i1 v10115 = *(i1*)(intptr_t)v10114;
	i1 v10116 = v10115|(+4);
	i8 v10117 = (i8)(intptr_t)(ws+1544);
	i8 v10118 = *(i8*)(intptr_t)v10117;
	i8 v10119 = v10118+(+82);
	*(i1*)(intptr_t)v10119 = v10116;

	i8 v10120 = (i8)(intptr_t)(ws+3392);
	i8 v10121 = *(i8*)(intptr_t)v10120;
	i8 v10122 = (i8)(intptr_t)(ws+1544);
	i8 v10123 = *(i8*)(intptr_t)v10122;
	i8 v10124 = v10123+(+48);
	*(i8*)(intptr_t)v10124 = v10121;

	i8 v10125 = (i8)(intptr_t)(ws+3304);
	i8 v10126 = *(i8*)(intptr_t)v10125;
	i8 v10127 = (i8)(intptr_t)(ws+1544);
	i8 v10128 = *(i8*)(intptr_t)v10127;
	i8 v10129 = v10128+(+40);
	*(i8*)(intptr_t)v10129 = v10126;

	i8 v10130 = (i8)(intptr_t)(ws+40);
	i8 v10131 = *(i8*)(intptr_t)v10130;
	*(i8*)(intptr_t)(ws+3496) = v10131;
	i8 v10132 = (i8)(intptr_t)(ws+3392);
	i8 v10133 = *(i8*)(intptr_t)v10132;
	*(i8*)(intptr_t)(ws+3504) = v10133;
	i8 v10134 = (i8)(intptr_t)(f200_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v10134)();

	i8 v10135 = (i8)(intptr_t)(ws+3392);
	i8 v10136 = *(i8*)(intptr_t)v10135;
	*(i8*)(intptr_t)(ws+3496) = v10136;
	i8 v10137 = (i8)(intptr_t)(ws+1544);
	i8 v10138 = *(i8*)(intptr_t)v10137;
	*(i8*)(intptr_t)(ws+3504) = v10138;
	i8 v10139 = (i8)(intptr_t)(f200_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v10139)();

	i8 v10140 = (i8)(intptr_t)(ws+3392);
	i8 v10141 = *(i8*)(intptr_t)v10140;
	i8 v10142 = v10141+(+80);
	i1 v10143 = *(i1*)(intptr_t)v10142;
	i8 v10144 = (i8)(intptr_t)(ws+1544);
	i8 v10145 = *(i8*)(intptr_t)v10144;
	i8 v10146 = v10145+(+80);
	*(i1*)(intptr_t)v10146 = v10143;

	i8 v10147 = (i8)(intptr_t)(ws+1544);
	i8 v10148 = *(i8*)(intptr_t)v10147;
	i8 v10149 = v10148+(+80);
	i1 v10150 = *(i1*)(intptr_t)v10149;
	i1 v10151 = (i1)+0;
	if (v10150==v10151) goto c01_06f2; else goto c01_06f1;

c01_06f1:;

	i8 v10152 = (i8)(intptr_t)(ws+3392);
	i8 v10153 = *(i8*)(intptr_t)v10152;
	i8 v10154 = v10153+(+16);
	i8 v10155 = *(i8*)(intptr_t)v10154;
	*(i8*)(intptr_t)(ws+3408) = v10155;
	i8 v10156 = (i8)(intptr_t)(ws+1544);
	i8 v10157 = *(i8*)(intptr_t)v10156;
	*(i8*)(intptr_t)(ws+3416) = v10157;
	i8 v10158 = (i8)(intptr_t)(f264_CopyParameterList);

	((void(*)(void))(intptr_t)v10158)();

c01_06f2:;

c01_06ee:;

	i8 v10159 = (i8)(intptr_t)(ws+3392);
	i8 v10160 = *(i8*)(intptr_t)v10159;
	i8 v10161 = v10160+(+81);
	i1 v10162 = *(i1*)(intptr_t)v10161;
	i8 v10163 = (i8)(intptr_t)(ws+1544);
	i8 v10164 = *(i8*)(intptr_t)v10163;
	i8 v10165 = v10164+(+81);
	*(i1*)(intptr_t)v10165 = v10162;

	i8 v10166 = (i8)(intptr_t)(ws+1544);
	i8 v10167 = *(i8*)(intptr_t)v10166;
	i8 v10168 = v10167+(+81);
	i1 v10169 = *(i1*)(intptr_t)v10168;
	i1 v10170 = (i1)+0;
	if (v10169==v10170) goto c01_06f7; else goto c01_06f6;

c01_06f6:;

	i8 v10171 = (i8)(intptr_t)(ws+3392);
	i8 v10172 = *(i8*)(intptr_t)v10171;
	*(i8*)(intptr_t)(ws+3488) = v10172;
	i1 v10173 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v10173;
	i8 v10174 = (i8)(intptr_t)(f99_GetOutputParameter);

	((void(*)(void))(intptr_t)v10174)();

	i8 v10175 = *(i8*)(intptr_t)(ws+3504);
	i8 v10176 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10176 = v10175;

	i8 v10177 = (i8)(intptr_t)(ws+3400);
	i8 v10178 = *(i8*)(intptr_t)v10177;
	*(i8*)(intptr_t)(ws+3408) = v10178;
	i8 v10179 = (i8)(intptr_t)(ws+1544);
	i8 v10180 = *(i8*)(intptr_t)v10179;
	*(i8*)(intptr_t)(ws+3416) = v10180;
	i8 v10181 = (i8)(intptr_t)(f264_CopyParameterList);

	((void(*)(void))(intptr_t)v10181)();

c01_06f7:;

c01_06f3:;

	i8 v10182 = (i8)(intptr_t)(ws+1544);
	i8 v10183 = *(i8*)(intptr_t)v10182;
	*(i8*)(intptr_t)(ws+3408) = v10183;
	i8 v10184 = (i8)(intptr_t)(f203_EmitterEmitInputParameters);

	((void(*)(void))(intptr_t)v10184)();

	i8 v10185 = (i8)(intptr_t)(ws+1544);
	i8 v10186 = *(i8*)(intptr_t)v10185;
	*(i8*)(intptr_t)(ws+3408) = v10186;
	i8 v10187 = (i8)(intptr_t)(f204_EmitterEmitOutputParameters);

	((void(*)(void))(intptr_t)v10187)();

	i8 v10188 = (i8)(intptr_t)(ws+1544);
	i8 v10189 = *(i8*)(intptr_t)v10188;
	*(i8*)(intptr_t)(ws+3408) = v10189;
	i8 v10190 = (i8)(intptr_t)(f205_EmitterEmitSubroutineFlags);

	((void(*)(void))(intptr_t)v10190)();

	i1 v10191 = (i1)+69;
	*(i1*)(intptr_t)(ws+3496) = v10191;
	i8 v10192 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10192;
	i8 v10193 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10193)();

}
	void f198_EmitterDeclareExternalSubroutine(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_89 workspace at ws+3384 length ws+0
void f402_reduce_89(void) {

	i8 v10194 = (i8)(intptr_t)(ws+1544);
	i8 v10195 = *(i8*)(intptr_t)v10194;
	i8 v10196 = v10195+(+56);
	i2 v10197 = *(i2*)(intptr_t)v10196;
	*(i2*)(intptr_t)(ws+3384) = v10197;
	i8 v10198 = (i8)(intptr_t)(ws+3312);
	i8 v10199 = *(i8*)(intptr_t)v10198;
	*(i8*)(intptr_t)(ws+3392) = v10199;
	i8 v10200 = (i8)(intptr_t)(f198_EmitterDeclareExternalSubroutine);

	((void(*)(void))(intptr_t)v10200)();

	i1 v10201 = (i1)+11;
	*(i1*)(intptr_t)(ws+3496) = v10201;
	i8 v10202 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v10202;
	i8 v10203 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10203)();

	i1 v10204 = (i1)+16;
	*(i1*)(intptr_t)(ws+3496) = v10204;
	i8 v10205 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10205;
	i8 v10206 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10206)();

	i1 v10207 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10207;
	i8 v10208 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10208;
	i8 v10209 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10209)();

}
	void f68_InternalAlloc(void);
	void f236_AllocSubrId(void);
	void f65_AllocNewType(void);
	void f197_EmitterDeclareSubroutine(void);

// reduce_90 workspace at ws+3384 length ws+32
void f403_reduce_90(void) {

	i8 v10210 = (i8)+83;
	*(i8*)(intptr_t)(ws+3640) = v10210;
	i8 v10211 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v10211)();

	i8 v10212 = *(i8*)(intptr_t)(ws+3648);
	i8 v10213 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10213 = v10212;

	i8 v10214 = (i8)(intptr_t)(ws+3384);
	i8 v10215 = *(i8*)(intptr_t)v10214;
	i8 v10216 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v10216 = v10215;

	i8 v10217 = (i8)(intptr_t)(ws+40);
	i8 v10218 = *(i8*)(intptr_t)v10217;
	i8 v10219 = v10218+(+16);
	i8 v10220 = (i8)(intptr_t)(ws+1544);
	i8 v10221 = *(i8*)(intptr_t)v10220;
	i8 v10222 = v10221+(+32);
	*(i8*)(intptr_t)v10222 = v10219;

	i8 v10223 = (i8)(intptr_t)(ws+40);
	i8 v10224 = *(i8*)(intptr_t)v10223;
	i8 v10225 = (i8)(intptr_t)(ws+1544);
	i8 v10226 = *(i8*)(intptr_t)v10225;
	i8 v10227 = v10226+(+8);
	*(i8*)(intptr_t)v10227 = v10224;

	i8 v10228 = (i8)(intptr_t)(f236_AllocSubrId);

	((void(*)(void))(intptr_t)v10228)();

	i2 v10229 = *(i2*)(intptr_t)(ws+3416);
	i8 v10230 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v10230 = v10229;

	i8 v10231 = (i8)(intptr_t)(ws+3392);
	i2 v10232 = *(i2*)(intptr_t)v10231;
	i8 v10233 = (i8)(intptr_t)(ws+1544);
	i8 v10234 = *(i8*)(intptr_t)v10233;
	i8 v10235 = v10234+(+56);
	*(i2*)(intptr_t)v10235 = v10232;

	i8 v10236 = (i8)(intptr_t)(f65_AllocNewType);

	((void(*)(void))(intptr_t)v10236)();

	i8 v10237 = *(i8*)(intptr_t)(ws+3528);
	i8 v10238 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10238 = v10237;

	i8 v10239 = (i8)(intptr_t)(ws+3400);
	i8 v10240 = *(i8*)(intptr_t)v10239;
	i8 v10241 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10241 = v10240;

	i1 v10242 = (i1)+6;
	i8 v10243 = (i8)(intptr_t)(ws+3408);
	i8 v10244 = *(i8*)(intptr_t)v10243;
	i8 v10245 = v10244+(+52);
	*(i1*)(intptr_t)v10245 = v10242;

	i8 v10246 = (i8)(intptr_t)(ws+1528);
	i8 v10247 = *(i8*)(intptr_t)v10246;
	i8 v10248 = v10247+(+48);
	i2 v10249 = *(i2*)(intptr_t)v10248;
	i8 v10250 = (i8)(intptr_t)(ws+3408);
	i8 v10251 = *(i8*)(intptr_t)v10250;
	i8 v10252 = v10251+(+48);
	*(i2*)(intptr_t)v10252 = v10249;

	i8 v10253 = (i8)(intptr_t)(ws+1528);
	i8 v10254 = *(i8*)(intptr_t)v10253;
	i8 v10255 = v10254+(+53);
	i1 v10256 = *(i1*)(intptr_t)v10255;
	i8 v10257 = (i8)(intptr_t)(ws+3408);
	i8 v10258 = *(i8*)(intptr_t)v10257;
	i8 v10259 = v10258+(+53);
	*(i1*)(intptr_t)v10259 = v10256;

	i8 v10260 = (i8)(intptr_t)(ws+1528);
	i8 v10261 = *(i8*)(intptr_t)v10260;
	i8 v10262 = v10261+(+50);
	i2 v10263 = *(i2*)(intptr_t)v10262;
	i8 v10264 = (i8)(intptr_t)(ws+3408);
	i8 v10265 = *(i8*)(intptr_t)v10264;
	i8 v10266 = v10265+(+50);
	*(i2*)(intptr_t)v10266 = v10263;

	i8 v10267 = (i8)(intptr_t)(ws+1544);
	i8 v10268 = *(i8*)(intptr_t)v10267;
	i8 v10269 = (i8)(intptr_t)(ws+3408);
	i8 v10270 = *(i8*)(intptr_t)v10269;
	*(i8*)(intptr_t)v10270 = v10268;

	i8 v10271 = (i8)(intptr_t)(ws+3408);
	i8 v10272 = *(i8*)(intptr_t)v10271;
	i8 v10273 = (i8)(intptr_t)(ws+1544);
	i8 v10274 = *(i8*)(intptr_t)v10273;
	i8 v10275 = v10274+(+40);
	*(i8*)(intptr_t)v10275 = v10272;

	i8 v10276 = (i8)(intptr_t)(ws+1544);
	i8 v10277 = *(i8*)(intptr_t)v10276;
	i8 v10278 = (i8)(intptr_t)(ws+1544);
	i8 v10279 = *(i8*)(intptr_t)v10278;
	i8 v10280 = v10279+(+48);
	*(i8*)(intptr_t)v10280 = v10277;

	i1 v10281 = (i1)+30;
	i8 v10282 = (i8)(intptr_t)(ws+3304);
	i8 v10283 = *(i8*)(intptr_t)v10282;
	i8 v10284 = v10283+(+32);
	*(i1*)(intptr_t)v10284 = v10281;

	i8 v10285 = (i8)(intptr_t)(ws+3408);
	i8 v10286 = *(i8*)(intptr_t)v10285;
	i8 v10287 = (i8)(intptr_t)(ws+3304);
	i8 v10288 = *(i8*)(intptr_t)v10287;
	*(i8*)(intptr_t)v10288 = v10286;

	i8 v10289 = (i8)(intptr_t)(ws+3304);
	i8 v10290 = *(i8*)(intptr_t)v10289;
	i8 v10291 = (i8)(intptr_t)(ws+3408);
	i8 v10292 = *(i8*)(intptr_t)v10291;
	i8 v10293 = v10292+(+32);
	*(i8*)(intptr_t)v10293 = v10290;

	i8 v10294 = (i8)(intptr_t)(ws+3304);
	i8 v10295 = *(i8*)(intptr_t)v10294;
	i8 v10296 = (i8)(intptr_t)(ws+1544);
	i8 v10297 = *(i8*)(intptr_t)v10296;
	*(i8*)(intptr_t)v10297 = v10295;

	i8 v10298 = (i8)(intptr_t)(ws+1544);
	i8 v10299 = *(i8*)(intptr_t)v10298;
	*(i8*)(intptr_t)(ws+3416) = v10299;
	i8 v10300 = (i8)(intptr_t)(f197_EmitterDeclareSubroutine);

	((void(*)(void))(intptr_t)v10300)();

	i8 v10301 = (i8)(intptr_t)(ws+3304);
	i8 v10302 = *(i8*)(intptr_t)v10301;
	i8 v10303 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10303 = v10302;

}
	void f226_IsSubroutine(void);
const i1 c01_s0187[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f75_SimpleError(void);
const i1 c01_s0188[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f75_SimpleError(void);
const i1 c01_s0189[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f75_SimpleError(void);
	void f301_yy_destructor(void);

// reduce_91 workspace at ws+3384 length ws+1
void f404_reduce_91(void) {

	i8 v10304 = (i8)(intptr_t)(ws+3304);
	i8 v10305 = *(i8*)(intptr_t)v10304;
	i8 v10306 = *(i8*)(intptr_t)v10305;
	*(i8*)(intptr_t)(ws+3560) = v10306;
	i8 v10307 = (i8)(intptr_t)(f226_IsSubroutine);

	((void(*)(void))(intptr_t)v10307)();

	i1 v10308 = *(i1*)(intptr_t)(ws+3568);
	i8 v10309 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10309 = v10308;

	i8 v10310 = (i8)(intptr_t)(ws+3304);
	i8 v10311 = *(i8*)(intptr_t)v10310;
	i8 v10312 = v10311+(+32);
	i1 v10313 = *(i1*)(intptr_t)v10312;
	i1 v10314 = (i1)+30;
	if (v10313==v10314) goto c01_06ff; else goto c01_06fd;

c01_06ff:;

	i8 v10315 = (i8)(intptr_t)(ws+3384);
	i1 v10316 = *(i1*)(intptr_t)v10315;
	i1 v10317 = (i1)+0;
	if (v10316==v10317) goto c01_06fd; else goto c01_06fe;

c01_06fd:;

	i8 v10318 = (i8)(intptr_t)c01_s0187;
	*(i8*)(intptr_t)(ws+3648) = v10318;
	i8 v10319 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10319)();

c01_06fe:;

c01_06f8:;

	i8 v10320 = (i8)(intptr_t)(ws+3304);
	i8 v10321 = *(i8*)(intptr_t)v10320;
	i8 v10322 = *(i8*)(intptr_t)v10321;
	i8 v10323 = *(i8*)(intptr_t)v10322;
	i8 v10324 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v10324 = v10323;

	i8 v10325 = (i8)(intptr_t)(ws+1544);
	i8 v10326 = *(i8*)(intptr_t)v10325;
	i8 v10327 = v10326+(+82);
	i1 v10328 = *(i1*)(intptr_t)v10327;
	i1 v10329 = v10328&(+1);
	i1 v10330 = (i1)+0;
	if (v10329==v10330) goto c01_0704; else goto c01_0703;

c01_0703:;

	i8 v10331 = (i8)(intptr_t)c01_s0188;
	*(i8*)(intptr_t)(ws+3648) = v10331;
	i8 v10332 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10332)();

c01_0704:;

c01_0700:;

	i8 v10333 = (i8)(intptr_t)(ws+1544);
	i8 v10334 = *(i8*)(intptr_t)v10333;
	i8 v10335 = v10334+(+8);
	i8 v10336 = *(i8*)(intptr_t)v10335;
	i8 v10337 = (i8)(intptr_t)(ws+40);
	i8 v10338 = *(i8*)(intptr_t)v10337;
	if (v10336==v10338) goto c01_0709; else goto c01_0708;

c01_0708:;

	i8 v10339 = (i8)(intptr_t)c01_s0189;
	*(i8*)(intptr_t)(ws+3648) = v10339;
	i8 v10340 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10340)();

c01_0709:;

c01_0705:;

	i1 v10341 = (i1)+25;
	*(i1*)(intptr_t)(ws+3496) = v10341;
	i8 v10342 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10342;
	i8 v10343 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10343)();

}
	void f68_InternalAlloc(void);
	void f157_MidStartsub(void);
	void f256_Generate(void);

// reduce_92 workspace at ws+3384 length ws+24
void f405_reduce_92(void) {

	i8 v10344 = (i8)+16;
	*(i8*)(intptr_t)(ws+3640) = v10344;
	i8 v10345 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v10345)();

	i8 v10346 = *(i8*)(intptr_t)(ws+3648);
	i8 v10347 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10347 = v10346;

	i8 v10348 = (i8)(intptr_t)(ws+3384);
	i8 v10349 = *(i8*)(intptr_t)v10348;
	i8 v10350 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10350 = v10349;

	i8 v10351 = (i8)(intptr_t)(ws+88);
	i8 v10352 = *(i8*)(intptr_t)v10351;
	i8 v10353 = (i8)(intptr_t)(ws+3392);
	i8 v10354 = *(i8*)(intptr_t)v10353;
	i8 v10355 = v10354+(+8);
	*(i8*)(intptr_t)v10355 = v10352;

	i8 v10356 = (i8)(intptr_t)(ws+52);
	i2 v10357 = *(i2*)(intptr_t)v10356;
	i8 v10358 = (i8)(intptr_t)(ws+3392);
	i8 v10359 = *(i8*)(intptr_t)v10358;
	*(i2*)(intptr_t)v10359 = v10357;

	i2 v10360 = (i2)+0;
	i8 v10361 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10361 = v10360;

	i8 v10362 = (i8)(intptr_t)(ws+54);
	i2 v10363 = *(i2*)(intptr_t)v10362;
	i8 v10364 = (i8)(intptr_t)(ws+3392);
	i8 v10365 = *(i8*)(intptr_t)v10364;
	i8 v10366 = v10365+(+2);
	*(i2*)(intptr_t)v10366 = v10363;

	i2 v10367 = (i2)+0;
	i8 v10368 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10368 = v10367;

	i8 v10369 = (i8)(intptr_t)(ws+3392);
	i8 v10370 = *(i8*)(intptr_t)v10369;
	i8 v10371 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v10371 = v10370;

	i8 v10372 = (i8)(intptr_t)(ws+1544);
	i8 v10373 = *(i8*)(intptr_t)v10372;
	i8 v10374 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10374 = v10373;

	i8 v10375 = (i8)(intptr_t)(ws+40);
	i8 v10376 = *(i8*)(intptr_t)v10375;
	*(i8*)(intptr_t)(ws+3408) = v10376;
	i8 v10377 = (i8)(intptr_t)(f157_MidStartsub);

	((void(*)(void))(intptr_t)v10377)();

	i8 v10378 = *(i8*)(intptr_t)(ws+3416);
	i8 v10379 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10379 = v10378;

	i8 v10380 = (i8)(intptr_t)(ws+3400);
	i8 v10381 = *(i8*)(intptr_t)v10380;
	*(i8*)(intptr_t)(ws+3488) = v10381;
	i8 v10382 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10382)();

	i8 v10383 = (i8)(intptr_t)(ws+40);
	i8 v10384 = *(i8*)(intptr_t)v10383;
	i8 v10385 = v10384+(+82);
	i1 v10386 = *(i1*)(intptr_t)v10385;
	i1 v10387 = v10386|(+1);
	i8 v10388 = (i8)(intptr_t)(ws+40);
	i8 v10389 = *(i8*)(intptr_t)v10388;
	i8 v10390 = v10389+(+82);
	*(i1*)(intptr_t)v10390 = v10387;

}
	void f103_MidEndsub(void);
	void f256_Generate(void);
	void f266_ReportWorkspaces(void);
	void f33_Free(void);
	void f262_DestructSubroutineContents(void);
	void f301_yy_destructor(void);

// reduce_93 workspace at ws+3384 length ws+24
void f406_reduce_93(void) {

	i8 v10391 = (i8)(intptr_t)(ws+40);
	i8 v10392 = *(i8*)(intptr_t)v10391;
	*(i8*)(intptr_t)(ws+3408) = v10392;
	i8 v10393 = (i8)(intptr_t)(f103_MidEndsub);

	((void(*)(void))(intptr_t)v10393)();

	i8 v10394 = *(i8*)(intptr_t)(ws+3416);
	i8 v10395 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10395 = v10394;

	i8 v10396 = (i8)(intptr_t)(ws+3384);
	i8 v10397 = *(i8*)(intptr_t)v10396;
	*(i8*)(intptr_t)(ws+3488) = v10397;
	i8 v10398 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10398)();

	i8 v10399 = (i8)(intptr_t)(ws+40);
	i8 v10400 = *(i8*)(intptr_t)v10399;
	*(i8*)(intptr_t)(ws+3408) = v10400;
	i8 v10401 = (i8)(intptr_t)(f266_ReportWorkspaces);

	((void(*)(void))(intptr_t)v10401)();

	i8 v10402 = (i8)(intptr_t)(ws+88);
	i8 v10403 = *(i8*)(intptr_t)v10402;
	i2 v10404 = *(i2*)(intptr_t)v10403;
	i8 v10405 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10405 = v10404;

	i8 v10406 = (i8)(intptr_t)(ws+88);
	i8 v10407 = *(i8*)(intptr_t)v10406;
	i8 v10408 = v10407+(+2);
	i2 v10409 = *(i2*)(intptr_t)v10408;
	i8 v10410 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10410 = v10409;

	i8 v10411 = (i8)(intptr_t)(ws+88);
	i8 v10412 = *(i8*)(intptr_t)v10411;
	i8 v10413 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10413 = v10412;

	i8 v10414 = (i8)(intptr_t)(ws+3392);
	i8 v10415 = *(i8*)(intptr_t)v10414;
	i8 v10416 = v10415+(+8);
	i8 v10417 = *(i8*)(intptr_t)v10416;
	i8 v10418 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v10418 = v10417;

	i8 v10419 = (i8)(intptr_t)(ws+3392);
	i8 v10420 = *(i8*)(intptr_t)v10419;
	*(i8*)(intptr_t)(ws+3680) = v10420;
	i8 v10421 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v10421)();

	i8 v10422 = (i8)(intptr_t)(ws+40);
	i8 v10423 = *(i8*)(intptr_t)v10422;
	i8 v10424 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10424 = v10423;

	i8 v10425 = (i8)(intptr_t)(ws+3400);
	i8 v10426 = *(i8*)(intptr_t)v10425;
	i8 v10427 = v10426+(+8);
	i8 v10428 = *(i8*)(intptr_t)v10427;
	i8 v10429 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10429 = v10428;

	i8 v10430 = (i8)(intptr_t)(ws+3400);
	i8 v10431 = *(i8*)(intptr_t)v10430;
	*(i8*)(intptr_t)(ws+3408) = v10431;
	i8 v10432 = (i8)(intptr_t)(f262_DestructSubroutineContents);

	((void(*)(void))(intptr_t)v10432)();

	i1 v10433 = (i1)+25;
	*(i1*)(intptr_t)(ws+3496) = v10433;
	i8 v10434 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10434;
	i8 v10435 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10435)();

}
	void f203_EmitterEmitInputParameters(void);
	void f204_EmitterEmitOutputParameters(void);

// reduce_94 workspace at ws+3384 length ws+0
void f407_reduce_94(void) {

	i1 v10436 = (i1)+0;
	i8 v10437 = (i8)(intptr_t)(ws+1544);
	i8 v10438 = *(i8*)(intptr_t)v10437;
	i8 v10439 = v10438+(+81);
	*(i1*)(intptr_t)v10439 = v10436;

	i8 v10440 = (i8)(intptr_t)(ws+1544);
	i8 v10441 = *(i8*)(intptr_t)v10440;
	*(i8*)(intptr_t)(ws+3408) = v10441;
	i8 v10442 = (i8)(intptr_t)(f203_EmitterEmitInputParameters);

	((void(*)(void))(intptr_t)v10442)();

	i8 v10443 = (i8)(intptr_t)(ws+1544);
	i8 v10444 = *(i8*)(intptr_t)v10443;
	*(i8*)(intptr_t)(ws+3408) = v10444;
	i8 v10445 = (i8)(intptr_t)(f204_EmitterEmitOutputParameters);

	((void(*)(void))(intptr_t)v10445)();

}
	void f97_CountParameters(void);
	void f203_EmitterEmitInputParameters(void);
	void f204_EmitterEmitOutputParameters(void);
	void f301_yy_destructor(void);

// reduce_95 workspace at ws+3384 length ws+1
void f408_reduce_95(void) {

	i8 v10446 = (i8)(intptr_t)(ws+3304);
	i8 v10447 = *(i8*)(intptr_t)v10446;
	*(i8*)(intptr_t)(ws+3392) = v10447;
	i8 v10448 = (i8)(intptr_t)(f97_CountParameters);

	((void(*)(void))(intptr_t)v10448)();

	i1 v10449 = *(i1*)(intptr_t)(ws+3400);
	i8 v10450 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10450 = v10449;

	i8 v10451 = (i8)(intptr_t)(ws+3384);
	i1 v10452 = *(i1*)(intptr_t)v10451;
	i8 v10453 = (i8)(intptr_t)(ws+1544);
	i8 v10454 = *(i8*)(intptr_t)v10453;
	i8 v10455 = v10454+(+81);
	*(i1*)(intptr_t)v10455 = v10452;

	i8 v10456 = (i8)(intptr_t)(ws+1544);
	i8 v10457 = *(i8*)(intptr_t)v10456;
	*(i8*)(intptr_t)(ws+3408) = v10457;
	i8 v10458 = (i8)(intptr_t)(f203_EmitterEmitInputParameters);

	((void(*)(void))(intptr_t)v10458)();

	i8 v10459 = (i8)(intptr_t)(ws+1544);
	i8 v10460 = *(i8*)(intptr_t)v10459;
	*(i8*)(intptr_t)(ws+3408) = v10460;
	i8 v10461 = (i8)(intptr_t)(f204_EmitterEmitOutputParameters);

	((void(*)(void))(intptr_t)v10461)();

	i1 v10462 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10462;
	i8 v10463 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10463;
	i8 v10464 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10464)();

}
	void f97_CountParameters(void);

// reduce_96 workspace at ws+3384 length ws+1
void f409_reduce_96(void) {

	i8 v10465 = (i8)(intptr_t)(ws+3304);
	i8 v10466 = *(i8*)(intptr_t)v10465;
	*(i8*)(intptr_t)(ws+3392) = v10466;
	i8 v10467 = (i8)(intptr_t)(f97_CountParameters);

	((void(*)(void))(intptr_t)v10467)();

	i1 v10468 = *(i1*)(intptr_t)(ws+3400);
	i8 v10469 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10469 = v10468;

	i8 v10470 = (i8)(intptr_t)(ws+3384);
	i1 v10471 = *(i1*)(intptr_t)v10470;
	i8 v10472 = (i8)(intptr_t)(ws+1544);
	i8 v10473 = *(i8*)(intptr_t)v10472;
	i8 v10474 = v10473+(+80);
	*(i1*)(intptr_t)v10474 = v10471;

}
	void f301_yy_destructor(void);

// reduce_97 workspace at ws+3384 length ws+0
void f410_reduce_97(void) {

	i8 v10475 = (i8)+0;
	i8 v10476 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10476 = v10475;

	i1 v10477 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10477;
	i8 v10478 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10478;
	i8 v10479 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10479)();

}
	void f301_yy_destructor(void);

// reduce_98 workspace at ws+3384 length ws+0
void f411_reduce_98(void) {

	i8 v10480 = (i8)(intptr_t)(ws+3312);
	i8 v10481 = *(i8*)(intptr_t)v10480;
	i8 v10482 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10482 = v10481;

	i1 v10483 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10483;
	i8 v10484 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10484;
	i8 v10485 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10485)();

}

// reduce_99 workspace at ws+3384 length ws+0
void f412_reduce_99(void) {

	i8 v10486 = (i8)(intptr_t)(ws+3304);
	i8 v10487 = *(i8*)(intptr_t)v10486;
	i8 v10488 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10488 = v10487;

}
	void f301_yy_destructor(void);

// reduce_100 workspace at ws+3384 length ws+0
void f413_reduce_100(void) {

	i8 v10489 = (i8)(intptr_t)(ws+3304);
	i8 v10490 = *(i8*)(intptr_t)v10489;
	i8 v10491 = (i8)(intptr_t)(ws+3320);
	i8 v10492 = *(i8*)(intptr_t)v10491;
	i8 v10493 = *(i8*)(intptr_t)v10492;
	i8 v10494 = v10493+(+16);
	*(i8*)(intptr_t)v10494 = v10490;

	i8 v10495 = (i8)(intptr_t)(ws+3320);
	i8 v10496 = *(i8*)(intptr_t)v10495;
	i8 v10497 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10497 = v10496;

	i1 v10498 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v10498;
	i8 v10499 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10499;
	i8 v10500 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10500)();

}
	void f218_AddSymbol(void);
	void f259_InitVariable(void);
	void f301_yy_destructor(void);

// reduce_101 workspace at ws+3384 length ws+8
void f414_reduce_101(void) {

	i8 v10501 = (i8)(intptr_t)(ws+1544);
	i8 v10502 = *(i8*)(intptr_t)v10501;
	i8 v10503 = v10502+(+16);
	*(i8*)(intptr_t)(ws+3488) = v10503;
	i8 v10504 = (i8)(intptr_t)(ws+3320);
	i8 v10505 = *(i8*)(intptr_t)v10504;
	*(i8*)(intptr_t)(ws+3496) = v10505;
	i8 v10506 = (i8)(intptr_t)(f218_AddSymbol);

	((void(*)(void))(intptr_t)v10506)();

	i8 v10507 = *(i8*)(intptr_t)(ws+3504);
	i8 v10508 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10508 = v10507;

	i8 v10509 = (i8)(intptr_t)(ws+3384);
	i8 v10510 = *(i8*)(intptr_t)v10509;
	i8 v10511 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10511 = v10510;

	i8 v10512 = (i8)(intptr_t)(ws+1544);
	i8 v10513 = *(i8*)(intptr_t)v10512;
	*(i8*)(intptr_t)(ws+3488) = v10513;
	i8 v10514 = (i8)(intptr_t)(ws+3296);
	i8 v10515 = *(i8*)(intptr_t)v10514;
	*(i8*)(intptr_t)(ws+3496) = v10515;
	i8 v10516 = (i8)(intptr_t)(ws+3304);
	i8 v10517 = *(i8*)(intptr_t)v10516;
	*(i8*)(intptr_t)(ws+3504) = v10517;
	i8 v10518 = (i8)(intptr_t)(f259_InitVariable);

	((void(*)(void))(intptr_t)v10518)();

	i1 v10519 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10519;
	i8 v10520 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10520;
	i8 v10521 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10521)();

}
	void f238_ArchAlignUp(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_102 workspace at ws+3384 length ws+2
void f415_reduce_102(void) {

	i8 v10522 = (i8)(intptr_t)(ws+72);
	i8 v10523 = *(i8*)(intptr_t)v10522;
	i8 v10524 = v10523+(+48);
	i2 v10525 = *(i2*)(intptr_t)v10524;
	*(i2*)(intptr_t)(ws+3544) = v10525;
	i8 v10526 = (i8)(intptr_t)(ws+72);
	i8 v10527 = *(i8*)(intptr_t)v10526;
	i8 v10528 = v10527+(+53);
	i1 v10529 = *(i1*)(intptr_t)v10528;
	*(i1*)(intptr_t)(ws+3546) = v10529;
	i8 v10530 = (i8)(intptr_t)(f238_ArchAlignUp);

	((void(*)(void))(intptr_t)v10530)();

	i2 v10531 = *(i2*)(intptr_t)(ws+3548);
	i8 v10532 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v10532 = v10531;

	i8 v10533 = (i8)(intptr_t)(ws+3384);
	i2 v10534 = *(i2*)(intptr_t)v10533;
	i8 v10535 = (i8)(intptr_t)(ws+72);
	i8 v10536 = *(i8*)(intptr_t)v10535;
	i8 v10537 = v10536+(+50);
	*(i2*)(intptr_t)v10537 = v10534;

	i1 v10538 = (i1)+66;
	*(i1*)(intptr_t)(ws+3496) = v10538;
	i8 v10539 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v10539;
	i8 v10540 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10540)();

	i1 v10541 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v10541;
	i8 v10542 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10542;
	i8 v10543 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10543)();

	i1 v10544 = (i1)+20;
	*(i1*)(intptr_t)(ws+3496) = v10544;
	i8 v10545 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10545;
	i8 v10546 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10546)();

}
	void f294_SymbolRedeclarationError(void);
	void f65_AllocNewType(void);
	void f294_SymbolRedeclarationError(void);

// reduce_103 workspace at ws+3384 length ws+8
void f416_reduce_103(void) {

	i8 v10547 = (i8)(intptr_t)(ws+3304);
	i8 v10548 = *(i8*)(intptr_t)v10547;
	i8 v10549 = v10548+(+32);
	i1 v10550 = *(i1*)(intptr_t)v10549;

	if (v10550 != +30) goto c01_070b;

	i8 v10551 = (i8)(intptr_t)(ws+3304);
	i8 v10552 = *(i8*)(intptr_t)v10551;
	i8 v10553 = *(i8*)(intptr_t)v10552;
	i8 v10554 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10554 = v10553;

	i8 v10555 = (i8)(intptr_t)(ws+72);
	i8 v10556 = *(i8*)(intptr_t)v10555;
	i8 v10557 = v10556+(+52);
	i1 v10558 = *(i1*)(intptr_t)v10557;
	i1 v10559 = (i1)+1;
	if (v10558==v10559) goto c01_0710; else goto c01_070f;

c01_070f:;

	i8 v10560 = (i8)(intptr_t)(f294_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v10560)();

c01_0710:;

c01_070c:;

	goto c01_070a;

c01_070b:;

	if (v10550 != +0) goto c01_0711;

	i8 v10561 = (i8)(intptr_t)(f65_AllocNewType);

	((void(*)(void))(intptr_t)v10561)();

	i8 v10562 = *(i8*)(intptr_t)(ws+3528);
	i8 v10563 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10563 = v10562;

	i8 v10564 = (i8)(intptr_t)(ws+3384);
	i8 v10565 = *(i8*)(intptr_t)v10564;
	i8 v10566 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10566 = v10565;

	i1 v10567 = (i1)+30;
	i8 v10568 = (i8)(intptr_t)(ws+3304);
	i8 v10569 = *(i8*)(intptr_t)v10568;
	i8 v10570 = v10569+(+32);
	*(i1*)(intptr_t)v10570 = v10567;

	i8 v10571 = (i8)(intptr_t)(ws+72);
	i8 v10572 = *(i8*)(intptr_t)v10571;
	i8 v10573 = (i8)(intptr_t)(ws+3304);
	i8 v10574 = *(i8*)(intptr_t)v10573;
	*(i8*)(intptr_t)v10574 = v10572;

	i8 v10575 = (i8)(intptr_t)(ws+3304);
	i8 v10576 = *(i8*)(intptr_t)v10575;
	i8 v10577 = (i8)(intptr_t)(ws+72);
	i8 v10578 = *(i8*)(intptr_t)v10577;
	i8 v10579 = v10578+(+32);
	*(i8*)(intptr_t)v10579 = v10576;

	goto c01_070a;

c01_0711:;

	i8 v10580 = (i8)(intptr_t)(f294_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v10580)();

c01_070a:;


	i1 v10581 = (i1)+5;
	i8 v10582 = (i8)(intptr_t)(ws+72);
	i8 v10583 = *(i8*)(intptr_t)v10582;
	i8 v10584 = v10583+(+52);
	*(i1*)(intptr_t)v10584 = v10581;

}
	void f221_CheckNotPartialType(void);
	void f230_IsRecord(void);
	void f73_StartError(void);
	void f11_print(void);
const i1 c01_s018a[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(void);
	void f74_EndError(void);

// reduce_104 workspace at ws+3384 length ws+1
void f417_reduce_104(void) {

	i8 v10585 = (i8)(intptr_t)(ws+3304);
	i8 v10586 = *(i8*)(intptr_t)v10585;
	*(i8*)(intptr_t)(ws+3520) = v10586;
	i8 v10587 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v10587)();

	i8 v10588 = (i8)(intptr_t)(ws+3304);
	i8 v10589 = *(i8*)(intptr_t)v10588;
	*(i8*)(intptr_t)(ws+3488) = v10589;
	i8 v10590 = (i8)(intptr_t)(f230_IsRecord);

	((void(*)(void))(intptr_t)v10590)();

	i1 v10591 = *(i1*)(intptr_t)(ws+3496);
	i8 v10592 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10592 = v10591;

	i8 v10593 = (i8)(intptr_t)(ws+3384);
	i1 v10594 = *(i1*)(intptr_t)v10593;
	i1 v10595 = (i1)+0;
	if (v10594==v10595) goto c01_0715; else goto c01_0716;

c01_0715:;

	i8 v10596 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v10596)();

	i8 v10597 = (i8)(intptr_t)(ws+3304);
	i8 v10598 = *(i8*)(intptr_t)v10597;
	i8 v10599 = v10598+(+32);
	i8 v10600 = *(i8*)(intptr_t)v10599;
	i8 v10601 = v10600+(+8);
	i8 v10602 = *(i8*)(intptr_t)v10601;
	*(i8*)(intptr_t)(ws+3696) = v10602;
	i8 v10603 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v10603)();

	i8 v10604 = (i8)(intptr_t)c01_s018a;
	*(i8*)(intptr_t)(ws+3696) = v10604;
	i8 v10605 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v10605)();

	i8 v10606 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v10606)();

c01_0716:;

c01_0712:;

	i8 v10607 = (i8)(intptr_t)(ws+3304);
	i8 v10608 = *(i8*)(intptr_t)v10607;
	i8 v10609 = v10608+(+53);
	i1 v10610 = *(i1*)(intptr_t)v10609;
	i8 v10611 = (i8)(intptr_t)(ws+72);
	i8 v10612 = *(i8*)(intptr_t)v10611;
	i8 v10613 = v10612+(+53);
	*(i1*)(intptr_t)v10613 = v10610;

	i8 v10614 = (i8)(intptr_t)(ws+3304);
	i8 v10615 = *(i8*)(intptr_t)v10614;
	i8 v10616 = v10615+(+48);
	i2 v10617 = *(i2*)(intptr_t)v10616;
	i8 v10618 = (i8)(intptr_t)(ws+72);
	i8 v10619 = *(i8*)(intptr_t)v10618;
	i8 v10620 = v10619+(+48);
	*(i2*)(intptr_t)v10620 = v10617;

	i8 v10621 = (i8)(intptr_t)(ws+3304);
	i8 v10622 = *(i8*)(intptr_t)v10621;
	i8 v10623 = (i8)(intptr_t)(ws+72);
	i8 v10624 = *(i8*)(intptr_t)v10623;
	i8 v10625 = v10624+(+16);
	*(i8*)(intptr_t)v10625 = v10622;

}
	void f221_CheckNotPartialType(void);
	void f68_InternalAlloc(void);
	void f242_ArchInitMember(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_105 workspace at ws+3384 length ws+8
void f418_reduce_105(void) {

	i8 v10626 = (i8)(intptr_t)(ws+3312);
	i8 v10627 = *(i8*)(intptr_t)v10626;
	*(i8*)(intptr_t)(ws+3520) = v10627;
	i8 v10628 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v10628)();

	i8 v10629 = (i8)(intptr_t)(ws+72);
	i8 v10630 = *(i8*)(intptr_t)v10629;
	i8 v10631 = v10630+(+53);
	i1 v10632 = *(i1*)(intptr_t)v10631;
	i8 v10633 = (i8)(intptr_t)(ws+3312);
	i8 v10634 = *(i8*)(intptr_t)v10633;
	i8 v10635 = v10634+(+53);
	i1 v10636 = *(i1*)(intptr_t)v10635;
	if (v10632<v10636) goto c01_071a; else goto c01_071b;

c01_071a:;

	i8 v10637 = (i8)(intptr_t)(ws+3312);
	i8 v10638 = *(i8*)(intptr_t)v10637;
	i8 v10639 = v10638+(+53);
	i1 v10640 = *(i1*)(intptr_t)v10639;
	i8 v10641 = (i8)(intptr_t)(ws+72);
	i8 v10642 = *(i8*)(intptr_t)v10641;
	i8 v10643 = v10642+(+53);
	*(i1*)(intptr_t)v10643 = v10640;

c01_071b:;

c01_0717:;

	i1 v10644 = (i1)+28;
	i8 v10645 = (i8)(intptr_t)(ws+3336);
	i8 v10646 = *(i8*)(intptr_t)v10645;
	i8 v10647 = v10646+(+32);
	*(i1*)(intptr_t)v10647 = v10644;

	i8 v10648 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v10648;
	i8 v10649 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v10649)();

	i8 v10650 = *(i8*)(intptr_t)(ws+3648);
	i8 v10651 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10651 = v10650;

	i8 v10652 = (i8)(intptr_t)(ws+3384);
	i8 v10653 = *(i8*)(intptr_t)v10652;
	i8 v10654 = (i8)(intptr_t)(ws+3336);
	i8 v10655 = *(i8*)(intptr_t)v10654;
	*(i8*)(intptr_t)v10655 = v10653;

	i8 v10656 = (i8)(intptr_t)(ws+3312);
	i8 v10657 = *(i8*)(intptr_t)v10656;
	i8 v10658 = (i8)(intptr_t)(ws+3336);
	i8 v10659 = *(i8*)(intptr_t)v10658;
	i8 v10660 = *(i8*)(intptr_t)v10659;
	*(i8*)(intptr_t)v10660 = v10657;

	i8 v10661 = (i8)(intptr_t)(ws+72);
	i8 v10662 = *(i8*)(intptr_t)v10661;
	*(i8*)(intptr_t)(ws+3392) = v10662;
	i8 v10663 = (i8)(intptr_t)(ws+3336);
	i8 v10664 = *(i8*)(intptr_t)v10663;
	*(i8*)(intptr_t)(ws+3400) = v10664;
	i8 v10665 = (i8)(intptr_t)(ws+3328);
	i2 v10666 = *(i2*)(intptr_t)v10665;
	*(i2*)(intptr_t)(ws+3408) = v10666;
	i8 v10667 = (i8)(intptr_t)(f242_ArchInitMember);

	((void(*)(void))(intptr_t)v10667)();

	i1 v10668 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10668;
	i8 v10669 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10669;
	i8 v10670 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10670)();

	i1 v10671 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10671;
	i8 v10672 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10672;
	i8 v10673 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10673)();

}

// reduce_106 workspace at ws+3384 length ws+0
void f419_reduce_106(void) {

	i8 v10674 = (i8)(intptr_t)(ws+72);
	i8 v10675 = *(i8*)(intptr_t)v10674;
	i8 v10676 = v10675+(+48);
	i2 v10677 = *(i2*)(intptr_t)v10676;
	i8 v10678 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v10678 = v10677;

}
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_107 workspace at ws+3384 length ws+0
void f420_reduce_107(void) {

	i8 v10679 = (i8)(intptr_t)(ws+3312);
	i4 v10680 = *(i4*)(intptr_t)v10679;
	i2 v10681 = (s2)(s4)v10680;
	i8 v10682 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v10682 = v10681;

	i1 v10683 = (i1)+16;
	*(i1*)(intptr_t)(ws+3496) = v10683;
	i8 v10684 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10684;
	i8 v10685 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10685)();

	i1 v10686 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10686;
	i8 v10687 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10687;
	i8 v10688 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10688)();

}
	void f218_AddSymbol(void);

// reduce_108 workspace at ws+3384 length ws+8
void f421_reduce_108(void) {

	i8 v10689 = (i8)(intptr_t)(ws+72);
	i8 v10690 = *(i8*)(intptr_t)v10689;
	*(i8*)(intptr_t)(ws+3488) = v10690;
	i8 v10691 = (i8)(intptr_t)(ws+3304);
	i8 v10692 = *(i8*)(intptr_t)v10691;
	*(i8*)(intptr_t)(ws+3496) = v10692;
	i8 v10693 = (i8)(intptr_t)(f218_AddSymbol);

	((void(*)(void))(intptr_t)v10693)();

	i8 v10694 = *(i8*)(intptr_t)(ws+3504);
	i8 v10695 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10695 = v10694;

	i8 v10696 = (i8)(intptr_t)(ws+3384);
	i8 v10697 = *(i8*)(intptr_t)v10696;
	i8 v10698 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10698 = v10697;

	i8 v10699 = (i8)(intptr_t)(ws+72);
	i8 v10700 = *(i8*)(intptr_t)v10699;
	i8 v10701 = v10700+(+24);
	i1 v10702 = *(i1*)(intptr_t)v10701;
	i1 v10703 = v10702+(+1);
	i8 v10704 = (i8)(intptr_t)(ws+72);
	i8 v10705 = *(i8*)(intptr_t)v10704;
	i8 v10706 = v10705+(+24);
	*(i1*)(intptr_t)v10706 = v10703;

}
	void f296_CheckEndOfInitialiser(void);
	void f122_MidEndinit(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_109 workspace at ws+3384 length ws+8
void f422_reduce_109(void) {

	i8 v10707 = (i8)(intptr_t)(f296_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v10707)();

	i8 v10708 = (i8)(intptr_t)(f122_MidEndinit);

	((void(*)(void))(intptr_t)v10708)();

	i8 v10709 = *(i8*)(intptr_t)(ws+3392);
	i8 v10710 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10710 = v10709;

	i8 v10711 = (i8)(intptr_t)(ws+3384);
	i8 v10712 = *(i8*)(intptr_t)v10711;
	*(i8*)(intptr_t)(ws+3488) = v10712;
	i8 v10713 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10713)();

	i1 v10714 = (i1)+31;
	*(i1*)(intptr_t)(ws+3496) = v10714;
	i8 v10715 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v10715;
	i8 v10716 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10716)();

	i1 v10717 = (i1)+32;
	*(i1*)(intptr_t)(ws+3496) = v10717;
	i8 v10718 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10718;
	i8 v10719 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10719)();

	i1 v10720 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10720;
	i8 v10721 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10721;
	i8 v10722 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10722)();

}
	void f221_CheckNotPartialType(void);
	void f68_InternalAlloc(void);
	void f235_AllocLabel(void);
	void f225_IsArray(void);
	void f230_IsRecord(void);
const i1 c01_s018b[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f75_SimpleError(void);
	void f230_IsRecord(void);
const i1 c01_s018c[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f75_SimpleError(void);
	void f230_IsRecord(void);
	void f123_MidStartinit(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_110 workspace at ws+3384 length ws+24
void f423_reduce_110(void) {

	i8 v10723 = (i8)(intptr_t)(ws+3312);
	i8 v10724 = *(i8*)(intptr_t)v10723;
	*(i8*)(intptr_t)(ws+3520) = v10724;
	i8 v10725 = (i8)(intptr_t)(f221_CheckNotPartialType);

	((void(*)(void))(intptr_t)v10725)();

	i1 v10726 = (i1)+28;
	i8 v10727 = (i8)(intptr_t)(ws+3328);
	i8 v10728 = *(i8*)(intptr_t)v10727;
	i8 v10729 = v10728+(+32);
	*(i1*)(intptr_t)v10729 = v10726;

	i8 v10730 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v10730;
	i8 v10731 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v10731)();

	i8 v10732 = *(i8*)(intptr_t)(ws+3648);
	i8 v10733 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10733 = v10732;

	i8 v10734 = (i8)(intptr_t)(ws+3384);
	i8 v10735 = *(i8*)(intptr_t)v10734;
	i8 v10736 = (i8)(intptr_t)(ws+3328);
	i8 v10737 = *(i8*)(intptr_t)v10736;
	*(i8*)(intptr_t)v10737 = v10735;

	i8 v10738 = (i8)(intptr_t)(ws+3312);
	i8 v10739 = *(i8*)(intptr_t)v10738;
	i8 v10740 = (i8)(intptr_t)(ws+3328);
	i8 v10741 = *(i8*)(intptr_t)v10740;
	i8 v10742 = *(i8*)(intptr_t)v10741;
	*(i8*)(intptr_t)v10742 = v10739;

	i8 v10743 = (i8)(intptr_t)(ws+40);
	i8 v10744 = *(i8*)(intptr_t)v10743;
	i8 v10745 = (i8)(intptr_t)(ws+3328);
	i8 v10746 = *(i8*)(intptr_t)v10745;
	i8 v10747 = *(i8*)(intptr_t)v10746;
	i8 v10748 = v10747+(+8);
	*(i8*)(intptr_t)v10748 = v10744;

	i1 v10749 = (i1)+255;
	i8 v10750 = (i8)(intptr_t)(ws+3328);
	i8 v10751 = *(i8*)(intptr_t)v10750;
	i8 v10752 = *(i8*)(intptr_t)v10751;
	i8 v10753 = v10752+(+26);
	*(i1*)(intptr_t)v10753 = v10749;

	i8 v10754 = (i8)(intptr_t)(f235_AllocLabel);

	((void(*)(void))(intptr_t)v10754)();

	i2 v10755 = *(i2*)(intptr_t)(ws+3472);
	i8 v10756 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v10756 = v10755;

	i8 v10757 = (i8)(intptr_t)(ws+3392);
	i2 v10758 = *(i2*)(intptr_t)v10757;
	i8 v10759 = (i8)(intptr_t)(ws+3328);
	i8 v10760 = *(i8*)(intptr_t)v10759;
	i8 v10761 = *(i8*)(intptr_t)v10760;
	i8 v10762 = v10761+(+24);
	*(i2*)(intptr_t)v10762 = v10758;

	i8 v10763 = (i8)(intptr_t)(ws+3312);
	i8 v10764 = *(i8*)(intptr_t)v10763;
	*(i8*)(intptr_t)(ws+3496) = v10764;
	i8 v10765 = (i8)(intptr_t)(f225_IsArray);

	((void(*)(void))(intptr_t)v10765)();

	i1 v10766 = *(i1*)(intptr_t)(ws+3504);
	i8 v10767 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v10767 = v10766;

	i8 v10768 = (i8)(intptr_t)(ws+3312);
	i8 v10769 = *(i8*)(intptr_t)v10768;
	*(i8*)(intptr_t)(ws+3488) = v10769;
	i8 v10770 = (i8)(intptr_t)(f230_IsRecord);

	((void(*)(void))(intptr_t)v10770)();

	i1 v10771 = *(i1*)(intptr_t)(ws+3496);
	i8 v10772 = (i8)(intptr_t)(ws+3395);
	*(i1*)(intptr_t)v10772 = v10771;

	i8 v10773 = (i8)(intptr_t)(ws+3394);
	i1 v10774 = *(i1*)(intptr_t)v10773;
	i1 v10775 = (i1)+0;
	if (v10774==v10775) goto c01_0723; else goto c01_0722;

c01_0723:;

	i8 v10776 = (i8)(intptr_t)(ws+3395);
	i1 v10777 = *(i1*)(intptr_t)v10776;
	i1 v10778 = (i1)+0;
	if (v10777==v10778) goto c01_0721; else goto c01_0722;

c01_0721:;

	i8 v10779 = (i8)(intptr_t)c01_s018b;
	*(i8*)(intptr_t)(ws+3648) = v10779;
	i8 v10780 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10780)();

c01_0722:;

c01_071c:;

	i8 v10781 = (i8)(intptr_t)(ws+3312);
	i8 v10782 = *(i8*)(intptr_t)v10781;
	*(i8*)(intptr_t)(ws+3488) = v10782;
	i8 v10783 = (i8)(intptr_t)(f230_IsRecord);

	((void(*)(void))(intptr_t)v10783)();

	i1 v10784 = *(i1*)(intptr_t)(ws+3496);
	i8 v10785 = (i8)(intptr_t)(ws+3396);
	*(i1*)(intptr_t)v10785 = v10784;

	i8 v10786 = (i8)(intptr_t)(ws+3396);
	i1 v10787 = *(i1*)(intptr_t)v10786;
	i1 v10788 = (i1)+0;
	if (v10787==v10788) goto c01_072a; else goto c01_072b;

c01_072b:;

	i8 v10789 = (i8)(intptr_t)(ws+3312);
	i8 v10790 = *(i8*)(intptr_t)v10789;
	i8 v10791 = v10790+(+16);
	i8 v10792 = *(i8*)(intptr_t)v10791;
	i8 v10793 = (i8)+0;
	if (v10792==v10793) goto c01_072a; else goto c01_0729;

c01_0729:;

	i8 v10794 = (i8)(intptr_t)c01_s018c;
	*(i8*)(intptr_t)(ws+3648) = v10794;
	i8 v10795 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10795)();

c01_072a:;

c01_0724:;

	i8 v10796 = (i8)(intptr_t)(ws+3312);
	i8 v10797 = *(i8*)(intptr_t)v10796;
	*(i8*)(intptr_t)(ws+3488) = v10797;
	i8 v10798 = (i8)(intptr_t)(f230_IsRecord);

	((void(*)(void))(intptr_t)v10798)();

	i1 v10799 = *(i1*)(intptr_t)(ws+3496);
	i8 v10800 = (i8)(intptr_t)(ws+3397);
	*(i1*)(intptr_t)v10800 = v10799;

	i8 v10801 = (i8)(intptr_t)(ws+3397);
	i1 v10802 = *(i1*)(intptr_t)v10801;
	i1 v10803 = (i1)+0;
	if (v10802==v10803) goto c01_0730; else goto c01_072f;

c01_072f:;

	i8 v10804 = (i8)(intptr_t)(ws+3312);
	i8 v10805 = *(i8*)(intptr_t)v10804;
	i8 v10806 = *(i8*)(intptr_t)v10805;
	i8 v10807 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10807 = v10806;

c01_0730:;

c01_072c:;

	i8 v10808 = (i8)(intptr_t)(ws+3312);
	i8 v10809 = *(i8*)(intptr_t)v10808;
	i8 v10810 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10810 = v10809;

	i2 v10811 = (i2)+0;
	i8 v10812 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10812 = v10811;

	i2 v10813 = (i2)+0;
	i8 v10814 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v10814 = v10813;

	i8 v10815 = (i8)(intptr_t)(ws+3328);
	i8 v10816 = *(i8*)(intptr_t)v10815;
	*(i8*)(intptr_t)(ws+3408) = v10816;
	i8 v10817 = (i8)(intptr_t)(f123_MidStartinit);

	((void(*)(void))(intptr_t)v10817)();

	i8 v10818 = *(i8*)(intptr_t)(ws+3416);
	i8 v10819 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10819 = v10818;

	i8 v10820 = (i8)(intptr_t)(ws+3400);
	i8 v10821 = *(i8*)(intptr_t)v10820;
	*(i8*)(intptr_t)(ws+3488) = v10821;
	i8 v10822 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10822)();

	i1 v10823 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10823;
	i8 v10824 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10824;
	i8 v10825 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10825)();

	i1 v10826 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v10826;
	i8 v10827 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10827;
	i8 v10828 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10828)();

}
	void f300_GetInitedMemberChecked(void);
	void f298_AlignTo(void);
	void f227_IsNum(void);
const i1 c01_s018d[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f75_SimpleError(void);
	void f150_MidInit(void);
	void f256_Generate(void);
	void f67_IsPtr(void);
const i1 c01_s018e[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f75_SimpleError(void);
	void f115_MidInitstring(void);
	void f256_Generate(void);
const i1 c01_s018f[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f75_SimpleError(void);
	void f107_MidInitaddress(void);
	void f256_Generate(void);
const i1 c01_s0190[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f75_SimpleError(void);
	void f136_MidInitsubref(void);
	void f256_Generate(void);
	void f291_parser_i_constant_error(void);
	void f62_Discard(void);

// reduce_111 workspace at ws+3384 length ws+64
void f424_reduce_111(void) {

	i8 v10829 = (i8)(intptr_t)(f300_GetInitedMemberChecked);

	((void(*)(void))(intptr_t)v10829)();

	i8 v10830 = *(i8*)(intptr_t)(ws+3456);
	i8 v10831 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10831 = v10830;

	i8 v10832 = *(i8*)(intptr_t)(ws+3448);
	i8 v10833 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10833 = v10832;

	i8 v10834 = (i8)(intptr_t)(ws+3392);
	i8 v10835 = *(i8*)(intptr_t)v10834;
	i8 v10836 = v10835+(+53);
	i1 v10837 = *(i1*)(intptr_t)v10836;
	*(i1*)(intptr_t)(ws+3464) = v10837;
	i8 v10838 = (i8)(intptr_t)(f298_AlignTo);

	((void(*)(void))(intptr_t)v10838)();

	i8 v10839 = (i8)(intptr_t)(ws+3392);
	i8 v10840 = *(i8*)(intptr_t)v10839;
	i8 v10841 = v10840+(+48);
	i2 v10842 = *(i2*)(intptr_t)v10841;
	i8 v10843 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v10843 = v10842;

	i8 v10844 = (i8)(intptr_t)(ws+3304);
	i8 v10845 = *(i8*)(intptr_t)v10844;
	i8 v10846 = v10845+(+48);
	i1 v10847 = *(i1*)(intptr_t)v10846;

	if (v10847 != +40) goto c01_0732;

	i8 v10848 = (i8)(intptr_t)(ws+3392);
	i8 v10849 = *(i8*)(intptr_t)v10848;
	*(i8*)(intptr_t)(ws+3560) = v10849;
	i8 v10850 = (i8)(intptr_t)(f227_IsNum);

	((void(*)(void))(intptr_t)v10850)();

	i1 v10851 = *(i1*)(intptr_t)(ws+3568);
	i8 v10852 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v10852 = v10851;

	i8 v10853 = (i8)(intptr_t)(ws+3402);
	i1 v10854 = *(i1*)(intptr_t)v10853;
	i1 v10855 = (i1)+0;
	if (v10854==v10855) goto c01_0736; else goto c01_0737;

c01_0736:;

	i8 v10856 = (i8)(intptr_t)c01_s018d;
	*(i8*)(intptr_t)(ws+3648) = v10856;
	i8 v10857 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10857)();

c01_0737:;

c01_0733:;

	i8 v10858 = (i8)(intptr_t)(ws+3400);
	i2 v10859 = *(i2*)(intptr_t)v10858;
	i1 v10860 = v10859;
	*(i1*)(intptr_t)(ws+3480) = v10860;
	i8 v10861 = (i8)(intptr_t)(ws+3304);
	i8 v10862 = *(i8*)(intptr_t)v10861;
	i4 v10863 = *(i4*)(intptr_t)v10862;
	*(i4*)(intptr_t)(ws+3484) = v10863;
	i8 v10864 = (i8)(intptr_t)(f150_MidInit);

	((void(*)(void))(intptr_t)v10864)();

	i8 v10865 = *(i8*)(intptr_t)(ws+3488);
	i8 v10866 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10866 = v10865;

	i8 v10867 = (i8)(intptr_t)(ws+3408);
	i8 v10868 = *(i8*)(intptr_t)v10867;
	*(i8*)(intptr_t)(ws+3488) = v10868;
	i8 v10869 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10869)();

	goto c01_0731;

c01_0732:;

	if (v10847 != +41) goto c01_0738;

	i8 v10870 = (i8)(intptr_t)(ws+3392);
	i8 v10871 = *(i8*)(intptr_t)v10870;
	*(i8*)(intptr_t)(ws+3560) = v10871;
	i8 v10872 = (i8)(intptr_t)(f67_IsPtr);

	((void(*)(void))(intptr_t)v10872)();

	i1 v10873 = *(i1*)(intptr_t)(ws+3568);
	i8 v10874 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v10874 = v10873;

	i8 v10875 = (i8)(intptr_t)(ws+3416);
	i1 v10876 = *(i1*)(intptr_t)v10875;
	i1 v10877 = (i1)+0;
	if (v10876==v10877) goto c01_073e; else goto c01_0740;

c01_0740:;

	i8 v10878 = (i8)(intptr_t)(ws+3392);
	i8 v10879 = *(i8*)(intptr_t)v10878;
	i8 v10880 = *(i8*)(intptr_t)v10879;
	i8 v10881 = (i8)(intptr_t)(ws+1512);
	i8 v10882 = *(i8*)(intptr_t)v10881;
	if (v10880==v10882) goto c01_073f; else goto c01_073e;

c01_073e:;

	i8 v10883 = (i8)(intptr_t)c01_s018e;
	*(i8*)(intptr_t)(ws+3648) = v10883;
	i8 v10884 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10884)();

c01_073f:;

c01_0739:;

	i8 v10885 = (i8)(intptr_t)(ws+3304);
	i8 v10886 = *(i8*)(intptr_t)v10885;
	i8 v10887 = *(i8*)(intptr_t)v10886;
	*(i8*)(intptr_t)(ws+3448) = v10887;
	i8 v10888 = (i8)(intptr_t)(f115_MidInitstring);

	((void(*)(void))(intptr_t)v10888)();

	i8 v10889 = *(i8*)(intptr_t)(ws+3456);
	i8 v10890 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v10890 = v10889;

	i8 v10891 = (i8)(intptr_t)(ws+3424);
	i8 v10892 = *(i8*)(intptr_t)v10891;
	*(i8*)(intptr_t)(ws+3488) = v10892;
	i8 v10893 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10893)();

	goto c01_0731;

c01_0738:;

	if (v10847 != +42) goto c01_0741;

	i8 v10894 = (i8)(intptr_t)(ws+3392);
	i8 v10895 = *(i8*)(intptr_t)v10894;
	i8 v10896 = (i8)(intptr_t)(ws+3304);
	i8 v10897 = *(i8*)(intptr_t)v10896;
	i8 v10898 = v10897+(+24);
	i8 v10899 = *(i8*)(intptr_t)v10898;
	if (v10895==v10899) goto c01_0746; else goto c01_0745;

c01_0745:;

	i8 v10900 = (i8)(intptr_t)c01_s018f;
	*(i8*)(intptr_t)(ws+3648) = v10900;
	i8 v10901 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10901)();

c01_0746:;

c01_0742:;

	i8 v10902 = (i8)(intptr_t)(ws+3304);
	i8 v10903 = *(i8*)(intptr_t)v10902;
	i8 v10904 = *(i8*)(intptr_t)v10903;
	*(i8*)(intptr_t)(ws+3448) = v10904;
	i8 v10905 = (i8)(intptr_t)(ws+3304);
	i8 v10906 = *(i8*)(intptr_t)v10905;
	i8 v10907 = v10906+(+8);
	i2 v10908 = *(i2*)(intptr_t)v10907;
	*(i2*)(intptr_t)(ws+3456) = v10908;
	i8 v10909 = (i8)(intptr_t)(f107_MidInitaddress);

	((void(*)(void))(intptr_t)v10909)();

	i8 v10910 = *(i8*)(intptr_t)(ws+3464);
	i8 v10911 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v10911 = v10910;

	i8 v10912 = (i8)(intptr_t)(ws+3432);
	i8 v10913 = *(i8*)(intptr_t)v10912;
	*(i8*)(intptr_t)(ws+3488) = v10913;
	i8 v10914 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10914)();

	goto c01_0731;

c01_0741:;

	if (v10847 != +43) goto c01_0747;

	i8 v10915 = (i8)(intptr_t)(ws+3392);
	i8 v10916 = *(i8*)(intptr_t)v10915;
	i8 v10917 = (i8)(intptr_t)(ws+3304);
	i8 v10918 = *(i8*)(intptr_t)v10917;
	i8 v10919 = v10918+(+24);
	i8 v10920 = *(i8*)(intptr_t)v10919;
	if (v10916==v10920) goto c01_074c; else goto c01_074b;

c01_074b:;

	i8 v10921 = (i8)(intptr_t)c01_s0190;
	*(i8*)(intptr_t)(ws+3648) = v10921;
	i8 v10922 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v10922)();

c01_074c:;

c01_0748:;

	i8 v10923 = (i8)(intptr_t)(ws+3304);
	i8 v10924 = *(i8*)(intptr_t)v10923;
	i8 v10925 = *(i8*)(intptr_t)v10924;
	*(i8*)(intptr_t)(ws+3448) = v10925;
	i8 v10926 = (i8)(intptr_t)(f136_MidInitsubref);

	((void(*)(void))(intptr_t)v10926)();

	i8 v10927 = *(i8*)(intptr_t)(ws+3456);
	i8 v10928 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v10928 = v10927;

	i8 v10929 = (i8)(intptr_t)(ws+3440);
	i8 v10930 = *(i8*)(intptr_t)v10929;
	*(i8*)(intptr_t)(ws+3488) = v10930;
	i8 v10931 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v10931)();

	goto c01_0731;

c01_0747:;

	i8 v10932 = (i8)(intptr_t)(f291_parser_i_constant_error);

	((void(*)(void))(intptr_t)v10932)();

c01_0731:;


	i8 v10933 = (i8)(intptr_t)(ws+3304);
	i8 v10934 = *(i8*)(intptr_t)v10933;
	*(i8*)(intptr_t)(ws+3592) = v10934;
	i8 v10935 = (i8)(intptr_t)(f62_Discard);

	((void(*)(void))(intptr_t)v10935)();

	i8 v10936 = (i8)(intptr_t)(ws+1560);
	i2 v10937 = *(i2*)(intptr_t)v10936;
	i8 v10938 = (i8)(intptr_t)(ws+3400);
	i2 v10939 = *(i2*)(intptr_t)v10938;
	i2 v10940 = v10937+v10939;
	i8 v10941 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10941 = v10940;

	i8 v10942 = (i8)(intptr_t)(ws+1562);
	i2 v10943 = *(i2*)(intptr_t)v10942;
	i8 v10944 = (i8)(intptr_t)(ws+3400);
	i2 v10945 = *(i2*)(intptr_t)v10944;
	i2 v10946 = v10943+v10945;
	i8 v10947 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v10947 = v10946;

}
	void f296_CheckEndOfInitialiser(void);
	void f33_Free(void);
	void f301_yy_destructor(void);

// reduce_112 workspace at ws+3384 length ws+0
void f425_reduce_112(void) {

	i8 v10948 = (i8)(intptr_t)(f296_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v10948)();

	i8 v10949 = (i8)(intptr_t)(ws+1560);
	i2 v10950 = *(i2*)(intptr_t)v10949;
	i8 v10951 = (i8)(intptr_t)(ws+3320);
	i8 v10952 = *(i8*)(intptr_t)v10951;
	i8 v10953 = v10952+(+16);
	i2 v10954 = *(i2*)(intptr_t)v10953;
	i2 v10955 = v10950+v10954;
	i8 v10956 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10956 = v10955;

	i8 v10957 = (i8)(intptr_t)(ws+3320);
	i8 v10958 = *(i8*)(intptr_t)v10957;
	i8 v10959 = *(i8*)(intptr_t)v10958;
	i8 v10960 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10960 = v10959;

	i8 v10961 = (i8)(intptr_t)(ws+3320);
	i8 v10962 = *(i8*)(intptr_t)v10961;
	i8 v10963 = v10962+(+8);
	i8 v10964 = *(i8*)(intptr_t)v10963;
	i8 v10965 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10965 = v10964;

	i8 v10966 = (i8)(intptr_t)(ws+3320);
	i8 v10967 = *(i8*)(intptr_t)v10966;
	*(i8*)(intptr_t)(ws+3680) = v10967;
	i8 v10968 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v10968)();

	i1 v10969 = (i1)+32;
	*(i1*)(intptr_t)(ws+3496) = v10969;
	i8 v10970 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10970;
	i8 v10971 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v10971)();

}
	void f300_GetInitedMemberChecked(void);
	void f298_AlignTo(void);
	void f68_InternalAlloc(void);
	void f230_IsRecord(void);
	void f225_IsArray(void);
const i1 c01_s0191[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f75_SimpleError(void);

// reduce_113 workspace at ws+3384 length ws+26
void f426_reduce_113(void) {

	i8 v10972 = (i8)(intptr_t)(f300_GetInitedMemberChecked);

	((void(*)(void))(intptr_t)v10972)();

	i8 v10973 = *(i8*)(intptr_t)(ws+3456);
	i8 v10974 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10974 = v10973;

	i8 v10975 = *(i8*)(intptr_t)(ws+3448);
	i8 v10976 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10976 = v10975;

	i8 v10977 = (i8)(intptr_t)(ws+3392);
	i8 v10978 = *(i8*)(intptr_t)v10977;
	i8 v10979 = v10978+(+53);
	i1 v10980 = *(i1*)(intptr_t)v10979;
	*(i1*)(intptr_t)(ws+3464) = v10980;
	i8 v10981 = (i8)(intptr_t)(f298_AlignTo);

	((void(*)(void))(intptr_t)v10981)();

	i8 v10982 = (i8)+18;
	*(i8*)(intptr_t)(ws+3640) = v10982;
	i8 v10983 = (i8)(intptr_t)(f68_InternalAlloc);

	((void(*)(void))(intptr_t)v10983)();

	i8 v10984 = *(i8*)(intptr_t)(ws+3648);
	i8 v10985 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10985 = v10984;

	i8 v10986 = (i8)(intptr_t)(ws+3400);
	i8 v10987 = *(i8*)(intptr_t)v10986;
	i8 v10988 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10988 = v10987;

	i8 v10989 = (i8)(intptr_t)(ws+72);
	i8 v10990 = *(i8*)(intptr_t)v10989;
	i8 v10991 = (i8)(intptr_t)(ws+3296);
	i8 v10992 = *(i8*)(intptr_t)v10991;
	*(i8*)(intptr_t)v10992 = v10990;

	i8 v10993 = (i8)(intptr_t)(ws+1552);
	i8 v10994 = *(i8*)(intptr_t)v10993;
	i8 v10995 = (i8)(intptr_t)(ws+3296);
	i8 v10996 = *(i8*)(intptr_t)v10995;
	i8 v10997 = v10996+(+8);
	*(i8*)(intptr_t)v10997 = v10994;

	i8 v10998 = (i8)(intptr_t)(ws+1560);
	i2 v10999 = *(i2*)(intptr_t)v10998;
	i8 v11000 = (i8)(intptr_t)(ws+3296);
	i8 v11001 = *(i8*)(intptr_t)v11000;
	i8 v11002 = v11001+(+16);
	*(i2*)(intptr_t)v11002 = v10999;

	i8 v11003 = (i8)(intptr_t)(ws+3392);
	i8 v11004 = *(i8*)(intptr_t)v11003;
	i8 v11005 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v11005 = v11004;

	i2 v11006 = (i2)+0;
	i8 v11007 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v11007 = v11006;

	i8 v11008 = (i8)(intptr_t)(ws+3392);
	i8 v11009 = *(i8*)(intptr_t)v11008;
	*(i8*)(intptr_t)(ws+3488) = v11009;
	i8 v11010 = (i8)(intptr_t)(f230_IsRecord);

	((void(*)(void))(intptr_t)v11010)();

	i1 v11011 = *(i1*)(intptr_t)(ws+3496);
	i8 v11012 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v11012 = v11011;

	i8 v11013 = (i8)(intptr_t)(ws+3408);
	i1 v11014 = *(i1*)(intptr_t)v11013;
	i1 v11015 = (i1)+0;
	if (v11014==v11015) goto c01_0751; else goto c01_0750;

c01_0750:;

	i8 v11016 = (i8)(intptr_t)(ws+3392);
	i8 v11017 = *(i8*)(intptr_t)v11016;
	i8 v11018 = *(i8*)(intptr_t)v11017;
	i8 v11019 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11019 = v11018;

	goto c01_074d;

c01_0751:;

	i8 v11020 = (i8)(intptr_t)(ws+3392);
	i8 v11021 = *(i8*)(intptr_t)v11020;
	*(i8*)(intptr_t)(ws+3496) = v11021;
	i8 v11022 = (i8)(intptr_t)(f225_IsArray);

	((void(*)(void))(intptr_t)v11022)();

	i1 v11023 = *(i1*)(intptr_t)(ws+3504);
	i8 v11024 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v11024 = v11023;

	i8 v11025 = (i8)(intptr_t)(ws+3409);
	i1 v11026 = *(i1*)(intptr_t)v11025;
	i1 v11027 = (i1)+0;
	if (v11026==v11027) goto c01_0755; else goto c01_0754;

c01_0754:;

	i8 v11028 = (i8)+0;
	i8 v11029 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11029 = v11028;

	goto c01_074d;

c01_0755:;

	i8 v11030 = (i8)(intptr_t)c01_s0191;
	*(i8*)(intptr_t)(ws+3648) = v11030;
	i8 v11031 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v11031)();

c01_074d:;

}
	void f162_MidAsmend(void);
	void f256_Generate(void);
	void f301_yy_destructor(void);

// reduce_114 workspace at ws+3384 length ws+8
void f427_reduce_114(void) {

	i8 v11032 = (i8)(intptr_t)(f162_MidAsmend);

	((void(*)(void))(intptr_t)v11032)();

	i8 v11033 = *(i8*)(intptr_t)(ws+3392);
	i8 v11034 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11034 = v11033;

	i8 v11035 = (i8)(intptr_t)(ws+3384);
	i8 v11036 = *(i8*)(intptr_t)v11035;
	*(i8*)(intptr_t)(ws+3488) = v11036;
	i8 v11037 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11037)();

	i1 v11038 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11038;
	i8 v11039 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11039;
	i8 v11040 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11040)();

}
	void f116_MidAsmstart(void);
	void f256_Generate(void);

// reduce_115 workspace at ws+3384 length ws+8
void f428_reduce_115(void) {

	i8 v11041 = (i8)(intptr_t)(f116_MidAsmstart);

	((void(*)(void))(intptr_t)v11041)();

	i8 v11042 = *(i8*)(intptr_t)(ws+3392);
	i8 v11043 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11043 = v11042;

	i8 v11044 = (i8)(intptr_t)(ws+3384);
	i8 v11045 = *(i8*)(intptr_t)v11044;
	*(i8*)(intptr_t)(ws+3488) = v11045;
	i8 v11046 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11046)();

}
	void f104_MidAsmtext(void);
	void f256_Generate(void);
	void f33_Free(void);

// reduce_116 workspace at ws+3384 length ws+8
void f429_reduce_116(void) {

	i8 v11047 = (i8)(intptr_t)(ws+3304);
	i8 v11048 = *(i8*)(intptr_t)v11047;
	*(i8*)(intptr_t)(ws+3392) = v11048;
	i8 v11049 = (i8)(intptr_t)(f104_MidAsmtext);

	((void(*)(void))(intptr_t)v11049)();

	i8 v11050 = *(i8*)(intptr_t)(ws+3400);
	i8 v11051 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11051 = v11050;

	i8 v11052 = (i8)(intptr_t)(ws+3384);
	i8 v11053 = *(i8*)(intptr_t)v11052;
	*(i8*)(intptr_t)(ws+3488) = v11053;
	i8 v11054 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11054)();

	i8 v11055 = (i8)(intptr_t)(ws+3304);
	i8 v11056 = *(i8*)(intptr_t)v11055;
	*(i8*)(intptr_t)(ws+3680) = v11056;
	i8 v11057 = (i8)(intptr_t)(f33_Free);

	((void(*)(void))(intptr_t)v11057)();

}
	void f161_MidAsmvalue(void);
	void f256_Generate(void);

// reduce_117 workspace at ws+3384 length ws+8
void f430_reduce_117(void) {

	i8 v11058 = (i8)(intptr_t)(ws+3304);
	i4 v11059 = *(i4*)(intptr_t)v11058;
	*(i4*)(intptr_t)(ws+3416) = v11059;
	i8 v11060 = (i8)(intptr_t)(f161_MidAsmvalue);

	((void(*)(void))(intptr_t)v11060)();

	i8 v11061 = *(i8*)(intptr_t)(ws+3424);
	i8 v11062 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11062 = v11061;

	i8 v11063 = (i8)(intptr_t)(ws+3384);
	i8 v11064 = *(i8*)(intptr_t)v11063;
	*(i8*)(intptr_t)(ws+3488) = v11064;
	i8 v11065 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11065)();

}
const i1 c01_s0192[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f75_SimpleError(void);

// bad_reference workspace at ws+3416 length ws+0
void f432_bad_reference(void) {

	i8 v11066 = (i8)(intptr_t)c01_s0192;
	*(i8*)(intptr_t)(ws+3648) = v11066;
	i8 v11067 = (i8)(intptr_t)(f75_SimpleError);

	((void(*)(void))(intptr_t)v11067)();

}
	void f226_IsSubroutine(void);
	void f200_EmitterReferenceSubroutine(void);
	void f151_MidAsmsubref(void);
	void f256_Generate(void);
	void f432_bad_reference(void);
	void f133_MidAsmsymbol(void);
	void f256_Generate(void);
	void f161_MidAsmvalue(void);
	void f256_Generate(void);
	void f432_bad_reference(void);

// reduce_118 workspace at ws+3384 length ws+32
void f431_reduce_118(void) {


	i8 v11068 = (i8)(intptr_t)(ws+3304);
	i8 v11069 = *(i8*)(intptr_t)v11068;
	i8 v11070 = v11069+(+32);
	i1 v11071 = *(i1*)(intptr_t)v11070;

	if (v11071 != +30) goto c01_0757;

	i8 v11072 = (i8)(intptr_t)(ws+3304);
	i8 v11073 = *(i8*)(intptr_t)v11072;
	i8 v11074 = *(i8*)(intptr_t)v11073;
	*(i8*)(intptr_t)(ws+3560) = v11074;
	i8 v11075 = (i8)(intptr_t)(f226_IsSubroutine);

	((void(*)(void))(intptr_t)v11075)();

	i1 v11076 = *(i1*)(intptr_t)(ws+3568);
	i8 v11077 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v11077 = v11076;

	i8 v11078 = (i8)(intptr_t)(ws+3384);
	i1 v11079 = *(i1*)(intptr_t)v11078;
	i1 v11080 = (i1)+0;
	if (v11079==v11080) goto c01_075c; else goto c01_075b;

c01_075b:;

	i8 v11081 = (i8)(intptr_t)(ws+40);
	i8 v11082 = *(i8*)(intptr_t)v11081;
	*(i8*)(intptr_t)(ws+3496) = v11082;
	i8 v11083 = (i8)(intptr_t)(ws+3304);
	i8 v11084 = *(i8*)(intptr_t)v11083;
	i8 v11085 = *(i8*)(intptr_t)v11084;
	i8 v11086 = *(i8*)(intptr_t)v11085;
	*(i8*)(intptr_t)(ws+3504) = v11086;
	i8 v11087 = (i8)(intptr_t)(f200_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v11087)();

	i8 v11088 = (i8)(intptr_t)(ws+3304);
	i8 v11089 = *(i8*)(intptr_t)v11088;
	i8 v11090 = *(i8*)(intptr_t)v11089;
	i8 v11091 = *(i8*)(intptr_t)v11090;
	*(i8*)(intptr_t)(ws+3416) = v11091;
	i8 v11092 = (i8)(intptr_t)(f151_MidAsmsubref);

	((void(*)(void))(intptr_t)v11092)();

	i8 v11093 = *(i8*)(intptr_t)(ws+3424);
	i8 v11094 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v11094 = v11093;

	i8 v11095 = (i8)(intptr_t)(ws+3392);
	i8 v11096 = *(i8*)(intptr_t)v11095;
	*(i8*)(intptr_t)(ws+3488) = v11096;
	i8 v11097 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11097)();

	goto c01_0758;

c01_075c:;

	i8 v11098 = (i8)(intptr_t)(f432_bad_reference);

	((void(*)(void))(intptr_t)v11098)();

c01_0758:;

	goto c01_0756;

c01_0757:;

	if (v11071 != +28) goto c01_075d;

	i8 v11099 = (i8)(intptr_t)(ws+3304);
	i8 v11100 = *(i8*)(intptr_t)v11099;
	*(i8*)(intptr_t)(ws+3416) = v11100;
	i8 v11101 = (i8)(intptr_t)(f133_MidAsmsymbol);

	((void(*)(void))(intptr_t)v11101)();

	i8 v11102 = *(i8*)(intptr_t)(ws+3424);
	i8 v11103 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v11103 = v11102;

	i8 v11104 = (i8)(intptr_t)(ws+3400);
	i8 v11105 = *(i8*)(intptr_t)v11104;
	*(i8*)(intptr_t)(ws+3488) = v11105;
	i8 v11106 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11106)();

	goto c01_0756;

c01_075d:;

	if (v11071 != +7) goto c01_075e;

	i8 v11107 = (i8)(intptr_t)(ws+3304);
	i8 v11108 = *(i8*)(intptr_t)v11107;
	i4 v11109 = *(i4*)(intptr_t)v11108;
	*(i4*)(intptr_t)(ws+3416) = v11109;
	i8 v11110 = (i8)(intptr_t)(f161_MidAsmvalue);

	((void(*)(void))(intptr_t)v11110)();

	i8 v11111 = *(i8*)(intptr_t)(ws+3424);
	i8 v11112 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v11112 = v11111;

	i8 v11113 = (i8)(intptr_t)(ws+3408);
	i8 v11114 = *(i8*)(intptr_t)v11113;
	*(i8*)(intptr_t)(ws+3488) = v11114;
	i8 v11115 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11115)();

	goto c01_0756;

c01_075e:;

	i8 v11116 = (i8)(intptr_t)(f432_bad_reference);

	((void(*)(void))(intptr_t)v11116)();

c01_0756:;


}
	void f301_yy_destructor(void);

// reduce_124 workspace at ws+3384 length ws+0
void f433_reduce_124(void) {

	i1 v11117 = (i1)+26;
	*(i1*)(intptr_t)(ws+3496) = v11117;
	i8 v11118 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v11118;
	i8 v11119 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11119)();

}
	void f301_yy_destructor(void);

// reduce_128 workspace at ws+3384 length ws+0
void f434_reduce_128(void) {

	i1 v11120 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11120;
	i8 v11121 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11121;
	i8 v11122 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11122)();

}
	void f301_yy_destructor(void);
	void f301_yy_destructor(void);

// reduce_129 workspace at ws+3384 length ws+0
void f435_reduce_129(void) {

	i1 v11123 = (i1)+25;
	*(i1*)(intptr_t)(ws+3496) = v11123;
	i8 v11124 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v11124;
	i8 v11125 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11125)();

	i1 v11126 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11126;
	i8 v11127 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11127;
	i8 v11128 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11128)();

}
	void f301_yy_destructor(void);

// reduce_130 workspace at ws+3384 length ws+0
void f436_reduce_130(void) {

	i1 v11129 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11129;
	i8 v11130 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11130;
	i8 v11131 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11131)();

}
	void f301_yy_destructor(void);

// reduce_131 workspace at ws+3384 length ws+0
void f437_reduce_131(void) {

	i1 v11132 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11132;
	i8 v11133 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11133;
	i8 v11134 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11134)();

}
	void f301_yy_destructor(void);

// reduce_137 workspace at ws+3384 length ws+0
void f438_reduce_137(void) {

	i1 v11135 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v11135;
	i8 v11136 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v11136;
	i8 v11137 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11137)();

}
	void f301_yy_destructor(void);

// reduce_140 workspace at ws+3384 length ws+0
void f439_reduce_140(void) {

	i1 v11138 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v11138;
	i8 v11139 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v11139;
	i8 v11140 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11140)();

}

// reduce_default workspace at ws+3384 length ws+0
void f440_reduce_default(void) {

}
	void f310_reduce_0(void);
	void f311_reduce_1(void);
	void f312_reduce_2(void);
	void f313_reduce_3(void);
	void f314_reduce_4(void);
	void f315_reduce_5(void);
	void f316_reduce_6(void);
	void f317_reduce_7(void);
	void f318_reduce_8(void);
	void f319_reduce_9(void);
	void f320_reduce_10(void);
	void f321_reduce_11(void);
	void f322_reduce_12(void);
	void f323_reduce_13(void);
	void f324_reduce_14(void);
	void f325_reduce_15(void);
	void f326_reduce_16(void);
	void f327_reduce_17(void);
	void f328_reduce_18(void);
	void f329_reduce_19(void);
	void f330_reduce_20(void);
	void f331_reduce_21(void);
	void f332_reduce_22(void);
	void f333_reduce_23(void);
	void f334_reduce_24(void);
	void f335_reduce_25(void);
	void f336_reduce_26(void);
	void f337_reduce_27(void);
	void f338_reduce_28(void);
	void f339_reduce_29(void);
	void f340_reduce_30(void);
	void f341_reduce_31(void);
	void f342_reduce_32(void);
	void f343_reduce_33(void);
	void f344_reduce_34(void);
	void f345_reduce_35(void);
	void f346_reduce_36(void);
	void f347_reduce_37(void);
	void f348_reduce_38(void);
	void f349_reduce_39(void);
	void f350_reduce_40(void);
	void f351_reduce_41(void);
	void f352_reduce_42(void);
	void f353_reduce_43(void);
	void f354_reduce_44(void);
	void f355_reduce_45(void);
	void f356_reduce_46(void);
	void f357_reduce_47(void);
	void f358_reduce_48(void);
	void f359_reduce_49(void);
	void f360_reduce_50(void);
	void f361_reduce_51(void);
	void f362_reduce_52(void);
	void f363_reduce_53(void);
	void f364_reduce_54(void);
	void f365_reduce_55(void);
	void f367_reduce_56(void);
	void f368_reduce_57(void);
	void f369_reduce_58(void);
	void f371_reduce_59(void);
	void f372_reduce_60(void);
	void f373_reduce_61(void);
	void f374_reduce_62(void);
	void f375_reduce_63(void);
	void f376_reduce_64(void);
	void f377_reduce_65(void);
	void f378_reduce_66(void);
	void f379_reduce_67(void);
	void f380_reduce_68(void);
	void f381_reduce_69(void);
	void f382_reduce_70(void);
	void f383_reduce_71(void);
	void f384_reduce_72(void);
	void f385_reduce_73(void);
	void f386_reduce_74(void);
	void f387_reduce_75(void);
	void f388_reduce_76(void);
	void f389_reduce_77(void);
	void f390_reduce_78(void);
	void f391_reduce_79(void);
	void f392_reduce_80(void);
	void f393_reduce_81(void);
	void f394_reduce_82(void);
	void f395_reduce_83(void);
	void f396_reduce_84(void);
	void f397_reduce_85(void);
	void f398_reduce_86(void);
	void f399_reduce_87(void);
	void f400_reduce_88(void);
	void f402_reduce_89(void);
	void f403_reduce_90(void);
	void f404_reduce_91(void);
	void f405_reduce_92(void);
	void f406_reduce_93(void);
	void f407_reduce_94(void);
	void f408_reduce_95(void);
	void f409_reduce_96(void);
	void f410_reduce_97(void);
	void f411_reduce_98(void);
	void f412_reduce_99(void);
	void f413_reduce_100(void);
	void f414_reduce_101(void);
	void f415_reduce_102(void);
	void f416_reduce_103(void);
	void f417_reduce_104(void);
	void f418_reduce_105(void);
	void f419_reduce_106(void);
	void f420_reduce_107(void);
	void f421_reduce_108(void);
	void f422_reduce_109(void);
	void f423_reduce_110(void);
	void f424_reduce_111(void);
	void f425_reduce_112(void);
	void f426_reduce_113(void);
	void f427_reduce_114(void);
	void f428_reduce_115(void);
	void f429_reduce_116(void);
	void f430_reduce_117(void);
	void f431_reduce_118(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f433_reduce_124(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f434_reduce_128(void);
	void f435_reduce_129(void);
	void f436_reduce_130(void);
	void f437_reduce_131(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f438_reduce_137(void);
	void f440_reduce_default(void);
	void f440_reduce_default(void);
	void f439_reduce_140(void);
static data f308_yy_reduce_s075f[] = {

	{ .ptr = (void*)f310_reduce_0 },

	{ .ptr = (void*)f311_reduce_1 },

	{ .ptr = (void*)f312_reduce_2 },

	{ .ptr = (void*)f313_reduce_3 },

	{ .ptr = (void*)f314_reduce_4 },

	{ .ptr = (void*)f315_reduce_5 },

	{ .ptr = (void*)f316_reduce_6 },

	{ .ptr = (void*)f317_reduce_7 },

	{ .ptr = (void*)f318_reduce_8 },

	{ .ptr = (void*)f319_reduce_9 },

	{ .ptr = (void*)f320_reduce_10 },

	{ .ptr = (void*)f321_reduce_11 },

	{ .ptr = (void*)f322_reduce_12 },

	{ .ptr = (void*)f323_reduce_13 },

	{ .ptr = (void*)f324_reduce_14 },

	{ .ptr = (void*)f325_reduce_15 },

	{ .ptr = (void*)f326_reduce_16 },

	{ .ptr = (void*)f327_reduce_17 },

	{ .ptr = (void*)f328_reduce_18 },

	{ .ptr = (void*)f329_reduce_19 },

	{ .ptr = (void*)f330_reduce_20 },

	{ .ptr = (void*)f331_reduce_21 },

	{ .ptr = (void*)f332_reduce_22 },

	{ .ptr = (void*)f333_reduce_23 },

	{ .ptr = (void*)f334_reduce_24 },

	{ .ptr = (void*)f335_reduce_25 },

	{ .ptr = (void*)f336_reduce_26 },

	{ .ptr = (void*)f337_reduce_27 },

	{ .ptr = (void*)f338_reduce_28 },

	{ .ptr = (void*)f339_reduce_29 },

	{ .ptr = (void*)f340_reduce_30 },

	{ .ptr = (void*)f341_reduce_31 },

	{ .ptr = (void*)f342_reduce_32 },

	{ .ptr = (void*)f343_reduce_33 },

	{ .ptr = (void*)f344_reduce_34 },

	{ .ptr = (void*)f345_reduce_35 },

	{ .ptr = (void*)f346_reduce_36 },

	{ .ptr = (void*)f347_reduce_37 },

	{ .ptr = (void*)f348_reduce_38 },

	{ .ptr = (void*)f349_reduce_39 },

	{ .ptr = (void*)f350_reduce_40 },

	{ .ptr = (void*)f351_reduce_41 },

	{ .ptr = (void*)f352_reduce_42 },

	{ .ptr = (void*)f353_reduce_43 },

	{ .ptr = (void*)f354_reduce_44 },

	{ .ptr = (void*)f355_reduce_45 },

	{ .ptr = (void*)f356_reduce_46 },

	{ .ptr = (void*)f357_reduce_47 },

	{ .ptr = (void*)f358_reduce_48 },

	{ .ptr = (void*)f359_reduce_49 },

	{ .ptr = (void*)f360_reduce_50 },

	{ .ptr = (void*)f361_reduce_51 },

	{ .ptr = (void*)f362_reduce_52 },

	{ .ptr = (void*)f363_reduce_53 },

	{ .ptr = (void*)f364_reduce_54 },

	{ .ptr = (void*)f365_reduce_55 },

	{ .ptr = (void*)f367_reduce_56 },

	{ .ptr = (void*)f368_reduce_57 },

	{ .ptr = (void*)f369_reduce_58 },

	{ .ptr = (void*)f371_reduce_59 },

	{ .ptr = (void*)f372_reduce_60 },

	{ .ptr = (void*)f373_reduce_61 },

	{ .ptr = (void*)f374_reduce_62 },

	{ .ptr = (void*)f375_reduce_63 },

	{ .ptr = (void*)f376_reduce_64 },

	{ .ptr = (void*)f377_reduce_65 },

	{ .ptr = (void*)f378_reduce_66 },

	{ .ptr = (void*)f379_reduce_67 },

	{ .ptr = (void*)f380_reduce_68 },

	{ .ptr = (void*)f381_reduce_69 },

	{ .ptr = (void*)f382_reduce_70 },

	{ .ptr = (void*)f383_reduce_71 },

	{ .ptr = (void*)f384_reduce_72 },

	{ .ptr = (void*)f385_reduce_73 },

	{ .ptr = (void*)f386_reduce_74 },

	{ .ptr = (void*)f387_reduce_75 },

	{ .ptr = (void*)f388_reduce_76 },

	{ .ptr = (void*)f389_reduce_77 },

	{ .ptr = (void*)f390_reduce_78 },

	{ .ptr = (void*)f391_reduce_79 },

	{ .ptr = (void*)f392_reduce_80 },

	{ .ptr = (void*)f393_reduce_81 },

	{ .ptr = (void*)f394_reduce_82 },

	{ .ptr = (void*)f395_reduce_83 },

	{ .ptr = (void*)f396_reduce_84 },

	{ .ptr = (void*)f397_reduce_85 },

	{ .ptr = (void*)f398_reduce_86 },

	{ .ptr = (void*)f399_reduce_87 },

	{ .ptr = (void*)f400_reduce_88 },

	{ .ptr = (void*)f402_reduce_89 },

	{ .ptr = (void*)f403_reduce_90 },

	{ .ptr = (void*)f404_reduce_91 },

	{ .ptr = (void*)f405_reduce_92 },

	{ .ptr = (void*)f406_reduce_93 },

	{ .ptr = (void*)f407_reduce_94 },

	{ .ptr = (void*)f408_reduce_95 },

	{ .ptr = (void*)f409_reduce_96 },

	{ .ptr = (void*)f410_reduce_97 },

	{ .ptr = (void*)f411_reduce_98 },

	{ .ptr = (void*)f412_reduce_99 },

	{ .ptr = (void*)f413_reduce_100 },

	{ .ptr = (void*)f414_reduce_101 },

	{ .ptr = (void*)f415_reduce_102 },

	{ .ptr = (void*)f416_reduce_103 },

	{ .ptr = (void*)f417_reduce_104 },

	{ .ptr = (void*)f418_reduce_105 },

	{ .ptr = (void*)f419_reduce_106 },

	{ .ptr = (void*)f420_reduce_107 },

	{ .ptr = (void*)f421_reduce_108 },

	{ .ptr = (void*)f422_reduce_109 },

	{ .ptr = (void*)f423_reduce_110 },

	{ .ptr = (void*)f424_reduce_111 },

	{ .ptr = (void*)f425_reduce_112 },

	{ .ptr = (void*)f426_reduce_113 },

	{ .ptr = (void*)f427_reduce_114 },

	{ .ptr = (void*)f428_reduce_115 },

	{ .ptr = (void*)f429_reduce_116 },

	{ .ptr = (void*)f430_reduce_117 },

	{ .ptr = (void*)f431_reduce_118 },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f433_reduce_124 },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f434_reduce_128 },

	{ .ptr = (void*)f435_reduce_129 },

	{ .ptr = (void*)f436_reduce_130 },

	{ .ptr = (void*)f437_reduce_131 },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f438_reduce_137 },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f440_reduce_default },

	{ .ptr = (void*)f439_reduce_140 },

};
	void f307_CopyMinor(void);

// yy_reduce workspace at ws+3288 length ws+94
void f308_yy_reduce(void) {

	i8 v7516 = (i8)(intptr_t)((i1*)f2___main_s05fa);
	i8 v7517 = (i8)(intptr_t)(ws+3288);
	i2 v7518 = *(i2*)(intptr_t)v7517;
	i1 v7519 = v7518;
	i8 v7520 = v7519;
	i8 v7521 = v7516+v7520;
	i1 v7522 = *(i1*)(intptr_t)v7521;
	i8 v7523 = (i8)(intptr_t)(ws+3294);
	*(i1*)(intptr_t)v7523 = v7522;

	i8 v7524 = (i8)(intptr_t)(ws+1568);
	i8 v7525 = *(i8*)(intptr_t)v7524;
	i8 v7526 = (i8)(intptr_t)(ws+3176);
	if (v7525==v7526) goto c01_05fe; else goto c01_05ff;

c01_05fe:;

	i8 v7527 = (i8)(intptr_t)(f305_yy_stack_overflow);

	((void(*)(void))(intptr_t)v7527)();

c01_05ff:;

c01_05fb:;

	i8 v7528 = (i8)(intptr_t)(ws+3304);
	i8 v7529 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v7529 = v7528;

	i8 v7530 = (i8)(intptr_t)(ws+3294);
	i1 v7531 = *(i1*)(intptr_t)v7530;
	i8 v7532 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v7532 = v7531;

c01_0600:;

	i8 v7533 = (i8)(intptr_t)(ws+3376);
	i1 v7534 = *(i1*)(intptr_t)v7533;
	i1 v7535 = (i1)+0;
	if (v7534==v7535) goto c01_0605; else goto c01_0604;

c01_0604:;

	i8 v7536 = (i8)(intptr_t)(ws+1568);
	i8 v7537 = *(i8*)(intptr_t)v7536;
	i8 v7538 = v7537+(+8);
	*(i8*)(intptr_t)(ws+3384) = v7538;
	i8 v7539 = (i8)(intptr_t)(ws+3368);
	i8 v7540 = *(i8*)(intptr_t)v7539;
	*(i8*)(intptr_t)(ws+3392) = v7540;
	i8 v7541 = (i8)(intptr_t)(f307_CopyMinor);

	((void(*)(void))(intptr_t)v7541)();

	i8 v7542 = (i8)(intptr_t)(ws+1568);
	i8 v7543 = *(i8*)(intptr_t)v7542;
	i8 v7544 = v7543+(-16);
	i8 v7545 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7545 = v7544;

	i8 v7546 = (i8)(intptr_t)(ws+3368);
	i8 v7547 = *(i8*)(intptr_t)v7546;
	i8 v7548 = v7547+(+8);
	i8 v7549 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v7549 = v7548;

	i8 v7550 = (i8)(intptr_t)(ws+3376);
	i1 v7551 = *(i1*)(intptr_t)v7550;
	i1 v7552 = v7551+(-1);
	i8 v7553 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v7553 = v7552;

	goto c01_0600;

c01_0605:;


































































































































	i8 v11141 = (i8)(intptr_t)((i1*)f308_yy_reduce_s075f);
	i8 v11142 = (i8)(intptr_t)(ws+3288);
	i2 v11143 = *(i2*)(intptr_t)v11142;
	i1 v11144 = v11143;
	i8 v11145 = v11144;
	i1 v11146 = (i1)+3;
	i8 v11147 = ((i8)v11145)<<v11146;
	i8 v11148 = v11141+v11147;
	i8 v11149 = *(i8*)(intptr_t)v11148;

	((void(*)(void))(intptr_t)v11149)();

	i8 v11150 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)(ws+3384) = v11150;
	i8 v11151 = (i8)(intptr_t)(ws+1568);
	i8 v11152 = *(i8*)(intptr_t)v11151;
	i8 v11153 = v11152+(+24);
	*(i8*)(intptr_t)(ws+3392) = v11153;
	i8 v11154 = (i8)(intptr_t)(f307_CopyMinor);

	((void(*)(void))(intptr_t)v11154)();

	i8 v11155 = (i8)(intptr_t)((i1*)f2___main_s05f9);
	i8 v11156 = (i8)(intptr_t)(ws+3288);
	i2 v11157 = *(i2*)(intptr_t)v11156;
	i1 v11158 = v11157;
	i8 v11159 = v11158;
	i8 v11160 = v11155+v11159;
	i1 v11161 = *(i1*)(intptr_t)v11160;
	i8 v11162 = (i8)(intptr_t)(ws+3377);
	*(i1*)(intptr_t)v11162 = v11161;

	i8 v11163 = (i8)(intptr_t)(ws+1568);
	i8 v11164 = *(i8*)(intptr_t)v11163;
	i2 v11165 = *(i2*)(intptr_t)v11164;
	i8 v11166 = (i8)(intptr_t)(ws+3378);
	*(i2*)(intptr_t)v11166 = v11165;

	i8 v11167 = (i8)(intptr_t)((i1*)f2___main_s05e1);
	i8 v11168 = (i8)(intptr_t)(ws+3378);
	i2 v11169 = *(i2*)(intptr_t)v11168;
	i1 v11170 = v11169;
	i8 v11171 = v11170;
	i1 v11172 = (i1)+1;
	i8 v11173 = ((i8)v11171)<<v11172;
	i8 v11174 = v11167+v11173;
	i2 v11175 = *(i2*)(intptr_t)v11174;
	i8 v11176 = (i8)(intptr_t)(ws+3292);
	*(i2*)(intptr_t)v11176 = v11175;

	i2 v11177 = (i2)+112;
	i8 v11178 = (i8)(intptr_t)(ws+3378);
	i2 v11179 = *(i2*)(intptr_t)v11178;
	if (v11177<v11179) goto c01_0764; else goto c01_0763;

c01_0763:;

	i8 v11180 = (i8)(intptr_t)((i1*)f2___main_s05e0);
	i8 v11181 = (i8)(intptr_t)(ws+3378);
	i2 v11182 = *(i2*)(intptr_t)v11181;
	i1 v11183 = v11182;
	i8 v11184 = v11183;
	i1 v11185 = (i1)+1;
	i8 v11186 = ((i8)v11184)<<v11185;
	i8 v11187 = v11180+v11186;
	i2 v11188 = *(i2*)(intptr_t)v11187;
	i8 v11189 = (i8)(intptr_t)(ws+3377);
	i1 v11190 = *(i1*)(intptr_t)v11189;
	i2 v11191 = v11190;
	i2 v11192 = v11188+v11191;
	i8 v11193 = (i8)(intptr_t)(ws+3380);
	*(i2*)(intptr_t)v11193 = v11192;

	i8 v11194 = (i8)(intptr_t)(ws+3380);
	i2 v11195 = *(i2*)(intptr_t)v11194;
	i2 v11196 = (i2)+0;
	if (v11195<v11196) goto c01_076d; else goto c01_076f;

c01_076f:;

	i8 v11197 = (i8)(intptr_t)(ws+3380);
	i2 v11198 = *(i2*)(intptr_t)v11197;
	i2 v11199 = (i2)+1291;
	if (v11198<v11199) goto c01_076e; else goto c01_076d;

c01_076e:;

	i8 v11200 = (i8)(intptr_t)((i1*)f2___main_s05de);
	i8 v11201 = (i8)(intptr_t)(ws+3380);
	i2 v11202 = *(i2*)(intptr_t)v11201;
	i8 v11203 = v11202;
	i8 v11204 = v11200+v11203;
	i1 v11205 = *(i1*)(intptr_t)v11204;
	i8 v11206 = (i8)(intptr_t)(ws+3377);
	i1 v11207 = *(i1*)(intptr_t)v11206;
	if (v11205==v11207) goto c01_076c; else goto c01_076d;

c01_076c:;

	i8 v11208 = (i8)(intptr_t)((i1*)f2___main_s05dd);
	i8 v11209 = (i8)(intptr_t)(ws+3380);
	i2 v11210 = *(i2*)(intptr_t)v11209;
	i8 v11211 = v11210;
	i1 v11212 = (i1)+1;
	i8 v11213 = ((i8)v11211)<<v11212;
	i8 v11214 = v11208+v11213;
	i2 v11215 = *(i2*)(intptr_t)v11214;
	i8 v11216 = (i8)(intptr_t)(ws+3292);
	*(i2*)(intptr_t)v11216 = v11215;

c01_076d:;

c01_0765:;

c01_0764:;

c01_0760:;

	i8 v11217 = (i8)(intptr_t)(ws+1568);
	i8 v11218 = *(i8*)(intptr_t)v11217;
	i8 v11219 = v11218+(+16);
	i8 v11220 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11220 = v11219;

	i8 v11221 = (i8)(intptr_t)(ws+3292);
	i2 v11222 = *(i2*)(intptr_t)v11221;
	i8 v11223 = (i8)(intptr_t)(ws+1568);
	i8 v11224 = *(i8*)(intptr_t)v11223;
	*(i2*)(intptr_t)v11224 = v11222;

	i8 v11225 = (i8)(intptr_t)(ws+3377);
	i1 v11226 = *(i1*)(intptr_t)v11225;
	i8 v11227 = (i8)(intptr_t)(ws+1568);
	i8 v11228 = *(i8*)(intptr_t)v11227;
	i8 v11229 = v11228+(+2);
	*(i1*)(intptr_t)v11229 = v11226;

}
	void f304_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+3288 length ws+0
void f441_yy_parse_failed(void) {

	i8 v11230 = (i8)(intptr_t)(f304_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v11230)();

}
	void f73_StartError(void);
const i1 c01_s0193[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(void);
	void f11_print(void);
	void f74_EndError(void);

// yy_syntax_error workspace at ws+3288 length ws+16
void f442_yy_syntax_error(void) {

	i8 v11231 = (i8)(intptr_t)(f73_StartError);

	((void(*)(void))(intptr_t)v11231)();

	i8 v11232 = (i8)(intptr_t)c01_s0193;
	*(i8*)(intptr_t)(ws+3696) = v11232;
	i8 v11233 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v11233)();

	i8 v11234 = (i8)(intptr_t)((i1*)f2___main_s05e2);
	i8 v11235 = (i8)(intptr_t)(ws+3288);
	i1 v11236 = *(i1*)(intptr_t)v11235;
	i8 v11237 = v11236;
	i1 v11238 = (i1)+3;
	i8 v11239 = ((i8)v11237)<<v11238;
	i8 v11240 = v11234+v11239;
	i8 v11241 = *(i8*)(intptr_t)v11240;
	*(i8*)(intptr_t)(ws+3696) = v11241;
	i8 v11242 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v11242)();

	i8 v11243 = (i8)(intptr_t)(f74_EndError);

	((void(*)(void))(intptr_t)v11243)();

}

// yy_accept workspace at ws+3288 length ws+0
void f443_yy_accept(void) {

}

// ParserInit workspace at ws+3264 length ws+0
void f444_ParserInit(void) {

	i1 v11244 = (i1)-1;
	i8 v11245 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11245 = v11244;

	i8 v11246 = (i8)(intptr_t)(ws+1576);
	i8 v11247 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11247 = v11246;

	i2 v11248 = (i2)+0;
	i8 v11249 = (i8)(intptr_t)(ws+1576);
	*(i2*)(intptr_t)v11249 = v11248;

	i1 v11250 = (i1)+0;
	i8 v11251 = (i8)(intptr_t)(ws+1578);
	*(i1*)(intptr_t)v11251 = v11250;

}
	void f303_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+3264 length ws+0
void f445_ParserDeinit(void) {

c01_0770:;

	i8 v11252 = (i8)(intptr_t)(ws+1568);
	i8 v11253 = *(i8*)(intptr_t)v11252;
	i8 v11254 = (i8)(intptr_t)(ws+1576);
	if (v11253==v11254) goto c01_0775; else goto c01_0774;

c01_0774:;

	i8 v11255 = (i8)(intptr_t)(f303_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v11255)();

	goto c01_0770;

c01_0775:;

}
	void f308_yy_reduce(void);
	void f305_yy_stack_overflow(void);
	void f307_CopyMinor(void);
	void f443_yy_accept(void);
	void f442_yy_syntax_error(void);
	void f301_yy_destructor(void);
	void f441_yy_parse_failed(void);

// ParserFeedToken workspace at ws+3264 length ws+22
void f446_ParserFeedToken(void) {

	i8 v11256 = (i8)(intptr_t)(ws+1568);
	i8 v11257 = *(i8*)(intptr_t)v11256;
	i2 v11258 = *(i2*)(intptr_t)v11257;
	i8 v11259 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11259 = v11258;

c01_0776:;

	i2 v11260 = (i2)+220;
	i8 v11261 = (i8)(intptr_t)(ws+3280);
	i2 v11262 = *(i2*)(intptr_t)v11261;
	if (v11260<v11262) goto c01_077c; else goto c01_077b;

c01_077b:;

	i8 v11263 = (i8)(intptr_t)((i1*)f2___main_s05df);
	i8 v11264 = (i8)(intptr_t)(ws+3280);
	i2 v11265 = *(i2*)(intptr_t)v11264;
	i1 v11266 = v11265;
	i8 v11267 = v11266;
	i1 v11268 = (i1)+1;
	i8 v11269 = ((i8)v11267)<<v11268;
	i8 v11270 = v11263+v11269;
	i2 v11271 = *(i2*)(intptr_t)v11270;
	i8 v11272 = (i8)(intptr_t)(ws+3264);
	i1 v11273 = *(i1*)(intptr_t)v11272;
	i2 v11274 = v11273;
	i2 v11275 = v11271+v11274;
	i8 v11276 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v11276 = v11275;

	i8 v11277 = (i8)(intptr_t)((i1*)f2___main_s05de);
	i8 v11278 = (i8)(intptr_t)(ws+3282);
	i2 v11279 = *(i2*)(intptr_t)v11278;
	i8 v11280 = v11279;
	i8 v11281 = v11277+v11280;
	i1 v11282 = *(i1*)(intptr_t)v11281;
	i8 v11283 = (i8)(intptr_t)(ws+3264);
	i1 v11284 = *(i1*)(intptr_t)v11283;
	if (v11282==v11284) goto c01_0781; else goto c01_0780;

c01_0780:;

	i8 v11285 = (i8)(intptr_t)((i1*)f2___main_s05e1);
	i8 v11286 = (i8)(intptr_t)(ws+3280);
	i2 v11287 = *(i2*)(intptr_t)v11286;
	i1 v11288 = v11287;
	i8 v11289 = v11288;
	i1 v11290 = (i1)+1;
	i8 v11291 = ((i8)v11289)<<v11290;
	i8 v11292 = v11285+v11291;
	i2 v11293 = *(i2*)(intptr_t)v11292;
	i8 v11294 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11294 = v11293;

	goto c01_077d;

c01_0781:;

	i8 v11295 = (i8)(intptr_t)((i1*)f2___main_s05dd);
	i8 v11296 = (i8)(intptr_t)(ws+3282);
	i2 v11297 = *(i2*)(intptr_t)v11296;
	i8 v11298 = v11297;
	i1 v11299 = (i1)+1;
	i8 v11300 = ((i8)v11298)<<v11299;
	i8 v11301 = v11295+v11300;
	i2 v11302 = *(i2*)(intptr_t)v11301;
	i8 v11303 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11303 = v11302;

c01_077d:;

c01_077c:;

c01_0778:;

	i8 v11304 = (i8)(intptr_t)(ws+3280);
	i2 v11305 = *(i2*)(intptr_t)v11304;
	i2 v11306 = (i2)+456;
	if (v11305<v11306) goto c01_0786; else goto c01_0785;

c01_0785:;

	i8 v11307 = (i8)(intptr_t)(ws+3280);
	i2 v11308 = *(i2*)(intptr_t)v11307;
	i2 v11309 = v11308+(-456);
	*(i2*)(intptr_t)(ws+3288) = v11309;
	i8 v11310 = (i8)(intptr_t)(ws+3264);
	i1 v11311 = *(i1*)(intptr_t)v11310;
	*(i1*)(intptr_t)(ws+3290) = v11311;
	i8 v11312 = (i8)(intptr_t)(f308_yy_reduce);

	((void(*)(void))(intptr_t)v11312)();

	i2 v11313 = *(i2*)(intptr_t)(ws+3292);
	i8 v11314 = (i8)(intptr_t)(ws+3284);
	*(i2*)(intptr_t)v11314 = v11313;

	i8 v11315 = (i8)(intptr_t)(ws+3284);
	i2 v11316 = *(i2*)(intptr_t)v11315;
	i8 v11317 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11317 = v11316;

	goto c01_0782;

c01_0786:;

	i2 v11318 = (i2)+452;
	i8 v11319 = (i8)(intptr_t)(ws+3280);
	i2 v11320 = *(i2*)(intptr_t)v11319;
	if (v11318<v11320) goto c01_078a; else goto c01_0789;

c01_0789:;

	i8 v11321 = (i8)(intptr_t)(ws+1568);
	i8 v11322 = *(i8*)(intptr_t)v11321;
	i8 v11323 = (i8)(intptr_t)(ws+3176);
	if (v11322==v11323) goto c01_078e; else goto c01_078f;

c01_078e:;

	i8 v11324 = (i8)(intptr_t)(f305_yy_stack_overflow);

	((void(*)(void))(intptr_t)v11324)();

	return;

c01_078f:;

c01_078b:;

	i8 v11325 = (i8)(intptr_t)(ws+1568);
	i8 v11326 = *(i8*)(intptr_t)v11325;
	i8 v11327 = v11326+(+16);
	i8 v11328 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11328 = v11327;

	i2 v11329 = (i2)+220;
	i8 v11330 = (i8)(intptr_t)(ws+3280);
	i2 v11331 = *(i2*)(intptr_t)v11330;
	if (v11329<v11331) goto c01_0793; else goto c01_0794;

c01_0793:;

	i8 v11332 = (i8)(intptr_t)(ws+3280);
	i2 v11333 = *(i2*)(intptr_t)v11332;
	i2 v11334 = v11333+(+144);
	i8 v11335 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11335 = v11334;

c01_0794:;

c01_0790:;

	i8 v11336 = (i8)(intptr_t)(ws+3280);
	i2 v11337 = *(i2*)(intptr_t)v11336;
	i8 v11338 = (i8)(intptr_t)(ws+1568);
	i8 v11339 = *(i8*)(intptr_t)v11338;
	*(i2*)(intptr_t)v11339 = v11337;

	i8 v11340 = (i8)(intptr_t)(ws+3264);
	i1 v11341 = *(i1*)(intptr_t)v11340;
	i8 v11342 = (i8)(intptr_t)(ws+1568);
	i8 v11343 = *(i8*)(intptr_t)v11342;
	i8 v11344 = v11343+(+2);
	*(i1*)(intptr_t)v11344 = v11341;

	i8 v11345 = (i8)(intptr_t)(ws+3272);
	i8 v11346 = *(i8*)(intptr_t)v11345;
	*(i8*)(intptr_t)(ws+3384) = v11346;
	i8 v11347 = (i8)(intptr_t)(ws+1568);
	i8 v11348 = *(i8*)(intptr_t)v11347;
	i8 v11349 = v11348+(+8);
	*(i8*)(intptr_t)(ws+3392) = v11349;
	i8 v11350 = (i8)(intptr_t)(f307_CopyMinor);

	((void(*)(void))(intptr_t)v11350)();

	i8 v11351 = (i8)(intptr_t)(ws+3192);
	i1 v11352 = *(i1*)(intptr_t)v11351;
	i1 v11353 = (i1)+0;
	if ((s1)v11352<(s1)v11353) goto c01_0799; else goto c01_0798;

c01_0798:;

	i8 v11354 = (i8)(intptr_t)(ws+3192);
	i1 v11355 = *(i1*)(intptr_t)v11354;
	i1 v11356 = v11355+(-1);
	i8 v11357 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11357 = v11356;

c01_0799:;

c01_0795:;

	goto c01_0777;

c01_078a:;

	i8 v11358 = (i8)(intptr_t)(ws+3280);
	i2 v11359 = *(i2*)(intptr_t)v11358;
	i2 v11360 = (i2)+454;
	if (v11359==v11360) goto c01_079c; else goto c01_079d;

c01_079c:;

	i8 v11361 = (i8)(intptr_t)(ws+1568);
	i8 v11362 = *(i8*)(intptr_t)v11361;
	i8 v11363 = v11362+(-16);
	i8 v11364 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11364 = v11363;

	i8 v11365 = (i8)(intptr_t)(f443_yy_accept);

	((void(*)(void))(intptr_t)v11365)();

	goto c01_0777;

c01_079d:;

	i1 v11366 = (i1)+0;
	i8 v11367 = (i8)(intptr_t)(ws+3192);
	i1 v11368 = *(i1*)(intptr_t)v11367;
	if ((s1)v11366<(s1)v11368) goto c01_07a2; else goto c01_07a1;

c01_07a1:;

	i8 v11369 = (i8)(intptr_t)(ws+3264);
	i1 v11370 = *(i1*)(intptr_t)v11369;
	*(i1*)(intptr_t)(ws+3288) = v11370;
	i8 v11371 = (i8)(intptr_t)(ws+3272);
	i8 v11372 = *(i8*)(intptr_t)v11371;
	*(i8*)(intptr_t)(ws+3296) = v11372;
	i8 v11373 = (i8)(intptr_t)(f442_yy_syntax_error);

	((void(*)(void))(intptr_t)v11373)();

c01_07a2:;

c01_079e:;

	i1 v11374 = (i1)+3;
	i8 v11375 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11375 = v11374;

	i8 v11376 = (i8)(intptr_t)(ws+3264);
	i1 v11377 = *(i1*)(intptr_t)v11376;
	*(i1*)(intptr_t)(ws+3496) = v11377;
	i8 v11378 = (i8)(intptr_t)(ws+3272);
	i8 v11379 = *(i8*)(intptr_t)v11378;
	*(i8*)(intptr_t)(ws+3504) = v11379;
	i8 v11380 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(void))(intptr_t)v11380)();

	i8 v11381 = (i8)(intptr_t)(ws+3264);
	i1 v11382 = *(i1*)(intptr_t)v11381;
	i1 v11383 = (i1)+0;
	if (v11382==v11383) goto c01_07a6; else goto c01_07a7;

c01_07a6:;

	i8 v11384 = (i8)(intptr_t)(f441_yy_parse_failed);

	((void(*)(void))(intptr_t)v11384)();

	i1 v11385 = (i1)-1;
	i8 v11386 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11386 = v11385;

c01_07a7:;

c01_07a3:;

	goto c01_0777;

c01_0782:;

	i8 v11387 = (i8)(intptr_t)(ws+1568);
	i8 v11388 = *(i8*)(intptr_t)v11387;
	i8 v11389 = (i8)(intptr_t)(ws+1576);
	if (v11388==v11389) goto c01_07ab; else goto c01_07ac;

c01_07ab:;

	goto c01_0777;

c01_07ac:;

c01_07a8:;

	goto c01_0776;

c01_0777:;

}
	void f37_GetFreeMemory(void);
	void f16_print_i16(void);
const i1 c01_s0194[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(void);

// PrintFreeMemory workspace at ws+3264 length ws+8
void f447_PrintFreeMemory(void) {

	i8 v11390 = (i8)(intptr_t)(f37_GetFreeMemory);

	((void(*)(void))(intptr_t)v11390)();

	i8 v11391 = *(i8*)(intptr_t)(ws+3272);
	i8 v11392 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v11392 = v11391;

	i8 v11393 = (i8)(intptr_t)(ws+3264);
	i8 v11394 = *(i8*)(intptr_t)v11393;
	i1 v11395 = (i1)+10;
	i8 v11396 = ((i8)v11394)>>v11395;
	i2 v11397 = v11396;
	*(i2*)(intptr_t)(ws+3656) = v11397;
	i8 v11398 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(void))(intptr_t)v11398)();

	i8 v11399 = (i8)(intptr_t)c01_s0194;
	*(i8*)(intptr_t)(ws+3696) = v11399;
	i8 v11400 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v11400)();

}
const i1 c01_s0195[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x66,0x65,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(void);
	void f5_ExitWithError(void);

// SyntaxError workspace at ws+3280 length ws+0
void f448_SyntaxError(void) {

	i8 v11401 = (i8)(intptr_t)c01_s0195;
	*(i8*)(intptr_t)(ws+3696) = v11401;
	i8 v11402 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v11402)();

	i8 v11403 = (i8)(intptr_t)(f5_ExitWithError);

	((void(*)(void))(intptr_t)v11403)();

}
	void f23_ArgvInit(void);
	void f24_ArgvNext(void);
	void f76_LexerAddIncludePath(void);
	void f448_SyntaxError(void);
	void f448_SyntaxError(void);
	void f448_SyntaxError(void);

// ParseArguments workspace at ws+3264 length ws+16
void f449_ParseArguments(void) {

	i8 v11404 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v11404)();

c01_07ad:;

	i8 v11405 = (i8)(intptr_t)(f24_ArgvNext);

	((void(*)(void))(intptr_t)v11405)();

	i8 v11406 = *(i8*)(intptr_t)(ws+3280);
	i8 v11407 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v11407 = v11406;

	i8 v11408 = (i8)(intptr_t)(ws+3264);
	i8 v11409 = *(i8*)(intptr_t)v11408;
	i8 v11410 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11410 = v11409;

	i8 v11411 = (i8)(intptr_t)(ws+3272);
	i8 v11412 = *(i8*)(intptr_t)v11411;
	i8 v11413 = (i8)+0;
	if (v11412==v11413) goto c01_07b2; else goto c01_07b3;

c01_07b2:;

	goto c01_07ae;

c01_07b3:;

c01_07af:;

	i8 v11414 = (i8)(intptr_t)(ws+3272);
	i8 v11415 = *(i8*)(intptr_t)v11414;
	i1 v11416 = *(i1*)(intptr_t)v11415;
	i1 v11417 = (i1)+45;
	if (v11416==v11417) goto c01_07b7; else goto c01_07b8;

c01_07b7:;

	i8 v11418 = (i8)(intptr_t)(ws+3272);
	i8 v11419 = *(i8*)(intptr_t)v11418;
	i8 v11420 = v11419+(+1);
	i8 v11421 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11421 = v11420;

	i8 v11422 = (i8)(intptr_t)(ws+3272);
	i8 v11423 = *(i8*)(intptr_t)v11422;
	i1 v11424 = *(i1*)(intptr_t)v11423;
	i1 v11425 = (i1)+73;
	if (v11424==v11425) goto c01_07bc; else goto c01_07bd;

c01_07bc:;

	i8 v11426 = (i8)(intptr_t)(ws+3272);
	i8 v11427 = *(i8*)(intptr_t)v11426;
	i8 v11428 = v11427+(+1);
	i8 v11429 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11429 = v11428;

	i8 v11430 = (i8)(intptr_t)(ws+3272);
	i8 v11431 = *(i8*)(intptr_t)v11430;
	*(i8*)(intptr_t)(ws+3280) = v11431;
	i8 v11432 = (i8)(intptr_t)(f76_LexerAddIncludePath);

	((void(*)(void))(intptr_t)v11432)();

	goto c01_07b9;

c01_07bd:;

	i8 v11433 = (i8)(intptr_t)(f448_SyntaxError);

	((void(*)(void))(intptr_t)v11433)();

c01_07b9:;

	goto c01_07b4;

c01_07b8:;

	i8 v11434 = (i8)(intptr_t)(ws+24);
	i8 v11435 = *(i8*)(intptr_t)v11434;
	i8 v11436 = (i8)+0;
	if (v11435==v11436) goto c01_07c1; else goto c01_07c2;

c01_07c1:;

	i8 v11437 = (i8)(intptr_t)(ws+3272);
	i8 v11438 = *(i8*)(intptr_t)v11437;
	i8 v11439 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v11439 = v11438;

	goto c01_07be;

c01_07c2:;

	i8 v11440 = (i8)(intptr_t)(ws+32);
	i8 v11441 = *(i8*)(intptr_t)v11440;
	i8 v11442 = (i8)+0;
	if (v11441==v11442) goto c01_07c5; else goto c01_07c6;

c01_07c5:;

	i8 v11443 = (i8)(intptr_t)(ws+3272);
	i8 v11444 = *(i8*)(intptr_t)v11443;
	i8 v11445 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v11445 = v11444;

	goto c01_07be;

c01_07c6:;

	i8 v11446 = (i8)(intptr_t)(f448_SyntaxError);

	((void(*)(void))(intptr_t)v11446)();

c01_07be:;

c01_07b4:;

	goto c01_07ad;

c01_07ae:;

	i8 v11447 = (i8)(intptr_t)(ws+24);
	i8 v11448 = *(i8*)(intptr_t)v11447;
	i8 v11449 = (i8)+0;
	if (v11448==v11449) goto c01_07cc; else goto c01_07ce;

c01_07ce:;

	i8 v11450 = (i8)(intptr_t)(ws+32);
	i8 v11451 = *(i8*)(intptr_t)v11450;
	i8 v11452 = (i8)+0;
	if (v11451==v11452) goto c01_07cc; else goto c01_07cd;

c01_07cc:;

	i8 v11453 = (i8)(intptr_t)(f448_SyntaxError);

	((void(*)(void))(intptr_t)v11453)();

c01_07cd:;

c01_07c7:;

}
const i1 c01_s0196[] = { 0x43,0x4f,0x57,0x46,0x45,0x3a,0x20,0 };
	void f11_print(void);
	void f447_PrintFreeMemory(void);
	void f449_ParseArguments(void);
const i1 c01_s0197[] = { 0 };
	void f76_LexerAddIncludePath(void);
	void f80_LexerIncludeFile(void);
	void f265_CreateMainSubroutine(void);
	void f239_ArchInitTypes(void);
	void f195_EmitterOpenfile(void);
	void f197_EmitterDeclareSubroutine(void);
	void f153_MidStartfile(void);
	void f256_Generate(void);
	void f157_MidStartsub(void);
	void f256_Generate(void);
	void f444_ParserInit(void);
	void f81_LexerReadToken(void);
	void f71_InternalStrDup(void);
	void f71_InternalStrDup(void);
	void f446_ParserFeedToken(void);
	void f445_ParserDeinit(void);
	void f103_MidEndsub(void);
	void f256_Generate(void);
	void f266_ReportWorkspaces(void);
	void f152_MidEndfile(void);
	void f256_Generate(void);
	void f196_EmitterClosefile(void);
const i1 c01_s0198[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(void);
	void f447_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3264
void f2___main(void) {


	
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

	i2 v950 = (i2)+1;
	i8 v951 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v951 = v950;

	i2 v952 = (i2)+1;
	i8 v953 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v953 = v952;

	i8 v954 = (i8)+0;
	i8 v955 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v955 = v954;

	i8 v956 = (i8)(intptr_t)(ws+96);
	i8 v957 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v957 = v956;




	i8 v1082 = (i8)+0;
	i8 v1083 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1083 = v1082;



	i8 v1115 = (i8)+0;
	i8 v1116 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1116 = v1115;




	i8 v1202 = (i8)+0;
	i8 v1203 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1203 = v1202;

	i8 v1204 = (i8)+0;
	i8 v1205 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1205 = v1204;

	i1 v1206 = (i1)+0;
	i8 v1207 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1207 = v1206;

	i1 v1208 = (i1)+0;
	i8 v1209 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1209 = v1208;








	i1 v1257 = (i1)+0;
	i8 v1258 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1258 = v1257;








































































	i8 v3305 = (i8)+0;
	i8 v3306 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3306 = v3305;


































































































	i1 v5554 = (i1)+0;
	i8 v5555 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5555 = v5554;






































































	i8 v11454 = (i8)(intptr_t)c01_s0196;
	*(i8*)(intptr_t)(ws+3696) = v11454;
	i8 v11455 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v11455)();

	i8 v11456 = (i8)(intptr_t)(f447_PrintFreeMemory);

	((void(*)(void))(intptr_t)v11456)();

	i8 v11457 = (i8)(intptr_t)(f449_ParseArguments);

	((void(*)(void))(intptr_t)v11457)();

	i8 v11458 = (i8)(intptr_t)c01_s0197;
	*(i8*)(intptr_t)(ws+3280) = v11458;
	i8 v11459 = (i8)(intptr_t)(f76_LexerAddIncludePath);

	((void(*)(void))(intptr_t)v11459)();

	i8 v11460 = (i8)(intptr_t)(ws+24);
	i8 v11461 = *(i8*)(intptr_t)v11460;
	*(i8*)(intptr_t)(ws+3288) = v11461;
	i8 v11462 = (i8)(intptr_t)(f80_LexerIncludeFile);

	((void(*)(void))(intptr_t)v11462)();

	i8 v11463 = (i8)(intptr_t)(f265_CreateMainSubroutine);

	((void(*)(void))(intptr_t)v11463)();

	i8 v11464 = (i8)(intptr_t)(f239_ArchInitTypes);

	((void(*)(void))(intptr_t)v11464)();

	i8 v11465 = (i8)(intptr_t)(ws+32);
	i8 v11466 = *(i8*)(intptr_t)v11465;
	*(i8*)(intptr_t)(ws+3264) = v11466;
	i8 v11467 = (i8)(intptr_t)(f195_EmitterOpenfile);

	((void(*)(void))(intptr_t)v11467)();

	i8 v11468 = (i8)(intptr_t)(ws+40);
	i8 v11469 = *(i8*)(intptr_t)v11468;
	*(i8*)(intptr_t)(ws+3416) = v11469;
	i8 v11470 = (i8)(intptr_t)(f197_EmitterDeclareSubroutine);

	((void(*)(void))(intptr_t)v11470)();

	i8 v11471 = (i8)(intptr_t)(f153_MidStartfile);

	((void(*)(void))(intptr_t)v11471)();

	i8 v11472 = *(i8*)(intptr_t)(ws+3264);
	i8 v11473 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v11473 = v11472;

	i8 v11474 = (i8)(intptr_t)(ws+3200);
	i8 v11475 = *(i8*)(intptr_t)v11474;
	*(i8*)(intptr_t)(ws+3488) = v11475;
	i8 v11476 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11476)();

	i8 v11477 = (i8)(intptr_t)(ws+40);
	i8 v11478 = *(i8*)(intptr_t)v11477;
	*(i8*)(intptr_t)(ws+3408) = v11478;
	i8 v11479 = (i8)(intptr_t)(f157_MidStartsub);

	((void(*)(void))(intptr_t)v11479)();

	i8 v11480 = *(i8*)(intptr_t)(ws+3416);
	i8 v11481 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v11481 = v11480;

	i8 v11482 = (i8)(intptr_t)(ws+3208);
	i8 v11483 = *(i8*)(intptr_t)v11482;
	*(i8*)(intptr_t)(ws+3488) = v11483;
	i8 v11484 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11484)();

	i8 v11485 = (i8)(intptr_t)(f444_ParserInit);

	((void(*)(void))(intptr_t)v11485)();

c01_07cf:;

	i8 v11486 = (i8)(intptr_t)(f81_LexerReadToken);

	((void(*)(void))(intptr_t)v11486)();

	i1 v11487 = *(i1*)(intptr_t)(ws+3264);
	i8 v11488 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v11488 = v11487;

	i8 v11489 = (i8)(intptr_t)(ws+3216);
	i1 v11490 = *(i1*)(intptr_t)v11489;
	i8 v11491 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v11491 = v11490;

	i8 v11492 = (i8)(intptr_t)(ws+3217);
	i1 v11493 = *(i1*)(intptr_t)v11492;

	if (v11493 != +34) goto c01_07d2;

	i8 v11494 = (i8)(intptr_t)(ws+396);
	i4 v11495 = *(i4*)(intptr_t)v11494;
	i8 v11496 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v11496 = v11495;

	goto c01_07d1;

c01_07d2:;

	if (v11493 != +33) goto c01_07d3;

	i8 v11497 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3464) = v11497;
	i8 v11498 = (i8)(intptr_t)(f71_InternalStrDup);

	((void(*)(void))(intptr_t)v11498)();

	i8 v11499 = *(i8*)(intptr_t)(ws+3472);
	i8 v11500 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v11500 = v11499;

	i8 v11501 = (i8)(intptr_t)(ws+3232);
	i8 v11502 = *(i8*)(intptr_t)v11501;
	i8 v11503 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v11503 = v11502;

	goto c01_07d1;

c01_07d3:;

	if (v11493 != +41) goto c01_07d4;

	i8 v11504 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3464) = v11504;
	i8 v11505 = (i8)(intptr_t)(f71_InternalStrDup);

	((void(*)(void))(intptr_t)v11505)();

	i8 v11506 = *(i8*)(intptr_t)(ws+3472);
	i8 v11507 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v11507 = v11506;

	i8 v11508 = (i8)(intptr_t)(ws+3240);
	i8 v11509 = *(i8*)(intptr_t)v11508;
	i8 v11510 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v11510 = v11509;

	goto c01_07d1;

c01_07d4:;

	i4 v11511 = (i4)+0;
	i8 v11512 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v11512 = v11511;

c01_07d1:;


	i8 v11513 = (i8)(intptr_t)(ws+3217);
	i1 v11514 = *(i1*)(intptr_t)v11513;
	*(i1*)(intptr_t)(ws+3264) = v11514;
	i8 v11515 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)(ws+3272) = v11515;
	i8 v11516 = (i8)(intptr_t)(f446_ParserFeedToken);

	((void(*)(void))(intptr_t)v11516)();

	i8 v11517 = (i8)(intptr_t)(ws+3217);
	i1 v11518 = *(i1*)(intptr_t)v11517;
	i1 v11519 = (i1)+0;
	if (v11518==v11519) goto c01_07d8; else goto c01_07d9;

c01_07d8:;

	goto c01_07d0;

c01_07d9:;

c01_07d5:;

	goto c01_07cf;

c01_07d0:;

	i8 v11520 = (i8)(intptr_t)(f445_ParserDeinit);

	((void(*)(void))(intptr_t)v11520)();

	i8 v11521 = (i8)(intptr_t)(ws+40);
	i8 v11522 = *(i8*)(intptr_t)v11521;
	*(i8*)(intptr_t)(ws+3408) = v11522;
	i8 v11523 = (i8)(intptr_t)(f103_MidEndsub);

	((void(*)(void))(intptr_t)v11523)();

	i8 v11524 = *(i8*)(intptr_t)(ws+3416);
	i8 v11525 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v11525 = v11524;

	i8 v11526 = (i8)(intptr_t)(ws+3248);
	i8 v11527 = *(i8*)(intptr_t)v11526;
	*(i8*)(intptr_t)(ws+3488) = v11527;
	i8 v11528 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11528)();

	i8 v11529 = (i8)(intptr_t)(ws+40);
	i8 v11530 = *(i8*)(intptr_t)v11529;
	*(i8*)(intptr_t)(ws+3408) = v11530;
	i8 v11531 = (i8)(intptr_t)(f266_ReportWorkspaces);

	((void(*)(void))(intptr_t)v11531)();

	i8 v11532 = (i8)(intptr_t)(f152_MidEndfile);

	((void(*)(void))(intptr_t)v11532)();

	i8 v11533 = *(i8*)(intptr_t)(ws+3264);
	i8 v11534 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v11534 = v11533;

	i8 v11535 = (i8)(intptr_t)(ws+3256);
	i8 v11536 = *(i8*)(intptr_t)v11535;
	*(i8*)(intptr_t)(ws+3488) = v11536;
	i8 v11537 = (i8)(intptr_t)(f256_Generate);

	((void(*)(void))(intptr_t)v11537)();

	i8 v11538 = (i8)(intptr_t)(f196_EmitterClosefile);

	((void(*)(void))(intptr_t)v11538)();

	i8 v11539 = (i8)(intptr_t)c01_s0198;
	*(i8*)(intptr_t)(ws+3696) = v11539;
	i8 v11540 = (i8)(intptr_t)(f11_print);

	((void(*)(void))(intptr_t)v11540)();

	i8 v11541 = (i8)(intptr_t)(f447_PrintFreeMemory);

	((void(*)(void))(intptr_t)v11541)();

}
void cmain(void) {
	f2___main();
}
