#include "cowgol.h"
static i8 workspace[0x022e];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+4288 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



}

// MemSet workspace at ws+4240 length ws+24
void f7_MemSet(void) {


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4240) 
,  
*(i1*)(intptr_t)(ws+4248) 
,  
*(i8*)(intptr_t)(ws+4256) 
); 



}

// print_char workspace at ws+4304 length ws+1
void f9_print_char(void) {


	
putchar( 
*(i1*)(intptr_t)(ws+4304) 
); 



}
	void f9_print_char(void);

// print workspace at ws+4288 length ws+9
void f12_print(void) {

c02_0001:;

	i8 v6 = (i8)(intptr_t)(ws+4288);
	i8 v7 = *(i8*)(intptr_t)v6;
	i1 v8 = *(i1*)(intptr_t)v7;
	i8 v9 = (i8)(intptr_t)(ws+4296);
	*(i1*)(intptr_t)v9 = v8;

	i8 v10 = (i8)(intptr_t)(ws+4296);
	i1 v11 = *(i1*)(intptr_t)v10;
	i1 v12 = (i1)+0;
	if (v11==v12) goto c02_0006; else goto c02_0007;

c02_0006:;

	return;

c02_0007:;

c02_0003:;

	i8 v13 = (i8)(intptr_t)(ws+4296);
	i1 v14 = *(i1*)(intptr_t)v13;
	*(i1*)(intptr_t)(ws+4304) = v14;
	i8 v15 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v15)();

	i8 v16 = (i8)(intptr_t)(ws+4288);
	i8 v17 = *(i8*)(intptr_t)v16;
	i8 v18 = v17+(+1);
	i8 v19 = (i8)(intptr_t)(ws+4288);
	*(i8*)(intptr_t)v19 = v18;

	goto c02_0001;

c02_0002:;

}
	void f9_print_char(void);

// print_nl workspace at ws+4288 length ws+0
void f13_print_nl(void) {

	i1 v20 = (i1)+10;
	*(i1*)(intptr_t)(ws+4304) = v20;
	i8 v21 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v21)();

}

// UIToA workspace at ws+4328 length ws+49
void f14_UIToA(void) {

	i8 v22 = (i8)(intptr_t)(ws+4336);
	i8 v23 = *(i8*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+4344);
	*(i8*)(intptr_t)v24 = v23;

c02_0008:;

	i8 v25 = (i8)(intptr_t)(ws+4328);
	i4 v26 = *(i4*)(intptr_t)v25;
	i8 v27 = (i8)(intptr_t)(ws+4332);
	i1 v28 = *(i1*)(intptr_t)v27;
	i4 v29 = v28;
	i4 v30 = v26%v29;
	i8 v31 = (i8)(intptr_t)(ws+4352);
	*(i4*)(intptr_t)v31 = v30;

	i8 v32 = (i8)(intptr_t)(ws+4328);
	i4 v33 = *(i4*)(intptr_t)v32;
	i8 v34 = (i8)(intptr_t)(ws+4332);
	i1 v35 = *(i1*)(intptr_t)v34;
	i4 v36 = v35;
	i4 v37 = v33/v36;
	i8 v38 = (i8)(intptr_t)(ws+4328);
	*(i4*)(intptr_t)v38 = v37;

	i8 v39 = (i8)(intptr_t)(ws+4352);
	i4 v40 = *(i4*)(intptr_t)v39;
	i4 v41 = (i4)+10;
	if (v40<v41) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v42 = (i8)(intptr_t)(ws+4352);
	i4 v43 = *(i4*)(intptr_t)v42;
	i4 v44 = v43+(+48);
	i8 v45 = (i8)(intptr_t)(ws+4352);
	*(i4*)(intptr_t)v45 = v44;

	goto c02_000a;

c02_000e:;

	i8 v46 = (i8)(intptr_t)(ws+4352);
	i4 v47 = *(i4*)(intptr_t)v46;
	i4 v48 = v47+(+87);
	i8 v49 = (i8)(intptr_t)(ws+4352);
	*(i4*)(intptr_t)v49 = v48;

c02_000a:;

	i8 v50 = (i8)(intptr_t)(ws+4352);
	i4 v51 = *(i4*)(intptr_t)v50;
	i1 v52 = v51;
	i8 v53 = (i8)(intptr_t)(ws+4344);
	i8 v54 = *(i8*)(intptr_t)v53;
	*(i1*)(intptr_t)v54 = v52;

	i8 v55 = (i8)(intptr_t)(ws+4344);
	i8 v56 = *(i8*)(intptr_t)v55;
	i8 v57 = v56+(+1);
	i8 v58 = (i8)(intptr_t)(ws+4344);
	*(i8*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+4328);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+0;
	if (v60==v61) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v62 = (i8)(intptr_t)(ws+4336);
	i8 v63 = *(i8*)(intptr_t)v62;
	i8 v64 = (i8)(intptr_t)(ws+4360);
	*(i8*)(intptr_t)v64 = v63;

	i8 v65 = (i8)(intptr_t)(ws+4344);
	i8 v66 = *(i8*)(intptr_t)v65;
	i8 v67 = v66+(-1);
	i8 v68 = (i8)(intptr_t)(ws+4368);
	*(i8*)(intptr_t)v68 = v67;

c02_0014:;

	i8 v69 = (i8)(intptr_t)(ws+4360);
	i8 v70 = *(i8*)(intptr_t)v69;
	i8 v71 = (i8)(intptr_t)(ws+4368);
	i8 v72 = *(i8*)(intptr_t)v71;
	if (v70<v72) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v73 = (i8)(intptr_t)(ws+4360);
	i8 v74 = *(i8*)(intptr_t)v73;
	i1 v75 = *(i1*)(intptr_t)v74;
	i8 v76 = (i8)(intptr_t)(ws+4376);
	*(i1*)(intptr_t)v76 = v75;

	i8 v77 = (i8)(intptr_t)(ws+4368);
	i8 v78 = *(i8*)(intptr_t)v77;
	i1 v79 = *(i1*)(intptr_t)v78;
	i8 v80 = (i8)(intptr_t)(ws+4360);
	i8 v81 = *(i8*)(intptr_t)v80;
	*(i1*)(intptr_t)v81 = v79;

	i8 v82 = (i8)(intptr_t)(ws+4376);
	i1 v83 = *(i1*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+4368);
	i8 v85 = *(i8*)(intptr_t)v84;
	*(i1*)(intptr_t)v85 = v83;

	i8 v86 = (i8)(intptr_t)(ws+4360);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = v87+(+1);
	i8 v89 = (i8)(intptr_t)(ws+4360);
	*(i8*)(intptr_t)v89 = v88;

	i8 v90 = (i8)(intptr_t)(ws+4368);
	i8 v91 = *(i8*)(intptr_t)v90;
	i8 v92 = v91+(-1);
	i8 v93 = (i8)(intptr_t)(ws+4368);
	*(i8*)(intptr_t)v93 = v92;

	goto c02_0014;

c02_0019:;

	i1 v94 = (i1)+0;
	i8 v95 = (i8)(intptr_t)(ws+4344);
	i8 v96 = *(i8*)(intptr_t)v95;
	*(i1*)(intptr_t)v96 = v94;

}
	void f14_UIToA(void);
	void f12_print(void);

// print_i32 workspace at ws+4240 length ws+32
void f16_print_i32(void) {

	i8 v123 = (i8)(intptr_t)(ws+4240);
	i4 v124 = *(i4*)(intptr_t)v123;
	*(i4*)(intptr_t)(ws+4328) = v124;
	i1 v125 = (i1)+10;
	*(i1*)(intptr_t)(ws+4332) = v125;
	i8 v126 = (i8)(intptr_t)(ws+4244);
	*(i8*)(intptr_t)(ws+4336) = v126;
	i8 v127 = (i8)(intptr_t)(f14_UIToA);

	((void(*)(void))(intptr_t)v127)();

	i8 v128 = *(i8*)(intptr_t)(ws+4344);
	i8 v129 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v129 = v128;

	i8 v130 = (i8)(intptr_t)(ws+4256);
	i8 v131 = *(i8*)(intptr_t)v130;
	i8 v132 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v132 = v131;

	i8 v133 = (i8)(intptr_t)(ws+4244);
	*(i8*)(intptr_t)(ws+4288) = v133;
	i8 v134 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v134)();

}
	void f16_print_i32(void);

// print_i16 workspace at ws+3992 length ws+2
void f17_print_i16(void) {

	i8 v135 = (i8)(intptr_t)(ws+3992);
	i2 v136 = *(i2*)(intptr_t)v135;
	i4 v137 = v136;
	*(i4*)(intptr_t)(ws+4240) = v137;
	i8 v138 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(void))(intptr_t)v138)();

}
	void f16_print_i32(void);

// print_i8 workspace at ws+4232 length ws+1
void f18_print_i8(void) {

	i8 v139 = (i8)(intptr_t)(ws+4232);
	i1 v140 = *(i1*)(intptr_t)v139;
	i4 v141 = v140;
	*(i4*)(intptr_t)(ws+4240) = v141;
	i8 v142 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(void))(intptr_t)v142)();

}
	void f9_print_char(void);

// print_hex_i8 workspace at ws+4296 length ws+3
void f19_print_hex_i8(void) {

	i1 v143 = (i1)+2;
	i8 v144 = (i8)(intptr_t)(ws+4297);
	*(i1*)(intptr_t)v144 = v143;

c02_001f:;

	i8 v145 = (i8)(intptr_t)(ws+4296);
	i1 v146 = *(i1*)(intptr_t)v145;
	i1 v147 = (i1)+4;
	i1 v148 = ((i1)v146)>>v147;
	i8 v149 = (i8)(intptr_t)(ws+4298);
	*(i1*)(intptr_t)v149 = v148;

	i8 v150 = (i8)(intptr_t)(ws+4298);
	i1 v151 = *(i1*)(intptr_t)v150;
	i1 v152 = (i1)+10;
	if (v151<v152) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v153 = (i8)(intptr_t)(ws+4298);
	i1 v154 = *(i1*)(intptr_t)v153;
	i1 v155 = v154+(+48);
	i8 v156 = (i8)(intptr_t)(ws+4298);
	*(i1*)(intptr_t)v156 = v155;

	goto c02_0021;

c02_0025:;

	i8 v157 = (i8)(intptr_t)(ws+4298);
	i1 v158 = *(i1*)(intptr_t)v157;
	i1 v159 = v158+(+87);
	i8 v160 = (i8)(intptr_t)(ws+4298);
	*(i1*)(intptr_t)v160 = v159;

c02_0021:;

	i8 v161 = (i8)(intptr_t)(ws+4298);
	i1 v162 = *(i1*)(intptr_t)v161;
	*(i1*)(intptr_t)(ws+4304) = v162;
	i8 v163 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v163)();

	i8 v164 = (i8)(intptr_t)(ws+4296);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+4;
	i1 v167 = ((i1)v165)<<v166;
	i8 v168 = (i8)(intptr_t)(ws+4296);
	*(i1*)(intptr_t)v168 = v167;

	i8 v169 = (i8)(intptr_t)(ws+4297);
	i1 v170 = *(i1*)(intptr_t)v169;
	i1 v171 = v170+(-1);
	i8 v172 = (i8)(intptr_t)(ws+4297);
	*(i1*)(intptr_t)v172 = v171;

	i8 v173 = (i8)(intptr_t)(ws+4297);
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

// print_hex_i16 workspace at ws+4288 length ws+2
void f20_print_hex_i16(void) {

	i8 v176 = (i8)(intptr_t)(ws+4288);
	i2 v177 = *(i2*)(intptr_t)v176;
	i1 v178 = (i1)+8;
	i2 v179 = ((i2)v177)>>v178;
	i1 v180 = v179;
	*(i1*)(intptr_t)(ws+4296) = v180;
	i8 v181 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v181)();

	i8 v182 = (i8)(intptr_t)(ws+4288);
	i2 v183 = *(i2*)(intptr_t)v182;
	i1 v184 = v183;
	*(i1*)(intptr_t)(ws+4296) = v184;
	i8 v185 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v185)();

}
	void f19_print_hex_i8(void);
	void f19_print_hex_i8(void);
	void f19_print_hex_i8(void);
	void f19_print_hex_i8(void);

// print_hex_i32 workspace at ws+4288 length ws+4
void f21_print_hex_i32(void) {

	i8 v186 = (i8)(intptr_t)(ws+4288);
	i4 v187 = *(i4*)(intptr_t)v186;
	i1 v188 = (i1)+24;
	i4 v189 = ((i4)v187)>>v188;
	i1 v190 = v189;
	*(i1*)(intptr_t)(ws+4296) = v190;
	i8 v191 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v191)();

	i8 v192 = (i8)(intptr_t)(ws+4288);
	i4 v193 = *(i4*)(intptr_t)v192;
	i1 v194 = (i1)+16;
	i4 v195 = ((i4)v193)>>v194;
	i1 v196 = v195;
	*(i1*)(intptr_t)(ws+4296) = v196;
	i8 v197 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v197)();

	i8 v198 = (i8)(intptr_t)(ws+4288);
	i4 v199 = *(i4*)(intptr_t)v198;
	i1 v200 = (i1)+8;
	i4 v201 = ((i4)v199)>>v200;
	i1 v202 = v201;
	*(i1*)(intptr_t)(ws+4296) = v202;
	i8 v203 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v203)();

	i8 v204 = (i8)(intptr_t)(ws+4288);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = v205;
	*(i1*)(intptr_t)(ws+4296) = v206;
	i8 v207 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v207)();

}
	void f7_MemSet(void);

// MemZero workspace at ws+4176 length ws+16
void f23_MemZero(void) {

	i8 v309 = (i8)(intptr_t)(ws+4176);
	i8 v310 = *(i8*)(intptr_t)v309;
	*(i8*)(intptr_t)(ws+4240) = v310;
	i1 v311 = (i1)+0;
	*(i1*)(intptr_t)(ws+4248) = v311;
	i8 v312 = (i8)(intptr_t)(ws+4184);
	i8 v313 = *(i8*)(intptr_t)v312;
	*(i8*)(intptr_t)(ws+4256) = v313;
	i8 v314 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(void))(intptr_t)v314)();

}

// ArgvInit workspace at ws+4008 length ws+0
void f24_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v315 = (i8)(intptr_t)(ws+16);
	i8 v316 = *(i8*)(intptr_t)v315;
	i8 v317 = v316+(+8);
	i8 v318 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v318 = v317;

}

// ArgvNext workspace at ws+4008 length ws+8
void f25_ArgvNext(void) {

	i8 v319 = (i8)(intptr_t)(ws+16);
	i8 v320 = *(i8*)(intptr_t)v319;
	i8 v321 = (i8)+0;
	if (v320==v321) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v322 = (i8)+0;
	i8 v323 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v323 = v322;

	return;

c02_0053:;

c02_004f:;

	i8 v324 = (i8)(intptr_t)(ws+16);
	i8 v325 = *(i8*)(intptr_t)v324;
	i8 v326 = *(i8*)(intptr_t)v325;
	i8 v327 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v327 = v326;

	i8 v328 = (i8)(intptr_t)(ws+4008);
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

// StrLen workspace at ws+4064 length ws+25
void f29_StrLen(void) {

	i8 v406 = (i8)(intptr_t)(ws+4064);
	i8 v407 = *(i8*)(intptr_t)v406;
	i8 v408 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v408 = v407;

c02_0075:;

	i8 v409 = (i8)(intptr_t)(ws+4080);
	i8 v410 = *(i8*)(intptr_t)v409;
	i1 v411 = *(i1*)(intptr_t)v410;
	i8 v412 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v412 = v411;

	i8 v413 = (i8)(intptr_t)(ws+4088);
	i1 v414 = *(i1*)(intptr_t)v413;
	i1 v415 = (i1)+0;
	if (v414==v415) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v416 = (i8)(intptr_t)(ws+4080);
	i8 v417 = *(i8*)(intptr_t)v416;
	i8 v418 = v417+(+1);
	i8 v419 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v419 = v418;

	goto c02_0075;

c02_0076:;

	i8 v420 = (i8)(intptr_t)(ws+4080);
	i8 v421 = *(i8*)(intptr_t)v420;
	i8 v422 = (i8)(intptr_t)(ws+4064);
	i8 v423 = *(i8*)(intptr_t)v422;
	i8 v424 = v421-v423;
	i8 v425 = (i8)(intptr_t)(ws+4072);
	*(i8*)(intptr_t)v425 = v424;

}

// MemCopy workspace at ws+4264 length ws+24
void f31_MemCopy(void) {

c02_0083:;

	i8 v445 = (i8)(intptr_t)(ws+4272);
	i8 v446 = *(i8*)(intptr_t)v445;
	i8 v447 = (i8)+0;
	if (v446==v447) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v448 = (i8)(intptr_t)(ws+4264);
	i8 v449 = *(i8*)(intptr_t)v448;
	i1 v450 = *(i1*)(intptr_t)v449;
	i8 v451 = (i8)(intptr_t)(ws+4280);
	i8 v452 = *(i8*)(intptr_t)v451;
	*(i1*)(intptr_t)v452 = v450;

	i8 v453 = (i8)(intptr_t)(ws+4280);
	i8 v454 = *(i8*)(intptr_t)v453;
	i8 v455 = v454+(+1);
	i8 v456 = (i8)(intptr_t)(ws+4280);
	*(i8*)(intptr_t)v456 = v455;

	i8 v457 = (i8)(intptr_t)(ws+4264);
	i8 v458 = *(i8*)(intptr_t)v457;
	i8 v459 = v458+(+1);
	i8 v460 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v460 = v459;

	i8 v461 = (i8)(intptr_t)(ws+4272);
	i8 v462 = *(i8*)(intptr_t)v461;
	i8 v463 = v462+(-1);
	i8 v464 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v464 = v463;

	goto c02_0083;

c02_0088:;

}

// RawAlloc workspace at ws+4272 length ws+16
void f32_RawAlloc(void) {


	
*(i8*)(intptr_t)(ws+4280) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+4272) 
); 



}
	void f32_RawAlloc(void);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// Alloc workspace at ws+4152 length ws+24
void f33_Alloc(void) {

	i8 v465 = (i8)(intptr_t)(ws+4152);
	i8 v466 = *(i8*)(intptr_t)v465;
	*(i8*)(intptr_t)(ws+4272) = v466;
	i8 v467 = (i8)(intptr_t)(f32_RawAlloc);

	((void(*)(void))(intptr_t)v467)();

	i8 v468 = *(i8*)(intptr_t)(ws+4280);
	i8 v469 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v469 = v468;

	i8 v470 = (i8)(intptr_t)(ws+4168);
	i8 v471 = *(i8*)(intptr_t)v470;
	i8 v472 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v472 = v471;

	i8 v473 = (i8)(intptr_t)(ws+4160);
	i8 v474 = *(i8*)(intptr_t)v473;
	i8 v475 = (i8)+0;
	if (v474==v475) goto c02_008c; else goto c02_008d;

c02_008c:;

	i8 v476 = (i8)(intptr_t)c02_s0000;
	*(i8*)(intptr_t)(ws+4288) = v476;
	i8 v477 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v477)();

	i8 v478 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v478)();

c02_008d:;

c02_0089:;

}

// Free workspace at ws+4280 length ws+8
void f34_Free(void) {


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4280) 
); 



}

// GetFreeMemory workspace at ws+3992 length ws+8
void f38_GetFreeMemory(void) {

	i8 v479 = (i8)+0;
	i8 v480 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v480 = v479;

}

// _fcb_init workspace at ws+4056 length ws+8
void f41__fcb_init(void) {

	i4 v481 = (i4)+0;
	i8 v482 = (i8)(intptr_t)(ws+4056);
	i8 v483 = *(i8*)(intptr_t)v482;
	i8 v484 = v483+(+4);
	*(i4*)(intptr_t)v484 = v481;

	i2 v485 = (i2)+0;
	i8 v486 = (i8)(intptr_t)(ws+4056);
	i8 v487 = *(i8*)(intptr_t)v486;
	i8 v488 = v487+(+8);
	*(i2*)(intptr_t)v488 = v485;

	i2 v489 = (i2)+0;
	i8 v490 = (i8)(intptr_t)(ws+4056);
	i8 v491 = *(i8*)(intptr_t)v490;
	i8 v492 = v491+(+10);
	*(i2*)(intptr_t)v492 = v489;

	i1 v493 = (i1)+0;
	i8 v494 = (i8)(intptr_t)(ws+4056);
	i8 v495 = *(i8*)(intptr_t)v494;
	i8 v496 = v495+(+524);
	*(i1*)(intptr_t)v496 = v493;

}

// _fcb_advance workspace at ws+4408 length ws+8
void f42__fcb_advance(void) {

	i8 v497 = (i8)(intptr_t)(ws+4408);
	i8 v498 = *(i8*)(intptr_t)v497;
	i8 v499 = v498+(+10);
	i2 v500 = *(i2*)(intptr_t)v499;
	i2 v501 = v500+(+1);
	i8 v502 = (i8)(intptr_t)(ws+4408);
	i8 v503 = *(i8*)(intptr_t)v502;
	i8 v504 = v503+(+10);
	*(i2*)(intptr_t)v504 = v501;

}
	void f39_FCBRawRead(void);
	void f42__fcb_advance(void);

// _fcb_fillbuffer workspace at ws+4176 length ws+18
void f43__fcb_fillbuffer(void) {

	i8 v505 = (i8)(intptr_t)(ws+4176);
	i8 v506 = *(i8*)(intptr_t)v505;
	i8 v507 = v506+(+4);
	i4 v508 = *(i4*)(intptr_t)v507;
	i8 v509 = (i8)(intptr_t)(ws+4176);
	i8 v510 = *(i8*)(intptr_t)v509;
	i8 v511 = v510+(+10);
	i2 v512 = *(i2*)(intptr_t)v511;
	i4 v513 = v512;
	i4 v514 = v508+v513;
	i8 v515 = (i8)(intptr_t)(ws+4188);
	*(i4*)(intptr_t)v515 = v514;

	i8 v516 = (i8)(intptr_t)(ws+4176);
	i8 v517 = *(i8*)(intptr_t)v516;
	*(i8*)(intptr_t)(ws+4200) = v517;
	i8 v518 = (i8)(intptr_t)(ws+4188);
	i4 v519 = *(i4*)(intptr_t)v518;
	*(i4*)(intptr_t)(ws+4208) = v519;
	i2 v520 = (i2)+512;
	*(i2*)(intptr_t)(ws+4212) = v520;
	i8 v521 = (i8)(intptr_t)(f39_FCBRawRead);

	((void(*)(void))(intptr_t)v521)();

	i2 v522 = *(i2*)(intptr_t)(ws+4214);
	i8 v523 = (i8)(intptr_t)(ws+4192);
	*(i2*)(intptr_t)v523 = v522;

	i8 v524 = (i8)(intptr_t)(ws+4192);
	i2 v525 = *(i2*)(intptr_t)v524;
	i8 v526 = (i8)(intptr_t)(ws+4176);
	i8 v527 = *(i8*)(intptr_t)v526;
	i8 v528 = v527+(+8);
	*(i2*)(intptr_t)v528 = v525;

	i1 v529 = (i1)+0;
	i8 v530 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v530 = v529;

	i8 v531 = (i8)(intptr_t)(ws+4176);
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
	i8 v538 = (i8)(intptr_t)(ws+4176);
	i8 v539 = *(i8*)(intptr_t)v538;
	i8 v540 = v539+(+524);
	*(i1*)(intptr_t)v540 = v537;

	i8 v541 = (i8)(intptr_t)(ws+4188);
	i4 v542 = *(i4*)(intptr_t)v541;
	i8 v543 = (i8)(intptr_t)(ws+4176);
	i8 v544 = *(i8*)(intptr_t)v543;
	i8 v545 = v544+(+4);
	*(i4*)(intptr_t)v545 = v542;

	i2 v546 = (i2)+0;
	i8 v547 = (i8)(intptr_t)(ws+4176);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+10);
	*(i2*)(intptr_t)v549 = v546;

	i8 v550 = (i8)(intptr_t)(ws+4176);
	i8 v551 = *(i8*)(intptr_t)v550;
	i8 v552 = v551+(+8);
	i2 v553 = *(i2*)(intptr_t)v552;
	i2 v554 = (i2)+0;
	if (v553==v554) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v555 = (i8)(intptr_t)(ws+4176);
	i8 v556 = *(i8*)(intptr_t)v555;
	i8 v557 = v556+(+12);
	i1 v558 = *(i1*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+4176);
	i8 v561 = *(i8*)(intptr_t)v560;
	*(i8*)(intptr_t)(ws+4408) = v561;
	i8 v562 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v562)();

c02_0097:;

c02_0093:;

}
	void f40_FCBRawWrite(void);

// FCBFlush workspace at ws+4408 length ws+12
void f44_FCBFlush(void) {

	i8 v563 = (i8)(intptr_t)(ws+4408);
	i8 v564 = *(i8*)(intptr_t)v563;
	i8 v565 = v564+(+4);
	i4 v566 = *(i4*)(intptr_t)v565;
	i8 v567 = (i8)(intptr_t)(ws+4416);
	*(i4*)(intptr_t)v567 = v566;

	i8 v568 = (i8)(intptr_t)(ws+4408);
	i8 v569 = *(i8*)(intptr_t)v568;
	i8 v570 = v569+(+524);
	i1 v571 = *(i1*)(intptr_t)v570;
	i1 v572 = v571&(+4);
	i1 v573 = (i1)+0;
	if (v572==v573) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v574 = (i8)(intptr_t)(ws+4408);
	i8 v575 = *(i8*)(intptr_t)v574;
	*(i8*)(intptr_t)(ws+4424) = v575;
	i8 v576 = (i8)(intptr_t)(ws+4416);
	i4 v577 = *(i4*)(intptr_t)v576;
	*(i4*)(intptr_t)(ws+4432) = v577;
	i8 v578 = (i8)(intptr_t)(ws+4408);
	i8 v579 = *(i8*)(intptr_t)v578;
	i8 v580 = v579+(+10);
	i2 v581 = *(i2*)(intptr_t)v580;
	*(i2*)(intptr_t)(ws+4436) = v581;
	i8 v582 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(void))(intptr_t)v582)();

	i8 v583 = (i8)(intptr_t)(ws+4408);
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

	i8 v589 = (i8)(intptr_t)(ws+4416);
	i4 v590 = *(i4*)(intptr_t)v589;
	i8 v591 = (i8)(intptr_t)(ws+4408);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = v592+(+10);
	i2 v594 = *(i2*)(intptr_t)v593;
	i4 v595 = v594;
	i4 v596 = v590+v595;
	i8 v597 = (i8)(intptr_t)(ws+4408);
	i8 v598 = *(i8*)(intptr_t)v597;
	i8 v599 = v598+(+4);
	*(i4*)(intptr_t)v599 = v596;

	i1 v600 = (i1)+0;
	i8 v601 = (i8)(intptr_t)(ws+4408);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = v602+(+524);
	*(i1*)(intptr_t)v603 = v600;

	i2 v604 = (i2)+0;
	i8 v605 = (i8)(intptr_t)(ws+4408);
	i8 v606 = *(i8*)(intptr_t)v605;
	i8 v607 = v606+(+10);
	*(i2*)(intptr_t)v607 = v604;

	i2 v608 = (i2)+0;
	i8 v609 = (i8)(intptr_t)(ws+4408);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = v610+(+8);
	*(i2*)(intptr_t)v611 = v608;

}
	void f44_FCBFlush(void);
	void f42__fcb_advance(void);

// _fcb_flushbuffer workspace at ws+4392 length ws+9
void f45__fcb_flushbuffer(void) {

	i8 v612 = (i8)(intptr_t)(ws+4392);
	i8 v613 = *(i8*)(intptr_t)v612;
	*(i8*)(intptr_t)(ws+4408) = v613;
	i8 v614 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v614)();

	i8 v615 = (i8)(intptr_t)(ws+4392);
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
	i8 v622 = (i8)(intptr_t)(ws+4392);
	i8 v623 = *(i8*)(intptr_t)v622;
	i8 v624 = v623+(+524);
	*(i1*)(intptr_t)v624 = v621;

	i8 v625 = (i8)(intptr_t)(ws+4400);
	i1 v626 = *(i1*)(intptr_t)v625;
	i8 v627 = (i8)(intptr_t)(ws+4392);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v628+(+12);
	*(i1*)(intptr_t)v629 = v626;

	i8 v630 = (i8)(intptr_t)(ws+4392);
	i8 v631 = *(i8*)(intptr_t)v630;
	*(i8*)(intptr_t)(ws+4408) = v631;
	i8 v632 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v632)();

}
	void f44_FCBFlush(void);
	void f43__fcb_fillbuffer(void);
	void f42__fcb_advance(void);

// FCBGetChar workspace at ws+4160 length ws+13
void f46_FCBGetChar(void) {

	i8 v633 = (i8)(intptr_t)(ws+4160);
	i8 v634 = *(i8*)(intptr_t)v633;
	i8 v635 = v634+(+524);
	i1 v636 = *(i1*)(intptr_t)v635;
	i1 v637 = v636&(+4);
	i1 v638 = (i1)+0;
	if (v637==v638) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v639 = (i8)(intptr_t)(ws+4160);
	i8 v640 = *(i8*)(intptr_t)v639;
	*(i8*)(intptr_t)(ws+4408) = v640;
	i8 v641 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v641)();

c02_00ab:;

c02_00a7:;

	i8 v642 = (i8)(intptr_t)(ws+4160);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = v643+(+10);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(ws+4170);
	*(i2*)(intptr_t)v646 = v645;

	i8 v647 = (i8)(intptr_t)(ws+4170);
	i2 v648 = *(i2*)(intptr_t)v647;
	i8 v649 = (i8)(intptr_t)(ws+4160);
	i8 v650 = *(i8*)(intptr_t)v649;
	i8 v651 = v650+(+8);
	i2 v652 = *(i2*)(intptr_t)v651;
	if (v648==v652) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v653 = (i8)(intptr_t)(ws+4160);
	i8 v654 = *(i8*)(intptr_t)v653;
	*(i8*)(intptr_t)(ws+4176) = v654;
	i8 v655 = (i8)(intptr_t)(f43__fcb_fillbuffer);

	((void(*)(void))(intptr_t)v655)();

	i1 v656 = *(i1*)(intptr_t)(ws+4184);
	i8 v657 = (i8)(intptr_t)(ws+4172);
	*(i1*)(intptr_t)v657 = v656;

	i8 v658 = (i8)(intptr_t)(ws+4172);
	i1 v659 = *(i1*)(intptr_t)v658;
	i8 v660 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v660 = v659;

	goto c02_00ac;

c02_00b0:;

	i8 v661 = (i8)(intptr_t)(ws+4160);
	i8 v662 = *(i8*)(intptr_t)v661;
	i8 v663 = v662+(+12);
	i8 v664 = (i8)(intptr_t)(ws+4170);
	i2 v665 = *(i2*)(intptr_t)v664;
	i8 v666 = v665;
	i8 v667 = v663+v666;
	i1 v668 = *(i1*)(intptr_t)v667;
	i8 v669 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v669 = v668;

	i8 v670 = (i8)(intptr_t)(ws+4160);
	i8 v671 = *(i8*)(intptr_t)v670;
	*(i8*)(intptr_t)(ws+4408) = v671;
	i8 v672 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v672)();

c02_00ac:;

}
	void f44_FCBFlush(void);
	void f45__fcb_flushbuffer(void);
	void f42__fcb_advance(void);

// FCBPutChar workspace at ws+4376 length ws+12
void f47_FCBPutChar(void) {

	i8 v673 = (i8)(intptr_t)(ws+4376);
	i8 v674 = *(i8*)(intptr_t)v673;
	i8 v675 = v674+(+524);
	i1 v676 = *(i1*)(intptr_t)v675;
	i1 v677 = v676&(+2);
	i1 v678 = (i1)+0;
	if (v677==v678) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v679 = (i8)(intptr_t)(ws+4376);
	i8 v680 = *(i8*)(intptr_t)v679;
	*(i8*)(intptr_t)(ws+4408) = v680;
	i8 v681 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v681)();

c02_00b5:;

c02_00b1:;

	i8 v682 = (i8)(intptr_t)(ws+4376);
	i8 v683 = *(i8*)(intptr_t)v682;
	i8 v684 = v683+(+10);
	i2 v685 = *(i2*)(intptr_t)v684;
	i8 v686 = (i8)(intptr_t)(ws+4386);
	*(i2*)(intptr_t)v686 = v685;

	i8 v687 = (i8)(intptr_t)(ws+4386);
	i2 v688 = *(i2*)(intptr_t)v687;
	i2 v689 = (i2)+512;
	if (v688==v689) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v690 = (i8)(intptr_t)(ws+4376);
	i8 v691 = *(i8*)(intptr_t)v690;
	*(i8*)(intptr_t)(ws+4392) = v691;
	i8 v692 = (i8)(intptr_t)(ws+4384);
	i1 v693 = *(i1*)(intptr_t)v692;
	*(i1*)(intptr_t)(ws+4400) = v693;
	i8 v694 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(void))(intptr_t)v694)();

	goto c02_00b6;

c02_00ba:;

	i8 v695 = (i8)(intptr_t)(ws+4384);
	i1 v696 = *(i1*)(intptr_t)v695;
	i8 v697 = (i8)(intptr_t)(ws+4376);
	i8 v698 = *(i8*)(intptr_t)v697;
	i8 v699 = v698+(+12);
	i8 v700 = (i8)(intptr_t)(ws+4386);
	i2 v701 = *(i2*)(intptr_t)v700;
	i8 v702 = v701;
	i8 v703 = v699+v702;
	*(i1*)(intptr_t)v703 = v696;

	i8 v704 = (i8)(intptr_t)(ws+4376);
	i8 v705 = *(i8*)(intptr_t)v704;
	*(i8*)(intptr_t)(ws+4408) = v705;
	i8 v706 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v706)();

c02_00b6:;

	i8 v707 = (i8)(intptr_t)(ws+4376);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = v708+(+524);
	i1 v710 = *(i1*)(intptr_t)v709;
	i1 v711 = v710|(+4);
	i8 v712 = (i8)(intptr_t)(ws+4376);
	i8 v713 = *(i8*)(intptr_t)v712;
	i8 v714 = v713+(+524);
	*(i1*)(intptr_t)v714 = v711;

}

// FCBPos workspace at ws+4288 length ws+12
void f48_FCBPos(void) {

	i8 v715 = (i8)(intptr_t)(ws+4288);
	i8 v716 = *(i8*)(intptr_t)v715;
	i8 v717 = v716+(+4);
	i4 v718 = *(i4*)(intptr_t)v717;
	i8 v719 = (i8)(intptr_t)(ws+4288);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = v720+(+10);
	i2 v722 = *(i2*)(intptr_t)v721;
	i4 v723 = v722;
	i4 v724 = v718+v723;
	i8 v725 = (i8)(intptr_t)(ws+4296);
	*(i4*)(intptr_t)v725 = v724;

}

// FCBRawRead workspace at ws+4200 length ws+36
void f39_FCBRawRead(void) {

	i8 v790 = (i8)(intptr_t)(ws+4200);
	i8 v791 = *(i8*)(intptr_t)v790;
	i4 v792 = *(i4*)(intptr_t)v791;
	i8 v793 = (i8)(intptr_t)(ws+4216);
	*(i4*)(intptr_t)v793 = v792;

	i8 v794 = (i8)(intptr_t)(ws+4200);
	i8 v795 = *(i8*)(intptr_t)v794;
	i8 v796 = v795+(+12);
	i8 v797 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v797 = v796;


	
*(i4*)(intptr_t)(ws+4232) 
=pread( 
*(i4*)(intptr_t)(ws+4216) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4224) 
,  
*(i2*)(intptr_t)(ws+4212) 
,  
*(i4*)(intptr_t)(ws+4208) 
); 



	i8 v798 = (i8)(intptr_t)(ws+4232);
	i4 v799 = *(i4*)(intptr_t)v798;
	i4 v800 = (i4)-1;
	if (v799==v800) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v801 = (i2)+0;
	i8 v802 = (i8)(intptr_t)(ws+4214);
	*(i2*)(intptr_t)v802 = v801;

	i8 v803 = (i8)(intptr_t)(ws+4200);
	i8 v804 = *(i8*)(intptr_t)v803;
	i8 v805 = v804+(+524);
	i1 v806 = *(i1*)(intptr_t)v805;
	i1 v807 = v806|(+1);
	i8 v808 = (i8)(intptr_t)(ws+4200);
	i8 v809 = *(i8*)(intptr_t)v808;
	i8 v810 = v809+(+524);
	*(i1*)(intptr_t)v810 = v807;

	goto c02_00d3;

c02_00d7:;

	i8 v811 = (i8)(intptr_t)(ws+4232);
	i4 v812 = *(i4*)(intptr_t)v811;
	i2 v813 = (s2)(s4)v812;
	i8 v814 = (i8)(intptr_t)(ws+4214);
	*(i2*)(intptr_t)v814 = v813;

c02_00d3:;

}

// FCBRawWrite workspace at ws+4424 length ws+36
void f40_FCBRawWrite(void) {

	i8 v815 = (i8)(intptr_t)(ws+4424);
	i8 v816 = *(i8*)(intptr_t)v815;
	i4 v817 = *(i4*)(intptr_t)v816;
	i8 v818 = (i8)(intptr_t)(ws+4440);
	*(i4*)(intptr_t)v818 = v817;

	i8 v819 = (i8)(intptr_t)(ws+4424);
	i8 v820 = *(i8*)(intptr_t)v819;
	i8 v821 = v820+(+12);
	i8 v822 = (i8)(intptr_t)(ws+4448);
	*(i8*)(intptr_t)v822 = v821;


	
*(i4*)(intptr_t)(ws+4456) 
=pwrite( 
*(i4*)(intptr_t)(ws+4440) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4448) 
,  
*(i2*)(intptr_t)(ws+4436) 
,  
*(i4*)(intptr_t)(ws+4432) 
); 



	i8 v823 = (i8)(intptr_t)(ws+4456);
	i4 v824 = *(i4*)(intptr_t)v823;
	i4 v825 = (i4)-1;
	if (v824==v825) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v826 = (i8)(intptr_t)(ws+4424);
	i8 v827 = *(i8*)(intptr_t)v826;
	i8 v828 = v827+(+524);
	i1 v829 = *(i1*)(intptr_t)v828;
	i1 v830 = v829|(+1);
	i8 v831 = (i8)(intptr_t)(ws+4424);
	i8 v832 = *(i8*)(intptr_t)v831;
	i8 v833 = v832+(+524);
	*(i1*)(intptr_t)v833 = v830;

c02_00dc:;

c02_00d8:;

}
	void f41__fcb_init(void);

// fcb_i_open workspace at ws+4024 length ws+28
void f51_fcb_i_open(void) {

	i8 v834 = (i8)(intptr_t)(ws+4024);
	i8 v835 = *(i8*)(intptr_t)v834;
	*(i8*)(intptr_t)(ws+4056) = v835;
	i8 v836 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(void))(intptr_t)v836)();


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+4048) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+4032) 
,  
*(i4*)(intptr_t)(ws+4040) 
,  
(+438)
); 



	i8 v837 = (i8)(intptr_t)(ws+4048);
	i4 v838 = *(i4*)(intptr_t)v837;
	i8 v839 = (i8)(intptr_t)(ws+4024);
	i8 v840 = *(i8*)(intptr_t)v839;
	*(i4*)(intptr_t)v840 = v838;

	i8 v841 = (i8)(intptr_t)(ws+4048);
	i4 v842 = *(i4*)(intptr_t)v841;
	i4 v843 = (i4)+0;
	if ((s4)v842<(s4)v843) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+4044) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v844 = (i1)+0;
	i8 v845 = (i8)(intptr_t)(ws+4044);
	*(i1*)(intptr_t)v845 = v844;

c02_00dd:;

}
	void f51_fcb_i_open(void);

// FCBOpenIn workspace at ws+4000 length ws+18
void f52_FCBOpenIn(void) {

	i8 v846 = (i8)(intptr_t)(ws+4000);
	i8 v847 = *(i8*)(intptr_t)v846;
	*(i8*)(intptr_t)(ws+4024) = v847;
	i8 v848 = (i8)(intptr_t)(ws+4008);
	i8 v849 = *(i8*)(intptr_t)v848;
	*(i8*)(intptr_t)(ws+4032) = v849;
	i4 v850 = (i4)+0;
	*(i4*)(intptr_t)(ws+4040) = v850;
	i8 v851 = (i8)(intptr_t)(f51_fcb_i_open);

	((void(*)(void))(intptr_t)v851)();

	i1 v852 = *(i1*)(intptr_t)(ws+4044);
	i8 v853 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v853 = v852;

	i8 v854 = (i8)(intptr_t)(ws+4017);
	i1 v855 = *(i1*)(intptr_t)v854;
	i8 v856 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v856 = v855;

}
	void f51_fcb_i_open(void);

// FCBOpenOut workspace at ws+4000 length ws+18
void f54_FCBOpenOut(void) {

	i8 v868 = (i8)(intptr_t)(ws+4000);
	i8 v869 = *(i8*)(intptr_t)v868;
	*(i8*)(intptr_t)(ws+4024) = v869;
	i8 v870 = (i8)(intptr_t)(ws+4008);
	i8 v871 = *(i8*)(intptr_t)v870;
	*(i8*)(intptr_t)(ws+4032) = v871;
	i4 v872 = (i4)+578;
	*(i4*)(intptr_t)(ws+4040) = v872;
	i8 v873 = (i8)(intptr_t)(f51_fcb_i_open);

	((void(*)(void))(intptr_t)v873)();

	i1 v874 = *(i1*)(intptr_t)(ws+4044);
	i8 v875 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v875 = v874;

	i8 v876 = (i8)(intptr_t)(ws+4017);
	i1 v877 = *(i1*)(intptr_t)v876;
	i8 v878 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v878 = v877;

}
	void f44_FCBFlush(void);

// FCBClose workspace at ws+3992 length ws+16
void f55_FCBClose(void) {

	i8 v879 = (i8)(intptr_t)(ws+3992);
	i8 v880 = *(i8*)(intptr_t)v879;
	*(i8*)(intptr_t)(ws+4408) = v880;
	i8 v881 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v881)();

	i8 v882 = (i8)(intptr_t)(ws+3992);
	i8 v883 = *(i8*)(intptr_t)v882;
	i4 v884 = *(i4*)(intptr_t)v883;
	i8 v885 = (i8)(intptr_t)(ws+4004);
	*(i4*)(intptr_t)v885 = v884;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+4004) 
); 


	
*(i1*)(intptr_t)(ws+4000) 
 = errno; 



}
	void f47_FCBPutChar(void);

// FCBPutBlock workspace at ws+4352 length ws+24
void f59_FCBPutBlock(void) {

c02_00ef:;

	i8 v929 = (i8)(intptr_t)(ws+4368);
	i8 v930 = *(i8*)(intptr_t)v929;
	i8 v931 = (i8)+0;
	if (v930==v931) goto c02_00f4; else goto c02_00f3;

c02_00f3:;

	i8 v932 = (i8)(intptr_t)(ws+4352);
	i8 v933 = *(i8*)(intptr_t)v932;
	*(i8*)(intptr_t)(ws+4376) = v933;
	i8 v934 = (i8)(intptr_t)(ws+4360);
	i8 v935 = *(i8*)(intptr_t)v934;
	i1 v936 = *(i1*)(intptr_t)v935;
	*(i1*)(intptr_t)(ws+4384) = v936;
	i8 v937 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v937)();

	i8 v938 = (i8)(intptr_t)(ws+4360);
	i8 v939 = *(i8*)(intptr_t)v938;
	i8 v940 = v939+(+1);
	i8 v941 = (i8)(intptr_t)(ws+4360);
	*(i8*)(intptr_t)v941 = v940;

	i8 v942 = (i8)(intptr_t)(ws+4368);
	i8 v943 = *(i8*)(intptr_t)v942;
	i8 v944 = v943+(-1);
	i8 v945 = (i8)(intptr_t)(ws+4368);
	*(i8*)(intptr_t)v945 = v944;

	goto c02_00ef;

c02_00f4:;

}

// MidReader workspace at ws+4080 length ws+8
void f60_MidReader(void) {

}
const i1 c02_s0001[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(void);

// StartError workspace at ws+4288 length ws+0
void f66_StartError(void) {

	i8 v956 = (i8)(intptr_t)c02_s0001;
	*(i8*)(intptr_t)(ws+4288) = v956;
	i8 v957 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v957)();

}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+4288 length ws+0
void f67_EndError(void) {

	i8 v958 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v958)();

	i8 v959 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v959)();

}
	void f66_StartError(void);
	void f12_print(void);
	void f67_EndError(void);

// SimpleError workspace at ws+4280 length ws+8
void f68_SimpleError(void) {

	i8 v960 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v960)();

	i8 v961 = (i8)(intptr_t)(ws+4280);
	i8 v962 = *(i8*)(intptr_t)v961;
	*(i8*)(intptr_t)(ws+4288) = v962;
	i8 v963 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v963)();

	i8 v964 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v964)();

}
	void f66_StartError(void);
const i1 c02_s0002[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0003[] = { 0x27,0 };
	void f12_print(void);
	void f67_EndError(void);

// CannotOpen workspace at ws+4000 length ws+8
void f69_CannotOpen(void) {

	i8 v965 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v965)();

	i8 v966 = (i8)(intptr_t)c02_s0002;
	*(i8*)(intptr_t)(ws+4288) = v966;
	i8 v967 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v967)();

	i8 v968 = (i8)(intptr_t)(ws+4000);
	i8 v969 = *(i8*)(intptr_t)v968;
	*(i8*)(intptr_t)(ws+4288) = v969;
	i8 v970 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v970)();

	i8 v971 = (i8)(intptr_t)c02_s0003;
	*(i8*)(intptr_t)(ws+4288) = v971;
	i8 v972 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v972)();

	i8 v973 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v973)();

}
	void f32_RawAlloc(void);
	void f71_PurgeAllFreeNodes(void);
	void f72_PurgeAllFreeInstructions(void);
	void f32_RawAlloc(void);
const i1 c02_s0004[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// InternalAlloc workspace at ws+4240 length ws+32
void f70_InternalAlloc(void) {

	i8 v974 = (i8)(intptr_t)(ws+4240);
	i8 v975 = *(i8*)(intptr_t)v974;
	*(i8*)(intptr_t)(ws+4272) = v975;
	i8 v976 = (i8)(intptr_t)(f32_RawAlloc);

	((void(*)(void))(intptr_t)v976)();

	i8 v977 = *(i8*)(intptr_t)(ws+4280);
	i8 v978 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v978 = v977;

	i8 v979 = (i8)(intptr_t)(ws+4256);
	i8 v980 = *(i8*)(intptr_t)v979;
	i8 v981 = (i8)(intptr_t)(ws+4248);
	*(i8*)(intptr_t)v981 = v980;

	i8 v982 = (i8)(intptr_t)(ws+4248);
	i8 v983 = *(i8*)(intptr_t)v982;
	i8 v984 = (i8)+0;
	if (v983==v984) goto c02_00f8; else goto c02_00f9;

c02_00f8:;

	i8 v985 = (i8)(intptr_t)(f71_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v985)();

	i8 v986 = (i8)(intptr_t)(f72_PurgeAllFreeInstructions);

	((void(*)(void))(intptr_t)v986)();

	i8 v987 = (i8)(intptr_t)(ws+4240);
	i8 v988 = *(i8*)(intptr_t)v987;
	*(i8*)(intptr_t)(ws+4272) = v988;
	i8 v989 = (i8)(intptr_t)(f32_RawAlloc);

	((void(*)(void))(intptr_t)v989)();

	i8 v990 = *(i8*)(intptr_t)(ws+4280);
	i8 v991 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v991 = v990;

	i8 v992 = (i8)(intptr_t)(ws+4264);
	i8 v993 = *(i8*)(intptr_t)v992;
	i8 v994 = (i8)(intptr_t)(ws+4248);
	*(i8*)(intptr_t)v994 = v993;

	i8 v995 = (i8)(intptr_t)(ws+4248);
	i8 v996 = *(i8*)(intptr_t)v995;
	i8 v997 = (i8)+0;
	if (v996==v997) goto c02_00fd; else goto c02_00fe;

c02_00fd:;

	i8 v998 = (i8)(intptr_t)c02_s0004;
	*(i8*)(intptr_t)(ws+4288) = v998;
	i8 v999 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v999)();

	i8 v1000 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1000)();

c02_00fe:;

c02_00fa:;

c02_00f9:;

c02_00f5:;

}
const i1 c02_s0005[] = { 0x70,0x61,0x72,0x61,0x6d,0 };
const i1 c02_s0006[] = { 0x76,0x38,0 };
const i1 c02_s0007[] = { 0x76,0x34,0 };
const i1 c02_s0008[] = { 0x76,0x32,0 };
const i1 c02_s0009[] = { 0x76,0x31,0 };
static data f3___main_s00ff[] = {

	{ .ptr = (void*)c02_s0005 },








	{ .i1 = { 0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0006 },








	{ .i1 = { 0x08,0x08,0x08,0x01,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0007 },








	{ .i1 = { 0x04,0x04,0x04,0x01,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0008 },








	{ .i1 = { 0x02,0x02,0x02,0x01,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0009 },





	{ .i1 = { 0x01,0x01,0x01,0x01}},
};
const i1 c02_s000b[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s000c[] = { 0x53,0x54,0x41,0x52,0x54,0x46,0x49,0x4c,0x45,0 };
const i1 c02_s000d[] = { 0x45,0x4e,0x44,0x46,0x49,0x4c,0x45,0 };
const i1 c02_s000e[] = { 0x53,0x54,0x41,0x52,0x54,0x53,0x55,0x42,0 };
const i1 c02_s000f[] = { 0x45,0x4e,0x44,0x53,0x55,0x42,0 };
const i1 c02_s0010[] = { 0x53,0x54,0x41,0x52,0x54,0x49,0x4e,0x49,0x54,0 };
const i1 c02_s0011[] = { 0x49,0x4e,0x49,0x54,0x30,0 };
const i1 c02_s0012[] = { 0x49,0x4e,0x49,0x54,0x31,0 };
const i1 c02_s0013[] = { 0x49,0x4e,0x49,0x54,0x32,0 };
const i1 c02_s0014[] = { 0x49,0x4e,0x49,0x54,0x34,0 };
const i1 c02_s0015[] = { 0x49,0x4e,0x49,0x54,0x38,0 };
const i1 c02_s0016[] = { 0x49,0x4e,0x49,0x54,0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s0017[] = { 0x49,0x4e,0x49,0x54,0x41,0x44,0x44,0x52,0x45,0x53,0x53,0 };
const i1 c02_s0018[] = { 0x49,0x4e,0x49,0x54,0x53,0x55,0x42,0x52,0x45,0x46,0 };
const i1 c02_s0019[] = { 0x45,0x4e,0x44,0x49,0x4e,0x49,0x54,0 };
const i1 c02_s001a[] = { 0x41,0x53,0x4d,0x47,0x52,0x4f,0x55,0x50,0x53,0x54,0x41,0x52,0x54,0 };
const i1 c02_s001b[] = { 0x41,0x53,0x4d,0x47,0x52,0x4f,0x55,0x50,0x45,0x4e,0x44,0 };
const i1 c02_s001c[] = { 0x41,0x53,0x4d,0x53,0x54,0x41,0x52,0x54,0 };
const i1 c02_s001d[] = { 0x41,0x53,0x4d,0x54,0x45,0x58,0x54,0 };
const i1 c02_s001e[] = { 0x41,0x53,0x4d,0x53,0x59,0x4d,0x42,0x4f,0x4c,0 };
const i1 c02_s001f[] = { 0x41,0x53,0x4d,0x53,0x55,0x42,0x52,0x45,0x46,0 };
const i1 c02_s0020[] = { 0x41,0x53,0x4d,0x56,0x41,0x4c,0x55,0x45,0 };
const i1 c02_s0021[] = { 0x41,0x53,0x4d,0x45,0x4e,0x44,0 };
const i1 c02_s0022[] = { 0x46,0x41,0x4c,0x4c,0x42,0x41,0x43,0x4b,0 };
const i1 c02_s0023[] = { 0x50,0x41,0x49,0x52,0 };
const i1 c02_s0024[] = { 0x4c,0x41,0x42,0x45,0x4c,0 };
const i1 c02_s0025[] = { 0x4a,0x55,0x4d,0x50,0 };
const i1 c02_s0026[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s0027[] = { 0x43,0x41,0x4c,0x4c,0 };
const i1 c02_s0028[] = { 0x41,0x52,0x47,0x30,0 };
const i1 c02_s0029[] = { 0x41,0x52,0x47,0x31,0 };
const i1 c02_s002a[] = { 0x41,0x52,0x47,0x32,0 };
const i1 c02_s002b[] = { 0x41,0x52,0x47,0x34,0 };
const i1 c02_s002c[] = { 0x41,0x52,0x47,0x38,0 };
const i1 c02_s002d[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x30,0 };
const i1 c02_s002e[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x31,0 };
const i1 c02_s002f[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x32,0 };
const i1 c02_s0030[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x34,0 };
const i1 c02_s0031[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x38,0 };
const i1 c02_s0032[] = { 0x43,0x4f,0x4e,0x53,0x54,0x41,0x4e,0x54,0 };
const i1 c02_s0033[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s0034[] = { 0x41,0x44,0x44,0x52,0x45,0x53,0x53,0 };
const i1 c02_s0035[] = { 0x53,0x55,0x42,0x52,0x45,0x46,0 };
const i1 c02_s0036[] = { 0x44,0x45,0x52,0x45,0x46,0x30,0 };
const i1 c02_s0037[] = { 0x44,0x45,0x52,0x45,0x46,0x31,0 };
const i1 c02_s0038[] = { 0x44,0x45,0x52,0x45,0x46,0x32,0 };
const i1 c02_s0039[] = { 0x44,0x45,0x52,0x45,0x46,0x34,0 };
const i1 c02_s003a[] = { 0x44,0x45,0x52,0x45,0x46,0x38,0 };
const i1 c02_s003b[] = { 0x53,0x54,0x4f,0x52,0x45,0x30,0 };
const i1 c02_s003c[] = { 0x53,0x54,0x4f,0x52,0x45,0x31,0 };
const i1 c02_s003d[] = { 0x53,0x54,0x4f,0x52,0x45,0x32,0 };
const i1 c02_s003e[] = { 0x53,0x54,0x4f,0x52,0x45,0x34,0 };
const i1 c02_s003f[] = { 0x53,0x54,0x4f,0x52,0x45,0x38,0 };
const i1 c02_s0040[] = { 0x42,0x41,0x4e,0x44,0 };
const i1 c02_s0041[] = { 0x42,0x4f,0x52,0 };
const i1 c02_s0042[] = { 0x42,0x45,0x51,0x30,0 };
const i1 c02_s0043[] = { 0x42,0x45,0x51,0x31,0 };
const i1 c02_s0044[] = { 0x42,0x45,0x51,0x32,0 };
const i1 c02_s0045[] = { 0x42,0x45,0x51,0x34,0 };
const i1 c02_s0046[] = { 0x42,0x45,0x51,0x38,0 };
const i1 c02_s0047[] = { 0x42,0x4c,0x54,0x53,0x30,0 };
const i1 c02_s0048[] = { 0x42,0x4c,0x54,0x53,0x31,0 };
const i1 c02_s0049[] = { 0x42,0x4c,0x54,0x53,0x32,0 };
const i1 c02_s004a[] = { 0x42,0x4c,0x54,0x53,0x34,0 };
const i1 c02_s004b[] = { 0x42,0x4c,0x54,0x53,0x38,0 };
const i1 c02_s004c[] = { 0x42,0x4c,0x54,0x55,0x30,0 };
const i1 c02_s004d[] = { 0x42,0x4c,0x54,0x55,0x31,0 };
const i1 c02_s004e[] = { 0x42,0x4c,0x54,0x55,0x32,0 };
const i1 c02_s004f[] = { 0x42,0x4c,0x54,0x55,0x34,0 };
const i1 c02_s0050[] = { 0x42,0x4c,0x54,0x55,0x38,0 };
const i1 c02_s0051[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x30,0 };
const i1 c02_s0052[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x31,0 };
const i1 c02_s0053[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x32,0 };
const i1 c02_s0054[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x34,0 };
const i1 c02_s0055[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x38,0 };
const i1 c02_s0056[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x30,0 };
const i1 c02_s0057[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x31,0 };
const i1 c02_s0058[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x32,0 };
const i1 c02_s0059[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x34,0 };
const i1 c02_s005a[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x38,0 };
const i1 c02_s005b[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x30,0 };
const i1 c02_s005c[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x31,0 };
const i1 c02_s005d[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x32,0 };
const i1 c02_s005e[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x34,0 };
const i1 c02_s005f[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x38,0 };
const i1 c02_s0060[] = { 0x43,0x41,0x53,0x54,0x31,0x30,0 };
const i1 c02_s0061[] = { 0x43,0x41,0x53,0x54,0x31,0x31,0 };
const i1 c02_s0062[] = { 0x43,0x41,0x53,0x54,0x31,0x32,0 };
const i1 c02_s0063[] = { 0x43,0x41,0x53,0x54,0x31,0x34,0 };
const i1 c02_s0064[] = { 0x43,0x41,0x53,0x54,0x31,0x38,0 };
const i1 c02_s0065[] = { 0x43,0x41,0x53,0x54,0x32,0x30,0 };
const i1 c02_s0066[] = { 0x43,0x41,0x53,0x54,0x32,0x31,0 };
const i1 c02_s0067[] = { 0x43,0x41,0x53,0x54,0x32,0x32,0 };
const i1 c02_s0068[] = { 0x43,0x41,0x53,0x54,0x32,0x34,0 };
const i1 c02_s0069[] = { 0x43,0x41,0x53,0x54,0x32,0x38,0 };
const i1 c02_s006a[] = { 0x43,0x41,0x53,0x54,0x34,0x30,0 };
const i1 c02_s006b[] = { 0x43,0x41,0x53,0x54,0x34,0x31,0 };
const i1 c02_s006c[] = { 0x43,0x41,0x53,0x54,0x34,0x32,0 };
const i1 c02_s006d[] = { 0x43,0x41,0x53,0x54,0x34,0x34,0 };
const i1 c02_s006e[] = { 0x43,0x41,0x53,0x54,0x34,0x38,0 };
const i1 c02_s006f[] = { 0x43,0x41,0x53,0x54,0x38,0x30,0 };
const i1 c02_s0070[] = { 0x43,0x41,0x53,0x54,0x38,0x31,0 };
const i1 c02_s0071[] = { 0x43,0x41,0x53,0x54,0x38,0x32,0 };
const i1 c02_s0072[] = { 0x43,0x41,0x53,0x54,0x38,0x34,0 };
const i1 c02_s0073[] = { 0x43,0x41,0x53,0x54,0x38,0x38,0 };
const i1 c02_s0074[] = { 0x4e,0x4f,0x54,0x30,0 };
const i1 c02_s0075[] = { 0x4e,0x4f,0x54,0x31,0 };
const i1 c02_s0076[] = { 0x4e,0x4f,0x54,0x32,0 };
const i1 c02_s0077[] = { 0x4e,0x4f,0x54,0x34,0 };
const i1 c02_s0078[] = { 0x4e,0x4f,0x54,0x38,0 };
const i1 c02_s0079[] = { 0x4e,0x45,0x47,0x30,0 };
const i1 c02_s007a[] = { 0x4e,0x45,0x47,0x31,0 };
const i1 c02_s007b[] = { 0x4e,0x45,0x47,0x32,0 };
const i1 c02_s007c[] = { 0x4e,0x45,0x47,0x34,0 };
const i1 c02_s007d[] = { 0x4e,0x45,0x47,0x38,0 };
const i1 c02_s007e[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x30,0 };
const i1 c02_s007f[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x31,0 };
const i1 c02_s0080[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x32,0 };
const i1 c02_s0081[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x34,0 };
const i1 c02_s0082[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x38,0 };
const i1 c02_s0083[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x30,0 };
const i1 c02_s0084[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x31,0 };
const i1 c02_s0085[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x32,0 };
const i1 c02_s0086[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x34,0 };
const i1 c02_s0087[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x38,0 };
const i1 c02_s0088[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x30,0 };
const i1 c02_s0089[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x31,0 };
const i1 c02_s008a[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x32,0 };
const i1 c02_s008b[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x34,0 };
const i1 c02_s008c[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x38,0 };
const i1 c02_s008d[] = { 0x53,0x55,0x42,0x30,0 };
const i1 c02_s008e[] = { 0x53,0x55,0x42,0x31,0 };
const i1 c02_s008f[] = { 0x53,0x55,0x42,0x32,0 };
const i1 c02_s0090[] = { 0x53,0x55,0x42,0x34,0 };
const i1 c02_s0091[] = { 0x53,0x55,0x42,0x38,0 };
const i1 c02_s0092[] = { 0x44,0x49,0x56,0x55,0x30,0 };
const i1 c02_s0093[] = { 0x44,0x49,0x56,0x55,0x31,0 };
const i1 c02_s0094[] = { 0x44,0x49,0x56,0x55,0x32,0 };
const i1 c02_s0095[] = { 0x44,0x49,0x56,0x55,0x34,0 };
const i1 c02_s0096[] = { 0x44,0x49,0x56,0x55,0x38,0 };
const i1 c02_s0097[] = { 0x44,0x49,0x56,0x53,0x30,0 };
const i1 c02_s0098[] = { 0x44,0x49,0x56,0x53,0x31,0 };
const i1 c02_s0099[] = { 0x44,0x49,0x56,0x53,0x32,0 };
const i1 c02_s009a[] = { 0x44,0x49,0x56,0x53,0x34,0 };
const i1 c02_s009b[] = { 0x44,0x49,0x56,0x53,0x38,0 };
const i1 c02_s009c[] = { 0x52,0x45,0x4d,0x55,0x30,0 };
const i1 c02_s009d[] = { 0x52,0x45,0x4d,0x55,0x31,0 };
const i1 c02_s009e[] = { 0x52,0x45,0x4d,0x55,0x32,0 };
const i1 c02_s009f[] = { 0x52,0x45,0x4d,0x55,0x34,0 };
const i1 c02_s00a0[] = { 0x52,0x45,0x4d,0x55,0x38,0 };
const i1 c02_s00a1[] = { 0x52,0x45,0x4d,0x53,0x30,0 };
const i1 c02_s00a2[] = { 0x52,0x45,0x4d,0x53,0x31,0 };
const i1 c02_s00a3[] = { 0x52,0x45,0x4d,0x53,0x32,0 };
const i1 c02_s00a4[] = { 0x52,0x45,0x4d,0x53,0x34,0 };
const i1 c02_s00a5[] = { 0x52,0x45,0x4d,0x53,0x38,0 };
const i1 c02_s00a6[] = { 0x41,0x44,0x44,0x30,0 };
const i1 c02_s00a7[] = { 0x41,0x44,0x44,0x31,0 };
const i1 c02_s00a8[] = { 0x41,0x44,0x44,0x32,0 };
const i1 c02_s00a9[] = { 0x41,0x44,0x44,0x34,0 };
const i1 c02_s00aa[] = { 0x41,0x44,0x44,0x38,0 };
const i1 c02_s00ab[] = { 0x4d,0x55,0x4c,0x30,0 };
const i1 c02_s00ac[] = { 0x4d,0x55,0x4c,0x31,0 };
const i1 c02_s00ad[] = { 0x4d,0x55,0x4c,0x32,0 };
const i1 c02_s00ae[] = { 0x4d,0x55,0x4c,0x34,0 };
const i1 c02_s00af[] = { 0x4d,0x55,0x4c,0x38,0 };
const i1 c02_s00b0[] = { 0x41,0x4e,0x44,0x30,0 };
const i1 c02_s00b1[] = { 0x41,0x4e,0x44,0x31,0 };
const i1 c02_s00b2[] = { 0x41,0x4e,0x44,0x32,0 };
const i1 c02_s00b3[] = { 0x41,0x4e,0x44,0x34,0 };
const i1 c02_s00b4[] = { 0x41,0x4e,0x44,0x38,0 };
const i1 c02_s00b5[] = { 0x4f,0x52,0x30,0 };
const i1 c02_s00b6[] = { 0x4f,0x52,0x31,0 };
const i1 c02_s00b7[] = { 0x4f,0x52,0x32,0 };
const i1 c02_s00b8[] = { 0x4f,0x52,0x34,0 };
const i1 c02_s00b9[] = { 0x4f,0x52,0x38,0 };
const i1 c02_s00ba[] = { 0x45,0x4f,0x52,0x30,0 };
const i1 c02_s00bb[] = { 0x45,0x4f,0x52,0x31,0 };
const i1 c02_s00bc[] = { 0x45,0x4f,0x52,0x32,0 };
const i1 c02_s00bd[] = { 0x45,0x4f,0x52,0x34,0 };
const i1 c02_s00be[] = { 0x45,0x4f,0x52,0x38,0 };
static data f78_MidcodeName_s010d[] = {

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

	{ .ptr = (void*)c02_s0029 },

	{ .ptr = (void*)c02_s002a },

	{ .ptr = (void*)c02_s002b },

	{ .ptr = (void*)c02_s002c },

	{ .ptr = (void*)c02_s002d },

	{ .ptr = (void*)c02_s002e },

	{ .ptr = (void*)c02_s002f },

	{ .ptr = (void*)c02_s0030 },

	{ .ptr = (void*)c02_s0031 },

	{ .ptr = (void*)c02_s0032 },

	{ .ptr = (void*)c02_s0033 },

	{ .ptr = (void*)c02_s0034 },

	{ .ptr = (void*)c02_s0035 },

	{ .ptr = (void*)c02_s0036 },

	{ .ptr = (void*)c02_s0037 },

	{ .ptr = (void*)c02_s0038 },

	{ .ptr = (void*)c02_s0039 },

	{ .ptr = (void*)c02_s003a },

	{ .ptr = (void*)c02_s003b },

	{ .ptr = (void*)c02_s003c },

	{ .ptr = (void*)c02_s003d },

	{ .ptr = (void*)c02_s003e },

	{ .ptr = (void*)c02_s003f },

	{ .ptr = (void*)c02_s0040 },

	{ .ptr = (void*)c02_s0041 },

	{ .ptr = (void*)c02_s0042 },

	{ .ptr = (void*)c02_s0043 },

	{ .ptr = (void*)c02_s0044 },

	{ .ptr = (void*)c02_s0045 },

	{ .ptr = (void*)c02_s0046 },

	{ .ptr = (void*)c02_s0047 },

	{ .ptr = (void*)c02_s0048 },

	{ .ptr = (void*)c02_s0049 },

	{ .ptr = (void*)c02_s004a },

	{ .ptr = (void*)c02_s004b },

	{ .ptr = (void*)c02_s004c },

	{ .ptr = (void*)c02_s004d },

	{ .ptr = (void*)c02_s004e },

	{ .ptr = (void*)c02_s004f },

	{ .ptr = (void*)c02_s0050 },

	{ .ptr = (void*)c02_s0051 },

	{ .ptr = (void*)c02_s0052 },

	{ .ptr = (void*)c02_s0053 },

	{ .ptr = (void*)c02_s0054 },

	{ .ptr = (void*)c02_s0055 },

	{ .ptr = (void*)c02_s0056 },

	{ .ptr = (void*)c02_s0057 },

	{ .ptr = (void*)c02_s0058 },

	{ .ptr = (void*)c02_s0059 },

	{ .ptr = (void*)c02_s005a },

	{ .ptr = (void*)c02_s005b },

	{ .ptr = (void*)c02_s005c },

	{ .ptr = (void*)c02_s005d },

	{ .ptr = (void*)c02_s005e },

	{ .ptr = (void*)c02_s005f },

	{ .ptr = (void*)c02_s0060 },

	{ .ptr = (void*)c02_s0061 },

	{ .ptr = (void*)c02_s0062 },

	{ .ptr = (void*)c02_s0063 },

	{ .ptr = (void*)c02_s0064 },

	{ .ptr = (void*)c02_s0065 },

	{ .ptr = (void*)c02_s0066 },

	{ .ptr = (void*)c02_s0067 },

	{ .ptr = (void*)c02_s0068 },

	{ .ptr = (void*)c02_s0069 },

	{ .ptr = (void*)c02_s006a },

	{ .ptr = (void*)c02_s006b },

	{ .ptr = (void*)c02_s006c },

	{ .ptr = (void*)c02_s006d },

	{ .ptr = (void*)c02_s006e },

	{ .ptr = (void*)c02_s006f },

	{ .ptr = (void*)c02_s0070 },

	{ .ptr = (void*)c02_s0071 },

	{ .ptr = (void*)c02_s0072 },

	{ .ptr = (void*)c02_s0073 },

	{ .ptr = (void*)c02_s0074 },

	{ .ptr = (void*)c02_s0075 },

	{ .ptr = (void*)c02_s0076 },

	{ .ptr = (void*)c02_s0077 },

	{ .ptr = (void*)c02_s0078 },

	{ .ptr = (void*)c02_s0079 },

	{ .ptr = (void*)c02_s007a },

	{ .ptr = (void*)c02_s007b },

	{ .ptr = (void*)c02_s007c },

	{ .ptr = (void*)c02_s007d },

	{ .ptr = (void*)c02_s007e },

	{ .ptr = (void*)c02_s007f },

	{ .ptr = (void*)c02_s0080 },

	{ .ptr = (void*)c02_s0081 },

	{ .ptr = (void*)c02_s0082 },

	{ .ptr = (void*)c02_s0083 },

	{ .ptr = (void*)c02_s0084 },

	{ .ptr = (void*)c02_s0085 },

	{ .ptr = (void*)c02_s0086 },

	{ .ptr = (void*)c02_s0087 },

	{ .ptr = (void*)c02_s0088 },

	{ .ptr = (void*)c02_s0089 },

	{ .ptr = (void*)c02_s008a },

	{ .ptr = (void*)c02_s008b },

	{ .ptr = (void*)c02_s008c },

	{ .ptr = (void*)c02_s008d },

	{ .ptr = (void*)c02_s008e },

	{ .ptr = (void*)c02_s008f },

	{ .ptr = (void*)c02_s0090 },

	{ .ptr = (void*)c02_s0091 },

	{ .ptr = (void*)c02_s0092 },

	{ .ptr = (void*)c02_s0093 },

	{ .ptr = (void*)c02_s0094 },

	{ .ptr = (void*)c02_s0095 },

	{ .ptr = (void*)c02_s0096 },

	{ .ptr = (void*)c02_s0097 },

	{ .ptr = (void*)c02_s0098 },

	{ .ptr = (void*)c02_s0099 },

	{ .ptr = (void*)c02_s009a },

	{ .ptr = (void*)c02_s009b },

	{ .ptr = (void*)c02_s009c },

	{ .ptr = (void*)c02_s009d },

	{ .ptr = (void*)c02_s009e },

	{ .ptr = (void*)c02_s009f },

	{ .ptr = (void*)c02_s00a0 },

	{ .ptr = (void*)c02_s00a1 },

	{ .ptr = (void*)c02_s00a2 },

	{ .ptr = (void*)c02_s00a3 },

	{ .ptr = (void*)c02_s00a4 },

	{ .ptr = (void*)c02_s00a5 },

	{ .ptr = (void*)c02_s00a6 },

	{ .ptr = (void*)c02_s00a7 },

	{ .ptr = (void*)c02_s00a8 },

	{ .ptr = (void*)c02_s00a9 },

	{ .ptr = (void*)c02_s00aa },

	{ .ptr = (void*)c02_s00ab },

	{ .ptr = (void*)c02_s00ac },

	{ .ptr = (void*)c02_s00ad },

	{ .ptr = (void*)c02_s00ae },

	{ .ptr = (void*)c02_s00af },

	{ .ptr = (void*)c02_s00b0 },

	{ .ptr = (void*)c02_s00b1 },

	{ .ptr = (void*)c02_s00b2 },

	{ .ptr = (void*)c02_s00b3 },

	{ .ptr = (void*)c02_s00b4 },

	{ .ptr = (void*)c02_s00b5 },

	{ .ptr = (void*)c02_s00b6 },

	{ .ptr = (void*)c02_s00b7 },

	{ .ptr = (void*)c02_s00b8 },

	{ .ptr = (void*)c02_s00b9 },

	{ .ptr = (void*)c02_s00ba },

	{ .ptr = (void*)c02_s00bb },

	{ .ptr = (void*)c02_s00bc },

	{ .ptr = (void*)c02_s00bd },

	{ .ptr = (void*)c02_s00be },

};

// MidcodeName workspace at ws+4216 length ws+16
void f78_MidcodeName(void) {


	i8 v1055 = (i8)(intptr_t)((i1*)f78_MidcodeName_s010d);
	i8 v1056 = (i8)(intptr_t)(ws+4216);
	i1 v1057 = *(i1*)(intptr_t)v1056;
	i1 v1058 = v1057+(-1);
	i8 v1059 = v1058;
	i1 v1060 = (i1)+3;
	i8 v1061 = ((i8)v1059)<<v1060;
	i8 v1062 = v1055+v1061;
	i8 v1063 = *(i8*)(intptr_t)v1062;
	i8 v1064 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v1064 = v1063;

}
	void f7_MemSet(void);
	void f70_InternalAlloc(void);

// AllocateNewNode workspace at ws+4216 length ws+24
void f77_AllocateNewNode(void) {

	i8 v1067 = (i8)(intptr_t)(ws+192);
	i8 v1068 = *(i8*)(intptr_t)v1067;
	i8 v1069 = (i8)+0;
	if (v1068==v1069) goto c02_0112; else goto c02_0111;

c02_0111:;

	i8 v1070 = (i8)(intptr_t)(ws+192);
	i8 v1071 = *(i8*)(intptr_t)v1070;
	i8 v1072 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v1072 = v1071;

	i8 v1073 = (i8)(intptr_t)(ws+192);
	i8 v1074 = *(i8*)(intptr_t)v1073;
	i8 v1075 = v1074+(+24);
	i8 v1076 = *(i8*)(intptr_t)v1075;
	i8 v1077 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1077 = v1076;

	i8 v1078 = (i8)(intptr_t)(ws+4224);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	*(i8*)(intptr_t)(ws+4240) = v1079;
	i1 v1080 = (i1)+0;
	*(i1*)(intptr_t)(ws+4248) = v1080;
	i8 v1081 = (i8)+257;
	*(i8*)(intptr_t)(ws+4256) = v1081;
	i8 v1082 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(void))(intptr_t)v1082)();

	goto c02_010e;

c02_0112:;

	i8 v1083 = (i8)+257;
	*(i8*)(intptr_t)(ws+4240) = v1083;
	i8 v1084 = (i8)(intptr_t)(f70_InternalAlloc);

	((void(*)(void))(intptr_t)v1084)();

	i8 v1085 = *(i8*)(intptr_t)(ws+4248);
	i8 v1086 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v1086 = v1085;

	i8 v1087 = (i8)(intptr_t)(ws+4232);
	i8 v1088 = *(i8*)(intptr_t)v1087;
	i8 v1089 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v1089 = v1088;

c02_010e:;

	i8 v1090 = (i8)(intptr_t)(ws+4216);
	i1 v1091 = *(i1*)(intptr_t)v1090;
	i8 v1092 = (i8)(intptr_t)(ws+4224);
	i8 v1093 = *(i8*)(intptr_t)v1092;
	i8 v1094 = v1093+(+256);
	*(i1*)(intptr_t)v1094 = v1091;

}

// FreeNode workspace at ws+4144 length ws+8
void f79_FreeNode(void) {

	i8 v1095 = (i8)(intptr_t)(ws+192);
	i8 v1096 = *(i8*)(intptr_t)v1095;
	i8 v1097 = (i8)(intptr_t)(ws+4144);
	i8 v1098 = *(i8*)(intptr_t)v1097;
	i8 v1099 = v1098+(+24);
	*(i8*)(intptr_t)v1099 = v1096;

	i8 v1100 = (i8)(intptr_t)(ws+4144);
	i8 v1101 = *(i8*)(intptr_t)v1100;
	i8 v1102 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1102 = v1101;

}
	void f34_Free(void);

// PurgeAllFreeNodes workspace at ws+4272 length ws+8
void f71_PurgeAllFreeNodes(void) {

c02_0113:;

	i8 v1103 = (i8)(intptr_t)(ws+192);
	i8 v1104 = *(i8*)(intptr_t)v1103;
	i8 v1105 = (i8)+0;
	if (v1104==v1105) goto c02_0118; else goto c02_0117;

c02_0117:;

	i8 v1106 = (i8)(intptr_t)(ws+192);
	i8 v1107 = *(i8*)(intptr_t)v1106;
	i8 v1108 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v1108 = v1107;

	i8 v1109 = (i8)(intptr_t)(ws+192);
	i8 v1110 = *(i8*)(intptr_t)v1109;
	i8 v1111 = v1110+(+24);
	i8 v1112 = *(i8*)(intptr_t)v1111;
	i8 v1113 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1113 = v1112;

	i8 v1114 = (i8)(intptr_t)(ws+4272);
	i8 v1115 = *(i8*)(intptr_t)v1114;
	*(i8*)(intptr_t)(ws+4280) = v1115;
	i8 v1116 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v1116)();

	goto c02_0113;

c02_0118:;

}
	void f47_FCBPutChar(void);

// WriteB8 workspace at ws+4360 length ws+1
void f80_WriteB8(void) {

	i8 v1123 = (i8)(intptr_t)(ws+200);
	*(i8*)(intptr_t)(ws+4376) = v1123;
	i8 v1124 = (i8)(intptr_t)(ws+4360);
	i1 v1125 = *(i1*)(intptr_t)v1124;
	*(i1*)(intptr_t)(ws+4384) = v1125;
	i8 v1126 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v1126)();

}
	void f80_WriteB8(void);
	void f80_WriteB8(void);

// WriteB16 workspace at ws+4352 length ws+2
void f81_WriteB16(void) {

	i8 v1127 = (i8)(intptr_t)(ws+4352);
	i2 v1128 = *(i2*)(intptr_t)v1127;
	i1 v1129 = v1128;
	*(i1*)(intptr_t)(ws+4360) = v1129;
	i8 v1130 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1130)();

	i8 v1131 = (i8)(intptr_t)(ws+4352);
	i2 v1132 = *(i2*)(intptr_t)v1131;
	i1 v1133 = (i1)+8;
	i2 v1134 = ((i2)v1132)>>v1133;
	i1 v1135 = v1134;
	*(i1*)(intptr_t)(ws+4360) = v1135;
	i8 v1136 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1136)();

}
	void f80_WriteB8(void);
	void f81_WriteB16(void);
	void f80_WriteB8(void);
	void f81_WriteB16(void);
	void f59_FCBPutBlock(void);

// FlushCurrentStream workspace at ws+4344 length ws+1
void f82_FlushCurrentStream(void) {

	i1 v1137 = (i1)+70;
	*(i1*)(intptr_t)(ws+4360) = v1137;
	i8 v1138 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1138)();

	i8 v1139 = (i8)(intptr_t)(ws+2774);
	i2 v1140 = *(i2*)(intptr_t)v1139;
	i2 v1141 = v1140+(+3);
	*(i2*)(intptr_t)(ws+4352) = v1141;
	i8 v1142 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1142)();

	i8 v1143 = (i8)(intptr_t)(ws+2800);
	i1 v1144 = *(i1*)(intptr_t)v1143;
	i8 v1145 = (i8)(intptr_t)(ws+4344);
	i1 v1146 = *(i1*)(intptr_t)v1145;
	i1 v1147 = v1144|v1146;
	*(i1*)(intptr_t)(ws+4360) = v1147;
	i8 v1148 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1148)();

	i8 v1149 = (i8)(intptr_t)(ws+2792);
	i8 v1150 = *(i8*)(intptr_t)v1149;
	i2 v1151 = *(i2*)(intptr_t)v1150;
	*(i2*)(intptr_t)(ws+4352) = v1151;
	i8 v1152 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1152)();

	i8 v1153 = (i8)(intptr_t)(ws+200);
	*(i8*)(intptr_t)(ws+4352) = v1153;
	i8 v1154 = (i8)(intptr_t)(ws+725);
	*(i8*)(intptr_t)(ws+4360) = v1154;
	i8 v1155 = (i8)(intptr_t)(ws+2774);
	i2 v1156 = *(i2*)(intptr_t)v1155;
	i8 v1157 = v1156;
	*(i8*)(intptr_t)(ws+4368) = v1157;
	i8 v1158 = (i8)(intptr_t)(f59_FCBPutBlock);

	((void(*)(void))(intptr_t)v1158)();

	i2 v1159 = (i2)+0;
	i8 v1160 = (i8)(intptr_t)(ws+2774);
	*(i2*)(intptr_t)v1160 = v1159;

}
	void f82_FlushCurrentStream(void);

// E_b8 workspace at ws+4336 length ws+1
void f83_E_b8(void) {

	i8 v1161 = (i8)(intptr_t)(ws+2792);
	i8 v1162 = *(i8*)(intptr_t)v1161;
	i8 v1163 = (i8)+0;
	if (v1162==v1163) goto c02_011d; else goto c02_011c;

c02_011c:;

	i8 v1164 = (i8)(intptr_t)(ws+4336);
	i1 v1165 = *(i1*)(intptr_t)v1164;
	i8 v1166 = (i8)(intptr_t)(ws+725);
	i8 v1167 = (i8)(intptr_t)(ws+2774);
	i2 v1168 = *(i2*)(intptr_t)v1167;
	i8 v1169 = v1168;
	i8 v1170 = v1166+v1169;
	*(i1*)(intptr_t)v1170 = v1165;

	i8 v1171 = (i8)(intptr_t)(ws+2774);
	i2 v1172 = *(i2*)(intptr_t)v1171;
	i2 v1173 = v1172+(+1);
	i8 v1174 = (i8)(intptr_t)(ws+2774);
	*(i2*)(intptr_t)v1174 = v1173;

	i8 v1175 = (i8)(intptr_t)(ws+2774);
	i2 v1176 = *(i2*)(intptr_t)v1175;
	i2 v1177 = (i2)+2048;
	if (v1176==v1177) goto c02_0121; else goto c02_0122;

c02_0121:;

	i1 v1178 = (i1)+0;
	*(i1*)(intptr_t)(ws+4344) = v1178;
	i8 v1179 = (i8)(intptr_t)(f82_FlushCurrentStream);

	((void(*)(void))(intptr_t)v1179)();

c02_0122:;

c02_011e:;

c02_011d:;

c02_0119:;

}
	void f83_E_b8(void);
	void f83_E_b8(void);

// E_b16 workspace at ws+4272 length ws+2
void f84_E_b16(void) {

	i8 v1180 = (i8)(intptr_t)(ws+4272);
	i2 v1181 = *(i2*)(intptr_t)v1180;
	i1 v1182 = v1181;
	*(i1*)(intptr_t)(ws+4336) = v1182;
	i8 v1183 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1183)();

	i8 v1184 = (i8)(intptr_t)(ws+4272);
	i2 v1185 = *(i2*)(intptr_t)v1184;
	i1 v1186 = (i1)+8;
	i2 v1187 = ((i2)v1185)>>v1186;
	i1 v1188 = v1187;
	*(i1*)(intptr_t)(ws+4336) = v1188;
	i8 v1189 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1189)();

}
	void f83_E_b8(void);

// E_space workspace at ws+4224 length ws+0
void f86_E_space(void) {

	i1 v1200 = (i1)+32;
	*(i1*)(intptr_t)(ws+4336) = v1200;
	i8 v1201 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1201)();

}
	void f83_E_b8(void);

// E_comma workspace at ws+4248 length ws+0
void f87_E_comma(void) {

	i1 v1202 = (i1)+44;
	*(i1*)(intptr_t)(ws+4336) = v1202;
	i8 v1203 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1203)();

}
	void f83_E_b8(void);

// E_tab workspace at ws+4224 length ws+0
void f88_E_tab(void) {

	i1 v1204 = (i1)+9;
	*(i1*)(intptr_t)(ws+4336) = v1204;
	i8 v1205 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1205)();

}
	void f83_E_b8(void);

// E_nl workspace at ws+4224 length ws+0
void f89_E_nl(void) {

	i1 v1206 = (i1)+10;
	*(i1*)(intptr_t)(ws+4336) = v1206;
	i8 v1207 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1207)();

}
	void f83_E_b8(void);

// E workspace at ws+4320 length ws+9
void f92_E(void) {

c02_0123:;

	i8 v1212 = (i8)(intptr_t)(ws+4320);
	i8 v1213 = *(i8*)(intptr_t)v1212;
	i1 v1214 = *(i1*)(intptr_t)v1213;
	i8 v1215 = (i8)(intptr_t)(ws+4328);
	*(i1*)(intptr_t)v1215 = v1214;

	i8 v1216 = (i8)(intptr_t)(ws+4320);
	i8 v1217 = *(i8*)(intptr_t)v1216;
	i8 v1218 = v1217+(+1);
	i8 v1219 = (i8)(intptr_t)(ws+4320);
	*(i8*)(intptr_t)v1219 = v1218;

	i8 v1220 = (i8)(intptr_t)(ws+4328);
	i1 v1221 = *(i1*)(intptr_t)v1220;
	i1 v1222 = (i1)+0;
	if (v1221==v1222) goto c02_0128; else goto c02_0129;

c02_0128:;

	goto c02_0124;

c02_0129:;

c02_0125:;

	i8 v1223 = (i8)(intptr_t)(ws+4328);
	i1 v1224 = *(i1*)(intptr_t)v1223;
	*(i1*)(intptr_t)(ws+4336) = v1224;
	i8 v1225 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1225)();

	goto c02_0123;

c02_0124:;

}
	void f14_UIToA(void);
	void f83_E_b8(void);

// E_u32 workspace at ws+4280 length ws+41
void f93_E_u32(void) {

	i8 v1226 = (i8)(intptr_t)(ws+4284);
	i8 v1227 = (i8)(intptr_t)(ws+4296);
	*(i8*)(intptr_t)v1227 = v1226;

	i8 v1228 = (i8)(intptr_t)(ws+4280);
	i4 v1229 = *(i4*)(intptr_t)v1228;
	*(i4*)(intptr_t)(ws+4328) = v1229;
	i1 v1230 = (i1)+10;
	*(i1*)(intptr_t)(ws+4332) = v1230;
	i8 v1231 = (i8)(intptr_t)(ws+4296);
	i8 v1232 = *(i8*)(intptr_t)v1231;
	*(i8*)(intptr_t)(ws+4336) = v1232;
	i8 v1233 = (i8)(intptr_t)(f14_UIToA);

	((void(*)(void))(intptr_t)v1233)();

	i8 v1234 = *(i8*)(intptr_t)(ws+4344);
	i8 v1235 = (i8)(intptr_t)(ws+4304);
	*(i8*)(intptr_t)v1235 = v1234;

	i8 v1236 = (i8)(intptr_t)(ws+4304);
	i8 v1237 = *(i8*)(intptr_t)v1236;
	i8 v1238 = (i8)(intptr_t)(ws+4312);
	*(i8*)(intptr_t)v1238 = v1237;

c02_012a:;

	i8 v1239 = (i8)(intptr_t)(ws+4296);
	i8 v1240 = *(i8*)(intptr_t)v1239;
	i1 v1241 = *(i1*)(intptr_t)v1240;
	i8 v1242 = (i8)(intptr_t)(ws+4320);
	*(i1*)(intptr_t)v1242 = v1241;

	i8 v1243 = (i8)(intptr_t)(ws+4320);
	i1 v1244 = *(i1*)(intptr_t)v1243;
	i1 v1245 = (i1)+0;
	if (v1244==v1245) goto c02_012f; else goto c02_0130;

c02_012f:;

	goto c02_012b;

c02_0130:;

c02_012c:;

	i8 v1246 = (i8)(intptr_t)(ws+4320);
	i1 v1247 = *(i1*)(intptr_t)v1246;
	*(i1*)(intptr_t)(ws+4336) = v1247;
	i8 v1248 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1248)();

	i8 v1249 = (i8)(intptr_t)(ws+4296);
	i8 v1250 = *(i8*)(intptr_t)v1249;
	i8 v1251 = v1250+(+1);
	i8 v1252 = (i8)(intptr_t)(ws+4296);
	*(i8*)(intptr_t)v1252 = v1251;

	goto c02_012a;

c02_012b:;

}
	void f93_E_u32(void);

// E_u16 workspace at ws+4272 length ws+2
void f94_E_u16(void) {

	i8 v1253 = (i8)(intptr_t)(ws+4272);
	i2 v1254 = *(i2*)(intptr_t)v1253;
	i4 v1255 = v1254;
	*(i4*)(intptr_t)(ws+4280) = v1255;
	i8 v1256 = (i8)(intptr_t)(f93_E_u32);

	((void(*)(void))(intptr_t)v1256)();

}
	void f93_E_u32(void);

// E_u8 workspace at ws+4264 length ws+1
void f95_E_u8(void) {

	i8 v1257 = (i8)(intptr_t)(ws+4264);
	i1 v1258 = *(i1*)(intptr_t)v1257;
	i4 v1259 = v1258;
	*(i4*)(intptr_t)(ws+4280) = v1259;
	i8 v1260 = (i8)(intptr_t)(f93_E_u32);

	((void(*)(void))(intptr_t)v1260)();

}
	void f83_E_b8(void);
	void f83_E_b8(void);
	void f94_E_u16(void);

// E_i16 workspace at ws+4264 length ws+2
void f97_E_i16(void) {

	i8 v1275 = (i8)(intptr_t)(ws+4264);
	i2 v1276 = *(i2*)(intptr_t)v1275;
	i2 v1277 = (i2)+0;
	if ((s2)v1276<(s2)v1277) goto c02_0139; else goto c02_013a;

c02_0139:;

	i1 v1278 = (i1)+45;
	*(i1*)(intptr_t)(ws+4336) = v1278;
	i8 v1279 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1279)();

	i8 v1280 = (i8)(intptr_t)(ws+4264);
	i2 v1281 = *(i2*)(intptr_t)v1280;
	i2 v1282 = -v1281;
	i8 v1283 = (i8)(intptr_t)(ws+4264);
	*(i2*)(intptr_t)v1283 = v1282;

	goto c02_0136;

c02_013a:;

	i1 v1284 = (i1)+43;
	*(i1*)(intptr_t)(ws+4336) = v1284;
	i8 v1285 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1285)();

c02_0136:;

	i8 v1286 = (i8)(intptr_t)(ws+4264);
	i2 v1287 = *(i2*)(intptr_t)v1286;
	*(i2*)(intptr_t)(ws+4272) = v1287;
	i8 v1288 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v1288)();

}
	void f83_E_b8(void);
	void f83_E_b8(void);
	void f93_E_u32(void);

// E_i32 workspace at ws+4256 length ws+4
void f98_E_i32(void) {

	i8 v1289 = (i8)(intptr_t)(ws+4256);
	i4 v1290 = *(i4*)(intptr_t)v1289;
	i4 v1291 = (i4)+0;
	if ((s4)v1290<(s4)v1291) goto c02_013e; else goto c02_013f;

c02_013e:;

	i1 v1292 = (i1)+45;
	*(i1*)(intptr_t)(ws+4336) = v1292;
	i8 v1293 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1293)();

	i8 v1294 = (i8)(intptr_t)(ws+4256);
	i4 v1295 = *(i4*)(intptr_t)v1294;
	i4 v1296 = -v1295;
	i8 v1297 = (i8)(intptr_t)(ws+4256);
	*(i4*)(intptr_t)v1297 = v1296;

	goto c02_013b;

c02_013f:;

	i1 v1298 = (i1)+43;
	*(i1*)(intptr_t)(ws+4336) = v1298;
	i8 v1299 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1299)();

c02_013b:;

	i8 v1300 = (i8)(intptr_t)(ws+4256);
	i4 v1301 = *(i4*)(intptr_t)v1300;
	*(i4*)(intptr_t)(ws+4280) = v1301;
	i8 v1302 = (i8)(intptr_t)(f93_E_u32);

	((void(*)(void))(intptr_t)v1302)();

}
	void f14_UIToA(void);
	void f83_E_b8(void);
	void f92_E(void);

// E_h workspace at ws+4280 length ws+33
void f99_E_h(void) {

	i8 v1303 = (i8)(intptr_t)(ws+4280);
	i4 v1304 = *(i4*)(intptr_t)v1303;
	*(i4*)(intptr_t)(ws+4328) = v1304;
	i1 v1305 = (i1)+16;
	*(i1*)(intptr_t)(ws+4332) = v1305;
	i8 v1306 = (i8)(intptr_t)(ws+4285);
	*(i8*)(intptr_t)(ws+4336) = v1306;
	i8 v1307 = (i8)(intptr_t)(f14_UIToA);

	((void(*)(void))(intptr_t)v1307)();

	i8 v1308 = *(i8*)(intptr_t)(ws+4344);
	i8 v1309 = (i8)(intptr_t)(ws+4296);
	*(i8*)(intptr_t)v1309 = v1308;

	i8 v1310 = (i8)(intptr_t)(ws+4296);
	i8 v1311 = *(i8*)(intptr_t)v1310;
	i8 v1312 = (i8)(intptr_t)(ws+4304);
	*(i8*)(intptr_t)v1312 = v1311;

	i8 v1313 = (i8)(intptr_t)(ws+4284);
	i1 v1314 = *(i1*)(intptr_t)v1313;
	i8 v1315 = (i8)(intptr_t)(ws+4304);
	i8 v1316 = *(i8*)(intptr_t)v1315;
	i8 v1317 = (i8)(intptr_t)(ws+4285);
	i8 v1318 = v1316-v1317;
	i1 v1319 = v1318;
	i1 v1320 = v1314-v1319;
	i8 v1321 = (i8)(intptr_t)(ws+4312);
	*(i1*)(intptr_t)v1321 = v1320;

c02_0140:;

	i8 v1322 = (i8)(intptr_t)(ws+4312);
	i1 v1323 = *(i1*)(intptr_t)v1322;
	i1 v1324 = (i1)+0;
	if (v1323==v1324) goto c02_0145; else goto c02_0144;

c02_0144:;

	i1 v1325 = (i1)+48;
	*(i1*)(intptr_t)(ws+4336) = v1325;
	i8 v1326 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1326)();

	i8 v1327 = (i8)(intptr_t)(ws+4312);
	i1 v1328 = *(i1*)(intptr_t)v1327;
	i1 v1329 = v1328+(-1);
	i8 v1330 = (i8)(intptr_t)(ws+4312);
	*(i1*)(intptr_t)v1330 = v1329;

	goto c02_0140;

c02_0145:;

	i8 v1331 = (i8)(intptr_t)(ws+4285);
	*(i8*)(intptr_t)(ws+4320) = v1331;
	i8 v1332 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v1332)();

}
	void f99_E_h(void);

// E_h8 workspace at ws+4248 length ws+1
void f100_E_h8(void) {

	i8 v1333 = (i8)(intptr_t)(ws+4248);
	i1 v1334 = *(i1*)(intptr_t)v1333;
	i4 v1335 = v1334;
	*(i4*)(intptr_t)(ws+4280) = v1335;
	i1 v1336 = (i1)+2;
	*(i1*)(intptr_t)(ws+4284) = v1336;
	i8 v1337 = (i8)(intptr_t)(f99_E_h);

	((void(*)(void))(intptr_t)v1337)();

}
	void f99_E_h(void);

// E_h16 workspace at ws+4272 length ws+2
void f101_E_h16(void) {

	i8 v1338 = (i8)(intptr_t)(ws+4272);
	i2 v1339 = *(i2*)(intptr_t)v1338;
	i4 v1340 = v1339;
	*(i4*)(intptr_t)(ws+4280) = v1340;
	i1 v1341 = (i1)+4;
	*(i1*)(intptr_t)(ws+4284) = v1341;
	i8 v1342 = (i8)(intptr_t)(f99_E_h);

	((void(*)(void))(intptr_t)v1342)();

}
	void f83_E_b8(void);
	void f101_E_h16(void);

// E_labelref workspace at ws+4256 length ws+2
void f103_E_labelref(void) {

	i1 v1347 = (i1)+3;
	*(i1*)(intptr_t)(ws+4336) = v1347;
	i8 v1348 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1348)();

	i8 v1349 = (i8)(intptr_t)(ws+4256);
	i2 v1350 = *(i2*)(intptr_t)v1349;
	*(i2*)(intptr_t)(ws+4272) = v1350;
	i8 v1351 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(void))(intptr_t)v1351)();

}
	void f83_E_b8(void);
	void f83_E_b8(void);
	void f84_E_b16(void);

// E_subref workspace at ws+4240 length ws+8
void f104_E_subref(void) {

	i8 v1352 = (i8)(intptr_t)(ws+4240);
	i8 v1353 = *(i8*)(intptr_t)v1352;
	i8 v1354 = (i8)(intptr_t)(ws+40);
	i8 v1355 = *(i8*)(intptr_t)v1354;
	if (v1353==v1355) goto c02_0149; else goto c02_014a;

c02_0149:;

	i1 v1356 = (i1)+4;
	*(i1*)(intptr_t)(ws+4336) = v1356;
	i8 v1357 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1357)();

	goto c02_0146;

c02_014a:;

	i1 v1358 = (i1)+1;
	*(i1*)(intptr_t)(ws+4336) = v1358;
	i8 v1359 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1359)();

	i8 v1360 = (i8)(intptr_t)(ws+4240);
	i8 v1361 = *(i8*)(intptr_t)v1360;
	i8 v1362 = v1361+(+8);
	i2 v1363 = *(i2*)(intptr_t)v1362;
	*(i2*)(intptr_t)(ws+4272) = v1363;
	i8 v1364 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v1364)();

c02_0146:;

}
	void f83_E_b8(void);
	void f84_E_b16(void);
const i1 c02_s00bf[] = { 0x5f,0x73,0 };
	void f92_E(void);
	void f101_E_h16(void);
	void f83_E_b8(void);
	void f84_E_b16(void);
	void f83_E_b8(void);
	void f84_E_b16(void);

// E_wsref workspace at ws+4264 length ws+6
void f105_E_wsref(void) {

	i8 v1365 = (i8)(intptr_t)(ws+4266);
	i1 v1366 = *(i1*)(intptr_t)v1365;
	i1 v1367 = (i1)+255;
	if (v1366==v1367) goto c02_014e; else goto c02_014f;

c02_014e:;

	i1 v1368 = (i1)+1;
	*(i1*)(intptr_t)(ws+4336) = v1368;
	i8 v1369 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1369)();

	i8 v1370 = (i8)(intptr_t)(ws+4264);
	i2 v1371 = *(i2*)(intptr_t)v1370;
	*(i2*)(intptr_t)(ws+4272) = v1371;
	i8 v1372 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v1372)();

	i8 v1373 = (i8)(intptr_t)c02_s00bf;
	*(i8*)(intptr_t)(ws+4320) = v1373;
	i8 v1374 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v1374)();

	i8 v1375 = (i8)(intptr_t)(ws+4268);
	i2 v1376 = *(i2*)(intptr_t)v1375;
	*(i2*)(intptr_t)(ws+4272) = v1376;
	i8 v1377 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(void))(intptr_t)v1377)();

	goto c02_014b;

c02_014f:;

	i1 v1378 = (i1)+2;
	*(i1*)(intptr_t)(ws+4336) = v1378;
	i8 v1379 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1379)();

	i8 v1380 = (i8)(intptr_t)(ws+4264);
	i2 v1381 = *(i2*)(intptr_t)v1380;
	*(i2*)(intptr_t)(ws+4272) = v1381;
	i8 v1382 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v1382)();

	i8 v1383 = (i8)(intptr_t)(ws+4266);
	i1 v1384 = *(i1*)(intptr_t)v1383;
	*(i1*)(intptr_t)(ws+4336) = v1384;
	i8 v1385 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1385)();

	i8 v1386 = (i8)(intptr_t)(ws+4268);
	i2 v1387 = *(i2*)(intptr_t)v1386;
	*(i2*)(intptr_t)(ws+4272) = v1387;
	i8 v1388 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v1388)();

c02_014b:;

}
	void f82_FlushCurrentStream(void);

// EmitterOpenStream workspace at ws+4248 length ws+8
void f106_EmitterOpenStream(void) {

	i8 v1389 = (i8)(intptr_t)(ws+2792);
	i8 v1390 = *(i8*)(intptr_t)v1389;
	i8 v1391 = (i8)+0;
	if (v1390==v1391) goto c02_0153; else goto c02_0154;

c02_0153:;

	i8 v1392 = (i8)(intptr_t)(ws+2776);
	i8 v1393 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1393 = v1392;

	i1 v1394 = (i1)+0;
	i8 v1395 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1395 = v1394;

	goto c02_0150;

c02_0154:;

	i1 v1396 = (i1)+0;
	*(i1*)(intptr_t)(ws+4344) = v1396;
	i8 v1397 = (i8)(intptr_t)(f82_FlushCurrentStream);

	((void(*)(void))(intptr_t)v1397)();

	i8 v1398 = (i8)(intptr_t)(ws+2792);
	i8 v1399 = *(i8*)(intptr_t)v1398;
	i8 v1400 = v1399+(+2);
	i8 v1401 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1401 = v1400;

	i8 v1402 = (i8)(intptr_t)(ws+2800);
	i1 v1403 = *(i1*)(intptr_t)v1402;
	i1 v1404 = v1403+(+1);
	i8 v1405 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1405 = v1404;

c02_0150:;

	i8 v1406 = (i8)(intptr_t)(ws+4248);
	i8 v1407 = *(i8*)(intptr_t)v1406;
	i8 v1408 = v1407+(+8);
	i2 v1409 = *(i2*)(intptr_t)v1408;
	i8 v1410 = (i8)(intptr_t)(ws+2792);
	i8 v1411 = *(i8*)(intptr_t)v1410;
	*(i2*)(intptr_t)v1411 = v1409;

}
	void f82_FlushCurrentStream(void);

// EmitterCloseStream workspace at ws+4248 length ws+0
void f107_EmitterCloseStream(void) {

	i1 v1412 = (i1)+128;
	*(i1*)(intptr_t)(ws+4344) = v1412;
	i8 v1413 = (i8)(intptr_t)(f82_FlushCurrentStream);

	((void(*)(void))(intptr_t)v1413)();

	i8 v1414 = (i8)(intptr_t)(ws+2792);
	i8 v1415 = *(i8*)(intptr_t)v1414;
	i8 v1416 = (i8)(intptr_t)(ws+2776);
	if (v1415==v1416) goto c02_0158; else goto c02_0159;

c02_0158:;

	i8 v1417 = (i8)+0;
	i8 v1418 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1418 = v1417;

	goto c02_0155;

c02_0159:;

	i8 v1419 = (i8)(intptr_t)(ws+2792);
	i8 v1420 = *(i8*)(intptr_t)v1419;
	i8 v1421 = v1420+(-2);
	i8 v1422 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1422 = v1421;

	i8 v1423 = (i8)(intptr_t)(ws+2800);
	i1 v1424 = *(i1*)(intptr_t)v1423;
	i1 v1425 = v1424+(-1);
	i8 v1426 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1426 = v1425;

c02_0155:;

}
	void f54_FCBOpenOut(void);
const i1 c02_s00c0[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f68_SimpleError(void);

// EmitterOpenfile workspace at ws+3984 length ws+9
void f108_EmitterOpenfile(void) {

	i8 v1427 = (i8)(intptr_t)(ws+200);
	*(i8*)(intptr_t)(ws+4000) = v1427;
	i8 v1428 = (i8)(intptr_t)(ws+3984);
	i8 v1429 = *(i8*)(intptr_t)v1428;
	*(i8*)(intptr_t)(ws+4008) = v1429;
	i8 v1430 = (i8)(intptr_t)(f54_FCBOpenOut);

	((void(*)(void))(intptr_t)v1430)();

	i1 v1431 = *(i1*)(intptr_t)(ws+4016);
	i8 v1432 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v1432 = v1431;

	i8 v1433 = (i8)(intptr_t)(ws+3992);
	i1 v1434 = *(i1*)(intptr_t)v1433;
	i1 v1435 = (i1)+0;
	if (v1434==v1435) goto c02_015e; else goto c02_015d;

c02_015d:;

	i8 v1436 = (i8)(intptr_t)c02_s00c0;
	*(i8*)(intptr_t)(ws+4280) = v1436;
	i8 v1437 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v1437)();

c02_015e:;

c02_015a:;

}
	void f80_WriteB8(void);
	void f81_WriteB16(void);
	void f55_FCBClose(void);
const i1 c02_s00c1[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f68_SimpleError(void);

// EmitterClosefile workspace at ws+3984 length ws+1
void f109_EmitterClosefile(void) {

	i1 v1438 = (i1)+69;
	*(i1*)(intptr_t)(ws+4360) = v1438;
	i8 v1439 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1439)();

	i2 v1440 = (i2)+0;
	*(i2*)(intptr_t)(ws+4352) = v1440;
	i8 v1441 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1441)();

	i8 v1442 = (i8)(intptr_t)(ws+200);
	*(i8*)(intptr_t)(ws+3992) = v1442;
	i8 v1443 = (i8)(intptr_t)(f55_FCBClose);

	((void(*)(void))(intptr_t)v1443)();

	i1 v1444 = *(i1*)(intptr_t)(ws+4000);
	i8 v1445 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v1445 = v1444;

	i8 v1446 = (i8)(intptr_t)(ws+3984);
	i1 v1447 = *(i1*)(intptr_t)v1446;
	i1 v1448 = (i1)+0;
	if (v1447==v1448) goto c02_0163; else goto c02_0162;

c02_0162:;

	i8 v1449 = (i8)(intptr_t)c02_s00c1;
	*(i8*)(intptr_t)(ws+4280) = v1449;
	i8 v1450 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v1450)();

c02_0163:;

c02_015f:;

}
	void f29_StrLen(void);
	void f80_WriteB8(void);
	void f81_WriteB16(void);
	void f81_WriteB16(void);
	void f59_FCBPutBlock(void);

// EmitterDeclareSubroutine workspace at ws+4024 length ws+18
void f110_EmitterDeclareSubroutine(void) {

	i8 v1451 = (i8)(intptr_t)(ws+4024);
	i8 v1452 = *(i8*)(intptr_t)v1451;
	i8 v1453 = *(i8*)(intptr_t)v1452;
	*(i8*)(intptr_t)(ws+4064) = v1453;
	i8 v1454 = (i8)(intptr_t)(f29_StrLen);

	((void(*)(void))(intptr_t)v1454)();

	i8 v1455 = *(i8*)(intptr_t)(ws+4072);
	i8 v1456 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v1456 = v1455;

	i8 v1457 = (i8)(intptr_t)(ws+4032);
	i8 v1458 = *(i8*)(intptr_t)v1457;
	i2 v1459 = v1458;
	i8 v1460 = (i8)(intptr_t)(ws+4040);
	*(i2*)(intptr_t)v1460 = v1459;

	i1 v1461 = (i1)+78;
	*(i1*)(intptr_t)(ws+4360) = v1461;
	i8 v1462 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1462)();

	i8 v1463 = (i8)(intptr_t)(ws+4040);
	i2 v1464 = *(i2*)(intptr_t)v1463;
	i2 v1465 = v1464+(+2);
	*(i2*)(intptr_t)(ws+4352) = v1465;
	i8 v1466 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1466)();

	i8 v1467 = (i8)(intptr_t)(ws+4024);
	i8 v1468 = *(i8*)(intptr_t)v1467;
	i8 v1469 = v1468+(+8);
	i2 v1470 = *(i2*)(intptr_t)v1469;
	*(i2*)(intptr_t)(ws+4352) = v1470;
	i8 v1471 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1471)();

	i8 v1472 = (i8)(intptr_t)(ws+200);
	*(i8*)(intptr_t)(ws+4352) = v1472;
	i8 v1473 = (i8)(intptr_t)(ws+4024);
	i8 v1474 = *(i8*)(intptr_t)v1473;
	i8 v1475 = *(i8*)(intptr_t)v1474;
	*(i8*)(intptr_t)(ws+4360) = v1475;
	i8 v1476 = (i8)(intptr_t)(ws+4040);
	i2 v1477 = *(i2*)(intptr_t)v1476;
	i8 v1478 = v1477;
	*(i8*)(intptr_t)(ws+4368) = v1478;
	i8 v1479 = (i8)(intptr_t)(f59_FCBPutBlock);

	((void(*)(void))(intptr_t)v1479)();

}
	void f29_StrLen(void);
	void f80_WriteB8(void);
	void f81_WriteB16(void);
	void f81_WriteB16(void);
	void f59_FCBPutBlock(void);

// EmitterDeclareExternalSubroutine workspace at ws+4032 length ws+26
void f111_EmitterDeclareExternalSubroutine(void) {

	i8 v1480 = (i8)(intptr_t)(ws+4040);
	i8 v1481 = *(i8*)(intptr_t)v1480;
	*(i8*)(intptr_t)(ws+4064) = v1481;
	i8 v1482 = (i8)(intptr_t)(f29_StrLen);

	((void(*)(void))(intptr_t)v1482)();

	i8 v1483 = *(i8*)(intptr_t)(ws+4072);
	i8 v1484 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v1484 = v1483;

	i8 v1485 = (i8)(intptr_t)(ws+4048);
	i8 v1486 = *(i8*)(intptr_t)v1485;
	i2 v1487 = v1486;
	i8 v1488 = (i8)(intptr_t)(ws+4056);
	*(i2*)(intptr_t)v1488 = v1487;

	i1 v1489 = (i1)+88;
	*(i1*)(intptr_t)(ws+4360) = v1489;
	i8 v1490 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1490)();

	i8 v1491 = (i8)(intptr_t)(ws+4056);
	i2 v1492 = *(i2*)(intptr_t)v1491;
	i2 v1493 = v1492+(+2);
	*(i2*)(intptr_t)(ws+4352) = v1493;
	i8 v1494 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1494)();

	i8 v1495 = (i8)(intptr_t)(ws+4032);
	i2 v1496 = *(i2*)(intptr_t)v1495;
	*(i2*)(intptr_t)(ws+4352) = v1496;
	i8 v1497 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1497)();

	i8 v1498 = (i8)(intptr_t)(ws+200);
	*(i8*)(intptr_t)(ws+4352) = v1498;
	i8 v1499 = (i8)(intptr_t)(ws+4040);
	i8 v1500 = *(i8*)(intptr_t)v1499;
	*(i8*)(intptr_t)(ws+4360) = v1500;
	i8 v1501 = (i8)(intptr_t)(ws+4056);
	i2 v1502 = *(i2*)(intptr_t)v1501;
	i8 v1503 = v1502;
	*(i8*)(intptr_t)(ws+4368) = v1503;
	i8 v1504 = (i8)(intptr_t)(f59_FCBPutBlock);

	((void(*)(void))(intptr_t)v1504)();

}
	void f80_WriteB8(void);
	void f81_WriteB16(void);
	void f81_WriteB16(void);
	void f81_WriteB16(void);

// EmitterReferenceSubroutineById workspace at ws+4040 length ws+4
void f112_EmitterReferenceSubroutineById(void) {

	i1 v1505 = (i1)+82;
	*(i1*)(intptr_t)(ws+4360) = v1505;
	i8 v1506 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1506)();

	i2 v1507 = (i2)+4;
	*(i2*)(intptr_t)(ws+4352) = v1507;
	i8 v1508 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1508)();

	i8 v1509 = (i8)(intptr_t)(ws+4040);
	i2 v1510 = *(i2*)(intptr_t)v1509;
	*(i2*)(intptr_t)(ws+4352) = v1510;
	i8 v1511 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1511)();

	i8 v1512 = (i8)(intptr_t)(ws+4042);
	i2 v1513 = *(i2*)(intptr_t)v1512;
	*(i2*)(intptr_t)(ws+4352) = v1513;
	i8 v1514 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1514)();

}
	void f80_WriteB8(void);
	void f81_WriteB16(void);
	void f81_WriteB16(void);
	void f80_WriteB8(void);
	void f81_WriteB16(void);

// EmitterDeclareWorkspace workspace at ws+4024 length ws+6
void f114_EmitterDeclareWorkspace(void) {

	i1 v1524 = (i1)+87;
	*(i1*)(intptr_t)(ws+4360) = v1524;
	i8 v1525 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1525)();

	i2 v1526 = (i2)+5;
	*(i2*)(intptr_t)(ws+4352) = v1526;
	i8 v1527 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1527)();

	i8 v1528 = (i8)(intptr_t)(ws+4024);
	i2 v1529 = *(i2*)(intptr_t)v1528;
	*(i2*)(intptr_t)(ws+4352) = v1529;
	i8 v1530 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1530)();

	i8 v1531 = (i8)(intptr_t)(ws+4026);
	i1 v1532 = *(i1*)(intptr_t)v1531;
	*(i1*)(intptr_t)(ws+4360) = v1532;
	i8 v1533 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1533)();

	i8 v1534 = (i8)(intptr_t)(ws+4028);
	i2 v1535 = *(i2*)(intptr_t)v1534;
	*(i2*)(intptr_t)(ws+4352) = v1535;
	i8 v1536 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1536)();

}
	void f46_FCBGetChar(void);

// I_b8 workspace at ws+4152 length ws+2
void f115_I_b8(void) {

	i8 v1537 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4160) = v1537;
	i8 v1538 = (i8)(intptr_t)(f46_FCBGetChar);

	((void(*)(void))(intptr_t)v1538)();

	i1 v1539 = *(i1*)(intptr_t)(ws+4168);
	i8 v1540 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v1540 = v1539;

	i8 v1541 = (i8)(intptr_t)(ws+4153);
	i1 v1542 = *(i1*)(intptr_t)v1541;
	i8 v1543 = (i8)(intptr_t)(ws+4152);
	*(i1*)(intptr_t)v1543 = v1542;

}
	void f115_I_b8(void);
	void f115_I_b8(void);

// I_b16 workspace at ws+4136 length ws+4
void f116_I_b16(void) {

	i8 v1544 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1544)();

	i1 v1545 = *(i1*)(intptr_t)(ws+4152);
	i8 v1546 = (i8)(intptr_t)(ws+4138);
	*(i1*)(intptr_t)v1546 = v1545;

	i8 v1547 = (i8)(intptr_t)(ws+4138);
	i1 v1548 = *(i1*)(intptr_t)v1547;
	i2 v1549 = v1548;
	i8 v1550 = (i8)(intptr_t)(ws+4136);
	*(i2*)(intptr_t)v1550 = v1549;

	i8 v1551 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1551)();

	i1 v1552 = *(i1*)(intptr_t)(ws+4152);
	i8 v1553 = (i8)(intptr_t)(ws+4139);
	*(i1*)(intptr_t)v1553 = v1552;

	i8 v1554 = (i8)(intptr_t)(ws+4136);
	i2 v1555 = *(i2*)(intptr_t)v1554;
	i8 v1556 = (i8)(intptr_t)(ws+4139);
	i1 v1557 = *(i1*)(intptr_t)v1556;
	i2 v1558 = v1557;
	i1 v1559 = (i1)+8;
	i2 v1560 = ((i2)v1558)<<v1559;
	i2 v1561 = v1555|v1560;
	i8 v1562 = (i8)(intptr_t)(ws+4136);
	*(i2*)(intptr_t)v1562 = v1561;

}
	void f116_I_b16(void);
	void f116_I_b16(void);

// I_b32 workspace at ws+4096 length ws+8
void f117_I_b32(void) {

	i8 v1563 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1563)();

	i2 v1564 = *(i2*)(intptr_t)(ws+4136);
	i8 v1565 = (i8)(intptr_t)(ws+4100);
	*(i2*)(intptr_t)v1565 = v1564;

	i8 v1566 = (i8)(intptr_t)(ws+4100);
	i2 v1567 = *(i2*)(intptr_t)v1566;
	i4 v1568 = v1567;
	i8 v1569 = (i8)(intptr_t)(ws+4096);
	*(i4*)(intptr_t)v1569 = v1568;

	i8 v1570 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1570)();

	i2 v1571 = *(i2*)(intptr_t)(ws+4136);
	i8 v1572 = (i8)(intptr_t)(ws+4102);
	*(i2*)(intptr_t)v1572 = v1571;

	i8 v1573 = (i8)(intptr_t)(ws+4096);
	i4 v1574 = *(i4*)(intptr_t)v1573;
	i8 v1575 = (i8)(intptr_t)(ws+4102);
	i2 v1576 = *(i2*)(intptr_t)v1575;
	i4 v1577 = v1576;
	i1 v1578 = (i1)+16;
	i4 v1579 = ((i4)v1577)<<v1578;
	i4 v1580 = v1574|v1579;
	i8 v1581 = (i8)(intptr_t)(ws+4096);
	*(i4*)(intptr_t)v1581 = v1580;

}
	void f116_I_b16(void);

// I_bsize workspace at ws+4128 length ws+4
void f118_I_bsize(void) {

	i8 v1582 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1582)();

	i2 v1583 = *(i2*)(intptr_t)(ws+4136);
	i8 v1584 = (i8)(intptr_t)(ws+4130);
	*(i2*)(intptr_t)v1584 = v1583;

	i8 v1585 = (i8)(intptr_t)(ws+4130);
	i2 v1586 = *(i2*)(intptr_t)v1585;
	i8 v1587 = (i8)(intptr_t)(ws+4128);
	*(i2*)(intptr_t)v1587 = v1586;

}
	void f115_I_b8(void);
	void f33_Alloc(void);
	void f115_I_b8(void);

// I_countedstring workspace at ws+4112 length ws+33
void f119_I_countedstring(void) {

	i8 v1588 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1588)();

	i1 v1589 = *(i1*)(intptr_t)(ws+4152);
	i8 v1590 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v1590 = v1589;

	i8 v1591 = (i8)(intptr_t)(ws+4120);
	i1 v1592 = *(i1*)(intptr_t)v1591;
	i8 v1593 = (i8)(intptr_t)(ws+4121);
	*(i1*)(intptr_t)v1593 = v1592;

	i8 v1594 = (i8)(intptr_t)(ws+4121);
	i1 v1595 = *(i1*)(intptr_t)v1594;
	i1 v1596 = v1595+(+1);
	i8 v1597 = v1596;
	*(i8*)(intptr_t)(ws+4152) = v1597;
	i8 v1598 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1598)();

	i8 v1599 = *(i8*)(intptr_t)(ws+4160);
	i8 v1600 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v1600 = v1599;

	i8 v1601 = (i8)(intptr_t)(ws+4128);
	i8 v1602 = *(i8*)(intptr_t)v1601;
	i8 v1603 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v1603 = v1602;

	i8 v1604 = (i8)(intptr_t)(ws+4112);
	i8 v1605 = *(i8*)(intptr_t)v1604;
	i8 v1606 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v1606 = v1605;

c02_0164:;

	i8 v1607 = (i8)(intptr_t)(ws+4121);
	i1 v1608 = *(i1*)(intptr_t)v1607;
	i1 v1609 = (i1)+0;
	if (v1608==v1609) goto c02_0169; else goto c02_0168;

c02_0168:;

	i8 v1610 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1610)();

	i1 v1611 = *(i1*)(intptr_t)(ws+4152);
	i8 v1612 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v1612 = v1611;

	i8 v1613 = (i8)(intptr_t)(ws+4144);
	i1 v1614 = *(i1*)(intptr_t)v1613;
	i8 v1615 = (i8)(intptr_t)(ws+4136);
	i8 v1616 = *(i8*)(intptr_t)v1615;
	*(i1*)(intptr_t)v1616 = v1614;

	i8 v1617 = (i8)(intptr_t)(ws+4136);
	i8 v1618 = *(i8*)(intptr_t)v1617;
	i8 v1619 = v1618+(+1);
	i8 v1620 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v1620 = v1619;

	i8 v1621 = (i8)(intptr_t)(ws+4121);
	i1 v1622 = *(i1*)(intptr_t)v1621;
	i1 v1623 = v1622+(-1);
	i8 v1624 = (i8)(intptr_t)(ws+4121);
	*(i1*)(intptr_t)v1624 = v1623;

	goto c02_0164;

c02_0169:;

	i1 v1625 = (i1)+0;
	i8 v1626 = (i8)(intptr_t)(ws+4136);
	i8 v1627 = *(i8*)(intptr_t)v1626;
	*(i1*)(intptr_t)v1627 = v1625;

}
	void f52_FCBOpenIn(void);
	void f69_CannotOpen(void);

// InputterOpenfile workspace at ws+3984 length ws+9
void f120_InputterOpenfile(void) {

	i8 v1628 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4000) = v1628;
	i8 v1629 = (i8)(intptr_t)(ws+3984);
	i8 v1630 = *(i8*)(intptr_t)v1629;
	*(i8*)(intptr_t)(ws+4008) = v1630;
	i8 v1631 = (i8)(intptr_t)(f52_FCBOpenIn);

	((void(*)(void))(intptr_t)v1631)();

	i1 v1632 = *(i1*)(intptr_t)(ws+4016);
	i8 v1633 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v1633 = v1632;

	i8 v1634 = (i8)(intptr_t)(ws+3992);
	i1 v1635 = *(i1*)(intptr_t)v1634;
	i1 v1636 = (i1)+0;
	if (v1635==v1636) goto c02_016e; else goto c02_016d;

c02_016d:;

	i8 v1637 = (i8)(intptr_t)(ws+3984);
	i8 v1638 = *(i8*)(intptr_t)v1637;
	*(i8*)(intptr_t)(ws+4000) = v1638;
	i8 v1639 = (i8)(intptr_t)(f69_CannotOpen);

	((void(*)(void))(intptr_t)v1639)();

c02_016e:;

c02_016a:;

}
	void f55_FCBClose(void);

// InputterClosefile workspace at ws+3984 length ws+2
void f121_InputterClosefile(void) {

	i8 v1640 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+3992) = v1640;
	i8 v1641 = (i8)(intptr_t)(f55_FCBClose);

	((void(*)(void))(intptr_t)v1641)();

	i1 v1642 = *(i1*)(intptr_t)(ws+4000);
	i8 v1643 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v1643 = v1642;

	i8 v1644 = (i8)(intptr_t)(ws+3984);
	i1 v1645 = *(i1*)(intptr_t)v1644;
	i8 v1646 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v1646 = v1645;

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);

// ReadMid0 workspace at ws+4088 length ws+24
void f122_ReadMid0(void) {

	i8 v1647 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1647)();

	i2 v1648 = *(i2*)(intptr_t)(ws+4136);
	i8 v1649 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1649 = v1648;

	i8 v1650 = (i8)(intptr_t)(ws+4088);
	i2 v1651 = *(i2*)(intptr_t)v1650;
	*(i2*)(intptr_t)(ws+4256) = v1651;
	i8 v1652 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1652)();

	i8 v1653 = *(i8*)(intptr_t)(ws+4264);
	i8 v1654 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1654 = v1653;

	i8 v1655 = (i8)(intptr_t)(ws+4096);
	i8 v1656 = *(i8*)(intptr_t)v1655;
	i8 v1657 = (i8)(intptr_t)(ws+4080);
	i8 v1658 = *(i8*)(intptr_t)v1657;
	*(i8*)(intptr_t)v1658 = v1656;

	i8 v1659 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1659)();

	i1 v1660 = *(i1*)(intptr_t)(ws+4152);
	i8 v1661 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v1661 = v1660;

	i8 v1662 = (i8)(intptr_t)(ws+4104);
	i1 v1663 = *(i1*)(intptr_t)v1662;
	i8 v1664 = (i8)(intptr_t)(ws+4080);
	i8 v1665 = *(i8*)(intptr_t)v1664;
	i8 v1666 = v1665+(+10);
	*(i1*)(intptr_t)v1666 = v1663;

	i8 v1667 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v1667)();

	i2 v1668 = *(i2*)(intptr_t)(ws+4128);
	i8 v1669 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v1669 = v1668;

	i8 v1670 = (i8)(intptr_t)(ws+4106);
	i2 v1671 = *(i2*)(intptr_t)v1670;
	i8 v1672 = (i8)(intptr_t)(ws+4080);
	i8 v1673 = *(i8*)(intptr_t)v1672;
	i8 v1674 = v1673+(+12);
	*(i2*)(intptr_t)v1674 = v1671;

	i8 v1675 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1675)();

	i1 v1676 = *(i1*)(intptr_t)(ws+4152);
	i8 v1677 = (i8)(intptr_t)(ws+4108);
	*(i1*)(intptr_t)v1677 = v1676;

	i8 v1678 = (i8)(intptr_t)(ws+4108);
	i1 v1679 = *(i1*)(intptr_t)v1678;
	i8 v1680 = (i8)(intptr_t)(ws+4080);
	i8 v1681 = *(i8*)(intptr_t)v1680;
	i8 v1682 = v1681+(+14);
	*(i1*)(intptr_t)v1682 = v1679;

	i8 v1683 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v1683)();

	i2 v1684 = *(i2*)(intptr_t)(ws+4128);
	i8 v1685 = (i8)(intptr_t)(ws+4110);
	*(i2*)(intptr_t)v1685 = v1684;

	i8 v1686 = (i8)(intptr_t)(ws+4110);
	i2 v1687 = *(i2*)(intptr_t)v1686;
	i8 v1688 = (i8)(intptr_t)(ws+4080);
	i8 v1689 = *(i8*)(intptr_t)v1688;
	i8 v1690 = v1689+(+16);
	*(i2*)(intptr_t)v1690 = v1687;

}
	void f119_I_countedstring(void);

// ReadMid1 workspace at ws+4088 length ws+8
void f123_ReadMid1(void) {

	i8 v1691 = (i8)(intptr_t)(f119_I_countedstring);

	((void(*)(void))(intptr_t)v1691)();

	i8 v1692 = *(i8*)(intptr_t)(ws+4112);
	i8 v1693 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v1693 = v1692;

	i8 v1694 = (i8)(intptr_t)(ws+4088);
	i8 v1695 = *(i8*)(intptr_t)v1694;
	i8 v1696 = (i8)(intptr_t)(ws+4080);
	i8 v1697 = *(i8*)(intptr_t)v1696;
	*(i8*)(intptr_t)v1697 = v1695;

}
	void f116_I_b16(void);
	void f116_I_b16(void);
	void f116_I_b16(void);
	void f115_I_b8(void);

// ReadMid2 workspace at ws+4088 length ws+7
void f124_ReadMid2(void) {

	i8 v1698 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1698)();

	i2 v1699 = *(i2*)(intptr_t)(ws+4136);
	i8 v1700 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1700 = v1699;

	i8 v1701 = (i8)(intptr_t)(ws+4088);
	i2 v1702 = *(i2*)(intptr_t)v1701;
	i8 v1703 = (i8)(intptr_t)(ws+4080);
	i8 v1704 = *(i8*)(intptr_t)v1703;
	*(i2*)(intptr_t)v1704 = v1702;

	i8 v1705 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1705)();

	i2 v1706 = *(i2*)(intptr_t)(ws+4136);
	i8 v1707 = (i8)(intptr_t)(ws+4090);
	*(i2*)(intptr_t)v1707 = v1706;

	i8 v1708 = (i8)(intptr_t)(ws+4090);
	i2 v1709 = *(i2*)(intptr_t)v1708;
	i8 v1710 = (i8)(intptr_t)(ws+4080);
	i8 v1711 = *(i8*)(intptr_t)v1710;
	i8 v1712 = v1711+(+2);
	*(i2*)(intptr_t)v1712 = v1709;

	i8 v1713 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1713)();

	i2 v1714 = *(i2*)(intptr_t)(ws+4136);
	i8 v1715 = (i8)(intptr_t)(ws+4092);
	*(i2*)(intptr_t)v1715 = v1714;

	i8 v1716 = (i8)(intptr_t)(ws+4092);
	i2 v1717 = *(i2*)(intptr_t)v1716;
	i8 v1718 = (i8)(intptr_t)(ws+4080);
	i8 v1719 = *(i8*)(intptr_t)v1718;
	i8 v1720 = v1719+(+4);
	*(i2*)(intptr_t)v1720 = v1717;

	i8 v1721 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1721)();

	i1 v1722 = *(i1*)(intptr_t)(ws+4152);
	i8 v1723 = (i8)(intptr_t)(ws+4094);
	*(i1*)(intptr_t)v1723 = v1722;

	i8 v1724 = (i8)(intptr_t)(ws+4094);
	i1 v1725 = *(i1*)(intptr_t)v1724;
	i8 v1726 = (i8)(intptr_t)(ws+4080);
	i8 v1727 = *(i8*)(intptr_t)v1726;
	i8 v1728 = v1727+(+6);
	*(i1*)(intptr_t)v1728 = v1725;

}
	void f116_I_b16(void);
	void f65_FindSubr(void);

// ReadMid3 workspace at ws+4088 length ws+16
void f125_ReadMid3(void) {

	i8 v1729 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1729)();

	i2 v1730 = *(i2*)(intptr_t)(ws+4136);
	i8 v1731 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1731 = v1730;

	i8 v1732 = (i8)(intptr_t)(ws+4088);
	i2 v1733 = *(i2*)(intptr_t)v1732;
	*(i2*)(intptr_t)(ws+4256) = v1733;
	i8 v1734 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1734)();

	i8 v1735 = *(i8*)(intptr_t)(ws+4264);
	i8 v1736 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1736 = v1735;

	i8 v1737 = (i8)(intptr_t)(ws+4096);
	i8 v1738 = *(i8*)(intptr_t)v1737;
	i8 v1739 = (i8)(intptr_t)(ws+4080);
	i8 v1740 = *(i8*)(intptr_t)v1739;
	*(i8*)(intptr_t)v1740 = v1738;

}
	void f117_I_b32(void);

// ReadMid4 workspace at ws+4088 length ws+4
void f126_ReadMid4(void) {

	i8 v1741 = (i8)(intptr_t)(f117_I_b32);

	((void(*)(void))(intptr_t)v1741)();

	i4 v1742 = *(i4*)(intptr_t)(ws+4096);
	i8 v1743 = (i8)(intptr_t)(ws+4088);
	*(i4*)(intptr_t)v1743 = v1742;

	i8 v1744 = (i8)(intptr_t)(ws+4088);
	i4 v1745 = *(i4*)(intptr_t)v1744;
	i8 v1746 = (i8)(intptr_t)(ws+4080);
	i8 v1747 = *(i8*)(intptr_t)v1746;
	*(i4*)(intptr_t)v1747 = v1745;

}

// ReadMid5 workspace at ws+4088 length ws+0
void f127_ReadMid5(void) {

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);
	void f115_I_b8(void);

// ReadMid6 workspace at ws+4088 length ws+21
void f128_ReadMid6(void) {

	i8 v1748 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1748)();

	i2 v1749 = *(i2*)(intptr_t)(ws+4136);
	i8 v1750 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1750 = v1749;

	i8 v1751 = (i8)(intptr_t)(ws+4088);
	i2 v1752 = *(i2*)(intptr_t)v1751;
	*(i2*)(intptr_t)(ws+4256) = v1752;
	i8 v1753 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1753)();

	i8 v1754 = *(i8*)(intptr_t)(ws+4264);
	i8 v1755 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1755 = v1754;

	i8 v1756 = (i8)(intptr_t)(ws+4096);
	i8 v1757 = *(i8*)(intptr_t)v1756;
	i8 v1758 = (i8)(intptr_t)(ws+4080);
	i8 v1759 = *(i8*)(intptr_t)v1758;
	*(i8*)(intptr_t)v1759 = v1757;

	i8 v1760 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1760)();

	i1 v1761 = *(i1*)(intptr_t)(ws+4152);
	i8 v1762 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v1762 = v1761;

	i8 v1763 = (i8)(intptr_t)(ws+4104);
	i1 v1764 = *(i1*)(intptr_t)v1763;
	i8 v1765 = (i8)(intptr_t)(ws+4080);
	i8 v1766 = *(i8*)(intptr_t)v1765;
	i8 v1767 = v1766+(+10);
	*(i1*)(intptr_t)v1767 = v1764;

	i8 v1768 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v1768)();

	i2 v1769 = *(i2*)(intptr_t)(ws+4128);
	i8 v1770 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v1770 = v1769;

	i8 v1771 = (i8)(intptr_t)(ws+4106);
	i2 v1772 = *(i2*)(intptr_t)v1771;
	i8 v1773 = (i8)(intptr_t)(ws+4080);
	i8 v1774 = *(i8*)(intptr_t)v1773;
	i8 v1775 = v1774+(+12);
	*(i2*)(intptr_t)v1775 = v1772;

	i8 v1776 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1776)();

	i1 v1777 = *(i1*)(intptr_t)(ws+4152);
	i8 v1778 = (i8)(intptr_t)(ws+4108);
	*(i1*)(intptr_t)v1778 = v1777;

	i8 v1779 = (i8)(intptr_t)(ws+4108);
	i1 v1780 = *(i1*)(intptr_t)v1779;
	i8 v1781 = (i8)(intptr_t)(ws+4080);
	i8 v1782 = *(i8*)(intptr_t)v1781;
	i8 v1783 = v1782+(+14);
	*(i1*)(intptr_t)v1783 = v1780;

}
	void f116_I_b16(void);

// ReadMid7 workspace at ws+4088 length ws+2
void f129_ReadMid7(void) {

	i8 v1784 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1784)();

	i2 v1785 = *(i2*)(intptr_t)(ws+4136);
	i8 v1786 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1786 = v1785;

	i8 v1787 = (i8)(intptr_t)(ws+4088);
	i2 v1788 = *(i2*)(intptr_t)v1787;
	i8 v1789 = (i8)(intptr_t)(ws+4080);
	i8 v1790 = *(i8*)(intptr_t)v1789;
	*(i2*)(intptr_t)v1790 = v1788;

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);
	void f115_I_b8(void);
	void f115_I_b8(void);

// ReadMid8 workspace at ws+4088 length ws+38
void f130_ReadMid8(void) {

	i8 v1791 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1791)();

	i2 v1792 = *(i2*)(intptr_t)(ws+4136);
	i8 v1793 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1793 = v1792;

	i8 v1794 = (i8)(intptr_t)(ws+4088);
	i2 v1795 = *(i2*)(intptr_t)v1794;
	*(i2*)(intptr_t)(ws+4256) = v1795;
	i8 v1796 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1796)();

	i8 v1797 = *(i8*)(intptr_t)(ws+4264);
	i8 v1798 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1798 = v1797;

	i8 v1799 = (i8)(intptr_t)(ws+4096);
	i8 v1800 = *(i8*)(intptr_t)v1799;
	i8 v1801 = (i8)(intptr_t)(ws+4080);
	i8 v1802 = *(i8*)(intptr_t)v1801;
	*(i8*)(intptr_t)v1802 = v1800;

	i8 v1803 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1803)();

	i2 v1804 = *(i2*)(intptr_t)(ws+4136);
	i8 v1805 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v1805 = v1804;

	i8 v1806 = (i8)(intptr_t)(ws+4104);
	i2 v1807 = *(i2*)(intptr_t)v1806;
	*(i2*)(intptr_t)(ws+4256) = v1807;
	i8 v1808 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1808)();

	i8 v1809 = *(i8*)(intptr_t)(ws+4264);
	i8 v1810 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v1810 = v1809;

	i8 v1811 = (i8)(intptr_t)(ws+4112);
	i8 v1812 = *(i8*)(intptr_t)v1811;
	i8 v1813 = (i8)(intptr_t)(ws+4080);
	i8 v1814 = *(i8*)(intptr_t)v1813;
	i8 v1815 = v1814+(+8);
	*(i8*)(intptr_t)v1815 = v1812;

	i8 v1816 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1816)();

	i1 v1817 = *(i1*)(intptr_t)(ws+4152);
	i8 v1818 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v1818 = v1817;

	i8 v1819 = (i8)(intptr_t)(ws+4120);
	i1 v1820 = *(i1*)(intptr_t)v1819;
	i8 v1821 = (i8)(intptr_t)(ws+4080);
	i8 v1822 = *(i8*)(intptr_t)v1821;
	i8 v1823 = v1822+(+18);
	*(i1*)(intptr_t)v1823 = v1820;

	i8 v1824 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v1824)();

	i2 v1825 = *(i2*)(intptr_t)(ws+4128);
	i8 v1826 = (i8)(intptr_t)(ws+4122);
	*(i2*)(intptr_t)v1826 = v1825;

	i8 v1827 = (i8)(intptr_t)(ws+4122);
	i2 v1828 = *(i2*)(intptr_t)v1827;
	i8 v1829 = (i8)(intptr_t)(ws+4080);
	i8 v1830 = *(i8*)(intptr_t)v1829;
	i8 v1831 = v1830+(+20);
	*(i2*)(intptr_t)v1831 = v1828;

	i8 v1832 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1832)();

	i1 v1833 = *(i1*)(intptr_t)(ws+4152);
	i8 v1834 = (i8)(intptr_t)(ws+4124);
	*(i1*)(intptr_t)v1834 = v1833;

	i8 v1835 = (i8)(intptr_t)(ws+4124);
	i1 v1836 = *(i1*)(intptr_t)v1835;
	i8 v1837 = (i8)(intptr_t)(ws+4080);
	i8 v1838 = *(i8*)(intptr_t)v1837;
	i8 v1839 = v1838+(+22);
	*(i1*)(intptr_t)v1839 = v1836;

	i8 v1840 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1840)();

	i1 v1841 = *(i1*)(intptr_t)(ws+4152);
	i8 v1842 = (i8)(intptr_t)(ws+4125);
	*(i1*)(intptr_t)v1842 = v1841;

	i8 v1843 = (i8)(intptr_t)(ws+4125);
	i1 v1844 = *(i1*)(intptr_t)v1843;
	i8 v1845 = (i8)(intptr_t)(ws+4080);
	i8 v1846 = *(i8*)(intptr_t)v1845;
	i8 v1847 = v1846+(+23);
	*(i1*)(intptr_t)v1847 = v1844;

}
	void f115_I_b8(void);

// ReadMid9 workspace at ws+4088 length ws+1
void f131_ReadMid9(void) {

	i8 v1848 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1848)();

	i1 v1849 = *(i1*)(intptr_t)(ws+4152);
	i8 v1850 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v1850 = v1849;

	i8 v1851 = (i8)(intptr_t)(ws+4088);
	i1 v1852 = *(i1*)(intptr_t)v1851;
	i8 v1853 = (i8)(intptr_t)(ws+4080);
	i8 v1854 = *(i8*)(intptr_t)v1853;
	*(i1*)(intptr_t)v1854 = v1852;

}
	void f117_I_b32(void);
	void f116_I_b16(void);

// ReadMid10 workspace at ws+4088 length ws+6
void f132_ReadMid10(void) {

	i8 v1855 = (i8)(intptr_t)(f117_I_b32);

	((void(*)(void))(intptr_t)v1855)();

	i4 v1856 = *(i4*)(intptr_t)(ws+4096);
	i8 v1857 = (i8)(intptr_t)(ws+4088);
	*(i4*)(intptr_t)v1857 = v1856;

	i8 v1858 = (i8)(intptr_t)(ws+4088);
	i4 v1859 = *(i4*)(intptr_t)v1858;
	i8 v1860 = (i8)(intptr_t)(ws+4080);
	i8 v1861 = *(i8*)(intptr_t)v1860;
	*(i4*)(intptr_t)v1861 = v1859;

	i8 v1862 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1862)();

	i2 v1863 = *(i2*)(intptr_t)(ws+4136);
	i8 v1864 = (i8)(intptr_t)(ws+4092);
	*(i2*)(intptr_t)v1864 = v1863;

	i8 v1865 = (i8)(intptr_t)(ws+4092);
	i2 v1866 = *(i2*)(intptr_t)v1865;
	i8 v1867 = (i8)(intptr_t)(ws+4080);
	i8 v1868 = *(i8*)(intptr_t)v1867;
	i8 v1869 = v1868+(+4);
	*(i2*)(intptr_t)v1869 = v1866;

}
	void f122_ReadMid0(void);
	void f123_ReadMid1(void);
	void f124_ReadMid2(void);
	void f125_ReadMid3(void);
	void f126_ReadMid4(void);
	void f127_ReadMid5(void);
	void f128_ReadMid6(void);
	void f129_ReadMid7(void);
	void f130_ReadMid8(void);
	void f131_ReadMid9(void);
	void f132_ReadMid10(void);
static data f3___main_s016f[] = {

	{ .ptr = (void*)f122_ReadMid0 },

	{ .ptr = (void*)f123_ReadMid1 },

	{ .ptr = (void*)f124_ReadMid2 },

	{ .ptr = (void*)f125_ReadMid3 },

	{ .ptr = (void*)f126_ReadMid4 },

	{ .ptr = (void*)f127_ReadMid5 },

	{ .ptr = (void*)f128_ReadMid6 },

	{ .ptr = (void*)f129_ReadMid7 },

	{ .ptr = (void*)f130_ReadMid8 },

	{ .ptr = (void*)f131_ReadMid9 },

	{ .ptr = (void*)f132_ReadMid10 },

};
static data f3___main_s0170[] = {








	{ .i1 = { 0x05,0x05,0x05,0x03,0x03,0x06,0x04,0x04}},








	{ .i1 = { 0x04,0x04,0x04,0x01,0x00,0x03,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x01,0x06,0x03,0x04,0x05,0x05}},








	{ .i1 = { 0x05,0x07,0x07,0x05,0x03,0x08,0x08,0x08}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x04}},








	{ .i1 = { 0x01,0x00,0x03,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},





	{ .i1 = { 0x05,0x05,0x05,0x05}},
};
static data f3___main_s0171[] = {








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x02,0x00,0x00,0x00,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},





	{ .i1 = { 0x02,0x02,0x02,0x02}},
};
	void f23_MemZero(void);
	void f23_MemZero(void);

// AllocSubrId workspace at ws+4096 length ws+2
void f146_AllocSubrId(void) {

	i8 v2318 = (i8)(intptr_t)(ws+50);
	i2 v2319 = *(i2*)(intptr_t)v2318;
	i8 v2320 = (i8)(intptr_t)(ws+4096);
	*(i2*)(intptr_t)v2320 = v2319;

	i8 v2321 = (i8)(intptr_t)(ws+50);
	i2 v2322 = *(i2*)(intptr_t)v2321;
	i2 v2323 = v2322+(+1);
	i8 v2324 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v2324 = v2323;

}
	void f7_MemSet(void);
	void f70_InternalAlloc(void);

// AllocNewInstruction workspace at ws+4112 length ws+16
void f147_AllocNewInstruction(void) {

	i8 v2327 = (i8)(intptr_t)(ws+3696);
	i8 v2328 = *(i8*)(intptr_t)v2327;
	i8 v2329 = (i8)+0;
	if (v2328==v2329) goto c02_0215; else goto c02_0214;

c02_0214:;

	i8 v2330 = (i8)(intptr_t)(ws+3696);
	i8 v2331 = *(i8*)(intptr_t)v2330;
	i8 v2332 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v2332 = v2331;

	i8 v2333 = (i8)(intptr_t)(ws+3696);
	i8 v2334 = *(i8*)(intptr_t)v2333;
	i8 v2335 = *(i8*)(intptr_t)v2334;
	i8 v2336 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2336 = v2335;

	i8 v2337 = (i8)(intptr_t)(ws+4112);
	i8 v2338 = *(i8*)(intptr_t)v2337;
	*(i8*)(intptr_t)(ws+4240) = v2338;
	i1 v2339 = (i1)+0;
	*(i1*)(intptr_t)(ws+4248) = v2339;
	i8 v2340 = (i8)+87;
	*(i8*)(intptr_t)(ws+4256) = v2340;
	i8 v2341 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(void))(intptr_t)v2341)();

	goto c02_0211;

c02_0215:;

	i8 v2342 = (i8)+87;
	*(i8*)(intptr_t)(ws+4240) = v2342;
	i8 v2343 = (i8)(intptr_t)(f70_InternalAlloc);

	((void(*)(void))(intptr_t)v2343)();

	i8 v2344 = *(i8*)(intptr_t)(ws+4248);
	i8 v2345 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v2345 = v2344;

	i8 v2346 = (i8)(intptr_t)(ws+4120);
	i8 v2347 = *(i8*)(intptr_t)v2346;
	i8 v2348 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v2348 = v2347;

c02_0211:;

}

// FreeInstruction workspace at ws+4120 length ws+8
void f148_FreeInstruction(void) {

	i8 v2349 = (i8)(intptr_t)(ws+3696);
	i8 v2350 = *(i8*)(intptr_t)v2349;
	i8 v2351 = (i8)(intptr_t)(ws+4120);
	i8 v2352 = *(i8*)(intptr_t)v2351;
	*(i8*)(intptr_t)v2352 = v2350;

	i8 v2353 = (i8)(intptr_t)(ws+4120);
	i8 v2354 = *(i8*)(intptr_t)v2353;
	i8 v2355 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2355 = v2354;

}
	void f34_Free(void);

// PurgeAllFreeInstructions workspace at ws+4272 length ws+8
void f72_PurgeAllFreeInstructions(void) {

c02_0216:;

	i8 v2356 = (i8)(intptr_t)(ws+3696);
	i8 v2357 = *(i8*)(intptr_t)v2356;
	i8 v2358 = (i8)+0;
	if (v2357==v2358) goto c02_021b; else goto c02_021a;

c02_021a:;

	i8 v2359 = (i8)(intptr_t)(ws+3696);
	i8 v2360 = *(i8*)(intptr_t)v2359;
	i8 v2361 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v2361 = v2360;

	i8 v2362 = (i8)(intptr_t)(ws+3696);
	i8 v2363 = *(i8*)(intptr_t)v2362;
	i8 v2364 = *(i8*)(intptr_t)v2363;
	i8 v2365 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2365 = v2364;

	i8 v2366 = (i8)(intptr_t)(ws+4272);
	i8 v2367 = *(i8*)(intptr_t)v2366;
	*(i8*)(intptr_t)(ws+4280) = v2367;
	i8 v2368 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v2368)();

	goto c02_0216;

c02_021b:;

}

// FindConflictingRegisters workspace at ws+4152 length ws+16
void f149_FindConflictingRegisters(void) {

	i1 v2369 = (i1)+0;
	i8 v2370 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2370 = v2369;

	i8 v2371 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v2372 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2372 = v2371;

c02_021c:;

	i8 v2373 = (i8)(intptr_t)(ws+4160);
	i8 v2374 = *(i8*)(intptr_t)v2373;
	i8 v2375 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v2374==v2375) goto c02_0221; else goto c02_0220;

c02_0220:;

	i8 v2376 = (i8)(intptr_t)(ws+4160);
	i8 v2377 = *(i8*)(intptr_t)v2376;
	i8 v2378 = v2377+(+8);
	i1 v2379 = *(i1*)(intptr_t)v2378;
	i8 v2380 = (i8)(intptr_t)(ws+4152);
	i1 v2381 = *(i1*)(intptr_t)v2380;
	i1 v2382 = v2379&v2381;
	i1 v2383 = (i1)+0;
	if (v2382==v2383) goto c02_0226; else goto c02_0225;

c02_0225:;

	i8 v2384 = (i8)(intptr_t)(ws+4153);
	i1 v2385 = *(i1*)(intptr_t)v2384;
	i8 v2386 = (i8)(intptr_t)(ws+4160);
	i8 v2387 = *(i8*)(intptr_t)v2386;
	i8 v2388 = v2387+(+9);
	i1 v2389 = *(i1*)(intptr_t)v2388;
	i1 v2390 = v2385|v2389;
	i8 v2391 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2391 = v2390;

c02_0226:;

c02_0222:;

	i8 v2392 = (i8)(intptr_t)(ws+4160);
	i8 v2393 = *(i8*)(intptr_t)v2392;
	i8 v2394 = v2393+(+16);
	i8 v2395 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2395 = v2394;

	goto c02_021c;

c02_0221:;

}

// FindCompatibleRegisters workspace at ws+4152 length ws+16
void f150_FindCompatibleRegisters(void) {

	i1 v2396 = (i1)-1;
	i8 v2397 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2397 = v2396;

	i8 v2398 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v2399 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2399 = v2398;

c02_0227:;

	i8 v2400 = (i8)(intptr_t)(ws+4160);
	i8 v2401 = *(i8*)(intptr_t)v2400;
	i8 v2402 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v2401==v2402) goto c02_022c; else goto c02_022b;

c02_022b:;

	i8 v2403 = (i8)(intptr_t)(ws+4160);
	i8 v2404 = *(i8*)(intptr_t)v2403;
	i8 v2405 = v2404+(+8);
	i1 v2406 = *(i1*)(intptr_t)v2405;
	i8 v2407 = (i8)(intptr_t)(ws+4152);
	i1 v2408 = *(i1*)(intptr_t)v2407;
	i1 v2409 = v2406&v2408;
	i1 v2410 = (i1)+0;
	if (v2409==v2410) goto c02_0231; else goto c02_0230;

c02_0230:;

	i8 v2411 = (i8)(intptr_t)(ws+4153);
	i1 v2412 = *(i1*)(intptr_t)v2411;
	i8 v2413 = (i8)(intptr_t)(ws+4160);
	i8 v2414 = *(i8*)(intptr_t)v2413;
	i8 v2415 = v2414+(+10);
	i1 v2416 = *(i1*)(intptr_t)v2415;
	i1 v2417 = v2412&v2416;
	i8 v2418 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2418 = v2417;

c02_0231:;

c02_022d:;

	i8 v2419 = (i8)(intptr_t)(ws+4160);
	i8 v2420 = *(i8*)(intptr_t)v2419;
	i8 v2421 = v2420+(+16);
	i8 v2422 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2422 = v2421;

	goto c02_0227;

c02_022c:;

}

// FindFirst workspace at ws+4216 length ws+2
void f151_FindFirst(void) {

	i1 v2423 = (i1)+1;
	i8 v2424 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v2424 = v2423;

c02_0232:;

	i8 v2425 = (i8)(intptr_t)(ws+4217);
	i1 v2426 = *(i1*)(intptr_t)v2425;
	i1 v2427 = (i1)+0;
	if (v2426==v2427) goto c02_0237; else goto c02_0236;

c02_0236:;

	i8 v2428 = (i8)(intptr_t)(ws+4216);
	i1 v2429 = *(i1*)(intptr_t)v2428;
	i8 v2430 = (i8)(intptr_t)(ws+4217);
	i1 v2431 = *(i1*)(intptr_t)v2430;
	i1 v2432 = v2429&v2431;
	i1 v2433 = (i1)+0;
	if (v2432==v2433) goto c02_023c; else goto c02_023b;

c02_023b:;

	return;

c02_023c:;

c02_0238:;

	i8 v2434 = (i8)(intptr_t)(ws+4217);
	i1 v2435 = *(i1*)(intptr_t)v2434;
	i1 v2436 = (i1)+1;
	i1 v2437 = ((i1)v2435)<<v2436;
	i8 v2438 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v2438 = v2437;

	goto c02_0232;

c02_0237:;

	i1 v2439 = (i1)+0;
	i8 v2440 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v2440 = v2439;

}
const i1 c02_s00c2[] = { 0x28,0x76,0x6f,0x69,0x64,0x29,0 };
	void f92_E(void);

// EmitFunctionSignature workspace at ws+4256 length ws+8
void f155_EmitFunctionSignature(void) {

	i8 v2493 = (i8)(intptr_t)c02_s00c2;
	*(i8*)(intptr_t)(ws+4320) = v2493;
	i8 v2494 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2494)();

}
	void f106_EmitterOpenStream(void);
const i1 c02_s00c3[] = { 0x09,0x76,0x6f,0x69,0x64,0x20,0 };
	void f92_E(void);
	void f104_E_subref(void);
	void f155_EmitFunctionSignature(void);
const i1 c02_s00c4[] = { 0x3b,0x0a,0 };
	void f92_E(void);
	void f107_EmitterCloseStream(void);
	void f104_E_subref(void);

// E_subref_sig workspace at ws+4232 length ws+8
void f156_E_subref_sig(void) {

	i8 v2495 = (i8)(intptr_t)(ws+40);
	i8 v2496 = *(i8*)(intptr_t)v2495;
	*(i8*)(intptr_t)(ws+4248) = v2496;
	i8 v2497 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(void))(intptr_t)v2497)();

	i8 v2498 = (i8)(intptr_t)c02_s00c3;
	*(i8*)(intptr_t)(ws+4320) = v2498;
	i8 v2499 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2499)();

	i8 v2500 = (i8)(intptr_t)(ws+4232);
	i8 v2501 = *(i8*)(intptr_t)v2500;
	*(i8*)(intptr_t)(ws+4240) = v2501;
	i8 v2502 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(void))(intptr_t)v2502)();

	i8 v2503 = (i8)(intptr_t)(ws+4232);
	i8 v2504 = *(i8*)(intptr_t)v2503;
	*(i8*)(intptr_t)(ws+4256) = v2504;
	i8 v2505 = (i8)(intptr_t)(f155_EmitFunctionSignature);

	((void(*)(void))(intptr_t)v2505)();

	i8 v2506 = (i8)(intptr_t)c02_s00c4;
	*(i8*)(intptr_t)(ws+4320) = v2506;
	i8 v2507 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2507)();

	i8 v2508 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v2508)();

	i8 v2509 = (i8)(intptr_t)(ws+4232);
	i8 v2510 = *(i8*)(intptr_t)v2509;
	*(i8*)(intptr_t)(ws+4240) = v2510;
	i8 v2511 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(void))(intptr_t)v2511)();

}
const i1 c02_s00c5[] = { 0x28,0x69,0x31,0x2a,0x29,0 };
	void f92_E(void);
	void f105_E_wsref(void);
	void f97_E_i16(void);
	void f105_E_wsref(void);

// E_symref workspace at ws+4248 length ws+10
void f157_E_symref(void) {

	i8 v2512 = (i8)(intptr_t)(ws+4248);
	i8 v2513 = *(i8*)(intptr_t)v2512;
	i8 v2514 = v2513+(+10);
	i1 v2515 = *(i1*)(intptr_t)v2514;
	i1 v2516 = (i1)+255;
	if (v2515==v2516) goto c02_0251; else goto c02_0252;

c02_0251:;

	i8 v2517 = (i8)(intptr_t)c02_s00c5;
	*(i8*)(intptr_t)(ws+4320) = v2517;
	i8 v2518 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2518)();

	i8 v2519 = (i8)(intptr_t)(ws+4248);
	i8 v2520 = *(i8*)(intptr_t)v2519;
	i8 v2521 = *(i8*)(intptr_t)v2520;
	i8 v2522 = v2521+(+8);
	i2 v2523 = *(i2*)(intptr_t)v2522;
	*(i2*)(intptr_t)(ws+4264) = v2523;
	i8 v2524 = (i8)(intptr_t)(ws+4248);
	i8 v2525 = *(i8*)(intptr_t)v2524;
	i8 v2526 = v2525+(+10);
	i1 v2527 = *(i1*)(intptr_t)v2526;
	*(i1*)(intptr_t)(ws+4266) = v2527;
	i8 v2528 = (i8)(intptr_t)(ws+4248);
	i8 v2529 = *(i8*)(intptr_t)v2528;
	i8 v2530 = v2529+(+12);
	i2 v2531 = *(i2*)(intptr_t)v2530;
	*(i2*)(intptr_t)(ws+4268) = v2531;
	i8 v2532 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(void))(intptr_t)v2532)();

	i8 v2533 = (i8)(intptr_t)(ws+4256);
	i2 v2534 = *(i2*)(intptr_t)v2533;
	i2 v2535 = (i2)+0;
	if (v2534==v2535) goto c02_0257; else goto c02_0256;

c02_0256:;

	i8 v2536 = (i8)(intptr_t)(ws+4256);
	i2 v2537 = *(i2*)(intptr_t)v2536;
	*(i2*)(intptr_t)(ws+4264) = v2537;
	i8 v2538 = (i8)(intptr_t)(f97_E_i16);

	((void(*)(void))(intptr_t)v2538)();

c02_0257:;

c02_0253:;

	goto c02_024e;

c02_0252:;

	i8 v2539 = (i8)(intptr_t)(ws+4248);
	i8 v2540 = *(i8*)(intptr_t)v2539;
	i8 v2541 = *(i8*)(intptr_t)v2540;
	i8 v2542 = v2541+(+8);
	i2 v2543 = *(i2*)(intptr_t)v2542;
	*(i2*)(intptr_t)(ws+4264) = v2543;
	i8 v2544 = (i8)(intptr_t)(ws+4248);
	i8 v2545 = *(i8*)(intptr_t)v2544;
	i8 v2546 = v2545+(+10);
	i1 v2547 = *(i1*)(intptr_t)v2546;
	*(i1*)(intptr_t)(ws+4266) = v2547;
	i8 v2548 = (i8)(intptr_t)(ws+4248);
	i8 v2549 = *(i8*)(intptr_t)v2548;
	i8 v2550 = v2549+(+12);
	i2 v2551 = *(i2*)(intptr_t)v2550;
	i8 v2552 = (i8)(intptr_t)(ws+4256);
	i2 v2553 = *(i2*)(intptr_t)v2552;
	i2 v2554 = v2551+v2553;
	*(i2*)(intptr_t)(ws+4268) = v2554;
	i8 v2555 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(void))(intptr_t)v2555)();

c02_024e:;

}

// ArchEndInstruction workspace at ws+4120 length ws+0
void f158_ArchEndInstruction(void) {

}
	void f89_E_nl(void);

// ArchEndGroup workspace at ws+4112 length ws+0
void f159_ArchEndGroup(void) {

	i8 v2556 = (i8)(intptr_t)(f89_E_nl);

	((void(*)(void))(intptr_t)v2556)();

}
const i1 c02_s00c6[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(void);

// PushVid workspace at ws+4272 length ws+2
void f160_PushVid(void) {

	i8 v2557 = (i8)(intptr_t)(ws+3832);
	i1 v2558 = *(i1*)(intptr_t)v2557;
	i1 v2559 = (i1)+64;
	if (v2558==v2559) goto c02_025b; else goto c02_025c;

c02_025b:;

	i8 v2560 = (i8)(intptr_t)c02_s00c6;
	*(i8*)(intptr_t)(ws+4280) = v2560;
	i8 v2561 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v2561)();

c02_025c:;

c02_0258:;

	i8 v2562 = (i8)(intptr_t)(ws+4272);
	i2 v2563 = *(i2*)(intptr_t)v2562;
	i8 v2564 = (i8)(intptr_t)(ws+3704);
	i8 v2565 = (i8)(intptr_t)(ws+3832);
	i1 v2566 = *(i1*)(intptr_t)v2565;
	i8 v2567 = v2566;
	i1 v2568 = (i1)+1;
	i8 v2569 = ((i8)v2567)<<v2568;
	i8 v2570 = v2564+v2569;
	*(i2*)(intptr_t)v2570 = v2563;

	i8 v2571 = (i8)(intptr_t)(ws+3832);
	i1 v2572 = *(i1*)(intptr_t)v2571;
	i1 v2573 = v2572+(+1);
	i8 v2574 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v2574 = v2573;

}
	void f160_PushVid(void);

// Push workspace at ws+4264 length ws+2
void f161_Push(void) {

	i8 v2575 = (i8)(intptr_t)(ws+3834);
	i2 v2576 = *(i2*)(intptr_t)v2575;
	i8 v2577 = (i8)(intptr_t)(ws+4264);
	*(i2*)(intptr_t)v2577 = v2576;

	i8 v2578 = (i8)(intptr_t)(ws+3834);
	i2 v2579 = *(i2*)(intptr_t)v2578;
	i2 v2580 = v2579+(+1);
	i8 v2581 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v2581 = v2580;

	i8 v2582 = (i8)(intptr_t)(ws+4264);
	i2 v2583 = *(i2*)(intptr_t)v2582;
	*(i2*)(intptr_t)(ws+4272) = v2583;
	i8 v2584 = (i8)(intptr_t)(f160_PushVid);

	((void(*)(void))(intptr_t)v2584)();

}
const i1 c02_s00c7[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(void);

// CheckVarstackUnderflow workspace at ws+4272 length ws+0
void f162_CheckVarstackUnderflow(void) {

	i8 v2585 = (i8)(intptr_t)(ws+3832);
	i1 v2586 = *(i1*)(intptr_t)v2585;
	i1 v2587 = (i1)+0;
	if (v2586==v2587) goto c02_0260; else goto c02_0261;

c02_0260:;

	i8 v2588 = (i8)(intptr_t)c02_s00c7;
	*(i8*)(intptr_t)(ws+4280) = v2588;
	i8 v2589 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v2589)();

c02_0261:;

c02_025d:;

}
	void f162_CheckVarstackUnderflow(void);

// Pop workspace at ws+4264 length ws+2
void f163_Pop(void) {

	i8 v2590 = (i8)(intptr_t)(f162_CheckVarstackUnderflow);

	((void(*)(void))(intptr_t)v2590)();

	i8 v2591 = (i8)(intptr_t)(ws+3832);
	i1 v2592 = *(i1*)(intptr_t)v2591;
	i1 v2593 = v2592+(-1);
	i8 v2594 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v2594 = v2593;

	i8 v2595 = (i8)(intptr_t)(ws+3704);
	i8 v2596 = (i8)(intptr_t)(ws+3832);
	i1 v2597 = *(i1*)(intptr_t)v2596;
	i8 v2598 = v2597;
	i1 v2599 = (i1)+1;
	i8 v2600 = ((i8)v2598)<<v2599;
	i8 v2601 = v2595+v2600;
	i2 v2602 = *(i2*)(intptr_t)v2601;
	i8 v2603 = (i8)(intptr_t)(ws+4264);
	*(i2*)(intptr_t)v2603 = v2602;

}

// ArchEmitMove workspace at ws+4152 length ws+2
void f167_ArchEmitMove(void) {

}
	void f65_FindSubr(void);
	void f163_Pop(void);
const i1 c02_s00c9[] = { 0x0a,0x09,0x28,0x28,0x76,0x6f,0x69,0x64,0x28,0x2a,0x29,0 };
	void f92_E(void);
	void f155_EmitFunctionSignature(void);
const i1 c02_s00ca[] = { 0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00cb[] = { 0x29,0x28,0x29,0x3b,0x0a,0 };
	void f92_E(void);

// Call workspace at ws+4224 length ws+28
void f168_Call(void) {

	i8 v2618 = (i8)(intptr_t)(ws+4224);
	i2 v2619 = *(i2*)(intptr_t)v2618;
	*(i2*)(intptr_t)(ws+4256) = v2619;
	i8 v2620 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v2620)();

	i8 v2621 = *(i8*)(intptr_t)(ws+4264);
	i8 v2622 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v2622 = v2621;

	i8 v2623 = (i8)(intptr_t)(ws+4232);
	i8 v2624 = *(i8*)(intptr_t)v2623;
	i8 v2625 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v2625 = v2624;

	i8 v2626 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2626)();

	i2 v2627 = *(i2*)(intptr_t)(ws+4264);
	i8 v2628 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2628 = v2627;

	i8 v2629 = (i8)(intptr_t)(ws+4248);
	i2 v2630 = *(i2*)(intptr_t)v2629;
	i8 v2631 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2631 = v2630;

	i8 v2632 = (i8)(intptr_t)c02_s00c9;
	*(i8*)(intptr_t)(ws+4320) = v2632;
	i8 v2633 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2633)();

	i8 v2634 = (i8)(intptr_t)(ws+4240);
	i8 v2635 = *(i8*)(intptr_t)v2634;
	*(i8*)(intptr_t)(ws+4256) = v2635;
	i8 v2636 = (i8)(intptr_t)(f155_EmitFunctionSignature);

	((void(*)(void))(intptr_t)v2636)();

	i8 v2637 = (i8)(intptr_t)c02_s00ca;
	*(i8*)(intptr_t)(ws+4320) = v2637;
	i8 v2638 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2638)();

	i8 v2639 = (i8)(intptr_t)(ws+4250);
	i2 v2640 = *(i2*)(intptr_t)v2639;
	*(i2*)(intptr_t)(ws+4272) = v2640;
	i8 v2641 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2641)();

	i8 v2642 = (i8)(intptr_t)c02_s00cb;
	*(i8*)(intptr_t)(ws+4320) = v2642;
	i8 v2643 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2643)();

}
	void f163_Pop(void);
const i1 c02_s00cc[] = { 0x09,0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00cd[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f157_E_symref(void);
const i1 c02_s00ce[] = { 0x29,0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00cf[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// PokeArg workspace at ws+4224 length ws+20
void f169_PokeArg(void) {

	i8 v2644 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2644)();

	i2 v2645 = *(i2*)(intptr_t)(ws+4264);
	i8 v2646 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2646 = v2645;

	i8 v2647 = (i8)(intptr_t)(ws+4240);
	i2 v2648 = *(i2*)(intptr_t)v2647;
	i8 v2649 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2649 = v2648;

	i8 v2650 = (i8)(intptr_t)c02_s00cc;
	*(i8*)(intptr_t)(ws+4320) = v2650;
	i8 v2651 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2651)();

	i8 v2652 = (i8)(intptr_t)(ws+4224);
	i1 v2653 = *(i1*)(intptr_t)v2652;
	*(i1*)(intptr_t)(ws+4264) = v2653;
	i8 v2654 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2654)();

	i8 v2655 = (i8)(intptr_t)c02_s00cd;
	*(i8*)(intptr_t)(ws+4320) = v2655;
	i8 v2656 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2656)();

	i8 v2657 = (i8)(intptr_t)(ws+4232);
	i8 v2658 = *(i8*)(intptr_t)v2657;
	*(i8*)(intptr_t)(ws+4248) = v2658;
	i2 v2659 = (i2)+0;
	*(i2*)(intptr_t)(ws+4256) = v2659;
	i8 v2660 = (i8)(intptr_t)(f157_E_symref);

	((void(*)(void))(intptr_t)v2660)();

	i8 v2661 = (i8)(intptr_t)c02_s00ce;
	*(i8*)(intptr_t)(ws+4320) = v2661;
	i8 v2662 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2662)();

	i8 v2663 = (i8)(intptr_t)(ws+4242);
	i2 v2664 = *(i2*)(intptr_t)v2663;
	*(i2*)(intptr_t)(ws+4272) = v2664;
	i8 v2665 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2665)();

	i8 v2666 = (i8)(intptr_t)c02_s00cf;
	*(i8*)(intptr_t)(ws+4320) = v2666;
	i8 v2667 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2667)();

}
	void f161_Push(void);
const i1 c02_s00d0[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00d1[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00d2[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00d3[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f157_E_symref(void);
const i1 c02_s00d4[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// PeekArg workspace at ws+4224 length ws+20
void f170_PeekArg(void) {

	i8 v2668 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v2668)();

	i2 v2669 = *(i2*)(intptr_t)(ws+4264);
	i8 v2670 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2670 = v2669;

	i8 v2671 = (i8)(intptr_t)(ws+4240);
	i2 v2672 = *(i2*)(intptr_t)v2671;
	i8 v2673 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2673 = v2672;

	i8 v2674 = (i8)(intptr_t)c02_s00d0;
	*(i8*)(intptr_t)(ws+4320) = v2674;
	i8 v2675 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2675)();

	i8 v2676 = (i8)(intptr_t)(ws+4224);
	i1 v2677 = *(i1*)(intptr_t)v2676;
	*(i1*)(intptr_t)(ws+4264) = v2677;
	i8 v2678 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2678)();

	i8 v2679 = (i8)(intptr_t)c02_s00d1;
	*(i8*)(intptr_t)(ws+4320) = v2679;
	i8 v2680 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2680)();

	i8 v2681 = (i8)(intptr_t)(ws+4242);
	i2 v2682 = *(i2*)(intptr_t)v2681;
	*(i2*)(intptr_t)(ws+4272) = v2682;
	i8 v2683 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2683)();

	i8 v2684 = (i8)(intptr_t)c02_s00d2;
	*(i8*)(intptr_t)(ws+4320) = v2684;
	i8 v2685 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2685)();

	i8 v2686 = (i8)(intptr_t)(ws+4224);
	i1 v2687 = *(i1*)(intptr_t)v2686;
	*(i1*)(intptr_t)(ws+4264) = v2687;
	i8 v2688 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2688)();

	i8 v2689 = (i8)(intptr_t)c02_s00d3;
	*(i8*)(intptr_t)(ws+4320) = v2689;
	i8 v2690 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2690)();

	i8 v2691 = (i8)(intptr_t)(ws+4232);
	i8 v2692 = *(i8*)(intptr_t)v2691;
	*(i8*)(intptr_t)(ws+4248) = v2692;
	i2 v2693 = (i2)+0;
	*(i2*)(intptr_t)(ws+4256) = v2693;
	i8 v2694 = (i8)(intptr_t)(f157_E_symref);

	((void(*)(void))(intptr_t)v2694)();

	i8 v2695 = (i8)(intptr_t)c02_s00d4;
	*(i8*)(intptr_t)(ws+4320) = v2695;
	i8 v2696 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2696)();

}
	void f161_Push(void);
const i1 c02_s00d5[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00d6[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00d7[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00d8[] = { 0x29,0 };
	void f92_E(void);
	void f98_E_i32(void);
const i1 c02_s00d9[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// LoadConstant workspace at ws+4224 length ws+12
void f171_LoadConstant(void) {

	i8 v2697 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v2697)();

	i2 v2698 = *(i2*)(intptr_t)(ws+4264);
	i8 v2699 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v2699 = v2698;

	i8 v2700 = (i8)(intptr_t)(ws+4232);
	i2 v2701 = *(i2*)(intptr_t)v2700;
	i8 v2702 = (i8)(intptr_t)(ws+4234);
	*(i2*)(intptr_t)v2702 = v2701;

	i8 v2703 = (i8)(intptr_t)c02_s00d5;
	*(i8*)(intptr_t)(ws+4320) = v2703;
	i8 v2704 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2704)();

	i8 v2705 = (i8)(intptr_t)(ws+4224);
	i1 v2706 = *(i1*)(intptr_t)v2705;
	*(i1*)(intptr_t)(ws+4264) = v2706;
	i8 v2707 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2707)();

	i8 v2708 = (i8)(intptr_t)c02_s00d6;
	*(i8*)(intptr_t)(ws+4320) = v2708;
	i8 v2709 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2709)();

	i8 v2710 = (i8)(intptr_t)(ws+4234);
	i2 v2711 = *(i2*)(intptr_t)v2710;
	*(i2*)(intptr_t)(ws+4272) = v2711;
	i8 v2712 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2712)();

	i8 v2713 = (i8)(intptr_t)c02_s00d7;
	*(i8*)(intptr_t)(ws+4320) = v2713;
	i8 v2714 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2714)();

	i8 v2715 = (i8)(intptr_t)(ws+4224);
	i1 v2716 = *(i1*)(intptr_t)v2715;
	*(i1*)(intptr_t)(ws+4264) = v2716;
	i8 v2717 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2717)();

	i8 v2718 = (i8)(intptr_t)c02_s00d8;
	*(i8*)(intptr_t)(ws+4320) = v2718;
	i8 v2719 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2719)();

	i8 v2720 = (i8)(intptr_t)(ws+4228);
	i4 v2721 = *(i4*)(intptr_t)v2720;
	*(i4*)(intptr_t)(ws+4256) = v2721;
	i8 v2722 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v2722)();

	i8 v2723 = (i8)(intptr_t)c02_s00d9;
	*(i8*)(intptr_t)(ws+4320) = v2723;
	i8 v2724 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2724)();

}
	void f163_Pop(void);
	void f163_Pop(void);
const i1 c02_s00da[] = { 0x09,0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00db[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00dc[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00dd[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// StoreVV workspace at ws+4224 length ws+10
void f172_StoreVV(void) {

	i8 v2725 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2725)();

	i2 v2726 = *(i2*)(intptr_t)(ws+4264);
	i8 v2727 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v2727 = v2726;

	i8 v2728 = (i8)(intptr_t)(ws+4226);
	i2 v2729 = *(i2*)(intptr_t)v2728;
	i8 v2730 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v2730 = v2729;

	i8 v2731 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2731)();

	i2 v2732 = *(i2*)(intptr_t)(ws+4264);
	i8 v2733 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v2733 = v2732;

	i8 v2734 = (i8)(intptr_t)(ws+4230);
	i2 v2735 = *(i2*)(intptr_t)v2734;
	i8 v2736 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v2736 = v2735;

	i8 v2737 = (i8)(intptr_t)c02_s00da;
	*(i8*)(intptr_t)(ws+4320) = v2737;
	i8 v2738 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2738)();

	i8 v2739 = (i8)(intptr_t)(ws+4224);
	i1 v2740 = *(i1*)(intptr_t)v2739;
	*(i1*)(intptr_t)(ws+4264) = v2740;
	i8 v2741 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2741)();

	i8 v2742 = (i8)(intptr_t)c02_s00db;
	*(i8*)(intptr_t)(ws+4320) = v2742;
	i8 v2743 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2743)();

	i8 v2744 = (i8)(intptr_t)(ws+4228);
	i2 v2745 = *(i2*)(intptr_t)v2744;
	*(i2*)(intptr_t)(ws+4272) = v2745;
	i8 v2746 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2746)();

	i8 v2747 = (i8)(intptr_t)c02_s00dc;
	*(i8*)(intptr_t)(ws+4320) = v2747;
	i8 v2748 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2748)();

	i8 v2749 = (i8)(intptr_t)(ws+4232);
	i2 v2750 = *(i2*)(intptr_t)v2749;
	*(i2*)(intptr_t)(ws+4272) = v2750;
	i8 v2751 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2751)();

	i8 v2752 = (i8)(intptr_t)c02_s00dd;
	*(i8*)(intptr_t)(ws+4320) = v2752;
	i8 v2753 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2753)();

}
	void f163_Pop(void);
	void f161_Push(void);
const i1 c02_s00de[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00df[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00e0[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00e1[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00e2[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// LoadVV workspace at ws+4224 length ws+10
void f173_LoadVV(void) {

	i8 v2754 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2754)();

	i2 v2755 = *(i2*)(intptr_t)(ws+4264);
	i8 v2756 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v2756 = v2755;

	i8 v2757 = (i8)(intptr_t)(ws+4226);
	i2 v2758 = *(i2*)(intptr_t)v2757;
	i8 v2759 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v2759 = v2758;

	i8 v2760 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v2760)();

	i2 v2761 = *(i2*)(intptr_t)(ws+4264);
	i8 v2762 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v2762 = v2761;

	i8 v2763 = (i8)(intptr_t)(ws+4230);
	i2 v2764 = *(i2*)(intptr_t)v2763;
	i8 v2765 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v2765 = v2764;

	i8 v2766 = (i8)(intptr_t)c02_s00de;
	*(i8*)(intptr_t)(ws+4320) = v2766;
	i8 v2767 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2767)();

	i8 v2768 = (i8)(intptr_t)(ws+4224);
	i1 v2769 = *(i1*)(intptr_t)v2768;
	*(i1*)(intptr_t)(ws+4264) = v2769;
	i8 v2770 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2770)();

	i8 v2771 = (i8)(intptr_t)c02_s00df;
	*(i8*)(intptr_t)(ws+4320) = v2771;
	i8 v2772 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2772)();

	i8 v2773 = (i8)(intptr_t)(ws+4232);
	i2 v2774 = *(i2*)(intptr_t)v2773;
	*(i2*)(intptr_t)(ws+4272) = v2774;
	i8 v2775 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2775)();

	i8 v2776 = (i8)(intptr_t)c02_s00e0;
	*(i8*)(intptr_t)(ws+4320) = v2776;
	i8 v2777 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2777)();

	i8 v2778 = (i8)(intptr_t)(ws+4224);
	i1 v2779 = *(i1*)(intptr_t)v2778;
	*(i1*)(intptr_t)(ws+4264) = v2779;
	i8 v2780 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2780)();

	i8 v2781 = (i8)(intptr_t)c02_s00e1;
	*(i8*)(intptr_t)(ws+4320) = v2781;
	i8 v2782 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2782)();

	i8 v2783 = (i8)(intptr_t)(ws+4228);
	i2 v2784 = *(i2*)(intptr_t)v2783;
	*(i2*)(intptr_t)(ws+4272) = v2784;
	i8 v2785 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2785)();

	i8 v2786 = (i8)(intptr_t)c02_s00e2;
	*(i8*)(intptr_t)(ws+4320) = v2786;
	i8 v2787 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2787)();

}
	void f163_Pop(void);
	void f163_Pop(void);
	void f161_Push(void);
const i1 c02_s00e3[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00e4[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00e5[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s00e6[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00e7[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Op2VV workspace at ws+4224 length ws+28
void f174_Op2VV(void) {

	i8 v2788 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2788)();

	i2 v2789 = *(i2*)(intptr_t)(ws+4264);
	i8 v2790 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2790 = v2789;

	i8 v2791 = (i8)(intptr_t)(ws+4240);
	i2 v2792 = *(i2*)(intptr_t)v2791;
	i8 v2793 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2793 = v2792;

	i8 v2794 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2794)();

	i2 v2795 = *(i2*)(intptr_t)(ws+4264);
	i8 v2796 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2796 = v2795;

	i8 v2797 = (i8)(intptr_t)(ws+4244);
	i2 v2798 = *(i2*)(intptr_t)v2797;
	i8 v2799 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2799 = v2798;

	i8 v2800 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v2800)();

	i2 v2801 = *(i2*)(intptr_t)(ws+4264);
	i8 v2802 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2802 = v2801;

	i8 v2803 = (i8)(intptr_t)(ws+4248);
	i2 v2804 = *(i2*)(intptr_t)v2803;
	i8 v2805 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2805 = v2804;

	i8 v2806 = (i8)(intptr_t)c02_s00e3;
	*(i8*)(intptr_t)(ws+4320) = v2806;
	i8 v2807 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2807)();

	i8 v2808 = (i8)(intptr_t)(ws+4224);
	i1 v2809 = *(i1*)(intptr_t)v2808;
	*(i1*)(intptr_t)(ws+4264) = v2809;
	i8 v2810 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2810)();

	i8 v2811 = (i8)(intptr_t)c02_s00e4;
	*(i8*)(intptr_t)(ws+4320) = v2811;
	i8 v2812 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2812)();

	i8 v2813 = (i8)(intptr_t)(ws+4250);
	i2 v2814 = *(i2*)(intptr_t)v2813;
	*(i2*)(intptr_t)(ws+4272) = v2814;
	i8 v2815 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2815)();

	i8 v2816 = (i8)(intptr_t)c02_s00e5;
	*(i8*)(intptr_t)(ws+4320) = v2816;
	i8 v2817 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2817)();

	i8 v2818 = (i8)(intptr_t)(ws+4246);
	i2 v2819 = *(i2*)(intptr_t)v2818;
	*(i2*)(intptr_t)(ws+4272) = v2819;
	i8 v2820 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2820)();

	i8 v2821 = (i8)(intptr_t)(ws+4232);
	i8 v2822 = *(i8*)(intptr_t)v2821;
	*(i8*)(intptr_t)(ws+4320) = v2822;
	i8 v2823 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2823)();

	i8 v2824 = (i8)(intptr_t)c02_s00e6;
	*(i8*)(intptr_t)(ws+4320) = v2824;
	i8 v2825 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2825)();

	i8 v2826 = (i8)(intptr_t)(ws+4242);
	i2 v2827 = *(i2*)(intptr_t)v2826;
	*(i2*)(intptr_t)(ws+4272) = v2827;
	i8 v2828 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2828)();

	i8 v2829 = (i8)(intptr_t)c02_s00e7;
	*(i8*)(intptr_t)(ws+4320) = v2829;
	i8 v2830 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2830)();

}
	void f163_Pop(void);
	void f161_Push(void);
const i1 c02_s00e8[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00e9[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00ea[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s00eb[] = { 0x28,0 };
	void f92_E(void);
	void f98_E_i32(void);
const i1 c02_s00ec[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// Op2VC workspace at ws+4224 length ws+28
void f175_Op2VC(void) {

	i8 v2831 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2831)();

	i2 v2832 = *(i2*)(intptr_t)(ws+4264);
	i8 v2833 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2833 = v2832;

	i8 v2834 = (i8)(intptr_t)(ws+4244);
	i2 v2835 = *(i2*)(intptr_t)v2834;
	i8 v2836 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2836 = v2835;

	i8 v2837 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v2837)();

	i2 v2838 = *(i2*)(intptr_t)(ws+4264);
	i8 v2839 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2839 = v2838;

	i8 v2840 = (i8)(intptr_t)(ws+4248);
	i2 v2841 = *(i2*)(intptr_t)v2840;
	i8 v2842 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2842 = v2841;

	i8 v2843 = (i8)(intptr_t)c02_s00e8;
	*(i8*)(intptr_t)(ws+4320) = v2843;
	i8 v2844 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2844)();

	i8 v2845 = (i8)(intptr_t)(ws+4224);
	i1 v2846 = *(i1*)(intptr_t)v2845;
	*(i1*)(intptr_t)(ws+4264) = v2846;
	i8 v2847 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2847)();

	i8 v2848 = (i8)(intptr_t)c02_s00e9;
	*(i8*)(intptr_t)(ws+4320) = v2848;
	i8 v2849 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2849)();

	i8 v2850 = (i8)(intptr_t)(ws+4250);
	i2 v2851 = *(i2*)(intptr_t)v2850;
	*(i2*)(intptr_t)(ws+4272) = v2851;
	i8 v2852 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2852)();

	i8 v2853 = (i8)(intptr_t)c02_s00ea;
	*(i8*)(intptr_t)(ws+4320) = v2853;
	i8 v2854 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2854)();

	i8 v2855 = (i8)(intptr_t)(ws+4246);
	i2 v2856 = *(i2*)(intptr_t)v2855;
	*(i2*)(intptr_t)(ws+4272) = v2856;
	i8 v2857 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2857)();

	i8 v2858 = (i8)(intptr_t)(ws+4232);
	i8 v2859 = *(i8*)(intptr_t)v2858;
	*(i8*)(intptr_t)(ws+4320) = v2859;
	i8 v2860 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2860)();

	i8 v2861 = (i8)(intptr_t)c02_s00eb;
	*(i8*)(intptr_t)(ws+4320) = v2861;
	i8 v2862 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2862)();

	i8 v2863 = (i8)(intptr_t)(ws+4240);
	i4 v2864 = *(i4*)(intptr_t)v2863;
	*(i4*)(intptr_t)(ws+4256) = v2864;
	i8 v2865 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v2865)();

	i8 v2866 = (i8)(intptr_t)c02_s00ec;
	*(i8*)(intptr_t)(ws+4320) = v2866;
	i8 v2867 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2867)();

}
	void f163_Pop(void);
	void f163_Pop(void);
	void f161_Push(void);
const i1 c02_s00ed[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00ee[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00ef[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00f0[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s00f1[] = { 0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00f2[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00f3[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Op2VVSigned workspace at ws+4224 length ws+28
void f176_Op2VVSigned(void) {

	i8 v2868 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2868)();

	i2 v2869 = *(i2*)(intptr_t)(ws+4264);
	i8 v2870 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2870 = v2869;

	i8 v2871 = (i8)(intptr_t)(ws+4240);
	i2 v2872 = *(i2*)(intptr_t)v2871;
	i8 v2873 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2873 = v2872;

	i8 v2874 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2874)();

	i2 v2875 = *(i2*)(intptr_t)(ws+4264);
	i8 v2876 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2876 = v2875;

	i8 v2877 = (i8)(intptr_t)(ws+4244);
	i2 v2878 = *(i2*)(intptr_t)v2877;
	i8 v2879 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2879 = v2878;

	i8 v2880 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v2880)();

	i2 v2881 = *(i2*)(intptr_t)(ws+4264);
	i8 v2882 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2882 = v2881;

	i8 v2883 = (i8)(intptr_t)(ws+4248);
	i2 v2884 = *(i2*)(intptr_t)v2883;
	i8 v2885 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2885 = v2884;

	i8 v2886 = (i8)(intptr_t)c02_s00ed;
	*(i8*)(intptr_t)(ws+4320) = v2886;
	i8 v2887 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2887)();

	i8 v2888 = (i8)(intptr_t)(ws+4224);
	i1 v2889 = *(i1*)(intptr_t)v2888;
	*(i1*)(intptr_t)(ws+4264) = v2889;
	i8 v2890 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2890)();

	i8 v2891 = (i8)(intptr_t)c02_s00ee;
	*(i8*)(intptr_t)(ws+4320) = v2891;
	i8 v2892 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2892)();

	i8 v2893 = (i8)(intptr_t)(ws+4250);
	i2 v2894 = *(i2*)(intptr_t)v2893;
	*(i2*)(intptr_t)(ws+4272) = v2894;
	i8 v2895 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2895)();

	i8 v2896 = (i8)(intptr_t)c02_s00ef;
	*(i8*)(intptr_t)(ws+4320) = v2896;
	i8 v2897 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2897)();

	i8 v2898 = (i8)(intptr_t)(ws+4224);
	i1 v2899 = *(i1*)(intptr_t)v2898;
	*(i1*)(intptr_t)(ws+4264) = v2899;
	i8 v2900 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2900)();

	i8 v2901 = (i8)(intptr_t)c02_s00f0;
	*(i8*)(intptr_t)(ws+4320) = v2901;
	i8 v2902 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2902)();

	i8 v2903 = (i8)(intptr_t)(ws+4246);
	i2 v2904 = *(i2*)(intptr_t)v2903;
	*(i2*)(intptr_t)(ws+4272) = v2904;
	i8 v2905 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2905)();

	i8 v2906 = (i8)(intptr_t)(ws+4232);
	i8 v2907 = *(i8*)(intptr_t)v2906;
	*(i8*)(intptr_t)(ws+4320) = v2907;
	i8 v2908 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2908)();

	i8 v2909 = (i8)(intptr_t)c02_s00f1;
	*(i8*)(intptr_t)(ws+4320) = v2909;
	i8 v2910 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2910)();

	i8 v2911 = (i8)(intptr_t)(ws+4224);
	i1 v2912 = *(i1*)(intptr_t)v2911;
	*(i1*)(intptr_t)(ws+4264) = v2912;
	i8 v2913 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2913)();

	i8 v2914 = (i8)(intptr_t)c02_s00f2;
	*(i8*)(intptr_t)(ws+4320) = v2914;
	i8 v2915 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2915)();

	i8 v2916 = (i8)(intptr_t)(ws+4242);
	i2 v2917 = *(i2*)(intptr_t)v2916;
	*(i2*)(intptr_t)(ws+4272) = v2917;
	i8 v2918 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2918)();

	i8 v2919 = (i8)(intptr_t)c02_s00f3;
	*(i8*)(intptr_t)(ws+4320) = v2919;
	i8 v2920 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2920)();

}
	void f163_Pop(void);
	void f161_Push(void);
const i1 c02_s00f4[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00f5[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00f6[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s00f7[] = { 0x28,0 };
	void f92_E(void);
	void f98_E_i32(void);
const i1 c02_s00f8[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// Op2VCSigned workspace at ws+4224 length ws+28
void f177_Op2VCSigned(void) {

	i8 v2921 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2921)();

	i2 v2922 = *(i2*)(intptr_t)(ws+4264);
	i8 v2923 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2923 = v2922;

	i8 v2924 = (i8)(intptr_t)(ws+4244);
	i2 v2925 = *(i2*)(intptr_t)v2924;
	i8 v2926 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2926 = v2925;

	i8 v2927 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v2927)();

	i2 v2928 = *(i2*)(intptr_t)(ws+4264);
	i8 v2929 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2929 = v2928;

	i8 v2930 = (i8)(intptr_t)(ws+4248);
	i2 v2931 = *(i2*)(intptr_t)v2930;
	i8 v2932 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2932 = v2931;

	i8 v2933 = (i8)(intptr_t)c02_s00f4;
	*(i8*)(intptr_t)(ws+4320) = v2933;
	i8 v2934 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2934)();

	i8 v2935 = (i8)(intptr_t)(ws+4224);
	i1 v2936 = *(i1*)(intptr_t)v2935;
	*(i1*)(intptr_t)(ws+4264) = v2936;
	i8 v2937 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2937)();

	i8 v2938 = (i8)(intptr_t)c02_s00f5;
	*(i8*)(intptr_t)(ws+4320) = v2938;
	i8 v2939 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2939)();

	i8 v2940 = (i8)(intptr_t)(ws+4250);
	i2 v2941 = *(i2*)(intptr_t)v2940;
	*(i2*)(intptr_t)(ws+4272) = v2941;
	i8 v2942 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2942)();

	i8 v2943 = (i8)(intptr_t)c02_s00f6;
	*(i8*)(intptr_t)(ws+4320) = v2943;
	i8 v2944 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2944)();

	i8 v2945 = (i8)(intptr_t)(ws+4246);
	i2 v2946 = *(i2*)(intptr_t)v2945;
	*(i2*)(intptr_t)(ws+4272) = v2946;
	i8 v2947 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2947)();

	i8 v2948 = (i8)(intptr_t)(ws+4232);
	i8 v2949 = *(i8*)(intptr_t)v2948;
	*(i8*)(intptr_t)(ws+4320) = v2949;
	i8 v2950 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2950)();

	i8 v2951 = (i8)(intptr_t)c02_s00f7;
	*(i8*)(intptr_t)(ws+4320) = v2951;
	i8 v2952 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2952)();

	i8 v2953 = (i8)(intptr_t)(ws+4240);
	i4 v2954 = *(i4*)(intptr_t)v2953;
	*(i4*)(intptr_t)(ws+4256) = v2954;
	i8 v2955 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v2955)();

	i8 v2956 = (i8)(intptr_t)c02_s00f8;
	*(i8*)(intptr_t)(ws+4320) = v2956;
	i8 v2957 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2957)();

}
	void f163_Pop(void);
	void f161_Push(void);
const i1 c02_s00f9[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00fa[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00fb[] = { 0x20,0x3d,0x20,0 };
	void f92_E(void);
	void f92_E(void);
const i1 c02_s00fc[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00fd[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Op1V workspace at ws+4224 length ws+24
void f178_Op1V(void) {

	i8 v2958 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2958)();

	i2 v2959 = *(i2*)(intptr_t)(ws+4264);
	i8 v2960 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2960 = v2959;

	i8 v2961 = (i8)(intptr_t)(ws+4240);
	i2 v2962 = *(i2*)(intptr_t)v2961;
	i8 v2963 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2963 = v2962;

	i8 v2964 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v2964)();

	i2 v2965 = *(i2*)(intptr_t)(ws+4264);
	i8 v2966 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2966 = v2965;

	i8 v2967 = (i8)(intptr_t)(ws+4244);
	i2 v2968 = *(i2*)(intptr_t)v2967;
	i8 v2969 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2969 = v2968;

	i8 v2970 = (i8)(intptr_t)c02_s00f9;
	*(i8*)(intptr_t)(ws+4320) = v2970;
	i8 v2971 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2971)();

	i8 v2972 = (i8)(intptr_t)(ws+4224);
	i1 v2973 = *(i1*)(intptr_t)v2972;
	*(i1*)(intptr_t)(ws+4264) = v2973;
	i8 v2974 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2974)();

	i8 v2975 = (i8)(intptr_t)c02_s00fa;
	*(i8*)(intptr_t)(ws+4320) = v2975;
	i8 v2976 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2976)();

	i8 v2977 = (i8)(intptr_t)(ws+4246);
	i2 v2978 = *(i2*)(intptr_t)v2977;
	*(i2*)(intptr_t)(ws+4272) = v2978;
	i8 v2979 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2979)();

	i8 v2980 = (i8)(intptr_t)c02_s00fb;
	*(i8*)(intptr_t)(ws+4320) = v2980;
	i8 v2981 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2981)();

	i8 v2982 = (i8)(intptr_t)(ws+4232);
	i8 v2983 = *(i8*)(intptr_t)v2982;
	*(i8*)(intptr_t)(ws+4320) = v2983;
	i8 v2984 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2984)();

	i8 v2985 = (i8)(intptr_t)c02_s00fc;
	*(i8*)(intptr_t)(ws+4320) = v2985;
	i8 v2986 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2986)();

	i8 v2987 = (i8)(intptr_t)(ws+4242);
	i2 v2988 = *(i2*)(intptr_t)v2987;
	*(i2*)(intptr_t)(ws+4272) = v2988;
	i8 v2989 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2989)();

	i8 v2990 = (i8)(intptr_t)c02_s00fd;
	*(i8*)(intptr_t)(ws+4320) = v2990;
	i8 v2991 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2991)();

}
	void f163_Pop(void);
	void f163_Pop(void);
	void f161_Push(void);
const i1 c02_s00fe[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00ff[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0100[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
	void f92_E(void);
	void f92_E(void);
const i1 c02_s0101[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0102[] = { 0x29,0 };
	void f92_E(void);
	void f92_E(void);
const i1 c02_s0103[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0104[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Shift workspace at ws+4224 length ws+36
void f179_Shift(void) {

	i8 v2992 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2992)();

	i2 v2993 = *(i2*)(intptr_t)(ws+4264);
	i8 v2994 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2994 = v2993;

	i8 v2995 = (i8)(intptr_t)(ws+4248);
	i2 v2996 = *(i2*)(intptr_t)v2995;
	i8 v2997 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2997 = v2996;

	i8 v2998 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v2998)();

	i2 v2999 = *(i2*)(intptr_t)(ws+4264);
	i8 v3000 = (i8)(intptr_t)(ws+4252);
	*(i2*)(intptr_t)v3000 = v2999;

	i8 v3001 = (i8)(intptr_t)(ws+4252);
	i2 v3002 = *(i2*)(intptr_t)v3001;
	i8 v3003 = (i8)(intptr_t)(ws+4254);
	*(i2*)(intptr_t)v3003 = v3002;

	i8 v3004 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v3004)();

	i2 v3005 = *(i2*)(intptr_t)(ws+4264);
	i8 v3006 = (i8)(intptr_t)(ws+4256);
	*(i2*)(intptr_t)v3006 = v3005;

	i8 v3007 = (i8)(intptr_t)(ws+4256);
	i2 v3008 = *(i2*)(intptr_t)v3007;
	i8 v3009 = (i8)(intptr_t)(ws+4258);
	*(i2*)(intptr_t)v3009 = v3008;

	i8 v3010 = (i8)(intptr_t)c02_s00fe;
	*(i8*)(intptr_t)(ws+4320) = v3010;
	i8 v3011 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3011)();

	i8 v3012 = (i8)(intptr_t)(ws+4224);
	i1 v3013 = *(i1*)(intptr_t)v3012;
	*(i1*)(intptr_t)(ws+4264) = v3013;
	i8 v3014 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3014)();

	i8 v3015 = (i8)(intptr_t)c02_s00ff;
	*(i8*)(intptr_t)(ws+4320) = v3015;
	i8 v3016 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3016)();

	i8 v3017 = (i8)(intptr_t)(ws+4258);
	i2 v3018 = *(i2*)(intptr_t)v3017;
	*(i2*)(intptr_t)(ws+4272) = v3018;
	i8 v3019 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3019)();

	i8 v3020 = (i8)(intptr_t)c02_s0100;
	*(i8*)(intptr_t)(ws+4320) = v3020;
	i8 v3021 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3021)();

	i8 v3022 = (i8)(intptr_t)(ws+4232);
	i8 v3023 = *(i8*)(intptr_t)v3022;
	*(i8*)(intptr_t)(ws+4320) = v3023;
	i8 v3024 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3024)();

	i8 v3025 = (i8)(intptr_t)c02_s0101;
	*(i8*)(intptr_t)(ws+4320) = v3025;
	i8 v3026 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3026)();

	i8 v3027 = (i8)(intptr_t)(ws+4254);
	i2 v3028 = *(i2*)(intptr_t)v3027;
	*(i2*)(intptr_t)(ws+4272) = v3028;
	i8 v3029 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3029)();

	i8 v3030 = (i8)(intptr_t)c02_s0102;
	*(i8*)(intptr_t)(ws+4320) = v3030;
	i8 v3031 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3031)();

	i8 v3032 = (i8)(intptr_t)(ws+4240);
	i8 v3033 = *(i8*)(intptr_t)v3032;
	*(i8*)(intptr_t)(ws+4320) = v3033;
	i8 v3034 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3034)();

	i8 v3035 = (i8)(intptr_t)c02_s0103;
	*(i8*)(intptr_t)(ws+4320) = v3035;
	i8 v3036 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3036)();

	i8 v3037 = (i8)(intptr_t)(ws+4250);
	i2 v3038 = *(i2*)(intptr_t)v3037;
	*(i2*)(intptr_t)(ws+4272) = v3038;
	i8 v3039 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3039)();

	i8 v3040 = (i8)(intptr_t)c02_s0104;
	*(i8*)(intptr_t)(ws+4320) = v3040;
	i8 v3041 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3041)();

}
	void f163_Pop(void);
	void f163_Pop(void);
const i1 c02_s0105[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s0106[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0107[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s0108[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s0109[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Branch workspace at ws+4224 length ws+24
void f180_Branch(void) {

	i8 v3042 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v3042)();

	i2 v3043 = *(i2*)(intptr_t)(ws+4264);
	i8 v3044 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v3044 = v3043;

	i8 v3045 = (i8)(intptr_t)(ws+4240);
	i2 v3046 = *(i2*)(intptr_t)v3045;
	i8 v3047 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v3047 = v3046;

	i8 v3048 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v3048)();

	i2 v3049 = *(i2*)(intptr_t)(ws+4264);
	i8 v3050 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v3050 = v3049;

	i8 v3051 = (i8)(intptr_t)(ws+4244);
	i2 v3052 = *(i2*)(intptr_t)v3051;
	i8 v3053 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v3053 = v3052;

	i8 v3054 = (i8)(intptr_t)c02_s0105;
	*(i8*)(intptr_t)(ws+4320) = v3054;
	i8 v3055 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3055)();

	i8 v3056 = (i8)(intptr_t)(ws+4246);
	i2 v3057 = *(i2*)(intptr_t)v3056;
	*(i2*)(intptr_t)(ws+4272) = v3057;
	i8 v3058 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3058)();

	i8 v3059 = (i8)(intptr_t)(ws+4232);
	i8 v3060 = *(i8*)(intptr_t)v3059;
	*(i8*)(intptr_t)(ws+4320) = v3060;
	i8 v3061 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3061)();

	i8 v3062 = (i8)(intptr_t)c02_s0106;
	*(i8*)(intptr_t)(ws+4320) = v3062;
	i8 v3063 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3063)();

	i8 v3064 = (i8)(intptr_t)(ws+4242);
	i2 v3065 = *(i2*)(intptr_t)v3064;
	*(i2*)(intptr_t)(ws+4272) = v3065;
	i8 v3066 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3066)();

	i8 v3067 = (i8)(intptr_t)c02_s0107;
	*(i8*)(intptr_t)(ws+4320) = v3067;
	i8 v3068 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3068)();

	i8 v3069 = (i8)(intptr_t)(ws+4224);
	i8 v3070 = *(i8*)(intptr_t)v3069;
	i2 v3071 = *(i2*)(intptr_t)v3070;
	*(i2*)(intptr_t)(ws+4256) = v3071;
	i8 v3072 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3072)();

	i8 v3073 = (i8)(intptr_t)c02_s0108;
	*(i8*)(intptr_t)(ws+4320) = v3073;
	i8 v3074 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3074)();

	i8 v3075 = (i8)(intptr_t)(ws+4224);
	i8 v3076 = *(i8*)(intptr_t)v3075;
	i8 v3077 = v3076+(+2);
	i2 v3078 = *(i2*)(intptr_t)v3077;
	*(i2*)(intptr_t)(ws+4256) = v3078;
	i8 v3079 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3079)();

	i8 v3080 = (i8)(intptr_t)c02_s0109;
	*(i8*)(intptr_t)(ws+4320) = v3080;
	i8 v3081 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3081)();

}
	void f163_Pop(void);
	void f163_Pop(void);
const i1 c02_s010a[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s010b[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s010c[] = { 0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s010d[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s010e[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s010f[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s0110[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// BranchSigned workspace at ws+4224 length ws+32
void f181_BranchSigned(void) {

	i8 v3082 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v3082)();

	i2 v3083 = *(i2*)(intptr_t)(ws+4264);
	i8 v3084 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v3084 = v3083;

	i8 v3085 = (i8)(intptr_t)(ws+4248);
	i2 v3086 = *(i2*)(intptr_t)v3085;
	i8 v3087 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v3087 = v3086;

	i8 v3088 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v3088)();

	i2 v3089 = *(i2*)(intptr_t)(ws+4264);
	i8 v3090 = (i8)(intptr_t)(ws+4252);
	*(i2*)(intptr_t)v3090 = v3089;

	i8 v3091 = (i8)(intptr_t)(ws+4252);
	i2 v3092 = *(i2*)(intptr_t)v3091;
	i8 v3093 = (i8)(intptr_t)(ws+4254);
	*(i2*)(intptr_t)v3093 = v3092;

	i8 v3094 = (i8)(intptr_t)c02_s010a;
	*(i8*)(intptr_t)(ws+4320) = v3094;
	i8 v3095 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3095)();

	i8 v3096 = (i8)(intptr_t)(ws+4232);
	i1 v3097 = *(i1*)(intptr_t)v3096;
	*(i1*)(intptr_t)(ws+4264) = v3097;
	i8 v3098 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3098)();

	i8 v3099 = (i8)(intptr_t)c02_s010b;
	*(i8*)(intptr_t)(ws+4320) = v3099;
	i8 v3100 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3100)();

	i8 v3101 = (i8)(intptr_t)(ws+4254);
	i2 v3102 = *(i2*)(intptr_t)v3101;
	*(i2*)(intptr_t)(ws+4272) = v3102;
	i8 v3103 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3103)();

	i8 v3104 = (i8)(intptr_t)(ws+4240);
	i8 v3105 = *(i8*)(intptr_t)v3104;
	*(i8*)(intptr_t)(ws+4320) = v3105;
	i8 v3106 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3106)();

	i8 v3107 = (i8)(intptr_t)c02_s010c;
	*(i8*)(intptr_t)(ws+4320) = v3107;
	i8 v3108 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3108)();

	i8 v3109 = (i8)(intptr_t)(ws+4232);
	i1 v3110 = *(i1*)(intptr_t)v3109;
	*(i1*)(intptr_t)(ws+4264) = v3110;
	i8 v3111 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3111)();

	i8 v3112 = (i8)(intptr_t)c02_s010d;
	*(i8*)(intptr_t)(ws+4320) = v3112;
	i8 v3113 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3113)();

	i8 v3114 = (i8)(intptr_t)(ws+4250);
	i2 v3115 = *(i2*)(intptr_t)v3114;
	*(i2*)(intptr_t)(ws+4272) = v3115;
	i8 v3116 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3116)();

	i8 v3117 = (i8)(intptr_t)c02_s010e;
	*(i8*)(intptr_t)(ws+4320) = v3117;
	i8 v3118 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3118)();

	i8 v3119 = (i8)(intptr_t)(ws+4224);
	i8 v3120 = *(i8*)(intptr_t)v3119;
	i2 v3121 = *(i2*)(intptr_t)v3120;
	*(i2*)(intptr_t)(ws+4256) = v3121;
	i8 v3122 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3122)();

	i8 v3123 = (i8)(intptr_t)c02_s010f;
	*(i8*)(intptr_t)(ws+4320) = v3123;
	i8 v3124 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3124)();

	i8 v3125 = (i8)(intptr_t)(ws+4224);
	i8 v3126 = *(i8*)(intptr_t)v3125;
	i8 v3127 = v3126+(+2);
	i2 v3128 = *(i2*)(intptr_t)v3127;
	*(i2*)(intptr_t)(ws+4256) = v3128;
	i8 v3129 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3129)();

	i8 v3130 = (i8)(intptr_t)c02_s0110;
	*(i8*)(intptr_t)(ws+4320) = v3130;
	i8 v3131 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3131)();

}
const i1 c02_s0111[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
	void f103_E_labelref(void);
const i1 c02_s0112[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// BranchConstant workspace at ws+4224 length ws+16
void f182_BranchConstant(void) {

	i8 v3132 = (i8)(intptr_t)c02_s0111;
	*(i8*)(intptr_t)(ws+4320) = v3132;
	i8 v3133 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3133)();

	i8 v3134 = (i8)(intptr_t)(ws+4232);
	i4 v3135 = *(i4*)(intptr_t)v3134;
	i8 v3136 = (i8)(intptr_t)(ws+4236);
	i4 v3137 = *(i4*)(intptr_t)v3136;
	if (v3135==v3137) goto c02_0265; else goto c02_0266;

c02_0265:;

	i8 v3138 = (i8)(intptr_t)(ws+4224);
	i8 v3139 = *(i8*)(intptr_t)v3138;
	i2 v3140 = *(i2*)(intptr_t)v3139;
	*(i2*)(intptr_t)(ws+4256) = v3140;
	i8 v3141 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3141)();

	goto c02_0262;

c02_0266:;

	i8 v3142 = (i8)(intptr_t)(ws+4224);
	i8 v3143 = *(i8*)(intptr_t)v3142;
	i8 v3144 = v3143+(+2);
	i2 v3145 = *(i2*)(intptr_t)v3144;
	*(i2*)(intptr_t)(ws+4256) = v3145;
	i8 v3146 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3146)();

c02_0262:;

	i8 v3147 = (i8)(intptr_t)c02_s0112;
	*(i8*)(intptr_t)(ws+4320) = v3147;
	i8 v3148 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3148)();

}
const i1 c02_s0113[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0114[] = { 0x20,0x21,0x3d,0x20,0 };
	void f92_E(void);
	void f98_E_i32(void);
const i1 c02_s0115[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s0116[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Whencase workspace at ws+4224 length ws+8
void f183_Whencase(void) {

	i8 v3149 = (i8)(intptr_t)(ws+3704);
	i8 v3150 = (i8)(intptr_t)(ws+3832);
	i1 v3151 = *(i1*)(intptr_t)v3150;
	i1 v3152 = v3151+(-1);
	i8 v3153 = v3152;
	i1 v3154 = (i1)+1;
	i8 v3155 = ((i8)v3153)<<v3154;
	i8 v3156 = v3149+v3155;
	i2 v3157 = *(i2*)(intptr_t)v3156;
	i8 v3158 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v3158 = v3157;

	i8 v3159 = (i8)(intptr_t)c02_s0113;
	*(i8*)(intptr_t)(ws+4320) = v3159;
	i8 v3160 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3160)();

	i8 v3161 = (i8)(intptr_t)(ws+4230);
	i2 v3162 = *(i2*)(intptr_t)v3161;
	*(i2*)(intptr_t)(ws+4272) = v3162;
	i8 v3163 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3163)();

	i8 v3164 = (i8)(intptr_t)c02_s0114;
	*(i8*)(intptr_t)(ws+4320) = v3164;
	i8 v3165 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3165)();

	i8 v3166 = (i8)(intptr_t)(ws+4224);
	i4 v3167 = *(i4*)(intptr_t)v3166;
	*(i4*)(intptr_t)(ws+4256) = v3167;
	i8 v3168 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v3168)();

	i8 v3169 = (i8)(intptr_t)c02_s0115;
	*(i8*)(intptr_t)(ws+4320) = v3169;
	i8 v3170 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3170)();

	i8 v3171 = (i8)(intptr_t)(ws+4228);
	i2 v3172 = *(i2*)(intptr_t)v3171;
	*(i2*)(intptr_t)(ws+4256) = v3172;
	i8 v3173 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3173)();

	i8 v3174 = (i8)(intptr_t)c02_s0116;
	*(i8*)(intptr_t)(ws+4320) = v3174;
	i8 v3175 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3175)();

}
	void f163_Pop(void);
	void f161_Push(void);
const i1 c02_s0117[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s0118[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0119[] = { 0x20,0x3d,0x20,0 };
	void f92_E(void);
const i1 c02_s011a[] = { 0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s011b[] = { 0x29,0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s011c[] = { 0x29,0 };
	void f92_E(void);
const i1 c02_s011d[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s011e[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Cast workspace at ws+4224 length ws+12
void f184_Cast(void) {

	i8 v3176 = (i8)(intptr_t)(f163_Pop);

	((void(*)(void))(intptr_t)v3176)();

	i2 v3177 = *(i2*)(intptr_t)(ws+4264);
	i8 v3178 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v3178 = v3177;

	i8 v3179 = (i8)(intptr_t)(ws+4228);
	i2 v3180 = *(i2*)(intptr_t)v3179;
	i8 v3181 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v3181 = v3180;

	i8 v3182 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v3182)();

	i2 v3183 = *(i2*)(intptr_t)(ws+4264);
	i8 v3184 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v3184 = v3183;

	i8 v3185 = (i8)(intptr_t)(ws+4232);
	i2 v3186 = *(i2*)(intptr_t)v3185;
	i8 v3187 = (i8)(intptr_t)(ws+4234);
	*(i2*)(intptr_t)v3187 = v3186;

	i8 v3188 = (i8)(intptr_t)c02_s0117;
	*(i8*)(intptr_t)(ws+4320) = v3188;
	i8 v3189 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3189)();

	i8 v3190 = (i8)(intptr_t)(ws+4225);
	i1 v3191 = *(i1*)(intptr_t)v3190;
	*(i1*)(intptr_t)(ws+4264) = v3191;
	i8 v3192 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3192)();

	i8 v3193 = (i8)(intptr_t)c02_s0118;
	*(i8*)(intptr_t)(ws+4320) = v3193;
	i8 v3194 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3194)();

	i8 v3195 = (i8)(intptr_t)(ws+4234);
	i2 v3196 = *(i2*)(intptr_t)v3195;
	*(i2*)(intptr_t)(ws+4272) = v3196;
	i8 v3197 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3197)();

	i8 v3198 = (i8)(intptr_t)c02_s0119;
	*(i8*)(intptr_t)(ws+4320) = v3198;
	i8 v3199 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3199)();

	i8 v3200 = (i8)(intptr_t)(ws+4226);
	i1 v3201 = *(i1*)(intptr_t)v3200;
	i1 v3202 = (i1)+0;
	if (v3201==v3202) goto c02_026b; else goto c02_026a;

c02_026a:;

	i8 v3203 = (i8)(intptr_t)c02_s011a;
	*(i8*)(intptr_t)(ws+4320) = v3203;
	i8 v3204 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3204)();

	i8 v3205 = (i8)(intptr_t)(ws+4225);
	i1 v3206 = *(i1*)(intptr_t)v3205;
	*(i1*)(intptr_t)(ws+4264) = v3206;
	i8 v3207 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3207)();

	i8 v3208 = (i8)(intptr_t)c02_s011b;
	*(i8*)(intptr_t)(ws+4320) = v3208;
	i8 v3209 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3209)();

	i8 v3210 = (i8)(intptr_t)(ws+4224);
	i1 v3211 = *(i1*)(intptr_t)v3210;
	*(i1*)(intptr_t)(ws+4264) = v3211;
	i8 v3212 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3212)();

	i8 v3213 = (i8)(intptr_t)c02_s011c;
	*(i8*)(intptr_t)(ws+4320) = v3213;
	i8 v3214 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3214)();

c02_026b:;

c02_0267:;

	i8 v3215 = (i8)(intptr_t)c02_s011d;
	*(i8*)(intptr_t)(ws+4320) = v3215;
	i8 v3216 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3216)();

	i8 v3217 = (i8)(intptr_t)(ws+4230);
	i2 v3218 = *(i2*)(intptr_t)v3217;
	*(i2*)(intptr_t)(ws+4272) = v3218;
	i8 v3219 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3219)();

	i8 v3220 = (i8)(intptr_t)c02_s011e;
	*(i8*)(intptr_t)(ws+4320) = v3220;
	i8 v3221 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3221)();

}
	void f106_EmitterOpenStream(void);
const i1 c02_s011f[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f83_E_b8(void);
	void f101_E_h16(void);
const i1 c02_s0120[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f92_E(void);
	void f87_E_comma(void);
const i1 c02_s0121[] = { 0x30,0x78,0 };
	void f92_E(void);
	void f100_E_h8(void);
	void f87_E_comma(void);
const i1 c02_s0122[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };
	void f92_E(void);
	void f107_EmitterCloseStream(void);

// E_string workspace at ws+4232 length ws+12
void f185_E_string(void) {

	i8 v3224 = (i8)(intptr_t)(ws+3836);
	i2 v3225 = *(i2*)(intptr_t)v3224;
	i8 v3226 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v3226 = v3225;

	i8 v3227 = (i8)(intptr_t)(ws+3836);
	i2 v3228 = *(i2*)(intptr_t)v3227;
	i2 v3229 = v3228+(+1);
	i8 v3230 = (i8)(intptr_t)(ws+3836);
	*(i2*)(intptr_t)v3230 = v3229;

	i8 v3231 = (i8)(intptr_t)(ws+40);
	i8 v3232 = *(i8*)(intptr_t)v3231;
	*(i8*)(intptr_t)(ws+4248) = v3232;
	i8 v3233 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(void))(intptr_t)v3233)();

	i8 v3234 = (i8)(intptr_t)c02_s011f;
	*(i8*)(intptr_t)(ws+4320) = v3234;
	i8 v3235 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3235)();

	i1 v3236 = (i1)+3;
	*(i1*)(intptr_t)(ws+4336) = v3236;
	i8 v3237 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3237)();

	i1 v3238 = (i1)+115;
	*(i1*)(intptr_t)(ws+4336) = v3238;
	i8 v3239 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3239)();

	i8 v3240 = (i8)(intptr_t)(ws+4240);
	i2 v3241 = *(i2*)(intptr_t)v3240;
	*(i2*)(intptr_t)(ws+4272) = v3241;
	i8 v3242 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(void))(intptr_t)v3242)();

	i8 v3243 = (i8)(intptr_t)c02_s0120;
	*(i8*)(intptr_t)(ws+4320) = v3243;
	i8 v3244 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3244)();

	i1 v3245 = (i1)+1;
	i8 v3246 = (i8)(intptr_t)(ws+4242);
	*(i1*)(intptr_t)v3246 = v3245;

c02_026c:;

	i8 v3247 = (i8)(intptr_t)(ws+4232);
	i8 v3248 = *(i8*)(intptr_t)v3247;
	i1 v3249 = *(i1*)(intptr_t)v3248;
	i8 v3250 = (i8)(intptr_t)(ws+4243);
	*(i1*)(intptr_t)v3250 = v3249;

	i8 v3251 = (i8)(intptr_t)(ws+4232);
	i8 v3252 = *(i8*)(intptr_t)v3251;
	i8 v3253 = v3252+(+1);
	i8 v3254 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v3254 = v3253;

	i8 v3255 = (i8)(intptr_t)(ws+4243);
	i1 v3256 = *(i1*)(intptr_t)v3255;
	i1 v3257 = (i1)+0;
	if (v3256==v3257) goto c02_0271; else goto c02_0272;

c02_0271:;

	goto c02_026d;

c02_0272:;

c02_026e:;

	i8 v3258 = (i8)(intptr_t)(ws+4242);
	i1 v3259 = *(i1*)(intptr_t)v3258;
	i1 v3260 = (i1)+0;
	if (v3259==v3260) goto c02_0276; else goto c02_0277;

c02_0276:;

	i8 v3261 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3261)();

c02_0277:;

c02_0273:;

	i1 v3262 = (i1)+0;
	i8 v3263 = (i8)(intptr_t)(ws+4242);
	*(i1*)(intptr_t)v3263 = v3262;

	i8 v3264 = (i8)(intptr_t)c02_s0121;
	*(i8*)(intptr_t)(ws+4320) = v3264;
	i8 v3265 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3265)();

	i8 v3266 = (i8)(intptr_t)(ws+4243);
	i1 v3267 = *(i1*)(intptr_t)v3266;
	*(i1*)(intptr_t)(ws+4248) = v3267;
	i8 v3268 = (i8)(intptr_t)(f100_E_h8);

	((void(*)(void))(intptr_t)v3268)();

	goto c02_026c;

c02_026d:;

	i8 v3269 = (i8)(intptr_t)(ws+4242);
	i1 v3270 = *(i1*)(intptr_t)v3269;
	i1 v3271 = (i1)+0;
	if (v3270==v3271) goto c02_027b; else goto c02_027c;

c02_027b:;

	i8 v3272 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3272)();

c02_027c:;

c02_0278:;

	i8 v3273 = (i8)(intptr_t)c02_s0122;
	*(i8*)(intptr_t)(ws+4320) = v3273;
	i8 v3274 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3274)();

	i8 v3275 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3275)();

}
const i1 c02_s0123[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f92_E(void);
	void f87_E_comma(void);
const i1 c02_s0124[] = { 0x30,0x78,0 };
	void f92_E(void);
	void f100_E_h8(void);
const i1 c02_s0125[] = { 0x7d,0x7d,0x2c,0x0a,0 };
	void f92_E(void);

// FlushInitialiserBuffer workspace at ws+4240 length ws+1
void f186_FlushInitialiserBuffer(void) {

	i8 v3278 = (i8)(intptr_t)(ws+3846);
	i1 v3279 = *(i1*)(intptr_t)v3278;
	i1 v3280 = (i1)+0;
	if (v3279==v3280) goto c02_0281; else goto c02_0280;

c02_0280:;

	i8 v3281 = (i8)(intptr_t)c02_s0123;
	*(i8*)(intptr_t)(ws+4320) = v3281;
	i8 v3282 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3282)();

	i1 v3283 = (i1)+0;
	i8 v3284 = (i8)(intptr_t)(ws+4240);
	*(i1*)(intptr_t)v3284 = v3283;

c02_0282:;

	i8 v3285 = (i8)(intptr_t)(ws+4240);
	i1 v3286 = *(i1*)(intptr_t)v3285;
	i8 v3287 = (i8)(intptr_t)(ws+3846);
	i1 v3288 = *(i1*)(intptr_t)v3287;
	if (v3286==v3288) goto c02_0287; else goto c02_0286;

c02_0286:;

	i8 v3289 = (i8)(intptr_t)(ws+4240);
	i1 v3290 = *(i1*)(intptr_t)v3289;
	i1 v3291 = (i1)+0;
	if (v3290==v3291) goto c02_028c; else goto c02_028b;

c02_028b:;

	i8 v3292 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3292)();

c02_028c:;

c02_0288:;

	i8 v3293 = (i8)(intptr_t)c02_s0124;
	*(i8*)(intptr_t)(ws+4320) = v3293;
	i8 v3294 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3294)();

	i8 v3295 = (i8)(intptr_t)(ws+3838);
	i8 v3296 = (i8)(intptr_t)(ws+4240);
	i1 v3297 = *(i1*)(intptr_t)v3296;
	i8 v3298 = v3297;
	i8 v3299 = v3295+v3298;
	i1 v3300 = *(i1*)(intptr_t)v3299;
	*(i1*)(intptr_t)(ws+4248) = v3300;
	i8 v3301 = (i8)(intptr_t)(f100_E_h8);

	((void(*)(void))(intptr_t)v3301)();

	i8 v3302 = (i8)(intptr_t)(ws+4240);
	i1 v3303 = *(i1*)(intptr_t)v3302;
	i1 v3304 = v3303+(+1);
	i8 v3305 = (i8)(intptr_t)(ws+4240);
	*(i1*)(intptr_t)v3305 = v3304;

	goto c02_0282;

c02_0287:;

	i8 v3306 = (i8)(intptr_t)c02_s0125;
	*(i8*)(intptr_t)(ws+4320) = v3306;
	i8 v3307 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3307)();

	i1 v3308 = (i1)+0;
	i8 v3309 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3309 = v3308;

c02_0281:;

c02_027d:;

}
	void f186_FlushInitialiserBuffer(void);

// E_bytes workspace at ws+4224 length ws+9
void f187_E_bytes(void) {

c02_028d:;

	i8 v3310 = (i8)(intptr_t)(ws+4232);
	i1 v3311 = *(i1*)(intptr_t)v3310;
	i1 v3312 = (i1)+0;
	if (v3311==v3312) goto c02_0292; else goto c02_0291;

c02_0291:;

	i8 v3313 = (i8)(intptr_t)(ws+4224);
	i8 v3314 = *(i8*)(intptr_t)v3313;
	i1 v3315 = *(i1*)(intptr_t)v3314;
	i8 v3316 = (i8)(intptr_t)(ws+3838);
	i8 v3317 = (i8)(intptr_t)(ws+3846);
	i1 v3318 = *(i1*)(intptr_t)v3317;
	i8 v3319 = v3318;
	i8 v3320 = v3316+v3319;
	*(i1*)(intptr_t)v3320 = v3315;

	i8 v3321 = (i8)(intptr_t)(ws+4224);
	i8 v3322 = *(i8*)(intptr_t)v3321;
	i8 v3323 = v3322+(+1);
	i8 v3324 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v3324 = v3323;

	i8 v3325 = (i8)(intptr_t)(ws+3846);
	i1 v3326 = *(i1*)(intptr_t)v3325;
	i1 v3327 = v3326+(+1);
	i8 v3328 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3328 = v3327;

	i8 v3329 = (i8)(intptr_t)(ws+3846);
	i1 v3330 = *(i1*)(intptr_t)v3329;
	i1 v3331 = (i1)+8;
	if (v3330==v3331) goto c02_0296; else goto c02_0297;

c02_0296:;

	i8 v3332 = (i8)(intptr_t)(f186_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v3332)();

c02_0297:;

c02_0293:;

	i8 v3333 = (i8)(intptr_t)(ws+4232);
	i1 v3334 = *(i1*)(intptr_t)v3333;
	i1 v3335 = v3334+(-1);
	i8 v3336 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v3336 = v3335;

	goto c02_028d;

c02_0292:;

}
	void f66_StartError(void);
const i1 c02_s0126[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
	void f12_print(void);
	void f18_print_i8(void);
	void f67_EndError(void);

// CheckBufferAlignment workspace at ws+4232 length ws+0
void f188_CheckBufferAlignment(void) {

	i8 v3337 = (i8)(intptr_t)(ws+3846);
	i1 v3338 = *(i1*)(intptr_t)v3337;
	i1 v3339 = (i1)+0;
	if (v3338==v3339) goto c02_029c; else goto c02_029b;

c02_029b:;

	i8 v3340 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v3340)();

	i8 v3341 = (i8)(intptr_t)c02_s0126;
	*(i8*)(intptr_t)(ws+4288) = v3341;
	i8 v3342 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v3342)();

	i8 v3343 = (i8)(intptr_t)(ws+3846);
	i1 v3344 = *(i1*)(intptr_t)v3343;
	*(i1*)(intptr_t)(ws+4232) = v3344;
	i8 v3345 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v3345)();

	i8 v3346 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v3346)();

c02_029c:;

c02_0298:;

}
	void f31_MemCopy(void);

// MatchPredicate workspace at ws+4208 length ws+56
void f189_MatchPredicate(void) {

	i8 v3347 = (i8)(intptr_t)(ws+4216);
	i8 v3348 = *(i8*)(intptr_t)v3347;
	*(i8*)(intptr_t)(ws+4264) = v3348;
	i8 v3349 = (i8)+32;
	*(i8*)(intptr_t)(ws+4272) = v3349;
	i8 v3350 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)(ws+4280) = v3350;
	i8 v3351 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v3351)();

	i1 v3352 = (i1)+0;
	i8 v3353 = (i8)(intptr_t)(ws+4224);
	*(i1*)(intptr_t)v3353 = v3352;

	i8 v3354 = (i8)(intptr_t)(ws+4208);
	i1 v3355 = *(i1*)(intptr_t)v3354;

c02_029d:;


}

// Emitter workspace at ws+4224 length ws+0
void f191_Emitter(void) {

}
	void f182_BranchConstant(void);

// emit_0 workspace at ws+4224 length ws+0
void f192_emit_0(void) {

	i8 v3401 = (i8)(intptr_t)(ws+4128);
	i8 v3402 = *(i8*)(intptr_t)v3401;
	i8 v3403 = v3402+(+16);
	i8 v3404 = *(i8*)(intptr_t)v3403;
	*(i8*)(intptr_t)(ws+4224) = v3404;
	i8 v3405 = (i8)(intptr_t)(ws+4152);
	i8 v3406 = *(i8*)(intptr_t)v3405;
	i4 v3407 = *(i4*)(intptr_t)v3406;
	*(i4*)(intptr_t)(ws+4232) = v3407;
	i8 v3408 = (i8)(intptr_t)(ws+4168);
	i8 v3409 = *(i8*)(intptr_t)v3408;
	i4 v3410 = *(i4*)(intptr_t)v3409;
	*(i4*)(intptr_t)(ws+4236) = v3410;
	i8 v3411 = (i8)(intptr_t)(f182_BranchConstant);

	((void(*)(void))(intptr_t)v3411)();

}
	void f172_StoreVV(void);

// emit_1 workspace at ws+4224 length ws+0
void f193_emit_1(void) {

	i1 v3412 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3412;
	i8 v3413 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(void))(intptr_t)v3413)();

}
	void f172_StoreVV(void);

// emit_2 workspace at ws+4224 length ws+0
void f194_emit_2(void) {

	i1 v3414 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3414;
	i8 v3415 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(void))(intptr_t)v3415)();

}
	void f172_StoreVV(void);

// emit_3 workspace at ws+4224 length ws+0
void f195_emit_3(void) {

	i1 v3416 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3416;
	i8 v3417 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(void))(intptr_t)v3417)();

}
	void f172_StoreVV(void);

// emit_4 workspace at ws+4224 length ws+0
void f196_emit_4(void) {

	i1 v3418 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3418;
	i8 v3419 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(void))(intptr_t)v3419)();

}
const i1 c02_s0127[] = { 0x2b,0 };
	void f175_Op2VC(void);

// emit_5 workspace at ws+4224 length ws+0
void f197_emit_5(void) {

	i1 v3420 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3420;
	i8 v3421 = (i8)(intptr_t)c02_s0127;
	*(i8*)(intptr_t)(ws+4232) = v3421;
	i8 v3422 = (i8)(intptr_t)(ws+4168);
	i8 v3423 = *(i8*)(intptr_t)v3422;
	i4 v3424 = *(i4*)(intptr_t)v3423;
	*(i4*)(intptr_t)(ws+4240) = v3424;
	i8 v3425 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3425)();

}
const i1 c02_s0128[] = { 0x2b,0 };
	void f175_Op2VC(void);

// emit_6 workspace at ws+4224 length ws+0
void f198_emit_6(void) {

	i1 v3426 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3426;
	i8 v3427 = (i8)(intptr_t)c02_s0128;
	*(i8*)(intptr_t)(ws+4232) = v3427;
	i8 v3428 = (i8)(intptr_t)(ws+4168);
	i8 v3429 = *(i8*)(intptr_t)v3428;
	i4 v3430 = *(i4*)(intptr_t)v3429;
	*(i4*)(intptr_t)(ws+4240) = v3430;
	i8 v3431 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3431)();

}
const i1 c02_s0129[] = { 0x2b,0 };
	void f175_Op2VC(void);

// emit_7 workspace at ws+4224 length ws+0
void f199_emit_7(void) {

	i1 v3432 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3432;
	i8 v3433 = (i8)(intptr_t)c02_s0129;
	*(i8*)(intptr_t)(ws+4232) = v3433;
	i8 v3434 = (i8)(intptr_t)(ws+4168);
	i8 v3435 = *(i8*)(intptr_t)v3434;
	i4 v3436 = *(i4*)(intptr_t)v3435;
	*(i4*)(intptr_t)(ws+4240) = v3436;
	i8 v3437 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3437)();

}
const i1 c02_s012a[] = { 0x2b,0 };
	void f175_Op2VC(void);

// emit_8 workspace at ws+4224 length ws+0
void f200_emit_8(void) {

	i1 v3438 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3438;
	i8 v3439 = (i8)(intptr_t)c02_s012a;
	*(i8*)(intptr_t)(ws+4232) = v3439;
	i8 v3440 = (i8)(intptr_t)(ws+4168);
	i8 v3441 = *(i8*)(intptr_t)v3440;
	i4 v3442 = *(i4*)(intptr_t)v3441;
	*(i4*)(intptr_t)(ws+4240) = v3442;
	i8 v3443 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3443)();

}
const i1 c02_s012b[] = { 0x2d,0 };
	void f175_Op2VC(void);

// emit_9 workspace at ws+4224 length ws+0
void f201_emit_9(void) {

	i1 v3444 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3444;
	i8 v3445 = (i8)(intptr_t)c02_s012b;
	*(i8*)(intptr_t)(ws+4232) = v3445;
	i8 v3446 = (i8)(intptr_t)(ws+4168);
	i8 v3447 = *(i8*)(intptr_t)v3446;
	i4 v3448 = *(i4*)(intptr_t)v3447;
	*(i4*)(intptr_t)(ws+4240) = v3448;
	i8 v3449 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3449)();

}
const i1 c02_s012c[] = { 0x2d,0 };
	void f175_Op2VC(void);

// emit_10 workspace at ws+4224 length ws+0
void f202_emit_10(void) {

	i1 v3450 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3450;
	i8 v3451 = (i8)(intptr_t)c02_s012c;
	*(i8*)(intptr_t)(ws+4232) = v3451;
	i8 v3452 = (i8)(intptr_t)(ws+4168);
	i8 v3453 = *(i8*)(intptr_t)v3452;
	i4 v3454 = *(i4*)(intptr_t)v3453;
	*(i4*)(intptr_t)(ws+4240) = v3454;
	i8 v3455 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3455)();

}
const i1 c02_s012d[] = { 0x2d,0 };
	void f175_Op2VC(void);

// emit_11 workspace at ws+4224 length ws+0
void f203_emit_11(void) {

	i1 v3456 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3456;
	i8 v3457 = (i8)(intptr_t)c02_s012d;
	*(i8*)(intptr_t)(ws+4232) = v3457;
	i8 v3458 = (i8)(intptr_t)(ws+4168);
	i8 v3459 = *(i8*)(intptr_t)v3458;
	i4 v3460 = *(i4*)(intptr_t)v3459;
	*(i4*)(intptr_t)(ws+4240) = v3460;
	i8 v3461 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3461)();

}
const i1 c02_s012e[] = { 0x2d,0 };
	void f175_Op2VC(void);

// emit_12 workspace at ws+4224 length ws+0
void f204_emit_12(void) {

	i1 v3462 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3462;
	i8 v3463 = (i8)(intptr_t)c02_s012e;
	*(i8*)(intptr_t)(ws+4232) = v3463;
	i8 v3464 = (i8)(intptr_t)(ws+4168);
	i8 v3465 = *(i8*)(intptr_t)v3464;
	i4 v3466 = *(i4*)(intptr_t)v3465;
	*(i4*)(intptr_t)(ws+4240) = v3466;
	i8 v3467 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3467)();

}
const i1 c02_s012f[] = { 0x2a,0 };
	void f175_Op2VC(void);

// emit_13 workspace at ws+4224 length ws+0
void f205_emit_13(void) {

	i1 v3468 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3468;
	i8 v3469 = (i8)(intptr_t)c02_s012f;
	*(i8*)(intptr_t)(ws+4232) = v3469;
	i8 v3470 = (i8)(intptr_t)(ws+4168);
	i8 v3471 = *(i8*)(intptr_t)v3470;
	i4 v3472 = *(i4*)(intptr_t)v3471;
	*(i4*)(intptr_t)(ws+4240) = v3472;
	i8 v3473 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3473)();

}
const i1 c02_s0130[] = { 0x2a,0 };
	void f175_Op2VC(void);

// emit_14 workspace at ws+4224 length ws+0
void f206_emit_14(void) {

	i1 v3474 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3474;
	i8 v3475 = (i8)(intptr_t)c02_s0130;
	*(i8*)(intptr_t)(ws+4232) = v3475;
	i8 v3476 = (i8)(intptr_t)(ws+4168);
	i8 v3477 = *(i8*)(intptr_t)v3476;
	i4 v3478 = *(i4*)(intptr_t)v3477;
	*(i4*)(intptr_t)(ws+4240) = v3478;
	i8 v3479 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3479)();

}
const i1 c02_s0131[] = { 0x2a,0 };
	void f175_Op2VC(void);

// emit_15 workspace at ws+4224 length ws+0
void f207_emit_15(void) {

	i1 v3480 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3480;
	i8 v3481 = (i8)(intptr_t)c02_s0131;
	*(i8*)(intptr_t)(ws+4232) = v3481;
	i8 v3482 = (i8)(intptr_t)(ws+4168);
	i8 v3483 = *(i8*)(intptr_t)v3482;
	i4 v3484 = *(i4*)(intptr_t)v3483;
	*(i4*)(intptr_t)(ws+4240) = v3484;
	i8 v3485 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3485)();

}
const i1 c02_s0132[] = { 0x2a,0 };
	void f175_Op2VC(void);

// emit_16 workspace at ws+4224 length ws+0
void f208_emit_16(void) {

	i1 v3486 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3486;
	i8 v3487 = (i8)(intptr_t)c02_s0132;
	*(i8*)(intptr_t)(ws+4232) = v3487;
	i8 v3488 = (i8)(intptr_t)(ws+4168);
	i8 v3489 = *(i8*)(intptr_t)v3488;
	i4 v3490 = *(i4*)(intptr_t)v3489;
	*(i4*)(intptr_t)(ws+4240) = v3490;
	i8 v3491 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3491)();

}
const i1 c02_s0133[] = { 0x2f,0 };
	void f175_Op2VC(void);

// emit_17 workspace at ws+4224 length ws+0
void f209_emit_17(void) {

	i1 v3492 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3492;
	i8 v3493 = (i8)(intptr_t)c02_s0133;
	*(i8*)(intptr_t)(ws+4232) = v3493;
	i8 v3494 = (i8)(intptr_t)(ws+4168);
	i8 v3495 = *(i8*)(intptr_t)v3494;
	i4 v3496 = *(i4*)(intptr_t)v3495;
	*(i4*)(intptr_t)(ws+4240) = v3496;
	i8 v3497 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3497)();

}
const i1 c02_s0134[] = { 0x2f,0 };
	void f175_Op2VC(void);

// emit_18 workspace at ws+4224 length ws+0
void f210_emit_18(void) {

	i1 v3498 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3498;
	i8 v3499 = (i8)(intptr_t)c02_s0134;
	*(i8*)(intptr_t)(ws+4232) = v3499;
	i8 v3500 = (i8)(intptr_t)(ws+4168);
	i8 v3501 = *(i8*)(intptr_t)v3500;
	i4 v3502 = *(i4*)(intptr_t)v3501;
	*(i4*)(intptr_t)(ws+4240) = v3502;
	i8 v3503 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3503)();

}
const i1 c02_s0135[] = { 0x2f,0 };
	void f175_Op2VC(void);

// emit_19 workspace at ws+4224 length ws+0
void f211_emit_19(void) {

	i1 v3504 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3504;
	i8 v3505 = (i8)(intptr_t)c02_s0135;
	*(i8*)(intptr_t)(ws+4232) = v3505;
	i8 v3506 = (i8)(intptr_t)(ws+4168);
	i8 v3507 = *(i8*)(intptr_t)v3506;
	i4 v3508 = *(i4*)(intptr_t)v3507;
	*(i4*)(intptr_t)(ws+4240) = v3508;
	i8 v3509 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3509)();

}
const i1 c02_s0136[] = { 0x2f,0 };
	void f175_Op2VC(void);

// emit_20 workspace at ws+4224 length ws+0
void f212_emit_20(void) {

	i1 v3510 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3510;
	i8 v3511 = (i8)(intptr_t)c02_s0136;
	*(i8*)(intptr_t)(ws+4232) = v3511;
	i8 v3512 = (i8)(intptr_t)(ws+4168);
	i8 v3513 = *(i8*)(intptr_t)v3512;
	i4 v3514 = *(i4*)(intptr_t)v3513;
	*(i4*)(intptr_t)(ws+4240) = v3514;
	i8 v3515 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3515)();

}
const i1 c02_s0137[] = { 0x25,0 };
	void f175_Op2VC(void);

// emit_21 workspace at ws+4224 length ws+0
void f213_emit_21(void) {

	i1 v3516 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3516;
	i8 v3517 = (i8)(intptr_t)c02_s0137;
	*(i8*)(intptr_t)(ws+4232) = v3517;
	i8 v3518 = (i8)(intptr_t)(ws+4168);
	i8 v3519 = *(i8*)(intptr_t)v3518;
	i4 v3520 = *(i4*)(intptr_t)v3519;
	*(i4*)(intptr_t)(ws+4240) = v3520;
	i8 v3521 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3521)();

}
const i1 c02_s0138[] = { 0x25,0 };
	void f175_Op2VC(void);

// emit_22 workspace at ws+4224 length ws+0
void f214_emit_22(void) {

	i1 v3522 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3522;
	i8 v3523 = (i8)(intptr_t)c02_s0138;
	*(i8*)(intptr_t)(ws+4232) = v3523;
	i8 v3524 = (i8)(intptr_t)(ws+4168);
	i8 v3525 = *(i8*)(intptr_t)v3524;
	i4 v3526 = *(i4*)(intptr_t)v3525;
	*(i4*)(intptr_t)(ws+4240) = v3526;
	i8 v3527 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3527)();

}
const i1 c02_s0139[] = { 0x25,0 };
	void f175_Op2VC(void);

// emit_23 workspace at ws+4224 length ws+0
void f215_emit_23(void) {

	i1 v3528 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3528;
	i8 v3529 = (i8)(intptr_t)c02_s0139;
	*(i8*)(intptr_t)(ws+4232) = v3529;
	i8 v3530 = (i8)(intptr_t)(ws+4168);
	i8 v3531 = *(i8*)(intptr_t)v3530;
	i4 v3532 = *(i4*)(intptr_t)v3531;
	*(i4*)(intptr_t)(ws+4240) = v3532;
	i8 v3533 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3533)();

}
const i1 c02_s013a[] = { 0x25,0 };
	void f175_Op2VC(void);

// emit_24 workspace at ws+4224 length ws+0
void f216_emit_24(void) {

	i1 v3534 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3534;
	i8 v3535 = (i8)(intptr_t)c02_s013a;
	*(i8*)(intptr_t)(ws+4232) = v3535;
	i8 v3536 = (i8)(intptr_t)(ws+4168);
	i8 v3537 = *(i8*)(intptr_t)v3536;
	i4 v3538 = *(i4*)(intptr_t)v3537;
	*(i4*)(intptr_t)(ws+4240) = v3538;
	i8 v3539 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3539)();

}
const i1 c02_s013b[] = { 0x2f,0 };
	void f177_Op2VCSigned(void);

// emit_25 workspace at ws+4224 length ws+0
void f217_emit_25(void) {

	i1 v3540 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3540;
	i8 v3541 = (i8)(intptr_t)c02_s013b;
	*(i8*)(intptr_t)(ws+4232) = v3541;
	i8 v3542 = (i8)(intptr_t)(ws+4168);
	i8 v3543 = *(i8*)(intptr_t)v3542;
	i4 v3544 = *(i4*)(intptr_t)v3543;
	*(i4*)(intptr_t)(ws+4240) = v3544;
	i8 v3545 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3545)();

}
const i1 c02_s013c[] = { 0x2f,0 };
	void f177_Op2VCSigned(void);

// emit_26 workspace at ws+4224 length ws+0
void f218_emit_26(void) {

	i1 v3546 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3546;
	i8 v3547 = (i8)(intptr_t)c02_s013c;
	*(i8*)(intptr_t)(ws+4232) = v3547;
	i8 v3548 = (i8)(intptr_t)(ws+4168);
	i8 v3549 = *(i8*)(intptr_t)v3548;
	i4 v3550 = *(i4*)(intptr_t)v3549;
	*(i4*)(intptr_t)(ws+4240) = v3550;
	i8 v3551 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3551)();

}
const i1 c02_s013d[] = { 0x2f,0 };
	void f177_Op2VCSigned(void);

// emit_27 workspace at ws+4224 length ws+0
void f219_emit_27(void) {

	i1 v3552 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3552;
	i8 v3553 = (i8)(intptr_t)c02_s013d;
	*(i8*)(intptr_t)(ws+4232) = v3553;
	i8 v3554 = (i8)(intptr_t)(ws+4168);
	i8 v3555 = *(i8*)(intptr_t)v3554;
	i4 v3556 = *(i4*)(intptr_t)v3555;
	*(i4*)(intptr_t)(ws+4240) = v3556;
	i8 v3557 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3557)();

}
const i1 c02_s013e[] = { 0x2f,0 };
	void f177_Op2VCSigned(void);

// emit_28 workspace at ws+4224 length ws+0
void f220_emit_28(void) {

	i1 v3558 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3558;
	i8 v3559 = (i8)(intptr_t)c02_s013e;
	*(i8*)(intptr_t)(ws+4232) = v3559;
	i8 v3560 = (i8)(intptr_t)(ws+4168);
	i8 v3561 = *(i8*)(intptr_t)v3560;
	i4 v3562 = *(i4*)(intptr_t)v3561;
	*(i4*)(intptr_t)(ws+4240) = v3562;
	i8 v3563 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3563)();

}
const i1 c02_s013f[] = { 0x25,0 };
	void f177_Op2VCSigned(void);

// emit_29 workspace at ws+4224 length ws+0
void f221_emit_29(void) {

	i1 v3564 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3564;
	i8 v3565 = (i8)(intptr_t)c02_s013f;
	*(i8*)(intptr_t)(ws+4232) = v3565;
	i8 v3566 = (i8)(intptr_t)(ws+4168);
	i8 v3567 = *(i8*)(intptr_t)v3566;
	i4 v3568 = *(i4*)(intptr_t)v3567;
	*(i4*)(intptr_t)(ws+4240) = v3568;
	i8 v3569 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3569)();

}
const i1 c02_s0140[] = { 0x25,0 };
	void f177_Op2VCSigned(void);

// emit_30 workspace at ws+4224 length ws+0
void f222_emit_30(void) {

	i1 v3570 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3570;
	i8 v3571 = (i8)(intptr_t)c02_s0140;
	*(i8*)(intptr_t)(ws+4232) = v3571;
	i8 v3572 = (i8)(intptr_t)(ws+4168);
	i8 v3573 = *(i8*)(intptr_t)v3572;
	i4 v3574 = *(i4*)(intptr_t)v3573;
	*(i4*)(intptr_t)(ws+4240) = v3574;
	i8 v3575 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3575)();

}
const i1 c02_s0141[] = { 0x25,0 };
	void f177_Op2VCSigned(void);

// emit_31 workspace at ws+4224 length ws+0
void f223_emit_31(void) {

	i1 v3576 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3576;
	i8 v3577 = (i8)(intptr_t)c02_s0141;
	*(i8*)(intptr_t)(ws+4232) = v3577;
	i8 v3578 = (i8)(intptr_t)(ws+4168);
	i8 v3579 = *(i8*)(intptr_t)v3578;
	i4 v3580 = *(i4*)(intptr_t)v3579;
	*(i4*)(intptr_t)(ws+4240) = v3580;
	i8 v3581 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3581)();

}
const i1 c02_s0142[] = { 0x25,0 };
	void f177_Op2VCSigned(void);

// emit_32 workspace at ws+4224 length ws+0
void f224_emit_32(void) {

	i1 v3582 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3582;
	i8 v3583 = (i8)(intptr_t)c02_s0142;
	*(i8*)(intptr_t)(ws+4232) = v3583;
	i8 v3584 = (i8)(intptr_t)(ws+4168);
	i8 v3585 = *(i8*)(intptr_t)v3584;
	i4 v3586 = *(i4*)(intptr_t)v3585;
	*(i4*)(intptr_t)(ws+4240) = v3586;
	i8 v3587 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3587)();

}
const i1 c02_s0143[] = { 0x26,0 };
	void f175_Op2VC(void);

// emit_33 workspace at ws+4224 length ws+0
void f225_emit_33(void) {

	i1 v3588 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3588;
	i8 v3589 = (i8)(intptr_t)c02_s0143;
	*(i8*)(intptr_t)(ws+4232) = v3589;
	i8 v3590 = (i8)(intptr_t)(ws+4168);
	i8 v3591 = *(i8*)(intptr_t)v3590;
	i4 v3592 = *(i4*)(intptr_t)v3591;
	*(i4*)(intptr_t)(ws+4240) = v3592;
	i8 v3593 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3593)();

}
const i1 c02_s0144[] = { 0x26,0 };
	void f175_Op2VC(void);

// emit_34 workspace at ws+4224 length ws+0
void f226_emit_34(void) {

	i1 v3594 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3594;
	i8 v3595 = (i8)(intptr_t)c02_s0144;
	*(i8*)(intptr_t)(ws+4232) = v3595;
	i8 v3596 = (i8)(intptr_t)(ws+4168);
	i8 v3597 = *(i8*)(intptr_t)v3596;
	i4 v3598 = *(i4*)(intptr_t)v3597;
	*(i4*)(intptr_t)(ws+4240) = v3598;
	i8 v3599 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3599)();

}
const i1 c02_s0145[] = { 0x26,0 };
	void f175_Op2VC(void);

// emit_35 workspace at ws+4224 length ws+0
void f227_emit_35(void) {

	i1 v3600 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3600;
	i8 v3601 = (i8)(intptr_t)c02_s0145;
	*(i8*)(intptr_t)(ws+4232) = v3601;
	i8 v3602 = (i8)(intptr_t)(ws+4168);
	i8 v3603 = *(i8*)(intptr_t)v3602;
	i4 v3604 = *(i4*)(intptr_t)v3603;
	*(i4*)(intptr_t)(ws+4240) = v3604;
	i8 v3605 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3605)();

}
const i1 c02_s0146[] = { 0x26,0 };
	void f175_Op2VC(void);

// emit_36 workspace at ws+4224 length ws+0
void f228_emit_36(void) {

	i1 v3606 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3606;
	i8 v3607 = (i8)(intptr_t)c02_s0146;
	*(i8*)(intptr_t)(ws+4232) = v3607;
	i8 v3608 = (i8)(intptr_t)(ws+4168);
	i8 v3609 = *(i8*)(intptr_t)v3608;
	i4 v3610 = *(i4*)(intptr_t)v3609;
	*(i4*)(intptr_t)(ws+4240) = v3610;
	i8 v3611 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3611)();

}
const i1 c02_s0147[] = { 0x7c,0 };
	void f175_Op2VC(void);

// emit_37 workspace at ws+4224 length ws+0
void f229_emit_37(void) {

	i1 v3612 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3612;
	i8 v3613 = (i8)(intptr_t)c02_s0147;
	*(i8*)(intptr_t)(ws+4232) = v3613;
	i8 v3614 = (i8)(intptr_t)(ws+4168);
	i8 v3615 = *(i8*)(intptr_t)v3614;
	i4 v3616 = *(i4*)(intptr_t)v3615;
	*(i4*)(intptr_t)(ws+4240) = v3616;
	i8 v3617 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3617)();

}
const i1 c02_s0148[] = { 0x7c,0 };
	void f175_Op2VC(void);

// emit_38 workspace at ws+4224 length ws+0
void f230_emit_38(void) {

	i1 v3618 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3618;
	i8 v3619 = (i8)(intptr_t)c02_s0148;
	*(i8*)(intptr_t)(ws+4232) = v3619;
	i8 v3620 = (i8)(intptr_t)(ws+4168);
	i8 v3621 = *(i8*)(intptr_t)v3620;
	i4 v3622 = *(i4*)(intptr_t)v3621;
	*(i4*)(intptr_t)(ws+4240) = v3622;
	i8 v3623 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3623)();

}
const i1 c02_s0149[] = { 0x7c,0 };
	void f175_Op2VC(void);

// emit_39 workspace at ws+4224 length ws+0
void f231_emit_39(void) {

	i1 v3624 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3624;
	i8 v3625 = (i8)(intptr_t)c02_s0149;
	*(i8*)(intptr_t)(ws+4232) = v3625;
	i8 v3626 = (i8)(intptr_t)(ws+4168);
	i8 v3627 = *(i8*)(intptr_t)v3626;
	i4 v3628 = *(i4*)(intptr_t)v3627;
	*(i4*)(intptr_t)(ws+4240) = v3628;
	i8 v3629 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3629)();

}
const i1 c02_s014a[] = { 0x7c,0 };
	void f175_Op2VC(void);

// emit_40 workspace at ws+4224 length ws+0
void f232_emit_40(void) {

	i1 v3630 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3630;
	i8 v3631 = (i8)(intptr_t)c02_s014a;
	*(i8*)(intptr_t)(ws+4232) = v3631;
	i8 v3632 = (i8)(intptr_t)(ws+4168);
	i8 v3633 = *(i8*)(intptr_t)v3632;
	i4 v3634 = *(i4*)(intptr_t)v3633;
	*(i4*)(intptr_t)(ws+4240) = v3634;
	i8 v3635 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3635)();

}
const i1 c02_s014b[] = { 0x5e,0 };
	void f175_Op2VC(void);

// emit_41 workspace at ws+4224 length ws+0
void f233_emit_41(void) {

	i1 v3636 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3636;
	i8 v3637 = (i8)(intptr_t)c02_s014b;
	*(i8*)(intptr_t)(ws+4232) = v3637;
	i8 v3638 = (i8)(intptr_t)(ws+4168);
	i8 v3639 = *(i8*)(intptr_t)v3638;
	i4 v3640 = *(i4*)(intptr_t)v3639;
	*(i4*)(intptr_t)(ws+4240) = v3640;
	i8 v3641 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3641)();

}
const i1 c02_s014c[] = { 0x5e,0 };
	void f175_Op2VC(void);

// emit_42 workspace at ws+4224 length ws+0
void f234_emit_42(void) {

	i1 v3642 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3642;
	i8 v3643 = (i8)(intptr_t)c02_s014c;
	*(i8*)(intptr_t)(ws+4232) = v3643;
	i8 v3644 = (i8)(intptr_t)(ws+4168);
	i8 v3645 = *(i8*)(intptr_t)v3644;
	i4 v3646 = *(i4*)(intptr_t)v3645;
	*(i4*)(intptr_t)(ws+4240) = v3646;
	i8 v3647 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3647)();

}
const i1 c02_s014d[] = { 0x5e,0 };
	void f175_Op2VC(void);

// emit_43 workspace at ws+4224 length ws+0
void f235_emit_43(void) {

	i1 v3648 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3648;
	i8 v3649 = (i8)(intptr_t)c02_s014d;
	*(i8*)(intptr_t)(ws+4232) = v3649;
	i8 v3650 = (i8)(intptr_t)(ws+4168);
	i8 v3651 = *(i8*)(intptr_t)v3650;
	i4 v3652 = *(i4*)(intptr_t)v3651;
	*(i4*)(intptr_t)(ws+4240) = v3652;
	i8 v3653 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3653)();

}
const i1 c02_s014e[] = { 0x5e,0 };
	void f175_Op2VC(void);

// emit_44 workspace at ws+4224 length ws+0
void f236_emit_44(void) {

	i1 v3654 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3654;
	i8 v3655 = (i8)(intptr_t)c02_s014e;
	*(i8*)(intptr_t)(ws+4232) = v3655;
	i8 v3656 = (i8)(intptr_t)(ws+4168);
	i8 v3657 = *(i8*)(intptr_t)v3656;
	i4 v3658 = *(i4*)(intptr_t)v3657;
	*(i4*)(intptr_t)(ws+4240) = v3658;
	i8 v3659 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3659)();

}
	void f103_E_labelref(void);
const i1 c02_s014f[] = { 0x3a,0x3b,0x0a,0 };
	void f92_E(void);

// emit_47 workspace at ws+4224 length ws+0
void f237_emit_47(void) {

	i8 v3660 = (i8)(intptr_t)(ws+4136);
	i8 v3661 = *(i8*)(intptr_t)v3660;
	i2 v3662 = *(i2*)(intptr_t)v3661;
	*(i2*)(intptr_t)(ws+4256) = v3662;
	i8 v3663 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3663)();

	i8 v3664 = (i8)(intptr_t)c02_s014f;
	*(i8*)(intptr_t)(ws+4320) = v3664;
	i8 v3665 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3665)();

}
const i1 c02_s0150[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s0151[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// emit_48 workspace at ws+4224 length ws+0
void f238_emit_48(void) {

	i8 v3666 = (i8)(intptr_t)c02_s0150;
	*(i8*)(intptr_t)(ws+4320) = v3666;
	i8 v3667 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3667)();

	i8 v3668 = (i8)(intptr_t)(ws+4136);
	i8 v3669 = *(i8*)(intptr_t)v3668;
	i2 v3670 = *(i2*)(intptr_t)v3669;
	*(i2*)(intptr_t)(ws+4256) = v3670;
	i8 v3671 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3671)();

	i8 v3672 = (i8)(intptr_t)c02_s0151;
	*(i8*)(intptr_t)(ws+4320) = v3672;
	i8 v3673 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3673)();

}
const i1 c02_s0152[] = { 0x09,0x72,0x65,0x74,0x75,0x72,0x6e,0x3b,0x0a,0 };
	void f92_E(void);

// emit_49 workspace at ws+4224 length ws+0
void f239_emit_49(void) {

	i8 v3674 = (i8)(intptr_t)c02_s0152;
	*(i8*)(intptr_t)(ws+4320) = v3674;
	i8 v3675 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3675)();

}
	void f106_EmitterOpenStream(void);
const i1 c02_s0153[] = { 0x0a,0x2f,0x2f,0x20,0 };
	void f92_E(void);
	void f92_E(void);
const i1 c02_s0154[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f84_E_b16(void);
	void f83_E_b8(void);
	void f84_E_b16(void);
const i1 c02_s0155[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f84_E_b16(void);
	void f83_E_b8(void);
const i1 c02_s0156[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
	void f92_E(void);
	void f104_E_subref(void);
const i1 c02_s0157[] = { 0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
	void f92_E(void);

// emit_50 workspace at ws+4224 length ws+0
void f240_emit_50(void) {

	i8 v3676 = (i8)(intptr_t)(ws+40);
	i8 v3677 = *(i8*)(intptr_t)v3676;
	*(i8*)(intptr_t)(ws+4248) = v3677;
	i8 v3678 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(void))(intptr_t)v3678)();

	i8 v3679 = (i8)(intptr_t)c02_s0153;
	*(i8*)(intptr_t)(ws+4320) = v3679;
	i8 v3680 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3680)();

	i8 v3681 = (i8)(intptr_t)(ws+40);
	i8 v3682 = *(i8*)(intptr_t)v3681;
	i8 v3683 = *(i8*)(intptr_t)v3682;
	*(i8*)(intptr_t)(ws+4320) = v3683;
	i8 v3684 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3684)();

	i8 v3685 = (i8)(intptr_t)c02_s0154;
	*(i8*)(intptr_t)(ws+4320) = v3685;
	i8 v3686 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3686)();

	i1 v3687 = (i1)+2;
	*(i1*)(intptr_t)(ws+4336) = v3687;
	i8 v3688 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3688)();

	i8 v3689 = (i8)(intptr_t)(ws+40);
	i8 v3690 = *(i8*)(intptr_t)v3689;
	i8 v3691 = v3690+(+8);
	i2 v3692 = *(i2*)(intptr_t)v3691;
	*(i2*)(intptr_t)(ws+4272) = v3692;
	i8 v3693 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v3693)();

	i1 v3694 = (i1)+0;
	*(i1*)(intptr_t)(ws+4336) = v3694;
	i8 v3695 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3695)();

	i2 v3696 = (i2)+0;
	*(i2*)(intptr_t)(ws+4272) = v3696;
	i8 v3697 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v3697)();

	i8 v3698 = (i8)(intptr_t)c02_s0155;
	*(i8*)(intptr_t)(ws+4320) = v3698;
	i8 v3699 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3699)();

	i1 v3700 = (i1)+5;
	*(i1*)(intptr_t)(ws+4336) = v3700;
	i8 v3701 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3701)();

	i8 v3702 = (i8)(intptr_t)(ws+40);
	i8 v3703 = *(i8*)(intptr_t)v3702;
	i8 v3704 = v3703+(+8);
	i2 v3705 = *(i2*)(intptr_t)v3704;
	*(i2*)(intptr_t)(ws+4272) = v3705;
	i8 v3706 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v3706)();

	i1 v3707 = (i1)+0;
	*(i1*)(intptr_t)(ws+4336) = v3707;
	i8 v3708 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3708)();

	i8 v3709 = (i8)(intptr_t)c02_s0156;
	*(i8*)(intptr_t)(ws+4320) = v3709;
	i8 v3710 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3710)();

	i8 v3711 = (i8)(intptr_t)(ws+40);
	i8 v3712 = *(i8*)(intptr_t)v3711;
	*(i8*)(intptr_t)(ws+4240) = v3712;
	i8 v3713 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(void))(intptr_t)v3713)();

	i8 v3714 = (i8)(intptr_t)c02_s0157;
	*(i8*)(intptr_t)(ws+4320) = v3714;
	i8 v3715 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3715)();

}
const i1 c02_s0158[] = { 0x7d,0x0a,0 };
	void f92_E(void);
	void f107_EmitterCloseStream(void);

// emit_51 workspace at ws+4224 length ws+0
void f241_emit_51(void) {

	i8 v3716 = (i8)(intptr_t)c02_s0158;
	*(i8*)(intptr_t)(ws+4320) = v3716;
	i8 v3717 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3717)();

	i8 v3718 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3718)();

}
	void f168_Call(void);

// emit_52 workspace at ws+4224 length ws+0
void f242_emit_52(void) {

	i8 v3719 = (i8)(intptr_t)(ws+4136);
	i8 v3720 = *(i8*)(intptr_t)v3719;
	i8 v3721 = *(i8*)(intptr_t)v3720;
	i8 v3722 = v3721+(+8);
	i2 v3723 = *(i2*)(intptr_t)v3722;
	*(i2*)(intptr_t)(ws+4224) = v3723;
	i8 v3724 = (i8)(intptr_t)(f168_Call);

	((void(*)(void))(intptr_t)v3724)();

}
	void f169_PokeArg(void);

// emit_54 workspace at ws+4224 length ws+0
void f243_emit_54(void) {

	i1 v3725 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3725;
	i8 v3726 = (i8)(intptr_t)(ws+4136);
	i8 v3727 = *(i8*)(intptr_t)v3726;
	i8 v3728 = v3727+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3728;
	i8 v3729 = (i8)(intptr_t)(f169_PokeArg);

	((void(*)(void))(intptr_t)v3729)();

}
	void f169_PokeArg(void);

// emit_55 workspace at ws+4224 length ws+0
void f244_emit_55(void) {

	i1 v3730 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3730;
	i8 v3731 = (i8)(intptr_t)(ws+4136);
	i8 v3732 = *(i8*)(intptr_t)v3731;
	i8 v3733 = v3732+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3733;
	i8 v3734 = (i8)(intptr_t)(f169_PokeArg);

	((void(*)(void))(intptr_t)v3734)();

}
	void f169_PokeArg(void);

// emit_56 workspace at ws+4224 length ws+0
void f245_emit_56(void) {

	i1 v3735 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3735;
	i8 v3736 = (i8)(intptr_t)(ws+4136);
	i8 v3737 = *(i8*)(intptr_t)v3736;
	i8 v3738 = v3737+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3738;
	i8 v3739 = (i8)(intptr_t)(f169_PokeArg);

	((void(*)(void))(intptr_t)v3739)();

}
	void f169_PokeArg(void);

// emit_57 workspace at ws+4224 length ws+0
void f246_emit_57(void) {

	i1 v3740 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3740;
	i8 v3741 = (i8)(intptr_t)(ws+4136);
	i8 v3742 = *(i8*)(intptr_t)v3741;
	i8 v3743 = v3742+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3743;
	i8 v3744 = (i8)(intptr_t)(f169_PokeArg);

	((void(*)(void))(intptr_t)v3744)();

}
	void f170_PeekArg(void);

// emit_58 workspace at ws+4224 length ws+0
void f247_emit_58(void) {

	i1 v3745 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3745;
	i8 v3746 = (i8)(intptr_t)(ws+4136);
	i8 v3747 = *(i8*)(intptr_t)v3746;
	i8 v3748 = v3747+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3748;
	i8 v3749 = (i8)(intptr_t)(f170_PeekArg);

	((void(*)(void))(intptr_t)v3749)();

}
	void f170_PeekArg(void);

// emit_59 workspace at ws+4224 length ws+0
void f248_emit_59(void) {

	i1 v3750 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3750;
	i8 v3751 = (i8)(intptr_t)(ws+4136);
	i8 v3752 = *(i8*)(intptr_t)v3751;
	i8 v3753 = v3752+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3753;
	i8 v3754 = (i8)(intptr_t)(f170_PeekArg);

	((void(*)(void))(intptr_t)v3754)();

}
	void f170_PeekArg(void);

// emit_60 workspace at ws+4224 length ws+0
void f249_emit_60(void) {

	i1 v3755 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3755;
	i8 v3756 = (i8)(intptr_t)(ws+4136);
	i8 v3757 = *(i8*)(intptr_t)v3756;
	i8 v3758 = v3757+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3758;
	i8 v3759 = (i8)(intptr_t)(f170_PeekArg);

	((void(*)(void))(intptr_t)v3759)();

}
	void f170_PeekArg(void);

// emit_61 workspace at ws+4224 length ws+0
void f250_emit_61(void) {

	i1 v3760 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3760;
	i8 v3761 = (i8)(intptr_t)(ws+4136);
	i8 v3762 = *(i8*)(intptr_t)v3761;
	i8 v3763 = v3762+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3763;
	i8 v3764 = (i8)(intptr_t)(f170_PeekArg);

	((void(*)(void))(intptr_t)v3764)();

}
	void f171_LoadConstant(void);

// emit_62 workspace at ws+4224 length ws+0
void f251_emit_62(void) {

	i1 v3765 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3765;
	i8 v3766 = (i8)(intptr_t)(ws+4136);
	i8 v3767 = *(i8*)(intptr_t)v3766;
	i4 v3768 = *(i4*)(intptr_t)v3767;
	*(i4*)(intptr_t)(ws+4228) = v3768;
	i8 v3769 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(void))(intptr_t)v3769)();

}
	void f171_LoadConstant(void);

// emit_63 workspace at ws+4224 length ws+0
void f252_emit_63(void) {

	i1 v3770 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3770;
	i8 v3771 = (i8)(intptr_t)(ws+4136);
	i8 v3772 = *(i8*)(intptr_t)v3771;
	i4 v3773 = *(i4*)(intptr_t)v3772;
	*(i4*)(intptr_t)(ws+4228) = v3773;
	i8 v3774 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(void))(intptr_t)v3774)();

}
	void f171_LoadConstant(void);

// emit_64 workspace at ws+4224 length ws+0
void f253_emit_64(void) {

	i1 v3775 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3775;
	i8 v3776 = (i8)(intptr_t)(ws+4136);
	i8 v3777 = *(i8*)(intptr_t)v3776;
	i4 v3778 = *(i4*)(intptr_t)v3777;
	*(i4*)(intptr_t)(ws+4228) = v3778;
	i8 v3779 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(void))(intptr_t)v3779)();

}
	void f171_LoadConstant(void);

// emit_65 workspace at ws+4224 length ws+0
void f254_emit_65(void) {

	i1 v3780 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3780;
	i8 v3781 = (i8)(intptr_t)(ws+4136);
	i8 v3782 = *(i8*)(intptr_t)v3781;
	i4 v3783 = *(i4*)(intptr_t)v3782;
	*(i4*)(intptr_t)(ws+4228) = v3783;
	i8 v3784 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(void))(intptr_t)v3784)();

}
	void f161_Push(void);
const i1 c02_s0159[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s015a[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f157_E_symref(void);
const i1 c02_s015b[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// emit_66 workspace at ws+4224 length ws+4
void f255_emit_66(void) {

	i8 v3785 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v3785)();

	i2 v3786 = *(i2*)(intptr_t)(ws+4264);
	i8 v3787 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v3787 = v3786;

	i8 v3788 = (i8)(intptr_t)(ws+4224);
	i2 v3789 = *(i2*)(intptr_t)v3788;
	i8 v3790 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v3790 = v3789;

	i8 v3791 = (i8)(intptr_t)c02_s0159;
	*(i8*)(intptr_t)(ws+4320) = v3791;
	i8 v3792 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3792)();

	i8 v3793 = (i8)(intptr_t)(ws+4226);
	i2 v3794 = *(i2*)(intptr_t)v3793;
	*(i2*)(intptr_t)(ws+4272) = v3794;
	i8 v3795 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3795)();

	i8 v3796 = (i8)(intptr_t)c02_s015a;
	*(i8*)(intptr_t)(ws+4320) = v3796;
	i8 v3797 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3797)();

	i8 v3798 = (i8)(intptr_t)(ws+4136);
	i8 v3799 = *(i8*)(intptr_t)v3798;
	*(i8*)(intptr_t)(ws+4248) = v3799;
	i8 v3800 = (i8)(intptr_t)(ws+4136);
	i8 v3801 = *(i8*)(intptr_t)v3800;
	i8 v3802 = v3801+(+16);
	i2 v3803 = *(i2*)(intptr_t)v3802;
	*(i2*)(intptr_t)(ws+4256) = v3803;
	i8 v3804 = (i8)(intptr_t)(f157_E_symref);

	((void(*)(void))(intptr_t)v3804)();

	i8 v3805 = (i8)(intptr_t)c02_s015b;
	*(i8*)(intptr_t)(ws+4320) = v3805;
	i8 v3806 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3806)();

}
	void f161_Push(void);
const i1 c02_s015c[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s015d[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f156_E_subref_sig(void);
const i1 c02_s015e[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// emit_67 workspace at ws+4224 length ws+4
void f256_emit_67(void) {

	i8 v3807 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v3807)();

	i2 v3808 = *(i2*)(intptr_t)(ws+4264);
	i8 v3809 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v3809 = v3808;

	i8 v3810 = (i8)(intptr_t)(ws+4224);
	i2 v3811 = *(i2*)(intptr_t)v3810;
	i8 v3812 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v3812 = v3811;

	i8 v3813 = (i8)(intptr_t)c02_s015c;
	*(i8*)(intptr_t)(ws+4320) = v3813;
	i8 v3814 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3814)();

	i8 v3815 = (i8)(intptr_t)(ws+4226);
	i2 v3816 = *(i2*)(intptr_t)v3815;
	*(i2*)(intptr_t)(ws+4272) = v3816;
	i8 v3817 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3817)();

	i8 v3818 = (i8)(intptr_t)c02_s015d;
	*(i8*)(intptr_t)(ws+4320) = v3818;
	i8 v3819 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3819)();

	i8 v3820 = (i8)(intptr_t)(ws+4136);
	i8 v3821 = *(i8*)(intptr_t)v3820;
	i8 v3822 = *(i8*)(intptr_t)v3821;
	*(i8*)(intptr_t)(ws+4232) = v3822;
	i8 v3823 = (i8)(intptr_t)(f156_E_subref_sig);

	((void(*)(void))(intptr_t)v3823)();

	i8 v3824 = (i8)(intptr_t)c02_s015e;
	*(i8*)(intptr_t)(ws+4320) = v3824;
	i8 v3825 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3825)();

}
	void f173_LoadVV(void);

// emit_68 workspace at ws+4224 length ws+0
void f257_emit_68(void) {

	i1 v3826 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3826;
	i8 v3827 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(void))(intptr_t)v3827)();

}
	void f173_LoadVV(void);

// emit_69 workspace at ws+4224 length ws+0
void f258_emit_69(void) {

	i1 v3828 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3828;
	i8 v3829 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(void))(intptr_t)v3829)();

}
	void f173_LoadVV(void);

// emit_70 workspace at ws+4224 length ws+0
void f259_emit_70(void) {

	i1 v3830 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3830;
	i8 v3831 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(void))(intptr_t)v3831)();

}
	void f173_LoadVV(void);

// emit_71 workspace at ws+4224 length ws+0
void f260_emit_71(void) {

	i1 v3832 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3832;
	i8 v3833 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(void))(intptr_t)v3833)();

}
const i1 c02_s015f[] = { 0x2b,0 };
	void f174_Op2VV(void);

// emit_72 workspace at ws+4224 length ws+0
void f261_emit_72(void) {

	i1 v3834 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3834;
	i8 v3835 = (i8)(intptr_t)c02_s015f;
	*(i8*)(intptr_t)(ws+4232) = v3835;
	i8 v3836 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3836)();

}
const i1 c02_s0160[] = { 0x2b,0 };
	void f174_Op2VV(void);

// emit_73 workspace at ws+4224 length ws+0
void f262_emit_73(void) {

	i1 v3837 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3837;
	i8 v3838 = (i8)(intptr_t)c02_s0160;
	*(i8*)(intptr_t)(ws+4232) = v3838;
	i8 v3839 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3839)();

}
const i1 c02_s0161[] = { 0x2b,0 };
	void f174_Op2VV(void);

// emit_74 workspace at ws+4224 length ws+0
void f263_emit_74(void) {

	i1 v3840 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3840;
	i8 v3841 = (i8)(intptr_t)c02_s0161;
	*(i8*)(intptr_t)(ws+4232) = v3841;
	i8 v3842 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3842)();

}
const i1 c02_s0162[] = { 0x2b,0 };
	void f174_Op2VV(void);

// emit_75 workspace at ws+4224 length ws+0
void f264_emit_75(void) {

	i1 v3843 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3843;
	i8 v3844 = (i8)(intptr_t)c02_s0162;
	*(i8*)(intptr_t)(ws+4232) = v3844;
	i8 v3845 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3845)();

}
const i1 c02_s0163[] = { 0x2d,0 };
	void f174_Op2VV(void);

// emit_76 workspace at ws+4224 length ws+0
void f265_emit_76(void) {

	i1 v3846 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3846;
	i8 v3847 = (i8)(intptr_t)c02_s0163;
	*(i8*)(intptr_t)(ws+4232) = v3847;
	i8 v3848 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3848)();

}
const i1 c02_s0164[] = { 0x2d,0 };
	void f174_Op2VV(void);

// emit_77 workspace at ws+4224 length ws+0
void f266_emit_77(void) {

	i1 v3849 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3849;
	i8 v3850 = (i8)(intptr_t)c02_s0164;
	*(i8*)(intptr_t)(ws+4232) = v3850;
	i8 v3851 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3851)();

}
const i1 c02_s0165[] = { 0x2d,0 };
	void f174_Op2VV(void);

// emit_78 workspace at ws+4224 length ws+0
void f267_emit_78(void) {

	i1 v3852 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3852;
	i8 v3853 = (i8)(intptr_t)c02_s0165;
	*(i8*)(intptr_t)(ws+4232) = v3853;
	i8 v3854 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3854)();

}
const i1 c02_s0166[] = { 0x2d,0 };
	void f174_Op2VV(void);

// emit_79 workspace at ws+4224 length ws+0
void f268_emit_79(void) {

	i1 v3855 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3855;
	i8 v3856 = (i8)(intptr_t)c02_s0166;
	*(i8*)(intptr_t)(ws+4232) = v3856;
	i8 v3857 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3857)();

}
const i1 c02_s0167[] = { 0x2a,0 };
	void f174_Op2VV(void);

// emit_80 workspace at ws+4224 length ws+0
void f269_emit_80(void) {

	i1 v3858 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3858;
	i8 v3859 = (i8)(intptr_t)c02_s0167;
	*(i8*)(intptr_t)(ws+4232) = v3859;
	i8 v3860 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3860)();

}
const i1 c02_s0168[] = { 0x2a,0 };
	void f174_Op2VV(void);

// emit_81 workspace at ws+4224 length ws+0
void f270_emit_81(void) {

	i1 v3861 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3861;
	i8 v3862 = (i8)(intptr_t)c02_s0168;
	*(i8*)(intptr_t)(ws+4232) = v3862;
	i8 v3863 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3863)();

}
const i1 c02_s0169[] = { 0x2a,0 };
	void f174_Op2VV(void);

// emit_82 workspace at ws+4224 length ws+0
void f271_emit_82(void) {

	i1 v3864 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3864;
	i8 v3865 = (i8)(intptr_t)c02_s0169;
	*(i8*)(intptr_t)(ws+4232) = v3865;
	i8 v3866 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3866)();

}
const i1 c02_s016a[] = { 0x2a,0 };
	void f174_Op2VV(void);

// emit_83 workspace at ws+4224 length ws+0
void f272_emit_83(void) {

	i1 v3867 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3867;
	i8 v3868 = (i8)(intptr_t)c02_s016a;
	*(i8*)(intptr_t)(ws+4232) = v3868;
	i8 v3869 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3869)();

}
const i1 c02_s016b[] = { 0x2f,0 };
	void f174_Op2VV(void);

// emit_84 workspace at ws+4224 length ws+0
void f273_emit_84(void) {

	i1 v3870 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3870;
	i8 v3871 = (i8)(intptr_t)c02_s016b;
	*(i8*)(intptr_t)(ws+4232) = v3871;
	i8 v3872 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3872)();

}
const i1 c02_s016c[] = { 0x2f,0 };
	void f174_Op2VV(void);

// emit_85 workspace at ws+4224 length ws+0
void f274_emit_85(void) {

	i1 v3873 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3873;
	i8 v3874 = (i8)(intptr_t)c02_s016c;
	*(i8*)(intptr_t)(ws+4232) = v3874;
	i8 v3875 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3875)();

}
const i1 c02_s016d[] = { 0x2f,0 };
	void f174_Op2VV(void);

// emit_86 workspace at ws+4224 length ws+0
void f275_emit_86(void) {

	i1 v3876 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3876;
	i8 v3877 = (i8)(intptr_t)c02_s016d;
	*(i8*)(intptr_t)(ws+4232) = v3877;
	i8 v3878 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3878)();

}
const i1 c02_s016e[] = { 0x2f,0 };
	void f174_Op2VV(void);

// emit_87 workspace at ws+4224 length ws+0
void f276_emit_87(void) {

	i1 v3879 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3879;
	i8 v3880 = (i8)(intptr_t)c02_s016e;
	*(i8*)(intptr_t)(ws+4232) = v3880;
	i8 v3881 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3881)();

}
const i1 c02_s016f[] = { 0x25,0 };
	void f174_Op2VV(void);

// emit_88 workspace at ws+4224 length ws+0
void f277_emit_88(void) {

	i1 v3882 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3882;
	i8 v3883 = (i8)(intptr_t)c02_s016f;
	*(i8*)(intptr_t)(ws+4232) = v3883;
	i8 v3884 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3884)();

}
const i1 c02_s0170[] = { 0x25,0 };
	void f174_Op2VV(void);

// emit_89 workspace at ws+4224 length ws+0
void f278_emit_89(void) {

	i1 v3885 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3885;
	i8 v3886 = (i8)(intptr_t)c02_s0170;
	*(i8*)(intptr_t)(ws+4232) = v3886;
	i8 v3887 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3887)();

}
const i1 c02_s0171[] = { 0x25,0 };
	void f174_Op2VV(void);

// emit_90 workspace at ws+4224 length ws+0
void f279_emit_90(void) {

	i1 v3888 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3888;
	i8 v3889 = (i8)(intptr_t)c02_s0171;
	*(i8*)(intptr_t)(ws+4232) = v3889;
	i8 v3890 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3890)();

}
const i1 c02_s0172[] = { 0x25,0 };
	void f174_Op2VV(void);

// emit_91 workspace at ws+4224 length ws+0
void f280_emit_91(void) {

	i1 v3891 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3891;
	i8 v3892 = (i8)(intptr_t)c02_s0172;
	*(i8*)(intptr_t)(ws+4232) = v3892;
	i8 v3893 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3893)();

}
const i1 c02_s0173[] = { 0x2f,0 };
	void f176_Op2VVSigned(void);

// emit_92 workspace at ws+4224 length ws+0
void f281_emit_92(void) {

	i1 v3894 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3894;
	i8 v3895 = (i8)(intptr_t)c02_s0173;
	*(i8*)(intptr_t)(ws+4232) = v3895;
	i8 v3896 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3896)();

}
const i1 c02_s0174[] = { 0x2f,0 };
	void f176_Op2VVSigned(void);

// emit_93 workspace at ws+4224 length ws+0
void f282_emit_93(void) {

	i1 v3897 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3897;
	i8 v3898 = (i8)(intptr_t)c02_s0174;
	*(i8*)(intptr_t)(ws+4232) = v3898;
	i8 v3899 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3899)();

}
const i1 c02_s0175[] = { 0x2f,0 };
	void f176_Op2VVSigned(void);

// emit_94 workspace at ws+4224 length ws+0
void f283_emit_94(void) {

	i1 v3900 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3900;
	i8 v3901 = (i8)(intptr_t)c02_s0175;
	*(i8*)(intptr_t)(ws+4232) = v3901;
	i8 v3902 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3902)();

}
const i1 c02_s0176[] = { 0x2f,0 };
	void f176_Op2VVSigned(void);

// emit_95 workspace at ws+4224 length ws+0
void f284_emit_95(void) {

	i1 v3903 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3903;
	i8 v3904 = (i8)(intptr_t)c02_s0176;
	*(i8*)(intptr_t)(ws+4232) = v3904;
	i8 v3905 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3905)();

}
const i1 c02_s0177[] = { 0x25,0 };
	void f176_Op2VVSigned(void);

// emit_96 workspace at ws+4224 length ws+0
void f285_emit_96(void) {

	i1 v3906 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3906;
	i8 v3907 = (i8)(intptr_t)c02_s0177;
	*(i8*)(intptr_t)(ws+4232) = v3907;
	i8 v3908 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3908)();

}
const i1 c02_s0178[] = { 0x25,0 };
	void f176_Op2VVSigned(void);

// emit_97 workspace at ws+4224 length ws+0
void f286_emit_97(void) {

	i1 v3909 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3909;
	i8 v3910 = (i8)(intptr_t)c02_s0178;
	*(i8*)(intptr_t)(ws+4232) = v3910;
	i8 v3911 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3911)();

}
const i1 c02_s0179[] = { 0x25,0 };
	void f176_Op2VVSigned(void);

// emit_98 workspace at ws+4224 length ws+0
void f287_emit_98(void) {

	i1 v3912 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3912;
	i8 v3913 = (i8)(intptr_t)c02_s0179;
	*(i8*)(intptr_t)(ws+4232) = v3913;
	i8 v3914 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3914)();

}
const i1 c02_s017a[] = { 0x25,0 };
	void f176_Op2VVSigned(void);

// emit_99 workspace at ws+4224 length ws+0
void f288_emit_99(void) {

	i1 v3915 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3915;
	i8 v3916 = (i8)(intptr_t)c02_s017a;
	*(i8*)(intptr_t)(ws+4232) = v3916;
	i8 v3917 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3917)();

}
const i1 c02_s017b[] = { 0x26,0 };
	void f174_Op2VV(void);

// emit_100 workspace at ws+4224 length ws+0
void f289_emit_100(void) {

	i1 v3918 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3918;
	i8 v3919 = (i8)(intptr_t)c02_s017b;
	*(i8*)(intptr_t)(ws+4232) = v3919;
	i8 v3920 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3920)();

}
const i1 c02_s017c[] = { 0x26,0 };
	void f174_Op2VV(void);

// emit_101 workspace at ws+4224 length ws+0
void f290_emit_101(void) {

	i1 v3921 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3921;
	i8 v3922 = (i8)(intptr_t)c02_s017c;
	*(i8*)(intptr_t)(ws+4232) = v3922;
	i8 v3923 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3923)();

}
const i1 c02_s017d[] = { 0x26,0 };
	void f174_Op2VV(void);

// emit_102 workspace at ws+4224 length ws+0
void f291_emit_102(void) {

	i1 v3924 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3924;
	i8 v3925 = (i8)(intptr_t)c02_s017d;
	*(i8*)(intptr_t)(ws+4232) = v3925;
	i8 v3926 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3926)();

}
const i1 c02_s017e[] = { 0x26,0 };
	void f174_Op2VV(void);

// emit_103 workspace at ws+4224 length ws+0
void f292_emit_103(void) {

	i1 v3927 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3927;
	i8 v3928 = (i8)(intptr_t)c02_s017e;
	*(i8*)(intptr_t)(ws+4232) = v3928;
	i8 v3929 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3929)();

}
const i1 c02_s017f[] = { 0x7c,0 };
	void f174_Op2VV(void);

// emit_104 workspace at ws+4224 length ws+0
void f293_emit_104(void) {

	i1 v3930 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3930;
	i8 v3931 = (i8)(intptr_t)c02_s017f;
	*(i8*)(intptr_t)(ws+4232) = v3931;
	i8 v3932 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3932)();

}
const i1 c02_s0180[] = { 0x7c,0 };
	void f174_Op2VV(void);

// emit_105 workspace at ws+4224 length ws+0
void f294_emit_105(void) {

	i1 v3933 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3933;
	i8 v3934 = (i8)(intptr_t)c02_s0180;
	*(i8*)(intptr_t)(ws+4232) = v3934;
	i8 v3935 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3935)();

}
const i1 c02_s0181[] = { 0x7c,0 };
	void f174_Op2VV(void);

// emit_106 workspace at ws+4224 length ws+0
void f295_emit_106(void) {

	i1 v3936 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3936;
	i8 v3937 = (i8)(intptr_t)c02_s0181;
	*(i8*)(intptr_t)(ws+4232) = v3937;
	i8 v3938 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3938)();

}
const i1 c02_s0182[] = { 0x7c,0 };
	void f174_Op2VV(void);

// emit_107 workspace at ws+4224 length ws+0
void f296_emit_107(void) {

	i1 v3939 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3939;
	i8 v3940 = (i8)(intptr_t)c02_s0182;
	*(i8*)(intptr_t)(ws+4232) = v3940;
	i8 v3941 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3941)();

}
const i1 c02_s0183[] = { 0x5e,0 };
	void f174_Op2VV(void);

// emit_108 workspace at ws+4224 length ws+0
void f297_emit_108(void) {

	i1 v3942 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3942;
	i8 v3943 = (i8)(intptr_t)c02_s0183;
	*(i8*)(intptr_t)(ws+4232) = v3943;
	i8 v3944 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3944)();

}
const i1 c02_s0184[] = { 0x5e,0 };
	void f174_Op2VV(void);

// emit_109 workspace at ws+4224 length ws+0
void f298_emit_109(void) {

	i1 v3945 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3945;
	i8 v3946 = (i8)(intptr_t)c02_s0184;
	*(i8*)(intptr_t)(ws+4232) = v3946;
	i8 v3947 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3947)();

}
const i1 c02_s0185[] = { 0x5e,0 };
	void f174_Op2VV(void);

// emit_110 workspace at ws+4224 length ws+0
void f299_emit_110(void) {

	i1 v3948 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3948;
	i8 v3949 = (i8)(intptr_t)c02_s0185;
	*(i8*)(intptr_t)(ws+4232) = v3949;
	i8 v3950 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3950)();

}
const i1 c02_s0186[] = { 0x5e,0 };
	void f174_Op2VV(void);

// emit_111 workspace at ws+4224 length ws+0
void f300_emit_111(void) {

	i1 v3951 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3951;
	i8 v3952 = (i8)(intptr_t)c02_s0186;
	*(i8*)(intptr_t)(ws+4232) = v3952;
	i8 v3953 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3953)();

}
const i1 c02_s0187[] = { 0x2d,0 };
	void f178_Op1V(void);

// emit_112 workspace at ws+4224 length ws+0
void f301_emit_112(void) {

	i1 v3954 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3954;
	i8 v3955 = (i8)(intptr_t)c02_s0187;
	*(i8*)(intptr_t)(ws+4232) = v3955;
	i8 v3956 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3956)();

}
const i1 c02_s0188[] = { 0x2d,0 };
	void f178_Op1V(void);

// emit_113 workspace at ws+4224 length ws+0
void f302_emit_113(void) {

	i1 v3957 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3957;
	i8 v3958 = (i8)(intptr_t)c02_s0188;
	*(i8*)(intptr_t)(ws+4232) = v3958;
	i8 v3959 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3959)();

}
const i1 c02_s0189[] = { 0x2d,0 };
	void f178_Op1V(void);

// emit_114 workspace at ws+4224 length ws+0
void f303_emit_114(void) {

	i1 v3960 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3960;
	i8 v3961 = (i8)(intptr_t)c02_s0189;
	*(i8*)(intptr_t)(ws+4232) = v3961;
	i8 v3962 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3962)();

}
const i1 c02_s018a[] = { 0x2d,0 };
	void f178_Op1V(void);

// emit_115 workspace at ws+4224 length ws+0
void f304_emit_115(void) {

	i1 v3963 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3963;
	i8 v3964 = (i8)(intptr_t)c02_s018a;
	*(i8*)(intptr_t)(ws+4232) = v3964;
	i8 v3965 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3965)();

}
const i1 c02_s018b[] = { 0x7e,0 };
	void f178_Op1V(void);

// emit_116 workspace at ws+4224 length ws+0
void f305_emit_116(void) {

	i1 v3966 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3966;
	i8 v3967 = (i8)(intptr_t)c02_s018b;
	*(i8*)(intptr_t)(ws+4232) = v3967;
	i8 v3968 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3968)();

}
const i1 c02_s018c[] = { 0x7e,0 };
	void f178_Op1V(void);

// emit_117 workspace at ws+4224 length ws+0
void f306_emit_117(void) {

	i1 v3969 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3969;
	i8 v3970 = (i8)(intptr_t)c02_s018c;
	*(i8*)(intptr_t)(ws+4232) = v3970;
	i8 v3971 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3971)();

}
const i1 c02_s018d[] = { 0x7e,0 };
	void f178_Op1V(void);

// emit_118 workspace at ws+4224 length ws+0
void f307_emit_118(void) {

	i1 v3972 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3972;
	i8 v3973 = (i8)(intptr_t)c02_s018d;
	*(i8*)(intptr_t)(ws+4232) = v3973;
	i8 v3974 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3974)();

}
const i1 c02_s018e[] = { 0x7e,0 };
	void f178_Op1V(void);

// emit_119 workspace at ws+4224 length ws+0
void f308_emit_119(void) {

	i1 v3975 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3975;
	i8 v3976 = (i8)(intptr_t)c02_s018e;
	*(i8*)(intptr_t)(ws+4232) = v3976;
	i8 v3977 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3977)();

}
const i1 c02_s018f[] = { 0x69,0x31,0 };
const i1 c02_s0190[] = { 0x3c,0x3c,0 };
	void f179_Shift(void);

// emit_120 workspace at ws+4224 length ws+0
void f309_emit_120(void) {

	i1 v3978 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3978;
	i8 v3979 = (i8)(intptr_t)c02_s018f;
	*(i8*)(intptr_t)(ws+4232) = v3979;
	i8 v3980 = (i8)(intptr_t)c02_s0190;
	*(i8*)(intptr_t)(ws+4240) = v3980;
	i8 v3981 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v3981)();

}
const i1 c02_s0191[] = { 0x69,0x32,0 };
const i1 c02_s0192[] = { 0x3c,0x3c,0 };
	void f179_Shift(void);

// emit_121 workspace at ws+4224 length ws+0
void f310_emit_121(void) {

	i1 v3982 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3982;
	i8 v3983 = (i8)(intptr_t)c02_s0191;
	*(i8*)(intptr_t)(ws+4232) = v3983;
	i8 v3984 = (i8)(intptr_t)c02_s0192;
	*(i8*)(intptr_t)(ws+4240) = v3984;
	i8 v3985 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v3985)();

}
const i1 c02_s0193[] = { 0x69,0x34,0 };
const i1 c02_s0194[] = { 0x3c,0x3c,0 };
	void f179_Shift(void);

// emit_122 workspace at ws+4224 length ws+0
void f311_emit_122(void) {

	i1 v3986 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3986;
	i8 v3987 = (i8)(intptr_t)c02_s0193;
	*(i8*)(intptr_t)(ws+4232) = v3987;
	i8 v3988 = (i8)(intptr_t)c02_s0194;
	*(i8*)(intptr_t)(ws+4240) = v3988;
	i8 v3989 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v3989)();

}
const i1 c02_s0195[] = { 0x69,0x38,0 };
const i1 c02_s0196[] = { 0x3c,0x3c,0 };
	void f179_Shift(void);

// emit_123 workspace at ws+4224 length ws+0
void f312_emit_123(void) {

	i1 v3990 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3990;
	i8 v3991 = (i8)(intptr_t)c02_s0195;
	*(i8*)(intptr_t)(ws+4232) = v3991;
	i8 v3992 = (i8)(intptr_t)c02_s0196;
	*(i8*)(intptr_t)(ws+4240) = v3992;
	i8 v3993 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v3993)();

}
const i1 c02_s0197[] = { 0x69,0x31,0 };
const i1 c02_s0198[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_124 workspace at ws+4224 length ws+0
void f313_emit_124(void) {

	i1 v3994 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3994;
	i8 v3995 = (i8)(intptr_t)c02_s0197;
	*(i8*)(intptr_t)(ws+4232) = v3995;
	i8 v3996 = (i8)(intptr_t)c02_s0198;
	*(i8*)(intptr_t)(ws+4240) = v3996;
	i8 v3997 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v3997)();

}
const i1 c02_s0199[] = { 0x69,0x32,0 };
const i1 c02_s019a[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_125 workspace at ws+4224 length ws+0
void f314_emit_125(void) {

	i1 v3998 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3998;
	i8 v3999 = (i8)(intptr_t)c02_s0199;
	*(i8*)(intptr_t)(ws+4232) = v3999;
	i8 v4000 = (i8)(intptr_t)c02_s019a;
	*(i8*)(intptr_t)(ws+4240) = v4000;
	i8 v4001 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4001)();

}
const i1 c02_s019b[] = { 0x69,0x34,0 };
const i1 c02_s019c[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_126 workspace at ws+4224 length ws+0
void f315_emit_126(void) {

	i1 v4002 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4002;
	i8 v4003 = (i8)(intptr_t)c02_s019b;
	*(i8*)(intptr_t)(ws+4232) = v4003;
	i8 v4004 = (i8)(intptr_t)c02_s019c;
	*(i8*)(intptr_t)(ws+4240) = v4004;
	i8 v4005 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4005)();

}
const i1 c02_s019d[] = { 0x69,0x38,0 };
const i1 c02_s019e[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_127 workspace at ws+4224 length ws+0
void f316_emit_127(void) {

	i1 v4006 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4006;
	i8 v4007 = (i8)(intptr_t)c02_s019d;
	*(i8*)(intptr_t)(ws+4232) = v4007;
	i8 v4008 = (i8)(intptr_t)c02_s019e;
	*(i8*)(intptr_t)(ws+4240) = v4008;
	i8 v4009 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4009)();

}
const i1 c02_s019f[] = { 0x73,0x31,0 };
const i1 c02_s01a0[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_128 workspace at ws+4224 length ws+0
void f317_emit_128(void) {

	i1 v4010 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4010;
	i8 v4011 = (i8)(intptr_t)c02_s019f;
	*(i8*)(intptr_t)(ws+4232) = v4011;
	i8 v4012 = (i8)(intptr_t)c02_s01a0;
	*(i8*)(intptr_t)(ws+4240) = v4012;
	i8 v4013 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4013)();

}
const i1 c02_s01a1[] = { 0x73,0x32,0 };
const i1 c02_s01a2[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_129 workspace at ws+4224 length ws+0
void f318_emit_129(void) {

	i1 v4014 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4014;
	i8 v4015 = (i8)(intptr_t)c02_s01a1;
	*(i8*)(intptr_t)(ws+4232) = v4015;
	i8 v4016 = (i8)(intptr_t)c02_s01a2;
	*(i8*)(intptr_t)(ws+4240) = v4016;
	i8 v4017 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4017)();

}
const i1 c02_s01a3[] = { 0x73,0x34,0 };
const i1 c02_s01a4[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_130 workspace at ws+4224 length ws+0
void f319_emit_130(void) {

	i1 v4018 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4018;
	i8 v4019 = (i8)(intptr_t)c02_s01a3;
	*(i8*)(intptr_t)(ws+4232) = v4019;
	i8 v4020 = (i8)(intptr_t)c02_s01a4;
	*(i8*)(intptr_t)(ws+4240) = v4020;
	i8 v4021 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4021)();

}
const i1 c02_s01a5[] = { 0x73,0x38,0 };
const i1 c02_s01a6[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_131 workspace at ws+4224 length ws+0
void f320_emit_131(void) {

	i1 v4022 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4022;
	i8 v4023 = (i8)(intptr_t)c02_s01a5;
	*(i8*)(intptr_t)(ws+4232) = v4023;
	i8 v4024 = (i8)(intptr_t)c02_s01a6;
	*(i8*)(intptr_t)(ws+4240) = v4024;
	i8 v4025 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4025)();

}
const i1 c02_s01a7[] = { 0x3d,0x3d,0 };
	void f180_Branch(void);

// emit_132 workspace at ws+4224 length ws+0
void f321_emit_132(void) {

	i8 v4026 = (i8)(intptr_t)(ws+4128);
	i8 v4027 = *(i8*)(intptr_t)v4026;
	i8 v4028 = v4027+(+16);
	i8 v4029 = *(i8*)(intptr_t)v4028;
	*(i8*)(intptr_t)(ws+4224) = v4029;
	i8 v4030 = (i8)(intptr_t)c02_s01a7;
	*(i8*)(intptr_t)(ws+4232) = v4030;
	i8 v4031 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4031)();

}
const i1 c02_s01a8[] = { 0x3d,0x3d,0 };
	void f180_Branch(void);

// emit_133 workspace at ws+4224 length ws+0
void f322_emit_133(void) {

	i8 v4032 = (i8)(intptr_t)(ws+4128);
	i8 v4033 = *(i8*)(intptr_t)v4032;
	i8 v4034 = v4033+(+16);
	i8 v4035 = *(i8*)(intptr_t)v4034;
	*(i8*)(intptr_t)(ws+4224) = v4035;
	i8 v4036 = (i8)(intptr_t)c02_s01a8;
	*(i8*)(intptr_t)(ws+4232) = v4036;
	i8 v4037 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4037)();

}
const i1 c02_s01a9[] = { 0x3d,0x3d,0 };
	void f180_Branch(void);

// emit_134 workspace at ws+4224 length ws+0
void f323_emit_134(void) {

	i8 v4038 = (i8)(intptr_t)(ws+4128);
	i8 v4039 = *(i8*)(intptr_t)v4038;
	i8 v4040 = v4039+(+16);
	i8 v4041 = *(i8*)(intptr_t)v4040;
	*(i8*)(intptr_t)(ws+4224) = v4041;
	i8 v4042 = (i8)(intptr_t)c02_s01a9;
	*(i8*)(intptr_t)(ws+4232) = v4042;
	i8 v4043 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4043)();

}
const i1 c02_s01aa[] = { 0x3d,0x3d,0 };
	void f180_Branch(void);

// emit_135 workspace at ws+4224 length ws+0
void f324_emit_135(void) {

	i8 v4044 = (i8)(intptr_t)(ws+4128);
	i8 v4045 = *(i8*)(intptr_t)v4044;
	i8 v4046 = v4045+(+16);
	i8 v4047 = *(i8*)(intptr_t)v4046;
	*(i8*)(intptr_t)(ws+4224) = v4047;
	i8 v4048 = (i8)(intptr_t)c02_s01aa;
	*(i8*)(intptr_t)(ws+4232) = v4048;
	i8 v4049 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4049)();

}
const i1 c02_s01ab[] = { 0x3c,0 };
	void f180_Branch(void);

// emit_136 workspace at ws+4224 length ws+0
void f325_emit_136(void) {

	i8 v4050 = (i8)(intptr_t)(ws+4128);
	i8 v4051 = *(i8*)(intptr_t)v4050;
	i8 v4052 = v4051+(+16);
	i8 v4053 = *(i8*)(intptr_t)v4052;
	*(i8*)(intptr_t)(ws+4224) = v4053;
	i8 v4054 = (i8)(intptr_t)c02_s01ab;
	*(i8*)(intptr_t)(ws+4232) = v4054;
	i8 v4055 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4055)();

}
const i1 c02_s01ac[] = { 0x3c,0 };
	void f180_Branch(void);

// emit_137 workspace at ws+4224 length ws+0
void f326_emit_137(void) {

	i8 v4056 = (i8)(intptr_t)(ws+4128);
	i8 v4057 = *(i8*)(intptr_t)v4056;
	i8 v4058 = v4057+(+16);
	i8 v4059 = *(i8*)(intptr_t)v4058;
	*(i8*)(intptr_t)(ws+4224) = v4059;
	i8 v4060 = (i8)(intptr_t)c02_s01ac;
	*(i8*)(intptr_t)(ws+4232) = v4060;
	i8 v4061 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4061)();

}
const i1 c02_s01ad[] = { 0x3c,0 };
	void f180_Branch(void);

// emit_138 workspace at ws+4224 length ws+0
void f327_emit_138(void) {

	i8 v4062 = (i8)(intptr_t)(ws+4128);
	i8 v4063 = *(i8*)(intptr_t)v4062;
	i8 v4064 = v4063+(+16);
	i8 v4065 = *(i8*)(intptr_t)v4064;
	*(i8*)(intptr_t)(ws+4224) = v4065;
	i8 v4066 = (i8)(intptr_t)c02_s01ad;
	*(i8*)(intptr_t)(ws+4232) = v4066;
	i8 v4067 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4067)();

}
const i1 c02_s01ae[] = { 0x3c,0 };
	void f180_Branch(void);

// emit_139 workspace at ws+4224 length ws+0
void f328_emit_139(void) {

	i8 v4068 = (i8)(intptr_t)(ws+4128);
	i8 v4069 = *(i8*)(intptr_t)v4068;
	i8 v4070 = v4069+(+16);
	i8 v4071 = *(i8*)(intptr_t)v4070;
	*(i8*)(intptr_t)(ws+4224) = v4071;
	i8 v4072 = (i8)(intptr_t)c02_s01ae;
	*(i8*)(intptr_t)(ws+4232) = v4072;
	i8 v4073 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4073)();

}
const i1 c02_s01af[] = { 0x3c,0 };
	void f181_BranchSigned(void);

// emit_140 workspace at ws+4224 length ws+0
void f329_emit_140(void) {

	i8 v4074 = (i8)(intptr_t)(ws+4128);
	i8 v4075 = *(i8*)(intptr_t)v4074;
	i8 v4076 = v4075+(+16);
	i8 v4077 = *(i8*)(intptr_t)v4076;
	*(i8*)(intptr_t)(ws+4224) = v4077;
	i1 v4078 = (i1)+1;
	*(i1*)(intptr_t)(ws+4232) = v4078;
	i8 v4079 = (i8)(intptr_t)c02_s01af;
	*(i8*)(intptr_t)(ws+4240) = v4079;
	i8 v4080 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(void))(intptr_t)v4080)();

}
const i1 c02_s01b0[] = { 0x3c,0 };
	void f181_BranchSigned(void);

// emit_141 workspace at ws+4224 length ws+0
void f330_emit_141(void) {

	i8 v4081 = (i8)(intptr_t)(ws+4128);
	i8 v4082 = *(i8*)(intptr_t)v4081;
	i8 v4083 = v4082+(+16);
	i8 v4084 = *(i8*)(intptr_t)v4083;
	*(i8*)(intptr_t)(ws+4224) = v4084;
	i1 v4085 = (i1)+2;
	*(i1*)(intptr_t)(ws+4232) = v4085;
	i8 v4086 = (i8)(intptr_t)c02_s01b0;
	*(i8*)(intptr_t)(ws+4240) = v4086;
	i8 v4087 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(void))(intptr_t)v4087)();

}
const i1 c02_s01b1[] = { 0x3c,0 };
	void f181_BranchSigned(void);

// emit_142 workspace at ws+4224 length ws+0
void f331_emit_142(void) {

	i8 v4088 = (i8)(intptr_t)(ws+4128);
	i8 v4089 = *(i8*)(intptr_t)v4088;
	i8 v4090 = v4089+(+16);
	i8 v4091 = *(i8*)(intptr_t)v4090;
	*(i8*)(intptr_t)(ws+4224) = v4091;
	i1 v4092 = (i1)+4;
	*(i1*)(intptr_t)(ws+4232) = v4092;
	i8 v4093 = (i8)(intptr_t)c02_s01b1;
	*(i8*)(intptr_t)(ws+4240) = v4093;
	i8 v4094 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(void))(intptr_t)v4094)();

}
const i1 c02_s01b2[] = { 0x3c,0 };
	void f181_BranchSigned(void);

// emit_143 workspace at ws+4224 length ws+0
void f332_emit_143(void) {

	i8 v4095 = (i8)(intptr_t)(ws+4128);
	i8 v4096 = *(i8*)(intptr_t)v4095;
	i8 v4097 = v4096+(+16);
	i8 v4098 = *(i8*)(intptr_t)v4097;
	*(i8*)(intptr_t)(ws+4224) = v4098;
	i1 v4099 = (i1)+8;
	*(i1*)(intptr_t)(ws+4232) = v4099;
	i8 v4100 = (i8)(intptr_t)c02_s01b2;
	*(i8*)(intptr_t)(ws+4240) = v4100;
	i8 v4101 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(void))(intptr_t)v4101)();

}
	void f183_Whencase(void);

// emit_148 workspace at ws+4224 length ws+0
void f333_emit_148(void) {

	i8 v4102 = (i8)(intptr_t)(ws+4136);
	i8 v4103 = *(i8*)(intptr_t)v4102;
	i4 v4104 = *(i4*)(intptr_t)v4103;
	i4 v4105 = v4104&(+255);
	*(i4*)(intptr_t)(ws+4224) = v4105;
	i8 v4106 = (i8)(intptr_t)(ws+4136);
	i8 v4107 = *(i8*)(intptr_t)v4106;
	i8 v4108 = v4107+(+4);
	i2 v4109 = *(i2*)(intptr_t)v4108;
	*(i2*)(intptr_t)(ws+4228) = v4109;
	i8 v4110 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(void))(intptr_t)v4110)();

}
	void f183_Whencase(void);

// emit_149 workspace at ws+4224 length ws+0
void f334_emit_149(void) {

	i8 v4111 = (i8)(intptr_t)(ws+4136);
	i8 v4112 = *(i8*)(intptr_t)v4111;
	i4 v4113 = *(i4*)(intptr_t)v4112;
	i4 v4114 = v4113&(+65535);
	*(i4*)(intptr_t)(ws+4224) = v4114;
	i8 v4115 = (i8)(intptr_t)(ws+4136);
	i8 v4116 = *(i8*)(intptr_t)v4115;
	i8 v4117 = v4116+(+4);
	i2 v4118 = *(i2*)(intptr_t)v4117;
	*(i2*)(intptr_t)(ws+4228) = v4118;
	i8 v4119 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(void))(intptr_t)v4119)();

}
	void f183_Whencase(void);

// emit_150 workspace at ws+4224 length ws+0
void f335_emit_150(void) {

	i8 v4120 = (i8)(intptr_t)(ws+4136);
	i8 v4121 = *(i8*)(intptr_t)v4120;
	i4 v4122 = *(i4*)(intptr_t)v4121;
	i4 v4123 = v4122&(-1);
	*(i4*)(intptr_t)(ws+4224) = v4123;
	i8 v4124 = (i8)(intptr_t)(ws+4136);
	i8 v4125 = *(i8*)(intptr_t)v4124;
	i8 v4126 = v4125+(+4);
	i2 v4127 = *(i2*)(intptr_t)v4126;
	*(i2*)(intptr_t)(ws+4228) = v4127;
	i8 v4128 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(void))(intptr_t)v4128)();

}
	void f183_Whencase(void);

// emit_151 workspace at ws+4224 length ws+0
void f336_emit_151(void) {

	i8 v4129 = (i8)(intptr_t)(ws+4136);
	i8 v4130 = *(i8*)(intptr_t)v4129;
	i4 v4131 = *(i4*)(intptr_t)v4130;
	*(i4*)(intptr_t)(ws+4224) = v4131;
	i8 v4132 = (i8)(intptr_t)(ws+4136);
	i8 v4133 = *(i8*)(intptr_t)v4132;
	i8 v4134 = v4133+(+4);
	i2 v4135 = *(i2*)(intptr_t)v4134;
	*(i2*)(intptr_t)(ws+4228) = v4135;
	i8 v4136 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(void))(intptr_t)v4136)();

}

// emit_152 workspace at ws+4224 length ws+0
void f337_emit_152(void) {

	i8 v4137 = (i8)(intptr_t)(ws+3832);
	i1 v4138 = *(i1*)(intptr_t)v4137;
	i1 v4139 = v4138+(-1);
	i8 v4140 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4140 = v4139;

}

// emit_153 workspace at ws+4224 length ws+0
void f338_emit_153(void) {

	i8 v4141 = (i8)(intptr_t)(ws+3832);
	i1 v4142 = *(i1*)(intptr_t)v4141;
	i1 v4143 = v4142+(-1);
	i8 v4144 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4144 = v4143;

}

// emit_154 workspace at ws+4224 length ws+0
void f339_emit_154(void) {

	i8 v4145 = (i8)(intptr_t)(ws+3832);
	i1 v4146 = *(i1*)(intptr_t)v4145;
	i1 v4147 = v4146+(-1);
	i8 v4148 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4148 = v4147;

}

// emit_155 workspace at ws+4224 length ws+0
void f340_emit_155(void) {

	i8 v4149 = (i8)(intptr_t)(ws+3832);
	i1 v4150 = *(i1*)(intptr_t)v4149;
	i1 v4151 = v4150+(-1);
	i8 v4152 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4152 = v4151;

}
	void f184_Cast(void);

// emit_156 workspace at ws+4224 length ws+0
void f341_emit_156(void) {

	i1 v4153 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4153;
	i1 v4154 = (i1)+2;
	*(i1*)(intptr_t)(ws+4225) = v4154;
	i8 v4155 = (i8)(intptr_t)(ws+4136);
	i8 v4156 = *(i8*)(intptr_t)v4155;
	i1 v4157 = *(i1*)(intptr_t)v4156;
	*(i1*)(intptr_t)(ws+4226) = v4157;
	i8 v4158 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4158)();

}
	void f184_Cast(void);

// emit_157 workspace at ws+4224 length ws+0
void f342_emit_157(void) {

	i1 v4159 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4159;
	i1 v4160 = (i1)+4;
	*(i1*)(intptr_t)(ws+4225) = v4160;
	i8 v4161 = (i8)(intptr_t)(ws+4136);
	i8 v4162 = *(i8*)(intptr_t)v4161;
	i1 v4163 = *(i1*)(intptr_t)v4162;
	*(i1*)(intptr_t)(ws+4226) = v4163;
	i8 v4164 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4164)();

}
	void f184_Cast(void);

// emit_158 workspace at ws+4224 length ws+0
void f343_emit_158(void) {

	i1 v4165 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4165;
	i1 v4166 = (i1)+8;
	*(i1*)(intptr_t)(ws+4225) = v4166;
	i8 v4167 = (i8)(intptr_t)(ws+4136);
	i8 v4168 = *(i8*)(intptr_t)v4167;
	i1 v4169 = *(i1*)(intptr_t)v4168;
	*(i1*)(intptr_t)(ws+4226) = v4169;
	i8 v4170 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4170)();

}
	void f184_Cast(void);

// emit_159 workspace at ws+4224 length ws+0
void f344_emit_159(void) {

	i1 v4171 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4171;
	i1 v4172 = (i1)+1;
	*(i1*)(intptr_t)(ws+4225) = v4172;
	i8 v4173 = (i8)(intptr_t)(ws+4136);
	i8 v4174 = *(i8*)(intptr_t)v4173;
	i1 v4175 = *(i1*)(intptr_t)v4174;
	*(i1*)(intptr_t)(ws+4226) = v4175;
	i8 v4176 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4176)();

}
	void f184_Cast(void);

// emit_160 workspace at ws+4224 length ws+0
void f345_emit_160(void) {

	i1 v4177 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4177;
	i1 v4178 = (i1)+4;
	*(i1*)(intptr_t)(ws+4225) = v4178;
	i8 v4179 = (i8)(intptr_t)(ws+4136);
	i8 v4180 = *(i8*)(intptr_t)v4179;
	i1 v4181 = *(i1*)(intptr_t)v4180;
	*(i1*)(intptr_t)(ws+4226) = v4181;
	i8 v4182 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4182)();

}
	void f184_Cast(void);

// emit_161 workspace at ws+4224 length ws+0
void f346_emit_161(void) {

	i1 v4183 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4183;
	i1 v4184 = (i1)+8;
	*(i1*)(intptr_t)(ws+4225) = v4184;
	i8 v4185 = (i8)(intptr_t)(ws+4136);
	i8 v4186 = *(i8*)(intptr_t)v4185;
	i1 v4187 = *(i1*)(intptr_t)v4186;
	*(i1*)(intptr_t)(ws+4226) = v4187;
	i8 v4188 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4188)();

}
	void f184_Cast(void);

// emit_162 workspace at ws+4224 length ws+0
void f347_emit_162(void) {

	i1 v4189 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4189;
	i1 v4190 = (i1)+1;
	*(i1*)(intptr_t)(ws+4225) = v4190;
	i8 v4191 = (i8)(intptr_t)(ws+4136);
	i8 v4192 = *(i8*)(intptr_t)v4191;
	i1 v4193 = *(i1*)(intptr_t)v4192;
	*(i1*)(intptr_t)(ws+4226) = v4193;
	i8 v4194 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4194)();

}
	void f184_Cast(void);

// emit_163 workspace at ws+4224 length ws+0
void f348_emit_163(void) {

	i1 v4195 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4195;
	i1 v4196 = (i1)+2;
	*(i1*)(intptr_t)(ws+4225) = v4196;
	i8 v4197 = (i8)(intptr_t)(ws+4136);
	i8 v4198 = *(i8*)(intptr_t)v4197;
	i1 v4199 = *(i1*)(intptr_t)v4198;
	*(i1*)(intptr_t)(ws+4226) = v4199;
	i8 v4200 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4200)();

}
	void f184_Cast(void);

// emit_164 workspace at ws+4224 length ws+0
void f349_emit_164(void) {

	i1 v4201 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4201;
	i1 v4202 = (i1)+8;
	*(i1*)(intptr_t)(ws+4225) = v4202;
	i8 v4203 = (i8)(intptr_t)(ws+4136);
	i8 v4204 = *(i8*)(intptr_t)v4203;
	i1 v4205 = *(i1*)(intptr_t)v4204;
	*(i1*)(intptr_t)(ws+4226) = v4205;
	i8 v4206 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4206)();

}
	void f184_Cast(void);

// emit_165 workspace at ws+4224 length ws+0
void f350_emit_165(void) {

	i1 v4207 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4207;
	i1 v4208 = (i1)+1;
	*(i1*)(intptr_t)(ws+4225) = v4208;
	i8 v4209 = (i8)(intptr_t)(ws+4136);
	i8 v4210 = *(i8*)(intptr_t)v4209;
	i1 v4211 = *(i1*)(intptr_t)v4210;
	*(i1*)(intptr_t)(ws+4226) = v4211;
	i8 v4212 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4212)();

}
	void f184_Cast(void);

// emit_166 workspace at ws+4224 length ws+0
void f351_emit_166(void) {

	i1 v4213 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4213;
	i1 v4214 = (i1)+2;
	*(i1*)(intptr_t)(ws+4225) = v4214;
	i8 v4215 = (i8)(intptr_t)(ws+4136);
	i8 v4216 = *(i8*)(intptr_t)v4215;
	i1 v4217 = *(i1*)(intptr_t)v4216;
	*(i1*)(intptr_t)(ws+4226) = v4217;
	i8 v4218 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4218)();

}
	void f184_Cast(void);

// emit_167 workspace at ws+4224 length ws+0
void f352_emit_167(void) {

	i1 v4219 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4219;
	i1 v4220 = (i1)+4;
	*(i1*)(intptr_t)(ws+4225) = v4220;
	i8 v4221 = (i8)(intptr_t)(ws+4136);
	i8 v4222 = *(i8*)(intptr_t)v4221;
	i1 v4223 = *(i1*)(intptr_t)v4222;
	*(i1*)(intptr_t)(ws+4226) = v4223;
	i8 v4224 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4224)();

}
	void f161_Push(void);
const i1 c02_s01b3[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s01b4[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f83_E_b8(void);
	void f185_E_string(void);
	void f101_E_h16(void);
const i1 c02_s01b5[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// emit_168 workspace at ws+4224 length ws+6
void f353_emit_168(void) {

	i8 v4225 = (i8)(intptr_t)(f161_Push);

	((void(*)(void))(intptr_t)v4225)();

	i2 v4226 = *(i2*)(intptr_t)(ws+4264);
	i8 v4227 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v4227 = v4226;

	i8 v4228 = (i8)(intptr_t)(ws+4224);
	i2 v4229 = *(i2*)(intptr_t)v4228;
	i8 v4230 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v4230 = v4229;

	i8 v4231 = (i8)(intptr_t)c02_s01b3;
	*(i8*)(intptr_t)(ws+4320) = v4231;
	i8 v4232 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4232)();

	i8 v4233 = (i8)(intptr_t)(ws+4226);
	i2 v4234 = *(i2*)(intptr_t)v4233;
	*(i2*)(intptr_t)(ws+4272) = v4234;
	i8 v4235 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v4235)();

	i8 v4236 = (i8)(intptr_t)c02_s01b4;
	*(i8*)(intptr_t)(ws+4320) = v4236;
	i8 v4237 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4237)();

	i1 v4238 = (i1)+3;
	*(i1*)(intptr_t)(ws+4336) = v4238;
	i8 v4239 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4239)();

	i1 v4240 = (i1)+115;
	*(i1*)(intptr_t)(ws+4336) = v4240;
	i8 v4241 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4241)();

	i8 v4242 = (i8)(intptr_t)(ws+4136);
	i8 v4243 = *(i8*)(intptr_t)v4242;
	i8 v4244 = *(i8*)(intptr_t)v4243;
	*(i8*)(intptr_t)(ws+4232) = v4244;
	i8 v4245 = (i8)(intptr_t)(f185_E_string);

	((void(*)(void))(intptr_t)v4245)();

	i2 v4246 = *(i2*)(intptr_t)(ws+4240);
	i8 v4247 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v4247 = v4246;

	i8 v4248 = (i8)(intptr_t)(ws+4228);
	i2 v4249 = *(i2*)(intptr_t)v4248;
	*(i2*)(intptr_t)(ws+4272) = v4249;
	i8 v4250 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(void))(intptr_t)v4250)();

	i8 v4251 = (i8)(intptr_t)c02_s01b5;
	*(i8*)(intptr_t)(ws+4320) = v4251;
	i8 v4252 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4252)();

}
	void f106_EmitterOpenStream(void);
const i1 c02_s01b6[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
	void f92_E(void);
	void f105_E_wsref(void);
const i1 c02_s01b7[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x0a,0 };
	void f92_E(void);

// emit_169 workspace at ws+4224 length ws+0
void f354_emit_169(void) {

	i8 v4253 = (i8)(intptr_t)(ws+40);
	i8 v4254 = *(i8*)(intptr_t)v4253;
	*(i8*)(intptr_t)(ws+4248) = v4254;
	i8 v4255 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(void))(intptr_t)v4255)();

	i8 v4256 = (i8)(intptr_t)c02_s01b6;
	*(i8*)(intptr_t)(ws+4320) = v4256;
	i8 v4257 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4257)();

	i8 v4258 = (i8)(intptr_t)(ws+4136);
	i8 v4259 = *(i8*)(intptr_t)v4258;
	i8 v4260 = *(i8*)(intptr_t)v4259;
	i8 v4261 = v4260+(+8);
	i2 v4262 = *(i2*)(intptr_t)v4261;
	*(i2*)(intptr_t)(ws+4264) = v4262;
	i8 v4263 = (i8)(intptr_t)(ws+4136);
	i8 v4264 = *(i8*)(intptr_t)v4263;
	i8 v4265 = v4264+(+10);
	i1 v4266 = *(i1*)(intptr_t)v4265;
	*(i1*)(intptr_t)(ws+4266) = v4266;
	i8 v4267 = (i8)(intptr_t)(ws+4136);
	i8 v4268 = *(i8*)(intptr_t)v4267;
	i8 v4269 = v4268+(+12);
	i2 v4270 = *(i2*)(intptr_t)v4269;
	*(i2*)(intptr_t)(ws+4268) = v4270;
	i8 v4271 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(void))(intptr_t)v4271)();

	i8 v4272 = (i8)(intptr_t)c02_s01b7;
	*(i8*)(intptr_t)(ws+4320) = v4272;
	i8 v4273 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4273)();

	i1 v4274 = (i1)+0;
	i8 v4275 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v4275 = v4274;

}
	void f187_E_bytes(void);

// emit_170 workspace at ws+4224 length ws+0
void f355_emit_170(void) {

	i8 v4276 = (i8)(intptr_t)(ws+4136);
	i8 v4277 = *(i8*)(intptr_t)v4276;
	*(i8*)(intptr_t)(ws+4224) = v4277;
	i1 v4278 = (i1)+1;
	*(i1*)(intptr_t)(ws+4232) = v4278;
	i8 v4279 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(void))(intptr_t)v4279)();

}
	void f187_E_bytes(void);

// emit_171 workspace at ws+4224 length ws+0
void f356_emit_171(void) {

	i8 v4280 = (i8)(intptr_t)(ws+4136);
	i8 v4281 = *(i8*)(intptr_t)v4280;
	*(i8*)(intptr_t)(ws+4224) = v4281;
	i1 v4282 = (i1)+2;
	*(i1*)(intptr_t)(ws+4232) = v4282;
	i8 v4283 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(void))(intptr_t)v4283)();

}
	void f187_E_bytes(void);

// emit_172 workspace at ws+4224 length ws+0
void f357_emit_172(void) {

	i8 v4284 = (i8)(intptr_t)(ws+4136);
	i8 v4285 = *(i8*)(intptr_t)v4284;
	*(i8*)(intptr_t)(ws+4224) = v4285;
	i1 v4286 = (i1)+4;
	*(i1*)(intptr_t)(ws+4232) = v4286;
	i8 v4287 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(void))(intptr_t)v4287)();

}
	void f187_E_bytes(void);

// emit_173 workspace at ws+4224 length ws+0
void f358_emit_173(void) {

	i8 v4288 = (i8)(intptr_t)(ws+4136);
	i8 v4289 = *(i8*)(intptr_t)v4288;
	*(i8*)(intptr_t)(ws+4224) = v4289;
	i1 v4290 = (i1)+8;
	*(i1*)(intptr_t)(ws+4232) = v4290;
	i8 v4291 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(void))(intptr_t)v4291)();

}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01b8[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(void);
	void f156_E_subref_sig(void);
const i1 c02_s01b9[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(void);

// emit_174 workspace at ws+4224 length ws+0
void f359_emit_174(void) {

	i8 v4292 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4292)();

	i8 v4293 = (i8)(intptr_t)c02_s01b8;
	*(i8*)(intptr_t)(ws+4320) = v4293;
	i8 v4294 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4294)();

	i8 v4295 = (i8)(intptr_t)(ws+4136);
	i8 v4296 = *(i8*)(intptr_t)v4295;
	i8 v4297 = *(i8*)(intptr_t)v4296;
	*(i8*)(intptr_t)(ws+4232) = v4297;
	i8 v4298 = (i8)(intptr_t)(f156_E_subref_sig);

	((void(*)(void))(intptr_t)v4298)();

	i8 v4299 = (i8)(intptr_t)c02_s01b9;
	*(i8*)(intptr_t)(ws+4320) = v4299;
	i8 v4300 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4300)();

}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01ba[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(void);
	void f157_E_symref(void);
const i1 c02_s01bb[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(void);

// emit_175 workspace at ws+4224 length ws+0
void f360_emit_175(void) {

	i8 v4301 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4301)();

	i8 v4302 = (i8)(intptr_t)c02_s01ba;
	*(i8*)(intptr_t)(ws+4320) = v4302;
	i8 v4303 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4303)();

	i8 v4304 = (i8)(intptr_t)(ws+4136);
	i8 v4305 = *(i8*)(intptr_t)v4304;
	*(i8*)(intptr_t)(ws+4248) = v4305;
	i8 v4306 = (i8)(intptr_t)(ws+4136);
	i8 v4307 = *(i8*)(intptr_t)v4306;
	i8 v4308 = v4307+(+16);
	i2 v4309 = *(i2*)(intptr_t)v4308;
	*(i2*)(intptr_t)(ws+4256) = v4309;
	i8 v4310 = (i8)(intptr_t)(f157_E_symref);

	((void(*)(void))(intptr_t)v4310)();

	i8 v4311 = (i8)(intptr_t)c02_s01bb;
	*(i8*)(intptr_t)(ws+4320) = v4311;
	i8 v4312 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4312)();

}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01bc[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f83_E_b8(void);
	void f185_E_string(void);
	void f101_E_h16(void);
const i1 c02_s01bd[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(void);

// emit_176 workspace at ws+4224 length ws+2
void f361_emit_176(void) {

	i8 v4313 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4313)();

	i8 v4314 = (i8)(intptr_t)c02_s01bc;
	*(i8*)(intptr_t)(ws+4320) = v4314;
	i8 v4315 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4315)();

	i1 v4316 = (i1)+3;
	*(i1*)(intptr_t)(ws+4336) = v4316;
	i8 v4317 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4317)();

	i1 v4318 = (i1)+115;
	*(i1*)(intptr_t)(ws+4336) = v4318;
	i8 v4319 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4319)();

	i8 v4320 = (i8)(intptr_t)(ws+4136);
	i8 v4321 = *(i8*)(intptr_t)v4320;
	i8 v4322 = *(i8*)(intptr_t)v4321;
	*(i8*)(intptr_t)(ws+4232) = v4322;
	i8 v4323 = (i8)(intptr_t)(f185_E_string);

	((void(*)(void))(intptr_t)v4323)();

	i2 v4324 = *(i2*)(intptr_t)(ws+4240);
	i8 v4325 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v4325 = v4324;

	i8 v4326 = (i8)(intptr_t)(ws+4224);
	i2 v4327 = *(i2*)(intptr_t)v4326;
	*(i2*)(intptr_t)(ws+4272) = v4327;
	i8 v4328 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(void))(intptr_t)v4328)();

	i8 v4329 = (i8)(intptr_t)c02_s01bd;
	*(i8*)(intptr_t)(ws+4320) = v4329;
	i8 v4330 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4330)();

}
	void f186_FlushInitialiserBuffer(void);
const i1 c02_s01be[] = { 0x7d,0x3b,0x0a,0 };
	void f92_E(void);
	void f107_EmitterCloseStream(void);

// emit_177 workspace at ws+4224 length ws+0
void f362_emit_177(void) {

	i8 v4331 = (i8)(intptr_t)(f186_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v4331)();

	i8 v4332 = (i8)(intptr_t)c02_s01be;
	*(i8*)(intptr_t)(ws+4320) = v4332;
	i8 v4333 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4333)();

	i8 v4334 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v4334)();

}
	void f88_E_tab(void);

// emit_180 workspace at ws+4224 length ws+0
void f363_emit_180(void) {

	i8 v4335 = (i8)(intptr_t)(f88_E_tab);

	((void(*)(void))(intptr_t)v4335)();

}
	void f92_E(void);
	void f86_E_space(void);

// emit_181 workspace at ws+4224 length ws+0
void f364_emit_181(void) {

	i8 v4336 = (i8)(intptr_t)(ws+4136);
	i8 v4337 = *(i8*)(intptr_t)v4336;
	i8 v4338 = *(i8*)(intptr_t)v4337;
	*(i8*)(intptr_t)(ws+4320) = v4338;
	i8 v4339 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4339)();

	i8 v4340 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4340)();

}
const i1 c02_s01bf[] = { 0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s01c0[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f157_E_symref(void);
const i1 c02_s01c1[] = { 0x29,0 };
	void f92_E(void);
	void f86_E_space(void);

// emit_182 workspace at ws+4224 length ws+0
void f365_emit_182(void) {

	i8 v4341 = (i8)(intptr_t)c02_s01bf;
	*(i8*)(intptr_t)(ws+4320) = v4341;
	i8 v4342 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4342)();

	i8 v4343 = (i8)(intptr_t)(ws+4136);
	i8 v4344 = *(i8*)(intptr_t)v4343;
	i8 v4345 = v4344+(+14);
	i1 v4346 = *(i1*)(intptr_t)v4345;
	*(i1*)(intptr_t)(ws+4264) = v4346;
	i8 v4347 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v4347)();

	i8 v4348 = (i8)(intptr_t)c02_s01c0;
	*(i8*)(intptr_t)(ws+4320) = v4348;
	i8 v4349 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4349)();

	i8 v4350 = (i8)(intptr_t)(ws+4136);
	i8 v4351 = *(i8*)(intptr_t)v4350;
	*(i8*)(intptr_t)(ws+4248) = v4351;
	i2 v4352 = (i2)+0;
	*(i2*)(intptr_t)(ws+4256) = v4352;
	i8 v4353 = (i8)(intptr_t)(f157_E_symref);

	((void(*)(void))(intptr_t)v4353)();

	i8 v4354 = (i8)(intptr_t)c02_s01c1;
	*(i8*)(intptr_t)(ws+4320) = v4354;
	i8 v4355 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4355)();

	i8 v4356 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4356)();

}
const i1 c02_s01c2[] = { 0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f156_E_subref_sig(void);
const i1 c02_s01c3[] = { 0x29,0 };
	void f92_E(void);
	void f86_E_space(void);

// emit_183 workspace at ws+4224 length ws+0
void f366_emit_183(void) {

	i8 v4357 = (i8)(intptr_t)c02_s01c2;
	*(i8*)(intptr_t)(ws+4320) = v4357;
	i8 v4358 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4358)();

	i8 v4359 = (i8)(intptr_t)(ws+4136);
	i8 v4360 = *(i8*)(intptr_t)v4359;
	i8 v4361 = *(i8*)(intptr_t)v4360;
	*(i8*)(intptr_t)(ws+4232) = v4361;
	i8 v4362 = (i8)(intptr_t)(f156_E_subref_sig);

	((void(*)(void))(intptr_t)v4362)();

	i8 v4363 = (i8)(intptr_t)c02_s01c3;
	*(i8*)(intptr_t)(ws+4320) = v4363;
	i8 v4364 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4364)();

	i8 v4365 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4365)();

}
	void f83_E_b8(void);
	void f98_E_i32(void);
	void f83_E_b8(void);

// emit_184 workspace at ws+4224 length ws+0
void f367_emit_184(void) {

	i1 v4366 = (i1)+40;
	*(i1*)(intptr_t)(ws+4336) = v4366;
	i8 v4367 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4367)();

	i8 v4368 = (i8)(intptr_t)(ws+4136);
	i8 v4369 = *(i8*)(intptr_t)v4368;
	i4 v4370 = *(i4*)(intptr_t)v4369;
	*(i4*)(intptr_t)(ws+4256) = v4370;
	i8 v4371 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v4371)();

	i1 v4372 = (i1)+41;
	*(i1*)(intptr_t)(ws+4336) = v4372;
	i8 v4373 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4373)();

}
	void f89_E_nl(void);

// emit_185 workspace at ws+4224 length ws+0
void f368_emit_185(void) {

	i8 v4374 = (i8)(intptr_t)(f89_E_nl);

	((void(*)(void))(intptr_t)v4374)();

}

// nop_emitter workspace at ws+4224 length ws+0
void f369_nop_emitter(void) {

}
	void f192_emit_0(void);
	void f193_emit_1(void);
	void f194_emit_2(void);
	void f195_emit_3(void);
	void f196_emit_4(void);
	void f197_emit_5(void);
	void f198_emit_6(void);
	void f199_emit_7(void);
	void f200_emit_8(void);
	void f201_emit_9(void);
	void f202_emit_10(void);
	void f203_emit_11(void);
	void f204_emit_12(void);
	void f205_emit_13(void);
	void f206_emit_14(void);
	void f207_emit_15(void);
	void f208_emit_16(void);
	void f209_emit_17(void);
	void f210_emit_18(void);
	void f211_emit_19(void);
	void f212_emit_20(void);
	void f213_emit_21(void);
	void f214_emit_22(void);
	void f215_emit_23(void);
	void f216_emit_24(void);
	void f217_emit_25(void);
	void f218_emit_26(void);
	void f219_emit_27(void);
	void f220_emit_28(void);
	void f221_emit_29(void);
	void f222_emit_30(void);
	void f223_emit_31(void);
	void f224_emit_32(void);
	void f225_emit_33(void);
	void f226_emit_34(void);
	void f227_emit_35(void);
	void f228_emit_36(void);
	void f229_emit_37(void);
	void f230_emit_38(void);
	void f231_emit_39(void);
	void f232_emit_40(void);
	void f233_emit_41(void);
	void f234_emit_42(void);
	void f235_emit_43(void);
	void f236_emit_44(void);
	void f369_nop_emitter(void);
	void f369_nop_emitter(void);
	void f237_emit_47(void);
	void f238_emit_48(void);
	void f239_emit_49(void);
	void f240_emit_50(void);
	void f241_emit_51(void);
	void f242_emit_52(void);
	void f369_nop_emitter(void);
	void f243_emit_54(void);
	void f244_emit_55(void);
	void f245_emit_56(void);
	void f246_emit_57(void);
	void f247_emit_58(void);
	void f248_emit_59(void);
	void f249_emit_60(void);
	void f250_emit_61(void);
	void f251_emit_62(void);
	void f252_emit_63(void);
	void f253_emit_64(void);
	void f254_emit_65(void);
	void f255_emit_66(void);
	void f256_emit_67(void);
	void f257_emit_68(void);
	void f258_emit_69(void);
	void f259_emit_70(void);
	void f260_emit_71(void);
	void f261_emit_72(void);
	void f262_emit_73(void);
	void f263_emit_74(void);
	void f264_emit_75(void);
	void f265_emit_76(void);
	void f266_emit_77(void);
	void f267_emit_78(void);
	void f268_emit_79(void);
	void f269_emit_80(void);
	void f270_emit_81(void);
	void f271_emit_82(void);
	void f272_emit_83(void);
	void f273_emit_84(void);
	void f274_emit_85(void);
	void f275_emit_86(void);
	void f276_emit_87(void);
	void f277_emit_88(void);
	void f278_emit_89(void);
	void f279_emit_90(void);
	void f280_emit_91(void);
	void f281_emit_92(void);
	void f282_emit_93(void);
	void f283_emit_94(void);
	void f284_emit_95(void);
	void f285_emit_96(void);
	void f286_emit_97(void);
	void f287_emit_98(void);
	void f288_emit_99(void);
	void f289_emit_100(void);
	void f290_emit_101(void);
	void f291_emit_102(void);
	void f292_emit_103(void);
	void f293_emit_104(void);
	void f294_emit_105(void);
	void f295_emit_106(void);
	void f296_emit_107(void);
	void f297_emit_108(void);
	void f298_emit_109(void);
	void f299_emit_110(void);
	void f300_emit_111(void);
	void f301_emit_112(void);
	void f302_emit_113(void);
	void f303_emit_114(void);
	void f304_emit_115(void);
	void f305_emit_116(void);
	void f306_emit_117(void);
	void f307_emit_118(void);
	void f308_emit_119(void);
	void f309_emit_120(void);
	void f310_emit_121(void);
	void f311_emit_122(void);
	void f312_emit_123(void);
	void f313_emit_124(void);
	void f314_emit_125(void);
	void f315_emit_126(void);
	void f316_emit_127(void);
	void f317_emit_128(void);
	void f318_emit_129(void);
	void f319_emit_130(void);
	void f320_emit_131(void);
	void f321_emit_132(void);
	void f322_emit_133(void);
	void f323_emit_134(void);
	void f324_emit_135(void);
	void f325_emit_136(void);
	void f326_emit_137(void);
	void f327_emit_138(void);
	void f328_emit_139(void);
	void f329_emit_140(void);
	void f330_emit_141(void);
	void f331_emit_142(void);
	void f332_emit_143(void);
	void f369_nop_emitter(void);
	void f369_nop_emitter(void);
	void f369_nop_emitter(void);
	void f369_nop_emitter(void);
	void f333_emit_148(void);
	void f334_emit_149(void);
	void f335_emit_150(void);
	void f336_emit_151(void);
	void f337_emit_152(void);
	void f338_emit_153(void);
	void f339_emit_154(void);
	void f340_emit_155(void);
	void f341_emit_156(void);
	void f342_emit_157(void);
	void f343_emit_158(void);
	void f344_emit_159(void);
	void f345_emit_160(void);
	void f346_emit_161(void);
	void f347_emit_162(void);
	void f348_emit_163(void);
	void f349_emit_164(void);
	void f350_emit_165(void);
	void f351_emit_166(void);
	void f352_emit_167(void);
	void f353_emit_168(void);
	void f354_emit_169(void);
	void f355_emit_170(void);
	void f356_emit_171(void);
	void f357_emit_172(void);
	void f358_emit_173(void);
	void f359_emit_174(void);
	void f360_emit_175(void);
	void f361_emit_176(void);
	void f362_emit_177(void);
	void f369_nop_emitter(void);
	void f369_nop_emitter(void);
	void f363_emit_180(void);
	void f364_emit_181(void);
	void f365_emit_182(void);
	void f366_emit_183(void);
	void f367_emit_184(void);
	void f368_emit_185(void);
static data f190_EmitOneInstruction_s02a9[] = {

	{ .ptr = (void*)f192_emit_0 },

	{ .ptr = (void*)f193_emit_1 },

	{ .ptr = (void*)f194_emit_2 },

	{ .ptr = (void*)f195_emit_3 },

	{ .ptr = (void*)f196_emit_4 },

	{ .ptr = (void*)f197_emit_5 },

	{ .ptr = (void*)f198_emit_6 },

	{ .ptr = (void*)f199_emit_7 },

	{ .ptr = (void*)f200_emit_8 },

	{ .ptr = (void*)f201_emit_9 },

	{ .ptr = (void*)f202_emit_10 },

	{ .ptr = (void*)f203_emit_11 },

	{ .ptr = (void*)f204_emit_12 },

	{ .ptr = (void*)f205_emit_13 },

	{ .ptr = (void*)f206_emit_14 },

	{ .ptr = (void*)f207_emit_15 },

	{ .ptr = (void*)f208_emit_16 },

	{ .ptr = (void*)f209_emit_17 },

	{ .ptr = (void*)f210_emit_18 },

	{ .ptr = (void*)f211_emit_19 },

	{ .ptr = (void*)f212_emit_20 },

	{ .ptr = (void*)f213_emit_21 },

	{ .ptr = (void*)f214_emit_22 },

	{ .ptr = (void*)f215_emit_23 },

	{ .ptr = (void*)f216_emit_24 },

	{ .ptr = (void*)f217_emit_25 },

	{ .ptr = (void*)f218_emit_26 },

	{ .ptr = (void*)f219_emit_27 },

	{ .ptr = (void*)f220_emit_28 },

	{ .ptr = (void*)f221_emit_29 },

	{ .ptr = (void*)f222_emit_30 },

	{ .ptr = (void*)f223_emit_31 },

	{ .ptr = (void*)f224_emit_32 },

	{ .ptr = (void*)f225_emit_33 },

	{ .ptr = (void*)f226_emit_34 },

	{ .ptr = (void*)f227_emit_35 },

	{ .ptr = (void*)f228_emit_36 },

	{ .ptr = (void*)f229_emit_37 },

	{ .ptr = (void*)f230_emit_38 },

	{ .ptr = (void*)f231_emit_39 },

	{ .ptr = (void*)f232_emit_40 },

	{ .ptr = (void*)f233_emit_41 },

	{ .ptr = (void*)f234_emit_42 },

	{ .ptr = (void*)f235_emit_43 },

	{ .ptr = (void*)f236_emit_44 },

	{ .ptr = (void*)f369_nop_emitter },

	{ .ptr = (void*)f369_nop_emitter },

	{ .ptr = (void*)f237_emit_47 },

	{ .ptr = (void*)f238_emit_48 },

	{ .ptr = (void*)f239_emit_49 },

	{ .ptr = (void*)f240_emit_50 },

	{ .ptr = (void*)f241_emit_51 },

	{ .ptr = (void*)f242_emit_52 },

	{ .ptr = (void*)f369_nop_emitter },

	{ .ptr = (void*)f243_emit_54 },

	{ .ptr = (void*)f244_emit_55 },

	{ .ptr = (void*)f245_emit_56 },

	{ .ptr = (void*)f246_emit_57 },

	{ .ptr = (void*)f247_emit_58 },

	{ .ptr = (void*)f248_emit_59 },

	{ .ptr = (void*)f249_emit_60 },

	{ .ptr = (void*)f250_emit_61 },

	{ .ptr = (void*)f251_emit_62 },

	{ .ptr = (void*)f252_emit_63 },

	{ .ptr = (void*)f253_emit_64 },

	{ .ptr = (void*)f254_emit_65 },

	{ .ptr = (void*)f255_emit_66 },

	{ .ptr = (void*)f256_emit_67 },

	{ .ptr = (void*)f257_emit_68 },

	{ .ptr = (void*)f258_emit_69 },

	{ .ptr = (void*)f259_emit_70 },

	{ .ptr = (void*)f260_emit_71 },

	{ .ptr = (void*)f261_emit_72 },

	{ .ptr = (void*)f262_emit_73 },

	{ .ptr = (void*)f263_emit_74 },

	{ .ptr = (void*)f264_emit_75 },

	{ .ptr = (void*)f265_emit_76 },

	{ .ptr = (void*)f266_emit_77 },

	{ .ptr = (void*)f267_emit_78 },

	{ .ptr = (void*)f268_emit_79 },

	{ .ptr = (void*)f269_emit_80 },

	{ .ptr = (void*)f270_emit_81 },

	{ .ptr = (void*)f271_emit_82 },

	{ .ptr = (void*)f272_emit_83 },

	{ .ptr = (void*)f273_emit_84 },

	{ .ptr = (void*)f274_emit_85 },

	{ .ptr = (void*)f275_emit_86 },

	{ .ptr = (void*)f276_emit_87 },

	{ .ptr = (void*)f277_emit_88 },

	{ .ptr = (void*)f278_emit_89 },

	{ .ptr = (void*)f279_emit_90 },

	{ .ptr = (void*)f280_emit_91 },

	{ .ptr = (void*)f281_emit_92 },

	{ .ptr = (void*)f282_emit_93 },

	{ .ptr = (void*)f283_emit_94 },

	{ .ptr = (void*)f284_emit_95 },

	{ .ptr = (void*)f285_emit_96 },

	{ .ptr = (void*)f286_emit_97 },

	{ .ptr = (void*)f287_emit_98 },

	{ .ptr = (void*)f288_emit_99 },

	{ .ptr = (void*)f289_emit_100 },

	{ .ptr = (void*)f290_emit_101 },

	{ .ptr = (void*)f291_emit_102 },

	{ .ptr = (void*)f292_emit_103 },

	{ .ptr = (void*)f293_emit_104 },

	{ .ptr = (void*)f294_emit_105 },

	{ .ptr = (void*)f295_emit_106 },

	{ .ptr = (void*)f296_emit_107 },

	{ .ptr = (void*)f297_emit_108 },

	{ .ptr = (void*)f298_emit_109 },

	{ .ptr = (void*)f299_emit_110 },

	{ .ptr = (void*)f300_emit_111 },

	{ .ptr = (void*)f301_emit_112 },

	{ .ptr = (void*)f302_emit_113 },

	{ .ptr = (void*)f303_emit_114 },

	{ .ptr = (void*)f304_emit_115 },

	{ .ptr = (void*)f305_emit_116 },

	{ .ptr = (void*)f306_emit_117 },

	{ .ptr = (void*)f307_emit_118 },

	{ .ptr = (void*)f308_emit_119 },

	{ .ptr = (void*)f309_emit_120 },

	{ .ptr = (void*)f310_emit_121 },

	{ .ptr = (void*)f311_emit_122 },

	{ .ptr = (void*)f312_emit_123 },

	{ .ptr = (void*)f313_emit_124 },

	{ .ptr = (void*)f314_emit_125 },

	{ .ptr = (void*)f315_emit_126 },

	{ .ptr = (void*)f316_emit_127 },

	{ .ptr = (void*)f317_emit_128 },

	{ .ptr = (void*)f318_emit_129 },

	{ .ptr = (void*)f319_emit_130 },

	{ .ptr = (void*)f320_emit_131 },

	{ .ptr = (void*)f321_emit_132 },

	{ .ptr = (void*)f322_emit_133 },

	{ .ptr = (void*)f323_emit_134 },

	{ .ptr = (void*)f324_emit_135 },

	{ .ptr = (void*)f325_emit_136 },

	{ .ptr = (void*)f326_emit_137 },

	{ .ptr = (void*)f327_emit_138 },

	{ .ptr = (void*)f328_emit_139 },

	{ .ptr = (void*)f329_emit_140 },

	{ .ptr = (void*)f330_emit_141 },

	{ .ptr = (void*)f331_emit_142 },

	{ .ptr = (void*)f332_emit_143 },

	{ .ptr = (void*)f369_nop_emitter },

	{ .ptr = (void*)f369_nop_emitter },

	{ .ptr = (void*)f369_nop_emitter },

	{ .ptr = (void*)f369_nop_emitter },

	{ .ptr = (void*)f333_emit_148 },

	{ .ptr = (void*)f334_emit_149 },

	{ .ptr = (void*)f335_emit_150 },

	{ .ptr = (void*)f336_emit_151 },

	{ .ptr = (void*)f337_emit_152 },

	{ .ptr = (void*)f338_emit_153 },

	{ .ptr = (void*)f339_emit_154 },

	{ .ptr = (void*)f340_emit_155 },

	{ .ptr = (void*)f341_emit_156 },

	{ .ptr = (void*)f342_emit_157 },

	{ .ptr = (void*)f343_emit_158 },

	{ .ptr = (void*)f344_emit_159 },

	{ .ptr = (void*)f345_emit_160 },

	{ .ptr = (void*)f346_emit_161 },

	{ .ptr = (void*)f347_emit_162 },

	{ .ptr = (void*)f348_emit_163 },

	{ .ptr = (void*)f349_emit_164 },

	{ .ptr = (void*)f350_emit_165 },

	{ .ptr = (void*)f351_emit_166 },

	{ .ptr = (void*)f352_emit_167 },

	{ .ptr = (void*)f353_emit_168 },

	{ .ptr = (void*)f354_emit_169 },

	{ .ptr = (void*)f355_emit_170 },

	{ .ptr = (void*)f356_emit_171 },

	{ .ptr = (void*)f357_emit_172 },

	{ .ptr = (void*)f358_emit_173 },

	{ .ptr = (void*)f359_emit_174 },

	{ .ptr = (void*)f360_emit_175 },

	{ .ptr = (void*)f361_emit_176 },

	{ .ptr = (void*)f362_emit_177 },

	{ .ptr = (void*)f369_nop_emitter },

	{ .ptr = (void*)f369_nop_emitter },

	{ .ptr = (void*)f363_emit_180 },

	{ .ptr = (void*)f364_emit_181 },

	{ .ptr = (void*)f365_emit_182 },

	{ .ptr = (void*)f366_emit_183 },

	{ .ptr = (void*)f367_emit_184 },

	{ .ptr = (void*)f368_emit_185 },

};

// EmitOneInstruction workspace at ws+4120 length ws+98
void f190_EmitOneInstruction(void) {

	i8 v3356 = (i8)(intptr_t)(ws+4128);
	i8 v3357 = *(i8*)(intptr_t)v3356;
	i8 v3358 = v3357+(+16);
	i8 v3359 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v3359 = v3358;

	i8 v3360 = (i8)(intptr_t)(ws+4136);
	i8 v3361 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3361 = v3360;

	i1 v3362 = (i1)+4;
	i8 v3363 = (i8)(intptr_t)(ws+4216);
	*(i1*)(intptr_t)v3363 = v3362;

c02_029e:;

	i8 v3364 = (i8)(intptr_t)(ws+4216);
	i1 v3365 = *(i1*)(intptr_t)v3364;
	i1 v3366 = (i1)+0;
	if (v3365==v3366) goto c02_02a3; else goto c02_02a2;

c02_02a2:;

	i8 v3367 = (i8)(intptr_t)(ws+4200);
	i8 v3368 = *(i8*)(intptr_t)v3367;
	i8 v3369 = *(i8*)(intptr_t)v3368;
	i8 v3370 = (i8)(intptr_t)(ws+4208);
	i8 v3371 = *(i8*)(intptr_t)v3370;
	*(i8*)(intptr_t)v3371 = v3369;

	i8 v3372 = (i8)(intptr_t)(ws+4208);
	i8 v3373 = *(i8*)(intptr_t)v3372;
	i8 v3374 = *(i8*)(intptr_t)v3373;
	i8 v3375 = (i8)+0;
	if (v3374==v3375) goto c02_02a8; else goto c02_02a7;

c02_02a7:;

	i8 v3376 = (i8)(intptr_t)(ws+4208);
	i8 v3377 = *(i8*)(intptr_t)v3376;
	i8 v3378 = *(i8*)(intptr_t)v3377;
	i8 v3379 = v3378+(+57);
	i1 v3380 = *(i1*)(intptr_t)v3379;
	i8 v3381 = (i8)(intptr_t)(ws+4208);
	i8 v3382 = *(i8*)(intptr_t)v3381;
	i8 v3383 = v3382+(+8);
	*(i1*)(intptr_t)v3383 = v3380;

c02_02a8:;

c02_02a4:;

	i8 v3384 = (i8)(intptr_t)(ws+4200);
	i8 v3385 = *(i8*)(intptr_t)v3384;
	i8 v3386 = v3385+(+8);
	i8 v3387 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v3387 = v3386;

	i8 v3388 = (i8)(intptr_t)(ws+4208);
	i8 v3389 = *(i8*)(intptr_t)v3388;
	i8 v3390 = v3389+(+16);
	i8 v3391 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3391 = v3390;

	i8 v3392 = (i8)(intptr_t)(ws+4216);
	i1 v3393 = *(i1*)(intptr_t)v3392;
	i1 v3394 = v3393+(-1);
	i8 v3395 = (i8)(intptr_t)(ws+4216);
	*(i1*)(intptr_t)v3395 = v3394;

	goto c02_029e;

c02_02a3:;

	i8 v3396 = (i8)(intptr_t)(ws+4128);
	i8 v3397 = *(i8*)(intptr_t)v3396;
	i8 v3398 = v3397+(+49);
	i1 v3399 = *(i1*)(intptr_t)v3398;
	i8 v3400 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v3400 = v3399;





















































































































































































	i8 v4375 = (i8)(intptr_t)((i1*)f190_EmitOneInstruction_s02a9);
	i8 v4376 = (i8)(intptr_t)(ws+4120);
	i1 v4377 = *(i1*)(intptr_t)v4376;
	i8 v4378 = v4377;
	i1 v4379 = (i1)+3;
	i8 v4380 = ((i8)v4378)<<v4379;
	i8 v4381 = v4375+v4380;
	i8 v4382 = *(i8*)(intptr_t)v4381;

	((void(*)(void))(intptr_t)v4382)();

}
static data f3___main_s02aa[] = {








	{ .i1 = { 0x38,0x28,0x28,0x32,0x2d,0x33,0x2e,0x34}},








	{ .i1 = { 0x2f,0x35,0x30,0x9d,0x28,0x9e,0x28,0x9f}},








	{ .i1 = { 0x28,0xa0,0x28,0x84,0x28,0x85,0x28,0x86}},








	{ .i1 = { 0x28,0x87,0x28,0xa2,0x28,0xa3,0x28,0xa4}},








	{ .i1 = { 0x28,0xa5,0x28,0x89,0x28,0x8a,0x28,0x8b}},








	{ .i1 = { 0x28,0x8c,0x28,0x93,0x28,0x94,0x28,0x95}},








	{ .i1 = { 0x28,0x96,0x28,0x8e,0x28,0x8f,0x28,0x90}},








	{ .i1 = { 0x28,0x91,0x28,0x98,0x28,0x99,0x28,0x9a}},








	{ .i1 = { 0x28,0x9b,0x28,0xa7,0x28,0xa8,0x28,0xa9}},








	{ .i1 = { 0x28,0xaa,0x28,0xac,0x28,0xad,0x28,0xae}},








	{ .i1 = { 0x28,0xaf,0x28,0xb1,0x28,0xb2,0x28,0xb3}},








	{ .i1 = { 0x28,0xb4,0x28,0x02,0x03,0x1a,0x1b,0x1c}},








	{ .i1 = { 0x04,0x05,0x1d,0x01,0x1f,0x20,0x21,0x22}},








	{ .i1 = { 0x24,0x25,0x26,0x27,0x28,0x28,0x28,0x28}},








	{ .i1 = { 0x2a,0x2b,0x2d,0x2e,0x2f,0x30,0x9d,0x9e}},








	{ .i1 = { 0x9f,0xa0,0x84,0x85,0x86,0x87,0xa2,0xa3}},








	{ .i1 = { 0xa4,0xa5,0x89,0x8a,0x8b,0x8c,0x93,0x94}},








	{ .i1 = { 0x95,0x96,0x8e,0x8f,0x90,0x91,0x98,0x99}},








	{ .i1 = { 0x9a,0x9b,0xa7,0xa8,0xa9,0xaa,0xac,0xad}},








	{ .i1 = { 0xae,0xaf,0xb1,0xb2,0xb3,0xb4,0x70,0x71}},








	{ .i1 = { 0x72,0x73,0x6b,0x6c,0x6d,0x6e,0x75,0x76}},








	{ .i1 = { 0x77,0x78,0x7a,0x7b,0x7c,0x7d,0x7f,0x80}},








	{ .i1 = { 0x81,0x82,0x39,0x3a,0x3b,0x3c,0x43,0x44}},








	{ .i1 = { 0x45,0x46,0x3e,0x3f,0x40,0x41,0x48,0x49}},








	{ .i1 = { 0x4a,0x4b,0x4d,0x4e,0x4f,0x50,0x52,0x53}},








	{ .i1 = { 0x54,0x55,0x58,0x59,0x5a,0x5c,0x5e,0x5f}},








	{ .i1 = { 0x61,0x62,0x64,0x66,0x67,0x68,0x29,0x06}},








	{ .i1 = { 0x08,0x09,0x0a,0x0b,0x0e,0x0d,0x0c,0x0f}},








	{ .i1 = { 0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17}},

};
static data f3___main_s02ab[] = {








	{ .i1 = { 0x01,0x08,0x02,0x08,0x04,0x08,0x08,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x10,0x08,0x10,0x01,0x10,0x02,0x10,0x04}},








	{ .i1 = { 0x10,0x08,0x08,0x08,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x02}},








	{ .i1 = { 0x04,0x08,0x01,0x02,0x04,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x01,0x04,0x01,0x08,0x01,0x01,0x01}},








	{ .i1 = { 0x02,0x01,0x04,0x01,0x08,0x01,0x01,0x01}},








	{ .i1 = { 0x02,0x01,0x04,0x01,0x08,0x01,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x02}},








	{ .i1 = { 0x04,0x08,0x01,0x01,0x01,0x02,0x02,0x02}},







	{ .i1 = { 0x04,0x04,0x04,0x08,0x08,0x08}},
};
static data f3___main_s02ac[] = {








	{ .i1 = { 0x00,0x00,0x00,0x00,0x07,0x07,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x05,0x0f,0x0a,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x05,0x0f,0x0a,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x05,0x0f,0x0a,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x05,0x0f,0x0a,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x10,0x10,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x10,0x10,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x10,0x10,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x10,0x10,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x10,0x10,0x00,0x01,0x07,0x06,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x01,0x00,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x01,0x01,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x02,0x02,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x01,0x00,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x01,0x00,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x04,0x04,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x08,0x08,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x07,0x06,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x07,0x06,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x04,0x04,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x08,0x08,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x07,0x06,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x07,0x06,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x04,0x04,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x08,0x08,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x07,0x06,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x07,0x06,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x04,0x04,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x08,0x08,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x07,0x06,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x07,0x06,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x04,0x04,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x08,0x08,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x07,0x06,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x07,0x06,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x04,0x04,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x08,0x08,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x03,0x02,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x03,0x02,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x04,0x04,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x08,0x08,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x07,0x06,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x07,0x06,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x04,0x04,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x08,0x08,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x07,0x06,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x07,0x06,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x00,0x00,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x07,0x06,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x07,0x06,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x00,0x00,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x03,0x02,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x03,0x02,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x08,0x08,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x01,0x01,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x03,0x02,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x03,0x02,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x01,0x01,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x02,0x02,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},







	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00}},
};

// PopulateMatchBuffer workspace at ws+4176 length ws+24
void f370_PopulateMatchBuffer(void) {

	i8 v4383 = (i8)(intptr_t)(ws+4184);
	i8 v4384 = *(i8*)(intptr_t)v4383;
	i8 v4385 = *(i8*)(intptr_t)v4384;
	i8 v4386 = v4385+(+256);
	i1 v4387 = *(i1*)(intptr_t)v4386;
	i8 v4388 = (i8)(intptr_t)(ws+4192);
	i8 v4389 = *(i8*)(intptr_t)v4388;
	*(i1*)(intptr_t)v4389 = v4387;

	i8 v4390 = (i8)(intptr_t)(ws+4184);
	i8 v4391 = *(i8*)(intptr_t)v4390;
	i8 v4392 = *(i8*)(intptr_t)v4391;
	i8 v4393 = v4392+(+24);
	i8 v4394 = *(i8*)(intptr_t)v4393;
	i8 v4395 = (i8)(intptr_t)(ws+4184);
	i8 v4396 = *(i8*)(intptr_t)v4395;
	i8 v4397 = v4396+(+8);
	*(i8*)(intptr_t)v4397 = v4394;

	i8 v4398 = (i8)(intptr_t)(ws+4184);
	i8 v4399 = *(i8*)(intptr_t)v4398;
	i8 v4400 = v4399+(+8);
	i8 v4401 = *(i8*)(intptr_t)v4400;
	i8 v4402 = (i8)+0;
	if (v4401==v4402) goto c02_02b1; else goto c02_02b0;

c02_02b0:;

	i8 v4403 = (i8)(intptr_t)(ws+4184);
	i8 v4404 = *(i8*)(intptr_t)v4403;
	i8 v4405 = v4404+(+8);
	i8 v4406 = *(i8*)(intptr_t)v4405;
	i8 v4407 = v4406+(+256);
	i1 v4408 = *(i1*)(intptr_t)v4407;
	i8 v4409 = (i8)(intptr_t)(ws+4192);
	i8 v4410 = *(i8*)(intptr_t)v4409;
	i8 v4411 = v4410+(+1);
	*(i1*)(intptr_t)v4411 = v4408;

c02_02b1:;

c02_02ad:;

	i8 v4412 = (i8)(intptr_t)(ws+4184);
	i8 v4413 = *(i8*)(intptr_t)v4412;
	i8 v4414 = *(i8*)(intptr_t)v4413;
	i8 v4415 = v4414+(+32);
	i8 v4416 = *(i8*)(intptr_t)v4415;
	i8 v4417 = (i8)(intptr_t)(ws+4184);
	i8 v4418 = *(i8*)(intptr_t)v4417;
	i8 v4419 = v4418+(+16);
	*(i8*)(intptr_t)v4419 = v4416;

	i8 v4420 = (i8)(intptr_t)(ws+4184);
	i8 v4421 = *(i8*)(intptr_t)v4420;
	i8 v4422 = v4421+(+16);
	i8 v4423 = *(i8*)(intptr_t)v4422;
	i8 v4424 = (i8)+0;
	if (v4423==v4424) goto c02_02b6; else goto c02_02b5;

c02_02b5:;

	i8 v4425 = (i8)(intptr_t)(ws+4184);
	i8 v4426 = *(i8*)(intptr_t)v4425;
	i8 v4427 = v4426+(+16);
	i8 v4428 = *(i8*)(intptr_t)v4427;
	i8 v4429 = v4428+(+256);
	i1 v4430 = *(i1*)(intptr_t)v4429;
	i8 v4431 = (i8)(intptr_t)(ws+4192);
	i8 v4432 = *(i8*)(intptr_t)v4431;
	i8 v4433 = v4432+(+2);
	*(i1*)(intptr_t)v4433 = v4430;

	i8 v4434 = (i8)(intptr_t)(ws+4184);
	i8 v4435 = *(i8*)(intptr_t)v4434;
	i8 v4436 = v4435+(+16);
	i8 v4437 = *(i8*)(intptr_t)v4436;
	i8 v4438 = v4437+(+24);
	i8 v4439 = *(i8*)(intptr_t)v4438;
	i8 v4440 = (i8)(intptr_t)(ws+4184);
	i8 v4441 = *(i8*)(intptr_t)v4440;
	i8 v4442 = v4441+(+24);
	*(i8*)(intptr_t)v4442 = v4439;

	i8 v4443 = (i8)(intptr_t)(ws+4184);
	i8 v4444 = *(i8*)(intptr_t)v4443;
	i8 v4445 = v4444+(+24);
	i8 v4446 = *(i8*)(intptr_t)v4445;
	i8 v4447 = (i8)+0;
	if (v4446==v4447) goto c02_02bb; else goto c02_02ba;

c02_02ba:;

	i8 v4448 = (i8)(intptr_t)(ws+4184);
	i8 v4449 = *(i8*)(intptr_t)v4448;
	i8 v4450 = v4449+(+24);
	i8 v4451 = *(i8*)(intptr_t)v4450;
	i8 v4452 = v4451+(+256);
	i1 v4453 = *(i1*)(intptr_t)v4452;
	i8 v4454 = (i8)(intptr_t)(ws+4192);
	i8 v4455 = *(i8*)(intptr_t)v4454;
	i8 v4456 = v4455+(+3);
	*(i1*)(intptr_t)v4456 = v4453;

c02_02bb:;

c02_02b7:;

c02_02b6:;

c02_02b2:;

}

// IsStackedRegister workspace at ws+4256 length ws+16
void f371_IsStackedRegister(void) {

	i1 v4457 = (i1)+0;
	i8 v4458 = (i8)(intptr_t)(ws+4257);
	*(i1*)(intptr_t)v4458 = v4457;

	i8 v4459 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v4460 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v4460 = v4459;

c02_02bc:;

	i8 v4461 = (i8)(intptr_t)(ws+4264);
	i8 v4462 = *(i8*)(intptr_t)v4461;
	i8 v4463 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v4462==v4463) goto c02_02c1; else goto c02_02c0;

c02_02c0:;

	i8 v4464 = (i8)(intptr_t)(ws+4264);
	i8 v4465 = *(i8*)(intptr_t)v4464;
	i8 v4466 = v4465+(+8);
	i1 v4467 = *(i1*)(intptr_t)v4466;
	i8 v4468 = (i8)(intptr_t)(ws+4256);
	i1 v4469 = *(i1*)(intptr_t)v4468;
	i1 v4470 = v4467&v4469;
	i1 v4471 = (i1)+0;
	if (v4470==v4471) goto c02_02c6; else goto c02_02c5;

c02_02c5:;

	i8 v4472 = (i8)(intptr_t)(ws+4264);
	i8 v4473 = *(i8*)(intptr_t)v4472;
	i8 v4474 = v4473+(+11);
	i1 v4475 = *(i1*)(intptr_t)v4474;
	i8 v4476 = (i8)(intptr_t)(ws+4257);
	*(i1*)(intptr_t)v4476 = v4475;

	return;

c02_02c6:;

c02_02c2:;

	i8 v4477 = (i8)(intptr_t)(ws+4264);
	i8 v4478 = *(i8*)(intptr_t)v4477;
	i8 v4479 = v4478+(+16);
	i8 v4480 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v4480 = v4479;

	goto c02_02bc;

c02_02c1:;

}

// CalculateBlockedRegisters workspace at ws+4152 length ws+17
void f372_CalculateBlockedRegisters(void) {

	i1 v4481 = (i1)+0;
	i8 v4482 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v4482 = v4481;

	i8 v4483 = (i8)(intptr_t)(ws+4152);
	i8 v4484 = *(i8*)(intptr_t)v4483;
	i8 v4485 = (i8)(intptr_t)(ws+4160);
	i8 v4486 = *(i8*)(intptr_t)v4485;
	if (v4484==v4486) goto c02_02ca; else goto c02_02cb;

c02_02ca:;

	return;

c02_02cb:;

c02_02c7:;

	i8 v4487 = (i8)(intptr_t)(ws+4152);
	i8 v4488 = *(i8*)(intptr_t)v4487;
	i8 v4489 = *(i8*)(intptr_t)v4488;
	i8 v4490 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v4490 = v4489;

c02_02cc:;

	i8 v4491 = (i8)(intptr_t)(ws+4152);
	i8 v4492 = *(i8*)(intptr_t)v4491;
	i8 v4493 = (i8)(intptr_t)(ws+4160);
	i8 v4494 = *(i8*)(intptr_t)v4493;
	if (v4492==v4494) goto c02_02d1; else goto c02_02d0;

c02_02d0:;

	i8 v4495 = (i8)(intptr_t)(ws+4168);
	i1 v4496 = *(i1*)(intptr_t)v4495;
	i8 v4497 = (i8)(intptr_t)(ws+4152);
	i8 v4498 = *(i8*)(intptr_t)v4497;
	i8 v4499 = v4498+(+64);
	i1 v4500 = *(i1*)(intptr_t)v4499;
	i1 v4501 = v4496|v4500;
	i8 v4502 = (i8)(intptr_t)(ws+4152);
	i8 v4503 = *(i8*)(intptr_t)v4502;
	i8 v4504 = v4503+(+66);
	i1 v4505 = *(i1*)(intptr_t)v4504;
	i1 v4506 = v4501|v4505;
	i8 v4507 = (i8)(intptr_t)(ws+4152);
	i8 v4508 = *(i8*)(intptr_t)v4507;
	i8 v4509 = v4508+(+65);
	i1 v4510 = *(i1*)(intptr_t)v4509;
	i1 v4511 = v4506|v4510;
	i8 v4512 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v4512 = v4511;

	i8 v4513 = (i8)(intptr_t)(ws+4152);
	i8 v4514 = *(i8*)(intptr_t)v4513;
	i8 v4515 = (i8)(intptr_t)(ws+4160);
	i8 v4516 = *(i8*)(intptr_t)v4515;
	if (v4514==v4516) goto c02_02d5; else goto c02_02d6;

c02_02d5:;

	goto c02_02d1;

c02_02d6:;

c02_02d2:;

	i8 v4517 = (i8)(intptr_t)(ws+4152);
	i8 v4518 = *(i8*)(intptr_t)v4517;
	i8 v4519 = *(i8*)(intptr_t)v4518;
	i8 v4520 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v4520 = v4519;

	goto c02_02cc;

c02_02d1:;

}

// BlockRegisters workspace at ws+4152 length ws+17
void f374_BlockRegisters(void) {

	i8 v4548 = (i8)(intptr_t)(ws+4152);
	i8 v4549 = *(i8*)(intptr_t)v4548;
	i8 v4550 = (i8)(intptr_t)(ws+4160);
	i8 v4551 = *(i8*)(intptr_t)v4550;
	if (v4549==v4551) goto c02_02df; else goto c02_02e0;

c02_02df:;

	return;

c02_02e0:;

c02_02dc:;

	i8 v4552 = (i8)(intptr_t)(ws+4152);
	i8 v4553 = *(i8*)(intptr_t)v4552;
	i8 v4554 = *(i8*)(intptr_t)v4553;
	i8 v4555 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v4555 = v4554;

c02_02e1:;

	i8 v4556 = (i8)(intptr_t)(ws+4152);
	i8 v4557 = *(i8*)(intptr_t)v4556;
	i8 v4558 = (i8)(intptr_t)(ws+4160);
	i8 v4559 = *(i8*)(intptr_t)v4558;
	if (v4557==v4559) goto c02_02e6; else goto c02_02e5;

c02_02e5:;

	i8 v4560 = (i8)(intptr_t)(ws+4152);
	i8 v4561 = *(i8*)(intptr_t)v4560;
	i8 v4562 = v4561+(+64);
	i1 v4563 = *(i1*)(intptr_t)v4562;
	i8 v4564 = (i8)(intptr_t)(ws+4168);
	i1 v4565 = *(i1*)(intptr_t)v4564;
	i1 v4566 = v4563|v4565;
	i8 v4567 = (i8)(intptr_t)(ws+4152);
	i8 v4568 = *(i8*)(intptr_t)v4567;
	i8 v4569 = v4568+(+64);
	*(i1*)(intptr_t)v4569 = v4566;

	i8 v4570 = (i8)(intptr_t)(ws+4152);
	i8 v4571 = *(i8*)(intptr_t)v4570;
	i8 v4572 = v4571+(+65);
	i1 v4573 = *(i1*)(intptr_t)v4572;
	i8 v4574 = (i8)(intptr_t)(ws+4168);
	i1 v4575 = *(i1*)(intptr_t)v4574;
	i1 v4576 = v4573|v4575;
	i8 v4577 = (i8)(intptr_t)(ws+4152);
	i8 v4578 = *(i8*)(intptr_t)v4577;
	i8 v4579 = v4578+(+65);
	*(i1*)(intptr_t)v4579 = v4576;

	i8 v4580 = (i8)(intptr_t)(ws+4152);
	i8 v4581 = *(i8*)(intptr_t)v4580;
	i8 v4582 = v4581+(+66);
	i1 v4583 = *(i1*)(intptr_t)v4582;
	i8 v4584 = (i8)(intptr_t)(ws+4168);
	i1 v4585 = *(i1*)(intptr_t)v4584;
	i1 v4586 = v4583|v4585;
	i8 v4587 = (i8)(intptr_t)(ws+4152);
	i8 v4588 = *(i8*)(intptr_t)v4587;
	i8 v4589 = v4588+(+66);
	*(i1*)(intptr_t)v4589 = v4586;

	i8 v4590 = (i8)(intptr_t)(ws+4152);
	i8 v4591 = *(i8*)(intptr_t)v4590;
	i8 v4592 = (i8)(intptr_t)(ws+4160);
	i8 v4593 = *(i8*)(intptr_t)v4592;
	if (v4591==v4593) goto c02_02ea; else goto c02_02eb;

c02_02ea:;

	goto c02_02e6;

c02_02eb:;

c02_02e7:;

	i8 v4594 = (i8)(intptr_t)(ws+4152);
	i8 v4595 = *(i8*)(intptr_t)v4594;
	i8 v4596 = *(i8*)(intptr_t)v4595;
	i8 v4597 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v4597 = v4596;

	goto c02_02e1;

c02_02e6:;

}
const i1 c02_s01c4[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };
	void f68_SimpleError(void);

// CreateSpill workspace at ws+4152 length ws+24
void f377_CreateSpill(void) {

	i8 v4667 = (i8)(intptr_t)(ws+4152);
	i8 v4668 = *(i8*)(intptr_t)v4667;
	i8 v4669 = v4668+(+83);
	i1 v4670 = *(i1*)(intptr_t)v4669;
	i8 v4671 = (i8)(intptr_t)(ws+4162);
	*(i1*)(intptr_t)v4671 = v4670;

	i8 v4672 = (i8)(intptr_t)(ws+4162);
	i1 v4673 = *(i1*)(intptr_t)v4672;
	i1 v4674 = (i1)+5;
	if (v4673==v4674) goto c02_02ff; else goto c02_0300;

c02_02ff:;

	i8 v4675 = (i8)(intptr_t)c02_s01c4;
	*(i8*)(intptr_t)(ws+4280) = v4675;
	i8 v4676 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v4676)();

c02_0300:;

c02_02fc:;

	i8 v4677 = (i8)(intptr_t)(ws+4152);
	i8 v4678 = *(i8*)(intptr_t)v4677;
	i8 v4679 = v4678+(+67);
	i8 v4680 = (i8)(intptr_t)(ws+4162);
	i1 v4681 = *(i1*)(intptr_t)v4680;
	i8 v4682 = v4681;
	i1 v4683 = (i1)+1;
	i8 v4684 = ((i8)v4682)<<v4683;
	i8 v4685 = v4679+v4684;
	i8 v4686 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v4686 = v4685;

	i8 v4687 = (i8)(intptr_t)(ws+4160);
	i1 v4688 = *(i1*)(intptr_t)v4687;
	i8 v4689 = (i8)(intptr_t)(ws+4168);
	i8 v4690 = *(i8*)(intptr_t)v4689;
	*(i1*)(intptr_t)v4690 = v4688;

	i8 v4691 = (i8)(intptr_t)(ws+4161);
	i1 v4692 = *(i1*)(intptr_t)v4691;
	i8 v4693 = (i8)(intptr_t)(ws+4168);
	i8 v4694 = *(i8*)(intptr_t)v4693;
	i8 v4695 = v4694+(+1);
	*(i1*)(intptr_t)v4695 = v4692;

	i8 v4696 = (i8)(intptr_t)(ws+4162);
	i1 v4697 = *(i1*)(intptr_t)v4696;
	i1 v4698 = v4697+(+1);
	i8 v4699 = (i8)(intptr_t)(ws+4152);
	i8 v4700 = *(i8*)(intptr_t)v4699;
	i8 v4701 = v4700+(+83);
	*(i1*)(intptr_t)v4701 = v4698;

}
const i1 c02_s01c5[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };
	void f68_SimpleError(void);

// CreateReload workspace at ws+4152 length ws+24
void f378_CreateReload(void) {

	i8 v4702 = (i8)(intptr_t)(ws+4152);
	i8 v4703 = *(i8*)(intptr_t)v4702;
	i8 v4704 = v4703+(+84);
	i1 v4705 = *(i1*)(intptr_t)v4704;
	i8 v4706 = (i8)(intptr_t)(ws+4162);
	*(i1*)(intptr_t)v4706 = v4705;

	i8 v4707 = (i8)(intptr_t)(ws+4162);
	i1 v4708 = *(i1*)(intptr_t)v4707;
	i1 v4709 = (i1)+5;
	if (v4708==v4709) goto c02_0304; else goto c02_0305;

c02_0304:;

	i8 v4710 = (i8)(intptr_t)c02_s01c5;
	*(i8*)(intptr_t)(ws+4280) = v4710;
	i8 v4711 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v4711)();

c02_0305:;

c02_0301:;

	i8 v4712 = (i8)(intptr_t)(ws+4152);
	i8 v4713 = *(i8*)(intptr_t)v4712;
	i8 v4714 = v4713+(+75);
	i8 v4715 = (i8)(intptr_t)(ws+4162);
	i1 v4716 = *(i1*)(intptr_t)v4715;
	i8 v4717 = v4716;
	i1 v4718 = (i1)+1;
	i8 v4719 = ((i8)v4717)<<v4718;
	i8 v4720 = v4714+v4719;
	i8 v4721 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v4721 = v4720;

	i8 v4722 = (i8)(intptr_t)(ws+4160);
	i1 v4723 = *(i1*)(intptr_t)v4722;
	i8 v4724 = (i8)(intptr_t)(ws+4168);
	i8 v4725 = *(i8*)(intptr_t)v4724;
	*(i1*)(intptr_t)v4725 = v4723;

	i8 v4726 = (i8)(intptr_t)(ws+4161);
	i1 v4727 = *(i1*)(intptr_t)v4726;
	i8 v4728 = (i8)(intptr_t)(ws+4168);
	i8 v4729 = *(i8*)(intptr_t)v4728;
	i8 v4730 = v4729+(+1);
	*(i1*)(intptr_t)v4730 = v4727;

	i8 v4731 = (i8)(intptr_t)(ws+4162);
	i1 v4732 = *(i1*)(intptr_t)v4731;
	i1 v4733 = v4732+(+1);
	i8 v4734 = (i8)(intptr_t)(ws+4152);
	i8 v4735 = *(i8*)(intptr_t)v4734;
	i8 v4736 = v4735+(+84);
	*(i1*)(intptr_t)v4736 = v4733;

}
	void f167_ArchEmitMove(void);
	void f167_ArchEmitMove(void);
	void f167_ArchEmitMove(void);
	void f167_ArchEmitMove(void);

// ShuffleRegisters workspace at ws+4120 length ws+25
void f379_ShuffleRegisters(void) {

	i1 v4737 = (i1)+0;
	i8 v4738 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4738 = v4737;

	i1 v4739 = (i1)+0;
	i8 v4740 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4740 = v4739;

	i8 v4741 = (i8)(intptr_t)(ws+4120);
	i8 v4742 = *(i8*)(intptr_t)v4741;
	i8 v4743 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4743 = v4742;

	i1 v4744 = (i1)+4;
	i8 v4745 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4745 = v4744;

c02_0306:;

	i8 v4746 = (i8)(intptr_t)(ws+4144);
	i1 v4747 = *(i1*)(intptr_t)v4746;
	i1 v4748 = (i1)+0;
	if (v4747==v4748) goto c02_030b; else goto c02_030a;

c02_030a:;

	i8 v4749 = (i8)(intptr_t)(ws+4128);
	i1 v4750 = *(i1*)(intptr_t)v4749;
	i8 v4751 = (i8)(intptr_t)(ws+4136);
	i8 v4752 = *(i8*)(intptr_t)v4751;
	i8 v4753 = v4752+(+1);
	i1 v4754 = *(i1*)(intptr_t)v4753;
	i1 v4755 = v4750|v4754;
	i8 v4756 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4756 = v4755;

	i8 v4757 = (i8)(intptr_t)(ws+4129);
	i1 v4758 = *(i1*)(intptr_t)v4757;
	i8 v4759 = (i8)(intptr_t)(ws+4136);
	i8 v4760 = *(i8*)(intptr_t)v4759;
	i1 v4761 = *(i1*)(intptr_t)v4760;
	i1 v4762 = v4758|v4761;
	i8 v4763 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4763 = v4762;

	i8 v4764 = (i8)(intptr_t)(ws+4144);
	i1 v4765 = *(i1*)(intptr_t)v4764;
	i1 v4766 = v4765+(-1);
	i8 v4767 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4767 = v4766;

	i8 v4768 = (i8)(intptr_t)(ws+4136);
	i8 v4769 = *(i8*)(intptr_t)v4768;
	i8 v4770 = v4769+(+2);
	i8 v4771 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4771 = v4770;

	goto c02_0306;

c02_030b:;

c02_030c:;

	i8 v4772 = (i8)(intptr_t)(ws+4120);
	i8 v4773 = *(i8*)(intptr_t)v4772;
	i8 v4774 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4774 = v4773;

	i1 v4775 = (i1)+4;
	i8 v4776 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4776 = v4775;

c02_030e:;

	i8 v4777 = (i8)(intptr_t)(ws+4144);
	i1 v4778 = *(i1*)(intptr_t)v4777;
	i1 v4779 = (i1)+0;
	if (v4778==v4779) goto c02_0313; else goto c02_0312;

c02_0312:;

	i8 v4780 = (i8)(intptr_t)(ws+4136);
	i8 v4781 = *(i8*)(intptr_t)v4780;
	i1 v4782 = *(i1*)(intptr_t)v4781;
	i1 v4783 = (i1)+0;
	if (v4782==v4783) goto c02_031a; else goto c02_031b;

c02_031b:;

	i8 v4784 = (i8)(intptr_t)(ws+4136);
	i8 v4785 = *(i8*)(intptr_t)v4784;
	i8 v4786 = v4785+(+1);
	i1 v4787 = *(i1*)(intptr_t)v4786;
	i1 v4788 = (i1)+0;
	if (v4787==v4788) goto c02_0319; else goto c02_031a;

c02_0319:;

	goto c02_0313;

c02_031a:;

c02_0314:;

	i8 v4789 = (i8)(intptr_t)(ws+4136);
	i8 v4790 = *(i8*)(intptr_t)v4789;
	i8 v4791 = v4790+(+2);
	i8 v4792 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4792 = v4791;

	i8 v4793 = (i8)(intptr_t)(ws+4144);
	i1 v4794 = *(i1*)(intptr_t)v4793;
	i1 v4795 = v4794+(-1);
	i8 v4796 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4796 = v4795;

	goto c02_030e;

c02_0313:;

	i8 v4797 = (i8)(intptr_t)(ws+4144);
	i1 v4798 = *(i1*)(intptr_t)v4797;
	i1 v4799 = (i1)+0;
	if (v4798==v4799) goto c02_0320; else goto c02_031f;

c02_031f:;

	i8 v4800 = (i8)(intptr_t)(ws+4136);
	i8 v4801 = *(i8*)(intptr_t)v4800;
	i1 v4802 = *(i1*)(intptr_t)v4801;
	*(i1*)(intptr_t)(ws+4152) = v4802;
	i1 v4803 = (i1)+0;
	*(i1*)(intptr_t)(ws+4153) = v4803;
	i8 v4804 = (i8)(intptr_t)(f167_ArchEmitMove);

	((void(*)(void))(intptr_t)v4804)();

	i8 v4805 = (i8)(intptr_t)(ws+4129);
	i1 v4806 = *(i1*)(intptr_t)v4805;
	i8 v4807 = (i8)(intptr_t)(ws+4136);
	i8 v4808 = *(i8*)(intptr_t)v4807;
	i1 v4809 = *(i1*)(intptr_t)v4808;
	i1 v4810 = ~v4809;
	i1 v4811 = v4806&v4810;
	i8 v4812 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4812 = v4811;

	i1 v4813 = (i1)+0;
	i8 v4814 = (i8)(intptr_t)(ws+4136);
	i8 v4815 = *(i8*)(intptr_t)v4814;
	*(i1*)(intptr_t)v4815 = v4813;

	goto c02_030c;

c02_0320:;

c02_031c:;

	i8 v4816 = (i8)(intptr_t)(ws+4120);
	i8 v4817 = *(i8*)(intptr_t)v4816;
	i8 v4818 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4818 = v4817;

	i1 v4819 = (i1)+4;
	i8 v4820 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4820 = v4819;

c02_0321:;

	i8 v4821 = (i8)(intptr_t)(ws+4144);
	i1 v4822 = *(i1*)(intptr_t)v4821;
	i1 v4823 = (i1)+0;
	if (v4822==v4823) goto c02_0326; else goto c02_0325;

c02_0325:;

	i8 v4824 = (i8)(intptr_t)(ws+4136);
	i8 v4825 = *(i8*)(intptr_t)v4824;
	i1 v4826 = *(i1*)(intptr_t)v4825;
	i1 v4827 = (i1)+0;
	if (v4826==v4827) goto c02_032f; else goto c02_0331;

c02_0331:;

	i8 v4828 = (i8)(intptr_t)(ws+4136);
	i8 v4829 = *(i8*)(intptr_t)v4828;
	i8 v4830 = v4829+(+1);
	i1 v4831 = *(i1*)(intptr_t)v4830;
	i1 v4832 = (i1)+0;
	if (v4831==v4832) goto c02_032f; else goto c02_0330;

c02_0330:;

	i8 v4833 = (i8)(intptr_t)(ws+4136);
	i8 v4834 = *(i8*)(intptr_t)v4833;
	i8 v4835 = v4834+(+1);
	i1 v4836 = *(i1*)(intptr_t)v4835;
	i8 v4837 = (i8)(intptr_t)(ws+4129);
	i1 v4838 = *(i1*)(intptr_t)v4837;
	i1 v4839 = v4836&v4838;
	i1 v4840 = (i1)+0;
	if (v4839==v4840) goto c02_032e; else goto c02_032f;

c02_032e:;

	goto c02_0326;

c02_032f:;

c02_0327:;

	i8 v4841 = (i8)(intptr_t)(ws+4136);
	i8 v4842 = *(i8*)(intptr_t)v4841;
	i8 v4843 = v4842+(+2);
	i8 v4844 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4844 = v4843;

	i8 v4845 = (i8)(intptr_t)(ws+4144);
	i1 v4846 = *(i1*)(intptr_t)v4845;
	i1 v4847 = v4846+(-1);
	i8 v4848 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4848 = v4847;

	goto c02_0321;

c02_0326:;

	i8 v4849 = (i8)(intptr_t)(ws+4144);
	i1 v4850 = *(i1*)(intptr_t)v4849;
	i1 v4851 = (i1)+0;
	if (v4850==v4851) goto c02_0336; else goto c02_0335;

c02_0335:;

	i8 v4852 = (i8)(intptr_t)(ws+4136);
	i8 v4853 = *(i8*)(intptr_t)v4852;
	i1 v4854 = *(i1*)(intptr_t)v4853;
	*(i1*)(intptr_t)(ws+4152) = v4854;
	i8 v4855 = (i8)(intptr_t)(ws+4136);
	i8 v4856 = *(i8*)(intptr_t)v4855;
	i8 v4857 = v4856+(+1);
	i1 v4858 = *(i1*)(intptr_t)v4857;
	*(i1*)(intptr_t)(ws+4153) = v4858;
	i8 v4859 = (i8)(intptr_t)(f167_ArchEmitMove);

	((void(*)(void))(intptr_t)v4859)();

	i8 v4860 = (i8)(intptr_t)(ws+4129);
	i1 v4861 = *(i1*)(intptr_t)v4860;
	i8 v4862 = (i8)(intptr_t)(ws+4136);
	i8 v4863 = *(i8*)(intptr_t)v4862;
	i1 v4864 = *(i1*)(intptr_t)v4863;
	i1 v4865 = ~v4864;
	i1 v4866 = v4861&v4865;
	i8 v4867 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4867 = v4866;

	i8 v4868 = (i8)(intptr_t)(ws+4128);
	i1 v4869 = *(i1*)(intptr_t)v4868;
	i8 v4870 = (i8)(intptr_t)(ws+4136);
	i8 v4871 = *(i8*)(intptr_t)v4870;
	i8 v4872 = v4871+(+1);
	i1 v4873 = *(i1*)(intptr_t)v4872;
	i1 v4874 = ~v4873;
	i1 v4875 = v4869&v4874;
	i8 v4876 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4876 = v4875;

	i1 v4877 = (i1)+0;
	i8 v4878 = (i8)(intptr_t)(ws+4136);
	i8 v4879 = *(i8*)(intptr_t)v4878;
	*(i1*)(intptr_t)v4879 = v4877;

	i1 v4880 = (i1)+0;
	i8 v4881 = (i8)(intptr_t)(ws+4136);
	i8 v4882 = *(i8*)(intptr_t)v4881;
	i8 v4883 = v4882+(+1);
	*(i1*)(intptr_t)v4883 = v4880;

	goto c02_030c;

c02_0336:;

c02_0332:;

	i8 v4884 = (i8)(intptr_t)(ws+4120);
	i8 v4885 = *(i8*)(intptr_t)v4884;
	i8 v4886 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4886 = v4885;

	i1 v4887 = (i1)+4;
	i8 v4888 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4888 = v4887;

c02_0337:;

	i8 v4889 = (i8)(intptr_t)(ws+4144);
	i1 v4890 = *(i1*)(intptr_t)v4889;
	i1 v4891 = (i1)+0;
	if (v4890==v4891) goto c02_033c; else goto c02_033b;

c02_033b:;

	i8 v4892 = (i8)(intptr_t)(ws+4136);
	i8 v4893 = *(i8*)(intptr_t)v4892;
	i1 v4894 = *(i1*)(intptr_t)v4893;
	i1 v4895 = (i1)+0;
	if (v4894==v4895) goto c02_0344; else goto c02_0343;

c02_0344:;

	i8 v4896 = (i8)(intptr_t)(ws+4136);
	i8 v4897 = *(i8*)(intptr_t)v4896;
	i8 v4898 = v4897+(+1);
	i1 v4899 = *(i1*)(intptr_t)v4898;
	i1 v4900 = (i1)+0;
	if (v4899==v4900) goto c02_0343; else goto c02_0342;

c02_0342:;

	goto c02_033c;

c02_0343:;

c02_033d:;

	i8 v4901 = (i8)(intptr_t)(ws+4136);
	i8 v4902 = *(i8*)(intptr_t)v4901;
	i8 v4903 = v4902+(+2);
	i8 v4904 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4904 = v4903;

	i8 v4905 = (i8)(intptr_t)(ws+4144);
	i1 v4906 = *(i1*)(intptr_t)v4905;
	i1 v4907 = v4906+(-1);
	i8 v4908 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4908 = v4907;

	goto c02_0337;

c02_033c:;

	i8 v4909 = (i8)(intptr_t)(ws+4144);
	i1 v4910 = *(i1*)(intptr_t)v4909;
	i1 v4911 = (i1)+0;
	if (v4910==v4911) goto c02_0349; else goto c02_0348;

c02_0348:;

	i1 v4912 = (i1)+0;
	*(i1*)(intptr_t)(ws+4152) = v4912;
	i8 v4913 = (i8)(intptr_t)(ws+4136);
	i8 v4914 = *(i8*)(intptr_t)v4913;
	i8 v4915 = v4914+(+1);
	i1 v4916 = *(i1*)(intptr_t)v4915;
	*(i1*)(intptr_t)(ws+4153) = v4916;
	i8 v4917 = (i8)(intptr_t)(f167_ArchEmitMove);

	((void(*)(void))(intptr_t)v4917)();

	i8 v4918 = (i8)(intptr_t)(ws+4128);
	i1 v4919 = *(i1*)(intptr_t)v4918;
	i8 v4920 = (i8)(intptr_t)(ws+4136);
	i8 v4921 = *(i8*)(intptr_t)v4920;
	i8 v4922 = v4921+(+1);
	i1 v4923 = *(i1*)(intptr_t)v4922;
	i1 v4924 = ~v4923;
	i1 v4925 = v4919&v4924;
	i8 v4926 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4926 = v4925;

	i1 v4927 = (i1)+0;
	i8 v4928 = (i8)(intptr_t)(ws+4136);
	i8 v4929 = *(i8*)(intptr_t)v4928;
	i8 v4930 = v4929+(+1);
	*(i1*)(intptr_t)v4930 = v4927;

	goto c02_030c;

c02_0349:;

c02_0345:;

	i8 v4931 = (i8)(intptr_t)(ws+4120);
	i8 v4932 = *(i8*)(intptr_t)v4931;
	i8 v4933 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4933 = v4932;

	i1 v4934 = (i1)+4;
	i8 v4935 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4935 = v4934;

c02_034a:;

	i8 v4936 = (i8)(intptr_t)(ws+4144);
	i1 v4937 = *(i1*)(intptr_t)v4936;
	i1 v4938 = (i1)+0;
	if (v4937==v4938) goto c02_034f; else goto c02_034e;

c02_034e:;

	i8 v4939 = (i8)(intptr_t)(ws+4136);
	i8 v4940 = *(i8*)(intptr_t)v4939;
	i1 v4941 = *(i1*)(intptr_t)v4940;
	i1 v4942 = (i1)+0;
	if (v4941==v4942) goto c02_0356; else goto c02_0357;

c02_0357:;

	i8 v4943 = (i8)(intptr_t)(ws+4136);
	i8 v4944 = *(i8*)(intptr_t)v4943;
	i8 v4945 = v4944+(+1);
	i1 v4946 = *(i1*)(intptr_t)v4945;
	i1 v4947 = (i1)+0;
	if (v4946==v4947) goto c02_0356; else goto c02_0355;

c02_0355:;

	goto c02_034f;

c02_0356:;

c02_0350:;

	i8 v4948 = (i8)(intptr_t)(ws+4136);
	i8 v4949 = *(i8*)(intptr_t)v4948;
	i8 v4950 = v4949+(+2);
	i8 v4951 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4951 = v4950;

	i8 v4952 = (i8)(intptr_t)(ws+4144);
	i1 v4953 = *(i1*)(intptr_t)v4952;
	i1 v4954 = v4953+(-1);
	i8 v4955 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4955 = v4954;

	goto c02_034a;

c02_034f:;

	i8 v4956 = (i8)(intptr_t)(ws+4144);
	i1 v4957 = *(i1*)(intptr_t)v4956;
	i1 v4958 = (i1)+0;
	if (v4957==v4958) goto c02_035c; else goto c02_035b;

c02_035b:;

	i8 v4959 = (i8)(intptr_t)(ws+4136);
	i8 v4960 = *(i8*)(intptr_t)v4959;
	i1 v4961 = *(i1*)(intptr_t)v4960;
	*(i1*)(intptr_t)(ws+4152) = v4961;
	i1 v4962 = (i1)+0;
	*(i1*)(intptr_t)(ws+4153) = v4962;
	i8 v4963 = (i8)(intptr_t)(f167_ArchEmitMove);

	((void(*)(void))(intptr_t)v4963)();

	i8 v4964 = (i8)(intptr_t)(ws+4129);
	i1 v4965 = *(i1*)(intptr_t)v4964;
	i8 v4966 = (i8)(intptr_t)(ws+4136);
	i8 v4967 = *(i8*)(intptr_t)v4966;
	i1 v4968 = *(i1*)(intptr_t)v4967;
	i1 v4969 = ~v4968;
	i1 v4970 = v4965&v4969;
	i8 v4971 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4971 = v4970;

	i1 v4972 = (i1)+0;
	i8 v4973 = (i8)(intptr_t)(ws+4136);
	i8 v4974 = *(i8*)(intptr_t)v4973;
	*(i1*)(intptr_t)v4974 = v4972;

	goto c02_030c;

c02_035c:;

c02_0358:;

	goto c02_030d;

c02_030d:;

}
	void f61_PushNode(void);
	void f63_NextNode(void);
	void f21_print_hex_i32(void);
	void f9_print_char(void);
	void f18_print_i8(void);
	void f9_print_char(void);
	void f78_MidcodeName(void);
	void f12_print(void);
	void f9_print_char(void);
	void f21_print_hex_i32(void);
	void f9_print_char(void);
	void f21_print_hex_i32(void);
	void f9_print_char(void);
	void f21_print_hex_i32(void);
	void f9_print_char(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);

// PrintNodes workspace at ws+4176 length ws+40
void f380_PrintNodes(void) {

	i8 v4975 = (i8)(intptr_t)(ws+184);
	i8 v4976 = *(i8*)(intptr_t)v4975;
	i8 v4977 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v4977 = v4976;

	i8 v4978 = (i8)(intptr_t)(ws+4176);
	i8 v4979 = *(i8*)(intptr_t)v4978;
	*(i8*)(intptr_t)(ws+4232) = v4979;
	i8 v4980 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v4980)();

c02_035d:;

	i8 v4981 = (i8)(intptr_t)(ws+184);
	i8 v4982 = *(i8*)(intptr_t)v4981;
	i8 v4983 = (i8)(intptr_t)(ws+4184);
	i8 v4984 = *(i8*)(intptr_t)v4983;
	if (v4982==v4984) goto c02_0362; else goto c02_0361;

c02_0361:;

	i8 v4985 = (i8)(intptr_t)(f63_NextNode);

	((void(*)(void))(intptr_t)v4985)();

	i8 v4986 = *(i8*)(intptr_t)(ws+4216);
	i8 v4987 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v4987 = v4986;

	i8 v4988 = (i8)(intptr_t)(ws+4192);
	i8 v4989 = *(i8*)(intptr_t)v4988;
	i8 v4990 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v4990 = v4989;

	i8 v4991 = (i8)(intptr_t)(ws+4200);
	i8 v4992 = *(i8*)(intptr_t)v4991;
	i8 v4993 = (i8)+0;
	if (v4992==v4993) goto c02_0366; else goto c02_0367;

c02_0366:;

	goto c02_0362;

c02_0367:;

c02_0363:;

	i8 v4994 = (i8)(intptr_t)(ws+4200);
	i8 v4995 = *(i8*)(intptr_t)v4994;
	i4 v4996 = v4995;
	*(i4*)(intptr_t)(ws+4288) = v4996;
	i8 v4997 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v4997)();

	i1 v4998 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v4998;
	i8 v4999 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v4999)();

	i8 v5000 = (i8)(intptr_t)(ws+4200);
	i8 v5001 = *(i8*)(intptr_t)v5000;
	i8 v5002 = v5001+(+256);
	i1 v5003 = *(i1*)(intptr_t)v5002;
	*(i1*)(intptr_t)(ws+4232) = v5003;
	i8 v5004 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v5004)();

	i1 v5005 = (i1)+61;
	*(i1*)(intptr_t)(ws+4304) = v5005;
	i8 v5006 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5006)();

	i8 v5007 = (i8)(intptr_t)(ws+4200);
	i8 v5008 = *(i8*)(intptr_t)v5007;
	i8 v5009 = v5008+(+256);
	i1 v5010 = *(i1*)(intptr_t)v5009;
	*(i1*)(intptr_t)(ws+4216) = v5010;
	i8 v5011 = (i8)(intptr_t)(f78_MidcodeName);

	((void(*)(void))(intptr_t)v5011)();

	i8 v5012 = *(i8*)(intptr_t)(ws+4224);
	i8 v5013 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v5013 = v5012;

	i8 v5014 = (i8)(intptr_t)(ws+4208);
	i8 v5015 = *(i8*)(intptr_t)v5014;
	*(i8*)(intptr_t)(ws+4288) = v5015;
	i8 v5016 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v5016)();

	i1 v5017 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5017;
	i8 v5018 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5018)();

	i8 v5019 = (i8)(intptr_t)(ws+4200);
	i8 v5020 = *(i8*)(intptr_t)v5019;
	i8 v5021 = v5020+(+56);
	i1 v5022 = *(i1*)(intptr_t)v5021;
	i4 v5023 = v5022;
	*(i4*)(intptr_t)(ws+4288) = v5023;
	i8 v5024 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5024)();

	i1 v5025 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5025;
	i8 v5026 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5026)();

	i8 v5027 = (i8)(intptr_t)(ws+4200);
	i8 v5028 = *(i8*)(intptr_t)v5027;
	i8 v5029 = v5028+(+57);
	i1 v5030 = *(i1*)(intptr_t)v5029;
	i4 v5031 = v5030;
	*(i4*)(intptr_t)(ws+4288) = v5031;
	i8 v5032 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5032)();

	i1 v5033 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5033;
	i8 v5034 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5034)();

	i8 v5035 = (i8)(intptr_t)(ws+4200);
	i8 v5036 = *(i8*)(intptr_t)v5035;
	i8 v5037 = v5036+(+24);
	i8 v5038 = *(i8*)(intptr_t)v5037;
	i4 v5039 = v5038;
	*(i4*)(intptr_t)(ws+4288) = v5039;
	i8 v5040 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5040)();

	i1 v5041 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5041;
	i8 v5042 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5042)();

	i8 v5043 = (i8)(intptr_t)(ws+4200);
	i8 v5044 = *(i8*)(intptr_t)v5043;
	i8 v5045 = v5044+(+32);
	i8 v5046 = *(i8*)(intptr_t)v5045;
	i4 v5047 = v5046;
	*(i4*)(intptr_t)(ws+4288) = v5047;
	i8 v5048 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5048)();

	i8 v5049 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v5049)();

	goto c02_035d;

c02_0362:;

}
	void f371_IsStackedRegister(void);
	void f371_IsStackedRegister(void);
	void f31_MemCopy(void);

// IsSimpleValue workspace at ws+4216 length ws+33
void f384_IsSimpleValue(void) {

	i1 v5171 = (i1)+0;
	i8 v5172 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5172 = v5171;

	i8 v5173 = (i8)(intptr_t)(ws+4216);
	i8 v5174 = *(i8*)(intptr_t)v5173;
	i8 v5175 = v5174+(+48);
	i1 v5176 = *(i1*)(intptr_t)v5175;
	*(i1*)(intptr_t)(ws+4256) = v5176;
	i8 v5177 = (i8)(intptr_t)(f371_IsStackedRegister);

	((void(*)(void))(intptr_t)v5177)();

	i1 v5178 = *(i1*)(intptr_t)(ws+4257);
	i8 v5179 = (i8)(intptr_t)(ws+4233);
	*(i1*)(intptr_t)v5179 = v5178;

	i8 v5180 = (i8)(intptr_t)(ws+4233);
	i1 v5181 = *(i1*)(intptr_t)v5180;
	i1 v5182 = (i1)+0;
	if (v5181==v5182) goto c02_0393; else goto c02_0394;

c02_0393:;

	i8 v5183 = (i8)(intptr_t)(ws+4216);
	i8 v5184 = *(i8*)(intptr_t)v5183;
	i8 v5185 = v5184+(+16);
	i8 v5186 = *(i8*)(intptr_t)v5185;
	i8 v5187 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v5187 = v5186;

	i8 v5188 = (i8)(intptr_t)(ws+4240);
	i8 v5189 = *(i8*)(intptr_t)v5188;
	i8 v5190 = v5189+(+256);
	i1 v5191 = *(i1*)(intptr_t)v5190;
	i1 v5192 = (i1)+24;
	if (v5191==v5192) goto c02_0398; else goto c02_0399;

c02_0398:;

	i8 v5193 = (i8)(intptr_t)(ws+4240);
	i8 v5194 = *(i8*)(intptr_t)v5193;
	i8 v5195 = v5194+(+24);
	i8 v5196 = *(i8*)(intptr_t)v5195;
	i8 v5197 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v5197 = v5196;

c02_0399:;

c02_0395:;

	i8 v5198 = (i8)(intptr_t)(ws+4240);
	i8 v5199 = *(i8*)(intptr_t)v5198;
	i8 v5200 = v5199+(+57);
	i1 v5201 = *(i1*)(intptr_t)v5200;
	*(i1*)(intptr_t)(ws+4256) = v5201;
	i8 v5202 = (i8)(intptr_t)(f371_IsStackedRegister);

	((void(*)(void))(intptr_t)v5202)();

	i1 v5203 = *(i1*)(intptr_t)(ws+4257);
	i8 v5204 = (i8)(intptr_t)(ws+4248);
	*(i1*)(intptr_t)v5204 = v5203;

	i8 v5205 = (i8)(intptr_t)(ws+4240);
	i8 v5206 = *(i8*)(intptr_t)v5205;
	i8 v5207 = v5206+(+24);
	i8 v5208 = *(i8*)(intptr_t)v5207;
	i8 v5209 = (i8)+0;
	if (v5208==v5209) goto c02_03a0; else goto c02_03a1;

c02_03a1:;

	i8 v5210 = (i8)(intptr_t)(ws+4248);
	i1 v5211 = *(i1*)(intptr_t)v5210;
	i1 v5212 = (i1)+0;
	if (v5211==v5212) goto c02_039f; else goto c02_03a0;

c02_039f:;

	return;

c02_03a0:;

c02_039a:;

	i8 v5213 = (i8)(intptr_t)(ws+4240);
	i8 v5214 = *(i8*)(intptr_t)v5213;
	i8 v5215 = v5214+(+256);
	i1 v5216 = *(i1*)(intptr_t)v5215;
	i1 v5217 = (i1)+42;
	if (v5216==v5217) goto c02_03a5; else goto c02_03a6;

c02_03a5:;

	i8 v5218 = (i8)(intptr_t)(ws+4240);
	i8 v5219 = *(i8*)(intptr_t)v5218;
	*(i8*)(intptr_t)(ws+4264) = v5219;
	i8 v5220 = (i8)+18;
	*(i8*)(intptr_t)(ws+4272) = v5220;
	i8 v5221 = (i8)(intptr_t)(ws+4224);
	i8 v5222 = *(i8*)(intptr_t)v5221;
	*(i8*)(intptr_t)(ws+4280) = v5222;
	i8 v5223 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v5223)();

	i1 v5224 = (i1)+42;
	i8 v5225 = (i8)(intptr_t)(ws+4224);
	i8 v5226 = *(i8*)(intptr_t)v5225;
	i8 v5227 = v5226+(+19);
	*(i1*)(intptr_t)v5227 = v5224;

	i1 v5228 = (i1)+1;
	i8 v5229 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5229 = v5228;

	goto c02_03a2;

c02_03a6:;

	i8 v5230 = (i8)(intptr_t)(ws+4240);
	i8 v5231 = *(i8*)(intptr_t)v5230;
	i8 v5232 = v5231+(+256);
	i1 v5233 = *(i1*)(intptr_t)v5232;
	i1 v5234 = (i1)+40;
	if (v5233==v5234) goto c02_03a9; else goto c02_03aa;

c02_03a9:;

	i8 v5235 = (i8)(intptr_t)(ws+4240);
	i8 v5236 = *(i8*)(intptr_t)v5235;
	i4 v5237 = *(i4*)(intptr_t)v5236;
	i8 v5238 = (i8)(intptr_t)(ws+4224);
	i8 v5239 = *(i8*)(intptr_t)v5238;
	*(i4*)(intptr_t)v5239 = v5237;

	i1 v5240 = (i1)+40;
	i8 v5241 = (i8)(intptr_t)(ws+4224);
	i8 v5242 = *(i8*)(intptr_t)v5241;
	i8 v5243 = v5242+(+19);
	*(i1*)(intptr_t)v5243 = v5240;

	i1 v5244 = (i1)+1;
	i8 v5245 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5245 = v5244;

c02_03aa:;

c02_03a2:;

c02_0394:;

c02_0390:;

}

// check_deref workspace at ws+4240 length ws+0
void f386_check_deref(void) {

	i8 v5256 = (i8)(intptr_t)(ws+4216);
	i8 v5257 = *(i8*)(intptr_t)v5256;
	i8 v5258 = *(i8*)(intptr_t)v5257;
	i8 v5259 = (i8)(intptr_t)(ws+4224);
	i8 v5260 = *(i8*)(intptr_t)v5259;
	i8 v5261 = *(i8*)(intptr_t)v5260;
	if (v5258==v5261) goto c02_03ba; else goto c02_03b8;

c02_03ba:;

	i8 v5262 = (i8)(intptr_t)(ws+4216);
	i8 v5263 = *(i8*)(intptr_t)v5262;
	i8 v5264 = v5263+(+12);
	i2 v5265 = *(i2*)(intptr_t)v5264;
	i8 v5266 = (i8)(intptr_t)(ws+4216);
	i8 v5267 = *(i8*)(intptr_t)v5266;
	i8 v5268 = v5267+(+16);
	i2 v5269 = *(i2*)(intptr_t)v5268;
	i2 v5270 = v5265+v5269;
	i8 v5271 = (i8)(intptr_t)(ws+4224);
	i8 v5272 = *(i8*)(intptr_t)v5271;
	i8 v5273 = v5272+(+12);
	i2 v5274 = *(i2*)(intptr_t)v5273;
	i8 v5275 = (i8)(intptr_t)(ws+4224);
	i8 v5276 = *(i8*)(intptr_t)v5275;
	i8 v5277 = v5276+(+16);
	i2 v5278 = *(i2*)(intptr_t)v5277;
	i2 v5279 = v5274+v5278;
	if (v5270==v5279) goto c02_03b9; else goto c02_03b8;

c02_03b9:;

	i8 v5280 = (i8)(intptr_t)(ws+4216);
	i8 v5281 = *(i8*)(intptr_t)v5280;
	i8 v5282 = v5281+(+10);
	i1 v5283 = *(i1*)(intptr_t)v5282;
	i8 v5284 = (i8)(intptr_t)(ws+4224);
	i8 v5285 = *(i8*)(intptr_t)v5284;
	i8 v5286 = v5285+(+10);
	i1 v5287 = *(i1*)(intptr_t)v5286;
	if (v5283==v5287) goto c02_03b7; else goto c02_03b8;

c02_03b7:;

	i1 v5288 = (i1)+1;
	i8 v5289 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5289 = v5288;

c02_03b8:;

c02_03b0:;

}
	void f386_check_deref(void);
	void f386_check_deref(void);
	void f386_check_deref(void);
	void f386_check_deref(void);
	void f386_check_deref(void);

// SimpleValuesMatch workspace at ws+4216 length ws+17
void f385_SimpleValuesMatch(void) {

	i1 v5246 = (i1)+0;
	i8 v5247 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5247 = v5246;

	i8 v5248 = (i8)(intptr_t)(ws+4216);
	i8 v5249 = *(i8*)(intptr_t)v5248;
	i8 v5250 = v5249+(+19);
	i1 v5251 = *(i1*)(intptr_t)v5250;
	i8 v5252 = (i8)(intptr_t)(ws+4224);
	i8 v5253 = *(i8*)(intptr_t)v5252;
	i8 v5254 = v5253+(+19);
	i1 v5255 = *(i1*)(intptr_t)v5254;
	if (v5251==v5255) goto c02_03af; else goto c02_03ae;

c02_03ae:;

	return;

c02_03af:;

c02_03ab:;


	i8 v5290 = (i8)(intptr_t)(ws+4216);
	i8 v5291 = *(i8*)(intptr_t)v5290;
	i8 v5292 = v5291+(+19);
	i1 v5293 = *(i1*)(intptr_t)v5292;

	if (v5293 != +45) goto c02_03bc;

	i8 v5294 = (i8)(intptr_t)(f386_check_deref);

	((void(*)(void))(intptr_t)v5294)();

	goto c02_03bb;

c02_03bc:;

	if (v5293 != +46) goto c02_03bd;

	i8 v5295 = (i8)(intptr_t)(f386_check_deref);

	((void(*)(void))(intptr_t)v5295)();

	goto c02_03bb;

c02_03bd:;

	if (v5293 != +47) goto c02_03be;

	i8 v5296 = (i8)(intptr_t)(f386_check_deref);

	((void(*)(void))(intptr_t)v5296)();

	goto c02_03bb;

c02_03be:;

	if (v5293 != +48) goto c02_03bf;

	i8 v5297 = (i8)(intptr_t)(f386_check_deref);

	((void(*)(void))(intptr_t)v5297)();

	goto c02_03bb;

c02_03bf:;

	if (v5293 != +42) goto c02_03c0;

	i8 v5298 = (i8)(intptr_t)(f386_check_deref);

	((void(*)(void))(intptr_t)v5298)();

	goto c02_03bb;

c02_03c0:;

	if (v5293 != +40) goto c02_03c1;

	i8 v5299 = (i8)(intptr_t)(ws+4216);
	i8 v5300 = *(i8*)(intptr_t)v5299;
	i4 v5301 = *(i4*)(intptr_t)v5300;
	i8 v5302 = (i8)(intptr_t)(ws+4224);
	i8 v5303 = *(i8*)(intptr_t)v5302;
	i4 v5304 = *(i4*)(intptr_t)v5303;
	if (v5301==v5304) goto c02_03c5; else goto c02_03c6;

c02_03c5:;

	i1 v5305 = (i1)+1;
	i8 v5306 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5306 = v5305;

c02_03c6:;

c02_03c2:;

c02_03c1:;

c02_03bb:;


}
	void f61_PushNode(void);
	void f147_AllocNewInstruction(void);
	void f62_PopNode(void);
	void f23_MemZero(void);
	void f23_MemZero(void);
	void f370_PopulateMatchBuffer(void);

// RewindRulePointers workspace at ws+4176 length ws+0
void f389_RewindRulePointers(void) {

	i8 v5354 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)(ws+4176) = v5354;
	i8 v5355 = (i8)+4;
	*(i8*)(intptr_t)(ws+4184) = v5355;
	i8 v5356 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v5356)();

	i8 v5357 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)(ws+4176) = v5357;
	i8 v5358 = (i8)+32;
	*(i8*)(intptr_t)(ws+4184) = v5358;
	i8 v5359 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v5359)();

	i8 v5360 = (i8)(intptr_t)(ws+4088);
	i8 v5361 = *(i8*)(intptr_t)v5360;
	i8 v5362 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v5362 = v5361;

	i8 v5363 = (i8)(intptr_t)(ws+4072);
	i8 v5364 = *(i8*)(intptr_t)v5363;
	*(i8*)(intptr_t)(ws+4176) = v5364;
	i8 v5365 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)(ws+4184) = v5365;
	i8 v5366 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)(ws+4192) = v5366;
	i8 v5367 = (i8)(intptr_t)(f370_PopulateMatchBuffer);

	((void(*)(void))(intptr_t)v5367)();

	i1 v5368 = (i1)+255;
	i8 v5369 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v5369 = v5368;

	i8 v5370 = (i8)(intptr_t)((i1*)f3___main_s02aa);
	i8 v5371 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5371 = v5370;

	i8 v5372 = (i8)(intptr_t)((i1*)f3___main_s02ab);
	i8 v5373 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5373 = v5372;

	i8 v5374 = (i8)(intptr_t)((i1*)f3___main_s02ac-7);
	i8 v5375 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v5375 = v5374;

}
	void f189_MatchPredicate(void);

// TestRule workspace at ws+4176 length ws+28
void f390_TestRule(void) {

	i1 v5376 = (i1)+0;
	i8 v5377 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5377 = v5376;

	i8 v5378 = (i8)(intptr_t)(ws+4104);
	i8 v5379 = *(i8*)(intptr_t)v5378;
	i8 v5380 = v5379+(+1);
	i1 v5381 = *(i1*)(intptr_t)v5380;
	i1 v5382 = (i1)+0;
	if (v5381==v5382) goto c02_03d6; else goto c02_03d5;

c02_03d5:;

	i8 v5383 = (i8)(intptr_t)(ws+4088);
	i8 v5384 = *(i8*)(intptr_t)v5383;
	i8 v5385 = v5384+(+56);
	i1 v5386 = *(i1*)(intptr_t)v5385;
	i8 v5387 = (i8)(intptr_t)(ws+4104);
	i8 v5388 = *(i8*)(intptr_t)v5387;
	i8 v5389 = v5388+(+1);
	i1 v5390 = *(i1*)(intptr_t)v5389;
	i1 v5391 = v5386&v5390;
	i1 v5392 = (i1)+0;
	if (v5391==v5392) goto c02_03da; else goto c02_03db;

c02_03da:;

	return;

c02_03db:;

c02_03d7:;

	goto c02_03d2;

c02_03d6:;

	i8 v5393 = (i8)(intptr_t)(ws+4088);
	i8 v5394 = *(i8*)(intptr_t)v5393;
	i8 v5395 = v5394+(+56);
	i1 v5396 = *(i1*)(intptr_t)v5395;
	i1 v5397 = (i1)+0;
	if (v5396==v5397) goto c02_03e0; else goto c02_03df;

c02_03df:;

	return;

c02_03e0:;

c02_03dc:;

c02_03d2:;

	i8 v5398 = (i8)(intptr_t)(ws+4112);
	i8 v5399 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5399 = v5398;

	i8 v5400 = (i8)(intptr_t)(ws+4152);
	i8 v5401 = *(i8*)(intptr_t)v5400;
	i8 v5402 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5402 = v5401;

	i8 v5403 = (i8)(intptr_t)(ws+4104);
	i8 v5404 = *(i8*)(intptr_t)v5403;
	i8 v5405 = v5404+(+4);
	i1 v5406 = *(i1*)(intptr_t)v5405;
	i8 v5407 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v5407 = v5406;

c02_03e1:;

	i8 v5408 = (i8)(intptr_t)(ws+4200);
	i1 v5409 = *(i1*)(intptr_t)v5408;
	i1 v5410 = (i1)+0;
	if (v5409==v5410) goto c02_03e6; else goto c02_03e5;

c02_03e5:;

	i8 v5411 = (i8)(intptr_t)(ws+4184);
	i8 v5412 = *(i8*)(intptr_t)v5411;
	i1 v5413 = *(i1*)(intptr_t)v5412;
	i8 v5414 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v5414 = v5413;

	i8 v5415 = (i8)(intptr_t)(ws+4184);
	i8 v5416 = *(i8*)(intptr_t)v5415;
	i8 v5417 = v5416+(+1);
	i8 v5418 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5418 = v5417;

	i8 v5419 = (i8)(intptr_t)(ws+4200);
	i1 v5420 = *(i1*)(intptr_t)v5419;
	i1 v5421 = v5420&(+1);
	i1 v5422 = (i1)+0;
	if (v5421==v5422) goto c02_03eb; else goto c02_03ea;

c02_03ea:;

	i8 v5423 = (i8)(intptr_t)(ws+4192);
	i8 v5424 = *(i8*)(intptr_t)v5423;
	i1 v5425 = *(i1*)(intptr_t)v5424;
	i8 v5426 = (i8)(intptr_t)(ws+4202);
	*(i1*)(intptr_t)v5426 = v5425;

	i8 v5427 = (i8)(intptr_t)(ws+4192);
	i8 v5428 = *(i8*)(intptr_t)v5427;
	i8 v5429 = v5428+(+1);
	i8 v5430 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5430 = v5429;

	i8 v5431 = (i8)(intptr_t)(ws+4201);
	i1 v5432 = *(i1*)(intptr_t)v5431;
	i8 v5433 = (i8)(intptr_t)(ws+4202);
	i1 v5434 = *(i1*)(intptr_t)v5433;
	if (v5432==v5434) goto c02_03f0; else goto c02_03ef;

c02_03ef:;

	return;

c02_03f0:;

c02_03ec:;

c02_03eb:;

c02_03e7:;

	i8 v5435 = (i8)(intptr_t)(ws+4200);
	i1 v5436 = *(i1*)(intptr_t)v5435;
	i1 v5437 = (i1)+1;
	i1 v5438 = ((i1)v5436)>>v5437;
	i8 v5439 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v5439 = v5438;

	goto c02_03e1;

c02_03e6:;

	i8 v5440 = (i8)(intptr_t)(ws+4096);
	i1 v5441 = *(i1*)(intptr_t)v5440;
	*(i1*)(intptr_t)(ws+4208) = v5441;
	i8 v5442 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)(ws+4216) = v5442;
	i8 v5443 = (i8)(intptr_t)(f189_MatchPredicate);

	((void(*)(void))(intptr_t)v5443)();

	i1 v5444 = *(i1*)(intptr_t)(ws+4224);
	i8 v5445 = (i8)(intptr_t)(ws+4203);
	*(i1*)(intptr_t)v5445 = v5444;

	i8 v5446 = (i8)(intptr_t)(ws+4104);
	i8 v5447 = *(i8*)(intptr_t)v5446;
	i1 v5448 = *(i1*)(intptr_t)v5447;
	i1 v5449 = v5448&(+1);
	i1 v5450 = (i1)+0;
	if (v5449==v5450) goto c02_03f7; else goto c02_03f8;

c02_03f8:;

	i8 v5451 = (i8)(intptr_t)(ws+4203);
	i1 v5452 = *(i1*)(intptr_t)v5451;
	i1 v5453 = (i1)+0;
	if (v5452==v5453) goto c02_03f6; else goto c02_03f7;

c02_03f6:;

	return;

c02_03f7:;

c02_03f1:;

	i1 v5454 = (i1)+1;
	i8 v5455 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5455 = v5454;

}
	void f389_RewindRulePointers(void);
	void f77_AllocateNewNode(void);

// ConvertNodeToFallback workspace at ws+4176 length ws+33
void f391_ConvertNodeToFallback(void) {

	i8 v5478 = (i8)(intptr_t)(ws+4088);
	i8 v5479 = *(i8*)(intptr_t)v5478;
	i8 v5480 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v5480 = v5479;

	i1 v5481 = (i1)+24;
	*(i1*)(intptr_t)(ws+4216) = v5481;
	i8 v5482 = (i8)(intptr_t)(f77_AllocateNewNode);

	((void(*)(void))(intptr_t)v5482)();

	i8 v5483 = *(i8*)(intptr_t)(ws+4224);
	i8 v5484 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5484 = v5483;

	i8 v5485 = (i8)(intptr_t)(ws+4184);
	i8 v5486 = *(i8*)(intptr_t)v5485;
	i8 v5487 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v5487 = v5486;

	i8 v5488 = (i8)(intptr_t)(ws+4176);
	i8 v5489 = *(i8*)(intptr_t)v5488;
	i8 v5490 = (i8)(intptr_t)(ws+4088);
	i8 v5491 = *(i8*)(intptr_t)v5490;
	i8 v5492 = v5491+(+24);
	*(i8*)(intptr_t)v5492 = v5489;

	i8 v5493 = (i8)(intptr_t)(ws+4176);
	i8 v5494 = *(i8*)(intptr_t)v5493;
	i8 v5495 = v5494+(+48);
	i8 v5496 = *(i8*)(intptr_t)v5495;
	i8 v5497 = (i8)(intptr_t)(ws+4088);
	i8 v5498 = *(i8*)(intptr_t)v5497;
	i8 v5499 = v5498+(+48);
	*(i8*)(intptr_t)v5499 = v5496;

	i8 v5500 = (i8)(intptr_t)(ws+4088);
	i8 v5501 = *(i8*)(intptr_t)v5500;
	i8 v5502 = v5501+(+48);
	i8 v5503 = *(i8*)(intptr_t)v5502;
	i8 v5504 = v5503+(+16);
	i8 v5505 = *(i8*)(intptr_t)v5504;
	i8 v5506 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5506 = v5505;

	i8 v5507 = (i8)(intptr_t)(ws+4176);
	i8 v5508 = *(i8*)(intptr_t)v5507;
	i8 v5509 = v5508+(+56);
	i1 v5510 = *(i1*)(intptr_t)v5509;
	i8 v5511 = (i8)(intptr_t)(ws+4088);
	i8 v5512 = *(i8*)(intptr_t)v5511;
	i8 v5513 = v5512+(+56);
	*(i1*)(intptr_t)v5513 = v5510;

	i8 v5514 = (i8)(intptr_t)(ws+4192);
	i8 v5515 = *(i8*)(intptr_t)v5514;
	i8 v5516 = v5515+(+40);
	i8 v5517 = *(i8*)(intptr_t)v5516;
	i8 v5518 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5518 = v5517;

	i1 v5519 = (i1)+0;
	i8 v5520 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5520 = v5519;

c02_0408:;

	i8 v5521 = (i8)(intptr_t)(ws+4208);
	i1 v5522 = *(i1*)(intptr_t)v5521;
	i1 v5523 = (i1)+4;
	if (v5522==v5523) goto c02_040d; else goto c02_040c;

c02_040c:;

	i8 v5524 = (i8)(intptr_t)(ws+4200);
	i8 v5525 = *(i8*)(intptr_t)v5524;
	i8 v5526 = v5525+(+16);
	i8 v5527 = (i8)(intptr_t)(ws+4208);
	i1 v5528 = *(i1*)(intptr_t)v5527;
	i8 v5529 = v5528;
	i1 v5530 = (i1)+3;
	i8 v5531 = ((i8)v5529)<<v5530;
	i8 v5532 = v5526+v5531;
	i8 v5533 = *(i8*)(intptr_t)v5532;
	i8 v5534 = (i8)(intptr_t)(ws+4176);
	i8 v5535 = *(i8*)(intptr_t)v5534;
	if (v5533==v5535) goto c02_0411; else goto c02_0412;

c02_0411:;

	i8 v5536 = (i8)(intptr_t)(ws+4088);
	i8 v5537 = *(i8*)(intptr_t)v5536;
	i8 v5538 = (i8)(intptr_t)(ws+4200);
	i8 v5539 = *(i8*)(intptr_t)v5538;
	i8 v5540 = v5539+(+16);
	i8 v5541 = (i8)(intptr_t)(ws+4208);
	i1 v5542 = *(i1*)(intptr_t)v5541;
	i8 v5543 = v5542;
	i1 v5544 = (i1)+3;
	i8 v5545 = ((i8)v5543)<<v5544;
	i8 v5546 = v5540+v5545;
	*(i8*)(intptr_t)v5546 = v5537;

c02_0412:;

c02_040e:;

	i8 v5547 = (i8)(intptr_t)(ws+4208);
	i1 v5548 = *(i1*)(intptr_t)v5547;
	i1 v5549 = v5548+(+1);
	i8 v5550 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5550 = v5549;

	goto c02_0408;

c02_040d:;

}
	void f391_ConvertNodeToFallback(void);
	void f389_RewindRulePointers(void);
	void f380_PrintNodes(void);
	void f66_StartError(void);
const i1 c02_s01c7[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
	void f12_print(void);
	void f18_print_i8(void);
	void f9_print_char(void);
const i1 c02_s01c8[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f67_EndError(void);
	void f390_TestRule(void);
	void f61_PushNode(void);

// CopyChildNodes workspace at ws+4176 length ws+16
void f392_CopyChildNodes(void) {

	i8 v5653 = (i8)(intptr_t)(ws+4104);
	i8 v5654 = *(i8*)(intptr_t)v5653;
	i8 v5655 = v5654+(+5);
	i1 v5656 = *(i1*)(intptr_t)v5655;
	i8 v5657 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5657 = v5656;

	i8 v5658 = (i8)(intptr_t)(ws+4104);
	i8 v5659 = *(i8*)(intptr_t)v5658;
	i8 v5660 = v5659+(+6);
	i1 v5661 = *(i1*)(intptr_t)v5660;
	i8 v5662 = (i8)(intptr_t)(ws+4177);
	*(i1*)(intptr_t)v5662 = v5661;

	i1 v5663 = (i1)+0;
	i8 v5664 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v5664 = v5663;

c02_0434:;

	i8 v5665 = (i8)(intptr_t)(ws+4032);
	i1 v5666 = *(i1*)(intptr_t)v5665;
	i1 v5667 = (i1)+4;
	if (v5666==v5667) goto c02_0439; else goto c02_0438;

c02_0438:;

	i8 v5668 = (i8)(intptr_t)(ws+4120);
	i8 v5669 = (i8)(intptr_t)(ws+4032);
	i1 v5670 = *(i1*)(intptr_t)v5669;
	i8 v5671 = v5670;
	i1 v5672 = (i1)+3;
	i8 v5673 = ((i8)v5671)<<v5672;
	i8 v5674 = v5668+v5673;
	i8 v5675 = *(i8*)(intptr_t)v5674;
	i8 v5676 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5676 = v5675;

	i8 v5677 = (i8)(intptr_t)(ws+4176);
	i1 v5678 = *(i1*)(intptr_t)v5677;
	i1 v5679 = v5678&(+1);
	i1 v5680 = (i1)+0;
	if (v5679==v5680) goto c02_043e; else goto c02_043d;

c02_043d:;

	i8 v5681 = (i8)(intptr_t)(ws+4184);
	i8 v5682 = *(i8*)(intptr_t)v5681;
	i8 v5683 = (i8)(intptr_t)(ws+4072);
	i8 v5684 = *(i8*)(intptr_t)v5683;
	i8 v5685 = v5684+(+16);
	i8 v5686 = (i8)(intptr_t)(ws+4032);
	i1 v5687 = *(i1*)(intptr_t)v5686;
	i8 v5688 = v5687;
	i1 v5689 = (i1)+3;
	i8 v5690 = ((i8)v5688)<<v5689;
	i8 v5691 = v5685+v5690;
	*(i8*)(intptr_t)v5691 = v5682;

	i8 v5692 = (i8)(intptr_t)(ws+4177);
	i1 v5693 = *(i1*)(intptr_t)v5692;
	i1 v5694 = v5693&(+1);
	i1 v5695 = (i1)+0;
	if (v5694==v5695) goto c02_0443; else goto c02_0442;

c02_0442:;

	i8 v5696 = (i8)(intptr_t)(ws+4184);
	i8 v5697 = *(i8*)(intptr_t)v5696;
	*(i8*)(intptr_t)(ws+4232) = v5697;
	i8 v5698 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v5698)();

	i8 v5699 = (i8)(intptr_t)(ws+4160);
	i8 v5700 = *(i8*)(intptr_t)v5699;
	i1 v5701 = *(i1*)(intptr_t)v5700;
	i8 v5702 = (i8)(intptr_t)(ws+4184);
	i8 v5703 = *(i8*)(intptr_t)v5702;
	i8 v5704 = v5703+(+56);
	*(i1*)(intptr_t)v5704 = v5701;

	i8 v5705 = (i8)(intptr_t)(ws+4160);
	i8 v5706 = *(i8*)(intptr_t)v5705;
	i8 v5707 = v5706+(+1);
	i8 v5708 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5708 = v5707;

	i8 v5709 = (i8)(intptr_t)(ws+4072);
	i8 v5710 = *(i8*)(intptr_t)v5709;
	i8 v5711 = (i8)(intptr_t)(ws+4184);
	i8 v5712 = *(i8*)(intptr_t)v5711;
	i8 v5713 = v5712+(+48);
	*(i8*)(intptr_t)v5713 = v5710;

c02_0443:;

c02_043f:;

c02_043e:;

c02_043a:;

	i8 v5714 = (i8)(intptr_t)(ws+4176);
	i1 v5715 = *(i1*)(intptr_t)v5714;
	i1 v5716 = (i1)+1;
	i1 v5717 = ((i1)v5715)>>v5716;
	i8 v5718 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5718 = v5717;

	i8 v5719 = (i8)(intptr_t)(ws+4177);
	i1 v5720 = *(i1*)(intptr_t)v5719;
	i1 v5721 = (i1)+1;
	i1 v5722 = ((i1)v5720)>>v5721;
	i8 v5723 = (i8)(intptr_t)(ws+4177);
	*(i1*)(intptr_t)v5723 = v5722;

	i8 v5724 = (i8)(intptr_t)(ws+4032);
	i1 v5725 = *(i1*)(intptr_t)v5724;
	i1 v5726 = v5725+(+1);
	i8 v5727 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v5727 = v5726;

	goto c02_0434;

c02_0439:;

	i8 v5728 = (i8)(intptr_t)(ws+4072);
	i8 v5729 = *(i8*)(intptr_t)v5728;
	i8 v5730 = (i8)(intptr_t)(ws+4088);
	i8 v5731 = *(i8*)(intptr_t)v5730;
	i8 v5732 = v5731+(+40);
	*(i8*)(intptr_t)v5732 = v5729;

	i8 v5733 = (i8)(intptr_t)(ws+4088);
	i8 v5734 = *(i8*)(intptr_t)v5733;
	i8 v5735 = (i8)(intptr_t)(ws+4072);
	i8 v5736 = *(i8*)(intptr_t)v5735;
	i8 v5737 = v5736+(+56);
	*(i8*)(intptr_t)v5737 = v5734;

}
	void f392_CopyChildNodes(void);

// InstructionMatcher workspace at ws+4112 length ws+58
void f388_InstructionMatcher(void) {



	i8 v5456 = (i8)(intptr_t)(f389_RewindRulePointers);

	((void(*)(void))(intptr_t)v5456)();

c02_03f9:;

	i8 v5457 = (i8)(intptr_t)(ws+4104);
	i8 v5458 = *(i8*)(intptr_t)v5457;
	i8 v5459 = v5458+(+7);
	i8 v5460 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v5460 = v5459;

	i8 v5461 = (i8)(intptr_t)(ws+4096);
	i1 v5462 = *(i1*)(intptr_t)v5461;
	i1 v5463 = v5462+(+1);
	i8 v5464 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v5464 = v5463;

	i8 v5465 = (i8)(intptr_t)(ws+4104);
	i8 v5466 = *(i8*)(intptr_t)v5465;
	i8 v5467 = (i8)(intptr_t)((i1*)f3___main_s02ac+1302);
	if (v5466==v5467) goto c02_03fe; else goto c02_03ff;

c02_03fe:;

	i8 v5468 = (i8)(intptr_t)(ws+4088);
	i8 v5469 = *(i8*)(intptr_t)v5468;
	i8 v5470 = v5469+(+256);
	i1 v5471 = *(i1*)(intptr_t)v5470;
	i1 v5472 = (i1)+24;
	if (v5471==v5472) goto c02_0406; else goto c02_0407;

c02_0407:;

	i8 v5473 = (i8)(intptr_t)(ws+4088);
	i8 v5474 = *(i8*)(intptr_t)v5473;
	i8 v5475 = v5474+(+48);
	i8 v5476 = *(i8*)(intptr_t)v5475;
	i8 v5477 = (i8)+0;
	if (v5476==v5477) goto c02_0406; else goto c02_0405;

c02_0405:;


	i8 v5551 = (i8)(intptr_t)(f391_ConvertNodeToFallback);

	((void(*)(void))(intptr_t)v5551)();

	i8 v5552 = (i8)(intptr_t)(f389_RewindRulePointers);

	((void(*)(void))(intptr_t)v5552)();

	goto c02_03f9;

c02_0406:;

c02_0400:;

	i8 v5553 = (i8)(intptr_t)(ws+4024);
	i8 v5554 = *(i8*)(intptr_t)v5553;
	*(i8*)(intptr_t)(ws+4176) = v5554;
	i8 v5555 = (i8)(intptr_t)(f380_PrintNodes);

	((void(*)(void))(intptr_t)v5555)();

	i8 v5556 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v5556)();

	i8 v5557 = (i8)(intptr_t)c02_s01c7;
	*(i8*)(intptr_t)(ws+4288) = v5557;
	i8 v5558 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v5558)();

	i1 v5559 = (i1)+0;
	i8 v5560 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v5560 = v5559;

c02_0413:;

	i8 v5561 = (i8)(intptr_t)(ws+4032);
	i1 v5562 = *(i1*)(intptr_t)v5561;
	i1 v5563 = (i1)+4;
	if (v5562==v5563) goto c02_0418; else goto c02_0417;

c02_0417:;

	i8 v5564 = (i8)(intptr_t)(ws+4112);
	i8 v5565 = (i8)(intptr_t)(ws+4032);
	i1 v5566 = *(i1*)(intptr_t)v5565;
	i8 v5567 = v5566;
	i8 v5568 = v5564+v5567;
	i1 v5569 = *(i1*)(intptr_t)v5568;
	*(i1*)(intptr_t)(ws+4232) = v5569;
	i8 v5570 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v5570)();

	i1 v5571 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5571;
	i8 v5572 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5572)();

	i8 v5573 = (i8)(intptr_t)(ws+4032);
	i1 v5574 = *(i1*)(intptr_t)v5573;
	i1 v5575 = v5574+(+1);
	i8 v5576 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v5576 = v5575;

	goto c02_0413;

c02_0418:;

	i8 v5577 = (i8)(intptr_t)c02_s01c8;
	*(i8*)(intptr_t)(ws+4288) = v5577;
	i8 v5578 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v5578)();

	i8 v5579 = (i8)(intptr_t)(ws+4088);
	i8 v5580 = *(i8*)(intptr_t)v5579;
	i8 v5581 = v5580+(+56);
	i1 v5582 = *(i1*)(intptr_t)v5581;
	i4 v5583 = v5582;
	*(i4*)(intptr_t)(ws+4288) = v5583;
	i8 v5584 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5584)();

	i8 v5585 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v5585)();

c02_03ff:;

c02_03fb:;

	i8 v5586 = (i8)(intptr_t)(f390_TestRule);

	((void(*)(void))(intptr_t)v5586)();

	i1 v5587 = *(i1*)(intptr_t)(ws+4176);
	i8 v5588 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v5588 = v5587;

	i8 v5589 = (i8)(intptr_t)(ws+4168);
	i1 v5590 = *(i1*)(intptr_t)v5589;
	i1 v5591 = (i1)+0;
	if (v5590==v5591) goto c02_041d; else goto c02_041c;

c02_041c:;

	goto c02_03fa;

c02_041d:;

c02_0419:;

	i8 v5592 = (i8)(intptr_t)(ws+4104);
	i8 v5593 = *(i8*)(intptr_t)v5592;
	i8 v5594 = v5593+(+4);
	i1 v5595 = *(i1*)(intptr_t)v5594;
	i8 v5596 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v5596 = v5595;

c02_041e:;

	i8 v5597 = (i8)(intptr_t)(ws+4169);
	i1 v5598 = *(i1*)(intptr_t)v5597;
	i1 v5599 = (i1)+0;
	if (v5598==v5599) goto c02_0423; else goto c02_0422;

c02_0422:;

	i8 v5600 = (i8)(intptr_t)(ws+4169);
	i1 v5601 = *(i1*)(intptr_t)v5600;
	i1 v5602 = v5601&(+1);
	i1 v5603 = (i1)+0;
	if (v5602==v5603) goto c02_0428; else goto c02_0427;

c02_0427:;

	i8 v5604 = (i8)(intptr_t)(ws+4152);
	i8 v5605 = *(i8*)(intptr_t)v5604;
	i8 v5606 = v5605+(+1);
	i8 v5607 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5607 = v5606;

c02_0428:;

c02_0424:;

	i8 v5608 = (i8)(intptr_t)(ws+4169);
	i1 v5609 = *(i1*)(intptr_t)v5608;
	i1 v5610 = (i1)+1;
	i1 v5611 = ((i1)v5609)>>v5610;
	i8 v5612 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v5612 = v5611;

	goto c02_041e;

c02_0423:;

	i8 v5613 = (i8)(intptr_t)(ws+4104);
	i8 v5614 = *(i8*)(intptr_t)v5613;
	i8 v5615 = v5614+(+6);
	i1 v5616 = *(i1*)(intptr_t)v5615;
	i8 v5617 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v5617 = v5616;

c02_0429:;

	i8 v5618 = (i8)(intptr_t)(ws+4169);
	i1 v5619 = *(i1*)(intptr_t)v5618;
	i1 v5620 = (i1)+0;
	if (v5619==v5620) goto c02_042e; else goto c02_042d;

c02_042d:;

	i8 v5621 = (i8)(intptr_t)(ws+4169);
	i1 v5622 = *(i1*)(intptr_t)v5621;
	i1 v5623 = v5622&(+1);
	i1 v5624 = (i1)+0;
	if (v5623==v5624) goto c02_0433; else goto c02_0432;

c02_0432:;

	i8 v5625 = (i8)(intptr_t)(ws+4160);
	i8 v5626 = *(i8*)(intptr_t)v5625;
	i8 v5627 = v5626+(+1);
	i8 v5628 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5628 = v5627;

c02_0433:;

c02_042f:;

	i8 v5629 = (i8)(intptr_t)(ws+4169);
	i1 v5630 = *(i1*)(intptr_t)v5629;
	i1 v5631 = (i1)+1;
	i1 v5632 = ((i1)v5630)>>v5631;
	i8 v5633 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v5633 = v5632;

	goto c02_0429;

c02_042e:;

	goto c02_03f9;

c02_03fa:;

	i8 v5634 = (i8)(intptr_t)(ws+4096);
	i1 v5635 = *(i1*)(intptr_t)v5634;
	i8 v5636 = (i8)(intptr_t)(ws+4072);
	i8 v5637 = *(i8*)(intptr_t)v5636;
	i8 v5638 = v5637+(+86);
	*(i1*)(intptr_t)v5638 = v5635;

	i8 v5639 = (i8)(intptr_t)(ws+4104);
	i8 v5640 = *(i8*)(intptr_t)v5639;
	i8 v5641 = v5640+(+2);
	i1 v5642 = *(i1*)(intptr_t)v5641;
	i8 v5643 = (i8)(intptr_t)(ws+4072);
	i8 v5644 = *(i8*)(intptr_t)v5643;
	i8 v5645 = v5644+(+48);
	*(i1*)(intptr_t)v5645 = v5642;

	i8 v5646 = (i8)(intptr_t)(ws+4104);
	i8 v5647 = *(i8*)(intptr_t)v5646;
	i8 v5648 = v5647+(+3);
	i1 v5649 = *(i1*)(intptr_t)v5648;
	i8 v5650 = (i8)(intptr_t)(ws+4072);
	i8 v5651 = *(i8*)(intptr_t)v5650;
	i8 v5652 = v5651+(+65);
	*(i1*)(intptr_t)v5652 = v5649;


	i8 v5738 = (i8)(intptr_t)(f392_CopyChildNodes);

	((void(*)(void))(intptr_t)v5738)();

}
	void f388_InstructionMatcher(void);
	void f384_IsSimpleValue(void);
	void f385_SimpleValuesMatch(void);
	void f31_MemCopy(void);
	void f151_FindFirst(void);

// FindPreferredRegister workspace at ws+4152 length ws+58
void f393_FindPreferredRegister(void) {

	i8 v5745 = (i8)(intptr_t)(ws+4072);
	i8 v5746 = *(i8*)(intptr_t)v5745;
	*(i8*)(intptr_t)(ws+4216) = v5746;
	i8 v5747 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)(ws+4224) = v5747;
	i8 v5748 = (i8)(intptr_t)(f384_IsSimpleValue);

	((void(*)(void))(intptr_t)v5748)();

	i1 v5749 = *(i1*)(intptr_t)(ws+4232);
	i8 v5750 = (i8)(intptr_t)(ws+4180);
	*(i1*)(intptr_t)v5750 = v5749;

	i8 v5751 = (i8)(intptr_t)(ws+4180);
	i1 v5752 = *(i1*)(intptr_t)v5751;
	i1 v5753 = (i1)+0;
	if (v5752==v5753) goto c02_044d; else goto c02_044c;

c02_044c:;

	i8 v5754 = (i8)(intptr_t)(ws+3576);
	i8 v5755 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5755 = v5754;

c02_044e:;

	i8 v5756 = (i8)(intptr_t)(ws+4184);
	i8 v5757 = *(i8*)(intptr_t)v5756;
	i8 v5758 = (i8)(intptr_t)(ws+3696);
	if (v5757==v5758) goto c02_0453; else goto c02_0452;

c02_0452:;

	i8 v5759 = (i8)(intptr_t)(ws+4184);
	i8 v5760 = *(i8*)(intptr_t)v5759;
	i8 v5761 = v5760+(+18);
	i1 v5762 = *(i1*)(intptr_t)v5761;
	i1 v5763 = (i1)+0;
	if (v5762==v5763) goto c02_0458; else goto c02_0457;

c02_0457:;

	i8 v5764 = (i8)(intptr_t)(ws+4184);
	i8 v5765 = *(i8*)(intptr_t)v5764;
	i8 v5766 = v5765+(+18);
	i1 v5767 = *(i1*)(intptr_t)v5766;
	i1 v5768 = v5767+(-1);
	i8 v5769 = (i8)(intptr_t)(ws+4184);
	i8 v5770 = *(i8*)(intptr_t)v5769;
	i8 v5771 = v5770+(+18);
	*(i1*)(intptr_t)v5771 = v5768;

c02_0458:;

c02_0454:;

	i8 v5772 = (i8)(intptr_t)(ws+4184);
	i8 v5773 = *(i8*)(intptr_t)v5772;
	i8 v5774 = v5773+(+24);
	i8 v5775 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5775 = v5774;

	goto c02_044e;

c02_0453:;

	i8 v5776 = (i8)(intptr_t)(ws+3576);
	i8 v5777 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5777 = v5776;

	i1 v5778 = (i1)+16;
	i8 v5779 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5779 = v5778;

c02_0459:;

	i8 v5780 = (i8)(intptr_t)(ws+4184);
	i8 v5781 = *(i8*)(intptr_t)v5780;
	i8 v5782 = (i8)(intptr_t)(ws+3696);
	if (v5781==v5782) goto c02_045e; else goto c02_045d;

c02_045d:;

	i8 v5783 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)(ws+4216) = v5783;
	i8 v5784 = (i8)(intptr_t)(ws+4184);
	i8 v5785 = *(i8*)(intptr_t)v5784;
	*(i8*)(intptr_t)(ws+4224) = v5785;
	i8 v5786 = (i8)(intptr_t)(f385_SimpleValuesMatch);

	((void(*)(void))(intptr_t)v5786)();

	i1 v5787 = *(i1*)(intptr_t)(ws+4232);
	i8 v5788 = (i8)(intptr_t)(ws+4192);
	*(i1*)(intptr_t)v5788 = v5787;

	i8 v5789 = (i8)(intptr_t)(ws+4184);
	i8 v5790 = *(i8*)(intptr_t)v5789;
	i8 v5791 = v5790+(+19);
	i1 v5792 = *(i1*)(intptr_t)v5791;
	i1 v5793 = (i1)+0;
	if (v5792==v5793) goto c02_0467; else goto c02_0469;

c02_0469:;

	i8 v5794 = (i8)(intptr_t)(ws+4153);
	i1 v5795 = *(i1*)(intptr_t)v5794;
	i8 v5796 = (i8)(intptr_t)(ws+4152);
	i1 v5797 = *(i1*)(intptr_t)v5796;
	i1 v5798 = v5795&v5797;
	i1 v5799 = (i1)+0;
	if (v5798==v5799) goto c02_0467; else goto c02_0468;

c02_0468:;

	i8 v5800 = (i8)(intptr_t)(ws+4192);
	i1 v5801 = *(i1*)(intptr_t)v5800;
	i1 v5802 = (i1)+0;
	if (v5801==v5802) goto c02_0467; else goto c02_0466;

c02_0466:;

	i1 v5803 = (i1)+255;
	i8 v5804 = (i8)(intptr_t)(ws+4184);
	i8 v5805 = *(i8*)(intptr_t)v5804;
	i8 v5806 = v5805+(+18);
	*(i1*)(intptr_t)v5806 = v5803;

	return;

c02_0467:;

c02_045f:;

	i8 v5807 = (i8)(intptr_t)(ws+4184);
	i8 v5808 = *(i8*)(intptr_t)v5807;
	i8 v5809 = v5808+(+24);
	i8 v5810 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5810 = v5809;

	i8 v5811 = (i8)(intptr_t)(ws+4153);
	i1 v5812 = *(i1*)(intptr_t)v5811;
	i1 v5813 = (i1)+1;
	i1 v5814 = ((i1)v5812)>>v5813;
	i8 v5815 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5815 = v5814;

	goto c02_0459;

c02_045e:;

	i8 v5816 = (i8)+0;
	i8 v5817 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5817 = v5816;

	i8 v5818 = (i8)(intptr_t)(ws+3576);
	i8 v5819 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5819 = v5818;

	i1 v5820 = (i1)+16;
	i8 v5821 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5821 = v5820;

c02_046a:;

	i8 v5822 = (i8)(intptr_t)(ws+4184);
	i8 v5823 = *(i8*)(intptr_t)v5822;
	i8 v5824 = (i8)(intptr_t)(ws+3696);
	if (v5823==v5824) goto c02_046f; else goto c02_046e;

c02_046e:;

	i8 v5825 = (i8)(intptr_t)(ws+4153);
	i1 v5826 = *(i1*)(intptr_t)v5825;
	i8 v5827 = (i8)(intptr_t)(ws+4152);
	i1 v5828 = *(i1*)(intptr_t)v5827;
	i1 v5829 = v5826&v5828;
	i1 v5830 = (i1)+0;
	if (v5829==v5830) goto c02_0474; else goto c02_0473;

c02_0473:;

	i8 v5831 = (i8)(intptr_t)(ws+4184);
	i8 v5832 = *(i8*)(intptr_t)v5831;
	i8 v5833 = v5832+(+19);
	i1 v5834 = *(i1*)(intptr_t)v5833;
	i1 v5835 = (i1)+0;
	if (v5834==v5835) goto c02_0478; else goto c02_0479;

c02_0478:;

	i8 v5836 = (i8)(intptr_t)(ws+4184);
	i8 v5837 = *(i8*)(intptr_t)v5836;
	i8 v5838 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5838 = v5837;

	i8 v5839 = (i8)(intptr_t)(ws+4153);
	i1 v5840 = *(i1*)(intptr_t)v5839;
	i8 v5841 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5841 = v5840;

	goto c02_046f;

c02_0479:;

c02_0475:;

	i8 v5842 = (i8)(intptr_t)(ws+4200);
	i8 v5843 = *(i8*)(intptr_t)v5842;
	i8 v5844 = (i8)+0;
	if (v5843==v5844) goto c02_047d; else goto c02_047e;

c02_047d:;

	i8 v5845 = (i8)(intptr_t)(ws+4184);
	i8 v5846 = *(i8*)(intptr_t)v5845;
	i8 v5847 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5847 = v5846;

	i8 v5848 = (i8)(intptr_t)(ws+4153);
	i1 v5849 = *(i1*)(intptr_t)v5848;
	i8 v5850 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5850 = v5849;

	goto c02_047a;

c02_047e:;

	i8 v5851 = (i8)(intptr_t)(ws+4184);
	i8 v5852 = *(i8*)(intptr_t)v5851;
	i8 v5853 = v5852+(+18);
	i1 v5854 = *(i1*)(intptr_t)v5853;
	i8 v5855 = (i8)(intptr_t)(ws+4200);
	i8 v5856 = *(i8*)(intptr_t)v5855;
	i8 v5857 = v5856+(+18);
	i1 v5858 = *(i1*)(intptr_t)v5857;
	if (v5854<v5858) goto c02_0482; else goto c02_0483;

c02_0482:;

	i8 v5859 = (i8)(intptr_t)(ws+4184);
	i8 v5860 = *(i8*)(intptr_t)v5859;
	i8 v5861 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5861 = v5860;

	i8 v5862 = (i8)(intptr_t)(ws+4153);
	i1 v5863 = *(i1*)(intptr_t)v5862;
	i8 v5864 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5864 = v5863;

c02_0483:;

c02_047f:;

c02_047a:;

c02_0474:;

c02_0470:;

	i8 v5865 = (i8)(intptr_t)(ws+4184);
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = v5866+(+24);
	i8 v5868 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5868 = v5867;

	i8 v5869 = (i8)(intptr_t)(ws+4153);
	i1 v5870 = *(i1*)(intptr_t)v5869;
	i1 v5871 = (i1)+1;
	i1 v5872 = ((i1)v5870)>>v5871;
	i8 v5873 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5873 = v5872;

	goto c02_046a;

c02_046f:;

	i8 v5874 = (i8)(intptr_t)(ws+4200);
	i8 v5875 = *(i8*)(intptr_t)v5874;
	i8 v5876 = (i8)+0;
	if (v5875==v5876) goto c02_0488; else goto c02_0487;

c02_0487:;

	i8 v5877 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)(ws+4264) = v5877;
	i8 v5878 = (i8)+20;
	*(i8*)(intptr_t)(ws+4272) = v5878;
	i8 v5879 = (i8)(intptr_t)(ws+4200);
	i8 v5880 = *(i8*)(intptr_t)v5879;
	*(i8*)(intptr_t)(ws+4280) = v5880;
	i8 v5881 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v5881)();

	i1 v5882 = (i1)+255;
	i8 v5883 = (i8)(intptr_t)(ws+4200);
	i8 v5884 = *(i8*)(intptr_t)v5883;
	i8 v5885 = v5884+(+18);
	*(i1*)(intptr_t)v5885 = v5882;

	i8 v5886 = (i8)(intptr_t)(ws+4208);
	i1 v5887 = *(i1*)(intptr_t)v5886;
	i8 v5888 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5888 = v5887;

	return;

c02_0488:;

c02_0484:;

c02_044d:;

c02_0449:;

	i8 v5889 = (i8)(intptr_t)(ws+4152);
	i1 v5890 = *(i1*)(intptr_t)v5889;
	*(i1*)(intptr_t)(ws+4216) = v5890;
	i8 v5891 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v5891)();

	i1 v5892 = *(i1*)(intptr_t)(ws+4217);
	i8 v5893 = (i8)(intptr_t)(ws+4209);
	*(i1*)(intptr_t)v5893 = v5892;

	i8 v5894 = (i8)(intptr_t)(ws+4209);
	i1 v5895 = *(i1*)(intptr_t)v5894;
	i8 v5896 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5896 = v5895;

}
	void f371_IsStackedRegister(void);
	void f151_FindFirst(void);
	void f151_FindFirst(void);
	void f151_FindFirst(void);
	void f377_CreateSpill(void);
	void f372_CalculateBlockedRegisters(void);
	void f393_FindPreferredRegister(void);
	void f149_FindConflictingRegisters(void);
	void f374_BlockRegisters(void);
	void f150_FindCompatibleRegisters(void);
	void f151_FindFirst(void);
	void f151_FindFirst(void);
	void f149_FindConflictingRegisters(void);
	void f149_FindConflictingRegisters(void);
	void f374_BlockRegisters(void);
	void f378_CreateReload(void);
	void f151_FindFirst(void);
	void f151_FindFirst(void);
	void f149_FindConflictingRegisters(void);
	void f374_BlockRegisters(void);
	void f149_FindConflictingRegisters(void);
	void f377_CreateSpill(void);
	void f380_PrintNodes(void);
const i1 c02_s01c9[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01ca[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01cb[] = { 0x6e,0x6f,0x64,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01cc[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01cd[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01ce[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01cf[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01d0[] = { 0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
	void f66_StartError(void);
const i1 c02_s01d1[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0x3a,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f67_EndError(void);

// deadlock workspace at ws+4152 length ws+8
void f395_deadlock(void) {

	i8 v6300 = (i8)(intptr_t)(ws+4024);
	i8 v6301 = *(i8*)(intptr_t)v6300;
	*(i8*)(intptr_t)(ws+4176) = v6301;
	i8 v6302 = (i8)(intptr_t)(f380_PrintNodes);

	((void(*)(void))(intptr_t)v6302)();

	i8 v6303 = (i8)(intptr_t)c02_s01c9;
	*(i8*)(intptr_t)(ws+4288) = v6303;
	i8 v6304 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6304)();

	i8 v6305 = (i8)(intptr_t)(ws+4072);
	i8 v6306 = *(i8*)(intptr_t)v6305;
	i8 v6307 = v6306+(+16);
	i8 v6308 = *(i8*)(intptr_t)v6307;
	i4 v6309 = v6308;
	*(i4*)(intptr_t)(ws+4288) = v6309;
	i8 v6310 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6310)();

	i8 v6311 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6311)();

	i8 v6312 = (i8)(intptr_t)c02_s01ca;
	*(i8*)(intptr_t)(ws+4288) = v6312;
	i8 v6313 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6313)();

	i8 v6314 = (i8)(intptr_t)(ws+4120);
	i8 v6315 = *(i8*)(intptr_t)v6314;
	i8 v6316 = v6315+(+16);
	i8 v6317 = *(i8*)(intptr_t)v6316;
	i4 v6318 = v6317;
	*(i4*)(intptr_t)(ws+4288) = v6318;
	i8 v6319 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6319)();

	i8 v6320 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6320)();

	i8 v6321 = (i8)(intptr_t)c02_s01cb;
	*(i8*)(intptr_t)(ws+4288) = v6321;
	i8 v6322 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6322)();

	i8 v6323 = (i8)(intptr_t)(ws+4088);
	i8 v6324 = *(i8*)(intptr_t)v6323;
	i4 v6325 = v6324;
	*(i4*)(intptr_t)(ws+4288) = v6325;
	i8 v6326 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6326)();

	i8 v6327 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6327)();

	i8 v6328 = (i8)(intptr_t)c02_s01cc;
	*(i8*)(intptr_t)(ws+4288) = v6328;
	i8 v6329 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6329)();

	i8 v6330 = (i8)(intptr_t)(ws+4072);
	i8 v6331 = *(i8*)(intptr_t)v6330;
	i8 v6332 = v6331+(+48);
	i1 v6333 = *(i1*)(intptr_t)v6332;
	i4 v6334 = v6333;
	*(i4*)(intptr_t)(ws+4288) = v6334;
	i8 v6335 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6335)();

	i8 v6336 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6336)();

	i8 v6337 = (i8)(intptr_t)c02_s01cd;
	*(i8*)(intptr_t)(ws+4288) = v6337;
	i8 v6338 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6338)();

	i8 v6339 = (i8)(intptr_t)(ws+4072);
	i8 v6340 = *(i8*)(intptr_t)v6339;
	i8 v6341 = v6340+(+66);
	i1 v6342 = *(i1*)(intptr_t)v6341;
	i4 v6343 = v6342;
	*(i4*)(intptr_t)(ws+4288) = v6343;
	i8 v6344 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6344)();

	i8 v6345 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6345)();

	i8 v6346 = (i8)(intptr_t)c02_s01ce;
	*(i8*)(intptr_t)(ws+4288) = v6346;
	i8 v6347 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6347)();

	i8 v6348 = (i8)(intptr_t)(ws+4088);
	i8 v6349 = *(i8*)(intptr_t)v6348;
	i8 v6350 = v6349+(+56);
	i1 v6351 = *(i1*)(intptr_t)v6350;
	i4 v6352 = v6351;
	*(i4*)(intptr_t)(ws+4288) = v6352;
	i8 v6353 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6353)();

	i8 v6354 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6354)();

	i8 v6355 = (i8)(intptr_t)c02_s01cf;
	*(i8*)(intptr_t)(ws+4288) = v6355;
	i8 v6356 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6356)();

	i8 v6357 = (i8)(intptr_t)(ws+4120);
	i8 v6358 = *(i8*)(intptr_t)v6357;
	i8 v6359 = v6358+(+64);
	i1 v6360 = *(i1*)(intptr_t)v6359;
	i4 v6361 = v6360;
	*(i4*)(intptr_t)(ws+4288) = v6361;
	i8 v6362 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6362)();

	i8 v6363 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6363)();

	i8 v6364 = (i8)(intptr_t)c02_s01d0;
	*(i8*)(intptr_t)(ws+4288) = v6364;
	i8 v6365 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6365)();

	i8 v6366 = (i8)(intptr_t)(ws+4134);
	i1 v6367 = *(i1*)(intptr_t)v6366;
	i4 v6368 = v6367;
	*(i4*)(intptr_t)(ws+4288) = v6368;
	i8 v6369 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6369)();

	i8 v6370 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6370)();

	i8 v6371 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v6371)();

	i8 v6372 = (i8)(intptr_t)c02_s01d1;
	*(i8*)(intptr_t)(ws+4288) = v6372;
	i8 v6373 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6373)();

	i8 v6374 = (i8)(intptr_t)(ws+4152);
	i8 v6375 = *(i8*)(intptr_t)v6374;
	*(i8*)(intptr_t)(ws+4288) = v6375;
	i8 v6376 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6376)();

	i8 v6377 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v6377)();

}
const i1 c02_s01d2[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0 };
	void f395_deadlock(void);
	void f151_FindFirst(void);
	void f149_FindConflictingRegisters(void);
	void f377_CreateSpill(void);
const i1 c02_s01d3[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0 };
	void f395_deadlock(void);
	void f151_FindFirst(void);
	void f149_FindConflictingRegisters(void);
	void f378_CreateReload(void);

// AllocateRegister workspace at ws+4112 length ws+36
void f394_AllocateRegister(void) {

	i8 v5897 = (i8)(intptr_t)(ws+4072);
	i8 v5898 = *(i8*)(intptr_t)v5897;
	i8 v5899 = v5898+(+48);
	i1 v5900 = *(i1*)(intptr_t)v5899;
	*(i1*)(intptr_t)(ws+4256) = v5900;
	i8 v5901 = (i8)(intptr_t)(f371_IsStackedRegister);

	((void(*)(void))(intptr_t)v5901)();

	i1 v5902 = *(i1*)(intptr_t)(ws+4257);
	i8 v5903 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v5903 = v5902;

	i8 v5904 = (i8)(intptr_t)(ws+4112);
	i1 v5905 = *(i1*)(intptr_t)v5904;
	i1 v5906 = (i1)+0;
	if (v5905==v5906) goto c02_048d; else goto c02_048c;

c02_048c:;

	i8 v5907 = (i8)(intptr_t)(ws+4088);
	i8 v5908 = *(i8*)(intptr_t)v5907;
	i8 v5909 = v5908+(+56);
	i1 v5910 = *(i1*)(intptr_t)v5909;
	i8 v5911 = (i8)(intptr_t)(ws+4072);
	i8 v5912 = *(i8*)(intptr_t)v5911;
	i8 v5913 = v5912+(+48);
	i1 v5914 = *(i1*)(intptr_t)v5913;
	i1 v5915 = v5910&v5914;
	i8 v5916 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v5916 = v5915;

	i8 v5917 = (i8)(intptr_t)(ws+4113);
	i1 v5918 = *(i1*)(intptr_t)v5917;
	i1 v5919 = (i1)+0;
	if (v5918==v5919) goto c02_0492; else goto c02_0491;

c02_0491:;

	i8 v5920 = (i8)(intptr_t)(ws+4113);
	i1 v5921 = *(i1*)(intptr_t)v5920;
	*(i1*)(intptr_t)(ws+4216) = v5921;
	i8 v5922 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v5922)();

	i1 v5923 = *(i1*)(intptr_t)(ws+4217);
	i8 v5924 = (i8)(intptr_t)(ws+4114);
	*(i1*)(intptr_t)v5924 = v5923;

	i8 v5925 = (i8)(intptr_t)(ws+4114);
	i1 v5926 = *(i1*)(intptr_t)v5925;
	i8 v5927 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v5927 = v5926;

	i8 v5928 = (i8)(intptr_t)(ws+4113);
	i1 v5929 = *(i1*)(intptr_t)v5928;
	i8 v5930 = (i8)(intptr_t)(ws+4088);
	i8 v5931 = *(i8*)(intptr_t)v5930;
	i8 v5932 = v5931+(+57);
	*(i1*)(intptr_t)v5932 = v5929;

	i8 v5933 = (i8)(intptr_t)(ws+4113);
	i1 v5934 = *(i1*)(intptr_t)v5933;
	i8 v5935 = (i8)(intptr_t)(ws+4072);
	i8 v5936 = *(i8*)(intptr_t)v5935;
	i8 v5937 = v5936+(+49);
	*(i1*)(intptr_t)v5937 = v5934;

	goto c02_048e;

c02_0492:;

	i8 v5938 = (i8)(intptr_t)(ws+4072);
	i8 v5939 = *(i8*)(intptr_t)v5938;
	i8 v5940 = v5939+(+48);
	i1 v5941 = *(i1*)(intptr_t)v5940;
	*(i1*)(intptr_t)(ws+4216) = v5941;
	i8 v5942 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v5942)();

	i1 v5943 = *(i1*)(intptr_t)(ws+4217);
	i8 v5944 = (i8)(intptr_t)(ws+4115);
	*(i1*)(intptr_t)v5944 = v5943;

	i8 v5945 = (i8)(intptr_t)(ws+4115);
	i1 v5946 = *(i1*)(intptr_t)v5945;
	i8 v5947 = (i8)(intptr_t)(ws+4072);
	i8 v5948 = *(i8*)(intptr_t)v5947;
	i8 v5949 = v5948+(+49);
	*(i1*)(intptr_t)v5949 = v5946;

	i8 v5950 = (i8)(intptr_t)(ws+4088);
	i8 v5951 = *(i8*)(intptr_t)v5950;
	i8 v5952 = v5951+(+56);
	i1 v5953 = *(i1*)(intptr_t)v5952;
	*(i1*)(intptr_t)(ws+4216) = v5953;
	i8 v5954 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v5954)();

	i1 v5955 = *(i1*)(intptr_t)(ws+4217);
	i8 v5956 = (i8)(intptr_t)(ws+4116);
	*(i1*)(intptr_t)v5956 = v5955;

	i8 v5957 = (i8)(intptr_t)(ws+4116);
	i1 v5958 = *(i1*)(intptr_t)v5957;
	i8 v5959 = (i8)(intptr_t)(ws+4088);
	i8 v5960 = *(i8*)(intptr_t)v5959;
	i8 v5961 = v5960+(+57);
	*(i1*)(intptr_t)v5961 = v5958;

	i8 v5962 = (i8)(intptr_t)(ws+4072);
	i8 v5963 = *(i8*)(intptr_t)v5962;
	*(i8*)(intptr_t)(ws+4152) = v5963;
	i8 v5964 = (i8)(intptr_t)(ws+4072);
	i8 v5965 = *(i8*)(intptr_t)v5964;
	i8 v5966 = v5965+(+49);
	i1 v5967 = *(i1*)(intptr_t)v5966;
	*(i1*)(intptr_t)(ws+4160) = v5967;
	i8 v5968 = (i8)(intptr_t)(ws+4088);
	i8 v5969 = *(i8*)(intptr_t)v5968;
	i8 v5970 = v5969+(+57);
	i1 v5971 = *(i1*)(intptr_t)v5970;
	*(i1*)(intptr_t)(ws+4161) = v5971;
	i8 v5972 = (i8)(intptr_t)(f377_CreateSpill);

	((void(*)(void))(intptr_t)v5972)();

c02_048e:;

	goto c02_0489;

c02_048d:;

	i8 v5973 = (i8)(intptr_t)(ws+4088);
	i8 v5974 = *(i8*)(intptr_t)v5973;
	i8 v5975 = v5974+(+48);
	i8 v5976 = *(i8*)(intptr_t)v5975;
	i8 v5977 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v5977 = v5976;

	i8 v5978 = (i8)(intptr_t)(ws+4120);
	i8 v5979 = *(i8*)(intptr_t)v5978;
	*(i8*)(intptr_t)(ws+4152) = v5979;
	i8 v5980 = (i8)(intptr_t)(ws+4072);
	i8 v5981 = *(i8*)(intptr_t)v5980;
	*(i8*)(intptr_t)(ws+4160) = v5981;
	i8 v5982 = (i8)(intptr_t)(f372_CalculateBlockedRegisters);

	((void(*)(void))(intptr_t)v5982)();

	i1 v5983 = *(i1*)(intptr_t)(ws+4168);
	i8 v5984 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v5984 = v5983;

	i8 v5985 = (i8)(intptr_t)(ws+4128);
	i1 v5986 = *(i1*)(intptr_t)v5985;
	i8 v5987 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v5987 = v5986;

	i8 v5988 = (i8)(intptr_t)(ws+4088);
	i8 v5989 = *(i8*)(intptr_t)v5988;
	i8 v5990 = v5989+(+56);
	i1 v5991 = *(i1*)(intptr_t)v5990;
	i8 v5992 = (i8)(intptr_t)(ws+4072);
	i8 v5993 = *(i8*)(intptr_t)v5992;
	i8 v5994 = v5993+(+48);
	i1 v5995 = *(i1*)(intptr_t)v5994;
	i1 v5996 = v5991&v5995;
	i8 v5997 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v5997 = v5996;

	i8 v5998 = (i8)(intptr_t)(ws+4113);
	i1 v5999 = *(i1*)(intptr_t)v5998;
	i8 v6000 = (i8)(intptr_t)(ws+4129);
	i1 v6001 = *(i1*)(intptr_t)v6000;
	i8 v6002 = (i8)(intptr_t)(ws+4072);
	i8 v6003 = *(i8*)(intptr_t)v6002;
	i8 v6004 = v6003+(+66);
	i1 v6005 = *(i1*)(intptr_t)v6004;
	i1 v6006 = v6001|v6005;
	i8 v6007 = (i8)(intptr_t)(ws+4120);
	i8 v6008 = *(i8*)(intptr_t)v6007;
	i8 v6009 = v6008+(+64);
	i1 v6010 = *(i1*)(intptr_t)v6009;
	i1 v6011 = v6006|v6010;
	i1 v6012 = ~v6011;
	i1 v6013 = v5999&v6012;
	i8 v6014 = (i8)(intptr_t)(ws+4130);
	*(i1*)(intptr_t)v6014 = v6013;

	i8 v6015 = (i8)(intptr_t)(ws+4130);
	i1 v6016 = *(i1*)(intptr_t)v6015;
	i1 v6017 = (i1)+0;
	if (v6016==v6017) goto c02_0497; else goto c02_0496;

c02_0496:;

	i8 v6018 = (i8)(intptr_t)(ws+4130);
	i1 v6019 = *(i1*)(intptr_t)v6018;
	*(i1*)(intptr_t)(ws+4152) = v6019;
	i8 v6020 = (i8)(intptr_t)(f393_FindPreferredRegister);

	((void(*)(void))(intptr_t)v6020)();

	i1 v6021 = *(i1*)(intptr_t)(ws+4153);
	i8 v6022 = (i8)(intptr_t)(ws+4131);
	*(i1*)(intptr_t)v6022 = v6021;

	i8 v6023 = (i8)(intptr_t)(ws+4131);
	i1 v6024 = *(i1*)(intptr_t)v6023;
	i8 v6025 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6025 = v6024;

	i8 v6026 = (i8)(intptr_t)(ws+4113);
	i1 v6027 = *(i1*)(intptr_t)v6026;
	i8 v6028 = (i8)(intptr_t)(ws+4088);
	i8 v6029 = *(i8*)(intptr_t)v6028;
	i8 v6030 = v6029+(+57);
	*(i1*)(intptr_t)v6030 = v6027;

	i8 v6031 = (i8)(intptr_t)(ws+4113);
	i1 v6032 = *(i1*)(intptr_t)v6031;
	i8 v6033 = (i8)(intptr_t)(ws+4072);
	i8 v6034 = *(i8*)(intptr_t)v6033;
	i8 v6035 = v6034+(+49);
	*(i1*)(intptr_t)v6035 = v6032;

	i8 v6036 = (i8)(intptr_t)(ws+4113);
	i1 v6037 = *(i1*)(intptr_t)v6036;
	*(i1*)(intptr_t)(ws+4152) = v6037;
	i8 v6038 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6038)();

	i1 v6039 = *(i1*)(intptr_t)(ws+4153);
	i8 v6040 = (i8)(intptr_t)(ws+4132);
	*(i1*)(intptr_t)v6040 = v6039;

	i8 v6041 = (i8)(intptr_t)(ws+4132);
	i1 v6042 = *(i1*)(intptr_t)v6041;
	i8 v6043 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6043 = v6042;

	i8 v6044 = (i8)(intptr_t)(ws+4120);
	i8 v6045 = *(i8*)(intptr_t)v6044;
	i8 v6046 = v6045+(+64);
	i1 v6047 = *(i1*)(intptr_t)v6046;
	i8 v6048 = (i8)(intptr_t)(ws+4129);
	i1 v6049 = *(i1*)(intptr_t)v6048;
	i1 v6050 = v6047|v6049;
	i8 v6051 = (i8)(intptr_t)(ws+4120);
	i8 v6052 = *(i8*)(intptr_t)v6051;
	i8 v6053 = v6052+(+64);
	*(i1*)(intptr_t)v6053 = v6050;

	i8 v6054 = (i8)(intptr_t)(ws+4120);
	i8 v6055 = *(i8*)(intptr_t)v6054;
	*(i8*)(intptr_t)(ws+4152) = v6055;
	i8 v6056 = (i8)(intptr_t)(ws+4072);
	i8 v6057 = *(i8*)(intptr_t)v6056;
	*(i8*)(intptr_t)(ws+4160) = v6057;
	i8 v6058 = (i8)(intptr_t)(ws+4129);
	i1 v6059 = *(i1*)(intptr_t)v6058;
	*(i1*)(intptr_t)(ws+4168) = v6059;
	i8 v6060 = (i8)(intptr_t)(f374_BlockRegisters);

	((void(*)(void))(intptr_t)v6060)();

	i8 v6061 = (i8)(intptr_t)(ws+4072);
	i8 v6062 = *(i8*)(intptr_t)v6061;
	i8 v6063 = v6062+(+66);
	i1 v6064 = *(i1*)(intptr_t)v6063;
	i8 v6065 = (i8)(intptr_t)(ws+4129);
	i1 v6066 = *(i1*)(intptr_t)v6065;
	i1 v6067 = v6064|v6066;
	i8 v6068 = (i8)(intptr_t)(ws+4072);
	i8 v6069 = *(i8*)(intptr_t)v6068;
	i8 v6070 = v6069+(+66);
	*(i1*)(intptr_t)v6070 = v6067;

	goto c02_0493;

c02_0497:;

	i8 v6071 = (i8)(intptr_t)(ws+4088);
	i8 v6072 = *(i8*)(intptr_t)v6071;
	i8 v6073 = v6072+(+56);
	i1 v6074 = *(i1*)(intptr_t)v6073;
	i1 v6075 = v6074&(-1);
	*(i1*)(intptr_t)(ws+4152) = v6075;
	i8 v6076 = (i8)(intptr_t)(f150_FindCompatibleRegisters);

	((void(*)(void))(intptr_t)v6076)();

	i1 v6077 = *(i1*)(intptr_t)(ws+4153);
	i8 v6078 = (i8)(intptr_t)(ws+4133);
	*(i1*)(intptr_t)v6078 = v6077;

	i8 v6079 = (i8)(intptr_t)(ws+4133);
	i1 v6080 = *(i1*)(intptr_t)v6079;
	i8 v6081 = (i8)(intptr_t)(ws+4134);
	*(i1*)(intptr_t)v6081 = v6080;

	i8 v6082 = (i8)(intptr_t)(ws+4072);
	i8 v6083 = *(i8*)(intptr_t)v6082;
	i8 v6084 = v6083+(+48);
	i1 v6085 = *(i1*)(intptr_t)v6084;
	i8 v6086 = (i8)(intptr_t)(ws+4134);
	i1 v6087 = *(i1*)(intptr_t)v6086;
	i1 v6088 = v6085&v6087;
	i8 v6089 = (i8)(intptr_t)(ws+4129);
	i1 v6090 = *(i1*)(intptr_t)v6089;
	i8 v6091 = (i8)(intptr_t)(ws+4072);
	i8 v6092 = *(i8*)(intptr_t)v6091;
	i8 v6093 = v6092+(+66);
	i1 v6094 = *(i1*)(intptr_t)v6093;
	i1 v6095 = v6090|v6094;
	i1 v6096 = ~v6095;
	i1 v6097 = v6088&v6096;
	i8 v6098 = (i8)(intptr_t)(ws+4130);
	*(i1*)(intptr_t)v6098 = v6097;

	i8 v6099 = (i8)(intptr_t)(ws+4088);
	i8 v6100 = *(i8*)(intptr_t)v6099;
	i8 v6101 = v6100+(+56);
	i1 v6102 = *(i1*)(intptr_t)v6101;
	i8 v6103 = (i8)(intptr_t)(ws+4120);
	i8 v6104 = *(i8*)(intptr_t)v6103;
	i8 v6105 = v6104+(+64);
	i1 v6106 = *(i1*)(intptr_t)v6105;
	i1 v6107 = ~v6106;
	i1 v6108 = v6102&v6107;
	i8 v6109 = (i8)(intptr_t)(ws+4135);
	*(i1*)(intptr_t)v6109 = v6108;

	i8 v6110 = (i8)(intptr_t)(ws+4130);
	i1 v6111 = *(i1*)(intptr_t)v6110;
	i1 v6112 = (i1)+0;
	if (v6111==v6112) goto c02_049e; else goto c02_049f;

c02_049f:;

	i8 v6113 = (i8)(intptr_t)(ws+4135);
	i1 v6114 = *(i1*)(intptr_t)v6113;
	i1 v6115 = (i1)+0;
	if (v6114==v6115) goto c02_049e; else goto c02_049d;

c02_049d:;

	i8 v6116 = (i8)(intptr_t)(ws+4130);
	i1 v6117 = *(i1*)(intptr_t)v6116;
	*(i1*)(intptr_t)(ws+4216) = v6117;
	i8 v6118 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6118)();

	i1 v6119 = *(i1*)(intptr_t)(ws+4217);
	i8 v6120 = (i8)(intptr_t)(ws+4136);
	*(i1*)(intptr_t)v6120 = v6119;

	i8 v6121 = (i8)(intptr_t)(ws+4136);
	i1 v6122 = *(i1*)(intptr_t)v6121;
	i8 v6123 = (i8)(intptr_t)(ws+4072);
	i8 v6124 = *(i8*)(intptr_t)v6123;
	i8 v6125 = v6124+(+49);
	*(i1*)(intptr_t)v6125 = v6122;

	i8 v6126 = (i8)(intptr_t)(ws+4135);
	i1 v6127 = *(i1*)(intptr_t)v6126;
	*(i1*)(intptr_t)(ws+4216) = v6127;
	i8 v6128 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6128)();

	i1 v6129 = *(i1*)(intptr_t)(ws+4217);
	i8 v6130 = (i8)(intptr_t)(ws+4137);
	*(i1*)(intptr_t)v6130 = v6129;

	i8 v6131 = (i8)(intptr_t)(ws+4137);
	i1 v6132 = *(i1*)(intptr_t)v6131;
	i8 v6133 = (i8)(intptr_t)(ws+4088);
	i8 v6134 = *(i8*)(intptr_t)v6133;
	i8 v6135 = v6134+(+57);
	*(i1*)(intptr_t)v6135 = v6132;

	i8 v6136 = (i8)(intptr_t)(ws+4088);
	i8 v6137 = *(i8*)(intptr_t)v6136;
	i8 v6138 = v6137+(+57);
	i1 v6139 = *(i1*)(intptr_t)v6138;
	*(i1*)(intptr_t)(ws+4152) = v6139;
	i8 v6140 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6140)();

	i1 v6141 = *(i1*)(intptr_t)(ws+4153);
	i8 v6142 = (i8)(intptr_t)(ws+4138);
	*(i1*)(intptr_t)v6142 = v6141;

	i8 v6143 = (i8)(intptr_t)(ws+4120);
	i8 v6144 = *(i8*)(intptr_t)v6143;
	i8 v6145 = v6144+(+64);
	i1 v6146 = *(i1*)(intptr_t)v6145;
	i8 v6147 = (i8)(intptr_t)(ws+4138);
	i1 v6148 = *(i1*)(intptr_t)v6147;
	i1 v6149 = v6146|v6148;
	i8 v6150 = (i8)(intptr_t)(ws+4120);
	i8 v6151 = *(i8*)(intptr_t)v6150;
	i8 v6152 = v6151+(+64);
	*(i1*)(intptr_t)v6152 = v6149;

	i8 v6153 = (i8)(intptr_t)(ws+4072);
	i8 v6154 = *(i8*)(intptr_t)v6153;
	i8 v6155 = v6154+(+49);
	i1 v6156 = *(i1*)(intptr_t)v6155;
	*(i1*)(intptr_t)(ws+4152) = v6156;
	i8 v6157 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6157)();

	i1 v6158 = *(i1*)(intptr_t)(ws+4153);
	i8 v6159 = (i8)(intptr_t)(ws+4139);
	*(i1*)(intptr_t)v6159 = v6158;

	i8 v6160 = (i8)(intptr_t)(ws+4139);
	i1 v6161 = *(i1*)(intptr_t)v6160;
	i8 v6162 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6162 = v6161;

	i8 v6163 = (i8)(intptr_t)(ws+4120);
	i8 v6164 = *(i8*)(intptr_t)v6163;
	*(i8*)(intptr_t)(ws+4152) = v6164;
	i8 v6165 = (i8)(intptr_t)(ws+4072);
	i8 v6166 = *(i8*)(intptr_t)v6165;
	*(i8*)(intptr_t)(ws+4160) = v6166;
	i8 v6167 = (i8)(intptr_t)(ws+4129);
	i1 v6168 = *(i1*)(intptr_t)v6167;
	*(i1*)(intptr_t)(ws+4168) = v6168;
	i8 v6169 = (i8)(intptr_t)(f374_BlockRegisters);

	((void(*)(void))(intptr_t)v6169)();

	i8 v6170 = (i8)(intptr_t)(ws+4072);
	i8 v6171 = *(i8*)(intptr_t)v6170;
	i8 v6172 = v6171+(+66);
	i1 v6173 = *(i1*)(intptr_t)v6172;
	i8 v6174 = (i8)(intptr_t)(ws+4129);
	i1 v6175 = *(i1*)(intptr_t)v6174;
	i1 v6176 = v6173|v6175;
	i8 v6177 = (i8)(intptr_t)(ws+4072);
	i8 v6178 = *(i8*)(intptr_t)v6177;
	i8 v6179 = v6178+(+66);
	*(i1*)(intptr_t)v6179 = v6176;

	i8 v6180 = (i8)(intptr_t)(ws+4120);
	i8 v6181 = *(i8*)(intptr_t)v6180;
	*(i8*)(intptr_t)(ws+4152) = v6181;
	i8 v6182 = (i8)(intptr_t)(ws+4072);
	i8 v6183 = *(i8*)(intptr_t)v6182;
	i8 v6184 = v6183+(+49);
	i1 v6185 = *(i1*)(intptr_t)v6184;
	*(i1*)(intptr_t)(ws+4160) = v6185;
	i8 v6186 = (i8)(intptr_t)(ws+4088);
	i8 v6187 = *(i8*)(intptr_t)v6186;
	i8 v6188 = v6187+(+57);
	i1 v6189 = *(i1*)(intptr_t)v6188;
	*(i1*)(intptr_t)(ws+4161) = v6189;
	i8 v6190 = (i8)(intptr_t)(f378_CreateReload);

	((void(*)(void))(intptr_t)v6190)();

	goto c02_0498;

c02_049e:;

	i8 v6191 = (i8)(intptr_t)(ws+4088);
	i8 v6192 = *(i8*)(intptr_t)v6191;
	i8 v6193 = v6192+(+56);
	i1 v6194 = *(i1*)(intptr_t)v6193;
	i8 v6195 = (i8)(intptr_t)(ws+4129);
	i1 v6196 = *(i1*)(intptr_t)v6195;
	i8 v6197 = (i8)(intptr_t)(ws+4120);
	i8 v6198 = *(i8*)(intptr_t)v6197;
	i8 v6199 = v6198+(+64);
	i1 v6200 = *(i1*)(intptr_t)v6199;
	i1 v6201 = v6196|v6200;
	i1 v6202 = ~v6201;
	i1 v6203 = v6194&v6202;
	i8 v6204 = (i8)(intptr_t)(ws+4130);
	*(i1*)(intptr_t)v6204 = v6203;

	i8 v6205 = (i8)(intptr_t)(ws+4072);
	i8 v6206 = *(i8*)(intptr_t)v6205;
	i8 v6207 = v6206+(+48);
	i1 v6208 = *(i1*)(intptr_t)v6207;
	i8 v6209 = (i8)(intptr_t)(ws+4134);
	i1 v6210 = *(i1*)(intptr_t)v6209;
	i1 v6211 = v6208&v6210;
	i8 v6212 = (i8)(intptr_t)(ws+4072);
	i8 v6213 = *(i8*)(intptr_t)v6212;
	i8 v6214 = v6213+(+66);
	i1 v6215 = *(i1*)(intptr_t)v6214;
	i1 v6216 = ~v6215;
	i1 v6217 = v6211&v6216;
	i8 v6218 = (i8)(intptr_t)(ws+4135);
	*(i1*)(intptr_t)v6218 = v6217;

	i8 v6219 = (i8)(intptr_t)(ws+4130);
	i1 v6220 = *(i1*)(intptr_t)v6219;
	i1 v6221 = (i1)+0;
	if (v6220==v6221) goto c02_04a6; else goto c02_04a7;

c02_04a7:;

	i8 v6222 = (i8)(intptr_t)(ws+4135);
	i1 v6223 = *(i1*)(intptr_t)v6222;
	i1 v6224 = (i1)+0;
	if (v6223==v6224) goto c02_04a6; else goto c02_04a5;

c02_04a5:;

	i8 v6225 = (i8)(intptr_t)(ws+4135);
	i1 v6226 = *(i1*)(intptr_t)v6225;
	*(i1*)(intptr_t)(ws+4216) = v6226;
	i8 v6227 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6227)();

	i1 v6228 = *(i1*)(intptr_t)(ws+4217);
	i8 v6229 = (i8)(intptr_t)(ws+4140);
	*(i1*)(intptr_t)v6229 = v6228;

	i8 v6230 = (i8)(intptr_t)(ws+4140);
	i1 v6231 = *(i1*)(intptr_t)v6230;
	i8 v6232 = (i8)(intptr_t)(ws+4072);
	i8 v6233 = *(i8*)(intptr_t)v6232;
	i8 v6234 = v6233+(+49);
	*(i1*)(intptr_t)v6234 = v6231;

	i8 v6235 = (i8)(intptr_t)(ws+4130);
	i1 v6236 = *(i1*)(intptr_t)v6235;
	*(i1*)(intptr_t)(ws+4216) = v6236;
	i8 v6237 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6237)();

	i1 v6238 = *(i1*)(intptr_t)(ws+4217);
	i8 v6239 = (i8)(intptr_t)(ws+4141);
	*(i1*)(intptr_t)v6239 = v6238;

	i8 v6240 = (i8)(intptr_t)(ws+4141);
	i1 v6241 = *(i1*)(intptr_t)v6240;
	i8 v6242 = (i8)(intptr_t)(ws+4088);
	i8 v6243 = *(i8*)(intptr_t)v6242;
	i8 v6244 = v6243+(+57);
	*(i1*)(intptr_t)v6244 = v6241;

	i8 v6245 = (i8)(intptr_t)(ws+4088);
	i8 v6246 = *(i8*)(intptr_t)v6245;
	i8 v6247 = v6246+(+57);
	i1 v6248 = *(i1*)(intptr_t)v6247;
	*(i1*)(intptr_t)(ws+4152) = v6248;
	i8 v6249 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6249)();

	i1 v6250 = *(i1*)(intptr_t)(ws+4153);
	i8 v6251 = (i8)(intptr_t)(ws+4142);
	*(i1*)(intptr_t)v6251 = v6250;

	i8 v6252 = (i8)(intptr_t)(ws+4142);
	i1 v6253 = *(i1*)(intptr_t)v6252;
	i8 v6254 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6254 = v6253;

	i8 v6255 = (i8)(intptr_t)(ws+4120);
	i8 v6256 = *(i8*)(intptr_t)v6255;
	i8 v6257 = v6256+(+64);
	i1 v6258 = *(i1*)(intptr_t)v6257;
	i8 v6259 = (i8)(intptr_t)(ws+4129);
	i1 v6260 = *(i1*)(intptr_t)v6259;
	i1 v6261 = v6258|v6260;
	i8 v6262 = (i8)(intptr_t)(ws+4120);
	i8 v6263 = *(i8*)(intptr_t)v6262;
	i8 v6264 = v6263+(+64);
	*(i1*)(intptr_t)v6264 = v6261;

	i8 v6265 = (i8)(intptr_t)(ws+4120);
	i8 v6266 = *(i8*)(intptr_t)v6265;
	*(i8*)(intptr_t)(ws+4152) = v6266;
	i8 v6267 = (i8)(intptr_t)(ws+4072);
	i8 v6268 = *(i8*)(intptr_t)v6267;
	*(i8*)(intptr_t)(ws+4160) = v6268;
	i8 v6269 = (i8)(intptr_t)(ws+4129);
	i1 v6270 = *(i1*)(intptr_t)v6269;
	*(i1*)(intptr_t)(ws+4168) = v6270;
	i8 v6271 = (i8)(intptr_t)(f374_BlockRegisters);

	((void(*)(void))(intptr_t)v6271)();

	i8 v6272 = (i8)(intptr_t)(ws+4072);
	i8 v6273 = *(i8*)(intptr_t)v6272;
	i8 v6274 = v6273+(+49);
	i1 v6275 = *(i1*)(intptr_t)v6274;
	*(i1*)(intptr_t)(ws+4152) = v6275;
	i8 v6276 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6276)();

	i1 v6277 = *(i1*)(intptr_t)(ws+4153);
	i8 v6278 = (i8)(intptr_t)(ws+4143);
	*(i1*)(intptr_t)v6278 = v6277;

	i8 v6279 = (i8)(intptr_t)(ws+4072);
	i8 v6280 = *(i8*)(intptr_t)v6279;
	i8 v6281 = v6280+(+66);
	i1 v6282 = *(i1*)(intptr_t)v6281;
	i8 v6283 = (i8)(intptr_t)(ws+4143);
	i1 v6284 = *(i1*)(intptr_t)v6283;
	i1 v6285 = v6282|v6284;
	i8 v6286 = (i8)(intptr_t)(ws+4072);
	i8 v6287 = *(i8*)(intptr_t)v6286;
	i8 v6288 = v6287+(+66);
	*(i1*)(intptr_t)v6288 = v6285;

	i8 v6289 = (i8)(intptr_t)(ws+4072);
	i8 v6290 = *(i8*)(intptr_t)v6289;
	*(i8*)(intptr_t)(ws+4152) = v6290;
	i8 v6291 = (i8)(intptr_t)(ws+4072);
	i8 v6292 = *(i8*)(intptr_t)v6291;
	i8 v6293 = v6292+(+49);
	i1 v6294 = *(i1*)(intptr_t)v6293;
	*(i1*)(intptr_t)(ws+4160) = v6294;
	i8 v6295 = (i8)(intptr_t)(ws+4088);
	i8 v6296 = *(i8*)(intptr_t)v6295;
	i8 v6297 = v6296+(+57);
	i1 v6298 = *(i1*)(intptr_t)v6297;
	*(i1*)(intptr_t)(ws+4161) = v6298;
	i8 v6299 = (i8)(intptr_t)(f377_CreateSpill);

	((void(*)(void))(intptr_t)v6299)();

	goto c02_04a0;

c02_04a6:;


	i8 v6378 = (i8)(intptr_t)(ws+4072);
	i8 v6379 = *(i8*)(intptr_t)v6378;
	i8 v6380 = v6379+(+48);
	i1 v6381 = *(i1*)(intptr_t)v6380;
	i8 v6382 = (i8)(intptr_t)(ws+4134);
	i1 v6383 = *(i1*)(intptr_t)v6382;
	i1 v6384 = v6381&v6383;
	i8 v6385 = (i8)(intptr_t)(ws+4072);
	i8 v6386 = *(i8*)(intptr_t)v6385;
	i8 v6387 = v6386+(+66);
	i1 v6388 = *(i1*)(intptr_t)v6387;
	i1 v6389 = ~v6388;
	i1 v6390 = v6384&v6389;
	i8 v6391 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6391 = v6390;

	i8 v6392 = (i8)(intptr_t)(ws+4113);
	i1 v6393 = *(i1*)(intptr_t)v6392;
	i1 v6394 = (i1)+0;
	if (v6393==v6394) goto c02_04ab; else goto c02_04ac;

c02_04ab:;

	i8 v6395 = (i8)(intptr_t)c02_s01d2;
	*(i8*)(intptr_t)(ws+4152) = v6395;
	i8 v6396 = (i8)(intptr_t)(f395_deadlock);

	((void(*)(void))(intptr_t)v6396)();

c02_04ac:;

c02_04a8:;

	i8 v6397 = (i8)(intptr_t)(ws+4113);
	i1 v6398 = *(i1*)(intptr_t)v6397;
	*(i1*)(intptr_t)(ws+4216) = v6398;
	i8 v6399 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6399)();

	i1 v6400 = *(i1*)(intptr_t)(ws+4217);
	i8 v6401 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v6401 = v6400;

	i8 v6402 = (i8)(intptr_t)(ws+4144);
	i1 v6403 = *(i1*)(intptr_t)v6402;
	i8 v6404 = (i8)(intptr_t)(ws+4072);
	i8 v6405 = *(i8*)(intptr_t)v6404;
	i8 v6406 = v6405+(+49);
	*(i1*)(intptr_t)v6406 = v6403;

	i8 v6407 = (i8)(intptr_t)(ws+4072);
	i8 v6408 = *(i8*)(intptr_t)v6407;
	i8 v6409 = v6408+(+49);
	i1 v6410 = *(i1*)(intptr_t)v6409;
	*(i1*)(intptr_t)(ws+4152) = v6410;
	i8 v6411 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6411)();

	i1 v6412 = *(i1*)(intptr_t)(ws+4153);
	i8 v6413 = (i8)(intptr_t)(ws+4145);
	*(i1*)(intptr_t)v6413 = v6412;

	i8 v6414 = (i8)(intptr_t)(ws+4072);
	i8 v6415 = *(i8*)(intptr_t)v6414;
	i8 v6416 = v6415+(+66);
	i1 v6417 = *(i1*)(intptr_t)v6416;
	i8 v6418 = (i8)(intptr_t)(ws+4145);
	i1 v6419 = *(i1*)(intptr_t)v6418;
	i1 v6420 = v6417|v6419;
	i8 v6421 = (i8)(intptr_t)(ws+4072);
	i8 v6422 = *(i8*)(intptr_t)v6421;
	i8 v6423 = v6422+(+66);
	*(i1*)(intptr_t)v6423 = v6420;

	i8 v6424 = (i8)(intptr_t)(ws+4072);
	i8 v6425 = *(i8*)(intptr_t)v6424;
	*(i8*)(intptr_t)(ws+4152) = v6425;
	i8 v6426 = (i8)(intptr_t)(ws+4072);
	i8 v6427 = *(i8*)(intptr_t)v6426;
	i8 v6428 = v6427+(+49);
	i1 v6429 = *(i1*)(intptr_t)v6428;
	*(i1*)(intptr_t)(ws+4160) = v6429;
	i1 v6430 = (i1)+0;
	*(i1*)(intptr_t)(ws+4161) = v6430;
	i8 v6431 = (i8)(intptr_t)(f377_CreateSpill);

	((void(*)(void))(intptr_t)v6431)();

	i8 v6432 = (i8)(intptr_t)(ws+4088);
	i8 v6433 = *(i8*)(intptr_t)v6432;
	i8 v6434 = v6433+(+56);
	i1 v6435 = *(i1*)(intptr_t)v6434;
	i8 v6436 = (i8)(intptr_t)(ws+4120);
	i8 v6437 = *(i8*)(intptr_t)v6436;
	i8 v6438 = v6437+(+64);
	i1 v6439 = *(i1*)(intptr_t)v6438;
	i1 v6440 = ~v6439;
	i1 v6441 = v6435&v6440;
	i8 v6442 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6442 = v6441;

	i8 v6443 = (i8)(intptr_t)(ws+4113);
	i1 v6444 = *(i1*)(intptr_t)v6443;
	i1 v6445 = (i1)+0;
	if (v6444==v6445) goto c02_04b0; else goto c02_04b1;

c02_04b0:;

	i8 v6446 = (i8)(intptr_t)c02_s01d3;
	*(i8*)(intptr_t)(ws+4152) = v6446;
	i8 v6447 = (i8)(intptr_t)(f395_deadlock);

	((void(*)(void))(intptr_t)v6447)();

c02_04b1:;

c02_04ad:;

	i8 v6448 = (i8)(intptr_t)(ws+4113);
	i1 v6449 = *(i1*)(intptr_t)v6448;
	*(i1*)(intptr_t)(ws+4216) = v6449;
	i8 v6450 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6450)();

	i1 v6451 = *(i1*)(intptr_t)(ws+4217);
	i8 v6452 = (i8)(intptr_t)(ws+4146);
	*(i1*)(intptr_t)v6452 = v6451;

	i8 v6453 = (i8)(intptr_t)(ws+4146);
	i1 v6454 = *(i1*)(intptr_t)v6453;
	i8 v6455 = (i8)(intptr_t)(ws+4088);
	i8 v6456 = *(i8*)(intptr_t)v6455;
	i8 v6457 = v6456+(+57);
	*(i1*)(intptr_t)v6457 = v6454;

	i8 v6458 = (i8)(intptr_t)(ws+4088);
	i8 v6459 = *(i8*)(intptr_t)v6458;
	i8 v6460 = v6459+(+57);
	i1 v6461 = *(i1*)(intptr_t)v6460;
	*(i1*)(intptr_t)(ws+4152) = v6461;
	i8 v6462 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6462)();

	i1 v6463 = *(i1*)(intptr_t)(ws+4153);
	i8 v6464 = (i8)(intptr_t)(ws+4147);
	*(i1*)(intptr_t)v6464 = v6463;

	i8 v6465 = (i8)(intptr_t)(ws+4120);
	i8 v6466 = *(i8*)(intptr_t)v6465;
	i8 v6467 = v6466+(+64);
	i1 v6468 = *(i1*)(intptr_t)v6467;
	i8 v6469 = (i8)(intptr_t)(ws+4147);
	i1 v6470 = *(i1*)(intptr_t)v6469;
	i1 v6471 = v6468|v6470;
	i8 v6472 = (i8)(intptr_t)(ws+4120);
	i8 v6473 = *(i8*)(intptr_t)v6472;
	i8 v6474 = v6473+(+64);
	*(i1*)(intptr_t)v6474 = v6471;

	i8 v6475 = (i8)(intptr_t)(ws+4120);
	i8 v6476 = *(i8*)(intptr_t)v6475;
	*(i8*)(intptr_t)(ws+4152) = v6476;
	i1 v6477 = (i1)+0;
	*(i1*)(intptr_t)(ws+4160) = v6477;
	i8 v6478 = (i8)(intptr_t)(ws+4088);
	i8 v6479 = *(i8*)(intptr_t)v6478;
	i8 v6480 = v6479+(+57);
	i1 v6481 = *(i1*)(intptr_t)v6480;
	*(i1*)(intptr_t)(ws+4161) = v6481;
	i8 v6482 = (i8)(intptr_t)(f378_CreateReload);

	((void(*)(void))(intptr_t)v6482)();

c02_04a0:;

c02_0498:;

c02_0493:;

c02_0489:;

}
	void f394_AllocateRegister(void);

// UpdateProducedRegisters workspace at ws+4112 length ws+1
void f396_UpdateProducedRegisters(void) {

	i1 v6484 = (i1)+0;
	i8 v6485 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6485 = v6484;

c02_04b2:;

	i8 v6486 = (i8)(intptr_t)(ws+4032);
	i1 v6487 = *(i1*)(intptr_t)v6486;
	i1 v6488 = (i1)+4;
	if (v6487==v6488) goto c02_04b7; else goto c02_04b6;

c02_04b6:;

	i8 v6489 = (i8)(intptr_t)(ws+4072);
	i8 v6490 = *(i8*)(intptr_t)v6489;
	i8 v6491 = v6490+(+16);
	i8 v6492 = (i8)(intptr_t)(ws+4032);
	i1 v6493 = *(i1*)(intptr_t)v6492;
	i8 v6494 = v6493;
	i1 v6495 = (i1)+3;
	i8 v6496 = ((i8)v6494)<<v6495;
	i8 v6497 = v6491+v6496;
	i8 v6498 = *(i8*)(intptr_t)v6497;
	i8 v6499 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v6499 = v6498;

	i8 v6500 = (i8)(intptr_t)(ws+4088);
	i8 v6501 = *(i8*)(intptr_t)v6500;
	i8 v6502 = (i8)+0;
	if (v6501==v6502) goto c02_04be; else goto c02_04bf;

c02_04bf:;

	i8 v6503 = (i8)(intptr_t)(ws+4088);
	i8 v6504 = *(i8*)(intptr_t)v6503;
	i8 v6505 = v6504+(+56);
	i1 v6506 = *(i1*)(intptr_t)v6505;
	i1 v6507 = (i1)-1;
	if (v6506==v6507) goto c02_04bd; else goto c02_04be;

c02_04bd:;

	i8 v6508 = (i8)(intptr_t)(ws+4072);
	i8 v6509 = *(i8*)(intptr_t)v6508;
	i8 v6510 = v6509+(+49);
	i1 v6511 = *(i1*)(intptr_t)v6510;
	i8 v6512 = (i8)(intptr_t)(ws+4088);
	i8 v6513 = *(i8*)(intptr_t)v6512;
	i8 v6514 = v6513+(+56);
	*(i1*)(intptr_t)v6514 = v6511;

	i1 v6515 = (i1)+0;
	i8 v6516 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v6516 = v6515;

c02_04c0:;

	i8 v6517 = (i8)(intptr_t)(ws+4112);
	i1 v6518 = *(i1*)(intptr_t)v6517;
	i1 v6519 = (i1)+4;
	if (v6518==v6519) goto c02_04c5; else goto c02_04c4;

c02_04c4:;

	i8 v6520 = (i8)(intptr_t)(ws+4032);
	i1 v6521 = *(i1*)(intptr_t)v6520;
	i8 v6522 = (i8)(intptr_t)(ws+4112);
	i1 v6523 = *(i1*)(intptr_t)v6522;
	if (v6521==v6523) goto c02_04ca; else goto c02_04c9;

c02_04c9:;

	i8 v6524 = (i8)(intptr_t)(ws+4072);
	i8 v6525 = *(i8*)(intptr_t)v6524;
	i8 v6526 = v6525+(+16);
	i8 v6527 = (i8)(intptr_t)(ws+4112);
	i1 v6528 = *(i1*)(intptr_t)v6527;
	i8 v6529 = v6528;
	i1 v6530 = (i1)+3;
	i8 v6531 = ((i8)v6529)<<v6530;
	i8 v6532 = v6526+v6531;
	i8 v6533 = *(i8*)(intptr_t)v6532;
	i8 v6534 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v6534 = v6533;

	i8 v6535 = (i8)(intptr_t)(ws+4088);
	i8 v6536 = *(i8*)(intptr_t)v6535;
	i8 v6537 = (i8)+0;
	if (v6536==v6537) goto c02_04cf; else goto c02_04ce;

c02_04ce:;

	i8 v6538 = (i8)(intptr_t)(ws+4088);
	i8 v6539 = *(i8*)(intptr_t)v6538;
	i8 v6540 = v6539+(+56);
	i1 v6541 = *(i1*)(intptr_t)v6540;
	i8 v6542 = (i8)(intptr_t)(ws+4072);
	i8 v6543 = *(i8*)(intptr_t)v6542;
	i8 v6544 = v6543+(+49);
	i1 v6545 = *(i1*)(intptr_t)v6544;
	i1 v6546 = ~v6545;
	i1 v6547 = v6541&v6546;
	i8 v6548 = (i8)(intptr_t)(ws+4088);
	i8 v6549 = *(i8*)(intptr_t)v6548;
	i8 v6550 = v6549+(+56);
	*(i1*)(intptr_t)v6550 = v6547;

c02_04cf:;

c02_04cb:;

c02_04ca:;

c02_04c6:;

	i8 v6551 = (i8)(intptr_t)(ws+4112);
	i1 v6552 = *(i1*)(intptr_t)v6551;
	i1 v6553 = v6552+(+1);
	i8 v6554 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v6554 = v6553;

	goto c02_04c0;

c02_04c5:;

c02_04be:;

c02_04b8:;

	i8 v6555 = (i8)(intptr_t)(ws+4032);
	i1 v6556 = *(i1*)(intptr_t)v6555;
	i1 v6557 = v6556+(+1);
	i8 v6558 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6558 = v6557;

	goto c02_04b2;

c02_04b7:;

}
	void f396_UpdateProducedRegisters(void);
	void f379_ShuffleRegisters(void);
	void f190_EmitOneInstruction(void);
	void f379_ShuffleRegisters(void);
	void f158_ArchEndInstruction(void);
	void f79_FreeNode(void);
	void f148_FreeInstruction(void);

// EmitAndFreeInstructions workspace at ws+4112 length ws+8
void f397_EmitAndFreeInstructions(void) {

c02_04d0:;

	i8 v6560 = (i8)(intptr_t)(ws+4048);
	i8 v6561 = *(i8*)(intptr_t)v6560;
	i8 v6562 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v6562 = v6561;

	i8 v6563 = (i8)(intptr_t)(ws+4112);
	i8 v6564 = *(i8*)(intptr_t)v6563;
	i8 v6565 = (i8)+0;
	if (v6564==v6565) goto c02_04d5; else goto c02_04d6;

c02_04d5:;

	goto c02_04d1;

c02_04d6:;

c02_04d2:;

	i8 v6566 = (i8)(intptr_t)(ws+4048);
	i8 v6567 = *(i8*)(intptr_t)v6566;
	i8 v6568 = v6567+(+8);
	i8 v6569 = *(i8*)(intptr_t)v6568;
	i8 v6570 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v6570 = v6569;

	i8 v6571 = (i8)(intptr_t)(ws+4112);
	i8 v6572 = *(i8*)(intptr_t)v6571;
	i8 v6573 = v6572+(+75);
	*(i8*)(intptr_t)(ws+4120) = v6573;
	i8 v6574 = (i8)(intptr_t)(f379_ShuffleRegisters);

	((void(*)(void))(intptr_t)v6574)();

	i8 v6575 = (i8)(intptr_t)(ws+4112);
	i8 v6576 = *(i8*)(intptr_t)v6575;
	i8 v6577 = v6576+(+16);
	i8 v6578 = *(i8*)(intptr_t)v6577;
	i8 v6579 = v6578+(+256);
	i1 v6580 = *(i1*)(intptr_t)v6579;
	i1 v6581 = (i1)+18;
	if (v6580==v6581) goto c02_04da; else goto c02_04db;

c02_04da:;

	i1 v6582 = (i1)+1;
	i8 v6583 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v6583 = v6582;

c02_04db:;

c02_04d7:;

	i8 v6584 = (i8)(intptr_t)(ws+4112);
	i8 v6585 = *(i8*)(intptr_t)v6584;
	i8 v6586 = v6585+(+86);
	i1 v6587 = *(i1*)(intptr_t)v6586;
	*(i1*)(intptr_t)(ws+4120) = v6587;
	i8 v6588 = (i8)(intptr_t)(ws+4112);
	i8 v6589 = *(i8*)(intptr_t)v6588;
	*(i8*)(intptr_t)(ws+4128) = v6589;
	i8 v6590 = (i8)(intptr_t)(f190_EmitOneInstruction);

	((void(*)(void))(intptr_t)v6590)();

	i8 v6591 = (i8)(intptr_t)(ws+4112);
	i8 v6592 = *(i8*)(intptr_t)v6591;
	i8 v6593 = v6592+(+67);
	*(i8*)(intptr_t)(ws+4120) = v6593;
	i8 v6594 = (i8)(intptr_t)(f379_ShuffleRegisters);

	((void(*)(void))(intptr_t)v6594)();

	i8 v6595 = (i8)(intptr_t)(f158_ArchEndInstruction);

	((void(*)(void))(intptr_t)v6595)();

	i8 v6596 = (i8)(intptr_t)(ws+4112);
	i8 v6597 = *(i8*)(intptr_t)v6596;
	i8 v6598 = v6597+(+16);
	i8 v6599 = *(i8*)(intptr_t)v6598;
	i8 v6600 = v6599+(+256);
	i1 v6601 = *(i1*)(intptr_t)v6600;
	i1 v6602 = (i1)+23;
	if (v6601==v6602) goto c02_04df; else goto c02_04e0;

c02_04df:;

	i1 v6603 = (i1)+0;
	i8 v6604 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v6604 = v6603;

c02_04e0:;

c02_04dc:;

	i8 v6605 = (i8)(intptr_t)(ws+4112);
	i8 v6606 = *(i8*)(intptr_t)v6605;
	i8 v6607 = v6606+(+16);
	i8 v6608 = *(i8*)(intptr_t)v6607;
	i8 v6609 = v6608+(+256);
	i1 v6610 = *(i1*)(intptr_t)v6609;
	i1 v6611 = (i1)+24;
	if (v6610==v6611) goto c02_04e4; else goto c02_04e5;

c02_04e4:;

	i8 v6612 = (i8)(intptr_t)(ws+4112);
	i8 v6613 = *(i8*)(intptr_t)v6612;
	i8 v6614 = v6613+(+16);
	i8 v6615 = *(i8*)(intptr_t)v6614;
	*(i8*)(intptr_t)(ws+4144) = v6615;
	i8 v6616 = (i8)(intptr_t)(f79_FreeNode);

	((void(*)(void))(intptr_t)v6616)();

c02_04e5:;

c02_04e1:;

	i8 v6617 = (i8)(intptr_t)(ws+4112);
	i8 v6618 = *(i8*)(intptr_t)v6617;
	*(i8*)(intptr_t)(ws+4120) = v6618;
	i8 v6619 = (i8)(intptr_t)(f148_FreeInstruction);

	((void(*)(void))(intptr_t)v6619)();

	goto c02_04d0;

c02_04d1:;

}
	void f397_EmitAndFreeInstructions(void);
	void f159_ArchEndGroup(void);
	void f64_Discard(void);

// Generate workspace at ws+4024 length ws+88
void f387_Generate(void) {

	i8 v5307 = (i8)+0;
	i8 v5308 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v5308 = v5307;

	i8 v5309 = (i8)+0;
	i8 v5310 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v5310 = v5309;

	i8 v5311 = (i8)(intptr_t)(ws+184);
	i8 v5312 = *(i8*)(intptr_t)v5311;
	i8 v5313 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v5313 = v5312;

	i8 v5314 = (i8)(intptr_t)(ws+4024);
	i8 v5315 = *(i8*)(intptr_t)v5314;
	*(i8*)(intptr_t)(ws+4232) = v5315;
	i8 v5316 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v5316)();

c02_03c7:;

	i8 v5317 = (i8)(intptr_t)(ws+184);
	i8 v5318 = *(i8*)(intptr_t)v5317;
	i8 v5319 = (i8)(intptr_t)(ws+4056);
	i8 v5320 = *(i8*)(intptr_t)v5319;
	if (v5318==v5320) goto c02_03cc; else goto c02_03cb;

c02_03cb:;

	i8 v5321 = (i8)(intptr_t)(f147_AllocNewInstruction);

	((void(*)(void))(intptr_t)v5321)();

	i8 v5322 = *(i8*)(intptr_t)(ws+4112);
	i8 v5323 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v5323 = v5322;

	i8 v5324 = (i8)(intptr_t)(ws+4064);
	i8 v5325 = *(i8*)(intptr_t)v5324;
	i8 v5326 = (i8)(intptr_t)(ws+4072);
	*(i8*)(intptr_t)v5326 = v5325;

	i8 v5327 = (i8)(intptr_t)(ws+4040);
	i8 v5328 = *(i8*)(intptr_t)v5327;
	i8 v5329 = (i8)+0;
	if (v5328==v5329) goto c02_03d0; else goto c02_03d1;

c02_03d0:;

	i8 v5330 = (i8)(intptr_t)(ws+4072);
	i8 v5331 = *(i8*)(intptr_t)v5330;
	i8 v5332 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v5332 = v5331;

	i8 v5333 = (i8)(intptr_t)(ws+4072);
	i8 v5334 = *(i8*)(intptr_t)v5333;
	i8 v5335 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v5335 = v5334;

	goto c02_03cd;

c02_03d1:;

	i8 v5336 = (i8)(intptr_t)(ws+4072);
	i8 v5337 = *(i8*)(intptr_t)v5336;
	i8 v5338 = (i8)(intptr_t)(ws+4048);
	i8 v5339 = *(i8*)(intptr_t)v5338;
	*(i8*)(intptr_t)v5339 = v5337;

	i8 v5340 = (i8)(intptr_t)(ws+4048);
	i8 v5341 = *(i8*)(intptr_t)v5340;
	i8 v5342 = (i8)(intptr_t)(ws+4072);
	i8 v5343 = *(i8*)(intptr_t)v5342;
	i8 v5344 = v5343+(+8);
	*(i8*)(intptr_t)v5344 = v5341;

	i8 v5345 = (i8)(intptr_t)(ws+4072);
	i8 v5346 = *(i8*)(intptr_t)v5345;
	i8 v5347 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v5347 = v5346;

c02_03cd:;

	i8 v5348 = (i8)(intptr_t)(f62_PopNode);

	((void(*)(void))(intptr_t)v5348)();

	i8 v5349 = *(i8*)(intptr_t)(ws+4232);
	i8 v5350 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v5350 = v5349;

	i8 v5351 = (i8)(intptr_t)(ws+4080);
	i8 v5352 = *(i8*)(intptr_t)v5351;
	i8 v5353 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v5353 = v5352;


	i8 v5739 = (i8)(intptr_t)(f388_InstructionMatcher);

	((void(*)(void))(intptr_t)v5739)();

	i8 v5740 = (i8)(intptr_t)(ws+4072);
	i8 v5741 = *(i8*)(intptr_t)v5740;
	i8 v5742 = v5741+(+48);
	i1 v5743 = *(i1*)(intptr_t)v5742;
	i1 v5744 = (i1)+0;
	if (v5743==v5744) goto c02_0448; else goto c02_0447;

c02_0447:;



	i8 v6483 = (i8)(intptr_t)(f394_AllocateRegister);

	((void(*)(void))(intptr_t)v6483)();


	i8 v6559 = (i8)(intptr_t)(f396_UpdateProducedRegisters);

	((void(*)(void))(intptr_t)v6559)();

c02_0448:;

c02_0444:;

	goto c02_03c7;

c02_03cc:;


	i8 v6620 = (i8)(intptr_t)(f397_EmitAndFreeInstructions);

	((void(*)(void))(intptr_t)v6620)();

	i8 v6621 = (i8)(intptr_t)(f159_ArchEndGroup);

	((void(*)(void))(intptr_t)v6621)();

	i8 v6622 = (i8)(intptr_t)(ws+4024);
	i8 v6623 = *(i8*)(intptr_t)v6622;
	*(i8*)(intptr_t)(ws+4112) = v6623;
	i8 v6624 = (i8)(intptr_t)(f64_Discard);

	((void(*)(void))(intptr_t)v6624)();

}
const i1 c02_s01d4[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(void);

// PushNode workspace at ws+4232 length ws+8
void f61_PushNode(void) {

	i8 v6786 = (i8)(intptr_t)(ws+4232);
	i8 v6787 = *(i8*)(intptr_t)v6786;
	i8 v6788 = (i8)+0;
	if (v6787==v6788) goto c02_0500; else goto c02_04ff;

c02_04ff:;

	i8 v6789 = (i8)(intptr_t)(ws+184);
	i8 v6790 = *(i8*)(intptr_t)v6789;
	i8 v6791 = (i8)(intptr_t)(ws+184);
	if (v6790==v6791) goto c02_0504; else goto c02_0505;

c02_0504:;

	i8 v6792 = (i8)(intptr_t)c02_s01d4;
	*(i8*)(intptr_t)(ws+4280) = v6792;
	i8 v6793 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v6793)();

c02_0505:;

c02_0501:;

	i8 v6794 = (i8)(intptr_t)(ws+4232);
	i8 v6795 = *(i8*)(intptr_t)v6794;
	i8 v6796 = (i8)(intptr_t)(ws+184);
	i8 v6797 = *(i8*)(intptr_t)v6796;
	*(i8*)(intptr_t)v6797 = v6795;

	i8 v6798 = (i8)(intptr_t)(ws+184);
	i8 v6799 = *(i8*)(intptr_t)v6798;
	i8 v6800 = v6799+(+8);
	i8 v6801 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v6801 = v6800;

c02_0500:;

c02_04fc:;

}

// PopNode workspace at ws+4232 length ws+8
void f62_PopNode(void) {

	i8 v6802 = (i8)(intptr_t)(ws+184);
	i8 v6803 = *(i8*)(intptr_t)v6802;
	i8 v6804 = v6803+(-8);
	i8 v6805 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v6805 = v6804;

	i8 v6806 = (i8)(intptr_t)(ws+184);
	i8 v6807 = *(i8*)(intptr_t)v6806;
	i8 v6808 = *(i8*)(intptr_t)v6807;
	i8 v6809 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v6809 = v6808;

}
	void f62_PopNode(void);
	void f61_PushNode(void);
	void f61_PushNode(void);

// NextNode workspace at ws+4216 length ws+16
void f63_NextNode(void) {

	i8 v6810 = (i8)(intptr_t)(f62_PopNode);

	((void(*)(void))(intptr_t)v6810)();

	i8 v6811 = *(i8*)(intptr_t)(ws+4232);
	i8 v6812 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v6812 = v6811;

	i8 v6813 = (i8)(intptr_t)(ws+4224);
	i8 v6814 = *(i8*)(intptr_t)v6813;
	i8 v6815 = (i8)(intptr_t)(ws+4216);
	*(i8*)(intptr_t)v6815 = v6814;

	i8 v6816 = (i8)(intptr_t)(ws+4216);
	i8 v6817 = *(i8*)(intptr_t)v6816;
	i8 v6818 = (i8)+0;
	if (v6817==v6818) goto c02_050a; else goto c02_0509;

c02_0509:;

	i8 v6819 = (i8)(intptr_t)(ws+4216);
	i8 v6820 = *(i8*)(intptr_t)v6819;
	i8 v6821 = v6820+(+24);
	i8 v6822 = *(i8*)(intptr_t)v6821;
	*(i8*)(intptr_t)(ws+4232) = v6822;
	i8 v6823 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v6823)();

	i8 v6824 = (i8)(intptr_t)(ws+4216);
	i8 v6825 = *(i8*)(intptr_t)v6824;
	i8 v6826 = v6825+(+32);
	i8 v6827 = *(i8*)(intptr_t)v6826;
	*(i8*)(intptr_t)(ws+4232) = v6827;
	i8 v6828 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v6828)();

c02_050a:;

c02_0506:;

}
	void f61_PushNode(void);
	void f63_NextNode(void);
	void f34_Free(void);
	void f34_Free(void);
	void f34_Free(void);
	void f79_FreeNode(void);

// Discard workspace at ws+4112 length ws+32
void f64_Discard(void) {

	i8 v6829 = (i8)(intptr_t)(ws+184);
	i8 v6830 = *(i8*)(intptr_t)v6829;
	i8 v6831 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v6831 = v6830;

	i8 v6832 = (i8)(intptr_t)(ws+4112);
	i8 v6833 = *(i8*)(intptr_t)v6832;
	*(i8*)(intptr_t)(ws+4232) = v6833;
	i8 v6834 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v6834)();

c02_050b:;

	i8 v6835 = (i8)(intptr_t)(ws+184);
	i8 v6836 = *(i8*)(intptr_t)v6835;
	i8 v6837 = (i8)(intptr_t)(ws+4120);
	i8 v6838 = *(i8*)(intptr_t)v6837;
	if (v6836==v6838) goto c02_0510; else goto c02_050f;

c02_050f:;

	i8 v6839 = (i8)(intptr_t)(f63_NextNode);

	((void(*)(void))(intptr_t)v6839)();

	i8 v6840 = *(i8*)(intptr_t)(ws+4216);
	i8 v6841 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v6841 = v6840;

	i8 v6842 = (i8)(intptr_t)(ws+4128);
	i8 v6843 = *(i8*)(intptr_t)v6842;
	i8 v6844 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v6844 = v6843;

	i8 v6845 = (i8)(intptr_t)(ws+4136);
	i8 v6846 = *(i8*)(intptr_t)v6845;
	i8 v6847 = v6846+(+256);
	i1 v6848 = *(i1*)(intptr_t)v6847;

	if (v6848 != +19) goto c02_0512;

	i8 v6849 = (i8)(intptr_t)(ws+4136);
	i8 v6850 = *(i8*)(intptr_t)v6849;
	i8 v6851 = *(i8*)(intptr_t)v6850;
	*(i8*)(intptr_t)(ws+4280) = v6851;
	i8 v6852 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6852)();

	goto c02_0511;

c02_0512:;

	if (v6848 != +12) goto c02_0513;

	i8 v6853 = (i8)(intptr_t)(ws+4136);
	i8 v6854 = *(i8*)(intptr_t)v6853;
	i8 v6855 = *(i8*)(intptr_t)v6854;
	*(i8*)(intptr_t)(ws+4280) = v6855;
	i8 v6856 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6856)();

	goto c02_0511;

c02_0513:;

	if (v6848 != +41) goto c02_0514;

	i8 v6857 = (i8)(intptr_t)(ws+4136);
	i8 v6858 = *(i8*)(intptr_t)v6857;
	i8 v6859 = *(i8*)(intptr_t)v6858;
	*(i8*)(intptr_t)(ws+4280) = v6859;
	i8 v6860 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6860)();

c02_0514:;

c02_0511:;


	i8 v6861 = (i8)(intptr_t)(ws+4136);
	i8 v6862 = *(i8*)(intptr_t)v6861;
	*(i8*)(intptr_t)(ws+4144) = v6862;
	i8 v6863 = (i8)(intptr_t)(f79_FreeNode);

	((void(*)(void))(intptr_t)v6863)();

	goto c02_050b;

c02_0510:;

}
	void f115_I_b8(void);
	void f77_AllocateNewNode(void);

// I_node workspace at ws+4024 length ws+49
void f400_I_node(void) {

	i1 v6864 = (i1)+1;
	i8 v6865 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6865 = v6864;

	i8 v6866 = (i8)+0;
	i8 v6867 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v6867 = v6866;

c02_0515:;

	i8 v6868 = (i8)(intptr_t)(ws+4032);
	i1 v6869 = *(i1*)(intptr_t)v6868;
	i1 v6870 = (i1)+0;
	if (v6869==v6870) goto c02_051a; else goto c02_0519;

c02_0519:;

	i8 v6871 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v6871)();

	i1 v6872 = *(i1*)(intptr_t)(ws+4152);
	i8 v6873 = (i8)(intptr_t)(ws+4033);
	*(i1*)(intptr_t)v6873 = v6872;

	i8 v6874 = (i8)(intptr_t)(ws+4033);
	i1 v6875 = *(i1*)(intptr_t)v6874;
	i8 v6876 = (i8)(intptr_t)(ws+4034);
	*(i1*)(intptr_t)v6876 = v6875;

	i8 v6877 = (i8)(intptr_t)(ws+4034);
	i1 v6878 = *(i1*)(intptr_t)v6877;
	*(i1*)(intptr_t)(ws+4216) = v6878;
	i8 v6879 = (i8)(intptr_t)(f77_AllocateNewNode);

	((void(*)(void))(intptr_t)v6879)();

	i8 v6880 = *(i8*)(intptr_t)(ws+4224);
	i8 v6881 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v6881 = v6880;

	i8 v6882 = (i8)(intptr_t)(ws+4040);
	i8 v6883 = *(i8*)(intptr_t)v6882;
	i8 v6884 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v6884 = v6883;

	i8 v6885 = (i8)(intptr_t)(ws+4024);
	i8 v6886 = *(i8*)(intptr_t)v6885;
	i8 v6887 = (i8)(intptr_t)(ws+4048);
	i8 v6888 = *(i8*)(intptr_t)v6887;
	i8 v6889 = v6888+(+64);
	*(i8*)(intptr_t)v6889 = v6886;

	i8 v6890 = (i8)(intptr_t)(ws+4048);
	i8 v6891 = *(i8*)(intptr_t)v6890;
	i8 v6892 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v6892 = v6891;

	i8 v6893 = (i8)(intptr_t)((i1*)f3___main_s0170);
	i8 v6894 = (i8)(intptr_t)(ws+4034);
	i1 v6895 = *(i1*)(intptr_t)v6894;
	i1 v6896 = v6895+(-1);
	i8 v6897 = v6896;
	i8 v6898 = v6893+v6897;
	i1 v6899 = *(i1*)(intptr_t)v6898;
	i8 v6900 = (i8)(intptr_t)(ws+4056);
	*(i1*)(intptr_t)v6900 = v6899;

	i8 v6901 = (i8)(intptr_t)(ws+4048);
	i8 v6902 = *(i8*)(intptr_t)v6901;
	*(i8*)(intptr_t)(ws+4080) = v6902;
	i8 v6903 = (i8)(intptr_t)((i1*)f3___main_s016f);
	i8 v6904 = (i8)(intptr_t)(ws+4056);
	i1 v6905 = *(i1*)(intptr_t)v6904;
	i8 v6906 = v6905;
	i1 v6907 = (i1)+3;
	i8 v6908 = ((i8)v6906)<<v6907;
	i8 v6909 = v6903+v6908;
	i8 v6910 = *(i8*)(intptr_t)v6909;

	((void(*)(void))(intptr_t)v6910)();

	i8 v6911 = (i8)(intptr_t)(ws+4032);
	i1 v6912 = *(i1*)(intptr_t)v6911;
	i8 v6913 = (i8)(intptr_t)((i1*)f3___main_s0171);
	i8 v6914 = (i8)(intptr_t)(ws+4034);
	i1 v6915 = *(i1*)(intptr_t)v6914;
	i1 v6916 = v6915+(-1);
	i8 v6917 = v6916;
	i8 v6918 = v6913+v6917;
	i1 v6919 = *(i1*)(intptr_t)v6918;
	i1 v6920 = v6912+v6919;
	i1 v6921 = v6920+(-1);
	i8 v6922 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6922 = v6921;

	goto c02_0515;

c02_051a:;

	i8 v6923 = (i8)+0;
	i8 v6924 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6924 = v6923;

c02_051b:;

	i8 v6925 = (i8)(intptr_t)(ws+4024);
	i8 v6926 = *(i8*)(intptr_t)v6925;
	i8 v6927 = (i8)+0;
	if (v6926==v6927) goto c02_0520; else goto c02_051f;

c02_051f:;

	i8 v6928 = (i8)(intptr_t)(ws+4024);
	i8 v6929 = *(i8*)(intptr_t)v6928;
	i8 v6930 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v6930 = v6929;

	i8 v6931 = (i8)(intptr_t)(ws+4048);
	i8 v6932 = *(i8*)(intptr_t)v6931;
	i8 v6933 = v6932+(+64);
	i8 v6934 = *(i8*)(intptr_t)v6933;
	i8 v6935 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v6935 = v6934;

	i8 v6936 = (i8)(intptr_t)((i1*)f3___main_s0171);
	i8 v6937 = (i8)(intptr_t)(ws+4048);
	i8 v6938 = *(i8*)(intptr_t)v6937;
	i8 v6939 = v6938+(+256);
	i1 v6940 = *(i1*)(intptr_t)v6939;
	i1 v6941 = v6940+(-1);
	i8 v6942 = v6941;
	i8 v6943 = v6936+v6942;
	i1 v6944 = *(i1*)(intptr_t)v6943;
	i8 v6945 = (i8)(intptr_t)(ws+4072);
	*(i1*)(intptr_t)v6945 = v6944;

	i8 v6946 = (i8)(intptr_t)(ws+4072);
	i1 v6947 = *(i1*)(intptr_t)v6946;
	i1 v6948 = (i1)+1;
	if (v6947<v6948) goto c02_0525; else goto c02_0524;

c02_0524:;

	i8 v6949 = (i8)(intptr_t)(ws+4064);
	i8 v6950 = *(i8*)(intptr_t)v6949;
	i8 v6951 = (i8)(intptr_t)(ws+4048);
	i8 v6952 = *(i8*)(intptr_t)v6951;
	i8 v6953 = v6952+(+24);
	*(i8*)(intptr_t)v6953 = v6950;

	i8 v6954 = (i8)(intptr_t)(ws+4048);
	i8 v6955 = *(i8*)(intptr_t)v6954;
	i8 v6956 = v6955+(+24);
	i8 v6957 = *(i8*)(intptr_t)v6956;
	i8 v6958 = v6957+(+64);
	i8 v6959 = *(i8*)(intptr_t)v6958;
	i8 v6960 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6960 = v6959;

c02_0525:;

c02_0521:;

	i8 v6961 = (i8)(intptr_t)(ws+4072);
	i1 v6962 = *(i1*)(intptr_t)v6961;
	i1 v6963 = (i1)+2;
	if (v6962==v6963) goto c02_0529; else goto c02_052a;

c02_0529:;

	i8 v6964 = (i8)(intptr_t)(ws+4048);
	i8 v6965 = *(i8*)(intptr_t)v6964;
	i8 v6966 = v6965+(+24);
	i8 v6967 = *(i8*)(intptr_t)v6966;
	i8 v6968 = (i8)(intptr_t)(ws+4048);
	i8 v6969 = *(i8*)(intptr_t)v6968;
	i8 v6970 = v6969+(+32);
	*(i8*)(intptr_t)v6970 = v6967;

	i8 v6971 = (i8)(intptr_t)(ws+4064);
	i8 v6972 = *(i8*)(intptr_t)v6971;
	i8 v6973 = (i8)(intptr_t)(ws+4048);
	i8 v6974 = *(i8*)(intptr_t)v6973;
	i8 v6975 = v6974+(+24);
	*(i8*)(intptr_t)v6975 = v6972;

	i8 v6976 = (i8)(intptr_t)(ws+4048);
	i8 v6977 = *(i8*)(intptr_t)v6976;
	i8 v6978 = v6977+(+24);
	i8 v6979 = *(i8*)(intptr_t)v6978;
	i8 v6980 = v6979+(+64);
	i8 v6981 = *(i8*)(intptr_t)v6980;
	i8 v6982 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6982 = v6981;

c02_052a:;

c02_0526:;

	i8 v6983 = (i8)(intptr_t)(ws+4064);
	i8 v6984 = *(i8*)(intptr_t)v6983;
	i8 v6985 = (i8)(intptr_t)(ws+4048);
	i8 v6986 = *(i8*)(intptr_t)v6985;
	i8 v6987 = v6986+(+64);
	*(i8*)(intptr_t)v6987 = v6984;

	i8 v6988 = (i8)(intptr_t)(ws+4048);
	i8 v6989 = *(i8*)(intptr_t)v6988;
	i8 v6990 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6990 = v6989;

	goto c02_051b;

c02_0520:;

	i8 v6991 = (i8)(intptr_t)(ws+4064);
	i8 v6992 = *(i8*)(intptr_t)v6991;
	i8 v6993 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v6993 = v6992;

}
	void f33_Alloc(void);
	void f66_StartError(void);
const i1 c02_s01d5[] = { 0x64,0x75,0x70,0x6c,0x69,0x63,0x61,0x74,0x65,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f20_print_hex_i16(void);
const i1 c02_s01d6[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f48_FCBPos(void);
	void f21_print_hex_i32(void);
	void f67_EndError(void);
	void f33_Alloc(void);
	void f146_AllocSubrId(void);

// AddSubr workspace at ws+4024 length ws+66
void f401_AddSubr(void) {

	i8 v6994 = (i8)(intptr_t)(ws+4024);
	i2 v6995 = *(i2*)(intptr_t)v6994;
	i8 v6996 = (i8)(intptr_t)(ws+4040);
	*(i2*)(intptr_t)v6996 = v6995;

	i8 v6997 = (i8)(intptr_t)(ws+3848);
	i8 v6998 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v6998 = v6997;

c02_052b:;

	i8 v6999 = (i8)(intptr_t)(ws+4040);
	i2 v7000 = *(i2*)(intptr_t)v6999;
	i2 v7001 = (i2)+16;
	if (v7000<v7001) goto c02_0530; else goto c02_052f;

c02_052f:;

	i8 v7002 = (i8)(intptr_t)(ws+4048);
	i8 v7003 = *(i8*)(intptr_t)v7002;
	i8 v7004 = *(i8*)(intptr_t)v7003;
	i8 v7005 = (i8)+0;
	if (v7004==v7005) goto c02_0534; else goto c02_0535;

c02_0534:;

	i8 v7006 = (i8)+136;
	*(i8*)(intptr_t)(ws+4152) = v7006;
	i8 v7007 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v7007)();

	i8 v7008 = *(i8*)(intptr_t)(ws+4160);
	i8 v7009 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v7009 = v7008;

	i8 v7010 = (i8)(intptr_t)(ws+4056);
	i8 v7011 = *(i8*)(intptr_t)v7010;
	i8 v7012 = (i8)(intptr_t)(ws+4048);
	i8 v7013 = *(i8*)(intptr_t)v7012;
	*(i8*)(intptr_t)v7013 = v7011;

c02_0535:;

c02_0531:;

	i8 v7014 = (i8)(intptr_t)(ws+4048);
	i8 v7015 = *(i8*)(intptr_t)v7014;
	i8 v7016 = *(i8*)(intptr_t)v7015;
	i8 v7017 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7017 = v7016;

	i8 v7018 = (i8)(intptr_t)(ws+4040);
	i2 v7019 = *(i2*)(intptr_t)v7018;
	i2 v7020 = v7019+(-16);
	i8 v7021 = (i8)(intptr_t)(ws+4040);
	*(i2*)(intptr_t)v7021 = v7020;

	goto c02_052b;

c02_0530:;

	i8 v7022 = (i8)(intptr_t)(ws+4048);
	i8 v7023 = *(i8*)(intptr_t)v7022;
	i8 v7024 = v7023+(+8);
	i8 v7025 = (i8)(intptr_t)(ws+4040);
	i2 v7026 = *(i2*)(intptr_t)v7025;
	i1 v7027 = v7026;
	i8 v7028 = v7027;
	i1 v7029 = (i1)+3;
	i8 v7030 = ((i8)v7028)<<v7029;
	i8 v7031 = v7024+v7030;
	i8 v7032 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7032 = v7031;

	i8 v7033 = (i8)(intptr_t)(ws+4064);
	i8 v7034 = *(i8*)(intptr_t)v7033;
	i8 v7035 = *(i8*)(intptr_t)v7034;
	i8 v7036 = (i8)+0;
	if (v7035==v7036) goto c02_053a; else goto c02_0539;

c02_0539:;

	i8 v7037 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7037)();

	i8 v7038 = (i8)(intptr_t)c02_s01d5;
	*(i8*)(intptr_t)(ws+4288) = v7038;
	i8 v7039 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7039)();

	i8 v7040 = (i8)(intptr_t)(ws+4024);
	i2 v7041 = *(i2*)(intptr_t)v7040;
	*(i2*)(intptr_t)(ws+4288) = v7041;
	i8 v7042 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(void))(intptr_t)v7042)();

	i8 v7043 = (i8)(intptr_t)c02_s01d6;
	*(i8*)(intptr_t)(ws+4288) = v7043;
	i8 v7044 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7044)();

	i8 v7045 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4288) = v7045;
	i8 v7046 = (i8)(intptr_t)(f48_FCBPos);

	((void(*)(void))(intptr_t)v7046)();

	i4 v7047 = *(i4*)(intptr_t)(ws+4296);
	i8 v7048 = (i8)(intptr_t)(ws+4072);
	*(i4*)(intptr_t)v7048 = v7047;

	i8 v7049 = (i8)(intptr_t)(ws+4072);
	i4 v7050 = *(i4*)(intptr_t)v7049;
	*(i4*)(intptr_t)(ws+4288) = v7050;
	i8 v7051 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v7051)();

	i8 v7052 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7052)();

c02_053a:;

c02_0536:;

	i8 v7053 = (i8)+51;
	*(i8*)(intptr_t)(ws+4152) = v7053;
	i8 v7054 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v7054)();

	i8 v7055 = *(i8*)(intptr_t)(ws+4160);
	i8 v7056 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v7056 = v7055;

	i8 v7057 = (i8)(intptr_t)(ws+4080);
	i8 v7058 = *(i8*)(intptr_t)v7057;
	i8 v7059 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7059 = v7058;

	i8 v7060 = (i8)(intptr_t)(f146_AllocSubrId);

	((void(*)(void))(intptr_t)v7060)();

	i2 v7061 = *(i2*)(intptr_t)(ws+4096);
	i8 v7062 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v7062 = v7061;

	i8 v7063 = (i8)(intptr_t)(ws+4088);
	i2 v7064 = *(i2*)(intptr_t)v7063;
	i8 v7065 = (i8)(intptr_t)(ws+4032);
	i8 v7066 = *(i8*)(intptr_t)v7065;
	i8 v7067 = v7066+(+8);
	*(i2*)(intptr_t)v7067 = v7064;

	i8 v7068 = (i8)(intptr_t)(ws+4032);
	i8 v7069 = *(i8*)(intptr_t)v7068;
	i8 v7070 = (i8)(intptr_t)(ws+4064);
	i8 v7071 = *(i8*)(intptr_t)v7070;
	*(i8*)(intptr_t)v7071 = v7069;

}
	void f66_StartError(void);
const i1 c02_s01d7[] = { 0x75,0x6e,0x6b,0x6e,0x6f,0x77,0x6e,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0 };
	void f12_print(void);
	void f20_print_hex_i16(void);
const i1 c02_s01d8[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f48_FCBPos(void);
	void f21_print_hex_i32(void);
	void f67_EndError(void);

// FindSubr workspace at ws+4256 length ws+32
void f65_FindSubr(void) {

	i8 v7072 = (i8)(intptr_t)(ws+3848);
	i8 v7073 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v7073 = v7072;

	i8 v7074 = (i8)(intptr_t)(ws+4256);
	i2 v7075 = *(i2*)(intptr_t)v7074;
	i8 v7076 = (i8)(intptr_t)(ws+4280);
	*(i2*)(intptr_t)v7076 = v7075;

c02_053b:;

	i8 v7077 = (i8)(intptr_t)(ws+4280);
	i2 v7078 = *(i2*)(intptr_t)v7077;
	i2 v7079 = (i2)+16;
	if (v7078<v7079) goto c02_0540; else goto c02_053f;

c02_053f:;

	i8 v7080 = (i8)(intptr_t)(ws+4272);
	i8 v7081 = *(i8*)(intptr_t)v7080;
	i8 v7082 = *(i8*)(intptr_t)v7081;
	i8 v7083 = (i8)+0;
	if (v7082==v7083) goto c02_0544; else goto c02_0545;

c02_0544:;

	i8 v7084 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7084)();

	i8 v7085 = (i8)(intptr_t)c02_s01d7;
	*(i8*)(intptr_t)(ws+4288) = v7085;
	i8 v7086 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7086)();

	i8 v7087 = (i8)(intptr_t)(ws+4256);
	i2 v7088 = *(i2*)(intptr_t)v7087;
	*(i2*)(intptr_t)(ws+4288) = v7088;
	i8 v7089 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(void))(intptr_t)v7089)();

	i8 v7090 = (i8)(intptr_t)c02_s01d8;
	*(i8*)(intptr_t)(ws+4288) = v7090;
	i8 v7091 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7091)();

	i8 v7092 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4288) = v7092;
	i8 v7093 = (i8)(intptr_t)(f48_FCBPos);

	((void(*)(void))(intptr_t)v7093)();

	i4 v7094 = *(i4*)(intptr_t)(ws+4296);
	i8 v7095 = (i8)(intptr_t)(ws+4284);
	*(i4*)(intptr_t)v7095 = v7094;

	i8 v7096 = (i8)(intptr_t)(ws+4284);
	i4 v7097 = *(i4*)(intptr_t)v7096;
	*(i4*)(intptr_t)(ws+4288) = v7097;
	i8 v7098 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v7098)();

	i8 v7099 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7099)();

c02_0545:;

c02_0541:;

	i8 v7100 = (i8)(intptr_t)(ws+4272);
	i8 v7101 = *(i8*)(intptr_t)v7100;
	i8 v7102 = *(i8*)(intptr_t)v7101;
	i8 v7103 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v7103 = v7102;

	i8 v7104 = (i8)(intptr_t)(ws+4280);
	i2 v7105 = *(i2*)(intptr_t)v7104;
	i2 v7106 = v7105+(-16);
	i8 v7107 = (i8)(intptr_t)(ws+4280);
	*(i2*)(intptr_t)v7107 = v7106;

	goto c02_053b;

c02_0540:;

	i8 v7108 = (i8)(intptr_t)(ws+4272);
	i8 v7109 = *(i8*)(intptr_t)v7108;
	i8 v7110 = v7109+(+8);
	i8 v7111 = (i8)(intptr_t)(ws+4280);
	i2 v7112 = *(i2*)(intptr_t)v7111;
	i1 v7113 = v7112;
	i8 v7114 = v7113;
	i1 v7115 = (i1)+3;
	i8 v7116 = ((i8)v7114)<<v7115;
	i8 v7117 = v7110+v7116;
	i8 v7118 = *(i8*)(intptr_t)v7117;
	i8 v7119 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v7119 = v7118;

}
	void f116_I_b16(void);
	void f401_AddSubr(void);
	void f119_I_countedstring(void);
	void f110_EmitterDeclareSubroutine(void);

// ReadN workspace at ws+3992 length ws+32
void f402_ReadN(void) {

	i8 v7120 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7120)();

	i2 v7121 = *(i2*)(intptr_t)(ws+4136);
	i8 v7122 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7122 = v7121;

	i8 v7123 = (i8)(intptr_t)(ws+3992);
	i2 v7124 = *(i2*)(intptr_t)v7123;
	i8 v7125 = (i8)(intptr_t)(ws+3994);
	*(i2*)(intptr_t)v7125 = v7124;

	i8 v7126 = (i8)(intptr_t)(ws+3994);
	i2 v7127 = *(i2*)(intptr_t)v7126;
	*(i2*)(intptr_t)(ws+4024) = v7127;
	i8 v7128 = (i8)(intptr_t)(f401_AddSubr);

	((void(*)(void))(intptr_t)v7128)();

	i8 v7129 = *(i8*)(intptr_t)(ws+4032);
	i8 v7130 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7130 = v7129;

	i8 v7131 = (i8)(intptr_t)(ws+4000);
	i8 v7132 = *(i8*)(intptr_t)v7131;
	i8 v7133 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7133 = v7132;

	i8 v7134 = (i8)(intptr_t)(f119_I_countedstring);

	((void(*)(void))(intptr_t)v7134)();

	i8 v7135 = *(i8*)(intptr_t)(ws+4112);
	i8 v7136 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7136 = v7135;

	i8 v7137 = (i8)(intptr_t)(ws+4016);
	i8 v7138 = *(i8*)(intptr_t)v7137;
	i8 v7139 = (i8)(intptr_t)(ws+4008);
	i8 v7140 = *(i8*)(intptr_t)v7139;
	*(i8*)(intptr_t)v7140 = v7138;

	i8 v7141 = (i8)(intptr_t)(ws+4008);
	i8 v7142 = *(i8*)(intptr_t)v7141;
	*(i8*)(intptr_t)(ws+4024) = v7142;
	i8 v7143 = (i8)(intptr_t)(f110_EmitterDeclareSubroutine);

	((void(*)(void))(intptr_t)v7143)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f119_I_countedstring(void);
	void f111_EmitterDeclareExternalSubroutine(void);
	void f34_Free(void);

// ReadX workspace at ws+3992 length ws+40
void f403_ReadX(void) {

	i8 v7144 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7144)();

	i2 v7145 = *(i2*)(intptr_t)(ws+4136);
	i8 v7146 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7146 = v7145;

	i8 v7147 = (i8)(intptr_t)(ws+3992);
	i2 v7148 = *(i2*)(intptr_t)v7147;
	i8 v7149 = (i8)(intptr_t)(ws+3994);
	*(i2*)(intptr_t)v7149 = v7148;

	i8 v7150 = (i8)(intptr_t)(ws+3994);
	i2 v7151 = *(i2*)(intptr_t)v7150;
	*(i2*)(intptr_t)(ws+4256) = v7151;
	i8 v7152 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7152)();

	i8 v7153 = *(i8*)(intptr_t)(ws+4264);
	i8 v7154 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7154 = v7153;

	i8 v7155 = (i8)(intptr_t)(ws+4000);
	i8 v7156 = *(i8*)(intptr_t)v7155;
	i8 v7157 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7157 = v7156;

	i8 v7158 = (i8)(intptr_t)(f119_I_countedstring);

	((void(*)(void))(intptr_t)v7158)();

	i8 v7159 = *(i8*)(intptr_t)(ws+4112);
	i8 v7160 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7160 = v7159;

	i8 v7161 = (i8)(intptr_t)(ws+4016);
	i8 v7162 = *(i8*)(intptr_t)v7161;
	i8 v7163 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7163 = v7162;

	i8 v7164 = (i8)(intptr_t)(ws+4008);
	i8 v7165 = *(i8*)(intptr_t)v7164;
	i8 v7166 = v7165+(+8);
	i2 v7167 = *(i2*)(intptr_t)v7166;
	*(i2*)(intptr_t)(ws+4032) = v7167;
	i8 v7168 = (i8)(intptr_t)(ws+4024);
	i8 v7169 = *(i8*)(intptr_t)v7168;
	*(i8*)(intptr_t)(ws+4040) = v7169;
	i8 v7170 = (i8)(intptr_t)(f111_EmitterDeclareExternalSubroutine);

	((void(*)(void))(intptr_t)v7170)();

	i8 v7171 = (i8)(intptr_t)(ws+4024);
	i8 v7172 = *(i8*)(intptr_t)v7171;
	*(i8*)(intptr_t)(ws+4280) = v7172;
	i8 v7173 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7173)();

}
	void f400_I_node(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f387_Generate(void);

// ReadM workspace at ws+3992 length ws+32
void f404_ReadM(void) {

	i8 v7174 = (i8)(intptr_t)(f400_I_node);

	((void(*)(void))(intptr_t)v7174)();

	i8 v7175 = *(i8*)(intptr_t)(ws+4024);
	i8 v7176 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7176 = v7175;

	i8 v7177 = (i8)(intptr_t)(ws+3992);
	i8 v7178 = *(i8*)(intptr_t)v7177;
	i8 v7179 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7179 = v7178;

	i8 v7180 = (i8)(intptr_t)(ws+4000);
	i8 v7181 = *(i8*)(intptr_t)v7180;
	i8 v7182 = v7181+(+256);
	i1 v7183 = *(i1*)(intptr_t)v7182;
	i8 v7184 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v7184 = v7183;

	i8 v7185 = (i8)(intptr_t)(ws+4008);
	i1 v7186 = *(i1*)(intptr_t)v7185;
	i1 v7187 = (i1)+4;
	if (v7186==v7187) goto c02_0549; else goto c02_054a;

c02_0549:;

	i8 v7188 = (i8)(intptr_t)(ws+4000);
	i8 v7189 = *(i8*)(intptr_t)v7188;
	i8 v7190 = *(i8*)(intptr_t)v7189;
	i8 v7191 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7191 = v7190;

	i8 v7192 = (i8)(intptr_t)(ws+40);
	i8 v7193 = *(i8*)(intptr_t)v7192;
	i8 v7194 = (i8)(intptr_t)(ws+4016);
	i8 v7195 = *(i8*)(intptr_t)v7194;
	i8 v7196 = v7195+(+16);
	*(i8*)(intptr_t)v7196 = v7193;

	i8 v7197 = (i8)(intptr_t)(ws+4016);
	i8 v7198 = *(i8*)(intptr_t)v7197;
	i8 v7199 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v7199 = v7198;

	i8 v7200 = (i8)(intptr_t)(ws+40);
	i8 v7201 = *(i8*)(intptr_t)v7200;
	i8 v7202 = *(i8*)(intptr_t)v7201;
	*(i8*)(intptr_t)(ws+4288) = v7202;
	i8 v7203 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7203)();

	i8 v7204 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v7204)();

c02_054a:;

c02_0546:;

	i8 v7205 = (i8)(intptr_t)(ws+4000);
	i8 v7206 = *(i8*)(intptr_t)v7205;
	*(i8*)(intptr_t)(ws+4024) = v7206;
	i8 v7207 = (i8)(intptr_t)(f387_Generate);

	((void(*)(void))(intptr_t)v7207)();

	i8 v7208 = (i8)(intptr_t)(ws+4008);
	i1 v7209 = *(i1*)(intptr_t)v7208;
	i1 v7210 = (i1)+5;
	if (v7209==v7210) goto c02_054e; else goto c02_054f;

c02_054e:;

	i8 v7211 = (i8)(intptr_t)(ws+40);
	i8 v7212 = *(i8*)(intptr_t)v7211;
	i8 v7213 = v7212+(+16);
	i8 v7214 = *(i8*)(intptr_t)v7213;
	i8 v7215 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v7215 = v7214;

c02_054f:;

c02_054b:;

}
const i1 c02_s01d9[] = { 0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0x20,0x74,0x77,0x69,0x63,0x65,0 };
	void f68_SimpleError(void);
	void f33_Alloc(void);
	void f33_Alloc(void);
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);
	void f119_I_countedstring(void);
	void f115_I_b8(void);

// ReadParameters workspace at ws+4024 length ws+81
void f405_ReadParameters(void) {

	i8 v7216 = (i8)(intptr_t)(ws+4032);
	i8 v7217 = *(i8*)(intptr_t)v7216;
	i8 v7218 = *(i8*)(intptr_t)v7217;
	i8 v7219 = (i8)+0;
	if (v7218==v7219) goto c02_0554; else goto c02_0553;

c02_0553:;

	i8 v7220 = (i8)(intptr_t)c02_s01d9;
	*(i8*)(intptr_t)(ws+4280) = v7220;
	i8 v7221 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v7221)();

c02_0554:;

c02_0550:;

	i8 v7222 = (i8)(intptr_t)(ws+4024);
	i1 v7223 = *(i1*)(intptr_t)v7222;
	i8 v7224 = v7223;
	i1 v7225 = (i1)+3;
	i8 v7226 = ((i8)v7224)<<v7225;
	*(i8*)(intptr_t)(ws+4152) = v7226;
	i8 v7227 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v7227)();

	i8 v7228 = *(i8*)(intptr_t)(ws+4160);
	i8 v7229 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v7229 = v7228;

	i8 v7230 = (i8)(intptr_t)(ws+4040);
	i8 v7231 = *(i8*)(intptr_t)v7230;
	i8 v7232 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7232 = v7231;

	i8 v7233 = (i8)(intptr_t)(ws+4048);
	i8 v7234 = *(i8*)(intptr_t)v7233;
	i8 v7235 = (i8)(intptr_t)(ws+4032);
	i8 v7236 = *(i8*)(intptr_t)v7235;
	*(i8*)(intptr_t)v7236 = v7234;

c02_0555:;

	i8 v7237 = (i8)(intptr_t)(ws+4024);
	i1 v7238 = *(i1*)(intptr_t)v7237;
	i1 v7239 = (i1)+0;
	if (v7238==v7239) goto c02_055a; else goto c02_0559;

c02_0559:;

	i8 v7240 = (i8)+24;
	*(i8*)(intptr_t)(ws+4152) = v7240;
	i8 v7241 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v7241)();

	i8 v7242 = *(i8*)(intptr_t)(ws+4160);
	i8 v7243 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v7243 = v7242;

	i8 v7244 = (i8)(intptr_t)(ws+4056);
	i8 v7245 = *(i8*)(intptr_t)v7244;
	i8 v7246 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7246 = v7245;

	i8 v7247 = (i8)(intptr_t)(ws+4064);
	i8 v7248 = *(i8*)(intptr_t)v7247;
	i8 v7249 = (i8)(intptr_t)(ws+4048);
	i8 v7250 = *(i8*)(intptr_t)v7249;
	*(i8*)(intptr_t)v7250 = v7248;

	i8 v7251 = (i8)(intptr_t)(ws+4048);
	i8 v7252 = *(i8*)(intptr_t)v7251;
	i8 v7253 = v7252+(+8);
	i8 v7254 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7254 = v7253;

	i8 v7255 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7255)();

	i2 v7256 = *(i2*)(intptr_t)(ws+4136);
	i8 v7257 = (i8)(intptr_t)(ws+4072);
	*(i2*)(intptr_t)v7257 = v7256;

	i8 v7258 = (i8)(intptr_t)(ws+4072);
	i2 v7259 = *(i2*)(intptr_t)v7258;
	*(i2*)(intptr_t)(ws+4256) = v7259;
	i8 v7260 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7260)();

	i8 v7261 = *(i8*)(intptr_t)(ws+4264);
	i8 v7262 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v7262 = v7261;

	i8 v7263 = (i8)(intptr_t)(ws+4080);
	i8 v7264 = *(i8*)(intptr_t)v7263;
	i8 v7265 = (i8)(intptr_t)(ws+4064);
	i8 v7266 = *(i8*)(intptr_t)v7265;
	*(i8*)(intptr_t)v7266 = v7264;

	i8 v7267 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7267)();

	i1 v7268 = *(i1*)(intptr_t)(ws+4152);
	i8 v7269 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v7269 = v7268;

	i8 v7270 = (i8)(intptr_t)(ws+4088);
	i1 v7271 = *(i1*)(intptr_t)v7270;
	i8 v7272 = (i8)(intptr_t)(ws+4064);
	i8 v7273 = *(i8*)(intptr_t)v7272;
	i8 v7274 = v7273+(+10);
	*(i1*)(intptr_t)v7274 = v7271;

	i8 v7275 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v7275)();

	i2 v7276 = *(i2*)(intptr_t)(ws+4128);
	i8 v7277 = (i8)(intptr_t)(ws+4090);
	*(i2*)(intptr_t)v7277 = v7276;

	i8 v7278 = (i8)(intptr_t)(ws+4090);
	i2 v7279 = *(i2*)(intptr_t)v7278;
	i8 v7280 = (i8)(intptr_t)(ws+4064);
	i8 v7281 = *(i8*)(intptr_t)v7280;
	i8 v7282 = v7281+(+12);
	*(i2*)(intptr_t)v7282 = v7279;

	i8 v7283 = (i8)(intptr_t)(f119_I_countedstring);

	((void(*)(void))(intptr_t)v7283)();

	i8 v7284 = *(i8*)(intptr_t)(ws+4112);
	i8 v7285 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v7285 = v7284;

	i8 v7286 = (i8)(intptr_t)(ws+4096);
	i8 v7287 = *(i8*)(intptr_t)v7286;
	i8 v7288 = (i8)(intptr_t)(ws+4064);
	i8 v7289 = *(i8*)(intptr_t)v7288;
	i8 v7290 = v7289+(+16);
	*(i8*)(intptr_t)v7290 = v7287;

	i8 v7291 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7291)();

	i1 v7292 = *(i1*)(intptr_t)(ws+4152);
	i8 v7293 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v7293 = v7292;

	i8 v7294 = (i8)(intptr_t)(ws+4104);
	i1 v7295 = *(i1*)(intptr_t)v7294;
	i8 v7296 = (i8)(intptr_t)(ws+4064);
	i8 v7297 = *(i8*)(intptr_t)v7296;
	i8 v7298 = v7297+(+14);
	*(i1*)(intptr_t)v7298 = v7295;

	i8 v7299 = (i8)(intptr_t)(ws+4024);
	i1 v7300 = *(i1*)(intptr_t)v7299;
	i1 v7301 = v7300+(-1);
	i8 v7302 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7302 = v7301;

	goto c02_0555;

c02_055a:;

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f405_ReadParameters(void);

// ReadI workspace at ws+3992 length ws+25
void f406_ReadI(void) {

	i8 v7303 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7303)();

	i2 v7304 = *(i2*)(intptr_t)(ws+4136);
	i8 v7305 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7305 = v7304;

	i8 v7306 = (i8)(intptr_t)(ws+3992);
	i2 v7307 = *(i2*)(intptr_t)v7306;
	*(i2*)(intptr_t)(ws+4256) = v7307;
	i8 v7308 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7308)();

	i8 v7309 = *(i8*)(intptr_t)(ws+4264);
	i8 v7310 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7310 = v7309;

	i8 v7311 = (i8)(intptr_t)(ws+4000);
	i8 v7312 = *(i8*)(intptr_t)v7311;
	i8 v7313 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7313 = v7312;

	i8 v7314 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7314)();

	i1 v7315 = *(i1*)(intptr_t)(ws+4152);
	i8 v7316 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v7316 = v7315;

	i8 v7317 = (i8)(intptr_t)(ws+4016);
	i1 v7318 = *(i1*)(intptr_t)v7317;
	i8 v7319 = (i8)(intptr_t)(ws+4008);
	i8 v7320 = *(i8*)(intptr_t)v7319;
	i8 v7321 = v7320+(+48);
	*(i1*)(intptr_t)v7321 = v7318;

	i8 v7322 = (i8)(intptr_t)(ws+4008);
	i8 v7323 = *(i8*)(intptr_t)v7322;
	i8 v7324 = v7323+(+48);
	i1 v7325 = *(i1*)(intptr_t)v7324;
	*(i1*)(intptr_t)(ws+4024) = v7325;
	i8 v7326 = (i8)(intptr_t)(ws+4008);
	i8 v7327 = *(i8*)(intptr_t)v7326;
	i8 v7328 = v7327+(+32);
	*(i8*)(intptr_t)(ws+4032) = v7328;
	i8 v7329 = (i8)(intptr_t)(f405_ReadParameters);

	((void(*)(void))(intptr_t)v7329)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f405_ReadParameters(void);

// ReadO workspace at ws+3992 length ws+25
void f407_ReadO(void) {

	i8 v7330 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7330)();

	i2 v7331 = *(i2*)(intptr_t)(ws+4136);
	i8 v7332 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7332 = v7331;

	i8 v7333 = (i8)(intptr_t)(ws+3992);
	i2 v7334 = *(i2*)(intptr_t)v7333;
	*(i2*)(intptr_t)(ws+4256) = v7334;
	i8 v7335 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7335)();

	i8 v7336 = *(i8*)(intptr_t)(ws+4264);
	i8 v7337 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7337 = v7336;

	i8 v7338 = (i8)(intptr_t)(ws+4000);
	i8 v7339 = *(i8*)(intptr_t)v7338;
	i8 v7340 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7340 = v7339;

	i8 v7341 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7341)();

	i1 v7342 = *(i1*)(intptr_t)(ws+4152);
	i8 v7343 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v7343 = v7342;

	i8 v7344 = (i8)(intptr_t)(ws+4016);
	i1 v7345 = *(i1*)(intptr_t)v7344;
	i8 v7346 = (i8)(intptr_t)(ws+4008);
	i8 v7347 = *(i8*)(intptr_t)v7346;
	i8 v7348 = v7347+(+49);
	*(i1*)(intptr_t)v7348 = v7345;

	i8 v7349 = (i8)(intptr_t)(ws+4008);
	i8 v7350 = *(i8*)(intptr_t)v7349;
	i8 v7351 = v7350+(+49);
	i1 v7352 = *(i1*)(intptr_t)v7351;
	*(i1*)(intptr_t)(ws+4024) = v7352;
	i8 v7353 = (i8)(intptr_t)(ws+4008);
	i8 v7354 = *(i8*)(intptr_t)v7353;
	i8 v7355 = v7354+(+40);
	*(i8*)(intptr_t)(ws+4032) = v7355;
	i8 v7356 = (i8)(intptr_t)(f405_ReadParameters);

	((void(*)(void))(intptr_t)v7356)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);
	void f114_EmitterDeclareWorkspace(void);

// ReadW workspace at ws+3992 length ws+30
void f408_ReadW(void) {

	i8 v7357 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7357)();

	i2 v7358 = *(i2*)(intptr_t)(ws+4136);
	i8 v7359 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7359 = v7358;

	i8 v7360 = (i8)(intptr_t)(ws+3992);
	i2 v7361 = *(i2*)(intptr_t)v7360;
	*(i2*)(intptr_t)(ws+4256) = v7361;
	i8 v7362 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7362)();

	i8 v7363 = *(i8*)(intptr_t)(ws+4264);
	i8 v7364 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7364 = v7363;

	i8 v7365 = (i8)(intptr_t)(ws+4000);
	i8 v7366 = *(i8*)(intptr_t)v7365;
	i8 v7367 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7367 = v7366;

	i8 v7368 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7368)();

	i1 v7369 = *(i1*)(intptr_t)(ws+4152);
	i8 v7370 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v7370 = v7369;

	i8 v7371 = (i8)(intptr_t)(ws+4016);
	i1 v7372 = *(i1*)(intptr_t)v7371;
	i8 v7373 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v7373 = v7372;

	i8 v7374 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v7374)();

	i2 v7375 = *(i2*)(intptr_t)(ws+4128);
	i8 v7376 = (i8)(intptr_t)(ws+4018);
	*(i2*)(intptr_t)v7376 = v7375;

	i8 v7377 = (i8)(intptr_t)(ws+4018);
	i2 v7378 = *(i2*)(intptr_t)v7377;
	i8 v7379 = (i8)(intptr_t)(ws+4020);
	*(i2*)(intptr_t)v7379 = v7378;

	i8 v7380 = (i8)(intptr_t)(ws+4008);
	i8 v7381 = *(i8*)(intptr_t)v7380;
	i8 v7382 = v7381+(+8);
	i2 v7383 = *(i2*)(intptr_t)v7382;
	*(i2*)(intptr_t)(ws+4024) = v7383;
	i8 v7384 = (i8)(intptr_t)(ws+4017);
	i1 v7385 = *(i1*)(intptr_t)v7384;
	*(i1*)(intptr_t)(ws+4026) = v7385;
	i8 v7386 = (i8)(intptr_t)(ws+4020);
	i2 v7387 = *(i2*)(intptr_t)v7386;
	*(i2*)(intptr_t)(ws+4028) = v7387;
	i8 v7388 = (i8)(intptr_t)(f114_EmitterDeclareWorkspace);

	((void(*)(void))(intptr_t)v7388)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f112_EmitterReferenceSubroutineById(void);

// ReadR workspace at ws+3992 length ws+48
void f409_ReadR(void) {

	i8 v7389 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7389)();

	i2 v7390 = *(i2*)(intptr_t)(ws+4136);
	i8 v7391 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7391 = v7390;

	i8 v7392 = (i8)(intptr_t)(ws+3992);
	i2 v7393 = *(i2*)(intptr_t)v7392;
	*(i2*)(intptr_t)(ws+4256) = v7393;
	i8 v7394 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7394)();

	i8 v7395 = *(i8*)(intptr_t)(ws+4264);
	i8 v7396 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7396 = v7395;

	i8 v7397 = (i8)(intptr_t)(ws+4000);
	i8 v7398 = *(i8*)(intptr_t)v7397;
	i8 v7399 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7399 = v7398;

	i8 v7400 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7400)();

	i2 v7401 = *(i2*)(intptr_t)(ws+4136);
	i8 v7402 = (i8)(intptr_t)(ws+4016);
	*(i2*)(intptr_t)v7402 = v7401;

	i8 v7403 = (i8)(intptr_t)(ws+4016);
	i2 v7404 = *(i2*)(intptr_t)v7403;
	*(i2*)(intptr_t)(ws+4256) = v7404;
	i8 v7405 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7405)();

	i8 v7406 = *(i8*)(intptr_t)(ws+4264);
	i8 v7407 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7407 = v7406;

	i8 v7408 = (i8)(intptr_t)(ws+4024);
	i8 v7409 = *(i8*)(intptr_t)v7408;
	i8 v7410 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7410 = v7409;

	i8 v7411 = (i8)(intptr_t)(ws+4008);
	i8 v7412 = *(i8*)(intptr_t)v7411;
	i8 v7413 = v7412+(+8);
	i2 v7414 = *(i2*)(intptr_t)v7413;
	*(i2*)(intptr_t)(ws+4040) = v7414;
	i8 v7415 = (i8)(intptr_t)(ws+4032);
	i8 v7416 = *(i8*)(intptr_t)v7415;
	i8 v7417 = v7416+(+8);
	i2 v7418 = *(i2*)(intptr_t)v7417;
	*(i2*)(intptr_t)(ws+4042) = v7418;
	i8 v7419 = (i8)(intptr_t)(f112_EmitterReferenceSubroutineById);

	((void(*)(void))(intptr_t)v7419)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);

// ReadF workspace at ws+3992 length ws+25
void f410_ReadF(void) {

	i8 v7420 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7420)();

	i2 v7421 = *(i2*)(intptr_t)(ws+4136);
	i8 v7422 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7422 = v7421;

	i8 v7423 = (i8)(intptr_t)(ws+3992);
	i2 v7424 = *(i2*)(intptr_t)v7423;
	*(i2*)(intptr_t)(ws+4256) = v7424;
	i8 v7425 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7425)();

	i8 v7426 = *(i8*)(intptr_t)(ws+4264);
	i8 v7427 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7427 = v7426;

	i8 v7428 = (i8)(intptr_t)(ws+4000);
	i8 v7429 = *(i8*)(intptr_t)v7428;
	i8 v7430 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7430 = v7429;

	i8 v7431 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7431)();

	i1 v7432 = *(i1*)(intptr_t)(ws+4152);
	i8 v7433 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v7433 = v7432;

	i8 v7434 = (i8)(intptr_t)(ws+4016);
	i1 v7435 = *(i1*)(intptr_t)v7434;
	i8 v7436 = (i8)(intptr_t)(ws+4008);
	i8 v7437 = *(i8*)(intptr_t)v7436;
	i8 v7438 = v7437+(+50);
	*(i1*)(intptr_t)v7438 = v7435;

}
	void f23_MemZero(void);
	void f115_I_b8(void);
	void f402_ReadN(void);
	void f403_ReadX(void);
	void f404_ReadM(void);
	void f406_ReadI(void);
	void f407_ReadO(void);
	void f408_ReadW(void);
	void f409_ReadR(void);
	void f410_ReadF(void);
	void f66_StartError(void);
const i1 c02_s01da[] = { 0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f19_print_hex_i8(void);
const i1 c02_s01db[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f48_FCBPos(void);
	void f21_print_hex_i32(void);
	void f67_EndError(void);

// ProcessFile workspace at ws+3984 length ws+8
void f411_ProcessFile(void) {

	i8 v7439 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)(ws+4176) = v7439;
	i8 v7440 = (i8)+136;
	*(i8*)(intptr_t)(ws+4184) = v7440;
	i8 v7441 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v7441)();

c02_055b:;

	i8 v7442 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7442)();

	i1 v7443 = *(i1*)(intptr_t)(ws+4152);
	i8 v7444 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v7444 = v7443;

	i8 v7445 = (i8)(intptr_t)(ws+3984);
	i1 v7446 = *(i1*)(intptr_t)v7445;
	i8 v7447 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v7447 = v7446;

	i8 v7448 = (i8)(intptr_t)(ws+3985);
	i1 v7449 = *(i1*)(intptr_t)v7448;

	if (v7449 != +69) goto c02_055e;

	return;

c02_055e:;

	if (v7449 != +78) goto c02_055f;

	i8 v7450 = (i8)(intptr_t)(f402_ReadN);

	((void(*)(void))(intptr_t)v7450)();

	goto c02_055d;

c02_055f:;

	if (v7449 != +88) goto c02_0560;

	i8 v7451 = (i8)(intptr_t)(f403_ReadX);

	((void(*)(void))(intptr_t)v7451)();

	goto c02_055d;

c02_0560:;

	if (v7449 != +77) goto c02_0561;

	i8 v7452 = (i8)(intptr_t)(f404_ReadM);

	((void(*)(void))(intptr_t)v7452)();

	goto c02_055d;

c02_0561:;

	if (v7449 != +73) goto c02_0562;

	i8 v7453 = (i8)(intptr_t)(f406_ReadI);

	((void(*)(void))(intptr_t)v7453)();

	goto c02_055d;

c02_0562:;

	if (v7449 != +79) goto c02_0563;

	i8 v7454 = (i8)(intptr_t)(f407_ReadO);

	((void(*)(void))(intptr_t)v7454)();

	goto c02_055d;

c02_0563:;

	if (v7449 != +87) goto c02_0564;

	i8 v7455 = (i8)(intptr_t)(f408_ReadW);

	((void(*)(void))(intptr_t)v7455)();

	goto c02_055d;

c02_0564:;

	if (v7449 != +82) goto c02_0565;

	i8 v7456 = (i8)(intptr_t)(f409_ReadR);

	((void(*)(void))(intptr_t)v7456)();

	goto c02_055d;

c02_0565:;

	if (v7449 != +70) goto c02_0566;

	i8 v7457 = (i8)(intptr_t)(f410_ReadF);

	((void(*)(void))(intptr_t)v7457)();

	goto c02_055d;

c02_0566:;

	i8 v7458 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7458)();

	i8 v7459 = (i8)(intptr_t)c02_s01da;
	*(i8*)(intptr_t)(ws+4288) = v7459;
	i8 v7460 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7460)();

	i8 v7461 = (i8)(intptr_t)(ws+3985);
	i1 v7462 = *(i1*)(intptr_t)v7461;
	*(i1*)(intptr_t)(ws+4296) = v7462;
	i8 v7463 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v7463)();

	i8 v7464 = (i8)(intptr_t)c02_s01db;
	*(i8*)(intptr_t)(ws+4288) = v7464;
	i8 v7465 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7465)();

	i8 v7466 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4288) = v7466;
	i8 v7467 = (i8)(intptr_t)(f48_FCBPos);

	((void(*)(void))(intptr_t)v7467)();

	i4 v7468 = *(i4*)(intptr_t)(ws+4296);
	i8 v7469 = (i8)(intptr_t)(ws+3988);
	*(i4*)(intptr_t)v7469 = v7468;

	i8 v7470 = (i8)(intptr_t)(ws+3988);
	i4 v7471 = *(i4*)(intptr_t)v7470;
	*(i4*)(intptr_t)(ws+4288) = v7471;
	i8 v7472 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v7472)();

	i8 v7473 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7473)();

c02_055d:;


	goto c02_055b;

c02_055c:;

}
	void f38_GetFreeMemory(void);
	void f17_print_i16(void);
const i1 c02_s01dc[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(void);

// PrintFreeMemory workspace at ws+3984 length ws+8
void f412_PrintFreeMemory(void) {

	i8 v7474 = (i8)(intptr_t)(f38_GetFreeMemory);

	((void(*)(void))(intptr_t)v7474)();

	i8 v7475 = *(i8*)(intptr_t)(ws+3992);
	i8 v7476 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v7476 = v7475;

	i8 v7477 = (i8)(intptr_t)(ws+3984);
	i8 v7478 = *(i8*)(intptr_t)v7477;
	i1 v7479 = (i1)+10;
	i8 v7480 = ((i8)v7478)>>v7479;
	i2 v7481 = v7480;
	*(i2*)(intptr_t)(ws+3992) = v7481;
	i8 v7482 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(void))(intptr_t)v7482)();

	i8 v7483 = (i8)(intptr_t)c02_s01dc;
	*(i8*)(intptr_t)(ws+4288) = v7483;
	i8 v7484 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7484)();

}
const i1 c02_s01dd[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x62,0x65,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+4008 length ws+0
void f413_SyntaxError(void) {

	i8 v7485 = (i8)(intptr_t)c02_s01dd;
	*(i8*)(intptr_t)(ws+4288) = v7485;
	i8 v7486 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7486)();

	i8 v7487 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v7487)();

}
	void f24_ArgvInit(void);
	void f25_ArgvNext(void);
	void f25_ArgvNext(void);
	void f25_ArgvNext(void);
	void f413_SyntaxError(void);

// ParseArguments workspace at ws+3984 length ws+24
void f414_ParseArguments(void) {

	i8 v7488 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v7488)();

	i8 v7489 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v7489)();

	i8 v7490 = *(i8*)(intptr_t)(ws+4008);
	i8 v7491 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v7491 = v7490;

	i8 v7492 = (i8)(intptr_t)(ws+3984);
	i8 v7493 = *(i8*)(intptr_t)v7492;
	i8 v7494 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v7494 = v7493;

	i8 v7495 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v7495)();

	i8 v7496 = *(i8*)(intptr_t)(ws+4008);
	i8 v7497 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7497 = v7496;

	i8 v7498 = (i8)(intptr_t)(ws+3992);
	i8 v7499 = *(i8*)(intptr_t)v7498;
	i8 v7500 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v7500 = v7499;

	i8 v7501 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v7501)();

	i8 v7502 = *(i8*)(intptr_t)(ws+4008);
	i8 v7503 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7503 = v7502;

	i8 v7504 = (i8)(intptr_t)(ws+4000);
	i8 v7505 = *(i8*)(intptr_t)v7504;
	i8 v7506 = (i8)+0;
	if (v7505==v7506) goto c02_0571; else goto c02_056e;

c02_0571:;

	i8 v7507 = (i8)(intptr_t)(ws+24);
	i8 v7508 = *(i8*)(intptr_t)v7507;
	i8 v7509 = (i8)+0;
	if (v7508==v7509) goto c02_056e; else goto c02_0570;

c02_0570:;

	i8 v7510 = (i8)(intptr_t)(ws+32);
	i8 v7511 = *(i8*)(intptr_t)v7510;
	i8 v7512 = (i8)+0;
	if (v7511==v7512) goto c02_056e; else goto c02_056f;

c02_056e:;

	i8 v7513 = (i8)(intptr_t)(f413_SyntaxError);

	((void(*)(void))(intptr_t)v7513)();

c02_056f:;

c02_0567:;

}
const i1 c02_s01de[] = { 0x43,0x4f,0x57,0x42,0x45,0x3a,0x20,0 };
	void f12_print(void);
	void f412_PrintFreeMemory(void);
	void f414_ParseArguments(void);
	void f120_InputterOpenfile(void);
	void f108_EmitterOpenfile(void);
	void f411_ProcessFile(void);
	void f109_EmitterClosefile(void);
	void f121_InputterClosefile(void);
const i1 c02_s01df[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f412_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3984
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

	i2 v950 = (i2)+0;
	i8 v951 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v951 = v950;

	i2 v952 = (i2)+0;
	i8 v953 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v953 = v952;


	i8 v954 = (i8)(intptr_t)(ws+56);
	i8 v955 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v955 = v954;












	i8 v1065 = (i8)+0;
	i8 v1066 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1066 = v1065;




	i2 v1117 = (i2)+0;
	i8 v1118 = (i8)(intptr_t)(ws+2774);
	*(i2*)(intptr_t)v1118 = v1117;

	i8 v1119 = (i8)+0;
	i8 v1120 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1120 = v1119;

	i1 v1121 = (i1)+0;
	i8 v1122 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1122 = v1121;





































































	i8 v2303 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)(ws+4176) = v2303;
	i8 v2304 = (i8)+116;
	*(i8*)(intptr_t)(ws+4184) = v2304;
	i8 v2305 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v2305)();

	i8 v2306 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)(ws+4176) = v2306;
	i8 v2307 = (i8)+116;
	*(i8*)(intptr_t)(ws+4184) = v2307;
	i8 v2308 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v2308)();

	i1 v2309 = (i1)+0;
	i8 v2310 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v2310 = v2309;



	i8 v2325 = (i8)+0;
	i8 v2326 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2326 = v2325;









	i2 v2476 = (i2)+1;
	i8 v2477 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v2477 = v2476;
































	i2 v3222 = (i2)+0;
	i8 v3223 = (i8)(intptr_t)(ws+3836);
	*(i2*)(intptr_t)v3223 = v3222;


	i1 v3276 = (i1)+0;
	i8 v3277 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3277 = v3276;















































	i8 v7514 = (i8)(intptr_t)c02_s01de;
	*(i8*)(intptr_t)(ws+4288) = v7514;
	i8 v7515 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7515)();

	i8 v7516 = (i8)(intptr_t)(f412_PrintFreeMemory);

	((void(*)(void))(intptr_t)v7516)();

	i8 v7517 = (i8)(intptr_t)(f414_ParseArguments);

	((void(*)(void))(intptr_t)v7517)();

	i8 v7518 = (i8)(intptr_t)(ws+24);
	i8 v7519 = *(i8*)(intptr_t)v7518;
	*(i8*)(intptr_t)(ws+3984) = v7519;
	i8 v7520 = (i8)(intptr_t)(f120_InputterOpenfile);

	((void(*)(void))(intptr_t)v7520)();

	i8 v7521 = (i8)(intptr_t)(ws+32);
	i8 v7522 = *(i8*)(intptr_t)v7521;
	*(i8*)(intptr_t)(ws+3984) = v7522;
	i8 v7523 = (i8)(intptr_t)(f108_EmitterOpenfile);

	((void(*)(void))(intptr_t)v7523)();

	i8 v7524 = (i8)(intptr_t)(f411_ProcessFile);

	((void(*)(void))(intptr_t)v7524)();

	i8 v7525 = (i8)(intptr_t)(f109_EmitterClosefile);

	((void(*)(void))(intptr_t)v7525)();

	i8 v7526 = (i8)(intptr_t)(f121_InputterClosefile);

	((void(*)(void))(intptr_t)v7526)();

	i8 v7527 = (i8)(intptr_t)c02_s01df;
	*(i8*)(intptr_t)(ws+4288) = v7527;
	i8 v7528 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7528)();

	i8 v7529 = (i8)(intptr_t)(f412_PrintFreeMemory);

	((void(*)(void))(intptr_t)v7529)();

}
void cmain(void) {
	f3___main();
}
