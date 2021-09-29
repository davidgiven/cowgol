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








	{ .i1 = { 0x00,0x00,0x00,0x00,0x92,0xbb,0x00,0x90}},








	{ .i1 = { 0x84,0x98,0x93,0xad,0x8e,0x88,0x97,0x21}},








	{ .i1 = { 0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21}},








	{ .i1 = { 0x21,0x86,0x96,0x00,0x00,0x00,0x00,0x10}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x91,0x00,0x85,0xb1,0x30,0x00}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},







	{ .i1 = { 0x30,0x30,0x9f,0xb0,0xa0,0x9b}},
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

};
static data f3___main_s0117[] = {








	{ .i1 = { 0x43,0x01,0x23,0x24,0x2b,0x0b,0x3e,0x2a}},








	{ .i1 = { 0x28,0x3c,0x3d,0x2e,0x3a,0x03,0x40,0x07}},








	{ .i1 = { 0x3f,0x09,0x25,0x0a,0x0b,0x0c,0x41,0xff}},








	{ .i1 = { 0x26,0x2c,0x44,0x0d,0x0f,0x2f,0x14,0x15}},







	{ .i1 = { 0x19,0x1a,0x27,0x1c,0x42,0x1d}},
};
const i1 c02_s0028[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(void);
const i1 c02_s0029[] = { 0x3c,0x65,0x6f,0x66,0x3e,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s002a[] = { 0x3a,0x20,0 };
	void f12_print(void);
	void f17_print_i16(void);
const i1 c02_s002b[] = { 0x3a,0x20,0 };
	void f12_print(void);

// StartError workspace at ws+3656 length ws+0
void f74_StartError(void) {

	i8 v1210 = (i8)(intptr_t)c02_s0028;
	*(i8*)(intptr_t)(ws+3696) = v1210;
	i8 v1211 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1211)();

	i8 v1212 = (i8)(intptr_t)(ws+256);
	i8 v1213 = *(i8*)(intptr_t)v1212;
	i8 v1214 = (i8)+0;
	if (v1213==v1214) goto c02_011b; else goto c02_011c;

c02_011b:;

	i8 v1215 = (i8)(intptr_t)c02_s0029;
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

	i8 v1222 = (i8)(intptr_t)c02_s002a;
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

	i8 v1229 = (i8)(intptr_t)c02_s002b;
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
const i1 c02_s002c[] = { 0x20,0x20,0 };
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

	i8 v1265 = (i8)(intptr_t)c02_s002c;
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
const i1 c02_s002d[] = { 0x3e,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f34_Free(void);
	void f74_StartError(void);
const i1 c02_s002e[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s002f[] = { 0x27,0 };
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

	i8 v1404 = (i8)(intptr_t)c02_s002d;
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

	i8 v1425 = (i8)(intptr_t)c02_s002e;
	*(i8*)(intptr_t)(ws+3696) = v1425;
	i8 v1426 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1426)();

	i8 v1427 = (i8)(intptr_t)(ws+3288);
	i8 v1428 = *(i8*)(intptr_t)v1427;
	*(i8*)(intptr_t)(ws+3696) = v1428;
	i8 v1429 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1429)();

	i8 v1430 = (i8)(intptr_t)c02_s002f;
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
const i1 c02_s0030[] = { 0x3c,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f79_lexer_i_open(void);
const i1 c02_s0031[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };
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

	i8 v1510 = (i8)(intptr_t)c02_s0030;
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

	i8 v1526 = (i8)(intptr_t)c02_s0031;
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
const i1 c02_s0032[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f19_print_hex_i8(void);
	void f75_EndError(void);

// lexer_i_unparseable workspace at ws+3280 length ws+1
void f85_lexer_i_unparseable(void) {

	i8 v1528 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1528)();

	i8 v1529 = (i8)(intptr_t)c02_s0032;
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
const i1 c02_s0033[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
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

	i8 v1586 = (i8)(intptr_t)c02_s0033;
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
	i1 v1602 = (i1)+38;
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
const i1 c02_s0034[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
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
	*(i1*)(intptr_t)(ws+3312) = v1689;
	i8 v1690 = (i8)(intptr_t)(f83_lexer_i_ctype);

	((void(*)(void))(intptr_t)v1690)();

	i1 v1691 = *(i1*)(intptr_t)(ws+3314);
	i8 v1692 = (i8)(intptr_t)(ws+3301);
	*(i1*)(intptr_t)v1692 = v1691;

	i1 v1693 = *(i1*)(intptr_t)(ws+3313);
	i8 v1694 = (i8)(intptr_t)(ws+3300);
	*(i1*)(intptr_t)v1694 = v1693;

	i8 v1695 = (i8)(intptr_t)(ws+3300);
	i1 v1696 = *(i1*)(intptr_t)v1695;
	i1 v1697 = v1696&(+32);
	i1 v1698 = (i1)+0;
	if (v1697==v1698) goto c02_0197; else goto c02_0198;

c02_0197:;

	i8 v1699 = (i8)(intptr_t)(ws+3303);
	i1 v1700 = *(i1*)(intptr_t)v1699;
	i8 v1701 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1701 = v1700;

	goto c02_0193;

c02_0198:;

c02_0194:;

	i8 v1702 = (i8)(intptr_t)(ws+3303);
	i1 v1703 = *(i1*)(intptr_t)v1702;
	i1 v1704 = (i1)+97;
	if (v1703<v1704) goto c02_019d; else goto c02_019c;

c02_019c:;

	i8 v1705 = (i8)(intptr_t)(ws+3303);
	i1 v1706 = *(i1*)(intptr_t)v1705;
	i1 v1707 = v1706+(-87);
	i8 v1708 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1708 = v1707;

	goto c02_0199;

c02_019d:;

	i8 v1709 = (i8)(intptr_t)(ws+3303);
	i1 v1710 = *(i1*)(intptr_t)v1709;
	i1 v1711 = v1710+(-48);
	i8 v1712 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1712 = v1711;

c02_0199:;

	i8 v1713 = (i8)(intptr_t)(ws+3303);
	i1 v1714 = *(i1*)(intptr_t)v1713;
	i8 v1715 = (i8)(intptr_t)(ws+3296);
	i4 v1716 = *(i4*)(intptr_t)v1715;
	i1 v1717 = (s1)(s4)v1716;
	if (v1714<v1717) goto c02_01a2; else goto c02_01a1;

c02_01a1:;

	i8 v1718 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1718)();

	i8 v1719 = (i8)(intptr_t)c02_s0034;
	*(i8*)(intptr_t)(ws+3696) = v1719;
	i8 v1720 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1720)();

	i8 v1721 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1721)();

c02_01a2:;

c02_019e:;

	i8 v1722 = (i8)(intptr_t)(ws+396);
	i4 v1723 = *(i4*)(intptr_t)v1722;
	i8 v1724 = (i8)(intptr_t)(ws+3296);
	i4 v1725 = *(i4*)(intptr_t)v1724;
	i4 v1726 = v1723*v1725;
	i8 v1727 = (i8)(intptr_t)(ws+3303);
	i1 v1728 = *(i1*)(intptr_t)v1727;
	i4 v1729 = v1728;
	i4 v1730 = v1726+v1729;
	i8 v1731 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1731 = v1730;

	goto c02_0192;

c02_0193:;

}
	void f74_StartError(void);
const i1 c02_s0035[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);

// lexer_i_malformed workspace at ws+3312 length ws+8
void f90_lexer_i_malformed(void) {

	i8 v1732 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1732)();

	i8 v1733 = (i8)(intptr_t)c02_s0035;
	*(i8*)(intptr_t)(ws+3696) = v1733;
	i8 v1734 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1734)();

	i8 v1735 = (i8)(intptr_t)(ws+3312);
	i8 v1736 = *(i8*)(intptr_t)v1735;
	*(i8*)(intptr_t)(ws+3696) = v1736;
	i8 v1737 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1737)();

	i8 v1738 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1738)();

}
	void f84_lexer_i_getchar(void);
const i1 c02_s0036[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };
	void f90_lexer_i_malformed(void);

// lexer_i_get_escaped workspace at ws+3304 length ws+2
void f91_lexer_i_get_escaped(void) {

	i8 v1739 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1739)();

	i1 v1740 = *(i1*)(intptr_t)(ws+3312);
	i8 v1741 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v1741 = v1740;

	i8 v1742 = (i8)(intptr_t)(ws+3305);
	i1 v1743 = *(i1*)(intptr_t)v1742;
	i8 v1744 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1744 = v1743;

	i8 v1745 = (i8)(intptr_t)(ws+3304);
	i1 v1746 = *(i1*)(intptr_t)v1745;

	if (v1746 != +110) goto c02_01a4;

	i1 v1747 = (i1)+10;
	i8 v1748 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1748 = v1747;

	goto c02_01a3;

c02_01a4:;

	if (v1746 != +114) goto c02_01a5;

	i1 v1749 = (i1)+13;
	i8 v1750 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1750 = v1749;

	goto c02_01a3;

c02_01a5:;

	if (v1746 != +116) goto c02_01a6;

	i1 v1751 = (i1)+9;
	i8 v1752 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1752 = v1751;

	goto c02_01a3;

c02_01a6:;

	if (v1746 != +92) goto c02_01a7;

	i1 v1753 = (i1)+92;
	i8 v1754 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1754 = v1753;

	goto c02_01a3;

c02_01a7:;

	if (v1746 != +39) goto c02_01a8;

	i1 v1755 = (i1)+39;
	i8 v1756 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1756 = v1755;

	goto c02_01a3;

c02_01a8:;

	if (v1746 != +34) goto c02_01a9;

	i1 v1757 = (i1)+34;
	i8 v1758 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1758 = v1757;

	goto c02_01a3;

c02_01a9:;

	if (v1746 != +48) goto c02_01aa;

	i1 v1759 = (i1)+0;
	i8 v1760 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1760 = v1759;

	goto c02_01a3;

c02_01aa:;

	i8 v1761 = (i8)(intptr_t)c02_s0036;
	*(i8*)(intptr_t)(ws+3312) = v1761;
	i8 v1762 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1762)();

c02_01a3:;


}
	void f84_lexer_i_getchar(void);
const i1 c02_s0037[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f90_lexer_i_malformed(void);
	void f91_lexer_i_get_escaped(void);
	void f74_StartError(void);
const i1 c02_s0038[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f12_print(void);
	void f75_EndError(void);

// lexer_i_read_string workspace at ws+3296 length ws+3
void f92_lexer_i_read_string(void) {

	i1 v1763 = (i1)+0;
	i8 v1764 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1764 = v1763;

c02_01ab:;

	i8 v1765 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1765)();

	i1 v1766 = *(i1*)(intptr_t)(ws+3312);
	i8 v1767 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v1767 = v1766;

	i8 v1768 = (i8)(intptr_t)(ws+3296);
	i1 v1769 = *(i1*)(intptr_t)v1768;
	i8 v1770 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v1770 = v1769;

	i8 v1771 = (i8)(intptr_t)(ws+3297);
	i1 v1772 = *(i1*)(intptr_t)v1771;
	i1 v1773 = (i1)+32;
	if (v1772<v1773) goto c02_01b0; else goto c02_01b1;

c02_01b0:;

	i8 v1774 = (i8)(intptr_t)c02_s0037;
	*(i8*)(intptr_t)(ws+3312) = v1774;
	i8 v1775 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1775)();

c02_01b1:;

c02_01ad:;

	i8 v1776 = (i8)(intptr_t)(ws+3297);
	i1 v1777 = *(i1*)(intptr_t)v1776;

	if (v1777 != +34) goto c02_01b3;

	goto c02_01ac;

c02_01b3:;

	if (v1777 != +92) goto c02_01b4;

	i8 v1778 = (i8)(intptr_t)(f91_lexer_i_get_escaped);

	((void(*)(void))(intptr_t)v1778)();

	i1 v1779 = *(i1*)(intptr_t)(ws+3304);
	i8 v1780 = (i8)(intptr_t)(ws+3298);
	*(i1*)(intptr_t)v1780 = v1779;

	i8 v1781 = (i8)(intptr_t)(ws+3298);
	i1 v1782 = *(i1*)(intptr_t)v1781;
	i8 v1783 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v1783 = v1782;

c02_01b4:;

c02_01b2:;


	i8 v1784 = (i8)(intptr_t)(ws+3297);
	i1 v1785 = *(i1*)(intptr_t)v1784;
	i8 v1786 = (i8)(intptr_t)(ws+265);
	i8 v1787 = (i8)(intptr_t)(ws+393);
	i1 v1788 = *(i1*)(intptr_t)v1787;
	i8 v1789 = v1788;
	i8 v1790 = v1786+v1789;
	*(i1*)(intptr_t)v1790 = v1785;

	i8 v1791 = (i8)(intptr_t)(ws+393);
	i1 v1792 = *(i1*)(intptr_t)v1791;
	i1 v1793 = v1792+(+1);
	i8 v1794 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1794 = v1793;

	i8 v1795 = (i8)(intptr_t)(ws+393);
	i1 v1796 = *(i1*)(intptr_t)v1795;
	i1 v1797 = (i1)+128;
	if (v1796==v1797) goto c02_01b8; else goto c02_01b9;

c02_01b8:;

	i8 v1798 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1798)();

	i8 v1799 = (i8)(intptr_t)c02_s0038;
	*(i8*)(intptr_t)(ws+3696) = v1799;
	i8 v1800 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1800)();

	i8 v1801 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1801)();

c02_01b9:;

c02_01b5:;

	goto c02_01ab;

c02_01ac:;

	i1 v1802 = (i1)+0;
	i8 v1803 = (i8)(intptr_t)(ws+265);
	i8 v1804 = (i8)(intptr_t)(ws+393);
	i1 v1805 = *(i1*)(intptr_t)v1804;
	i8 v1806 = v1805;
	i8 v1807 = v1803+v1806;
	*(i1*)(intptr_t)v1807 = v1802;

}
const i1 c02_s0039[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f90_lexer_i_malformed(void);

// malformed workspace at ws+3288 length ws+0
void f94_malformed(void) {

	i8 v1808 = (i8)(intptr_t)c02_s0039;
	*(i8*)(intptr_t)(ws+3312) = v1808;
	i8 v1809 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1809)();

}
	void f84_lexer_i_getchar(void);
	void f94_malformed(void);
	void f91_lexer_i_get_escaped(void);
	void f84_lexer_i_getchar(void);
	void f94_malformed(void);

// lexer_i_read_char workspace at ws+3280 length ws+4
void f93_lexer_i_read_char(void) {


	i8 v1810 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1810)();

	i1 v1811 = *(i1*)(intptr_t)(ws+3312);
	i8 v1812 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1812 = v1811;

	i8 v1813 = (i8)(intptr_t)(ws+3280);
	i1 v1814 = *(i1*)(intptr_t)v1813;
	i8 v1815 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1815 = v1814;

	i8 v1816 = (i8)(intptr_t)(ws+3281);
	i1 v1817 = *(i1*)(intptr_t)v1816;
	i1 v1818 = (i1)+32;
	if (v1817<v1818) goto c02_01bf; else goto c02_01c1;

c02_01c1:;

	i8 v1819 = (i8)(intptr_t)(ws+3281);
	i1 v1820 = *(i1*)(intptr_t)v1819;
	i1 v1821 = (i1)+39;
	if (v1820==v1821) goto c02_01bf; else goto c02_01c0;

c02_01bf:;

	i8 v1822 = (i8)(intptr_t)(f94_malformed);

	((void(*)(void))(intptr_t)v1822)();

c02_01c0:;

c02_01ba:;

	i8 v1823 = (i8)(intptr_t)(ws+3281);
	i1 v1824 = *(i1*)(intptr_t)v1823;
	i1 v1825 = (i1)+92;
	if (v1824==v1825) goto c02_01c5; else goto c02_01c6;

c02_01c5:;

	i8 v1826 = (i8)(intptr_t)(f91_lexer_i_get_escaped);

	((void(*)(void))(intptr_t)v1826)();

	i1 v1827 = *(i1*)(intptr_t)(ws+3304);
	i8 v1828 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1828 = v1827;

	i8 v1829 = (i8)(intptr_t)(ws+3282);
	i1 v1830 = *(i1*)(intptr_t)v1829;
	i8 v1831 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1831 = v1830;

c02_01c6:;

c02_01c2:;

	i8 v1832 = (i8)(intptr_t)(ws+3281);
	i1 v1833 = *(i1*)(intptr_t)v1832;
	i4 v1834 = v1833;
	i8 v1835 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1835 = v1834;

	i8 v1836 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1836)();

	i1 v1837 = *(i1*)(intptr_t)(ws+3312);
	i8 v1838 = (i8)(intptr_t)(ws+3283);
	*(i1*)(intptr_t)v1838 = v1837;

	i8 v1839 = (i8)(intptr_t)(ws+3283);
	i1 v1840 = *(i1*)(intptr_t)v1839;
	i8 v1841 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1841 = v1840;

	i8 v1842 = (i8)(intptr_t)(ws+3281);
	i1 v1843 = *(i1*)(intptr_t)v1842;
	i1 v1844 = (i1)+39;
	if (v1843==v1844) goto c02_01cb; else goto c02_01ca;

c02_01ca:;

	i8 v1845 = (i8)(intptr_t)(f94_malformed);

	((void(*)(void))(intptr_t)v1845)();

c02_01cb:;

c02_01c7:;

}
const i1 c02_s003a[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f90_lexer_i_malformed(void);

// malformed_include workspace at ws+3288 length ws+0
void f96_malformed_include(void) {

	i8 v1846 = (i8)(intptr_t)c02_s003a;
	*(i8*)(intptr_t)(ws+3312) = v1846;
	i8 v1847 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1847)();

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


	i8 v1848 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1848)();

	i8 v1849 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1849)();

	i1 v1850 = *(i1*)(intptr_t)(ws+3312);
	i8 v1851 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1851 = v1850;

	i8 v1852 = (i8)(intptr_t)(ws+3280);
	i1 v1853 = *(i1*)(intptr_t)v1852;
	i8 v1854 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1854 = v1853;

	i8 v1855 = (i8)(intptr_t)(ws+3281);
	i1 v1856 = *(i1*)(intptr_t)v1855;
	i1 v1857 = (i1)+34;
	if (v1856==v1857) goto c02_01d0; else goto c02_01cf;

c02_01cf:;

	i8 v1858 = (i8)(intptr_t)(f96_malformed_include);

	((void(*)(void))(intptr_t)v1858)();

c02_01d0:;

c02_01cc:;

	i8 v1859 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1859)();

	i8 v1860 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1860)();

	i8 v1861 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1861)();

	i1 v1862 = *(i1*)(intptr_t)(ws+3312);
	i8 v1863 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1863 = v1862;

	i8 v1864 = (i8)(intptr_t)(ws+3282);
	i1 v1865 = *(i1*)(intptr_t)v1864;
	i8 v1866 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1866 = v1865;

	i8 v1867 = (i8)(intptr_t)(ws+3281);
	i1 v1868 = *(i1*)(intptr_t)v1867;
	i1 v1869 = (i1)+59;
	if (v1868==v1869) goto c02_01d5; else goto c02_01d4;

c02_01d4:;

	i8 v1870 = (i8)(intptr_t)(f96_malformed_include);

	((void(*)(void))(intptr_t)v1870)();

c02_01d5:;

c02_01d1:;

	i8 v1871 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3288) = v1871;
	i8 v1872 = (i8)(intptr_t)(f81_LexerIncludeFile);

	((void(*)(void))(intptr_t)v1872)();

}
	void f86_lexer_i_skipwhitespace(void);
	void f89_lexer_i_read_number(void);
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(void);
const i1 c02_s003b[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f90_lexer_i_malformed(void);
	void f92_lexer_i_read_string(void);
	void f34_Free(void);
	void f72_InternalStrDup(void);

// lexer_i_line_directive workspace at ws+3280 length ws+16
void f97_lexer_i_line_directive(void) {

	i8 v1873 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1873)();

	i8 v1874 = (i8)(intptr_t)(f89_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1874)();

	i8 v1875 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1875)();

	i8 v1876 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1876)();

	i1 v1877 = *(i1*)(intptr_t)(ws+3312);
	i8 v1878 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1878 = v1877;

	i8 v1879 = (i8)(intptr_t)(ws+3280);
	i1 v1880 = *(i1*)(intptr_t)v1879;
	i8 v1881 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1881 = v1880;

	i8 v1882 = (i8)(intptr_t)(ws+3281);
	i1 v1883 = *(i1*)(intptr_t)v1882;
	i1 v1884 = (i1)+34;
	if (v1883==v1884) goto c02_01da; else goto c02_01d9;

c02_01d9:;

	i8 v1885 = (i8)(intptr_t)c02_s003b;
	*(i8*)(intptr_t)(ws+3312) = v1885;
	i8 v1886 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(void))(intptr_t)v1886)();

c02_01da:;

c02_01d6:;

	i8 v1887 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1887)();

	i8 v1888 = (i8)(intptr_t)(ws+396);
	i4 v1889 = *(i4*)(intptr_t)v1888;
	i2 v1890 = (s2)(s4)v1889;
	i8 v1891 = (i8)(intptr_t)(ws+256);
	i8 v1892 = *(i8*)(intptr_t)v1891;
	i8 v1893 = v1892+(+16);
	*(i2*)(intptr_t)v1893 = v1890;

	i8 v1894 = (i8)(intptr_t)(ws+256);
	i8 v1895 = *(i8*)(intptr_t)v1894;
	i8 v1896 = v1895+(+8);
	i8 v1897 = *(i8*)(intptr_t)v1896;
	*(i8*)(intptr_t)(ws+3680) = v1897;
	i8 v1898 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v1898)();

	i8 v1899 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3464) = v1899;
	i8 v1900 = (i8)(intptr_t)(f72_InternalStrDup);

	((void(*)(void))(intptr_t)v1900)();

	i8 v1901 = *(i8*)(intptr_t)(ws+3472);
	i8 v1902 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v1902 = v1901;

	i8 v1903 = (i8)(intptr_t)(ws+3288);
	i8 v1904 = *(i8*)(intptr_t)v1903;
	i8 v1905 = (i8)(intptr_t)(ws+256);
	i8 v1906 = *(i8*)(intptr_t)v1905;
	i8 v1907 = v1906+(+8);
	*(i8*)(intptr_t)v1907 = v1904;

}
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(void);
	void f87_lexer_i_read_identifier(void);
const i1 c02_s003c[] = { 0x6c,0x69,0x6e,0x65,0 };
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














c02_01db:;

	i8 v1908 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1908)();

	i8 v1909 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1909)();

	i1 v1910 = *(i1*)(intptr_t)(ws+3312);
	i8 v1911 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v1911 = v1910;

	i8 v1912 = (i8)(intptr_t)(ws+3265);
	i1 v1913 = *(i1*)(intptr_t)v1912;
	i8 v1914 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1914 = v1913;

	i8 v1915 = (i8)(intptr_t)(ws+3266);
	i1 v1916 = *(i1*)(intptr_t)v1915;
	i1 v1917 = (i1)+35;
	if (v1916==v1917) goto c02_01e0; else goto c02_01e1;

c02_01e0:;

	i1 v1918 = (i1)+0;
	i8 v1919 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1919 = v1918;

	i8 v1920 = (i8)(intptr_t)(f87_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1920)();

	i8 v1921 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3560) = v1921;
	i8 v1922 = (i8)(intptr_t)c02_s003c;
	*(i8*)(intptr_t)(ws+3568) = v1922;
	i8 v1923 = (i8)(intptr_t)(f26_StrCmp);

	((void(*)(void))(intptr_t)v1923)();

	i1 v1924 = *(i1*)(intptr_t)(ws+3576);
	i8 v1925 = (i8)(intptr_t)(ws+3267);
	*(i1*)(intptr_t)v1925 = v1924;

	i8 v1926 = (i8)(intptr_t)(ws+3267);
	i1 v1927 = *(i1*)(intptr_t)v1926;
	i1 v1928 = (i1)+0;
	if (v1927==v1928) goto c02_01e5; else goto c02_01e6;

c02_01e5:;

	i8 v1929 = (i8)(intptr_t)(f97_lexer_i_line_directive);

	((void(*)(void))(intptr_t)v1929)();

c02_01e6:;

c02_01e2:;

c02_01e7:;

	i8 v1930 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1930)();

	i1 v1931 = *(i1*)(intptr_t)(ws+3312);
	i8 v1932 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v1932 = v1931;

	i8 v1933 = (i8)(intptr_t)(ws+3268);
	i1 v1934 = *(i1*)(intptr_t)v1933;
	i8 v1935 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1935 = v1934;

	i8 v1936 = (i8)(intptr_t)(ws+3266);
	i1 v1937 = *(i1*)(intptr_t)v1936;
	i1 v1938 = (i1)+10;
	if (v1937==v1938) goto c02_01f0; else goto c02_01f3;

c02_01f3:;

	i8 v1939 = (i8)(intptr_t)(ws+3266);
	i1 v1940 = *(i1*)(intptr_t)v1939;
	i1 v1941 = (i1)+13;
	if (v1940==v1941) goto c02_01f0; else goto c02_01f2;

c02_01f2:;

	i8 v1942 = (i8)(intptr_t)(ws+3266);
	i1 v1943 = *(i1*)(intptr_t)v1942;
	i1 v1944 = (i1)+0;
	if (v1943==v1944) goto c02_01f0; else goto c02_01f1;

c02_01f0:;

	i8 v1945 = (i8)(intptr_t)(ws+3266);
	i1 v1946 = *(i1*)(intptr_t)v1945;
	i8 v1947 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1947 = v1946;

	goto c02_01e8;

c02_01f1:;

c02_01e9:;

	goto c02_01e7;

c02_01e8:;

	goto c02_01db;

c02_01e1:;

c02_01dd:;

	i8 v1948 = (i8)(intptr_t)(ws+3266);
	i1 v1949 = *(i1*)(intptr_t)v1948;

	if (v1949 != +0) goto c02_01f5;

	i1 v1950 = (i1)+0;
	i8 v1951 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1951 = v1950;

	goto c02_01f4;

c02_01f5:;

	if (v1949 != +58) goto c02_01f6;

	i8 v1952 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1952)();

	i1 v1953 = *(i1*)(intptr_t)(ws+3312);
	i8 v1954 = (i8)(intptr_t)(ws+3269);
	*(i1*)(intptr_t)v1954 = v1953;

	i8 v1955 = (i8)(intptr_t)(ws+3269);
	i1 v1956 = *(i1*)(intptr_t)v1955;
	i8 v1957 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1957 = v1956;

	i8 v1958 = (i8)(intptr_t)(ws+3266);
	i1 v1959 = *(i1*)(intptr_t)v1958;
	i1 v1960 = (i1)+61;
	if (v1959==v1960) goto c02_01fa; else goto c02_01fb;

c02_01fa:;

	i1 v1961 = (i1)+2;
	i8 v1962 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1962 = v1961;

	goto c02_01f7;

c02_01fb:;

	i8 v1963 = (i8)(intptr_t)(ws+3266);
	i1 v1964 = *(i1*)(intptr_t)v1963;
	i8 v1965 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1965 = v1964;

	i1 v1966 = (i1)+6;
	i8 v1967 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1967 = v1966;

c02_01f7:;

	goto c02_01f4;

c02_01f6:;

	if (v1949 != +60) goto c02_01fc;

	i8 v1968 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1968)();

	i1 v1969 = *(i1*)(intptr_t)(ws+3312);
	i8 v1970 = (i8)(intptr_t)(ws+3270);
	*(i1*)(intptr_t)v1970 = v1969;

	i8 v1971 = (i8)(intptr_t)(ws+3270);
	i1 v1972 = *(i1*)(intptr_t)v1971;
	i8 v1973 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1973 = v1972;

	i8 v1974 = (i8)(intptr_t)(ws+3266);
	i1 v1975 = *(i1*)(intptr_t)v1974;

	if (v1975 != +60) goto c02_01fe;

	i1 v1976 = (i1)+56;
	i8 v1977 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1977 = v1976;

	goto c02_01fd;

c02_01fe:;

	if (v1975 != +61) goto c02_01ff;

	i1 v1978 = (i1)+51;
	i8 v1979 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1979 = v1978;

	goto c02_01fd;

c02_01ff:;

	i8 v1980 = (i8)(intptr_t)(ws+3266);
	i1 v1981 = *(i1*)(intptr_t)v1980;
	i8 v1982 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1982 = v1981;

	i1 v1983 = (i1)+50;
	i8 v1984 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1984 = v1983;

c02_01fd:;


	goto c02_01f4;

c02_01fc:;

	if (v1949 != +61) goto c02_0200;

	i8 v1985 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1985)();

	i1 v1986 = *(i1*)(intptr_t)(ws+3312);
	i8 v1987 = (i8)(intptr_t)(ws+3271);
	*(i1*)(intptr_t)v1987 = v1986;

	i8 v1988 = (i8)(intptr_t)(ws+3271);
	i1 v1989 = *(i1*)(intptr_t)v1988;
	i8 v1990 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v1990 = v1989;

	i8 v1991 = (i8)(intptr_t)(ws+3266);
	i1 v1992 = *(i1*)(intptr_t)v1991;
	i1 v1993 = (i1)+61;
	if (v1992==v1993) goto c02_0204; else goto c02_0205;

c02_0204:;

	i1 v1994 = (i1)+54;
	i8 v1995 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1995 = v1994;

	goto c02_0201;

c02_0205:;

	i8 v1996 = (i8)(intptr_t)(ws+3266);
	i1 v1997 = *(i1*)(intptr_t)v1996;
	*(i1*)(intptr_t)(ws+3280) = v1997;
	i8 v1998 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(void))(intptr_t)v1998)();

c02_0201:;

	goto c02_01f4;

c02_0200:;

	if (v1949 != +33) goto c02_0206;

	i8 v1999 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v1999)();

	i1 v2000 = *(i1*)(intptr_t)(ws+3312);
	i8 v2001 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v2001 = v2000;

	i8 v2002 = (i8)(intptr_t)(ws+3272);
	i1 v2003 = *(i1*)(intptr_t)v2002;
	i8 v2004 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2004 = v2003;

	i8 v2005 = (i8)(intptr_t)(ws+3266);
	i1 v2006 = *(i1*)(intptr_t)v2005;
	i1 v2007 = (i1)+61;
	if (v2006==v2007) goto c02_020a; else goto c02_020b;

c02_020a:;

	i1 v2008 = (i1)+55;
	i8 v2009 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2009 = v2008;

	goto c02_0207;

c02_020b:;

	i8 v2010 = (i8)(intptr_t)(ws+3266);
	i1 v2011 = *(i1*)(intptr_t)v2010;
	*(i1*)(intptr_t)(ws+3280) = v2011;
	i8 v2012 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(void))(intptr_t)v2012)();

c02_0207:;

	goto c02_01f4;

c02_0206:;

	if (v1949 != +62) goto c02_020c;

	i8 v2013 = (i8)(intptr_t)(f84_lexer_i_getchar);

	((void(*)(void))(intptr_t)v2013)();

	i1 v2014 = *(i1*)(intptr_t)(ws+3312);
	i8 v2015 = (i8)(intptr_t)(ws+3273);
	*(i1*)(intptr_t)v2015 = v2014;

	i8 v2016 = (i8)(intptr_t)(ws+3273);
	i1 v2017 = *(i1*)(intptr_t)v2016;
	i8 v2018 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2018 = v2017;

	i8 v2019 = (i8)(intptr_t)(ws+3266);
	i1 v2020 = *(i1*)(intptr_t)v2019;

	if (v2020 != +62) goto c02_020e;

	i1 v2021 = (i1)+57;
	i8 v2022 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2022 = v2021;

	goto c02_020d;

c02_020e:;

	if (v2020 != +61) goto c02_020f;

	i1 v2023 = (i1)+53;
	i8 v2024 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2024 = v2023;

	goto c02_020d;

c02_020f:;

	i8 v2025 = (i8)(intptr_t)(ws+3266);
	i1 v2026 = *(i1*)(intptr_t)v2025;
	i8 v2027 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2027 = v2026;

	i1 v2028 = (i1)+52;
	i8 v2029 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2029 = v2028;

c02_020d:;


	goto c02_01f4;

c02_020c:;

	if (v1949 != +34) goto c02_0210;

	i8 v2030 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v2030)();

	i1 v2031 = (i1)+41;
	i8 v2032 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2032 = v2031;

	goto c02_01f4;

c02_0210:;

	if (v1949 != +39) goto c02_0211;

	i8 v2033 = (i8)(intptr_t)(f93_lexer_i_read_char);

	((void(*)(void))(intptr_t)v2033)();

	i1 v2034 = (i1)+34;
	i8 v2035 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2035 = v2034;

	goto c02_01f4;

c02_0211:;

	i8 v2036 = (i8)(intptr_t)(ws+3266);
	i1 v2037 = *(i1*)(intptr_t)v2036;
	*(i1*)(intptr_t)(ws+3312) = v2037;
	i8 v2038 = (i8)(intptr_t)(f83_lexer_i_ctype);

	((void(*)(void))(intptr_t)v2038)();

	i1 v2039 = *(i1*)(intptr_t)(ws+3314);
	i8 v2040 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2040 = v2039;

	i1 v2041 = *(i1*)(intptr_t)(ws+3313);
	i8 v2042 = (i8)(intptr_t)(ws+3274);
	*(i1*)(intptr_t)v2042 = v2041;

	i8 v2043 = (i8)(intptr_t)(ws+3274);
	i1 v2044 = *(i1*)(intptr_t)v2043;
	i1 v2045 = v2044&(+128);
	i1 v2046 = (i1)+0;
	if (v2045==v2046) goto c02_0216; else goto c02_0215;

c02_0215:;

	goto c02_0212;

c02_0216:;

	i8 v2047 = (i8)(intptr_t)(ws+3274);
	i1 v2048 = *(i1*)(intptr_t)v2047;
	i1 v2049 = v2048&(+1);
	i1 v2050 = (i1)+0;
	if (v2049==v2050) goto c02_021a; else goto c02_0219;

c02_0219:;

	i8 v2051 = (i8)(intptr_t)(ws+3266);
	i1 v2052 = *(i1*)(intptr_t)v2051;
	i8 v2053 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2053 = v2052;

	i8 v2054 = (i8)(intptr_t)(f89_lexer_i_read_number);

	((void(*)(void))(intptr_t)v2054)();

	i1 v2055 = (i1)+34;
	i8 v2056 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2056 = v2055;

	goto c02_0212;

c02_021a:;

	i8 v2057 = (i8)(intptr_t)(ws+3274);
	i1 v2058 = *(i1*)(intptr_t)v2057;
	i1 v2059 = v2058&(+16);
	i1 v2060 = (i1)+0;
	if (v2059==v2060) goto c02_021e; else goto c02_021d;

c02_021d:;

	i1 v2061 = (i1)+1;
	i8 v2062 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v2062 = v2061;

	i8 v2063 = (i8)(intptr_t)(ws+3266);
	i1 v2064 = *(i1*)(intptr_t)v2063;
	i8 v2065 = (i8)(intptr_t)(ws+265);
	*(i1*)(intptr_t)v2065 = v2064;

	i8 v2066 = (i8)(intptr_t)(f87_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v2066)();

	i8 v2067 = (i8)(intptr_t)(f88_lexer_i_match_keyword);

	((void(*)(void))(intptr_t)v2067)();

	i1 v2068 = *(i1*)(intptr_t)(ws+3280);
	i8 v2069 = (i8)(intptr_t)(ws+3275);
	*(i1*)(intptr_t)v2069 = v2068;

	i8 v2070 = (i8)(intptr_t)(ws+3275);
	i1 v2071 = *(i1*)(intptr_t)v2070;
	i8 v2072 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2072 = v2071;

	goto c02_0212;

c02_021e:;

	i8 v2073 = (i8)(intptr_t)(ws+3266);
	i1 v2074 = *(i1*)(intptr_t)v2073;
	*(i1*)(intptr_t)(ws+3280) = v2074;
	i8 v2075 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(void))(intptr_t)v2075)();

c02_0212:;

c02_01f4:;


	i8 v2076 = (i8)(intptr_t)(ws+3264);
	i1 v2077 = *(i1*)(intptr_t)v2076;
	i1 v2078 = (i1)+255;
	if (v2077==v2078) goto c02_0222; else goto c02_0223;

c02_0222:;

	i8 v2079 = (i8)(intptr_t)(f95_lexer_i_include);

	((void(*)(void))(intptr_t)v2079)();

	goto c02_021f;

c02_0223:;

	goto c02_01dc;

c02_021f:;

	goto c02_01db;

c02_01dc:;

}

// CountParameters workspace at ws+3392 length ws+9
void f98_CountParameters(void) {

	i1 v2080 = (i1)+0;
	i8 v2081 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v2081 = v2080;

c02_0224:;

	i8 v2082 = (i8)(intptr_t)(ws+3392);
	i8 v2083 = *(i8*)(intptr_t)v2082;
	i8 v2084 = (i8)+0;
	if (v2083==v2084) goto c02_0229; else goto c02_0228;

c02_0228:;

	i8 v2085 = (i8)(intptr_t)(ws+3400);
	i1 v2086 = *(i1*)(intptr_t)v2085;
	i1 v2087 = v2086+(+1);
	i8 v2088 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v2088 = v2087;

	i8 v2089 = (i8)(intptr_t)(ws+3392);
	i8 v2090 = *(i8*)(intptr_t)v2089;
	i8 v2091 = *(i8*)(intptr_t)v2090;
	i8 v2092 = v2091+(+16);
	i8 v2093 = *(i8*)(intptr_t)v2092;
	i8 v2094 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2094 = v2093;

	goto c02_0224;

c02_0229:;

}

// GetInputParameter workspace at ws+3464 length ws+24
void f99_GetInputParameter(void) {

	i8 v2095 = (i8)(intptr_t)(ws+3464);
	i8 v2096 = *(i8*)(intptr_t)v2095;
	i8 v2097 = v2096+(+80);
	i1 v2098 = *(i1*)(intptr_t)v2097;
	i1 v2099 = (i1)+0;
	if (v2098==v2099) goto c02_022e; else goto c02_022d;

c02_022d:;

	i8 v2100 = (i8)(intptr_t)(ws+3464);
	i8 v2101 = *(i8*)(intptr_t)v2100;
	i8 v2102 = v2101+(+16);
	i8 v2103 = *(i8*)(intptr_t)v2102;
	i8 v2104 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2104 = v2103;

c02_022f:;

	i8 v2105 = (i8)(intptr_t)(ws+3472);
	i1 v2106 = *(i1*)(intptr_t)v2105;
	i1 v2107 = (i1)+0;
	if (v2106==v2107) goto c02_0234; else goto c02_0233;

c02_0233:;

	i8 v2108 = (i8)(intptr_t)(ws+3480);
	i8 v2109 = *(i8*)(intptr_t)v2108;
	i8 v2110 = v2109+(+24);
	i8 v2111 = *(i8*)(intptr_t)v2110;
	i8 v2112 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2112 = v2111;

	i8 v2113 = (i8)(intptr_t)(ws+3472);
	i1 v2114 = *(i1*)(intptr_t)v2113;
	i1 v2115 = v2114+(-1);
	i8 v2116 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v2116 = v2115;

	goto c02_022f;

c02_0234:;

	goto c02_022a;

c02_022e:;

	i8 v2117 = (i8)+0;
	i8 v2118 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2118 = v2117;

c02_022a:;

}

// GetOutputParameter workspace at ws+3488 length ws+24
void f100_GetOutputParameter(void) {

	i8 v2119 = (i8)(intptr_t)(ws+3488);
	i8 v2120 = *(i8*)(intptr_t)v2119;
	i8 v2121 = v2120+(+81);
	i1 v2122 = *(i1*)(intptr_t)v2121;
	i1 v2123 = (i1)+0;
	if (v2122==v2123) goto c02_0239; else goto c02_0238;

c02_0238:;

	i8 v2124 = (i8)(intptr_t)(ws+3496);
	i1 v2125 = *(i1*)(intptr_t)v2124;
	i8 v2126 = (i8)(intptr_t)(ws+3488);
	i8 v2127 = *(i8*)(intptr_t)v2126;
	i8 v2128 = v2127+(+80);
	i1 v2129 = *(i1*)(intptr_t)v2128;
	i1 v2130 = v2125+v2129;
	i8 v2131 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2131 = v2130;

	i8 v2132 = (i8)(intptr_t)(ws+3488);
	i8 v2133 = *(i8*)(intptr_t)v2132;
	i8 v2134 = v2133+(+16);
	i8 v2135 = *(i8*)(intptr_t)v2134;
	i8 v2136 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2136 = v2135;

c02_023a:;

	i8 v2137 = (i8)(intptr_t)(ws+3496);
	i1 v2138 = *(i1*)(intptr_t)v2137;
	i1 v2139 = (i1)+0;
	if (v2138==v2139) goto c02_023f; else goto c02_023e;

c02_023e:;

	i8 v2140 = (i8)(intptr_t)(ws+3504);
	i8 v2141 = *(i8*)(intptr_t)v2140;
	i8 v2142 = v2141+(+24);
	i8 v2143 = *(i8*)(intptr_t)v2142;
	i8 v2144 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2144 = v2143;

	i8 v2145 = (i8)(intptr_t)(ws+3496);
	i1 v2146 = *(i1*)(intptr_t)v2145;
	i1 v2147 = v2146+(-1);
	i8 v2148 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2148 = v2147;

	goto c02_023a;

c02_023f:;

	goto c02_0235;

c02_0239:;

	i8 v2149 = (i8)+0;
	i8 v2150 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2150 = v2149;

c02_0235:;

}

// WidthToIndex workspace at ws+3592 length ws+2
void f102_WidthToIndex(void) {

	i8 v2158 = (i8)(intptr_t)(ws+3592);
	i1 v2159 = *(i1*)(intptr_t)v2158;

	if (v2159 != +4) goto c02_0241;

	i1 v2160 = (i1)+3;
	i8 v2161 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2161 = v2160;

	goto c02_0240;

c02_0241:;

	if (v2159 != +8) goto c02_0242;

	i1 v2162 = (i1)+4;
	i8 v2163 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2163 = v2162;

	goto c02_0240;

c02_0242:;

	i8 v2164 = (i8)(intptr_t)(ws+3592);
	i1 v2165 = *(i1*)(intptr_t)v2164;
	i8 v2166 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2166 = v2165;

c02_0240:;


}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidEndcase workspace at ws+3416 length ws+32
void f105_MidEndcase(void) {

	i8 v2179 = (i8)(intptr_t)(ws+3416);
	i1 v2180 = *(i1*)(intptr_t)v2179;
	*(i1*)(intptr_t)(ws+3592) = v2180;
	i8 v2181 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2181)();

	i1 v2182 = *(i1*)(intptr_t)(ws+3593);
	i8 v2183 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v2183 = v2182;

	i8 v2184 = (i8)(intptr_t)(ws+3432);
	i1 v2185 = *(i1*)(intptr_t)v2184;
	i1 v2186 = v2185+(+81);
	*(i1*)(intptr_t)(ws+3616) = v2186;
	i8 v2187 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2187)();

	i8 v2188 = *(i8*)(intptr_t)(ws+3624);
	i8 v2189 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v2189 = v2188;

	i8 v2190 = (i8)(intptr_t)(ws+3440);
	i8 v2191 = *(i8*)(intptr_t)v2190;
	i8 v2192 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2192 = v2191;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidArg workspace at ws+3416 length ws+72
void f106_MidArg(void) {

	i8 v2193 = (i8)(intptr_t)(ws+3416);
	i1 v2194 = *(i1*)(intptr_t)v2193;
	*(i1*)(intptr_t)(ws+3592) = v2194;
	i8 v2195 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2195)();

	i1 v2196 = *(i1*)(intptr_t)(ws+3593);
	i8 v2197 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v2197 = v2196;

	i8 v2198 = (i8)(intptr_t)(ws+3472);
	i1 v2199 = *(i1*)(intptr_t)v2198;
	i1 v2200 = v2199+(+30);
	*(i1*)(intptr_t)(ws+3616) = v2200;
	i8 v2201 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2201)();

	i8 v2202 = *(i8*)(intptr_t)(ws+3624);
	i8 v2203 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2203 = v2202;

	i8 v2204 = (i8)(intptr_t)(ws+3480);
	i8 v2205 = *(i8*)(intptr_t)v2204;
	i8 v2206 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2206 = v2205;

	i8 v2207 = (i8)(intptr_t)(ws+3424);
	i8 v2208 = *(i8*)(intptr_t)v2207;
	i8 v2209 = (i8)(intptr_t)(ws+3464);
	i8 v2210 = *(i8*)(intptr_t)v2209;
	i8 v2211 = v2210+(+32);
	*(i8*)(intptr_t)v2211 = v2208;

	i8 v2212 = (i8)(intptr_t)(ws+3432);
	i8 v2213 = *(i8*)(intptr_t)v2212;
	i8 v2214 = (i8)(intptr_t)(ws+3464);
	i8 v2215 = *(i8*)(intptr_t)v2214;
	i8 v2216 = v2215+(+40);
	*(i8*)(intptr_t)v2216 = v2213;

	i8 v2217 = (i8)(intptr_t)(ws+3440);
	i8 v2218 = *(i8*)(intptr_t)v2217;
	i8 v2219 = (i8)(intptr_t)(ws+3464);
	i8 v2220 = *(i8*)(intptr_t)v2219;
	*(i8*)(intptr_t)v2220 = v2218;

	i8 v2221 = (i8)(intptr_t)(ws+3448);
	i8 v2222 = *(i8*)(intptr_t)v2221;
	i8 v2223 = (i8)(intptr_t)(ws+3464);
	i8 v2224 = *(i8*)(intptr_t)v2223;
	i8 v2225 = v2224+(+8);
	*(i8*)(intptr_t)v2225 = v2222;

	i8 v2226 = (i8)(intptr_t)(ws+3456);
	i1 v2227 = *(i1*)(intptr_t)v2226;
	i8 v2228 = (i8)(intptr_t)(ws+3464);
	i8 v2229 = *(i8*)(intptr_t)v2228;
	i8 v2230 = v2229+(+16);
	*(i1*)(intptr_t)v2230 = v2227;

}
	void f103_AllocateNewNode(void);

// MidInitstring workspace at ws+3448 length ws+24
void f107_MidInitstring(void) {

	i1 v2231 = (i1)+12;
	*(i1*)(intptr_t)(ws+3616) = v2231;
	i8 v2232 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2232)();

	i8 v2233 = *(i8*)(intptr_t)(ws+3624);
	i8 v2234 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2234 = v2233;

	i8 v2235 = (i8)(intptr_t)(ws+3464);
	i8 v2236 = *(i8*)(intptr_t)v2235;
	i8 v2237 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v2237 = v2236;

	i8 v2238 = (i8)(intptr_t)(ws+3448);
	i8 v2239 = *(i8*)(intptr_t)v2238;
	i8 v2240 = (i8)(intptr_t)(ws+3456);
	i8 v2241 = *(i8*)(intptr_t)v2240;
	*(i8*)(intptr_t)v2241 = v2239;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidBlts workspace at ws+3456 length ws+56
void f112_MidBlts(void) {

	i8 v2332 = (i8)(intptr_t)(ws+3456);
	i1 v2333 = *(i1*)(intptr_t)v2332;
	*(i1*)(intptr_t)(ws+3592) = v2333;
	i8 v2334 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2334)();

	i1 v2335 = *(i1*)(intptr_t)(ws+3593);
	i8 v2336 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2336 = v2335;

	i8 v2337 = (i8)(intptr_t)(ws+3496);
	i1 v2338 = *(i1*)(intptr_t)v2337;
	i1 v2339 = v2338+(+61);
	*(i1*)(intptr_t)(ws+3616) = v2339;
	i8 v2340 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2340)();

	i8 v2341 = *(i8*)(intptr_t)(ws+3624);
	i8 v2342 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2342 = v2341;

	i8 v2343 = (i8)(intptr_t)(ws+3504);
	i8 v2344 = *(i8*)(intptr_t)v2343;
	i8 v2345 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2345 = v2344;

	i8 v2346 = (i8)(intptr_t)(ws+3464);
	i8 v2347 = *(i8*)(intptr_t)v2346;
	i8 v2348 = (i8)(intptr_t)(ws+3488);
	i8 v2349 = *(i8*)(intptr_t)v2348;
	i8 v2350 = v2349+(+32);
	*(i8*)(intptr_t)v2350 = v2347;

	i8 v2351 = (i8)(intptr_t)(ws+3472);
	i8 v2352 = *(i8*)(intptr_t)v2351;
	i8 v2353 = (i8)(intptr_t)(ws+3488);
	i8 v2354 = *(i8*)(intptr_t)v2353;
	i8 v2355 = v2354+(+40);
	*(i8*)(intptr_t)v2355 = v2352;

	i8 v2356 = (i8)(intptr_t)(ws+3480);
	i2 v2357 = *(i2*)(intptr_t)v2356;
	i8 v2358 = (i8)(intptr_t)(ws+3488);
	i8 v2359 = *(i8*)(intptr_t)v2358;
	*(i2*)(intptr_t)v2359 = v2357;

	i8 v2360 = (i8)(intptr_t)(ws+3482);
	i2 v2361 = *(i2*)(intptr_t)v2360;
	i8 v2362 = (i8)(intptr_t)(ws+3488);
	i8 v2363 = *(i8*)(intptr_t)v2362;
	i8 v2364 = v2363+(+2);
	*(i2*)(intptr_t)v2364 = v2361;

	i8 v2365 = (i8)(intptr_t)(ws+3484);
	i2 v2366 = *(i2*)(intptr_t)v2365;
	i8 v2367 = (i8)(intptr_t)(ws+3488);
	i8 v2368 = *(i8*)(intptr_t)v2367;
	i8 v2369 = v2368+(+4);
	*(i2*)(intptr_t)v2369 = v2366;

	i8 v2370 = (i8)(intptr_t)(ws+3486);
	i1 v2371 = *(i1*)(intptr_t)v2370;
	i8 v2372 = (i8)(intptr_t)(ws+3488);
	i8 v2373 = *(i8*)(intptr_t)v2372;
	i8 v2374 = v2373+(+6);
	*(i1*)(intptr_t)v2374 = v2371;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidDeref workspace at ws+3544 length ws+40
void f113_MidDeref(void) {

	i8 v2375 = (i8)(intptr_t)(ws+3544);
	i1 v2376 = *(i1*)(intptr_t)v2375;
	*(i1*)(intptr_t)(ws+3592) = v2376;
	i8 v2377 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2377)();

	i1 v2378 = *(i1*)(intptr_t)(ws+3593);
	i8 v2379 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v2379 = v2378;

	i8 v2380 = (i8)(intptr_t)(ws+3568);
	i1 v2381 = *(i1*)(intptr_t)v2380;
	i1 v2382 = v2381+(+44);
	*(i1*)(intptr_t)(ws+3616) = v2382;
	i8 v2383 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2383)();

	i8 v2384 = *(i8*)(intptr_t)(ws+3624);
	i8 v2385 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v2385 = v2384;

	i8 v2386 = (i8)(intptr_t)(ws+3576);
	i8 v2387 = *(i8*)(intptr_t)v2386;
	i8 v2388 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v2388 = v2387;

	i8 v2389 = (i8)(intptr_t)(ws+3552);
	i8 v2390 = *(i8*)(intptr_t)v2389;
	i8 v2391 = (i8)(intptr_t)(ws+3560);
	i8 v2392 = *(i8*)(intptr_t)v2391;
	i8 v2393 = v2392+(+32);
	*(i8*)(intptr_t)v2393 = v2390;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidBltu workspace at ws+3456 length ws+56
void f114_MidBltu(void) {

	i8 v2394 = (i8)(intptr_t)(ws+3456);
	i1 v2395 = *(i1*)(intptr_t)v2394;
	*(i1*)(intptr_t)(ws+3592) = v2395;
	i8 v2396 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2396)();

	i1 v2397 = *(i1*)(intptr_t)(ws+3593);
	i8 v2398 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2398 = v2397;

	i8 v2399 = (i8)(intptr_t)(ws+3496);
	i1 v2400 = *(i1*)(intptr_t)v2399;
	i1 v2401 = v2400+(+66);
	*(i1*)(intptr_t)(ws+3616) = v2401;
	i8 v2402 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2402)();

	i8 v2403 = *(i8*)(intptr_t)(ws+3624);
	i8 v2404 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2404 = v2403;

	i8 v2405 = (i8)(intptr_t)(ws+3504);
	i8 v2406 = *(i8*)(intptr_t)v2405;
	i8 v2407 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2407 = v2406;

	i8 v2408 = (i8)(intptr_t)(ws+3464);
	i8 v2409 = *(i8*)(intptr_t)v2408;
	i8 v2410 = (i8)(intptr_t)(ws+3488);
	i8 v2411 = *(i8*)(intptr_t)v2410;
	i8 v2412 = v2411+(+32);
	*(i8*)(intptr_t)v2412 = v2409;

	i8 v2413 = (i8)(intptr_t)(ws+3472);
	i8 v2414 = *(i8*)(intptr_t)v2413;
	i8 v2415 = (i8)(intptr_t)(ws+3488);
	i8 v2416 = *(i8*)(intptr_t)v2415;
	i8 v2417 = v2416+(+40);
	*(i8*)(intptr_t)v2417 = v2414;

	i8 v2418 = (i8)(intptr_t)(ws+3480);
	i2 v2419 = *(i2*)(intptr_t)v2418;
	i8 v2420 = (i8)(intptr_t)(ws+3488);
	i8 v2421 = *(i8*)(intptr_t)v2420;
	*(i2*)(intptr_t)v2421 = v2419;

	i8 v2422 = (i8)(intptr_t)(ws+3482);
	i2 v2423 = *(i2*)(intptr_t)v2422;
	i8 v2424 = (i8)(intptr_t)(ws+3488);
	i8 v2425 = *(i8*)(intptr_t)v2424;
	i8 v2426 = v2425+(+2);
	*(i2*)(intptr_t)v2426 = v2423;

	i8 v2427 = (i8)(intptr_t)(ws+3484);
	i2 v2428 = *(i2*)(intptr_t)v2427;
	i8 v2429 = (i8)(intptr_t)(ws+3488);
	i8 v2430 = *(i8*)(intptr_t)v2429;
	i8 v2431 = v2430+(+4);
	*(i2*)(intptr_t)v2431 = v2428;

	i8 v2432 = (i8)(intptr_t)(ws+3486);
	i1 v2433 = *(i1*)(intptr_t)v2432;
	i8 v2434 = (i8)(intptr_t)(ws+3488);
	i8 v2435 = *(i8*)(intptr_t)v2434;
	i8 v2436 = v2435+(+6);
	*(i1*)(intptr_t)v2436 = v2433;

}
	void f103_AllocateNewNode(void);

// MidCall workspace at ws+3488 length ws+40
void f116_MidCall(void) {

	i1 v2461 = (i1)+29;
	*(i1*)(intptr_t)(ws+3616) = v2461;
	i8 v2462 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2462)();

	i8 v2463 = *(i8*)(intptr_t)(ws+3624);
	i8 v2464 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2464 = v2463;

	i8 v2465 = (i8)(intptr_t)(ws+3520);
	i8 v2466 = *(i8*)(intptr_t)v2465;
	i8 v2467 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v2467 = v2466;

	i8 v2468 = (i8)(intptr_t)(ws+3488);
	i8 v2469 = *(i8*)(intptr_t)v2468;
	i8 v2470 = (i8)(intptr_t)(ws+3512);
	i8 v2471 = *(i8*)(intptr_t)v2470;
	i8 v2472 = v2471+(+32);
	*(i8*)(intptr_t)v2472 = v2469;

	i8 v2473 = (i8)(intptr_t)(ws+3496);
	i8 v2474 = *(i8*)(intptr_t)v2473;
	i8 v2475 = (i8)(intptr_t)(ws+3512);
	i8 v2476 = *(i8*)(intptr_t)v2475;
	i8 v2477 = v2476+(+40);
	*(i8*)(intptr_t)v2477 = v2474;

	i8 v2478 = (i8)(intptr_t)(ws+3504);
	i8 v2479 = *(i8*)(intptr_t)v2478;
	i8 v2480 = (i8)(intptr_t)(ws+3512);
	i8 v2481 = *(i8*)(intptr_t)v2480;
	*(i8*)(intptr_t)v2481 = v2479;

}
	void f103_AllocateNewNode(void);

// MidJump workspace at ws+3416 length ws+24
void f117_MidJump(void) {

	i1 v2482 = (i1)+27;
	*(i1*)(intptr_t)(ws+3616) = v2482;
	i8 v2483 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2483)();

	i8 v2484 = *(i8*)(intptr_t)(ws+3624);
	i8 v2485 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2485 = v2484;

	i8 v2486 = (i8)(intptr_t)(ws+3432);
	i8 v2487 = *(i8*)(intptr_t)v2486;
	i8 v2488 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2488 = v2487;

	i8 v2489 = (i8)(intptr_t)(ws+3416);
	i2 v2490 = *(i2*)(intptr_t)v2489;
	i8 v2491 = (i8)(intptr_t)(ws+3424);
	i8 v2492 = *(i8*)(intptr_t)v2491;
	*(i2*)(intptr_t)v2492 = v2490;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidBeq workspace at ws+3448 length ws+56
void f119_MidBeq(void) {

	i8 v2516 = (i8)(intptr_t)(ws+3448);
	i1 v2517 = *(i1*)(intptr_t)v2516;
	*(i1*)(intptr_t)(ws+3592) = v2517;
	i8 v2518 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2518)();

	i1 v2519 = *(i1*)(intptr_t)(ws+3593);
	i8 v2520 = (i8)(intptr_t)(ws+3488);
	*(i1*)(intptr_t)v2520 = v2519;

	i8 v2521 = (i8)(intptr_t)(ws+3488);
	i1 v2522 = *(i1*)(intptr_t)v2521;
	i1 v2523 = v2522+(+56);
	*(i1*)(intptr_t)(ws+3616) = v2523;
	i8 v2524 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2524)();

	i8 v2525 = *(i8*)(intptr_t)(ws+3624);
	i8 v2526 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v2526 = v2525;

	i8 v2527 = (i8)(intptr_t)(ws+3496);
	i8 v2528 = *(i8*)(intptr_t)v2527;
	i8 v2529 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2529 = v2528;

	i8 v2530 = (i8)(intptr_t)(ws+3456);
	i8 v2531 = *(i8*)(intptr_t)v2530;
	i8 v2532 = (i8)(intptr_t)(ws+3480);
	i8 v2533 = *(i8*)(intptr_t)v2532;
	i8 v2534 = v2533+(+32);
	*(i8*)(intptr_t)v2534 = v2531;

	i8 v2535 = (i8)(intptr_t)(ws+3464);
	i8 v2536 = *(i8*)(intptr_t)v2535;
	i8 v2537 = (i8)(intptr_t)(ws+3480);
	i8 v2538 = *(i8*)(intptr_t)v2537;
	i8 v2539 = v2538+(+40);
	*(i8*)(intptr_t)v2539 = v2536;

	i8 v2540 = (i8)(intptr_t)(ws+3472);
	i2 v2541 = *(i2*)(intptr_t)v2540;
	i8 v2542 = (i8)(intptr_t)(ws+3480);
	i8 v2543 = *(i8*)(intptr_t)v2542;
	*(i2*)(intptr_t)v2543 = v2541;

	i8 v2544 = (i8)(intptr_t)(ws+3474);
	i2 v2545 = *(i2*)(intptr_t)v2544;
	i8 v2546 = (i8)(intptr_t)(ws+3480);
	i8 v2547 = *(i8*)(intptr_t)v2546;
	i8 v2548 = v2547+(+2);
	*(i2*)(intptr_t)v2548 = v2545;

	i8 v2549 = (i8)(intptr_t)(ws+3476);
	i2 v2550 = *(i2*)(intptr_t)v2549;
	i8 v2551 = (i8)(intptr_t)(ws+3480);
	i8 v2552 = *(i8*)(intptr_t)v2551;
	i8 v2553 = v2552+(+4);
	*(i2*)(intptr_t)v2553 = v2550;

	i8 v2554 = (i8)(intptr_t)(ws+3478);
	i1 v2555 = *(i1*)(intptr_t)v2554;
	i8 v2556 = (i8)(intptr_t)(ws+3480);
	i8 v2557 = *(i8*)(intptr_t)v2556;
	i8 v2558 = v2557+(+6);
	*(i1*)(intptr_t)v2558 = v2555;

}
	void f103_AllocateNewNode(void);

// MidConstant workspace at ws+3592 length ws+24
void f120_MidConstant(void) {

	i1 v2559 = (i1)+40;
	*(i1*)(intptr_t)(ws+3616) = v2559;
	i8 v2560 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2560)();

	i8 v2561 = *(i8*)(intptr_t)(ws+3624);
	i8 v2562 = (i8)(intptr_t)(ws+3608);
	*(i8*)(intptr_t)v2562 = v2561;

	i8 v2563 = (i8)(intptr_t)(ws+3608);
	i8 v2564 = *(i8*)(intptr_t)v2563;
	i8 v2565 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v2565 = v2564;

	i8 v2566 = (i8)(intptr_t)(ws+3592);
	i4 v2567 = *(i4*)(intptr_t)v2566;
	i8 v2568 = (i8)(intptr_t)(ws+3600);
	i8 v2569 = *(i8*)(intptr_t)v2568;
	*(i4*)(intptr_t)v2569 = v2567;

}
	void f103_AllocateNewNode(void);

// MidAsmstart workspace at ws+3392 length ws+16
void f122_MidAsmstart(void) {

	i1 v2593 = (i1)+18;
	*(i1*)(intptr_t)(ws+3616) = v2593;
	i8 v2594 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2594)();

	i8 v2595 = *(i8*)(intptr_t)(ws+3624);
	i8 v2596 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2596 = v2595;

	i8 v2597 = (i8)(intptr_t)(ws+3400);
	i8 v2598 = *(i8*)(intptr_t)v2597;
	i8 v2599 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2599 = v2598;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidInit workspace at ws+3480 length ws+32
void f123_MidInit(void) {

	i8 v2600 = (i8)(intptr_t)(ws+3480);
	i1 v2601 = *(i1*)(intptr_t)v2600;
	*(i1*)(intptr_t)(ws+3592) = v2601;
	i8 v2602 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2602)();

	i1 v2603 = *(i1*)(intptr_t)(ws+3593);
	i8 v2604 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2604 = v2603;

	i8 v2605 = (i8)(intptr_t)(ws+3496);
	i1 v2606 = *(i1*)(intptr_t)v2605;
	i1 v2607 = v2606+(+7);
	*(i1*)(intptr_t)(ws+3616) = v2607;
	i8 v2608 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2608)();

	i8 v2609 = *(i8*)(intptr_t)(ws+3624);
	i8 v2610 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2610 = v2609;

	i8 v2611 = (i8)(intptr_t)(ws+3504);
	i8 v2612 = *(i8*)(intptr_t)v2611;
	i8 v2613 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2613 = v2612;

	i8 v2614 = (i8)(intptr_t)(ws+3484);
	i4 v2615 = *(i4*)(intptr_t)v2614;
	i8 v2616 = (i8)(intptr_t)(ws+3488);
	i8 v2617 = *(i8*)(intptr_t)v2616;
	*(i4*)(intptr_t)v2617 = v2615;

}
	void f103_AllocateNewNode(void);

// MidAsmsymbol workspace at ws+3416 length ws+24
void f124_MidAsmsymbol(void) {

	i1 v2618 = (i1)+20;
	*(i1*)(intptr_t)(ws+3616) = v2618;
	i8 v2619 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2619)();

	i8 v2620 = *(i8*)(intptr_t)(ws+3624);
	i8 v2621 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2621 = v2620;

	i8 v2622 = (i8)(intptr_t)(ws+3432);
	i8 v2623 = *(i8*)(intptr_t)v2622;
	i8 v2624 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2624 = v2623;

	i8 v2625 = (i8)(intptr_t)(ws+3416);
	i8 v2626 = *(i8*)(intptr_t)v2625;
	i8 v2627 = (i8)(intptr_t)(ws+3424);
	i8 v2628 = *(i8*)(intptr_t)v2627;
	*(i8*)(intptr_t)v2628 = v2626;

}
	void f103_AllocateNewNode(void);

// MidAsmgroupstart workspace at ws+3520 length ws+16
void f125_MidAsmgroupstart(void) {

	i1 v2629 = (i1)+16;
	*(i1*)(intptr_t)(ws+3616) = v2629;
	i8 v2630 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2630)();

	i8 v2631 = *(i8*)(intptr_t)(ws+3624);
	i8 v2632 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v2632 = v2631;

	i8 v2633 = (i8)(intptr_t)(ws+3528);
	i8 v2634 = *(i8*)(intptr_t)v2633;
	i8 v2635 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2635 = v2634;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidWhencase workspace at ws+3416 length ws+40
void f126_MidWhencase(void) {

	i8 v2636 = (i8)(intptr_t)(ws+3416);
	i1 v2637 = *(i1*)(intptr_t)v2636;
	*(i1*)(intptr_t)(ws+3592) = v2637;
	i8 v2638 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2638)();

	i1 v2639 = *(i1*)(intptr_t)(ws+3593);
	i8 v2640 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v2640 = v2639;

	i8 v2641 = (i8)(intptr_t)(ws+3440);
	i1 v2642 = *(i1*)(intptr_t)v2641;
	i1 v2643 = v2642+(+76);
	*(i1*)(intptr_t)(ws+3616) = v2643;
	i8 v2644 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2644)();

	i8 v2645 = *(i8*)(intptr_t)(ws+3624);
	i8 v2646 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2646 = v2645;

	i8 v2647 = (i8)(intptr_t)(ws+3448);
	i8 v2648 = *(i8*)(intptr_t)v2647;
	i8 v2649 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2649 = v2648;

	i8 v2650 = (i8)(intptr_t)(ws+3420);
	i4 v2651 = *(i4*)(intptr_t)v2650;
	i8 v2652 = (i8)(intptr_t)(ws+3432);
	i8 v2653 = *(i8*)(intptr_t)v2652;
	*(i4*)(intptr_t)v2653 = v2651;

	i8 v2654 = (i8)(intptr_t)(ws+3424);
	i2 v2655 = *(i2*)(intptr_t)v2654;
	i8 v2656 = (i8)(intptr_t)(ws+3432);
	i8 v2657 = *(i8*)(intptr_t)v2656;
	i8 v2658 = v2657+(+4);
	*(i2*)(intptr_t)v2658 = v2655;

}
	void f103_AllocateNewNode(void);

// MidBand workspace at ws+3392 length ws+40
void f127_MidBand(void) {

	i1 v2659 = (i1)+54;
	*(i1*)(intptr_t)(ws+3616) = v2659;
	i8 v2660 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2660)();

	i8 v2661 = *(i8*)(intptr_t)(ws+3624);
	i8 v2662 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2662 = v2661;

	i8 v2663 = (i8)(intptr_t)(ws+3424);
	i8 v2664 = *(i8*)(intptr_t)v2663;
	i8 v2665 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2665 = v2664;

	i8 v2666 = (i8)(intptr_t)(ws+3392);
	i8 v2667 = *(i8*)(intptr_t)v2666;
	i8 v2668 = (i8)(intptr_t)(ws+3416);
	i8 v2669 = *(i8*)(intptr_t)v2668;
	i8 v2670 = v2669+(+32);
	*(i8*)(intptr_t)v2670 = v2667;

	i8 v2671 = (i8)(intptr_t)(ws+3400);
	i8 v2672 = *(i8*)(intptr_t)v2671;
	i8 v2673 = (i8)(intptr_t)(ws+3416);
	i8 v2674 = *(i8*)(intptr_t)v2673;
	i8 v2675 = v2674+(+40);
	*(i8*)(intptr_t)v2675 = v2672;

	i8 v2676 = (i8)(intptr_t)(ws+3408);
	i2 v2677 = *(i2*)(intptr_t)v2676;
	i8 v2678 = (i8)(intptr_t)(ws+3416);
	i8 v2679 = *(i8*)(intptr_t)v2678;
	*(i2*)(intptr_t)v2679 = v2677;

	i8 v2680 = (i8)(intptr_t)(ws+3410);
	i2 v2681 = *(i2*)(intptr_t)v2680;
	i8 v2682 = (i8)(intptr_t)(ws+3416);
	i8 v2683 = *(i8*)(intptr_t)v2682;
	i8 v2684 = v2683+(+2);
	*(i2*)(intptr_t)v2684 = v2681;

	i8 v2685 = (i8)(intptr_t)(ws+3412);
	i2 v2686 = *(i2*)(intptr_t)v2685;
	i8 v2687 = (i8)(intptr_t)(ws+3416);
	i8 v2688 = *(i8*)(intptr_t)v2687;
	i8 v2689 = v2688+(+4);
	*(i2*)(intptr_t)v2689 = v2686;

	i8 v2690 = (i8)(intptr_t)(ws+3414);
	i1 v2691 = *(i1*)(intptr_t)v2690;
	i8 v2692 = (i8)(intptr_t)(ws+3416);
	i8 v2693 = *(i8*)(intptr_t)v2692;
	i8 v2694 = v2693+(+6);
	*(i1*)(intptr_t)v2694 = v2691;

}
	void f103_AllocateNewNode(void);

// MidLabel workspace at ws+3472 length ws+24
void f128_MidLabel(void) {

	i1 v2695 = (i1)+26;
	*(i1*)(intptr_t)(ws+3616) = v2695;
	i8 v2696 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2696)();

	i8 v2697 = *(i8*)(intptr_t)(ws+3624);
	i8 v2698 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2698 = v2697;

	i8 v2699 = (i8)(intptr_t)(ws+3488);
	i8 v2700 = *(i8*)(intptr_t)v2699;
	i8 v2701 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2701 = v2700;

	i8 v2702 = (i8)(intptr_t)(ws+3472);
	i2 v2703 = *(i2*)(intptr_t)v2702;
	i8 v2704 = (i8)(intptr_t)(ws+3480);
	i8 v2705 = *(i8*)(intptr_t)v2704;
	*(i2*)(intptr_t)v2705 = v2703;

}
	void f103_AllocateNewNode(void);

// MidAsmend workspace at ws+3392 length ws+16
void f129_MidAsmend(void) {

	i1 v2706 = (i1)+23;
	*(i1*)(intptr_t)(ws+3616) = v2706;
	i8 v2707 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2707)();

	i8 v2708 = *(i8*)(intptr_t)(ws+3624);
	i8 v2709 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2709 = v2708;

	i8 v2710 = (i8)(intptr_t)(ws+3400);
	i8 v2711 = *(i8*)(intptr_t)v2710;
	i8 v2712 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2712 = v2711;

}
	void f103_AllocateNewNode(void);

// MidEndfile workspace at ws+3264 length ws+16
void f130_MidEndfile(void) {

	i1 v2713 = (i1)+3;
	*(i1*)(intptr_t)(ws+3616) = v2713;
	i8 v2714 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2714)();

	i8 v2715 = *(i8*)(intptr_t)(ws+3624);
	i8 v2716 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v2716 = v2715;

	i8 v2717 = (i8)(intptr_t)(ws+3272);
	i8 v2718 = *(i8*)(intptr_t)v2717;
	i8 v2719 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v2719 = v2718;

}
	void f103_AllocateNewNode(void);

// MidAddress workspace at ws+3488 length ws+32
void f131_MidAddress(void) {

	i1 v2720 = (i1)+42;
	*(i1*)(intptr_t)(ws+3616) = v2720;
	i8 v2721 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2721)();

	i8 v2722 = *(i8*)(intptr_t)(ws+3624);
	i8 v2723 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v2723 = v2722;

	i8 v2724 = (i8)(intptr_t)(ws+3512);
	i8 v2725 = *(i8*)(intptr_t)v2724;
	i8 v2726 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2726 = v2725;

	i8 v2727 = (i8)(intptr_t)(ws+3488);
	i8 v2728 = *(i8*)(intptr_t)v2727;
	i8 v2729 = (i8)(intptr_t)(ws+3504);
	i8 v2730 = *(i8*)(intptr_t)v2729;
	*(i8*)(intptr_t)v2730 = v2728;

	i8 v2731 = (i8)(intptr_t)(ws+3496);
	i2 v2732 = *(i2*)(intptr_t)v2731;
	i8 v2733 = (i8)(intptr_t)(ws+3504);
	i8 v2734 = *(i8*)(intptr_t)v2733;
	i8 v2735 = v2734+(+8);
	*(i2*)(intptr_t)v2735 = v2732;

}
	void f103_AllocateNewNode(void);

// MidAsmvalue workspace at ws+3416 length ws+24
void f132_MidAsmvalue(void) {

	i1 v2736 = (i1)+22;
	*(i1*)(intptr_t)(ws+3616) = v2736;
	i8 v2737 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2737)();

	i8 v2738 = *(i8*)(intptr_t)(ws+3624);
	i8 v2739 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2739 = v2738;

	i8 v2740 = (i8)(intptr_t)(ws+3432);
	i8 v2741 = *(i8*)(intptr_t)v2740;
	i8 v2742 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2742 = v2741;

	i8 v2743 = (i8)(intptr_t)(ws+3416);
	i4 v2744 = *(i4*)(intptr_t)v2743;
	i8 v2745 = (i8)(intptr_t)(ws+3424);
	i8 v2746 = *(i8*)(intptr_t)v2745;
	*(i4*)(intptr_t)v2746 = v2744;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidStore workspace at ws+3488 length ws+48
void f133_MidStore(void) {

	i8 v2747 = (i8)(intptr_t)(ws+3488);
	i1 v2748 = *(i1*)(intptr_t)v2747;
	*(i1*)(intptr_t)(ws+3592) = v2748;
	i8 v2749 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v2749)();

	i1 v2750 = *(i1*)(intptr_t)(ws+3593);
	i8 v2751 = (i8)(intptr_t)(ws+3520);
	*(i1*)(intptr_t)v2751 = v2750;

	i8 v2752 = (i8)(intptr_t)(ws+3520);
	i1 v2753 = *(i1*)(intptr_t)v2752;
	i1 v2754 = v2753+(+49);
	*(i1*)(intptr_t)(ws+3616) = v2754;
	i8 v2755 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2755)();

	i8 v2756 = *(i8*)(intptr_t)(ws+3624);
	i8 v2757 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v2757 = v2756;

	i8 v2758 = (i8)(intptr_t)(ws+3528);
	i8 v2759 = *(i8*)(intptr_t)v2758;
	i8 v2760 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v2760 = v2759;

	i8 v2761 = (i8)(intptr_t)(ws+3496);
	i8 v2762 = *(i8*)(intptr_t)v2761;
	i8 v2763 = (i8)(intptr_t)(ws+3512);
	i8 v2764 = *(i8*)(intptr_t)v2763;
	i8 v2765 = v2764+(+32);
	*(i8*)(intptr_t)v2765 = v2762;

	i8 v2766 = (i8)(intptr_t)(ws+3504);
	i8 v2767 = *(i8*)(intptr_t)v2766;
	i8 v2768 = (i8)(intptr_t)(ws+3512);
	i8 v2769 = *(i8*)(intptr_t)v2768;
	i8 v2770 = v2769+(+40);
	*(i8*)(intptr_t)v2770 = v2767;

}
	void f103_AllocateNewNode(void);

// MidSubref workspace at ws+3424 length ws+24
void f135_MidSubref(void) {

	i1 v2795 = (i1)+43;
	*(i1*)(intptr_t)(ws+3616) = v2795;
	i8 v2796 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2796)();

	i8 v2797 = *(i8*)(intptr_t)(ws+3624);
	i8 v2798 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v2798 = v2797;

	i8 v2799 = (i8)(intptr_t)(ws+3440);
	i8 v2800 = *(i8*)(intptr_t)v2799;
	i8 v2801 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2801 = v2800;

	i8 v2802 = (i8)(intptr_t)(ws+3424);
	i8 v2803 = *(i8*)(intptr_t)v2802;
	i8 v2804 = (i8)(intptr_t)(ws+3432);
	i8 v2805 = *(i8*)(intptr_t)v2804;
	*(i8*)(intptr_t)v2805 = v2803;

}
	void f103_AllocateNewNode(void);

// MidStartsub workspace at ws+3408 length ws+24
void f136_MidStartsub(void) {

	i1 v2806 = (i1)+4;
	*(i1*)(intptr_t)(ws+3616) = v2806;
	i8 v2807 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2807)();

	i8 v2808 = *(i8*)(intptr_t)(ws+3624);
	i8 v2809 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2809 = v2808;

	i8 v2810 = (i8)(intptr_t)(ws+3424);
	i8 v2811 = *(i8*)(intptr_t)v2810;
	i8 v2812 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2812 = v2811;

	i8 v2813 = (i8)(intptr_t)(ws+3408);
	i8 v2814 = *(i8*)(intptr_t)v2813;
	i8 v2815 = (i8)(intptr_t)(ws+3416);
	i8 v2816 = *(i8*)(intptr_t)v2815;
	*(i8*)(intptr_t)v2816 = v2814;

}
	void f103_AllocateNewNode(void);

// MidInitaddress workspace at ws+3448 length ws+32
void f137_MidInitaddress(void) {

	i1 v2817 = (i1)+13;
	*(i1*)(intptr_t)(ws+3616) = v2817;
	i8 v2818 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2818)();

	i8 v2819 = *(i8*)(intptr_t)(ws+3624);
	i8 v2820 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v2820 = v2819;

	i8 v2821 = (i8)(intptr_t)(ws+3472);
	i8 v2822 = *(i8*)(intptr_t)v2821;
	i8 v2823 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2823 = v2822;

	i8 v2824 = (i8)(intptr_t)(ws+3448);
	i8 v2825 = *(i8*)(intptr_t)v2824;
	i8 v2826 = (i8)(intptr_t)(ws+3464);
	i8 v2827 = *(i8*)(intptr_t)v2826;
	*(i8*)(intptr_t)v2827 = v2825;

	i8 v2828 = (i8)(intptr_t)(ws+3456);
	i2 v2829 = *(i2*)(intptr_t)v2828;
	i8 v2830 = (i8)(intptr_t)(ws+3464);
	i8 v2831 = *(i8*)(intptr_t)v2830;
	i8 v2832 = v2831+(+8);
	*(i2*)(intptr_t)v2832 = v2829;

}
	void f103_AllocateNewNode(void);

// MidStartinit workspace at ws+3408 length ws+24
void f140_MidStartinit(void) {

	i1 v2876 = (i1)+6;
	*(i1*)(intptr_t)(ws+3616) = v2876;
	i8 v2877 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2877)();

	i8 v2878 = *(i8*)(intptr_t)(ws+3624);
	i8 v2879 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2879 = v2878;

	i8 v2880 = (i8)(intptr_t)(ws+3424);
	i8 v2881 = *(i8*)(intptr_t)v2880;
	i8 v2882 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2882 = v2881;

	i8 v2883 = (i8)(intptr_t)(ws+3408);
	i8 v2884 = *(i8*)(intptr_t)v2883;
	i8 v2885 = (i8)(intptr_t)(ws+3416);
	i8 v2886 = *(i8*)(intptr_t)v2885;
	*(i8*)(intptr_t)v2886 = v2884;

}
	void f103_AllocateNewNode(void);

// MidAsmsubref workspace at ws+3416 length ws+24
void f144_MidAsmsubref(void) {

	i1 v2959 = (i1)+21;
	*(i1*)(intptr_t)(ws+3616) = v2959;
	i8 v2960 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v2960)();

	i8 v2961 = *(i8*)(intptr_t)(ws+3624);
	i8 v2962 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2962 = v2961;

	i8 v2963 = (i8)(intptr_t)(ws+3432);
	i8 v2964 = *(i8*)(intptr_t)v2963;
	i8 v2965 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2965 = v2964;

	i8 v2966 = (i8)(intptr_t)(ws+3416);
	i8 v2967 = *(i8*)(intptr_t)v2966;
	i8 v2968 = (i8)(intptr_t)(ws+3424);
	i8 v2969 = *(i8*)(intptr_t)v2968;
	*(i8*)(intptr_t)v2969 = v2967;

}
	void f103_AllocateNewNode(void);

// MidAsmgroupend workspace at ws+3520 length ws+16
void f149_MidAsmgroupend(void) {

	i1 v3066 = (i1)+17;
	*(i1*)(intptr_t)(ws+3616) = v3066;
	i8 v3067 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3067)();

	i8 v3068 = *(i8*)(intptr_t)(ws+3624);
	i8 v3069 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3069 = v3068;

	i8 v3070 = (i8)(intptr_t)(ws+3528);
	i8 v3071 = *(i8*)(intptr_t)v3070;
	i8 v3072 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3072 = v3071;

}
	void f103_AllocateNewNode(void);

// MidAsmtext workspace at ws+3392 length ws+24
void f150_MidAsmtext(void) {

	i1 v3073 = (i1)+19;
	*(i1*)(intptr_t)(ws+3616) = v3073;
	i8 v3074 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3074)();

	i8 v3075 = *(i8*)(intptr_t)(ws+3624);
	i8 v3076 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3076 = v3075;

	i8 v3077 = (i8)(intptr_t)(ws+3408);
	i8 v3078 = *(i8*)(intptr_t)v3077;
	i8 v3079 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3079 = v3078;

	i8 v3080 = (i8)(intptr_t)(ws+3392);
	i8 v3081 = *(i8*)(intptr_t)v3080;
	i8 v3082 = (i8)(intptr_t)(ws+3400);
	i8 v3083 = *(i8*)(intptr_t)v3082;
	*(i8*)(intptr_t)v3083 = v3081;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidStartcase workspace at ws+3416 length ws+40
void f152_MidStartcase(void) {

	i8 v3108 = (i8)(intptr_t)(ws+3416);
	i1 v3109 = *(i1*)(intptr_t)v3108;
	*(i1*)(intptr_t)(ws+3592) = v3109;
	i8 v3110 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3110)();

	i1 v3111 = *(i1*)(intptr_t)(ws+3593);
	i8 v3112 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v3112 = v3111;

	i8 v3113 = (i8)(intptr_t)(ws+3440);
	i1 v3114 = *(i1*)(intptr_t)v3113;
	i1 v3115 = v3114+(+71);
	*(i1*)(intptr_t)(ws+3616) = v3115;
	i8 v3116 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3116)();

	i8 v3117 = *(i8*)(intptr_t)(ws+3624);
	i8 v3118 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3118 = v3117;

	i8 v3119 = (i8)(intptr_t)(ws+3448);
	i8 v3120 = *(i8*)(intptr_t)v3119;
	i8 v3121 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v3121 = v3120;

	i8 v3122 = (i8)(intptr_t)(ws+3424);
	i8 v3123 = *(i8*)(intptr_t)v3122;
	i8 v3124 = (i8)(intptr_t)(ws+3432);
	i8 v3125 = *(i8*)(intptr_t)v3124;
	i8 v3126 = v3125+(+32);
	*(i8*)(intptr_t)v3126 = v3123;

}
	void f103_AllocateNewNode(void);

// MidReturn workspace at ws+3392 length ws+16
void f153_MidReturn(void) {

	i1 v3127 = (i1)+28;
	*(i1*)(intptr_t)(ws+3616) = v3127;
	i8 v3128 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3128)();

	i8 v3129 = *(i8*)(intptr_t)(ws+3624);
	i8 v3130 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3130 = v3129;

	i8 v3131 = (i8)(intptr_t)(ws+3400);
	i8 v3132 = *(i8*)(intptr_t)v3131;
	i8 v3133 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3133 = v3132;

}
	void f103_AllocateNewNode(void);

// MidEndinit workspace at ws+3392 length ws+16
void f155_MidEndinit(void) {

	i1 v3157 = (i1)+15;
	*(i1*)(intptr_t)(ws+3616) = v3157;
	i8 v3158 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3158)();

	i8 v3159 = *(i8*)(intptr_t)(ws+3624);
	i8 v3160 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3160 = v3159;

	i8 v3161 = (i8)(intptr_t)(ws+3400);
	i8 v3162 = *(i8*)(intptr_t)v3161;
	i8 v3163 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3163 = v3162;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidPoparg workspace at ws+3488 length ws+56
void f156_MidPoparg(void) {

	i8 v3164 = (i8)(intptr_t)(ws+3488);
	i1 v3165 = *(i1*)(intptr_t)v3164;
	*(i1*)(intptr_t)(ws+3592) = v3165;
	i8 v3166 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3166)();

	i1 v3167 = *(i1*)(intptr_t)(ws+3593);
	i8 v3168 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v3168 = v3167;

	i8 v3169 = (i8)(intptr_t)(ws+3528);
	i1 v3170 = *(i1*)(intptr_t)v3169;
	i1 v3171 = v3170+(+35);
	*(i1*)(intptr_t)(ws+3616) = v3171;
	i8 v3172 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3172)();

	i8 v3173 = *(i8*)(intptr_t)(ws+3624);
	i8 v3174 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v3174 = v3173;

	i8 v3175 = (i8)(intptr_t)(ws+3536);
	i8 v3176 = *(i8*)(intptr_t)v3175;
	i8 v3177 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3177 = v3176;

	i8 v3178 = (i8)(intptr_t)(ws+3496);
	i8 v3179 = *(i8*)(intptr_t)v3178;
	i8 v3180 = (i8)(intptr_t)(ws+3520);
	i8 v3181 = *(i8*)(intptr_t)v3180;
	*(i8*)(intptr_t)v3181 = v3179;

	i8 v3182 = (i8)(intptr_t)(ws+3504);
	i8 v3183 = *(i8*)(intptr_t)v3182;
	i8 v3184 = (i8)(intptr_t)(ws+3520);
	i8 v3185 = *(i8*)(intptr_t)v3184;
	i8 v3186 = v3185+(+8);
	*(i8*)(intptr_t)v3186 = v3183;

	i8 v3187 = (i8)(intptr_t)(ws+3512);
	i1 v3188 = *(i1*)(intptr_t)v3187;
	i8 v3189 = (i8)(intptr_t)(ws+3520);
	i8 v3190 = *(i8*)(intptr_t)v3189;
	i8 v3191 = v3190+(+16);
	*(i1*)(intptr_t)v3191 = v3188;

}
	void f103_AllocateNewNode(void);

// MidBor workspace at ws+3392 length ws+40
void f157_MidBor(void) {

	i1 v3192 = (i1)+55;
	*(i1*)(intptr_t)(ws+3616) = v3192;
	i8 v3193 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3193)();

	i8 v3194 = *(i8*)(intptr_t)(ws+3624);
	i8 v3195 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3195 = v3194;

	i8 v3196 = (i8)(intptr_t)(ws+3424);
	i8 v3197 = *(i8*)(intptr_t)v3196;
	i8 v3198 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3198 = v3197;

	i8 v3199 = (i8)(intptr_t)(ws+3392);
	i8 v3200 = *(i8*)(intptr_t)v3199;
	i8 v3201 = (i8)(intptr_t)(ws+3416);
	i8 v3202 = *(i8*)(intptr_t)v3201;
	i8 v3203 = v3202+(+32);
	*(i8*)(intptr_t)v3203 = v3200;

	i8 v3204 = (i8)(intptr_t)(ws+3400);
	i8 v3205 = *(i8*)(intptr_t)v3204;
	i8 v3206 = (i8)(intptr_t)(ws+3416);
	i8 v3207 = *(i8*)(intptr_t)v3206;
	i8 v3208 = v3207+(+40);
	*(i8*)(intptr_t)v3208 = v3205;

	i8 v3209 = (i8)(intptr_t)(ws+3408);
	i2 v3210 = *(i2*)(intptr_t)v3209;
	i8 v3211 = (i8)(intptr_t)(ws+3416);
	i8 v3212 = *(i8*)(intptr_t)v3211;
	*(i2*)(intptr_t)v3212 = v3210;

	i8 v3213 = (i8)(intptr_t)(ws+3410);
	i2 v3214 = *(i2*)(intptr_t)v3213;
	i8 v3215 = (i8)(intptr_t)(ws+3416);
	i8 v3216 = *(i8*)(intptr_t)v3215;
	i8 v3217 = v3216+(+2);
	*(i2*)(intptr_t)v3217 = v3214;

	i8 v3218 = (i8)(intptr_t)(ws+3412);
	i2 v3219 = *(i2*)(intptr_t)v3218;
	i8 v3220 = (i8)(intptr_t)(ws+3416);
	i8 v3221 = *(i8*)(intptr_t)v3220;
	i8 v3222 = v3221+(+4);
	*(i2*)(intptr_t)v3222 = v3219;

	i8 v3223 = (i8)(intptr_t)(ws+3414);
	i1 v3224 = *(i1*)(intptr_t)v3223;
	i8 v3225 = (i8)(intptr_t)(ws+3416);
	i8 v3226 = *(i8*)(intptr_t)v3225;
	i8 v3227 = v3226+(+6);
	*(i1*)(intptr_t)v3227 = v3224;

}
	void f103_AllocateNewNode(void);

// MidEndsub workspace at ws+3408 length ws+24
void f158_MidEndsub(void) {

	i1 v3228 = (i1)+5;
	*(i1*)(intptr_t)(ws+3616) = v3228;
	i8 v3229 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3229)();

	i8 v3230 = *(i8*)(intptr_t)(ws+3624);
	i8 v3231 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3231 = v3230;

	i8 v3232 = (i8)(intptr_t)(ws+3424);
	i8 v3233 = *(i8*)(intptr_t)v3232;
	i8 v3234 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3234 = v3233;

	i8 v3235 = (i8)(intptr_t)(ws+3408);
	i8 v3236 = *(i8*)(intptr_t)v3235;
	i8 v3237 = (i8)(intptr_t)(ws+3416);
	i8 v3238 = *(i8*)(intptr_t)v3237;
	*(i8*)(intptr_t)v3238 = v3236;

}
	void f103_AllocateNewNode(void);

// MidPair workspace at ws+3392 length ws+32
void f159_MidPair(void) {

	i1 v3239 = (i1)+25;
	*(i1*)(intptr_t)(ws+3616) = v3239;
	i8 v3240 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3240)();

	i8 v3241 = *(i8*)(intptr_t)(ws+3624);
	i8 v3242 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3242 = v3241;

	i8 v3243 = (i8)(intptr_t)(ws+3416);
	i8 v3244 = *(i8*)(intptr_t)v3243;
	i8 v3245 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3245 = v3244;

	i8 v3246 = (i8)(intptr_t)(ws+3392);
	i8 v3247 = *(i8*)(intptr_t)v3246;
	i8 v3248 = (i8)(intptr_t)(ws+3408);
	i8 v3249 = *(i8*)(intptr_t)v3248;
	i8 v3250 = v3249+(+32);
	*(i8*)(intptr_t)v3250 = v3247;

	i8 v3251 = (i8)(intptr_t)(ws+3400);
	i8 v3252 = *(i8*)(intptr_t)v3251;
	i8 v3253 = (i8)(intptr_t)(ws+3408);
	i8 v3254 = *(i8*)(intptr_t)v3253;
	i8 v3255 = v3254+(+40);
	*(i8*)(intptr_t)v3255 = v3252;

}
	void f103_AllocateNewNode(void);

// MidStartfile workspace at ws+3264 length ws+16
void f160_MidStartfile(void) {

	i1 v3256 = (i1)+2;
	*(i1*)(intptr_t)(ws+3616) = v3256;
	i8 v3257 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3257)();

	i8 v3258 = *(i8*)(intptr_t)(ws+3624);
	i8 v3259 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v3259 = v3258;

	i8 v3260 = (i8)(intptr_t)(ws+3272);
	i8 v3261 = *(i8*)(intptr_t)v3260;
	i8 v3262 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v3262 = v3261;

}
	void f103_AllocateNewNode(void);

// MidInitsubref workspace at ws+3448 length ws+24
void f161_MidInitsubref(void) {

	i1 v3263 = (i1)+14;
	*(i1*)(intptr_t)(ws+3616) = v3263;
	i8 v3264 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3264)();

	i8 v3265 = *(i8*)(intptr_t)(ws+3624);
	i8 v3266 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v3266 = v3265;

	i8 v3267 = (i8)(intptr_t)(ws+3464);
	i8 v3268 = *(i8*)(intptr_t)v3267;
	i8 v3269 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v3269 = v3268;

	i8 v3270 = (i8)(intptr_t)(ws+3448);
	i8 v3271 = *(i8*)(intptr_t)v3270;
	i8 v3272 = (i8)(intptr_t)(ws+3456);
	i8 v3273 = *(i8*)(intptr_t)v3272;
	*(i8*)(intptr_t)v3273 = v3271;

}
	void f103_AllocateNewNode(void);

// MidString workspace at ws+3400 length ws+24
void f162_MidString(void) {

	i1 v3274 = (i1)+41;
	*(i1*)(intptr_t)(ws+3616) = v3274;
	i8 v3275 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3275)();

	i8 v3276 = *(i8*)(intptr_t)(ws+3624);
	i8 v3277 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3277 = v3276;

	i8 v3278 = (i8)(intptr_t)(ws+3416);
	i8 v3279 = *(i8*)(intptr_t)v3278;
	i8 v3280 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3280 = v3279;

	i8 v3281 = (i8)(intptr_t)(ws+3400);
	i8 v3282 = *(i8*)(intptr_t)v3281;
	i8 v3283 = (i8)(intptr_t)(ws+3408);
	i8 v3284 = *(i8*)(intptr_t)v3283;
	*(i8*)(intptr_t)v3284 = v3282;

}
	void f103_AllocateNewNode(void);

// MidEnd workspace at ws+3416 length ws+16
void f163_MidEnd(void) {

	i1 v3285 = (i1)+1;
	*(i1*)(intptr_t)(ws+3616) = v3285;
	i8 v3286 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3286)();

	i8 v3287 = *(i8*)(intptr_t)(ws+3624);
	i8 v3288 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3288 = v3287;

	i8 v3289 = (i8)(intptr_t)(ws+3424);
	i8 v3290 = *(i8*)(intptr_t)v3289;
	i8 v3291 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3291 = v3290;

}
	void f7_MemSet(void);
	void f69_InternalAlloc(void);

// AllocateNewNode workspace at ws+3616 length ws+24
void f103_AllocateNewNode(void) {

	i8 v3304 = (i8)(intptr_t)(ws+928);
	i8 v3305 = *(i8*)(intptr_t)v3304;
	i8 v3306 = (i8)+0;
	if (v3305==v3306) goto c02_0248; else goto c02_0247;

c02_0247:;

	i8 v3307 = (i8)(intptr_t)(ws+928);
	i8 v3308 = *(i8*)(intptr_t)v3307;
	i8 v3309 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v3309 = v3308;

	i8 v3310 = (i8)(intptr_t)(ws+928);
	i8 v3311 = *(i8*)(intptr_t)v3310;
	i8 v3312 = v3311+(+32);
	i8 v3313 = *(i8*)(intptr_t)v3312;
	i8 v3314 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3314 = v3313;

	i8 v3315 = (i8)(intptr_t)(ws+3624);
	i8 v3316 = *(i8*)(intptr_t)v3315;
	*(i8*)(intptr_t)(ws+3640) = v3316;
	i1 v3317 = (i1)+0;
	*(i1*)(intptr_t)(ws+3648) = v3317;
	i8 v3318 = (i8)+49;
	*(i8*)(intptr_t)(ws+3656) = v3318;
	i8 v3319 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(void))(intptr_t)v3319)();

	goto c02_0244;

c02_0248:;

	i8 v3320 = (i8)+49;
	*(i8*)(intptr_t)(ws+3640) = v3320;
	i8 v3321 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v3321)();

	i8 v3322 = *(i8*)(intptr_t)(ws+3648);
	i8 v3323 = (i8)(intptr_t)(ws+3632);
	*(i8*)(intptr_t)v3323 = v3322;

	i8 v3324 = (i8)(intptr_t)(ws+3632);
	i8 v3325 = *(i8*)(intptr_t)v3324;
	i8 v3326 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v3326 = v3325;

c02_0244:;

	i8 v3327 = (i8)(intptr_t)(ws+3616);
	i1 v3328 = *(i1*)(intptr_t)v3327;
	i8 v3329 = (i8)(intptr_t)(ws+3624);
	i8 v3330 = *(i8*)(intptr_t)v3329;
	i8 v3331 = v3330+(+48);
	*(i1*)(intptr_t)v3331 = v3328;

}

// FreeNode workspace at ws+3624 length ws+8
void f165_FreeNode(void) {

	i8 v3332 = (i8)(intptr_t)(ws+928);
	i8 v3333 = *(i8*)(intptr_t)v3332;
	i8 v3334 = (i8)(intptr_t)(ws+3624);
	i8 v3335 = *(i8*)(intptr_t)v3334;
	i8 v3336 = v3335+(+32);
	*(i8*)(intptr_t)v3336 = v3333;

	i8 v3337 = (i8)(intptr_t)(ws+3624);
	i8 v3338 = *(i8*)(intptr_t)v3337;
	i8 v3339 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3339 = v3338;

}
	void f34_Free(void);

// PurgeAllFreeNodes workspace at ws+3672 length ws+8
void f73_PurgeAllFreeNodes(void) {

c02_0249:;

	i8 v3340 = (i8)(intptr_t)(ws+928);
	i8 v3341 = *(i8*)(intptr_t)v3340;
	i8 v3342 = (i8)+0;
	if (v3341==v3342) goto c02_024e; else goto c02_024d;

c02_024d:;

	i8 v3343 = (i8)(intptr_t)(ws+928);
	i8 v3344 = *(i8*)(intptr_t)v3343;
	i8 v3345 = (i8)(intptr_t)(ws+3672);
	*(i8*)(intptr_t)v3345 = v3344;

	i8 v3346 = (i8)(intptr_t)(ws+928);
	i8 v3347 = *(i8*)(intptr_t)v3346;
	i8 v3348 = v3347+(+32);
	i8 v3349 = *(i8*)(intptr_t)v3348;
	i8 v3350 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3350 = v3349;

	i8 v3351 = (i8)(intptr_t)(ws+3672);
	i8 v3352 = *(i8*)(intptr_t)v3351;
	*(i8*)(intptr_t)(ws+3680) = v3352;
	i8 v3353 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v3353)();

	goto c02_0249;

c02_024e:;

}

// NodeWidth workspace at ws+3456 length ws+9
void f166_NodeWidth(void) {

	i1 v3354 = (i1)+0;
	i8 v3355 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3355 = v3354;

	i8 v3356 = (i8)(intptr_t)(ws+3456);
	i8 v3357 = *(i8*)(intptr_t)v3356;
	i8 v3358 = v3357+(+24);
	i8 v3359 = *(i8*)(intptr_t)v3358;
	i8 v3360 = (i8)+0;
	if (v3359==v3360) goto c02_0253; else goto c02_0252;

c02_0252:;

	i8 v3361 = (i8)(intptr_t)(ws+3456);
	i8 v3362 = *(i8*)(intptr_t)v3361;
	i8 v3363 = v3362+(+24);
	i8 v3364 = *(i8*)(intptr_t)v3363;
	i8 v3365 = v3364+(+48);
	i2 v3366 = *(i2*)(intptr_t)v3365;
	i1 v3367 = v3366;
	i8 v3368 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3368 = v3367;

c02_0253:;

c02_024f:;

}
const i1 c02_s00f2[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f76_SimpleError(void);

// midcodec_i_bad_fold workspace at ws+3632 length ws+0
void f167_midcodec_i_bad_fold(void) {

	i8 v3369 = (i8)(intptr_t)c02_s00f2;
	*(i8*)(intptr_t)(ws+3648) = v3369;
	i8 v3370 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v3370)();

}
	void f167_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3472 length ws+24
void f168_FoldConstant1(void) {

	i8 v3371 = (i8)(intptr_t)(ws+3480);
	i8 v3372 = *(i8*)(intptr_t)v3371;
	i4 v3373 = *(i4*)(intptr_t)v3372;
	i8 v3374 = (i8)(intptr_t)(ws+3492);
	*(i4*)(intptr_t)v3374 = v3373;

	i8 v3375 = (i8)(intptr_t)(ws+3472);
	i1 v3376 = *(i1*)(intptr_t)v3375;

	if (v3376 != +106) goto c02_0255;

	i8 v3377 = (i8)(intptr_t)(ws+3492);
	i4 v3378 = *(i4*)(intptr_t)v3377;
	i4 v3379 = ~v3378;
	i8 v3380 = (i8)(intptr_t)(ws+3488);
	*(i4*)(intptr_t)v3380 = v3379;

	goto c02_0254;

c02_0255:;

	if (v3376 != +111) goto c02_0256;

	i8 v3381 = (i8)(intptr_t)(ws+3492);
	i4 v3382 = *(i4*)(intptr_t)v3381;
	i4 v3383 = -v3382;
	i8 v3384 = (i8)(intptr_t)(ws+3488);
	*(i4*)(intptr_t)v3384 = v3383;

	goto c02_0254;

c02_0256:;

	i8 v3385 = (i8)(intptr_t)(f167_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3385)();

c02_0254:;


}
	void f167_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3592 length ws+36
void f169_FoldConstant2(void) {

	i8 v3386 = (i8)(intptr_t)(ws+3600);
	i8 v3387 = *(i8*)(intptr_t)v3386;
	i4 v3388 = *(i4*)(intptr_t)v3387;
	i8 v3389 = (i8)(intptr_t)(ws+3620);
	*(i4*)(intptr_t)v3389 = v3388;

	i8 v3390 = (i8)(intptr_t)(ws+3608);
	i8 v3391 = *(i8*)(intptr_t)v3390;
	i4 v3392 = *(i4*)(intptr_t)v3391;
	i8 v3393 = (i8)(intptr_t)(ws+3624);
	*(i4*)(intptr_t)v3393 = v3392;

	i8 v3394 = (i8)(intptr_t)(ws+3592);
	i1 v3395 = *(i1*)(intptr_t)v3394;

	if (v3395 != +156) goto c02_0258;

	i8 v3396 = (i8)(intptr_t)(ws+3620);
	i4 v3397 = *(i4*)(intptr_t)v3396;
	i8 v3398 = (i8)(intptr_t)(ws+3624);
	i4 v3399 = *(i4*)(intptr_t)v3398;
	i4 v3400 = v3397+v3399;
	i8 v3401 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3401 = v3400;

	goto c02_0257;

c02_0258:;

	if (v3395 != +131) goto c02_0259;

	i8 v3402 = (i8)(intptr_t)(ws+3620);
	i4 v3403 = *(i4*)(intptr_t)v3402;
	i8 v3404 = (i8)(intptr_t)(ws+3624);
	i4 v3405 = *(i4*)(intptr_t)v3404;
	i4 v3406 = v3403-v3405;
	i8 v3407 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3407 = v3406;

	goto c02_0257;

c02_0259:;

	if (v3395 != +161) goto c02_025a;

	i8 v3408 = (i8)(intptr_t)(ws+3620);
	i4 v3409 = *(i4*)(intptr_t)v3408;
	i8 v3410 = (i8)(intptr_t)(ws+3624);
	i4 v3411 = *(i4*)(intptr_t)v3410;
	i4 v3412 = v3409*v3411;
	i8 v3413 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3413 = v3412;

	goto c02_0257;

c02_025a:;

	if (v3395 != +136) goto c02_025b;

	i8 v3414 = (i8)(intptr_t)(ws+3620);
	i4 v3415 = *(i4*)(intptr_t)v3414;
	i8 v3416 = (i8)(intptr_t)(ws+3624);
	i4 v3417 = *(i4*)(intptr_t)v3416;
	i4 v3418 = v3415/v3417;
	i8 v3419 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3419 = v3418;

	goto c02_0257;

c02_025b:;

	if (v3395 != +141) goto c02_025c;

	i8 v3420 = (i8)(intptr_t)(ws+3620);
	i4 v3421 = *(i4*)(intptr_t)v3420;
	i8 v3422 = (i8)(intptr_t)(ws+3624);
	i4 v3423 = *(i4*)(intptr_t)v3422;
	i4 v3424 = (s4)v3421/(s4)v3423;
	i8 v3425 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3425 = v3424;

	goto c02_0257;

c02_025c:;

	if (v3395 != +146) goto c02_025d;

	i8 v3426 = (i8)(intptr_t)(ws+3620);
	i4 v3427 = *(i4*)(intptr_t)v3426;
	i8 v3428 = (i8)(intptr_t)(ws+3624);
	i4 v3429 = *(i4*)(intptr_t)v3428;
	i4 v3430 = v3427%v3429;
	i8 v3431 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3431 = v3430;

	goto c02_0257;

c02_025d:;

	if (v3395 != +151) goto c02_025e;

	i8 v3432 = (i8)(intptr_t)(ws+3620);
	i4 v3433 = *(i4*)(intptr_t)v3432;
	i8 v3434 = (i8)(intptr_t)(ws+3624);
	i4 v3435 = *(i4*)(intptr_t)v3434;
	i4 v3436 = (s4)v3433%(s4)v3435;
	i8 v3437 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3437 = v3436;

	goto c02_0257;

c02_025e:;

	if (v3395 != +166) goto c02_025f;

	i8 v3438 = (i8)(intptr_t)(ws+3620);
	i4 v3439 = *(i4*)(intptr_t)v3438;
	i8 v3440 = (i8)(intptr_t)(ws+3624);
	i4 v3441 = *(i4*)(intptr_t)v3440;
	i4 v3442 = v3439&v3441;
	i8 v3443 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3443 = v3442;

	goto c02_0257;

c02_025f:;

	if (v3395 != +171) goto c02_0260;

	i8 v3444 = (i8)(intptr_t)(ws+3620);
	i4 v3445 = *(i4*)(intptr_t)v3444;
	i8 v3446 = (i8)(intptr_t)(ws+3624);
	i4 v3447 = *(i4*)(intptr_t)v3446;
	i4 v3448 = v3445|v3447;
	i8 v3449 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3449 = v3448;

	goto c02_0257;

c02_0260:;

	if (v3395 != +176) goto c02_0261;

	i8 v3450 = (i8)(intptr_t)(ws+3620);
	i4 v3451 = *(i4*)(intptr_t)v3450;
	i8 v3452 = (i8)(intptr_t)(ws+3624);
	i4 v3453 = *(i4*)(intptr_t)v3452;
	i4 v3454 = v3451^v3453;
	i8 v3455 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3455 = v3454;

	goto c02_0257;

c02_0261:;

	if (v3395 != +116) goto c02_0262;

	i8 v3456 = (i8)(intptr_t)(ws+3620);
	i4 v3457 = *(i4*)(intptr_t)v3456;
	i8 v3458 = (i8)(intptr_t)(ws+3624);
	i4 v3459 = *(i4*)(intptr_t)v3458;
	i1 v3460 = (s1)(s4)v3459;
	i4 v3461 = ((i4)v3457)<<v3460;
	i8 v3462 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3462 = v3461;

	goto c02_0257;

c02_0262:;

	if (v3395 != +121) goto c02_0263;

	i8 v3463 = (i8)(intptr_t)(ws+3620);
	i4 v3464 = *(i4*)(intptr_t)v3463;
	i8 v3465 = (i8)(intptr_t)(ws+3624);
	i4 v3466 = *(i4*)(intptr_t)v3465;
	i1 v3467 = (s1)(s4)v3466;
	i4 v3468 = ((i4)v3464)>>v3467;
	i8 v3469 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3469 = v3468;

	goto c02_0257;

c02_0263:;

	if (v3395 != +126) goto c02_0264;

	i8 v3470 = (i8)(intptr_t)(ws+3620);
	i4 v3471 = *(i4*)(intptr_t)v3470;
	i8 v3472 = (i8)(intptr_t)(ws+3624);
	i4 v3473 = *(i4*)(intptr_t)v3472;
	i1 v3474 = (s1)(s4)v3473;
	i4 v3475 = ((s4)v3471)>>v3474;
	i8 v3476 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3476 = v3475;

	goto c02_0257;

c02_0264:;

	i8 v3477 = (i8)(intptr_t)(f167_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3477)();

c02_0257:;


}
	void f168_FoldConstant1(void);
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidC1Op workspace at ws+3432 length ws+40
void f170_MidC1Op(void) {

	i8 v3478 = (i8)(intptr_t)(ws+3440);
	i8 v3479 = *(i8*)(intptr_t)v3478;
	i8 v3480 = v3479+(+48);
	i1 v3481 = *(i1*)(intptr_t)v3480;
	i1 v3482 = (i1)+40;
	if (v3481==v3482) goto c02_0268; else goto c02_0269;

c02_0268:;

	i8 v3483 = (i8)(intptr_t)(ws+3432);
	i1 v3484 = *(i1*)(intptr_t)v3483;
	*(i1*)(intptr_t)(ws+3472) = v3484;
	i8 v3485 = (i8)(intptr_t)(ws+3440);
	i8 v3486 = *(i8*)(intptr_t)v3485;
	*(i8*)(intptr_t)(ws+3480) = v3486;
	i8 v3487 = (i8)(intptr_t)(f168_FoldConstant1);

	((void(*)(void))(intptr_t)v3487)();

	i4 v3488 = *(i4*)(intptr_t)(ws+3488);
	i8 v3489 = (i8)(intptr_t)(ws+3456);
	*(i4*)(intptr_t)v3489 = v3488;

	i8 v3490 = (i8)(intptr_t)(ws+3456);
	i4 v3491 = *(i4*)(intptr_t)v3490;
	i8 v3492 = (i8)(intptr_t)(ws+3440);
	i8 v3493 = *(i8*)(intptr_t)v3492;
	*(i4*)(intptr_t)v3493 = v3491;

	i8 v3494 = (i8)(intptr_t)(ws+3440);
	i8 v3495 = *(i8*)(intptr_t)v3494;
	i8 v3496 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3496 = v3495;

	goto c02_0265;

c02_0269:;

	i8 v3497 = (i8)(intptr_t)(ws+3433);
	i1 v3498 = *(i1*)(intptr_t)v3497;
	*(i1*)(intptr_t)(ws+3592) = v3498;
	i8 v3499 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3499)();

	i1 v3500 = *(i1*)(intptr_t)(ws+3593);
	i8 v3501 = (i8)(intptr_t)(ws+3460);
	*(i1*)(intptr_t)v3501 = v3500;

	i8 v3502 = (i8)(intptr_t)(ws+3432);
	i1 v3503 = *(i1*)(intptr_t)v3502;
	i8 v3504 = (i8)(intptr_t)(ws+3460);
	i1 v3505 = *(i1*)(intptr_t)v3504;
	i1 v3506 = v3503+v3505;
	*(i1*)(intptr_t)(ws+3616) = v3506;
	i8 v3507 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3507)();

	i8 v3508 = *(i8*)(intptr_t)(ws+3624);
	i8 v3509 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v3509 = v3508;

	i8 v3510 = (i8)(intptr_t)(ws+3464);
	i8 v3511 = *(i8*)(intptr_t)v3510;
	i8 v3512 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3512 = v3511;

	i8 v3513 = (i8)(intptr_t)(ws+3440);
	i8 v3514 = *(i8*)(intptr_t)v3513;
	i8 v3515 = (i8)(intptr_t)(ws+3448);
	i8 v3516 = *(i8*)(intptr_t)v3515;
	i8 v3517 = v3516+(+32);
	*(i8*)(intptr_t)v3517 = v3514;

c02_0265:;

}

// GetPowerOfTwo workspace at ws+3592 length ws+5
void f171_GetPowerOfTwo(void) {

	i1 v3518 = (i1)+0;
	i8 v3519 = (i8)(intptr_t)(ws+3596);
	*(i1*)(intptr_t)v3519 = v3518;

	i4 v3520 = (i4)+0;
	i8 v3521 = (i8)(intptr_t)(ws+3592);
	i4 v3522 = *(i4*)(intptr_t)v3521;
	if ((s4)v3520<(s4)v3522) goto c02_0271; else goto c02_0270;

c02_0271:;

	i8 v3523 = (i8)(intptr_t)(ws+3592);
	i4 v3524 = *(i4*)(intptr_t)v3523;
	i8 v3525 = (i8)(intptr_t)(ws+3592);
	i4 v3526 = *(i4*)(intptr_t)v3525;
	i4 v3527 = v3526+(-1);
	i4 v3528 = v3524&v3527;
	i4 v3529 = (i4)+0;
	if (v3528==v3529) goto c02_026f; else goto c02_0270;

c02_026f:;

c02_0272:;

	i8 v3530 = (i8)(intptr_t)(ws+3592);
	i4 v3531 = *(i4*)(intptr_t)v3530;
	i4 v3532 = (i4)+0;
	if (v3531==v3532) goto c02_0277; else goto c02_0276;

c02_0276:;

	i8 v3533 = (i8)(intptr_t)(ws+3596);
	i1 v3534 = *(i1*)(intptr_t)v3533;
	i1 v3535 = v3534+(+1);
	i8 v3536 = (i8)(intptr_t)(ws+3596);
	*(i1*)(intptr_t)v3536 = v3535;

	i8 v3537 = (i8)(intptr_t)(ws+3592);
	i4 v3538 = *(i4*)(intptr_t)v3537;
	i1 v3539 = (i1)+1;
	i4 v3540 = ((s4)v3538)>>v3539;
	i8 v3541 = (i8)(intptr_t)(ws+3592);
	*(i4*)(intptr_t)v3541 = v3540;

	goto c02_0272;

c02_0277:;

c02_0270:;

c02_026a:;

}
	void f169_FoldConstant2(void);
	void f120_MidConstant(void);
	void f63_Discard(void);
	void f63_Discard(void);
	void f171_GetPowerOfTwo(void);
	void f63_Discard(void);
	void f120_MidConstant(void);
	void f63_Discard(void);
	void f63_Discard(void);
	void f63_Discard(void);
	void f63_Discard(void);
	void f169_FoldConstant2(void);
	void f63_Discard(void);
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidC2Op workspace at ws+3496 length ws+96
void f172_MidC2Op(void) {

	i8 v3542 = (i8)(intptr_t)(ws+3496);
	i1 v3543 = *(i1*)(intptr_t)v3542;
	i1 v3544 = (i1)+131;
	if (v3543==v3544) goto c02_027f; else goto c02_027e;

c02_027f:;

	i8 v3545 = (i8)(intptr_t)(ws+3512);
	i8 v3546 = *(i8*)(intptr_t)v3545;
	i8 v3547 = v3546+(+48);
	i1 v3548 = *(i1*)(intptr_t)v3547;
	i1 v3549 = (i1)+40;
	if (v3548==v3549) goto c02_027d; else goto c02_027e;

c02_027d:;

	i8 v3550 = (i8)(intptr_t)(ws+3512);
	i8 v3551 = *(i8*)(intptr_t)v3550;
	i4 v3552 = *(i4*)(intptr_t)v3551;
	i4 v3553 = -v3552;
	i8 v3554 = (i8)(intptr_t)(ws+3512);
	i8 v3555 = *(i8*)(intptr_t)v3554;
	*(i4*)(intptr_t)v3555 = v3553;

	i1 v3556 = (i1)+156;
	i8 v3557 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3557 = v3556;

c02_027e:;

c02_0278:;

	i8 v3558 = (i8)(intptr_t)(ws+3496);
	i1 v3559 = *(i1*)(intptr_t)v3558;
	i1 v3560 = (i1)+156;
	if (v3559<v3560) goto c02_0284; else goto c02_0283;

c02_0283:;

	i8 v3561 = (i8)(intptr_t)(ws+3504);
	i8 v3562 = *(i8*)(intptr_t)v3561;
	i8 v3563 = v3562+(+48);
	i1 v3564 = *(i1*)(intptr_t)v3563;
	i1 v3565 = (i1)+40;
	if (v3564==v3565) goto c02_0288; else goto c02_0289;

c02_0288:;

	i8 v3566 = (i8)(intptr_t)(ws+3504);
	i8 v3567 = *(i8*)(intptr_t)v3566;
	i8 v3568 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3568 = v3567;

	i8 v3569 = (i8)(intptr_t)(ws+3512);
	i8 v3570 = *(i8*)(intptr_t)v3569;
	i8 v3571 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3571 = v3570;

	i8 v3572 = (i8)(intptr_t)(ws+3528);
	i8 v3573 = *(i8*)(intptr_t)v3572;
	i8 v3574 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3574 = v3573;

c02_0289:;

c02_0285:;

	i8 v3575 = (i8)(intptr_t)(ws+3512);
	i8 v3576 = *(i8*)(intptr_t)v3575;
	i8 v3577 = v3576+(+48);
	i1 v3578 = *(i1*)(intptr_t)v3577;
	i1 v3579 = (i1)+40;
	if (v3578==v3579) goto c02_0297; else goto c02_0294;

c02_0297:;

	i8 v3580 = (i8)(intptr_t)(ws+3504);
	i8 v3581 = *(i8*)(intptr_t)v3580;
	i8 v3582 = v3581+(+48);
	i1 v3583 = *(i1*)(intptr_t)v3582;
	i8 v3584 = (i8)(intptr_t)(ws+3496);
	i1 v3585 = *(i1*)(intptr_t)v3584;
	if (v3583<v3585) goto c02_0294; else goto c02_0296;

c02_0296:;

	i8 v3586 = (i8)(intptr_t)(ws+3496);
	i1 v3587 = *(i1*)(intptr_t)v3586;
	i1 v3588 = v3587+(+4);
	i8 v3589 = (i8)(intptr_t)(ws+3504);
	i8 v3590 = *(i8*)(intptr_t)v3589;
	i8 v3591 = v3590+(+48);
	i1 v3592 = *(i1*)(intptr_t)v3591;
	if (v3588<v3592) goto c02_0294; else goto c02_0295;

c02_0295:;

	i8 v3593 = (i8)(intptr_t)(ws+3504);
	i8 v3594 = *(i8*)(intptr_t)v3593;
	i8 v3595 = v3594+(+40);
	i8 v3596 = *(i8*)(intptr_t)v3595;
	i8 v3597 = v3596+(+48);
	i1 v3598 = *(i1*)(intptr_t)v3597;
	i1 v3599 = (i1)+40;
	if (v3598==v3599) goto c02_0293; else goto c02_0294;

c02_0293:;

	i8 v3600 = (i8)(intptr_t)(ws+3496);
	i1 v3601 = *(i1*)(intptr_t)v3600;
	*(i1*)(intptr_t)(ws+3592) = v3601;
	i8 v3602 = (i8)(intptr_t)(ws+3504);
	i8 v3603 = *(i8*)(intptr_t)v3602;
	i8 v3604 = v3603+(+40);
	i8 v3605 = *(i8*)(intptr_t)v3604;
	*(i8*)(intptr_t)(ws+3600) = v3605;
	i8 v3606 = (i8)(intptr_t)(ws+3512);
	i8 v3607 = *(i8*)(intptr_t)v3606;
	*(i8*)(intptr_t)(ws+3608) = v3607;
	i8 v3608 = (i8)(intptr_t)(f169_FoldConstant2);

	((void(*)(void))(intptr_t)v3608)();

	i4 v3609 = *(i4*)(intptr_t)(ws+3616);
	i8 v3610 = (i8)(intptr_t)(ws+3536);
	*(i4*)(intptr_t)v3610 = v3609;

	i8 v3611 = (i8)(intptr_t)(ws+3536);
	i4 v3612 = *(i4*)(intptr_t)v3611;
	*(i4*)(intptr_t)(ws+3592) = v3612;
	i8 v3613 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v3613)();

	i8 v3614 = *(i8*)(intptr_t)(ws+3600);
	i8 v3615 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v3615 = v3614;

	i8 v3616 = (i8)(intptr_t)(ws+3544);
	i8 v3617 = *(i8*)(intptr_t)v3616;
	i8 v3618 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3618 = v3617;

	i8 v3619 = (i8)(intptr_t)(ws+3512);
	i8 v3620 = *(i8*)(intptr_t)v3619;
	*(i8*)(intptr_t)(ws+3592) = v3620;
	i8 v3621 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3621)();

	i8 v3622 = (i8)(intptr_t)(ws+3528);
	i8 v3623 = *(i8*)(intptr_t)v3622;
	i8 v3624 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3624 = v3623;

	i8 v3625 = (i8)(intptr_t)(ws+3504);
	i8 v3626 = *(i8*)(intptr_t)v3625;
	i8 v3627 = v3626+(+32);
	i8 v3628 = *(i8*)(intptr_t)v3627;
	i8 v3629 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3629 = v3628;

	i8 v3630 = (i8)+0;
	i8 v3631 = (i8)(intptr_t)(ws+3504);
	i8 v3632 = *(i8*)(intptr_t)v3631;
	i8 v3633 = v3632+(+32);
	*(i8*)(intptr_t)v3633 = v3630;

	i8 v3634 = (i8)(intptr_t)(ws+3504);
	i8 v3635 = *(i8*)(intptr_t)v3634;
	*(i8*)(intptr_t)(ws+3592) = v3635;
	i8 v3636 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3636)();

	i8 v3637 = (i8)(intptr_t)(ws+3528);
	i8 v3638 = *(i8*)(intptr_t)v3637;
	i8 v3639 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3639 = v3638;

c02_0294:;

c02_028a:;

c02_0284:;

c02_0280:;

	i8 v3640 = (i8)(intptr_t)(ws+3504);
	i8 v3641 = *(i8*)(intptr_t)v3640;
	i8 v3642 = v3641+(+48);
	i1 v3643 = *(i1*)(intptr_t)v3642;
	i1 v3644 = (i1)+40;
	if (v3643==v3644) goto c02_029e; else goto c02_029f;

c02_029f:;

	i8 v3645 = (i8)(intptr_t)(ws+3512);
	i8 v3646 = *(i8*)(intptr_t)v3645;
	i8 v3647 = v3646+(+48);
	i1 v3648 = *(i1*)(intptr_t)v3647;
	i1 v3649 = (i1)+40;
	if (v3648==v3649) goto c02_029d; else goto c02_029e;

c02_029d:;

	i8 v3650 = (i8)(intptr_t)(ws+3496);
	i1 v3651 = *(i1*)(intptr_t)v3650;
	i1 v3652 = (i1)+161;
	if (v3651==v3652) goto c02_02a7; else goto c02_02aa;

c02_02aa:;

	i8 v3653 = (i8)(intptr_t)(ws+3496);
	i1 v3654 = *(i1*)(intptr_t)v3653;
	i1 v3655 = (i1)+141;
	if (v3654==v3655) goto c02_02a7; else goto c02_02a9;

c02_02a9:;

	i8 v3656 = (i8)(intptr_t)(ws+3496);
	i1 v3657 = *(i1*)(intptr_t)v3656;
	i1 v3658 = (i1)+136;
	if (v3657==v3658) goto c02_02a7; else goto c02_02a8;

c02_02a7:;

	i8 v3659 = (i8)(intptr_t)(ws+3512);
	i8 v3660 = *(i8*)(intptr_t)v3659;
	i4 v3661 = *(i4*)(intptr_t)v3660;
	i8 v3662 = (i8)(intptr_t)(ws+3552);
	*(i4*)(intptr_t)v3662 = v3661;

	i8 v3663 = (i8)(intptr_t)(ws+3552);
	i4 v3664 = *(i4*)(intptr_t)v3663;
	*(i4*)(intptr_t)(ws+3592) = v3664;
	i8 v3665 = (i8)(intptr_t)(f171_GetPowerOfTwo);

	((void(*)(void))(intptr_t)v3665)();

	i1 v3666 = *(i1*)(intptr_t)(ws+3596);
	i8 v3667 = (i8)(intptr_t)(ws+3556);
	*(i1*)(intptr_t)v3667 = v3666;

	i8 v3668 = (i8)(intptr_t)(ws+3556);
	i1 v3669 = *(i1*)(intptr_t)v3668;
	i8 v3670 = (i8)(intptr_t)(ws+3557);
	*(i1*)(intptr_t)v3670 = v3669;

	i8 v3671 = (i8)(intptr_t)(ws+3557);
	i1 v3672 = *(i1*)(intptr_t)v3671;
	i1 v3673 = (i1)+0;
	if (v3672==v3673) goto c02_02af; else goto c02_02ae;

c02_02ae:;

	i8 v3674 = (i8)(intptr_t)(ws+3512);
	i8 v3675 = *(i8*)(intptr_t)v3674;
	*(i8*)(intptr_t)(ws+3592) = v3675;
	i8 v3676 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3676)();

	i8 v3677 = (i8)(intptr_t)(ws+3557);
	i1 v3678 = *(i1*)(intptr_t)v3677;
	i1 v3679 = v3678+(-1);
	i4 v3680 = v3679;
	*(i4*)(intptr_t)(ws+3592) = v3680;
	i8 v3681 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v3681)();

	i8 v3682 = *(i8*)(intptr_t)(ws+3600);
	i8 v3683 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v3683 = v3682;

	i8 v3684 = (i8)(intptr_t)(ws+3560);
	i8 v3685 = *(i8*)(intptr_t)v3684;
	i8 v3686 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3686 = v3685;

	i8 v3687 = (i8)(intptr_t)(ws+3496);
	i1 v3688 = *(i1*)(intptr_t)v3687;

	if (v3688 != +161) goto c02_02b1;

	i1 v3689 = (i1)+116;
	i8 v3690 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3690 = v3689;

	goto c02_02b0;

c02_02b1:;

	if (v3688 != +141) goto c02_02b2;

	i1 v3691 = (i1)+126;
	i8 v3692 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3692 = v3691;

	goto c02_02b0;

c02_02b2:;

	if (v3688 != +136) goto c02_02b3;

	i1 v3693 = (i1)+121;
	i8 v3694 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3694 = v3693;

c02_02b3:;

c02_02b0:;


c02_02af:;

c02_02ab:;

c02_02a8:;

c02_02a0:;

	i8 v3695 = (i8)(intptr_t)(ws+3496);
	i1 v3696 = *(i1*)(intptr_t)v3695;
	i1 v3697 = (i1)+116;
	if (v3696==v3697) goto c02_02bb; else goto c02_02be;

c02_02be:;

	i8 v3698 = (i8)(intptr_t)(ws+3496);
	i1 v3699 = *(i1*)(intptr_t)v3698;
	i1 v3700 = (i1)+121;
	if (v3699==v3700) goto c02_02bb; else goto c02_02bd;

c02_02bd:;

	i8 v3701 = (i8)(intptr_t)(ws+3496);
	i1 v3702 = *(i1*)(intptr_t)v3701;
	i1 v3703 = (i1)+126;
	if (v3702==v3703) goto c02_02bb; else goto c02_02bc;

c02_02bb:;

	i8 v3704 = (i8)(intptr_t)(ws+3512);
	i8 v3705 = *(i8*)(intptr_t)v3704;
	i4 v3706 = *(i4*)(intptr_t)v3705;
	i4 v3707 = (i4)+0;
	if (v3706==v3707) goto c02_02c2; else goto c02_02c3;

c02_02c2:;

	i8 v3708 = (i8)(intptr_t)(ws+3512);
	i8 v3709 = *(i8*)(intptr_t)v3708;
	*(i8*)(intptr_t)(ws+3592) = v3709;
	i8 v3710 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3710)();

	i8 v3711 = (i8)(intptr_t)(ws+3504);
	i8 v3712 = *(i8*)(intptr_t)v3711;
	i8 v3713 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3713 = v3712;

	return;

c02_02c3:;

c02_02bf:;

c02_02bc:;

c02_02b4:;

	i8 v3714 = (i8)(intptr_t)(ws+3496);
	i1 v3715 = *(i1*)(intptr_t)v3714;
	i1 v3716 = (i1)+156;
	if (v3715==v3716) goto c02_02c9; else goto c02_02cb;

c02_02cb:;

	i8 v3717 = (i8)(intptr_t)(ws+3496);
	i1 v3718 = *(i1*)(intptr_t)v3717;
	i1 v3719 = (i1)+131;
	if (v3718==v3719) goto c02_02c9; else goto c02_02ca;

c02_02c9:;

	i8 v3720 = (i8)(intptr_t)(ws+3512);
	i8 v3721 = *(i8*)(intptr_t)v3720;
	i4 v3722 = *(i4*)(intptr_t)v3721;
	i4 v3723 = (i4)+0;
	if (v3722==v3723) goto c02_02cf; else goto c02_02d0;

c02_02cf:;

	i8 v3724 = (i8)(intptr_t)(ws+3512);
	i8 v3725 = *(i8*)(intptr_t)v3724;
	*(i8*)(intptr_t)(ws+3592) = v3725;
	i8 v3726 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3726)();

	i8 v3727 = (i8)(intptr_t)(ws+3504);
	i8 v3728 = *(i8*)(intptr_t)v3727;
	i8 v3729 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3729 = v3728;

	return;

c02_02d0:;

c02_02cc:;

	i8 v3730 = (i8)(intptr_t)(ws+3504);
	i8 v3731 = *(i8*)(intptr_t)v3730;
	i8 v3732 = v3731+(+48);
	i1 v3733 = *(i1*)(intptr_t)v3732;
	i1 v3734 = (i1)+42;
	if (v3733==v3734) goto c02_02d4; else goto c02_02d5;

c02_02d4:;

	i8 v3735 = (i8)(intptr_t)(ws+3512);
	i8 v3736 = *(i8*)(intptr_t)v3735;
	i4 v3737 = *(i4*)(intptr_t)v3736;
	i2 v3738 = (s2)(s4)v3737;
	i8 v3739 = (i8)(intptr_t)(ws+3568);
	*(i2*)(intptr_t)v3739 = v3738;

	i8 v3740 = (i8)(intptr_t)(ws+3496);
	i1 v3741 = *(i1*)(intptr_t)v3740;

	if (v3741 != +156) goto c02_02d7;

	i8 v3742 = (i8)(intptr_t)(ws+3504);
	i8 v3743 = *(i8*)(intptr_t)v3742;
	i8 v3744 = v3743+(+8);
	i2 v3745 = *(i2*)(intptr_t)v3744;
	i8 v3746 = (i8)(intptr_t)(ws+3568);
	i2 v3747 = *(i2*)(intptr_t)v3746;
	i2 v3748 = v3745+v3747;
	i8 v3749 = (i8)(intptr_t)(ws+3504);
	i8 v3750 = *(i8*)(intptr_t)v3749;
	i8 v3751 = v3750+(+8);
	*(i2*)(intptr_t)v3751 = v3748;

	i8 v3752 = (i8)(intptr_t)(ws+3512);
	i8 v3753 = *(i8*)(intptr_t)v3752;
	*(i8*)(intptr_t)(ws+3592) = v3753;
	i8 v3754 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3754)();

	i8 v3755 = (i8)(intptr_t)(ws+3504);
	i8 v3756 = *(i8*)(intptr_t)v3755;
	i8 v3757 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3757 = v3756;

	return;

c02_02d7:;

	if (v3741 != +131) goto c02_02d8;

	i8 v3758 = (i8)(intptr_t)(ws+3504);
	i8 v3759 = *(i8*)(intptr_t)v3758;
	i8 v3760 = v3759+(+8);
	i2 v3761 = *(i2*)(intptr_t)v3760;
	i8 v3762 = (i8)(intptr_t)(ws+3568);
	i2 v3763 = *(i2*)(intptr_t)v3762;
	i2 v3764 = v3761-v3763;
	i8 v3765 = (i8)(intptr_t)(ws+3504);
	i8 v3766 = *(i8*)(intptr_t)v3765;
	i8 v3767 = v3766+(+8);
	*(i2*)(intptr_t)v3767 = v3764;

	i8 v3768 = (i8)(intptr_t)(ws+3512);
	i8 v3769 = *(i8*)(intptr_t)v3768;
	*(i8*)(intptr_t)(ws+3592) = v3769;
	i8 v3770 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3770)();

	i8 v3771 = (i8)(intptr_t)(ws+3504);
	i8 v3772 = *(i8*)(intptr_t)v3771;
	i8 v3773 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3773 = v3772;

	return;

c02_02d8:;

c02_02d6:;


c02_02d5:;

c02_02d1:;

c02_02ca:;

c02_02c4:;

c02_029e:;

c02_0298:;

	i8 v3774 = (i8)(intptr_t)(ws+3504);
	i8 v3775 = *(i8*)(intptr_t)v3774;
	i8 v3776 = v3775+(+48);
	i1 v3777 = *(i1*)(intptr_t)v3776;
	i1 v3778 = (i1)+40;
	if (v3777==v3778) goto c02_02e0; else goto c02_02df;

c02_02e0:;

	i8 v3779 = (i8)(intptr_t)(ws+3512);
	i8 v3780 = *(i8*)(intptr_t)v3779;
	i8 v3781 = v3780+(+48);
	i1 v3782 = *(i1*)(intptr_t)v3781;
	i1 v3783 = (i1)+40;
	if (v3782==v3783) goto c02_02de; else goto c02_02df;

c02_02de:;

	i8 v3784 = (i8)(intptr_t)(ws+3496);
	i1 v3785 = *(i1*)(intptr_t)v3784;
	*(i1*)(intptr_t)(ws+3592) = v3785;
	i8 v3786 = (i8)(intptr_t)(ws+3504);
	i8 v3787 = *(i8*)(intptr_t)v3786;
	*(i8*)(intptr_t)(ws+3600) = v3787;
	i8 v3788 = (i8)(intptr_t)(ws+3512);
	i8 v3789 = *(i8*)(intptr_t)v3788;
	*(i8*)(intptr_t)(ws+3608) = v3789;
	i8 v3790 = (i8)(intptr_t)(f169_FoldConstant2);

	((void(*)(void))(intptr_t)v3790)();

	i4 v3791 = *(i4*)(intptr_t)(ws+3616);
	i8 v3792 = (i8)(intptr_t)(ws+3572);
	*(i4*)(intptr_t)v3792 = v3791;

	i8 v3793 = (i8)(intptr_t)(ws+3572);
	i4 v3794 = *(i4*)(intptr_t)v3793;
	i8 v3795 = (i8)(intptr_t)(ws+3504);
	i8 v3796 = *(i8*)(intptr_t)v3795;
	*(i4*)(intptr_t)v3796 = v3794;

	i8 v3797 = (i8)(intptr_t)(ws+3512);
	i8 v3798 = *(i8*)(intptr_t)v3797;
	*(i8*)(intptr_t)(ws+3592) = v3798;
	i8 v3799 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v3799)();

	i8 v3800 = (i8)(intptr_t)(ws+3504);
	i8 v3801 = *(i8*)(intptr_t)v3800;
	i8 v3802 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3802 = v3801;

	return;

c02_02df:;

c02_02d9:;

	i8 v3803 = (i8)(intptr_t)(ws+3497);
	i1 v3804 = *(i1*)(intptr_t)v3803;
	*(i1*)(intptr_t)(ws+3592) = v3804;
	i8 v3805 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3805)();

	i1 v3806 = *(i1*)(intptr_t)(ws+3593);
	i8 v3807 = (i8)(intptr_t)(ws+3576);
	*(i1*)(intptr_t)v3807 = v3806;

	i8 v3808 = (i8)(intptr_t)(ws+3496);
	i1 v3809 = *(i1*)(intptr_t)v3808;
	i8 v3810 = (i8)(intptr_t)(ws+3576);
	i1 v3811 = *(i1*)(intptr_t)v3810;
	i1 v3812 = v3809+v3811;
	*(i1*)(intptr_t)(ws+3616) = v3812;
	i8 v3813 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3813)();

	i8 v3814 = *(i8*)(intptr_t)(ws+3624);
	i8 v3815 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v3815 = v3814;

	i8 v3816 = (i8)(intptr_t)(ws+3584);
	i8 v3817 = *(i8*)(intptr_t)v3816;
	i8 v3818 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3818 = v3817;

	i8 v3819 = (i8)(intptr_t)(ws+3504);
	i8 v3820 = *(i8*)(intptr_t)v3819;
	i8 v3821 = (i8)(intptr_t)(ws+3520);
	i8 v3822 = *(i8*)(intptr_t)v3821;
	i8 v3823 = v3822+(+32);
	*(i8*)(intptr_t)v3823 = v3820;

	i8 v3824 = (i8)(intptr_t)(ws+3512);
	i8 v3825 = *(i8*)(intptr_t)v3824;
	i8 v3826 = (i8)(intptr_t)(ws+3520);
	i8 v3827 = *(i8*)(intptr_t)v3826;
	i8 v3828 = v3827+(+40);
	*(i8*)(intptr_t)v3828 = v3825;

}
	void f102_WidthToIndex(void);
	void f103_AllocateNewNode(void);

// MidCCast workspace at ws+3496 length ws+48
void f173_MidCCast(void) {

	i8 v3829 = (i8)(intptr_t)(ws+3504);
	i8 v3830 = *(i8*)(intptr_t)v3829;
	i8 v3831 = v3830+(+48);
	i1 v3832 = *(i1*)(intptr_t)v3831;
	i1 v3833 = (i1)+40;
	if (v3832==v3833) goto c02_02e4; else goto c02_02e5;

c02_02e4:;

	i8 v3834 = (i8)(intptr_t)(ws+3504);
	i8 v3835 = *(i8*)(intptr_t)v3834;
	i8 v3836 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3836 = v3835;

	return;

c02_02e5:;

c02_02e1:;

	i8 v3837 = (i8)(intptr_t)(ws+3504);
	i8 v3838 = *(i8*)(intptr_t)v3837;
	i8 v3839 = v3838+(+24);
	i8 v3840 = *(i8*)(intptr_t)v3839;
	i8 v3841 = v3840+(+48);
	i2 v3842 = *(i2*)(intptr_t)v3841;
	i1 v3843 = v3842;
	i8 v3844 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v3844 = v3843;

	i8 v3845 = (i8)(intptr_t)(ws+3528);
	i1 v3846 = *(i1*)(intptr_t)v3845;
	i8 v3847 = (i8)(intptr_t)(ws+3496);
	i1 v3848 = *(i1*)(intptr_t)v3847;
	if (v3846==v3848) goto c02_02e9; else goto c02_02ea;

c02_02e9:;

	i8 v3849 = (i8)(intptr_t)(ws+3504);
	i8 v3850 = *(i8*)(intptr_t)v3849;
	i8 v3851 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3851 = v3850;

	goto c02_02e6;

c02_02ea:;

	i8 v3852 = (i8)(intptr_t)(ws+3528);
	i1 v3853 = *(i1*)(intptr_t)v3852;

	if (v3853 != +1) goto c02_02ec;

	i1 v3854 = (i1)+86;
	i8 v3855 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3855 = v3854;

	goto c02_02eb;

c02_02ec:;

	if (v3853 != +2) goto c02_02ed;

	i1 v3856 = (i1)+91;
	i8 v3857 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3857 = v3856;

	goto c02_02eb;

c02_02ed:;

	if (v3853 != +4) goto c02_02ee;

	i1 v3858 = (i1)+96;
	i8 v3859 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3859 = v3858;

	goto c02_02eb;

c02_02ee:;

	if (v3853 != +8) goto c02_02ef;

	i1 v3860 = (i1)+101;
	i8 v3861 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v3861 = v3860;

c02_02ef:;

c02_02eb:;


	i8 v3862 = (i8)(intptr_t)(ws+3496);
	i1 v3863 = *(i1*)(intptr_t)v3862;
	*(i1*)(intptr_t)(ws+3592) = v3863;
	i8 v3864 = (i8)(intptr_t)(f102_WidthToIndex);

	((void(*)(void))(intptr_t)v3864)();

	i1 v3865 = *(i1*)(intptr_t)(ws+3593);
	i8 v3866 = (i8)(intptr_t)(ws+3530);
	*(i1*)(intptr_t)v3866 = v3865;

	i8 v3867 = (i8)(intptr_t)(ws+3529);
	i1 v3868 = *(i1*)(intptr_t)v3867;
	i8 v3869 = (i8)(intptr_t)(ws+3530);
	i1 v3870 = *(i1*)(intptr_t)v3869;
	i1 v3871 = v3868+v3870;
	*(i1*)(intptr_t)(ws+3616) = v3871;
	i8 v3872 = (i8)(intptr_t)(f103_AllocateNewNode);

	((void(*)(void))(intptr_t)v3872)();

	i8 v3873 = *(i8*)(intptr_t)(ws+3624);
	i8 v3874 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v3874 = v3873;

	i8 v3875 = (i8)(intptr_t)(ws+3536);
	i8 v3876 = *(i8*)(intptr_t)v3875;
	i8 v3877 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3877 = v3876;

	i8 v3878 = (i8)(intptr_t)(ws+3504);
	i8 v3879 = *(i8*)(intptr_t)v3878;
	i8 v3880 = (i8)(intptr_t)(ws+3520);
	i8 v3881 = *(i8*)(intptr_t)v3880;
	i8 v3882 = v3881+(+32);
	*(i8*)(intptr_t)v3882 = v3879;

	i8 v3883 = (i8)(intptr_t)(ws+3512);
	i1 v3884 = *(i1*)(intptr_t)v3883;
	i8 v3885 = (i8)(intptr_t)(ws+3520);
	i8 v3886 = *(i8*)(intptr_t)v3885;
	*(i1*)(intptr_t)v3886 = v3884;

c02_02e6:;

}
	void f47_FCBPutChar(void);

// E_b8 workspace at ws+3600 length ws+1
void f174_E_b8(void) {

	i8 v3887 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)(ws+3608) = v3887;
	i8 v3888 = (i8)(intptr_t)(ws+3600);
	i1 v3889 = *(i1*)(intptr_t)v3888;
	*(i1*)(intptr_t)(ws+3616) = v3889;
	i8 v3890 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v3890)();

}
	void f174_E_b8(void);
	void f174_E_b8(void);

// E_b16 workspace at ws+3576 length ws+2
void f175_E_b16(void) {

	i8 v3891 = (i8)(intptr_t)(ws+3576);
	i2 v3892 = *(i2*)(intptr_t)v3891;
	i1 v3893 = v3892;
	*(i1*)(intptr_t)(ws+3600) = v3893;
	i8 v3894 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v3894)();

	i8 v3895 = (i8)(intptr_t)(ws+3576);
	i2 v3896 = *(i2*)(intptr_t)v3895;
	i1 v3897 = (i1)+8;
	i2 v3898 = ((i2)v3896)>>v3897;
	i1 v3899 = v3898;
	*(i1*)(intptr_t)(ws+3600) = v3899;
	i8 v3900 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v3900)();

}
	void f175_E_b16(void);
	void f175_E_b16(void);

// E_b32 workspace at ws+3568 length ws+4
void f176_E_b32(void) {

	i8 v3901 = (i8)(intptr_t)(ws+3568);
	i4 v3902 = *(i4*)(intptr_t)v3901;
	i2 v3903 = v3902;
	*(i2*)(intptr_t)(ws+3576) = v3903;
	i8 v3904 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v3904)();

	i8 v3905 = (i8)(intptr_t)(ws+3568);
	i4 v3906 = *(i4*)(intptr_t)v3905;
	i1 v3907 = (i1)+16;
	i4 v3908 = ((i4)v3906)>>v3907;
	i2 v3909 = v3908;
	*(i2*)(intptr_t)(ws+3576) = v3909;
	i8 v3910 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v3910)();

}
	void f175_E_b16(void);

// E_bsize workspace at ws+3568 length ws+2
void f177_E_bsize(void) {

	i8 v3911 = (i8)(intptr_t)(ws+3568);
	i2 v3912 = *(i2*)(intptr_t)v3911;
	*(i2*)(intptr_t)(ws+3576) = v3912;
	i8 v3913 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v3913)();

}
	void f174_E_b8(void);

// E workspace at ws+3584 length ws+9
void f184_E(void) {

c02_02f0:;

	i8 v3926 = (i8)(intptr_t)(ws+3584);
	i8 v3927 = *(i8*)(intptr_t)v3926;
	i1 v3928 = *(i1*)(intptr_t)v3927;
	i8 v3929 = (i8)(intptr_t)(ws+3592);
	*(i1*)(intptr_t)v3929 = v3928;

	i8 v3930 = (i8)(intptr_t)(ws+3584);
	i8 v3931 = *(i8*)(intptr_t)v3930;
	i8 v3932 = v3931+(+1);
	i8 v3933 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v3933 = v3932;

	i8 v3934 = (i8)(intptr_t)(ws+3592);
	i1 v3935 = *(i1*)(intptr_t)v3934;
	i1 v3936 = (i1)+0;
	if (v3935==v3936) goto c02_02f5; else goto c02_02f6;

c02_02f5:;

	goto c02_02f1;

c02_02f6:;

c02_02f2:;

	i8 v3937 = (i8)(intptr_t)(ws+3592);
	i1 v3938 = *(i1*)(intptr_t)v3937;
	*(i1*)(intptr_t)(ws+3600) = v3938;
	i8 v3939 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v3939)();

	goto c02_02f0;

c02_02f1:;

}
	void f29_StrLen(void);
	void f174_E_b8(void);
	void f184_E(void);

// E_countedstring workspace at ws+3568 length ws+16
void f185_E_countedstring(void) {

	i8 v3940 = (i8)(intptr_t)(ws+3568);
	i8 v3941 = *(i8*)(intptr_t)v3940;
	*(i8*)(intptr_t)(ws+3584) = v3941;
	i8 v3942 = (i8)(intptr_t)(f29_StrLen);

	((void(*)(void))(intptr_t)v3942)();

	i8 v3943 = *(i8*)(intptr_t)(ws+3592);
	i8 v3944 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v3944 = v3943;

	i8 v3945 = (i8)(intptr_t)(ws+3576);
	i8 v3946 = *(i8*)(intptr_t)v3945;
	i1 v3947 = v3946;
	*(i1*)(intptr_t)(ws+3600) = v3947;
	i8 v3948 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v3948)();

	i8 v3949 = (i8)(intptr_t)(ws+3568);
	i8 v3950 = *(i8*)(intptr_t)v3949;
	*(i8*)(intptr_t)(ws+3584) = v3950;
	i8 v3951 = (i8)(intptr_t)(f184_E);

	((void(*)(void))(intptr_t)v3951)();

}
	void f54_FCBOpenOut(void);
const i1 c02_s00f3[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f76_SimpleError(void);

// EmitterOpenfile workspace at ws+3264 length ws+9
void f196_EmitterOpenfile(void) {

	i8 v4073 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)(ws+3280) = v4073;
	i8 v4074 = (i8)(intptr_t)(ws+3264);
	i8 v4075 = *(i8*)(intptr_t)v4074;
	*(i8*)(intptr_t)(ws+3288) = v4075;
	i8 v4076 = (i8)(intptr_t)(f54_FCBOpenOut);

	((void(*)(void))(intptr_t)v4076)();

	i1 v4077 = *(i1*)(intptr_t)(ws+3296);
	i8 v4078 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v4078 = v4077;

	i8 v4079 = (i8)(intptr_t)(ws+3272);
	i1 v4080 = *(i1*)(intptr_t)v4079;
	i1 v4081 = (i1)+0;
	if (v4080==v4081) goto c02_0317; else goto c02_0316;

c02_0316:;

	i8 v4082 = (i8)(intptr_t)c02_s00f3;
	*(i8*)(intptr_t)(ws+3648) = v4082;
	i8 v4083 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v4083)();

c02_0317:;

c02_0313:;

}
	void f174_E_b8(void);
	void f55_FCBClose(void);
const i1 c02_s00f4[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f76_SimpleError(void);

// EmitterClosefile workspace at ws+3264 length ws+1
void f197_EmitterClosefile(void) {

	i1 v4084 = (i1)+69;
	*(i1*)(intptr_t)(ws+3600) = v4084;
	i8 v4085 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4085)();

	i8 v4086 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)(ws+3384) = v4086;
	i8 v4087 = (i8)(intptr_t)(f55_FCBClose);

	((void(*)(void))(intptr_t)v4087)();

	i1 v4088 = *(i1*)(intptr_t)(ws+3392);
	i8 v4089 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v4089 = v4088;

	i8 v4090 = (i8)(intptr_t)(ws+3264);
	i1 v4091 = *(i1*)(intptr_t)v4090;
	i1 v4092 = (i1)+0;
	if (v4091==v4092) goto c02_031c; else goto c02_031b;

c02_031b:;

	i8 v4093 = (i8)(intptr_t)c02_s00f4;
	*(i8*)(intptr_t)(ws+3648) = v4093;
	i8 v4094 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v4094)();

c02_031c:;

c02_0318:;

}
	void f174_E_b8(void);
	void f175_E_b16(void);
	void f185_E_countedstring(void);

// EmitterDeclareSubroutine workspace at ws+3416 length ws+8
void f198_EmitterDeclareSubroutine(void) {

	i1 v4095 = (i1)+78;
	*(i1*)(intptr_t)(ws+3600) = v4095;
	i8 v4096 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4096)();

	i8 v4097 = (i8)(intptr_t)(ws+3416);
	i8 v4098 = *(i8*)(intptr_t)v4097;
	i8 v4099 = v4098+(+56);
	i2 v4100 = *(i2*)(intptr_t)v4099;
	*(i2*)(intptr_t)(ws+3576) = v4100;
	i8 v4101 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v4101)();

	i8 v4102 = (i8)(intptr_t)(ws+3416);
	i8 v4103 = *(i8*)(intptr_t)v4102;
	i8 v4104 = *(i8*)(intptr_t)v4103;
	i8 v4105 = v4104+(+8);
	i8 v4106 = *(i8*)(intptr_t)v4105;
	*(i8*)(intptr_t)(ws+3568) = v4106;
	i8 v4107 = (i8)(intptr_t)(f185_E_countedstring);

	((void(*)(void))(intptr_t)v4107)();

}
	void f174_E_b8(void);
	void f175_E_b16(void);
	void f185_E_countedstring(void);

// EmitterDeclareExternalSubroutine workspace at ws+3384 length ws+16
void f199_EmitterDeclareExternalSubroutine(void) {

	i1 v4108 = (i1)+88;
	*(i1*)(intptr_t)(ws+3600) = v4108;
	i8 v4109 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4109)();

	i8 v4110 = (i8)(intptr_t)(ws+3384);
	i2 v4111 = *(i2*)(intptr_t)v4110;
	*(i2*)(intptr_t)(ws+3576) = v4111;
	i8 v4112 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v4112)();

	i8 v4113 = (i8)(intptr_t)(ws+3392);
	i8 v4114 = *(i8*)(intptr_t)v4113;
	*(i8*)(intptr_t)(ws+3568) = v4114;
	i8 v4115 = (i8)(intptr_t)(f185_E_countedstring);

	((void(*)(void))(intptr_t)v4115)();

}
	void f174_E_b8(void);
	void f175_E_b16(void);
	void f175_E_b16(void);

// EmitterReferenceSubroutineById workspace at ws+3512 length ws+4
void f200_EmitterReferenceSubroutineById(void) {

	i1 v4116 = (i1)+82;
	*(i1*)(intptr_t)(ws+3600) = v4116;
	i8 v4117 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4117)();

	i8 v4118 = (i8)(intptr_t)(ws+3512);
	i2 v4119 = *(i2*)(intptr_t)v4118;
	*(i2*)(intptr_t)(ws+3576) = v4119;
	i8 v4120 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v4120)();

	i8 v4121 = (i8)(intptr_t)(ws+3514);
	i2 v4122 = *(i2*)(intptr_t)v4121;
	*(i2*)(intptr_t)(ws+3576) = v4122;
	i8 v4123 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v4123)();

}
	void f200_EmitterReferenceSubroutineById(void);

// EmitterReferenceSubroutine workspace at ws+3496 length ws+16
void f201_EmitterReferenceSubroutine(void) {

	i8 v4124 = (i8)(intptr_t)(ws+3496);
	i8 v4125 = *(i8*)(intptr_t)v4124;
	i8 v4126 = v4125+(+56);
	i2 v4127 = *(i2*)(intptr_t)v4126;
	*(i2*)(intptr_t)(ws+3512) = v4127;
	i8 v4128 = (i8)(intptr_t)(ws+3504);
	i8 v4129 = *(i8*)(intptr_t)v4128;
	i8 v4130 = v4129+(+56);
	i2 v4131 = *(i2*)(intptr_t)v4130;
	*(i2*)(intptr_t)(ws+3514) = v4131;
	i8 v4132 = (i8)(intptr_t)(f200_EmitterReferenceSubroutineById);

	((void(*)(void))(intptr_t)v4132)();

}
	void f174_E_b8(void);
	void f175_E_b16(void);
	void f174_E_b8(void);
	void f177_E_bsize(void);

// EmitterDeclareWorkspace workspace at ws+3424 length ws+12
void f202_EmitterDeclareWorkspace(void) {

	i1 v4133 = (i1)+87;
	*(i1*)(intptr_t)(ws+3600) = v4133;
	i8 v4134 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4134)();

	i8 v4135 = (i8)(intptr_t)(ws+3424);
	i8 v4136 = *(i8*)(intptr_t)v4135;
	i8 v4137 = v4136+(+56);
	i2 v4138 = *(i2*)(intptr_t)v4137;
	*(i2*)(intptr_t)(ws+3576) = v4138;
	i8 v4139 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v4139)();

	i8 v4140 = (i8)(intptr_t)(ws+3432);
	i1 v4141 = *(i1*)(intptr_t)v4140;
	*(i1*)(intptr_t)(ws+3600) = v4141;
	i8 v4142 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4142)();

	i8 v4143 = (i8)(intptr_t)(ws+3434);
	i2 v4144 = *(i2*)(intptr_t)v4143;
	*(i2*)(intptr_t)(ws+3568) = v4144;
	i8 v4145 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(void))(intptr_t)v4145)();

}
	void f175_E_b16(void);
	void f174_E_b8(void);
	void f177_E_bsize(void);
	void f185_E_countedstring(void);
	void f174_E_b8(void);

// EmitParameterList workspace at ws+3424 length ws+8
void f203_EmitParameterList(void) {

c02_031d:;

	i8 v4146 = (i8)(intptr_t)(ws+3424);
	i8 v4147 = *(i8*)(intptr_t)v4146;
	i8 v4148 = (i8)+0;
	if (v4147==v4148) goto c02_0322; else goto c02_0321;

c02_0321:;

	i8 v4149 = (i8)(intptr_t)(ws+3424);
	i8 v4150 = *(i8*)(intptr_t)v4149;
	i8 v4151 = *(i8*)(intptr_t)v4150;
	i8 v4152 = v4151+(+8);
	i8 v4153 = *(i8*)(intptr_t)v4152;
	i8 v4154 = v4153+(+56);
	i2 v4155 = *(i2*)(intptr_t)v4154;
	*(i2*)(intptr_t)(ws+3576) = v4155;
	i8 v4156 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v4156)();

	i8 v4157 = (i8)(intptr_t)(ws+3424);
	i8 v4158 = *(i8*)(intptr_t)v4157;
	i8 v4159 = *(i8*)(intptr_t)v4158;
	i8 v4160 = v4159+(+26);
	i1 v4161 = *(i1*)(intptr_t)v4160;
	*(i1*)(intptr_t)(ws+3600) = v4161;
	i8 v4162 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4162)();

	i8 v4163 = (i8)(intptr_t)(ws+3424);
	i8 v4164 = *(i8*)(intptr_t)v4163;
	i8 v4165 = *(i8*)(intptr_t)v4164;
	i8 v4166 = v4165+(+24);
	i2 v4167 = *(i2*)(intptr_t)v4166;
	*(i2*)(intptr_t)(ws+3568) = v4167;
	i8 v4168 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(void))(intptr_t)v4168)();

	i8 v4169 = (i8)(intptr_t)(ws+3424);
	i8 v4170 = *(i8*)(intptr_t)v4169;
	i8 v4171 = v4170+(+8);
	i8 v4172 = *(i8*)(intptr_t)v4171;
	*(i8*)(intptr_t)(ws+3568) = v4172;
	i8 v4173 = (i8)(intptr_t)(f185_E_countedstring);

	((void(*)(void))(intptr_t)v4173)();

	i8 v4174 = (i8)(intptr_t)(ws+3424);
	i8 v4175 = *(i8*)(intptr_t)v4174;
	i8 v4176 = *(i8*)(intptr_t)v4175;
	i8 v4177 = *(i8*)(intptr_t)v4176;
	i8 v4178 = v4177+(+48);
	i2 v4179 = *(i2*)(intptr_t)v4178;
	i1 v4180 = v4179;
	*(i1*)(intptr_t)(ws+3600) = v4180;
	i8 v4181 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4181)();

	i8 v4182 = (i8)(intptr_t)(ws+3424);
	i8 v4183 = *(i8*)(intptr_t)v4182;
	i8 v4184 = *(i8*)(intptr_t)v4183;
	i8 v4185 = v4184+(+16);
	i8 v4186 = *(i8*)(intptr_t)v4185;
	i8 v4187 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v4187 = v4186;

	goto c02_031d;

c02_0322:;

}
	void f174_E_b8(void);
	void f175_E_b16(void);
	void f174_E_b8(void);
	void f99_GetInputParameter(void);
	void f203_EmitParameterList(void);

// EmitterEmitInputParameters workspace at ws+3408 length ws+16
void f204_EmitterEmitInputParameters(void) {

	i1 v4188 = (i1)+73;
	*(i1*)(intptr_t)(ws+3600) = v4188;
	i8 v4189 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4189)();

	i8 v4190 = (i8)(intptr_t)(ws+3408);
	i8 v4191 = *(i8*)(intptr_t)v4190;
	i8 v4192 = v4191+(+56);
	i2 v4193 = *(i2*)(intptr_t)v4192;
	*(i2*)(intptr_t)(ws+3576) = v4193;
	i8 v4194 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v4194)();

	i8 v4195 = (i8)(intptr_t)(ws+3408);
	i8 v4196 = *(i8*)(intptr_t)v4195;
	i8 v4197 = v4196+(+80);
	i1 v4198 = *(i1*)(intptr_t)v4197;
	*(i1*)(intptr_t)(ws+3600) = v4198;
	i8 v4199 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4199)();

	i8 v4200 = (i8)(intptr_t)(ws+3408);
	i8 v4201 = *(i8*)(intptr_t)v4200;
	*(i8*)(intptr_t)(ws+3464) = v4201;
	i1 v4202 = (i1)+0;
	*(i1*)(intptr_t)(ws+3472) = v4202;
	i8 v4203 = (i8)(intptr_t)(f99_GetInputParameter);

	((void(*)(void))(intptr_t)v4203)();

	i8 v4204 = *(i8*)(intptr_t)(ws+3480);
	i8 v4205 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4205 = v4204;

	i8 v4206 = (i8)(intptr_t)(ws+3416);
	i8 v4207 = *(i8*)(intptr_t)v4206;
	*(i8*)(intptr_t)(ws+3424) = v4207;
	i8 v4208 = (i8)(intptr_t)(f203_EmitParameterList);

	((void(*)(void))(intptr_t)v4208)();

}
	void f174_E_b8(void);
	void f175_E_b16(void);
	void f174_E_b8(void);
	void f100_GetOutputParameter(void);
	void f203_EmitParameterList(void);

// EmitterEmitOutputParameters workspace at ws+3408 length ws+16
void f205_EmitterEmitOutputParameters(void) {

	i1 v4209 = (i1)+79;
	*(i1*)(intptr_t)(ws+3600) = v4209;
	i8 v4210 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4210)();

	i8 v4211 = (i8)(intptr_t)(ws+3408);
	i8 v4212 = *(i8*)(intptr_t)v4211;
	i8 v4213 = v4212+(+56);
	i2 v4214 = *(i2*)(intptr_t)v4213;
	*(i2*)(intptr_t)(ws+3576) = v4214;
	i8 v4215 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v4215)();

	i8 v4216 = (i8)(intptr_t)(ws+3408);
	i8 v4217 = *(i8*)(intptr_t)v4216;
	i8 v4218 = v4217+(+81);
	i1 v4219 = *(i1*)(intptr_t)v4218;
	*(i1*)(intptr_t)(ws+3600) = v4219;
	i8 v4220 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4220)();

	i8 v4221 = (i8)(intptr_t)(ws+3408);
	i8 v4222 = *(i8*)(intptr_t)v4221;
	*(i8*)(intptr_t)(ws+3488) = v4222;
	i1 v4223 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v4223;
	i8 v4224 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v4224)();

	i8 v4225 = *(i8*)(intptr_t)(ws+3504);
	i8 v4226 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4226 = v4225;

	i8 v4227 = (i8)(intptr_t)(ws+3416);
	i8 v4228 = *(i8*)(intptr_t)v4227;
	*(i8*)(intptr_t)(ws+3424) = v4228;
	i8 v4229 = (i8)(intptr_t)(f203_EmitParameterList);

	((void(*)(void))(intptr_t)v4229)();

}
	void f174_E_b8(void);
	void f175_E_b16(void);
	void f174_E_b8(void);

// EmitterEmitSubroutineFlags workspace at ws+3408 length ws+8
void f206_EmitterEmitSubroutineFlags(void) {

	i1 v4230 = (i1)+70;
	*(i1*)(intptr_t)(ws+3600) = v4230;
	i8 v4231 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4231)();

	i8 v4232 = (i8)(intptr_t)(ws+3408);
	i8 v4233 = *(i8*)(intptr_t)v4232;
	i8 v4234 = v4233+(+56);
	i2 v4235 = *(i2*)(intptr_t)v4234;
	*(i2*)(intptr_t)(ws+3576) = v4235;
	i8 v4236 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v4236)();

	i8 v4237 = (i8)(intptr_t)(ws+3408);
	i8 v4238 = *(i8*)(intptr_t)v4237;
	i8 v4239 = v4238+(+82);
	i1 v4240 = *(i1*)(intptr_t)v4239;
	*(i1*)(intptr_t)(ws+3600) = v4240;
	i8 v4241 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v4241)();

}
	void f26_StrCmp(void);

// LookupSymbolInNamespace workspace at ws+3528 length ws+25
void f216_LookupSymbolInNamespace(void) {

	i8 v4561 = (i8)(intptr_t)(ws+3528);
	i8 v4562 = *(i8*)(intptr_t)v4561;
	i8 v4563 = *(i8*)(intptr_t)v4562;
	i8 v4564 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4564 = v4563;

c02_03ab:;

	i8 v4565 = (i8)(intptr_t)(ws+3544);
	i8 v4566 = *(i8*)(intptr_t)v4565;
	i8 v4567 = (i8)+0;
	if (v4566==v4567) goto c02_03b0; else goto c02_03af;

c02_03af:;

	i8 v4568 = (i8)(intptr_t)(ws+3544);
	i8 v4569 = *(i8*)(intptr_t)v4568;
	i8 v4570 = v4569+(+8);
	i8 v4571 = *(i8*)(intptr_t)v4570;
	*(i8*)(intptr_t)(ws+3560) = v4571;
	i8 v4572 = (i8)(intptr_t)(ws+3536);
	i8 v4573 = *(i8*)(intptr_t)v4572;
	*(i8*)(intptr_t)(ws+3568) = v4573;
	i8 v4574 = (i8)(intptr_t)(f26_StrCmp);

	((void(*)(void))(intptr_t)v4574)();

	i1 v4575 = *(i1*)(intptr_t)(ws+3576);
	i8 v4576 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4576 = v4575;

	i8 v4577 = (i8)(intptr_t)(ws+3552);
	i1 v4578 = *(i1*)(intptr_t)v4577;
	i1 v4579 = (i1)+0;
	if (v4578==v4579) goto c02_03b4; else goto c02_03b5;

c02_03b4:;

c02_03b6:;

	i8 v4580 = (i8)(intptr_t)(ws+3544);
	i8 v4581 = *(i8*)(intptr_t)v4580;
	i8 v4582 = v4581+(+32);
	i1 v4583 = *(i1*)(intptr_t)v4582;
	i1 v4584 = (i1)+39;
	if (v4583==v4584) goto c02_03ba; else goto c02_03bb;

c02_03ba:;

	i8 v4585 = (i8)(intptr_t)(ws+3544);
	i8 v4586 = *(i8*)(intptr_t)v4585;
	i8 v4587 = *(i8*)(intptr_t)v4586;
	i8 v4588 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4588 = v4587;

	goto c02_03b6;

c02_03bb:;

	return;

c02_03b5:;

c02_03b1:;

	i8 v4589 = (i8)(intptr_t)(ws+3544);
	i8 v4590 = *(i8*)(intptr_t)v4589;
	i8 v4591 = v4590+(+24);
	i8 v4592 = *(i8*)(intptr_t)v4591;
	i8 v4593 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4593 = v4592;

	goto c02_03ab;

c02_03b0:;

	i8 v4594 = (i8)+0;
	i8 v4595 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4595 = v4594;

}
	void f216_LookupSymbolInNamespace(void);

// LookupSymbol workspace at ws+3488 length ws+32
void f217_LookupSymbol(void) {

	i8 v4596 = (i8)(intptr_t)(ws+3488);
	i8 v4597 = *(i8*)(intptr_t)v4596;
	i8 v4598 = (i8)+0;
	if (v4597==v4598) goto c02_03bf; else goto c02_03c0;

c02_03bf:;

	i8 v4599 = (i8)(intptr_t)(ws+40);
	i8 v4600 = *(i8*)(intptr_t)v4599;
	i8 v4601 = v4600+(+16);
	i8 v4602 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v4602 = v4601;

c02_03c0:;

c02_03bc:;

c02_03c1:;

	i8 v4603 = (i8)(intptr_t)(ws+3488);
	i8 v4604 = *(i8*)(intptr_t)v4603;
	i8 v4605 = (i8)+0;
	if (v4604==v4605) goto c02_03c6; else goto c02_03c5;

c02_03c5:;

	i8 v4606 = (i8)(intptr_t)(ws+3488);
	i8 v4607 = *(i8*)(intptr_t)v4606;
	*(i8*)(intptr_t)(ws+3528) = v4607;
	i8 v4608 = (i8)(intptr_t)(ws+3496);
	i8 v4609 = *(i8*)(intptr_t)v4608;
	*(i8*)(intptr_t)(ws+3536) = v4609;
	i8 v4610 = (i8)(intptr_t)(f216_LookupSymbolInNamespace);

	((void(*)(void))(intptr_t)v4610)();

	i8 v4611 = *(i8*)(intptr_t)(ws+3544);
	i8 v4612 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v4612 = v4611;

	i8 v4613 = (i8)(intptr_t)(ws+3512);
	i8 v4614 = *(i8*)(intptr_t)v4613;
	i8 v4615 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4615 = v4614;

	i8 v4616 = (i8)(intptr_t)(ws+3504);
	i8 v4617 = *(i8*)(intptr_t)v4616;
	i8 v4618 = (i8)+0;
	if (v4617==v4618) goto c02_03cb; else goto c02_03ca;

c02_03ca:;

	return;

c02_03cb:;

c02_03c7:;

	i8 v4619 = (i8)(intptr_t)(ws+3488);
	i8 v4620 = *(i8*)(intptr_t)v4619;
	i8 v4621 = v4620+(+16);
	i8 v4622 = *(i8*)(intptr_t)v4621;
	i8 v4623 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v4623 = v4622;

	goto c02_03c1;

c02_03c6:;

	i8 v4624 = (i8)+0;
	i8 v4625 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4625 = v4624;

}

// AddToNamespace workspace at ws+3568 length ws+16
void f218_AddToNamespace(void) {

	i8 v4626 = (i8)(intptr_t)(ws+3568);
	i8 v4627 = *(i8*)(intptr_t)v4626;
	i8 v4628 = v4627+(+8);
	i8 v4629 = *(i8*)(intptr_t)v4628;
	i8 v4630 = (i8)+0;
	if (v4629==v4630) goto c02_03cf; else goto c02_03d0;

c02_03cf:;

	i8 v4631 = (i8)(intptr_t)(ws+3576);
	i8 v4632 = *(i8*)(intptr_t)v4631;
	i8 v4633 = (i8)(intptr_t)(ws+3568);
	i8 v4634 = *(i8*)(intptr_t)v4633;
	*(i8*)(intptr_t)v4634 = v4632;

	i8 v4635 = (i8)(intptr_t)(ws+3576);
	i8 v4636 = *(i8*)(intptr_t)v4635;
	i8 v4637 = (i8)(intptr_t)(ws+3568);
	i8 v4638 = *(i8*)(intptr_t)v4637;
	i8 v4639 = v4638+(+8);
	*(i8*)(intptr_t)v4639 = v4636;

	goto c02_03cc;

c02_03d0:;

	i8 v4640 = (i8)(intptr_t)(ws+3576);
	i8 v4641 = *(i8*)(intptr_t)v4640;
	i8 v4642 = (i8)(intptr_t)(ws+3568);
	i8 v4643 = *(i8*)(intptr_t)v4642;
	i8 v4644 = v4643+(+8);
	i8 v4645 = *(i8*)(intptr_t)v4644;
	i8 v4646 = v4645+(+24);
	*(i8*)(intptr_t)v4646 = v4641;

	i8 v4647 = (i8)(intptr_t)(ws+3576);
	i8 v4648 = *(i8*)(intptr_t)v4647;
	i8 v4649 = (i8)(intptr_t)(ws+3568);
	i8 v4650 = *(i8*)(intptr_t)v4649;
	i8 v4651 = v4650+(+8);
	*(i8*)(intptr_t)v4651 = v4648;

c02_03cc:;

	i8 v4652 = (i8)(intptr_t)(ws+3568);
	i8 v4653 = *(i8*)(intptr_t)v4652;
	i8 v4654 = (i8)(intptr_t)(ws+3576);
	i8 v4655 = *(i8*)(intptr_t)v4654;
	i8 v4656 = v4655+(+16);
	*(i8*)(intptr_t)v4656 = v4653;

}
	void f64_AllocNewSymbol(void);
	void f216_LookupSymbolInNamespace(void);
	void f74_StartError(void);
const i1 c02_s00f5[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s00f6[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f218_AddToNamespace(void);

// AddSymbol workspace at ws+3488 length ws+40
void f219_AddSymbol(void) {

	i8 v4657 = (i8)(intptr_t)(ws+3488);
	i8 v4658 = *(i8*)(intptr_t)v4657;
	i8 v4659 = (i8)+0;
	if (v4658==v4659) goto c02_03d4; else goto c02_03d5;

c02_03d4:;

	i8 v4660 = (i8)(intptr_t)(ws+40);
	i8 v4661 = *(i8*)(intptr_t)v4660;
	i8 v4662 = v4661+(+16);
	i8 v4663 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v4663 = v4662;

c02_03d5:;

c02_03d1:;

	i8 v4664 = (i8)(intptr_t)(f64_AllocNewSymbol);

	((void(*)(void))(intptr_t)v4664)();

	i8 v4665 = *(i8*)(intptr_t)(ws+3568);
	i8 v4666 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v4666 = v4665;

	i8 v4667 = (i8)(intptr_t)(ws+3512);
	i8 v4668 = *(i8*)(intptr_t)v4667;
	i8 v4669 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4669 = v4668;

	i8 v4670 = (i8)(intptr_t)(ws+3496);
	i8 v4671 = *(i8*)(intptr_t)v4670;
	i8 v4672 = (i8)+0;
	if (v4671==v4672) goto c02_03da; else goto c02_03d9;

c02_03d9:;

	i8 v4673 = (i8)(intptr_t)(ws+3488);
	i8 v4674 = *(i8*)(intptr_t)v4673;
	*(i8*)(intptr_t)(ws+3528) = v4674;
	i8 v4675 = (i8)(intptr_t)(ws+3496);
	i8 v4676 = *(i8*)(intptr_t)v4675;
	*(i8*)(intptr_t)(ws+3536) = v4676;
	i8 v4677 = (i8)(intptr_t)(f216_LookupSymbolInNamespace);

	((void(*)(void))(intptr_t)v4677)();

	i8 v4678 = *(i8*)(intptr_t)(ws+3544);
	i8 v4679 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4679 = v4678;

	i8 v4680 = (i8)(intptr_t)(ws+3520);
	i8 v4681 = *(i8*)(intptr_t)v4680;
	i8 v4682 = (i8)+0;
	if (v4681==v4682) goto c02_03df; else goto c02_03de;

c02_03de:;

	i8 v4683 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v4683)();

	i8 v4684 = (i8)(intptr_t)c02_s00f5;
	*(i8*)(intptr_t)(ws+3696) = v4684;
	i8 v4685 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4685)();

	i8 v4686 = (i8)(intptr_t)(ws+3496);
	i8 v4687 = *(i8*)(intptr_t)v4686;
	*(i8*)(intptr_t)(ws+3696) = v4687;
	i8 v4688 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4688)();

	i8 v4689 = (i8)(intptr_t)c02_s00f6;
	*(i8*)(intptr_t)(ws+3696) = v4689;
	i8 v4690 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4690)();

	i8 v4691 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v4691)();

c02_03df:;

c02_03db:;

	i8 v4692 = (i8)(intptr_t)(ws+3496);
	i8 v4693 = *(i8*)(intptr_t)v4692;
	i8 v4694 = (i8)(intptr_t)(ws+3504);
	i8 v4695 = *(i8*)(intptr_t)v4694;
	i8 v4696 = v4695+(+8);
	*(i8*)(intptr_t)v4696 = v4693;

	i8 v4697 = (i8)(intptr_t)(ws+3488);
	i8 v4698 = *(i8*)(intptr_t)v4697;
	*(i8*)(intptr_t)(ws+3568) = v4698;
	i8 v4699 = (i8)(intptr_t)(ws+3504);
	i8 v4700 = *(i8*)(intptr_t)v4699;
	*(i8*)(intptr_t)(ws+3576) = v4700;
	i8 v4701 = (i8)(intptr_t)(f218_AddToNamespace);

	((void(*)(void))(intptr_t)v4701)();

c02_03da:;

c02_03d6:;

}
	void f219_AddSymbol(void);

// AddAlias workspace at ws+3400 length ws+40
void f220_AddAlias(void) {

	i8 v4702 = (i8)(intptr_t)(ws+3400);
	i8 v4703 = *(i8*)(intptr_t)v4702;
	*(i8*)(intptr_t)(ws+3488) = v4703;
	i8 v4704 = (i8)(intptr_t)(ws+3408);
	i8 v4705 = *(i8*)(intptr_t)v4704;
	*(i8*)(intptr_t)(ws+3496) = v4705;
	i8 v4706 = (i8)(intptr_t)(f219_AddSymbol);

	((void(*)(void))(intptr_t)v4706)();

	i8 v4707 = *(i8*)(intptr_t)(ws+3504);
	i8 v4708 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v4708 = v4707;

	i8 v4709 = (i8)(intptr_t)(ws+3432);
	i8 v4710 = *(i8*)(intptr_t)v4709;
	i8 v4711 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v4711 = v4710;

	i1 v4712 = (i1)+39;
	i8 v4713 = (i8)(intptr_t)(ws+3424);
	i8 v4714 = *(i8*)(intptr_t)v4713;
	i8 v4715 = v4714+(+32);
	*(i1*)(intptr_t)v4715 = v4712;

	i8 v4716 = (i8)(intptr_t)(ws+3416);
	i8 v4717 = *(i8*)(intptr_t)v4716;
	i8 v4718 = (i8)(intptr_t)(ws+3424);
	i8 v4719 = *(i8*)(intptr_t)v4718;
	*(i8*)(intptr_t)v4719 = v4717;

}
	void f220_AddAlias(void);

// AddAliasString workspace at ws+3336 length ws+32
void f221_AddAliasString(void) {

	i8 v4720 = (i8)+0;
	*(i8*)(intptr_t)(ws+3400) = v4720;
	i8 v4721 = (i8)(intptr_t)(ws+3336);
	i8 v4722 = *(i8*)(intptr_t)v4721;
	*(i8*)(intptr_t)(ws+3408) = v4722;
	i8 v4723 = (i8)(intptr_t)(ws+3344);
	i8 v4724 = *(i8*)(intptr_t)v4723;
	*(i8*)(intptr_t)(ws+3416) = v4724;
	i8 v4725 = (i8)(intptr_t)(f220_AddAlias);

	((void(*)(void))(intptr_t)v4725)();

	i8 v4726 = *(i8*)(intptr_t)(ws+3424);
	i8 v4727 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4727 = v4726;

	i8 v4728 = (i8)(intptr_t)(ws+3352);
	i8 v4729 = *(i8*)(intptr_t)v4728;
	i8 v4730 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4730 = v4729;

}
	void f74_StartError(void);
const i1 c02_s00f7[] = { 0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s00f8[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// CheckNotPartialType workspace at ws+3520 length ws+8
void f222_CheckNotPartialType(void) {

	i8 v4731 = (i8)(intptr_t)(ws+3520);
	i8 v4732 = *(i8*)(intptr_t)v4731;
	i8 v4733 = v4732+(+52);
	i1 v4734 = *(i1*)(intptr_t)v4733;
	i1 v4735 = (i1)+1;
	if (v4734==v4735) goto c02_03e3; else goto c02_03e4;

c02_03e3:;

	i8 v4736 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v4736)();

	i8 v4737 = (i8)(intptr_t)c02_s00f7;
	*(i8*)(intptr_t)(ws+3696) = v4737;
	i8 v4738 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4738)();

	i8 v4739 = (i8)(intptr_t)(ws+3520);
	i8 v4740 = *(i8*)(intptr_t)v4739;
	i8 v4741 = v4740+(+32);
	i8 v4742 = *(i8*)(intptr_t)v4741;
	i8 v4743 = v4742+(+8);
	i8 v4744 = *(i8*)(intptr_t)v4743;
	*(i8*)(intptr_t)(ws+3696) = v4744;
	i8 v4745 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4745)();

	i8 v4746 = (i8)(intptr_t)c02_s00f8;
	*(i8*)(intptr_t)(ws+3696) = v4746;
	i8 v4747 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v4747)();

	i8 v4748 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v4748)();

c02_03e4:;

c02_03e0:;

}
	void f64_AllocNewSymbol(void);
	void f218_AddToNamespace(void);

// AddTypeToNamespace workspace at ws+3528 length ws+40
void f223_AddTypeToNamespace(void) {

	i8 v4749 = (i8)(intptr_t)(f64_AllocNewSymbol);

	((void(*)(void))(intptr_t)v4749)();

	i8 v4750 = *(i8*)(intptr_t)(ws+3568);
	i8 v4751 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v4751 = v4750;

	i8 v4752 = (i8)(intptr_t)(ws+3552);
	i8 v4753 = *(i8*)(intptr_t)v4752;
	i8 v4754 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v4754 = v4753;

	i1 v4755 = (i1)+30;
	i8 v4756 = (i8)(intptr_t)(ws+3560);
	i8 v4757 = *(i8*)(intptr_t)v4756;
	i8 v4758 = v4757+(+32);
	*(i1*)(intptr_t)v4758 = v4755;

	i8 v4759 = (i8)(intptr_t)(ws+3536);
	i8 v4760 = *(i8*)(intptr_t)v4759;
	i8 v4761 = (i8)(intptr_t)(ws+3560);
	i8 v4762 = *(i8*)(intptr_t)v4761;
	*(i8*)(intptr_t)v4762 = v4760;

	i8 v4763 = (i8)(intptr_t)(ws+3544);
	i8 v4764 = *(i8*)(intptr_t)v4763;
	i8 v4765 = (i8)(intptr_t)(ws+3560);
	i8 v4766 = *(i8*)(intptr_t)v4765;
	i8 v4767 = v4766+(+8);
	*(i8*)(intptr_t)v4767 = v4764;

	i8 v4768 = (i8)(intptr_t)(ws+3560);
	i8 v4769 = *(i8*)(intptr_t)v4768;
	i8 v4770 = (i8)(intptr_t)(ws+3536);
	i8 v4771 = *(i8*)(intptr_t)v4770;
	i8 v4772 = v4771+(+32);
	*(i8*)(intptr_t)v4772 = v4769;

	i8 v4773 = (i8)(intptr_t)(ws+3528);
	i8 v4774 = *(i8*)(intptr_t)v4773;
	*(i8*)(intptr_t)(ws+3568) = v4774;
	i8 v4775 = (i8)(intptr_t)(ws+3560);
	i8 v4776 = *(i8*)(intptr_t)v4775;
	*(i8*)(intptr_t)(ws+3576) = v4776;
	i8 v4777 = (i8)(intptr_t)(f218_AddToNamespace);

	((void(*)(void))(intptr_t)v4777)();

}
	void f66_AllocNewType(void);
	void f223_AddTypeToNamespace(void);

// MakeNumberType workspace at ws+3336 length ws+32
void f224_MakeNumberType(void) {

	i8 v4778 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v4778)();

	i8 v4779 = *(i8*)(intptr_t)(ws+3528);
	i8 v4780 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4780 = v4779;

	i8 v4781 = (i8)(intptr_t)(ws+3360);
	i8 v4782 = *(i8*)(intptr_t)v4781;
	i8 v4783 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4783 = v4782;

	i1 v4784 = (i1)+2;
	i8 v4785 = (i8)(intptr_t)(ws+3352);
	i8 v4786 = *(i8*)(intptr_t)v4785;
	i8 v4787 = v4786+(+52);
	*(i1*)(intptr_t)v4787 = v4784;

	i8 v4788 = (i8)(intptr_t)(ws+3336);
	i1 v4789 = *(i1*)(intptr_t)v4788;
	i2 v4790 = v4789;
	i8 v4791 = (i8)(intptr_t)(ws+3352);
	i8 v4792 = *(i8*)(intptr_t)v4791;
	i8 v4793 = v4792+(+48);
	*(i2*)(intptr_t)v4793 = v4790;

	i8 v4794 = (i8)(intptr_t)(ws+3336);
	i1 v4795 = *(i1*)(intptr_t)v4794;
	i2 v4796 = v4795;
	i8 v4797 = (i8)(intptr_t)(ws+3352);
	i8 v4798 = *(i8*)(intptr_t)v4797;
	i8 v4799 = v4798+(+50);
	*(i2*)(intptr_t)v4799 = v4796;

	i8 v4800 = (i8)(intptr_t)(ws+3337);
	i1 v4801 = *(i1*)(intptr_t)v4800;
	i8 v4802 = (i8)(intptr_t)(ws+3352);
	i8 v4803 = *(i8*)(intptr_t)v4802;
	i8 v4804 = v4803+(+53);
	*(i1*)(intptr_t)v4804 = v4801;

	i8 v4805 = (i8)(intptr_t)(ws+3338);
	i1 v4806 = *(i1*)(intptr_t)v4805;
	i8 v4807 = (i8)(intptr_t)(ws+3352);
	i8 v4808 = *(i8*)(intptr_t)v4807;
	*(i1*)(intptr_t)v4808 = v4806;

	i8 v4809 = (i8)(intptr_t)(ws+40);
	i8 v4810 = *(i8*)(intptr_t)v4809;
	i8 v4811 = v4810+(+16);
	*(i8*)(intptr_t)(ws+3528) = v4811;
	i8 v4812 = (i8)(intptr_t)(ws+3352);
	i8 v4813 = *(i8*)(intptr_t)v4812;
	*(i8*)(intptr_t)(ws+3536) = v4813;
	i8 v4814 = (i8)(intptr_t)(ws+3344);
	i8 v4815 = *(i8*)(intptr_t)v4814;
	*(i8*)(intptr_t)(ws+3544) = v4815;
	i8 v4816 = (i8)(intptr_t)(f223_AddTypeToNamespace);

	((void(*)(void))(intptr_t)v4816)();

}

// IsTypeOfKind workspace at ws+3576 length ws+10
void f225_IsTypeOfKind(void) {

	i1 v4817 = (i1)+0;
	i8 v4818 = (i8)(intptr_t)(ws+3585);
	*(i1*)(intptr_t)v4818 = v4817;

	i8 v4819 = (i8)(intptr_t)(ws+3576);
	i8 v4820 = *(i8*)(intptr_t)v4819;
	i8 v4821 = (i8)+0;
	if (v4820==v4821) goto c02_03eb; else goto c02_03ec;

c02_03ec:;

	i8 v4822 = (i8)(intptr_t)(ws+3576);
	i8 v4823 = *(i8*)(intptr_t)v4822;
	i8 v4824 = v4823+(+52);
	i1 v4825 = *(i1*)(intptr_t)v4824;
	i8 v4826 = (i8)(intptr_t)(ws+3584);
	i1 v4827 = *(i1*)(intptr_t)v4826;
	if (v4825==v4827) goto c02_03ea; else goto c02_03eb;

c02_03ea:;

	i1 v4828 = (i1)+1;
	i8 v4829 = (i8)(intptr_t)(ws+3585);
	*(i1*)(intptr_t)v4829 = v4828;

c02_03eb:;

c02_03e5:;

}
	void f225_IsTypeOfKind(void);

// IsArray workspace at ws+3496 length ws+10
void f226_IsArray(void) {

	i8 v4830 = (i8)(intptr_t)(ws+3496);
	i8 v4831 = *(i8*)(intptr_t)v4830;
	*(i8*)(intptr_t)(ws+3576) = v4831;
	i1 v4832 = (i1)+4;
	*(i1*)(intptr_t)(ws+3584) = v4832;
	i8 v4833 = (i8)(intptr_t)(f225_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4833)();

	i1 v4834 = *(i1*)(intptr_t)(ws+3585);
	i8 v4835 = (i8)(intptr_t)(ws+3505);
	*(i1*)(intptr_t)v4835 = v4834;

	i8 v4836 = (i8)(intptr_t)(ws+3505);
	i1 v4837 = *(i1*)(intptr_t)v4836;
	i8 v4838 = (i8)(intptr_t)(ws+3504);
	*(i1*)(intptr_t)v4838 = v4837;

}
	void f225_IsTypeOfKind(void);

// IsPtr workspace at ws+3560 length ws+10
void f68_IsPtr(void) {

	i8 v4839 = (i8)(intptr_t)(ws+3560);
	i8 v4840 = *(i8*)(intptr_t)v4839;
	*(i8*)(intptr_t)(ws+3576) = v4840;
	i1 v4841 = (i1)+3;
	*(i1*)(intptr_t)(ws+3584) = v4841;
	i8 v4842 = (i8)(intptr_t)(f225_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4842)();

	i1 v4843 = *(i1*)(intptr_t)(ws+3585);
	i8 v4844 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v4844 = v4843;

	i8 v4845 = (i8)(intptr_t)(ws+3569);
	i1 v4846 = *(i1*)(intptr_t)v4845;
	i8 v4847 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4847 = v4846;

}
	void f225_IsTypeOfKind(void);

// IsSubroutine workspace at ws+3560 length ws+10
void f227_IsSubroutine(void) {

	i8 v4848 = (i8)(intptr_t)(ws+3560);
	i8 v4849 = *(i8*)(intptr_t)v4848;
	*(i8*)(intptr_t)(ws+3576) = v4849;
	i1 v4850 = (i1)+6;
	*(i1*)(intptr_t)(ws+3584) = v4850;
	i8 v4851 = (i8)(intptr_t)(f225_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4851)();

	i1 v4852 = *(i1*)(intptr_t)(ws+3585);
	i8 v4853 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v4853 = v4852;

	i8 v4854 = (i8)(intptr_t)(ws+3569);
	i1 v4855 = *(i1*)(intptr_t)v4854;
	i8 v4856 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4856 = v4855;

}
	void f225_IsTypeOfKind(void);

// IsNum workspace at ws+3560 length ws+10
void f228_IsNum(void) {

	i8 v4857 = (i8)(intptr_t)(ws+3560);
	i8 v4858 = *(i8*)(intptr_t)v4857;
	i8 v4859 = (i8)+0;
	if (v4858==v4859) goto c02_03f0; else goto c02_03f1;

c02_03f0:;

	i1 v4860 = (i1)+1;
	i8 v4861 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4861 = v4860;

	goto c02_03ed;

c02_03f1:;

	i8 v4862 = (i8)(intptr_t)(ws+3560);
	i8 v4863 = *(i8*)(intptr_t)v4862;
	*(i8*)(intptr_t)(ws+3576) = v4863;
	i1 v4864 = (i1)+2;
	*(i1*)(intptr_t)(ws+3584) = v4864;
	i8 v4865 = (i8)(intptr_t)(f225_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4865)();

	i1 v4866 = *(i1*)(intptr_t)(ws+3585);
	i8 v4867 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v4867 = v4866;

	i8 v4868 = (i8)(intptr_t)(ws+3569);
	i1 v4869 = *(i1*)(intptr_t)v4868;
	i8 v4870 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v4870 = v4869;

c02_03ed:;

}
	void f225_IsTypeOfKind(void);

// IsSNum workspace at ws+3456 length ws+10
void f229_IsSNum(void) {

	i8 v4871 = (i8)(intptr_t)(ws+3456);
	i8 v4872 = *(i8*)(intptr_t)v4871;
	i8 v4873 = (i8)+0;
	if (v4872==v4873) goto c02_03f5; else goto c02_03f6;

c02_03f5:;

	i1 v4874 = (i1)+1;
	i8 v4875 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v4875 = v4874;

	goto c02_03f2;

c02_03f6:;

	i8 v4876 = (i8)(intptr_t)(ws+3456);
	i8 v4877 = *(i8*)(intptr_t)v4876;
	*(i8*)(intptr_t)(ws+3576) = v4877;
	i1 v4878 = (i1)+2;
	*(i1*)(intptr_t)(ws+3584) = v4878;
	i8 v4879 = (i8)(intptr_t)(f225_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4879)();

	i1 v4880 = *(i1*)(intptr_t)(ws+3585);
	i8 v4881 = (i8)(intptr_t)(ws+3465);
	*(i1*)(intptr_t)v4881 = v4880;

	i8 v4882 = (i8)(intptr_t)(ws+3465);
	i1 v4883 = *(i1*)(intptr_t)v4882;
	i1 v4884 = (i1)+0;
	if (v4883==v4884) goto c02_03fc; else goto c02_03fd;

c02_03fd:;

	i8 v4885 = (i8)(intptr_t)(ws+3456);
	i8 v4886 = *(i8*)(intptr_t)v4885;
	i1 v4887 = *(i1*)(intptr_t)v4886;
	i1 v4888 = (i1)+0;
	if (v4887==v4888) goto c02_03fc; else goto c02_03fb;

c02_03fb:;

	i1 v4889 = (i1)+1;
	i8 v4890 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v4890 = v4889;

	goto c02_03f2;

c02_03fc:;

	i1 v4891 = (i1)+0;
	i8 v4892 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v4892 = v4891;

c02_03f2:;

}
	void f68_IsPtr(void);
	void f228_IsNum(void);
	void f227_IsSubroutine(void);

// IsScalar workspace at ws+3544 length ws+12
void f230_IsScalar(void) {

	i8 v4893 = (i8)(intptr_t)(ws+3544);
	i8 v4894 = *(i8*)(intptr_t)v4893;
	*(i8*)(intptr_t)(ws+3560) = v4894;
	i8 v4895 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v4895)();

	i1 v4896 = *(i1*)(intptr_t)(ws+3568);
	i8 v4897 = (i8)(intptr_t)(ws+3553);
	*(i1*)(intptr_t)v4897 = v4896;

	i8 v4898 = (i8)(intptr_t)(ws+3544);
	i8 v4899 = *(i8*)(intptr_t)v4898;
	*(i8*)(intptr_t)(ws+3560) = v4899;
	i8 v4900 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v4900)();

	i1 v4901 = *(i1*)(intptr_t)(ws+3568);
	i8 v4902 = (i8)(intptr_t)(ws+3554);
	*(i1*)(intptr_t)v4902 = v4901;

	i8 v4903 = (i8)(intptr_t)(ws+3544);
	i8 v4904 = *(i8*)(intptr_t)v4903;
	*(i8*)(intptr_t)(ws+3560) = v4904;
	i8 v4905 = (i8)(intptr_t)(f227_IsSubroutine);

	((void(*)(void))(intptr_t)v4905)();

	i1 v4906 = *(i1*)(intptr_t)(ws+3568);
	i8 v4907 = (i8)(intptr_t)(ws+3555);
	*(i1*)(intptr_t)v4907 = v4906;

	i8 v4908 = (i8)(intptr_t)(ws+3553);
	i1 v4909 = *(i1*)(intptr_t)v4908;
	i1 v4910 = (i1)+0;
	if (v4909==v4910) goto c02_0408; else goto c02_0405;

c02_0408:;

	i8 v4911 = (i8)(intptr_t)(ws+3554);
	i1 v4912 = *(i1*)(intptr_t)v4911;
	i1 v4913 = (i1)+0;
	if (v4912==v4913) goto c02_0407; else goto c02_0405;

c02_0407:;

	i8 v4914 = (i8)(intptr_t)(ws+3555);
	i1 v4915 = *(i1*)(intptr_t)v4914;
	i1 v4916 = (i1)+0;
	if (v4915==v4916) goto c02_0406; else goto c02_0405;

c02_0405:;

	i1 v4917 = (i1)+1;
	i8 v4918 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4918 = v4917;

	goto c02_03fe;

c02_0406:;

	i1 v4919 = (i1)+0;
	i8 v4920 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4920 = v4919;

c02_03fe:;

}
	void f225_IsTypeOfKind(void);

// IsRecord workspace at ws+3488 length ws+10
void f231_IsRecord(void) {

	i8 v4921 = (i8)(intptr_t)(ws+3488);
	i8 v4922 = *(i8*)(intptr_t)v4921;
	*(i8*)(intptr_t)(ws+3576) = v4922;
	i1 v4923 = (i1)+5;
	*(i1*)(intptr_t)(ws+3584) = v4923;
	i8 v4924 = (i8)(intptr_t)(f225_IsTypeOfKind);

	((void(*)(void))(intptr_t)v4924)();

	i1 v4925 = *(i1*)(intptr_t)(ws+3585);
	i8 v4926 = (i8)(intptr_t)(ws+3497);
	*(i1*)(intptr_t)v4926 = v4925;

	i8 v4927 = (i8)(intptr_t)(ws+3497);
	i1 v4928 = *(i1*)(intptr_t)v4927;
	i8 v4929 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v4929 = v4928;

}
	void f230_IsScalar(void);
	void f113_MidDeref(void);

// MakeLValue workspace at ws+3496 length ws+48
void f232_MakeLValue(void) {

	i1 v4930 = (i1)+0;
	i8 v4931 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v4931 = v4930;

	i8 v4932 = (i8)(intptr_t)(ws+3496);
	i8 v4933 = *(i8*)(intptr_t)v4932;
	i8 v4934 = v4933+(+24);
	i8 v4935 = *(i8*)(intptr_t)v4934;
	i8 v4936 = *(i8*)(intptr_t)v4935;
	i8 v4937 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4937 = v4936;

	i8 v4938 = (i8)(intptr_t)(ws+3520);
	i8 v4939 = *(i8*)(intptr_t)v4938;
	*(i8*)(intptr_t)(ws+3544) = v4939;
	i8 v4940 = (i8)(intptr_t)(f230_IsScalar);

	((void(*)(void))(intptr_t)v4940)();

	i1 v4941 = *(i1*)(intptr_t)(ws+3552);
	i8 v4942 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v4942 = v4941;

	i8 v4943 = (i8)(intptr_t)(ws+3528);
	i1 v4944 = *(i1*)(intptr_t)v4943;
	i1 v4945 = (i1)+0;
	if (v4944==v4945) goto c02_040d; else goto c02_040c;

c02_040c:;

	i8 v4946 = (i8)(intptr_t)(ws+3520);
	i8 v4947 = *(i8*)(intptr_t)v4946;
	i8 v4948 = v4947+(+48);
	i2 v4949 = *(i2*)(intptr_t)v4948;
	i1 v4950 = v4949;
	i8 v4951 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v4951 = v4950;

c02_040d:;

c02_0409:;

	i8 v4952 = (i8)(intptr_t)(ws+3512);
	i1 v4953 = *(i1*)(intptr_t)v4952;
	*(i1*)(intptr_t)(ws+3544) = v4953;
	i8 v4954 = (i8)(intptr_t)(ws+3496);
	i8 v4955 = *(i8*)(intptr_t)v4954;
	*(i8*)(intptr_t)(ws+3552) = v4955;
	i8 v4956 = (i8)(intptr_t)(f113_MidDeref);

	((void(*)(void))(intptr_t)v4956)();

	i8 v4957 = *(i8*)(intptr_t)(ws+3560);
	i8 v4958 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v4958 = v4957;

	i8 v4959 = (i8)(intptr_t)(ws+3536);
	i8 v4960 = *(i8*)(intptr_t)v4959;
	i8 v4961 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v4961 = v4960;

	i8 v4962 = (i8)(intptr_t)(ws+3520);
	i8 v4963 = *(i8*)(intptr_t)v4962;
	i8 v4964 = (i8)(intptr_t)(ws+3504);
	i8 v4965 = *(i8*)(intptr_t)v4964;
	i8 v4966 = v4965+(+24);
	*(i8*)(intptr_t)v4966 = v4963;

}
const i1 c02_s00f9[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(void);
	void f63_Discard(void);

// UndoLValue workspace at ws+3432 length ws+17
void f233_UndoLValue(void) {

	i8 v4967 = (i8)(intptr_t)(ws+3432);
	i8 v4968 = *(i8*)(intptr_t)v4967;
	i8 v4969 = v4968+(+48);
	i1 v4970 = *(i1*)(intptr_t)v4969;
	i8 v4971 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v4971 = v4970;

	i8 v4972 = (i8)(intptr_t)(ws+3448);
	i1 v4973 = *(i1*)(intptr_t)v4972;
	i1 v4974 = (i1)+44;
	if (v4973<v4974) goto c02_0413; else goto c02_0415;

c02_0415:;

	i1 v4975 = (i1)+48;
	i8 v4976 = (i8)(intptr_t)(ws+3448);
	i1 v4977 = *(i1*)(intptr_t)v4976;
	if (v4975<v4977) goto c02_0413; else goto c02_0414;

c02_0413:;

	i8 v4978 = (i8)(intptr_t)c02_s00f9;
	*(i8*)(intptr_t)(ws+3648) = v4978;
	i8 v4979 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v4979)();

c02_0414:;

c02_040e:;

	i8 v4980 = (i8)(intptr_t)(ws+3432);
	i8 v4981 = *(i8*)(intptr_t)v4980;
	i8 v4982 = v4981+(+32);
	i8 v4983 = *(i8*)(intptr_t)v4982;
	i8 v4984 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v4984 = v4983;

	i8 v4985 = (i8)+0;
	i8 v4986 = (i8)(intptr_t)(ws+3432);
	i8 v4987 = *(i8*)(intptr_t)v4986;
	i8 v4988 = v4987+(+32);
	*(i8*)(intptr_t)v4988 = v4985;

	i8 v4989 = (i8)(intptr_t)(ws+3432);
	i8 v4990 = *(i8*)(intptr_t)v4989;
	*(i8*)(intptr_t)(ws+3592) = v4990;
	i8 v4991 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v4991)();

}

// IsLValue workspace at ws+3488 length ws+10
void f234_IsLValue(void) {

	i1 v4992 = (i1)+0;
	i8 v4993 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v4993 = v4992;

	i8 v4994 = (i8)(intptr_t)(ws+3488);
	i8 v4995 = *(i8*)(intptr_t)v4994;
	i8 v4996 = v4995+(+48);
	i1 v4997 = *(i1*)(intptr_t)v4996;
	i8 v4998 = (i8)(intptr_t)(ws+3497);
	*(i1*)(intptr_t)v4998 = v4997;

	i8 v4999 = (i8)(intptr_t)(ws+3497);
	i1 v5000 = *(i1*)(intptr_t)v4999;
	i1 v5001 = (i1)+44;
	if (v5000<v5001) goto c02_041c; else goto c02_041d;

c02_041d:;

	i1 v5002 = (i1)+48;
	i8 v5003 = (i8)(intptr_t)(ws+3497);
	i1 v5004 = *(i1*)(intptr_t)v5003;
	if (v5002<v5004) goto c02_041c; else goto c02_041b;

c02_041b:;

	i1 v5005 = (i1)+1;
	i8 v5006 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5006 = v5005;

c02_041c:;

c02_0416:;

}
	void f68_IsPtr(void);
const i1 c02_s00fa[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x72,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(void);

// MaybeUndoLValue workspace at ws+3496 length ws+18
void f235_MaybeUndoLValue(void) {

	i8 v5007 = (i8)(intptr_t)(ws+3496);
	i8 v5008 = *(i8*)(intptr_t)v5007;
	i8 v5009 = v5008+(+48);
	i1 v5010 = *(i1*)(intptr_t)v5009;
	i8 v5011 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v5011 = v5010;

	i8 v5012 = (i8)(intptr_t)(ws+3512);
	i1 v5013 = *(i1*)(intptr_t)v5012;
	i1 v5014 = (i1)+44;
	if (v5013<v5014) goto c02_0424; else goto c02_0425;

c02_0425:;

	i1 v5015 = (i1)+48;
	i8 v5016 = (i8)(intptr_t)(ws+3512);
	i1 v5017 = *(i1*)(intptr_t)v5016;
	if (v5015<v5017) goto c02_0424; else goto c02_0423;

c02_0423:;

	i8 v5018 = (i8)(intptr_t)(ws+3496);
	i8 v5019 = *(i8*)(intptr_t)v5018;
	i8 v5020 = v5019+(+32);
	i8 v5021 = *(i8*)(intptr_t)v5020;
	i8 v5022 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5022 = v5021;

	i8 v5023 = (i8)+0;
	i8 v5024 = (i8)(intptr_t)(ws+3496);
	i8 v5025 = *(i8*)(intptr_t)v5024;
	i8 v5026 = v5025+(+32);
	*(i8*)(intptr_t)v5026 = v5023;

	goto c02_041e;

c02_0424:;

	i8 v5027 = (i8)(intptr_t)(ws+3496);
	i8 v5028 = *(i8*)(intptr_t)v5027;
	i8 v5029 = v5028+(+24);
	i8 v5030 = *(i8*)(intptr_t)v5029;
	*(i8*)(intptr_t)(ws+3560) = v5030;
	i8 v5031 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v5031)();

	i1 v5032 = *(i1*)(intptr_t)(ws+3568);
	i8 v5033 = (i8)(intptr_t)(ws+3513);
	*(i1*)(intptr_t)v5033 = v5032;

	i8 v5034 = (i8)(intptr_t)(ws+3513);
	i1 v5035 = *(i1*)(intptr_t)v5034;
	i1 v5036 = (i1)+0;
	if (v5035==v5036) goto c02_0429; else goto c02_0428;

c02_0428:;

	i8 v5037 = (i8)(intptr_t)(ws+3496);
	i8 v5038 = *(i8*)(intptr_t)v5037;
	i8 v5039 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5039 = v5038;

	goto c02_041e;

c02_0429:;

	i8 v5040 = (i8)(intptr_t)c02_s00fa;
	*(i8*)(intptr_t)(ws+3648) = v5040;
	i8 v5041 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v5041)();

c02_041e:;

}

// AllocLabel workspace at ws+3472 length ws+2
void f236_AllocLabel(void) {

	i8 v5042 = (i8)(intptr_t)(ws+48);
	i2 v5043 = *(i2*)(intptr_t)v5042;
	i8 v5044 = (i8)(intptr_t)(ws+3472);
	*(i2*)(intptr_t)v5044 = v5043;

	i8 v5045 = (i8)(intptr_t)(ws+48);
	i2 v5046 = *(i2*)(intptr_t)v5045;
	i2 v5047 = v5046+(+1);
	i8 v5048 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v5048 = v5047;

}

// AllocSubrId workspace at ws+3416 length ws+2
void f237_AllocSubrId(void) {

	i8 v5049 = (i8)(intptr_t)(ws+50);
	i2 v5050 = *(i2*)(intptr_t)v5049;
	i8 v5051 = (i8)(intptr_t)(ws+3416);
	*(i2*)(intptr_t)v5051 = v5050;

	i8 v5052 = (i8)(intptr_t)(ws+50);
	i2 v5053 = *(i2*)(intptr_t)v5052;
	i2 v5054 = v5053+(+1);
	i8 v5055 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v5055 = v5054;

}

// MidWriter workspace at ws+3560 length ws+8
void f238_MidWriter(void) {

}

// ArchAlignUp workspace at ws+3544 length ws+8
void f239_ArchAlignUp(void) {

	i8 v5056 = (i8)(intptr_t)(ws+3546);
	i1 v5057 = *(i1*)(intptr_t)v5056;
	i1 v5058 = v5057+(-1);
	i2 v5059 = v5058;
	i8 v5060 = (i8)(intptr_t)(ws+3550);
	*(i2*)(intptr_t)v5060 = v5059;

	i8 v5061 = (i8)(intptr_t)(ws+3544);
	i2 v5062 = *(i2*)(intptr_t)v5061;
	i8 v5063 = (i8)(intptr_t)(ws+3550);
	i2 v5064 = *(i2*)(intptr_t)v5063;
	i2 v5065 = v5062+v5064;
	i8 v5066 = (i8)(intptr_t)(ws+3550);
	i2 v5067 = *(i2*)(intptr_t)v5066;
	i2 v5068 = ~v5067;
	i2 v5069 = v5065&v5068;
	i8 v5070 = (i8)(intptr_t)(ws+3548);
	*(i2*)(intptr_t)v5070 = v5069;

}
const i1 c02_s00fb[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f224_MakeNumberType(void);
const i1 c02_s00fc[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f224_MakeNumberType(void);
const i1 c02_s00fd[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f224_MakeNumberType(void);
const i1 c02_s00fe[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f224_MakeNumberType(void);
const i1 c02_s00ff[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f224_MakeNumberType(void);
const i1 c02_s0100[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f224_MakeNumberType(void);
const i1 c02_s0101[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f224_MakeNumberType(void);
const i1 c02_s0102[] = { 0x69,0x6e,0x74,0x38,0 };
	void f224_MakeNumberType(void);
const i1 c02_s0103[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f217_LookupSymbol(void);
const i1 c02_s0104[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
	void f221_AddAliasString(void);

// ArchInitTypes workspace at ws+3264 length ws+72
void f240_ArchInitTypes(void) {

	i1 v5071 = (i1)+8;
	*(i1*)(intptr_t)(ws+3336) = v5071;
	i1 v5072 = (i1)+8;
	*(i1*)(intptr_t)(ws+3337) = v5072;
	i1 v5073 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5073;
	i8 v5074 = (i8)(intptr_t)c02_s00fb;
	*(i8*)(intptr_t)(ws+3344) = v5074;
	i8 v5075 = (i8)(intptr_t)(f224_MakeNumberType);

	((void(*)(void))(intptr_t)v5075)();

	i8 v5076 = *(i8*)(intptr_t)(ws+3352);
	i8 v5077 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5077 = v5076;

	i8 v5078 = (i8)(intptr_t)(ws+3264);
	i8 v5079 = *(i8*)(intptr_t)v5078;
	i8 v5080 = (i8)(intptr_t)(ws+1464);
	*(i8*)(intptr_t)v5080 = v5079;

	i1 v5081 = (i1)+8;
	*(i1*)(intptr_t)(ws+3336) = v5081;
	i1 v5082 = (i1)+8;
	*(i1*)(intptr_t)(ws+3337) = v5082;
	i1 v5083 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5083;
	i8 v5084 = (i8)(intptr_t)c02_s00fc;
	*(i8*)(intptr_t)(ws+3344) = v5084;
	i8 v5085 = (i8)(intptr_t)(f224_MakeNumberType);

	((void(*)(void))(intptr_t)v5085)();

	i8 v5086 = *(i8*)(intptr_t)(ws+3352);
	i8 v5087 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v5087 = v5086;

	i8 v5088 = (i8)(intptr_t)(ws+3272);
	i8 v5089 = *(i8*)(intptr_t)v5088;
	i8 v5090 = (i8)(intptr_t)(ws+1472);
	*(i8*)(intptr_t)v5090 = v5089;

	i1 v5091 = (i1)+4;
	*(i1*)(intptr_t)(ws+3336) = v5091;
	i1 v5092 = (i1)+4;
	*(i1*)(intptr_t)(ws+3337) = v5092;
	i1 v5093 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5093;
	i8 v5094 = (i8)(intptr_t)c02_s00fd;
	*(i8*)(intptr_t)(ws+3344) = v5094;
	i8 v5095 = (i8)(intptr_t)(f224_MakeNumberType);

	((void(*)(void))(intptr_t)v5095)();

	i8 v5096 = *(i8*)(intptr_t)(ws+3352);
	i8 v5097 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v5097 = v5096;

	i8 v5098 = (i8)(intptr_t)(ws+3280);
	i8 v5099 = *(i8*)(intptr_t)v5098;
	i8 v5100 = (i8)(intptr_t)(ws+1480);
	*(i8*)(intptr_t)v5100 = v5099;

	i1 v5101 = (i1)+4;
	*(i1*)(intptr_t)(ws+3336) = v5101;
	i1 v5102 = (i1)+4;
	*(i1*)(intptr_t)(ws+3337) = v5102;
	i1 v5103 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5103;
	i8 v5104 = (i8)(intptr_t)c02_s00fe;
	*(i8*)(intptr_t)(ws+3344) = v5104;
	i8 v5105 = (i8)(intptr_t)(f224_MakeNumberType);

	((void(*)(void))(intptr_t)v5105)();

	i8 v5106 = *(i8*)(intptr_t)(ws+3352);
	i8 v5107 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v5107 = v5106;

	i8 v5108 = (i8)(intptr_t)(ws+3288);
	i8 v5109 = *(i8*)(intptr_t)v5108;
	i8 v5110 = (i8)(intptr_t)(ws+1488);
	*(i8*)(intptr_t)v5110 = v5109;

	i1 v5111 = (i1)+2;
	*(i1*)(intptr_t)(ws+3336) = v5111;
	i1 v5112 = (i1)+2;
	*(i1*)(intptr_t)(ws+3337) = v5112;
	i1 v5113 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5113;
	i8 v5114 = (i8)(intptr_t)c02_s00ff;
	*(i8*)(intptr_t)(ws+3344) = v5114;
	i8 v5115 = (i8)(intptr_t)(f224_MakeNumberType);

	((void(*)(void))(intptr_t)v5115)();

	i8 v5116 = *(i8*)(intptr_t)(ws+3352);
	i8 v5117 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v5117 = v5116;

	i8 v5118 = (i8)(intptr_t)(ws+3296);
	i8 v5119 = *(i8*)(intptr_t)v5118;
	i8 v5120 = (i8)(intptr_t)(ws+1496);
	*(i8*)(intptr_t)v5120 = v5119;

	i1 v5121 = (i1)+2;
	*(i1*)(intptr_t)(ws+3336) = v5121;
	i1 v5122 = (i1)+2;
	*(i1*)(intptr_t)(ws+3337) = v5122;
	i1 v5123 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5123;
	i8 v5124 = (i8)(intptr_t)c02_s0100;
	*(i8*)(intptr_t)(ws+3344) = v5124;
	i8 v5125 = (i8)(intptr_t)(f224_MakeNumberType);

	((void(*)(void))(intptr_t)v5125)();

	i8 v5126 = *(i8*)(intptr_t)(ws+3352);
	i8 v5127 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v5127 = v5126;

	i8 v5128 = (i8)(intptr_t)(ws+3304);
	i8 v5129 = *(i8*)(intptr_t)v5128;
	i8 v5130 = (i8)(intptr_t)(ws+1504);
	*(i8*)(intptr_t)v5130 = v5129;

	i1 v5131 = (i1)+1;
	*(i1*)(intptr_t)(ws+3336) = v5131;
	i1 v5132 = (i1)+1;
	*(i1*)(intptr_t)(ws+3337) = v5132;
	i1 v5133 = (i1)+0;
	*(i1*)(intptr_t)(ws+3338) = v5133;
	i8 v5134 = (i8)(intptr_t)c02_s0101;
	*(i8*)(intptr_t)(ws+3344) = v5134;
	i8 v5135 = (i8)(intptr_t)(f224_MakeNumberType);

	((void(*)(void))(intptr_t)v5135)();

	i8 v5136 = *(i8*)(intptr_t)(ws+3352);
	i8 v5137 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v5137 = v5136;

	i8 v5138 = (i8)(intptr_t)(ws+3312);
	i8 v5139 = *(i8*)(intptr_t)v5138;
	i8 v5140 = (i8)(intptr_t)(ws+1512);
	*(i8*)(intptr_t)v5140 = v5139;

	i1 v5141 = (i1)+1;
	*(i1*)(intptr_t)(ws+3336) = v5141;
	i1 v5142 = (i1)+1;
	*(i1*)(intptr_t)(ws+3337) = v5142;
	i1 v5143 = (i1)+1;
	*(i1*)(intptr_t)(ws+3338) = v5143;
	i8 v5144 = (i8)(intptr_t)c02_s0102;
	*(i8*)(intptr_t)(ws+3344) = v5144;
	i8 v5145 = (i8)(intptr_t)(f224_MakeNumberType);

	((void(*)(void))(intptr_t)v5145)();

	i8 v5146 = *(i8*)(intptr_t)(ws+3352);
	i8 v5147 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v5147 = v5146;

	i8 v5148 = (i8)(intptr_t)(ws+3320);
	i8 v5149 = *(i8*)(intptr_t)v5148;
	i8 v5150 = (i8)(intptr_t)(ws+1520);
	*(i8*)(intptr_t)v5150 = v5149;

	i8 v5151 = (i8)(intptr_t)(ws+1464);
	i8 v5152 = *(i8*)(intptr_t)v5151;
	i8 v5153 = (i8)(intptr_t)(ws+1528);
	*(i8*)(intptr_t)v5153 = v5152;

	i8 v5154 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v5154;
	i8 v5155 = (i8)(intptr_t)c02_s0103;
	*(i8*)(intptr_t)(ws+3496) = v5155;
	i8 v5156 = (i8)(intptr_t)(f217_LookupSymbol);

	((void(*)(void))(intptr_t)v5156)();

	i8 v5157 = *(i8*)(intptr_t)(ws+3504);
	i8 v5158 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v5158 = v5157;

	i8 v5159 = (i8)(intptr_t)c02_s0104;
	*(i8*)(intptr_t)(ws+3336) = v5159;
	i8 v5160 = (i8)(intptr_t)(ws+3328);
	i8 v5161 = *(i8*)(intptr_t)v5160;
	*(i8*)(intptr_t)(ws+3344) = v5161;
	i8 v5162 = (i8)(intptr_t)(f221_AddAliasString);

	((void(*)(void))(intptr_t)v5162)();

}

// ArchGuessIntType workspace at ws+3448 length ws+16
void f241_ArchGuessIntType(void) {

	i8 v5163 = (i8)(intptr_t)(ws+3448);
	i4 v5164 = *(i4*)(intptr_t)v5163;
	i4 v5165 = (i4)+0;
	if ((s4)v5164<(s4)v5165) goto c02_0430; else goto c02_0431;

c02_0431:;

	i4 v5166 = (i4)+255;
	i8 v5167 = (i8)(intptr_t)(ws+3452);
	i4 v5168 = *(i4*)(intptr_t)v5167;
	if ((s4)v5166<(s4)v5168) goto c02_0430; else goto c02_042f;

c02_042f:;

	i8 v5169 = (i8)(intptr_t)(ws+1512);
	i8 v5170 = *(i8*)(intptr_t)v5169;
	i8 v5171 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5171 = v5170;

	goto c02_042a;

c02_0430:;

	i8 v5172 = (i8)(intptr_t)(ws+3448);
	i4 v5173 = *(i4*)(intptr_t)v5172;
	i4 v5174 = (i4)-128;
	if ((s4)v5173<(s4)v5174) goto c02_0437; else goto c02_0438;

c02_0438:;

	i4 v5175 = (i4)+127;
	i8 v5176 = (i8)(intptr_t)(ws+3452);
	i4 v5177 = *(i4*)(intptr_t)v5176;
	if ((s4)v5175<(s4)v5177) goto c02_0437; else goto c02_0436;

c02_0436:;

	i8 v5178 = (i8)(intptr_t)(ws+1520);
	i8 v5179 = *(i8*)(intptr_t)v5178;
	i8 v5180 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5180 = v5179;

	goto c02_042a;

c02_0437:;

	i8 v5181 = (i8)(intptr_t)(ws+3448);
	i4 v5182 = *(i4*)(intptr_t)v5181;
	i4 v5183 = (i4)+0;
	if ((s4)v5182<(s4)v5183) goto c02_043e; else goto c02_043f;

c02_043f:;

	i4 v5184 = (i4)+65535;
	i8 v5185 = (i8)(intptr_t)(ws+3452);
	i4 v5186 = *(i4*)(intptr_t)v5185;
	if ((s4)v5184<(s4)v5186) goto c02_043e; else goto c02_043d;

c02_043d:;

	i8 v5187 = (i8)(intptr_t)(ws+1496);
	i8 v5188 = *(i8*)(intptr_t)v5187;
	i8 v5189 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5189 = v5188;

	goto c02_042a;

c02_043e:;

	i8 v5190 = (i8)(intptr_t)(ws+3448);
	i4 v5191 = *(i4*)(intptr_t)v5190;
	i4 v5192 = (i4)-32768;
	if ((s4)v5191<(s4)v5192) goto c02_0445; else goto c02_0446;

c02_0446:;

	i4 v5193 = (i4)+32767;
	i8 v5194 = (i8)(intptr_t)(ws+3452);
	i4 v5195 = *(i4*)(intptr_t)v5194;
	if ((s4)v5193<(s4)v5195) goto c02_0445; else goto c02_0444;

c02_0444:;

	i8 v5196 = (i8)(intptr_t)(ws+1504);
	i8 v5197 = *(i8*)(intptr_t)v5196;
	i8 v5198 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5198 = v5197;

	goto c02_042a;

c02_0445:;

	i8 v5199 = (i8)(intptr_t)(ws+3448);
	i4 v5200 = *(i4*)(intptr_t)v5199;
	i4 v5201 = (i4)+0;
	if ((s4)v5200<(s4)v5201) goto c02_044a; else goto c02_0449;

c02_0449:;

	i8 v5202 = (i8)(intptr_t)(ws+1480);
	i8 v5203 = *(i8*)(intptr_t)v5202;
	i8 v5204 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5204 = v5203;

	goto c02_042a;

c02_044a:;

	i8 v5205 = (i8)(intptr_t)(ws+1488);
	i8 v5206 = *(i8*)(intptr_t)v5205;
	i8 v5207 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5207 = v5206;

c02_042a:;

}
	void f239_ArchAlignUp(void);

// ArchInitVariable workspace at ws+3520 length ws+20
void f242_ArchInitVariable(void) {

	i8 v5208 = (i8)(intptr_t)(ws+3520);
	i8 v5209 = *(i8*)(intptr_t)v5208;
	i8 v5210 = *(i8*)(intptr_t)v5209;
	i8 v5211 = v5210+(+8);
	i8 v5212 = *(i8*)(intptr_t)v5211;
	i8 v5213 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v5213 = v5212;

	i8 v5214 = (i8)(intptr_t)(ws+3528);
	i8 v5215 = *(i8*)(intptr_t)v5214;
	i8 v5216 = v5215+(+58);
	i2 v5217 = *(i2*)(intptr_t)v5216;
	i8 v5218 = (i8)(intptr_t)(ws+3536);
	*(i2*)(intptr_t)v5218 = v5217;

	i8 v5219 = (i8)(intptr_t)(ws+3536);
	i2 v5220 = *(i2*)(intptr_t)v5219;
	*(i2*)(intptr_t)(ws+3544) = v5220;
	i8 v5221 = (i8)(intptr_t)(ws+3520);
	i8 v5222 = *(i8*)(intptr_t)v5221;
	i8 v5223 = *(i8*)(intptr_t)v5222;
	i8 v5224 = *(i8*)(intptr_t)v5223;
	i8 v5225 = v5224+(+53);
	i1 v5226 = *(i1*)(intptr_t)v5225;
	*(i1*)(intptr_t)(ws+3546) = v5226;
	i8 v5227 = (i8)(intptr_t)(f239_ArchAlignUp);

	((void(*)(void))(intptr_t)v5227)();

	i2 v5228 = *(i2*)(intptr_t)(ws+3548);
	i8 v5229 = (i8)(intptr_t)(ws+3538);
	*(i2*)(intptr_t)v5229 = v5228;

	i8 v5230 = (i8)(intptr_t)(ws+3538);
	i2 v5231 = *(i2*)(intptr_t)v5230;
	i8 v5232 = (i8)(intptr_t)(ws+3536);
	*(i2*)(intptr_t)v5232 = v5231;

	i8 v5233 = (i8)(intptr_t)(ws+3536);
	i2 v5234 = *(i2*)(intptr_t)v5233;
	i8 v5235 = (i8)(intptr_t)(ws+3520);
	i8 v5236 = *(i8*)(intptr_t)v5235;
	i8 v5237 = *(i8*)(intptr_t)v5236;
	i8 v5238 = v5237+(+24);
	*(i2*)(intptr_t)v5238 = v5234;

	i8 v5239 = (i8)(intptr_t)(ws+3536);
	i2 v5240 = *(i2*)(intptr_t)v5239;
	i8 v5241 = (i8)(intptr_t)(ws+3520);
	i8 v5242 = *(i8*)(intptr_t)v5241;
	i8 v5243 = *(i8*)(intptr_t)v5242;
	i8 v5244 = *(i8*)(intptr_t)v5243;
	i8 v5245 = v5244+(+48);
	i2 v5246 = *(i2*)(intptr_t)v5245;
	i2 v5247 = v5240+v5246;
	i8 v5248 = (i8)(intptr_t)(ws+3528);
	i8 v5249 = *(i8*)(intptr_t)v5248;
	i8 v5250 = v5249+(+58);
	*(i2*)(intptr_t)v5250 = v5247;

}
	void f239_ArchAlignUp(void);

// ArchInitMember workspace at ws+3392 length ws+20
void f243_ArchInitMember(void) {

	i8 v5251 = (i8)(intptr_t)(ws+3408);
	i2 v5252 = *(i2*)(intptr_t)v5251;
	*(i2*)(intptr_t)(ws+3544) = v5252;
	i8 v5253 = (i8)(intptr_t)(ws+3400);
	i8 v5254 = *(i8*)(intptr_t)v5253;
	i8 v5255 = *(i8*)(intptr_t)v5254;
	i8 v5256 = *(i8*)(intptr_t)v5255;
	i8 v5257 = v5256+(+53);
	i1 v5258 = *(i1*)(intptr_t)v5257;
	*(i1*)(intptr_t)(ws+3546) = v5258;
	i8 v5259 = (i8)(intptr_t)(f239_ArchAlignUp);

	((void(*)(void))(intptr_t)v5259)();

	i2 v5260 = *(i2*)(intptr_t)(ws+3548);
	i8 v5261 = (i8)(intptr_t)(ws+3410);
	*(i2*)(intptr_t)v5261 = v5260;

	i8 v5262 = (i8)(intptr_t)(ws+3410);
	i2 v5263 = *(i2*)(intptr_t)v5262;
	i8 v5264 = (i8)(intptr_t)(ws+3408);
	*(i2*)(intptr_t)v5264 = v5263;

	i8 v5265 = (i8)(intptr_t)(ws+3408);
	i2 v5266 = *(i2*)(intptr_t)v5265;
	i8 v5267 = (i8)(intptr_t)(ws+3400);
	i8 v5268 = *(i8*)(intptr_t)v5267;
	i8 v5269 = *(i8*)(intptr_t)v5268;
	i8 v5270 = v5269+(+24);
	*(i2*)(intptr_t)v5270 = v5266;

	i8 v5271 = (i8)(intptr_t)(ws+3408);
	i2 v5272 = *(i2*)(intptr_t)v5271;
	i8 v5273 = (i8)(intptr_t)(ws+3400);
	i8 v5274 = *(i8*)(intptr_t)v5273;
	i8 v5275 = *(i8*)(intptr_t)v5274;
	i8 v5276 = *(i8*)(intptr_t)v5275;
	i8 v5277 = v5276+(+48);
	i2 v5278 = *(i2*)(intptr_t)v5277;
	i2 v5279 = v5272+v5278;
	i8 v5280 = (i8)(intptr_t)(ws+3408);
	*(i2*)(intptr_t)v5280 = v5279;

	i8 v5281 = (i8)(intptr_t)(ws+3392);
	i8 v5282 = *(i8*)(intptr_t)v5281;
	i8 v5283 = v5282+(+48);
	i2 v5284 = *(i2*)(intptr_t)v5283;
	i8 v5285 = (i8)(intptr_t)(ws+3408);
	i2 v5286 = *(i2*)(intptr_t)v5285;
	if (v5284<v5286) goto c02_044e; else goto c02_044f;

c02_044e:;

	i8 v5287 = (i8)(intptr_t)(ws+3408);
	i2 v5288 = *(i2*)(intptr_t)v5287;
	i8 v5289 = (i8)(intptr_t)(ws+3392);
	i8 v5290 = *(i8*)(intptr_t)v5289;
	i8 v5291 = v5290+(+48);
	*(i2*)(intptr_t)v5291 = v5288;

c02_044f:;

c02_044b:;

}
	void f175_E_b16(void);
	void f175_E_b16(void);
	void f175_E_b16(void);
	void f174_E_b8(void);

// WriteMid1 workspace at ws+3568 length ws+0
void f244_WriteMid1(void) {

	i8 v5292 = (i8)(intptr_t)(ws+3560);
	i8 v5293 = *(i8*)(intptr_t)v5292;
	i2 v5294 = *(i2*)(intptr_t)v5293;
	*(i2*)(intptr_t)(ws+3576) = v5294;
	i8 v5295 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5295)();

	i8 v5296 = (i8)(intptr_t)(ws+3560);
	i8 v5297 = *(i8*)(intptr_t)v5296;
	i8 v5298 = v5297+(+2);
	i2 v5299 = *(i2*)(intptr_t)v5298;
	*(i2*)(intptr_t)(ws+3576) = v5299;
	i8 v5300 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5300)();

	i8 v5301 = (i8)(intptr_t)(ws+3560);
	i8 v5302 = *(i8*)(intptr_t)v5301;
	i8 v5303 = v5302+(+4);
	i2 v5304 = *(i2*)(intptr_t)v5303;
	*(i2*)(intptr_t)(ws+3576) = v5304;
	i8 v5305 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5305)();

	i8 v5306 = (i8)(intptr_t)(ws+3560);
	i8 v5307 = *(i8*)(intptr_t)v5306;
	i8 v5308 = v5307+(+6);
	i1 v5309 = *(i1*)(intptr_t)v5308;
	*(i1*)(intptr_t)(ws+3600) = v5309;
	i8 v5310 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5310)();

}
	void f176_E_b32(void);

// WriteMid2 workspace at ws+3568 length ws+0
void f245_WriteMid2(void) {

	i8 v5311 = (i8)(intptr_t)(ws+3560);
	i8 v5312 = *(i8*)(intptr_t)v5311;
	i4 v5313 = *(i4*)(intptr_t)v5312;
	*(i4*)(intptr_t)(ws+3568) = v5313;
	i8 v5314 = (i8)(intptr_t)(f176_E_b32);

	((void(*)(void))(intptr_t)v5314)();

}

// WriteMid3 workspace at ws+3568 length ws+0
void f246_WriteMid3(void) {

}
	void f175_E_b16(void);
	void f174_E_b8(void);
	void f177_E_bsize(void);
	void f174_E_b8(void);

// WriteMid4 workspace at ws+3568 length ws+0
void f247_WriteMid4(void) {

	i8 v5315 = (i8)(intptr_t)(ws+3560);
	i8 v5316 = *(i8*)(intptr_t)v5315;
	i8 v5317 = *(i8*)(intptr_t)v5316;
	i8 v5318 = *(i8*)(intptr_t)v5317;
	i8 v5319 = v5318+(+8);
	i8 v5320 = *(i8*)(intptr_t)v5319;
	i8 v5321 = v5320+(+56);
	i2 v5322 = *(i2*)(intptr_t)v5321;
	*(i2*)(intptr_t)(ws+3576) = v5322;
	i8 v5323 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5323)();

	i8 v5324 = (i8)(intptr_t)(ws+3560);
	i8 v5325 = *(i8*)(intptr_t)v5324;
	i8 v5326 = *(i8*)(intptr_t)v5325;
	i8 v5327 = *(i8*)(intptr_t)v5326;
	i8 v5328 = v5327+(+26);
	i1 v5329 = *(i1*)(intptr_t)v5328;
	*(i1*)(intptr_t)(ws+3600) = v5329;
	i8 v5330 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5330)();

	i8 v5331 = (i8)(intptr_t)(ws+3560);
	i8 v5332 = *(i8*)(intptr_t)v5331;
	i8 v5333 = *(i8*)(intptr_t)v5332;
	i8 v5334 = *(i8*)(intptr_t)v5333;
	i8 v5335 = v5334+(+24);
	i2 v5336 = *(i2*)(intptr_t)v5335;
	*(i2*)(intptr_t)(ws+3568) = v5336;
	i8 v5337 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(void))(intptr_t)v5337)();

	i8 v5338 = (i8)(intptr_t)(ws+3560);
	i8 v5339 = *(i8*)(intptr_t)v5338;
	i8 v5340 = *(i8*)(intptr_t)v5339;
	i8 v5341 = *(i8*)(intptr_t)v5340;
	i8 v5342 = *(i8*)(intptr_t)v5341;
	i8 v5343 = v5342+(+48);
	i2 v5344 = *(i2*)(intptr_t)v5343;
	i1 v5345 = v5344;
	*(i1*)(intptr_t)(ws+3600) = v5345;
	i8 v5346 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5346)();

}
	void f175_E_b16(void);

// WriteMid5 workspace at ws+3568 length ws+0
void f248_WriteMid5(void) {

	i8 v5347 = (i8)(intptr_t)(ws+3560);
	i8 v5348 = *(i8*)(intptr_t)v5347;
	i2 v5349 = *(i2*)(intptr_t)v5348;
	*(i2*)(intptr_t)(ws+3576) = v5349;
	i8 v5350 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5350)();

}
	void f176_E_b32(void);
	void f175_E_b16(void);

// WriteMid6 workspace at ws+3568 length ws+0
void f249_WriteMid6(void) {

	i8 v5351 = (i8)(intptr_t)(ws+3560);
	i8 v5352 = *(i8*)(intptr_t)v5351;
	i4 v5353 = *(i4*)(intptr_t)v5352;
	*(i4*)(intptr_t)(ws+3568) = v5353;
	i8 v5354 = (i8)(intptr_t)(f176_E_b32);

	((void(*)(void))(intptr_t)v5354)();

	i8 v5355 = (i8)(intptr_t)(ws+3560);
	i8 v5356 = *(i8*)(intptr_t)v5355;
	i8 v5357 = v5356+(+4);
	i2 v5358 = *(i2*)(intptr_t)v5357;
	*(i2*)(intptr_t)(ws+3576) = v5358;
	i8 v5359 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5359)();

}
	void f185_E_countedstring(void);

// WriteMid7 workspace at ws+3568 length ws+0
void f250_WriteMid7(void) {

	i8 v5360 = (i8)(intptr_t)(ws+3560);
	i8 v5361 = *(i8*)(intptr_t)v5360;
	i8 v5362 = *(i8*)(intptr_t)v5361;
	*(i8*)(intptr_t)(ws+3568) = v5362;
	i8 v5363 = (i8)(intptr_t)(f185_E_countedstring);

	((void(*)(void))(intptr_t)v5363)();

}
	void f175_E_b16(void);
	void f175_E_b16(void);
	void f174_E_b8(void);
	void f177_E_bsize(void);
	void f174_E_b8(void);
	void f174_E_b8(void);

// WriteMid8 workspace at ws+3568 length ws+0
void f251_WriteMid8(void) {

	i8 v5364 = (i8)(intptr_t)(ws+3560);
	i8 v5365 = *(i8*)(intptr_t)v5364;
	i8 v5366 = *(i8*)(intptr_t)v5365;
	i8 v5367 = v5366+(+56);
	i2 v5368 = *(i2*)(intptr_t)v5367;
	*(i2*)(intptr_t)(ws+3576) = v5368;
	i8 v5369 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5369)();

	i8 v5370 = (i8)(intptr_t)(ws+3560);
	i8 v5371 = *(i8*)(intptr_t)v5370;
	i8 v5372 = v5371+(+8);
	i8 v5373 = *(i8*)(intptr_t)v5372;
	i8 v5374 = *(i8*)(intptr_t)v5373;
	i8 v5375 = v5374+(+8);
	i8 v5376 = *(i8*)(intptr_t)v5375;
	i8 v5377 = v5376+(+56);
	i2 v5378 = *(i2*)(intptr_t)v5377;
	*(i2*)(intptr_t)(ws+3576) = v5378;
	i8 v5379 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5379)();

	i8 v5380 = (i8)(intptr_t)(ws+3560);
	i8 v5381 = *(i8*)(intptr_t)v5380;
	i8 v5382 = v5381+(+8);
	i8 v5383 = *(i8*)(intptr_t)v5382;
	i8 v5384 = *(i8*)(intptr_t)v5383;
	i8 v5385 = v5384+(+26);
	i1 v5386 = *(i1*)(intptr_t)v5385;
	*(i1*)(intptr_t)(ws+3600) = v5386;
	i8 v5387 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5387)();

	i8 v5388 = (i8)(intptr_t)(ws+3560);
	i8 v5389 = *(i8*)(intptr_t)v5388;
	i8 v5390 = v5389+(+8);
	i8 v5391 = *(i8*)(intptr_t)v5390;
	i8 v5392 = *(i8*)(intptr_t)v5391;
	i8 v5393 = v5392+(+24);
	i2 v5394 = *(i2*)(intptr_t)v5393;
	*(i2*)(intptr_t)(ws+3568) = v5394;
	i8 v5395 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(void))(intptr_t)v5395)();

	i8 v5396 = (i8)(intptr_t)(ws+3560);
	i8 v5397 = *(i8*)(intptr_t)v5396;
	i8 v5398 = v5397+(+8);
	i8 v5399 = *(i8*)(intptr_t)v5398;
	i8 v5400 = *(i8*)(intptr_t)v5399;
	i8 v5401 = *(i8*)(intptr_t)v5400;
	i8 v5402 = v5401+(+48);
	i2 v5403 = *(i2*)(intptr_t)v5402;
	i1 v5404 = v5403;
	*(i1*)(intptr_t)(ws+3600) = v5404;
	i8 v5405 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5405)();

	i8 v5406 = (i8)(intptr_t)(ws+3560);
	i8 v5407 = *(i8*)(intptr_t)v5406;
	i8 v5408 = v5407+(+16);
	i1 v5409 = *(i1*)(intptr_t)v5408;
	*(i1*)(intptr_t)(ws+3600) = v5409;
	i8 v5410 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5410)();

}
	void f175_E_b16(void);
	void f174_E_b8(void);
	void f177_E_bsize(void);
	void f174_E_b8(void);
	void f177_E_bsize(void);

// WriteMid9 workspace at ws+3568 length ws+0
void f252_WriteMid9(void) {

	i8 v5411 = (i8)(intptr_t)(ws+3560);
	i8 v5412 = *(i8*)(intptr_t)v5411;
	i8 v5413 = *(i8*)(intptr_t)v5412;
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = v5414+(+8);
	i8 v5416 = *(i8*)(intptr_t)v5415;
	i8 v5417 = v5416+(+56);
	i2 v5418 = *(i2*)(intptr_t)v5417;
	*(i2*)(intptr_t)(ws+3576) = v5418;
	i8 v5419 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5419)();

	i8 v5420 = (i8)(intptr_t)(ws+3560);
	i8 v5421 = *(i8*)(intptr_t)v5420;
	i8 v5422 = *(i8*)(intptr_t)v5421;
	i8 v5423 = *(i8*)(intptr_t)v5422;
	i8 v5424 = v5423+(+26);
	i1 v5425 = *(i1*)(intptr_t)v5424;
	*(i1*)(intptr_t)(ws+3600) = v5425;
	i8 v5426 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5426)();

	i8 v5427 = (i8)(intptr_t)(ws+3560);
	i8 v5428 = *(i8*)(intptr_t)v5427;
	i8 v5429 = *(i8*)(intptr_t)v5428;
	i8 v5430 = *(i8*)(intptr_t)v5429;
	i8 v5431 = v5430+(+24);
	i2 v5432 = *(i2*)(intptr_t)v5431;
	*(i2*)(intptr_t)(ws+3568) = v5432;
	i8 v5433 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(void))(intptr_t)v5433)();

	i8 v5434 = (i8)(intptr_t)(ws+3560);
	i8 v5435 = *(i8*)(intptr_t)v5434;
	i8 v5436 = *(i8*)(intptr_t)v5435;
	i8 v5437 = *(i8*)(intptr_t)v5436;
	i8 v5438 = *(i8*)(intptr_t)v5437;
	i8 v5439 = v5438+(+48);
	i2 v5440 = *(i2*)(intptr_t)v5439;
	i1 v5441 = v5440;
	*(i1*)(intptr_t)(ws+3600) = v5441;
	i8 v5442 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5442)();

	i8 v5443 = (i8)(intptr_t)(ws+3560);
	i8 v5444 = *(i8*)(intptr_t)v5443;
	i8 v5445 = v5444+(+8);
	i2 v5446 = *(i2*)(intptr_t)v5445;
	*(i2*)(intptr_t)(ws+3568) = v5446;
	i8 v5447 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(void))(intptr_t)v5447)();

}
	void f175_E_b16(void);

// WriteMid10 workspace at ws+3568 length ws+0
void f253_WriteMid10(void) {

	i8 v5448 = (i8)(intptr_t)(ws+3560);
	i8 v5449 = *(i8*)(intptr_t)v5448;
	i8 v5450 = *(i8*)(intptr_t)v5449;
	i8 v5451 = v5450+(+56);
	i2 v5452 = *(i2*)(intptr_t)v5451;
	*(i2*)(intptr_t)(ws+3576) = v5452;
	i8 v5453 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(void))(intptr_t)v5453)();

}
	void f174_E_b8(void);

// WriteMid11 workspace at ws+3568 length ws+0
void f254_WriteMid11(void) {

	i8 v5454 = (i8)(intptr_t)(ws+3560);
	i8 v5455 = *(i8*)(intptr_t)v5454;
	i1 v5456 = *(i1*)(intptr_t)v5455;
	*(i1*)(intptr_t)(ws+3600) = v5456;
	i8 v5457 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5457)();

}
	void f244_WriteMid1(void);
	void f245_WriteMid2(void);
	void f246_WriteMid3(void);
	void f247_WriteMid4(void);
	void f248_WriteMid5(void);
	void f249_WriteMid6(void);
	void f250_WriteMid7(void);
	void f251_WriteMid8(void);
	void f252_WriteMid9(void);
	void f253_WriteMid10(void);
	void f254_WriteMid11(void);
static data f3___main_s0450[] = {

	{ .ptr = (void*)f244_WriteMid1 },

	{ .ptr = (void*)f245_WriteMid2 },

	{ .ptr = (void*)f246_WriteMid3 },

	{ .ptr = (void*)f247_WriteMid4 },

	{ .ptr = (void*)f248_WriteMid5 },

	{ .ptr = (void*)f249_WriteMid6 },

	{ .ptr = (void*)f250_WriteMid7 },

	{ .ptr = (void*)f251_WriteMid8 },

	{ .ptr = (void*)f252_WriteMid9 },

	{ .ptr = (void*)f253_WriteMid10 },

	{ .ptr = (void*)f254_WriteMid11 },

};
static data f3___main_s0451[] = {








	{ .i1 = { 0x02,0x02,0x02,0x09,0x09,0x03,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x06,0x08,0x09,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x06,0x03,0x09,0x01,0x02,0x02}},








	{ .i1 = { 0x02,0x04,0x04,0x02,0x09,0x07,0x07,0x07}},








	{ .i1 = { 0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x01}},








	{ .i1 = { 0x06,0x08,0x09,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},





	{ .i1 = { 0x02,0x02,0x02,0x02}},
};
	void f174_E_b8(void);
	void f60_PushNode(void);
	void f62_NextNode(void);
	void f174_E_b8(void);
	void f63_Discard(void);

// ReallyGenerate workspace at ws+3520 length ws+33
void f256_ReallyGenerate(void) {

	i1 v5505 = (i1)+77;
	*(i1*)(intptr_t)(ws+3600) = v5505;
	i8 v5506 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5506)();

	i8 v5507 = (i8)(intptr_t)(ws+224);
	i8 v5508 = *(i8*)(intptr_t)v5507;
	i8 v5509 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v5509 = v5508;

	i8 v5510 = (i8)(intptr_t)(ws+3520);
	i8 v5511 = *(i8*)(intptr_t)v5510;
	*(i8*)(intptr_t)(ws+3640) = v5511;
	i8 v5512 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v5512)();

c02_045d:;

	i8 v5513 = (i8)(intptr_t)(ws+224);
	i8 v5514 = *(i8*)(intptr_t)v5513;
	i8 v5515 = (i8)(intptr_t)(ws+3528);
	i8 v5516 = *(i8*)(intptr_t)v5515;
	if (v5514==v5516) goto c02_0462; else goto c02_0461;

c02_0461:;

	i8 v5517 = (i8)(intptr_t)(f62_NextNode);

	((void(*)(void))(intptr_t)v5517)();

	i8 v5518 = *(i8*)(intptr_t)(ws+3624);
	i8 v5519 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v5519 = v5518;

	i8 v5520 = (i8)(intptr_t)(ws+3536);
	i8 v5521 = *(i8*)(intptr_t)v5520;
	i8 v5522 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v5522 = v5521;

	i8 v5523 = (i8)(intptr_t)(ws+3544);
	i8 v5524 = *(i8*)(intptr_t)v5523;
	i8 v5525 = v5524+(+48);
	i1 v5526 = *(i1*)(intptr_t)v5525;
	*(i1*)(intptr_t)(ws+3600) = v5526;
	i8 v5527 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(void))(intptr_t)v5527)();

	i8 v5528 = (i8)(intptr_t)((i1*)f3___main_s0451);
	i8 v5529 = (i8)(intptr_t)(ws+3544);
	i8 v5530 = *(i8*)(intptr_t)v5529;
	i8 v5531 = v5530+(+48);
	i1 v5532 = *(i1*)(intptr_t)v5531;
	i1 v5533 = v5532+(-1);
	i8 v5534 = v5533;
	i8 v5535 = v5528+v5534;
	i1 v5536 = *(i1*)(intptr_t)v5535;
	i8 v5537 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v5537 = v5536;

	i8 v5538 = (i8)(intptr_t)(ws+3544);
	i8 v5539 = *(i8*)(intptr_t)v5538;
	*(i8*)(intptr_t)(ws+3560) = v5539;
	i8 v5540 = (i8)(intptr_t)((i1*)f3___main_s0450);
	i8 v5541 = (i8)(intptr_t)(ws+3552);
	i1 v5542 = *(i1*)(intptr_t)v5541;
	i8 v5543 = v5542;
	i1 v5544 = (i1)+3;
	i8 v5545 = ((i8)v5543)<<v5544;
	i8 v5546 = v5540+v5545;
	i8 v5547 = *(i8*)(intptr_t)v5546;

	((void(*)(void))(intptr_t)v5547)();

	goto c02_045d;

c02_0462:;

	i8 v5548 = (i8)(intptr_t)(ws+3520);
	i8 v5549 = *(i8*)(intptr_t)v5548;
	*(i8*)(intptr_t)(ws+3592) = v5549;
	i8 v5550 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v5550)();

}
	void f63_Discard(void);
	void f125_MidAsmgroupstart(void);
	void f256_ReallyGenerate(void);
	void f149_MidAsmgroupend(void);
	void f256_ReallyGenerate(void);
	void f256_ReallyGenerate(void);

// Generate workspace at ws+3488 length ws+32
void f257_Generate(void) {

	i8 v5553 = (i8)(intptr_t)(ws+3488);
	i8 v5554 = *(i8*)(intptr_t)v5553;
	i8 v5555 = v5554+(+48);
	i1 v5556 = *(i1*)(intptr_t)v5555;
	i8 v5557 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5557 = v5556;

	i8 v5558 = (i8)(intptr_t)(ws+1536);
	i1 v5559 = *(i1*)(intptr_t)v5558;
	i1 v5560 = (i1)+27;
	if (v5559==v5560) goto c02_0468; else goto c02_046a;

c02_046a:;

	i8 v5561 = (i8)(intptr_t)(ws+1536);
	i1 v5562 = *(i1*)(intptr_t)v5561;
	i1 v5563 = (i1)+28;
	if (v5562==v5563) goto c02_0468; else goto c02_0469;

c02_0468:;

	i8 v5564 = (i8)(intptr_t)(ws+3496);
	i1 v5565 = *(i1*)(intptr_t)v5564;
	i1 v5566 = (i1)+26;
	if (v5565==v5566) goto c02_0471; else goto c02_0472;

c02_0472:;

	i8 v5567 = (i8)(intptr_t)(ws+3496);
	i1 v5568 = *(i1*)(intptr_t)v5567;
	i1 v5569 = (i1)+5;
	if (v5568==v5569) goto c02_0471; else goto c02_0470;

c02_0470:;

	i8 v5570 = (i8)(intptr_t)(ws+3488);
	i8 v5571 = *(i8*)(intptr_t)v5570;
	*(i8*)(intptr_t)(ws+3592) = v5571;
	i8 v5572 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v5572)();

	return;

c02_0471:;

c02_046b:;

c02_0469:;

c02_0463:;

	i8 v5573 = (i8)(intptr_t)(ws+3496);
	i1 v5574 = *(i1*)(intptr_t)v5573;
	i1 v5575 = (i1)+18;
	if (v5574==v5575) goto c02_047a; else goto c02_0479;

c02_047a:;

	i8 v5576 = (i8)(intptr_t)(ws+1536);
	i1 v5577 = *(i1*)(intptr_t)v5576;
	i1 v5578 = (i1)+23;
	if (v5577==v5578) goto c02_0479; else goto c02_0478;

c02_0478:;

	i8 v5579 = (i8)(intptr_t)(f125_MidAsmgroupstart);

	((void(*)(void))(intptr_t)v5579)();

	i8 v5580 = *(i8*)(intptr_t)(ws+3520);
	i8 v5581 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5581 = v5580;

	i8 v5582 = (i8)(intptr_t)(ws+3504);
	i8 v5583 = *(i8*)(intptr_t)v5582;
	*(i8*)(intptr_t)(ws+3520) = v5583;
	i8 v5584 = (i8)(intptr_t)(f256_ReallyGenerate);

	((void(*)(void))(intptr_t)v5584)();

c02_0479:;

c02_0473:;

	i8 v5585 = (i8)(intptr_t)(ws+1536);
	i1 v5586 = *(i1*)(intptr_t)v5585;
	i1 v5587 = (i1)+23;
	if (v5586==v5587) goto c02_0482; else goto c02_0481;

c02_0482:;

	i8 v5588 = (i8)(intptr_t)(ws+3496);
	i1 v5589 = *(i1*)(intptr_t)v5588;
	i1 v5590 = (i1)+18;
	if (v5589==v5590) goto c02_0481; else goto c02_0480;

c02_0480:;

	i8 v5591 = (i8)(intptr_t)(f149_MidAsmgroupend);

	((void(*)(void))(intptr_t)v5591)();

	i8 v5592 = *(i8*)(intptr_t)(ws+3520);
	i8 v5593 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5593 = v5592;

	i8 v5594 = (i8)(intptr_t)(ws+3512);
	i8 v5595 = *(i8*)(intptr_t)v5594;
	*(i8*)(intptr_t)(ws+3520) = v5595;
	i8 v5596 = (i8)(intptr_t)(f256_ReallyGenerate);

	((void(*)(void))(intptr_t)v5596)();

c02_0481:;

c02_047b:;

	i8 v5597 = (i8)(intptr_t)(ws+3496);
	i1 v5598 = *(i1*)(intptr_t)v5597;
	i8 v5599 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5599 = v5598;

	i8 v5600 = (i8)(intptr_t)(ws+3488);
	i8 v5601 = *(i8*)(intptr_t)v5600;
	*(i8*)(intptr_t)(ws+3520) = v5601;
	i8 v5602 = (i8)(intptr_t)(f256_ReallyGenerate);

	((void(*)(void))(intptr_t)v5602)();

}
	void f60_PushNode(void);
	void f61_PopNode(void);
	void f60_PushNode(void);
	void f60_PushNode(void);
	void f63_Discard(void);

// push_and_free workspace at ws+3472 length ws+0
void f259_push_and_free(void) {

	i8 v5662 = (i8)(intptr_t)(ws+3424);
	i2 v5663 = *(i2*)(intptr_t)v5662;
	i8 v5664 = (i8)(intptr_t)(ws+3440);
	i8 v5665 = *(i8*)(intptr_t)v5664;
	*(i2*)(intptr_t)v5665 = v5663;

	i8 v5666 = (i8)(intptr_t)(ws+3426);
	i2 v5667 = *(i2*)(intptr_t)v5666;
	i8 v5668 = (i8)(intptr_t)(ws+3440);
	i8 v5669 = *(i8*)(intptr_t)v5668;
	i8 v5670 = v5669+(+2);
	*(i2*)(intptr_t)v5670 = v5667;

	i8 v5671 = (i8)(intptr_t)(ws+3428);
	i2 v5672 = *(i2*)(intptr_t)v5671;
	i8 v5673 = (i8)(intptr_t)(ws+3440);
	i8 v5674 = *(i8*)(intptr_t)v5673;
	i8 v5675 = v5674+(+4);
	*(i2*)(intptr_t)v5675 = v5672;

	i8 v5676 = (i8)+0;
	i8 v5677 = (i8)(intptr_t)(ws+3416);
	i8 v5678 = *(i8*)(intptr_t)v5677;
	i8 v5679 = v5678+(+32);
	*(i8*)(intptr_t)v5679 = v5676;

	i8 v5680 = (i8)+0;
	i8 v5681 = (i8)(intptr_t)(ws+3416);
	i8 v5682 = *(i8*)(intptr_t)v5681;
	i8 v5683 = v5682+(+40);
	*(i8*)(intptr_t)v5683 = v5680;

	i8 v5684 = (i8)(intptr_t)(ws+3440);
	i8 v5685 = *(i8*)(intptr_t)v5684;
	*(i8*)(intptr_t)(ws+3640) = v5685;
	i8 v5686 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v5686)();

	i8 v5687 = (i8)(intptr_t)(ws+3432);
	i8 v5688 = *(i8*)(intptr_t)v5687;
	*(i8*)(intptr_t)(ws+3640) = v5688;
	i8 v5689 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v5689)();

	i8 v5690 = (i8)(intptr_t)(ws+3416);
	i8 v5691 = *(i8*)(intptr_t)v5690;
	*(i8*)(intptr_t)(ws+3592) = v5691;
	i8 v5692 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v5692)();

}
	void f236_AllocLabel(void);
	void f259_push_and_free(void);
	void f236_AllocLabel(void);
	void f259_push_and_free(void);
	void f257_Generate(void);
	void f128_MidLabel(void);
	void f257_Generate(void);

// GenerateConditional workspace at ws+3392 length ws+80
void f258_GenerateConditional(void) {

	i8 v5603 = (i8)(intptr_t)(ws+224);
	i8 v5604 = *(i8*)(intptr_t)v5603;
	i8 v5605 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v5605 = v5604;

	i8 v5606 = (i8)(intptr_t)(ws+3392);
	i8 v5607 = *(i8*)(intptr_t)v5606;
	*(i8*)(intptr_t)(ws+3640) = v5607;
	i8 v5608 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v5608)();

c02_0483:;

	i8 v5609 = (i8)(intptr_t)(ws+224);
	i8 v5610 = *(i8*)(intptr_t)v5609;
	i8 v5611 = (i8)(intptr_t)(ws+3400);
	i8 v5612 = *(i8*)(intptr_t)v5611;
	if (v5610==v5612) goto c02_0488; else goto c02_0487;

c02_0487:;

	i8 v5613 = (i8)(intptr_t)(f61_PopNode);

	((void(*)(void))(intptr_t)v5613)();

	i8 v5614 = *(i8*)(intptr_t)(ws+3640);
	i8 v5615 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v5615 = v5614;

	i8 v5616 = (i8)(intptr_t)(ws+3408);
	i8 v5617 = *(i8*)(intptr_t)v5616;
	i8 v5618 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5618 = v5617;

	i8 v5619 = (i8)(intptr_t)(ws+3416);
	i8 v5620 = *(i8*)(intptr_t)v5619;
	i2 v5621 = *(i2*)(intptr_t)v5620;
	i8 v5622 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5622 = v5621;

	i8 v5623 = (i8)(intptr_t)(ws+3416);
	i8 v5624 = *(i8*)(intptr_t)v5623;
	i8 v5625 = v5624+(+2);
	i2 v5626 = *(i2*)(intptr_t)v5625;
	i8 v5627 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v5627 = v5626;

	i8 v5628 = (i8)(intptr_t)(ws+3416);
	i8 v5629 = *(i8*)(intptr_t)v5628;
	i8 v5630 = v5629+(+4);
	i2 v5631 = *(i2*)(intptr_t)v5630;
	i8 v5632 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v5632 = v5631;

	i8 v5633 = (i8)(intptr_t)(ws+3416);
	i8 v5634 = *(i8*)(intptr_t)v5633;
	i8 v5635 = v5634+(+32);
	i8 v5636 = *(i8*)(intptr_t)v5635;
	i8 v5637 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v5637 = v5636;

	i8 v5638 = (i8)(intptr_t)(ws+3416);
	i8 v5639 = *(i8*)(intptr_t)v5638;
	i8 v5640 = v5639+(+40);
	i8 v5641 = *(i8*)(intptr_t)v5640;
	i8 v5642 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v5642 = v5641;

	i8 v5643 = (i8)(intptr_t)(ws+3416);
	i8 v5644 = *(i8*)(intptr_t)v5643;
	i8 v5645 = v5644+(+48);
	i1 v5646 = *(i1*)(intptr_t)v5645;
	i8 v5647 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v5647 = v5646;

	i8 v5648 = (i8)(intptr_t)(ws+3416);
	i8 v5649 = *(i8*)(intptr_t)v5648;
	i8 v5650 = v5649+(+6);
	i1 v5651 = *(i1*)(intptr_t)v5650;
	i1 v5652 = (i1)+0;
	if (v5651==v5652) goto c02_048d; else goto c02_048c;

c02_048c:;

	i8 v5653 = (i8)(intptr_t)(ws+3424);
	i2 v5654 = *(i2*)(intptr_t)v5653;
	i8 v5655 = (i8)(intptr_t)(ws+3450);
	*(i2*)(intptr_t)v5655 = v5654;

	i8 v5656 = (i8)(intptr_t)(ws+3426);
	i2 v5657 = *(i2*)(intptr_t)v5656;
	i8 v5658 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5658 = v5657;

	i8 v5659 = (i8)(intptr_t)(ws+3450);
	i2 v5660 = *(i2*)(intptr_t)v5659;
	i8 v5661 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v5661 = v5660;

c02_048d:;

c02_0489:;


	i8 v5693 = (i8)(intptr_t)(ws+3448);
	i1 v5694 = *(i1*)(intptr_t)v5693;

	if (v5694 != +55) goto c02_048f;

	i8 v5695 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v5695)();

	i2 v5696 = *(i2*)(intptr_t)(ws+3472);
	i8 v5697 = (i8)(intptr_t)(ws+3454);
	*(i2*)(intptr_t)v5697 = v5696;

	i8 v5698 = (i8)(intptr_t)(ws+3454);
	i2 v5699 = *(i2*)(intptr_t)v5698;
	i8 v5700 = (i8)(intptr_t)(ws+3452);
	*(i2*)(intptr_t)v5700 = v5699;

	i8 v5701 = (i8)(intptr_t)(ws+3424);
	i2 v5702 = *(i2*)(intptr_t)v5701;
	i8 v5703 = (i8)(intptr_t)(ws+3432);
	i8 v5704 = *(i8*)(intptr_t)v5703;
	*(i2*)(intptr_t)v5704 = v5702;

	i8 v5705 = (i8)(intptr_t)(ws+3452);
	i2 v5706 = *(i2*)(intptr_t)v5705;
	i8 v5707 = (i8)(intptr_t)(ws+3432);
	i8 v5708 = *(i8*)(intptr_t)v5707;
	i8 v5709 = v5708+(+2);
	*(i2*)(intptr_t)v5709 = v5706;

	i8 v5710 = (i8)(intptr_t)(ws+3452);
	i2 v5711 = *(i2*)(intptr_t)v5710;
	i8 v5712 = (i8)(intptr_t)(ws+3432);
	i8 v5713 = *(i8*)(intptr_t)v5712;
	i8 v5714 = v5713+(+4);
	*(i2*)(intptr_t)v5714 = v5711;

	i8 v5715 = (i8)(intptr_t)(f259_push_and_free);

	((void(*)(void))(intptr_t)v5715)();

	goto c02_048e;

c02_048f:;

	if (v5694 != +54) goto c02_0490;

	i8 v5716 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v5716)();

	i2 v5717 = *(i2*)(intptr_t)(ws+3472);
	i8 v5718 = (i8)(intptr_t)(ws+3456);
	*(i2*)(intptr_t)v5718 = v5717;

	i8 v5719 = (i8)(intptr_t)(ws+3456);
	i2 v5720 = *(i2*)(intptr_t)v5719;
	i8 v5721 = (i8)(intptr_t)(ws+3452);
	*(i2*)(intptr_t)v5721 = v5720;

	i8 v5722 = (i8)(intptr_t)(ws+3452);
	i2 v5723 = *(i2*)(intptr_t)v5722;
	i8 v5724 = (i8)(intptr_t)(ws+3432);
	i8 v5725 = *(i8*)(intptr_t)v5724;
	*(i2*)(intptr_t)v5725 = v5723;

	i8 v5726 = (i8)(intptr_t)(ws+3426);
	i2 v5727 = *(i2*)(intptr_t)v5726;
	i8 v5728 = (i8)(intptr_t)(ws+3432);
	i8 v5729 = *(i8*)(intptr_t)v5728;
	i8 v5730 = v5729+(+2);
	*(i2*)(intptr_t)v5730 = v5727;

	i8 v5731 = (i8)(intptr_t)(ws+3452);
	i2 v5732 = *(i2*)(intptr_t)v5731;
	i8 v5733 = (i8)(intptr_t)(ws+3432);
	i8 v5734 = *(i8*)(intptr_t)v5733;
	i8 v5735 = v5734+(+4);
	*(i2*)(intptr_t)v5735 = v5732;

	i8 v5736 = (i8)(intptr_t)(f259_push_and_free);

	((void(*)(void))(intptr_t)v5736)();

	goto c02_048e;

c02_0490:;

	i8 v5737 = (i8)(intptr_t)(ws+3424);
	i2 v5738 = *(i2*)(intptr_t)v5737;
	i8 v5739 = (i8)(intptr_t)(ws+3416);
	i8 v5740 = *(i8*)(intptr_t)v5739;
	*(i2*)(intptr_t)v5740 = v5738;

	i8 v5741 = (i8)(intptr_t)(ws+3426);
	i2 v5742 = *(i2*)(intptr_t)v5741;
	i8 v5743 = (i8)(intptr_t)(ws+3416);
	i8 v5744 = *(i8*)(intptr_t)v5743;
	i8 v5745 = v5744+(+2);
	*(i2*)(intptr_t)v5745 = v5742;

	i8 v5746 = (i8)(intptr_t)(ws+3416);
	i8 v5747 = *(i8*)(intptr_t)v5746;
	*(i8*)(intptr_t)(ws+3488) = v5747;
	i8 v5748 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v5748)();

	i8 v5749 = (i8)(intptr_t)(ws+3428);
	i2 v5750 = *(i2*)(intptr_t)v5749;
	*(i2*)(intptr_t)(ws+3472) = v5750;
	i8 v5751 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v5751)();

	i8 v5752 = *(i8*)(intptr_t)(ws+3480);
	i8 v5753 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v5753 = v5752;

	i8 v5754 = (i8)(intptr_t)(ws+3464);
	i8 v5755 = *(i8*)(intptr_t)v5754;
	*(i8*)(intptr_t)(ws+3488) = v5755;
	i8 v5756 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v5756)();

c02_048e:;


	goto c02_0483;

c02_0488:;

}
	void f222_CheckNotPartialType(void);
	void f69_InternalAlloc(void);
	void f242_ArchInitVariable(void);

// InitVariable workspace at ws+3488 length ws+32
void f260_InitVariable(void) {

	i8 v5757 = (i8)(intptr_t)(ws+3504);
	i8 v5758 = *(i8*)(intptr_t)v5757;
	*(i8*)(intptr_t)(ws+3520) = v5758;
	i8 v5759 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v5759)();

	i1 v5760 = (i1)+28;
	i8 v5761 = (i8)(intptr_t)(ws+3496);
	i8 v5762 = *(i8*)(intptr_t)v5761;
	i8 v5763 = v5762+(+32);
	*(i1*)(intptr_t)v5763 = v5760;

	i8 v5764 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v5764;
	i8 v5765 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v5765)();

	i8 v5766 = *(i8*)(intptr_t)(ws+3648);
	i8 v5767 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5767 = v5766;

	i8 v5768 = (i8)(intptr_t)(ws+3512);
	i8 v5769 = *(i8*)(intptr_t)v5768;
	i8 v5770 = (i8)(intptr_t)(ws+3496);
	i8 v5771 = *(i8*)(intptr_t)v5770;
	*(i8*)(intptr_t)v5771 = v5769;

	i8 v5772 = (i8)(intptr_t)(ws+3504);
	i8 v5773 = *(i8*)(intptr_t)v5772;
	i8 v5774 = (i8)(intptr_t)(ws+3496);
	i8 v5775 = *(i8*)(intptr_t)v5774;
	i8 v5776 = *(i8*)(intptr_t)v5775;
	*(i8*)(intptr_t)v5776 = v5773;

	i8 v5777 = (i8)(intptr_t)(ws+3488);
	i8 v5778 = *(i8*)(intptr_t)v5777;
	i8 v5779 = (i8)(intptr_t)(ws+3496);
	i8 v5780 = *(i8*)(intptr_t)v5779;
	i8 v5781 = *(i8*)(intptr_t)v5780;
	i8 v5782 = v5781+(+8);
	*(i8*)(intptr_t)v5782 = v5778;

	i8 v5783 = (i8)(intptr_t)(ws+3496);
	i8 v5784 = *(i8*)(intptr_t)v5783;
	*(i8*)(intptr_t)(ws+3520) = v5784;
	i8 v5785 = (i8)(intptr_t)(f242_ArchInitVariable);

	((void(*)(void))(intptr_t)v5785)();

}
	void f66_AllocNewType(void);
	void f70_StrDupBraced(void);
	void f223_AddTypeToNamespace(void);

// MakePointerType workspace at ws+3496 length ws+32
void f261_MakePointerType(void) {

	i8 v5786 = (i8)(intptr_t)(ws+3496);
	i8 v5787 = *(i8*)(intptr_t)v5786;
	i8 v5788 = v5787+(+40);
	i8 v5789 = *(i8*)(intptr_t)v5788;
	i8 v5790 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5790 = v5789;

	i8 v5791 = (i8)(intptr_t)(ws+3504);
	i8 v5792 = *(i8*)(intptr_t)v5791;
	i8 v5793 = (i8)+0;
	if (v5792==v5793) goto c02_0494; else goto c02_0495;

c02_0494:;

	i8 v5794 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v5794)();

	i8 v5795 = *(i8*)(intptr_t)(ws+3528);
	i8 v5796 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5796 = v5795;

	i8 v5797 = (i8)(intptr_t)(ws+3512);
	i8 v5798 = *(i8*)(intptr_t)v5797;
	i8 v5799 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5799 = v5798;

	i1 v5800 = (i1)+3;
	i8 v5801 = (i8)(intptr_t)(ws+3504);
	i8 v5802 = *(i8*)(intptr_t)v5801;
	i8 v5803 = v5802+(+52);
	*(i1*)(intptr_t)v5803 = v5800;

	i8 v5804 = (i8)(intptr_t)(ws+1528);
	i8 v5805 = *(i8*)(intptr_t)v5804;
	i8 v5806 = v5805+(+48);
	i2 v5807 = *(i2*)(intptr_t)v5806;
	i8 v5808 = (i8)(intptr_t)(ws+3504);
	i8 v5809 = *(i8*)(intptr_t)v5808;
	i8 v5810 = v5809+(+48);
	*(i2*)(intptr_t)v5810 = v5807;

	i8 v5811 = (i8)(intptr_t)(ws+1528);
	i8 v5812 = *(i8*)(intptr_t)v5811;
	i8 v5813 = v5812+(+53);
	i1 v5814 = *(i1*)(intptr_t)v5813;
	i8 v5815 = (i8)(intptr_t)(ws+3504);
	i8 v5816 = *(i8*)(intptr_t)v5815;
	i8 v5817 = v5816+(+53);
	*(i1*)(intptr_t)v5817 = v5814;

	i8 v5818 = (i8)(intptr_t)(ws+1528);
	i8 v5819 = *(i8*)(intptr_t)v5818;
	i8 v5820 = v5819+(+50);
	i2 v5821 = *(i2*)(intptr_t)v5820;
	i8 v5822 = (i8)(intptr_t)(ws+3504);
	i8 v5823 = *(i8*)(intptr_t)v5822;
	i8 v5824 = v5823+(+50);
	*(i2*)(intptr_t)v5824 = v5821;

	i8 v5825 = (i8)(intptr_t)(ws+3496);
	i8 v5826 = *(i8*)(intptr_t)v5825;
	i8 v5827 = (i8)(intptr_t)(ws+3504);
	i8 v5828 = *(i8*)(intptr_t)v5827;
	*(i8*)(intptr_t)v5828 = v5826;

	i8 v5829 = (i8)(intptr_t)(ws+3504);
	i8 v5830 = *(i8*)(intptr_t)v5829;
	i8 v5831 = (i8)(intptr_t)(ws+3496);
	i8 v5832 = *(i8*)(intptr_t)v5831;
	i8 v5833 = v5832+(+40);
	*(i8*)(intptr_t)v5833 = v5830;

	i8 v5834 = (i8)(intptr_t)(ws+3496);
	i8 v5835 = *(i8*)(intptr_t)v5834;
	i8 v5836 = v5835+(+32);
	i8 v5837 = *(i8*)(intptr_t)v5836;
	i8 v5838 = v5837+(+8);
	i8 v5839 = *(i8*)(intptr_t)v5838;
	*(i8*)(intptr_t)(ws+3528) = v5839;
	i8 v5840 = (i8)(intptr_t)(f70_StrDupBraced);

	((void(*)(void))(intptr_t)v5840)();

	i8 v5841 = *(i8*)(intptr_t)(ws+3536);
	i8 v5842 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v5842 = v5841;

	i8 v5843 = (i8)(intptr_t)(ws+3496);
	i8 v5844 = *(i8*)(intptr_t)v5843;
	i8 v5845 = v5844+(+32);
	i8 v5846 = *(i8*)(intptr_t)v5845;
	i8 v5847 = v5846+(+16);
	i8 v5848 = *(i8*)(intptr_t)v5847;
	*(i8*)(intptr_t)(ws+3528) = v5848;
	i8 v5849 = (i8)(intptr_t)(ws+3504);
	i8 v5850 = *(i8*)(intptr_t)v5849;
	*(i8*)(intptr_t)(ws+3536) = v5850;
	i8 v5851 = (i8)(intptr_t)(ws+3520);
	i8 v5852 = *(i8*)(intptr_t)v5851;
	*(i8*)(intptr_t)(ws+3544) = v5852;
	i8 v5853 = (i8)(intptr_t)(f223_AddTypeToNamespace);

	((void(*)(void))(intptr_t)v5853)();

c02_0495:;

c02_0491:;

}
	void f222_CheckNotPartialType(void);
	void f66_AllocNewType(void);
	void f241_ArchGuessIntType(void);
	void f71_StrDupArrayed(void);
	void f223_AddTypeToNamespace(void);

// MakeArrayType workspace at ws+3392 length ws+56
void f262_MakeArrayType(void) {

	i8 v5854 = (i8)(intptr_t)(ws+3392);
	i8 v5855 = *(i8*)(intptr_t)v5854;
	*(i8*)(intptr_t)(ws+3520) = v5855;
	i8 v5856 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v5856)();

	i8 v5857 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v5857)();

	i8 v5858 = *(i8*)(intptr_t)(ws+3528);
	i8 v5859 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5859 = v5858;

	i8 v5860 = (i8)(intptr_t)(ws+3416);
	i8 v5861 = *(i8*)(intptr_t)v5860;
	i8 v5862 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v5862 = v5861;

	i1 v5863 = (i1)+4;
	i8 v5864 = (i8)(intptr_t)(ws+3408);
	i8 v5865 = *(i8*)(intptr_t)v5864;
	i8 v5866 = v5865+(+52);
	*(i1*)(intptr_t)v5866 = v5863;

	i2 v5867 = (i2)+0;
	i8 v5868 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5868 = v5867;

	i2 v5869 = (i2)+0;
	i8 v5870 = (i8)(intptr_t)(ws+3400);
	i2 v5871 = *(i2*)(intptr_t)v5870;
	if (v5869<v5871) goto c02_0499; else goto c02_049a;

c02_0499:;

	i8 v5872 = (i8)(intptr_t)(ws+3392);
	i8 v5873 = *(i8*)(intptr_t)v5872;
	i8 v5874 = v5873+(+50);
	i2 v5875 = *(i2*)(intptr_t)v5874;
	i8 v5876 = (i8)(intptr_t)(ws+3400);
	i2 v5877 = *(i2*)(intptr_t)v5876;
	i2 v5878 = v5877+(-1);
	i2 v5879 = v5875*v5878;
	i8 v5880 = (i8)(intptr_t)(ws+3392);
	i8 v5881 = *(i8*)(intptr_t)v5880;
	i8 v5882 = v5881+(+48);
	i2 v5883 = *(i2*)(intptr_t)v5882;
	i2 v5884 = v5879+v5883;
	i8 v5885 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v5885 = v5884;

c02_049a:;

c02_0496:;

	i8 v5886 = (i8)(intptr_t)(ws+3424);
	i2 v5887 = *(i2*)(intptr_t)v5886;
	i8 v5888 = (i8)(intptr_t)(ws+3408);
	i8 v5889 = *(i8*)(intptr_t)v5888;
	i8 v5890 = v5889+(+48);
	*(i2*)(intptr_t)v5890 = v5887;

	i8 v5891 = (i8)(intptr_t)(ws+3392);
	i8 v5892 = *(i8*)(intptr_t)v5891;
	i8 v5893 = v5892+(+53);
	i1 v5894 = *(i1*)(intptr_t)v5893;
	i8 v5895 = (i8)(intptr_t)(ws+3408);
	i8 v5896 = *(i8*)(intptr_t)v5895;
	i8 v5897 = v5896+(+53);
	*(i1*)(intptr_t)v5897 = v5894;

	i8 v5898 = (i8)(intptr_t)(ws+3392);
	i8 v5899 = *(i8*)(intptr_t)v5898;
	i8 v5900 = v5899+(+50);
	i2 v5901 = *(i2*)(intptr_t)v5900;
	i8 v5902 = (i8)(intptr_t)(ws+3400);
	i2 v5903 = *(i2*)(intptr_t)v5902;
	i2 v5904 = v5901*v5903;
	i8 v5905 = (i8)(intptr_t)(ws+3408);
	i8 v5906 = *(i8*)(intptr_t)v5905;
	i8 v5907 = v5906+(+50);
	*(i2*)(intptr_t)v5907 = v5904;

	i8 v5908 = (i8)(intptr_t)(ws+3392);
	i8 v5909 = *(i8*)(intptr_t)v5908;
	i8 v5910 = (i8)(intptr_t)(ws+3408);
	i8 v5911 = *(i8*)(intptr_t)v5910;
	*(i8*)(intptr_t)v5911 = v5909;

	i8 v5912 = (i8)(intptr_t)(ws+3400);
	i2 v5913 = *(i2*)(intptr_t)v5912;
	i8 v5914 = (i8)(intptr_t)(ws+3408);
	i8 v5915 = *(i8*)(intptr_t)v5914;
	i8 v5916 = v5915+(+8);
	*(i2*)(intptr_t)v5916 = v5913;

	i4 v5917 = (i4)+0;
	*(i4*)(intptr_t)(ws+3448) = v5917;
	i8 v5918 = (i8)(intptr_t)(ws+3400);
	i2 v5919 = *(i2*)(intptr_t)v5918;
	i2 v5920 = v5919+(-1);
	i4 v5921 = v5920;
	*(i4*)(intptr_t)(ws+3452) = v5921;
	i8 v5922 = (i8)(intptr_t)(f241_ArchGuessIntType);

	((void(*)(void))(intptr_t)v5922)();

	i8 v5923 = *(i8*)(intptr_t)(ws+3456);
	i8 v5924 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v5924 = v5923;

	i8 v5925 = (i8)(intptr_t)(ws+3432);
	i8 v5926 = *(i8*)(intptr_t)v5925;
	i8 v5927 = (i8)(intptr_t)(ws+3408);
	i8 v5928 = *(i8*)(intptr_t)v5927;
	i8 v5929 = v5928+(+16);
	*(i8*)(intptr_t)v5929 = v5926;

	i8 v5930 = (i8)(intptr_t)(ws+3392);
	i8 v5931 = *(i8*)(intptr_t)v5930;
	i8 v5932 = v5931+(+32);
	i8 v5933 = *(i8*)(intptr_t)v5932;
	i8 v5934 = v5933+(+8);
	i8 v5935 = *(i8*)(intptr_t)v5934;
	*(i8*)(intptr_t)(ws+3448) = v5935;
	i8 v5936 = (i8)(intptr_t)(ws+3400);
	i2 v5937 = *(i2*)(intptr_t)v5936;
	*(i2*)(intptr_t)(ws+3456) = v5937;
	i8 v5938 = (i8)(intptr_t)(f71_StrDupArrayed);

	((void(*)(void))(intptr_t)v5938)();

	i8 v5939 = *(i8*)(intptr_t)(ws+3464);
	i8 v5940 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v5940 = v5939;

	i8 v5941 = (i8)(intptr_t)(ws+3392);
	i8 v5942 = *(i8*)(intptr_t)v5941;
	i8 v5943 = v5942+(+32);
	i8 v5944 = *(i8*)(intptr_t)v5943;
	i8 v5945 = v5944+(+16);
	i8 v5946 = *(i8*)(intptr_t)v5945;
	*(i8*)(intptr_t)(ws+3528) = v5946;
	i8 v5947 = (i8)(intptr_t)(ws+3408);
	i8 v5948 = *(i8*)(intptr_t)v5947;
	*(i8*)(intptr_t)(ws+3536) = v5948;
	i8 v5949 = (i8)(intptr_t)(ws+3440);
	i8 v5950 = *(i8*)(intptr_t)v5949;
	*(i8*)(intptr_t)(ws+3544) = v5950;
	i8 v5951 = (i8)(intptr_t)(f223_AddTypeToNamespace);

	((void(*)(void))(intptr_t)v5951)();

}

// QueueNamespace workspace at ws+3464 length ws+16
void f264_QueueNamespace(void) {

c02_049b:;

	i8 v5954 = (i8)(intptr_t)(ws+3464);
	i8 v5955 = *(i8*)(intptr_t)v5954;
	i8 v5956 = *(i8*)(intptr_t)v5955;
	i8 v5957 = (i8)+0;
	if (v5956==v5957) goto c02_04a0; else goto c02_049f;

c02_049f:;

	i8 v5958 = (i8)(intptr_t)(ws+3464);
	i8 v5959 = *(i8*)(intptr_t)v5958;
	i8 v5960 = *(i8*)(intptr_t)v5959;
	i8 v5961 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v5961 = v5960;

	i8 v5962 = (i8)(intptr_t)(ws+3472);
	i8 v5963 = *(i8*)(intptr_t)v5962;
	i8 v5964 = v5963+(+24);
	i8 v5965 = *(i8*)(intptr_t)v5964;
	i8 v5966 = (i8)(intptr_t)(ws+3464);
	i8 v5967 = *(i8*)(intptr_t)v5966;
	*(i8*)(intptr_t)v5967 = v5965;

	i8 v5968 = (i8)(intptr_t)(ws+3416);
	i8 v5969 = *(i8*)(intptr_t)v5968;
	i8 v5970 = (i8)(intptr_t)(ws+3472);
	i8 v5971 = *(i8*)(intptr_t)v5970;
	i8 v5972 = v5971+(+24);
	*(i8*)(intptr_t)v5972 = v5969;

	i8 v5973 = (i8)(intptr_t)(ws+3472);
	i8 v5974 = *(i8*)(intptr_t)v5973;
	i8 v5975 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5975 = v5974;

	goto c02_049b;

c02_04a0:;

}
	void f100_GetOutputParameter(void);
	void f99_GetInputParameter(void);
	void f264_QueueNamespace(void);
	void f264_QueueNamespace(void);
	void f34_Free(void);
	void f67_FreeType(void);
	void f34_Free(void);
	void f34_Free(void);
	void f65_FreeSymbol(void);

// DestructSubroutineContents workspace at ws+3408 length ws+56
void f263_DestructSubroutineContents(void) {

	i8 v5952 = (i8)+0;
	i8 v5953 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5953 = v5952;


	i8 v5976 = (i8)(intptr_t)(ws+3408);
	i8 v5977 = *(i8*)(intptr_t)v5976;
	i8 v5978 = v5977+(+81);
	i1 v5979 = *(i1*)(intptr_t)v5978;
	i1 v5980 = (i1)+0;
	if (v5979==v5980) goto c02_04a5; else goto c02_04a4;

c02_04a4:;

	i8 v5981 = (i8)(intptr_t)(ws+3408);
	i8 v5982 = *(i8*)(intptr_t)v5981;
	*(i8*)(intptr_t)(ws+3488) = v5982;
	i8 v5983 = (i8)(intptr_t)(ws+3408);
	i8 v5984 = *(i8*)(intptr_t)v5983;
	i8 v5985 = v5984+(+81);
	i1 v5986 = *(i1*)(intptr_t)v5985;
	i1 v5987 = v5986+(-1);
	*(i1*)(intptr_t)(ws+3496) = v5987;
	i8 v5988 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v5988)();

	i8 v5989 = *(i8*)(intptr_t)(ws+3504);
	i8 v5990 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v5990 = v5989;

	i8 v5991 = (i8)(intptr_t)(ws+3432);
	i8 v5992 = *(i8*)(intptr_t)v5991;
	i8 v5993 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v5993 = v5992;

	goto c02_04a1;

c02_04a5:;

	i8 v5994 = (i8)(intptr_t)(ws+3408);
	i8 v5995 = *(i8*)(intptr_t)v5994;
	i8 v5996 = v5995+(+80);
	i1 v5997 = *(i1*)(intptr_t)v5996;
	i1 v5998 = (i1)+0;
	if (v5997==v5998) goto c02_04a9; else goto c02_04a8;

c02_04a8:;

	i8 v5999 = (i8)(intptr_t)(ws+3408);
	i8 v6000 = *(i8*)(intptr_t)v5999;
	*(i8*)(intptr_t)(ws+3464) = v6000;
	i8 v6001 = (i8)(intptr_t)(ws+3408);
	i8 v6002 = *(i8*)(intptr_t)v6001;
	i8 v6003 = v6002+(+80);
	i1 v6004 = *(i1*)(intptr_t)v6003;
	i1 v6005 = v6004+(-1);
	*(i1*)(intptr_t)(ws+3472) = v6005;
	i8 v6006 = (i8)(intptr_t)(f99_GetInputParameter);

	((void(*)(void))(intptr_t)v6006)();

	i8 v6007 = *(i8*)(intptr_t)(ws+3480);
	i8 v6008 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6008 = v6007;

	i8 v6009 = (i8)(intptr_t)(ws+3440);
	i8 v6010 = *(i8*)(intptr_t)v6009;
	i8 v6011 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6011 = v6010;

	goto c02_04a1;

c02_04a9:;

	i8 v6012 = (i8)+0;
	i8 v6013 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6013 = v6012;

c02_04a1:;

	i8 v6014 = (i8)(intptr_t)(ws+3408);
	i8 v6015 = *(i8*)(intptr_t)v6014;
	i8 v6016 = v6015+(+16);
	i8 v6017 = *(i8*)(intptr_t)v6016;
	i8 v6018 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6018 = v6017;

	i8 v6019 = (i8)(intptr_t)(ws+3424);
	i8 v6020 = *(i8*)(intptr_t)v6019;
	i8 v6021 = (i8)+0;
	if (v6020==v6021) goto c02_04ae; else goto c02_04ad;

c02_04ad:;

	i8 v6022 = (i8)(intptr_t)(ws+3424);
	i8 v6023 = *(i8*)(intptr_t)v6022;
	i8 v6024 = v6023+(+24);
	i8 v6025 = *(i8*)(intptr_t)v6024;
	i8 v6026 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6026 = v6025;

c02_04ae:;

c02_04aa:;

c02_04af:;

	i8 v6027 = (i8)(intptr_t)(ws+3416);
	i8 v6028 = *(i8*)(intptr_t)v6027;
	i8 v6029 = (i8)+0;
	if (v6028==v6029) goto c02_04b4; else goto c02_04b3;

c02_04b3:;

	i8 v6030 = (i8)(intptr_t)(ws+3416);
	i8 v6031 = *(i8*)(intptr_t)v6030;
	i8 v6032 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6032 = v6031;

	i8 v6033 = (i8)(intptr_t)(ws+3416);
	i8 v6034 = *(i8*)(intptr_t)v6033;
	i8 v6035 = v6034+(+24);
	i8 v6036 = *(i8*)(intptr_t)v6035;
	i8 v6037 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6037 = v6036;

	i8 v6038 = (i8)(intptr_t)(ws+3448);
	i8 v6039 = *(i8*)(intptr_t)v6038;
	i8 v6040 = v6039+(+32);
	i1 v6041 = *(i1*)(intptr_t)v6040;

	if (v6041 != +30) goto c02_04b6;

	i8 v6042 = (i8)(intptr_t)(ws+3448);
	i8 v6043 = *(i8*)(intptr_t)v6042;
	i8 v6044 = *(i8*)(intptr_t)v6043;
	i8 v6045 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6045 = v6044;

	i8 v6046 = (i8)(intptr_t)(ws+3456);
	i8 v6047 = *(i8*)(intptr_t)v6046;
	i8 v6048 = v6047+(+52);
	i1 v6049 = *(i1*)(intptr_t)v6048;

	if (v6049 != +5) goto c02_04b8;

	i8 v6050 = (i8)(intptr_t)(ws+3456);
	i8 v6051 = *(i8*)(intptr_t)v6050;
	*(i8*)(intptr_t)(ws+3464) = v6051;
	i8 v6052 = (i8)(intptr_t)(f264_QueueNamespace);

	((void(*)(void))(intptr_t)v6052)();

	goto c02_04b7;

c02_04b8:;

	if (v6049 != +6) goto c02_04b9;

	i8 v6053 = (i8)(intptr_t)(ws+3456);
	i8 v6054 = *(i8*)(intptr_t)v6053;
	i8 v6055 = *(i8*)(intptr_t)v6054;
	i8 v6056 = v6055+(+16);
	*(i8*)(intptr_t)(ws+3464) = v6056;
	i8 v6057 = (i8)(intptr_t)(f264_QueueNamespace);

	((void(*)(void))(intptr_t)v6057)();

	i8 v6058 = (i8)(intptr_t)(ws+3456);
	i8 v6059 = *(i8*)(intptr_t)v6058;
	i8 v6060 = *(i8*)(intptr_t)v6059;
	*(i8*)(intptr_t)(ws+3680) = v6060;
	i8 v6061 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6061)();

c02_04b9:;

c02_04b7:;


	i8 v6062 = (i8)(intptr_t)(ws+3456);
	i8 v6063 = *(i8*)(intptr_t)v6062;
	*(i8*)(intptr_t)(ws+3464) = v6063;
	i8 v6064 = (i8)(intptr_t)(f67_FreeType);

	((void(*)(void))(intptr_t)v6064)();

	goto c02_04b5;

c02_04b6:;

	if (v6041 != +28) goto c02_04ba;

	i8 v6065 = (i8)(intptr_t)(ws+3448);
	i8 v6066 = *(i8*)(intptr_t)v6065;
	i8 v6067 = *(i8*)(intptr_t)v6066;
	*(i8*)(intptr_t)(ws+3680) = v6067;
	i8 v6068 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6068)();

c02_04ba:;

c02_04b5:;


	i8 v6069 = (i8)(intptr_t)(ws+3448);
	i8 v6070 = *(i8*)(intptr_t)v6069;
	i8 v6071 = v6070+(+8);
	i8 v6072 = *(i8*)(intptr_t)v6071;
	*(i8*)(intptr_t)(ws+3680) = v6072;
	i8 v6073 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6073)();

	i8 v6074 = (i8)(intptr_t)(ws+3448);
	i8 v6075 = *(i8*)(intptr_t)v6074;
	*(i8*)(intptr_t)(ws+3464) = v6075;
	i8 v6076 = (i8)(intptr_t)(f65_FreeSymbol);

	((void(*)(void))(intptr_t)v6076)();

	goto c02_04af;

c02_04b4:;

	i8 v6077 = (i8)(intptr_t)(ws+3424);
	i8 v6078 = *(i8*)(intptr_t)v6077;
	i8 v6079 = (i8)+0;
	if (v6078==v6079) goto c02_04bf; else goto c02_04be;

c02_04be:;

	i8 v6080 = (i8)+0;
	i8 v6081 = (i8)(intptr_t)(ws+3424);
	i8 v6082 = *(i8*)(intptr_t)v6081;
	i8 v6083 = v6082+(+24);
	*(i8*)(intptr_t)v6083 = v6080;

	goto c02_04bb;

c02_04bf:;

	i8 v6084 = (i8)+0;
	i8 v6085 = (i8)(intptr_t)(ws+3408);
	i8 v6086 = *(i8*)(intptr_t)v6085;
	i8 v6087 = v6086+(+16);
	*(i8*)(intptr_t)v6087 = v6084;

c02_04bb:;

	i8 v6088 = (i8)(intptr_t)(ws+3424);
	i8 v6089 = *(i8*)(intptr_t)v6088;
	i8 v6090 = (i8)(intptr_t)(ws+3408);
	i8 v6091 = *(i8*)(intptr_t)v6090;
	i8 v6092 = v6091+(+24);
	*(i8*)(intptr_t)v6092 = v6089;

}
	void f72_InternalStrDup(void);
	void f219_AddSymbol(void);
	void f69_InternalAlloc(void);

// CopyParameterList workspace at ws+3408 length ws+56
void f265_CopyParameterList(void) {

	i8 v6093 = (i8)+0;
	i8 v6094 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6094 = v6093;

c02_04c0:;

	i8 v6095 = (i8)(intptr_t)(ws+3408);
	i8 v6096 = *(i8*)(intptr_t)v6095;
	i8 v6097 = (i8)+0;
	if (v6096==v6097) goto c02_04c5; else goto c02_04c4;

c02_04c4:;

	i8 v6098 = (i8)(intptr_t)(ws+3408);
	i8 v6099 = *(i8*)(intptr_t)v6098;
	i8 v6100 = v6099+(+8);
	i8 v6101 = *(i8*)(intptr_t)v6100;
	*(i8*)(intptr_t)(ws+3464) = v6101;
	i8 v6102 = (i8)(intptr_t)(f72_InternalStrDup);

	((void(*)(void))(intptr_t)v6102)();

	i8 v6103 = *(i8*)(intptr_t)(ws+3472);
	i8 v6104 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6104 = v6103;

	i8 v6105 = (i8)(intptr_t)(ws+3416);
	i8 v6106 = *(i8*)(intptr_t)v6105;
	i8 v6107 = v6106+(+16);
	*(i8*)(intptr_t)(ws+3488) = v6107;
	i8 v6108 = (i8)(intptr_t)(ws+3432);
	i8 v6109 = *(i8*)(intptr_t)v6108;
	*(i8*)(intptr_t)(ws+3496) = v6109;
	i8 v6110 = (i8)(intptr_t)(f219_AddSymbol);

	((void(*)(void))(intptr_t)v6110)();

	i8 v6111 = *(i8*)(intptr_t)(ws+3504);
	i8 v6112 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6112 = v6111;

	i8 v6113 = (i8)(intptr_t)(ws+3440);
	i8 v6114 = *(i8*)(intptr_t)v6113;
	i8 v6115 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6115 = v6114;

	i1 v6116 = (i1)+28;
	i8 v6117 = (i8)(intptr_t)(ws+3448);
	i8 v6118 = *(i8*)(intptr_t)v6117;
	i8 v6119 = v6118+(+32);
	*(i1*)(intptr_t)v6119 = v6116;

	i8 v6120 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v6120;
	i8 v6121 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v6121)();

	i8 v6122 = *(i8*)(intptr_t)(ws+3648);
	i8 v6123 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6123 = v6122;

	i8 v6124 = (i8)(intptr_t)(ws+3456);
	i8 v6125 = *(i8*)(intptr_t)v6124;
	i8 v6126 = (i8)(intptr_t)(ws+3448);
	i8 v6127 = *(i8*)(intptr_t)v6126;
	*(i8*)(intptr_t)v6127 = v6125;

	i8 v6128 = (i8)(intptr_t)(ws+3408);
	i8 v6129 = *(i8*)(intptr_t)v6128;
	i8 v6130 = *(i8*)(intptr_t)v6129;
	i8 v6131 = *(i8*)(intptr_t)v6130;
	i8 v6132 = (i8)(intptr_t)(ws+3448);
	i8 v6133 = *(i8*)(intptr_t)v6132;
	i8 v6134 = *(i8*)(intptr_t)v6133;
	*(i8*)(intptr_t)v6134 = v6131;

	i8 v6135 = (i8)(intptr_t)(ws+3408);
	i8 v6136 = *(i8*)(intptr_t)v6135;
	i8 v6137 = *(i8*)(intptr_t)v6136;
	i8 v6138 = v6137+(+8);
	i8 v6139 = *(i8*)(intptr_t)v6138;
	i8 v6140 = (i8)(intptr_t)(ws+3448);
	i8 v6141 = *(i8*)(intptr_t)v6140;
	i8 v6142 = *(i8*)(intptr_t)v6141;
	i8 v6143 = v6142+(+8);
	*(i8*)(intptr_t)v6143 = v6139;

	i8 v6144 = (i8)(intptr_t)(ws+3408);
	i8 v6145 = *(i8*)(intptr_t)v6144;
	i8 v6146 = *(i8*)(intptr_t)v6145;
	i8 v6147 = v6146+(+26);
	i1 v6148 = *(i1*)(intptr_t)v6147;
	i8 v6149 = (i8)(intptr_t)(ws+3448);
	i8 v6150 = *(i8*)(intptr_t)v6149;
	i8 v6151 = *(i8*)(intptr_t)v6150;
	i8 v6152 = v6151+(+26);
	*(i1*)(intptr_t)v6152 = v6148;

	i8 v6153 = (i8)(intptr_t)(ws+3408);
	i8 v6154 = *(i8*)(intptr_t)v6153;
	i8 v6155 = *(i8*)(intptr_t)v6154;
	i8 v6156 = v6155+(+24);
	i2 v6157 = *(i2*)(intptr_t)v6156;
	i8 v6158 = (i8)(intptr_t)(ws+3448);
	i8 v6159 = *(i8*)(intptr_t)v6158;
	i8 v6160 = *(i8*)(intptr_t)v6159;
	i8 v6161 = v6160+(+24);
	*(i2*)(intptr_t)v6161 = v6157;

	i8 v6162 = (i8)(intptr_t)(ws+3424);
	i8 v6163 = *(i8*)(intptr_t)v6162;
	i8 v6164 = (i8)+0;
	if (v6163==v6164) goto c02_04ca; else goto c02_04c9;

c02_04c9:;

	i8 v6165 = (i8)(intptr_t)(ws+3448);
	i8 v6166 = *(i8*)(intptr_t)v6165;
	i8 v6167 = (i8)(intptr_t)(ws+3424);
	i8 v6168 = *(i8*)(intptr_t)v6167;
	i8 v6169 = *(i8*)(intptr_t)v6168;
	i8 v6170 = v6169+(+16);
	*(i8*)(intptr_t)v6170 = v6166;

c02_04ca:;

c02_04c6:;

	i8 v6171 = (i8)(intptr_t)(ws+3448);
	i8 v6172 = *(i8*)(intptr_t)v6171;
	i8 v6173 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6173 = v6172;

	i8 v6174 = (i8)(intptr_t)(ws+3408);
	i8 v6175 = *(i8*)(intptr_t)v6174;
	i8 v6176 = *(i8*)(intptr_t)v6175;
	i8 v6177 = v6176+(+16);
	i8 v6178 = *(i8*)(intptr_t)v6177;
	i8 v6179 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6179 = v6178;

	goto c02_04c0;

c02_04c5:;

}
	void f66_AllocNewType(void);
	void f64_AllocNewSymbol(void);
const i1 c02_s0105[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f69_InternalAlloc(void);
	void f218_AddToNamespace(void);

// CreateMainSubroutine workspace at ws+3264 length ws+40
void f266_CreateMainSubroutine(void) {

	i8 v6180 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v6180)();

	i8 v6181 = *(i8*)(intptr_t)(ws+3528);
	i8 v6182 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6182 = v6181;

	i8 v6183 = (i8)(intptr_t)(ws+3264);
	i8 v6184 = *(i8*)(intptr_t)v6183;
	i8 v6185 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v6185 = v6184;

	i1 v6186 = (i1)+6;
	i8 v6187 = (i8)(intptr_t)(ws+3272);
	i8 v6188 = *(i8*)(intptr_t)v6187;
	i8 v6189 = v6188+(+52);
	*(i1*)(intptr_t)v6189 = v6186;

	i8 v6190 = (i8)(intptr_t)(f64_AllocNewSymbol);

	((void(*)(void))(intptr_t)v6190)();

	i8 v6191 = *(i8*)(intptr_t)(ws+3568);
	i8 v6192 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v6192 = v6191;

	i8 v6193 = (i8)(intptr_t)(ws+3280);
	i8 v6194 = *(i8*)(intptr_t)v6193;
	i8 v6195 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v6195 = v6194;

	i1 v6196 = (i1)+30;
	i8 v6197 = (i8)(intptr_t)(ws+3288);
	i8 v6198 = *(i8*)(intptr_t)v6197;
	i8 v6199 = v6198+(+32);
	*(i1*)(intptr_t)v6199 = v6196;

	i8 v6200 = (i8)(intptr_t)c02_s0105;
	i8 v6201 = (i8)(intptr_t)(ws+3288);
	i8 v6202 = *(i8*)(intptr_t)v6201;
	i8 v6203 = v6202+(+8);
	*(i8*)(intptr_t)v6203 = v6200;

	i8 v6204 = (i8)(intptr_t)(ws+3272);
	i8 v6205 = *(i8*)(intptr_t)v6204;
	i8 v6206 = (i8)(intptr_t)(ws+3288);
	i8 v6207 = *(i8*)(intptr_t)v6206;
	*(i8*)(intptr_t)v6207 = v6205;

	i8 v6208 = (i8)(intptr_t)(ws+3288);
	i8 v6209 = *(i8*)(intptr_t)v6208;
	i8 v6210 = (i8)(intptr_t)(ws+3272);
	i8 v6211 = *(i8*)(intptr_t)v6210;
	i8 v6212 = v6211+(+32);
	*(i8*)(intptr_t)v6212 = v6209;

	i8 v6213 = (i8)+83;
	*(i8*)(intptr_t)(ws+3640) = v6213;
	i8 v6214 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v6214)();

	i8 v6215 = *(i8*)(intptr_t)(ws+3648);
	i8 v6216 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v6216 = v6215;

	i8 v6217 = (i8)(intptr_t)(ws+3296);
	i8 v6218 = *(i8*)(intptr_t)v6217;
	i8 v6219 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v6219 = v6218;

	i8 v6220 = (i8)(intptr_t)(ws+3288);
	i8 v6221 = *(i8*)(intptr_t)v6220;
	i8 v6222 = (i8)(intptr_t)(ws+40);
	i8 v6223 = *(i8*)(intptr_t)v6222;
	*(i8*)(intptr_t)v6223 = v6221;

	i8 v6224 = (i8)(intptr_t)(ws+3272);
	i8 v6225 = *(i8*)(intptr_t)v6224;
	i8 v6226 = (i8)(intptr_t)(ws+40);
	i8 v6227 = *(i8*)(intptr_t)v6226;
	i8 v6228 = v6227+(+40);
	*(i8*)(intptr_t)v6228 = v6225;

	i8 v6229 = (i8)(intptr_t)(ws+40);
	i8 v6230 = *(i8*)(intptr_t)v6229;
	i8 v6231 = (i8)(intptr_t)(ws+40);
	i8 v6232 = *(i8*)(intptr_t)v6231;
	i8 v6233 = v6232+(+48);
	*(i8*)(intptr_t)v6233 = v6230;

	i8 v6234 = (i8)(intptr_t)(ws+40);
	i8 v6235 = *(i8*)(intptr_t)v6234;
	i8 v6236 = (i8)(intptr_t)(ws+3272);
	i8 v6237 = *(i8*)(intptr_t)v6236;
	*(i8*)(intptr_t)v6237 = v6235;

	i8 v6238 = (i8)(intptr_t)(ws+40);
	i8 v6239 = *(i8*)(intptr_t)v6238;
	i8 v6240 = v6239+(+16);
	*(i8*)(intptr_t)(ws+3568) = v6240;
	i8 v6241 = (i8)(intptr_t)(ws+3288);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	*(i8*)(intptr_t)(ws+3576) = v6242;
	i8 v6243 = (i8)(intptr_t)(f218_AddToNamespace);

	((void(*)(void))(intptr_t)v6243)();

}
	void f202_EmitterDeclareWorkspace(void);

// ReportWorkspaces workspace at ws+3408 length ws+12
void f267_ReportWorkspaces(void) {

	i1 v6244 = (i1)+0;
	i8 v6245 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6245 = v6244;

c02_04cb:;

	i8 v6246 = (i8)(intptr_t)(ws+3416);
	i1 v6247 = *(i1*)(intptr_t)v6246;
	i1 v6248 = (i1)+4;
	if (v6247==v6248) goto c02_04d0; else goto c02_04cf;

c02_04cf:;

	i8 v6249 = (i8)(intptr_t)(ws+3408);
	i8 v6250 = *(i8*)(intptr_t)v6249;
	i8 v6251 = v6250+(+58);
	i8 v6252 = (i8)(intptr_t)(ws+3416);
	i1 v6253 = *(i1*)(intptr_t)v6252;
	i8 v6254 = v6253;
	i1 v6255 = (i1)+1;
	i8 v6256 = ((i8)v6254)<<v6255;
	i8 v6257 = v6251+v6256;
	i2 v6258 = *(i2*)(intptr_t)v6257;
	i8 v6259 = (i8)(intptr_t)(ws+3418);
	*(i2*)(intptr_t)v6259 = v6258;

	i8 v6260 = (i8)(intptr_t)(ws+3418);
	i2 v6261 = *(i2*)(intptr_t)v6260;
	i2 v6262 = (i2)+0;
	if (v6261==v6262) goto c02_04d5; else goto c02_04d4;

c02_04d4:;

	i8 v6263 = (i8)(intptr_t)(ws+3408);
	i8 v6264 = *(i8*)(intptr_t)v6263;
	*(i8*)(intptr_t)(ws+3424) = v6264;
	i8 v6265 = (i8)(intptr_t)(ws+3416);
	i1 v6266 = *(i1*)(intptr_t)v6265;
	*(i1*)(intptr_t)(ws+3432) = v6266;
	i8 v6267 = (i8)(intptr_t)(ws+3418);
	i2 v6268 = *(i2*)(intptr_t)v6267;
	*(i2*)(intptr_t)(ws+3434) = v6268;
	i8 v6269 = (i8)(intptr_t)(f202_EmitterDeclareWorkspace);

	((void(*)(void))(intptr_t)v6269)();

c02_04d5:;

c02_04d1:;

	i8 v6270 = (i8)(intptr_t)(ws+3416);
	i1 v6271 = *(i1*)(intptr_t)v6270;
	i1 v6272 = v6271+(+1);
	i8 v6273 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6273 = v6272;

	goto c02_04cb;

c02_04d0:;

}
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0106[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0107[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f12_print(void);
	void f75_EndError(void);

// expr_i_cant_do_that workspace at ws+3504 length ws+16
void f268_expr_i_cant_do_that(void) {

	i8 v6274 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6274)();

	i8 v6275 = (i8)(intptr_t)(ws+3504);
	i8 v6276 = *(i8*)(intptr_t)v6275;
	i8 v6277 = v6276+(+24);
	i8 v6278 = *(i8*)(intptr_t)v6277;
	i8 v6279 = v6278+(+32);
	i8 v6280 = *(i8*)(intptr_t)v6279;
	i8 v6281 = v6280+(+8);
	i8 v6282 = *(i8*)(intptr_t)v6281;
	*(i8*)(intptr_t)(ws+3696) = v6282;
	i8 v6283 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6283)();

	i8 v6284 = (i8)(intptr_t)c02_s0106;
	*(i8*)(intptr_t)(ws+3696) = v6284;
	i8 v6285 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6285)();

	i8 v6286 = (i8)(intptr_t)(ws+3512);
	i8 v6287 = *(i8*)(intptr_t)v6286;
	i8 v6288 = v6287+(+24);
	i8 v6289 = *(i8*)(intptr_t)v6288;
	i8 v6290 = v6289+(+32);
	i8 v6291 = *(i8*)(intptr_t)v6290;
	i8 v6292 = v6291+(+8);
	i8 v6293 = *(i8*)(intptr_t)v6292;
	*(i8*)(intptr_t)(ws+3696) = v6293;
	i8 v6294 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6294)();

	i8 v6295 = (i8)(intptr_t)c02_s0107;
	*(i8*)(intptr_t)(ws+3696) = v6295;
	i8 v6296 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6296)();

	i8 v6297 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6297)();

}
	void f74_StartError(void);
const i1 c02_s0108[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0109[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s010a[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f230_IsScalar(void);
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s010b[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// CheckExpressionType workspace at ws+3496 length ws+17
void f269_CheckExpressionType(void) {

	i8 v6298 = (i8)(intptr_t)(ws+3496);
	i8 v6299 = *(i8*)(intptr_t)v6298;
	i8 v6300 = v6299+(+24);
	i8 v6301 = *(i8*)(intptr_t)v6300;
	i8 v6302 = (i8)+0;
	if (v6301==v6302) goto c02_04d9; else goto c02_04da;

c02_04d9:;

	i8 v6303 = (i8)(intptr_t)(ws+3504);
	i8 v6304 = *(i8*)(intptr_t)v6303;
	i8 v6305 = (i8)(intptr_t)(ws+3496);
	i8 v6306 = *(i8*)(intptr_t)v6305;
	i8 v6307 = v6306+(+24);
	*(i8*)(intptr_t)v6307 = v6304;

c02_04da:;

c02_04d6:;

	i8 v6308 = (i8)(intptr_t)(ws+3496);
	i8 v6309 = *(i8*)(intptr_t)v6308;
	i8 v6310 = v6309+(+24);
	i8 v6311 = *(i8*)(intptr_t)v6310;
	i8 v6312 = (i8)(intptr_t)(ws+3504);
	i8 v6313 = *(i8*)(intptr_t)v6312;
	if (v6311==v6313) goto c02_04df; else goto c02_04de;

c02_04de:;

	i8 v6314 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6314)();

	i8 v6315 = (i8)(intptr_t)c02_s0108;
	*(i8*)(intptr_t)(ws+3696) = v6315;
	i8 v6316 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6316)();

	i8 v6317 = (i8)(intptr_t)(ws+3496);
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

	i8 v6326 = (i8)(intptr_t)c02_s0109;
	*(i8*)(intptr_t)(ws+3696) = v6326;
	i8 v6327 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6327)();

	i8 v6328 = (i8)(intptr_t)(ws+3504);
	i8 v6329 = *(i8*)(intptr_t)v6328;
	i8 v6330 = v6329+(+32);
	i8 v6331 = *(i8*)(intptr_t)v6330;
	i8 v6332 = v6331+(+8);
	i8 v6333 = *(i8*)(intptr_t)v6332;
	*(i8*)(intptr_t)(ws+3696) = v6333;
	i8 v6334 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6334)();

	i8 v6335 = (i8)(intptr_t)c02_s010a;
	*(i8*)(intptr_t)(ws+3696) = v6335;
	i8 v6336 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6336)();

	i8 v6337 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6337)();

c02_04df:;

c02_04db:;

	i8 v6338 = (i8)(intptr_t)(ws+3504);
	i8 v6339 = *(i8*)(intptr_t)v6338;
	*(i8*)(intptr_t)(ws+3544) = v6339;
	i8 v6340 = (i8)(intptr_t)(f230_IsScalar);

	((void(*)(void))(intptr_t)v6340)();

	i1 v6341 = *(i1*)(intptr_t)(ws+3552);
	i8 v6342 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v6342 = v6341;

	i8 v6343 = (i8)(intptr_t)(ws+3512);
	i1 v6344 = *(i1*)(intptr_t)v6343;
	i1 v6345 = (i1)+0;
	if (v6344==v6345) goto c02_04e3; else goto c02_04e4;

c02_04e3:;

	i8 v6346 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6346)();

	i8 v6347 = (i8)(intptr_t)(ws+3504);
	i8 v6348 = *(i8*)(intptr_t)v6347;
	i8 v6349 = v6348+(+32);
	i8 v6350 = *(i8*)(intptr_t)v6349;
	i8 v6351 = v6350+(+8);
	i8 v6352 = *(i8*)(intptr_t)v6351;
	*(i8*)(intptr_t)(ws+3696) = v6352;
	i8 v6353 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6353)();

	i8 v6354 = (i8)(intptr_t)c02_s010b;
	*(i8*)(intptr_t)(ws+3696) = v6354;
	i8 v6355 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6355)();

	i8 v6356 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6356)();

c02_04e4:;

c02_04e0:;

}
	void f228_IsNum(void);
	void f68_IsPtr(void);
const i1 c02_s010c[] = { 0x6c,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s010d[] = { 0x72,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s010e[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f76_SimpleError(void);
	void f228_IsNum(void);
	void f68_IsPtr(void);
const i1 c02_s010f[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(void);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3456 length ws+20
void f270_ResolveUntypedConstantsForAddOrSub(void) {

	i8 v6357 = (i8)(intptr_t)(ws+3456);
	i8 v6358 = *(i8*)(intptr_t)v6357;
	i8 v6359 = v6358+(+24);
	i8 v6360 = *(i8*)(intptr_t)v6359;
	i8 v6361 = (i8)+0;
	if (v6360==v6361) goto c02_04eb; else goto c02_04ec;

c02_04ec:;

	i8 v6362 = (i8)(intptr_t)(ws+3464);
	i8 v6363 = *(i8*)(intptr_t)v6362;
	i8 v6364 = v6363+(+24);
	i8 v6365 = *(i8*)(intptr_t)v6364;
	i8 v6366 = (i8)+0;
	if (v6365==v6366) goto c02_04ea; else goto c02_04eb;

c02_04ea:;

	i8 v6367 = (i8)(intptr_t)(ws+3456);
	i8 v6368 = *(i8*)(intptr_t)v6367;
	i8 v6369 = v6368+(+24);
	i8 v6370 = *(i8*)(intptr_t)v6369;
	*(i8*)(intptr_t)(ws+3560) = v6370;
	i8 v6371 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v6371)();

	i1 v6372 = *(i1*)(intptr_t)(ws+3568);
	i8 v6373 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v6373 = v6372;

	i8 v6374 = (i8)(intptr_t)(ws+3472);
	i1 v6375 = *(i1*)(intptr_t)v6374;
	i1 v6376 = (i1)+0;
	if (v6375==v6376) goto c02_04f1; else goto c02_04f0;

c02_04f0:;

	i8 v6377 = (i8)(intptr_t)(ws+3456);
	i8 v6378 = *(i8*)(intptr_t)v6377;
	i8 v6379 = v6378+(+24);
	i8 v6380 = *(i8*)(intptr_t)v6379;
	i8 v6381 = (i8)(intptr_t)(ws+3464);
	i8 v6382 = *(i8*)(intptr_t)v6381;
	i8 v6383 = v6382+(+24);
	*(i8*)(intptr_t)v6383 = v6380;

	goto c02_04ed;

c02_04f1:;

	i8 v6384 = (i8)(intptr_t)(ws+3456);
	i8 v6385 = *(i8*)(intptr_t)v6384;
	i8 v6386 = v6385+(+24);
	i8 v6387 = *(i8*)(intptr_t)v6386;
	*(i8*)(intptr_t)(ws+3560) = v6387;
	i8 v6388 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6388)();

	i1 v6389 = *(i1*)(intptr_t)(ws+3568);
	i8 v6390 = (i8)(intptr_t)(ws+3473);
	*(i1*)(intptr_t)v6390 = v6389;

	i8 v6391 = (i8)(intptr_t)(ws+3473);
	i1 v6392 = *(i1*)(intptr_t)v6391;
	i1 v6393 = (i1)+0;
	if (v6392==v6393) goto c02_04f5; else goto c02_04f4;

c02_04f4:;

	i8 v6394 = (i8)(intptr_t)(ws+1528);
	i8 v6395 = *(i8*)(intptr_t)v6394;
	i8 v6396 = (i8)(intptr_t)(ws+3464);
	i8 v6397 = *(i8*)(intptr_t)v6396;
	i8 v6398 = v6397+(+24);
	*(i8*)(intptr_t)v6398 = v6395;

	goto c02_04ed;

c02_04f5:;

	i8 v6399 = (i8)(intptr_t)c02_s010c;
	*(i8*)(intptr_t)(ws+3696) = v6399;
	i8 v6400 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6400)();

	i8 v6401 = (i8)(intptr_t)(ws+3456);
	i8 v6402 = *(i8*)(intptr_t)v6401;
	i8 v6403 = v6402+(+24);
	i8 v6404 = *(i8*)(intptr_t)v6403;
	i4 v6405 = v6404;
	*(i4*)(intptr_t)(ws+3480) = v6405;
	i8 v6406 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6406)();

	i8 v6407 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6407)();

	i8 v6408 = (i8)(intptr_t)c02_s010d;
	*(i8*)(intptr_t)(ws+3696) = v6408;
	i8 v6409 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6409)();

	i8 v6410 = (i8)(intptr_t)(ws+3464);
	i8 v6411 = *(i8*)(intptr_t)v6410;
	i8 v6412 = v6411+(+24);
	i8 v6413 = *(i8*)(intptr_t)v6412;
	i4 v6414 = v6413;
	*(i4*)(intptr_t)(ws+3480) = v6414;
	i8 v6415 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6415)();

	i8 v6416 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6416)();

	i8 v6417 = (i8)(intptr_t)c02_s010e;
	*(i8*)(intptr_t)(ws+3648) = v6417;
	i8 v6418 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6418)();

c02_04ed:;

c02_04eb:;

c02_04e5:;

	i8 v6419 = (i8)(intptr_t)(ws+3456);
	i8 v6420 = *(i8*)(intptr_t)v6419;
	i8 v6421 = v6420+(+24);
	i8 v6422 = *(i8*)(intptr_t)v6421;
	i8 v6423 = (i8)+0;
	if (v6422==v6423) goto c02_04fd; else goto c02_04fc;

c02_04fd:;

	i8 v6424 = (i8)(intptr_t)(ws+3464);
	i8 v6425 = *(i8*)(intptr_t)v6424;
	i8 v6426 = v6425+(+24);
	i8 v6427 = *(i8*)(intptr_t)v6426;
	i8 v6428 = (i8)+0;
	if (v6427==v6428) goto c02_04fc; else goto c02_04fb;

c02_04fb:;

	i8 v6429 = (i8)(intptr_t)(ws+3464);
	i8 v6430 = *(i8*)(intptr_t)v6429;
	i8 v6431 = v6430+(+24);
	i8 v6432 = *(i8*)(intptr_t)v6431;
	*(i8*)(intptr_t)(ws+3560) = v6432;
	i8 v6433 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v6433)();

	i1 v6434 = *(i1*)(intptr_t)(ws+3568);
	i8 v6435 = (i8)(intptr_t)(ws+3474);
	*(i1*)(intptr_t)v6435 = v6434;

	i8 v6436 = (i8)(intptr_t)(ws+3474);
	i1 v6437 = *(i1*)(intptr_t)v6436;
	i1 v6438 = (i1)+0;
	if (v6437==v6438) goto c02_0502; else goto c02_0501;

c02_0501:;

	i8 v6439 = (i8)(intptr_t)(ws+3464);
	i8 v6440 = *(i8*)(intptr_t)v6439;
	i8 v6441 = v6440+(+24);
	i8 v6442 = *(i8*)(intptr_t)v6441;
	i8 v6443 = (i8)(intptr_t)(ws+3456);
	i8 v6444 = *(i8*)(intptr_t)v6443;
	i8 v6445 = v6444+(+24);
	*(i8*)(intptr_t)v6445 = v6442;

	goto c02_04fe;

c02_0502:;

	i8 v6446 = (i8)(intptr_t)(ws+3464);
	i8 v6447 = *(i8*)(intptr_t)v6446;
	i8 v6448 = v6447+(+24);
	i8 v6449 = *(i8*)(intptr_t)v6448;
	*(i8*)(intptr_t)(ws+3560) = v6449;
	i8 v6450 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6450)();

	i1 v6451 = *(i1*)(intptr_t)(ws+3568);
	i8 v6452 = (i8)(intptr_t)(ws+3475);
	*(i1*)(intptr_t)v6452 = v6451;

	i8 v6453 = (i8)(intptr_t)(ws+3475);
	i1 v6454 = *(i1*)(intptr_t)v6453;
	i1 v6455 = (i1)+0;
	if (v6454==v6455) goto c02_0506; else goto c02_0505;

c02_0505:;

	i8 v6456 = (i8)(intptr_t)c02_s010f;
	*(i8*)(intptr_t)(ws+3648) = v6456;
	i8 v6457 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6457)();

c02_0506:;

c02_04fe:;

c02_04fc:;

c02_04f6:;

}
	void f268_expr_i_cant_do_that(void);

// ResolveUntypedConstantsSimply workspace at ws+3472 length ws+32
void f271_ResolveUntypedConstantsSimply(void) {

	i8 v6458 = (i8)(intptr_t)(ws+3472);
	i8 v6459 = *(i8*)(intptr_t)v6458;
	i8 v6460 = v6459+(+24);
	i8 v6461 = *(i8*)(intptr_t)v6460;
	i8 v6462 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v6462 = v6461;

	i8 v6463 = (i8)(intptr_t)(ws+3480);
	i8 v6464 = *(i8*)(intptr_t)v6463;
	i8 v6465 = v6464+(+24);
	i8 v6466 = *(i8*)(intptr_t)v6465;
	i8 v6467 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v6467 = v6466;

	i8 v6468 = (i8)(intptr_t)(ws+3488);
	i8 v6469 = *(i8*)(intptr_t)v6468;
	i8 v6470 = (i8)+0;
	if (v6469==v6470) goto c02_050d; else goto c02_050e;

c02_050e:;

	i8 v6471 = (i8)(intptr_t)(ws+3496);
	i8 v6472 = *(i8*)(intptr_t)v6471;
	i8 v6473 = (i8)+0;
	if (v6472==v6473) goto c02_050c; else goto c02_050d;

c02_050c:;

	i8 v6474 = (i8)(intptr_t)(ws+3488);
	i8 v6475 = *(i8*)(intptr_t)v6474;
	i8 v6476 = (i8)(intptr_t)(ws+3480);
	i8 v6477 = *(i8*)(intptr_t)v6476;
	i8 v6478 = v6477+(+24);
	*(i8*)(intptr_t)v6478 = v6475;

	goto c02_0507;

c02_050d:;

	i8 v6479 = (i8)(intptr_t)(ws+3488);
	i8 v6480 = *(i8*)(intptr_t)v6479;
	i8 v6481 = (i8)+0;
	if (v6480==v6481) goto c02_0515; else goto c02_0514;

c02_0515:;

	i8 v6482 = (i8)(intptr_t)(ws+3496);
	i8 v6483 = *(i8*)(intptr_t)v6482;
	i8 v6484 = (i8)+0;
	if (v6483==v6484) goto c02_0514; else goto c02_0513;

c02_0513:;

	i8 v6485 = (i8)(intptr_t)(ws+3496);
	i8 v6486 = *(i8*)(intptr_t)v6485;
	i8 v6487 = (i8)(intptr_t)(ws+3472);
	i8 v6488 = *(i8*)(intptr_t)v6487;
	i8 v6489 = v6488+(+24);
	*(i8*)(intptr_t)v6489 = v6486;

	goto c02_0507;

c02_0514:;

	i8 v6490 = (i8)(intptr_t)(ws+3488);
	i8 v6491 = *(i8*)(intptr_t)v6490;
	i8 v6492 = (i8)(intptr_t)(ws+3496);
	i8 v6493 = *(i8*)(intptr_t)v6492;
	if (v6491==v6493) goto c02_0519; else goto c02_0518;

c02_0518:;

	i8 v6494 = (i8)(intptr_t)(ws+3472);
	i8 v6495 = *(i8*)(intptr_t)v6494;
	*(i8*)(intptr_t)(ws+3504) = v6495;
	i8 v6496 = (i8)(intptr_t)(ws+3480);
	i8 v6497 = *(i8*)(intptr_t)v6496;
	*(i8*)(intptr_t)(ws+3512) = v6497;
	i8 v6498 = (i8)(intptr_t)(f268_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6498)();

c02_0519:;

c02_0507:;

}
	void f228_IsNum(void);
const i1 c02_s0110[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(void);

// CheckNumber workspace at ws+3472 length ws+9
void f272_CheckNumber(void) {

	i8 v6499 = (i8)(intptr_t)(ws+3472);
	i8 v6500 = *(i8*)(intptr_t)v6499;
	i8 v6501 = v6500+(+24);
	i8 v6502 = *(i8*)(intptr_t)v6501;
	*(i8*)(intptr_t)(ws+3560) = v6502;
	i8 v6503 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v6503)();

	i1 v6504 = *(i1*)(intptr_t)(ws+3568);
	i8 v6505 = (i8)(intptr_t)(ws+3480);
	*(i1*)(intptr_t)v6505 = v6504;

	i8 v6506 = (i8)(intptr_t)(ws+3480);
	i1 v6507 = *(i1*)(intptr_t)v6506;
	i1 v6508 = (i1)+0;
	if (v6507==v6508) goto c02_051d; else goto c02_051e;

c02_051d:;

	i8 v6509 = (i8)(intptr_t)c02_s0110;
	*(i8*)(intptr_t)(ws+3648) = v6509;
	i8 v6510 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6510)();

c02_051e:;

c02_051a:;

}
	void f271_ResolveUntypedConstantsSimply(void);
	void f272_CheckNumber(void);
	void f272_CheckNumber(void);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3456 length ws+16
void f273_ResolveUntypedConstantsNeedingNumbers(void) {

	i8 v6511 = (i8)(intptr_t)(ws+3456);
	i8 v6512 = *(i8*)(intptr_t)v6511;
	*(i8*)(intptr_t)(ws+3472) = v6512;
	i8 v6513 = (i8)(intptr_t)(ws+3464);
	i8 v6514 = *(i8*)(intptr_t)v6513;
	*(i8*)(intptr_t)(ws+3480) = v6514;
	i8 v6515 = (i8)(intptr_t)(f271_ResolveUntypedConstantsSimply);

	((void(*)(void))(intptr_t)v6515)();

	i8 v6516 = (i8)(intptr_t)(ws+3456);
	i8 v6517 = *(i8*)(intptr_t)v6516;
	*(i8*)(intptr_t)(ws+3472) = v6517;
	i8 v6518 = (i8)(intptr_t)(f272_CheckNumber);

	((void(*)(void))(intptr_t)v6518)();

	i8 v6519 = (i8)(intptr_t)(ws+3464);
	i8 v6520 = *(i8*)(intptr_t)v6519;
	*(i8*)(intptr_t)(ws+3472) = v6520;
	i8 v6521 = (i8)(intptr_t)(f272_CheckNumber);

	((void(*)(void))(intptr_t)v6521)();

}
	void f271_ResolveUntypedConstantsSimply(void);
	void f268_expr_i_cant_do_that(void);

// CondSimple workspace at ws+3456 length ws+16
void f274_CondSimple(void) {

	i8 v6522 = (i8)(intptr_t)(ws+3456);
	i8 v6523 = *(i8*)(intptr_t)v6522;
	*(i8*)(intptr_t)(ws+3472) = v6523;
	i8 v6524 = (i8)(intptr_t)(ws+3464);
	i8 v6525 = *(i8*)(intptr_t)v6524;
	*(i8*)(intptr_t)(ws+3480) = v6525;
	i8 v6526 = (i8)(intptr_t)(f271_ResolveUntypedConstantsSimply);

	((void(*)(void))(intptr_t)v6526)();

	i8 v6527 = (i8)(intptr_t)(ws+3456);
	i8 v6528 = *(i8*)(intptr_t)v6527;
	i8 v6529 = v6528+(+24);
	i8 v6530 = *(i8*)(intptr_t)v6529;
	i8 v6531 = (i8)(intptr_t)(ws+3464);
	i8 v6532 = *(i8*)(intptr_t)v6531;
	i8 v6533 = v6532+(+24);
	i8 v6534 = *(i8*)(intptr_t)v6533;
	if (v6530==v6534) goto c02_0523; else goto c02_0522;

c02_0522:;

	i8 v6535 = (i8)(intptr_t)(ws+3456);
	i8 v6536 = *(i8*)(intptr_t)v6535;
	*(i8*)(intptr_t)(ws+3504) = v6536;
	i8 v6537 = (i8)(intptr_t)(ws+3464);
	i8 v6538 = *(i8*)(intptr_t)v6537;
	*(i8*)(intptr_t)(ws+3512) = v6538;
	i8 v6539 = (i8)(intptr_t)(f268_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6539)();

c02_0523:;

c02_051f:;

}
	void f166_NodeWidth(void);
	void f170_MidC1Op(void);

// Expr1Simple workspace at ws+3392 length ws+40
void f275_Expr1Simple(void) {

	i8 v6540 = (i8)(intptr_t)(ws+3400);
	i8 v6541 = *(i8*)(intptr_t)v6540;
	*(i8*)(intptr_t)(ws+3456) = v6541;
	i8 v6542 = (i8)(intptr_t)(f166_NodeWidth);

	((void(*)(void))(intptr_t)v6542)();

	i1 v6543 = *(i1*)(intptr_t)(ws+3464);
	i8 v6544 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6544 = v6543;

	i8 v6545 = (i8)(intptr_t)(ws+3392);
	i1 v6546 = *(i1*)(intptr_t)v6545;
	*(i1*)(intptr_t)(ws+3432) = v6546;
	i8 v6547 = (i8)(intptr_t)(ws+3416);
	i1 v6548 = *(i1*)(intptr_t)v6547;
	*(i1*)(intptr_t)(ws+3433) = v6548;
	i8 v6549 = (i8)(intptr_t)(ws+3400);
	i8 v6550 = *(i8*)(intptr_t)v6549;
	*(i8*)(intptr_t)(ws+3440) = v6550;
	i8 v6551 = (i8)(intptr_t)(f170_MidC1Op);

	((void(*)(void))(intptr_t)v6551)();

	i8 v6552 = *(i8*)(intptr_t)(ws+3448);
	i8 v6553 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6553 = v6552;

	i8 v6554 = (i8)(intptr_t)(ws+3424);
	i8 v6555 = *(i8*)(intptr_t)v6554;
	i8 v6556 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6556 = v6555;

	i8 v6557 = (i8)(intptr_t)(ws+3400);
	i8 v6558 = *(i8*)(intptr_t)v6557;
	i8 v6559 = v6558+(+24);
	i8 v6560 = *(i8*)(intptr_t)v6559;
	i8 v6561 = (i8)(intptr_t)(ws+3408);
	i8 v6562 = *(i8*)(intptr_t)v6561;
	i8 v6563 = v6562+(+24);
	*(i8*)(intptr_t)v6563 = v6560;

}
	void f270_ResolveUntypedConstantsForAddOrSub(void);
	void f268_expr_i_cant_do_that(void);

// cant_add_that workspace at ws+3448 length ws+0
void f277_cant_add_that(void) {

	i8 v6569 = (i8)(intptr_t)(ws+3392);
	i8 v6570 = *(i8*)(intptr_t)v6569;
	*(i8*)(intptr_t)(ws+3504) = v6570;
	i8 v6571 = (i8)(intptr_t)(ws+3400);
	i8 v6572 = *(i8*)(intptr_t)v6571;
	*(i8*)(intptr_t)(ws+3512) = v6572;
	i8 v6573 = (i8)(intptr_t)(f268_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6573)();

}
	void f68_IsPtr(void);
	void f68_IsPtr(void);
	void f277_cant_add_that(void);
	void f68_IsPtr(void);
	void f277_cant_add_that(void);
	void f68_IsPtr(void);
	void f277_cant_add_that(void);
	void f166_NodeWidth(void);
	void f172_MidC2Op(void);

// ExprAdd workspace at ws+3392 length ws+56
void f276_ExprAdd(void) {

	i8 v6564 = (i8)(intptr_t)(ws+3392);
	i8 v6565 = *(i8*)(intptr_t)v6564;
	*(i8*)(intptr_t)(ws+3456) = v6565;
	i8 v6566 = (i8)(intptr_t)(ws+3400);
	i8 v6567 = *(i8*)(intptr_t)v6566;
	*(i8*)(intptr_t)(ws+3464) = v6567;
	i8 v6568 = (i8)(intptr_t)(f270_ResolveUntypedConstantsForAddOrSub);

	((void(*)(void))(intptr_t)v6568)();


	i8 v6574 = (i8)(intptr_t)(ws+3392);
	i8 v6575 = *(i8*)(intptr_t)v6574;
	i8 v6576 = v6575+(+24);
	i8 v6577 = *(i8*)(intptr_t)v6576;
	i8 v6578 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6578 = v6577;

	i8 v6579 = (i8)(intptr_t)(ws+3400);
	i8 v6580 = *(i8*)(intptr_t)v6579;
	i8 v6581 = v6580+(+24);
	i8 v6582 = *(i8*)(intptr_t)v6581;
	i8 v6583 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6583 = v6582;

	i8 v6584 = (i8)(intptr_t)(ws+3416);
	i8 v6585 = *(i8*)(intptr_t)v6584;
	*(i8*)(intptr_t)(ws+3560) = v6585;
	i8 v6586 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6586)();

	i1 v6587 = *(i1*)(intptr_t)(ws+3568);
	i8 v6588 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v6588 = v6587;

	i8 v6589 = (i8)(intptr_t)(ws+3432);
	i1 v6590 = *(i1*)(intptr_t)v6589;
	i1 v6591 = (i1)+0;
	if (v6590==v6591) goto c02_0528; else goto c02_0527;

c02_0527:;

	i8 v6592 = (i8)(intptr_t)(ws+3424);
	i8 v6593 = *(i8*)(intptr_t)v6592;
	*(i8*)(intptr_t)(ws+3560) = v6593;
	i8 v6594 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6594)();

	i1 v6595 = *(i1*)(intptr_t)(ws+3568);
	i8 v6596 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v6596 = v6595;

	i8 v6597 = (i8)(intptr_t)(ws+3433);
	i1 v6598 = *(i1*)(intptr_t)v6597;
	i1 v6599 = (i1)+0;
	if (v6598==v6599) goto c02_0530; else goto c02_052e;

c02_0530:;

	i8 v6600 = (i8)(intptr_t)(ws+3424);
	i8 v6601 = *(i8*)(intptr_t)v6600;
	i8 v6602 = (i8)(intptr_t)(ws+1528);
	i8 v6603 = *(i8*)(intptr_t)v6602;
	if (v6601==v6603) goto c02_052f; else goto c02_052e;

c02_052e:;

	i8 v6604 = (i8)(intptr_t)(f277_cant_add_that);

	((void(*)(void))(intptr_t)v6604)();

c02_052f:;

c02_0529:;

	goto c02_0524;

c02_0528:;

	i8 v6605 = (i8)(intptr_t)(ws+3424);
	i8 v6606 = *(i8*)(intptr_t)v6605;
	*(i8*)(intptr_t)(ws+3560) = v6606;
	i8 v6607 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6607)();

	i1 v6608 = *(i1*)(intptr_t)(ws+3568);
	i8 v6609 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v6609 = v6608;

	i8 v6610 = (i8)(intptr_t)(ws+3434);
	i1 v6611 = *(i1*)(intptr_t)v6610;
	i1 v6612 = (i1)+0;
	if (v6611==v6612) goto c02_0534; else goto c02_0533;

c02_0533:;

	i8 v6613 = (i8)(intptr_t)(f277_cant_add_that);

	((void(*)(void))(intptr_t)v6613)();

	goto c02_0524;

c02_0534:;

	i8 v6614 = (i8)(intptr_t)(ws+3416);
	i8 v6615 = *(i8*)(intptr_t)v6614;
	*(i8*)(intptr_t)(ws+3560) = v6615;
	i8 v6616 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6616)();

	i1 v6617 = *(i1*)(intptr_t)(ws+3568);
	i8 v6618 = (i8)(intptr_t)(ws+3435);
	*(i1*)(intptr_t)v6618 = v6617;

	i8 v6619 = (i8)(intptr_t)(ws+3435);
	i1 v6620 = *(i1*)(intptr_t)v6619;
	i1 v6621 = (i1)+0;
	if (v6620==v6621) goto c02_053b; else goto c02_053a;

c02_053b:;

	i8 v6622 = (i8)(intptr_t)(ws+3416);
	i8 v6623 = *(i8*)(intptr_t)v6622;
	i8 v6624 = (i8)(intptr_t)(ws+3424);
	i8 v6625 = *(i8*)(intptr_t)v6624;
	if (v6623==v6625) goto c02_053a; else goto c02_0539;

c02_0539:;

	i8 v6626 = (i8)(intptr_t)(f277_cant_add_that);

	((void(*)(void))(intptr_t)v6626)();

c02_053a:;

c02_0524:;

	i8 v6627 = (i8)(intptr_t)(ws+3392);
	i8 v6628 = *(i8*)(intptr_t)v6627;
	*(i8*)(intptr_t)(ws+3456) = v6628;
	i8 v6629 = (i8)(intptr_t)(f166_NodeWidth);

	((void(*)(void))(intptr_t)v6629)();

	i1 v6630 = *(i1*)(intptr_t)(ws+3464);
	i8 v6631 = (i8)(intptr_t)(ws+3436);
	*(i1*)(intptr_t)v6631 = v6630;

	i1 v6632 = (i1)+156;
	*(i1*)(intptr_t)(ws+3496) = v6632;
	i8 v6633 = (i8)(intptr_t)(ws+3436);
	i1 v6634 = *(i1*)(intptr_t)v6633;
	*(i1*)(intptr_t)(ws+3497) = v6634;
	i8 v6635 = (i8)(intptr_t)(ws+3392);
	i8 v6636 = *(i8*)(intptr_t)v6635;
	*(i8*)(intptr_t)(ws+3504) = v6636;
	i8 v6637 = (i8)(intptr_t)(ws+3400);
	i8 v6638 = *(i8*)(intptr_t)v6637;
	*(i8*)(intptr_t)(ws+3512) = v6638;
	i8 v6639 = (i8)(intptr_t)(f172_MidC2Op);

	((void(*)(void))(intptr_t)v6639)();

	i8 v6640 = *(i8*)(intptr_t)(ws+3520);
	i8 v6641 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6641 = v6640;

	i8 v6642 = (i8)(intptr_t)(ws+3440);
	i8 v6643 = *(i8*)(intptr_t)v6642;
	i8 v6644 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6644 = v6643;

	i8 v6645 = (i8)(intptr_t)(ws+3416);
	i8 v6646 = *(i8*)(intptr_t)v6645;
	i8 v6647 = (i8)(intptr_t)(ws+3408);
	i8 v6648 = *(i8*)(intptr_t)v6647;
	i8 v6649 = v6648+(+24);
	*(i8*)(intptr_t)v6649 = v6646;

}
	void f270_ResolveUntypedConstantsForAddOrSub(void);
	void f268_expr_i_cant_do_that(void);

// cant_sub_that workspace at ws+3456 length ws+0
void f279_cant_sub_that(void) {

	i8 v6655 = (i8)(intptr_t)(ws+3392);
	i8 v6656 = *(i8*)(intptr_t)v6655;
	*(i8*)(intptr_t)(ws+3504) = v6656;
	i8 v6657 = (i8)(intptr_t)(ws+3400);
	i8 v6658 = *(i8*)(intptr_t)v6657;
	*(i8*)(intptr_t)(ws+3512) = v6658;
	i8 v6659 = (i8)(intptr_t)(f268_expr_i_cant_do_that);

	((void(*)(void))(intptr_t)v6659)();

}
	void f68_IsPtr(void);
	void f68_IsPtr(void);
	void f279_cant_sub_that(void);
	void f228_IsNum(void);
	void f68_IsPtr(void);
	void f279_cant_sub_that(void);
	void f228_IsNum(void);
	void f228_IsNum(void);
	void f279_cant_sub_that(void);
	void f166_NodeWidth(void);
	void f172_MidC2Op(void);
	void f68_IsPtr(void);

// ExprSub workspace at ws+3392 length ws+57
void f278_ExprSub(void) {

	i8 v6650 = (i8)(intptr_t)(ws+3392);
	i8 v6651 = *(i8*)(intptr_t)v6650;
	*(i8*)(intptr_t)(ws+3456) = v6651;
	i8 v6652 = (i8)(intptr_t)(ws+3400);
	i8 v6653 = *(i8*)(intptr_t)v6652;
	*(i8*)(intptr_t)(ws+3464) = v6653;
	i8 v6654 = (i8)(intptr_t)(f270_ResolveUntypedConstantsForAddOrSub);

	((void(*)(void))(intptr_t)v6654)();


	i8 v6660 = (i8)(intptr_t)(ws+3392);
	i8 v6661 = *(i8*)(intptr_t)v6660;
	i8 v6662 = v6661+(+24);
	i8 v6663 = *(i8*)(intptr_t)v6662;
	i8 v6664 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6664 = v6663;

	i8 v6665 = (i8)(intptr_t)(ws+3400);
	i8 v6666 = *(i8*)(intptr_t)v6665;
	i8 v6667 = v6666+(+24);
	i8 v6668 = *(i8*)(intptr_t)v6667;
	i8 v6669 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6669 = v6668;

	i8 v6670 = (i8)(intptr_t)(ws+3416);
	i8 v6671 = *(i8*)(intptr_t)v6670;
	*(i8*)(intptr_t)(ws+3560) = v6671;
	i8 v6672 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6672)();

	i1 v6673 = *(i1*)(intptr_t)(ws+3568);
	i8 v6674 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v6674 = v6673;

	i8 v6675 = (i8)(intptr_t)(ws+3424);
	i8 v6676 = *(i8*)(intptr_t)v6675;
	*(i8*)(intptr_t)(ws+3560) = v6676;
	i8 v6677 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6677)();

	i1 v6678 = *(i1*)(intptr_t)(ws+3568);
	i8 v6679 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v6679 = v6678;

	i8 v6680 = (i8)(intptr_t)(ws+3432);
	i1 v6681 = *(i1*)(intptr_t)v6680;
	i1 v6682 = (i1)+0;
	if (v6681==v6682) goto c02_0544; else goto c02_0546;

c02_0546:;

	i8 v6683 = (i8)(intptr_t)(ws+3433);
	i1 v6684 = *(i1*)(intptr_t)v6683;
	i1 v6685 = (i1)+0;
	if (v6684==v6685) goto c02_0545; else goto c02_0544;

c02_0545:;

	i8 v6686 = (i8)(intptr_t)(ws+3424);
	i8 v6687 = *(i8*)(intptr_t)v6686;
	i8 v6688 = (i8)(intptr_t)(ws+1528);
	i8 v6689 = *(i8*)(intptr_t)v6688;
	if (v6687==v6689) goto c02_0544; else goto c02_0543;

c02_0543:;

	i8 v6690 = (i8)(intptr_t)(f279_cant_sub_that);

	((void(*)(void))(intptr_t)v6690)();

	goto c02_053c;

c02_0544:;

	i8 v6691 = (i8)(intptr_t)(ws+3416);
	i8 v6692 = *(i8*)(intptr_t)v6691;
	*(i8*)(intptr_t)(ws+3560) = v6692;
	i8 v6693 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v6693)();

	i1 v6694 = *(i1*)(intptr_t)(ws+3568);
	i8 v6695 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v6695 = v6694;

	i8 v6696 = (i8)(intptr_t)(ws+3424);
	i8 v6697 = *(i8*)(intptr_t)v6696;
	*(i8*)(intptr_t)(ws+3560) = v6697;
	i8 v6698 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6698)();

	i1 v6699 = *(i1*)(intptr_t)(ws+3568);
	i8 v6700 = (i8)(intptr_t)(ws+3435);
	*(i1*)(intptr_t)v6700 = v6699;

	i8 v6701 = (i8)(intptr_t)(ws+3434);
	i1 v6702 = *(i1*)(intptr_t)v6701;
	i1 v6703 = (i1)+0;
	if (v6702==v6703) goto c02_054c; else goto c02_054d;

c02_054d:;

	i8 v6704 = (i8)(intptr_t)(ws+3435);
	i1 v6705 = *(i1*)(intptr_t)v6704;
	i1 v6706 = (i1)+0;
	if (v6705==v6706) goto c02_054c; else goto c02_054b;

c02_054b:;

	i8 v6707 = (i8)(intptr_t)(f279_cant_sub_that);

	((void(*)(void))(intptr_t)v6707)();

	goto c02_053c;

c02_054c:;

	i8 v6708 = (i8)(intptr_t)(ws+3416);
	i8 v6709 = *(i8*)(intptr_t)v6708;
	*(i8*)(intptr_t)(ws+3560) = v6709;
	i8 v6710 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v6710)();

	i1 v6711 = *(i1*)(intptr_t)(ws+3568);
	i8 v6712 = (i8)(intptr_t)(ws+3436);
	*(i1*)(intptr_t)v6712 = v6711;

	i8 v6713 = (i8)(intptr_t)(ws+3424);
	i8 v6714 = *(i8*)(intptr_t)v6713;
	*(i8*)(intptr_t)(ws+3560) = v6714;
	i8 v6715 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v6715)();

	i1 v6716 = *(i1*)(intptr_t)(ws+3568);
	i8 v6717 = (i8)(intptr_t)(ws+3437);
	*(i1*)(intptr_t)v6717 = v6716;

	i8 v6718 = (i8)(intptr_t)(ws+3436);
	i1 v6719 = *(i1*)(intptr_t)v6718;
	i1 v6720 = (i1)+0;
	if (v6719==v6720) goto c02_0555; else goto c02_0557;

c02_0557:;

	i8 v6721 = (i8)(intptr_t)(ws+3437);
	i1 v6722 = *(i1*)(intptr_t)v6721;
	i1 v6723 = (i1)+0;
	if (v6722==v6723) goto c02_0555; else goto c02_0556;

c02_0556:;

	i8 v6724 = (i8)(intptr_t)(ws+3416);
	i8 v6725 = *(i8*)(intptr_t)v6724;
	i8 v6726 = (i8)(intptr_t)(ws+3424);
	i8 v6727 = *(i8*)(intptr_t)v6726;
	if (v6725==v6727) goto c02_0555; else goto c02_0554;

c02_0554:;

	i8 v6728 = (i8)(intptr_t)(f279_cant_sub_that);

	((void(*)(void))(intptr_t)v6728)();

c02_0555:;

c02_053c:;

	i8 v6729 = (i8)(intptr_t)(ws+3392);
	i8 v6730 = *(i8*)(intptr_t)v6729;
	*(i8*)(intptr_t)(ws+3456) = v6730;
	i8 v6731 = (i8)(intptr_t)(f166_NodeWidth);

	((void(*)(void))(intptr_t)v6731)();

	i1 v6732 = *(i1*)(intptr_t)(ws+3464);
	i8 v6733 = (i8)(intptr_t)(ws+3438);
	*(i1*)(intptr_t)v6733 = v6732;

	i1 v6734 = (i1)+131;
	*(i1*)(intptr_t)(ws+3496) = v6734;
	i8 v6735 = (i8)(intptr_t)(ws+3438);
	i1 v6736 = *(i1*)(intptr_t)v6735;
	*(i1*)(intptr_t)(ws+3497) = v6736;
	i8 v6737 = (i8)(intptr_t)(ws+3392);
	i8 v6738 = *(i8*)(intptr_t)v6737;
	*(i8*)(intptr_t)(ws+3504) = v6738;
	i8 v6739 = (i8)(intptr_t)(ws+3400);
	i8 v6740 = *(i8*)(intptr_t)v6739;
	*(i8*)(intptr_t)(ws+3512) = v6740;
	i8 v6741 = (i8)(intptr_t)(f172_MidC2Op);

	((void(*)(void))(intptr_t)v6741)();

	i8 v6742 = *(i8*)(intptr_t)(ws+3520);
	i8 v6743 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6743 = v6742;

	i8 v6744 = (i8)(intptr_t)(ws+3440);
	i8 v6745 = *(i8*)(intptr_t)v6744;
	i8 v6746 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6746 = v6745;

	i8 v6747 = (i8)(intptr_t)(ws+3416);
	i8 v6748 = *(i8*)(intptr_t)v6747;
	*(i8*)(intptr_t)(ws+3560) = v6748;
	i8 v6749 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v6749)();

	i1 v6750 = *(i1*)(intptr_t)(ws+3568);
	i8 v6751 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v6751 = v6750;

	i8 v6752 = (i8)(intptr_t)(ws+3448);
	i1 v6753 = *(i1*)(intptr_t)v6752;
	i1 v6754 = (i1)+0;
	if (v6753==v6754) goto c02_055e; else goto c02_055f;

c02_055f:;

	i8 v6755 = (i8)(intptr_t)(ws+3416);
	i8 v6756 = *(i8*)(intptr_t)v6755;
	i8 v6757 = (i8)(intptr_t)(ws+3424);
	i8 v6758 = *(i8*)(intptr_t)v6757;
	if (v6756==v6758) goto c02_055d; else goto c02_055e;

c02_055d:;

	i8 v6759 = (i8)(intptr_t)(ws+1528);
	i8 v6760 = *(i8*)(intptr_t)v6759;
	i8 v6761 = (i8)(intptr_t)(ws+3408);
	i8 v6762 = *(i8*)(intptr_t)v6761;
	i8 v6763 = v6762+(+24);
	*(i8*)(intptr_t)v6763 = v6760;

	goto c02_0558;

c02_055e:;

	i8 v6764 = (i8)(intptr_t)(ws+3416);
	i8 v6765 = *(i8*)(intptr_t)v6764;
	i8 v6766 = (i8)(intptr_t)(ws+3408);
	i8 v6767 = *(i8*)(intptr_t)v6766;
	i8 v6768 = v6767+(+24);
	*(i8*)(intptr_t)v6768 = v6765;

c02_0558:;

}
	void f273_ResolveUntypedConstantsNeedingNumbers(void);
	void f229_IsSNum(void);
	void f166_NodeWidth(void);
	void f172_MidC2Op(void);

// Expr2Simple workspace at ws+3392 length ws+64
void f280_Expr2Simple(void) {

	i8 v6769 = (i8)(intptr_t)(ws+3400);
	i8 v6770 = *(i8*)(intptr_t)v6769;
	*(i8*)(intptr_t)(ws+3456) = v6770;
	i8 v6771 = (i8)(intptr_t)(ws+3408);
	i8 v6772 = *(i8*)(intptr_t)v6771;
	*(i8*)(intptr_t)(ws+3464) = v6772;
	i8 v6773 = (i8)(intptr_t)(f273_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(void))(intptr_t)v6773)();

	i8 v6774 = (i8)(intptr_t)(ws+3393);
	i1 v6775 = *(i1*)(intptr_t)v6774;
	i8 v6776 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6776 = v6775;

	i8 v6777 = (i8)(intptr_t)(ws+3400);
	i8 v6778 = *(i8*)(intptr_t)v6777;
	i8 v6779 = v6778+(+24);
	i8 v6780 = *(i8*)(intptr_t)v6779;
	*(i8*)(intptr_t)(ws+3456) = v6780;
	i8 v6781 = (i8)(intptr_t)(f229_IsSNum);

	((void(*)(void))(intptr_t)v6781)();

	i1 v6782 = *(i1*)(intptr_t)(ws+3464);
	i8 v6783 = (i8)(intptr_t)(ws+3425);
	*(i1*)(intptr_t)v6783 = v6782;

	i8 v6784 = (i8)(intptr_t)(ws+3425);
	i1 v6785 = *(i1*)(intptr_t)v6784;
	i1 v6786 = (i1)+0;
	if (v6785==v6786) goto c02_0564; else goto c02_0563;

c02_0563:;

	i8 v6787 = (i8)(intptr_t)(ws+3392);
	i1 v6788 = *(i1*)(intptr_t)v6787;
	i8 v6789 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6789 = v6788;

c02_0564:;

c02_0560:;

	i8 v6790 = (i8)(intptr_t)(ws+3400);
	i8 v6791 = *(i8*)(intptr_t)v6790;
	i8 v6792 = v6791+(+24);
	i8 v6793 = *(i8*)(intptr_t)v6792;
	i8 v6794 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6794 = v6793;

	i8 v6795 = (i8)(intptr_t)(ws+3400);
	i8 v6796 = *(i8*)(intptr_t)v6795;
	*(i8*)(intptr_t)(ws+3456) = v6796;
	i8 v6797 = (i8)(intptr_t)(f166_NodeWidth);

	((void(*)(void))(intptr_t)v6797)();

	i1 v6798 = *(i1*)(intptr_t)(ws+3464);
	i8 v6799 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v6799 = v6798;

	i8 v6800 = (i8)(intptr_t)(ws+3424);
	i1 v6801 = *(i1*)(intptr_t)v6800;
	*(i1*)(intptr_t)(ws+3496) = v6801;
	i8 v6802 = (i8)(intptr_t)(ws+3440);
	i1 v6803 = *(i1*)(intptr_t)v6802;
	*(i1*)(intptr_t)(ws+3497) = v6803;
	i8 v6804 = (i8)(intptr_t)(ws+3400);
	i8 v6805 = *(i8*)(intptr_t)v6804;
	*(i8*)(intptr_t)(ws+3504) = v6805;
	i8 v6806 = (i8)(intptr_t)(ws+3408);
	i8 v6807 = *(i8*)(intptr_t)v6806;
	*(i8*)(intptr_t)(ws+3512) = v6807;
	i8 v6808 = (i8)(intptr_t)(f172_MidC2Op);

	((void(*)(void))(intptr_t)v6808)();

	i8 v6809 = *(i8*)(intptr_t)(ws+3520);
	i8 v6810 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6810 = v6809;

	i8 v6811 = (i8)(intptr_t)(ws+3448);
	i8 v6812 = *(i8*)(intptr_t)v6811;
	i8 v6813 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6813 = v6812;

	i8 v6814 = (i8)(intptr_t)(ws+3432);
	i8 v6815 = *(i8*)(intptr_t)v6814;
	i8 v6816 = (i8)(intptr_t)(ws+3416);
	i8 v6817 = *(i8*)(intptr_t)v6816;
	i8 v6818 = v6817+(+24);
	*(i8*)(intptr_t)v6818 = v6815;

}
const i1 c02_s0111[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f76_SimpleError(void);

// expr_i_checkrhsconst workspace at ws+3456 length ws+8
void f281_expr_i_checkrhsconst(void) {

	i8 v6819 = (i8)(intptr_t)(ws+3456);
	i8 v6820 = *(i8*)(intptr_t)v6819;
	i8 v6821 = v6820+(+48);
	i1 v6822 = *(i1*)(intptr_t)v6821;
	i1 v6823 = (i1)+40;
	if (v6822==v6823) goto c02_0569; else goto c02_0568;

c02_0568:;

	i8 v6824 = (i8)(intptr_t)c02_s0111;
	*(i8*)(intptr_t)(ws+3648) = v6824;
	i8 v6825 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6825)();

c02_0569:;

c02_0565:;

}
	void f228_IsNum(void);
const i1 c02_s0112[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f76_SimpleError(void);
	void f269_CheckExpressionType(void);

// expr_i_checkshift workspace at ws+3456 length ws+17
void f282_expr_i_checkshift(void) {

	i8 v6826 = (i8)(intptr_t)(ws+3456);
	i8 v6827 = *(i8*)(intptr_t)v6826;
	i8 v6828 = v6827+(+24);
	i8 v6829 = *(i8*)(intptr_t)v6828;
	*(i8*)(intptr_t)(ws+3560) = v6829;
	i8 v6830 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v6830)();

	i1 v6831 = *(i1*)(intptr_t)(ws+3568);
	i8 v6832 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v6832 = v6831;

	i8 v6833 = (i8)(intptr_t)(ws+3472);
	i1 v6834 = *(i1*)(intptr_t)v6833;
	i1 v6835 = (i1)+0;
	if (v6834==v6835) goto c02_056d; else goto c02_056e;

c02_056d:;

	i8 v6836 = (i8)(intptr_t)c02_s0112;
	*(i8*)(intptr_t)(ws+3648) = v6836;
	i8 v6837 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6837)();

c02_056e:;

c02_056a:;

	i8 v6838 = (i8)(intptr_t)(ws+3464);
	i8 v6839 = *(i8*)(intptr_t)v6838;
	*(i8*)(intptr_t)(ws+3496) = v6839;
	i8 v6840 = (i8)(intptr_t)(ws+1512);
	i8 v6841 = *(i8*)(intptr_t)v6840;
	*(i8*)(intptr_t)(ws+3504) = v6841;
	i8 v6842 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(void))(intptr_t)v6842)();

}
	void f229_IsSNum(void);
	void f281_expr_i_checkrhsconst(void);
	void f169_FoldConstant2(void);
	void f63_Discard(void);
	void f282_expr_i_checkshift(void);
	void f166_NodeWidth(void);
	void f172_MidC2Op(void);

// ExprShift workspace at ws+3392 length ws+64
void f283_ExprShift(void) {

	i8 v6843 = (i8)(intptr_t)(ws+3393);
	i1 v6844 = *(i1*)(intptr_t)v6843;
	i8 v6845 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6845 = v6844;

	i8 v6846 = (i8)(intptr_t)(ws+3400);
	i8 v6847 = *(i8*)(intptr_t)v6846;
	i8 v6848 = v6847+(+24);
	i8 v6849 = *(i8*)(intptr_t)v6848;
	*(i8*)(intptr_t)(ws+3456) = v6849;
	i8 v6850 = (i8)(intptr_t)(f229_IsSNum);

	((void(*)(void))(intptr_t)v6850)();

	i1 v6851 = *(i1*)(intptr_t)(ws+3464);
	i8 v6852 = (i8)(intptr_t)(ws+3425);
	*(i1*)(intptr_t)v6852 = v6851;

	i8 v6853 = (i8)(intptr_t)(ws+3425);
	i1 v6854 = *(i1*)(intptr_t)v6853;
	i1 v6855 = (i1)+0;
	if (v6854==v6855) goto c02_0573; else goto c02_0572;

c02_0572:;

	i8 v6856 = (i8)(intptr_t)(ws+3392);
	i1 v6857 = *(i1*)(intptr_t)v6856;
	i8 v6858 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v6858 = v6857;

c02_0573:;

c02_056f:;

	i8 v6859 = (i8)(intptr_t)(ws+3400);
	i8 v6860 = *(i8*)(intptr_t)v6859;
	i8 v6861 = v6860+(+48);
	i1 v6862 = *(i1*)(intptr_t)v6861;
	i1 v6863 = (i1)+40;
	if (v6862==v6863) goto c02_0577; else goto c02_0578;

c02_0577:;

	i8 v6864 = (i8)(intptr_t)(ws+3408);
	i8 v6865 = *(i8*)(intptr_t)v6864;
	*(i8*)(intptr_t)(ws+3456) = v6865;
	i8 v6866 = (i8)(intptr_t)(f281_expr_i_checkrhsconst);

	((void(*)(void))(intptr_t)v6866)();

	i8 v6867 = (i8)(intptr_t)(ws+3424);
	i1 v6868 = *(i1*)(intptr_t)v6867;
	*(i1*)(intptr_t)(ws+3592) = v6868;
	i8 v6869 = (i8)(intptr_t)(ws+3400);
	i8 v6870 = *(i8*)(intptr_t)v6869;
	*(i8*)(intptr_t)(ws+3600) = v6870;
	i8 v6871 = (i8)(intptr_t)(ws+3408);
	i8 v6872 = *(i8*)(intptr_t)v6871;
	*(i8*)(intptr_t)(ws+3608) = v6872;
	i8 v6873 = (i8)(intptr_t)(f169_FoldConstant2);

	((void(*)(void))(intptr_t)v6873)();

	i4 v6874 = *(i4*)(intptr_t)(ws+3616);
	i8 v6875 = (i8)(intptr_t)(ws+3428);
	*(i4*)(intptr_t)v6875 = v6874;

	i8 v6876 = (i8)(intptr_t)(ws+3428);
	i4 v6877 = *(i4*)(intptr_t)v6876;
	i8 v6878 = (i8)(intptr_t)(ws+3400);
	i8 v6879 = *(i8*)(intptr_t)v6878;
	*(i4*)(intptr_t)v6879 = v6877;

	i8 v6880 = (i8)(intptr_t)(ws+3400);
	i8 v6881 = *(i8*)(intptr_t)v6880;
	i8 v6882 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6882 = v6881;

	i8 v6883 = (i8)(intptr_t)(ws+3408);
	i8 v6884 = *(i8*)(intptr_t)v6883;
	*(i8*)(intptr_t)(ws+3592) = v6884;
	i8 v6885 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v6885)();

	return;

c02_0578:;

c02_0574:;

	i8 v6886 = (i8)(intptr_t)(ws+3400);
	i8 v6887 = *(i8*)(intptr_t)v6886;
	*(i8*)(intptr_t)(ws+3456) = v6887;
	i8 v6888 = (i8)(intptr_t)(ws+3408);
	i8 v6889 = *(i8*)(intptr_t)v6888;
	*(i8*)(intptr_t)(ws+3464) = v6889;
	i8 v6890 = (i8)(intptr_t)(f282_expr_i_checkshift);

	((void(*)(void))(intptr_t)v6890)();

	i8 v6891 = (i8)(intptr_t)(ws+3400);
	i8 v6892 = *(i8*)(intptr_t)v6891;
	i8 v6893 = v6892+(+24);
	i8 v6894 = *(i8*)(intptr_t)v6893;
	i8 v6895 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6895 = v6894;

	i8 v6896 = (i8)(intptr_t)(ws+3400);
	i8 v6897 = *(i8*)(intptr_t)v6896;
	*(i8*)(intptr_t)(ws+3456) = v6897;
	i8 v6898 = (i8)(intptr_t)(f166_NodeWidth);

	((void(*)(void))(intptr_t)v6898)();

	i1 v6899 = *(i1*)(intptr_t)(ws+3464);
	i8 v6900 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v6900 = v6899;

	i8 v6901 = (i8)(intptr_t)(ws+3424);
	i1 v6902 = *(i1*)(intptr_t)v6901;
	*(i1*)(intptr_t)(ws+3496) = v6902;
	i8 v6903 = (i8)(intptr_t)(ws+3440);
	i1 v6904 = *(i1*)(intptr_t)v6903;
	*(i1*)(intptr_t)(ws+3497) = v6904;
	i8 v6905 = (i8)(intptr_t)(ws+3400);
	i8 v6906 = *(i8*)(intptr_t)v6905;
	*(i8*)(intptr_t)(ws+3504) = v6906;
	i8 v6907 = (i8)(intptr_t)(ws+3408);
	i8 v6908 = *(i8*)(intptr_t)v6907;
	*(i8*)(intptr_t)(ws+3512) = v6908;
	i8 v6909 = (i8)(intptr_t)(f172_MidC2Op);

	((void(*)(void))(intptr_t)v6909)();

	i8 v6910 = *(i8*)(intptr_t)(ws+3520);
	i8 v6911 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6911 = v6910;

	i8 v6912 = (i8)(intptr_t)(ws+3448);
	i8 v6913 = *(i8*)(intptr_t)v6912;
	i8 v6914 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6914 = v6913;

	i8 v6915 = (i8)(intptr_t)(ws+3432);
	i8 v6916 = *(i8*)(intptr_t)v6915;
	i8 v6917 = (i8)(intptr_t)(ws+3416);
	i8 v6918 = *(i8*)(intptr_t)v6917;
	i8 v6919 = v6918+(+24);
	*(i8*)(intptr_t)v6919 = v6916;

}
const i1 c02_s0113[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f76_SimpleError(void);

// PushNode workspace at ws+3640 length ws+8
void f60_PushNode(void) {

	i8 v6920 = (i8)(intptr_t)(ws+3640);
	i8 v6921 = *(i8*)(intptr_t)v6920;
	i8 v6922 = (i8)+0;
	if (v6921==v6922) goto c02_057d; else goto c02_057c;

c02_057c:;

	i8 v6923 = (i8)(intptr_t)(ws+224);
	i8 v6924 = *(i8*)(intptr_t)v6923;
	i8 v6925 = (i8)(intptr_t)(ws+224);
	if (v6924==v6925) goto c02_0581; else goto c02_0582;

c02_0581:;

	i8 v6926 = (i8)(intptr_t)c02_s0113;
	*(i8*)(intptr_t)(ws+3648) = v6926;
	i8 v6927 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v6927)();

c02_0582:;

c02_057e:;

	i8 v6928 = (i8)(intptr_t)(ws+3640);
	i8 v6929 = *(i8*)(intptr_t)v6928;
	i8 v6930 = (i8)(intptr_t)(ws+224);
	i8 v6931 = *(i8*)(intptr_t)v6930;
	*(i8*)(intptr_t)v6931 = v6929;

	i8 v6932 = (i8)(intptr_t)(ws+224);
	i8 v6933 = *(i8*)(intptr_t)v6932;
	i8 v6934 = v6933+(+8);
	i8 v6935 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6935 = v6934;

c02_057d:;

c02_0579:;

}

// PopNode workspace at ws+3640 length ws+8
void f61_PopNode(void) {

	i8 v6936 = (i8)(intptr_t)(ws+224);
	i8 v6937 = *(i8*)(intptr_t)v6936;
	i8 v6938 = v6937+(-8);
	i8 v6939 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6939 = v6938;

	i8 v6940 = (i8)(intptr_t)(ws+224);
	i8 v6941 = *(i8*)(intptr_t)v6940;
	i8 v6942 = *(i8*)(intptr_t)v6941;
	i8 v6943 = (i8)(intptr_t)(ws+3640);
	*(i8*)(intptr_t)v6943 = v6942;

}
	void f61_PopNode(void);
	void f60_PushNode(void);
	void f60_PushNode(void);

// NextNode workspace at ws+3624 length ws+16
void f62_NextNode(void) {

	i8 v6944 = (i8)(intptr_t)(f61_PopNode);

	((void(*)(void))(intptr_t)v6944)();

	i8 v6945 = *(i8*)(intptr_t)(ws+3640);
	i8 v6946 = (i8)(intptr_t)(ws+3632);
	*(i8*)(intptr_t)v6946 = v6945;

	i8 v6947 = (i8)(intptr_t)(ws+3632);
	i8 v6948 = *(i8*)(intptr_t)v6947;
	i8 v6949 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v6949 = v6948;

	i8 v6950 = (i8)(intptr_t)(ws+3624);
	i8 v6951 = *(i8*)(intptr_t)v6950;
	i8 v6952 = (i8)+0;
	if (v6951==v6952) goto c02_0587; else goto c02_0586;

c02_0586:;

	i8 v6953 = (i8)(intptr_t)(ws+3624);
	i8 v6954 = *(i8*)(intptr_t)v6953;
	i8 v6955 = v6954+(+32);
	i8 v6956 = *(i8*)(intptr_t)v6955;
	*(i8*)(intptr_t)(ws+3640) = v6956;
	i8 v6957 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v6957)();

	i8 v6958 = (i8)(intptr_t)(ws+3624);
	i8 v6959 = *(i8*)(intptr_t)v6958;
	i8 v6960 = v6959+(+40);
	i8 v6961 = *(i8*)(intptr_t)v6960;
	*(i8*)(intptr_t)(ws+3640) = v6961;
	i8 v6962 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v6962)();

c02_0587:;

c02_0583:;

}
	void f60_PushNode(void);
	void f62_NextNode(void);
	void f165_FreeNode(void);

// Discard workspace at ws+3592 length ws+32
void f63_Discard(void) {

	i8 v6963 = (i8)(intptr_t)(ws+224);
	i8 v6964 = *(i8*)(intptr_t)v6963;
	i8 v6965 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v6965 = v6964;

	i8 v6966 = (i8)(intptr_t)(ws+3592);
	i8 v6967 = *(i8*)(intptr_t)v6966;
	*(i8*)(intptr_t)(ws+3640) = v6967;
	i8 v6968 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(void))(intptr_t)v6968)();

c02_0588:;

	i8 v6969 = (i8)(intptr_t)(ws+224);
	i8 v6970 = *(i8*)(intptr_t)v6969;
	i8 v6971 = (i8)(intptr_t)(ws+3600);
	i8 v6972 = *(i8*)(intptr_t)v6971;
	if (v6970==v6972) goto c02_058d; else goto c02_058c;

c02_058c:;

	i8 v6973 = (i8)(intptr_t)(f62_NextNode);

	((void(*)(void))(intptr_t)v6973)();

	i8 v6974 = *(i8*)(intptr_t)(ws+3624);
	i8 v6975 = (i8)(intptr_t)(ws+3608);
	*(i8*)(intptr_t)v6975 = v6974;

	i8 v6976 = (i8)(intptr_t)(ws+3608);
	i8 v6977 = *(i8*)(intptr_t)v6976;
	i8 v6978 = (i8)(intptr_t)(ws+3616);
	*(i8*)(intptr_t)v6978 = v6977;

	i8 v6979 = (i8)(intptr_t)(ws+3616);
	i8 v6980 = *(i8*)(intptr_t)v6979;
	*(i8*)(intptr_t)(ws+3624) = v6980;
	i8 v6981 = (i8)(intptr_t)(f165_FreeNode);

	((void(*)(void))(intptr_t)v6981)();

	goto c02_0588;

c02_058d:;

}
	void f69_InternalAlloc(void);
	void f236_AllocLabel(void);
	void f236_AllocLabel(void);

// BeginNormalLoop workspace at ws+3400 length ws+20
void f284_BeginNormalLoop(void) {

	i8 v6982 = (i8)+8;
	*(i8*)(intptr_t)(ws+3640) = v6982;
	i8 v6983 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v6983)();

	i8 v6984 = *(i8*)(intptr_t)(ws+3648);
	i8 v6985 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6985 = v6984;

	i8 v6986 = (i8)(intptr_t)(ws+3408);
	i8 v6987 = *(i8*)(intptr_t)v6986;
	i8 v6988 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v6988 = v6987;

	i8 v6989 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v6989)();

	i2 v6990 = *(i2*)(intptr_t)(ws+3472);
	i8 v6991 = (i8)(intptr_t)(ws+3416);
	*(i2*)(intptr_t)v6991 = v6990;

	i8 v6992 = (i8)(intptr_t)(ws+3416);
	i2 v6993 = *(i2*)(intptr_t)v6992;
	i8 v6994 = (i8)(intptr_t)(ws+3400);
	i8 v6995 = *(i8*)(intptr_t)v6994;
	*(i2*)(intptr_t)v6995 = v6993;

	i8 v6996 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v6996)();

	i2 v6997 = *(i2*)(intptr_t)(ws+3472);
	i8 v6998 = (i8)(intptr_t)(ws+3418);
	*(i2*)(intptr_t)v6998 = v6997;

	i8 v6999 = (i8)(intptr_t)(ws+3418);
	i2 v7000 = *(i2*)(intptr_t)v6999;
	i8 v7001 = (i8)(intptr_t)(ws+3400);
	i8 v7002 = *(i8*)(intptr_t)v7001;
	i8 v7003 = v7002+(+2);
	*(i2*)(intptr_t)v7003 = v7000;

	i8 v7004 = (i8)(intptr_t)(ws+52);
	i2 v7005 = *(i2*)(intptr_t)v7004;
	i8 v7006 = (i8)(intptr_t)(ws+3400);
	i8 v7007 = *(i8*)(intptr_t)v7006;
	i8 v7008 = v7007+(+4);
	*(i2*)(intptr_t)v7008 = v7005;

	i8 v7009 = (i8)(intptr_t)(ws+54);
	i2 v7010 = *(i2*)(intptr_t)v7009;
	i8 v7011 = (i8)(intptr_t)(ws+3400);
	i8 v7012 = *(i8*)(intptr_t)v7011;
	i8 v7013 = v7012+(+6);
	*(i2*)(intptr_t)v7013 = v7010;

	i8 v7014 = (i8)(intptr_t)(ws+3400);
	i8 v7015 = *(i8*)(intptr_t)v7014;
	i8 v7016 = v7015+(+2);
	i2 v7017 = *(i2*)(intptr_t)v7016;
	i8 v7018 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7018 = v7017;

	i8 v7019 = (i8)(intptr_t)(ws+3400);
	i8 v7020 = *(i8*)(intptr_t)v7019;
	i2 v7021 = *(i2*)(intptr_t)v7020;
	i8 v7022 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v7022 = v7021;

}
	void f117_MidJump(void);
	void f257_Generate(void);
	void f128_MidLabel(void);
	void f257_Generate(void);
	void f34_Free(void);

// TerminateNormalLoop workspace at ws+3384 length ws+24
void f285_TerminateNormalLoop(void) {

	i8 v7023 = (i8)(intptr_t)(ws+54);
	i2 v7024 = *(i2*)(intptr_t)v7023;
	*(i2*)(intptr_t)(ws+3416) = v7024;
	i8 v7025 = (i8)(intptr_t)(f117_MidJump);

	((void(*)(void))(intptr_t)v7025)();

	i8 v7026 = *(i8*)(intptr_t)(ws+3424);
	i8 v7027 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7027 = v7026;

	i8 v7028 = (i8)(intptr_t)(ws+3392);
	i8 v7029 = *(i8*)(intptr_t)v7028;
	*(i8*)(intptr_t)(ws+3488) = v7029;
	i8 v7030 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7030)();

	i8 v7031 = (i8)(intptr_t)(ws+52);
	i2 v7032 = *(i2*)(intptr_t)v7031;
	*(i2*)(intptr_t)(ws+3472) = v7032;
	i8 v7033 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v7033)();

	i8 v7034 = *(i8*)(intptr_t)(ws+3480);
	i8 v7035 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7035 = v7034;

	i8 v7036 = (i8)(intptr_t)(ws+3400);
	i8 v7037 = *(i8*)(intptr_t)v7036;
	*(i8*)(intptr_t)(ws+3488) = v7037;
	i8 v7038 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7038)();

	i8 v7039 = (i8)(intptr_t)(ws+3384);
	i8 v7040 = *(i8*)(intptr_t)v7039;
	i8 v7041 = v7040+(+4);
	i2 v7042 = *(i2*)(intptr_t)v7041;
	i8 v7043 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7043 = v7042;

	i8 v7044 = (i8)(intptr_t)(ws+3384);
	i8 v7045 = *(i8*)(intptr_t)v7044;
	i8 v7046 = v7045+(+6);
	i2 v7047 = *(i2*)(intptr_t)v7046;
	i8 v7048 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v7048 = v7047;

	i8 v7049 = (i8)(intptr_t)(ws+3384);
	i8 v7050 = *(i8*)(intptr_t)v7049;
	*(i8*)(intptr_t)(ws+3680) = v7050;
	i8 v7051 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7051)();

}

// Negate workspace at ws+3384 length ws+8
void f286_Negate(void) {

	i8 v7052 = (i8)(intptr_t)(ws+3384);
	i8 v7053 = *(i8*)(intptr_t)v7052;
	i8 v7054 = v7053+(+6);
	i1 v7055 = *(i1*)(intptr_t)v7054;
	i1 v7056 = v7055^(+1);
	i8 v7057 = (i8)(intptr_t)(ws+3384);
	i8 v7058 = *(i8*)(intptr_t)v7057;
	i8 v7059 = v7058+(+6);
	*(i1*)(intptr_t)v7059 = v7056;

}
	void f274_CondSimple(void);
	void f236_AllocLabel(void);
	void f236_AllocLabel(void);
	void f166_NodeWidth(void);
	void f119_MidBeq(void);

// ConditionalEq workspace at ws+3392 length ws+56
void f287_ConditionalEq(void) {

	i8 v7060 = (i8)(intptr_t)(ws+3392);
	i8 v7061 = *(i8*)(intptr_t)v7060;
	*(i8*)(intptr_t)(ws+3456) = v7061;
	i8 v7062 = (i8)(intptr_t)(ws+3400);
	i8 v7063 = *(i8*)(intptr_t)v7062;
	*(i8*)(intptr_t)(ws+3464) = v7063;
	i8 v7064 = (i8)(intptr_t)(f274_CondSimple);

	((void(*)(void))(intptr_t)v7064)();

	i8 v7065 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v7065)();

	i2 v7066 = *(i2*)(intptr_t)(ws+3472);
	i8 v7067 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v7067 = v7066;

	i8 v7068 = (i8)(intptr_t)(ws+3424);
	i2 v7069 = *(i2*)(intptr_t)v7068;
	i8 v7070 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v7070 = v7069;

	i8 v7071 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v7071)();

	i2 v7072 = *(i2*)(intptr_t)(ws+3472);
	i8 v7073 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v7073 = v7072;

	i8 v7074 = (i8)(intptr_t)(ws+3428);
	i2 v7075 = *(i2*)(intptr_t)v7074;
	i8 v7076 = (i8)(intptr_t)(ws+3430);
	*(i2*)(intptr_t)v7076 = v7075;

	i8 v7077 = (i8)(intptr_t)(ws+3392);
	i8 v7078 = *(i8*)(intptr_t)v7077;
	*(i8*)(intptr_t)(ws+3456) = v7078;
	i8 v7079 = (i8)(intptr_t)(f166_NodeWidth);

	((void(*)(void))(intptr_t)v7079)();

	i1 v7080 = *(i1*)(intptr_t)(ws+3464);
	i8 v7081 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7081 = v7080;

	i8 v7082 = (i8)(intptr_t)(ws+3432);
	i1 v7083 = *(i1*)(intptr_t)v7082;
	i8 v7084 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7084 = v7083;

	i8 v7085 = (i8)(intptr_t)(ws+3433);
	i1 v7086 = *(i1*)(intptr_t)v7085;
	*(i1*)(intptr_t)(ws+3448) = v7086;
	i8 v7087 = (i8)(intptr_t)(ws+3392);
	i8 v7088 = *(i8*)(intptr_t)v7087;
	*(i8*)(intptr_t)(ws+3456) = v7088;
	i8 v7089 = (i8)(intptr_t)(ws+3400);
	i8 v7090 = *(i8*)(intptr_t)v7089;
	*(i8*)(intptr_t)(ws+3464) = v7090;
	i8 v7091 = (i8)(intptr_t)(ws+3426);
	i2 v7092 = *(i2*)(intptr_t)v7091;
	*(i2*)(intptr_t)(ws+3472) = v7092;
	i8 v7093 = (i8)(intptr_t)(ws+3430);
	i2 v7094 = *(i2*)(intptr_t)v7093;
	*(i2*)(intptr_t)(ws+3474) = v7094;
	i2 v7095 = (i2)+0;
	*(i2*)(intptr_t)(ws+3476) = v7095;
	i8 v7096 = (i8)(intptr_t)(ws+3408);
	i1 v7097 = *(i1*)(intptr_t)v7096;
	*(i1*)(intptr_t)(ws+3478) = v7097;
	i8 v7098 = (i8)(intptr_t)(f119_MidBeq);

	((void(*)(void))(intptr_t)v7098)();

	i8 v7099 = *(i8*)(intptr_t)(ws+3480);
	i8 v7100 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7100 = v7099;

	i8 v7101 = (i8)(intptr_t)(ws+3440);
	i8 v7102 = *(i8*)(intptr_t)v7101;
	i8 v7103 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7103 = v7102;

}
	void f274_CondSimple(void);
	void f236_AllocLabel(void);
	void f236_AllocLabel(void);
	void f166_NodeWidth(void);
	void f229_IsSNum(void);
	void f112_MidBlts(void);
	void f114_MidBltu(void);

// ConditionalLt workspace at ws+3392 length ws+64
void f288_ConditionalLt(void) {

	i8 v7104 = (i8)(intptr_t)(ws+3392);
	i8 v7105 = *(i8*)(intptr_t)v7104;
	*(i8*)(intptr_t)(ws+3456) = v7105;
	i8 v7106 = (i8)(intptr_t)(ws+3400);
	i8 v7107 = *(i8*)(intptr_t)v7106;
	*(i8*)(intptr_t)(ws+3464) = v7107;
	i8 v7108 = (i8)(intptr_t)(f274_CondSimple);

	((void(*)(void))(intptr_t)v7108)();

	i8 v7109 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v7109)();

	i2 v7110 = *(i2*)(intptr_t)(ws+3472);
	i8 v7111 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v7111 = v7110;

	i8 v7112 = (i8)(intptr_t)(ws+3424);
	i2 v7113 = *(i2*)(intptr_t)v7112;
	i8 v7114 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v7114 = v7113;

	i8 v7115 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v7115)();

	i2 v7116 = *(i2*)(intptr_t)(ws+3472);
	i8 v7117 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v7117 = v7116;

	i8 v7118 = (i8)(intptr_t)(ws+3428);
	i2 v7119 = *(i2*)(intptr_t)v7118;
	i8 v7120 = (i8)(intptr_t)(ws+3430);
	*(i2*)(intptr_t)v7120 = v7119;

	i8 v7121 = (i8)(intptr_t)(ws+3392);
	i8 v7122 = *(i8*)(intptr_t)v7121;
	*(i8*)(intptr_t)(ws+3456) = v7122;
	i8 v7123 = (i8)(intptr_t)(f166_NodeWidth);

	((void(*)(void))(intptr_t)v7123)();

	i1 v7124 = *(i1*)(intptr_t)(ws+3464);
	i8 v7125 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7125 = v7124;

	i8 v7126 = (i8)(intptr_t)(ws+3432);
	i1 v7127 = *(i1*)(intptr_t)v7126;
	i8 v7128 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7128 = v7127;

	i8 v7129 = (i8)(intptr_t)(ws+3392);
	i8 v7130 = *(i8*)(intptr_t)v7129;
	i8 v7131 = v7130+(+24);
	i8 v7132 = *(i8*)(intptr_t)v7131;
	*(i8*)(intptr_t)(ws+3456) = v7132;
	i8 v7133 = (i8)(intptr_t)(f229_IsSNum);

	((void(*)(void))(intptr_t)v7133)();

	i1 v7134 = *(i1*)(intptr_t)(ws+3464);
	i8 v7135 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v7135 = v7134;

	i8 v7136 = (i8)(intptr_t)(ws+3434);
	i1 v7137 = *(i1*)(intptr_t)v7136;
	i1 v7138 = (i1)+0;
	if (v7137==v7138) goto c02_0592; else goto c02_0591;

c02_0591:;

	i8 v7139 = (i8)(intptr_t)(ws+3433);
	i1 v7140 = *(i1*)(intptr_t)v7139;
	*(i1*)(intptr_t)(ws+3456) = v7140;
	i8 v7141 = (i8)(intptr_t)(ws+3392);
	i8 v7142 = *(i8*)(intptr_t)v7141;
	*(i8*)(intptr_t)(ws+3464) = v7142;
	i8 v7143 = (i8)(intptr_t)(ws+3400);
	i8 v7144 = *(i8*)(intptr_t)v7143;
	*(i8*)(intptr_t)(ws+3472) = v7144;
	i8 v7145 = (i8)(intptr_t)(ws+3426);
	i2 v7146 = *(i2*)(intptr_t)v7145;
	*(i2*)(intptr_t)(ws+3480) = v7146;
	i8 v7147 = (i8)(intptr_t)(ws+3430);
	i2 v7148 = *(i2*)(intptr_t)v7147;
	*(i2*)(intptr_t)(ws+3482) = v7148;
	i2 v7149 = (i2)+0;
	*(i2*)(intptr_t)(ws+3484) = v7149;
	i8 v7150 = (i8)(intptr_t)(ws+3408);
	i1 v7151 = *(i1*)(intptr_t)v7150;
	*(i1*)(intptr_t)(ws+3486) = v7151;
	i8 v7152 = (i8)(intptr_t)(f112_MidBlts);

	((void(*)(void))(intptr_t)v7152)();

	i8 v7153 = *(i8*)(intptr_t)(ws+3488);
	i8 v7154 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7154 = v7153;

	i8 v7155 = (i8)(intptr_t)(ws+3440);
	i8 v7156 = *(i8*)(intptr_t)v7155;
	i8 v7157 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7157 = v7156;

	goto c02_058e;

c02_0592:;

	i8 v7158 = (i8)(intptr_t)(ws+3433);
	i1 v7159 = *(i1*)(intptr_t)v7158;
	*(i1*)(intptr_t)(ws+3456) = v7159;
	i8 v7160 = (i8)(intptr_t)(ws+3392);
	i8 v7161 = *(i8*)(intptr_t)v7160;
	*(i8*)(intptr_t)(ws+3464) = v7161;
	i8 v7162 = (i8)(intptr_t)(ws+3400);
	i8 v7163 = *(i8*)(intptr_t)v7162;
	*(i8*)(intptr_t)(ws+3472) = v7163;
	i8 v7164 = (i8)(intptr_t)(ws+3426);
	i2 v7165 = *(i2*)(intptr_t)v7164;
	*(i2*)(intptr_t)(ws+3480) = v7165;
	i8 v7166 = (i8)(intptr_t)(ws+3430);
	i2 v7167 = *(i2*)(intptr_t)v7166;
	*(i2*)(intptr_t)(ws+3482) = v7167;
	i2 v7168 = (i2)+0;
	*(i2*)(intptr_t)(ws+3484) = v7168;
	i8 v7169 = (i8)(intptr_t)(ws+3408);
	i1 v7170 = *(i1*)(intptr_t)v7169;
	*(i1*)(intptr_t)(ws+3486) = v7170;
	i8 v7171 = (i8)(intptr_t)(f114_MidBltu);

	((void(*)(void))(intptr_t)v7171)();

	i8 v7172 = *(i8*)(intptr_t)(ws+3488);
	i8 v7173 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7173 = v7172;

	i8 v7174 = (i8)(intptr_t)(ws+3448);
	i8 v7175 = *(i8*)(intptr_t)v7174;
	i8 v7176 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7176 = v7175;

c02_058e:;

}
const i1 c02_s0114[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(void);

// parser_i_bad_next_prev workspace at ws+3408 length ws+0
void f289_parser_i_bad_next_prev(void) {

	i8 v7177 = (i8)(intptr_t)c02_s0114;
	*(i8*)(intptr_t)(ws+3648) = v7177;
	i8 v7178 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7178)();

}
const i1 c02_s0115[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(void);

// parser_i_constant_error workspace at ws+3448 length ws+0
void f290_parser_i_constant_error(void) {

	i8 v7179 = (i8)(intptr_t)c02_s0115;
	*(i8*)(intptr_t)(ws+3648) = v7179;
	i8 v7180 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7180)();

}
	void f74_StartError(void);
const i1 c02_s0116[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0117[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f12_print(void);
	void f18_print_i8(void);
const i1 c02_s0118[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f12_print(void);
	void f18_print_i8(void);
	void f75_EndError(void);

// i_check_sub_call_args workspace at ws+3488 length ws+8
void f291_i_check_sub_call_args(void) {

	i8 v7181 = (i8)(intptr_t)(ws+80);
	i8 v7182 = *(i8*)(intptr_t)v7181;
	i8 v7183 = v7182+(+8);
	i8 v7184 = *(i8*)(intptr_t)v7183;
	i8 v7185 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v7185 = v7184;

	i8 v7186 = (i8)(intptr_t)(ws+80);
	i8 v7187 = *(i8*)(intptr_t)v7186;
	i8 v7188 = v7187+(+40);
	i1 v7189 = *(i1*)(intptr_t)v7188;
	i8 v7190 = (i8)(intptr_t)(ws+3488);
	i8 v7191 = *(i8*)(intptr_t)v7190;
	i8 v7192 = v7191+(+80);
	i1 v7193 = *(i1*)(intptr_t)v7192;
	if (v7189==v7193) goto c02_0597; else goto c02_0596;

c02_0596:;

	i8 v7194 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7194)();

	i8 v7195 = (i8)(intptr_t)c02_s0116;
	*(i8*)(intptr_t)(ws+3696) = v7195;
	i8 v7196 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7196)();

	i8 v7197 = (i8)(intptr_t)(ws+3488);
	i8 v7198 = *(i8*)(intptr_t)v7197;
	i8 v7199 = *(i8*)(intptr_t)v7198;
	i8 v7200 = v7199+(+8);
	i8 v7201 = *(i8*)(intptr_t)v7200;
	*(i8*)(intptr_t)(ws+3696) = v7201;
	i8 v7202 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7202)();

	i8 v7203 = (i8)(intptr_t)c02_s0117;
	*(i8*)(intptr_t)(ws+3696) = v7203;
	i8 v7204 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7204)();

	i8 v7205 = (i8)(intptr_t)(ws+3488);
	i8 v7206 = *(i8*)(intptr_t)v7205;
	i8 v7207 = v7206+(+80);
	i1 v7208 = *(i1*)(intptr_t)v7207;
	*(i1*)(intptr_t)(ws+3496) = v7208;
	i8 v7209 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v7209)();

	i8 v7210 = (i8)(intptr_t)c02_s0118;
	*(i8*)(intptr_t)(ws+3696) = v7210;
	i8 v7211 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7211)();

	i8 v7212 = (i8)(intptr_t)(ws+80);
	i8 v7213 = *(i8*)(intptr_t)v7212;
	i8 v7214 = v7213+(+40);
	i1 v7215 = *(i1*)(intptr_t)v7214;
	*(i1*)(intptr_t)(ws+3496) = v7215;
	i8 v7216 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v7216)();

	i8 v7217 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7217)();

c02_0597:;

c02_0593:;

}
	void f201_EmitterReferenceSubroutine(void);
	void f34_Free(void);

// i_end_call workspace at ws+3488 length ws+8
void f292_i_end_call(void) {

	i8 v7218 = (i8)(intptr_t)(ws+40);
	i8 v7219 = *(i8*)(intptr_t)v7218;
	*(i8*)(intptr_t)(ws+3496) = v7219;
	i8 v7220 = (i8)(intptr_t)(ws+80);
	i8 v7221 = *(i8*)(intptr_t)v7220;
	i8 v7222 = v7221+(+8);
	i8 v7223 = *(i8*)(intptr_t)v7222;
	*(i8*)(intptr_t)(ws+3504) = v7223;
	i8 v7224 = (i8)(intptr_t)(f201_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v7224)();

	i8 v7225 = (i8)(intptr_t)(ws+80);
	i8 v7226 = *(i8*)(intptr_t)v7225;
	i8 v7227 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v7227 = v7226;

	i8 v7228 = (i8)(intptr_t)(ws+3488);
	i8 v7229 = *(i8*)(intptr_t)v7228;
	i8 v7230 = v7229+(+16);
	i8 v7231 = *(i8*)(intptr_t)v7230;
	i8 v7232 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v7232 = v7231;

	i8 v7233 = (i8)(intptr_t)(ws+3488);
	i8 v7234 = *(i8*)(intptr_t)v7233;
	*(i8*)(intptr_t)(ws+3680) = v7234;
	i8 v7235 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7235)();

}
	void f74_StartError(void);
const i1 c02_s0119[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);

// SymbolRedeclarationError workspace at ws+3392 length ws+0
void f293_SymbolRedeclarationError(void) {

	i8 v7236 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7236)();

	i8 v7237 = (i8)(intptr_t)c02_s0119;
	*(i8*)(intptr_t)(ws+3696) = v7237;
	i8 v7238 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7238)();

	i8 v7239 = (i8)(intptr_t)(ws+72);
	i8 v7240 = *(i8*)(intptr_t)v7239;
	i8 v7241 = v7240+(+32);
	i8 v7242 = *(i8*)(intptr_t)v7241;
	i8 v7243 = v7242+(+8);
	i8 v7244 = *(i8*)(intptr_t)v7243;
	*(i8*)(intptr_t)(ws+3696) = v7244;
	i8 v7245 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7245)();

	i8 v7246 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7246)();

}
	void f74_StartError(void);
const i1 c02_s011a[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);

// WrongNumberOfElementsError workspace at ws+3464 length ws+0
void f294_WrongNumberOfElementsError(void) {

	i8 v7247 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7247)();

	i8 v7248 = (i8)(intptr_t)c02_s011a;
	*(i8*)(intptr_t)(ws+3696) = v7248;
	i8 v7249 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7249)();

	i8 v7250 = (i8)(intptr_t)(ws+72);
	i8 v7251 = *(i8*)(intptr_t)v7250;
	i8 v7252 = v7251+(+32);
	i8 v7253 = *(i8*)(intptr_t)v7252;
	i8 v7254 = v7253+(+8);
	i8 v7255 = *(i8*)(intptr_t)v7254;
	*(i8*)(intptr_t)(ws+3696) = v7255;
	i8 v7256 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7256)();

	i8 v7257 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7257)();

}
	void f226_IsArray(void);
	void f239_ArchAlignUp(void);
	void f241_ArchGuessIntType(void);
	void f294_WrongNumberOfElementsError(void);
	void f294_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3392 length ws+16
void f295_CheckEndOfInitialiser(void) {

	i8 v7258 = (i8)(intptr_t)(ws+72);
	i8 v7259 = *(i8*)(intptr_t)v7258;
	*(i8*)(intptr_t)(ws+3496) = v7259;
	i8 v7260 = (i8)(intptr_t)(f226_IsArray);

	((void(*)(void))(intptr_t)v7260)();

	i1 v7261 = *(i1*)(intptr_t)(ws+3504);
	i8 v7262 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v7262 = v7261;

	i8 v7263 = (i8)(intptr_t)(ws+3392);
	i1 v7264 = *(i1*)(intptr_t)v7263;
	i1 v7265 = (i1)+0;
	if (v7264==v7265) goto c02_059c; else goto c02_059b;

c02_059b:;

	i8 v7266 = (i8)(intptr_t)(ws+72);
	i8 v7267 = *(i8*)(intptr_t)v7266;
	i8 v7268 = *(i8*)(intptr_t)v7267;
	i8 v7269 = v7268+(+50);
	i2 v7270 = *(i2*)(intptr_t)v7269;
	i8 v7271 = (i8)(intptr_t)(ws+3394);
	*(i2*)(intptr_t)v7271 = v7270;

	i8 v7272 = (i8)(intptr_t)(ws+1560);
	i2 v7273 = *(i2*)(intptr_t)v7272;
	*(i2*)(intptr_t)(ws+3544) = v7273;
	i8 v7274 = (i8)(intptr_t)(ws+72);
	i8 v7275 = *(i8*)(intptr_t)v7274;
	i8 v7276 = *(i8*)(intptr_t)v7275;
	i8 v7277 = v7276+(+53);
	i1 v7278 = *(i1*)(intptr_t)v7277;
	*(i1*)(intptr_t)(ws+3546) = v7278;
	i8 v7279 = (i8)(intptr_t)(f239_ArchAlignUp);

	((void(*)(void))(intptr_t)v7279)();

	i2 v7280 = *(i2*)(intptr_t)(ws+3548);
	i8 v7281 = (i8)(intptr_t)(ws+3396);
	*(i2*)(intptr_t)v7281 = v7280;

	i8 v7282 = (i8)(intptr_t)(ws+3396);
	i2 v7283 = *(i2*)(intptr_t)v7282;
	i8 v7284 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7284 = v7283;

	i8 v7285 = (i8)(intptr_t)(ws+72);
	i8 v7286 = *(i8*)(intptr_t)v7285;
	i8 v7287 = v7286+(+48);
	i2 v7288 = *(i2*)(intptr_t)v7287;
	i2 v7289 = (i2)+0;
	if (v7288==v7289) goto c02_05a0; else goto c02_05a1;

c02_05a0:;

	i8 v7290 = (i8)(intptr_t)(ws+1560);
	i2 v7291 = *(i2*)(intptr_t)v7290;
	i8 v7292 = (i8)(intptr_t)(ws+72);
	i8 v7293 = *(i8*)(intptr_t)v7292;
	i8 v7294 = v7293+(+48);
	*(i2*)(intptr_t)v7294 = v7291;

	i8 v7295 = (i8)(intptr_t)(ws+1560);
	i2 v7296 = *(i2*)(intptr_t)v7295;
	i8 v7297 = (i8)(intptr_t)(ws+3394);
	i2 v7298 = *(i2*)(intptr_t)v7297;
	i2 v7299 = v7296/v7298;
	i8 v7300 = (i8)(intptr_t)(ws+3398);
	*(i2*)(intptr_t)v7300 = v7299;

	i8 v7301 = (i8)(intptr_t)(ws+3398);
	i2 v7302 = *(i2*)(intptr_t)v7301;
	i8 v7303 = (i8)(intptr_t)(ws+72);
	i8 v7304 = *(i8*)(intptr_t)v7303;
	i8 v7305 = v7304+(+8);
	*(i2*)(intptr_t)v7305 = v7302;

	i4 v7306 = (i4)+0;
	*(i4*)(intptr_t)(ws+3448) = v7306;
	i8 v7307 = (i8)(intptr_t)(ws+3398);
	i2 v7308 = *(i2*)(intptr_t)v7307;
	i2 v7309 = v7308+(-1);
	i4 v7310 = v7309;
	*(i4*)(intptr_t)(ws+3452) = v7310;
	i8 v7311 = (i8)(intptr_t)(f241_ArchGuessIntType);

	((void(*)(void))(intptr_t)v7311)();

	i8 v7312 = *(i8*)(intptr_t)(ws+3456);
	i8 v7313 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7313 = v7312;

	i8 v7314 = (i8)(intptr_t)(ws+3400);
	i8 v7315 = *(i8*)(intptr_t)v7314;
	i8 v7316 = (i8)(intptr_t)(ws+72);
	i8 v7317 = *(i8*)(intptr_t)v7316;
	i8 v7318 = v7317+(+16);
	*(i8*)(intptr_t)v7318 = v7315;

c02_05a1:;

c02_059d:;

	i8 v7319 = (i8)(intptr_t)(ws+1560);
	i2 v7320 = *(i2*)(intptr_t)v7319;
	i8 v7321 = (i8)(intptr_t)(ws+72);
	i8 v7322 = *(i8*)(intptr_t)v7321;
	i8 v7323 = v7322+(+48);
	i2 v7324 = *(i2*)(intptr_t)v7323;
	if (v7320==v7324) goto c02_05a6; else goto c02_05a5;

c02_05a5:;

	i8 v7325 = (i8)(intptr_t)(f294_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7325)();

c02_05a6:;

c02_05a2:;

	goto c02_0598;

c02_059c:;

	i8 v7326 = (i8)(intptr_t)(ws+1552);
	i8 v7327 = *(i8*)(intptr_t)v7326;
	i8 v7328 = (i8)+0;
	if (v7327==v7328) goto c02_05ab; else goto c02_05aa;

c02_05aa:;

	i8 v7329 = (i8)(intptr_t)(f294_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7329)();

c02_05ab:;

c02_05a7:;

c02_0598:;

}
	void f226_IsArray(void);

// GetInitedMember workspace at ws+3464 length ws+17
void f296_GetInitedMember(void) {

	i8 v7330 = (i8)+0;
	i8 v7331 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v7331 = v7330;

	i8 v7332 = (i8)(intptr_t)(ws+72);
	i8 v7333 = *(i8*)(intptr_t)v7332;
	*(i8*)(intptr_t)(ws+3496) = v7333;
	i8 v7334 = (i8)(intptr_t)(f226_IsArray);

	((void(*)(void))(intptr_t)v7334)();

	i1 v7335 = *(i1*)(intptr_t)(ws+3504);
	i8 v7336 = (i8)(intptr_t)(ws+3480);
	*(i1*)(intptr_t)v7336 = v7335;

	i8 v7337 = (i8)(intptr_t)(ws+3480);
	i1 v7338 = *(i1*)(intptr_t)v7337;
	i1 v7339 = (i1)+0;
	if (v7338==v7339) goto c02_05b0; else goto c02_05af;

c02_05af:;

	i8 v7340 = (i8)(intptr_t)(ws+72);
	i8 v7341 = *(i8*)(intptr_t)v7340;
	i8 v7342 = *(i8*)(intptr_t)v7341;
	i8 v7343 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7343 = v7342;

	goto c02_05ac;

c02_05b0:;

	i8 v7344 = (i8)(intptr_t)(ws+1552);
	i8 v7345 = *(i8*)(intptr_t)v7344;
	i8 v7346 = (i8)+0;
	if (v7345==v7346) goto c02_05b4; else goto c02_05b5;

c02_05b4:;

	i8 v7347 = (i8)+0;
	i8 v7348 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7348 = v7347;

	return;

c02_05b5:;

c02_05b1:;

	i8 v7349 = (i8)(intptr_t)(ws+1552);
	i8 v7350 = *(i8*)(intptr_t)v7349;
	i8 v7351 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v7351 = v7350;

	i8 v7352 = (i8)(intptr_t)(ws+1552);
	i8 v7353 = *(i8*)(intptr_t)v7352;
	i8 v7354 = *(i8*)(intptr_t)v7353;
	i8 v7355 = *(i8*)(intptr_t)v7354;
	i8 v7356 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7356 = v7355;

	i8 v7357 = (i8)(intptr_t)(ws+1552);
	i8 v7358 = *(i8*)(intptr_t)v7357;
	i8 v7359 = v7358+(+24);
	i8 v7360 = *(i8*)(intptr_t)v7359;
	i8 v7361 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v7361 = v7360;

c02_05ac:;

}
	void f239_ArchAlignUp(void);
	void f123_MidInit(void);
	void f257_Generate(void);

// AlignTo workspace at ws+3464 length ws+16
void f297_AlignTo(void) {

	i8 v7362 = (i8)(intptr_t)(ws+1562);
	i2 v7363 = *(i2*)(intptr_t)v7362;
	*(i2*)(intptr_t)(ws+3544) = v7363;
	i8 v7364 = (i8)(intptr_t)(ws+3464);
	i1 v7365 = *(i1*)(intptr_t)v7364;
	*(i1*)(intptr_t)(ws+3546) = v7365;
	i8 v7366 = (i8)(intptr_t)(f239_ArchAlignUp);

	((void(*)(void))(intptr_t)v7366)();

	i2 v7367 = *(i2*)(intptr_t)(ws+3548);
	i8 v7368 = (i8)(intptr_t)(ws+3466);
	*(i2*)(intptr_t)v7368 = v7367;

	i8 v7369 = (i8)(intptr_t)(ws+3466);
	i2 v7370 = *(i2*)(intptr_t)v7369;
	i8 v7371 = (i8)(intptr_t)(ws+3468);
	*(i2*)(intptr_t)v7371 = v7370;

c02_05b6:;

	i8 v7372 = (i8)(intptr_t)(ws+1562);
	i2 v7373 = *(i2*)(intptr_t)v7372;
	i8 v7374 = (i8)(intptr_t)(ws+3468);
	i2 v7375 = *(i2*)(intptr_t)v7374;
	if (v7373==v7375) goto c02_05bb; else goto c02_05ba;

c02_05ba:;

	i1 v7376 = (i1)+1;
	*(i1*)(intptr_t)(ws+3480) = v7376;
	i4 v7377 = (i4)+0;
	*(i4*)(intptr_t)(ws+3484) = v7377;
	i8 v7378 = (i8)(intptr_t)(f123_MidInit);

	((void(*)(void))(intptr_t)v7378)();

	i8 v7379 = *(i8*)(intptr_t)(ws+3488);
	i8 v7380 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7380 = v7379;

	i8 v7381 = (i8)(intptr_t)(ws+3472);
	i8 v7382 = *(i8*)(intptr_t)v7381;
	*(i8*)(intptr_t)(ws+3488) = v7382;
	i8 v7383 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7383)();

	i8 v7384 = (i8)(intptr_t)(ws+1560);
	i2 v7385 = *(i2*)(intptr_t)v7384;
	i2 v7386 = v7385+(+1);
	i8 v7387 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7387 = v7386;

	i8 v7388 = (i8)(intptr_t)(ws+1562);
	i2 v7389 = *(i2*)(intptr_t)v7388;
	i2 v7390 = v7389+(+1);
	i8 v7391 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v7391 = v7390;

	goto c02_05b6;

c02_05bb:;

}
const i1 c02_s011b[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(void);

// CheckForOverlaps workspace at ws+3464 length ws+8
void f298_CheckForOverlaps(void) {

	i8 v7392 = (i8)(intptr_t)(ws+3464);
	i8 v7393 = *(i8*)(intptr_t)v7392;
	i8 v7394 = (i8)+0;
	if (v7393==v7394) goto c02_05bf; else goto c02_05c0;

c02_05bf:;

	return;

c02_05c0:;

c02_05bc:;

	i8 v7395 = (i8)(intptr_t)(ws+3464);
	i8 v7396 = *(i8*)(intptr_t)v7395;
	i8 v7397 = *(i8*)(intptr_t)v7396;
	i8 v7398 = v7397+(+24);
	i2 v7399 = *(i2*)(intptr_t)v7398;
	i8 v7400 = (i8)(intptr_t)(ws+1560);
	i2 v7401 = *(i2*)(intptr_t)v7400;
	if (v7399<v7401) goto c02_05c4; else goto c02_05c5;

c02_05c4:;

	i8 v7402 = (i8)(intptr_t)c02_s011b;
	*(i8*)(intptr_t)(ws+3648) = v7402;
	i8 v7403 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7403)();

c02_05c5:;

c02_05c1:;

}
	void f296_GetInitedMember(void);
	void f294_WrongNumberOfElementsError(void);
	void f297_AlignTo(void);
	void f298_CheckForOverlaps(void);

// GetInitedMemberChecked workspace at ws+3448 length ws+16
void f299_GetInitedMemberChecked(void) {

	i8 v7404 = (i8)(intptr_t)(f296_GetInitedMember);

	((void(*)(void))(intptr_t)v7404)();

	i8 v7405 = *(i8*)(intptr_t)(ws+3472);
	i8 v7406 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v7406 = v7405;

	i8 v7407 = *(i8*)(intptr_t)(ws+3464);
	i8 v7408 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7408 = v7407;

	i8 v7409 = (i8)(intptr_t)(ws+3456);
	i8 v7410 = *(i8*)(intptr_t)v7409;
	i8 v7411 = (i8)+0;
	if (v7410==v7411) goto c02_05c9; else goto c02_05ca;

c02_05c9:;

	i8 v7412 = (i8)(intptr_t)(f294_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7412)();

c02_05ca:;

c02_05c6:;

	i8 v7413 = (i8)(intptr_t)(ws+3456);
	i8 v7414 = *(i8*)(intptr_t)v7413;
	i8 v7415 = v7414+(+53);
	i1 v7416 = *(i1*)(intptr_t)v7415;
	*(i1*)(intptr_t)(ws+3464) = v7416;
	i8 v7417 = (i8)(intptr_t)(f297_AlignTo);

	((void(*)(void))(intptr_t)v7417)();

	i8 v7418 = (i8)(intptr_t)(ws+3448);
	i8 v7419 = *(i8*)(intptr_t)v7418;
	*(i8*)(intptr_t)(ws+3464) = v7419;
	i8 v7420 = (i8)(intptr_t)(f298_CheckForOverlaps);

	((void(*)(void))(intptr_t)v7420)();

}
static data f3___main_s05cb[] = {




	{ .i1 = { 0x12,0x02,0xa9,0x01,0xfc,0x01,0xd0,0x00}},




	{ .i1 = { 0x5e,0x00,0xc4,0x01,0x08,0x00,0x60,0x00}},




	{ .i1 = { 0x68,0x00,0x47,0x01,0xba,0x00,0xb9,0x00}},




	{ .i1 = { 0x6e,0x00,0x3d,0x01,0x37,0x00,0x27,0x00}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x3b,0x02,0x4c,0x00}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0xb0,0x01,0xd9,0x00}},




	{ .i1 = { 0x69,0x00,0x56,0x00,0xa7,0x00,0x35,0x00}},




	{ .i1 = { 0x62,0x00,0x3f,0x01,0xbb,0x00,0x25,0x02}},




	{ .i1 = { 0x2d,0x00,0x7c,0x01,0x57,0x01,0x49,0x00}},




	{ .i1 = { 0x51,0x00,0x48,0x01,0xd9,0x00,0xc5,0x00}},




	{ .i1 = { 0x50,0x00,0x71,0x01,0xb4,0x00,0xbf,0x00}},




	{ .i1 = { 0x53,0x00,0x04,0x02,0xd9,0x00,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x51,0x02,0xa8,0x00,0x7d,0x01}},




	{ .i1 = { 0x3b,0x02,0x34,0x00,0x36,0x00,0x2d,0x00}},




	{ .i1 = { 0xd7,0x00,0x7c,0x01,0xab,0x01,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0x97,0x01,0xcf,0x00}},




	{ .i1 = { 0x1f,0x00,0xaa,0x01,0xa9,0x01,0xd8,0x00}},




	{ .i1 = { 0xd0,0x00,0x4c,0x02,0x40,0x00,0x58,0x00}},




	{ .i1 = { 0x60,0x00,0x4b,0x00,0x31,0x00,0xb3,0x00}},




	{ .i1 = { 0xa2,0x01,0x6e,0x00,0x3d,0x01,0x37,0x00}},




	{ .i1 = { 0x4f,0x00,0x11,0x00,0x28,0x00,0xa9,0x00}},




	{ .i1 = { 0xa8,0x00,0x52,0x00,0xdc,0x00,0xb0,0x01}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0x56,0x00,0xb8,0x00}},




	{ .i1 = { 0x35,0x00,0x62,0x00,0x3f,0x01,0x74,0x00}},




	{ .i1 = { 0x72,0x00,0x4d,0x00,0x7c,0x01,0x57,0x01}},




	{ .i1 = { 0x93,0x00,0x51,0x00,0xa4,0x00,0x7c,0x00}},




	{ .i1 = { 0xc5,0x00,0x50,0x00,0x71,0x01,0xb4,0x00}},




	{ .i1 = { 0xbf,0x00,0x53,0x00,0xdb,0x00,0xdb,0x00}},




	{ .i1 = { 0xfc,0x01,0xfc,0x01,0x61,0x00,0x61,0x00}},




	{ .i1 = { 0x4d,0x00,0xa6,0x01,0xdb,0x00,0x72,0x00}},




	{ .i1 = { 0xfc,0x01,0x7d,0x01,0x61,0x00,0xdd,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x7b,0x01}},




	{ .i1 = { 0xcf,0x00,0x1f,0x00,0x0e,0x00,0xa9,0x01}},




	{ .i1 = { 0xd8,0x00,0xd0,0x00,0xdb,0x00,0xac,0x00}},




	{ .i1 = { 0xfc,0x01,0x60,0x00,0x61,0x00,0xcb,0x00}},




	{ .i1 = { 0xd2,0x00,0x76,0x01,0x6e,0x00,0x3d,0x01}},




	{ .i1 = { 0x37,0x00,0xbe,0x00,0x11,0x00,0x28,0x00}},




	{ .i1 = { 0x4e,0x02,0x0b,0x00,0x52,0x00,0xdc,0x00}},




	{ .i1 = { 0xb0,0x01,0x18,0x00,0x04,0x02,0x56,0x00}},




	{ .i1 = { 0x8d,0x01,0x35,0x00,0x62,0x00,0x3f,0x01}},




	{ .i1 = { 0x84,0x00,0x72,0x00,0x96,0x00,0x7c,0x01}},




	{ .i1 = { 0x57,0x01,0x93,0x00,0x51,0x00,0xce,0x00}},




	{ .i1 = { 0x44,0x00,0xc5,0x00,0x50,0x00,0x71,0x01}},




	{ .i1 = { 0xb4,0x00,0xbf,0x00,0x53,0x00,0xdb,0x00}},




	{ .i1 = { 0xdb,0x00,0xfc,0x01,0xfc,0x01,0x61,0x00}},




	{ .i1 = { 0x61,0x00,0x04,0x02,0x9c,0x00,0x15,0x02}},




	{ .i1 = { 0x72,0x00,0xb1,0x00,0x40,0x00,0x58,0x00}},




	{ .i1 = { 0xdf,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0xb8,0x00,0xcf,0x00,0x1f,0x00,0x12,0x00}},




	{ .i1 = { 0xa9,0x01,0xd8,0x00,0xd0,0x00,0xdb,0x00}},




	{ .i1 = { 0xb7,0x00,0xfc,0x01,0x60,0x00,0x61,0x00}},




	{ .i1 = { 0x4d,0x01,0xd3,0x00,0xae,0x00,0x6e,0x00}},




	{ .i1 = { 0x3d,0x01,0x37,0x00,0x4a,0x00,0x11,0x00}},




	{ .i1 = { 0x28,0x00,0x2c,0x02,0x99,0x00,0x52,0x00}},




	{ .i1 = { 0xdc,0x00,0xb0,0x01,0xaf,0x00,0x04,0x02}},




	{ .i1 = { 0x56,0x00,0xbe,0x00,0x35,0x00,0x62,0x00}},




	{ .i1 = { 0x3f,0x01,0x7c,0x00,0x73,0x00,0x7c,0x01}},




	{ .i1 = { 0x7c,0x01,0x57,0x01,0xb2,0x00,0x51,0x00}},




	{ .i1 = { 0x59,0x00,0x04,0x02,0xc5,0x00,0x50,0x00}},




	{ .i1 = { 0x71,0x01,0xb4,0x00,0xbf,0x00,0x53,0x00}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0x61,0x00,0x61,0x00,0x16,0x00,0x14,0x00}},




	{ .i1 = { 0x45,0x00,0x71,0x00,0xc9,0x00,0x19,0x02}},




	{ .i1 = { 0x18,0x00,0x90,0x00,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0x9f,0x01,0xcf,0x00,0x1f,0x00}},




	{ .i1 = { 0x3c,0x02,0xa9,0x01,0xd8,0x00,0xd0,0x00}},




	{ .i1 = { 0xdb,0x00,0x9b,0x00,0xfc,0x01,0x60,0x00}},




	{ .i1 = { 0x61,0x00,0x94,0x00,0x94,0x00,0x0b,0x00}},




	{ .i1 = { 0x6e,0x00,0x3d,0x01,0x37,0x00,0x92,0x01}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x08,0x02,0x0d,0x02}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0xb0,0x01,0x7c,0x01}},




	{ .i1 = { 0x04,0x02,0x56,0x00,0x92,0x01,0x35,0x00}},




	{ .i1 = { 0x62,0x00,0x3f,0x01,0x7c,0x00,0x72,0x00}},




	{ .i1 = { 0x20,0x02,0x7c,0x01,0x57,0x01,0xd1,0x00}},




	{ .i1 = { 0x51,0x00,0x85,0x00,0x7e,0x00,0xc5,0x00}},




	{ .i1 = { 0x50,0x00,0x71,0x01,0xb4,0x00,0xbf,0x00}},




	{ .i1 = { 0x53,0x00,0xdb,0x00,0xdb,0x00,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0x61,0x00,0x61,0x00,0xa6,0x00}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0x61,0x00,0x61,0x00,0x64,0x00,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0xbe,0x00,0xcf,0x00}},




	{ .i1 = { 0x1f,0x00,0x66,0x00,0xa9,0x01,0xd8,0x00}},




	{ .i1 = { 0xd0,0x00,0x3b,0x00,0x43,0x02,0x6a,0x00}},




	{ .i1 = { 0x60,0x00,0xb7,0x01,0x95,0x00,0x95,0x00}},




	{ .i1 = { 0x0b,0x00,0x6e,0x00,0x3d,0x01,0x37,0x00}},




	{ .i1 = { 0x24,0x02,0x11,0x00,0x28,0x00,0xc1,0x00}},




	{ .i1 = { 0x18,0x00,0x52,0x00,0xdc,0x00,0xb0,0x01}},




	{ .i1 = { 0x10,0x00,0x38,0x01,0x56,0x00,0xc3,0x00}},




	{ .i1 = { 0x35,0x00,0x62,0x00,0x3f,0x01,0x7d,0x00}},




	{ .i1 = { 0x72,0x00,0xc7,0x00,0x7c,0x01,0x57,0x01}},




	{ .i1 = { 0x91,0x00,0x51,0x00,0x85,0x00,0x1f,0x02}},




	{ .i1 = { 0xc5,0x00,0x50,0x00,0x71,0x01,0xb4,0x00}},




	{ .i1 = { 0xbf,0x00,0x53,0x00,0xdb,0x00,0xdb,0x00}},




	{ .i1 = { 0xfc,0x01,0xfc,0x01,0x61,0x00,0x61,0x00}},




	{ .i1 = { 0xd4,0x00,0xdb,0x00,0x0f,0x02,0xfc,0x01}},




	{ .i1 = { 0xc8,0x00,0x61,0x00,0x85,0x00,0x9a,0x00}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0xda,0x00}},




	{ .i1 = { 0xcf,0x00,0x1f,0x00,0x58,0x01,0x42,0x00}},




	{ .i1 = { 0xd8,0x00,0xa3,0x00,0xd9,0x00,0x97,0x00}},




	{ .i1 = { 0xad,0x00,0xdb,0x00,0x7f,0x00,0xfc,0x01}},




	{ .i1 = { 0x38,0x00,0x61,0x00,0x04,0x02,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0x04,0x02,0x39,0x00}},




	{ .i1 = { 0x28,0x00,0x34,0x00,0x36,0x00,0x92,0x00}},




	{ .i1 = { 0xd9,0x00,0xdb,0x00,0x80,0x00,0xfc,0x01}},




	{ .i1 = { 0x01,0x00,0x61,0x00,0x38,0x00,0xfb,0x01}},




	{ .i1 = { 0x0d,0x02,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0x7c,0x01,0x57,0x01,0x03,0x00,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xdb,0x00,0x04,0x02,0xfc,0x01}},




	{ .i1 = { 0x71,0x01,0x61,0x00,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0x23,0x00,0x20,0x00,0x21,0x00,0x22,0x00}},




	{ .i1 = { 0x25,0x00,0x24,0x00,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0x40,0x01,0xfa,0x01}},




	{ .i1 = { 0x0d,0x02,0x04,0x00,0x1f,0x02,0x98,0x00}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0x23,0x00,0x20,0x00}},




	{ .i1 = { 0x21,0x00,0x22,0x00,0x25,0x00,0x24,0x00}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0x3e,0x02,0x05,0x00,0x65,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0x17,0x00,0x57,0x00}},




	{ .i1 = { 0xbb,0x00,0x25,0x02,0x41,0x02,0x6c,0x00}},




	{ .i1 = { 0x0d,0x00,0x6b,0x00,0x43,0x00,0x16,0x00}},




	{ .i1 = { 0x14,0x00,0x4e,0x00,0xdb,0x00,0x1f,0x02}},




	{ .i1 = { 0xfc,0x01,0x09,0x00,0x5f,0x00,0x85,0x00}},




	{ .i1 = { 0xc2,0x00,0x0f,0x00,0x81,0x00,0x29,0x02}},




	{ .i1 = { 0xb9,0x00,0x16,0x00,0x14,0x00,0x7f,0x01}},




	{ .i1 = { 0x0a,0x00,0x02,0x00,0x5c,0x00,0x5b,0x00}},




	{ .i1 = { 0xaa,0x00,0xc6,0x00,0xdb,0x00,0x84,0x01}},




	{ .i1 = { 0xfc,0x01,0xdb,0x00,0x61,0x00,0xfc,0x01}},




	{ .i1 = { 0x18,0x00,0x61,0x00,0xab,0x00,0x3f,0x00}},




	{ .i1 = { 0x3e,0x02,0x0e,0x00,0x3e,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0x17,0x00,0x06,0x00}},




	{ .i1 = { 0x67,0x00,0x07,0x00,0xcd,0x00,0x6c,0x00}},




	{ .i1 = { 0x0d,0x00,0x6b,0x00,0xbb,0x00,0x25,0x02}},




	{ .i1 = { 0x18,0x00,0x63,0x00,0xdb,0x00,0x18,0x00}},




	{ .i1 = { 0xfc,0x01,0x7a,0x01,0x5f,0x00,0x3e,0x02}},




	{ .i1 = { 0xc2,0x00,0x85,0x00,0x76,0x00,0x70,0x00}},




	{ .i1 = { 0x6f,0x00,0x17,0x00,0x4c,0x01,0x4b,0x01}},




	{ .i1 = { 0x1d,0x00,0x3d,0x00,0x5c,0x00,0x5b,0x00}},




	{ .i1 = { 0x6b,0x00,0xa8,0x01,0xa3,0x01,0xd5,0x00}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0x61,0x00,0x5f,0x00,0xab,0x00,0xc2,0x00}},




	{ .i1 = { 0x3e,0x02,0x0c,0x00,0x3e,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0x17,0x00,0xa1,0x01}},




	{ .i1 = { 0xb5,0x00,0x5c,0x00,0x5b,0x00,0x19,0x00}},




	{ .i1 = { 0x46,0x00,0x6b,0x00,0x9c,0x01,0xb0,0x00}},




	{ .i1 = { 0x93,0x01,0x41,0x00,0xdb,0x00,0xb9,0x01}},




	{ .i1 = { 0xfc,0x01,0xab,0x00,0x5f,0x00,0x5a,0x00}},




	{ .i1 = { 0xc2,0x00,0x3e,0x00,0xb8,0x01,0x47,0x00}},




	{ .i1 = { 0x54,0x00,0x98,0x01,0x5d,0x00,0x8f,0x01}},




	{ .i1 = { 0xbd,0x00,0xb6,0x00,0x5c,0x00,0x5b,0x00}},




	{ .i1 = { 0x3e,0x02,0xbc,0x00,0x84,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0x17,0x00,0x55,0x00}},




	{ .i1 = { 0x3c,0x00,0xb6,0x01,0xab,0x00,0x48,0x00}},




	{ .i1 = { 0x82,0x01,0x6b,0x00,0x3e,0x00,0x81,0x01}},




	{ .i1 = { 0xc4,0x00,0xdb,0x00,0xdb,0x00,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0x61,0x00,0x5f,0x00,0x3e,0x02}},




	{ .i1 = { 0xc2,0x00,0x16,0x02,0x76,0x00,0x70,0x00}},




	{ .i1 = { 0x6f,0x00,0x17,0x00,0x73,0x01,0x1a,0x00}},




	{ .i1 = { 0x89,0x01,0xc0,0x00,0x5c,0x00,0x5b,0x00}},




	{ .i1 = { 0x6b,0x00,0x85,0x00,0x49,0x01,0x1b,0x00}},




	{ .i1 = { 0xca,0x00,0xdb,0x00,0x43,0x01,0xfc,0x01}},




	{ .i1 = { 0xcc,0x00,0x5f,0x00,0xab,0x00,0xc2,0x00}},




	{ .i1 = { 0x6d,0x00,0x42,0x01,0x3e,0x00,0xd6,0x00}},




	{ .i1 = { 0xdb,0x00,0x41,0x01,0xfc,0x01,0x3e,0x01}},




	{ .i1 = { 0x61,0x00,0x5c,0x00,0x5b,0x00,0x14,0x00}},




	{ .i1 = { 0x82,0x00,0x37,0x00,0x3c,0x01,0x39,0x00}},




	{ .i1 = { 0x28,0x00,0x77,0x01,0x74,0x01,0x1e,0x00}},




	{ .i1 = { 0x1c,0x00,0xab,0x00,0x12,0x02,0x70,0x01}},




	{ .i1 = { 0x2b,0x00,0x3e,0x00,0x35,0x00,0xdb,0x00}},




	{ .i1 = { 0xc5,0x01,0xfc,0x01,0xa7,0x01,0x61,0x00}},




	{ .i1 = { 0x7c,0x01,0x57,0x01,0xc5,0x01,0x51,0x00}},




	{ .i1 = { 0xc5,0x01,0x83,0x00,0x37,0x01,0x50,0x00}},




	{ .i1 = { 0x71,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x37,0x00,0x13,0x00,0x15,0x00,0x28,0x00}},




	{ .i1 = { 0xdb,0x00,0xc5,0x01,0xfc,0x01,0xc5,0x01}},




	{ .i1 = { 0x61,0x00,0xc5,0x01,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0x35,0x00,0x75,0x00,0x77,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xd8,0x00,0x7c,0x01}},




	{ .i1 = { 0x57,0x01,0xc5,0x01,0x51,0x00,0xc5,0x01}},




	{ .i1 = { 0x78,0x00,0x85,0x01,0x50,0x00,0x71,0x01}},




	{ .i1 = { 0xc5,0x01,0xdb,0x00,0xdb,0x00,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0x61,0x00,0x61,0x00,0x37,0x00}},




	{ .i1 = { 0xc5,0x01,0x39,0x00,0x28,0x00,0xdb,0x00}},




	{ .i1 = { 0xc5,0x01,0xfc,0x01,0xc5,0x01,0x61,0x00}},




	{ .i1 = { 0xc5,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0x35,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x9d,0x00,0xd8,0x00,0x7c,0x01,0x57,0x01}},




	{ .i1 = { 0xc5,0x01,0x51,0x00,0xc5,0x01,0x9e,0x00}},




	{ .i1 = { 0xc5,0x01,0x50,0x00,0x71,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xa5,0x00,0xc5,0x01,0xdb,0x00}},




	{ .i1 = { 0xc5,0x01,0xfc,0x01,0x37,0x00,0x61,0x00}},




	{ .i1 = { 0x39,0x00,0x28,0x00,0xdb,0x00,0xc5,0x01}},




	{ .i1 = { 0xfc,0x01,0xc5,0x01,0x61,0x00,0xc5,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x35,0x00}},




	{ .i1 = { 0xc5,0x01,0x9f,0x00,0xa0,0x00,0xc5,0x01}},




	{ .i1 = { 0xd8,0x00,0x7c,0x01,0x57,0x01,0xc5,0x01}},




	{ .i1 = { 0x51,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x50,0x00,0x71,0x01,0x78,0x01,0xc5,0x01}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0x61,0x00,0x61,0x00,0xc5,0x01,0x37,0x00}},




	{ .i1 = { 0xc5,0x01,0x39,0x00,0x28,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x35,0x00,0xc5,0x01,0xc5,0x01,0xd8,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x7c,0x01,0x57,0x01}},




	{ .i1 = { 0x58,0x01,0x51,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0x50,0x00,0x71,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x38,0x00,0xc5,0x01}},




	{ .i1 = { 0x79,0x00,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x88,0x00,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0x89,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0xdb,0x00}},




	{ .i1 = { 0xc5,0x01,0xfc,0x01,0xc5,0x01,0x61,0x00}},




	{ .i1 = { 0xd8,0x00,0xdb,0x00,0xc5,0x01,0xfc,0x01}},




	{ .i1 = { 0xdb,0x00,0x61,0x00,0xfc,0x01,0xc5,0x01}},




	{ .i1 = { 0x61,0x00,0xc5,0x01,0xc5,0x01,0x86,0x00}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xa1,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xdb,0x00,0xc5,0x01}},




	{ .i1 = { 0xfc,0x01,0xd9,0x00,0x61,0x00,0x87,0x00}},




	{ .i1 = { 0xdb,0x00,0xc5,0x01,0xfc,0x01,0x38,0x00}},




	{ .i1 = { 0x61,0x00,0xc5,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xdb,0x00,0xd9,0x00}},




	{ .i1 = { 0xfc,0x01,0x8e,0x00,0x61,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x38,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x3b,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xdb,0x00,0xc5,0x01,0xfc,0x01,0xc5,0x01}},




	{ .i1 = { 0x61,0x00,0x30,0x00,0x32,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x8f,0x00,0xa2,0x00}},




	{ .i1 = { 0xc5,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x4a,0x01,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xdb,0x00,0xdb,0x00,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0x61,0x00,0x61,0x00,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0x26,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xd9,0x00,0xc5,0x01,0x8d,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x38,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xdb,0x00,0xd9,0x00}},




	{ .i1 = { 0xfc,0x01,0x8c,0x00,0x61,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x38,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x3a,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xdb,0x00,0xc5,0x01,0xfc,0x01,0x8b,0x00}},




	{ .i1 = { 0x61,0x00,0x30,0x00,0x32,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x7a,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc5,0x01,0xdb,0x00,0xc5,0x01}},




	{ .i1 = { 0xfc,0x01,0xc5,0x01,0x61,0x00,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xdb,0x00,0x8a,0x00,0xfc,0x01}},




	{ .i1 = { 0xc5,0x01,0x61,0x00,0xc5,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x6e,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0xdb,0x00,0xc5,0x01,0xfc,0x01}},




	{ .i1 = { 0xc5,0x01,0x61,0x00,0x38,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0x6f,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x38,0x00,0x7b,0x00}},




	{ .i1 = { 0xc5,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xdb,0x00,0xc5,0x01}},




	{ .i1 = { 0xfc,0x01,0xc5,0x01,0x61,0x00,0xc5,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x37,0x00,0xd9,0x00,0x39,0x00,0x28,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x38,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0x35,0x00,0xc5,0x01,0x39,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xc5,0x01,0x7c,0x01}},




	{ .i1 = { 0x57,0x01,0xc5,0x01,0x51,0x00,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0xc5,0x01,0x50,0x00,0x71,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x38,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0x30,0x00,0x32,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0xc5,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xd8,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xd9,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x38,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xc5,0x01,0xd9,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x38,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x32,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x38,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x4b,0x00,0x31,0x00}},

};
static data f3___main_s05cc[] = {








	{ .i1 = { 0x59,0x01,0x5b,0x03,0x5d,0x45,0x46,0x07}},








	{ .i1 = { 0x67,0x09,0x6d,0x6e,0x0c,0x0d,0x0e,0x02}},








	{ .i1 = { 0x10,0x11,0x5b,0x06,0x14,0x15,0x16,0x08}},








	{ .i1 = { 0x65,0x19,0x49,0x1b,0x1c,0x1d,0x6b,0x6c}},








	{ .i1 = { 0x11,0x21,0x22,0x11,0x24,0x25,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x2c,0x5c,0x08,0x11}},








	{ .i1 = { 0x12,0x7a,0x7b,0x21,0x5b,0x17,0x18,0x11}},








	{ .i1 = { 0x26,0x21,0x22,0x3b,0x3c,0x3d,0x04,0x3f}},








	{ .i1 = { 0x40,0x29,0x01,0x43,0x03,0x71,0x72,0x73}},








	{ .i1 = { 0x07,0x3a,0x3b,0x0a,0x21,0x0c,0x0d,0x0e}},








	{ .i1 = { 0x3e,0x10,0x11,0x7a,0x7b,0x14,0x15,0x16}},








	{ .i1 = { 0x3a,0x3b,0x19,0x21,0x1b,0x1c,0x1d,0x4a}},








	{ .i1 = { 0x4a,0x10,0x21,0x22,0x4e,0x24,0x50,0x4a}},








	{ .i1 = { 0x27,0x28,0x29,0x2a,0x2b,0x2c,0x59,0x59}},








	{ .i1 = { 0x5b,0x5b,0x5d,0x5d,0x10,0x20,0x59,0x4a}},








	{ .i1 = { 0x5b,0x21,0x5d,0x4e,0x3b,0x3c,0x3d,0x21}},








	{ .i1 = { 0x3f,0x40,0x2d,0x01,0x43,0x03,0x59,0x49}},








	{ .i1 = { 0x5b,0x07,0x5d,0x0a,0x0a,0x05,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x0b,0x10,0x11,0x77,0x78,0x14,0x15}},








	{ .i1 = { 0x16,0x11,0x5c,0x19,0x16,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x4a,0x4a,0x49,0x21,0x22,0x4e,0x24,0x50}},








	{ .i1 = { 0x44,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x59}},








	{ .i1 = { 0x59,0x5b,0x5b,0x5d,0x5d,0x5c,0x60,0x61}},








	{ .i1 = { 0x4a,0x71,0x72,0x73,0x4e,0x3b,0x3c,0x3d}},








	{ .i1 = { 0x21,0x3f,0x40,0x42,0x01,0x43,0x03,0x59}},








	{ .i1 = { 0x49,0x5b,0x07,0x5d,0x04,0x0a,0x23,0x0c}},








	{ .i1 = { 0x0d,0x0e,0x10,0x10,0x11,0x5c,0x49,0x14}},








	{ .i1 = { 0x15,0x16,0x74,0x5c,0x19,0x0b,0x1b,0x1c}},








	{ .i1 = { 0x1d,0x4a,0x4a,0x21,0x21,0x22,0x70,0x24}},








	{ .i1 = { 0x6f,0x5c,0x27,0x28,0x29,0x2a,0x2b,0x2c}},








	{ .i1 = { 0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x2e,0x2f}},








	{ .i1 = { 0x06,0x4a,0x62,0x63,0x11,0x4e,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x16,0x3f,0x40,0x00,0x01,0x43,0x03}},








	{ .i1 = { 0x59,0x49,0x5b,0x07,0x5d,0x76,0x77,0x78}},








	{ .i1 = { 0x0c,0x0d,0x0e,0x41,0x10,0x11,0x5a,0x5b}},








	{ .i1 = { 0x14,0x15,0x16,0x21,0x5c,0x19,0x41,0x1b}},








	{ .i1 = { 0x1c,0x1d,0x4a,0x4a,0x5b,0x21,0x22,0x4e}},








	{ .i1 = { 0x24,0x4a,0x4a,0x27,0x28,0x29,0x2a,0x2b}},








	{ .i1 = { 0x2c,0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x58}},








	{ .i1 = { 0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x67,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x0b,0x3f,0x40,0x67,0x01,0x43}},








	{ .i1 = { 0x03,0x02,0x56,0x57,0x07,0x16,0x76,0x77}},








	{ .i1 = { 0x78,0x0c,0x0d,0x0e,0x6c,0x10,0x11,0x5e}},








	{ .i1 = { 0x11,0x14,0x15,0x16,0x10,0x16,0x19,0x5e}},








	{ .i1 = { 0x1b,0x1c,0x1d,0x4a,0x4a,0x48,0x21,0x22}},








	{ .i1 = { 0x4e,0x24,0x4a,0x48,0x27,0x28,0x29,0x2a}},








	{ .i1 = { 0x2b,0x2c,0x59,0x59,0x5b,0x5b,0x5d,0x5d}},








	{ .i1 = { 0x58,0x59,0x5e,0x5b,0x63,0x5d,0x4a,0x49}},








	{ .i1 = { 0x3b,0x3c,0x3d,0x49,0x3f,0x40,0x04,0x64}},








	{ .i1 = { 0x43,0x48,0x08,0x66,0x58,0x59,0x4a,0x5b}},








	{ .i1 = { 0x0e,0x5d,0x5c,0x11,0x12,0x13,0x5c,0x10}},








	{ .i1 = { 0x11,0x17,0x18,0x49,0x08,0x59,0x4a,0x5b}},








	{ .i1 = { 0x46,0x5d,0x0e,0x5a,0x5b,0x11,0x12,0x13}},








	{ .i1 = { 0x21,0x22,0x46,0x17,0x18,0x59,0x5c,0x5b}},








	{ .i1 = { 0x29,0x5d,0x30,0x31,0x32,0x33,0x34,0x35}},








	{ .i1 = { 0x36,0x37,0x38,0x39,0x3a,0x3b,0x0d,0x5a}},








	{ .i1 = { 0x5b,0x46,0x48,0x66,0x30,0x31,0x32,0x33}},








	{ .i1 = { 0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b}},








	{ .i1 = { 0x47,0x46,0x65,0x4a,0x4b,0x4c,0x4d,0x66}},








	{ .i1 = { 0x6b,0x6c,0x51,0x52,0x53,0x54,0x64,0x2e}},








	{ .i1 = { 0x2f,0x55,0x59,0x48,0x5b,0x46,0x5d,0x4a}},








	{ .i1 = { 0x5f,0x4f,0x4a,0x6d,0x6e,0x2e,0x2f,0x04}},








	{ .i1 = { 0x46,0x46,0x69,0x6a,0x20,0x58,0x59,0x04}},








	{ .i1 = { 0x5b,0x59,0x5d,0x5b,0x11,0x5d,0x75,0x64}},








	{ .i1 = { 0x47,0x2d,0x79,0x4a,0x4b,0x4c,0x4d,0x46}},








	{ .i1 = { 0x65,0x46,0x51,0x52,0x53,0x54,0x6b,0x6c}},








	{ .i1 = { 0x11,0x1a,0x59,0x11,0x5b,0x16,0x5d,0x47}},








	{ .i1 = { 0x5f,0x4a,0x4a,0x4b,0x4c,0x4d,0x06,0x06}},








	{ .i1 = { 0x2d,0x2d,0x69,0x6a,0x54,0x16,0x16,0x58}},








	{ .i1 = { 0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x75,0x5f}},








	{ .i1 = { 0x47,0x1f,0x79,0x4a,0x4b,0x4c,0x4d,0x04}},








	{ .i1 = { 0x68,0x69,0x6a,0x10,0x06,0x54,0x14,0x0a}},








	{ .i1 = { 0x19,0x41,0x59,0x16,0x5b,0x75,0x5d,0x19}},








	{ .i1 = { 0x5f,0x79,0x16,0x06,0x2d,0x04,0x06,0x04}},








	{ .i1 = { 0x10,0x68,0x69,0x6a,0x47,0x29,0x4a,0x4a}},








	{ .i1 = { 0x4b,0x4c,0x4d,0x19,0x02,0x16,0x75,0x41}},








	{ .i1 = { 0x16,0x54,0x79,0x16,0x21,0x59,0x59,0x5b}},








	{ .i1 = { 0x5b,0x5d,0x5d,0x47,0x5f,0x61,0x4a,0x4b}},








	{ .i1 = { 0x4c,0x4d,0x16,0x02,0x04,0x68,0x69,0x6a}},








	{ .i1 = { 0x54,0x4a,0x16,0x2d,0x40,0x59,0x0c,0x5b}},








	{ .i1 = { 0x0a,0x5d,0x75,0x5f,0x1a,0x16,0x79,0x58}},








	{ .i1 = { 0x59,0x16,0x5b,0x0d,0x5d,0x69,0x6a,0x2f}},








	{ .i1 = { 0x4a,0x0e,0x0d,0x10,0x11,0x05,0x04,0x10}},








	{ .i1 = { 0x2d,0x75,0x10,0x21,0x3b,0x79,0x1b,0x59}},








	{ .i1 = { 0x7c,0x5b,0x1f,0x5d,0x21,0x22,0x7c,0x24}},








	{ .i1 = { 0x7c,0x4a,0x16,0x28,0x29,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x0e,0x0f,0x10,0x11}},








	{ .i1 = { 0x59,0x7c,0x5b,0x7c,0x5d,0x7c,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x1b,0x4a,0x4a,0x7c,0x7c,0x43,0x21}},








	{ .i1 = { 0x22,0x7c,0x24,0x7c,0x4a,0x04,0x28,0x29}},








	{ .i1 = { 0x7c,0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x0e}},








	{ .i1 = { 0x7c,0x10,0x11,0x59,0x7c,0x5b,0x7c,0x5d}},








	{ .i1 = { 0x7c,0x3b,0x3c,0x3d,0x1b,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x4a,0x43,0x21,0x22,0x7c,0x24,0x7c,0x4a}},








	{ .i1 = { 0x7c,0x28,0x29,0x7c,0x7c,0x09,0x7c,0x59}},








	{ .i1 = { 0x7c,0x5b,0x0e,0x5d,0x10,0x11,0x59,0x7c}},








	{ .i1 = { 0x5b,0x7c,0x5d,0x7c,0x3b,0x3c,0x3d,0x1b}},








	{ .i1 = { 0x7c,0x4a,0x4a,0x7c,0x43,0x21,0x22,0x7c}},








	{ .i1 = { 0x24,0x7c,0x7c,0x7c,0x28,0x29,0x05,0x7c}},








	{ .i1 = { 0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x7c,0x0e}},








	{ .i1 = { 0x7c,0x10,0x11,0x7c,0x7c,0x7c,0x7c,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x7c,0x7c,0x1b,0x7c,0x7c,0x43}},








	{ .i1 = { 0x7c,0x7c,0x21,0x22,0x04,0x24,0x7c,0x7c}},








	{ .i1 = { 0x08,0x28,0x29,0x7c,0x7c,0x7c,0x0e,0x7c}},








	{ .i1 = { 0x4a,0x11,0x12,0x13,0x7c,0x7c,0x4a,0x17}},








	{ .i1 = { 0x18,0x4a,0x7c,0x7c,0x3b,0x3c,0x3d,0x59}},








	{ .i1 = { 0x7c,0x5b,0x7c,0x5d,0x43,0x59,0x7c,0x5b}},








	{ .i1 = { 0x59,0x5d,0x5b,0x7c,0x5d,0x7c,0x7c,0x4a}},








	{ .i1 = { 0x30,0x31,0x7c,0x7c,0x7c,0x4a,0x7c,0x7c}},








	{ .i1 = { 0x38,0x39,0x3a,0x3b,0x7c,0x7c,0x59,0x7c}},








	{ .i1 = { 0x5b,0x08,0x5d,0x4a,0x59,0x7c,0x5b,0x0e}},








	{ .i1 = { 0x5d,0x7c,0x11,0x12,0x13,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x17,0x18,0x59,0x08,0x5b,0x4a,0x5d,0x7c}},








	{ .i1 = { 0x7c,0x0e,0x7c,0x7c,0x11,0x12,0x13,0x7c}},








	{ .i1 = { 0x7c,0x16,0x17,0x18,0x59,0x7c,0x5b,0x7c}},








	{ .i1 = { 0x5d,0x30,0x31,0x7c,0x7c,0x7c,0x4a,0x4a}},








	{ .i1 = { 0x7c,0x38,0x39,0x3a,0x3b,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x41,0x30,0x31,0x59,0x59,0x5b}},








	{ .i1 = { 0x5b,0x5d,0x5d,0x38,0x39,0x3a,0x3b,0x02}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x08,0x7c,0x4a}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x0e,0x7c,0x7c,0x11,0x12}},








	{ .i1 = { 0x13,0x7c,0x7c,0x7c,0x17,0x18,0x59,0x08}},








	{ .i1 = { 0x5b,0x4a,0x5d,0x7c,0x7c,0x0e,0x7c,0x7c}},








	{ .i1 = { 0x11,0x12,0x13,0x7c,0x7c,0x16,0x17,0x18}},








	{ .i1 = { 0x59,0x7c,0x5b,0x4a,0x5d,0x30,0x31,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x4a,0x7c,0x7c,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x7c,0x59,0x7c,0x5b,0x7c,0x5d,0x30}},








	{ .i1 = { 0x31,0x59,0x4a,0x5b,0x7c,0x5d,0x7c,0x38}},








	{ .i1 = { 0x39,0x3a,0x3b,0x7c,0x7c,0x05,0x7c,0x7c}},








	{ .i1 = { 0x08,0x59,0x7c,0x5b,0x7c,0x5d,0x0e,0x7c}},








	{ .i1 = { 0x7c,0x11,0x12,0x13,0x7c,0x7c,0x7c,0x17}},








	{ .i1 = { 0x18,0x05,0x7c,0x7c,0x08,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x0e,0x4a,0x7c,0x11,0x12,0x13}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x17,0x18,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x30,0x31,0x59,0x7c,0x5b,0x7c,0x5d,0x7c}},








	{ .i1 = { 0x38,0x39,0x3a,0x3b,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x30,0x31,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x38,0x39,0x3a,0x3b}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x0e,0x08,0x10,0x11}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x0e,0x7c,0x7c,0x11,0x12}},








	{ .i1 = { 0x13,0x1b,0x7c,0x16,0x17,0x18,0x7c,0x21}},








	{ .i1 = { 0x22,0x7c,0x24,0x7c,0x08,0x7c,0x28,0x29}},








	{ .i1 = { 0x7c,0x7c,0x0e,0x7c,0x7c,0x11,0x12,0x13}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x17,0x18,0x30,0x31,0x7c}},








	{ .i1 = { 0x7c,0x3b,0x3c,0x3d,0x7c,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x43,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x30,0x31,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x38,0x39,0x3a,0x3b}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x08,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x0e,0x7c,0x7c,0x11,0x12}},








	{ .i1 = { 0x13,0x7c,0x7c,0x7c,0x17,0x18,0x7c,0x08}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x0e,0x7c,0x7c}},








	{ .i1 = { 0x11,0x12,0x13,0x7c,0x7c,0x7c,0x17,0x18}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x31,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x38}},








	{ .i1 = { 0x39,0x3a,0x3b,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x08,0x7c,0x7c,0x7c,0x7c,0x7c,0x0e,0x7c}},








	{ .i1 = { 0x7c,0x11,0x12,0x13,0x7c,0x7c,0x7c,0x17}},








	{ .i1 = { 0x18,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x3a,0x3b,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},


	{ .i1 = { 0x45}},
};
static data f3___main_s05cd[] = {




	{ .i1 = { 0x24,0x05,0x00,0x00,0x00,0x00,0x41,0x00}},




	{ .i1 = { 0x41,0x00,0x41,0x00,0x82,0x00,0xc3,0x00}},




	{ .i1 = { 0x04,0x01,0x45,0x01,0x45,0x01,0x83,0x02}},




	{ .i1 = { 0x83,0x02,0xa6,0x02,0x83,0x02,0xa6,0x02}},




	{ .i1 = { 0xc9,0x02,0x46,0x04,0xec,0x02,0xa6,0x02}},




	{ .i1 = { 0xa6,0x02,0xa6,0x02,0xa6,0x02,0xa6,0x02}},




	{ .i1 = { 0x11,0x03,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x87,0x01,0x18,0x00,0x18,0x00,0x64,0x00}},




	{ .i1 = { 0x2b,0x00,0x2b,0x00,0x51,0x00,0x51,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x3a,0x00,0x81,0x00,0xc2,0x00}},




	{ .i1 = { 0xc2,0x00,0xc2,0x00,0x58,0x00,0x5e,0x00}},




	{ .i1 = { 0x9f,0x00,0x5e,0x00,0x5e,0x00,0xd2,0x00}},




	{ .i1 = { 0xab,0x00,0xf2,0x00,0xfa,0x00,0xdd,0x00}},




	{ .i1 = { 0xdd,0x00,0x51,0x00,0x4c,0x01,0x4c,0x01}},




	{ .i1 = { 0x5e,0x00,0x4c,0x01,0x5e,0x00,0x24,0x05}},




	{ .i1 = { 0x24,0x05,0x24,0x05,0x24,0x05,0x24,0x05}},




	{ .i1 = { 0x24,0x05,0x24,0x05,0x24,0x05,0x24,0x05}},




	{ .i1 = { 0x24,0x05,0x24,0x05,0x24,0x05,0x24,0x05}},




	{ .i1 = { 0x24,0x05,0x82,0x01,0x94,0x01,0x30,0x03}},




	{ .i1 = { 0x69,0x03,0x7b,0x03,0xb5,0x03,0xc7,0x03}},




	{ .i1 = { 0x00,0x04,0x14,0x04,0x30,0x03,0x4d,0x04}},




	{ .i1 = { 0x64,0x04,0x64,0x04,0x64,0x04,0x64,0x04}},




	{ .i1 = { 0x64,0x04,0x64,0x04,0x64,0x04,0x64,0x04}},




	{ .i1 = { 0x64,0x04,0x64,0x04,0x9d,0x04,0xaf,0x04}},




	{ .i1 = { 0xe8,0x04,0xe8,0x04,0x1e,0x00,0x1e,0x00}},




	{ .i1 = { 0x1e,0x00,0x0f,0x00,0x0f,0x00,0x0f,0x00}},




	{ .i1 = { 0xc8,0x00,0xb1,0x01,0x47,0x01,0xbf,0x01}},




	{ .i1 = { 0x55,0x00,0xd4,0x01,0xeb,0x00,0x86,0x00}},




	{ .i1 = { 0x37,0x01,0xff,0x01,0xeb,0x01,0x88,0x00}},




	{ .i1 = { 0xf3,0x01,0x26,0x00,0x26,0x00,0x26,0x00}},




	{ .i1 = { 0x26,0x00,0x26,0x00,0x26,0x00,0x0d,0x00}},




	{ .i1 = { 0xf7,0x01,0x18,0x02,0x19,0x02,0x02,0x02}},




	{ .i1 = { 0xf4,0x01,0x0f,0x02,0x10,0x02,0x12,0x02}},




	{ .i1 = { 0x02,0x02,0x33,0x02,0x2b,0x02,0x36,0x02}},




	{ .i1 = { 0x2a,0x02,0x35,0x02,0x00,0x02,0x27,0x02}},




	{ .i1 = { 0x2e,0x02,0x2d,0x02,0x34,0x02,0x02,0x02}},




	{ .i1 = { 0x45,0x02,0x1f,0x02,0x49,0x02,0x48,0x02}},




	{ .i1 = { 0x4b,0x02,0x2c,0x02,0x40,0x02,0x42,0x02}},




	{ .i1 = { 0x47,0x02,0x4a,0x02,0x5a,0x02,0x4d,0x02}},




	{ .i1 = { 0x1e,0x02,0x43,0x02,0x5c,0x02,0x71,0x02}},




	{ .i1 = { 0x70,0x02,0x4e,0x02,0x64,0x02,0x3c,0x02}},




	{ .i1 = { 0x72,0x02,0x76,0x02,0x6a,0x02,0x6f,0x02}},




	{ .i1 = { 0x73,0x02,0x60,0x02,0x7e,0x02,0x85,0x02}},




	{ .i1 = { 0x90,0x02,0x92,0x02,0x6b,0x02,0x87,0x02}},




	{ .i1 = { 0x61,0x02,0x7a,0x02,0x02,0x02,0x8a,0x02}},


	{ .i1 = { 0x94,0x02}},
};
static data f3___main_s05ce[] = {




	{ .i1 = { 0xc0,0xff,0x89,0x01,0xb9,0x01,0xd0,0x01}},




	{ .i1 = { 0xe9,0x01,0x0d,0x02,0x24,0x02,0x24,0x02}},




	{ .i1 = { 0x24,0x02,0x24,0x02,0x24,0x02,0x97,0x00}},




	{ .i1 = { 0xd8,0x00,0x16,0x00,0x1d,0x00,0x57,0x00}},




	{ .i1 = { 0x56,0x00,0x98,0x00,0xdf,0x00,0x2d,0x00}},




	{ .i1 = { 0x6e,0x00,0xaf,0x00,0xd9,0x00,0x1a,0x01}},




	{ .i1 = { 0x20,0x01,0x34,0x01,0x9d,0x01,0x19,0x01}},




	{ .i1 = { 0xcf,0x01,0x0c,0x02,0x2f,0x02,0x15,0x00}},




	{ .i1 = { 0xe0,0x00,0x44,0x01,0x54,0x01,0xa0,0x01}},




	{ .i1 = { 0x46,0x02,0x5f,0x02,0x78,0x02,0x79,0x02}},




	{ .i1 = { 0x82,0x02,0x9e,0x02,0xa5,0x02,0xbf,0x02}},




	{ .i1 = { 0xc0,0x02,0xf6,0x02,0xfc,0x02,0xff,0x02}},




	{ .i1 = { 0x15,0x03,0x1b,0x03,0x29,0x03,0x3b,0x03}},




	{ .i1 = { 0x54,0x03,0x55,0x03,0x75,0x03,0x87,0x03}},




	{ .i1 = { 0x99,0x03,0xa0,0x03,0xb0,0x03,0xd9,0x03}},




	{ .i1 = { 0xa7,0xff,0xb7,0xff,0xd9,0xff,0xb3,0xff}},




	{ .i1 = { 0xd4,0xff,0x48,0x00,0x6d,0x01,0xa3,0x01}},




	{ .i1 = { 0xd1,0xff,0x3e,0x00,0x59,0x00,0x7f,0x00}},




	{ .i1 = { 0x8d,0x00,0xc0,0x00,0x36,0x01,0x3a,0x01}},




	{ .i1 = { 0x52,0x01,0x9d,0xff,0xf4,0x00,0xbc,0x00}},




	{ .i1 = { 0x49,0x01,0x65,0x01,0x79,0x00,0x23,0x01}},




	{ .i1 = { 0x7e,0x01,0x7a,0x01,0x9b,0x01,0xa1,0xff}},




	{ .i1 = { 0x66,0x00,0x76,0x00,0xc9,0x00,0xd7,0x00}},




	{ .i1 = { 0xde,0x00,0xe8,0x00,0xf9,0x00,0x01,0x01}},




	{ .i1 = { 0x1d,0x01,0x1c,0x01,0x41,0x01,0x5a,0x01}},




	{ .i1 = { 0x64,0x01,0x25,0x01,0x7b,0x01,0x5d,0x01}},




	{ .i1 = { 0x8b,0x01,0x71,0x01,0x9f,0x01,0x8c,0x01}},




	{ .i1 = { 0xaa,0x01,0xab,0x01,0x9a,0x01,0xc1,0x01}},


	{ .i1 = { 0xc3,0x01}},
};
static data f3___main_s05cf[] = {




	{ .i1 = { 0x3d,0x02,0xd5,0x01,0xd5,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x44,0x02,0x40,0x02,0x4f,0x02}},




	{ .i1 = { 0x4f,0x02,0xc3,0x01,0x4f,0x02,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x33,0x02}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x4b,0x02,0x4b,0x02,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x2f,0x02,0x4a,0x02,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x3d,0x02}},




	{ .i1 = { 0x3d,0x02,0x49,0x02,0x3d,0x02,0x49,0x02}},




	{ .i1 = { 0x3d,0x02,0x49,0x02,0x3d,0x02,0x42,0x02}},




	{ .i1 = { 0x3d,0x02,0x3d,0x02,0xd3,0x01,0x3d,0x02}},




	{ .i1 = { 0x3d,0x02,0xc3,0x01,0xc3,0x01,0x1b,0x02}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x34,0x02,0x1b,0x02,0xe5,0x01,0xe4,0x01}},




	{ .i1 = { 0xe3,0x01,0xe2,0x01,0xe1,0x01,0xe0,0x01}},




	{ .i1 = { 0x17,0x02,0x01,0x02,0xf2,0x01,0xf0,0x01}},




	{ .i1 = { 0xf4,0x01,0xf3,0x01,0xeb,0x01,0xec,0x01}},




	{ .i1 = { 0xe9,0x01,0xed,0x01,0xef,0x01,0xee,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xd4,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xf9,0x01,0xf8,0x01,0xf7,0x01}},




	{ .i1 = { 0xf6,0x01,0xf1,0x01,0xea,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x1d,0x02}},




	{ .i1 = { 0x50,0x02,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x2d,0x02,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x2a,0x02}},




	{ .i1 = { 0xc3,0x01,0x28,0x02,0xc3,0x01,0x23,0x02}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x0f,0x02}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x1a,0x02,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xde,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xf5,0x01,0xe8,0x01}},


	{ .i1 = { 0xc3,0x01}},
};
const i1 c02_s011c[] = { 0x24,0 };
const i1 c02_s011d[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s011e[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s011f[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s0120[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0121[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s0122[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0123[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s0124[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s0125[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s0126[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s0127[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s0128[] = { 0x49,0x46,0 };
const i1 c02_s0129[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s012a[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s012b[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s012c[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s012d[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s012e[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s012f[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s0130[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s0131[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s0132[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0133[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s0134[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s0135[] = { 0x53,0x55,0x42,0 };
const i1 c02_s0136[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s0137[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s0138[] = { 0x56,0x41,0x52,0 };
const i1 c02_s0139[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s013a[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s013b[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s013c[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s013d[] = { 0x49,0x44,0 };
const i1 c02_s013e[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s013f[] = { 0x41,0x54,0 };
const i1 c02_s0140[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s0141[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s0142[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s0143[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s0144[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s0145[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s0146[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c02_s0147[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c02_s0148[] = { 0x49,0x4e,0x54,0x45,0x52,0x46,0x41,0x43,0x45,0 };
const i1 c02_s0149[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s014a[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s014b[] = { 0x4f,0x52,0 };
const i1 c02_s014c[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s014d[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s014e[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s014f[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s0150[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s0151[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s0152[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s0153[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s0154[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s0155[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s0156[] = { 0x41,0x53,0 };
const i1 c02_s0157[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s0158[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s0159[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s015a[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s015b[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s015c[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s015d[] = { 0x49,0x53,0 };
const i1 c02_s015e[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s015f[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
const i1 c02_s0160[] = { 0x49,0x4d,0x50,0x4c,0x45,0x4d,0x45,0x4e,0x54,0x53,0 };
static data f3___main_s05d0[] = {

	{ .ptr = (void*)c02_s011c },

	{ .ptr = (void*)c02_s011d },

	{ .ptr = (void*)c02_s011e },

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

};
const i1 c02_s0161[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };
	void f12_print(void);
	void f34_Free(void);

// token_destructor workspace at ws+3512 length ws+0
void f301_token_destructor(void) {

	i8 v7421 = (i8)(intptr_t)(ws+3496);
	i1 v7422 = *(i1*)(intptr_t)v7421;
	i1 v7423 = (i1)+41;
	if (v7422==v7423) goto c02_05d6; else goto c02_05d8;

c02_05d8:;

	i8 v7424 = (i8)(intptr_t)(ws+3496);
	i1 v7425 = *(i1*)(intptr_t)v7424;
	i1 v7426 = (i1)+33;
	if (v7425==v7426) goto c02_05d6; else goto c02_05d7;

c02_05d6:;

	i8 v7427 = (i8)(intptr_t)c02_s0161;
	*(i8*)(intptr_t)(ws+3696) = v7427;
	i8 v7428 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7428)();

	i8 v7429 = (i8)(intptr_t)(ws+3504);
	i8 v7430 = *(i8*)(intptr_t)v7429;
	i8 v7431 = *(i8*)(intptr_t)v7430;
	*(i8*)(intptr_t)(ws+3680) = v7431;
	i8 v7432 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7432)();

c02_05d7:;

c02_05d1:;

}
	void f301_token_destructor(void);

// yy_destructor workspace at ws+3496 length ws+16
void f300_yy_destructor(void) {


	i8 v7433 = (i8)(intptr_t)(ws+3496);
	i1 v7434 = *(i1*)(intptr_t)v7433;
	i1 v7435 = (i1)+0;
	if (v7434==v7435) goto c02_05df; else goto c02_05e0;

c02_05e0:;

	i8 v7436 = (i8)(intptr_t)(ws+3496);
	i1 v7437 = *(i1*)(intptr_t)v7436;
	i1 v7438 = (i1)+69;
	if (v7437<v7438) goto c02_05de; else goto c02_05df;

c02_05de:;

	i8 v7439 = (i8)(intptr_t)(f301_token_destructor);

	((void(*)(void))(intptr_t)v7439)();

c02_05df:;

c02_05d9:;

}
	void f300_yy_destructor(void);

// yy_pop_parser_stack workspace at ws+3384 length ws+0
void f302_yy_pop_parser_stack(void) {

	i8 v7440 = (i8)(intptr_t)(ws+1568);
	i8 v7441 = *(i8*)(intptr_t)v7440;
	i8 v7442 = v7441+(-16);
	i8 v7443 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7443 = v7442;

	i8 v7444 = (i8)(intptr_t)(ws+1568);
	i8 v7445 = *(i8*)(intptr_t)v7444;
	i8 v7446 = v7445+(+2);
	i1 v7447 = *(i1*)(intptr_t)v7446;
	*(i1*)(intptr_t)(ws+3496) = v7447;
	i8 v7448 = (i8)(intptr_t)(ws+1568);
	i8 v7449 = *(i8*)(intptr_t)v7448;
	i8 v7450 = v7449+(+8);
	*(i8*)(intptr_t)(ws+3504) = v7450;
	i8 v7451 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7451)();

}
	void f302_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3384 length ws+0
void f303_yy_pop_all_parser_stack(void) {

c02_05e1:;

	i8 v7452 = (i8)(intptr_t)(ws+1568);
	i8 v7453 = *(i8*)(intptr_t)v7452;
	i8 v7454 = (i8)(intptr_t)(ws+1576);
	if (v7453==v7454) goto c02_05e6; else goto c02_05e5;

c02_05e5:;

	i8 v7455 = (i8)(intptr_t)(f302_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v7455)();

	goto c02_05e1;

c02_05e6:;

}
	void f303_yy_pop_all_parser_stack(void);
	void f74_StartError(void);
const i1 c02_s0162[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f12_print(void);
	void f75_EndError(void);

// yy_stack_overflow workspace at ws+3384 length ws+0
void f304_yy_stack_overflow(void) {

	i8 v7456 = (i8)(intptr_t)(f303_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v7456)();

	i8 v7457 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7457)();

	i8 v7458 = (i8)(intptr_t)c02_s0162;
	*(i8*)(intptr_t)(ws+3696) = v7458;
	i8 v7459 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7459)();

	i8 v7460 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7460)();

}
static data f3___main_s05e7[] = {








	{ .i1 = { 0x47,0x47,0x47,0x47,0x47,0x47,0x4b,0x47}},








	{ .i1 = { 0x4d,0x4c,0x47,0x47,0x47,0x4f,0x50,0x51}},








	{ .i1 = { 0x52,0x53,0x47,0x54,0x57,0x57,0x4e,0x4e}},








	{ .i1 = { 0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e}},








	{ .i1 = { 0x59,0x59,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x59,0x59}},








	{ .i1 = { 0x4a,0x4a,0x59,0x58,0x47,0x49,0x49,0x49}},








	{ .i1 = { 0x49,0x49,0x49,0x47,0x48,0x5b,0x5c,0x5a}},








	{ .i1 = { 0x5a,0x4a,0x47,0x47,0x5d,0x5e,0x5e,0x60}},








	{ .i1 = { 0x60,0x61,0x5f,0x62,0x62,0x63,0x47,0x6a}},








	{ .i1 = { 0x66,0x64,0x69,0x67,0x68,0x65,0x65,0x6b}},








	{ .i1 = { 0x6c,0x6c,0x6d,0x6d,0x6e,0x47,0x6f,0x70}},








	{ .i1 = { 0x72,0x74,0x74,0x73,0x47,0x75,0x77,0x77}},








	{ .i1 = { 0x78,0x47,0x79,0x7b,0x7b,0x7b,0x45,0x46}},








	{ .i1 = { 0x46,0x47,0x51,0x51,0x55,0x55,0x56,0x47}},








	{ .i1 = { 0x47,0x47,0x47,0x66,0x70,0x71,0x71,0x76}},





	{ .i1 = { 0x76,0x77,0x7a,0x7a}},
};
static data f3___main_s05e8[] = {








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








	{ .i1 = { 0x03,0x01,0x05,0x01,0x03,0x01,0x05,0x04}},








	{ .i1 = { 0x05,0x01,0x03,0x01,0x02,0x01,0x03,0x01}},








	{ .i1 = { 0x02,0x03,0x01,0x03,0x03,0x07,0x01,0x02}},








	{ .i1 = { 0x05,0x00,0x04,0x01,0x05,0x05,0x01,0x03}},








	{ .i1 = { 0x01,0x03,0x01,0x01,0x01,0x01,0x01,0x00}},








	{ .i1 = { 0x02,0x01,0x02,0x05,0x00,0x02,0x02,0x08}},








	{ .i1 = { 0x06,0x05,0x05,0x00,0x00,0x00,0x02,0x01}},





	{ .i1 = { 0x03,0x00,0x01,0x03}},
};
	void f31_MemCopy(void);

// CopyMinor workspace at ws+3384 length ws+16
void f306_CopyMinor(void) {

	i8 v7483 = (i8)(intptr_t)(ws+3384);
	i8 v7484 = *(i8*)(intptr_t)v7483;
	*(i8*)(intptr_t)(ws+3576) = v7484;
	i8 v7485 = (i8)+8;
	*(i8*)(intptr_t)(ws+3584) = v7485;
	i8 v7486 = (i8)(intptr_t)(ws+3392);
	i8 v7487 = *(i8*)(intptr_t)v7486;
	*(i8*)(intptr_t)(ws+3592) = v7487;
	i8 v7488 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v7488)();

}
	void f304_yy_stack_overflow(void);
	void f306_CopyMinor(void);

// Reducer workspace at ws+3384 length ws+0
void f308_Reducer(void) {

}
	void f153_MidReturn(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);

// reduce_0 workspace at ws+3384 length ws+8
void f309_reduce_0(void) {

	i8 v7527 = (i8)(intptr_t)(f153_MidReturn);

	((void(*)(void))(intptr_t)v7527)();

	i8 v7528 = *(i8*)(intptr_t)(ws+3392);
	i8 v7529 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7529 = v7528;

	i8 v7530 = (i8)(intptr_t)(ws+3384);
	i8 v7531 = *(i8*)(intptr_t)v7530;
	*(i8*)(intptr_t)(ws+3488) = v7531;
	i8 v7532 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7532)();

	i1 v7533 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7533;
	i8 v7534 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7534;
	i8 v7535 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7535)();

}
	void f260_InitVariable(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_1 workspace at ws+3384 length ws+0
void f310_reduce_1(void) {

	i8 v7536 = (i8)(intptr_t)(ws+40);
	i8 v7537 = *(i8*)(intptr_t)v7536;
	*(i8*)(intptr_t)(ws+3488) = v7537;
	i8 v7538 = (i8)(intptr_t)(ws+3328);
	i8 v7539 = *(i8*)(intptr_t)v7538;
	*(i8*)(intptr_t)(ws+3496) = v7539;
	i8 v7540 = (i8)(intptr_t)(ws+3312);
	i8 v7541 = *(i8*)(intptr_t)v7540;
	*(i8*)(intptr_t)(ws+3504) = v7541;
	i8 v7542 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(void))(intptr_t)v7542)();

	i1 v7543 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v7543;
	i8 v7544 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7544;
	i8 v7545 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7545)();

	i1 v7546 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7546;
	i8 v7547 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7547;
	i8 v7548 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7548)();

}
	void f260_InitVariable(void);
	void f269_CheckExpressionType(void);
	void f131_MidAddress(void);
	void f113_MidDeref(void);
	void f133_MidStore(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_2 workspace at ws+3384 length ws+32
void f311_reduce_2(void) {

	i8 v7549 = (i8)(intptr_t)(ws+40);
	i8 v7550 = *(i8*)(intptr_t)v7549;
	*(i8*)(intptr_t)(ws+3488) = v7550;
	i8 v7551 = (i8)(intptr_t)(ws+3344);
	i8 v7552 = *(i8*)(intptr_t)v7551;
	*(i8*)(intptr_t)(ws+3496) = v7552;
	i8 v7553 = (i8)(intptr_t)(ws+3328);
	i8 v7554 = *(i8*)(intptr_t)v7553;
	*(i8*)(intptr_t)(ws+3504) = v7554;
	i8 v7555 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(void))(intptr_t)v7555)();

	i8 v7556 = (i8)(intptr_t)(ws+3312);
	i8 v7557 = *(i8*)(intptr_t)v7556;
	*(i8*)(intptr_t)(ws+3496) = v7557;
	i8 v7558 = (i8)(intptr_t)(ws+3344);
	i8 v7559 = *(i8*)(intptr_t)v7558;
	i8 v7560 = *(i8*)(intptr_t)v7559;
	i8 v7561 = *(i8*)(intptr_t)v7560;
	*(i8*)(intptr_t)(ws+3504) = v7561;
	i8 v7562 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(void))(intptr_t)v7562)();

	i8 v7563 = (i8)(intptr_t)(ws+3312);
	i8 v7564 = *(i8*)(intptr_t)v7563;
	i8 v7565 = v7564+(+24);
	i8 v7566 = *(i8*)(intptr_t)v7565;
	i8 v7567 = v7566+(+48);
	i2 v7568 = *(i2*)(intptr_t)v7567;
	i1 v7569 = v7568;
	i8 v7570 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v7570 = v7569;

	i8 v7571 = (i8)(intptr_t)(ws+3344);
	i8 v7572 = *(i8*)(intptr_t)v7571;
	*(i8*)(intptr_t)(ws+3488) = v7572;
	i2 v7573 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v7573;
	i8 v7574 = (i8)(intptr_t)(f131_MidAddress);

	((void(*)(void))(intptr_t)v7574)();

	i8 v7575 = *(i8*)(intptr_t)(ws+3504);
	i8 v7576 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7576 = v7575;

	i8 v7577 = (i8)(intptr_t)(ws+3384);
	i1 v7578 = *(i1*)(intptr_t)v7577;
	*(i1*)(intptr_t)(ws+3544) = v7578;
	i8 v7579 = (i8)(intptr_t)(ws+3392);
	i8 v7580 = *(i8*)(intptr_t)v7579;
	*(i8*)(intptr_t)(ws+3552) = v7580;
	i8 v7581 = (i8)(intptr_t)(f113_MidDeref);

	((void(*)(void))(intptr_t)v7581)();

	i8 v7582 = *(i8*)(intptr_t)(ws+3560);
	i8 v7583 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7583 = v7582;

	i8 v7584 = (i8)(intptr_t)(ws+3384);
	i1 v7585 = *(i1*)(intptr_t)v7584;
	*(i1*)(intptr_t)(ws+3488) = v7585;
	i8 v7586 = (i8)(intptr_t)(ws+3312);
	i8 v7587 = *(i8*)(intptr_t)v7586;
	*(i8*)(intptr_t)(ws+3496) = v7587;
	i8 v7588 = (i8)(intptr_t)(ws+3400);
	i8 v7589 = *(i8*)(intptr_t)v7588;
	*(i8*)(intptr_t)(ws+3504) = v7589;
	i8 v7590 = (i8)(intptr_t)(f133_MidStore);

	((void(*)(void))(intptr_t)v7590)();

	i8 v7591 = *(i8*)(intptr_t)(ws+3512);
	i8 v7592 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7592 = v7591;

	i8 v7593 = (i8)(intptr_t)(ws+3408);
	i8 v7594 = *(i8*)(intptr_t)v7593;
	*(i8*)(intptr_t)(ws+3488) = v7594;
	i8 v7595 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7595)();

	i1 v7596 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v7596;
	i8 v7597 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v7597;
	i8 v7598 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7598)();

	i1 v7599 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v7599;
	i8 v7600 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7600;
	i8 v7601 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7601)();

	i1 v7602 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7602;
	i8 v7603 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7603;
	i8 v7604 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7604)();

}
const i1 c02_s0165[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);
	void f230_IsScalar(void);
const i1 c02_s0166[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(void);
	void f260_InitVariable(void);
	void f269_CheckExpressionType(void);
	void f131_MidAddress(void);
	void f113_MidDeref(void);
	void f133_MidStore(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_3 workspace at ws+3384 length ws+40
void f312_reduce_3(void) {

	i8 v7605 = (i8)(intptr_t)(ws+3312);
	i8 v7606 = *(i8*)(intptr_t)v7605;
	i8 v7607 = v7606+(+24);
	i8 v7608 = *(i8*)(intptr_t)v7607;
	i8 v7609 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7609 = v7608;

	i8 v7610 = (i8)(intptr_t)(ws+3384);
	i8 v7611 = *(i8*)(intptr_t)v7610;
	i8 v7612 = (i8)+0;
	if (v7611==v7612) goto c02_05f7; else goto c02_05f8;

c02_05f7:;

	i8 v7613 = (i8)(intptr_t)c02_s0165;
	*(i8*)(intptr_t)(ws+3648) = v7613;
	i8 v7614 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7614)();

c02_05f8:;

c02_05f4:;

	i8 v7615 = (i8)(intptr_t)(ws+3384);
	i8 v7616 = *(i8*)(intptr_t)v7615;
	*(i8*)(intptr_t)(ws+3544) = v7616;
	i8 v7617 = (i8)(intptr_t)(f230_IsScalar);

	((void(*)(void))(intptr_t)v7617)();

	i1 v7618 = *(i1*)(intptr_t)(ws+3552);
	i8 v7619 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v7619 = v7618;

	i8 v7620 = (i8)(intptr_t)(ws+3392);
	i1 v7621 = *(i1*)(intptr_t)v7620;
	i1 v7622 = (i1)+0;
	if (v7621==v7622) goto c02_05fc; else goto c02_05fd;

c02_05fc:;

	i8 v7623 = (i8)(intptr_t)c02_s0166;
	*(i8*)(intptr_t)(ws+3648) = v7623;
	i8 v7624 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7624)();

c02_05fd:;

c02_05f9:;

	i8 v7625 = (i8)(intptr_t)(ws+40);
	i8 v7626 = *(i8*)(intptr_t)v7625;
	*(i8*)(intptr_t)(ws+3488) = v7626;
	i8 v7627 = (i8)(intptr_t)(ws+3328);
	i8 v7628 = *(i8*)(intptr_t)v7627;
	*(i8*)(intptr_t)(ws+3496) = v7628;
	i8 v7629 = (i8)(intptr_t)(ws+3384);
	i8 v7630 = *(i8*)(intptr_t)v7629;
	*(i8*)(intptr_t)(ws+3504) = v7630;
	i8 v7631 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(void))(intptr_t)v7631)();

	i8 v7632 = (i8)(intptr_t)(ws+3312);
	i8 v7633 = *(i8*)(intptr_t)v7632;
	*(i8*)(intptr_t)(ws+3496) = v7633;
	i8 v7634 = (i8)(intptr_t)(ws+3328);
	i8 v7635 = *(i8*)(intptr_t)v7634;
	i8 v7636 = *(i8*)(intptr_t)v7635;
	i8 v7637 = *(i8*)(intptr_t)v7636;
	*(i8*)(intptr_t)(ws+3504) = v7637;
	i8 v7638 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(void))(intptr_t)v7638)();

	i8 v7639 = (i8)(intptr_t)(ws+3312);
	i8 v7640 = *(i8*)(intptr_t)v7639;
	i8 v7641 = v7640+(+24);
	i8 v7642 = *(i8*)(intptr_t)v7641;
	i8 v7643 = v7642+(+48);
	i2 v7644 = *(i2*)(intptr_t)v7643;
	i1 v7645 = v7644;
	i8 v7646 = (i8)(intptr_t)(ws+3393);
	*(i1*)(intptr_t)v7646 = v7645;

	i8 v7647 = (i8)(intptr_t)(ws+3328);
	i8 v7648 = *(i8*)(intptr_t)v7647;
	*(i8*)(intptr_t)(ws+3488) = v7648;
	i2 v7649 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v7649;
	i8 v7650 = (i8)(intptr_t)(f131_MidAddress);

	((void(*)(void))(intptr_t)v7650)();

	i8 v7651 = *(i8*)(intptr_t)(ws+3504);
	i8 v7652 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7652 = v7651;

	i8 v7653 = (i8)(intptr_t)(ws+3393);
	i1 v7654 = *(i1*)(intptr_t)v7653;
	*(i1*)(intptr_t)(ws+3544) = v7654;
	i8 v7655 = (i8)(intptr_t)(ws+3400);
	i8 v7656 = *(i8*)(intptr_t)v7655;
	*(i8*)(intptr_t)(ws+3552) = v7656;
	i8 v7657 = (i8)(intptr_t)(f113_MidDeref);

	((void(*)(void))(intptr_t)v7657)();

	i8 v7658 = *(i8*)(intptr_t)(ws+3560);
	i8 v7659 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7659 = v7658;

	i8 v7660 = (i8)(intptr_t)(ws+3393);
	i1 v7661 = *(i1*)(intptr_t)v7660;
	*(i1*)(intptr_t)(ws+3488) = v7661;
	i8 v7662 = (i8)(intptr_t)(ws+3312);
	i8 v7663 = *(i8*)(intptr_t)v7662;
	*(i8*)(intptr_t)(ws+3496) = v7663;
	i8 v7664 = (i8)(intptr_t)(ws+3408);
	i8 v7665 = *(i8*)(intptr_t)v7664;
	*(i8*)(intptr_t)(ws+3504) = v7665;
	i8 v7666 = (i8)(intptr_t)(f133_MidStore);

	((void(*)(void))(intptr_t)v7666)();

	i8 v7667 = *(i8*)(intptr_t)(ws+3512);
	i8 v7668 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7668 = v7667;

	i8 v7669 = (i8)(intptr_t)(ws+3416);
	i8 v7670 = *(i8*)(intptr_t)v7669;
	*(i8*)(intptr_t)(ws+3488) = v7670;
	i8 v7671 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7671)();

	i1 v7672 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v7672;
	i8 v7673 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7673;
	i8 v7674 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7674)();

	i1 v7675 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7675;
	i8 v7676 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7676;
	i8 v7677 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7677)();

}
	void f233_UndoLValue(void);
	void f269_CheckExpressionType(void);
	void f113_MidDeref(void);
	void f133_MidStore(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_4 workspace at ws+3384 length ws+48
void f313_reduce_4(void) {

	i8 v7678 = (i8)(intptr_t)(ws+3328);
	i8 v7679 = *(i8*)(intptr_t)v7678;
	i8 v7680 = v7679+(+24);
	i8 v7681 = *(i8*)(intptr_t)v7680;
	i8 v7682 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7682 = v7681;

	i8 v7683 = (i8)(intptr_t)(ws+3328);
	i8 v7684 = *(i8*)(intptr_t)v7683;
	*(i8*)(intptr_t)(ws+3432) = v7684;
	i8 v7685 = (i8)(intptr_t)(f233_UndoLValue);

	((void(*)(void))(intptr_t)v7685)();

	i8 v7686 = *(i8*)(intptr_t)(ws+3440);
	i8 v7687 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7687 = v7686;

	i8 v7688 = (i8)(intptr_t)(ws+3392);
	i8 v7689 = *(i8*)(intptr_t)v7688;
	i8 v7690 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7690 = v7689;

	i8 v7691 = (i8)(intptr_t)(ws+3312);
	i8 v7692 = *(i8*)(intptr_t)v7691;
	*(i8*)(intptr_t)(ws+3496) = v7692;
	i8 v7693 = (i8)(intptr_t)(ws+3384);
	i8 v7694 = *(i8*)(intptr_t)v7693;
	*(i8*)(intptr_t)(ws+3504) = v7694;
	i8 v7695 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(void))(intptr_t)v7695)();

	i8 v7696 = (i8)(intptr_t)(ws+3384);
	i8 v7697 = *(i8*)(intptr_t)v7696;
	i8 v7698 = v7697+(+48);
	i2 v7699 = *(i2*)(intptr_t)v7698;
	i1 v7700 = v7699;
	i8 v7701 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v7701 = v7700;

	i8 v7702 = (i8)(intptr_t)(ws+3408);
	i1 v7703 = *(i1*)(intptr_t)v7702;
	*(i1*)(intptr_t)(ws+3544) = v7703;
	i8 v7704 = (i8)(intptr_t)(ws+3400);
	i8 v7705 = *(i8*)(intptr_t)v7704;
	*(i8*)(intptr_t)(ws+3552) = v7705;
	i8 v7706 = (i8)(intptr_t)(f113_MidDeref);

	((void(*)(void))(intptr_t)v7706)();

	i8 v7707 = *(i8*)(intptr_t)(ws+3560);
	i8 v7708 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7708 = v7707;

	i8 v7709 = (i8)(intptr_t)(ws+3408);
	i1 v7710 = *(i1*)(intptr_t)v7709;
	*(i1*)(intptr_t)(ws+3488) = v7710;
	i8 v7711 = (i8)(intptr_t)(ws+3312);
	i8 v7712 = *(i8*)(intptr_t)v7711;
	*(i8*)(intptr_t)(ws+3496) = v7712;
	i8 v7713 = (i8)(intptr_t)(ws+3416);
	i8 v7714 = *(i8*)(intptr_t)v7713;
	*(i8*)(intptr_t)(ws+3504) = v7714;
	i8 v7715 = (i8)(intptr_t)(f133_MidStore);

	((void(*)(void))(intptr_t)v7715)();

	i8 v7716 = *(i8*)(intptr_t)(ws+3512);
	i8 v7717 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v7717 = v7716;

	i8 v7718 = (i8)(intptr_t)(ws+3424);
	i8 v7719 = *(i8*)(intptr_t)v7718;
	*(i8*)(intptr_t)(ws+3488) = v7719;
	i8 v7720 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7720)();

	i1 v7721 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v7721;
	i8 v7722 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v7722;
	i8 v7723 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7723)();

	i1 v7724 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7724;
	i8 v7725 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7725;
	i8 v7726 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7726)();

}
	void f285_TerminateNormalLoop(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_5 workspace at ws+3384 length ws+0
void f314_reduce_5(void) {

	i8 v7727 = (i8)(intptr_t)(ws+3328);
	i8 v7728 = *(i8*)(intptr_t)v7727;
	*(i8*)(intptr_t)(ws+3384) = v7728;
	i8 v7729 = (i8)(intptr_t)(f285_TerminateNormalLoop);

	((void(*)(void))(intptr_t)v7729)();

	i1 v7730 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v7730;
	i8 v7731 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v7731;
	i8 v7732 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7732)();

	i1 v7733 = (i1)+13;
	*(i1*)(intptr_t)(ws+3496) = v7733;
	i8 v7734 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7734;
	i8 v7735 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7735)();

}
	void f284_BeginNormalLoop(void);
	void f128_MidLabel(void);
	void f257_Generate(void);

// reduce_6 workspace at ws+3384 length ws+16
void f315_reduce_6(void) {

	i8 v7736 = (i8)(intptr_t)(f284_BeginNormalLoop);

	((void(*)(void))(intptr_t)v7736)();

	i8 v7737 = *(i8*)(intptr_t)(ws+3400);
	i8 v7738 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7738 = v7737;

	i8 v7739 = (i8)(intptr_t)(ws+3384);
	i8 v7740 = *(i8*)(intptr_t)v7739;
	i8 v7741 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v7741 = v7740;

	i8 v7742 = (i8)(intptr_t)(ws+54);
	i2 v7743 = *(i2*)(intptr_t)v7742;
	*(i2*)(intptr_t)(ws+3472) = v7743;
	i8 v7744 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v7744)();

	i8 v7745 = *(i8*)(intptr_t)(ws+3480);
	i8 v7746 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7746 = v7745;

	i8 v7747 = (i8)(intptr_t)(ws+3392);
	i8 v7748 = *(i8*)(intptr_t)v7747;
	*(i8*)(intptr_t)(ws+3488) = v7748;
	i8 v7749 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7749)();

}
	void f285_TerminateNormalLoop(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_7 workspace at ws+3384 length ws+0
void f316_reduce_7(void) {

	i8 v7750 = (i8)(intptr_t)(ws+3328);
	i8 v7751 = *(i8*)(intptr_t)v7750;
	*(i8*)(intptr_t)(ws+3384) = v7751;
	i8 v7752 = (i8)(intptr_t)(f285_TerminateNormalLoop);

	((void(*)(void))(intptr_t)v7752)();

	i1 v7753 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v7753;
	i8 v7754 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v7754;
	i8 v7755 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7755)();

	i1 v7756 = (i1)+13;
	*(i1*)(intptr_t)(ws+3496) = v7756;
	i8 v7757 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7757;
	i8 v7758 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7758)();

}
	void f284_BeginNormalLoop(void);
	void f128_MidLabel(void);
	void f257_Generate(void);

// reduce_8 workspace at ws+3384 length ws+16
void f317_reduce_8(void) {

	i8 v7759 = (i8)(intptr_t)(f284_BeginNormalLoop);

	((void(*)(void))(intptr_t)v7759)();

	i8 v7760 = *(i8*)(intptr_t)(ws+3400);
	i8 v7761 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7761 = v7760;

	i8 v7762 = (i8)(intptr_t)(ws+3384);
	i8 v7763 = *(i8*)(intptr_t)v7762;
	i8 v7764 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v7764 = v7763;

	i8 v7765 = (i8)(intptr_t)(ws+54);
	i2 v7766 = *(i2*)(intptr_t)v7765;
	*(i2*)(intptr_t)(ws+3472) = v7766;
	i8 v7767 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v7767)();

	i8 v7768 = *(i8*)(intptr_t)(ws+3480);
	i8 v7769 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7769 = v7768;

	i8 v7770 = (i8)(intptr_t)(ws+3392);
	i8 v7771 = *(i8*)(intptr_t)v7770;
	*(i8*)(intptr_t)(ws+3488) = v7771;
	i8 v7772 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7772)();

}
	void f236_AllocLabel(void);
	void f236_AllocLabel(void);
	void f258_GenerateConditional(void);
	void f300_yy_destructor(void);

// reduce_9 workspace at ws+3384 length ws+6
void f318_reduce_9(void) {

	i8 v7773 = (i8)(intptr_t)(ws+3320);
	i8 v7774 = *(i8*)(intptr_t)v7773;
	i8 v7775 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v7775 = v7774;

	i8 v7776 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v7776)();

	i2 v7777 = *(i2*)(intptr_t)(ws+3472);
	i8 v7778 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v7778 = v7777;

	i8 v7779 = (i8)(intptr_t)(ws+3384);
	i2 v7780 = *(i2*)(intptr_t)v7779;
	i8 v7781 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v7781 = v7780;

	i8 v7782 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v7782)();

	i2 v7783 = *(i2*)(intptr_t)(ws+3472);
	i8 v7784 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v7784 = v7783;

	i8 v7785 = (i8)(intptr_t)(ws+3388);
	i2 v7786 = *(i2*)(intptr_t)v7785;
	i8 v7787 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7787 = v7786;

	i8 v7788 = (i8)(intptr_t)(ws+3386);
	i2 v7789 = *(i2*)(intptr_t)v7788;
	i8 v7790 = (i8)(intptr_t)(ws+3312);
	i8 v7791 = *(i8*)(intptr_t)v7790;
	*(i2*)(intptr_t)v7791 = v7789;

	i8 v7792 = (i8)(intptr_t)(ws+52);
	i2 v7793 = *(i2*)(intptr_t)v7792;
	i8 v7794 = (i8)(intptr_t)(ws+3312);
	i8 v7795 = *(i8*)(intptr_t)v7794;
	i8 v7796 = v7795+(+2);
	*(i2*)(intptr_t)v7796 = v7793;

	i8 v7797 = (i8)(intptr_t)(ws+3386);
	i2 v7798 = *(i2*)(intptr_t)v7797;
	i8 v7799 = (i8)(intptr_t)(ws+3312);
	i8 v7800 = *(i8*)(intptr_t)v7799;
	i8 v7801 = v7800+(+4);
	*(i2*)(intptr_t)v7801 = v7798;

	i8 v7802 = (i8)(intptr_t)(ws+3312);
	i8 v7803 = *(i8*)(intptr_t)v7802;
	*(i8*)(intptr_t)(ws+3392) = v7803;
	i8 v7804 = (i8)(intptr_t)(f258_GenerateConditional);

	((void(*)(void))(intptr_t)v7804)();

	i8 v7805 = (i8)(intptr_t)(ws+52);
	i2 v7806 = *(i2*)(intptr_t)v7805;
	i8 v7807 = (i8)(intptr_t)(ws+3296);
	i8 v7808 = *(i8*)(intptr_t)v7807;
	i8 v7809 = v7808+(+2);
	*(i2*)(intptr_t)v7809 = v7806;

	i1 v7810 = (i1)+13;
	*(i1*)(intptr_t)(ws+3496) = v7810;
	i8 v7811 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7811;
	i8 v7812 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7812)();

}
const i1 c02_s0167[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f76_SimpleError(void);
	void f117_MidJump(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);

// reduce_10 workspace at ws+3384 length ws+8
void f319_reduce_10(void) {

	i8 v7813 = (i8)(intptr_t)(ws+52);
	i2 v7814 = *(i2*)(intptr_t)v7813;
	i2 v7815 = (i2)+0;
	if (v7814==v7815) goto c02_0601; else goto c02_0602;

c02_0601:;

	i8 v7816 = (i8)(intptr_t)c02_s0167;
	*(i8*)(intptr_t)(ws+3648) = v7816;
	i8 v7817 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7817)();

c02_0602:;

c02_05fe:;

	i8 v7818 = (i8)(intptr_t)(ws+52);
	i2 v7819 = *(i2*)(intptr_t)v7818;
	*(i2*)(intptr_t)(ws+3416) = v7819;
	i8 v7820 = (i8)(intptr_t)(f117_MidJump);

	((void(*)(void))(intptr_t)v7820)();

	i8 v7821 = *(i8*)(intptr_t)(ws+3424);
	i8 v7822 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7822 = v7821;

	i8 v7823 = (i8)(intptr_t)(ws+3384);
	i8 v7824 = *(i8*)(intptr_t)v7823;
	*(i8*)(intptr_t)(ws+3488) = v7824;
	i8 v7825 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7825)();

	i1 v7826 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7826;
	i8 v7827 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7827;
	i8 v7828 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7828)();

}
const i1 c02_s0168[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f76_SimpleError(void);
	void f117_MidJump(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);

// reduce_11 workspace at ws+3384 length ws+8
void f320_reduce_11(void) {

	i8 v7829 = (i8)(intptr_t)(ws+54);
	i2 v7830 = *(i2*)(intptr_t)v7829;
	i2 v7831 = (i2)+0;
	if (v7830==v7831) goto c02_0606; else goto c02_0607;

c02_0606:;

	i8 v7832 = (i8)(intptr_t)c02_s0168;
	*(i8*)(intptr_t)(ws+3648) = v7832;
	i8 v7833 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v7833)();

c02_0607:;

c02_0603:;

	i8 v7834 = (i8)(intptr_t)(ws+54);
	i2 v7835 = *(i2*)(intptr_t)v7834;
	*(i2*)(intptr_t)(ws+3416) = v7835;
	i8 v7836 = (i8)(intptr_t)(f117_MidJump);

	((void(*)(void))(intptr_t)v7836)();

	i8 v7837 = *(i8*)(intptr_t)(ws+3424);
	i8 v7838 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7838 = v7837;

	i8 v7839 = (i8)(intptr_t)(ws+3384);
	i8 v7840 = *(i8*)(intptr_t)v7839;
	*(i8*)(intptr_t)(ws+3488) = v7840;
	i8 v7841 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7841)();

	i1 v7842 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v7842;
	i8 v7843 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7843;
	i8 v7844 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7844)();

}
	void f128_MidLabel(void);
	void f257_Generate(void);
	void f34_Free(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_12 workspace at ws+3384 length ws+16
void f321_reduce_12(void) {

	i8 v7845 = (i8)(intptr_t)(ws+56);
	i8 v7846 = *(i8*)(intptr_t)v7845;
	i2 v7847 = *(i2*)(intptr_t)v7846;
	*(i2*)(intptr_t)(ws+3472) = v7847;
	i8 v7848 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v7848)();

	i8 v7849 = *(i8*)(intptr_t)(ws+3480);
	i8 v7850 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7850 = v7849;

	i8 v7851 = (i8)(intptr_t)(ws+3384);
	i8 v7852 = *(i8*)(intptr_t)v7851;
	*(i8*)(intptr_t)(ws+3488) = v7852;
	i8 v7853 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7853)();

	i8 v7854 = (i8)(intptr_t)(ws+56);
	i8 v7855 = *(i8*)(intptr_t)v7854;
	i8 v7856 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7856 = v7855;

	i8 v7857 = (i8)(intptr_t)(ws+56);
	i8 v7858 = *(i8*)(intptr_t)v7857;
	i8 v7859 = v7858+(+8);
	i8 v7860 = *(i8*)(intptr_t)v7859;
	i8 v7861 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7861 = v7860;

	i8 v7862 = (i8)(intptr_t)(ws+3392);
	i8 v7863 = *(i8*)(intptr_t)v7862;
	*(i8*)(intptr_t)(ws+3680) = v7863;
	i8 v7864 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7864)();

	i1 v7865 = (i1)+26;
	*(i1*)(intptr_t)(ws+3496) = v7865;
	i8 v7866 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v7866;
	i8 v7867 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7867)();

	i1 v7868 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v7868;
	i8 v7869 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v7869;
	i8 v7870 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7870)();

	i1 v7871 = (i1)+12;
	*(i1*)(intptr_t)(ws+3496) = v7871;
	i8 v7872 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v7872;
	i8 v7873 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v7873)();

}
	void f69_InternalAlloc(void);
	void f236_AllocLabel(void);

// reduce_13 workspace at ws+3384 length ws+18
void f322_reduce_13(void) {

	i8 v7874 = (i8)+16;
	*(i8*)(intptr_t)(ws+3640) = v7874;
	i8 v7875 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v7875)();

	i8 v7876 = *(i8*)(intptr_t)(ws+3648);
	i8 v7877 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7877 = v7876;

	i8 v7878 = (i8)(intptr_t)(ws+3384);
	i8 v7879 = *(i8*)(intptr_t)v7878;
	i8 v7880 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7880 = v7879;

	i8 v7881 = (i8)(intptr_t)(ws+56);
	i8 v7882 = *(i8*)(intptr_t)v7881;
	i8 v7883 = (i8)(intptr_t)(ws+3392);
	i8 v7884 = *(i8*)(intptr_t)v7883;
	i8 v7885 = v7884+(+8);
	*(i8*)(intptr_t)v7885 = v7882;

	i8 v7886 = (i8)(intptr_t)(ws+3392);
	i8 v7887 = *(i8*)(intptr_t)v7886;
	i8 v7888 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7888 = v7887;

	i8 v7889 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v7889)();

	i2 v7890 = *(i2*)(intptr_t)(ws+3472);
	i8 v7891 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v7891 = v7890;

	i8 v7892 = (i8)(intptr_t)(ws+3400);
	i2 v7893 = *(i2*)(intptr_t)v7892;
	i8 v7894 = (i8)(intptr_t)(ws+56);
	i8 v7895 = *(i8*)(intptr_t)v7894;
	*(i2*)(intptr_t)v7895 = v7893;

}
	void f236_AllocLabel(void);
	void f236_AllocLabel(void);
	void f258_GenerateConditional(void);

// reduce_14 workspace at ws+3384 length ws+8
void f323_reduce_14(void) {

	i8 v7896 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v7896)();

	i2 v7897 = *(i2*)(intptr_t)(ws+3472);
	i8 v7898 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v7898 = v7897;

	i8 v7899 = (i8)(intptr_t)(ws+3384);
	i2 v7900 = *(i2*)(intptr_t)v7899;
	i8 v7901 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v7901 = v7900;

	i8 v7902 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v7902)();

	i2 v7903 = *(i2*)(intptr_t)(ws+3472);
	i8 v7904 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v7904 = v7903;

	i8 v7905 = (i8)(intptr_t)(ws+3388);
	i2 v7906 = *(i2*)(intptr_t)v7905;
	i8 v7907 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v7907 = v7906;

	i8 v7908 = (i8)(intptr_t)(ws+3386);
	i2 v7909 = *(i2*)(intptr_t)v7908;
	i8 v7910 = (i8)(intptr_t)(ws+56);
	i8 v7911 = *(i8*)(intptr_t)v7910;
	i8 v7912 = v7911+(+2);
	*(i2*)(intptr_t)v7912 = v7909;

	i8 v7913 = (i8)(intptr_t)(ws+3390);
	i2 v7914 = *(i2*)(intptr_t)v7913;
	i8 v7915 = (i8)(intptr_t)(ws+56);
	i8 v7916 = *(i8*)(intptr_t)v7915;
	i8 v7917 = v7916+(+4);
	*(i2*)(intptr_t)v7917 = v7914;

	i8 v7918 = (i8)(intptr_t)(ws+3386);
	i2 v7919 = *(i2*)(intptr_t)v7918;
	i8 v7920 = (i8)(intptr_t)(ws+3304);
	i8 v7921 = *(i8*)(intptr_t)v7920;
	*(i2*)(intptr_t)v7921 = v7919;

	i8 v7922 = (i8)(intptr_t)(ws+3390);
	i2 v7923 = *(i2*)(intptr_t)v7922;
	i8 v7924 = (i8)(intptr_t)(ws+3304);
	i8 v7925 = *(i8*)(intptr_t)v7924;
	i8 v7926 = v7925+(+2);
	*(i2*)(intptr_t)v7926 = v7923;

	i8 v7927 = (i8)(intptr_t)(ws+3386);
	i2 v7928 = *(i2*)(intptr_t)v7927;
	i8 v7929 = (i8)(intptr_t)(ws+3304);
	i8 v7930 = *(i8*)(intptr_t)v7929;
	i8 v7931 = v7930+(+4);
	*(i2*)(intptr_t)v7931 = v7928;

	i8 v7932 = (i8)(intptr_t)(ws+3304);
	i8 v7933 = *(i8*)(intptr_t)v7932;
	*(i8*)(intptr_t)(ws+3392) = v7933;
	i8 v7934 = (i8)(intptr_t)(f258_GenerateConditional);

	((void(*)(void))(intptr_t)v7934)();

}
	void f128_MidLabel(void);
	void f257_Generate(void);

// reduce_15 workspace at ws+3384 length ws+8
void f324_reduce_15(void) {

	i8 v7935 = (i8)(intptr_t)(ws+56);
	i8 v7936 = *(i8*)(intptr_t)v7935;
	i8 v7937 = v7936+(+4);
	i2 v7938 = *(i2*)(intptr_t)v7937;
	*(i2*)(intptr_t)(ws+3472) = v7938;
	i8 v7939 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v7939)();

	i8 v7940 = *(i8*)(intptr_t)(ws+3480);
	i8 v7941 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7941 = v7940;

	i8 v7942 = (i8)(intptr_t)(ws+3384);
	i8 v7943 = *(i8*)(intptr_t)v7942;
	*(i8*)(intptr_t)(ws+3488) = v7943;
	i8 v7944 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7944)();

}
	void f117_MidJump(void);
	void f257_Generate(void);
	void f128_MidLabel(void);
	void f257_Generate(void);

// reduce_16 workspace at ws+3384 length ws+16
void f325_reduce_16(void) {

	i8 v7945 = (i8)(intptr_t)(ws+56);
	i8 v7946 = *(i8*)(intptr_t)v7945;
	i2 v7947 = *(i2*)(intptr_t)v7946;
	*(i2*)(intptr_t)(ws+3416) = v7947;
	i8 v7948 = (i8)(intptr_t)(f117_MidJump);

	((void(*)(void))(intptr_t)v7948)();

	i8 v7949 = *(i8*)(intptr_t)(ws+3424);
	i8 v7950 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7950 = v7949;

	i8 v7951 = (i8)(intptr_t)(ws+3384);
	i8 v7952 = *(i8*)(intptr_t)v7951;
	*(i8*)(intptr_t)(ws+3488) = v7952;
	i8 v7953 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7953)();

	i8 v7954 = (i8)(intptr_t)(ws+56);
	i8 v7955 = *(i8*)(intptr_t)v7954;
	i8 v7956 = v7955+(+4);
	i2 v7957 = *(i2*)(intptr_t)v7956;
	*(i2*)(intptr_t)(ws+3472) = v7957;
	i8 v7958 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v7958)();

	i8 v7959 = *(i8*)(intptr_t)(ws+3480);
	i8 v7960 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7960 = v7959;

	i8 v7961 = (i8)(intptr_t)(ws+3392);
	i8 v7962 = *(i8*)(intptr_t)v7961;
	*(i8*)(intptr_t)(ws+3488) = v7962;
	i8 v7963 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7963)();

}
	void f117_MidJump(void);
	void f257_Generate(void);
	void f128_MidLabel(void);
	void f257_Generate(void);

// reduce_17 workspace at ws+3384 length ws+16
void f326_reduce_17(void) {

	i8 v7964 = (i8)(intptr_t)(ws+56);
	i8 v7965 = *(i8*)(intptr_t)v7964;
	i2 v7966 = *(i2*)(intptr_t)v7965;
	*(i2*)(intptr_t)(ws+3416) = v7966;
	i8 v7967 = (i8)(intptr_t)(f117_MidJump);

	((void(*)(void))(intptr_t)v7967)();

	i8 v7968 = *(i8*)(intptr_t)(ws+3424);
	i8 v7969 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7969 = v7968;

	i8 v7970 = (i8)(intptr_t)(ws+3384);
	i8 v7971 = *(i8*)(intptr_t)v7970;
	*(i8*)(intptr_t)(ws+3488) = v7971;
	i8 v7972 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7972)();

	i8 v7973 = (i8)(intptr_t)(ws+56);
	i8 v7974 = *(i8*)(intptr_t)v7973;
	i8 v7975 = v7974+(+4);
	i2 v7976 = *(i2*)(intptr_t)v7975;
	*(i2*)(intptr_t)(ws+3472) = v7976;
	i8 v7977 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v7977)();

	i8 v7978 = *(i8*)(intptr_t)(ws+3480);
	i8 v7979 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7979 = v7978;

	i8 v7980 = (i8)(intptr_t)(ws+3392);
	i8 v7981 = *(i8*)(intptr_t)v7980;
	*(i8*)(intptr_t)(ws+3488) = v7981;
	i8 v7982 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v7982)();

}
	void f128_MidLabel(void);
	void f257_Generate(void);
	void f128_MidLabel(void);
	void f257_Generate(void);
	void f105_MidEndcase(void);
	void f257_Generate(void);
	void f34_Free(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_18 workspace at ws+3384 length ws+32
void f327_reduce_18(void) {

	i8 v7983 = (i8)(intptr_t)(ws+64);
	i8 v7984 = *(i8*)(intptr_t)v7983;
	i8 v7985 = v7984+(+17);
	i1 v7986 = *(i1*)(intptr_t)v7985;
	i1 v7987 = (i1)+0;
	if (v7986==v7987) goto c02_060f; else goto c02_060e;

c02_060f:;

	i8 v7988 = (i8)(intptr_t)(ws+64);
	i8 v7989 = *(i8*)(intptr_t)v7988;
	i2 v7990 = *(i2*)(intptr_t)v7989;
	i2 v7991 = (i2)+0;
	if (v7990==v7991) goto c02_060e; else goto c02_060d;

c02_060d:;

	i8 v7992 = (i8)(intptr_t)(ws+64);
	i8 v7993 = *(i8*)(intptr_t)v7992;
	i2 v7994 = *(i2*)(intptr_t)v7993;
	*(i2*)(intptr_t)(ws+3472) = v7994;
	i8 v7995 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v7995)();

	i8 v7996 = *(i8*)(intptr_t)(ws+3480);
	i8 v7997 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v7997 = v7996;

	i8 v7998 = (i8)(intptr_t)(ws+3384);
	i8 v7999 = *(i8*)(intptr_t)v7998;
	*(i8*)(intptr_t)(ws+3488) = v7999;
	i8 v8000 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v8000)();

c02_060e:;

c02_0608:;

	i8 v8001 = (i8)(intptr_t)(ws+64);
	i8 v8002 = *(i8*)(intptr_t)v8001;
	i8 v8003 = v8002+(+2);
	i2 v8004 = *(i2*)(intptr_t)v8003;
	*(i2*)(intptr_t)(ws+3472) = v8004;
	i8 v8005 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v8005)();

	i8 v8006 = *(i8*)(intptr_t)(ws+3480);
	i8 v8007 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8007 = v8006;

	i8 v8008 = (i8)(intptr_t)(ws+3392);
	i8 v8009 = *(i8*)(intptr_t)v8008;
	*(i8*)(intptr_t)(ws+3488) = v8009;
	i8 v8010 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v8010)();

	i8 v8011 = (i8)(intptr_t)(ws+64);
	i8 v8012 = *(i8*)(intptr_t)v8011;
	i8 v8013 = v8012+(+16);
	i1 v8014 = *(i1*)(intptr_t)v8013;
	*(i1*)(intptr_t)(ws+3416) = v8014;
	i8 v8015 = (i8)(intptr_t)(f105_MidEndcase);

	((void(*)(void))(intptr_t)v8015)();

	i8 v8016 = *(i8*)(intptr_t)(ws+3424);
	i8 v8017 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8017 = v8016;

	i8 v8018 = (i8)(intptr_t)(ws+3400);
	i8 v8019 = *(i8*)(intptr_t)v8018;
	*(i8*)(intptr_t)(ws+3488) = v8019;
	i8 v8020 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v8020)();

	i8 v8021 = (i8)(intptr_t)(ws+64);
	i8 v8022 = *(i8*)(intptr_t)v8021;
	i8 v8023 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8023 = v8022;

	i8 v8024 = (i8)(intptr_t)(ws+3408);
	i8 v8025 = *(i8*)(intptr_t)v8024;
	i8 v8026 = v8025+(+8);
	i8 v8027 = *(i8*)(intptr_t)v8026;
	i8 v8028 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v8028 = v8027;

	i8 v8029 = (i8)(intptr_t)(ws+3408);
	i8 v8030 = *(i8*)(intptr_t)v8029;
	*(i8*)(intptr_t)(ws+3680) = v8030;
	i8 v8031 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v8031)();

	i1 v8032 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v8032;
	i8 v8033 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v8033;
	i8 v8034 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8034)();

	i1 v8035 = (i1)+64;
	*(i1*)(intptr_t)(ws+3496) = v8035;
	i8 v8036 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8036;
	i8 v8037 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8037)();

	i1 v8038 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v8038;
	i8 v8039 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8039;
	i8 v8040 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8040)();

}
	void f69_InternalAlloc(void);
	void f236_AllocLabel(void);
	void f228_IsNum(void);
const i1 c02_s0169[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(void);
	void f166_NodeWidth(void);
	void f152_MidStartcase(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);

// reduce_19 workspace at ws+3384 length ws+32
void f328_reduce_19(void) {

	i8 v8041 = (i8)+18;
	*(i8*)(intptr_t)(ws+3640) = v8041;
	i8 v8042 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v8042)();

	i8 v8043 = *(i8*)(intptr_t)(ws+3648);
	i8 v8044 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8044 = v8043;

	i8 v8045 = (i8)(intptr_t)(ws+3384);
	i8 v8046 = *(i8*)(intptr_t)v8045;
	i8 v8047 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8047 = v8046;

	i8 v8048 = (i8)(intptr_t)(ws+64);
	i8 v8049 = *(i8*)(intptr_t)v8048;
	i8 v8050 = (i8)(intptr_t)(ws+3392);
	i8 v8051 = *(i8*)(intptr_t)v8050;
	i8 v8052 = v8051+(+8);
	*(i8*)(intptr_t)v8052 = v8049;

	i8 v8053 = (i8)(intptr_t)(ws+52);
	i2 v8054 = *(i2*)(intptr_t)v8053;
	i8 v8055 = (i8)(intptr_t)(ws+3392);
	i8 v8056 = *(i8*)(intptr_t)v8055;
	i8 v8057 = v8056+(+4);
	*(i2*)(intptr_t)v8057 = v8054;

	i8 v8058 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v8058)();

	i2 v8059 = *(i2*)(intptr_t)(ws+3472);
	i8 v8060 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v8060 = v8059;

	i8 v8061 = (i8)(intptr_t)(ws+3400);
	i2 v8062 = *(i2*)(intptr_t)v8061;
	i8 v8063 = (i8)(intptr_t)(ws+3392);
	i8 v8064 = *(i8*)(intptr_t)v8063;
	i8 v8065 = v8064+(+2);
	*(i2*)(intptr_t)v8065 = v8062;

	i8 v8066 = (i8)(intptr_t)(ws+3392);
	i8 v8067 = *(i8*)(intptr_t)v8066;
	i8 v8068 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v8068 = v8067;

	i8 v8069 = (i8)(intptr_t)(ws+3312);
	i8 v8070 = *(i8*)(intptr_t)v8069;
	i8 v8071 = v8070+(+24);
	i8 v8072 = *(i8*)(intptr_t)v8071;
	*(i8*)(intptr_t)(ws+3560) = v8072;
	i8 v8073 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v8073)();

	i1 v8074 = *(i1*)(intptr_t)(ws+3568);
	i8 v8075 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v8075 = v8074;

	i8 v8076 = (i8)(intptr_t)(ws+3402);
	i1 v8077 = *(i1*)(intptr_t)v8076;
	i1 v8078 = (i1)+0;
	if (v8077==v8078) goto c02_0613; else goto c02_0614;

c02_0613:;

	i8 v8079 = (i8)(intptr_t)c02_s0169;
	*(i8*)(intptr_t)(ws+3648) = v8079;
	i8 v8080 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8080)();

c02_0614:;

c02_0610:;

	i8 v8081 = (i8)(intptr_t)(ws+3312);
	i8 v8082 = *(i8*)(intptr_t)v8081;
	*(i8*)(intptr_t)(ws+3456) = v8082;
	i8 v8083 = (i8)(intptr_t)(f166_NodeWidth);

	((void(*)(void))(intptr_t)v8083)();

	i1 v8084 = *(i1*)(intptr_t)(ws+3464);
	i8 v8085 = (i8)(intptr_t)(ws+3403);
	*(i1*)(intptr_t)v8085 = v8084;

	i8 v8086 = (i8)(intptr_t)(ws+3403);
	i1 v8087 = *(i1*)(intptr_t)v8086;
	i8 v8088 = (i8)(intptr_t)(ws+3392);
	i8 v8089 = *(i8*)(intptr_t)v8088;
	i8 v8090 = v8089+(+16);
	*(i1*)(intptr_t)v8090 = v8087;

	i8 v8091 = (i8)(intptr_t)(ws+3392);
	i8 v8092 = *(i8*)(intptr_t)v8091;
	i8 v8093 = v8092+(+16);
	i1 v8094 = *(i1*)(intptr_t)v8093;
	*(i1*)(intptr_t)(ws+3416) = v8094;
	i8 v8095 = (i8)(intptr_t)(ws+3312);
	i8 v8096 = *(i8*)(intptr_t)v8095;
	*(i8*)(intptr_t)(ws+3424) = v8096;
	i8 v8097 = (i8)(intptr_t)(f152_MidStartcase);

	((void(*)(void))(intptr_t)v8097)();

	i8 v8098 = *(i8*)(intptr_t)(ws+3432);
	i8 v8099 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8099 = v8098;

	i8 v8100 = (i8)(intptr_t)(ws+3408);
	i8 v8101 = *(i8*)(intptr_t)v8100;
	*(i8*)(intptr_t)(ws+3488) = v8101;
	i8 v8102 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v8102)();

	i1 v8103 = (i1)+65;
	*(i1*)(intptr_t)(ws+3496) = v8103;
	i8 v8104 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8104;
	i8 v8105 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8105)();

}
const i1 c02_s016a[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f76_SimpleError(void);
	void f117_MidJump(void);
	void f257_Generate(void);
	void f128_MidLabel(void);
	void f257_Generate(void);
	void f236_AllocLabel(void);
	void f126_MidWhencase(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);

// reduce_20 workspace at ws+3384 length ws+32
void f329_reduce_20(void) {

	i8 v8106 = (i8)(intptr_t)(ws+64);
	i8 v8107 = *(i8*)(intptr_t)v8106;
	i8 v8108 = v8107+(+17);
	i1 v8109 = *(i1*)(intptr_t)v8108;
	i1 v8110 = (i1)+0;
	if (v8109==v8110) goto c02_0619; else goto c02_0618;

c02_0618:;

	i8 v8111 = (i8)(intptr_t)c02_s016a;
	*(i8*)(intptr_t)(ws+3648) = v8111;
	i8 v8112 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8112)();

c02_0619:;

c02_0615:;

	i8 v8113 = (i8)(intptr_t)(ws+64);
	i8 v8114 = *(i8*)(intptr_t)v8113;
	i2 v8115 = *(i2*)(intptr_t)v8114;
	i2 v8116 = (i2)+0;
	if (v8115==v8116) goto c02_061e; else goto c02_061d;

c02_061d:;

	i8 v8117 = (i8)(intptr_t)(ws+64);
	i8 v8118 = *(i8*)(intptr_t)v8117;
	i8 v8119 = v8118+(+2);
	i2 v8120 = *(i2*)(intptr_t)v8119;
	*(i2*)(intptr_t)(ws+3416) = v8120;
	i8 v8121 = (i8)(intptr_t)(f117_MidJump);

	((void(*)(void))(intptr_t)v8121)();

	i8 v8122 = *(i8*)(intptr_t)(ws+3424);
	i8 v8123 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8123 = v8122;

	i8 v8124 = (i8)(intptr_t)(ws+3384);
	i8 v8125 = *(i8*)(intptr_t)v8124;
	*(i8*)(intptr_t)(ws+3488) = v8125;
	i8 v8126 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v8126)();

	i8 v8127 = (i8)(intptr_t)(ws+64);
	i8 v8128 = *(i8*)(intptr_t)v8127;
	i2 v8129 = *(i2*)(intptr_t)v8128;
	*(i2*)(intptr_t)(ws+3472) = v8129;
	i8 v8130 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v8130)();

	i8 v8131 = *(i8*)(intptr_t)(ws+3480);
	i8 v8132 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8132 = v8131;

	i8 v8133 = (i8)(intptr_t)(ws+3392);
	i8 v8134 = *(i8*)(intptr_t)v8133;
	*(i8*)(intptr_t)(ws+3488) = v8134;
	i8 v8135 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v8135)();

c02_061e:;

c02_061a:;

	i8 v8136 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v8136)();

	i2 v8137 = *(i2*)(intptr_t)(ws+3472);
	i8 v8138 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v8138 = v8137;

	i8 v8139 = (i8)(intptr_t)(ws+3400);
	i2 v8140 = *(i2*)(intptr_t)v8139;
	i8 v8141 = (i8)(intptr_t)(ws+64);
	i8 v8142 = *(i8*)(intptr_t)v8141;
	*(i2*)(intptr_t)v8142 = v8140;

	i8 v8143 = (i8)(intptr_t)(ws+64);
	i8 v8144 = *(i8*)(intptr_t)v8143;
	i8 v8145 = v8144+(+16);
	i1 v8146 = *(i1*)(intptr_t)v8145;
	*(i1*)(intptr_t)(ws+3416) = v8146;
	i8 v8147 = (i8)(intptr_t)(ws+3312);
	i4 v8148 = *(i4*)(intptr_t)v8147;
	*(i4*)(intptr_t)(ws+3420) = v8148;
	i8 v8149 = (i8)(intptr_t)(ws+64);
	i8 v8150 = *(i8*)(intptr_t)v8149;
	i2 v8151 = *(i2*)(intptr_t)v8150;
	*(i2*)(intptr_t)(ws+3424) = v8151;
	i8 v8152 = (i8)(intptr_t)(f126_MidWhencase);

	((void(*)(void))(intptr_t)v8152)();

	i8 v8153 = *(i8*)(intptr_t)(ws+3432);
	i8 v8154 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8154 = v8153;

	i8 v8155 = (i8)(intptr_t)(ws+3408);
	i8 v8156 = *(i8*)(intptr_t)v8155;
	*(i8*)(intptr_t)(ws+3488) = v8156;
	i8 v8157 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v8157)();

	i1 v8158 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v8158;
	i8 v8159 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8159;
	i8 v8160 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8160)();

}
const i1 c02_s016b[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f76_SimpleError(void);
	void f117_MidJump(void);
	void f257_Generate(void);
	void f128_MidLabel(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_21 workspace at ws+3384 length ws+16
void f330_reduce_21(void) {

	i8 v8161 = (i8)(intptr_t)(ws+64);
	i8 v8162 = *(i8*)(intptr_t)v8161;
	i8 v8163 = v8162+(+17);
	i1 v8164 = *(i1*)(intptr_t)v8163;
	i1 v8165 = (i1)+0;
	if (v8164==v8165) goto c02_0623; else goto c02_0622;

c02_0622:;

	i8 v8166 = (i8)(intptr_t)c02_s016b;
	*(i8*)(intptr_t)(ws+3648) = v8166;
	i8 v8167 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8167)();

c02_0623:;

c02_061f:;

	i8 v8168 = (i8)(intptr_t)(ws+64);
	i8 v8169 = *(i8*)(intptr_t)v8168;
	i2 v8170 = *(i2*)(intptr_t)v8169;
	i2 v8171 = (i2)+0;
	if (v8170==v8171) goto c02_0628; else goto c02_0627;

c02_0627:;

	i8 v8172 = (i8)(intptr_t)(ws+64);
	i8 v8173 = *(i8*)(intptr_t)v8172;
	i8 v8174 = v8173+(+2);
	i2 v8175 = *(i2*)(intptr_t)v8174;
	*(i2*)(intptr_t)(ws+3416) = v8175;
	i8 v8176 = (i8)(intptr_t)(f117_MidJump);

	((void(*)(void))(intptr_t)v8176)();

	i8 v8177 = *(i8*)(intptr_t)(ws+3424);
	i8 v8178 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8178 = v8177;

	i8 v8179 = (i8)(intptr_t)(ws+3384);
	i8 v8180 = *(i8*)(intptr_t)v8179;
	*(i8*)(intptr_t)(ws+3488) = v8180;
	i8 v8181 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v8181)();

	i8 v8182 = (i8)(intptr_t)(ws+64);
	i8 v8183 = *(i8*)(intptr_t)v8182;
	i2 v8184 = *(i2*)(intptr_t)v8183;
	*(i2*)(intptr_t)(ws+3472) = v8184;
	i8 v8185 = (i8)(intptr_t)(f128_MidLabel);

	((void(*)(void))(intptr_t)v8185)();

	i8 v8186 = *(i8*)(intptr_t)(ws+3480);
	i8 v8187 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8187 = v8186;

	i8 v8188 = (i8)(intptr_t)(ws+3392);
	i8 v8189 = *(i8*)(intptr_t)v8188;
	*(i8*)(intptr_t)(ws+3488) = v8189;
	i8 v8190 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v8190)();

c02_0628:;

c02_0624:;

	i2 v8191 = (i2)+0;
	i8 v8192 = (i8)(intptr_t)(ws+64);
	i8 v8193 = *(i8*)(intptr_t)v8192;
	*(i2*)(intptr_t)v8193 = v8191;

	i1 v8194 = (i1)+1;
	i8 v8195 = (i8)(intptr_t)(ws+64);
	i8 v8196 = *(i8*)(intptr_t)v8195;
	i8 v8197 = v8196+(+17);
	*(i1*)(intptr_t)v8197 = v8194;

	i1 v8198 = (i1)+9;
	*(i1*)(intptr_t)(ws+3496) = v8198;
	i8 v8199 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8199;
	i8 v8200 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8200)();

	i1 v8201 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v8201;
	i8 v8202 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8202;
	i8 v8203 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8203)();

}
	void f300_yy_destructor(void);

// reduce_22 workspace at ws+3384 length ws+0
void f331_reduce_22(void) {

	i8 v8204 = (i8)(intptr_t)(ws+3312);
	i8 v8205 = *(i8*)(intptr_t)v8204;
	i8 v8206 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8206 = v8205;

	i1 v8207 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v8207;
	i8 v8208 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8208;
	i8 v8209 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8209)();

}
	void f286_Negate(void);

// reduce_23 workspace at ws+3384 length ws+0
void f332_reduce_23(void) {

	i8 v8210 = (i8)(intptr_t)(ws+3304);
	i8 v8211 = *(i8*)(intptr_t)v8210;
	i8 v8212 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8212 = v8211;

	i8 v8213 = (i8)(intptr_t)(ws+3304);
	i8 v8214 = *(i8*)(intptr_t)v8213;
	*(i8*)(intptr_t)(ws+3384) = v8214;
	i8 v8215 = (i8)(intptr_t)(f286_Negate);

	((void(*)(void))(intptr_t)v8215)();

}
	void f127_MidBand(void);
	void f300_yy_destructor(void);

// reduce_24 workspace at ws+3384 length ws+8
void f333_reduce_24(void) {

	i8 v8216 = (i8)(intptr_t)(ws+3320);
	i8 v8217 = *(i8*)(intptr_t)v8216;
	*(i8*)(intptr_t)(ws+3392) = v8217;
	i8 v8218 = (i8)(intptr_t)(ws+3304);
	i8 v8219 = *(i8*)(intptr_t)v8218;
	*(i8*)(intptr_t)(ws+3400) = v8219;
	i2 v8220 = (i2)+0;
	*(i2*)(intptr_t)(ws+3408) = v8220;
	i2 v8221 = (i2)+0;
	*(i2*)(intptr_t)(ws+3410) = v8221;
	i2 v8222 = (i2)+0;
	*(i2*)(intptr_t)(ws+3412) = v8222;
	i1 v8223 = (i1)+0;
	*(i1*)(intptr_t)(ws+3414) = v8223;
	i8 v8224 = (i8)(intptr_t)(f127_MidBand);

	((void(*)(void))(intptr_t)v8224)();

	i8 v8225 = *(i8*)(intptr_t)(ws+3416);
	i8 v8226 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8226 = v8225;

	i8 v8227 = (i8)(intptr_t)(ws+3384);
	i8 v8228 = *(i8*)(intptr_t)v8227;
	i8 v8229 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8229 = v8228;

	i1 v8230 = (i1)+46;
	*(i1*)(intptr_t)(ws+3496) = v8230;
	i8 v8231 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8231;
	i8 v8232 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8232)();

}
	void f157_MidBor(void);
	void f300_yy_destructor(void);

// reduce_25 workspace at ws+3384 length ws+8
void f334_reduce_25(void) {

	i8 v8233 = (i8)(intptr_t)(ws+3320);
	i8 v8234 = *(i8*)(intptr_t)v8233;
	*(i8*)(intptr_t)(ws+3392) = v8234;
	i8 v8235 = (i8)(intptr_t)(ws+3304);
	i8 v8236 = *(i8*)(intptr_t)v8235;
	*(i8*)(intptr_t)(ws+3400) = v8236;
	i2 v8237 = (i2)+0;
	*(i2*)(intptr_t)(ws+3408) = v8237;
	i2 v8238 = (i2)+0;
	*(i2*)(intptr_t)(ws+3410) = v8238;
	i2 v8239 = (i2)+0;
	*(i2*)(intptr_t)(ws+3412) = v8239;
	i1 v8240 = (i1)+0;
	*(i1*)(intptr_t)(ws+3414) = v8240;
	i8 v8241 = (i8)(intptr_t)(f157_MidBor);

	((void(*)(void))(intptr_t)v8241)();

	i8 v8242 = *(i8*)(intptr_t)(ws+3416);
	i8 v8243 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8243 = v8242;

	i8 v8244 = (i8)(intptr_t)(ws+3384);
	i8 v8245 = *(i8*)(intptr_t)v8244;
	i8 v8246 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8246 = v8245;

	i1 v8247 = (i1)+47;
	*(i1*)(intptr_t)(ws+3496) = v8247;
	i8 v8248 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8248;
	i8 v8249 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8249)();

}
	void f287_ConditionalEq(void);
	void f300_yy_destructor(void);

// reduce_26 workspace at ws+3384 length ws+8
void f335_reduce_26(void) {

	i8 v8250 = (i8)(intptr_t)(ws+3320);
	i8 v8251 = *(i8*)(intptr_t)v8250;
	*(i8*)(intptr_t)(ws+3392) = v8251;
	i8 v8252 = (i8)(intptr_t)(ws+3304);
	i8 v8253 = *(i8*)(intptr_t)v8252;
	*(i8*)(intptr_t)(ws+3400) = v8253;
	i1 v8254 = (i1)+0;
	*(i1*)(intptr_t)(ws+3408) = v8254;
	i8 v8255 = (i8)(intptr_t)(f287_ConditionalEq);

	((void(*)(void))(intptr_t)v8255)();

	i8 v8256 = *(i8*)(intptr_t)(ws+3416);
	i8 v8257 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8257 = v8256;

	i8 v8258 = (i8)(intptr_t)(ws+3384);
	i8 v8259 = *(i8*)(intptr_t)v8258;
	i8 v8260 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8260 = v8259;

	i1 v8261 = (i1)+54;
	*(i1*)(intptr_t)(ws+3496) = v8261;
	i8 v8262 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8262;
	i8 v8263 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8263)();

}
	void f287_ConditionalEq(void);
	void f300_yy_destructor(void);

// reduce_27 workspace at ws+3384 length ws+8
void f336_reduce_27(void) {

	i8 v8264 = (i8)(intptr_t)(ws+3320);
	i8 v8265 = *(i8*)(intptr_t)v8264;
	*(i8*)(intptr_t)(ws+3392) = v8265;
	i8 v8266 = (i8)(intptr_t)(ws+3304);
	i8 v8267 = *(i8*)(intptr_t)v8266;
	*(i8*)(intptr_t)(ws+3400) = v8267;
	i1 v8268 = (i1)+1;
	*(i1*)(intptr_t)(ws+3408) = v8268;
	i8 v8269 = (i8)(intptr_t)(f287_ConditionalEq);

	((void(*)(void))(intptr_t)v8269)();

	i8 v8270 = *(i8*)(intptr_t)(ws+3416);
	i8 v8271 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8271 = v8270;

	i8 v8272 = (i8)(intptr_t)(ws+3384);
	i8 v8273 = *(i8*)(intptr_t)v8272;
	i8 v8274 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8274 = v8273;

	i1 v8275 = (i1)+55;
	*(i1*)(intptr_t)(ws+3496) = v8275;
	i8 v8276 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8276;
	i8 v8277 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8277)();

}
	void f288_ConditionalLt(void);
	void f300_yy_destructor(void);

// reduce_28 workspace at ws+3384 length ws+8
void f337_reduce_28(void) {

	i8 v8278 = (i8)(intptr_t)(ws+3320);
	i8 v8279 = *(i8*)(intptr_t)v8278;
	*(i8*)(intptr_t)(ws+3392) = v8279;
	i8 v8280 = (i8)(intptr_t)(ws+3304);
	i8 v8281 = *(i8*)(intptr_t)v8280;
	*(i8*)(intptr_t)(ws+3400) = v8281;
	i1 v8282 = (i1)+0;
	*(i1*)(intptr_t)(ws+3408) = v8282;
	i8 v8283 = (i8)(intptr_t)(f288_ConditionalLt);

	((void(*)(void))(intptr_t)v8283)();

	i8 v8284 = *(i8*)(intptr_t)(ws+3416);
	i8 v8285 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8285 = v8284;

	i8 v8286 = (i8)(intptr_t)(ws+3384);
	i8 v8287 = *(i8*)(intptr_t)v8286;
	i8 v8288 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8288 = v8287;

	i1 v8289 = (i1)+50;
	*(i1*)(intptr_t)(ws+3496) = v8289;
	i8 v8290 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8290;
	i8 v8291 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8291)();

}
	void f288_ConditionalLt(void);
	void f300_yy_destructor(void);

// reduce_29 workspace at ws+3384 length ws+8
void f338_reduce_29(void) {

	i8 v8292 = (i8)(intptr_t)(ws+3320);
	i8 v8293 = *(i8*)(intptr_t)v8292;
	*(i8*)(intptr_t)(ws+3392) = v8293;
	i8 v8294 = (i8)(intptr_t)(ws+3304);
	i8 v8295 = *(i8*)(intptr_t)v8294;
	*(i8*)(intptr_t)(ws+3400) = v8295;
	i1 v8296 = (i1)+1;
	*(i1*)(intptr_t)(ws+3408) = v8296;
	i8 v8297 = (i8)(intptr_t)(f288_ConditionalLt);

	((void(*)(void))(intptr_t)v8297)();

	i8 v8298 = *(i8*)(intptr_t)(ws+3416);
	i8 v8299 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8299 = v8298;

	i8 v8300 = (i8)(intptr_t)(ws+3384);
	i8 v8301 = *(i8*)(intptr_t)v8300;
	i8 v8302 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8302 = v8301;

	i1 v8303 = (i1)+53;
	*(i1*)(intptr_t)(ws+3496) = v8303;
	i8 v8304 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8304;
	i8 v8305 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8305)();

}
	void f288_ConditionalLt(void);
	void f300_yy_destructor(void);

// reduce_30 workspace at ws+3384 length ws+8
void f339_reduce_30(void) {

	i8 v8306 = (i8)(intptr_t)(ws+3304);
	i8 v8307 = *(i8*)(intptr_t)v8306;
	*(i8*)(intptr_t)(ws+3392) = v8307;
	i8 v8308 = (i8)(intptr_t)(ws+3320);
	i8 v8309 = *(i8*)(intptr_t)v8308;
	*(i8*)(intptr_t)(ws+3400) = v8309;
	i1 v8310 = (i1)+0;
	*(i1*)(intptr_t)(ws+3408) = v8310;
	i8 v8311 = (i8)(intptr_t)(f288_ConditionalLt);

	((void(*)(void))(intptr_t)v8311)();

	i8 v8312 = *(i8*)(intptr_t)(ws+3416);
	i8 v8313 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8313 = v8312;

	i8 v8314 = (i8)(intptr_t)(ws+3384);
	i8 v8315 = *(i8*)(intptr_t)v8314;
	i8 v8316 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8316 = v8315;

	i1 v8317 = (i1)+52;
	*(i1*)(intptr_t)(ws+3496) = v8317;
	i8 v8318 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8318;
	i8 v8319 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8319)();

}
	void f288_ConditionalLt(void);
	void f300_yy_destructor(void);

// reduce_31 workspace at ws+3384 length ws+8
void f340_reduce_31(void) {

	i8 v8320 = (i8)(intptr_t)(ws+3304);
	i8 v8321 = *(i8*)(intptr_t)v8320;
	*(i8*)(intptr_t)(ws+3392) = v8321;
	i8 v8322 = (i8)(intptr_t)(ws+3320);
	i8 v8323 = *(i8*)(intptr_t)v8322;
	*(i8*)(intptr_t)(ws+3400) = v8323;
	i1 v8324 = (i1)+1;
	*(i1*)(intptr_t)(ws+3408) = v8324;
	i8 v8325 = (i8)(intptr_t)(f288_ConditionalLt);

	((void(*)(void))(intptr_t)v8325)();

	i8 v8326 = *(i8*)(intptr_t)(ws+3416);
	i8 v8327 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8327 = v8326;

	i8 v8328 = (i8)(intptr_t)(ws+3384);
	i8 v8329 = *(i8*)(intptr_t)v8328;
	i8 v8330 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8330 = v8329;

	i1 v8331 = (i1)+51;
	*(i1*)(intptr_t)(ws+3496) = v8331;
	i8 v8332 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8332;
	i8 v8333 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8333)();

}
	void f120_MidConstant(void);

// reduce_32 workspace at ws+3384 length ws+8
void f341_reduce_32(void) {

	i8 v8334 = (i8)(intptr_t)(ws+3304);
	i4 v8335 = *(i4*)(intptr_t)v8334;
	*(i4*)(intptr_t)(ws+3592) = v8335;
	i8 v8336 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v8336)();

	i8 v8337 = *(i8*)(intptr_t)(ws+3600);
	i8 v8338 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8338 = v8337;

	i8 v8339 = (i8)(intptr_t)(ws+3384);
	i8 v8340 = *(i8*)(intptr_t)v8339;
	i8 v8341 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8341 = v8340;

}
	void f300_yy_destructor(void);

// reduce_33 workspace at ws+3384 length ws+0
void f342_reduce_33(void) {

	i8 v8342 = (i8)(intptr_t)(ws+3312);
	i8 v8343 = *(i8*)(intptr_t)v8342;
	i8 v8344 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8344 = v8343;

	i1 v8345 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v8345;
	i8 v8346 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8346;
	i8 v8347 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8347)();

}

// reduce_34 workspace at ws+3384 length ws+0
void f343_reduce_34(void) {

	i8 v8348 = (i8)(intptr_t)(ws+3304);
	i8 v8349 = *(i8*)(intptr_t)v8348;
	i8 v8350 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8350 = v8349;

}
	void f275_Expr1Simple(void);

// reduce_35 workspace at ws+3384 length ws+8
void f344_reduce_35(void) {

	i1 v8351 = (i1)+111;
	*(i1*)(intptr_t)(ws+3392) = v8351;
	i8 v8352 = (i8)(intptr_t)(ws+3304);
	i8 v8353 = *(i8*)(intptr_t)v8352;
	*(i8*)(intptr_t)(ws+3400) = v8353;
	i8 v8354 = (i8)(intptr_t)(f275_Expr1Simple);

	((void(*)(void))(intptr_t)v8354)();

	i8 v8355 = *(i8*)(intptr_t)(ws+3408);
	i8 v8356 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8356 = v8355;

	i8 v8357 = (i8)(intptr_t)(ws+3384);
	i8 v8358 = *(i8*)(intptr_t)v8357;
	i8 v8359 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8359 = v8358;

}
	void f275_Expr1Simple(void);

// reduce_36 workspace at ws+3384 length ws+8
void f345_reduce_36(void) {

	i1 v8360 = (i1)+106;
	*(i1*)(intptr_t)(ws+3392) = v8360;
	i8 v8361 = (i8)(intptr_t)(ws+3304);
	i8 v8362 = *(i8*)(intptr_t)v8361;
	*(i8*)(intptr_t)(ws+3400) = v8362;
	i8 v8363 = (i8)(intptr_t)(f275_Expr1Simple);

	((void(*)(void))(intptr_t)v8363)();

	i8 v8364 = *(i8*)(intptr_t)(ws+3408);
	i8 v8365 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8365 = v8364;

	i8 v8366 = (i8)(intptr_t)(ws+3384);
	i8 v8367 = *(i8*)(intptr_t)v8366;
	i8 v8368 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8368 = v8367;

}
	void f276_ExprAdd(void);
	void f300_yy_destructor(void);

// reduce_37 workspace at ws+3384 length ws+8
void f346_reduce_37(void) {

	i8 v8369 = (i8)(intptr_t)(ws+3320);
	i8 v8370 = *(i8*)(intptr_t)v8369;
	*(i8*)(intptr_t)(ws+3392) = v8370;
	i8 v8371 = (i8)(intptr_t)(ws+3304);
	i8 v8372 = *(i8*)(intptr_t)v8371;
	*(i8*)(intptr_t)(ws+3400) = v8372;
	i8 v8373 = (i8)(intptr_t)(f276_ExprAdd);

	((void(*)(void))(intptr_t)v8373)();

	i8 v8374 = *(i8*)(intptr_t)(ws+3408);
	i8 v8375 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8375 = v8374;

	i8 v8376 = (i8)(intptr_t)(ws+3384);
	i8 v8377 = *(i8*)(intptr_t)v8376;
	i8 v8378 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8378 = v8377;

	i1 v8379 = (i1)+19;
	*(i1*)(intptr_t)(ws+3496) = v8379;
	i8 v8380 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8380;
	i8 v8381 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8381)();

}
	void f278_ExprSub(void);
	void f300_yy_destructor(void);

// reduce_38 workspace at ws+3384 length ws+8
void f347_reduce_38(void) {

	i8 v8382 = (i8)(intptr_t)(ws+3320);
	i8 v8383 = *(i8*)(intptr_t)v8382;
	*(i8*)(intptr_t)(ws+3392) = v8383;
	i8 v8384 = (i8)(intptr_t)(ws+3304);
	i8 v8385 = *(i8*)(intptr_t)v8384;
	*(i8*)(intptr_t)(ws+3400) = v8385;
	i8 v8386 = (i8)(intptr_t)(f278_ExprSub);

	((void(*)(void))(intptr_t)v8386)();

	i8 v8387 = *(i8*)(intptr_t)(ws+3408);
	i8 v8388 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8388 = v8387;

	i8 v8389 = (i8)(intptr_t)(ws+3384);
	i8 v8390 = *(i8*)(intptr_t)v8389;
	i8 v8391 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8391 = v8390;

	i1 v8392 = (i1)+14;
	*(i1*)(intptr_t)(ws+3496) = v8392;
	i8 v8393 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8393;
	i8 v8394 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8394)();

}
	void f280_Expr2Simple(void);
	void f300_yy_destructor(void);

// reduce_39 workspace at ws+3384 length ws+8
void f348_reduce_39(void) {

	i1 v8395 = (i1)+161;
	*(i1*)(intptr_t)(ws+3392) = v8395;
	i1 v8396 = (i1)+161;
	*(i1*)(intptr_t)(ws+3393) = v8396;
	i8 v8397 = (i8)(intptr_t)(ws+3320);
	i8 v8398 = *(i8*)(intptr_t)v8397;
	*(i8*)(intptr_t)(ws+3400) = v8398;
	i8 v8399 = (i8)(intptr_t)(ws+3304);
	i8 v8400 = *(i8*)(intptr_t)v8399;
	*(i8*)(intptr_t)(ws+3408) = v8400;
	i8 v8401 = (i8)(intptr_t)(f280_Expr2Simple);

	((void(*)(void))(intptr_t)v8401)();

	i8 v8402 = *(i8*)(intptr_t)(ws+3416);
	i8 v8403 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8403 = v8402;

	i8 v8404 = (i8)(intptr_t)(ws+3384);
	i8 v8405 = *(i8*)(intptr_t)v8404;
	i8 v8406 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8406 = v8405;

	i1 v8407 = (i1)+24;
	*(i1*)(intptr_t)(ws+3496) = v8407;
	i8 v8408 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8408;
	i8 v8409 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8409)();

}
	void f280_Expr2Simple(void);
	void f300_yy_destructor(void);

// reduce_40 workspace at ws+3384 length ws+8
void f349_reduce_40(void) {

	i1 v8410 = (i1)+141;
	*(i1*)(intptr_t)(ws+3392) = v8410;
	i1 v8411 = (i1)+136;
	*(i1*)(intptr_t)(ws+3393) = v8411;
	i8 v8412 = (i8)(intptr_t)(ws+3320);
	i8 v8413 = *(i8*)(intptr_t)v8412;
	*(i8*)(intptr_t)(ws+3400) = v8413;
	i8 v8414 = (i8)(intptr_t)(ws+3304);
	i8 v8415 = *(i8*)(intptr_t)v8414;
	*(i8*)(intptr_t)(ws+3408) = v8415;
	i8 v8416 = (i8)(intptr_t)(f280_Expr2Simple);

	((void(*)(void))(intptr_t)v8416)();

	i8 v8417 = *(i8*)(intptr_t)(ws+3416);
	i8 v8418 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8418 = v8417;

	i8 v8419 = (i8)(intptr_t)(ws+3384);
	i8 v8420 = *(i8*)(intptr_t)v8419;
	i8 v8421 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8421 = v8420;

	i1 v8422 = (i1)+23;
	*(i1*)(intptr_t)(ws+3496) = v8422;
	i8 v8423 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8423;
	i8 v8424 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8424)();

}
	void f280_Expr2Simple(void);
	void f300_yy_destructor(void);

// reduce_41 workspace at ws+3384 length ws+8
void f350_reduce_41(void) {

	i1 v8425 = (i1)+151;
	*(i1*)(intptr_t)(ws+3392) = v8425;
	i1 v8426 = (i1)+146;
	*(i1*)(intptr_t)(ws+3393) = v8426;
	i8 v8427 = (i8)(intptr_t)(ws+3320);
	i8 v8428 = *(i8*)(intptr_t)v8427;
	*(i8*)(intptr_t)(ws+3400) = v8428;
	i8 v8429 = (i8)(intptr_t)(ws+3304);
	i8 v8430 = *(i8*)(intptr_t)v8429;
	*(i8*)(intptr_t)(ws+3408) = v8430;
	i8 v8431 = (i8)(intptr_t)(f280_Expr2Simple);

	((void(*)(void))(intptr_t)v8431)();

	i8 v8432 = *(i8*)(intptr_t)(ws+3416);
	i8 v8433 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8433 = v8432;

	i8 v8434 = (i8)(intptr_t)(ws+3384);
	i8 v8435 = *(i8*)(intptr_t)v8434;
	i8 v8436 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8436 = v8435;

	i1 v8437 = (i1)+18;
	*(i1*)(intptr_t)(ws+3496) = v8437;
	i8 v8438 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8438;
	i8 v8439 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8439)();

}
	void f280_Expr2Simple(void);
	void f300_yy_destructor(void);

// reduce_42 workspace at ws+3384 length ws+8
void f351_reduce_42(void) {

	i1 v8440 = (i1)+176;
	*(i1*)(intptr_t)(ws+3392) = v8440;
	i1 v8441 = (i1)+176;
	*(i1*)(intptr_t)(ws+3393) = v8441;
	i8 v8442 = (i8)(intptr_t)(ws+3320);
	i8 v8443 = *(i8*)(intptr_t)v8442;
	*(i8*)(intptr_t)(ws+3400) = v8443;
	i8 v8444 = (i8)(intptr_t)(ws+3304);
	i8 v8445 = *(i8*)(intptr_t)v8444;
	*(i8*)(intptr_t)(ws+3408) = v8445;
	i8 v8446 = (i8)(intptr_t)(f280_Expr2Simple);

	((void(*)(void))(intptr_t)v8446)();

	i8 v8447 = *(i8*)(intptr_t)(ws+3416);
	i8 v8448 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8448 = v8447;

	i8 v8449 = (i8)(intptr_t)(ws+3384);
	i8 v8450 = *(i8*)(intptr_t)v8449;
	i8 v8451 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8451 = v8450;

	i1 v8452 = (i1)+49;
	*(i1*)(intptr_t)(ws+3496) = v8452;
	i8 v8453 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8453;
	i8 v8454 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8454)();

}
	void f280_Expr2Simple(void);
	void f300_yy_destructor(void);

// reduce_43 workspace at ws+3384 length ws+8
void f352_reduce_43(void) {

	i1 v8455 = (i1)+166;
	*(i1*)(intptr_t)(ws+3392) = v8455;
	i1 v8456 = (i1)+166;
	*(i1*)(intptr_t)(ws+3393) = v8456;
	i8 v8457 = (i8)(intptr_t)(ws+3320);
	i8 v8458 = *(i8*)(intptr_t)v8457;
	*(i8*)(intptr_t)(ws+3400) = v8458;
	i8 v8459 = (i8)(intptr_t)(ws+3304);
	i8 v8460 = *(i8*)(intptr_t)v8459;
	*(i8*)(intptr_t)(ws+3408) = v8460;
	i8 v8461 = (i8)(intptr_t)(f280_Expr2Simple);

	((void(*)(void))(intptr_t)v8461)();

	i8 v8462 = *(i8*)(intptr_t)(ws+3416);
	i8 v8463 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8463 = v8462;

	i8 v8464 = (i8)(intptr_t)(ws+3384);
	i8 v8465 = *(i8*)(intptr_t)v8464;
	i8 v8466 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8466 = v8465;

	i1 v8467 = (i1)+59;
	*(i1*)(intptr_t)(ws+3496) = v8467;
	i8 v8468 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8468;
	i8 v8469 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8469)();

}
	void f280_Expr2Simple(void);
	void f300_yy_destructor(void);

// reduce_44 workspace at ws+3384 length ws+8
void f353_reduce_44(void) {

	i1 v8470 = (i1)+171;
	*(i1*)(intptr_t)(ws+3392) = v8470;
	i1 v8471 = (i1)+171;
	*(i1*)(intptr_t)(ws+3393) = v8471;
	i8 v8472 = (i8)(intptr_t)(ws+3320);
	i8 v8473 = *(i8*)(intptr_t)v8472;
	*(i8*)(intptr_t)(ws+3400) = v8473;
	i8 v8474 = (i8)(intptr_t)(ws+3304);
	i8 v8475 = *(i8*)(intptr_t)v8474;
	*(i8*)(intptr_t)(ws+3408) = v8475;
	i8 v8476 = (i8)(intptr_t)(f280_Expr2Simple);

	((void(*)(void))(intptr_t)v8476)();

	i8 v8477 = *(i8*)(intptr_t)(ws+3416);
	i8 v8478 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8478 = v8477;

	i8 v8479 = (i8)(intptr_t)(ws+3384);
	i8 v8480 = *(i8*)(intptr_t)v8479;
	i8 v8481 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8481 = v8480;

	i1 v8482 = (i1)+48;
	*(i1*)(intptr_t)(ws+3496) = v8482;
	i8 v8483 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8483;
	i8 v8484 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8484)();

}
	void f283_ExprShift(void);
	void f300_yy_destructor(void);

// reduce_45 workspace at ws+3384 length ws+8
void f354_reduce_45(void) {

	i1 v8485 = (i1)+116;
	*(i1*)(intptr_t)(ws+3392) = v8485;
	i1 v8486 = (i1)+116;
	*(i1*)(intptr_t)(ws+3393) = v8486;
	i8 v8487 = (i8)(intptr_t)(ws+3320);
	i8 v8488 = *(i8*)(intptr_t)v8487;
	*(i8*)(intptr_t)(ws+3400) = v8488;
	i8 v8489 = (i8)(intptr_t)(ws+3304);
	i8 v8490 = *(i8*)(intptr_t)v8489;
	*(i8*)(intptr_t)(ws+3408) = v8490;
	i8 v8491 = (i8)(intptr_t)(f283_ExprShift);

	((void(*)(void))(intptr_t)v8491)();

	i8 v8492 = *(i8*)(intptr_t)(ws+3416);
	i8 v8493 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8493 = v8492;

	i8 v8494 = (i8)(intptr_t)(ws+3384);
	i8 v8495 = *(i8*)(intptr_t)v8494;
	i8 v8496 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8496 = v8495;

	i1 v8497 = (i1)+56;
	*(i1*)(intptr_t)(ws+3496) = v8497;
	i8 v8498 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8498;
	i8 v8499 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8499)();

}
	void f283_ExprShift(void);
	void f300_yy_destructor(void);

// reduce_46 workspace at ws+3384 length ws+8
void f355_reduce_46(void) {

	i1 v8500 = (i1)+126;
	*(i1*)(intptr_t)(ws+3392) = v8500;
	i1 v8501 = (i1)+121;
	*(i1*)(intptr_t)(ws+3393) = v8501;
	i8 v8502 = (i8)(intptr_t)(ws+3320);
	i8 v8503 = *(i8*)(intptr_t)v8502;
	*(i8*)(intptr_t)(ws+3400) = v8503;
	i8 v8504 = (i8)(intptr_t)(ws+3304);
	i8 v8505 = *(i8*)(intptr_t)v8504;
	*(i8*)(intptr_t)(ws+3408) = v8505;
	i8 v8506 = (i8)(intptr_t)(f283_ExprShift);

	((void(*)(void))(intptr_t)v8506)();

	i8 v8507 = *(i8*)(intptr_t)(ws+3416);
	i8 v8508 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8508 = v8507;

	i8 v8509 = (i8)(intptr_t)(ws+3384);
	i8 v8510 = *(i8*)(intptr_t)v8509;
	i8 v8511 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8511 = v8510;

	i1 v8512 = (i1)+57;
	*(i1*)(intptr_t)(ws+3496) = v8512;
	i8 v8513 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8513;
	i8 v8514 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8514)();

}
	void f222_CheckNotPartialType(void);
	void f68_IsPtr(void);
	void f68_IsPtr(void);
const i1 c02_s016c[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f76_SimpleError(void);
	void f229_IsSNum(void);
	void f173_MidCCast(void);
	void f300_yy_destructor(void);

// reduce_47 workspace at ws+3384 length ws+16
void f356_reduce_47(void) {

	i8 v8515 = (i8)(intptr_t)(ws+3304);
	i8 v8516 = *(i8*)(intptr_t)v8515;
	*(i8*)(intptr_t)(ws+3520) = v8516;
	i8 v8517 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v8517)();

	i8 v8518 = (i8)(intptr_t)(ws+3320);
	i8 v8519 = *(i8*)(intptr_t)v8518;
	i8 v8520 = v8519+(+48);
	i1 v8521 = *(i1*)(intptr_t)v8520;
	i1 v8522 = (i1)+40;
	if (v8521==v8522) goto c02_062f; else goto c02_0630;

c02_0630:;

	i8 v8523 = (i8)(intptr_t)(ws+3320);
	i8 v8524 = *(i8*)(intptr_t)v8523;
	i8 v8525 = v8524+(+24);
	i8 v8526 = *(i8*)(intptr_t)v8525;
	i8 v8527 = v8526+(+48);
	i2 v8528 = *(i2*)(intptr_t)v8527;
	i8 v8529 = (i8)(intptr_t)(ws+3304);
	i8 v8530 = *(i8*)(intptr_t)v8529;
	i8 v8531 = v8530+(+48);
	i2 v8532 = *(i2*)(intptr_t)v8531;
	if (v8528==v8532) goto c02_062f; else goto c02_062e;

c02_062e:;

	i8 v8533 = (i8)(intptr_t)(ws+3320);
	i8 v8534 = *(i8*)(intptr_t)v8533;
	i8 v8535 = v8534+(+24);
	i8 v8536 = *(i8*)(intptr_t)v8535;
	*(i8*)(intptr_t)(ws+3560) = v8536;
	i8 v8537 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8537)();

	i1 v8538 = *(i1*)(intptr_t)(ws+3568);
	i8 v8539 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8539 = v8538;

	i8 v8540 = (i8)(intptr_t)(ws+3304);
	i8 v8541 = *(i8*)(intptr_t)v8540;
	*(i8*)(intptr_t)(ws+3560) = v8541;
	i8 v8542 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8542)();

	i1 v8543 = *(i1*)(intptr_t)(ws+3568);
	i8 v8544 = (i8)(intptr_t)(ws+3385);
	*(i1*)(intptr_t)v8544 = v8543;

	i8 v8545 = (i8)(intptr_t)(ws+3384);
	i1 v8546 = *(i1*)(intptr_t)v8545;
	i1 v8547 = (i1)+0;
	if (v8546==v8547) goto c02_0638; else goto c02_0636;

c02_0638:;

	i8 v8548 = (i8)(intptr_t)(ws+3385);
	i1 v8549 = *(i1*)(intptr_t)v8548;
	i1 v8550 = (i1)+0;
	if (v8549==v8550) goto c02_0637; else goto c02_0636;

c02_0636:;

	i8 v8551 = (i8)(intptr_t)c02_s016c;
	*(i8*)(intptr_t)(ws+3648) = v8551;
	i8 v8552 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8552)();

c02_0637:;

c02_0631:;

	i8 v8553 = (i8)(intptr_t)(ws+3320);
	i8 v8554 = *(i8*)(intptr_t)v8553;
	i8 v8555 = v8554+(+24);
	i8 v8556 = *(i8*)(intptr_t)v8555;
	*(i8*)(intptr_t)(ws+3456) = v8556;
	i8 v8557 = (i8)(intptr_t)(f229_IsSNum);

	((void(*)(void))(intptr_t)v8557)();

	i1 v8558 = *(i1*)(intptr_t)(ws+3464);
	i8 v8559 = (i8)(intptr_t)(ws+3386);
	*(i1*)(intptr_t)v8559 = v8558;

	i8 v8560 = (i8)(intptr_t)(ws+3304);
	i8 v8561 = *(i8*)(intptr_t)v8560;
	i8 v8562 = v8561+(+48);
	i2 v8563 = *(i2*)(intptr_t)v8562;
	i1 v8564 = v8563;
	*(i1*)(intptr_t)(ws+3496) = v8564;
	i8 v8565 = (i8)(intptr_t)(ws+3320);
	i8 v8566 = *(i8*)(intptr_t)v8565;
	*(i8*)(intptr_t)(ws+3504) = v8566;
	i8 v8567 = (i8)(intptr_t)(ws+3386);
	i1 v8568 = *(i1*)(intptr_t)v8567;
	*(i1*)(intptr_t)(ws+3512) = v8568;
	i8 v8569 = (i8)(intptr_t)(f173_MidCCast);

	((void(*)(void))(intptr_t)v8569)();

	i8 v8570 = *(i8*)(intptr_t)(ws+3520);
	i8 v8571 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8571 = v8570;

	i8 v8572 = (i8)(intptr_t)(ws+3392);
	i8 v8573 = *(i8*)(intptr_t)v8572;
	i8 v8574 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8574 = v8573;

	goto c02_0629;

c02_062f:;

	i8 v8575 = (i8)(intptr_t)(ws+3320);
	i8 v8576 = *(i8*)(intptr_t)v8575;
	i8 v8577 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8577 = v8576;

c02_0629:;

	i8 v8578 = (i8)(intptr_t)(ws+3304);
	i8 v8579 = *(i8*)(intptr_t)v8578;
	i8 v8580 = (i8)(intptr_t)(ws+3296);
	i8 v8581 = *(i8*)(intptr_t)v8580;
	i8 v8582 = v8581+(+24);
	*(i8*)(intptr_t)v8582 = v8579;

	i1 v8583 = (i1)+58;
	*(i1*)(intptr_t)(ws+3496) = v8583;
	i8 v8584 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8584;
	i8 v8585 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8585)();

}
	void f233_UndoLValue(void);
	void f230_IsScalar(void);
const i1 c02_s016d[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f76_SimpleError(void);

// reduce_48 workspace at ws+3384 length ws+17
void f357_reduce_48(void) {

	i8 v8586 = (i8)(intptr_t)(ws+3304);
	i8 v8587 = *(i8*)(intptr_t)v8586;
	*(i8*)(intptr_t)(ws+3432) = v8587;
	i8 v8588 = (i8)(intptr_t)(f233_UndoLValue);

	((void(*)(void))(intptr_t)v8588)();

	i8 v8589 = *(i8*)(intptr_t)(ws+3440);
	i8 v8590 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8590 = v8589;

	i8 v8591 = (i8)(intptr_t)(ws+3384);
	i8 v8592 = *(i8*)(intptr_t)v8591;
	i8 v8593 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8593 = v8592;

	i8 v8594 = (i8)(intptr_t)(ws+3296);
	i8 v8595 = *(i8*)(intptr_t)v8594;
	i8 v8596 = v8595+(+48);
	i1 v8597 = *(i1*)(intptr_t)v8596;
	i1 v8598 = (i1)+42;
	if (v8597==v8598) goto c02_063c; else goto c02_063d;

c02_063c:;

	i8 v8599 = (i8)(intptr_t)(ws+3296);
	i8 v8600 = *(i8*)(intptr_t)v8599;
	i8 v8601 = *(i8*)(intptr_t)v8600;
	i8 v8602 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8602 = v8601;

	i8 v8603 = (i8)(intptr_t)(ws+3392);
	i8 v8604 = *(i8*)(intptr_t)v8603;
	i8 v8605 = *(i8*)(intptr_t)v8604;
	i8 v8606 = *(i8*)(intptr_t)v8605;
	*(i8*)(intptr_t)(ws+3544) = v8606;
	i8 v8607 = (i8)(intptr_t)(f230_IsScalar);

	((void(*)(void))(intptr_t)v8607)();

	i1 v8608 = *(i1*)(intptr_t)(ws+3552);
	i8 v8609 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v8609 = v8608;

	i8 v8610 = (i8)(intptr_t)(ws+3400);
	i1 v8611 = *(i1*)(intptr_t)v8610;
	i1 v8612 = (i1)+0;
	if (v8611==v8612) goto c02_0642; else goto c02_0641;

c02_0641:;

	i8 v8613 = (i8)(intptr_t)c02_s016d;
	*(i8*)(intptr_t)(ws+3648) = v8613;
	i8 v8614 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8614)();

c02_0642:;

c02_063e:;

c02_063d:;

c02_0639:;

}
	void f233_UndoLValue(void);
	void f300_yy_destructor(void);

// reduce_49 workspace at ws+3384 length ws+8
void f358_reduce_49(void) {

	i8 v8615 = (i8)(intptr_t)(ws+3304);
	i8 v8616 = *(i8*)(intptr_t)v8615;
	*(i8*)(intptr_t)(ws+3432) = v8616;
	i8 v8617 = (i8)(intptr_t)(f233_UndoLValue);

	((void(*)(void))(intptr_t)v8617)();

	i8 v8618 = *(i8*)(intptr_t)(ws+3440);
	i8 v8619 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8619 = v8618;

	i8 v8620 = (i8)(intptr_t)(ws+3384);
	i8 v8621 = *(i8*)(intptr_t)v8620;
	i8 v8622 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8622 = v8621;

	i1 v8623 = (i1)+59;
	*(i1*)(intptr_t)(ws+3496) = v8623;
	i8 v8624 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v8624;
	i8 v8625 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8625)();

}
	void f68_IsPtr(void);
	void f289_parser_i_bad_next_prev(void);
	void f120_MidConstant(void);
	void f172_MidC2Op(void);

// reduce_50 workspace at ws+3384 length ws+24
void f359_reduce_50(void) {

	i8 v8626 = (i8)(intptr_t)(ws+3304);
	i8 v8627 = *(i8*)(intptr_t)v8626;
	i8 v8628 = v8627+(+24);
	i8 v8629 = *(i8*)(intptr_t)v8628;
	*(i8*)(intptr_t)(ws+3560) = v8629;
	i8 v8630 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8630)();

	i1 v8631 = *(i1*)(intptr_t)(ws+3568);
	i8 v8632 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8632 = v8631;

	i8 v8633 = (i8)(intptr_t)(ws+3384);
	i1 v8634 = *(i1*)(intptr_t)v8633;
	i1 v8635 = (i1)+0;
	if (v8634==v8635) goto c02_0646; else goto c02_0647;

c02_0646:;

	i8 v8636 = (i8)(intptr_t)(f289_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8636)();

c02_0647:;

c02_0643:;

	i8 v8637 = (i8)(intptr_t)(ws+3304);
	i8 v8638 = *(i8*)(intptr_t)v8637;
	i8 v8639 = v8638+(+24);
	i8 v8640 = *(i8*)(intptr_t)v8639;
	i8 v8641 = *(i8*)(intptr_t)v8640;
	i8 v8642 = v8641+(+50);
	i2 v8643 = *(i2*)(intptr_t)v8642;
	i4 v8644 = v8643;
	*(i4*)(intptr_t)(ws+3592) = v8644;
	i8 v8645 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v8645)();

	i8 v8646 = *(i8*)(intptr_t)(ws+3600);
	i8 v8647 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8647 = v8646;

	i1 v8648 = (i1)+156;
	*(i1*)(intptr_t)(ws+3496) = v8648;
	i8 v8649 = (i8)(intptr_t)(ws+1528);
	i8 v8650 = *(i8*)(intptr_t)v8649;
	i8 v8651 = v8650+(+48);
	i2 v8652 = *(i2*)(intptr_t)v8651;
	i1 v8653 = v8652;
	*(i1*)(intptr_t)(ws+3497) = v8653;
	i8 v8654 = (i8)(intptr_t)(ws+3304);
	i8 v8655 = *(i8*)(intptr_t)v8654;
	*(i8*)(intptr_t)(ws+3504) = v8655;
	i8 v8656 = (i8)(intptr_t)(ws+3392);
	i8 v8657 = *(i8*)(intptr_t)v8656;
	*(i8*)(intptr_t)(ws+3512) = v8657;
	i8 v8658 = (i8)(intptr_t)(f172_MidC2Op);

	((void(*)(void))(intptr_t)v8658)();

	i8 v8659 = *(i8*)(intptr_t)(ws+3520);
	i8 v8660 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8660 = v8659;

	i8 v8661 = (i8)(intptr_t)(ws+3400);
	i8 v8662 = *(i8*)(intptr_t)v8661;
	i8 v8663 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8663 = v8662;

	i8 v8664 = (i8)(intptr_t)(ws+3304);
	i8 v8665 = *(i8*)(intptr_t)v8664;
	i8 v8666 = v8665+(+24);
	i8 v8667 = *(i8*)(intptr_t)v8666;
	i8 v8668 = (i8)(intptr_t)(ws+3296);
	i8 v8669 = *(i8*)(intptr_t)v8668;
	i8 v8670 = v8669+(+24);
	*(i8*)(intptr_t)v8670 = v8667;

}
	void f68_IsPtr(void);
	void f289_parser_i_bad_next_prev(void);
	void f120_MidConstant(void);
	void f172_MidC2Op(void);

// reduce_51 workspace at ws+3384 length ws+24
void f360_reduce_51(void) {

	i8 v8671 = (i8)(intptr_t)(ws+3304);
	i8 v8672 = *(i8*)(intptr_t)v8671;
	i8 v8673 = v8672+(+24);
	i8 v8674 = *(i8*)(intptr_t)v8673;
	*(i8*)(intptr_t)(ws+3560) = v8674;
	i8 v8675 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8675)();

	i1 v8676 = *(i1*)(intptr_t)(ws+3568);
	i8 v8677 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8677 = v8676;

	i8 v8678 = (i8)(intptr_t)(ws+3384);
	i1 v8679 = *(i1*)(intptr_t)v8678;
	i1 v8680 = (i1)+0;
	if (v8679==v8680) goto c02_064b; else goto c02_064c;

c02_064b:;

	i8 v8681 = (i8)(intptr_t)(f289_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8681)();

c02_064c:;

c02_0648:;

	i8 v8682 = (i8)(intptr_t)(ws+3304);
	i8 v8683 = *(i8*)(intptr_t)v8682;
	i8 v8684 = v8683+(+24);
	i8 v8685 = *(i8*)(intptr_t)v8684;
	i8 v8686 = *(i8*)(intptr_t)v8685;
	i8 v8687 = v8686+(+50);
	i2 v8688 = *(i2*)(intptr_t)v8687;
	i4 v8689 = v8688;
	*(i4*)(intptr_t)(ws+3592) = v8689;
	i8 v8690 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v8690)();

	i8 v8691 = *(i8*)(intptr_t)(ws+3600);
	i8 v8692 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8692 = v8691;

	i1 v8693 = (i1)+131;
	*(i1*)(intptr_t)(ws+3496) = v8693;
	i8 v8694 = (i8)(intptr_t)(ws+1528);
	i8 v8695 = *(i8*)(intptr_t)v8694;
	i8 v8696 = v8695+(+48);
	i2 v8697 = *(i2*)(intptr_t)v8696;
	i1 v8698 = v8697;
	*(i1*)(intptr_t)(ws+3497) = v8698;
	i8 v8699 = (i8)(intptr_t)(ws+3304);
	i8 v8700 = *(i8*)(intptr_t)v8699;
	*(i8*)(intptr_t)(ws+3504) = v8700;
	i8 v8701 = (i8)(intptr_t)(ws+3392);
	i8 v8702 = *(i8*)(intptr_t)v8701;
	*(i8*)(intptr_t)(ws+3512) = v8702;
	i8 v8703 = (i8)(intptr_t)(f172_MidC2Op);

	((void(*)(void))(intptr_t)v8703)();

	i8 v8704 = *(i8*)(intptr_t)(ws+3520);
	i8 v8705 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8705 = v8704;

	i8 v8706 = (i8)(intptr_t)(ws+3400);
	i8 v8707 = *(i8*)(intptr_t)v8706;
	i8 v8708 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8708 = v8707;

	i8 v8709 = (i8)(intptr_t)(ws+3304);
	i8 v8710 = *(i8*)(intptr_t)v8709;
	i8 v8711 = v8710+(+24);
	i8 v8712 = *(i8*)(intptr_t)v8711;
	i8 v8713 = (i8)(intptr_t)(ws+3296);
	i8 v8714 = *(i8*)(intptr_t)v8713;
	i8 v8715 = v8714+(+24);
	*(i8*)(intptr_t)v8715 = v8712;

}
	void f120_MidConstant(void);

// reduce_52 workspace at ws+3384 length ws+8
void f361_reduce_52(void) {

	i8 v8716 = (i8)(intptr_t)(ws+3304);
	i8 v8717 = *(i8*)(intptr_t)v8716;
	i8 v8718 = v8717+(+48);
	i2 v8719 = *(i2*)(intptr_t)v8718;
	i4 v8720 = v8719;
	*(i4*)(intptr_t)(ws+3592) = v8720;
	i8 v8721 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v8721)();

	i8 v8722 = *(i8*)(intptr_t)(ws+3600);
	i8 v8723 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8723 = v8722;

	i8 v8724 = (i8)(intptr_t)(ws+3384);
	i8 v8725 = *(i8*)(intptr_t)v8724;
	i8 v8726 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8726 = v8725;

}
	void f226_IsArray(void);
const i1 c02_s016e[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(void);
	void f120_MidConstant(void);

// reduce_53 workspace at ws+3384 length ws+16
void f362_reduce_53(void) {

	i8 v8727 = (i8)(intptr_t)(ws+3304);
	i8 v8728 = *(i8*)(intptr_t)v8727;
	*(i8*)(intptr_t)(ws+3496) = v8728;
	i8 v8729 = (i8)(intptr_t)(f226_IsArray);

	((void(*)(void))(intptr_t)v8729)();

	i1 v8730 = *(i1*)(intptr_t)(ws+3504);
	i8 v8731 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8731 = v8730;

	i8 v8732 = (i8)(intptr_t)(ws+3384);
	i1 v8733 = *(i1*)(intptr_t)v8732;
	i1 v8734 = (i1)+0;
	if (v8733==v8734) goto c02_0650; else goto c02_0651;

c02_0650:;

	i8 v8735 = (i8)(intptr_t)c02_s016e;
	*(i8*)(intptr_t)(ws+3648) = v8735;
	i8 v8736 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8736)();

c02_0651:;

c02_064d:;

	i8 v8737 = (i8)(intptr_t)(ws+3304);
	i8 v8738 = *(i8*)(intptr_t)v8737;
	i8 v8739 = v8738+(+8);
	i2 v8740 = *(i2*)(intptr_t)v8739;
	i4 v8741 = v8740;
	*(i4*)(intptr_t)(ws+3592) = v8741;
	i8 v8742 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v8742)();

	i8 v8743 = *(i8*)(intptr_t)(ws+3600);
	i8 v8744 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8744 = v8743;

	i8 v8745 = (i8)(intptr_t)(ws+3392);
	i8 v8746 = *(i8*)(intptr_t)v8745;
	i8 v8747 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8747 = v8746;

}
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s016f[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// not_a_value workspace at ws+3424 length ws+0
void f364_not_a_value(void) {

	i8 v8748 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8748)();

	i8 v8749 = (i8)(intptr_t)(ws+3304);
	i8 v8750 = *(i8*)(intptr_t)v8749;
	i8 v8751 = v8750+(+8);
	i8 v8752 = *(i8*)(intptr_t)v8751;
	*(i8*)(intptr_t)(ws+3696) = v8752;
	i8 v8753 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v8753)();

	i8 v8754 = (i8)(intptr_t)c02_s016f;
	*(i8*)(intptr_t)(ws+3696) = v8754;
	i8 v8755 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v8755)();

	i8 v8756 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8756)();

}
	void f120_MidConstant(void);
	void f131_MidAddress(void);
	void f261_MakePointerType(void);
	void f232_MakeLValue(void);
	void f135_MidSubref(void);
	void f364_not_a_value(void);
	void f364_not_a_value(void);

// reduce_54 workspace at ws+3384 length ws+40
void f363_reduce_54(void) {


	i8 v8757 = (i8)(intptr_t)(ws+3304);
	i8 v8758 = *(i8*)(intptr_t)v8757;
	i8 v8759 = v8758+(+32);
	i1 v8760 = *(i1*)(intptr_t)v8759;

	if (v8760 != +7) goto c02_0653;

	i8 v8761 = (i8)(intptr_t)(ws+3304);
	i8 v8762 = *(i8*)(intptr_t)v8761;
	i4 v8763 = *(i4*)(intptr_t)v8762;
	*(i4*)(intptr_t)(ws+3592) = v8763;
	i8 v8764 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v8764)();

	i8 v8765 = *(i8*)(intptr_t)(ws+3600);
	i8 v8766 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8766 = v8765;

	i8 v8767 = (i8)(intptr_t)(ws+3384);
	i8 v8768 = *(i8*)(intptr_t)v8767;
	i8 v8769 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8769 = v8768;

	goto c02_0652;

c02_0653:;

	if (v8760 != +28) goto c02_0654;

	i8 v8770 = (i8)(intptr_t)(ws+3304);
	i8 v8771 = *(i8*)(intptr_t)v8770;
	*(i8*)(intptr_t)(ws+3488) = v8771;
	i2 v8772 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v8772;
	i8 v8773 = (i8)(intptr_t)(f131_MidAddress);

	((void(*)(void))(intptr_t)v8773)();

	i8 v8774 = *(i8*)(intptr_t)(ws+3504);
	i8 v8775 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8775 = v8774;

	i8 v8776 = (i8)(intptr_t)(ws+3392);
	i8 v8777 = *(i8*)(intptr_t)v8776;
	i8 v8778 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8778 = v8777;

	i8 v8779 = (i8)(intptr_t)(ws+3304);
	i8 v8780 = *(i8*)(intptr_t)v8779;
	i8 v8781 = *(i8*)(intptr_t)v8780;
	i8 v8782 = *(i8*)(intptr_t)v8781;
	*(i8*)(intptr_t)(ws+3496) = v8782;
	i8 v8783 = (i8)(intptr_t)(f261_MakePointerType);

	((void(*)(void))(intptr_t)v8783)();

	i8 v8784 = *(i8*)(intptr_t)(ws+3504);
	i8 v8785 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8785 = v8784;

	i8 v8786 = (i8)(intptr_t)(ws+3400);
	i8 v8787 = *(i8*)(intptr_t)v8786;
	i8 v8788 = (i8)(intptr_t)(ws+3296);
	i8 v8789 = *(i8*)(intptr_t)v8788;
	i8 v8790 = v8789+(+24);
	*(i8*)(intptr_t)v8790 = v8787;

	i8 v8791 = (i8)(intptr_t)(ws+3296);
	i8 v8792 = *(i8*)(intptr_t)v8791;
	*(i8*)(intptr_t)(ws+3496) = v8792;
	i8 v8793 = (i8)(intptr_t)(f232_MakeLValue);

	((void(*)(void))(intptr_t)v8793)();

	i8 v8794 = *(i8*)(intptr_t)(ws+3504);
	i8 v8795 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8795 = v8794;

	i8 v8796 = (i8)(intptr_t)(ws+3408);
	i8 v8797 = *(i8*)(intptr_t)v8796;
	i8 v8798 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8798 = v8797;

	goto c02_0652;

c02_0654:;

	if (v8760 != +30) goto c02_0655;

	i8 v8799 = (i8)(intptr_t)(ws+3304);
	i8 v8800 = *(i8*)(intptr_t)v8799;
	i8 v8801 = *(i8*)(intptr_t)v8800;
	i8 v8802 = v8801+(+52);
	i1 v8803 = *(i1*)(intptr_t)v8802;
	i1 v8804 = (i1)+6;
	if (v8803==v8804) goto c02_0659; else goto c02_065a;

c02_0659:;

	i8 v8805 = (i8)(intptr_t)(ws+3304);
	i8 v8806 = *(i8*)(intptr_t)v8805;
	i8 v8807 = *(i8*)(intptr_t)v8806;
	i8 v8808 = *(i8*)(intptr_t)v8807;
	*(i8*)(intptr_t)(ws+3424) = v8808;
	i8 v8809 = (i8)(intptr_t)(f135_MidSubref);

	((void(*)(void))(intptr_t)v8809)();

	i8 v8810 = *(i8*)(intptr_t)(ws+3432);
	i8 v8811 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v8811 = v8810;

	i8 v8812 = (i8)(intptr_t)(ws+3416);
	i8 v8813 = *(i8*)(intptr_t)v8812;
	i8 v8814 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8814 = v8813;

	i8 v8815 = (i8)(intptr_t)(ws+3304);
	i8 v8816 = *(i8*)(intptr_t)v8815;
	i8 v8817 = *(i8*)(intptr_t)v8816;
	i8 v8818 = *(i8*)(intptr_t)v8817;
	i8 v8819 = v8818+(+48);
	i8 v8820 = *(i8*)(intptr_t)v8819;
	i8 v8821 = v8820+(+40);
	i8 v8822 = *(i8*)(intptr_t)v8821;
	i8 v8823 = (i8)(intptr_t)(ws+3296);
	i8 v8824 = *(i8*)(intptr_t)v8823;
	i8 v8825 = v8824+(+24);
	*(i8*)(intptr_t)v8825 = v8822;

	goto c02_0656;

c02_065a:;

	i8 v8826 = (i8)(intptr_t)(f364_not_a_value);

	((void(*)(void))(intptr_t)v8826)();

c02_0656:;

	goto c02_0652;

c02_0655:;

	i8 v8827 = (i8)(intptr_t)(f364_not_a_value);

	((void(*)(void))(intptr_t)v8827)();

c02_0652:;


}
	void f68_IsPtr(void);
const i1 c02_s0170[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(void);
	void f232_MakeLValue(void);
	void f300_yy_destructor(void);

// reduce_55 workspace at ws+3384 length ws+16
void f365_reduce_55(void) {

	i8 v8828 = (i8)(intptr_t)(ws+3312);
	i8 v8829 = *(i8*)(intptr_t)v8828;
	i8 v8830 = v8829+(+24);
	i8 v8831 = *(i8*)(intptr_t)v8830;
	*(i8*)(intptr_t)(ws+3560) = v8831;
	i8 v8832 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v8832)();

	i1 v8833 = *(i1*)(intptr_t)(ws+3568);
	i8 v8834 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8834 = v8833;

	i8 v8835 = (i8)(intptr_t)(ws+3384);
	i1 v8836 = *(i1*)(intptr_t)v8835;
	i1 v8837 = (i1)+0;
	if (v8836==v8837) goto c02_065e; else goto c02_065f;

c02_065e:;

	i8 v8838 = (i8)(intptr_t)c02_s0170;
	*(i8*)(intptr_t)(ws+3648) = v8838;
	i8 v8839 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8839)();

c02_065f:;

c02_065b:;

	i8 v8840 = (i8)(intptr_t)(ws+3312);
	i8 v8841 = *(i8*)(intptr_t)v8840;
	*(i8*)(intptr_t)(ws+3496) = v8841;
	i8 v8842 = (i8)(intptr_t)(f232_MakeLValue);

	((void(*)(void))(intptr_t)v8842)();

	i8 v8843 = *(i8*)(intptr_t)(ws+3504);
	i8 v8844 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8844 = v8843;

	i8 v8845 = (i8)(intptr_t)(ws+3392);
	i8 v8846 = *(i8*)(intptr_t)v8845;
	i8 v8847 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8847 = v8846;

	i1 v8848 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v8848;
	i8 v8849 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8849;
	i8 v8850 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8850)();

}
	void f235_MaybeUndoLValue(void);
	void f226_IsArray(void);
	void f74_StartError(void);
const i1 c02_s0171[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);
	void f269_CheckExpressionType(void);
	void f228_IsNum(void);
const i1 c02_s0172[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(void);
	void f173_MidCCast(void);
	void f120_MidConstant(void);
	void f172_MidC2Op(void);
	void f172_MidC2Op(void);
	void f261_MakePointerType(void);
	void f232_MakeLValue(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_56 workspace at ws+3384 length ws+112
void f366_reduce_56(void) {

	i8 v8851 = (i8)(intptr_t)(ws+3328);
	i8 v8852 = *(i8*)(intptr_t)v8851;
	i8 v8853 = v8852+(+24);
	i8 v8854 = *(i8*)(intptr_t)v8853;
	i8 v8855 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8855 = v8854;

	i8 v8856 = (i8)(intptr_t)(ws+3328);
	i8 v8857 = *(i8*)(intptr_t)v8856;
	*(i8*)(intptr_t)(ws+3496) = v8857;
	i8 v8858 = (i8)(intptr_t)(f235_MaybeUndoLValue);

	((void(*)(void))(intptr_t)v8858)();

	i8 v8859 = *(i8*)(intptr_t)(ws+3504);
	i8 v8860 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8860 = v8859;

	i8 v8861 = (i8)(intptr_t)(ws+3392);
	i8 v8862 = *(i8*)(intptr_t)v8861;
	i8 v8863 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8863 = v8862;

	i8 v8864 = (i8)(intptr_t)(ws+3384);
	i8 v8865 = *(i8*)(intptr_t)v8864;
	*(i8*)(intptr_t)(ws+3496) = v8865;
	i8 v8866 = (i8)(intptr_t)(f226_IsArray);

	((void(*)(void))(intptr_t)v8866)();

	i1 v8867 = *(i1*)(intptr_t)(ws+3504);
	i8 v8868 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v8868 = v8867;

	i8 v8869 = (i8)(intptr_t)(ws+3408);
	i1 v8870 = *(i1*)(intptr_t)v8869;
	i1 v8871 = (i1)+0;
	if (v8870==v8871) goto c02_0663; else goto c02_0664;

c02_0663:;

	i8 v8872 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8872)();

	i8 v8873 = (i8)(intptr_t)c02_s0171;
	*(i8*)(intptr_t)(ws+3696) = v8873;
	i8 v8874 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v8874)();

	i8 v8875 = (i8)(intptr_t)(ws+3384);
	i8 v8876 = *(i8*)(intptr_t)v8875;
	i8 v8877 = v8876+(+32);
	i8 v8878 = *(i8*)(intptr_t)v8877;
	i8 v8879 = v8878+(+8);
	i8 v8880 = *(i8*)(intptr_t)v8879;
	*(i8*)(intptr_t)(ws+3696) = v8880;
	i8 v8881 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v8881)();

	i8 v8882 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8882)();

c02_0664:;

c02_0660:;

	i8 v8883 = (i8)(intptr_t)(ws+3312);
	i8 v8884 = *(i8*)(intptr_t)v8883;
	*(i8*)(intptr_t)(ws+3496) = v8884;
	i8 v8885 = (i8)(intptr_t)(ws+3384);
	i8 v8886 = *(i8*)(intptr_t)v8885;
	i8 v8887 = v8886+(+16);
	i8 v8888 = *(i8*)(intptr_t)v8887;
	*(i8*)(intptr_t)(ws+3504) = v8888;
	i8 v8889 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(void))(intptr_t)v8889)();

	i8 v8890 = (i8)(intptr_t)(ws+3312);
	i8 v8891 = *(i8*)(intptr_t)v8890;
	i8 v8892 = v8891+(+24);
	i8 v8893 = *(i8*)(intptr_t)v8892;
	*(i8*)(intptr_t)(ws+3560) = v8893;
	i8 v8894 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v8894)();

	i1 v8895 = *(i1*)(intptr_t)(ws+3568);
	i8 v8896 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v8896 = v8895;

	i8 v8897 = (i8)(intptr_t)(ws+3409);
	i1 v8898 = *(i1*)(intptr_t)v8897;
	i1 v8899 = (i1)+0;
	if (v8898==v8899) goto c02_0668; else goto c02_0669;

c02_0668:;

	i8 v8900 = (i8)(intptr_t)c02_s0172;
	*(i8*)(intptr_t)(ws+3648) = v8900;
	i8 v8901 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v8901)();

c02_0669:;

c02_0665:;

	i8 v8902 = (i8)(intptr_t)(ws+3384);
	i8 v8903 = *(i8*)(intptr_t)v8902;
	i8 v8904 = *(i8*)(intptr_t)v8903;
	i8 v8905 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v8905 = v8904;

	i8 v8906 = (i8)(intptr_t)(ws+1528);
	i8 v8907 = *(i8*)(intptr_t)v8906;
	i8 v8908 = v8907+(+48);
	i2 v8909 = *(i2*)(intptr_t)v8908;
	i1 v8910 = v8909;
	i8 v8911 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v8911 = v8910;

	i8 v8912 = (i8)(intptr_t)(ws+1528);
	i8 v8913 = *(i8*)(intptr_t)v8912;
	i8 v8914 = v8913+(+48);
	i2 v8915 = *(i2*)(intptr_t)v8914;
	i1 v8916 = v8915;
	*(i1*)(intptr_t)(ws+3496) = v8916;
	i8 v8917 = (i8)(intptr_t)(ws+3312);
	i8 v8918 = *(i8*)(intptr_t)v8917;
	*(i8*)(intptr_t)(ws+3504) = v8918;
	i1 v8919 = (i1)+0;
	*(i1*)(intptr_t)(ws+3512) = v8919;
	i8 v8920 = (i8)(intptr_t)(f173_MidCCast);

	((void(*)(void))(intptr_t)v8920)();

	i8 v8921 = *(i8*)(intptr_t)(ws+3520);
	i8 v8922 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v8922 = v8921;

	i8 v8923 = (i8)(intptr_t)(ws+3416);
	i8 v8924 = *(i8*)(intptr_t)v8923;
	i8 v8925 = v8924+(+50);
	i2 v8926 = *(i2*)(intptr_t)v8925;
	i4 v8927 = v8926;
	*(i4*)(intptr_t)(ws+3592) = v8927;
	i8 v8928 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v8928)();

	i8 v8929 = *(i8*)(intptr_t)(ws+3600);
	i8 v8930 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v8930 = v8929;

	i1 v8931 = (i1)+161;
	*(i1*)(intptr_t)(ws+3496) = v8931;
	i8 v8932 = (i8)(intptr_t)(ws+3424);
	i1 v8933 = *(i1*)(intptr_t)v8932;
	*(i1*)(intptr_t)(ws+3497) = v8933;
	i8 v8934 = (i8)(intptr_t)(ws+3432);
	i8 v8935 = *(i8*)(intptr_t)v8934;
	*(i8*)(intptr_t)(ws+3504) = v8935;
	i8 v8936 = (i8)(intptr_t)(ws+3440);
	i8 v8937 = *(i8*)(intptr_t)v8936;
	*(i8*)(intptr_t)(ws+3512) = v8937;
	i8 v8938 = (i8)(intptr_t)(f172_MidC2Op);

	((void(*)(void))(intptr_t)v8938)();

	i8 v8939 = *(i8*)(intptr_t)(ws+3520);
	i8 v8940 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v8940 = v8939;

	i8 v8941 = (i8)(intptr_t)(ws+3448);
	i8 v8942 = *(i8*)(intptr_t)v8941;
	i8 v8943 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v8943 = v8942;

	i8 v8944 = (i8)(intptr_t)(ws+1528);
	i8 v8945 = *(i8*)(intptr_t)v8944;
	i8 v8946 = (i8)(intptr_t)(ws+3456);
	i8 v8947 = *(i8*)(intptr_t)v8946;
	i8 v8948 = v8947+(+24);
	*(i8*)(intptr_t)v8948 = v8945;

	i1 v8949 = (i1)+156;
	*(i1*)(intptr_t)(ws+3496) = v8949;
	i8 v8950 = (i8)(intptr_t)(ws+3424);
	i1 v8951 = *(i1*)(intptr_t)v8950;
	*(i1*)(intptr_t)(ws+3497) = v8951;
	i8 v8952 = (i8)(intptr_t)(ws+3400);
	i8 v8953 = *(i8*)(intptr_t)v8952;
	*(i8*)(intptr_t)(ws+3504) = v8953;
	i8 v8954 = (i8)(intptr_t)(ws+3456);
	i8 v8955 = *(i8*)(intptr_t)v8954;
	*(i8*)(intptr_t)(ws+3512) = v8955;
	i8 v8956 = (i8)(intptr_t)(f172_MidC2Op);

	((void(*)(void))(intptr_t)v8956)();

	i8 v8957 = *(i8*)(intptr_t)(ws+3520);
	i8 v8958 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v8958 = v8957;

	i8 v8959 = (i8)(intptr_t)(ws+3464);
	i8 v8960 = *(i8*)(intptr_t)v8959;
	i8 v8961 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v8961 = v8960;

	i8 v8962 = (i8)(intptr_t)(ws+3416);
	i8 v8963 = *(i8*)(intptr_t)v8962;
	*(i8*)(intptr_t)(ws+3496) = v8963;
	i8 v8964 = (i8)(intptr_t)(f261_MakePointerType);

	((void(*)(void))(intptr_t)v8964)();

	i8 v8965 = *(i8*)(intptr_t)(ws+3504);
	i8 v8966 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v8966 = v8965;

	i8 v8967 = (i8)(intptr_t)(ws+3480);
	i8 v8968 = *(i8*)(intptr_t)v8967;
	i8 v8969 = (i8)(intptr_t)(ws+3472);
	i8 v8970 = *(i8*)(intptr_t)v8969;
	i8 v8971 = v8970+(+24);
	*(i8*)(intptr_t)v8971 = v8968;

	i8 v8972 = (i8)(intptr_t)(ws+3472);
	i8 v8973 = *(i8*)(intptr_t)v8972;
	*(i8*)(intptr_t)(ws+3496) = v8973;
	i8 v8974 = (i8)(intptr_t)(f232_MakeLValue);

	((void(*)(void))(intptr_t)v8974)();

	i8 v8975 = *(i8*)(intptr_t)(ws+3504);
	i8 v8976 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v8976 = v8975;

	i8 v8977 = (i8)(intptr_t)(ws+3488);
	i8 v8978 = *(i8*)(intptr_t)v8977;
	i8 v8979 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8979 = v8978;

	i1 v8980 = (i1)+17;
	*(i1*)(intptr_t)(ws+3496) = v8980;
	i8 v8981 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v8981;
	i8 v8982 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8982)();

	i1 v8983 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v8983;
	i8 v8984 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v8984;
	i8 v8985 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v8985)();

}
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0173[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f12_print(void);
	void f75_EndError(void);

// BadType workspace at ws+3488 length ws+0
void f368_BadType(void) {

	i8 v8994 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8994)();

	i8 v8995 = (i8)(intptr_t)(ws+3384);
	i8 v8996 = *(i8*)(intptr_t)v8995;
	i8 v8997 = v8996+(+32);
	i8 v8998 = *(i8*)(intptr_t)v8997;
	i8 v8999 = v8998+(+8);
	i8 v9000 = *(i8*)(intptr_t)v8999;
	*(i8*)(intptr_t)(ws+3696) = v9000;
	i8 v9001 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9001)();

	i8 v9002 = (i8)(intptr_t)c02_s0173;
	*(i8*)(intptr_t)(ws+3696) = v9002;
	i8 v9003 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9003)();

	i8 v9004 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9004)();

}
	void f234_IsLValue(void);
	void f235_MaybeUndoLValue(void);
	void f68_IsPtr(void);
	void f222_CheckNotPartialType(void);
	void f113_MidDeref(void);
	void f68_IsPtr(void);
	void f368_BadType(void);
	void f222_CheckNotPartialType(void);
	void f231_IsRecord(void);
	void f368_BadType(void);
	void f217_LookupSymbol(void);
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0174[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0175[] = { 0x27,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f34_Free(void);
	void f120_MidConstant(void);
	void f172_MidC2Op(void);
	void f261_MakePointerType(void);
	void f232_MakeLValue(void);
	void f300_yy_destructor(void);

// reduce_57 workspace at ws+3384 length ws+104
void f367_reduce_57(void) {

	i8 v8986 = (i8)(intptr_t)(ws+3320);
	i8 v8987 = *(i8*)(intptr_t)v8986;
	i8 v8988 = v8987+(+24);
	i8 v8989 = *(i8*)(intptr_t)v8988;
	i8 v8990 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8990 = v8989;

	i8 v8991 = (i8)(intptr_t)(ws+3320);
	i8 v8992 = *(i8*)(intptr_t)v8991;
	i8 v8993 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8993 = v8992;


	i8 v9005 = (i8)(intptr_t)(ws+3392);
	i8 v9006 = *(i8*)(intptr_t)v9005;
	*(i8*)(intptr_t)(ws+3488) = v9006;
	i8 v9007 = (i8)(intptr_t)(f234_IsLValue);

	((void(*)(void))(intptr_t)v9007)();

	i1 v9008 = *(i1*)(intptr_t)(ws+3496);
	i8 v9009 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9009 = v9008;

	i8 v9010 = (i8)(intptr_t)(ws+3400);
	i1 v9011 = *(i1*)(intptr_t)v9010;
	i1 v9012 = (i1)+0;
	if (v9011==v9012) goto c02_066e; else goto c02_066d;

c02_066d:;

	i8 v9013 = (i8)(intptr_t)(ws+3320);
	i8 v9014 = *(i8*)(intptr_t)v9013;
	*(i8*)(intptr_t)(ws+3496) = v9014;
	i8 v9015 = (i8)(intptr_t)(f235_MaybeUndoLValue);

	((void(*)(void))(intptr_t)v9015)();

	i8 v9016 = *(i8*)(intptr_t)(ws+3504);
	i8 v9017 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9017 = v9016;

	i8 v9018 = (i8)(intptr_t)(ws+3408);
	i8 v9019 = *(i8*)(intptr_t)v9018;
	i8 v9020 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9020 = v9019;

c02_066f:;

	i8 v9021 = (i8)(intptr_t)(ws+3384);
	i8 v9022 = *(i8*)(intptr_t)v9021;
	*(i8*)(intptr_t)(ws+3560) = v9022;
	i8 v9023 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v9023)();

	i1 v9024 = *(i1*)(intptr_t)(ws+3568);
	i8 v9025 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v9025 = v9024;

	i8 v9026 = (i8)(intptr_t)(ws+3416);
	i1 v9027 = *(i1*)(intptr_t)v9026;
	i1 v9028 = (i1)+0;
	if (v9027==v9028) goto c02_0674; else goto c02_0673;

c02_0673:;

	i8 v9029 = (i8)(intptr_t)(ws+3384);
	i8 v9030 = *(i8*)(intptr_t)v9029;
	i8 v9031 = *(i8*)(intptr_t)v9030;
	i8 v9032 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9032 = v9031;

	i8 v9033 = (i8)(intptr_t)(ws+3384);
	i8 v9034 = *(i8*)(intptr_t)v9033;
	*(i8*)(intptr_t)(ws+3520) = v9034;
	i8 v9035 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9035)();

	i8 v9036 = (i8)(intptr_t)(ws+1528);
	i8 v9037 = *(i8*)(intptr_t)v9036;
	i8 v9038 = v9037+(+48);
	i2 v9039 = *(i2*)(intptr_t)v9038;
	i1 v9040 = v9039;
	*(i1*)(intptr_t)(ws+3544) = v9040;
	i8 v9041 = (i8)(intptr_t)(ws+3392);
	i8 v9042 = *(i8*)(intptr_t)v9041;
	*(i8*)(intptr_t)(ws+3552) = v9042;
	i8 v9043 = (i8)(intptr_t)(f113_MidDeref);

	((void(*)(void))(intptr_t)v9043)();

	i8 v9044 = *(i8*)(intptr_t)(ws+3560);
	i8 v9045 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9045 = v9044;

	i8 v9046 = (i8)(intptr_t)(ws+3424);
	i8 v9047 = *(i8*)(intptr_t)v9046;
	i8 v9048 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9048 = v9047;

	goto c02_066f;

c02_0674:;

	goto c02_066a;

c02_066e:;

	i8 v9049 = (i8)(intptr_t)(ws+3384);
	i8 v9050 = *(i8*)(intptr_t)v9049;
	*(i8*)(intptr_t)(ws+3560) = v9050;
	i8 v9051 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v9051)();

	i1 v9052 = *(i1*)(intptr_t)(ws+3568);
	i8 v9053 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v9053 = v9052;

	i8 v9054 = (i8)(intptr_t)(ws+3432);
	i1 v9055 = *(i1*)(intptr_t)v9054;
	i1 v9056 = (i1)+0;
	if (v9055==v9056) goto c02_0678; else goto c02_0677;

c02_0677:;

	i8 v9057 = (i8)(intptr_t)(ws+3384);
	i8 v9058 = *(i8*)(intptr_t)v9057;
	i8 v9059 = *(i8*)(intptr_t)v9058;
	i8 v9060 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9060 = v9059;

	goto c02_066a;

c02_0678:;

	i8 v9061 = (i8)(intptr_t)(f368_BadType);

	((void(*)(void))(intptr_t)v9061)();

c02_066a:;

	i8 v9062 = (i8)(intptr_t)(ws+3384);
	i8 v9063 = *(i8*)(intptr_t)v9062;
	*(i8*)(intptr_t)(ws+3520) = v9063;
	i8 v9064 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9064)();

	i8 v9065 = (i8)(intptr_t)(ws+3384);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	*(i8*)(intptr_t)(ws+3488) = v9066;
	i8 v9067 = (i8)(intptr_t)(f231_IsRecord);

	((void(*)(void))(intptr_t)v9067)();

	i1 v9068 = *(i1*)(intptr_t)(ws+3496);
	i8 v9069 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v9069 = v9068;

	i8 v9070 = (i8)(intptr_t)(ws+3433);
	i1 v9071 = *(i1*)(intptr_t)v9070;
	i1 v9072 = (i1)+0;
	if (v9071==v9072) goto c02_067c; else goto c02_067d;

c02_067c:;

	i8 v9073 = (i8)(intptr_t)(f368_BadType);

	((void(*)(void))(intptr_t)v9073)();

c02_067d:;

c02_0679:;

	i8 v9074 = (i8)(intptr_t)(ws+3384);
	i8 v9075 = *(i8*)(intptr_t)v9074;
	*(i8*)(intptr_t)(ws+3488) = v9075;
	i8 v9076 = (i8)(intptr_t)(ws+3304);
	i8 v9077 = *(i8*)(intptr_t)v9076;
	*(i8*)(intptr_t)(ws+3496) = v9077;
	i8 v9078 = (i8)(intptr_t)(f217_LookupSymbol);

	((void(*)(void))(intptr_t)v9078)();

	i8 v9079 = *(i8*)(intptr_t)(ws+3504);
	i8 v9080 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v9080 = v9079;

	i8 v9081 = (i8)(intptr_t)(ws+3440);
	i8 v9082 = *(i8*)(intptr_t)v9081;
	i8 v9083 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9083 = v9082;

	i8 v9084 = (i8)(intptr_t)(ws+3448);
	i8 v9085 = *(i8*)(intptr_t)v9084;
	i8 v9086 = (i8)+0;
	if (v9085==v9086) goto c02_0681; else goto c02_0682;

c02_0681:;

	i8 v9087 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9087)();

	i8 v9088 = (i8)(intptr_t)(ws+3384);
	i8 v9089 = *(i8*)(intptr_t)v9088;
	i8 v9090 = v9089+(+32);
	i8 v9091 = *(i8*)(intptr_t)v9090;
	i8 v9092 = v9091+(+8);
	i8 v9093 = *(i8*)(intptr_t)v9092;
	*(i8*)(intptr_t)(ws+3696) = v9093;
	i8 v9094 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9094)();

	i8 v9095 = (i8)(intptr_t)c02_s0174;
	*(i8*)(intptr_t)(ws+3696) = v9095;
	i8 v9096 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9096)();

	i8 v9097 = (i8)(intptr_t)(ws+3304);
	i8 v9098 = *(i8*)(intptr_t)v9097;
	*(i8*)(intptr_t)(ws+3696) = v9098;
	i8 v9099 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9099)();

	i8 v9100 = (i8)(intptr_t)c02_s0175;
	*(i8*)(intptr_t)(ws+3696) = v9100;
	i8 v9101 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9101)();

	i8 v9102 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9102)();

c02_0682:;

c02_067e:;

	i8 v9103 = (i8)(intptr_t)(ws+3304);
	i8 v9104 = *(i8*)(intptr_t)v9103;
	*(i8*)(intptr_t)(ws+3680) = v9104;
	i8 v9105 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v9105)();

	i8 v9106 = (i8)(intptr_t)(ws+3448);
	i8 v9107 = *(i8*)(intptr_t)v9106;
	i8 v9108 = *(i8*)(intptr_t)v9107;
	i8 v9109 = v9108+(+24);
	i2 v9110 = *(i2*)(intptr_t)v9109;
	i4 v9111 = v9110;
	*(i4*)(intptr_t)(ws+3592) = v9111;
	i8 v9112 = (i8)(intptr_t)(f120_MidConstant);

	((void(*)(void))(intptr_t)v9112)();

	i8 v9113 = *(i8*)(intptr_t)(ws+3600);
	i8 v9114 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v9114 = v9113;

	i1 v9115 = (i1)+156;
	*(i1*)(intptr_t)(ws+3496) = v9115;
	i8 v9116 = (i8)(intptr_t)(ws+1528);
	i8 v9117 = *(i8*)(intptr_t)v9116;
	i8 v9118 = v9117+(+48);
	i2 v9119 = *(i2*)(intptr_t)v9118;
	i1 v9120 = v9119;
	*(i1*)(intptr_t)(ws+3497) = v9120;
	i8 v9121 = (i8)(intptr_t)(ws+3392);
	i8 v9122 = *(i8*)(intptr_t)v9121;
	*(i8*)(intptr_t)(ws+3504) = v9122;
	i8 v9123 = (i8)(intptr_t)(ws+3456);
	i8 v9124 = *(i8*)(intptr_t)v9123;
	*(i8*)(intptr_t)(ws+3512) = v9124;
	i8 v9125 = (i8)(intptr_t)(f172_MidC2Op);

	((void(*)(void))(intptr_t)v9125)();

	i8 v9126 = *(i8*)(intptr_t)(ws+3520);
	i8 v9127 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9127 = v9126;

	i8 v9128 = (i8)(intptr_t)(ws+3464);
	i8 v9129 = *(i8*)(intptr_t)v9128;
	i8 v9130 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9130 = v9129;

	i8 v9131 = (i8)(intptr_t)(ws+3448);
	i8 v9132 = *(i8*)(intptr_t)v9131;
	i8 v9133 = *(i8*)(intptr_t)v9132;
	i8 v9134 = *(i8*)(intptr_t)v9133;
	*(i8*)(intptr_t)(ws+3496) = v9134;
	i8 v9135 = (i8)(intptr_t)(f261_MakePointerType);

	((void(*)(void))(intptr_t)v9135)();

	i8 v9136 = *(i8*)(intptr_t)(ws+3504);
	i8 v9137 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9137 = v9136;

	i8 v9138 = (i8)(intptr_t)(ws+3472);
	i8 v9139 = *(i8*)(intptr_t)v9138;
	i8 v9140 = (i8)(intptr_t)(ws+3296);
	i8 v9141 = *(i8*)(intptr_t)v9140;
	i8 v9142 = v9141+(+24);
	*(i8*)(intptr_t)v9142 = v9139;

	i8 v9143 = (i8)(intptr_t)(ws+3296);
	i8 v9144 = *(i8*)(intptr_t)v9143;
	*(i8*)(intptr_t)(ws+3496) = v9144;
	i8 v9145 = (i8)(intptr_t)(f232_MakeLValue);

	((void(*)(void))(intptr_t)v9145)();

	i8 v9146 = *(i8*)(intptr_t)(ws+3504);
	i8 v9147 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9147 = v9146;

	i8 v9148 = (i8)(intptr_t)(ws+3480);
	i8 v9149 = *(i8*)(intptr_t)v9148;
	i8 v9150 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9150 = v9149;

	i1 v9151 = (i1)+8;
	*(i1*)(intptr_t)(ws+3496) = v9151;
	i8 v9152 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v9152;
	i8 v9153 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9153)();

}
	void f162_MidString(void);
	void f261_MakePointerType(void);

// reduce_58 workspace at ws+3384 length ws+16
void f369_reduce_58(void) {

	i8 v9154 = (i8)(intptr_t)(ws+3304);
	i8 v9155 = *(i8*)(intptr_t)v9154;
	*(i8*)(intptr_t)(ws+3400) = v9155;
	i8 v9156 = (i8)(intptr_t)(f162_MidString);

	((void(*)(void))(intptr_t)v9156)();

	i8 v9157 = *(i8*)(intptr_t)(ws+3408);
	i8 v9158 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9158 = v9157;

	i8 v9159 = (i8)(intptr_t)(ws+3384);
	i8 v9160 = *(i8*)(intptr_t)v9159;
	i8 v9161 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9161 = v9160;

	i8 v9162 = (i8)(intptr_t)(ws+1512);
	i8 v9163 = *(i8*)(intptr_t)v9162;
	*(i8*)(intptr_t)(ws+3496) = v9163;
	i8 v9164 = (i8)(intptr_t)(f261_MakePointerType);

	((void(*)(void))(intptr_t)v9164)();

	i8 v9165 = *(i8*)(intptr_t)(ws+3504);
	i8 v9166 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9166 = v9165;

	i8 v9167 = (i8)(intptr_t)(ws+3392);
	i8 v9168 = *(i8*)(intptr_t)v9167;
	i8 v9169 = (i8)(intptr_t)(ws+3296);
	i8 v9170 = *(i8*)(intptr_t)v9169;
	i8 v9171 = v9170+(+24);
	*(i8*)(intptr_t)v9171 = v9168;

}
	void f290_parser_i_constant_error(void);
	void f63_Discard(void);

// reduce_59 workspace at ws+3384 length ws+0
void f370_reduce_59(void) {

	i8 v9172 = (i8)(intptr_t)(ws+3304);
	i8 v9173 = *(i8*)(intptr_t)v9172;
	i8 v9174 = v9173+(+48);
	i1 v9175 = *(i1*)(intptr_t)v9174;
	i1 v9176 = (i1)+40;
	if (v9175==v9176) goto c02_0687; else goto c02_0686;

c02_0686:;

	i8 v9177 = (i8)(intptr_t)(f290_parser_i_constant_error);

	((void(*)(void))(intptr_t)v9177)();

c02_0687:;

c02_0683:;

	i8 v9178 = (i8)(intptr_t)(ws+3304);
	i8 v9179 = *(i8*)(intptr_t)v9178;
	i4 v9180 = *(i4*)(intptr_t)v9179;
	i8 v9181 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v9181 = v9180;

	i8 v9182 = (i8)(intptr_t)(ws+3304);
	i8 v9183 = *(i8*)(intptr_t)v9182;
	*(i8*)(intptr_t)(ws+3592) = v9183;
	i8 v9184 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v9184)();

}
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_60 workspace at ws+3384 length ws+0
void f371_reduce_60(void) {

	i1 v9185 = (i1)+7;
	i8 v9186 = (i8)(intptr_t)(ws+3328);
	i8 v9187 = *(i8*)(intptr_t)v9186;
	i8 v9188 = v9187+(+32);
	*(i1*)(intptr_t)v9188 = v9185;

	i8 v9189 = (i8)(intptr_t)(ws+3312);
	i4 v9190 = *(i4*)(intptr_t)v9189;
	i8 v9191 = (i8)(intptr_t)(ws+3328);
	i8 v9192 = *(i8*)(intptr_t)v9191;
	*(i4*)(intptr_t)v9192 = v9190;

	i1 v9193 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v9193;
	i8 v9194 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9194;
	i8 v9195 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9195)();

	i1 v9196 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9196;
	i8 v9197 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9197;
	i8 v9198 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9198)();

}
const i1 c02_s0176[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f76_SimpleError(void);
	void f241_ArchGuessIntType(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_61 workspace at ws+3384 length ws+8
void f372_reduce_61(void) {

	i8 v9199 = (i8)(intptr_t)(ws+3328);
	i4 v9200 = *(i4*)(intptr_t)v9199;
	i8 v9201 = (i8)(intptr_t)(ws+3312);
	i4 v9202 = *(i4*)(intptr_t)v9201;
	if ((s4)v9200<(s4)v9202) goto c02_068c; else goto c02_068b;

c02_068b:;

	i8 v9203 = (i8)(intptr_t)c02_s0176;
	*(i8*)(intptr_t)(ws+3648) = v9203;
	i8 v9204 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9204)();

c02_068c:;

c02_0688:;

	i8 v9205 = (i8)(intptr_t)(ws+3328);
	i4 v9206 = *(i4*)(intptr_t)v9205;
	*(i4*)(intptr_t)(ws+3448) = v9206;
	i8 v9207 = (i8)(intptr_t)(ws+3312);
	i4 v9208 = *(i4*)(intptr_t)v9207;
	*(i4*)(intptr_t)(ws+3452) = v9208;
	i8 v9209 = (i8)(intptr_t)(f241_ArchGuessIntType);

	((void(*)(void))(intptr_t)v9209)();

	i8 v9210 = *(i8*)(intptr_t)(ws+3456);
	i8 v9211 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9211 = v9210;

	i8 v9212 = (i8)(intptr_t)(ws+3384);
	i8 v9213 = *(i8*)(intptr_t)v9212;
	i8 v9214 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9214 = v9213;

	i1 v9215 = (i1)+16;
	*(i1*)(intptr_t)(ws+3496) = v9215;
	i8 v9216 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v9216;
	i8 v9217 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9217)();

	i1 v9218 = (i1)+45;
	*(i1*)(intptr_t)(ws+3496) = v9218;
	i8 v9219 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9219;
	i8 v9220 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9220)();

	i1 v9221 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9221;
	i8 v9222 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9222;
	i8 v9223 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9223)();

}
	void f66_AllocNewType(void);
	void f74_StartError(void);
const i1 c02_s0177[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0178[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// reduce_62 workspace at ws+3384 length ws+24
void f373_reduce_62(void) {

	i8 v9224 = (i8)(intptr_t)(ws+3304);
	i8 v9225 = *(i8*)(intptr_t)v9224;
	i8 v9226 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9226 = v9225;

	i8 v9227 = (i8)(intptr_t)(ws+3384);
	i8 v9228 = *(i8*)(intptr_t)v9227;
	i8 v9229 = v9228+(+32);
	i1 v9230 = *(i1*)(intptr_t)v9229;
	i1 v9231 = (i1)+0;
	if (v9230==v9231) goto c02_0690; else goto c02_0691;

c02_0690:;

	i8 v9232 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v9232)();

	i8 v9233 = *(i8*)(intptr_t)(ws+3528);
	i8 v9234 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9234 = v9233;

	i8 v9235 = (i8)(intptr_t)(ws+3392);
	i8 v9236 = *(i8*)(intptr_t)v9235;
	i8 v9237 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9237 = v9236;

	i1 v9238 = (i1)+1;
	i8 v9239 = (i8)(intptr_t)(ws+3400);
	i8 v9240 = *(i8*)(intptr_t)v9239;
	i8 v9241 = v9240+(+52);
	*(i1*)(intptr_t)v9241 = v9238;

	i1 v9242 = (i1)+30;
	i8 v9243 = (i8)(intptr_t)(ws+3384);
	i8 v9244 = *(i8*)(intptr_t)v9243;
	i8 v9245 = v9244+(+32);
	*(i1*)(intptr_t)v9245 = v9242;

	i8 v9246 = (i8)(intptr_t)(ws+3400);
	i8 v9247 = *(i8*)(intptr_t)v9246;
	i8 v9248 = (i8)(intptr_t)(ws+3384);
	i8 v9249 = *(i8*)(intptr_t)v9248;
	*(i8*)(intptr_t)v9249 = v9247;

	i8 v9250 = (i8)(intptr_t)(ws+3384);
	i8 v9251 = *(i8*)(intptr_t)v9250;
	i8 v9252 = (i8)(intptr_t)(ws+3400);
	i8 v9253 = *(i8*)(intptr_t)v9252;
	i8 v9254 = v9253+(+32);
	*(i8*)(intptr_t)v9254 = v9251;

c02_0691:;

c02_068d:;

	i8 v9255 = (i8)(intptr_t)(ws+3384);
	i8 v9256 = *(i8*)(intptr_t)v9255;
	i8 v9257 = v9256+(+32);
	i1 v9258 = *(i1*)(intptr_t)v9257;
	i1 v9259 = (i1)+30;
	if (v9258==v9259) goto c02_0696; else goto c02_0695;

c02_0695:;

	i8 v9260 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9260)();

	i8 v9261 = (i8)(intptr_t)c02_s0177;
	*(i8*)(intptr_t)(ws+3696) = v9261;
	i8 v9262 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9262)();

	i8 v9263 = (i8)(intptr_t)(ws+3384);
	i8 v9264 = *(i8*)(intptr_t)v9263;
	i8 v9265 = v9264+(+8);
	i8 v9266 = *(i8*)(intptr_t)v9265;
	*(i8*)(intptr_t)(ws+3696) = v9266;
	i8 v9267 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9267)();

	i8 v9268 = (i8)(intptr_t)c02_s0178;
	*(i8*)(intptr_t)(ws+3696) = v9268;
	i8 v9269 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9269)();

	i8 v9270 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9270)();

c02_0696:;

c02_0692:;

	i8 v9271 = (i8)(intptr_t)(ws+3384);
	i8 v9272 = *(i8*)(intptr_t)v9271;
	i8 v9273 = *(i8*)(intptr_t)v9272;
	i8 v9274 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9274 = v9273;

}
	void f261_MakePointerType(void);
	void f300_yy_destructor(void);

// reduce_63 workspace at ws+3384 length ws+8
void f374_reduce_63(void) {

	i8 v9275 = (i8)(intptr_t)(ws+3312);
	i8 v9276 = *(i8*)(intptr_t)v9275;
	*(i8*)(intptr_t)(ws+3496) = v9276;
	i8 v9277 = (i8)(intptr_t)(f261_MakePointerType);

	((void(*)(void))(intptr_t)v9277)();

	i8 v9278 = *(i8*)(intptr_t)(ws+3504);
	i8 v9279 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9279 = v9278;

	i8 v9280 = (i8)(intptr_t)(ws+3384);
	i8 v9281 = *(i8*)(intptr_t)v9280;
	i8 v9282 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9282 = v9281;

	i1 v9283 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9283;
	i8 v9284 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9284;
	i8 v9285 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9285)();

}
	void f262_MakeArrayType(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_64 workspace at ws+3384 length ws+8
void f375_reduce_64(void) {

	i8 v9286 = (i8)(intptr_t)(ws+3328);
	i8 v9287 = *(i8*)(intptr_t)v9286;
	*(i8*)(intptr_t)(ws+3392) = v9287;
	i8 v9288 = (i8)(intptr_t)(ws+3312);
	i4 v9289 = *(i4*)(intptr_t)v9288;
	i2 v9290 = (s2)(s4)v9289;
	*(i2*)(intptr_t)(ws+3400) = v9290;
	i8 v9291 = (i8)(intptr_t)(f262_MakeArrayType);

	((void(*)(void))(intptr_t)v9291)();

	i8 v9292 = *(i8*)(intptr_t)(ws+3408);
	i8 v9293 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9293 = v9292;

	i8 v9294 = (i8)(intptr_t)(ws+3384);
	i8 v9295 = *(i8*)(intptr_t)v9294;
	i8 v9296 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9296 = v9295;

	i1 v9297 = (i1)+17;
	*(i1*)(intptr_t)(ws+3496) = v9297;
	i8 v9298 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9298;
	i8 v9299 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9299)();

	i1 v9300 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9300;
	i8 v9301 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9301;
	i8 v9302 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9302)();

}
	void f262_MakeArrayType(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_65 workspace at ws+3384 length ws+8
void f376_reduce_65(void) {

	i8 v9303 = (i8)(intptr_t)(ws+3320);
	i8 v9304 = *(i8*)(intptr_t)v9303;
	*(i8*)(intptr_t)(ws+3392) = v9304;
	i2 v9305 = (i2)+0;
	*(i2*)(intptr_t)(ws+3400) = v9305;
	i8 v9306 = (i8)(intptr_t)(f262_MakeArrayType);

	((void(*)(void))(intptr_t)v9306)();

	i8 v9307 = *(i8*)(intptr_t)(ws+3408);
	i8 v9308 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9308 = v9307;

	i8 v9309 = (i8)(intptr_t)(ws+3384);
	i8 v9310 = *(i8*)(intptr_t)v9309;
	i8 v9311 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9311 = v9310;

	i1 v9312 = (i1)+17;
	*(i1*)(intptr_t)(ws+3496) = v9312;
	i8 v9313 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v9313;
	i8 v9314 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9314)();

	i1 v9315 = (i1)+5;
	*(i1*)(intptr_t)(ws+3496) = v9315;
	i8 v9316 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9316;
	i8 v9317 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9317)();

}
	void f226_IsArray(void);
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0179[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f12_print(void);
	void f75_EndError(void);

// reduce_66 workspace at ws+3384 length ws+1
void f377_reduce_66(void) {

	i8 v9318 = (i8)(intptr_t)(ws+3304);
	i8 v9319 = *(i8*)(intptr_t)v9318;
	*(i8*)(intptr_t)(ws+3496) = v9319;
	i8 v9320 = (i8)(intptr_t)(f226_IsArray);

	((void(*)(void))(intptr_t)v9320)();

	i1 v9321 = *(i1*)(intptr_t)(ws+3504);
	i8 v9322 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9322 = v9321;

	i8 v9323 = (i8)(intptr_t)(ws+3384);
	i1 v9324 = *(i1*)(intptr_t)v9323;
	i1 v9325 = (i1)+0;
	if (v9324==v9325) goto c02_069a; else goto c02_069b;

c02_069a:;

	i8 v9326 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9326)();

	i8 v9327 = (i8)(intptr_t)(ws+3304);
	i8 v9328 = *(i8*)(intptr_t)v9327;
	i8 v9329 = v9328+(+32);
	i8 v9330 = *(i8*)(intptr_t)v9329;
	i8 v9331 = v9330+(+8);
	i8 v9332 = *(i8*)(intptr_t)v9331;
	*(i8*)(intptr_t)(ws+3696) = v9332;
	i8 v9333 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9333)();

	i8 v9334 = (i8)(intptr_t)c02_s0179;
	*(i8*)(intptr_t)(ws+3696) = v9334;
	i8 v9335 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9335)();

	i8 v9336 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9336)();

c02_069b:;

c02_0697:;

	i8 v9337 = (i8)(intptr_t)(ws+3304);
	i8 v9338 = *(i8*)(intptr_t)v9337;
	i8 v9339 = v9338+(+16);
	i8 v9340 = *(i8*)(intptr_t)v9339;
	i8 v9341 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9341 = v9340;

}
	void f220_AddAlias(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_67 workspace at ws+3384 length ws+16
void f378_reduce_67(void) {

	i8 v9342 = (i8)+0;
	*(i8*)(intptr_t)(ws+3400) = v9342;
	i8 v9343 = (i8)(intptr_t)(ws+3328);
	i8 v9344 = *(i8*)(intptr_t)v9343;
	*(i8*)(intptr_t)(ws+3408) = v9344;
	i8 v9345 = (i8)(intptr_t)(ws+3312);
	i8 v9346 = *(i8*)(intptr_t)v9345;
	i8 v9347 = v9346+(+32);
	i8 v9348 = *(i8*)(intptr_t)v9347;
	*(i8*)(intptr_t)(ws+3416) = v9348;
	i8 v9349 = (i8)(intptr_t)(f220_AddAlias);

	((void(*)(void))(intptr_t)v9349)();

	i8 v9350 = *(i8*)(intptr_t)(ws+3424);
	i8 v9351 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9351 = v9350;

	i8 v9352 = (i8)(intptr_t)(ws+3384);
	i8 v9353 = *(i8*)(intptr_t)v9352;
	i8 v9354 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9354 = v9353;

	i1 v9355 = (i1)+65;
	*(i1*)(intptr_t)(ws+3496) = v9355;
	i8 v9356 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9356;
	i8 v9357 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9357)();

	i1 v9358 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9358;
	i8 v9359 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9359;
	i8 v9360 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9360)();

}
	void f219_AddSymbol(void);

// reduce_68 workspace at ws+3384 length ws+8
void f379_reduce_68(void) {

	i8 v9361 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9361;
	i8 v9362 = (i8)(intptr_t)(ws+3304);
	i8 v9363 = *(i8*)(intptr_t)v9362;
	*(i8*)(intptr_t)(ws+3496) = v9363;
	i8 v9364 = (i8)(intptr_t)(f219_AddSymbol);

	((void(*)(void))(intptr_t)v9364)();

	i8 v9365 = *(i8*)(intptr_t)(ws+3504);
	i8 v9366 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9366 = v9365;

	i8 v9367 = (i8)(intptr_t)(ws+3384);
	i8 v9368 = *(i8*)(intptr_t)v9367;
	i8 v9369 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9369 = v9368;

}
	void f217_LookupSymbol(void);
	void f74_StartError(void);
const i1 c02_s017a[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s017b[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f34_Free(void);

// reduce_69 workspace at ws+3384 length ws+24
void f380_reduce_69(void) {

	i8 v9370 = (i8)(intptr_t)(ws+3304);
	i8 v9371 = *(i8*)(intptr_t)v9370;
	i8 v9372 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9372 = v9371;

	i8 v9373 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9373;
	i8 v9374 = (i8)(intptr_t)(ws+3384);
	i8 v9375 = *(i8*)(intptr_t)v9374;
	*(i8*)(intptr_t)(ws+3496) = v9375;
	i8 v9376 = (i8)(intptr_t)(f217_LookupSymbol);

	((void(*)(void))(intptr_t)v9376)();

	i8 v9377 = *(i8*)(intptr_t)(ws+3504);
	i8 v9378 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9378 = v9377;

	i8 v9379 = (i8)(intptr_t)(ws+3392);
	i8 v9380 = *(i8*)(intptr_t)v9379;
	i8 v9381 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9381 = v9380;

	i8 v9382 = (i8)(intptr_t)(ws+3400);
	i8 v9383 = *(i8*)(intptr_t)v9382;
	i8 v9384 = (i8)+0;
	if (v9383==v9384) goto c02_069f; else goto c02_06a0;

c02_069f:;

	i8 v9385 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9385)();

	i8 v9386 = (i8)(intptr_t)c02_s017a;
	*(i8*)(intptr_t)(ws+3696) = v9386;
	i8 v9387 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9387)();

	i8 v9388 = (i8)(intptr_t)(ws+3384);
	i8 v9389 = *(i8*)(intptr_t)v9388;
	*(i8*)(intptr_t)(ws+3696) = v9389;
	i8 v9390 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9390)();

	i8 v9391 = (i8)(intptr_t)c02_s017b;
	*(i8*)(intptr_t)(ws+3696) = v9391;
	i8 v9392 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9392)();

	i8 v9393 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9393)();

c02_06a0:;

c02_069c:;

	i8 v9394 = (i8)(intptr_t)(ws+3384);
	i8 v9395 = *(i8*)(intptr_t)v9394;
	*(i8*)(intptr_t)(ws+3680) = v9395;
	i8 v9396 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v9396)();

	i8 v9397 = (i8)(intptr_t)(ws+3400);
	i8 v9398 = *(i8*)(intptr_t)v9397;
	i8 v9399 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9399 = v9398;

}
	void f217_LookupSymbol(void);
	void f219_AddSymbol(void);
	void f34_Free(void);

// reduce_70 workspace at ws+3384 length ws+32
void f381_reduce_70(void) {

	i8 v9400 = (i8)(intptr_t)(ws+3304);
	i8 v9401 = *(i8*)(intptr_t)v9400;
	i8 v9402 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9402 = v9401;

	i8 v9403 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9403;
	i8 v9404 = (i8)(intptr_t)(ws+3384);
	i8 v9405 = *(i8*)(intptr_t)v9404;
	*(i8*)(intptr_t)(ws+3496) = v9405;
	i8 v9406 = (i8)(intptr_t)(f217_LookupSymbol);

	((void(*)(void))(intptr_t)v9406)();

	i8 v9407 = *(i8*)(intptr_t)(ws+3504);
	i8 v9408 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9408 = v9407;

	i8 v9409 = (i8)(intptr_t)(ws+3392);
	i8 v9410 = *(i8*)(intptr_t)v9409;
	i8 v9411 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9411 = v9410;

	i8 v9412 = (i8)(intptr_t)(ws+3400);
	i8 v9413 = *(i8*)(intptr_t)v9412;
	i8 v9414 = (i8)+0;
	if (v9413==v9414) goto c02_06a4; else goto c02_06a5;

c02_06a4:;

	i8 v9415 = (i8)+0;
	*(i8*)(intptr_t)(ws+3488) = v9415;
	i8 v9416 = (i8)(intptr_t)(ws+3384);
	i8 v9417 = *(i8*)(intptr_t)v9416;
	*(i8*)(intptr_t)(ws+3496) = v9417;
	i8 v9418 = (i8)(intptr_t)(f219_AddSymbol);

	((void(*)(void))(intptr_t)v9418)();

	i8 v9419 = *(i8*)(intptr_t)(ws+3504);
	i8 v9420 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9420 = v9419;

	i8 v9421 = (i8)(intptr_t)(ws+3408);
	i8 v9422 = *(i8*)(intptr_t)v9421;
	i8 v9423 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9423 = v9422;

	goto c02_06a1;

c02_06a5:;

	i8 v9424 = (i8)(intptr_t)(ws+3384);
	i8 v9425 = *(i8*)(intptr_t)v9424;
	*(i8*)(intptr_t)(ws+3680) = v9425;
	i8 v9426 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v9426)();

c02_06a1:;

	i8 v9427 = (i8)(intptr_t)(ws+3400);
	i8 v9428 = *(i8*)(intptr_t)v9427;
	i8 v9429 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9429 = v9428;

}
const i1 c02_s017c[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(void);

// reduce_71 workspace at ws+3384 length ws+0
void f382_reduce_71(void) {

	i8 v9430 = (i8)(intptr_t)(ws+3304);
	i8 v9431 = *(i8*)(intptr_t)v9430;
	i8 v9432 = v9431+(+32);
	i1 v9433 = *(i1*)(intptr_t)v9432;

	if (v9433 != +28) goto c02_06a7;

	i8 v9434 = (i8)(intptr_t)(ws+3304);
	i8 v9435 = *(i8*)(intptr_t)v9434;
	i8 v9436 = *(i8*)(intptr_t)v9435;
	i8 v9437 = *(i8*)(intptr_t)v9436;
	i8 v9438 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9438 = v9437;

	goto c02_06a6;

c02_06a7:;

	if (v9433 != +30) goto c02_06a8;

	i8 v9439 = (i8)(intptr_t)(ws+3304);
	i8 v9440 = *(i8*)(intptr_t)v9439;
	i8 v9441 = *(i8*)(intptr_t)v9440;
	i8 v9442 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9442 = v9441;

	goto c02_06a6;

c02_06a8:;

	i8 v9443 = (i8)(intptr_t)c02_s017c;
	*(i8*)(intptr_t)(ws+3648) = v9443;
	i8 v9444 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9444)();

c02_06a6:;


}
	void f300_yy_destructor(void);

// reduce_72 workspace at ws+3384 length ws+0
void f383_reduce_72(void) {

	i8 v9445 = (i8)(intptr_t)(ws+3312);
	i8 v9446 = *(i8*)(intptr_t)v9445;
	i8 v9447 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9447 = v9446;

	i1 v9448 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9448;
	i8 v9449 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9449;
	i8 v9450 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9450)();

}
	void f291_i_check_sub_call_args(void);
const i1 c02_s017d[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f76_SimpleError(void);
	void f100_GetOutputParameter(void);
	void f219_AddSymbol(void);
	void f260_InitVariable(void);
	void f116_MidCall(void);
	void f257_Generate(void);
	void f156_MidPoparg(void);
	void f131_MidAddress(void);
	void f113_MidDeref(void);
	void f133_MidStore(void);
	void f257_Generate(void);
	void f292_i_end_call(void);
	void f131_MidAddress(void);
	void f113_MidDeref(void);

// reduce_73 workspace at ws+3384 length ws+104
void f384_reduce_73(void) {

	i8 v9451 = (i8)(intptr_t)(ws+80);
	i8 v9452 = *(i8*)(intptr_t)v9451;
	i8 v9453 = v9452+(+8);
	i8 v9454 = *(i8*)(intptr_t)v9453;
	i8 v9455 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9455 = v9454;

	i1 v9456 = (i1)+1;
	i8 v9457 = (i8)(intptr_t)(ws+80);
	i8 v9458 = *(i8*)(intptr_t)v9457;
	i8 v9459 = v9458+(+41);
	*(i1*)(intptr_t)v9459 = v9456;

	i8 v9460 = (i8)(intptr_t)(f291_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9460)();

	i8 v9461 = (i8)(intptr_t)(ws+3384);
	i8 v9462 = *(i8*)(intptr_t)v9461;
	i8 v9463 = v9462+(+81);
	i1 v9464 = *(i1*)(intptr_t)v9463;
	i1 v9465 = (i1)+1;
	if (v9464==v9465) goto c02_06ad; else goto c02_06ac;

c02_06ac:;

	i8 v9466 = (i8)(intptr_t)c02_s017d;
	*(i8*)(intptr_t)(ws+3648) = v9466;
	i8 v9467 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9467)();

c02_06ad:;

c02_06a9:;

	i8 v9468 = (i8)(intptr_t)(ws+3384);
	i8 v9469 = *(i8*)(intptr_t)v9468;
	*(i8*)(intptr_t)(ws+3488) = v9469;
	i1 v9470 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v9470;
	i8 v9471 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v9471)();

	i8 v9472 = *(i8*)(intptr_t)(ws+3504);
	i8 v9473 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9473 = v9472;

	i8 v9474 = (i8)(intptr_t)(ws+3392);
	i8 v9475 = *(i8*)(intptr_t)v9474;
	i8 v9476 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9476 = v9475;

	i8 v9477 = (i8)(intptr_t)(ws+3400);
	i8 v9478 = *(i8*)(intptr_t)v9477;
	i8 v9479 = *(i8*)(intptr_t)v9478;
	i8 v9480 = *(i8*)(intptr_t)v9479;
	i8 v9481 = v9480+(+48);
	i2 v9482 = *(i2*)(intptr_t)v9481;
	i1 v9483 = v9482;
	i8 v9484 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v9484 = v9483;

	i8 v9485 = (i8)(intptr_t)(ws+40);
	i8 v9486 = *(i8*)(intptr_t)v9485;
	i8 v9487 = v9486+(+16);
	*(i8*)(intptr_t)(ws+3488) = v9487;
	i8 v9488 = (i8)+0;
	*(i8*)(intptr_t)(ws+3496) = v9488;
	i8 v9489 = (i8)(intptr_t)(f219_AddSymbol);

	((void(*)(void))(intptr_t)v9489)();

	i8 v9490 = *(i8*)(intptr_t)(ws+3504);
	i8 v9491 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9491 = v9490;

	i8 v9492 = (i8)(intptr_t)(ws+3416);
	i8 v9493 = *(i8*)(intptr_t)v9492;
	i8 v9494 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9494 = v9493;

	i8 v9495 = (i8)(intptr_t)(ws+40);
	i8 v9496 = *(i8*)(intptr_t)v9495;
	*(i8*)(intptr_t)(ws+3488) = v9496;
	i8 v9497 = (i8)(intptr_t)(ws+3424);
	i8 v9498 = *(i8*)(intptr_t)v9497;
	*(i8*)(intptr_t)(ws+3496) = v9498;
	i8 v9499 = (i8)(intptr_t)(ws+3400);
	i8 v9500 = *(i8*)(intptr_t)v9499;
	i8 v9501 = *(i8*)(intptr_t)v9500;
	i8 v9502 = *(i8*)(intptr_t)v9501;
	*(i8*)(intptr_t)(ws+3504) = v9502;
	i8 v9503 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(void))(intptr_t)v9503)();

	i8 v9504 = (i8)(intptr_t)(ws+3304);
	i8 v9505 = *(i8*)(intptr_t)v9504;
	*(i8*)(intptr_t)(ws+3488) = v9505;
	i8 v9506 = (i8)(intptr_t)(ws+80);
	i8 v9507 = *(i8*)(intptr_t)v9506;
	i8 v9508 = *(i8*)(intptr_t)v9507;
	*(i8*)(intptr_t)(ws+3496) = v9508;
	i8 v9509 = (i8)(intptr_t)(ws+3384);
	i8 v9510 = *(i8*)(intptr_t)v9509;
	*(i8*)(intptr_t)(ws+3504) = v9510;
	i8 v9511 = (i8)(intptr_t)(f116_MidCall);

	((void(*)(void))(intptr_t)v9511)();

	i8 v9512 = *(i8*)(intptr_t)(ws+3512);
	i8 v9513 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v9513 = v9512;

	i8 v9514 = (i8)(intptr_t)(ws+3432);
	i8 v9515 = *(i8*)(intptr_t)v9514;
	*(i8*)(intptr_t)(ws+3488) = v9515;
	i8 v9516 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v9516)();

	i8 v9517 = (i8)(intptr_t)(ws+3408);
	i1 v9518 = *(i1*)(intptr_t)v9517;
	*(i1*)(intptr_t)(ws+3488) = v9518;
	i8 v9519 = (i8)(intptr_t)(ws+3384);
	i8 v9520 = *(i8*)(intptr_t)v9519;
	*(i8*)(intptr_t)(ws+3496) = v9520;
	i8 v9521 = (i8)(intptr_t)(ws+3400);
	i8 v9522 = *(i8*)(intptr_t)v9521;
	*(i8*)(intptr_t)(ws+3504) = v9522;
	i1 v9523 = (i1)+0;
	*(i1*)(intptr_t)(ws+3512) = v9523;
	i8 v9524 = (i8)(intptr_t)(f156_MidPoparg);

	((void(*)(void))(intptr_t)v9524)();

	i8 v9525 = *(i8*)(intptr_t)(ws+3520);
	i8 v9526 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v9526 = v9525;

	i8 v9527 = (i8)(intptr_t)(ws+3424);
	i8 v9528 = *(i8*)(intptr_t)v9527;
	*(i8*)(intptr_t)(ws+3488) = v9528;
	i2 v9529 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v9529;
	i8 v9530 = (i8)(intptr_t)(f131_MidAddress);

	((void(*)(void))(intptr_t)v9530)();

	i8 v9531 = *(i8*)(intptr_t)(ws+3504);
	i8 v9532 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9532 = v9531;

	i8 v9533 = (i8)(intptr_t)(ws+3408);
	i1 v9534 = *(i1*)(intptr_t)v9533;
	*(i1*)(intptr_t)(ws+3544) = v9534;
	i8 v9535 = (i8)(intptr_t)(ws+3448);
	i8 v9536 = *(i8*)(intptr_t)v9535;
	*(i8*)(intptr_t)(ws+3552) = v9536;
	i8 v9537 = (i8)(intptr_t)(f113_MidDeref);

	((void(*)(void))(intptr_t)v9537)();

	i8 v9538 = *(i8*)(intptr_t)(ws+3560);
	i8 v9539 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v9539 = v9538;

	i8 v9540 = (i8)(intptr_t)(ws+3408);
	i1 v9541 = *(i1*)(intptr_t)v9540;
	*(i1*)(intptr_t)(ws+3488) = v9541;
	i8 v9542 = (i8)(intptr_t)(ws+3440);
	i8 v9543 = *(i8*)(intptr_t)v9542;
	*(i8*)(intptr_t)(ws+3496) = v9543;
	i8 v9544 = (i8)(intptr_t)(ws+3456);
	i8 v9545 = *(i8*)(intptr_t)v9544;
	*(i8*)(intptr_t)(ws+3504) = v9545;
	i8 v9546 = (i8)(intptr_t)(f133_MidStore);

	((void(*)(void))(intptr_t)v9546)();

	i8 v9547 = *(i8*)(intptr_t)(ws+3512);
	i8 v9548 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9548 = v9547;

	i8 v9549 = (i8)(intptr_t)(ws+3464);
	i8 v9550 = *(i8*)(intptr_t)v9549;
	*(i8*)(intptr_t)(ws+3488) = v9550;
	i8 v9551 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v9551)();

	i8 v9552 = (i8)(intptr_t)(f292_i_end_call);

	((void(*)(void))(intptr_t)v9552)();

	i8 v9553 = (i8)(intptr_t)(ws+3424);
	i8 v9554 = *(i8*)(intptr_t)v9553;
	*(i8*)(intptr_t)(ws+3488) = v9554;
	i2 v9555 = (i2)+0;
	*(i2*)(intptr_t)(ws+3496) = v9555;
	i8 v9556 = (i8)(intptr_t)(f131_MidAddress);

	((void(*)(void))(intptr_t)v9556)();

	i8 v9557 = *(i8*)(intptr_t)(ws+3504);
	i8 v9558 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9558 = v9557;

	i8 v9559 = (i8)(intptr_t)(ws+3408);
	i1 v9560 = *(i1*)(intptr_t)v9559;
	*(i1*)(intptr_t)(ws+3544) = v9560;
	i8 v9561 = (i8)(intptr_t)(ws+3472);
	i8 v9562 = *(i8*)(intptr_t)v9561;
	*(i8*)(intptr_t)(ws+3552) = v9562;
	i8 v9563 = (i8)(intptr_t)(f113_MidDeref);

	((void(*)(void))(intptr_t)v9563)();

	i8 v9564 = *(i8*)(intptr_t)(ws+3560);
	i8 v9565 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9565 = v9564;

	i8 v9566 = (i8)(intptr_t)(ws+3480);
	i8 v9567 = *(i8*)(intptr_t)v9566;
	i8 v9568 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9568 = v9567;

	i8 v9569 = (i8)(intptr_t)(ws+3400);
	i8 v9570 = *(i8*)(intptr_t)v9569;
	i8 v9571 = *(i8*)(intptr_t)v9570;
	i8 v9572 = *(i8*)(intptr_t)v9571;
	i8 v9573 = (i8)(intptr_t)(ws+3296);
	i8 v9574 = *(i8*)(intptr_t)v9573;
	i8 v9575 = v9574+(+24);
	*(i8*)(intptr_t)v9575 = v9572;

}
	void f291_i_check_sub_call_args(void);
const i1 c02_s017e[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);
	void f116_MidCall(void);
	void f257_Generate(void);
	void f292_i_end_call(void);
	void f300_yy_destructor(void);

// reduce_74 workspace at ws+3384 length ws+16
void f385_reduce_74(void) {

	i8 v9576 = (i8)(intptr_t)(ws+80);
	i8 v9577 = *(i8*)(intptr_t)v9576;
	i8 v9578 = v9577+(+8);
	i8 v9579 = *(i8*)(intptr_t)v9578;
	i8 v9580 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9580 = v9579;

	i8 v9581 = (i8)(intptr_t)(f291_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9581)();

	i8 v9582 = (i8)(intptr_t)(ws+3384);
	i8 v9583 = *(i8*)(intptr_t)v9582;
	i8 v9584 = v9583+(+81);
	i1 v9585 = *(i1*)(intptr_t)v9584;
	i1 v9586 = (i1)+0;
	if (v9585==v9586) goto c02_06b2; else goto c02_06b1;

c02_06b1:;

	i8 v9587 = (i8)(intptr_t)c02_s017e;
	*(i8*)(intptr_t)(ws+3648) = v9587;
	i8 v9588 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9588)();

c02_06b2:;

c02_06ae:;

	i8 v9589 = (i8)(intptr_t)(ws+3312);
	i8 v9590 = *(i8*)(intptr_t)v9589;
	*(i8*)(intptr_t)(ws+3488) = v9590;
	i8 v9591 = (i8)(intptr_t)(ws+80);
	i8 v9592 = *(i8*)(intptr_t)v9591;
	i8 v9593 = *(i8*)(intptr_t)v9592;
	*(i8*)(intptr_t)(ws+3496) = v9593;
	i8 v9594 = (i8)(intptr_t)(ws+3384);
	i8 v9595 = *(i8*)(intptr_t)v9594;
	*(i8*)(intptr_t)(ws+3504) = v9595;
	i8 v9596 = (i8)(intptr_t)(f116_MidCall);

	((void(*)(void))(intptr_t)v9596)();

	i8 v9597 = *(i8*)(intptr_t)(ws+3512);
	i8 v9598 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9598 = v9597;

	i8 v9599 = (i8)(intptr_t)(ws+3392);
	i8 v9600 = *(i8*)(intptr_t)v9599;
	*(i8*)(intptr_t)(ws+3488) = v9600;
	i8 v9601 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v9601)();

	i8 v9602 = (i8)(intptr_t)(f292_i_end_call);

	((void(*)(void))(intptr_t)v9602)();

	i1 v9603 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9603;
	i8 v9604 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9604;
	i8 v9605 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9605)();

}
	void f291_i_check_sub_call_args(void);
	void f116_MidCall(void);
	void f257_Generate(void);
const i1 c02_s017f[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);
	void f100_GetOutputParameter(void);
	void f68_IsPtr(void);
const i1 c02_s0180[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(void);
	void f261_MakePointerType(void);
	void f269_CheckExpressionType(void);
	void f222_CheckNotPartialType(void);
	void f222_CheckNotPartialType(void);
	void f156_MidPoparg(void);
	void f113_MidDeref(void);
	void f133_MidStore(void);
	void f257_Generate(void);
	void f63_Discard(void);
const i1 c02_s0181[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);
	void f292_i_end_call(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_75 workspace at ws+3384 length ws+104
void f386_reduce_75(void) {

	i8 v9606 = (i8)(intptr_t)(ws+80);
	i8 v9607 = *(i8*)(intptr_t)v9606;
	i8 v9608 = v9607+(+8);
	i8 v9609 = *(i8*)(intptr_t)v9608;
	i8 v9610 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9610 = v9609;

	i8 v9611 = (i8)(intptr_t)(f291_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9611)();

	i8 v9612 = (i8)(intptr_t)(ws+3312);
	i8 v9613 = *(i8*)(intptr_t)v9612;
	*(i8*)(intptr_t)(ws+3488) = v9613;
	i8 v9614 = (i8)(intptr_t)(ws+80);
	i8 v9615 = *(i8*)(intptr_t)v9614;
	i8 v9616 = *(i8*)(intptr_t)v9615;
	*(i8*)(intptr_t)(ws+3496) = v9616;
	i8 v9617 = (i8)(intptr_t)(ws+3384);
	i8 v9618 = *(i8*)(intptr_t)v9617;
	*(i8*)(intptr_t)(ws+3504) = v9618;
	i8 v9619 = (i8)(intptr_t)(f116_MidCall);

	((void(*)(void))(intptr_t)v9619)();

	i8 v9620 = *(i8*)(intptr_t)(ws+3512);
	i8 v9621 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9621 = v9620;

	i8 v9622 = (i8)(intptr_t)(ws+3392);
	i8 v9623 = *(i8*)(intptr_t)v9622;
	*(i8*)(intptr_t)(ws+3488) = v9623;
	i8 v9624 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v9624)();

	i8 v9625 = (i8)(intptr_t)(ws+3384);
	i8 v9626 = *(i8*)(intptr_t)v9625;
	i8 v9627 = v9626+(+81);
	i1 v9628 = *(i1*)(intptr_t)v9627;
	i8 v9629 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9629 = v9628;

	i1 v9630 = (i1)+0;
	i8 v9631 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v9631 = v9630;

	i8 v9632 = (i8)(intptr_t)(ws+3336);
	i8 v9633 = *(i8*)(intptr_t)v9632;
	i8 v9634 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9634 = v9633;

c02_06b3:;

	i8 v9635 = (i8)(intptr_t)(ws+3408);
	i8 v9636 = *(i8*)(intptr_t)v9635;
	i8 v9637 = (i8)+0;
	if (v9636==v9637) goto c02_06b8; else goto c02_06b7;

c02_06b7:;

	i8 v9638 = (i8)(intptr_t)(ws+3400);
	i1 v9639 = *(i1*)(intptr_t)v9638;
	i1 v9640 = (i1)+0;
	if (v9639==v9640) goto c02_06bc; else goto c02_06bd;

c02_06bc:;

	i8 v9641 = (i8)(intptr_t)c02_s017f;
	*(i8*)(intptr_t)(ws+3648) = v9641;
	i8 v9642 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9642)();

c02_06bd:;

c02_06b9:;

	i8 v9643 = (i8)(intptr_t)(ws+3400);
	i1 v9644 = *(i1*)(intptr_t)v9643;
	i1 v9645 = v9644+(-1);
	i8 v9646 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9646 = v9645;

	i8 v9647 = (i8)(intptr_t)(ws+3384);
	i8 v9648 = *(i8*)(intptr_t)v9647;
	*(i8*)(intptr_t)(ws+3488) = v9648;
	i8 v9649 = (i8)(intptr_t)(ws+3400);
	i1 v9650 = *(i1*)(intptr_t)v9649;
	*(i1*)(intptr_t)(ws+3496) = v9650;
	i8 v9651 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v9651)();

	i8 v9652 = *(i8*)(intptr_t)(ws+3504);
	i8 v9653 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9653 = v9652;

	i8 v9654 = (i8)(intptr_t)(ws+3416);
	i8 v9655 = *(i8*)(intptr_t)v9654;
	i8 v9656 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9656 = v9655;

	i8 v9657 = (i8)(intptr_t)(ws+3408);
	i8 v9658 = *(i8*)(intptr_t)v9657;
	i8 v9659 = v9658+(+32);
	i8 v9660 = *(i8*)(intptr_t)v9659;
	i8 v9661 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v9661 = v9660;

	i8 v9662 = (i8)+0;
	i8 v9663 = (i8)(intptr_t)(ws+3408);
	i8 v9664 = *(i8*)(intptr_t)v9663;
	i8 v9665 = v9664+(+32);
	*(i8*)(intptr_t)v9665 = v9662;

	i8 v9666 = (i8)(intptr_t)(ws+3408);
	i8 v9667 = *(i8*)(intptr_t)v9666;
	i8 v9668 = v9667+(+40);
	i8 v9669 = *(i8*)(intptr_t)v9668;
	i8 v9670 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9670 = v9669;

	i8 v9671 = (i8)(intptr_t)(ws+3432);
	i8 v9672 = *(i8*)(intptr_t)v9671;
	i8 v9673 = v9672+(+24);
	i8 v9674 = *(i8*)(intptr_t)v9673;
	*(i8*)(intptr_t)(ws+3560) = v9674;
	i8 v9675 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v9675)();

	i1 v9676 = *(i1*)(intptr_t)(ws+3568);
	i8 v9677 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v9677 = v9676;

	i8 v9678 = (i8)(intptr_t)(ws+3440);
	i1 v9679 = *(i1*)(intptr_t)v9678;
	i1 v9680 = (i1)+0;
	if (v9679==v9680) goto c02_06c1; else goto c02_06c2;

c02_06c1:;

	i8 v9681 = (i8)(intptr_t)c02_s0180;
	*(i8*)(intptr_t)(ws+3648) = v9681;
	i8 v9682 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9682)();

c02_06c2:;

c02_06be:;

	i8 v9683 = (i8)(intptr_t)(ws+3424);
	i8 v9684 = *(i8*)(intptr_t)v9683;
	i8 v9685 = *(i8*)(intptr_t)v9684;
	i8 v9686 = *(i8*)(intptr_t)v9685;
	*(i8*)(intptr_t)(ws+3496) = v9686;
	i8 v9687 = (i8)(intptr_t)(f261_MakePointerType);

	((void(*)(void))(intptr_t)v9687)();

	i8 v9688 = *(i8*)(intptr_t)(ws+3504);
	i8 v9689 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9689 = v9688;

	i8 v9690 = (i8)(intptr_t)(ws+3432);
	i8 v9691 = *(i8*)(intptr_t)v9690;
	*(i8*)(intptr_t)(ws+3496) = v9691;
	i8 v9692 = (i8)(intptr_t)(ws+3448);
	i8 v9693 = *(i8*)(intptr_t)v9692;
	*(i8*)(intptr_t)(ws+3504) = v9693;
	i8 v9694 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(void))(intptr_t)v9694)();

	i8 v9695 = (i8)(intptr_t)(ws+3424);
	i8 v9696 = *(i8*)(intptr_t)v9695;
	i8 v9697 = *(i8*)(intptr_t)v9696;
	i8 v9698 = *(i8*)(intptr_t)v9697;
	*(i8*)(intptr_t)(ws+3520) = v9698;
	i8 v9699 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9699)();

	i8 v9700 = (i8)(intptr_t)(ws+3432);
	i8 v9701 = *(i8*)(intptr_t)v9700;
	i8 v9702 = v9701+(+24);
	i8 v9703 = *(i8*)(intptr_t)v9702;
	*(i8*)(intptr_t)(ws+3520) = v9703;
	i8 v9704 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9704)();

	i8 v9705 = (i8)(intptr_t)(ws+3424);
	i8 v9706 = *(i8*)(intptr_t)v9705;
	i8 v9707 = *(i8*)(intptr_t)v9706;
	i8 v9708 = *(i8*)(intptr_t)v9707;
	i8 v9709 = v9708+(+48);
	i2 v9710 = *(i2*)(intptr_t)v9709;
	i1 v9711 = v9710;
	i8 v9712 = (i8)(intptr_t)(ws+3456);
	*(i1*)(intptr_t)v9712 = v9711;

	i8 v9713 = (i8)(intptr_t)(ws+3456);
	i1 v9714 = *(i1*)(intptr_t)v9713;
	*(i1*)(intptr_t)(ws+3488) = v9714;
	i8 v9715 = (i8)(intptr_t)(ws+3384);
	i8 v9716 = *(i8*)(intptr_t)v9715;
	*(i8*)(intptr_t)(ws+3496) = v9716;
	i8 v9717 = (i8)(intptr_t)(ws+3424);
	i8 v9718 = *(i8*)(intptr_t)v9717;
	*(i8*)(intptr_t)(ws+3504) = v9718;
	i8 v9719 = (i8)(intptr_t)(ws+3401);
	i1 v9720 = *(i1*)(intptr_t)v9719;
	*(i1*)(intptr_t)(ws+3512) = v9720;
	i8 v9721 = (i8)(intptr_t)(f156_MidPoparg);

	((void(*)(void))(intptr_t)v9721)();

	i8 v9722 = *(i8*)(intptr_t)(ws+3520);
	i8 v9723 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9723 = v9722;

	i8 v9724 = (i8)(intptr_t)(ws+3456);
	i1 v9725 = *(i1*)(intptr_t)v9724;
	*(i1*)(intptr_t)(ws+3544) = v9725;
	i8 v9726 = (i8)(intptr_t)(ws+3432);
	i8 v9727 = *(i8*)(intptr_t)v9726;
	*(i8*)(intptr_t)(ws+3552) = v9727;
	i8 v9728 = (i8)(intptr_t)(f113_MidDeref);

	((void(*)(void))(intptr_t)v9728)();

	i8 v9729 = *(i8*)(intptr_t)(ws+3560);
	i8 v9730 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9730 = v9729;

	i8 v9731 = (i8)(intptr_t)(ws+3456);
	i1 v9732 = *(i1*)(intptr_t)v9731;
	*(i1*)(intptr_t)(ws+3488) = v9732;
	i8 v9733 = (i8)(intptr_t)(ws+3464);
	i8 v9734 = *(i8*)(intptr_t)v9733;
	*(i8*)(intptr_t)(ws+3496) = v9734;
	i8 v9735 = (i8)(intptr_t)(ws+3472);
	i8 v9736 = *(i8*)(intptr_t)v9735;
	*(i8*)(intptr_t)(ws+3504) = v9736;
	i8 v9737 = (i8)(intptr_t)(f133_MidStore);

	((void(*)(void))(intptr_t)v9737)();

	i8 v9738 = *(i8*)(intptr_t)(ws+3512);
	i8 v9739 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9739 = v9738;

	i8 v9740 = (i8)(intptr_t)(ws+3480);
	i8 v9741 = *(i8*)(intptr_t)v9740;
	*(i8*)(intptr_t)(ws+3488) = v9741;
	i8 v9742 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v9742)();

	i8 v9743 = (i8)(intptr_t)(ws+3401);
	i1 v9744 = *(i1*)(intptr_t)v9743;
	i1 v9745 = v9744+(+1);
	i8 v9746 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v9746 = v9745;

	i8 v9747 = (i8)(intptr_t)(ws+3424);
	i8 v9748 = *(i8*)(intptr_t)v9747;
	i8 v9749 = *(i8*)(intptr_t)v9748;
	i8 v9750 = v9749+(+16);
	i8 v9751 = *(i8*)(intptr_t)v9750;
	i8 v9752 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9752 = v9751;

	goto c02_06b3;

c02_06b8:;

	i8 v9753 = (i8)(intptr_t)(ws+3336);
	i8 v9754 = *(i8*)(intptr_t)v9753;
	*(i8*)(intptr_t)(ws+3592) = v9754;
	i8 v9755 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v9755)();

	i8 v9756 = (i8)(intptr_t)(ws+3401);
	i1 v9757 = *(i1*)(intptr_t)v9756;
	i8 v9758 = (i8)(intptr_t)(ws+3384);
	i8 v9759 = *(i8*)(intptr_t)v9758;
	i8 v9760 = v9759+(+81);
	i1 v9761 = *(i1*)(intptr_t)v9760;
	if (v9757==v9761) goto c02_06c7; else goto c02_06c6;

c02_06c6:;

	i8 v9762 = (i8)(intptr_t)c02_s0181;
	*(i8*)(intptr_t)(ws+3648) = v9762;
	i8 v9763 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v9763)();

c02_06c7:;

c02_06c3:;

	i8 v9764 = (i8)(intptr_t)(f292_i_end_call);

	((void(*)(void))(intptr_t)v9764)();

	i1 v9765 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v9765;
	i8 v9766 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v9766;
	i8 v9767 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9767)();

	i1 v9768 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v9768;
	i8 v9769 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9769;
	i8 v9770 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9770)();

}
	void f227_IsSubroutine(void);
	void f74_StartError(void);
const i1 c02_s0182[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0183[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);
	void f69_InternalAlloc(void);
	void f99_GetInputParameter(void);
	void f100_GetOutputParameter(void);

// reduce_76 workspace at ws+3384 length ws+48
void f387_reduce_76(void) {

	i8 v9771 = (i8)(intptr_t)(ws+3304);
	i8 v9772 = *(i8*)(intptr_t)v9771;
	i8 v9773 = v9772+(+24);
	i8 v9774 = *(i8*)(intptr_t)v9773;
	*(i8*)(intptr_t)(ws+3560) = v9774;
	i8 v9775 = (i8)(intptr_t)(f227_IsSubroutine);

	((void(*)(void))(intptr_t)v9775)();

	i1 v9776 = *(i1*)(intptr_t)(ws+3568);
	i8 v9777 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9777 = v9776;

	i8 v9778 = (i8)(intptr_t)(ws+3384);
	i1 v9779 = *(i1*)(intptr_t)v9778;
	i1 v9780 = (i1)+0;
	if (v9779==v9780) goto c02_06cb; else goto c02_06cc;

c02_06cb:;

	i8 v9781 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9781)();

	i8 v9782 = (i8)(intptr_t)c02_s0182;
	*(i8*)(intptr_t)(ws+3696) = v9782;
	i8 v9783 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9783)();

	i8 v9784 = (i8)(intptr_t)(ws+3304);
	i8 v9785 = *(i8*)(intptr_t)v9784;
	i8 v9786 = v9785+(+24);
	i8 v9787 = *(i8*)(intptr_t)v9786;
	i8 v9788 = v9787+(+32);
	i8 v9789 = *(i8*)(intptr_t)v9788;
	i8 v9790 = v9789+(+8);
	i8 v9791 = *(i8*)(intptr_t)v9790;
	*(i8*)(intptr_t)(ws+3696) = v9791;
	i8 v9792 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9792)();

	i8 v9793 = (i8)(intptr_t)c02_s0183;
	*(i8*)(intptr_t)(ws+3696) = v9793;
	i8 v9794 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9794)();

	i8 v9795 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9795)();

c02_06cc:;

c02_06c8:;

	i8 v9796 = (i8)+42;
	*(i8*)(intptr_t)(ws+3640) = v9796;
	i8 v9797 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v9797)();

	i8 v9798 = *(i8*)(intptr_t)(ws+3648);
	i8 v9799 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9799 = v9798;

	i8 v9800 = (i8)(intptr_t)(ws+3392);
	i8 v9801 = *(i8*)(intptr_t)v9800;
	i8 v9802 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9802 = v9801;

	i8 v9803 = (i8)(intptr_t)(ws+80);
	i8 v9804 = *(i8*)(intptr_t)v9803;
	i8 v9805 = (i8)(intptr_t)(ws+3400);
	i8 v9806 = *(i8*)(intptr_t)v9805;
	i8 v9807 = v9806+(+16);
	*(i8*)(intptr_t)v9807 = v9804;

	i8 v9808 = (i8)(intptr_t)(ws+3304);
	i8 v9809 = *(i8*)(intptr_t)v9808;
	i8 v9810 = v9809+(+24);
	i8 v9811 = *(i8*)(intptr_t)v9810;
	i8 v9812 = *(i8*)(intptr_t)v9811;
	i8 v9813 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9813 = v9812;

	i8 v9814 = (i8)(intptr_t)(ws+3304);
	i8 v9815 = *(i8*)(intptr_t)v9814;
	i8 v9816 = (i8)(intptr_t)(ws+3400);
	i8 v9817 = *(i8*)(intptr_t)v9816;
	*(i8*)(intptr_t)v9817 = v9815;

	i8 v9818 = (i8)(intptr_t)(ws+3408);
	i8 v9819 = *(i8*)(intptr_t)v9818;
	i8 v9820 = (i8)(intptr_t)(ws+3400);
	i8 v9821 = *(i8*)(intptr_t)v9820;
	i8 v9822 = v9821+(+8);
	*(i8*)(intptr_t)v9822 = v9819;

	i8 v9823 = (i8)(intptr_t)(ws+3408);
	i8 v9824 = *(i8*)(intptr_t)v9823;
	*(i8*)(intptr_t)(ws+3464) = v9824;
	i1 v9825 = (i1)+0;
	*(i1*)(intptr_t)(ws+3472) = v9825;
	i8 v9826 = (i8)(intptr_t)(f99_GetInputParameter);

	((void(*)(void))(intptr_t)v9826)();

	i8 v9827 = *(i8*)(intptr_t)(ws+3480);
	i8 v9828 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9828 = v9827;

	i8 v9829 = (i8)(intptr_t)(ws+3416);
	i8 v9830 = *(i8*)(intptr_t)v9829;
	i8 v9831 = (i8)(intptr_t)(ws+3400);
	i8 v9832 = *(i8*)(intptr_t)v9831;
	i8 v9833 = v9832+(+24);
	*(i8*)(intptr_t)v9833 = v9830;

	i8 v9834 = (i8)(intptr_t)(ws+3408);
	i8 v9835 = *(i8*)(intptr_t)v9834;
	*(i8*)(intptr_t)(ws+3488) = v9835;
	i1 v9836 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v9836;
	i8 v9837 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v9837)();

	i8 v9838 = *(i8*)(intptr_t)(ws+3504);
	i8 v9839 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9839 = v9838;

	i8 v9840 = (i8)(intptr_t)(ws+3424);
	i8 v9841 = *(i8*)(intptr_t)v9840;
	i8 v9842 = (i8)(intptr_t)(ws+3400);
	i8 v9843 = *(i8*)(intptr_t)v9842;
	i8 v9844 = v9843+(+32);
	*(i8*)(intptr_t)v9844 = v9841;

	i8 v9845 = (i8)(intptr_t)(ws+3400);
	i8 v9846 = *(i8*)(intptr_t)v9845;
	i8 v9847 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v9847 = v9846;

}
	void f300_yy_destructor(void);

// reduce_77 workspace at ws+3384 length ws+0
void f388_reduce_77(void) {

	i8 v9848 = (i8)(intptr_t)(ws+3312);
	i8 v9849 = *(i8*)(intptr_t)v9848;
	i8 v9850 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9850 = v9849;

	i1 v9851 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9851;
	i8 v9852 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9852;
	i8 v9853 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9853)();

}
	void f163_MidEnd(void);
	void f300_yy_destructor(void);

// reduce_78 workspace at ws+3384 length ws+8
void f389_reduce_78(void) {

	i8 v9854 = (i8)(intptr_t)(f163_MidEnd);

	((void(*)(void))(intptr_t)v9854)();

	i8 v9855 = *(i8*)(intptr_t)(ws+3416);
	i8 v9856 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9856 = v9855;

	i8 v9857 = (i8)(intptr_t)(ws+3384);
	i8 v9858 = *(i8*)(intptr_t)v9857;
	i8 v9859 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9859 = v9858;

	i1 v9860 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9860;
	i8 v9861 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9861;
	i8 v9862 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9862)();

}

// reduce_79 workspace at ws+3384 length ws+0
void f390_reduce_79(void) {

	i8 v9863 = (i8)(intptr_t)(ws+3304);
	i8 v9864 = *(i8*)(intptr_t)v9863;
	i8 v9865 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9865 = v9864;

}
	void f63_Discard(void);
	void f300_yy_destructor(void);

// reduce_80 workspace at ws+3384 length ws+0
void f391_reduce_80(void) {

	i8 v9866 = (i8)(intptr_t)(ws+3304);
	i8 v9867 = *(i8*)(intptr_t)v9866;
	i8 v9868 = v9867+(+32);
	i8 v9869 = *(i8*)(intptr_t)v9868;
	*(i8*)(intptr_t)(ws+3592) = v9869;
	i8 v9870 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v9870)();

	i8 v9871 = (i8)(intptr_t)(ws+3320);
	i8 v9872 = *(i8*)(intptr_t)v9871;
	i8 v9873 = (i8)(intptr_t)(ws+3304);
	i8 v9874 = *(i8*)(intptr_t)v9873;
	i8 v9875 = v9874+(+32);
	*(i8*)(intptr_t)v9875 = v9872;

	i8 v9876 = (i8)(intptr_t)(ws+3304);
	i8 v9877 = *(i8*)(intptr_t)v9876;
	i8 v9878 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9878 = v9877;

	i1 v9879 = (i1)+45;
	*(i1*)(intptr_t)(ws+3496) = v9879;
	i8 v9880 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v9880;
	i8 v9881 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9881)();

}
	void f74_StartError(void);
const i1 c02_s0184[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);
	void f269_CheckExpressionType(void);
	void f222_CheckNotPartialType(void);
	void f222_CheckNotPartialType(void);
	void f166_NodeWidth(void);
	void f163_MidEnd(void);
	void f106_MidArg(void);

// reduce_81 workspace at ws+3384 length ws+32
void f392_reduce_81(void) {

	i8 v9882 = (i8)(intptr_t)(ws+80);
	i8 v9883 = *(i8*)(intptr_t)v9882;
	i8 v9884 = v9883+(+24);
	i8 v9885 = *(i8*)(intptr_t)v9884;
	i8 v9886 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9886 = v9885;

	i8 v9887 = (i8)(intptr_t)(ws+3384);
	i8 v9888 = *(i8*)(intptr_t)v9887;
	i8 v9889 = (i8)+0;
	if (v9888==v9889) goto c02_06d0; else goto c02_06d1;

c02_06d0:;

	i8 v9890 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9890)();

	i8 v9891 = (i8)(intptr_t)c02_s0184;
	*(i8*)(intptr_t)(ws+3696) = v9891;
	i8 v9892 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9892)();

	i8 v9893 = (i8)(intptr_t)(ws+80);
	i8 v9894 = *(i8*)(intptr_t)v9893;
	i8 v9895 = v9894+(+8);
	i8 v9896 = *(i8*)(intptr_t)v9895;
	i8 v9897 = *(i8*)(intptr_t)v9896;
	i8 v9898 = v9897+(+8);
	i8 v9899 = *(i8*)(intptr_t)v9898;
	*(i8*)(intptr_t)(ws+3696) = v9899;
	i8 v9900 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v9900)();

	i8 v9901 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9901)();

c02_06d1:;

c02_06cd:;

	i8 v9902 = (i8)(intptr_t)(ws+80);
	i8 v9903 = *(i8*)(intptr_t)v9902;
	i8 v9904 = v9903+(+24);
	i8 v9905 = *(i8*)(intptr_t)v9904;
	i8 v9906 = *(i8*)(intptr_t)v9905;
	i8 v9907 = v9906+(+16);
	i8 v9908 = *(i8*)(intptr_t)v9907;
	i8 v9909 = (i8)(intptr_t)(ws+80);
	i8 v9910 = *(i8*)(intptr_t)v9909;
	i8 v9911 = v9910+(+24);
	*(i8*)(intptr_t)v9911 = v9908;

	i8 v9912 = (i8)(intptr_t)(ws+3304);
	i8 v9913 = *(i8*)(intptr_t)v9912;
	*(i8*)(intptr_t)(ws+3496) = v9913;
	i8 v9914 = (i8)(intptr_t)(ws+3384);
	i8 v9915 = *(i8*)(intptr_t)v9914;
	i8 v9916 = *(i8*)(intptr_t)v9915;
	i8 v9917 = *(i8*)(intptr_t)v9916;
	*(i8*)(intptr_t)(ws+3504) = v9917;
	i8 v9918 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(void))(intptr_t)v9918)();

	i8 v9919 = (i8)(intptr_t)(ws+3384);
	i8 v9920 = *(i8*)(intptr_t)v9919;
	i8 v9921 = *(i8*)(intptr_t)v9920;
	i8 v9922 = *(i8*)(intptr_t)v9921;
	*(i8*)(intptr_t)(ws+3520) = v9922;
	i8 v9923 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9923)();

	i8 v9924 = (i8)(intptr_t)(ws+3304);
	i8 v9925 = *(i8*)(intptr_t)v9924;
	i8 v9926 = v9925+(+24);
	i8 v9927 = *(i8*)(intptr_t)v9926;
	*(i8*)(intptr_t)(ws+3520) = v9927;
	i8 v9928 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v9928)();

	i8 v9929 = (i8)(intptr_t)(ws+80);
	i8 v9930 = *(i8*)(intptr_t)v9929;
	i8 v9931 = v9930+(+40);
	i1 v9932 = *(i1*)(intptr_t)v9931;
	i1 v9933 = v9932+(+1);
	i8 v9934 = (i8)(intptr_t)(ws+80);
	i8 v9935 = *(i8*)(intptr_t)v9934;
	i8 v9936 = v9935+(+40);
	*(i1*)(intptr_t)v9936 = v9933;

	i8 v9937 = (i8)(intptr_t)(ws+3304);
	i8 v9938 = *(i8*)(intptr_t)v9937;
	*(i8*)(intptr_t)(ws+3456) = v9938;
	i8 v9939 = (i8)(intptr_t)(f166_NodeWidth);

	((void(*)(void))(intptr_t)v9939)();

	i1 v9940 = *(i1*)(intptr_t)(ws+3464);
	i8 v9941 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v9941 = v9940;

	i8 v9942 = (i8)(intptr_t)(f163_MidEnd);

	((void(*)(void))(intptr_t)v9942)();

	i8 v9943 = *(i8*)(intptr_t)(ws+3416);
	i8 v9944 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9944 = v9943;

	i8 v9945 = (i8)(intptr_t)(ws+3392);
	i1 v9946 = *(i1*)(intptr_t)v9945;
	*(i1*)(intptr_t)(ws+3416) = v9946;
	i8 v9947 = (i8)(intptr_t)(ws+3400);
	i8 v9948 = *(i8*)(intptr_t)v9947;
	*(i8*)(intptr_t)(ws+3424) = v9948;
	i8 v9949 = (i8)(intptr_t)(ws+3304);
	i8 v9950 = *(i8*)(intptr_t)v9949;
	*(i8*)(intptr_t)(ws+3432) = v9950;
	i8 v9951 = (i8)(intptr_t)(ws+80);
	i8 v9952 = *(i8*)(intptr_t)v9951;
	i8 v9953 = v9952+(+8);
	i8 v9954 = *(i8*)(intptr_t)v9953;
	*(i8*)(intptr_t)(ws+3440) = v9954;
	i8 v9955 = (i8)(intptr_t)(ws+3384);
	i8 v9956 = *(i8*)(intptr_t)v9955;
	*(i8*)(intptr_t)(ws+3448) = v9956;
	i8 v9957 = (i8)(intptr_t)(ws+80);
	i8 v9958 = *(i8*)(intptr_t)v9957;
	i8 v9959 = v9958+(+8);
	i8 v9960 = *(i8*)(intptr_t)v9959;
	i8 v9961 = v9960+(+80);
	i1 v9962 = *(i1*)(intptr_t)v9961;
	i8 v9963 = (i8)(intptr_t)(ws+80);
	i8 v9964 = *(i8*)(intptr_t)v9963;
	i8 v9965 = v9964+(+40);
	i1 v9966 = *(i1*)(intptr_t)v9965;
	i1 v9967 = v9962-v9966;
	*(i1*)(intptr_t)(ws+3456) = v9967;
	i8 v9968 = (i8)(intptr_t)(f106_MidArg);

	((void(*)(void))(intptr_t)v9968)();

	i8 v9969 = *(i8*)(intptr_t)(ws+3464);
	i8 v9970 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9970 = v9969;

	i8 v9971 = (i8)(intptr_t)(ws+3408);
	i8 v9972 = *(i8*)(intptr_t)v9971;
	i8 v9973 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9973 = v9972;

}
	void f159_MidPair(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_82 workspace at ws+3384 length ws+8
void f393_reduce_82(void) {

	i8 v9974 = (i8)(intptr_t)(ws+3312);
	i8 v9975 = *(i8*)(intptr_t)v9974;
	*(i8*)(intptr_t)(ws+3392) = v9975;
	i8 v9976 = (i8)(intptr_t)(ws+3328);
	i8 v9977 = *(i8*)(intptr_t)v9976;
	*(i8*)(intptr_t)(ws+3400) = v9977;
	i8 v9978 = (i8)(intptr_t)(f159_MidPair);

	((void(*)(void))(intptr_t)v9978)();

	i8 v9979 = *(i8*)(intptr_t)(ws+3408);
	i8 v9980 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9980 = v9979;

	i8 v9981 = (i8)(intptr_t)(ws+3384);
	i8 v9982 = *(i8*)(intptr_t)v9981;
	i8 v9983 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9983 = v9982;

	i1 v9984 = (i1)+45;
	*(i1*)(intptr_t)(ws+3496) = v9984;
	i8 v9985 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v9985;
	i8 v9986 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9986)();

	i1 v9987 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v9987;
	i8 v9988 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v9988;
	i8 v9989 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v9989)();

}
	void f159_MidPair(void);

// reduce_83 workspace at ws+3384 length ws+8
void f394_reduce_83(void) {

	i8 v9990 = (i8)(intptr_t)(ws+3304);
	i8 v9991 = *(i8*)(intptr_t)v9990;
	*(i8*)(intptr_t)(ws+3392) = v9991;
	i8 v9992 = (i8)+0;
	*(i8*)(intptr_t)(ws+3400) = v9992;
	i8 v9993 = (i8)(intptr_t)(f159_MidPair);

	((void(*)(void))(intptr_t)v9993)();

	i8 v9994 = *(i8*)(intptr_t)(ws+3408);
	i8 v9995 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9995 = v9994;

	i8 v9996 = (i8)(intptr_t)(ws+3384);
	i8 v9997 = *(i8*)(intptr_t)v9996;
	i8 v9998 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9998 = v9997;

}
	void f159_MidPair(void);
	void f300_yy_destructor(void);

// reduce_84 workspace at ws+3384 length ws+8
void f395_reduce_84(void) {

	i8 v9999 = (i8)(intptr_t)(ws+3304);
	i8 v10000 = *(i8*)(intptr_t)v9999;
	*(i8*)(intptr_t)(ws+3392) = v10000;
	i8 v10001 = (i8)(intptr_t)(ws+3320);
	i8 v10002 = *(i8*)(intptr_t)v10001;
	*(i8*)(intptr_t)(ws+3400) = v10002;
	i8 v10003 = (i8)(intptr_t)(f159_MidPair);

	((void(*)(void))(intptr_t)v10003)();

	i8 v10004 = *(i8*)(intptr_t)(ws+3408);
	i8 v10005 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10005 = v10004;

	i8 v10006 = (i8)(intptr_t)(ws+3384);
	i8 v10007 = *(i8*)(intptr_t)v10006;
	i8 v10008 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10008 = v10007;

	i1 v10009 = (i1)+45;
	*(i1*)(intptr_t)(ws+3496) = v10009;
	i8 v10010 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10010;
	i8 v10011 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10011)();

}
	void f233_UndoLValue(void);

// reduce_85 workspace at ws+3384 length ws+8
void f396_reduce_85(void) {

	i8 v10012 = (i8)(intptr_t)(ws+3304);
	i8 v10013 = *(i8*)(intptr_t)v10012;
	*(i8*)(intptr_t)(ws+3432) = v10013;
	i8 v10014 = (i8)(intptr_t)(f233_UndoLValue);

	((void(*)(void))(intptr_t)v10014)();

	i8 v10015 = *(i8*)(intptr_t)(ws+3440);
	i8 v10016 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10016 = v10015;

	i8 v10017 = (i8)(intptr_t)(ws+3384);
	i8 v10018 = *(i8*)(intptr_t)v10017;
	i8 v10019 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10019 = v10018;

}
	void f206_EmitterEmitSubroutineFlags(void);
	void f136_MidStartsub(void);
	void f257_Generate(void);
	void f158_MidEndsub(void);
	void f257_Generate(void);
	void f267_ReportWorkspaces(void);
	void f300_yy_destructor(void);

// reduce_86 workspace at ws+3384 length ws+16
void f397_reduce_86(void) {

	i8 v10020 = (i8)(intptr_t)(ws+1544);
	i8 v10021 = *(i8*)(intptr_t)v10020;
	i8 v10022 = v10021+(+82);
	i1 v10023 = *(i1*)(intptr_t)v10022;
	i1 v10024 = v10023|(+2);
	i8 v10025 = (i8)(intptr_t)(ws+1544);
	i8 v10026 = *(i8*)(intptr_t)v10025;
	i8 v10027 = v10026+(+82);
	*(i1*)(intptr_t)v10027 = v10024;

	i8 v10028 = (i8)(intptr_t)(ws+1544);
	i8 v10029 = *(i8*)(intptr_t)v10028;
	*(i8*)(intptr_t)(ws+3408) = v10029;
	i8 v10030 = (i8)(intptr_t)(f206_EmitterEmitSubroutineFlags);

	((void(*)(void))(intptr_t)v10030)();

	i8 v10031 = (i8)(intptr_t)(ws+1544);
	i8 v10032 = *(i8*)(intptr_t)v10031;
	i8 v10033 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10033 = v10032;

	i8 v10034 = (i8)(intptr_t)(ws+40);
	i8 v10035 = *(i8*)(intptr_t)v10034;
	*(i8*)(intptr_t)(ws+3408) = v10035;
	i8 v10036 = (i8)(intptr_t)(f136_MidStartsub);

	((void(*)(void))(intptr_t)v10036)();

	i8 v10037 = *(i8*)(intptr_t)(ws+3416);
	i8 v10038 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10038 = v10037;

	i8 v10039 = (i8)(intptr_t)(ws+3384);
	i8 v10040 = *(i8*)(intptr_t)v10039;
	*(i8*)(intptr_t)(ws+3488) = v10040;
	i8 v10041 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10041)();

	i8 v10042 = (i8)(intptr_t)(ws+40);
	i8 v10043 = *(i8*)(intptr_t)v10042;
	*(i8*)(intptr_t)(ws+3408) = v10043;
	i8 v10044 = (i8)(intptr_t)(f158_MidEndsub);

	((void(*)(void))(intptr_t)v10044)();

	i8 v10045 = *(i8*)(intptr_t)(ws+3416);
	i8 v10046 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10046 = v10045;

	i8 v10047 = (i8)(intptr_t)(ws+3392);
	i8 v10048 = *(i8*)(intptr_t)v10047;
	*(i8*)(intptr_t)(ws+3488) = v10048;
	i8 v10049 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10049)();

	i8 v10050 = (i8)(intptr_t)(ws+40);
	i8 v10051 = *(i8*)(intptr_t)v10050;
	*(i8*)(intptr_t)(ws+3408) = v10051;
	i8 v10052 = (i8)(intptr_t)(f267_ReportWorkspaces);

	((void(*)(void))(intptr_t)v10052)();

	i8 v10053 = (i8)(intptr_t)(ws+40);
	i8 v10054 = *(i8*)(intptr_t)v10053;
	i8 v10055 = v10054+(+8);
	i8 v10056 = *(i8*)(intptr_t)v10055;
	i8 v10057 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10057 = v10056;

	i1 v10058 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10058;
	i8 v10059 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10059;
	i8 v10060 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10060)();

}
const i1 c02_s0185[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f76_SimpleError(void);

// not_an_interface workspace at ws+3408 length ws+0
void f399_not_an_interface(void) {

	i8 v10061 = (i8)(intptr_t)c02_s0185;
	*(i8*)(intptr_t)(ws+3648) = v10061;
	i8 v10062 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10062)();

}
	void f227_IsSubroutine(void);
	void f399_not_an_interface(void);
	void f399_not_an_interface(void);
	void f201_EmitterReferenceSubroutine(void);
	void f201_EmitterReferenceSubroutine(void);
	void f265_CopyParameterList(void);
	void f100_GetOutputParameter(void);
	void f265_CopyParameterList(void);
	void f204_EmitterEmitInputParameters(void);
	void f205_EmitterEmitOutputParameters(void);
	void f206_EmitterEmitSubroutineFlags(void);
	void f300_yy_destructor(void);

// reduce_87 workspace at ws+3384 length ws+24
void f398_reduce_87(void) {


	i8 v10063 = (i8)(intptr_t)(ws+3304);
	i8 v10064 = *(i8*)(intptr_t)v10063;
	*(i8*)(intptr_t)(ws+3560) = v10064;
	i8 v10065 = (i8)(intptr_t)(f227_IsSubroutine);

	((void(*)(void))(intptr_t)v10065)();

	i1 v10066 = *(i1*)(intptr_t)(ws+3568);
	i8 v10067 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10067 = v10066;

	i8 v10068 = (i8)(intptr_t)(ws+3384);
	i1 v10069 = *(i1*)(intptr_t)v10068;
	i1 v10070 = (i1)+0;
	if (v10069==v10070) goto c02_06d5; else goto c02_06d6;

c02_06d5:;

	i8 v10071 = (i8)(intptr_t)(f399_not_an_interface);

	((void(*)(void))(intptr_t)v10071)();

c02_06d6:;

c02_06d2:;

	i8 v10072 = (i8)(intptr_t)(ws+3304);
	i8 v10073 = *(i8*)(intptr_t)v10072;
	i8 v10074 = *(i8*)(intptr_t)v10073;
	i8 v10075 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10075 = v10074;

	i8 v10076 = (i8)(intptr_t)(ws+3392);
	i8 v10077 = *(i8*)(intptr_t)v10076;
	i8 v10078 = v10077+(+82);
	i1 v10079 = *(i1*)(intptr_t)v10078;
	i1 v10080 = v10079&(+2);
	i1 v10081 = (i1)+0;
	if (v10080==v10081) goto c02_06da; else goto c02_06db;

c02_06da:;

	i8 v10082 = (i8)(intptr_t)(f399_not_an_interface);

	((void(*)(void))(intptr_t)v10082)();

c02_06db:;

c02_06d7:;

	i8 v10083 = (i8)(intptr_t)(ws+1544);
	i8 v10084 = *(i8*)(intptr_t)v10083;
	i8 v10085 = v10084+(+82);
	i1 v10086 = *(i1*)(intptr_t)v10085;
	i1 v10087 = v10086|(+4);
	i8 v10088 = (i8)(intptr_t)(ws+1544);
	i8 v10089 = *(i8*)(intptr_t)v10088;
	i8 v10090 = v10089+(+82);
	*(i1*)(intptr_t)v10090 = v10087;

	i8 v10091 = (i8)(intptr_t)(ws+3392);
	i8 v10092 = *(i8*)(intptr_t)v10091;
	i8 v10093 = (i8)(intptr_t)(ws+1544);
	i8 v10094 = *(i8*)(intptr_t)v10093;
	i8 v10095 = v10094+(+48);
	*(i8*)(intptr_t)v10095 = v10092;

	i8 v10096 = (i8)(intptr_t)(ws+3304);
	i8 v10097 = *(i8*)(intptr_t)v10096;
	i8 v10098 = (i8)(intptr_t)(ws+1544);
	i8 v10099 = *(i8*)(intptr_t)v10098;
	i8 v10100 = v10099+(+40);
	*(i8*)(intptr_t)v10100 = v10097;

	i8 v10101 = (i8)(intptr_t)(ws+40);
	i8 v10102 = *(i8*)(intptr_t)v10101;
	*(i8*)(intptr_t)(ws+3496) = v10102;
	i8 v10103 = (i8)(intptr_t)(ws+3392);
	i8 v10104 = *(i8*)(intptr_t)v10103;
	*(i8*)(intptr_t)(ws+3504) = v10104;
	i8 v10105 = (i8)(intptr_t)(f201_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v10105)();

	i8 v10106 = (i8)(intptr_t)(ws+3392);
	i8 v10107 = *(i8*)(intptr_t)v10106;
	*(i8*)(intptr_t)(ws+3496) = v10107;
	i8 v10108 = (i8)(intptr_t)(ws+1544);
	i8 v10109 = *(i8*)(intptr_t)v10108;
	*(i8*)(intptr_t)(ws+3504) = v10109;
	i8 v10110 = (i8)(intptr_t)(f201_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v10110)();

	i8 v10111 = (i8)(intptr_t)(ws+3392);
	i8 v10112 = *(i8*)(intptr_t)v10111;
	i8 v10113 = v10112+(+80);
	i1 v10114 = *(i1*)(intptr_t)v10113;
	i8 v10115 = (i8)(intptr_t)(ws+1544);
	i8 v10116 = *(i8*)(intptr_t)v10115;
	i8 v10117 = v10116+(+80);
	*(i1*)(intptr_t)v10117 = v10114;

	i8 v10118 = (i8)(intptr_t)(ws+1544);
	i8 v10119 = *(i8*)(intptr_t)v10118;
	i8 v10120 = v10119+(+80);
	i1 v10121 = *(i1*)(intptr_t)v10120;
	i1 v10122 = (i1)+0;
	if (v10121==v10122) goto c02_06e0; else goto c02_06df;

c02_06df:;

	i8 v10123 = (i8)(intptr_t)(ws+3392);
	i8 v10124 = *(i8*)(intptr_t)v10123;
	i8 v10125 = v10124+(+16);
	i8 v10126 = *(i8*)(intptr_t)v10125;
	*(i8*)(intptr_t)(ws+3408) = v10126;
	i8 v10127 = (i8)(intptr_t)(ws+1544);
	i8 v10128 = *(i8*)(intptr_t)v10127;
	*(i8*)(intptr_t)(ws+3416) = v10128;
	i8 v10129 = (i8)(intptr_t)(f265_CopyParameterList);

	((void(*)(void))(intptr_t)v10129)();

c02_06e0:;

c02_06dc:;

	i8 v10130 = (i8)(intptr_t)(ws+3392);
	i8 v10131 = *(i8*)(intptr_t)v10130;
	i8 v10132 = v10131+(+81);
	i1 v10133 = *(i1*)(intptr_t)v10132;
	i8 v10134 = (i8)(intptr_t)(ws+1544);
	i8 v10135 = *(i8*)(intptr_t)v10134;
	i8 v10136 = v10135+(+81);
	*(i1*)(intptr_t)v10136 = v10133;

	i8 v10137 = (i8)(intptr_t)(ws+1544);
	i8 v10138 = *(i8*)(intptr_t)v10137;
	i8 v10139 = v10138+(+81);
	i1 v10140 = *(i1*)(intptr_t)v10139;
	i1 v10141 = (i1)+0;
	if (v10140==v10141) goto c02_06e5; else goto c02_06e4;

c02_06e4:;

	i8 v10142 = (i8)(intptr_t)(ws+3392);
	i8 v10143 = *(i8*)(intptr_t)v10142;
	*(i8*)(intptr_t)(ws+3488) = v10143;
	i1 v10144 = (i1)+0;
	*(i1*)(intptr_t)(ws+3496) = v10144;
	i8 v10145 = (i8)(intptr_t)(f100_GetOutputParameter);

	((void(*)(void))(intptr_t)v10145)();

	i8 v10146 = *(i8*)(intptr_t)(ws+3504);
	i8 v10147 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10147 = v10146;

	i8 v10148 = (i8)(intptr_t)(ws+3400);
	i8 v10149 = *(i8*)(intptr_t)v10148;
	*(i8*)(intptr_t)(ws+3408) = v10149;
	i8 v10150 = (i8)(intptr_t)(ws+1544);
	i8 v10151 = *(i8*)(intptr_t)v10150;
	*(i8*)(intptr_t)(ws+3416) = v10151;
	i8 v10152 = (i8)(intptr_t)(f265_CopyParameterList);

	((void(*)(void))(intptr_t)v10152)();

c02_06e5:;

c02_06e1:;

	i8 v10153 = (i8)(intptr_t)(ws+1544);
	i8 v10154 = *(i8*)(intptr_t)v10153;
	*(i8*)(intptr_t)(ws+3408) = v10154;
	i8 v10155 = (i8)(intptr_t)(f204_EmitterEmitInputParameters);

	((void(*)(void))(intptr_t)v10155)();

	i8 v10156 = (i8)(intptr_t)(ws+1544);
	i8 v10157 = *(i8*)(intptr_t)v10156;
	*(i8*)(intptr_t)(ws+3408) = v10157;
	i8 v10158 = (i8)(intptr_t)(f205_EmitterEmitOutputParameters);

	((void(*)(void))(intptr_t)v10158)();

	i8 v10159 = (i8)(intptr_t)(ws+1544);
	i8 v10160 = *(i8*)(intptr_t)v10159;
	*(i8*)(intptr_t)(ws+3408) = v10160;
	i8 v10161 = (i8)(intptr_t)(f206_EmitterEmitSubroutineFlags);

	((void(*)(void))(intptr_t)v10161)();

	i1 v10162 = (i1)+68;
	*(i1*)(intptr_t)(ws+3496) = v10162;
	i8 v10163 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10163;
	i8 v10164 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10164)();

}
	void f199_EmitterDeclareExternalSubroutine(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_88 workspace at ws+3384 length ws+0
void f400_reduce_88(void) {

	i8 v10165 = (i8)(intptr_t)(ws+1544);
	i8 v10166 = *(i8*)(intptr_t)v10165;
	i8 v10167 = v10166+(+56);
	i2 v10168 = *(i2*)(intptr_t)v10167;
	*(i2*)(intptr_t)(ws+3384) = v10168;
	i8 v10169 = (i8)(intptr_t)(ws+3312);
	i8 v10170 = *(i8*)(intptr_t)v10169;
	*(i8*)(intptr_t)(ws+3392) = v10170;
	i8 v10171 = (i8)(intptr_t)(f199_EmitterDeclareExternalSubroutine);

	((void(*)(void))(intptr_t)v10171)();

	i1 v10172 = (i1)+11;
	*(i1*)(intptr_t)(ws+3496) = v10172;
	i8 v10173 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v10173;
	i8 v10174 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10174)();

	i1 v10175 = (i1)+16;
	*(i1*)(intptr_t)(ws+3496) = v10175;
	i8 v10176 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10176;
	i8 v10177 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10177)();

	i1 v10178 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10178;
	i8 v10179 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10179;
	i8 v10180 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10180)();

}
	void f69_InternalAlloc(void);
	void f237_AllocSubrId(void);
	void f66_AllocNewType(void);
	void f198_EmitterDeclareSubroutine(void);

// reduce_89 workspace at ws+3384 length ws+32
void f401_reduce_89(void) {

	i8 v10181 = (i8)+83;
	*(i8*)(intptr_t)(ws+3640) = v10181;
	i8 v10182 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v10182)();

	i8 v10183 = *(i8*)(intptr_t)(ws+3648);
	i8 v10184 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10184 = v10183;

	i8 v10185 = (i8)(intptr_t)(ws+3384);
	i8 v10186 = *(i8*)(intptr_t)v10185;
	i8 v10187 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v10187 = v10186;

	i8 v10188 = (i8)(intptr_t)(ws+40);
	i8 v10189 = *(i8*)(intptr_t)v10188;
	i8 v10190 = v10189+(+16);
	i8 v10191 = (i8)(intptr_t)(ws+1544);
	i8 v10192 = *(i8*)(intptr_t)v10191;
	i8 v10193 = v10192+(+32);
	*(i8*)(intptr_t)v10193 = v10190;

	i8 v10194 = (i8)(intptr_t)(ws+40);
	i8 v10195 = *(i8*)(intptr_t)v10194;
	i8 v10196 = (i8)(intptr_t)(ws+1544);
	i8 v10197 = *(i8*)(intptr_t)v10196;
	i8 v10198 = v10197+(+8);
	*(i8*)(intptr_t)v10198 = v10195;

	i8 v10199 = (i8)(intptr_t)(f237_AllocSubrId);

	((void(*)(void))(intptr_t)v10199)();

	i2 v10200 = *(i2*)(intptr_t)(ws+3416);
	i8 v10201 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v10201 = v10200;

	i8 v10202 = (i8)(intptr_t)(ws+3392);
	i2 v10203 = *(i2*)(intptr_t)v10202;
	i8 v10204 = (i8)(intptr_t)(ws+1544);
	i8 v10205 = *(i8*)(intptr_t)v10204;
	i8 v10206 = v10205+(+56);
	*(i2*)(intptr_t)v10206 = v10203;

	i8 v10207 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v10207)();

	i8 v10208 = *(i8*)(intptr_t)(ws+3528);
	i8 v10209 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10209 = v10208;

	i8 v10210 = (i8)(intptr_t)(ws+3400);
	i8 v10211 = *(i8*)(intptr_t)v10210;
	i8 v10212 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10212 = v10211;

	i1 v10213 = (i1)+6;
	i8 v10214 = (i8)(intptr_t)(ws+3408);
	i8 v10215 = *(i8*)(intptr_t)v10214;
	i8 v10216 = v10215+(+52);
	*(i1*)(intptr_t)v10216 = v10213;

	i8 v10217 = (i8)(intptr_t)(ws+1528);
	i8 v10218 = *(i8*)(intptr_t)v10217;
	i8 v10219 = v10218+(+48);
	i2 v10220 = *(i2*)(intptr_t)v10219;
	i8 v10221 = (i8)(intptr_t)(ws+3408);
	i8 v10222 = *(i8*)(intptr_t)v10221;
	i8 v10223 = v10222+(+48);
	*(i2*)(intptr_t)v10223 = v10220;

	i8 v10224 = (i8)(intptr_t)(ws+1528);
	i8 v10225 = *(i8*)(intptr_t)v10224;
	i8 v10226 = v10225+(+53);
	i1 v10227 = *(i1*)(intptr_t)v10226;
	i8 v10228 = (i8)(intptr_t)(ws+3408);
	i8 v10229 = *(i8*)(intptr_t)v10228;
	i8 v10230 = v10229+(+53);
	*(i1*)(intptr_t)v10230 = v10227;

	i8 v10231 = (i8)(intptr_t)(ws+1528);
	i8 v10232 = *(i8*)(intptr_t)v10231;
	i8 v10233 = v10232+(+50);
	i2 v10234 = *(i2*)(intptr_t)v10233;
	i8 v10235 = (i8)(intptr_t)(ws+3408);
	i8 v10236 = *(i8*)(intptr_t)v10235;
	i8 v10237 = v10236+(+50);
	*(i2*)(intptr_t)v10237 = v10234;

	i8 v10238 = (i8)(intptr_t)(ws+1544);
	i8 v10239 = *(i8*)(intptr_t)v10238;
	i8 v10240 = (i8)(intptr_t)(ws+3408);
	i8 v10241 = *(i8*)(intptr_t)v10240;
	*(i8*)(intptr_t)v10241 = v10239;

	i8 v10242 = (i8)(intptr_t)(ws+3408);
	i8 v10243 = *(i8*)(intptr_t)v10242;
	i8 v10244 = (i8)(intptr_t)(ws+1544);
	i8 v10245 = *(i8*)(intptr_t)v10244;
	i8 v10246 = v10245+(+40);
	*(i8*)(intptr_t)v10246 = v10243;

	i8 v10247 = (i8)(intptr_t)(ws+1544);
	i8 v10248 = *(i8*)(intptr_t)v10247;
	i8 v10249 = (i8)(intptr_t)(ws+1544);
	i8 v10250 = *(i8*)(intptr_t)v10249;
	i8 v10251 = v10250+(+48);
	*(i8*)(intptr_t)v10251 = v10248;

	i1 v10252 = (i1)+30;
	i8 v10253 = (i8)(intptr_t)(ws+3304);
	i8 v10254 = *(i8*)(intptr_t)v10253;
	i8 v10255 = v10254+(+32);
	*(i1*)(intptr_t)v10255 = v10252;

	i8 v10256 = (i8)(intptr_t)(ws+3408);
	i8 v10257 = *(i8*)(intptr_t)v10256;
	i8 v10258 = (i8)(intptr_t)(ws+3304);
	i8 v10259 = *(i8*)(intptr_t)v10258;
	*(i8*)(intptr_t)v10259 = v10257;

	i8 v10260 = (i8)(intptr_t)(ws+3304);
	i8 v10261 = *(i8*)(intptr_t)v10260;
	i8 v10262 = (i8)(intptr_t)(ws+3408);
	i8 v10263 = *(i8*)(intptr_t)v10262;
	i8 v10264 = v10263+(+32);
	*(i8*)(intptr_t)v10264 = v10261;

	i8 v10265 = (i8)(intptr_t)(ws+3304);
	i8 v10266 = *(i8*)(intptr_t)v10265;
	i8 v10267 = (i8)(intptr_t)(ws+1544);
	i8 v10268 = *(i8*)(intptr_t)v10267;
	*(i8*)(intptr_t)v10268 = v10266;

	i8 v10269 = (i8)(intptr_t)(ws+1544);
	i8 v10270 = *(i8*)(intptr_t)v10269;
	*(i8*)(intptr_t)(ws+3416) = v10270;
	i8 v10271 = (i8)(intptr_t)(f198_EmitterDeclareSubroutine);

	((void(*)(void))(intptr_t)v10271)();

	i8 v10272 = (i8)(intptr_t)(ws+3304);
	i8 v10273 = *(i8*)(intptr_t)v10272;
	i8 v10274 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10274 = v10273;

}
	void f227_IsSubroutine(void);
const i1 c02_s0186[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f76_SimpleError(void);
const i1 c02_s0187[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f76_SimpleError(void);
const i1 c02_s0188[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(void);
	void f300_yy_destructor(void);

// reduce_90 workspace at ws+3384 length ws+1
void f402_reduce_90(void) {

	i8 v10275 = (i8)(intptr_t)(ws+3304);
	i8 v10276 = *(i8*)(intptr_t)v10275;
	i8 v10277 = *(i8*)(intptr_t)v10276;
	*(i8*)(intptr_t)(ws+3560) = v10277;
	i8 v10278 = (i8)(intptr_t)(f227_IsSubroutine);

	((void(*)(void))(intptr_t)v10278)();

	i1 v10279 = *(i1*)(intptr_t)(ws+3568);
	i8 v10280 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10280 = v10279;

	i8 v10281 = (i8)(intptr_t)(ws+3304);
	i8 v10282 = *(i8*)(intptr_t)v10281;
	i8 v10283 = v10282+(+32);
	i1 v10284 = *(i1*)(intptr_t)v10283;
	i1 v10285 = (i1)+30;
	if (v10284==v10285) goto c02_06ed; else goto c02_06eb;

c02_06ed:;

	i8 v10286 = (i8)(intptr_t)(ws+3384);
	i1 v10287 = *(i1*)(intptr_t)v10286;
	i1 v10288 = (i1)+0;
	if (v10287==v10288) goto c02_06eb; else goto c02_06ec;

c02_06eb:;

	i8 v10289 = (i8)(intptr_t)c02_s0186;
	*(i8*)(intptr_t)(ws+3648) = v10289;
	i8 v10290 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10290)();

c02_06ec:;

c02_06e6:;

	i8 v10291 = (i8)(intptr_t)(ws+3304);
	i8 v10292 = *(i8*)(intptr_t)v10291;
	i8 v10293 = *(i8*)(intptr_t)v10292;
	i8 v10294 = *(i8*)(intptr_t)v10293;
	i8 v10295 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v10295 = v10294;

	i8 v10296 = (i8)(intptr_t)(ws+1544);
	i8 v10297 = *(i8*)(intptr_t)v10296;
	i8 v10298 = v10297+(+82);
	i1 v10299 = *(i1*)(intptr_t)v10298;
	i1 v10300 = v10299&(+1);
	i1 v10301 = (i1)+0;
	if (v10300==v10301) goto c02_06f2; else goto c02_06f1;

c02_06f1:;

	i8 v10302 = (i8)(intptr_t)c02_s0187;
	*(i8*)(intptr_t)(ws+3648) = v10302;
	i8 v10303 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10303)();

c02_06f2:;

c02_06ee:;

	i8 v10304 = (i8)(intptr_t)(ws+1544);
	i8 v10305 = *(i8*)(intptr_t)v10304;
	i8 v10306 = v10305+(+8);
	i8 v10307 = *(i8*)(intptr_t)v10306;
	i8 v10308 = (i8)(intptr_t)(ws+40);
	i8 v10309 = *(i8*)(intptr_t)v10308;
	if (v10307==v10309) goto c02_06f7; else goto c02_06f6;

c02_06f6:;

	i8 v10310 = (i8)(intptr_t)c02_s0188;
	*(i8*)(intptr_t)(ws+3648) = v10310;
	i8 v10311 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10311)();

c02_06f7:;

c02_06f3:;

	i1 v10312 = (i1)+25;
	*(i1*)(intptr_t)(ws+3496) = v10312;
	i8 v10313 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10313;
	i8 v10314 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10314)();

}
	void f69_InternalAlloc(void);
	void f136_MidStartsub(void);
	void f257_Generate(void);

// reduce_91 workspace at ws+3384 length ws+24
void f403_reduce_91(void) {

	i8 v10315 = (i8)+16;
	*(i8*)(intptr_t)(ws+3640) = v10315;
	i8 v10316 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v10316)();

	i8 v10317 = *(i8*)(intptr_t)(ws+3648);
	i8 v10318 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10318 = v10317;

	i8 v10319 = (i8)(intptr_t)(ws+3384);
	i8 v10320 = *(i8*)(intptr_t)v10319;
	i8 v10321 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10321 = v10320;

	i8 v10322 = (i8)(intptr_t)(ws+88);
	i8 v10323 = *(i8*)(intptr_t)v10322;
	i8 v10324 = (i8)(intptr_t)(ws+3392);
	i8 v10325 = *(i8*)(intptr_t)v10324;
	i8 v10326 = v10325+(+8);
	*(i8*)(intptr_t)v10326 = v10323;

	i8 v10327 = (i8)(intptr_t)(ws+52);
	i2 v10328 = *(i2*)(intptr_t)v10327;
	i8 v10329 = (i8)(intptr_t)(ws+3392);
	i8 v10330 = *(i8*)(intptr_t)v10329;
	*(i2*)(intptr_t)v10330 = v10328;

	i2 v10331 = (i2)+0;
	i8 v10332 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10332 = v10331;

	i8 v10333 = (i8)(intptr_t)(ws+54);
	i2 v10334 = *(i2*)(intptr_t)v10333;
	i8 v10335 = (i8)(intptr_t)(ws+3392);
	i8 v10336 = *(i8*)(intptr_t)v10335;
	i8 v10337 = v10336+(+2);
	*(i2*)(intptr_t)v10337 = v10334;

	i2 v10338 = (i2)+0;
	i8 v10339 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10339 = v10338;

	i8 v10340 = (i8)(intptr_t)(ws+3392);
	i8 v10341 = *(i8*)(intptr_t)v10340;
	i8 v10342 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v10342 = v10341;

	i8 v10343 = (i8)(intptr_t)(ws+1544);
	i8 v10344 = *(i8*)(intptr_t)v10343;
	i8 v10345 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10345 = v10344;

	i8 v10346 = (i8)(intptr_t)(ws+40);
	i8 v10347 = *(i8*)(intptr_t)v10346;
	*(i8*)(intptr_t)(ws+3408) = v10347;
	i8 v10348 = (i8)(intptr_t)(f136_MidStartsub);

	((void(*)(void))(intptr_t)v10348)();

	i8 v10349 = *(i8*)(intptr_t)(ws+3416);
	i8 v10350 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10350 = v10349;

	i8 v10351 = (i8)(intptr_t)(ws+3400);
	i8 v10352 = *(i8*)(intptr_t)v10351;
	*(i8*)(intptr_t)(ws+3488) = v10352;
	i8 v10353 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10353)();

	i8 v10354 = (i8)(intptr_t)(ws+40);
	i8 v10355 = *(i8*)(intptr_t)v10354;
	i8 v10356 = v10355+(+82);
	i1 v10357 = *(i1*)(intptr_t)v10356;
	i1 v10358 = v10357|(+1);
	i8 v10359 = (i8)(intptr_t)(ws+40);
	i8 v10360 = *(i8*)(intptr_t)v10359;
	i8 v10361 = v10360+(+82);
	*(i1*)(intptr_t)v10361 = v10358;

}
	void f158_MidEndsub(void);
	void f257_Generate(void);
	void f267_ReportWorkspaces(void);
	void f34_Free(void);
	void f263_DestructSubroutineContents(void);
	void f300_yy_destructor(void);

// reduce_92 workspace at ws+3384 length ws+24
void f404_reduce_92(void) {

	i8 v10362 = (i8)(intptr_t)(ws+40);
	i8 v10363 = *(i8*)(intptr_t)v10362;
	*(i8*)(intptr_t)(ws+3408) = v10363;
	i8 v10364 = (i8)(intptr_t)(f158_MidEndsub);

	((void(*)(void))(intptr_t)v10364)();

	i8 v10365 = *(i8*)(intptr_t)(ws+3416);
	i8 v10366 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10366 = v10365;

	i8 v10367 = (i8)(intptr_t)(ws+3384);
	i8 v10368 = *(i8*)(intptr_t)v10367;
	*(i8*)(intptr_t)(ws+3488) = v10368;
	i8 v10369 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10369)();

	i8 v10370 = (i8)(intptr_t)(ws+40);
	i8 v10371 = *(i8*)(intptr_t)v10370;
	*(i8*)(intptr_t)(ws+3408) = v10371;
	i8 v10372 = (i8)(intptr_t)(f267_ReportWorkspaces);

	((void(*)(void))(intptr_t)v10372)();

	i8 v10373 = (i8)(intptr_t)(ws+88);
	i8 v10374 = *(i8*)(intptr_t)v10373;
	i2 v10375 = *(i2*)(intptr_t)v10374;
	i8 v10376 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10376 = v10375;

	i8 v10377 = (i8)(intptr_t)(ws+88);
	i8 v10378 = *(i8*)(intptr_t)v10377;
	i8 v10379 = v10378+(+2);
	i2 v10380 = *(i2*)(intptr_t)v10379;
	i8 v10381 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10381 = v10380;

	i8 v10382 = (i8)(intptr_t)(ws+88);
	i8 v10383 = *(i8*)(intptr_t)v10382;
	i8 v10384 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10384 = v10383;

	i8 v10385 = (i8)(intptr_t)(ws+3392);
	i8 v10386 = *(i8*)(intptr_t)v10385;
	i8 v10387 = v10386+(+8);
	i8 v10388 = *(i8*)(intptr_t)v10387;
	i8 v10389 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v10389 = v10388;

	i8 v10390 = (i8)(intptr_t)(ws+3392);
	i8 v10391 = *(i8*)(intptr_t)v10390;
	*(i8*)(intptr_t)(ws+3680) = v10391;
	i8 v10392 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v10392)();

	i8 v10393 = (i8)(intptr_t)(ws+40);
	i8 v10394 = *(i8*)(intptr_t)v10393;
	i8 v10395 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10395 = v10394;

	i8 v10396 = (i8)(intptr_t)(ws+3400);
	i8 v10397 = *(i8*)(intptr_t)v10396;
	i8 v10398 = v10397+(+8);
	i8 v10399 = *(i8*)(intptr_t)v10398;
	i8 v10400 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10400 = v10399;

	i8 v10401 = (i8)(intptr_t)(ws+3400);
	i8 v10402 = *(i8*)(intptr_t)v10401;
	*(i8*)(intptr_t)(ws+3408) = v10402;
	i8 v10403 = (i8)(intptr_t)(f263_DestructSubroutineContents);

	((void(*)(void))(intptr_t)v10403)();

	i1 v10404 = (i1)+25;
	*(i1*)(intptr_t)(ws+3496) = v10404;
	i8 v10405 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10405;
	i8 v10406 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10406)();

}
	void f204_EmitterEmitInputParameters(void);
	void f205_EmitterEmitOutputParameters(void);

// reduce_93 workspace at ws+3384 length ws+0
void f405_reduce_93(void) {

	i1 v10407 = (i1)+0;
	i8 v10408 = (i8)(intptr_t)(ws+1544);
	i8 v10409 = *(i8*)(intptr_t)v10408;
	i8 v10410 = v10409+(+81);
	*(i1*)(intptr_t)v10410 = v10407;

	i8 v10411 = (i8)(intptr_t)(ws+1544);
	i8 v10412 = *(i8*)(intptr_t)v10411;
	*(i8*)(intptr_t)(ws+3408) = v10412;
	i8 v10413 = (i8)(intptr_t)(f204_EmitterEmitInputParameters);

	((void(*)(void))(intptr_t)v10413)();

	i8 v10414 = (i8)(intptr_t)(ws+1544);
	i8 v10415 = *(i8*)(intptr_t)v10414;
	*(i8*)(intptr_t)(ws+3408) = v10415;
	i8 v10416 = (i8)(intptr_t)(f205_EmitterEmitOutputParameters);

	((void(*)(void))(intptr_t)v10416)();

}
	void f98_CountParameters(void);
	void f204_EmitterEmitInputParameters(void);
	void f205_EmitterEmitOutputParameters(void);
	void f300_yy_destructor(void);

// reduce_94 workspace at ws+3384 length ws+1
void f406_reduce_94(void) {

	i8 v10417 = (i8)(intptr_t)(ws+3304);
	i8 v10418 = *(i8*)(intptr_t)v10417;
	*(i8*)(intptr_t)(ws+3392) = v10418;
	i8 v10419 = (i8)(intptr_t)(f98_CountParameters);

	((void(*)(void))(intptr_t)v10419)();

	i1 v10420 = *(i1*)(intptr_t)(ws+3400);
	i8 v10421 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10421 = v10420;

	i8 v10422 = (i8)(intptr_t)(ws+3384);
	i1 v10423 = *(i1*)(intptr_t)v10422;
	i8 v10424 = (i8)(intptr_t)(ws+1544);
	i8 v10425 = *(i8*)(intptr_t)v10424;
	i8 v10426 = v10425+(+81);
	*(i1*)(intptr_t)v10426 = v10423;

	i8 v10427 = (i8)(intptr_t)(ws+1544);
	i8 v10428 = *(i8*)(intptr_t)v10427;
	*(i8*)(intptr_t)(ws+3408) = v10428;
	i8 v10429 = (i8)(intptr_t)(f204_EmitterEmitInputParameters);

	((void(*)(void))(intptr_t)v10429)();

	i8 v10430 = (i8)(intptr_t)(ws+1544);
	i8 v10431 = *(i8*)(intptr_t)v10430;
	*(i8*)(intptr_t)(ws+3408) = v10431;
	i8 v10432 = (i8)(intptr_t)(f205_EmitterEmitOutputParameters);

	((void(*)(void))(intptr_t)v10432)();

	i1 v10433 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10433;
	i8 v10434 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10434;
	i8 v10435 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10435)();

}
	void f98_CountParameters(void);

// reduce_95 workspace at ws+3384 length ws+1
void f407_reduce_95(void) {

	i8 v10436 = (i8)(intptr_t)(ws+3304);
	i8 v10437 = *(i8*)(intptr_t)v10436;
	*(i8*)(intptr_t)(ws+3392) = v10437;
	i8 v10438 = (i8)(intptr_t)(f98_CountParameters);

	((void(*)(void))(intptr_t)v10438)();

	i1 v10439 = *(i1*)(intptr_t)(ws+3400);
	i8 v10440 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10440 = v10439;

	i8 v10441 = (i8)(intptr_t)(ws+3384);
	i1 v10442 = *(i1*)(intptr_t)v10441;
	i8 v10443 = (i8)(intptr_t)(ws+1544);
	i8 v10444 = *(i8*)(intptr_t)v10443;
	i8 v10445 = v10444+(+80);
	*(i1*)(intptr_t)v10445 = v10442;

}
	void f300_yy_destructor(void);

// reduce_96 workspace at ws+3384 length ws+0
void f408_reduce_96(void) {

	i8 v10446 = (i8)+0;
	i8 v10447 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10447 = v10446;

	i1 v10448 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10448;
	i8 v10449 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10449;
	i8 v10450 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10450)();

}
	void f300_yy_destructor(void);

// reduce_97 workspace at ws+3384 length ws+0
void f409_reduce_97(void) {

	i8 v10451 = (i8)(intptr_t)(ws+3312);
	i8 v10452 = *(i8*)(intptr_t)v10451;
	i8 v10453 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10453 = v10452;

	i1 v10454 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10454;
	i8 v10455 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10455;
	i8 v10456 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10456)();

}

// reduce_98 workspace at ws+3384 length ws+0
void f410_reduce_98(void) {

	i8 v10457 = (i8)(intptr_t)(ws+3304);
	i8 v10458 = *(i8*)(intptr_t)v10457;
	i8 v10459 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10459 = v10458;

}
	void f300_yy_destructor(void);

// reduce_99 workspace at ws+3384 length ws+0
void f411_reduce_99(void) {

	i8 v10460 = (i8)(intptr_t)(ws+3304);
	i8 v10461 = *(i8*)(intptr_t)v10460;
	i8 v10462 = (i8)(intptr_t)(ws+3320);
	i8 v10463 = *(i8*)(intptr_t)v10462;
	i8 v10464 = *(i8*)(intptr_t)v10463;
	i8 v10465 = v10464+(+16);
	*(i8*)(intptr_t)v10465 = v10461;

	i8 v10466 = (i8)(intptr_t)(ws+3320);
	i8 v10467 = *(i8*)(intptr_t)v10466;
	i8 v10468 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10468 = v10467;

	i1 v10469 = (i1)+45;
	*(i1*)(intptr_t)(ws+3496) = v10469;
	i8 v10470 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10470;
	i8 v10471 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10471)();

}
	void f219_AddSymbol(void);
	void f260_InitVariable(void);
	void f300_yy_destructor(void);

// reduce_100 workspace at ws+3384 length ws+8
void f412_reduce_100(void) {

	i8 v10472 = (i8)(intptr_t)(ws+1544);
	i8 v10473 = *(i8*)(intptr_t)v10472;
	i8 v10474 = v10473+(+16);
	*(i8*)(intptr_t)(ws+3488) = v10474;
	i8 v10475 = (i8)(intptr_t)(ws+3320);
	i8 v10476 = *(i8*)(intptr_t)v10475;
	*(i8*)(intptr_t)(ws+3496) = v10476;
	i8 v10477 = (i8)(intptr_t)(f219_AddSymbol);

	((void(*)(void))(intptr_t)v10477)();

	i8 v10478 = *(i8*)(intptr_t)(ws+3504);
	i8 v10479 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10479 = v10478;

	i8 v10480 = (i8)(intptr_t)(ws+3384);
	i8 v10481 = *(i8*)(intptr_t)v10480;
	i8 v10482 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10482 = v10481;

	i8 v10483 = (i8)(intptr_t)(ws+1544);
	i8 v10484 = *(i8*)(intptr_t)v10483;
	*(i8*)(intptr_t)(ws+3488) = v10484;
	i8 v10485 = (i8)(intptr_t)(ws+3296);
	i8 v10486 = *(i8*)(intptr_t)v10485;
	*(i8*)(intptr_t)(ws+3496) = v10486;
	i8 v10487 = (i8)(intptr_t)(ws+3304);
	i8 v10488 = *(i8*)(intptr_t)v10487;
	*(i8*)(intptr_t)(ws+3504) = v10488;
	i8 v10489 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(void))(intptr_t)v10489)();

	i1 v10490 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10490;
	i8 v10491 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10491;
	i8 v10492 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10492)();

}
	void f239_ArchAlignUp(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_101 workspace at ws+3384 length ws+2
void f413_reduce_101(void) {

	i8 v10493 = (i8)(intptr_t)(ws+72);
	i8 v10494 = *(i8*)(intptr_t)v10493;
	i8 v10495 = v10494+(+48);
	i2 v10496 = *(i2*)(intptr_t)v10495;
	*(i2*)(intptr_t)(ws+3544) = v10496;
	i8 v10497 = (i8)(intptr_t)(ws+72);
	i8 v10498 = *(i8*)(intptr_t)v10497;
	i8 v10499 = v10498+(+53);
	i1 v10500 = *(i1*)(intptr_t)v10499;
	*(i1*)(intptr_t)(ws+3546) = v10500;
	i8 v10501 = (i8)(intptr_t)(f239_ArchAlignUp);

	((void(*)(void))(intptr_t)v10501)();

	i2 v10502 = *(i2*)(intptr_t)(ws+3548);
	i8 v10503 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v10503 = v10502;

	i8 v10504 = (i8)(intptr_t)(ws+3384);
	i2 v10505 = *(i2*)(intptr_t)v10504;
	i8 v10506 = (i8)(intptr_t)(ws+72);
	i8 v10507 = *(i8*)(intptr_t)v10506;
	i8 v10508 = v10507+(+50);
	*(i2*)(intptr_t)v10508 = v10505;

	i1 v10509 = (i1)+65;
	*(i1*)(intptr_t)(ws+3496) = v10509;
	i8 v10510 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v10510;
	i8 v10511 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10511)();

	i1 v10512 = (i1)+10;
	*(i1*)(intptr_t)(ws+3496) = v10512;
	i8 v10513 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10513;
	i8 v10514 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10514)();

	i1 v10515 = (i1)+20;
	*(i1*)(intptr_t)(ws+3496) = v10515;
	i8 v10516 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10516;
	i8 v10517 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10517)();

}
	void f293_SymbolRedeclarationError(void);
	void f66_AllocNewType(void);
	void f293_SymbolRedeclarationError(void);

// reduce_102 workspace at ws+3384 length ws+8
void f414_reduce_102(void) {

	i8 v10518 = (i8)(intptr_t)(ws+3304);
	i8 v10519 = *(i8*)(intptr_t)v10518;
	i8 v10520 = v10519+(+32);
	i1 v10521 = *(i1*)(intptr_t)v10520;

	if (v10521 != +30) goto c02_06f9;

	i8 v10522 = (i8)(intptr_t)(ws+3304);
	i8 v10523 = *(i8*)(intptr_t)v10522;
	i8 v10524 = *(i8*)(intptr_t)v10523;
	i8 v10525 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10525 = v10524;

	i8 v10526 = (i8)(intptr_t)(ws+72);
	i8 v10527 = *(i8*)(intptr_t)v10526;
	i8 v10528 = v10527+(+52);
	i1 v10529 = *(i1*)(intptr_t)v10528;
	i1 v10530 = (i1)+1;
	if (v10529==v10530) goto c02_06fe; else goto c02_06fd;

c02_06fd:;

	i8 v10531 = (i8)(intptr_t)(f293_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v10531)();

c02_06fe:;

c02_06fa:;

	goto c02_06f8;

c02_06f9:;

	if (v10521 != +0) goto c02_06ff;

	i8 v10532 = (i8)(intptr_t)(f66_AllocNewType);

	((void(*)(void))(intptr_t)v10532)();

	i8 v10533 = *(i8*)(intptr_t)(ws+3528);
	i8 v10534 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10534 = v10533;

	i8 v10535 = (i8)(intptr_t)(ws+3384);
	i8 v10536 = *(i8*)(intptr_t)v10535;
	i8 v10537 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10537 = v10536;

	i1 v10538 = (i1)+30;
	i8 v10539 = (i8)(intptr_t)(ws+3304);
	i8 v10540 = *(i8*)(intptr_t)v10539;
	i8 v10541 = v10540+(+32);
	*(i1*)(intptr_t)v10541 = v10538;

	i8 v10542 = (i8)(intptr_t)(ws+72);
	i8 v10543 = *(i8*)(intptr_t)v10542;
	i8 v10544 = (i8)(intptr_t)(ws+3304);
	i8 v10545 = *(i8*)(intptr_t)v10544;
	*(i8*)(intptr_t)v10545 = v10543;

	i8 v10546 = (i8)(intptr_t)(ws+3304);
	i8 v10547 = *(i8*)(intptr_t)v10546;
	i8 v10548 = (i8)(intptr_t)(ws+72);
	i8 v10549 = *(i8*)(intptr_t)v10548;
	i8 v10550 = v10549+(+32);
	*(i8*)(intptr_t)v10550 = v10547;

	goto c02_06f8;

c02_06ff:;

	i8 v10551 = (i8)(intptr_t)(f293_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v10551)();

c02_06f8:;


	i1 v10552 = (i1)+5;
	i8 v10553 = (i8)(intptr_t)(ws+72);
	i8 v10554 = *(i8*)(intptr_t)v10553;
	i8 v10555 = v10554+(+52);
	*(i1*)(intptr_t)v10555 = v10552;

}
	void f222_CheckNotPartialType(void);
	void f231_IsRecord(void);
	void f74_StartError(void);
	void f12_print(void);
const i1 c02_s0189[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(void);
	void f75_EndError(void);

// reduce_103 workspace at ws+3384 length ws+1
void f415_reduce_103(void) {

	i8 v10556 = (i8)(intptr_t)(ws+3304);
	i8 v10557 = *(i8*)(intptr_t)v10556;
	*(i8*)(intptr_t)(ws+3520) = v10557;
	i8 v10558 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v10558)();

	i8 v10559 = (i8)(intptr_t)(ws+3304);
	i8 v10560 = *(i8*)(intptr_t)v10559;
	*(i8*)(intptr_t)(ws+3488) = v10560;
	i8 v10561 = (i8)(intptr_t)(f231_IsRecord);

	((void(*)(void))(intptr_t)v10561)();

	i1 v10562 = *(i1*)(intptr_t)(ws+3496);
	i8 v10563 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10563 = v10562;

	i8 v10564 = (i8)(intptr_t)(ws+3384);
	i1 v10565 = *(i1*)(intptr_t)v10564;
	i1 v10566 = (i1)+0;
	if (v10565==v10566) goto c02_0703; else goto c02_0704;

c02_0703:;

	i8 v10567 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v10567)();

	i8 v10568 = (i8)(intptr_t)(ws+3304);
	i8 v10569 = *(i8*)(intptr_t)v10568;
	i8 v10570 = v10569+(+32);
	i8 v10571 = *(i8*)(intptr_t)v10570;
	i8 v10572 = v10571+(+8);
	i8 v10573 = *(i8*)(intptr_t)v10572;
	*(i8*)(intptr_t)(ws+3696) = v10573;
	i8 v10574 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v10574)();

	i8 v10575 = (i8)(intptr_t)c02_s0189;
	*(i8*)(intptr_t)(ws+3696) = v10575;
	i8 v10576 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v10576)();

	i8 v10577 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v10577)();

c02_0704:;

c02_0700:;

	i8 v10578 = (i8)(intptr_t)(ws+3304);
	i8 v10579 = *(i8*)(intptr_t)v10578;
	i8 v10580 = v10579+(+53);
	i1 v10581 = *(i1*)(intptr_t)v10580;
	i8 v10582 = (i8)(intptr_t)(ws+72);
	i8 v10583 = *(i8*)(intptr_t)v10582;
	i8 v10584 = v10583+(+53);
	*(i1*)(intptr_t)v10584 = v10581;

	i8 v10585 = (i8)(intptr_t)(ws+3304);
	i8 v10586 = *(i8*)(intptr_t)v10585;
	i8 v10587 = v10586+(+48);
	i2 v10588 = *(i2*)(intptr_t)v10587;
	i8 v10589 = (i8)(intptr_t)(ws+72);
	i8 v10590 = *(i8*)(intptr_t)v10589;
	i8 v10591 = v10590+(+48);
	*(i2*)(intptr_t)v10591 = v10588;

	i8 v10592 = (i8)(intptr_t)(ws+3304);
	i8 v10593 = *(i8*)(intptr_t)v10592;
	i8 v10594 = (i8)(intptr_t)(ws+72);
	i8 v10595 = *(i8*)(intptr_t)v10594;
	i8 v10596 = v10595+(+16);
	*(i8*)(intptr_t)v10596 = v10593;

}
	void f222_CheckNotPartialType(void);
	void f69_InternalAlloc(void);
	void f243_ArchInitMember(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_104 workspace at ws+3384 length ws+8
void f416_reduce_104(void) {

	i8 v10597 = (i8)(intptr_t)(ws+3312);
	i8 v10598 = *(i8*)(intptr_t)v10597;
	*(i8*)(intptr_t)(ws+3520) = v10598;
	i8 v10599 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v10599)();

	i8 v10600 = (i8)(intptr_t)(ws+72);
	i8 v10601 = *(i8*)(intptr_t)v10600;
	i8 v10602 = v10601+(+53);
	i1 v10603 = *(i1*)(intptr_t)v10602;
	i8 v10604 = (i8)(intptr_t)(ws+3312);
	i8 v10605 = *(i8*)(intptr_t)v10604;
	i8 v10606 = v10605+(+53);
	i1 v10607 = *(i1*)(intptr_t)v10606;
	if (v10603<v10607) goto c02_0708; else goto c02_0709;

c02_0708:;

	i8 v10608 = (i8)(intptr_t)(ws+3312);
	i8 v10609 = *(i8*)(intptr_t)v10608;
	i8 v10610 = v10609+(+53);
	i1 v10611 = *(i1*)(intptr_t)v10610;
	i8 v10612 = (i8)(intptr_t)(ws+72);
	i8 v10613 = *(i8*)(intptr_t)v10612;
	i8 v10614 = v10613+(+53);
	*(i1*)(intptr_t)v10614 = v10611;

c02_0709:;

c02_0705:;

	i1 v10615 = (i1)+28;
	i8 v10616 = (i8)(intptr_t)(ws+3336);
	i8 v10617 = *(i8*)(intptr_t)v10616;
	i8 v10618 = v10617+(+32);
	*(i1*)(intptr_t)v10618 = v10615;

	i8 v10619 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v10619;
	i8 v10620 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v10620)();

	i8 v10621 = *(i8*)(intptr_t)(ws+3648);
	i8 v10622 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10622 = v10621;

	i8 v10623 = (i8)(intptr_t)(ws+3384);
	i8 v10624 = *(i8*)(intptr_t)v10623;
	i8 v10625 = (i8)(intptr_t)(ws+3336);
	i8 v10626 = *(i8*)(intptr_t)v10625;
	*(i8*)(intptr_t)v10626 = v10624;

	i8 v10627 = (i8)(intptr_t)(ws+3312);
	i8 v10628 = *(i8*)(intptr_t)v10627;
	i8 v10629 = (i8)(intptr_t)(ws+3336);
	i8 v10630 = *(i8*)(intptr_t)v10629;
	i8 v10631 = *(i8*)(intptr_t)v10630;
	*(i8*)(intptr_t)v10631 = v10628;

	i8 v10632 = (i8)(intptr_t)(ws+72);
	i8 v10633 = *(i8*)(intptr_t)v10632;
	*(i8*)(intptr_t)(ws+3392) = v10633;
	i8 v10634 = (i8)(intptr_t)(ws+3336);
	i8 v10635 = *(i8*)(intptr_t)v10634;
	*(i8*)(intptr_t)(ws+3400) = v10635;
	i8 v10636 = (i8)(intptr_t)(ws+3328);
	i2 v10637 = *(i2*)(intptr_t)v10636;
	*(i2*)(intptr_t)(ws+3408) = v10637;
	i8 v10638 = (i8)(intptr_t)(f243_ArchInitMember);

	((void(*)(void))(intptr_t)v10638)();

	i1 v10639 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10639;
	i8 v10640 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10640;
	i8 v10641 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10641)();

	i1 v10642 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10642;
	i8 v10643 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10643;
	i8 v10644 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10644)();

}

// reduce_105 workspace at ws+3384 length ws+0
void f417_reduce_105(void) {

	i8 v10645 = (i8)(intptr_t)(ws+72);
	i8 v10646 = *(i8*)(intptr_t)v10645;
	i8 v10647 = v10646+(+48);
	i2 v10648 = *(i2*)(intptr_t)v10647;
	i8 v10649 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v10649 = v10648;

}
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_106 workspace at ws+3384 length ws+0
void f418_reduce_106(void) {

	i8 v10650 = (i8)(intptr_t)(ws+3312);
	i4 v10651 = *(i4*)(intptr_t)v10650;
	i2 v10652 = (s2)(s4)v10651;
	i8 v10653 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v10653 = v10652;

	i1 v10654 = (i1)+16;
	*(i1*)(intptr_t)(ws+3496) = v10654;
	i8 v10655 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10655;
	i8 v10656 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10656)();

	i1 v10657 = (i1)+4;
	*(i1*)(intptr_t)(ws+3496) = v10657;
	i8 v10658 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10658;
	i8 v10659 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10659)();

}
	void f219_AddSymbol(void);

// reduce_107 workspace at ws+3384 length ws+8
void f419_reduce_107(void) {

	i8 v10660 = (i8)(intptr_t)(ws+72);
	i8 v10661 = *(i8*)(intptr_t)v10660;
	*(i8*)(intptr_t)(ws+3488) = v10661;
	i8 v10662 = (i8)(intptr_t)(ws+3304);
	i8 v10663 = *(i8*)(intptr_t)v10662;
	*(i8*)(intptr_t)(ws+3496) = v10663;
	i8 v10664 = (i8)(intptr_t)(f219_AddSymbol);

	((void(*)(void))(intptr_t)v10664)();

	i8 v10665 = *(i8*)(intptr_t)(ws+3504);
	i8 v10666 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10666 = v10665;

	i8 v10667 = (i8)(intptr_t)(ws+3384);
	i8 v10668 = *(i8*)(intptr_t)v10667;
	i8 v10669 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10669 = v10668;

	i8 v10670 = (i8)(intptr_t)(ws+72);
	i8 v10671 = *(i8*)(intptr_t)v10670;
	i8 v10672 = v10671+(+24);
	i1 v10673 = *(i1*)(intptr_t)v10672;
	i1 v10674 = v10673+(+1);
	i8 v10675 = (i8)(intptr_t)(ws+72);
	i8 v10676 = *(i8*)(intptr_t)v10675;
	i8 v10677 = v10676+(+24);
	*(i1*)(intptr_t)v10677 = v10674;

}
	void f295_CheckEndOfInitialiser(void);
	void f155_MidEndinit(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_108 workspace at ws+3384 length ws+8
void f420_reduce_108(void) {

	i8 v10678 = (i8)(intptr_t)(f295_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v10678)();

	i8 v10679 = (i8)(intptr_t)(f155_MidEndinit);

	((void(*)(void))(intptr_t)v10679)();

	i8 v10680 = *(i8*)(intptr_t)(ws+3392);
	i8 v10681 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10681 = v10680;

	i8 v10682 = (i8)(intptr_t)(ws+3384);
	i8 v10683 = *(i8*)(intptr_t)v10682;
	*(i8*)(intptr_t)(ws+3488) = v10683;
	i8 v10684 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10684)();

	i1 v10685 = (i1)+31;
	*(i1*)(intptr_t)(ws+3496) = v10685;
	i8 v10686 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)(ws+3504) = v10686;
	i8 v10687 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10687)();

	i1 v10688 = (i1)+32;
	*(i1*)(intptr_t)(ws+3496) = v10688;
	i8 v10689 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v10689;
	i8 v10690 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10690)();

	i1 v10691 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v10691;
	i8 v10692 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10692;
	i8 v10693 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10693)();

}
	void f222_CheckNotPartialType(void);
	void f69_InternalAlloc(void);
	void f236_AllocLabel(void);
	void f226_IsArray(void);
	void f231_IsRecord(void);
const i1 c02_s018a[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(void);
	void f231_IsRecord(void);
const i1 c02_s018b[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f76_SimpleError(void);
	void f231_IsRecord(void);
	void f140_MidStartinit(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_109 workspace at ws+3384 length ws+24
void f421_reduce_109(void) {

	i8 v10694 = (i8)(intptr_t)(ws+3312);
	i8 v10695 = *(i8*)(intptr_t)v10694;
	*(i8*)(intptr_t)(ws+3520) = v10695;
	i8 v10696 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(void))(intptr_t)v10696)();

	i1 v10697 = (i1)+28;
	i8 v10698 = (i8)(intptr_t)(ws+3328);
	i8 v10699 = *(i8*)(intptr_t)v10698;
	i8 v10700 = v10699+(+32);
	*(i1*)(intptr_t)v10700 = v10697;

	i8 v10701 = (i8)+27;
	*(i8*)(intptr_t)(ws+3640) = v10701;
	i8 v10702 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v10702)();

	i8 v10703 = *(i8*)(intptr_t)(ws+3648);
	i8 v10704 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10704 = v10703;

	i8 v10705 = (i8)(intptr_t)(ws+3384);
	i8 v10706 = *(i8*)(intptr_t)v10705;
	i8 v10707 = (i8)(intptr_t)(ws+3328);
	i8 v10708 = *(i8*)(intptr_t)v10707;
	*(i8*)(intptr_t)v10708 = v10706;

	i8 v10709 = (i8)(intptr_t)(ws+3312);
	i8 v10710 = *(i8*)(intptr_t)v10709;
	i8 v10711 = (i8)(intptr_t)(ws+3328);
	i8 v10712 = *(i8*)(intptr_t)v10711;
	i8 v10713 = *(i8*)(intptr_t)v10712;
	*(i8*)(intptr_t)v10713 = v10710;

	i8 v10714 = (i8)(intptr_t)(ws+40);
	i8 v10715 = *(i8*)(intptr_t)v10714;
	i8 v10716 = (i8)(intptr_t)(ws+3328);
	i8 v10717 = *(i8*)(intptr_t)v10716;
	i8 v10718 = *(i8*)(intptr_t)v10717;
	i8 v10719 = v10718+(+8);
	*(i8*)(intptr_t)v10719 = v10715;

	i1 v10720 = (i1)+255;
	i8 v10721 = (i8)(intptr_t)(ws+3328);
	i8 v10722 = *(i8*)(intptr_t)v10721;
	i8 v10723 = *(i8*)(intptr_t)v10722;
	i8 v10724 = v10723+(+26);
	*(i1*)(intptr_t)v10724 = v10720;

	i8 v10725 = (i8)(intptr_t)(f236_AllocLabel);

	((void(*)(void))(intptr_t)v10725)();

	i2 v10726 = *(i2*)(intptr_t)(ws+3472);
	i8 v10727 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v10727 = v10726;

	i8 v10728 = (i8)(intptr_t)(ws+3392);
	i2 v10729 = *(i2*)(intptr_t)v10728;
	i8 v10730 = (i8)(intptr_t)(ws+3328);
	i8 v10731 = *(i8*)(intptr_t)v10730;
	i8 v10732 = *(i8*)(intptr_t)v10731;
	i8 v10733 = v10732+(+24);
	*(i2*)(intptr_t)v10733 = v10729;

	i8 v10734 = (i8)(intptr_t)(ws+3312);
	i8 v10735 = *(i8*)(intptr_t)v10734;
	*(i8*)(intptr_t)(ws+3496) = v10735;
	i8 v10736 = (i8)(intptr_t)(f226_IsArray);

	((void(*)(void))(intptr_t)v10736)();

	i1 v10737 = *(i1*)(intptr_t)(ws+3504);
	i8 v10738 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v10738 = v10737;

	i8 v10739 = (i8)(intptr_t)(ws+3312);
	i8 v10740 = *(i8*)(intptr_t)v10739;
	*(i8*)(intptr_t)(ws+3488) = v10740;
	i8 v10741 = (i8)(intptr_t)(f231_IsRecord);

	((void(*)(void))(intptr_t)v10741)();

	i1 v10742 = *(i1*)(intptr_t)(ws+3496);
	i8 v10743 = (i8)(intptr_t)(ws+3395);
	*(i1*)(intptr_t)v10743 = v10742;

	i8 v10744 = (i8)(intptr_t)(ws+3394);
	i1 v10745 = *(i1*)(intptr_t)v10744;
	i1 v10746 = (i1)+0;
	if (v10745==v10746) goto c02_0711; else goto c02_0710;

c02_0711:;

	i8 v10747 = (i8)(intptr_t)(ws+3395);
	i1 v10748 = *(i1*)(intptr_t)v10747;
	i1 v10749 = (i1)+0;
	if (v10748==v10749) goto c02_070f; else goto c02_0710;

c02_070f:;

	i8 v10750 = (i8)(intptr_t)c02_s018a;
	*(i8*)(intptr_t)(ws+3648) = v10750;
	i8 v10751 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10751)();

c02_0710:;

c02_070a:;

	i8 v10752 = (i8)(intptr_t)(ws+3312);
	i8 v10753 = *(i8*)(intptr_t)v10752;
	*(i8*)(intptr_t)(ws+3488) = v10753;
	i8 v10754 = (i8)(intptr_t)(f231_IsRecord);

	((void(*)(void))(intptr_t)v10754)();

	i1 v10755 = *(i1*)(intptr_t)(ws+3496);
	i8 v10756 = (i8)(intptr_t)(ws+3396);
	*(i1*)(intptr_t)v10756 = v10755;

	i8 v10757 = (i8)(intptr_t)(ws+3396);
	i1 v10758 = *(i1*)(intptr_t)v10757;
	i1 v10759 = (i1)+0;
	if (v10758==v10759) goto c02_0718; else goto c02_0719;

c02_0719:;

	i8 v10760 = (i8)(intptr_t)(ws+3312);
	i8 v10761 = *(i8*)(intptr_t)v10760;
	i8 v10762 = v10761+(+16);
	i8 v10763 = *(i8*)(intptr_t)v10762;
	i8 v10764 = (i8)+0;
	if (v10763==v10764) goto c02_0718; else goto c02_0717;

c02_0717:;

	i8 v10765 = (i8)(intptr_t)c02_s018b;
	*(i8*)(intptr_t)(ws+3648) = v10765;
	i8 v10766 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10766)();

c02_0718:;

c02_0712:;

	i8 v10767 = (i8)(intptr_t)(ws+3312);
	i8 v10768 = *(i8*)(intptr_t)v10767;
	*(i8*)(intptr_t)(ws+3488) = v10768;
	i8 v10769 = (i8)(intptr_t)(f231_IsRecord);

	((void(*)(void))(intptr_t)v10769)();

	i1 v10770 = *(i1*)(intptr_t)(ws+3496);
	i8 v10771 = (i8)(intptr_t)(ws+3397);
	*(i1*)(intptr_t)v10771 = v10770;

	i8 v10772 = (i8)(intptr_t)(ws+3397);
	i1 v10773 = *(i1*)(intptr_t)v10772;
	i1 v10774 = (i1)+0;
	if (v10773==v10774) goto c02_071e; else goto c02_071d;

c02_071d:;

	i8 v10775 = (i8)(intptr_t)(ws+3312);
	i8 v10776 = *(i8*)(intptr_t)v10775;
	i8 v10777 = *(i8*)(intptr_t)v10776;
	i8 v10778 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10778 = v10777;

c02_071e:;

c02_071a:;

	i8 v10779 = (i8)(intptr_t)(ws+3312);
	i8 v10780 = *(i8*)(intptr_t)v10779;
	i8 v10781 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10781 = v10780;

	i2 v10782 = (i2)+0;
	i8 v10783 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10783 = v10782;

	i2 v10784 = (i2)+0;
	i8 v10785 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v10785 = v10784;

	i8 v10786 = (i8)(intptr_t)(ws+3328);
	i8 v10787 = *(i8*)(intptr_t)v10786;
	*(i8*)(intptr_t)(ws+3408) = v10787;
	i8 v10788 = (i8)(intptr_t)(f140_MidStartinit);

	((void(*)(void))(intptr_t)v10788)();

	i8 v10789 = *(i8*)(intptr_t)(ws+3416);
	i8 v10790 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10790 = v10789;

	i8 v10791 = (i8)(intptr_t)(ws+3400);
	i8 v10792 = *(i8*)(intptr_t)v10791;
	*(i8*)(intptr_t)(ws+3488) = v10792;
	i8 v10793 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10793)();

	i1 v10794 = (i1)+6;
	*(i1*)(intptr_t)(ws+3496) = v10794;
	i8 v10795 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v10795;
	i8 v10796 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10796)();

	i1 v10797 = (i1)+2;
	*(i1*)(intptr_t)(ws+3496) = v10797;
	i8 v10798 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10798;
	i8 v10799 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10799)();

}
	void f299_GetInitedMemberChecked(void);
	void f297_AlignTo(void);
	void f228_IsNum(void);
const i1 c02_s018c[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f76_SimpleError(void);
	void f123_MidInit(void);
	void f257_Generate(void);
	void f68_IsPtr(void);
const i1 c02_s018d[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f76_SimpleError(void);
	void f107_MidInitstring(void);
	void f257_Generate(void);
const i1 c02_s018e[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(void);
	void f137_MidInitaddress(void);
	void f257_Generate(void);
const i1 c02_s018f[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(void);
	void f161_MidInitsubref(void);
	void f257_Generate(void);
	void f290_parser_i_constant_error(void);
	void f63_Discard(void);

// reduce_110 workspace at ws+3384 length ws+64
void f422_reduce_110(void) {

	i8 v10800 = (i8)(intptr_t)(f299_GetInitedMemberChecked);

	((void(*)(void))(intptr_t)v10800)();

	i8 v10801 = *(i8*)(intptr_t)(ws+3456);
	i8 v10802 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10802 = v10801;

	i8 v10803 = *(i8*)(intptr_t)(ws+3448);
	i8 v10804 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10804 = v10803;

	i8 v10805 = (i8)(intptr_t)(ws+3392);
	i8 v10806 = *(i8*)(intptr_t)v10805;
	i8 v10807 = v10806+(+53);
	i1 v10808 = *(i1*)(intptr_t)v10807;
	*(i1*)(intptr_t)(ws+3464) = v10808;
	i8 v10809 = (i8)(intptr_t)(f297_AlignTo);

	((void(*)(void))(intptr_t)v10809)();

	i8 v10810 = (i8)(intptr_t)(ws+3392);
	i8 v10811 = *(i8*)(intptr_t)v10810;
	i8 v10812 = v10811+(+48);
	i2 v10813 = *(i2*)(intptr_t)v10812;
	i8 v10814 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v10814 = v10813;

	i8 v10815 = (i8)(intptr_t)(ws+3304);
	i8 v10816 = *(i8*)(intptr_t)v10815;
	i8 v10817 = v10816+(+48);
	i1 v10818 = *(i1*)(intptr_t)v10817;

	if (v10818 != +40) goto c02_0720;

	i8 v10819 = (i8)(intptr_t)(ws+3392);
	i8 v10820 = *(i8*)(intptr_t)v10819;
	*(i8*)(intptr_t)(ws+3560) = v10820;
	i8 v10821 = (i8)(intptr_t)(f228_IsNum);

	((void(*)(void))(intptr_t)v10821)();

	i1 v10822 = *(i1*)(intptr_t)(ws+3568);
	i8 v10823 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v10823 = v10822;

	i8 v10824 = (i8)(intptr_t)(ws+3402);
	i1 v10825 = *(i1*)(intptr_t)v10824;
	i1 v10826 = (i1)+0;
	if (v10825==v10826) goto c02_0724; else goto c02_0725;

c02_0724:;

	i8 v10827 = (i8)(intptr_t)c02_s018c;
	*(i8*)(intptr_t)(ws+3648) = v10827;
	i8 v10828 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10828)();

c02_0725:;

c02_0721:;

	i8 v10829 = (i8)(intptr_t)(ws+3400);
	i2 v10830 = *(i2*)(intptr_t)v10829;
	i1 v10831 = v10830;
	*(i1*)(intptr_t)(ws+3480) = v10831;
	i8 v10832 = (i8)(intptr_t)(ws+3304);
	i8 v10833 = *(i8*)(intptr_t)v10832;
	i4 v10834 = *(i4*)(intptr_t)v10833;
	*(i4*)(intptr_t)(ws+3484) = v10834;
	i8 v10835 = (i8)(intptr_t)(f123_MidInit);

	((void(*)(void))(intptr_t)v10835)();

	i8 v10836 = *(i8*)(intptr_t)(ws+3488);
	i8 v10837 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10837 = v10836;

	i8 v10838 = (i8)(intptr_t)(ws+3408);
	i8 v10839 = *(i8*)(intptr_t)v10838;
	*(i8*)(intptr_t)(ws+3488) = v10839;
	i8 v10840 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10840)();

	goto c02_071f;

c02_0720:;

	if (v10818 != +41) goto c02_0726;

	i8 v10841 = (i8)(intptr_t)(ws+3392);
	i8 v10842 = *(i8*)(intptr_t)v10841;
	*(i8*)(intptr_t)(ws+3560) = v10842;
	i8 v10843 = (i8)(intptr_t)(f68_IsPtr);

	((void(*)(void))(intptr_t)v10843)();

	i1 v10844 = *(i1*)(intptr_t)(ws+3568);
	i8 v10845 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v10845 = v10844;

	i8 v10846 = (i8)(intptr_t)(ws+3416);
	i1 v10847 = *(i1*)(intptr_t)v10846;
	i1 v10848 = (i1)+0;
	if (v10847==v10848) goto c02_072c; else goto c02_072e;

c02_072e:;

	i8 v10849 = (i8)(intptr_t)(ws+3392);
	i8 v10850 = *(i8*)(intptr_t)v10849;
	i8 v10851 = *(i8*)(intptr_t)v10850;
	i8 v10852 = (i8)(intptr_t)(ws+1512);
	i8 v10853 = *(i8*)(intptr_t)v10852;
	if (v10851==v10853) goto c02_072d; else goto c02_072c;

c02_072c:;

	i8 v10854 = (i8)(intptr_t)c02_s018d;
	*(i8*)(intptr_t)(ws+3648) = v10854;
	i8 v10855 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10855)();

c02_072d:;

c02_0727:;

	i8 v10856 = (i8)(intptr_t)(ws+3304);
	i8 v10857 = *(i8*)(intptr_t)v10856;
	i8 v10858 = *(i8*)(intptr_t)v10857;
	*(i8*)(intptr_t)(ws+3448) = v10858;
	i8 v10859 = (i8)(intptr_t)(f107_MidInitstring);

	((void(*)(void))(intptr_t)v10859)();

	i8 v10860 = *(i8*)(intptr_t)(ws+3456);
	i8 v10861 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v10861 = v10860;

	i8 v10862 = (i8)(intptr_t)(ws+3424);
	i8 v10863 = *(i8*)(intptr_t)v10862;
	*(i8*)(intptr_t)(ws+3488) = v10863;
	i8 v10864 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10864)();

	goto c02_071f;

c02_0726:;

	if (v10818 != +42) goto c02_072f;

	i8 v10865 = (i8)(intptr_t)(ws+3392);
	i8 v10866 = *(i8*)(intptr_t)v10865;
	i8 v10867 = (i8)(intptr_t)(ws+3304);
	i8 v10868 = *(i8*)(intptr_t)v10867;
	i8 v10869 = v10868+(+24);
	i8 v10870 = *(i8*)(intptr_t)v10869;
	if (v10866==v10870) goto c02_0734; else goto c02_0733;

c02_0733:;

	i8 v10871 = (i8)(intptr_t)c02_s018e;
	*(i8*)(intptr_t)(ws+3648) = v10871;
	i8 v10872 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10872)();

c02_0734:;

c02_0730:;

	i8 v10873 = (i8)(intptr_t)(ws+3304);
	i8 v10874 = *(i8*)(intptr_t)v10873;
	i8 v10875 = *(i8*)(intptr_t)v10874;
	*(i8*)(intptr_t)(ws+3448) = v10875;
	i8 v10876 = (i8)(intptr_t)(ws+3304);
	i8 v10877 = *(i8*)(intptr_t)v10876;
	i8 v10878 = v10877+(+8);
	i2 v10879 = *(i2*)(intptr_t)v10878;
	*(i2*)(intptr_t)(ws+3456) = v10879;
	i8 v10880 = (i8)(intptr_t)(f137_MidInitaddress);

	((void(*)(void))(intptr_t)v10880)();

	i8 v10881 = *(i8*)(intptr_t)(ws+3464);
	i8 v10882 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v10882 = v10881;

	i8 v10883 = (i8)(intptr_t)(ws+3432);
	i8 v10884 = *(i8*)(intptr_t)v10883;
	*(i8*)(intptr_t)(ws+3488) = v10884;
	i8 v10885 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10885)();

	goto c02_071f;

c02_072f:;

	if (v10818 != +43) goto c02_0735;

	i8 v10886 = (i8)(intptr_t)(ws+3392);
	i8 v10887 = *(i8*)(intptr_t)v10886;
	i8 v10888 = (i8)(intptr_t)(ws+3304);
	i8 v10889 = *(i8*)(intptr_t)v10888;
	i8 v10890 = v10889+(+24);
	i8 v10891 = *(i8*)(intptr_t)v10890;
	if (v10887==v10891) goto c02_073a; else goto c02_0739;

c02_0739:;

	i8 v10892 = (i8)(intptr_t)c02_s018f;
	*(i8*)(intptr_t)(ws+3648) = v10892;
	i8 v10893 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v10893)();

c02_073a:;

c02_0736:;

	i8 v10894 = (i8)(intptr_t)(ws+3304);
	i8 v10895 = *(i8*)(intptr_t)v10894;
	i8 v10896 = *(i8*)(intptr_t)v10895;
	*(i8*)(intptr_t)(ws+3448) = v10896;
	i8 v10897 = (i8)(intptr_t)(f161_MidInitsubref);

	((void(*)(void))(intptr_t)v10897)();

	i8 v10898 = *(i8*)(intptr_t)(ws+3456);
	i8 v10899 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v10899 = v10898;

	i8 v10900 = (i8)(intptr_t)(ws+3440);
	i8 v10901 = *(i8*)(intptr_t)v10900;
	*(i8*)(intptr_t)(ws+3488) = v10901;
	i8 v10902 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v10902)();

	goto c02_071f;

c02_0735:;

	i8 v10903 = (i8)(intptr_t)(f290_parser_i_constant_error);

	((void(*)(void))(intptr_t)v10903)();

c02_071f:;


	i8 v10904 = (i8)(intptr_t)(ws+3304);
	i8 v10905 = *(i8*)(intptr_t)v10904;
	*(i8*)(intptr_t)(ws+3592) = v10905;
	i8 v10906 = (i8)(intptr_t)(f63_Discard);

	((void(*)(void))(intptr_t)v10906)();

	i8 v10907 = (i8)(intptr_t)(ws+1560);
	i2 v10908 = *(i2*)(intptr_t)v10907;
	i8 v10909 = (i8)(intptr_t)(ws+3400);
	i2 v10910 = *(i2*)(intptr_t)v10909;
	i2 v10911 = v10908+v10910;
	i8 v10912 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10912 = v10911;

	i8 v10913 = (i8)(intptr_t)(ws+1562);
	i2 v10914 = *(i2*)(intptr_t)v10913;
	i8 v10915 = (i8)(intptr_t)(ws+3400);
	i2 v10916 = *(i2*)(intptr_t)v10915;
	i2 v10917 = v10914+v10916;
	i8 v10918 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v10918 = v10917;

}
	void f295_CheckEndOfInitialiser(void);
	void f34_Free(void);
	void f300_yy_destructor(void);

// reduce_111 workspace at ws+3384 length ws+0
void f423_reduce_111(void) {

	i8 v10919 = (i8)(intptr_t)(f295_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v10919)();

	i8 v10920 = (i8)(intptr_t)(ws+1560);
	i2 v10921 = *(i2*)(intptr_t)v10920;
	i8 v10922 = (i8)(intptr_t)(ws+3320);
	i8 v10923 = *(i8*)(intptr_t)v10922;
	i8 v10924 = v10923+(+16);
	i2 v10925 = *(i2*)(intptr_t)v10924;
	i2 v10926 = v10921+v10925;
	i8 v10927 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10927 = v10926;

	i8 v10928 = (i8)(intptr_t)(ws+3320);
	i8 v10929 = *(i8*)(intptr_t)v10928;
	i8 v10930 = *(i8*)(intptr_t)v10929;
	i8 v10931 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10931 = v10930;

	i8 v10932 = (i8)(intptr_t)(ws+3320);
	i8 v10933 = *(i8*)(intptr_t)v10932;
	i8 v10934 = v10933+(+8);
	i8 v10935 = *(i8*)(intptr_t)v10934;
	i8 v10936 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10936 = v10935;

	i8 v10937 = (i8)(intptr_t)(ws+3320);
	i8 v10938 = *(i8*)(intptr_t)v10937;
	*(i8*)(intptr_t)(ws+3680) = v10938;
	i8 v10939 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v10939)();

	i1 v10940 = (i1)+32;
	*(i1*)(intptr_t)(ws+3496) = v10940;
	i8 v10941 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v10941;
	i8 v10942 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v10942)();

}
	void f299_GetInitedMemberChecked(void);
	void f297_AlignTo(void);
	void f69_InternalAlloc(void);
	void f231_IsRecord(void);
	void f226_IsArray(void);
const i1 c02_s0190[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(void);

// reduce_112 workspace at ws+3384 length ws+26
void f424_reduce_112(void) {

	i8 v10943 = (i8)(intptr_t)(f299_GetInitedMemberChecked);

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
	i8 v10952 = (i8)(intptr_t)(f297_AlignTo);

	((void(*)(void))(intptr_t)v10952)();

	i8 v10953 = (i8)+18;
	*(i8*)(intptr_t)(ws+3640) = v10953;
	i8 v10954 = (i8)(intptr_t)(f69_InternalAlloc);

	((void(*)(void))(intptr_t)v10954)();

	i8 v10955 = *(i8*)(intptr_t)(ws+3648);
	i8 v10956 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10956 = v10955;

	i8 v10957 = (i8)(intptr_t)(ws+3400);
	i8 v10958 = *(i8*)(intptr_t)v10957;
	i8 v10959 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10959 = v10958;

	i8 v10960 = (i8)(intptr_t)(ws+72);
	i8 v10961 = *(i8*)(intptr_t)v10960;
	i8 v10962 = (i8)(intptr_t)(ws+3296);
	i8 v10963 = *(i8*)(intptr_t)v10962;
	*(i8*)(intptr_t)v10963 = v10961;

	i8 v10964 = (i8)(intptr_t)(ws+1552);
	i8 v10965 = *(i8*)(intptr_t)v10964;
	i8 v10966 = (i8)(intptr_t)(ws+3296);
	i8 v10967 = *(i8*)(intptr_t)v10966;
	i8 v10968 = v10967+(+8);
	*(i8*)(intptr_t)v10968 = v10965;

	i8 v10969 = (i8)(intptr_t)(ws+1560);
	i2 v10970 = *(i2*)(intptr_t)v10969;
	i8 v10971 = (i8)(intptr_t)(ws+3296);
	i8 v10972 = *(i8*)(intptr_t)v10971;
	i8 v10973 = v10972+(+16);
	*(i2*)(intptr_t)v10973 = v10970;

	i8 v10974 = (i8)(intptr_t)(ws+3392);
	i8 v10975 = *(i8*)(intptr_t)v10974;
	i8 v10976 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10976 = v10975;

	i2 v10977 = (i2)+0;
	i8 v10978 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10978 = v10977;

	i8 v10979 = (i8)(intptr_t)(ws+3392);
	i8 v10980 = *(i8*)(intptr_t)v10979;
	*(i8*)(intptr_t)(ws+3488) = v10980;
	i8 v10981 = (i8)(intptr_t)(f231_IsRecord);

	((void(*)(void))(intptr_t)v10981)();

	i1 v10982 = *(i1*)(intptr_t)(ws+3496);
	i8 v10983 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v10983 = v10982;

	i8 v10984 = (i8)(intptr_t)(ws+3408);
	i1 v10985 = *(i1*)(intptr_t)v10984;
	i1 v10986 = (i1)+0;
	if (v10985==v10986) goto c02_073f; else goto c02_073e;

c02_073e:;

	i8 v10987 = (i8)(intptr_t)(ws+3392);
	i8 v10988 = *(i8*)(intptr_t)v10987;
	i8 v10989 = *(i8*)(intptr_t)v10988;
	i8 v10990 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10990 = v10989;

	goto c02_073b;

c02_073f:;

	i8 v10991 = (i8)(intptr_t)(ws+3392);
	i8 v10992 = *(i8*)(intptr_t)v10991;
	*(i8*)(intptr_t)(ws+3496) = v10992;
	i8 v10993 = (i8)(intptr_t)(f226_IsArray);

	((void(*)(void))(intptr_t)v10993)();

	i1 v10994 = *(i1*)(intptr_t)(ws+3504);
	i8 v10995 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v10995 = v10994;

	i8 v10996 = (i8)(intptr_t)(ws+3409);
	i1 v10997 = *(i1*)(intptr_t)v10996;
	i1 v10998 = (i1)+0;
	if (v10997==v10998) goto c02_0743; else goto c02_0742;

c02_0742:;

	i8 v10999 = (i8)+0;
	i8 v11000 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11000 = v10999;

	goto c02_073b;

c02_0743:;

	i8 v11001 = (i8)(intptr_t)c02_s0190;
	*(i8*)(intptr_t)(ws+3648) = v11001;
	i8 v11002 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v11002)();

c02_073b:;

}
	void f129_MidAsmend(void);
	void f257_Generate(void);
	void f300_yy_destructor(void);

// reduce_113 workspace at ws+3384 length ws+8
void f425_reduce_113(void) {

	i8 v11003 = (i8)(intptr_t)(f129_MidAsmend);

	((void(*)(void))(intptr_t)v11003)();

	i8 v11004 = *(i8*)(intptr_t)(ws+3392);
	i8 v11005 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11005 = v11004;

	i8 v11006 = (i8)(intptr_t)(ws+3384);
	i8 v11007 = *(i8*)(intptr_t)v11006;
	*(i8*)(intptr_t)(ws+3488) = v11007;
	i8 v11008 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11008)();

	i1 v11009 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11009;
	i8 v11010 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11010;
	i8 v11011 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11011)();

}
	void f122_MidAsmstart(void);
	void f257_Generate(void);

// reduce_114 workspace at ws+3384 length ws+8
void f426_reduce_114(void) {

	i8 v11012 = (i8)(intptr_t)(f122_MidAsmstart);

	((void(*)(void))(intptr_t)v11012)();

	i8 v11013 = *(i8*)(intptr_t)(ws+3392);
	i8 v11014 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11014 = v11013;

	i8 v11015 = (i8)(intptr_t)(ws+3384);
	i8 v11016 = *(i8*)(intptr_t)v11015;
	*(i8*)(intptr_t)(ws+3488) = v11016;
	i8 v11017 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11017)();

}
	void f150_MidAsmtext(void);
	void f257_Generate(void);
	void f34_Free(void);

// reduce_115 workspace at ws+3384 length ws+8
void f427_reduce_115(void) {

	i8 v11018 = (i8)(intptr_t)(ws+3304);
	i8 v11019 = *(i8*)(intptr_t)v11018;
	*(i8*)(intptr_t)(ws+3392) = v11019;
	i8 v11020 = (i8)(intptr_t)(f150_MidAsmtext);

	((void(*)(void))(intptr_t)v11020)();

	i8 v11021 = *(i8*)(intptr_t)(ws+3400);
	i8 v11022 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11022 = v11021;

	i8 v11023 = (i8)(intptr_t)(ws+3384);
	i8 v11024 = *(i8*)(intptr_t)v11023;
	*(i8*)(intptr_t)(ws+3488) = v11024;
	i8 v11025 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11025)();

	i8 v11026 = (i8)(intptr_t)(ws+3304);
	i8 v11027 = *(i8*)(intptr_t)v11026;
	*(i8*)(intptr_t)(ws+3680) = v11027;
	i8 v11028 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v11028)();

}
	void f132_MidAsmvalue(void);
	void f257_Generate(void);

// reduce_116 workspace at ws+3384 length ws+8
void f428_reduce_116(void) {

	i8 v11029 = (i8)(intptr_t)(ws+3304);
	i4 v11030 = *(i4*)(intptr_t)v11029;
	*(i4*)(intptr_t)(ws+3416) = v11030;
	i8 v11031 = (i8)(intptr_t)(f132_MidAsmvalue);

	((void(*)(void))(intptr_t)v11031)();

	i8 v11032 = *(i8*)(intptr_t)(ws+3424);
	i8 v11033 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11033 = v11032;

	i8 v11034 = (i8)(intptr_t)(ws+3384);
	i8 v11035 = *(i8*)(intptr_t)v11034;
	*(i8*)(intptr_t)(ws+3488) = v11035;
	i8 v11036 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11036)();

}
const i1 c02_s0191[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(void);

// bad_reference workspace at ws+3416 length ws+0
void f430_bad_reference(void) {

	i8 v11037 = (i8)(intptr_t)c02_s0191;
	*(i8*)(intptr_t)(ws+3648) = v11037;
	i8 v11038 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(void))(intptr_t)v11038)();

}
	void f227_IsSubroutine(void);
	void f201_EmitterReferenceSubroutine(void);
	void f144_MidAsmsubref(void);
	void f257_Generate(void);
	void f430_bad_reference(void);
	void f124_MidAsmsymbol(void);
	void f257_Generate(void);
	void f132_MidAsmvalue(void);
	void f257_Generate(void);
	void f430_bad_reference(void);

// reduce_117 workspace at ws+3384 length ws+32
void f429_reduce_117(void) {


	i8 v11039 = (i8)(intptr_t)(ws+3304);
	i8 v11040 = *(i8*)(intptr_t)v11039;
	i8 v11041 = v11040+(+32);
	i1 v11042 = *(i1*)(intptr_t)v11041;

	if (v11042 != +30) goto c02_0745;

	i8 v11043 = (i8)(intptr_t)(ws+3304);
	i8 v11044 = *(i8*)(intptr_t)v11043;
	i8 v11045 = *(i8*)(intptr_t)v11044;
	*(i8*)(intptr_t)(ws+3560) = v11045;
	i8 v11046 = (i8)(intptr_t)(f227_IsSubroutine);

	((void(*)(void))(intptr_t)v11046)();

	i1 v11047 = *(i1*)(intptr_t)(ws+3568);
	i8 v11048 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v11048 = v11047;

	i8 v11049 = (i8)(intptr_t)(ws+3384);
	i1 v11050 = *(i1*)(intptr_t)v11049;
	i1 v11051 = (i1)+0;
	if (v11050==v11051) goto c02_074a; else goto c02_0749;

c02_0749:;

	i8 v11052 = (i8)(intptr_t)(ws+40);
	i8 v11053 = *(i8*)(intptr_t)v11052;
	*(i8*)(intptr_t)(ws+3496) = v11053;
	i8 v11054 = (i8)(intptr_t)(ws+3304);
	i8 v11055 = *(i8*)(intptr_t)v11054;
	i8 v11056 = *(i8*)(intptr_t)v11055;
	i8 v11057 = *(i8*)(intptr_t)v11056;
	*(i8*)(intptr_t)(ws+3504) = v11057;
	i8 v11058 = (i8)(intptr_t)(f201_EmitterReferenceSubroutine);

	((void(*)(void))(intptr_t)v11058)();

	i8 v11059 = (i8)(intptr_t)(ws+3304);
	i8 v11060 = *(i8*)(intptr_t)v11059;
	i8 v11061 = *(i8*)(intptr_t)v11060;
	i8 v11062 = *(i8*)(intptr_t)v11061;
	*(i8*)(intptr_t)(ws+3416) = v11062;
	i8 v11063 = (i8)(intptr_t)(f144_MidAsmsubref);

	((void(*)(void))(intptr_t)v11063)();

	i8 v11064 = *(i8*)(intptr_t)(ws+3424);
	i8 v11065 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v11065 = v11064;

	i8 v11066 = (i8)(intptr_t)(ws+3392);
	i8 v11067 = *(i8*)(intptr_t)v11066;
	*(i8*)(intptr_t)(ws+3488) = v11067;
	i8 v11068 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11068)();

	goto c02_0746;

c02_074a:;

	i8 v11069 = (i8)(intptr_t)(f430_bad_reference);

	((void(*)(void))(intptr_t)v11069)();

c02_0746:;

	goto c02_0744;

c02_0745:;

	if (v11042 != +28) goto c02_074b;

	i8 v11070 = (i8)(intptr_t)(ws+3304);
	i8 v11071 = *(i8*)(intptr_t)v11070;
	*(i8*)(intptr_t)(ws+3416) = v11071;
	i8 v11072 = (i8)(intptr_t)(f124_MidAsmsymbol);

	((void(*)(void))(intptr_t)v11072)();

	i8 v11073 = *(i8*)(intptr_t)(ws+3424);
	i8 v11074 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v11074 = v11073;

	i8 v11075 = (i8)(intptr_t)(ws+3400);
	i8 v11076 = *(i8*)(intptr_t)v11075;
	*(i8*)(intptr_t)(ws+3488) = v11076;
	i8 v11077 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11077)();

	goto c02_0744;

c02_074b:;

	if (v11042 != +7) goto c02_074c;

	i8 v11078 = (i8)(intptr_t)(ws+3304);
	i8 v11079 = *(i8*)(intptr_t)v11078;
	i4 v11080 = *(i4*)(intptr_t)v11079;
	*(i4*)(intptr_t)(ws+3416) = v11080;
	i8 v11081 = (i8)(intptr_t)(f132_MidAsmvalue);

	((void(*)(void))(intptr_t)v11081)();

	i8 v11082 = *(i8*)(intptr_t)(ws+3424);
	i8 v11083 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v11083 = v11082;

	i8 v11084 = (i8)(intptr_t)(ws+3408);
	i8 v11085 = *(i8*)(intptr_t)v11084;
	*(i8*)(intptr_t)(ws+3488) = v11085;
	i8 v11086 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11086)();

	goto c02_0744;

c02_074c:;

	i8 v11087 = (i8)(intptr_t)(f430_bad_reference);

	((void(*)(void))(intptr_t)v11087)();

c02_0744:;


}
	void f300_yy_destructor(void);

// reduce_123 workspace at ws+3384 length ws+0
void f431_reduce_123(void) {

	i1 v11088 = (i1)+26;
	*(i1*)(intptr_t)(ws+3496) = v11088;
	i8 v11089 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)(ws+3504) = v11089;
	i8 v11090 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11090)();

}
	void f300_yy_destructor(void);

// reduce_127 workspace at ws+3384 length ws+0
void f432_reduce_127(void) {

	i1 v11091 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11091;
	i8 v11092 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11092;
	i8 v11093 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11093)();

}
	void f300_yy_destructor(void);
	void f300_yy_destructor(void);

// reduce_128 workspace at ws+3384 length ws+0
void f433_reduce_128(void) {

	i1 v11094 = (i1)+25;
	*(i1*)(intptr_t)(ws+3496) = v11094;
	i8 v11095 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)(ws+3504) = v11095;
	i8 v11096 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11096)();

	i1 v11097 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11097;
	i8 v11098 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11098;
	i8 v11099 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11099)();

}
	void f300_yy_destructor(void);

// reduce_129 workspace at ws+3384 length ws+0
void f434_reduce_129(void) {

	i1 v11100 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11100;
	i8 v11101 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11101;
	i8 v11102 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11102)();

}
	void f300_yy_destructor(void);

// reduce_130 workspace at ws+3384 length ws+0
void f435_reduce_130(void) {

	i1 v11103 = (i1)+22;
	*(i1*)(intptr_t)(ws+3496) = v11103;
	i8 v11104 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)(ws+3504) = v11104;
	i8 v11105 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11105)();

}
	void f300_yy_destructor(void);

// reduce_136 workspace at ws+3384 length ws+0
void f436_reduce_136(void) {

	i1 v11106 = (i1)+45;
	*(i1*)(intptr_t)(ws+3496) = v11106;
	i8 v11107 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v11107;
	i8 v11108 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11108)();

}
	void f300_yy_destructor(void);

// reduce_139 workspace at ws+3384 length ws+0
void f437_reduce_139(void) {

	i1 v11109 = (i1)+45;
	*(i1*)(intptr_t)(ws+3496) = v11109;
	i8 v11110 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)(ws+3504) = v11110;
	i8 v11111 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11111)();

}

// reduce_default workspace at ws+3384 length ws+0
void f438_reduce_default(void) {

}
	void f309_reduce_0(void);
	void f310_reduce_1(void);
	void f311_reduce_2(void);
	void f312_reduce_3(void);
	void f313_reduce_4(void);
	void f314_reduce_5(void);
	void f315_reduce_6(void);
	void f316_reduce_7(void);
	void f317_reduce_8(void);
	void f318_reduce_9(void);
	void f319_reduce_10(void);
	void f320_reduce_11(void);
	void f321_reduce_12(void);
	void f322_reduce_13(void);
	void f323_reduce_14(void);
	void f324_reduce_15(void);
	void f325_reduce_16(void);
	void f326_reduce_17(void);
	void f327_reduce_18(void);
	void f328_reduce_19(void);
	void f329_reduce_20(void);
	void f330_reduce_21(void);
	void f331_reduce_22(void);
	void f332_reduce_23(void);
	void f333_reduce_24(void);
	void f334_reduce_25(void);
	void f335_reduce_26(void);
	void f336_reduce_27(void);
	void f337_reduce_28(void);
	void f338_reduce_29(void);
	void f339_reduce_30(void);
	void f340_reduce_31(void);
	void f341_reduce_32(void);
	void f342_reduce_33(void);
	void f343_reduce_34(void);
	void f344_reduce_35(void);
	void f345_reduce_36(void);
	void f346_reduce_37(void);
	void f347_reduce_38(void);
	void f348_reduce_39(void);
	void f349_reduce_40(void);
	void f350_reduce_41(void);
	void f351_reduce_42(void);
	void f352_reduce_43(void);
	void f353_reduce_44(void);
	void f354_reduce_45(void);
	void f355_reduce_46(void);
	void f356_reduce_47(void);
	void f357_reduce_48(void);
	void f358_reduce_49(void);
	void f359_reduce_50(void);
	void f360_reduce_51(void);
	void f361_reduce_52(void);
	void f362_reduce_53(void);
	void f363_reduce_54(void);
	void f365_reduce_55(void);
	void f366_reduce_56(void);
	void f367_reduce_57(void);
	void f369_reduce_58(void);
	void f370_reduce_59(void);
	void f371_reduce_60(void);
	void f372_reduce_61(void);
	void f373_reduce_62(void);
	void f374_reduce_63(void);
	void f375_reduce_64(void);
	void f376_reduce_65(void);
	void f377_reduce_66(void);
	void f378_reduce_67(void);
	void f379_reduce_68(void);
	void f380_reduce_69(void);
	void f381_reduce_70(void);
	void f382_reduce_71(void);
	void f383_reduce_72(void);
	void f384_reduce_73(void);
	void f385_reduce_74(void);
	void f386_reduce_75(void);
	void f387_reduce_76(void);
	void f388_reduce_77(void);
	void f389_reduce_78(void);
	void f390_reduce_79(void);
	void f391_reduce_80(void);
	void f392_reduce_81(void);
	void f393_reduce_82(void);
	void f394_reduce_83(void);
	void f395_reduce_84(void);
	void f396_reduce_85(void);
	void f397_reduce_86(void);
	void f398_reduce_87(void);
	void f400_reduce_88(void);
	void f401_reduce_89(void);
	void f402_reduce_90(void);
	void f403_reduce_91(void);
	void f404_reduce_92(void);
	void f405_reduce_93(void);
	void f406_reduce_94(void);
	void f407_reduce_95(void);
	void f408_reduce_96(void);
	void f409_reduce_97(void);
	void f410_reduce_98(void);
	void f411_reduce_99(void);
	void f412_reduce_100(void);
	void f413_reduce_101(void);
	void f414_reduce_102(void);
	void f415_reduce_103(void);
	void f416_reduce_104(void);
	void f417_reduce_105(void);
	void f418_reduce_106(void);
	void f419_reduce_107(void);
	void f420_reduce_108(void);
	void f421_reduce_109(void);
	void f422_reduce_110(void);
	void f423_reduce_111(void);
	void f424_reduce_112(void);
	void f425_reduce_113(void);
	void f426_reduce_114(void);
	void f427_reduce_115(void);
	void f428_reduce_116(void);
	void f429_reduce_117(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f431_reduce_123(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f432_reduce_127(void);
	void f433_reduce_128(void);
	void f434_reduce_129(void);
	void f435_reduce_130(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f436_reduce_136(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f437_reduce_139(void);
static data f307_yy_reduce_s074d[] = {

	{ .ptr = (void*)f309_reduce_0 },

	{ .ptr = (void*)f310_reduce_1 },

	{ .ptr = (void*)f311_reduce_2 },

	{ .ptr = (void*)f312_reduce_3 },

	{ .ptr = (void*)f313_reduce_4 },

	{ .ptr = (void*)f314_reduce_5 },

	{ .ptr = (void*)f315_reduce_6 },

	{ .ptr = (void*)f316_reduce_7 },

	{ .ptr = (void*)f317_reduce_8 },

	{ .ptr = (void*)f318_reduce_9 },

	{ .ptr = (void*)f319_reduce_10 },

	{ .ptr = (void*)f320_reduce_11 },

	{ .ptr = (void*)f321_reduce_12 },

	{ .ptr = (void*)f322_reduce_13 },

	{ .ptr = (void*)f323_reduce_14 },

	{ .ptr = (void*)f324_reduce_15 },

	{ .ptr = (void*)f325_reduce_16 },

	{ .ptr = (void*)f326_reduce_17 },

	{ .ptr = (void*)f327_reduce_18 },

	{ .ptr = (void*)f328_reduce_19 },

	{ .ptr = (void*)f329_reduce_20 },

	{ .ptr = (void*)f330_reduce_21 },

	{ .ptr = (void*)f331_reduce_22 },

	{ .ptr = (void*)f332_reduce_23 },

	{ .ptr = (void*)f333_reduce_24 },

	{ .ptr = (void*)f334_reduce_25 },

	{ .ptr = (void*)f335_reduce_26 },

	{ .ptr = (void*)f336_reduce_27 },

	{ .ptr = (void*)f337_reduce_28 },

	{ .ptr = (void*)f338_reduce_29 },

	{ .ptr = (void*)f339_reduce_30 },

	{ .ptr = (void*)f340_reduce_31 },

	{ .ptr = (void*)f341_reduce_32 },

	{ .ptr = (void*)f342_reduce_33 },

	{ .ptr = (void*)f343_reduce_34 },

	{ .ptr = (void*)f344_reduce_35 },

	{ .ptr = (void*)f345_reduce_36 },

	{ .ptr = (void*)f346_reduce_37 },

	{ .ptr = (void*)f347_reduce_38 },

	{ .ptr = (void*)f348_reduce_39 },

	{ .ptr = (void*)f349_reduce_40 },

	{ .ptr = (void*)f350_reduce_41 },

	{ .ptr = (void*)f351_reduce_42 },

	{ .ptr = (void*)f352_reduce_43 },

	{ .ptr = (void*)f353_reduce_44 },

	{ .ptr = (void*)f354_reduce_45 },

	{ .ptr = (void*)f355_reduce_46 },

	{ .ptr = (void*)f356_reduce_47 },

	{ .ptr = (void*)f357_reduce_48 },

	{ .ptr = (void*)f358_reduce_49 },

	{ .ptr = (void*)f359_reduce_50 },

	{ .ptr = (void*)f360_reduce_51 },

	{ .ptr = (void*)f361_reduce_52 },

	{ .ptr = (void*)f362_reduce_53 },

	{ .ptr = (void*)f363_reduce_54 },

	{ .ptr = (void*)f365_reduce_55 },

	{ .ptr = (void*)f366_reduce_56 },

	{ .ptr = (void*)f367_reduce_57 },

	{ .ptr = (void*)f369_reduce_58 },

	{ .ptr = (void*)f370_reduce_59 },

	{ .ptr = (void*)f371_reduce_60 },

	{ .ptr = (void*)f372_reduce_61 },

	{ .ptr = (void*)f373_reduce_62 },

	{ .ptr = (void*)f374_reduce_63 },

	{ .ptr = (void*)f375_reduce_64 },

	{ .ptr = (void*)f376_reduce_65 },

	{ .ptr = (void*)f377_reduce_66 },

	{ .ptr = (void*)f378_reduce_67 },

	{ .ptr = (void*)f379_reduce_68 },

	{ .ptr = (void*)f380_reduce_69 },

	{ .ptr = (void*)f381_reduce_70 },

	{ .ptr = (void*)f382_reduce_71 },

	{ .ptr = (void*)f383_reduce_72 },

	{ .ptr = (void*)f384_reduce_73 },

	{ .ptr = (void*)f385_reduce_74 },

	{ .ptr = (void*)f386_reduce_75 },

	{ .ptr = (void*)f387_reduce_76 },

	{ .ptr = (void*)f388_reduce_77 },

	{ .ptr = (void*)f389_reduce_78 },

	{ .ptr = (void*)f390_reduce_79 },

	{ .ptr = (void*)f391_reduce_80 },

	{ .ptr = (void*)f392_reduce_81 },

	{ .ptr = (void*)f393_reduce_82 },

	{ .ptr = (void*)f394_reduce_83 },

	{ .ptr = (void*)f395_reduce_84 },

	{ .ptr = (void*)f396_reduce_85 },

	{ .ptr = (void*)f397_reduce_86 },

	{ .ptr = (void*)f398_reduce_87 },

	{ .ptr = (void*)f400_reduce_88 },

	{ .ptr = (void*)f401_reduce_89 },

	{ .ptr = (void*)f402_reduce_90 },

	{ .ptr = (void*)f403_reduce_91 },

	{ .ptr = (void*)f404_reduce_92 },

	{ .ptr = (void*)f405_reduce_93 },

	{ .ptr = (void*)f406_reduce_94 },

	{ .ptr = (void*)f407_reduce_95 },

	{ .ptr = (void*)f408_reduce_96 },

	{ .ptr = (void*)f409_reduce_97 },

	{ .ptr = (void*)f410_reduce_98 },

	{ .ptr = (void*)f411_reduce_99 },

	{ .ptr = (void*)f412_reduce_100 },

	{ .ptr = (void*)f413_reduce_101 },

	{ .ptr = (void*)f414_reduce_102 },

	{ .ptr = (void*)f415_reduce_103 },

	{ .ptr = (void*)f416_reduce_104 },

	{ .ptr = (void*)f417_reduce_105 },

	{ .ptr = (void*)f418_reduce_106 },

	{ .ptr = (void*)f419_reduce_107 },

	{ .ptr = (void*)f420_reduce_108 },

	{ .ptr = (void*)f421_reduce_109 },

	{ .ptr = (void*)f422_reduce_110 },

	{ .ptr = (void*)f423_reduce_111 },

	{ .ptr = (void*)f424_reduce_112 },

	{ .ptr = (void*)f425_reduce_113 },

	{ .ptr = (void*)f426_reduce_114 },

	{ .ptr = (void*)f427_reduce_115 },

	{ .ptr = (void*)f428_reduce_116 },

	{ .ptr = (void*)f429_reduce_117 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f431_reduce_123 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f432_reduce_127 },

	{ .ptr = (void*)f433_reduce_128 },

	{ .ptr = (void*)f434_reduce_129 },

	{ .ptr = (void*)f435_reduce_130 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f436_reduce_136 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f437_reduce_139 },

};
	void f306_CopyMinor(void);

// yy_reduce workspace at ws+3288 length ws+94
void f307_yy_reduce(void) {

	i8 v7489 = (i8)(intptr_t)((i1*)f3___main_s05e8);
	i8 v7490 = (i8)(intptr_t)(ws+3288);
	i2 v7491 = *(i2*)(intptr_t)v7490;
	i1 v7492 = v7491;
	i8 v7493 = v7492;
	i8 v7494 = v7489+v7493;
	i1 v7495 = *(i1*)(intptr_t)v7494;
	i8 v7496 = (i8)(intptr_t)(ws+3294);
	*(i1*)(intptr_t)v7496 = v7495;

	i8 v7497 = (i8)(intptr_t)(ws+1568);
	i8 v7498 = *(i8*)(intptr_t)v7497;
	i8 v7499 = (i8)(intptr_t)(ws+3176);
	if (v7498==v7499) goto c02_05ec; else goto c02_05ed;

c02_05ec:;

	i8 v7500 = (i8)(intptr_t)(f304_yy_stack_overflow);

	((void(*)(void))(intptr_t)v7500)();

c02_05ed:;

c02_05e9:;

	i8 v7501 = (i8)(intptr_t)(ws+3304);
	i8 v7502 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v7502 = v7501;

	i8 v7503 = (i8)(intptr_t)(ws+3294);
	i1 v7504 = *(i1*)(intptr_t)v7503;
	i8 v7505 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v7505 = v7504;

c02_05ee:;

	i8 v7506 = (i8)(intptr_t)(ws+3376);
	i1 v7507 = *(i1*)(intptr_t)v7506;
	i1 v7508 = (i1)+0;
	if (v7507==v7508) goto c02_05f3; else goto c02_05f2;

c02_05f2:;

	i8 v7509 = (i8)(intptr_t)(ws+1568);
	i8 v7510 = *(i8*)(intptr_t)v7509;
	i8 v7511 = v7510+(+8);
	*(i8*)(intptr_t)(ws+3384) = v7511;
	i8 v7512 = (i8)(intptr_t)(ws+3368);
	i8 v7513 = *(i8*)(intptr_t)v7512;
	*(i8*)(intptr_t)(ws+3392) = v7513;
	i8 v7514 = (i8)(intptr_t)(f306_CopyMinor);

	((void(*)(void))(intptr_t)v7514)();

	i8 v7515 = (i8)(intptr_t)(ws+1568);
	i8 v7516 = *(i8*)(intptr_t)v7515;
	i8 v7517 = v7516+(-16);
	i8 v7518 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7518 = v7517;

	i8 v7519 = (i8)(intptr_t)(ws+3368);
	i8 v7520 = *(i8*)(intptr_t)v7519;
	i8 v7521 = v7520+(+8);
	i8 v7522 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v7522 = v7521;

	i8 v7523 = (i8)(intptr_t)(ws+3376);
	i1 v7524 = *(i1*)(intptr_t)v7523;
	i1 v7525 = v7524+(-1);
	i8 v7526 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v7526 = v7525;

	goto c02_05ee;

c02_05f3:;

































































































































	i8 v11112 = (i8)(intptr_t)((i1*)f307_yy_reduce_s074d);
	i8 v11113 = (i8)(intptr_t)(ws+3288);
	i2 v11114 = *(i2*)(intptr_t)v11113;
	i1 v11115 = v11114;
	i8 v11116 = v11115;
	i1 v11117 = (i1)+3;
	i8 v11118 = ((i8)v11116)<<v11117;
	i8 v11119 = v11112+v11118;
	i8 v11120 = *(i8*)(intptr_t)v11119;

	((void(*)(void))(intptr_t)v11120)();

	i8 v11121 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)(ws+3384) = v11121;
	i8 v11122 = (i8)(intptr_t)(ws+1568);
	i8 v11123 = *(i8*)(intptr_t)v11122;
	i8 v11124 = v11123+(+24);
	*(i8*)(intptr_t)(ws+3392) = v11124;
	i8 v11125 = (i8)(intptr_t)(f306_CopyMinor);

	((void(*)(void))(intptr_t)v11125)();

	i8 v11126 = (i8)(intptr_t)((i1*)f3___main_s05e7);
	i8 v11127 = (i8)(intptr_t)(ws+3288);
	i2 v11128 = *(i2*)(intptr_t)v11127;
	i1 v11129 = v11128;
	i8 v11130 = v11129;
	i8 v11131 = v11126+v11130;
	i1 v11132 = *(i1*)(intptr_t)v11131;
	i8 v11133 = (i8)(intptr_t)(ws+3377);
	*(i1*)(intptr_t)v11133 = v11132;

	i8 v11134 = (i8)(intptr_t)(ws+1568);
	i8 v11135 = *(i8*)(intptr_t)v11134;
	i2 v11136 = *(i2*)(intptr_t)v11135;
	i8 v11137 = (i8)(intptr_t)(ws+3378);
	*(i2*)(intptr_t)v11137 = v11136;

	i8 v11138 = (i8)(intptr_t)((i1*)f3___main_s05cf);
	i8 v11139 = (i8)(intptr_t)(ws+3378);
	i2 v11140 = *(i2*)(intptr_t)v11139;
	i1 v11141 = v11140;
	i8 v11142 = v11141;
	i1 v11143 = (i1)+1;
	i8 v11144 = ((i8)v11142)<<v11143;
	i8 v11145 = v11138+v11144;
	i2 v11146 = *(i2*)(intptr_t)v11145;
	i8 v11147 = (i8)(intptr_t)(ws+3292);
	*(i2*)(intptr_t)v11147 = v11146;

	i2 v11148 = (i2)+112;
	i8 v11149 = (i8)(intptr_t)(ws+3378);
	i2 v11150 = *(i2*)(intptr_t)v11149;
	if (v11148<v11150) goto c02_0752; else goto c02_0751;

c02_0751:;

	i8 v11151 = (i8)(intptr_t)((i1*)f3___main_s05ce);
	i8 v11152 = (i8)(intptr_t)(ws+3378);
	i2 v11153 = *(i2*)(intptr_t)v11152;
	i1 v11154 = v11153;
	i8 v11155 = v11154;
	i1 v11156 = (i1)+1;
	i8 v11157 = ((i8)v11155)<<v11156;
	i8 v11158 = v11151+v11157;
	i2 v11159 = *(i2*)(intptr_t)v11158;
	i8 v11160 = (i8)(intptr_t)(ws+3377);
	i1 v11161 = *(i1*)(intptr_t)v11160;
	i2 v11162 = v11161;
	i2 v11163 = v11159+v11162;
	i8 v11164 = (i8)(intptr_t)(ws+3380);
	*(i2*)(intptr_t)v11164 = v11163;

	i8 v11165 = (i8)(intptr_t)(ws+3380);
	i2 v11166 = *(i2*)(intptr_t)v11165;
	i2 v11167 = (i2)+0;
	if (v11166<v11167) goto c02_075b; else goto c02_075d;

c02_075d:;

	i8 v11168 = (i8)(intptr_t)(ws+3380);
	i2 v11169 = *(i2*)(intptr_t)v11168;
	i2 v11170 = (i2)+1316;
	if (v11169<v11170) goto c02_075c; else goto c02_075b;

c02_075c:;

	i8 v11171 = (i8)(intptr_t)((i1*)f3___main_s05cc);
	i8 v11172 = (i8)(intptr_t)(ws+3380);
	i2 v11173 = *(i2*)(intptr_t)v11172;
	i8 v11174 = v11173;
	i8 v11175 = v11171+v11174;
	i1 v11176 = *(i1*)(intptr_t)v11175;
	i8 v11177 = (i8)(intptr_t)(ws+3377);
	i1 v11178 = *(i1*)(intptr_t)v11177;
	if (v11176==v11178) goto c02_075a; else goto c02_075b;

c02_075a:;

	i8 v11179 = (i8)(intptr_t)((i1*)f3___main_s05cb);
	i8 v11180 = (i8)(intptr_t)(ws+3380);
	i2 v11181 = *(i2*)(intptr_t)v11180;
	i8 v11182 = v11181;
	i1 v11183 = (i1)+1;
	i8 v11184 = ((i8)v11182)<<v11183;
	i8 v11185 = v11179+v11184;
	i2 v11186 = *(i2*)(intptr_t)v11185;
	i8 v11187 = (i8)(intptr_t)(ws+3292);
	*(i2*)(intptr_t)v11187 = v11186;

c02_075b:;

c02_0753:;

c02_0752:;

c02_074e:;

	i8 v11188 = (i8)(intptr_t)(ws+1568);
	i8 v11189 = *(i8*)(intptr_t)v11188;
	i8 v11190 = v11189+(+16);
	i8 v11191 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11191 = v11190;

	i8 v11192 = (i8)(intptr_t)(ws+3292);
	i2 v11193 = *(i2*)(intptr_t)v11192;
	i8 v11194 = (i8)(intptr_t)(ws+1568);
	i8 v11195 = *(i8*)(intptr_t)v11194;
	*(i2*)(intptr_t)v11195 = v11193;

	i8 v11196 = (i8)(intptr_t)(ws+3377);
	i1 v11197 = *(i1*)(intptr_t)v11196;
	i8 v11198 = (i8)(intptr_t)(ws+1568);
	i8 v11199 = *(i8*)(intptr_t)v11198;
	i8 v11200 = v11199+(+2);
	*(i1*)(intptr_t)v11200 = v11197;

}
	void f303_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+3288 length ws+0
void f439_yy_parse_failed(void) {

	i8 v11201 = (i8)(intptr_t)(f303_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v11201)();

}
	void f74_StartError(void);
const i1 c02_s0192[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f75_EndError(void);

// yy_syntax_error workspace at ws+3288 length ws+16
void f440_yy_syntax_error(void) {

	i8 v11202 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v11202)();

	i8 v11203 = (i8)(intptr_t)c02_s0192;
	*(i8*)(intptr_t)(ws+3696) = v11203;
	i8 v11204 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11204)();

	i8 v11205 = (i8)(intptr_t)((i1*)f3___main_s05d0);
	i8 v11206 = (i8)(intptr_t)(ws+3288);
	i1 v11207 = *(i1*)(intptr_t)v11206;
	i8 v11208 = v11207;
	i1 v11209 = (i1)+3;
	i8 v11210 = ((i8)v11208)<<v11209;
	i8 v11211 = v11205+v11210;
	i8 v11212 = *(i8*)(intptr_t)v11211;
	*(i8*)(intptr_t)(ws+3696) = v11212;
	i8 v11213 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11213)();

	i8 v11214 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v11214)();

}

// yy_accept workspace at ws+3288 length ws+0
void f441_yy_accept(void) {

}

// ParserInit workspace at ws+3264 length ws+0
void f442_ParserInit(void) {

	i1 v11215 = (i1)-1;
	i8 v11216 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11216 = v11215;

	i8 v11217 = (i8)(intptr_t)(ws+1576);
	i8 v11218 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11218 = v11217;

	i2 v11219 = (i2)+0;
	i8 v11220 = (i8)(intptr_t)(ws+1576);
	*(i2*)(intptr_t)v11220 = v11219;

	i1 v11221 = (i1)+0;
	i8 v11222 = (i8)(intptr_t)(ws+1578);
	*(i1*)(intptr_t)v11222 = v11221;

}
	void f302_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+3264 length ws+0
void f443_ParserDeinit(void) {

c02_075e:;

	i8 v11223 = (i8)(intptr_t)(ws+1568);
	i8 v11224 = *(i8*)(intptr_t)v11223;
	i8 v11225 = (i8)(intptr_t)(ws+1576);
	if (v11224==v11225) goto c02_0763; else goto c02_0762;

c02_0762:;

	i8 v11226 = (i8)(intptr_t)(f302_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v11226)();

	goto c02_075e;

c02_0763:;

}
	void f307_yy_reduce(void);
	void f304_yy_stack_overflow(void);
	void f306_CopyMinor(void);
	void f441_yy_accept(void);
	void f440_yy_syntax_error(void);
	void f300_yy_destructor(void);
	void f439_yy_parse_failed(void);

// ParserFeedToken workspace at ws+3264 length ws+22
void f444_ParserFeedToken(void) {

	i8 v11227 = (i8)(intptr_t)(ws+1568);
	i8 v11228 = *(i8*)(intptr_t)v11227;
	i2 v11229 = *(i2*)(intptr_t)v11228;
	i8 v11230 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11230 = v11229;

c02_0764:;

	i2 v11231 = (i2)+220;
	i8 v11232 = (i8)(intptr_t)(ws+3280);
	i2 v11233 = *(i2*)(intptr_t)v11232;
	if (v11231<v11233) goto c02_076a; else goto c02_0769;

c02_0769:;

	i8 v11234 = (i8)(intptr_t)((i1*)f3___main_s05cd);
	i8 v11235 = (i8)(intptr_t)(ws+3280);
	i2 v11236 = *(i2*)(intptr_t)v11235;
	i1 v11237 = v11236;
	i8 v11238 = v11237;
	i1 v11239 = (i1)+1;
	i8 v11240 = ((i8)v11238)<<v11239;
	i8 v11241 = v11234+v11240;
	i2 v11242 = *(i2*)(intptr_t)v11241;
	i8 v11243 = (i8)(intptr_t)(ws+3264);
	i1 v11244 = *(i1*)(intptr_t)v11243;
	i2 v11245 = v11244;
	i2 v11246 = v11242+v11245;
	i8 v11247 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v11247 = v11246;

	i8 v11248 = (i8)(intptr_t)((i1*)f3___main_s05cc);
	i8 v11249 = (i8)(intptr_t)(ws+3282);
	i2 v11250 = *(i2*)(intptr_t)v11249;
	i8 v11251 = v11250;
	i8 v11252 = v11248+v11251;
	i1 v11253 = *(i1*)(intptr_t)v11252;
	i8 v11254 = (i8)(intptr_t)(ws+3264);
	i1 v11255 = *(i1*)(intptr_t)v11254;
	if (v11253==v11255) goto c02_076f; else goto c02_076e;

c02_076e:;

	i8 v11256 = (i8)(intptr_t)((i1*)f3___main_s05cf);
	i8 v11257 = (i8)(intptr_t)(ws+3280);
	i2 v11258 = *(i2*)(intptr_t)v11257;
	i1 v11259 = v11258;
	i8 v11260 = v11259;
	i1 v11261 = (i1)+1;
	i8 v11262 = ((i8)v11260)<<v11261;
	i8 v11263 = v11256+v11262;
	i2 v11264 = *(i2*)(intptr_t)v11263;
	i8 v11265 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11265 = v11264;

	goto c02_076b;

c02_076f:;

	i8 v11266 = (i8)(intptr_t)((i1*)f3___main_s05cb);
	i8 v11267 = (i8)(intptr_t)(ws+3282);
	i2 v11268 = *(i2*)(intptr_t)v11267;
	i8 v11269 = v11268;
	i1 v11270 = (i1)+1;
	i8 v11271 = ((i8)v11269)<<v11270;
	i8 v11272 = v11266+v11271;
	i2 v11273 = *(i2*)(intptr_t)v11272;
	i8 v11274 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11274 = v11273;

c02_076b:;

c02_076a:;

c02_0766:;

	i8 v11275 = (i8)(intptr_t)(ws+3280);
	i2 v11276 = *(i2*)(intptr_t)v11275;
	i2 v11277 = (i2)+454;
	if (v11276<v11277) goto c02_0774; else goto c02_0773;

c02_0773:;

	i8 v11278 = (i8)(intptr_t)(ws+3280);
	i2 v11279 = *(i2*)(intptr_t)v11278;
	i2 v11280 = v11279+(-454);
	*(i2*)(intptr_t)(ws+3288) = v11280;
	i8 v11281 = (i8)(intptr_t)(ws+3264);
	i1 v11282 = *(i1*)(intptr_t)v11281;
	*(i1*)(intptr_t)(ws+3290) = v11282;
	i8 v11283 = (i8)(intptr_t)(f307_yy_reduce);

	((void(*)(void))(intptr_t)v11283)();

	i2 v11284 = *(i2*)(intptr_t)(ws+3292);
	i8 v11285 = (i8)(intptr_t)(ws+3284);
	*(i2*)(intptr_t)v11285 = v11284;

	i8 v11286 = (i8)(intptr_t)(ws+3284);
	i2 v11287 = *(i2*)(intptr_t)v11286;
	i8 v11288 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11288 = v11287;

	goto c02_0770;

c02_0774:;

	i2 v11289 = (i2)+450;
	i8 v11290 = (i8)(intptr_t)(ws+3280);
	i2 v11291 = *(i2*)(intptr_t)v11290;
	if (v11289<v11291) goto c02_0778; else goto c02_0777;

c02_0777:;

	i8 v11292 = (i8)(intptr_t)(ws+1568);
	i8 v11293 = *(i8*)(intptr_t)v11292;
	i8 v11294 = (i8)(intptr_t)(ws+3176);
	if (v11293==v11294) goto c02_077c; else goto c02_077d;

c02_077c:;

	i8 v11295 = (i8)(intptr_t)(f304_yy_stack_overflow);

	((void(*)(void))(intptr_t)v11295)();

	return;

c02_077d:;

c02_0779:;

	i8 v11296 = (i8)(intptr_t)(ws+1568);
	i8 v11297 = *(i8*)(intptr_t)v11296;
	i8 v11298 = v11297+(+16);
	i8 v11299 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11299 = v11298;

	i2 v11300 = (i2)+220;
	i8 v11301 = (i8)(intptr_t)(ws+3280);
	i2 v11302 = *(i2*)(intptr_t)v11301;
	if (v11300<v11302) goto c02_0781; else goto c02_0782;

c02_0781:;

	i8 v11303 = (i8)(intptr_t)(ws+3280);
	i2 v11304 = *(i2*)(intptr_t)v11303;
	i2 v11305 = v11304+(+143);
	i8 v11306 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11306 = v11305;

c02_0782:;

c02_077e:;

	i8 v11307 = (i8)(intptr_t)(ws+3280);
	i2 v11308 = *(i2*)(intptr_t)v11307;
	i8 v11309 = (i8)(intptr_t)(ws+1568);
	i8 v11310 = *(i8*)(intptr_t)v11309;
	*(i2*)(intptr_t)v11310 = v11308;

	i8 v11311 = (i8)(intptr_t)(ws+3264);
	i1 v11312 = *(i1*)(intptr_t)v11311;
	i8 v11313 = (i8)(intptr_t)(ws+1568);
	i8 v11314 = *(i8*)(intptr_t)v11313;
	i8 v11315 = v11314+(+2);
	*(i1*)(intptr_t)v11315 = v11312;

	i8 v11316 = (i8)(intptr_t)(ws+3272);
	i8 v11317 = *(i8*)(intptr_t)v11316;
	*(i8*)(intptr_t)(ws+3384) = v11317;
	i8 v11318 = (i8)(intptr_t)(ws+1568);
	i8 v11319 = *(i8*)(intptr_t)v11318;
	i8 v11320 = v11319+(+8);
	*(i8*)(intptr_t)(ws+3392) = v11320;
	i8 v11321 = (i8)(intptr_t)(f306_CopyMinor);

	((void(*)(void))(intptr_t)v11321)();

	i8 v11322 = (i8)(intptr_t)(ws+3192);
	i1 v11323 = *(i1*)(intptr_t)v11322;
	i1 v11324 = (i1)+0;
	if ((s1)v11323<(s1)v11324) goto c02_0787; else goto c02_0786;

c02_0786:;

	i8 v11325 = (i8)(intptr_t)(ws+3192);
	i1 v11326 = *(i1*)(intptr_t)v11325;
	i1 v11327 = v11326+(-1);
	i8 v11328 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11328 = v11327;

c02_0787:;

c02_0783:;

	goto c02_0765;

c02_0778:;

	i8 v11329 = (i8)(intptr_t)(ws+3280);
	i2 v11330 = *(i2*)(intptr_t)v11329;
	i2 v11331 = (i2)+452;
	if (v11330==v11331) goto c02_078a; else goto c02_078b;

c02_078a:;

	i8 v11332 = (i8)(intptr_t)(ws+1568);
	i8 v11333 = *(i8*)(intptr_t)v11332;
	i8 v11334 = v11333+(-16);
	i8 v11335 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11335 = v11334;

	i8 v11336 = (i8)(intptr_t)(f441_yy_accept);

	((void(*)(void))(intptr_t)v11336)();

	goto c02_0765;

c02_078b:;

	i1 v11337 = (i1)+0;
	i8 v11338 = (i8)(intptr_t)(ws+3192);
	i1 v11339 = *(i1*)(intptr_t)v11338;
	if ((s1)v11337<(s1)v11339) goto c02_0790; else goto c02_078f;

c02_078f:;

	i8 v11340 = (i8)(intptr_t)(ws+3264);
	i1 v11341 = *(i1*)(intptr_t)v11340;
	*(i1*)(intptr_t)(ws+3288) = v11341;
	i8 v11342 = (i8)(intptr_t)(ws+3272);
	i8 v11343 = *(i8*)(intptr_t)v11342;
	*(i8*)(intptr_t)(ws+3296) = v11343;
	i8 v11344 = (i8)(intptr_t)(f440_yy_syntax_error);

	((void(*)(void))(intptr_t)v11344)();

c02_0790:;

c02_078c:;

	i1 v11345 = (i1)+3;
	i8 v11346 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11346 = v11345;

	i8 v11347 = (i8)(intptr_t)(ws+3264);
	i1 v11348 = *(i1*)(intptr_t)v11347;
	*(i1*)(intptr_t)(ws+3496) = v11348;
	i8 v11349 = (i8)(intptr_t)(ws+3272);
	i8 v11350 = *(i8*)(intptr_t)v11349;
	*(i8*)(intptr_t)(ws+3504) = v11350;
	i8 v11351 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(void))(intptr_t)v11351)();

	i8 v11352 = (i8)(intptr_t)(ws+3264);
	i1 v11353 = *(i1*)(intptr_t)v11352;
	i1 v11354 = (i1)+0;
	if (v11353==v11354) goto c02_0794; else goto c02_0795;

c02_0794:;

	i8 v11355 = (i8)(intptr_t)(f439_yy_parse_failed);

	((void(*)(void))(intptr_t)v11355)();

	i1 v11356 = (i1)-1;
	i8 v11357 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11357 = v11356;

c02_0795:;

c02_0791:;

	goto c02_0765;

c02_0770:;

	i8 v11358 = (i8)(intptr_t)(ws+1568);
	i8 v11359 = *(i8*)(intptr_t)v11358;
	i8 v11360 = (i8)(intptr_t)(ws+1576);
	if (v11359==v11360) goto c02_0799; else goto c02_079a;

c02_0799:;

	goto c02_0765;

c02_079a:;

c02_0796:;

	goto c02_0764;

c02_0765:;

}
	void f38_GetFreeMemory(void);
	void f17_print_i16(void);
const i1 c02_s0193[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(void);

// PrintFreeMemory workspace at ws+3264 length ws+8
void f445_PrintFreeMemory(void) {

	i8 v11361 = (i8)(intptr_t)(f38_GetFreeMemory);

	((void(*)(void))(intptr_t)v11361)();

	i8 v11362 = *(i8*)(intptr_t)(ws+3272);
	i8 v11363 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v11363 = v11362;

	i8 v11364 = (i8)(intptr_t)(ws+3264);
	i8 v11365 = *(i8*)(intptr_t)v11364;
	i1 v11366 = (i1)+10;
	i8 v11367 = ((i8)v11365)>>v11366;
	i2 v11368 = v11367;
	*(i2*)(intptr_t)(ws+3656) = v11368;
	i8 v11369 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(void))(intptr_t)v11369)();

	i8 v11370 = (i8)(intptr_t)c02_s0193;
	*(i8*)(intptr_t)(ws+3696) = v11370;
	i8 v11371 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11371)();

}
const i1 c02_s0194[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x66,0x65,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3280 length ws+0
void f446_SyntaxError(void) {

	i8 v11372 = (i8)(intptr_t)c02_s0194;
	*(i8*)(intptr_t)(ws+3696) = v11372;
	i8 v11373 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11373)();

	i8 v11374 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v11374)();

}
	void f24_ArgvInit(void);
	void f25_ArgvNext(void);
	void f77_LexerAddIncludePath(void);
	void f446_SyntaxError(void);
	void f446_SyntaxError(void);
	void f446_SyntaxError(void);

// ParseArguments workspace at ws+3264 length ws+16
void f447_ParseArguments(void) {

	i8 v11375 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v11375)();

c02_079b:;

	i8 v11376 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v11376)();

	i8 v11377 = *(i8*)(intptr_t)(ws+3280);
	i8 v11378 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v11378 = v11377;

	i8 v11379 = (i8)(intptr_t)(ws+3264);
	i8 v11380 = *(i8*)(intptr_t)v11379;
	i8 v11381 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11381 = v11380;

	i8 v11382 = (i8)(intptr_t)(ws+3272);
	i8 v11383 = *(i8*)(intptr_t)v11382;
	i8 v11384 = (i8)+0;
	if (v11383==v11384) goto c02_07a0; else goto c02_07a1;

c02_07a0:;

	goto c02_079c;

c02_07a1:;

c02_079d:;

	i8 v11385 = (i8)(intptr_t)(ws+3272);
	i8 v11386 = *(i8*)(intptr_t)v11385;
	i1 v11387 = *(i1*)(intptr_t)v11386;
	i1 v11388 = (i1)+45;
	if (v11387==v11388) goto c02_07a5; else goto c02_07a6;

c02_07a5:;

	i8 v11389 = (i8)(intptr_t)(ws+3272);
	i8 v11390 = *(i8*)(intptr_t)v11389;
	i8 v11391 = v11390+(+1);
	i8 v11392 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11392 = v11391;

	i8 v11393 = (i8)(intptr_t)(ws+3272);
	i8 v11394 = *(i8*)(intptr_t)v11393;
	i1 v11395 = *(i1*)(intptr_t)v11394;
	i1 v11396 = (i1)+73;
	if (v11395==v11396) goto c02_07aa; else goto c02_07ab;

c02_07aa:;

	i8 v11397 = (i8)(intptr_t)(ws+3272);
	i8 v11398 = *(i8*)(intptr_t)v11397;
	i8 v11399 = v11398+(+1);
	i8 v11400 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11400 = v11399;

	i8 v11401 = (i8)(intptr_t)(ws+3272);
	i8 v11402 = *(i8*)(intptr_t)v11401;
	*(i8*)(intptr_t)(ws+3280) = v11402;
	i8 v11403 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(void))(intptr_t)v11403)();

	goto c02_07a7;

c02_07ab:;

	i8 v11404 = (i8)(intptr_t)(f446_SyntaxError);

	((void(*)(void))(intptr_t)v11404)();

c02_07a7:;

	goto c02_07a2;

c02_07a6:;

	i8 v11405 = (i8)(intptr_t)(ws+24);
	i8 v11406 = *(i8*)(intptr_t)v11405;
	i8 v11407 = (i8)+0;
	if (v11406==v11407) goto c02_07af; else goto c02_07b0;

c02_07af:;

	i8 v11408 = (i8)(intptr_t)(ws+3272);
	i8 v11409 = *(i8*)(intptr_t)v11408;
	i8 v11410 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v11410 = v11409;

	goto c02_07ac;

c02_07b0:;

	i8 v11411 = (i8)(intptr_t)(ws+32);
	i8 v11412 = *(i8*)(intptr_t)v11411;
	i8 v11413 = (i8)+0;
	if (v11412==v11413) goto c02_07b3; else goto c02_07b4;

c02_07b3:;

	i8 v11414 = (i8)(intptr_t)(ws+3272);
	i8 v11415 = *(i8*)(intptr_t)v11414;
	i8 v11416 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v11416 = v11415;

	goto c02_07ac;

c02_07b4:;

	i8 v11417 = (i8)(intptr_t)(f446_SyntaxError);

	((void(*)(void))(intptr_t)v11417)();

c02_07ac:;

c02_07a2:;

	goto c02_079b;

c02_079c:;

	i8 v11418 = (i8)(intptr_t)(ws+24);
	i8 v11419 = *(i8*)(intptr_t)v11418;
	i8 v11420 = (i8)+0;
	if (v11419==v11420) goto c02_07ba; else goto c02_07bc;

c02_07bc:;

	i8 v11421 = (i8)(intptr_t)(ws+32);
	i8 v11422 = *(i8*)(intptr_t)v11421;
	i8 v11423 = (i8)+0;
	if (v11422==v11423) goto c02_07ba; else goto c02_07bb;

c02_07ba:;

	i8 v11424 = (i8)(intptr_t)(f446_SyntaxError);

	((void(*)(void))(intptr_t)v11424)();

c02_07bb:;

c02_07b5:;

}
const i1 c02_s0195[] = { 0x43,0x4f,0x57,0x46,0x45,0x3a,0x20,0 };
	void f12_print(void);
	void f445_PrintFreeMemory(void);
	void f447_ParseArguments(void);
const i1 c02_s0196[] = { 0 };
	void f77_LexerAddIncludePath(void);
	void f81_LexerIncludeFile(void);
	void f266_CreateMainSubroutine(void);
	void f240_ArchInitTypes(void);
	void f196_EmitterOpenfile(void);
	void f198_EmitterDeclareSubroutine(void);
	void f160_MidStartfile(void);
	void f257_Generate(void);
	void f136_MidStartsub(void);
	void f257_Generate(void);
	void f442_ParserInit(void);
	void f82_LexerReadToken(void);
	void f72_InternalStrDup(void);
	void f72_InternalStrDup(void);
	void f444_ParserFeedToken(void);
	void f443_ParserDeinit(void);
	void f158_MidEndsub(void);
	void f257_Generate(void);
	void f267_ReportWorkspaces(void);
	void f130_MidEndfile(void);
	void f257_Generate(void);
	void f197_EmitterClosefile(void);
const i1 c02_s0197[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f445_PrintFreeMemory(void);

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








































































	i8 v3302 = (i8)+0;
	i8 v3303 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3303 = v3302;


































































































	i1 v5551 = (i1)+0;
	i8 v5552 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5552 = v5551;




































































	i8 v11425 = (i8)(intptr_t)c02_s0195;
	*(i8*)(intptr_t)(ws+3696) = v11425;
	i8 v11426 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11426)();

	i8 v11427 = (i8)(intptr_t)(f445_PrintFreeMemory);

	((void(*)(void))(intptr_t)v11427)();

	i8 v11428 = (i8)(intptr_t)(f447_ParseArguments);

	((void(*)(void))(intptr_t)v11428)();

	i8 v11429 = (i8)(intptr_t)c02_s0196;
	*(i8*)(intptr_t)(ws+3280) = v11429;
	i8 v11430 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(void))(intptr_t)v11430)();

	i8 v11431 = (i8)(intptr_t)(ws+24);
	i8 v11432 = *(i8*)(intptr_t)v11431;
	*(i8*)(intptr_t)(ws+3288) = v11432;
	i8 v11433 = (i8)(intptr_t)(f81_LexerIncludeFile);

	((void(*)(void))(intptr_t)v11433)();

	i8 v11434 = (i8)(intptr_t)(f266_CreateMainSubroutine);

	((void(*)(void))(intptr_t)v11434)();

	i8 v11435 = (i8)(intptr_t)(f240_ArchInitTypes);

	((void(*)(void))(intptr_t)v11435)();

	i8 v11436 = (i8)(intptr_t)(ws+32);
	i8 v11437 = *(i8*)(intptr_t)v11436;
	*(i8*)(intptr_t)(ws+3264) = v11437;
	i8 v11438 = (i8)(intptr_t)(f196_EmitterOpenfile);

	((void(*)(void))(intptr_t)v11438)();

	i8 v11439 = (i8)(intptr_t)(ws+40);
	i8 v11440 = *(i8*)(intptr_t)v11439;
	*(i8*)(intptr_t)(ws+3416) = v11440;
	i8 v11441 = (i8)(intptr_t)(f198_EmitterDeclareSubroutine);

	((void(*)(void))(intptr_t)v11441)();

	i8 v11442 = (i8)(intptr_t)(f160_MidStartfile);

	((void(*)(void))(intptr_t)v11442)();

	i8 v11443 = *(i8*)(intptr_t)(ws+3264);
	i8 v11444 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v11444 = v11443;

	i8 v11445 = (i8)(intptr_t)(ws+3200);
	i8 v11446 = *(i8*)(intptr_t)v11445;
	*(i8*)(intptr_t)(ws+3488) = v11446;
	i8 v11447 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11447)();

	i8 v11448 = (i8)(intptr_t)(ws+40);
	i8 v11449 = *(i8*)(intptr_t)v11448;
	*(i8*)(intptr_t)(ws+3408) = v11449;
	i8 v11450 = (i8)(intptr_t)(f136_MidStartsub);

	((void(*)(void))(intptr_t)v11450)();

	i8 v11451 = *(i8*)(intptr_t)(ws+3416);
	i8 v11452 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v11452 = v11451;

	i8 v11453 = (i8)(intptr_t)(ws+3208);
	i8 v11454 = *(i8*)(intptr_t)v11453;
	*(i8*)(intptr_t)(ws+3488) = v11454;
	i8 v11455 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11455)();

	i8 v11456 = (i8)(intptr_t)(f442_ParserInit);

	((void(*)(void))(intptr_t)v11456)();

c02_07bd:;

	i8 v11457 = (i8)(intptr_t)(f82_LexerReadToken);

	((void(*)(void))(intptr_t)v11457)();

	i1 v11458 = *(i1*)(intptr_t)(ws+3264);
	i8 v11459 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v11459 = v11458;

	i8 v11460 = (i8)(intptr_t)(ws+3216);
	i1 v11461 = *(i1*)(intptr_t)v11460;
	i8 v11462 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v11462 = v11461;

	i8 v11463 = (i8)(intptr_t)(ws+3217);
	i1 v11464 = *(i1*)(intptr_t)v11463;

	if (v11464 != +34) goto c02_07c0;

	i8 v11465 = (i8)(intptr_t)(ws+396);
	i4 v11466 = *(i4*)(intptr_t)v11465;
	i8 v11467 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v11467 = v11466;

	goto c02_07bf;

c02_07c0:;

	if (v11464 != +33) goto c02_07c1;

	i8 v11468 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3464) = v11468;
	i8 v11469 = (i8)(intptr_t)(f72_InternalStrDup);

	((void(*)(void))(intptr_t)v11469)();

	i8 v11470 = *(i8*)(intptr_t)(ws+3472);
	i8 v11471 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v11471 = v11470;

	i8 v11472 = (i8)(intptr_t)(ws+3232);
	i8 v11473 = *(i8*)(intptr_t)v11472;
	i8 v11474 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v11474 = v11473;

	goto c02_07bf;

c02_07c1:;

	if (v11464 != +41) goto c02_07c2;

	i8 v11475 = (i8)(intptr_t)(ws+265);
	*(i8*)(intptr_t)(ws+3464) = v11475;
	i8 v11476 = (i8)(intptr_t)(f72_InternalStrDup);

	((void(*)(void))(intptr_t)v11476)();

	i8 v11477 = *(i8*)(intptr_t)(ws+3472);
	i8 v11478 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v11478 = v11477;

	i8 v11479 = (i8)(intptr_t)(ws+3240);
	i8 v11480 = *(i8*)(intptr_t)v11479;
	i8 v11481 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v11481 = v11480;

	goto c02_07bf;

c02_07c2:;

	i4 v11482 = (i4)+0;
	i8 v11483 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v11483 = v11482;

c02_07bf:;


	i8 v11484 = (i8)(intptr_t)(ws+3217);
	i1 v11485 = *(i1*)(intptr_t)v11484;
	*(i1*)(intptr_t)(ws+3264) = v11485;
	i8 v11486 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)(ws+3272) = v11486;
	i8 v11487 = (i8)(intptr_t)(f444_ParserFeedToken);

	((void(*)(void))(intptr_t)v11487)();

	i8 v11488 = (i8)(intptr_t)(ws+3217);
	i1 v11489 = *(i1*)(intptr_t)v11488;
	i1 v11490 = (i1)+0;
	if (v11489==v11490) goto c02_07c6; else goto c02_07c7;

c02_07c6:;

	goto c02_07be;

c02_07c7:;

c02_07c3:;

	goto c02_07bd;

c02_07be:;

	i8 v11491 = (i8)(intptr_t)(f443_ParserDeinit);

	((void(*)(void))(intptr_t)v11491)();

	i8 v11492 = (i8)(intptr_t)(ws+40);
	i8 v11493 = *(i8*)(intptr_t)v11492;
	*(i8*)(intptr_t)(ws+3408) = v11493;
	i8 v11494 = (i8)(intptr_t)(f158_MidEndsub);

	((void(*)(void))(intptr_t)v11494)();

	i8 v11495 = *(i8*)(intptr_t)(ws+3416);
	i8 v11496 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v11496 = v11495;

	i8 v11497 = (i8)(intptr_t)(ws+3248);
	i8 v11498 = *(i8*)(intptr_t)v11497;
	*(i8*)(intptr_t)(ws+3488) = v11498;
	i8 v11499 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11499)();

	i8 v11500 = (i8)(intptr_t)(ws+40);
	i8 v11501 = *(i8*)(intptr_t)v11500;
	*(i8*)(intptr_t)(ws+3408) = v11501;
	i8 v11502 = (i8)(intptr_t)(f267_ReportWorkspaces);

	((void(*)(void))(intptr_t)v11502)();

	i8 v11503 = (i8)(intptr_t)(f130_MidEndfile);

	((void(*)(void))(intptr_t)v11503)();

	i8 v11504 = *(i8*)(intptr_t)(ws+3264);
	i8 v11505 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v11505 = v11504;

	i8 v11506 = (i8)(intptr_t)(ws+3256);
	i8 v11507 = *(i8*)(intptr_t)v11506;
	*(i8*)(intptr_t)(ws+3488) = v11507;
	i8 v11508 = (i8)(intptr_t)(f257_Generate);

	((void(*)(void))(intptr_t)v11508)();

	i8 v11509 = (i8)(intptr_t)(f197_EmitterClosefile);

	((void(*)(void))(intptr_t)v11509)();

	i8 v11510 = (i8)(intptr_t)c02_s0197;
	*(i8*)(intptr_t)(ws+3696) = v11510;
	i8 v11511 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v11511)();

	i8 v11512 = (i8)(intptr_t)(f445_PrintFreeMemory);

	((void(*)(void))(intptr_t)v11512)();

}
void cmain(void) {
	f3___main();
}
