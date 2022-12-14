#include "cowgol.h"
static i8 workspace[0x01d5];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+3672 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



}

// MemSet workspace at ws+3640 length ws+24
void f7_MemSet(void) {


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3640) 
,  
*(i1*)(intptr_t)(ws+3648) 
,  
*(i8*)(intptr_t)(ws+3656) 
); 



}

// print_char workspace at ws+3712 length ws+1
void f9_print_char(void) {


	
putchar( 
*(i1*)(intptr_t)(ws+3712) 
); 



}
	void f9_print_char(void);

// print workspace at ws+3696 length ws+9
void f12_print(void) {

c02_0001:;

	i8 v6 = (i8)(intptr_t)(ws+3696);
	i8 v7 = *(i8*)(intptr_t)v6;
	i1 v8 = *(i1*)(intptr_t)v7;
	i8 v9 = (i8)(intptr_t)(ws+3704);
	*(i1*)(intptr_t)v9 = v8;

	i8 v10 = (i8)(intptr_t)(ws+3704);
	i1 v11 = *(i1*)(intptr_t)v10;
	i1 v12 = (i1)+0;
	if (v11==v12) goto c02_0006; else goto c02_0007;

c02_0006:;

	return;

c02_0007:;

c02_0003:;

	i8 v13 = (i8)(intptr_t)(ws+3704);
	i1 v14 = *(i1*)(intptr_t)v13;
	*(i1*)(intptr_t)(ws+3712) = v14;
	i8 v15 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v15)();

	i8 v16 = (i8)(intptr_t)(ws+3696);
	i8 v17 = *(i8*)(intptr_t)v16;
	i8 v18 = v17+(+1);
	i8 v19 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v19 = v18;

	goto c02_0001;

c02_0002:;

}
	void f9_print_char(void);

// print_nl workspace at ws+3656 length ws+0
void f13_print_nl(void) {

	i1 v20 = (i1)+10;
	*(i1*)(intptr_t)(ws+3712) = v20;
	i8 v21 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v21)();

}

// UIToA workspace at ws+3696 length ws+49
void f14_UIToA(void) {

	i8 v22 = (i8)(intptr_t)(ws+3704);
	i8 v23 = *(i8*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+3712);
	*(i8*)(intptr_t)v24 = v23;

c02_0008:;

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
	if (v40<v41) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v42 = (i8)(intptr_t)(ws+3720);
	i4 v43 = *(i4*)(intptr_t)v42;
	i4 v44 = v43+(+48);
	i8 v45 = (i8)(intptr_t)(ws+3720);
	*(i4*)(intptr_t)v45 = v44;

	goto c02_000a;

c02_000e:;

	i8 v46 = (i8)(intptr_t)(ws+3720);
	i4 v47 = *(i4*)(intptr_t)v46;
	i4 v48 = v47+(+87);
	i8 v49 = (i8)(intptr_t)(ws+3720);
	*(i4*)(intptr_t)v49 = v48;

c02_000a:;

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
	if (v60==v61) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v62 = (i8)(intptr_t)(ws+3704);
	i8 v63 = *(i8*)(intptr_t)v62;
	i8 v64 = (i8)(intptr_t)(ws+3728);
	*(i8*)(intptr_t)v64 = v63;

	i8 v65 = (i8)(intptr_t)(ws+3712);
	i8 v66 = *(i8*)(intptr_t)v65;
	i8 v67 = v66+(-1);
	i8 v68 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v68 = v67;

c02_0014:;

	i8 v69 = (i8)(intptr_t)(ws+3728);
	i8 v70 = *(i8*)(intptr_t)v69;
	i8 v71 = (i8)(intptr_t)(ws+3736);
	i8 v72 = *(i8*)(intptr_t)v71;
	if (v70<v72) goto c02_0018; else goto c02_0019;

c02_0018:;

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

	goto c02_0014;

c02_0019:;

	i1 v94 = (i1)+0;
	i8 v95 = (i8)(intptr_t)(ws+3712);
	i8 v96 = *(i8*)(intptr_t)v95;
	*(i1*)(intptr_t)v96 = v94;

}
	void f14_UIToA(void);
	void f12_print(void);

// print_i32 workspace at ws+3664 length ws+32
void f16_print_i32(void) {

	i8 v123 = (i8)(intptr_t)(ws+3664);
	i4 v124 = *(i4*)(intptr_t)v123;
	*(i4*)(intptr_t)(ws+3696) = v124;
	i1 v125 = (i1)+10;
	*(i1*)(intptr_t)(ws+3700) = v125;
	i8 v126 = (i8)(intptr_t)(ws+3668);
	*(i8*)(intptr_t)(ws+3704) = v126;
	i8 v127 = (i8)(intptr_t)(f14_UIToA);

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
	i8 v134 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v134)();

}
	void f16_print_i32(void);

// print_i16 workspace at ws+3656 length ws+2
void f17_print_i16(void) {

	i8 v135 = (i8)(intptr_t)(ws+3656);
	i2 v136 = *(i2*)(intptr_t)v135;
	i4 v137 = v136;
	*(i4*)(intptr_t)(ws+3664) = v137;
	i8 v138 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(void))(intptr_t)v138)();

}
	void f16_print_i32(void);

// print_i8 workspace at ws+3496 length ws+1
void f18_print_i8(void) {

	i8 v139 = (i8)(intptr_t)(ws+3496);
	i1 v140 = *(i1*)(intptr_t)v139;
	i4 v141 = v140;
	*(i4*)(intptr_t)(ws+3664) = v141;
	i8 v142 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(void))(intptr_t)v142)();

}
	void f9_print_char(void);

// print_hex_i8 workspace at ws+3488 length ws+3
void f19_print_hex_i8(void) {

	i1 v143 = (i1)+2;
	i8 v144 = (i8)(intptr_t)(ws+3489);
	*(i1*)(intptr_t)v144 = v143;

c02_001f:;

	i8 v145 = (i8)(intptr_t)(ws+3488);
	i1 v146 = *(i1*)(intptr_t)v145;
	i1 v147 = (i1)+4;
	i1 v148 = ((i1)v146)>>v147;
	i8 v149 = (i8)(intptr_t)(ws+3490);
	*(i1*)(intptr_t)v149 = v148;

	i8 v150 = (i8)(intptr_t)(ws+3490);
	i1 v151 = *(i1*)(intptr_t)v150;
	i1 v152 = (i1)+10;
	if (v151<v152) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v153 = (i8)(intptr_t)(ws+3490);
	i1 v154 = *(i1*)(intptr_t)v153;
	i1 v155 = v154+(+48);
	i8 v156 = (i8)(intptr_t)(ws+3490);
	*(i1*)(intptr_t)v156 = v155;

	goto c02_0021;

c02_0025:;

	i8 v157 = (i8)(intptr_t)(ws+3490);
	i1 v158 = *(i1*)(intptr_t)v157;
	i1 v159 = v158+(+87);
	i8 v160 = (i8)(intptr_t)(ws+3490);
	*(i1*)(intptr_t)v160 = v159;

c02_0021:;

	i8 v161 = (i8)(intptr_t)(ws+3490);
	i1 v162 = *(i1*)(intptr_t)v161;
	*(i1*)(intptr_t)(ws+3712) = v162;
	i8 v163 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v163)();

	i8 v164 = (i8)(intptr_t)(ws+3488);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+4;
	i1 v167 = ((i1)v165)<<v166;
	i8 v168 = (i8)(intptr_t)(ws+3488);
	*(i1*)(intptr_t)v168 = v167;

	i8 v169 = (i8)(intptr_t)(ws+3489);
	i1 v170 = *(i1*)(intptr_t)v169;
	i1 v171 = v170+(-1);
	i8 v172 = (i8)(intptr_t)(ws+3489);
	*(i1*)(intptr_t)v172 = v171;

	i8 v173 = (i8)(intptr_t)(ws+3489);
	i1 v174 = *(i1*)(intptr_t)v173;
	i1 v175 = (i1)+0;
	if (v174==v175) goto c02_0029; else goto c02_002a;

c02_0029:;

	goto c02_0020;

c02_002a:;

c02_0026:;

	goto c02_001f;

c02_0020:;

}
	void f19_print_hex_i8(void);
	void f19_print_hex_i8(void);
	void f19_print_hex_i8(void);
	void f19_print_hex_i8(void);

// print_hex_i32 workspace at ws+3480 length ws+4
void f21_print_hex_i32(void) {

	i8 v186 = (i8)(intptr_t)(ws+3480);
	i4 v187 = *(i4*)(intptr_t)v186;
	i1 v188 = (i1)+24;
	i4 v189 = ((i4)v187)>>v188;
	i1 v190 = v189;
	*(i1*)(intptr_t)(ws+3488) = v190;
	i8 v191 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v191)();

	i8 v192 = (i8)(intptr_t)(ws+3480);
	i4 v193 = *(i4*)(intptr_t)v192;
	i1 v194 = (i1)+16;
	i4 v195 = ((i4)v193)>>v194;
	i1 v196 = v195;
	*(i1*)(intptr_t)(ws+3488) = v196;
	i8 v197 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v197)();

	i8 v198 = (i8)(intptr_t)(ws+3480);
	i4 v199 = *(i4*)(intptr_t)v198;
	i1 v200 = (i1)+8;
	i4 v201 = ((i4)v199)>>v200;
	i1 v202 = v201;
	*(i1*)(intptr_t)(ws+3488) = v202;
	i8 v203 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v203)();

	i8 v204 = (i8)(intptr_t)(ws+3480);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = v205;
	*(i1*)(intptr_t)(ws+3488) = v206;
	i8 v207 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v207)();

}

// ArgvInit workspace at ws+3280 length ws+0
void f24_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v315 = (i8)(intptr_t)(ws+16);
	i8 v316 = *(i8*)(intptr_t)v315;
	i8 v317 = v316+(+8);
	i8 v318 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v318 = v317;

}

// ArgvNext workspace at ws+3280 length ws+8
void f25_ArgvNext(void) {

	i8 v319 = (i8)(intptr_t)(ws+16);
	i8 v320 = *(i8*)(intptr_t)v319;
	i8 v321 = (i8)+0;
	if (v320==v321) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v322 = (i8)+0;
	i8 v323 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v323 = v322;

	return;

c02_0053:;

c02_004f:;

	i8 v324 = (i8)(intptr_t)(ws+16);
	i8 v325 = *(i8*)(intptr_t)v324;
	i8 v326 = *(i8*)(intptr_t)v325;
	i8 v327 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v327 = v326;

	i8 v328 = (i8)(intptr_t)(ws+3280);
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

// StrCmp workspace at ws+3560 length ws+17
void f26_StrCmp(void) {

c02_0059:;

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
	if (v346==v347) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v348 = (i8)(intptr_t)(ws+3560);
	i8 v349 = *(i8*)(intptr_t)v348;
	i1 v350 = *(i1*)(intptr_t)v349;
	i1 v351 = (i1)+0;
	if (v350==v351) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

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

	goto c02_0059;

c02_005a:;

}

// ToLower workspace at ws+3312 length ws+2
void f27_ToLower(void) {

	i8 v360 = (i8)(intptr_t)(ws+3312);
	i1 v361 = *(i1*)(intptr_t)v360;
	i1 v362 = (i1)+65;
	if (v361<v362) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v363 = (i1)+90;
	i8 v364 = (i8)(intptr_t)(ws+3312);
	i1 v365 = *(i1*)(intptr_t)v364;
	if (v363<v365) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v366 = (i8)(intptr_t)(ws+3312);
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = v367|(+32);
	i8 v369 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v369 = v368;

	goto c02_0063;

c02_0069:;

	i8 v370 = (i8)(intptr_t)(ws+3312);
	i1 v371 = *(i1*)(intptr_t)v370;
	i8 v372 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v372 = v371;

c02_0063:;

}

// StrLen workspace at ws+3584 length ws+25
void f29_StrLen(void) {

	i8 v406 = (i8)(intptr_t)(ws+3584);
	i8 v407 = *(i8*)(intptr_t)v406;
	i8 v408 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v408 = v407;

c02_0075:;

	i8 v409 = (i8)(intptr_t)(ws+3600);
	i8 v410 = *(i8*)(intptr_t)v409;
	i1 v411 = *(i1*)(intptr_t)v410;
	i8 v412 = (i8)(intptr_t)(ws+3608);
	*(i1*)(intptr_t)v412 = v411;

	i8 v413 = (i8)(intptr_t)(ws+3608);
	i1 v414 = *(i1*)(intptr_t)v413;
	i1 v415 = (i1)+0;
	if (v414==v415) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v416 = (i8)(intptr_t)(ws+3600);
	i8 v417 = *(i8*)(intptr_t)v416;
	i8 v418 = v417+(+1);
	i8 v419 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v419 = v418;

	goto c02_0075;

c02_0076:;

	i8 v420 = (i8)(intptr_t)(ws+3600);
	i8 v421 = *(i8*)(intptr_t)v420;
	i8 v422 = (i8)(intptr_t)(ws+3584);
	i8 v423 = *(i8*)(intptr_t)v422;
	i8 v424 = v421-v423;
	i8 v425 = (i8)(intptr_t)(ws+3592);
	*(i8*)(intptr_t)v425 = v424;

}

// MemCopy workspace at ws+3576 length ws+24
void f31_MemCopy(void) {

c02_0083:;

	i8 v445 = (i8)(intptr_t)(ws+3584);
	i8 v446 = *(i8*)(intptr_t)v445;
	i8 v447 = (i8)+0;
	if (v446==v447) goto c02_0088; else goto c02_0087;

c02_0087:;

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

	goto c02_0083;

c02_0088:;

}

// RawAlloc workspace at ws+3672 length ws+16
void f32_RawAlloc(void) {


	
*(i8*)(intptr_t)(ws+3680) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3672) 
); 



}

// Free workspace at ws+3680 length ws+8
void f34_Free(void) {


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3680) 
); 



}

// GetFreeMemory workspace at ws+3272 length ws+8
void f38_GetFreeMemory(void) {

	i8 v479 = (i8)+0;
	i8 v480 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v480 = v479;

}

// _fcb_init workspace at ws+3440 length ws+8
void f41__fcb_init(void) {

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
void f42__fcb_advance(void) {

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
	void f39_FCBRawRead(void);
	void f42__fcb_advance(void);

// _fcb_fillbuffer workspace at ws+3352 length ws+18
void f43__fcb_fillbuffer(void) {

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
	i8 v521 = (i8)(intptr_t)(f39_FCBRawRead);

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
	if (v535==v536) goto c02_0092; else goto c02_0091;

c02_0091:;

	return;

c02_0092:;

c02_008e:;

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
	if (v553==v554) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v555 = (i8)(intptr_t)(ws+3352);
	i8 v556 = *(i8*)(intptr_t)v555;
	i8 v557 = v556+(+12);
	i1 v558 = *(i1*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+3352);
	i8 v561 = *(i8*)(intptr_t)v560;
	*(i8*)(intptr_t)(ws+3640) = v561;
	i8 v562 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v562)();

c02_0097:;

c02_0093:;

}
	void f40_FCBRawWrite(void);

// FCBFlush workspace at ws+3640 length ws+12
void f44_FCBFlush(void) {

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
	if (v572==v573) goto c02_009c; else goto c02_009b;

c02_009b:;

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
	i8 v582 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(void))(intptr_t)v582)();

	i8 v583 = (i8)(intptr_t)(ws+3640);
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
	void f44_FCBFlush(void);
	void f42__fcb_advance(void);

// _fcb_flushbuffer workspace at ws+3624 length ws+9
void f45__fcb_flushbuffer(void) {

	i8 v612 = (i8)(intptr_t)(ws+3624);
	i8 v613 = *(i8*)(intptr_t)v612;
	*(i8*)(intptr_t)(ws+3640) = v613;
	i8 v614 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v614)();

	i8 v615 = (i8)(intptr_t)(ws+3624);
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
	i8 v632 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v632)();

}
	void f44_FCBFlush(void);
	void f43__fcb_fillbuffer(void);
	void f42__fcb_advance(void);

// FCBGetChar workspace at ws+3336 length ws+13
void f46_FCBGetChar(void) {

	i8 v633 = (i8)(intptr_t)(ws+3336);
	i8 v634 = *(i8*)(intptr_t)v633;
	i8 v635 = v634+(+524);
	i1 v636 = *(i1*)(intptr_t)v635;
	i1 v637 = v636&(+4);
	i1 v638 = (i1)+0;
	if (v637==v638) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v639 = (i8)(intptr_t)(ws+3336);
	i8 v640 = *(i8*)(intptr_t)v639;
	*(i8*)(intptr_t)(ws+3640) = v640;
	i8 v641 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v641)();

c02_00ab:;

c02_00a7:;

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
	if (v648==v652) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v653 = (i8)(intptr_t)(ws+3336);
	i8 v654 = *(i8*)(intptr_t)v653;
	*(i8*)(intptr_t)(ws+3352) = v654;
	i8 v655 = (i8)(intptr_t)(f43__fcb_fillbuffer);

	((void(*)(void))(intptr_t)v655)();

	i1 v656 = *(i1*)(intptr_t)(ws+3360);
	i8 v657 = (i8)(intptr_t)(ws+3348);
	*(i1*)(intptr_t)v657 = v656;

	i8 v658 = (i8)(intptr_t)(ws+3348);
	i1 v659 = *(i1*)(intptr_t)v658;
	i8 v660 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v660 = v659;

	goto c02_00ac;

c02_00b0:;

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
	i8 v672 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v672)();

c02_00ac:;

}
	void f44_FCBFlush(void);
	void f45__fcb_flushbuffer(void);
	void f42__fcb_advance(void);

// FCBPutChar workspace at ws+3608 length ws+12
void f47_FCBPutChar(void) {

	i8 v673 = (i8)(intptr_t)(ws+3608);
	i8 v674 = *(i8*)(intptr_t)v673;
	i8 v675 = v674+(+524);
	i1 v676 = *(i1*)(intptr_t)v675;
	i1 v677 = v676&(+2);
	i1 v678 = (i1)+0;
	if (v677==v678) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v679 = (i8)(intptr_t)(ws+3608);
	i8 v680 = *(i8*)(intptr_t)v679;
	*(i8*)(intptr_t)(ws+3640) = v680;
	i8 v681 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v681)();

c02_00b5:;

c02_00b1:;

	i8 v682 = (i8)(intptr_t)(ws+3608);
	i8 v683 = *(i8*)(intptr_t)v682;
	i8 v684 = v683+(+10);
	i2 v685 = *(i2*)(intptr_t)v684;
	i8 v686 = (i8)(intptr_t)(ws+3618);
	*(i2*)(intptr_t)v686 = v685;

	i8 v687 = (i8)(intptr_t)(ws+3618);
	i2 v688 = *(i2*)(intptr_t)v687;
	i2 v689 = (i2)+512;
	if (v688==v689) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v690 = (i8)(intptr_t)(ws+3608);
	i8 v691 = *(i8*)(intptr_t)v690;
	*(i8*)(intptr_t)(ws+3624) = v691;
	i8 v692 = (i8)(intptr_t)(ws+3616);
	i1 v693 = *(i1*)(intptr_t)v692;
	*(i1*)(intptr_t)(ws+3632) = v693;
	i8 v694 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(void))(intptr_t)v694)();

	goto c02_00b6;

c02_00ba:;

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
	i8 v706 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v706)();

c02_00b6:;

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
void f48_FCBPos(void) {

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
	void f44_FCBFlush(void);

// FCBSeek workspace at ws+3384 length ws+16
void f50_FCBSeek(void) {

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
	if (v748==v749) goto c02_00c4; else goto c02_00c3;

c02_00c3:;

	i8 v750 = (i8)(intptr_t)(ws+3396);
	i4 v751 = *(i4*)(intptr_t)v750;
	i8 v752 = (i8)(intptr_t)(ws+3384);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+8);
	i2 v755 = *(i2*)(intptr_t)v754;
	i4 v756 = v755;
	if (v751<v756) goto c02_00c8; else goto c02_00c9;

c02_00c8:;

	i8 v757 = (i8)(intptr_t)(ws+3396);
	i4 v758 = *(i4*)(intptr_t)v757;
	i2 v759 = v758;
	i8 v760 = (i8)(intptr_t)(ws+3384);
	i8 v761 = *(i8*)(intptr_t)v760;
	i8 v762 = v761+(+10);
	*(i2*)(intptr_t)v762 = v759;

	return;

c02_00c9:;

c02_00c5:;

	goto c02_00c0;

c02_00c4:;

	i8 v763 = (i8)(intptr_t)(ws+3384);
	i8 v764 = *(i8*)(intptr_t)v763;
	i8 v765 = v764+(+524);
	i1 v766 = *(i1*)(intptr_t)v765;
	i1 v767 = v766&(+4);
	i1 v768 = (i1)+0;
	if (v767==v768) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i8 v769 = (i8)(intptr_t)(ws+3384);
	i8 v770 = *(i8*)(intptr_t)v769;
	i8 v771 = v770+(+10);
	i2 v772 = *(i2*)(intptr_t)v771;
	i4 v773 = v772;
	i8 v774 = (i8)(intptr_t)(ws+3396);
	i4 v775 = *(i4*)(intptr_t)v774;
	if (v773<v775) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v776 = (i8)(intptr_t)(ws+3396);
	i4 v777 = *(i4*)(intptr_t)v776;
	i2 v778 = v777;
	i8 v779 = (i8)(intptr_t)(ws+3384);
	i8 v780 = *(i8*)(intptr_t)v779;
	i8 v781 = v780+(+10);
	*(i2*)(intptr_t)v781 = v778;

	return;

c02_00d2:;

c02_00ce:;

c02_00cd:;

c02_00c0:;

	i8 v782 = (i8)(intptr_t)(ws+3384);
	i8 v783 = *(i8*)(intptr_t)v782;
	*(i8*)(intptr_t)(ws+3640) = v783;
	i8 v784 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v784)();

	i8 v785 = (i8)(intptr_t)(ws+3392);
	i4 v786 = *(i4*)(intptr_t)v785;
	i8 v787 = (i8)(intptr_t)(ws+3384);
	i8 v788 = *(i8*)(intptr_t)v787;
	i8 v789 = v788+(+4);
	*(i4*)(intptr_t)v789 = v786;

}

// FCBRawRead workspace at ws+3376 length ws+36
void f39_FCBRawRead(void) {

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
	if (v799==v800) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

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

	goto c02_00d3;

c02_00d7:;

	i8 v811 = (i8)(intptr_t)(ws+3408);
	i4 v812 = *(i4*)(intptr_t)v811;
	i2 v813 = (s2)(s4)v812;
	i8 v814 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v814 = v813;

c02_00d3:;

}

// FCBRawWrite workspace at ws+3656 length ws+36
void f40_FCBRawWrite(void) {

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
	if (v824==v825) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v826 = (i8)(intptr_t)(ws+3656);
	i8 v827 = *(i8*)(intptr_t)v826;
	i8 v828 = v827+(+524);
	i1 v829 = *(i1*)(intptr_t)v828;
	i1 v830 = v829|(+1);
	i8 v831 = (i8)(intptr_t)(ws+3656);
	i8 v832 = *(i8*)(intptr_t)v831;
	i8 v833 = v832+(+524);
	*(i1*)(intptr_t)v833 = v830;

c02_00dc:;

c02_00d8:;

}
	void f41__fcb_init(void);

// fcb_i_open workspace at ws+3408 length ws+28
void f51_fcb_i_open(void) {

	i8 v834 = (i8)(intptr_t)(ws+3408);
	i8 v835 = *(i8*)(intptr_t)v834;
	*(i8*)(intptr_t)(ws+3440) = v835;
	i8 v836 = (i8)(intptr_t)(f41__fcb_init);

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
	if ((s4)v842<(s4)v843) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+3428) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v844 = (i1)+0;
	i8 v845 = (i8)(intptr_t)(ws+3428);
	*(i1*)(intptr_t)v845 = v844;

c02_00dd:;

}
	void f51_fcb_i_open(void);

// FCBOpenIn workspace at ws+3384 length ws+18
void f52_FCBOpenIn(void) {

	i8 v846 = (i8)(intptr_t)(ws+3384);
	i8 v847 = *(i8*)(intptr_t)v846;
	*(i8*)(intptr_t)(ws+3408) = v847;
	i8 v848 = (i8)(intptr_t)(ws+3392);
	i8 v849 = *(i8*)(intptr_t)v848;
	*(i8*)(intptr_t)(ws+3416) = v849;
	i4 v850 = (i4)+0;
	*(i4*)(intptr_t)(ws+3424) = v850;
	i8 v851 = (i8)(intptr_t)(f51_fcb_i_open);

	((void(*)(void))(intptr_t)v851)();

	i1 v852 = *(i1*)(intptr_t)(ws+3428);
	i8 v853 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v853 = v852;

	i8 v854 = (i8)(intptr_t)(ws+3401);
	i1 v855 = *(i1*)(intptr_t)v854;
	i8 v856 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v856 = v855;

}
	void f51_fcb_i_open(void);

// FCBOpenOut workspace at ws+3280 length ws+18
void f54_FCBOpenOut(void) {

	i8 v868 = (i8)(intptr_t)(ws+3280);
	i8 v869 = *(i8*)(intptr_t)v868;
	*(i8*)(intptr_t)(ws+3408) = v869;
	i8 v870 = (i8)(intptr_t)(ws+3288);
	i8 v871 = *(i8*)(intptr_t)v870;
	*(i8*)(intptr_t)(ws+3416) = v871;
	i4 v872 = (i4)+578;
	*(i4*)(intptr_t)(ws+3424) = v872;
	i8 v873 = (i8)(intptr_t)(f51_fcb_i_open);

	((void(*)(void))(intptr_t)v873)();

	i1 v874 = *(i1*)(intptr_t)(ws+3428);
	i8 v875 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v875 = v874;

	i8 v876 = (i8)(intptr_t)(ws+3297);
	i1 v877 = *(i1*)(intptr_t)v876;
	i8 v878 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v878 = v877;

}
	void f44_FCBFlush(void);

// FCBClose workspace at ws+3384 length ws+16
void f55_FCBClose(void) {

	i8 v879 = (i8)(intptr_t)(ws+3384);
	i8 v880 = *(i8*)(intptr_t)v879;
	*(i8*)(intptr_t)(ws+3640) = v880;
	i8 v881 = (i8)(intptr_t)(f44_FCBFlush);

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
	void f29_StrLen(void);
	void f69_InternalAlloc(void);
	void f31_MemCopy(void);

// StrDupBraced workspace at ws+3528 length ws+48
void f70_StrDupBraced(void) {

	i8 v958 = (i8)(intptr_t)(ws+3528);
	i8 v959 = *(i8*)(intptr_t)v958;
	*(i8*)(intptr_t)(ws+3584) = v959;
	i8 v960 = (i8)(intptr_t)(f29_StrLen);

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
	i8 v969 = (i8)(intptr_t)(f69_InternalAlloc);

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
	i8 v991 = (i8)(intptr_t)(f31_MemCopy);

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
	void f29_StrLen(void);
	void f69_InternalAlloc(void);
	void f31_MemCopy(void);

// StrDupArrayed workspace at ws+3448 length ws+56
void f71_StrDupArrayed(void) {

	i8 v1008 = (i8)(intptr_t)(ws+3448);
	i8 v1009 = *(i8*)(intptr_t)v1008;
	*(i8*)(intptr_t)(ws+3584) = v1009;
	i8 v1010 = (i8)(intptr_t)(f29_StrLen);

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
	i8 v1019 = (i8)(intptr_t)(f69_InternalAlloc);

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
	i8 v1034 = (i8)(intptr_t)(f31_MemCopy);

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
	void f29_StrLen(void);
	void f69_InternalAlloc(void);
	void f31_MemCopy(void);

// InternalStrDup workspace at ws+3464 length ws+40
void f72_InternalStrDup(void) {

	i8 v1058 = (i8)(intptr_t)(ws+3464);
	i8 v1059 = *(i8*)(intptr_t)v1058;
	*(i8*)(intptr_t)(ws+3584) = v1059;
	i8 v1060 = (i8)(intptr_t)(f29_StrLen);

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
	i8 v1069 = (i8)(intptr_t)(f69_InternalAlloc);

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
	i8 v1081 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v1081)();

}
	void f7_MemSet(void);
	void f69_InternalAlloc(void);

// AllocNewSymbol workspace at ws+3568 length ws+16
void f64_AllocNewSymbol(void) {

	i8 v1084 = (i8)(intptr_t)(ws+232);
	i8 v1085 = *(i8*)(intptr_t)v1084;
	i8 v1086 = (i8)+0;
	if (v1085==v1086) goto c02_00f9; else goto c02_00f8;

c02_00f8:;

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
	i8 v1099 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(void))(intptr_t)v1099)();

	goto c02_00f5;

c02_00f9:;

	i8 v1100 = (i8)+33;
	*(i8*)(intptr_t)(ws+3640) = v1100;
	i8 v1101 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v1101)();

	i8 v1102 = *(i8*)(intptr_t)(ws+3648);
	i8 v1103 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v1103 = v1102;

	i8 v1104 = (i8)(intptr_t)(ws+3576);
	i8 v1105 = *(i8*)(intptr_t)v1104;
	i8 v1106 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1106 = v1105;

c02_00f5:;

}

// FreeSymbol workspace at ws+3464 length ws+8
void f65_FreeSymbol(void) {

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
	void f7_MemSet(void);
	void f69_InternalAlloc(void);

// AllocNewType workspace at ws+3528 length ws+16
void f66_AllocNewType(void) {

	i8 v1117 = (i8)(intptr_t)(ws+240);
	i8 v1118 = *(i8*)(intptr_t)v1117;
	i8 v1119 = (i8)+0;
	if (v1118==v1119) goto c02_00fe; else goto c02_00fd;

c02_00fd:;

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
	i8 v1132 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(void))(intptr_t)v1132)();

	goto c02_00fa;

c02_00fe:;

	i8 v1133 = (i8)+54;
	*(i8*)(intptr_t)(ws+3640) = v1133;
	i8 v1134 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v1134)();

	i8 v1135 = *(i8*)(intptr_t)(ws+3648);
	i8 v1136 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v1136 = v1135;

	i8 v1137 = (i8)(intptr_t)(ws+3536);
	i8 v1138 = *(i8*)(intptr_t)v1137;
	i8 v1139 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v1139 = v1138;

c02_00fa:;

}

// FreeType workspace at ws+3464 length ws+8
void f67_FreeType(void) {

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
	void f32_RawAlloc(void);
	void f34_Free(void);
	void f34_Free(void);
	void f73_PurgeAllFreeNodes(void);
	void f32_RawAlloc(void);
const i1 c02_s0001[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// InternalAlloc workspace at ws+3640 length ws+32
void f69_InternalAlloc(void) {

	i8 v1148 = (i8)(intptr_t)(ws+3640);
	i8 v1149 = *(i8*)(intptr_t)v1148;
	*(i8*)(intptr_t)(ws+3672) = v1149;
	i8 v1150 = (i8)(intptr_t)(f32_RawAlloc);

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
	if (v1157==v1158) goto c02_0102; else goto c02_0103;

c02_0102:;

c02_0104:;

	i8 v1159 = (i8)(intptr_t)(ws+232);
	i8 v1160 = *(i8*)(intptr_t)v1159;
	i8 v1161 = (i8)+0;
	if (v1160==v1161) goto c02_0109; else goto c02_0108;

c02_0108:;

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
	i8 v1172 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v1172)();

	goto c02_0104;

c02_0109:;

c02_010a:;

	i8 v1173 = (i8)(intptr_t)(ws+240);
	i8 v1174 = *(i8*)(intptr_t)v1173;
	i8 v1175 = (i8)+0;
	if (v1174==v1175) goto c02_010f; else goto c02_010e;

c02_010e:;

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
	i8 v1186 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v1186)();

	goto c02_010a;

c02_010f:;

	i8 v1187 = (i8)(intptr_t)(f73_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v1187)();

	i8 v1188 = (i8)(intptr_t)(ws+3640);
	i8 v1189 = *(i8*)(intptr_t)v1188;
	*(i8*)(intptr_t)(ws+3672) = v1189;
	i8 v1190 = (i8)(intptr_t)(f32_RawAlloc);

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
	if (v1197==v1198) goto c02_0113; else goto c02_0114;

c02_0113:;

	i8 v1199 = (i8)(intptr_t)c02_s0001;
	*(i8*)(intptr_t)(ws+3696) = v1199;
	i8 v1200 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1200)();

	i8 v1201 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1201)();

c02_0114:;

c02_0110:;

c02_0103:;

c02_00ff:;

}
static data f3___main_s0115[] = {








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
const i1 c02_s0002[] = { 0x40,0x61,0x6c,0x69,0x61,0x73,0 };
const i1 c02_s0003[] = { 0x40,0x61,0x73,0x6d,0 };
const i1 c02_s0004[] = { 0x40,0x61,0x74,0 };
const i1 c02_s0005[] = { 0x40,0x62,0x79,0x74,0x65,0x73,0x6f,0x66,0 };
const i1 c02_s0006[] = { 0x40,0x64,0x65,0x63,0x6c,0 };
const i1 c02_s0007[] = { 0x40,0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c02_s0008[] = { 0x40,0x69,0x6e,0x64,0x65,0x78,0x6f,0x66,0 };
const i1 c02_s0009[] = { 0x40,0x69,0x6d,0x70,0x6c,0 };
const i1 c02_s000a[] = { 0x40,0x73,0x69,0x7a,0x65,0x6f,0x66,0 };
const i1 c02_s000b[] = { 0x40,0x6e,0x65,0x78,0x74,0 };
const i1 c02_s000c[] = { 0x40,0x70,0x72,0x65,0x76,0 };
const i1 c02_s000d[] = { 0x61,0x6e,0x64,0 };
const i1 c02_s000e[] = { 0x61,0x73,0 };
const i1 c02_s000f[] = { 0x62,0x72,0x65,0x61,0x6b,0 };
const i1 c02_s0010[] = { 0x63,0x61,0x73,0x65,0 };
const i1 c02_s0011[] = { 0x63,0x6f,0x6e,0x73,0x74,0 };
const i1 c02_s0012[] = { 0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0 };
const i1 c02_s0013[] = { 0x65,0x6c,0x73,0x65,0 };
const i1 c02_s0014[] = { 0x65,0x6c,0x73,0x65,0x69,0x66,0 };
const i1 c02_s0015[] = { 0x65,0x6e,0x64,0 };
const i1 c02_s0016[] = { 0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c02_s0017[] = { 0x69,0x66,0 };
const i1 c02_s0018[] = { 0x69,0x73,0 };
const i1 c02_s0019[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0 };
const i1 c02_s001a[] = { 0x69,0x6e,0x74,0 };
const i1 c02_s001b[] = { 0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
const i1 c02_s001c[] = { 0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0 };
const i1 c02_s001d[] = { 0x6c,0x6f,0x6f,0x70,0 };
const i1 c02_s001e[] = { 0x6e,0x6f,0x74,0 };
const i1 c02_s001f[] = { 0x6f,0x72,0 };
const i1 c02_s0020[] = { 0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c02_s0021[] = { 0x72,0x65,0x74,0x75,0x72,0x6e,0 };
const i1 c02_s0022[] = { 0x73,0x75,0x62,0 };
const i1 c02_s0023[] = { 0x74,0x68,0x65,0x6e,0 };
const i1 c02_s0024[] = { 0x74,0x79,0x70,0x65,0x64,0x65,0x66,0 };
const i1 c02_s0025[] = { 0x76,0x61,0x72,0 };
const i1 c02_s0026[] = { 0x77,0x68,0x65,0x6e,0 };
const i1 c02_s0027[] = { 0x77,0x68,0x69,0x6c,0x65,0 };
const i1 c02_s0028[] = { 0x70,0x61,0x73,0x73,0x74,0x6f,0 };
static data f3___main_s0116[] = {

	{ .ptr = (void*)c02_s0002 },

	{ .ptr = (void*)c02_s0003 },

	{ .ptr = (void*)c02_s0004 },

	{ .ptr = (void*)c02_s0005 },

	{ .ptr = (void*)c02_s0006 },

	{ .ptr = (void*)c02_s0007 },

	{ .ptr = (void*)c02_s0008 },

	{ .ptr = (void*)c02_s0009 },

	{ .ptr = (void*)c02_s000a },

	{ .ptr = (void*)c02_s000b },

	{ .ptr = (void*)c02_s000c },

	{ .ptr = (void*)c02_s000d },

	{ .ptr = (void*)c02_s000e },

	{ .ptr = (void*)c02_s000f },

	{ .ptr = (void*)c02_s0010 },

	{ .ptr = (void*)c02_s0011 },

	{ .ptr = (void*)c02_s0012 },

	{ .ptr = (void*)c02_s0013 },

	{ .ptr = (void*)c02_s0014 },

	{ .ptr = (void*)c02_s0015 },

	{ .ptr = (void*)c02_s0016 },

	{ .ptr = (void*)c02_s0017 },

	{ .ptr = (void*)c02_s0018 },

	{ .ptr = (void*)c02_s0019 },

	{ .ptr = (void*)c02_s001a },

	{ .ptr = (void*)c02_s001b },

	{ .ptr = (void*)c02_s001c },

	{ .ptr = (void*)c02_s001d },

	{ .ptr = (void*)c02_s001e },

	{ .ptr = (void*)c02_s001f },

	{ .ptr = (void*)c02_s0020 },

	{ .ptr = (void*)c02_s0021 },

	{ .ptr = (void*)c02_s0022 },

	{ .ptr = (void*)c02_s0023 },

	{ .ptr = (void*)c02_s0024 },

	{ .ptr = (void*)c02_s0025 },

	{ .ptr = (void*)c02_s0026 },

	{ .ptr = (void*)c02_s0027 },

	{ .ptr = (void*)c02_s0028 },

};
static data f3___main_s0117[] = {








	{ .i1 = { 0x44,0x01,0x23,0x24,0x2b,0x0b,0x3f,0x2a}},








	{ .i1 = { 0x28,0x3d,0x3e,0x2f,0x3b,0x03,0x41,0x07}},








	{ .i1 = { 0x40,0x09,0x25,0x0a,0x0b,0x0c,0x42,0xff}},








	{ .i1 = { 0x26,0x2c,0x45,0x0d,0x0f,0x30,0x14,0x15}},








	{ .i1 = { 0x19,0x1a,0x27,0x1c,0x43,0x1d,0x2d}},
};
const i1 c02_s0029[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(void);
const i1 c02_s002a[] = { 0x3c,0x65,0x6f,0x66,0x3e,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s002b[] = { 0x3a,0x20,0 };
	void f12_print(void);
	void f17_print_i16(void);
const i1 c02_s002c[] = { 0x3a,0x20,0 };
	void f12_print(void);

// StartError workspace at ws+3656 length ws+0
void f74_StartError(void) {

	i8 v1210 = (i8)(intptr_t)c02_s0029;
	*(i8*)(intptr_t)(ws+3696) = v1210;
	i8 v1211 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1211)();

	i8 v1212 = (i8)(intptr_t)(ws+256);
	i8 v1213 = *(i8*)(intptr_t)v1212;
	i8 v1214 = (i8)+0;
	if (v1213==v1214) goto c02_011b; else goto c02_011c;

c02_011b:;

	i8 v1215 = (i8)(intptr_t)c02_s002a;
	*(i8*)(intptr_t)(ws+3696) = v1215;
	i8 v1216 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1216)();

	goto c02_0118;

c02_011c:;

	i8 v1217 = (i8)(intptr_t)(ws+256);
	i8 v1218 = *(i8*)(intptr_t)v1217;
	i8 v1219 = v1218+(+8);
	i8 v1220 = *(i8*)(intptr_t)v1219;
	*(i8*)(intptr_t)(ws+3696) = v1220;
	i8 v1221 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1221)();

	i8 v1222 = (i8)(intptr_t)c02_s002b;
	*(i8*)(intptr_t)(ws+3696) = v1222;
	i8 v1223 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1223)();

	i8 v1224 = (i8)(intptr_t)(ws+256);
	i8 v1225 = *(i8*)(intptr_t)v1224;
	i8 v1226 = v1225+(+16);
	i2 v1227 = *(i2*)(intptr_t)v1226;
	*(i2*)(intptr_t)(ws+3656) = v1227;
	i8 v1228 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(void))(intptr_t)v1228)();

c02_0118:;

	i8 v1229 = (i8)(intptr_t)c02_s002c;
	*(i8*)(intptr_t)(ws+3696) = v1229;
	i8 v1230 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1230)();

}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+3656 length ws+0
void f75_EndError(void) {

	i8 v1231 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1231)();

	i8 v1232 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1232)();

}
	void f74_StartError(void);
	void f12_print(void);
	void f75_EndError(void);

// SimpleError workspace at ws+3648 length ws+8
void f76_SimpleError(void) {

	i8 v1233 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1233)();

	i8 v1234 = (i8)(intptr_t)(ws+3648);
	i8 v1235 = *(i8*)(intptr_t)v1234;
	*(i8*)(intptr_t)(ws+3696) = v1235;
	i8 v1236 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1236)();

	i8 v1237 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1237)();

}
	void f69_InternalAlloc(void);

// LexerAddIncludePath workspace at ws+3280 length ws+24
void f77_LexerAddIncludePath(void) {

	i8 v1238 = (i8)+16;
	*(i8*)(intptr_t)(ws+3640) = v1238;
	i8 v1239 = (i8)(intptr_t)(f69_InternalAlloc);

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
const i1 c02_s002d[] = { 0x20,0x20,0 };
	void f12_print(void);

// LexerPrintSpaces workspace at ws+3368 length ws+1
void f78_LexerPrintSpaces(void) {

	i8 v1259 = (i8)(intptr_t)(ws+925);
	i1 v1260 = *(i1*)(intptr_t)v1259;
	i8 v1261 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v1261 = v1260;

c02_011d:;

	i8 v1262 = (i8)(intptr_t)(ws+3368);
	i1 v1263 = *(i1*)(intptr_t)v1262;
	i1 v1264 = (i1)+0;
	if (v1263==v1264) goto c02_0122; else goto c02_0121;

c02_0121:;

	i8 v1265 = (i8)(intptr_t)c02_s002d;
	*(i8*)(intptr_t)(ws+3696) = v1265;
	i8 v1266 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1266)();

	i8 v1267 = (i8)(intptr_t)(ws+3368);
	i1 v1268 = *(i1*)(intptr_t)v1267;
	i1 v1269 = v1268+(-1);
	i8 v1270 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v1270 = v1269;

	goto c02_011d;

c02_0122:;

}
	void f52_FCBOpenIn(void);
	void f50_FCBSeek(void);

// lexer_i_open workspace at ws+3368 length ws+10
void f79_lexer_i_open(void) {

	i8 v1271 = (i8)(intptr_t)(ws+400);
	*(i8*)(intptr_t)(ws+3384) = v1271;
	i8 v1272 = (i8)(intptr_t)(ws+3368);
	i8 v1273 = *(i8*)(intptr_t)v1272;
	i8 v1274 = v1273+(+8);
	i8 v1275 = *(i8*)(intptr_t)v1274;
	*(i8*)(intptr_t)(ws+3392) = v1275;
	i8 v1276 = (i8)(intptr_t)(f52_FCBOpenIn);

	((void(*)(void))(intptr_t)v1276)();

	i1 v1277 = *(i1*)(intptr_t)(ws+3400);
	i8 v1278 = (i8)(intptr_t)(ws+3377);
	*(i1*)(intptr_t)v1278 = v1277;

	i8 v1279 = (i8)(intptr_t)(ws+3377);
	i1 v1280 = *(i1*)(intptr_t)v1279;
	i1 v1281 = (i1)+0;
	if (v1280==v1281) goto c02_0126; else goto c02_0127;

c02_0126:;

	i8 v1282 = (i8)(intptr_t)(ws+400);
	*(i8*)(intptr_t)(ws+3384) = v1282;
	i8 v1283 = (i8)(intptr_t)(ws+3368);
	i8 v1284 = *(i8*)(intptr_t)v1283;
	i8 v1285 = v1284+(+20);
	i4 v1286 = *(i4*)(intptr_t)v1285;
	*(i4*)(intptr_t)(ws+3392) = v1286;
	i8 v1287 = (i8)(intptr_t)(f50_FCBSeek);

	((void(*)(void))(intptr_t)v1287)();

	i1 v1288 = (i1)+0;
	i8 v1289 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v1289 = v1288;

	goto c02_0123;

c02_0127:;

	i1 v1290 = (i1)+1;
	i8 v1291 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v1291 = v1290;

c02_0123:;

}
	void f48_FCBPos(void);
	void f55_FCBClose(void);

// lexer_i_close workspace at ws+3368 length ws+14
void f80_lexer_i_close(void) {

	i8 v1292 = (i8)(intptr_t)(ws+400);
	*(i8*)(intptr_t)(ws+3384) = v1292;
	i8 v1293 = (i8)(intptr_t)(f48_FCBPos);

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
	i8 v1302 = (i8)(intptr_t)(f55_FCBClose);

	((void(*)(void))(intptr_t)v1302)();

	i1 v1303 = *(i1*)(intptr_t)(ws+3392);
	i8 v1304 = (i8)(intptr_t)(ws+3380);
	*(i1*)(intptr_t)v1304 = v1303;

	i8 v1305 = (i8)(intptr_t)(ws+3380);
	i1 v1306 = *(i1*)(intptr_t)v1305;
	i8 v1307 = (i8)(intptr_t)(ws+3381);
	*(i1*)(intptr_t)v1307 = v1306;

}
	void f69_InternalAlloc(void);
	void f80_lexer_i_close(void);
	void f29_StrLen(void);
	void f29_StrLen(void);
	void f69_InternalAlloc(void);
	void f31_MemCopy(void);
	void f31_MemCopy(void);
	void f79_lexer_i_open(void);
	void f78_LexerPrintSpaces(void);
const i1 c02_s002e[] = { 0x3e,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f34_Free(void);
	void f74_StartError(void);
const i1 c02_s002f[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0030[] = { 0x27,0 };
	void f12_print(void);
	void f75_EndError(void);

// LexerIncludeFile workspace at ws+3288 length ws+73
void f81_LexerIncludeFile(void) {

	i8 v1308 = (i8)+24;
	*(i8*)(intptr_t)(ws+3640) = v1308;
	i8 v1309 = (i8)(intptr_t)(f69_InternalAlloc);

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
	if (v1324==v1325) goto c02_012c; else goto c02_012b;

c02_012b:;

	i8 v1326 = (i8)(intptr_t)(ws+256);
	i8 v1327 = *(i8*)(intptr_t)v1326;
	*(i8*)(intptr_t)(ws+3368) = v1327;
	i8 v1328 = (i8)(intptr_t)(f80_lexer_i_close);

	((void(*)(void))(intptr_t)v1328)();

c02_012c:;

c02_0128:;

	i8 v1329 = (i8)(intptr_t)(ws+248);
	i8 v1330 = *(i8*)(intptr_t)v1329;
	i8 v1331 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v1331 = v1330;

	i8 v1332 = (i8)(intptr_t)(ws+3288);
	i8 v1333 = *(i8*)(intptr_t)v1332;
	*(i8*)(intptr_t)(ws+3584) = v1333;
	i8 v1334 = (i8)(intptr_t)(f29_StrLen);

	((void(*)(void))(intptr_t)v1334)();

	i8 v1335 = *(i8*)(intptr_t)(ws+3592);
	i8 v1336 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v1336 = v1335;

	i8 v1337 = (i8)(intptr_t)(ws+3320);
	i8 v1338 = *(i8*)(intptr_t)v1337;
	i8 v1339 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v1339 = v1338;

c02_012d:;

	i8 v1340 = (i8)(intptr_t)(ws+3312);
	i8 v1341 = *(i8*)(intptr_t)v1340;
	i8 v1342 = (i8)+0;
	if (v1341==v1342) goto c02_0132; else goto c02_0131;

c02_0131:;

	i8 v1343 = (i8)(intptr_t)(ws+3312);
	i8 v1344 = *(i8*)(intptr_t)v1343;
	i8 v1345 = v1344+(+8);
	i8 v1346 = *(i8*)(intptr_t)v1345;
	*(i8*)(intptr_t)(ws+3584) = v1346;
	i8 v1347 = (i8)(intptr_t)(f29_StrLen);

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
	i8 v1359 = (i8)(intptr_t)(f69_InternalAlloc);

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
	i8 v1377 = (i8)(intptr_t)(f31_MemCopy);

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
	i8 v1390 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v1390)();

	i8 v1391 = (i8)(intptr_t)(ws+3304);
	i8 v1392 = *(i8*)(intptr_t)v1391;
	*(i8*)(intptr_t)(ws+3368) = v1392;
	i8 v1393 = (i8)(intptr_t)(f79_lexer_i_open);

	((void(*)(void))(intptr_t)v1393)();

	i1 v1394 = *(i1*)(intptr_t)(ws+3376);
	i8 v1395 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v1395 = v1394;

	i8 v1396 = (i8)(intptr_t)(ws+3360);
	i1 v1397 = *(i1*)(intptr_t)v1396;
	i1 v1398 = (i1)+0;
	if (v1397==v1398) goto c02_0136; else goto c02_0137;

c02_0136:;

	i8 v1399 = (i8)(intptr_t)(ws+925);
	i1 v1400 = *(i1*)(intptr_t)v1399;
	i1 v1401 = v1400+(+1);
	i8 v1402 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1402 = v1401;

	i8 v1403 = (i8)(intptr_t)(f78_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1403)();

	i8 v1404 = (i8)(intptr_t)c02_s002e;
	*(i8*)(intptr_t)(ws+3696) = v1404;
	i8 v1405 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1405)();

	i8 v1406 = (i8)(intptr_t)(ws+3304);
	i8 v1407 = *(i8*)(intptr_t)v1406;
	i8 v1408 = v1407+(+8);
	i8 v1409 = *(i8*)(intptr_t)v1408;
	*(i8*)(intptr_t)(ws+3696) = v1409;
	i8 v1410 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1410)();

	i8 v1411 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1411)();

	i8 v1412 = (i8)(intptr_t)(ws+3304);
	i8 v1413 = *(i8*)(intptr_t)v1412;
	i8 v1414 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1414 = v1413;

	return;

c02_0137:;

c02_0133:;

	i8 v1415 = (i8)(intptr_t)(ws+3304);
	i8 v1416 = *(i8*)(intptr_t)v1415;
	i8 v1417 = v1416+(+8);
	i8 v1418 = *(i8*)(intptr_t)v1417;
	*(i8*)(intptr_t)(ws+3680) = v1418;
	i8 v1419 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v1419)();

	i8 v1420 = (i8)(intptr_t)(ws+3312);
	i8 v1421 = *(i8*)(intptr_t)v1420;
	i8 v1422 = *(i8*)(intptr_t)v1421;
	i8 v1423 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v1423 = v1422;

	goto c02_012d;

c02_0132:;

	i8 v1424 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1424)();

	i8 v1425 = (i8)(intptr_t)c02_s002f;
	*(i8*)(intptr_t)(ws+3696) = v1425;
	i8 v1426 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1426)();

	i8 v1427 = (i8)(intptr_t)(ws+3288);
	i8 v1428 = *(i8*)(intptr_t)v1427;
	*(i8*)(intptr_t)(ws+3696) = v1428;
	i8 v1429 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1429)();

	i8 v1430 = (i8)(intptr_t)c02_s0030;
	*(i8*)(intptr_t)(ws+3696) = v1430;
	i8 v1431 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1431)();

	i8 v1432 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1432)();

}

// lexer_i_ctype workspace at ws+3312 length ws+3
void f83_lexer_i_ctype(void) {

	i8 v1433 = (i8)(intptr_t)(ws+3312);
	i1 v1434 = *(i1*)(intptr_t)v1433;
	i1 v1435 = (i1)+33;
	if (v1434<v1435) goto c02_013e; else goto c02_013f;

c02_013f:;

	i1 v1436 = (i1)+127;
	i8 v1437 = (i8)(intptr_t)(ws+3312);
	i1 v1438 = *(i1*)(intptr_t)v1437;
	if (v1436<v1438) goto c02_013e; else goto c02_013d;

c02_013d:;

	i8 v1439 = (i8)(intptr_t)((i1*)f3___main_s0115);
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
	if (v1449==v1450) goto c02_0144; else goto c02_0143;

c02_0143:;

	i8 v1451 = (i8)(intptr_t)(ws+3313);
	i1 v1452 = *(i1*)(intptr_t)v1451;
	i1 v1453 = v1452&(-129);
	i8 v1454 = (i8)(intptr_t)(ws+3314);
	*(i1*)(intptr_t)v1454 = v1453;

	i1 v1455 = (i1)+128;
	i8 v1456 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v1456 = v1455;

c02_0144:;

c02_0140:;

	goto c02_0138;

c02_013e:;

	i1 v1457 = (i1)+0;
	i8 v1458 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v1458 = v1457;

	i1 v1459 = (i1)+0;
	i8 v1460 = (i8)(intptr_t)(ws+3314);
	*(i1*)(intptr_t)v1460 = v1459;

c02_0138:;

}
	void f46_FCBGetChar(void);
	void f80_lexer_i_close(void);
	void f34_Free(void);
	void f78_LexerPrintSpaces(void);
const i1 c02_s0031[] = { 0x3c,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f79_lexer_i_open(void);
const i1 c02_s0032[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };
	void f76_SimpleError(void);

// lexer_i_getchar workspace at ws+3312 length ws+18
void f84_lexer_i_getchar(void) {

	i8 v1461 = (i8)(intptr_t)(ws+264);
	i1 v1462 = *(i1*)(intptr_t)v1461;
	i1 v1463 = (i1)+0;
	if (v1462==v1463) goto c02_0149; else goto c02_0148;

c02_0148:;

	i8 v1464 = (i8)(intptr_t)(ws+264);
	i1 v1465 = *(i1*)(intptr_t)v1464;
	i8 v1466 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1466 = v1465;

	i1 v1467 = (i1)+0;
	i8 v1468 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1468 = v1467;

	return;

c02_0149:;

c02_0145:;

c02_014a:;

	i8 v1469 = (i8)(intptr_t)(ws+256);
	i8 v1470 = *(i8*)(intptr_t)v1469;
	i8 v1471 = (i8)+0;
	if (v1470==v1471) goto c02_014f; else goto c02_0150;

c02_014f:;

	i1 v1472 = (i1)+0;
	i8 v1473 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1473 = v1472;

	goto c02_014b;

c02_0150:;

c02_014c:;

	i8 v1474 = (i8)(intptr_t)(ws+256);
	i8 v1475 = *(i8*)(intptr_t)v1474;
	i8 v1476 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v1476 = v1475;

	i8 v1477 = (i8)(intptr_t)(ws+400);
	*(i8*)(intptr_t)(ws+3336) = v1477;
	i8 v1478 = (i8)(intptr_t)(f46_FCBGetChar);

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
	if (v1485==v1486) goto c02_0154; else goto c02_0155;

c02_0154:;

	i1 v1487 = (i1)+0;
	i8 v1488 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1488 = v1487;

c02_0155:;

c02_0151:;

	i8 v1489 = (i8)(intptr_t)(ws+3312);
	i1 v1490 = *(i1*)(intptr_t)v1489;
	i1 v1491 = (i1)+0;
	if (v1490==v1491) goto c02_015a; else goto c02_0159;

c02_0159:;

	goto c02_014b;

c02_015a:;

c02_0156:;

	i8 v1492 = (i8)(intptr_t)(ws+3320);
	i8 v1493 = *(i8*)(intptr_t)v1492;
	i8 v1494 = *(i8*)(intptr_t)v1493;
	i8 v1495 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1495 = v1494;

	i8 v1496 = (i8)(intptr_t)(ws+3320);
	i8 v1497 = *(i8*)(intptr_t)v1496;
	*(i8*)(intptr_t)(ws+3368) = v1497;
	i8 v1498 = (i8)(intptr_t)(f80_lexer_i_close);

	((void(*)(void))(intptr_t)v1498)();

	i8 v1499 = (i8)(intptr_t)(ws+3320);
	i8 v1500 = *(i8*)(intptr_t)v1499;
	*(i8*)(intptr_t)(ws+3680) = v1500;
	i8 v1501 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v1501)();

	i8 v1502 = (i8)(intptr_t)(ws+256);
	i8 v1503 = *(i8*)(intptr_t)v1502;
	i8 v1504 = (i8)+0;
	if (v1503==v1504) goto c02_015f; else goto c02_015e;

c02_015e:;

	i8 v1505 = (i8)(intptr_t)(ws+925);
	i1 v1506 = *(i1*)(intptr_t)v1505;
	i1 v1507 = v1506+(-1);
	i8 v1508 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1508 = v1507;

	i8 v1509 = (i8)(intptr_t)(f78_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1509)();

	i8 v1510 = (i8)(intptr_t)c02_s0031;
	*(i8*)(intptr_t)(ws+3696) = v1510;
	i8 v1511 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1511)();

	i8 v1512 = (i8)(intptr_t)(ws+256);
	i8 v1513 = *(i8*)(intptr_t)v1512;
	i8 v1514 = v1513+(+8);
	i8 v1515 = *(i8*)(intptr_t)v1514;
	*(i8*)(intptr_t)(ws+3696) = v1515;
	i8 v1516 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1516)();

	i8 v1517 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1517)();

	i8 v1518 = (i8)(intptr_t)(ws+256);
	i8 v1519 = *(i8*)(intptr_t)v1518;
	*(i8*)(intptr_t)(ws+3368) = v1519;
	i8 v1520 = (i8)(intptr_t)(f79_lexer_i_open);

	((void(*)(void))(intptr_t)v1520)();

	i1 v1521 = *(i1*)(intptr_t)(ws+3376);
	i8 v1522 = (i8)(intptr_t)(ws+3329);
	*(i1*)(intptr_t)v1522 = v1521;

	i8 v1523 = (i8)(intptr_t)(ws+3329);
	i1 v1524 = *(i1*)(intptr_t)v1523;
	i1 v1525 = (i1)+0;
	if (v1524==v1525) goto c02_0164; else goto c02_0163;

c02_0163:;

	i8 v1526 = (i8)(intptr_t)c02_s0032;
	*(i8*)(intptr_t)(ws+3648) = v1526;
	i8 v1527 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v1527)();

c02_0164:;

c02_0160:;

c02_015f:;

c02_015b:;

	goto c02_014a;

c02_014b:;

}
	void f74_StartError(void);
const i1 c02_s0033[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f19_print_hex_i8(void);
	void f75_EndError(void);

// lexer_i_unparseable workspace at ws+3280 length ws+1
void f85_lexer_i_unparseable(void) {

	i8 v1528 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1528)();

	i8 v1529 = (i8)(intptr_t)c02_s0033;
	*(i8*)(intptr_t)(ws+3696) = v1529;
	i8 v1530 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1530)();

	i8 v1531 = (i8)(intptr_t)(ws+3280);
	i1 v1532 = *(i1*)(intptr_t)v1531;
	*(i1*)(intptr_t)(ws+3488) = v1532;
	i8 v1533 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v1533)();

	i8 v1534 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1534)();

}
	void f84_lexer_i_getchar(void);

// lexer_i_skipwhitespace workspace at ws+3296 length ws+2
void f86_lexer_i_skipwhitespace(void) {

c02_0165:;

	i8 v1535 = (i8)(intptr_t)(f84_lexer_i_getchar);

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

	if (v1542 != +32) goto c02_0168;

	goto c02_0167;

c02_0168:;

	if (v1542 != +13) goto c02_0169;

	goto c02_0167;

c02_0169:;

	if (v1542 != +10) goto c02_016a;

	i8 v1543 = (i8)(intptr_t)(ws+256);
	i8 v1544 = *(i8*)(intptr_t)v1543;
	i8 v1545 = v1544+(+16);
	i2 v1546 = *(i2*)(intptr_t)v1545;
	i2 v1547 = v1546+(+1);
	i8 v1548 = (i8)(intptr_t)(ws+256);
	i8 v1549 = *(i8*)(intptr_t)v1548;
	i8 v1550 = v1549+(+16);
	*(i2*)(intptr_t)v1550 = v1547;

	goto c02_0167;

c02_016a:;

	if (v1542 != +9) goto c02_016b;

	goto c02_0167;

c02_016b:;

	goto c02_0166;

c02_0167:;


	goto c02_0165;

c02_0166:;

	i8 v1551 = (i8)(intptr_t)(ws+3297);
	i1 v1552 = *(i1*)(intptr_t)v1551;
	i8 v1553 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1553 = v1552;

}
	void f84_lexer_i_getchar(void);
	void f83_lexer_i_ctype(void);
	void f74_StartError(void);
const i1 c02_s0034[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f12_print(void);
	void f75_EndError(void);

// lexer_i_read_identifier workspace at ws+3280 length ws+4
void f87_lexer_i_read_identifier(void) {

c02_016c:;

	i8 v1554 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	i8 v1562 = (i8)(intptr_t)(f83_lexer_i_ctype);

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
	if (v1569==v1570) goto c02_0172; else goto c02_0171;

c02_0171:;

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
	if (v1583==v1584) goto c02_0176; else goto c02_0177;

c02_0176:;

	i8 v1585 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1585)();

	i8 v1586 = (i8)(intptr_t)c02_s0034;
	*(i8*)(intptr_t)(ws+3696) = v1586;
	i8 v1587 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1587)();

	i8 v1588 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1588)();

c02_0177:;

c02_0173:;

	goto c02_016e;

c02_0172:;

	i8 v1589 = (i8)(intptr_t)(ws+3281);
	i1 v1590 = *(i1*)(intptr_t)v1589;
	i8 v1591 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1591 = v1590;

	goto c02_016d;

c02_016e:;

	goto c02_016c;

c02_016d:;

	i1 v1592 = (i1)+0;
	i8 v1593 = (i8)(intptr_t)(ws+265);
	i8 v1594 = (i8)(intptr_t)(ws+393);
	i1 v1595 = *(i1*)(intptr_t)v1594;
	i8 v1596 = v1595;
	i8 v1597 = v1593+v1596;
	*(i1*)(intptr_t)v1597 = v1592;

}
	void f26_StrCmp(void);

// lexer_i_match_keyword workspace at ws+3280 length ws+3
void f88_lexer_i_match_keyword(void) {

	i1 v1598 = (i1)+0;
	i8 v1599 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1599 = v1598;

c02_0178:;

	i8 v1600 = (i8)(intptr_t)(ws+3281);
	i1 v1601 = *(i1*)(intptr_t)v1600;
	i1 v1602 = (i1)+39;
	if (v1601==v1602) goto c02_017d; else goto c02_017c;

c02_017c:;

	i8 v1603 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3560) = v1603;
	i8 v1604 = (i8)(intptr_t)((i1*)f3___main_s0116);
	i8 v1605 = (i8)(intptr_t)(ws+3281);
	i1 v1606 = *(i1*)(intptr_t)v1605;
	i8 v1607 = v1606;
	i1 v1608 = (i1)+3;
	i8 v1609 = ((i8)v1607)<<v1608;
	i8 v1610 = v1604+v1609;
	i8 v1611 = *(i8*)(intptr_t)v1610;
	*(i8*)(intptr_t)(ws+3568) = v1611;
	i8 v1612 = (i8)(intptr_t)(f26_StrCmp);

	((void(*)(void))(intptr_t)v1612)();

	i1 v1613 = *(i1*)(intptr_t)(ws+3576);
	i8 v1614 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1614 = v1613;

	i8 v1615 = (i8)(intptr_t)(ws+3282);
	i1 v1616 = *(i1*)(intptr_t)v1615;
	i1 v1617 = (i1)+0;
	if (v1616==v1617) goto c02_0181; else goto c02_0182;

c02_0181:;

	i8 v1618 = (i8)(intptr_t)((i1*)f3___main_s0117);
	i8 v1619 = (i8)(intptr_t)(ws+3281);
	i1 v1620 = *(i1*)(intptr_t)v1619;
	i8 v1621 = v1620;
	i8 v1622 = v1618+v1621;
	i1 v1623 = *(i1*)(intptr_t)v1622;
	i8 v1624 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1624 = v1623;

	return;

c02_0182:;

c02_017e:;

	i8 v1625 = (i8)(intptr_t)(ws+3281);
	i1 v1626 = *(i1*)(intptr_t)v1625;
	i1 v1627 = v1626+(+1);
	i8 v1628 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1628 = v1627;

	goto c02_0178;

c02_017d:;

	i1 v1629 = (i1)+33;
	i8 v1630 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1630 = v1629;

}
	void f84_lexer_i_getchar(void);
	void f84_lexer_i_getchar(void);
	void f83_lexer_i_ctype(void);
	void f84_lexer_i_getchar(void);
	void f27_ToLower(void);
	void f83_lexer_i_ctype(void);
	void f74_StartError(void);
const i1 c02_s0035[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f12_print(void);
	void f75_EndError(void);

// lexer_i_read_number workspace at ws+3296 length ws+11
void f89_lexer_i_read_number(void) {

	i4 v1631 = (i4)+0;
	i8 v1632 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1632 = v1631;

	i4 v1633 = (i4)+10;
	i8 v1634 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1634 = v1633;

	i8 v1635 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1642==v1643) goto c02_0186; else goto c02_0187;

c02_0186:;

	i8 v1644 = (i8)(intptr_t)(f84_lexer_i_getchar);

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

	if (v1651 != +98) goto c02_0189;

	i4 v1652 = (i4)+2;
	i8 v1653 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1653 = v1652;

	goto c02_0188;

c02_0189:;

	if (v1651 != +111) goto c02_018a;

	i4 v1654 = (i4)+8;
	i8 v1655 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1655 = v1654;

	goto c02_0188;

c02_018a:;

	if (v1651 != +100) goto c02_018b;

	i4 v1656 = (i4)+10;
	i8 v1657 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1657 = v1656;

	goto c02_0188;

c02_018b:;

	if (v1651 != +120) goto c02_018c;

	i4 v1658 = (i4)+16;
	i8 v1659 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1659 = v1658;

	goto c02_0188;

c02_018c:;

	i8 v1660 = (i8)(intptr_t)(ws+3303);
	i1 v1661 = *(i1*)(intptr_t)v1660;
	i8 v1662 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1662 = v1661;

	i8 v1663 = (i8)(intptr_t)(ws+3303);
	i1 v1664 = *(i1*)(intptr_t)v1663;
	*(i1*)(intptr_t)(ws+3312) = v1664;
	i8 v1665 = (i8)(intptr_t)(f83_lexer_i_ctype);

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
	if (v1672==v1673) goto c02_0190; else goto c02_0191;

c02_0190:;

	return;

c02_0191:;

c02_018d:;

c02_0188:;


	goto c02_0183;

c02_0187:;

	i8 v1674 = (i8)(intptr_t)(ws+3303);
	i1 v1675 = *(i1*)(intptr_t)v1674;
	i8 v1676 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1676 = v1675;

c02_0183:;

c02_0192:;

	i8 v1677 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1677)();

	i1 v1678 = *(i1*)(intptr_t)(ws+3312);
	i8 v1679 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v1679 = v1678;

	i8 v1680 = (i8)(intptr_t)(ws+3305);
	i1 v1681 = *(i1*)(intptr_t)v1680;
	*(i1*)(intptr_t)(ws+3312) = v1681;
	i8 v1682 = (i8)(intptr_t)(f27_ToLower);

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
	if (v1689==v1690) goto c02_0197; else goto c02_0198;

c02_0197:;

	goto c02_0192;

c02_0198:;

c02_0194:;

	i8 v1691 = (i8)(intptr_t)(ws+3303);
	i1 v1692 = *(i1*)(intptr_t)v1691;
	*(i1*)(intptr_t)(ws+3312) = v1692;
	i8 v1693 = (i8)(intptr_t)(f83_lexer_i_ctype);

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
	if (v1700==v1701) goto c02_019c; else goto c02_019d;

c02_019c:;

	i8 v1702 = (i8)(intptr_t)(ws+3303);
	i1 v1703 = *(i1*)(intptr_t)v1702;
	i8 v1704 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1704 = v1703;

	goto c02_0193;

c02_019d:;

c02_0199:;

	i8 v1705 = (i8)(intptr_t)(ws+3303);
	i1 v1706 = *(i1*)(intptr_t)v1705;
	i1 v1707 = (i1)+97;
	if (v1706<v1707) goto c02_01a2; else goto c02_01a1;

c02_01a1:;

	i8 v1708 = (i8)(intptr_t)(ws+3303);
	i1 v1709 = *(i1*)(intptr_t)v1708;
	i1 v1710 = v1709+(-87);
	i8 v1711 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1711 = v1710;

	goto c02_019e;

c02_01a2:;

	i8 v1712 = (i8)(intptr_t)(ws+3303);
	i1 v1713 = *(i1*)(intptr_t)v1712;
	i1 v1714 = v1713+(-48);
	i8 v1715 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1715 = v1714;

c02_019e:;

	i8 v1716 = (i8)(intptr_t)(ws+3303);
	i1 v1717 = *(i1*)(intptr_t)v1716;
	i8 v1718 = (i8)(intptr_t)(ws+3296);
	i4 v1719 = *(i4*)(intptr_t)v1718;
	i1 v1720 = (s1)(s4)v1719;
	if (v1717<v1720) goto c02_01a7; else goto c02_01a6;

c02_01a6:;

	i8 v1721 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1721)();

	i8 v1722 = (i8)(intptr_t)c02_s0035;
	*(i8*)(intptr_t)(ws+3696) = v1722;
	i8 v1723 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1723)();

	i8 v1724 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1724)();

c02_01a7:;

c02_01a3:;

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

	goto c02_0192;

c02_0193:;

}
	void f74_StartError(void);
const i1 c02_s0036[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);

// lexer_i_malformed workspace at ws+3312 length ws+8
void f90_lexer_i_malformed(void) {

	i8 v1735 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1735)();

	i8 v1736 = (i8)(intptr_t)c02_s0036;
	*(i8*)(intptr_t)(ws+3696) = v1736;
	i8 v1737 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1737)();

	i8 v1738 = (i8)(intptr_t)(ws+3312);
	i8 v1739 = *(i8*)(intptr_t)v1738;
	*(i8*)(intptr_t)(ws+3696) = v1739;
	i8 v1740 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1740)();

	i8 v1741 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1741)();

}
	void f84_lexer_i_getchar(void);
const i1 c02_s0037[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };
	void f90_lexer_i_malformed(void);

// lexer_i_get_escaped workspace at ws+3304 length ws+2
void f91_lexer_i_get_escaped(void) {

	i8 v1742 = (i8)(intptr_t)(f84_lexer_i_getchar);

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

	if (v1749 != +110) goto c02_01a9;

	i1 v1750 = (i1)+10;
	i8 v1751 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1751 = v1750;

	goto c02_01a8;

c02_01a9:;

	if (v1749 != +114) goto c02_01aa;

	i1 v1752 = (i1)+13;
	i8 v1753 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1753 = v1752;

	goto c02_01a8;

c02_01aa:;

	if (v1749 != +116) goto c02_01ab;

	i1 v1754 = (i1)+9;
	i8 v1755 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1755 = v1754;

	goto c02_01a8;

c02_01ab:;

	if (v1749 != +92) goto c02_01ac;

	i1 v1756 = (i1)+92;
	i8 v1757 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1757 = v1756;

	goto c02_01a8;

c02_01ac:;

	if (v1749 != +39) goto c02_01ad;

	i1 v1758 = (i1)+39;
	i8 v1759 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1759 = v1758;

	goto c02_01a8;

c02_01ad:;

	if (v1749 != +34) goto c02_01ae;

	i1 v1760 = (i1)+34;
	i8 v1761 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1761 = v1760;

	goto c02_01a8;

c02_01ae:;

	if (v1749 != +48) goto c02_01af;

	i1 v1762 = (i1)+0;
	i8 v1763 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1763 = v1762;

	goto c02_01a8;

c02_01af:;

	i8 v1764 = (i8)(intptr_t)c02_s0037;
	*(i8*)(intptr_t)(ws+3312) = v1764;
	i8 v1765 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1765)();

c02_01a8:;


}
	void f84_lexer_i_getchar(void);
const i1 c02_s0038[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f90_lexer_i_malformed(void);
	void f91_lexer_i_get_escaped(void);
	void f74_StartError(void);
const i1 c02_s0039[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f12_print(void);
	void f75_EndError(void);

// lexer_i_read_string workspace at ws+3296 length ws+3
void f92_lexer_i_read_string(void) {

	i1 v1766 = (i1)+0;
	i8 v1767 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1767 = v1766;

c02_01b0:;

	i8 v1768 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1775<v1776) goto c02_01b5; else goto c02_01b6;

c02_01b5:;

	i8 v1777 = (i8)(intptr_t)c02_s0038;
	*(i8*)(intptr_t)(ws+3312) = v1777;
	i8 v1778 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1778)();

c02_01b6:;

c02_01b2:;

	i8 v1779 = (i8)(intptr_t)(ws+3297);
	i1 v1780 = *(i1*)(intptr_t)v1779;

	if (v1780 != +34) goto c02_01b8;

	goto c02_01b1;

c02_01b8:;

	if (v1780 != +92) goto c02_01b9;

	i8 v1781 = (i8)(intptr_t)(f91_lexer_i_get_escaped);

	((void(*)(void))(intptr_t)v1781)();

	i1 v1782 = *(i1*)(intptr_t)(ws+3304);
	i8 v1783 = (i8)(intptr_t)(ws+3298);
	*(i1*)(intptr_t)v1783 = v1782;

	i8 v1784 = (i8)(intptr_t)(ws+3298);
	i1 v1785 = *(i1*)(intptr_t)v1784;
	i8 v1786 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v1786 = v1785;

c02_01b9:;

c02_01b7:;


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
	if (v1799==v1800) goto c02_01bd; else goto c02_01be;

c02_01bd:;

	i8 v1801 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1801)();

	i8 v1802 = (i8)(intptr_t)c02_s0039;
	*(i8*)(intptr_t)(ws+3696) = v1802;
	i8 v1803 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1803)();

	i8 v1804 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1804)();

c02_01be:;

c02_01ba:;

	goto c02_01b0;

c02_01b1:;

	i1 v1805 = (i1)+0;
	i8 v1806 = (i8)(intptr_t)(ws+265);
	i8 v1807 = (i8)(intptr_t)(ws+393);
	i1 v1808 = *(i1*)(intptr_t)v1807;
	i8 v1809 = v1808;
	i8 v1810 = v1806+v1809;
	*(i1*)(intptr_t)v1810 = v1805;

}
const i1 c02_s003a[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f90_lexer_i_malformed(void);

// malformed workspace at ws+3288 length ws+0
void f94_malformed(void) {

	i8 v1811 = (i8)(intptr_t)c02_s003a;
	*(i8*)(intptr_t)(ws+3312) = v1811;
	i8 v1812 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1812)();

}
	void f84_lexer_i_getchar(void);
	void f94_malformed(void);
	void f91_lexer_i_get_escaped(void);
	void f84_lexer_i_getchar(void);
	void f94_malformed(void);

// lexer_i_read_char workspace at ws+3280 length ws+4
void f93_lexer_i_read_char(void) {


	i8 v1813 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1820<v1821) goto c02_01c4; else goto c02_01c6;

c02_01c6:;

	i8 v1822 = (i8)(intptr_t)(ws+3281);
	i1 v1823 = *(i1*)(intptr_t)v1822;
	i1 v1824 = (i1)+39;
	if (v1823==v1824) goto c02_01c4; else goto c02_01c5;

c02_01c4:;

	i8 v1825 = (i8)(intptr_t)(f94_malformed);

	((void(*)(void))(intptr_t)v1825)();

c02_01c5:;

c02_01bf:;

	i8 v1826 = (i8)(intptr_t)(ws+3281);
	i1 v1827 = *(i1*)(intptr_t)v1826;
	i1 v1828 = (i1)+92;
	if (v1827==v1828) goto c02_01ca; else goto c02_01cb;

c02_01ca:;

	i8 v1829 = (i8)(intptr_t)(f91_lexer_i_get_escaped);

	((void(*)(void))(intptr_t)v1829)();

	i1 v1830 = *(i1*)(intptr_t)(ws+3304);
	i8 v1831 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1831 = v1830;

	i8 v1832 = (i8)(intptr_t)(ws+3282);
	i1 v1833 = *(i1*)(intptr_t)v1832;
	i8 v1834 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1834 = v1833;

c02_01cb:;

c02_01c7:;

	i8 v1835 = (i8)(intptr_t)(ws+3281);
	i1 v1836 = *(i1*)(intptr_t)v1835;
	i4 v1837 = v1836;
	i8 v1838 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1838 = v1837;

	i8 v1839 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1846==v1847) goto c02_01d0; else goto c02_01cf;

c02_01cf:;

	i8 v1848 = (i8)(intptr_t)(f94_malformed);

	((void(*)(void))(intptr_t)v1848)();

c02_01d0:;

c02_01cc:;

}
const i1 c02_s003b[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f90_lexer_i_malformed(void);

// malformed_include workspace at ws+3288 length ws+0
void f96_malformed_include(void) {

	i8 v1849 = (i8)(intptr_t)c02_s003b;
	*(i8*)(intptr_t)(ws+3312) = v1849;
	i8 v1850 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1850)();

}
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(void);
	void f96_malformed_include(void);
	void f92_lexer_i_read_string(void);
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(void);
	void f96_malformed_include(void);
	void f81_LexerIncludeFile(void);

// lexer_i_include workspace at ws+3280 length ws+3
void f95_lexer_i_include(void) {


	i8 v1851 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1851)();

	i8 v1852 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1859==v1860) goto c02_01d5; else goto c02_01d4;

c02_01d4:;

	i8 v1861 = (i8)(intptr_t)(f96_malformed_include);

	((void(*)(void))(intptr_t)v1861)();

c02_01d5:;

c02_01d1:;

	i8 v1862 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1862)();

	i8 v1863 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1863)();

	i8 v1864 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1871==v1872) goto c02_01da; else goto c02_01d9;

c02_01d9:;

	i8 v1873 = (i8)(intptr_t)(f96_malformed_include);

	((void(*)(void))(intptr_t)v1873)();

c02_01da:;

c02_01d6:;

	i8 v1874 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3288) = v1874;
	i8 v1875 = (i8)(intptr_t)(f81_LexerIncludeFile);

	((void(*)(void))(intptr_t)v1875)();

}
	void f86_lexer_i_skipwhitespace(void);
	void f89_lexer_i_read_number(void);
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(void);
const i1 c02_s003c[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f90_lexer_i_malformed(void);
	void f92_lexer_i_read_string(void);
	void f34_Free(void);
	void f72_InternalStrDup(void);

// lexer_i_line_directive workspace at ws+3280 length ws+16
void f97_lexer_i_line_directive(void) {

	i8 v1876 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1876)();

	i8 v1877 = (i8)(intptr_t)(f89_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1877)();

	i8 v1878 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1878)();

	i8 v1879 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1886==v1887) goto c02_01df; else goto c02_01de;

c02_01de:;

	i8 v1888 = (i8)(intptr_t)c02_s003c;
	*(i8*)(intptr_t)(ws+3312) = v1888;
	i8 v1889 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1889)();

c02_01df:;

c02_01db:;

	i8 v1890 = (i8)(intptr_t)(f92_lexer_i_read_string);

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
	i8 v1901 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v1901)();

	i8 v1902 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3464) = v1902;
	i8 v1903 = (i8)(intptr_t)(f72_InternalStrDup);

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
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(void);
	void f87_lexer_i_read_identifier(void);
const i1 c02_s003d[] = { 0x6c,0x69,0x6e,0x65,0 };
	void f26_StrCmp(void);
	void f97_lexer_i_line_directive(void);
	void f84_lexer_i_getchar(void);
	void f84_lexer_i_getchar(void);
	void f84_lexer_i_getchar(void);
	void f84_lexer_i_getchar(void);
	void f85_lexer_i_unparseable(void);
	void f84_lexer_i_getchar(void);
	void f85_lexer_i_unparseable(void);
	void f84_lexer_i_getchar(void);
	void f92_lexer_i_read_string(void);
	void f93_lexer_i_read_char(void);
	void f83_lexer_i_ctype(void);
	void f89_lexer_i_read_number(void);
	void f87_lexer_i_read_identifier(void);
	void f88_lexer_i_match_keyword(void);
	void f85_lexer_i_unparseable(void);
	void f95_lexer_i_include(void);

// LexerReadToken workspace at ws+3264 length ws+12
void f82_LexerReadToken(void) {














c02_01e0:;

	i8 v1911 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1911)();

	i8 v1912 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1919==v1920) goto c02_01e5; else goto c02_01e6;

c02_01e5:;

	i1 v1921 = (i1)+0;
	i8 v1922 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1922 = v1921;

	i8 v1923 = (i8)(intptr_t)(f87_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1923)();

	i8 v1924 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3560) = v1924;
	i8 v1925 = (i8)(intptr_t)c02_s003d;
	*(i8*)(intptr_t)(ws+3568) = v1925;
	i8 v1926 = (i8)(intptr_t)(f26_StrCmp);

	((void(*)(void))(intptr_t)v1926)();

	i1 v1927 = *(i1*)(intptr_t)(ws+3576);
	i8 v1928 = (i8)(intptr_t)(ws+3267);
	*(i1*)(intptr_t)v1928 = v1927;

	i8 v1929 = (i8)(intptr_t)(ws+3267);
	i1 v1930 = *(i1*)(intptr_t)v1929;
	i1 v1931 = (i1)+0;
	if (v1930==v1931) goto c02_01ea; else goto c02_01eb;

c02_01ea:;

	i8 v1932 = (i8)(intptr_t)(f97_lexer_i_line_directive);

	((void(*)(void))(intptr_t)v1932)();

c02_01eb:;

c02_01e7:;

c02_01ec:;

	i8 v1933 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1940==v1941) goto c02_01f5; else goto c02_01f8;

c02_01f8:;

	i8 v1942 = (i8)(intptr_t)(ws+3266);
	i1 v1943 = *(i1*)(intptr_t)v1942;
	i1 v1944 = (i1)+13;
	if (v1943==v1944) goto c02_01f5; else goto c02_01f7;

c02_01f7:;

	i8 v1945 = (i8)(intptr_t)(ws+3266);
	i1 v1946 = *(i1*)(intptr_t)v1945;
	i1 v1947 = (i1)+0;
	if (v1946==v1947) goto c02_01f5; else goto c02_01f6;

c02_01f5:;

	i8 v1948 = (i8)(intptr_t)(ws+3266);
	i1 v1949 = *(i1*)(intptr_t)v1948;
	i8 v1950 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1950 = v1949;

	goto c02_01ed;

c02_01f6:;

c02_01ee:;

	goto c02_01ec;

c02_01ed:;

	goto c02_01e0;

c02_01e6:;

c02_01e2:;

	i8 v1951 = (i8)(intptr_t)(ws+3266);
	i1 v1952 = *(i1*)(intptr_t)v1951;

	if (v1952 != +0) goto c02_01fa;

	i1 v1953 = (i1)+0;
	i8 v1954 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1954 = v1953;

	goto c02_01f9;

c02_01fa:;

	if (v1952 != +58) goto c02_01fb;

	i8 v1955 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1962==v1963) goto c02_01ff; else goto c02_0200;

c02_01ff:;

	i1 v1964 = (i1)+2;
	i8 v1965 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1965 = v1964;

	goto c02_01fc;

c02_0200:;

	i8 v1966 = (i8)(intptr_t)(ws+3266);
	i1 v1967 = *(i1*)(intptr_t)v1966;
	i8 v1968 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1968 = v1967;

	i1 v1969 = (i1)+6;
	i8 v1970 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1970 = v1969;

c02_01fc:;

	goto c02_01f9;

c02_01fb:;

	if (v1952 != +60) goto c02_0201;

	i8 v1971 = (i8)(intptr_t)(f84_lexer_i_getchar);

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

	if (v1978 != +60) goto c02_0203;

	i1 v1979 = (i1)+57;
	i8 v1980 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1980 = v1979;

	goto c02_0202;

c02_0203:;

	if (v1978 != +61) goto c02_0204;

	i1 v1981 = (i1)+52;
	i8 v1982 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1982 = v1981;

	goto c02_0202;

c02_0204:;

	i8 v1983 = (i8)(intptr_t)(ws+3266);
	i1 v1984 = *(i1*)(intptr_t)v1983;
	i8 v1985 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1985 = v1984;

	i1 v1986 = (i1)+51;
	i8 v1987 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1987 = v1986;

c02_0202:;


	goto c02_01f9;

c02_0201:;

	if (v1952 != +61) goto c02_0205;

	i8 v1988 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v1995==v1996) goto c02_0209; else goto c02_020a;

c02_0209:;

	i1 v1997 = (i1)+55;
	i8 v1998 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1998 = v1997;

	goto c02_0206;

c02_020a:;

	i8 v1999 = (i8)(intptr_t)(ws+3266);
	i1 v2000 = *(i1*)(intptr_t)v1999;
	*(i1*)(intptr_t)(ws+3280) = v2000;
	i8 v2001 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(void))(intptr_t)v2001)();

c02_0206:;

	goto c02_01f9;

c02_0205:;

	if (v1952 != +33) goto c02_020b;

	i8 v2002 = (i8)(intptr_t)(f84_lexer_i_getchar);

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
	if (v2009==v2010) goto c02_020f; else goto c02_0210;

c02_020f:;

	i1 v2011 = (i1)+56;
	i8 v2012 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2012 = v2011;

	goto c02_020c;

c02_0210:;

	i8 v2013 = (i8)(intptr_t)(ws+3266);
	i1 v2014 = *(i1*)(intptr_t)v2013;
	*(i1*)(intptr_t)(ws+3280) = v2014;
	i8 v2015 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(void))(intptr_t)v2015)();

c02_020c:;

	goto c02_01f9;

c02_020b:;

	if (v1952 != +62) goto c02_0211;

	i8 v2016 = (i8)(intptr_t)(f84_lexer_i_getchar);

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

	if (v2023 != +62) goto c02_0213;

	i1 v2024 = (i1)+58;
	i8 v2025 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2025 = v2024;

	goto c02_0212;

c02_0213:;

	if (v2023 != +61) goto c02_0214;

	i1 v2026 = (i1)+54;
	i8 v2027 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2027 = v2026;

	goto c02_0212;

c02_0214:;

	i8 v2028 = (i8)(intptr_t)(ws+3266);
	i1 v2029 = *(i1*)(intptr_t)v2028;
	i8 v2030 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2030 = v2029;

	i1 v2031 = (i1)+53;
	i8 v2032 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2032 = v2031;

c02_0212:;


	goto c02_01f9;

c02_0211:;

	if (v1952 != +34) goto c02_0215;

	i8 v2033 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v2033)();

	i1 v2034 = (i1)+41;
	i8 v2035 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2035 = v2034;

	goto c02_01f9;

c02_0215:;

	if (v1952 != +39) goto c02_0216;

	i8 v2036 = (i8)(intptr_t)(f93_lexer_i_read_char);

	((void(*)(void))(intptr_t)v2036)();

	i1 v2037 = (i1)+34;
	i8 v2038 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2038 = v2037;

	goto c02_01f9;

c02_0216:;

	i8 v2039 = (i8)(intptr_t)(ws+3266);
	i1 v2040 = *(i1*)(intptr_t)v2039;
	*(i1*)(intptr_t)(ws+3312) = v2040;
	i8 v2041 = (i8)(intptr_t)(f83_lexer_i_ctype);

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
	if (v2048==v2049) goto c02_021b; else goto c02_021a;

c02_021a:;

	goto c02_0217;

c02_021b:;

	i8 v2050 = (i8)(intptr_t)(ws+3274);
	i1 v2051 = *(i1*)(intptr_t)v2050;
	i1 v2052 = v2051&(+1);
	i1 v2053 = (i1)+0;
	if (v2052==v2053) goto c02_021f; else goto c02_021e;

c02_021e:;

	i8 v2054 = (i8)(intptr_t)(ws+3266);
	i1 v2055 = *(i1*)(intptr_t)v2054;
	i8 v2056 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2056 = v2055;

	i8 v2057 = (i8)(intptr_t)(f89_lexer_i_read_number);

	((void(*)(void))(intptr_t)v2057)();

	i1 v2058 = (i1)+34;
	i8 v2059 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2059 = v2058;

	goto c02_0217;

c02_021f:;

	i8 v2060 = (i8)(intptr_t)(ws+3274);
	i1 v2061 = *(i1*)(intptr_t)v2060;
	i1 v2062 = v2061&(+16);
	i1 v2063 = (i1)+0;
	if (v2062==v2063) goto c02_0223; else goto c02_0222;

c02_0222:;

	i1 v2064 = (i1)+1;
	i8 v2065 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v2065 = v2064;

	i8 v2066 = (i8)(intptr_t)(ws+3266);
	i1 v2067 = *(i1*)(intptr_t)v2066;
	i8 v2068 = (i8)(intptr_t)(ws+265);
	*(i1*)(intptr_t)v2068 = v2067;

	i8 v2069 = (i8)(intptr_t)(f87_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v2069)();

	i8 v2070 = (i8)(intptr_t)(f88_lexer_i_match_keyword);

	((void(*)(void))(intptr_t)v2070)();

	i1 v2071 = *(i1*)(intptr_t)(ws+3280);
	i8 v2072 = (i8)(intptr_t)(ws+3275);
	*(i1*)(intptr_t)v2072 = v2071;

	i8 v2073 = (i8)(intptr_t)(ws+3275);
	i1 v2074 = *(i1*)(intptr_t)v2073;
	i8 v2075 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2075 = v2074;

	goto c02_0217;

c02_0223:;

	i8 v2076 = (i8)(intptr_t)(ws+3266);
	i1 v2077 = *(i1*)(intptr_t)v2076;
	*(i1*)(intptr_t)(ws+3280) = v2077;
	i8 v2078 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(void))(intptr_t)v2078)();

c02_0217:;

c02_01f9:;


	i8 v2079 = (i8)(intptr_t)(ws+3264);
	i1 v2080 = *(i1*)(intptr_t)v2079;
	i1 v2081 = (i1)+255;
	if (v2080==v2081) goto c02_0227; else goto c02_0228;

c02_0227:;

	i8 v2082 = (i8)(intptr_t)(f95_lexer_i_include);

	((void(*)(void))(intptr_t)v2082)();

	goto c02_0224;

c02_0228:;

	goto c02_01e1;

c02_0224:;

	goto c02_01e0;

c02_01e1:;

}

// CountParameters workspace at ws+3392 length ws+9
void f98_CountParameters(void) {

	i1 v2083 = (i1)+0;
	i8 v2084 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v2084 = v2083;

c02_0229:;

	i8 v2085 = (i8)(intptr_t)(ws+3392);
	i8 v2086 = *(i8*)(intptr_t)v2085;
	i8 v2087 = (i8)+0;
	if (v2086==v2087) goto c02_022e; else goto c02_022d;

c02_022d:;

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

	goto c02_0229;

c02_022e:;

}

// GetInputParameter workspace at ws+3464 length ws+24
void f99_GetInputParameter(void) {

	i8 v2098 = (i8)(intptr_t)(ws+3464);
	i8 v2099 = *(i8*)(intptr_t)v2098;
	i8 v2100 = v2099+(+80);
	i1 v2101 = *(i1*)(intptr_t)v2100;
	i1 v2102 = (i1)+0;
	if (v2101==v2102) goto c02_0233; else goto c02_0232;

c02_0232:;

	i8 v2103 = (i8)(intptr_t)(ws+3464);
	i8 v2104 = *(i8*)(intptr_t)v2103;
	i8 v2105 = v2104+(+16);
	i8 v2106 = *(i8*)(intptr_t)v2105;
	i8 v2107 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2107 = v2106;

c02_0234:;

	i8 v2108 = (i8)(intptr_t)(ws+3472);
	i1 v2109 = *(i1*)(intptr_t)v2108;
	i1 v2110 = (i1)+0;
	if (v2109==v2110) goto c02_0239; else goto c02_0238;

c02_0238:;

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

	goto c02_0234;

c02_0239:;

	goto c02_022f;

c02_0233:;

	i8 v2120 = (i8)+0;
	i8 v2121 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2121 = v2120;

c02_022f:;

}

// GetOutputParameter workspace at ws+3488 length ws+24
void f100_GetOutputParameter(void) {

	i8 v2122 = (i8)(intptr_t)(ws+3488);
	i8 v2123 = *(i8*)(intptr_t)v2122;
	i8 v2124 = v2123+(+81);
	i1 v2125 = *(i1*)(intptr_t)v2124;
	i1 v2126 = (i1)+0;
	if (v2125==v2126) goto c02_023e; else goto c02_023d;

c02_023d:;

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

c02_023f:;

	i8 v2140 = (i8)(intptr_t)(ws+3496);
	i1 v2141 = *(i1*)(intptr_t)v2140;
	i1 v2142 = (i1)+0;
	if (v2141==v2142) goto c02_0244; else goto c02_0243;

c02_0243:;

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

	goto c02_023f;

c02_0244:;

	goto c02_023a;

c02_023e:;

	i8 v2152 = (i8)+0;
	i8 v2153 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2153 = v2152;

c02_023a:;

}

// WidthToIndex workspace at ws+3592 length ws+2
void f102_WidthToIndex(void) {

	i8 v2161 = (i8)(intptr_t)(ws+3592);
	i1 v2162 = *(i1*)(intptr_t)v2161;

	if (v2162 != +4) goto c02_0246;

	i1 v2163 = (i1)+3;
	i8 v2164 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2164 = v2163;

	goto c02_0245;

c02_0246:;

	if (v2162 != +8) goto c02_0247;

	i1 v2165 = (i1)+4;
	i8 v2166 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2166 = v2165;

	goto c02_0245;

c02_0247:;

	i8 v2167 = (i8)(intptr_t)(ws+3592);
	i1 v2168 = *(i1*)(intptr_t)v2167;
	i8 v2169 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2169 = v2168;

c02_0245:;


}
	void f103_AllocateNewNode(void);

// MidAsmgroupend workspace at ws+3520 length ws+16
void f104_MidAsmgroupend(void) {

	i1 v2170 = (i1)+17;
	*(i1*)(intptr_t)(ws+3616) = v2170;
	i8 v2171 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2171)();

	i8 v2172 = *(i8*)(intptr_t)(ws+3624);
	i8 v2173 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v2173 = v2172;

	i8 v2174 = (i8)(intptr_t)(ws+3528);
	i8 v2175 = *(i8*)(intptr_t)v2174;
	i8 v2176 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2176 = v2175;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidInit workspace at ws+3480 length ws+32
void f105_MidInit(void) {

	i8 v2177 = (i8)(intptr_t)(ws+3480);
	i1 v2178 = *(i1*)(intptr_t)v2177;
	*(i1*)(intptr_t)(ws+3592) = v2178;
	i8 v2179 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2179)();

	i1 v2180 = *(i1*)(intptr_t)(ws+3593);
	i8 v2181 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2181 = v2180;

	i8 v2182 = (i8)(intptr_t)(ws+3496);
	i1 v2183 = *(i1*)(intptr_t)v2182;
	i1 v2184 = v2183+(+7);
	*(i1*)(intptr_t)(ws+3616) = v2184;
	i8 v2185 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2185)();

	i8 v2186 = *(i8*)(intptr_t)(ws+3624);
	i8 v2187 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2187 = v2186;

	i8 v2188 = (i8)(intptr_t)(ws+3504);
	i8 v2189 = *(i8*)(intptr_t)v2188;
	i8 v2190 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2190 = v2189;

	i8 v2191 = (i8)(intptr_t)(ws+3484);
	i4 v2192 = *(i4*)(intptr_t)v2191;
	i8 v2193 = (i8)(intptr_t)(ws+3488);
	i8 v2194 = *(i8*)(intptr_t)v2193;
	*(i4*)(intptr_t)v2194 = v2192;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidWhencase workspace at ws+3416 length ws+40
void f107_MidWhencase(void) {

	i8 v2219 = (i8)(intptr_t)(ws+3416);
	i1 v2220 = *(i1*)(intptr_t)v2219;
	*(i1*)(intptr_t)(ws+3592) = v2220;
	i8 v2221 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2221)();

	i1 v2222 = *(i1*)(intptr_t)(ws+3593);
	i8 v2223 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v2223 = v2222;

	i8 v2224 = (i8)(intptr_t)(ws+3440);
	i1 v2225 = *(i1*)(intptr_t)v2224;
	i1 v2226 = v2225+(+78);
	*(i1*)(intptr_t)(ws+3616) = v2226;
	i8 v2227 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2227)();

	i8 v2228 = *(i8*)(intptr_t)(ws+3624);
	i8 v2229 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2229 = v2228;

	i8 v2230 = (i8)(intptr_t)(ws+3448);
	i8 v2231 = *(i8*)(intptr_t)v2230;
	i8 v2232 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2232 = v2231;

	i8 v2233 = (i8)(intptr_t)(ws+3420);
	i4 v2234 = *(i4*)(intptr_t)v2233;
	i8 v2235 = (i8)(intptr_t)(ws+3432);
	i8 v2236 = *(i8*)(intptr_t)v2235;
	*(i4*)(intptr_t)v2236 = v2234;

	i8 v2237 = (i8)(intptr_t)(ws+3424);
	i2 v2238 = *(i2*)(intptr_t)v2237;
	i8 v2239 = (i8)(intptr_t)(ws+3432);
	i8 v2240 = *(i8*)(intptr_t)v2239;
	i8 v2241 = v2240+(+4);
	*(i2*)(intptr_t)v2241 = v2238;

}
	void f103_AllocateNewNode(void);

// MidAsmvalue workspace at ws+3416 length ws+24
void f109_MidAsmvalue(void) {

	i1 v2265 = (i1)+22;
	*(i1*)(intptr_t)(ws+3616) = v2265;
	i8 v2266 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2266)();

	i8 v2267 = *(i8*)(intptr_t)(ws+3624);
	i8 v2268 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2268 = v2267;

	i8 v2269 = (i8)(intptr_t)(ws+3432);
	i8 v2270 = *(i8*)(intptr_t)v2269;
	i8 v2271 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2271 = v2270;

	i8 v2272 = (i8)(intptr_t)(ws+3416);
	i4 v2273 = *(i4*)(intptr_t)v2272;
	i8 v2274 = (i8)(intptr_t)(ws+3424);
	i8 v2275 = *(i8*)(intptr_t)v2274;
	*(i4*)(intptr_t)v2275 = v2273;

}
	void f103_AllocateNewNode(void);

// MidBor workspace at ws+3392 length ws+40
void f110_MidBor(void) {

	i1 v2276 = (i1)+57;
	*(i1*)(intptr_t)(ws+3616) = v2276;
	i8 v2277 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2277)();

	i8 v2278 = *(i8*)(intptr_t)(ws+3624);
	i8 v2279 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2279 = v2278;

	i8 v2280 = (i8)(intptr_t)(ws+3424);
	i8 v2281 = *(i8*)(intptr_t)v2280;
	i8 v2282 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2282 = v2281;

	i8 v2283 = (i8)(intptr_t)(ws+3392);
	i8 v2284 = *(i8*)(intptr_t)v2283;
	i8 v2285 = (i8)(intptr_t)(ws+3416);
	i8 v2286 = *(i8*)(intptr_t)v2285;
	i8 v2287 = v2286+(+32);
	*(i8*)(intptr_t)v2287 = v2284;

	i8 v2288 = (i8)(intptr_t)(ws+3400);
	i8 v2289 = *(i8*)(intptr_t)v2288;
	i8 v2290 = (i8)(intptr_t)(ws+3416);
	i8 v2291 = *(i8*)(intptr_t)v2290;
	i8 v2292 = v2291+(+40);
	*(i8*)(intptr_t)v2292 = v2289;

	i8 v2293 = (i8)(intptr_t)(ws+3408);
	i2 v2294 = *(i2*)(intptr_t)v2293;
	i8 v2295 = (i8)(intptr_t)(ws+3416);
	i8 v2296 = *(i8*)(intptr_t)v2295;
	*(i2*)(intptr_t)v2296 = v2294;

	i8 v2297 = (i8)(intptr_t)(ws+3410);
	i2 v2298 = *(i2*)(intptr_t)v2297;
	i8 v2299 = (i8)(intptr_t)(ws+3416);
	i8 v2300 = *(i8*)(intptr_t)v2299;
	i8 v2301 = v2300+(+2);
	*(i2*)(intptr_t)v2301 = v2298;

	i8 v2302 = (i8)(intptr_t)(ws+3412);
	i2 v2303 = *(i2*)(intptr_t)v2302;
	i8 v2304 = (i8)(intptr_t)(ws+3416);
	i8 v2305 = *(i8*)(intptr_t)v2304;
	i8 v2306 = v2305+(+4);
	*(i2*)(intptr_t)v2306 = v2303;

	i8 v2307 = (i8)(intptr_t)(ws+3414);
	i1 v2308 = *(i1*)(intptr_t)v2307;
	i8 v2309 = (i8)(intptr_t)(ws+3416);
	i8 v2310 = *(i8*)(intptr_t)v2309;
	i8 v2311 = v2310+(+6);
	*(i1*)(intptr_t)v2311 = v2308;

}
	void f103_AllocateNewNode(void);

// MidEnd workspace at ws+3416 length ws+16
void f112_MidEnd(void) {

	i1 v2336 = (i1)+1;
	*(i1*)(intptr_t)(ws+3616) = v2336;
	i8 v2337 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2337)();

	i8 v2338 = *(i8*)(intptr_t)(ws+3624);
	i8 v2339 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2339 = v2338;

	i8 v2340 = (i8)(intptr_t)(ws+3424);
	i8 v2341 = *(i8*)(intptr_t)v2340;
	i8 v2342 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2342 = v2341;

}
	void f103_AllocateNewNode(void);

// MidAsmsymbol workspace at ws+3416 length ws+24
void f113_MidAsmsymbol(void) {

	i1 v2343 = (i1)+20;
	*(i1*)(intptr_t)(ws+3616) = v2343;
	i8 v2344 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2344)();

	i8 v2345 = *(i8*)(intptr_t)(ws+3624);
	i8 v2346 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2346 = v2345;

	i8 v2347 = (i8)(intptr_t)(ws+3432);
	i8 v2348 = *(i8*)(intptr_t)v2347;
	i8 v2349 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2349 = v2348;

	i8 v2350 = (i8)(intptr_t)(ws+3416);
	i8 v2351 = *(i8*)(intptr_t)v2350;
	i8 v2352 = (i8)(intptr_t)(ws+3424);
	i8 v2353 = *(i8*)(intptr_t)v2352;
	*(i8*)(intptr_t)v2353 = v2351;

}
	void f103_AllocateNewNode(void);

// MidAsmsubref workspace at ws+3416 length ws+24
void f115_MidAsmsubref(void) {

	i1 v2378 = (i1)+21;
	*(i1*)(intptr_t)(ws+3616) = v2378;
	i8 v2379 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2379)();

	i8 v2380 = *(i8*)(intptr_t)(ws+3624);
	i8 v2381 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2381 = v2380;

	i8 v2382 = (i8)(intptr_t)(ws+3432);
	i8 v2383 = *(i8*)(intptr_t)v2382;
	i8 v2384 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2384 = v2383;

	i8 v2385 = (i8)(intptr_t)(ws+3416);
	i8 v2386 = *(i8*)(intptr_t)v2385;
	i8 v2387 = (i8)(intptr_t)(ws+3424);
	i8 v2388 = *(i8*)(intptr_t)v2387;
	*(i8*)(intptr_t)v2388 = v2386;

}
	void f103_AllocateNewNode(void);

// MidPair workspace at ws+3392 length ws+32
void f118_MidPair(void) {

	i1 v2436 = (i1)+25;
	*(i1*)(intptr_t)(ws+3616) = v2436;
	i8 v2437 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2437)();

	i8 v2438 = *(i8*)(intptr_t)(ws+3624);
	i8 v2439 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2439 = v2438;

	i8 v2440 = (i8)(intptr_t)(ws+3416);
	i8 v2441 = *(i8*)(intptr_t)v2440;
	i8 v2442 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2442 = v2441;

	i8 v2443 = (i8)(intptr_t)(ws+3392);
	i8 v2444 = *(i8*)(intptr_t)v2443;
	i8 v2445 = (i8)(intptr_t)(ws+3408);
	i8 v2446 = *(i8*)(intptr_t)v2445;
	i8 v2447 = v2446+(+32);
	*(i8*)(intptr_t)v2447 = v2444;

	i8 v2448 = (i8)(intptr_t)(ws+3400);
	i8 v2449 = *(i8*)(intptr_t)v2448;
	i8 v2450 = (i8)(intptr_t)(ws+3408);
	i8 v2451 = *(i8*)(intptr_t)v2450;
	i8 v2452 = v2451+(+40);
	*(i8*)(intptr_t)v2452 = v2449;

}
	void f103_AllocateNewNode(void);

// MidCall workspace at ws+3488 length ws+40
void f119_MidCall(void) {

	i1 v2453 = (i1)+29;
	*(i1*)(intptr_t)(ws+3616) = v2453;
	i8 v2454 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2454)();

	i8 v2455 = *(i8*)(intptr_t)(ws+3624);
	i8 v2456 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2456 = v2455;

	i8 v2457 = (i8)(intptr_t)(ws+3520);
	i8 v2458 = *(i8*)(intptr_t)v2457;
	i8 v2459 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v2459 = v2458;

	i8 v2460 = (i8)(intptr_t)(ws+3488);
	i8 v2461 = *(i8*)(intptr_t)v2460;
	i8 v2462 = (i8)(intptr_t)(ws+3512);
	i8 v2463 = *(i8*)(intptr_t)v2462;
	i8 v2464 = v2463+(+32);
	*(i8*)(intptr_t)v2464 = v2461;

	i8 v2465 = (i8)(intptr_t)(ws+3496);
	i8 v2466 = *(i8*)(intptr_t)v2465;
	i8 v2467 = (i8)(intptr_t)(ws+3512);
	i8 v2468 = *(i8*)(intptr_t)v2467;
	i8 v2469 = v2468+(+40);
	*(i8*)(intptr_t)v2469 = v2466;

	i8 v2470 = (i8)(intptr_t)(ws+3504);
	i8 v2471 = *(i8*)(intptr_t)v2470;
	i8 v2472 = (i8)(intptr_t)(ws+3512);
	i8 v2473 = *(i8*)(intptr_t)v2472;
	*(i8*)(intptr_t)v2473 = v2471;

}
	void f103_AllocateNewNode(void);

// MidSubref workspace at ws+3424 length ws+24
void f120_MidSubref(void) {

	i1 v2474 = (i1)+45;
	*(i1*)(intptr_t)(ws+3616) = v2474;
	i8 v2475 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2475)();

	i8 v2476 = *(i8*)(intptr_t)(ws+3624);
	i8 v2477 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v2477 = v2476;

	i8 v2478 = (i8)(intptr_t)(ws+3440);
	i8 v2479 = *(i8*)(intptr_t)v2478;
	i8 v2480 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2480 = v2479;

	i8 v2481 = (i8)(intptr_t)(ws+3424);
	i8 v2482 = *(i8*)(intptr_t)v2481;
	i8 v2483 = (i8)(intptr_t)(ws+3432);
	i8 v2484 = *(i8*)(intptr_t)v2483;
	*(i8*)(intptr_t)v2484 = v2482;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidPoparg workspace at ws+3488 length ws+56
void f121_MidPoparg(void) {

	i8 v2485 = (i8)(intptr_t)(ws+3488);
	i1 v2486 = *(i1*)(intptr_t)v2485;
	*(i1*)(intptr_t)(ws+3592) = v2486;
	i8 v2487 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2487)();

	i1 v2488 = *(i1*)(intptr_t)(ws+3593);
	i8 v2489 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v2489 = v2488;

	i8 v2490 = (i8)(intptr_t)(ws+3528);
	i1 v2491 = *(i1*)(intptr_t)v2490;
	i1 v2492 = v2491+(+37);
	*(i1*)(intptr_t)(ws+3616) = v2492;
	i8 v2493 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2493)();

	i8 v2494 = *(i8*)(intptr_t)(ws+3624);
	i8 v2495 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v2495 = v2494;

	i8 v2496 = (i8)(intptr_t)(ws+3536);
	i8 v2497 = *(i8*)(intptr_t)v2496;
	i8 v2498 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2498 = v2497;

	i8 v2499 = (i8)(intptr_t)(ws+3496);
	i8 v2500 = *(i8*)(intptr_t)v2499;
	i8 v2501 = (i8)(intptr_t)(ws+3520);
	i8 v2502 = *(i8*)(intptr_t)v2501;
	*(i8*)(intptr_t)v2502 = v2500;

	i8 v2503 = (i8)(intptr_t)(ws+3504);
	i8 v2504 = *(i8*)(intptr_t)v2503;
	i8 v2505 = (i8)(intptr_t)(ws+3520);
	i8 v2506 = *(i8*)(intptr_t)v2505;
	i8 v2507 = v2506+(+8);
	*(i8*)(intptr_t)v2507 = v2504;

	i8 v2508 = (i8)(intptr_t)(ws+3512);
	i1 v2509 = *(i1*)(intptr_t)v2508;
	i8 v2510 = (i8)(intptr_t)(ws+3520);
	i8 v2511 = *(i8*)(intptr_t)v2510;
	i8 v2512 = v2511+(+16);
	*(i1*)(intptr_t)v2512 = v2509;

}
	void f103_AllocateNewNode(void);

// MidString workspace at ws+3400 length ws+24
void f122_MidString(void) {

	i1 v2513 = (i1)+43;
	*(i1*)(intptr_t)(ws+3616) = v2513;
	i8 v2514 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2514)();

	i8 v2515 = *(i8*)(intptr_t)(ws+3624);
	i8 v2516 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2516 = v2515;

	i8 v2517 = (i8)(intptr_t)(ws+3416);
	i8 v2518 = *(i8*)(intptr_t)v2517;
	i8 v2519 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2519 = v2518;

	i8 v2520 = (i8)(intptr_t)(ws+3400);
	i8 v2521 = *(i8*)(intptr_t)v2520;
	i8 v2522 = (i8)(intptr_t)(ws+3408);
	i8 v2523 = *(i8*)(intptr_t)v2522;
	*(i8*)(intptr_t)v2523 = v2521;

}
	void f103_AllocateNewNode(void);

// MidPreparetail workspace at ws+3456 length ws+16
void f123_MidPreparetail(void) {

	i1 v2524 = (i1)+31;
	*(i1*)(intptr_t)(ws+3616) = v2524;
	i8 v2525 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2525)();

	i8 v2526 = *(i8*)(intptr_t)(ws+3624);
	i8 v2527 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2527 = v2526;

	i8 v2528 = (i8)(intptr_t)(ws+3464);
	i8 v2529 = *(i8*)(intptr_t)v2528;
	i8 v2530 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v2530 = v2529;

}
	void f103_AllocateNewNode(void);

// MidAsmgroupstart workspace at ws+3520 length ws+16
void f124_MidAsmgroupstart(void) {

	i1 v2531 = (i1)+16;
	*(i1*)(intptr_t)(ws+3616) = v2531;
	i8 v2532 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2532)();

	i8 v2533 = *(i8*)(intptr_t)(ws+3624);
	i8 v2534 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v2534 = v2533;

	i8 v2535 = (i8)(intptr_t)(ws+3528);
	i8 v2536 = *(i8*)(intptr_t)v2535;
	i8 v2537 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2537 = v2536;

}
	void f103_AllocateNewNode(void);

// MidAsmstart workspace at ws+3392 length ws+16
void f126_MidAsmstart(void) {

	i1 v2550 = (i1)+18;
	*(i1*)(intptr_t)(ws+3616) = v2550;
	i8 v2551 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2551)();

	i8 v2552 = *(i8*)(intptr_t)(ws+3624);
	i8 v2553 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2553 = v2552;

	i8 v2554 = (i8)(intptr_t)(ws+3400);
	i8 v2555 = *(i8*)(intptr_t)v2554;
	i8 v2556 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2556 = v2555;

}
	void f103_AllocateNewNode(void);

// MidStartinit workspace at ws+3408 length ws+24
void f127_MidStartinit(void) {

	i1 v2557 = (i1)+6;
	*(i1*)(intptr_t)(ws+3616) = v2557;
	i8 v2558 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2558)();

	i8 v2559 = *(i8*)(intptr_t)(ws+3624);
	i8 v2560 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2560 = v2559;

	i8 v2561 = (i8)(intptr_t)(ws+3424);
	i8 v2562 = *(i8*)(intptr_t)v2561;
	i8 v2563 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2563 = v2562;

	i8 v2564 = (i8)(intptr_t)(ws+3408);
	i8 v2565 = *(i8*)(intptr_t)v2564;
	i8 v2566 = (i8)(intptr_t)(ws+3416);
	i8 v2567 = *(i8*)(intptr_t)v2566;
	*(i8*)(intptr_t)v2567 = v2565;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidBlts workspace at ws+3456 length ws+56
void f128_MidBlts(void) {

	i8 v2568 = (i8)(intptr_t)(ws+3456);
	i1 v2569 = *(i1*)(intptr_t)v2568;
	*(i1*)(intptr_t)(ws+3592) = v2569;
	i8 v2570 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2570)();

	i1 v2571 = *(i1*)(intptr_t)(ws+3593);
	i8 v2572 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2572 = v2571;

	i8 v2573 = (i8)(intptr_t)(ws+3496);
	i1 v2574 = *(i1*)(intptr_t)v2573;
	i1 v2575 = v2574+(+63);
	*(i1*)(intptr_t)(ws+3616) = v2575;
	i8 v2576 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2576)();

	i8 v2577 = *(i8*)(intptr_t)(ws+3624);
	i8 v2578 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2578 = v2577;

	i8 v2579 = (i8)(intptr_t)(ws+3504);
	i8 v2580 = *(i8*)(intptr_t)v2579;
	i8 v2581 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2581 = v2580;

	i8 v2582 = (i8)(intptr_t)(ws+3464);
	i8 v2583 = *(i8*)(intptr_t)v2582;
	i8 v2584 = (i8)(intptr_t)(ws+3488);
	i8 v2585 = *(i8*)(intptr_t)v2584;
	i8 v2586 = v2585+(+32);
	*(i8*)(intptr_t)v2586 = v2583;

	i8 v2587 = (i8)(intptr_t)(ws+3472);
	i8 v2588 = *(i8*)(intptr_t)v2587;
	i8 v2589 = (i8)(intptr_t)(ws+3488);
	i8 v2590 = *(i8*)(intptr_t)v2589;
	i8 v2591 = v2590+(+40);
	*(i8*)(intptr_t)v2591 = v2588;

	i8 v2592 = (i8)(intptr_t)(ws+3480);
	i2 v2593 = *(i2*)(intptr_t)v2592;
	i8 v2594 = (i8)(intptr_t)(ws+3488);
	i8 v2595 = *(i8*)(intptr_t)v2594;
	*(i2*)(intptr_t)v2595 = v2593;

	i8 v2596 = (i8)(intptr_t)(ws+3482);
	i2 v2597 = *(i2*)(intptr_t)v2596;
	i8 v2598 = (i8)(intptr_t)(ws+3488);
	i8 v2599 = *(i8*)(intptr_t)v2598;
	i8 v2600 = v2599+(+2);
	*(i2*)(intptr_t)v2600 = v2597;

	i8 v2601 = (i8)(intptr_t)(ws+3484);
	i2 v2602 = *(i2*)(intptr_t)v2601;
	i8 v2603 = (i8)(intptr_t)(ws+3488);
	i8 v2604 = *(i8*)(intptr_t)v2603;
	i8 v2605 = v2604+(+4);
	*(i2*)(intptr_t)v2605 = v2602;

	i8 v2606 = (i8)(intptr_t)(ws+3486);
	i1 v2607 = *(i1*)(intptr_t)v2606;
	i8 v2608 = (i8)(intptr_t)(ws+3488);
	i8 v2609 = *(i8*)(intptr_t)v2608;
	i8 v2610 = v2609+(+6);
	*(i1*)(intptr_t)v2610 = v2607;

}
	void f103_AllocateNewNode(void);

// MidStartsub workspace at ws+3408 length ws+24
void f130_MidStartsub(void) {

	i1 v2635 = (i1)+4;
	*(i1*)(intptr_t)(ws+3616) = v2635;
	i8 v2636 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2636)();

	i8 v2637 = *(i8*)(intptr_t)(ws+3624);
	i8 v2638 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2638 = v2637;

	i8 v2639 = (i8)(intptr_t)(ws+3424);
	i8 v2640 = *(i8*)(intptr_t)v2639;
	i8 v2641 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2641 = v2640;

	i8 v2642 = (i8)(intptr_t)(ws+3408);
	i8 v2643 = *(i8*)(intptr_t)v2642;
	i8 v2644 = (i8)(intptr_t)(ws+3416);
	i8 v2645 = *(i8*)(intptr_t)v2644;
	*(i8*)(intptr_t)v2645 = v2643;

}
	void f103_AllocateNewNode(void);

// MidTailcall workspace at ws+3456 length ws+40
void f132_MidTailcall(void) {

	i1 v2670 = (i1)+30;
	*(i1*)(intptr_t)(ws+3616) = v2670;
	i8 v2671 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2671)();

	i8 v2672 = *(i8*)(intptr_t)(ws+3624);
	i8 v2673 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2673 = v2672;

	i8 v2674 = (i8)(intptr_t)(ws+3488);
	i8 v2675 = *(i8*)(intptr_t)v2674;
	i8 v2676 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2676 = v2675;

	i8 v2677 = (i8)(intptr_t)(ws+3456);
	i8 v2678 = *(i8*)(intptr_t)v2677;
	i8 v2679 = (i8)(intptr_t)(ws+3480);
	i8 v2680 = *(i8*)(intptr_t)v2679;
	i8 v2681 = v2680+(+32);
	*(i8*)(intptr_t)v2681 = v2678;

	i8 v2682 = (i8)(intptr_t)(ws+3464);
	i8 v2683 = *(i8*)(intptr_t)v2682;
	i8 v2684 = (i8)(intptr_t)(ws+3480);
	i8 v2685 = *(i8*)(intptr_t)v2684;
	i8 v2686 = v2685+(+40);
	*(i8*)(intptr_t)v2686 = v2683;

	i8 v2687 = (i8)(intptr_t)(ws+3472);
	i8 v2688 = *(i8*)(intptr_t)v2687;
	i8 v2689 = (i8)(intptr_t)(ws+3480);
	i8 v2690 = *(i8*)(intptr_t)v2689;
	*(i8*)(intptr_t)v2690 = v2688;

}
	void f103_AllocateNewNode(void);

// MidJump workspace at ws+3416 length ws+24
void f133_MidJump(void) {

	i1 v2691 = (i1)+27;
	*(i1*)(intptr_t)(ws+3616) = v2691;
	i8 v2692 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2692)();

	i8 v2693 = *(i8*)(intptr_t)(ws+3624);
	i8 v2694 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2694 = v2693;

	i8 v2695 = (i8)(intptr_t)(ws+3432);
	i8 v2696 = *(i8*)(intptr_t)v2695;
	i8 v2697 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2697 = v2696;

	i8 v2698 = (i8)(intptr_t)(ws+3416);
	i2 v2699 = *(i2*)(intptr_t)v2698;
	i8 v2700 = (i8)(intptr_t)(ws+3424);
	i8 v2701 = *(i8*)(intptr_t)v2700;
	*(i2*)(intptr_t)v2701 = v2699;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidDeref workspace at ws+3544 length ws+40
void f134_MidDeref(void) {

	i8 v2702 = (i8)(intptr_t)(ws+3544);
	i1 v2703 = *(i1*)(intptr_t)v2702;
	*(i1*)(intptr_t)(ws+3592) = v2703;
	i8 v2704 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2704)();

	i1 v2705 = *(i1*)(intptr_t)(ws+3593);
	i8 v2706 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v2706 = v2705;

	i8 v2707 = (i8)(intptr_t)(ws+3568);
	i1 v2708 = *(i1*)(intptr_t)v2707;
	i1 v2709 = v2708+(+46);
	*(i1*)(intptr_t)(ws+3616) = v2709;
	i8 v2710 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2710)();

	i8 v2711 = *(i8*)(intptr_t)(ws+3624);
	i8 v2712 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v2712 = v2711;

	i8 v2713 = (i8)(intptr_t)(ws+3576);
	i8 v2714 = *(i8*)(intptr_t)v2713;
	i8 v2715 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v2715 = v2714;

	i8 v2716 = (i8)(intptr_t)(ws+3552);
	i8 v2717 = *(i8*)(intptr_t)v2716;
	i8 v2718 = (i8)(intptr_t)(ws+3560);
	i8 v2719 = *(i8*)(intptr_t)v2718;
	i8 v2720 = v2719+(+32);
	*(i8*)(intptr_t)v2720 = v2717;

}
	void f103_AllocateNewNode(void);

// MidAsmend workspace at ws+3392 length ws+16
void f135_MidAsmend(void) {

	i1 v2721 = (i1)+23;
	*(i1*)(intptr_t)(ws+3616) = v2721;
	i8 v2722 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2722)();

	i8 v2723 = *(i8*)(intptr_t)(ws+3624);
	i8 v2724 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2724 = v2723;

	i8 v2725 = (i8)(intptr_t)(ws+3400);
	i8 v2726 = *(i8*)(intptr_t)v2725;
	i8 v2727 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2727 = v2726;

}
	void f103_AllocateNewNode(void);

// MidLabel workspace at ws+3472 length ws+24
void f136_MidLabel(void) {

	i1 v2728 = (i1)+26;
	*(i1*)(intptr_t)(ws+3616) = v2728;
	i8 v2729 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2729)();

	i8 v2730 = *(i8*)(intptr_t)(ws+3624);
	i8 v2731 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2731 = v2730;

	i8 v2732 = (i8)(intptr_t)(ws+3488);
	i8 v2733 = *(i8*)(intptr_t)v2732;
	i8 v2734 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2734 = v2733;

	i8 v2735 = (i8)(intptr_t)(ws+3472);
	i2 v2736 = *(i2*)(intptr_t)v2735;
	i8 v2737 = (i8)(intptr_t)(ws+3480);
	i8 v2738 = *(i8*)(intptr_t)v2737;
	*(i2*)(intptr_t)v2738 = v2736;

}
	void f103_AllocateNewNode(void);

// MidEndsub workspace at ws+3408 length ws+24
void f140_MidEndsub(void) {

	i1 v2805 = (i1)+5;
	*(i1*)(intptr_t)(ws+3616) = v2805;
	i8 v2806 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2806)();

	i8 v2807 = *(i8*)(intptr_t)(ws+3624);
	i8 v2808 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2808 = v2807;

	i8 v2809 = (i8)(intptr_t)(ws+3424);
	i8 v2810 = *(i8*)(intptr_t)v2809;
	i8 v2811 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2811 = v2810;

	i8 v2812 = (i8)(intptr_t)(ws+3408);
	i8 v2813 = *(i8*)(intptr_t)v2812;
	i8 v2814 = (i8)(intptr_t)(ws+3416);
	i8 v2815 = *(i8*)(intptr_t)v2814;
	*(i8*)(intptr_t)v2815 = v2813;

}
	void f103_AllocateNewNode(void);

// MidInitsubref workspace at ws+3448 length ws+24
void f141_MidInitsubref(void) {

	i1 v2816 = (i1)+14;
	*(i1*)(intptr_t)(ws+3616) = v2816;
	i8 v2817 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2817)();

	i8 v2818 = *(i8*)(intptr_t)(ws+3624);
	i8 v2819 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2819 = v2818;

	i8 v2820 = (i8)(intptr_t)(ws+3464);
	i8 v2821 = *(i8*)(intptr_t)v2820;
	i8 v2822 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v2822 = v2821;

	i8 v2823 = (i8)(intptr_t)(ws+3448);
	i8 v2824 = *(i8*)(intptr_t)v2823;
	i8 v2825 = (i8)(intptr_t)(ws+3456);
	i8 v2826 = *(i8*)(intptr_t)v2825;
	*(i8*)(intptr_t)v2826 = v2824;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidBltu workspace at ws+3456 length ws+56
void f146_MidBltu(void) {

	i8 v2923 = (i8)(intptr_t)(ws+3456);
	i1 v2924 = *(i1*)(intptr_t)v2923;
	*(i1*)(intptr_t)(ws+3592) = v2924;
	i8 v2925 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2925)();

	i1 v2926 = *(i1*)(intptr_t)(ws+3593);
	i8 v2927 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2927 = v2926;

	i8 v2928 = (i8)(intptr_t)(ws+3496);
	i1 v2929 = *(i1*)(intptr_t)v2928;
	i1 v2930 = v2929+(+68);
	*(i1*)(intptr_t)(ws+3616) = v2930;
	i8 v2931 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2931)();

	i8 v2932 = *(i8*)(intptr_t)(ws+3624);
	i8 v2933 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2933 = v2932;

	i8 v2934 = (i8)(intptr_t)(ws+3504);
	i8 v2935 = *(i8*)(intptr_t)v2934;
	i8 v2936 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2936 = v2935;

	i8 v2937 = (i8)(intptr_t)(ws+3464);
	i8 v2938 = *(i8*)(intptr_t)v2937;
	i8 v2939 = (i8)(intptr_t)(ws+3488);
	i8 v2940 = *(i8*)(intptr_t)v2939;
	i8 v2941 = v2940+(+32);
	*(i8*)(intptr_t)v2941 = v2938;

	i8 v2942 = (i8)(intptr_t)(ws+3472);
	i8 v2943 = *(i8*)(intptr_t)v2942;
	i8 v2944 = (i8)(intptr_t)(ws+3488);
	i8 v2945 = *(i8*)(intptr_t)v2944;
	i8 v2946 = v2945+(+40);
	*(i8*)(intptr_t)v2946 = v2943;

	i8 v2947 = (i8)(intptr_t)(ws+3480);
	i2 v2948 = *(i2*)(intptr_t)v2947;
	i8 v2949 = (i8)(intptr_t)(ws+3488);
	i8 v2950 = *(i8*)(intptr_t)v2949;
	*(i2*)(intptr_t)v2950 = v2948;

	i8 v2951 = (i8)(intptr_t)(ws+3482);
	i2 v2952 = *(i2*)(intptr_t)v2951;
	i8 v2953 = (i8)(intptr_t)(ws+3488);
	i8 v2954 = *(i8*)(intptr_t)v2953;
	i8 v2955 = v2954+(+2);
	*(i2*)(intptr_t)v2955 = v2952;

	i8 v2956 = (i8)(intptr_t)(ws+3484);
	i2 v2957 = *(i2*)(intptr_t)v2956;
	i8 v2958 = (i8)(intptr_t)(ws+3488);
	i8 v2959 = *(i8*)(intptr_t)v2958;
	i8 v2960 = v2959+(+4);
	*(i2*)(intptr_t)v2960 = v2957;

	i8 v2961 = (i8)(intptr_t)(ws+3486);
	i1 v2962 = *(i1*)(intptr_t)v2961;
	i8 v2963 = (i8)(intptr_t)(ws+3488);
	i8 v2964 = *(i8*)(intptr_t)v2963;
	i8 v2965 = v2964+(+6);
	*(i1*)(intptr_t)v2965 = v2962;

}
	void f103_AllocateNewNode(void);

// MidReturn workspace at ws+3392 length ws+16
void f147_MidReturn(void) {

	i1 v2966 = (i1)+28;
	*(i1*)(intptr_t)(ws+3616) = v2966;
	i8 v2967 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2967)();

	i8 v2968 = *(i8*)(intptr_t)(ws+3624);
	i8 v2969 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2969 = v2968;

	i8 v2970 = (i8)(intptr_t)(ws+3400);
	i8 v2971 = *(i8*)(intptr_t)v2970;
	i8 v2972 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2972 = v2971;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidEndcase workspace at ws+3416 length ws+32
void f148_MidEndcase(void) {

	i8 v2973 = (i8)(intptr_t)(ws+3416);
	i1 v2974 = *(i1*)(intptr_t)v2973;
	*(i1*)(intptr_t)(ws+3592) = v2974;
	i8 v2975 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2975)();

	i1 v2976 = *(i1*)(intptr_t)(ws+3593);
	i8 v2977 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v2977 = v2976;

	i8 v2978 = (i8)(intptr_t)(ws+3432);
	i1 v2979 = *(i1*)(intptr_t)v2978;
	i1 v2980 = v2979+(+83);
	*(i1*)(intptr_t)(ws+3616) = v2980;
	i8 v2981 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2981)();

	i8 v2982 = *(i8*)(intptr_t)(ws+3624);
	i8 v2983 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v2983 = v2982;

	i8 v2984 = (i8)(intptr_t)(ws+3440);
	i8 v2985 = *(i8*)(intptr_t)v2984;
	i8 v2986 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2986 = v2985;

}
	void f103_AllocateNewNode(void);

// MidInitstring workspace at ws+3448 length ws+24
void f149_MidInitstring(void) {

	i1 v2987 = (i1)+12;
	*(i1*)(intptr_t)(ws+3616) = v2987;
	i8 v2988 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2988)();

	i8 v2989 = *(i8*)(intptr_t)(ws+3624);
	i8 v2990 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2990 = v2989;

	i8 v2991 = (i8)(intptr_t)(ws+3464);
	i8 v2992 = *(i8*)(intptr_t)v2991;
	i8 v2993 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v2993 = v2992;

	i8 v2994 = (i8)(intptr_t)(ws+3448);
	i8 v2995 = *(i8*)(intptr_t)v2994;
	i8 v2996 = (i8)(intptr_t)(ws+3456);
	i8 v2997 = *(i8*)(intptr_t)v2996;
	*(i8*)(intptr_t)v2997 = v2995;

}
	void f103_AllocateNewNode(void);

// MidConstant workspace at ws+3592 length ws+24
void f150_MidConstant(void) {

	i1 v2998 = (i1)+42;
	*(i1*)(intptr_t)(ws+3616) = v2998;
	i8 v2999 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2999)();

	i8 v3000 = *(i8*)(intptr_t)(ws+3624);
	i8 v3001 = (i8)(intptr_t)(ws+3608);
	*(i8*)(intptr_t)v3001 = v3000;

	i8 v3002 = (i8)(intptr_t)(ws+3608);
	i8 v3003 = *(i8*)(intptr_t)v3002;
	i8 v3004 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v3004 = v3003;

	i8 v3005 = (i8)(intptr_t)(ws+3592);
	i4 v3006 = *(i4*)(intptr_t)v3005;
	i8 v3007 = (i8)(intptr_t)(ws+3600);
	i8 v3008 = *(i8*)(intptr_t)v3007;
	*(i4*)(intptr_t)v3008 = v3006;

}
	void f103_AllocateNewNode(void);

// MidBand workspace at ws+3392 length ws+40
void f151_MidBand(void) {

	i1 v3009 = (i1)+56;
	*(i1*)(intptr_t)(ws+3616) = v3009;
	i8 v3010 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3010)();

	i8 v3011 = *(i8*)(intptr_t)(ws+3624);
	i8 v3012 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3012 = v3011;

	i8 v3013 = (i8)(intptr_t)(ws+3424);
	i8 v3014 = *(i8*)(intptr_t)v3013;
	i8 v3015 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3015 = v3014;

	i8 v3016 = (i8)(intptr_t)(ws+3392);
	i8 v3017 = *(i8*)(intptr_t)v3016;
	i8 v3018 = (i8)(intptr_t)(ws+3416);
	i8 v3019 = *(i8*)(intptr_t)v3018;
	i8 v3020 = v3019+(+32);
	*(i8*)(intptr_t)v3020 = v3017;

	i8 v3021 = (i8)(intptr_t)(ws+3400);
	i8 v3022 = *(i8*)(intptr_t)v3021;
	i8 v3023 = (i8)(intptr_t)(ws+3416);
	i8 v3024 = *(i8*)(intptr_t)v3023;
	i8 v3025 = v3024+(+40);
	*(i8*)(intptr_t)v3025 = v3022;

	i8 v3026 = (i8)(intptr_t)(ws+3408);
	i2 v3027 = *(i2*)(intptr_t)v3026;
	i8 v3028 = (i8)(intptr_t)(ws+3416);
	i8 v3029 = *(i8*)(intptr_t)v3028;
	*(i2*)(intptr_t)v3029 = v3027;

	i8 v3030 = (i8)(intptr_t)(ws+3410);
	i2 v3031 = *(i2*)(intptr_t)v3030;
	i8 v3032 = (i8)(intptr_t)(ws+3416);
	i8 v3033 = *(i8*)(intptr_t)v3032;
	i8 v3034 = v3033+(+2);
	*(i2*)(intptr_t)v3034 = v3031;

	i8 v3035 = (i8)(intptr_t)(ws+3412);
	i2 v3036 = *(i2*)(intptr_t)v3035;
	i8 v3037 = (i8)(intptr_t)(ws+3416);
	i8 v3038 = *(i8*)(intptr_t)v3037;
	i8 v3039 = v3038+(+4);
	*(i2*)(intptr_t)v3039 = v3036;

	i8 v3040 = (i8)(intptr_t)(ws+3414);
	i1 v3041 = *(i1*)(intptr_t)v3040;
	i8 v3042 = (i8)(intptr_t)(ws+3416);
	i8 v3043 = *(i8*)(intptr_t)v3042;
	i8 v3044 = v3043+(+6);
	*(i1*)(intptr_t)v3044 = v3041;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidStartcase workspace at ws+3416 length ws+40
void f152_MidStartcase(void) {

	i8 v3045 = (i8)(intptr_t)(ws+3416);
	i1 v3046 = *(i1*)(intptr_t)v3045;
	*(i1*)(intptr_t)(ws+3592) = v3046;
	i8 v3047 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3047)();

	i1 v3048 = *(i1*)(intptr_t)(ws+3593);
	i8 v3049 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v3049 = v3048;

	i8 v3050 = (i8)(intptr_t)(ws+3440);
	i1 v3051 = *(i1*)(intptr_t)v3050;
	i1 v3052 = v3051+(+73);
	*(i1*)(intptr_t)(ws+3616) = v3052;
	i8 v3053 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3053)();

	i8 v3054 = *(i8*)(intptr_t)(ws+3624);
	i8 v3055 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3055 = v3054;

	i8 v3056 = (i8)(intptr_t)(ws+3448);
	i8 v3057 = *(i8*)(intptr_t)v3056;
	i8 v3058 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v3058 = v3057;

	i8 v3059 = (i8)(intptr_t)(ws+3424);
	i8 v3060 = *(i8*)(intptr_t)v3059;
	i8 v3061 = (i8)(intptr_t)(ws+3432);
	i8 v3062 = *(i8*)(intptr_t)v3061;
	i8 v3063 = v3062+(+32);
	*(i8*)(intptr_t)v3063 = v3060;

}
	void f103_AllocateNewNode(void);

// MidAsmtext workspace at ws+3392 length ws+24
void f153_MidAsmtext(void) {

	i1 v3064 = (i1)+19;
	*(i1*)(intptr_t)(ws+3616) = v3064;
	i8 v3065 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3065)();

	i8 v3066 = *(i8*)(intptr_t)(ws+3624);
	i8 v3067 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3067 = v3066;

	i8 v3068 = (i8)(intptr_t)(ws+3408);
	i8 v3069 = *(i8*)(intptr_t)v3068;
	i8 v3070 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3070 = v3069;

	i8 v3071 = (i8)(intptr_t)(ws+3392);
	i8 v3072 = *(i8*)(intptr_t)v3071;
	i8 v3073 = (i8)(intptr_t)(ws+3400);
	i8 v3074 = *(i8*)(intptr_t)v3073;
	*(i8*)(intptr_t)v3074 = v3072;

}
	void f103_AllocateNewNode(void);

// MidEndfile workspace at ws+3264 length ws+16
void f154_MidEndfile(void) {

	i1 v3075 = (i1)+3;
	*(i1*)(intptr_t)(ws+3616) = v3075;
	i8 v3076 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3076)();

	i8 v3077 = *(i8*)(intptr_t)(ws+3624);
	i8 v3078 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v3078 = v3077;

	i8 v3079 = (i8)(intptr_t)(ws+3272);
	i8 v3080 = *(i8*)(intptr_t)v3079;
	i8 v3081 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v3081 = v3080;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidArg workspace at ws+3416 length ws+72
void f155_MidArg(void) {

	i8 v3082 = (i8)(intptr_t)(ws+3416);
	i1 v3083 = *(i1*)(intptr_t)v3082;
	*(i1*)(intptr_t)(ws+3592) = v3083;
	i8 v3084 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3084)();

	i1 v3085 = *(i1*)(intptr_t)(ws+3593);
	i8 v3086 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v3086 = v3085;

	i8 v3087 = (i8)(intptr_t)(ws+3472);
	i1 v3088 = *(i1*)(intptr_t)v3087;
	i1 v3089 = v3088+(+32);
	*(i1*)(intptr_t)(ws+3616) = v3089;
	i8 v3090 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3090)();

	i8 v3091 = *(i8*)(intptr_t)(ws+3624);
	i8 v3092 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v3092 = v3091;

	i8 v3093 = (i8)(intptr_t)(ws+3480);
	i8 v3094 = *(i8*)(intptr_t)v3093;
	i8 v3095 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v3095 = v3094;

	i8 v3096 = (i8)(intptr_t)(ws+3424);
	i8 v3097 = *(i8*)(intptr_t)v3096;
	i8 v3098 = (i8)(intptr_t)(ws+3464);
	i8 v3099 = *(i8*)(intptr_t)v3098;
	i8 v3100 = v3099+(+32);
	*(i8*)(intptr_t)v3100 = v3097;

	i8 v3101 = (i8)(intptr_t)(ws+3432);
	i8 v3102 = *(i8*)(intptr_t)v3101;
	i8 v3103 = (i8)(intptr_t)(ws+3464);
	i8 v3104 = *(i8*)(intptr_t)v3103;
	i8 v3105 = v3104+(+40);
	*(i8*)(intptr_t)v3105 = v3102;

	i8 v3106 = (i8)(intptr_t)(ws+3440);
	i8 v3107 = *(i8*)(intptr_t)v3106;
	i8 v3108 = (i8)(intptr_t)(ws+3464);
	i8 v3109 = *(i8*)(intptr_t)v3108;
	*(i8*)(intptr_t)v3109 = v3107;

	i8 v3110 = (i8)(intptr_t)(ws+3448);
	i8 v3111 = *(i8*)(intptr_t)v3110;
	i8 v3112 = (i8)(intptr_t)(ws+3464);
	i8 v3113 = *(i8*)(intptr_t)v3112;
	i8 v3114 = v3113+(+8);
	*(i8*)(intptr_t)v3114 = v3111;

	i8 v3115 = (i8)(intptr_t)(ws+3456);
	i1 v3116 = *(i1*)(intptr_t)v3115;
	i8 v3117 = (i8)(intptr_t)(ws+3464);
	i8 v3118 = *(i8*)(intptr_t)v3117;
	i8 v3119 = v3118+(+16);
	*(i1*)(intptr_t)v3119 = v3116;

}
	void f103_AllocateNewNode(void);

// MidStartfile workspace at ws+3264 length ws+16
void f158_MidStartfile(void) {

	i1 v3168 = (i1)+2;
	*(i1*)(intptr_t)(ws+3616) = v3168;
	i8 v3169 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3169)();

	i8 v3170 = *(i8*)(intptr_t)(ws+3624);
	i8 v3171 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v3171 = v3170;

	i8 v3172 = (i8)(intptr_t)(ws+3272);
	i8 v3173 = *(i8*)(intptr_t)v3172;
	i8 v3174 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v3174 = v3173;

}
	void f103_AllocateNewNode(void);

// MidEndinit workspace at ws+3392 length ws+16
void f159_MidEndinit(void) {

	i1 v3175 = (i1)+15;
	*(i1*)(intptr_t)(ws+3616) = v3175;
	i8 v3176 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3176)();

	i8 v3177 = *(i8*)(intptr_t)(ws+3624);
	i8 v3178 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3178 = v3177;

	i8 v3179 = (i8)(intptr_t)(ws+3400);
	i8 v3180 = *(i8*)(intptr_t)v3179;
	i8 v3181 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3181 = v3180;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidBeq workspace at ws+3448 length ws+56
void f160_MidBeq(void) {

	i8 v3182 = (i8)(intptr_t)(ws+3448);
	i1 v3183 = *(i1*)(intptr_t)v3182;
	*(i1*)(intptr_t)(ws+3592) = v3183;
	i8 v3184 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3184)();

	i1 v3185 = *(i1*)(intptr_t)(ws+3593);
	i8 v3186 = (i8)(intptr_t)(ws+3488);
	*(i1*)(intptr_t)v3186 = v3185;

	i8 v3187 = (i8)(intptr_t)(ws+3488);
	i1 v3188 = *(i1*)(intptr_t)v3187;
	i1 v3189 = v3188+(+58);
	*(i1*)(intptr_t)(ws+3616) = v3189;
	i8 v3190 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3190)();

	i8 v3191 = *(i8*)(intptr_t)(ws+3624);
	i8 v3192 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v3192 = v3191;

	i8 v3193 = (i8)(intptr_t)(ws+3496);
	i8 v3194 = *(i8*)(intptr_t)v3193;
	i8 v3195 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v3195 = v3194;

	i8 v3196 = (i8)(intptr_t)(ws+3456);
	i8 v3197 = *(i8*)(intptr_t)v3196;
	i8 v3198 = (i8)(intptr_t)(ws+3480);
	i8 v3199 = *(i8*)(intptr_t)v3198;
	i8 v3200 = v3199+(+32);
	*(i8*)(intptr_t)v3200 = v3197;

	i8 v3201 = (i8)(intptr_t)(ws+3464);
	i8 v3202 = *(i8*)(intptr_t)v3201;
	i8 v3203 = (i8)(intptr_t)(ws+3480);
	i8 v3204 = *(i8*)(intptr_t)v3203;
	i8 v3205 = v3204+(+40);
	*(i8*)(intptr_t)v3205 = v3202;

	i8 v3206 = (i8)(intptr_t)(ws+3472);
	i2 v3207 = *(i2*)(intptr_t)v3206;
	i8 v3208 = (i8)(intptr_t)(ws+3480);
	i8 v3209 = *(i8*)(intptr_t)v3208;
	*(i2*)(intptr_t)v3209 = v3207;

	i8 v3210 = (i8)(intptr_t)(ws+3474);
	i2 v3211 = *(i2*)(intptr_t)v3210;
	i8 v3212 = (i8)(intptr_t)(ws+3480);
	i8 v3213 = *(i8*)(intptr_t)v3212;
	i8 v3214 = v3213+(+2);
	*(i2*)(intptr_t)v3214 = v3211;

	i8 v3215 = (i8)(intptr_t)(ws+3476);
	i2 v3216 = *(i2*)(intptr_t)v3215;
	i8 v3217 = (i8)(intptr_t)(ws+3480);
	i8 v3218 = *(i8*)(intptr_t)v3217;
	i8 v3219 = v3218+(+4);
	*(i2*)(intptr_t)v3219 = v3216;

	i8 v3220 = (i8)(intptr_t)(ws+3478);
	i1 v3221 = *(i1*)(intptr_t)v3220;
	i8 v3222 = (i8)(intptr_t)(ws+3480);
	i8 v3223 = *(i8*)(intptr_t)v3222;
	i8 v3224 = v3223+(+6);
	*(i1*)(intptr_t)v3224 = v3221;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidStore workspace at ws+3488 length ws+48
void f162_MidStore(void) {

	i8 v3244 = (i8)(intptr_t)(ws+3488);
	i1 v3245 = *(i1*)(intptr_t)v3244;
	*(i1*)(intptr_t)(ws+3592) = v3245;
	i8 v3246 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3246)();

	i1 v3247 = *(i1*)(intptr_t)(ws+3593);
	i8 v3248 = (i8)(intptr_t)(ws+3520);
	*(i1*)(intptr_t)v3248 = v3247;

	i8 v3249 = (i8)(intptr_t)(ws+3520);
	i1 v3250 = *(i1*)(intptr_t)v3249;
	i1 v3251 = v3250+(+51);
	*(i1*)(intptr_t)(ws+3616) = v3251;
	i8 v3252 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3252)();

	i8 v3253 = *(i8*)(intptr_t)(ws+3624);
	i8 v3254 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3254 = v3253;

	i8 v3255 = (i8)(intptr_t)(ws+3528);
	i8 v3256 = *(i8*)(intptr_t)v3255;
	i8 v3257 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3257 = v3256;

	i8 v3258 = (i8)(intptr_t)(ws+3496);
	i8 v3259 = *(i8*)(intptr_t)v3258;
	i8 v3260 = (i8)(intptr_t)(ws+3512);
	i8 v3261 = *(i8*)(intptr_t)v3260;
	i8 v3262 = v3261+(+32);
	*(i8*)(intptr_t)v3262 = v3259;

	i8 v3263 = (i8)(intptr_t)(ws+3504);
	i8 v3264 = *(i8*)(intptr_t)v3263;
	i8 v3265 = (i8)(intptr_t)(ws+3512);
	i8 v3266 = *(i8*)(intptr_t)v3265;
	i8 v3267 = v3266+(+40);
	*(i8*)(intptr_t)v3267 = v3264;

}
	void f103_AllocateNewNode(void);

// MidInitaddress workspace at ws+3448 length ws+32
void f163_MidInitaddress(void) {

	i1 v3268 = (i1)+13;
	*(i1*)(intptr_t)(ws+3616) = v3268;
	i8 v3269 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3269)();

	i8 v3270 = *(i8*)(intptr_t)(ws+3624);
	i8 v3271 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v3271 = v3270;

	i8 v3272 = (i8)(intptr_t)(ws+3472);
	i8 v3273 = *(i8*)(intptr_t)v3272;
	i8 v3274 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v3274 = v3273;

	i8 v3275 = (i8)(intptr_t)(ws+3448);
	i8 v3276 = *(i8*)(intptr_t)v3275;
	i8 v3277 = (i8)(intptr_t)(ws+3464);
	i8 v3278 = *(i8*)(intptr_t)v3277;
	*(i8*)(intptr_t)v3278 = v3276;

	i8 v3279 = (i8)(intptr_t)(ws+3456);
	i2 v3280 = *(i2*)(intptr_t)v3279;
	i8 v3281 = (i8)(intptr_t)(ws+3464);
	i8 v3282 = *(i8*)(intptr_t)v3281;
	i8 v3283 = v3282+(+8);
	*(i2*)(intptr_t)v3283 = v3280;

}
	void f103_AllocateNewNode(void);

// MidAddress workspace at ws+3488 length ws+32
void f165_MidAddress(void) {

	i1 v3307 = (i1)+44;
	*(i1*)(intptr_t)(ws+3616) = v3307;
	i8 v3308 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3308)();

	i8 v3309 = *(i8*)(intptr_t)(ws+3624);
	i8 v3310 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3310 = v3309;

	i8 v3311 = (i8)(intptr_t)(ws+3512);
	i8 v3312 = *(i8*)(intptr_t)v3311;
	i8 v3313 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3313 = v3312;

	i8 v3314 = (i8)(intptr_t)(ws+3488);
	i8 v3315 = *(i8*)(intptr_t)v3314;
	i8 v3316 = (i8)(intptr_t)(ws+3504);
	i8 v3317 = *(i8*)(intptr_t)v3316;
	*(i8*)(intptr_t)v3317 = v3315;

	i8 v3318 = (i8)(intptr_t)(ws+3496);
	i2 v3319 = *(i2*)(intptr_t)v3318;
	i8 v3320 = (i8)(intptr_t)(ws+3504);
	i8 v3321 = *(i8*)(intptr_t)v3320;
	i8 v3322 = v3321+(+8);
	*(i2*)(intptr_t)v3322 = v3319;

}
	void f7_MemSet(void);
	void f69_InternalAlloc(void);

// AllocateNewNode workspace at ws+3616 length ws+24
void f103_AllocateNewNode(void) {

	i8 v3335 = (i8)(intptr_t)(ws+928);
	i8 v3336 = *(i8*)(intptr_t)v3335;
	i8 v3337 = (i8)+0;
	if (v3336==v3337) goto c02_024d; else goto c02_024c;

c02_024c:;

	i8 v3338 = (i8)(intptr_t)(ws+928);
	i8 v3339 = *(i8*)(intptr_t)v3338;
	i8 v3340 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v3340 = v3339;

	i8 v3341 = (i8)(intptr_t)(ws+928);
	i8 v3342 = *(i8*)(intptr_t)v3341;
	i8 v3343 = v3342+(+32);
	i8 v3344 = *(i8*)(intptr_t)v3343;
	i8 v3345 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3345 = v3344;

	i8 v3346 = (i8)(intptr_t)(ws+3624);
	i8 v3347 = *(i8*)(intptr_t)v3346;
	*(i8*)(intptr_t)(ws+3640) = v3347;
	i1 v3348 = (i1)+0;
	*(i1*)(intptr_t)(ws+3648) = v3348;
	i8 v3349 = (i8)+49;
	*(i8*)(intptr_t)(ws+3656) = v3349;
	i8 v3350 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(void))(intptr_t)v3350)();

	goto c02_0249;

c02_024d:;

	i8 v3351 = (i8)+49;
	*(i8*)(intptr_t)(ws+3640) = v3351;
	i8 v3352 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v3352)();

	i8 v3353 = *(i8*)(intptr_t)(ws+3648);
	i8 v3354 = (i8)(intptr_t)(ws+3632);
	*(i8*)(intptr_t)v3354 = v3353;

	i8 v3355 = (i8)(intptr_t)(ws+3632);
	i8 v3356 = *(i8*)(intptr_t)v3355;
	i8 v3357 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v3357 = v3356;

c02_0249:;

	i8 v3358 = (i8)(intptr_t)(ws+3616);
	i1 v3359 = *(i1*)(intptr_t)v3358;
	i8 v3360 = (i8)(intptr_t)(ws+3624);
	i8 v3361 = *(i8*)(intptr_t)v3360;
	i8 v3362 = v3361+(+48);
	*(i1*)(intptr_t)v3362 = v3359;

}

// FreeNode workspace at ws+3624 length ws+8
void f167_FreeNode(void) {

	i8 v3363 = (i8)(intptr_t)(ws+928);
	i8 v3364 = *(i8*)(intptr_t)v3363;
	i8 v3365 = (i8)(intptr_t)(ws+3624);
	i8 v3366 = *(i8*)(intptr_t)v3365;
	i8 v3367 = v3366+(+32);
	*(i8*)(intptr_t)v3367 = v3364;

	i8 v3368 = (i8)(intptr_t)(ws+3624);
	i8 v3369 = *(i8*)(intptr_t)v3368;
	i8 v3370 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3370 = v3369;

}
	void f34_Free(void);

// PurgeAllFreeNodes workspace at ws+3672 length ws+8
void f73_PurgeAllFreeNodes(void) {

c02_024e:;

	i8 v3371 = (i8)(intptr_t)(ws+928);
	i8 v3372 = *(i8*)(intptr_t)v3371;
	i8 v3373 = (i8)+0;
	if (v3372==v3373) goto c02_0253; else goto c02_0252;

c02_0252:;

	i8 v3374 = (i8)(intptr_t)(ws+928);
	i8 v3375 = *(i8*)(intptr_t)v3374;
	i8 v3376 = (i8)(intptr_t)(ws+3672);
	*(i8*)(intptr_t)v3376 = v3375;

	i8 v3377 = (i8)(intptr_t)(ws+928);
	i8 v3378 = *(i8*)(intptr_t)v3377;
	i8 v3379 = v3378+(+32);
	i8 v3380 = *(i8*)(intptr_t)v3379;
	i8 v3381 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3381 = v3380;

	i8 v3382 = (i8)(intptr_t)(ws+3672);
	i8 v3383 = *(i8*)(intptr_t)v3382;
	*(i8*)(intptr_t)(ws+3680) = v3383;
	i8 v3384 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v3384)();

	goto c02_024e;

c02_0253:;

}

// NodeWidth workspace at ws+3456 length ws+9
void f168_NodeWidth(void) {

	i1 v3385 = (i1)+0;
	i8 v3386 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3386 = v3385;

	i8 v3387 = (i8)(intptr_t)(ws+3456);
	i8 v3388 = *(i8*)(intptr_t)v3387;
	i8 v3389 = v3388+(+24);
	i8 v3390 = *(i8*)(intptr_t)v3389;
	i8 v3391 = (i8)+0;
	if (v3390==v3391) goto c02_0258; else goto c02_0257;

c02_0257:;

	i8 v3392 = (i8)(intptr_t)(ws+3456);
	i8 v3393 = *(i8*)(intptr_t)v3392;
	i8 v3394 = v3393+(+24);
	i8 v3395 = *(i8*)(intptr_t)v3394;
	i8 v3396 = v3395+(+48);
	i2 v3397 = *(i2*)(intptr_t)v3396;
	i1 v3398 = v3397;
	i8 v3399 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3399 = v3398;

c02_0258:;

c02_0254:;

}
const i1 c02_s00f5[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f76_SimpleError(void);

// midcodec_i_bad_fold workspace at ws+3632 length ws+0
void f169_midcodec_i_bad_fold(void) {

	i8 v3400 = (i8)(intptr_t)c02_s00f5;
	*(i8*)(intptr_t)(ws+3648) = v3400;
	i8 v3401 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v3401)();

}
	void f169_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3472 length ws+24
void f170_FoldConstant1(void) {

	i8 v3402 = (i8)(intptr_t)(ws+3480);
	i8 v3403 = *(i8*)(intptr_t)v3402;
	i4 v3404 = *(i4*)(intptr_t)v3403;
	i8 v3405 = (i8)(intptr_t)(ws+3492);
	*(i4*)(intptr_t)v3405 = v3404;

	i8 v3406 = (i8)(intptr_t)(ws+3472);
	i1 v3407 = *(i1*)(intptr_t)v3406;

	if (v3407 != +108) goto c02_025a;

	i8 v3408 = (i8)(intptr_t)(ws+3492);
	i4 v3409 = *(i4*)(intptr_t)v3408;
	i4 v3410 = ~v3409;
	i8 v3411 = (i8)(intptr_t)(ws+3488);
	*(i4*)(intptr_t)v3411 = v3410;

	goto c02_0259;

c02_025a:;

	if (v3407 != +113) goto c02_025b;

	i8 v3412 = (i8)(intptr_t)(ws+3492);
	i4 v3413 = *(i4*)(intptr_t)v3412;
	i4 v3414 = -v3413;
	i8 v3415 = (i8)(intptr_t)(ws+3488);
	*(i4*)(intptr_t)v3415 = v3414;

	goto c02_0259;

c02_025b:;

	i8 v3416 = (i8)(intptr_t)(f169_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3416)();

c02_0259:;


}
	void f169_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3592 length ws+36
void f171_FoldConstant2(void) {

	i8 v3417 = (i8)(intptr_t)(ws+3600);
	i8 v3418 = *(i8*)(intptr_t)v3417;
	i4 v3419 = *(i4*)(intptr_t)v3418;
	i8 v3420 = (i8)(intptr_t)(ws+3620);
	*(i4*)(intptr_t)v3420 = v3419;

	i8 v3421 = (i8)(intptr_t)(ws+3608);
	i8 v3422 = *(i8*)(intptr_t)v3421;
	i4 v3423 = *(i4*)(intptr_t)v3422;
	i8 v3424 = (i8)(intptr_t)(ws+3624);
	*(i4*)(intptr_t)v3424 = v3423;

	i8 v3425 = (i8)(intptr_t)(ws+3592);
	i1 v3426 = *(i1*)(intptr_t)v3425;

	if (v3426 != +158) goto c02_025d;

	i8 v3427 = (i8)(intptr_t)(ws+3620);
	i4 v3428 = *(i4*)(intptr_t)v3427;
	i8 v3429 = (i8)(intptr_t)(ws+3624);
	i4 v3430 = *(i4*)(intptr_t)v3429;
	i4 v3431 = v3428+v3430;
	i8 v3432 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3432 = v3431;

	goto c02_025c;

c02_025d:;

	if (v3426 != +133) goto c02_025e;

	i8 v3433 = (i8)(intptr_t)(ws+3620);
	i4 v3434 = *(i4*)(intptr_t)v3433;
	i8 v3435 = (i8)(intptr_t)(ws+3624);
	i4 v3436 = *(i4*)(intptr_t)v3435;
	i4 v3437 = v3434-v3436;
	i8 v3438 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3438 = v3437;

	goto c02_025c;

c02_025e:;

	if (v3426 != +163) goto c02_025f;

	i8 v3439 = (i8)(intptr_t)(ws+3620);
	i4 v3440 = *(i4*)(intptr_t)v3439;
	i8 v3441 = (i8)(intptr_t)(ws+3624);
	i4 v3442 = *(i4*)(intptr_t)v3441;
	i4 v3443 = v3440*v3442;
	i8 v3444 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3444 = v3443;

	goto c02_025c;

c02_025f:;

	if (v3426 != +138) goto c02_0260;

	i8 v3445 = (i8)(intptr_t)(ws+3620);
	i4 v3446 = *(i4*)(intptr_t)v3445;
	i8 v3447 = (i8)(intptr_t)(ws+3624);
	i4 v3448 = *(i4*)(intptr_t)v3447;
	i4 v3449 = v3446/v3448;
	i8 v3450 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3450 = v3449;

	goto c02_025c;

c02_0260:;

	if (v3426 != +143) goto c02_0261;

	i8 v3451 = (i8)(intptr_t)(ws+3620);
	i4 v3452 = *(i4*)(intptr_t)v3451;
	i8 v3453 = (i8)(intptr_t)(ws+3624);
	i4 v3454 = *(i4*)(intptr_t)v3453;
	i4 v3455 = (s4)v3452/(s4)v3454;
	i8 v3456 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3456 = v3455;

	goto c02_025c;

c02_0261:;

	if (v3426 != +148) goto c02_0262;

	i8 v3457 = (i8)(intptr_t)(ws+3620);
	i4 v3458 = *(i4*)(intptr_t)v3457;
	i8 v3459 = (i8)(intptr_t)(ws+3624);
	i4 v3460 = *(i4*)(intptr_t)v3459;
	i4 v3461 = v3458%v3460;
	i8 v3462 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3462 = v3461;

	goto c02_025c;

c02_0262:;

	if (v3426 != +153) goto c02_0263;

	i8 v3463 = (i8)(intptr_t)(ws+3620);
	i4 v3464 = *(i4*)(intptr_t)v3463;
	i8 v3465 = (i8)(intptr_t)(ws+3624);
	i4 v3466 = *(i4*)(intptr_t)v3465;
	i4 v3467 = (s4)v3464%(s4)v3466;
	i8 v3468 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3468 = v3467;

	goto c02_025c;

c02_0263:;

	if (v3426 != +168) goto c02_0264;

	i8 v3469 = (i8)(intptr_t)(ws+3620);
	i4 v3470 = *(i4*)(intptr_t)v3469;
	i8 v3471 = (i8)(intptr_t)(ws+3624);
	i4 v3472 = *(i4*)(intptr_t)v3471;
	i4 v3473 = v3470&v3472;
	i8 v3474 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3474 = v3473;

	goto c02_025c;

c02_0264:;

	if (v3426 != +173) goto c02_0265;

	i8 v3475 = (i8)(intptr_t)(ws+3620);
	i4 v3476 = *(i4*)(intptr_t)v3475;
	i8 v3477 = (i8)(intptr_t)(ws+3624);
	i4 v3478 = *(i4*)(intptr_t)v3477;
	i4 v3479 = v3476|v3478;
	i8 v3480 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3480 = v3479;

	goto c02_025c;

c02_0265:;

	if (v3426 != +178) goto c02_0266;

	i8 v3481 = (i8)(intptr_t)(ws+3620);
	i4 v3482 = *(i4*)(intptr_t)v3481;
	i8 v3483 = (i8)(intptr_t)(ws+3624);
	i4 v3484 = *(i4*)(intptr_t)v3483;
	i4 v3485 = v3482^v3484;
	i8 v3486 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3486 = v3485;

	goto c02_025c;

c02_0266:;

	if (v3426 != +118) goto c02_0267;

	i8 v3487 = (i8)(intptr_t)(ws+3620);
	i4 v3488 = *(i4*)(intptr_t)v3487;
	i8 v3489 = (i8)(intptr_t)(ws+3624);
	i4 v3490 = *(i4*)(intptr_t)v3489;
	i1 v3491 = (s1)(s4)v3490;
	i4 v3492 = ((i4)v3488)<<v3491;
	i8 v3493 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3493 = v3492;

	goto c02_025c;

c02_0267:;

	if (v3426 != +123) goto c02_0268;

	i8 v3494 = (i8)(intptr_t)(ws+3620);
	i4 v3495 = *(i4*)(intptr_t)v3494;
	i8 v3496 = (i8)(intptr_t)(ws+3624);
	i4 v3497 = *(i4*)(intptr_t)v3496;
	i1 v3498 = (s1)(s4)v3497;
	i4 v3499 = ((i4)v3495)>>v3498;
	i8 v3500 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3500 = v3499;

	goto c02_025c;

c02_0268:;

	if (v3426 != +128) goto c02_0269;

	i8 v3501 = (i8)(intptr_t)(ws+3620);
	i4 v3502 = *(i4*)(intptr_t)v3501;
	i8 v3503 = (i8)(intptr_t)(ws+3624);
	i4 v3504 = *(i4*)(intptr_t)v3503;
	i1 v3505 = (s1)(s4)v3504;
	i4 v3506 = ((s4)v3502)>>v3505;
	i8 v3507 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3507 = v3506;

	goto c02_025c;

c02_0269:;

	i8 v3508 = (i8)(intptr_t)(f169_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3508)();

c02_025c:;


}
	void f170_FoldConstant1(void);
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidC1Op workspace at ws+3432 length ws+40
void f172_MidC1Op(void) {

	i8 v3509 = (i8)(intptr_t)(ws+3440);
	i8 v3510 = *(i8*)(intptr_t)v3509;
	i8 v3511 = v3510+(+48);
	i1 v3512 = *(i1*)(intptr_t)v3511;
	i1 v3513 = (i1)+42;
	if (v3512==v3513) goto c02_026d; else goto c02_026e;

c02_026d:;

	i8 v3514 = (i8)(intptr_t)(ws+3432);
	i1 v3515 = *(i1*)(intptr_t)v3514;
	*(i1*)(intptr_t)(ws+3472) = v3515;
	i8 v3516 = (i8)(intptr_t)(ws+3440);
	i8 v3517 = *(i8*)(intptr_t)v3516;
	*(i8*)(intptr_t)(ws+3480) = v3517;
	i8 v3518 = (i8)(intptr_t)(f170_FoldConstant1);

	((void(*)(void))(intptr_t)v3518)();

	i4 v3519 = *(i4*)(intptr_t)(ws+3488);
	i8 v3520 = (i8)(intptr_t)(ws+3456);
	*(i4*)(intptr_t)v3520 = v3519;

	i8 v3521 = (i8)(intptr_t)(ws+3456);
	i4 v3522 = *(i4*)(intptr_t)v3521;
	i8 v3523 = (i8)(intptr_t)(ws+3440);
	i8 v3524 = *(i8*)(intptr_t)v3523;
	*(i4*)(intptr_t)v3524 = v3522;

	i8 v3525 = (i8)(intptr_t)(ws+3440);
	i8 v3526 = *(i8*)(intptr_t)v3525;
	i8 v3527 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3527 = v3526;

	goto c02_026a;

c02_026e:;

	i8 v3528 = (i8)(intptr_t)(ws+3433);
	i1 v3529 = *(i1*)(intptr_t)v3528;
	*(i1*)(intptr_t)(ws+3592) = v3529;
	i8 v3530 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3530)();

	i1 v3531 = *(i1*)(intptr_t)(ws+3593);
	i8 v3532 = (i8)(intptr_t)(ws+3460);
	*(i1*)(intptr_t)v3532 = v3531;

	i8 v3533 = (i8)(intptr_t)(ws+3432);
	i1 v3534 = *(i1*)(intptr_t)v3533;
	i8 v3535 = (i8)(intptr_t)(ws+3460);
	i1 v3536 = *(i1*)(intptr_t)v3535;
	i1 v3537 = v3534+v3536;
	*(i1*)(intptr_t)(ws+3616) = v3537;
	i8 v3538 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3538)();

	i8 v3539 = *(i8*)(intptr_t)(ws+3624);
	i8 v3540 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v3540 = v3539;

	i8 v3541 = (i8)(intptr_t)(ws+3464);
	i8 v3542 = *(i8*)(intptr_t)v3541;
	i8 v3543 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3543 = v3542;

	i8 v3544 = (i8)(intptr_t)(ws+3440);
	i8 v3545 = *(i8*)(intptr_t)v3544;
	i8 v3546 = (i8)(intptr_t)(ws+3448);
	i8 v3547 = *(i8*)(intptr_t)v3546;
	i8 v3548 = v3547+(+32);
	*(i8*)(intptr_t)v3548 = v3545;

c02_026a:;

}

// GetPowerOfTwo workspace at ws+3592 length ws+5
void f173_GetPowerOfTwo(void) {

	i1 v3549 = (i1)+0;
	i8 v3550 = (i8)(intptr_t)(ws+3596);
	*(i1*)(intptr_t)v3550 = v3549;

	i4 v3551 = (i4)+0;
	i8 v3552 = (i8)(intptr_t)(ws+3592);
	i4 v3553 = *(i4*)(intptr_t)v3552;
	if ((s4)v3551<(s4)v3553) goto c02_0276; else goto c02_0275;

c02_0276:;

	i8 v3554 = (i8)(intptr_t)(ws+3592);
	i4 v3555 = *(i4*)(intptr_t)v3554;
	i8 v3556 = (i8)(intptr_t)(ws+3592);
	i4 v3557 = *(i4*)(intptr_t)v3556;
	i4 v3558 = v3557+(-1);
	i4 v3559 = v3555&v3558;
	i4 v3560 = (i4)+0;
	if (v3559==v3560) goto c02_0274; else goto c02_0275;

c02_0274:;

c02_0277:;

	i8 v3561 = (i8)(intptr_t)(ws+3592);
	i4 v3562 = *(i4*)(intptr_t)v3561;
	i4 v3563 = (i4)+0;
	if (v3562==v3563) goto c02_027c; else goto c02_027b;

c02_027b:;

	i8 v3564 = (i8)(intptr_t)(ws+3596);
	i1 v3565 = *(i1*)(intptr_t)v3564;
	i1 v3566 = v3565+(+1);
	i8 v3567 = (i8)(intptr_t)(ws+3596);
	*(i1*)(intptr_t)v3567 = v3566;

	i8 v3568 = (i8)(intptr_t)(ws+3592);
	i4 v3569 = *(i4*)(intptr_t)v3568;
	i1 v3570 = (i1)+1;
	i4 v3571 = ((s4)v3569)>>v3570;
	i8 v3572 = (i8)(intptr_t)(ws+3592);
	*(i4*)(intptr_t)v3572 = v3571;

	goto c02_0277;

c02_027c:;

c02_0275:;

c02_026f:;

}
	void f171_FoldConstant2(void);
	void f150_MidConstant(void);
	void f63_Discard(void);
	void f63_Discard(void);
	void f173_GetPowerOfTwo(void);
	void f63_Discard(void);
	void f150_MidConstant(void);
	void f63_Discard(void);
	void f63_Discard(void);
	void f63_Discard(void);
	void f63_Discard(void);
	void f171_FoldConstant2(void);
	void f63_Discard(void);
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidC2Op workspace at ws+3496 length ws+96
void f174_MidC2Op(void) {

	i8 v3573 = (i8)(intptr_t)(ws+3496);
	i1 v3574 = *(i1*)(intptr_t)v3573;
	i1 v3575 = (i1)+133;
	if (v3574==v3575) goto c02_0284; else goto c02_0283;

c02_0284:;

	i8 v3576 = (i8)(intptr_t)(ws+3512);
	i8 v3577 = *(i8*)(intptr_t)v3576;
	i8 v3578 = v3577+(+48);
	i1 v3579 = *(i1*)(intptr_t)v3578;
	i1 v3580 = (i1)+42;
	if (v3579==v3580) goto c02_0282; else goto c02_0283;

c02_0282:;

	i8 v3581 = (i8)(intptr_t)(ws+3512);
	i8 v3582 = *(i8*)(intptr_t)v3581;
	i4 v3583 = *(i4*)(intptr_t)v3582;
	i4 v3584 = -v3583;
	i8 v3585 = (i8)(intptr_t)(ws+3512);
	i8 v3586 = *(i8*)(intptr_t)v3585;
	*(i4*)(intptr_t)v3586 = v3584;

	i1 v3587 = (i1)+158;
	i8 v3588 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3588 = v3587;

c02_0283:;

c02_027d:;

	i8 v3589 = (i8)(intptr_t)(ws+3496);
	i1 v3590 = *(i1*)(intptr_t)v3589;
	i1 v3591 = (i1)+158;
	if (v3590<v3591) goto c02_0289; else goto c02_0288;

c02_0288:;

	i8 v3592 = (i8)(intptr_t)(ws+3504);
	i8 v3593 = *(i8*)(intptr_t)v3592;
	i8 v3594 = v3593+(+48);
	i1 v3595 = *(i1*)(intptr_t)v3594;
	i1 v3596 = (i1)+42;
	if (v3595==v3596) goto c02_028d; else goto c02_028e;

c02_028d:;

	i8 v3597 = (i8)(intptr_t)(ws+3504);
	i8 v3598 = *(i8*)(intptr_t)v3597;
	i8 v3599 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3599 = v3598;

	i8 v3600 = (i8)(intptr_t)(ws+3512);
	i8 v3601 = *(i8*)(intptr_t)v3600;
	i8 v3602 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3602 = v3601;

	i8 v3603 = (i8)(intptr_t)(ws+3528);
	i8 v3604 = *(i8*)(intptr_t)v3603;
	i8 v3605 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3605 = v3604;

c02_028e:;

c02_028a:;

	i8 v3606 = (i8)(intptr_t)(ws+3512);
	i8 v3607 = *(i8*)(intptr_t)v3606;
	i8 v3608 = v3607+(+48);
	i1 v3609 = *(i1*)(intptr_t)v3608;
	i1 v3610 = (i1)+42;
	if (v3609==v3610) goto c02_029c; else goto c02_0299;

c02_029c:;

	i8 v3611 = (i8)(intptr_t)(ws+3504);
	i8 v3612 = *(i8*)(intptr_t)v3611;
	i8 v3613 = v3612+(+48);
	i1 v3614 = *(i1*)(intptr_t)v3613;
	i8 v3615 = (i8)(intptr_t)(ws+3496);
	i1 v3616 = *(i1*)(intptr_t)v3615;
	if (v3614<v3616) goto c02_0299; else goto c02_029b;

c02_029b:;

	i8 v3617 = (i8)(intptr_t)(ws+3496);
	i1 v3618 = *(i1*)(intptr_t)v3617;
	i1 v3619 = v3618+(+4);
	i8 v3620 = (i8)(intptr_t)(ws+3504);
	i8 v3621 = *(i8*)(intptr_t)v3620;
	i8 v3622 = v3621+(+48);
	i1 v3623 = *(i1*)(intptr_t)v3622;
	if (v3619<v3623) goto c02_0299; else goto c02_029a;

c02_029a:;

	i8 v3624 = (i8)(intptr_t)(ws+3504);
	i8 v3625 = *(i8*)(intptr_t)v3624;
	i8 v3626 = v3625+(+40);
	i8 v3627 = *(i8*)(intptr_t)v3626;
	i8 v3628 = v3627+(+48);
	i1 v3629 = *(i1*)(intptr_t)v3628;
	i1 v3630 = (i1)+42;
	if (v3629==v3630) goto c02_0298; else goto c02_0299;

c02_0298:;

	i8 v3631 = (i8)(intptr_t)(ws+3496);
	i1 v3632 = *(i1*)(intptr_t)v3631;
	*(i1*)(intptr_t)(ws+3592) = v3632;
	i8 v3633 = (i8)(intptr_t)(ws+3504);
	i8 v3634 = *(i8*)(intptr_t)v3633;
	i8 v3635 = v3634+(+40);
	i8 v3636 = *(i8*)(intptr_t)v3635;
	*(i8*)(intptr_t)(ws+3600) = v3636;
	i8 v3637 = (i8)(intptr_t)(ws+3512);
	i8 v3638 = *(i8*)(intptr_t)v3637;
	*(i8*)(intptr_t)(ws+3608) = v3638;
	i8 v3639 = (i8)(intptr_t)(f171_FoldConstant2);

	((void(*)(void))(intptr_t)v3639)();

	i4 v3640 = *(i4*)(intptr_t)(ws+3616);
	i8 v3641 = (i8)(intptr_t)(ws+3536);
	*(i4*)(intptr_t)v3641 = v3640;

	i8 v3642 = (i8)(intptr_t)(ws+3536);
	i4 v3643 = *(i4*)(intptr_t)v3642;
	*(i4*)(intptr_t)(ws+3592) = v3643;
	i8 v3644 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v3644)();

	i8 v3645 = *(i8*)(intptr_t)(ws+3600);
	i8 v3646 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v3646 = v3645;

	i8 v3647 = (i8)(intptr_t)(ws+3544);
	i8 v3648 = *(i8*)(intptr_t)v3647;
	i8 v3649 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3649 = v3648;

	i8 v3650 = (i8)(intptr_t)(ws+3512);
	i8 v3651 = *(i8*)(intptr_t)v3650;
	*(i8*)(intptr_t)(ws+3592) = v3651;
	i8 v3652 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3652)();

	i8 v3653 = (i8)(intptr_t)(ws+3528);
	i8 v3654 = *(i8*)(intptr_t)v3653;
	i8 v3655 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3655 = v3654;

	i8 v3656 = (i8)(intptr_t)(ws+3504);
	i8 v3657 = *(i8*)(intptr_t)v3656;
	i8 v3658 = v3657+(+32);
	i8 v3659 = *(i8*)(intptr_t)v3658;
	i8 v3660 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3660 = v3659;

	i8 v3661 = (i8)+0;
	i8 v3662 = (i8)(intptr_t)(ws+3504);
	i8 v3663 = *(i8*)(intptr_t)v3662;
	i8 v3664 = v3663+(+32);
	*(i8*)(intptr_t)v3664 = v3661;

	i8 v3665 = (i8)(intptr_t)(ws+3504);
	i8 v3666 = *(i8*)(intptr_t)v3665;
	*(i8*)(intptr_t)(ws+3592) = v3666;
	i8 v3667 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3667)();

	i8 v3668 = (i8)(intptr_t)(ws+3528);
	i8 v3669 = *(i8*)(intptr_t)v3668;
	i8 v3670 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3670 = v3669;

c02_0299:;

c02_028f:;

c02_0289:;

c02_0285:;

	i8 v3671 = (i8)(intptr_t)(ws+3504);
	i8 v3672 = *(i8*)(intptr_t)v3671;
	i8 v3673 = v3672+(+48);
	i1 v3674 = *(i1*)(intptr_t)v3673;
	i1 v3675 = (i1)+42;
	if (v3674==v3675) goto c02_02a3; else goto c02_02a4;

c02_02a4:;

	i8 v3676 = (i8)(intptr_t)(ws+3512);
	i8 v3677 = *(i8*)(intptr_t)v3676;
	i8 v3678 = v3677+(+48);
	i1 v3679 = *(i1*)(intptr_t)v3678;
	i1 v3680 = (i1)+42;
	if (v3679==v3680) goto c02_02a2; else goto c02_02a3;

c02_02a2:;

	i8 v3681 = (i8)(intptr_t)(ws+3496);
	i1 v3682 = *(i1*)(intptr_t)v3681;
	i1 v3683 = (i1)+163;
	if (v3682==v3683) goto c02_02ac; else goto c02_02af;

c02_02af:;

	i8 v3684 = (i8)(intptr_t)(ws+3496);
	i1 v3685 = *(i1*)(intptr_t)v3684;
	i1 v3686 = (i1)+143;
	if (v3685==v3686) goto c02_02ac; else goto c02_02ae;

c02_02ae:;

	i8 v3687 = (i8)(intptr_t)(ws+3496);
	i1 v3688 = *(i1*)(intptr_t)v3687;
	i1 v3689 = (i1)+138;
	if (v3688==v3689) goto c02_02ac; else goto c02_02ad;

c02_02ac:;

	i8 v3690 = (i8)(intptr_t)(ws+3512);
	i8 v3691 = *(i8*)(intptr_t)v3690;
	i4 v3692 = *(i4*)(intptr_t)v3691;
	i8 v3693 = (i8)(intptr_t)(ws+3552);
	*(i4*)(intptr_t)v3693 = v3692;

	i8 v3694 = (i8)(intptr_t)(ws+3552);
	i4 v3695 = *(i4*)(intptr_t)v3694;
	*(i4*)(intptr_t)(ws+3592) = v3695;
	i8 v3696 = (i8)(intptr_t)(f173_GetPowerOfTwo);

	((void(*)(void))(intptr_t)v3696)();

	i1 v3697 = *(i1*)(intptr_t)(ws+3596);
	i8 v3698 = (i8)(intptr_t)(ws+3556);
	*(i1*)(intptr_t)v3698 = v3697;

	i8 v3699 = (i8)(intptr_t)(ws+3556);
	i1 v3700 = *(i1*)(intptr_t)v3699;
	i8 v3701 = (i8)(intptr_t)(ws+3557);
	*(i1*)(intptr_t)v3701 = v3700;

	i8 v3702 = (i8)(intptr_t)(ws+3557);
	i1 v3703 = *(i1*)(intptr_t)v3702;
	i1 v3704 = (i1)+0;
	if (v3703==v3704) goto c02_02b4; else goto c02_02b3;

c02_02b3:;

	i8 v3705 = (i8)(intptr_t)(ws+3512);
	i8 v3706 = *(i8*)(intptr_t)v3705;
	*(i8*)(intptr_t)(ws+3592) = v3706;
	i8 v3707 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3707)();

	i8 v3708 = (i8)(intptr_t)(ws+3557);
	i1 v3709 = *(i1*)(intptr_t)v3708;
	i1 v3710 = v3709+(-1);
	i4 v3711 = v3710;
	*(i4*)(intptr_t)(ws+3592) = v3711;
	i8 v3712 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v3712)();

	i8 v3713 = *(i8*)(intptr_t)(ws+3600);
	i8 v3714 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v3714 = v3713;

	i8 v3715 = (i8)(intptr_t)(ws+3560);
	i8 v3716 = *(i8*)(intptr_t)v3715;
	i8 v3717 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3717 = v3716;

	i8 v3718 = (i8)(intptr_t)(ws+3496);
	i1 v3719 = *(i1*)(intptr_t)v3718;

	if (v3719 != +163) goto c02_02b6;

	i1 v3720 = (i1)+118;
	i8 v3721 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3721 = v3720;

	goto c02_02b5;

c02_02b6:;

	if (v3719 != +143) goto c02_02b7;

	i1 v3722 = (i1)+128;
	i8 v3723 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3723 = v3722;

	goto c02_02b5;

c02_02b7:;

	if (v3719 != +138) goto c02_02b8;

	i1 v3724 = (i1)+123;
	i8 v3725 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3725 = v3724;

c02_02b8:;

c02_02b5:;


c02_02b4:;

c02_02b0:;

c02_02ad:;

c02_02a5:;

	i8 v3726 = (i8)(intptr_t)(ws+3496);
	i1 v3727 = *(i1*)(intptr_t)v3726;
	i1 v3728 = (i1)+118;
	if (v3727==v3728) goto c02_02c0; else goto c02_02c3;

c02_02c3:;

	i8 v3729 = (i8)(intptr_t)(ws+3496);
	i1 v3730 = *(i1*)(intptr_t)v3729;
	i1 v3731 = (i1)+123;
	if (v3730==v3731) goto c02_02c0; else goto c02_02c2;

c02_02c2:;

	i8 v3732 = (i8)(intptr_t)(ws+3496);
	i1 v3733 = *(i1*)(intptr_t)v3732;
	i1 v3734 = (i1)+128;
	if (v3733==v3734) goto c02_02c0; else goto c02_02c1;

c02_02c0:;

	i8 v3735 = (i8)(intptr_t)(ws+3512);
	i8 v3736 = *(i8*)(intptr_t)v3735;
	i4 v3737 = *(i4*)(intptr_t)v3736;
	i4 v3738 = (i4)+0;
	if (v3737==v3738) goto c02_02c7; else goto c02_02c8;

c02_02c7:;

	i8 v3739 = (i8)(intptr_t)(ws+3512);
	i8 v3740 = *(i8*)(intptr_t)v3739;
	*(i8*)(intptr_t)(ws+3592) = v3740;
	i8 v3741 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3741)();

	i8 v3742 = (i8)(intptr_t)(ws+3504);
	i8 v3743 = *(i8*)(intptr_t)v3742;
	i8 v3744 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3744 = v3743;

	return;

c02_02c8:;

c02_02c4:;

c02_02c1:;

c02_02b9:;

	i8 v3745 = (i8)(intptr_t)(ws+3496);
	i1 v3746 = *(i1*)(intptr_t)v3745;
	i1 v3747 = (i1)+158;
	if (v3746==v3747) goto c02_02ce; else goto c02_02d0;

c02_02d0:;

	i8 v3748 = (i8)(intptr_t)(ws+3496);
	i1 v3749 = *(i1*)(intptr_t)v3748;
	i1 v3750 = (i1)+133;
	if (v3749==v3750) goto c02_02ce; else goto c02_02cf;

c02_02ce:;

	i8 v3751 = (i8)(intptr_t)(ws+3512);
	i8 v3752 = *(i8*)(intptr_t)v3751;
	i4 v3753 = *(i4*)(intptr_t)v3752;
	i4 v3754 = (i4)+0;
	if (v3753==v3754) goto c02_02d4; else goto c02_02d5;

c02_02d4:;

	i8 v3755 = (i8)(intptr_t)(ws+3512);
	i8 v3756 = *(i8*)(intptr_t)v3755;
	*(i8*)(intptr_t)(ws+3592) = v3756;
	i8 v3757 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3757)();

	i8 v3758 = (i8)(intptr_t)(ws+3504);
	i8 v3759 = *(i8*)(intptr_t)v3758;
	i8 v3760 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3760 = v3759;

	return;

c02_02d5:;

c02_02d1:;

	i8 v3761 = (i8)(intptr_t)(ws+3504);
	i8 v3762 = *(i8*)(intptr_t)v3761;
	i8 v3763 = v3762+(+48);
	i1 v3764 = *(i1*)(intptr_t)v3763;
	i1 v3765 = (i1)+44;
	if (v3764==v3765) goto c02_02d9; else goto c02_02da;

c02_02d9:;

	i8 v3766 = (i8)(intptr_t)(ws+3512);
	i8 v3767 = *(i8*)(intptr_t)v3766;
	i4 v3768 = *(i4*)(intptr_t)v3767;
	i2 v3769 = (s2)(s4)v3768;
	i8 v3770 = (i8)(intptr_t)(ws+3568);
	*(i2*)(intptr_t)v3770 = v3769;

	i8 v3771 = (i8)(intptr_t)(ws+3496);
	i1 v3772 = *(i1*)(intptr_t)v3771;

	if (v3772 != +158) goto c02_02dc;

	i8 v3773 = (i8)(intptr_t)(ws+3504);
	i8 v3774 = *(i8*)(intptr_t)v3773;
	i8 v3775 = v3774+(+8);
	i2 v3776 = *(i2*)(intptr_t)v3775;
	i8 v3777 = (i8)(intptr_t)(ws+3568);
	i2 v3778 = *(i2*)(intptr_t)v3777;
	i2 v3779 = v3776+v3778;
	i8 v3780 = (i8)(intptr_t)(ws+3504);
	i8 v3781 = *(i8*)(intptr_t)v3780;
	i8 v3782 = v3781+(+8);
	*(i2*)(intptr_t)v3782 = v3779;

	i8 v3783 = (i8)(intptr_t)(ws+3512);
	i8 v3784 = *(i8*)(intptr_t)v3783;
	*(i8*)(intptr_t)(ws+3592) = v3784;
	i8 v3785 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3785)();

	i8 v3786 = (i8)(intptr_t)(ws+3504);
	i8 v3787 = *(i8*)(intptr_t)v3786;
	i8 v3788 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3788 = v3787;

	return;

c02_02dc:;

	if (v3772 != +133) goto c02_02dd;

	i8 v3789 = (i8)(intptr_t)(ws+3504);
	i8 v3790 = *(i8*)(intptr_t)v3789;
	i8 v3791 = v3790+(+8);
	i2 v3792 = *(i2*)(intptr_t)v3791;
	i8 v3793 = (i8)(intptr_t)(ws+3568);
	i2 v3794 = *(i2*)(intptr_t)v3793;
	i2 v3795 = v3792-v3794;
	i8 v3796 = (i8)(intptr_t)(ws+3504);
	i8 v3797 = *(i8*)(intptr_t)v3796;
	i8 v3798 = v3797+(+8);
	*(i2*)(intptr_t)v3798 = v3795;

	i8 v3799 = (i8)(intptr_t)(ws+3512);
	i8 v3800 = *(i8*)(intptr_t)v3799;
	*(i8*)(intptr_t)(ws+3592) = v3800;
	i8 v3801 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3801)();

	i8 v3802 = (i8)(intptr_t)(ws+3504);
	i8 v3803 = *(i8*)(intptr_t)v3802;
	i8 v3804 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3804 = v3803;

	return;

c02_02dd:;

c02_02db:;


c02_02da:;

c02_02d6:;

c02_02cf:;

c02_02c9:;

c02_02a3:;

c02_029d:;

	i8 v3805 = (i8)(intptr_t)(ws+3504);
	i8 v3806 = *(i8*)(intptr_t)v3805;
	i8 v3807 = v3806+(+48);
	i1 v3808 = *(i1*)(intptr_t)v3807;
	i1 v3809 = (i1)+42;
	if (v3808==v3809) goto c02_02e5; else goto c02_02e4;

c02_02e5:;

	i8 v3810 = (i8)(intptr_t)(ws+3512);
	i8 v3811 = *(i8*)(intptr_t)v3810;
	i8 v3812 = v3811+(+48);
	i1 v3813 = *(i1*)(intptr_t)v3812;
	i1 v3814 = (i1)+42;
	if (v3813==v3814) goto c02_02e3; else goto c02_02e4;

c02_02e3:;

	i8 v3815 = (i8)(intptr_t)(ws+3496);
	i1 v3816 = *(i1*)(intptr_t)v3815;
	*(i1*)(intptr_t)(ws+3592) = v3816;
	i8 v3817 = (i8)(intptr_t)(ws+3504);
	i8 v3818 = *(i8*)(intptr_t)v3817;
	*(i8*)(intptr_t)(ws+3600) = v3818;
	i8 v3819 = (i8)(intptr_t)(ws+3512);
	i8 v3820 = *(i8*)(intptr_t)v3819;
	*(i8*)(intptr_t)(ws+3608) = v3820;
	i8 v3821 = (i8)(intptr_t)(f171_FoldConstant2);

	((void(*)(void))(intptr_t)v3821)();

	i4 v3822 = *(i4*)(intptr_t)(ws+3616);
	i8 v3823 = (i8)(intptr_t)(ws+3572);
	*(i4*)(intptr_t)v3823 = v3822;

	i8 v3824 = (i8)(intptr_t)(ws+3572);
	i4 v3825 = *(i4*)(intptr_t)v3824;
	i8 v3826 = (i8)(intptr_t)(ws+3504);
	i8 v3827 = *(i8*)(intptr_t)v3826;
	*(i4*)(intptr_t)v3827 = v3825;

	i8 v3828 = (i8)(intptr_t)(ws+3512);
	i8 v3829 = *(i8*)(intptr_t)v3828;
	*(i8*)(intptr_t)(ws+3592) = v3829;
	i8 v3830 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3830)();

	i8 v3831 = (i8)(intptr_t)(ws+3504);
	i8 v3832 = *(i8*)(intptr_t)v3831;
	i8 v3833 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3833 = v3832;

	return;

c02_02e4:;

c02_02de:;

	i8 v3834 = (i8)(intptr_t)(ws+3497);
	i1 v3835 = *(i1*)(intptr_t)v3834;
	*(i1*)(intptr_t)(ws+3592) = v3835;
	i8 v3836 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3836)();

	i1 v3837 = *(i1*)(intptr_t)(ws+3593);
	i8 v3838 = (i8)(intptr_t)(ws+3576);
	*(i1*)(intptr_t)v3838 = v3837;

	i8 v3839 = (i8)(intptr_t)(ws+3496);
	i1 v3840 = *(i1*)(intptr_t)v3839;
	i8 v3841 = (i8)(intptr_t)(ws+3576);
	i1 v3842 = *(i1*)(intptr_t)v3841;
	i1 v3843 = v3840+v3842;
	*(i1*)(intptr_t)(ws+3616) = v3843;
	i8 v3844 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3844)();

	i8 v3845 = *(i8*)(intptr_t)(ws+3624);
	i8 v3846 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v3846 = v3845;

	i8 v3847 = (i8)(intptr_t)(ws+3584);
	i8 v3848 = *(i8*)(intptr_t)v3847;
	i8 v3849 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3849 = v3848;

	i8 v3850 = (i8)(intptr_t)(ws+3504);
	i8 v3851 = *(i8*)(intptr_t)v3850;
	i8 v3852 = (i8)(intptr_t)(ws+3520);
	i8 v3853 = *(i8*)(intptr_t)v3852;
	i8 v3854 = v3853+(+32);
	*(i8*)(intptr_t)v3854 = v3851;

	i8 v3855 = (i8)(intptr_t)(ws+3512);
	i8 v3856 = *(i8*)(intptr_t)v3855;
	i8 v3857 = (i8)(intptr_t)(ws+3520);
	i8 v3858 = *(i8*)(intptr_t)v3857;
	i8 v3859 = v3858+(+40);
	*(i8*)(intptr_t)v3859 = v3856;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidCCast workspace at ws+3496 length ws+48
void f175_MidCCast(void) {

	i8 v3860 = (i8)(intptr_t)(ws+3504);
	i8 v3861 = *(i8*)(intptr_t)v3860;
	i8 v3862 = v3861+(+48);
	i1 v3863 = *(i1*)(intptr_t)v3862;
	i1 v3864 = (i1)+42;
	if (v3863==v3864) goto c02_02e9; else goto c02_02ea;

c02_02e9:;

	i8 v3865 = (i8)(intptr_t)(ws+3504);
	i8 v3866 = *(i8*)(intptr_t)v3865;
	i8 v3867 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3867 = v3866;

	return;

c02_02ea:;

c02_02e6:;

	i8 v3868 = (i8)(intptr_t)(ws+3504);
	i8 v3869 = *(i8*)(intptr_t)v3868;
	i8 v3870 = v3869+(+24);
	i8 v3871 = *(i8*)(intptr_t)v3870;
	i8 v3872 = v3871+(+48);
	i2 v3873 = *(i2*)(intptr_t)v3872;
	i1 v3874 = v3873;
	i8 v3875 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v3875 = v3874;

	i8 v3876 = (i8)(intptr_t)(ws+3528);
	i1 v3877 = *(i1*)(intptr_t)v3876;
	i8 v3878 = (i8)(intptr_t)(ws+3496);
	i1 v3879 = *(i1*)(intptr_t)v3878;
	if (v3877==v3879) goto c02_02ee; else goto c02_02ef;

c02_02ee:;

	i8 v3880 = (i8)(intptr_t)(ws+3504);
	i8 v3881 = *(i8*)(intptr_t)v3880;
	i8 v3882 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3882 = v3881;

	goto c02_02eb;

c02_02ef:;

	i8 v3883 = (i8)(intptr_t)(ws+3528);
	i1 v3884 = *(i1*)(intptr_t)v3883;

	if (v3884 != +1) goto c02_02f1;

	i1 v3885 = (i1)+88;
	i8 v3886 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3886 = v3885;

	goto c02_02f0;

c02_02f1:;

	if (v3884 != +2) goto c02_02f2;

	i1 v3887 = (i1)+93;
	i8 v3888 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3888 = v3887;

	goto c02_02f0;

c02_02f2:;

	if (v3884 != +4) goto c02_02f3;

	i1 v3889 = (i1)+98;
	i8 v3890 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3890 = v3889;

	goto c02_02f0;

c02_02f3:;

	if (v3884 != +8) goto c02_02f4;

	i1 v3891 = (i1)+103;
	i8 v3892 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3892 = v3891;

c02_02f4:;

c02_02f0:;


	i8 v3893 = (i8)(intptr_t)(ws+3496);
	i1 v3894 = *(i1*)(intptr_t)v3893;
	*(i1*)(intptr_t)(ws+3592) = v3894;
	i8 v3895 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3895)();

	i1 v3896 = *(i1*)(intptr_t)(ws+3593);
	i8 v3897 = (i8)(intptr_t)(ws+3530);
	*(i1*)(intptr_t)v3897 = v3896;

	i8 v3898 = (i8)(intptr_t)(ws+3529);
	i1 v3899 = *(i1*)(intptr_t)v3898;
	i8 v3900 = (i8)(intptr_t)(ws+3530);
	i1 v3901 = *(i1*)(intptr_t)v3900;
	i1 v3902 = v3899+v3901;
	*(i1*)(intptr_t)(ws+3616) = v3902;
	i8 v3903 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3903)();

	i8 v3904 = *(i8*)(intptr_t)(ws+3624);
	i8 v3905 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v3905 = v3904;

	i8 v3906 = (i8)(intptr_t)(ws+3536);
	i8 v3907 = *(i8*)(intptr_t)v3906;
	i8 v3908 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3908 = v3907;

	i8 v3909 = (i8)(intptr_t)(ws+3504);
	i8 v3910 = *(i8*)(intptr_t)v3909;
	i8 v3911 = (i8)(intptr_t)(ws+3520);
	i8 v3912 = *(i8*)(intptr_t)v3911;
	i8 v3913 = v3912+(+32);
	*(i8*)(intptr_t)v3913 = v3910;

	i8 v3914 = (i8)(intptr_t)(ws+3512);
	i1 v3915 = *(i1*)(intptr_t)v3914;
	i8 v3916 = (i8)(intptr_t)(ws+3520);
	i8 v3917 = *(i8*)(intptr_t)v3916;
	*(i1*)(intptr_t)v3917 = v3915;

c02_02eb:;

}
	void f47_FCBPutChar(void);

// E_b8 workspace at ws+3600 length ws+1
void f176_E_b8(void) {

	i8 v3918 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)(ws+3608) = v3918;
	i8 v3919 = (i8)(intptr_t)(ws+3600);
	i1 v3920 = *(i1*)(intptr_t)v3919;
	*(i1*)(intptr_t)(ws+3616) = v3920;
	i8 v3921 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v3921)();

}
	void f176_E_b8(void);
	void f176_E_b8(void);

// E_b16 workspace at ws+3576 length ws+2
void f177_E_b16(void) {

	i8 v3922 = (i8)(intptr_t)(ws+3576);
	i2 v3923 = *(i2*)(intptr_t)v3922;
	i1 v3924 = v3923;
	*(i1*)(intptr_t)(ws+3600) = v3924;
	i8 v3925 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v3925)();

	i8 v3926 = (i8)(intptr_t)(ws+3576);
	i2 v3927 = *(i2*)(intptr_t)v3926;
	i1 v3928 = (i1)+8;
	i2 v3929 = ((i2)v3927)>>v3928;
	i1 v3930 = v3929;
	*(i1*)(intptr_t)(ws+3600) = v3930;
	i8 v3931 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v3931)();

}
	void f177_E_b16(void);
	void f177_E_b16(void);

// E_b32 workspace at ws+3568 length ws+4
void f178_E_b32(void) {

	i8 v3932 = (i8)(intptr_t)(ws+3568);
	i4 v3933 = *(i4*)(intptr_t)v3932;
	i2 v3934 = v3933;
	*(i2*)(intptr_t)(ws+3576) = v3934;
	i8 v3935 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v3935)();

	i8 v3936 = (i8)(intptr_t)(ws+3568);
	i4 v3937 = *(i4*)(intptr_t)v3936;
	i1 v3938 = (i1)+16;
	i4 v3939 = ((i4)v3937)>>v3938;
	i2 v3940 = v3939;
	*(i2*)(intptr_t)(ws+3576) = v3940;
	i8 v3941 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v3941)();

}
	void f177_E_b16(void);

// E_bsize workspace at ws+3568 length ws+2
void f179_E_bsize(void) {

	i8 v3942 = (i8)(intptr_t)(ws+3568);
	i2 v3943 = *(i2*)(intptr_t)v3942;
	*(i2*)(intptr_t)(ws+3576) = v3943;
	i8 v3944 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v3944)();

}
	void f176_E_b8(void);

// E workspace at ws+3584 length ws+9
void f186_E(void) {

c02_02f5:;

	i8 v3957 = (i8)(intptr_t)(ws+3584);
	i8 v3958 = *(i8*)(intptr_t)v3957;
	i1 v3959 = *(i1*)(intptr_t)v3958;
	i8 v3960 = (i8)(intptr_t)(ws+3592);
	*(i1*)(intptr_t)v3960 = v3959;

	i8 v3961 = (i8)(intptr_t)(ws+3584);
	i8 v3962 = *(i8*)(intptr_t)v3961;
	i8 v3963 = v3962+(+1);
	i8 v3964 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v3964 = v3963;

	i8 v3965 = (i8)(intptr_t)(ws+3592);
	i1 v3966 = *(i1*)(intptr_t)v3965;
	i1 v3967 = (i1)+0;
	if (v3966==v3967) goto c02_02fa; else goto c02_02fb;

c02_02fa:;

	goto c02_02f6;

c02_02fb:;

c02_02f7:;

	i8 v3968 = (i8)(intptr_t)(ws+3592);
	i1 v3969 = *(i1*)(intptr_t)v3968;
	*(i1*)(intptr_t)(ws+3600) = v3969;
	i8 v3970 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v3970)();

	goto c02_02f5;

c02_02f6:;

}
	void f29_StrLen(void);
	void f176_E_b8(void);
	void f186_E(void);

// E_countedstring workspace at ws+3568 length ws+16
void f187_E_countedstring(void) {

	i8 v3971 = (i8)(intptr_t)(ws+3568);
	i8 v3972 = *(i8*)(intptr_t)v3971;
	*(i8*)(intptr_t)(ws+3584) = v3972;
	i8 v3973 = (i8)(intptr_t)(f29_StrLen);

	((void(*)(void))(intptr_t)v3973)();

	i8 v3974 = *(i8*)(intptr_t)(ws+3592);
	i8 v3975 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v3975 = v3974;

	i8 v3976 = (i8)(intptr_t)(ws+3576);
	i8 v3977 = *(i8*)(intptr_t)v3976;
	i1 v3978 = v3977;
	*(i1*)(intptr_t)(ws+3600) = v3978;
	i8 v3979 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v3979)();

	i8 v3980 = (i8)(intptr_t)(ws+3568);
	i8 v3981 = *(i8*)(intptr_t)v3980;
	*(i8*)(intptr_t)(ws+3584) = v3981;
	i8 v3982 = (i8)(intptr_t)(f186_E);

	((void(*)(void))(intptr_t)v3982)();

}
	void f54_FCBOpenOut(void);
const i1 c02_s00f6[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f76_SimpleError(void);

// EmitterOpenfile workspace at ws+3264 length ws+9
void f198_EmitterOpenfile(void) {

	i8 v4104 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)(ws+3280) = v4104;
	i8 v4105 = (i8)(intptr_t)(ws+3264);
	i8 v4106 = *(i8*)(intptr_t)v4105;
	*(i8*)(intptr_t)(ws+3288) = v4106;
	i8 v4107 = (i8)(intptr_t)(f54_FCBOpenOut);

	((void(*)(void))(intptr_t)v4107)();

	i1 v4108 = *(i1*)(intptr_t)(ws+3296);
	i8 v4109 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v4109 = v4108;

	i8 v4110 = (i8)(intptr_t)(ws+3272);
	i1 v4111 = *(i1*)(intptr_t)v4110;
	i1 v4112 = (i1)+0;
	if (v4111==v4112) goto c02_031c; else goto c02_031b;

c02_031b:;

	i8 v4113 = (i8)(intptr_t)c02_s00f6;
	*(i8*)(intptr_t)(ws+3648) = v4113;
	i8 v4114 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v4114)();

c02_031c:;

c02_0318:;

}
	void f176_E_b8(void);
	void f55_FCBClose(void);
const i1 c02_s00f7[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f76_SimpleError(void);

// EmitterClosefile workspace at ws+3264 length ws+1
void f199_EmitterClosefile(void) {

	i1 v4115 = (i1)+69;
	*(i1*)(intptr_t)(ws+3600) = v4115;
	i8 v4116 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4116)();

	i8 v4117 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)(ws+3384) = v4117;
	i8 v4118 = (i8)(intptr_t)(f55_FCBClose);

	((void(*)(void))(intptr_t)v4118)();

	i1 v4119 = *(i1*)(intptr_t)(ws+3392);
	i8 v4120 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v4120 = v4119;

	i8 v4121 = (i8)(intptr_t)(ws+3264);
	i1 v4122 = *(i1*)(intptr_t)v4121;
	i1 v4123 = (i1)+0;
	if (v4122==v4123) goto c02_0321; else goto c02_0320;

c02_0320:;

	i8 v4124 = (i8)(intptr_t)c02_s00f7;
	*(i8*)(intptr_t)(ws+3648) = v4124;
	i8 v4125 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v4125)();

c02_0321:;

c02_031d:;

}
	void f176_E_b8(void);
	void f177_E_b16(void);
	void f187_E_countedstring(void);

// EmitterDeclareSubroutine workspace at ws+3416 length ws+8
void f200_EmitterDeclareSubroutine(void) {

	i1 v4126 = (i1)+78;
	*(i1*)(intptr_t)(ws+3600) = v4126;
	i8 v4127 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4127)();

	i8 v4128 = (i8)(intptr_t)(ws+3416);
	i8 v4129 = *(i8*)(intptr_t)v4128;
	i8 v4130 = v4129+(+56);
	i2 v4131 = *(i2*)(intptr_t)v4130;
	*(i2*)(intptr_t)(ws+3576) = v4131;
	i8 v4132 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v4132)();

	i8 v4133 = (i8)(intptr_t)(ws+3416);
	i8 v4134 = *(i8*)(intptr_t)v4133;
	i8 v4135 = *(i8*)(intptr_t)v4134;
	i8 v4136 = v4135+(+8);
	i8 v4137 = *(i8*)(intptr_t)v4136;
	*(i8*)(intptr_t)(ws+3568) = v4137;
	i8 v4138 = (i8)(intptr_t)(f187_E_countedstring);

	((void(*)(void))(intptr_t)v4138)();

}
	void f176_E_b8(void);
	void f177_E_b16(void);
	void f187_E_countedstring(void);

// EmitterDeclareExternalSubroutine workspace at ws+3384 length ws+16
void f201_EmitterDeclareExternalSubroutine(void) {

	i1 v4139 = (i1)+88;
	*(i1*)(intptr_t)(ws+3600) = v4139;
	i8 v4140 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4140)();

	i8 v4141 = (i8)(intptr_t)(ws+3384);
	i2 v4142 = *(i2*)(intptr_t)v4141;
	*(i2*)(intptr_t)(ws+3576) = v4142;
	i8 v4143 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v4143)();

	i8 v4144 = (i8)(intptr_t)(ws+3392);
	i8 v4145 = *(i8*)(intptr_t)v4144;
	*(i8*)(intptr_t)(ws+3568) = v4145;
	i8 v4146 = (i8)(intptr_t)(f187_E_countedstring);

	((void(*)(void))(intptr_t)v4146)();

}
	void f176_E_b8(void);
	void f177_E_b16(void);
	void f177_E_b16(void);

// EmitterReferenceSubroutineById workspace at ws+3512 length ws+4
void f202_EmitterReferenceSubroutineById(void) {

	i1 v4147 = (i1)+82;
	*(i1*)(intptr_t)(ws+3600) = v4147;
	i8 v4148 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4148)();

	i8 v4149 = (i8)(intptr_t)(ws+3512);
	i2 v4150 = *(i2*)(intptr_t)v4149;
	*(i2*)(intptr_t)(ws+3576) = v4150;
	i8 v4151 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v4151)();

	i8 v4152 = (i8)(intptr_t)(ws+3514);
	i2 v4153 = *(i2*)(intptr_t)v4152;
	*(i2*)(intptr_t)(ws+3576) = v4153;
	i8 v4154 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v4154)();

}
	void f202_EmitterReferenceSubroutineById(void);

// EmitterReferenceSubroutine workspace at ws+3496 length ws+16
void f203_EmitterReferenceSubroutine(void) {

	i8 v4155 = (i8)(intptr_t)(ws+3496);
	i8 v4156 = *(i8*)(intptr_t)v4155;
	i8 v4157 = v4156+(+56);
	i2 v4158 = *(i2*)(intptr_t)v4157;
	*(i2*)(intptr_t)(ws+3512) = v4158;
	i8 v4159 = (i8)(intptr_t)(ws+3504);
	i8 v4160 = *(i8*)(intptr_t)v4159;
	i8 v4161 = v4160+(+56);
	i2 v4162 = *(i2*)(intptr_t)v4161;
	*(i2*)(intptr_t)(ws+3514) = v4162;
	i8 v4163 = (i8)(intptr_t)(f202_EmitterReferenceSubroutineById);

	((void(*)(void))(intptr_t)v4163)();

}
	void f176_E_b8(void);
	void f177_E_b16(void);
	void f176_E_b8(void);
	void f179_E_bsize(void);

// EmitterDeclareWorkspace workspace at ws+3424 length ws+12
void f204_EmitterDeclareWorkspace(void) {

	i1 v4164 = (i1)+87;
	*(i1*)(intptr_t)(ws+3600) = v4164;
	i8 v4165 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4165)();

	i8 v4166 = (i8)(intptr_t)(ws+3424);
	i8 v4167 = *(i8*)(intptr_t)v4166;
	i8 v4168 = v4167+(+56);
	i2 v4169 = *(i2*)(intptr_t)v4168;
	*(i2*)(intptr_t)(ws+3576) = v4169;
	i8 v4170 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v4170)();

	i8 v4171 = (i8)(intptr_t)(ws+3432);
	i1 v4172 = *(i1*)(intptr_t)v4171;
	*(i1*)(intptr_t)(ws+3600) = v4172;
	i8 v4173 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4173)();

	i8 v4174 = (i8)(intptr_t)(ws+3434);
	i2 v4175 = *(i2*)(intptr_t)v4174;
	*(i2*)(intptr_t)(ws+3568) = v4175;
	i8 v4176 = (i8)(intptr_t)(f179_E_bsize);

	((void(*)(void))(intptr_t)v4176)();

}
	void f177_E_b16(void);
	void f176_E_b8(void);
	void f179_E_bsize(void);
	void f187_E_countedstring(void);
	void f176_E_b8(void);

// EmitParameterList workspace at ws+3424 length ws+8
void f205_EmitParameterList(void) {

c02_0322:;

	i8 v4177 = (i8)(intptr_t)(ws+3424);
	i8 v4178 = *(i8*)(intptr_t)v4177;
	i8 v4179 = (i8)+0;
	if (v4178==v4179) goto c02_0327; else goto c02_0326;

c02_0326:;

	i8 v4180 = (i8)(intptr_t)(ws+3424);
	i8 v4181 = *(i8*)(intptr_t)v4180;
	i8 v4182 = *(i8*)(intptr_t)v4181;
	i8 v4183 = v4182+(+8);
	i8 v4184 = *(i8*)(intptr_t)v4183;
	i8 v4185 = v4184+(+56);
	i2 v4186 = *(i2*)(intptr_t)v4185;
	*(i2*)(intptr_t)(ws+3576) = v4186;
	i8 v4187 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v4187)();

	i8 v4188 = (i8)(intptr_t)(ws+3424);
	i8 v4189 = *(i8*)(intptr_t)v4188;
	i8 v4190 = *(i8*)(intptr_t)v4189;
	i8 v4191 = v4190+(+26);
	i1 v4192 = *(i1*)(intptr_t)v4191;
	*(i1*)(intptr_t)(ws+3600) = v4192;
	i8 v4193 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4193)();

	i8 v4194 = (i8)(intptr_t)(ws+3424);
	i8 v4195 = *(i8*)(intptr_t)v4194;
	i8 v4196 = *(i8*)(intptr_t)v4195;
	i8 v4197 = v4196+(+24);
	i2 v4198 = *(i2*)(intptr_t)v4197;
	*(i2*)(intptr_t)(ws+3568) = v4198;
	i8 v4199 = (i8)(intptr_t)(f179_E_bsize);

	((void(*)(void))(intptr_t)v4199)();

	i8 v4200 = (i8)(intptr_t)(ws+3424);
	i8 v4201 = *(i8*)(intptr_t)v4200;
	i8 v4202 = v4201+(+8);
	i8 v4203 = *(i8*)(intptr_t)v4202;
	*(i8*)(intptr_t)(ws+3568) = v4203;
	i8 v4204 = (i8)(intptr_t)(f187_E_countedstring);

	((void(*)(void))(intptr_t)v4204)();

	i8 v4205 = (i8)(intptr_t)(ws+3424);
	i8 v4206 = *(i8*)(intptr_t)v4205;
	i8 v4207 = *(i8*)(intptr_t)v4206;
	i8 v4208 = *(i8*)(intptr_t)v4207;
	i8 v4209 = v4208+(+48);
	i2 v4210 = *(i2*)(intptr_t)v4209;
	i1 v4211 = v4210;
	*(i1*)(intptr_t)(ws+3600) = v4211;
	i8 v4212 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4212)();

	i8 v4213 = (i8)(intptr_t)(ws+3424);
	i8 v4214 = *(i8*)(intptr_t)v4213;
	i8 v4215 = *(i8*)(intptr_t)v4214;
	i8 v4216 = v4215+(+16);
	i8 v4217 = *(i8*)(intptr_t)v4216;
	i8 v4218 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v4218 = v4217;

	goto c02_0322;

c02_0327:;

}
	void f176_E_b8(void);
	void f177_E_b16(void);
	void f176_E_b8(void);
	void f99_GetInputParameter(void);
	void f205_EmitParameterList(void);

// EmitterEmitInputParameters workspace at ws+3408 length ws+16
void f206_EmitterEmitInputParameters(void) {

	i1 v4219 = (i1)+73;
	*(i1*)(intptr_t)(ws+3600) = v4219;
	i8 v4220 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4220)();

	i8 v4221 = (i8)(intptr_t)(ws+3408);
	i8 v4222 = *(i8*)(intptr_t)v4221;
	i8 v4223 = v4222+(+56);
	i2 v4224 = *(i2*)(intptr_t)v4223;
	*(i2*)(intptr_t)(ws+3576) = v4224;
	i8 v4225 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v4225)();

	i8 v4226 = (i8)(intptr_t)(ws+3408);
	i8 v4227 = *(i8*)(intptr_t)v4226;
	i8 v4228 = v4227+(+80);
	i1 v4229 = *(i1*)(intptr_t)v4228;
	*(i1*)(intptr_t)(ws+3600) = v4229;
	i8 v4230 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4230)();

	i8 v4231 = (i8)(intptr_t)(ws+3408);
	i8 v4232 = *(i8*)(intptr_t)v4231;
	*(i8*)(intptr_t)(ws+3464) = v4232;
	i1 v4233 = (i1)+0;
	*(i1*)(intptr_t)(ws+3472) = v4233;
	i8 v4234 = (i8)(intptr_t)(f99_GetInputParameter);

	((void(*)(void))(intptr_t)v4234)();

	i8 v4235 = *(i8*)(intptr_t)(ws+3480);
	i8 v4236 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4236 = v4235;

	i8 v4237 = (i8)(intptr_t)(ws+3416);
	i8 v4238 = *(i8*)(intptr_t)v4237;
	*(i8*)(intptr_t)(ws+3424) = v4238;
	i8 v4239 = (i8)(intptr_t)(f205_EmitParameterList);

	((void(*)(void))(intptr_t)v4239)();

}
	void f176_E_b8(void);
	void f177_E_b16(void);
	void f176_E_b8(void);
	void f100_GetOutputParameter(void);
	void f205_EmitParameterList(void);

// EmitterEmitOutputParameters workspace at ws+3408 length ws+16
void f207_EmitterEmitOutputParameters(void) {

	i1 v4240 = (i1)+79;
	*(i1*)(intptr_t)(ws+3600) = v4240;
	i8 v4241 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4241)();

	i8 v4242 = (i8)(intptr_t)(ws+3408);
	i8 v4243 = *(i8*)(intptr_t)v4242;
	i8 v4244 = v4243+(+56);
	i2 v4245 = *(i2*)(intptr_t)v4244;
	*(i2*)(intptr_t)(ws+3576) = v4245;
	i8 v4246 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v4246)();

	i8 v4247 = (i8)(intptr_t)(ws+3408);
	i8 v4248 = *(i8*)(intptr_t)v4247;
	i8 v4249 = v4248+(+81);
	i1 v4250 = *(i1*)(intptr_t)v4249;
	*(i1*)(intptr_t)(ws+3600) = v4250;
	i8 v4251 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4251)();

	i8 v4252 = (i8)(intptr_t)(ws+3408);
	i8 v4253 = *(i8*)(intptr_t)v4252;
	*(i8*)(intptr_t)(ws+3488) = v4253;
	i1 v4254 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v4254;
	i8 v4255 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v4255)();

	i8 v4256 = *(i8*)(intptr_t)(ws+3504);
	i8 v4257 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4257 = v4256;

	i8 v4258 = (i8)(intptr_t)(ws+3416);
	i8 v4259 = *(i8*)(intptr_t)v4258;
	*(i8*)(intptr_t)(ws+3424) = v4259;
	i8 v4260 = (i8)(intptr_t)(f205_EmitParameterList);

	((void(*)(void))(intptr_t)v4260)();

}
	void f176_E_b8(void);
	void f177_E_b16(void);
	void f176_E_b8(void);

// EmitterEmitSubroutineFlags workspace at ws+3408 length ws+8
void f208_EmitterEmitSubroutineFlags(void) {

	i1 v4261 = (i1)+70;
	*(i1*)(intptr_t)(ws+3600) = v4261;
	i8 v4262 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4262)();

	i8 v4263 = (i8)(intptr_t)(ws+3408);
	i8 v4264 = *(i8*)(intptr_t)v4263;
	i8 v4265 = v4264+(+56);
	i2 v4266 = *(i2*)(intptr_t)v4265;
	*(i2*)(intptr_t)(ws+3576) = v4266;
	i8 v4267 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v4267)();

	i8 v4268 = (i8)(intptr_t)(ws+3408);
	i8 v4269 = *(i8*)(intptr_t)v4268;
	i8 v4270 = v4269+(+82);
	i1 v4271 = *(i1*)(intptr_t)v4270;
	*(i1*)(intptr_t)(ws+3600) = v4271;
	i8 v4272 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v4272)();

}
	void f26_StrCmp(void);

// LookupSymbolInNamespace workspace at ws+3528 length ws+25
void f218_LookupSymbolInNamespace(void) {

	i8 v4592 = (i8)(intptr_t)(ws+3528);
	i8 v4593 = *(i8*)(intptr_t)v4592;
	i8 v4594 = *(i8*)(intptr_t)v4593;
	i8 v4595 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4595 = v4594;

c02_03b0:;

	i8 v4596 = (i8)(intptr_t)(ws+3544);
	i8 v4597 = *(i8*)(intptr_t)v4596;
	i8 v4598 = (i8)+0;
	if (v4597==v4598) goto c02_03b5; else goto c02_03b4;

c02_03b4:;

	i8 v4599 = (i8)(intptr_t)(ws+3544);
	i8 v4600 = *(i8*)(intptr_t)v4599;
	i8 v4601 = v4600+(+8);
	i8 v4602 = *(i8*)(intptr_t)v4601;
	*(i8*)(intptr_t)(ws+3560) = v4602;
	i8 v4603 = (i8)(intptr_t)(ws+3536);
	i8 v4604 = *(i8*)(intptr_t)v4603;
	*(i8*)(intptr_t)(ws+3568) = v4604;
	i8 v4605 = (i8)(intptr_t)(f26_StrCmp);

	((void(*)(void))(intptr_t)v4605)();

	i1 v4606 = *(i1*)(intptr_t)(ws+3576);
	i8 v4607 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4607 = v4606;

	i8 v4608 = (i8)(intptr_t)(ws+3552);
	i1 v4609 = *(i1*)(intptr_t)v4608;
	i1 v4610 = (i1)+0;
	if (v4609==v4610) goto c02_03b9; else goto c02_03ba;

c02_03b9:;

c02_03bb:;

	i8 v4611 = (i8)(intptr_t)(ws+3544);
	i8 v4612 = *(i8*)(intptr_t)v4611;
	i8 v4613 = v4612+(+32);
	i1 v4614 = *(i1*)(intptr_t)v4613;
	i1 v4615 = (i1)+39;
	if (v4614==v4615) goto c02_03bf; else goto c02_03c0;

c02_03bf:;

	i8 v4616 = (i8)(intptr_t)(ws+3544);
	i8 v4617 = *(i8*)(intptr_t)v4616;
	i8 v4618 = *(i8*)(intptr_t)v4617;
	i8 v4619 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4619 = v4618;

	goto c02_03bb;

c02_03c0:;

	return;

c02_03ba:;

c02_03b6:;

	i8 v4620 = (i8)(intptr_t)(ws+3544);
	i8 v4621 = *(i8*)(intptr_t)v4620;
	i8 v4622 = v4621+(+24);
	i8 v4623 = *(i8*)(intptr_t)v4622;
	i8 v4624 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4624 = v4623;

	goto c02_03b0;

c02_03b5:;

	i8 v4625 = (i8)+0;
	i8 v4626 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4626 = v4625;

}
	void f218_LookupSymbolInNamespace(void);

// LookupSymbol workspace at ws+3488 length ws+32
void f219_LookupSymbol(void) {

	i8 v4627 = (i8)(intptr_t)(ws+3488);
	i8 v4628 = *(i8*)(intptr_t)v4627;
	i8 v4629 = (i8)+0;
	if (v4628==v4629) goto c02_03c4; else goto c02_03c5;

c02_03c4:;

	i8 v4630 = (i8)(intptr_t)(ws+40);
	i8 v4631 = *(i8*)(intptr_t)v4630;
	i8 v4632 = v4631+(+16);
	i8 v4633 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v4633 = v4632;

c02_03c5:;

c02_03c1:;

c02_03c6:;

	i8 v4634 = (i8)(intptr_t)(ws+3488);
	i8 v4635 = *(i8*)(intptr_t)v4634;
	i8 v4636 = (i8)+0;
	if (v4635==v4636) goto c02_03cb; else goto c02_03ca;

c02_03ca:;

	i8 v4637 = (i8)(intptr_t)(ws+3488);
	i8 v4638 = *(i8*)(intptr_t)v4637;
	*(i8*)(intptr_t)(ws+3528) = v4638;
	i8 v4639 = (i8)(intptr_t)(ws+3496);
	i8 v4640 = *(i8*)(intptr_t)v4639;
	*(i8*)(intptr_t)(ws+3536) = v4640;
	i8 v4641 = (i8)(intptr_t)(f218_LookupSymbolInNamespace);

	((void(*)(void))(intptr_t)v4641)();

	i8 v4642 = *(i8*)(intptr_t)(ws+3544);
	i8 v4643 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v4643 = v4642;

	i8 v4644 = (i8)(intptr_t)(ws+3512);
	i8 v4645 = *(i8*)(intptr_t)v4644;
	i8 v4646 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4646 = v4645;

	i8 v4647 = (i8)(intptr_t)(ws+3504);
	i8 v4648 = *(i8*)(intptr_t)v4647;
	i8 v4649 = (i8)+0;
	if (v4648==v4649) goto c02_03d0; else goto c02_03cf;

c02_03cf:;

	return;

c02_03d0:;

c02_03cc:;

	i8 v4650 = (i8)(intptr_t)(ws+3488);
	i8 v4651 = *(i8*)(intptr_t)v4650;
	i8 v4652 = v4651+(+16);
	i8 v4653 = *(i8*)(intptr_t)v4652;
	i8 v4654 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v4654 = v4653;

	goto c02_03c6;

c02_03cb:;

	i8 v4655 = (i8)+0;
	i8 v4656 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4656 = v4655;

}

// AddToNamespace workspace at ws+3568 length ws+16
void f220_AddToNamespace(void) {

	i8 v4657 = (i8)(intptr_t)(ws+3568);
	i8 v4658 = *(i8*)(intptr_t)v4657;
	i8 v4659 = v4658+(+8);
	i8 v4660 = *(i8*)(intptr_t)v4659;
	i8 v4661 = (i8)+0;
	if (v4660==v4661) goto c02_03d4; else goto c02_03d5;

c02_03d4:;

	i8 v4662 = (i8)(intptr_t)(ws+3576);
	i8 v4663 = *(i8*)(intptr_t)v4662;
	i8 v4664 = (i8)(intptr_t)(ws+3568);
	i8 v4665 = *(i8*)(intptr_t)v4664;
	*(i8*)(intptr_t)v4665 = v4663;

	i8 v4666 = (i8)(intptr_t)(ws+3576);
	i8 v4667 = *(i8*)(intptr_t)v4666;
	i8 v4668 = (i8)(intptr_t)(ws+3568);
	i8 v4669 = *(i8*)(intptr_t)v4668;
	i8 v4670 = v4669+(+8);
	*(i8*)(intptr_t)v4670 = v4667;

	goto c02_03d1;

c02_03d5:;

	i8 v4671 = (i8)(intptr_t)(ws+3576);
	i8 v4672 = *(i8*)(intptr_t)v4671;
	i8 v4673 = (i8)(intptr_t)(ws+3568);
	i8 v4674 = *(i8*)(intptr_t)v4673;
	i8 v4675 = v4674+(+8);
	i8 v4676 = *(i8*)(intptr_t)v4675;
	i8 v4677 = v4676+(+24);
	*(i8*)(intptr_t)v4677 = v4672;

	i8 v4678 = (i8)(intptr_t)(ws+3576);
	i8 v4679 = *(i8*)(intptr_t)v4678;
	i8 v4680 = (i8)(intptr_t)(ws+3568);
	i8 v4681 = *(i8*)(intptr_t)v4680;
	i8 v4682 = v4681+(+8);
	*(i8*)(intptr_t)v4682 = v4679;

c02_03d1:;

	i8 v4683 = (i8)(intptr_t)(ws+3568);
	i8 v4684 = *(i8*)(intptr_t)v4683;
	i8 v4685 = (i8)(intptr_t)(ws+3576);
	i8 v4686 = *(i8*)(intptr_t)v4685;
	i8 v4687 = v4686+(+16);
	*(i8*)(intptr_t)v4687 = v4684;

}
	void f64_AllocNewSymbol(void);
	void f218_LookupSymbolInNamespace(void);
	void f74_StartError(void);
const i1 c02_s00f8[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s00f9[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f220_AddToNamespace(void);

// AddSymbol workspace at ws+3488 length ws+40
void f221_AddSymbol(void) {

	i8 v4688 = (i8)(intptr_t)(ws+3488);
	i8 v4689 = *(i8*)(intptr_t)v4688;
	i8 v4690 = (i8)+0;
	if (v4689==v4690) goto c02_03d9; else goto c02_03da;

c02_03d9:;

	i8 v4691 = (i8)(intptr_t)(ws+40);
	i8 v4692 = *(i8*)(intptr_t)v4691;
	i8 v4693 = v4692+(+16);
	i8 v4694 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v4694 = v4693;

c02_03da:;

c02_03d6:;

	i8 v4695 = (i8)(intptr_t)(f64_AllocNewSymbol);

	((void(*)(void))(intptr_t)v4695)();

	i8 v4696 = *(i8*)(intptr_t)(ws+3568);
	i8 v4697 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v4697 = v4696;

	i8 v4698 = (i8)(intptr_t)(ws+3512);
	i8 v4699 = *(i8*)(intptr_t)v4698;
	i8 v4700 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4700 = v4699;

	i8 v4701 = (i8)(intptr_t)(ws+3496);
	i8 v4702 = *(i8*)(intptr_t)v4701;
	i8 v4703 = (i8)+0;
	if (v4702==v4703) goto c02_03df; else goto c02_03de;

c02_03de:;

	i8 v4704 = (i8)(intptr_t)(ws+3488);
	i8 v4705 = *(i8*)(intptr_t)v4704;
	*(i8*)(intptr_t)(ws+3528) = v4705;
	i8 v4706 = (i8)(intptr_t)(ws+3496);
	i8 v4707 = *(i8*)(intptr_t)v4706;
	*(i8*)(intptr_t)(ws+3536) = v4707;
	i8 v4708 = (i8)(intptr_t)(f218_LookupSymbolInNamespace);

	((void(*)(void))(intptr_t)v4708)();

	i8 v4709 = *(i8*)(intptr_t)(ws+3544);
	i8 v4710 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4710 = v4709;

	i8 v4711 = (i8)(intptr_t)(ws+3520);
	i8 v4712 = *(i8*)(intptr_t)v4711;
	i8 v4713 = (i8)+0;
	if (v4712==v4713) goto c02_03e4; else goto c02_03e3;

c02_03e3:;

	i8 v4714 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v4714)();

	i8 v4715 = (i8)(intptr_t)c02_s00f8;
	*(i8*)(intptr_t)(ws+3696) = v4715;
	i8 v4716 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4716)();

	i8 v4717 = (i8)(intptr_t)(ws+3496);
	i8 v4718 = *(i8*)(intptr_t)v4717;
	*(i8*)(intptr_t)(ws+3696) = v4718;
	i8 v4719 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4719)();

	i8 v4720 = (i8)(intptr_t)c02_s00f9;
	*(i8*)(intptr_t)(ws+3696) = v4720;
	i8 v4721 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4721)();

	i8 v4722 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v4722)();

c02_03e4:;

c02_03e0:;

	i8 v4723 = (i8)(intptr_t)(ws+3496);
	i8 v4724 = *(i8*)(intptr_t)v4723;
	i8 v4725 = (i8)(intptr_t)(ws+3504);
	i8 v4726 = *(i8*)(intptr_t)v4725;
	i8 v4727 = v4726+(+8);
	*(i8*)(intptr_t)v4727 = v4724;

	i8 v4728 = (i8)(intptr_t)(ws+3488);
	i8 v4729 = *(i8*)(intptr_t)v4728;
	*(i8*)(intptr_t)(ws+3568) = v4729;
	i8 v4730 = (i8)(intptr_t)(ws+3504);
	i8 v4731 = *(i8*)(intptr_t)v4730;
	*(i8*)(intptr_t)(ws+3576) = v4731;
	i8 v4732 = (i8)(intptr_t)(f220_AddToNamespace);

	((void(*)(void))(intptr_t)v4732)();

c02_03df:;

c02_03db:;

}
	void f221_AddSymbol(void);

// AddAlias workspace at ws+3400 length ws+40
void f222_AddAlias(void) {

	i8 v4733 = (i8)(intptr_t)(ws+3400);
	i8 v4734 = *(i8*)(intptr_t)v4733;
	*(i8*)(intptr_t)(ws+3488) = v4734;
	i8 v4735 = (i8)(intptr_t)(ws+3408);
	i8 v4736 = *(i8*)(intptr_t)v4735;
	*(i8*)(intptr_t)(ws+3496) = v4736;
	i8 v4737 = (i8)(intptr_t)(f221_AddSymbol);

	((void(*)(void))(intptr_t)v4737)();

	i8 v4738 = *(i8*)(intptr_t)(ws+3504);
	i8 v4739 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v4739 = v4738;

	i8 v4740 = (i8)(intptr_t)(ws+3432);
	i8 v4741 = *(i8*)(intptr_t)v4740;
	i8 v4742 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v4742 = v4741;

	i1 v4743 = (i1)+39;
	i8 v4744 = (i8)(intptr_t)(ws+3424);
	i8 v4745 = *(i8*)(intptr_t)v4744;
	i8 v4746 = v4745+(+32);
	*(i1*)(intptr_t)v4746 = v4743;

	i8 v4747 = (i8)(intptr_t)(ws+3416);
	i8 v4748 = *(i8*)(intptr_t)v4747;
	i8 v4749 = (i8)(intptr_t)(ws+3424);
	i8 v4750 = *(i8*)(intptr_t)v4749;
	*(i8*)(intptr_t)v4750 = v4748;

}
	void f222_AddAlias(void);

// AddAliasString workspace at ws+3336 length ws+32
void f223_AddAliasString(void) {

	i8 v4751 = (i8)+0;
	*(i8*)(intptr_t)(ws+3400) = v4751;
	i8 v4752 = (i8)(intptr_t)(ws+3336);
	i8 v4753 = *(i8*)(intptr_t)v4752;
	*(i8*)(intptr_t)(ws+3408) = v4753;
	i8 v4754 = (i8)(intptr_t)(ws+3344);
	i8 v4755 = *(i8*)(intptr_t)v4754;
	*(i8*)(intptr_t)(ws+3416) = v4755;
	i8 v4756 = (i8)(intptr_t)(f222_AddAlias);

	((void(*)(void))(intptr_t)v4756)();

	i8 v4757 = *(i8*)(intptr_t)(ws+3424);
	i8 v4758 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4758 = v4757;

	i8 v4759 = (i8)(intptr_t)(ws+3352);
	i8 v4760 = *(i8*)(intptr_t)v4759;
	i8 v4761 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4761 = v4760;

}
	void f74_StartError(void);
const i1 c02_s00fa[] = { 0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s00fb[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// CheckNotPartialType workspace at ws+3520 length ws+8
void f224_CheckNotPartialType(void) {

	i8 v4762 = (i8)(intptr_t)(ws+3520);
	i8 v4763 = *(i8*)(intptr_t)v4762;
	i8 v4764 = v4763+(+52);
	i1 v4765 = *(i1*)(intptr_t)v4764;
	i1 v4766 = (i1)+1;
	if (v4765==v4766) goto c02_03e8; else goto c02_03e9;

c02_03e8:;

	i8 v4767 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v4767)();

	i8 v4768 = (i8)(intptr_t)c02_s00fa;
	*(i8*)(intptr_t)(ws+3696) = v4768;
	i8 v4769 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4769)();

	i8 v4770 = (i8)(intptr_t)(ws+3520);
	i8 v4771 = *(i8*)(intptr_t)v4770;
	i8 v4772 = v4771+(+32);
	i8 v4773 = *(i8*)(intptr_t)v4772;
	i8 v4774 = v4773+(+8);
	i8 v4775 = *(i8*)(intptr_t)v4774;
	*(i8*)(intptr_t)(ws+3696) = v4775;
	i8 v4776 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4776)();

	i8 v4777 = (i8)(intptr_t)c02_s00fb;
	*(i8*)(intptr_t)(ws+3696) = v4777;
	i8 v4778 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4778)();

	i8 v4779 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v4779)();

c02_03e9:;

c02_03e5:;

}
	void f64_AllocNewSymbol(void);
	void f220_AddToNamespace(void);

// AddTypeToNamespace workspace at ws+3528 length ws+40
void f225_AddTypeToNamespace(void) {

	i8 v4780 = (i8)(intptr_t)(f64_AllocNewSymbol);

	((void(*)(void))(intptr_t)v4780)();

	i8 v4781 = *(i8*)(intptr_t)(ws+3568);
	i8 v4782 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v4782 = v4781;

	i8 v4783 = (i8)(intptr_t)(ws+3552);
	i8 v4784 = *(i8*)(intptr_t)v4783;
	i8 v4785 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v4785 = v4784;

	i1 v4786 = (i1)+30;
	i8 v4787 = (i8)(intptr_t)(ws+3560);
	i8 v4788 = *(i8*)(intptr_t)v4787;
	i8 v4789 = v4788+(+32);
	*(i1*)(intptr_t)v4789 = v4786;

	i8 v4790 = (i8)(intptr_t)(ws+3536);
	i8 v4791 = *(i8*)(intptr_t)v4790;
	i8 v4792 = (i8)(intptr_t)(ws+3560);
	i8 v4793 = *(i8*)(intptr_t)v4792;
	*(i8*)(intptr_t)v4793 = v4791;

	i8 v4794 = (i8)(intptr_t)(ws+3544);
	i8 v4795 = *(i8*)(intptr_t)v4794;
	i8 v4796 = (i8)(intptr_t)(ws+3560);
	i8 v4797 = *(i8*)(intptr_t)v4796;
	i8 v4798 = v4797+(+8);
	*(i8*)(intptr_t)v4798 = v4795;

	i8 v4799 = (i8)(intptr_t)(ws+3560);
	i8 v4800 = *(i8*)(intptr_t)v4799;
	i8 v4801 = (i8)(intptr_t)(ws+3536);
	i8 v4802 = *(i8*)(intptr_t)v4801;
	i8 v4803 = v4802+(+32);
	*(i8*)(intptr_t)v4803 = v4800;

	i8 v4804 = (i8)(intptr_t)(ws+3528);
	i8 v4805 = *(i8*)(intptr_t)v4804;
	*(i8*)(intptr_t)(ws+3568) = v4805;
	i8 v4806 = (i8)(intptr_t)(ws+3560);
	i8 v4807 = *(i8*)(intptr_t)v4806;
	*(i8*)(intptr_t)(ws+3576) = v4807;
	i8 v4808 = (i8)(intptr_t)(f220_AddToNamespace);

	((void(*)(void))(intptr_t)v4808)();

}
	void f66_AllocNewType(void);
	void f225_AddTypeToNamespace(void);

// MakeNumberType workspace at ws+3336 length ws+32
void f226_MakeNumberType(void) {

	i8 v4809 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v4809)();

	i8 v4810 = *(i8*)(intptr_t)(ws+3528);
	i8 v4811 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4811 = v4810;

	i8 v4812 = (i8)(intptr_t)(ws+3360);
	i8 v4813 = *(i8*)(intptr_t)v4812;
	i8 v4814 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4814 = v4813;

	i1 v4815 = (i1)+2;
	i8 v4816 = (i8)(intptr_t)(ws+3352);
	i8 v4817 = *(i8*)(intptr_t)v4816;
	i8 v4818 = v4817+(+52);
	*(i1*)(intptr_t)v4818 = v4815;

	i8 v4819 = (i8)(intptr_t)(ws+3336);
	i1 v4820 = *(i1*)(intptr_t)v4819;
	i2 v4821 = v4820;
	i8 v4822 = (i8)(intptr_t)(ws+3352);
	i8 v4823 = *(i8*)(intptr_t)v4822;
	i8 v4824 = v4823+(+48);
	*(i2*)(intptr_t)v4824 = v4821;

	i8 v4825 = (i8)(intptr_t)(ws+3336);
	i1 v4826 = *(i1*)(intptr_t)v4825;
	i2 v4827 = v4826;
	i8 v4828 = (i8)(intptr_t)(ws+3352);
	i8 v4829 = *(i8*)(intptr_t)v4828;
	i8 v4830 = v4829+(+50);
	*(i2*)(intptr_t)v4830 = v4827;

	i8 v4831 = (i8)(intptr_t)(ws+3337);
	i1 v4832 = *(i1*)(intptr_t)v4831;
	i8 v4833 = (i8)(intptr_t)(ws+3352);
	i8 v4834 = *(i8*)(intptr_t)v4833;
	i8 v4835 = v4834+(+53);
	*(i1*)(intptr_t)v4835 = v4832;

	i8 v4836 = (i8)(intptr_t)(ws+3338);
	i1 v4837 = *(i1*)(intptr_t)v4836;
	i8 v4838 = (i8)(intptr_t)(ws+3352);
	i8 v4839 = *(i8*)(intptr_t)v4838;
	*(i1*)(intptr_t)v4839 = v4837;

	i8 v4840 = (i8)(intptr_t)(ws+40);
	i8 v4841 = *(i8*)(intptr_t)v4840;
	i8 v4842 = v4841+(+16);
	*(i8*)(intptr_t)(ws+3528) = v4842;
	i8 v4843 = (i8)(intptr_t)(ws+3352);
	i8 v4844 = *(i8*)(intptr_t)v4843;
	*(i8*)(intptr_t)(ws+3536) = v4844;
	i8 v4845 = (i8)(intptr_t)(ws+3344);
	i8 v4846 = *(i8*)(intptr_t)v4845;
	*(i8*)(intptr_t)(ws+3544) = v4846;
	i8 v4847 = (i8)(intptr_t)(f225_AddTypeToNamespace);

	((void(*)(void))(intptr_t)v4847)();

}

// IsTypeOfKind workspace at ws+3576 length ws+10
void f227_IsTypeOfKind(void) {

	i1 v4848 = (i1)+0;
	i8 v4849 = (i8)(intptr_t)(ws+3585);
	*(i1*)(intptr_t)v4849 = v4848;

	i8 v4850 = (i8)(intptr_t)(ws+3576);
	i8 v4851 = *(i8*)(intptr_t)v4850;
	i8 v4852 = (i8)+0;
	if (v4851==v4852) goto c02_03f0; else goto c02_03f1;

c02_03f1:;

	i8 v4853 = (i8)(intptr_t)(ws+3576);
	i8 v4854 = *(i8*)(intptr_t)v4853;
	i8 v4855 = v4854+(+52);
	i1 v4856 = *(i1*)(intptr_t)v4855;
	i8 v4857 = (i8)(intptr_t)(ws+3584);
	i1 v4858 = *(i1*)(intptr_t)v4857;
	if (v4856==v4858) goto c02_03ef; else goto c02_03f0;

c02_03ef:;

	i1 v4859 = (i1)+1;
	i8 v4860 = (i8)(intptr_t)(ws+3585);
	*(i1*)(intptr_t)v4860 = v4859;

c02_03f0:;

c02_03ea:;

}
	void f227_IsTypeOfKind(void);

// IsArray workspace at ws+3496 length ws+10
void f228_IsArray(void) {

	i8 v4861 = (i8)(intptr_t)(ws+3496);
	i8 v4862 = *(i8*)(intptr_t)v4861;
	*(i8*)(intptr_t)(ws+3576) = v4862;
	i1 v4863 = (i1)+4;
	*(i1*)(intptr_t)(ws+3584) = v4863;
	i8 v4864 = (i8)(intptr_t)(f227_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4864)();

	i1 v4865 = *(i1*)(intptr_t)(ws+3585);
	i8 v4866 = (i8)(intptr_t)(ws+3505);
	*(i1*)(intptr_t)v4866 = v4865;

	i8 v4867 = (i8)(intptr_t)(ws+3505);
	i1 v4868 = *(i1*)(intptr_t)v4867;
	i8 v4869 = (i8)(intptr_t)(ws+3504);
	*(i1*)(intptr_t)v4869 = v4868;

}
	void f227_IsTypeOfKind(void);

// IsPtr workspace at ws+3560 length ws+10
void f68_IsPtr(void) {

	i8 v4870 = (i8)(intptr_t)(ws+3560);
	i8 v4871 = *(i8*)(intptr_t)v4870;
	*(i8*)(intptr_t)(ws+3576) = v4871;
	i1 v4872 = (i1)+3;
	*(i1*)(intptr_t)(ws+3584) = v4872;
	i8 v4873 = (i8)(intptr_t)(f227_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4873)();

	i1 v4874 = *(i1*)(intptr_t)(ws+3585);
	i8 v4875 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v4875 = v4874;

	i8 v4876 = (i8)(intptr_t)(ws+3569);
	i1 v4877 = *(i1*)(intptr_t)v4876;
	i8 v4878 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4878 = v4877;

}
	void f227_IsTypeOfKind(void);

// IsSubroutine workspace at ws+3560 length ws+10
void f229_IsSubroutine(void) {

	i8 v4879 = (i8)(intptr_t)(ws+3560);
	i8 v4880 = *(i8*)(intptr_t)v4879;
	*(i8*)(intptr_t)(ws+3576) = v4880;
	i1 v4881 = (i1)+6;
	*(i1*)(intptr_t)(ws+3584) = v4881;
	i8 v4882 = (i8)(intptr_t)(f227_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4882)();

	i1 v4883 = *(i1*)(intptr_t)(ws+3585);
	i8 v4884 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v4884 = v4883;

	i8 v4885 = (i8)(intptr_t)(ws+3569);
	i1 v4886 = *(i1*)(intptr_t)v4885;
	i8 v4887 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4887 = v4886;

}
	void f227_IsTypeOfKind(void);

// IsNum workspace at ws+3560 length ws+10
void f230_IsNum(void) {

	i8 v4888 = (i8)(intptr_t)(ws+3560);
	i8 v4889 = *(i8*)(intptr_t)v4888;
	i8 v4890 = (i8)+0;
	if (v4889==v4890) goto c02_03f5; else goto c02_03f6;

c02_03f5:;

	i1 v4891 = (i1)+1;
	i8 v4892 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4892 = v4891;

	goto c02_03f2;

c02_03f6:;

	i8 v4893 = (i8)(intptr_t)(ws+3560);
	i8 v4894 = *(i8*)(intptr_t)v4893;
	*(i8*)(intptr_t)(ws+3576) = v4894;
	i1 v4895 = (i1)+2;
	*(i1*)(intptr_t)(ws+3584) = v4895;
	i8 v4896 = (i8)(intptr_t)(f227_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4896)();

	i1 v4897 = *(i1*)(intptr_t)(ws+3585);
	i8 v4898 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v4898 = v4897;

	i8 v4899 = (i8)(intptr_t)(ws+3569);
	i1 v4900 = *(i1*)(intptr_t)v4899;
	i8 v4901 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4901 = v4900;

c02_03f2:;

}
	void f227_IsTypeOfKind(void);

// IsSNum workspace at ws+3456 length ws+10
void f231_IsSNum(void) {

	i8 v4902 = (i8)(intptr_t)(ws+3456);
	i8 v4903 = *(i8*)(intptr_t)v4902;
	i8 v4904 = (i8)+0;
	if (v4903==v4904) goto c02_03fa; else goto c02_03fb;

c02_03fa:;

	i1 v4905 = (i1)+1;
	i8 v4906 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v4906 = v4905;

	goto c02_03f7;

c02_03fb:;

	i8 v4907 = (i8)(intptr_t)(ws+3456);
	i8 v4908 = *(i8*)(intptr_t)v4907;
	*(i8*)(intptr_t)(ws+3576) = v4908;
	i1 v4909 = (i1)+2;
	*(i1*)(intptr_t)(ws+3584) = v4909;
	i8 v4910 = (i8)(intptr_t)(f227_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4910)();

	i1 v4911 = *(i1*)(intptr_t)(ws+3585);
	i8 v4912 = (i8)(intptr_t)(ws+3465);
	*(i1*)(intptr_t)v4912 = v4911;

	i8 v4913 = (i8)(intptr_t)(ws+3465);
	i1 v4914 = *(i1*)(intptr_t)v4913;
	i1 v4915 = (i1)+0;
	if (v4914==v4915) goto c02_0401; else goto c02_0402;

c02_0402:;

	i8 v4916 = (i8)(intptr_t)(ws+3456);
	i8 v4917 = *(i8*)(intptr_t)v4916;
	i1 v4918 = *(i1*)(intptr_t)v4917;
	i1 v4919 = (i1)+0;
	if (v4918==v4919) goto c02_0401; else goto c02_0400;

c02_0400:;

	i1 v4920 = (i1)+1;
	i8 v4921 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v4921 = v4920;

	goto c02_03f7;

c02_0401:;

	i1 v4922 = (i1)+0;
	i8 v4923 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v4923 = v4922;

c02_03f7:;

}
	void f68_IsPtr(void);
	void f230_IsNum(void);
	void f229_IsSubroutine(void);

// IsScalar workspace at ws+3544 length ws+12
void f232_IsScalar(void) {

	i8 v4924 = (i8)(intptr_t)(ws+3544);
	i8 v4925 = *(i8*)(intptr_t)v4924;
	*(i8*)(intptr_t)(ws+3560) = v4925;
	i8 v4926 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v4926)();

	i1 v4927 = *(i1*)(intptr_t)(ws+3568);
	i8 v4928 = (i8)(intptr_t)(ws+3553);
	*(i1*)(intptr_t)v4928 = v4927;

	i8 v4929 = (i8)(intptr_t)(ws+3544);
	i8 v4930 = *(i8*)(intptr_t)v4929;
	*(i8*)(intptr_t)(ws+3560) = v4930;
	i8 v4931 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v4931)();

	i1 v4932 = *(i1*)(intptr_t)(ws+3568);
	i8 v4933 = (i8)(intptr_t)(ws+3554);
	*(i1*)(intptr_t)v4933 = v4932;

	i8 v4934 = (i8)(intptr_t)(ws+3544);
	i8 v4935 = *(i8*)(intptr_t)v4934;
	*(i8*)(intptr_t)(ws+3560) = v4935;
	i8 v4936 = (i8)(intptr_t)(f229_IsSubroutine);

	((void(*)(void))(intptr_t)v4936)();

	i1 v4937 = *(i1*)(intptr_t)(ws+3568);
	i8 v4938 = (i8)(intptr_t)(ws+3555);
	*(i1*)(intptr_t)v4938 = v4937;

	i8 v4939 = (i8)(intptr_t)(ws+3553);
	i1 v4940 = *(i1*)(intptr_t)v4939;
	i1 v4941 = (i1)+0;
	if (v4940==v4941) goto c02_040d; else goto c02_040a;

c02_040d:;

	i8 v4942 = (i8)(intptr_t)(ws+3554);
	i1 v4943 = *(i1*)(intptr_t)v4942;
	i1 v4944 = (i1)+0;
	if (v4943==v4944) goto c02_040c; else goto c02_040a;

c02_040c:;

	i8 v4945 = (i8)(intptr_t)(ws+3555);
	i1 v4946 = *(i1*)(intptr_t)v4945;
	i1 v4947 = (i1)+0;
	if (v4946==v4947) goto c02_040b; else goto c02_040a;

c02_040a:;

	i1 v4948 = (i1)+1;
	i8 v4949 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4949 = v4948;

	goto c02_0403;

c02_040b:;

	i1 v4950 = (i1)+0;
	i8 v4951 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4951 = v4950;

c02_0403:;

}
	void f227_IsTypeOfKind(void);

// IsRecord workspace at ws+3488 length ws+10
void f233_IsRecord(void) {

	i8 v4952 = (i8)(intptr_t)(ws+3488);
	i8 v4953 = *(i8*)(intptr_t)v4952;
	*(i8*)(intptr_t)(ws+3576) = v4953;
	i1 v4954 = (i1)+5;
	*(i1*)(intptr_t)(ws+3584) = v4954;
	i8 v4955 = (i8)(intptr_t)(f227_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4955)();

	i1 v4956 = *(i1*)(intptr_t)(ws+3585);
	i8 v4957 = (i8)(intptr_t)(ws+3497);
	*(i1*)(intptr_t)v4957 = v4956;

	i8 v4958 = (i8)(intptr_t)(ws+3497);
	i1 v4959 = *(i1*)(intptr_t)v4958;
	i8 v4960 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v4960 = v4959;

}
	void f232_IsScalar(void);
	void f134_MidDeref(void);

// MakeLValue workspace at ws+3496 length ws+48
void f234_MakeLValue(void) {

	i1 v4961 = (i1)+0;
	i8 v4962 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v4962 = v4961;

	i8 v4963 = (i8)(intptr_t)(ws+3496);
	i8 v4964 = *(i8*)(intptr_t)v4963;
	i8 v4965 = v4964+(+24);
	i8 v4966 = *(i8*)(intptr_t)v4965;
	i8 v4967 = *(i8*)(intptr_t)v4966;
	i8 v4968 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4968 = v4967;

	i8 v4969 = (i8)(intptr_t)(ws+3520);
	i8 v4970 = *(i8*)(intptr_t)v4969;
	*(i8*)(intptr_t)(ws+3544) = v4970;
	i8 v4971 = (i8)(intptr_t)(f232_IsScalar);

	((void(*)(void))(intptr_t)v4971)();

	i1 v4972 = *(i1*)(intptr_t)(ws+3552);
	i8 v4973 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v4973 = v4972;

	i8 v4974 = (i8)(intptr_t)(ws+3528);
	i1 v4975 = *(i1*)(intptr_t)v4974;
	i1 v4976 = (i1)+0;
	if (v4975==v4976) goto c02_0412; else goto c02_0411;

c02_0411:;

	i8 v4977 = (i8)(intptr_t)(ws+3520);
	i8 v4978 = *(i8*)(intptr_t)v4977;
	i8 v4979 = v4978+(+48);
	i2 v4980 = *(i2*)(intptr_t)v4979;
	i1 v4981 = v4980;
	i8 v4982 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v4982 = v4981;

c02_0412:;

c02_040e:;

	i8 v4983 = (i8)(intptr_t)(ws+3512);
	i1 v4984 = *(i1*)(intptr_t)v4983;
	*(i1*)(intptr_t)(ws+3544) = v4984;
	i8 v4985 = (i8)(intptr_t)(ws+3496);
	i8 v4986 = *(i8*)(intptr_t)v4985;
	*(i8*)(intptr_t)(ws+3552) = v4986;
	i8 v4987 = (i8)(intptr_t)(f134_MidDeref);

	((void(*)(void))(intptr_t)v4987)();

	i8 v4988 = *(i8*)(intptr_t)(ws+3560);
	i8 v4989 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v4989 = v4988;

	i8 v4990 = (i8)(intptr_t)(ws+3536);
	i8 v4991 = *(i8*)(intptr_t)v4990;
	i8 v4992 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4992 = v4991;

	i8 v4993 = (i8)(intptr_t)(ws+3520);
	i8 v4994 = *(i8*)(intptr_t)v4993;
	i8 v4995 = (i8)(intptr_t)(ws+3504);
	i8 v4996 = *(i8*)(intptr_t)v4995;
	i8 v4997 = v4996+(+24);
	*(i8*)(intptr_t)v4997 = v4994;

}
const i1 c02_s00fc[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(void);
	void f63_Discard(void);

// UndoLValue workspace at ws+3432 length ws+17
void f235_UndoLValue(void) {

	i8 v4998 = (i8)(intptr_t)(ws+3432);
	i8 v4999 = *(i8*)(intptr_t)v4998;
	i8 v5000 = v4999+(+48);
	i1 v5001 = *(i1*)(intptr_t)v5000;
	i8 v5002 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v5002 = v5001;

	i8 v5003 = (i8)(intptr_t)(ws+3448);
	i1 v5004 = *(i1*)(intptr_t)v5003;
	i1 v5005 = (i1)+46;
	if (v5004<v5005) goto c02_0418; else goto c02_041a;

c02_041a:;

	i1 v5006 = (i1)+50;
	i8 v5007 = (i8)(intptr_t)(ws+3448);
	i1 v5008 = *(i1*)(intptr_t)v5007;
	if (v5006<v5008) goto c02_0418; else goto c02_0419;

c02_0418:;

	i8 v5009 = (i8)(intptr_t)c02_s00fc;
	*(i8*)(intptr_t)(ws+3648) = v5009;
	i8 v5010 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v5010)();

c02_0419:;

c02_0413:;

	i8 v5011 = (i8)(intptr_t)(ws+3432);
	i8 v5012 = *(i8*)(intptr_t)v5011;
	i8 v5013 = v5012+(+32);
	i8 v5014 = *(i8*)(intptr_t)v5013;
	i8 v5015 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v5015 = v5014;

	i8 v5016 = (i8)+0;
	i8 v5017 = (i8)(intptr_t)(ws+3432);
	i8 v5018 = *(i8*)(intptr_t)v5017;
	i8 v5019 = v5018+(+32);
	*(i8*)(intptr_t)v5019 = v5016;

	i8 v5020 = (i8)(intptr_t)(ws+3432);
	i8 v5021 = *(i8*)(intptr_t)v5020;
	*(i8*)(intptr_t)(ws+3592) = v5021;
	i8 v5022 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v5022)();

}

// IsLValue workspace at ws+3488 length ws+10
void f236_IsLValue(void) {

	i1 v5023 = (i1)+0;
	i8 v5024 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5024 = v5023;

	i8 v5025 = (i8)(intptr_t)(ws+3488);
	i8 v5026 = *(i8*)(intptr_t)v5025;
	i8 v5027 = v5026+(+48);
	i1 v5028 = *(i1*)(intptr_t)v5027;
	i8 v5029 = (i8)(intptr_t)(ws+3497);
	*(i1*)(intptr_t)v5029 = v5028;

	i8 v5030 = (i8)(intptr_t)(ws+3497);
	i1 v5031 = *(i1*)(intptr_t)v5030;
	i1 v5032 = (i1)+46;
	if (v5031<v5032) goto c02_0421; else goto c02_0422;

c02_0422:;

	i1 v5033 = (i1)+50;
	i8 v5034 = (i8)(intptr_t)(ws+3497);
	i1 v5035 = *(i1*)(intptr_t)v5034;
	if (v5033<v5035) goto c02_0421; else goto c02_0420;

c02_0420:;

	i1 v5036 = (i1)+1;
	i8 v5037 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5037 = v5036;

c02_0421:;

c02_041b:;

}
	void f68_IsPtr(void);
const i1 c02_s00fd[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x72,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(void);

// MaybeUndoLValue workspace at ws+3496 length ws+18
void f237_MaybeUndoLValue(void) {

	i8 v5038 = (i8)(intptr_t)(ws+3496);
	i8 v5039 = *(i8*)(intptr_t)v5038;
	i8 v5040 = v5039+(+48);
	i1 v5041 = *(i1*)(intptr_t)v5040;
	i8 v5042 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v5042 = v5041;

	i8 v5043 = (i8)(intptr_t)(ws+3512);
	i1 v5044 = *(i1*)(intptr_t)v5043;
	i1 v5045 = (i1)+46;
	if (v5044<v5045) goto c02_0429; else goto c02_042a;

c02_042a:;

	i1 v5046 = (i1)+50;
	i8 v5047 = (i8)(intptr_t)(ws+3512);
	i1 v5048 = *(i1*)(intptr_t)v5047;
	if (v5046<v5048) goto c02_0429; else goto c02_0428;

c02_0428:;

	i8 v5049 = (i8)(intptr_t)(ws+3496);
	i8 v5050 = *(i8*)(intptr_t)v5049;
	i8 v5051 = v5050+(+32);
	i8 v5052 = *(i8*)(intptr_t)v5051;
	i8 v5053 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5053 = v5052;

	i8 v5054 = (i8)+0;
	i8 v5055 = (i8)(intptr_t)(ws+3496);
	i8 v5056 = *(i8*)(intptr_t)v5055;
	i8 v5057 = v5056+(+32);
	*(i8*)(intptr_t)v5057 = v5054;

	goto c02_0423;

c02_0429:;

	i8 v5058 = (i8)(intptr_t)(ws+3496);
	i8 v5059 = *(i8*)(intptr_t)v5058;
	i8 v5060 = v5059+(+24);
	i8 v5061 = *(i8*)(intptr_t)v5060;
	*(i8*)(intptr_t)(ws+3560) = v5061;
	i8 v5062 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v5062)();

	i1 v5063 = *(i1*)(intptr_t)(ws+3568);
	i8 v5064 = (i8)(intptr_t)(ws+3513);
	*(i1*)(intptr_t)v5064 = v5063;

	i8 v5065 = (i8)(intptr_t)(ws+3513);
	i1 v5066 = *(i1*)(intptr_t)v5065;
	i1 v5067 = (i1)+0;
	if (v5066==v5067) goto c02_042e; else goto c02_042d;

c02_042d:;

	i8 v5068 = (i8)(intptr_t)(ws+3496);
	i8 v5069 = *(i8*)(intptr_t)v5068;
	i8 v5070 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5070 = v5069;

	goto c02_0423;

c02_042e:;

	i8 v5071 = (i8)(intptr_t)c02_s00fd;
	*(i8*)(intptr_t)(ws+3648) = v5071;
	i8 v5072 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v5072)();

c02_0423:;

}

// AllocLabel workspace at ws+3472 length ws+2
void f238_AllocLabel(void) {

	i8 v5073 = (i8)(intptr_t)(ws+48);
	i2 v5074 = *(i2*)(intptr_t)v5073;
	i8 v5075 = (i8)(intptr_t)(ws+3472);
	*(i2*)(intptr_t)v5075 = v5074;

	i8 v5076 = (i8)(intptr_t)(ws+48);
	i2 v5077 = *(i2*)(intptr_t)v5076;
	i2 v5078 = v5077+(+1);
	i8 v5079 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v5079 = v5078;

}

// AllocSubrId workspace at ws+3416 length ws+2
void f239_AllocSubrId(void) {

	i8 v5080 = (i8)(intptr_t)(ws+50);
	i2 v5081 = *(i2*)(intptr_t)v5080;
	i8 v5082 = (i8)(intptr_t)(ws+3416);
	*(i2*)(intptr_t)v5082 = v5081;

	i8 v5083 = (i8)(intptr_t)(ws+50);
	i2 v5084 = *(i2*)(intptr_t)v5083;
	i2 v5085 = v5084+(+1);
	i8 v5086 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v5086 = v5085;

}

// MidWriter workspace at ws+3560 length ws+8
void f240_MidWriter(void) {

}

// ArchAlignUp workspace at ws+3544 length ws+8
void f241_ArchAlignUp(void) {

	i8 v5087 = (i8)(intptr_t)(ws+3546);
	i1 v5088 = *(i1*)(intptr_t)v5087;
	i1 v5089 = v5088+(-1);
	i2 v5090 = v5089;
	i8 v5091 = (i8)(intptr_t)(ws+3550);
	*(i2*)(intptr_t)v5091 = v5090;

	i8 v5092 = (i8)(intptr_t)(ws+3544);
	i2 v5093 = *(i2*)(intptr_t)v5092;
	i8 v5094 = (i8)(intptr_t)(ws+3550);
	i2 v5095 = *(i2*)(intptr_t)v5094;
	i2 v5096 = v5093+v5095;
	i8 v5097 = (i8)(intptr_t)(ws+3550);
	i2 v5098 = *(i2*)(intptr_t)v5097;
	i2 v5099 = ~v5098;
	i2 v5100 = v5096&v5099;
	i8 v5101 = (i8)(intptr_t)(ws+3548);
	*(i2*)(intptr_t)v5101 = v5100;

}
const i1 c02_s00fe[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f226_MakeNumberType(void);
const i1 c02_s00ff[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f226_MakeNumberType(void);
const i1 c02_s0100[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f226_MakeNumberType(void);
const i1 c02_s0101[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f226_MakeNumberType(void);
const i1 c02_s0102[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f226_MakeNumberType(void);
const i1 c02_s0103[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f226_MakeNumberType(void);
const i1 c02_s0104[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f226_MakeNumberType(void);
const i1 c02_s0105[] = { 0x69,0x6e,0x74,0x38,0 };
	void f226_MakeNumberType(void);
const i1 c02_s0106[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f219_LookupSymbol(void);
const i1 c02_s0107[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
	void f223_AddAliasString(void);

// ArchInitTypes workspace at ws+3264 length ws+72
void f242_ArchInitTypes(void) {

	i1 v5102 = (i1)+8;
	*(i1*)(intptr_t)(ws+3336) = v5102;
	i1 v5103 = (i1)+8;
	*(i1*)(intptr_t)(ws+3337) = v5103;
	i1 v5104 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5104;
	i8 v5105 = (i8)(intptr_t)c02_s00fe;
	*(i8*)(intptr_t)(ws+3344) = v5105;
	i8 v5106 = (i8)(intptr_t)(f226_MakeNumberType);

	((void(*)(void))(intptr_t)v5106)();

	i8 v5107 = *(i8*)(intptr_t)(ws+3352);
	i8 v5108 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5108 = v5107;

	i8 v5109 = (i8)(intptr_t)(ws+3264);
	i8 v5110 = *(i8*)(intptr_t)v5109;
	i8 v5111 = (i8)(intptr_t)(ws+1464);
	*(i8*)(intptr_t)v5111 = v5110;

	i1 v5112 = (i1)+8;
	*(i1*)(intptr_t)(ws+3336) = v5112;
	i1 v5113 = (i1)+8;
	*(i1*)(intptr_t)(ws+3337) = v5113;
	i1 v5114 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5114;
	i8 v5115 = (i8)(intptr_t)c02_s00ff;
	*(i8*)(intptr_t)(ws+3344) = v5115;
	i8 v5116 = (i8)(intptr_t)(f226_MakeNumberType);

	((void(*)(void))(intptr_t)v5116)();

	i8 v5117 = *(i8*)(intptr_t)(ws+3352);
	i8 v5118 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v5118 = v5117;

	i8 v5119 = (i8)(intptr_t)(ws+3272);
	i8 v5120 = *(i8*)(intptr_t)v5119;
	i8 v5121 = (i8)(intptr_t)(ws+1472);
	*(i8*)(intptr_t)v5121 = v5120;

	i1 v5122 = (i1)+4;
	*(i1*)(intptr_t)(ws+3336) = v5122;
	i1 v5123 = (i1)+4;
	*(i1*)(intptr_t)(ws+3337) = v5123;
	i1 v5124 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5124;
	i8 v5125 = (i8)(intptr_t)c02_s0100;
	*(i8*)(intptr_t)(ws+3344) = v5125;
	i8 v5126 = (i8)(intptr_t)(f226_MakeNumberType);

	((void(*)(void))(intptr_t)v5126)();

	i8 v5127 = *(i8*)(intptr_t)(ws+3352);
	i8 v5128 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v5128 = v5127;

	i8 v5129 = (i8)(intptr_t)(ws+3280);
	i8 v5130 = *(i8*)(intptr_t)v5129;
	i8 v5131 = (i8)(intptr_t)(ws+1480);
	*(i8*)(intptr_t)v5131 = v5130;

	i1 v5132 = (i1)+4;
	*(i1*)(intptr_t)(ws+3336) = v5132;
	i1 v5133 = (i1)+4;
	*(i1*)(intptr_t)(ws+3337) = v5133;
	i1 v5134 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5134;
	i8 v5135 = (i8)(intptr_t)c02_s0101;
	*(i8*)(intptr_t)(ws+3344) = v5135;
	i8 v5136 = (i8)(intptr_t)(f226_MakeNumberType);

	((void(*)(void))(intptr_t)v5136)();

	i8 v5137 = *(i8*)(intptr_t)(ws+3352);
	i8 v5138 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v5138 = v5137;

	i8 v5139 = (i8)(intptr_t)(ws+3288);
	i8 v5140 = *(i8*)(intptr_t)v5139;
	i8 v5141 = (i8)(intptr_t)(ws+1488);
	*(i8*)(intptr_t)v5141 = v5140;

	i1 v5142 = (i1)+2;
	*(i1*)(intptr_t)(ws+3336) = v5142;
	i1 v5143 = (i1)+2;
	*(i1*)(intptr_t)(ws+3337) = v5143;
	i1 v5144 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5144;
	i8 v5145 = (i8)(intptr_t)c02_s0102;
	*(i8*)(intptr_t)(ws+3344) = v5145;
	i8 v5146 = (i8)(intptr_t)(f226_MakeNumberType);

	((void(*)(void))(intptr_t)v5146)();

	i8 v5147 = *(i8*)(intptr_t)(ws+3352);
	i8 v5148 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v5148 = v5147;

	i8 v5149 = (i8)(intptr_t)(ws+3296);
	i8 v5150 = *(i8*)(intptr_t)v5149;
	i8 v5151 = (i8)(intptr_t)(ws+1496);
	*(i8*)(intptr_t)v5151 = v5150;

	i1 v5152 = (i1)+2;
	*(i1*)(intptr_t)(ws+3336) = v5152;
	i1 v5153 = (i1)+2;
	*(i1*)(intptr_t)(ws+3337) = v5153;
	i1 v5154 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5154;
	i8 v5155 = (i8)(intptr_t)c02_s0103;
	*(i8*)(intptr_t)(ws+3344) = v5155;
	i8 v5156 = (i8)(intptr_t)(f226_MakeNumberType);

	((void(*)(void))(intptr_t)v5156)();

	i8 v5157 = *(i8*)(intptr_t)(ws+3352);
	i8 v5158 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v5158 = v5157;

	i8 v5159 = (i8)(intptr_t)(ws+3304);
	i8 v5160 = *(i8*)(intptr_t)v5159;
	i8 v5161 = (i8)(intptr_t)(ws+1504);
	*(i8*)(intptr_t)v5161 = v5160;

	i1 v5162 = (i1)+1;
	*(i1*)(intptr_t)(ws+3336) = v5162;
	i1 v5163 = (i1)+1;
	*(i1*)(intptr_t)(ws+3337) = v5163;
	i1 v5164 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5164;
	i8 v5165 = (i8)(intptr_t)c02_s0104;
	*(i8*)(intptr_t)(ws+3344) = v5165;
	i8 v5166 = (i8)(intptr_t)(f226_MakeNumberType);

	((void(*)(void))(intptr_t)v5166)();

	i8 v5167 = *(i8*)(intptr_t)(ws+3352);
	i8 v5168 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v5168 = v5167;

	i8 v5169 = (i8)(intptr_t)(ws+3312);
	i8 v5170 = *(i8*)(intptr_t)v5169;
	i8 v5171 = (i8)(intptr_t)(ws+1512);
	*(i8*)(intptr_t)v5171 = v5170;

	i1 v5172 = (i1)+1;
	*(i1*)(intptr_t)(ws+3336) = v5172;
	i1 v5173 = (i1)+1;
	*(i1*)(intptr_t)(ws+3337) = v5173;
	i1 v5174 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5174;
	i8 v5175 = (i8)(intptr_t)c02_s0105;
	*(i8*)(intptr_t)(ws+3344) = v5175;
	i8 v5176 = (i8)(intptr_t)(f226_MakeNumberType);

	((void(*)(void))(intptr_t)v5176)();

	i8 v5177 = *(i8*)(intptr_t)(ws+3352);
	i8 v5178 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v5178 = v5177;

	i8 v5179 = (i8)(intptr_t)(ws+3320);
	i8 v5180 = *(i8*)(intptr_t)v5179;
	i8 v5181 = (i8)(intptr_t)(ws+1520);
	*(i8*)(intptr_t)v5181 = v5180;

	i8 v5182 = (i8)(intptr_t)(ws+1464);
	i8 v5183 = *(i8*)(intptr_t)v5182;
	i8 v5184 = (i8)(intptr_t)(ws+1528);
	*(i8*)(intptr_t)v5184 = v5183;

	i8 v5185 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v5185;
	i8 v5186 = (i8)(intptr_t)c02_s0106;
	*(i8*)(intptr_t)(ws+3496) = v5186;
	i8 v5187 = (i8)(intptr_t)(f219_LookupSymbol);

	((void(*)(void))(intptr_t)v5187)();

	i8 v5188 = *(i8*)(intptr_t)(ws+3504);
	i8 v5189 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v5189 = v5188;

	i8 v5190 = (i8)(intptr_t)c02_s0107;
	*(i8*)(intptr_t)(ws+3336) = v5190;
	i8 v5191 = (i8)(intptr_t)(ws+3328);
	i8 v5192 = *(i8*)(intptr_t)v5191;
	*(i8*)(intptr_t)(ws+3344) = v5192;
	i8 v5193 = (i8)(intptr_t)(f223_AddAliasString);

	((void(*)(void))(intptr_t)v5193)();

}

// ArchGuessIntType workspace at ws+3448 length ws+16
void f243_ArchGuessIntType(void) {

	i8 v5194 = (i8)(intptr_t)(ws+3448);
	i4 v5195 = *(i4*)(intptr_t)v5194;
	i4 v5196 = (i4)+0;
	if ((s4)v5195<(s4)v5196) goto c02_0435; else goto c02_0436;

c02_0436:;

	i4 v5197 = (i4)+255;
	i8 v5198 = (i8)(intptr_t)(ws+3452);
	i4 v5199 = *(i4*)(intptr_t)v5198;
	if ((s4)v5197<(s4)v5199) goto c02_0435; else goto c02_0434;

c02_0434:;

	i8 v5200 = (i8)(intptr_t)(ws+1512);
	i8 v5201 = *(i8*)(intptr_t)v5200;
	i8 v5202 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5202 = v5201;

	goto c02_042f;

c02_0435:;

	i8 v5203 = (i8)(intptr_t)(ws+3448);
	i4 v5204 = *(i4*)(intptr_t)v5203;
	i4 v5205 = (i4)-128;
	if ((s4)v5204<(s4)v5205) goto c02_043c; else goto c02_043d;

c02_043d:;

	i4 v5206 = (i4)+127;
	i8 v5207 = (i8)(intptr_t)(ws+3452);
	i4 v5208 = *(i4*)(intptr_t)v5207;
	if ((s4)v5206<(s4)v5208) goto c02_043c; else goto c02_043b;

c02_043b:;

	i8 v5209 = (i8)(intptr_t)(ws+1520);
	i8 v5210 = *(i8*)(intptr_t)v5209;
	i8 v5211 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5211 = v5210;

	goto c02_042f;

c02_043c:;

	i8 v5212 = (i8)(intptr_t)(ws+3448);
	i4 v5213 = *(i4*)(intptr_t)v5212;
	i4 v5214 = (i4)+0;
	if ((s4)v5213<(s4)v5214) goto c02_0443; else goto c02_0444;

c02_0444:;

	i4 v5215 = (i4)+65535;
	i8 v5216 = (i8)(intptr_t)(ws+3452);
	i4 v5217 = *(i4*)(intptr_t)v5216;
	if ((s4)v5215<(s4)v5217) goto c02_0443; else goto c02_0442;

c02_0442:;

	i8 v5218 = (i8)(intptr_t)(ws+1496);
	i8 v5219 = *(i8*)(intptr_t)v5218;
	i8 v5220 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5220 = v5219;

	goto c02_042f;

c02_0443:;

	i8 v5221 = (i8)(intptr_t)(ws+3448);
	i4 v5222 = *(i4*)(intptr_t)v5221;
	i4 v5223 = (i4)-32768;
	if ((s4)v5222<(s4)v5223) goto c02_044a; else goto c02_044b;

c02_044b:;

	i4 v5224 = (i4)+32767;
	i8 v5225 = (i8)(intptr_t)(ws+3452);
	i4 v5226 = *(i4*)(intptr_t)v5225;
	if ((s4)v5224<(s4)v5226) goto c02_044a; else goto c02_0449;

c02_0449:;

	i8 v5227 = (i8)(intptr_t)(ws+1504);
	i8 v5228 = *(i8*)(intptr_t)v5227;
	i8 v5229 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5229 = v5228;

	goto c02_042f;

c02_044a:;

	i8 v5230 = (i8)(intptr_t)(ws+3448);
	i4 v5231 = *(i4*)(intptr_t)v5230;
	i4 v5232 = (i4)+0;
	if ((s4)v5231<(s4)v5232) goto c02_044f; else goto c02_044e;

c02_044e:;

	i8 v5233 = (i8)(intptr_t)(ws+1480);
	i8 v5234 = *(i8*)(intptr_t)v5233;
	i8 v5235 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5235 = v5234;

	goto c02_042f;

c02_044f:;

	i8 v5236 = (i8)(intptr_t)(ws+1488);
	i8 v5237 = *(i8*)(intptr_t)v5236;
	i8 v5238 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5238 = v5237;

c02_042f:;

}
	void f241_ArchAlignUp(void);

// ArchInitVariable workspace at ws+3520 length ws+20
void f244_ArchInitVariable(void) {

	i8 v5239 = (i8)(intptr_t)(ws+3520);
	i8 v5240 = *(i8*)(intptr_t)v5239;
	i8 v5241 = *(i8*)(intptr_t)v5240;
	i8 v5242 = v5241+(+8);
	i8 v5243 = *(i8*)(intptr_t)v5242;
	i8 v5244 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v5244 = v5243;

	i8 v5245 = (i8)(intptr_t)(ws+3528);
	i8 v5246 = *(i8*)(intptr_t)v5245;
	i8 v5247 = v5246+(+58);
	i2 v5248 = *(i2*)(intptr_t)v5247;
	i8 v5249 = (i8)(intptr_t)(ws+3536);
	*(i2*)(intptr_t)v5249 = v5248;

	i8 v5250 = (i8)(intptr_t)(ws+3536);
	i2 v5251 = *(i2*)(intptr_t)v5250;
	*(i2*)(intptr_t)(ws+3544) = v5251;
	i8 v5252 = (i8)(intptr_t)(ws+3520);
	i8 v5253 = *(i8*)(intptr_t)v5252;
	i8 v5254 = *(i8*)(intptr_t)v5253;
	i8 v5255 = *(i8*)(intptr_t)v5254;
	i8 v5256 = v5255+(+53);
	i1 v5257 = *(i1*)(intptr_t)v5256;
	*(i1*)(intptr_t)(ws+3546) = v5257;
	i8 v5258 = (i8)(intptr_t)(f241_ArchAlignUp);

	((void(*)(void))(intptr_t)v5258)();

	i2 v5259 = *(i2*)(intptr_t)(ws+3548);
	i8 v5260 = (i8)(intptr_t)(ws+3538);
	*(i2*)(intptr_t)v5260 = v5259;

	i8 v5261 = (i8)(intptr_t)(ws+3538);
	i2 v5262 = *(i2*)(intptr_t)v5261;
	i8 v5263 = (i8)(intptr_t)(ws+3536);
	*(i2*)(intptr_t)v5263 = v5262;

	i8 v5264 = (i8)(intptr_t)(ws+3536);
	i2 v5265 = *(i2*)(intptr_t)v5264;
	i8 v5266 = (i8)(intptr_t)(ws+3520);
	i8 v5267 = *(i8*)(intptr_t)v5266;
	i8 v5268 = *(i8*)(intptr_t)v5267;
	i8 v5269 = v5268+(+24);
	*(i2*)(intptr_t)v5269 = v5265;

	i8 v5270 = (i8)(intptr_t)(ws+3536);
	i2 v5271 = *(i2*)(intptr_t)v5270;
	i8 v5272 = (i8)(intptr_t)(ws+3520);
	i8 v5273 = *(i8*)(intptr_t)v5272;
	i8 v5274 = *(i8*)(intptr_t)v5273;
	i8 v5275 = *(i8*)(intptr_t)v5274;
	i8 v5276 = v5275+(+48);
	i2 v5277 = *(i2*)(intptr_t)v5276;
	i2 v5278 = v5271+v5277;
	i8 v5279 = (i8)(intptr_t)(ws+3528);
	i8 v5280 = *(i8*)(intptr_t)v5279;
	i8 v5281 = v5280+(+58);
	*(i2*)(intptr_t)v5281 = v5278;

}
	void f241_ArchAlignUp(void);

// ArchInitMember workspace at ws+3392 length ws+20
void f245_ArchInitMember(void) {

	i8 v5282 = (i8)(intptr_t)(ws+3408);
	i2 v5283 = *(i2*)(intptr_t)v5282;
	*(i2*)(intptr_t)(ws+3544) = v5283;
	i8 v5284 = (i8)(intptr_t)(ws+3400);
	i8 v5285 = *(i8*)(intptr_t)v5284;
	i8 v5286 = *(i8*)(intptr_t)v5285;
	i8 v5287 = *(i8*)(intptr_t)v5286;
	i8 v5288 = v5287+(+53);
	i1 v5289 = *(i1*)(intptr_t)v5288;
	*(i1*)(intptr_t)(ws+3546) = v5289;
	i8 v5290 = (i8)(intptr_t)(f241_ArchAlignUp);

	((void(*)(void))(intptr_t)v5290)();

	i2 v5291 = *(i2*)(intptr_t)(ws+3548);
	i8 v5292 = (i8)(intptr_t)(ws+3410);
	*(i2*)(intptr_t)v5292 = v5291;

	i8 v5293 = (i8)(intptr_t)(ws+3410);
	i2 v5294 = *(i2*)(intptr_t)v5293;
	i8 v5295 = (i8)(intptr_t)(ws+3408);
	*(i2*)(intptr_t)v5295 = v5294;

	i8 v5296 = (i8)(intptr_t)(ws+3408);
	i2 v5297 = *(i2*)(intptr_t)v5296;
	i8 v5298 = (i8)(intptr_t)(ws+3400);
	i8 v5299 = *(i8*)(intptr_t)v5298;
	i8 v5300 = *(i8*)(intptr_t)v5299;
	i8 v5301 = v5300+(+24);
	*(i2*)(intptr_t)v5301 = v5297;

	i8 v5302 = (i8)(intptr_t)(ws+3408);
	i2 v5303 = *(i2*)(intptr_t)v5302;
	i8 v5304 = (i8)(intptr_t)(ws+3400);
	i8 v5305 = *(i8*)(intptr_t)v5304;
	i8 v5306 = *(i8*)(intptr_t)v5305;
	i8 v5307 = *(i8*)(intptr_t)v5306;
	i8 v5308 = v5307+(+48);
	i2 v5309 = *(i2*)(intptr_t)v5308;
	i2 v5310 = v5303+v5309;
	i8 v5311 = (i8)(intptr_t)(ws+3408);
	*(i2*)(intptr_t)v5311 = v5310;

	i8 v5312 = (i8)(intptr_t)(ws+3392);
	i8 v5313 = *(i8*)(intptr_t)v5312;
	i8 v5314 = v5313+(+48);
	i2 v5315 = *(i2*)(intptr_t)v5314;
	i8 v5316 = (i8)(intptr_t)(ws+3408);
	i2 v5317 = *(i2*)(intptr_t)v5316;
	if (v5315<v5317) goto c02_0453; else goto c02_0454;

c02_0453:;

	i8 v5318 = (i8)(intptr_t)(ws+3408);
	i2 v5319 = *(i2*)(intptr_t)v5318;
	i8 v5320 = (i8)(intptr_t)(ws+3392);
	i8 v5321 = *(i8*)(intptr_t)v5320;
	i8 v5322 = v5321+(+48);
	*(i2*)(intptr_t)v5322 = v5319;

c02_0454:;

c02_0450:;

}

// WriteMid1 workspace at ws+3568 length ws+0
void f246_WriteMid1(void) {

}
	void f178_E_b32(void);

// WriteMid2 workspace at ws+3568 length ws+0
void f247_WriteMid2(void) {

	i8 v5323 = (i8)(intptr_t)(ws+3560);
	i8 v5324 = *(i8*)(intptr_t)v5323;
	i4 v5325 = *(i4*)(intptr_t)v5324;
	*(i4*)(intptr_t)(ws+3568) = v5325;
	i8 v5326 = (i8)(intptr_t)(f178_E_b32);

	((void(*)(void))(intptr_t)v5326)();

}
	void f177_E_b16(void);
	void f177_E_b16(void);
	void f176_E_b8(void);
	void f179_E_bsize(void);
	void f176_E_b8(void);
	void f176_E_b8(void);

// WriteMid3 workspace at ws+3568 length ws+0
void f248_WriteMid3(void) {

	i8 v5327 = (i8)(intptr_t)(ws+3560);
	i8 v5328 = *(i8*)(intptr_t)v5327;
	i8 v5329 = *(i8*)(intptr_t)v5328;
	i8 v5330 = v5329+(+56);
	i2 v5331 = *(i2*)(intptr_t)v5330;
	*(i2*)(intptr_t)(ws+3576) = v5331;
	i8 v5332 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5332)();

	i8 v5333 = (i8)(intptr_t)(ws+3560);
	i8 v5334 = *(i8*)(intptr_t)v5333;
	i8 v5335 = v5334+(+8);
	i8 v5336 = *(i8*)(intptr_t)v5335;
	i8 v5337 = *(i8*)(intptr_t)v5336;
	i8 v5338 = v5337+(+8);
	i8 v5339 = *(i8*)(intptr_t)v5338;
	i8 v5340 = v5339+(+56);
	i2 v5341 = *(i2*)(intptr_t)v5340;
	*(i2*)(intptr_t)(ws+3576) = v5341;
	i8 v5342 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5342)();

	i8 v5343 = (i8)(intptr_t)(ws+3560);
	i8 v5344 = *(i8*)(intptr_t)v5343;
	i8 v5345 = v5344+(+8);
	i8 v5346 = *(i8*)(intptr_t)v5345;
	i8 v5347 = *(i8*)(intptr_t)v5346;
	i8 v5348 = v5347+(+26);
	i1 v5349 = *(i1*)(intptr_t)v5348;
	*(i1*)(intptr_t)(ws+3600) = v5349;
	i8 v5350 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5350)();

	i8 v5351 = (i8)(intptr_t)(ws+3560);
	i8 v5352 = *(i8*)(intptr_t)v5351;
	i8 v5353 = v5352+(+8);
	i8 v5354 = *(i8*)(intptr_t)v5353;
	i8 v5355 = *(i8*)(intptr_t)v5354;
	i8 v5356 = v5355+(+24);
	i2 v5357 = *(i2*)(intptr_t)v5356;
	*(i2*)(intptr_t)(ws+3568) = v5357;
	i8 v5358 = (i8)(intptr_t)(f179_E_bsize);

	((void(*)(void))(intptr_t)v5358)();

	i8 v5359 = (i8)(intptr_t)(ws+3560);
	i8 v5360 = *(i8*)(intptr_t)v5359;
	i8 v5361 = v5360+(+8);
	i8 v5362 = *(i8*)(intptr_t)v5361;
	i8 v5363 = *(i8*)(intptr_t)v5362;
	i8 v5364 = *(i8*)(intptr_t)v5363;
	i8 v5365 = v5364+(+48);
	i2 v5366 = *(i2*)(intptr_t)v5365;
	i1 v5367 = v5366;
	*(i1*)(intptr_t)(ws+3600) = v5367;
	i8 v5368 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5368)();

	i8 v5369 = (i8)(intptr_t)(ws+3560);
	i8 v5370 = *(i8*)(intptr_t)v5369;
	i8 v5371 = v5370+(+16);
	i1 v5372 = *(i1*)(intptr_t)v5371;
	*(i1*)(intptr_t)(ws+3600) = v5372;
	i8 v5373 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5373)();

}
	void f177_E_b16(void);
	void f177_E_b16(void);
	void f177_E_b16(void);
	void f176_E_b8(void);

// WriteMid4 workspace at ws+3568 length ws+0
void f249_WriteMid4(void) {

	i8 v5374 = (i8)(intptr_t)(ws+3560);
	i8 v5375 = *(i8*)(intptr_t)v5374;
	i2 v5376 = *(i2*)(intptr_t)v5375;
	*(i2*)(intptr_t)(ws+3576) = v5376;
	i8 v5377 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5377)();

	i8 v5378 = (i8)(intptr_t)(ws+3560);
	i8 v5379 = *(i8*)(intptr_t)v5378;
	i8 v5380 = v5379+(+2);
	i2 v5381 = *(i2*)(intptr_t)v5380;
	*(i2*)(intptr_t)(ws+3576) = v5381;
	i8 v5382 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5382)();

	i8 v5383 = (i8)(intptr_t)(ws+3560);
	i8 v5384 = *(i8*)(intptr_t)v5383;
	i8 v5385 = v5384+(+4);
	i2 v5386 = *(i2*)(intptr_t)v5385;
	*(i2*)(intptr_t)(ws+3576) = v5386;
	i8 v5387 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5387)();

	i8 v5388 = (i8)(intptr_t)(ws+3560);
	i8 v5389 = *(i8*)(intptr_t)v5388;
	i8 v5390 = v5389+(+6);
	i1 v5391 = *(i1*)(intptr_t)v5390;
	*(i1*)(intptr_t)(ws+3600) = v5391;
	i8 v5392 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5392)();

}
	void f176_E_b8(void);

// WriteMid5 workspace at ws+3568 length ws+0
void f250_WriteMid5(void) {

	i8 v5393 = (i8)(intptr_t)(ws+3560);
	i8 v5394 = *(i8*)(intptr_t)v5393;
	i1 v5395 = *(i1*)(intptr_t)v5394;
	*(i1*)(intptr_t)(ws+3600) = v5395;
	i8 v5396 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5396)();

}
	void f178_E_b32(void);
	void f177_E_b16(void);

// WriteMid6 workspace at ws+3568 length ws+0
void f251_WriteMid6(void) {

	i8 v5397 = (i8)(intptr_t)(ws+3560);
	i8 v5398 = *(i8*)(intptr_t)v5397;
	i4 v5399 = *(i4*)(intptr_t)v5398;
	*(i4*)(intptr_t)(ws+3568) = v5399;
	i8 v5400 = (i8)(intptr_t)(f178_E_b32);

	((void(*)(void))(intptr_t)v5400)();

	i8 v5401 = (i8)(intptr_t)(ws+3560);
	i8 v5402 = *(i8*)(intptr_t)v5401;
	i8 v5403 = v5402+(+4);
	i2 v5404 = *(i2*)(intptr_t)v5403;
	*(i2*)(intptr_t)(ws+3576) = v5404;
	i8 v5405 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5405)();

}
	void f177_E_b16(void);

// WriteMid7 workspace at ws+3568 length ws+0
void f252_WriteMid7(void) {

	i8 v5406 = (i8)(intptr_t)(ws+3560);
	i8 v5407 = *(i8*)(intptr_t)v5406;
	i2 v5408 = *(i2*)(intptr_t)v5407;
	*(i2*)(intptr_t)(ws+3576) = v5408;
	i8 v5409 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5409)();

}
	void f187_E_countedstring(void);

// WriteMid8 workspace at ws+3568 length ws+0
void f253_WriteMid8(void) {

	i8 v5410 = (i8)(intptr_t)(ws+3560);
	i8 v5411 = *(i8*)(intptr_t)v5410;
	i8 v5412 = *(i8*)(intptr_t)v5411;
	*(i8*)(intptr_t)(ws+3568) = v5412;
	i8 v5413 = (i8)(intptr_t)(f187_E_countedstring);

	((void(*)(void))(intptr_t)v5413)();

}
	void f177_E_b16(void);
	void f176_E_b8(void);
	void f179_E_bsize(void);
	void f176_E_b8(void);

// WriteMid9 workspace at ws+3568 length ws+0
void f254_WriteMid9(void) {

	i8 v5414 = (i8)(intptr_t)(ws+3560);
	i8 v5415 = *(i8*)(intptr_t)v5414;
	i8 v5416 = *(i8*)(intptr_t)v5415;
	i8 v5417 = *(i8*)(intptr_t)v5416;
	i8 v5418 = v5417+(+8);
	i8 v5419 = *(i8*)(intptr_t)v5418;
	i8 v5420 = v5419+(+56);
	i2 v5421 = *(i2*)(intptr_t)v5420;
	*(i2*)(intptr_t)(ws+3576) = v5421;
	i8 v5422 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5422)();

	i8 v5423 = (i8)(intptr_t)(ws+3560);
	i8 v5424 = *(i8*)(intptr_t)v5423;
	i8 v5425 = *(i8*)(intptr_t)v5424;
	i8 v5426 = *(i8*)(intptr_t)v5425;
	i8 v5427 = v5426+(+26);
	i1 v5428 = *(i1*)(intptr_t)v5427;
	*(i1*)(intptr_t)(ws+3600) = v5428;
	i8 v5429 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5429)();

	i8 v5430 = (i8)(intptr_t)(ws+3560);
	i8 v5431 = *(i8*)(intptr_t)v5430;
	i8 v5432 = *(i8*)(intptr_t)v5431;
	i8 v5433 = *(i8*)(intptr_t)v5432;
	i8 v5434 = v5433+(+24);
	i2 v5435 = *(i2*)(intptr_t)v5434;
	*(i2*)(intptr_t)(ws+3568) = v5435;
	i8 v5436 = (i8)(intptr_t)(f179_E_bsize);

	((void(*)(void))(intptr_t)v5436)();

	i8 v5437 = (i8)(intptr_t)(ws+3560);
	i8 v5438 = *(i8*)(intptr_t)v5437;
	i8 v5439 = *(i8*)(intptr_t)v5438;
	i8 v5440 = *(i8*)(intptr_t)v5439;
	i8 v5441 = *(i8*)(intptr_t)v5440;
	i8 v5442 = v5441+(+48);
	i2 v5443 = *(i2*)(intptr_t)v5442;
	i1 v5444 = v5443;
	*(i1*)(intptr_t)(ws+3600) = v5444;
	i8 v5445 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5445)();

}
	void f177_E_b16(void);

// WriteMid10 workspace at ws+3568 length ws+0
void f255_WriteMid10(void) {

	i8 v5446 = (i8)(intptr_t)(ws+3560);
	i8 v5447 = *(i8*)(intptr_t)v5446;
	i8 v5448 = *(i8*)(intptr_t)v5447;
	i8 v5449 = v5448+(+56);
	i2 v5450 = *(i2*)(intptr_t)v5449;
	*(i2*)(intptr_t)(ws+3576) = v5450;
	i8 v5451 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5451)();

}
	void f177_E_b16(void);
	void f176_E_b8(void);
	void f179_E_bsize(void);
	void f176_E_b8(void);
	void f179_E_bsize(void);

// WriteMid11 workspace at ws+3568 length ws+0
void f256_WriteMid11(void) {

	i8 v5452 = (i8)(intptr_t)(ws+3560);
	i8 v5453 = *(i8*)(intptr_t)v5452;
	i8 v5454 = *(i8*)(intptr_t)v5453;
	i8 v5455 = *(i8*)(intptr_t)v5454;
	i8 v5456 = v5455+(+8);
	i8 v5457 = *(i8*)(intptr_t)v5456;
	i8 v5458 = v5457+(+56);
	i2 v5459 = *(i2*)(intptr_t)v5458;
	*(i2*)(intptr_t)(ws+3576) = v5459;
	i8 v5460 = (i8)(intptr_t)(f177_E_b16);

	((void(*)(void))(intptr_t)v5460)();

	i8 v5461 = (i8)(intptr_t)(ws+3560);
	i8 v5462 = *(i8*)(intptr_t)v5461;
	i8 v5463 = *(i8*)(intptr_t)v5462;
	i8 v5464 = *(i8*)(intptr_t)v5463;
	i8 v5465 = v5464+(+26);
	i1 v5466 = *(i1*)(intptr_t)v5465;
	*(i1*)(intptr_t)(ws+3600) = v5466;
	i8 v5467 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5467)();

	i8 v5468 = (i8)(intptr_t)(ws+3560);
	i8 v5469 = *(i8*)(intptr_t)v5468;
	i8 v5470 = *(i8*)(intptr_t)v5469;
	i8 v5471 = *(i8*)(intptr_t)v5470;
	i8 v5472 = v5471+(+24);
	i2 v5473 = *(i2*)(intptr_t)v5472;
	*(i2*)(intptr_t)(ws+3568) = v5473;
	i8 v5474 = (i8)(intptr_t)(f179_E_bsize);

	((void(*)(void))(intptr_t)v5474)();

	i8 v5475 = (i8)(intptr_t)(ws+3560);
	i8 v5476 = *(i8*)(intptr_t)v5475;
	i8 v5477 = *(i8*)(intptr_t)v5476;
	i8 v5478 = *(i8*)(intptr_t)v5477;
	i8 v5479 = *(i8*)(intptr_t)v5478;
	i8 v5480 = v5479+(+48);
	i2 v5481 = *(i2*)(intptr_t)v5480;
	i1 v5482 = v5481;
	*(i1*)(intptr_t)(ws+3600) = v5482;
	i8 v5483 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5483)();

	i8 v5484 = (i8)(intptr_t)(ws+3560);
	i8 v5485 = *(i8*)(intptr_t)v5484;
	i8 v5486 = v5485+(+8);
	i2 v5487 = *(i2*)(intptr_t)v5486;
	*(i2*)(intptr_t)(ws+3568) = v5487;
	i8 v5488 = (i8)(intptr_t)(f179_E_bsize);

	((void(*)(void))(intptr_t)v5488)();

}
	void f246_WriteMid1(void);
	void f247_WriteMid2(void);
	void f248_WriteMid3(void);
	void f249_WriteMid4(void);
	void f250_WriteMid5(void);
	void f251_WriteMid6(void);
	void f252_WriteMid7(void);
	void f253_WriteMid8(void);
	void f254_WriteMid9(void);
	void f255_WriteMid10(void);
	void f256_WriteMid11(void);
static data f3___main_s0455[] = {

	{ .ptr = (void*)f246_WriteMid1 },

	{ .ptr = (void*)f247_WriteMid2 },

	{ .ptr = (void*)f248_WriteMid3 },

	{ .ptr = (void*)f249_WriteMid4 },

	{ .ptr = (void*)f250_WriteMid5 },

	{ .ptr = (void*)f251_WriteMid6 },

	{ .ptr = (void*)f252_WriteMid7 },

	{ .ptr = (void*)f253_WriteMid8 },

	{ .ptr = (void*)f254_WriteMid9 },

	{ .ptr = (void*)f255_WriteMid10 },

	{ .ptr = (void*)f256_WriteMid11 },

};
static data f3___main_s0456[] = {








	{ .i1 = { 0x00,0x00,0x00,0x09,0x09,0x08,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x07,0x0a,0x09,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x07,0x08,0x09,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x06,0x06,0x00,0x09,0x09,0x00,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x01,0x07,0x0a,0x09,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x00,0x00,0x00,0x00,0x00,0x04}},








	{ .i1 = { 0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04}},








	{ .i1 = { 0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04}},








	{ .i1 = { 0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},







	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00}},
};
	void f176_E_b8(void);
	void f60_PushNode(void);
	void f62_NextNode(void);
	void f176_E_b8(void);
	void f63_Discard(void);

// ReallyGenerate workspace at ws+3520 length ws+33
void f258_ReallyGenerate(void) {

	i1 v5536 = (i1)+77;
	*(i1*)(intptr_t)(ws+3600) = v5536;
	i8 v5537 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5537)();

	i8 v5538 = (i8)(intptr_t)(ws+224);
	i8 v5539 = *(i8*)(intptr_t)v5538;
	i8 v5540 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v5540 = v5539;

	i8 v5541 = (i8)(intptr_t)(ws+3520);
	i8 v5542 = *(i8*)(intptr_t)v5541;
	*(i8*)(intptr_t)(ws+3640) = v5542;
	i8 v5543 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v5543)();

c02_0462:;

	i8 v5544 = (i8)(intptr_t)(ws+224);
	i8 v5545 = *(i8*)(intptr_t)v5544;
	i8 v5546 = (i8)(intptr_t)(ws+3528);
	i8 v5547 = *(i8*)(intptr_t)v5546;
	if (v5545==v5547) goto c02_0467; else goto c02_0466;

c02_0466:;

	i8 v5548 = (i8)(intptr_t)(f62_NextNode);

	((void(*)(void))(intptr_t)v5548)();

	i8 v5549 = *(i8*)(intptr_t)(ws+3624);
	i8 v5550 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v5550 = v5549;

	i8 v5551 = (i8)(intptr_t)(ws+3536);
	i8 v5552 = *(i8*)(intptr_t)v5551;
	i8 v5553 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v5553 = v5552;

	i8 v5554 = (i8)(intptr_t)(ws+3544);
	i8 v5555 = *(i8*)(intptr_t)v5554;
	i8 v5556 = v5555+(+48);
	i1 v5557 = *(i1*)(intptr_t)v5556;
	*(i1*)(intptr_t)(ws+3600) = v5557;
	i8 v5558 = (i8)(intptr_t)(f176_E_b8);

	((void(*)(void))(intptr_t)v5558)();

	i8 v5559 = (i8)(intptr_t)((i1*)f3___main_s0456);
	i8 v5560 = (i8)(intptr_t)(ws+3544);
	i8 v5561 = *(i8*)(intptr_t)v5560;
	i8 v5562 = v5561+(+48);
	i1 v5563 = *(i1*)(intptr_t)v5562;
	i1 v5564 = v5563+(-1);
	i8 v5565 = v5564;
	i8 v5566 = v5559+v5565;
	i1 v5567 = *(i1*)(intptr_t)v5566;
	i8 v5568 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v5568 = v5567;

	i8 v5569 = (i8)(intptr_t)(ws+3544);
	i8 v5570 = *(i8*)(intptr_t)v5569;
	*(i8*)(intptr_t)(ws+3560) = v5570;
	i8 v5571 = (i8)(intptr_t)((i1*)f3___main_s0455);
	i8 v5572 = (i8)(intptr_t)(ws+3552);
	i1 v5573 = *(i1*)(intptr_t)v5572;
	i8 v5574 = v5573;
	i1 v5575 = (i1)+3;
	i8 v5576 = ((i8)v5574)<<v5575;
	i8 v5577 = v5571+v5576;
	i8 v5578 = *(i8*)(intptr_t)v5577;

	((void(*)(void))(intptr_t)v5578)();

	goto c02_0462;

c02_0467:;

	i8 v5579 = (i8)(intptr_t)(ws+3520);
	i8 v5580 = *(i8*)(intptr_t)v5579;
	*(i8*)(intptr_t)(ws+3592) = v5580;
	i8 v5581 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v5581)();

}
	void f63_Discard(void);
	void f124_MidAsmgroupstart(void);
	void f258_ReallyGenerate(void);
	void f104_MidAsmgroupend(void);
	void f258_ReallyGenerate(void);
	void f258_ReallyGenerate(void);

// Generate workspace at ws+3488 length ws+32
void f259_Generate(void) {

	i8 v5584 = (i8)(intptr_t)(ws+3488);
	i8 v5585 = *(i8*)(intptr_t)v5584;
	i8 v5586 = v5585+(+48);
	i1 v5587 = *(i1*)(intptr_t)v5586;
	i8 v5588 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5588 = v5587;

	i8 v5589 = (i8)(intptr_t)(ws+1536);
	i1 v5590 = *(i1*)(intptr_t)v5589;
	i1 v5591 = (i1)+27;
	if (v5590==v5591) goto c02_046d; else goto c02_046f;

c02_046f:;

	i8 v5592 = (i8)(intptr_t)(ws+1536);
	i1 v5593 = *(i1*)(intptr_t)v5592;
	i1 v5594 = (i1)+28;
	if (v5593==v5594) goto c02_046d; else goto c02_046e;

c02_046d:;

	i8 v5595 = (i8)(intptr_t)(ws+3496);
	i1 v5596 = *(i1*)(intptr_t)v5595;
	i1 v5597 = (i1)+26;
	if (v5596==v5597) goto c02_0476; else goto c02_0477;

c02_0477:;

	i8 v5598 = (i8)(intptr_t)(ws+3496);
	i1 v5599 = *(i1*)(intptr_t)v5598;
	i1 v5600 = (i1)+5;
	if (v5599==v5600) goto c02_0476; else goto c02_0475;

c02_0475:;

	i8 v5601 = (i8)(intptr_t)(ws+3488);
	i8 v5602 = *(i8*)(intptr_t)v5601;
	*(i8*)(intptr_t)(ws+3592) = v5602;
	i8 v5603 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v5603)();

	return;

c02_0476:;

c02_0470:;

c02_046e:;

c02_0468:;

	i8 v5604 = (i8)(intptr_t)(ws+3496);
	i1 v5605 = *(i1*)(intptr_t)v5604;
	i1 v5606 = (i1)+18;
	if (v5605==v5606) goto c02_047f; else goto c02_047e;

c02_047f:;

	i8 v5607 = (i8)(intptr_t)(ws+1536);
	i1 v5608 = *(i1*)(intptr_t)v5607;
	i1 v5609 = (i1)+23;
	if (v5608==v5609) goto c02_047e; else goto c02_047d;

c02_047d:;

	i8 v5610 = (i8)(intptr_t)(f124_MidAsmgroupstart);

	((void(*)(void))(intptr_t)v5610)();

	i8 v5611 = *(i8*)(intptr_t)(ws+3520);
	i8 v5612 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5612 = v5611;

	i8 v5613 = (i8)(intptr_t)(ws+3504);
	i8 v5614 = *(i8*)(intptr_t)v5613;
	*(i8*)(intptr_t)(ws+3520) = v5614;
	i8 v5615 = (i8)(intptr_t)(f258_ReallyGenerate);

	((void(*)(void))(intptr_t)v5615)();

c02_047e:;

c02_0478:;

	i8 v5616 = (i8)(intptr_t)(ws+1536);
	i1 v5617 = *(i1*)(intptr_t)v5616;
	i1 v5618 = (i1)+23;
	if (v5617==v5618) goto c02_0487; else goto c02_0486;

c02_0487:;

	i8 v5619 = (i8)(intptr_t)(ws+3496);
	i1 v5620 = *(i1*)(intptr_t)v5619;
	i1 v5621 = (i1)+18;
	if (v5620==v5621) goto c02_0486; else goto c02_0485;

c02_0485:;

	i8 v5622 = (i8)(intptr_t)(f104_MidAsmgroupend);

	((void(*)(void))(intptr_t)v5622)();

	i8 v5623 = *(i8*)(intptr_t)(ws+3520);
	i8 v5624 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5624 = v5623;

	i8 v5625 = (i8)(intptr_t)(ws+3512);
	i8 v5626 = *(i8*)(intptr_t)v5625;
	*(i8*)(intptr_t)(ws+3520) = v5626;
	i8 v5627 = (i8)(intptr_t)(f258_ReallyGenerate);

	((void(*)(void))(intptr_t)v5627)();

c02_0486:;

c02_0480:;

	i8 v5628 = (i8)(intptr_t)(ws+3496);
	i1 v5629 = *(i1*)(intptr_t)v5628;
	i8 v5630 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5630 = v5629;

	i8 v5631 = (i8)(intptr_t)(ws+3488);
	i8 v5632 = *(i8*)(intptr_t)v5631;
	*(i8*)(intptr_t)(ws+3520) = v5632;
	i8 v5633 = (i8)(intptr_t)(f258_ReallyGenerate);

	((void(*)(void))(intptr_t)v5633)();

}
	void f60_PushNode(void);
	void f61_PopNode(void);
	void f60_PushNode(void);
	void f60_PushNode(void);
	void f63_Discard(void);

// push_and_free workspace at ws+3472 length ws+0
void f261_push_and_free(void) {

	i8 v5693 = (i8)(intptr_t)(ws+3424);
	i2 v5694 = *(i2*)(intptr_t)v5693;
	i8 v5695 = (i8)(intptr_t)(ws+3440);
	i8 v5696 = *(i8*)(intptr_t)v5695;
	*(i2*)(intptr_t)v5696 = v5694;

	i8 v5697 = (i8)(intptr_t)(ws+3426);
	i2 v5698 = *(i2*)(intptr_t)v5697;
	i8 v5699 = (i8)(intptr_t)(ws+3440);
	i8 v5700 = *(i8*)(intptr_t)v5699;
	i8 v5701 = v5700+(+2);
	*(i2*)(intptr_t)v5701 = v5698;

	i8 v5702 = (i8)(intptr_t)(ws+3428);
	i2 v5703 = *(i2*)(intptr_t)v5702;
	i8 v5704 = (i8)(intptr_t)(ws+3440);
	i8 v5705 = *(i8*)(intptr_t)v5704;
	i8 v5706 = v5705+(+4);
	*(i2*)(intptr_t)v5706 = v5703;

	i8 v5707 = (i8)+0;
	i8 v5708 = (i8)(intptr_t)(ws+3416);
	i8 v5709 = *(i8*)(intptr_t)v5708;
	i8 v5710 = v5709+(+32);
	*(i8*)(intptr_t)v5710 = v5707;

	i8 v5711 = (i8)+0;
	i8 v5712 = (i8)(intptr_t)(ws+3416);
	i8 v5713 = *(i8*)(intptr_t)v5712;
	i8 v5714 = v5713+(+40);
	*(i8*)(intptr_t)v5714 = v5711;

	i8 v5715 = (i8)(intptr_t)(ws+3440);
	i8 v5716 = *(i8*)(intptr_t)v5715;
	*(i8*)(intptr_t)(ws+3640) = v5716;
	i8 v5717 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v5717)();

	i8 v5718 = (i8)(intptr_t)(ws+3432);
	i8 v5719 = *(i8*)(intptr_t)v5718;
	*(i8*)(intptr_t)(ws+3640) = v5719;
	i8 v5720 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v5720)();

	i8 v5721 = (i8)(intptr_t)(ws+3416);
	i8 v5722 = *(i8*)(intptr_t)v5721;
	*(i8*)(intptr_t)(ws+3592) = v5722;
	i8 v5723 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v5723)();

}
	void f238_AllocLabel(void);
	void f261_push_and_free(void);
	void f238_AllocLabel(void);
	void f261_push_and_free(void);
	void f259_Generate(void);
	void f136_MidLabel(void);
	void f259_Generate(void);

// GenerateConditional workspace at ws+3392 length ws+80
void f260_GenerateConditional(void) {

	i8 v5634 = (i8)(intptr_t)(ws+224);
	i8 v5635 = *(i8*)(intptr_t)v5634;
	i8 v5636 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v5636 = v5635;

	i8 v5637 = (i8)(intptr_t)(ws+3392);
	i8 v5638 = *(i8*)(intptr_t)v5637;
	*(i8*)(intptr_t)(ws+3640) = v5638;
	i8 v5639 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v5639)();

c02_0488:;

	i8 v5640 = (i8)(intptr_t)(ws+224);
	i8 v5641 = *(i8*)(intptr_t)v5640;
	i8 v5642 = (i8)(intptr_t)(ws+3400);
	i8 v5643 = *(i8*)(intptr_t)v5642;
	if (v5641==v5643) goto c02_048d; else goto c02_048c;

c02_048c:;

	i8 v5644 = (i8)(intptr_t)(f61_PopNode);

	((void(*)(void))(intptr_t)v5644)();

	i8 v5645 = *(i8*)(intptr_t)(ws+3640);
	i8 v5646 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v5646 = v5645;

	i8 v5647 = (i8)(intptr_t)(ws+3408);
	i8 v5648 = *(i8*)(intptr_t)v5647;
	i8 v5649 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5649 = v5648;

	i8 v5650 = (i8)(intptr_t)(ws+3416);
	i8 v5651 = *(i8*)(intptr_t)v5650;
	i2 v5652 = *(i2*)(intptr_t)v5651;
	i8 v5653 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5653 = v5652;

	i8 v5654 = (i8)(intptr_t)(ws+3416);
	i8 v5655 = *(i8*)(intptr_t)v5654;
	i8 v5656 = v5655+(+2);
	i2 v5657 = *(i2*)(intptr_t)v5656;
	i8 v5658 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v5658 = v5657;

	i8 v5659 = (i8)(intptr_t)(ws+3416);
	i8 v5660 = *(i8*)(intptr_t)v5659;
	i8 v5661 = v5660+(+4);
	i2 v5662 = *(i2*)(intptr_t)v5661;
	i8 v5663 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v5663 = v5662;

	i8 v5664 = (i8)(intptr_t)(ws+3416);
	i8 v5665 = *(i8*)(intptr_t)v5664;
	i8 v5666 = v5665+(+32);
	i8 v5667 = *(i8*)(intptr_t)v5666;
	i8 v5668 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v5668 = v5667;

	i8 v5669 = (i8)(intptr_t)(ws+3416);
	i8 v5670 = *(i8*)(intptr_t)v5669;
	i8 v5671 = v5670+(+40);
	i8 v5672 = *(i8*)(intptr_t)v5671;
	i8 v5673 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v5673 = v5672;

	i8 v5674 = (i8)(intptr_t)(ws+3416);
	i8 v5675 = *(i8*)(intptr_t)v5674;
	i8 v5676 = v5675+(+48);
	i1 v5677 = *(i1*)(intptr_t)v5676;
	i8 v5678 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v5678 = v5677;

	i8 v5679 = (i8)(intptr_t)(ws+3416);
	i8 v5680 = *(i8*)(intptr_t)v5679;
	i8 v5681 = v5680+(+6);
	i1 v5682 = *(i1*)(intptr_t)v5681;
	i1 v5683 = (i1)+0;
	if (v5682==v5683) goto c02_0492; else goto c02_0491;

c02_0491:;

	i8 v5684 = (i8)(intptr_t)(ws+3424);
	i2 v5685 = *(i2*)(intptr_t)v5684;
	i8 v5686 = (i8)(intptr_t)(ws+3450);
	*(i2*)(intptr_t)v5686 = v5685;

	i8 v5687 = (i8)(intptr_t)(ws+3426);
	i2 v5688 = *(i2*)(intptr_t)v5687;
	i8 v5689 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5689 = v5688;

	i8 v5690 = (i8)(intptr_t)(ws+3450);
	i2 v5691 = *(i2*)(intptr_t)v5690;
	i8 v5692 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v5692 = v5691;

c02_0492:;

c02_048e:;


	i8 v5724 = (i8)(intptr_t)(ws+3448);
	i1 v5725 = *(i1*)(intptr_t)v5724;

	if (v5725 != +57) goto c02_0494;

	i8 v5726 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v5726)();

	i2 v5727 = *(i2*)(intptr_t)(ws+3472);
	i8 v5728 = (i8)(intptr_t)(ws+3454);
	*(i2*)(intptr_t)v5728 = v5727;

	i8 v5729 = (i8)(intptr_t)(ws+3454);
	i2 v5730 = *(i2*)(intptr_t)v5729;
	i8 v5731 = (i8)(intptr_t)(ws+3452);
	*(i2*)(intptr_t)v5731 = v5730;

	i8 v5732 = (i8)(intptr_t)(ws+3424);
	i2 v5733 = *(i2*)(intptr_t)v5732;
	i8 v5734 = (i8)(intptr_t)(ws+3432);
	i8 v5735 = *(i8*)(intptr_t)v5734;
	*(i2*)(intptr_t)v5735 = v5733;

	i8 v5736 = (i8)(intptr_t)(ws+3452);
	i2 v5737 = *(i2*)(intptr_t)v5736;
	i8 v5738 = (i8)(intptr_t)(ws+3432);
	i8 v5739 = *(i8*)(intptr_t)v5738;
	i8 v5740 = v5739+(+2);
	*(i2*)(intptr_t)v5740 = v5737;

	i8 v5741 = (i8)(intptr_t)(ws+3452);
	i2 v5742 = *(i2*)(intptr_t)v5741;
	i8 v5743 = (i8)(intptr_t)(ws+3432);
	i8 v5744 = *(i8*)(intptr_t)v5743;
	i8 v5745 = v5744+(+4);
	*(i2*)(intptr_t)v5745 = v5742;

	i8 v5746 = (i8)(intptr_t)(f261_push_and_free);

	((void(*)(void))(intptr_t)v5746)();

	goto c02_0493;

c02_0494:;

	if (v5725 != +56) goto c02_0495;

	i8 v5747 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v5747)();

	i2 v5748 = *(i2*)(intptr_t)(ws+3472);
	i8 v5749 = (i8)(intptr_t)(ws+3456);
	*(i2*)(intptr_t)v5749 = v5748;

	i8 v5750 = (i8)(intptr_t)(ws+3456);
	i2 v5751 = *(i2*)(intptr_t)v5750;
	i8 v5752 = (i8)(intptr_t)(ws+3452);
	*(i2*)(intptr_t)v5752 = v5751;

	i8 v5753 = (i8)(intptr_t)(ws+3452);
	i2 v5754 = *(i2*)(intptr_t)v5753;
	i8 v5755 = (i8)(intptr_t)(ws+3432);
	i8 v5756 = *(i8*)(intptr_t)v5755;
	*(i2*)(intptr_t)v5756 = v5754;

	i8 v5757 = (i8)(intptr_t)(ws+3426);
	i2 v5758 = *(i2*)(intptr_t)v5757;
	i8 v5759 = (i8)(intptr_t)(ws+3432);
	i8 v5760 = *(i8*)(intptr_t)v5759;
	i8 v5761 = v5760+(+2);
	*(i2*)(intptr_t)v5761 = v5758;

	i8 v5762 = (i8)(intptr_t)(ws+3452);
	i2 v5763 = *(i2*)(intptr_t)v5762;
	i8 v5764 = (i8)(intptr_t)(ws+3432);
	i8 v5765 = *(i8*)(intptr_t)v5764;
	i8 v5766 = v5765+(+4);
	*(i2*)(intptr_t)v5766 = v5763;

	i8 v5767 = (i8)(intptr_t)(f261_push_and_free);

	((void(*)(void))(intptr_t)v5767)();

	goto c02_0493;

c02_0495:;

	i8 v5768 = (i8)(intptr_t)(ws+3424);
	i2 v5769 = *(i2*)(intptr_t)v5768;
	i8 v5770 = (i8)(intptr_t)(ws+3416);
	i8 v5771 = *(i8*)(intptr_t)v5770;
	*(i2*)(intptr_t)v5771 = v5769;

	i8 v5772 = (i8)(intptr_t)(ws+3426);
	i2 v5773 = *(i2*)(intptr_t)v5772;
	i8 v5774 = (i8)(intptr_t)(ws+3416);
	i8 v5775 = *(i8*)(intptr_t)v5774;
	i8 v5776 = v5775+(+2);
	*(i2*)(intptr_t)v5776 = v5773;

	i8 v5777 = (i8)(intptr_t)(ws+3416);
	i8 v5778 = *(i8*)(intptr_t)v5777;
	*(i8*)(intptr_t)(ws+3488) = v5778;
	i8 v5779 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v5779)();

	i8 v5780 = (i8)(intptr_t)(ws+3428);
	i2 v5781 = *(i2*)(intptr_t)v5780;
	*(i2*)(intptr_t)(ws+3472) = v5781;
	i8 v5782 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v5782)();

	i8 v5783 = *(i8*)(intptr_t)(ws+3480);
	i8 v5784 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v5784 = v5783;

	i8 v5785 = (i8)(intptr_t)(ws+3464);
	i8 v5786 = *(i8*)(intptr_t)v5785;
	*(i8*)(intptr_t)(ws+3488) = v5786;
	i8 v5787 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v5787)();

c02_0493:;


	goto c02_0488;

c02_048d:;

}
	void f224_CheckNotPartialType(void);
	void f69_InternalAlloc(void);
	void f244_ArchInitVariable(void);

// InitVariable workspace at ws+3488 length ws+32
void f262_InitVariable(void) {

	i8 v5788 = (i8)(intptr_t)(ws+3504);
	i8 v5789 = *(i8*)(intptr_t)v5788;
	*(i8*)(intptr_t)(ws+3520) = v5789;
	i8 v5790 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v5790)();

	i1 v5791 = (i1)+28;
	i8 v5792 = (i8)(intptr_t)(ws+3496);
	i8 v5793 = *(i8*)(intptr_t)v5792;
	i8 v5794 = v5793+(+32);
	*(i1*)(intptr_t)v5794 = v5791;

	i8 v5795 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v5795;
	i8 v5796 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v5796)();

	i8 v5797 = *(i8*)(intptr_t)(ws+3648);
	i8 v5798 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5798 = v5797;

	i8 v5799 = (i8)(intptr_t)(ws+3512);
	i8 v5800 = *(i8*)(intptr_t)v5799;
	i8 v5801 = (i8)(intptr_t)(ws+3496);
	i8 v5802 = *(i8*)(intptr_t)v5801;
	*(i8*)(intptr_t)v5802 = v5800;

	i8 v5803 = (i8)(intptr_t)(ws+3504);
	i8 v5804 = *(i8*)(intptr_t)v5803;
	i8 v5805 = (i8)(intptr_t)(ws+3496);
	i8 v5806 = *(i8*)(intptr_t)v5805;
	i8 v5807 = *(i8*)(intptr_t)v5806;
	*(i8*)(intptr_t)v5807 = v5804;

	i8 v5808 = (i8)(intptr_t)(ws+3488);
	i8 v5809 = *(i8*)(intptr_t)v5808;
	i8 v5810 = (i8)(intptr_t)(ws+3496);
	i8 v5811 = *(i8*)(intptr_t)v5810;
	i8 v5812 = *(i8*)(intptr_t)v5811;
	i8 v5813 = v5812+(+8);
	*(i8*)(intptr_t)v5813 = v5809;

	i8 v5814 = (i8)(intptr_t)(ws+3496);
	i8 v5815 = *(i8*)(intptr_t)v5814;
	*(i8*)(intptr_t)(ws+3520) = v5815;
	i8 v5816 = (i8)(intptr_t)(f244_ArchInitVariable);

	((void(*)(void))(intptr_t)v5816)();

}
	void f66_AllocNewType(void);
	void f70_StrDupBraced(void);
	void f225_AddTypeToNamespace(void);

// MakePointerType workspace at ws+3496 length ws+32
void f263_MakePointerType(void) {

	i8 v5817 = (i8)(intptr_t)(ws+3496);
	i8 v5818 = *(i8*)(intptr_t)v5817;
	i8 v5819 = v5818+(+40);
	i8 v5820 = *(i8*)(intptr_t)v5819;
	i8 v5821 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5821 = v5820;

	i8 v5822 = (i8)(intptr_t)(ws+3504);
	i8 v5823 = *(i8*)(intptr_t)v5822;
	i8 v5824 = (i8)+0;
	if (v5823==v5824) goto c02_0499; else goto c02_049a;

c02_0499:;

	i8 v5825 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v5825)();

	i8 v5826 = *(i8*)(intptr_t)(ws+3528);
	i8 v5827 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5827 = v5826;

	i8 v5828 = (i8)(intptr_t)(ws+3512);
	i8 v5829 = *(i8*)(intptr_t)v5828;
	i8 v5830 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5830 = v5829;

	i1 v5831 = (i1)+3;
	i8 v5832 = (i8)(intptr_t)(ws+3504);
	i8 v5833 = *(i8*)(intptr_t)v5832;
	i8 v5834 = v5833+(+52);
	*(i1*)(intptr_t)v5834 = v5831;

	i8 v5835 = (i8)(intptr_t)(ws+1528);
	i8 v5836 = *(i8*)(intptr_t)v5835;
	i8 v5837 = v5836+(+48);
	i2 v5838 = *(i2*)(intptr_t)v5837;
	i8 v5839 = (i8)(intptr_t)(ws+3504);
	i8 v5840 = *(i8*)(intptr_t)v5839;
	i8 v5841 = v5840+(+48);
	*(i2*)(intptr_t)v5841 = v5838;

	i8 v5842 = (i8)(intptr_t)(ws+1528);
	i8 v5843 = *(i8*)(intptr_t)v5842;
	i8 v5844 = v5843+(+53);
	i1 v5845 = *(i1*)(intptr_t)v5844;
	i8 v5846 = (i8)(intptr_t)(ws+3504);
	i8 v5847 = *(i8*)(intptr_t)v5846;
	i8 v5848 = v5847+(+53);
	*(i1*)(intptr_t)v5848 = v5845;

	i8 v5849 = (i8)(intptr_t)(ws+1528);
	i8 v5850 = *(i8*)(intptr_t)v5849;
	i8 v5851 = v5850+(+50);
	i2 v5852 = *(i2*)(intptr_t)v5851;
	i8 v5853 = (i8)(intptr_t)(ws+3504);
	i8 v5854 = *(i8*)(intptr_t)v5853;
	i8 v5855 = v5854+(+50);
	*(i2*)(intptr_t)v5855 = v5852;

	i8 v5856 = (i8)(intptr_t)(ws+3496);
	i8 v5857 = *(i8*)(intptr_t)v5856;
	i8 v5858 = (i8)(intptr_t)(ws+3504);
	i8 v5859 = *(i8*)(intptr_t)v5858;
	*(i8*)(intptr_t)v5859 = v5857;

	i8 v5860 = (i8)(intptr_t)(ws+3504);
	i8 v5861 = *(i8*)(intptr_t)v5860;
	i8 v5862 = (i8)(intptr_t)(ws+3496);
	i8 v5863 = *(i8*)(intptr_t)v5862;
	i8 v5864 = v5863+(+40);
	*(i8*)(intptr_t)v5864 = v5861;

	i8 v5865 = (i8)(intptr_t)(ws+3496);
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = v5866+(+32);
	i8 v5868 = *(i8*)(intptr_t)v5867;
	i8 v5869 = v5868+(+8);
	i8 v5870 = *(i8*)(intptr_t)v5869;
	*(i8*)(intptr_t)(ws+3528) = v5870;
	i8 v5871 = (i8)(intptr_t)(f70_StrDupBraced);

	((void(*)(void))(intptr_t)v5871)();

	i8 v5872 = *(i8*)(intptr_t)(ws+3536);
	i8 v5873 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v5873 = v5872;

	i8 v5874 = (i8)(intptr_t)(ws+3496);
	i8 v5875 = *(i8*)(intptr_t)v5874;
	i8 v5876 = v5875+(+32);
	i8 v5877 = *(i8*)(intptr_t)v5876;
	i8 v5878 = v5877+(+16);
	i8 v5879 = *(i8*)(intptr_t)v5878;
	*(i8*)(intptr_t)(ws+3528) = v5879;
	i8 v5880 = (i8)(intptr_t)(ws+3504);
	i8 v5881 = *(i8*)(intptr_t)v5880;
	*(i8*)(intptr_t)(ws+3536) = v5881;
	i8 v5882 = (i8)(intptr_t)(ws+3520);
	i8 v5883 = *(i8*)(intptr_t)v5882;
	*(i8*)(intptr_t)(ws+3544) = v5883;
	i8 v5884 = (i8)(intptr_t)(f225_AddTypeToNamespace);

	((void(*)(void))(intptr_t)v5884)();

c02_049a:;

c02_0496:;

}
	void f224_CheckNotPartialType(void);
	void f66_AllocNewType(void);
	void f243_ArchGuessIntType(void);
	void f71_StrDupArrayed(void);
	void f225_AddTypeToNamespace(void);

// MakeArrayType workspace at ws+3392 length ws+56
void f264_MakeArrayType(void) {

	i8 v5885 = (i8)(intptr_t)(ws+3392);
	i8 v5886 = *(i8*)(intptr_t)v5885;
	*(i8*)(intptr_t)(ws+3520) = v5886;
	i8 v5887 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v5887)();

	i8 v5888 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v5888)();

	i8 v5889 = *(i8*)(intptr_t)(ws+3528);
	i8 v5890 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5890 = v5889;

	i8 v5891 = (i8)(intptr_t)(ws+3416);
	i8 v5892 = *(i8*)(intptr_t)v5891;
	i8 v5893 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v5893 = v5892;

	i1 v5894 = (i1)+4;
	i8 v5895 = (i8)(intptr_t)(ws+3408);
	i8 v5896 = *(i8*)(intptr_t)v5895;
	i8 v5897 = v5896+(+52);
	*(i1*)(intptr_t)v5897 = v5894;

	i2 v5898 = (i2)+0;
	i8 v5899 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5899 = v5898;

	i2 v5900 = (i2)+0;
	i8 v5901 = (i8)(intptr_t)(ws+3400);
	i2 v5902 = *(i2*)(intptr_t)v5901;
	if (v5900<v5902) goto c02_049e; else goto c02_049f;

c02_049e:;

	i8 v5903 = (i8)(intptr_t)(ws+3392);
	i8 v5904 = *(i8*)(intptr_t)v5903;
	i8 v5905 = v5904+(+50);
	i2 v5906 = *(i2*)(intptr_t)v5905;
	i8 v5907 = (i8)(intptr_t)(ws+3400);
	i2 v5908 = *(i2*)(intptr_t)v5907;
	i2 v5909 = v5908+(-1);
	i2 v5910 = v5906*v5909;
	i8 v5911 = (i8)(intptr_t)(ws+3392);
	i8 v5912 = *(i8*)(intptr_t)v5911;
	i8 v5913 = v5912+(+48);
	i2 v5914 = *(i2*)(intptr_t)v5913;
	i2 v5915 = v5910+v5914;
	i8 v5916 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5916 = v5915;

c02_049f:;

c02_049b:;

	i8 v5917 = (i8)(intptr_t)(ws+3424);
	i2 v5918 = *(i2*)(intptr_t)v5917;
	i8 v5919 = (i8)(intptr_t)(ws+3408);
	i8 v5920 = *(i8*)(intptr_t)v5919;
	i8 v5921 = v5920+(+48);
	*(i2*)(intptr_t)v5921 = v5918;

	i8 v5922 = (i8)(intptr_t)(ws+3392);
	i8 v5923 = *(i8*)(intptr_t)v5922;
	i8 v5924 = v5923+(+53);
	i1 v5925 = *(i1*)(intptr_t)v5924;
	i8 v5926 = (i8)(intptr_t)(ws+3408);
	i8 v5927 = *(i8*)(intptr_t)v5926;
	i8 v5928 = v5927+(+53);
	*(i1*)(intptr_t)v5928 = v5925;

	i8 v5929 = (i8)(intptr_t)(ws+3392);
	i8 v5930 = *(i8*)(intptr_t)v5929;
	i8 v5931 = v5930+(+50);
	i2 v5932 = *(i2*)(intptr_t)v5931;
	i8 v5933 = (i8)(intptr_t)(ws+3400);
	i2 v5934 = *(i2*)(intptr_t)v5933;
	i2 v5935 = v5932*v5934;
	i8 v5936 = (i8)(intptr_t)(ws+3408);
	i8 v5937 = *(i8*)(intptr_t)v5936;
	i8 v5938 = v5937+(+50);
	*(i2*)(intptr_t)v5938 = v5935;

	i8 v5939 = (i8)(intptr_t)(ws+3392);
	i8 v5940 = *(i8*)(intptr_t)v5939;
	i8 v5941 = (i8)(intptr_t)(ws+3408);
	i8 v5942 = *(i8*)(intptr_t)v5941;
	*(i8*)(intptr_t)v5942 = v5940;

	i8 v5943 = (i8)(intptr_t)(ws+3400);
	i2 v5944 = *(i2*)(intptr_t)v5943;
	i8 v5945 = (i8)(intptr_t)(ws+3408);
	i8 v5946 = *(i8*)(intptr_t)v5945;
	i8 v5947 = v5946+(+8);
	*(i2*)(intptr_t)v5947 = v5944;

	i4 v5948 = (i4)+0;
	*(i4*)(intptr_t)(ws+3448) = v5948;
	i8 v5949 = (i8)(intptr_t)(ws+3400);
	i2 v5950 = *(i2*)(intptr_t)v5949;
	i2 v5951 = v5950+(-1);
	i4 v5952 = v5951;
	*(i4*)(intptr_t)(ws+3452) = v5952;
	i8 v5953 = (i8)(intptr_t)(f243_ArchGuessIntType);

	((void(*)(void))(intptr_t)v5953)();

	i8 v5954 = *(i8*)(intptr_t)(ws+3456);
	i8 v5955 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v5955 = v5954;

	i8 v5956 = (i8)(intptr_t)(ws+3432);
	i8 v5957 = *(i8*)(intptr_t)v5956;
	i8 v5958 = (i8)(intptr_t)(ws+3408);
	i8 v5959 = *(i8*)(intptr_t)v5958;
	i8 v5960 = v5959+(+16);
	*(i8*)(intptr_t)v5960 = v5957;

	i8 v5961 = (i8)(intptr_t)(ws+3392);
	i8 v5962 = *(i8*)(intptr_t)v5961;
	i8 v5963 = v5962+(+32);
	i8 v5964 = *(i8*)(intptr_t)v5963;
	i8 v5965 = v5964+(+8);
	i8 v5966 = *(i8*)(intptr_t)v5965;
	*(i8*)(intptr_t)(ws+3448) = v5966;
	i8 v5967 = (i8)(intptr_t)(ws+3400);
	i2 v5968 = *(i2*)(intptr_t)v5967;
	*(i2*)(intptr_t)(ws+3456) = v5968;
	i8 v5969 = (i8)(intptr_t)(f71_StrDupArrayed);

	((void(*)(void))(intptr_t)v5969)();

	i8 v5970 = *(i8*)(intptr_t)(ws+3464);
	i8 v5971 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v5971 = v5970;

	i8 v5972 = (i8)(intptr_t)(ws+3392);
	i8 v5973 = *(i8*)(intptr_t)v5972;
	i8 v5974 = v5973+(+32);
	i8 v5975 = *(i8*)(intptr_t)v5974;
	i8 v5976 = v5975+(+16);
	i8 v5977 = *(i8*)(intptr_t)v5976;
	*(i8*)(intptr_t)(ws+3528) = v5977;
	i8 v5978 = (i8)(intptr_t)(ws+3408);
	i8 v5979 = *(i8*)(intptr_t)v5978;
	*(i8*)(intptr_t)(ws+3536) = v5979;
	i8 v5980 = (i8)(intptr_t)(ws+3440);
	i8 v5981 = *(i8*)(intptr_t)v5980;
	*(i8*)(intptr_t)(ws+3544) = v5981;
	i8 v5982 = (i8)(intptr_t)(f225_AddTypeToNamespace);

	((void(*)(void))(intptr_t)v5982)();

}

// QueueNamespace workspace at ws+3464 length ws+16
void f266_QueueNamespace(void) {

c02_04a0:;

	i8 v5985 = (i8)(intptr_t)(ws+3464);
	i8 v5986 = *(i8*)(intptr_t)v5985;
	i8 v5987 = *(i8*)(intptr_t)v5986;
	i8 v5988 = (i8)+0;
	if (v5987==v5988) goto c02_04a5; else goto c02_04a4;

c02_04a4:;

	i8 v5989 = (i8)(intptr_t)(ws+3464);
	i8 v5990 = *(i8*)(intptr_t)v5989;
	i8 v5991 = *(i8*)(intptr_t)v5990;
	i8 v5992 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v5992 = v5991;

	i8 v5993 = (i8)(intptr_t)(ws+3472);
	i8 v5994 = *(i8*)(intptr_t)v5993;
	i8 v5995 = v5994+(+24);
	i8 v5996 = *(i8*)(intptr_t)v5995;
	i8 v5997 = (i8)(intptr_t)(ws+3464);
	i8 v5998 = *(i8*)(intptr_t)v5997;
	*(i8*)(intptr_t)v5998 = v5996;

	i8 v5999 = (i8)(intptr_t)(ws+3416);
	i8 v6000 = *(i8*)(intptr_t)v5999;
	i8 v6001 = (i8)(intptr_t)(ws+3472);
	i8 v6002 = *(i8*)(intptr_t)v6001;
	i8 v6003 = v6002+(+24);
	*(i8*)(intptr_t)v6003 = v6000;

	i8 v6004 = (i8)(intptr_t)(ws+3472);
	i8 v6005 = *(i8*)(intptr_t)v6004;
	i8 v6006 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6006 = v6005;

	goto c02_04a0;

c02_04a5:;

}
	void f100_GetOutputParameter(void);
	void f99_GetInputParameter(void);
	void f266_QueueNamespace(void);
	void f266_QueueNamespace(void);
	void f34_Free(void);
	void f67_FreeType(void);
	void f34_Free(void);
	void f34_Free(void);
	void f65_FreeSymbol(void);

// DestructSubroutineContents workspace at ws+3408 length ws+56
void f265_DestructSubroutineContents(void) {

	i8 v5983 = (i8)+0;
	i8 v5984 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5984 = v5983;


	i8 v6007 = (i8)(intptr_t)(ws+3408);
	i8 v6008 = *(i8*)(intptr_t)v6007;
	i8 v6009 = v6008+(+81);
	i1 v6010 = *(i1*)(intptr_t)v6009;
	i1 v6011 = (i1)+0;
	if (v6010==v6011) goto c02_04aa; else goto c02_04a9;

c02_04a9:;

	i8 v6012 = (i8)(intptr_t)(ws+3408);
	i8 v6013 = *(i8*)(intptr_t)v6012;
	*(i8*)(intptr_t)(ws+3488) = v6013;
	i8 v6014 = (i8)(intptr_t)(ws+3408);
	i8 v6015 = *(i8*)(intptr_t)v6014;
	i8 v6016 = v6015+(+81);
	i1 v6017 = *(i1*)(intptr_t)v6016;
	i1 v6018 = v6017+(-1);
	*(i1*)(intptr_t)(ws+3496) = v6018;
	i8 v6019 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v6019)();

	i8 v6020 = *(i8*)(intptr_t)(ws+3504);
	i8 v6021 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6021 = v6020;

	i8 v6022 = (i8)(intptr_t)(ws+3432);
	i8 v6023 = *(i8*)(intptr_t)v6022;
	i8 v6024 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6024 = v6023;

	goto c02_04a6;

c02_04aa:;

	i8 v6025 = (i8)(intptr_t)(ws+3408);
	i8 v6026 = *(i8*)(intptr_t)v6025;
	i8 v6027 = v6026+(+80);
	i1 v6028 = *(i1*)(intptr_t)v6027;
	i1 v6029 = (i1)+0;
	if (v6028==v6029) goto c02_04ae; else goto c02_04ad;

c02_04ad:;

	i8 v6030 = (i8)(intptr_t)(ws+3408);
	i8 v6031 = *(i8*)(intptr_t)v6030;
	*(i8*)(intptr_t)(ws+3464) = v6031;
	i8 v6032 = (i8)(intptr_t)(ws+3408);
	i8 v6033 = *(i8*)(intptr_t)v6032;
	i8 v6034 = v6033+(+80);
	i1 v6035 = *(i1*)(intptr_t)v6034;
	i1 v6036 = v6035+(-1);
	*(i1*)(intptr_t)(ws+3472) = v6036;
	i8 v6037 = (i8)(intptr_t)(f99_GetInputParameter);

	((void(*)(void))(intptr_t)v6037)();

	i8 v6038 = *(i8*)(intptr_t)(ws+3480);
	i8 v6039 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6039 = v6038;

	i8 v6040 = (i8)(intptr_t)(ws+3440);
	i8 v6041 = *(i8*)(intptr_t)v6040;
	i8 v6042 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6042 = v6041;

	goto c02_04a6;

c02_04ae:;

	i8 v6043 = (i8)+0;
	i8 v6044 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6044 = v6043;

c02_04a6:;

	i8 v6045 = (i8)(intptr_t)(ws+3408);
	i8 v6046 = *(i8*)(intptr_t)v6045;
	i8 v6047 = v6046+(+16);
	i8 v6048 = *(i8*)(intptr_t)v6047;
	i8 v6049 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6049 = v6048;

	i8 v6050 = (i8)(intptr_t)(ws+3424);
	i8 v6051 = *(i8*)(intptr_t)v6050;
	i8 v6052 = (i8)+0;
	if (v6051==v6052) goto c02_04b3; else goto c02_04b2;

c02_04b2:;

	i8 v6053 = (i8)(intptr_t)(ws+3424);
	i8 v6054 = *(i8*)(intptr_t)v6053;
	i8 v6055 = v6054+(+24);
	i8 v6056 = *(i8*)(intptr_t)v6055;
	i8 v6057 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6057 = v6056;

c02_04b3:;

c02_04af:;

c02_04b4:;

	i8 v6058 = (i8)(intptr_t)(ws+3416);
	i8 v6059 = *(i8*)(intptr_t)v6058;
	i8 v6060 = (i8)+0;
	if (v6059==v6060) goto c02_04b9; else goto c02_04b8;

c02_04b8:;

	i8 v6061 = (i8)(intptr_t)(ws+3416);
	i8 v6062 = *(i8*)(intptr_t)v6061;
	i8 v6063 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6063 = v6062;

	i8 v6064 = (i8)(intptr_t)(ws+3416);
	i8 v6065 = *(i8*)(intptr_t)v6064;
	i8 v6066 = v6065+(+24);
	i8 v6067 = *(i8*)(intptr_t)v6066;
	i8 v6068 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6068 = v6067;

	i8 v6069 = (i8)(intptr_t)(ws+3448);
	i8 v6070 = *(i8*)(intptr_t)v6069;
	i8 v6071 = v6070+(+32);
	i1 v6072 = *(i1*)(intptr_t)v6071;

	if (v6072 != +30) goto c02_04bb;

	i8 v6073 = (i8)(intptr_t)(ws+3448);
	i8 v6074 = *(i8*)(intptr_t)v6073;
	i8 v6075 = *(i8*)(intptr_t)v6074;
	i8 v6076 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6076 = v6075;

	i8 v6077 = (i8)(intptr_t)(ws+3456);
	i8 v6078 = *(i8*)(intptr_t)v6077;
	i8 v6079 = v6078+(+52);
	i1 v6080 = *(i1*)(intptr_t)v6079;

	if (v6080 != +5) goto c02_04bd;

	i8 v6081 = (i8)(intptr_t)(ws+3456);
	i8 v6082 = *(i8*)(intptr_t)v6081;
	*(i8*)(intptr_t)(ws+3464) = v6082;
	i8 v6083 = (i8)(intptr_t)(f266_QueueNamespace);

	((void(*)(void))(intptr_t)v6083)();

	goto c02_04bc;

c02_04bd:;

	if (v6080 != +6) goto c02_04be;

	i8 v6084 = (i8)(intptr_t)(ws+3456);
	i8 v6085 = *(i8*)(intptr_t)v6084;
	i8 v6086 = *(i8*)(intptr_t)v6085;
	i8 v6087 = v6086+(+16);
	*(i8*)(intptr_t)(ws+3464) = v6087;
	i8 v6088 = (i8)(intptr_t)(f266_QueueNamespace);

	((void(*)(void))(intptr_t)v6088)();

	i8 v6089 = (i8)(intptr_t)(ws+3456);
	i8 v6090 = *(i8*)(intptr_t)v6089;
	i8 v6091 = *(i8*)(intptr_t)v6090;
	*(i8*)(intptr_t)(ws+3680) = v6091;
	i8 v6092 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6092)();

c02_04be:;

c02_04bc:;


	i8 v6093 = (i8)(intptr_t)(ws+3456);
	i8 v6094 = *(i8*)(intptr_t)v6093;
	*(i8*)(intptr_t)(ws+3464) = v6094;
	i8 v6095 = (i8)(intptr_t)(f67_FreeType);

	((void(*)(void))(intptr_t)v6095)();

	goto c02_04ba;

c02_04bb:;

	if (v6072 != +28) goto c02_04bf;

	i8 v6096 = (i8)(intptr_t)(ws+3448);
	i8 v6097 = *(i8*)(intptr_t)v6096;
	i8 v6098 = *(i8*)(intptr_t)v6097;
	*(i8*)(intptr_t)(ws+3680) = v6098;
	i8 v6099 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6099)();

c02_04bf:;

c02_04ba:;


	i8 v6100 = (i8)(intptr_t)(ws+3448);
	i8 v6101 = *(i8*)(intptr_t)v6100;
	i8 v6102 = v6101+(+8);
	i8 v6103 = *(i8*)(intptr_t)v6102;
	*(i8*)(intptr_t)(ws+3680) = v6103;
	i8 v6104 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6104)();

	i8 v6105 = (i8)(intptr_t)(ws+3448);
	i8 v6106 = *(i8*)(intptr_t)v6105;
	*(i8*)(intptr_t)(ws+3464) = v6106;
	i8 v6107 = (i8)(intptr_t)(f65_FreeSymbol);

	((void(*)(void))(intptr_t)v6107)();

	goto c02_04b4;

c02_04b9:;

	i8 v6108 = (i8)(intptr_t)(ws+3424);
	i8 v6109 = *(i8*)(intptr_t)v6108;
	i8 v6110 = (i8)+0;
	if (v6109==v6110) goto c02_04c4; else goto c02_04c3;

c02_04c3:;

	i8 v6111 = (i8)+0;
	i8 v6112 = (i8)(intptr_t)(ws+3424);
	i8 v6113 = *(i8*)(intptr_t)v6112;
	i8 v6114 = v6113+(+24);
	*(i8*)(intptr_t)v6114 = v6111;

	goto c02_04c0;

c02_04c4:;

	i8 v6115 = (i8)+0;
	i8 v6116 = (i8)(intptr_t)(ws+3408);
	i8 v6117 = *(i8*)(intptr_t)v6116;
	i8 v6118 = v6117+(+16);
	*(i8*)(intptr_t)v6118 = v6115;

c02_04c0:;

	i8 v6119 = (i8)(intptr_t)(ws+3424);
	i8 v6120 = *(i8*)(intptr_t)v6119;
	i8 v6121 = (i8)(intptr_t)(ws+3408);
	i8 v6122 = *(i8*)(intptr_t)v6121;
	i8 v6123 = v6122+(+24);
	*(i8*)(intptr_t)v6123 = v6120;

}
	void f72_InternalStrDup(void);
	void f221_AddSymbol(void);
	void f69_InternalAlloc(void);

// CopyParameterList workspace at ws+3408 length ws+56
void f267_CopyParameterList(void) {

	i8 v6124 = (i8)+0;
	i8 v6125 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6125 = v6124;

c02_04c5:;

	i8 v6126 = (i8)(intptr_t)(ws+3408);
	i8 v6127 = *(i8*)(intptr_t)v6126;
	i8 v6128 = (i8)+0;
	if (v6127==v6128) goto c02_04ca; else goto c02_04c9;

c02_04c9:;

	i8 v6129 = (i8)(intptr_t)(ws+3408);
	i8 v6130 = *(i8*)(intptr_t)v6129;
	i8 v6131 = v6130+(+8);
	i8 v6132 = *(i8*)(intptr_t)v6131;
	*(i8*)(intptr_t)(ws+3464) = v6132;
	i8 v6133 = (i8)(intptr_t)(f72_InternalStrDup);

	((void(*)(void))(intptr_t)v6133)();

	i8 v6134 = *(i8*)(intptr_t)(ws+3472);
	i8 v6135 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6135 = v6134;

	i8 v6136 = (i8)(intptr_t)(ws+3416);
	i8 v6137 = *(i8*)(intptr_t)v6136;
	i8 v6138 = v6137+(+16);
	*(i8*)(intptr_t)(ws+3488) = v6138;
	i8 v6139 = (i8)(intptr_t)(ws+3432);
	i8 v6140 = *(i8*)(intptr_t)v6139;
	*(i8*)(intptr_t)(ws+3496) = v6140;
	i8 v6141 = (i8)(intptr_t)(f221_AddSymbol);

	((void(*)(void))(intptr_t)v6141)();

	i8 v6142 = *(i8*)(intptr_t)(ws+3504);
	i8 v6143 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6143 = v6142;

	i8 v6144 = (i8)(intptr_t)(ws+3440);
	i8 v6145 = *(i8*)(intptr_t)v6144;
	i8 v6146 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6146 = v6145;

	i1 v6147 = (i1)+28;
	i8 v6148 = (i8)(intptr_t)(ws+3448);
	i8 v6149 = *(i8*)(intptr_t)v6148;
	i8 v6150 = v6149+(+32);
	*(i1*)(intptr_t)v6150 = v6147;

	i8 v6151 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v6151;
	i8 v6152 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v6152)();

	i8 v6153 = *(i8*)(intptr_t)(ws+3648);
	i8 v6154 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6154 = v6153;

	i8 v6155 = (i8)(intptr_t)(ws+3456);
	i8 v6156 = *(i8*)(intptr_t)v6155;
	i8 v6157 = (i8)(intptr_t)(ws+3448);
	i8 v6158 = *(i8*)(intptr_t)v6157;
	*(i8*)(intptr_t)v6158 = v6156;

	i8 v6159 = (i8)(intptr_t)(ws+3408);
	i8 v6160 = *(i8*)(intptr_t)v6159;
	i8 v6161 = *(i8*)(intptr_t)v6160;
	i8 v6162 = *(i8*)(intptr_t)v6161;
	i8 v6163 = (i8)(intptr_t)(ws+3448);
	i8 v6164 = *(i8*)(intptr_t)v6163;
	i8 v6165 = *(i8*)(intptr_t)v6164;
	*(i8*)(intptr_t)v6165 = v6162;

	i8 v6166 = (i8)(intptr_t)(ws+3408);
	i8 v6167 = *(i8*)(intptr_t)v6166;
	i8 v6168 = *(i8*)(intptr_t)v6167;
	i8 v6169 = v6168+(+8);
	i8 v6170 = *(i8*)(intptr_t)v6169;
	i8 v6171 = (i8)(intptr_t)(ws+3448);
	i8 v6172 = *(i8*)(intptr_t)v6171;
	i8 v6173 = *(i8*)(intptr_t)v6172;
	i8 v6174 = v6173+(+8);
	*(i8*)(intptr_t)v6174 = v6170;

	i8 v6175 = (i8)(intptr_t)(ws+3408);
	i8 v6176 = *(i8*)(intptr_t)v6175;
	i8 v6177 = *(i8*)(intptr_t)v6176;
	i8 v6178 = v6177+(+26);
	i1 v6179 = *(i1*)(intptr_t)v6178;
	i8 v6180 = (i8)(intptr_t)(ws+3448);
	i8 v6181 = *(i8*)(intptr_t)v6180;
	i8 v6182 = *(i8*)(intptr_t)v6181;
	i8 v6183 = v6182+(+26);
	*(i1*)(intptr_t)v6183 = v6179;

	i8 v6184 = (i8)(intptr_t)(ws+3408);
	i8 v6185 = *(i8*)(intptr_t)v6184;
	i8 v6186 = *(i8*)(intptr_t)v6185;
	i8 v6187 = v6186+(+24);
	i2 v6188 = *(i2*)(intptr_t)v6187;
	i8 v6189 = (i8)(intptr_t)(ws+3448);
	i8 v6190 = *(i8*)(intptr_t)v6189;
	i8 v6191 = *(i8*)(intptr_t)v6190;
	i8 v6192 = v6191+(+24);
	*(i2*)(intptr_t)v6192 = v6188;

	i8 v6193 = (i8)(intptr_t)(ws+3424);
	i8 v6194 = *(i8*)(intptr_t)v6193;
	i8 v6195 = (i8)+0;
	if (v6194==v6195) goto c02_04cf; else goto c02_04ce;

c02_04ce:;

	i8 v6196 = (i8)(intptr_t)(ws+3448);
	i8 v6197 = *(i8*)(intptr_t)v6196;
	i8 v6198 = (i8)(intptr_t)(ws+3424);
	i8 v6199 = *(i8*)(intptr_t)v6198;
	i8 v6200 = *(i8*)(intptr_t)v6199;
	i8 v6201 = v6200+(+16);
	*(i8*)(intptr_t)v6201 = v6197;

c02_04cf:;

c02_04cb:;

	i8 v6202 = (i8)(intptr_t)(ws+3448);
	i8 v6203 = *(i8*)(intptr_t)v6202;
	i8 v6204 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6204 = v6203;

	i8 v6205 = (i8)(intptr_t)(ws+3408);
	i8 v6206 = *(i8*)(intptr_t)v6205;
	i8 v6207 = *(i8*)(intptr_t)v6206;
	i8 v6208 = v6207+(+16);
	i8 v6209 = *(i8*)(intptr_t)v6208;
	i8 v6210 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6210 = v6209;

	goto c02_04c5;

c02_04ca:;

}
	void f66_AllocNewType(void);
	void f64_AllocNewSymbol(void);
const i1 c02_s0108[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f69_InternalAlloc(void);
	void f220_AddToNamespace(void);

// CreateMainSubroutine workspace at ws+3264 length ws+40
void f268_CreateMainSubroutine(void) {

	i8 v6211 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v6211)();

	i8 v6212 = *(i8*)(intptr_t)(ws+3528);
	i8 v6213 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6213 = v6212;

	i8 v6214 = (i8)(intptr_t)(ws+3264);
	i8 v6215 = *(i8*)(intptr_t)v6214;
	i8 v6216 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v6216 = v6215;

	i1 v6217 = (i1)+6;
	i8 v6218 = (i8)(intptr_t)(ws+3272);
	i8 v6219 = *(i8*)(intptr_t)v6218;
	i8 v6220 = v6219+(+52);
	*(i1*)(intptr_t)v6220 = v6217;

	i8 v6221 = (i8)(intptr_t)(f64_AllocNewSymbol);

	((void(*)(void))(intptr_t)v6221)();

	i8 v6222 = *(i8*)(intptr_t)(ws+3568);
	i8 v6223 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v6223 = v6222;

	i8 v6224 = (i8)(intptr_t)(ws+3280);
	i8 v6225 = *(i8*)(intptr_t)v6224;
	i8 v6226 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v6226 = v6225;

	i1 v6227 = (i1)+30;
	i8 v6228 = (i8)(intptr_t)(ws+3288);
	i8 v6229 = *(i8*)(intptr_t)v6228;
	i8 v6230 = v6229+(+32);
	*(i1*)(intptr_t)v6230 = v6227;

	i8 v6231 = (i8)(intptr_t)c02_s0108;
	i8 v6232 = (i8)(intptr_t)(ws+3288);
	i8 v6233 = *(i8*)(intptr_t)v6232;
	i8 v6234 = v6233+(+8);
	*(i8*)(intptr_t)v6234 = v6231;

	i8 v6235 = (i8)(intptr_t)(ws+3272);
	i8 v6236 = *(i8*)(intptr_t)v6235;
	i8 v6237 = (i8)(intptr_t)(ws+3288);
	i8 v6238 = *(i8*)(intptr_t)v6237;
	*(i8*)(intptr_t)v6238 = v6236;

	i8 v6239 = (i8)(intptr_t)(ws+3288);
	i8 v6240 = *(i8*)(intptr_t)v6239;
	i8 v6241 = (i8)(intptr_t)(ws+3272);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	i8 v6243 = v6242+(+32);
	*(i8*)(intptr_t)v6243 = v6240;

	i8 v6244 = (i8)+83;
	*(i8*)(intptr_t)(ws+3640) = v6244;
	i8 v6245 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v6245)();

	i8 v6246 = *(i8*)(intptr_t)(ws+3648);
	i8 v6247 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v6247 = v6246;

	i8 v6248 = (i8)(intptr_t)(ws+3296);
	i8 v6249 = *(i8*)(intptr_t)v6248;
	i8 v6250 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v6250 = v6249;

	i8 v6251 = (i8)(intptr_t)(ws+3288);
	i8 v6252 = *(i8*)(intptr_t)v6251;
	i8 v6253 = (i8)(intptr_t)(ws+40);
	i8 v6254 = *(i8*)(intptr_t)v6253;
	*(i8*)(intptr_t)v6254 = v6252;

	i8 v6255 = (i8)(intptr_t)(ws+3272);
	i8 v6256 = *(i8*)(intptr_t)v6255;
	i8 v6257 = (i8)(intptr_t)(ws+40);
	i8 v6258 = *(i8*)(intptr_t)v6257;
	i8 v6259 = v6258+(+40);
	*(i8*)(intptr_t)v6259 = v6256;

	i8 v6260 = (i8)(intptr_t)(ws+40);
	i8 v6261 = *(i8*)(intptr_t)v6260;
	i8 v6262 = (i8)(intptr_t)(ws+40);
	i8 v6263 = *(i8*)(intptr_t)v6262;
	i8 v6264 = v6263+(+48);
	*(i8*)(intptr_t)v6264 = v6261;

	i8 v6265 = (i8)(intptr_t)(ws+40);
	i8 v6266 = *(i8*)(intptr_t)v6265;
	i8 v6267 = (i8)(intptr_t)(ws+3272);
	i8 v6268 = *(i8*)(intptr_t)v6267;
	*(i8*)(intptr_t)v6268 = v6266;

	i8 v6269 = (i8)(intptr_t)(ws+40);
	i8 v6270 = *(i8*)(intptr_t)v6269;
	i8 v6271 = v6270+(+16);
	*(i8*)(intptr_t)(ws+3568) = v6271;
	i8 v6272 = (i8)(intptr_t)(ws+3288);
	i8 v6273 = *(i8*)(intptr_t)v6272;
	*(i8*)(intptr_t)(ws+3576) = v6273;
	i8 v6274 = (i8)(intptr_t)(f220_AddToNamespace);

	((void(*)(void))(intptr_t)v6274)();

}
	void f204_EmitterDeclareWorkspace(void);

// ReportWorkspaces workspace at ws+3408 length ws+12
void f269_ReportWorkspaces(void) {

	i1 v6275 = (i1)+0;
	i8 v6276 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6276 = v6275;

c02_04d0:;

	i8 v6277 = (i8)(intptr_t)(ws+3416);
	i1 v6278 = *(i1*)(intptr_t)v6277;
	i1 v6279 = (i1)+4;
	if (v6278==v6279) goto c02_04d5; else goto c02_04d4;

c02_04d4:;

	i8 v6280 = (i8)(intptr_t)(ws+3408);
	i8 v6281 = *(i8*)(intptr_t)v6280;
	i8 v6282 = v6281+(+58);
	i8 v6283 = (i8)(intptr_t)(ws+3416);
	i1 v6284 = *(i1*)(intptr_t)v6283;
	i8 v6285 = v6284;
	i1 v6286 = (i1)+1;
	i8 v6287 = ((i8)v6285)<<v6286;
	i8 v6288 = v6282+v6287;
	i2 v6289 = *(i2*)(intptr_t)v6288;
	i8 v6290 = (i8)(intptr_t)(ws+3418);
	*(i2*)(intptr_t)v6290 = v6289;

	i8 v6291 = (i8)(intptr_t)(ws+3418);
	i2 v6292 = *(i2*)(intptr_t)v6291;
	i2 v6293 = (i2)+0;
	if (v6292==v6293) goto c02_04da; else goto c02_04d9;

c02_04d9:;

	i8 v6294 = (i8)(intptr_t)(ws+3408);
	i8 v6295 = *(i8*)(intptr_t)v6294;
	*(i8*)(intptr_t)(ws+3424) = v6295;
	i8 v6296 = (i8)(intptr_t)(ws+3416);
	i1 v6297 = *(i1*)(intptr_t)v6296;
	*(i1*)(intptr_t)(ws+3432) = v6297;
	i8 v6298 = (i8)(intptr_t)(ws+3418);
	i2 v6299 = *(i2*)(intptr_t)v6298;
	*(i2*)(intptr_t)(ws+3434) = v6299;
	i8 v6300 = (i8)(intptr_t)(f204_EmitterDeclareWorkspace);

	((void(*)(void))(intptr_t)v6300)();

c02_04da:;

c02_04d6:;

	i8 v6301 = (i8)(intptr_t)(ws+3416);
	i1 v6302 = *(i1*)(intptr_t)v6301;
	i1 v6303 = v6302+(+1);
	i8 v6304 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6304 = v6303;

	goto c02_04d0;

c02_04d5:;

}
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0109[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s010a[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f12_print(void);
	void f75_EndError(void);

// expr_i_cant_do_that workspace at ws+3504 length ws+16
void f270_expr_i_cant_do_that(void) {

	i8 v6305 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6305)();

	i8 v6306 = (i8)(intptr_t)(ws+3504);
	i8 v6307 = *(i8*)(intptr_t)v6306;
	i8 v6308 = v6307+(+24);
	i8 v6309 = *(i8*)(intptr_t)v6308;
	i8 v6310 = v6309+(+32);
	i8 v6311 = *(i8*)(intptr_t)v6310;
	i8 v6312 = v6311+(+8);
	i8 v6313 = *(i8*)(intptr_t)v6312;
	*(i8*)(intptr_t)(ws+3696) = v6313;
	i8 v6314 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6314)();

	i8 v6315 = (i8)(intptr_t)c02_s0109;
	*(i8*)(intptr_t)(ws+3696) = v6315;
	i8 v6316 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6316)();

	i8 v6317 = (i8)(intptr_t)(ws+3512);
	i8 v6318 = *(i8*)(intptr_t)v6317;
	i8 v6319 = v6318+(+24);
	i8 v6320 = *(i8*)(intptr_t)v6319;
	i8 v6321 = v6320+(+32);
	i8 v6322 = *(i8*)(intptr_t)v6321;
	i8 v6323 = v6322+(+8);
	i8 v6324 = *(i8*)(intptr_t)v6323;
	*(i8*)(intptr_t)(ws+3696) = v6324;
	i8 v6325 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6325)();

	i8 v6326 = (i8)(intptr_t)c02_s010a;
	*(i8*)(intptr_t)(ws+3696) = v6326;
	i8 v6327 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6327)();

	i8 v6328 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6328)();

}
	void f74_StartError(void);
const i1 c02_s010b[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s010c[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s010d[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f232_IsScalar(void);
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s010e[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// CheckExpressionType workspace at ws+3496 length ws+17
void f271_CheckExpressionType(void) {

	i8 v6329 = (i8)(intptr_t)(ws+3496);
	i8 v6330 = *(i8*)(intptr_t)v6329;
	i8 v6331 = v6330+(+24);
	i8 v6332 = *(i8*)(intptr_t)v6331;
	i8 v6333 = (i8)+0;
	if (v6332==v6333) goto c02_04de; else goto c02_04df;

c02_04de:;

	i8 v6334 = (i8)(intptr_t)(ws+3504);
	i8 v6335 = *(i8*)(intptr_t)v6334;
	i8 v6336 = (i8)(intptr_t)(ws+3496);
	i8 v6337 = *(i8*)(intptr_t)v6336;
	i8 v6338 = v6337+(+24);
	*(i8*)(intptr_t)v6338 = v6335;

c02_04df:;

c02_04db:;

	i8 v6339 = (i8)(intptr_t)(ws+3496);
	i8 v6340 = *(i8*)(intptr_t)v6339;
	i8 v6341 = v6340+(+24);
	i8 v6342 = *(i8*)(intptr_t)v6341;
	i8 v6343 = (i8)(intptr_t)(ws+3504);
	i8 v6344 = *(i8*)(intptr_t)v6343;
	if (v6342==v6344) goto c02_04e4; else goto c02_04e3;

c02_04e3:;

	i8 v6345 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6345)();

	i8 v6346 = (i8)(intptr_t)c02_s010b;
	*(i8*)(intptr_t)(ws+3696) = v6346;
	i8 v6347 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6347)();

	i8 v6348 = (i8)(intptr_t)(ws+3496);
	i8 v6349 = *(i8*)(intptr_t)v6348;
	i8 v6350 = v6349+(+24);
	i8 v6351 = *(i8*)(intptr_t)v6350;
	i8 v6352 = v6351+(+32);
	i8 v6353 = *(i8*)(intptr_t)v6352;
	i8 v6354 = v6353+(+8);
	i8 v6355 = *(i8*)(intptr_t)v6354;
	*(i8*)(intptr_t)(ws+3696) = v6355;
	i8 v6356 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6356)();

	i8 v6357 = (i8)(intptr_t)c02_s010c;
	*(i8*)(intptr_t)(ws+3696) = v6357;
	i8 v6358 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6358)();

	i8 v6359 = (i8)(intptr_t)(ws+3504);
	i8 v6360 = *(i8*)(intptr_t)v6359;
	i8 v6361 = v6360+(+32);
	i8 v6362 = *(i8*)(intptr_t)v6361;
	i8 v6363 = v6362+(+8);
	i8 v6364 = *(i8*)(intptr_t)v6363;
	*(i8*)(intptr_t)(ws+3696) = v6364;
	i8 v6365 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6365)();

	i8 v6366 = (i8)(intptr_t)c02_s010d;
	*(i8*)(intptr_t)(ws+3696) = v6366;
	i8 v6367 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6367)();

	i8 v6368 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6368)();

c02_04e4:;

c02_04e0:;

	i8 v6369 = (i8)(intptr_t)(ws+3504);
	i8 v6370 = *(i8*)(intptr_t)v6369;
	*(i8*)(intptr_t)(ws+3544) = v6370;
	i8 v6371 = (i8)(intptr_t)(f232_IsScalar);

	((void(*)(void))(intptr_t)v6371)();

	i1 v6372 = *(i1*)(intptr_t)(ws+3552);
	i8 v6373 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v6373 = v6372;

	i8 v6374 = (i8)(intptr_t)(ws+3512);
	i1 v6375 = *(i1*)(intptr_t)v6374;
	i1 v6376 = (i1)+0;
	if (v6375==v6376) goto c02_04e8; else goto c02_04e9;

c02_04e8:;

	i8 v6377 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6377)();

	i8 v6378 = (i8)(intptr_t)(ws+3504);
	i8 v6379 = *(i8*)(intptr_t)v6378;
	i8 v6380 = v6379+(+32);
	i8 v6381 = *(i8*)(intptr_t)v6380;
	i8 v6382 = v6381+(+8);
	i8 v6383 = *(i8*)(intptr_t)v6382;
	*(i8*)(intptr_t)(ws+3696) = v6383;
	i8 v6384 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6384)();

	i8 v6385 = (i8)(intptr_t)c02_s010e;
	*(i8*)(intptr_t)(ws+3696) = v6385;
	i8 v6386 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6386)();

	i8 v6387 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6387)();

c02_04e9:;

c02_04e5:;

}
	void f230_IsNum(void);
	void f68_IsPtr(void);
const i1 c02_s010f[] = { 0x6c,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s0110[] = { 0x72,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s0111[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f76_SimpleError(void);
	void f230_IsNum(void);
	void f68_IsPtr(void);
const i1 c02_s0112[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(void);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3456 length ws+20
void f272_ResolveUntypedConstantsForAddOrSub(void) {

	i8 v6388 = (i8)(intptr_t)(ws+3456);
	i8 v6389 = *(i8*)(intptr_t)v6388;
	i8 v6390 = v6389+(+24);
	i8 v6391 = *(i8*)(intptr_t)v6390;
	i8 v6392 = (i8)+0;
	if (v6391==v6392) goto c02_04f0; else goto c02_04f1;

c02_04f1:;

	i8 v6393 = (i8)(intptr_t)(ws+3464);
	i8 v6394 = *(i8*)(intptr_t)v6393;
	i8 v6395 = v6394+(+24);
	i8 v6396 = *(i8*)(intptr_t)v6395;
	i8 v6397 = (i8)+0;
	if (v6396==v6397) goto c02_04ef; else goto c02_04f0;

c02_04ef:;

	i8 v6398 = (i8)(intptr_t)(ws+3456);
	i8 v6399 = *(i8*)(intptr_t)v6398;
	i8 v6400 = v6399+(+24);
	i8 v6401 = *(i8*)(intptr_t)v6400;
	*(i8*)(intptr_t)(ws+3560) = v6401;
	i8 v6402 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v6402)();

	i1 v6403 = *(i1*)(intptr_t)(ws+3568);
	i8 v6404 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v6404 = v6403;

	i8 v6405 = (i8)(intptr_t)(ws+3472);
	i1 v6406 = *(i1*)(intptr_t)v6405;
	i1 v6407 = (i1)+0;
	if (v6406==v6407) goto c02_04f6; else goto c02_04f5;

c02_04f5:;

	i8 v6408 = (i8)(intptr_t)(ws+3456);
	i8 v6409 = *(i8*)(intptr_t)v6408;
	i8 v6410 = v6409+(+24);
	i8 v6411 = *(i8*)(intptr_t)v6410;
	i8 v6412 = (i8)(intptr_t)(ws+3464);
	i8 v6413 = *(i8*)(intptr_t)v6412;
	i8 v6414 = v6413+(+24);
	*(i8*)(intptr_t)v6414 = v6411;

	goto c02_04f2;

c02_04f6:;

	i8 v6415 = (i8)(intptr_t)(ws+3456);
	i8 v6416 = *(i8*)(intptr_t)v6415;
	i8 v6417 = v6416+(+24);
	i8 v6418 = *(i8*)(intptr_t)v6417;
	*(i8*)(intptr_t)(ws+3560) = v6418;
	i8 v6419 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6419)();

	i1 v6420 = *(i1*)(intptr_t)(ws+3568);
	i8 v6421 = (i8)(intptr_t)(ws+3473);
	*(i1*)(intptr_t)v6421 = v6420;

	i8 v6422 = (i8)(intptr_t)(ws+3473);
	i1 v6423 = *(i1*)(intptr_t)v6422;
	i1 v6424 = (i1)+0;
	if (v6423==v6424) goto c02_04fa; else goto c02_04f9;

c02_04f9:;

	i8 v6425 = (i8)(intptr_t)(ws+1528);
	i8 v6426 = *(i8*)(intptr_t)v6425;
	i8 v6427 = (i8)(intptr_t)(ws+3464);
	i8 v6428 = *(i8*)(intptr_t)v6427;
	i8 v6429 = v6428+(+24);
	*(i8*)(intptr_t)v6429 = v6426;

	goto c02_04f2;

c02_04fa:;

	i8 v6430 = (i8)(intptr_t)c02_s010f;
	*(i8*)(intptr_t)(ws+3696) = v6430;
	i8 v6431 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6431)();

	i8 v6432 = (i8)(intptr_t)(ws+3456);
	i8 v6433 = *(i8*)(intptr_t)v6432;
	i8 v6434 = v6433+(+24);
	i8 v6435 = *(i8*)(intptr_t)v6434;
	i4 v6436 = v6435;
	*(i4*)(intptr_t)(ws+3480) = v6436;
	i8 v6437 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6437)();

	i8 v6438 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6438)();

	i8 v6439 = (i8)(intptr_t)c02_s0110;
	*(i8*)(intptr_t)(ws+3696) = v6439;
	i8 v6440 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6440)();

	i8 v6441 = (i8)(intptr_t)(ws+3464);
	i8 v6442 = *(i8*)(intptr_t)v6441;
	i8 v6443 = v6442+(+24);
	i8 v6444 = *(i8*)(intptr_t)v6443;
	i4 v6445 = v6444;
	*(i4*)(intptr_t)(ws+3480) = v6445;
	i8 v6446 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6446)();

	i8 v6447 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6447)();

	i8 v6448 = (i8)(intptr_t)c02_s0111;
	*(i8*)(intptr_t)(ws+3648) = v6448;
	i8 v6449 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6449)();

c02_04f2:;

c02_04f0:;

c02_04ea:;

	i8 v6450 = (i8)(intptr_t)(ws+3456);
	i8 v6451 = *(i8*)(intptr_t)v6450;
	i8 v6452 = v6451+(+24);
	i8 v6453 = *(i8*)(intptr_t)v6452;
	i8 v6454 = (i8)+0;
	if (v6453==v6454) goto c02_0502; else goto c02_0501;

c02_0502:;

	i8 v6455 = (i8)(intptr_t)(ws+3464);
	i8 v6456 = *(i8*)(intptr_t)v6455;
	i8 v6457 = v6456+(+24);
	i8 v6458 = *(i8*)(intptr_t)v6457;
	i8 v6459 = (i8)+0;
	if (v6458==v6459) goto c02_0501; else goto c02_0500;

c02_0500:;

	i8 v6460 = (i8)(intptr_t)(ws+3464);
	i8 v6461 = *(i8*)(intptr_t)v6460;
	i8 v6462 = v6461+(+24);
	i8 v6463 = *(i8*)(intptr_t)v6462;
	*(i8*)(intptr_t)(ws+3560) = v6463;
	i8 v6464 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v6464)();

	i1 v6465 = *(i1*)(intptr_t)(ws+3568);
	i8 v6466 = (i8)(intptr_t)(ws+3474);
	*(i1*)(intptr_t)v6466 = v6465;

	i8 v6467 = (i8)(intptr_t)(ws+3474);
	i1 v6468 = *(i1*)(intptr_t)v6467;
	i1 v6469 = (i1)+0;
	if (v6468==v6469) goto c02_0507; else goto c02_0506;

c02_0506:;

	i8 v6470 = (i8)(intptr_t)(ws+3464);
	i8 v6471 = *(i8*)(intptr_t)v6470;
	i8 v6472 = v6471+(+24);
	i8 v6473 = *(i8*)(intptr_t)v6472;
	i8 v6474 = (i8)(intptr_t)(ws+3456);
	i8 v6475 = *(i8*)(intptr_t)v6474;
	i8 v6476 = v6475+(+24);
	*(i8*)(intptr_t)v6476 = v6473;

	goto c02_0503;

c02_0507:;

	i8 v6477 = (i8)(intptr_t)(ws+3464);
	i8 v6478 = *(i8*)(intptr_t)v6477;
	i8 v6479 = v6478+(+24);
	i8 v6480 = *(i8*)(intptr_t)v6479;
	*(i8*)(intptr_t)(ws+3560) = v6480;
	i8 v6481 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6481)();

	i1 v6482 = *(i1*)(intptr_t)(ws+3568);
	i8 v6483 = (i8)(intptr_t)(ws+3475);
	*(i1*)(intptr_t)v6483 = v6482;

	i8 v6484 = (i8)(intptr_t)(ws+3475);
	i1 v6485 = *(i1*)(intptr_t)v6484;
	i1 v6486 = (i1)+0;
	if (v6485==v6486) goto c02_050b; else goto c02_050a;

c02_050a:;

	i8 v6487 = (i8)(intptr_t)c02_s0112;
	*(i8*)(intptr_t)(ws+3648) = v6487;
	i8 v6488 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6488)();

c02_050b:;

c02_0503:;

c02_0501:;

c02_04fb:;

}
	void f270_expr_i_cant_do_that(void);

// ResolveUntypedConstantsSimply workspace at ws+3472 length ws+32
void f273_ResolveUntypedConstantsSimply(void) {

	i8 v6489 = (i8)(intptr_t)(ws+3472);
	i8 v6490 = *(i8*)(intptr_t)v6489;
	i8 v6491 = v6490+(+24);
	i8 v6492 = *(i8*)(intptr_t)v6491;
	i8 v6493 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v6493 = v6492;

	i8 v6494 = (i8)(intptr_t)(ws+3480);
	i8 v6495 = *(i8*)(intptr_t)v6494;
	i8 v6496 = v6495+(+24);
	i8 v6497 = *(i8*)(intptr_t)v6496;
	i8 v6498 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v6498 = v6497;

	i8 v6499 = (i8)(intptr_t)(ws+3488);
	i8 v6500 = *(i8*)(intptr_t)v6499;
	i8 v6501 = (i8)+0;
	if (v6500==v6501) goto c02_0512; else goto c02_0513;

c02_0513:;

	i8 v6502 = (i8)(intptr_t)(ws+3496);
	i8 v6503 = *(i8*)(intptr_t)v6502;
	i8 v6504 = (i8)+0;
	if (v6503==v6504) goto c02_0511; else goto c02_0512;

c02_0511:;

	i8 v6505 = (i8)(intptr_t)(ws+3488);
	i8 v6506 = *(i8*)(intptr_t)v6505;
	i8 v6507 = (i8)(intptr_t)(ws+3480);
	i8 v6508 = *(i8*)(intptr_t)v6507;
	i8 v6509 = v6508+(+24);
	*(i8*)(intptr_t)v6509 = v6506;

	goto c02_050c;

c02_0512:;

	i8 v6510 = (i8)(intptr_t)(ws+3488);
	i8 v6511 = *(i8*)(intptr_t)v6510;
	i8 v6512 = (i8)+0;
	if (v6511==v6512) goto c02_051a; else goto c02_0519;

c02_051a:;

	i8 v6513 = (i8)(intptr_t)(ws+3496);
	i8 v6514 = *(i8*)(intptr_t)v6513;
	i8 v6515 = (i8)+0;
	if (v6514==v6515) goto c02_0519; else goto c02_0518;

c02_0518:;

	i8 v6516 = (i8)(intptr_t)(ws+3496);
	i8 v6517 = *(i8*)(intptr_t)v6516;
	i8 v6518 = (i8)(intptr_t)(ws+3472);
	i8 v6519 = *(i8*)(intptr_t)v6518;
	i8 v6520 = v6519+(+24);
	*(i8*)(intptr_t)v6520 = v6517;

	goto c02_050c;

c02_0519:;

	i8 v6521 = (i8)(intptr_t)(ws+3488);
	i8 v6522 = *(i8*)(intptr_t)v6521;
	i8 v6523 = (i8)(intptr_t)(ws+3496);
	i8 v6524 = *(i8*)(intptr_t)v6523;
	if (v6522==v6524) goto c02_051e; else goto c02_051d;

c02_051d:;

	i8 v6525 = (i8)(intptr_t)(ws+3472);
	i8 v6526 = *(i8*)(intptr_t)v6525;
	*(i8*)(intptr_t)(ws+3504) = v6526;
	i8 v6527 = (i8)(intptr_t)(ws+3480);
	i8 v6528 = *(i8*)(intptr_t)v6527;
	*(i8*)(intptr_t)(ws+3512) = v6528;
	i8 v6529 = (i8)(intptr_t)(f270_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6529)();

c02_051e:;

c02_050c:;

}
	void f230_IsNum(void);
const i1 c02_s0113[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(void);

// CheckNumber workspace at ws+3472 length ws+9
void f274_CheckNumber(void) {

	i8 v6530 = (i8)(intptr_t)(ws+3472);
	i8 v6531 = *(i8*)(intptr_t)v6530;
	i8 v6532 = v6531+(+24);
	i8 v6533 = *(i8*)(intptr_t)v6532;
	*(i8*)(intptr_t)(ws+3560) = v6533;
	i8 v6534 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v6534)();

	i1 v6535 = *(i1*)(intptr_t)(ws+3568);
	i8 v6536 = (i8)(intptr_t)(ws+3480);
	*(i1*)(intptr_t)v6536 = v6535;

	i8 v6537 = (i8)(intptr_t)(ws+3480);
	i1 v6538 = *(i1*)(intptr_t)v6537;
	i1 v6539 = (i1)+0;
	if (v6538==v6539) goto c02_0522; else goto c02_0523;

c02_0522:;

	i8 v6540 = (i8)(intptr_t)c02_s0113;
	*(i8*)(intptr_t)(ws+3648) = v6540;
	i8 v6541 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6541)();

c02_0523:;

c02_051f:;

}
	void f273_ResolveUntypedConstantsSimply(void);
	void f274_CheckNumber(void);
	void f274_CheckNumber(void);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3456 length ws+16
void f275_ResolveUntypedConstantsNeedingNumbers(void) {

	i8 v6542 = (i8)(intptr_t)(ws+3456);
	i8 v6543 = *(i8*)(intptr_t)v6542;
	*(i8*)(intptr_t)(ws+3472) = v6543;
	i8 v6544 = (i8)(intptr_t)(ws+3464);
	i8 v6545 = *(i8*)(intptr_t)v6544;
	*(i8*)(intptr_t)(ws+3480) = v6545;
	i8 v6546 = (i8)(intptr_t)(f273_ResolveUntypedConstantsSimply);

	((void(*)(void))(intptr_t)v6546)();

	i8 v6547 = (i8)(intptr_t)(ws+3456);
	i8 v6548 = *(i8*)(intptr_t)v6547;
	*(i8*)(intptr_t)(ws+3472) = v6548;
	i8 v6549 = (i8)(intptr_t)(f274_CheckNumber);

	((void(*)(void))(intptr_t)v6549)();

	i8 v6550 = (i8)(intptr_t)(ws+3464);
	i8 v6551 = *(i8*)(intptr_t)v6550;
	*(i8*)(intptr_t)(ws+3472) = v6551;
	i8 v6552 = (i8)(intptr_t)(f274_CheckNumber);

	((void(*)(void))(intptr_t)v6552)();

}
	void f273_ResolveUntypedConstantsSimply(void);
	void f270_expr_i_cant_do_that(void);

// CondSimple workspace at ws+3456 length ws+16
void f276_CondSimple(void) {

	i8 v6553 = (i8)(intptr_t)(ws+3456);
	i8 v6554 = *(i8*)(intptr_t)v6553;
	*(i8*)(intptr_t)(ws+3472) = v6554;
	i8 v6555 = (i8)(intptr_t)(ws+3464);
	i8 v6556 = *(i8*)(intptr_t)v6555;
	*(i8*)(intptr_t)(ws+3480) = v6556;
	i8 v6557 = (i8)(intptr_t)(f273_ResolveUntypedConstantsSimply);

	((void(*)(void))(intptr_t)v6557)();

	i8 v6558 = (i8)(intptr_t)(ws+3456);
	i8 v6559 = *(i8*)(intptr_t)v6558;
	i8 v6560 = v6559+(+24);
	i8 v6561 = *(i8*)(intptr_t)v6560;
	i8 v6562 = (i8)(intptr_t)(ws+3464);
	i8 v6563 = *(i8*)(intptr_t)v6562;
	i8 v6564 = v6563+(+24);
	i8 v6565 = *(i8*)(intptr_t)v6564;
	if (v6561==v6565) goto c02_0528; else goto c02_0527;

c02_0527:;

	i8 v6566 = (i8)(intptr_t)(ws+3456);
	i8 v6567 = *(i8*)(intptr_t)v6566;
	*(i8*)(intptr_t)(ws+3504) = v6567;
	i8 v6568 = (i8)(intptr_t)(ws+3464);
	i8 v6569 = *(i8*)(intptr_t)v6568;
	*(i8*)(intptr_t)(ws+3512) = v6569;
	i8 v6570 = (i8)(intptr_t)(f270_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6570)();

c02_0528:;

c02_0524:;

}
	void f168_NodeWidth(void);
	void f172_MidC1Op(void);

// Expr1Simple workspace at ws+3392 length ws+40
void f277_Expr1Simple(void) {

	i8 v6571 = (i8)(intptr_t)(ws+3400);
	i8 v6572 = *(i8*)(intptr_t)v6571;
	*(i8*)(intptr_t)(ws+3456) = v6572;
	i8 v6573 = (i8)(intptr_t)(f168_NodeWidth);

	((void(*)(void))(intptr_t)v6573)();

	i1 v6574 = *(i1*)(intptr_t)(ws+3464);
	i8 v6575 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6575 = v6574;

	i8 v6576 = (i8)(intptr_t)(ws+3392);
	i1 v6577 = *(i1*)(intptr_t)v6576;
	*(i1*)(intptr_t)(ws+3432) = v6577;
	i8 v6578 = (i8)(intptr_t)(ws+3416);
	i1 v6579 = *(i1*)(intptr_t)v6578;
	*(i1*)(intptr_t)(ws+3433) = v6579;
	i8 v6580 = (i8)(intptr_t)(ws+3400);
	i8 v6581 = *(i8*)(intptr_t)v6580;
	*(i8*)(intptr_t)(ws+3440) = v6581;
	i8 v6582 = (i8)(intptr_t)(f172_MidC1Op);

	((void(*)(void))(intptr_t)v6582)();

	i8 v6583 = *(i8*)(intptr_t)(ws+3448);
	i8 v6584 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6584 = v6583;

	i8 v6585 = (i8)(intptr_t)(ws+3424);
	i8 v6586 = *(i8*)(intptr_t)v6585;
	i8 v6587 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6587 = v6586;

	i8 v6588 = (i8)(intptr_t)(ws+3400);
	i8 v6589 = *(i8*)(intptr_t)v6588;
	i8 v6590 = v6589+(+24);
	i8 v6591 = *(i8*)(intptr_t)v6590;
	i8 v6592 = (i8)(intptr_t)(ws+3408);
	i8 v6593 = *(i8*)(intptr_t)v6592;
	i8 v6594 = v6593+(+24);
	*(i8*)(intptr_t)v6594 = v6591;

}
	void f272_ResolveUntypedConstantsForAddOrSub(void);
	void f270_expr_i_cant_do_that(void);

// cant_add_that workspace at ws+3448 length ws+0
void f279_cant_add_that(void) {

	i8 v6600 = (i8)(intptr_t)(ws+3392);
	i8 v6601 = *(i8*)(intptr_t)v6600;
	*(i8*)(intptr_t)(ws+3504) = v6601;
	i8 v6602 = (i8)(intptr_t)(ws+3400);
	i8 v6603 = *(i8*)(intptr_t)v6602;
	*(i8*)(intptr_t)(ws+3512) = v6603;
	i8 v6604 = (i8)(intptr_t)(f270_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6604)();

}
	void f68_IsPtr(void);
	void f68_IsPtr(void);
	void f279_cant_add_that(void);
	void f68_IsPtr(void);
	void f279_cant_add_that(void);
	void f68_IsPtr(void);
	void f279_cant_add_that(void);
	void f168_NodeWidth(void);
	void f174_MidC2Op(void);

// ExprAdd workspace at ws+3392 length ws+56
void f278_ExprAdd(void) {

	i8 v6595 = (i8)(intptr_t)(ws+3392);
	i8 v6596 = *(i8*)(intptr_t)v6595;
	*(i8*)(intptr_t)(ws+3456) = v6596;
	i8 v6597 = (i8)(intptr_t)(ws+3400);
	i8 v6598 = *(i8*)(intptr_t)v6597;
	*(i8*)(intptr_t)(ws+3464) = v6598;
	i8 v6599 = (i8)(intptr_t)(f272_ResolveUntypedConstantsForAddOrSub);

	((void(*)(void))(intptr_t)v6599)();


	i8 v6605 = (i8)(intptr_t)(ws+3392);
	i8 v6606 = *(i8*)(intptr_t)v6605;
	i8 v6607 = v6606+(+24);
	i8 v6608 = *(i8*)(intptr_t)v6607;
	i8 v6609 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6609 = v6608;

	i8 v6610 = (i8)(intptr_t)(ws+3400);
	i8 v6611 = *(i8*)(intptr_t)v6610;
	i8 v6612 = v6611+(+24);
	i8 v6613 = *(i8*)(intptr_t)v6612;
	i8 v6614 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6614 = v6613;

	i8 v6615 = (i8)(intptr_t)(ws+3416);
	i8 v6616 = *(i8*)(intptr_t)v6615;
	*(i8*)(intptr_t)(ws+3560) = v6616;
	i8 v6617 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6617)();

	i1 v6618 = *(i1*)(intptr_t)(ws+3568);
	i8 v6619 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v6619 = v6618;

	i8 v6620 = (i8)(intptr_t)(ws+3432);
	i1 v6621 = *(i1*)(intptr_t)v6620;
	i1 v6622 = (i1)+0;
	if (v6621==v6622) goto c02_052d; else goto c02_052c;

c02_052c:;

	i8 v6623 = (i8)(intptr_t)(ws+3424);
	i8 v6624 = *(i8*)(intptr_t)v6623;
	*(i8*)(intptr_t)(ws+3560) = v6624;
	i8 v6625 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6625)();

	i1 v6626 = *(i1*)(intptr_t)(ws+3568);
	i8 v6627 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v6627 = v6626;

	i8 v6628 = (i8)(intptr_t)(ws+3433);
	i1 v6629 = *(i1*)(intptr_t)v6628;
	i1 v6630 = (i1)+0;
	if (v6629==v6630) goto c02_0535; else goto c02_0533;

c02_0535:;

	i8 v6631 = (i8)(intptr_t)(ws+3424);
	i8 v6632 = *(i8*)(intptr_t)v6631;
	i8 v6633 = (i8)(intptr_t)(ws+1528);
	i8 v6634 = *(i8*)(intptr_t)v6633;
	if (v6632==v6634) goto c02_0534; else goto c02_0533;

c02_0533:;

	i8 v6635 = (i8)(intptr_t)(f279_cant_add_that);

	((void(*)(void))(intptr_t)v6635)();

c02_0534:;

c02_052e:;

	goto c02_0529;

c02_052d:;

	i8 v6636 = (i8)(intptr_t)(ws+3424);
	i8 v6637 = *(i8*)(intptr_t)v6636;
	*(i8*)(intptr_t)(ws+3560) = v6637;
	i8 v6638 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6638)();

	i1 v6639 = *(i1*)(intptr_t)(ws+3568);
	i8 v6640 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v6640 = v6639;

	i8 v6641 = (i8)(intptr_t)(ws+3434);
	i1 v6642 = *(i1*)(intptr_t)v6641;
	i1 v6643 = (i1)+0;
	if (v6642==v6643) goto c02_0539; else goto c02_0538;

c02_0538:;

	i8 v6644 = (i8)(intptr_t)(f279_cant_add_that);

	((void(*)(void))(intptr_t)v6644)();

	goto c02_0529;

c02_0539:;

	i8 v6645 = (i8)(intptr_t)(ws+3416);
	i8 v6646 = *(i8*)(intptr_t)v6645;
	*(i8*)(intptr_t)(ws+3560) = v6646;
	i8 v6647 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6647)();

	i1 v6648 = *(i1*)(intptr_t)(ws+3568);
	i8 v6649 = (i8)(intptr_t)(ws+3435);
	*(i1*)(intptr_t)v6649 = v6648;

	i8 v6650 = (i8)(intptr_t)(ws+3435);
	i1 v6651 = *(i1*)(intptr_t)v6650;
	i1 v6652 = (i1)+0;
	if (v6651==v6652) goto c02_0540; else goto c02_053f;

c02_0540:;

	i8 v6653 = (i8)(intptr_t)(ws+3416);
	i8 v6654 = *(i8*)(intptr_t)v6653;
	i8 v6655 = (i8)(intptr_t)(ws+3424);
	i8 v6656 = *(i8*)(intptr_t)v6655;
	if (v6654==v6656) goto c02_053f; else goto c02_053e;

c02_053e:;

	i8 v6657 = (i8)(intptr_t)(f279_cant_add_that);

	((void(*)(void))(intptr_t)v6657)();

c02_053f:;

c02_0529:;

	i8 v6658 = (i8)(intptr_t)(ws+3392);
	i8 v6659 = *(i8*)(intptr_t)v6658;
	*(i8*)(intptr_t)(ws+3456) = v6659;
	i8 v6660 = (i8)(intptr_t)(f168_NodeWidth);

	((void(*)(void))(intptr_t)v6660)();

	i1 v6661 = *(i1*)(intptr_t)(ws+3464);
	i8 v6662 = (i8)(intptr_t)(ws+3436);
	*(i1*)(intptr_t)v6662 = v6661;

	i1 v6663 = (i1)+158;
	*(i1*)(intptr_t)(ws+3496) = v6663;
	i8 v6664 = (i8)(intptr_t)(ws+3436);
	i1 v6665 = *(i1*)(intptr_t)v6664;
	*(i1*)(intptr_t)(ws+3497) = v6665;
	i8 v6666 = (i8)(intptr_t)(ws+3392);
	i8 v6667 = *(i8*)(intptr_t)v6666;
	*(i8*)(intptr_t)(ws+3504) = v6667;
	i8 v6668 = (i8)(intptr_t)(ws+3400);
	i8 v6669 = *(i8*)(intptr_t)v6668;
	*(i8*)(intptr_t)(ws+3512) = v6669;
	i8 v6670 = (i8)(intptr_t)(f174_MidC2Op);

	((void(*)(void))(intptr_t)v6670)();

	i8 v6671 = *(i8*)(intptr_t)(ws+3520);
	i8 v6672 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6672 = v6671;

	i8 v6673 = (i8)(intptr_t)(ws+3440);
	i8 v6674 = *(i8*)(intptr_t)v6673;
	i8 v6675 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6675 = v6674;

	i8 v6676 = (i8)(intptr_t)(ws+3416);
	i8 v6677 = *(i8*)(intptr_t)v6676;
	i8 v6678 = (i8)(intptr_t)(ws+3408);
	i8 v6679 = *(i8*)(intptr_t)v6678;
	i8 v6680 = v6679+(+24);
	*(i8*)(intptr_t)v6680 = v6677;

}
	void f272_ResolveUntypedConstantsForAddOrSub(void);
	void f270_expr_i_cant_do_that(void);

// cant_sub_that workspace at ws+3456 length ws+0
void f281_cant_sub_that(void) {

	i8 v6686 = (i8)(intptr_t)(ws+3392);
	i8 v6687 = *(i8*)(intptr_t)v6686;
	*(i8*)(intptr_t)(ws+3504) = v6687;
	i8 v6688 = (i8)(intptr_t)(ws+3400);
	i8 v6689 = *(i8*)(intptr_t)v6688;
	*(i8*)(intptr_t)(ws+3512) = v6689;
	i8 v6690 = (i8)(intptr_t)(f270_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6690)();

}
	void f68_IsPtr(void);
	void f68_IsPtr(void);
	void f281_cant_sub_that(void);
	void f230_IsNum(void);
	void f68_IsPtr(void);
	void f281_cant_sub_that(void);
	void f230_IsNum(void);
	void f230_IsNum(void);
	void f281_cant_sub_that(void);
	void f168_NodeWidth(void);
	void f174_MidC2Op(void);
	void f68_IsPtr(void);

// ExprSub workspace at ws+3392 length ws+57
void f280_ExprSub(void) {

	i8 v6681 = (i8)(intptr_t)(ws+3392);
	i8 v6682 = *(i8*)(intptr_t)v6681;
	*(i8*)(intptr_t)(ws+3456) = v6682;
	i8 v6683 = (i8)(intptr_t)(ws+3400);
	i8 v6684 = *(i8*)(intptr_t)v6683;
	*(i8*)(intptr_t)(ws+3464) = v6684;
	i8 v6685 = (i8)(intptr_t)(f272_ResolveUntypedConstantsForAddOrSub);

	((void(*)(void))(intptr_t)v6685)();


	i8 v6691 = (i8)(intptr_t)(ws+3392);
	i8 v6692 = *(i8*)(intptr_t)v6691;
	i8 v6693 = v6692+(+24);
	i8 v6694 = *(i8*)(intptr_t)v6693;
	i8 v6695 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6695 = v6694;

	i8 v6696 = (i8)(intptr_t)(ws+3400);
	i8 v6697 = *(i8*)(intptr_t)v6696;
	i8 v6698 = v6697+(+24);
	i8 v6699 = *(i8*)(intptr_t)v6698;
	i8 v6700 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6700 = v6699;

	i8 v6701 = (i8)(intptr_t)(ws+3416);
	i8 v6702 = *(i8*)(intptr_t)v6701;
	*(i8*)(intptr_t)(ws+3560) = v6702;
	i8 v6703 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6703)();

	i1 v6704 = *(i1*)(intptr_t)(ws+3568);
	i8 v6705 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v6705 = v6704;

	i8 v6706 = (i8)(intptr_t)(ws+3424);
	i8 v6707 = *(i8*)(intptr_t)v6706;
	*(i8*)(intptr_t)(ws+3560) = v6707;
	i8 v6708 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6708)();

	i1 v6709 = *(i1*)(intptr_t)(ws+3568);
	i8 v6710 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v6710 = v6709;

	i8 v6711 = (i8)(intptr_t)(ws+3432);
	i1 v6712 = *(i1*)(intptr_t)v6711;
	i1 v6713 = (i1)+0;
	if (v6712==v6713) goto c02_0549; else goto c02_054b;

c02_054b:;

	i8 v6714 = (i8)(intptr_t)(ws+3433);
	i1 v6715 = *(i1*)(intptr_t)v6714;
	i1 v6716 = (i1)+0;
	if (v6715==v6716) goto c02_054a; else goto c02_0549;

c02_054a:;

	i8 v6717 = (i8)(intptr_t)(ws+3424);
	i8 v6718 = *(i8*)(intptr_t)v6717;
	i8 v6719 = (i8)(intptr_t)(ws+1528);
	i8 v6720 = *(i8*)(intptr_t)v6719;
	if (v6718==v6720) goto c02_0549; else goto c02_0548;

c02_0548:;

	i8 v6721 = (i8)(intptr_t)(f281_cant_sub_that);

	((void(*)(void))(intptr_t)v6721)();

	goto c02_0541;

c02_0549:;

	i8 v6722 = (i8)(intptr_t)(ws+3416);
	i8 v6723 = *(i8*)(intptr_t)v6722;
	*(i8*)(intptr_t)(ws+3560) = v6723;
	i8 v6724 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v6724)();

	i1 v6725 = *(i1*)(intptr_t)(ws+3568);
	i8 v6726 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v6726 = v6725;

	i8 v6727 = (i8)(intptr_t)(ws+3424);
	i8 v6728 = *(i8*)(intptr_t)v6727;
	*(i8*)(intptr_t)(ws+3560) = v6728;
	i8 v6729 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6729)();

	i1 v6730 = *(i1*)(intptr_t)(ws+3568);
	i8 v6731 = (i8)(intptr_t)(ws+3435);
	*(i1*)(intptr_t)v6731 = v6730;

	i8 v6732 = (i8)(intptr_t)(ws+3434);
	i1 v6733 = *(i1*)(intptr_t)v6732;
	i1 v6734 = (i1)+0;
	if (v6733==v6734) goto c02_0551; else goto c02_0552;

c02_0552:;

	i8 v6735 = (i8)(intptr_t)(ws+3435);
	i1 v6736 = *(i1*)(intptr_t)v6735;
	i1 v6737 = (i1)+0;
	if (v6736==v6737) goto c02_0551; else goto c02_0550;

c02_0550:;

	i8 v6738 = (i8)(intptr_t)(f281_cant_sub_that);

	((void(*)(void))(intptr_t)v6738)();

	goto c02_0541;

c02_0551:;

	i8 v6739 = (i8)(intptr_t)(ws+3416);
	i8 v6740 = *(i8*)(intptr_t)v6739;
	*(i8*)(intptr_t)(ws+3560) = v6740;
	i8 v6741 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v6741)();

	i1 v6742 = *(i1*)(intptr_t)(ws+3568);
	i8 v6743 = (i8)(intptr_t)(ws+3436);
	*(i1*)(intptr_t)v6743 = v6742;

	i8 v6744 = (i8)(intptr_t)(ws+3424);
	i8 v6745 = *(i8*)(intptr_t)v6744;
	*(i8*)(intptr_t)(ws+3560) = v6745;
	i8 v6746 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v6746)();

	i1 v6747 = *(i1*)(intptr_t)(ws+3568);
	i8 v6748 = (i8)(intptr_t)(ws+3437);
	*(i1*)(intptr_t)v6748 = v6747;

	i8 v6749 = (i8)(intptr_t)(ws+3436);
	i1 v6750 = *(i1*)(intptr_t)v6749;
	i1 v6751 = (i1)+0;
	if (v6750==v6751) goto c02_055a; else goto c02_055c;

c02_055c:;

	i8 v6752 = (i8)(intptr_t)(ws+3437);
	i1 v6753 = *(i1*)(intptr_t)v6752;
	i1 v6754 = (i1)+0;
	if (v6753==v6754) goto c02_055a; else goto c02_055b;

c02_055b:;

	i8 v6755 = (i8)(intptr_t)(ws+3416);
	i8 v6756 = *(i8*)(intptr_t)v6755;
	i8 v6757 = (i8)(intptr_t)(ws+3424);
	i8 v6758 = *(i8*)(intptr_t)v6757;
	if (v6756==v6758) goto c02_055a; else goto c02_0559;

c02_0559:;

	i8 v6759 = (i8)(intptr_t)(f281_cant_sub_that);

	((void(*)(void))(intptr_t)v6759)();

c02_055a:;

c02_0541:;

	i8 v6760 = (i8)(intptr_t)(ws+3392);
	i8 v6761 = *(i8*)(intptr_t)v6760;
	*(i8*)(intptr_t)(ws+3456) = v6761;
	i8 v6762 = (i8)(intptr_t)(f168_NodeWidth);

	((void(*)(void))(intptr_t)v6762)();

	i1 v6763 = *(i1*)(intptr_t)(ws+3464);
	i8 v6764 = (i8)(intptr_t)(ws+3438);
	*(i1*)(intptr_t)v6764 = v6763;

	i1 v6765 = (i1)+133;
	*(i1*)(intptr_t)(ws+3496) = v6765;
	i8 v6766 = (i8)(intptr_t)(ws+3438);
	i1 v6767 = *(i1*)(intptr_t)v6766;
	*(i1*)(intptr_t)(ws+3497) = v6767;
	i8 v6768 = (i8)(intptr_t)(ws+3392);
	i8 v6769 = *(i8*)(intptr_t)v6768;
	*(i8*)(intptr_t)(ws+3504) = v6769;
	i8 v6770 = (i8)(intptr_t)(ws+3400);
	i8 v6771 = *(i8*)(intptr_t)v6770;
	*(i8*)(intptr_t)(ws+3512) = v6771;
	i8 v6772 = (i8)(intptr_t)(f174_MidC2Op);

	((void(*)(void))(intptr_t)v6772)();

	i8 v6773 = *(i8*)(intptr_t)(ws+3520);
	i8 v6774 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6774 = v6773;

	i8 v6775 = (i8)(intptr_t)(ws+3440);
	i8 v6776 = *(i8*)(intptr_t)v6775;
	i8 v6777 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6777 = v6776;

	i8 v6778 = (i8)(intptr_t)(ws+3416);
	i8 v6779 = *(i8*)(intptr_t)v6778;
	*(i8*)(intptr_t)(ws+3560) = v6779;
	i8 v6780 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6780)();

	i1 v6781 = *(i1*)(intptr_t)(ws+3568);
	i8 v6782 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v6782 = v6781;

	i8 v6783 = (i8)(intptr_t)(ws+3448);
	i1 v6784 = *(i1*)(intptr_t)v6783;
	i1 v6785 = (i1)+0;
	if (v6784==v6785) goto c02_0563; else goto c02_0564;

c02_0564:;

	i8 v6786 = (i8)(intptr_t)(ws+3416);
	i8 v6787 = *(i8*)(intptr_t)v6786;
	i8 v6788 = (i8)(intptr_t)(ws+3424);
	i8 v6789 = *(i8*)(intptr_t)v6788;
	if (v6787==v6789) goto c02_0562; else goto c02_0563;

c02_0562:;

	i8 v6790 = (i8)(intptr_t)(ws+1528);
	i8 v6791 = *(i8*)(intptr_t)v6790;
	i8 v6792 = (i8)(intptr_t)(ws+3408);
	i8 v6793 = *(i8*)(intptr_t)v6792;
	i8 v6794 = v6793+(+24);
	*(i8*)(intptr_t)v6794 = v6791;

	goto c02_055d;

c02_0563:;

	i8 v6795 = (i8)(intptr_t)(ws+3416);
	i8 v6796 = *(i8*)(intptr_t)v6795;
	i8 v6797 = (i8)(intptr_t)(ws+3408);
	i8 v6798 = *(i8*)(intptr_t)v6797;
	i8 v6799 = v6798+(+24);
	*(i8*)(intptr_t)v6799 = v6796;

c02_055d:;

}
	void f275_ResolveUntypedConstantsNeedingNumbers(void);
	void f231_IsSNum(void);
	void f168_NodeWidth(void);
	void f174_MidC2Op(void);

// Expr2Simple workspace at ws+3392 length ws+64
void f282_Expr2Simple(void) {

	i8 v6800 = (i8)(intptr_t)(ws+3400);
	i8 v6801 = *(i8*)(intptr_t)v6800;
	*(i8*)(intptr_t)(ws+3456) = v6801;
	i8 v6802 = (i8)(intptr_t)(ws+3408);
	i8 v6803 = *(i8*)(intptr_t)v6802;
	*(i8*)(intptr_t)(ws+3464) = v6803;
	i8 v6804 = (i8)(intptr_t)(f275_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(void))(intptr_t)v6804)();

	i8 v6805 = (i8)(intptr_t)(ws+3393);
	i1 v6806 = *(i1*)(intptr_t)v6805;
	i8 v6807 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6807 = v6806;

	i8 v6808 = (i8)(intptr_t)(ws+3400);
	i8 v6809 = *(i8*)(intptr_t)v6808;
	i8 v6810 = v6809+(+24);
	i8 v6811 = *(i8*)(intptr_t)v6810;
	*(i8*)(intptr_t)(ws+3456) = v6811;
	i8 v6812 = (i8)(intptr_t)(f231_IsSNum);

	((void(*)(void))(intptr_t)v6812)();

	i1 v6813 = *(i1*)(intptr_t)(ws+3464);
	i8 v6814 = (i8)(intptr_t)(ws+3425);
	*(i1*)(intptr_t)v6814 = v6813;

	i8 v6815 = (i8)(intptr_t)(ws+3425);
	i1 v6816 = *(i1*)(intptr_t)v6815;
	i1 v6817 = (i1)+0;
	if (v6816==v6817) goto c02_0569; else goto c02_0568;

c02_0568:;

	i8 v6818 = (i8)(intptr_t)(ws+3392);
	i1 v6819 = *(i1*)(intptr_t)v6818;
	i8 v6820 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6820 = v6819;

c02_0569:;

c02_0565:;

	i8 v6821 = (i8)(intptr_t)(ws+3400);
	i8 v6822 = *(i8*)(intptr_t)v6821;
	i8 v6823 = v6822+(+24);
	i8 v6824 = *(i8*)(intptr_t)v6823;
	i8 v6825 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6825 = v6824;

	i8 v6826 = (i8)(intptr_t)(ws+3400);
	i8 v6827 = *(i8*)(intptr_t)v6826;
	*(i8*)(intptr_t)(ws+3456) = v6827;
	i8 v6828 = (i8)(intptr_t)(f168_NodeWidth);

	((void(*)(void))(intptr_t)v6828)();

	i1 v6829 = *(i1*)(intptr_t)(ws+3464);
	i8 v6830 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v6830 = v6829;

	i8 v6831 = (i8)(intptr_t)(ws+3424);
	i1 v6832 = *(i1*)(intptr_t)v6831;
	*(i1*)(intptr_t)(ws+3496) = v6832;
	i8 v6833 = (i8)(intptr_t)(ws+3440);
	i1 v6834 = *(i1*)(intptr_t)v6833;
	*(i1*)(intptr_t)(ws+3497) = v6834;
	i8 v6835 = (i8)(intptr_t)(ws+3400);
	i8 v6836 = *(i8*)(intptr_t)v6835;
	*(i8*)(intptr_t)(ws+3504) = v6836;
	i8 v6837 = (i8)(intptr_t)(ws+3408);
	i8 v6838 = *(i8*)(intptr_t)v6837;
	*(i8*)(intptr_t)(ws+3512) = v6838;
	i8 v6839 = (i8)(intptr_t)(f174_MidC2Op);

	((void(*)(void))(intptr_t)v6839)();

	i8 v6840 = *(i8*)(intptr_t)(ws+3520);
	i8 v6841 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6841 = v6840;

	i8 v6842 = (i8)(intptr_t)(ws+3448);
	i8 v6843 = *(i8*)(intptr_t)v6842;
	i8 v6844 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6844 = v6843;

	i8 v6845 = (i8)(intptr_t)(ws+3432);
	i8 v6846 = *(i8*)(intptr_t)v6845;
	i8 v6847 = (i8)(intptr_t)(ws+3416);
	i8 v6848 = *(i8*)(intptr_t)v6847;
	i8 v6849 = v6848+(+24);
	*(i8*)(intptr_t)v6849 = v6846;

}
const i1 c02_s0114[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f76_SimpleError(void);

// expr_i_checkrhsconst workspace at ws+3456 length ws+8
void f283_expr_i_checkrhsconst(void) {

	i8 v6850 = (i8)(intptr_t)(ws+3456);
	i8 v6851 = *(i8*)(intptr_t)v6850;
	i8 v6852 = v6851+(+48);
	i1 v6853 = *(i1*)(intptr_t)v6852;
	i1 v6854 = (i1)+42;
	if (v6853==v6854) goto c02_056e; else goto c02_056d;

c02_056d:;

	i8 v6855 = (i8)(intptr_t)c02_s0114;
	*(i8*)(intptr_t)(ws+3648) = v6855;
	i8 v6856 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6856)();

c02_056e:;

c02_056a:;

}
	void f230_IsNum(void);
const i1 c02_s0115[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f76_SimpleError(void);
	void f271_CheckExpressionType(void);

// expr_i_checkshift workspace at ws+3456 length ws+17
void f284_expr_i_checkshift(void) {

	i8 v6857 = (i8)(intptr_t)(ws+3456);
	i8 v6858 = *(i8*)(intptr_t)v6857;
	i8 v6859 = v6858+(+24);
	i8 v6860 = *(i8*)(intptr_t)v6859;
	*(i8*)(intptr_t)(ws+3560) = v6860;
	i8 v6861 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v6861)();

	i1 v6862 = *(i1*)(intptr_t)(ws+3568);
	i8 v6863 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v6863 = v6862;

	i8 v6864 = (i8)(intptr_t)(ws+3472);
	i1 v6865 = *(i1*)(intptr_t)v6864;
	i1 v6866 = (i1)+0;
	if (v6865==v6866) goto c02_0572; else goto c02_0573;

c02_0572:;

	i8 v6867 = (i8)(intptr_t)c02_s0115;
	*(i8*)(intptr_t)(ws+3648) = v6867;
	i8 v6868 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6868)();

c02_0573:;

c02_056f:;

	i8 v6869 = (i8)(intptr_t)(ws+3464);
	i8 v6870 = *(i8*)(intptr_t)v6869;
	*(i8*)(intptr_t)(ws+3496) = v6870;
	i8 v6871 = (i8)(intptr_t)(ws+1512);
	i8 v6872 = *(i8*)(intptr_t)v6871;
	*(i8*)(intptr_t)(ws+3504) = v6872;
	i8 v6873 = (i8)(intptr_t)(f271_CheckExpressionType);

	((void(*)(void))(intptr_t)v6873)();

}
	void f231_IsSNum(void);
	void f283_expr_i_checkrhsconst(void);
	void f171_FoldConstant2(void);
	void f63_Discard(void);
	void f284_expr_i_checkshift(void);
	void f168_NodeWidth(void);
	void f174_MidC2Op(void);

// ExprShift workspace at ws+3392 length ws+64
void f285_ExprShift(void) {

	i8 v6874 = (i8)(intptr_t)(ws+3393);
	i1 v6875 = *(i1*)(intptr_t)v6874;
	i8 v6876 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6876 = v6875;

	i8 v6877 = (i8)(intptr_t)(ws+3400);
	i8 v6878 = *(i8*)(intptr_t)v6877;
	i8 v6879 = v6878+(+24);
	i8 v6880 = *(i8*)(intptr_t)v6879;
	*(i8*)(intptr_t)(ws+3456) = v6880;
	i8 v6881 = (i8)(intptr_t)(f231_IsSNum);

	((void(*)(void))(intptr_t)v6881)();

	i1 v6882 = *(i1*)(intptr_t)(ws+3464);
	i8 v6883 = (i8)(intptr_t)(ws+3425);
	*(i1*)(intptr_t)v6883 = v6882;

	i8 v6884 = (i8)(intptr_t)(ws+3425);
	i1 v6885 = *(i1*)(intptr_t)v6884;
	i1 v6886 = (i1)+0;
	if (v6885==v6886) goto c02_0578; else goto c02_0577;

c02_0577:;

	i8 v6887 = (i8)(intptr_t)(ws+3392);
	i1 v6888 = *(i1*)(intptr_t)v6887;
	i8 v6889 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6889 = v6888;

c02_0578:;

c02_0574:;

	i8 v6890 = (i8)(intptr_t)(ws+3400);
	i8 v6891 = *(i8*)(intptr_t)v6890;
	i8 v6892 = v6891+(+48);
	i1 v6893 = *(i1*)(intptr_t)v6892;
	i1 v6894 = (i1)+42;
	if (v6893==v6894) goto c02_057c; else goto c02_057d;

c02_057c:;

	i8 v6895 = (i8)(intptr_t)(ws+3408);
	i8 v6896 = *(i8*)(intptr_t)v6895;
	*(i8*)(intptr_t)(ws+3456) = v6896;
	i8 v6897 = (i8)(intptr_t)(f283_expr_i_checkrhsconst);

	((void(*)(void))(intptr_t)v6897)();

	i8 v6898 = (i8)(intptr_t)(ws+3424);
	i1 v6899 = *(i1*)(intptr_t)v6898;
	*(i1*)(intptr_t)(ws+3592) = v6899;
	i8 v6900 = (i8)(intptr_t)(ws+3400);
	i8 v6901 = *(i8*)(intptr_t)v6900;
	*(i8*)(intptr_t)(ws+3600) = v6901;
	i8 v6902 = (i8)(intptr_t)(ws+3408);
	i8 v6903 = *(i8*)(intptr_t)v6902;
	*(i8*)(intptr_t)(ws+3608) = v6903;
	i8 v6904 = (i8)(intptr_t)(f171_FoldConstant2);

	((void(*)(void))(intptr_t)v6904)();

	i4 v6905 = *(i4*)(intptr_t)(ws+3616);
	i8 v6906 = (i8)(intptr_t)(ws+3428);
	*(i4*)(intptr_t)v6906 = v6905;

	i8 v6907 = (i8)(intptr_t)(ws+3428);
	i4 v6908 = *(i4*)(intptr_t)v6907;
	i8 v6909 = (i8)(intptr_t)(ws+3400);
	i8 v6910 = *(i8*)(intptr_t)v6909;
	*(i4*)(intptr_t)v6910 = v6908;

	i8 v6911 = (i8)(intptr_t)(ws+3400);
	i8 v6912 = *(i8*)(intptr_t)v6911;
	i8 v6913 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6913 = v6912;

	i8 v6914 = (i8)(intptr_t)(ws+3408);
	i8 v6915 = *(i8*)(intptr_t)v6914;
	*(i8*)(intptr_t)(ws+3592) = v6915;
	i8 v6916 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v6916)();

	return;

c02_057d:;

c02_0579:;

	i8 v6917 = (i8)(intptr_t)(ws+3400);
	i8 v6918 = *(i8*)(intptr_t)v6917;
	*(i8*)(intptr_t)(ws+3456) = v6918;
	i8 v6919 = (i8)(intptr_t)(ws+3408);
	i8 v6920 = *(i8*)(intptr_t)v6919;
	*(i8*)(intptr_t)(ws+3464) = v6920;
	i8 v6921 = (i8)(intptr_t)(f284_expr_i_checkshift);

	((void(*)(void))(intptr_t)v6921)();

	i8 v6922 = (i8)(intptr_t)(ws+3400);
	i8 v6923 = *(i8*)(intptr_t)v6922;
	i8 v6924 = v6923+(+24);
	i8 v6925 = *(i8*)(intptr_t)v6924;
	i8 v6926 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6926 = v6925;

	i8 v6927 = (i8)(intptr_t)(ws+3400);
	i8 v6928 = *(i8*)(intptr_t)v6927;
	*(i8*)(intptr_t)(ws+3456) = v6928;
	i8 v6929 = (i8)(intptr_t)(f168_NodeWidth);

	((void(*)(void))(intptr_t)v6929)();

	i1 v6930 = *(i1*)(intptr_t)(ws+3464);
	i8 v6931 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v6931 = v6930;

	i8 v6932 = (i8)(intptr_t)(ws+3424);
	i1 v6933 = *(i1*)(intptr_t)v6932;
	*(i1*)(intptr_t)(ws+3496) = v6933;
	i8 v6934 = (i8)(intptr_t)(ws+3440);
	i1 v6935 = *(i1*)(intptr_t)v6934;
	*(i1*)(intptr_t)(ws+3497) = v6935;
	i8 v6936 = (i8)(intptr_t)(ws+3400);
	i8 v6937 = *(i8*)(intptr_t)v6936;
	*(i8*)(intptr_t)(ws+3504) = v6937;
	i8 v6938 = (i8)(intptr_t)(ws+3408);
	i8 v6939 = *(i8*)(intptr_t)v6938;
	*(i8*)(intptr_t)(ws+3512) = v6939;
	i8 v6940 = (i8)(intptr_t)(f174_MidC2Op);

	((void(*)(void))(intptr_t)v6940)();

	i8 v6941 = *(i8*)(intptr_t)(ws+3520);
	i8 v6942 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6942 = v6941;

	i8 v6943 = (i8)(intptr_t)(ws+3448);
	i8 v6944 = *(i8*)(intptr_t)v6943;
	i8 v6945 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6945 = v6944;

	i8 v6946 = (i8)(intptr_t)(ws+3432);
	i8 v6947 = *(i8*)(intptr_t)v6946;
	i8 v6948 = (i8)(intptr_t)(ws+3416);
	i8 v6949 = *(i8*)(intptr_t)v6948;
	i8 v6950 = v6949+(+24);
	*(i8*)(intptr_t)v6950 = v6947;

}
const i1 c02_s0116[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f76_SimpleError(void);

// PushNode workspace at ws+3640 length ws+8
void f60_PushNode(void) {

	i8 v6951 = (i8)(intptr_t)(ws+3640);
	i8 v6952 = *(i8*)(intptr_t)v6951;
	i8 v6953 = (i8)+0;
	if (v6952==v6953) goto c02_0582; else goto c02_0581;

c02_0581:;

	i8 v6954 = (i8)(intptr_t)(ws+224);
	i8 v6955 = *(i8*)(intptr_t)v6954;
	i8 v6956 = (i8)(intptr_t)(ws+224);
	if (v6955==v6956) goto c02_0586; else goto c02_0587;

c02_0586:;

	i8 v6957 = (i8)(intptr_t)c02_s0116;
	*(i8*)(intptr_t)(ws+3648) = v6957;
	i8 v6958 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6958)();

c02_0587:;

c02_0583:;

	i8 v6959 = (i8)(intptr_t)(ws+3640);
	i8 v6960 = *(i8*)(intptr_t)v6959;
	i8 v6961 = (i8)(intptr_t)(ws+224);
	i8 v6962 = *(i8*)(intptr_t)v6961;
	*(i8*)(intptr_t)v6962 = v6960;

	i8 v6963 = (i8)(intptr_t)(ws+224);
	i8 v6964 = *(i8*)(intptr_t)v6963;
	i8 v6965 = v6964+(+8);
	i8 v6966 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6966 = v6965;

c02_0582:;

c02_057e:;

}

// PopNode workspace at ws+3640 length ws+8
void f61_PopNode(void) {

	i8 v6967 = (i8)(intptr_t)(ws+224);
	i8 v6968 = *(i8*)(intptr_t)v6967;
	i8 v6969 = v6968+(-8);
	i8 v6970 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6970 = v6969;

	i8 v6971 = (i8)(intptr_t)(ws+224);
	i8 v6972 = *(i8*)(intptr_t)v6971;
	i8 v6973 = *(i8*)(intptr_t)v6972;
	i8 v6974 = (i8)(intptr_t)(ws+3640);
	*(i8*)(intptr_t)v6974 = v6973;

}
	void f61_PopNode(void);
	void f60_PushNode(void);
	void f60_PushNode(void);

// NextNode workspace at ws+3624 length ws+16
void f62_NextNode(void) {

	i8 v6975 = (i8)(intptr_t)(f61_PopNode);

	((void(*)(void))(intptr_t)v6975)();

	i8 v6976 = *(i8*)(intptr_t)(ws+3640);
	i8 v6977 = (i8)(intptr_t)(ws+3632);
	*(i8*)(intptr_t)v6977 = v6976;

	i8 v6978 = (i8)(intptr_t)(ws+3632);
	i8 v6979 = *(i8*)(intptr_t)v6978;
	i8 v6980 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v6980 = v6979;

	i8 v6981 = (i8)(intptr_t)(ws+3624);
	i8 v6982 = *(i8*)(intptr_t)v6981;
	i8 v6983 = (i8)+0;
	if (v6982==v6983) goto c02_058c; else goto c02_058b;

c02_058b:;

	i8 v6984 = (i8)(intptr_t)(ws+3624);
	i8 v6985 = *(i8*)(intptr_t)v6984;
	i8 v6986 = v6985+(+32);
	i8 v6987 = *(i8*)(intptr_t)v6986;
	*(i8*)(intptr_t)(ws+3640) = v6987;
	i8 v6988 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v6988)();

	i8 v6989 = (i8)(intptr_t)(ws+3624);
	i8 v6990 = *(i8*)(intptr_t)v6989;
	i8 v6991 = v6990+(+40);
	i8 v6992 = *(i8*)(intptr_t)v6991;
	*(i8*)(intptr_t)(ws+3640) = v6992;
	i8 v6993 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v6993)();

c02_058c:;

c02_0588:;

}
	void f60_PushNode(void);
	void f62_NextNode(void);
	void f167_FreeNode(void);

// Discard workspace at ws+3592 length ws+32
void f63_Discard(void) {

	i8 v6994 = (i8)(intptr_t)(ws+224);
	i8 v6995 = *(i8*)(intptr_t)v6994;
	i8 v6996 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v6996 = v6995;

	i8 v6997 = (i8)(intptr_t)(ws+3592);
	i8 v6998 = *(i8*)(intptr_t)v6997;
	*(i8*)(intptr_t)(ws+3640) = v6998;
	i8 v6999 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v6999)();

c02_058d:;

	i8 v7000 = (i8)(intptr_t)(ws+224);
	i8 v7001 = *(i8*)(intptr_t)v7000;
	i8 v7002 = (i8)(intptr_t)(ws+3600);
	i8 v7003 = *(i8*)(intptr_t)v7002;
	if (v7001==v7003) goto c02_0592; else goto c02_0591;

c02_0591:;

	i8 v7004 = (i8)(intptr_t)(f62_NextNode);

	((void(*)(void))(intptr_t)v7004)();

	i8 v7005 = *(i8*)(intptr_t)(ws+3624);
	i8 v7006 = (i8)(intptr_t)(ws+3608);
	*(i8*)(intptr_t)v7006 = v7005;

	i8 v7007 = (i8)(intptr_t)(ws+3608);
	i8 v7008 = *(i8*)(intptr_t)v7007;
	i8 v7009 = (i8)(intptr_t)(ws+3616);
	*(i8*)(intptr_t)v7009 = v7008;

	i8 v7010 = (i8)(intptr_t)(ws+3616);
	i8 v7011 = *(i8*)(intptr_t)v7010;
	*(i8*)(intptr_t)(ws+3624) = v7011;
	i8 v7012 = (i8)(intptr_t)(f167_FreeNode);

	((void(*)(void))(intptr_t)v7012)();

	goto c02_058d;

c02_0592:;

}
	void f69_InternalAlloc(void);
	void f238_AllocLabel(void);
	void f238_AllocLabel(void);

// BeginNormalLoop workspace at ws+3400 length ws+20
void f286_BeginNormalLoop(void) {

	i8 v7013 = (i8)+8;
	*(i8*)(intptr_t)(ws+3640) = v7013;
	i8 v7014 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v7014)();

	i8 v7015 = *(i8*)(intptr_t)(ws+3648);
	i8 v7016 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7016 = v7015;

	i8 v7017 = (i8)(intptr_t)(ws+3408);
	i8 v7018 = *(i8*)(intptr_t)v7017;
	i8 v7019 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7019 = v7018;

	i8 v7020 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7020)();

	i2 v7021 = *(i2*)(intptr_t)(ws+3472);
	i8 v7022 = (i8)(intptr_t)(ws+3416);
	*(i2*)(intptr_t)v7022 = v7021;

	i8 v7023 = (i8)(intptr_t)(ws+3416);
	i2 v7024 = *(i2*)(intptr_t)v7023;
	i8 v7025 = (i8)(intptr_t)(ws+3400);
	i8 v7026 = *(i8*)(intptr_t)v7025;
	*(i2*)(intptr_t)v7026 = v7024;

	i8 v7027 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7027)();

	i2 v7028 = *(i2*)(intptr_t)(ws+3472);
	i8 v7029 = (i8)(intptr_t)(ws+3418);
	*(i2*)(intptr_t)v7029 = v7028;

	i8 v7030 = (i8)(intptr_t)(ws+3418);
	i2 v7031 = *(i2*)(intptr_t)v7030;
	i8 v7032 = (i8)(intptr_t)(ws+3400);
	i8 v7033 = *(i8*)(intptr_t)v7032;
	i8 v7034 = v7033+(+2);
	*(i2*)(intptr_t)v7034 = v7031;

	i8 v7035 = (i8)(intptr_t)(ws+52);
	i2 v7036 = *(i2*)(intptr_t)v7035;
	i8 v7037 = (i8)(intptr_t)(ws+3400);
	i8 v7038 = *(i8*)(intptr_t)v7037;
	i8 v7039 = v7038+(+4);
	*(i2*)(intptr_t)v7039 = v7036;

	i8 v7040 = (i8)(intptr_t)(ws+54);
	i2 v7041 = *(i2*)(intptr_t)v7040;
	i8 v7042 = (i8)(intptr_t)(ws+3400);
	i8 v7043 = *(i8*)(intptr_t)v7042;
	i8 v7044 = v7043+(+6);
	*(i2*)(intptr_t)v7044 = v7041;

	i8 v7045 = (i8)(intptr_t)(ws+3400);
	i8 v7046 = *(i8*)(intptr_t)v7045;
	i8 v7047 = v7046+(+2);
	i2 v7048 = *(i2*)(intptr_t)v7047;
	i8 v7049 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7049 = v7048;

	i8 v7050 = (i8)(intptr_t)(ws+3400);
	i8 v7051 = *(i8*)(intptr_t)v7050;
	i2 v7052 = *(i2*)(intptr_t)v7051;
	i8 v7053 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v7053 = v7052;

}
	void f133_MidJump(void);
	void f259_Generate(void);
	void f136_MidLabel(void);
	void f259_Generate(void);
	void f34_Free(void);

// TerminateNormalLoop workspace at ws+3384 length ws+24
void f287_TerminateNormalLoop(void) {

	i8 v7054 = (i8)(intptr_t)(ws+54);
	i2 v7055 = *(i2*)(intptr_t)v7054;
	*(i2*)(intptr_t)(ws+3416) = v7055;
	i8 v7056 = (i8)(intptr_t)(f133_MidJump);

	((void(*)(void))(intptr_t)v7056)();

	i8 v7057 = *(i8*)(intptr_t)(ws+3424);
	i8 v7058 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7058 = v7057;

	i8 v7059 = (i8)(intptr_t)(ws+3392);
	i8 v7060 = *(i8*)(intptr_t)v7059;
	*(i8*)(intptr_t)(ws+3488) = v7060;
	i8 v7061 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7061)();

	i8 v7062 = (i8)(intptr_t)(ws+52);
	i2 v7063 = *(i2*)(intptr_t)v7062;
	*(i2*)(intptr_t)(ws+3472) = v7063;
	i8 v7064 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v7064)();

	i8 v7065 = *(i8*)(intptr_t)(ws+3480);
	i8 v7066 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7066 = v7065;

	i8 v7067 = (i8)(intptr_t)(ws+3400);
	i8 v7068 = *(i8*)(intptr_t)v7067;
	*(i8*)(intptr_t)(ws+3488) = v7068;
	i8 v7069 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7069)();

	i8 v7070 = (i8)(intptr_t)(ws+3384);
	i8 v7071 = *(i8*)(intptr_t)v7070;
	i8 v7072 = v7071+(+4);
	i2 v7073 = *(i2*)(intptr_t)v7072;
	i8 v7074 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7074 = v7073;

	i8 v7075 = (i8)(intptr_t)(ws+3384);
	i8 v7076 = *(i8*)(intptr_t)v7075;
	i8 v7077 = v7076+(+6);
	i2 v7078 = *(i2*)(intptr_t)v7077;
	i8 v7079 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v7079 = v7078;

	i8 v7080 = (i8)(intptr_t)(ws+3384);
	i8 v7081 = *(i8*)(intptr_t)v7080;
	*(i8*)(intptr_t)(ws+3680) = v7081;
	i8 v7082 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7082)();

}

// Negate workspace at ws+3384 length ws+8
void f288_Negate(void) {

	i8 v7083 = (i8)(intptr_t)(ws+3384);
	i8 v7084 = *(i8*)(intptr_t)v7083;
	i8 v7085 = v7084+(+6);
	i1 v7086 = *(i1*)(intptr_t)v7085;
	i1 v7087 = v7086^(+1);
	i8 v7088 = (i8)(intptr_t)(ws+3384);
	i8 v7089 = *(i8*)(intptr_t)v7088;
	i8 v7090 = v7089+(+6);
	*(i1*)(intptr_t)v7090 = v7087;

}
	void f276_CondSimple(void);
	void f238_AllocLabel(void);
	void f238_AllocLabel(void);
	void f168_NodeWidth(void);
	void f160_MidBeq(void);

// ConditionalEq workspace at ws+3392 length ws+56
void f289_ConditionalEq(void) {

	i8 v7091 = (i8)(intptr_t)(ws+3392);
	i8 v7092 = *(i8*)(intptr_t)v7091;
	*(i8*)(intptr_t)(ws+3456) = v7092;
	i8 v7093 = (i8)(intptr_t)(ws+3400);
	i8 v7094 = *(i8*)(intptr_t)v7093;
	*(i8*)(intptr_t)(ws+3464) = v7094;
	i8 v7095 = (i8)(intptr_t)(f276_CondSimple);

	((void(*)(void))(intptr_t)v7095)();

	i8 v7096 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7096)();

	i2 v7097 = *(i2*)(intptr_t)(ws+3472);
	i8 v7098 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v7098 = v7097;

	i8 v7099 = (i8)(intptr_t)(ws+3424);
	i2 v7100 = *(i2*)(intptr_t)v7099;
	i8 v7101 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v7101 = v7100;

	i8 v7102 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7102)();

	i2 v7103 = *(i2*)(intptr_t)(ws+3472);
	i8 v7104 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v7104 = v7103;

	i8 v7105 = (i8)(intptr_t)(ws+3428);
	i2 v7106 = *(i2*)(intptr_t)v7105;
	i8 v7107 = (i8)(intptr_t)(ws+3430);
	*(i2*)(intptr_t)v7107 = v7106;

	i8 v7108 = (i8)(intptr_t)(ws+3392);
	i8 v7109 = *(i8*)(intptr_t)v7108;
	*(i8*)(intptr_t)(ws+3456) = v7109;
	i8 v7110 = (i8)(intptr_t)(f168_NodeWidth);

	((void(*)(void))(intptr_t)v7110)();

	i1 v7111 = *(i1*)(intptr_t)(ws+3464);
	i8 v7112 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7112 = v7111;

	i8 v7113 = (i8)(intptr_t)(ws+3432);
	i1 v7114 = *(i1*)(intptr_t)v7113;
	i8 v7115 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7115 = v7114;

	i8 v7116 = (i8)(intptr_t)(ws+3433);
	i1 v7117 = *(i1*)(intptr_t)v7116;
	*(i1*)(intptr_t)(ws+3448) = v7117;
	i8 v7118 = (i8)(intptr_t)(ws+3392);
	i8 v7119 = *(i8*)(intptr_t)v7118;
	*(i8*)(intptr_t)(ws+3456) = v7119;
	i8 v7120 = (i8)(intptr_t)(ws+3400);
	i8 v7121 = *(i8*)(intptr_t)v7120;
	*(i8*)(intptr_t)(ws+3464) = v7121;
	i8 v7122 = (i8)(intptr_t)(ws+3426);
	i2 v7123 = *(i2*)(intptr_t)v7122;
	*(i2*)(intptr_t)(ws+3472) = v7123;
	i8 v7124 = (i8)(intptr_t)(ws+3430);
	i2 v7125 = *(i2*)(intptr_t)v7124;
	*(i2*)(intptr_t)(ws+3474) = v7125;
	i2 v7126 = (i2)+0;
	*(i2*)(intptr_t)(ws+3476) = v7126;
	i8 v7127 = (i8)(intptr_t)(ws+3408);
	i1 v7128 = *(i1*)(intptr_t)v7127;
	*(i1*)(intptr_t)(ws+3478) = v7128;
	i8 v7129 = (i8)(intptr_t)(f160_MidBeq);

	((void(*)(void))(intptr_t)v7129)();

	i8 v7130 = *(i8*)(intptr_t)(ws+3480);
	i8 v7131 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7131 = v7130;

	i8 v7132 = (i8)(intptr_t)(ws+3440);
	i8 v7133 = *(i8*)(intptr_t)v7132;
	i8 v7134 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7134 = v7133;

}
	void f276_CondSimple(void);
	void f238_AllocLabel(void);
	void f238_AllocLabel(void);
	void f168_NodeWidth(void);
	void f231_IsSNum(void);
	void f128_MidBlts(void);
	void f146_MidBltu(void);

// ConditionalLt workspace at ws+3392 length ws+64
void f290_ConditionalLt(void) {

	i8 v7135 = (i8)(intptr_t)(ws+3392);
	i8 v7136 = *(i8*)(intptr_t)v7135;
	*(i8*)(intptr_t)(ws+3456) = v7136;
	i8 v7137 = (i8)(intptr_t)(ws+3400);
	i8 v7138 = *(i8*)(intptr_t)v7137;
	*(i8*)(intptr_t)(ws+3464) = v7138;
	i8 v7139 = (i8)(intptr_t)(f276_CondSimple);

	((void(*)(void))(intptr_t)v7139)();

	i8 v7140 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7140)();

	i2 v7141 = *(i2*)(intptr_t)(ws+3472);
	i8 v7142 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v7142 = v7141;

	i8 v7143 = (i8)(intptr_t)(ws+3424);
	i2 v7144 = *(i2*)(intptr_t)v7143;
	i8 v7145 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v7145 = v7144;

	i8 v7146 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7146)();

	i2 v7147 = *(i2*)(intptr_t)(ws+3472);
	i8 v7148 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v7148 = v7147;

	i8 v7149 = (i8)(intptr_t)(ws+3428);
	i2 v7150 = *(i2*)(intptr_t)v7149;
	i8 v7151 = (i8)(intptr_t)(ws+3430);
	*(i2*)(intptr_t)v7151 = v7150;

	i8 v7152 = (i8)(intptr_t)(ws+3392);
	i8 v7153 = *(i8*)(intptr_t)v7152;
	*(i8*)(intptr_t)(ws+3456) = v7153;
	i8 v7154 = (i8)(intptr_t)(f168_NodeWidth);

	((void(*)(void))(intptr_t)v7154)();

	i1 v7155 = *(i1*)(intptr_t)(ws+3464);
	i8 v7156 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7156 = v7155;

	i8 v7157 = (i8)(intptr_t)(ws+3432);
	i1 v7158 = *(i1*)(intptr_t)v7157;
	i8 v7159 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7159 = v7158;

	i8 v7160 = (i8)(intptr_t)(ws+3392);
	i8 v7161 = *(i8*)(intptr_t)v7160;
	i8 v7162 = v7161+(+24);
	i8 v7163 = *(i8*)(intptr_t)v7162;
	*(i8*)(intptr_t)(ws+3456) = v7163;
	i8 v7164 = (i8)(intptr_t)(f231_IsSNum);

	((void(*)(void))(intptr_t)v7164)();

	i1 v7165 = *(i1*)(intptr_t)(ws+3464);
	i8 v7166 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v7166 = v7165;

	i8 v7167 = (i8)(intptr_t)(ws+3434);
	i1 v7168 = *(i1*)(intptr_t)v7167;
	i1 v7169 = (i1)+0;
	if (v7168==v7169) goto c02_0597; else goto c02_0596;

c02_0596:;

	i8 v7170 = (i8)(intptr_t)(ws+3433);
	i1 v7171 = *(i1*)(intptr_t)v7170;
	*(i1*)(intptr_t)(ws+3456) = v7171;
	i8 v7172 = (i8)(intptr_t)(ws+3392);
	i8 v7173 = *(i8*)(intptr_t)v7172;
	*(i8*)(intptr_t)(ws+3464) = v7173;
	i8 v7174 = (i8)(intptr_t)(ws+3400);
	i8 v7175 = *(i8*)(intptr_t)v7174;
	*(i8*)(intptr_t)(ws+3472) = v7175;
	i8 v7176 = (i8)(intptr_t)(ws+3426);
	i2 v7177 = *(i2*)(intptr_t)v7176;
	*(i2*)(intptr_t)(ws+3480) = v7177;
	i8 v7178 = (i8)(intptr_t)(ws+3430);
	i2 v7179 = *(i2*)(intptr_t)v7178;
	*(i2*)(intptr_t)(ws+3482) = v7179;
	i2 v7180 = (i2)+0;
	*(i2*)(intptr_t)(ws+3484) = v7180;
	i8 v7181 = (i8)(intptr_t)(ws+3408);
	i1 v7182 = *(i1*)(intptr_t)v7181;
	*(i1*)(intptr_t)(ws+3486) = v7182;
	i8 v7183 = (i8)(intptr_t)(f128_MidBlts);

	((void(*)(void))(intptr_t)v7183)();

	i8 v7184 = *(i8*)(intptr_t)(ws+3488);
	i8 v7185 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7185 = v7184;

	i8 v7186 = (i8)(intptr_t)(ws+3440);
	i8 v7187 = *(i8*)(intptr_t)v7186;
	i8 v7188 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7188 = v7187;

	goto c02_0593;

c02_0597:;

	i8 v7189 = (i8)(intptr_t)(ws+3433);
	i1 v7190 = *(i1*)(intptr_t)v7189;
	*(i1*)(intptr_t)(ws+3456) = v7190;
	i8 v7191 = (i8)(intptr_t)(ws+3392);
	i8 v7192 = *(i8*)(intptr_t)v7191;
	*(i8*)(intptr_t)(ws+3464) = v7192;
	i8 v7193 = (i8)(intptr_t)(ws+3400);
	i8 v7194 = *(i8*)(intptr_t)v7193;
	*(i8*)(intptr_t)(ws+3472) = v7194;
	i8 v7195 = (i8)(intptr_t)(ws+3426);
	i2 v7196 = *(i2*)(intptr_t)v7195;
	*(i2*)(intptr_t)(ws+3480) = v7196;
	i8 v7197 = (i8)(intptr_t)(ws+3430);
	i2 v7198 = *(i2*)(intptr_t)v7197;
	*(i2*)(intptr_t)(ws+3482) = v7198;
	i2 v7199 = (i2)+0;
	*(i2*)(intptr_t)(ws+3484) = v7199;
	i8 v7200 = (i8)(intptr_t)(ws+3408);
	i1 v7201 = *(i1*)(intptr_t)v7200;
	*(i1*)(intptr_t)(ws+3486) = v7201;
	i8 v7202 = (i8)(intptr_t)(f146_MidBltu);

	((void(*)(void))(intptr_t)v7202)();

	i8 v7203 = *(i8*)(intptr_t)(ws+3488);
	i8 v7204 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7204 = v7203;

	i8 v7205 = (i8)(intptr_t)(ws+3448);
	i8 v7206 = *(i8*)(intptr_t)v7205;
	i8 v7207 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7207 = v7206;

c02_0593:;

}
const i1 c02_s0117[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(void);

// parser_i_bad_next_prev workspace at ws+3408 length ws+0
void f291_parser_i_bad_next_prev(void) {

	i8 v7208 = (i8)(intptr_t)c02_s0117;
	*(i8*)(intptr_t)(ws+3648) = v7208;
	i8 v7209 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7209)();

}
const i1 c02_s0118[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(void);

// parser_i_constant_error workspace at ws+3448 length ws+0
void f292_parser_i_constant_error(void) {

	i8 v7210 = (i8)(intptr_t)c02_s0118;
	*(i8*)(intptr_t)(ws+3648) = v7210;
	i8 v7211 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7211)();

}
	void f74_StartError(void);
const i1 c02_s0119[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s011a[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f12_print(void);
	void f18_print_i8(void);
const i1 c02_s011b[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f12_print(void);
	void f18_print_i8(void);
	void f75_EndError(void);

// i_check_sub_call_args workspace at ws+3488 length ws+8
void f293_i_check_sub_call_args(void) {

	i8 v7212 = (i8)(intptr_t)(ws+80);
	i8 v7213 = *(i8*)(intptr_t)v7212;
	i8 v7214 = v7213+(+8);
	i8 v7215 = *(i8*)(intptr_t)v7214;
	i8 v7216 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v7216 = v7215;

	i8 v7217 = (i8)(intptr_t)(ws+80);
	i8 v7218 = *(i8*)(intptr_t)v7217;
	i8 v7219 = v7218+(+40);
	i1 v7220 = *(i1*)(intptr_t)v7219;
	i8 v7221 = (i8)(intptr_t)(ws+3488);
	i8 v7222 = *(i8*)(intptr_t)v7221;
	i8 v7223 = v7222+(+80);
	i1 v7224 = *(i1*)(intptr_t)v7223;
	if (v7220==v7224) goto c02_059c; else goto c02_059b;

c02_059b:;

	i8 v7225 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7225)();

	i8 v7226 = (i8)(intptr_t)c02_s0119;
	*(i8*)(intptr_t)(ws+3696) = v7226;
	i8 v7227 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7227)();

	i8 v7228 = (i8)(intptr_t)(ws+3488);
	i8 v7229 = *(i8*)(intptr_t)v7228;
	i8 v7230 = *(i8*)(intptr_t)v7229;
	i8 v7231 = v7230+(+8);
	i8 v7232 = *(i8*)(intptr_t)v7231;
	*(i8*)(intptr_t)(ws+3696) = v7232;
	i8 v7233 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7233)();

	i8 v7234 = (i8)(intptr_t)c02_s011a;
	*(i8*)(intptr_t)(ws+3696) = v7234;
	i8 v7235 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7235)();

	i8 v7236 = (i8)(intptr_t)(ws+3488);
	i8 v7237 = *(i8*)(intptr_t)v7236;
	i8 v7238 = v7237+(+80);
	i1 v7239 = *(i1*)(intptr_t)v7238;
	*(i1*)(intptr_t)(ws+3496) = v7239;
	i8 v7240 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v7240)();

	i8 v7241 = (i8)(intptr_t)c02_s011b;
	*(i8*)(intptr_t)(ws+3696) = v7241;
	i8 v7242 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7242)();

	i8 v7243 = (i8)(intptr_t)(ws+80);
	i8 v7244 = *(i8*)(intptr_t)v7243;
	i8 v7245 = v7244+(+40);
	i1 v7246 = *(i1*)(intptr_t)v7245;
	*(i1*)(intptr_t)(ws+3496) = v7246;
	i8 v7247 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v7247)();

	i8 v7248 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7248)();

c02_059c:;

c02_0598:;

}
	void f203_EmitterReferenceSubroutine(void);
	void f34_Free(void);

// i_end_call workspace at ws+3488 length ws+8
void f294_i_end_call(void) {

	i8 v7249 = (i8)(intptr_t)(ws+40);
	i8 v7250 = *(i8*)(intptr_t)v7249;
	*(i8*)(intptr_t)(ws+3496) = v7250;
	i8 v7251 = (i8)(intptr_t)(ws+80);
	i8 v7252 = *(i8*)(intptr_t)v7251;
	i8 v7253 = v7252+(+8);
	i8 v7254 = *(i8*)(intptr_t)v7253;
	*(i8*)(intptr_t)(ws+3504) = v7254;
	i8 v7255 = (i8)(intptr_t)(f203_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v7255)();

	i8 v7256 = (i8)(intptr_t)(ws+80);
	i8 v7257 = *(i8*)(intptr_t)v7256;
	i8 v7258 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v7258 = v7257;

	i8 v7259 = (i8)(intptr_t)(ws+3488);
	i8 v7260 = *(i8*)(intptr_t)v7259;
	i8 v7261 = v7260+(+16);
	i8 v7262 = *(i8*)(intptr_t)v7261;
	i8 v7263 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v7263 = v7262;

	i8 v7264 = (i8)(intptr_t)(ws+3488);
	i8 v7265 = *(i8*)(intptr_t)v7264;
	*(i8*)(intptr_t)(ws+3680) = v7265;
	i8 v7266 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7266)();

}
	void f74_StartError(void);
const i1 c02_s011c[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);

// SymbolRedeclarationError workspace at ws+3392 length ws+0
void f295_SymbolRedeclarationError(void) {

	i8 v7267 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7267)();

	i8 v7268 = (i8)(intptr_t)c02_s011c;
	*(i8*)(intptr_t)(ws+3696) = v7268;
	i8 v7269 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7269)();

	i8 v7270 = (i8)(intptr_t)(ws+72);
	i8 v7271 = *(i8*)(intptr_t)v7270;
	i8 v7272 = v7271+(+32);
	i8 v7273 = *(i8*)(intptr_t)v7272;
	i8 v7274 = v7273+(+8);
	i8 v7275 = *(i8*)(intptr_t)v7274;
	*(i8*)(intptr_t)(ws+3696) = v7275;
	i8 v7276 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7276)();

	i8 v7277 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7277)();

}
	void f74_StartError(void);
const i1 c02_s011d[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);

// WrongNumberOfElementsError workspace at ws+3464 length ws+0
void f296_WrongNumberOfElementsError(void) {

	i8 v7278 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7278)();

	i8 v7279 = (i8)(intptr_t)c02_s011d;
	*(i8*)(intptr_t)(ws+3696) = v7279;
	i8 v7280 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7280)();

	i8 v7281 = (i8)(intptr_t)(ws+72);
	i8 v7282 = *(i8*)(intptr_t)v7281;
	i8 v7283 = v7282+(+32);
	i8 v7284 = *(i8*)(intptr_t)v7283;
	i8 v7285 = v7284+(+8);
	i8 v7286 = *(i8*)(intptr_t)v7285;
	*(i8*)(intptr_t)(ws+3696) = v7286;
	i8 v7287 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7287)();

	i8 v7288 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7288)();

}
	void f228_IsArray(void);
	void f241_ArchAlignUp(void);
	void f243_ArchGuessIntType(void);
	void f296_WrongNumberOfElementsError(void);
	void f296_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3392 length ws+16
void f297_CheckEndOfInitialiser(void) {

	i8 v7289 = (i8)(intptr_t)(ws+72);
	i8 v7290 = *(i8*)(intptr_t)v7289;
	*(i8*)(intptr_t)(ws+3496) = v7290;
	i8 v7291 = (i8)(intptr_t)(f228_IsArray);

	((void(*)(void))(intptr_t)v7291)();

	i1 v7292 = *(i1*)(intptr_t)(ws+3504);
	i8 v7293 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v7293 = v7292;

	i8 v7294 = (i8)(intptr_t)(ws+3392);
	i1 v7295 = *(i1*)(intptr_t)v7294;
	i1 v7296 = (i1)+0;
	if (v7295==v7296) goto c02_05a1; else goto c02_05a0;

c02_05a0:;

	i8 v7297 = (i8)(intptr_t)(ws+72);
	i8 v7298 = *(i8*)(intptr_t)v7297;
	i8 v7299 = *(i8*)(intptr_t)v7298;
	i8 v7300 = v7299+(+50);
	i2 v7301 = *(i2*)(intptr_t)v7300;
	i8 v7302 = (i8)(intptr_t)(ws+3394);
	*(i2*)(intptr_t)v7302 = v7301;

	i8 v7303 = (i8)(intptr_t)(ws+1560);
	i2 v7304 = *(i2*)(intptr_t)v7303;
	*(i2*)(intptr_t)(ws+3544) = v7304;
	i8 v7305 = (i8)(intptr_t)(ws+72);
	i8 v7306 = *(i8*)(intptr_t)v7305;
	i8 v7307 = *(i8*)(intptr_t)v7306;
	i8 v7308 = v7307+(+53);
	i1 v7309 = *(i1*)(intptr_t)v7308;
	*(i1*)(intptr_t)(ws+3546) = v7309;
	i8 v7310 = (i8)(intptr_t)(f241_ArchAlignUp);

	((void(*)(void))(intptr_t)v7310)();

	i2 v7311 = *(i2*)(intptr_t)(ws+3548);
	i8 v7312 = (i8)(intptr_t)(ws+3396);
	*(i2*)(intptr_t)v7312 = v7311;

	i8 v7313 = (i8)(intptr_t)(ws+3396);
	i2 v7314 = *(i2*)(intptr_t)v7313;
	i8 v7315 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7315 = v7314;

	i8 v7316 = (i8)(intptr_t)(ws+72);
	i8 v7317 = *(i8*)(intptr_t)v7316;
	i8 v7318 = v7317+(+48);
	i2 v7319 = *(i2*)(intptr_t)v7318;
	i2 v7320 = (i2)+0;
	if (v7319==v7320) goto c02_05a5; else goto c02_05a6;

c02_05a5:;

	i8 v7321 = (i8)(intptr_t)(ws+1560);
	i2 v7322 = *(i2*)(intptr_t)v7321;
	i8 v7323 = (i8)(intptr_t)(ws+72);
	i8 v7324 = *(i8*)(intptr_t)v7323;
	i8 v7325 = v7324+(+48);
	*(i2*)(intptr_t)v7325 = v7322;

	i8 v7326 = (i8)(intptr_t)(ws+1560);
	i2 v7327 = *(i2*)(intptr_t)v7326;
	i8 v7328 = (i8)(intptr_t)(ws+3394);
	i2 v7329 = *(i2*)(intptr_t)v7328;
	i2 v7330 = v7327/v7329;
	i8 v7331 = (i8)(intptr_t)(ws+3398);
	*(i2*)(intptr_t)v7331 = v7330;

	i8 v7332 = (i8)(intptr_t)(ws+3398);
	i2 v7333 = *(i2*)(intptr_t)v7332;
	i8 v7334 = (i8)(intptr_t)(ws+72);
	i8 v7335 = *(i8*)(intptr_t)v7334;
	i8 v7336 = v7335+(+8);
	*(i2*)(intptr_t)v7336 = v7333;

	i4 v7337 = (i4)+0;
	*(i4*)(intptr_t)(ws+3448) = v7337;
	i8 v7338 = (i8)(intptr_t)(ws+3398);
	i2 v7339 = *(i2*)(intptr_t)v7338;
	i2 v7340 = v7339+(-1);
	i4 v7341 = v7340;
	*(i4*)(intptr_t)(ws+3452) = v7341;
	i8 v7342 = (i8)(intptr_t)(f243_ArchGuessIntType);

	((void(*)(void))(intptr_t)v7342)();

	i8 v7343 = *(i8*)(intptr_t)(ws+3456);
	i8 v7344 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7344 = v7343;

	i8 v7345 = (i8)(intptr_t)(ws+3400);
	i8 v7346 = *(i8*)(intptr_t)v7345;
	i8 v7347 = (i8)(intptr_t)(ws+72);
	i8 v7348 = *(i8*)(intptr_t)v7347;
	i8 v7349 = v7348+(+16);
	*(i8*)(intptr_t)v7349 = v7346;

c02_05a6:;

c02_05a2:;

	i8 v7350 = (i8)(intptr_t)(ws+1560);
	i2 v7351 = *(i2*)(intptr_t)v7350;
	i8 v7352 = (i8)(intptr_t)(ws+72);
	i8 v7353 = *(i8*)(intptr_t)v7352;
	i8 v7354 = v7353+(+48);
	i2 v7355 = *(i2*)(intptr_t)v7354;
	if (v7351==v7355) goto c02_05ab; else goto c02_05aa;

c02_05aa:;

	i8 v7356 = (i8)(intptr_t)(f296_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7356)();

c02_05ab:;

c02_05a7:;

	goto c02_059d;

c02_05a1:;

	i8 v7357 = (i8)(intptr_t)(ws+1552);
	i8 v7358 = *(i8*)(intptr_t)v7357;
	i8 v7359 = (i8)+0;
	if (v7358==v7359) goto c02_05b0; else goto c02_05af;

c02_05af:;

	i8 v7360 = (i8)(intptr_t)(f296_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7360)();

c02_05b0:;

c02_05ac:;

c02_059d:;

}
	void f228_IsArray(void);

// GetInitedMember workspace at ws+3464 length ws+17
void f298_GetInitedMember(void) {

	i8 v7361 = (i8)+0;
	i8 v7362 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v7362 = v7361;

	i8 v7363 = (i8)(intptr_t)(ws+72);
	i8 v7364 = *(i8*)(intptr_t)v7363;
	*(i8*)(intptr_t)(ws+3496) = v7364;
	i8 v7365 = (i8)(intptr_t)(f228_IsArray);

	((void(*)(void))(intptr_t)v7365)();

	i1 v7366 = *(i1*)(intptr_t)(ws+3504);
	i8 v7367 = (i8)(intptr_t)(ws+3480);
	*(i1*)(intptr_t)v7367 = v7366;

	i8 v7368 = (i8)(intptr_t)(ws+3480);
	i1 v7369 = *(i1*)(intptr_t)v7368;
	i1 v7370 = (i1)+0;
	if (v7369==v7370) goto c02_05b5; else goto c02_05b4;

c02_05b4:;

	i8 v7371 = (i8)(intptr_t)(ws+72);
	i8 v7372 = *(i8*)(intptr_t)v7371;
	i8 v7373 = *(i8*)(intptr_t)v7372;
	i8 v7374 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7374 = v7373;

	goto c02_05b1;

c02_05b5:;

	i8 v7375 = (i8)(intptr_t)(ws+1552);
	i8 v7376 = *(i8*)(intptr_t)v7375;
	i8 v7377 = (i8)+0;
	if (v7376==v7377) goto c02_05b9; else goto c02_05ba;

c02_05b9:;

	i8 v7378 = (i8)+0;
	i8 v7379 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7379 = v7378;

	return;

c02_05ba:;

c02_05b6:;

	i8 v7380 = (i8)(intptr_t)(ws+1552);
	i8 v7381 = *(i8*)(intptr_t)v7380;
	i8 v7382 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v7382 = v7381;

	i8 v7383 = (i8)(intptr_t)(ws+1552);
	i8 v7384 = *(i8*)(intptr_t)v7383;
	i8 v7385 = *(i8*)(intptr_t)v7384;
	i8 v7386 = *(i8*)(intptr_t)v7385;
	i8 v7387 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7387 = v7386;

	i8 v7388 = (i8)(intptr_t)(ws+1552);
	i8 v7389 = *(i8*)(intptr_t)v7388;
	i8 v7390 = v7389+(+24);
	i8 v7391 = *(i8*)(intptr_t)v7390;
	i8 v7392 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v7392 = v7391;

c02_05b1:;

}
	void f241_ArchAlignUp(void);
	void f105_MidInit(void);
	void f259_Generate(void);

// AlignTo workspace at ws+3464 length ws+16
void f299_AlignTo(void) {

	i8 v7393 = (i8)(intptr_t)(ws+1562);
	i2 v7394 = *(i2*)(intptr_t)v7393;
	*(i2*)(intptr_t)(ws+3544) = v7394;
	i8 v7395 = (i8)(intptr_t)(ws+3464);
	i1 v7396 = *(i1*)(intptr_t)v7395;
	*(i1*)(intptr_t)(ws+3546) = v7396;
	i8 v7397 = (i8)(intptr_t)(f241_ArchAlignUp);

	((void(*)(void))(intptr_t)v7397)();

	i2 v7398 = *(i2*)(intptr_t)(ws+3548);
	i8 v7399 = (i8)(intptr_t)(ws+3466);
	*(i2*)(intptr_t)v7399 = v7398;

	i8 v7400 = (i8)(intptr_t)(ws+3466);
	i2 v7401 = *(i2*)(intptr_t)v7400;
	i8 v7402 = (i8)(intptr_t)(ws+3468);
	*(i2*)(intptr_t)v7402 = v7401;

c02_05bb:;

	i8 v7403 = (i8)(intptr_t)(ws+1562);
	i2 v7404 = *(i2*)(intptr_t)v7403;
	i8 v7405 = (i8)(intptr_t)(ws+3468);
	i2 v7406 = *(i2*)(intptr_t)v7405;
	if (v7404==v7406) goto c02_05c0; else goto c02_05bf;

c02_05bf:;

	i1 v7407 = (i1)+1;
	*(i1*)(intptr_t)(ws+3480) = v7407;
	i4 v7408 = (i4)+0;
	*(i4*)(intptr_t)(ws+3484) = v7408;
	i8 v7409 = (i8)(intptr_t)(f105_MidInit);

	((void(*)(void))(intptr_t)v7409)();

	i8 v7410 = *(i8*)(intptr_t)(ws+3488);
	i8 v7411 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7411 = v7410;

	i8 v7412 = (i8)(intptr_t)(ws+3472);
	i8 v7413 = *(i8*)(intptr_t)v7412;
	*(i8*)(intptr_t)(ws+3488) = v7413;
	i8 v7414 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7414)();

	i8 v7415 = (i8)(intptr_t)(ws+1560);
	i2 v7416 = *(i2*)(intptr_t)v7415;
	i2 v7417 = v7416+(+1);
	i8 v7418 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7418 = v7417;

	i8 v7419 = (i8)(intptr_t)(ws+1562);
	i2 v7420 = *(i2*)(intptr_t)v7419;
	i2 v7421 = v7420+(+1);
	i8 v7422 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v7422 = v7421;

	goto c02_05bb;

c02_05c0:;

}
const i1 c02_s011e[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(void);

// CheckForOverlaps workspace at ws+3464 length ws+8
void f300_CheckForOverlaps(void) {

	i8 v7423 = (i8)(intptr_t)(ws+3464);
	i8 v7424 = *(i8*)(intptr_t)v7423;
	i8 v7425 = (i8)+0;
	if (v7424==v7425) goto c02_05c4; else goto c02_05c5;

c02_05c4:;

	return;

c02_05c5:;

c02_05c1:;

	i8 v7426 = (i8)(intptr_t)(ws+3464);
	i8 v7427 = *(i8*)(intptr_t)v7426;
	i8 v7428 = *(i8*)(intptr_t)v7427;
	i8 v7429 = v7428+(+24);
	i2 v7430 = *(i2*)(intptr_t)v7429;
	i8 v7431 = (i8)(intptr_t)(ws+1560);
	i2 v7432 = *(i2*)(intptr_t)v7431;
	if (v7430<v7432) goto c02_05c9; else goto c02_05ca;

c02_05c9:;

	i8 v7433 = (i8)(intptr_t)c02_s011e;
	*(i8*)(intptr_t)(ws+3648) = v7433;
	i8 v7434 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7434)();

c02_05ca:;

c02_05c6:;

}
	void f298_GetInitedMember(void);
	void f296_WrongNumberOfElementsError(void);
	void f299_AlignTo(void);
	void f300_CheckForOverlaps(void);

// GetInitedMemberChecked workspace at ws+3448 length ws+16
void f301_GetInitedMemberChecked(void) {

	i8 v7435 = (i8)(intptr_t)(f298_GetInitedMember);

	((void(*)(void))(intptr_t)v7435)();

	i8 v7436 = *(i8*)(intptr_t)(ws+3472);
	i8 v7437 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v7437 = v7436;

	i8 v7438 = *(i8*)(intptr_t)(ws+3464);
	i8 v7439 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7439 = v7438;

	i8 v7440 = (i8)(intptr_t)(ws+3456);
	i8 v7441 = *(i8*)(intptr_t)v7440;
	i8 v7442 = (i8)+0;
	if (v7441==v7442) goto c02_05ce; else goto c02_05cf;

c02_05ce:;

	i8 v7443 = (i8)(intptr_t)(f296_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7443)();

c02_05cf:;

c02_05cb:;

	i8 v7444 = (i8)(intptr_t)(ws+3456);
	i8 v7445 = *(i8*)(intptr_t)v7444;
	i8 v7446 = v7445+(+53);
	i1 v7447 = *(i1*)(intptr_t)v7446;
	*(i1*)(intptr_t)(ws+3464) = v7447;
	i8 v7448 = (i8)(intptr_t)(f299_AlignTo);

	((void(*)(void))(intptr_t)v7448)();

	i8 v7449 = (i8)(intptr_t)(ws+3448);
	i8 v7450 = *(i8*)(intptr_t)v7449;
	*(i8*)(intptr_t)(ws+3464) = v7450;
	i8 v7451 = (i8)(intptr_t)(f300_CheckForOverlaps);

	((void(*)(void))(intptr_t)v7451)();

}
static data f3___main_s05d0[] = {




	{ .i1 = { 0x17,0x02,0xae,0x01,0x01,0x02,0xd3,0x00}},




	{ .i1 = { 0x5f,0x00,0x6a,0x00,0x17,0x02,0x62,0x00}},




	{ .i1 = { 0x01,0x02,0x4b,0x01,0x60,0x00,0x27,0x00}},




	{ .i1 = { 0x70,0x00,0x41,0x01,0x37,0x00,0x4d,0x00}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x41,0x02,0x83,0x01}},




	{ .i1 = { 0x53,0x00,0xdf,0x00,0xb5,0x01,0x4e,0x00}},




	{ .i1 = { 0x6b,0x00,0x57,0x00,0x41,0x02,0x35,0x00}},




	{ .i1 = { 0x64,0x00,0x43,0x01,0xbd,0x00,0x2b,0x02}},




	{ .i1 = { 0x18,0x00,0x80,0x01,0x5b,0x01,0x4a,0x00}},




	{ .i1 = { 0x52,0x00,0x4c,0x01,0xdc,0x00,0xc8,0x00}},




	{ .i1 = { 0x51,0x00,0x75,0x01,0xb6,0x00,0xc1,0x00}},




	{ .i1 = { 0x54,0x00,0x3c,0x00,0xa7,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x57,0x02,0xaa,0x00,0x81,0x01}},




	{ .i1 = { 0xa9,0x00,0x34,0x00,0x36,0x00,0x74,0x00}},




	{ .i1 = { 0xda,0x00,0xab,0x00,0xaa,0x00,0xe2,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x9c,0x01}},




	{ .i1 = { 0xd2,0x00,0x1f,0x00,0x81,0x01,0xae,0x01}},




	{ .i1 = { 0xdb,0x00,0xd3,0x00,0xde,0x00,0x09,0x02}},




	{ .i1 = { 0x01,0x02,0x62,0x00,0x63,0x00,0x51,0x01}},




	{ .i1 = { 0xb5,0x00,0xae,0x00,0x70,0x00,0x41,0x01}},




	{ .i1 = { 0x37,0x00,0x50,0x00,0x11,0x00,0x28,0x00}},




	{ .i1 = { 0xc9,0x01,0x08,0x00,0x53,0x00,0xdf,0x00}},




	{ .i1 = { 0xb5,0x01,0x4c,0x00,0x31,0x00,0x57,0x00}},




	{ .i1 = { 0xba,0x00,0x35,0x00,0x64,0x00,0x43,0x01}},




	{ .i1 = { 0x09,0x02,0x74,0x00,0x86,0x00,0x80,0x01}},




	{ .i1 = { 0x5b,0x01,0x95,0x00,0x52,0x00,0xa6,0x00}},




	{ .i1 = { 0xb0,0x00,0xc8,0x00,0x51,0x00,0x75,0x01}},




	{ .i1 = { 0xb6,0x00,0xc1,0x00,0x54,0x00,0x3c,0x00}},




	{ .i1 = { 0xde,0x00,0xde,0x00,0x01,0x02,0x01,0x02}},




	{ .i1 = { 0x63,0x00,0x63,0x00,0x16,0x00,0x14,0x00}},




	{ .i1 = { 0x9e,0x00,0x1a,0x02,0x98,0x00,0x3b,0x00}},




	{ .i1 = { 0x80,0x01,0xb0,0x01,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0x7f,0x01,0xd2,0x00,0x1f,0x00}},




	{ .i1 = { 0xaf,0x01,0xae,0x01,0xdb,0x00,0xd3,0x00}},




	{ .i1 = { 0xb9,0x00,0x9b,0x00,0x18,0x00,0x62,0x00}},




	{ .i1 = { 0xc0,0x00,0x09,0x02,0xd5,0x00,0x3c,0x01}},




	{ .i1 = { 0x70,0x00,0x41,0x01,0x37,0x00,0xc0,0x00}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x4e,0x00,0x9d,0x00}},




	{ .i1 = { 0x53,0x00,0xdf,0x00,0xb5,0x01,0x09,0x02}},




	{ .i1 = { 0x09,0x02,0x57,0x00,0x92,0x01,0x35,0x00}},




	{ .i1 = { 0x64,0x00,0x43,0x01,0xb1,0x00,0x74,0x00}},




	{ .i1 = { 0x75,0x00,0x80,0x01,0x5b,0x01,0x95,0x00}},




	{ .i1 = { 0x52,0x00,0xd1,0x00,0x09,0x02,0xc8,0x00}},




	{ .i1 = { 0x51,0x00,0x75,0x01,0xb6,0x00,0xc1,0x00}},




	{ .i1 = { 0x54,0x00,0x3c,0x00,0xde,0x00,0xde,0x00}},




	{ .i1 = { 0x01,0x02,0x01,0x02,0x63,0x00,0x63,0x00}},




	{ .i1 = { 0x52,0x02,0x41,0x00,0x59,0x00,0x74,0x00}},




	{ .i1 = { 0xcc,0x00,0x1e,0x02,0x9c,0x00,0xe4,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x97,0x01}},




	{ .i1 = { 0xd2,0x00,0x1f,0x00,0xdd,0x00,0xae,0x01}},




	{ .i1 = { 0xdb,0x00,0xd3,0x00,0xde,0x00,0x45,0x00}},




	{ .i1 = { 0x01,0x02,0x62,0x00,0x63,0x00,0x4b,0x00}},




	{ .i1 = { 0xd6,0x00,0x09,0x02,0x70,0x00,0x41,0x01}},




	{ .i1 = { 0x37,0x00,0xba,0x00,0x11,0x00,0x28,0x00}},




	{ .i1 = { 0xab,0x01,0x09,0x02,0x53,0x00,0xdf,0x00}},




	{ .i1 = { 0xb5,0x01,0xbc,0x00,0xbb,0x00,0x57,0x00}},




	{ .i1 = { 0x80,0x01,0x35,0x00,0x64,0x00,0x43,0x01}},




	{ .i1 = { 0x32,0x02,0x7e,0x00,0x0e,0x00,0x80,0x01}},




	{ .i1 = { 0x5b,0x01,0xce,0x00,0x52,0x00,0x87,0x00}},




	{ .i1 = { 0xdc,0x00,0xc8,0x00,0x51,0x00,0x75,0x01}},




	{ .i1 = { 0xb6,0x00,0xc1,0x00,0x54,0x00,0x3c,0x00}},




	{ .i1 = { 0xde,0x00,0x2d,0x00,0x01,0x02,0x5a,0x00}},




	{ .i1 = { 0x63,0x00,0xa8,0x00,0xde,0x00,0x46,0x00}},




	{ .i1 = { 0x01,0x02,0x73,0x00,0x63,0x00,0x49,0x02}},




	{ .i1 = { 0x6c,0x00,0x92,0x00,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0xb4,0x00,0xd2,0x00,0x1f,0x00}},




	{ .i1 = { 0x42,0x02,0xae,0x01,0xdb,0x00,0xd3,0x00}},




	{ .i1 = { 0xde,0x00,0x88,0x01,0x01,0x02,0x62,0x00}},




	{ .i1 = { 0x63,0x00,0x96,0x00,0x96,0x00,0x0b,0x00}},




	{ .i1 = { 0x70,0x00,0x41,0x01,0x37,0x00,0x80,0x01}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0xac,0x00,0x94,0x00}},




	{ .i1 = { 0x53,0x00,0xdf,0x00,0xb5,0x01,0x4c,0x00}},




	{ .i1 = { 0x31,0x00,0x57,0x00,0x12,0x00,0x35,0x00}},




	{ .i1 = { 0x64,0x00,0x43,0x01,0x18,0x00,0x7e,0x00}},




	{ .i1 = { 0x0e,0x00,0x80,0x01,0x5b,0x01,0xa4,0x01}},




	{ .i1 = { 0x52,0x00,0x87,0x00,0x09,0x02,0xc8,0x00}},




	{ .i1 = { 0x51,0x00,0x75,0x01,0xb6,0x00,0xc1,0x00}},




	{ .i1 = { 0x54,0x00,0x3c,0x00,0xde,0x00,0x1d,0x00}},




	{ .i1 = { 0x01,0x02,0x26,0x02,0x63,0x00,0xd7,0x00}},




	{ .i1 = { 0xde,0x00,0x97,0x01,0x01,0x02,0x74,0x00}},




	{ .i1 = { 0x63,0x00,0x0d,0x02,0x12,0x02,0xd4,0x00}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x2a,0x02}},




	{ .i1 = { 0xd2,0x00,0x1f,0x00,0x10,0x00,0xae,0x01}},




	{ .i1 = { 0xdb,0x00,0xd3,0x00,0xde,0x00,0x66,0x00}},




	{ .i1 = { 0x01,0x02,0x62,0x00,0x63,0x00,0x97,0x00}},




	{ .i1 = { 0x97,0x00,0x0b,0x00,0x70,0x00,0x41,0x01}},




	{ .i1 = { 0x37,0x00,0xc0,0x00,0x11,0x00,0x28,0x00}},




	{ .i1 = { 0x00,0x02,0x12,0x02,0x53,0x00,0xdf,0x00}},




	{ .i1 = { 0xb5,0x01,0x68,0x00,0x44,0x01,0x57,0x00}},




	{ .i1 = { 0xbc,0x01,0x35,0x00,0x64,0x00,0x43,0x01}},




	{ .i1 = { 0x01,0x00,0x74,0x00,0x7e,0x00,0x80,0x01}},




	{ .i1 = { 0x5b,0x01,0x93,0x00,0x52,0x00,0xc3,0x00}},




	{ .i1 = { 0x87,0x00,0xc8,0x00,0x51,0x00,0x75,0x01}},




	{ .i1 = { 0xb6,0x00,0xc1,0x00,0x54,0x00,0x3c,0x00}},




	{ .i1 = { 0xde,0x00,0xde,0x00,0x01,0x02,0x01,0x02}},




	{ .i1 = { 0x63,0x00,0x63,0x00,0xaf,0x00,0xde,0x00}},




	{ .i1 = { 0x76,0x00,0x01,0x02,0xc4,0x00,0x63,0x00}},




	{ .i1 = { 0x16,0x00,0x14,0x00,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0xc6,0x00,0xd2,0x00,0x1f,0x00}},




	{ .i1 = { 0x5c,0x01,0xca,0x00,0xdb,0x00,0xde,0x00}},




	{ .i1 = { 0xdc,0x00,0x01,0x02,0x86,0x00,0x63,0x00}},




	{ .i1 = { 0xff,0x01,0x12,0x02,0x38,0x00,0x54,0x02}},




	{ .i1 = { 0x0b,0x00,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0x25,0x02,0x39,0x00,0x28,0x00,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xde,0x00,0xdc,0x00,0x01,0x02}},




	{ .i1 = { 0x7a,0x01,0x63,0x00,0x16,0x00,0x14,0x00}},




	{ .i1 = { 0x38,0x00,0x1b,0x02,0x14,0x02,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0x80,0x01,0x5b,0x01}},




	{ .i1 = { 0x18,0x00,0x34,0x00,0x36,0x00,0xb3,0x00}},




	{ .i1 = { 0x41,0x00,0x59,0x00,0x75,0x01,0x87,0x00}},




	{ .i1 = { 0x43,0x00,0x30,0x00,0x32,0x00,0x23,0x00}},




	{ .i1 = { 0x20,0x00,0x21,0x00,0x22,0x00,0x25,0x00}},




	{ .i1 = { 0x24,0x00,0x2f,0x00,0x2e,0x00,0x4c,0x00}},




	{ .i1 = { 0x31,0x00,0xc9,0x00,0xde,0x00,0xa5,0x00}},




	{ .i1 = { 0x01,0x02,0x25,0x02,0x63,0x00,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0x23,0x00,0x20,0x00,0x21,0x00}},




	{ .i1 = { 0x22,0x00,0x25,0x00,0x24,0x00,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4c,0x00,0x31,0x00,0x44,0x02}},




	{ .i1 = { 0x67,0x00,0x03,0x00,0x78,0x00,0x72,0x00}},




	{ .i1 = { 0x71,0x00,0x17,0x00,0xbd,0x00,0x2b,0x02}},




	{ .i1 = { 0x69,0x00,0x47,0x02,0x6e,0x00,0x0d,0x00}},




	{ .i1 = { 0x6d,0x00,0x44,0x00,0xbd,0x00,0x2b,0x02}},




	{ .i1 = { 0x99,0x00,0xde,0x00,0x04,0x00,0x01,0x02}},




	{ .i1 = { 0x9a,0x00,0x61,0x00,0x18,0x00,0xc5,0x00}},




	{ .i1 = { 0x2f,0x02,0xbb,0x00,0xdc,0x00,0x7e,0x01}},




	{ .i1 = { 0x05,0x00,0x87,0x00,0xdc,0x00,0x58,0x00}},




	{ .i1 = { 0x38,0x00,0x5d,0x00,0x5c,0x00,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0x25,0x02,0x2d,0x00}},




	{ .i1 = { 0x09,0x00,0x34,0x00,0x36,0x00,0xd9,0x00}},




	{ .i1 = { 0xde,0x00,0xad,0x00,0x01,0x02,0x44,0x02}},




	{ .i1 = { 0x63,0x00,0x3f,0x00,0x78,0x00,0x72,0x00}},




	{ .i1 = { 0x71,0x00,0x17,0x00,0x4f,0x00,0x0a,0x00}},




	{ .i1 = { 0x02,0x00,0xd0,0x00,0x6e,0x00,0x0d,0x00}},




	{ .i1 = { 0x6d,0x00,0x0f,0x00,0x06,0x00,0x07,0x00}},




	{ .i1 = { 0x65,0x00,0xde,0x00,0x40,0x00,0x01,0x02}},




	{ .i1 = { 0x50,0x01,0x61,0x00,0x44,0x02,0xc5,0x00}},




	{ .i1 = { 0x87,0x00,0x78,0x00,0x72,0x00,0x71,0x00}},




	{ .i1 = { 0x17,0x00,0x4c,0x00,0x31,0x00,0x4f,0x01}},




	{ .i1 = { 0x18,0x00,0x5d,0x00,0x5c,0x00,0x6d,0x00}},




	{ .i1 = { 0x0c,0x00,0x3e,0x00,0xd8,0x00,0xde,0x00}},




	{ .i1 = { 0xde,0x00,0x01,0x02,0x01,0x02,0x63,0x00}},




	{ .i1 = { 0x61,0x00,0xad,0x00,0xc5,0x00,0xa6,0x01}},




	{ .i1 = { 0xad,0x01,0x3f,0x00,0xa8,0x01,0x19,0x00}},




	{ .i1 = { 0x47,0x00,0xa1,0x01,0xb2,0x00,0xb7,0x00}},




	{ .i1 = { 0x5d,0x00,0x5c,0x00,0x44,0x02,0x42,0x00}},




	{ .i1 = { 0x7f,0x00,0x78,0x00,0x72,0x00,0x71,0x00}},




	{ .i1 = { 0x17,0x00,0x98,0x01,0x5b,0x00,0x48,0x00}},




	{ .i1 = { 0xad,0x00,0xbe,0x01,0xbd,0x01,0x6d,0x00}},




	{ .i1 = { 0x3f,0x00,0x55,0x00,0x9d,0x01,0xde,0x00}},




	{ .i1 = { 0xde,0x00,0x01,0x02,0x01,0x02,0x63,0x00}},




	{ .i1 = { 0x61,0x00,0x5e,0x00,0xc5,0x00,0x44,0x02}},




	{ .i1 = { 0x94,0x01,0xcb,0x00,0x78,0x00,0x72,0x00}},




	{ .i1 = { 0x71,0x00,0x17,0x00,0xbe,0x00,0xb8,0x00}},




	{ .i1 = { 0x5d,0x00,0x5c,0x00,0xbf,0x00,0xbb,0x01}},




	{ .i1 = { 0x6d,0x00,0x56,0x00,0x91,0x01,0x86,0x01}},




	{ .i1 = { 0x3d,0x00,0xde,0x00,0x49,0x00,0x01,0x02}},




	{ .i1 = { 0xad,0x00,0x61,0x00,0x44,0x02,0xc5,0x00}},




	{ .i1 = { 0x3f,0x00,0x78,0x00,0x72,0x00,0x71,0x00}},




	{ .i1 = { 0x17,0x00,0x85,0x01,0xc7,0x00,0x77,0x01}},




	{ .i1 = { 0xc2,0x00,0x5d,0x00,0x5c,0x00,0x6d,0x00}},




	{ .i1 = { 0x80,0x00,0x1a,0x00,0x8d,0x01,0x4d,0x01}},




	{ .i1 = { 0xde,0x00,0x1b,0x00,0x01,0x02,0xcd,0x00}},




	{ .i1 = { 0x61,0x00,0xad,0x00,0xc5,0x00,0xcf,0x00}},




	{ .i1 = { 0x47,0x01,0x3f,0x00,0x81,0x00,0xde,0x00}},




	{ .i1 = { 0x6f,0x00,0x01,0x02,0x46,0x01,0x63,0x00}},




	{ .i1 = { 0x5d,0x00,0x5c,0x00,0x14,0x00,0x7b,0x01}},




	{ .i1 = { 0x37,0x00,0x45,0x01,0x39,0x00,0x28,0x00}},




	{ .i1 = { 0x42,0x01,0xde,0x00,0x40,0x01,0x01,0x02}},




	{ .i1 = { 0xad,0x00,0x63,0x00,0x78,0x01,0x1c,0x00}},




	{ .i1 = { 0x3f,0x00,0x35,0x00,0x82,0x00,0x83,0x00}},




	{ .i1 = { 0x1e,0x00,0xac,0x01,0x2b,0x00,0x80,0x01}},




	{ .i1 = { 0x5b,0x01,0x74,0x01,0x52,0x00,0x17,0x02}},




	{ .i1 = { 0x3b,0x01,0xca,0x01,0x51,0x00,0x75,0x01}},




	{ .i1 = { 0xca,0x01,0xde,0x00,0xde,0x00,0x01,0x02}},




	{ .i1 = { 0x01,0x02,0x63,0x00,0x63,0x00,0xca,0x01}},




	{ .i1 = { 0x84,0x00,0x37,0x00,0x13,0x00,0x15,0x00}},




	{ .i1 = { 0x28,0x00,0xca,0x01,0xca,0x01,0x85,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0xca,0x01,0x35,0x00,0xde,0x00}},




	{ .i1 = { 0xca,0x01,0x01,0x02,0xdb,0x00,0x63,0x00}},




	{ .i1 = { 0x80,0x01,0x5b,0x01,0xde,0x00,0x52,0x00}},




	{ .i1 = { 0x01,0x02,0xca,0x01,0x63,0x00,0x51,0x00}},




	{ .i1 = { 0x75,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0x89,0x01,0xca,0x01,0x77,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0x37,0x00}},




	{ .i1 = { 0xca,0x01,0x39,0x00,0x28,0x00,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0xde,0x00,0xca,0x01}},




	{ .i1 = { 0x01,0x02,0xa7,0x00,0x63,0x00,0xdb,0x00}},




	{ .i1 = { 0x35,0x00,0xca,0x01,0x37,0x00,0xca,0x01}},




	{ .i1 = { 0x39,0x00,0x28,0x00,0x80,0x01,0x5b,0x01}},




	{ .i1 = { 0x7c,0x01,0x52,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0x51,0x00,0x75,0x01,0x35,0x00}},




	{ .i1 = { 0xca,0x01,0x37,0x00,0xca,0x01,0x39,0x00}},




	{ .i1 = { 0x28,0x00,0x80,0x01,0x5b,0x01,0x79,0x00}},




	{ .i1 = { 0x52,0x00,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x51,0x00,0x75,0x01,0x35,0x00,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0x80,0x01,0x5b,0x01,0xde,0x00,0x52,0x00}},




	{ .i1 = { 0x01,0x02,0xdb,0x00,0x63,0x00,0x51,0x00}},




	{ .i1 = { 0x75,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xdb,0x00,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x5c,0x01,0xca,0x01,0xca,0x01,0xdb,0x00}},




	{ .i1 = { 0xdc,0x00,0xca,0x01,0x7a,0x00,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x38,0x00,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xde,0x00,0xdc,0x00,0x01,0x02}},




	{ .i1 = { 0xca,0x01,0x63,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x38,0x00,0xca,0x01,0xca,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0x34,0x00,0x36,0x00,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x9f,0x00,0xa0,0x00}},




	{ .i1 = { 0xca,0x01,0x30,0x00,0x32,0x00,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xa1,0x00,0xa2,0x00}},




	{ .i1 = { 0xca,0x01,0x2f,0x00,0x2e,0x00,0x4c,0x00}},




	{ .i1 = { 0x31,0x00,0xde,0x00,0xde,0x00,0x01,0x02}},




	{ .i1 = { 0x01,0x02,0x63,0x00,0x63,0x00,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xde,0x00,0xde,0x00,0x01,0x02}},




	{ .i1 = { 0x01,0x02,0x63,0x00,0x63,0x00,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4c,0x00,0x31,0x00,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x4e,0x01,0xdc,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0x38,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0x26,0x00,0xca,0x01,0x3f,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xca,0x01,0xdc,0x00}},




	{ .i1 = { 0xca,0x01,0x7b,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0x38,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xde,0x00,0xca,0x01,0x01,0x02,0x8a,0x00}},




	{ .i1 = { 0x63,0x00,0xca,0x01,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0x8b,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4c,0x00,0x31,0x00,0xde,0x00,0xca,0x01}},




	{ .i1 = { 0x01,0x02,0x88,0x00,0x63,0x00,0xca,0x01}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xde,0x00,0xa3,0x00}},




	{ .i1 = { 0x01,0x02,0xca,0x01,0x63,0x00,0xca,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4c,0x00,0x31,0x00}},




	{ .i1 = { 0xde,0x00,0xca,0x01,0x01,0x02,0xca,0x01}},




	{ .i1 = { 0x63,0x00,0xdc,0x00,0xde,0x00,0xca,0x01}},




	{ .i1 = { 0x01,0x02,0xca,0x01,0x63,0x00,0x38,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xca,0x01,0xca,0x01,0x3e,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0x72,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xdc,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0x38,0x00}},




	{ .i1 = { 0xca,0x01,0x89,0x00,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xca,0x01,0x90,0x00}},




	{ .i1 = { 0x91,0x00,0xca,0x01,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0xde,0x00,0xca,0x01,0x01,0x02,0xca,0x01}},




	{ .i1 = { 0x63,0x00,0xca,0x01,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4c,0x00,0x31,0x00,0xde,0x00,0xde,0x00}},




	{ .i1 = { 0x01,0x02,0x01,0x02,0x63,0x00,0x63,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4c,0x00,0x31,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x73,0x01,0xca,0x01,0xca,0x01,0xdc,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xa4,0x00}},




	{ .i1 = { 0xca,0x01,0x38,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xca,0x01,0xdc,0x00,0xde,0x00,0xca,0x01}},




	{ .i1 = { 0x01,0x02,0xca,0x01,0x63,0x00,0x38,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xca,0x01,0xca,0x01,0x3d,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x8f,0x00,0xca,0x01}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x8e,0x00,0xca,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4c,0x00,0x31,0x00}},




	{ .i1 = { 0xca,0x01,0xde,0x00,0xca,0x01,0x01,0x02}},




	{ .i1 = { 0xca,0x01,0x63,0x00,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0xca,0x01,0xde,0x00,0xca,0x01,0x01,0x02}},




	{ .i1 = { 0xca,0x01,0x63,0x00,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4c,0x00,0x31,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x8d,0x00,0x37,0x00,0xca,0x01,0x39,0x00}},




	{ .i1 = { 0x28,0x00,0xca,0x01,0xca,0x01,0x7c,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x35,0x00,0xde,0x00}},




	{ .i1 = { 0xca,0x01,0x01,0x02,0xca,0x01,0x63,0x00}},




	{ .i1 = { 0x80,0x01,0x5b,0x01,0xde,0x00,0x52,0x00}},




	{ .i1 = { 0x01,0x02,0xca,0x01,0x63,0x00,0x51,0x00}},




	{ .i1 = { 0x75,0x01,0xdc,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0x38,0x00}},




	{ .i1 = { 0xca,0x01,0x8c,0x00,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xca,0x01,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xde,0x00,0xdc,0x00,0x01,0x02,0xdb,0x00}},




	{ .i1 = { 0x63,0x00,0x7d,0x00,0xca,0x01,0x38,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0xde,0x00,0xca,0x01,0x01,0x02,0xca,0x01}},




	{ .i1 = { 0x63,0x00,0xdc,0x00,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4c,0x00,0x31,0x00,0xca,0x01,0x38,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xca,0x01,0x32,0x00}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4c,0x00,0x31,0x00,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0xca,0x01,0xca,0x01}},




	{ .i1 = { 0xca,0x01,0xca,0x01,0x2f,0x00,0x2e,0x00}},



	{ .i1 = { 0x4c,0x00,0x31,0x00}},
};
static data f3___main_s05d1[] = {








	{ .i1 = { 0x5a,0x01,0x5c,0x03,0x5e,0x68,0x5a,0x07}},








	{ .i1 = { 0x5c,0x09,0x5e,0x02,0x0c,0x0d,0x0e,0x06}},








	{ .i1 = { 0x10,0x11,0x5c,0x04,0x14,0x15,0x16,0x10}},








	{ .i1 = { 0x66,0x19,0x5c,0x1b,0x1c,0x1d,0x6c,0x6d}},








	{ .i1 = { 0x11,0x21,0x22,0x11,0x24,0x25,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x2c,0x2d,0x21,0x11}},








	{ .i1 = { 0x12,0x7b,0x7c,0x21,0x4a,0x17,0x18,0x4b}},








	{ .i1 = { 0x26,0x7b,0x7c,0x4f,0x3c,0x3d,0x3e,0x04}},








	{ .i1 = { 0x40,0x41,0x21,0x01,0x44,0x03,0x5a,0x5d}},








	{ .i1 = { 0x5c,0x07,0x5e,0x04,0x0a,0x4a,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x3f,0x10,0x11,0x46,0x47,0x14,0x15}},








	{ .i1 = { 0x16,0x3b,0x3c,0x19,0x21,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x5d,0x4b,0x4b,0x21,0x22,0x4f,0x24,0x51}},








	{ .i1 = { 0x23,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d}},








	{ .i1 = { 0x5a,0x5a,0x5c,0x5c,0x5e,0x5e,0x2f,0x30}},








	{ .i1 = { 0x61,0x62,0x4a,0x02,0x21,0x22,0x3c,0x3d}},








	{ .i1 = { 0x3e,0x21,0x40,0x41,0x29,0x01,0x44,0x03}},








	{ .i1 = { 0x4a,0x4a,0x11,0x07,0x0b,0x5d,0x0a,0x16}},








	{ .i1 = { 0x0c,0x0d,0x0e,0x0b,0x10,0x11,0x10,0x4a}},








	{ .i1 = { 0x14,0x15,0x16,0x5d,0x5d,0x19,0x16,0x1b}},








	{ .i1 = { 0x1c,0x1d,0x75,0x4b,0x4b,0x21,0x22,0x4f}},








	{ .i1 = { 0x24,0x51,0x5d,0x27,0x28,0x29,0x2a,0x2b}},








	{ .i1 = { 0x2c,0x2d,0x5a,0x5a,0x5c,0x5c,0x5e,0x5e}},








	{ .i1 = { 0x72,0x73,0x74,0x4b,0x63,0x64,0x4a,0x4f}},








	{ .i1 = { 0x3c,0x3d,0x3e,0x42,0x40,0x41,0x4a,0x01}},








	{ .i1 = { 0x44,0x03,0x5a,0x45,0x5c,0x07,0x5e,0x10}},








	{ .i1 = { 0x0a,0x5d,0x0c,0x0d,0x0e,0x21,0x10,0x11}},








	{ .i1 = { 0x20,0x5d,0x14,0x15,0x16,0x6e,0x6f,0x19}},








	{ .i1 = { 0x21,0x1b,0x1c,0x1d,0x5d,0x4b,0x2e,0x21}},








	{ .i1 = { 0x22,0x0a,0x24,0x4b,0x08,0x27,0x28,0x29}},








	{ .i1 = { 0x2a,0x2b,0x2c,0x2d,0x5a,0x11,0x5c,0x70}},








	{ .i1 = { 0x5e,0x59,0x5a,0x06,0x5c,0x4b,0x5e,0x57}},








	{ .i1 = { 0x58,0x4f,0x3c,0x3d,0x3e,0x71,0x40,0x41}},








	{ .i1 = { 0x00,0x01,0x44,0x03,0x5a,0x04,0x5c,0x07}},








	{ .i1 = { 0x5e,0x77,0x78,0x79,0x0c,0x0d,0x0e,0x21}},








	{ .i1 = { 0x10,0x11,0x20,0x4a,0x14,0x15,0x16,0x3b}},








	{ .i1 = { 0x3c,0x19,0x43,0x1b,0x1c,0x1d,0x11,0x4b}},








	{ .i1 = { 0x2e,0x21,0x22,0x16,0x24,0x4b,0x5d,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x2c,0x2d,0x5a,0x2e}},








	{ .i1 = { 0x5c,0x5c,0x5e,0x59,0x5a,0x42,0x5c,0x4b}},








	{ .i1 = { 0x5e,0x5b,0x5c,0x4f,0x3c,0x3d,0x3e,0x6d}},








	{ .i1 = { 0x40,0x41,0x10,0x01,0x44,0x03,0x5a,0x68}},








	{ .i1 = { 0x5c,0x07,0x5e,0x77,0x78,0x79,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x0b,0x10,0x11,0x5b,0x5c,0x14,0x15}},








	{ .i1 = { 0x16,0x68,0x0d,0x19,0x16,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x47,0x4b,0x4b,0x21,0x22,0x4f,0x24,0x5f}},








	{ .i1 = { 0x4b,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d}},








	{ .i1 = { 0x5a,0x5a,0x5c,0x5c,0x5e,0x5e,0x59,0x5a}},








	{ .i1 = { 0x4b,0x5c,0x5f,0x5e,0x2f,0x30,0x3c,0x3d}},








	{ .i1 = { 0x3e,0x5f,0x40,0x41,0x04,0x49,0x44,0x5a}},








	{ .i1 = { 0x08,0x5c,0x4b,0x5e,0x5b,0x5c,0x0e,0x78}},








	{ .i1 = { 0x79,0x11,0x12,0x13,0x49,0x10,0x11,0x17}},








	{ .i1 = { 0x18,0x5a,0x08,0x5c,0x05,0x5e,0x2f,0x30}},








	{ .i1 = { 0x0e,0x62,0x5f,0x11,0x12,0x13,0x21,0x22}},








	{ .i1 = { 0x11,0x17,0x18,0x72,0x73,0x74,0x29,0x4b}},








	{ .i1 = { 0x65,0x31,0x32,0x33,0x34,0x35,0x36,0x37}},








	{ .i1 = { 0x38,0x39,0x3a,0x3b,0x3c,0x59,0x5a,0x49}},








	{ .i1 = { 0x5c,0x49,0x5e,0x31,0x32,0x33,0x34,0x35}},








	{ .i1 = { 0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x48}},








	{ .i1 = { 0x66,0x47,0x4b,0x4c,0x4d,0x4e,0x6c,0x6d}},








	{ .i1 = { 0x66,0x52,0x53,0x54,0x55,0x65,0x6c,0x6d}},








	{ .i1 = { 0x67,0x5a,0x47,0x5c,0x67,0x5e,0x11,0x60}},








	{ .i1 = { 0x6e,0x6f,0x08,0x16,0x47,0x4b,0x08,0x67}},








	{ .i1 = { 0x0e,0x6a,0x6b,0x11,0x12,0x13,0x49,0x11}},








	{ .i1 = { 0x47,0x17,0x18,0x59,0x5a,0x76,0x5c,0x48}},








	{ .i1 = { 0x5e,0x7a,0x4b,0x4c,0x4d,0x4e,0x56,0x47}},








	{ .i1 = { 0x47,0x52,0x53,0x54,0x55,0x50,0x47,0x47}},








	{ .i1 = { 0x1a,0x5a,0x65,0x5c,0x06,0x5e,0x48,0x60}},








	{ .i1 = { 0x4b,0x4b,0x4c,0x4d,0x4e,0x3b,0x3c,0x06}},








	{ .i1 = { 0x11,0x6a,0x6b,0x55,0x1f,0x2e,0x59,0x5a}},








	{ .i1 = { 0x5a,0x5c,0x5c,0x5e,0x5e,0x76,0x60,0x04}},








	{ .i1 = { 0x16,0x7a,0x16,0x10,0x06,0x14,0x0a,0x69}},








	{ .i1 = { 0x6a,0x6b,0x48,0x42,0x4b,0x4b,0x4c,0x4d}},








	{ .i1 = { 0x4e,0x19,0x19,0x06,0x76,0x16,0x16,0x55}},








	{ .i1 = { 0x7a,0x2e,0x04,0x5a,0x5a,0x5c,0x5c,0x5e}},








	{ .i1 = { 0x5e,0x06,0x60,0x48,0x04,0x64,0x4b,0x4c}},








	{ .i1 = { 0x4d,0x4e,0x29,0x69,0x6a,0x6b,0x10,0x16}},








	{ .i1 = { 0x55,0x19,0x16,0x16,0x02,0x5a,0x42,0x5c}},








	{ .i1 = { 0x76,0x5e,0x48,0x60,0x7a,0x4b,0x4c,0x4d}},








	{ .i1 = { 0x4e,0x16,0x21,0x16,0x69,0x6a,0x6b,0x55}},








	{ .i1 = { 0x4b,0x02,0x04,0x16,0x5a,0x2e,0x5c,0x41}},








	{ .i1 = { 0x5e,0x76,0x60,0x0a,0x0c,0x7a,0x4b,0x5a}},








	{ .i1 = { 0x1a,0x5c,0x16,0x5e,0x6a,0x6b,0x30,0x05}},








	{ .i1 = { 0x0e,0x16,0x10,0x11,0x0d,0x5a,0x0d,0x5c}},








	{ .i1 = { 0x76,0x5e,0x04,0x2e,0x7a,0x1b,0x4b,0x4b}},








	{ .i1 = { 0x10,0x1f,0x3c,0x21,0x22,0x21,0x24,0x10}},








	{ .i1 = { 0x16,0x7d,0x28,0x29,0x7d,0x5a,0x5a,0x5c}},








	{ .i1 = { 0x5c,0x5e,0x5e,0x7d,0x4b,0x0e,0x0f,0x10}},








	{ .i1 = { 0x11,0x7d,0x7d,0x4b,0x7d,0x7d,0x3c,0x3d}},








	{ .i1 = { 0x3e,0x7d,0x1b,0x5a,0x7d,0x5c,0x44,0x5e}},








	{ .i1 = { 0x21,0x22,0x5a,0x24,0x5c,0x7d,0x5e,0x28}},








	{ .i1 = { 0x29,0x7d,0x7d,0x7d,0x7d,0x04,0x7d,0x4b}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x0e}},








	{ .i1 = { 0x7d,0x10,0x11,0x3c,0x3d,0x3e,0x5a,0x7d}},








	{ .i1 = { 0x5c,0x09,0x5e,0x44,0x1b,0x7d,0x0e,0x7d}},








	{ .i1 = { 0x10,0x11,0x21,0x22,0x05,0x24,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x28,0x29,0x1b,0x7d,0x0e,0x7d,0x10}},








	{ .i1 = { 0x11,0x21,0x22,0x4b,0x24,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x28,0x29,0x1b,0x7d,0x7d,0x3c,0x3d,0x3e}},








	{ .i1 = { 0x21,0x22,0x5a,0x24,0x5c,0x44,0x5e,0x28}},








	{ .i1 = { 0x29,0x7d,0x7d,0x7d,0x3c,0x3d,0x3e,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x44,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x3c,0x3d,0x3e,0x7d,0x7d}},








	{ .i1 = { 0x04,0x7d,0x7d,0x44,0x08,0x7d,0x4b,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x0e,0x7d,0x7d,0x11,0x12,0x13}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x17,0x18,0x5a,0x08,0x5c}},








	{ .i1 = { 0x7d,0x5e,0x7d,0x7d,0x0e,0x7d,0x7d,0x11}},








	{ .i1 = { 0x12,0x13,0x7d,0x7d,0x7d,0x17,0x18,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x4b,0x4b,0x7d,0x31,0x32,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x4b,0x4b,0x7d,0x39,0x3a,0x3b}},








	{ .i1 = { 0x3c,0x5a,0x5a,0x5c,0x5c,0x5e,0x5e,0x31}},








	{ .i1 = { 0x32,0x5a,0x5a,0x5c,0x5c,0x5e,0x5e,0x39}},








	{ .i1 = { 0x3a,0x3b,0x3c,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x42,0x08,0x7d,0x7d,0x7d,0x7d,0x7d,0x0e}},








	{ .i1 = { 0x7d,0x7d,0x11,0x12,0x13,0x02,0x7d,0x16}},








	{ .i1 = { 0x17,0x18,0x7d,0x08,0x7d,0x4b,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x0e,0x7d,0x7d,0x11,0x12,0x13,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x17,0x18,0x5a,0x7d,0x5c,0x4b}},








	{ .i1 = { 0x5e,0x7d,0x31,0x32,0x7d,0x7d,0x7d,0x4b}},








	{ .i1 = { 0x7d,0x7d,0x39,0x3a,0x3b,0x3c,0x5a,0x7d}},








	{ .i1 = { 0x5c,0x4b,0x5e,0x7d,0x31,0x32,0x5a,0x4b}},








	{ .i1 = { 0x5c,0x7d,0x5e,0x7d,0x39,0x3a,0x3b,0x3c}},








	{ .i1 = { 0x5a,0x7d,0x5c,0x7d,0x5e,0x08,0x5a,0x7d}},








	{ .i1 = { 0x5c,0x7d,0x5e,0x0e,0x7d,0x7d,0x11,0x12}},








	{ .i1 = { 0x13,0x7d,0x7d,0x16,0x17,0x18,0x05,0x7d}},








	{ .i1 = { 0x7d,0x08,0x7d,0x7d,0x7d,0x7d,0x7d,0x0e}},








	{ .i1 = { 0x7d,0x4b,0x11,0x12,0x13,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x17,0x18,0x7d,0x4b,0x4b,0x7d,0x31,0x32}},








	{ .i1 = { 0x5a,0x7d,0x5c,0x7d,0x5e,0x7d,0x39,0x3a}},








	{ .i1 = { 0x3b,0x3c,0x5a,0x5a,0x5c,0x5c,0x5e,0x5e}},








	{ .i1 = { 0x7d,0x7d,0x31,0x32,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x39,0x3a,0x3b,0x3c,0x7d,0x7d}},








	{ .i1 = { 0x05,0x7d,0x7d,0x08,0x7d,0x7d,0x7d,0x4b}},








	{ .i1 = { 0x7d,0x0e,0x7d,0x7d,0x11,0x12,0x13,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x17,0x18,0x7d,0x08,0x5a,0x7d}},








	{ .i1 = { 0x5c,0x7d,0x5e,0x0e,0x7d,0x7d,0x11,0x12}},








	{ .i1 = { 0x13,0x7d,0x7d,0x16,0x17,0x18,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x4b,0x7d,0x31,0x32,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x4b,0x7d,0x39,0x3a,0x3b,0x3c}},








	{ .i1 = { 0x7d,0x5a,0x7d,0x5c,0x7d,0x5e,0x31,0x32}},








	{ .i1 = { 0x7d,0x5a,0x7d,0x5c,0x7d,0x5e,0x39,0x3a}},








	{ .i1 = { 0x3b,0x3c,0x7d,0x7d,0x4b,0x0e,0x7d,0x10}},








	{ .i1 = { 0x11,0x7d,0x7d,0x4b,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x1b,0x5a,0x7d,0x5c,0x7d,0x5e}},








	{ .i1 = { 0x21,0x22,0x5a,0x24,0x5c,0x7d,0x5e,0x28}},








	{ .i1 = { 0x29,0x08,0x7d,0x7d,0x7d,0x7d,0x7d,0x0e}},








	{ .i1 = { 0x7d,0x4b,0x11,0x12,0x13,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x17,0x18,0x7d,0x3c,0x3d,0x3e,0x7d,0x7d}},








	{ .i1 = { 0x5a,0x08,0x5c,0x44,0x5e,0x4b,0x7d,0x0e}},








	{ .i1 = { 0x7d,0x7d,0x11,0x12,0x13,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x17,0x18,0x31,0x32,0x5a,0x7d,0x5c,0x7d}},








	{ .i1 = { 0x5e,0x08,0x39,0x3a,0x3b,0x3c,0x7d,0x0e}},








	{ .i1 = { 0x7d,0x7d,0x11,0x12,0x13,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x17,0x18,0x7d,0x32,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x39,0x3a,0x3b,0x3c,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x39,0x3a,0x3b,0x3c,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d,0x7d}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},





	{ .i1 = { 0x46,0x46,0x46,0x46}},
};
static data f3___main_s05d2[] = {




	{ .i1 = { 0xee,0x04,0x00,0x00,0x00,0x00,0x42,0x00}},




	{ .i1 = { 0x42,0x00,0x42,0x00,0x84,0x00,0xc6,0x00}},




	{ .i1 = { 0x08,0x01,0x4a,0x01,0x4a,0x01,0x8a,0x02}},




	{ .i1 = { 0x8a,0x02,0xaf,0x02,0x8a,0x02,0xaf,0x02}},




	{ .i1 = { 0xd9,0x02,0x5f,0x04,0xe8,0x02,0xaf,0x02}},




	{ .i1 = { 0xaf,0x02,0xaf,0x02,0xaf,0x02,0xaf,0x02}},




	{ .i1 = { 0xf7,0x02,0x5f,0x04,0x5f,0x04,0x5f,0x04}},




	{ .i1 = { 0x5f,0x04,0x5f,0x04,0x5f,0x04,0x5f,0x04}},




	{ .i1 = { 0x5f,0x04,0x5f,0x04,0x5f,0x04,0x5f,0x04}},




	{ .i1 = { 0x5f,0x04,0x5f,0x04,0x5f,0x04,0x5f,0x04}},




	{ .i1 = { 0x5f,0x04,0x5f,0x04,0x5f,0x04,0x5f,0x04}},




	{ .i1 = { 0x5f,0x04,0x5f,0x04,0x5f,0x04,0x5f,0x04}},




	{ .i1 = { 0x5f,0x04,0x5f,0x04,0x5f,0x04,0x5f,0x04}},




	{ .i1 = { 0x5f,0x04,0x5f,0x04,0x5f,0x04,0x5f,0x04}},




	{ .i1 = { 0x5f,0x04,0x5f,0x04,0x5f,0x04,0x5f,0x04}},




	{ .i1 = { 0x8d,0x01,0x8d,0x01,0x5b,0x00,0x5b,0x00}},




	{ .i1 = { 0x86,0x00,0x0d,0x00,0x0d,0x00,0x07,0x00}},




	{ .i1 = { 0x07,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x3b,0x00,0xdf,0x00}},




	{ .i1 = { 0xbf,0x00,0xbf,0x00,0xbf,0x00,0x21,0x00}},




	{ .i1 = { 0x60,0x00,0xb4,0x00,0x60,0x00,0x60,0x00}},




	{ .i1 = { 0x81,0x00,0x45,0x00,0xf5,0x00,0xf6,0x00}},




	{ .i1 = { 0xfb,0x00,0xfb,0x00,0x07,0x00,0x3a,0x01}},




	{ .i1 = { 0x3a,0x01,0x3a,0x01,0x60,0x00,0x3a,0x01}},




	{ .i1 = { 0x60,0x00,0xee,0x04,0xee,0x04,0xee,0x04}},




	{ .i1 = { 0xee,0x04,0xee,0x04,0xee,0x04,0xee,0x04}},




	{ .i1 = { 0xee,0x04,0xee,0x04,0xee,0x04,0xee,0x04}},




	{ .i1 = { 0xee,0x04,0xee,0x04,0xee,0x04,0x88,0x01}},




	{ .i1 = { 0x9a,0x01,0x34,0x03,0x46,0x03,0x81,0x03}},




	{ .i1 = { 0x93,0x03,0xcd,0x03,0xe1,0x03,0x1b,0x04}},




	{ .i1 = { 0x34,0x03,0x2d,0x04,0x81,0x04,0x81,0x04}},




	{ .i1 = { 0x81,0x04,0x81,0x04,0x81,0x04,0x81,0x04}},




	{ .i1 = { 0x81,0x04,0x81,0x04,0x81,0x04,0x81,0x04}},




	{ .i1 = { 0x99,0x04,0xb1,0x04,0xea,0x01,0xea,0x01}},




	{ .i1 = { 0x1e,0x00,0x1e,0x00,0x1e,0x00,0xe4,0x00}},




	{ .i1 = { 0xe4,0x00,0xe4,0x00,0x47,0x00,0x55,0x01}},




	{ .i1 = { 0x79,0x00,0x77,0x01,0xb8,0x00,0xfa,0x00}},




	{ .i1 = { 0x15,0x01,0x88,0x00,0x4e,0x01,0xdd,0x01}},




	{ .i1 = { 0x0f,0x00,0x9f,0x01,0x09,0x01,0xee,0x01}},




	{ .i1 = { 0xee,0x01,0xee,0x01,0xee,0x01,0xee,0x01}},




	{ .i1 = { 0xee,0x01,0x09,0x00,0xfe,0x01,0x16,0x02}},




	{ .i1 = { 0x21,0x02,0x17,0x02,0xff,0x01,0x22,0x02}},




	{ .i1 = { 0x24,0x02,0x0d,0x02,0x17,0x02,0x33,0x02}},




	{ .i1 = { 0x2b,0x02,0x36,0x02,0x29,0x02,0x34,0x02}},




	{ .i1 = { 0x01,0x02,0x30,0x02,0x31,0x02,0x37,0x02}},




	{ .i1 = { 0x38,0x02,0x17,0x02,0x45,0x02,0x23,0x02}},




	{ .i1 = { 0x4e,0x02,0x53,0x02,0x58,0x02,0x39,0x02}},




	{ .i1 = { 0x56,0x02,0x50,0x02,0x51,0x02,0x54,0x02}},




	{ .i1 = { 0x55,0x02,0x6a,0x02,0x63,0x02,0x2c,0x02}},




	{ .i1 = { 0x59,0x02,0x65,0x02,0x7f,0x02,0x7e,0x02}},




	{ .i1 = { 0x57,0x02,0x6d,0x02,0x46,0x02,0x80,0x02}},




	{ .i1 = { 0x81,0x02,0x76,0x02,0x7c,0x02,0x83,0x02}},




	{ .i1 = { 0x66,0x02,0x8f,0x02,0x91,0x02,0x92,0x02}},




	{ .i1 = { 0x9e,0x02,0x75,0x02,0x98,0x02,0x6e,0x02}},




	{ .i1 = { 0x8c,0x02,0x17,0x02,0x9f,0x02,0x9a,0x02}},

};
static data f3___main_s05d3[] = {




	{ .i1 = { 0x0e,0x00,0x8f,0x01,0xbf,0x01,0xd6,0x01}},




	{ .i1 = { 0xfa,0x01,0x13,0x02,0x2a,0x02,0x2a,0x02}},




	{ .i1 = { 0x2a,0x02,0x2a,0x02,0x2a,0x02,0x9a,0x00}},




	{ .i1 = { 0xdc,0x00,0x16,0x00,0x1f,0x01,0x58,0x00}},




	{ .i1 = { 0x17,0x00,0x59,0x00,0xa0,0x00,0xec,0xff}},




	{ .i1 = { 0x70,0x00,0xb2,0x00,0xf4,0x00,0x1e,0x01}},




	{ .i1 = { 0xe2,0x00,0x25,0x01,0x6c,0x01,0xf9,0x01}},




	{ .i1 = { 0xd5,0x01,0x47,0x01,0xaa,0x01,0x35,0x01}},




	{ .i1 = { 0x35,0x02,0x43,0x02,0x5b,0x02,0x5c,0x02}},




	{ .i1 = { 0x71,0x02,0x78,0x02,0x94,0x02,0xc0,0x02}},




	{ .i1 = { 0xf3,0x02,0x17,0x03,0x18,0x03,0x1f,0x03}},




	{ .i1 = { 0x20,0x03,0x52,0x03,0x64,0x03,0x6c,0x03}},




	{ .i1 = { 0x76,0x03,0x7c,0x03,0xa6,0x03,0xb0,0x03}},




	{ .i1 = { 0xb1,0x03,0xdc,0x03,0xff,0x03,0x07,0x04}},




	{ .i1 = { 0x21,0x04,0x28,0x04,0x46,0x04,0x5a,0x04}},




	{ .i1 = { 0xa6,0xff,0xac,0xff,0xb6,0xff,0xbe,0xff}},




	{ .i1 = { 0xb2,0xff,0x46,0x00,0x41,0x01,0x72,0x01}},




	{ .i1 = { 0x7a,0x01,0xea,0xff,0x03,0x00,0x30,0x00}},




	{ .i1 = { 0x3e,0x00,0x3f,0x00,0x4d,0x00,0x74,0x00}},




	{ .i1 = { 0x7c,0x00,0xd1,0x00,0x6f,0x00,0xa8,0x00}},




	{ .i1 = { 0xe6,0x00,0x01,0x01,0x39,0x01,0x87,0x00}},




	{ .i1 = { 0x53,0x01,0x82,0x01,0x80,0x01,0xb5,0x01}},




	{ .i1 = { 0x9d,0xff,0x2d,0x00,0x94,0x00,0xdd,0x00}},




	{ .i1 = { 0xe7,0x00,0xf9,0x00,0xda,0x00,0x10,0x01}},




	{ .i1 = { 0x23,0x01,0x2a,0x01,0x44,0x01,0x4b,0x01}},




	{ .i1 = { 0x7e,0x01,0x21,0x01,0x92,0x01,0x81,0x01}},




	{ .i1 = { 0xa3,0x01,0x85,0x01,0xad,0x01,0x90,0x01}},




	{ .i1 = { 0xb9,0x01,0xb8,0x01,0xc8,0x01,0xc9,0x01}},




	{ .i1 = { 0xc5,0x01,0xcf,0x01,0xd0,0x01}},
};
static data f3___main_s05d4[] = {




	{ .i1 = { 0x43,0x02,0xda,0x01,0xda,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0x4a,0x02,0x46,0x02,0x55,0x02}},




	{ .i1 = { 0x55,0x02,0xc8,0x01,0x55,0x02,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0x39,0x02}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0x51,0x02,0x51,0x02,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0x35,0x02,0x50,0x02,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0x43,0x02,0x43,0x02,0x4f,0x02}},




	{ .i1 = { 0x43,0x02,0x4f,0x02,0x43,0x02,0x4f,0x02}},




	{ .i1 = { 0x43,0x02,0x48,0x02,0x43,0x02,0x43,0x02}},




	{ .i1 = { 0xd8,0x01,0x43,0x02,0x43,0x02,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0x20,0x02,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0x3a,0x02,0x20,0x02}},




	{ .i1 = { 0xea,0x01,0xe9,0x01,0xe8,0x01,0xe7,0x01}},




	{ .i1 = { 0xe6,0x01,0xe5,0x01,0x1c,0x02,0x06,0x02}},




	{ .i1 = { 0xf7,0x01,0xf5,0x01,0xf9,0x01,0xf8,0x01}},




	{ .i1 = { 0xf0,0x01,0xf1,0x01,0xee,0x01,0xf2,0x01}},




	{ .i1 = { 0xf4,0x01,0xf3,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xd9,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xfe,0x01}},




	{ .i1 = { 0xfd,0x01,0xfc,0x01,0xfb,0x01,0xf6,0x01}},




	{ .i1 = { 0xef,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0x23,0x02,0x56,0x02,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0x33,0x02,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0x30,0x02,0xc8,0x01,0x2e,0x02}},




	{ .i1 = { 0xc8,0x01,0x29,0x02,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0x14,0x02,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0x1f,0x02}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xe3,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xc8,0x01,0xc8,0x01,0xc8,0x01}},




	{ .i1 = { 0xc8,0x01,0xfa,0x01,0xed,0x01,0xc8,0x01}},

};
const i1 c02_s011f[] = { 0x24,0 };
const i1 c02_s0120[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s0121[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s0122[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s0123[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0124[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s0125[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0126[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s0127[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s0128[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s0129[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s012a[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s012b[] = { 0x49,0x46,0 };
const i1 c02_s012c[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s012d[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s012e[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s012f[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0130[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s0131[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s0132[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s0133[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s0134[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s0135[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0136[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s0137[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s0138[] = { 0x53,0x55,0x42,0 };
const i1 c02_s0139[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s013a[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s013b[] = { 0x56,0x41,0x52,0 };
const i1 c02_s013c[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s013d[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s013e[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s013f[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s0140[] = { 0x49,0x44,0 };
const i1 c02_s0141[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s0142[] = { 0x41,0x54,0 };
const i1 c02_s0143[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s0144[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s0145[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s0146[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s0147[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s0148[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s0149[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c02_s014a[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c02_s014b[] = { 0x49,0x4e,0x54,0x45,0x52,0x46,0x41,0x43,0x45,0 };
const i1 c02_s014c[] = { 0x50,0x41,0x53,0x53,0x54,0x4f,0 };
const i1 c02_s014d[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s014e[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s014f[] = { 0x4f,0x52,0 };
const i1 c02_s0150[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s0151[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s0152[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s0153[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s0154[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s0155[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s0156[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s0157[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s0158[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s0159[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s015a[] = { 0x41,0x53,0 };
const i1 c02_s015b[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s015c[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s015d[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s015e[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s015f[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s0160[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s0161[] = { 0x49,0x53,0 };
const i1 c02_s0162[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s0163[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
const i1 c02_s0164[] = { 0x49,0x4d,0x50,0x4c,0x45,0x4d,0x45,0x4e,0x54,0x53,0 };
static data f3___main_s05d5[] = {

	{ .ptr = (void*)c02_s011f },

	{ .ptr = (void*)c02_s0120 },

	{ .ptr = (void*)c02_s0121 },

	{ .ptr = (void*)c02_s0122 },

	{ .ptr = (void*)c02_s0123 },

	{ .ptr = (void*)c02_s0124 },

	{ .ptr = (void*)c02_s0125 },

	{ .ptr = (void*)c02_s0126 },

	{ .ptr = (void*)c02_s0127 },

	{ .ptr = (void*)c02_s0128 },

	{ .ptr = (void*)c02_s0129 },

	{ .ptr = (void*)c02_s012a },

	{ .ptr = (void*)c02_s012b },

	{ .ptr = (void*)c02_s012c },

	{ .ptr = (void*)c02_s012d },

	{ .ptr = (void*)c02_s012e },

	{ .ptr = (void*)c02_s012f },

	{ .ptr = (void*)c02_s0130 },

	{ .ptr = (void*)c02_s0131 },

	{ .ptr = (void*)c02_s0132 },

	{ .ptr = (void*)c02_s0133 },

	{ .ptr = (void*)c02_s0134 },

	{ .ptr = (void*)c02_s0135 },

	{ .ptr = (void*)c02_s0136 },

	{ .ptr = (void*)c02_s0137 },

	{ .ptr = (void*)c02_s0138 },

	{ .ptr = (void*)c02_s0139 },

	{ .ptr = (void*)c02_s013a },

	{ .ptr = (void*)c02_s013b },

	{ .ptr = (void*)c02_s013c },

	{ .ptr = (void*)c02_s013d },

	{ .ptr = (void*)c02_s013e },

	{ .ptr = (void*)c02_s013f },

	{ .ptr = (void*)c02_s0140 },

	{ .ptr = (void*)c02_s0141 },

	{ .ptr = (void*)c02_s0142 },

	{ .ptr = (void*)c02_s0143 },

	{ .ptr = (void*)c02_s0144 },

	{ .ptr = (void*)c02_s0145 },

	{ .ptr = (void*)c02_s0146 },

	{ .ptr = (void*)c02_s0147 },

	{ .ptr = (void*)c02_s0148 },

	{ .ptr = (void*)c02_s0149 },

	{ .ptr = (void*)c02_s014a },

	{ .ptr = (void*)c02_s014b },

	{ .ptr = (void*)c02_s014c },

	{ .ptr = (void*)c02_s014d },

	{ .ptr = (void*)c02_s014e },

	{ .ptr = (void*)c02_s014f },

	{ .ptr = (void*)c02_s0150 },

	{ .ptr = (void*)c02_s0151 },

	{ .ptr = (void*)c02_s0152 },

	{ .ptr = (void*)c02_s0153 },

	{ .ptr = (void*)c02_s0154 },

	{ .ptr = (void*)c02_s0155 },

	{ .ptr = (void*)c02_s0156 },

	{ .ptr = (void*)c02_s0157 },

	{ .ptr = (void*)c02_s0158 },

	{ .ptr = (void*)c02_s0159 },

	{ .ptr = (void*)c02_s015a },

	{ .ptr = (void*)c02_s015b },

	{ .ptr = (void*)c02_s015c },

	{ .ptr = (void*)c02_s015d },

	{ .ptr = (void*)c02_s015e },

	{ .ptr = (void*)c02_s015f },

	{ .ptr = (void*)c02_s0160 },

	{ .ptr = (void*)c02_s0161 },

	{ .ptr = (void*)c02_s0162 },

	{ .ptr = (void*)c02_s0163 },

	{ .ptr = (void*)c02_s0164 },

};
const i1 c02_s0165[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };
	void f12_print(void);
	void f34_Free(void);

// token_destructor workspace at ws+3512 length ws+0
void f303_token_destructor(void) {

	i8 v7452 = (i8)(intptr_t)(ws+3496);
	i1 v7453 = *(i1*)(intptr_t)v7452;
	i1 v7454 = (i1)+41;
	if (v7453==v7454) goto c02_05db; else goto c02_05dd;

c02_05dd:;

	i8 v7455 = (i8)(intptr_t)(ws+3496);
	i1 v7456 = *(i1*)(intptr_t)v7455;
	i1 v7457 = (i1)+33;
	if (v7456==v7457) goto c02_05db; else goto c02_05dc;

c02_05db:;

	i8 v7458 = (i8)(intptr_t)c02_s0165;
	*(i8*)(intptr_t)(ws+3696) = v7458;
	i8 v7459 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7459)();

	i8 v7460 = (i8)(intptr_t)(ws+3504);
	i8 v7461 = *(i8*)(intptr_t)v7460;
	i8 v7462 = *(i8*)(intptr_t)v7461;
	*(i8*)(intptr_t)(ws+3680) = v7462;
	i8 v7463 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7463)();

c02_05dc:;

c02_05d6:;

}
	void f303_token_destructor(void);

// yy_destructor workspace at ws+3496 length ws+16
void f302_yy_destructor(void) {


	i8 v7464 = (i8)(intptr_t)(ws+3496);
	i1 v7465 = *(i1*)(intptr_t)v7464;
	i1 v7466 = (i1)+0;
	if (v7465==v7466) goto c02_05e4; else goto c02_05e5;

c02_05e5:;

	i8 v7467 = (i8)(intptr_t)(ws+3496);
	i1 v7468 = *(i1*)(intptr_t)v7467;
	i1 v7469 = (i1)+70;
	if (v7468<v7469) goto c02_05e3; else goto c02_05e4;

c02_05e3:;

	i8 v7470 = (i8)(intptr_t)(f303_token_destructor);

	((void(*)(void))(intptr_t)v7470)();

c02_05e4:;

c02_05de:;

}
	void f302_yy_destructor(void);

// yy_pop_parser_stack workspace at ws+3384 length ws+0
void f304_yy_pop_parser_stack(void) {

	i8 v7471 = (i8)(intptr_t)(ws+1568);
	i8 v7472 = *(i8*)(intptr_t)v7471;
	i8 v7473 = v7472+(-16);
	i8 v7474 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7474 = v7473;

	i8 v7475 = (i8)(intptr_t)(ws+1568);
	i8 v7476 = *(i8*)(intptr_t)v7475;
	i8 v7477 = v7476+(+2);
	i1 v7478 = *(i1*)(intptr_t)v7477;
	*(i1*)(intptr_t)(ws+3496) = v7478;
	i8 v7479 = (i8)(intptr_t)(ws+1568);
	i8 v7480 = *(i8*)(intptr_t)v7479;
	i8 v7481 = v7480+(+8);
	*(i8*)(intptr_t)(ws+3504) = v7481;
	i8 v7482 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7482)();

}
	void f304_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3384 length ws+0
void f305_yy_pop_all_parser_stack(void) {

c02_05e6:;

	i8 v7483 = (i8)(intptr_t)(ws+1568);
	i8 v7484 = *(i8*)(intptr_t)v7483;
	i8 v7485 = (i8)(intptr_t)(ws+1576);
	if (v7484==v7485) goto c02_05eb; else goto c02_05ea;

c02_05ea:;

	i8 v7486 = (i8)(intptr_t)(f304_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v7486)();

	goto c02_05e6;

c02_05eb:;

}
	void f305_yy_pop_all_parser_stack(void);
	void f74_StartError(void);
const i1 c02_s0166[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f12_print(void);
	void f75_EndError(void);

// yy_stack_overflow workspace at ws+3384 length ws+0
void f306_yy_stack_overflow(void) {

	i8 v7487 = (i8)(intptr_t)(f305_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v7487)();

	i8 v7488 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7488)();

	i8 v7489 = (i8)(intptr_t)c02_s0166;
	*(i8*)(intptr_t)(ws+3696) = v7489;
	i8 v7490 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7490)();

	i8 v7491 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7491)();

}
static data f3___main_s05ec[] = {








	{ .i1 = { 0x48,0x48,0x48,0x48,0x48,0x48,0x4c,0x48}},








	{ .i1 = { 0x4e,0x4d,0x48,0x48,0x48,0x50,0x51,0x52}},








	{ .i1 = { 0x53,0x54,0x48,0x55,0x58,0x58,0x4f,0x4f}},








	{ .i1 = { 0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f}},








	{ .i1 = { 0x5a,0x5a,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b}},








	{ .i1 = { 0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x4b}},








	{ .i1 = { 0x4b,0x4b,0x4b,0x4b,0x4b,0x4b,0x5a,0x5a}},








	{ .i1 = { 0x4b,0x4b,0x5a,0x59,0x48,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x48,0x49,0x5c,0x5d,0x5b}},








	{ .i1 = { 0x5b,0x4b,0x48,0x48,0x5e,0x5f,0x5f,0x61}},








	{ .i1 = { 0x61,0x62,0x60,0x63,0x63,0x64,0x48,0x48}},








	{ .i1 = { 0x6b,0x67,0x65,0x6a,0x68,0x69,0x66,0x66}},








	{ .i1 = { 0x6c,0x6d,0x6d,0x6e,0x6e,0x6f,0x48,0x70}},








	{ .i1 = { 0x71,0x73,0x75,0x75,0x74,0x48,0x76,0x78}},








	{ .i1 = { 0x78,0x79,0x48,0x7a,0x7c,0x7c,0x7c,0x46}},








	{ .i1 = { 0x47,0x47,0x48,0x52,0x52,0x56,0x56,0x57}},








	{ .i1 = { 0x48,0x48,0x48,0x48,0x67,0x71,0x72,0x72}},






	{ .i1 = { 0x77,0x77,0x78,0x7b,0x7b}},
};
static data f3___main_s05ed[] = {








	{ .i1 = { 0x02,0x05,0x07,0x05,0x04,0x04,0x01,0x04}},








	{ .i1 = { 0x01,0x03,0x02,0x02,0x08,0x00,0x01,0x00}},








	{ .i1 = { 0x01,0x01,0x05,0x03,0x03,0x03,0x03,0x02}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x01,0x03,0x01,0x02,0x02,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x02,0x03,0x02,0x02,0x02,0x02,0x01,0x03}},








	{ .i1 = { 0x04,0x03,0x01,0x01,0x05,0x06,0x01,0x03}},








	{ .i1 = { 0x04,0x03,0x02,0x05,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x03,0x02,0x03,0x05,0x01,0x03,0x02,0x01}},








	{ .i1 = { 0x03,0x01,0x05,0x01,0x03,0x01,0x04,0x05}},








	{ .i1 = { 0x04,0x05,0x01,0x03,0x01,0x02,0x01,0x03}},








	{ .i1 = { 0x01,0x02,0x03,0x01,0x03,0x03,0x07,0x01}},








	{ .i1 = { 0x02,0x05,0x00,0x04,0x01,0x05,0x05,0x01}},








	{ .i1 = { 0x03,0x01,0x03,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x00,0x02,0x01,0x02,0x05,0x00,0x02,0x02}},








	{ .i1 = { 0x08,0x06,0x05,0x05,0x00,0x00,0x00,0x02}},






	{ .i1 = { 0x01,0x03,0x00,0x01,0x03}},
};
	void f31_MemCopy(void);

// CopyMinor workspace at ws+3384 length ws+16
void f308_CopyMinor(void) {

	i8 v7514 = (i8)(intptr_t)(ws+3384);
	i8 v7515 = *(i8*)(intptr_t)v7514;
	*(i8*)(intptr_t)(ws+3576) = v7515;
	i8 v7516 = (i8)+8;
	*(i8*)(intptr_t)(ws+3584) = v7516;
	i8 v7517 = (i8)(intptr_t)(ws+3392);
	i8 v7518 = *(i8*)(intptr_t)v7517;
	*(i8*)(intptr_t)(ws+3592) = v7518;
	i8 v7519 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v7519)();

}
	void f306_yy_stack_overflow(void);
	void f308_CopyMinor(void);

// Reducer workspace at ws+3384 length ws+0
void f310_Reducer(void) {

}
	void f147_MidReturn(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);

// reduce_0 workspace at ws+3384 length ws+8
void f311_reduce_0(void) {

	i8 v7558 = (i8)(intptr_t)(f147_MidReturn);

	((void(*)(void))(intptr_t)v7558)();

	i8 v7559 = *(i8*)(intptr_t)(ws+3392);
	i8 v7560 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7560 = v7559;

	i8 v7561 = (i8)(intptr_t)(ws+3384);
	i8 v7562 = *(i8*)(intptr_t)v7561;
	*(i8*)(intptr_t)(ws+3488) = v7562;
	i8 v7563 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7563)();

	i1 v7564 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7564;
	i8 v7565 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7565;
	i8 v7566 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7566)();

}
	void f262_InitVariable(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_1 workspace at ws+3384 length ws+0
void f312_reduce_1(void) {

	i8 v7567 = (i8)(intptr_t)(ws+40);
	i8 v7568 = *(i8*)(intptr_t)v7567;
	*(i8*)(intptr_t)(ws+3488) = v7568;
	i8 v7569 = (i8)(intptr_t)(ws+3328);
	i8 v7570 = *(i8*)(intptr_t)v7569;
	*(i8*)(intptr_t)(ws+3496) = v7570;
	i8 v7571 = (i8)(intptr_t)(ws+3312);
	i8 v7572 = *(i8*)(intptr_t)v7571;
	*(i8*)(intptr_t)(ws+3504) = v7572;
	i8 v7573 = (i8)(intptr_t)(f262_InitVariable);

	((void(*)(void))(intptr_t)v7573)();

	i1 v7574 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v7574;
	i8 v7575 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7575;
	i8 v7576 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7576)();

	i1 v7577 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7577;
	i8 v7578 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7578;
	i8 v7579 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7579)();

}
	void f262_InitVariable(void);
	void f271_CheckExpressionType(void);
	void f165_MidAddress(void);
	void f134_MidDeref(void);
	void f162_MidStore(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_2 workspace at ws+3384 length ws+32
void f313_reduce_2(void) {

	i8 v7580 = (i8)(intptr_t)(ws+40);
	i8 v7581 = *(i8*)(intptr_t)v7580;
	*(i8*)(intptr_t)(ws+3488) = v7581;
	i8 v7582 = (i8)(intptr_t)(ws+3344);
	i8 v7583 = *(i8*)(intptr_t)v7582;
	*(i8*)(intptr_t)(ws+3496) = v7583;
	i8 v7584 = (i8)(intptr_t)(ws+3328);
	i8 v7585 = *(i8*)(intptr_t)v7584;
	*(i8*)(intptr_t)(ws+3504) = v7585;
	i8 v7586 = (i8)(intptr_t)(f262_InitVariable);

	((void(*)(void))(intptr_t)v7586)();

	i8 v7587 = (i8)(intptr_t)(ws+3312);
	i8 v7588 = *(i8*)(intptr_t)v7587;
	*(i8*)(intptr_t)(ws+3496) = v7588;
	i8 v7589 = (i8)(intptr_t)(ws+3344);
	i8 v7590 = *(i8*)(intptr_t)v7589;
	i8 v7591 = *(i8*)(intptr_t)v7590;
	i8 v7592 = *(i8*)(intptr_t)v7591;
	*(i8*)(intptr_t)(ws+3504) = v7592;
	i8 v7593 = (i8)(intptr_t)(f271_CheckExpressionType);

	((void(*)(void))(intptr_t)v7593)();

	i8 v7594 = (i8)(intptr_t)(ws+3312);
	i8 v7595 = *(i8*)(intptr_t)v7594;
	i8 v7596 = v7595+(+24);
	i8 v7597 = *(i8*)(intptr_t)v7596;
	i8 v7598 = v7597+(+48);
	i2 v7599 = *(i2*)(intptr_t)v7598;
	i1 v7600 = v7599;
	i8 v7601 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v7601 = v7600;

	i8 v7602 = (i8)(intptr_t)(ws+3344);
	i8 v7603 = *(i8*)(intptr_t)v7602;
	*(i8*)(intptr_t)(ws+3488) = v7603;
	i2 v7604 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v7604;
	i8 v7605 = (i8)(intptr_t)(f165_MidAddress);

	((void(*)(void))(intptr_t)v7605)();

	i8 v7606 = *(i8*)(intptr_t)(ws+3504);
	i8 v7607 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7607 = v7606;

	i8 v7608 = (i8)(intptr_t)(ws+3384);
	i1 v7609 = *(i1*)(intptr_t)v7608;
	*(i1*)(intptr_t)(ws+3544) = v7609;
	i8 v7610 = (i8)(intptr_t)(ws+3392);
	i8 v7611 = *(i8*)(intptr_t)v7610;
	*(i8*)(intptr_t)(ws+3552) = v7611;
	i8 v7612 = (i8)(intptr_t)(f134_MidDeref);

	((void(*)(void))(intptr_t)v7612)();

	i8 v7613 = *(i8*)(intptr_t)(ws+3560);
	i8 v7614 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7614 = v7613;

	i8 v7615 = (i8)(intptr_t)(ws+3384);
	i1 v7616 = *(i1*)(intptr_t)v7615;
	*(i1*)(intptr_t)(ws+3488) = v7616;
	i8 v7617 = (i8)(intptr_t)(ws+3312);
	i8 v7618 = *(i8*)(intptr_t)v7617;
	*(i8*)(intptr_t)(ws+3496) = v7618;
	i8 v7619 = (i8)(intptr_t)(ws+3400);
	i8 v7620 = *(i8*)(intptr_t)v7619;
	*(i8*)(intptr_t)(ws+3504) = v7620;
	i8 v7621 = (i8)(intptr_t)(f162_MidStore);

	((void(*)(void))(intptr_t)v7621)();

	i8 v7622 = *(i8*)(intptr_t)(ws+3512);
	i8 v7623 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7623 = v7622;

	i8 v7624 = (i8)(intptr_t)(ws+3408);
	i8 v7625 = *(i8*)(intptr_t)v7624;
	*(i8*)(intptr_t)(ws+3488) = v7625;
	i8 v7626 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7626)();

	i1 v7627 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v7627;
	i8 v7628 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v7628;
	i8 v7629 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7629)();

	i1 v7630 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v7630;
	i8 v7631 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7631;
	i8 v7632 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7632)();

	i1 v7633 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7633;
	i8 v7634 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7634;
	i8 v7635 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7635)();

}
const i1 c02_s0169[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);
	void f232_IsScalar(void);
const i1 c02_s016a[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(void);
	void f262_InitVariable(void);
	void f271_CheckExpressionType(void);
	void f165_MidAddress(void);
	void f134_MidDeref(void);
	void f162_MidStore(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_3 workspace at ws+3384 length ws+40
void f314_reduce_3(void) {

	i8 v7636 = (i8)(intptr_t)(ws+3312);
	i8 v7637 = *(i8*)(intptr_t)v7636;
	i8 v7638 = v7637+(+24);
	i8 v7639 = *(i8*)(intptr_t)v7638;
	i8 v7640 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7640 = v7639;

	i8 v7641 = (i8)(intptr_t)(ws+3384);
	i8 v7642 = *(i8*)(intptr_t)v7641;
	i8 v7643 = (i8)+0;
	if (v7642==v7643) goto c02_05fc; else goto c02_05fd;

c02_05fc:;

	i8 v7644 = (i8)(intptr_t)c02_s0169;
	*(i8*)(intptr_t)(ws+3648) = v7644;
	i8 v7645 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7645)();

c02_05fd:;

c02_05f9:;

	i8 v7646 = (i8)(intptr_t)(ws+3384);
	i8 v7647 = *(i8*)(intptr_t)v7646;
	*(i8*)(intptr_t)(ws+3544) = v7647;
	i8 v7648 = (i8)(intptr_t)(f232_IsScalar);

	((void(*)(void))(intptr_t)v7648)();

	i1 v7649 = *(i1*)(intptr_t)(ws+3552);
	i8 v7650 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v7650 = v7649;

	i8 v7651 = (i8)(intptr_t)(ws+3392);
	i1 v7652 = *(i1*)(intptr_t)v7651;
	i1 v7653 = (i1)+0;
	if (v7652==v7653) goto c02_0601; else goto c02_0602;

c02_0601:;

	i8 v7654 = (i8)(intptr_t)c02_s016a;
	*(i8*)(intptr_t)(ws+3648) = v7654;
	i8 v7655 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7655)();

c02_0602:;

c02_05fe:;

	i8 v7656 = (i8)(intptr_t)(ws+40);
	i8 v7657 = *(i8*)(intptr_t)v7656;
	*(i8*)(intptr_t)(ws+3488) = v7657;
	i8 v7658 = (i8)(intptr_t)(ws+3328);
	i8 v7659 = *(i8*)(intptr_t)v7658;
	*(i8*)(intptr_t)(ws+3496) = v7659;
	i8 v7660 = (i8)(intptr_t)(ws+3384);
	i8 v7661 = *(i8*)(intptr_t)v7660;
	*(i8*)(intptr_t)(ws+3504) = v7661;
	i8 v7662 = (i8)(intptr_t)(f262_InitVariable);

	((void(*)(void))(intptr_t)v7662)();

	i8 v7663 = (i8)(intptr_t)(ws+3312);
	i8 v7664 = *(i8*)(intptr_t)v7663;
	*(i8*)(intptr_t)(ws+3496) = v7664;
	i8 v7665 = (i8)(intptr_t)(ws+3328);
	i8 v7666 = *(i8*)(intptr_t)v7665;
	i8 v7667 = *(i8*)(intptr_t)v7666;
	i8 v7668 = *(i8*)(intptr_t)v7667;
	*(i8*)(intptr_t)(ws+3504) = v7668;
	i8 v7669 = (i8)(intptr_t)(f271_CheckExpressionType);

	((void(*)(void))(intptr_t)v7669)();

	i8 v7670 = (i8)(intptr_t)(ws+3312);
	i8 v7671 = *(i8*)(intptr_t)v7670;
	i8 v7672 = v7671+(+24);
	i8 v7673 = *(i8*)(intptr_t)v7672;
	i8 v7674 = v7673+(+48);
	i2 v7675 = *(i2*)(intptr_t)v7674;
	i1 v7676 = v7675;
	i8 v7677 = (i8)(intptr_t)(ws+3393);
	*(i1*)(intptr_t)v7677 = v7676;

	i8 v7678 = (i8)(intptr_t)(ws+3328);
	i8 v7679 = *(i8*)(intptr_t)v7678;
	*(i8*)(intptr_t)(ws+3488) = v7679;
	i2 v7680 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v7680;
	i8 v7681 = (i8)(intptr_t)(f165_MidAddress);

	((void(*)(void))(intptr_t)v7681)();

	i8 v7682 = *(i8*)(intptr_t)(ws+3504);
	i8 v7683 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7683 = v7682;

	i8 v7684 = (i8)(intptr_t)(ws+3393);
	i1 v7685 = *(i1*)(intptr_t)v7684;
	*(i1*)(intptr_t)(ws+3544) = v7685;
	i8 v7686 = (i8)(intptr_t)(ws+3400);
	i8 v7687 = *(i8*)(intptr_t)v7686;
	*(i8*)(intptr_t)(ws+3552) = v7687;
	i8 v7688 = (i8)(intptr_t)(f134_MidDeref);

	((void(*)(void))(intptr_t)v7688)();

	i8 v7689 = *(i8*)(intptr_t)(ws+3560);
	i8 v7690 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7690 = v7689;

	i8 v7691 = (i8)(intptr_t)(ws+3393);
	i1 v7692 = *(i1*)(intptr_t)v7691;
	*(i1*)(intptr_t)(ws+3488) = v7692;
	i8 v7693 = (i8)(intptr_t)(ws+3312);
	i8 v7694 = *(i8*)(intptr_t)v7693;
	*(i8*)(intptr_t)(ws+3496) = v7694;
	i8 v7695 = (i8)(intptr_t)(ws+3408);
	i8 v7696 = *(i8*)(intptr_t)v7695;
	*(i8*)(intptr_t)(ws+3504) = v7696;
	i8 v7697 = (i8)(intptr_t)(f162_MidStore);

	((void(*)(void))(intptr_t)v7697)();

	i8 v7698 = *(i8*)(intptr_t)(ws+3512);
	i8 v7699 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7699 = v7698;

	i8 v7700 = (i8)(intptr_t)(ws+3416);
	i8 v7701 = *(i8*)(intptr_t)v7700;
	*(i8*)(intptr_t)(ws+3488) = v7701;
	i8 v7702 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7702)();

	i1 v7703 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v7703;
	i8 v7704 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7704;
	i8 v7705 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7705)();

	i1 v7706 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7706;
	i8 v7707 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7707;
	i8 v7708 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7708)();

}
	void f235_UndoLValue(void);
	void f271_CheckExpressionType(void);
	void f134_MidDeref(void);
	void f162_MidStore(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_4 workspace at ws+3384 length ws+48
void f315_reduce_4(void) {

	i8 v7709 = (i8)(intptr_t)(ws+3328);
	i8 v7710 = *(i8*)(intptr_t)v7709;
	i8 v7711 = v7710+(+24);
	i8 v7712 = *(i8*)(intptr_t)v7711;
	i8 v7713 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7713 = v7712;

	i8 v7714 = (i8)(intptr_t)(ws+3328);
	i8 v7715 = *(i8*)(intptr_t)v7714;
	*(i8*)(intptr_t)(ws+3432) = v7715;
	i8 v7716 = (i8)(intptr_t)(f235_UndoLValue);

	((void(*)(void))(intptr_t)v7716)();

	i8 v7717 = *(i8*)(intptr_t)(ws+3440);
	i8 v7718 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7718 = v7717;

	i8 v7719 = (i8)(intptr_t)(ws+3392);
	i8 v7720 = *(i8*)(intptr_t)v7719;
	i8 v7721 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7721 = v7720;

	i8 v7722 = (i8)(intptr_t)(ws+3312);
	i8 v7723 = *(i8*)(intptr_t)v7722;
	*(i8*)(intptr_t)(ws+3496) = v7723;
	i8 v7724 = (i8)(intptr_t)(ws+3384);
	i8 v7725 = *(i8*)(intptr_t)v7724;
	*(i8*)(intptr_t)(ws+3504) = v7725;
	i8 v7726 = (i8)(intptr_t)(f271_CheckExpressionType);

	((void(*)(void))(intptr_t)v7726)();

	i8 v7727 = (i8)(intptr_t)(ws+3384);
	i8 v7728 = *(i8*)(intptr_t)v7727;
	i8 v7729 = v7728+(+48);
	i2 v7730 = *(i2*)(intptr_t)v7729;
	i1 v7731 = v7730;
	i8 v7732 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v7732 = v7731;

	i8 v7733 = (i8)(intptr_t)(ws+3408);
	i1 v7734 = *(i1*)(intptr_t)v7733;
	*(i1*)(intptr_t)(ws+3544) = v7734;
	i8 v7735 = (i8)(intptr_t)(ws+3400);
	i8 v7736 = *(i8*)(intptr_t)v7735;
	*(i8*)(intptr_t)(ws+3552) = v7736;
	i8 v7737 = (i8)(intptr_t)(f134_MidDeref);

	((void(*)(void))(intptr_t)v7737)();

	i8 v7738 = *(i8*)(intptr_t)(ws+3560);
	i8 v7739 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7739 = v7738;

	i8 v7740 = (i8)(intptr_t)(ws+3408);
	i1 v7741 = *(i1*)(intptr_t)v7740;
	*(i1*)(intptr_t)(ws+3488) = v7741;
	i8 v7742 = (i8)(intptr_t)(ws+3312);
	i8 v7743 = *(i8*)(intptr_t)v7742;
	*(i8*)(intptr_t)(ws+3496) = v7743;
	i8 v7744 = (i8)(intptr_t)(ws+3416);
	i8 v7745 = *(i8*)(intptr_t)v7744;
	*(i8*)(intptr_t)(ws+3504) = v7745;
	i8 v7746 = (i8)(intptr_t)(f162_MidStore);

	((void(*)(void))(intptr_t)v7746)();

	i8 v7747 = *(i8*)(intptr_t)(ws+3512);
	i8 v7748 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v7748 = v7747;

	i8 v7749 = (i8)(intptr_t)(ws+3424);
	i8 v7750 = *(i8*)(intptr_t)v7749;
	*(i8*)(intptr_t)(ws+3488) = v7750;
	i8 v7751 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7751)();

	i1 v7752 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v7752;
	i8 v7753 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7753;
	i8 v7754 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7754)();

	i1 v7755 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7755;
	i8 v7756 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7756;
	i8 v7757 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7757)();

}
	void f287_TerminateNormalLoop(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_5 workspace at ws+3384 length ws+0
void f316_reduce_5(void) {

	i8 v7758 = (i8)(intptr_t)(ws+3328);
	i8 v7759 = *(i8*)(intptr_t)v7758;
	*(i8*)(intptr_t)(ws+3384) = v7759;
	i8 v7760 = (i8)(intptr_t)(f287_TerminateNormalLoop);

	((void(*)(void))(intptr_t)v7760)();

	i1 v7761 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v7761;
	i8 v7762 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v7762;
	i8 v7763 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7763)();

	i1 v7764 = (i1)+13;
	*(i1*)(intptr_t)(ws+3496) = v7764;
	i8 v7765 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7765;
	i8 v7766 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7766)();

}
	void f286_BeginNormalLoop(void);
	void f136_MidLabel(void);
	void f259_Generate(void);

// reduce_6 workspace at ws+3384 length ws+16
void f317_reduce_6(void) {

	i8 v7767 = (i8)(intptr_t)(f286_BeginNormalLoop);

	((void(*)(void))(intptr_t)v7767)();

	i8 v7768 = *(i8*)(intptr_t)(ws+3400);
	i8 v7769 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7769 = v7768;

	i8 v7770 = (i8)(intptr_t)(ws+3384);
	i8 v7771 = *(i8*)(intptr_t)v7770;
	i8 v7772 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v7772 = v7771;

	i8 v7773 = (i8)(intptr_t)(ws+54);
	i2 v7774 = *(i2*)(intptr_t)v7773;
	*(i2*)(intptr_t)(ws+3472) = v7774;
	i8 v7775 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v7775)();

	i8 v7776 = *(i8*)(intptr_t)(ws+3480);
	i8 v7777 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7777 = v7776;

	i8 v7778 = (i8)(intptr_t)(ws+3392);
	i8 v7779 = *(i8*)(intptr_t)v7778;
	*(i8*)(intptr_t)(ws+3488) = v7779;
	i8 v7780 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7780)();

}
	void f287_TerminateNormalLoop(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_7 workspace at ws+3384 length ws+0
void f318_reduce_7(void) {

	i8 v7781 = (i8)(intptr_t)(ws+3328);
	i8 v7782 = *(i8*)(intptr_t)v7781;
	*(i8*)(intptr_t)(ws+3384) = v7782;
	i8 v7783 = (i8)(intptr_t)(f287_TerminateNormalLoop);

	((void(*)(void))(intptr_t)v7783)();

	i1 v7784 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v7784;
	i8 v7785 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v7785;
	i8 v7786 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7786)();

	i1 v7787 = (i1)+13;
	*(i1*)(intptr_t)(ws+3496) = v7787;
	i8 v7788 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7788;
	i8 v7789 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7789)();

}
	void f286_BeginNormalLoop(void);
	void f136_MidLabel(void);
	void f259_Generate(void);

// reduce_8 workspace at ws+3384 length ws+16
void f319_reduce_8(void) {

	i8 v7790 = (i8)(intptr_t)(f286_BeginNormalLoop);

	((void(*)(void))(intptr_t)v7790)();

	i8 v7791 = *(i8*)(intptr_t)(ws+3400);
	i8 v7792 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7792 = v7791;

	i8 v7793 = (i8)(intptr_t)(ws+3384);
	i8 v7794 = *(i8*)(intptr_t)v7793;
	i8 v7795 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v7795 = v7794;

	i8 v7796 = (i8)(intptr_t)(ws+54);
	i2 v7797 = *(i2*)(intptr_t)v7796;
	*(i2*)(intptr_t)(ws+3472) = v7797;
	i8 v7798 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v7798)();

	i8 v7799 = *(i8*)(intptr_t)(ws+3480);
	i8 v7800 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7800 = v7799;

	i8 v7801 = (i8)(intptr_t)(ws+3392);
	i8 v7802 = *(i8*)(intptr_t)v7801;
	*(i8*)(intptr_t)(ws+3488) = v7802;
	i8 v7803 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7803)();

}
	void f238_AllocLabel(void);
	void f238_AllocLabel(void);
	void f260_GenerateConditional(void);
	void f302_yy_destructor(void);

// reduce_9 workspace at ws+3384 length ws+6
void f320_reduce_9(void) {

	i8 v7804 = (i8)(intptr_t)(ws+3320);
	i8 v7805 = *(i8*)(intptr_t)v7804;
	i8 v7806 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v7806 = v7805;

	i8 v7807 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7807)();

	i2 v7808 = *(i2*)(intptr_t)(ws+3472);
	i8 v7809 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v7809 = v7808;

	i8 v7810 = (i8)(intptr_t)(ws+3384);
	i2 v7811 = *(i2*)(intptr_t)v7810;
	i8 v7812 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v7812 = v7811;

	i8 v7813 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7813)();

	i2 v7814 = *(i2*)(intptr_t)(ws+3472);
	i8 v7815 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v7815 = v7814;

	i8 v7816 = (i8)(intptr_t)(ws+3388);
	i2 v7817 = *(i2*)(intptr_t)v7816;
	i8 v7818 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7818 = v7817;

	i8 v7819 = (i8)(intptr_t)(ws+3386);
	i2 v7820 = *(i2*)(intptr_t)v7819;
	i8 v7821 = (i8)(intptr_t)(ws+3312);
	i8 v7822 = *(i8*)(intptr_t)v7821;
	*(i2*)(intptr_t)v7822 = v7820;

	i8 v7823 = (i8)(intptr_t)(ws+52);
	i2 v7824 = *(i2*)(intptr_t)v7823;
	i8 v7825 = (i8)(intptr_t)(ws+3312);
	i8 v7826 = *(i8*)(intptr_t)v7825;
	i8 v7827 = v7826+(+2);
	*(i2*)(intptr_t)v7827 = v7824;

	i8 v7828 = (i8)(intptr_t)(ws+3386);
	i2 v7829 = *(i2*)(intptr_t)v7828;
	i8 v7830 = (i8)(intptr_t)(ws+3312);
	i8 v7831 = *(i8*)(intptr_t)v7830;
	i8 v7832 = v7831+(+4);
	*(i2*)(intptr_t)v7832 = v7829;

	i8 v7833 = (i8)(intptr_t)(ws+3312);
	i8 v7834 = *(i8*)(intptr_t)v7833;
	*(i8*)(intptr_t)(ws+3392) = v7834;
	i8 v7835 = (i8)(intptr_t)(f260_GenerateConditional);

	((void(*)(void))(intptr_t)v7835)();

	i8 v7836 = (i8)(intptr_t)(ws+52);
	i2 v7837 = *(i2*)(intptr_t)v7836;
	i8 v7838 = (i8)(intptr_t)(ws+3296);
	i8 v7839 = *(i8*)(intptr_t)v7838;
	i8 v7840 = v7839+(+2);
	*(i2*)(intptr_t)v7840 = v7837;

	i1 v7841 = (i1)+13;
	*(i1*)(intptr_t)(ws+3496) = v7841;
	i8 v7842 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7842;
	i8 v7843 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7843)();

}
const i1 c02_s016b[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f76_SimpleError(void);
	void f133_MidJump(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);

// reduce_10 workspace at ws+3384 length ws+8
void f321_reduce_10(void) {

	i8 v7844 = (i8)(intptr_t)(ws+52);
	i2 v7845 = *(i2*)(intptr_t)v7844;
	i2 v7846 = (i2)+0;
	if (v7845==v7846) goto c02_0606; else goto c02_0607;

c02_0606:;

	i8 v7847 = (i8)(intptr_t)c02_s016b;
	*(i8*)(intptr_t)(ws+3648) = v7847;
	i8 v7848 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7848)();

c02_0607:;

c02_0603:;

	i8 v7849 = (i8)(intptr_t)(ws+52);
	i2 v7850 = *(i2*)(intptr_t)v7849;
	*(i2*)(intptr_t)(ws+3416) = v7850;
	i8 v7851 = (i8)(intptr_t)(f133_MidJump);

	((void(*)(void))(intptr_t)v7851)();

	i8 v7852 = *(i8*)(intptr_t)(ws+3424);
	i8 v7853 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7853 = v7852;

	i8 v7854 = (i8)(intptr_t)(ws+3384);
	i8 v7855 = *(i8*)(intptr_t)v7854;
	*(i8*)(intptr_t)(ws+3488) = v7855;
	i8 v7856 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7856)();

	i1 v7857 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7857;
	i8 v7858 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7858;
	i8 v7859 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7859)();

}
const i1 c02_s016c[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f76_SimpleError(void);
	void f133_MidJump(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);

// reduce_11 workspace at ws+3384 length ws+8
void f322_reduce_11(void) {

	i8 v7860 = (i8)(intptr_t)(ws+54);
	i2 v7861 = *(i2*)(intptr_t)v7860;
	i2 v7862 = (i2)+0;
	if (v7861==v7862) goto c02_060b; else goto c02_060c;

c02_060b:;

	i8 v7863 = (i8)(intptr_t)c02_s016c;
	*(i8*)(intptr_t)(ws+3648) = v7863;
	i8 v7864 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7864)();

c02_060c:;

c02_0608:;

	i8 v7865 = (i8)(intptr_t)(ws+54);
	i2 v7866 = *(i2*)(intptr_t)v7865;
	*(i2*)(intptr_t)(ws+3416) = v7866;
	i8 v7867 = (i8)(intptr_t)(f133_MidJump);

	((void(*)(void))(intptr_t)v7867)();

	i8 v7868 = *(i8*)(intptr_t)(ws+3424);
	i8 v7869 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7869 = v7868;

	i8 v7870 = (i8)(intptr_t)(ws+3384);
	i8 v7871 = *(i8*)(intptr_t)v7870;
	*(i8*)(intptr_t)(ws+3488) = v7871;
	i8 v7872 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7872)();

	i1 v7873 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7873;
	i8 v7874 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7874;
	i8 v7875 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7875)();

}
	void f136_MidLabel(void);
	void f259_Generate(void);
	void f34_Free(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_12 workspace at ws+3384 length ws+16
void f323_reduce_12(void) {

	i8 v7876 = (i8)(intptr_t)(ws+56);
	i8 v7877 = *(i8*)(intptr_t)v7876;
	i2 v7878 = *(i2*)(intptr_t)v7877;
	*(i2*)(intptr_t)(ws+3472) = v7878;
	i8 v7879 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v7879)();

	i8 v7880 = *(i8*)(intptr_t)(ws+3480);
	i8 v7881 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7881 = v7880;

	i8 v7882 = (i8)(intptr_t)(ws+3384);
	i8 v7883 = *(i8*)(intptr_t)v7882;
	*(i8*)(intptr_t)(ws+3488) = v7883;
	i8 v7884 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7884)();

	i8 v7885 = (i8)(intptr_t)(ws+56);
	i8 v7886 = *(i8*)(intptr_t)v7885;
	i8 v7887 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7887 = v7886;

	i8 v7888 = (i8)(intptr_t)(ws+56);
	i8 v7889 = *(i8*)(intptr_t)v7888;
	i8 v7890 = v7889+(+8);
	i8 v7891 = *(i8*)(intptr_t)v7890;
	i8 v7892 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7892 = v7891;

	i8 v7893 = (i8)(intptr_t)(ws+3392);
	i8 v7894 = *(i8*)(intptr_t)v7893;
	*(i8*)(intptr_t)(ws+3680) = v7894;
	i8 v7895 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7895)();

	i1 v7896 = (i1)+26;
	*(i1*)(intptr_t)(ws+3496) = v7896;
	i8 v7897 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v7897;
	i8 v7898 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7898)();

	i1 v7899 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v7899;
	i8 v7900 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v7900;
	i8 v7901 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7901)();

	i1 v7902 = (i1)+12;
	*(i1*)(intptr_t)(ws+3496) = v7902;
	i8 v7903 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7903;
	i8 v7904 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v7904)();

}
	void f69_InternalAlloc(void);
	void f238_AllocLabel(void);

// reduce_13 workspace at ws+3384 length ws+18
void f324_reduce_13(void) {

	i8 v7905 = (i8)+16;
	*(i8*)(intptr_t)(ws+3640) = v7905;
	i8 v7906 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v7906)();

	i8 v7907 = *(i8*)(intptr_t)(ws+3648);
	i8 v7908 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7908 = v7907;

	i8 v7909 = (i8)(intptr_t)(ws+3384);
	i8 v7910 = *(i8*)(intptr_t)v7909;
	i8 v7911 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7911 = v7910;

	i8 v7912 = (i8)(intptr_t)(ws+56);
	i8 v7913 = *(i8*)(intptr_t)v7912;
	i8 v7914 = (i8)(intptr_t)(ws+3392);
	i8 v7915 = *(i8*)(intptr_t)v7914;
	i8 v7916 = v7915+(+8);
	*(i8*)(intptr_t)v7916 = v7913;

	i8 v7917 = (i8)(intptr_t)(ws+3392);
	i8 v7918 = *(i8*)(intptr_t)v7917;
	i8 v7919 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7919 = v7918;

	i8 v7920 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7920)();

	i2 v7921 = *(i2*)(intptr_t)(ws+3472);
	i8 v7922 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v7922 = v7921;

	i8 v7923 = (i8)(intptr_t)(ws+3400);
	i2 v7924 = *(i2*)(intptr_t)v7923;
	i8 v7925 = (i8)(intptr_t)(ws+56);
	i8 v7926 = *(i8*)(intptr_t)v7925;
	*(i2*)(intptr_t)v7926 = v7924;

}
	void f238_AllocLabel(void);
	void f238_AllocLabel(void);
	void f260_GenerateConditional(void);

// reduce_14 workspace at ws+3384 length ws+8
void f325_reduce_14(void) {

	i8 v7927 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7927)();

	i2 v7928 = *(i2*)(intptr_t)(ws+3472);
	i8 v7929 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v7929 = v7928;

	i8 v7930 = (i8)(intptr_t)(ws+3384);
	i2 v7931 = *(i2*)(intptr_t)v7930;
	i8 v7932 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v7932 = v7931;

	i8 v7933 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v7933)();

	i2 v7934 = *(i2*)(intptr_t)(ws+3472);
	i8 v7935 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v7935 = v7934;

	i8 v7936 = (i8)(intptr_t)(ws+3388);
	i2 v7937 = *(i2*)(intptr_t)v7936;
	i8 v7938 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v7938 = v7937;

	i8 v7939 = (i8)(intptr_t)(ws+3386);
	i2 v7940 = *(i2*)(intptr_t)v7939;
	i8 v7941 = (i8)(intptr_t)(ws+56);
	i8 v7942 = *(i8*)(intptr_t)v7941;
	i8 v7943 = v7942+(+2);
	*(i2*)(intptr_t)v7943 = v7940;

	i8 v7944 = (i8)(intptr_t)(ws+3390);
	i2 v7945 = *(i2*)(intptr_t)v7944;
	i8 v7946 = (i8)(intptr_t)(ws+56);
	i8 v7947 = *(i8*)(intptr_t)v7946;
	i8 v7948 = v7947+(+4);
	*(i2*)(intptr_t)v7948 = v7945;

	i8 v7949 = (i8)(intptr_t)(ws+3386);
	i2 v7950 = *(i2*)(intptr_t)v7949;
	i8 v7951 = (i8)(intptr_t)(ws+3304);
	i8 v7952 = *(i8*)(intptr_t)v7951;
	*(i2*)(intptr_t)v7952 = v7950;

	i8 v7953 = (i8)(intptr_t)(ws+3390);
	i2 v7954 = *(i2*)(intptr_t)v7953;
	i8 v7955 = (i8)(intptr_t)(ws+3304);
	i8 v7956 = *(i8*)(intptr_t)v7955;
	i8 v7957 = v7956+(+2);
	*(i2*)(intptr_t)v7957 = v7954;

	i8 v7958 = (i8)(intptr_t)(ws+3386);
	i2 v7959 = *(i2*)(intptr_t)v7958;
	i8 v7960 = (i8)(intptr_t)(ws+3304);
	i8 v7961 = *(i8*)(intptr_t)v7960;
	i8 v7962 = v7961+(+4);
	*(i2*)(intptr_t)v7962 = v7959;

	i8 v7963 = (i8)(intptr_t)(ws+3304);
	i8 v7964 = *(i8*)(intptr_t)v7963;
	*(i8*)(intptr_t)(ws+3392) = v7964;
	i8 v7965 = (i8)(intptr_t)(f260_GenerateConditional);

	((void(*)(void))(intptr_t)v7965)();

}
	void f136_MidLabel(void);
	void f259_Generate(void);

// reduce_15 workspace at ws+3384 length ws+8
void f326_reduce_15(void) {

	i8 v7966 = (i8)(intptr_t)(ws+56);
	i8 v7967 = *(i8*)(intptr_t)v7966;
	i8 v7968 = v7967+(+4);
	i2 v7969 = *(i2*)(intptr_t)v7968;
	*(i2*)(intptr_t)(ws+3472) = v7969;
	i8 v7970 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v7970)();

	i8 v7971 = *(i8*)(intptr_t)(ws+3480);
	i8 v7972 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7972 = v7971;

	i8 v7973 = (i8)(intptr_t)(ws+3384);
	i8 v7974 = *(i8*)(intptr_t)v7973;
	*(i8*)(intptr_t)(ws+3488) = v7974;
	i8 v7975 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7975)();

}
	void f133_MidJump(void);
	void f259_Generate(void);
	void f136_MidLabel(void);
	void f259_Generate(void);

// reduce_16 workspace at ws+3384 length ws+16
void f327_reduce_16(void) {

	i8 v7976 = (i8)(intptr_t)(ws+56);
	i8 v7977 = *(i8*)(intptr_t)v7976;
	i2 v7978 = *(i2*)(intptr_t)v7977;
	*(i2*)(intptr_t)(ws+3416) = v7978;
	i8 v7979 = (i8)(intptr_t)(f133_MidJump);

	((void(*)(void))(intptr_t)v7979)();

	i8 v7980 = *(i8*)(intptr_t)(ws+3424);
	i8 v7981 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7981 = v7980;

	i8 v7982 = (i8)(intptr_t)(ws+3384);
	i8 v7983 = *(i8*)(intptr_t)v7982;
	*(i8*)(intptr_t)(ws+3488) = v7983;
	i8 v7984 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7984)();

	i8 v7985 = (i8)(intptr_t)(ws+56);
	i8 v7986 = *(i8*)(intptr_t)v7985;
	i8 v7987 = v7986+(+4);
	i2 v7988 = *(i2*)(intptr_t)v7987;
	*(i2*)(intptr_t)(ws+3472) = v7988;
	i8 v7989 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v7989)();

	i8 v7990 = *(i8*)(intptr_t)(ws+3480);
	i8 v7991 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7991 = v7990;

	i8 v7992 = (i8)(intptr_t)(ws+3392);
	i8 v7993 = *(i8*)(intptr_t)v7992;
	*(i8*)(intptr_t)(ws+3488) = v7993;
	i8 v7994 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v7994)();

}
	void f133_MidJump(void);
	void f259_Generate(void);
	void f136_MidLabel(void);
	void f259_Generate(void);

// reduce_17 workspace at ws+3384 length ws+16
void f328_reduce_17(void) {

	i8 v7995 = (i8)(intptr_t)(ws+56);
	i8 v7996 = *(i8*)(intptr_t)v7995;
	i2 v7997 = *(i2*)(intptr_t)v7996;
	*(i2*)(intptr_t)(ws+3416) = v7997;
	i8 v7998 = (i8)(intptr_t)(f133_MidJump);

	((void(*)(void))(intptr_t)v7998)();

	i8 v7999 = *(i8*)(intptr_t)(ws+3424);
	i8 v8000 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8000 = v7999;

	i8 v8001 = (i8)(intptr_t)(ws+3384);
	i8 v8002 = *(i8*)(intptr_t)v8001;
	*(i8*)(intptr_t)(ws+3488) = v8002;
	i8 v8003 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8003)();

	i8 v8004 = (i8)(intptr_t)(ws+56);
	i8 v8005 = *(i8*)(intptr_t)v8004;
	i8 v8006 = v8005+(+4);
	i2 v8007 = *(i2*)(intptr_t)v8006;
	*(i2*)(intptr_t)(ws+3472) = v8007;
	i8 v8008 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v8008)();

	i8 v8009 = *(i8*)(intptr_t)(ws+3480);
	i8 v8010 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8010 = v8009;

	i8 v8011 = (i8)(intptr_t)(ws+3392);
	i8 v8012 = *(i8*)(intptr_t)v8011;
	*(i8*)(intptr_t)(ws+3488) = v8012;
	i8 v8013 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8013)();

}
	void f136_MidLabel(void);
	void f259_Generate(void);
	void f136_MidLabel(void);
	void f259_Generate(void);
	void f148_MidEndcase(void);
	void f259_Generate(void);
	void f34_Free(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_18 workspace at ws+3384 length ws+32
void f329_reduce_18(void) {

	i8 v8014 = (i8)(intptr_t)(ws+64);
	i8 v8015 = *(i8*)(intptr_t)v8014;
	i8 v8016 = v8015+(+17);
	i1 v8017 = *(i1*)(intptr_t)v8016;
	i1 v8018 = (i1)+0;
	if (v8017==v8018) goto c02_0614; else goto c02_0613;

c02_0614:;

	i8 v8019 = (i8)(intptr_t)(ws+64);
	i8 v8020 = *(i8*)(intptr_t)v8019;
	i2 v8021 = *(i2*)(intptr_t)v8020;
	i2 v8022 = (i2)+0;
	if (v8021==v8022) goto c02_0613; else goto c02_0612;

c02_0612:;

	i8 v8023 = (i8)(intptr_t)(ws+64);
	i8 v8024 = *(i8*)(intptr_t)v8023;
	i2 v8025 = *(i2*)(intptr_t)v8024;
	*(i2*)(intptr_t)(ws+3472) = v8025;
	i8 v8026 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v8026)();

	i8 v8027 = *(i8*)(intptr_t)(ws+3480);
	i8 v8028 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8028 = v8027;

	i8 v8029 = (i8)(intptr_t)(ws+3384);
	i8 v8030 = *(i8*)(intptr_t)v8029;
	*(i8*)(intptr_t)(ws+3488) = v8030;
	i8 v8031 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8031)();

c02_0613:;

c02_060d:;

	i8 v8032 = (i8)(intptr_t)(ws+64);
	i8 v8033 = *(i8*)(intptr_t)v8032;
	i8 v8034 = v8033+(+2);
	i2 v8035 = *(i2*)(intptr_t)v8034;
	*(i2*)(intptr_t)(ws+3472) = v8035;
	i8 v8036 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v8036)();

	i8 v8037 = *(i8*)(intptr_t)(ws+3480);
	i8 v8038 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8038 = v8037;

	i8 v8039 = (i8)(intptr_t)(ws+3392);
	i8 v8040 = *(i8*)(intptr_t)v8039;
	*(i8*)(intptr_t)(ws+3488) = v8040;
	i8 v8041 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8041)();

	i8 v8042 = (i8)(intptr_t)(ws+64);
	i8 v8043 = *(i8*)(intptr_t)v8042;
	i8 v8044 = v8043+(+16);
	i1 v8045 = *(i1*)(intptr_t)v8044;
	*(i1*)(intptr_t)(ws+3416) = v8045;
	i8 v8046 = (i8)(intptr_t)(f148_MidEndcase);

	((void(*)(void))(intptr_t)v8046)();

	i8 v8047 = *(i8*)(intptr_t)(ws+3424);
	i8 v8048 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8048 = v8047;

	i8 v8049 = (i8)(intptr_t)(ws+3400);
	i8 v8050 = *(i8*)(intptr_t)v8049;
	*(i8*)(intptr_t)(ws+3488) = v8050;
	i8 v8051 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8051)();

	i8 v8052 = (i8)(intptr_t)(ws+64);
	i8 v8053 = *(i8*)(intptr_t)v8052;
	i8 v8054 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8054 = v8053;

	i8 v8055 = (i8)(intptr_t)(ws+3408);
	i8 v8056 = *(i8*)(intptr_t)v8055;
	i8 v8057 = v8056+(+8);
	i8 v8058 = *(i8*)(intptr_t)v8057;
	i8 v8059 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v8059 = v8058;

	i8 v8060 = (i8)(intptr_t)(ws+3408);
	i8 v8061 = *(i8*)(intptr_t)v8060;
	*(i8*)(intptr_t)(ws+3680) = v8061;
	i8 v8062 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v8062)();

	i1 v8063 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v8063;
	i8 v8064 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v8064;
	i8 v8065 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8065)();

	i1 v8066 = (i1)+65;
	*(i1*)(intptr_t)(ws+3496) = v8066;
	i8 v8067 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8067;
	i8 v8068 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8068)();

	i1 v8069 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v8069;
	i8 v8070 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8070;
	i8 v8071 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8071)();

}
	void f69_InternalAlloc(void);
	void f238_AllocLabel(void);
	void f230_IsNum(void);
const i1 c02_s016d[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(void);
	void f168_NodeWidth(void);
	void f152_MidStartcase(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);

// reduce_19 workspace at ws+3384 length ws+32
void f330_reduce_19(void) {

	i8 v8072 = (i8)+18;
	*(i8*)(intptr_t)(ws+3640) = v8072;
	i8 v8073 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v8073)();

	i8 v8074 = *(i8*)(intptr_t)(ws+3648);
	i8 v8075 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8075 = v8074;

	i8 v8076 = (i8)(intptr_t)(ws+3384);
	i8 v8077 = *(i8*)(intptr_t)v8076;
	i8 v8078 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8078 = v8077;

	i8 v8079 = (i8)(intptr_t)(ws+64);
	i8 v8080 = *(i8*)(intptr_t)v8079;
	i8 v8081 = (i8)(intptr_t)(ws+3392);
	i8 v8082 = *(i8*)(intptr_t)v8081;
	i8 v8083 = v8082+(+8);
	*(i8*)(intptr_t)v8083 = v8080;

	i8 v8084 = (i8)(intptr_t)(ws+52);
	i2 v8085 = *(i2*)(intptr_t)v8084;
	i8 v8086 = (i8)(intptr_t)(ws+3392);
	i8 v8087 = *(i8*)(intptr_t)v8086;
	i8 v8088 = v8087+(+4);
	*(i2*)(intptr_t)v8088 = v8085;

	i8 v8089 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v8089)();

	i2 v8090 = *(i2*)(intptr_t)(ws+3472);
	i8 v8091 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v8091 = v8090;

	i8 v8092 = (i8)(intptr_t)(ws+3400);
	i2 v8093 = *(i2*)(intptr_t)v8092;
	i8 v8094 = (i8)(intptr_t)(ws+3392);
	i8 v8095 = *(i8*)(intptr_t)v8094;
	i8 v8096 = v8095+(+2);
	*(i2*)(intptr_t)v8096 = v8093;

	i8 v8097 = (i8)(intptr_t)(ws+3392);
	i8 v8098 = *(i8*)(intptr_t)v8097;
	i8 v8099 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v8099 = v8098;

	i8 v8100 = (i8)(intptr_t)(ws+3312);
	i8 v8101 = *(i8*)(intptr_t)v8100;
	i8 v8102 = v8101+(+24);
	i8 v8103 = *(i8*)(intptr_t)v8102;
	*(i8*)(intptr_t)(ws+3560) = v8103;
	i8 v8104 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v8104)();

	i1 v8105 = *(i1*)(intptr_t)(ws+3568);
	i8 v8106 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v8106 = v8105;

	i8 v8107 = (i8)(intptr_t)(ws+3402);
	i1 v8108 = *(i1*)(intptr_t)v8107;
	i1 v8109 = (i1)+0;
	if (v8108==v8109) goto c02_0618; else goto c02_0619;

c02_0618:;

	i8 v8110 = (i8)(intptr_t)c02_s016d;
	*(i8*)(intptr_t)(ws+3648) = v8110;
	i8 v8111 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8111)();

c02_0619:;

c02_0615:;

	i8 v8112 = (i8)(intptr_t)(ws+3312);
	i8 v8113 = *(i8*)(intptr_t)v8112;
	*(i8*)(intptr_t)(ws+3456) = v8113;
	i8 v8114 = (i8)(intptr_t)(f168_NodeWidth);

	((void(*)(void))(intptr_t)v8114)();

	i1 v8115 = *(i1*)(intptr_t)(ws+3464);
	i8 v8116 = (i8)(intptr_t)(ws+3403);
	*(i1*)(intptr_t)v8116 = v8115;

	i8 v8117 = (i8)(intptr_t)(ws+3403);
	i1 v8118 = *(i1*)(intptr_t)v8117;
	i8 v8119 = (i8)(intptr_t)(ws+3392);
	i8 v8120 = *(i8*)(intptr_t)v8119;
	i8 v8121 = v8120+(+16);
	*(i1*)(intptr_t)v8121 = v8118;

	i8 v8122 = (i8)(intptr_t)(ws+3392);
	i8 v8123 = *(i8*)(intptr_t)v8122;
	i8 v8124 = v8123+(+16);
	i1 v8125 = *(i1*)(intptr_t)v8124;
	*(i1*)(intptr_t)(ws+3416) = v8125;
	i8 v8126 = (i8)(intptr_t)(ws+3312);
	i8 v8127 = *(i8*)(intptr_t)v8126;
	*(i8*)(intptr_t)(ws+3424) = v8127;
	i8 v8128 = (i8)(intptr_t)(f152_MidStartcase);

	((void(*)(void))(intptr_t)v8128)();

	i8 v8129 = *(i8*)(intptr_t)(ws+3432);
	i8 v8130 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8130 = v8129;

	i8 v8131 = (i8)(intptr_t)(ws+3408);
	i8 v8132 = *(i8*)(intptr_t)v8131;
	*(i8*)(intptr_t)(ws+3488) = v8132;
	i8 v8133 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8133)();

	i1 v8134 = (i1)+66;
	*(i1*)(intptr_t)(ws+3496) = v8134;
	i8 v8135 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8135;
	i8 v8136 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8136)();

}
const i1 c02_s016e[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f76_SimpleError(void);
	void f133_MidJump(void);
	void f259_Generate(void);
	void f136_MidLabel(void);
	void f259_Generate(void);
	void f238_AllocLabel(void);
	void f107_MidWhencase(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);

// reduce_20 workspace at ws+3384 length ws+32
void f331_reduce_20(void) {

	i8 v8137 = (i8)(intptr_t)(ws+64);
	i8 v8138 = *(i8*)(intptr_t)v8137;
	i8 v8139 = v8138+(+17);
	i1 v8140 = *(i1*)(intptr_t)v8139;
	i1 v8141 = (i1)+0;
	if (v8140==v8141) goto c02_061e; else goto c02_061d;

c02_061d:;

	i8 v8142 = (i8)(intptr_t)c02_s016e;
	*(i8*)(intptr_t)(ws+3648) = v8142;
	i8 v8143 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8143)();

c02_061e:;

c02_061a:;

	i8 v8144 = (i8)(intptr_t)(ws+64);
	i8 v8145 = *(i8*)(intptr_t)v8144;
	i2 v8146 = *(i2*)(intptr_t)v8145;
	i2 v8147 = (i2)+0;
	if (v8146==v8147) goto c02_0623; else goto c02_0622;

c02_0622:;

	i8 v8148 = (i8)(intptr_t)(ws+64);
	i8 v8149 = *(i8*)(intptr_t)v8148;
	i8 v8150 = v8149+(+2);
	i2 v8151 = *(i2*)(intptr_t)v8150;
	*(i2*)(intptr_t)(ws+3416) = v8151;
	i8 v8152 = (i8)(intptr_t)(f133_MidJump);

	((void(*)(void))(intptr_t)v8152)();

	i8 v8153 = *(i8*)(intptr_t)(ws+3424);
	i8 v8154 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8154 = v8153;

	i8 v8155 = (i8)(intptr_t)(ws+3384);
	i8 v8156 = *(i8*)(intptr_t)v8155;
	*(i8*)(intptr_t)(ws+3488) = v8156;
	i8 v8157 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8157)();

	i8 v8158 = (i8)(intptr_t)(ws+64);
	i8 v8159 = *(i8*)(intptr_t)v8158;
	i2 v8160 = *(i2*)(intptr_t)v8159;
	*(i2*)(intptr_t)(ws+3472) = v8160;
	i8 v8161 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v8161)();

	i8 v8162 = *(i8*)(intptr_t)(ws+3480);
	i8 v8163 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8163 = v8162;

	i8 v8164 = (i8)(intptr_t)(ws+3392);
	i8 v8165 = *(i8*)(intptr_t)v8164;
	*(i8*)(intptr_t)(ws+3488) = v8165;
	i8 v8166 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8166)();

c02_0623:;

c02_061f:;

	i8 v8167 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v8167)();

	i2 v8168 = *(i2*)(intptr_t)(ws+3472);
	i8 v8169 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v8169 = v8168;

	i8 v8170 = (i8)(intptr_t)(ws+3400);
	i2 v8171 = *(i2*)(intptr_t)v8170;
	i8 v8172 = (i8)(intptr_t)(ws+64);
	i8 v8173 = *(i8*)(intptr_t)v8172;
	*(i2*)(intptr_t)v8173 = v8171;

	i8 v8174 = (i8)(intptr_t)(ws+64);
	i8 v8175 = *(i8*)(intptr_t)v8174;
	i8 v8176 = v8175+(+16);
	i1 v8177 = *(i1*)(intptr_t)v8176;
	*(i1*)(intptr_t)(ws+3416) = v8177;
	i8 v8178 = (i8)(intptr_t)(ws+3312);
	i4 v8179 = *(i4*)(intptr_t)v8178;
	*(i4*)(intptr_t)(ws+3420) = v8179;
	i8 v8180 = (i8)(intptr_t)(ws+64);
	i8 v8181 = *(i8*)(intptr_t)v8180;
	i2 v8182 = *(i2*)(intptr_t)v8181;
	*(i2*)(intptr_t)(ws+3424) = v8182;
	i8 v8183 = (i8)(intptr_t)(f107_MidWhencase);

	((void(*)(void))(intptr_t)v8183)();

	i8 v8184 = *(i8*)(intptr_t)(ws+3432);
	i8 v8185 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8185 = v8184;

	i8 v8186 = (i8)(intptr_t)(ws+3408);
	i8 v8187 = *(i8*)(intptr_t)v8186;
	*(i8*)(intptr_t)(ws+3488) = v8187;
	i8 v8188 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8188)();

	i1 v8189 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v8189;
	i8 v8190 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8190;
	i8 v8191 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8191)();

}
const i1 c02_s016f[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f76_SimpleError(void);
	void f133_MidJump(void);
	void f259_Generate(void);
	void f136_MidLabel(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_21 workspace at ws+3384 length ws+16
void f332_reduce_21(void) {

	i8 v8192 = (i8)(intptr_t)(ws+64);
	i8 v8193 = *(i8*)(intptr_t)v8192;
	i8 v8194 = v8193+(+17);
	i1 v8195 = *(i1*)(intptr_t)v8194;
	i1 v8196 = (i1)+0;
	if (v8195==v8196) goto c02_0628; else goto c02_0627;

c02_0627:;

	i8 v8197 = (i8)(intptr_t)c02_s016f;
	*(i8*)(intptr_t)(ws+3648) = v8197;
	i8 v8198 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8198)();

c02_0628:;

c02_0624:;

	i8 v8199 = (i8)(intptr_t)(ws+64);
	i8 v8200 = *(i8*)(intptr_t)v8199;
	i2 v8201 = *(i2*)(intptr_t)v8200;
	i2 v8202 = (i2)+0;
	if (v8201==v8202) goto c02_062d; else goto c02_062c;

c02_062c:;

	i8 v8203 = (i8)(intptr_t)(ws+64);
	i8 v8204 = *(i8*)(intptr_t)v8203;
	i8 v8205 = v8204+(+2);
	i2 v8206 = *(i2*)(intptr_t)v8205;
	*(i2*)(intptr_t)(ws+3416) = v8206;
	i8 v8207 = (i8)(intptr_t)(f133_MidJump);

	((void(*)(void))(intptr_t)v8207)();

	i8 v8208 = *(i8*)(intptr_t)(ws+3424);
	i8 v8209 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8209 = v8208;

	i8 v8210 = (i8)(intptr_t)(ws+3384);
	i8 v8211 = *(i8*)(intptr_t)v8210;
	*(i8*)(intptr_t)(ws+3488) = v8211;
	i8 v8212 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8212)();

	i8 v8213 = (i8)(intptr_t)(ws+64);
	i8 v8214 = *(i8*)(intptr_t)v8213;
	i2 v8215 = *(i2*)(intptr_t)v8214;
	*(i2*)(intptr_t)(ws+3472) = v8215;
	i8 v8216 = (i8)(intptr_t)(f136_MidLabel);

	((void(*)(void))(intptr_t)v8216)();

	i8 v8217 = *(i8*)(intptr_t)(ws+3480);
	i8 v8218 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8218 = v8217;

	i8 v8219 = (i8)(intptr_t)(ws+3392);
	i8 v8220 = *(i8*)(intptr_t)v8219;
	*(i8*)(intptr_t)(ws+3488) = v8220;
	i8 v8221 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v8221)();

c02_062d:;

c02_0629:;

	i2 v8222 = (i2)+0;
	i8 v8223 = (i8)(intptr_t)(ws+64);
	i8 v8224 = *(i8*)(intptr_t)v8223;
	*(i2*)(intptr_t)v8224 = v8222;

	i1 v8225 = (i1)+1;
	i8 v8226 = (i8)(intptr_t)(ws+64);
	i8 v8227 = *(i8*)(intptr_t)v8226;
	i8 v8228 = v8227+(+17);
	*(i1*)(intptr_t)v8228 = v8225;

	i1 v8229 = (i1)+9;
	*(i1*)(intptr_t)(ws+3496) = v8229;
	i8 v8230 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8230;
	i8 v8231 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8231)();

	i1 v8232 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v8232;
	i8 v8233 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8233;
	i8 v8234 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8234)();

}
	void f302_yy_destructor(void);

// reduce_22 workspace at ws+3384 length ws+0
void f333_reduce_22(void) {

	i8 v8235 = (i8)(intptr_t)(ws+3312);
	i8 v8236 = *(i8*)(intptr_t)v8235;
	i8 v8237 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8237 = v8236;

	i1 v8238 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v8238;
	i8 v8239 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8239;
	i8 v8240 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8240)();

}
	void f288_Negate(void);

// reduce_23 workspace at ws+3384 length ws+0
void f334_reduce_23(void) {

	i8 v8241 = (i8)(intptr_t)(ws+3304);
	i8 v8242 = *(i8*)(intptr_t)v8241;
	i8 v8243 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8243 = v8242;

	i8 v8244 = (i8)(intptr_t)(ws+3304);
	i8 v8245 = *(i8*)(intptr_t)v8244;
	*(i8*)(intptr_t)(ws+3384) = v8245;
	i8 v8246 = (i8)(intptr_t)(f288_Negate);

	((void(*)(void))(intptr_t)v8246)();

}
	void f151_MidBand(void);
	void f302_yy_destructor(void);

// reduce_24 workspace at ws+3384 length ws+8
void f335_reduce_24(void) {

	i8 v8247 = (i8)(intptr_t)(ws+3320);
	i8 v8248 = *(i8*)(intptr_t)v8247;
	*(i8*)(intptr_t)(ws+3392) = v8248;
	i8 v8249 = (i8)(intptr_t)(ws+3304);
	i8 v8250 = *(i8*)(intptr_t)v8249;
	*(i8*)(intptr_t)(ws+3400) = v8250;
	i2 v8251 = (i2)+0;
	*(i2*)(intptr_t)(ws+3408) = v8251;
	i2 v8252 = (i2)+0;
	*(i2*)(intptr_t)(ws+3410) = v8252;
	i2 v8253 = (i2)+0;
	*(i2*)(intptr_t)(ws+3412) = v8253;
	i1 v8254 = (i1)+0;
	*(i1*)(intptr_t)(ws+3414) = v8254;
	i8 v8255 = (i8)(intptr_t)(f151_MidBand);

	((void(*)(void))(intptr_t)v8255)();

	i8 v8256 = *(i8*)(intptr_t)(ws+3416);
	i8 v8257 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8257 = v8256;

	i8 v8258 = (i8)(intptr_t)(ws+3384);
	i8 v8259 = *(i8*)(intptr_t)v8258;
	i8 v8260 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8260 = v8259;

	i1 v8261 = (i1)+47;
	*(i1*)(intptr_t)(ws+3496) = v8261;
	i8 v8262 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8262;
	i8 v8263 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8263)();

}
	void f110_MidBor(void);
	void f302_yy_destructor(void);

// reduce_25 workspace at ws+3384 length ws+8
void f336_reduce_25(void) {

	i8 v8264 = (i8)(intptr_t)(ws+3320);
	i8 v8265 = *(i8*)(intptr_t)v8264;
	*(i8*)(intptr_t)(ws+3392) = v8265;
	i8 v8266 = (i8)(intptr_t)(ws+3304);
	i8 v8267 = *(i8*)(intptr_t)v8266;
	*(i8*)(intptr_t)(ws+3400) = v8267;
	i2 v8268 = (i2)+0;
	*(i2*)(intptr_t)(ws+3408) = v8268;
	i2 v8269 = (i2)+0;
	*(i2*)(intptr_t)(ws+3410) = v8269;
	i2 v8270 = (i2)+0;
	*(i2*)(intptr_t)(ws+3412) = v8270;
	i1 v8271 = (i1)+0;
	*(i1*)(intptr_t)(ws+3414) = v8271;
	i8 v8272 = (i8)(intptr_t)(f110_MidBor);

	((void(*)(void))(intptr_t)v8272)();

	i8 v8273 = *(i8*)(intptr_t)(ws+3416);
	i8 v8274 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8274 = v8273;

	i8 v8275 = (i8)(intptr_t)(ws+3384);
	i8 v8276 = *(i8*)(intptr_t)v8275;
	i8 v8277 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8277 = v8276;

	i1 v8278 = (i1)+48;
	*(i1*)(intptr_t)(ws+3496) = v8278;
	i8 v8279 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8279;
	i8 v8280 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8280)();

}
	void f289_ConditionalEq(void);
	void f302_yy_destructor(void);

// reduce_26 workspace at ws+3384 length ws+8
void f337_reduce_26(void) {

	i8 v8281 = (i8)(intptr_t)(ws+3320);
	i8 v8282 = *(i8*)(intptr_t)v8281;
	*(i8*)(intptr_t)(ws+3392) = v8282;
	i8 v8283 = (i8)(intptr_t)(ws+3304);
	i8 v8284 = *(i8*)(intptr_t)v8283;
	*(i8*)(intptr_t)(ws+3400) = v8284;
	i1 v8285 = (i1)+0;
	*(i1*)(intptr_t)(ws+3408) = v8285;
	i8 v8286 = (i8)(intptr_t)(f289_ConditionalEq);

	((void(*)(void))(intptr_t)v8286)();

	i8 v8287 = *(i8*)(intptr_t)(ws+3416);
	i8 v8288 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8288 = v8287;

	i8 v8289 = (i8)(intptr_t)(ws+3384);
	i8 v8290 = *(i8*)(intptr_t)v8289;
	i8 v8291 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8291 = v8290;

	i1 v8292 = (i1)+55;
	*(i1*)(intptr_t)(ws+3496) = v8292;
	i8 v8293 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8293;
	i8 v8294 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8294)();

}
	void f289_ConditionalEq(void);
	void f302_yy_destructor(void);

// reduce_27 workspace at ws+3384 length ws+8
void f338_reduce_27(void) {

	i8 v8295 = (i8)(intptr_t)(ws+3320);
	i8 v8296 = *(i8*)(intptr_t)v8295;
	*(i8*)(intptr_t)(ws+3392) = v8296;
	i8 v8297 = (i8)(intptr_t)(ws+3304);
	i8 v8298 = *(i8*)(intptr_t)v8297;
	*(i8*)(intptr_t)(ws+3400) = v8298;
	i1 v8299 = (i1)+1;
	*(i1*)(intptr_t)(ws+3408) = v8299;
	i8 v8300 = (i8)(intptr_t)(f289_ConditionalEq);

	((void(*)(void))(intptr_t)v8300)();

	i8 v8301 = *(i8*)(intptr_t)(ws+3416);
	i8 v8302 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8302 = v8301;

	i8 v8303 = (i8)(intptr_t)(ws+3384);
	i8 v8304 = *(i8*)(intptr_t)v8303;
	i8 v8305 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8305 = v8304;

	i1 v8306 = (i1)+56;
	*(i1*)(intptr_t)(ws+3496) = v8306;
	i8 v8307 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8307;
	i8 v8308 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8308)();

}
	void f290_ConditionalLt(void);
	void f302_yy_destructor(void);

// reduce_28 workspace at ws+3384 length ws+8
void f339_reduce_28(void) {

	i8 v8309 = (i8)(intptr_t)(ws+3320);
	i8 v8310 = *(i8*)(intptr_t)v8309;
	*(i8*)(intptr_t)(ws+3392) = v8310;
	i8 v8311 = (i8)(intptr_t)(ws+3304);
	i8 v8312 = *(i8*)(intptr_t)v8311;
	*(i8*)(intptr_t)(ws+3400) = v8312;
	i1 v8313 = (i1)+0;
	*(i1*)(intptr_t)(ws+3408) = v8313;
	i8 v8314 = (i8)(intptr_t)(f290_ConditionalLt);

	((void(*)(void))(intptr_t)v8314)();

	i8 v8315 = *(i8*)(intptr_t)(ws+3416);
	i8 v8316 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8316 = v8315;

	i8 v8317 = (i8)(intptr_t)(ws+3384);
	i8 v8318 = *(i8*)(intptr_t)v8317;
	i8 v8319 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8319 = v8318;

	i1 v8320 = (i1)+51;
	*(i1*)(intptr_t)(ws+3496) = v8320;
	i8 v8321 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8321;
	i8 v8322 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8322)();

}
	void f290_ConditionalLt(void);
	void f302_yy_destructor(void);

// reduce_29 workspace at ws+3384 length ws+8
void f340_reduce_29(void) {

	i8 v8323 = (i8)(intptr_t)(ws+3320);
	i8 v8324 = *(i8*)(intptr_t)v8323;
	*(i8*)(intptr_t)(ws+3392) = v8324;
	i8 v8325 = (i8)(intptr_t)(ws+3304);
	i8 v8326 = *(i8*)(intptr_t)v8325;
	*(i8*)(intptr_t)(ws+3400) = v8326;
	i1 v8327 = (i1)+1;
	*(i1*)(intptr_t)(ws+3408) = v8327;
	i8 v8328 = (i8)(intptr_t)(f290_ConditionalLt);

	((void(*)(void))(intptr_t)v8328)();

	i8 v8329 = *(i8*)(intptr_t)(ws+3416);
	i8 v8330 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8330 = v8329;

	i8 v8331 = (i8)(intptr_t)(ws+3384);
	i8 v8332 = *(i8*)(intptr_t)v8331;
	i8 v8333 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8333 = v8332;

	i1 v8334 = (i1)+54;
	*(i1*)(intptr_t)(ws+3496) = v8334;
	i8 v8335 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8335;
	i8 v8336 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8336)();

}
	void f290_ConditionalLt(void);
	void f302_yy_destructor(void);

// reduce_30 workspace at ws+3384 length ws+8
void f341_reduce_30(void) {

	i8 v8337 = (i8)(intptr_t)(ws+3304);
	i8 v8338 = *(i8*)(intptr_t)v8337;
	*(i8*)(intptr_t)(ws+3392) = v8338;
	i8 v8339 = (i8)(intptr_t)(ws+3320);
	i8 v8340 = *(i8*)(intptr_t)v8339;
	*(i8*)(intptr_t)(ws+3400) = v8340;
	i1 v8341 = (i1)+0;
	*(i1*)(intptr_t)(ws+3408) = v8341;
	i8 v8342 = (i8)(intptr_t)(f290_ConditionalLt);

	((void(*)(void))(intptr_t)v8342)();

	i8 v8343 = *(i8*)(intptr_t)(ws+3416);
	i8 v8344 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8344 = v8343;

	i8 v8345 = (i8)(intptr_t)(ws+3384);
	i8 v8346 = *(i8*)(intptr_t)v8345;
	i8 v8347 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8347 = v8346;

	i1 v8348 = (i1)+53;
	*(i1*)(intptr_t)(ws+3496) = v8348;
	i8 v8349 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8349;
	i8 v8350 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8350)();

}
	void f290_ConditionalLt(void);
	void f302_yy_destructor(void);

// reduce_31 workspace at ws+3384 length ws+8
void f342_reduce_31(void) {

	i8 v8351 = (i8)(intptr_t)(ws+3304);
	i8 v8352 = *(i8*)(intptr_t)v8351;
	*(i8*)(intptr_t)(ws+3392) = v8352;
	i8 v8353 = (i8)(intptr_t)(ws+3320);
	i8 v8354 = *(i8*)(intptr_t)v8353;
	*(i8*)(intptr_t)(ws+3400) = v8354;
	i1 v8355 = (i1)+1;
	*(i1*)(intptr_t)(ws+3408) = v8355;
	i8 v8356 = (i8)(intptr_t)(f290_ConditionalLt);

	((void(*)(void))(intptr_t)v8356)();

	i8 v8357 = *(i8*)(intptr_t)(ws+3416);
	i8 v8358 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8358 = v8357;

	i8 v8359 = (i8)(intptr_t)(ws+3384);
	i8 v8360 = *(i8*)(intptr_t)v8359;
	i8 v8361 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8361 = v8360;

	i1 v8362 = (i1)+52;
	*(i1*)(intptr_t)(ws+3496) = v8362;
	i8 v8363 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8363;
	i8 v8364 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8364)();

}
	void f150_MidConstant(void);

// reduce_32 workspace at ws+3384 length ws+8
void f343_reduce_32(void) {

	i8 v8365 = (i8)(intptr_t)(ws+3304);
	i4 v8366 = *(i4*)(intptr_t)v8365;
	*(i4*)(intptr_t)(ws+3592) = v8366;
	i8 v8367 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v8367)();

	i8 v8368 = *(i8*)(intptr_t)(ws+3600);
	i8 v8369 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8369 = v8368;

	i8 v8370 = (i8)(intptr_t)(ws+3384);
	i8 v8371 = *(i8*)(intptr_t)v8370;
	i8 v8372 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8372 = v8371;

}
	void f302_yy_destructor(void);

// reduce_33 workspace at ws+3384 length ws+0
void f344_reduce_33(void) {

	i8 v8373 = (i8)(intptr_t)(ws+3312);
	i8 v8374 = *(i8*)(intptr_t)v8373;
	i8 v8375 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8375 = v8374;

	i1 v8376 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v8376;
	i8 v8377 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8377;
	i8 v8378 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8378)();

}

// reduce_34 workspace at ws+3384 length ws+0
void f345_reduce_34(void) {

	i8 v8379 = (i8)(intptr_t)(ws+3304);
	i8 v8380 = *(i8*)(intptr_t)v8379;
	i8 v8381 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8381 = v8380;

}
	void f277_Expr1Simple(void);

// reduce_35 workspace at ws+3384 length ws+8
void f346_reduce_35(void) {

	i1 v8382 = (i1)+113;
	*(i1*)(intptr_t)(ws+3392) = v8382;
	i8 v8383 = (i8)(intptr_t)(ws+3304);
	i8 v8384 = *(i8*)(intptr_t)v8383;
	*(i8*)(intptr_t)(ws+3400) = v8384;
	i8 v8385 = (i8)(intptr_t)(f277_Expr1Simple);

	((void(*)(void))(intptr_t)v8385)();

	i8 v8386 = *(i8*)(intptr_t)(ws+3408);
	i8 v8387 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8387 = v8386;

	i8 v8388 = (i8)(intptr_t)(ws+3384);
	i8 v8389 = *(i8*)(intptr_t)v8388;
	i8 v8390 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8390 = v8389;

}
	void f277_Expr1Simple(void);

// reduce_36 workspace at ws+3384 length ws+8
void f347_reduce_36(void) {

	i1 v8391 = (i1)+108;
	*(i1*)(intptr_t)(ws+3392) = v8391;
	i8 v8392 = (i8)(intptr_t)(ws+3304);
	i8 v8393 = *(i8*)(intptr_t)v8392;
	*(i8*)(intptr_t)(ws+3400) = v8393;
	i8 v8394 = (i8)(intptr_t)(f277_Expr1Simple);

	((void(*)(void))(intptr_t)v8394)();

	i8 v8395 = *(i8*)(intptr_t)(ws+3408);
	i8 v8396 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8396 = v8395;

	i8 v8397 = (i8)(intptr_t)(ws+3384);
	i8 v8398 = *(i8*)(intptr_t)v8397;
	i8 v8399 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8399 = v8398;

}
	void f278_ExprAdd(void);
	void f302_yy_destructor(void);

// reduce_37 workspace at ws+3384 length ws+8
void f348_reduce_37(void) {

	i8 v8400 = (i8)(intptr_t)(ws+3320);
	i8 v8401 = *(i8*)(intptr_t)v8400;
	*(i8*)(intptr_t)(ws+3392) = v8401;
	i8 v8402 = (i8)(intptr_t)(ws+3304);
	i8 v8403 = *(i8*)(intptr_t)v8402;
	*(i8*)(intptr_t)(ws+3400) = v8403;
	i8 v8404 = (i8)(intptr_t)(f278_ExprAdd);

	((void(*)(void))(intptr_t)v8404)();

	i8 v8405 = *(i8*)(intptr_t)(ws+3408);
	i8 v8406 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8406 = v8405;

	i8 v8407 = (i8)(intptr_t)(ws+3384);
	i8 v8408 = *(i8*)(intptr_t)v8407;
	i8 v8409 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8409 = v8408;

	i1 v8410 = (i1)+19;
	*(i1*)(intptr_t)(ws+3496) = v8410;
	i8 v8411 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8411;
	i8 v8412 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8412)();

}
	void f280_ExprSub(void);
	void f302_yy_destructor(void);

// reduce_38 workspace at ws+3384 length ws+8
void f349_reduce_38(void) {

	i8 v8413 = (i8)(intptr_t)(ws+3320);
	i8 v8414 = *(i8*)(intptr_t)v8413;
	*(i8*)(intptr_t)(ws+3392) = v8414;
	i8 v8415 = (i8)(intptr_t)(ws+3304);
	i8 v8416 = *(i8*)(intptr_t)v8415;
	*(i8*)(intptr_t)(ws+3400) = v8416;
	i8 v8417 = (i8)(intptr_t)(f280_ExprSub);

	((void(*)(void))(intptr_t)v8417)();

	i8 v8418 = *(i8*)(intptr_t)(ws+3408);
	i8 v8419 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8419 = v8418;

	i8 v8420 = (i8)(intptr_t)(ws+3384);
	i8 v8421 = *(i8*)(intptr_t)v8420;
	i8 v8422 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8422 = v8421;

	i1 v8423 = (i1)+14;
	*(i1*)(intptr_t)(ws+3496) = v8423;
	i8 v8424 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8424;
	i8 v8425 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8425)();

}
	void f282_Expr2Simple(void);
	void f302_yy_destructor(void);

// reduce_39 workspace at ws+3384 length ws+8
void f350_reduce_39(void) {

	i1 v8426 = (i1)+163;
	*(i1*)(intptr_t)(ws+3392) = v8426;
	i1 v8427 = (i1)+163;
	*(i1*)(intptr_t)(ws+3393) = v8427;
	i8 v8428 = (i8)(intptr_t)(ws+3320);
	i8 v8429 = *(i8*)(intptr_t)v8428;
	*(i8*)(intptr_t)(ws+3400) = v8429;
	i8 v8430 = (i8)(intptr_t)(ws+3304);
	i8 v8431 = *(i8*)(intptr_t)v8430;
	*(i8*)(intptr_t)(ws+3408) = v8431;
	i8 v8432 = (i8)(intptr_t)(f282_Expr2Simple);

	((void(*)(void))(intptr_t)v8432)();

	i8 v8433 = *(i8*)(intptr_t)(ws+3416);
	i8 v8434 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8434 = v8433;

	i8 v8435 = (i8)(intptr_t)(ws+3384);
	i8 v8436 = *(i8*)(intptr_t)v8435;
	i8 v8437 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8437 = v8436;

	i1 v8438 = (i1)+24;
	*(i1*)(intptr_t)(ws+3496) = v8438;
	i8 v8439 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8439;
	i8 v8440 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8440)();

}
	void f282_Expr2Simple(void);
	void f302_yy_destructor(void);

// reduce_40 workspace at ws+3384 length ws+8
void f351_reduce_40(void) {

	i1 v8441 = (i1)+143;
	*(i1*)(intptr_t)(ws+3392) = v8441;
	i1 v8442 = (i1)+138;
	*(i1*)(intptr_t)(ws+3393) = v8442;
	i8 v8443 = (i8)(intptr_t)(ws+3320);
	i8 v8444 = *(i8*)(intptr_t)v8443;
	*(i8*)(intptr_t)(ws+3400) = v8444;
	i8 v8445 = (i8)(intptr_t)(ws+3304);
	i8 v8446 = *(i8*)(intptr_t)v8445;
	*(i8*)(intptr_t)(ws+3408) = v8446;
	i8 v8447 = (i8)(intptr_t)(f282_Expr2Simple);

	((void(*)(void))(intptr_t)v8447)();

	i8 v8448 = *(i8*)(intptr_t)(ws+3416);
	i8 v8449 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8449 = v8448;

	i8 v8450 = (i8)(intptr_t)(ws+3384);
	i8 v8451 = *(i8*)(intptr_t)v8450;
	i8 v8452 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8452 = v8451;

	i1 v8453 = (i1)+23;
	*(i1*)(intptr_t)(ws+3496) = v8453;
	i8 v8454 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8454;
	i8 v8455 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8455)();

}
	void f282_Expr2Simple(void);
	void f302_yy_destructor(void);

// reduce_41 workspace at ws+3384 length ws+8
void f352_reduce_41(void) {

	i1 v8456 = (i1)+153;
	*(i1*)(intptr_t)(ws+3392) = v8456;
	i1 v8457 = (i1)+148;
	*(i1*)(intptr_t)(ws+3393) = v8457;
	i8 v8458 = (i8)(intptr_t)(ws+3320);
	i8 v8459 = *(i8*)(intptr_t)v8458;
	*(i8*)(intptr_t)(ws+3400) = v8459;
	i8 v8460 = (i8)(intptr_t)(ws+3304);
	i8 v8461 = *(i8*)(intptr_t)v8460;
	*(i8*)(intptr_t)(ws+3408) = v8461;
	i8 v8462 = (i8)(intptr_t)(f282_Expr2Simple);

	((void(*)(void))(intptr_t)v8462)();

	i8 v8463 = *(i8*)(intptr_t)(ws+3416);
	i8 v8464 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8464 = v8463;

	i8 v8465 = (i8)(intptr_t)(ws+3384);
	i8 v8466 = *(i8*)(intptr_t)v8465;
	i8 v8467 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8467 = v8466;

	i1 v8468 = (i1)+18;
	*(i1*)(intptr_t)(ws+3496) = v8468;
	i8 v8469 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8469;
	i8 v8470 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8470)();

}
	void f282_Expr2Simple(void);
	void f302_yy_destructor(void);

// reduce_42 workspace at ws+3384 length ws+8
void f353_reduce_42(void) {

	i1 v8471 = (i1)+178;
	*(i1*)(intptr_t)(ws+3392) = v8471;
	i1 v8472 = (i1)+178;
	*(i1*)(intptr_t)(ws+3393) = v8472;
	i8 v8473 = (i8)(intptr_t)(ws+3320);
	i8 v8474 = *(i8*)(intptr_t)v8473;
	*(i8*)(intptr_t)(ws+3400) = v8474;
	i8 v8475 = (i8)(intptr_t)(ws+3304);
	i8 v8476 = *(i8*)(intptr_t)v8475;
	*(i8*)(intptr_t)(ws+3408) = v8476;
	i8 v8477 = (i8)(intptr_t)(f282_Expr2Simple);

	((void(*)(void))(intptr_t)v8477)();

	i8 v8478 = *(i8*)(intptr_t)(ws+3416);
	i8 v8479 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8479 = v8478;

	i8 v8480 = (i8)(intptr_t)(ws+3384);
	i8 v8481 = *(i8*)(intptr_t)v8480;
	i8 v8482 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8482 = v8481;

	i1 v8483 = (i1)+50;
	*(i1*)(intptr_t)(ws+3496) = v8483;
	i8 v8484 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8484;
	i8 v8485 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8485)();

}
	void f282_Expr2Simple(void);
	void f302_yy_destructor(void);

// reduce_43 workspace at ws+3384 length ws+8
void f354_reduce_43(void) {

	i1 v8486 = (i1)+168;
	*(i1*)(intptr_t)(ws+3392) = v8486;
	i1 v8487 = (i1)+168;
	*(i1*)(intptr_t)(ws+3393) = v8487;
	i8 v8488 = (i8)(intptr_t)(ws+3320);
	i8 v8489 = *(i8*)(intptr_t)v8488;
	*(i8*)(intptr_t)(ws+3400) = v8489;
	i8 v8490 = (i8)(intptr_t)(ws+3304);
	i8 v8491 = *(i8*)(intptr_t)v8490;
	*(i8*)(intptr_t)(ws+3408) = v8491;
	i8 v8492 = (i8)(intptr_t)(f282_Expr2Simple);

	((void(*)(void))(intptr_t)v8492)();

	i8 v8493 = *(i8*)(intptr_t)(ws+3416);
	i8 v8494 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8494 = v8493;

	i8 v8495 = (i8)(intptr_t)(ws+3384);
	i8 v8496 = *(i8*)(intptr_t)v8495;
	i8 v8497 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8497 = v8496;

	i1 v8498 = (i1)+60;
	*(i1*)(intptr_t)(ws+3496) = v8498;
	i8 v8499 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8499;
	i8 v8500 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8500)();

}
	void f282_Expr2Simple(void);
	void f302_yy_destructor(void);

// reduce_44 workspace at ws+3384 length ws+8
void f355_reduce_44(void) {

	i1 v8501 = (i1)+173;
	*(i1*)(intptr_t)(ws+3392) = v8501;
	i1 v8502 = (i1)+173;
	*(i1*)(intptr_t)(ws+3393) = v8502;
	i8 v8503 = (i8)(intptr_t)(ws+3320);
	i8 v8504 = *(i8*)(intptr_t)v8503;
	*(i8*)(intptr_t)(ws+3400) = v8504;
	i8 v8505 = (i8)(intptr_t)(ws+3304);
	i8 v8506 = *(i8*)(intptr_t)v8505;
	*(i8*)(intptr_t)(ws+3408) = v8506;
	i8 v8507 = (i8)(intptr_t)(f282_Expr2Simple);

	((void(*)(void))(intptr_t)v8507)();

	i8 v8508 = *(i8*)(intptr_t)(ws+3416);
	i8 v8509 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8509 = v8508;

	i8 v8510 = (i8)(intptr_t)(ws+3384);
	i8 v8511 = *(i8*)(intptr_t)v8510;
	i8 v8512 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8512 = v8511;

	i1 v8513 = (i1)+49;
	*(i1*)(intptr_t)(ws+3496) = v8513;
	i8 v8514 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8514;
	i8 v8515 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8515)();

}
	void f285_ExprShift(void);
	void f302_yy_destructor(void);

// reduce_45 workspace at ws+3384 length ws+8
void f356_reduce_45(void) {

	i1 v8516 = (i1)+118;
	*(i1*)(intptr_t)(ws+3392) = v8516;
	i1 v8517 = (i1)+118;
	*(i1*)(intptr_t)(ws+3393) = v8517;
	i8 v8518 = (i8)(intptr_t)(ws+3320);
	i8 v8519 = *(i8*)(intptr_t)v8518;
	*(i8*)(intptr_t)(ws+3400) = v8519;
	i8 v8520 = (i8)(intptr_t)(ws+3304);
	i8 v8521 = *(i8*)(intptr_t)v8520;
	*(i8*)(intptr_t)(ws+3408) = v8521;
	i8 v8522 = (i8)(intptr_t)(f285_ExprShift);

	((void(*)(void))(intptr_t)v8522)();

	i8 v8523 = *(i8*)(intptr_t)(ws+3416);
	i8 v8524 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8524 = v8523;

	i8 v8525 = (i8)(intptr_t)(ws+3384);
	i8 v8526 = *(i8*)(intptr_t)v8525;
	i8 v8527 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8527 = v8526;

	i1 v8528 = (i1)+57;
	*(i1*)(intptr_t)(ws+3496) = v8528;
	i8 v8529 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8529;
	i8 v8530 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8530)();

}
	void f285_ExprShift(void);
	void f302_yy_destructor(void);

// reduce_46 workspace at ws+3384 length ws+8
void f357_reduce_46(void) {

	i1 v8531 = (i1)+128;
	*(i1*)(intptr_t)(ws+3392) = v8531;
	i1 v8532 = (i1)+123;
	*(i1*)(intptr_t)(ws+3393) = v8532;
	i8 v8533 = (i8)(intptr_t)(ws+3320);
	i8 v8534 = *(i8*)(intptr_t)v8533;
	*(i8*)(intptr_t)(ws+3400) = v8534;
	i8 v8535 = (i8)(intptr_t)(ws+3304);
	i8 v8536 = *(i8*)(intptr_t)v8535;
	*(i8*)(intptr_t)(ws+3408) = v8536;
	i8 v8537 = (i8)(intptr_t)(f285_ExprShift);

	((void(*)(void))(intptr_t)v8537)();

	i8 v8538 = *(i8*)(intptr_t)(ws+3416);
	i8 v8539 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8539 = v8538;

	i8 v8540 = (i8)(intptr_t)(ws+3384);
	i8 v8541 = *(i8*)(intptr_t)v8540;
	i8 v8542 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8542 = v8541;

	i1 v8543 = (i1)+58;
	*(i1*)(intptr_t)(ws+3496) = v8543;
	i8 v8544 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8544;
	i8 v8545 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8545)();

}
	void f224_CheckNotPartialType(void);
	void f68_IsPtr(void);
	void f68_IsPtr(void);
const i1 c02_s0170[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f76_SimpleError(void);
	void f231_IsSNum(void);
	void f175_MidCCast(void);
	void f302_yy_destructor(void);

// reduce_47 workspace at ws+3384 length ws+16
void f358_reduce_47(void) {

	i8 v8546 = (i8)(intptr_t)(ws+3304);
	i8 v8547 = *(i8*)(intptr_t)v8546;
	*(i8*)(intptr_t)(ws+3520) = v8547;
	i8 v8548 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v8548)();

	i8 v8549 = (i8)(intptr_t)(ws+3320);
	i8 v8550 = *(i8*)(intptr_t)v8549;
	i8 v8551 = v8550+(+48);
	i1 v8552 = *(i1*)(intptr_t)v8551;
	i1 v8553 = (i1)+42;
	if (v8552==v8553) goto c02_0634; else goto c02_0635;

c02_0635:;

	i8 v8554 = (i8)(intptr_t)(ws+3320);
	i8 v8555 = *(i8*)(intptr_t)v8554;
	i8 v8556 = v8555+(+24);
	i8 v8557 = *(i8*)(intptr_t)v8556;
	i8 v8558 = v8557+(+48);
	i2 v8559 = *(i2*)(intptr_t)v8558;
	i8 v8560 = (i8)(intptr_t)(ws+3304);
	i8 v8561 = *(i8*)(intptr_t)v8560;
	i8 v8562 = v8561+(+48);
	i2 v8563 = *(i2*)(intptr_t)v8562;
	if (v8559==v8563) goto c02_0634; else goto c02_0633;

c02_0633:;

	i8 v8564 = (i8)(intptr_t)(ws+3320);
	i8 v8565 = *(i8*)(intptr_t)v8564;
	i8 v8566 = v8565+(+24);
	i8 v8567 = *(i8*)(intptr_t)v8566;
	*(i8*)(intptr_t)(ws+3560) = v8567;
	i8 v8568 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8568)();

	i1 v8569 = *(i1*)(intptr_t)(ws+3568);
	i8 v8570 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8570 = v8569;

	i8 v8571 = (i8)(intptr_t)(ws+3304);
	i8 v8572 = *(i8*)(intptr_t)v8571;
	*(i8*)(intptr_t)(ws+3560) = v8572;
	i8 v8573 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8573)();

	i1 v8574 = *(i1*)(intptr_t)(ws+3568);
	i8 v8575 = (i8)(intptr_t)(ws+3385);
	*(i1*)(intptr_t)v8575 = v8574;

	i8 v8576 = (i8)(intptr_t)(ws+3384);
	i1 v8577 = *(i1*)(intptr_t)v8576;
	i1 v8578 = (i1)+0;
	if (v8577==v8578) goto c02_063d; else goto c02_063b;

c02_063d:;

	i8 v8579 = (i8)(intptr_t)(ws+3385);
	i1 v8580 = *(i1*)(intptr_t)v8579;
	i1 v8581 = (i1)+0;
	if (v8580==v8581) goto c02_063c; else goto c02_063b;

c02_063b:;

	i8 v8582 = (i8)(intptr_t)c02_s0170;
	*(i8*)(intptr_t)(ws+3648) = v8582;
	i8 v8583 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8583)();

c02_063c:;

c02_0636:;

	i8 v8584 = (i8)(intptr_t)(ws+3320);
	i8 v8585 = *(i8*)(intptr_t)v8584;
	i8 v8586 = v8585+(+24);
	i8 v8587 = *(i8*)(intptr_t)v8586;
	*(i8*)(intptr_t)(ws+3456) = v8587;
	i8 v8588 = (i8)(intptr_t)(f231_IsSNum);

	((void(*)(void))(intptr_t)v8588)();

	i1 v8589 = *(i1*)(intptr_t)(ws+3464);
	i8 v8590 = (i8)(intptr_t)(ws+3386);
	*(i1*)(intptr_t)v8590 = v8589;

	i8 v8591 = (i8)(intptr_t)(ws+3304);
	i8 v8592 = *(i8*)(intptr_t)v8591;
	i8 v8593 = v8592+(+48);
	i2 v8594 = *(i2*)(intptr_t)v8593;
	i1 v8595 = v8594;
	*(i1*)(intptr_t)(ws+3496) = v8595;
	i8 v8596 = (i8)(intptr_t)(ws+3320);
	i8 v8597 = *(i8*)(intptr_t)v8596;
	*(i8*)(intptr_t)(ws+3504) = v8597;
	i8 v8598 = (i8)(intptr_t)(ws+3386);
	i1 v8599 = *(i1*)(intptr_t)v8598;
	*(i1*)(intptr_t)(ws+3512) = v8599;
	i8 v8600 = (i8)(intptr_t)(f175_MidCCast);

	((void(*)(void))(intptr_t)v8600)();

	i8 v8601 = *(i8*)(intptr_t)(ws+3520);
	i8 v8602 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8602 = v8601;

	i8 v8603 = (i8)(intptr_t)(ws+3392);
	i8 v8604 = *(i8*)(intptr_t)v8603;
	i8 v8605 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8605 = v8604;

	goto c02_062e;

c02_0634:;

	i8 v8606 = (i8)(intptr_t)(ws+3320);
	i8 v8607 = *(i8*)(intptr_t)v8606;
	i8 v8608 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8608 = v8607;

c02_062e:;

	i8 v8609 = (i8)(intptr_t)(ws+3304);
	i8 v8610 = *(i8*)(intptr_t)v8609;
	i8 v8611 = (i8)(intptr_t)(ws+3296);
	i8 v8612 = *(i8*)(intptr_t)v8611;
	i8 v8613 = v8612+(+24);
	*(i8*)(intptr_t)v8613 = v8610;

	i1 v8614 = (i1)+59;
	*(i1*)(intptr_t)(ws+3496) = v8614;
	i8 v8615 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8615;
	i8 v8616 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8616)();

}
	void f235_UndoLValue(void);
	void f232_IsScalar(void);
const i1 c02_s0171[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f76_SimpleError(void);

// reduce_48 workspace at ws+3384 length ws+17
void f359_reduce_48(void) {

	i8 v8617 = (i8)(intptr_t)(ws+3304);
	i8 v8618 = *(i8*)(intptr_t)v8617;
	*(i8*)(intptr_t)(ws+3432) = v8618;
	i8 v8619 = (i8)(intptr_t)(f235_UndoLValue);

	((void(*)(void))(intptr_t)v8619)();

	i8 v8620 = *(i8*)(intptr_t)(ws+3440);
	i8 v8621 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8621 = v8620;

	i8 v8622 = (i8)(intptr_t)(ws+3384);
	i8 v8623 = *(i8*)(intptr_t)v8622;
	i8 v8624 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8624 = v8623;

	i8 v8625 = (i8)(intptr_t)(ws+3296);
	i8 v8626 = *(i8*)(intptr_t)v8625;
	i8 v8627 = v8626+(+48);
	i1 v8628 = *(i1*)(intptr_t)v8627;
	i1 v8629 = (i1)+44;
	if (v8628==v8629) goto c02_0641; else goto c02_0642;

c02_0641:;

	i8 v8630 = (i8)(intptr_t)(ws+3296);
	i8 v8631 = *(i8*)(intptr_t)v8630;
	i8 v8632 = *(i8*)(intptr_t)v8631;
	i8 v8633 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8633 = v8632;

	i8 v8634 = (i8)(intptr_t)(ws+3392);
	i8 v8635 = *(i8*)(intptr_t)v8634;
	i8 v8636 = *(i8*)(intptr_t)v8635;
	i8 v8637 = *(i8*)(intptr_t)v8636;
	*(i8*)(intptr_t)(ws+3544) = v8637;
	i8 v8638 = (i8)(intptr_t)(f232_IsScalar);

	((void(*)(void))(intptr_t)v8638)();

	i1 v8639 = *(i1*)(intptr_t)(ws+3552);
	i8 v8640 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v8640 = v8639;

	i8 v8641 = (i8)(intptr_t)(ws+3400);
	i1 v8642 = *(i1*)(intptr_t)v8641;
	i1 v8643 = (i1)+0;
	if (v8642==v8643) goto c02_0647; else goto c02_0646;

c02_0646:;

	i8 v8644 = (i8)(intptr_t)c02_s0171;
	*(i8*)(intptr_t)(ws+3648) = v8644;
	i8 v8645 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8645)();

c02_0647:;

c02_0643:;

c02_0642:;

c02_063e:;

}
	void f235_UndoLValue(void);
	void f302_yy_destructor(void);

// reduce_49 workspace at ws+3384 length ws+8
void f360_reduce_49(void) {

	i8 v8646 = (i8)(intptr_t)(ws+3304);
	i8 v8647 = *(i8*)(intptr_t)v8646;
	*(i8*)(intptr_t)(ws+3432) = v8647;
	i8 v8648 = (i8)(intptr_t)(f235_UndoLValue);

	((void(*)(void))(intptr_t)v8648)();

	i8 v8649 = *(i8*)(intptr_t)(ws+3440);
	i8 v8650 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8650 = v8649;

	i8 v8651 = (i8)(intptr_t)(ws+3384);
	i8 v8652 = *(i8*)(intptr_t)v8651;
	i8 v8653 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8653 = v8652;

	i1 v8654 = (i1)+60;
	*(i1*)(intptr_t)(ws+3496) = v8654;
	i8 v8655 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8655;
	i8 v8656 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8656)();

}
	void f68_IsPtr(void);
	void f291_parser_i_bad_next_prev(void);
	void f150_MidConstant(void);
	void f174_MidC2Op(void);

// reduce_50 workspace at ws+3384 length ws+24
void f361_reduce_50(void) {

	i8 v8657 = (i8)(intptr_t)(ws+3304);
	i8 v8658 = *(i8*)(intptr_t)v8657;
	i8 v8659 = v8658+(+24);
	i8 v8660 = *(i8*)(intptr_t)v8659;
	*(i8*)(intptr_t)(ws+3560) = v8660;
	i8 v8661 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8661)();

	i1 v8662 = *(i1*)(intptr_t)(ws+3568);
	i8 v8663 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8663 = v8662;

	i8 v8664 = (i8)(intptr_t)(ws+3384);
	i1 v8665 = *(i1*)(intptr_t)v8664;
	i1 v8666 = (i1)+0;
	if (v8665==v8666) goto c02_064b; else goto c02_064c;

c02_064b:;

	i8 v8667 = (i8)(intptr_t)(f291_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8667)();

c02_064c:;

c02_0648:;

	i8 v8668 = (i8)(intptr_t)(ws+3304);
	i8 v8669 = *(i8*)(intptr_t)v8668;
	i8 v8670 = v8669+(+24);
	i8 v8671 = *(i8*)(intptr_t)v8670;
	i8 v8672 = *(i8*)(intptr_t)v8671;
	i8 v8673 = v8672+(+50);
	i2 v8674 = *(i2*)(intptr_t)v8673;
	i4 v8675 = v8674;
	*(i4*)(intptr_t)(ws+3592) = v8675;
	i8 v8676 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v8676)();

	i8 v8677 = *(i8*)(intptr_t)(ws+3600);
	i8 v8678 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8678 = v8677;

	i1 v8679 = (i1)+158;
	*(i1*)(intptr_t)(ws+3496) = v8679;
	i8 v8680 = (i8)(intptr_t)(ws+1528);
	i8 v8681 = *(i8*)(intptr_t)v8680;
	i8 v8682 = v8681+(+48);
	i2 v8683 = *(i2*)(intptr_t)v8682;
	i1 v8684 = v8683;
	*(i1*)(intptr_t)(ws+3497) = v8684;
	i8 v8685 = (i8)(intptr_t)(ws+3304);
	i8 v8686 = *(i8*)(intptr_t)v8685;
	*(i8*)(intptr_t)(ws+3504) = v8686;
	i8 v8687 = (i8)(intptr_t)(ws+3392);
	i8 v8688 = *(i8*)(intptr_t)v8687;
	*(i8*)(intptr_t)(ws+3512) = v8688;
	i8 v8689 = (i8)(intptr_t)(f174_MidC2Op);

	((void(*)(void))(intptr_t)v8689)();

	i8 v8690 = *(i8*)(intptr_t)(ws+3520);
	i8 v8691 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8691 = v8690;

	i8 v8692 = (i8)(intptr_t)(ws+3400);
	i8 v8693 = *(i8*)(intptr_t)v8692;
	i8 v8694 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8694 = v8693;

	i8 v8695 = (i8)(intptr_t)(ws+3304);
	i8 v8696 = *(i8*)(intptr_t)v8695;
	i8 v8697 = v8696+(+24);
	i8 v8698 = *(i8*)(intptr_t)v8697;
	i8 v8699 = (i8)(intptr_t)(ws+3296);
	i8 v8700 = *(i8*)(intptr_t)v8699;
	i8 v8701 = v8700+(+24);
	*(i8*)(intptr_t)v8701 = v8698;

}
	void f68_IsPtr(void);
	void f291_parser_i_bad_next_prev(void);
	void f150_MidConstant(void);
	void f174_MidC2Op(void);

// reduce_51 workspace at ws+3384 length ws+24
void f362_reduce_51(void) {

	i8 v8702 = (i8)(intptr_t)(ws+3304);
	i8 v8703 = *(i8*)(intptr_t)v8702;
	i8 v8704 = v8703+(+24);
	i8 v8705 = *(i8*)(intptr_t)v8704;
	*(i8*)(intptr_t)(ws+3560) = v8705;
	i8 v8706 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8706)();

	i1 v8707 = *(i1*)(intptr_t)(ws+3568);
	i8 v8708 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8708 = v8707;

	i8 v8709 = (i8)(intptr_t)(ws+3384);
	i1 v8710 = *(i1*)(intptr_t)v8709;
	i1 v8711 = (i1)+0;
	if (v8710==v8711) goto c02_0650; else goto c02_0651;

c02_0650:;

	i8 v8712 = (i8)(intptr_t)(f291_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8712)();

c02_0651:;

c02_064d:;

	i8 v8713 = (i8)(intptr_t)(ws+3304);
	i8 v8714 = *(i8*)(intptr_t)v8713;
	i8 v8715 = v8714+(+24);
	i8 v8716 = *(i8*)(intptr_t)v8715;
	i8 v8717 = *(i8*)(intptr_t)v8716;
	i8 v8718 = v8717+(+50);
	i2 v8719 = *(i2*)(intptr_t)v8718;
	i4 v8720 = v8719;
	*(i4*)(intptr_t)(ws+3592) = v8720;
	i8 v8721 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v8721)();

	i8 v8722 = *(i8*)(intptr_t)(ws+3600);
	i8 v8723 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8723 = v8722;

	i1 v8724 = (i1)+133;
	*(i1*)(intptr_t)(ws+3496) = v8724;
	i8 v8725 = (i8)(intptr_t)(ws+1528);
	i8 v8726 = *(i8*)(intptr_t)v8725;
	i8 v8727 = v8726+(+48);
	i2 v8728 = *(i2*)(intptr_t)v8727;
	i1 v8729 = v8728;
	*(i1*)(intptr_t)(ws+3497) = v8729;
	i8 v8730 = (i8)(intptr_t)(ws+3304);
	i8 v8731 = *(i8*)(intptr_t)v8730;
	*(i8*)(intptr_t)(ws+3504) = v8731;
	i8 v8732 = (i8)(intptr_t)(ws+3392);
	i8 v8733 = *(i8*)(intptr_t)v8732;
	*(i8*)(intptr_t)(ws+3512) = v8733;
	i8 v8734 = (i8)(intptr_t)(f174_MidC2Op);

	((void(*)(void))(intptr_t)v8734)();

	i8 v8735 = *(i8*)(intptr_t)(ws+3520);
	i8 v8736 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8736 = v8735;

	i8 v8737 = (i8)(intptr_t)(ws+3400);
	i8 v8738 = *(i8*)(intptr_t)v8737;
	i8 v8739 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8739 = v8738;

	i8 v8740 = (i8)(intptr_t)(ws+3304);
	i8 v8741 = *(i8*)(intptr_t)v8740;
	i8 v8742 = v8741+(+24);
	i8 v8743 = *(i8*)(intptr_t)v8742;
	i8 v8744 = (i8)(intptr_t)(ws+3296);
	i8 v8745 = *(i8*)(intptr_t)v8744;
	i8 v8746 = v8745+(+24);
	*(i8*)(intptr_t)v8746 = v8743;

}
	void f150_MidConstant(void);

// reduce_52 workspace at ws+3384 length ws+8
void f363_reduce_52(void) {

	i8 v8747 = (i8)(intptr_t)(ws+3304);
	i8 v8748 = *(i8*)(intptr_t)v8747;
	i8 v8749 = v8748+(+48);
	i2 v8750 = *(i2*)(intptr_t)v8749;
	i4 v8751 = v8750;
	*(i4*)(intptr_t)(ws+3592) = v8751;
	i8 v8752 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v8752)();

	i8 v8753 = *(i8*)(intptr_t)(ws+3600);
	i8 v8754 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8754 = v8753;

	i8 v8755 = (i8)(intptr_t)(ws+3384);
	i8 v8756 = *(i8*)(intptr_t)v8755;
	i8 v8757 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8757 = v8756;

}
	void f228_IsArray(void);
const i1 c02_s0172[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(void);
	void f150_MidConstant(void);

// reduce_53 workspace at ws+3384 length ws+16
void f364_reduce_53(void) {

	i8 v8758 = (i8)(intptr_t)(ws+3304);
	i8 v8759 = *(i8*)(intptr_t)v8758;
	*(i8*)(intptr_t)(ws+3496) = v8759;
	i8 v8760 = (i8)(intptr_t)(f228_IsArray);

	((void(*)(void))(intptr_t)v8760)();

	i1 v8761 = *(i1*)(intptr_t)(ws+3504);
	i8 v8762 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8762 = v8761;

	i8 v8763 = (i8)(intptr_t)(ws+3384);
	i1 v8764 = *(i1*)(intptr_t)v8763;
	i1 v8765 = (i1)+0;
	if (v8764==v8765) goto c02_0655; else goto c02_0656;

c02_0655:;

	i8 v8766 = (i8)(intptr_t)c02_s0172;
	*(i8*)(intptr_t)(ws+3648) = v8766;
	i8 v8767 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8767)();

c02_0656:;

c02_0652:;

	i8 v8768 = (i8)(intptr_t)(ws+3304);
	i8 v8769 = *(i8*)(intptr_t)v8768;
	i8 v8770 = v8769+(+8);
	i2 v8771 = *(i2*)(intptr_t)v8770;
	i4 v8772 = v8771;
	*(i4*)(intptr_t)(ws+3592) = v8772;
	i8 v8773 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v8773)();

	i8 v8774 = *(i8*)(intptr_t)(ws+3600);
	i8 v8775 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8775 = v8774;

	i8 v8776 = (i8)(intptr_t)(ws+3392);
	i8 v8777 = *(i8*)(intptr_t)v8776;
	i8 v8778 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8778 = v8777;

}
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0173[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// not_a_value workspace at ws+3424 length ws+0
void f366_not_a_value(void) {

	i8 v8779 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8779)();

	i8 v8780 = (i8)(intptr_t)(ws+3304);
	i8 v8781 = *(i8*)(intptr_t)v8780;
	i8 v8782 = v8781+(+8);
	i8 v8783 = *(i8*)(intptr_t)v8782;
	*(i8*)(intptr_t)(ws+3696) = v8783;
	i8 v8784 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v8784)();

	i8 v8785 = (i8)(intptr_t)c02_s0173;
	*(i8*)(intptr_t)(ws+3696) = v8785;
	i8 v8786 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v8786)();

	i8 v8787 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8787)();

}
	void f150_MidConstant(void);
	void f165_MidAddress(void);
	void f263_MakePointerType(void);
	void f234_MakeLValue(void);
	void f120_MidSubref(void);
	void f366_not_a_value(void);
	void f366_not_a_value(void);

// reduce_54 workspace at ws+3384 length ws+40
void f365_reduce_54(void) {


	i8 v8788 = (i8)(intptr_t)(ws+3304);
	i8 v8789 = *(i8*)(intptr_t)v8788;
	i8 v8790 = v8789+(+32);
	i1 v8791 = *(i1*)(intptr_t)v8790;

	if (v8791 != +7) goto c02_0658;

	i8 v8792 = (i8)(intptr_t)(ws+3304);
	i8 v8793 = *(i8*)(intptr_t)v8792;
	i4 v8794 = *(i4*)(intptr_t)v8793;
	*(i4*)(intptr_t)(ws+3592) = v8794;
	i8 v8795 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v8795)();

	i8 v8796 = *(i8*)(intptr_t)(ws+3600);
	i8 v8797 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8797 = v8796;

	i8 v8798 = (i8)(intptr_t)(ws+3384);
	i8 v8799 = *(i8*)(intptr_t)v8798;
	i8 v8800 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8800 = v8799;

	goto c02_0657;

c02_0658:;

	if (v8791 != +28) goto c02_0659;

	i8 v8801 = (i8)(intptr_t)(ws+3304);
	i8 v8802 = *(i8*)(intptr_t)v8801;
	*(i8*)(intptr_t)(ws+3488) = v8802;
	i2 v8803 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v8803;
	i8 v8804 = (i8)(intptr_t)(f165_MidAddress);

	((void(*)(void))(intptr_t)v8804)();

	i8 v8805 = *(i8*)(intptr_t)(ws+3504);
	i8 v8806 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8806 = v8805;

	i8 v8807 = (i8)(intptr_t)(ws+3392);
	i8 v8808 = *(i8*)(intptr_t)v8807;
	i8 v8809 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8809 = v8808;

	i8 v8810 = (i8)(intptr_t)(ws+3304);
	i8 v8811 = *(i8*)(intptr_t)v8810;
	i8 v8812 = *(i8*)(intptr_t)v8811;
	i8 v8813 = *(i8*)(intptr_t)v8812;
	*(i8*)(intptr_t)(ws+3496) = v8813;
	i8 v8814 = (i8)(intptr_t)(f263_MakePointerType);

	((void(*)(void))(intptr_t)v8814)();

	i8 v8815 = *(i8*)(intptr_t)(ws+3504);
	i8 v8816 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8816 = v8815;

	i8 v8817 = (i8)(intptr_t)(ws+3400);
	i8 v8818 = *(i8*)(intptr_t)v8817;
	i8 v8819 = (i8)(intptr_t)(ws+3296);
	i8 v8820 = *(i8*)(intptr_t)v8819;
	i8 v8821 = v8820+(+24);
	*(i8*)(intptr_t)v8821 = v8818;

	i8 v8822 = (i8)(intptr_t)(ws+3296);
	i8 v8823 = *(i8*)(intptr_t)v8822;
	*(i8*)(intptr_t)(ws+3496) = v8823;
	i8 v8824 = (i8)(intptr_t)(f234_MakeLValue);

	((void(*)(void))(intptr_t)v8824)();

	i8 v8825 = *(i8*)(intptr_t)(ws+3504);
	i8 v8826 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8826 = v8825;

	i8 v8827 = (i8)(intptr_t)(ws+3408);
	i8 v8828 = *(i8*)(intptr_t)v8827;
	i8 v8829 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8829 = v8828;

	goto c02_0657;

c02_0659:;

	if (v8791 != +30) goto c02_065a;

	i8 v8830 = (i8)(intptr_t)(ws+3304);
	i8 v8831 = *(i8*)(intptr_t)v8830;
	i8 v8832 = *(i8*)(intptr_t)v8831;
	i8 v8833 = v8832+(+52);
	i1 v8834 = *(i1*)(intptr_t)v8833;
	i1 v8835 = (i1)+6;
	if (v8834==v8835) goto c02_065e; else goto c02_065f;

c02_065e:;

	i8 v8836 = (i8)(intptr_t)(ws+3304);
	i8 v8837 = *(i8*)(intptr_t)v8836;
	i8 v8838 = *(i8*)(intptr_t)v8837;
	i8 v8839 = *(i8*)(intptr_t)v8838;
	*(i8*)(intptr_t)(ws+3424) = v8839;
	i8 v8840 = (i8)(intptr_t)(f120_MidSubref);

	((void(*)(void))(intptr_t)v8840)();

	i8 v8841 = *(i8*)(intptr_t)(ws+3432);
	i8 v8842 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v8842 = v8841;

	i8 v8843 = (i8)(intptr_t)(ws+3416);
	i8 v8844 = *(i8*)(intptr_t)v8843;
	i8 v8845 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8845 = v8844;

	i8 v8846 = (i8)(intptr_t)(ws+3304);
	i8 v8847 = *(i8*)(intptr_t)v8846;
	i8 v8848 = *(i8*)(intptr_t)v8847;
	i8 v8849 = *(i8*)(intptr_t)v8848;
	i8 v8850 = v8849+(+48);
	i8 v8851 = *(i8*)(intptr_t)v8850;
	i8 v8852 = v8851+(+40);
	i8 v8853 = *(i8*)(intptr_t)v8852;
	i8 v8854 = (i8)(intptr_t)(ws+3296);
	i8 v8855 = *(i8*)(intptr_t)v8854;
	i8 v8856 = v8855+(+24);
	*(i8*)(intptr_t)v8856 = v8853;

	goto c02_065b;

c02_065f:;

	i8 v8857 = (i8)(intptr_t)(f366_not_a_value);

	((void(*)(void))(intptr_t)v8857)();

c02_065b:;

	goto c02_0657;

c02_065a:;

	i8 v8858 = (i8)(intptr_t)(f366_not_a_value);

	((void(*)(void))(intptr_t)v8858)();

c02_0657:;


}
	void f68_IsPtr(void);
const i1 c02_s0174[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(void);
	void f234_MakeLValue(void);
	void f302_yy_destructor(void);

// reduce_55 workspace at ws+3384 length ws+16
void f367_reduce_55(void) {

	i8 v8859 = (i8)(intptr_t)(ws+3312);
	i8 v8860 = *(i8*)(intptr_t)v8859;
	i8 v8861 = v8860+(+24);
	i8 v8862 = *(i8*)(intptr_t)v8861;
	*(i8*)(intptr_t)(ws+3560) = v8862;
	i8 v8863 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8863)();

	i1 v8864 = *(i1*)(intptr_t)(ws+3568);
	i8 v8865 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8865 = v8864;

	i8 v8866 = (i8)(intptr_t)(ws+3384);
	i1 v8867 = *(i1*)(intptr_t)v8866;
	i1 v8868 = (i1)+0;
	if (v8867==v8868) goto c02_0663; else goto c02_0664;

c02_0663:;

	i8 v8869 = (i8)(intptr_t)c02_s0174;
	*(i8*)(intptr_t)(ws+3648) = v8869;
	i8 v8870 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8870)();

c02_0664:;

c02_0660:;

	i8 v8871 = (i8)(intptr_t)(ws+3312);
	i8 v8872 = *(i8*)(intptr_t)v8871;
	*(i8*)(intptr_t)(ws+3496) = v8872;
	i8 v8873 = (i8)(intptr_t)(f234_MakeLValue);

	((void(*)(void))(intptr_t)v8873)();

	i8 v8874 = *(i8*)(intptr_t)(ws+3504);
	i8 v8875 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8875 = v8874;

	i8 v8876 = (i8)(intptr_t)(ws+3392);
	i8 v8877 = *(i8*)(intptr_t)v8876;
	i8 v8878 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8878 = v8877;

	i1 v8879 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v8879;
	i8 v8880 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8880;
	i8 v8881 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v8881)();

}
	void f237_MaybeUndoLValue(void);
	void f228_IsArray(void);
	void f74_StartError(void);
const i1 c02_s0175[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);
	void f271_CheckExpressionType(void);
	void f230_IsNum(void);
const i1 c02_s0176[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(void);
	void f175_MidCCast(void);
	void f150_MidConstant(void);
	void f174_MidC2Op(void);
	void f174_MidC2Op(void);
	void f263_MakePointerType(void);
	void f234_MakeLValue(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_56 workspace at ws+3384 length ws+112
void f368_reduce_56(void) {

	i8 v8882 = (i8)(intptr_t)(ws+3328);
	i8 v8883 = *(i8*)(intptr_t)v8882;
	i8 v8884 = v8883+(+24);
	i8 v8885 = *(i8*)(intptr_t)v8884;
	i8 v8886 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8886 = v8885;

	i8 v8887 = (i8)(intptr_t)(ws+3328);
	i8 v8888 = *(i8*)(intptr_t)v8887;
	*(i8*)(intptr_t)(ws+3496) = v8888;
	i8 v8889 = (i8)(intptr_t)(f237_MaybeUndoLValue);

	((void(*)(void))(intptr_t)v8889)();

	i8 v8890 = *(i8*)(intptr_t)(ws+3504);
	i8 v8891 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8891 = v8890;

	i8 v8892 = (i8)(intptr_t)(ws+3392);
	i8 v8893 = *(i8*)(intptr_t)v8892;
	i8 v8894 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8894 = v8893;

	i8 v8895 = (i8)(intptr_t)(ws+3384);
	i8 v8896 = *(i8*)(intptr_t)v8895;
	*(i8*)(intptr_t)(ws+3496) = v8896;
	i8 v8897 = (i8)(intptr_t)(f228_IsArray);

	((void(*)(void))(intptr_t)v8897)();

	i1 v8898 = *(i1*)(intptr_t)(ws+3504);
	i8 v8899 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v8899 = v8898;

	i8 v8900 = (i8)(intptr_t)(ws+3408);
	i1 v8901 = *(i1*)(intptr_t)v8900;
	i1 v8902 = (i1)+0;
	if (v8901==v8902) goto c02_0668; else goto c02_0669;

c02_0668:;

	i8 v8903 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8903)();

	i8 v8904 = (i8)(intptr_t)c02_s0175;
	*(i8*)(intptr_t)(ws+3696) = v8904;
	i8 v8905 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v8905)();

	i8 v8906 = (i8)(intptr_t)(ws+3384);
	i8 v8907 = *(i8*)(intptr_t)v8906;
	i8 v8908 = v8907+(+32);
	i8 v8909 = *(i8*)(intptr_t)v8908;
	i8 v8910 = v8909+(+8);
	i8 v8911 = *(i8*)(intptr_t)v8910;
	*(i8*)(intptr_t)(ws+3696) = v8911;
	i8 v8912 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v8912)();

	i8 v8913 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8913)();

c02_0669:;

c02_0665:;

	i8 v8914 = (i8)(intptr_t)(ws+3312);
	i8 v8915 = *(i8*)(intptr_t)v8914;
	*(i8*)(intptr_t)(ws+3496) = v8915;
	i8 v8916 = (i8)(intptr_t)(ws+3384);
	i8 v8917 = *(i8*)(intptr_t)v8916;
	i8 v8918 = v8917+(+16);
	i8 v8919 = *(i8*)(intptr_t)v8918;
	*(i8*)(intptr_t)(ws+3504) = v8919;
	i8 v8920 = (i8)(intptr_t)(f271_CheckExpressionType);

	((void(*)(void))(intptr_t)v8920)();

	i8 v8921 = (i8)(intptr_t)(ws+3312);
	i8 v8922 = *(i8*)(intptr_t)v8921;
	i8 v8923 = v8922+(+24);
	i8 v8924 = *(i8*)(intptr_t)v8923;
	*(i8*)(intptr_t)(ws+3560) = v8924;
	i8 v8925 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v8925)();

	i1 v8926 = *(i1*)(intptr_t)(ws+3568);
	i8 v8927 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v8927 = v8926;

	i8 v8928 = (i8)(intptr_t)(ws+3409);
	i1 v8929 = *(i1*)(intptr_t)v8928;
	i1 v8930 = (i1)+0;
	if (v8929==v8930) goto c02_066d; else goto c02_066e;

c02_066d:;

	i8 v8931 = (i8)(intptr_t)c02_s0176;
	*(i8*)(intptr_t)(ws+3648) = v8931;
	i8 v8932 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8932)();

c02_066e:;

c02_066a:;

	i8 v8933 = (i8)(intptr_t)(ws+3384);
	i8 v8934 = *(i8*)(intptr_t)v8933;
	i8 v8935 = *(i8*)(intptr_t)v8934;
	i8 v8936 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v8936 = v8935;

	i8 v8937 = (i8)(intptr_t)(ws+1528);
	i8 v8938 = *(i8*)(intptr_t)v8937;
	i8 v8939 = v8938+(+48);
	i2 v8940 = *(i2*)(intptr_t)v8939;
	i1 v8941 = v8940;
	i8 v8942 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v8942 = v8941;

	i8 v8943 = (i8)(intptr_t)(ws+1528);
	i8 v8944 = *(i8*)(intptr_t)v8943;
	i8 v8945 = v8944+(+48);
	i2 v8946 = *(i2*)(intptr_t)v8945;
	i1 v8947 = v8946;
	*(i1*)(intptr_t)(ws+3496) = v8947;
	i8 v8948 = (i8)(intptr_t)(ws+3312);
	i8 v8949 = *(i8*)(intptr_t)v8948;
	*(i8*)(intptr_t)(ws+3504) = v8949;
	i1 v8950 = (i1)+0;
	*(i1*)(intptr_t)(ws+3512) = v8950;
	i8 v8951 = (i8)(intptr_t)(f175_MidCCast);

	((void(*)(void))(intptr_t)v8951)();

	i8 v8952 = *(i8*)(intptr_t)(ws+3520);
	i8 v8953 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v8953 = v8952;

	i8 v8954 = (i8)(intptr_t)(ws+3416);
	i8 v8955 = *(i8*)(intptr_t)v8954;
	i8 v8956 = v8955+(+50);
	i2 v8957 = *(i2*)(intptr_t)v8956;
	i4 v8958 = v8957;
	*(i4*)(intptr_t)(ws+3592) = v8958;
	i8 v8959 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v8959)();

	i8 v8960 = *(i8*)(intptr_t)(ws+3600);
	i8 v8961 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v8961 = v8960;

	i1 v8962 = (i1)+163;
	*(i1*)(intptr_t)(ws+3496) = v8962;
	i8 v8963 = (i8)(intptr_t)(ws+3424);
	i1 v8964 = *(i1*)(intptr_t)v8963;
	*(i1*)(intptr_t)(ws+3497) = v8964;
	i8 v8965 = (i8)(intptr_t)(ws+3432);
	i8 v8966 = *(i8*)(intptr_t)v8965;
	*(i8*)(intptr_t)(ws+3504) = v8966;
	i8 v8967 = (i8)(intptr_t)(ws+3440);
	i8 v8968 = *(i8*)(intptr_t)v8967;
	*(i8*)(intptr_t)(ws+3512) = v8968;
	i8 v8969 = (i8)(intptr_t)(f174_MidC2Op);

	((void(*)(void))(intptr_t)v8969)();

	i8 v8970 = *(i8*)(intptr_t)(ws+3520);
	i8 v8971 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v8971 = v8970;

	i8 v8972 = (i8)(intptr_t)(ws+3448);
	i8 v8973 = *(i8*)(intptr_t)v8972;
	i8 v8974 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v8974 = v8973;

	i8 v8975 = (i8)(intptr_t)(ws+1528);
	i8 v8976 = *(i8*)(intptr_t)v8975;
	i8 v8977 = (i8)(intptr_t)(ws+3456);
	i8 v8978 = *(i8*)(intptr_t)v8977;
	i8 v8979 = v8978+(+24);
	*(i8*)(intptr_t)v8979 = v8976;

	i1 v8980 = (i1)+158;
	*(i1*)(intptr_t)(ws+3496) = v8980;
	i8 v8981 = (i8)(intptr_t)(ws+3424);
	i1 v8982 = *(i1*)(intptr_t)v8981;
	*(i1*)(intptr_t)(ws+3497) = v8982;
	i8 v8983 = (i8)(intptr_t)(ws+3400);
	i8 v8984 = *(i8*)(intptr_t)v8983;
	*(i8*)(intptr_t)(ws+3504) = v8984;
	i8 v8985 = (i8)(intptr_t)(ws+3456);
	i8 v8986 = *(i8*)(intptr_t)v8985;
	*(i8*)(intptr_t)(ws+3512) = v8986;
	i8 v8987 = (i8)(intptr_t)(f174_MidC2Op);

	((void(*)(void))(intptr_t)v8987)();

	i8 v8988 = *(i8*)(intptr_t)(ws+3520);
	i8 v8989 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v8989 = v8988;

	i8 v8990 = (i8)(intptr_t)(ws+3464);
	i8 v8991 = *(i8*)(intptr_t)v8990;
	i8 v8992 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v8992 = v8991;

	i8 v8993 = (i8)(intptr_t)(ws+3416);
	i8 v8994 = *(i8*)(intptr_t)v8993;
	*(i8*)(intptr_t)(ws+3496) = v8994;
	i8 v8995 = (i8)(intptr_t)(f263_MakePointerType);

	((void(*)(void))(intptr_t)v8995)();

	i8 v8996 = *(i8*)(intptr_t)(ws+3504);
	i8 v8997 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v8997 = v8996;

	i8 v8998 = (i8)(intptr_t)(ws+3480);
	i8 v8999 = *(i8*)(intptr_t)v8998;
	i8 v9000 = (i8)(intptr_t)(ws+3472);
	i8 v9001 = *(i8*)(intptr_t)v9000;
	i8 v9002 = v9001+(+24);
	*(i8*)(intptr_t)v9002 = v8999;

	i8 v9003 = (i8)(intptr_t)(ws+3472);
	i8 v9004 = *(i8*)(intptr_t)v9003;
	*(i8*)(intptr_t)(ws+3496) = v9004;
	i8 v9005 = (i8)(intptr_t)(f234_MakeLValue);

	((void(*)(void))(intptr_t)v9005)();

	i8 v9006 = *(i8*)(intptr_t)(ws+3504);
	i8 v9007 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v9007 = v9006;

	i8 v9008 = (i8)(intptr_t)(ws+3488);
	i8 v9009 = *(i8*)(intptr_t)v9008;
	i8 v9010 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9010 = v9009;

	i1 v9011 = (i1)+17;
	*(i1*)(intptr_t)(ws+3496) = v9011;
	i8 v9012 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9012;
	i8 v9013 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9013)();

	i1 v9014 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9014;
	i8 v9015 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9015;
	i8 v9016 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9016)();

}
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0177[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f12_print(void);
	void f75_EndError(void);

// BadType workspace at ws+3488 length ws+0
void f370_BadType(void) {

	i8 v9025 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9025)();

	i8 v9026 = (i8)(intptr_t)(ws+3384);
	i8 v9027 = *(i8*)(intptr_t)v9026;
	i8 v9028 = v9027+(+32);
	i8 v9029 = *(i8*)(intptr_t)v9028;
	i8 v9030 = v9029+(+8);
	i8 v9031 = *(i8*)(intptr_t)v9030;
	*(i8*)(intptr_t)(ws+3696) = v9031;
	i8 v9032 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9032)();

	i8 v9033 = (i8)(intptr_t)c02_s0177;
	*(i8*)(intptr_t)(ws+3696) = v9033;
	i8 v9034 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9034)();

	i8 v9035 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9035)();

}
	void f236_IsLValue(void);
	void f237_MaybeUndoLValue(void);
	void f68_IsPtr(void);
	void f224_CheckNotPartialType(void);
	void f134_MidDeref(void);
	void f68_IsPtr(void);
	void f370_BadType(void);
	void f224_CheckNotPartialType(void);
	void f233_IsRecord(void);
	void f370_BadType(void);
	void f219_LookupSymbol(void);
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0178[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0179[] = { 0x27,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f34_Free(void);
	void f150_MidConstant(void);
	void f174_MidC2Op(void);
	void f263_MakePointerType(void);
	void f234_MakeLValue(void);
	void f302_yy_destructor(void);

// reduce_57 workspace at ws+3384 length ws+104
void f369_reduce_57(void) {

	i8 v9017 = (i8)(intptr_t)(ws+3320);
	i8 v9018 = *(i8*)(intptr_t)v9017;
	i8 v9019 = v9018+(+24);
	i8 v9020 = *(i8*)(intptr_t)v9019;
	i8 v9021 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9021 = v9020;

	i8 v9022 = (i8)(intptr_t)(ws+3320);
	i8 v9023 = *(i8*)(intptr_t)v9022;
	i8 v9024 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9024 = v9023;


	i8 v9036 = (i8)(intptr_t)(ws+3392);
	i8 v9037 = *(i8*)(intptr_t)v9036;
	*(i8*)(intptr_t)(ws+3488) = v9037;
	i8 v9038 = (i8)(intptr_t)(f236_IsLValue);

	((void(*)(void))(intptr_t)v9038)();

	i1 v9039 = *(i1*)(intptr_t)(ws+3496);
	i8 v9040 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9040 = v9039;

	i8 v9041 = (i8)(intptr_t)(ws+3400);
	i1 v9042 = *(i1*)(intptr_t)v9041;
	i1 v9043 = (i1)+0;
	if (v9042==v9043) goto c02_0673; else goto c02_0672;

c02_0672:;

	i8 v9044 = (i8)(intptr_t)(ws+3320);
	i8 v9045 = *(i8*)(intptr_t)v9044;
	*(i8*)(intptr_t)(ws+3496) = v9045;
	i8 v9046 = (i8)(intptr_t)(f237_MaybeUndoLValue);

	((void(*)(void))(intptr_t)v9046)();

	i8 v9047 = *(i8*)(intptr_t)(ws+3504);
	i8 v9048 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9048 = v9047;

	i8 v9049 = (i8)(intptr_t)(ws+3408);
	i8 v9050 = *(i8*)(intptr_t)v9049;
	i8 v9051 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9051 = v9050;

c02_0674:;

	i8 v9052 = (i8)(intptr_t)(ws+3384);
	i8 v9053 = *(i8*)(intptr_t)v9052;
	*(i8*)(intptr_t)(ws+3560) = v9053;
	i8 v9054 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v9054)();

	i1 v9055 = *(i1*)(intptr_t)(ws+3568);
	i8 v9056 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v9056 = v9055;

	i8 v9057 = (i8)(intptr_t)(ws+3416);
	i1 v9058 = *(i1*)(intptr_t)v9057;
	i1 v9059 = (i1)+0;
	if (v9058==v9059) goto c02_0679; else goto c02_0678;

c02_0678:;

	i8 v9060 = (i8)(intptr_t)(ws+3384);
	i8 v9061 = *(i8*)(intptr_t)v9060;
	i8 v9062 = *(i8*)(intptr_t)v9061;
	i8 v9063 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9063 = v9062;

	i8 v9064 = (i8)(intptr_t)(ws+3384);
	i8 v9065 = *(i8*)(intptr_t)v9064;
	*(i8*)(intptr_t)(ws+3520) = v9065;
	i8 v9066 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9066)();

	i8 v9067 = (i8)(intptr_t)(ws+1528);
	i8 v9068 = *(i8*)(intptr_t)v9067;
	i8 v9069 = v9068+(+48);
	i2 v9070 = *(i2*)(intptr_t)v9069;
	i1 v9071 = v9070;
	*(i1*)(intptr_t)(ws+3544) = v9071;
	i8 v9072 = (i8)(intptr_t)(ws+3392);
	i8 v9073 = *(i8*)(intptr_t)v9072;
	*(i8*)(intptr_t)(ws+3552) = v9073;
	i8 v9074 = (i8)(intptr_t)(f134_MidDeref);

	((void(*)(void))(intptr_t)v9074)();

	i8 v9075 = *(i8*)(intptr_t)(ws+3560);
	i8 v9076 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9076 = v9075;

	i8 v9077 = (i8)(intptr_t)(ws+3424);
	i8 v9078 = *(i8*)(intptr_t)v9077;
	i8 v9079 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9079 = v9078;

	goto c02_0674;

c02_0679:;

	goto c02_066f;

c02_0673:;

	i8 v9080 = (i8)(intptr_t)(ws+3384);
	i8 v9081 = *(i8*)(intptr_t)v9080;
	*(i8*)(intptr_t)(ws+3560) = v9081;
	i8 v9082 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v9082)();

	i1 v9083 = *(i1*)(intptr_t)(ws+3568);
	i8 v9084 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v9084 = v9083;

	i8 v9085 = (i8)(intptr_t)(ws+3432);
	i1 v9086 = *(i1*)(intptr_t)v9085;
	i1 v9087 = (i1)+0;
	if (v9086==v9087) goto c02_067d; else goto c02_067c;

c02_067c:;

	i8 v9088 = (i8)(intptr_t)(ws+3384);
	i8 v9089 = *(i8*)(intptr_t)v9088;
	i8 v9090 = *(i8*)(intptr_t)v9089;
	i8 v9091 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9091 = v9090;

	goto c02_066f;

c02_067d:;

	i8 v9092 = (i8)(intptr_t)(f370_BadType);

	((void(*)(void))(intptr_t)v9092)();

c02_066f:;

	i8 v9093 = (i8)(intptr_t)(ws+3384);
	i8 v9094 = *(i8*)(intptr_t)v9093;
	*(i8*)(intptr_t)(ws+3520) = v9094;
	i8 v9095 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9095)();

	i8 v9096 = (i8)(intptr_t)(ws+3384);
	i8 v9097 = *(i8*)(intptr_t)v9096;
	*(i8*)(intptr_t)(ws+3488) = v9097;
	i8 v9098 = (i8)(intptr_t)(f233_IsRecord);

	((void(*)(void))(intptr_t)v9098)();

	i1 v9099 = *(i1*)(intptr_t)(ws+3496);
	i8 v9100 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v9100 = v9099;

	i8 v9101 = (i8)(intptr_t)(ws+3433);
	i1 v9102 = *(i1*)(intptr_t)v9101;
	i1 v9103 = (i1)+0;
	if (v9102==v9103) goto c02_0681; else goto c02_0682;

c02_0681:;

	i8 v9104 = (i8)(intptr_t)(f370_BadType);

	((void(*)(void))(intptr_t)v9104)();

c02_0682:;

c02_067e:;

	i8 v9105 = (i8)(intptr_t)(ws+3384);
	i8 v9106 = *(i8*)(intptr_t)v9105;
	*(i8*)(intptr_t)(ws+3488) = v9106;
	i8 v9107 = (i8)(intptr_t)(ws+3304);
	i8 v9108 = *(i8*)(intptr_t)v9107;
	*(i8*)(intptr_t)(ws+3496) = v9108;
	i8 v9109 = (i8)(intptr_t)(f219_LookupSymbol);

	((void(*)(void))(intptr_t)v9109)();

	i8 v9110 = *(i8*)(intptr_t)(ws+3504);
	i8 v9111 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v9111 = v9110;

	i8 v9112 = (i8)(intptr_t)(ws+3440);
	i8 v9113 = *(i8*)(intptr_t)v9112;
	i8 v9114 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9114 = v9113;

	i8 v9115 = (i8)(intptr_t)(ws+3448);
	i8 v9116 = *(i8*)(intptr_t)v9115;
	i8 v9117 = (i8)+0;
	if (v9116==v9117) goto c02_0686; else goto c02_0687;

c02_0686:;

	i8 v9118 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9118)();

	i8 v9119 = (i8)(intptr_t)(ws+3384);
	i8 v9120 = *(i8*)(intptr_t)v9119;
	i8 v9121 = v9120+(+32);
	i8 v9122 = *(i8*)(intptr_t)v9121;
	i8 v9123 = v9122+(+8);
	i8 v9124 = *(i8*)(intptr_t)v9123;
	*(i8*)(intptr_t)(ws+3696) = v9124;
	i8 v9125 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9125)();

	i8 v9126 = (i8)(intptr_t)c02_s0178;
	*(i8*)(intptr_t)(ws+3696) = v9126;
	i8 v9127 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9127)();

	i8 v9128 = (i8)(intptr_t)(ws+3304);
	i8 v9129 = *(i8*)(intptr_t)v9128;
	*(i8*)(intptr_t)(ws+3696) = v9129;
	i8 v9130 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9130)();

	i8 v9131 = (i8)(intptr_t)c02_s0179;
	*(i8*)(intptr_t)(ws+3696) = v9131;
	i8 v9132 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9132)();

	i8 v9133 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9133)();

c02_0687:;

c02_0683:;

	i8 v9134 = (i8)(intptr_t)(ws+3304);
	i8 v9135 = *(i8*)(intptr_t)v9134;
	*(i8*)(intptr_t)(ws+3680) = v9135;
	i8 v9136 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v9136)();

	i8 v9137 = (i8)(intptr_t)(ws+3448);
	i8 v9138 = *(i8*)(intptr_t)v9137;
	i8 v9139 = *(i8*)(intptr_t)v9138;
	i8 v9140 = v9139+(+24);
	i2 v9141 = *(i2*)(intptr_t)v9140;
	i4 v9142 = v9141;
	*(i4*)(intptr_t)(ws+3592) = v9142;
	i8 v9143 = (i8)(intptr_t)(f150_MidConstant);

	((void(*)(void))(intptr_t)v9143)();

	i8 v9144 = *(i8*)(intptr_t)(ws+3600);
	i8 v9145 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v9145 = v9144;

	i1 v9146 = (i1)+158;
	*(i1*)(intptr_t)(ws+3496) = v9146;
	i8 v9147 = (i8)(intptr_t)(ws+1528);
	i8 v9148 = *(i8*)(intptr_t)v9147;
	i8 v9149 = v9148+(+48);
	i2 v9150 = *(i2*)(intptr_t)v9149;
	i1 v9151 = v9150;
	*(i1*)(intptr_t)(ws+3497) = v9151;
	i8 v9152 = (i8)(intptr_t)(ws+3392);
	i8 v9153 = *(i8*)(intptr_t)v9152;
	*(i8*)(intptr_t)(ws+3504) = v9153;
	i8 v9154 = (i8)(intptr_t)(ws+3456);
	i8 v9155 = *(i8*)(intptr_t)v9154;
	*(i8*)(intptr_t)(ws+3512) = v9155;
	i8 v9156 = (i8)(intptr_t)(f174_MidC2Op);

	((void(*)(void))(intptr_t)v9156)();

	i8 v9157 = *(i8*)(intptr_t)(ws+3520);
	i8 v9158 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9158 = v9157;

	i8 v9159 = (i8)(intptr_t)(ws+3464);
	i8 v9160 = *(i8*)(intptr_t)v9159;
	i8 v9161 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9161 = v9160;

	i8 v9162 = (i8)(intptr_t)(ws+3448);
	i8 v9163 = *(i8*)(intptr_t)v9162;
	i8 v9164 = *(i8*)(intptr_t)v9163;
	i8 v9165 = *(i8*)(intptr_t)v9164;
	*(i8*)(intptr_t)(ws+3496) = v9165;
	i8 v9166 = (i8)(intptr_t)(f263_MakePointerType);

	((void(*)(void))(intptr_t)v9166)();

	i8 v9167 = *(i8*)(intptr_t)(ws+3504);
	i8 v9168 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9168 = v9167;

	i8 v9169 = (i8)(intptr_t)(ws+3472);
	i8 v9170 = *(i8*)(intptr_t)v9169;
	i8 v9171 = (i8)(intptr_t)(ws+3296);
	i8 v9172 = *(i8*)(intptr_t)v9171;
	i8 v9173 = v9172+(+24);
	*(i8*)(intptr_t)v9173 = v9170;

	i8 v9174 = (i8)(intptr_t)(ws+3296);
	i8 v9175 = *(i8*)(intptr_t)v9174;
	*(i8*)(intptr_t)(ws+3496) = v9175;
	i8 v9176 = (i8)(intptr_t)(f234_MakeLValue);

	((void(*)(void))(intptr_t)v9176)();

	i8 v9177 = *(i8*)(intptr_t)(ws+3504);
	i8 v9178 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9178 = v9177;

	i8 v9179 = (i8)(intptr_t)(ws+3480);
	i8 v9180 = *(i8*)(intptr_t)v9179;
	i8 v9181 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9181 = v9180;

	i1 v9182 = (i1)+8;
	*(i1*)(intptr_t)(ws+3496) = v9182;
	i8 v9183 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v9183;
	i8 v9184 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9184)();

}
	void f122_MidString(void);
	void f263_MakePointerType(void);

// reduce_58 workspace at ws+3384 length ws+16
void f371_reduce_58(void) {

	i8 v9185 = (i8)(intptr_t)(ws+3304);
	i8 v9186 = *(i8*)(intptr_t)v9185;
	*(i8*)(intptr_t)(ws+3400) = v9186;
	i8 v9187 = (i8)(intptr_t)(f122_MidString);

	((void(*)(void))(intptr_t)v9187)();

	i8 v9188 = *(i8*)(intptr_t)(ws+3408);
	i8 v9189 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9189 = v9188;

	i8 v9190 = (i8)(intptr_t)(ws+3384);
	i8 v9191 = *(i8*)(intptr_t)v9190;
	i8 v9192 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9192 = v9191;

	i8 v9193 = (i8)(intptr_t)(ws+1512);
	i8 v9194 = *(i8*)(intptr_t)v9193;
	*(i8*)(intptr_t)(ws+3496) = v9194;
	i8 v9195 = (i8)(intptr_t)(f263_MakePointerType);

	((void(*)(void))(intptr_t)v9195)();

	i8 v9196 = *(i8*)(intptr_t)(ws+3504);
	i8 v9197 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9197 = v9196;

	i8 v9198 = (i8)(intptr_t)(ws+3392);
	i8 v9199 = *(i8*)(intptr_t)v9198;
	i8 v9200 = (i8)(intptr_t)(ws+3296);
	i8 v9201 = *(i8*)(intptr_t)v9200;
	i8 v9202 = v9201+(+24);
	*(i8*)(intptr_t)v9202 = v9199;

}
	void f292_parser_i_constant_error(void);
	void f63_Discard(void);

// reduce_59 workspace at ws+3384 length ws+0
void f372_reduce_59(void) {

	i8 v9203 = (i8)(intptr_t)(ws+3304);
	i8 v9204 = *(i8*)(intptr_t)v9203;
	i8 v9205 = v9204+(+48);
	i1 v9206 = *(i1*)(intptr_t)v9205;
	i1 v9207 = (i1)+42;
	if (v9206==v9207) goto c02_068c; else goto c02_068b;

c02_068b:;

	i8 v9208 = (i8)(intptr_t)(f292_parser_i_constant_error);

	((void(*)(void))(intptr_t)v9208)();

c02_068c:;

c02_0688:;

	i8 v9209 = (i8)(intptr_t)(ws+3304);
	i8 v9210 = *(i8*)(intptr_t)v9209;
	i4 v9211 = *(i4*)(intptr_t)v9210;
	i8 v9212 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v9212 = v9211;

	i8 v9213 = (i8)(intptr_t)(ws+3304);
	i8 v9214 = *(i8*)(intptr_t)v9213;
	*(i8*)(intptr_t)(ws+3592) = v9214;
	i8 v9215 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v9215)();

}
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_60 workspace at ws+3384 length ws+0
void f373_reduce_60(void) {

	i1 v9216 = (i1)+7;
	i8 v9217 = (i8)(intptr_t)(ws+3328);
	i8 v9218 = *(i8*)(intptr_t)v9217;
	i8 v9219 = v9218+(+32);
	*(i1*)(intptr_t)v9219 = v9216;

	i8 v9220 = (i8)(intptr_t)(ws+3312);
	i4 v9221 = *(i4*)(intptr_t)v9220;
	i8 v9222 = (i8)(intptr_t)(ws+3328);
	i8 v9223 = *(i8*)(intptr_t)v9222;
	*(i4*)(intptr_t)v9223 = v9221;

	i1 v9224 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v9224;
	i8 v9225 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9225;
	i8 v9226 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9226)();

	i1 v9227 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9227;
	i8 v9228 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9228;
	i8 v9229 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9229)();

}
const i1 c02_s017a[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f76_SimpleError(void);
	void f243_ArchGuessIntType(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_61 workspace at ws+3384 length ws+8
void f374_reduce_61(void) {

	i8 v9230 = (i8)(intptr_t)(ws+3328);
	i4 v9231 = *(i4*)(intptr_t)v9230;
	i8 v9232 = (i8)(intptr_t)(ws+3312);
	i4 v9233 = *(i4*)(intptr_t)v9232;
	if ((s4)v9231<(s4)v9233) goto c02_0691; else goto c02_0690;

c02_0690:;

	i8 v9234 = (i8)(intptr_t)c02_s017a;
	*(i8*)(intptr_t)(ws+3648) = v9234;
	i8 v9235 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9235)();

c02_0691:;

c02_068d:;

	i8 v9236 = (i8)(intptr_t)(ws+3328);
	i4 v9237 = *(i4*)(intptr_t)v9236;
	*(i4*)(intptr_t)(ws+3448) = v9237;
	i8 v9238 = (i8)(intptr_t)(ws+3312);
	i4 v9239 = *(i4*)(intptr_t)v9238;
	*(i4*)(intptr_t)(ws+3452) = v9239;
	i8 v9240 = (i8)(intptr_t)(f243_ArchGuessIntType);

	((void(*)(void))(intptr_t)v9240)();

	i8 v9241 = *(i8*)(intptr_t)(ws+3456);
	i8 v9242 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9242 = v9241;

	i8 v9243 = (i8)(intptr_t)(ws+3384);
	i8 v9244 = *(i8*)(intptr_t)v9243;
	i8 v9245 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9245 = v9244;

	i1 v9246 = (i1)+16;
	*(i1*)(intptr_t)(ws+3496) = v9246;
	i8 v9247 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v9247;
	i8 v9248 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9248)();

	i1 v9249 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v9249;
	i8 v9250 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9250;
	i8 v9251 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9251)();

	i1 v9252 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9252;
	i8 v9253 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9253;
	i8 v9254 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9254)();

}
	void f66_AllocNewType(void);
	void f74_StartError(void);
const i1 c02_s017b[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s017c[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// reduce_62 workspace at ws+3384 length ws+24
void f375_reduce_62(void) {

	i8 v9255 = (i8)(intptr_t)(ws+3304);
	i8 v9256 = *(i8*)(intptr_t)v9255;
	i8 v9257 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9257 = v9256;

	i8 v9258 = (i8)(intptr_t)(ws+3384);
	i8 v9259 = *(i8*)(intptr_t)v9258;
	i8 v9260 = v9259+(+32);
	i1 v9261 = *(i1*)(intptr_t)v9260;
	i1 v9262 = (i1)+0;
	if (v9261==v9262) goto c02_0695; else goto c02_0696;

c02_0695:;

	i8 v9263 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v9263)();

	i8 v9264 = *(i8*)(intptr_t)(ws+3528);
	i8 v9265 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9265 = v9264;

	i8 v9266 = (i8)(intptr_t)(ws+3392);
	i8 v9267 = *(i8*)(intptr_t)v9266;
	i8 v9268 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9268 = v9267;

	i1 v9269 = (i1)+1;
	i8 v9270 = (i8)(intptr_t)(ws+3400);
	i8 v9271 = *(i8*)(intptr_t)v9270;
	i8 v9272 = v9271+(+52);
	*(i1*)(intptr_t)v9272 = v9269;

	i1 v9273 = (i1)+30;
	i8 v9274 = (i8)(intptr_t)(ws+3384);
	i8 v9275 = *(i8*)(intptr_t)v9274;
	i8 v9276 = v9275+(+32);
	*(i1*)(intptr_t)v9276 = v9273;

	i8 v9277 = (i8)(intptr_t)(ws+3400);
	i8 v9278 = *(i8*)(intptr_t)v9277;
	i8 v9279 = (i8)(intptr_t)(ws+3384);
	i8 v9280 = *(i8*)(intptr_t)v9279;
	*(i8*)(intptr_t)v9280 = v9278;

	i8 v9281 = (i8)(intptr_t)(ws+3384);
	i8 v9282 = *(i8*)(intptr_t)v9281;
	i8 v9283 = (i8)(intptr_t)(ws+3400);
	i8 v9284 = *(i8*)(intptr_t)v9283;
	i8 v9285 = v9284+(+32);
	*(i8*)(intptr_t)v9285 = v9282;

c02_0696:;

c02_0692:;

	i8 v9286 = (i8)(intptr_t)(ws+3384);
	i8 v9287 = *(i8*)(intptr_t)v9286;
	i8 v9288 = v9287+(+32);
	i1 v9289 = *(i1*)(intptr_t)v9288;
	i1 v9290 = (i1)+30;
	if (v9289==v9290) goto c02_069b; else goto c02_069a;

c02_069a:;

	i8 v9291 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9291)();

	i8 v9292 = (i8)(intptr_t)c02_s017b;
	*(i8*)(intptr_t)(ws+3696) = v9292;
	i8 v9293 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9293)();

	i8 v9294 = (i8)(intptr_t)(ws+3384);
	i8 v9295 = *(i8*)(intptr_t)v9294;
	i8 v9296 = v9295+(+8);
	i8 v9297 = *(i8*)(intptr_t)v9296;
	*(i8*)(intptr_t)(ws+3696) = v9297;
	i8 v9298 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9298)();

	i8 v9299 = (i8)(intptr_t)c02_s017c;
	*(i8*)(intptr_t)(ws+3696) = v9299;
	i8 v9300 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9300)();

	i8 v9301 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9301)();

c02_069b:;

c02_0697:;

	i8 v9302 = (i8)(intptr_t)(ws+3384);
	i8 v9303 = *(i8*)(intptr_t)v9302;
	i8 v9304 = *(i8*)(intptr_t)v9303;
	i8 v9305 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9305 = v9304;

}
	void f263_MakePointerType(void);
	void f302_yy_destructor(void);

// reduce_63 workspace at ws+3384 length ws+8
void f376_reduce_63(void) {

	i8 v9306 = (i8)(intptr_t)(ws+3312);
	i8 v9307 = *(i8*)(intptr_t)v9306;
	*(i8*)(intptr_t)(ws+3496) = v9307;
	i8 v9308 = (i8)(intptr_t)(f263_MakePointerType);

	((void(*)(void))(intptr_t)v9308)();

	i8 v9309 = *(i8*)(intptr_t)(ws+3504);
	i8 v9310 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9310 = v9309;

	i8 v9311 = (i8)(intptr_t)(ws+3384);
	i8 v9312 = *(i8*)(intptr_t)v9311;
	i8 v9313 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9313 = v9312;

	i1 v9314 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9314;
	i8 v9315 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9315;
	i8 v9316 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9316)();

}
	void f264_MakeArrayType(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_64 workspace at ws+3384 length ws+8
void f377_reduce_64(void) {

	i8 v9317 = (i8)(intptr_t)(ws+3328);
	i8 v9318 = *(i8*)(intptr_t)v9317;
	*(i8*)(intptr_t)(ws+3392) = v9318;
	i8 v9319 = (i8)(intptr_t)(ws+3312);
	i4 v9320 = *(i4*)(intptr_t)v9319;
	i2 v9321 = (s2)(s4)v9320;
	*(i2*)(intptr_t)(ws+3400) = v9321;
	i8 v9322 = (i8)(intptr_t)(f264_MakeArrayType);

	((void(*)(void))(intptr_t)v9322)();

	i8 v9323 = *(i8*)(intptr_t)(ws+3408);
	i8 v9324 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9324 = v9323;

	i8 v9325 = (i8)(intptr_t)(ws+3384);
	i8 v9326 = *(i8*)(intptr_t)v9325;
	i8 v9327 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9327 = v9326;

	i1 v9328 = (i1)+17;
	*(i1*)(intptr_t)(ws+3496) = v9328;
	i8 v9329 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9329;
	i8 v9330 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9330)();

	i1 v9331 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9331;
	i8 v9332 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9332;
	i8 v9333 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9333)();

}
	void f264_MakeArrayType(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_65 workspace at ws+3384 length ws+8
void f378_reduce_65(void) {

	i8 v9334 = (i8)(intptr_t)(ws+3320);
	i8 v9335 = *(i8*)(intptr_t)v9334;
	*(i8*)(intptr_t)(ws+3392) = v9335;
	i2 v9336 = (i2)+0;
	*(i2*)(intptr_t)(ws+3400) = v9336;
	i8 v9337 = (i8)(intptr_t)(f264_MakeArrayType);

	((void(*)(void))(intptr_t)v9337)();

	i8 v9338 = *(i8*)(intptr_t)(ws+3408);
	i8 v9339 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9339 = v9338;

	i8 v9340 = (i8)(intptr_t)(ws+3384);
	i8 v9341 = *(i8*)(intptr_t)v9340;
	i8 v9342 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9342 = v9341;

	i1 v9343 = (i1)+17;
	*(i1*)(intptr_t)(ws+3496) = v9343;
	i8 v9344 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v9344;
	i8 v9345 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9345)();

	i1 v9346 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9346;
	i8 v9347 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9347;
	i8 v9348 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9348)();

}
	void f228_IsArray(void);
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s017d[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f12_print(void);
	void f75_EndError(void);

// reduce_66 workspace at ws+3384 length ws+1
void f379_reduce_66(void) {

	i8 v9349 = (i8)(intptr_t)(ws+3304);
	i8 v9350 = *(i8*)(intptr_t)v9349;
	*(i8*)(intptr_t)(ws+3496) = v9350;
	i8 v9351 = (i8)(intptr_t)(f228_IsArray);

	((void(*)(void))(intptr_t)v9351)();

	i1 v9352 = *(i1*)(intptr_t)(ws+3504);
	i8 v9353 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9353 = v9352;

	i8 v9354 = (i8)(intptr_t)(ws+3384);
	i1 v9355 = *(i1*)(intptr_t)v9354;
	i1 v9356 = (i1)+0;
	if (v9355==v9356) goto c02_069f; else goto c02_06a0;

c02_069f:;

	i8 v9357 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9357)();

	i8 v9358 = (i8)(intptr_t)(ws+3304);
	i8 v9359 = *(i8*)(intptr_t)v9358;
	i8 v9360 = v9359+(+32);
	i8 v9361 = *(i8*)(intptr_t)v9360;
	i8 v9362 = v9361+(+8);
	i8 v9363 = *(i8*)(intptr_t)v9362;
	*(i8*)(intptr_t)(ws+3696) = v9363;
	i8 v9364 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9364)();

	i8 v9365 = (i8)(intptr_t)c02_s017d;
	*(i8*)(intptr_t)(ws+3696) = v9365;
	i8 v9366 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9366)();

	i8 v9367 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9367)();

c02_06a0:;

c02_069c:;

	i8 v9368 = (i8)(intptr_t)(ws+3304);
	i8 v9369 = *(i8*)(intptr_t)v9368;
	i8 v9370 = v9369+(+16);
	i8 v9371 = *(i8*)(intptr_t)v9370;
	i8 v9372 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9372 = v9371;

}
	void f222_AddAlias(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_67 workspace at ws+3384 length ws+16
void f380_reduce_67(void) {

	i8 v9373 = (i8)+0;
	*(i8*)(intptr_t)(ws+3400) = v9373;
	i8 v9374 = (i8)(intptr_t)(ws+3328);
	i8 v9375 = *(i8*)(intptr_t)v9374;
	*(i8*)(intptr_t)(ws+3408) = v9375;
	i8 v9376 = (i8)(intptr_t)(ws+3312);
	i8 v9377 = *(i8*)(intptr_t)v9376;
	i8 v9378 = v9377+(+32);
	i8 v9379 = *(i8*)(intptr_t)v9378;
	*(i8*)(intptr_t)(ws+3416) = v9379;
	i8 v9380 = (i8)(intptr_t)(f222_AddAlias);

	((void(*)(void))(intptr_t)v9380)();

	i8 v9381 = *(i8*)(intptr_t)(ws+3424);
	i8 v9382 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9382 = v9381;

	i8 v9383 = (i8)(intptr_t)(ws+3384);
	i8 v9384 = *(i8*)(intptr_t)v9383;
	i8 v9385 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9385 = v9384;

	i1 v9386 = (i1)+66;
	*(i1*)(intptr_t)(ws+3496) = v9386;
	i8 v9387 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9387;
	i8 v9388 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9388)();

	i1 v9389 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9389;
	i8 v9390 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9390;
	i8 v9391 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9391)();

}
	void f221_AddSymbol(void);

// reduce_68 workspace at ws+3384 length ws+8
void f381_reduce_68(void) {

	i8 v9392 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9392;
	i8 v9393 = (i8)(intptr_t)(ws+3304);
	i8 v9394 = *(i8*)(intptr_t)v9393;
	*(i8*)(intptr_t)(ws+3496) = v9394;
	i8 v9395 = (i8)(intptr_t)(f221_AddSymbol);

	((void(*)(void))(intptr_t)v9395)();

	i8 v9396 = *(i8*)(intptr_t)(ws+3504);
	i8 v9397 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9397 = v9396;

	i8 v9398 = (i8)(intptr_t)(ws+3384);
	i8 v9399 = *(i8*)(intptr_t)v9398;
	i8 v9400 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9400 = v9399;

}
	void f219_LookupSymbol(void);
	void f74_StartError(void);
const i1 c02_s017e[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s017f[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f34_Free(void);

// reduce_69 workspace at ws+3384 length ws+24
void f382_reduce_69(void) {

	i8 v9401 = (i8)(intptr_t)(ws+3304);
	i8 v9402 = *(i8*)(intptr_t)v9401;
	i8 v9403 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9403 = v9402;

	i8 v9404 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9404;
	i8 v9405 = (i8)(intptr_t)(ws+3384);
	i8 v9406 = *(i8*)(intptr_t)v9405;
	*(i8*)(intptr_t)(ws+3496) = v9406;
	i8 v9407 = (i8)(intptr_t)(f219_LookupSymbol);

	((void(*)(void))(intptr_t)v9407)();

	i8 v9408 = *(i8*)(intptr_t)(ws+3504);
	i8 v9409 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9409 = v9408;

	i8 v9410 = (i8)(intptr_t)(ws+3392);
	i8 v9411 = *(i8*)(intptr_t)v9410;
	i8 v9412 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9412 = v9411;

	i8 v9413 = (i8)(intptr_t)(ws+3400);
	i8 v9414 = *(i8*)(intptr_t)v9413;
	i8 v9415 = (i8)+0;
	if (v9414==v9415) goto c02_06a4; else goto c02_06a5;

c02_06a4:;

	i8 v9416 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9416)();

	i8 v9417 = (i8)(intptr_t)c02_s017e;
	*(i8*)(intptr_t)(ws+3696) = v9417;
	i8 v9418 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9418)();

	i8 v9419 = (i8)(intptr_t)(ws+3384);
	i8 v9420 = *(i8*)(intptr_t)v9419;
	*(i8*)(intptr_t)(ws+3696) = v9420;
	i8 v9421 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9421)();

	i8 v9422 = (i8)(intptr_t)c02_s017f;
	*(i8*)(intptr_t)(ws+3696) = v9422;
	i8 v9423 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9423)();

	i8 v9424 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9424)();

c02_06a5:;

c02_06a1:;

	i8 v9425 = (i8)(intptr_t)(ws+3384);
	i8 v9426 = *(i8*)(intptr_t)v9425;
	*(i8*)(intptr_t)(ws+3680) = v9426;
	i8 v9427 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v9427)();

	i8 v9428 = (i8)(intptr_t)(ws+3400);
	i8 v9429 = *(i8*)(intptr_t)v9428;
	i8 v9430 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9430 = v9429;

}
	void f219_LookupSymbol(void);
	void f221_AddSymbol(void);
	void f34_Free(void);

// reduce_70 workspace at ws+3384 length ws+32
void f383_reduce_70(void) {

	i8 v9431 = (i8)(intptr_t)(ws+3304);
	i8 v9432 = *(i8*)(intptr_t)v9431;
	i8 v9433 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9433 = v9432;

	i8 v9434 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9434;
	i8 v9435 = (i8)(intptr_t)(ws+3384);
	i8 v9436 = *(i8*)(intptr_t)v9435;
	*(i8*)(intptr_t)(ws+3496) = v9436;
	i8 v9437 = (i8)(intptr_t)(f219_LookupSymbol);

	((void(*)(void))(intptr_t)v9437)();

	i8 v9438 = *(i8*)(intptr_t)(ws+3504);
	i8 v9439 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9439 = v9438;

	i8 v9440 = (i8)(intptr_t)(ws+3392);
	i8 v9441 = *(i8*)(intptr_t)v9440;
	i8 v9442 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9442 = v9441;

	i8 v9443 = (i8)(intptr_t)(ws+3400);
	i8 v9444 = *(i8*)(intptr_t)v9443;
	i8 v9445 = (i8)+0;
	if (v9444==v9445) goto c02_06a9; else goto c02_06aa;

c02_06a9:;

	i8 v9446 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9446;
	i8 v9447 = (i8)(intptr_t)(ws+3384);
	i8 v9448 = *(i8*)(intptr_t)v9447;
	*(i8*)(intptr_t)(ws+3496) = v9448;
	i8 v9449 = (i8)(intptr_t)(f221_AddSymbol);

	((void(*)(void))(intptr_t)v9449)();

	i8 v9450 = *(i8*)(intptr_t)(ws+3504);
	i8 v9451 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9451 = v9450;

	i8 v9452 = (i8)(intptr_t)(ws+3408);
	i8 v9453 = *(i8*)(intptr_t)v9452;
	i8 v9454 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9454 = v9453;

	goto c02_06a6;

c02_06aa:;

	i8 v9455 = (i8)(intptr_t)(ws+3384);
	i8 v9456 = *(i8*)(intptr_t)v9455;
	*(i8*)(intptr_t)(ws+3680) = v9456;
	i8 v9457 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v9457)();

c02_06a6:;

	i8 v9458 = (i8)(intptr_t)(ws+3400);
	i8 v9459 = *(i8*)(intptr_t)v9458;
	i8 v9460 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9460 = v9459;

}
const i1 c02_s0180[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(void);

// reduce_71 workspace at ws+3384 length ws+0
void f384_reduce_71(void) {

	i8 v9461 = (i8)(intptr_t)(ws+3304);
	i8 v9462 = *(i8*)(intptr_t)v9461;
	i8 v9463 = v9462+(+32);
	i1 v9464 = *(i1*)(intptr_t)v9463;

	if (v9464 != +28) goto c02_06ac;

	i8 v9465 = (i8)(intptr_t)(ws+3304);
	i8 v9466 = *(i8*)(intptr_t)v9465;
	i8 v9467 = *(i8*)(intptr_t)v9466;
	i8 v9468 = *(i8*)(intptr_t)v9467;
	i8 v9469 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9469 = v9468;

	goto c02_06ab;

c02_06ac:;

	if (v9464 != +30) goto c02_06ad;

	i8 v9470 = (i8)(intptr_t)(ws+3304);
	i8 v9471 = *(i8*)(intptr_t)v9470;
	i8 v9472 = *(i8*)(intptr_t)v9471;
	i8 v9473 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9473 = v9472;

	goto c02_06ab;

c02_06ad:;

	i8 v9474 = (i8)(intptr_t)c02_s0180;
	*(i8*)(intptr_t)(ws+3648) = v9474;
	i8 v9475 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9475)();

c02_06ab:;


}
	void f302_yy_destructor(void);

// reduce_72 workspace at ws+3384 length ws+0
void f385_reduce_72(void) {

	i8 v9476 = (i8)(intptr_t)(ws+3312);
	i8 v9477 = *(i8*)(intptr_t)v9476;
	i8 v9478 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9478 = v9477;

	i1 v9479 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9479;
	i8 v9480 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9480;
	i8 v9481 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9481)();

}
	void f293_i_check_sub_call_args(void);
const i1 c02_s0181[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f76_SimpleError(void);
	void f100_GetOutputParameter(void);
	void f221_AddSymbol(void);
	void f262_InitVariable(void);
	void f119_MidCall(void);
	void f259_Generate(void);
	void f121_MidPoparg(void);
	void f165_MidAddress(void);
	void f134_MidDeref(void);
	void f162_MidStore(void);
	void f259_Generate(void);
	void f294_i_end_call(void);
	void f165_MidAddress(void);
	void f134_MidDeref(void);

// reduce_73 workspace at ws+3384 length ws+104
void f386_reduce_73(void) {

	i8 v9482 = (i8)(intptr_t)(ws+80);
	i8 v9483 = *(i8*)(intptr_t)v9482;
	i8 v9484 = v9483+(+8);
	i8 v9485 = *(i8*)(intptr_t)v9484;
	i8 v9486 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9486 = v9485;

	i1 v9487 = (i1)+1;
	i8 v9488 = (i8)(intptr_t)(ws+80);
	i8 v9489 = *(i8*)(intptr_t)v9488;
	i8 v9490 = v9489+(+41);
	*(i1*)(intptr_t)v9490 = v9487;

	i8 v9491 = (i8)(intptr_t)(f293_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9491)();

	i8 v9492 = (i8)(intptr_t)(ws+3384);
	i8 v9493 = *(i8*)(intptr_t)v9492;
	i8 v9494 = v9493+(+81);
	i1 v9495 = *(i1*)(intptr_t)v9494;
	i1 v9496 = (i1)+1;
	if (v9495==v9496) goto c02_06b2; else goto c02_06b1;

c02_06b1:;

	i8 v9497 = (i8)(intptr_t)c02_s0181;
	*(i8*)(intptr_t)(ws+3648) = v9497;
	i8 v9498 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9498)();

c02_06b2:;

c02_06ae:;

	i8 v9499 = (i8)(intptr_t)(ws+3384);
	i8 v9500 = *(i8*)(intptr_t)v9499;
	*(i8*)(intptr_t)(ws+3488) = v9500;
	i1 v9501 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v9501;
	i8 v9502 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v9502)();

	i8 v9503 = *(i8*)(intptr_t)(ws+3504);
	i8 v9504 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9504 = v9503;

	i8 v9505 = (i8)(intptr_t)(ws+3392);
	i8 v9506 = *(i8*)(intptr_t)v9505;
	i8 v9507 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9507 = v9506;

	i8 v9508 = (i8)(intptr_t)(ws+3400);
	i8 v9509 = *(i8*)(intptr_t)v9508;
	i8 v9510 = *(i8*)(intptr_t)v9509;
	i8 v9511 = *(i8*)(intptr_t)v9510;
	i8 v9512 = v9511+(+48);
	i2 v9513 = *(i2*)(intptr_t)v9512;
	i1 v9514 = v9513;
	i8 v9515 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v9515 = v9514;

	i8 v9516 = (i8)(intptr_t)(ws+40);
	i8 v9517 = *(i8*)(intptr_t)v9516;
	i8 v9518 = v9517+(+16);
	*(i8*)(intptr_t)(ws+3488) = v9518;
	i8 v9519 = (i8)+0;
	*(i8*)(intptr_t)(ws+3496) = v9519;
	i8 v9520 = (i8)(intptr_t)(f221_AddSymbol);

	((void(*)(void))(intptr_t)v9520)();

	i8 v9521 = *(i8*)(intptr_t)(ws+3504);
	i8 v9522 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9522 = v9521;

	i8 v9523 = (i8)(intptr_t)(ws+3416);
	i8 v9524 = *(i8*)(intptr_t)v9523;
	i8 v9525 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9525 = v9524;

	i8 v9526 = (i8)(intptr_t)(ws+40);
	i8 v9527 = *(i8*)(intptr_t)v9526;
	*(i8*)(intptr_t)(ws+3488) = v9527;
	i8 v9528 = (i8)(intptr_t)(ws+3424);
	i8 v9529 = *(i8*)(intptr_t)v9528;
	*(i8*)(intptr_t)(ws+3496) = v9529;
	i8 v9530 = (i8)(intptr_t)(ws+3400);
	i8 v9531 = *(i8*)(intptr_t)v9530;
	i8 v9532 = *(i8*)(intptr_t)v9531;
	i8 v9533 = *(i8*)(intptr_t)v9532;
	*(i8*)(intptr_t)(ws+3504) = v9533;
	i8 v9534 = (i8)(intptr_t)(f262_InitVariable);

	((void(*)(void))(intptr_t)v9534)();

	i8 v9535 = (i8)(intptr_t)(ws+3304);
	i8 v9536 = *(i8*)(intptr_t)v9535;
	*(i8*)(intptr_t)(ws+3488) = v9536;
	i8 v9537 = (i8)(intptr_t)(ws+80);
	i8 v9538 = *(i8*)(intptr_t)v9537;
	i8 v9539 = *(i8*)(intptr_t)v9538;
	*(i8*)(intptr_t)(ws+3496) = v9539;
	i8 v9540 = (i8)(intptr_t)(ws+3384);
	i8 v9541 = *(i8*)(intptr_t)v9540;
	*(i8*)(intptr_t)(ws+3504) = v9541;
	i8 v9542 = (i8)(intptr_t)(f119_MidCall);

	((void(*)(void))(intptr_t)v9542)();

	i8 v9543 = *(i8*)(intptr_t)(ws+3512);
	i8 v9544 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v9544 = v9543;

	i8 v9545 = (i8)(intptr_t)(ws+3432);
	i8 v9546 = *(i8*)(intptr_t)v9545;
	*(i8*)(intptr_t)(ws+3488) = v9546;
	i8 v9547 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v9547)();

	i8 v9548 = (i8)(intptr_t)(ws+3408);
	i1 v9549 = *(i1*)(intptr_t)v9548;
	*(i1*)(intptr_t)(ws+3488) = v9549;
	i8 v9550 = (i8)(intptr_t)(ws+3384);
	i8 v9551 = *(i8*)(intptr_t)v9550;
	*(i8*)(intptr_t)(ws+3496) = v9551;
	i8 v9552 = (i8)(intptr_t)(ws+3400);
	i8 v9553 = *(i8*)(intptr_t)v9552;
	*(i8*)(intptr_t)(ws+3504) = v9553;
	i1 v9554 = (i1)+0;
	*(i1*)(intptr_t)(ws+3512) = v9554;
	i8 v9555 = (i8)(intptr_t)(f121_MidPoparg);

	((void(*)(void))(intptr_t)v9555)();

	i8 v9556 = *(i8*)(intptr_t)(ws+3520);
	i8 v9557 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v9557 = v9556;

	i8 v9558 = (i8)(intptr_t)(ws+3424);
	i8 v9559 = *(i8*)(intptr_t)v9558;
	*(i8*)(intptr_t)(ws+3488) = v9559;
	i2 v9560 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v9560;
	i8 v9561 = (i8)(intptr_t)(f165_MidAddress);

	((void(*)(void))(intptr_t)v9561)();

	i8 v9562 = *(i8*)(intptr_t)(ws+3504);
	i8 v9563 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9563 = v9562;

	i8 v9564 = (i8)(intptr_t)(ws+3408);
	i1 v9565 = *(i1*)(intptr_t)v9564;
	*(i1*)(intptr_t)(ws+3544) = v9565;
	i8 v9566 = (i8)(intptr_t)(ws+3448);
	i8 v9567 = *(i8*)(intptr_t)v9566;
	*(i8*)(intptr_t)(ws+3552) = v9567;
	i8 v9568 = (i8)(intptr_t)(f134_MidDeref);

	((void(*)(void))(intptr_t)v9568)();

	i8 v9569 = *(i8*)(intptr_t)(ws+3560);
	i8 v9570 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v9570 = v9569;

	i8 v9571 = (i8)(intptr_t)(ws+3408);
	i1 v9572 = *(i1*)(intptr_t)v9571;
	*(i1*)(intptr_t)(ws+3488) = v9572;
	i8 v9573 = (i8)(intptr_t)(ws+3440);
	i8 v9574 = *(i8*)(intptr_t)v9573;
	*(i8*)(intptr_t)(ws+3496) = v9574;
	i8 v9575 = (i8)(intptr_t)(ws+3456);
	i8 v9576 = *(i8*)(intptr_t)v9575;
	*(i8*)(intptr_t)(ws+3504) = v9576;
	i8 v9577 = (i8)(intptr_t)(f162_MidStore);

	((void(*)(void))(intptr_t)v9577)();

	i8 v9578 = *(i8*)(intptr_t)(ws+3512);
	i8 v9579 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9579 = v9578;

	i8 v9580 = (i8)(intptr_t)(ws+3464);
	i8 v9581 = *(i8*)(intptr_t)v9580;
	*(i8*)(intptr_t)(ws+3488) = v9581;
	i8 v9582 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v9582)();

	i8 v9583 = (i8)(intptr_t)(f294_i_end_call);

	((void(*)(void))(intptr_t)v9583)();

	i8 v9584 = (i8)(intptr_t)(ws+3424);
	i8 v9585 = *(i8*)(intptr_t)v9584;
	*(i8*)(intptr_t)(ws+3488) = v9585;
	i2 v9586 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v9586;
	i8 v9587 = (i8)(intptr_t)(f165_MidAddress);

	((void(*)(void))(intptr_t)v9587)();

	i8 v9588 = *(i8*)(intptr_t)(ws+3504);
	i8 v9589 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9589 = v9588;

	i8 v9590 = (i8)(intptr_t)(ws+3408);
	i1 v9591 = *(i1*)(intptr_t)v9590;
	*(i1*)(intptr_t)(ws+3544) = v9591;
	i8 v9592 = (i8)(intptr_t)(ws+3472);
	i8 v9593 = *(i8*)(intptr_t)v9592;
	*(i8*)(intptr_t)(ws+3552) = v9593;
	i8 v9594 = (i8)(intptr_t)(f134_MidDeref);

	((void(*)(void))(intptr_t)v9594)();

	i8 v9595 = *(i8*)(intptr_t)(ws+3560);
	i8 v9596 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9596 = v9595;

	i8 v9597 = (i8)(intptr_t)(ws+3480);
	i8 v9598 = *(i8*)(intptr_t)v9597;
	i8 v9599 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9599 = v9598;

	i8 v9600 = (i8)(intptr_t)(ws+3400);
	i8 v9601 = *(i8*)(intptr_t)v9600;
	i8 v9602 = *(i8*)(intptr_t)v9601;
	i8 v9603 = *(i8*)(intptr_t)v9602;
	i8 v9604 = (i8)(intptr_t)(ws+3296);
	i8 v9605 = *(i8*)(intptr_t)v9604;
	i8 v9606 = v9605+(+24);
	*(i8*)(intptr_t)v9606 = v9603;

}
	void f293_i_check_sub_call_args(void);
const i1 c02_s0182[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);
	void f119_MidCall(void);
	void f259_Generate(void);
	void f294_i_end_call(void);
	void f302_yy_destructor(void);

// reduce_74 workspace at ws+3384 length ws+16
void f387_reduce_74(void) {

	i8 v9607 = (i8)(intptr_t)(ws+80);
	i8 v9608 = *(i8*)(intptr_t)v9607;
	i8 v9609 = v9608+(+8);
	i8 v9610 = *(i8*)(intptr_t)v9609;
	i8 v9611 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9611 = v9610;

	i8 v9612 = (i8)(intptr_t)(f293_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9612)();

	i8 v9613 = (i8)(intptr_t)(ws+3384);
	i8 v9614 = *(i8*)(intptr_t)v9613;
	i8 v9615 = v9614+(+81);
	i1 v9616 = *(i1*)(intptr_t)v9615;
	i1 v9617 = (i1)+0;
	if (v9616==v9617) goto c02_06b7; else goto c02_06b6;

c02_06b6:;

	i8 v9618 = (i8)(intptr_t)c02_s0182;
	*(i8*)(intptr_t)(ws+3648) = v9618;
	i8 v9619 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9619)();

c02_06b7:;

c02_06b3:;

	i8 v9620 = (i8)(intptr_t)(ws+3312);
	i8 v9621 = *(i8*)(intptr_t)v9620;
	*(i8*)(intptr_t)(ws+3488) = v9621;
	i8 v9622 = (i8)(intptr_t)(ws+80);
	i8 v9623 = *(i8*)(intptr_t)v9622;
	i8 v9624 = *(i8*)(intptr_t)v9623;
	*(i8*)(intptr_t)(ws+3496) = v9624;
	i8 v9625 = (i8)(intptr_t)(ws+3384);
	i8 v9626 = *(i8*)(intptr_t)v9625;
	*(i8*)(intptr_t)(ws+3504) = v9626;
	i8 v9627 = (i8)(intptr_t)(f119_MidCall);

	((void(*)(void))(intptr_t)v9627)();

	i8 v9628 = *(i8*)(intptr_t)(ws+3512);
	i8 v9629 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9629 = v9628;

	i8 v9630 = (i8)(intptr_t)(ws+3392);
	i8 v9631 = *(i8*)(intptr_t)v9630;
	*(i8*)(intptr_t)(ws+3488) = v9631;
	i8 v9632 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v9632)();

	i8 v9633 = (i8)(intptr_t)(f294_i_end_call);

	((void(*)(void))(intptr_t)v9633)();

	i1 v9634 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9634;
	i8 v9635 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9635;
	i8 v9636 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9636)();

}
	void f293_i_check_sub_call_args(void);
	void f119_MidCall(void);
	void f259_Generate(void);
const i1 c02_s0183[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);
	void f100_GetOutputParameter(void);
	void f68_IsPtr(void);
const i1 c02_s0184[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(void);
	void f263_MakePointerType(void);
	void f271_CheckExpressionType(void);
	void f224_CheckNotPartialType(void);
	void f224_CheckNotPartialType(void);
	void f121_MidPoparg(void);
	void f134_MidDeref(void);
	void f162_MidStore(void);
	void f259_Generate(void);
	void f63_Discard(void);
const i1 c02_s0185[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);
	void f294_i_end_call(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_75 workspace at ws+3384 length ws+104
void f388_reduce_75(void) {

	i8 v9637 = (i8)(intptr_t)(ws+80);
	i8 v9638 = *(i8*)(intptr_t)v9637;
	i8 v9639 = v9638+(+8);
	i8 v9640 = *(i8*)(intptr_t)v9639;
	i8 v9641 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9641 = v9640;

	i8 v9642 = (i8)(intptr_t)(f293_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9642)();

	i8 v9643 = (i8)(intptr_t)(ws+3312);
	i8 v9644 = *(i8*)(intptr_t)v9643;
	*(i8*)(intptr_t)(ws+3488) = v9644;
	i8 v9645 = (i8)(intptr_t)(ws+80);
	i8 v9646 = *(i8*)(intptr_t)v9645;
	i8 v9647 = *(i8*)(intptr_t)v9646;
	*(i8*)(intptr_t)(ws+3496) = v9647;
	i8 v9648 = (i8)(intptr_t)(ws+3384);
	i8 v9649 = *(i8*)(intptr_t)v9648;
	*(i8*)(intptr_t)(ws+3504) = v9649;
	i8 v9650 = (i8)(intptr_t)(f119_MidCall);

	((void(*)(void))(intptr_t)v9650)();

	i8 v9651 = *(i8*)(intptr_t)(ws+3512);
	i8 v9652 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9652 = v9651;

	i8 v9653 = (i8)(intptr_t)(ws+3392);
	i8 v9654 = *(i8*)(intptr_t)v9653;
	*(i8*)(intptr_t)(ws+3488) = v9654;
	i8 v9655 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v9655)();

	i8 v9656 = (i8)(intptr_t)(ws+3384);
	i8 v9657 = *(i8*)(intptr_t)v9656;
	i8 v9658 = v9657+(+81);
	i1 v9659 = *(i1*)(intptr_t)v9658;
	i8 v9660 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9660 = v9659;

	i1 v9661 = (i1)+0;
	i8 v9662 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v9662 = v9661;

	i8 v9663 = (i8)(intptr_t)(ws+3336);
	i8 v9664 = *(i8*)(intptr_t)v9663;
	i8 v9665 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9665 = v9664;

c02_06b8:;

	i8 v9666 = (i8)(intptr_t)(ws+3408);
	i8 v9667 = *(i8*)(intptr_t)v9666;
	i8 v9668 = (i8)+0;
	if (v9667==v9668) goto c02_06bd; else goto c02_06bc;

c02_06bc:;

	i8 v9669 = (i8)(intptr_t)(ws+3400);
	i1 v9670 = *(i1*)(intptr_t)v9669;
	i1 v9671 = (i1)+0;
	if (v9670==v9671) goto c02_06c1; else goto c02_06c2;

c02_06c1:;

	i8 v9672 = (i8)(intptr_t)c02_s0183;
	*(i8*)(intptr_t)(ws+3648) = v9672;
	i8 v9673 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9673)();

c02_06c2:;

c02_06be:;

	i8 v9674 = (i8)(intptr_t)(ws+3400);
	i1 v9675 = *(i1*)(intptr_t)v9674;
	i1 v9676 = v9675+(-1);
	i8 v9677 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9677 = v9676;

	i8 v9678 = (i8)(intptr_t)(ws+3384);
	i8 v9679 = *(i8*)(intptr_t)v9678;
	*(i8*)(intptr_t)(ws+3488) = v9679;
	i8 v9680 = (i8)(intptr_t)(ws+3400);
	i1 v9681 = *(i1*)(intptr_t)v9680;
	*(i1*)(intptr_t)(ws+3496) = v9681;
	i8 v9682 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v9682)();

	i8 v9683 = *(i8*)(intptr_t)(ws+3504);
	i8 v9684 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9684 = v9683;

	i8 v9685 = (i8)(intptr_t)(ws+3416);
	i8 v9686 = *(i8*)(intptr_t)v9685;
	i8 v9687 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9687 = v9686;

	i8 v9688 = (i8)(intptr_t)(ws+3408);
	i8 v9689 = *(i8*)(intptr_t)v9688;
	i8 v9690 = v9689+(+32);
	i8 v9691 = *(i8*)(intptr_t)v9690;
	i8 v9692 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v9692 = v9691;

	i8 v9693 = (i8)+0;
	i8 v9694 = (i8)(intptr_t)(ws+3408);
	i8 v9695 = *(i8*)(intptr_t)v9694;
	i8 v9696 = v9695+(+32);
	*(i8*)(intptr_t)v9696 = v9693;

	i8 v9697 = (i8)(intptr_t)(ws+3408);
	i8 v9698 = *(i8*)(intptr_t)v9697;
	i8 v9699 = v9698+(+40);
	i8 v9700 = *(i8*)(intptr_t)v9699;
	i8 v9701 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9701 = v9700;

	i8 v9702 = (i8)(intptr_t)(ws+3432);
	i8 v9703 = *(i8*)(intptr_t)v9702;
	i8 v9704 = v9703+(+24);
	i8 v9705 = *(i8*)(intptr_t)v9704;
	*(i8*)(intptr_t)(ws+3560) = v9705;
	i8 v9706 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v9706)();

	i1 v9707 = *(i1*)(intptr_t)(ws+3568);
	i8 v9708 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v9708 = v9707;

	i8 v9709 = (i8)(intptr_t)(ws+3440);
	i1 v9710 = *(i1*)(intptr_t)v9709;
	i1 v9711 = (i1)+0;
	if (v9710==v9711) goto c02_06c6; else goto c02_06c7;

c02_06c6:;

	i8 v9712 = (i8)(intptr_t)c02_s0184;
	*(i8*)(intptr_t)(ws+3648) = v9712;
	i8 v9713 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9713)();

c02_06c7:;

c02_06c3:;

	i8 v9714 = (i8)(intptr_t)(ws+3424);
	i8 v9715 = *(i8*)(intptr_t)v9714;
	i8 v9716 = *(i8*)(intptr_t)v9715;
	i8 v9717 = *(i8*)(intptr_t)v9716;
	*(i8*)(intptr_t)(ws+3496) = v9717;
	i8 v9718 = (i8)(intptr_t)(f263_MakePointerType);

	((void(*)(void))(intptr_t)v9718)();

	i8 v9719 = *(i8*)(intptr_t)(ws+3504);
	i8 v9720 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9720 = v9719;

	i8 v9721 = (i8)(intptr_t)(ws+3432);
	i8 v9722 = *(i8*)(intptr_t)v9721;
	*(i8*)(intptr_t)(ws+3496) = v9722;
	i8 v9723 = (i8)(intptr_t)(ws+3448);
	i8 v9724 = *(i8*)(intptr_t)v9723;
	*(i8*)(intptr_t)(ws+3504) = v9724;
	i8 v9725 = (i8)(intptr_t)(f271_CheckExpressionType);

	((void(*)(void))(intptr_t)v9725)();

	i8 v9726 = (i8)(intptr_t)(ws+3424);
	i8 v9727 = *(i8*)(intptr_t)v9726;
	i8 v9728 = *(i8*)(intptr_t)v9727;
	i8 v9729 = *(i8*)(intptr_t)v9728;
	*(i8*)(intptr_t)(ws+3520) = v9729;
	i8 v9730 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9730)();

	i8 v9731 = (i8)(intptr_t)(ws+3432);
	i8 v9732 = *(i8*)(intptr_t)v9731;
	i8 v9733 = v9732+(+24);
	i8 v9734 = *(i8*)(intptr_t)v9733;
	*(i8*)(intptr_t)(ws+3520) = v9734;
	i8 v9735 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9735)();

	i8 v9736 = (i8)(intptr_t)(ws+3424);
	i8 v9737 = *(i8*)(intptr_t)v9736;
	i8 v9738 = *(i8*)(intptr_t)v9737;
	i8 v9739 = *(i8*)(intptr_t)v9738;
	i8 v9740 = v9739+(+48);
	i2 v9741 = *(i2*)(intptr_t)v9740;
	i1 v9742 = v9741;
	i8 v9743 = (i8)(intptr_t)(ws+3456);
	*(i1*)(intptr_t)v9743 = v9742;

	i8 v9744 = (i8)(intptr_t)(ws+3456);
	i1 v9745 = *(i1*)(intptr_t)v9744;
	*(i1*)(intptr_t)(ws+3488) = v9745;
	i8 v9746 = (i8)(intptr_t)(ws+3384);
	i8 v9747 = *(i8*)(intptr_t)v9746;
	*(i8*)(intptr_t)(ws+3496) = v9747;
	i8 v9748 = (i8)(intptr_t)(ws+3424);
	i8 v9749 = *(i8*)(intptr_t)v9748;
	*(i8*)(intptr_t)(ws+3504) = v9749;
	i8 v9750 = (i8)(intptr_t)(ws+3401);
	i1 v9751 = *(i1*)(intptr_t)v9750;
	*(i1*)(intptr_t)(ws+3512) = v9751;
	i8 v9752 = (i8)(intptr_t)(f121_MidPoparg);

	((void(*)(void))(intptr_t)v9752)();

	i8 v9753 = *(i8*)(intptr_t)(ws+3520);
	i8 v9754 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9754 = v9753;

	i8 v9755 = (i8)(intptr_t)(ws+3456);
	i1 v9756 = *(i1*)(intptr_t)v9755;
	*(i1*)(intptr_t)(ws+3544) = v9756;
	i8 v9757 = (i8)(intptr_t)(ws+3432);
	i8 v9758 = *(i8*)(intptr_t)v9757;
	*(i8*)(intptr_t)(ws+3552) = v9758;
	i8 v9759 = (i8)(intptr_t)(f134_MidDeref);

	((void(*)(void))(intptr_t)v9759)();

	i8 v9760 = *(i8*)(intptr_t)(ws+3560);
	i8 v9761 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9761 = v9760;

	i8 v9762 = (i8)(intptr_t)(ws+3456);
	i1 v9763 = *(i1*)(intptr_t)v9762;
	*(i1*)(intptr_t)(ws+3488) = v9763;
	i8 v9764 = (i8)(intptr_t)(ws+3464);
	i8 v9765 = *(i8*)(intptr_t)v9764;
	*(i8*)(intptr_t)(ws+3496) = v9765;
	i8 v9766 = (i8)(intptr_t)(ws+3472);
	i8 v9767 = *(i8*)(intptr_t)v9766;
	*(i8*)(intptr_t)(ws+3504) = v9767;
	i8 v9768 = (i8)(intptr_t)(f162_MidStore);

	((void(*)(void))(intptr_t)v9768)();

	i8 v9769 = *(i8*)(intptr_t)(ws+3512);
	i8 v9770 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9770 = v9769;

	i8 v9771 = (i8)(intptr_t)(ws+3480);
	i8 v9772 = *(i8*)(intptr_t)v9771;
	*(i8*)(intptr_t)(ws+3488) = v9772;
	i8 v9773 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v9773)();

	i8 v9774 = (i8)(intptr_t)(ws+3401);
	i1 v9775 = *(i1*)(intptr_t)v9774;
	i1 v9776 = v9775+(+1);
	i8 v9777 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v9777 = v9776;

	i8 v9778 = (i8)(intptr_t)(ws+3424);
	i8 v9779 = *(i8*)(intptr_t)v9778;
	i8 v9780 = *(i8*)(intptr_t)v9779;
	i8 v9781 = v9780+(+16);
	i8 v9782 = *(i8*)(intptr_t)v9781;
	i8 v9783 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9783 = v9782;

	goto c02_06b8;

c02_06bd:;

	i8 v9784 = (i8)(intptr_t)(ws+3336);
	i8 v9785 = *(i8*)(intptr_t)v9784;
	*(i8*)(intptr_t)(ws+3592) = v9785;
	i8 v9786 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v9786)();

	i8 v9787 = (i8)(intptr_t)(ws+3401);
	i1 v9788 = *(i1*)(intptr_t)v9787;
	i8 v9789 = (i8)(intptr_t)(ws+3384);
	i8 v9790 = *(i8*)(intptr_t)v9789;
	i8 v9791 = v9790+(+81);
	i1 v9792 = *(i1*)(intptr_t)v9791;
	if (v9788==v9792) goto c02_06cc; else goto c02_06cb;

c02_06cb:;

	i8 v9793 = (i8)(intptr_t)c02_s0185;
	*(i8*)(intptr_t)(ws+3648) = v9793;
	i8 v9794 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9794)();

c02_06cc:;

c02_06c8:;

	i8 v9795 = (i8)(intptr_t)(f294_i_end_call);

	((void(*)(void))(intptr_t)v9795)();

	i1 v9796 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v9796;
	i8 v9797 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v9797;
	i8 v9798 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9798)();

	i1 v9799 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9799;
	i8 v9800 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9800;
	i8 v9801 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9801)();

}
	void f229_IsSubroutine(void);
	void f74_StartError(void);
const i1 c02_s0186[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0187[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f69_InternalAlloc(void);
	void f99_GetInputParameter(void);
	void f100_GetOutputParameter(void);

// reduce_76 workspace at ws+3384 length ws+48
void f389_reduce_76(void) {

	i8 v9802 = (i8)(intptr_t)(ws+3304);
	i8 v9803 = *(i8*)(intptr_t)v9802;
	i8 v9804 = v9803+(+24);
	i8 v9805 = *(i8*)(intptr_t)v9804;
	*(i8*)(intptr_t)(ws+3560) = v9805;
	i8 v9806 = (i8)(intptr_t)(f229_IsSubroutine);

	((void(*)(void))(intptr_t)v9806)();

	i1 v9807 = *(i1*)(intptr_t)(ws+3568);
	i8 v9808 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9808 = v9807;

	i8 v9809 = (i8)(intptr_t)(ws+3384);
	i1 v9810 = *(i1*)(intptr_t)v9809;
	i1 v9811 = (i1)+0;
	if (v9810==v9811) goto c02_06d0; else goto c02_06d1;

c02_06d0:;

	i8 v9812 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9812)();

	i8 v9813 = (i8)(intptr_t)c02_s0186;
	*(i8*)(intptr_t)(ws+3696) = v9813;
	i8 v9814 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9814)();

	i8 v9815 = (i8)(intptr_t)(ws+3304);
	i8 v9816 = *(i8*)(intptr_t)v9815;
	i8 v9817 = v9816+(+24);
	i8 v9818 = *(i8*)(intptr_t)v9817;
	i8 v9819 = v9818+(+32);
	i8 v9820 = *(i8*)(intptr_t)v9819;
	i8 v9821 = v9820+(+8);
	i8 v9822 = *(i8*)(intptr_t)v9821;
	*(i8*)(intptr_t)(ws+3696) = v9822;
	i8 v9823 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9823)();

	i8 v9824 = (i8)(intptr_t)c02_s0187;
	*(i8*)(intptr_t)(ws+3696) = v9824;
	i8 v9825 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9825)();

	i8 v9826 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9826)();

c02_06d1:;

c02_06cd:;

	i8 v9827 = (i8)+42;
	*(i8*)(intptr_t)(ws+3640) = v9827;
	i8 v9828 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v9828)();

	i8 v9829 = *(i8*)(intptr_t)(ws+3648);
	i8 v9830 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9830 = v9829;

	i8 v9831 = (i8)(intptr_t)(ws+3392);
	i8 v9832 = *(i8*)(intptr_t)v9831;
	i8 v9833 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9833 = v9832;

	i8 v9834 = (i8)(intptr_t)(ws+80);
	i8 v9835 = *(i8*)(intptr_t)v9834;
	i8 v9836 = (i8)(intptr_t)(ws+3400);
	i8 v9837 = *(i8*)(intptr_t)v9836;
	i8 v9838 = v9837+(+16);
	*(i8*)(intptr_t)v9838 = v9835;

	i8 v9839 = (i8)(intptr_t)(ws+3304);
	i8 v9840 = *(i8*)(intptr_t)v9839;
	i8 v9841 = v9840+(+24);
	i8 v9842 = *(i8*)(intptr_t)v9841;
	i8 v9843 = *(i8*)(intptr_t)v9842;
	i8 v9844 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9844 = v9843;

	i8 v9845 = (i8)(intptr_t)(ws+3304);
	i8 v9846 = *(i8*)(intptr_t)v9845;
	i8 v9847 = (i8)(intptr_t)(ws+3400);
	i8 v9848 = *(i8*)(intptr_t)v9847;
	*(i8*)(intptr_t)v9848 = v9846;

	i8 v9849 = (i8)(intptr_t)(ws+3408);
	i8 v9850 = *(i8*)(intptr_t)v9849;
	i8 v9851 = (i8)(intptr_t)(ws+3400);
	i8 v9852 = *(i8*)(intptr_t)v9851;
	i8 v9853 = v9852+(+8);
	*(i8*)(intptr_t)v9853 = v9850;

	i8 v9854 = (i8)(intptr_t)(ws+3408);
	i8 v9855 = *(i8*)(intptr_t)v9854;
	*(i8*)(intptr_t)(ws+3464) = v9855;
	i1 v9856 = (i1)+0;
	*(i1*)(intptr_t)(ws+3472) = v9856;
	i8 v9857 = (i8)(intptr_t)(f99_GetInputParameter);

	((void(*)(void))(intptr_t)v9857)();

	i8 v9858 = *(i8*)(intptr_t)(ws+3480);
	i8 v9859 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9859 = v9858;

	i8 v9860 = (i8)(intptr_t)(ws+3416);
	i8 v9861 = *(i8*)(intptr_t)v9860;
	i8 v9862 = (i8)(intptr_t)(ws+3400);
	i8 v9863 = *(i8*)(intptr_t)v9862;
	i8 v9864 = v9863+(+24);
	*(i8*)(intptr_t)v9864 = v9861;

	i8 v9865 = (i8)(intptr_t)(ws+3408);
	i8 v9866 = *(i8*)(intptr_t)v9865;
	*(i8*)(intptr_t)(ws+3488) = v9866;
	i1 v9867 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v9867;
	i8 v9868 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v9868)();

	i8 v9869 = *(i8*)(intptr_t)(ws+3504);
	i8 v9870 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9870 = v9869;

	i8 v9871 = (i8)(intptr_t)(ws+3424);
	i8 v9872 = *(i8*)(intptr_t)v9871;
	i8 v9873 = (i8)(intptr_t)(ws+3400);
	i8 v9874 = *(i8*)(intptr_t)v9873;
	i8 v9875 = v9874+(+32);
	*(i8*)(intptr_t)v9875 = v9872;

	i8 v9876 = (i8)(intptr_t)(ws+3400);
	i8 v9877 = *(i8*)(intptr_t)v9876;
	i8 v9878 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v9878 = v9877;

}
	void f302_yy_destructor(void);

// reduce_77 workspace at ws+3384 length ws+0
void f390_reduce_77(void) {

	i8 v9879 = (i8)(intptr_t)(ws+3312);
	i8 v9880 = *(i8*)(intptr_t)v9879;
	i8 v9881 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9881 = v9880;

	i1 v9882 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9882;
	i8 v9883 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9883;
	i8 v9884 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9884)();

}
	void f112_MidEnd(void);
	void f302_yy_destructor(void);

// reduce_78 workspace at ws+3384 length ws+8
void f391_reduce_78(void) {

	i8 v9885 = (i8)(intptr_t)(f112_MidEnd);

	((void(*)(void))(intptr_t)v9885)();

	i8 v9886 = *(i8*)(intptr_t)(ws+3416);
	i8 v9887 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9887 = v9886;

	i8 v9888 = (i8)(intptr_t)(ws+3384);
	i8 v9889 = *(i8*)(intptr_t)v9888;
	i8 v9890 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9890 = v9889;

	i1 v9891 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9891;
	i8 v9892 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9892;
	i8 v9893 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9893)();

}

// reduce_79 workspace at ws+3384 length ws+0
void f392_reduce_79(void) {

	i8 v9894 = (i8)(intptr_t)(ws+3304);
	i8 v9895 = *(i8*)(intptr_t)v9894;
	i8 v9896 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9896 = v9895;

}
	void f63_Discard(void);
	void f302_yy_destructor(void);

// reduce_80 workspace at ws+3384 length ws+0
void f393_reduce_80(void) {

	i8 v9897 = (i8)(intptr_t)(ws+3304);
	i8 v9898 = *(i8*)(intptr_t)v9897;
	i8 v9899 = v9898+(+32);
	i8 v9900 = *(i8*)(intptr_t)v9899;
	*(i8*)(intptr_t)(ws+3592) = v9900;
	i8 v9901 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v9901)();

	i8 v9902 = (i8)(intptr_t)(ws+3320);
	i8 v9903 = *(i8*)(intptr_t)v9902;
	i8 v9904 = (i8)(intptr_t)(ws+3304);
	i8 v9905 = *(i8*)(intptr_t)v9904;
	i8 v9906 = v9905+(+32);
	*(i8*)(intptr_t)v9906 = v9903;

	i8 v9907 = (i8)(intptr_t)(ws+3304);
	i8 v9908 = *(i8*)(intptr_t)v9907;
	i8 v9909 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9909 = v9908;

	i1 v9910 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v9910;
	i8 v9911 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v9911;
	i8 v9912 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v9912)();

}
	void f74_StartError(void);
const i1 c02_s0188[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);
	void f271_CheckExpressionType(void);
	void f224_CheckNotPartialType(void);
	void f224_CheckNotPartialType(void);
	void f168_NodeWidth(void);
	void f112_MidEnd(void);
	void f155_MidArg(void);

// reduce_81 workspace at ws+3384 length ws+32
void f394_reduce_81(void) {

	i8 v9913 = (i8)(intptr_t)(ws+80);
	i8 v9914 = *(i8*)(intptr_t)v9913;
	i8 v9915 = v9914+(+24);
	i8 v9916 = *(i8*)(intptr_t)v9915;
	i8 v9917 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9917 = v9916;

	i8 v9918 = (i8)(intptr_t)(ws+3384);
	i8 v9919 = *(i8*)(intptr_t)v9918;
	i8 v9920 = (i8)+0;
	if (v9919==v9920) goto c02_06d5; else goto c02_06d6;

c02_06d5:;

	i8 v9921 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9921)();

	i8 v9922 = (i8)(intptr_t)c02_s0188;
	*(i8*)(intptr_t)(ws+3696) = v9922;
	i8 v9923 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9923)();

	i8 v9924 = (i8)(intptr_t)(ws+80);
	i8 v9925 = *(i8*)(intptr_t)v9924;
	i8 v9926 = v9925+(+8);
	i8 v9927 = *(i8*)(intptr_t)v9926;
	i8 v9928 = *(i8*)(intptr_t)v9927;
	i8 v9929 = v9928+(+8);
	i8 v9930 = *(i8*)(intptr_t)v9929;
	*(i8*)(intptr_t)(ws+3696) = v9930;
	i8 v9931 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9931)();

	i8 v9932 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9932)();

c02_06d6:;

c02_06d2:;

	i8 v9933 = (i8)(intptr_t)(ws+80);
	i8 v9934 = *(i8*)(intptr_t)v9933;
	i8 v9935 = v9934+(+24);
	i8 v9936 = *(i8*)(intptr_t)v9935;
	i8 v9937 = *(i8*)(intptr_t)v9936;
	i8 v9938 = v9937+(+16);
	i8 v9939 = *(i8*)(intptr_t)v9938;
	i8 v9940 = (i8)(intptr_t)(ws+80);
	i8 v9941 = *(i8*)(intptr_t)v9940;
	i8 v9942 = v9941+(+24);
	*(i8*)(intptr_t)v9942 = v9939;

	i8 v9943 = (i8)(intptr_t)(ws+3304);
	i8 v9944 = *(i8*)(intptr_t)v9943;
	*(i8*)(intptr_t)(ws+3496) = v9944;
	i8 v9945 = (i8)(intptr_t)(ws+3384);
	i8 v9946 = *(i8*)(intptr_t)v9945;
	i8 v9947 = *(i8*)(intptr_t)v9946;
	i8 v9948 = *(i8*)(intptr_t)v9947;
	*(i8*)(intptr_t)(ws+3504) = v9948;
	i8 v9949 = (i8)(intptr_t)(f271_CheckExpressionType);

	((void(*)(void))(intptr_t)v9949)();

	i8 v9950 = (i8)(intptr_t)(ws+3384);
	i8 v9951 = *(i8*)(intptr_t)v9950;
	i8 v9952 = *(i8*)(intptr_t)v9951;
	i8 v9953 = *(i8*)(intptr_t)v9952;
	*(i8*)(intptr_t)(ws+3520) = v9953;
	i8 v9954 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9954)();

	i8 v9955 = (i8)(intptr_t)(ws+3304);
	i8 v9956 = *(i8*)(intptr_t)v9955;
	i8 v9957 = v9956+(+24);
	i8 v9958 = *(i8*)(intptr_t)v9957;
	*(i8*)(intptr_t)(ws+3520) = v9958;
	i8 v9959 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9959)();

	i8 v9960 = (i8)(intptr_t)(ws+80);
	i8 v9961 = *(i8*)(intptr_t)v9960;
	i8 v9962 = v9961+(+40);
	i1 v9963 = *(i1*)(intptr_t)v9962;
	i1 v9964 = v9963+(+1);
	i8 v9965 = (i8)(intptr_t)(ws+80);
	i8 v9966 = *(i8*)(intptr_t)v9965;
	i8 v9967 = v9966+(+40);
	*(i1*)(intptr_t)v9967 = v9964;

	i8 v9968 = (i8)(intptr_t)(ws+3304);
	i8 v9969 = *(i8*)(intptr_t)v9968;
	*(i8*)(intptr_t)(ws+3456) = v9969;
	i8 v9970 = (i8)(intptr_t)(f168_NodeWidth);

	((void(*)(void))(intptr_t)v9970)();

	i1 v9971 = *(i1*)(intptr_t)(ws+3464);
	i8 v9972 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v9972 = v9971;

	i8 v9973 = (i8)(intptr_t)(f112_MidEnd);

	((void(*)(void))(intptr_t)v9973)();

	i8 v9974 = *(i8*)(intptr_t)(ws+3416);
	i8 v9975 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9975 = v9974;

	i8 v9976 = (i8)(intptr_t)(ws+3392);
	i1 v9977 = *(i1*)(intptr_t)v9976;
	*(i1*)(intptr_t)(ws+3416) = v9977;
	i8 v9978 = (i8)(intptr_t)(ws+3400);
	i8 v9979 = *(i8*)(intptr_t)v9978;
	*(i8*)(intptr_t)(ws+3424) = v9979;
	i8 v9980 = (i8)(intptr_t)(ws+3304);
	i8 v9981 = *(i8*)(intptr_t)v9980;
	*(i8*)(intptr_t)(ws+3432) = v9981;
	i8 v9982 = (i8)(intptr_t)(ws+80);
	i8 v9983 = *(i8*)(intptr_t)v9982;
	i8 v9984 = v9983+(+8);
	i8 v9985 = *(i8*)(intptr_t)v9984;
	*(i8*)(intptr_t)(ws+3440) = v9985;
	i8 v9986 = (i8)(intptr_t)(ws+3384);
	i8 v9987 = *(i8*)(intptr_t)v9986;
	*(i8*)(intptr_t)(ws+3448) = v9987;
	i8 v9988 = (i8)(intptr_t)(ws+80);
	i8 v9989 = *(i8*)(intptr_t)v9988;
	i8 v9990 = v9989+(+8);
	i8 v9991 = *(i8*)(intptr_t)v9990;
	i8 v9992 = v9991+(+80);
	i1 v9993 = *(i1*)(intptr_t)v9992;
	i8 v9994 = (i8)(intptr_t)(ws+80);
	i8 v9995 = *(i8*)(intptr_t)v9994;
	i8 v9996 = v9995+(+40);
	i1 v9997 = *(i1*)(intptr_t)v9996;
	i1 v9998 = v9993-v9997;
	*(i1*)(intptr_t)(ws+3456) = v9998;
	i8 v9999 = (i8)(intptr_t)(f155_MidArg);

	((void(*)(void))(intptr_t)v9999)();

	i8 v10000 = *(i8*)(intptr_t)(ws+3464);
	i8 v10001 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10001 = v10000;

	i8 v10002 = (i8)(intptr_t)(ws+3408);
	i8 v10003 = *(i8*)(intptr_t)v10002;
	i8 v10004 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10004 = v10003;

}
	void f118_MidPair(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_82 workspace at ws+3384 length ws+8
void f395_reduce_82(void) {

	i8 v10005 = (i8)(intptr_t)(ws+3312);
	i8 v10006 = *(i8*)(intptr_t)v10005;
	*(i8*)(intptr_t)(ws+3392) = v10006;
	i8 v10007 = (i8)(intptr_t)(ws+3328);
	i8 v10008 = *(i8*)(intptr_t)v10007;
	*(i8*)(intptr_t)(ws+3400) = v10008;
	i8 v10009 = (i8)(intptr_t)(f118_MidPair);

	((void(*)(void))(intptr_t)v10009)();

	i8 v10010 = *(i8*)(intptr_t)(ws+3408);
	i8 v10011 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10011 = v10010;

	i8 v10012 = (i8)(intptr_t)(ws+3384);
	i8 v10013 = *(i8*)(intptr_t)v10012;
	i8 v10014 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10014 = v10013;

	i1 v10015 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v10015;
	i8 v10016 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10016;
	i8 v10017 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10017)();

	i1 v10018 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10018;
	i8 v10019 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10019;
	i8 v10020 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10020)();

}
	void f118_MidPair(void);

// reduce_83 workspace at ws+3384 length ws+8
void f396_reduce_83(void) {

	i8 v10021 = (i8)(intptr_t)(ws+3304);
	i8 v10022 = *(i8*)(intptr_t)v10021;
	*(i8*)(intptr_t)(ws+3392) = v10022;
	i8 v10023 = (i8)+0;
	*(i8*)(intptr_t)(ws+3400) = v10023;
	i8 v10024 = (i8)(intptr_t)(f118_MidPair);

	((void(*)(void))(intptr_t)v10024)();

	i8 v10025 = *(i8*)(intptr_t)(ws+3408);
	i8 v10026 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10026 = v10025;

	i8 v10027 = (i8)(intptr_t)(ws+3384);
	i8 v10028 = *(i8*)(intptr_t)v10027;
	i8 v10029 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10029 = v10028;

}
	void f118_MidPair(void);
	void f302_yy_destructor(void);

// reduce_84 workspace at ws+3384 length ws+8
void f397_reduce_84(void) {

	i8 v10030 = (i8)(intptr_t)(ws+3304);
	i8 v10031 = *(i8*)(intptr_t)v10030;
	*(i8*)(intptr_t)(ws+3392) = v10031;
	i8 v10032 = (i8)(intptr_t)(ws+3320);
	i8 v10033 = *(i8*)(intptr_t)v10032;
	*(i8*)(intptr_t)(ws+3400) = v10033;
	i8 v10034 = (i8)(intptr_t)(f118_MidPair);

	((void(*)(void))(intptr_t)v10034)();

	i8 v10035 = *(i8*)(intptr_t)(ws+3408);
	i8 v10036 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10036 = v10035;

	i8 v10037 = (i8)(intptr_t)(ws+3384);
	i8 v10038 = *(i8*)(intptr_t)v10037;
	i8 v10039 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10039 = v10038;

	i1 v10040 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v10040;
	i8 v10041 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10041;
	i8 v10042 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10042)();

}
	void f235_UndoLValue(void);

// reduce_85 workspace at ws+3384 length ws+8
void f398_reduce_85(void) {

	i8 v10043 = (i8)(intptr_t)(ws+3304);
	i8 v10044 = *(i8*)(intptr_t)v10043;
	*(i8*)(intptr_t)(ws+3432) = v10044;
	i8 v10045 = (i8)(intptr_t)(f235_UndoLValue);

	((void(*)(void))(intptr_t)v10045)();

	i8 v10046 = *(i8*)(intptr_t)(ws+3440);
	i8 v10047 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10047 = v10046;

	i8 v10048 = (i8)(intptr_t)(ws+3384);
	i8 v10049 = *(i8*)(intptr_t)v10048;
	i8 v10050 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10050 = v10049;

}
	void f293_i_check_sub_call_args(void);
	void f100_GetOutputParameter(void);
	void f100_GetOutputParameter(void);
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0189[] = { 0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x74,0x68,0x65,0x20,0x73,0x61,0x6d,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x61,0x73,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s018a[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x70,0x61,0x73,0x73,0x74,0x6f,0x20,0x73,0x74,0x61,0x74,0x65,0x6d,0x65,0x6e,0x74,0x2e,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f123_MidPreparetail(void);
	void f259_Generate(void);
	void f132_MidTailcall(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);

// reduce_86 workspace at ws+3384 length ws+72
void f399_reduce_86(void) {

	i8 v10051 = (i8)(intptr_t)(ws+80);
	i8 v10052 = *(i8*)(intptr_t)v10051;
	i8 v10053 = v10052+(+8);
	i8 v10054 = *(i8*)(intptr_t)v10053;
	i8 v10055 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10055 = v10054;

	i8 v10056 = (i8)(intptr_t)(ws+40);
	i8 v10057 = *(i8*)(intptr_t)v10056;
	i8 v10058 = v10057+(+48);
	i8 v10059 = *(i8*)(intptr_t)v10058;
	i8 v10060 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10060 = v10059;

	i8 v10061 = (i8)(intptr_t)(f293_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v10061)();

	i8 v10062 = (i8)(intptr_t)(ws+3384);
	i8 v10063 = *(i8*)(intptr_t)v10062;
	i8 v10064 = v10063+(+81);
	i1 v10065 = *(i1*)(intptr_t)v10064;
	i8 v10066 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v10066 = v10065;

	i8 v10067 = (i8)(intptr_t)(ws+3392);
	i8 v10068 = *(i8*)(intptr_t)v10067;
	i8 v10069 = v10068+(+81);
	i1 v10070 = *(i1*)(intptr_t)v10069;
	i8 v10071 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v10071 = v10070;

	i1 v10072 = (i1)+0;
	i8 v10073 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v10073 = v10072;

	i8 v10074 = (i8)(intptr_t)(ws+3400);
	i1 v10075 = *(i1*)(intptr_t)v10074;
	i8 v10076 = (i8)(intptr_t)(ws+3401);
	i1 v10077 = *(i1*)(intptr_t)v10076;
	if (v10075==v10077) goto c02_06db; else goto c02_06da;

c02_06da:;

	i1 v10078 = (i1)+1;
	i8 v10079 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v10079 = v10078;

c02_06db:;

c02_06d7:;

c02_06dc:;

	i1 v10080 = (i1)+0;
	i8 v10081 = (i8)(intptr_t)(ws+3400);
	i1 v10082 = *(i1*)(intptr_t)v10081;
	if (v10080<v10082) goto c02_06e4; else goto c02_06e3;

c02_06e4:;

	i8 v10083 = (i8)(intptr_t)(ws+3402);
	i1 v10084 = *(i1*)(intptr_t)v10083;
	i1 v10085 = (i1)+0;
	if (v10084==v10085) goto c02_06e2; else goto c02_06e3;

c02_06e2:;

	i8 v10086 = (i8)(intptr_t)(ws+3400);
	i1 v10087 = *(i1*)(intptr_t)v10086;
	i1 v10088 = v10087+(-1);
	i8 v10089 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v10089 = v10088;

	i8 v10090 = (i8)(intptr_t)(ws+3384);
	i8 v10091 = *(i8*)(intptr_t)v10090;
	*(i8*)(intptr_t)(ws+3488) = v10091;
	i8 v10092 = (i8)(intptr_t)(ws+3400);
	i1 v10093 = *(i1*)(intptr_t)v10092;
	*(i1*)(intptr_t)(ws+3496) = v10093;
	i8 v10094 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v10094)();

	i8 v10095 = *(i8*)(intptr_t)(ws+3504);
	i8 v10096 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10096 = v10095;

	i8 v10097 = (i8)(intptr_t)(ws+3408);
	i8 v10098 = *(i8*)(intptr_t)v10097;
	i8 v10099 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v10099 = v10098;

	i8 v10100 = (i8)(intptr_t)(ws+3392);
	i8 v10101 = *(i8*)(intptr_t)v10100;
	*(i8*)(intptr_t)(ws+3488) = v10101;
	i8 v10102 = (i8)(intptr_t)(ws+3400);
	i1 v10103 = *(i1*)(intptr_t)v10102;
	*(i1*)(intptr_t)(ws+3496) = v10103;
	i8 v10104 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v10104)();

	i8 v10105 = *(i8*)(intptr_t)(ws+3504);
	i8 v10106 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v10106 = v10105;

	i8 v10107 = (i8)(intptr_t)(ws+3424);
	i8 v10108 = *(i8*)(intptr_t)v10107;
	i8 v10109 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v10109 = v10108;

	i8 v10110 = (i8)(intptr_t)(ws+3416);
	i8 v10111 = *(i8*)(intptr_t)v10110;
	i8 v10112 = *(i8*)(intptr_t)v10111;
	i8 v10113 = *(i8*)(intptr_t)v10112;
	i8 v10114 = (i8)(intptr_t)(ws+3432);
	i8 v10115 = *(i8*)(intptr_t)v10114;
	i8 v10116 = *(i8*)(intptr_t)v10115;
	i8 v10117 = *(i8*)(intptr_t)v10116;
	if (v10113==v10117) goto c02_06e9; else goto c02_06e8;

c02_06e8:;

	i1 v10118 = (i1)+1;
	i8 v10119 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v10119 = v10118;

c02_06e9:;

c02_06e5:;

	goto c02_06dc;

c02_06e3:;

	i8 v10120 = (i8)(intptr_t)(ws+3402);
	i1 v10121 = *(i1*)(intptr_t)v10120;
	i1 v10122 = (i1)+0;
	if (v10121==v10122) goto c02_06ee; else goto c02_06ed;

c02_06ed:;

	i8 v10123 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v10123)();

	i8 v10124 = (i8)(intptr_t)(ws+3384);
	i8 v10125 = *(i8*)(intptr_t)v10124;
	i8 v10126 = *(i8*)(intptr_t)v10125;
	i8 v10127 = v10126+(+8);
	i8 v10128 = *(i8*)(intptr_t)v10127;
	*(i8*)(intptr_t)(ws+3696) = v10128;
	i8 v10129 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v10129)();

	i8 v10130 = (i8)(intptr_t)c02_s0189;
	*(i8*)(intptr_t)(ws+3696) = v10130;
	i8 v10131 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v10131)();

	i8 v10132 = (i8)(intptr_t)(ws+3392);
	i8 v10133 = *(i8*)(intptr_t)v10132;
	i8 v10134 = *(i8*)(intptr_t)v10133;
	i8 v10135 = v10134+(+8);
	i8 v10136 = *(i8*)(intptr_t)v10135;
	*(i8*)(intptr_t)(ws+3696) = v10136;
	i8 v10137 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v10137)();

	i8 v10138 = (i8)(intptr_t)c02_s018a;
	*(i8*)(intptr_t)(ws+3696) = v10138;
	i8 v10139 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v10139)();

	i8 v10140 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v10140)();

c02_06ee:;

c02_06ea:;

	i8 v10141 = (i8)(intptr_t)(f123_MidPreparetail);

	((void(*)(void))(intptr_t)v10141)();

	i8 v10142 = *(i8*)(intptr_t)(ws+3456);
	i8 v10143 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v10143 = v10142;

	i8 v10144 = (i8)(intptr_t)(ws+3440);
	i8 v10145 = *(i8*)(intptr_t)v10144;
	*(i8*)(intptr_t)(ws+3488) = v10145;
	i8 v10146 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v10146)();

	i8 v10147 = (i8)(intptr_t)(ws+3312);
	i8 v10148 = *(i8*)(intptr_t)v10147;
	*(i8*)(intptr_t)(ws+3456) = v10148;
	i8 v10149 = (i8)(intptr_t)(ws+80);
	i8 v10150 = *(i8*)(intptr_t)v10149;
	i8 v10151 = *(i8*)(intptr_t)v10150;
	*(i8*)(intptr_t)(ws+3464) = v10151;
	i8 v10152 = (i8)(intptr_t)(ws+3384);
	i8 v10153 = *(i8*)(intptr_t)v10152;
	*(i8*)(intptr_t)(ws+3472) = v10153;
	i8 v10154 = (i8)(intptr_t)(f132_MidTailcall);

	((void(*)(void))(intptr_t)v10154)();

	i8 v10155 = *(i8*)(intptr_t)(ws+3480);
	i8 v10156 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v10156 = v10155;

	i8 v10157 = (i8)(intptr_t)(ws+3448);
	i8 v10158 = *(i8*)(intptr_t)v10157;
	*(i8*)(intptr_t)(ws+3488) = v10158;
	i8 v10159 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v10159)();

	i1 v10160 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10160;
	i8 v10161 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10161;
	i8 v10162 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10162)();

}
	void f208_EmitterEmitSubroutineFlags(void);
	void f130_MidStartsub(void);
	void f259_Generate(void);
	void f140_MidEndsub(void);
	void f259_Generate(void);
	void f269_ReportWorkspaces(void);
	void f302_yy_destructor(void);

// reduce_87 workspace at ws+3384 length ws+16
void f400_reduce_87(void) {

	i8 v10163 = (i8)(intptr_t)(ws+1544);
	i8 v10164 = *(i8*)(intptr_t)v10163;
	i8 v10165 = v10164+(+82);
	i1 v10166 = *(i1*)(intptr_t)v10165;
	i1 v10167 = v10166|(+2);
	i8 v10168 = (i8)(intptr_t)(ws+1544);
	i8 v10169 = *(i8*)(intptr_t)v10168;
	i8 v10170 = v10169+(+82);
	*(i1*)(intptr_t)v10170 = v10167;

	i8 v10171 = (i8)(intptr_t)(ws+1544);
	i8 v10172 = *(i8*)(intptr_t)v10171;
	*(i8*)(intptr_t)(ws+3408) = v10172;
	i8 v10173 = (i8)(intptr_t)(f208_EmitterEmitSubroutineFlags);

	((void(*)(void))(intptr_t)v10173)();

	i8 v10174 = (i8)(intptr_t)(ws+1544);
	i8 v10175 = *(i8*)(intptr_t)v10174;
	i8 v10176 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10176 = v10175;

	i8 v10177 = (i8)(intptr_t)(ws+40);
	i8 v10178 = *(i8*)(intptr_t)v10177;
	*(i8*)(intptr_t)(ws+3408) = v10178;
	i8 v10179 = (i8)(intptr_t)(f130_MidStartsub);

	((void(*)(void))(intptr_t)v10179)();

	i8 v10180 = *(i8*)(intptr_t)(ws+3416);
	i8 v10181 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10181 = v10180;

	i8 v10182 = (i8)(intptr_t)(ws+3384);
	i8 v10183 = *(i8*)(intptr_t)v10182;
	*(i8*)(intptr_t)(ws+3488) = v10183;
	i8 v10184 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v10184)();

	i8 v10185 = (i8)(intptr_t)(ws+40);
	i8 v10186 = *(i8*)(intptr_t)v10185;
	*(i8*)(intptr_t)(ws+3408) = v10186;
	i8 v10187 = (i8)(intptr_t)(f140_MidEndsub);

	((void(*)(void))(intptr_t)v10187)();

	i8 v10188 = *(i8*)(intptr_t)(ws+3416);
	i8 v10189 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10189 = v10188;

	i8 v10190 = (i8)(intptr_t)(ws+3392);
	i8 v10191 = *(i8*)(intptr_t)v10190;
	*(i8*)(intptr_t)(ws+3488) = v10191;
	i8 v10192 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v10192)();

	i8 v10193 = (i8)(intptr_t)(ws+40);
	i8 v10194 = *(i8*)(intptr_t)v10193;
	*(i8*)(intptr_t)(ws+3408) = v10194;
	i8 v10195 = (i8)(intptr_t)(f269_ReportWorkspaces);

	((void(*)(void))(intptr_t)v10195)();

	i8 v10196 = (i8)(intptr_t)(ws+40);
	i8 v10197 = *(i8*)(intptr_t)v10196;
	i8 v10198 = v10197+(+8);
	i8 v10199 = *(i8*)(intptr_t)v10198;
	i8 v10200 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10200 = v10199;

	i1 v10201 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10201;
	i8 v10202 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10202;
	i8 v10203 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10203)();

}
const i1 c02_s018b[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f76_SimpleError(void);

// not_an_interface workspace at ws+3408 length ws+0
void f402_not_an_interface(void) {

	i8 v10204 = (i8)(intptr_t)c02_s018b;
	*(i8*)(intptr_t)(ws+3648) = v10204;
	i8 v10205 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10205)();

}
	void f229_IsSubroutine(void);
	void f402_not_an_interface(void);
	void f402_not_an_interface(void);
	void f203_EmitterReferenceSubroutine(void);
	void f203_EmitterReferenceSubroutine(void);
	void f267_CopyParameterList(void);
	void f100_GetOutputParameter(void);
	void f267_CopyParameterList(void);
	void f206_EmitterEmitInputParameters(void);
	void f207_EmitterEmitOutputParameters(void);
	void f208_EmitterEmitSubroutineFlags(void);
	void f302_yy_destructor(void);

// reduce_88 workspace at ws+3384 length ws+24
void f401_reduce_88(void) {


	i8 v10206 = (i8)(intptr_t)(ws+3304);
	i8 v10207 = *(i8*)(intptr_t)v10206;
	*(i8*)(intptr_t)(ws+3560) = v10207;
	i8 v10208 = (i8)(intptr_t)(f229_IsSubroutine);

	((void(*)(void))(intptr_t)v10208)();

	i1 v10209 = *(i1*)(intptr_t)(ws+3568);
	i8 v10210 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10210 = v10209;

	i8 v10211 = (i8)(intptr_t)(ws+3384);
	i1 v10212 = *(i1*)(intptr_t)v10211;
	i1 v10213 = (i1)+0;
	if (v10212==v10213) goto c02_06f2; else goto c02_06f3;

c02_06f2:;

	i8 v10214 = (i8)(intptr_t)(f402_not_an_interface);

	((void(*)(void))(intptr_t)v10214)();

c02_06f3:;

c02_06ef:;

	i8 v10215 = (i8)(intptr_t)(ws+3304);
	i8 v10216 = *(i8*)(intptr_t)v10215;
	i8 v10217 = *(i8*)(intptr_t)v10216;
	i8 v10218 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10218 = v10217;

	i8 v10219 = (i8)(intptr_t)(ws+3392);
	i8 v10220 = *(i8*)(intptr_t)v10219;
	i8 v10221 = v10220+(+82);
	i1 v10222 = *(i1*)(intptr_t)v10221;
	i1 v10223 = v10222&(+2);
	i1 v10224 = (i1)+0;
	if (v10223==v10224) goto c02_06f7; else goto c02_06f8;

c02_06f7:;

	i8 v10225 = (i8)(intptr_t)(f402_not_an_interface);

	((void(*)(void))(intptr_t)v10225)();

c02_06f8:;

c02_06f4:;

	i8 v10226 = (i8)(intptr_t)(ws+1544);
	i8 v10227 = *(i8*)(intptr_t)v10226;
	i8 v10228 = v10227+(+82);
	i1 v10229 = *(i1*)(intptr_t)v10228;
	i1 v10230 = v10229|(+4);
	i8 v10231 = (i8)(intptr_t)(ws+1544);
	i8 v10232 = *(i8*)(intptr_t)v10231;
	i8 v10233 = v10232+(+82);
	*(i1*)(intptr_t)v10233 = v10230;

	i8 v10234 = (i8)(intptr_t)(ws+3392);
	i8 v10235 = *(i8*)(intptr_t)v10234;
	i8 v10236 = (i8)(intptr_t)(ws+1544);
	i8 v10237 = *(i8*)(intptr_t)v10236;
	i8 v10238 = v10237+(+48);
	*(i8*)(intptr_t)v10238 = v10235;

	i8 v10239 = (i8)(intptr_t)(ws+3304);
	i8 v10240 = *(i8*)(intptr_t)v10239;
	i8 v10241 = (i8)(intptr_t)(ws+1544);
	i8 v10242 = *(i8*)(intptr_t)v10241;
	i8 v10243 = v10242+(+40);
	*(i8*)(intptr_t)v10243 = v10240;

	i8 v10244 = (i8)(intptr_t)(ws+40);
	i8 v10245 = *(i8*)(intptr_t)v10244;
	*(i8*)(intptr_t)(ws+3496) = v10245;
	i8 v10246 = (i8)(intptr_t)(ws+3392);
	i8 v10247 = *(i8*)(intptr_t)v10246;
	*(i8*)(intptr_t)(ws+3504) = v10247;
	i8 v10248 = (i8)(intptr_t)(f203_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v10248)();

	i8 v10249 = (i8)(intptr_t)(ws+3392);
	i8 v10250 = *(i8*)(intptr_t)v10249;
	*(i8*)(intptr_t)(ws+3496) = v10250;
	i8 v10251 = (i8)(intptr_t)(ws+1544);
	i8 v10252 = *(i8*)(intptr_t)v10251;
	*(i8*)(intptr_t)(ws+3504) = v10252;
	i8 v10253 = (i8)(intptr_t)(f203_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v10253)();

	i8 v10254 = (i8)(intptr_t)(ws+3392);
	i8 v10255 = *(i8*)(intptr_t)v10254;
	i8 v10256 = v10255+(+80);
	i1 v10257 = *(i1*)(intptr_t)v10256;
	i8 v10258 = (i8)(intptr_t)(ws+1544);
	i8 v10259 = *(i8*)(intptr_t)v10258;
	i8 v10260 = v10259+(+80);
	*(i1*)(intptr_t)v10260 = v10257;

	i8 v10261 = (i8)(intptr_t)(ws+1544);
	i8 v10262 = *(i8*)(intptr_t)v10261;
	i8 v10263 = v10262+(+80);
	i1 v10264 = *(i1*)(intptr_t)v10263;
	i1 v10265 = (i1)+0;
	if (v10264==v10265) goto c02_06fd; else goto c02_06fc;

c02_06fc:;

	i8 v10266 = (i8)(intptr_t)(ws+3392);
	i8 v10267 = *(i8*)(intptr_t)v10266;
	i8 v10268 = v10267+(+16);
	i8 v10269 = *(i8*)(intptr_t)v10268;
	*(i8*)(intptr_t)(ws+3408) = v10269;
	i8 v10270 = (i8)(intptr_t)(ws+1544);
	i8 v10271 = *(i8*)(intptr_t)v10270;
	*(i8*)(intptr_t)(ws+3416) = v10271;
	i8 v10272 = (i8)(intptr_t)(f267_CopyParameterList);

	((void(*)(void))(intptr_t)v10272)();

c02_06fd:;

c02_06f9:;

	i8 v10273 = (i8)(intptr_t)(ws+3392);
	i8 v10274 = *(i8*)(intptr_t)v10273;
	i8 v10275 = v10274+(+81);
	i1 v10276 = *(i1*)(intptr_t)v10275;
	i8 v10277 = (i8)(intptr_t)(ws+1544);
	i8 v10278 = *(i8*)(intptr_t)v10277;
	i8 v10279 = v10278+(+81);
	*(i1*)(intptr_t)v10279 = v10276;

	i8 v10280 = (i8)(intptr_t)(ws+1544);
	i8 v10281 = *(i8*)(intptr_t)v10280;
	i8 v10282 = v10281+(+81);
	i1 v10283 = *(i1*)(intptr_t)v10282;
	i1 v10284 = (i1)+0;
	if (v10283==v10284) goto c02_0702; else goto c02_0701;

c02_0701:;

	i8 v10285 = (i8)(intptr_t)(ws+3392);
	i8 v10286 = *(i8*)(intptr_t)v10285;
	*(i8*)(intptr_t)(ws+3488) = v10286;
	i1 v10287 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v10287;
	i8 v10288 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v10288)();

	i8 v10289 = *(i8*)(intptr_t)(ws+3504);
	i8 v10290 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10290 = v10289;

	i8 v10291 = (i8)(intptr_t)(ws+3400);
	i8 v10292 = *(i8*)(intptr_t)v10291;
	*(i8*)(intptr_t)(ws+3408) = v10292;
	i8 v10293 = (i8)(intptr_t)(ws+1544);
	i8 v10294 = *(i8*)(intptr_t)v10293;
	*(i8*)(intptr_t)(ws+3416) = v10294;
	i8 v10295 = (i8)(intptr_t)(f267_CopyParameterList);

	((void(*)(void))(intptr_t)v10295)();

c02_0702:;

c02_06fe:;

	i8 v10296 = (i8)(intptr_t)(ws+1544);
	i8 v10297 = *(i8*)(intptr_t)v10296;
	*(i8*)(intptr_t)(ws+3408) = v10297;
	i8 v10298 = (i8)(intptr_t)(f206_EmitterEmitInputParameters);

	((void(*)(void))(intptr_t)v10298)();

	i8 v10299 = (i8)(intptr_t)(ws+1544);
	i8 v10300 = *(i8*)(intptr_t)v10299;
	*(i8*)(intptr_t)(ws+3408) = v10300;
	i8 v10301 = (i8)(intptr_t)(f207_EmitterEmitOutputParameters);

	((void(*)(void))(intptr_t)v10301)();

	i8 v10302 = (i8)(intptr_t)(ws+1544);
	i8 v10303 = *(i8*)(intptr_t)v10302;
	*(i8*)(intptr_t)(ws+3408) = v10303;
	i8 v10304 = (i8)(intptr_t)(f208_EmitterEmitSubroutineFlags);

	((void(*)(void))(intptr_t)v10304)();

	i1 v10305 = (i1)+69;
	*(i1*)(intptr_t)(ws+3496) = v10305;
	i8 v10306 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10306;
	i8 v10307 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10307)();

}
	void f201_EmitterDeclareExternalSubroutine(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_89 workspace at ws+3384 length ws+0
void f403_reduce_89(void) {

	i8 v10308 = (i8)(intptr_t)(ws+1544);
	i8 v10309 = *(i8*)(intptr_t)v10308;
	i8 v10310 = v10309+(+56);
	i2 v10311 = *(i2*)(intptr_t)v10310;
	*(i2*)(intptr_t)(ws+3384) = v10311;
	i8 v10312 = (i8)(intptr_t)(ws+3312);
	i8 v10313 = *(i8*)(intptr_t)v10312;
	*(i8*)(intptr_t)(ws+3392) = v10313;
	i8 v10314 = (i8)(intptr_t)(f201_EmitterDeclareExternalSubroutine);

	((void(*)(void))(intptr_t)v10314)();

	i1 v10315 = (i1)+11;
	*(i1*)(intptr_t)(ws+3496) = v10315;
	i8 v10316 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v10316;
	i8 v10317 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10317)();

	i1 v10318 = (i1)+16;
	*(i1*)(intptr_t)(ws+3496) = v10318;
	i8 v10319 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10319;
	i8 v10320 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10320)();

	i1 v10321 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10321;
	i8 v10322 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10322;
	i8 v10323 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10323)();

}
	void f69_InternalAlloc(void);
	void f239_AllocSubrId(void);
	void f66_AllocNewType(void);
	void f200_EmitterDeclareSubroutine(void);

// reduce_90 workspace at ws+3384 length ws+32
void f404_reduce_90(void) {

	i8 v10324 = (i8)+83;
	*(i8*)(intptr_t)(ws+3640) = v10324;
	i8 v10325 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v10325)();

	i8 v10326 = *(i8*)(intptr_t)(ws+3648);
	i8 v10327 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10327 = v10326;

	i8 v10328 = (i8)(intptr_t)(ws+3384);
	i8 v10329 = *(i8*)(intptr_t)v10328;
	i8 v10330 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v10330 = v10329;

	i8 v10331 = (i8)(intptr_t)(ws+40);
	i8 v10332 = *(i8*)(intptr_t)v10331;
	i8 v10333 = v10332+(+16);
	i8 v10334 = (i8)(intptr_t)(ws+1544);
	i8 v10335 = *(i8*)(intptr_t)v10334;
	i8 v10336 = v10335+(+32);
	*(i8*)(intptr_t)v10336 = v10333;

	i8 v10337 = (i8)(intptr_t)(ws+40);
	i8 v10338 = *(i8*)(intptr_t)v10337;
	i8 v10339 = (i8)(intptr_t)(ws+1544);
	i8 v10340 = *(i8*)(intptr_t)v10339;
	i8 v10341 = v10340+(+8);
	*(i8*)(intptr_t)v10341 = v10338;

	i8 v10342 = (i8)(intptr_t)(f239_AllocSubrId);

	((void(*)(void))(intptr_t)v10342)();

	i2 v10343 = *(i2*)(intptr_t)(ws+3416);
	i8 v10344 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v10344 = v10343;

	i8 v10345 = (i8)(intptr_t)(ws+3392);
	i2 v10346 = *(i2*)(intptr_t)v10345;
	i8 v10347 = (i8)(intptr_t)(ws+1544);
	i8 v10348 = *(i8*)(intptr_t)v10347;
	i8 v10349 = v10348+(+56);
	*(i2*)(intptr_t)v10349 = v10346;

	i8 v10350 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v10350)();

	i8 v10351 = *(i8*)(intptr_t)(ws+3528);
	i8 v10352 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10352 = v10351;

	i8 v10353 = (i8)(intptr_t)(ws+3400);
	i8 v10354 = *(i8*)(intptr_t)v10353;
	i8 v10355 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10355 = v10354;

	i1 v10356 = (i1)+6;
	i8 v10357 = (i8)(intptr_t)(ws+3408);
	i8 v10358 = *(i8*)(intptr_t)v10357;
	i8 v10359 = v10358+(+52);
	*(i1*)(intptr_t)v10359 = v10356;

	i8 v10360 = (i8)(intptr_t)(ws+1528);
	i8 v10361 = *(i8*)(intptr_t)v10360;
	i8 v10362 = v10361+(+48);
	i2 v10363 = *(i2*)(intptr_t)v10362;
	i8 v10364 = (i8)(intptr_t)(ws+3408);
	i8 v10365 = *(i8*)(intptr_t)v10364;
	i8 v10366 = v10365+(+48);
	*(i2*)(intptr_t)v10366 = v10363;

	i8 v10367 = (i8)(intptr_t)(ws+1528);
	i8 v10368 = *(i8*)(intptr_t)v10367;
	i8 v10369 = v10368+(+53);
	i1 v10370 = *(i1*)(intptr_t)v10369;
	i8 v10371 = (i8)(intptr_t)(ws+3408);
	i8 v10372 = *(i8*)(intptr_t)v10371;
	i8 v10373 = v10372+(+53);
	*(i1*)(intptr_t)v10373 = v10370;

	i8 v10374 = (i8)(intptr_t)(ws+1528);
	i8 v10375 = *(i8*)(intptr_t)v10374;
	i8 v10376 = v10375+(+50);
	i2 v10377 = *(i2*)(intptr_t)v10376;
	i8 v10378 = (i8)(intptr_t)(ws+3408);
	i8 v10379 = *(i8*)(intptr_t)v10378;
	i8 v10380 = v10379+(+50);
	*(i2*)(intptr_t)v10380 = v10377;

	i8 v10381 = (i8)(intptr_t)(ws+1544);
	i8 v10382 = *(i8*)(intptr_t)v10381;
	i8 v10383 = (i8)(intptr_t)(ws+3408);
	i8 v10384 = *(i8*)(intptr_t)v10383;
	*(i8*)(intptr_t)v10384 = v10382;

	i8 v10385 = (i8)(intptr_t)(ws+3408);
	i8 v10386 = *(i8*)(intptr_t)v10385;
	i8 v10387 = (i8)(intptr_t)(ws+1544);
	i8 v10388 = *(i8*)(intptr_t)v10387;
	i8 v10389 = v10388+(+40);
	*(i8*)(intptr_t)v10389 = v10386;

	i8 v10390 = (i8)(intptr_t)(ws+1544);
	i8 v10391 = *(i8*)(intptr_t)v10390;
	i8 v10392 = (i8)(intptr_t)(ws+1544);
	i8 v10393 = *(i8*)(intptr_t)v10392;
	i8 v10394 = v10393+(+48);
	*(i8*)(intptr_t)v10394 = v10391;

	i1 v10395 = (i1)+30;
	i8 v10396 = (i8)(intptr_t)(ws+3304);
	i8 v10397 = *(i8*)(intptr_t)v10396;
	i8 v10398 = v10397+(+32);
	*(i1*)(intptr_t)v10398 = v10395;

	i8 v10399 = (i8)(intptr_t)(ws+3408);
	i8 v10400 = *(i8*)(intptr_t)v10399;
	i8 v10401 = (i8)(intptr_t)(ws+3304);
	i8 v10402 = *(i8*)(intptr_t)v10401;
	*(i8*)(intptr_t)v10402 = v10400;

	i8 v10403 = (i8)(intptr_t)(ws+3304);
	i8 v10404 = *(i8*)(intptr_t)v10403;
	i8 v10405 = (i8)(intptr_t)(ws+3408);
	i8 v10406 = *(i8*)(intptr_t)v10405;
	i8 v10407 = v10406+(+32);
	*(i8*)(intptr_t)v10407 = v10404;

	i8 v10408 = (i8)(intptr_t)(ws+3304);
	i8 v10409 = *(i8*)(intptr_t)v10408;
	i8 v10410 = (i8)(intptr_t)(ws+1544);
	i8 v10411 = *(i8*)(intptr_t)v10410;
	*(i8*)(intptr_t)v10411 = v10409;

	i8 v10412 = (i8)(intptr_t)(ws+1544);
	i8 v10413 = *(i8*)(intptr_t)v10412;
	*(i8*)(intptr_t)(ws+3416) = v10413;
	i8 v10414 = (i8)(intptr_t)(f200_EmitterDeclareSubroutine);

	((void(*)(void))(intptr_t)v10414)();

	i8 v10415 = (i8)(intptr_t)(ws+3304);
	i8 v10416 = *(i8*)(intptr_t)v10415;
	i8 v10417 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10417 = v10416;

}
	void f229_IsSubroutine(void);
const i1 c02_s018c[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f76_SimpleError(void);
const i1 c02_s018d[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f76_SimpleError(void);
const i1 c02_s018e[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(void);
	void f302_yy_destructor(void);

// reduce_91 workspace at ws+3384 length ws+1
void f405_reduce_91(void) {

	i8 v10418 = (i8)(intptr_t)(ws+3304);
	i8 v10419 = *(i8*)(intptr_t)v10418;
	i8 v10420 = *(i8*)(intptr_t)v10419;
	*(i8*)(intptr_t)(ws+3560) = v10420;
	i8 v10421 = (i8)(intptr_t)(f229_IsSubroutine);

	((void(*)(void))(intptr_t)v10421)();

	i1 v10422 = *(i1*)(intptr_t)(ws+3568);
	i8 v10423 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10423 = v10422;

	i8 v10424 = (i8)(intptr_t)(ws+3304);
	i8 v10425 = *(i8*)(intptr_t)v10424;
	i8 v10426 = v10425+(+32);
	i1 v10427 = *(i1*)(intptr_t)v10426;
	i1 v10428 = (i1)+30;
	if (v10427==v10428) goto c02_070a; else goto c02_0708;

c02_070a:;

	i8 v10429 = (i8)(intptr_t)(ws+3384);
	i1 v10430 = *(i1*)(intptr_t)v10429;
	i1 v10431 = (i1)+0;
	if (v10430==v10431) goto c02_0708; else goto c02_0709;

c02_0708:;

	i8 v10432 = (i8)(intptr_t)c02_s018c;
	*(i8*)(intptr_t)(ws+3648) = v10432;
	i8 v10433 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10433)();

c02_0709:;

c02_0703:;

	i8 v10434 = (i8)(intptr_t)(ws+3304);
	i8 v10435 = *(i8*)(intptr_t)v10434;
	i8 v10436 = *(i8*)(intptr_t)v10435;
	i8 v10437 = *(i8*)(intptr_t)v10436;
	i8 v10438 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v10438 = v10437;

	i8 v10439 = (i8)(intptr_t)(ws+1544);
	i8 v10440 = *(i8*)(intptr_t)v10439;
	i8 v10441 = v10440+(+82);
	i1 v10442 = *(i1*)(intptr_t)v10441;
	i1 v10443 = v10442&(+1);
	i1 v10444 = (i1)+0;
	if (v10443==v10444) goto c02_070f; else goto c02_070e;

c02_070e:;

	i8 v10445 = (i8)(intptr_t)c02_s018d;
	*(i8*)(intptr_t)(ws+3648) = v10445;
	i8 v10446 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10446)();

c02_070f:;

c02_070b:;

	i8 v10447 = (i8)(intptr_t)(ws+1544);
	i8 v10448 = *(i8*)(intptr_t)v10447;
	i8 v10449 = v10448+(+8);
	i8 v10450 = *(i8*)(intptr_t)v10449;
	i8 v10451 = (i8)(intptr_t)(ws+40);
	i8 v10452 = *(i8*)(intptr_t)v10451;
	if (v10450==v10452) goto c02_0714; else goto c02_0713;

c02_0713:;

	i8 v10453 = (i8)(intptr_t)c02_s018e;
	*(i8*)(intptr_t)(ws+3648) = v10453;
	i8 v10454 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10454)();

c02_0714:;

c02_0710:;

	i1 v10455 = (i1)+25;
	*(i1*)(intptr_t)(ws+3496) = v10455;
	i8 v10456 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10456;
	i8 v10457 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10457)();

}
	void f69_InternalAlloc(void);
	void f130_MidStartsub(void);
	void f259_Generate(void);

// reduce_92 workspace at ws+3384 length ws+24
void f406_reduce_92(void) {

	i8 v10458 = (i8)+16;
	*(i8*)(intptr_t)(ws+3640) = v10458;
	i8 v10459 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v10459)();

	i8 v10460 = *(i8*)(intptr_t)(ws+3648);
	i8 v10461 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10461 = v10460;

	i8 v10462 = (i8)(intptr_t)(ws+3384);
	i8 v10463 = *(i8*)(intptr_t)v10462;
	i8 v10464 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10464 = v10463;

	i8 v10465 = (i8)(intptr_t)(ws+88);
	i8 v10466 = *(i8*)(intptr_t)v10465;
	i8 v10467 = (i8)(intptr_t)(ws+3392);
	i8 v10468 = *(i8*)(intptr_t)v10467;
	i8 v10469 = v10468+(+8);
	*(i8*)(intptr_t)v10469 = v10466;

	i8 v10470 = (i8)(intptr_t)(ws+52);
	i2 v10471 = *(i2*)(intptr_t)v10470;
	i8 v10472 = (i8)(intptr_t)(ws+3392);
	i8 v10473 = *(i8*)(intptr_t)v10472;
	*(i2*)(intptr_t)v10473 = v10471;

	i2 v10474 = (i2)+0;
	i8 v10475 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10475 = v10474;

	i8 v10476 = (i8)(intptr_t)(ws+54);
	i2 v10477 = *(i2*)(intptr_t)v10476;
	i8 v10478 = (i8)(intptr_t)(ws+3392);
	i8 v10479 = *(i8*)(intptr_t)v10478;
	i8 v10480 = v10479+(+2);
	*(i2*)(intptr_t)v10480 = v10477;

	i2 v10481 = (i2)+0;
	i8 v10482 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10482 = v10481;

	i8 v10483 = (i8)(intptr_t)(ws+3392);
	i8 v10484 = *(i8*)(intptr_t)v10483;
	i8 v10485 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v10485 = v10484;

	i8 v10486 = (i8)(intptr_t)(ws+1544);
	i8 v10487 = *(i8*)(intptr_t)v10486;
	i8 v10488 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10488 = v10487;

	i8 v10489 = (i8)(intptr_t)(ws+40);
	i8 v10490 = *(i8*)(intptr_t)v10489;
	*(i8*)(intptr_t)(ws+3408) = v10490;
	i8 v10491 = (i8)(intptr_t)(f130_MidStartsub);

	((void(*)(void))(intptr_t)v10491)();

	i8 v10492 = *(i8*)(intptr_t)(ws+3416);
	i8 v10493 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10493 = v10492;

	i8 v10494 = (i8)(intptr_t)(ws+3400);
	i8 v10495 = *(i8*)(intptr_t)v10494;
	*(i8*)(intptr_t)(ws+3488) = v10495;
	i8 v10496 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v10496)();

	i8 v10497 = (i8)(intptr_t)(ws+40);
	i8 v10498 = *(i8*)(intptr_t)v10497;
	i8 v10499 = v10498+(+82);
	i1 v10500 = *(i1*)(intptr_t)v10499;
	i1 v10501 = v10500|(+1);
	i8 v10502 = (i8)(intptr_t)(ws+40);
	i8 v10503 = *(i8*)(intptr_t)v10502;
	i8 v10504 = v10503+(+82);
	*(i1*)(intptr_t)v10504 = v10501;

}
	void f140_MidEndsub(void);
	void f259_Generate(void);
	void f269_ReportWorkspaces(void);
	void f34_Free(void);
	void f265_DestructSubroutineContents(void);
	void f302_yy_destructor(void);

// reduce_93 workspace at ws+3384 length ws+24
void f407_reduce_93(void) {

	i8 v10505 = (i8)(intptr_t)(ws+40);
	i8 v10506 = *(i8*)(intptr_t)v10505;
	*(i8*)(intptr_t)(ws+3408) = v10506;
	i8 v10507 = (i8)(intptr_t)(f140_MidEndsub);

	((void(*)(void))(intptr_t)v10507)();

	i8 v10508 = *(i8*)(intptr_t)(ws+3416);
	i8 v10509 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10509 = v10508;

	i8 v10510 = (i8)(intptr_t)(ws+3384);
	i8 v10511 = *(i8*)(intptr_t)v10510;
	*(i8*)(intptr_t)(ws+3488) = v10511;
	i8 v10512 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v10512)();

	i8 v10513 = (i8)(intptr_t)(ws+40);
	i8 v10514 = *(i8*)(intptr_t)v10513;
	*(i8*)(intptr_t)(ws+3408) = v10514;
	i8 v10515 = (i8)(intptr_t)(f269_ReportWorkspaces);

	((void(*)(void))(intptr_t)v10515)();

	i8 v10516 = (i8)(intptr_t)(ws+88);
	i8 v10517 = *(i8*)(intptr_t)v10516;
	i2 v10518 = *(i2*)(intptr_t)v10517;
	i8 v10519 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10519 = v10518;

	i8 v10520 = (i8)(intptr_t)(ws+88);
	i8 v10521 = *(i8*)(intptr_t)v10520;
	i8 v10522 = v10521+(+2);
	i2 v10523 = *(i2*)(intptr_t)v10522;
	i8 v10524 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10524 = v10523;

	i8 v10525 = (i8)(intptr_t)(ws+88);
	i8 v10526 = *(i8*)(intptr_t)v10525;
	i8 v10527 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10527 = v10526;

	i8 v10528 = (i8)(intptr_t)(ws+3392);
	i8 v10529 = *(i8*)(intptr_t)v10528;
	i8 v10530 = v10529+(+8);
	i8 v10531 = *(i8*)(intptr_t)v10530;
	i8 v10532 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v10532 = v10531;

	i8 v10533 = (i8)(intptr_t)(ws+3392);
	i8 v10534 = *(i8*)(intptr_t)v10533;
	*(i8*)(intptr_t)(ws+3680) = v10534;
	i8 v10535 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v10535)();

	i8 v10536 = (i8)(intptr_t)(ws+40);
	i8 v10537 = *(i8*)(intptr_t)v10536;
	i8 v10538 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10538 = v10537;

	i8 v10539 = (i8)(intptr_t)(ws+3400);
	i8 v10540 = *(i8*)(intptr_t)v10539;
	i8 v10541 = v10540+(+8);
	i8 v10542 = *(i8*)(intptr_t)v10541;
	i8 v10543 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10543 = v10542;

	i8 v10544 = (i8)(intptr_t)(ws+3400);
	i8 v10545 = *(i8*)(intptr_t)v10544;
	*(i8*)(intptr_t)(ws+3408) = v10545;
	i8 v10546 = (i8)(intptr_t)(f265_DestructSubroutineContents);

	((void(*)(void))(intptr_t)v10546)();

	i1 v10547 = (i1)+25;
	*(i1*)(intptr_t)(ws+3496) = v10547;
	i8 v10548 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10548;
	i8 v10549 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10549)();

}
	void f206_EmitterEmitInputParameters(void);
	void f207_EmitterEmitOutputParameters(void);

// reduce_94 workspace at ws+3384 length ws+0
void f408_reduce_94(void) {

	i1 v10550 = (i1)+0;
	i8 v10551 = (i8)(intptr_t)(ws+1544);
	i8 v10552 = *(i8*)(intptr_t)v10551;
	i8 v10553 = v10552+(+81);
	*(i1*)(intptr_t)v10553 = v10550;

	i8 v10554 = (i8)(intptr_t)(ws+1544);
	i8 v10555 = *(i8*)(intptr_t)v10554;
	*(i8*)(intptr_t)(ws+3408) = v10555;
	i8 v10556 = (i8)(intptr_t)(f206_EmitterEmitInputParameters);

	((void(*)(void))(intptr_t)v10556)();

	i8 v10557 = (i8)(intptr_t)(ws+1544);
	i8 v10558 = *(i8*)(intptr_t)v10557;
	*(i8*)(intptr_t)(ws+3408) = v10558;
	i8 v10559 = (i8)(intptr_t)(f207_EmitterEmitOutputParameters);

	((void(*)(void))(intptr_t)v10559)();

}
	void f98_CountParameters(void);
	void f206_EmitterEmitInputParameters(void);
	void f207_EmitterEmitOutputParameters(void);
	void f302_yy_destructor(void);

// reduce_95 workspace at ws+3384 length ws+1
void f409_reduce_95(void) {

	i8 v10560 = (i8)(intptr_t)(ws+3304);
	i8 v10561 = *(i8*)(intptr_t)v10560;
	*(i8*)(intptr_t)(ws+3392) = v10561;
	i8 v10562 = (i8)(intptr_t)(f98_CountParameters);

	((void(*)(void))(intptr_t)v10562)();

	i1 v10563 = *(i1*)(intptr_t)(ws+3400);
	i8 v10564 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10564 = v10563;

	i8 v10565 = (i8)(intptr_t)(ws+3384);
	i1 v10566 = *(i1*)(intptr_t)v10565;
	i8 v10567 = (i8)(intptr_t)(ws+1544);
	i8 v10568 = *(i8*)(intptr_t)v10567;
	i8 v10569 = v10568+(+81);
	*(i1*)(intptr_t)v10569 = v10566;

	i8 v10570 = (i8)(intptr_t)(ws+1544);
	i8 v10571 = *(i8*)(intptr_t)v10570;
	*(i8*)(intptr_t)(ws+3408) = v10571;
	i8 v10572 = (i8)(intptr_t)(f206_EmitterEmitInputParameters);

	((void(*)(void))(intptr_t)v10572)();

	i8 v10573 = (i8)(intptr_t)(ws+1544);
	i8 v10574 = *(i8*)(intptr_t)v10573;
	*(i8*)(intptr_t)(ws+3408) = v10574;
	i8 v10575 = (i8)(intptr_t)(f207_EmitterEmitOutputParameters);

	((void(*)(void))(intptr_t)v10575)();

	i1 v10576 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10576;
	i8 v10577 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10577;
	i8 v10578 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10578)();

}
	void f98_CountParameters(void);

// reduce_96 workspace at ws+3384 length ws+1
void f410_reduce_96(void) {

	i8 v10579 = (i8)(intptr_t)(ws+3304);
	i8 v10580 = *(i8*)(intptr_t)v10579;
	*(i8*)(intptr_t)(ws+3392) = v10580;
	i8 v10581 = (i8)(intptr_t)(f98_CountParameters);

	((void(*)(void))(intptr_t)v10581)();

	i1 v10582 = *(i1*)(intptr_t)(ws+3400);
	i8 v10583 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10583 = v10582;

	i8 v10584 = (i8)(intptr_t)(ws+3384);
	i1 v10585 = *(i1*)(intptr_t)v10584;
	i8 v10586 = (i8)(intptr_t)(ws+1544);
	i8 v10587 = *(i8*)(intptr_t)v10586;
	i8 v10588 = v10587+(+80);
	*(i1*)(intptr_t)v10588 = v10585;

}
	void f302_yy_destructor(void);

// reduce_97 workspace at ws+3384 length ws+0
void f411_reduce_97(void) {

	i8 v10589 = (i8)+0;
	i8 v10590 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10590 = v10589;

	i1 v10591 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10591;
	i8 v10592 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10592;
	i8 v10593 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10593)();

}
	void f302_yy_destructor(void);

// reduce_98 workspace at ws+3384 length ws+0
void f412_reduce_98(void) {

	i8 v10594 = (i8)(intptr_t)(ws+3312);
	i8 v10595 = *(i8*)(intptr_t)v10594;
	i8 v10596 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10596 = v10595;

	i1 v10597 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10597;
	i8 v10598 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10598;
	i8 v10599 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10599)();

}

// reduce_99 workspace at ws+3384 length ws+0
void f413_reduce_99(void) {

	i8 v10600 = (i8)(intptr_t)(ws+3304);
	i8 v10601 = *(i8*)(intptr_t)v10600;
	i8 v10602 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10602 = v10601;

}
	void f302_yy_destructor(void);

// reduce_100 workspace at ws+3384 length ws+0
void f414_reduce_100(void) {

	i8 v10603 = (i8)(intptr_t)(ws+3304);
	i8 v10604 = *(i8*)(intptr_t)v10603;
	i8 v10605 = (i8)(intptr_t)(ws+3320);
	i8 v10606 = *(i8*)(intptr_t)v10605;
	i8 v10607 = *(i8*)(intptr_t)v10606;
	i8 v10608 = v10607+(+16);
	*(i8*)(intptr_t)v10608 = v10604;

	i8 v10609 = (i8)(intptr_t)(ws+3320);
	i8 v10610 = *(i8*)(intptr_t)v10609;
	i8 v10611 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10611 = v10610;

	i1 v10612 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v10612;
	i8 v10613 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10613;
	i8 v10614 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10614)();

}
	void f221_AddSymbol(void);
	void f262_InitVariable(void);
	void f302_yy_destructor(void);

// reduce_101 workspace at ws+3384 length ws+8
void f415_reduce_101(void) {

	i8 v10615 = (i8)(intptr_t)(ws+1544);
	i8 v10616 = *(i8*)(intptr_t)v10615;
	i8 v10617 = v10616+(+16);
	*(i8*)(intptr_t)(ws+3488) = v10617;
	i8 v10618 = (i8)(intptr_t)(ws+3320);
	i8 v10619 = *(i8*)(intptr_t)v10618;
	*(i8*)(intptr_t)(ws+3496) = v10619;
	i8 v10620 = (i8)(intptr_t)(f221_AddSymbol);

	((void(*)(void))(intptr_t)v10620)();

	i8 v10621 = *(i8*)(intptr_t)(ws+3504);
	i8 v10622 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10622 = v10621;

	i8 v10623 = (i8)(intptr_t)(ws+3384);
	i8 v10624 = *(i8*)(intptr_t)v10623;
	i8 v10625 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10625 = v10624;

	i8 v10626 = (i8)(intptr_t)(ws+1544);
	i8 v10627 = *(i8*)(intptr_t)v10626;
	*(i8*)(intptr_t)(ws+3488) = v10627;
	i8 v10628 = (i8)(intptr_t)(ws+3296);
	i8 v10629 = *(i8*)(intptr_t)v10628;
	*(i8*)(intptr_t)(ws+3496) = v10629;
	i8 v10630 = (i8)(intptr_t)(ws+3304);
	i8 v10631 = *(i8*)(intptr_t)v10630;
	*(i8*)(intptr_t)(ws+3504) = v10631;
	i8 v10632 = (i8)(intptr_t)(f262_InitVariable);

	((void(*)(void))(intptr_t)v10632)();

	i1 v10633 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10633;
	i8 v10634 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10634;
	i8 v10635 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10635)();

}
	void f241_ArchAlignUp(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_102 workspace at ws+3384 length ws+2
void f416_reduce_102(void) {

	i8 v10636 = (i8)(intptr_t)(ws+72);
	i8 v10637 = *(i8*)(intptr_t)v10636;
	i8 v10638 = v10637+(+48);
	i2 v10639 = *(i2*)(intptr_t)v10638;
	*(i2*)(intptr_t)(ws+3544) = v10639;
	i8 v10640 = (i8)(intptr_t)(ws+72);
	i8 v10641 = *(i8*)(intptr_t)v10640;
	i8 v10642 = v10641+(+53);
	i1 v10643 = *(i1*)(intptr_t)v10642;
	*(i1*)(intptr_t)(ws+3546) = v10643;
	i8 v10644 = (i8)(intptr_t)(f241_ArchAlignUp);

	((void(*)(void))(intptr_t)v10644)();

	i2 v10645 = *(i2*)(intptr_t)(ws+3548);
	i8 v10646 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v10646 = v10645;

	i8 v10647 = (i8)(intptr_t)(ws+3384);
	i2 v10648 = *(i2*)(intptr_t)v10647;
	i8 v10649 = (i8)(intptr_t)(ws+72);
	i8 v10650 = *(i8*)(intptr_t)v10649;
	i8 v10651 = v10650+(+50);
	*(i2*)(intptr_t)v10651 = v10648;

	i1 v10652 = (i1)+66;
	*(i1*)(intptr_t)(ws+3496) = v10652;
	i8 v10653 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v10653;
	i8 v10654 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10654)();

	i1 v10655 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v10655;
	i8 v10656 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10656;
	i8 v10657 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10657)();

	i1 v10658 = (i1)+20;
	*(i1*)(intptr_t)(ws+3496) = v10658;
	i8 v10659 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10659;
	i8 v10660 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10660)();

}
	void f295_SymbolRedeclarationError(void);
	void f66_AllocNewType(void);
	void f295_SymbolRedeclarationError(void);

// reduce_103 workspace at ws+3384 length ws+8
void f417_reduce_103(void) {

	i8 v10661 = (i8)(intptr_t)(ws+3304);
	i8 v10662 = *(i8*)(intptr_t)v10661;
	i8 v10663 = v10662+(+32);
	i1 v10664 = *(i1*)(intptr_t)v10663;

	if (v10664 != +30) goto c02_0716;

	i8 v10665 = (i8)(intptr_t)(ws+3304);
	i8 v10666 = *(i8*)(intptr_t)v10665;
	i8 v10667 = *(i8*)(intptr_t)v10666;
	i8 v10668 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10668 = v10667;

	i8 v10669 = (i8)(intptr_t)(ws+72);
	i8 v10670 = *(i8*)(intptr_t)v10669;
	i8 v10671 = v10670+(+52);
	i1 v10672 = *(i1*)(intptr_t)v10671;
	i1 v10673 = (i1)+1;
	if (v10672==v10673) goto c02_071b; else goto c02_071a;

c02_071a:;

	i8 v10674 = (i8)(intptr_t)(f295_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v10674)();

c02_071b:;

c02_0717:;

	goto c02_0715;

c02_0716:;

	if (v10664 != +0) goto c02_071c;

	i8 v10675 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v10675)();

	i8 v10676 = *(i8*)(intptr_t)(ws+3528);
	i8 v10677 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10677 = v10676;

	i8 v10678 = (i8)(intptr_t)(ws+3384);
	i8 v10679 = *(i8*)(intptr_t)v10678;
	i8 v10680 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10680 = v10679;

	i1 v10681 = (i1)+30;
	i8 v10682 = (i8)(intptr_t)(ws+3304);
	i8 v10683 = *(i8*)(intptr_t)v10682;
	i8 v10684 = v10683+(+32);
	*(i1*)(intptr_t)v10684 = v10681;

	i8 v10685 = (i8)(intptr_t)(ws+72);
	i8 v10686 = *(i8*)(intptr_t)v10685;
	i8 v10687 = (i8)(intptr_t)(ws+3304);
	i8 v10688 = *(i8*)(intptr_t)v10687;
	*(i8*)(intptr_t)v10688 = v10686;

	i8 v10689 = (i8)(intptr_t)(ws+3304);
	i8 v10690 = *(i8*)(intptr_t)v10689;
	i8 v10691 = (i8)(intptr_t)(ws+72);
	i8 v10692 = *(i8*)(intptr_t)v10691;
	i8 v10693 = v10692+(+32);
	*(i8*)(intptr_t)v10693 = v10690;

	goto c02_0715;

c02_071c:;

	i8 v10694 = (i8)(intptr_t)(f295_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v10694)();

c02_0715:;


	i1 v10695 = (i1)+5;
	i8 v10696 = (i8)(intptr_t)(ws+72);
	i8 v10697 = *(i8*)(intptr_t)v10696;
	i8 v10698 = v10697+(+52);
	*(i1*)(intptr_t)v10698 = v10695;

}
	void f224_CheckNotPartialType(void);
	void f233_IsRecord(void);
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s018f[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// reduce_104 workspace at ws+3384 length ws+1
void f418_reduce_104(void) {

	i8 v10699 = (i8)(intptr_t)(ws+3304);
	i8 v10700 = *(i8*)(intptr_t)v10699;
	*(i8*)(intptr_t)(ws+3520) = v10700;
	i8 v10701 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v10701)();

	i8 v10702 = (i8)(intptr_t)(ws+3304);
	i8 v10703 = *(i8*)(intptr_t)v10702;
	*(i8*)(intptr_t)(ws+3488) = v10703;
	i8 v10704 = (i8)(intptr_t)(f233_IsRecord);

	((void(*)(void))(intptr_t)v10704)();

	i1 v10705 = *(i1*)(intptr_t)(ws+3496);
	i8 v10706 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10706 = v10705;

	i8 v10707 = (i8)(intptr_t)(ws+3384);
	i1 v10708 = *(i1*)(intptr_t)v10707;
	i1 v10709 = (i1)+0;
	if (v10708==v10709) goto c02_0720; else goto c02_0721;

c02_0720:;

	i8 v10710 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v10710)();

	i8 v10711 = (i8)(intptr_t)(ws+3304);
	i8 v10712 = *(i8*)(intptr_t)v10711;
	i8 v10713 = v10712+(+32);
	i8 v10714 = *(i8*)(intptr_t)v10713;
	i8 v10715 = v10714+(+8);
	i8 v10716 = *(i8*)(intptr_t)v10715;
	*(i8*)(intptr_t)(ws+3696) = v10716;
	i8 v10717 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v10717)();

	i8 v10718 = (i8)(intptr_t)c02_s018f;
	*(i8*)(intptr_t)(ws+3696) = v10718;
	i8 v10719 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v10719)();

	i8 v10720 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v10720)();

c02_0721:;

c02_071d:;

	i8 v10721 = (i8)(intptr_t)(ws+3304);
	i8 v10722 = *(i8*)(intptr_t)v10721;
	i8 v10723 = v10722+(+53);
	i1 v10724 = *(i1*)(intptr_t)v10723;
	i8 v10725 = (i8)(intptr_t)(ws+72);
	i8 v10726 = *(i8*)(intptr_t)v10725;
	i8 v10727 = v10726+(+53);
	*(i1*)(intptr_t)v10727 = v10724;

	i8 v10728 = (i8)(intptr_t)(ws+3304);
	i8 v10729 = *(i8*)(intptr_t)v10728;
	i8 v10730 = v10729+(+48);
	i2 v10731 = *(i2*)(intptr_t)v10730;
	i8 v10732 = (i8)(intptr_t)(ws+72);
	i8 v10733 = *(i8*)(intptr_t)v10732;
	i8 v10734 = v10733+(+48);
	*(i2*)(intptr_t)v10734 = v10731;

	i8 v10735 = (i8)(intptr_t)(ws+3304);
	i8 v10736 = *(i8*)(intptr_t)v10735;
	i8 v10737 = (i8)(intptr_t)(ws+72);
	i8 v10738 = *(i8*)(intptr_t)v10737;
	i8 v10739 = v10738+(+16);
	*(i8*)(intptr_t)v10739 = v10736;

}
	void f224_CheckNotPartialType(void);
	void f69_InternalAlloc(void);
	void f245_ArchInitMember(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_105 workspace at ws+3384 length ws+8
void f419_reduce_105(void) {

	i8 v10740 = (i8)(intptr_t)(ws+3312);
	i8 v10741 = *(i8*)(intptr_t)v10740;
	*(i8*)(intptr_t)(ws+3520) = v10741;
	i8 v10742 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v10742)();

	i8 v10743 = (i8)(intptr_t)(ws+72);
	i8 v10744 = *(i8*)(intptr_t)v10743;
	i8 v10745 = v10744+(+53);
	i1 v10746 = *(i1*)(intptr_t)v10745;
	i8 v10747 = (i8)(intptr_t)(ws+3312);
	i8 v10748 = *(i8*)(intptr_t)v10747;
	i8 v10749 = v10748+(+53);
	i1 v10750 = *(i1*)(intptr_t)v10749;
	if (v10746<v10750) goto c02_0725; else goto c02_0726;

c02_0725:;

	i8 v10751 = (i8)(intptr_t)(ws+3312);
	i8 v10752 = *(i8*)(intptr_t)v10751;
	i8 v10753 = v10752+(+53);
	i1 v10754 = *(i1*)(intptr_t)v10753;
	i8 v10755 = (i8)(intptr_t)(ws+72);
	i8 v10756 = *(i8*)(intptr_t)v10755;
	i8 v10757 = v10756+(+53);
	*(i1*)(intptr_t)v10757 = v10754;

c02_0726:;

c02_0722:;

	i1 v10758 = (i1)+28;
	i8 v10759 = (i8)(intptr_t)(ws+3336);
	i8 v10760 = *(i8*)(intptr_t)v10759;
	i8 v10761 = v10760+(+32);
	*(i1*)(intptr_t)v10761 = v10758;

	i8 v10762 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v10762;
	i8 v10763 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v10763)();

	i8 v10764 = *(i8*)(intptr_t)(ws+3648);
	i8 v10765 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10765 = v10764;

	i8 v10766 = (i8)(intptr_t)(ws+3384);
	i8 v10767 = *(i8*)(intptr_t)v10766;
	i8 v10768 = (i8)(intptr_t)(ws+3336);
	i8 v10769 = *(i8*)(intptr_t)v10768;
	*(i8*)(intptr_t)v10769 = v10767;

	i8 v10770 = (i8)(intptr_t)(ws+3312);
	i8 v10771 = *(i8*)(intptr_t)v10770;
	i8 v10772 = (i8)(intptr_t)(ws+3336);
	i8 v10773 = *(i8*)(intptr_t)v10772;
	i8 v10774 = *(i8*)(intptr_t)v10773;
	*(i8*)(intptr_t)v10774 = v10771;

	i8 v10775 = (i8)(intptr_t)(ws+72);
	i8 v10776 = *(i8*)(intptr_t)v10775;
	*(i8*)(intptr_t)(ws+3392) = v10776;
	i8 v10777 = (i8)(intptr_t)(ws+3336);
	i8 v10778 = *(i8*)(intptr_t)v10777;
	*(i8*)(intptr_t)(ws+3400) = v10778;
	i8 v10779 = (i8)(intptr_t)(ws+3328);
	i2 v10780 = *(i2*)(intptr_t)v10779;
	*(i2*)(intptr_t)(ws+3408) = v10780;
	i8 v10781 = (i8)(intptr_t)(f245_ArchInitMember);

	((void(*)(void))(intptr_t)v10781)();

	i1 v10782 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10782;
	i8 v10783 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10783;
	i8 v10784 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10784)();

	i1 v10785 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10785;
	i8 v10786 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10786;
	i8 v10787 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10787)();

}

// reduce_106 workspace at ws+3384 length ws+0
void f420_reduce_106(void) {

	i8 v10788 = (i8)(intptr_t)(ws+72);
	i8 v10789 = *(i8*)(intptr_t)v10788;
	i8 v10790 = v10789+(+48);
	i2 v10791 = *(i2*)(intptr_t)v10790;
	i8 v10792 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v10792 = v10791;

}
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_107 workspace at ws+3384 length ws+0
void f421_reduce_107(void) {

	i8 v10793 = (i8)(intptr_t)(ws+3312);
	i4 v10794 = *(i4*)(intptr_t)v10793;
	i2 v10795 = (s2)(s4)v10794;
	i8 v10796 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v10796 = v10795;

	i1 v10797 = (i1)+16;
	*(i1*)(intptr_t)(ws+3496) = v10797;
	i8 v10798 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10798;
	i8 v10799 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10799)();

	i1 v10800 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10800;
	i8 v10801 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10801;
	i8 v10802 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10802)();

}
	void f221_AddSymbol(void);

// reduce_108 workspace at ws+3384 length ws+8
void f422_reduce_108(void) {

	i8 v10803 = (i8)(intptr_t)(ws+72);
	i8 v10804 = *(i8*)(intptr_t)v10803;
	*(i8*)(intptr_t)(ws+3488) = v10804;
	i8 v10805 = (i8)(intptr_t)(ws+3304);
	i8 v10806 = *(i8*)(intptr_t)v10805;
	*(i8*)(intptr_t)(ws+3496) = v10806;
	i8 v10807 = (i8)(intptr_t)(f221_AddSymbol);

	((void(*)(void))(intptr_t)v10807)();

	i8 v10808 = *(i8*)(intptr_t)(ws+3504);
	i8 v10809 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10809 = v10808;

	i8 v10810 = (i8)(intptr_t)(ws+3384);
	i8 v10811 = *(i8*)(intptr_t)v10810;
	i8 v10812 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10812 = v10811;

	i8 v10813 = (i8)(intptr_t)(ws+72);
	i8 v10814 = *(i8*)(intptr_t)v10813;
	i8 v10815 = v10814+(+24);
	i1 v10816 = *(i1*)(intptr_t)v10815;
	i1 v10817 = v10816+(+1);
	i8 v10818 = (i8)(intptr_t)(ws+72);
	i8 v10819 = *(i8*)(intptr_t)v10818;
	i8 v10820 = v10819+(+24);
	*(i1*)(intptr_t)v10820 = v10817;

}
	void f297_CheckEndOfInitialiser(void);
	void f159_MidEndinit(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_109 workspace at ws+3384 length ws+8
void f423_reduce_109(void) {

	i8 v10821 = (i8)(intptr_t)(f297_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v10821)();

	i8 v10822 = (i8)(intptr_t)(f159_MidEndinit);

	((void(*)(void))(intptr_t)v10822)();

	i8 v10823 = *(i8*)(intptr_t)(ws+3392);
	i8 v10824 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10824 = v10823;

	i8 v10825 = (i8)(intptr_t)(ws+3384);
	i8 v10826 = *(i8*)(intptr_t)v10825;
	*(i8*)(intptr_t)(ws+3488) = v10826;
	i8 v10827 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v10827)();

	i1 v10828 = (i1)+31;
	*(i1*)(intptr_t)(ws+3496) = v10828;
	i8 v10829 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v10829;
	i8 v10830 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10830)();

	i1 v10831 = (i1)+32;
	*(i1*)(intptr_t)(ws+3496) = v10831;
	i8 v10832 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10832;
	i8 v10833 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10833)();

	i1 v10834 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10834;
	i8 v10835 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10835;
	i8 v10836 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10836)();

}
	void f224_CheckNotPartialType(void);
	void f69_InternalAlloc(void);
	void f238_AllocLabel(void);
	void f228_IsArray(void);
	void f233_IsRecord(void);
const i1 c02_s0190[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(void);
	void f233_IsRecord(void);
const i1 c02_s0191[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f76_SimpleError(void);
	void f233_IsRecord(void);
	void f127_MidStartinit(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_110 workspace at ws+3384 length ws+24
void f424_reduce_110(void) {

	i8 v10837 = (i8)(intptr_t)(ws+3312);
	i8 v10838 = *(i8*)(intptr_t)v10837;
	*(i8*)(intptr_t)(ws+3520) = v10838;
	i8 v10839 = (i8)(intptr_t)(f224_CheckNotPartialType);

	((void(*)(void))(intptr_t)v10839)();

	i1 v10840 = (i1)+28;
	i8 v10841 = (i8)(intptr_t)(ws+3328);
	i8 v10842 = *(i8*)(intptr_t)v10841;
	i8 v10843 = v10842+(+32);
	*(i1*)(intptr_t)v10843 = v10840;

	i8 v10844 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v10844;
	i8 v10845 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v10845)();

	i8 v10846 = *(i8*)(intptr_t)(ws+3648);
	i8 v10847 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10847 = v10846;

	i8 v10848 = (i8)(intptr_t)(ws+3384);
	i8 v10849 = *(i8*)(intptr_t)v10848;
	i8 v10850 = (i8)(intptr_t)(ws+3328);
	i8 v10851 = *(i8*)(intptr_t)v10850;
	*(i8*)(intptr_t)v10851 = v10849;

	i8 v10852 = (i8)(intptr_t)(ws+3312);
	i8 v10853 = *(i8*)(intptr_t)v10852;
	i8 v10854 = (i8)(intptr_t)(ws+3328);
	i8 v10855 = *(i8*)(intptr_t)v10854;
	i8 v10856 = *(i8*)(intptr_t)v10855;
	*(i8*)(intptr_t)v10856 = v10853;

	i8 v10857 = (i8)(intptr_t)(ws+40);
	i8 v10858 = *(i8*)(intptr_t)v10857;
	i8 v10859 = (i8)(intptr_t)(ws+3328);
	i8 v10860 = *(i8*)(intptr_t)v10859;
	i8 v10861 = *(i8*)(intptr_t)v10860;
	i8 v10862 = v10861+(+8);
	*(i8*)(intptr_t)v10862 = v10858;

	i1 v10863 = (i1)+255;
	i8 v10864 = (i8)(intptr_t)(ws+3328);
	i8 v10865 = *(i8*)(intptr_t)v10864;
	i8 v10866 = *(i8*)(intptr_t)v10865;
	i8 v10867 = v10866+(+26);
	*(i1*)(intptr_t)v10867 = v10863;

	i8 v10868 = (i8)(intptr_t)(f238_AllocLabel);

	((void(*)(void))(intptr_t)v10868)();

	i2 v10869 = *(i2*)(intptr_t)(ws+3472);
	i8 v10870 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v10870 = v10869;

	i8 v10871 = (i8)(intptr_t)(ws+3392);
	i2 v10872 = *(i2*)(intptr_t)v10871;
	i8 v10873 = (i8)(intptr_t)(ws+3328);
	i8 v10874 = *(i8*)(intptr_t)v10873;
	i8 v10875 = *(i8*)(intptr_t)v10874;
	i8 v10876 = v10875+(+24);
	*(i2*)(intptr_t)v10876 = v10872;

	i8 v10877 = (i8)(intptr_t)(ws+3312);
	i8 v10878 = *(i8*)(intptr_t)v10877;
	*(i8*)(intptr_t)(ws+3496) = v10878;
	i8 v10879 = (i8)(intptr_t)(f228_IsArray);

	((void(*)(void))(intptr_t)v10879)();

	i1 v10880 = *(i1*)(intptr_t)(ws+3504);
	i8 v10881 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v10881 = v10880;

	i8 v10882 = (i8)(intptr_t)(ws+3312);
	i8 v10883 = *(i8*)(intptr_t)v10882;
	*(i8*)(intptr_t)(ws+3488) = v10883;
	i8 v10884 = (i8)(intptr_t)(f233_IsRecord);

	((void(*)(void))(intptr_t)v10884)();

	i1 v10885 = *(i1*)(intptr_t)(ws+3496);
	i8 v10886 = (i8)(intptr_t)(ws+3395);
	*(i1*)(intptr_t)v10886 = v10885;

	i8 v10887 = (i8)(intptr_t)(ws+3394);
	i1 v10888 = *(i1*)(intptr_t)v10887;
	i1 v10889 = (i1)+0;
	if (v10888==v10889) goto c02_072e; else goto c02_072d;

c02_072e:;

	i8 v10890 = (i8)(intptr_t)(ws+3395);
	i1 v10891 = *(i1*)(intptr_t)v10890;
	i1 v10892 = (i1)+0;
	if (v10891==v10892) goto c02_072c; else goto c02_072d;

c02_072c:;

	i8 v10893 = (i8)(intptr_t)c02_s0190;
	*(i8*)(intptr_t)(ws+3648) = v10893;
	i8 v10894 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10894)();

c02_072d:;

c02_0727:;

	i8 v10895 = (i8)(intptr_t)(ws+3312);
	i8 v10896 = *(i8*)(intptr_t)v10895;
	*(i8*)(intptr_t)(ws+3488) = v10896;
	i8 v10897 = (i8)(intptr_t)(f233_IsRecord);

	((void(*)(void))(intptr_t)v10897)();

	i1 v10898 = *(i1*)(intptr_t)(ws+3496);
	i8 v10899 = (i8)(intptr_t)(ws+3396);
	*(i1*)(intptr_t)v10899 = v10898;

	i8 v10900 = (i8)(intptr_t)(ws+3396);
	i1 v10901 = *(i1*)(intptr_t)v10900;
	i1 v10902 = (i1)+0;
	if (v10901==v10902) goto c02_0735; else goto c02_0736;

c02_0736:;

	i8 v10903 = (i8)(intptr_t)(ws+3312);
	i8 v10904 = *(i8*)(intptr_t)v10903;
	i8 v10905 = v10904+(+16);
	i8 v10906 = *(i8*)(intptr_t)v10905;
	i8 v10907 = (i8)+0;
	if (v10906==v10907) goto c02_0735; else goto c02_0734;

c02_0734:;

	i8 v10908 = (i8)(intptr_t)c02_s0191;
	*(i8*)(intptr_t)(ws+3648) = v10908;
	i8 v10909 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10909)();

c02_0735:;

c02_072f:;

	i8 v10910 = (i8)(intptr_t)(ws+3312);
	i8 v10911 = *(i8*)(intptr_t)v10910;
	*(i8*)(intptr_t)(ws+3488) = v10911;
	i8 v10912 = (i8)(intptr_t)(f233_IsRecord);

	((void(*)(void))(intptr_t)v10912)();

	i1 v10913 = *(i1*)(intptr_t)(ws+3496);
	i8 v10914 = (i8)(intptr_t)(ws+3397);
	*(i1*)(intptr_t)v10914 = v10913;

	i8 v10915 = (i8)(intptr_t)(ws+3397);
	i1 v10916 = *(i1*)(intptr_t)v10915;
	i1 v10917 = (i1)+0;
	if (v10916==v10917) goto c02_073b; else goto c02_073a;

c02_073a:;

	i8 v10918 = (i8)(intptr_t)(ws+3312);
	i8 v10919 = *(i8*)(intptr_t)v10918;
	i8 v10920 = *(i8*)(intptr_t)v10919;
	i8 v10921 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10921 = v10920;

c02_073b:;

c02_0737:;

	i8 v10922 = (i8)(intptr_t)(ws+3312);
	i8 v10923 = *(i8*)(intptr_t)v10922;
	i8 v10924 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10924 = v10923;

	i2 v10925 = (i2)+0;
	i8 v10926 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10926 = v10925;

	i2 v10927 = (i2)+0;
	i8 v10928 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v10928 = v10927;

	i8 v10929 = (i8)(intptr_t)(ws+3328);
	i8 v10930 = *(i8*)(intptr_t)v10929;
	*(i8*)(intptr_t)(ws+3408) = v10930;
	i8 v10931 = (i8)(intptr_t)(f127_MidStartinit);

	((void(*)(void))(intptr_t)v10931)();

	i8 v10932 = *(i8*)(intptr_t)(ws+3416);
	i8 v10933 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10933 = v10932;

	i8 v10934 = (i8)(intptr_t)(ws+3400);
	i8 v10935 = *(i8*)(intptr_t)v10934;
	*(i8*)(intptr_t)(ws+3488) = v10935;
	i8 v10936 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v10936)();

	i1 v10937 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10937;
	i8 v10938 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10938;
	i8 v10939 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10939)();

	i1 v10940 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v10940;
	i8 v10941 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10941;
	i8 v10942 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v10942)();

}
	void f301_GetInitedMemberChecked(void);
	void f299_AlignTo(void);
	void f230_IsNum(void);
const i1 c02_s0192[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f76_SimpleError(void);
	void f105_MidInit(void);
	void f259_Generate(void);
	void f68_IsPtr(void);
const i1 c02_s0193[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f76_SimpleError(void);
	void f149_MidInitstring(void);
	void f259_Generate(void);
const i1 c02_s0194[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(void);
	void f163_MidInitaddress(void);
	void f259_Generate(void);
const i1 c02_s0195[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(void);
	void f141_MidInitsubref(void);
	void f259_Generate(void);
	void f292_parser_i_constant_error(void);
	void f63_Discard(void);

// reduce_111 workspace at ws+3384 length ws+64
void f425_reduce_111(void) {

	i8 v10943 = (i8)(intptr_t)(f301_GetInitedMemberChecked);

	((void(*)(void))(intptr_t)v10943)();

	i8 v10944 = *(i8*)(intptr_t)(ws+3456);
	i8 v10945 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10945 = v10944;

	i8 v10946 = *(i8*)(intptr_t)(ws+3448);
	i8 v10947 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10947 = v10946;

	i8 v10948 = (i8)(intptr_t)(ws+3392);
	i8 v10949 = *(i8*)(intptr_t)v10948;
	i8 v10950 = v10949+(+53);
	i1 v10951 = *(i1*)(intptr_t)v10950;
	*(i1*)(intptr_t)(ws+3464) = v10951;
	i8 v10952 = (i8)(intptr_t)(f299_AlignTo);

	((void(*)(void))(intptr_t)v10952)();

	i8 v10953 = (i8)(intptr_t)(ws+3392);
	i8 v10954 = *(i8*)(intptr_t)v10953;
	i8 v10955 = v10954+(+48);
	i2 v10956 = *(i2*)(intptr_t)v10955;
	i8 v10957 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v10957 = v10956;

	i8 v10958 = (i8)(intptr_t)(ws+3304);
	i8 v10959 = *(i8*)(intptr_t)v10958;
	i8 v10960 = v10959+(+48);
	i1 v10961 = *(i1*)(intptr_t)v10960;

	if (v10961 != +42) goto c02_073d;

	i8 v10962 = (i8)(intptr_t)(ws+3392);
	i8 v10963 = *(i8*)(intptr_t)v10962;
	*(i8*)(intptr_t)(ws+3560) = v10963;
	i8 v10964 = (i8)(intptr_t)(f230_IsNum);

	((void(*)(void))(intptr_t)v10964)();

	i1 v10965 = *(i1*)(intptr_t)(ws+3568);
	i8 v10966 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v10966 = v10965;

	i8 v10967 = (i8)(intptr_t)(ws+3402);
	i1 v10968 = *(i1*)(intptr_t)v10967;
	i1 v10969 = (i1)+0;
	if (v10968==v10969) goto c02_0741; else goto c02_0742;

c02_0741:;

	i8 v10970 = (i8)(intptr_t)c02_s0192;
	*(i8*)(intptr_t)(ws+3648) = v10970;
	i8 v10971 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10971)();

c02_0742:;

c02_073e:;

	i8 v10972 = (i8)(intptr_t)(ws+3400);
	i2 v10973 = *(i2*)(intptr_t)v10972;
	i1 v10974 = v10973;
	*(i1*)(intptr_t)(ws+3480) = v10974;
	i8 v10975 = (i8)(intptr_t)(ws+3304);
	i8 v10976 = *(i8*)(intptr_t)v10975;
	i4 v10977 = *(i4*)(intptr_t)v10976;
	*(i4*)(intptr_t)(ws+3484) = v10977;
	i8 v10978 = (i8)(intptr_t)(f105_MidInit);

	((void(*)(void))(intptr_t)v10978)();

	i8 v10979 = *(i8*)(intptr_t)(ws+3488);
	i8 v10980 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10980 = v10979;

	i8 v10981 = (i8)(intptr_t)(ws+3408);
	i8 v10982 = *(i8*)(intptr_t)v10981;
	*(i8*)(intptr_t)(ws+3488) = v10982;
	i8 v10983 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v10983)();

	goto c02_073c;

c02_073d:;

	if (v10961 != +43) goto c02_0743;

	i8 v10984 = (i8)(intptr_t)(ws+3392);
	i8 v10985 = *(i8*)(intptr_t)v10984;
	*(i8*)(intptr_t)(ws+3560) = v10985;
	i8 v10986 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v10986)();

	i1 v10987 = *(i1*)(intptr_t)(ws+3568);
	i8 v10988 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v10988 = v10987;

	i8 v10989 = (i8)(intptr_t)(ws+3416);
	i1 v10990 = *(i1*)(intptr_t)v10989;
	i1 v10991 = (i1)+0;
	if (v10990==v10991) goto c02_0749; else goto c02_074b;

c02_074b:;

	i8 v10992 = (i8)(intptr_t)(ws+3392);
	i8 v10993 = *(i8*)(intptr_t)v10992;
	i8 v10994 = *(i8*)(intptr_t)v10993;
	i8 v10995 = (i8)(intptr_t)(ws+1512);
	i8 v10996 = *(i8*)(intptr_t)v10995;
	if (v10994==v10996) goto c02_074a; else goto c02_0749;

c02_0749:;

	i8 v10997 = (i8)(intptr_t)c02_s0193;
	*(i8*)(intptr_t)(ws+3648) = v10997;
	i8 v10998 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10998)();

c02_074a:;

c02_0744:;

	i8 v10999 = (i8)(intptr_t)(ws+3304);
	i8 v11000 = *(i8*)(intptr_t)v10999;
	i8 v11001 = *(i8*)(intptr_t)v11000;
	*(i8*)(intptr_t)(ws+3448) = v11001;
	i8 v11002 = (i8)(intptr_t)(f149_MidInitstring);

	((void(*)(void))(intptr_t)v11002)();

	i8 v11003 = *(i8*)(intptr_t)(ws+3456);
	i8 v11004 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v11004 = v11003;

	i8 v11005 = (i8)(intptr_t)(ws+3424);
	i8 v11006 = *(i8*)(intptr_t)v11005;
	*(i8*)(intptr_t)(ws+3488) = v11006;
	i8 v11007 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11007)();

	goto c02_073c;

c02_0743:;

	if (v10961 != +44) goto c02_074c;

	i8 v11008 = (i8)(intptr_t)(ws+3392);
	i8 v11009 = *(i8*)(intptr_t)v11008;
	i8 v11010 = (i8)(intptr_t)(ws+3304);
	i8 v11011 = *(i8*)(intptr_t)v11010;
	i8 v11012 = v11011+(+24);
	i8 v11013 = *(i8*)(intptr_t)v11012;
	if (v11009==v11013) goto c02_0751; else goto c02_0750;

c02_0750:;

	i8 v11014 = (i8)(intptr_t)c02_s0194;
	*(i8*)(intptr_t)(ws+3648) = v11014;
	i8 v11015 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v11015)();

c02_0751:;

c02_074d:;

	i8 v11016 = (i8)(intptr_t)(ws+3304);
	i8 v11017 = *(i8*)(intptr_t)v11016;
	i8 v11018 = *(i8*)(intptr_t)v11017;
	*(i8*)(intptr_t)(ws+3448) = v11018;
	i8 v11019 = (i8)(intptr_t)(ws+3304);
	i8 v11020 = *(i8*)(intptr_t)v11019;
	i8 v11021 = v11020+(+8);
	i2 v11022 = *(i2*)(intptr_t)v11021;
	*(i2*)(intptr_t)(ws+3456) = v11022;
	i8 v11023 = (i8)(intptr_t)(f163_MidInitaddress);

	((void(*)(void))(intptr_t)v11023)();

	i8 v11024 = *(i8*)(intptr_t)(ws+3464);
	i8 v11025 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v11025 = v11024;

	i8 v11026 = (i8)(intptr_t)(ws+3432);
	i8 v11027 = *(i8*)(intptr_t)v11026;
	*(i8*)(intptr_t)(ws+3488) = v11027;
	i8 v11028 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11028)();

	goto c02_073c;

c02_074c:;

	if (v10961 != +45) goto c02_0752;

	i8 v11029 = (i8)(intptr_t)(ws+3392);
	i8 v11030 = *(i8*)(intptr_t)v11029;
	i8 v11031 = (i8)(intptr_t)(ws+3304);
	i8 v11032 = *(i8*)(intptr_t)v11031;
	i8 v11033 = v11032+(+24);
	i8 v11034 = *(i8*)(intptr_t)v11033;
	if (v11030==v11034) goto c02_0757; else goto c02_0756;

c02_0756:;

	i8 v11035 = (i8)(intptr_t)c02_s0195;
	*(i8*)(intptr_t)(ws+3648) = v11035;
	i8 v11036 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v11036)();

c02_0757:;

c02_0753:;

	i8 v11037 = (i8)(intptr_t)(ws+3304);
	i8 v11038 = *(i8*)(intptr_t)v11037;
	i8 v11039 = *(i8*)(intptr_t)v11038;
	*(i8*)(intptr_t)(ws+3448) = v11039;
	i8 v11040 = (i8)(intptr_t)(f141_MidInitsubref);

	((void(*)(void))(intptr_t)v11040)();

	i8 v11041 = *(i8*)(intptr_t)(ws+3456);
	i8 v11042 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v11042 = v11041;

	i8 v11043 = (i8)(intptr_t)(ws+3440);
	i8 v11044 = *(i8*)(intptr_t)v11043;
	*(i8*)(intptr_t)(ws+3488) = v11044;
	i8 v11045 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11045)();

	goto c02_073c;

c02_0752:;

	i8 v11046 = (i8)(intptr_t)(f292_parser_i_constant_error);

	((void(*)(void))(intptr_t)v11046)();

c02_073c:;


	i8 v11047 = (i8)(intptr_t)(ws+3304);
	i8 v11048 = *(i8*)(intptr_t)v11047;
	*(i8*)(intptr_t)(ws+3592) = v11048;
	i8 v11049 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v11049)();

	i8 v11050 = (i8)(intptr_t)(ws+1560);
	i2 v11051 = *(i2*)(intptr_t)v11050;
	i8 v11052 = (i8)(intptr_t)(ws+3400);
	i2 v11053 = *(i2*)(intptr_t)v11052;
	i2 v11054 = v11051+v11053;
	i8 v11055 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v11055 = v11054;

	i8 v11056 = (i8)(intptr_t)(ws+1562);
	i2 v11057 = *(i2*)(intptr_t)v11056;
	i8 v11058 = (i8)(intptr_t)(ws+3400);
	i2 v11059 = *(i2*)(intptr_t)v11058;
	i2 v11060 = v11057+v11059;
	i8 v11061 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v11061 = v11060;

}
	void f297_CheckEndOfInitialiser(void);
	void f34_Free(void);
	void f302_yy_destructor(void);

// reduce_112 workspace at ws+3384 length ws+0
void f426_reduce_112(void) {

	i8 v11062 = (i8)(intptr_t)(f297_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v11062)();

	i8 v11063 = (i8)(intptr_t)(ws+1560);
	i2 v11064 = *(i2*)(intptr_t)v11063;
	i8 v11065 = (i8)(intptr_t)(ws+3320);
	i8 v11066 = *(i8*)(intptr_t)v11065;
	i8 v11067 = v11066+(+16);
	i2 v11068 = *(i2*)(intptr_t)v11067;
	i2 v11069 = v11064+v11068;
	i8 v11070 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v11070 = v11069;

	i8 v11071 = (i8)(intptr_t)(ws+3320);
	i8 v11072 = *(i8*)(intptr_t)v11071;
	i8 v11073 = *(i8*)(intptr_t)v11072;
	i8 v11074 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v11074 = v11073;

	i8 v11075 = (i8)(intptr_t)(ws+3320);
	i8 v11076 = *(i8*)(intptr_t)v11075;
	i8 v11077 = v11076+(+8);
	i8 v11078 = *(i8*)(intptr_t)v11077;
	i8 v11079 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11079 = v11078;

	i8 v11080 = (i8)(intptr_t)(ws+3320);
	i8 v11081 = *(i8*)(intptr_t)v11080;
	*(i8*)(intptr_t)(ws+3680) = v11081;
	i8 v11082 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v11082)();

	i1 v11083 = (i1)+32;
	*(i1*)(intptr_t)(ws+3496) = v11083;
	i8 v11084 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11084;
	i8 v11085 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11085)();

}
	void f301_GetInitedMemberChecked(void);
	void f299_AlignTo(void);
	void f69_InternalAlloc(void);
	void f233_IsRecord(void);
	void f228_IsArray(void);
const i1 c02_s0196[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(void);

// reduce_113 workspace at ws+3384 length ws+26
void f427_reduce_113(void) {

	i8 v11086 = (i8)(intptr_t)(f301_GetInitedMemberChecked);

	((void(*)(void))(intptr_t)v11086)();

	i8 v11087 = *(i8*)(intptr_t)(ws+3456);
	i8 v11088 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v11088 = v11087;

	i8 v11089 = *(i8*)(intptr_t)(ws+3448);
	i8 v11090 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11090 = v11089;

	i8 v11091 = (i8)(intptr_t)(ws+3392);
	i8 v11092 = *(i8*)(intptr_t)v11091;
	i8 v11093 = v11092+(+53);
	i1 v11094 = *(i1*)(intptr_t)v11093;
	*(i1*)(intptr_t)(ws+3464) = v11094;
	i8 v11095 = (i8)(intptr_t)(f299_AlignTo);

	((void(*)(void))(intptr_t)v11095)();

	i8 v11096 = (i8)+18;
	*(i8*)(intptr_t)(ws+3640) = v11096;
	i8 v11097 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v11097)();

	i8 v11098 = *(i8*)(intptr_t)(ws+3648);
	i8 v11099 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v11099 = v11098;

	i8 v11100 = (i8)(intptr_t)(ws+3400);
	i8 v11101 = *(i8*)(intptr_t)v11100;
	i8 v11102 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v11102 = v11101;

	i8 v11103 = (i8)(intptr_t)(ws+72);
	i8 v11104 = *(i8*)(intptr_t)v11103;
	i8 v11105 = (i8)(intptr_t)(ws+3296);
	i8 v11106 = *(i8*)(intptr_t)v11105;
	*(i8*)(intptr_t)v11106 = v11104;

	i8 v11107 = (i8)(intptr_t)(ws+1552);
	i8 v11108 = *(i8*)(intptr_t)v11107;
	i8 v11109 = (i8)(intptr_t)(ws+3296);
	i8 v11110 = *(i8*)(intptr_t)v11109;
	i8 v11111 = v11110+(+8);
	*(i8*)(intptr_t)v11111 = v11108;

	i8 v11112 = (i8)(intptr_t)(ws+1560);
	i2 v11113 = *(i2*)(intptr_t)v11112;
	i8 v11114 = (i8)(intptr_t)(ws+3296);
	i8 v11115 = *(i8*)(intptr_t)v11114;
	i8 v11116 = v11115+(+16);
	*(i2*)(intptr_t)v11116 = v11113;

	i8 v11117 = (i8)(intptr_t)(ws+3392);
	i8 v11118 = *(i8*)(intptr_t)v11117;
	i8 v11119 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v11119 = v11118;

	i2 v11120 = (i2)+0;
	i8 v11121 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v11121 = v11120;

	i8 v11122 = (i8)(intptr_t)(ws+3392);
	i8 v11123 = *(i8*)(intptr_t)v11122;
	*(i8*)(intptr_t)(ws+3488) = v11123;
	i8 v11124 = (i8)(intptr_t)(f233_IsRecord);

	((void(*)(void))(intptr_t)v11124)();

	i1 v11125 = *(i1*)(intptr_t)(ws+3496);
	i8 v11126 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v11126 = v11125;

	i8 v11127 = (i8)(intptr_t)(ws+3408);
	i1 v11128 = *(i1*)(intptr_t)v11127;
	i1 v11129 = (i1)+0;
	if (v11128==v11129) goto c02_075c; else goto c02_075b;

c02_075b:;

	i8 v11130 = (i8)(intptr_t)(ws+3392);
	i8 v11131 = *(i8*)(intptr_t)v11130;
	i8 v11132 = *(i8*)(intptr_t)v11131;
	i8 v11133 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11133 = v11132;

	goto c02_0758;

c02_075c:;

	i8 v11134 = (i8)(intptr_t)(ws+3392);
	i8 v11135 = *(i8*)(intptr_t)v11134;
	*(i8*)(intptr_t)(ws+3496) = v11135;
	i8 v11136 = (i8)(intptr_t)(f228_IsArray);

	((void(*)(void))(intptr_t)v11136)();

	i1 v11137 = *(i1*)(intptr_t)(ws+3504);
	i8 v11138 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v11138 = v11137;

	i8 v11139 = (i8)(intptr_t)(ws+3409);
	i1 v11140 = *(i1*)(intptr_t)v11139;
	i1 v11141 = (i1)+0;
	if (v11140==v11141) goto c02_0760; else goto c02_075f;

c02_075f:;

	i8 v11142 = (i8)+0;
	i8 v11143 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11143 = v11142;

	goto c02_0758;

c02_0760:;

	i8 v11144 = (i8)(intptr_t)c02_s0196;
	*(i8*)(intptr_t)(ws+3648) = v11144;
	i8 v11145 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v11145)();

c02_0758:;

}
	void f135_MidAsmend(void);
	void f259_Generate(void);
	void f302_yy_destructor(void);

// reduce_114 workspace at ws+3384 length ws+8
void f428_reduce_114(void) {

	i8 v11146 = (i8)(intptr_t)(f135_MidAsmend);

	((void(*)(void))(intptr_t)v11146)();

	i8 v11147 = *(i8*)(intptr_t)(ws+3392);
	i8 v11148 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11148 = v11147;

	i8 v11149 = (i8)(intptr_t)(ws+3384);
	i8 v11150 = *(i8*)(intptr_t)v11149;
	*(i8*)(intptr_t)(ws+3488) = v11150;
	i8 v11151 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11151)();

	i1 v11152 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11152;
	i8 v11153 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11153;
	i8 v11154 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11154)();

}
	void f126_MidAsmstart(void);
	void f259_Generate(void);

// reduce_115 workspace at ws+3384 length ws+8
void f429_reduce_115(void) {

	i8 v11155 = (i8)(intptr_t)(f126_MidAsmstart);

	((void(*)(void))(intptr_t)v11155)();

	i8 v11156 = *(i8*)(intptr_t)(ws+3392);
	i8 v11157 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11157 = v11156;

	i8 v11158 = (i8)(intptr_t)(ws+3384);
	i8 v11159 = *(i8*)(intptr_t)v11158;
	*(i8*)(intptr_t)(ws+3488) = v11159;
	i8 v11160 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11160)();

}
	void f153_MidAsmtext(void);
	void f259_Generate(void);
	void f34_Free(void);

// reduce_116 workspace at ws+3384 length ws+8
void f430_reduce_116(void) {

	i8 v11161 = (i8)(intptr_t)(ws+3304);
	i8 v11162 = *(i8*)(intptr_t)v11161;
	*(i8*)(intptr_t)(ws+3392) = v11162;
	i8 v11163 = (i8)(intptr_t)(f153_MidAsmtext);

	((void(*)(void))(intptr_t)v11163)();

	i8 v11164 = *(i8*)(intptr_t)(ws+3400);
	i8 v11165 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11165 = v11164;

	i8 v11166 = (i8)(intptr_t)(ws+3384);
	i8 v11167 = *(i8*)(intptr_t)v11166;
	*(i8*)(intptr_t)(ws+3488) = v11167;
	i8 v11168 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11168)();

	i8 v11169 = (i8)(intptr_t)(ws+3304);
	i8 v11170 = *(i8*)(intptr_t)v11169;
	*(i8*)(intptr_t)(ws+3680) = v11170;
	i8 v11171 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v11171)();

}
	void f109_MidAsmvalue(void);
	void f259_Generate(void);

// reduce_117 workspace at ws+3384 length ws+8
void f431_reduce_117(void) {

	i8 v11172 = (i8)(intptr_t)(ws+3304);
	i4 v11173 = *(i4*)(intptr_t)v11172;
	*(i4*)(intptr_t)(ws+3416) = v11173;
	i8 v11174 = (i8)(intptr_t)(f109_MidAsmvalue);

	((void(*)(void))(intptr_t)v11174)();

	i8 v11175 = *(i8*)(intptr_t)(ws+3424);
	i8 v11176 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11176 = v11175;

	i8 v11177 = (i8)(intptr_t)(ws+3384);
	i8 v11178 = *(i8*)(intptr_t)v11177;
	*(i8*)(intptr_t)(ws+3488) = v11178;
	i8 v11179 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11179)();

}
const i1 c02_s0197[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);

// bad_reference workspace at ws+3416 length ws+0
void f433_bad_reference(void) {

	i8 v11180 = (i8)(intptr_t)c02_s0197;
	*(i8*)(intptr_t)(ws+3648) = v11180;
	i8 v11181 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v11181)();

}
	void f229_IsSubroutine(void);
	void f203_EmitterReferenceSubroutine(void);
	void f115_MidAsmsubref(void);
	void f259_Generate(void);
	void f433_bad_reference(void);
	void f113_MidAsmsymbol(void);
	void f259_Generate(void);
	void f109_MidAsmvalue(void);
	void f259_Generate(void);
	void f433_bad_reference(void);

// reduce_118 workspace at ws+3384 length ws+32
void f432_reduce_118(void) {


	i8 v11182 = (i8)(intptr_t)(ws+3304);
	i8 v11183 = *(i8*)(intptr_t)v11182;
	i8 v11184 = v11183+(+32);
	i1 v11185 = *(i1*)(intptr_t)v11184;

	if (v11185 != +30) goto c02_0762;

	i8 v11186 = (i8)(intptr_t)(ws+3304);
	i8 v11187 = *(i8*)(intptr_t)v11186;
	i8 v11188 = *(i8*)(intptr_t)v11187;
	*(i8*)(intptr_t)(ws+3560) = v11188;
	i8 v11189 = (i8)(intptr_t)(f229_IsSubroutine);

	((void(*)(void))(intptr_t)v11189)();

	i1 v11190 = *(i1*)(intptr_t)(ws+3568);
	i8 v11191 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v11191 = v11190;

	i8 v11192 = (i8)(intptr_t)(ws+3384);
	i1 v11193 = *(i1*)(intptr_t)v11192;
	i1 v11194 = (i1)+0;
	if (v11193==v11194) goto c02_0767; else goto c02_0766;

c02_0766:;

	i8 v11195 = (i8)(intptr_t)(ws+40);
	i8 v11196 = *(i8*)(intptr_t)v11195;
	*(i8*)(intptr_t)(ws+3496) = v11196;
	i8 v11197 = (i8)(intptr_t)(ws+3304);
	i8 v11198 = *(i8*)(intptr_t)v11197;
	i8 v11199 = *(i8*)(intptr_t)v11198;
	i8 v11200 = *(i8*)(intptr_t)v11199;
	*(i8*)(intptr_t)(ws+3504) = v11200;
	i8 v11201 = (i8)(intptr_t)(f203_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v11201)();

	i8 v11202 = (i8)(intptr_t)(ws+3304);
	i8 v11203 = *(i8*)(intptr_t)v11202;
	i8 v11204 = *(i8*)(intptr_t)v11203;
	i8 v11205 = *(i8*)(intptr_t)v11204;
	*(i8*)(intptr_t)(ws+3416) = v11205;
	i8 v11206 = (i8)(intptr_t)(f115_MidAsmsubref);

	((void(*)(void))(intptr_t)v11206)();

	i8 v11207 = *(i8*)(intptr_t)(ws+3424);
	i8 v11208 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v11208 = v11207;

	i8 v11209 = (i8)(intptr_t)(ws+3392);
	i8 v11210 = *(i8*)(intptr_t)v11209;
	*(i8*)(intptr_t)(ws+3488) = v11210;
	i8 v11211 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11211)();

	goto c02_0763;

c02_0767:;

	i8 v11212 = (i8)(intptr_t)(f433_bad_reference);

	((void(*)(void))(intptr_t)v11212)();

c02_0763:;

	goto c02_0761;

c02_0762:;

	if (v11185 != +28) goto c02_0768;

	i8 v11213 = (i8)(intptr_t)(ws+3304);
	i8 v11214 = *(i8*)(intptr_t)v11213;
	*(i8*)(intptr_t)(ws+3416) = v11214;
	i8 v11215 = (i8)(intptr_t)(f113_MidAsmsymbol);

	((void(*)(void))(intptr_t)v11215)();

	i8 v11216 = *(i8*)(intptr_t)(ws+3424);
	i8 v11217 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v11217 = v11216;

	i8 v11218 = (i8)(intptr_t)(ws+3400);
	i8 v11219 = *(i8*)(intptr_t)v11218;
	*(i8*)(intptr_t)(ws+3488) = v11219;
	i8 v11220 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11220)();

	goto c02_0761;

c02_0768:;

	if (v11185 != +7) goto c02_0769;

	i8 v11221 = (i8)(intptr_t)(ws+3304);
	i8 v11222 = *(i8*)(intptr_t)v11221;
	i4 v11223 = *(i4*)(intptr_t)v11222;
	*(i4*)(intptr_t)(ws+3416) = v11223;
	i8 v11224 = (i8)(intptr_t)(f109_MidAsmvalue);

	((void(*)(void))(intptr_t)v11224)();

	i8 v11225 = *(i8*)(intptr_t)(ws+3424);
	i8 v11226 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v11226 = v11225;

	i8 v11227 = (i8)(intptr_t)(ws+3408);
	i8 v11228 = *(i8*)(intptr_t)v11227;
	*(i8*)(intptr_t)(ws+3488) = v11228;
	i8 v11229 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11229)();

	goto c02_0761;

c02_0769:;

	i8 v11230 = (i8)(intptr_t)(f433_bad_reference);

	((void(*)(void))(intptr_t)v11230)();

c02_0761:;


}
	void f302_yy_destructor(void);

// reduce_124 workspace at ws+3384 length ws+0
void f434_reduce_124(void) {

	i1 v11231 = (i1)+26;
	*(i1*)(intptr_t)(ws+3496) = v11231;
	i8 v11232 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v11232;
	i8 v11233 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11233)();

}
	void f302_yy_destructor(void);

// reduce_128 workspace at ws+3384 length ws+0
void f435_reduce_128(void) {

	i1 v11234 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11234;
	i8 v11235 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11235;
	i8 v11236 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11236)();

}
	void f302_yy_destructor(void);
	void f302_yy_destructor(void);

// reduce_129 workspace at ws+3384 length ws+0
void f436_reduce_129(void) {

	i1 v11237 = (i1)+25;
	*(i1*)(intptr_t)(ws+3496) = v11237;
	i8 v11238 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v11238;
	i8 v11239 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11239)();

	i1 v11240 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11240;
	i8 v11241 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11241;
	i8 v11242 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11242)();

}
	void f302_yy_destructor(void);

// reduce_130 workspace at ws+3384 length ws+0
void f437_reduce_130(void) {

	i1 v11243 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11243;
	i8 v11244 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11244;
	i8 v11245 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11245)();

}
	void f302_yy_destructor(void);

// reduce_131 workspace at ws+3384 length ws+0
void f438_reduce_131(void) {

	i1 v11246 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11246;
	i8 v11247 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11247;
	i8 v11248 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11248)();

}
	void f302_yy_destructor(void);

// reduce_137 workspace at ws+3384 length ws+0
void f439_reduce_137(void) {

	i1 v11249 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v11249;
	i8 v11250 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v11250;
	i8 v11251 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11251)();

}
	void f302_yy_destructor(void);

// reduce_140 workspace at ws+3384 length ws+0
void f440_reduce_140(void) {

	i1 v11252 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v11252;
	i8 v11253 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v11253;
	i8 v11254 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11254)();

}

// reduce_default workspace at ws+3384 length ws+0
void f441_reduce_default(void) {

}
	void f311_reduce_0(void);
	void f312_reduce_1(void);
	void f313_reduce_2(void);
	void f314_reduce_3(void);
	void f315_reduce_4(void);
	void f316_reduce_5(void);
	void f317_reduce_6(void);
	void f318_reduce_7(void);
	void f319_reduce_8(void);
	void f320_reduce_9(void);
	void f321_reduce_10(void);
	void f322_reduce_11(void);
	void f323_reduce_12(void);
	void f324_reduce_13(void);
	void f325_reduce_14(void);
	void f326_reduce_15(void);
	void f327_reduce_16(void);
	void f328_reduce_17(void);
	void f329_reduce_18(void);
	void f330_reduce_19(void);
	void f331_reduce_20(void);
	void f332_reduce_21(void);
	void f333_reduce_22(void);
	void f334_reduce_23(void);
	void f335_reduce_24(void);
	void f336_reduce_25(void);
	void f337_reduce_26(void);
	void f338_reduce_27(void);
	void f339_reduce_28(void);
	void f340_reduce_29(void);
	void f341_reduce_30(void);
	void f342_reduce_31(void);
	void f343_reduce_32(void);
	void f344_reduce_33(void);
	void f345_reduce_34(void);
	void f346_reduce_35(void);
	void f347_reduce_36(void);
	void f348_reduce_37(void);
	void f349_reduce_38(void);
	void f350_reduce_39(void);
	void f351_reduce_40(void);
	void f352_reduce_41(void);
	void f353_reduce_42(void);
	void f354_reduce_43(void);
	void f355_reduce_44(void);
	void f356_reduce_45(void);
	void f357_reduce_46(void);
	void f358_reduce_47(void);
	void f359_reduce_48(void);
	void f360_reduce_49(void);
	void f361_reduce_50(void);
	void f362_reduce_51(void);
	void f363_reduce_52(void);
	void f364_reduce_53(void);
	void f365_reduce_54(void);
	void f367_reduce_55(void);
	void f368_reduce_56(void);
	void f369_reduce_57(void);
	void f371_reduce_58(void);
	void f372_reduce_59(void);
	void f373_reduce_60(void);
	void f374_reduce_61(void);
	void f375_reduce_62(void);
	void f376_reduce_63(void);
	void f377_reduce_64(void);
	void f378_reduce_65(void);
	void f379_reduce_66(void);
	void f380_reduce_67(void);
	void f381_reduce_68(void);
	void f382_reduce_69(void);
	void f383_reduce_70(void);
	void f384_reduce_71(void);
	void f385_reduce_72(void);
	void f386_reduce_73(void);
	void f387_reduce_74(void);
	void f388_reduce_75(void);
	void f389_reduce_76(void);
	void f390_reduce_77(void);
	void f391_reduce_78(void);
	void f392_reduce_79(void);
	void f393_reduce_80(void);
	void f394_reduce_81(void);
	void f395_reduce_82(void);
	void f396_reduce_83(void);
	void f397_reduce_84(void);
	void f398_reduce_85(void);
	void f399_reduce_86(void);
	void f400_reduce_87(void);
	void f401_reduce_88(void);
	void f403_reduce_89(void);
	void f404_reduce_90(void);
	void f405_reduce_91(void);
	void f406_reduce_92(void);
	void f407_reduce_93(void);
	void f408_reduce_94(void);
	void f409_reduce_95(void);
	void f410_reduce_96(void);
	void f411_reduce_97(void);
	void f412_reduce_98(void);
	void f413_reduce_99(void);
	void f414_reduce_100(void);
	void f415_reduce_101(void);
	void f416_reduce_102(void);
	void f417_reduce_103(void);
	void f418_reduce_104(void);
	void f419_reduce_105(void);
	void f420_reduce_106(void);
	void f421_reduce_107(void);
	void f422_reduce_108(void);
	void f423_reduce_109(void);
	void f424_reduce_110(void);
	void f425_reduce_111(void);
	void f426_reduce_112(void);
	void f427_reduce_113(void);
	void f428_reduce_114(void);
	void f429_reduce_115(void);
	void f430_reduce_116(void);
	void f431_reduce_117(void);
	void f432_reduce_118(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f434_reduce_124(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f435_reduce_128(void);
	void f436_reduce_129(void);
	void f437_reduce_130(void);
	void f438_reduce_131(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f439_reduce_137(void);
	void f441_reduce_default(void);
	void f441_reduce_default(void);
	void f440_reduce_140(void);
static data f309_yy_reduce_s076a[] = {

	{ .ptr = (void*)f311_reduce_0 },

	{ .ptr = (void*)f312_reduce_1 },

	{ .ptr = (void*)f313_reduce_2 },

	{ .ptr = (void*)f314_reduce_3 },

	{ .ptr = (void*)f315_reduce_4 },

	{ .ptr = (void*)f316_reduce_5 },

	{ .ptr = (void*)f317_reduce_6 },

	{ .ptr = (void*)f318_reduce_7 },

	{ .ptr = (void*)f319_reduce_8 },

	{ .ptr = (void*)f320_reduce_9 },

	{ .ptr = (void*)f321_reduce_10 },

	{ .ptr = (void*)f322_reduce_11 },

	{ .ptr = (void*)f323_reduce_12 },

	{ .ptr = (void*)f324_reduce_13 },

	{ .ptr = (void*)f325_reduce_14 },

	{ .ptr = (void*)f326_reduce_15 },

	{ .ptr = (void*)f327_reduce_16 },

	{ .ptr = (void*)f328_reduce_17 },

	{ .ptr = (void*)f329_reduce_18 },

	{ .ptr = (void*)f330_reduce_19 },

	{ .ptr = (void*)f331_reduce_20 },

	{ .ptr = (void*)f332_reduce_21 },

	{ .ptr = (void*)f333_reduce_22 },

	{ .ptr = (void*)f334_reduce_23 },

	{ .ptr = (void*)f335_reduce_24 },

	{ .ptr = (void*)f336_reduce_25 },

	{ .ptr = (void*)f337_reduce_26 },

	{ .ptr = (void*)f338_reduce_27 },

	{ .ptr = (void*)f339_reduce_28 },

	{ .ptr = (void*)f340_reduce_29 },

	{ .ptr = (void*)f341_reduce_30 },

	{ .ptr = (void*)f342_reduce_31 },

	{ .ptr = (void*)f343_reduce_32 },

	{ .ptr = (void*)f344_reduce_33 },

	{ .ptr = (void*)f345_reduce_34 },

	{ .ptr = (void*)f346_reduce_35 },

	{ .ptr = (void*)f347_reduce_36 },

	{ .ptr = (void*)f348_reduce_37 },

	{ .ptr = (void*)f349_reduce_38 },

	{ .ptr = (void*)f350_reduce_39 },

	{ .ptr = (void*)f351_reduce_40 },

	{ .ptr = (void*)f352_reduce_41 },

	{ .ptr = (void*)f353_reduce_42 },

	{ .ptr = (void*)f354_reduce_43 },

	{ .ptr = (void*)f355_reduce_44 },

	{ .ptr = (void*)f356_reduce_45 },

	{ .ptr = (void*)f357_reduce_46 },

	{ .ptr = (void*)f358_reduce_47 },

	{ .ptr = (void*)f359_reduce_48 },

	{ .ptr = (void*)f360_reduce_49 },

	{ .ptr = (void*)f361_reduce_50 },

	{ .ptr = (void*)f362_reduce_51 },

	{ .ptr = (void*)f363_reduce_52 },

	{ .ptr = (void*)f364_reduce_53 },

	{ .ptr = (void*)f365_reduce_54 },

	{ .ptr = (void*)f367_reduce_55 },

	{ .ptr = (void*)f368_reduce_56 },

	{ .ptr = (void*)f369_reduce_57 },

	{ .ptr = (void*)f371_reduce_58 },

	{ .ptr = (void*)f372_reduce_59 },

	{ .ptr = (void*)f373_reduce_60 },

	{ .ptr = (void*)f374_reduce_61 },

	{ .ptr = (void*)f375_reduce_62 },

	{ .ptr = (void*)f376_reduce_63 },

	{ .ptr = (void*)f377_reduce_64 },

	{ .ptr = (void*)f378_reduce_65 },

	{ .ptr = (void*)f379_reduce_66 },

	{ .ptr = (void*)f380_reduce_67 },

	{ .ptr = (void*)f381_reduce_68 },

	{ .ptr = (void*)f382_reduce_69 },

	{ .ptr = (void*)f383_reduce_70 },

	{ .ptr = (void*)f384_reduce_71 },

	{ .ptr = (void*)f385_reduce_72 },

	{ .ptr = (void*)f386_reduce_73 },

	{ .ptr = (void*)f387_reduce_74 },

	{ .ptr = (void*)f388_reduce_75 },

	{ .ptr = (void*)f389_reduce_76 },

	{ .ptr = (void*)f390_reduce_77 },

	{ .ptr = (void*)f391_reduce_78 },

	{ .ptr = (void*)f392_reduce_79 },

	{ .ptr = (void*)f393_reduce_80 },

	{ .ptr = (void*)f394_reduce_81 },

	{ .ptr = (void*)f395_reduce_82 },

	{ .ptr = (void*)f396_reduce_83 },

	{ .ptr = (void*)f397_reduce_84 },

	{ .ptr = (void*)f398_reduce_85 },

	{ .ptr = (void*)f399_reduce_86 },

	{ .ptr = (void*)f400_reduce_87 },

	{ .ptr = (void*)f401_reduce_88 },

	{ .ptr = (void*)f403_reduce_89 },

	{ .ptr = (void*)f404_reduce_90 },

	{ .ptr = (void*)f405_reduce_91 },

	{ .ptr = (void*)f406_reduce_92 },

	{ .ptr = (void*)f407_reduce_93 },

	{ .ptr = (void*)f408_reduce_94 },

	{ .ptr = (void*)f409_reduce_95 },

	{ .ptr = (void*)f410_reduce_96 },

	{ .ptr = (void*)f411_reduce_97 },

	{ .ptr = (void*)f412_reduce_98 },

	{ .ptr = (void*)f413_reduce_99 },

	{ .ptr = (void*)f414_reduce_100 },

	{ .ptr = (void*)f415_reduce_101 },

	{ .ptr = (void*)f416_reduce_102 },

	{ .ptr = (void*)f417_reduce_103 },

	{ .ptr = (void*)f418_reduce_104 },

	{ .ptr = (void*)f419_reduce_105 },

	{ .ptr = (void*)f420_reduce_106 },

	{ .ptr = (void*)f421_reduce_107 },

	{ .ptr = (void*)f422_reduce_108 },

	{ .ptr = (void*)f423_reduce_109 },

	{ .ptr = (void*)f424_reduce_110 },

	{ .ptr = (void*)f425_reduce_111 },

	{ .ptr = (void*)f426_reduce_112 },

	{ .ptr = (void*)f427_reduce_113 },

	{ .ptr = (void*)f428_reduce_114 },

	{ .ptr = (void*)f429_reduce_115 },

	{ .ptr = (void*)f430_reduce_116 },

	{ .ptr = (void*)f431_reduce_117 },

	{ .ptr = (void*)f432_reduce_118 },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f434_reduce_124 },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f435_reduce_128 },

	{ .ptr = (void*)f436_reduce_129 },

	{ .ptr = (void*)f437_reduce_130 },

	{ .ptr = (void*)f438_reduce_131 },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f439_reduce_137 },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f441_reduce_default },

	{ .ptr = (void*)f440_reduce_140 },

};
	void f308_CopyMinor(void);

// yy_reduce workspace at ws+3288 length ws+94
void f309_yy_reduce(void) {

	i8 v7520 = (i8)(intptr_t)((i1*)f3___main_s05ed);
	i8 v7521 = (i8)(intptr_t)(ws+3288);
	i2 v7522 = *(i2*)(intptr_t)v7521;
	i1 v7523 = v7522;
	i8 v7524 = v7523;
	i8 v7525 = v7520+v7524;
	i1 v7526 = *(i1*)(intptr_t)v7525;
	i8 v7527 = (i8)(intptr_t)(ws+3294);
	*(i1*)(intptr_t)v7527 = v7526;

	i8 v7528 = (i8)(intptr_t)(ws+1568);
	i8 v7529 = *(i8*)(intptr_t)v7528;
	i8 v7530 = (i8)(intptr_t)(ws+3176);
	if (v7529==v7530) goto c02_05f1; else goto c02_05f2;

c02_05f1:;

	i8 v7531 = (i8)(intptr_t)(f306_yy_stack_overflow);

	((void(*)(void))(intptr_t)v7531)();

c02_05f2:;

c02_05ee:;

	i8 v7532 = (i8)(intptr_t)(ws+3304);
	i8 v7533 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v7533 = v7532;

	i8 v7534 = (i8)(intptr_t)(ws+3294);
	i1 v7535 = *(i1*)(intptr_t)v7534;
	i8 v7536 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v7536 = v7535;

c02_05f3:;

	i8 v7537 = (i8)(intptr_t)(ws+3376);
	i1 v7538 = *(i1*)(intptr_t)v7537;
	i1 v7539 = (i1)+0;
	if (v7538==v7539) goto c02_05f8; else goto c02_05f7;

c02_05f7:;

	i8 v7540 = (i8)(intptr_t)(ws+1568);
	i8 v7541 = *(i8*)(intptr_t)v7540;
	i8 v7542 = v7541+(+8);
	*(i8*)(intptr_t)(ws+3384) = v7542;
	i8 v7543 = (i8)(intptr_t)(ws+3368);
	i8 v7544 = *(i8*)(intptr_t)v7543;
	*(i8*)(intptr_t)(ws+3392) = v7544;
	i8 v7545 = (i8)(intptr_t)(f308_CopyMinor);

	((void(*)(void))(intptr_t)v7545)();

	i8 v7546 = (i8)(intptr_t)(ws+1568);
	i8 v7547 = *(i8*)(intptr_t)v7546;
	i8 v7548 = v7547+(-16);
	i8 v7549 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7549 = v7548;

	i8 v7550 = (i8)(intptr_t)(ws+3368);
	i8 v7551 = *(i8*)(intptr_t)v7550;
	i8 v7552 = v7551+(+8);
	i8 v7553 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v7553 = v7552;

	i8 v7554 = (i8)(intptr_t)(ws+3376);
	i1 v7555 = *(i1*)(intptr_t)v7554;
	i1 v7556 = v7555+(-1);
	i8 v7557 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v7557 = v7556;

	goto c02_05f3;

c02_05f8:;


































































































































	i8 v11255 = (i8)(intptr_t)((i1*)f309_yy_reduce_s076a);
	i8 v11256 = (i8)(intptr_t)(ws+3288);
	i2 v11257 = *(i2*)(intptr_t)v11256;
	i1 v11258 = v11257;
	i8 v11259 = v11258;
	i1 v11260 = (i1)+3;
	i8 v11261 = ((i8)v11259)<<v11260;
	i8 v11262 = v11255+v11261;
	i8 v11263 = *(i8*)(intptr_t)v11262;

	((void(*)(void))(intptr_t)v11263)();

	i8 v11264 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)(ws+3384) = v11264;
	i8 v11265 = (i8)(intptr_t)(ws+1568);
	i8 v11266 = *(i8*)(intptr_t)v11265;
	i8 v11267 = v11266+(+24);
	*(i8*)(intptr_t)(ws+3392) = v11267;
	i8 v11268 = (i8)(intptr_t)(f308_CopyMinor);

	((void(*)(void))(intptr_t)v11268)();

	i8 v11269 = (i8)(intptr_t)((i1*)f3___main_s05ec);
	i8 v11270 = (i8)(intptr_t)(ws+3288);
	i2 v11271 = *(i2*)(intptr_t)v11270;
	i1 v11272 = v11271;
	i8 v11273 = v11272;
	i8 v11274 = v11269+v11273;
	i1 v11275 = *(i1*)(intptr_t)v11274;
	i8 v11276 = (i8)(intptr_t)(ws+3377);
	*(i1*)(intptr_t)v11276 = v11275;

	i8 v11277 = (i8)(intptr_t)(ws+1568);
	i8 v11278 = *(i8*)(intptr_t)v11277;
	i2 v11279 = *(i2*)(intptr_t)v11278;
	i8 v11280 = (i8)(intptr_t)(ws+3378);
	*(i2*)(intptr_t)v11280 = v11279;

	i8 v11281 = (i8)(intptr_t)((i1*)f3___main_s05d4);
	i8 v11282 = (i8)(intptr_t)(ws+3378);
	i2 v11283 = *(i2*)(intptr_t)v11282;
	i1 v11284 = v11283;
	i8 v11285 = v11284;
	i1 v11286 = (i1)+1;
	i8 v11287 = ((i8)v11285)<<v11286;
	i8 v11288 = v11281+v11287;
	i2 v11289 = *(i2*)(intptr_t)v11288;
	i8 v11290 = (i8)(intptr_t)(ws+3292);
	*(i2*)(intptr_t)v11290 = v11289;

	i2 v11291 = (i2)+114;
	i8 v11292 = (i8)(intptr_t)(ws+3378);
	i2 v11293 = *(i2*)(intptr_t)v11292;
	if (v11291<v11293) goto c02_076f; else goto c02_076e;

c02_076e:;

	i8 v11294 = (i8)(intptr_t)((i1*)f3___main_s05d3);
	i8 v11295 = (i8)(intptr_t)(ws+3378);
	i2 v11296 = *(i2*)(intptr_t)v11295;
	i1 v11297 = v11296;
	i8 v11298 = v11297;
	i1 v11299 = (i1)+1;
	i8 v11300 = ((i8)v11298)<<v11299;
	i8 v11301 = v11294+v11300;
	i2 v11302 = *(i2*)(intptr_t)v11301;
	i8 v11303 = (i8)(intptr_t)(ws+3377);
	i1 v11304 = *(i1*)(intptr_t)v11303;
	i2 v11305 = v11304;
	i2 v11306 = v11302+v11305;
	i8 v11307 = (i8)(intptr_t)(ws+3380);
	*(i2*)(intptr_t)v11307 = v11306;

	i8 v11308 = (i8)(intptr_t)(ws+3380);
	i2 v11309 = *(i2*)(intptr_t)v11308;
	i2 v11310 = (i2)+0;
	if (v11309<v11310) goto c02_0778; else goto c02_077a;

c02_077a:;

	i8 v11311 = (i8)(intptr_t)(ws+3380);
	i2 v11312 = *(i2*)(intptr_t)v11311;
	i2 v11313 = (i2)+1262;
	if (v11312<v11313) goto c02_0779; else goto c02_0778;

c02_0779:;

	i8 v11314 = (i8)(intptr_t)((i1*)f3___main_s05d1);
	i8 v11315 = (i8)(intptr_t)(ws+3380);
	i2 v11316 = *(i2*)(intptr_t)v11315;
	i8 v11317 = v11316;
	i8 v11318 = v11314+v11317;
	i1 v11319 = *(i1*)(intptr_t)v11318;
	i8 v11320 = (i8)(intptr_t)(ws+3377);
	i1 v11321 = *(i1*)(intptr_t)v11320;
	if (v11319==v11321) goto c02_0777; else goto c02_0778;

c02_0777:;

	i8 v11322 = (i8)(intptr_t)((i1*)f3___main_s05d0);
	i8 v11323 = (i8)(intptr_t)(ws+3380);
	i2 v11324 = *(i2*)(intptr_t)v11323;
	i8 v11325 = v11324;
	i1 v11326 = (i1)+1;
	i8 v11327 = ((i8)v11325)<<v11326;
	i8 v11328 = v11322+v11327;
	i2 v11329 = *(i2*)(intptr_t)v11328;
	i8 v11330 = (i8)(intptr_t)(ws+3292);
	*(i2*)(intptr_t)v11330 = v11329;

c02_0778:;

c02_0770:;

c02_076f:;

c02_076b:;

	i8 v11331 = (i8)(intptr_t)(ws+1568);
	i8 v11332 = *(i8*)(intptr_t)v11331;
	i8 v11333 = v11332+(+16);
	i8 v11334 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11334 = v11333;

	i8 v11335 = (i8)(intptr_t)(ws+3292);
	i2 v11336 = *(i2*)(intptr_t)v11335;
	i8 v11337 = (i8)(intptr_t)(ws+1568);
	i8 v11338 = *(i8*)(intptr_t)v11337;
	*(i2*)(intptr_t)v11338 = v11336;

	i8 v11339 = (i8)(intptr_t)(ws+3377);
	i1 v11340 = *(i1*)(intptr_t)v11339;
	i8 v11341 = (i8)(intptr_t)(ws+1568);
	i8 v11342 = *(i8*)(intptr_t)v11341;
	i8 v11343 = v11342+(+2);
	*(i1*)(intptr_t)v11343 = v11340;

}
	void f305_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+3288 length ws+0
void f442_yy_parse_failed(void) {

	i8 v11344 = (i8)(intptr_t)(f305_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v11344)();

}
	void f74_StartError(void);
const i1 c02_s0198[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);

// yy_syntax_error workspace at ws+3288 length ws+16
void f443_yy_syntax_error(void) {

	i8 v11345 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v11345)();

	i8 v11346 = (i8)(intptr_t)c02_s0198;
	*(i8*)(intptr_t)(ws+3696) = v11346;
	i8 v11347 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11347)();

	i8 v11348 = (i8)(intptr_t)((i1*)f3___main_s05d5);
	i8 v11349 = (i8)(intptr_t)(ws+3288);
	i1 v11350 = *(i1*)(intptr_t)v11349;
	i8 v11351 = v11350;
	i1 v11352 = (i1)+3;
	i8 v11353 = ((i8)v11351)<<v11352;
	i8 v11354 = v11348+v11353;
	i8 v11355 = *(i8*)(intptr_t)v11354;
	*(i8*)(intptr_t)(ws+3696) = v11355;
	i8 v11356 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11356)();

	i8 v11357 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v11357)();

}

// yy_accept workspace at ws+3288 length ws+0
void f444_yy_accept(void) {

}

// ParserInit workspace at ws+3264 length ws+0
void f445_ParserInit(void) {

	i1 v11358 = (i1)-1;
	i8 v11359 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11359 = v11358;

	i8 v11360 = (i8)(intptr_t)(ws+1576);
	i8 v11361 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11361 = v11360;

	i2 v11362 = (i2)+0;
	i8 v11363 = (i8)(intptr_t)(ws+1576);
	*(i2*)(intptr_t)v11363 = v11362;

	i1 v11364 = (i1)+0;
	i8 v11365 = (i8)(intptr_t)(ws+1578);
	*(i1*)(intptr_t)v11365 = v11364;

}
	void f304_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+3264 length ws+0
void f446_ParserDeinit(void) {

c02_077b:;

	i8 v11366 = (i8)(intptr_t)(ws+1568);
	i8 v11367 = *(i8*)(intptr_t)v11366;
	i8 v11368 = (i8)(intptr_t)(ws+1576);
	if (v11367==v11368) goto c02_0780; else goto c02_077f;

c02_077f:;

	i8 v11369 = (i8)(intptr_t)(f304_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v11369)();

	goto c02_077b;

c02_0780:;

}
	void f309_yy_reduce(void);
	void f306_yy_stack_overflow(void);
	void f308_CopyMinor(void);
	void f444_yy_accept(void);
	void f443_yy_syntax_error(void);
	void f302_yy_destructor(void);
	void f442_yy_parse_failed(void);

// ParserFeedToken workspace at ws+3264 length ws+22
void f447_ParserFeedToken(void) {

	i8 v11370 = (i8)(intptr_t)(ws+1568);
	i8 v11371 = *(i8*)(intptr_t)v11370;
	i2 v11372 = *(i2*)(intptr_t)v11371;
	i8 v11373 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11373 = v11372;

c02_0781:;

	i2 v11374 = (i2)+223;
	i8 v11375 = (i8)(intptr_t)(ws+3280);
	i2 v11376 = *(i2*)(intptr_t)v11375;
	if (v11374<v11376) goto c02_0787; else goto c02_0786;

c02_0786:;

	i8 v11377 = (i8)(intptr_t)((i1*)f3___main_s05d2);
	i8 v11378 = (i8)(intptr_t)(ws+3280);
	i2 v11379 = *(i2*)(intptr_t)v11378;
	i1 v11380 = v11379;
	i8 v11381 = v11380;
	i1 v11382 = (i1)+1;
	i8 v11383 = ((i8)v11381)<<v11382;
	i8 v11384 = v11377+v11383;
	i2 v11385 = *(i2*)(intptr_t)v11384;
	i8 v11386 = (i8)(intptr_t)(ws+3264);
	i1 v11387 = *(i1*)(intptr_t)v11386;
	i2 v11388 = v11387;
	i2 v11389 = v11385+v11388;
	i8 v11390 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v11390 = v11389;

	i8 v11391 = (i8)(intptr_t)((i1*)f3___main_s05d1);
	i8 v11392 = (i8)(intptr_t)(ws+3282);
	i2 v11393 = *(i2*)(intptr_t)v11392;
	i8 v11394 = v11393;
	i8 v11395 = v11391+v11394;
	i1 v11396 = *(i1*)(intptr_t)v11395;
	i8 v11397 = (i8)(intptr_t)(ws+3264);
	i1 v11398 = *(i1*)(intptr_t)v11397;
	if (v11396==v11398) goto c02_078c; else goto c02_078b;

c02_078b:;

	i8 v11399 = (i8)(intptr_t)((i1*)f3___main_s05d4);
	i8 v11400 = (i8)(intptr_t)(ws+3280);
	i2 v11401 = *(i2*)(intptr_t)v11400;
	i1 v11402 = v11401;
	i8 v11403 = v11402;
	i1 v11404 = (i1)+1;
	i8 v11405 = ((i8)v11403)<<v11404;
	i8 v11406 = v11399+v11405;
	i2 v11407 = *(i2*)(intptr_t)v11406;
	i8 v11408 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11408 = v11407;

	goto c02_0788;

c02_078c:;

	i8 v11409 = (i8)(intptr_t)((i1*)f3___main_s05d0);
	i8 v11410 = (i8)(intptr_t)(ws+3282);
	i2 v11411 = *(i2*)(intptr_t)v11410;
	i8 v11412 = v11411;
	i1 v11413 = (i1)+1;
	i8 v11414 = ((i8)v11412)<<v11413;
	i8 v11415 = v11409+v11414;
	i2 v11416 = *(i2*)(intptr_t)v11415;
	i8 v11417 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11417 = v11416;

c02_0788:;

c02_0787:;

c02_0783:;

	i8 v11418 = (i8)(intptr_t)(ws+3280);
	i2 v11419 = *(i2*)(intptr_t)v11418;
	i2 v11420 = (i2)+459;
	if (v11419<v11420) goto c02_0791; else goto c02_0790;

c02_0790:;

	i8 v11421 = (i8)(intptr_t)(ws+3280);
	i2 v11422 = *(i2*)(intptr_t)v11421;
	i2 v11423 = v11422+(-459);
	*(i2*)(intptr_t)(ws+3288) = v11423;
	i8 v11424 = (i8)(intptr_t)(ws+3264);
	i1 v11425 = *(i1*)(intptr_t)v11424;
	*(i1*)(intptr_t)(ws+3290) = v11425;
	i8 v11426 = (i8)(intptr_t)(f309_yy_reduce);

	((void(*)(void))(intptr_t)v11426)();

	i2 v11427 = *(i2*)(intptr_t)(ws+3292);
	i8 v11428 = (i8)(intptr_t)(ws+3284);
	*(i2*)(intptr_t)v11428 = v11427;

	i8 v11429 = (i8)(intptr_t)(ws+3284);
	i2 v11430 = *(i2*)(intptr_t)v11429;
	i8 v11431 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11431 = v11430;

	goto c02_078d;

c02_0791:;

	i2 v11432 = (i2)+455;
	i8 v11433 = (i8)(intptr_t)(ws+3280);
	i2 v11434 = *(i2*)(intptr_t)v11433;
	if (v11432<v11434) goto c02_0795; else goto c02_0794;

c02_0794:;

	i8 v11435 = (i8)(intptr_t)(ws+1568);
	i8 v11436 = *(i8*)(intptr_t)v11435;
	i8 v11437 = (i8)(intptr_t)(ws+3176);
	if (v11436==v11437) goto c02_0799; else goto c02_079a;

c02_0799:;

	i8 v11438 = (i8)(intptr_t)(f306_yy_stack_overflow);

	((void(*)(void))(intptr_t)v11438)();

	return;

c02_079a:;

c02_0796:;

	i8 v11439 = (i8)(intptr_t)(ws+1568);
	i8 v11440 = *(i8*)(intptr_t)v11439;
	i8 v11441 = v11440+(+16);
	i8 v11442 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11442 = v11441;

	i2 v11443 = (i2)+223;
	i8 v11444 = (i8)(intptr_t)(ws+3280);
	i2 v11445 = *(i2*)(intptr_t)v11444;
	if (v11443<v11445) goto c02_079e; else goto c02_079f;

c02_079e:;

	i8 v11446 = (i8)(intptr_t)(ws+3280);
	i2 v11447 = *(i2*)(intptr_t)v11446;
	i2 v11448 = v11447+(+144);
	i8 v11449 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11449 = v11448;

c02_079f:;

c02_079b:;

	i8 v11450 = (i8)(intptr_t)(ws+3280);
	i2 v11451 = *(i2*)(intptr_t)v11450;
	i8 v11452 = (i8)(intptr_t)(ws+1568);
	i8 v11453 = *(i8*)(intptr_t)v11452;
	*(i2*)(intptr_t)v11453 = v11451;

	i8 v11454 = (i8)(intptr_t)(ws+3264);
	i1 v11455 = *(i1*)(intptr_t)v11454;
	i8 v11456 = (i8)(intptr_t)(ws+1568);
	i8 v11457 = *(i8*)(intptr_t)v11456;
	i8 v11458 = v11457+(+2);
	*(i1*)(intptr_t)v11458 = v11455;

	i8 v11459 = (i8)(intptr_t)(ws+3272);
	i8 v11460 = *(i8*)(intptr_t)v11459;
	*(i8*)(intptr_t)(ws+3384) = v11460;
	i8 v11461 = (i8)(intptr_t)(ws+1568);
	i8 v11462 = *(i8*)(intptr_t)v11461;
	i8 v11463 = v11462+(+8);
	*(i8*)(intptr_t)(ws+3392) = v11463;
	i8 v11464 = (i8)(intptr_t)(f308_CopyMinor);

	((void(*)(void))(intptr_t)v11464)();

	i8 v11465 = (i8)(intptr_t)(ws+3192);
	i1 v11466 = *(i1*)(intptr_t)v11465;
	i1 v11467 = (i1)+0;
	if ((s1)v11466<(s1)v11467) goto c02_07a4; else goto c02_07a3;

c02_07a3:;

	i8 v11468 = (i8)(intptr_t)(ws+3192);
	i1 v11469 = *(i1*)(intptr_t)v11468;
	i1 v11470 = v11469+(-1);
	i8 v11471 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11471 = v11470;

c02_07a4:;

c02_07a0:;

	goto c02_0782;

c02_0795:;

	i8 v11472 = (i8)(intptr_t)(ws+3280);
	i2 v11473 = *(i2*)(intptr_t)v11472;
	i2 v11474 = (i2)+457;
	if (v11473==v11474) goto c02_07a7; else goto c02_07a8;

c02_07a7:;

	i8 v11475 = (i8)(intptr_t)(ws+1568);
	i8 v11476 = *(i8*)(intptr_t)v11475;
	i8 v11477 = v11476+(-16);
	i8 v11478 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11478 = v11477;

	i8 v11479 = (i8)(intptr_t)(f444_yy_accept);

	((void(*)(void))(intptr_t)v11479)();

	goto c02_0782;

c02_07a8:;

	i1 v11480 = (i1)+0;
	i8 v11481 = (i8)(intptr_t)(ws+3192);
	i1 v11482 = *(i1*)(intptr_t)v11481;
	if ((s1)v11480<(s1)v11482) goto c02_07ad; else goto c02_07ac;

c02_07ac:;

	i8 v11483 = (i8)(intptr_t)(ws+3264);
	i1 v11484 = *(i1*)(intptr_t)v11483;
	*(i1*)(intptr_t)(ws+3288) = v11484;
	i8 v11485 = (i8)(intptr_t)(ws+3272);
	i8 v11486 = *(i8*)(intptr_t)v11485;
	*(i8*)(intptr_t)(ws+3296) = v11486;
	i8 v11487 = (i8)(intptr_t)(f443_yy_syntax_error);

	((void(*)(void))(intptr_t)v11487)();

c02_07ad:;

c02_07a9:;

	i1 v11488 = (i1)+3;
	i8 v11489 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11489 = v11488;

	i8 v11490 = (i8)(intptr_t)(ws+3264);
	i1 v11491 = *(i1*)(intptr_t)v11490;
	*(i1*)(intptr_t)(ws+3496) = v11491;
	i8 v11492 = (i8)(intptr_t)(ws+3272);
	i8 v11493 = *(i8*)(intptr_t)v11492;
	*(i8*)(intptr_t)(ws+3504) = v11493;
	i8 v11494 = (i8)(intptr_t)(f302_yy_destructor);

	((void(*)(void))(intptr_t)v11494)();

	i8 v11495 = (i8)(intptr_t)(ws+3264);
	i1 v11496 = *(i1*)(intptr_t)v11495;
	i1 v11497 = (i1)+0;
	if (v11496==v11497) goto c02_07b1; else goto c02_07b2;

c02_07b1:;

	i8 v11498 = (i8)(intptr_t)(f442_yy_parse_failed);

	((void(*)(void))(intptr_t)v11498)();

	i1 v11499 = (i1)-1;
	i8 v11500 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11500 = v11499;

c02_07b2:;

c02_07ae:;

	goto c02_0782;

c02_078d:;

	i8 v11501 = (i8)(intptr_t)(ws+1568);
	i8 v11502 = *(i8*)(intptr_t)v11501;
	i8 v11503 = (i8)(intptr_t)(ws+1576);
	if (v11502==v11503) goto c02_07b6; else goto c02_07b7;

c02_07b6:;

	goto c02_0782;

c02_07b7:;

c02_07b3:;

	goto c02_0781;

c02_0782:;

}
	void f38_GetFreeMemory(void);
	void f17_print_i16(void);
const i1 c02_s0199[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(void);

// PrintFreeMemory workspace at ws+3264 length ws+8
void f448_PrintFreeMemory(void) {

	i8 v11504 = (i8)(intptr_t)(f38_GetFreeMemory);

	((void(*)(void))(intptr_t)v11504)();

	i8 v11505 = *(i8*)(intptr_t)(ws+3272);
	i8 v11506 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v11506 = v11505;

	i8 v11507 = (i8)(intptr_t)(ws+3264);
	i8 v11508 = *(i8*)(intptr_t)v11507;
	i1 v11509 = (i1)+10;
	i8 v11510 = ((i8)v11508)>>v11509;
	i2 v11511 = v11510;
	*(i2*)(intptr_t)(ws+3656) = v11511;
	i8 v11512 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(void))(intptr_t)v11512)();

	i8 v11513 = (i8)(intptr_t)c02_s0199;
	*(i8*)(intptr_t)(ws+3696) = v11513;
	i8 v11514 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11514)();

}
const i1 c02_s019a[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x66,0x65,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3280 length ws+0
void f449_SyntaxError(void) {

	i8 v11515 = (i8)(intptr_t)c02_s019a;
	*(i8*)(intptr_t)(ws+3696) = v11515;
	i8 v11516 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11516)();

	i8 v11517 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v11517)();

}
	void f24_ArgvInit(void);
	void f25_ArgvNext(void);
	void f77_LexerAddIncludePath(void);
	void f449_SyntaxError(void);
	void f449_SyntaxError(void);
	void f449_SyntaxError(void);

// ParseArguments workspace at ws+3264 length ws+16
void f450_ParseArguments(void) {

	i8 v11518 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v11518)();

c02_07b8:;

	i8 v11519 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v11519)();

	i8 v11520 = *(i8*)(intptr_t)(ws+3280);
	i8 v11521 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v11521 = v11520;

	i8 v11522 = (i8)(intptr_t)(ws+3264);
	i8 v11523 = *(i8*)(intptr_t)v11522;
	i8 v11524 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11524 = v11523;

	i8 v11525 = (i8)(intptr_t)(ws+3272);
	i8 v11526 = *(i8*)(intptr_t)v11525;
	i8 v11527 = (i8)+0;
	if (v11526==v11527) goto c02_07bd; else goto c02_07be;

c02_07bd:;

	goto c02_07b9;

c02_07be:;

c02_07ba:;

	i8 v11528 = (i8)(intptr_t)(ws+3272);
	i8 v11529 = *(i8*)(intptr_t)v11528;
	i1 v11530 = *(i1*)(intptr_t)v11529;
	i1 v11531 = (i1)+45;
	if (v11530==v11531) goto c02_07c2; else goto c02_07c3;

c02_07c2:;

	i8 v11532 = (i8)(intptr_t)(ws+3272);
	i8 v11533 = *(i8*)(intptr_t)v11532;
	i8 v11534 = v11533+(+1);
	i8 v11535 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11535 = v11534;

	i8 v11536 = (i8)(intptr_t)(ws+3272);
	i8 v11537 = *(i8*)(intptr_t)v11536;
	i1 v11538 = *(i1*)(intptr_t)v11537;
	i1 v11539 = (i1)+73;
	if (v11538==v11539) goto c02_07c7; else goto c02_07c8;

c02_07c7:;

	i8 v11540 = (i8)(intptr_t)(ws+3272);
	i8 v11541 = *(i8*)(intptr_t)v11540;
	i8 v11542 = v11541+(+1);
	i8 v11543 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11543 = v11542;

	i8 v11544 = (i8)(intptr_t)(ws+3272);
	i8 v11545 = *(i8*)(intptr_t)v11544;
	*(i8*)(intptr_t)(ws+3280) = v11545;
	i8 v11546 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(void))(intptr_t)v11546)();

	goto c02_07c4;

c02_07c8:;

	i8 v11547 = (i8)(intptr_t)(f449_SyntaxError);

	((void(*)(void))(intptr_t)v11547)();

c02_07c4:;

	goto c02_07bf;

c02_07c3:;

	i8 v11548 = (i8)(intptr_t)(ws+24);
	i8 v11549 = *(i8*)(intptr_t)v11548;
	i8 v11550 = (i8)+0;
	if (v11549==v11550) goto c02_07cc; else goto c02_07cd;

c02_07cc:;

	i8 v11551 = (i8)(intptr_t)(ws+3272);
	i8 v11552 = *(i8*)(intptr_t)v11551;
	i8 v11553 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v11553 = v11552;

	goto c02_07c9;

c02_07cd:;

	i8 v11554 = (i8)(intptr_t)(ws+32);
	i8 v11555 = *(i8*)(intptr_t)v11554;
	i8 v11556 = (i8)+0;
	if (v11555==v11556) goto c02_07d0; else goto c02_07d1;

c02_07d0:;

	i8 v11557 = (i8)(intptr_t)(ws+3272);
	i8 v11558 = *(i8*)(intptr_t)v11557;
	i8 v11559 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v11559 = v11558;

	goto c02_07c9;

c02_07d1:;

	i8 v11560 = (i8)(intptr_t)(f449_SyntaxError);

	((void(*)(void))(intptr_t)v11560)();

c02_07c9:;

c02_07bf:;

	goto c02_07b8;

c02_07b9:;

	i8 v11561 = (i8)(intptr_t)(ws+24);
	i8 v11562 = *(i8*)(intptr_t)v11561;
	i8 v11563 = (i8)+0;
	if (v11562==v11563) goto c02_07d7; else goto c02_07d9;

c02_07d9:;

	i8 v11564 = (i8)(intptr_t)(ws+32);
	i8 v11565 = *(i8*)(intptr_t)v11564;
	i8 v11566 = (i8)+0;
	if (v11565==v11566) goto c02_07d7; else goto c02_07d8;

c02_07d7:;

	i8 v11567 = (i8)(intptr_t)(f449_SyntaxError);

	((void(*)(void))(intptr_t)v11567)();

c02_07d8:;

c02_07d2:;

}
const i1 c02_s019b[] = { 0x43,0x4f,0x57,0x46,0x45,0x3a,0x20,0 };
	void f12_print(void);
	void f448_PrintFreeMemory(void);
	void f450_ParseArguments(void);
const i1 c02_s019c[] = { 0 };
	void f77_LexerAddIncludePath(void);
	void f81_LexerIncludeFile(void);
	void f268_CreateMainSubroutine(void);
	void f242_ArchInitTypes(void);
	void f198_EmitterOpenfile(void);
	void f200_EmitterDeclareSubroutine(void);
	void f158_MidStartfile(void);
	void f259_Generate(void);
	void f130_MidStartsub(void);
	void f259_Generate(void);
	void f445_ParserInit(void);
	void f82_LexerReadToken(void);
	void f72_InternalStrDup(void);
	void f72_InternalStrDup(void);
	void f447_ParserFeedToken(void);
	void f446_ParserDeinit(void);
	void f140_MidEndsub(void);
	void f259_Generate(void);
	void f269_ReportWorkspaces(void);
	void f154_MidEndfile(void);
	void f259_Generate(void);
	void f199_EmitterClosefile(void);
const i1 c02_s019d[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f448_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3264
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










































































	i8 v3333 = (i8)+0;
	i8 v3334 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3334 = v3333;


































































































	i1 v5582 = (i1)+0;
	i8 v5583 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5583 = v5582;




































































	i8 v11568 = (i8)(intptr_t)c02_s019b;
	*(i8*)(intptr_t)(ws+3696) = v11568;
	i8 v11569 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11569)();

	i8 v11570 = (i8)(intptr_t)(f448_PrintFreeMemory);

	((void(*)(void))(intptr_t)v11570)();

	i8 v11571 = (i8)(intptr_t)(f450_ParseArguments);

	((void(*)(void))(intptr_t)v11571)();

	i8 v11572 = (i8)(intptr_t)c02_s019c;
	*(i8*)(intptr_t)(ws+3280) = v11572;
	i8 v11573 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(void))(intptr_t)v11573)();

	i8 v11574 = (i8)(intptr_t)(ws+24);
	i8 v11575 = *(i8*)(intptr_t)v11574;
	*(i8*)(intptr_t)(ws+3288) = v11575;
	i8 v11576 = (i8)(intptr_t)(f81_LexerIncludeFile);

	((void(*)(void))(intptr_t)v11576)();

	i8 v11577 = (i8)(intptr_t)(f268_CreateMainSubroutine);

	((void(*)(void))(intptr_t)v11577)();

	i8 v11578 = (i8)(intptr_t)(f242_ArchInitTypes);

	((void(*)(void))(intptr_t)v11578)();

	i8 v11579 = (i8)(intptr_t)(ws+32);
	i8 v11580 = *(i8*)(intptr_t)v11579;
	*(i8*)(intptr_t)(ws+3264) = v11580;
	i8 v11581 = (i8)(intptr_t)(f198_EmitterOpenfile);

	((void(*)(void))(intptr_t)v11581)();

	i8 v11582 = (i8)(intptr_t)(ws+40);
	i8 v11583 = *(i8*)(intptr_t)v11582;
	*(i8*)(intptr_t)(ws+3416) = v11583;
	i8 v11584 = (i8)(intptr_t)(f200_EmitterDeclareSubroutine);

	((void(*)(void))(intptr_t)v11584)();

	i8 v11585 = (i8)(intptr_t)(f158_MidStartfile);

	((void(*)(void))(intptr_t)v11585)();

	i8 v11586 = *(i8*)(intptr_t)(ws+3264);
	i8 v11587 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v11587 = v11586;

	i8 v11588 = (i8)(intptr_t)(ws+3200);
	i8 v11589 = *(i8*)(intptr_t)v11588;
	*(i8*)(intptr_t)(ws+3488) = v11589;
	i8 v11590 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11590)();

	i8 v11591 = (i8)(intptr_t)(ws+40);
	i8 v11592 = *(i8*)(intptr_t)v11591;
	*(i8*)(intptr_t)(ws+3408) = v11592;
	i8 v11593 = (i8)(intptr_t)(f130_MidStartsub);

	((void(*)(void))(intptr_t)v11593)();

	i8 v11594 = *(i8*)(intptr_t)(ws+3416);
	i8 v11595 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v11595 = v11594;

	i8 v11596 = (i8)(intptr_t)(ws+3208);
	i8 v11597 = *(i8*)(intptr_t)v11596;
	*(i8*)(intptr_t)(ws+3488) = v11597;
	i8 v11598 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11598)();

	i8 v11599 = (i8)(intptr_t)(f445_ParserInit);

	((void(*)(void))(intptr_t)v11599)();

c02_07da:;

	i8 v11600 = (i8)(intptr_t)(f82_LexerReadToken);

	((void(*)(void))(intptr_t)v11600)();

	i1 v11601 = *(i1*)(intptr_t)(ws+3264);
	i8 v11602 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v11602 = v11601;

	i8 v11603 = (i8)(intptr_t)(ws+3216);
	i1 v11604 = *(i1*)(intptr_t)v11603;
	i8 v11605 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v11605 = v11604;

	i8 v11606 = (i8)(intptr_t)(ws+3217);
	i1 v11607 = *(i1*)(intptr_t)v11606;

	if (v11607 != +34) goto c02_07dd;

	i8 v11608 = (i8)(intptr_t)(ws+396);
	i4 v11609 = *(i4*)(intptr_t)v11608;
	i8 v11610 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v11610 = v11609;

	goto c02_07dc;

c02_07dd:;

	if (v11607 != +33) goto c02_07de;

	i8 v11611 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3464) = v11611;
	i8 v11612 = (i8)(intptr_t)(f72_InternalStrDup);

	((void(*)(void))(intptr_t)v11612)();

	i8 v11613 = *(i8*)(intptr_t)(ws+3472);
	i8 v11614 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v11614 = v11613;

	i8 v11615 = (i8)(intptr_t)(ws+3232);
	i8 v11616 = *(i8*)(intptr_t)v11615;
	i8 v11617 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v11617 = v11616;

	goto c02_07dc;

c02_07de:;

	if (v11607 != +41) goto c02_07df;

	i8 v11618 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3464) = v11618;
	i8 v11619 = (i8)(intptr_t)(f72_InternalStrDup);

	((void(*)(void))(intptr_t)v11619)();

	i8 v11620 = *(i8*)(intptr_t)(ws+3472);
	i8 v11621 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v11621 = v11620;

	i8 v11622 = (i8)(intptr_t)(ws+3240);
	i8 v11623 = *(i8*)(intptr_t)v11622;
	i8 v11624 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v11624 = v11623;

	goto c02_07dc;

c02_07df:;

	i4 v11625 = (i4)+0;
	i8 v11626 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v11626 = v11625;

c02_07dc:;


	i8 v11627 = (i8)(intptr_t)(ws+3217);
	i1 v11628 = *(i1*)(intptr_t)v11627;
	*(i1*)(intptr_t)(ws+3264) = v11628;
	i8 v11629 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)(ws+3272) = v11629;
	i8 v11630 = (i8)(intptr_t)(f447_ParserFeedToken);

	((void(*)(void))(intptr_t)v11630)();

	i8 v11631 = (i8)(intptr_t)(ws+3217);
	i1 v11632 = *(i1*)(intptr_t)v11631;
	i1 v11633 = (i1)+0;
	if (v11632==v11633) goto c02_07e3; else goto c02_07e4;

c02_07e3:;

	goto c02_07db;

c02_07e4:;

c02_07e0:;

	goto c02_07da;

c02_07db:;

	i8 v11634 = (i8)(intptr_t)(f446_ParserDeinit);

	((void(*)(void))(intptr_t)v11634)();

	i8 v11635 = (i8)(intptr_t)(ws+40);
	i8 v11636 = *(i8*)(intptr_t)v11635;
	*(i8*)(intptr_t)(ws+3408) = v11636;
	i8 v11637 = (i8)(intptr_t)(f140_MidEndsub);

	((void(*)(void))(intptr_t)v11637)();

	i8 v11638 = *(i8*)(intptr_t)(ws+3416);
	i8 v11639 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v11639 = v11638;

	i8 v11640 = (i8)(intptr_t)(ws+3248);
	i8 v11641 = *(i8*)(intptr_t)v11640;
	*(i8*)(intptr_t)(ws+3488) = v11641;
	i8 v11642 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11642)();

	i8 v11643 = (i8)(intptr_t)(ws+40);
	i8 v11644 = *(i8*)(intptr_t)v11643;
	*(i8*)(intptr_t)(ws+3408) = v11644;
	i8 v11645 = (i8)(intptr_t)(f269_ReportWorkspaces);

	((void(*)(void))(intptr_t)v11645)();

	i8 v11646 = (i8)(intptr_t)(f154_MidEndfile);

	((void(*)(void))(intptr_t)v11646)();

	i8 v11647 = *(i8*)(intptr_t)(ws+3264);
	i8 v11648 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v11648 = v11647;

	i8 v11649 = (i8)(intptr_t)(ws+3256);
	i8 v11650 = *(i8*)(intptr_t)v11649;
	*(i8*)(intptr_t)(ws+3488) = v11650;
	i8 v11651 = (i8)(intptr_t)(f259_Generate);

	((void(*)(void))(intptr_t)v11651)();

	i8 v11652 = (i8)(intptr_t)(f199_EmitterClosefile);

	((void(*)(void))(intptr_t)v11652)();

	i8 v11653 = (i8)(intptr_t)c02_s019d;
	*(i8*)(intptr_t)(ws+3696) = v11653;
	i8 v11654 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11654)();

	i8 v11655 = (i8)(intptr_t)(f448_PrintFreeMemory);

	((void(*)(void))(intptr_t)v11655)();

}
void cmain(void) {
	f3___main();
}
