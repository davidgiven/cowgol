#include "cowgol.h"
static i8 workspace[0x01a9];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+3320 length ws+0
void f6_ExitWithError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
exit(1); 



}

// MemSet workspace at ws+848 length ws+24
void f7_MemSet(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+848) 
,  
*(i1*)(intptr_t)(ws+856) 
,  
*(i8*)(intptr_t)(ws+864) 
); 



}

// print_char workspace at ws+3360 length ws+1
void f9_print_char(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
putchar( 
*(i1*)(intptr_t)(ws+3360) 
); 



}
	void f9_print_char(void);

// print workspace at ws+3344 length ws+9
void f12_print(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

c02_0001:;

	i8 v6 = (i8)(intptr_t)(ws+3344);
	i8 v7 = *(i8*)(intptr_t)v6;
	i1 v8 = *(i1*)(intptr_t)v7;
	i8 v9 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v9 = v8;

	i8 v10 = (i8)(intptr_t)(ws+3352);
	i1 v11 = *(i1*)(intptr_t)v10;
	i1 v12 = (i1)+0;
	if (v11==v12) goto c02_0006; else goto c02_0007;

c02_0006:;

	return;

c02_0007:;

c02_0003:;

	i8 v13 = (i8)(intptr_t)(ws+3352);
	i1 v14 = *(i1*)(intptr_t)v13;
	*(i1*)(intptr_t)(ws+3360) = v14;
	i8 v15 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v15)();

	i8 v16 = (i8)(intptr_t)(ws+3344);
	i8 v17 = *(i8*)(intptr_t)v16;
	i8 v18 = v17+(+1);
	i8 v19 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v19 = v18;

	goto c02_0001;

c02_0002:;

}
	void f9_print_char(void);

// print_nl workspace at ws+1064 length ws+0
void f13_print_nl(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v20 = (i1)+10;
	*(i1*)(intptr_t)(ws+3360) = v20;
	i8 v21 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v21)();

}

// UIToA workspace at ws+3344 length ws+49
void f14_UIToA(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v22 = (i8)(intptr_t)(ws+3352);
	i8 v23 = *(i8*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v24 = v23;

c02_0008:;

	i8 v25 = (i8)(intptr_t)(ws+3344);
	i4 v26 = *(i4*)(intptr_t)v25;
	i8 v27 = (i8)(intptr_t)(ws+3348);
	i1 v28 = *(i1*)(intptr_t)v27;
	i4 v29 = v28;
	i4 v30 = v26%v29;
	i8 v31 = (i8)(intptr_t)(ws+3368);
	*(i4*)(intptr_t)v31 = v30;

	i8 v32 = (i8)(intptr_t)(ws+3344);
	i4 v33 = *(i4*)(intptr_t)v32;
	i8 v34 = (i8)(intptr_t)(ws+3348);
	i1 v35 = *(i1*)(intptr_t)v34;
	i4 v36 = v35;
	i4 v37 = v33/v36;
	i8 v38 = (i8)(intptr_t)(ws+3344);
	*(i4*)(intptr_t)v38 = v37;

	i8 v39 = (i8)(intptr_t)(ws+3368);
	i4 v40 = *(i4*)(intptr_t)v39;
	i4 v41 = (i4)+10;
	if (v40<v41) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v42 = (i8)(intptr_t)(ws+3368);
	i4 v43 = *(i4*)(intptr_t)v42;
	i4 v44 = v43+(+48);
	i8 v45 = (i8)(intptr_t)(ws+3368);
	*(i4*)(intptr_t)v45 = v44;

	goto c02_000a;

c02_000e:;

	i8 v46 = (i8)(intptr_t)(ws+3368);
	i4 v47 = *(i4*)(intptr_t)v46;
	i4 v48 = v47+(+87);
	i8 v49 = (i8)(intptr_t)(ws+3368);
	*(i4*)(intptr_t)v49 = v48;

c02_000a:;

	i8 v50 = (i8)(intptr_t)(ws+3368);
	i4 v51 = *(i4*)(intptr_t)v50;
	i1 v52 = v51;
	i8 v53 = (i8)(intptr_t)(ws+3360);
	i8 v54 = *(i8*)(intptr_t)v53;
	*(i1*)(intptr_t)v54 = v52;

	i8 v55 = (i8)(intptr_t)(ws+3360);
	i8 v56 = *(i8*)(intptr_t)v55;
	i8 v57 = v56+(+1);
	i8 v58 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+3344);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+0;
	if (v60==v61) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v62 = (i8)(intptr_t)(ws+3352);
	i8 v63 = *(i8*)(intptr_t)v62;
	i8 v64 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v64 = v63;

	i8 v65 = (i8)(intptr_t)(ws+3360);
	i8 v66 = *(i8*)(intptr_t)v65;
	i8 v67 = v66+(-1);
	i8 v68 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v68 = v67;

c02_0014:;

	i8 v69 = (i8)(intptr_t)(ws+3376);
	i8 v70 = *(i8*)(intptr_t)v69;
	i8 v71 = (i8)(intptr_t)(ws+3384);
	i8 v72 = *(i8*)(intptr_t)v71;
	if (v70<v72) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v73 = (i8)(intptr_t)(ws+3376);
	i8 v74 = *(i8*)(intptr_t)v73;
	i1 v75 = *(i1*)(intptr_t)v74;
	i8 v76 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v76 = v75;

	i8 v77 = (i8)(intptr_t)(ws+3384);
	i8 v78 = *(i8*)(intptr_t)v77;
	i1 v79 = *(i1*)(intptr_t)v78;
	i8 v80 = (i8)(intptr_t)(ws+3376);
	i8 v81 = *(i8*)(intptr_t)v80;
	*(i1*)(intptr_t)v81 = v79;

	i8 v82 = (i8)(intptr_t)(ws+3392);
	i1 v83 = *(i1*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+3384);
	i8 v85 = *(i8*)(intptr_t)v84;
	*(i1*)(intptr_t)v85 = v83;

	i8 v86 = (i8)(intptr_t)(ws+3376);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = v87+(+1);
	i8 v89 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v89 = v88;

	i8 v90 = (i8)(intptr_t)(ws+3384);
	i8 v91 = *(i8*)(intptr_t)v90;
	i8 v92 = v91+(-1);
	i8 v93 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v93 = v92;

	goto c02_0014;

c02_0019:;

	i1 v94 = (i1)+0;
	i8 v95 = (i8)(intptr_t)(ws+3360);
	i8 v96 = *(i8*)(intptr_t)v95;
	*(i1*)(intptr_t)v96 = v94;

}
	void f14_UIToA(void);
	void f12_print(void);

// print_i32 workspace at ws+3312 length ws+32
void f16_print_i32(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v123 = (i8)(intptr_t)(ws+3312);
	i4 v124 = *(i4*)(intptr_t)v123;
	*(i4*)(intptr_t)(ws+3344) = v124;
	i1 v125 = (i1)+10;
	*(i1*)(intptr_t)(ws+3348) = v125;
	i8 v126 = (i8)(intptr_t)(ws+3316);
	*(i8*)(intptr_t)(ws+3352) = v126;
	i8 v127 = (i8)(intptr_t)(f14_UIToA);

	((void(*)(void))(intptr_t)v127)();

	i8 v128 = *(i8*)(intptr_t)(ws+3360);
	i8 v129 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v129 = v128;

	i8 v130 = (i8)(intptr_t)(ws+3328);
	i8 v131 = *(i8*)(intptr_t)v130;
	i8 v132 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v132 = v131;

	i8 v133 = (i8)(intptr_t)(ws+3316);
	*(i8*)(intptr_t)(ws+3344) = v133;
	i8 v134 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v134)();

}
	void f16_print_i32(void);

// print_i16 workspace at ws+3304 length ws+2
void f17_print_i16(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v135 = (i8)(intptr_t)(ws+3304);
	i2 v136 = *(i2*)(intptr_t)v135;
	i4 v137 = v136;
	*(i4*)(intptr_t)(ws+3312) = v137;
	i8 v138 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(void))(intptr_t)v138)();

}
	void f16_print_i32(void);

// print_i8 workspace at ws+3304 length ws+1
void f18_print_i8(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v139 = (i8)(intptr_t)(ws+3304);
	i1 v140 = *(i1*)(intptr_t)v139;
	i4 v141 = v140;
	*(i4*)(intptr_t)(ws+3312) = v141;
	i8 v142 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(void))(intptr_t)v142)();

}
	void f9_print_char(void);

// print_hex_i8 workspace at ws+1064 length ws+3
void f19_print_hex_i8(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v143 = (i1)+2;
	i8 v144 = (i8)(intptr_t)(ws+1065);
	*(i1*)(intptr_t)v144 = v143;

c02_001f:;

	i8 v145 = (i8)(intptr_t)(ws+1064);
	i1 v146 = *(i1*)(intptr_t)v145;
	i1 v147 = (i1)+4;
	i1 v148 = ((i1)v146)>>v147;
	i8 v149 = (i8)(intptr_t)(ws+1066);
	*(i1*)(intptr_t)v149 = v148;

	i8 v150 = (i8)(intptr_t)(ws+1066);
	i1 v151 = *(i1*)(intptr_t)v150;
	i1 v152 = (i1)+10;
	if (v151<v152) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v153 = (i8)(intptr_t)(ws+1066);
	i1 v154 = *(i1*)(intptr_t)v153;
	i1 v155 = v154+(+48);
	i8 v156 = (i8)(intptr_t)(ws+1066);
	*(i1*)(intptr_t)v156 = v155;

	goto c02_0021;

c02_0025:;

	i8 v157 = (i8)(intptr_t)(ws+1066);
	i1 v158 = *(i1*)(intptr_t)v157;
	i1 v159 = v158+(+87);
	i8 v160 = (i8)(intptr_t)(ws+1066);
	*(i1*)(intptr_t)v160 = v159;

c02_0021:;

	i8 v161 = (i8)(intptr_t)(ws+1066);
	i1 v162 = *(i1*)(intptr_t)v161;
	*(i1*)(intptr_t)(ws+3360) = v162;
	i8 v163 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v163)();

	i8 v164 = (i8)(intptr_t)(ws+1064);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+4;
	i1 v167 = ((i1)v165)<<v166;
	i8 v168 = (i8)(intptr_t)(ws+1064);
	*(i1*)(intptr_t)v168 = v167;

	i8 v169 = (i8)(intptr_t)(ws+1065);
	i1 v170 = *(i1*)(intptr_t)v169;
	i1 v171 = v170+(-1);
	i8 v172 = (i8)(intptr_t)(ws+1065);
	*(i1*)(intptr_t)v172 = v171;

	i8 v173 = (i8)(intptr_t)(ws+1065);
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

// print_hex_i16 workspace at ws+992 length ws+2
void f20_print_hex_i16(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v176 = (i8)(intptr_t)(ws+992);
	i2 v177 = *(i2*)(intptr_t)v176;
	i1 v178 = (i1)+8;
	i2 v179 = ((i2)v177)>>v178;
	i1 v180 = v179;
	*(i1*)(intptr_t)(ws+1064) = v180;
	i8 v181 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v181)();

	i8 v182 = (i8)(intptr_t)(ws+992);
	i2 v183 = *(i2*)(intptr_t)v182;
	i1 v184 = v183;
	*(i1*)(intptr_t)(ws+1064) = v184;
	i8 v185 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v185)();

}
	void f19_print_hex_i8(void);
	void f19_print_hex_i8(void);
	void f19_print_hex_i8(void);
	void f19_print_hex_i8(void);

// print_hex_i32 workspace at ws+1056 length ws+4
void f21_print_hex_i32(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v186 = (i8)(intptr_t)(ws+1056);
	i4 v187 = *(i4*)(intptr_t)v186;
	i1 v188 = (i1)+24;
	i4 v189 = ((i4)v187)>>v188;
	i1 v190 = v189;
	*(i1*)(intptr_t)(ws+1064) = v190;
	i8 v191 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v191)();

	i8 v192 = (i8)(intptr_t)(ws+1056);
	i4 v193 = *(i4*)(intptr_t)v192;
	i1 v194 = (i1)+16;
	i4 v195 = ((i4)v193)>>v194;
	i1 v196 = v195;
	*(i1*)(intptr_t)(ws+1064) = v196;
	i8 v197 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v197)();

	i8 v198 = (i8)(intptr_t)(ws+1056);
	i4 v199 = *(i4*)(intptr_t)v198;
	i1 v200 = (i1)+8;
	i4 v201 = ((i4)v199)>>v200;
	i1 v202 = v201;
	*(i1*)(intptr_t)(ws+1064) = v202;
	i8 v203 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v203)();

	i8 v204 = (i8)(intptr_t)(ws+1056);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = v205;
	*(i1*)(intptr_t)(ws+1064) = v206;
	i8 v207 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v207)();

}
	void f7_MemSet(void);

// MemZero workspace at ws+832 length ws+16
void f23_MemZero(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v309 = (i8)(intptr_t)(ws+832);
	i8 v310 = *(i8*)(intptr_t)v309;
	*(i8*)(intptr_t)(ws+848) = v310;
	i1 v311 = (i1)+0;
	*(i1*)(intptr_t)(ws+856) = v311;
	i8 v312 = (i8)(intptr_t)(ws+840);
	i8 v313 = *(i8*)(intptr_t)v312;
	*(i8*)(intptr_t)(ws+864) = v313;
	i8 v314 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(void))(intptr_t)v314)();

}

// ArgvInit workspace at ws+832 length ws+0
void f24_ArgvInit(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v315 = (i8)(intptr_t)(ws+16);
	i8 v316 = *(i8*)(intptr_t)v315;
	i8 v317 = v316+(+8);
	i8 v318 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v318 = v317;

}

// ArgvNext workspace at ws+832 length ws+8
void f25_ArgvNext(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v319 = (i8)(intptr_t)(ws+16);
	i8 v320 = *(i8*)(intptr_t)v319;
	i8 v321 = (i8)+0;
	if (v320==v321) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v322 = (i8)+0;
	i8 v323 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v323 = v322;

	return;

c02_0053:;

c02_004f:;

	i8 v324 = (i8)(intptr_t)(ws+16);
	i8 v325 = *(i8*)(intptr_t)v324;
	i8 v326 = *(i8*)(intptr_t)v325;
	i8 v327 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v327 = v326;

	i8 v328 = (i8)(intptr_t)(ws+832);
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

// StrCmp workspace at ws+1096 length ws+17
void f26_StrCmp(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

c02_0059:;

	i8 v337 = (i8)(intptr_t)(ws+1096);
	i8 v338 = *(i8*)(intptr_t)v337;
	i1 v339 = *(i1*)(intptr_t)v338;
	i8 v340 = (i8)(intptr_t)(ws+1104);
	i8 v341 = *(i8*)(intptr_t)v340;
	i1 v342 = *(i1*)(intptr_t)v341;
	i1 v343 = v339-v342;
	i8 v344 = (i8)(intptr_t)(ws+1112);
	*(i1*)(intptr_t)v344 = v343;

	i8 v345 = (i8)(intptr_t)(ws+1112);
	i1 v346 = *(i1*)(intptr_t)v345;
	i1 v347 = (i1)+0;
	if (v346==v347) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v348 = (i8)(intptr_t)(ws+1096);
	i8 v349 = *(i8*)(intptr_t)v348;
	i1 v350 = *(i1*)(intptr_t)v349;
	i1 v351 = (i1)+0;
	if (v350==v351) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v352 = (i8)(intptr_t)(ws+1096);
	i8 v353 = *(i8*)(intptr_t)v352;
	i8 v354 = v353+(+1);
	i8 v355 = (i8)(intptr_t)(ws+1096);
	*(i8*)(intptr_t)v355 = v354;

	i8 v356 = (i8)(intptr_t)(ws+1104);
	i8 v357 = *(i8*)(intptr_t)v356;
	i8 v358 = v357+(+1);
	i8 v359 = (i8)(intptr_t)(ws+1104);
	*(i8*)(intptr_t)v359 = v358;

	goto c02_0059;

c02_005a:;

}

// ToLower workspace at ws+856 length ws+2
void f27_ToLower(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v360 = (i8)(intptr_t)(ws+856);
	i1 v361 = *(i1*)(intptr_t)v360;
	i1 v362 = (i1)+65;
	if (v361<v362) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v363 = (i1)+90;
	i8 v364 = (i8)(intptr_t)(ws+856);
	i1 v365 = *(i1*)(intptr_t)v364;
	if (v363<v365) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v366 = (i8)(intptr_t)(ws+856);
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = v367|(+32);
	i8 v369 = (i8)(intptr_t)(ws+857);
	*(i1*)(intptr_t)v369 = v368;

	goto c02_0063;

c02_0069:;

	i8 v370 = (i8)(intptr_t)(ws+856);
	i1 v371 = *(i1*)(intptr_t)v370;
	i8 v372 = (i8)(intptr_t)(ws+857);
	*(i1*)(intptr_t)v372 = v371;

c02_0063:;

}
	void f27_ToLower(void);
	void f27_ToLower(void);

// StrICmp workspace at ws+832 length ws+19
void f28_StrICmp(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

c02_006b:;

	i8 v373 = (i8)(intptr_t)(ws+832);
	i8 v374 = *(i8*)(intptr_t)v373;
	i1 v375 = *(i1*)(intptr_t)v374;
	*(i1*)(intptr_t)(ws+856) = v375;
	i8 v376 = (i8)(intptr_t)(f27_ToLower);

	((void(*)(void))(intptr_t)v376)();

	i1 v377 = *(i1*)(intptr_t)(ws+857);
	i8 v378 = (i8)(intptr_t)(ws+849);
	*(i1*)(intptr_t)v378 = v377;

	i8 v379 = (i8)(intptr_t)(ws+840);
	i8 v380 = *(i8*)(intptr_t)v379;
	i1 v381 = *(i1*)(intptr_t)v380;
	*(i1*)(intptr_t)(ws+856) = v381;
	i8 v382 = (i8)(intptr_t)(f27_ToLower);

	((void(*)(void))(intptr_t)v382)();

	i1 v383 = *(i1*)(intptr_t)(ws+857);
	i8 v384 = (i8)(intptr_t)(ws+850);
	*(i1*)(intptr_t)v384 = v383;

	i8 v385 = (i8)(intptr_t)(ws+849);
	i1 v386 = *(i1*)(intptr_t)v385;
	i8 v387 = (i8)(intptr_t)(ws+850);
	i1 v388 = *(i1*)(intptr_t)v387;
	i1 v389 = v386-v388;
	i8 v390 = (i8)(intptr_t)(ws+848);
	*(i1*)(intptr_t)v390 = v389;

	i8 v391 = (i8)(intptr_t)(ws+848);
	i1 v392 = *(i1*)(intptr_t)v391;
	i1 v393 = (i1)+0;
	if (v392==v393) goto c02_0074; else goto c02_0072;

c02_0074:;

	i8 v394 = (i8)(intptr_t)(ws+832);
	i8 v395 = *(i8*)(intptr_t)v394;
	i1 v396 = *(i1*)(intptr_t)v395;
	i1 v397 = (i1)+0;
	if (v396==v397) goto c02_0072; else goto c02_0073;

c02_0072:;

	goto c02_006c;

c02_0073:;

c02_006d:;

	i8 v398 = (i8)(intptr_t)(ws+832);
	i8 v399 = *(i8*)(intptr_t)v398;
	i8 v400 = v399+(+1);
	i8 v401 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v401 = v400;

	i8 v402 = (i8)(intptr_t)(ws+840);
	i8 v403 = *(i8*)(intptr_t)v402;
	i8 v404 = v403+(+1);
	i8 v405 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v405 = v404;

	goto c02_006b;

c02_006c:;

}

// RawAlloc workspace at ws+1168 length ws+16
void f32_RawAlloc(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
*(i8*)(intptr_t)(ws+1176) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+1168) 
); 



}
	void f32_RawAlloc(void);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// Alloc workspace at ws+1144 length ws+24
void f33_Alloc(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v465 = (i8)(intptr_t)(ws+1144);
	i8 v466 = *(i8*)(intptr_t)v465;
	*(i8*)(intptr_t)(ws+1168) = v466;
	i8 v467 = (i8)(intptr_t)(f32_RawAlloc);

	((void(*)(void))(intptr_t)v467)();

	i8 v468 = *(i8*)(intptr_t)(ws+1176);
	i8 v469 = (i8)(intptr_t)(ws+1160);
	*(i8*)(intptr_t)v469 = v468;

	i8 v470 = (i8)(intptr_t)(ws+1160);
	i8 v471 = *(i8*)(intptr_t)v470;
	i8 v472 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v472 = v471;

	i8 v473 = (i8)(intptr_t)(ws+1152);
	i8 v474 = *(i8*)(intptr_t)v473;
	i8 v475 = (i8)+0;
	if (v474==v475) goto c02_008c; else goto c02_008d;

c02_008c:;

	i8 v476 = (i8)(intptr_t)c02_s0000;
	*(i8*)(intptr_t)(ws+3344) = v476;
	i8 v477 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v477)();

	i8 v478 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v478)();

c02_008d:;

c02_0089:;

}

// Free workspace at ws+912 length ws+8
void f34_Free(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+912) 
); 



}

// StrDup workspace at ws+1096 length ws+16
void f35_StrDup(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
*(i8*)(intptr_t)(ws+1104) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1096) 
); 



}

// GetFreeMemory workspace at ws+832 length ws+8
void f38_GetFreeMemory(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v479 = (i8)+0;
	i8 v480 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v480 = v479;

}

// _fcb_init workspace at ws+1112 length ws+8
void f41__fcb_init(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i4 v481 = (i4)+0;
	i8 v482 = (i8)(intptr_t)(ws+1112);
	i8 v483 = *(i8*)(intptr_t)v482;
	i8 v484 = v483+(+4);
	*(i4*)(intptr_t)v484 = v481;

	i2 v485 = (i2)+0;
	i8 v486 = (i8)(intptr_t)(ws+1112);
	i8 v487 = *(i8*)(intptr_t)v486;
	i8 v488 = v487+(+8);
	*(i2*)(intptr_t)v488 = v485;

	i2 v489 = (i2)+0;
	i8 v490 = (i8)(intptr_t)(ws+1112);
	i8 v491 = *(i8*)(intptr_t)v490;
	i8 v492 = v491+(+10);
	*(i2*)(intptr_t)v492 = v489;

	i1 v493 = (i1)+0;
	i8 v494 = (i8)(intptr_t)(ws+1112);
	i8 v495 = *(i8*)(intptr_t)v494;
	i8 v496 = v495+(+524);
	*(i1*)(intptr_t)v496 = v493;

}

// _fcb_advance workspace at ws+1160 length ws+8
void f42__fcb_advance(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v497 = (i8)(intptr_t)(ws+1160);
	i8 v498 = *(i8*)(intptr_t)v497;
	i8 v499 = v498+(+10);
	i2 v500 = *(i2*)(intptr_t)v499;
	i2 v501 = v500+(+1);
	i8 v502 = (i8)(intptr_t)(ws+1160);
	i8 v503 = *(i8*)(intptr_t)v502;
	i8 v504 = v503+(+10);
	*(i2*)(intptr_t)v504 = v501;

}
	void f39_FCBRawRead(void);
	void f42__fcb_advance(void);

// _fcb_fillbuffer workspace at ws+1136 length ws+18
void f43__fcb_fillbuffer(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v505 = (i8)(intptr_t)(ws+1136);
	i8 v506 = *(i8*)(intptr_t)v505;
	i8 v507 = v506+(+4);
	i4 v508 = *(i4*)(intptr_t)v507;
	i8 v509 = (i8)(intptr_t)(ws+1136);
	i8 v510 = *(i8*)(intptr_t)v509;
	i8 v511 = v510+(+10);
	i2 v512 = *(i2*)(intptr_t)v511;
	i4 v513 = v512;
	i4 v514 = v508+v513;
	i8 v515 = (i8)(intptr_t)(ws+1148);
	*(i4*)(intptr_t)v515 = v514;

	i8 v516 = (i8)(intptr_t)(ws+1136);
	i8 v517 = *(i8*)(intptr_t)v516;
	*(i8*)(intptr_t)(ws+1160) = v517;
	i8 v518 = (i8)(intptr_t)(ws+1148);
	i4 v519 = *(i4*)(intptr_t)v518;
	*(i4*)(intptr_t)(ws+1168) = v519;
	i2 v520 = (i2)+512;
	*(i2*)(intptr_t)(ws+1172) = v520;
	i8 v521 = (i8)(intptr_t)(f39_FCBRawRead);

	((void(*)(void))(intptr_t)v521)();

	i2 v522 = *(i2*)(intptr_t)(ws+1174);
	i8 v523 = (i8)(intptr_t)(ws+1152);
	*(i2*)(intptr_t)v523 = v522;

	i8 v524 = (i8)(intptr_t)(ws+1152);
	i2 v525 = *(i2*)(intptr_t)v524;
	i8 v526 = (i8)(intptr_t)(ws+1136);
	i8 v527 = *(i8*)(intptr_t)v526;
	i8 v528 = v527+(+8);
	*(i2*)(intptr_t)v528 = v525;

	i1 v529 = (i1)+0;
	i8 v530 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v530 = v529;

	i8 v531 = (i8)(intptr_t)(ws+1136);
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
	i8 v538 = (i8)(intptr_t)(ws+1136);
	i8 v539 = *(i8*)(intptr_t)v538;
	i8 v540 = v539+(+524);
	*(i1*)(intptr_t)v540 = v537;

	i8 v541 = (i8)(intptr_t)(ws+1148);
	i4 v542 = *(i4*)(intptr_t)v541;
	i8 v543 = (i8)(intptr_t)(ws+1136);
	i8 v544 = *(i8*)(intptr_t)v543;
	i8 v545 = v544+(+4);
	*(i4*)(intptr_t)v545 = v542;

	i2 v546 = (i2)+0;
	i8 v547 = (i8)(intptr_t)(ws+1136);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+10);
	*(i2*)(intptr_t)v549 = v546;

	i8 v550 = (i8)(intptr_t)(ws+1136);
	i8 v551 = *(i8*)(intptr_t)v550;
	i8 v552 = v551+(+8);
	i2 v553 = *(i2*)(intptr_t)v552;
	i2 v554 = (i2)+0;
	if (v553==v554) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v555 = (i8)(intptr_t)(ws+1136);
	i8 v556 = *(i8*)(intptr_t)v555;
	i8 v557 = v556+(+12);
	i1 v558 = *(i1*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+1136);
	i8 v561 = *(i8*)(intptr_t)v560;
	*(i8*)(intptr_t)(ws+1160) = v561;
	i8 v562 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v562)();

c02_0097:;

c02_0093:;

}
	void f40_FCBRawWrite(void);

// FCBFlush workspace at ws+1136 length ws+12
void f44_FCBFlush(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v563 = (i8)(intptr_t)(ws+1136);
	i8 v564 = *(i8*)(intptr_t)v563;
	i8 v565 = v564+(+4);
	i4 v566 = *(i4*)(intptr_t)v565;
	i8 v567 = (i8)(intptr_t)(ws+1144);
	*(i4*)(intptr_t)v567 = v566;

	i8 v568 = (i8)(intptr_t)(ws+1136);
	i8 v569 = *(i8*)(intptr_t)v568;
	i8 v570 = v569+(+524);
	i1 v571 = *(i1*)(intptr_t)v570;
	i1 v572 = v571&(+4);
	i1 v573 = (i1)+0;
	if (v572==v573) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v574 = (i8)(intptr_t)(ws+1136);
	i8 v575 = *(i8*)(intptr_t)v574;
	*(i8*)(intptr_t)(ws+1152) = v575;
	i8 v576 = (i8)(intptr_t)(ws+1144);
	i4 v577 = *(i4*)(intptr_t)v576;
	*(i4*)(intptr_t)(ws+1160) = v577;
	i8 v578 = (i8)(intptr_t)(ws+1136);
	i8 v579 = *(i8*)(intptr_t)v578;
	i8 v580 = v579+(+10);
	i2 v581 = *(i2*)(intptr_t)v580;
	*(i2*)(intptr_t)(ws+1164) = v581;
	i8 v582 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(void))(intptr_t)v582)();

	i8 v583 = (i8)(intptr_t)(ws+1136);
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

	i8 v589 = (i8)(intptr_t)(ws+1144);
	i4 v590 = *(i4*)(intptr_t)v589;
	i8 v591 = (i8)(intptr_t)(ws+1136);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = v592+(+10);
	i2 v594 = *(i2*)(intptr_t)v593;
	i4 v595 = v594;
	i4 v596 = v590+v595;
	i8 v597 = (i8)(intptr_t)(ws+1136);
	i8 v598 = *(i8*)(intptr_t)v597;
	i8 v599 = v598+(+4);
	*(i4*)(intptr_t)v599 = v596;

	i1 v600 = (i1)+0;
	i8 v601 = (i8)(intptr_t)(ws+1136);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = v602+(+524);
	*(i1*)(intptr_t)v603 = v600;

	i2 v604 = (i2)+0;
	i8 v605 = (i8)(intptr_t)(ws+1136);
	i8 v606 = *(i8*)(intptr_t)v605;
	i8 v607 = v606+(+10);
	*(i2*)(intptr_t)v607 = v604;

	i2 v608 = (i2)+0;
	i8 v609 = (i8)(intptr_t)(ws+1136);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = v610+(+8);
	*(i2*)(intptr_t)v611 = v608;

}
	void f44_FCBFlush(void);
	void f42__fcb_advance(void);

// _fcb_flushbuffer workspace at ws+1056 length ws+9
void f45__fcb_flushbuffer(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v612 = (i8)(intptr_t)(ws+1056);
	i8 v613 = *(i8*)(intptr_t)v612;
	*(i8*)(intptr_t)(ws+1136) = v613;
	i8 v614 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v614)();

	i8 v615 = (i8)(intptr_t)(ws+1056);
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
	i8 v622 = (i8)(intptr_t)(ws+1056);
	i8 v623 = *(i8*)(intptr_t)v622;
	i8 v624 = v623+(+524);
	*(i1*)(intptr_t)v624 = v621;

	i8 v625 = (i8)(intptr_t)(ws+1064);
	i1 v626 = *(i1*)(intptr_t)v625;
	i8 v627 = (i8)(intptr_t)(ws+1056);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v628+(+12);
	*(i1*)(intptr_t)v629 = v626;

	i8 v630 = (i8)(intptr_t)(ws+1056);
	i8 v631 = *(i8*)(intptr_t)v630;
	*(i8*)(intptr_t)(ws+1160) = v631;
	i8 v632 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v632)();

}
	void f44_FCBFlush(void);
	void f43__fcb_fillbuffer(void);
	void f42__fcb_advance(void);

// FCBGetChar workspace at ws+1120 length ws+13
void f46_FCBGetChar(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v633 = (i8)(intptr_t)(ws+1120);
	i8 v634 = *(i8*)(intptr_t)v633;
	i8 v635 = v634+(+524);
	i1 v636 = *(i1*)(intptr_t)v635;
	i1 v637 = v636&(+4);
	i1 v638 = (i1)+0;
	if (v637==v638) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v639 = (i8)(intptr_t)(ws+1120);
	i8 v640 = *(i8*)(intptr_t)v639;
	*(i8*)(intptr_t)(ws+1136) = v640;
	i8 v641 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v641)();

c02_00ab:;

c02_00a7:;

	i8 v642 = (i8)(intptr_t)(ws+1120);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = v643+(+10);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(ws+1130);
	*(i2*)(intptr_t)v646 = v645;

	i8 v647 = (i8)(intptr_t)(ws+1130);
	i2 v648 = *(i2*)(intptr_t)v647;
	i8 v649 = (i8)(intptr_t)(ws+1120);
	i8 v650 = *(i8*)(intptr_t)v649;
	i8 v651 = v650+(+8);
	i2 v652 = *(i2*)(intptr_t)v651;
	if (v648==v652) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v653 = (i8)(intptr_t)(ws+1120);
	i8 v654 = *(i8*)(intptr_t)v653;
	*(i8*)(intptr_t)(ws+1136) = v654;
	i8 v655 = (i8)(intptr_t)(f43__fcb_fillbuffer);

	((void(*)(void))(intptr_t)v655)();

	i1 v656 = *(i1*)(intptr_t)(ws+1144);
	i8 v657 = (i8)(intptr_t)(ws+1132);
	*(i1*)(intptr_t)v657 = v656;

	i8 v658 = (i8)(intptr_t)(ws+1132);
	i1 v659 = *(i1*)(intptr_t)v658;
	i8 v660 = (i8)(intptr_t)(ws+1128);
	*(i1*)(intptr_t)v660 = v659;

	goto c02_00ac;

c02_00b0:;

	i8 v661 = (i8)(intptr_t)(ws+1120);
	i8 v662 = *(i8*)(intptr_t)v661;
	i8 v663 = v662+(+12);
	i8 v664 = (i8)(intptr_t)(ws+1130);
	i2 v665 = *(i2*)(intptr_t)v664;
	i8 v666 = v665;
	i8 v667 = v663+v666;
	i1 v668 = *(i1*)(intptr_t)v667;
	i8 v669 = (i8)(intptr_t)(ws+1128);
	*(i1*)(intptr_t)v669 = v668;

	i8 v670 = (i8)(intptr_t)(ws+1120);
	i8 v671 = *(i8*)(intptr_t)v670;
	*(i8*)(intptr_t)(ws+1160) = v671;
	i8 v672 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v672)();

c02_00ac:;

}
	void f44_FCBFlush(void);
	void f45__fcb_flushbuffer(void);
	void f42__fcb_advance(void);

// FCBPutChar workspace at ws+1040 length ws+12
void f47_FCBPutChar(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v673 = (i8)(intptr_t)(ws+1040);
	i8 v674 = *(i8*)(intptr_t)v673;
	i8 v675 = v674+(+524);
	i1 v676 = *(i1*)(intptr_t)v675;
	i1 v677 = v676&(+2);
	i1 v678 = (i1)+0;
	if (v677==v678) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v679 = (i8)(intptr_t)(ws+1040);
	i8 v680 = *(i8*)(intptr_t)v679;
	*(i8*)(intptr_t)(ws+1136) = v680;
	i8 v681 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v681)();

c02_00b5:;

c02_00b1:;

	i8 v682 = (i8)(intptr_t)(ws+1040);
	i8 v683 = *(i8*)(intptr_t)v682;
	i8 v684 = v683+(+10);
	i2 v685 = *(i2*)(intptr_t)v684;
	i8 v686 = (i8)(intptr_t)(ws+1050);
	*(i2*)(intptr_t)v686 = v685;

	i8 v687 = (i8)(intptr_t)(ws+1050);
	i2 v688 = *(i2*)(intptr_t)v687;
	i2 v689 = (i2)+512;
	if (v688==v689) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v690 = (i8)(intptr_t)(ws+1040);
	i8 v691 = *(i8*)(intptr_t)v690;
	*(i8*)(intptr_t)(ws+1056) = v691;
	i8 v692 = (i8)(intptr_t)(ws+1048);
	i1 v693 = *(i1*)(intptr_t)v692;
	*(i1*)(intptr_t)(ws+1064) = v693;
	i8 v694 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(void))(intptr_t)v694)();

	goto c02_00b6;

c02_00ba:;

	i8 v695 = (i8)(intptr_t)(ws+1048);
	i1 v696 = *(i1*)(intptr_t)v695;
	i8 v697 = (i8)(intptr_t)(ws+1040);
	i8 v698 = *(i8*)(intptr_t)v697;
	i8 v699 = v698+(+12);
	i8 v700 = (i8)(intptr_t)(ws+1050);
	i2 v701 = *(i2*)(intptr_t)v700;
	i8 v702 = v701;
	i8 v703 = v699+v702;
	*(i1*)(intptr_t)v703 = v696;

	i8 v704 = (i8)(intptr_t)(ws+1040);
	i8 v705 = *(i8*)(intptr_t)v704;
	*(i8*)(intptr_t)(ws+1160) = v705;
	i8 v706 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(void))(intptr_t)v706)();

c02_00b6:;

	i8 v707 = (i8)(intptr_t)(ws+1040);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = v708+(+524);
	i1 v710 = *(i1*)(intptr_t)v709;
	i1 v711 = v710|(+4);
	i8 v712 = (i8)(intptr_t)(ws+1040);
	i8 v713 = *(i8*)(intptr_t)v712;
	i8 v714 = v713+(+524);
	*(i1*)(intptr_t)v714 = v711;

}
	void f44_FCBFlush(void);

// FCBSeek workspace at ws+1056 length ws+16
void f50_FCBSeek(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v736 = (i8)(intptr_t)(ws+1064);
	i4 v737 = *(i4*)(intptr_t)v736;
	i8 v738 = (i8)(intptr_t)(ws+1056);
	i8 v739 = *(i8*)(intptr_t)v738;
	i8 v740 = v739+(+4);
	i4 v741 = *(i4*)(intptr_t)v740;
	i4 v742 = v737-v741;
	i8 v743 = (i8)(intptr_t)(ws+1068);
	*(i4*)(intptr_t)v743 = v742;

	i8 v744 = (i8)(intptr_t)(ws+1056);
	i8 v745 = *(i8*)(intptr_t)v744;
	i8 v746 = v745+(+524);
	i1 v747 = *(i1*)(intptr_t)v746;
	i1 v748 = v747&(+2);
	i1 v749 = (i1)+0;
	if (v748==v749) goto c02_00c4; else goto c02_00c3;

c02_00c3:;

	i8 v750 = (i8)(intptr_t)(ws+1068);
	i4 v751 = *(i4*)(intptr_t)v750;
	i8 v752 = (i8)(intptr_t)(ws+1056);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+8);
	i2 v755 = *(i2*)(intptr_t)v754;
	i4 v756 = v755;
	if (v751<v756) goto c02_00c8; else goto c02_00c9;

c02_00c8:;

	i8 v757 = (i8)(intptr_t)(ws+1068);
	i4 v758 = *(i4*)(intptr_t)v757;
	i2 v759 = v758;
	i8 v760 = (i8)(intptr_t)(ws+1056);
	i8 v761 = *(i8*)(intptr_t)v760;
	i8 v762 = v761+(+10);
	*(i2*)(intptr_t)v762 = v759;

	return;

c02_00c9:;

c02_00c5:;

	goto c02_00c0;

c02_00c4:;

	i8 v763 = (i8)(intptr_t)(ws+1056);
	i8 v764 = *(i8*)(intptr_t)v763;
	i8 v765 = v764+(+524);
	i1 v766 = *(i1*)(intptr_t)v765;
	i1 v767 = v766&(+4);
	i1 v768 = (i1)+0;
	if (v767==v768) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i8 v769 = (i8)(intptr_t)(ws+1056);
	i8 v770 = *(i8*)(intptr_t)v769;
	i8 v771 = v770+(+10);
	i2 v772 = *(i2*)(intptr_t)v771;
	i4 v773 = v772;
	i8 v774 = (i8)(intptr_t)(ws+1068);
	i4 v775 = *(i4*)(intptr_t)v774;
	if (v773<v775) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v776 = (i8)(intptr_t)(ws+1068);
	i4 v777 = *(i4*)(intptr_t)v776;
	i2 v778 = v777;
	i8 v779 = (i8)(intptr_t)(ws+1056);
	i8 v780 = *(i8*)(intptr_t)v779;
	i8 v781 = v780+(+10);
	*(i2*)(intptr_t)v781 = v778;

	return;

c02_00d2:;

c02_00ce:;

c02_00cd:;

c02_00c0:;

	i8 v782 = (i8)(intptr_t)(ws+1056);
	i8 v783 = *(i8*)(intptr_t)v782;
	*(i8*)(intptr_t)(ws+1136) = v783;
	i8 v784 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v784)();

	i8 v785 = (i8)(intptr_t)(ws+1064);
	i4 v786 = *(i4*)(intptr_t)v785;
	i8 v787 = (i8)(intptr_t)(ws+1056);
	i8 v788 = *(i8*)(intptr_t)v787;
	i8 v789 = v788+(+4);
	*(i4*)(intptr_t)v789 = v786;

}

// FCBRawRead workspace at ws+1160 length ws+36
void f39_FCBRawRead(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v790 = (i8)(intptr_t)(ws+1160);
	i8 v791 = *(i8*)(intptr_t)v790;
	i4 v792 = *(i4*)(intptr_t)v791;
	i8 v793 = (i8)(intptr_t)(ws+1176);
	*(i4*)(intptr_t)v793 = v792;

	i8 v794 = (i8)(intptr_t)(ws+1160);
	i8 v795 = *(i8*)(intptr_t)v794;
	i8 v796 = v795+(+12);
	i8 v797 = (i8)(intptr_t)(ws+1184);
	*(i8*)(intptr_t)v797 = v796;


	
*(i4*)(intptr_t)(ws+1192) 
=pread( 
*(i4*)(intptr_t)(ws+1176) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1184) 
,  
*(i2*)(intptr_t)(ws+1172) 
,  
*(i4*)(intptr_t)(ws+1168) 
); 



	i8 v798 = (i8)(intptr_t)(ws+1192);
	i4 v799 = *(i4*)(intptr_t)v798;
	i4 v800 = (i4)-1;
	if (v799==v800) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v801 = (i2)+0;
	i8 v802 = (i8)(intptr_t)(ws+1174);
	*(i2*)(intptr_t)v802 = v801;

	i8 v803 = (i8)(intptr_t)(ws+1160);
	i8 v804 = *(i8*)(intptr_t)v803;
	i8 v805 = v804+(+524);
	i1 v806 = *(i1*)(intptr_t)v805;
	i1 v807 = v806|(+1);
	i8 v808 = (i8)(intptr_t)(ws+1160);
	i8 v809 = *(i8*)(intptr_t)v808;
	i8 v810 = v809+(+524);
	*(i1*)(intptr_t)v810 = v807;

	goto c02_00d3;

c02_00d7:;

	i8 v811 = (i8)(intptr_t)(ws+1192);
	i4 v812 = *(i4*)(intptr_t)v811;
	i2 v813 = (s2)(s4)v812;
	i8 v814 = (i8)(intptr_t)(ws+1174);
	*(i2*)(intptr_t)v814 = v813;

c02_00d3:;

}

// FCBRawWrite workspace at ws+1152 length ws+36
void f40_FCBRawWrite(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v815 = (i8)(intptr_t)(ws+1152);
	i8 v816 = *(i8*)(intptr_t)v815;
	i4 v817 = *(i4*)(intptr_t)v816;
	i8 v818 = (i8)(intptr_t)(ws+1168);
	*(i4*)(intptr_t)v818 = v817;

	i8 v819 = (i8)(intptr_t)(ws+1152);
	i8 v820 = *(i8*)(intptr_t)v819;
	i8 v821 = v820+(+12);
	i8 v822 = (i8)(intptr_t)(ws+1176);
	*(i8*)(intptr_t)v822 = v821;


	
*(i4*)(intptr_t)(ws+1184) 
=pwrite( 
*(i4*)(intptr_t)(ws+1168) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1176) 
,  
*(i2*)(intptr_t)(ws+1164) 
,  
*(i4*)(intptr_t)(ws+1160) 
); 



	i8 v823 = (i8)(intptr_t)(ws+1184);
	i4 v824 = *(i4*)(intptr_t)v823;
	i4 v825 = (i4)-1;
	if (v824==v825) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v826 = (i8)(intptr_t)(ws+1152);
	i8 v827 = *(i8*)(intptr_t)v826;
	i8 v828 = v827+(+524);
	i1 v829 = *(i1*)(intptr_t)v828;
	i1 v830 = v829|(+1);
	i8 v831 = (i8)(intptr_t)(ws+1152);
	i8 v832 = *(i8*)(intptr_t)v831;
	i8 v833 = v832+(+524);
	*(i1*)(intptr_t)v833 = v830;

c02_00dc:;

c02_00d8:;

}
	void f41__fcb_init(void);

// fcb_i_open workspace at ws+1080 length ws+28
void f51_fcb_i_open(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v834 = (i8)(intptr_t)(ws+1080);
	i8 v835 = *(i8*)(intptr_t)v834;
	*(i8*)(intptr_t)(ws+1112) = v835;
	i8 v836 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(void))(intptr_t)v836)();


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+1104) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1088) 
,  
*(i4*)(intptr_t)(ws+1096) 
,  
(+438)
); 



	i8 v837 = (i8)(intptr_t)(ws+1104);
	i4 v838 = *(i4*)(intptr_t)v837;
	i8 v839 = (i8)(intptr_t)(ws+1080);
	i8 v840 = *(i8*)(intptr_t)v839;
	*(i4*)(intptr_t)v840 = v838;

	i8 v841 = (i8)(intptr_t)(ws+1104);
	i4 v842 = *(i4*)(intptr_t)v841;
	i4 v843 = (i4)+0;
	if ((s4)v842<(s4)v843) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+1100) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v844 = (i1)+0;
	i8 v845 = (i8)(intptr_t)(ws+1100);
	*(i1*)(intptr_t)v845 = v844;

c02_00dd:;

}
	void f51_fcb_i_open(void);

// FCBOpenIn workspace at ws+1056 length ws+18
void f52_FCBOpenIn(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v846 = (i8)(intptr_t)(ws+1056);
	i8 v847 = *(i8*)(intptr_t)v846;
	*(i8*)(intptr_t)(ws+1080) = v847;
	i8 v848 = (i8)(intptr_t)(ws+1064);
	i8 v849 = *(i8*)(intptr_t)v848;
	*(i8*)(intptr_t)(ws+1088) = v849;
	i4 v850 = (i4)+0;
	*(i4*)(intptr_t)(ws+1096) = v850;
	i8 v851 = (i8)(intptr_t)(f51_fcb_i_open);

	((void(*)(void))(intptr_t)v851)();

	i1 v852 = *(i1*)(intptr_t)(ws+1100);
	i8 v853 = (i8)(intptr_t)(ws+1073);
	*(i1*)(intptr_t)v853 = v852;

	i8 v854 = (i8)(intptr_t)(ws+1073);
	i1 v855 = *(i1*)(intptr_t)v854;
	i8 v856 = (i8)(intptr_t)(ws+1072);
	*(i1*)(intptr_t)v856 = v855;

}
	void f51_fcb_i_open(void);

// FCBOpenOut workspace at ws+848 length ws+18
void f54_FCBOpenOut(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v868 = (i8)(intptr_t)(ws+848);
	i8 v869 = *(i8*)(intptr_t)v868;
	*(i8*)(intptr_t)(ws+1080) = v869;
	i8 v870 = (i8)(intptr_t)(ws+856);
	i8 v871 = *(i8*)(intptr_t)v870;
	*(i8*)(intptr_t)(ws+1088) = v871;
	i4 v872 = (i4)+578;
	*(i4*)(intptr_t)(ws+1096) = v872;
	i8 v873 = (i8)(intptr_t)(f51_fcb_i_open);

	((void(*)(void))(intptr_t)v873)();

	i1 v874 = *(i1*)(intptr_t)(ws+1100);
	i8 v875 = (i8)(intptr_t)(ws+865);
	*(i1*)(intptr_t)v875 = v874;

	i8 v876 = (i8)(intptr_t)(ws+865);
	i1 v877 = *(i1*)(intptr_t)v876;
	i8 v878 = (i8)(intptr_t)(ws+864);
	*(i1*)(intptr_t)v878 = v877;

}
	void f44_FCBFlush(void);

// FCBClose workspace at ws+840 length ws+16
void f55_FCBClose(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v879 = (i8)(intptr_t)(ws+840);
	i8 v880 = *(i8*)(intptr_t)v879;
	*(i8*)(intptr_t)(ws+1136) = v880;
	i8 v881 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(void))(intptr_t)v881)();

	i8 v882 = (i8)(intptr_t)(ws+840);
	i8 v883 = *(i8*)(intptr_t)v882;
	i4 v884 = *(i4*)(intptr_t)v883;
	i8 v885 = (i8)(intptr_t)(ws+852);
	*(i4*)(intptr_t)v885 = v884;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+852) 
); 


	
*(i1*)(intptr_t)(ws+848) 
 = errno; 



}
const i1 c02_s0001[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(void);

// StartError workspace at ws+1064 length ws+0
void f60_StartError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v952 = (i8)(intptr_t)c02_s0001;
	*(i8*)(intptr_t)(ws+3344) = v952;
	i8 v953 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v953)();

}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+1064 length ws+0
void f61_EndError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v954 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v954)();

	i8 v955 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v955)();

}
	void f60_StartError(void);
	void f12_print(void);
	void f61_EndError(void);

// SimpleError workspace at ws+912 length ws+8
void f62_SimpleError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v956 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v956)();

	i8 v957 = (i8)(intptr_t)(ws+912);
	i8 v958 = *(i8*)(intptr_t)v957;
	*(i8*)(intptr_t)(ws+3344) = v958;
	i8 v959 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v959)();

	i8 v960 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v960)();

}
	void f60_StartError(void);
const i1 c02_s0002[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0003[] = { 0x27,0 };
	void f12_print(void);
	void f61_EndError(void);

// CannotOpen workspace at ws+1056 length ws+8
void f63_CannotOpen(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v961 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v961)();

	i8 v962 = (i8)(intptr_t)c02_s0002;
	*(i8*)(intptr_t)(ws+3344) = v962;
	i8 v963 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v963)();

	i8 v964 = (i8)(intptr_t)(ws+1056);
	i8 v965 = *(i8*)(intptr_t)v964;
	*(i8*)(intptr_t)(ws+3344) = v965;
	i8 v966 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v966)();

	i8 v967 = (i8)(intptr_t)c02_s0003;
	*(i8*)(intptr_t)(ws+3344) = v967;
	i8 v968 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v968)();

	i8 v969 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v969)();

}
	void f47_FCBPutChar(void);

// E_b8 workspace at ws+1032 length ws+1
void f64_E_b8(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v970 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)(ws+1040) = v970;
	i8 v971 = (i8)(intptr_t)(ws+1032);
	i1 v972 = *(i1*)(intptr_t)v971;
	*(i1*)(intptr_t)(ws+1048) = v972;
	i8 v973 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(void))(intptr_t)v973)();

}
	void f64_E_b8(void);

// E workspace at ws+1016 length ws+9
void f65_E(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

c02_00f5:;

	i8 v974 = (i8)(intptr_t)(ws+1016);
	i8 v975 = *(i8*)(intptr_t)v974;
	i1 v976 = *(i1*)(intptr_t)v975;
	i8 v977 = (i8)(intptr_t)(ws+1024);
	*(i1*)(intptr_t)v977 = v976;

	i8 v978 = (i8)(intptr_t)(ws+1016);
	i8 v979 = *(i8*)(intptr_t)v978;
	i8 v980 = v979+(+1);
	i8 v981 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v981 = v980;

	i8 v982 = (i8)(intptr_t)(ws+1024);
	i1 v983 = *(i1*)(intptr_t)v982;
	i1 v984 = (i1)+0;
	if (v983==v984) goto c02_00fa; else goto c02_00fb;

c02_00fa:;

	goto c02_00f6;

c02_00fb:;

c02_00f7:;

	i8 v985 = (i8)(intptr_t)(ws+1024);
	i1 v986 = *(i1*)(intptr_t)v985;
	*(i1*)(intptr_t)(ws+1032) = v986;
	i8 v987 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v987)();

	goto c02_00f5;

c02_00f6:;

}
	void f14_UIToA(void);
	void f64_E_b8(void);

// E_u32 workspace at ws+984 length ws+41
void f66_E_u32(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v988 = (i8)(intptr_t)(ws+988);
	i8 v989 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v989 = v988;

	i8 v990 = (i8)(intptr_t)(ws+984);
	i4 v991 = *(i4*)(intptr_t)v990;
	*(i4*)(intptr_t)(ws+3344) = v991;
	i1 v992 = (i1)+10;
	*(i1*)(intptr_t)(ws+3348) = v992;
	i8 v993 = (i8)(intptr_t)(ws+1000);
	i8 v994 = *(i8*)(intptr_t)v993;
	*(i8*)(intptr_t)(ws+3352) = v994;
	i8 v995 = (i8)(intptr_t)(f14_UIToA);

	((void(*)(void))(intptr_t)v995)();

	i8 v996 = *(i8*)(intptr_t)(ws+3360);
	i8 v997 = (i8)(intptr_t)(ws+1008);
	*(i8*)(intptr_t)v997 = v996;

	i8 v998 = (i8)(intptr_t)(ws+1008);
	i8 v999 = *(i8*)(intptr_t)v998;
	i8 v1000 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v1000 = v999;

c02_00fc:;

	i8 v1001 = (i8)(intptr_t)(ws+1000);
	i8 v1002 = *(i8*)(intptr_t)v1001;
	i1 v1003 = *(i1*)(intptr_t)v1002;
	i8 v1004 = (i8)(intptr_t)(ws+1024);
	*(i1*)(intptr_t)v1004 = v1003;

	i8 v1005 = (i8)(intptr_t)(ws+1024);
	i1 v1006 = *(i1*)(intptr_t)v1005;
	i1 v1007 = (i1)+0;
	if (v1006==v1007) goto c02_0101; else goto c02_0102;

c02_0101:;

	goto c02_00fd;

c02_0102:;

c02_00fe:;

	i8 v1008 = (i8)(intptr_t)(ws+1024);
	i1 v1009 = *(i1*)(intptr_t)v1008;
	*(i1*)(intptr_t)(ws+1032) = v1009;
	i8 v1010 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v1010)();

	i8 v1011 = (i8)(intptr_t)(ws+1000);
	i8 v1012 = *(i8*)(intptr_t)v1011;
	i8 v1013 = v1012+(+1);
	i8 v1014 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v1014 = v1013;

	goto c02_00fc;

c02_00fd:;

}
	void f66_E_u32(void);

// E_u16 workspace at ws+976 length ws+2
void f67_E_u16(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1015 = (i8)(intptr_t)(ws+976);
	i2 v1016 = *(i2*)(intptr_t)v1015;
	i4 v1017 = v1016;
	*(i4*)(intptr_t)(ws+984) = v1017;
	i8 v1018 = (i8)(intptr_t)(f66_E_u32);

	((void(*)(void))(intptr_t)v1018)();

}
	void f14_UIToA(void);
	void f64_E_b8(void);
	void f65_E(void);

// E_h workspace at ws+976 length ws+33
void f70_E_h(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1037 = (i8)(intptr_t)(ws+976);
	i4 v1038 = *(i4*)(intptr_t)v1037;
	*(i4*)(intptr_t)(ws+3344) = v1038;
	i1 v1039 = (i1)+16;
	*(i1*)(intptr_t)(ws+3348) = v1039;
	i8 v1040 = (i8)(intptr_t)(ws+981);
	*(i8*)(intptr_t)(ws+3352) = v1040;
	i8 v1041 = (i8)(intptr_t)(f14_UIToA);

	((void(*)(void))(intptr_t)v1041)();

	i8 v1042 = *(i8*)(intptr_t)(ws+3360);
	i8 v1043 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v1043 = v1042;

	i8 v1044 = (i8)(intptr_t)(ws+992);
	i8 v1045 = *(i8*)(intptr_t)v1044;
	i8 v1046 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v1046 = v1045;

	i8 v1047 = (i8)(intptr_t)(ws+980);
	i1 v1048 = *(i1*)(intptr_t)v1047;
	i8 v1049 = (i8)(intptr_t)(ws+1000);
	i8 v1050 = *(i8*)(intptr_t)v1049;
	i8 v1051 = (i8)(intptr_t)(ws+981);
	i8 v1052 = v1050-v1051;
	i1 v1053 = v1052;
	i1 v1054 = v1048-v1053;
	i8 v1055 = (i8)(intptr_t)(ws+1008);
	*(i1*)(intptr_t)v1055 = v1054;

c02_0108:;

	i8 v1056 = (i8)(intptr_t)(ws+1008);
	i1 v1057 = *(i1*)(intptr_t)v1056;
	i1 v1058 = (i1)+0;
	if (v1057==v1058) goto c02_010d; else goto c02_010c;

c02_010c:;

	i1 v1059 = (i1)+48;
	*(i1*)(intptr_t)(ws+1032) = v1059;
	i8 v1060 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v1060)();

	i8 v1061 = (i8)(intptr_t)(ws+1008);
	i1 v1062 = *(i1*)(intptr_t)v1061;
	i1 v1063 = v1062+(-1);
	i8 v1064 = (i8)(intptr_t)(ws+1008);
	*(i1*)(intptr_t)v1064 = v1063;

	goto c02_0108;

c02_010d:;

	i8 v1065 = (i8)(intptr_t)(ws+981);
	*(i8*)(intptr_t)(ws+1016) = v1065;
	i8 v1066 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1066)();

}
	void f70_E_h(void);

// E_h8 workspace at ws+968 length ws+1
void f71_E_h8(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1067 = (i8)(intptr_t)(ws+968);
	i1 v1068 = *(i1*)(intptr_t)v1067;
	i4 v1069 = v1068;
	*(i4*)(intptr_t)(ws+976) = v1069;
	i1 v1070 = (i1)+2;
	*(i1*)(intptr_t)(ws+980) = v1070;
	i8 v1071 = (i8)(intptr_t)(f70_E_h);

	((void(*)(void))(intptr_t)v1071)();

}
	void f70_E_h(void);

// E_h16 workspace at ws+840 length ws+2
void f72_E_h16(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1072 = (i8)(intptr_t)(ws+840);
	i2 v1073 = *(i2*)(intptr_t)v1072;
	i4 v1074 = v1073;
	*(i4*)(intptr_t)(ws+976) = v1074;
	i1 v1075 = (i1)+4;
	*(i1*)(intptr_t)(ws+980) = v1075;
	i8 v1076 = (i8)(intptr_t)(f70_E_h);

	((void(*)(void))(intptr_t)v1076)();

}
	void f54_FCBOpenOut(void);
const i1 c02_s0004[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f62_SimpleError(void);

// EmitterOpenfile workspace at ws+832 length ws+9
void f73_EmitterOpenfile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1077 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)(ws+848) = v1077;
	i8 v1078 = (i8)(intptr_t)(ws+832);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	*(i8*)(intptr_t)(ws+856) = v1079;
	i8 v1080 = (i8)(intptr_t)(f54_FCBOpenOut);

	((void(*)(void))(intptr_t)v1080)();

	i1 v1081 = *(i1*)(intptr_t)(ws+864);
	i8 v1082 = (i8)(intptr_t)(ws+840);
	*(i1*)(intptr_t)v1082 = v1081;

	i8 v1083 = (i8)(intptr_t)(ws+840);
	i1 v1084 = *(i1*)(intptr_t)v1083;
	i1 v1085 = (i1)+0;
	if (v1084==v1085) goto c02_0112; else goto c02_0111;

c02_0111:;

	i8 v1086 = (i8)(intptr_t)c02_s0004;
	*(i8*)(intptr_t)(ws+912) = v1086;
	i8 v1087 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(void))(intptr_t)v1087)();

c02_0112:;

c02_010e:;

}
	void f55_FCBClose(void);
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f62_SimpleError(void);

// EmitterClosefile workspace at ws+832 length ws+1
void f74_EmitterClosefile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1088 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)(ws+840) = v1088;
	i8 v1089 = (i8)(intptr_t)(f55_FCBClose);

	((void(*)(void))(intptr_t)v1089)();

	i1 v1090 = *(i1*)(intptr_t)(ws+848);
	i8 v1091 = (i8)(intptr_t)(ws+832);
	*(i1*)(intptr_t)v1091 = v1090;

	i8 v1092 = (i8)(intptr_t)(ws+832);
	i1 v1093 = *(i1*)(intptr_t)v1092;
	i1 v1094 = (i1)+0;
	if (v1093==v1094) goto c02_0117; else goto c02_0116;

c02_0116:;

	i8 v1095 = (i8)(intptr_t)c02_s0005;
	*(i8*)(intptr_t)(ws+912) = v1095;
	i8 v1096 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(void))(intptr_t)v1096)();

c02_0117:;

c02_0113:;

}

// ArchAlignUp workspace at ws+3304 length ws+8
void f75_ArchAlignUp(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1097 = (i8)(intptr_t)(ws+3306);
	i1 v1098 = *(i1*)(intptr_t)v1097;
	i1 v1099 = v1098+(-1);
	i2 v1100 = v1099;
	i8 v1101 = (i8)(intptr_t)(ws+3310);
	*(i2*)(intptr_t)v1101 = v1100;

	i8 v1102 = (i8)(intptr_t)(ws+3304);
	i2 v1103 = *(i2*)(intptr_t)v1102;
	i8 v1104 = (i8)(intptr_t)(ws+3310);
	i2 v1105 = *(i2*)(intptr_t)v1104;
	i2 v1106 = v1103+v1105;
	i8 v1107 = (i8)(intptr_t)(ws+3310);
	i2 v1108 = *(i2*)(intptr_t)v1107;
	i2 v1109 = ~v1108;
	i2 v1110 = v1106&v1109;
	i8 v1111 = (i8)(intptr_t)(ws+3308);
	*(i2*)(intptr_t)v1111 = v1110;

}
	void f64_E_b8(void);

// E_nl workspace at ws+968 length ws+0
void f76_E_nl(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v1112 = (i1)+10;
	*(i1*)(intptr_t)(ws+1032) = v1112;
	i8 v1113 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v1113)();

}
	void f64_E_b8(void);
	void f67_E_u16(void);
	void f64_E_b8(void);
	void f65_E(void);

// ArchEmitSubRef workspace at ws+968 length ws+8
void f77_ArchEmitSubRef(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v1114 = (i1)+102;
	*(i1*)(intptr_t)(ws+1032) = v1114;
	i8 v1115 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v1115)();

	i8 v1116 = (i8)(intptr_t)(ws+968);
	i8 v1117 = *(i8*)(intptr_t)v1116;
	i8 v1118 = v1117+(+202);
	i2 v1119 = *(i2*)(intptr_t)v1118;
	*(i2*)(intptr_t)(ws+976) = v1119;
	i8 v1120 = (i8)(intptr_t)(f67_E_u16);

	((void(*)(void))(intptr_t)v1120)();

	i1 v1121 = (i1)+95;
	*(i1*)(intptr_t)(ws+1032) = v1121;
	i8 v1122 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v1122)();

	i8 v1123 = (i8)(intptr_t)(ws+968);
	i8 v1124 = *(i8*)(intptr_t)v1123;
	i8 v1125 = v1124+(+168);
	i8 v1126 = *(i8*)(intptr_t)v1125;
	*(i8*)(intptr_t)(ws+1016) = v1126;
	i8 v1127 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1127)();

}
const i1 c02_s0006[] = { 0x77,0x73,0x2b,0 };
	void f65_E(void);
	void f67_E_u16(void);

// ArchEmitWSRef workspace at ws+968 length ws+4
void f78_ArchEmitWSRef(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1128 = (i8)(intptr_t)c02_s0006;
	*(i8*)(intptr_t)(ws+1016) = v1128;
	i8 v1129 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1129)();

	i8 v1130 = (i8)(intptr_t)(ws+970);
	i2 v1131 = *(i2*)(intptr_t)v1130;
	*(i2*)(intptr_t)(ws+976) = v1131;
	i8 v1132 = (i8)(intptr_t)(f67_E_u16);

	((void(*)(void))(intptr_t)v1132)();

}
const i1 c02_s0007[] = { 0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x22,0x63,0x6f,0x77,0x67,0x6f,0x6c,0x2e,0x68,0x22,0x0a,0 };
	void f65_E(void);
const i1 c02_s0008[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x38,0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x5b,0x30,0x78,0 };
	void f65_E(void);
	void f72_E_h16(void);
const i1 c02_s0009[] = { 0x5d,0x3b,0x0a,0 };
	void f65_E(void);
const i1 c02_s000a[] = { 0x23,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0x77,0x73,0x20,0x28,0x28,0x69,0x31,0x2a,0x29,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x29,0x0a,0 };
	void f65_E(void);

// ArchEmitHeader workspace at ws+832 length ws+8
void f79_ArchEmitHeader(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1133 = (i8)(intptr_t)c02_s0007;
	*(i8*)(intptr_t)(ws+1016) = v1133;
	i8 v1134 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1134)();

	i8 v1135 = (i8)(intptr_t)c02_s0008;
	*(i8*)(intptr_t)(ws+1016) = v1135;
	i8 v1136 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1136)();

	i8 v1137 = (i8)(intptr_t)(ws+582);
	i2 v1138 = *(i2*)(intptr_t)v1137;
	i2 v1139 = v1138+(+7);
	i1 v1140 = (i1)+3;
	i2 v1141 = ((i2)v1139)>>v1140;
	*(i2*)(intptr_t)(ws+840) = v1141;
	i8 v1142 = (i8)(intptr_t)(f72_E_h16);

	((void(*)(void))(intptr_t)v1142)();

	i8 v1143 = (i8)(intptr_t)c02_s0009;
	*(i8*)(intptr_t)(ws+1016) = v1143;
	i8 v1144 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1144)();

	i8 v1145 = (i8)(intptr_t)c02_s000a;
	*(i8*)(intptr_t)(ws+1016) = v1145;
	i8 v1146 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1146)();

}
const i1 c02_s000b[] = { 0x76,0x6f,0x69,0x64,0x20,0x63,0x6d,0x61,0x69,0x6e,0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
	void f65_E(void);
	void f64_E_b8(void);
	void f77_ArchEmitSubRef(void);
const i1 c02_s000c[] = { 0x28,0x29,0x3b,0x0a,0 };
	void f65_E(void);
const i1 c02_s000d[] = { 0x7d,0x0a,0 };
	void f65_E(void);

// ArchEmitFooter workspace at ws+832 length ws+16
void f80_ArchEmitFooter(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1147 = (i8)(intptr_t)c02_s000b;
	*(i8*)(intptr_t)(ws+1016) = v1147;
	i8 v1148 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1148)();

c02_0118:;

	i8 v1149 = (i8)(intptr_t)(ws+832);
	i8 v1150 = *(i8*)(intptr_t)v1149;
	i8 v1151 = (i8)+0;
	if (v1150==v1151) goto c02_011d; else goto c02_011c;

c02_011c:;

	i8 v1152 = (i8)(intptr_t)(ws+832);
	i8 v1153 = *(i8*)(intptr_t)v1152;
	i8 v1154 = v1153+(+544);
	i8 v1155 = *(i8*)(intptr_t)v1154;
	i8 v1156 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v1156 = v1155;

	i8 v1157 = (i8)(intptr_t)(ws+840);
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = (i8)+0;
	if (v1158==v1159) goto c02_0122; else goto c02_0121;

c02_0121:;

	i1 v1160 = (i1)+9;
	*(i1*)(intptr_t)(ws+1032) = v1160;
	i8 v1161 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v1161)();

	i8 v1162 = (i8)(intptr_t)(ws+840);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	*(i8*)(intptr_t)(ws+968) = v1163;
	i8 v1164 = (i8)(intptr_t)(f77_ArchEmitSubRef);

	((void(*)(void))(intptr_t)v1164)();

	i8 v1165 = (i8)(intptr_t)c02_s000c;
	*(i8*)(intptr_t)(ws+1016) = v1165;
	i8 v1166 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1166)();

c02_0122:;

c02_011e:;

	i8 v1167 = (i8)(intptr_t)(ws+832);
	i8 v1168 = *(i8*)(intptr_t)v1167;
	i8 v1169 = v1168+(+672);
	i8 v1170 = *(i8*)(intptr_t)v1169;
	i8 v1171 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v1171 = v1170;

	goto c02_0118;

c02_011d:;

	i8 v1172 = (i8)(intptr_t)c02_s000d;
	*(i8*)(intptr_t)(ws+1016) = v1172;
	i8 v1173 = (i8)(intptr_t)(f65_E);

	((void(*)(void))(intptr_t)v1173)();

}
	void f46_FCBGetChar(void);

// read_bin1 workspace at ws+1104 length ws+10
void f81_read_bin1(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1176 = (i8)(intptr_t)(ws+1104);
	i8 v1177 = *(i8*)(intptr_t)v1176;
	*(i8*)(intptr_t)(ws+1120) = v1177;
	i8 v1178 = (i8)(intptr_t)(f46_FCBGetChar);

	((void(*)(void))(intptr_t)v1178)();

	i1 v1179 = *(i1*)(intptr_t)(ws+1128);
	i8 v1180 = (i8)(intptr_t)(ws+1113);
	*(i1*)(intptr_t)v1180 = v1179;

	i8 v1181 = (i8)(intptr_t)(ws+1113);
	i1 v1182 = *(i1*)(intptr_t)v1181;
	i8 v1183 = (i8)(intptr_t)(ws+1112);
	*(i1*)(intptr_t)v1183 = v1182;

}
	void f81_read_bin1(void);
	void f81_read_bin1(void);

// read_bin2 workspace at ws+1056 length ws+12
void f82_read_bin2(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1184 = (i8)(intptr_t)(ws+1056);
	i8 v1185 = *(i8*)(intptr_t)v1184;
	*(i8*)(intptr_t)(ws+1104) = v1185;
	i8 v1186 = (i8)(intptr_t)(f81_read_bin1);

	((void(*)(void))(intptr_t)v1186)();

	i1 v1187 = *(i1*)(intptr_t)(ws+1112);
	i8 v1188 = (i8)(intptr_t)(ws+1066);
	*(i1*)(intptr_t)v1188 = v1187;

	i8 v1189 = (i8)(intptr_t)(ws+1066);
	i1 v1190 = *(i1*)(intptr_t)v1189;
	i2 v1191 = v1190;
	i8 v1192 = (i8)(intptr_t)(ws+1064);
	*(i2*)(intptr_t)v1192 = v1191;

	i8 v1193 = (i8)(intptr_t)(ws+1056);
	i8 v1194 = *(i8*)(intptr_t)v1193;
	*(i8*)(intptr_t)(ws+1104) = v1194;
	i8 v1195 = (i8)(intptr_t)(f81_read_bin1);

	((void(*)(void))(intptr_t)v1195)();

	i1 v1196 = *(i1*)(intptr_t)(ws+1112);
	i8 v1197 = (i8)(intptr_t)(ws+1067);
	*(i1*)(intptr_t)v1197 = v1196;

	i8 v1198 = (i8)(intptr_t)(ws+1064);
	i2 v1199 = *(i2*)(intptr_t)v1198;
	i8 v1200 = (i8)(intptr_t)(ws+1067);
	i1 v1201 = *(i1*)(intptr_t)v1200;
	i2 v1202 = v1201;
	i1 v1203 = (i1)+8;
	i2 v1204 = ((i2)v1202)<<v1203;
	i2 v1205 = v1199|v1204;
	i8 v1206 = (i8)(intptr_t)(ws+1064);
	*(i2*)(intptr_t)v1206 = v1205;

}
	void f33_Alloc(void);
	void f81_read_bin1(void);

// read_string workspace at ws+1056 length ws+41
void f83_read_string(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1207 = (i8)(intptr_t)(ws+1064);
	i1 v1208 = *(i1*)(intptr_t)v1207;
	i1 v1209 = v1208+(+1);
	i8 v1210 = v1209;
	*(i8*)(intptr_t)(ws+1144) = v1210;
	i8 v1211 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1211)();

	i8 v1212 = *(i8*)(intptr_t)(ws+1152);
	i8 v1213 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1213 = v1212;

	i8 v1214 = (i8)(intptr_t)(ws+1080);
	i8 v1215 = *(i8*)(intptr_t)v1214;
	i8 v1216 = (i8)(intptr_t)(ws+1072);
	*(i8*)(intptr_t)v1216 = v1215;

	i8 v1217 = (i8)(intptr_t)(ws+1072);
	i8 v1218 = *(i8*)(intptr_t)v1217;
	i8 v1219 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v1219 = v1218;

c02_0123:;

	i8 v1220 = (i8)(intptr_t)(ws+1064);
	i1 v1221 = *(i1*)(intptr_t)v1220;
	i1 v1222 = (i1)+0;
	if (v1221==v1222) goto c02_0128; else goto c02_0129;

c02_0128:;

	goto c02_0124;

c02_0129:;

c02_0125:;

	i8 v1223 = (i8)(intptr_t)(ws+1056);
	i8 v1224 = *(i8*)(intptr_t)v1223;
	*(i8*)(intptr_t)(ws+1104) = v1224;
	i8 v1225 = (i8)(intptr_t)(f81_read_bin1);

	((void(*)(void))(intptr_t)v1225)();

	i1 v1226 = *(i1*)(intptr_t)(ws+1112);
	i8 v1227 = (i8)(intptr_t)(ws+1096);
	*(i1*)(intptr_t)v1227 = v1226;

	i8 v1228 = (i8)(intptr_t)(ws+1096);
	i1 v1229 = *(i1*)(intptr_t)v1228;
	i8 v1230 = (i8)(intptr_t)(ws+1088);
	i8 v1231 = *(i8*)(intptr_t)v1230;
	*(i1*)(intptr_t)v1231 = v1229;

	i8 v1232 = (i8)(intptr_t)(ws+1088);
	i8 v1233 = *(i8*)(intptr_t)v1232;
	i8 v1234 = v1233+(+1);
	i8 v1235 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v1235 = v1234;

	i8 v1236 = (i8)(intptr_t)(ws+1064);
	i1 v1237 = *(i1*)(intptr_t)v1236;
	i1 v1238 = v1237+(-1);
	i8 v1239 = (i8)(intptr_t)(ws+1064);
	*(i1*)(intptr_t)v1239 = v1238;

	goto c02_0123;

c02_0124:;

}
	void f33_Alloc(void);

// AddRef workspace at ws+1056 length ws+40
void f84_AddRef(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1240 = (i8)(intptr_t)(ws+1056);
	i8 v1241 = *(i8*)(intptr_t)v1240;
	i8 v1242 = v1241+(+200);
	i2 v1243 = *(i2*)(intptr_t)v1242;
	i8 v1244 = (i8)(intptr_t)(ws+1074);
	*(i2*)(intptr_t)v1244 = v1243;

	i8 v1245 = (i8)(intptr_t)(ws+1074);
	i2 v1246 = *(i2*)(intptr_t)v1245;
	i2 v1247 = v1246+(+1);
	i8 v1248 = (i8)(intptr_t)(ws+1056);
	i8 v1249 = *(i8*)(intptr_t)v1248;
	i8 v1250 = v1249+(+200);
	*(i2*)(intptr_t)v1250 = v1247;

	i8 v1251 = (i8)(intptr_t)(ws+1056);
	i8 v1252 = *(i8*)(intptr_t)v1251;
	i8 v1253 = v1252+(+16);
	i8 v1254 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1254 = v1253;

c02_012a:;

	i8 v1255 = (i8)(intptr_t)(ws+1074);
	i2 v1256 = *(i2*)(intptr_t)v1255;
	i2 v1257 = (i2)+16;
	if (v1256<v1257) goto c02_012f; else goto c02_012e;

c02_012e:;

	i8 v1258 = (i8)(intptr_t)(ws+1080);
	i8 v1259 = *(i8*)(intptr_t)v1258;
	i8 v1260 = *(i8*)(intptr_t)v1259;
	i8 v1261 = (i8)+0;
	if (v1260==v1261) goto c02_0133; else goto c02_0134;

c02_0133:;

	i8 v1262 = (i8)+152;
	*(i8*)(intptr_t)(ws+1144) = v1262;
	i8 v1263 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1263)();

	i8 v1264 = *(i8*)(intptr_t)(ws+1152);
	i8 v1265 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v1265 = v1264;

	i8 v1266 = (i8)(intptr_t)(ws+1088);
	i8 v1267 = *(i8*)(intptr_t)v1266;
	i8 v1268 = (i8)(intptr_t)(ws+1080);
	i8 v1269 = *(i8*)(intptr_t)v1268;
	*(i8*)(intptr_t)v1269 = v1267;

c02_0134:;

c02_0130:;

	i8 v1270 = (i8)(intptr_t)(ws+1080);
	i8 v1271 = *(i8*)(intptr_t)v1270;
	i8 v1272 = *(i8*)(intptr_t)v1271;
	i8 v1273 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1273 = v1272;

	i8 v1274 = (i8)(intptr_t)(ws+1074);
	i2 v1275 = *(i2*)(intptr_t)v1274;
	i2 v1276 = v1275+(-16);
	i8 v1277 = (i8)(intptr_t)(ws+1074);
	*(i2*)(intptr_t)v1277 = v1276;

	goto c02_012a;

c02_012f:;

	i8 v1278 = (i8)(intptr_t)(ws+1064);
	i8 v1279 = *(i8*)(intptr_t)v1278;
	i8 v1280 = (i8)(intptr_t)(ws+1080);
	i8 v1281 = *(i8*)(intptr_t)v1280;
	i8 v1282 = v1281+(+8);
	i8 v1283 = (i8)(intptr_t)(ws+1074);
	i2 v1284 = *(i2*)(intptr_t)v1283;
	i1 v1285 = v1284;
	i8 v1286 = v1285;
	i1 v1287 = (i1)+3;
	i8 v1288 = ((i8)v1286)<<v1287;
	i8 v1289 = v1282+v1288;
	*(i8*)(intptr_t)v1289 = v1279;

	i8 v1290 = (i8)(intptr_t)(ws+1072);
	i1 v1291 = *(i1*)(intptr_t)v1290;
	i8 v1292 = (i8)(intptr_t)(ws+1080);
	i8 v1293 = *(i8*)(intptr_t)v1292;
	i8 v1294 = v1293+(+136);
	i8 v1295 = (i8)(intptr_t)(ws+1074);
	i2 v1296 = *(i2*)(intptr_t)v1295;
	i1 v1297 = v1296;
	i8 v1298 = v1297;
	i8 v1299 = v1294+v1298;
	*(i1*)(intptr_t)v1299 = v1291;

}
	void f33_Alloc(void);

// FindSub workspace at ws+1104 length ws+40
void f85_FindSub(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1300 = (i8)(intptr_t)(ws+1104);
	i8 v1301 = *(i8*)(intptr_t)v1300;
	i8 v1302 = v1301+(+536);
	i8 v1303 = (i8)(intptr_t)(ws+1128);
	*(i8*)(intptr_t)v1303 = v1302;

c02_0135:;

	i8 v1304 = (i8)(intptr_t)(ws+1112);
	i2 v1305 = *(i2*)(intptr_t)v1304;
	i2 v1306 = (i2)+16;
	if (v1305<v1306) goto c02_013a; else goto c02_0139;

c02_0139:;

	i8 v1307 = (i8)(intptr_t)(ws+1128);
	i8 v1308 = *(i8*)(intptr_t)v1307;
	i8 v1309 = *(i8*)(intptr_t)v1308;
	i8 v1310 = (i8)+0;
	if (v1309==v1310) goto c02_013e; else goto c02_013f;

c02_013e:;

	i8 v1311 = (i8)+136;
	*(i8*)(intptr_t)(ws+1144) = v1311;
	i8 v1312 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1312)();

	i8 v1313 = *(i8*)(intptr_t)(ws+1152);
	i8 v1314 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1314 = v1313;

	i8 v1315 = (i8)(intptr_t)(ws+1136);
	i8 v1316 = *(i8*)(intptr_t)v1315;
	i8 v1317 = (i8)(intptr_t)(ws+1128);
	i8 v1318 = *(i8*)(intptr_t)v1317;
	*(i8*)(intptr_t)v1318 = v1316;

c02_013f:;

c02_013b:;

	i8 v1319 = (i8)(intptr_t)(ws+1128);
	i8 v1320 = *(i8*)(intptr_t)v1319;
	i8 v1321 = *(i8*)(intptr_t)v1320;
	i8 v1322 = (i8)(intptr_t)(ws+1128);
	*(i8*)(intptr_t)v1322 = v1321;

	i8 v1323 = (i8)(intptr_t)(ws+1112);
	i2 v1324 = *(i2*)(intptr_t)v1323;
	i2 v1325 = v1324+(-16);
	i8 v1326 = (i8)(intptr_t)(ws+1112);
	*(i2*)(intptr_t)v1326 = v1325;

	goto c02_0135;

c02_013a:;

	i8 v1327 = (i8)(intptr_t)(ws+1128);
	i8 v1328 = *(i8*)(intptr_t)v1327;
	i8 v1329 = v1328+(+8);
	i8 v1330 = (i8)(intptr_t)(ws+1112);
	i2 v1331 = *(i2*)(intptr_t)v1330;
	i1 v1332 = v1331;
	i8 v1333 = v1332;
	i1 v1334 = (i1)+3;
	i8 v1335 = ((i8)v1333)<<v1334;
	i8 v1336 = v1329+v1335;
	i8 v1337 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1337 = v1336;

}
	void f85_FindSub(void);
	void f33_Alloc(void);

// FindOrCreateSub workspace at ws+1056 length ws+48
void f86_FindOrCreateSub(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1338 = (i8)(intptr_t)(ws+1056);
	i8 v1339 = *(i8*)(intptr_t)v1338;
	*(i8*)(intptr_t)(ws+1104) = v1339;
	i8 v1340 = (i8)(intptr_t)(ws+1064);
	i2 v1341 = *(i2*)(intptr_t)v1340;
	*(i2*)(intptr_t)(ws+1112) = v1341;
	i8 v1342 = (i8)(intptr_t)(f85_FindSub);

	((void(*)(void))(intptr_t)v1342)();

	i8 v1343 = *(i8*)(intptr_t)(ws+1120);
	i8 v1344 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1344 = v1343;

	i8 v1345 = (i8)(intptr_t)(ws+1080);
	i8 v1346 = *(i8*)(intptr_t)v1345;
	i8 v1347 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v1347 = v1346;

	i8 v1348 = (i8)(intptr_t)(ws+1088);
	i8 v1349 = *(i8*)(intptr_t)v1348;
	i8 v1350 = *(i8*)(intptr_t)v1349;
	i8 v1351 = (i8)(intptr_t)(ws+1072);
	*(i8*)(intptr_t)v1351 = v1350;

	i8 v1352 = (i8)(intptr_t)(ws+1072);
	i8 v1353 = *(i8*)(intptr_t)v1352;
	i8 v1354 = (i8)+0;
	if (v1353==v1354) goto c02_0143; else goto c02_0144;

c02_0143:;

	i8 v1355 = (i8)+205;
	*(i8*)(intptr_t)(ws+1144) = v1355;
	i8 v1356 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1356)();

	i8 v1357 = *(i8*)(intptr_t)(ws+1152);
	i8 v1358 = (i8)(intptr_t)(ws+1096);
	*(i8*)(intptr_t)v1358 = v1357;

	i8 v1359 = (i8)(intptr_t)(ws+1096);
	i8 v1360 = *(i8*)(intptr_t)v1359;
	i8 v1361 = (i8)(intptr_t)(ws+1072);
	*(i8*)(intptr_t)v1361 = v1360;

	i8 v1362 = (i8)(intptr_t)(ws+1056);
	i8 v1363 = *(i8*)(intptr_t)v1362;
	i8 v1364 = (i8)(intptr_t)(ws+1072);
	i8 v1365 = *(i8*)(intptr_t)v1364;
	*(i8*)(intptr_t)v1365 = v1363;

	i8 v1366 = (i8)(intptr_t)(ws+32);
	i8 v1367 = *(i8*)(intptr_t)v1366;
	i8 v1368 = (i8)(intptr_t)(ws+1072);
	i8 v1369 = *(i8*)(intptr_t)v1368;
	i8 v1370 = v1369+(+8);
	*(i8*)(intptr_t)v1370 = v1367;

	i8 v1371 = (i8)(intptr_t)(ws+1072);
	i8 v1372 = *(i8*)(intptr_t)v1371;
	i8 v1373 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1373 = v1372;

	i8 v1374 = (i8)(intptr_t)(ws+40);
	i2 v1375 = *(i2*)(intptr_t)v1374;
	i8 v1376 = (i8)(intptr_t)(ws+1072);
	i8 v1377 = *(i8*)(intptr_t)v1376;
	i8 v1378 = v1377+(+202);
	*(i2*)(intptr_t)v1378 = v1375;

	i8 v1379 = (i8)(intptr_t)(ws+1072);
	i8 v1380 = *(i8*)(intptr_t)v1379;
	i8 v1381 = (i8)(intptr_t)(ws+1088);
	i8 v1382 = *(i8*)(intptr_t)v1381;
	*(i8*)(intptr_t)v1382 = v1380;

	i8 v1383 = (i8)(intptr_t)(ws+40);
	i2 v1384 = *(i2*)(intptr_t)v1383;
	i2 v1385 = v1384+(+1);
	i8 v1386 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1386 = v1385;

c02_0144:;

c02_0140:;

}

// Deref workspace at ws+3352 length ws+24
void f87_Deref(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1387 = (i8)(intptr_t)(ws+3352);
	i8 v1388 = *(i8*)(intptr_t)v1387;
	i8 v1389 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v1389 = v1388;

	i8 v1390 = (i8)(intptr_t)(ws+3352);
	i8 v1391 = *(i8*)(intptr_t)v1390;
	i8 v1392 = (i8)+0;
	if (v1391==v1392) goto c02_0149; else goto c02_0148;

c02_0148:;

	i8 v1393 = (i8)(intptr_t)(ws+3352);
	i8 v1394 = *(i8*)(intptr_t)v1393;
	i8 v1395 = v1394+(+176);
	i8 v1396 = *(i8*)(intptr_t)v1395;
	i8 v1397 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v1397 = v1396;

	i8 v1398 = (i8)(intptr_t)(ws+3368);
	i8 v1399 = *(i8*)(intptr_t)v1398;
	i8 v1400 = (i8)+0;
	if (v1399==v1400) goto c02_014e; else goto c02_014d;

c02_014d:;

	i8 v1401 = (i8)(intptr_t)(ws+3368);
	i8 v1402 = *(i8*)(intptr_t)v1401;
	i8 v1403 = v1402+(+16);
	i8 v1404 = *(i8*)(intptr_t)v1403;
	i8 v1405 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v1405 = v1404;

c02_014e:;

c02_014a:;

c02_0149:;

c02_0145:;

}
	void f26_StrCmp(void);
	void f33_Alloc(void);
	void f35_StrDup(void);

// FindOrCreateExternal workspace at ws+1056 length ws+40
void f88_FindOrCreateExternal(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1406 = (i8)(intptr_t)(ws+24);
	i8 v1407 = *(i8*)(intptr_t)v1406;
	i8 v1408 = (i8)(intptr_t)(ws+1064);
	*(i8*)(intptr_t)v1408 = v1407;

c02_014f:;

	i8 v1409 = (i8)(intptr_t)(ws+1064);
	i8 v1410 = *(i8*)(intptr_t)v1409;
	i8 v1411 = (i8)+0;
	if (v1410==v1411) goto c02_0154; else goto c02_0153;

c02_0153:;

	i8 v1412 = (i8)(intptr_t)(ws+1064);
	i8 v1413 = *(i8*)(intptr_t)v1412;
	i8 v1414 = v1413+(+8);
	i8 v1415 = *(i8*)(intptr_t)v1414;
	*(i8*)(intptr_t)(ws+1096) = v1415;
	i8 v1416 = (i8)(intptr_t)(ws+1056);
	i8 v1417 = *(i8*)(intptr_t)v1416;
	*(i8*)(intptr_t)(ws+1104) = v1417;
	i8 v1418 = (i8)(intptr_t)(f26_StrCmp);

	((void(*)(void))(intptr_t)v1418)();

	i1 v1419 = *(i1*)(intptr_t)(ws+1112);
	i8 v1420 = (i8)(intptr_t)(ws+1072);
	*(i1*)(intptr_t)v1420 = v1419;

	i8 v1421 = (i8)(intptr_t)(ws+1072);
	i1 v1422 = *(i1*)(intptr_t)v1421;
	i1 v1423 = (i1)+0;
	if (v1422==v1423) goto c02_0158; else goto c02_0159;

c02_0158:;

	return;

c02_0159:;

c02_0155:;

	i8 v1424 = (i8)(intptr_t)(ws+1064);
	i8 v1425 = *(i8*)(intptr_t)v1424;
	i8 v1426 = *(i8*)(intptr_t)v1425;
	i8 v1427 = (i8)(intptr_t)(ws+1064);
	*(i8*)(intptr_t)v1427 = v1426;

	goto c02_014f;

c02_0154:;

	i8 v1428 = (i8)+24;
	*(i8*)(intptr_t)(ws+1144) = v1428;
	i8 v1429 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1429)();

	i8 v1430 = *(i8*)(intptr_t)(ws+1152);
	i8 v1431 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1431 = v1430;

	i8 v1432 = (i8)(intptr_t)(ws+1080);
	i8 v1433 = *(i8*)(intptr_t)v1432;
	i8 v1434 = (i8)(intptr_t)(ws+1064);
	*(i8*)(intptr_t)v1434 = v1433;

	i8 v1435 = (i8)(intptr_t)(ws+24);
	i8 v1436 = *(i8*)(intptr_t)v1435;
	i8 v1437 = (i8)(intptr_t)(ws+1064);
	i8 v1438 = *(i8*)(intptr_t)v1437;
	*(i8*)(intptr_t)v1438 = v1436;

	i8 v1439 = (i8)(intptr_t)(ws+1056);
	i8 v1440 = *(i8*)(intptr_t)v1439;
	*(i8*)(intptr_t)(ws+1096) = v1440;
	i8 v1441 = (i8)(intptr_t)(f35_StrDup);

	((void(*)(void))(intptr_t)v1441)();

	i8 v1442 = *(i8*)(intptr_t)(ws+1104);
	i8 v1443 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v1443 = v1442;

	i8 v1444 = (i8)(intptr_t)(ws+1088);
	i8 v1445 = *(i8*)(intptr_t)v1444;
	i8 v1446 = (i8)(intptr_t)(ws+1064);
	i8 v1447 = *(i8*)(intptr_t)v1446;
	i8 v1448 = v1447+(+8);
	*(i8*)(intptr_t)v1448 = v1445;

	i8 v1449 = (i8)(intptr_t)(ws+1064);
	i8 v1450 = *(i8*)(intptr_t)v1449;
	i8 v1451 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1451 = v1450;

}
	void f33_Alloc(void);
	void f52_FCBOpenIn(void);
	void f63_CannotOpen(void);
	void f50_FCBSeek(void);
	void f81_read_bin1(void);
	void f82_read_bin2(void);
	void f81_read_bin1(void);
	void f82_read_bin2(void);
	void f86_FindOrCreateSub(void);
	void f82_read_bin2(void);
	void f82_read_bin2(void);
	void f81_read_bin1(void);
	void f86_FindOrCreateSub(void);
	void f86_FindOrCreateSub(void);
	void f84_AddRef(void);
	void f82_read_bin2(void);
	void f86_FindOrCreateSub(void);
	void f81_read_bin1(void);
	void f82_read_bin2(void);
	void f82_read_bin2(void);
	void f86_FindOrCreateSub(void);
	void f83_read_string(void);
	void f82_read_bin2(void);
	void f86_FindOrCreateSub(void);
	void f83_read_string(void);
	void f88_FindOrCreateExternal(void);
	void f60_StartError(void);
const i1 c02_s000e[] = { 0x6d,0x75,0x6c,0x74,0x69,0x70,0x6c,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x64,0x65,0x63,0x6c,0x61,0x72,0x61,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6f,0x66,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s000f[] = { 0x27,0 };
	void f12_print(void);
	void f61_EndError(void);
const i1 c02_s0010[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x27,0 };
	void f12_print(void);
	void f9_print_char(void);
const i1 c02_s0011[] = { 0x27,0x20,0x69,0x6e,0x20,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0012[] = { 0x20,0x61,0x74,0x20,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// OpenAndLoadCoo workspace at ws+872 length ws+184
void f89_OpenAndLoadCoo(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1452 = (i8)+682;
	*(i8*)(intptr_t)(ws+1144) = v1452;
	i8 v1453 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1453)();

	i8 v1454 = *(i8*)(intptr_t)(ws+1152);
	i8 v1455 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v1455 = v1454;

	i8 v1456 = (i8)(intptr_t)(ws+888);
	i8 v1457 = *(i8*)(intptr_t)v1456;
	i8 v1458 = (i8)(intptr_t)(ws+880);
	*(i8*)(intptr_t)v1458 = v1457;

	i8 v1459 = (i8)(intptr_t)(ws+40);
	i2 v1460 = *(i2*)(intptr_t)v1459;
	i8 v1461 = (i8)(intptr_t)(ws+880);
	i8 v1462 = *(i8*)(intptr_t)v1461;
	i8 v1463 = v1462+(+680);
	*(i2*)(intptr_t)v1463 = v1460;

	i8 v1464 = (i8)(intptr_t)(ws+872);
	i8 v1465 = *(i8*)(intptr_t)v1464;
	i8 v1466 = (i8)(intptr_t)(ws+880);
	i8 v1467 = *(i8*)(intptr_t)v1466;
	i8 v1468 = v1467+(+528);
	*(i8*)(intptr_t)v1468 = v1465;

	i8 v1469 = (i8)(intptr_t)(ws+40);
	i2 v1470 = *(i2*)(intptr_t)v1469;
	i2 v1471 = v1470+(+1);
	i8 v1472 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1472 = v1471;

	i8 v1473 = (i8)(intptr_t)(ws+880);
	i8 v1474 = *(i8*)(intptr_t)v1473;
	*(i8*)(intptr_t)(ws+1056) = v1474;
	i8 v1475 = (i8)(intptr_t)(ws+872);
	i8 v1476 = *(i8*)(intptr_t)v1475;
	*(i8*)(intptr_t)(ws+1064) = v1476;
	i8 v1477 = (i8)(intptr_t)(f52_FCBOpenIn);

	((void(*)(void))(intptr_t)v1477)();

	i1 v1478 = *(i1*)(intptr_t)(ws+1072);
	i8 v1479 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v1479 = v1478;

	i8 v1480 = (i8)(intptr_t)(ws+896);
	i1 v1481 = *(i1*)(intptr_t)v1480;
	i1 v1482 = (i1)+0;
	if (v1481==v1482) goto c02_015e; else goto c02_015d;

c02_015d:;

	i8 v1483 = (i8)(intptr_t)(ws+872);
	i8 v1484 = *(i8*)(intptr_t)v1483;
	*(i8*)(intptr_t)(ws+1056) = v1484;
	i8 v1485 = (i8)(intptr_t)(f63_CannotOpen);

	((void(*)(void))(intptr_t)v1485)();

c02_015e:;

c02_015a:;

	i4 v1486 = (i4)+0;
	i8 v1487 = (i8)(intptr_t)(ws+900);
	*(i4*)(intptr_t)v1487 = v1486;

c02_015f:;

	i8 v1488 = (i8)(intptr_t)(ws+880);
	i8 v1489 = *(i8*)(intptr_t)v1488;
	*(i8*)(intptr_t)(ws+1056) = v1489;
	i8 v1490 = (i8)(intptr_t)(ws+900);
	i4 v1491 = *(i4*)(intptr_t)v1490;
	*(i4*)(intptr_t)(ws+1064) = v1491;
	i8 v1492 = (i8)(intptr_t)(f50_FCBSeek);

	((void(*)(void))(intptr_t)v1492)();

	i8 v1493 = (i8)(intptr_t)(ws+880);
	i8 v1494 = *(i8*)(intptr_t)v1493;
	*(i8*)(intptr_t)(ws+1104) = v1494;
	i8 v1495 = (i8)(intptr_t)(f81_read_bin1);

	((void(*)(void))(intptr_t)v1495)();

	i1 v1496 = *(i1*)(intptr_t)(ws+1112);
	i8 v1497 = (i8)(intptr_t)(ws+904);
	*(i1*)(intptr_t)v1497 = v1496;

	i8 v1498 = (i8)(intptr_t)(ws+904);
	i1 v1499 = *(i1*)(intptr_t)v1498;
	i8 v1500 = (i8)(intptr_t)(ws+905);
	*(i1*)(intptr_t)v1500 = v1499;

	i8 v1501 = (i8)(intptr_t)(ws+880);
	i8 v1502 = *(i8*)(intptr_t)v1501;
	*(i8*)(intptr_t)(ws+1056) = v1502;
	i8 v1503 = (i8)(intptr_t)(f82_read_bin2);

	((void(*)(void))(intptr_t)v1503)();

	i2 v1504 = *(i2*)(intptr_t)(ws+1064);
	i8 v1505 = (i8)(intptr_t)(ws+906);
	*(i2*)(intptr_t)v1505 = v1504;

	i8 v1506 = (i8)(intptr_t)(ws+906);
	i2 v1507 = *(i2*)(intptr_t)v1506;
	i8 v1508 = (i8)(intptr_t)(ws+908);
	*(i2*)(intptr_t)v1508 = v1507;

	i8 v1509 = (i8)(intptr_t)(ws+905);
	i1 v1510 = *(i1*)(intptr_t)v1509;
	i1 v1511 = (i1)+69;
	if (v1510==v1511) goto c02_0164; else goto c02_0165;

c02_0164:;

	goto c02_0160;

c02_0165:;

	i8 v1512 = (i8)(intptr_t)(ws+905);
	i1 v1513 = *(i1*)(intptr_t)v1512;
	i1 v1514 = (i1)+70;
	if (v1513==v1514) goto c02_0168; else goto c02_0169;

c02_0168:;

	i8 v1515 = (i8)(intptr_t)(ws+880);
	i8 v1516 = *(i8*)(intptr_t)v1515;
	*(i8*)(intptr_t)(ws+1104) = v1516;
	i8 v1517 = (i8)(intptr_t)(f81_read_bin1);

	((void(*)(void))(intptr_t)v1517)();

	i1 v1518 = *(i1*)(intptr_t)(ws+1112);
	i8 v1519 = (i8)(intptr_t)(ws+920);
	*(i1*)(intptr_t)v1519 = v1518;

	i8 v1520 = (i8)(intptr_t)(ws+920);
	i1 v1521 = *(i1*)(intptr_t)v1520;
	i8 v1522 = (i8)(intptr_t)(ws+897);
	*(i1*)(intptr_t)v1522 = v1521;

	i8 v1523 = (i8)(intptr_t)(ws+880);
	i8 v1524 = *(i8*)(intptr_t)v1523;
	*(i8*)(intptr_t)(ws+1056) = v1524;
	i8 v1525 = (i8)(intptr_t)(f82_read_bin2);

	((void(*)(void))(intptr_t)v1525)();

	i2 v1526 = *(i2*)(intptr_t)(ws+1064);
	i8 v1527 = (i8)(intptr_t)(ws+922);
	*(i2*)(intptr_t)v1527 = v1526;

	i8 v1528 = (i8)(intptr_t)(ws+922);
	i2 v1529 = *(i2*)(intptr_t)v1528;
	i8 v1530 = (i8)(intptr_t)(ws+898);
	*(i2*)(intptr_t)v1530 = v1529;

	i8 v1531 = (i8)(intptr_t)(ws+880);
	i8 v1532 = *(i8*)(intptr_t)v1531;
	*(i8*)(intptr_t)(ws+1056) = v1532;
	i8 v1533 = (i8)(intptr_t)(ws+898);
	i2 v1534 = *(i2*)(intptr_t)v1533;
	*(i2*)(intptr_t)(ws+1064) = v1534;
	i8 v1535 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v1535)();

	i8 v1536 = *(i8*)(intptr_t)(ws+1072);
	i8 v1537 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v1537 = v1536;

	i8 v1538 = (i8)(intptr_t)(ws+928);
	i8 v1539 = *(i8*)(intptr_t)v1538;
	i8 v1540 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1540 = v1539;

	i8 v1541 = (i8)(intptr_t)(ws+912);
	i8 v1542 = *(i8*)(intptr_t)v1541;
	i8 v1543 = v1542+(+204);
	i1 v1544 = *(i1*)(intptr_t)v1543;
	i1 v1545 = v1544|(+2);
	i8 v1546 = (i8)(intptr_t)(ws+912);
	i8 v1547 = *(i8*)(intptr_t)v1546;
	i8 v1548 = v1547+(+204);
	*(i1*)(intptr_t)v1548 = v1545;

	goto c02_0161;

c02_0169:;

	i8 v1549 = (i8)(intptr_t)(ws+905);
	i1 v1550 = *(i1*)(intptr_t)v1549;
	i1 v1551 = (i1)+82;
	if (v1550==v1551) goto c02_016c; else goto c02_016d;

c02_016c:;

	i8 v1552 = (i8)(intptr_t)(ws+880);
	i8 v1553 = *(i8*)(intptr_t)v1552;
	*(i8*)(intptr_t)(ws+1056) = v1553;
	i8 v1554 = (i8)(intptr_t)(f82_read_bin2);

	((void(*)(void))(intptr_t)v1554)();

	i2 v1555 = *(i2*)(intptr_t)(ws+1064);
	i8 v1556 = (i8)(intptr_t)(ws+936);
	*(i2*)(intptr_t)v1556 = v1555;

	i8 v1557 = (i8)(intptr_t)(ws+936);
	i2 v1558 = *(i2*)(intptr_t)v1557;
	i8 v1559 = (i8)(intptr_t)(ws+938);
	*(i2*)(intptr_t)v1559 = v1558;

	i8 v1560 = (i8)(intptr_t)(ws+880);
	i8 v1561 = *(i8*)(intptr_t)v1560;
	*(i8*)(intptr_t)(ws+1056) = v1561;
	i8 v1562 = (i8)(intptr_t)(f82_read_bin2);

	((void(*)(void))(intptr_t)v1562)();

	i2 v1563 = *(i2*)(intptr_t)(ws+1064);
	i8 v1564 = (i8)(intptr_t)(ws+940);
	*(i2*)(intptr_t)v1564 = v1563;

	i8 v1565 = (i8)(intptr_t)(ws+940);
	i2 v1566 = *(i2*)(intptr_t)v1565;
	i8 v1567 = (i8)(intptr_t)(ws+942);
	*(i2*)(intptr_t)v1567 = v1566;

	i8 v1568 = (i8)(intptr_t)(ws+880);
	i8 v1569 = *(i8*)(intptr_t)v1568;
	*(i8*)(intptr_t)(ws+1104) = v1569;
	i8 v1570 = (i8)(intptr_t)(f81_read_bin1);

	((void(*)(void))(intptr_t)v1570)();

	i1 v1571 = *(i1*)(intptr_t)(ws+1112);
	i8 v1572 = (i8)(intptr_t)(ws+944);
	*(i1*)(intptr_t)v1572 = v1571;

	i8 v1573 = (i8)(intptr_t)(ws+944);
	i1 v1574 = *(i1*)(intptr_t)v1573;
	i8 v1575 = (i8)(intptr_t)(ws+945);
	*(i1*)(intptr_t)v1575 = v1574;

	i8 v1576 = (i8)(intptr_t)(ws+880);
	i8 v1577 = *(i8*)(intptr_t)v1576;
	*(i8*)(intptr_t)(ws+1056) = v1577;
	i8 v1578 = (i8)(intptr_t)(ws+938);
	i2 v1579 = *(i2*)(intptr_t)v1578;
	*(i2*)(intptr_t)(ws+1064) = v1579;
	i8 v1580 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v1580)();

	i8 v1581 = *(i8*)(intptr_t)(ws+1072);
	i8 v1582 = (i8)(intptr_t)(ws+952);
	*(i8*)(intptr_t)v1582 = v1581;

	i8 v1583 = (i8)(intptr_t)(ws+880);
	i8 v1584 = *(i8*)(intptr_t)v1583;
	*(i8*)(intptr_t)(ws+1056) = v1584;
	i8 v1585 = (i8)(intptr_t)(ws+942);
	i2 v1586 = *(i2*)(intptr_t)v1585;
	*(i2*)(intptr_t)(ws+1064) = v1586;
	i8 v1587 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v1587)();

	i8 v1588 = *(i8*)(intptr_t)(ws+1072);
	i8 v1589 = (i8)(intptr_t)(ws+960);
	*(i8*)(intptr_t)v1589 = v1588;

	i8 v1590 = (i8)(intptr_t)(ws+952);
	i8 v1591 = *(i8*)(intptr_t)v1590;
	*(i8*)(intptr_t)(ws+1056) = v1591;
	i8 v1592 = (i8)(intptr_t)(ws+960);
	i8 v1593 = *(i8*)(intptr_t)v1592;
	*(i8*)(intptr_t)(ws+1064) = v1593;
	i8 v1594 = (i8)(intptr_t)(ws+945);
	i1 v1595 = *(i1*)(intptr_t)v1594;
	*(i1*)(intptr_t)(ws+1072) = v1595;
	i8 v1596 = (i8)(intptr_t)(f84_AddRef);

	((void(*)(void))(intptr_t)v1596)();

	goto c02_0161;

c02_016d:;

	i8 v1597 = (i8)(intptr_t)(ws+905);
	i1 v1598 = *(i1*)(intptr_t)v1597;
	i1 v1599 = (i1)+87;
	if (v1598==v1599) goto c02_0170; else goto c02_0171;

c02_0170:;

	i8 v1600 = (i8)(intptr_t)(ws+880);
	i8 v1601 = *(i8*)(intptr_t)v1600;
	*(i8*)(intptr_t)(ws+1056) = v1601;
	i8 v1602 = (i8)(intptr_t)(f82_read_bin2);

	((void(*)(void))(intptr_t)v1602)();

	i2 v1603 = *(i2*)(intptr_t)(ws+1064);
	i8 v1604 = (i8)(intptr_t)(ws+968);
	*(i2*)(intptr_t)v1604 = v1603;

	i8 v1605 = (i8)(intptr_t)(ws+968);
	i2 v1606 = *(i2*)(intptr_t)v1605;
	i8 v1607 = (i8)(intptr_t)(ws+898);
	*(i2*)(intptr_t)v1607 = v1606;

	i8 v1608 = (i8)(intptr_t)(ws+880);
	i8 v1609 = *(i8*)(intptr_t)v1608;
	*(i8*)(intptr_t)(ws+1056) = v1609;
	i8 v1610 = (i8)(intptr_t)(ws+898);
	i2 v1611 = *(i2*)(intptr_t)v1610;
	*(i2*)(intptr_t)(ws+1064) = v1611;
	i8 v1612 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v1612)();

	i8 v1613 = *(i8*)(intptr_t)(ws+1072);
	i8 v1614 = (i8)(intptr_t)(ws+976);
	*(i8*)(intptr_t)v1614 = v1613;

	i8 v1615 = (i8)(intptr_t)(ws+976);
	i8 v1616 = *(i8*)(intptr_t)v1615;
	i8 v1617 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1617 = v1616;

	i8 v1618 = (i8)(intptr_t)(ws+880);
	i8 v1619 = *(i8*)(intptr_t)v1618;
	*(i8*)(intptr_t)(ws+1104) = v1619;
	i8 v1620 = (i8)(intptr_t)(f81_read_bin1);

	((void(*)(void))(intptr_t)v1620)();

	i1 v1621 = *(i1*)(intptr_t)(ws+1112);
	i8 v1622 = (i8)(intptr_t)(ws+984);
	*(i1*)(intptr_t)v1622 = v1621;

	i8 v1623 = (i8)(intptr_t)(ws+984);
	i1 v1624 = *(i1*)(intptr_t)v1623;
	i8 v1625 = (i8)(intptr_t)(ws+985);
	*(i1*)(intptr_t)v1625 = v1624;

	i8 v1626 = (i8)(intptr_t)(ws+880);
	i8 v1627 = *(i8*)(intptr_t)v1626;
	*(i8*)(intptr_t)(ws+1056) = v1627;
	i8 v1628 = (i8)(intptr_t)(f82_read_bin2);

	((void(*)(void))(intptr_t)v1628)();

	i2 v1629 = *(i2*)(intptr_t)(ws+1064);
	i8 v1630 = (i8)(intptr_t)(ws+986);
	*(i2*)(intptr_t)v1630 = v1629;

	i8 v1631 = (i8)(intptr_t)(ws+986);
	i2 v1632 = *(i2*)(intptr_t)v1631;
	i8 v1633 = (i8)(intptr_t)(ws+912);
	i8 v1634 = *(i8*)(intptr_t)v1633;
	i8 v1635 = v1634+(+184);
	i8 v1636 = (i8)(intptr_t)(ws+985);
	i1 v1637 = *(i1*)(intptr_t)v1636;
	i8 v1638 = v1637;
	i1 v1639 = (i1)+1;
	i8 v1640 = ((i8)v1638)<<v1639;
	i8 v1641 = v1635+v1640;
	*(i2*)(intptr_t)v1641 = v1632;

	goto c02_0161;

c02_0171:;

	i8 v1642 = (i8)(intptr_t)(ws+905);
	i1 v1643 = *(i1*)(intptr_t)v1642;
	i1 v1644 = (i1)+78;
	if (v1643==v1644) goto c02_0174; else goto c02_0175;

c02_0174:;

	i8 v1645 = (i8)(intptr_t)(ws+880);
	i8 v1646 = *(i8*)(intptr_t)v1645;
	*(i8*)(intptr_t)(ws+1056) = v1646;
	i8 v1647 = (i8)(intptr_t)(f82_read_bin2);

	((void(*)(void))(intptr_t)v1647)();

	i2 v1648 = *(i2*)(intptr_t)(ws+1064);
	i8 v1649 = (i8)(intptr_t)(ws+988);
	*(i2*)(intptr_t)v1649 = v1648;

	i8 v1650 = (i8)(intptr_t)(ws+988);
	i2 v1651 = *(i2*)(intptr_t)v1650;
	i8 v1652 = (i8)(intptr_t)(ws+898);
	*(i2*)(intptr_t)v1652 = v1651;

	i8 v1653 = (i8)(intptr_t)(ws+880);
	i8 v1654 = *(i8*)(intptr_t)v1653;
	*(i8*)(intptr_t)(ws+1056) = v1654;
	i8 v1655 = (i8)(intptr_t)(ws+898);
	i2 v1656 = *(i2*)(intptr_t)v1655;
	*(i2*)(intptr_t)(ws+1064) = v1656;
	i8 v1657 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v1657)();

	i8 v1658 = *(i8*)(intptr_t)(ws+1072);
	i8 v1659 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v1659 = v1658;

	i8 v1660 = (i8)(intptr_t)(ws+992);
	i8 v1661 = *(i8*)(intptr_t)v1660;
	i8 v1662 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1662 = v1661;

	i8 v1663 = (i8)(intptr_t)(ws+880);
	i8 v1664 = *(i8*)(intptr_t)v1663;
	*(i8*)(intptr_t)(ws+1056) = v1664;
	i8 v1665 = (i8)(intptr_t)(ws+908);
	i2 v1666 = *(i2*)(intptr_t)v1665;
	i1 v1667 = v1666;
	i1 v1668 = v1667+(-2);
	*(i1*)(intptr_t)(ws+1064) = v1668;
	i8 v1669 = (i8)(intptr_t)(f83_read_string);

	((void(*)(void))(intptr_t)v1669)();

	i8 v1670 = *(i8*)(intptr_t)(ws+1072);
	i8 v1671 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v1671 = v1670;

	i8 v1672 = (i8)(intptr_t)(ws+1000);
	i8 v1673 = *(i8*)(intptr_t)v1672;
	i8 v1674 = (i8)(intptr_t)(ws+912);
	i8 v1675 = *(i8*)(intptr_t)v1674;
	i8 v1676 = v1675+(+168);
	*(i8*)(intptr_t)v1676 = v1673;

	goto c02_0161;

c02_0175:;

	i8 v1677 = (i8)(intptr_t)(ws+905);
	i1 v1678 = *(i1*)(intptr_t)v1677;
	i1 v1679 = (i1)+88;
	if (v1678==v1679) goto c02_0178; else goto c02_0179;

c02_0178:;

	i8 v1680 = (i8)(intptr_t)(ws+880);
	i8 v1681 = *(i8*)(intptr_t)v1680;
	*(i8*)(intptr_t)(ws+1056) = v1681;
	i8 v1682 = (i8)(intptr_t)(f82_read_bin2);

	((void(*)(void))(intptr_t)v1682)();

	i2 v1683 = *(i2*)(intptr_t)(ws+1064);
	i8 v1684 = (i8)(intptr_t)(ws+1008);
	*(i2*)(intptr_t)v1684 = v1683;

	i8 v1685 = (i8)(intptr_t)(ws+1008);
	i2 v1686 = *(i2*)(intptr_t)v1685;
	i8 v1687 = (i8)(intptr_t)(ws+898);
	*(i2*)(intptr_t)v1687 = v1686;

	i8 v1688 = (i8)(intptr_t)(ws+880);
	i8 v1689 = *(i8*)(intptr_t)v1688;
	*(i8*)(intptr_t)(ws+1056) = v1689;
	i8 v1690 = (i8)(intptr_t)(ws+898);
	i2 v1691 = *(i2*)(intptr_t)v1690;
	*(i2*)(intptr_t)(ws+1064) = v1691;
	i8 v1692 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v1692)();

	i8 v1693 = *(i8*)(intptr_t)(ws+1072);
	i8 v1694 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v1694 = v1693;

	i8 v1695 = (i8)(intptr_t)(ws+1016);
	i8 v1696 = *(i8*)(intptr_t)v1695;
	i8 v1697 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1697 = v1696;

	i8 v1698 = (i8)(intptr_t)(ws+880);
	i8 v1699 = *(i8*)(intptr_t)v1698;
	*(i8*)(intptr_t)(ws+1056) = v1699;
	i8 v1700 = (i8)(intptr_t)(ws+908);
	i2 v1701 = *(i2*)(intptr_t)v1700;
	i1 v1702 = v1701;
	i1 v1703 = v1702+(-2);
	*(i1*)(intptr_t)(ws+1064) = v1703;
	i8 v1704 = (i8)(intptr_t)(f83_read_string);

	((void(*)(void))(intptr_t)v1704)();

	i8 v1705 = *(i8*)(intptr_t)(ws+1072);
	i8 v1706 = (i8)(intptr_t)(ws+1024);
	*(i8*)(intptr_t)v1706 = v1705;

	i8 v1707 = (i8)(intptr_t)(ws+1024);
	i8 v1708 = *(i8*)(intptr_t)v1707;
	i8 v1709 = (i8)(intptr_t)(ws+1032);
	*(i8*)(intptr_t)v1709 = v1708;

	i8 v1710 = (i8)(intptr_t)(ws+1032);
	i8 v1711 = *(i8*)(intptr_t)v1710;
	*(i8*)(intptr_t)(ws+1056) = v1711;
	i8 v1712 = (i8)(intptr_t)(f88_FindOrCreateExternal);

	((void(*)(void))(intptr_t)v1712)();

	i8 v1713 = *(i8*)(intptr_t)(ws+1064);
	i8 v1714 = (i8)(intptr_t)(ws+1040);
	*(i8*)(intptr_t)v1714 = v1713;

	i8 v1715 = (i8)(intptr_t)(ws+1040);
	i8 v1716 = *(i8*)(intptr_t)v1715;
	i8 v1717 = (i8)(intptr_t)(ws+1048);
	*(i8*)(intptr_t)v1717 = v1716;

	i8 v1718 = (i8)(intptr_t)(ws+912);
	i8 v1719 = *(i8*)(intptr_t)v1718;
	i8 v1720 = v1719+(+176);
	i8 v1721 = *(i8*)(intptr_t)v1720;
	i8 v1722 = (i8)+0;
	if (v1721==v1722) goto c02_017e; else goto c02_017d;

c02_017d:;

	i8 v1723 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1723)();

	i8 v1724 = (i8)(intptr_t)c02_s000e;
	*(i8*)(intptr_t)(ws+3344) = v1724;
	i8 v1725 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1725)();

	i8 v1726 = (i8)(intptr_t)(ws+1032);
	i8 v1727 = *(i8*)(intptr_t)v1726;
	*(i8*)(intptr_t)(ws+3344) = v1727;
	i8 v1728 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1728)();

	i8 v1729 = (i8)(intptr_t)c02_s000f;
	*(i8*)(intptr_t)(ws+3344) = v1729;
	i8 v1730 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1730)();

	i8 v1731 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1731)();

c02_017e:;

c02_017a:;

	i8 v1732 = (i8)(intptr_t)(ws+1048);
	i8 v1733 = *(i8*)(intptr_t)v1732;
	i8 v1734 = (i8)(intptr_t)(ws+912);
	i8 v1735 = *(i8*)(intptr_t)v1734;
	i8 v1736 = v1735+(+176);
	*(i8*)(intptr_t)v1736 = v1733;

	goto c02_0161;

c02_0179:;

	i8 v1737 = (i8)(intptr_t)c02_s0010;
	*(i8*)(intptr_t)(ws+3344) = v1737;
	i8 v1738 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1738)();

	i8 v1739 = (i8)(intptr_t)(ws+905);
	i1 v1740 = *(i1*)(intptr_t)v1739;
	*(i1*)(intptr_t)(ws+3360) = v1740;
	i8 v1741 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v1741)();

	i8 v1742 = (i8)(intptr_t)c02_s0011;
	*(i8*)(intptr_t)(ws+3344) = v1742;
	i8 v1743 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1743)();

	i8 v1744 = (i8)(intptr_t)(ws+872);
	i8 v1745 = *(i8*)(intptr_t)v1744;
	*(i8*)(intptr_t)(ws+3344) = v1745;
	i8 v1746 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1746)();

	i8 v1747 = (i8)(intptr_t)c02_s0012;
	*(i8*)(intptr_t)(ws+3344) = v1747;
	i8 v1748 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1748)();

	i8 v1749 = (i8)(intptr_t)(ws+900);
	i4 v1750 = *(i4*)(intptr_t)v1749;
	*(i4*)(intptr_t)(ws+1056) = v1750;
	i8 v1751 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v1751)();

	i8 v1752 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1752)();

	i8 v1753 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1753)();

c02_0161:;

	i8 v1754 = (i8)(intptr_t)(ws+900);
	i4 v1755 = *(i4*)(intptr_t)v1754;
	i8 v1756 = (i8)(intptr_t)(ws+908);
	i2 v1757 = *(i2*)(intptr_t)v1756;
	i4 v1758 = v1757;
	i4 v1759 = v1755+v1758;
	i4 v1760 = v1759+(+3);
	i8 v1761 = (i8)(intptr_t)(ws+900);
	*(i4*)(intptr_t)v1761 = v1760;

	goto c02_015f;

c02_0160:;

}
	void f23_MemZero(void);

// InitStreams workspace at ws+832 length ws+0
void f90_InitStreams(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1762 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)(ws+832) = v1762;
	i8 v1763 = (i8)+128;
	*(i8*)(intptr_t)(ws+840) = v1763;
	i8 v1764 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v1764)();

}
const i1 c02_s0013[] = { 0x73,0x74,0x72,0x65,0x61,0x6d,0x20,0x49,0x44,0x20,0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f62_SimpleError(void);
	void f33_Alloc(void);

// SetStream workspace at ws+888 length ws+24
void f91_SetStream(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1765 = (i8)(intptr_t)(ws+888);
	i1 v1766 = *(i1*)(intptr_t)v1765;
	i1 v1767 = (i1)+8;
	if (v1766<v1767) goto c02_0183; else goto c02_0182;

c02_0182:;

	i8 v1768 = (i8)(intptr_t)c02_s0013;
	*(i8*)(intptr_t)(ws+912) = v1768;
	i8 v1769 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(void))(intptr_t)v1769)();

c02_0183:;

c02_017f:;

	i8 v1770 = (i8)(intptr_t)(ws+592);
	i8 v1771 = (i8)(intptr_t)(ws+888);
	i1 v1772 = *(i1*)(intptr_t)v1771;
	i8 v1773 = v1772;
	i1 v1774 = (i1)+4;
	i8 v1775 = ((i8)v1773)<<v1774;
	i8 v1776 = v1770+v1775;
	i8 v1777 = (i8)(intptr_t)(ws+720);
	*(i8*)(intptr_t)v1777 = v1776;

	i8 v1778 = (i8)(intptr_t)(ws+720);
	i8 v1779 = *(i8*)(intptr_t)v1778;
	i8 v1780 = v1779+(+8);
	i8 v1781 = *(i8*)(intptr_t)v1780;
	i8 v1782 = (i8)+0;
	if (v1781==v1782) goto c02_0187; else goto c02_0188;

c02_0187:;

	i8 v1783 = (i8)+264;
	*(i8*)(intptr_t)(ws+1144) = v1783;
	i8 v1784 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1784)();

	i8 v1785 = *(i8*)(intptr_t)(ws+1152);
	i8 v1786 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v1786 = v1785;

	i8 v1787 = (i8)(intptr_t)(ws+896);
	i8 v1788 = *(i8*)(intptr_t)v1787;
	i8 v1789 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1789 = v1788;

	i8 v1790 = (i8)(intptr_t)(ws+904);
	i8 v1791 = *(i8*)(intptr_t)v1790;
	i8 v1792 = (i8)(intptr_t)(ws+720);
	i8 v1793 = *(i8*)(intptr_t)v1792;
	*(i8*)(intptr_t)v1793 = v1791;

	i8 v1794 = (i8)(intptr_t)(ws+904);
	i8 v1795 = *(i8*)(intptr_t)v1794;
	i8 v1796 = (i8)(intptr_t)(ws+720);
	i8 v1797 = *(i8*)(intptr_t)v1796;
	i8 v1798 = v1797+(+8);
	*(i8*)(intptr_t)v1798 = v1795;

c02_0188:;

c02_0184:;

}
	void f60_StartError(void);
const i1 c02_s0014[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f12_print(void);
	void f20_print_hex_i16(void);
	void f9_print_char(void);
const i1 c02_s0015[] = { 0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s0016[] = { 0x27,0 };
	void f12_print(void);
const i1 c02_s0017[] = { 0x77,0x68,0x69,0x63,0x68,0x20,0x69,0x73,0x20,0x61,0x6e,0x6f,0x6e,0x79,0x6d,0x6f,0x75,0x73,0 };
	void f12_print(void);
	void f61_EndError(void);

// CheckSubExists workspace at ws+984 length ws+8
void f92_CheckSubExists(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1799 = (i8)(intptr_t)(ws+984);
	i8 v1800 = *(i8*)(intptr_t)v1799;
	i8 v1801 = v1800+(+204);
	i1 v1802 = *(i1*)(intptr_t)v1801;
	i1 v1803 = v1802&(+2);
	i1 v1804 = (i1)+0;
	if (v1803==v1804) goto c02_018c; else goto c02_018d;

c02_018c:;

	i8 v1805 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1805)();

	i8 v1806 = (i8)(intptr_t)c02_s0014;
	*(i8*)(intptr_t)(ws+3344) = v1806;
	i8 v1807 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1807)();

	i8 v1808 = (i8)(intptr_t)(ws+984);
	i8 v1809 = *(i8*)(intptr_t)v1808;
	i8 v1810 = v1809+(+202);
	i2 v1811 = *(i2*)(intptr_t)v1810;
	*(i2*)(intptr_t)(ws+992) = v1811;
	i8 v1812 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(void))(intptr_t)v1812)();

	i1 v1813 = (i1)+32;
	*(i1*)(intptr_t)(ws+3360) = v1813;
	i8 v1814 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v1814)();

	i8 v1815 = (i8)(intptr_t)(ws+984);
	i8 v1816 = *(i8*)(intptr_t)v1815;
	i8 v1817 = v1816+(+168);
	i8 v1818 = *(i8*)(intptr_t)v1817;
	i8 v1819 = (i8)+0;
	if (v1818==v1819) goto c02_0192; else goto c02_0191;

c02_0191:;

	i8 v1820 = (i8)(intptr_t)c02_s0015;
	*(i8*)(intptr_t)(ws+3344) = v1820;
	i8 v1821 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1821)();

	i8 v1822 = (i8)(intptr_t)(ws+984);
	i8 v1823 = *(i8*)(intptr_t)v1822;
	i8 v1824 = v1823+(+168);
	i8 v1825 = *(i8*)(intptr_t)v1824;
	*(i8*)(intptr_t)(ws+3344) = v1825;
	i8 v1826 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1826)();

	i8 v1827 = (i8)(intptr_t)c02_s0016;
	*(i8*)(intptr_t)(ws+3344) = v1827;
	i8 v1828 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1828)();

	goto c02_018e;

c02_0192:;

	i8 v1829 = (i8)(intptr_t)c02_s0017;
	*(i8*)(intptr_t)(ws+3344) = v1829;
	i8 v1830 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v1830)();

c02_018e:;

	i8 v1831 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1831)();

c02_018d:;

c02_0189:;

}
	void f64_E_b8(void);
	void f71_E_h8(void);
	void f64_E_b8(void);
	void f77_ArchEmitSubRef(void);
	void f76_E_nl(void);
	void f64_E_b8(void);
	void f86_FindOrCreateSub(void);
	void f87_Deref(void);
	void f92_CheckSubExists(void);

// ParseWsRef workspace at ws+968 length ws+16
void f94_ParseWsRef(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1887 = (i8)(intptr_t)(ws+729);
	i1 v1888 = *(i1*)(intptr_t)v1887;
	i2 v1889 = v1888;
	i8 v1890 = (i8)(intptr_t)(ws+730);
	i1 v1891 = *(i1*)(intptr_t)v1890;
	i2 v1892 = v1891;
	i1 v1893 = (i1)+8;
	i2 v1894 = ((i2)v1892)<<v1893;
	i2 v1895 = v1889|v1894;
	i8 v1896 = (i8)(intptr_t)(ws+914);
	*(i2*)(intptr_t)v1896 = v1895;

	i8 v1897 = (i8)(intptr_t)(ws+731);
	i1 v1898 = *(i1*)(intptr_t)v1897;
	i8 v1899 = (i8)(intptr_t)(ws+928);
	*(i1*)(intptr_t)v1899 = v1898;

	i8 v1900 = (i8)(intptr_t)(ws+732);
	i1 v1901 = *(i1*)(intptr_t)v1900;
	i2 v1902 = v1901;
	i8 v1903 = (i8)(intptr_t)(ws+733);
	i1 v1904 = *(i1*)(intptr_t)v1903;
	i2 v1905 = v1904;
	i1 v1906 = (i1)+8;
	i2 v1907 = ((i2)v1905)<<v1906;
	i2 v1908 = v1902|v1907;
	i8 v1909 = (i8)(intptr_t)(ws+930);
	*(i2*)(intptr_t)v1909 = v1908;

	i8 v1910 = (i8)(intptr_t)(ws+48);
	i8 v1911 = *(i8*)(intptr_t)v1910;
	i8 v1912 = *(i8*)(intptr_t)v1911;
	*(i8*)(intptr_t)(ws+1056) = v1912;
	i8 v1913 = (i8)(intptr_t)(ws+914);
	i2 v1914 = *(i2*)(intptr_t)v1913;
	*(i2*)(intptr_t)(ws+1064) = v1914;
	i8 v1915 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v1915)();

	i8 v1916 = *(i8*)(intptr_t)(ws+1072);
	i8 v1917 = (i8)(intptr_t)(ws+968);
	*(i8*)(intptr_t)v1917 = v1916;

	i8 v1918 = (i8)(intptr_t)(ws+968);
	i8 v1919 = *(i8*)(intptr_t)v1918;
	i8 v1920 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v1920 = v1919;

	i8 v1921 = (i8)(intptr_t)(ws+920);
	i8 v1922 = *(i8*)(intptr_t)v1921;
	*(i8*)(intptr_t)(ws+3352) = v1922;
	i8 v1923 = (i8)(intptr_t)(f87_Deref);

	((void(*)(void))(intptr_t)v1923)();

	i8 v1924 = *(i8*)(intptr_t)(ws+3360);
	i8 v1925 = (i8)(intptr_t)(ws+976);
	*(i8*)(intptr_t)v1925 = v1924;

	i8 v1926 = (i8)(intptr_t)(ws+976);
	i8 v1927 = *(i8*)(intptr_t)v1926;
	i8 v1928 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v1928 = v1927;

	i8 v1929 = (i8)(intptr_t)(ws+920);
	i8 v1930 = *(i8*)(intptr_t)v1929;
	*(i8*)(intptr_t)(ws+984) = v1930;
	i8 v1931 = (i8)(intptr_t)(f92_CheckSubExists);

	((void(*)(void))(intptr_t)v1931)();

}
	void f86_FindOrCreateSub(void);
	void f87_Deref(void);
	void f92_CheckSubExists(void);
	void f77_ArchEmitSubRef(void);
	void f94_ParseWsRef(void);
	void f78_ArchEmitWSRef(void);
	void f86_FindOrCreateSub(void);
	void f87_Deref(void);
	void f92_CheckSubExists(void);
	void f78_ArchEmitWSRef(void);
	void f94_ParseWsRef(void);
	void f67_E_u16(void);

// WriteCharacterFromStream workspace at ws+912 length ws+56
void f93_WriteCharacterFromStream(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1836 = (i8)(intptr_t)(ws+736);
	i1 v1837 = *(i1*)(intptr_t)v1836;
	i1 v1838 = (i1)+0;
	if (v1837==v1838) goto c02_0196; else goto c02_0197;

c02_0196:;

	i8 v1839 = (i8)(intptr_t)(ws+912);
	i1 v1840 = *(i1*)(intptr_t)v1839;

	if (v1840 != +3) goto c02_0199;

	i1 v1841 = (i1)+99;
	*(i1*)(intptr_t)(ws+1032) = v1841;
	i8 v1842 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v1842)();

	i8 v1843 = (i8)(intptr_t)(ws+48);
	i8 v1844 = *(i8*)(intptr_t)v1843;
	i8 v1845 = *(i8*)(intptr_t)v1844;
	i8 v1846 = v1845+(+680);
	i2 v1847 = *(i2*)(intptr_t)v1846;
	i1 v1848 = v1847;
	*(i1*)(intptr_t)(ws+968) = v1848;
	i8 v1849 = (i8)(intptr_t)(f71_E_h8);

	((void(*)(void))(intptr_t)v1849)();

	i1 v1850 = (i1)+95;
	*(i1*)(intptr_t)(ws+1032) = v1850;
	i8 v1851 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v1851)();

	return;

c02_0199:;

	if (v1840 != +4) goto c02_019a;

	i8 v1852 = (i8)(intptr_t)(ws+48);
	i8 v1853 = *(i8*)(intptr_t)v1852;
	*(i8*)(intptr_t)(ws+968) = v1853;
	i8 v1854 = (i8)(intptr_t)(f77_ArchEmitSubRef);

	((void(*)(void))(intptr_t)v1854)();

	return;

c02_019a:;

	if (v1840 != +1) goto c02_019b;

	i1 v1855 = (i1)+3;
	i8 v1856 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1856 = v1855;

	goto c02_0198;

c02_019b:;

	if (v1840 != +2) goto c02_019c;

	i1 v1857 = (i1)+6;
	i8 v1858 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1858 = v1857;

	goto c02_0198;

c02_019c:;

	if (v1840 != +5) goto c02_019d;

	i1 v1859 = (i1)+4;
	i8 v1860 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1860 = v1859;

	goto c02_0198;

c02_019d:;

	if (v1840 != +6) goto c02_019e;

	i1 v1861 = (i1)+6;
	i8 v1862 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1862 = v1861;

	goto c02_0198;

c02_019e:;

	if (v1840 != +10) goto c02_019f;

	i8 v1863 = (i8)(intptr_t)(f76_E_nl);

	((void(*)(void))(intptr_t)v1863)();

	return;

c02_019f:;

	i8 v1864 = (i8)(intptr_t)(ws+912);
	i1 v1865 = *(i1*)(intptr_t)v1864;
	*(i1*)(intptr_t)(ws+1032) = v1865;
	i8 v1866 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(void))(intptr_t)v1866)();

	return;

c02_0198:;


	i8 v1867 = (i8)(intptr_t)(ws+912);
	i1 v1868 = *(i1*)(intptr_t)v1867;
	i8 v1869 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v1869 = v1868;

	i1 v1870 = (i1)+1;
	i8 v1871 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1871 = v1870;

	goto c02_0193;

c02_0197:;

	i8 v1872 = (i8)(intptr_t)(ws+912);
	i1 v1873 = *(i1*)(intptr_t)v1872;
	i8 v1874 = (i8)(intptr_t)(ws+728);
	i8 v1875 = (i8)(intptr_t)(ws+737);
	i1 v1876 = *(i1*)(intptr_t)v1875;
	i8 v1877 = v1876;
	i8 v1878 = v1874+v1877;
	*(i1*)(intptr_t)v1878 = v1873;

	i8 v1879 = (i8)(intptr_t)(ws+737);
	i1 v1880 = *(i1*)(intptr_t)v1879;
	i1 v1881 = v1880+(+1);
	i8 v1882 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1882 = v1881;

	i8 v1883 = (i8)(intptr_t)(ws+737);
	i1 v1884 = *(i1*)(intptr_t)v1883;
	i8 v1885 = (i8)(intptr_t)(ws+736);
	i1 v1886 = *(i1*)(intptr_t)v1885;
	if (v1884==v1886) goto c02_01a4; else goto c02_01a3;

c02_01a3:;

	return;

c02_01a4:;

c02_01a0:;


	i8 v1932 = (i8)(intptr_t)(ws+728);
	i1 v1933 = *(i1*)(intptr_t)v1932;

	if (v1933 != +1) goto c02_01a6;

	i8 v1934 = (i8)(intptr_t)(ws+729);
	i1 v1935 = *(i1*)(intptr_t)v1934;
	i2 v1936 = v1935;
	i8 v1937 = (i8)(intptr_t)(ws+730);
	i1 v1938 = *(i1*)(intptr_t)v1937;
	i2 v1939 = v1938;
	i1 v1940 = (i1)+8;
	i2 v1941 = ((i2)v1939)<<v1940;
	i2 v1942 = v1936|v1941;
	i8 v1943 = (i8)(intptr_t)(ws+914);
	*(i2*)(intptr_t)v1943 = v1942;

	i8 v1944 = (i8)(intptr_t)(ws+48);
	i8 v1945 = *(i8*)(intptr_t)v1944;
	i8 v1946 = *(i8*)(intptr_t)v1945;
	*(i8*)(intptr_t)(ws+1056) = v1946;
	i8 v1947 = (i8)(intptr_t)(ws+914);
	i2 v1948 = *(i2*)(intptr_t)v1947;
	*(i2*)(intptr_t)(ws+1064) = v1948;
	i8 v1949 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v1949)();

	i8 v1950 = *(i8*)(intptr_t)(ws+1072);
	i8 v1951 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)v1951 = v1950;

	i8 v1952 = (i8)(intptr_t)(ws+936);
	i8 v1953 = *(i8*)(intptr_t)v1952;
	i8 v1954 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v1954 = v1953;

	i8 v1955 = (i8)(intptr_t)(ws+920);
	i8 v1956 = *(i8*)(intptr_t)v1955;
	*(i8*)(intptr_t)(ws+3352) = v1956;
	i8 v1957 = (i8)(intptr_t)(f87_Deref);

	((void(*)(void))(intptr_t)v1957)();

	i8 v1958 = *(i8*)(intptr_t)(ws+3360);
	i8 v1959 = (i8)(intptr_t)(ws+944);
	*(i8*)(intptr_t)v1959 = v1958;

	i8 v1960 = (i8)(intptr_t)(ws+944);
	i8 v1961 = *(i8*)(intptr_t)v1960;
	i8 v1962 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v1962 = v1961;

	i8 v1963 = (i8)(intptr_t)(ws+920);
	i8 v1964 = *(i8*)(intptr_t)v1963;
	*(i8*)(intptr_t)(ws+984) = v1964;
	i8 v1965 = (i8)(intptr_t)(f92_CheckSubExists);

	((void(*)(void))(intptr_t)v1965)();

	i8 v1966 = (i8)(intptr_t)(ws+920);
	i8 v1967 = *(i8*)(intptr_t)v1966;
	*(i8*)(intptr_t)(ws+968) = v1967;
	i8 v1968 = (i8)(intptr_t)(f77_ArchEmitSubRef);

	((void(*)(void))(intptr_t)v1968)();

	goto c02_01a5;

c02_01a6:;

	if (v1933 != +2) goto c02_01a7;

	i8 v1969 = (i8)(intptr_t)(f94_ParseWsRef);

	((void(*)(void))(intptr_t)v1969)();

	i8 v1970 = (i8)(intptr_t)(ws+928);
	i1 v1971 = *(i1*)(intptr_t)v1970;
	*(i1*)(intptr_t)(ws+968) = v1971;
	i8 v1972 = (i8)(intptr_t)(ws+920);
	i8 v1973 = *(i8*)(intptr_t)v1972;
	i8 v1974 = v1973+(+192);
	i8 v1975 = (i8)(intptr_t)(ws+928);
	i1 v1976 = *(i1*)(intptr_t)v1975;
	i8 v1977 = v1976;
	i1 v1978 = (i1)+1;
	i8 v1979 = ((i8)v1977)<<v1978;
	i8 v1980 = v1974+v1979;
	i2 v1981 = *(i2*)(intptr_t)v1980;
	i8 v1982 = (i8)(intptr_t)(ws+930);
	i2 v1983 = *(i2*)(intptr_t)v1982;
	i2 v1984 = v1981+v1983;
	*(i2*)(intptr_t)(ws+970) = v1984;
	i8 v1985 = (i8)(intptr_t)(f78_ArchEmitWSRef);

	((void(*)(void))(intptr_t)v1985)();

	goto c02_01a5;

c02_01a7:;

	if (v1933 != +5) goto c02_01a8;

	i8 v1986 = (i8)(intptr_t)(ws+729);
	i1 v1987 = *(i1*)(intptr_t)v1986;
	i2 v1988 = v1987;
	i8 v1989 = (i8)(intptr_t)(ws+730);
	i1 v1990 = *(i1*)(intptr_t)v1989;
	i2 v1991 = v1990;
	i1 v1992 = (i1)+8;
	i2 v1993 = ((i2)v1991)<<v1992;
	i2 v1994 = v1988|v1993;
	i8 v1995 = (i8)(intptr_t)(ws+914);
	*(i2*)(intptr_t)v1995 = v1994;

	i8 v1996 = (i8)(intptr_t)(ws+731);
	i1 v1997 = *(i1*)(intptr_t)v1996;
	i8 v1998 = (i8)(intptr_t)(ws+928);
	*(i1*)(intptr_t)v1998 = v1997;

	i8 v1999 = (i8)(intptr_t)(ws+48);
	i8 v2000 = *(i8*)(intptr_t)v1999;
	i8 v2001 = *(i8*)(intptr_t)v2000;
	*(i8*)(intptr_t)(ws+1056) = v2001;
	i8 v2002 = (i8)(intptr_t)(ws+914);
	i2 v2003 = *(i2*)(intptr_t)v2002;
	*(i2*)(intptr_t)(ws+1064) = v2003;
	i8 v2004 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v2004)();

	i8 v2005 = *(i8*)(intptr_t)(ws+1072);
	i8 v2006 = (i8)(intptr_t)(ws+952);
	*(i8*)(intptr_t)v2006 = v2005;

	i8 v2007 = (i8)(intptr_t)(ws+952);
	i8 v2008 = *(i8*)(intptr_t)v2007;
	i8 v2009 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v2009 = v2008;

	i8 v2010 = (i8)(intptr_t)(ws+920);
	i8 v2011 = *(i8*)(intptr_t)v2010;
	*(i8*)(intptr_t)(ws+3352) = v2011;
	i8 v2012 = (i8)(intptr_t)(f87_Deref);

	((void(*)(void))(intptr_t)v2012)();

	i8 v2013 = *(i8*)(intptr_t)(ws+3360);
	i8 v2014 = (i8)(intptr_t)(ws+960);
	*(i8*)(intptr_t)v2014 = v2013;

	i8 v2015 = (i8)(intptr_t)(ws+960);
	i8 v2016 = *(i8*)(intptr_t)v2015;
	i8 v2017 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v2017 = v2016;

	i8 v2018 = (i8)(intptr_t)(ws+920);
	i8 v2019 = *(i8*)(intptr_t)v2018;
	*(i8*)(intptr_t)(ws+984) = v2019;
	i8 v2020 = (i8)(intptr_t)(f92_CheckSubExists);

	((void(*)(void))(intptr_t)v2020)();

	i8 v2021 = (i8)(intptr_t)(ws+928);
	i1 v2022 = *(i1*)(intptr_t)v2021;
	*(i1*)(intptr_t)(ws+968) = v2022;
	i8 v2023 = (i8)(intptr_t)(ws+920);
	i8 v2024 = *(i8*)(intptr_t)v2023;
	i8 v2025 = v2024+(+184);
	i8 v2026 = (i8)(intptr_t)(ws+928);
	i1 v2027 = *(i1*)(intptr_t)v2026;
	i8 v2028 = v2027;
	i1 v2029 = (i1)+1;
	i8 v2030 = ((i8)v2028)<<v2029;
	i8 v2031 = v2025+v2030;
	i2 v2032 = *(i2*)(intptr_t)v2031;
	*(i2*)(intptr_t)(ws+970) = v2032;
	i8 v2033 = (i8)(intptr_t)(f78_ArchEmitWSRef);

	((void(*)(void))(intptr_t)v2033)();

	goto c02_01a5;

c02_01a8:;

	if (v1933 != +6) goto c02_01a9;

	i8 v2034 = (i8)(intptr_t)(f94_ParseWsRef);

	((void(*)(void))(intptr_t)v2034)();

	i8 v2035 = (i8)(intptr_t)(ws+920);
	i8 v2036 = *(i8*)(intptr_t)v2035;
	i8 v2037 = v2036+(+192);
	i8 v2038 = (i8)(intptr_t)(ws+928);
	i1 v2039 = *(i1*)(intptr_t)v2038;
	i8 v2040 = v2039;
	i1 v2041 = (i1)+1;
	i8 v2042 = ((i8)v2040)<<v2041;
	i8 v2043 = v2037+v2042;
	i2 v2044 = *(i2*)(intptr_t)v2043;
	i8 v2045 = (i8)(intptr_t)(ws+930);
	i2 v2046 = *(i2*)(intptr_t)v2045;
	i2 v2047 = v2044+v2046;
	*(i2*)(intptr_t)(ws+976) = v2047;
	i8 v2048 = (i8)(intptr_t)(f67_E_u16);

	((void(*)(void))(intptr_t)v2048)();

c02_01a9:;

c02_01a5:;


	i1 v2049 = (i1)+0;
	i8 v2050 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v2050 = v2049;

c02_0193:;

}
	void f93_WriteCharacterFromStream(void);
	void f34_Free(void);

// FlushStream workspace at ws+888 length ws+24
void f95_FlushStream(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2051 = (i8)(intptr_t)(ws+720);
	i8 v2052 = *(i8*)(intptr_t)v2051;
	i8 v2053 = *(i8*)(intptr_t)v2052;
	i8 v2054 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v2054 = v2053;

c02_01aa:;

	i8 v2055 = (i8)(intptr_t)(ws+888);
	i8 v2056 = *(i8*)(intptr_t)v2055;
	i8 v2057 = (i8)+0;
	if (v2056==v2057) goto c02_01af; else goto c02_01ae;

c02_01ae:;

	i1 v2058 = (i1)+0;
	i8 v2059 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v2059 = v2058;

c02_01b0:;

	i8 v2060 = (i8)(intptr_t)(ws+896);
	i1 v2061 = *(i1*)(intptr_t)v2060;
	i8 v2062 = (i8)(intptr_t)(ws+888);
	i8 v2063 = *(i8*)(intptr_t)v2062;
	i8 v2064 = v2063+(+255);
	i1 v2065 = *(i1*)(intptr_t)v2064;
	if (v2061==v2065) goto c02_01b5; else goto c02_01b4;

c02_01b4:;

	i8 v2066 = (i8)(intptr_t)(ws+888);
	i8 v2067 = *(i8*)(intptr_t)v2066;
	i8 v2068 = (i8)(intptr_t)(ws+896);
	i1 v2069 = *(i1*)(intptr_t)v2068;
	i8 v2070 = v2069;
	i8 v2071 = v2067+v2070;
	i1 v2072 = *(i1*)(intptr_t)v2071;
	*(i1*)(intptr_t)(ws+912) = v2072;
	i8 v2073 = (i8)(intptr_t)(f93_WriteCharacterFromStream);

	((void(*)(void))(intptr_t)v2073)();

	i8 v2074 = (i8)(intptr_t)(ws+896);
	i1 v2075 = *(i1*)(intptr_t)v2074;
	i1 v2076 = v2075+(+1);
	i8 v2077 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v2077 = v2076;

	goto c02_01b0;

c02_01b5:;

	i8 v2078 = (i8)(intptr_t)(ws+888);
	i8 v2079 = *(i8*)(intptr_t)v2078;
	i8 v2080 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v2080 = v2079;

	i8 v2081 = (i8)(intptr_t)(ws+888);
	i8 v2082 = *(i8*)(intptr_t)v2081;
	i8 v2083 = v2082+(+256);
	i8 v2084 = *(i8*)(intptr_t)v2083;
	i8 v2085 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v2085 = v2084;

	i8 v2086 = (i8)(intptr_t)(ws+904);
	i8 v2087 = *(i8*)(intptr_t)v2086;
	*(i8*)(intptr_t)(ws+912) = v2087;
	i8 v2088 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v2088)();

	goto c02_01aa;

c02_01af:;

	i8 v2089 = (i8)+0;
	i8 v2090 = (i8)(intptr_t)(ws+720);
	i8 v2091 = *(i8*)(intptr_t)v2090;
	*(i8*)(intptr_t)v2091 = v2089;

	i8 v2092 = (i8)+0;
	i8 v2093 = (i8)(intptr_t)(ws+720);
	i8 v2094 = *(i8*)(intptr_t)v2093;
	i8 v2095 = v2094+(+8);
	*(i8*)(intptr_t)v2095 = v2092;

}
	void f33_Alloc(void);

// WriteStream workspace at ws+896 length ws+24
void f96_WriteStream(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2096 = (i8)(intptr_t)(ws+720);
	i8 v2097 = *(i8*)(intptr_t)v2096;
	i8 v2098 = v2097+(+8);
	i8 v2099 = *(i8*)(intptr_t)v2098;
	i8 v2100 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v2100 = v2099;

	i8 v2101 = (i8)(intptr_t)(ws+904);
	i8 v2102 = *(i8*)(intptr_t)v2101;
	i8 v2103 = v2102+(+255);
	i1 v2104 = *(i1*)(intptr_t)v2103;
	i1 v2105 = (i1)+255;
	if (v2104==v2105) goto c02_01b9; else goto c02_01ba;

c02_01b9:;

	i8 v2106 = (i8)+264;
	*(i8*)(intptr_t)(ws+1144) = v2106;
	i8 v2107 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v2107)();

	i8 v2108 = *(i8*)(intptr_t)(ws+1152);
	i8 v2109 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v2109 = v2108;

	i8 v2110 = (i8)(intptr_t)(ws+912);
	i8 v2111 = *(i8*)(intptr_t)v2110;
	i8 v2112 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v2112 = v2111;

	i8 v2113 = (i8)(intptr_t)(ws+904);
	i8 v2114 = *(i8*)(intptr_t)v2113;
	i8 v2115 = (i8)(intptr_t)(ws+720);
	i8 v2116 = *(i8*)(intptr_t)v2115;
	i8 v2117 = v2116+(+8);
	i8 v2118 = *(i8*)(intptr_t)v2117;
	i8 v2119 = v2118+(+256);
	*(i8*)(intptr_t)v2119 = v2114;

	i8 v2120 = (i8)(intptr_t)(ws+904);
	i8 v2121 = *(i8*)(intptr_t)v2120;
	i8 v2122 = (i8)(intptr_t)(ws+720);
	i8 v2123 = *(i8*)(intptr_t)v2122;
	i8 v2124 = v2123+(+8);
	*(i8*)(intptr_t)v2124 = v2121;

c02_01ba:;

c02_01b6:;

	i8 v2125 = (i8)(intptr_t)(ws+896);
	i1 v2126 = *(i1*)(intptr_t)v2125;
	i8 v2127 = (i8)(intptr_t)(ws+904);
	i8 v2128 = *(i8*)(intptr_t)v2127;
	i8 v2129 = (i8)(intptr_t)(ws+904);
	i8 v2130 = *(i8*)(intptr_t)v2129;
	i8 v2131 = v2130+(+255);
	i1 v2132 = *(i1*)(intptr_t)v2131;
	i8 v2133 = v2132;
	i8 v2134 = v2128+v2133;
	*(i1*)(intptr_t)v2134 = v2126;

	i8 v2135 = (i8)(intptr_t)(ws+904);
	i8 v2136 = *(i8*)(intptr_t)v2135;
	i8 v2137 = v2136+(+255);
	i1 v2138 = *(i1*)(intptr_t)v2137;
	i1 v2139 = v2138+(+1);
	i8 v2140 = (i8)(intptr_t)(ws+904);
	i8 v2141 = *(i8*)(intptr_t)v2140;
	i8 v2142 = v2141+(+255);
	*(i1*)(intptr_t)v2142 = v2139;

}
const i1 c02_s0018[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// MalformedError workspace at ws+904 length ws+8
void f98_MalformedError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2143 = (i8)(intptr_t)c02_s0018;
	*(i8*)(intptr_t)(ws+3344) = v2143;
	i8 v2144 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2144)();

	i8 v2145 = (i8)(intptr_t)(ws+904);
	i8 v2146 = *(i8*)(intptr_t)v2145;
	*(i8*)(intptr_t)(ws+3344) = v2146;
	i8 v2147 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2147)();

	i8 v2148 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2148)();

	i8 v2149 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v2149)();

}
const i1 c02_s0019[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0x65,0x6e,0x64,0x20,0x6f,0x66,0x20,0x63,0x68,0x75,0x6e,0x6b,0 };
	void f98_MalformedError(void);

// UnexpectedEndOfChunk workspace at ws+904 length ws+0
void f99_UnexpectedEndOfChunk(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2150 = (i8)(intptr_t)c02_s0019;
	*(i8*)(intptr_t)(ws+904) = v2150;
	i8 v2151 = (i8)(intptr_t)(f98_MalformedError);

	((void(*)(void))(intptr_t)v2151)();

}
	void f99_UnexpectedEndOfChunk(void);
	void f81_read_bin1(void);

// ReadB1 workspace at ws+896 length ws+2
void f100_ReadB1(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2152 = (i8)(intptr_t)(ws+852);
	i2 v2153 = *(i2*)(intptr_t)v2152;
	i2 v2154 = (i2)+1;
	if (v2153<v2154) goto c02_01be; else goto c02_01bf;

c02_01be:;

	i8 v2155 = (i8)(intptr_t)(f99_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v2155)();

c02_01bf:;

c02_01bb:;

	i8 v2156 = (i8)(intptr_t)(ws+852);
	i2 v2157 = *(i2*)(intptr_t)v2156;
	i2 v2158 = v2157+(-1);
	i8 v2159 = (i8)(intptr_t)(ws+852);
	*(i2*)(intptr_t)v2159 = v2158;

	i8 v2160 = (i8)(intptr_t)(ws+840);
	i8 v2161 = *(i8*)(intptr_t)v2160;
	*(i8*)(intptr_t)(ws+1104) = v2161;
	i8 v2162 = (i8)(intptr_t)(f81_read_bin1);

	((void(*)(void))(intptr_t)v2162)();

	i1 v2163 = *(i1*)(intptr_t)(ws+1112);
	i8 v2164 = (i8)(intptr_t)(ws+897);
	*(i1*)(intptr_t)v2164 = v2163;

	i8 v2165 = (i8)(intptr_t)(ws+897);
	i1 v2166 = *(i1*)(intptr_t)v2165;
	i8 v2167 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v2167 = v2166;

}
	void f99_UnexpectedEndOfChunk(void);
	void f82_read_bin2(void);

// ReadB2 workspace at ws+888 length ws+4
void f101_ReadB2(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2168 = (i8)(intptr_t)(ws+852);
	i2 v2169 = *(i2*)(intptr_t)v2168;
	i2 v2170 = (i2)+2;
	if (v2169<v2170) goto c02_01c3; else goto c02_01c4;

c02_01c3:;

	i8 v2171 = (i8)(intptr_t)(f99_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v2171)();

c02_01c4:;

c02_01c0:;

	i8 v2172 = (i8)(intptr_t)(ws+852);
	i2 v2173 = *(i2*)(intptr_t)v2172;
	i2 v2174 = v2173+(-2);
	i8 v2175 = (i8)(intptr_t)(ws+852);
	*(i2*)(intptr_t)v2175 = v2174;

	i8 v2176 = (i8)(intptr_t)(ws+840);
	i8 v2177 = *(i8*)(intptr_t)v2176;
	*(i8*)(intptr_t)(ws+1056) = v2177;
	i8 v2178 = (i8)(intptr_t)(f82_read_bin2);

	((void(*)(void))(intptr_t)v2178)();

	i2 v2179 = *(i2*)(intptr_t)(ws+1064);
	i8 v2180 = (i8)(intptr_t)(ws+890);
	*(i2*)(intptr_t)v2180 = v2179;

	i8 v2181 = (i8)(intptr_t)(ws+890);
	i2 v2182 = *(i2*)(intptr_t)v2181;
	i8 v2183 = (i8)(intptr_t)(ws+888);
	*(i2*)(intptr_t)v2183 = v2182;

}
	void f100_ReadB1(void);
	void f96_WriteStream(void);

// CopySourceChunk workspace at ws+888 length ws+1
void f102_CopySourceChunk(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

c02_01c5:;

	i8 v2184 = (i8)(intptr_t)(ws+852);
	i2 v2185 = *(i2*)(intptr_t)v2184;
	i2 v2186 = (i2)+0;
	if (v2185==v2186) goto c02_01ca; else goto c02_01c9;

c02_01c9:;

	i8 v2187 = (i8)(intptr_t)(f100_ReadB1);

	((void(*)(void))(intptr_t)v2187)();

	i1 v2188 = *(i1*)(intptr_t)(ws+896);
	i8 v2189 = (i8)(intptr_t)(ws+888);
	*(i1*)(intptr_t)v2189 = v2188;

	i8 v2190 = (i8)(intptr_t)(ws+888);
	i1 v2191 = *(i1*)(intptr_t)v2190;
	i8 v2192 = (i8)(intptr_t)(ws+850);
	*(i1*)(intptr_t)v2192 = v2191;

	i8 v2193 = (i8)(intptr_t)(ws+850);
	i1 v2194 = *(i1*)(intptr_t)v2193;
	*(i1*)(intptr_t)(ws+896) = v2194;
	i8 v2195 = (i8)(intptr_t)(f96_WriteStream);

	((void(*)(void))(intptr_t)v2195)();

	goto c02_01c5;

c02_01ca:;

}
	void f50_FCBSeek(void);
	void f100_ReadB1(void);
	void f101_ReadB2(void);
	void f100_ReadB1(void);
	void f101_ReadB2(void);
	void f86_FindOrCreateSub(void);
	void f87_Deref(void);
	void f91_SetStream(void);
	void f102_CopySourceChunk(void);
	void f95_FlushStream(void);

// WriteSubroutinesToOutputFile workspace at ws+840 length ws+48
void f97_WriteSubroutinesToOutputFile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;






	i4 v2196 = (i4)+0;
	i8 v2197 = (i8)(intptr_t)(ws+856);
	*(i4*)(intptr_t)v2197 = v2196;

c02_01cb:;

	i2 v2198 = (i2)+255;
	i8 v2199 = (i8)(intptr_t)(ws+852);
	*(i2*)(intptr_t)v2199 = v2198;

	i8 v2200 = (i8)(intptr_t)(ws+840);
	i8 v2201 = *(i8*)(intptr_t)v2200;
	*(i8*)(intptr_t)(ws+1056) = v2201;
	i8 v2202 = (i8)(intptr_t)(ws+856);
	i4 v2203 = *(i4*)(intptr_t)v2202;
	*(i4*)(intptr_t)(ws+1064) = v2203;
	i8 v2204 = (i8)(intptr_t)(f50_FCBSeek);

	((void(*)(void))(intptr_t)v2204)();

	i8 v2205 = (i8)(intptr_t)(f100_ReadB1);

	((void(*)(void))(intptr_t)v2205)();

	i1 v2206 = *(i1*)(intptr_t)(ws+896);
	i8 v2207 = (i8)(intptr_t)(ws+860);
	*(i1*)(intptr_t)v2207 = v2206;

	i8 v2208 = (i8)(intptr_t)(ws+860);
	i1 v2209 = *(i1*)(intptr_t)v2208;
	i8 v2210 = (i8)(intptr_t)(ws+850);
	*(i1*)(intptr_t)v2210 = v2209;

	i8 v2211 = (i8)(intptr_t)(f101_ReadB2);

	((void(*)(void))(intptr_t)v2211)();

	i2 v2212 = *(i2*)(intptr_t)(ws+888);
	i8 v2213 = (i8)(intptr_t)(ws+862);
	*(i2*)(intptr_t)v2213 = v2212;

	i8 v2214 = (i8)(intptr_t)(ws+862);
	i2 v2215 = *(i2*)(intptr_t)v2214;
	i8 v2216 = (i8)(intptr_t)(ws+852);
	*(i2*)(intptr_t)v2216 = v2215;

	i8 v2217 = (i8)(intptr_t)(ws+856);
	i4 v2218 = *(i4*)(intptr_t)v2217;
	i8 v2219 = (i8)(intptr_t)(ws+852);
	i2 v2220 = *(i2*)(intptr_t)v2219;
	i4 v2221 = v2220;
	i4 v2222 = v2218+v2221;
	i4 v2223 = v2222+(+3);
	i8 v2224 = (i8)(intptr_t)(ws+856);
	*(i4*)(intptr_t)v2224 = v2223;

	i8 v2225 = (i8)(intptr_t)(ws+850);
	i1 v2226 = *(i1*)(intptr_t)v2225;
	i1 v2227 = (i1)+69;
	if (v2226==v2227) goto c02_01d0; else goto c02_01d1;

c02_01d0:;

	goto c02_01cc;

c02_01d1:;

	i8 v2228 = (i8)(intptr_t)(ws+850);
	i1 v2229 = *(i1*)(intptr_t)v2228;
	i1 v2230 = (i1)+70;
	if (v2229==v2230) goto c02_01d4; else goto c02_01d5;

c02_01d4:;

	i8 v2231 = (i8)(intptr_t)(f100_ReadB1);

	((void(*)(void))(intptr_t)v2231)();

	i1 v2232 = *(i1*)(intptr_t)(ws+896);
	i8 v2233 = (i8)(intptr_t)(ws+864);
	*(i1*)(intptr_t)v2233 = v2232;

	i8 v2234 = (i8)(intptr_t)(ws+864);
	i1 v2235 = *(i1*)(intptr_t)v2234;
	i8 v2236 = (i8)(intptr_t)(ws+854);
	*(i1*)(intptr_t)v2236 = v2235;

	i8 v2237 = (i8)(intptr_t)(f101_ReadB2);

	((void(*)(void))(intptr_t)v2237)();

	i2 v2238 = *(i2*)(intptr_t)(ws+888);
	i8 v2239 = (i8)(intptr_t)(ws+866);
	*(i2*)(intptr_t)v2239 = v2238;

	i8 v2240 = (i8)(intptr_t)(ws+866);
	i2 v2241 = *(i2*)(intptr_t)v2240;
	i8 v2242 = (i8)(intptr_t)(ws+848);
	*(i2*)(intptr_t)v2242 = v2241;

	i8 v2243 = (i8)(intptr_t)(ws+840);
	i8 v2244 = *(i8*)(intptr_t)v2243;
	*(i8*)(intptr_t)(ws+1056) = v2244;
	i8 v2245 = (i8)(intptr_t)(ws+848);
	i2 v2246 = *(i2*)(intptr_t)v2245;
	*(i2*)(intptr_t)(ws+1064) = v2246;
	i8 v2247 = (i8)(intptr_t)(f86_FindOrCreateSub);

	((void(*)(void))(intptr_t)v2247)();

	i8 v2248 = *(i8*)(intptr_t)(ws+1072);
	i8 v2249 = (i8)(intptr_t)(ws+872);
	*(i8*)(intptr_t)v2249 = v2248;

	i8 v2250 = (i8)(intptr_t)(ws+872);
	i8 v2251 = *(i8*)(intptr_t)v2250;
	i8 v2252 = (i8)(intptr_t)(ws+48);
	*(i8*)(intptr_t)v2252 = v2251;

	i8 v2253 = (i8)(intptr_t)(ws+48);
	i8 v2254 = *(i8*)(intptr_t)v2253;
	*(i8*)(intptr_t)(ws+3352) = v2254;
	i8 v2255 = (i8)(intptr_t)(f87_Deref);

	((void(*)(void))(intptr_t)v2255)();

	i8 v2256 = *(i8*)(intptr_t)(ws+3360);
	i8 v2257 = (i8)(intptr_t)(ws+880);
	*(i8*)(intptr_t)v2257 = v2256;

	i8 v2258 = (i8)(intptr_t)(ws+880);
	i8 v2259 = *(i8*)(intptr_t)v2258;
	i8 v2260 = (i8)(intptr_t)(ws+48);
	*(i8*)(intptr_t)v2260 = v2259;

	i8 v2261 = (i8)(intptr_t)(ws+48);
	i8 v2262 = *(i8*)(intptr_t)v2261;
	i8 v2263 = v2262+(+204);
	i1 v2264 = *(i1*)(intptr_t)v2263;
	i1 v2265 = v2264&(+1);
	i1 v2266 = (i1)+0;
	if (v2265==v2266) goto c02_01da; else goto c02_01d9;

c02_01d9:;

	i8 v2267 = (i8)(intptr_t)(ws+854);
	i1 v2268 = *(i1*)(intptr_t)v2267;
	i1 v2269 = v2268&(+127);
	*(i1*)(intptr_t)(ws+888) = v2269;
	i8 v2270 = (i8)(intptr_t)(f91_SetStream);

	((void(*)(void))(intptr_t)v2270)();

	i8 v2271 = (i8)(intptr_t)(f102_CopySourceChunk);

	((void(*)(void))(intptr_t)v2271)();

	i8 v2272 = (i8)(intptr_t)(ws+854);
	i1 v2273 = *(i1*)(intptr_t)v2272;
	i1 v2274 = v2273&(+128);
	i1 v2275 = (i1)+0;
	if (v2274==v2275) goto c02_01df; else goto c02_01de;

c02_01de:;

	i8 v2276 = (i8)(intptr_t)(f95_FlushStream);

	((void(*)(void))(intptr_t)v2276)();

c02_01df:;

c02_01db:;

c02_01da:;

c02_01d6:;

c02_01d5:;

c02_01cd:;

	goto c02_01cb;

c02_01cc:;

}
const i1 c02_s001a[] = { 0x43,0x6f,0x70,0x79,0x69,0x6e,0x67,0x20,0x66,0x72,0x6f,0x6d,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f97_WriteSubroutinesToOutputFile(void);

// WriteAllSubroutinesToOutputFile workspace at ws+832 length ws+8
void f103_WriteAllSubroutinesToOutputFile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

c02_01e0:;

	i8 v2277 = (i8)(intptr_t)(ws+832);
	i8 v2278 = *(i8*)(intptr_t)v2277;
	i8 v2279 = (i8)+0;
	if (v2278==v2279) goto c02_01e5; else goto c02_01e4;

c02_01e4:;

	i8 v2280 = (i8)(intptr_t)c02_s001a;
	*(i8*)(intptr_t)(ws+3344) = v2280;
	i8 v2281 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2281)();

	i8 v2282 = (i8)(intptr_t)(ws+832);
	i8 v2283 = *(i8*)(intptr_t)v2282;
	i8 v2284 = v2283+(+528);
	i8 v2285 = *(i8*)(intptr_t)v2284;
	*(i8*)(intptr_t)(ws+3344) = v2285;
	i8 v2286 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2286)();

	i8 v2287 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2287)();

	i8 v2288 = (i8)(intptr_t)(ws+832);
	i8 v2289 = *(i8*)(intptr_t)v2288;
	*(i8*)(intptr_t)(ws+840) = v2289;
	i8 v2290 = (i8)(intptr_t)(f97_WriteSubroutinesToOutputFile);

	((void(*)(void))(intptr_t)v2290)();

	i8 v2291 = (i8)(intptr_t)(ws+832);
	i8 v2292 = *(i8*)(intptr_t)v2291;
	i8 v2293 = v2292+(+672);
	i8 v2294 = *(i8*)(intptr_t)v2293;
	i8 v2295 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2295 = v2294;

	goto c02_01e0;

c02_01e5:;

}
const i1 c02_s001b[] = { 0x63,0x6f,0x6e,0x66,0x6c,0x69,0x63,0x74,0x69,0x6e,0x67,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x73,0 };
	void f62_SimpleError(void);
const i1 c02_s001c[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x27,0 };
	void f12_print(void);
	void f12_print(void);
const i1 c02_s001d[] = { 0x27,0x20,0x75,0x6e,0x72,0x65,0x73,0x6f,0x6c,0x76,0x65,0x64,0x0a,0 };
	void f12_print(void);
const i1 c02_s001e[] = { 0x61,0x62,0x6f,0x72,0x74,0x69,0x6e,0x67,0 };
	void f62_SimpleError(void);

// ResolveExternals workspace at ws+832 length ws+24
void f104_ResolveExternals(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v2296 = (i1)+0;
	i8 v2297 = (i8)(intptr_t)(ws+840);
	*(i1*)(intptr_t)v2297 = v2296;

	i8 v2298 = (i8)(intptr_t)(ws+32);
	i8 v2299 = *(i8*)(intptr_t)v2298;
	i8 v2300 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2300 = v2299;

c02_01e6:;

	i8 v2301 = (i8)(intptr_t)(ws+848);
	i8 v2302 = *(i8*)(intptr_t)v2301;
	i8 v2303 = (i8)+0;
	if (v2302==v2303) goto c02_01eb; else goto c02_01ea;

c02_01ea:;

	i8 v2304 = (i8)(intptr_t)(ws+848);
	i8 v2305 = *(i8*)(intptr_t)v2304;
	i8 v2306 = v2305+(+204);
	i1 v2307 = *(i1*)(intptr_t)v2306;
	i1 v2308 = v2307&(+2);
	i1 v2309 = (i1)+0;
	if (v2308==v2309) goto c02_01f0; else goto c02_01ef;

c02_01ef:;

	i8 v2310 = (i8)(intptr_t)(ws+848);
	i8 v2311 = *(i8*)(intptr_t)v2310;
	i8 v2312 = v2311+(+176);
	i8 v2313 = *(i8*)(intptr_t)v2312;
	i8 v2314 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2314 = v2313;

	i8 v2315 = (i8)(intptr_t)(ws+832);
	i8 v2316 = *(i8*)(intptr_t)v2315;
	i8 v2317 = (i8)+0;
	if (v2316==v2317) goto c02_01f5; else goto c02_01f4;

c02_01f4:;

	i8 v2318 = (i8)(intptr_t)(ws+832);
	i8 v2319 = *(i8*)(intptr_t)v2318;
	i8 v2320 = v2319+(+16);
	i8 v2321 = *(i8*)(intptr_t)v2320;
	i8 v2322 = (i8)+0;
	if (v2321==v2322) goto c02_01fc; else goto c02_01fd;

c02_01fd:;

	i8 v2323 = (i8)(intptr_t)(ws+832);
	i8 v2324 = *(i8*)(intptr_t)v2323;
	i8 v2325 = v2324+(+16);
	i8 v2326 = *(i8*)(intptr_t)v2325;
	i8 v2327 = (i8)(intptr_t)(ws+848);
	i8 v2328 = *(i8*)(intptr_t)v2327;
	if (v2326==v2328) goto c02_01fc; else goto c02_01fb;

c02_01fb:;

	i8 v2329 = (i8)(intptr_t)c02_s001b;
	*(i8*)(intptr_t)(ws+912) = v2329;
	i8 v2330 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(void))(intptr_t)v2330)();

c02_01fc:;

c02_01f6:;

	i8 v2331 = (i8)(intptr_t)(ws+848);
	i8 v2332 = *(i8*)(intptr_t)v2331;
	i8 v2333 = (i8)(intptr_t)(ws+832);
	i8 v2334 = *(i8*)(intptr_t)v2333;
	i8 v2335 = v2334+(+16);
	*(i8*)(intptr_t)v2335 = v2332;

c02_01f5:;

c02_01f1:;

c02_01f0:;

c02_01ec:;

	i8 v2336 = (i8)(intptr_t)(ws+848);
	i8 v2337 = *(i8*)(intptr_t)v2336;
	i8 v2338 = v2337+(+8);
	i8 v2339 = *(i8*)(intptr_t)v2338;
	i8 v2340 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2340 = v2339;

	goto c02_01e6;

c02_01eb:;

	i8 v2341 = (i8)(intptr_t)(ws+32);
	i8 v2342 = *(i8*)(intptr_t)v2341;
	i8 v2343 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2343 = v2342;

c02_01fe:;

	i8 v2344 = (i8)(intptr_t)(ws+848);
	i8 v2345 = *(i8*)(intptr_t)v2344;
	i8 v2346 = (i8)+0;
	if (v2345==v2346) goto c02_0203; else goto c02_0202;

c02_0202:;

	i8 v2347 = (i8)(intptr_t)(ws+848);
	i8 v2348 = *(i8*)(intptr_t)v2347;
	i8 v2349 = v2348+(+176);
	i8 v2350 = *(i8*)(intptr_t)v2349;
	i8 v2351 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2351 = v2350;

	i8 v2352 = (i8)(intptr_t)(ws+832);
	i8 v2353 = *(i8*)(intptr_t)v2352;
	i8 v2354 = (i8)+0;
	if (v2353==v2354) goto c02_020a; else goto c02_020b;

c02_020b:;

	i8 v2355 = (i8)(intptr_t)(ws+832);
	i8 v2356 = *(i8*)(intptr_t)v2355;
	i8 v2357 = v2356+(+16);
	i8 v2358 = *(i8*)(intptr_t)v2357;
	i8 v2359 = (i8)+0;
	if (v2358==v2359) goto c02_0209; else goto c02_020a;

c02_0209:;

	i8 v2360 = (i8)(intptr_t)c02_s001c;
	*(i8*)(intptr_t)(ws+3344) = v2360;
	i8 v2361 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2361)();

	i8 v2362 = (i8)(intptr_t)(ws+832);
	i8 v2363 = *(i8*)(intptr_t)v2362;
	i8 v2364 = v2363+(+8);
	i8 v2365 = *(i8*)(intptr_t)v2364;
	*(i8*)(intptr_t)(ws+3344) = v2365;
	i8 v2366 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2366)();

	i8 v2367 = (i8)(intptr_t)c02_s001d;
	*(i8*)(intptr_t)(ws+3344) = v2367;
	i8 v2368 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2368)();

	i1 v2369 = (i1)+1;
	i8 v2370 = (i8)(intptr_t)(ws+840);
	*(i1*)(intptr_t)v2370 = v2369;

c02_020a:;

c02_0204:;

	i8 v2371 = (i8)(intptr_t)(ws+848);
	i8 v2372 = *(i8*)(intptr_t)v2371;
	i8 v2373 = v2372+(+8);
	i8 v2374 = *(i8*)(intptr_t)v2373;
	i8 v2375 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2375 = v2374;

	goto c02_01fe;

c02_0203:;

	i8 v2376 = (i8)(intptr_t)(ws+840);
	i1 v2377 = *(i1*)(intptr_t)v2376;
	i1 v2378 = (i1)+0;
	if (v2377==v2378) goto c02_0210; else goto c02_020f;

c02_020f:;

	i8 v2379 = (i8)(intptr_t)c02_s001e;
	*(i8*)(intptr_t)(ws+912) = v2379;
	i8 v2380 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(void))(intptr_t)v2380)();

c02_0210:;

c02_020c:;

}
	void f87_Deref(void);

// DetectCycle workspace at ws+3304 length ws+48
void f105_DetectCycle(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v2381 = (i1)+0;
	i8 v2382 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v2382 = v2381;

	i8 v2383 = (i8)(intptr_t)(ws+3312);
	i8 v2384 = *(i8*)(intptr_t)v2383;
	i8 v2385 = v2384+(+202);
	i2 v2386 = *(i2*)(intptr_t)v2385;
	i8 v2387 = (i8)(intptr_t)(ws+3304);
	i8 v2388 = *(i8*)(intptr_t)v2387;
	i8 v2389 = v2388+(+202);
	i2 v2390 = *(i2*)(intptr_t)v2389;
	if (v2386==v2390) goto c02_0214; else goto c02_0215;

c02_0214:;

	i1 v2391 = (i1)+1;
	i8 v2392 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v2392 = v2391;

c02_0215:;

c02_0211:;

	i8 v2393 = (i8)(intptr_t)(ws+3312);
	i8 v2394 = *(i8*)(intptr_t)v2393;
	i8 v2395 = v2394+(+16);
	i8 v2396 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2396 = v2395;

c02_0216:;

	i8 v2397 = (i8)(intptr_t)(ws+3328);
	i8 v2398 = *(i8*)(intptr_t)v2397;
	i8 v2399 = (i8)+0;
	if (v2398==v2399) goto c02_021b; else goto c02_021a;

c02_021a:;

	i1 v2400 = (i1)+0;
	i8 v2401 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v2401 = v2400;

c02_021c:;

	i8 v2402 = (i8)(intptr_t)(ws+3336);
	i1 v2403 = *(i1*)(intptr_t)v2402;
	i1 v2404 = (i1)+16;
	if (v2403==v2404) goto c02_0221; else goto c02_0220;

c02_0220:;

	i8 v2405 = (i8)(intptr_t)(ws+3328);
	i8 v2406 = *(i8*)(intptr_t)v2405;
	i8 v2407 = v2406+(+8);
	i8 v2408 = (i8)(intptr_t)(ws+3336);
	i1 v2409 = *(i1*)(intptr_t)v2408;
	i8 v2410 = v2409;
	i1 v2411 = (i1)+3;
	i8 v2412 = ((i8)v2410)<<v2411;
	i8 v2413 = v2407+v2412;
	i8 v2414 = *(i8*)(intptr_t)v2413;
	i8 v2415 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v2415 = v2414;

	i8 v2416 = (i8)(intptr_t)(ws+3328);
	i8 v2417 = *(i8*)(intptr_t)v2416;
	i8 v2418 = v2417+(+136);
	i8 v2419 = (i8)(intptr_t)(ws+3336);
	i1 v2420 = *(i1*)(intptr_t)v2419;
	i8 v2421 = v2420;
	i8 v2422 = v2418+v2421;
	i1 v2423 = *(i1*)(intptr_t)v2422;
	i8 v2424 = (i8)(intptr_t)(ws+3337);
	*(i1*)(intptr_t)v2424 = v2423;

	i8 v2425 = (i8)(intptr_t)(ws+3336);
	i1 v2426 = *(i1*)(intptr_t)v2425;
	i1 v2427 = v2426+(+1);
	i8 v2428 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v2428 = v2427;

	i8 v2429 = (i8)(intptr_t)(ws+3312);
	i8 v2430 = *(i8*)(intptr_t)v2429;
	i8 v2431 = (i8)+0;
	if (v2430==v2431) goto c02_0225; else goto c02_0226;

c02_0225:;

	goto c02_0221;

c02_0226:;

c02_0222:;

	i8 v2432 = (i8)(intptr_t)(ws+3312);
	i8 v2433 = *(i8*)(intptr_t)v2432;
	*(i8*)(intptr_t)(ws+3352) = v2433;
	i8 v2434 = (i8)(intptr_t)(f87_Deref);

	((void(*)(void))(intptr_t)v2434)();

	i8 v2435 = *(i8*)(intptr_t)(ws+3360);
	i8 v2436 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2436 = v2435;

	i8 v2437 = (i8)(intptr_t)(ws+3344);
	i8 v2438 = *(i8*)(intptr_t)v2437;
	i8 v2439 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v2439 = v2438;

	i8 v2440 = (i8)(intptr_t)(ws+3312);
	i8 v2441 = *(i8*)(intptr_t)v2440;
	i8 v2442 = v2441+(+202);
	i2 v2443 = *(i2*)(intptr_t)v2442;
	i8 v2444 = (i8)(intptr_t)(ws+3304);
	i8 v2445 = *(i8*)(intptr_t)v2444;
	i8 v2446 = v2445+(+202);
	i2 v2447 = *(i2*)(intptr_t)v2446;
	if (v2443==v2447) goto c02_022e; else goto c02_022d;

c02_022e:;

	i8 v2448 = (i8)(intptr_t)(ws+3337);
	i1 v2449 = *(i1*)(intptr_t)v2448;
	i1 v2450 = (i1)+0;
	if (v2449==v2450) goto c02_022c; else goto c02_022d;

c02_022c:;

	i1 v2451 = (i1)+1;
	i8 v2452 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v2452 = v2451;

c02_022d:;

c02_0227:;

	goto c02_021c;

c02_0221:;

	i8 v2453 = (i8)(intptr_t)(ws+3328);
	i8 v2454 = *(i8*)(intptr_t)v2453;
	i8 v2455 = *(i8*)(intptr_t)v2454;
	i8 v2456 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2456 = v2455;

	goto c02_0216;

c02_021b:;

}
const i1 c02_s001f[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x64,0x65,0x70,0x65,0x6e,0x64,0x65,0x6e,0x63,0x79,0x20,0x67,0x72,0x61,0x70,0x68,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0x0a,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// push workspace at ws+3304 length ws+10
void f107_push(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2476 = (i8)(intptr_t)(ws+3240);
	i2 v2477 = *(i2*)(intptr_t)v2476;
	i8 v2478 = (i8)(intptr_t)(ws+3312);
	*(i2*)(intptr_t)v2478 = v2477;

c02_0235:;

	i8 v2479 = (i8)(intptr_t)(ws+3312);
	i2 v2480 = *(i2*)(intptr_t)v2479;
	i2 v2481 = (i2)+0;
	if (v2480==v2481) goto c02_023a; else goto c02_0239;

c02_0239:;

	i8 v2482 = (i8)(intptr_t)(ws+3312);
	i2 v2483 = *(i2*)(intptr_t)v2482;
	i2 v2484 = v2483+(-1);
	i8 v2485 = (i8)(intptr_t)(ws+3312);
	*(i2*)(intptr_t)v2485 = v2484;

	i8 v2486 = (i8)(intptr_t)(ws+840);
	i8 v2487 = (i8)(intptr_t)(ws+3312);
	i2 v2488 = *(i2*)(intptr_t)v2487;
	i8 v2489 = v2488;
	i1 v2490 = (i1)+3;
	i8 v2491 = ((i8)v2489)<<v2490;
	i8 v2492 = v2486+v2491;
	i8 v2493 = *(i8*)(intptr_t)v2492;
	i8 v2494 = (i8)(intptr_t)(ws+3304);
	i8 v2495 = *(i8*)(intptr_t)v2494;
	if (v2493==v2495) goto c02_023e; else goto c02_023f;

c02_023e:;

	return;

c02_023f:;

c02_023b:;

	goto c02_0235;

c02_023a:;

	i8 v2496 = (i8)(intptr_t)(ws+3240);
	i2 v2497 = *(i2*)(intptr_t)v2496;
	i2 v2498 = (i2)+300;
	if (v2497==v2498) goto c02_0243; else goto c02_0244;

c02_0243:;

	i8 v2499 = (i8)(intptr_t)c02_s001f;
	*(i8*)(intptr_t)(ws+3344) = v2499;
	i8 v2500 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2500)();

	i8 v2501 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v2501)();

c02_0244:;

c02_0240:;

	i8 v2502 = (i8)(intptr_t)(ws+3304);
	i8 v2503 = *(i8*)(intptr_t)v2502;
	i8 v2504 = (i8)(intptr_t)(ws+840);
	i8 v2505 = (i8)(intptr_t)(ws+3240);
	i2 v2506 = *(i2*)(intptr_t)v2505;
	i8 v2507 = v2506;
	i1 v2508 = (i1)+3;
	i8 v2509 = ((i8)v2507)<<v2508;
	i8 v2510 = v2504+v2509;
	*(i8*)(intptr_t)v2510 = v2503;

	i8 v2511 = (i8)(intptr_t)(ws+3240);
	i2 v2512 = *(i2*)(intptr_t)v2511;
	i2 v2513 = v2512+(+1);
	i8 v2514 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v2514 = v2513;

}
	void f107_push(void);
	void f75_ArchAlignUp(void);
	void f87_Deref(void);
	void f105_DetectCycle(void);
	void f107_push(void);
	void f107_push(void);
const i1 c02_s0020[] = { 0x57,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x69,0x7a,0x65,0x73,0x3a,0x0a,0 };
	void f12_print(void);
const i1 c02_s0021[] = { 0x20,0x20,0x23,0 };
	void f12_print(void);
	void f18_print_i8(void);
const i1 c02_s0022[] = { 0x3a,0x20,0 };
	void f12_print(void);
	void f17_print_i16(void);
const i1 c02_s0023[] = { 0x20,0x62,0x79,0x74,0x65,0x73,0x0a,0 };
	void f12_print(void);

// PlaceSubroutines workspace at ws+832 length ws+2470
void f106_PlaceSubroutines(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i2 v2457 = (i2)+0;
	i8 v2458 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v2458 = v2457;

	i1 v2459 = (i1)+0;
	i8 v2460 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2460 = v2459;

c02_022f:;

	i8 v2461 = (i8)(intptr_t)(ws+3242);
	i1 v2462 = *(i1*)(intptr_t)v2461;
	i1 v2463 = (i1)+4;
	if (v2462==v2463) goto c02_0234; else goto c02_0233;

c02_0233:;

	i2 v2464 = (i2)+0;
	i8 v2465 = (i8)(intptr_t)(ws+582);
	i8 v2466 = (i8)(intptr_t)(ws+3242);
	i1 v2467 = *(i1*)(intptr_t)v2466;
	i8 v2468 = v2467;
	i1 v2469 = (i1)+1;
	i8 v2470 = ((i8)v2468)<<v2469;
	i8 v2471 = v2465+v2470;
	*(i2*)(intptr_t)v2471 = v2464;

	i8 v2472 = (i8)(intptr_t)(ws+3242);
	i1 v2473 = *(i1*)(intptr_t)v2472;
	i1 v2474 = v2473+(+1);
	i8 v2475 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2475 = v2474;

	goto c02_022f;

c02_0234:;


	i8 v2515 = (i8)(intptr_t)(ws+832);
	i8 v2516 = *(i8*)(intptr_t)v2515;
	*(i8*)(intptr_t)(ws+3304) = v2516;
	i8 v2517 = (i8)(intptr_t)(f107_push);

	((void(*)(void))(intptr_t)v2517)();

c02_0245:;

	i8 v2518 = (i8)(intptr_t)(ws+3240);
	i2 v2519 = *(i2*)(intptr_t)v2518;
	i2 v2520 = (i2)+0;
	if (v2519==v2520) goto c02_024a; else goto c02_0249;

c02_0249:;

	i8 v2521 = (i8)(intptr_t)(ws+3240);
	i2 v2522 = *(i2*)(intptr_t)v2521;
	i2 v2523 = v2522+(-1);
	i8 v2524 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v2524 = v2523;

	i8 v2525 = (i8)(intptr_t)(ws+840);
	i8 v2526 = (i8)(intptr_t)(ws+3240);
	i2 v2527 = *(i2*)(intptr_t)v2526;
	i8 v2528 = v2527;
	i1 v2529 = (i1)+3;
	i8 v2530 = ((i8)v2528)<<v2529;
	i8 v2531 = v2525+v2530;
	i8 v2532 = *(i8*)(intptr_t)v2531;
	i8 v2533 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2533 = v2532;

	i8 v2534 = (i8)(intptr_t)(ws+832);
	i8 v2535 = *(i8*)(intptr_t)v2534;
	i8 v2536 = v2535+(+204);
	i1 v2537 = *(i1*)(intptr_t)v2536;
	i1 v2538 = v2537|(+1);
	i8 v2539 = (i8)(intptr_t)(ws+832);
	i8 v2540 = *(i8*)(intptr_t)v2539;
	i8 v2541 = v2540+(+204);
	*(i1*)(intptr_t)v2541 = v2538;

	i1 v2542 = (i1)+0;
	i8 v2543 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2543 = v2542;

c02_024b:;

	i8 v2544 = (i8)(intptr_t)(ws+3242);
	i1 v2545 = *(i1*)(intptr_t)v2544;
	i1 v2546 = (i1)+4;
	if (v2545==v2546) goto c02_0250; else goto c02_024f;

c02_024f:;

	i8 v2547 = (i8)(intptr_t)(ws+832);
	i8 v2548 = *(i8*)(intptr_t)v2547;
	i8 v2549 = v2548+(+192);
	i8 v2550 = (i8)(intptr_t)(ws+3242);
	i1 v2551 = *(i1*)(intptr_t)v2550;
	i8 v2552 = v2551;
	i1 v2553 = (i1)+1;
	i8 v2554 = ((i8)v2552)<<v2553;
	i8 v2555 = v2549+v2554;
	i2 v2556 = *(i2*)(intptr_t)v2555;
	i8 v2557 = (i8)(intptr_t)(ws+832);
	i8 v2558 = *(i8*)(intptr_t)v2557;
	i8 v2559 = v2558+(+184);
	i8 v2560 = (i8)(intptr_t)(ws+3242);
	i1 v2561 = *(i1*)(intptr_t)v2560;
	i8 v2562 = v2561;
	i1 v2563 = (i1)+1;
	i8 v2564 = ((i8)v2562)<<v2563;
	i8 v2565 = v2559+v2564;
	i2 v2566 = *(i2*)(intptr_t)v2565;
	i2 v2567 = v2556+v2566;
	i8 v2568 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v2568 = v2567;

	i8 v2569 = (i8)(intptr_t)(ws+3252);
	i2 v2570 = *(i2*)(intptr_t)v2569;
	*(i2*)(intptr_t)(ws+3304) = v2570;
	i1 v2571 = (i1)+8;
	*(i1*)(intptr_t)(ws+3306) = v2571;
	i8 v2572 = (i8)(intptr_t)(f75_ArchAlignUp);

	((void(*)(void))(intptr_t)v2572)();

	i2 v2573 = *(i2*)(intptr_t)(ws+3308);
	i8 v2574 = (i8)(intptr_t)(ws+3254);
	*(i2*)(intptr_t)v2574 = v2573;

	i8 v2575 = (i8)(intptr_t)(ws+3254);
	i2 v2576 = *(i2*)(intptr_t)v2575;
	i8 v2577 = (i8)(intptr_t)(ws+3244);
	i8 v2578 = (i8)(intptr_t)(ws+3242);
	i1 v2579 = *(i1*)(intptr_t)v2578;
	i8 v2580 = v2579;
	i1 v2581 = (i1)+1;
	i8 v2582 = ((i8)v2580)<<v2581;
	i8 v2583 = v2577+v2582;
	*(i2*)(intptr_t)v2583 = v2576;

	i8 v2584 = (i8)(intptr_t)(ws+582);
	i8 v2585 = (i8)(intptr_t)(ws+3242);
	i1 v2586 = *(i1*)(intptr_t)v2585;
	i8 v2587 = v2586;
	i1 v2588 = (i1)+1;
	i8 v2589 = ((i8)v2587)<<v2588;
	i8 v2590 = v2584+v2589;
	i2 v2591 = *(i2*)(intptr_t)v2590;
	i8 v2592 = (i8)(intptr_t)(ws+3252);
	i2 v2593 = *(i2*)(intptr_t)v2592;
	if (v2591<v2593) goto c02_0254; else goto c02_0255;

c02_0254:;

	i8 v2594 = (i8)(intptr_t)(ws+3252);
	i2 v2595 = *(i2*)(intptr_t)v2594;
	i8 v2596 = (i8)(intptr_t)(ws+582);
	i8 v2597 = (i8)(intptr_t)(ws+3242);
	i1 v2598 = *(i1*)(intptr_t)v2597;
	i8 v2599 = v2598;
	i1 v2600 = (i1)+1;
	i8 v2601 = ((i8)v2599)<<v2600;
	i8 v2602 = v2596+v2601;
	*(i2*)(intptr_t)v2602 = v2595;

c02_0255:;

c02_0251:;

	i8 v2603 = (i8)(intptr_t)(ws+3242);
	i1 v2604 = *(i1*)(intptr_t)v2603;
	i1 v2605 = v2604+(+1);
	i8 v2606 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2606 = v2605;

	goto c02_024b;

c02_0250:;

	i8 v2607 = (i8)(intptr_t)(ws+832);
	i8 v2608 = *(i8*)(intptr_t)v2607;
	i8 v2609 = v2608+(+16);
	i8 v2610 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v2610 = v2609;

c02_0256:;

	i8 v2611 = (i8)(intptr_t)(ws+3256);
	i8 v2612 = *(i8*)(intptr_t)v2611;
	i8 v2613 = (i8)+0;
	if (v2612==v2613) goto c02_025b; else goto c02_025a;

c02_025a:;

	i1 v2614 = (i1)+0;
	i8 v2615 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2615 = v2614;

c02_025c:;

	i8 v2616 = (i8)(intptr_t)(ws+3264);
	i1 v2617 = *(i1*)(intptr_t)v2616;
	i1 v2618 = (i1)+16;
	if (v2617==v2618) goto c02_0261; else goto c02_0260;

c02_0260:;

	i8 v2619 = (i8)(intptr_t)(ws+3256);
	i8 v2620 = *(i8*)(intptr_t)v2619;
	i8 v2621 = v2620+(+8);
	i8 v2622 = (i8)(intptr_t)(ws+3264);
	i1 v2623 = *(i1*)(intptr_t)v2622;
	i8 v2624 = v2623;
	i1 v2625 = (i1)+3;
	i8 v2626 = ((i8)v2624)<<v2625;
	i8 v2627 = v2621+v2626;
	i8 v2628 = *(i8*)(intptr_t)v2627;
	i8 v2629 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v2629 = v2628;

	i8 v2630 = (i8)(intptr_t)(ws+3256);
	i8 v2631 = *(i8*)(intptr_t)v2630;
	i8 v2632 = v2631+(+136);
	i8 v2633 = (i8)(intptr_t)(ws+3264);
	i1 v2634 = *(i1*)(intptr_t)v2633;
	i8 v2635 = v2634;
	i8 v2636 = v2632+v2635;
	i1 v2637 = *(i1*)(intptr_t)v2636;
	i8 v2638 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v2638 = v2637;

	i8 v2639 = (i8)(intptr_t)(ws+3264);
	i1 v2640 = *(i1*)(intptr_t)v2639;
	i1 v2641 = v2640+(+1);
	i8 v2642 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2642 = v2641;

	i8 v2643 = (i8)(intptr_t)(ws+3272);
	i8 v2644 = *(i8*)(intptr_t)v2643;
	i8 v2645 = (i8)+0;
	if (v2644==v2645) goto c02_0265; else goto c02_0266;

c02_0265:;

	goto c02_0261;

c02_0266:;

c02_0262:;

	i8 v2646 = (i8)(intptr_t)(ws+3272);
	i8 v2647 = *(i8*)(intptr_t)v2646;
	*(i8*)(intptr_t)(ws+3352) = v2647;
	i8 v2648 = (i8)(intptr_t)(f87_Deref);

	((void(*)(void))(intptr_t)v2648)();

	i8 v2649 = *(i8*)(intptr_t)(ws+3360);
	i8 v2650 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v2650 = v2649;

	i8 v2651 = (i8)(intptr_t)(ws+3288);
	i8 v2652 = *(i8*)(intptr_t)v2651;
	i8 v2653 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v2653 = v2652;

	i1 v2654 = (i1)+0;
	i8 v2655 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2655 = v2654;

	i8 v2656 = (i8)(intptr_t)(ws+832);
	i8 v2657 = *(i8*)(intptr_t)v2656;
	*(i8*)(intptr_t)(ws+3304) = v2657;
	i8 v2658 = (i8)(intptr_t)(ws+3272);
	i8 v2659 = *(i8*)(intptr_t)v2658;
	*(i8*)(intptr_t)(ws+3312) = v2659;
	i8 v2660 = (i8)(intptr_t)(f105_DetectCycle);

	((void(*)(void))(intptr_t)v2660)();

	i1 v2661 = *(i1*)(intptr_t)(ws+3320);
	i8 v2662 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v2662 = v2661;

	i8 v2663 = (i8)(intptr_t)(ws+3280);
	i1 v2664 = *(i1*)(intptr_t)v2663;
	i1 v2665 = (i1)+0;
	if (v2664==v2665) goto c02_026d; else goto c02_026e;

c02_026e:;

	i8 v2666 = (i8)(intptr_t)(ws+3296);
	i1 v2667 = *(i1*)(intptr_t)v2666;
	i1 v2668 = (i1)+0;
	if (v2667==v2668) goto c02_026d; else goto c02_026c;

c02_026c:;

	goto c02_025c;

c02_026d:;

c02_0267:;

c02_026f:;

	i8 v2669 = (i8)(intptr_t)(ws+3242);
	i1 v2670 = *(i1*)(intptr_t)v2669;
	i1 v2671 = (i1)+4;
	if (v2670==v2671) goto c02_0274; else goto c02_0273;

c02_0273:;

	i8 v2672 = (i8)(intptr_t)(ws+3272);
	i8 v2673 = *(i8*)(intptr_t)v2672;
	i8 v2674 = v2673+(+192);
	i8 v2675 = (i8)(intptr_t)(ws+3242);
	i1 v2676 = *(i1*)(intptr_t)v2675;
	i8 v2677 = v2676;
	i1 v2678 = (i1)+1;
	i8 v2679 = ((i8)v2677)<<v2678;
	i8 v2680 = v2674+v2679;
	i2 v2681 = *(i2*)(intptr_t)v2680;
	i8 v2682 = (i8)(intptr_t)(ws+3300);
	*(i2*)(intptr_t)v2682 = v2681;

	i8 v2683 = (i8)(intptr_t)(ws+3280);
	i1 v2684 = *(i1*)(intptr_t)v2683;
	i1 v2685 = (i1)+0;
	if (v2684==v2685) goto c02_0278; else goto c02_0279;

c02_0278:;

	i8 v2686 = (i8)(intptr_t)(ws+3244);
	i8 v2687 = (i8)(intptr_t)(ws+3242);
	i1 v2688 = *(i1*)(intptr_t)v2687;
	i8 v2689 = v2688;
	i1 v2690 = (i1)+1;
	i8 v2691 = ((i8)v2689)<<v2690;
	i8 v2692 = v2686+v2691;
	i2 v2693 = *(i2*)(intptr_t)v2692;
	i8 v2694 = (i8)(intptr_t)(ws+3298);
	*(i2*)(intptr_t)v2694 = v2693;

	goto c02_0275;

c02_0279:;

	i8 v2695 = (i8)(intptr_t)(ws+832);
	i8 v2696 = *(i8*)(intptr_t)v2695;
	i8 v2697 = v2696+(+192);
	i8 v2698 = (i8)(intptr_t)(ws+3242);
	i1 v2699 = *(i1*)(intptr_t)v2698;
	i8 v2700 = v2699;
	i1 v2701 = (i1)+1;
	i8 v2702 = ((i8)v2700)<<v2701;
	i8 v2703 = v2697+v2702;
	i2 v2704 = *(i2*)(intptr_t)v2703;
	i8 v2705 = (i8)(intptr_t)(ws+3298);
	*(i2*)(intptr_t)v2705 = v2704;

c02_0275:;

	i8 v2706 = (i8)(intptr_t)(ws+3300);
	i2 v2707 = *(i2*)(intptr_t)v2706;
	i8 v2708 = (i8)(intptr_t)(ws+3298);
	i2 v2709 = *(i2*)(intptr_t)v2708;
	if (v2707<v2709) goto c02_027d; else goto c02_027e;

c02_027d:;

	i8 v2710 = (i8)(intptr_t)(ws+3298);
	i2 v2711 = *(i2*)(intptr_t)v2710;
	i8 v2712 = (i8)(intptr_t)(ws+3272);
	i8 v2713 = *(i8*)(intptr_t)v2712;
	i8 v2714 = v2713+(+192);
	i8 v2715 = (i8)(intptr_t)(ws+3242);
	i1 v2716 = *(i1*)(intptr_t)v2715;
	i8 v2717 = v2716;
	i1 v2718 = (i1)+1;
	i8 v2719 = ((i8)v2717)<<v2718;
	i8 v2720 = v2714+v2719;
	*(i2*)(intptr_t)v2720 = v2711;

	i8 v2721 = (i8)(intptr_t)(ws+3272);
	i8 v2722 = *(i8*)(intptr_t)v2721;
	*(i8*)(intptr_t)(ws+3304) = v2722;
	i8 v2723 = (i8)(intptr_t)(f107_push);

	((void(*)(void))(intptr_t)v2723)();

c02_027e:;

c02_027a:;

	i8 v2724 = (i8)(intptr_t)(ws+3242);
	i1 v2725 = *(i1*)(intptr_t)v2724;
	i1 v2726 = v2725+(+1);
	i8 v2727 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2727 = v2726;

	goto c02_026f;

c02_0274:;

	i8 v2728 = (i8)(intptr_t)(ws+3272);
	i8 v2729 = *(i8*)(intptr_t)v2728;
	i8 v2730 = v2729+(+204);
	i1 v2731 = *(i1*)(intptr_t)v2730;
	i1 v2732 = v2731&(+1);
	i1 v2733 = (i1)+0;
	if (v2732==v2733) goto c02_0282; else goto c02_0283;

c02_0282:;

	i8 v2734 = (i8)(intptr_t)(ws+3272);
	i8 v2735 = *(i8*)(intptr_t)v2734;
	*(i8*)(intptr_t)(ws+3304) = v2735;
	i8 v2736 = (i8)(intptr_t)(f107_push);

	((void(*)(void))(intptr_t)v2736)();

	i8 v2737 = (i8)(intptr_t)(ws+3272);
	i8 v2738 = *(i8*)(intptr_t)v2737;
	i8 v2739 = v2738+(+204);
	i1 v2740 = *(i1*)(intptr_t)v2739;
	i1 v2741 = v2740|(+1);
	i8 v2742 = (i8)(intptr_t)(ws+3272);
	i8 v2743 = *(i8*)(intptr_t)v2742;
	i8 v2744 = v2743+(+204);
	*(i1*)(intptr_t)v2744 = v2741;

c02_0283:;

c02_027f:;

	goto c02_025c;

c02_0261:;

	i8 v2745 = (i8)(intptr_t)(ws+3256);
	i8 v2746 = *(i8*)(intptr_t)v2745;
	i8 v2747 = *(i8*)(intptr_t)v2746;
	i8 v2748 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v2748 = v2747;

	goto c02_0256;

c02_025b:;

	goto c02_0245;

c02_024a:;

	i8 v2749 = (i8)(intptr_t)c02_s0020;
	*(i8*)(intptr_t)(ws+3344) = v2749;
	i8 v2750 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2750)();

	i1 v2751 = (i1)+0;
	i8 v2752 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2752 = v2751;

c02_0284:;

	i8 v2753 = (i8)(intptr_t)(ws+3242);
	i1 v2754 = *(i1*)(intptr_t)v2753;
	i1 v2755 = (i1)+4;
	if (v2754==v2755) goto c02_0289; else goto c02_0288;

c02_0288:;

	i8 v2756 = (i8)(intptr_t)c02_s0021;
	*(i8*)(intptr_t)(ws+3344) = v2756;
	i8 v2757 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2757)();

	i8 v2758 = (i8)(intptr_t)(ws+3242);
	i1 v2759 = *(i1*)(intptr_t)v2758;
	*(i1*)(intptr_t)(ws+3304) = v2759;
	i8 v2760 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v2760)();

	i8 v2761 = (i8)(intptr_t)c02_s0022;
	*(i8*)(intptr_t)(ws+3344) = v2761;
	i8 v2762 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2762)();

	i8 v2763 = (i8)(intptr_t)(ws+582);
	i8 v2764 = (i8)(intptr_t)(ws+3242);
	i1 v2765 = *(i1*)(intptr_t)v2764;
	i8 v2766 = v2765;
	i1 v2767 = (i1)+1;
	i8 v2768 = ((i8)v2766)<<v2767;
	i8 v2769 = v2763+v2768;
	i2 v2770 = *(i2*)(intptr_t)v2769;
	*(i2*)(intptr_t)(ws+3304) = v2770;
	i8 v2771 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(void))(intptr_t)v2771)();

	i8 v2772 = (i8)(intptr_t)c02_s0023;
	*(i8*)(intptr_t)(ws+3344) = v2772;
	i8 v2773 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2773)();

	i8 v2774 = (i8)(intptr_t)(ws+3242);
	i1 v2775 = *(i1*)(intptr_t)v2774;
	i1 v2776 = v2775+(+1);
	i8 v2777 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2777 = v2776;

	goto c02_0284;

c02_0289:;

}
const i1 c02_s0024[] = { 0x43,0x4f,0x57,0x4c,0x49,0x4e,0x4b,0x3a,0x20,0 };
	void f12_print(void);
	void f38_GetFreeMemory(void);
	void f17_print_i16(void);
const i1 c02_s0025[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(void);
const i1 c02_s0026[] = { 0x53,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x0a,0 };
	void f62_SimpleError(void);

// SyntaxError workspace at ws+832 length ws+0
void f108_SyntaxError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2801 = (i8)(intptr_t)c02_s0026;
	*(i8*)(intptr_t)(ws+912) = v2801;
	i8 v2802 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(void))(intptr_t)v2802)();

}
const i1 c02_s0027[] = { 0x41,0x64,0x64,0x69,0x6e,0x67,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f89_OpenAndLoadCoo(void);
	void f85_FindSub(void);
	void f84_AddRef(void);

// AddInputFile workspace at ws+832 length ws+40
void f109_AddInputFile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2803 = (i8)(intptr_t)c02_s0027;
	*(i8*)(intptr_t)(ws+3344) = v2803;
	i8 v2804 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2804)();

	i8 v2805 = (i8)(intptr_t)(ws+832);
	i8 v2806 = *(i8*)(intptr_t)v2805;
	*(i8*)(intptr_t)(ws+3344) = v2806;
	i8 v2807 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2807)();

	i8 v2808 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2808)();

	i8 v2809 = (i8)(intptr_t)(ws+832);
	i8 v2810 = *(i8*)(intptr_t)v2809;
	*(i8*)(intptr_t)(ws+872) = v2810;
	i8 v2811 = (i8)(intptr_t)(f89_OpenAndLoadCoo);

	((void(*)(void))(intptr_t)v2811)();

	i8 v2812 = *(i8*)(intptr_t)(ws+880);
	i8 v2813 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v2813 = v2812;

	i8 v2814 = (i8)(intptr_t)(ws+840);
	i8 v2815 = *(i8*)(intptr_t)v2814;
	i8 v2816 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2816 = v2815;

	i8 v2817 = (i8)(intptr_t)(ws+760);
	i8 v2818 = *(i8*)(intptr_t)v2817;
	i8 v2819 = (i8)+0;
	if (v2818==v2819) goto c02_028d; else goto c02_028e;

c02_028d:;

	i8 v2820 = (i8)(intptr_t)(ws+848);
	i8 v2821 = *(i8*)(intptr_t)v2820;
	i8 v2822 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v2822 = v2821;

	i8 v2823 = (i8)(intptr_t)(ws+848);
	i8 v2824 = *(i8*)(intptr_t)v2823;
	i8 v2825 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2825 = v2824;

	goto c02_028a;

c02_028e:;

	i8 v2826 = (i8)(intptr_t)(ws+848);
	i8 v2827 = *(i8*)(intptr_t)v2826;
	i8 v2828 = (i8)(intptr_t)(ws+752);
	i8 v2829 = *(i8*)(intptr_t)v2828;
	i8 v2830 = v2829+(+672);
	*(i8*)(intptr_t)v2830 = v2827;

	i8 v2831 = (i8)(intptr_t)(ws+848);
	i8 v2832 = *(i8*)(intptr_t)v2831;
	i8 v2833 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2833 = v2832;

c02_028a:;

	i8 v2834 = (i8)(intptr_t)(ws+848);
	i8 v2835 = *(i8*)(intptr_t)v2834;
	*(i8*)(intptr_t)(ws+1104) = v2835;
	i2 v2836 = (i2)+0;
	*(i2*)(intptr_t)(ws+1112) = v2836;
	i8 v2837 = (i8)(intptr_t)(f85_FindSub);

	((void(*)(void))(intptr_t)v2837)();

	i8 v2838 = *(i8*)(intptr_t)(ws+1120);
	i8 v2839 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v2839 = v2838;

	i8 v2840 = (i8)(intptr_t)(ws+856);
	i8 v2841 = *(i8*)(intptr_t)v2840;
	i8 v2842 = *(i8*)(intptr_t)v2841;
	i8 v2843 = (i8)(intptr_t)(ws+864);
	*(i8*)(intptr_t)v2843 = v2842;

	i8 v2844 = (i8)(intptr_t)(ws+864);
	i8 v2845 = *(i8*)(intptr_t)v2844;
	i8 v2846 = (i8)+0;
	if (v2845==v2846) goto c02_0293; else goto c02_0292;

c02_0292:;

	i8 v2847 = (i8)(intptr_t)(ws+776);
	i8 v2848 = *(i8*)(intptr_t)v2847;
	i8 v2849 = (i8)+0;
	if (v2848==v2849) goto c02_0297; else goto c02_0298;

c02_0297:;

	i8 v2850 = (i8)(intptr_t)(ws+864);
	i8 v2851 = *(i8*)(intptr_t)v2850;
	i8 v2852 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v2852 = v2851;

c02_0298:;

c02_0294:;

c02_0293:;

c02_028f:;

	i8 v2853 = (i8)(intptr_t)(ws+784);
	i8 v2854 = *(i8*)(intptr_t)v2853;
	i8 v2855 = (i8)+0;
	if (v2854==v2855) goto c02_029d; else goto c02_029c;

c02_029c:;

	i8 v2856 = (i8)(intptr_t)(ws+784);
	i8 v2857 = *(i8*)(intptr_t)v2856;
	*(i8*)(intptr_t)(ws+1056) = v2857;
	i8 v2858 = (i8)(intptr_t)(ws+864);
	i8 v2859 = *(i8*)(intptr_t)v2858;
	*(i8*)(intptr_t)(ws+1064) = v2859;
	i1 v2860 = (i1)+0;
	*(i1*)(intptr_t)(ws+1072) = v2860;
	i8 v2861 = (i8)(intptr_t)(f84_AddRef);

	((void(*)(void))(intptr_t)v2861)();

c02_029d:;

c02_0299:;

	i8 v2862 = (i8)(intptr_t)(ws+864);
	i8 v2863 = *(i8*)(intptr_t)v2862;
	i8 v2864 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v2864 = v2863;

}
	void f24_ArgvInit(void);
	void f25_ArgvNext(void);
const i1 c02_s0028[] = { 0x2d,0x6f,0 };
	void f28_StrICmp(void);
	void f25_ArgvNext(void);
	void f108_SyntaxError(void);
	void f109_AddInputFile(void);
const i1 c02_s0029[] = { 0x4e,0x6f,0x20,0x6d,0x61,0x69,0x6e,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x69,0x6e,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0 };
	void f62_SimpleError(void);
const i1 c02_s002a[] = { 0x4e,0x6f,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0 };
	void f62_SimpleError(void);
const i1 c02_s002b[] = { 0x41,0x6e,0x61,0x6c,0x79,0x73,0x69,0x6e,0x67,0x2e,0x2e,0x2e,0x0a,0 };
	void f12_print(void);
	void f104_ResolveExternals(void);
	void f106_PlaceSubroutines(void);
	void f73_EmitterOpenfile(void);
const i1 c02_s002c[] = { 0x43,0x72,0x65,0x61,0x74,0x69,0x6e,0x67,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f90_InitStreams(void);
	void f91_SetStream(void);
	void f79_ArchEmitHeader(void);
	void f95_FlushStream(void);
	void f103_WriteAllSubroutinesToOutputFile(void);
	void f91_SetStream(void);
	void f80_ArchEmitFooter(void);
	void f95_FlushStream(void);
	void f74_EmitterClosefile(void);
const i1 c02_s002d[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f38_GetFreeMemory(void);
	void f17_print_i16(void);
const i1 c02_s002e[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(void);

// __main workspace at ws+0 length ws+832
void f3___main(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
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
	i8 v951 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v951 = v950;






















	i1 v1174 = (i1)+1;
	i8 v1175 = (i8)(intptr_t)(ws+590);
	*(i1*)(intptr_t)v1175 = v1174;













	i1 v1832 = (i1)+0;
	i8 v1833 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1833 = v1832;

	i1 v1834 = (i1)+0;
	i8 v1835 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1835 = v1834;









	i8 v2778 = (i8)(intptr_t)c02_s0024;
	*(i8*)(intptr_t)(ws+3344) = v2778;
	i8 v2779 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2779)();

	i8 v2780 = (i8)(intptr_t)(f38_GetFreeMemory);

	((void(*)(void))(intptr_t)v2780)();

	i8 v2781 = *(i8*)(intptr_t)(ws+832);
	i8 v2782 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v2782 = v2781;

	i8 v2783 = (i8)(intptr_t)(ws+744);
	i8 v2784 = *(i8*)(intptr_t)v2783;
	i1 v2785 = (i1)+10;
	i8 v2786 = ((i8)v2784)>>v2785;
	i2 v2787 = v2786;
	*(i2*)(intptr_t)(ws+3304) = v2787;
	i8 v2788 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(void))(intptr_t)v2788)();

	i8 v2789 = (i8)(intptr_t)c02_s0025;
	*(i8*)(intptr_t)(ws+3344) = v2789;
	i8 v2790 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2790)();

	i8 v2791 = (i8)+0;
	i8 v2792 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2792 = v2791;

	i8 v2793 = (i8)+0;
	i8 v2794 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v2794 = v2793;

	i8 v2795 = (i8)+0;
	i8 v2796 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v2796 = v2795;

	i8 v2797 = (i8)+0;
	i8 v2798 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v2798 = v2797;

	i8 v2799 = (i8)+0;
	i8 v2800 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v2800 = v2799;



	i8 v2865 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v2865)();

c02_029e:;

	i8 v2866 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v2866)();

	i8 v2867 = *(i8*)(intptr_t)(ws+832);
	i8 v2868 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2868 = v2867;

	i8 v2869 = (i8)(intptr_t)(ws+792);
	i8 v2870 = *(i8*)(intptr_t)v2869;
	i8 v2871 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v2871 = v2870;

	i8 v2872 = (i8)(intptr_t)(ws+800);
	i8 v2873 = *(i8*)(intptr_t)v2872;
	i8 v2874 = (i8)+0;
	if (v2873==v2874) goto c02_02a3; else goto c02_02a4;

c02_02a3:;

	goto c02_029f;

c02_02a4:;

c02_02a0:;

	i8 v2875 = (i8)(intptr_t)(ws+800);
	i8 v2876 = *(i8*)(intptr_t)v2875;
	*(i8*)(intptr_t)(ws+832) = v2876;
	i8 v2877 = (i8)(intptr_t)c02_s0028;
	*(i8*)(intptr_t)(ws+840) = v2877;
	i8 v2878 = (i8)(intptr_t)(f28_StrICmp);

	((void(*)(void))(intptr_t)v2878)();

	i1 v2879 = *(i1*)(intptr_t)(ws+848);
	i8 v2880 = (i8)(intptr_t)(ws+808);
	*(i1*)(intptr_t)v2880 = v2879;

	i8 v2881 = (i8)(intptr_t)(ws+808);
	i1 v2882 = *(i1*)(intptr_t)v2881;
	i1 v2883 = (i1)+0;
	if (v2882==v2883) goto c02_02a8; else goto c02_02a9;

c02_02a8:;

	i8 v2884 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v2884)();

	i8 v2885 = *(i8*)(intptr_t)(ws+832);
	i8 v2886 = (i8)(intptr_t)(ws+816);
	*(i8*)(intptr_t)v2886 = v2885;

	i8 v2887 = (i8)(intptr_t)(ws+816);
	i8 v2888 = *(i8*)(intptr_t)v2887;
	i8 v2889 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v2889 = v2888;

	goto c02_02a5;

c02_02a9:;

	i8 v2890 = (i8)(intptr_t)(ws+800);
	i8 v2891 = *(i8*)(intptr_t)v2890;
	i1 v2892 = *(i1*)(intptr_t)v2891;
	i1 v2893 = (i1)+45;
	if (v2892==v2893) goto c02_02ac; else goto c02_02ad;

c02_02ac:;

	i8 v2894 = (i8)(intptr_t)(f108_SyntaxError);

	((void(*)(void))(intptr_t)v2894)();

	goto c02_02a5;

c02_02ad:;

	i8 v2895 = (i8)(intptr_t)(ws+800);
	i8 v2896 = *(i8*)(intptr_t)v2895;
	*(i8*)(intptr_t)(ws+832) = v2896;
	i8 v2897 = (i8)(intptr_t)(f109_AddInputFile);

	((void(*)(void))(intptr_t)v2897)();

c02_02a5:;

	goto c02_029e;

c02_029f:;

	i8 v2898 = (i8)(intptr_t)(ws+776);
	i8 v2899 = *(i8*)(intptr_t)v2898;
	i8 v2900 = (i8)+0;
	if (v2899==v2900) goto c02_02b1; else goto c02_02b2;

c02_02b1:;

	i8 v2901 = (i8)(intptr_t)c02_s0029;
	*(i8*)(intptr_t)(ws+912) = v2901;
	i8 v2902 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(void))(intptr_t)v2902)();

c02_02b2:;

c02_02ae:;

	i8 v2903 = (i8)(intptr_t)(ws+768);
	i8 v2904 = *(i8*)(intptr_t)v2903;
	i8 v2905 = (i8)+0;
	if (v2904==v2905) goto c02_02b6; else goto c02_02b7;

c02_02b6:;

	i8 v2906 = (i8)(intptr_t)c02_s002a;
	*(i8*)(intptr_t)(ws+912) = v2906;
	i8 v2907 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(void))(intptr_t)v2907)();

c02_02b7:;

c02_02b3:;

	i8 v2908 = (i8)(intptr_t)c02_s002b;
	*(i8*)(intptr_t)(ws+3344) = v2908;
	i8 v2909 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2909)();

	i8 v2910 = (i8)(intptr_t)(f104_ResolveExternals);

	((void(*)(void))(intptr_t)v2910)();

	i8 v2911 = (i8)(intptr_t)(ws+776);
	i8 v2912 = *(i8*)(intptr_t)v2911;
	*(i8*)(intptr_t)(ws+832) = v2912;
	i8 v2913 = (i8)(intptr_t)(f106_PlaceSubroutines);

	((void(*)(void))(intptr_t)v2913)();

	i8 v2914 = (i8)(intptr_t)(ws+768);
	i8 v2915 = *(i8*)(intptr_t)v2914;
	*(i8*)(intptr_t)(ws+832) = v2915;
	i8 v2916 = (i8)(intptr_t)(f73_EmitterOpenfile);

	((void(*)(void))(intptr_t)v2916)();

	i8 v2917 = (i8)(intptr_t)c02_s002c;
	*(i8*)(intptr_t)(ws+3344) = v2917;
	i8 v2918 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2918)();

	i8 v2919 = (i8)(intptr_t)(ws+768);
	i8 v2920 = *(i8*)(intptr_t)v2919;
	*(i8*)(intptr_t)(ws+3344) = v2920;
	i8 v2921 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2921)();

	i8 v2922 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2922)();

	i8 v2923 = (i8)(intptr_t)(f90_InitStreams);

	((void(*)(void))(intptr_t)v2923)();

	i1 v2924 = (i1)+7;
	*(i1*)(intptr_t)(ws+888) = v2924;
	i8 v2925 = (i8)(intptr_t)(f91_SetStream);

	((void(*)(void))(intptr_t)v2925)();

	i8 v2926 = (i8)(intptr_t)(ws+760);
	i8 v2927 = *(i8*)(intptr_t)v2926;
	*(i8*)(intptr_t)(ws+832) = v2927;
	i8 v2928 = (i8)(intptr_t)(f79_ArchEmitHeader);

	((void(*)(void))(intptr_t)v2928)();

	i8 v2929 = (i8)(intptr_t)(f95_FlushStream);

	((void(*)(void))(intptr_t)v2929)();

	i8 v2930 = (i8)(intptr_t)(ws+760);
	i8 v2931 = *(i8*)(intptr_t)v2930;
	*(i8*)(intptr_t)(ws+832) = v2931;
	i8 v2932 = (i8)(intptr_t)(f103_WriteAllSubroutinesToOutputFile);

	((void(*)(void))(intptr_t)v2932)();

	i1 v2933 = (i1)+7;
	*(i1*)(intptr_t)(ws+888) = v2933;
	i8 v2934 = (i8)(intptr_t)(f91_SetStream);

	((void(*)(void))(intptr_t)v2934)();

	i8 v2935 = (i8)(intptr_t)(ws+760);
	i8 v2936 = *(i8*)(intptr_t)v2935;
	*(i8*)(intptr_t)(ws+832) = v2936;
	i8 v2937 = (i8)(intptr_t)(f80_ArchEmitFooter);

	((void(*)(void))(intptr_t)v2937)();

	i8 v2938 = (i8)(intptr_t)(f95_FlushStream);

	((void(*)(void))(intptr_t)v2938)();

	i8 v2939 = (i8)(intptr_t)(f74_EmitterClosefile);

	((void(*)(void))(intptr_t)v2939)();

	i8 v2940 = (i8)(intptr_t)c02_s002d;
	*(i8*)(intptr_t)(ws+3344) = v2940;
	i8 v2941 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2941)();

	i8 v2942 = (i8)(intptr_t)(f38_GetFreeMemory);

	((void(*)(void))(intptr_t)v2942)();

	i8 v2943 = *(i8*)(intptr_t)(ws+832);
	i8 v2944 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v2944 = v2943;

	i8 v2945 = (i8)(intptr_t)(ws+824);
	i8 v2946 = *(i8*)(intptr_t)v2945;
	i1 v2947 = (i1)+10;
	i8 v2948 = ((i8)v2946)>>v2947;
	i2 v2949 = v2948;
	*(i2*)(intptr_t)(ws+3304) = v2949;
	i8 v2950 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(void))(intptr_t)v2950)();

	i8 v2951 = (i8)(intptr_t)c02_s002e;
	*(i8*)(intptr_t)(ws+3344) = v2951;
	i8 v2952 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v2952)();

}
void cmain(void) {
	f3___main();
}
