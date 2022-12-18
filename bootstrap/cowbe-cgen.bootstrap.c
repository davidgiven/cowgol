#include "cowgol.h"
static i8 workspace[0x022e];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+4288 length ws+0
void f6_ExitWithError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
exit(1); 



}

// MemSet workspace at ws+4240 length ws+24
void f7_MemSet(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
putchar( 
*(i1*)(intptr_t)(ws+4304) 
); 



}
	void f9_print_char(void);

// print workspace at ws+4288 length ws+9
void f12_print(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v20 = (i1)+10;
	*(i1*)(intptr_t)(ws+4304) = v20;
	i8 v21 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v21)();

}

// UIToA workspace at ws+4328 length ws+49
void f14_UIToA(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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

// ArgvNext workspace at ws+4008 length ws+8
void f25_ArgvNext(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4280) 
); 



}

// GetFreeMemory workspace at ws+3992 length ws+8
void f38_GetFreeMemory(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v479 = (i8)+0;
	i8 v480 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v480 = v479;

}

// _fcb_init workspace at ws+4056 length ws+8
void f41__fcb_init(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

}
const i1 c02_s0001[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(void);

// StartError workspace at ws+4288 length ws+0
void f66_StartError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v956 = (i8)(intptr_t)c02_s0001;
	*(i8*)(intptr_t)(ws+4288) = v956;
	i8 v957 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v957)();

}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+4288 length ws+0
void f67_EndError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
const i1 c02_s0028[] = { 0x54,0x41,0x49,0x4c,0x43,0x41,0x4c,0x4c,0 };
const i1 c02_s0029[] = { 0x50,0x52,0x45,0x50,0x41,0x52,0x45,0x54,0x41,0x49,0x4c,0 };
const i1 c02_s002a[] = { 0x41,0x52,0x47,0x30,0 };
const i1 c02_s002b[] = { 0x41,0x52,0x47,0x31,0 };
const i1 c02_s002c[] = { 0x41,0x52,0x47,0x32,0 };
const i1 c02_s002d[] = { 0x41,0x52,0x47,0x34,0 };
const i1 c02_s002e[] = { 0x41,0x52,0x47,0x38,0 };
const i1 c02_s002f[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x30,0 };
const i1 c02_s0030[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x31,0 };
const i1 c02_s0031[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x32,0 };
const i1 c02_s0032[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x34,0 };
const i1 c02_s0033[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x38,0 };
const i1 c02_s0034[] = { 0x43,0x4f,0x4e,0x53,0x54,0x41,0x4e,0x54,0 };
const i1 c02_s0035[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s0036[] = { 0x41,0x44,0x44,0x52,0x45,0x53,0x53,0 };
const i1 c02_s0037[] = { 0x53,0x55,0x42,0x52,0x45,0x46,0 };
const i1 c02_s0038[] = { 0x44,0x45,0x52,0x45,0x46,0x30,0 };
const i1 c02_s0039[] = { 0x44,0x45,0x52,0x45,0x46,0x31,0 };
const i1 c02_s003a[] = { 0x44,0x45,0x52,0x45,0x46,0x32,0 };
const i1 c02_s003b[] = { 0x44,0x45,0x52,0x45,0x46,0x34,0 };
const i1 c02_s003c[] = { 0x44,0x45,0x52,0x45,0x46,0x38,0 };
const i1 c02_s003d[] = { 0x53,0x54,0x4f,0x52,0x45,0x30,0 };
const i1 c02_s003e[] = { 0x53,0x54,0x4f,0x52,0x45,0x31,0 };
const i1 c02_s003f[] = { 0x53,0x54,0x4f,0x52,0x45,0x32,0 };
const i1 c02_s0040[] = { 0x53,0x54,0x4f,0x52,0x45,0x34,0 };
const i1 c02_s0041[] = { 0x53,0x54,0x4f,0x52,0x45,0x38,0 };
const i1 c02_s0042[] = { 0x42,0x41,0x4e,0x44,0 };
const i1 c02_s0043[] = { 0x42,0x4f,0x52,0 };
const i1 c02_s0044[] = { 0x42,0x45,0x51,0x30,0 };
const i1 c02_s0045[] = { 0x42,0x45,0x51,0x31,0 };
const i1 c02_s0046[] = { 0x42,0x45,0x51,0x32,0 };
const i1 c02_s0047[] = { 0x42,0x45,0x51,0x34,0 };
const i1 c02_s0048[] = { 0x42,0x45,0x51,0x38,0 };
const i1 c02_s0049[] = { 0x42,0x4c,0x54,0x53,0x30,0 };
const i1 c02_s004a[] = { 0x42,0x4c,0x54,0x53,0x31,0 };
const i1 c02_s004b[] = { 0x42,0x4c,0x54,0x53,0x32,0 };
const i1 c02_s004c[] = { 0x42,0x4c,0x54,0x53,0x34,0 };
const i1 c02_s004d[] = { 0x42,0x4c,0x54,0x53,0x38,0 };
const i1 c02_s004e[] = { 0x42,0x4c,0x54,0x55,0x30,0 };
const i1 c02_s004f[] = { 0x42,0x4c,0x54,0x55,0x31,0 };
const i1 c02_s0050[] = { 0x42,0x4c,0x54,0x55,0x32,0 };
const i1 c02_s0051[] = { 0x42,0x4c,0x54,0x55,0x34,0 };
const i1 c02_s0052[] = { 0x42,0x4c,0x54,0x55,0x38,0 };
const i1 c02_s0053[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x30,0 };
const i1 c02_s0054[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x31,0 };
const i1 c02_s0055[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x32,0 };
const i1 c02_s0056[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x34,0 };
const i1 c02_s0057[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x38,0 };
const i1 c02_s0058[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x30,0 };
const i1 c02_s0059[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x31,0 };
const i1 c02_s005a[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x32,0 };
const i1 c02_s005b[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x34,0 };
const i1 c02_s005c[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x38,0 };
const i1 c02_s005d[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x30,0 };
const i1 c02_s005e[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x31,0 };
const i1 c02_s005f[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x32,0 };
const i1 c02_s0060[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x34,0 };
const i1 c02_s0061[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x38,0 };
const i1 c02_s0062[] = { 0x43,0x41,0x53,0x54,0x31,0x30,0 };
const i1 c02_s0063[] = { 0x43,0x41,0x53,0x54,0x31,0x31,0 };
const i1 c02_s0064[] = { 0x43,0x41,0x53,0x54,0x31,0x32,0 };
const i1 c02_s0065[] = { 0x43,0x41,0x53,0x54,0x31,0x34,0 };
const i1 c02_s0066[] = { 0x43,0x41,0x53,0x54,0x31,0x38,0 };
const i1 c02_s0067[] = { 0x43,0x41,0x53,0x54,0x32,0x30,0 };
const i1 c02_s0068[] = { 0x43,0x41,0x53,0x54,0x32,0x31,0 };
const i1 c02_s0069[] = { 0x43,0x41,0x53,0x54,0x32,0x32,0 };
const i1 c02_s006a[] = { 0x43,0x41,0x53,0x54,0x32,0x34,0 };
const i1 c02_s006b[] = { 0x43,0x41,0x53,0x54,0x32,0x38,0 };
const i1 c02_s006c[] = { 0x43,0x41,0x53,0x54,0x34,0x30,0 };
const i1 c02_s006d[] = { 0x43,0x41,0x53,0x54,0x34,0x31,0 };
const i1 c02_s006e[] = { 0x43,0x41,0x53,0x54,0x34,0x32,0 };
const i1 c02_s006f[] = { 0x43,0x41,0x53,0x54,0x34,0x34,0 };
const i1 c02_s0070[] = { 0x43,0x41,0x53,0x54,0x34,0x38,0 };
const i1 c02_s0071[] = { 0x43,0x41,0x53,0x54,0x38,0x30,0 };
const i1 c02_s0072[] = { 0x43,0x41,0x53,0x54,0x38,0x31,0 };
const i1 c02_s0073[] = { 0x43,0x41,0x53,0x54,0x38,0x32,0 };
const i1 c02_s0074[] = { 0x43,0x41,0x53,0x54,0x38,0x34,0 };
const i1 c02_s0075[] = { 0x43,0x41,0x53,0x54,0x38,0x38,0 };
const i1 c02_s0076[] = { 0x4e,0x4f,0x54,0x30,0 };
const i1 c02_s0077[] = { 0x4e,0x4f,0x54,0x31,0 };
const i1 c02_s0078[] = { 0x4e,0x4f,0x54,0x32,0 };
const i1 c02_s0079[] = { 0x4e,0x4f,0x54,0x34,0 };
const i1 c02_s007a[] = { 0x4e,0x4f,0x54,0x38,0 };
const i1 c02_s007b[] = { 0x4e,0x45,0x47,0x30,0 };
const i1 c02_s007c[] = { 0x4e,0x45,0x47,0x31,0 };
const i1 c02_s007d[] = { 0x4e,0x45,0x47,0x32,0 };
const i1 c02_s007e[] = { 0x4e,0x45,0x47,0x34,0 };
const i1 c02_s007f[] = { 0x4e,0x45,0x47,0x38,0 };
const i1 c02_s0080[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x30,0 };
const i1 c02_s0081[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x31,0 };
const i1 c02_s0082[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x32,0 };
const i1 c02_s0083[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x34,0 };
const i1 c02_s0084[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x38,0 };
const i1 c02_s0085[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x30,0 };
const i1 c02_s0086[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x31,0 };
const i1 c02_s0087[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x32,0 };
const i1 c02_s0088[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x34,0 };
const i1 c02_s0089[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x38,0 };
const i1 c02_s008a[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x30,0 };
const i1 c02_s008b[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x31,0 };
const i1 c02_s008c[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x32,0 };
const i1 c02_s008d[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x34,0 };
const i1 c02_s008e[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x38,0 };
const i1 c02_s008f[] = { 0x53,0x55,0x42,0x30,0 };
const i1 c02_s0090[] = { 0x53,0x55,0x42,0x31,0 };
const i1 c02_s0091[] = { 0x53,0x55,0x42,0x32,0 };
const i1 c02_s0092[] = { 0x53,0x55,0x42,0x34,0 };
const i1 c02_s0093[] = { 0x53,0x55,0x42,0x38,0 };
const i1 c02_s0094[] = { 0x44,0x49,0x56,0x55,0x30,0 };
const i1 c02_s0095[] = { 0x44,0x49,0x56,0x55,0x31,0 };
const i1 c02_s0096[] = { 0x44,0x49,0x56,0x55,0x32,0 };
const i1 c02_s0097[] = { 0x44,0x49,0x56,0x55,0x34,0 };
const i1 c02_s0098[] = { 0x44,0x49,0x56,0x55,0x38,0 };
const i1 c02_s0099[] = { 0x44,0x49,0x56,0x53,0x30,0 };
const i1 c02_s009a[] = { 0x44,0x49,0x56,0x53,0x31,0 };
const i1 c02_s009b[] = { 0x44,0x49,0x56,0x53,0x32,0 };
const i1 c02_s009c[] = { 0x44,0x49,0x56,0x53,0x34,0 };
const i1 c02_s009d[] = { 0x44,0x49,0x56,0x53,0x38,0 };
const i1 c02_s009e[] = { 0x52,0x45,0x4d,0x55,0x30,0 };
const i1 c02_s009f[] = { 0x52,0x45,0x4d,0x55,0x31,0 };
const i1 c02_s00a0[] = { 0x52,0x45,0x4d,0x55,0x32,0 };
const i1 c02_s00a1[] = { 0x52,0x45,0x4d,0x55,0x34,0 };
const i1 c02_s00a2[] = { 0x52,0x45,0x4d,0x55,0x38,0 };
const i1 c02_s00a3[] = { 0x52,0x45,0x4d,0x53,0x30,0 };
const i1 c02_s00a4[] = { 0x52,0x45,0x4d,0x53,0x31,0 };
const i1 c02_s00a5[] = { 0x52,0x45,0x4d,0x53,0x32,0 };
const i1 c02_s00a6[] = { 0x52,0x45,0x4d,0x53,0x34,0 };
const i1 c02_s00a7[] = { 0x52,0x45,0x4d,0x53,0x38,0 };
const i1 c02_s00a8[] = { 0x41,0x44,0x44,0x30,0 };
const i1 c02_s00a9[] = { 0x41,0x44,0x44,0x31,0 };
const i1 c02_s00aa[] = { 0x41,0x44,0x44,0x32,0 };
const i1 c02_s00ab[] = { 0x41,0x44,0x44,0x34,0 };
const i1 c02_s00ac[] = { 0x41,0x44,0x44,0x38,0 };
const i1 c02_s00ad[] = { 0x4d,0x55,0x4c,0x30,0 };
const i1 c02_s00ae[] = { 0x4d,0x55,0x4c,0x31,0 };
const i1 c02_s00af[] = { 0x4d,0x55,0x4c,0x32,0 };
const i1 c02_s00b0[] = { 0x4d,0x55,0x4c,0x34,0 };
const i1 c02_s00b1[] = { 0x4d,0x55,0x4c,0x38,0 };
const i1 c02_s00b2[] = { 0x41,0x4e,0x44,0x30,0 };
const i1 c02_s00b3[] = { 0x41,0x4e,0x44,0x31,0 };
const i1 c02_s00b4[] = { 0x41,0x4e,0x44,0x32,0 };
const i1 c02_s00b5[] = { 0x41,0x4e,0x44,0x34,0 };
const i1 c02_s00b6[] = { 0x41,0x4e,0x44,0x38,0 };
const i1 c02_s00b7[] = { 0x4f,0x52,0x30,0 };
const i1 c02_s00b8[] = { 0x4f,0x52,0x31,0 };
const i1 c02_s00b9[] = { 0x4f,0x52,0x32,0 };
const i1 c02_s00ba[] = { 0x4f,0x52,0x34,0 };
const i1 c02_s00bb[] = { 0x4f,0x52,0x38,0 };
const i1 c02_s00bc[] = { 0x45,0x4f,0x52,0x30,0 };
const i1 c02_s00bd[] = { 0x45,0x4f,0x52,0x31,0 };
const i1 c02_s00be[] = { 0x45,0x4f,0x52,0x32,0 };
const i1 c02_s00bf[] = { 0x45,0x4f,0x52,0x34,0 };
const i1 c02_s00c0[] = { 0x45,0x4f,0x52,0x38,0 };
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

	{ .ptr = (void*)c02_s00bf },

	{ .ptr = (void*)c02_s00c0 },

};

// MidcodeName workspace at ws+4216 length ws+16
void f78_MidcodeName(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;


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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v1200 = (i1)+32;
	*(i1*)(intptr_t)(ws+4336) = v1200;
	i8 v1201 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1201)();

}
	void f83_E_b8(void);

// E_comma workspace at ws+4248 length ws+0
void f87_E_comma(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v1202 = (i1)+44;
	*(i1*)(intptr_t)(ws+4336) = v1202;
	i8 v1203 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1203)();

}
	void f83_E_b8(void);

// E_tab workspace at ws+4224 length ws+0
void f88_E_tab(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v1204 = (i1)+9;
	*(i1*)(intptr_t)(ws+4336) = v1204;
	i8 v1205 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1205)();

}
	void f83_E_b8(void);

// E_nl workspace at ws+4224 length ws+0
void f89_E_nl(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v1206 = (i1)+10;
	*(i1*)(intptr_t)(ws+4336) = v1206;
	i8 v1207 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v1207)();

}
	void f83_E_b8(void);

// E workspace at ws+4320 length ws+9
void f92_E(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
const i1 c02_s00c1[] = { 0x5f,0x73,0 };
	void f92_E(void);
	void f101_E_h16(void);
	void f83_E_b8(void);
	void f84_E_b16(void);
	void f83_E_b8(void);
	void f84_E_b16(void);

// E_wsref workspace at ws+4264 length ws+6
void f105_E_wsref(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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

	i8 v1373 = (i8)(intptr_t)c02_s00c1;
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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
const i1 c02_s00c2[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f68_SimpleError(void);

// EmitterOpenfile workspace at ws+3984 length ws+9
void f108_EmitterOpenfile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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

	i8 v1436 = (i8)(intptr_t)c02_s00c2;
	*(i8*)(intptr_t)(ws+4280) = v1436;
	i8 v1437 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v1437)();

c02_015e:;

c02_015a:;

}
	void f80_WriteB8(void);
	void f81_WriteB16(void);
	void f55_FCBClose(void);
const i1 c02_s00c3[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f68_SimpleError(void);

// EmitterClosefile workspace at ws+3984 length ws+1
void f109_EmitterClosefile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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

	i8 v1449 = (i8)(intptr_t)c02_s00c3;
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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	void f80_WriteB8(void);

// EmitterReferenceSubroutineById workspace at ws+4048 length ws+5
void f112_EmitterReferenceSubroutineById(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v1505 = (i1)+82;
	*(i1*)(intptr_t)(ws+4360) = v1505;
	i8 v1506 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1506)();

	i2 v1507 = (i2)+5;
	*(i2*)(intptr_t)(ws+4352) = v1507;
	i8 v1508 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1508)();

	i8 v1509 = (i8)(intptr_t)(ws+4048);
	i2 v1510 = *(i2*)(intptr_t)v1509;
	*(i2*)(intptr_t)(ws+4352) = v1510;
	i8 v1511 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1511)();

	i8 v1512 = (i8)(intptr_t)(ws+4050);
	i2 v1513 = *(i2*)(intptr_t)v1512;
	*(i2*)(intptr_t)(ws+4352) = v1513;
	i8 v1514 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1514)();

	i8 v1515 = (i8)(intptr_t)(ws+4052);
	i1 v1516 = *(i1*)(intptr_t)v1515;
	*(i1*)(intptr_t)(ws+4360) = v1516;
	i8 v1517 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1517)();

}
	void f80_WriteB8(void);
	void f81_WriteB16(void);
	void f81_WriteB16(void);
	void f80_WriteB8(void);
	void f81_WriteB16(void);

// EmitterDeclareWorkspace workspace at ws+4024 length ws+6
void f114_EmitterDeclareWorkspace(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v1529 = (i1)+87;
	*(i1*)(intptr_t)(ws+4360) = v1529;
	i8 v1530 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1530)();

	i2 v1531 = (i2)+5;
	*(i2*)(intptr_t)(ws+4352) = v1531;
	i8 v1532 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1532)();

	i8 v1533 = (i8)(intptr_t)(ws+4024);
	i2 v1534 = *(i2*)(intptr_t)v1533;
	*(i2*)(intptr_t)(ws+4352) = v1534;
	i8 v1535 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1535)();

	i8 v1536 = (i8)(intptr_t)(ws+4026);
	i1 v1537 = *(i1*)(intptr_t)v1536;
	*(i1*)(intptr_t)(ws+4360) = v1537;
	i8 v1538 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(void))(intptr_t)v1538)();

	i8 v1539 = (i8)(intptr_t)(ws+4028);
	i2 v1540 = *(i2*)(intptr_t)v1539;
	*(i2*)(intptr_t)(ws+4352) = v1540;
	i8 v1541 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(void))(intptr_t)v1541)();

}
	void f46_FCBGetChar(void);

// I_b8 workspace at ws+4152 length ws+2
void f115_I_b8(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1542 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4160) = v1542;
	i8 v1543 = (i8)(intptr_t)(f46_FCBGetChar);

	((void(*)(void))(intptr_t)v1543)();

	i1 v1544 = *(i1*)(intptr_t)(ws+4168);
	i8 v1545 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v1545 = v1544;

	i8 v1546 = (i8)(intptr_t)(ws+4153);
	i1 v1547 = *(i1*)(intptr_t)v1546;
	i8 v1548 = (i8)(intptr_t)(ws+4152);
	*(i1*)(intptr_t)v1548 = v1547;

}
	void f115_I_b8(void);
	void f115_I_b8(void);

// I_b16 workspace at ws+4136 length ws+4
void f116_I_b16(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1549 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1549)();

	i1 v1550 = *(i1*)(intptr_t)(ws+4152);
	i8 v1551 = (i8)(intptr_t)(ws+4138);
	*(i1*)(intptr_t)v1551 = v1550;

	i8 v1552 = (i8)(intptr_t)(ws+4138);
	i1 v1553 = *(i1*)(intptr_t)v1552;
	i2 v1554 = v1553;
	i8 v1555 = (i8)(intptr_t)(ws+4136);
	*(i2*)(intptr_t)v1555 = v1554;

	i8 v1556 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1556)();

	i1 v1557 = *(i1*)(intptr_t)(ws+4152);
	i8 v1558 = (i8)(intptr_t)(ws+4139);
	*(i1*)(intptr_t)v1558 = v1557;

	i8 v1559 = (i8)(intptr_t)(ws+4136);
	i2 v1560 = *(i2*)(intptr_t)v1559;
	i8 v1561 = (i8)(intptr_t)(ws+4139);
	i1 v1562 = *(i1*)(intptr_t)v1561;
	i2 v1563 = v1562;
	i1 v1564 = (i1)+8;
	i2 v1565 = ((i2)v1563)<<v1564;
	i2 v1566 = v1560|v1565;
	i8 v1567 = (i8)(intptr_t)(ws+4136);
	*(i2*)(intptr_t)v1567 = v1566;

}
	void f116_I_b16(void);
	void f116_I_b16(void);

// I_b32 workspace at ws+4096 length ws+8
void f117_I_b32(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1568 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1568)();

	i2 v1569 = *(i2*)(intptr_t)(ws+4136);
	i8 v1570 = (i8)(intptr_t)(ws+4100);
	*(i2*)(intptr_t)v1570 = v1569;

	i8 v1571 = (i8)(intptr_t)(ws+4100);
	i2 v1572 = *(i2*)(intptr_t)v1571;
	i4 v1573 = v1572;
	i8 v1574 = (i8)(intptr_t)(ws+4096);
	*(i4*)(intptr_t)v1574 = v1573;

	i8 v1575 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1575)();

	i2 v1576 = *(i2*)(intptr_t)(ws+4136);
	i8 v1577 = (i8)(intptr_t)(ws+4102);
	*(i2*)(intptr_t)v1577 = v1576;

	i8 v1578 = (i8)(intptr_t)(ws+4096);
	i4 v1579 = *(i4*)(intptr_t)v1578;
	i8 v1580 = (i8)(intptr_t)(ws+4102);
	i2 v1581 = *(i2*)(intptr_t)v1580;
	i4 v1582 = v1581;
	i1 v1583 = (i1)+16;
	i4 v1584 = ((i4)v1582)<<v1583;
	i4 v1585 = v1579|v1584;
	i8 v1586 = (i8)(intptr_t)(ws+4096);
	*(i4*)(intptr_t)v1586 = v1585;

}
	void f116_I_b16(void);

// I_bsize workspace at ws+4128 length ws+4
void f118_I_bsize(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1587 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1587)();

	i2 v1588 = *(i2*)(intptr_t)(ws+4136);
	i8 v1589 = (i8)(intptr_t)(ws+4130);
	*(i2*)(intptr_t)v1589 = v1588;

	i8 v1590 = (i8)(intptr_t)(ws+4130);
	i2 v1591 = *(i2*)(intptr_t)v1590;
	i8 v1592 = (i8)(intptr_t)(ws+4128);
	*(i2*)(intptr_t)v1592 = v1591;

}
	void f115_I_b8(void);
	void f33_Alloc(void);
	void f115_I_b8(void);

// I_countedstring workspace at ws+4112 length ws+33
void f119_I_countedstring(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1593 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1593)();

	i1 v1594 = *(i1*)(intptr_t)(ws+4152);
	i8 v1595 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v1595 = v1594;

	i8 v1596 = (i8)(intptr_t)(ws+4120);
	i1 v1597 = *(i1*)(intptr_t)v1596;
	i8 v1598 = (i8)(intptr_t)(ws+4121);
	*(i1*)(intptr_t)v1598 = v1597;

	i8 v1599 = (i8)(intptr_t)(ws+4121);
	i1 v1600 = *(i1*)(intptr_t)v1599;
	i1 v1601 = v1600+(+1);
	i8 v1602 = v1601;
	*(i8*)(intptr_t)(ws+4152) = v1602;
	i8 v1603 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v1603)();

	i8 v1604 = *(i8*)(intptr_t)(ws+4160);
	i8 v1605 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v1605 = v1604;

	i8 v1606 = (i8)(intptr_t)(ws+4128);
	i8 v1607 = *(i8*)(intptr_t)v1606;
	i8 v1608 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v1608 = v1607;

	i8 v1609 = (i8)(intptr_t)(ws+4112);
	i8 v1610 = *(i8*)(intptr_t)v1609;
	i8 v1611 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v1611 = v1610;

c02_0164:;

	i8 v1612 = (i8)(intptr_t)(ws+4121);
	i1 v1613 = *(i1*)(intptr_t)v1612;
	i1 v1614 = (i1)+0;
	if (v1613==v1614) goto c02_0169; else goto c02_0168;

c02_0168:;

	i8 v1615 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1615)();

	i1 v1616 = *(i1*)(intptr_t)(ws+4152);
	i8 v1617 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v1617 = v1616;

	i8 v1618 = (i8)(intptr_t)(ws+4144);
	i1 v1619 = *(i1*)(intptr_t)v1618;
	i8 v1620 = (i8)(intptr_t)(ws+4136);
	i8 v1621 = *(i8*)(intptr_t)v1620;
	*(i1*)(intptr_t)v1621 = v1619;

	i8 v1622 = (i8)(intptr_t)(ws+4136);
	i8 v1623 = *(i8*)(intptr_t)v1622;
	i8 v1624 = v1623+(+1);
	i8 v1625 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v1625 = v1624;

	i8 v1626 = (i8)(intptr_t)(ws+4121);
	i1 v1627 = *(i1*)(intptr_t)v1626;
	i1 v1628 = v1627+(-1);
	i8 v1629 = (i8)(intptr_t)(ws+4121);
	*(i1*)(intptr_t)v1629 = v1628;

	goto c02_0164;

c02_0169:;

	i1 v1630 = (i1)+0;
	i8 v1631 = (i8)(intptr_t)(ws+4136);
	i8 v1632 = *(i8*)(intptr_t)v1631;
	*(i1*)(intptr_t)v1632 = v1630;

}
	void f52_FCBOpenIn(void);
	void f69_CannotOpen(void);

// InputterOpenfile workspace at ws+3984 length ws+9
void f120_InputterOpenfile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1633 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4000) = v1633;
	i8 v1634 = (i8)(intptr_t)(ws+3984);
	i8 v1635 = *(i8*)(intptr_t)v1634;
	*(i8*)(intptr_t)(ws+4008) = v1635;
	i8 v1636 = (i8)(intptr_t)(f52_FCBOpenIn);

	((void(*)(void))(intptr_t)v1636)();

	i1 v1637 = *(i1*)(intptr_t)(ws+4016);
	i8 v1638 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v1638 = v1637;

	i8 v1639 = (i8)(intptr_t)(ws+3992);
	i1 v1640 = *(i1*)(intptr_t)v1639;
	i1 v1641 = (i1)+0;
	if (v1640==v1641) goto c02_016e; else goto c02_016d;

c02_016d:;

	i8 v1642 = (i8)(intptr_t)(ws+3984);
	i8 v1643 = *(i8*)(intptr_t)v1642;
	*(i8*)(intptr_t)(ws+4000) = v1643;
	i8 v1644 = (i8)(intptr_t)(f69_CannotOpen);

	((void(*)(void))(intptr_t)v1644)();

c02_016e:;

c02_016a:;

}
	void f55_FCBClose(void);

// InputterClosefile workspace at ws+3984 length ws+2
void f121_InputterClosefile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1645 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+3992) = v1645;
	i8 v1646 = (i8)(intptr_t)(f55_FCBClose);

	((void(*)(void))(intptr_t)v1646)();

	i1 v1647 = *(i1*)(intptr_t)(ws+4000);
	i8 v1648 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v1648 = v1647;

	i8 v1649 = (i8)(intptr_t)(ws+3984);
	i1 v1650 = *(i1*)(intptr_t)v1649;
	i8 v1651 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v1651 = v1650;

}

// ReadMid0 workspace at ws+4088 length ws+0
void f122_ReadMid0(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

}
	void f117_I_b32(void);

// ReadMid1 workspace at ws+4088 length ws+4
void f123_ReadMid1(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1652 = (i8)(intptr_t)(f117_I_b32);

	((void(*)(void))(intptr_t)v1652)();

	i4 v1653 = *(i4*)(intptr_t)(ws+4096);
	i8 v1654 = (i8)(intptr_t)(ws+4088);
	*(i4*)(intptr_t)v1654 = v1653;

	i8 v1655 = (i8)(intptr_t)(ws+4088);
	i4 v1656 = *(i4*)(intptr_t)v1655;
	i8 v1657 = (i8)(intptr_t)(ws+4080);
	i8 v1658 = *(i8*)(intptr_t)v1657;
	*(i4*)(intptr_t)v1658 = v1656;

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);
	void f115_I_b8(void);
	void f115_I_b8(void);

// ReadMid2 workspace at ws+4088 length ws+38
void f124_ReadMid2(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1659 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1659)();

	i2 v1660 = *(i2*)(intptr_t)(ws+4136);
	i8 v1661 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1661 = v1660;

	i8 v1662 = (i8)(intptr_t)(ws+4088);
	i2 v1663 = *(i2*)(intptr_t)v1662;
	*(i2*)(intptr_t)(ws+4256) = v1663;
	i8 v1664 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1664)();

	i8 v1665 = *(i8*)(intptr_t)(ws+4264);
	i8 v1666 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1666 = v1665;

	i8 v1667 = (i8)(intptr_t)(ws+4096);
	i8 v1668 = *(i8*)(intptr_t)v1667;
	i8 v1669 = (i8)(intptr_t)(ws+4080);
	i8 v1670 = *(i8*)(intptr_t)v1669;
	*(i8*)(intptr_t)v1670 = v1668;

	i8 v1671 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1671)();

	i2 v1672 = *(i2*)(intptr_t)(ws+4136);
	i8 v1673 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v1673 = v1672;

	i8 v1674 = (i8)(intptr_t)(ws+4104);
	i2 v1675 = *(i2*)(intptr_t)v1674;
	*(i2*)(intptr_t)(ws+4256) = v1675;
	i8 v1676 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1676)();

	i8 v1677 = *(i8*)(intptr_t)(ws+4264);
	i8 v1678 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v1678 = v1677;

	i8 v1679 = (i8)(intptr_t)(ws+4112);
	i8 v1680 = *(i8*)(intptr_t)v1679;
	i8 v1681 = (i8)(intptr_t)(ws+4080);
	i8 v1682 = *(i8*)(intptr_t)v1681;
	i8 v1683 = v1682+(+8);
	*(i8*)(intptr_t)v1683 = v1680;

	i8 v1684 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1684)();

	i1 v1685 = *(i1*)(intptr_t)(ws+4152);
	i8 v1686 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v1686 = v1685;

	i8 v1687 = (i8)(intptr_t)(ws+4120);
	i1 v1688 = *(i1*)(intptr_t)v1687;
	i8 v1689 = (i8)(intptr_t)(ws+4080);
	i8 v1690 = *(i8*)(intptr_t)v1689;
	i8 v1691 = v1690+(+18);
	*(i1*)(intptr_t)v1691 = v1688;

	i8 v1692 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v1692)();

	i2 v1693 = *(i2*)(intptr_t)(ws+4128);
	i8 v1694 = (i8)(intptr_t)(ws+4122);
	*(i2*)(intptr_t)v1694 = v1693;

	i8 v1695 = (i8)(intptr_t)(ws+4122);
	i2 v1696 = *(i2*)(intptr_t)v1695;
	i8 v1697 = (i8)(intptr_t)(ws+4080);
	i8 v1698 = *(i8*)(intptr_t)v1697;
	i8 v1699 = v1698+(+20);
	*(i2*)(intptr_t)v1699 = v1696;

	i8 v1700 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1700)();

	i1 v1701 = *(i1*)(intptr_t)(ws+4152);
	i8 v1702 = (i8)(intptr_t)(ws+4124);
	*(i1*)(intptr_t)v1702 = v1701;

	i8 v1703 = (i8)(intptr_t)(ws+4124);
	i1 v1704 = *(i1*)(intptr_t)v1703;
	i8 v1705 = (i8)(intptr_t)(ws+4080);
	i8 v1706 = *(i8*)(intptr_t)v1705;
	i8 v1707 = v1706+(+22);
	*(i1*)(intptr_t)v1707 = v1704;

	i8 v1708 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1708)();

	i1 v1709 = *(i1*)(intptr_t)(ws+4152);
	i8 v1710 = (i8)(intptr_t)(ws+4125);
	*(i1*)(intptr_t)v1710 = v1709;

	i8 v1711 = (i8)(intptr_t)(ws+4125);
	i1 v1712 = *(i1*)(intptr_t)v1711;
	i8 v1713 = (i8)(intptr_t)(ws+4080);
	i8 v1714 = *(i8*)(intptr_t)v1713;
	i8 v1715 = v1714+(+23);
	*(i1*)(intptr_t)v1715 = v1712;

}
	void f116_I_b16(void);
	void f116_I_b16(void);
	void f116_I_b16(void);
	void f115_I_b8(void);

// ReadMid3 workspace at ws+4088 length ws+7
void f125_ReadMid3(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1716 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1716)();

	i2 v1717 = *(i2*)(intptr_t)(ws+4136);
	i8 v1718 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1718 = v1717;

	i8 v1719 = (i8)(intptr_t)(ws+4088);
	i2 v1720 = *(i2*)(intptr_t)v1719;
	i8 v1721 = (i8)(intptr_t)(ws+4080);
	i8 v1722 = *(i8*)(intptr_t)v1721;
	*(i2*)(intptr_t)v1722 = v1720;

	i8 v1723 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1723)();

	i2 v1724 = *(i2*)(intptr_t)(ws+4136);
	i8 v1725 = (i8)(intptr_t)(ws+4090);
	*(i2*)(intptr_t)v1725 = v1724;

	i8 v1726 = (i8)(intptr_t)(ws+4090);
	i2 v1727 = *(i2*)(intptr_t)v1726;
	i8 v1728 = (i8)(intptr_t)(ws+4080);
	i8 v1729 = *(i8*)(intptr_t)v1728;
	i8 v1730 = v1729+(+2);
	*(i2*)(intptr_t)v1730 = v1727;

	i8 v1731 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1731)();

	i2 v1732 = *(i2*)(intptr_t)(ws+4136);
	i8 v1733 = (i8)(intptr_t)(ws+4092);
	*(i2*)(intptr_t)v1733 = v1732;

	i8 v1734 = (i8)(intptr_t)(ws+4092);
	i2 v1735 = *(i2*)(intptr_t)v1734;
	i8 v1736 = (i8)(intptr_t)(ws+4080);
	i8 v1737 = *(i8*)(intptr_t)v1736;
	i8 v1738 = v1737+(+4);
	*(i2*)(intptr_t)v1738 = v1735;

	i8 v1739 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1739)();

	i1 v1740 = *(i1*)(intptr_t)(ws+4152);
	i8 v1741 = (i8)(intptr_t)(ws+4094);
	*(i1*)(intptr_t)v1741 = v1740;

	i8 v1742 = (i8)(intptr_t)(ws+4094);
	i1 v1743 = *(i1*)(intptr_t)v1742;
	i8 v1744 = (i8)(intptr_t)(ws+4080);
	i8 v1745 = *(i8*)(intptr_t)v1744;
	i8 v1746 = v1745+(+6);
	*(i1*)(intptr_t)v1746 = v1743;

}
	void f115_I_b8(void);

// ReadMid4 workspace at ws+4088 length ws+1
void f126_ReadMid4(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1747 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1747)();

	i1 v1748 = *(i1*)(intptr_t)(ws+4152);
	i8 v1749 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v1749 = v1748;

	i8 v1750 = (i8)(intptr_t)(ws+4088);
	i1 v1751 = *(i1*)(intptr_t)v1750;
	i8 v1752 = (i8)(intptr_t)(ws+4080);
	i8 v1753 = *(i8*)(intptr_t)v1752;
	*(i1*)(intptr_t)v1753 = v1751;

}
	void f117_I_b32(void);
	void f116_I_b16(void);

// ReadMid5 workspace at ws+4088 length ws+6
void f127_ReadMid5(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1754 = (i8)(intptr_t)(f117_I_b32);

	((void(*)(void))(intptr_t)v1754)();

	i4 v1755 = *(i4*)(intptr_t)(ws+4096);
	i8 v1756 = (i8)(intptr_t)(ws+4088);
	*(i4*)(intptr_t)v1756 = v1755;

	i8 v1757 = (i8)(intptr_t)(ws+4088);
	i4 v1758 = *(i4*)(intptr_t)v1757;
	i8 v1759 = (i8)(intptr_t)(ws+4080);
	i8 v1760 = *(i8*)(intptr_t)v1759;
	*(i4*)(intptr_t)v1760 = v1758;

	i8 v1761 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1761)();

	i2 v1762 = *(i2*)(intptr_t)(ws+4136);
	i8 v1763 = (i8)(intptr_t)(ws+4092);
	*(i2*)(intptr_t)v1763 = v1762;

	i8 v1764 = (i8)(intptr_t)(ws+4092);
	i2 v1765 = *(i2*)(intptr_t)v1764;
	i8 v1766 = (i8)(intptr_t)(ws+4080);
	i8 v1767 = *(i8*)(intptr_t)v1766;
	i8 v1768 = v1767+(+4);
	*(i2*)(intptr_t)v1768 = v1765;

}
	void f116_I_b16(void);

// ReadMid6 workspace at ws+4088 length ws+2
void f128_ReadMid6(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1769 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1769)();

	i2 v1770 = *(i2*)(intptr_t)(ws+4136);
	i8 v1771 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1771 = v1770;

	i8 v1772 = (i8)(intptr_t)(ws+4088);
	i2 v1773 = *(i2*)(intptr_t)v1772;
	i8 v1774 = (i8)(intptr_t)(ws+4080);
	i8 v1775 = *(i8*)(intptr_t)v1774;
	*(i2*)(intptr_t)v1775 = v1773;

}
	void f119_I_countedstring(void);

// ReadMid7 workspace at ws+4088 length ws+8
void f129_ReadMid7(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1776 = (i8)(intptr_t)(f119_I_countedstring);

	((void(*)(void))(intptr_t)v1776)();

	i8 v1777 = *(i8*)(intptr_t)(ws+4112);
	i8 v1778 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v1778 = v1777;

	i8 v1779 = (i8)(intptr_t)(ws+4088);
	i8 v1780 = *(i8*)(intptr_t)v1779;
	i8 v1781 = (i8)(intptr_t)(ws+4080);
	i8 v1782 = *(i8*)(intptr_t)v1781;
	*(i8*)(intptr_t)v1782 = v1780;

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);
	void f115_I_b8(void);

// ReadMid8 workspace at ws+4088 length ws+21
void f130_ReadMid8(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1783 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1783)();

	i2 v1784 = *(i2*)(intptr_t)(ws+4136);
	i8 v1785 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1785 = v1784;

	i8 v1786 = (i8)(intptr_t)(ws+4088);
	i2 v1787 = *(i2*)(intptr_t)v1786;
	*(i2*)(intptr_t)(ws+4256) = v1787;
	i8 v1788 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1788)();

	i8 v1789 = *(i8*)(intptr_t)(ws+4264);
	i8 v1790 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1790 = v1789;

	i8 v1791 = (i8)(intptr_t)(ws+4096);
	i8 v1792 = *(i8*)(intptr_t)v1791;
	i8 v1793 = (i8)(intptr_t)(ws+4080);
	i8 v1794 = *(i8*)(intptr_t)v1793;
	*(i8*)(intptr_t)v1794 = v1792;

	i8 v1795 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1795)();

	i1 v1796 = *(i1*)(intptr_t)(ws+4152);
	i8 v1797 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v1797 = v1796;

	i8 v1798 = (i8)(intptr_t)(ws+4104);
	i1 v1799 = *(i1*)(intptr_t)v1798;
	i8 v1800 = (i8)(intptr_t)(ws+4080);
	i8 v1801 = *(i8*)(intptr_t)v1800;
	i8 v1802 = v1801+(+10);
	*(i1*)(intptr_t)v1802 = v1799;

	i8 v1803 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v1803)();

	i2 v1804 = *(i2*)(intptr_t)(ws+4128);
	i8 v1805 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v1805 = v1804;

	i8 v1806 = (i8)(intptr_t)(ws+4106);
	i2 v1807 = *(i2*)(intptr_t)v1806;
	i8 v1808 = (i8)(intptr_t)(ws+4080);
	i8 v1809 = *(i8*)(intptr_t)v1808;
	i8 v1810 = v1809+(+12);
	*(i2*)(intptr_t)v1810 = v1807;

	i8 v1811 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1811)();

	i1 v1812 = *(i1*)(intptr_t)(ws+4152);
	i8 v1813 = (i8)(intptr_t)(ws+4108);
	*(i1*)(intptr_t)v1813 = v1812;

	i8 v1814 = (i8)(intptr_t)(ws+4108);
	i1 v1815 = *(i1*)(intptr_t)v1814;
	i8 v1816 = (i8)(intptr_t)(ws+4080);
	i8 v1817 = *(i8*)(intptr_t)v1816;
	i8 v1818 = v1817+(+14);
	*(i1*)(intptr_t)v1818 = v1815;

}
	void f116_I_b16(void);
	void f65_FindSubr(void);

// ReadMid9 workspace at ws+4088 length ws+16
void f131_ReadMid9(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1819 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1819)();

	i2 v1820 = *(i2*)(intptr_t)(ws+4136);
	i8 v1821 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1821 = v1820;

	i8 v1822 = (i8)(intptr_t)(ws+4088);
	i2 v1823 = *(i2*)(intptr_t)v1822;
	*(i2*)(intptr_t)(ws+4256) = v1823;
	i8 v1824 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1824)();

	i8 v1825 = *(i8*)(intptr_t)(ws+4264);
	i8 v1826 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1826 = v1825;

	i8 v1827 = (i8)(intptr_t)(ws+4096);
	i8 v1828 = *(i8*)(intptr_t)v1827;
	i8 v1829 = (i8)(intptr_t)(ws+4080);
	i8 v1830 = *(i8*)(intptr_t)v1829;
	*(i8*)(intptr_t)v1830 = v1828;

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);

// ReadMid10 workspace at ws+4088 length ws+24
void f132_ReadMid10(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v1831 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v1831)();

	i2 v1832 = *(i2*)(intptr_t)(ws+4136);
	i8 v1833 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1833 = v1832;

	i8 v1834 = (i8)(intptr_t)(ws+4088);
	i2 v1835 = *(i2*)(intptr_t)v1834;
	*(i2*)(intptr_t)(ws+4256) = v1835;
	i8 v1836 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v1836)();

	i8 v1837 = *(i8*)(intptr_t)(ws+4264);
	i8 v1838 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1838 = v1837;

	i8 v1839 = (i8)(intptr_t)(ws+4096);
	i8 v1840 = *(i8*)(intptr_t)v1839;
	i8 v1841 = (i8)(intptr_t)(ws+4080);
	i8 v1842 = *(i8*)(intptr_t)v1841;
	*(i8*)(intptr_t)v1842 = v1840;

	i8 v1843 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1843)();

	i1 v1844 = *(i1*)(intptr_t)(ws+4152);
	i8 v1845 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v1845 = v1844;

	i8 v1846 = (i8)(intptr_t)(ws+4104);
	i1 v1847 = *(i1*)(intptr_t)v1846;
	i8 v1848 = (i8)(intptr_t)(ws+4080);
	i8 v1849 = *(i8*)(intptr_t)v1848;
	i8 v1850 = v1849+(+10);
	*(i1*)(intptr_t)v1850 = v1847;

	i8 v1851 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v1851)();

	i2 v1852 = *(i2*)(intptr_t)(ws+4128);
	i8 v1853 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v1853 = v1852;

	i8 v1854 = (i8)(intptr_t)(ws+4106);
	i2 v1855 = *(i2*)(intptr_t)v1854;
	i8 v1856 = (i8)(intptr_t)(ws+4080);
	i8 v1857 = *(i8*)(intptr_t)v1856;
	i8 v1858 = v1857+(+12);
	*(i2*)(intptr_t)v1858 = v1855;

	i8 v1859 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v1859)();

	i1 v1860 = *(i1*)(intptr_t)(ws+4152);
	i8 v1861 = (i8)(intptr_t)(ws+4108);
	*(i1*)(intptr_t)v1861 = v1860;

	i8 v1862 = (i8)(intptr_t)(ws+4108);
	i1 v1863 = *(i1*)(intptr_t)v1862;
	i8 v1864 = (i8)(intptr_t)(ws+4080);
	i8 v1865 = *(i8*)(intptr_t)v1864;
	i8 v1866 = v1865+(+14);
	*(i1*)(intptr_t)v1866 = v1863;

	i8 v1867 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v1867)();

	i2 v1868 = *(i2*)(intptr_t)(ws+4128);
	i8 v1869 = (i8)(intptr_t)(ws+4110);
	*(i2*)(intptr_t)v1869 = v1868;

	i8 v1870 = (i8)(intptr_t)(ws+4110);
	i2 v1871 = *(i2*)(intptr_t)v1870;
	i8 v1872 = (i8)(intptr_t)(ws+4080);
	i8 v1873 = *(i8*)(intptr_t)v1872;
	i8 v1874 = v1873+(+16);
	*(i2*)(intptr_t)v1874 = v1871;

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
static data f3___main_s0171[] = {








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x02,0x00,0x00,0x00,0x02,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},







	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02}},
};
	void f23_MemZero(void);
	void f23_MemZero(void);

// AllocSubrId workspace at ws+4096 length ws+2
void f146_AllocSubrId(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2323 = (i8)(intptr_t)(ws+50);
	i2 v2324 = *(i2*)(intptr_t)v2323;
	i8 v2325 = (i8)(intptr_t)(ws+4096);
	*(i2*)(intptr_t)v2325 = v2324;

	i8 v2326 = (i8)(intptr_t)(ws+50);
	i2 v2327 = *(i2*)(intptr_t)v2326;
	i2 v2328 = v2327+(+1);
	i8 v2329 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v2329 = v2328;

}
	void f7_MemSet(void);
	void f70_InternalAlloc(void);

// AllocNewInstruction workspace at ws+4112 length ws+16
void f147_AllocNewInstruction(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2332 = (i8)(intptr_t)(ws+3696);
	i8 v2333 = *(i8*)(intptr_t)v2332;
	i8 v2334 = (i8)+0;
	if (v2333==v2334) goto c02_0215; else goto c02_0214;

c02_0214:;

	i8 v2335 = (i8)(intptr_t)(ws+3696);
	i8 v2336 = *(i8*)(intptr_t)v2335;
	i8 v2337 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v2337 = v2336;

	i8 v2338 = (i8)(intptr_t)(ws+3696);
	i8 v2339 = *(i8*)(intptr_t)v2338;
	i8 v2340 = *(i8*)(intptr_t)v2339;
	i8 v2341 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2341 = v2340;

	i8 v2342 = (i8)(intptr_t)(ws+4112);
	i8 v2343 = *(i8*)(intptr_t)v2342;
	*(i8*)(intptr_t)(ws+4240) = v2343;
	i1 v2344 = (i1)+0;
	*(i1*)(intptr_t)(ws+4248) = v2344;
	i8 v2345 = (i8)+87;
	*(i8*)(intptr_t)(ws+4256) = v2345;
	i8 v2346 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(void))(intptr_t)v2346)();

	goto c02_0211;

c02_0215:;

	i8 v2347 = (i8)+87;
	*(i8*)(intptr_t)(ws+4240) = v2347;
	i8 v2348 = (i8)(intptr_t)(f70_InternalAlloc);

	((void(*)(void))(intptr_t)v2348)();

	i8 v2349 = *(i8*)(intptr_t)(ws+4248);
	i8 v2350 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v2350 = v2349;

	i8 v2351 = (i8)(intptr_t)(ws+4120);
	i8 v2352 = *(i8*)(intptr_t)v2351;
	i8 v2353 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v2353 = v2352;

c02_0211:;

}

// FreeInstruction workspace at ws+4120 length ws+8
void f148_FreeInstruction(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2354 = (i8)(intptr_t)(ws+3696);
	i8 v2355 = *(i8*)(intptr_t)v2354;
	i8 v2356 = (i8)(intptr_t)(ws+4120);
	i8 v2357 = *(i8*)(intptr_t)v2356;
	*(i8*)(intptr_t)v2357 = v2355;

	i8 v2358 = (i8)(intptr_t)(ws+4120);
	i8 v2359 = *(i8*)(intptr_t)v2358;
	i8 v2360 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2360 = v2359;

}
	void f34_Free(void);

// PurgeAllFreeInstructions workspace at ws+4272 length ws+8
void f72_PurgeAllFreeInstructions(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

c02_0216:;

	i8 v2361 = (i8)(intptr_t)(ws+3696);
	i8 v2362 = *(i8*)(intptr_t)v2361;
	i8 v2363 = (i8)+0;
	if (v2362==v2363) goto c02_021b; else goto c02_021a;

c02_021a:;

	i8 v2364 = (i8)(intptr_t)(ws+3696);
	i8 v2365 = *(i8*)(intptr_t)v2364;
	i8 v2366 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v2366 = v2365;

	i8 v2367 = (i8)(intptr_t)(ws+3696);
	i8 v2368 = *(i8*)(intptr_t)v2367;
	i8 v2369 = *(i8*)(intptr_t)v2368;
	i8 v2370 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2370 = v2369;

	i8 v2371 = (i8)(intptr_t)(ws+4272);
	i8 v2372 = *(i8*)(intptr_t)v2371;
	*(i8*)(intptr_t)(ws+4280) = v2372;
	i8 v2373 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v2373)();

	goto c02_0216;

c02_021b:;

}

// FindConflictingRegisters workspace at ws+4152 length ws+16
void f149_FindConflictingRegisters(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v2374 = (i1)+0;
	i8 v2375 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2375 = v2374;

	i8 v2376 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v2377 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2377 = v2376;

c02_021c:;

	i8 v2378 = (i8)(intptr_t)(ws+4160);
	i8 v2379 = *(i8*)(intptr_t)v2378;
	i8 v2380 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v2379==v2380) goto c02_0221; else goto c02_0220;

c02_0220:;

	i8 v2381 = (i8)(intptr_t)(ws+4160);
	i8 v2382 = *(i8*)(intptr_t)v2381;
	i8 v2383 = v2382+(+8);
	i1 v2384 = *(i1*)(intptr_t)v2383;
	i8 v2385 = (i8)(intptr_t)(ws+4152);
	i1 v2386 = *(i1*)(intptr_t)v2385;
	i1 v2387 = v2384&v2386;
	i1 v2388 = (i1)+0;
	if (v2387==v2388) goto c02_0226; else goto c02_0225;

c02_0225:;

	i8 v2389 = (i8)(intptr_t)(ws+4153);
	i1 v2390 = *(i1*)(intptr_t)v2389;
	i8 v2391 = (i8)(intptr_t)(ws+4160);
	i8 v2392 = *(i8*)(intptr_t)v2391;
	i8 v2393 = v2392+(+9);
	i1 v2394 = *(i1*)(intptr_t)v2393;
	i1 v2395 = v2390|v2394;
	i8 v2396 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2396 = v2395;

c02_0226:;

c02_0222:;

	i8 v2397 = (i8)(intptr_t)(ws+4160);
	i8 v2398 = *(i8*)(intptr_t)v2397;
	i8 v2399 = v2398+(+16);
	i8 v2400 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2400 = v2399;

	goto c02_021c;

c02_0221:;

}

// FindCompatibleRegisters workspace at ws+4152 length ws+16
void f150_FindCompatibleRegisters(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v2401 = (i1)-1;
	i8 v2402 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2402 = v2401;

	i8 v2403 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v2404 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2404 = v2403;

c02_0227:;

	i8 v2405 = (i8)(intptr_t)(ws+4160);
	i8 v2406 = *(i8*)(intptr_t)v2405;
	i8 v2407 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v2406==v2407) goto c02_022c; else goto c02_022b;

c02_022b:;

	i8 v2408 = (i8)(intptr_t)(ws+4160);
	i8 v2409 = *(i8*)(intptr_t)v2408;
	i8 v2410 = v2409+(+8);
	i1 v2411 = *(i1*)(intptr_t)v2410;
	i8 v2412 = (i8)(intptr_t)(ws+4152);
	i1 v2413 = *(i1*)(intptr_t)v2412;
	i1 v2414 = v2411&v2413;
	i1 v2415 = (i1)+0;
	if (v2414==v2415) goto c02_0231; else goto c02_0230;

c02_0230:;

	i8 v2416 = (i8)(intptr_t)(ws+4153);
	i1 v2417 = *(i1*)(intptr_t)v2416;
	i8 v2418 = (i8)(intptr_t)(ws+4160);
	i8 v2419 = *(i8*)(intptr_t)v2418;
	i8 v2420 = v2419+(+10);
	i1 v2421 = *(i1*)(intptr_t)v2420;
	i1 v2422 = v2417&v2421;
	i8 v2423 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2423 = v2422;

c02_0231:;

c02_022d:;

	i8 v2424 = (i8)(intptr_t)(ws+4160);
	i8 v2425 = *(i8*)(intptr_t)v2424;
	i8 v2426 = v2425+(+16);
	i8 v2427 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2427 = v2426;

	goto c02_0227;

c02_022c:;

}

// FindFirst workspace at ws+4216 length ws+2
void f151_FindFirst(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v2428 = (i1)+1;
	i8 v2429 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v2429 = v2428;

c02_0232:;

	i8 v2430 = (i8)(intptr_t)(ws+4217);
	i1 v2431 = *(i1*)(intptr_t)v2430;
	i1 v2432 = (i1)+0;
	if (v2431==v2432) goto c02_0237; else goto c02_0236;

c02_0236:;

	i8 v2433 = (i8)(intptr_t)(ws+4216);
	i1 v2434 = *(i1*)(intptr_t)v2433;
	i8 v2435 = (i8)(intptr_t)(ws+4217);
	i1 v2436 = *(i1*)(intptr_t)v2435;
	i1 v2437 = v2434&v2436;
	i1 v2438 = (i1)+0;
	if (v2437==v2438) goto c02_023c; else goto c02_023b;

c02_023b:;

	return;

c02_023c:;

c02_0238:;

	i8 v2439 = (i8)(intptr_t)(ws+4217);
	i1 v2440 = *(i1*)(intptr_t)v2439;
	i1 v2441 = (i1)+1;
	i1 v2442 = ((i1)v2440)<<v2441;
	i8 v2443 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v2443 = v2442;

	goto c02_0232;

c02_0237:;

	i1 v2444 = (i1)+0;
	i8 v2445 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v2445 = v2444;

}
	void f106_EmitterOpenStream(void);
const i1 c02_s00c4[] = { 0x09,0x76,0x6f,0x69,0x64,0x20,0 };
	void f92_E(void);
	void f104_E_subref(void);
const i1 c02_s00c5[] = { 0x28,0x76,0x6f,0x69,0x64,0x29,0x3b,0x0a,0 };
	void f92_E(void);
	void f107_EmitterCloseStream(void);
	void f104_E_subref(void);

// E_subref_sig workspace at ws+4232 length ws+8
void f155_E_subref_sig(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2498 = (i8)(intptr_t)(ws+40);
	i8 v2499 = *(i8*)(intptr_t)v2498;
	*(i8*)(intptr_t)(ws+4248) = v2499;
	i8 v2500 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(void))(intptr_t)v2500)();

	i8 v2501 = (i8)(intptr_t)c02_s00c4;
	*(i8*)(intptr_t)(ws+4320) = v2501;
	i8 v2502 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2502)();

	i8 v2503 = (i8)(intptr_t)(ws+4232);
	i8 v2504 = *(i8*)(intptr_t)v2503;
	*(i8*)(intptr_t)(ws+4240) = v2504;
	i8 v2505 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(void))(intptr_t)v2505)();

	i8 v2506 = (i8)(intptr_t)c02_s00c5;
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
const i1 c02_s00c6[] = { 0x28,0x69,0x31,0x2a,0x29,0 };
	void f92_E(void);
	void f105_E_wsref(void);
	void f97_E_i16(void);
	void f105_E_wsref(void);

// E_symref workspace at ws+4248 length ws+10
void f156_E_symref(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2512 = (i8)(intptr_t)(ws+4248);
	i8 v2513 = *(i8*)(intptr_t)v2512;
	i8 v2514 = v2513+(+10);
	i1 v2515 = *(i1*)(intptr_t)v2514;
	i1 v2516 = (i1)+255;
	if (v2515==v2516) goto c02_0251; else goto c02_0252;

c02_0251:;

	i8 v2517 = (i8)(intptr_t)c02_s00c6;
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
void f157_ArchEndInstruction(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

}
	void f89_E_nl(void);

// ArchEndGroup workspace at ws+4112 length ws+0
void f158_ArchEndGroup(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2556 = (i8)(intptr_t)(f89_E_nl);

	((void(*)(void))(intptr_t)v2556)();

}
const i1 c02_s00c7[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(void);

// PushVid workspace at ws+4272 length ws+2
void f159_PushVid(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2557 = (i8)(intptr_t)(ws+3832);
	i1 v2558 = *(i1*)(intptr_t)v2557;
	i1 v2559 = (i1)+64;
	if (v2558==v2559) goto c02_025b; else goto c02_025c;

c02_025b:;

	i8 v2560 = (i8)(intptr_t)c02_s00c7;
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
	void f159_PushVid(void);

// Push workspace at ws+4264 length ws+2
void f160_Push(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	i8 v2584 = (i8)(intptr_t)(f159_PushVid);

	((void(*)(void))(intptr_t)v2584)();

}
const i1 c02_s00c8[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(void);

// CheckVarstackUnderflow workspace at ws+4272 length ws+0
void f161_CheckVarstackUnderflow(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2585 = (i8)(intptr_t)(ws+3832);
	i1 v2586 = *(i1*)(intptr_t)v2585;
	i1 v2587 = (i1)+0;
	if (v2586==v2587) goto c02_0260; else goto c02_0261;

c02_0260:;

	i8 v2588 = (i8)(intptr_t)c02_s00c8;
	*(i8*)(intptr_t)(ws+4280) = v2588;
	i8 v2589 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v2589)();

c02_0261:;

c02_025d:;

}
	void f161_CheckVarstackUnderflow(void);

// Pop workspace at ws+4264 length ws+2
void f162_Pop(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2590 = (i8)(intptr_t)(f161_CheckVarstackUnderflow);

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
void f166_ArchEmitMove(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

}
	void f65_FindSubr(void);
	void f162_Pop(void);
const i1 c02_s00ca[] = { 0x0a,0x09,0x28,0x28,0x76,0x6f,0x69,0x64,0x28,0x2a,0x29,0x28,0x76,0x6f,0x69,0x64,0x29,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00cb[] = { 0x29,0x28,0x29,0x3b,0x0a,0 };
	void f92_E(void);

// Call workspace at ws+4224 length ws+28
void f167_Call(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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

	i8 v2626 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2626)();

	i2 v2627 = *(i2*)(intptr_t)(ws+4264);
	i8 v2628 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2628 = v2627;

	i8 v2629 = (i8)(intptr_t)(ws+4248);
	i2 v2630 = *(i2*)(intptr_t)v2629;
	i8 v2631 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2631 = v2630;

	i8 v2632 = (i8)(intptr_t)c02_s00ca;
	*(i8*)(intptr_t)(ws+4320) = v2632;
	i8 v2633 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2633)();

	i8 v2634 = (i8)(intptr_t)(ws+4250);
	i2 v2635 = *(i2*)(intptr_t)v2634;
	*(i2*)(intptr_t)(ws+4272) = v2635;
	i8 v2636 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2636)();

	i8 v2637 = (i8)(intptr_t)c02_s00cb;
	*(i8*)(intptr_t)(ws+4320) = v2637;
	i8 v2638 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2638)();

}
	void f65_FindSubr(void);
	void f162_Pop(void);
const i1 c02_s00cc[] = { 0x0a,0x09,0x54,0x41,0x49,0x4c,0x43,0x41,0x4c,0x4c,0x28,0x28,0x28,0x76,0x6f,0x69,0x64,0x28,0x2a,0x29,0x28,0x76,0x6f,0x69,0x64,0x29,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00cd[] = { 0x29,0x29,0x3b,0x0a,0 };
	void f92_E(void);

// Tailcall workspace at ws+4224 length ws+28
void f168_Tailcall(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2639 = (i8)(intptr_t)(ws+4224);
	i2 v2640 = *(i2*)(intptr_t)v2639;
	*(i2*)(intptr_t)(ws+4256) = v2640;
	i8 v2641 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v2641)();

	i8 v2642 = *(i8*)(intptr_t)(ws+4264);
	i8 v2643 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v2643 = v2642;

	i8 v2644 = (i8)(intptr_t)(ws+4232);
	i8 v2645 = *(i8*)(intptr_t)v2644;
	i8 v2646 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v2646 = v2645;

	i8 v2647 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2647)();

	i2 v2648 = *(i2*)(intptr_t)(ws+4264);
	i8 v2649 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2649 = v2648;

	i8 v2650 = (i8)(intptr_t)(ws+4248);
	i2 v2651 = *(i2*)(intptr_t)v2650;
	i8 v2652 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2652 = v2651;

	i8 v2653 = (i8)(intptr_t)c02_s00cc;
	*(i8*)(intptr_t)(ws+4320) = v2653;
	i8 v2654 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2654)();

	i8 v2655 = (i8)(intptr_t)(ws+4250);
	i2 v2656 = *(i2*)(intptr_t)v2655;
	*(i2*)(intptr_t)(ws+4272) = v2656;
	i8 v2657 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2657)();

	i8 v2658 = (i8)(intptr_t)c02_s00cd;
	*(i8*)(intptr_t)(ws+4320) = v2658;
	i8 v2659 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2659)();

}
	void f162_Pop(void);
const i1 c02_s00ce[] = { 0x09,0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00cf[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f156_E_symref(void);
const i1 c02_s00d0[] = { 0x29,0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00d1[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// PokeArg workspace at ws+4224 length ws+20
void f169_PokeArg(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2660 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2660)();

	i2 v2661 = *(i2*)(intptr_t)(ws+4264);
	i8 v2662 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2662 = v2661;

	i8 v2663 = (i8)(intptr_t)(ws+4240);
	i2 v2664 = *(i2*)(intptr_t)v2663;
	i8 v2665 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2665 = v2664;

	i8 v2666 = (i8)(intptr_t)c02_s00ce;
	*(i8*)(intptr_t)(ws+4320) = v2666;
	i8 v2667 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2667)();

	i8 v2668 = (i8)(intptr_t)(ws+4224);
	i1 v2669 = *(i1*)(intptr_t)v2668;
	*(i1*)(intptr_t)(ws+4264) = v2669;
	i8 v2670 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2670)();

	i8 v2671 = (i8)(intptr_t)c02_s00cf;
	*(i8*)(intptr_t)(ws+4320) = v2671;
	i8 v2672 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2672)();

	i8 v2673 = (i8)(intptr_t)(ws+4232);
	i8 v2674 = *(i8*)(intptr_t)v2673;
	*(i8*)(intptr_t)(ws+4248) = v2674;
	i2 v2675 = (i2)+0;
	*(i2*)(intptr_t)(ws+4256) = v2675;
	i8 v2676 = (i8)(intptr_t)(f156_E_symref);

	((void(*)(void))(intptr_t)v2676)();

	i8 v2677 = (i8)(intptr_t)c02_s00d0;
	*(i8*)(intptr_t)(ws+4320) = v2677;
	i8 v2678 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2678)();

	i8 v2679 = (i8)(intptr_t)(ws+4242);
	i2 v2680 = *(i2*)(intptr_t)v2679;
	*(i2*)(intptr_t)(ws+4272) = v2680;
	i8 v2681 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2681)();

	i8 v2682 = (i8)(intptr_t)c02_s00d1;
	*(i8*)(intptr_t)(ws+4320) = v2682;
	i8 v2683 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2683)();

}
	void f160_Push(void);
const i1 c02_s00d2[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00d3[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00d4[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00d5[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f156_E_symref(void);
const i1 c02_s00d6[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// PeekArg workspace at ws+4224 length ws+20
void f170_PeekArg(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2684 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v2684)();

	i2 v2685 = *(i2*)(intptr_t)(ws+4264);
	i8 v2686 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2686 = v2685;

	i8 v2687 = (i8)(intptr_t)(ws+4240);
	i2 v2688 = *(i2*)(intptr_t)v2687;
	i8 v2689 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2689 = v2688;

	i8 v2690 = (i8)(intptr_t)c02_s00d2;
	*(i8*)(intptr_t)(ws+4320) = v2690;
	i8 v2691 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2691)();

	i8 v2692 = (i8)(intptr_t)(ws+4224);
	i1 v2693 = *(i1*)(intptr_t)v2692;
	*(i1*)(intptr_t)(ws+4264) = v2693;
	i8 v2694 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2694)();

	i8 v2695 = (i8)(intptr_t)c02_s00d3;
	*(i8*)(intptr_t)(ws+4320) = v2695;
	i8 v2696 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2696)();

	i8 v2697 = (i8)(intptr_t)(ws+4242);
	i2 v2698 = *(i2*)(intptr_t)v2697;
	*(i2*)(intptr_t)(ws+4272) = v2698;
	i8 v2699 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2699)();

	i8 v2700 = (i8)(intptr_t)c02_s00d4;
	*(i8*)(intptr_t)(ws+4320) = v2700;
	i8 v2701 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2701)();

	i8 v2702 = (i8)(intptr_t)(ws+4224);
	i1 v2703 = *(i1*)(intptr_t)v2702;
	*(i1*)(intptr_t)(ws+4264) = v2703;
	i8 v2704 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2704)();

	i8 v2705 = (i8)(intptr_t)c02_s00d5;
	*(i8*)(intptr_t)(ws+4320) = v2705;
	i8 v2706 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2706)();

	i8 v2707 = (i8)(intptr_t)(ws+4232);
	i8 v2708 = *(i8*)(intptr_t)v2707;
	*(i8*)(intptr_t)(ws+4248) = v2708;
	i2 v2709 = (i2)+0;
	*(i2*)(intptr_t)(ws+4256) = v2709;
	i8 v2710 = (i8)(intptr_t)(f156_E_symref);

	((void(*)(void))(intptr_t)v2710)();

	i8 v2711 = (i8)(intptr_t)c02_s00d6;
	*(i8*)(intptr_t)(ws+4320) = v2711;
	i8 v2712 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2712)();

}
	void f160_Push(void);
const i1 c02_s00d7[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00d8[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00d9[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00da[] = { 0x29,0 };
	void f92_E(void);
	void f98_E_i32(void);
const i1 c02_s00db[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// LoadConstant workspace at ws+4224 length ws+12
void f171_LoadConstant(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2713 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v2713)();

	i2 v2714 = *(i2*)(intptr_t)(ws+4264);
	i8 v2715 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v2715 = v2714;

	i8 v2716 = (i8)(intptr_t)(ws+4232);
	i2 v2717 = *(i2*)(intptr_t)v2716;
	i8 v2718 = (i8)(intptr_t)(ws+4234);
	*(i2*)(intptr_t)v2718 = v2717;

	i8 v2719 = (i8)(intptr_t)c02_s00d7;
	*(i8*)(intptr_t)(ws+4320) = v2719;
	i8 v2720 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2720)();

	i8 v2721 = (i8)(intptr_t)(ws+4224);
	i1 v2722 = *(i1*)(intptr_t)v2721;
	*(i1*)(intptr_t)(ws+4264) = v2722;
	i8 v2723 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2723)();

	i8 v2724 = (i8)(intptr_t)c02_s00d8;
	*(i8*)(intptr_t)(ws+4320) = v2724;
	i8 v2725 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2725)();

	i8 v2726 = (i8)(intptr_t)(ws+4234);
	i2 v2727 = *(i2*)(intptr_t)v2726;
	*(i2*)(intptr_t)(ws+4272) = v2727;
	i8 v2728 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2728)();

	i8 v2729 = (i8)(intptr_t)c02_s00d9;
	*(i8*)(intptr_t)(ws+4320) = v2729;
	i8 v2730 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2730)();

	i8 v2731 = (i8)(intptr_t)(ws+4224);
	i1 v2732 = *(i1*)(intptr_t)v2731;
	*(i1*)(intptr_t)(ws+4264) = v2732;
	i8 v2733 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2733)();

	i8 v2734 = (i8)(intptr_t)c02_s00da;
	*(i8*)(intptr_t)(ws+4320) = v2734;
	i8 v2735 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2735)();

	i8 v2736 = (i8)(intptr_t)(ws+4228);
	i4 v2737 = *(i4*)(intptr_t)v2736;
	*(i4*)(intptr_t)(ws+4256) = v2737;
	i8 v2738 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v2738)();

	i8 v2739 = (i8)(intptr_t)c02_s00db;
	*(i8*)(intptr_t)(ws+4320) = v2739;
	i8 v2740 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2740)();

}
	void f162_Pop(void);
	void f162_Pop(void);
const i1 c02_s00dc[] = { 0x09,0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00dd[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00de[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00df[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// StoreVV workspace at ws+4224 length ws+10
void f172_StoreVV(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2741 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2741)();

	i2 v2742 = *(i2*)(intptr_t)(ws+4264);
	i8 v2743 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v2743 = v2742;

	i8 v2744 = (i8)(intptr_t)(ws+4226);
	i2 v2745 = *(i2*)(intptr_t)v2744;
	i8 v2746 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v2746 = v2745;

	i8 v2747 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2747)();

	i2 v2748 = *(i2*)(intptr_t)(ws+4264);
	i8 v2749 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v2749 = v2748;

	i8 v2750 = (i8)(intptr_t)(ws+4230);
	i2 v2751 = *(i2*)(intptr_t)v2750;
	i8 v2752 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v2752 = v2751;

	i8 v2753 = (i8)(intptr_t)c02_s00dc;
	*(i8*)(intptr_t)(ws+4320) = v2753;
	i8 v2754 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2754)();

	i8 v2755 = (i8)(intptr_t)(ws+4224);
	i1 v2756 = *(i1*)(intptr_t)v2755;
	*(i1*)(intptr_t)(ws+4264) = v2756;
	i8 v2757 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2757)();

	i8 v2758 = (i8)(intptr_t)c02_s00dd;
	*(i8*)(intptr_t)(ws+4320) = v2758;
	i8 v2759 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2759)();

	i8 v2760 = (i8)(intptr_t)(ws+4228);
	i2 v2761 = *(i2*)(intptr_t)v2760;
	*(i2*)(intptr_t)(ws+4272) = v2761;
	i8 v2762 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2762)();

	i8 v2763 = (i8)(intptr_t)c02_s00de;
	*(i8*)(intptr_t)(ws+4320) = v2763;
	i8 v2764 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2764)();

	i8 v2765 = (i8)(intptr_t)(ws+4232);
	i2 v2766 = *(i2*)(intptr_t)v2765;
	*(i2*)(intptr_t)(ws+4272) = v2766;
	i8 v2767 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2767)();

	i8 v2768 = (i8)(intptr_t)c02_s00df;
	*(i8*)(intptr_t)(ws+4320) = v2768;
	i8 v2769 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2769)();

}
	void f162_Pop(void);
	void f160_Push(void);
const i1 c02_s00e0[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00e1[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00e2[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00e3[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00e4[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// LoadVV workspace at ws+4224 length ws+10
void f173_LoadVV(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2770 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2770)();

	i2 v2771 = *(i2*)(intptr_t)(ws+4264);
	i8 v2772 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v2772 = v2771;

	i8 v2773 = (i8)(intptr_t)(ws+4226);
	i2 v2774 = *(i2*)(intptr_t)v2773;
	i8 v2775 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v2775 = v2774;

	i8 v2776 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v2776)();

	i2 v2777 = *(i2*)(intptr_t)(ws+4264);
	i8 v2778 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v2778 = v2777;

	i8 v2779 = (i8)(intptr_t)(ws+4230);
	i2 v2780 = *(i2*)(intptr_t)v2779;
	i8 v2781 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v2781 = v2780;

	i8 v2782 = (i8)(intptr_t)c02_s00e0;
	*(i8*)(intptr_t)(ws+4320) = v2782;
	i8 v2783 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2783)();

	i8 v2784 = (i8)(intptr_t)(ws+4224);
	i1 v2785 = *(i1*)(intptr_t)v2784;
	*(i1*)(intptr_t)(ws+4264) = v2785;
	i8 v2786 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2786)();

	i8 v2787 = (i8)(intptr_t)c02_s00e1;
	*(i8*)(intptr_t)(ws+4320) = v2787;
	i8 v2788 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2788)();

	i8 v2789 = (i8)(intptr_t)(ws+4232);
	i2 v2790 = *(i2*)(intptr_t)v2789;
	*(i2*)(intptr_t)(ws+4272) = v2790;
	i8 v2791 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2791)();

	i8 v2792 = (i8)(intptr_t)c02_s00e2;
	*(i8*)(intptr_t)(ws+4320) = v2792;
	i8 v2793 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2793)();

	i8 v2794 = (i8)(intptr_t)(ws+4224);
	i1 v2795 = *(i1*)(intptr_t)v2794;
	*(i1*)(intptr_t)(ws+4264) = v2795;
	i8 v2796 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2796)();

	i8 v2797 = (i8)(intptr_t)c02_s00e3;
	*(i8*)(intptr_t)(ws+4320) = v2797;
	i8 v2798 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2798)();

	i8 v2799 = (i8)(intptr_t)(ws+4228);
	i2 v2800 = *(i2*)(intptr_t)v2799;
	*(i2*)(intptr_t)(ws+4272) = v2800;
	i8 v2801 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2801)();

	i8 v2802 = (i8)(intptr_t)c02_s00e4;
	*(i8*)(intptr_t)(ws+4320) = v2802;
	i8 v2803 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2803)();

}
	void f162_Pop(void);
	void f162_Pop(void);
	void f160_Push(void);
const i1 c02_s00e5[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00e6[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00e7[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s00e8[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00e9[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Op2VV workspace at ws+4224 length ws+28
void f174_Op2VV(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2804 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2804)();

	i2 v2805 = *(i2*)(intptr_t)(ws+4264);
	i8 v2806 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2806 = v2805;

	i8 v2807 = (i8)(intptr_t)(ws+4240);
	i2 v2808 = *(i2*)(intptr_t)v2807;
	i8 v2809 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2809 = v2808;

	i8 v2810 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2810)();

	i2 v2811 = *(i2*)(intptr_t)(ws+4264);
	i8 v2812 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2812 = v2811;

	i8 v2813 = (i8)(intptr_t)(ws+4244);
	i2 v2814 = *(i2*)(intptr_t)v2813;
	i8 v2815 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2815 = v2814;

	i8 v2816 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v2816)();

	i2 v2817 = *(i2*)(intptr_t)(ws+4264);
	i8 v2818 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2818 = v2817;

	i8 v2819 = (i8)(intptr_t)(ws+4248);
	i2 v2820 = *(i2*)(intptr_t)v2819;
	i8 v2821 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2821 = v2820;

	i8 v2822 = (i8)(intptr_t)c02_s00e5;
	*(i8*)(intptr_t)(ws+4320) = v2822;
	i8 v2823 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2823)();

	i8 v2824 = (i8)(intptr_t)(ws+4224);
	i1 v2825 = *(i1*)(intptr_t)v2824;
	*(i1*)(intptr_t)(ws+4264) = v2825;
	i8 v2826 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2826)();

	i8 v2827 = (i8)(intptr_t)c02_s00e6;
	*(i8*)(intptr_t)(ws+4320) = v2827;
	i8 v2828 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2828)();

	i8 v2829 = (i8)(intptr_t)(ws+4250);
	i2 v2830 = *(i2*)(intptr_t)v2829;
	*(i2*)(intptr_t)(ws+4272) = v2830;
	i8 v2831 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2831)();

	i8 v2832 = (i8)(intptr_t)c02_s00e7;
	*(i8*)(intptr_t)(ws+4320) = v2832;
	i8 v2833 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2833)();

	i8 v2834 = (i8)(intptr_t)(ws+4246);
	i2 v2835 = *(i2*)(intptr_t)v2834;
	*(i2*)(intptr_t)(ws+4272) = v2835;
	i8 v2836 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2836)();

	i8 v2837 = (i8)(intptr_t)(ws+4232);
	i8 v2838 = *(i8*)(intptr_t)v2837;
	*(i8*)(intptr_t)(ws+4320) = v2838;
	i8 v2839 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2839)();

	i8 v2840 = (i8)(intptr_t)c02_s00e8;
	*(i8*)(intptr_t)(ws+4320) = v2840;
	i8 v2841 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2841)();

	i8 v2842 = (i8)(intptr_t)(ws+4242);
	i2 v2843 = *(i2*)(intptr_t)v2842;
	*(i2*)(intptr_t)(ws+4272) = v2843;
	i8 v2844 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2844)();

	i8 v2845 = (i8)(intptr_t)c02_s00e9;
	*(i8*)(intptr_t)(ws+4320) = v2845;
	i8 v2846 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2846)();

}
	void f162_Pop(void);
	void f160_Push(void);
const i1 c02_s00ea[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00eb[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00ec[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s00ed[] = { 0x28,0 };
	void f92_E(void);
	void f98_E_i32(void);
const i1 c02_s00ee[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// Op2VC workspace at ws+4224 length ws+28
void f175_Op2VC(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2847 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2847)();

	i2 v2848 = *(i2*)(intptr_t)(ws+4264);
	i8 v2849 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2849 = v2848;

	i8 v2850 = (i8)(intptr_t)(ws+4244);
	i2 v2851 = *(i2*)(intptr_t)v2850;
	i8 v2852 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2852 = v2851;

	i8 v2853 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v2853)();

	i2 v2854 = *(i2*)(intptr_t)(ws+4264);
	i8 v2855 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2855 = v2854;

	i8 v2856 = (i8)(intptr_t)(ws+4248);
	i2 v2857 = *(i2*)(intptr_t)v2856;
	i8 v2858 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2858 = v2857;

	i8 v2859 = (i8)(intptr_t)c02_s00ea;
	*(i8*)(intptr_t)(ws+4320) = v2859;
	i8 v2860 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2860)();

	i8 v2861 = (i8)(intptr_t)(ws+4224);
	i1 v2862 = *(i1*)(intptr_t)v2861;
	*(i1*)(intptr_t)(ws+4264) = v2862;
	i8 v2863 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2863)();

	i8 v2864 = (i8)(intptr_t)c02_s00eb;
	*(i8*)(intptr_t)(ws+4320) = v2864;
	i8 v2865 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2865)();

	i8 v2866 = (i8)(intptr_t)(ws+4250);
	i2 v2867 = *(i2*)(intptr_t)v2866;
	*(i2*)(intptr_t)(ws+4272) = v2867;
	i8 v2868 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2868)();

	i8 v2869 = (i8)(intptr_t)c02_s00ec;
	*(i8*)(intptr_t)(ws+4320) = v2869;
	i8 v2870 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2870)();

	i8 v2871 = (i8)(intptr_t)(ws+4246);
	i2 v2872 = *(i2*)(intptr_t)v2871;
	*(i2*)(intptr_t)(ws+4272) = v2872;
	i8 v2873 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2873)();

	i8 v2874 = (i8)(intptr_t)(ws+4232);
	i8 v2875 = *(i8*)(intptr_t)v2874;
	*(i8*)(intptr_t)(ws+4320) = v2875;
	i8 v2876 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2876)();

	i8 v2877 = (i8)(intptr_t)c02_s00ed;
	*(i8*)(intptr_t)(ws+4320) = v2877;
	i8 v2878 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2878)();

	i8 v2879 = (i8)(intptr_t)(ws+4240);
	i4 v2880 = *(i4*)(intptr_t)v2879;
	*(i4*)(intptr_t)(ws+4256) = v2880;
	i8 v2881 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v2881)();

	i8 v2882 = (i8)(intptr_t)c02_s00ee;
	*(i8*)(intptr_t)(ws+4320) = v2882;
	i8 v2883 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2883)();

}
	void f162_Pop(void);
	void f162_Pop(void);
	void f160_Push(void);
const i1 c02_s00ef[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00f0[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00f1[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00f2[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s00f3[] = { 0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00f4[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00f5[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Op2VVSigned workspace at ws+4224 length ws+28
void f176_Op2VVSigned(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2884 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2884)();

	i2 v2885 = *(i2*)(intptr_t)(ws+4264);
	i8 v2886 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2886 = v2885;

	i8 v2887 = (i8)(intptr_t)(ws+4240);
	i2 v2888 = *(i2*)(intptr_t)v2887;
	i8 v2889 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2889 = v2888;

	i8 v2890 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2890)();

	i2 v2891 = *(i2*)(intptr_t)(ws+4264);
	i8 v2892 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2892 = v2891;

	i8 v2893 = (i8)(intptr_t)(ws+4244);
	i2 v2894 = *(i2*)(intptr_t)v2893;
	i8 v2895 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2895 = v2894;

	i8 v2896 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v2896)();

	i2 v2897 = *(i2*)(intptr_t)(ws+4264);
	i8 v2898 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2898 = v2897;

	i8 v2899 = (i8)(intptr_t)(ws+4248);
	i2 v2900 = *(i2*)(intptr_t)v2899;
	i8 v2901 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2901 = v2900;

	i8 v2902 = (i8)(intptr_t)c02_s00ef;
	*(i8*)(intptr_t)(ws+4320) = v2902;
	i8 v2903 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2903)();

	i8 v2904 = (i8)(intptr_t)(ws+4224);
	i1 v2905 = *(i1*)(intptr_t)v2904;
	*(i1*)(intptr_t)(ws+4264) = v2905;
	i8 v2906 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2906)();

	i8 v2907 = (i8)(intptr_t)c02_s00f0;
	*(i8*)(intptr_t)(ws+4320) = v2907;
	i8 v2908 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2908)();

	i8 v2909 = (i8)(intptr_t)(ws+4250);
	i2 v2910 = *(i2*)(intptr_t)v2909;
	*(i2*)(intptr_t)(ws+4272) = v2910;
	i8 v2911 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2911)();

	i8 v2912 = (i8)(intptr_t)c02_s00f1;
	*(i8*)(intptr_t)(ws+4320) = v2912;
	i8 v2913 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2913)();

	i8 v2914 = (i8)(intptr_t)(ws+4224);
	i1 v2915 = *(i1*)(intptr_t)v2914;
	*(i1*)(intptr_t)(ws+4264) = v2915;
	i8 v2916 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2916)();

	i8 v2917 = (i8)(intptr_t)c02_s00f2;
	*(i8*)(intptr_t)(ws+4320) = v2917;
	i8 v2918 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2918)();

	i8 v2919 = (i8)(intptr_t)(ws+4246);
	i2 v2920 = *(i2*)(intptr_t)v2919;
	*(i2*)(intptr_t)(ws+4272) = v2920;
	i8 v2921 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2921)();

	i8 v2922 = (i8)(intptr_t)(ws+4232);
	i8 v2923 = *(i8*)(intptr_t)v2922;
	*(i8*)(intptr_t)(ws+4320) = v2923;
	i8 v2924 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2924)();

	i8 v2925 = (i8)(intptr_t)c02_s00f3;
	*(i8*)(intptr_t)(ws+4320) = v2925;
	i8 v2926 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2926)();

	i8 v2927 = (i8)(intptr_t)(ws+4224);
	i1 v2928 = *(i1*)(intptr_t)v2927;
	*(i1*)(intptr_t)(ws+4264) = v2928;
	i8 v2929 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2929)();

	i8 v2930 = (i8)(intptr_t)c02_s00f4;
	*(i8*)(intptr_t)(ws+4320) = v2930;
	i8 v2931 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2931)();

	i8 v2932 = (i8)(intptr_t)(ws+4242);
	i2 v2933 = *(i2*)(intptr_t)v2932;
	*(i2*)(intptr_t)(ws+4272) = v2933;
	i8 v2934 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2934)();

	i8 v2935 = (i8)(intptr_t)c02_s00f5;
	*(i8*)(intptr_t)(ws+4320) = v2935;
	i8 v2936 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2936)();

}
	void f162_Pop(void);
	void f160_Push(void);
const i1 c02_s00f6[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00f7[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00f8[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s00f9[] = { 0x28,0 };
	void f92_E(void);
	void f98_E_i32(void);
const i1 c02_s00fa[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// Op2VCSigned workspace at ws+4224 length ws+28
void f177_Op2VCSigned(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2937 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2937)();

	i2 v2938 = *(i2*)(intptr_t)(ws+4264);
	i8 v2939 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2939 = v2938;

	i8 v2940 = (i8)(intptr_t)(ws+4244);
	i2 v2941 = *(i2*)(intptr_t)v2940;
	i8 v2942 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2942 = v2941;

	i8 v2943 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v2943)();

	i2 v2944 = *(i2*)(intptr_t)(ws+4264);
	i8 v2945 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2945 = v2944;

	i8 v2946 = (i8)(intptr_t)(ws+4248);
	i2 v2947 = *(i2*)(intptr_t)v2946;
	i8 v2948 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2948 = v2947;

	i8 v2949 = (i8)(intptr_t)c02_s00f6;
	*(i8*)(intptr_t)(ws+4320) = v2949;
	i8 v2950 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2950)();

	i8 v2951 = (i8)(intptr_t)(ws+4224);
	i1 v2952 = *(i1*)(intptr_t)v2951;
	*(i1*)(intptr_t)(ws+4264) = v2952;
	i8 v2953 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2953)();

	i8 v2954 = (i8)(intptr_t)c02_s00f7;
	*(i8*)(intptr_t)(ws+4320) = v2954;
	i8 v2955 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2955)();

	i8 v2956 = (i8)(intptr_t)(ws+4250);
	i2 v2957 = *(i2*)(intptr_t)v2956;
	*(i2*)(intptr_t)(ws+4272) = v2957;
	i8 v2958 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2958)();

	i8 v2959 = (i8)(intptr_t)c02_s00f8;
	*(i8*)(intptr_t)(ws+4320) = v2959;
	i8 v2960 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2960)();

	i8 v2961 = (i8)(intptr_t)(ws+4246);
	i2 v2962 = *(i2*)(intptr_t)v2961;
	*(i2*)(intptr_t)(ws+4272) = v2962;
	i8 v2963 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2963)();

	i8 v2964 = (i8)(intptr_t)(ws+4232);
	i8 v2965 = *(i8*)(intptr_t)v2964;
	*(i8*)(intptr_t)(ws+4320) = v2965;
	i8 v2966 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2966)();

	i8 v2967 = (i8)(intptr_t)c02_s00f9;
	*(i8*)(intptr_t)(ws+4320) = v2967;
	i8 v2968 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2968)();

	i8 v2969 = (i8)(intptr_t)(ws+4240);
	i4 v2970 = *(i4*)(intptr_t)v2969;
	*(i4*)(intptr_t)(ws+4256) = v2970;
	i8 v2971 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v2971)();

	i8 v2972 = (i8)(intptr_t)c02_s00fa;
	*(i8*)(intptr_t)(ws+4320) = v2972;
	i8 v2973 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2973)();

}
	void f162_Pop(void);
	void f160_Push(void);
const i1 c02_s00fb[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s00fc[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00fd[] = { 0x20,0x3d,0x20,0 };
	void f92_E(void);
	void f92_E(void);
const i1 c02_s00fe[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s00ff[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Op1V workspace at ws+4224 length ws+24
void f178_Op1V(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v2974 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v2974)();

	i2 v2975 = *(i2*)(intptr_t)(ws+4264);
	i8 v2976 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2976 = v2975;

	i8 v2977 = (i8)(intptr_t)(ws+4240);
	i2 v2978 = *(i2*)(intptr_t)v2977;
	i8 v2979 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v2979 = v2978;

	i8 v2980 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v2980)();

	i2 v2981 = *(i2*)(intptr_t)(ws+4264);
	i8 v2982 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v2982 = v2981;

	i8 v2983 = (i8)(intptr_t)(ws+4244);
	i2 v2984 = *(i2*)(intptr_t)v2983;
	i8 v2985 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v2985 = v2984;

	i8 v2986 = (i8)(intptr_t)c02_s00fb;
	*(i8*)(intptr_t)(ws+4320) = v2986;
	i8 v2987 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2987)();

	i8 v2988 = (i8)(intptr_t)(ws+4224);
	i1 v2989 = *(i1*)(intptr_t)v2988;
	*(i1*)(intptr_t)(ws+4264) = v2989;
	i8 v2990 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v2990)();

	i8 v2991 = (i8)(intptr_t)c02_s00fc;
	*(i8*)(intptr_t)(ws+4320) = v2991;
	i8 v2992 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2992)();

	i8 v2993 = (i8)(intptr_t)(ws+4246);
	i2 v2994 = *(i2*)(intptr_t)v2993;
	*(i2*)(intptr_t)(ws+4272) = v2994;
	i8 v2995 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v2995)();

	i8 v2996 = (i8)(intptr_t)c02_s00fd;
	*(i8*)(intptr_t)(ws+4320) = v2996;
	i8 v2997 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v2997)();

	i8 v2998 = (i8)(intptr_t)(ws+4232);
	i8 v2999 = *(i8*)(intptr_t)v2998;
	*(i8*)(intptr_t)(ws+4320) = v2999;
	i8 v3000 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3000)();

	i8 v3001 = (i8)(intptr_t)c02_s00fe;
	*(i8*)(intptr_t)(ws+4320) = v3001;
	i8 v3002 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3002)();

	i8 v3003 = (i8)(intptr_t)(ws+4242);
	i2 v3004 = *(i2*)(intptr_t)v3003;
	*(i2*)(intptr_t)(ws+4272) = v3004;
	i8 v3005 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3005)();

	i8 v3006 = (i8)(intptr_t)c02_s00ff;
	*(i8*)(intptr_t)(ws+4320) = v3006;
	i8 v3007 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3007)();

}
	void f162_Pop(void);
	void f162_Pop(void);
	void f160_Push(void);
const i1 c02_s0100[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s0101[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0102[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
	void f92_E(void);
	void f92_E(void);
const i1 c02_s0103[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0104[] = { 0x29,0 };
	void f92_E(void);
	void f92_E(void);
const i1 c02_s0105[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0106[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Shift workspace at ws+4224 length ws+36
void f179_Shift(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3008 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v3008)();

	i2 v3009 = *(i2*)(intptr_t)(ws+4264);
	i8 v3010 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v3010 = v3009;

	i8 v3011 = (i8)(intptr_t)(ws+4248);
	i2 v3012 = *(i2*)(intptr_t)v3011;
	i8 v3013 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v3013 = v3012;

	i8 v3014 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v3014)();

	i2 v3015 = *(i2*)(intptr_t)(ws+4264);
	i8 v3016 = (i8)(intptr_t)(ws+4252);
	*(i2*)(intptr_t)v3016 = v3015;

	i8 v3017 = (i8)(intptr_t)(ws+4252);
	i2 v3018 = *(i2*)(intptr_t)v3017;
	i8 v3019 = (i8)(intptr_t)(ws+4254);
	*(i2*)(intptr_t)v3019 = v3018;

	i8 v3020 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v3020)();

	i2 v3021 = *(i2*)(intptr_t)(ws+4264);
	i8 v3022 = (i8)(intptr_t)(ws+4256);
	*(i2*)(intptr_t)v3022 = v3021;

	i8 v3023 = (i8)(intptr_t)(ws+4256);
	i2 v3024 = *(i2*)(intptr_t)v3023;
	i8 v3025 = (i8)(intptr_t)(ws+4258);
	*(i2*)(intptr_t)v3025 = v3024;

	i8 v3026 = (i8)(intptr_t)c02_s0100;
	*(i8*)(intptr_t)(ws+4320) = v3026;
	i8 v3027 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3027)();

	i8 v3028 = (i8)(intptr_t)(ws+4224);
	i1 v3029 = *(i1*)(intptr_t)v3028;
	*(i1*)(intptr_t)(ws+4264) = v3029;
	i8 v3030 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3030)();

	i8 v3031 = (i8)(intptr_t)c02_s0101;
	*(i8*)(intptr_t)(ws+4320) = v3031;
	i8 v3032 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3032)();

	i8 v3033 = (i8)(intptr_t)(ws+4258);
	i2 v3034 = *(i2*)(intptr_t)v3033;
	*(i2*)(intptr_t)(ws+4272) = v3034;
	i8 v3035 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3035)();

	i8 v3036 = (i8)(intptr_t)c02_s0102;
	*(i8*)(intptr_t)(ws+4320) = v3036;
	i8 v3037 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3037)();

	i8 v3038 = (i8)(intptr_t)(ws+4232);
	i8 v3039 = *(i8*)(intptr_t)v3038;
	*(i8*)(intptr_t)(ws+4320) = v3039;
	i8 v3040 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3040)();

	i8 v3041 = (i8)(intptr_t)c02_s0103;
	*(i8*)(intptr_t)(ws+4320) = v3041;
	i8 v3042 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3042)();

	i8 v3043 = (i8)(intptr_t)(ws+4254);
	i2 v3044 = *(i2*)(intptr_t)v3043;
	*(i2*)(intptr_t)(ws+4272) = v3044;
	i8 v3045 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3045)();

	i8 v3046 = (i8)(intptr_t)c02_s0104;
	*(i8*)(intptr_t)(ws+4320) = v3046;
	i8 v3047 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3047)();

	i8 v3048 = (i8)(intptr_t)(ws+4240);
	i8 v3049 = *(i8*)(intptr_t)v3048;
	*(i8*)(intptr_t)(ws+4320) = v3049;
	i8 v3050 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3050)();

	i8 v3051 = (i8)(intptr_t)c02_s0105;
	*(i8*)(intptr_t)(ws+4320) = v3051;
	i8 v3052 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3052)();

	i8 v3053 = (i8)(intptr_t)(ws+4250);
	i2 v3054 = *(i2*)(intptr_t)v3053;
	*(i2*)(intptr_t)(ws+4272) = v3054;
	i8 v3055 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3055)();

	i8 v3056 = (i8)(intptr_t)c02_s0106;
	*(i8*)(intptr_t)(ws+4320) = v3056;
	i8 v3057 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3057)();

}
	void f162_Pop(void);
	void f162_Pop(void);
const i1 c02_s0107[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s0108[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0109[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s010a[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s010b[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Branch workspace at ws+4224 length ws+24
void f180_Branch(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3058 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v3058)();

	i2 v3059 = *(i2*)(intptr_t)(ws+4264);
	i8 v3060 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v3060 = v3059;

	i8 v3061 = (i8)(intptr_t)(ws+4240);
	i2 v3062 = *(i2*)(intptr_t)v3061;
	i8 v3063 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v3063 = v3062;

	i8 v3064 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v3064)();

	i2 v3065 = *(i2*)(intptr_t)(ws+4264);
	i8 v3066 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v3066 = v3065;

	i8 v3067 = (i8)(intptr_t)(ws+4244);
	i2 v3068 = *(i2*)(intptr_t)v3067;
	i8 v3069 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v3069 = v3068;

	i8 v3070 = (i8)(intptr_t)c02_s0107;
	*(i8*)(intptr_t)(ws+4320) = v3070;
	i8 v3071 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3071)();

	i8 v3072 = (i8)(intptr_t)(ws+4246);
	i2 v3073 = *(i2*)(intptr_t)v3072;
	*(i2*)(intptr_t)(ws+4272) = v3073;
	i8 v3074 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3074)();

	i8 v3075 = (i8)(intptr_t)(ws+4232);
	i8 v3076 = *(i8*)(intptr_t)v3075;
	*(i8*)(intptr_t)(ws+4320) = v3076;
	i8 v3077 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3077)();

	i8 v3078 = (i8)(intptr_t)c02_s0108;
	*(i8*)(intptr_t)(ws+4320) = v3078;
	i8 v3079 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3079)();

	i8 v3080 = (i8)(intptr_t)(ws+4242);
	i2 v3081 = *(i2*)(intptr_t)v3080;
	*(i2*)(intptr_t)(ws+4272) = v3081;
	i8 v3082 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3082)();

	i8 v3083 = (i8)(intptr_t)c02_s0109;
	*(i8*)(intptr_t)(ws+4320) = v3083;
	i8 v3084 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3084)();

	i8 v3085 = (i8)(intptr_t)(ws+4224);
	i8 v3086 = *(i8*)(intptr_t)v3085;
	i2 v3087 = *(i2*)(intptr_t)v3086;
	*(i2*)(intptr_t)(ws+4256) = v3087;
	i8 v3088 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3088)();

	i8 v3089 = (i8)(intptr_t)c02_s010a;
	*(i8*)(intptr_t)(ws+4320) = v3089;
	i8 v3090 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3090)();

	i8 v3091 = (i8)(intptr_t)(ws+4224);
	i8 v3092 = *(i8*)(intptr_t)v3091;
	i8 v3093 = v3092+(+2);
	i2 v3094 = *(i2*)(intptr_t)v3093;
	*(i2*)(intptr_t)(ws+4256) = v3094;
	i8 v3095 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3095)();

	i8 v3096 = (i8)(intptr_t)c02_s010b;
	*(i8*)(intptr_t)(ws+4320) = v3096;
	i8 v3097 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3097)();

}
	void f162_Pop(void);
	void f162_Pop(void);
const i1 c02_s010c[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s010d[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
	void f92_E(void);
const i1 c02_s010e[] = { 0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s010f[] = { 0x29,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0110[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s0111[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s0112[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// BranchSigned workspace at ws+4224 length ws+32
void f181_BranchSigned(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3098 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v3098)();

	i2 v3099 = *(i2*)(intptr_t)(ws+4264);
	i8 v3100 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v3100 = v3099;

	i8 v3101 = (i8)(intptr_t)(ws+4248);
	i2 v3102 = *(i2*)(intptr_t)v3101;
	i8 v3103 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v3103 = v3102;

	i8 v3104 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v3104)();

	i2 v3105 = *(i2*)(intptr_t)(ws+4264);
	i8 v3106 = (i8)(intptr_t)(ws+4252);
	*(i2*)(intptr_t)v3106 = v3105;

	i8 v3107 = (i8)(intptr_t)(ws+4252);
	i2 v3108 = *(i2*)(intptr_t)v3107;
	i8 v3109 = (i8)(intptr_t)(ws+4254);
	*(i2*)(intptr_t)v3109 = v3108;

	i8 v3110 = (i8)(intptr_t)c02_s010c;
	*(i8*)(intptr_t)(ws+4320) = v3110;
	i8 v3111 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3111)();

	i8 v3112 = (i8)(intptr_t)(ws+4232);
	i1 v3113 = *(i1*)(intptr_t)v3112;
	*(i1*)(intptr_t)(ws+4264) = v3113;
	i8 v3114 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3114)();

	i8 v3115 = (i8)(intptr_t)c02_s010d;
	*(i8*)(intptr_t)(ws+4320) = v3115;
	i8 v3116 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3116)();

	i8 v3117 = (i8)(intptr_t)(ws+4254);
	i2 v3118 = *(i2*)(intptr_t)v3117;
	*(i2*)(intptr_t)(ws+4272) = v3118;
	i8 v3119 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3119)();

	i8 v3120 = (i8)(intptr_t)(ws+4240);
	i8 v3121 = *(i8*)(intptr_t)v3120;
	*(i8*)(intptr_t)(ws+4320) = v3121;
	i8 v3122 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3122)();

	i8 v3123 = (i8)(intptr_t)c02_s010e;
	*(i8*)(intptr_t)(ws+4320) = v3123;
	i8 v3124 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3124)();

	i8 v3125 = (i8)(intptr_t)(ws+4232);
	i1 v3126 = *(i1*)(intptr_t)v3125;
	*(i1*)(intptr_t)(ws+4264) = v3126;
	i8 v3127 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3127)();

	i8 v3128 = (i8)(intptr_t)c02_s010f;
	*(i8*)(intptr_t)(ws+4320) = v3128;
	i8 v3129 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3129)();

	i8 v3130 = (i8)(intptr_t)(ws+4250);
	i2 v3131 = *(i2*)(intptr_t)v3130;
	*(i2*)(intptr_t)(ws+4272) = v3131;
	i8 v3132 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3132)();

	i8 v3133 = (i8)(intptr_t)c02_s0110;
	*(i8*)(intptr_t)(ws+4320) = v3133;
	i8 v3134 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3134)();

	i8 v3135 = (i8)(intptr_t)(ws+4224);
	i8 v3136 = *(i8*)(intptr_t)v3135;
	i2 v3137 = *(i2*)(intptr_t)v3136;
	*(i2*)(intptr_t)(ws+4256) = v3137;
	i8 v3138 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3138)();

	i8 v3139 = (i8)(intptr_t)c02_s0111;
	*(i8*)(intptr_t)(ws+4320) = v3139;
	i8 v3140 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3140)();

	i8 v3141 = (i8)(intptr_t)(ws+4224);
	i8 v3142 = *(i8*)(intptr_t)v3141;
	i8 v3143 = v3142+(+2);
	i2 v3144 = *(i2*)(intptr_t)v3143;
	*(i2*)(intptr_t)(ws+4256) = v3144;
	i8 v3145 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3145)();

	i8 v3146 = (i8)(intptr_t)c02_s0112;
	*(i8*)(intptr_t)(ws+4320) = v3146;
	i8 v3147 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3147)();

}
const i1 c02_s0113[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
	void f103_E_labelref(void);
const i1 c02_s0114[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// BranchConstant workspace at ws+4224 length ws+16
void f182_BranchConstant(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3148 = (i8)(intptr_t)c02_s0113;
	*(i8*)(intptr_t)(ws+4320) = v3148;
	i8 v3149 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3149)();

	i8 v3150 = (i8)(intptr_t)(ws+4232);
	i4 v3151 = *(i4*)(intptr_t)v3150;
	i8 v3152 = (i8)(intptr_t)(ws+4236);
	i4 v3153 = *(i4*)(intptr_t)v3152;
	if (v3151==v3153) goto c02_0265; else goto c02_0266;

c02_0265:;

	i8 v3154 = (i8)(intptr_t)(ws+4224);
	i8 v3155 = *(i8*)(intptr_t)v3154;
	i2 v3156 = *(i2*)(intptr_t)v3155;
	*(i2*)(intptr_t)(ws+4256) = v3156;
	i8 v3157 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3157)();

	goto c02_0262;

c02_0266:;

	i8 v3158 = (i8)(intptr_t)(ws+4224);
	i8 v3159 = *(i8*)(intptr_t)v3158;
	i8 v3160 = v3159+(+2);
	i2 v3161 = *(i2*)(intptr_t)v3160;
	*(i2*)(intptr_t)(ws+4256) = v3161;
	i8 v3162 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3162)();

c02_0262:;

	i8 v3163 = (i8)(intptr_t)c02_s0114;
	*(i8*)(intptr_t)(ws+4320) = v3163;
	i8 v3164 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3164)();

}
const i1 c02_s0115[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0116[] = { 0x20,0x21,0x3d,0x20,0 };
	void f92_E(void);
	void f98_E_i32(void);
const i1 c02_s0117[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s0118[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Whencase workspace at ws+4224 length ws+8
void f183_Whencase(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3165 = (i8)(intptr_t)(ws+3704);
	i8 v3166 = (i8)(intptr_t)(ws+3832);
	i1 v3167 = *(i1*)(intptr_t)v3166;
	i1 v3168 = v3167+(-1);
	i8 v3169 = v3168;
	i1 v3170 = (i1)+1;
	i8 v3171 = ((i8)v3169)<<v3170;
	i8 v3172 = v3165+v3171;
	i2 v3173 = *(i2*)(intptr_t)v3172;
	i8 v3174 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v3174 = v3173;

	i8 v3175 = (i8)(intptr_t)c02_s0115;
	*(i8*)(intptr_t)(ws+4320) = v3175;
	i8 v3176 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3176)();

	i8 v3177 = (i8)(intptr_t)(ws+4230);
	i2 v3178 = *(i2*)(intptr_t)v3177;
	*(i2*)(intptr_t)(ws+4272) = v3178;
	i8 v3179 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3179)();

	i8 v3180 = (i8)(intptr_t)c02_s0116;
	*(i8*)(intptr_t)(ws+4320) = v3180;
	i8 v3181 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3181)();

	i8 v3182 = (i8)(intptr_t)(ws+4224);
	i4 v3183 = *(i4*)(intptr_t)v3182;
	*(i4*)(intptr_t)(ws+4256) = v3183;
	i8 v3184 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v3184)();

	i8 v3185 = (i8)(intptr_t)c02_s0117;
	*(i8*)(intptr_t)(ws+4320) = v3185;
	i8 v3186 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3186)();

	i8 v3187 = (i8)(intptr_t)(ws+4228);
	i2 v3188 = *(i2*)(intptr_t)v3187;
	*(i2*)(intptr_t)(ws+4256) = v3188;
	i8 v3189 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3189)();

	i8 v3190 = (i8)(intptr_t)c02_s0118;
	*(i8*)(intptr_t)(ws+4320) = v3190;
	i8 v3191 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3191)();

}
	void f162_Pop(void);
	void f160_Push(void);
const i1 c02_s0119[] = { 0x09,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s011a[] = { 0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s011b[] = { 0x20,0x3d,0x20,0 };
	void f92_E(void);
const i1 c02_s011c[] = { 0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s011d[] = { 0x29,0x28,0x73,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s011e[] = { 0x29,0 };
	void f92_E(void);
const i1 c02_s011f[] = { 0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0120[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// Cast workspace at ws+4224 length ws+12
void f184_Cast(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3192 = (i8)(intptr_t)(f162_Pop);

	((void(*)(void))(intptr_t)v3192)();

	i2 v3193 = *(i2*)(intptr_t)(ws+4264);
	i8 v3194 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v3194 = v3193;

	i8 v3195 = (i8)(intptr_t)(ws+4228);
	i2 v3196 = *(i2*)(intptr_t)v3195;
	i8 v3197 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v3197 = v3196;

	i8 v3198 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v3198)();

	i2 v3199 = *(i2*)(intptr_t)(ws+4264);
	i8 v3200 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v3200 = v3199;

	i8 v3201 = (i8)(intptr_t)(ws+4232);
	i2 v3202 = *(i2*)(intptr_t)v3201;
	i8 v3203 = (i8)(intptr_t)(ws+4234);
	*(i2*)(intptr_t)v3203 = v3202;

	i8 v3204 = (i8)(intptr_t)c02_s0119;
	*(i8*)(intptr_t)(ws+4320) = v3204;
	i8 v3205 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3205)();

	i8 v3206 = (i8)(intptr_t)(ws+4225);
	i1 v3207 = *(i1*)(intptr_t)v3206;
	*(i1*)(intptr_t)(ws+4264) = v3207;
	i8 v3208 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3208)();

	i8 v3209 = (i8)(intptr_t)c02_s011a;
	*(i8*)(intptr_t)(ws+4320) = v3209;
	i8 v3210 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3210)();

	i8 v3211 = (i8)(intptr_t)(ws+4234);
	i2 v3212 = *(i2*)(intptr_t)v3211;
	*(i2*)(intptr_t)(ws+4272) = v3212;
	i8 v3213 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3213)();

	i8 v3214 = (i8)(intptr_t)c02_s011b;
	*(i8*)(intptr_t)(ws+4320) = v3214;
	i8 v3215 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3215)();

	i8 v3216 = (i8)(intptr_t)(ws+4226);
	i1 v3217 = *(i1*)(intptr_t)v3216;
	i1 v3218 = (i1)+0;
	if (v3217==v3218) goto c02_026b; else goto c02_026a;

c02_026a:;

	i8 v3219 = (i8)(intptr_t)c02_s011c;
	*(i8*)(intptr_t)(ws+4320) = v3219;
	i8 v3220 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3220)();

	i8 v3221 = (i8)(intptr_t)(ws+4225);
	i1 v3222 = *(i1*)(intptr_t)v3221;
	*(i1*)(intptr_t)(ws+4264) = v3222;
	i8 v3223 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3223)();

	i8 v3224 = (i8)(intptr_t)c02_s011d;
	*(i8*)(intptr_t)(ws+4320) = v3224;
	i8 v3225 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3225)();

	i8 v3226 = (i8)(intptr_t)(ws+4224);
	i1 v3227 = *(i1*)(intptr_t)v3226;
	*(i1*)(intptr_t)(ws+4264) = v3227;
	i8 v3228 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v3228)();

	i8 v3229 = (i8)(intptr_t)c02_s011e;
	*(i8*)(intptr_t)(ws+4320) = v3229;
	i8 v3230 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3230)();

c02_026b:;

c02_0267:;

	i8 v3231 = (i8)(intptr_t)c02_s011f;
	*(i8*)(intptr_t)(ws+4320) = v3231;
	i8 v3232 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3232)();

	i8 v3233 = (i8)(intptr_t)(ws+4230);
	i2 v3234 = *(i2*)(intptr_t)v3233;
	*(i2*)(intptr_t)(ws+4272) = v3234;
	i8 v3235 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3235)();

	i8 v3236 = (i8)(intptr_t)c02_s0120;
	*(i8*)(intptr_t)(ws+4320) = v3236;
	i8 v3237 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3237)();

}
	void f106_EmitterOpenStream(void);
const i1 c02_s0121[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f83_E_b8(void);
	void f101_E_h16(void);
const i1 c02_s0122[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f92_E(void);
	void f87_E_comma(void);
const i1 c02_s0123[] = { 0x30,0x78,0 };
	void f92_E(void);
	void f100_E_h8(void);
	void f87_E_comma(void);
const i1 c02_s0124[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };
	void f92_E(void);
	void f107_EmitterCloseStream(void);

// E_string workspace at ws+4232 length ws+12
void f185_E_string(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3240 = (i8)(intptr_t)(ws+3836);
	i2 v3241 = *(i2*)(intptr_t)v3240;
	i8 v3242 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v3242 = v3241;

	i8 v3243 = (i8)(intptr_t)(ws+3836);
	i2 v3244 = *(i2*)(intptr_t)v3243;
	i2 v3245 = v3244+(+1);
	i8 v3246 = (i8)(intptr_t)(ws+3836);
	*(i2*)(intptr_t)v3246 = v3245;

	i8 v3247 = (i8)(intptr_t)(ws+40);
	i8 v3248 = *(i8*)(intptr_t)v3247;
	*(i8*)(intptr_t)(ws+4248) = v3248;
	i8 v3249 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(void))(intptr_t)v3249)();

	i8 v3250 = (i8)(intptr_t)c02_s0121;
	*(i8*)(intptr_t)(ws+4320) = v3250;
	i8 v3251 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3251)();

	i1 v3252 = (i1)+3;
	*(i1*)(intptr_t)(ws+4336) = v3252;
	i8 v3253 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3253)();

	i1 v3254 = (i1)+115;
	*(i1*)(intptr_t)(ws+4336) = v3254;
	i8 v3255 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3255)();

	i8 v3256 = (i8)(intptr_t)(ws+4240);
	i2 v3257 = *(i2*)(intptr_t)v3256;
	*(i2*)(intptr_t)(ws+4272) = v3257;
	i8 v3258 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(void))(intptr_t)v3258)();

	i8 v3259 = (i8)(intptr_t)c02_s0122;
	*(i8*)(intptr_t)(ws+4320) = v3259;
	i8 v3260 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3260)();

	i1 v3261 = (i1)+1;
	i8 v3262 = (i8)(intptr_t)(ws+4242);
	*(i1*)(intptr_t)v3262 = v3261;

c02_026c:;

	i8 v3263 = (i8)(intptr_t)(ws+4232);
	i8 v3264 = *(i8*)(intptr_t)v3263;
	i1 v3265 = *(i1*)(intptr_t)v3264;
	i8 v3266 = (i8)(intptr_t)(ws+4243);
	*(i1*)(intptr_t)v3266 = v3265;

	i8 v3267 = (i8)(intptr_t)(ws+4232);
	i8 v3268 = *(i8*)(intptr_t)v3267;
	i8 v3269 = v3268+(+1);
	i8 v3270 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v3270 = v3269;

	i8 v3271 = (i8)(intptr_t)(ws+4243);
	i1 v3272 = *(i1*)(intptr_t)v3271;
	i1 v3273 = (i1)+0;
	if (v3272==v3273) goto c02_0271; else goto c02_0272;

c02_0271:;

	goto c02_026d;

c02_0272:;

c02_026e:;

	i8 v3274 = (i8)(intptr_t)(ws+4242);
	i1 v3275 = *(i1*)(intptr_t)v3274;
	i1 v3276 = (i1)+0;
	if (v3275==v3276) goto c02_0276; else goto c02_0277;

c02_0276:;

	i8 v3277 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3277)();

c02_0277:;

c02_0273:;

	i1 v3278 = (i1)+0;
	i8 v3279 = (i8)(intptr_t)(ws+4242);
	*(i1*)(intptr_t)v3279 = v3278;

	i8 v3280 = (i8)(intptr_t)c02_s0123;
	*(i8*)(intptr_t)(ws+4320) = v3280;
	i8 v3281 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3281)();

	i8 v3282 = (i8)(intptr_t)(ws+4243);
	i1 v3283 = *(i1*)(intptr_t)v3282;
	*(i1*)(intptr_t)(ws+4248) = v3283;
	i8 v3284 = (i8)(intptr_t)(f100_E_h8);

	((void(*)(void))(intptr_t)v3284)();

	goto c02_026c;

c02_026d:;

	i8 v3285 = (i8)(intptr_t)(ws+4242);
	i1 v3286 = *(i1*)(intptr_t)v3285;
	i1 v3287 = (i1)+0;
	if (v3286==v3287) goto c02_027b; else goto c02_027c;

c02_027b:;

	i8 v3288 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3288)();

c02_027c:;

c02_0278:;

	i8 v3289 = (i8)(intptr_t)c02_s0124;
	*(i8*)(intptr_t)(ws+4320) = v3289;
	i8 v3290 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3290)();

	i8 v3291 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3291)();

}
const i1 c02_s0125[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f92_E(void);
	void f87_E_comma(void);
const i1 c02_s0126[] = { 0x30,0x78,0 };
	void f92_E(void);
	void f100_E_h8(void);
const i1 c02_s0127[] = { 0x7d,0x7d,0x2c,0x0a,0 };
	void f92_E(void);

// FlushInitialiserBuffer workspace at ws+4240 length ws+1
void f186_FlushInitialiserBuffer(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3294 = (i8)(intptr_t)(ws+3846);
	i1 v3295 = *(i1*)(intptr_t)v3294;
	i1 v3296 = (i1)+0;
	if (v3295==v3296) goto c02_0281; else goto c02_0280;

c02_0280:;

	i8 v3297 = (i8)(intptr_t)c02_s0125;
	*(i8*)(intptr_t)(ws+4320) = v3297;
	i8 v3298 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3298)();

	i1 v3299 = (i1)+0;
	i8 v3300 = (i8)(intptr_t)(ws+4240);
	*(i1*)(intptr_t)v3300 = v3299;

c02_0282:;

	i8 v3301 = (i8)(intptr_t)(ws+4240);
	i1 v3302 = *(i1*)(intptr_t)v3301;
	i8 v3303 = (i8)(intptr_t)(ws+3846);
	i1 v3304 = *(i1*)(intptr_t)v3303;
	if (v3302==v3304) goto c02_0287; else goto c02_0286;

c02_0286:;

	i8 v3305 = (i8)(intptr_t)(ws+4240);
	i1 v3306 = *(i1*)(intptr_t)v3305;
	i1 v3307 = (i1)+0;
	if (v3306==v3307) goto c02_028c; else goto c02_028b;

c02_028b:;

	i8 v3308 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3308)();

c02_028c:;

c02_0288:;

	i8 v3309 = (i8)(intptr_t)c02_s0126;
	*(i8*)(intptr_t)(ws+4320) = v3309;
	i8 v3310 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3310)();

	i8 v3311 = (i8)(intptr_t)(ws+3838);
	i8 v3312 = (i8)(intptr_t)(ws+4240);
	i1 v3313 = *(i1*)(intptr_t)v3312;
	i8 v3314 = v3313;
	i8 v3315 = v3311+v3314;
	i1 v3316 = *(i1*)(intptr_t)v3315;
	*(i1*)(intptr_t)(ws+4248) = v3316;
	i8 v3317 = (i8)(intptr_t)(f100_E_h8);

	((void(*)(void))(intptr_t)v3317)();

	i8 v3318 = (i8)(intptr_t)(ws+4240);
	i1 v3319 = *(i1*)(intptr_t)v3318;
	i1 v3320 = v3319+(+1);
	i8 v3321 = (i8)(intptr_t)(ws+4240);
	*(i1*)(intptr_t)v3321 = v3320;

	goto c02_0282;

c02_0287:;

	i8 v3322 = (i8)(intptr_t)c02_s0127;
	*(i8*)(intptr_t)(ws+4320) = v3322;
	i8 v3323 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3323)();

	i1 v3324 = (i1)+0;
	i8 v3325 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3325 = v3324;

c02_0281:;

c02_027d:;

}
	void f186_FlushInitialiserBuffer(void);

// E_bytes workspace at ws+4224 length ws+9
void f187_E_bytes(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

c02_028d:;

	i8 v3326 = (i8)(intptr_t)(ws+4232);
	i1 v3327 = *(i1*)(intptr_t)v3326;
	i1 v3328 = (i1)+0;
	if (v3327==v3328) goto c02_0292; else goto c02_0291;

c02_0291:;

	i8 v3329 = (i8)(intptr_t)(ws+4224);
	i8 v3330 = *(i8*)(intptr_t)v3329;
	i1 v3331 = *(i1*)(intptr_t)v3330;
	i8 v3332 = (i8)(intptr_t)(ws+3838);
	i8 v3333 = (i8)(intptr_t)(ws+3846);
	i1 v3334 = *(i1*)(intptr_t)v3333;
	i8 v3335 = v3334;
	i8 v3336 = v3332+v3335;
	*(i1*)(intptr_t)v3336 = v3331;

	i8 v3337 = (i8)(intptr_t)(ws+4224);
	i8 v3338 = *(i8*)(intptr_t)v3337;
	i8 v3339 = v3338+(+1);
	i8 v3340 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v3340 = v3339;

	i8 v3341 = (i8)(intptr_t)(ws+3846);
	i1 v3342 = *(i1*)(intptr_t)v3341;
	i1 v3343 = v3342+(+1);
	i8 v3344 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3344 = v3343;

	i8 v3345 = (i8)(intptr_t)(ws+3846);
	i1 v3346 = *(i1*)(intptr_t)v3345;
	i1 v3347 = (i1)+8;
	if (v3346==v3347) goto c02_0296; else goto c02_0297;

c02_0296:;

	i8 v3348 = (i8)(intptr_t)(f186_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v3348)();

c02_0297:;

c02_0293:;

	i8 v3349 = (i8)(intptr_t)(ws+4232);
	i1 v3350 = *(i1*)(intptr_t)v3349;
	i1 v3351 = v3350+(-1);
	i8 v3352 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v3352 = v3351;

	goto c02_028d;

c02_0292:;

}
	void f66_StartError(void);
const i1 c02_s0128[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
	void f12_print(void);
	void f18_print_i8(void);
	void f67_EndError(void);

// CheckBufferAlignment workspace at ws+4232 length ws+0
void f188_CheckBufferAlignment(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3353 = (i8)(intptr_t)(ws+3846);
	i1 v3354 = *(i1*)(intptr_t)v3353;
	i1 v3355 = (i1)+0;
	if (v3354==v3355) goto c02_029c; else goto c02_029b;

c02_029b:;

	i8 v3356 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v3356)();

	i8 v3357 = (i8)(intptr_t)c02_s0128;
	*(i8*)(intptr_t)(ws+4288) = v3357;
	i8 v3358 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v3358)();

	i8 v3359 = (i8)(intptr_t)(ws+3846);
	i1 v3360 = *(i1*)(intptr_t)v3359;
	*(i1*)(intptr_t)(ws+4232) = v3360;
	i8 v3361 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v3361)();

	i8 v3362 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v3362)();

c02_029c:;

c02_0298:;

}
	void f31_MemCopy(void);

// MatchPredicate workspace at ws+4208 length ws+56
void f189_MatchPredicate(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3363 = (i8)(intptr_t)(ws+4216);
	i8 v3364 = *(i8*)(intptr_t)v3363;
	*(i8*)(intptr_t)(ws+4264) = v3364;
	i8 v3365 = (i8)+32;
	*(i8*)(intptr_t)(ws+4272) = v3365;
	i8 v3366 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)(ws+4280) = v3366;
	i8 v3367 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v3367)();

	i1 v3368 = (i1)+0;
	i8 v3369 = (i8)(intptr_t)(ws+4224);
	*(i1*)(intptr_t)v3369 = v3368;

	i8 v3370 = (i8)(intptr_t)(ws+4208);
	i1 v3371 = *(i1*)(intptr_t)v3370;

c02_029d:;


}

// Emitter workspace at ws+4224 length ws+0
void f191_Emitter(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

}
	void f182_BranchConstant(void);

// emit_0 workspace at ws+4224 length ws+0
void f192_emit_0(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3417 = (i8)(intptr_t)(ws+4128);
	i8 v3418 = *(i8*)(intptr_t)v3417;
	i8 v3419 = v3418+(+16);
	i8 v3420 = *(i8*)(intptr_t)v3419;
	*(i8*)(intptr_t)(ws+4224) = v3420;
	i8 v3421 = (i8)(intptr_t)(ws+4152);
	i8 v3422 = *(i8*)(intptr_t)v3421;
	i4 v3423 = *(i4*)(intptr_t)v3422;
	*(i4*)(intptr_t)(ws+4232) = v3423;
	i8 v3424 = (i8)(intptr_t)(ws+4168);
	i8 v3425 = *(i8*)(intptr_t)v3424;
	i4 v3426 = *(i4*)(intptr_t)v3425;
	*(i4*)(intptr_t)(ws+4236) = v3426;
	i8 v3427 = (i8)(intptr_t)(f182_BranchConstant);

	((void(*)(void))(intptr_t)v3427)();

}
	void f172_StoreVV(void);

// emit_1 workspace at ws+4224 length ws+0
void f193_emit_1(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3428 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3428;
	i8 v3429 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(void))(intptr_t)v3429)();

}
	void f172_StoreVV(void);

// emit_2 workspace at ws+4224 length ws+0
void f194_emit_2(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3430 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3430;
	i8 v3431 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(void))(intptr_t)v3431)();

}
	void f172_StoreVV(void);

// emit_3 workspace at ws+4224 length ws+0
void f195_emit_3(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3432 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3432;
	i8 v3433 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(void))(intptr_t)v3433)();

}
	void f172_StoreVV(void);

// emit_4 workspace at ws+4224 length ws+0
void f196_emit_4(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3434 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3434;
	i8 v3435 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(void))(intptr_t)v3435)();

}
const i1 c02_s0129[] = { 0x2b,0 };
	void f175_Op2VC(void);

// emit_5 workspace at ws+4224 length ws+0
void f197_emit_5(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3436 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3436;
	i8 v3437 = (i8)(intptr_t)c02_s0129;
	*(i8*)(intptr_t)(ws+4232) = v3437;
	i8 v3438 = (i8)(intptr_t)(ws+4168);
	i8 v3439 = *(i8*)(intptr_t)v3438;
	i4 v3440 = *(i4*)(intptr_t)v3439;
	*(i4*)(intptr_t)(ws+4240) = v3440;
	i8 v3441 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3441)();

}
const i1 c02_s012a[] = { 0x2b,0 };
	void f175_Op2VC(void);

// emit_6 workspace at ws+4224 length ws+0
void f198_emit_6(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3442 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3442;
	i8 v3443 = (i8)(intptr_t)c02_s012a;
	*(i8*)(intptr_t)(ws+4232) = v3443;
	i8 v3444 = (i8)(intptr_t)(ws+4168);
	i8 v3445 = *(i8*)(intptr_t)v3444;
	i4 v3446 = *(i4*)(intptr_t)v3445;
	*(i4*)(intptr_t)(ws+4240) = v3446;
	i8 v3447 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3447)();

}
const i1 c02_s012b[] = { 0x2b,0 };
	void f175_Op2VC(void);

// emit_7 workspace at ws+4224 length ws+0
void f199_emit_7(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3448 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3448;
	i8 v3449 = (i8)(intptr_t)c02_s012b;
	*(i8*)(intptr_t)(ws+4232) = v3449;
	i8 v3450 = (i8)(intptr_t)(ws+4168);
	i8 v3451 = *(i8*)(intptr_t)v3450;
	i4 v3452 = *(i4*)(intptr_t)v3451;
	*(i4*)(intptr_t)(ws+4240) = v3452;
	i8 v3453 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3453)();

}
const i1 c02_s012c[] = { 0x2b,0 };
	void f175_Op2VC(void);

// emit_8 workspace at ws+4224 length ws+0
void f200_emit_8(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3454 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3454;
	i8 v3455 = (i8)(intptr_t)c02_s012c;
	*(i8*)(intptr_t)(ws+4232) = v3455;
	i8 v3456 = (i8)(intptr_t)(ws+4168);
	i8 v3457 = *(i8*)(intptr_t)v3456;
	i4 v3458 = *(i4*)(intptr_t)v3457;
	*(i4*)(intptr_t)(ws+4240) = v3458;
	i8 v3459 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3459)();

}
const i1 c02_s012d[] = { 0x2d,0 };
	void f175_Op2VC(void);

// emit_9 workspace at ws+4224 length ws+0
void f201_emit_9(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3460 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3460;
	i8 v3461 = (i8)(intptr_t)c02_s012d;
	*(i8*)(intptr_t)(ws+4232) = v3461;
	i8 v3462 = (i8)(intptr_t)(ws+4168);
	i8 v3463 = *(i8*)(intptr_t)v3462;
	i4 v3464 = *(i4*)(intptr_t)v3463;
	*(i4*)(intptr_t)(ws+4240) = v3464;
	i8 v3465 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3465)();

}
const i1 c02_s012e[] = { 0x2d,0 };
	void f175_Op2VC(void);

// emit_10 workspace at ws+4224 length ws+0
void f202_emit_10(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3466 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3466;
	i8 v3467 = (i8)(intptr_t)c02_s012e;
	*(i8*)(intptr_t)(ws+4232) = v3467;
	i8 v3468 = (i8)(intptr_t)(ws+4168);
	i8 v3469 = *(i8*)(intptr_t)v3468;
	i4 v3470 = *(i4*)(intptr_t)v3469;
	*(i4*)(intptr_t)(ws+4240) = v3470;
	i8 v3471 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3471)();

}
const i1 c02_s012f[] = { 0x2d,0 };
	void f175_Op2VC(void);

// emit_11 workspace at ws+4224 length ws+0
void f203_emit_11(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3472 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3472;
	i8 v3473 = (i8)(intptr_t)c02_s012f;
	*(i8*)(intptr_t)(ws+4232) = v3473;
	i8 v3474 = (i8)(intptr_t)(ws+4168);
	i8 v3475 = *(i8*)(intptr_t)v3474;
	i4 v3476 = *(i4*)(intptr_t)v3475;
	*(i4*)(intptr_t)(ws+4240) = v3476;
	i8 v3477 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3477)();

}
const i1 c02_s0130[] = { 0x2d,0 };
	void f175_Op2VC(void);

// emit_12 workspace at ws+4224 length ws+0
void f204_emit_12(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3478 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3478;
	i8 v3479 = (i8)(intptr_t)c02_s0130;
	*(i8*)(intptr_t)(ws+4232) = v3479;
	i8 v3480 = (i8)(intptr_t)(ws+4168);
	i8 v3481 = *(i8*)(intptr_t)v3480;
	i4 v3482 = *(i4*)(intptr_t)v3481;
	*(i4*)(intptr_t)(ws+4240) = v3482;
	i8 v3483 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3483)();

}
const i1 c02_s0131[] = { 0x2a,0 };
	void f175_Op2VC(void);

// emit_13 workspace at ws+4224 length ws+0
void f205_emit_13(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3484 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3484;
	i8 v3485 = (i8)(intptr_t)c02_s0131;
	*(i8*)(intptr_t)(ws+4232) = v3485;
	i8 v3486 = (i8)(intptr_t)(ws+4168);
	i8 v3487 = *(i8*)(intptr_t)v3486;
	i4 v3488 = *(i4*)(intptr_t)v3487;
	*(i4*)(intptr_t)(ws+4240) = v3488;
	i8 v3489 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3489)();

}
const i1 c02_s0132[] = { 0x2a,0 };
	void f175_Op2VC(void);

// emit_14 workspace at ws+4224 length ws+0
void f206_emit_14(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3490 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3490;
	i8 v3491 = (i8)(intptr_t)c02_s0132;
	*(i8*)(intptr_t)(ws+4232) = v3491;
	i8 v3492 = (i8)(intptr_t)(ws+4168);
	i8 v3493 = *(i8*)(intptr_t)v3492;
	i4 v3494 = *(i4*)(intptr_t)v3493;
	*(i4*)(intptr_t)(ws+4240) = v3494;
	i8 v3495 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3495)();

}
const i1 c02_s0133[] = { 0x2a,0 };
	void f175_Op2VC(void);

// emit_15 workspace at ws+4224 length ws+0
void f207_emit_15(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3496 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3496;
	i8 v3497 = (i8)(intptr_t)c02_s0133;
	*(i8*)(intptr_t)(ws+4232) = v3497;
	i8 v3498 = (i8)(intptr_t)(ws+4168);
	i8 v3499 = *(i8*)(intptr_t)v3498;
	i4 v3500 = *(i4*)(intptr_t)v3499;
	*(i4*)(intptr_t)(ws+4240) = v3500;
	i8 v3501 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3501)();

}
const i1 c02_s0134[] = { 0x2a,0 };
	void f175_Op2VC(void);

// emit_16 workspace at ws+4224 length ws+0
void f208_emit_16(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3502 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3502;
	i8 v3503 = (i8)(intptr_t)c02_s0134;
	*(i8*)(intptr_t)(ws+4232) = v3503;
	i8 v3504 = (i8)(intptr_t)(ws+4168);
	i8 v3505 = *(i8*)(intptr_t)v3504;
	i4 v3506 = *(i4*)(intptr_t)v3505;
	*(i4*)(intptr_t)(ws+4240) = v3506;
	i8 v3507 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3507)();

}
const i1 c02_s0135[] = { 0x2f,0 };
	void f175_Op2VC(void);

// emit_17 workspace at ws+4224 length ws+0
void f209_emit_17(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3508 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3508;
	i8 v3509 = (i8)(intptr_t)c02_s0135;
	*(i8*)(intptr_t)(ws+4232) = v3509;
	i8 v3510 = (i8)(intptr_t)(ws+4168);
	i8 v3511 = *(i8*)(intptr_t)v3510;
	i4 v3512 = *(i4*)(intptr_t)v3511;
	*(i4*)(intptr_t)(ws+4240) = v3512;
	i8 v3513 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3513)();

}
const i1 c02_s0136[] = { 0x2f,0 };
	void f175_Op2VC(void);

// emit_18 workspace at ws+4224 length ws+0
void f210_emit_18(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3514 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3514;
	i8 v3515 = (i8)(intptr_t)c02_s0136;
	*(i8*)(intptr_t)(ws+4232) = v3515;
	i8 v3516 = (i8)(intptr_t)(ws+4168);
	i8 v3517 = *(i8*)(intptr_t)v3516;
	i4 v3518 = *(i4*)(intptr_t)v3517;
	*(i4*)(intptr_t)(ws+4240) = v3518;
	i8 v3519 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3519)();

}
const i1 c02_s0137[] = { 0x2f,0 };
	void f175_Op2VC(void);

// emit_19 workspace at ws+4224 length ws+0
void f211_emit_19(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3520 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3520;
	i8 v3521 = (i8)(intptr_t)c02_s0137;
	*(i8*)(intptr_t)(ws+4232) = v3521;
	i8 v3522 = (i8)(intptr_t)(ws+4168);
	i8 v3523 = *(i8*)(intptr_t)v3522;
	i4 v3524 = *(i4*)(intptr_t)v3523;
	*(i4*)(intptr_t)(ws+4240) = v3524;
	i8 v3525 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3525)();

}
const i1 c02_s0138[] = { 0x2f,0 };
	void f175_Op2VC(void);

// emit_20 workspace at ws+4224 length ws+0
void f212_emit_20(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3526 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3526;
	i8 v3527 = (i8)(intptr_t)c02_s0138;
	*(i8*)(intptr_t)(ws+4232) = v3527;
	i8 v3528 = (i8)(intptr_t)(ws+4168);
	i8 v3529 = *(i8*)(intptr_t)v3528;
	i4 v3530 = *(i4*)(intptr_t)v3529;
	*(i4*)(intptr_t)(ws+4240) = v3530;
	i8 v3531 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3531)();

}
const i1 c02_s0139[] = { 0x25,0 };
	void f175_Op2VC(void);

// emit_21 workspace at ws+4224 length ws+0
void f213_emit_21(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3532 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3532;
	i8 v3533 = (i8)(intptr_t)c02_s0139;
	*(i8*)(intptr_t)(ws+4232) = v3533;
	i8 v3534 = (i8)(intptr_t)(ws+4168);
	i8 v3535 = *(i8*)(intptr_t)v3534;
	i4 v3536 = *(i4*)(intptr_t)v3535;
	*(i4*)(intptr_t)(ws+4240) = v3536;
	i8 v3537 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3537)();

}
const i1 c02_s013a[] = { 0x25,0 };
	void f175_Op2VC(void);

// emit_22 workspace at ws+4224 length ws+0
void f214_emit_22(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3538 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3538;
	i8 v3539 = (i8)(intptr_t)c02_s013a;
	*(i8*)(intptr_t)(ws+4232) = v3539;
	i8 v3540 = (i8)(intptr_t)(ws+4168);
	i8 v3541 = *(i8*)(intptr_t)v3540;
	i4 v3542 = *(i4*)(intptr_t)v3541;
	*(i4*)(intptr_t)(ws+4240) = v3542;
	i8 v3543 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3543)();

}
const i1 c02_s013b[] = { 0x25,0 };
	void f175_Op2VC(void);

// emit_23 workspace at ws+4224 length ws+0
void f215_emit_23(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3544 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3544;
	i8 v3545 = (i8)(intptr_t)c02_s013b;
	*(i8*)(intptr_t)(ws+4232) = v3545;
	i8 v3546 = (i8)(intptr_t)(ws+4168);
	i8 v3547 = *(i8*)(intptr_t)v3546;
	i4 v3548 = *(i4*)(intptr_t)v3547;
	*(i4*)(intptr_t)(ws+4240) = v3548;
	i8 v3549 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3549)();

}
const i1 c02_s013c[] = { 0x25,0 };
	void f175_Op2VC(void);

// emit_24 workspace at ws+4224 length ws+0
void f216_emit_24(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3550 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3550;
	i8 v3551 = (i8)(intptr_t)c02_s013c;
	*(i8*)(intptr_t)(ws+4232) = v3551;
	i8 v3552 = (i8)(intptr_t)(ws+4168);
	i8 v3553 = *(i8*)(intptr_t)v3552;
	i4 v3554 = *(i4*)(intptr_t)v3553;
	*(i4*)(intptr_t)(ws+4240) = v3554;
	i8 v3555 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3555)();

}
const i1 c02_s013d[] = { 0x2f,0 };
	void f177_Op2VCSigned(void);

// emit_25 workspace at ws+4224 length ws+0
void f217_emit_25(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3556 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3556;
	i8 v3557 = (i8)(intptr_t)c02_s013d;
	*(i8*)(intptr_t)(ws+4232) = v3557;
	i8 v3558 = (i8)(intptr_t)(ws+4168);
	i8 v3559 = *(i8*)(intptr_t)v3558;
	i4 v3560 = *(i4*)(intptr_t)v3559;
	*(i4*)(intptr_t)(ws+4240) = v3560;
	i8 v3561 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3561)();

}
const i1 c02_s013e[] = { 0x2f,0 };
	void f177_Op2VCSigned(void);

// emit_26 workspace at ws+4224 length ws+0
void f218_emit_26(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3562 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3562;
	i8 v3563 = (i8)(intptr_t)c02_s013e;
	*(i8*)(intptr_t)(ws+4232) = v3563;
	i8 v3564 = (i8)(intptr_t)(ws+4168);
	i8 v3565 = *(i8*)(intptr_t)v3564;
	i4 v3566 = *(i4*)(intptr_t)v3565;
	*(i4*)(intptr_t)(ws+4240) = v3566;
	i8 v3567 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3567)();

}
const i1 c02_s013f[] = { 0x2f,0 };
	void f177_Op2VCSigned(void);

// emit_27 workspace at ws+4224 length ws+0
void f219_emit_27(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3568 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3568;
	i8 v3569 = (i8)(intptr_t)c02_s013f;
	*(i8*)(intptr_t)(ws+4232) = v3569;
	i8 v3570 = (i8)(intptr_t)(ws+4168);
	i8 v3571 = *(i8*)(intptr_t)v3570;
	i4 v3572 = *(i4*)(intptr_t)v3571;
	*(i4*)(intptr_t)(ws+4240) = v3572;
	i8 v3573 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3573)();

}
const i1 c02_s0140[] = { 0x2f,0 };
	void f177_Op2VCSigned(void);

// emit_28 workspace at ws+4224 length ws+0
void f220_emit_28(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3574 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3574;
	i8 v3575 = (i8)(intptr_t)c02_s0140;
	*(i8*)(intptr_t)(ws+4232) = v3575;
	i8 v3576 = (i8)(intptr_t)(ws+4168);
	i8 v3577 = *(i8*)(intptr_t)v3576;
	i4 v3578 = *(i4*)(intptr_t)v3577;
	*(i4*)(intptr_t)(ws+4240) = v3578;
	i8 v3579 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3579)();

}
const i1 c02_s0141[] = { 0x25,0 };
	void f177_Op2VCSigned(void);

// emit_29 workspace at ws+4224 length ws+0
void f221_emit_29(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3580 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3580;
	i8 v3581 = (i8)(intptr_t)c02_s0141;
	*(i8*)(intptr_t)(ws+4232) = v3581;
	i8 v3582 = (i8)(intptr_t)(ws+4168);
	i8 v3583 = *(i8*)(intptr_t)v3582;
	i4 v3584 = *(i4*)(intptr_t)v3583;
	*(i4*)(intptr_t)(ws+4240) = v3584;
	i8 v3585 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3585)();

}
const i1 c02_s0142[] = { 0x25,0 };
	void f177_Op2VCSigned(void);

// emit_30 workspace at ws+4224 length ws+0
void f222_emit_30(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3586 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3586;
	i8 v3587 = (i8)(intptr_t)c02_s0142;
	*(i8*)(intptr_t)(ws+4232) = v3587;
	i8 v3588 = (i8)(intptr_t)(ws+4168);
	i8 v3589 = *(i8*)(intptr_t)v3588;
	i4 v3590 = *(i4*)(intptr_t)v3589;
	*(i4*)(intptr_t)(ws+4240) = v3590;
	i8 v3591 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3591)();

}
const i1 c02_s0143[] = { 0x25,0 };
	void f177_Op2VCSigned(void);

// emit_31 workspace at ws+4224 length ws+0
void f223_emit_31(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3592 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3592;
	i8 v3593 = (i8)(intptr_t)c02_s0143;
	*(i8*)(intptr_t)(ws+4232) = v3593;
	i8 v3594 = (i8)(intptr_t)(ws+4168);
	i8 v3595 = *(i8*)(intptr_t)v3594;
	i4 v3596 = *(i4*)(intptr_t)v3595;
	*(i4*)(intptr_t)(ws+4240) = v3596;
	i8 v3597 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3597)();

}
const i1 c02_s0144[] = { 0x25,0 };
	void f177_Op2VCSigned(void);

// emit_32 workspace at ws+4224 length ws+0
void f224_emit_32(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3598 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3598;
	i8 v3599 = (i8)(intptr_t)c02_s0144;
	*(i8*)(intptr_t)(ws+4232) = v3599;
	i8 v3600 = (i8)(intptr_t)(ws+4168);
	i8 v3601 = *(i8*)(intptr_t)v3600;
	i4 v3602 = *(i4*)(intptr_t)v3601;
	*(i4*)(intptr_t)(ws+4240) = v3602;
	i8 v3603 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(void))(intptr_t)v3603)();

}
const i1 c02_s0145[] = { 0x26,0 };
	void f175_Op2VC(void);

// emit_33 workspace at ws+4224 length ws+0
void f225_emit_33(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3604 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3604;
	i8 v3605 = (i8)(intptr_t)c02_s0145;
	*(i8*)(intptr_t)(ws+4232) = v3605;
	i8 v3606 = (i8)(intptr_t)(ws+4168);
	i8 v3607 = *(i8*)(intptr_t)v3606;
	i4 v3608 = *(i4*)(intptr_t)v3607;
	*(i4*)(intptr_t)(ws+4240) = v3608;
	i8 v3609 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3609)();

}
const i1 c02_s0146[] = { 0x26,0 };
	void f175_Op2VC(void);

// emit_34 workspace at ws+4224 length ws+0
void f226_emit_34(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3610 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3610;
	i8 v3611 = (i8)(intptr_t)c02_s0146;
	*(i8*)(intptr_t)(ws+4232) = v3611;
	i8 v3612 = (i8)(intptr_t)(ws+4168);
	i8 v3613 = *(i8*)(intptr_t)v3612;
	i4 v3614 = *(i4*)(intptr_t)v3613;
	*(i4*)(intptr_t)(ws+4240) = v3614;
	i8 v3615 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3615)();

}
const i1 c02_s0147[] = { 0x26,0 };
	void f175_Op2VC(void);

// emit_35 workspace at ws+4224 length ws+0
void f227_emit_35(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3616 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3616;
	i8 v3617 = (i8)(intptr_t)c02_s0147;
	*(i8*)(intptr_t)(ws+4232) = v3617;
	i8 v3618 = (i8)(intptr_t)(ws+4168);
	i8 v3619 = *(i8*)(intptr_t)v3618;
	i4 v3620 = *(i4*)(intptr_t)v3619;
	*(i4*)(intptr_t)(ws+4240) = v3620;
	i8 v3621 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3621)();

}
const i1 c02_s0148[] = { 0x26,0 };
	void f175_Op2VC(void);

// emit_36 workspace at ws+4224 length ws+0
void f228_emit_36(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3622 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3622;
	i8 v3623 = (i8)(intptr_t)c02_s0148;
	*(i8*)(intptr_t)(ws+4232) = v3623;
	i8 v3624 = (i8)(intptr_t)(ws+4168);
	i8 v3625 = *(i8*)(intptr_t)v3624;
	i4 v3626 = *(i4*)(intptr_t)v3625;
	*(i4*)(intptr_t)(ws+4240) = v3626;
	i8 v3627 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3627)();

}
const i1 c02_s0149[] = { 0x7c,0 };
	void f175_Op2VC(void);

// emit_37 workspace at ws+4224 length ws+0
void f229_emit_37(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3628 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3628;
	i8 v3629 = (i8)(intptr_t)c02_s0149;
	*(i8*)(intptr_t)(ws+4232) = v3629;
	i8 v3630 = (i8)(intptr_t)(ws+4168);
	i8 v3631 = *(i8*)(intptr_t)v3630;
	i4 v3632 = *(i4*)(intptr_t)v3631;
	*(i4*)(intptr_t)(ws+4240) = v3632;
	i8 v3633 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3633)();

}
const i1 c02_s014a[] = { 0x7c,0 };
	void f175_Op2VC(void);

// emit_38 workspace at ws+4224 length ws+0
void f230_emit_38(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3634 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3634;
	i8 v3635 = (i8)(intptr_t)c02_s014a;
	*(i8*)(intptr_t)(ws+4232) = v3635;
	i8 v3636 = (i8)(intptr_t)(ws+4168);
	i8 v3637 = *(i8*)(intptr_t)v3636;
	i4 v3638 = *(i4*)(intptr_t)v3637;
	*(i4*)(intptr_t)(ws+4240) = v3638;
	i8 v3639 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3639)();

}
const i1 c02_s014b[] = { 0x7c,0 };
	void f175_Op2VC(void);

// emit_39 workspace at ws+4224 length ws+0
void f231_emit_39(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3640 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3640;
	i8 v3641 = (i8)(intptr_t)c02_s014b;
	*(i8*)(intptr_t)(ws+4232) = v3641;
	i8 v3642 = (i8)(intptr_t)(ws+4168);
	i8 v3643 = *(i8*)(intptr_t)v3642;
	i4 v3644 = *(i4*)(intptr_t)v3643;
	*(i4*)(intptr_t)(ws+4240) = v3644;
	i8 v3645 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3645)();

}
const i1 c02_s014c[] = { 0x7c,0 };
	void f175_Op2VC(void);

// emit_40 workspace at ws+4224 length ws+0
void f232_emit_40(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3646 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3646;
	i8 v3647 = (i8)(intptr_t)c02_s014c;
	*(i8*)(intptr_t)(ws+4232) = v3647;
	i8 v3648 = (i8)(intptr_t)(ws+4168);
	i8 v3649 = *(i8*)(intptr_t)v3648;
	i4 v3650 = *(i4*)(intptr_t)v3649;
	*(i4*)(intptr_t)(ws+4240) = v3650;
	i8 v3651 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3651)();

}
const i1 c02_s014d[] = { 0x5e,0 };
	void f175_Op2VC(void);

// emit_41 workspace at ws+4224 length ws+0
void f233_emit_41(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3652 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3652;
	i8 v3653 = (i8)(intptr_t)c02_s014d;
	*(i8*)(intptr_t)(ws+4232) = v3653;
	i8 v3654 = (i8)(intptr_t)(ws+4168);
	i8 v3655 = *(i8*)(intptr_t)v3654;
	i4 v3656 = *(i4*)(intptr_t)v3655;
	*(i4*)(intptr_t)(ws+4240) = v3656;
	i8 v3657 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3657)();

}
const i1 c02_s014e[] = { 0x5e,0 };
	void f175_Op2VC(void);

// emit_42 workspace at ws+4224 length ws+0
void f234_emit_42(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3658 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3658;
	i8 v3659 = (i8)(intptr_t)c02_s014e;
	*(i8*)(intptr_t)(ws+4232) = v3659;
	i8 v3660 = (i8)(intptr_t)(ws+4168);
	i8 v3661 = *(i8*)(intptr_t)v3660;
	i4 v3662 = *(i4*)(intptr_t)v3661;
	*(i4*)(intptr_t)(ws+4240) = v3662;
	i8 v3663 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3663)();

}
const i1 c02_s014f[] = { 0x5e,0 };
	void f175_Op2VC(void);

// emit_43 workspace at ws+4224 length ws+0
void f235_emit_43(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3664 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3664;
	i8 v3665 = (i8)(intptr_t)c02_s014f;
	*(i8*)(intptr_t)(ws+4232) = v3665;
	i8 v3666 = (i8)(intptr_t)(ws+4168);
	i8 v3667 = *(i8*)(intptr_t)v3666;
	i4 v3668 = *(i4*)(intptr_t)v3667;
	*(i4*)(intptr_t)(ws+4240) = v3668;
	i8 v3669 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3669)();

}
const i1 c02_s0150[] = { 0x5e,0 };
	void f175_Op2VC(void);

// emit_44 workspace at ws+4224 length ws+0
void f236_emit_44(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3670 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3670;
	i8 v3671 = (i8)(intptr_t)c02_s0150;
	*(i8*)(intptr_t)(ws+4232) = v3671;
	i8 v3672 = (i8)(intptr_t)(ws+4168);
	i8 v3673 = *(i8*)(intptr_t)v3672;
	i4 v3674 = *(i4*)(intptr_t)v3673;
	*(i4*)(intptr_t)(ws+4240) = v3674;
	i8 v3675 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(void))(intptr_t)v3675)();

}
	void f103_E_labelref(void);
const i1 c02_s0151[] = { 0x3a,0x3b,0x0a,0 };
	void f92_E(void);

// emit_47 workspace at ws+4224 length ws+0
void f237_emit_47(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3676 = (i8)(intptr_t)(ws+4136);
	i8 v3677 = *(i8*)(intptr_t)v3676;
	i2 v3678 = *(i2*)(intptr_t)v3677;
	*(i2*)(intptr_t)(ws+4256) = v3678;
	i8 v3679 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3679)();

	i8 v3680 = (i8)(intptr_t)c02_s0151;
	*(i8*)(intptr_t)(ws+4320) = v3680;
	i8 v3681 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3681)();

}
const i1 c02_s0152[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(void);
	void f103_E_labelref(void);
const i1 c02_s0153[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// emit_48 workspace at ws+4224 length ws+0
void f238_emit_48(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3682 = (i8)(intptr_t)c02_s0152;
	*(i8*)(intptr_t)(ws+4320) = v3682;
	i8 v3683 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3683)();

	i8 v3684 = (i8)(intptr_t)(ws+4136);
	i8 v3685 = *(i8*)(intptr_t)v3684;
	i2 v3686 = *(i2*)(intptr_t)v3685;
	*(i2*)(intptr_t)(ws+4256) = v3686;
	i8 v3687 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(void))(intptr_t)v3687)();

	i8 v3688 = (i8)(intptr_t)c02_s0153;
	*(i8*)(intptr_t)(ws+4320) = v3688;
	i8 v3689 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3689)();

}
const i1 c02_s0154[] = { 0x09,0x72,0x65,0x74,0x75,0x72,0x6e,0x3b,0x0a,0 };
	void f92_E(void);

// emit_49 workspace at ws+4224 length ws+0
void f239_emit_49(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3690 = (i8)(intptr_t)c02_s0154;
	*(i8*)(intptr_t)(ws+4320) = v3690;
	i8 v3691 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3691)();

}
	void f106_EmitterOpenStream(void);
const i1 c02_s0155[] = { 0x0a,0x2f,0x2f,0x20,0 };
	void f92_E(void);
	void f92_E(void);
const i1 c02_s0156[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f84_E_b16(void);
	void f83_E_b8(void);
	void f84_E_b16(void);
const i1 c02_s0157[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f84_E_b16(void);
	void f83_E_b8(void);
const i1 c02_s0158[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
	void f92_E(void);
	void f104_E_subref(void);
const i1 c02_s0159[] = { 0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
	void f92_E(void);
const i1 c02_s015a[] = { 0x09,0x74,0x66,0x72,0x61,0x6d,0x65,0x5f,0x70,0x74,0x72,0x2d,0x3e,0x61,0x63,0x74,0x69,0x76,0x61,0x74,0x65,0x64,0x20,0x3d,0x20,0x74,0x66,0x72,0x61,0x6d,0x65,0x5f,0x70,0x74,0x72,0x2d,0x3e,0x74,0x72,0x61,0x6d,0x70,0x32,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x3b,0x0a,0 };
	void f92_E(void);
const i1 c02_s015b[] = { 0x09,0x74,0x66,0x72,0x61,0x6d,0x65,0x5f,0x70,0x74,0x72,0x2d,0x3e,0x74,0x72,0x61,0x6d,0x70,0x32,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x3b,0x0a,0 };
	void f92_E(void);

// emit_50 workspace at ws+4224 length ws+0
void f240_emit_50(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3692 = (i8)(intptr_t)(ws+40);
	i8 v3693 = *(i8*)(intptr_t)v3692;
	*(i8*)(intptr_t)(ws+4248) = v3693;
	i8 v3694 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(void))(intptr_t)v3694)();

	i8 v3695 = (i8)(intptr_t)c02_s0155;
	*(i8*)(intptr_t)(ws+4320) = v3695;
	i8 v3696 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3696)();

	i8 v3697 = (i8)(intptr_t)(ws+40);
	i8 v3698 = *(i8*)(intptr_t)v3697;
	i8 v3699 = *(i8*)(intptr_t)v3698;
	*(i8*)(intptr_t)(ws+4320) = v3699;
	i8 v3700 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3700)();

	i8 v3701 = (i8)(intptr_t)c02_s0156;
	*(i8*)(intptr_t)(ws+4320) = v3701;
	i8 v3702 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3702)();

	i1 v3703 = (i1)+2;
	*(i1*)(intptr_t)(ws+4336) = v3703;
	i8 v3704 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3704)();

	i8 v3705 = (i8)(intptr_t)(ws+40);
	i8 v3706 = *(i8*)(intptr_t)v3705;
	i8 v3707 = v3706+(+8);
	i2 v3708 = *(i2*)(intptr_t)v3707;
	*(i2*)(intptr_t)(ws+4272) = v3708;
	i8 v3709 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v3709)();

	i1 v3710 = (i1)+0;
	*(i1*)(intptr_t)(ws+4336) = v3710;
	i8 v3711 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3711)();

	i2 v3712 = (i2)+0;
	*(i2*)(intptr_t)(ws+4272) = v3712;
	i8 v3713 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v3713)();

	i8 v3714 = (i8)(intptr_t)c02_s0157;
	*(i8*)(intptr_t)(ws+4320) = v3714;
	i8 v3715 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3715)();

	i1 v3716 = (i1)+5;
	*(i1*)(intptr_t)(ws+4336) = v3716;
	i8 v3717 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3717)();

	i8 v3718 = (i8)(intptr_t)(ws+40);
	i8 v3719 = *(i8*)(intptr_t)v3718;
	i8 v3720 = v3719+(+8);
	i2 v3721 = *(i2*)(intptr_t)v3720;
	*(i2*)(intptr_t)(ws+4272) = v3721;
	i8 v3722 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(void))(intptr_t)v3722)();

	i1 v3723 = (i1)+0;
	*(i1*)(intptr_t)(ws+4336) = v3723;
	i8 v3724 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v3724)();

	i8 v3725 = (i8)(intptr_t)c02_s0158;
	*(i8*)(intptr_t)(ws+4320) = v3725;
	i8 v3726 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3726)();

	i8 v3727 = (i8)(intptr_t)(ws+40);
	i8 v3728 = *(i8*)(intptr_t)v3727;
	*(i8*)(intptr_t)(ws+4240) = v3728;
	i8 v3729 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(void))(intptr_t)v3729)();

	i8 v3730 = (i8)(intptr_t)c02_s0159;
	*(i8*)(intptr_t)(ws+4320) = v3730;
	i8 v3731 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3731)();

	i8 v3732 = (i8)(intptr_t)c02_s015a;
	*(i8*)(intptr_t)(ws+4320) = v3732;
	i8 v3733 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3733)();

	i8 v3734 = (i8)(intptr_t)c02_s015b;
	*(i8*)(intptr_t)(ws+4320) = v3734;
	i8 v3735 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3735)();

}
const i1 c02_s015c[] = { 0x7d,0x0a,0 };
	void f92_E(void);
	void f107_EmitterCloseStream(void);

// emit_51 workspace at ws+4224 length ws+0
void f241_emit_51(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3736 = (i8)(intptr_t)c02_s015c;
	*(i8*)(intptr_t)(ws+4320) = v3736;
	i8 v3737 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3737)();

	i8 v3738 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3738)();

}
	void f167_Call(void);

// emit_52 workspace at ws+4224 length ws+0
void f242_emit_52(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3739 = (i8)(intptr_t)(ws+4136);
	i8 v3740 = *(i8*)(intptr_t)v3739;
	i8 v3741 = *(i8*)(intptr_t)v3740;
	i8 v3742 = v3741+(+8);
	i2 v3743 = *(i2*)(intptr_t)v3742;
	*(i2*)(intptr_t)(ws+4224) = v3743;
	i8 v3744 = (i8)(intptr_t)(f167_Call);

	((void(*)(void))(intptr_t)v3744)();

}
	void f168_Tailcall(void);

// emit_53 workspace at ws+4224 length ws+0
void f243_emit_53(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3745 = (i8)(intptr_t)(ws+4136);
	i8 v3746 = *(i8*)(intptr_t)v3745;
	i8 v3747 = *(i8*)(intptr_t)v3746;
	i8 v3748 = v3747+(+8);
	i2 v3749 = *(i2*)(intptr_t)v3748;
	*(i2*)(intptr_t)(ws+4224) = v3749;
	i8 v3750 = (i8)(intptr_t)(f168_Tailcall);

	((void(*)(void))(intptr_t)v3750)();

}
	void f169_PokeArg(void);

// emit_56 workspace at ws+4224 length ws+0
void f244_emit_56(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3751 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3751;
	i8 v3752 = (i8)(intptr_t)(ws+4136);
	i8 v3753 = *(i8*)(intptr_t)v3752;
	i8 v3754 = v3753+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3754;
	i8 v3755 = (i8)(intptr_t)(f169_PokeArg);

	((void(*)(void))(intptr_t)v3755)();

}
	void f169_PokeArg(void);

// emit_57 workspace at ws+4224 length ws+0
void f245_emit_57(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3756 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3756;
	i8 v3757 = (i8)(intptr_t)(ws+4136);
	i8 v3758 = *(i8*)(intptr_t)v3757;
	i8 v3759 = v3758+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3759;
	i8 v3760 = (i8)(intptr_t)(f169_PokeArg);

	((void(*)(void))(intptr_t)v3760)();

}
	void f169_PokeArg(void);

// emit_58 workspace at ws+4224 length ws+0
void f246_emit_58(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3761 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3761;
	i8 v3762 = (i8)(intptr_t)(ws+4136);
	i8 v3763 = *(i8*)(intptr_t)v3762;
	i8 v3764 = v3763+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3764;
	i8 v3765 = (i8)(intptr_t)(f169_PokeArg);

	((void(*)(void))(intptr_t)v3765)();

}
	void f169_PokeArg(void);

// emit_59 workspace at ws+4224 length ws+0
void f247_emit_59(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3766 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3766;
	i8 v3767 = (i8)(intptr_t)(ws+4136);
	i8 v3768 = *(i8*)(intptr_t)v3767;
	i8 v3769 = v3768+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3769;
	i8 v3770 = (i8)(intptr_t)(f169_PokeArg);

	((void(*)(void))(intptr_t)v3770)();

}
	void f170_PeekArg(void);

// emit_60 workspace at ws+4224 length ws+0
void f248_emit_60(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3771 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3771;
	i8 v3772 = (i8)(intptr_t)(ws+4136);
	i8 v3773 = *(i8*)(intptr_t)v3772;
	i8 v3774 = v3773+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3774;
	i8 v3775 = (i8)(intptr_t)(f170_PeekArg);

	((void(*)(void))(intptr_t)v3775)();

}
	void f170_PeekArg(void);

// emit_61 workspace at ws+4224 length ws+0
void f249_emit_61(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3776 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3776;
	i8 v3777 = (i8)(intptr_t)(ws+4136);
	i8 v3778 = *(i8*)(intptr_t)v3777;
	i8 v3779 = v3778+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3779;
	i8 v3780 = (i8)(intptr_t)(f170_PeekArg);

	((void(*)(void))(intptr_t)v3780)();

}
	void f170_PeekArg(void);

// emit_62 workspace at ws+4224 length ws+0
void f250_emit_62(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3781 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3781;
	i8 v3782 = (i8)(intptr_t)(ws+4136);
	i8 v3783 = *(i8*)(intptr_t)v3782;
	i8 v3784 = v3783+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3784;
	i8 v3785 = (i8)(intptr_t)(f170_PeekArg);

	((void(*)(void))(intptr_t)v3785)();

}
	void f170_PeekArg(void);

// emit_63 workspace at ws+4224 length ws+0
void f251_emit_63(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3786 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3786;
	i8 v3787 = (i8)(intptr_t)(ws+4136);
	i8 v3788 = *(i8*)(intptr_t)v3787;
	i8 v3789 = v3788+(+8);
	*(i8*)(intptr_t)(ws+4232) = v3789;
	i8 v3790 = (i8)(intptr_t)(f170_PeekArg);

	((void(*)(void))(intptr_t)v3790)();

}
	void f171_LoadConstant(void);

// emit_64 workspace at ws+4224 length ws+0
void f252_emit_64(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3791 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3791;
	i8 v3792 = (i8)(intptr_t)(ws+4136);
	i8 v3793 = *(i8*)(intptr_t)v3792;
	i4 v3794 = *(i4*)(intptr_t)v3793;
	*(i4*)(intptr_t)(ws+4228) = v3794;
	i8 v3795 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(void))(intptr_t)v3795)();

}
	void f171_LoadConstant(void);

// emit_65 workspace at ws+4224 length ws+0
void f253_emit_65(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3796 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3796;
	i8 v3797 = (i8)(intptr_t)(ws+4136);
	i8 v3798 = *(i8*)(intptr_t)v3797;
	i4 v3799 = *(i4*)(intptr_t)v3798;
	*(i4*)(intptr_t)(ws+4228) = v3799;
	i8 v3800 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(void))(intptr_t)v3800)();

}
	void f171_LoadConstant(void);

// emit_66 workspace at ws+4224 length ws+0
void f254_emit_66(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3801 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3801;
	i8 v3802 = (i8)(intptr_t)(ws+4136);
	i8 v3803 = *(i8*)(intptr_t)v3802;
	i4 v3804 = *(i4*)(intptr_t)v3803;
	*(i4*)(intptr_t)(ws+4228) = v3804;
	i8 v3805 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(void))(intptr_t)v3805)();

}
	void f171_LoadConstant(void);

// emit_67 workspace at ws+4224 length ws+0
void f255_emit_67(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3806 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3806;
	i8 v3807 = (i8)(intptr_t)(ws+4136);
	i8 v3808 = *(i8*)(intptr_t)v3807;
	i4 v3809 = *(i4*)(intptr_t)v3808;
	*(i4*)(intptr_t)(ws+4228) = v3809;
	i8 v3810 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(void))(intptr_t)v3810)();

}
	void f160_Push(void);
const i1 c02_s015d[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s015e[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f156_E_symref(void);
const i1 c02_s015f[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// emit_68 workspace at ws+4224 length ws+4
void f256_emit_68(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3811 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v3811)();

	i2 v3812 = *(i2*)(intptr_t)(ws+4264);
	i8 v3813 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v3813 = v3812;

	i8 v3814 = (i8)(intptr_t)(ws+4224);
	i2 v3815 = *(i2*)(intptr_t)v3814;
	i8 v3816 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v3816 = v3815;

	i8 v3817 = (i8)(intptr_t)c02_s015d;
	*(i8*)(intptr_t)(ws+4320) = v3817;
	i8 v3818 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3818)();

	i8 v3819 = (i8)(intptr_t)(ws+4226);
	i2 v3820 = *(i2*)(intptr_t)v3819;
	*(i2*)(intptr_t)(ws+4272) = v3820;
	i8 v3821 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3821)();

	i8 v3822 = (i8)(intptr_t)c02_s015e;
	*(i8*)(intptr_t)(ws+4320) = v3822;
	i8 v3823 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3823)();

	i8 v3824 = (i8)(intptr_t)(ws+4136);
	i8 v3825 = *(i8*)(intptr_t)v3824;
	*(i8*)(intptr_t)(ws+4248) = v3825;
	i8 v3826 = (i8)(intptr_t)(ws+4136);
	i8 v3827 = *(i8*)(intptr_t)v3826;
	i8 v3828 = v3827+(+16);
	i2 v3829 = *(i2*)(intptr_t)v3828;
	*(i2*)(intptr_t)(ws+4256) = v3829;
	i8 v3830 = (i8)(intptr_t)(f156_E_symref);

	((void(*)(void))(intptr_t)v3830)();

	i8 v3831 = (i8)(intptr_t)c02_s015f;
	*(i8*)(intptr_t)(ws+4320) = v3831;
	i8 v3832 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3832)();

}
	void f160_Push(void);
const i1 c02_s0160[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s0161[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f155_E_subref_sig(void);
const i1 c02_s0162[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(void);

// emit_69 workspace at ws+4224 length ws+4
void f257_emit_69(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3833 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v3833)();

	i2 v3834 = *(i2*)(intptr_t)(ws+4264);
	i8 v3835 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v3835 = v3834;

	i8 v3836 = (i8)(intptr_t)(ws+4224);
	i2 v3837 = *(i2*)(intptr_t)v3836;
	i8 v3838 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v3838 = v3837;

	i8 v3839 = (i8)(intptr_t)c02_s0160;
	*(i8*)(intptr_t)(ws+4320) = v3839;
	i8 v3840 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3840)();

	i8 v3841 = (i8)(intptr_t)(ws+4226);
	i2 v3842 = *(i2*)(intptr_t)v3841;
	*(i2*)(intptr_t)(ws+4272) = v3842;
	i8 v3843 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v3843)();

	i8 v3844 = (i8)(intptr_t)c02_s0161;
	*(i8*)(intptr_t)(ws+4320) = v3844;
	i8 v3845 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3845)();

	i8 v3846 = (i8)(intptr_t)(ws+4136);
	i8 v3847 = *(i8*)(intptr_t)v3846;
	i8 v3848 = *(i8*)(intptr_t)v3847;
	*(i8*)(intptr_t)(ws+4232) = v3848;
	i8 v3849 = (i8)(intptr_t)(f155_E_subref_sig);

	((void(*)(void))(intptr_t)v3849)();

	i8 v3850 = (i8)(intptr_t)c02_s0162;
	*(i8*)(intptr_t)(ws+4320) = v3850;
	i8 v3851 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v3851)();

}
	void f173_LoadVV(void);

// emit_70 workspace at ws+4224 length ws+0
void f258_emit_70(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3852 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3852;
	i8 v3853 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(void))(intptr_t)v3853)();

}
	void f173_LoadVV(void);

// emit_71 workspace at ws+4224 length ws+0
void f259_emit_71(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3854 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3854;
	i8 v3855 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(void))(intptr_t)v3855)();

}
	void f173_LoadVV(void);

// emit_72 workspace at ws+4224 length ws+0
void f260_emit_72(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3856 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3856;
	i8 v3857 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(void))(intptr_t)v3857)();

}
	void f173_LoadVV(void);

// emit_73 workspace at ws+4224 length ws+0
void f261_emit_73(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3858 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3858;
	i8 v3859 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(void))(intptr_t)v3859)();

}
const i1 c02_s0163[] = { 0x2b,0 };
	void f174_Op2VV(void);

// emit_74 workspace at ws+4224 length ws+0
void f262_emit_74(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3860 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3860;
	i8 v3861 = (i8)(intptr_t)c02_s0163;
	*(i8*)(intptr_t)(ws+4232) = v3861;
	i8 v3862 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3862)();

}
const i1 c02_s0164[] = { 0x2b,0 };
	void f174_Op2VV(void);

// emit_75 workspace at ws+4224 length ws+0
void f263_emit_75(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3863 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3863;
	i8 v3864 = (i8)(intptr_t)c02_s0164;
	*(i8*)(intptr_t)(ws+4232) = v3864;
	i8 v3865 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3865)();

}
const i1 c02_s0165[] = { 0x2b,0 };
	void f174_Op2VV(void);

// emit_76 workspace at ws+4224 length ws+0
void f264_emit_76(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3866 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3866;
	i8 v3867 = (i8)(intptr_t)c02_s0165;
	*(i8*)(intptr_t)(ws+4232) = v3867;
	i8 v3868 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3868)();

}
const i1 c02_s0166[] = { 0x2b,0 };
	void f174_Op2VV(void);

// emit_77 workspace at ws+4224 length ws+0
void f265_emit_77(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3869 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3869;
	i8 v3870 = (i8)(intptr_t)c02_s0166;
	*(i8*)(intptr_t)(ws+4232) = v3870;
	i8 v3871 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3871)();

}
const i1 c02_s0167[] = { 0x2d,0 };
	void f174_Op2VV(void);

// emit_78 workspace at ws+4224 length ws+0
void f266_emit_78(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3872 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3872;
	i8 v3873 = (i8)(intptr_t)c02_s0167;
	*(i8*)(intptr_t)(ws+4232) = v3873;
	i8 v3874 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3874)();

}
const i1 c02_s0168[] = { 0x2d,0 };
	void f174_Op2VV(void);

// emit_79 workspace at ws+4224 length ws+0
void f267_emit_79(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3875 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3875;
	i8 v3876 = (i8)(intptr_t)c02_s0168;
	*(i8*)(intptr_t)(ws+4232) = v3876;
	i8 v3877 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3877)();

}
const i1 c02_s0169[] = { 0x2d,0 };
	void f174_Op2VV(void);

// emit_80 workspace at ws+4224 length ws+0
void f268_emit_80(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3878 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3878;
	i8 v3879 = (i8)(intptr_t)c02_s0169;
	*(i8*)(intptr_t)(ws+4232) = v3879;
	i8 v3880 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3880)();

}
const i1 c02_s016a[] = { 0x2d,0 };
	void f174_Op2VV(void);

// emit_81 workspace at ws+4224 length ws+0
void f269_emit_81(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3881 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3881;
	i8 v3882 = (i8)(intptr_t)c02_s016a;
	*(i8*)(intptr_t)(ws+4232) = v3882;
	i8 v3883 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3883)();

}
const i1 c02_s016b[] = { 0x2a,0 };
	void f174_Op2VV(void);

// emit_82 workspace at ws+4224 length ws+0
void f270_emit_82(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3884 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3884;
	i8 v3885 = (i8)(intptr_t)c02_s016b;
	*(i8*)(intptr_t)(ws+4232) = v3885;
	i8 v3886 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3886)();

}
const i1 c02_s016c[] = { 0x2a,0 };
	void f174_Op2VV(void);

// emit_83 workspace at ws+4224 length ws+0
void f271_emit_83(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3887 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3887;
	i8 v3888 = (i8)(intptr_t)c02_s016c;
	*(i8*)(intptr_t)(ws+4232) = v3888;
	i8 v3889 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3889)();

}
const i1 c02_s016d[] = { 0x2a,0 };
	void f174_Op2VV(void);

// emit_84 workspace at ws+4224 length ws+0
void f272_emit_84(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3890 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3890;
	i8 v3891 = (i8)(intptr_t)c02_s016d;
	*(i8*)(intptr_t)(ws+4232) = v3891;
	i8 v3892 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3892)();

}
const i1 c02_s016e[] = { 0x2a,0 };
	void f174_Op2VV(void);

// emit_85 workspace at ws+4224 length ws+0
void f273_emit_85(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3893 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3893;
	i8 v3894 = (i8)(intptr_t)c02_s016e;
	*(i8*)(intptr_t)(ws+4232) = v3894;
	i8 v3895 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3895)();

}
const i1 c02_s016f[] = { 0x2f,0 };
	void f174_Op2VV(void);

// emit_86 workspace at ws+4224 length ws+0
void f274_emit_86(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3896 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3896;
	i8 v3897 = (i8)(intptr_t)c02_s016f;
	*(i8*)(intptr_t)(ws+4232) = v3897;
	i8 v3898 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3898)();

}
const i1 c02_s0170[] = { 0x2f,0 };
	void f174_Op2VV(void);

// emit_87 workspace at ws+4224 length ws+0
void f275_emit_87(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3899 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3899;
	i8 v3900 = (i8)(intptr_t)c02_s0170;
	*(i8*)(intptr_t)(ws+4232) = v3900;
	i8 v3901 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3901)();

}
const i1 c02_s0171[] = { 0x2f,0 };
	void f174_Op2VV(void);

// emit_88 workspace at ws+4224 length ws+0
void f276_emit_88(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3902 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3902;
	i8 v3903 = (i8)(intptr_t)c02_s0171;
	*(i8*)(intptr_t)(ws+4232) = v3903;
	i8 v3904 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3904)();

}
const i1 c02_s0172[] = { 0x2f,0 };
	void f174_Op2VV(void);

// emit_89 workspace at ws+4224 length ws+0
void f277_emit_89(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3905 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3905;
	i8 v3906 = (i8)(intptr_t)c02_s0172;
	*(i8*)(intptr_t)(ws+4232) = v3906;
	i8 v3907 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3907)();

}
const i1 c02_s0173[] = { 0x25,0 };
	void f174_Op2VV(void);

// emit_90 workspace at ws+4224 length ws+0
void f278_emit_90(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3908 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3908;
	i8 v3909 = (i8)(intptr_t)c02_s0173;
	*(i8*)(intptr_t)(ws+4232) = v3909;
	i8 v3910 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3910)();

}
const i1 c02_s0174[] = { 0x25,0 };
	void f174_Op2VV(void);

// emit_91 workspace at ws+4224 length ws+0
void f279_emit_91(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3911 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3911;
	i8 v3912 = (i8)(intptr_t)c02_s0174;
	*(i8*)(intptr_t)(ws+4232) = v3912;
	i8 v3913 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3913)();

}
const i1 c02_s0175[] = { 0x25,0 };
	void f174_Op2VV(void);

// emit_92 workspace at ws+4224 length ws+0
void f280_emit_92(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3914 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3914;
	i8 v3915 = (i8)(intptr_t)c02_s0175;
	*(i8*)(intptr_t)(ws+4232) = v3915;
	i8 v3916 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3916)();

}
const i1 c02_s0176[] = { 0x25,0 };
	void f174_Op2VV(void);

// emit_93 workspace at ws+4224 length ws+0
void f281_emit_93(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3917 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3917;
	i8 v3918 = (i8)(intptr_t)c02_s0176;
	*(i8*)(intptr_t)(ws+4232) = v3918;
	i8 v3919 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3919)();

}
const i1 c02_s0177[] = { 0x2f,0 };
	void f176_Op2VVSigned(void);

// emit_94 workspace at ws+4224 length ws+0
void f282_emit_94(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3920 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3920;
	i8 v3921 = (i8)(intptr_t)c02_s0177;
	*(i8*)(intptr_t)(ws+4232) = v3921;
	i8 v3922 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3922)();

}
const i1 c02_s0178[] = { 0x2f,0 };
	void f176_Op2VVSigned(void);

// emit_95 workspace at ws+4224 length ws+0
void f283_emit_95(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3923 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3923;
	i8 v3924 = (i8)(intptr_t)c02_s0178;
	*(i8*)(intptr_t)(ws+4232) = v3924;
	i8 v3925 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3925)();

}
const i1 c02_s0179[] = { 0x2f,0 };
	void f176_Op2VVSigned(void);

// emit_96 workspace at ws+4224 length ws+0
void f284_emit_96(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3926 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3926;
	i8 v3927 = (i8)(intptr_t)c02_s0179;
	*(i8*)(intptr_t)(ws+4232) = v3927;
	i8 v3928 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3928)();

}
const i1 c02_s017a[] = { 0x2f,0 };
	void f176_Op2VVSigned(void);

// emit_97 workspace at ws+4224 length ws+0
void f285_emit_97(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3929 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3929;
	i8 v3930 = (i8)(intptr_t)c02_s017a;
	*(i8*)(intptr_t)(ws+4232) = v3930;
	i8 v3931 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3931)();

}
const i1 c02_s017b[] = { 0x25,0 };
	void f176_Op2VVSigned(void);

// emit_98 workspace at ws+4224 length ws+0
void f286_emit_98(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3932 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3932;
	i8 v3933 = (i8)(intptr_t)c02_s017b;
	*(i8*)(intptr_t)(ws+4232) = v3933;
	i8 v3934 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3934)();

}
const i1 c02_s017c[] = { 0x25,0 };
	void f176_Op2VVSigned(void);

// emit_99 workspace at ws+4224 length ws+0
void f287_emit_99(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3935 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3935;
	i8 v3936 = (i8)(intptr_t)c02_s017c;
	*(i8*)(intptr_t)(ws+4232) = v3936;
	i8 v3937 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3937)();

}
const i1 c02_s017d[] = { 0x25,0 };
	void f176_Op2VVSigned(void);

// emit_100 workspace at ws+4224 length ws+0
void f288_emit_100(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3938 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3938;
	i8 v3939 = (i8)(intptr_t)c02_s017d;
	*(i8*)(intptr_t)(ws+4232) = v3939;
	i8 v3940 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3940)();

}
const i1 c02_s017e[] = { 0x25,0 };
	void f176_Op2VVSigned(void);

// emit_101 workspace at ws+4224 length ws+0
void f289_emit_101(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3941 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3941;
	i8 v3942 = (i8)(intptr_t)c02_s017e;
	*(i8*)(intptr_t)(ws+4232) = v3942;
	i8 v3943 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(void))(intptr_t)v3943)();

}
const i1 c02_s017f[] = { 0x26,0 };
	void f174_Op2VV(void);

// emit_102 workspace at ws+4224 length ws+0
void f290_emit_102(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3944 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3944;
	i8 v3945 = (i8)(intptr_t)c02_s017f;
	*(i8*)(intptr_t)(ws+4232) = v3945;
	i8 v3946 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3946)();

}
const i1 c02_s0180[] = { 0x26,0 };
	void f174_Op2VV(void);

// emit_103 workspace at ws+4224 length ws+0
void f291_emit_103(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3947 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3947;
	i8 v3948 = (i8)(intptr_t)c02_s0180;
	*(i8*)(intptr_t)(ws+4232) = v3948;
	i8 v3949 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3949)();

}
const i1 c02_s0181[] = { 0x26,0 };
	void f174_Op2VV(void);

// emit_104 workspace at ws+4224 length ws+0
void f292_emit_104(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3950 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3950;
	i8 v3951 = (i8)(intptr_t)c02_s0181;
	*(i8*)(intptr_t)(ws+4232) = v3951;
	i8 v3952 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3952)();

}
const i1 c02_s0182[] = { 0x26,0 };
	void f174_Op2VV(void);

// emit_105 workspace at ws+4224 length ws+0
void f293_emit_105(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3953 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3953;
	i8 v3954 = (i8)(intptr_t)c02_s0182;
	*(i8*)(intptr_t)(ws+4232) = v3954;
	i8 v3955 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3955)();

}
const i1 c02_s0183[] = { 0x7c,0 };
	void f174_Op2VV(void);

// emit_106 workspace at ws+4224 length ws+0
void f294_emit_106(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3956 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3956;
	i8 v3957 = (i8)(intptr_t)c02_s0183;
	*(i8*)(intptr_t)(ws+4232) = v3957;
	i8 v3958 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3958)();

}
const i1 c02_s0184[] = { 0x7c,0 };
	void f174_Op2VV(void);

// emit_107 workspace at ws+4224 length ws+0
void f295_emit_107(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3959 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3959;
	i8 v3960 = (i8)(intptr_t)c02_s0184;
	*(i8*)(intptr_t)(ws+4232) = v3960;
	i8 v3961 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3961)();

}
const i1 c02_s0185[] = { 0x7c,0 };
	void f174_Op2VV(void);

// emit_108 workspace at ws+4224 length ws+0
void f296_emit_108(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3962 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3962;
	i8 v3963 = (i8)(intptr_t)c02_s0185;
	*(i8*)(intptr_t)(ws+4232) = v3963;
	i8 v3964 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3964)();

}
const i1 c02_s0186[] = { 0x7c,0 };
	void f174_Op2VV(void);

// emit_109 workspace at ws+4224 length ws+0
void f297_emit_109(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3965 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3965;
	i8 v3966 = (i8)(intptr_t)c02_s0186;
	*(i8*)(intptr_t)(ws+4232) = v3966;
	i8 v3967 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3967)();

}
const i1 c02_s0187[] = { 0x5e,0 };
	void f174_Op2VV(void);

// emit_110 workspace at ws+4224 length ws+0
void f298_emit_110(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3968 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3968;
	i8 v3969 = (i8)(intptr_t)c02_s0187;
	*(i8*)(intptr_t)(ws+4232) = v3969;
	i8 v3970 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3970)();

}
const i1 c02_s0188[] = { 0x5e,0 };
	void f174_Op2VV(void);

// emit_111 workspace at ws+4224 length ws+0
void f299_emit_111(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3971 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3971;
	i8 v3972 = (i8)(intptr_t)c02_s0188;
	*(i8*)(intptr_t)(ws+4232) = v3972;
	i8 v3973 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3973)();

}
const i1 c02_s0189[] = { 0x5e,0 };
	void f174_Op2VV(void);

// emit_112 workspace at ws+4224 length ws+0
void f300_emit_112(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3974 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3974;
	i8 v3975 = (i8)(intptr_t)c02_s0189;
	*(i8*)(intptr_t)(ws+4232) = v3975;
	i8 v3976 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3976)();

}
const i1 c02_s018a[] = { 0x5e,0 };
	void f174_Op2VV(void);

// emit_113 workspace at ws+4224 length ws+0
void f301_emit_113(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3977 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3977;
	i8 v3978 = (i8)(intptr_t)c02_s018a;
	*(i8*)(intptr_t)(ws+4232) = v3978;
	i8 v3979 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(void))(intptr_t)v3979)();

}
const i1 c02_s018b[] = { 0x2d,0 };
	void f178_Op1V(void);

// emit_114 workspace at ws+4224 length ws+0
void f302_emit_114(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3980 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3980;
	i8 v3981 = (i8)(intptr_t)c02_s018b;
	*(i8*)(intptr_t)(ws+4232) = v3981;
	i8 v3982 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3982)();

}
const i1 c02_s018c[] = { 0x2d,0 };
	void f178_Op1V(void);

// emit_115 workspace at ws+4224 length ws+0
void f303_emit_115(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3983 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3983;
	i8 v3984 = (i8)(intptr_t)c02_s018c;
	*(i8*)(intptr_t)(ws+4232) = v3984;
	i8 v3985 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3985)();

}
const i1 c02_s018d[] = { 0x2d,0 };
	void f178_Op1V(void);

// emit_116 workspace at ws+4224 length ws+0
void f304_emit_116(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3986 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3986;
	i8 v3987 = (i8)(intptr_t)c02_s018d;
	*(i8*)(intptr_t)(ws+4232) = v3987;
	i8 v3988 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3988)();

}
const i1 c02_s018e[] = { 0x2d,0 };
	void f178_Op1V(void);

// emit_117 workspace at ws+4224 length ws+0
void f305_emit_117(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3989 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v3989;
	i8 v3990 = (i8)(intptr_t)c02_s018e;
	*(i8*)(intptr_t)(ws+4232) = v3990;
	i8 v3991 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3991)();

}
const i1 c02_s018f[] = { 0x7e,0 };
	void f178_Op1V(void);

// emit_118 workspace at ws+4224 length ws+0
void f306_emit_118(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3992 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v3992;
	i8 v3993 = (i8)(intptr_t)c02_s018f;
	*(i8*)(intptr_t)(ws+4232) = v3993;
	i8 v3994 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3994)();

}
const i1 c02_s0190[] = { 0x7e,0 };
	void f178_Op1V(void);

// emit_119 workspace at ws+4224 length ws+0
void f307_emit_119(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3995 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v3995;
	i8 v3996 = (i8)(intptr_t)c02_s0190;
	*(i8*)(intptr_t)(ws+4232) = v3996;
	i8 v3997 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v3997)();

}
const i1 c02_s0191[] = { 0x7e,0 };
	void f178_Op1V(void);

// emit_120 workspace at ws+4224 length ws+0
void f308_emit_120(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v3998 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v3998;
	i8 v3999 = (i8)(intptr_t)c02_s0191;
	*(i8*)(intptr_t)(ws+4232) = v3999;
	i8 v4000 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v4000)();

}
const i1 c02_s0192[] = { 0x7e,0 };
	void f178_Op1V(void);

// emit_121 workspace at ws+4224 length ws+0
void f309_emit_121(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4001 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4001;
	i8 v4002 = (i8)(intptr_t)c02_s0192;
	*(i8*)(intptr_t)(ws+4232) = v4002;
	i8 v4003 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(void))(intptr_t)v4003)();

}
const i1 c02_s0193[] = { 0x69,0x31,0 };
const i1 c02_s0194[] = { 0x3c,0x3c,0 };
	void f179_Shift(void);

// emit_122 workspace at ws+4224 length ws+0
void f310_emit_122(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4004 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4004;
	i8 v4005 = (i8)(intptr_t)c02_s0193;
	*(i8*)(intptr_t)(ws+4232) = v4005;
	i8 v4006 = (i8)(intptr_t)c02_s0194;
	*(i8*)(intptr_t)(ws+4240) = v4006;
	i8 v4007 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4007)();

}
const i1 c02_s0195[] = { 0x69,0x32,0 };
const i1 c02_s0196[] = { 0x3c,0x3c,0 };
	void f179_Shift(void);

// emit_123 workspace at ws+4224 length ws+0
void f311_emit_123(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4008 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4008;
	i8 v4009 = (i8)(intptr_t)c02_s0195;
	*(i8*)(intptr_t)(ws+4232) = v4009;
	i8 v4010 = (i8)(intptr_t)c02_s0196;
	*(i8*)(intptr_t)(ws+4240) = v4010;
	i8 v4011 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4011)();

}
const i1 c02_s0197[] = { 0x69,0x34,0 };
const i1 c02_s0198[] = { 0x3c,0x3c,0 };
	void f179_Shift(void);

// emit_124 workspace at ws+4224 length ws+0
void f312_emit_124(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4012 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4012;
	i8 v4013 = (i8)(intptr_t)c02_s0197;
	*(i8*)(intptr_t)(ws+4232) = v4013;
	i8 v4014 = (i8)(intptr_t)c02_s0198;
	*(i8*)(intptr_t)(ws+4240) = v4014;
	i8 v4015 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4015)();

}
const i1 c02_s0199[] = { 0x69,0x38,0 };
const i1 c02_s019a[] = { 0x3c,0x3c,0 };
	void f179_Shift(void);

// emit_125 workspace at ws+4224 length ws+0
void f313_emit_125(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4016 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4016;
	i8 v4017 = (i8)(intptr_t)c02_s0199;
	*(i8*)(intptr_t)(ws+4232) = v4017;
	i8 v4018 = (i8)(intptr_t)c02_s019a;
	*(i8*)(intptr_t)(ws+4240) = v4018;
	i8 v4019 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4019)();

}
const i1 c02_s019b[] = { 0x69,0x31,0 };
const i1 c02_s019c[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_126 workspace at ws+4224 length ws+0
void f314_emit_126(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4020 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4020;
	i8 v4021 = (i8)(intptr_t)c02_s019b;
	*(i8*)(intptr_t)(ws+4232) = v4021;
	i8 v4022 = (i8)(intptr_t)c02_s019c;
	*(i8*)(intptr_t)(ws+4240) = v4022;
	i8 v4023 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4023)();

}
const i1 c02_s019d[] = { 0x69,0x32,0 };
const i1 c02_s019e[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_127 workspace at ws+4224 length ws+0
void f315_emit_127(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4024 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4024;
	i8 v4025 = (i8)(intptr_t)c02_s019d;
	*(i8*)(intptr_t)(ws+4232) = v4025;
	i8 v4026 = (i8)(intptr_t)c02_s019e;
	*(i8*)(intptr_t)(ws+4240) = v4026;
	i8 v4027 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4027)();

}
const i1 c02_s019f[] = { 0x69,0x34,0 };
const i1 c02_s01a0[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_128 workspace at ws+4224 length ws+0
void f316_emit_128(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4028 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4028;
	i8 v4029 = (i8)(intptr_t)c02_s019f;
	*(i8*)(intptr_t)(ws+4232) = v4029;
	i8 v4030 = (i8)(intptr_t)c02_s01a0;
	*(i8*)(intptr_t)(ws+4240) = v4030;
	i8 v4031 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4031)();

}
const i1 c02_s01a1[] = { 0x69,0x38,0 };
const i1 c02_s01a2[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_129 workspace at ws+4224 length ws+0
void f317_emit_129(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4032 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4032;
	i8 v4033 = (i8)(intptr_t)c02_s01a1;
	*(i8*)(intptr_t)(ws+4232) = v4033;
	i8 v4034 = (i8)(intptr_t)c02_s01a2;
	*(i8*)(intptr_t)(ws+4240) = v4034;
	i8 v4035 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4035)();

}
const i1 c02_s01a3[] = { 0x73,0x31,0 };
const i1 c02_s01a4[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_130 workspace at ws+4224 length ws+0
void f318_emit_130(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4036 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4036;
	i8 v4037 = (i8)(intptr_t)c02_s01a3;
	*(i8*)(intptr_t)(ws+4232) = v4037;
	i8 v4038 = (i8)(intptr_t)c02_s01a4;
	*(i8*)(intptr_t)(ws+4240) = v4038;
	i8 v4039 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4039)();

}
const i1 c02_s01a5[] = { 0x73,0x32,0 };
const i1 c02_s01a6[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_131 workspace at ws+4224 length ws+0
void f319_emit_131(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4040 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4040;
	i8 v4041 = (i8)(intptr_t)c02_s01a5;
	*(i8*)(intptr_t)(ws+4232) = v4041;
	i8 v4042 = (i8)(intptr_t)c02_s01a6;
	*(i8*)(intptr_t)(ws+4240) = v4042;
	i8 v4043 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4043)();

}
const i1 c02_s01a7[] = { 0x73,0x34,0 };
const i1 c02_s01a8[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_132 workspace at ws+4224 length ws+0
void f320_emit_132(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4044 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4044;
	i8 v4045 = (i8)(intptr_t)c02_s01a7;
	*(i8*)(intptr_t)(ws+4232) = v4045;
	i8 v4046 = (i8)(intptr_t)c02_s01a8;
	*(i8*)(intptr_t)(ws+4240) = v4046;
	i8 v4047 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4047)();

}
const i1 c02_s01a9[] = { 0x73,0x38,0 };
const i1 c02_s01aa[] = { 0x3e,0x3e,0 };
	void f179_Shift(void);

// emit_133 workspace at ws+4224 length ws+0
void f321_emit_133(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4048 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4048;
	i8 v4049 = (i8)(intptr_t)c02_s01a9;
	*(i8*)(intptr_t)(ws+4232) = v4049;
	i8 v4050 = (i8)(intptr_t)c02_s01aa;
	*(i8*)(intptr_t)(ws+4240) = v4050;
	i8 v4051 = (i8)(intptr_t)(f179_Shift);

	((void(*)(void))(intptr_t)v4051)();

}
const i1 c02_s01ab[] = { 0x3d,0x3d,0 };
	void f180_Branch(void);

// emit_134 workspace at ws+4224 length ws+0
void f322_emit_134(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4052 = (i8)(intptr_t)(ws+4128);
	i8 v4053 = *(i8*)(intptr_t)v4052;
	i8 v4054 = v4053+(+16);
	i8 v4055 = *(i8*)(intptr_t)v4054;
	*(i8*)(intptr_t)(ws+4224) = v4055;
	i8 v4056 = (i8)(intptr_t)c02_s01ab;
	*(i8*)(intptr_t)(ws+4232) = v4056;
	i8 v4057 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4057)();

}
const i1 c02_s01ac[] = { 0x3d,0x3d,0 };
	void f180_Branch(void);

// emit_135 workspace at ws+4224 length ws+0
void f323_emit_135(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4058 = (i8)(intptr_t)(ws+4128);
	i8 v4059 = *(i8*)(intptr_t)v4058;
	i8 v4060 = v4059+(+16);
	i8 v4061 = *(i8*)(intptr_t)v4060;
	*(i8*)(intptr_t)(ws+4224) = v4061;
	i8 v4062 = (i8)(intptr_t)c02_s01ac;
	*(i8*)(intptr_t)(ws+4232) = v4062;
	i8 v4063 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4063)();

}
const i1 c02_s01ad[] = { 0x3d,0x3d,0 };
	void f180_Branch(void);

// emit_136 workspace at ws+4224 length ws+0
void f324_emit_136(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4064 = (i8)(intptr_t)(ws+4128);
	i8 v4065 = *(i8*)(intptr_t)v4064;
	i8 v4066 = v4065+(+16);
	i8 v4067 = *(i8*)(intptr_t)v4066;
	*(i8*)(intptr_t)(ws+4224) = v4067;
	i8 v4068 = (i8)(intptr_t)c02_s01ad;
	*(i8*)(intptr_t)(ws+4232) = v4068;
	i8 v4069 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4069)();

}
const i1 c02_s01ae[] = { 0x3d,0x3d,0 };
	void f180_Branch(void);

// emit_137 workspace at ws+4224 length ws+0
void f325_emit_137(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4070 = (i8)(intptr_t)(ws+4128);
	i8 v4071 = *(i8*)(intptr_t)v4070;
	i8 v4072 = v4071+(+16);
	i8 v4073 = *(i8*)(intptr_t)v4072;
	*(i8*)(intptr_t)(ws+4224) = v4073;
	i8 v4074 = (i8)(intptr_t)c02_s01ae;
	*(i8*)(intptr_t)(ws+4232) = v4074;
	i8 v4075 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4075)();

}
const i1 c02_s01af[] = { 0x3c,0 };
	void f180_Branch(void);

// emit_138 workspace at ws+4224 length ws+0
void f326_emit_138(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4076 = (i8)(intptr_t)(ws+4128);
	i8 v4077 = *(i8*)(intptr_t)v4076;
	i8 v4078 = v4077+(+16);
	i8 v4079 = *(i8*)(intptr_t)v4078;
	*(i8*)(intptr_t)(ws+4224) = v4079;
	i8 v4080 = (i8)(intptr_t)c02_s01af;
	*(i8*)(intptr_t)(ws+4232) = v4080;
	i8 v4081 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4081)();

}
const i1 c02_s01b0[] = { 0x3c,0 };
	void f180_Branch(void);

// emit_139 workspace at ws+4224 length ws+0
void f327_emit_139(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4082 = (i8)(intptr_t)(ws+4128);
	i8 v4083 = *(i8*)(intptr_t)v4082;
	i8 v4084 = v4083+(+16);
	i8 v4085 = *(i8*)(intptr_t)v4084;
	*(i8*)(intptr_t)(ws+4224) = v4085;
	i8 v4086 = (i8)(intptr_t)c02_s01b0;
	*(i8*)(intptr_t)(ws+4232) = v4086;
	i8 v4087 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4087)();

}
const i1 c02_s01b1[] = { 0x3c,0 };
	void f180_Branch(void);

// emit_140 workspace at ws+4224 length ws+0
void f328_emit_140(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4088 = (i8)(intptr_t)(ws+4128);
	i8 v4089 = *(i8*)(intptr_t)v4088;
	i8 v4090 = v4089+(+16);
	i8 v4091 = *(i8*)(intptr_t)v4090;
	*(i8*)(intptr_t)(ws+4224) = v4091;
	i8 v4092 = (i8)(intptr_t)c02_s01b1;
	*(i8*)(intptr_t)(ws+4232) = v4092;
	i8 v4093 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4093)();

}
const i1 c02_s01b2[] = { 0x3c,0 };
	void f180_Branch(void);

// emit_141 workspace at ws+4224 length ws+0
void f329_emit_141(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4094 = (i8)(intptr_t)(ws+4128);
	i8 v4095 = *(i8*)(intptr_t)v4094;
	i8 v4096 = v4095+(+16);
	i8 v4097 = *(i8*)(intptr_t)v4096;
	*(i8*)(intptr_t)(ws+4224) = v4097;
	i8 v4098 = (i8)(intptr_t)c02_s01b2;
	*(i8*)(intptr_t)(ws+4232) = v4098;
	i8 v4099 = (i8)(intptr_t)(f180_Branch);

	((void(*)(void))(intptr_t)v4099)();

}
const i1 c02_s01b3[] = { 0x3c,0 };
	void f181_BranchSigned(void);

// emit_142 workspace at ws+4224 length ws+0
void f330_emit_142(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4100 = (i8)(intptr_t)(ws+4128);
	i8 v4101 = *(i8*)(intptr_t)v4100;
	i8 v4102 = v4101+(+16);
	i8 v4103 = *(i8*)(intptr_t)v4102;
	*(i8*)(intptr_t)(ws+4224) = v4103;
	i1 v4104 = (i1)+1;
	*(i1*)(intptr_t)(ws+4232) = v4104;
	i8 v4105 = (i8)(intptr_t)c02_s01b3;
	*(i8*)(intptr_t)(ws+4240) = v4105;
	i8 v4106 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(void))(intptr_t)v4106)();

}
const i1 c02_s01b4[] = { 0x3c,0 };
	void f181_BranchSigned(void);

// emit_143 workspace at ws+4224 length ws+0
void f331_emit_143(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4107 = (i8)(intptr_t)(ws+4128);
	i8 v4108 = *(i8*)(intptr_t)v4107;
	i8 v4109 = v4108+(+16);
	i8 v4110 = *(i8*)(intptr_t)v4109;
	*(i8*)(intptr_t)(ws+4224) = v4110;
	i1 v4111 = (i1)+2;
	*(i1*)(intptr_t)(ws+4232) = v4111;
	i8 v4112 = (i8)(intptr_t)c02_s01b4;
	*(i8*)(intptr_t)(ws+4240) = v4112;
	i8 v4113 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(void))(intptr_t)v4113)();

}
const i1 c02_s01b5[] = { 0x3c,0 };
	void f181_BranchSigned(void);

// emit_144 workspace at ws+4224 length ws+0
void f332_emit_144(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4114 = (i8)(intptr_t)(ws+4128);
	i8 v4115 = *(i8*)(intptr_t)v4114;
	i8 v4116 = v4115+(+16);
	i8 v4117 = *(i8*)(intptr_t)v4116;
	*(i8*)(intptr_t)(ws+4224) = v4117;
	i1 v4118 = (i1)+4;
	*(i1*)(intptr_t)(ws+4232) = v4118;
	i8 v4119 = (i8)(intptr_t)c02_s01b5;
	*(i8*)(intptr_t)(ws+4240) = v4119;
	i8 v4120 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(void))(intptr_t)v4120)();

}
const i1 c02_s01b6[] = { 0x3c,0 };
	void f181_BranchSigned(void);

// emit_145 workspace at ws+4224 length ws+0
void f333_emit_145(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4121 = (i8)(intptr_t)(ws+4128);
	i8 v4122 = *(i8*)(intptr_t)v4121;
	i8 v4123 = v4122+(+16);
	i8 v4124 = *(i8*)(intptr_t)v4123;
	*(i8*)(intptr_t)(ws+4224) = v4124;
	i1 v4125 = (i1)+8;
	*(i1*)(intptr_t)(ws+4232) = v4125;
	i8 v4126 = (i8)(intptr_t)c02_s01b6;
	*(i8*)(intptr_t)(ws+4240) = v4126;
	i8 v4127 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(void))(intptr_t)v4127)();

}
	void f183_Whencase(void);

// emit_150 workspace at ws+4224 length ws+0
void f334_emit_150(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4128 = (i8)(intptr_t)(ws+4136);
	i8 v4129 = *(i8*)(intptr_t)v4128;
	i4 v4130 = *(i4*)(intptr_t)v4129;
	i4 v4131 = v4130&(+255);
	*(i4*)(intptr_t)(ws+4224) = v4131;
	i8 v4132 = (i8)(intptr_t)(ws+4136);
	i8 v4133 = *(i8*)(intptr_t)v4132;
	i8 v4134 = v4133+(+4);
	i2 v4135 = *(i2*)(intptr_t)v4134;
	*(i2*)(intptr_t)(ws+4228) = v4135;
	i8 v4136 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(void))(intptr_t)v4136)();

}
	void f183_Whencase(void);

// emit_151 workspace at ws+4224 length ws+0
void f335_emit_151(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4137 = (i8)(intptr_t)(ws+4136);
	i8 v4138 = *(i8*)(intptr_t)v4137;
	i4 v4139 = *(i4*)(intptr_t)v4138;
	i4 v4140 = v4139&(+65535);
	*(i4*)(intptr_t)(ws+4224) = v4140;
	i8 v4141 = (i8)(intptr_t)(ws+4136);
	i8 v4142 = *(i8*)(intptr_t)v4141;
	i8 v4143 = v4142+(+4);
	i2 v4144 = *(i2*)(intptr_t)v4143;
	*(i2*)(intptr_t)(ws+4228) = v4144;
	i8 v4145 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(void))(intptr_t)v4145)();

}
	void f183_Whencase(void);

// emit_152 workspace at ws+4224 length ws+0
void f336_emit_152(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4146 = (i8)(intptr_t)(ws+4136);
	i8 v4147 = *(i8*)(intptr_t)v4146;
	i4 v4148 = *(i4*)(intptr_t)v4147;
	i4 v4149 = v4148&(-1);
	*(i4*)(intptr_t)(ws+4224) = v4149;
	i8 v4150 = (i8)(intptr_t)(ws+4136);
	i8 v4151 = *(i8*)(intptr_t)v4150;
	i8 v4152 = v4151+(+4);
	i2 v4153 = *(i2*)(intptr_t)v4152;
	*(i2*)(intptr_t)(ws+4228) = v4153;
	i8 v4154 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(void))(intptr_t)v4154)();

}
	void f183_Whencase(void);

// emit_153 workspace at ws+4224 length ws+0
void f337_emit_153(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4155 = (i8)(intptr_t)(ws+4136);
	i8 v4156 = *(i8*)(intptr_t)v4155;
	i4 v4157 = *(i4*)(intptr_t)v4156;
	*(i4*)(intptr_t)(ws+4224) = v4157;
	i8 v4158 = (i8)(intptr_t)(ws+4136);
	i8 v4159 = *(i8*)(intptr_t)v4158;
	i8 v4160 = v4159+(+4);
	i2 v4161 = *(i2*)(intptr_t)v4160;
	*(i2*)(intptr_t)(ws+4228) = v4161;
	i8 v4162 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(void))(intptr_t)v4162)();

}

// emit_154 workspace at ws+4224 length ws+0
void f338_emit_154(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4163 = (i8)(intptr_t)(ws+3832);
	i1 v4164 = *(i1*)(intptr_t)v4163;
	i1 v4165 = v4164+(-1);
	i8 v4166 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4166 = v4165;

}

// emit_155 workspace at ws+4224 length ws+0
void f339_emit_155(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4167 = (i8)(intptr_t)(ws+3832);
	i1 v4168 = *(i1*)(intptr_t)v4167;
	i1 v4169 = v4168+(-1);
	i8 v4170 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4170 = v4169;

}

// emit_156 workspace at ws+4224 length ws+0
void f340_emit_156(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4171 = (i8)(intptr_t)(ws+3832);
	i1 v4172 = *(i1*)(intptr_t)v4171;
	i1 v4173 = v4172+(-1);
	i8 v4174 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4174 = v4173;

}

// emit_157 workspace at ws+4224 length ws+0
void f341_emit_157(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4175 = (i8)(intptr_t)(ws+3832);
	i1 v4176 = *(i1*)(intptr_t)v4175;
	i1 v4177 = v4176+(-1);
	i8 v4178 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4178 = v4177;

}
	void f184_Cast(void);

// emit_158 workspace at ws+4224 length ws+0
void f342_emit_158(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4179 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4179;
	i1 v4180 = (i1)+2;
	*(i1*)(intptr_t)(ws+4225) = v4180;
	i8 v4181 = (i8)(intptr_t)(ws+4136);
	i8 v4182 = *(i8*)(intptr_t)v4181;
	i1 v4183 = *(i1*)(intptr_t)v4182;
	*(i1*)(intptr_t)(ws+4226) = v4183;
	i8 v4184 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4184)();

}
	void f184_Cast(void);

// emit_159 workspace at ws+4224 length ws+0
void f343_emit_159(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4185 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4185;
	i1 v4186 = (i1)+4;
	*(i1*)(intptr_t)(ws+4225) = v4186;
	i8 v4187 = (i8)(intptr_t)(ws+4136);
	i8 v4188 = *(i8*)(intptr_t)v4187;
	i1 v4189 = *(i1*)(intptr_t)v4188;
	*(i1*)(intptr_t)(ws+4226) = v4189;
	i8 v4190 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4190)();

}
	void f184_Cast(void);

// emit_160 workspace at ws+4224 length ws+0
void f344_emit_160(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4191 = (i1)+1;
	*(i1*)(intptr_t)(ws+4224) = v4191;
	i1 v4192 = (i1)+8;
	*(i1*)(intptr_t)(ws+4225) = v4192;
	i8 v4193 = (i8)(intptr_t)(ws+4136);
	i8 v4194 = *(i8*)(intptr_t)v4193;
	i1 v4195 = *(i1*)(intptr_t)v4194;
	*(i1*)(intptr_t)(ws+4226) = v4195;
	i8 v4196 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4196)();

}
	void f184_Cast(void);

// emit_161 workspace at ws+4224 length ws+0
void f345_emit_161(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4197 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4197;
	i1 v4198 = (i1)+1;
	*(i1*)(intptr_t)(ws+4225) = v4198;
	i8 v4199 = (i8)(intptr_t)(ws+4136);
	i8 v4200 = *(i8*)(intptr_t)v4199;
	i1 v4201 = *(i1*)(intptr_t)v4200;
	*(i1*)(intptr_t)(ws+4226) = v4201;
	i8 v4202 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4202)();

}
	void f184_Cast(void);

// emit_162 workspace at ws+4224 length ws+0
void f346_emit_162(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4203 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4203;
	i1 v4204 = (i1)+4;
	*(i1*)(intptr_t)(ws+4225) = v4204;
	i8 v4205 = (i8)(intptr_t)(ws+4136);
	i8 v4206 = *(i8*)(intptr_t)v4205;
	i1 v4207 = *(i1*)(intptr_t)v4206;
	*(i1*)(intptr_t)(ws+4226) = v4207;
	i8 v4208 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4208)();

}
	void f184_Cast(void);

// emit_163 workspace at ws+4224 length ws+0
void f347_emit_163(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4209 = (i1)+2;
	*(i1*)(intptr_t)(ws+4224) = v4209;
	i1 v4210 = (i1)+8;
	*(i1*)(intptr_t)(ws+4225) = v4210;
	i8 v4211 = (i8)(intptr_t)(ws+4136);
	i8 v4212 = *(i8*)(intptr_t)v4211;
	i1 v4213 = *(i1*)(intptr_t)v4212;
	*(i1*)(intptr_t)(ws+4226) = v4213;
	i8 v4214 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4214)();

}
	void f184_Cast(void);

// emit_164 workspace at ws+4224 length ws+0
void f348_emit_164(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4215 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4215;
	i1 v4216 = (i1)+1;
	*(i1*)(intptr_t)(ws+4225) = v4216;
	i8 v4217 = (i8)(intptr_t)(ws+4136);
	i8 v4218 = *(i8*)(intptr_t)v4217;
	i1 v4219 = *(i1*)(intptr_t)v4218;
	*(i1*)(intptr_t)(ws+4226) = v4219;
	i8 v4220 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4220)();

}
	void f184_Cast(void);

// emit_165 workspace at ws+4224 length ws+0
void f349_emit_165(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4221 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4221;
	i1 v4222 = (i1)+2;
	*(i1*)(intptr_t)(ws+4225) = v4222;
	i8 v4223 = (i8)(intptr_t)(ws+4136);
	i8 v4224 = *(i8*)(intptr_t)v4223;
	i1 v4225 = *(i1*)(intptr_t)v4224;
	*(i1*)(intptr_t)(ws+4226) = v4225;
	i8 v4226 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4226)();

}
	void f184_Cast(void);

// emit_166 workspace at ws+4224 length ws+0
void f350_emit_166(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4227 = (i1)+4;
	*(i1*)(intptr_t)(ws+4224) = v4227;
	i1 v4228 = (i1)+8;
	*(i1*)(intptr_t)(ws+4225) = v4228;
	i8 v4229 = (i8)(intptr_t)(ws+4136);
	i8 v4230 = *(i8*)(intptr_t)v4229;
	i1 v4231 = *(i1*)(intptr_t)v4230;
	*(i1*)(intptr_t)(ws+4226) = v4231;
	i8 v4232 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4232)();

}
	void f184_Cast(void);

// emit_167 workspace at ws+4224 length ws+0
void f351_emit_167(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4233 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4233;
	i1 v4234 = (i1)+1;
	*(i1*)(intptr_t)(ws+4225) = v4234;
	i8 v4235 = (i8)(intptr_t)(ws+4136);
	i8 v4236 = *(i8*)(intptr_t)v4235;
	i1 v4237 = *(i1*)(intptr_t)v4236;
	*(i1*)(intptr_t)(ws+4226) = v4237;
	i8 v4238 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4238)();

}
	void f184_Cast(void);

// emit_168 workspace at ws+4224 length ws+0
void f352_emit_168(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4239 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4239;
	i1 v4240 = (i1)+2;
	*(i1*)(intptr_t)(ws+4225) = v4240;
	i8 v4241 = (i8)(intptr_t)(ws+4136);
	i8 v4242 = *(i8*)(intptr_t)v4241;
	i1 v4243 = *(i1*)(intptr_t)v4242;
	*(i1*)(intptr_t)(ws+4226) = v4243;
	i8 v4244 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4244)();

}
	void f184_Cast(void);

// emit_169 workspace at ws+4224 length ws+0
void f353_emit_169(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4245 = (i1)+8;
	*(i1*)(intptr_t)(ws+4224) = v4245;
	i1 v4246 = (i1)+4;
	*(i1*)(intptr_t)(ws+4225) = v4246;
	i8 v4247 = (i8)(intptr_t)(ws+4136);
	i8 v4248 = *(i8*)(intptr_t)v4247;
	i1 v4249 = *(i1*)(intptr_t)v4248;
	*(i1*)(intptr_t)(ws+4226) = v4249;
	i8 v4250 = (i8)(intptr_t)(f184_Cast);

	((void(*)(void))(intptr_t)v4250)();

}
	void f160_Push(void);
const i1 c02_s01b7[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(void);
	void f94_E_u16(void);
const i1 c02_s01b8[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f83_E_b8(void);
	void f185_E_string(void);
	void f101_E_h16(void);
const i1 c02_s01b9[] = { 0x3b,0x0a,0 };
	void f92_E(void);

// emit_170 workspace at ws+4224 length ws+6
void f354_emit_170(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4251 = (i8)(intptr_t)(f160_Push);

	((void(*)(void))(intptr_t)v4251)();

	i2 v4252 = *(i2*)(intptr_t)(ws+4264);
	i8 v4253 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v4253 = v4252;

	i8 v4254 = (i8)(intptr_t)(ws+4224);
	i2 v4255 = *(i2*)(intptr_t)v4254;
	i8 v4256 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v4256 = v4255;

	i8 v4257 = (i8)(intptr_t)c02_s01b7;
	*(i8*)(intptr_t)(ws+4320) = v4257;
	i8 v4258 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4258)();

	i8 v4259 = (i8)(intptr_t)(ws+4226);
	i2 v4260 = *(i2*)(intptr_t)v4259;
	*(i2*)(intptr_t)(ws+4272) = v4260;
	i8 v4261 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(void))(intptr_t)v4261)();

	i8 v4262 = (i8)(intptr_t)c02_s01b8;
	*(i8*)(intptr_t)(ws+4320) = v4262;
	i8 v4263 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4263)();

	i1 v4264 = (i1)+3;
	*(i1*)(intptr_t)(ws+4336) = v4264;
	i8 v4265 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4265)();

	i1 v4266 = (i1)+115;
	*(i1*)(intptr_t)(ws+4336) = v4266;
	i8 v4267 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4267)();

	i8 v4268 = (i8)(intptr_t)(ws+4136);
	i8 v4269 = *(i8*)(intptr_t)v4268;
	i8 v4270 = *(i8*)(intptr_t)v4269;
	*(i8*)(intptr_t)(ws+4232) = v4270;
	i8 v4271 = (i8)(intptr_t)(f185_E_string);

	((void(*)(void))(intptr_t)v4271)();

	i2 v4272 = *(i2*)(intptr_t)(ws+4240);
	i8 v4273 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v4273 = v4272;

	i8 v4274 = (i8)(intptr_t)(ws+4228);
	i2 v4275 = *(i2*)(intptr_t)v4274;
	*(i2*)(intptr_t)(ws+4272) = v4275;
	i8 v4276 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(void))(intptr_t)v4276)();

	i8 v4277 = (i8)(intptr_t)c02_s01b9;
	*(i8*)(intptr_t)(ws+4320) = v4277;
	i8 v4278 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4278)();

}
	void f106_EmitterOpenStream(void);
const i1 c02_s01ba[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
	void f92_E(void);
	void f105_E_wsref(void);
const i1 c02_s01bb[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x0a,0 };
	void f92_E(void);

// emit_171 workspace at ws+4224 length ws+0
void f355_emit_171(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4279 = (i8)(intptr_t)(ws+40);
	i8 v4280 = *(i8*)(intptr_t)v4279;
	*(i8*)(intptr_t)(ws+4248) = v4280;
	i8 v4281 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(void))(intptr_t)v4281)();

	i8 v4282 = (i8)(intptr_t)c02_s01ba;
	*(i8*)(intptr_t)(ws+4320) = v4282;
	i8 v4283 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4283)();

	i8 v4284 = (i8)(intptr_t)(ws+4136);
	i8 v4285 = *(i8*)(intptr_t)v4284;
	i8 v4286 = *(i8*)(intptr_t)v4285;
	i8 v4287 = v4286+(+8);
	i2 v4288 = *(i2*)(intptr_t)v4287;
	*(i2*)(intptr_t)(ws+4264) = v4288;
	i8 v4289 = (i8)(intptr_t)(ws+4136);
	i8 v4290 = *(i8*)(intptr_t)v4289;
	i8 v4291 = v4290+(+10);
	i1 v4292 = *(i1*)(intptr_t)v4291;
	*(i1*)(intptr_t)(ws+4266) = v4292;
	i8 v4293 = (i8)(intptr_t)(ws+4136);
	i8 v4294 = *(i8*)(intptr_t)v4293;
	i8 v4295 = v4294+(+12);
	i2 v4296 = *(i2*)(intptr_t)v4295;
	*(i2*)(intptr_t)(ws+4268) = v4296;
	i8 v4297 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(void))(intptr_t)v4297)();

	i8 v4298 = (i8)(intptr_t)c02_s01bb;
	*(i8*)(intptr_t)(ws+4320) = v4298;
	i8 v4299 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4299)();

	i1 v4300 = (i1)+0;
	i8 v4301 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v4301 = v4300;

}
	void f187_E_bytes(void);

// emit_172 workspace at ws+4224 length ws+0
void f356_emit_172(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4302 = (i8)(intptr_t)(ws+4136);
	i8 v4303 = *(i8*)(intptr_t)v4302;
	*(i8*)(intptr_t)(ws+4224) = v4303;
	i1 v4304 = (i1)+1;
	*(i1*)(intptr_t)(ws+4232) = v4304;
	i8 v4305 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(void))(intptr_t)v4305)();

}
	void f187_E_bytes(void);

// emit_173 workspace at ws+4224 length ws+0
void f357_emit_173(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4306 = (i8)(intptr_t)(ws+4136);
	i8 v4307 = *(i8*)(intptr_t)v4306;
	*(i8*)(intptr_t)(ws+4224) = v4307;
	i1 v4308 = (i1)+2;
	*(i1*)(intptr_t)(ws+4232) = v4308;
	i8 v4309 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(void))(intptr_t)v4309)();

}
	void f187_E_bytes(void);

// emit_174 workspace at ws+4224 length ws+0
void f358_emit_174(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4310 = (i8)(intptr_t)(ws+4136);
	i8 v4311 = *(i8*)(intptr_t)v4310;
	*(i8*)(intptr_t)(ws+4224) = v4311;
	i1 v4312 = (i1)+4;
	*(i1*)(intptr_t)(ws+4232) = v4312;
	i8 v4313 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(void))(intptr_t)v4313)();

}
	void f187_E_bytes(void);

// emit_175 workspace at ws+4224 length ws+0
void f359_emit_175(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4314 = (i8)(intptr_t)(ws+4136);
	i8 v4315 = *(i8*)(intptr_t)v4314;
	*(i8*)(intptr_t)(ws+4224) = v4315;
	i1 v4316 = (i1)+8;
	*(i1*)(intptr_t)(ws+4232) = v4316;
	i8 v4317 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(void))(intptr_t)v4317)();

}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01bc[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(void);
	void f155_E_subref_sig(void);
const i1 c02_s01bd[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(void);

// emit_176 workspace at ws+4224 length ws+0
void f360_emit_176(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4318 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4318)();

	i8 v4319 = (i8)(intptr_t)c02_s01bc;
	*(i8*)(intptr_t)(ws+4320) = v4319;
	i8 v4320 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4320)();

	i8 v4321 = (i8)(intptr_t)(ws+4136);
	i8 v4322 = *(i8*)(intptr_t)v4321;
	i8 v4323 = *(i8*)(intptr_t)v4322;
	*(i8*)(intptr_t)(ws+4232) = v4323;
	i8 v4324 = (i8)(intptr_t)(f155_E_subref_sig);

	((void(*)(void))(intptr_t)v4324)();

	i8 v4325 = (i8)(intptr_t)c02_s01bd;
	*(i8*)(intptr_t)(ws+4320) = v4325;
	i8 v4326 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4326)();

}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01be[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(void);
	void f156_E_symref(void);
const i1 c02_s01bf[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(void);

// emit_177 workspace at ws+4224 length ws+0
void f361_emit_177(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4327 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4327)();

	i8 v4328 = (i8)(intptr_t)c02_s01be;
	*(i8*)(intptr_t)(ws+4320) = v4328;
	i8 v4329 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4329)();

	i8 v4330 = (i8)(intptr_t)(ws+4136);
	i8 v4331 = *(i8*)(intptr_t)v4330;
	*(i8*)(intptr_t)(ws+4248) = v4331;
	i8 v4332 = (i8)(intptr_t)(ws+4136);
	i8 v4333 = *(i8*)(intptr_t)v4332;
	i8 v4334 = v4333+(+16);
	i2 v4335 = *(i2*)(intptr_t)v4334;
	*(i2*)(intptr_t)(ws+4256) = v4335;
	i8 v4336 = (i8)(intptr_t)(f156_E_symref);

	((void(*)(void))(intptr_t)v4336)();

	i8 v4337 = (i8)(intptr_t)c02_s01bf;
	*(i8*)(intptr_t)(ws+4320) = v4337;
	i8 v4338 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4338)();

}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01c0[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(void);
	void f83_E_b8(void);
	void f83_E_b8(void);
	void f185_E_string(void);
	void f101_E_h16(void);
const i1 c02_s01c1[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(void);

// emit_178 workspace at ws+4224 length ws+2
void f362_emit_178(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4339 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4339)();

	i8 v4340 = (i8)(intptr_t)c02_s01c0;
	*(i8*)(intptr_t)(ws+4320) = v4340;
	i8 v4341 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4341)();

	i1 v4342 = (i1)+3;
	*(i1*)(intptr_t)(ws+4336) = v4342;
	i8 v4343 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4343)();

	i1 v4344 = (i1)+115;
	*(i1*)(intptr_t)(ws+4336) = v4344;
	i8 v4345 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4345)();

	i8 v4346 = (i8)(intptr_t)(ws+4136);
	i8 v4347 = *(i8*)(intptr_t)v4346;
	i8 v4348 = *(i8*)(intptr_t)v4347;
	*(i8*)(intptr_t)(ws+4232) = v4348;
	i8 v4349 = (i8)(intptr_t)(f185_E_string);

	((void(*)(void))(intptr_t)v4349)();

	i2 v4350 = *(i2*)(intptr_t)(ws+4240);
	i8 v4351 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v4351 = v4350;

	i8 v4352 = (i8)(intptr_t)(ws+4224);
	i2 v4353 = *(i2*)(intptr_t)v4352;
	*(i2*)(intptr_t)(ws+4272) = v4353;
	i8 v4354 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(void))(intptr_t)v4354)();

	i8 v4355 = (i8)(intptr_t)c02_s01c1;
	*(i8*)(intptr_t)(ws+4320) = v4355;
	i8 v4356 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4356)();

}
	void f186_FlushInitialiserBuffer(void);
const i1 c02_s01c2[] = { 0x7d,0x3b,0x0a,0 };
	void f92_E(void);
	void f107_EmitterCloseStream(void);

// emit_179 workspace at ws+4224 length ws+0
void f363_emit_179(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4357 = (i8)(intptr_t)(f186_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v4357)();

	i8 v4358 = (i8)(intptr_t)c02_s01c2;
	*(i8*)(intptr_t)(ws+4320) = v4358;
	i8 v4359 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4359)();

	i8 v4360 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v4360)();

}
	void f88_E_tab(void);

// emit_182 workspace at ws+4224 length ws+0
void f364_emit_182(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4361 = (i8)(intptr_t)(f88_E_tab);

	((void(*)(void))(intptr_t)v4361)();

}
	void f92_E(void);
	void f86_E_space(void);

// emit_183 workspace at ws+4224 length ws+0
void f365_emit_183(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4362 = (i8)(intptr_t)(ws+4136);
	i8 v4363 = *(i8*)(intptr_t)v4362;
	i8 v4364 = *(i8*)(intptr_t)v4363;
	*(i8*)(intptr_t)(ws+4320) = v4364;
	i8 v4365 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4365)();

	i8 v4366 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4366)();

}
const i1 c02_s01c3[] = { 0x2a,0x28,0x69,0 };
	void f92_E(void);
	void f95_E_u8(void);
const i1 c02_s01c4[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f156_E_symref(void);
const i1 c02_s01c5[] = { 0x29,0 };
	void f92_E(void);
	void f86_E_space(void);

// emit_184 workspace at ws+4224 length ws+0
void f366_emit_184(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4367 = (i8)(intptr_t)c02_s01c3;
	*(i8*)(intptr_t)(ws+4320) = v4367;
	i8 v4368 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4368)();

	i8 v4369 = (i8)(intptr_t)(ws+4136);
	i8 v4370 = *(i8*)(intptr_t)v4369;
	i8 v4371 = v4370+(+14);
	i1 v4372 = *(i1*)(intptr_t)v4371;
	*(i1*)(intptr_t)(ws+4264) = v4372;
	i8 v4373 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(void))(intptr_t)v4373)();

	i8 v4374 = (i8)(intptr_t)c02_s01c4;
	*(i8*)(intptr_t)(ws+4320) = v4374;
	i8 v4375 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4375)();

	i8 v4376 = (i8)(intptr_t)(ws+4136);
	i8 v4377 = *(i8*)(intptr_t)v4376;
	*(i8*)(intptr_t)(ws+4248) = v4377;
	i2 v4378 = (i2)+0;
	*(i2*)(intptr_t)(ws+4256) = v4378;
	i8 v4379 = (i8)(intptr_t)(f156_E_symref);

	((void(*)(void))(intptr_t)v4379)();

	i8 v4380 = (i8)(intptr_t)c02_s01c5;
	*(i8*)(intptr_t)(ws+4320) = v4380;
	i8 v4381 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4381)();

	i8 v4382 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4382)();

}
const i1 c02_s01c6[] = { 0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(void);
	void f155_E_subref_sig(void);
const i1 c02_s01c7[] = { 0x29,0 };
	void f92_E(void);
	void f86_E_space(void);

// emit_185 workspace at ws+4224 length ws+0
void f367_emit_185(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4383 = (i8)(intptr_t)c02_s01c6;
	*(i8*)(intptr_t)(ws+4320) = v4383;
	i8 v4384 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4384)();

	i8 v4385 = (i8)(intptr_t)(ws+4136);
	i8 v4386 = *(i8*)(intptr_t)v4385;
	i8 v4387 = *(i8*)(intptr_t)v4386;
	*(i8*)(intptr_t)(ws+4232) = v4387;
	i8 v4388 = (i8)(intptr_t)(f155_E_subref_sig);

	((void(*)(void))(intptr_t)v4388)();

	i8 v4389 = (i8)(intptr_t)c02_s01c7;
	*(i8*)(intptr_t)(ws+4320) = v4389;
	i8 v4390 = (i8)(intptr_t)(f92_E);

	((void(*)(void))(intptr_t)v4390)();

	i8 v4391 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4391)();

}
	void f83_E_b8(void);
	void f98_E_i32(void);
	void f83_E_b8(void);

// emit_186 workspace at ws+4224 length ws+0
void f368_emit_186(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4392 = (i1)+40;
	*(i1*)(intptr_t)(ws+4336) = v4392;
	i8 v4393 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4393)();

	i8 v4394 = (i8)(intptr_t)(ws+4136);
	i8 v4395 = *(i8*)(intptr_t)v4394;
	i4 v4396 = *(i4*)(intptr_t)v4395;
	*(i4*)(intptr_t)(ws+4256) = v4396;
	i8 v4397 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(void))(intptr_t)v4397)();

	i1 v4398 = (i1)+41;
	*(i1*)(intptr_t)(ws+4336) = v4398;
	i8 v4399 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(void))(intptr_t)v4399)();

}
	void f89_E_nl(void);

// emit_187 workspace at ws+4224 length ws+0
void f369_emit_187(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4400 = (i8)(intptr_t)(f89_E_nl);

	((void(*)(void))(intptr_t)v4400)();

}

// nop_emitter workspace at ws+4224 length ws+0
void f370_nop_emitter(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

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
	void f370_nop_emitter(void);
	void f370_nop_emitter(void);
	void f237_emit_47(void);
	void f238_emit_48(void);
	void f239_emit_49(void);
	void f240_emit_50(void);
	void f241_emit_51(void);
	void f242_emit_52(void);
	void f243_emit_53(void);
	void f370_nop_emitter(void);
	void f370_nop_emitter(void);
	void f244_emit_56(void);
	void f245_emit_57(void);
	void f246_emit_58(void);
	void f247_emit_59(void);
	void f248_emit_60(void);
	void f249_emit_61(void);
	void f250_emit_62(void);
	void f251_emit_63(void);
	void f252_emit_64(void);
	void f253_emit_65(void);
	void f254_emit_66(void);
	void f255_emit_67(void);
	void f256_emit_68(void);
	void f257_emit_69(void);
	void f258_emit_70(void);
	void f259_emit_71(void);
	void f260_emit_72(void);
	void f261_emit_73(void);
	void f262_emit_74(void);
	void f263_emit_75(void);
	void f264_emit_76(void);
	void f265_emit_77(void);
	void f266_emit_78(void);
	void f267_emit_79(void);
	void f268_emit_80(void);
	void f269_emit_81(void);
	void f270_emit_82(void);
	void f271_emit_83(void);
	void f272_emit_84(void);
	void f273_emit_85(void);
	void f274_emit_86(void);
	void f275_emit_87(void);
	void f276_emit_88(void);
	void f277_emit_89(void);
	void f278_emit_90(void);
	void f279_emit_91(void);
	void f280_emit_92(void);
	void f281_emit_93(void);
	void f282_emit_94(void);
	void f283_emit_95(void);
	void f284_emit_96(void);
	void f285_emit_97(void);
	void f286_emit_98(void);
	void f287_emit_99(void);
	void f288_emit_100(void);
	void f289_emit_101(void);
	void f290_emit_102(void);
	void f291_emit_103(void);
	void f292_emit_104(void);
	void f293_emit_105(void);
	void f294_emit_106(void);
	void f295_emit_107(void);
	void f296_emit_108(void);
	void f297_emit_109(void);
	void f298_emit_110(void);
	void f299_emit_111(void);
	void f300_emit_112(void);
	void f301_emit_113(void);
	void f302_emit_114(void);
	void f303_emit_115(void);
	void f304_emit_116(void);
	void f305_emit_117(void);
	void f306_emit_118(void);
	void f307_emit_119(void);
	void f308_emit_120(void);
	void f309_emit_121(void);
	void f310_emit_122(void);
	void f311_emit_123(void);
	void f312_emit_124(void);
	void f313_emit_125(void);
	void f314_emit_126(void);
	void f315_emit_127(void);
	void f316_emit_128(void);
	void f317_emit_129(void);
	void f318_emit_130(void);
	void f319_emit_131(void);
	void f320_emit_132(void);
	void f321_emit_133(void);
	void f322_emit_134(void);
	void f323_emit_135(void);
	void f324_emit_136(void);
	void f325_emit_137(void);
	void f326_emit_138(void);
	void f327_emit_139(void);
	void f328_emit_140(void);
	void f329_emit_141(void);
	void f330_emit_142(void);
	void f331_emit_143(void);
	void f332_emit_144(void);
	void f333_emit_145(void);
	void f370_nop_emitter(void);
	void f370_nop_emitter(void);
	void f370_nop_emitter(void);
	void f370_nop_emitter(void);
	void f334_emit_150(void);
	void f335_emit_151(void);
	void f336_emit_152(void);
	void f337_emit_153(void);
	void f338_emit_154(void);
	void f339_emit_155(void);
	void f340_emit_156(void);
	void f341_emit_157(void);
	void f342_emit_158(void);
	void f343_emit_159(void);
	void f344_emit_160(void);
	void f345_emit_161(void);
	void f346_emit_162(void);
	void f347_emit_163(void);
	void f348_emit_164(void);
	void f349_emit_165(void);
	void f350_emit_166(void);
	void f351_emit_167(void);
	void f352_emit_168(void);
	void f353_emit_169(void);
	void f354_emit_170(void);
	void f355_emit_171(void);
	void f356_emit_172(void);
	void f357_emit_173(void);
	void f358_emit_174(void);
	void f359_emit_175(void);
	void f360_emit_176(void);
	void f361_emit_177(void);
	void f362_emit_178(void);
	void f363_emit_179(void);
	void f370_nop_emitter(void);
	void f370_nop_emitter(void);
	void f364_emit_182(void);
	void f365_emit_183(void);
	void f366_emit_184(void);
	void f367_emit_185(void);
	void f368_emit_186(void);
	void f369_emit_187(void);
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

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f237_emit_47 },

	{ .ptr = (void*)f238_emit_48 },

	{ .ptr = (void*)f239_emit_49 },

	{ .ptr = (void*)f240_emit_50 },

	{ .ptr = (void*)f241_emit_51 },

	{ .ptr = (void*)f242_emit_52 },

	{ .ptr = (void*)f243_emit_53 },

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f244_emit_56 },

	{ .ptr = (void*)f245_emit_57 },

	{ .ptr = (void*)f246_emit_58 },

	{ .ptr = (void*)f247_emit_59 },

	{ .ptr = (void*)f248_emit_60 },

	{ .ptr = (void*)f249_emit_61 },

	{ .ptr = (void*)f250_emit_62 },

	{ .ptr = (void*)f251_emit_63 },

	{ .ptr = (void*)f252_emit_64 },

	{ .ptr = (void*)f253_emit_65 },

	{ .ptr = (void*)f254_emit_66 },

	{ .ptr = (void*)f255_emit_67 },

	{ .ptr = (void*)f256_emit_68 },

	{ .ptr = (void*)f257_emit_69 },

	{ .ptr = (void*)f258_emit_70 },

	{ .ptr = (void*)f259_emit_71 },

	{ .ptr = (void*)f260_emit_72 },

	{ .ptr = (void*)f261_emit_73 },

	{ .ptr = (void*)f262_emit_74 },

	{ .ptr = (void*)f263_emit_75 },

	{ .ptr = (void*)f264_emit_76 },

	{ .ptr = (void*)f265_emit_77 },

	{ .ptr = (void*)f266_emit_78 },

	{ .ptr = (void*)f267_emit_79 },

	{ .ptr = (void*)f268_emit_80 },

	{ .ptr = (void*)f269_emit_81 },

	{ .ptr = (void*)f270_emit_82 },

	{ .ptr = (void*)f271_emit_83 },

	{ .ptr = (void*)f272_emit_84 },

	{ .ptr = (void*)f273_emit_85 },

	{ .ptr = (void*)f274_emit_86 },

	{ .ptr = (void*)f275_emit_87 },

	{ .ptr = (void*)f276_emit_88 },

	{ .ptr = (void*)f277_emit_89 },

	{ .ptr = (void*)f278_emit_90 },

	{ .ptr = (void*)f279_emit_91 },

	{ .ptr = (void*)f280_emit_92 },

	{ .ptr = (void*)f281_emit_93 },

	{ .ptr = (void*)f282_emit_94 },

	{ .ptr = (void*)f283_emit_95 },

	{ .ptr = (void*)f284_emit_96 },

	{ .ptr = (void*)f285_emit_97 },

	{ .ptr = (void*)f286_emit_98 },

	{ .ptr = (void*)f287_emit_99 },

	{ .ptr = (void*)f288_emit_100 },

	{ .ptr = (void*)f289_emit_101 },

	{ .ptr = (void*)f290_emit_102 },

	{ .ptr = (void*)f291_emit_103 },

	{ .ptr = (void*)f292_emit_104 },

	{ .ptr = (void*)f293_emit_105 },

	{ .ptr = (void*)f294_emit_106 },

	{ .ptr = (void*)f295_emit_107 },

	{ .ptr = (void*)f296_emit_108 },

	{ .ptr = (void*)f297_emit_109 },

	{ .ptr = (void*)f298_emit_110 },

	{ .ptr = (void*)f299_emit_111 },

	{ .ptr = (void*)f300_emit_112 },

	{ .ptr = (void*)f301_emit_113 },

	{ .ptr = (void*)f302_emit_114 },

	{ .ptr = (void*)f303_emit_115 },

	{ .ptr = (void*)f304_emit_116 },

	{ .ptr = (void*)f305_emit_117 },

	{ .ptr = (void*)f306_emit_118 },

	{ .ptr = (void*)f307_emit_119 },

	{ .ptr = (void*)f308_emit_120 },

	{ .ptr = (void*)f309_emit_121 },

	{ .ptr = (void*)f310_emit_122 },

	{ .ptr = (void*)f311_emit_123 },

	{ .ptr = (void*)f312_emit_124 },

	{ .ptr = (void*)f313_emit_125 },

	{ .ptr = (void*)f314_emit_126 },

	{ .ptr = (void*)f315_emit_127 },

	{ .ptr = (void*)f316_emit_128 },

	{ .ptr = (void*)f317_emit_129 },

	{ .ptr = (void*)f318_emit_130 },

	{ .ptr = (void*)f319_emit_131 },

	{ .ptr = (void*)f320_emit_132 },

	{ .ptr = (void*)f321_emit_133 },

	{ .ptr = (void*)f322_emit_134 },

	{ .ptr = (void*)f323_emit_135 },

	{ .ptr = (void*)f324_emit_136 },

	{ .ptr = (void*)f325_emit_137 },

	{ .ptr = (void*)f326_emit_138 },

	{ .ptr = (void*)f327_emit_139 },

	{ .ptr = (void*)f328_emit_140 },

	{ .ptr = (void*)f329_emit_141 },

	{ .ptr = (void*)f330_emit_142 },

	{ .ptr = (void*)f331_emit_143 },

	{ .ptr = (void*)f332_emit_144 },

	{ .ptr = (void*)f333_emit_145 },

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f334_emit_150 },

	{ .ptr = (void*)f335_emit_151 },

	{ .ptr = (void*)f336_emit_152 },

	{ .ptr = (void*)f337_emit_153 },

	{ .ptr = (void*)f338_emit_154 },

	{ .ptr = (void*)f339_emit_155 },

	{ .ptr = (void*)f340_emit_156 },

	{ .ptr = (void*)f341_emit_157 },

	{ .ptr = (void*)f342_emit_158 },

	{ .ptr = (void*)f343_emit_159 },

	{ .ptr = (void*)f344_emit_160 },

	{ .ptr = (void*)f345_emit_161 },

	{ .ptr = (void*)f346_emit_162 },

	{ .ptr = (void*)f347_emit_163 },

	{ .ptr = (void*)f348_emit_164 },

	{ .ptr = (void*)f349_emit_165 },

	{ .ptr = (void*)f350_emit_166 },

	{ .ptr = (void*)f351_emit_167 },

	{ .ptr = (void*)f352_emit_168 },

	{ .ptr = (void*)f353_emit_169 },

	{ .ptr = (void*)f354_emit_170 },

	{ .ptr = (void*)f355_emit_171 },

	{ .ptr = (void*)f356_emit_172 },

	{ .ptr = (void*)f357_emit_173 },

	{ .ptr = (void*)f358_emit_174 },

	{ .ptr = (void*)f359_emit_175 },

	{ .ptr = (void*)f360_emit_176 },

	{ .ptr = (void*)f361_emit_177 },

	{ .ptr = (void*)f362_emit_178 },

	{ .ptr = (void*)f363_emit_179 },

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f370_nop_emitter },

	{ .ptr = (void*)f364_emit_182 },

	{ .ptr = (void*)f365_emit_183 },

	{ .ptr = (void*)f366_emit_184 },

	{ .ptr = (void*)f367_emit_185 },

	{ .ptr = (void*)f368_emit_186 },

	{ .ptr = (void*)f369_emit_187 },

};

// EmitOneInstruction workspace at ws+4120 length ws+98
void f190_EmitOneInstruction(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v3372 = (i8)(intptr_t)(ws+4128);
	i8 v3373 = *(i8*)(intptr_t)v3372;
	i8 v3374 = v3373+(+16);
	i8 v3375 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v3375 = v3374;

	i8 v3376 = (i8)(intptr_t)(ws+4136);
	i8 v3377 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3377 = v3376;

	i1 v3378 = (i1)+4;
	i8 v3379 = (i8)(intptr_t)(ws+4216);
	*(i1*)(intptr_t)v3379 = v3378;

c02_029e:;

	i8 v3380 = (i8)(intptr_t)(ws+4216);
	i1 v3381 = *(i1*)(intptr_t)v3380;
	i1 v3382 = (i1)+0;
	if (v3381==v3382) goto c02_02a3; else goto c02_02a2;

c02_02a2:;

	i8 v3383 = (i8)(intptr_t)(ws+4200);
	i8 v3384 = *(i8*)(intptr_t)v3383;
	i8 v3385 = *(i8*)(intptr_t)v3384;
	i8 v3386 = (i8)(intptr_t)(ws+4208);
	i8 v3387 = *(i8*)(intptr_t)v3386;
	*(i8*)(intptr_t)v3387 = v3385;

	i8 v3388 = (i8)(intptr_t)(ws+4208);
	i8 v3389 = *(i8*)(intptr_t)v3388;
	i8 v3390 = *(i8*)(intptr_t)v3389;
	i8 v3391 = (i8)+0;
	if (v3390==v3391) goto c02_02a8; else goto c02_02a7;

c02_02a7:;

	i8 v3392 = (i8)(intptr_t)(ws+4208);
	i8 v3393 = *(i8*)(intptr_t)v3392;
	i8 v3394 = *(i8*)(intptr_t)v3393;
	i8 v3395 = v3394+(+57);
	i1 v3396 = *(i1*)(intptr_t)v3395;
	i8 v3397 = (i8)(intptr_t)(ws+4208);
	i8 v3398 = *(i8*)(intptr_t)v3397;
	i8 v3399 = v3398+(+8);
	*(i1*)(intptr_t)v3399 = v3396;

c02_02a8:;

c02_02a4:;

	i8 v3400 = (i8)(intptr_t)(ws+4200);
	i8 v3401 = *(i8*)(intptr_t)v3400;
	i8 v3402 = v3401+(+8);
	i8 v3403 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v3403 = v3402;

	i8 v3404 = (i8)(intptr_t)(ws+4208);
	i8 v3405 = *(i8*)(intptr_t)v3404;
	i8 v3406 = v3405+(+16);
	i8 v3407 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3407 = v3406;

	i8 v3408 = (i8)(intptr_t)(ws+4216);
	i1 v3409 = *(i1*)(intptr_t)v3408;
	i1 v3410 = v3409+(-1);
	i8 v3411 = (i8)(intptr_t)(ws+4216);
	*(i1*)(intptr_t)v3411 = v3410;

	goto c02_029e;

c02_02a3:;

	i8 v3412 = (i8)(intptr_t)(ws+4128);
	i8 v3413 = *(i8*)(intptr_t)v3412;
	i8 v3414 = v3413+(+49);
	i1 v3415 = *(i1*)(intptr_t)v3414;
	i8 v3416 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v3416 = v3415;






















































































































































































	i8 v4401 = (i8)(intptr_t)((i1*)f190_EmitOneInstruction_s02a9);
	i8 v4402 = (i8)(intptr_t)(ws+4120);
	i1 v4403 = *(i1*)(intptr_t)v4402;
	i8 v4404 = v4403;
	i1 v4405 = (i1)+3;
	i8 v4406 = ((i8)v4404)<<v4405;
	i8 v4407 = v4401+v4406;
	i8 v4408 = *(i8*)(intptr_t)v4407;

	((void(*)(void))(intptr_t)v4408)();

}
static data f3___main_s02aa[] = {








	{ .i1 = { 0x3a,0x2a,0x2a,0x34,0x2f,0x35,0x30,0x36}},








	{ .i1 = { 0x31,0x37,0x32,0x9f,0x2a,0xa0,0x2a,0xa1}},








	{ .i1 = { 0x2a,0xa2,0x2a,0x86,0x2a,0x87,0x2a,0x88}},








	{ .i1 = { 0x2a,0x89,0x2a,0xa4,0x2a,0xa5,0x2a,0xa6}},








	{ .i1 = { 0x2a,0xa7,0x2a,0x8b,0x2a,0x8c,0x2a,0x8d}},








	{ .i1 = { 0x2a,0x8e,0x2a,0x95,0x2a,0x96,0x2a,0x97}},








	{ .i1 = { 0x2a,0x98,0x2a,0x90,0x2a,0x91,0x2a,0x92}},








	{ .i1 = { 0x2a,0x93,0x2a,0x9a,0x2a,0x9b,0x2a,0x9c}},








	{ .i1 = { 0x2a,0x9d,0x2a,0xa9,0x2a,0xaa,0x2a,0xab}},








	{ .i1 = { 0x2a,0xac,0x2a,0xae,0x2a,0xaf,0x2a,0xb0}},








	{ .i1 = { 0x2a,0xb1,0x2a,0xb3,0x2a,0xb4,0x2a,0xb5}},








	{ .i1 = { 0x2a,0xb6,0x2a,0x02,0x03,0x1a,0x1b,0x1c}},








	{ .i1 = { 0x04,0x05,0x1d,0x1e,0x1f,0x01,0x21,0x22}},








	{ .i1 = { 0x23,0x24,0x26,0x27,0x28,0x29,0x2a,0x2a}},








	{ .i1 = { 0x2a,0x2a,0x2c,0x2d,0x2f,0x30,0x31,0x32}},








	{ .i1 = { 0x9f,0xa0,0xa1,0xa2,0x86,0x87,0x88,0x89}},








	{ .i1 = { 0xa4,0xa5,0xa6,0xa7,0x8b,0x8c,0x8d,0x8e}},








	{ .i1 = { 0x95,0x96,0x97,0x98,0x90,0x91,0x92,0x93}},








	{ .i1 = { 0x9a,0x9b,0x9c,0x9d,0xa9,0xaa,0xab,0xac}},








	{ .i1 = { 0xae,0xaf,0xb0,0xb1,0xb3,0xb4,0xb5,0xb6}},








	{ .i1 = { 0x72,0x73,0x74,0x75,0x6d,0x6e,0x6f,0x70}},








	{ .i1 = { 0x77,0x78,0x79,0x7a,0x7c,0x7d,0x7e,0x7f}},








	{ .i1 = { 0x81,0x82,0x83,0x84,0x3b,0x3c,0x3d,0x3e}},








	{ .i1 = { 0x45,0x46,0x47,0x48,0x40,0x41,0x42,0x43}},








	{ .i1 = { 0x4a,0x4b,0x4c,0x4d,0x4f,0x50,0x51,0x52}},








	{ .i1 = { 0x54,0x55,0x56,0x57,0x5a,0x5b,0x5c,0x5e}},








	{ .i1 = { 0x60,0x61,0x63,0x64,0x66,0x68,0x69,0x6a}},








	{ .i1 = { 0x2b,0x06,0x08,0x09,0x0a,0x0b,0x0e,0x0d}},








	{ .i1 = { 0x0c,0x0f,0x10,0x11,0x12,0x13,0x14,0x15}},



	{ .i1 = { 0x16,0x17}},
};
static data f3___main_s02ab[] = {








	{ .i1 = { 0x01,0x08,0x02,0x08,0x04,0x08,0x08,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x10,0x08,0x10,0x08,0x10,0x01,0x10,0x02}},








	{ .i1 = { 0x10,0x04,0x10,0x08,0x08,0x08,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x01,0x04,0x01,0x08,0x01}},








	{ .i1 = { 0x01,0x01,0x02,0x01,0x04,0x01,0x08,0x01}},








	{ .i1 = { 0x01,0x01,0x02,0x01,0x04,0x01,0x08,0x01}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x01,0x01,0x02}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x04,0x08,0x08,0x08}},

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








	{ .i1 = { 0x01,0x07,0x06,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x10,0x10,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x10,0x10,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x10,0x10,0x00,0x01,0x07,0x06,0x00,0x10}},








	{ .i1 = { 0x10,0x00,0x01,0x07,0x06,0x00,0x10,0x10}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x04,0x04,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x08,0x08,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x01,0x00,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x01,0x00,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x01,0x01,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x02,0x02,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x03,0x02,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x07,0x06,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x01,0x01,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x02,0x02,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x07,0x06,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x07,0x06,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x01,0x01,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x02,0x02,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x07,0x06,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x07,0x06,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x01,0x01,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x02,0x02,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x07,0x06,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x07,0x06,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x01,0x01,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x02,0x02,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x07,0x06,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x07,0x06,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x01,0x01,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x02,0x02,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x07,0x06,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x03,0x02,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x01,0x01,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x02,0x02,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x03,0x02,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x07,0x06,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x01,0x01,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x02,0x02,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x07,0x06,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x07,0x06,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x00,0x00,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x07,0x06,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x07,0x06,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x00,0x00,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x07,0x06,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x03,0x02,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x02,0x02,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x01,0x03,0x02,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x03,0x02,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x08,0x08,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x01,0x01,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x03,0x02,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








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








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},





	{ .i1 = { 0x00,0x01,0x01,0x00}},
};

// PopulateMatchBuffer workspace at ws+4176 length ws+24
void f371_PopulateMatchBuffer(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4409 = (i8)(intptr_t)(ws+4184);
	i8 v4410 = *(i8*)(intptr_t)v4409;
	i8 v4411 = *(i8*)(intptr_t)v4410;
	i8 v4412 = v4411+(+256);
	i1 v4413 = *(i1*)(intptr_t)v4412;
	i8 v4414 = (i8)(intptr_t)(ws+4192);
	i8 v4415 = *(i8*)(intptr_t)v4414;
	*(i1*)(intptr_t)v4415 = v4413;

	i8 v4416 = (i8)(intptr_t)(ws+4184);
	i8 v4417 = *(i8*)(intptr_t)v4416;
	i8 v4418 = *(i8*)(intptr_t)v4417;
	i8 v4419 = v4418+(+24);
	i8 v4420 = *(i8*)(intptr_t)v4419;
	i8 v4421 = (i8)(intptr_t)(ws+4184);
	i8 v4422 = *(i8*)(intptr_t)v4421;
	i8 v4423 = v4422+(+8);
	*(i8*)(intptr_t)v4423 = v4420;

	i8 v4424 = (i8)(intptr_t)(ws+4184);
	i8 v4425 = *(i8*)(intptr_t)v4424;
	i8 v4426 = v4425+(+8);
	i8 v4427 = *(i8*)(intptr_t)v4426;
	i8 v4428 = (i8)+0;
	if (v4427==v4428) goto c02_02b1; else goto c02_02b0;

c02_02b0:;

	i8 v4429 = (i8)(intptr_t)(ws+4184);
	i8 v4430 = *(i8*)(intptr_t)v4429;
	i8 v4431 = v4430+(+8);
	i8 v4432 = *(i8*)(intptr_t)v4431;
	i8 v4433 = v4432+(+256);
	i1 v4434 = *(i1*)(intptr_t)v4433;
	i8 v4435 = (i8)(intptr_t)(ws+4192);
	i8 v4436 = *(i8*)(intptr_t)v4435;
	i8 v4437 = v4436+(+1);
	*(i1*)(intptr_t)v4437 = v4434;

c02_02b1:;

c02_02ad:;

	i8 v4438 = (i8)(intptr_t)(ws+4184);
	i8 v4439 = *(i8*)(intptr_t)v4438;
	i8 v4440 = *(i8*)(intptr_t)v4439;
	i8 v4441 = v4440+(+32);
	i8 v4442 = *(i8*)(intptr_t)v4441;
	i8 v4443 = (i8)(intptr_t)(ws+4184);
	i8 v4444 = *(i8*)(intptr_t)v4443;
	i8 v4445 = v4444+(+16);
	*(i8*)(intptr_t)v4445 = v4442;

	i8 v4446 = (i8)(intptr_t)(ws+4184);
	i8 v4447 = *(i8*)(intptr_t)v4446;
	i8 v4448 = v4447+(+16);
	i8 v4449 = *(i8*)(intptr_t)v4448;
	i8 v4450 = (i8)+0;
	if (v4449==v4450) goto c02_02b6; else goto c02_02b5;

c02_02b5:;

	i8 v4451 = (i8)(intptr_t)(ws+4184);
	i8 v4452 = *(i8*)(intptr_t)v4451;
	i8 v4453 = v4452+(+16);
	i8 v4454 = *(i8*)(intptr_t)v4453;
	i8 v4455 = v4454+(+256);
	i1 v4456 = *(i1*)(intptr_t)v4455;
	i8 v4457 = (i8)(intptr_t)(ws+4192);
	i8 v4458 = *(i8*)(intptr_t)v4457;
	i8 v4459 = v4458+(+2);
	*(i1*)(intptr_t)v4459 = v4456;

	i8 v4460 = (i8)(intptr_t)(ws+4184);
	i8 v4461 = *(i8*)(intptr_t)v4460;
	i8 v4462 = v4461+(+16);
	i8 v4463 = *(i8*)(intptr_t)v4462;
	i8 v4464 = v4463+(+24);
	i8 v4465 = *(i8*)(intptr_t)v4464;
	i8 v4466 = (i8)(intptr_t)(ws+4184);
	i8 v4467 = *(i8*)(intptr_t)v4466;
	i8 v4468 = v4467+(+24);
	*(i8*)(intptr_t)v4468 = v4465;

	i8 v4469 = (i8)(intptr_t)(ws+4184);
	i8 v4470 = *(i8*)(intptr_t)v4469;
	i8 v4471 = v4470+(+24);
	i8 v4472 = *(i8*)(intptr_t)v4471;
	i8 v4473 = (i8)+0;
	if (v4472==v4473) goto c02_02bb; else goto c02_02ba;

c02_02ba:;

	i8 v4474 = (i8)(intptr_t)(ws+4184);
	i8 v4475 = *(i8*)(intptr_t)v4474;
	i8 v4476 = v4475+(+24);
	i8 v4477 = *(i8*)(intptr_t)v4476;
	i8 v4478 = v4477+(+256);
	i1 v4479 = *(i1*)(intptr_t)v4478;
	i8 v4480 = (i8)(intptr_t)(ws+4192);
	i8 v4481 = *(i8*)(intptr_t)v4480;
	i8 v4482 = v4481+(+3);
	*(i1*)(intptr_t)v4482 = v4479;

c02_02bb:;

c02_02b7:;

c02_02b6:;

c02_02b2:;

}

// IsStackedRegister workspace at ws+4256 length ws+16
void f372_IsStackedRegister(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4483 = (i1)+0;
	i8 v4484 = (i8)(intptr_t)(ws+4257);
	*(i1*)(intptr_t)v4484 = v4483;

	i8 v4485 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v4486 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v4486 = v4485;

c02_02bc:;

	i8 v4487 = (i8)(intptr_t)(ws+4264);
	i8 v4488 = *(i8*)(intptr_t)v4487;
	i8 v4489 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v4488==v4489) goto c02_02c1; else goto c02_02c0;

c02_02c0:;

	i8 v4490 = (i8)(intptr_t)(ws+4264);
	i8 v4491 = *(i8*)(intptr_t)v4490;
	i8 v4492 = v4491+(+8);
	i1 v4493 = *(i1*)(intptr_t)v4492;
	i8 v4494 = (i8)(intptr_t)(ws+4256);
	i1 v4495 = *(i1*)(intptr_t)v4494;
	i1 v4496 = v4493&v4495;
	i1 v4497 = (i1)+0;
	if (v4496==v4497) goto c02_02c6; else goto c02_02c5;

c02_02c5:;

	i8 v4498 = (i8)(intptr_t)(ws+4264);
	i8 v4499 = *(i8*)(intptr_t)v4498;
	i8 v4500 = v4499+(+11);
	i1 v4501 = *(i1*)(intptr_t)v4500;
	i8 v4502 = (i8)(intptr_t)(ws+4257);
	*(i1*)(intptr_t)v4502 = v4501;

	return;

c02_02c6:;

c02_02c2:;

	i8 v4503 = (i8)(intptr_t)(ws+4264);
	i8 v4504 = *(i8*)(intptr_t)v4503;
	i8 v4505 = v4504+(+16);
	i8 v4506 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v4506 = v4505;

	goto c02_02bc;

c02_02c1:;

}

// CalculateBlockedRegisters workspace at ws+4152 length ws+17
void f373_CalculateBlockedRegisters(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4507 = (i1)+0;
	i8 v4508 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v4508 = v4507;

	i8 v4509 = (i8)(intptr_t)(ws+4152);
	i8 v4510 = *(i8*)(intptr_t)v4509;
	i8 v4511 = (i8)(intptr_t)(ws+4160);
	i8 v4512 = *(i8*)(intptr_t)v4511;
	if (v4510==v4512) goto c02_02ca; else goto c02_02cb;

c02_02ca:;

	return;

c02_02cb:;

c02_02c7:;

	i8 v4513 = (i8)(intptr_t)(ws+4152);
	i8 v4514 = *(i8*)(intptr_t)v4513;
	i8 v4515 = *(i8*)(intptr_t)v4514;
	i8 v4516 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v4516 = v4515;

c02_02cc:;

	i8 v4517 = (i8)(intptr_t)(ws+4152);
	i8 v4518 = *(i8*)(intptr_t)v4517;
	i8 v4519 = (i8)(intptr_t)(ws+4160);
	i8 v4520 = *(i8*)(intptr_t)v4519;
	if (v4518==v4520) goto c02_02d1; else goto c02_02d0;

c02_02d0:;

	i8 v4521 = (i8)(intptr_t)(ws+4168);
	i1 v4522 = *(i1*)(intptr_t)v4521;
	i8 v4523 = (i8)(intptr_t)(ws+4152);
	i8 v4524 = *(i8*)(intptr_t)v4523;
	i8 v4525 = v4524+(+64);
	i1 v4526 = *(i1*)(intptr_t)v4525;
	i1 v4527 = v4522|v4526;
	i8 v4528 = (i8)(intptr_t)(ws+4152);
	i8 v4529 = *(i8*)(intptr_t)v4528;
	i8 v4530 = v4529+(+66);
	i1 v4531 = *(i1*)(intptr_t)v4530;
	i1 v4532 = v4527|v4531;
	i8 v4533 = (i8)(intptr_t)(ws+4152);
	i8 v4534 = *(i8*)(intptr_t)v4533;
	i8 v4535 = v4534+(+65);
	i1 v4536 = *(i1*)(intptr_t)v4535;
	i1 v4537 = v4532|v4536;
	i8 v4538 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v4538 = v4537;

	i8 v4539 = (i8)(intptr_t)(ws+4152);
	i8 v4540 = *(i8*)(intptr_t)v4539;
	i8 v4541 = (i8)(intptr_t)(ws+4160);
	i8 v4542 = *(i8*)(intptr_t)v4541;
	if (v4540==v4542) goto c02_02d5; else goto c02_02d6;

c02_02d5:;

	goto c02_02d1;

c02_02d6:;

c02_02d2:;

	i8 v4543 = (i8)(intptr_t)(ws+4152);
	i8 v4544 = *(i8*)(intptr_t)v4543;
	i8 v4545 = *(i8*)(intptr_t)v4544;
	i8 v4546 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v4546 = v4545;

	goto c02_02cc;

c02_02d1:;

}

// BlockRegisters workspace at ws+4152 length ws+17
void f375_BlockRegisters(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4574 = (i8)(intptr_t)(ws+4152);
	i8 v4575 = *(i8*)(intptr_t)v4574;
	i8 v4576 = (i8)(intptr_t)(ws+4160);
	i8 v4577 = *(i8*)(intptr_t)v4576;
	if (v4575==v4577) goto c02_02df; else goto c02_02e0;

c02_02df:;

	return;

c02_02e0:;

c02_02dc:;

	i8 v4578 = (i8)(intptr_t)(ws+4152);
	i8 v4579 = *(i8*)(intptr_t)v4578;
	i8 v4580 = *(i8*)(intptr_t)v4579;
	i8 v4581 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v4581 = v4580;

c02_02e1:;

	i8 v4582 = (i8)(intptr_t)(ws+4152);
	i8 v4583 = *(i8*)(intptr_t)v4582;
	i8 v4584 = (i8)(intptr_t)(ws+4160);
	i8 v4585 = *(i8*)(intptr_t)v4584;
	if (v4583==v4585) goto c02_02e6; else goto c02_02e5;

c02_02e5:;

	i8 v4586 = (i8)(intptr_t)(ws+4152);
	i8 v4587 = *(i8*)(intptr_t)v4586;
	i8 v4588 = v4587+(+64);
	i1 v4589 = *(i1*)(intptr_t)v4588;
	i8 v4590 = (i8)(intptr_t)(ws+4168);
	i1 v4591 = *(i1*)(intptr_t)v4590;
	i1 v4592 = v4589|v4591;
	i8 v4593 = (i8)(intptr_t)(ws+4152);
	i8 v4594 = *(i8*)(intptr_t)v4593;
	i8 v4595 = v4594+(+64);
	*(i1*)(intptr_t)v4595 = v4592;

	i8 v4596 = (i8)(intptr_t)(ws+4152);
	i8 v4597 = *(i8*)(intptr_t)v4596;
	i8 v4598 = v4597+(+65);
	i1 v4599 = *(i1*)(intptr_t)v4598;
	i8 v4600 = (i8)(intptr_t)(ws+4168);
	i1 v4601 = *(i1*)(intptr_t)v4600;
	i1 v4602 = v4599|v4601;
	i8 v4603 = (i8)(intptr_t)(ws+4152);
	i8 v4604 = *(i8*)(intptr_t)v4603;
	i8 v4605 = v4604+(+65);
	*(i1*)(intptr_t)v4605 = v4602;

	i8 v4606 = (i8)(intptr_t)(ws+4152);
	i8 v4607 = *(i8*)(intptr_t)v4606;
	i8 v4608 = v4607+(+66);
	i1 v4609 = *(i1*)(intptr_t)v4608;
	i8 v4610 = (i8)(intptr_t)(ws+4168);
	i1 v4611 = *(i1*)(intptr_t)v4610;
	i1 v4612 = v4609|v4611;
	i8 v4613 = (i8)(intptr_t)(ws+4152);
	i8 v4614 = *(i8*)(intptr_t)v4613;
	i8 v4615 = v4614+(+66);
	*(i1*)(intptr_t)v4615 = v4612;

	i8 v4616 = (i8)(intptr_t)(ws+4152);
	i8 v4617 = *(i8*)(intptr_t)v4616;
	i8 v4618 = (i8)(intptr_t)(ws+4160);
	i8 v4619 = *(i8*)(intptr_t)v4618;
	if (v4617==v4619) goto c02_02ea; else goto c02_02eb;

c02_02ea:;

	goto c02_02e6;

c02_02eb:;

c02_02e7:;

	i8 v4620 = (i8)(intptr_t)(ws+4152);
	i8 v4621 = *(i8*)(intptr_t)v4620;
	i8 v4622 = *(i8*)(intptr_t)v4621;
	i8 v4623 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v4623 = v4622;

	goto c02_02e1;

c02_02e6:;

}
const i1 c02_s01c8[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };
	void f68_SimpleError(void);

// CreateSpill workspace at ws+4152 length ws+24
void f378_CreateSpill(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4693 = (i8)(intptr_t)(ws+4152);
	i8 v4694 = *(i8*)(intptr_t)v4693;
	i8 v4695 = v4694+(+83);
	i1 v4696 = *(i1*)(intptr_t)v4695;
	i8 v4697 = (i8)(intptr_t)(ws+4162);
	*(i1*)(intptr_t)v4697 = v4696;

	i8 v4698 = (i8)(intptr_t)(ws+4162);
	i1 v4699 = *(i1*)(intptr_t)v4698;
	i1 v4700 = (i1)+5;
	if (v4699==v4700) goto c02_02ff; else goto c02_0300;

c02_02ff:;

	i8 v4701 = (i8)(intptr_t)c02_s01c8;
	*(i8*)(intptr_t)(ws+4280) = v4701;
	i8 v4702 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v4702)();

c02_0300:;

c02_02fc:;

	i8 v4703 = (i8)(intptr_t)(ws+4152);
	i8 v4704 = *(i8*)(intptr_t)v4703;
	i8 v4705 = v4704+(+67);
	i8 v4706 = (i8)(intptr_t)(ws+4162);
	i1 v4707 = *(i1*)(intptr_t)v4706;
	i8 v4708 = v4707;
	i1 v4709 = (i1)+1;
	i8 v4710 = ((i8)v4708)<<v4709;
	i8 v4711 = v4705+v4710;
	i8 v4712 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v4712 = v4711;

	i8 v4713 = (i8)(intptr_t)(ws+4160);
	i1 v4714 = *(i1*)(intptr_t)v4713;
	i8 v4715 = (i8)(intptr_t)(ws+4168);
	i8 v4716 = *(i8*)(intptr_t)v4715;
	*(i1*)(intptr_t)v4716 = v4714;

	i8 v4717 = (i8)(intptr_t)(ws+4161);
	i1 v4718 = *(i1*)(intptr_t)v4717;
	i8 v4719 = (i8)(intptr_t)(ws+4168);
	i8 v4720 = *(i8*)(intptr_t)v4719;
	i8 v4721 = v4720+(+1);
	*(i1*)(intptr_t)v4721 = v4718;

	i8 v4722 = (i8)(intptr_t)(ws+4162);
	i1 v4723 = *(i1*)(intptr_t)v4722;
	i1 v4724 = v4723+(+1);
	i8 v4725 = (i8)(intptr_t)(ws+4152);
	i8 v4726 = *(i8*)(intptr_t)v4725;
	i8 v4727 = v4726+(+83);
	*(i1*)(intptr_t)v4727 = v4724;

}
const i1 c02_s01c9[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };
	void f68_SimpleError(void);

// CreateReload workspace at ws+4152 length ws+24
void f379_CreateReload(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v4728 = (i8)(intptr_t)(ws+4152);
	i8 v4729 = *(i8*)(intptr_t)v4728;
	i8 v4730 = v4729+(+84);
	i1 v4731 = *(i1*)(intptr_t)v4730;
	i8 v4732 = (i8)(intptr_t)(ws+4162);
	*(i1*)(intptr_t)v4732 = v4731;

	i8 v4733 = (i8)(intptr_t)(ws+4162);
	i1 v4734 = *(i1*)(intptr_t)v4733;
	i1 v4735 = (i1)+5;
	if (v4734==v4735) goto c02_0304; else goto c02_0305;

c02_0304:;

	i8 v4736 = (i8)(intptr_t)c02_s01c9;
	*(i8*)(intptr_t)(ws+4280) = v4736;
	i8 v4737 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v4737)();

c02_0305:;

c02_0301:;

	i8 v4738 = (i8)(intptr_t)(ws+4152);
	i8 v4739 = *(i8*)(intptr_t)v4738;
	i8 v4740 = v4739+(+75);
	i8 v4741 = (i8)(intptr_t)(ws+4162);
	i1 v4742 = *(i1*)(intptr_t)v4741;
	i8 v4743 = v4742;
	i1 v4744 = (i1)+1;
	i8 v4745 = ((i8)v4743)<<v4744;
	i8 v4746 = v4740+v4745;
	i8 v4747 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v4747 = v4746;

	i8 v4748 = (i8)(intptr_t)(ws+4160);
	i1 v4749 = *(i1*)(intptr_t)v4748;
	i8 v4750 = (i8)(intptr_t)(ws+4168);
	i8 v4751 = *(i8*)(intptr_t)v4750;
	*(i1*)(intptr_t)v4751 = v4749;

	i8 v4752 = (i8)(intptr_t)(ws+4161);
	i1 v4753 = *(i1*)(intptr_t)v4752;
	i8 v4754 = (i8)(intptr_t)(ws+4168);
	i8 v4755 = *(i8*)(intptr_t)v4754;
	i8 v4756 = v4755+(+1);
	*(i1*)(intptr_t)v4756 = v4753;

	i8 v4757 = (i8)(intptr_t)(ws+4162);
	i1 v4758 = *(i1*)(intptr_t)v4757;
	i1 v4759 = v4758+(+1);
	i8 v4760 = (i8)(intptr_t)(ws+4152);
	i8 v4761 = *(i8*)(intptr_t)v4760;
	i8 v4762 = v4761+(+84);
	*(i1*)(intptr_t)v4762 = v4759;

}
	void f166_ArchEmitMove(void);
	void f166_ArchEmitMove(void);
	void f166_ArchEmitMove(void);
	void f166_ArchEmitMove(void);

// ShuffleRegisters workspace at ws+4120 length ws+25
void f380_ShuffleRegisters(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v4763 = (i1)+0;
	i8 v4764 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4764 = v4763;

	i1 v4765 = (i1)+0;
	i8 v4766 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4766 = v4765;

	i8 v4767 = (i8)(intptr_t)(ws+4120);
	i8 v4768 = *(i8*)(intptr_t)v4767;
	i8 v4769 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4769 = v4768;

	i1 v4770 = (i1)+4;
	i8 v4771 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4771 = v4770;

c02_0306:;

	i8 v4772 = (i8)(intptr_t)(ws+4144);
	i1 v4773 = *(i1*)(intptr_t)v4772;
	i1 v4774 = (i1)+0;
	if (v4773==v4774) goto c02_030b; else goto c02_030a;

c02_030a:;

	i8 v4775 = (i8)(intptr_t)(ws+4128);
	i1 v4776 = *(i1*)(intptr_t)v4775;
	i8 v4777 = (i8)(intptr_t)(ws+4136);
	i8 v4778 = *(i8*)(intptr_t)v4777;
	i8 v4779 = v4778+(+1);
	i1 v4780 = *(i1*)(intptr_t)v4779;
	i1 v4781 = v4776|v4780;
	i8 v4782 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4782 = v4781;

	i8 v4783 = (i8)(intptr_t)(ws+4129);
	i1 v4784 = *(i1*)(intptr_t)v4783;
	i8 v4785 = (i8)(intptr_t)(ws+4136);
	i8 v4786 = *(i8*)(intptr_t)v4785;
	i1 v4787 = *(i1*)(intptr_t)v4786;
	i1 v4788 = v4784|v4787;
	i8 v4789 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4789 = v4788;

	i8 v4790 = (i8)(intptr_t)(ws+4144);
	i1 v4791 = *(i1*)(intptr_t)v4790;
	i1 v4792 = v4791+(-1);
	i8 v4793 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4793 = v4792;

	i8 v4794 = (i8)(intptr_t)(ws+4136);
	i8 v4795 = *(i8*)(intptr_t)v4794;
	i8 v4796 = v4795+(+2);
	i8 v4797 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4797 = v4796;

	goto c02_0306;

c02_030b:;

c02_030c:;

	i8 v4798 = (i8)(intptr_t)(ws+4120);
	i8 v4799 = *(i8*)(intptr_t)v4798;
	i8 v4800 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4800 = v4799;

	i1 v4801 = (i1)+4;
	i8 v4802 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4802 = v4801;

c02_030e:;

	i8 v4803 = (i8)(intptr_t)(ws+4144);
	i1 v4804 = *(i1*)(intptr_t)v4803;
	i1 v4805 = (i1)+0;
	if (v4804==v4805) goto c02_0313; else goto c02_0312;

c02_0312:;

	i8 v4806 = (i8)(intptr_t)(ws+4136);
	i8 v4807 = *(i8*)(intptr_t)v4806;
	i1 v4808 = *(i1*)(intptr_t)v4807;
	i1 v4809 = (i1)+0;
	if (v4808==v4809) goto c02_031a; else goto c02_031b;

c02_031b:;

	i8 v4810 = (i8)(intptr_t)(ws+4136);
	i8 v4811 = *(i8*)(intptr_t)v4810;
	i8 v4812 = v4811+(+1);
	i1 v4813 = *(i1*)(intptr_t)v4812;
	i1 v4814 = (i1)+0;
	if (v4813==v4814) goto c02_0319; else goto c02_031a;

c02_0319:;

	goto c02_0313;

c02_031a:;

c02_0314:;

	i8 v4815 = (i8)(intptr_t)(ws+4136);
	i8 v4816 = *(i8*)(intptr_t)v4815;
	i8 v4817 = v4816+(+2);
	i8 v4818 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4818 = v4817;

	i8 v4819 = (i8)(intptr_t)(ws+4144);
	i1 v4820 = *(i1*)(intptr_t)v4819;
	i1 v4821 = v4820+(-1);
	i8 v4822 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4822 = v4821;

	goto c02_030e;

c02_0313:;

	i8 v4823 = (i8)(intptr_t)(ws+4144);
	i1 v4824 = *(i1*)(intptr_t)v4823;
	i1 v4825 = (i1)+0;
	if (v4824==v4825) goto c02_0320; else goto c02_031f;

c02_031f:;

	i8 v4826 = (i8)(intptr_t)(ws+4136);
	i8 v4827 = *(i8*)(intptr_t)v4826;
	i1 v4828 = *(i1*)(intptr_t)v4827;
	*(i1*)(intptr_t)(ws+4152) = v4828;
	i1 v4829 = (i1)+0;
	*(i1*)(intptr_t)(ws+4153) = v4829;
	i8 v4830 = (i8)(intptr_t)(f166_ArchEmitMove);

	((void(*)(void))(intptr_t)v4830)();

	i8 v4831 = (i8)(intptr_t)(ws+4129);
	i1 v4832 = *(i1*)(intptr_t)v4831;
	i8 v4833 = (i8)(intptr_t)(ws+4136);
	i8 v4834 = *(i8*)(intptr_t)v4833;
	i1 v4835 = *(i1*)(intptr_t)v4834;
	i1 v4836 = ~v4835;
	i1 v4837 = v4832&v4836;
	i8 v4838 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4838 = v4837;

	i1 v4839 = (i1)+0;
	i8 v4840 = (i8)(intptr_t)(ws+4136);
	i8 v4841 = *(i8*)(intptr_t)v4840;
	*(i1*)(intptr_t)v4841 = v4839;

	goto c02_030c;

c02_0320:;

c02_031c:;

	i8 v4842 = (i8)(intptr_t)(ws+4120);
	i8 v4843 = *(i8*)(intptr_t)v4842;
	i8 v4844 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4844 = v4843;

	i1 v4845 = (i1)+4;
	i8 v4846 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4846 = v4845;

c02_0321:;

	i8 v4847 = (i8)(intptr_t)(ws+4144);
	i1 v4848 = *(i1*)(intptr_t)v4847;
	i1 v4849 = (i1)+0;
	if (v4848==v4849) goto c02_0326; else goto c02_0325;

c02_0325:;

	i8 v4850 = (i8)(intptr_t)(ws+4136);
	i8 v4851 = *(i8*)(intptr_t)v4850;
	i1 v4852 = *(i1*)(intptr_t)v4851;
	i1 v4853 = (i1)+0;
	if (v4852==v4853) goto c02_032f; else goto c02_0331;

c02_0331:;

	i8 v4854 = (i8)(intptr_t)(ws+4136);
	i8 v4855 = *(i8*)(intptr_t)v4854;
	i8 v4856 = v4855+(+1);
	i1 v4857 = *(i1*)(intptr_t)v4856;
	i1 v4858 = (i1)+0;
	if (v4857==v4858) goto c02_032f; else goto c02_0330;

c02_0330:;

	i8 v4859 = (i8)(intptr_t)(ws+4136);
	i8 v4860 = *(i8*)(intptr_t)v4859;
	i8 v4861 = v4860+(+1);
	i1 v4862 = *(i1*)(intptr_t)v4861;
	i8 v4863 = (i8)(intptr_t)(ws+4129);
	i1 v4864 = *(i1*)(intptr_t)v4863;
	i1 v4865 = v4862&v4864;
	i1 v4866 = (i1)+0;
	if (v4865==v4866) goto c02_032e; else goto c02_032f;

c02_032e:;

	goto c02_0326;

c02_032f:;

c02_0327:;

	i8 v4867 = (i8)(intptr_t)(ws+4136);
	i8 v4868 = *(i8*)(intptr_t)v4867;
	i8 v4869 = v4868+(+2);
	i8 v4870 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4870 = v4869;

	i8 v4871 = (i8)(intptr_t)(ws+4144);
	i1 v4872 = *(i1*)(intptr_t)v4871;
	i1 v4873 = v4872+(-1);
	i8 v4874 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4874 = v4873;

	goto c02_0321;

c02_0326:;

	i8 v4875 = (i8)(intptr_t)(ws+4144);
	i1 v4876 = *(i1*)(intptr_t)v4875;
	i1 v4877 = (i1)+0;
	if (v4876==v4877) goto c02_0336; else goto c02_0335;

c02_0335:;

	i8 v4878 = (i8)(intptr_t)(ws+4136);
	i8 v4879 = *(i8*)(intptr_t)v4878;
	i1 v4880 = *(i1*)(intptr_t)v4879;
	*(i1*)(intptr_t)(ws+4152) = v4880;
	i8 v4881 = (i8)(intptr_t)(ws+4136);
	i8 v4882 = *(i8*)(intptr_t)v4881;
	i8 v4883 = v4882+(+1);
	i1 v4884 = *(i1*)(intptr_t)v4883;
	*(i1*)(intptr_t)(ws+4153) = v4884;
	i8 v4885 = (i8)(intptr_t)(f166_ArchEmitMove);

	((void(*)(void))(intptr_t)v4885)();

	i8 v4886 = (i8)(intptr_t)(ws+4129);
	i1 v4887 = *(i1*)(intptr_t)v4886;
	i8 v4888 = (i8)(intptr_t)(ws+4136);
	i8 v4889 = *(i8*)(intptr_t)v4888;
	i1 v4890 = *(i1*)(intptr_t)v4889;
	i1 v4891 = ~v4890;
	i1 v4892 = v4887&v4891;
	i8 v4893 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4893 = v4892;

	i8 v4894 = (i8)(intptr_t)(ws+4128);
	i1 v4895 = *(i1*)(intptr_t)v4894;
	i8 v4896 = (i8)(intptr_t)(ws+4136);
	i8 v4897 = *(i8*)(intptr_t)v4896;
	i8 v4898 = v4897+(+1);
	i1 v4899 = *(i1*)(intptr_t)v4898;
	i1 v4900 = ~v4899;
	i1 v4901 = v4895&v4900;
	i8 v4902 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4902 = v4901;

	i1 v4903 = (i1)+0;
	i8 v4904 = (i8)(intptr_t)(ws+4136);
	i8 v4905 = *(i8*)(intptr_t)v4904;
	*(i1*)(intptr_t)v4905 = v4903;

	i1 v4906 = (i1)+0;
	i8 v4907 = (i8)(intptr_t)(ws+4136);
	i8 v4908 = *(i8*)(intptr_t)v4907;
	i8 v4909 = v4908+(+1);
	*(i1*)(intptr_t)v4909 = v4906;

	goto c02_030c;

c02_0336:;

c02_0332:;

	i8 v4910 = (i8)(intptr_t)(ws+4120);
	i8 v4911 = *(i8*)(intptr_t)v4910;
	i8 v4912 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4912 = v4911;

	i1 v4913 = (i1)+4;
	i8 v4914 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4914 = v4913;

c02_0337:;

	i8 v4915 = (i8)(intptr_t)(ws+4144);
	i1 v4916 = *(i1*)(intptr_t)v4915;
	i1 v4917 = (i1)+0;
	if (v4916==v4917) goto c02_033c; else goto c02_033b;

c02_033b:;

	i8 v4918 = (i8)(intptr_t)(ws+4136);
	i8 v4919 = *(i8*)(intptr_t)v4918;
	i1 v4920 = *(i1*)(intptr_t)v4919;
	i1 v4921 = (i1)+0;
	if (v4920==v4921) goto c02_0344; else goto c02_0343;

c02_0344:;

	i8 v4922 = (i8)(intptr_t)(ws+4136);
	i8 v4923 = *(i8*)(intptr_t)v4922;
	i8 v4924 = v4923+(+1);
	i1 v4925 = *(i1*)(intptr_t)v4924;
	i1 v4926 = (i1)+0;
	if (v4925==v4926) goto c02_0343; else goto c02_0342;

c02_0342:;

	goto c02_033c;

c02_0343:;

c02_033d:;

	i8 v4927 = (i8)(intptr_t)(ws+4136);
	i8 v4928 = *(i8*)(intptr_t)v4927;
	i8 v4929 = v4928+(+2);
	i8 v4930 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4930 = v4929;

	i8 v4931 = (i8)(intptr_t)(ws+4144);
	i1 v4932 = *(i1*)(intptr_t)v4931;
	i1 v4933 = v4932+(-1);
	i8 v4934 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4934 = v4933;

	goto c02_0337;

c02_033c:;

	i8 v4935 = (i8)(intptr_t)(ws+4144);
	i1 v4936 = *(i1*)(intptr_t)v4935;
	i1 v4937 = (i1)+0;
	if (v4936==v4937) goto c02_0349; else goto c02_0348;

c02_0348:;

	i1 v4938 = (i1)+0;
	*(i1*)(intptr_t)(ws+4152) = v4938;
	i8 v4939 = (i8)(intptr_t)(ws+4136);
	i8 v4940 = *(i8*)(intptr_t)v4939;
	i8 v4941 = v4940+(+1);
	i1 v4942 = *(i1*)(intptr_t)v4941;
	*(i1*)(intptr_t)(ws+4153) = v4942;
	i8 v4943 = (i8)(intptr_t)(f166_ArchEmitMove);

	((void(*)(void))(intptr_t)v4943)();

	i8 v4944 = (i8)(intptr_t)(ws+4128);
	i1 v4945 = *(i1*)(intptr_t)v4944;
	i8 v4946 = (i8)(intptr_t)(ws+4136);
	i8 v4947 = *(i8*)(intptr_t)v4946;
	i8 v4948 = v4947+(+1);
	i1 v4949 = *(i1*)(intptr_t)v4948;
	i1 v4950 = ~v4949;
	i1 v4951 = v4945&v4950;
	i8 v4952 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4952 = v4951;

	i1 v4953 = (i1)+0;
	i8 v4954 = (i8)(intptr_t)(ws+4136);
	i8 v4955 = *(i8*)(intptr_t)v4954;
	i8 v4956 = v4955+(+1);
	*(i1*)(intptr_t)v4956 = v4953;

	goto c02_030c;

c02_0349:;

c02_0345:;

	i8 v4957 = (i8)(intptr_t)(ws+4120);
	i8 v4958 = *(i8*)(intptr_t)v4957;
	i8 v4959 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4959 = v4958;

	i1 v4960 = (i1)+4;
	i8 v4961 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4961 = v4960;

c02_034a:;

	i8 v4962 = (i8)(intptr_t)(ws+4144);
	i1 v4963 = *(i1*)(intptr_t)v4962;
	i1 v4964 = (i1)+0;
	if (v4963==v4964) goto c02_034f; else goto c02_034e;

c02_034e:;

	i8 v4965 = (i8)(intptr_t)(ws+4136);
	i8 v4966 = *(i8*)(intptr_t)v4965;
	i1 v4967 = *(i1*)(intptr_t)v4966;
	i1 v4968 = (i1)+0;
	if (v4967==v4968) goto c02_0356; else goto c02_0357;

c02_0357:;

	i8 v4969 = (i8)(intptr_t)(ws+4136);
	i8 v4970 = *(i8*)(intptr_t)v4969;
	i8 v4971 = v4970+(+1);
	i1 v4972 = *(i1*)(intptr_t)v4971;
	i1 v4973 = (i1)+0;
	if (v4972==v4973) goto c02_0356; else goto c02_0355;

c02_0355:;

	goto c02_034f;

c02_0356:;

c02_0350:;

	i8 v4974 = (i8)(intptr_t)(ws+4136);
	i8 v4975 = *(i8*)(intptr_t)v4974;
	i8 v4976 = v4975+(+2);
	i8 v4977 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v4977 = v4976;

	i8 v4978 = (i8)(intptr_t)(ws+4144);
	i1 v4979 = *(i1*)(intptr_t)v4978;
	i1 v4980 = v4979+(-1);
	i8 v4981 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v4981 = v4980;

	goto c02_034a;

c02_034f:;

	i8 v4982 = (i8)(intptr_t)(ws+4144);
	i1 v4983 = *(i1*)(intptr_t)v4982;
	i1 v4984 = (i1)+0;
	if (v4983==v4984) goto c02_035c; else goto c02_035b;

c02_035b:;

	i8 v4985 = (i8)(intptr_t)(ws+4136);
	i8 v4986 = *(i8*)(intptr_t)v4985;
	i1 v4987 = *(i1*)(intptr_t)v4986;
	*(i1*)(intptr_t)(ws+4152) = v4987;
	i1 v4988 = (i1)+0;
	*(i1*)(intptr_t)(ws+4153) = v4988;
	i8 v4989 = (i8)(intptr_t)(f166_ArchEmitMove);

	((void(*)(void))(intptr_t)v4989)();

	i8 v4990 = (i8)(intptr_t)(ws+4129);
	i1 v4991 = *(i1*)(intptr_t)v4990;
	i8 v4992 = (i8)(intptr_t)(ws+4136);
	i8 v4993 = *(i8*)(intptr_t)v4992;
	i1 v4994 = *(i1*)(intptr_t)v4993;
	i1 v4995 = ~v4994;
	i1 v4996 = v4991&v4995;
	i8 v4997 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v4997 = v4996;

	i1 v4998 = (i1)+0;
	i8 v4999 = (i8)(intptr_t)(ws+4136);
	i8 v5000 = *(i8*)(intptr_t)v4999;
	*(i1*)(intptr_t)v5000 = v4998;

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
void f381_PrintNodes(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v5001 = (i8)(intptr_t)(ws+184);
	i8 v5002 = *(i8*)(intptr_t)v5001;
	i8 v5003 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5003 = v5002;

	i8 v5004 = (i8)(intptr_t)(ws+4176);
	i8 v5005 = *(i8*)(intptr_t)v5004;
	*(i8*)(intptr_t)(ws+4232) = v5005;
	i8 v5006 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v5006)();

c02_035d:;

	i8 v5007 = (i8)(intptr_t)(ws+184);
	i8 v5008 = *(i8*)(intptr_t)v5007;
	i8 v5009 = (i8)(intptr_t)(ws+4184);
	i8 v5010 = *(i8*)(intptr_t)v5009;
	if (v5008==v5010) goto c02_0362; else goto c02_0361;

c02_0361:;

	i8 v5011 = (i8)(intptr_t)(f63_NextNode);

	((void(*)(void))(intptr_t)v5011)();

	i8 v5012 = *(i8*)(intptr_t)(ws+4216);
	i8 v5013 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5013 = v5012;

	i8 v5014 = (i8)(intptr_t)(ws+4192);
	i8 v5015 = *(i8*)(intptr_t)v5014;
	i8 v5016 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5016 = v5015;

	i8 v5017 = (i8)(intptr_t)(ws+4200);
	i8 v5018 = *(i8*)(intptr_t)v5017;
	i8 v5019 = (i8)+0;
	if (v5018==v5019) goto c02_0366; else goto c02_0367;

c02_0366:;

	goto c02_0362;

c02_0367:;

c02_0363:;

	i8 v5020 = (i8)(intptr_t)(ws+4200);
	i8 v5021 = *(i8*)(intptr_t)v5020;
	i4 v5022 = v5021;
	*(i4*)(intptr_t)(ws+4288) = v5022;
	i8 v5023 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5023)();

	i1 v5024 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5024;
	i8 v5025 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5025)();

	i8 v5026 = (i8)(intptr_t)(ws+4200);
	i8 v5027 = *(i8*)(intptr_t)v5026;
	i8 v5028 = v5027+(+256);
	i1 v5029 = *(i1*)(intptr_t)v5028;
	*(i1*)(intptr_t)(ws+4232) = v5029;
	i8 v5030 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v5030)();

	i1 v5031 = (i1)+61;
	*(i1*)(intptr_t)(ws+4304) = v5031;
	i8 v5032 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5032)();

	i8 v5033 = (i8)(intptr_t)(ws+4200);
	i8 v5034 = *(i8*)(intptr_t)v5033;
	i8 v5035 = v5034+(+256);
	i1 v5036 = *(i1*)(intptr_t)v5035;
	*(i1*)(intptr_t)(ws+4216) = v5036;
	i8 v5037 = (i8)(intptr_t)(f78_MidcodeName);

	((void(*)(void))(intptr_t)v5037)();

	i8 v5038 = *(i8*)(intptr_t)(ws+4224);
	i8 v5039 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v5039 = v5038;

	i8 v5040 = (i8)(intptr_t)(ws+4208);
	i8 v5041 = *(i8*)(intptr_t)v5040;
	*(i8*)(intptr_t)(ws+4288) = v5041;
	i8 v5042 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v5042)();

	i1 v5043 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5043;
	i8 v5044 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5044)();

	i8 v5045 = (i8)(intptr_t)(ws+4200);
	i8 v5046 = *(i8*)(intptr_t)v5045;
	i8 v5047 = v5046+(+56);
	i1 v5048 = *(i1*)(intptr_t)v5047;
	i4 v5049 = v5048;
	*(i4*)(intptr_t)(ws+4288) = v5049;
	i8 v5050 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5050)();

	i1 v5051 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5051;
	i8 v5052 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5052)();

	i8 v5053 = (i8)(intptr_t)(ws+4200);
	i8 v5054 = *(i8*)(intptr_t)v5053;
	i8 v5055 = v5054+(+57);
	i1 v5056 = *(i1*)(intptr_t)v5055;
	i4 v5057 = v5056;
	*(i4*)(intptr_t)(ws+4288) = v5057;
	i8 v5058 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5058)();

	i1 v5059 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5059;
	i8 v5060 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5060)();

	i8 v5061 = (i8)(intptr_t)(ws+4200);
	i8 v5062 = *(i8*)(intptr_t)v5061;
	i8 v5063 = v5062+(+24);
	i8 v5064 = *(i8*)(intptr_t)v5063;
	i4 v5065 = v5064;
	*(i4*)(intptr_t)(ws+4288) = v5065;
	i8 v5066 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5066)();

	i1 v5067 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5067;
	i8 v5068 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5068)();

	i8 v5069 = (i8)(intptr_t)(ws+4200);
	i8 v5070 = *(i8*)(intptr_t)v5069;
	i8 v5071 = v5070+(+32);
	i8 v5072 = *(i8*)(intptr_t)v5071;
	i4 v5073 = v5072;
	*(i4*)(intptr_t)(ws+4288) = v5073;
	i8 v5074 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5074)();

	i8 v5075 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v5075)();

	goto c02_035d;

c02_0362:;

}
	void f372_IsStackedRegister(void);
	void f372_IsStackedRegister(void);
	void f31_MemCopy(void);

// IsSimpleValue workspace at ws+4216 length ws+33
void f385_IsSimpleValue(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v5197 = (i1)+0;
	i8 v5198 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5198 = v5197;

	i8 v5199 = (i8)(intptr_t)(ws+4216);
	i8 v5200 = *(i8*)(intptr_t)v5199;
	i8 v5201 = v5200+(+48);
	i1 v5202 = *(i1*)(intptr_t)v5201;
	*(i1*)(intptr_t)(ws+4256) = v5202;
	i8 v5203 = (i8)(intptr_t)(f372_IsStackedRegister);

	((void(*)(void))(intptr_t)v5203)();

	i1 v5204 = *(i1*)(intptr_t)(ws+4257);
	i8 v5205 = (i8)(intptr_t)(ws+4233);
	*(i1*)(intptr_t)v5205 = v5204;

	i8 v5206 = (i8)(intptr_t)(ws+4233);
	i1 v5207 = *(i1*)(intptr_t)v5206;
	i1 v5208 = (i1)+0;
	if (v5207==v5208) goto c02_0393; else goto c02_0394;

c02_0393:;

	i8 v5209 = (i8)(intptr_t)(ws+4216);
	i8 v5210 = *(i8*)(intptr_t)v5209;
	i8 v5211 = v5210+(+16);
	i8 v5212 = *(i8*)(intptr_t)v5211;
	i8 v5213 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v5213 = v5212;

	i8 v5214 = (i8)(intptr_t)(ws+4240);
	i8 v5215 = *(i8*)(intptr_t)v5214;
	i8 v5216 = v5215+(+256);
	i1 v5217 = *(i1*)(intptr_t)v5216;
	i1 v5218 = (i1)+24;
	if (v5217==v5218) goto c02_0398; else goto c02_0399;

c02_0398:;

	i8 v5219 = (i8)(intptr_t)(ws+4240);
	i8 v5220 = *(i8*)(intptr_t)v5219;
	i8 v5221 = v5220+(+24);
	i8 v5222 = *(i8*)(intptr_t)v5221;
	i8 v5223 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v5223 = v5222;

c02_0399:;

c02_0395:;

	i8 v5224 = (i8)(intptr_t)(ws+4240);
	i8 v5225 = *(i8*)(intptr_t)v5224;
	i8 v5226 = v5225+(+57);
	i1 v5227 = *(i1*)(intptr_t)v5226;
	*(i1*)(intptr_t)(ws+4256) = v5227;
	i8 v5228 = (i8)(intptr_t)(f372_IsStackedRegister);

	((void(*)(void))(intptr_t)v5228)();

	i1 v5229 = *(i1*)(intptr_t)(ws+4257);
	i8 v5230 = (i8)(intptr_t)(ws+4248);
	*(i1*)(intptr_t)v5230 = v5229;

	i8 v5231 = (i8)(intptr_t)(ws+4240);
	i8 v5232 = *(i8*)(intptr_t)v5231;
	i8 v5233 = v5232+(+24);
	i8 v5234 = *(i8*)(intptr_t)v5233;
	i8 v5235 = (i8)+0;
	if (v5234==v5235) goto c02_03a0; else goto c02_03a1;

c02_03a1:;

	i8 v5236 = (i8)(intptr_t)(ws+4248);
	i1 v5237 = *(i1*)(intptr_t)v5236;
	i1 v5238 = (i1)+0;
	if (v5237==v5238) goto c02_039f; else goto c02_03a0;

c02_039f:;

	return;

c02_03a0:;

c02_039a:;

	i8 v5239 = (i8)(intptr_t)(ws+4240);
	i8 v5240 = *(i8*)(intptr_t)v5239;
	i8 v5241 = v5240+(+256);
	i1 v5242 = *(i1*)(intptr_t)v5241;
	i1 v5243 = (i1)+44;
	if (v5242==v5243) goto c02_03a5; else goto c02_03a6;

c02_03a5:;

	i8 v5244 = (i8)(intptr_t)(ws+4240);
	i8 v5245 = *(i8*)(intptr_t)v5244;
	*(i8*)(intptr_t)(ws+4264) = v5245;
	i8 v5246 = (i8)+18;
	*(i8*)(intptr_t)(ws+4272) = v5246;
	i8 v5247 = (i8)(intptr_t)(ws+4224);
	i8 v5248 = *(i8*)(intptr_t)v5247;
	*(i8*)(intptr_t)(ws+4280) = v5248;
	i8 v5249 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v5249)();

	i1 v5250 = (i1)+44;
	i8 v5251 = (i8)(intptr_t)(ws+4224);
	i8 v5252 = *(i8*)(intptr_t)v5251;
	i8 v5253 = v5252+(+19);
	*(i1*)(intptr_t)v5253 = v5250;

	i1 v5254 = (i1)+1;
	i8 v5255 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5255 = v5254;

	goto c02_03a2;

c02_03a6:;

	i8 v5256 = (i8)(intptr_t)(ws+4240);
	i8 v5257 = *(i8*)(intptr_t)v5256;
	i8 v5258 = v5257+(+256);
	i1 v5259 = *(i1*)(intptr_t)v5258;
	i1 v5260 = (i1)+42;
	if (v5259==v5260) goto c02_03a9; else goto c02_03aa;

c02_03a9:;

	i8 v5261 = (i8)(intptr_t)(ws+4240);
	i8 v5262 = *(i8*)(intptr_t)v5261;
	i4 v5263 = *(i4*)(intptr_t)v5262;
	i8 v5264 = (i8)(intptr_t)(ws+4224);
	i8 v5265 = *(i8*)(intptr_t)v5264;
	*(i4*)(intptr_t)v5265 = v5263;

	i1 v5266 = (i1)+42;
	i8 v5267 = (i8)(intptr_t)(ws+4224);
	i8 v5268 = *(i8*)(intptr_t)v5267;
	i8 v5269 = v5268+(+19);
	*(i1*)(intptr_t)v5269 = v5266;

	i1 v5270 = (i1)+1;
	i8 v5271 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5271 = v5270;

c02_03aa:;

c02_03a2:;

c02_0394:;

c02_0390:;

}

// check_deref workspace at ws+4240 length ws+0
void f387_check_deref(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v5282 = (i8)(intptr_t)(ws+4216);
	i8 v5283 = *(i8*)(intptr_t)v5282;
	i8 v5284 = *(i8*)(intptr_t)v5283;
	i8 v5285 = (i8)(intptr_t)(ws+4224);
	i8 v5286 = *(i8*)(intptr_t)v5285;
	i8 v5287 = *(i8*)(intptr_t)v5286;
	if (v5284==v5287) goto c02_03ba; else goto c02_03b8;

c02_03ba:;

	i8 v5288 = (i8)(intptr_t)(ws+4216);
	i8 v5289 = *(i8*)(intptr_t)v5288;
	i8 v5290 = v5289+(+12);
	i2 v5291 = *(i2*)(intptr_t)v5290;
	i8 v5292 = (i8)(intptr_t)(ws+4216);
	i8 v5293 = *(i8*)(intptr_t)v5292;
	i8 v5294 = v5293+(+16);
	i2 v5295 = *(i2*)(intptr_t)v5294;
	i2 v5296 = v5291+v5295;
	i8 v5297 = (i8)(intptr_t)(ws+4224);
	i8 v5298 = *(i8*)(intptr_t)v5297;
	i8 v5299 = v5298+(+12);
	i2 v5300 = *(i2*)(intptr_t)v5299;
	i8 v5301 = (i8)(intptr_t)(ws+4224);
	i8 v5302 = *(i8*)(intptr_t)v5301;
	i8 v5303 = v5302+(+16);
	i2 v5304 = *(i2*)(intptr_t)v5303;
	i2 v5305 = v5300+v5304;
	if (v5296==v5305) goto c02_03b9; else goto c02_03b8;

c02_03b9:;

	i8 v5306 = (i8)(intptr_t)(ws+4216);
	i8 v5307 = *(i8*)(intptr_t)v5306;
	i8 v5308 = v5307+(+10);
	i1 v5309 = *(i1*)(intptr_t)v5308;
	i8 v5310 = (i8)(intptr_t)(ws+4224);
	i8 v5311 = *(i8*)(intptr_t)v5310;
	i8 v5312 = v5311+(+10);
	i1 v5313 = *(i1*)(intptr_t)v5312;
	if (v5309==v5313) goto c02_03b7; else goto c02_03b8;

c02_03b7:;

	i1 v5314 = (i1)+1;
	i8 v5315 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5315 = v5314;

c02_03b8:;

c02_03b0:;

}
	void f387_check_deref(void);
	void f387_check_deref(void);
	void f387_check_deref(void);
	void f387_check_deref(void);
	void f387_check_deref(void);

// SimpleValuesMatch workspace at ws+4216 length ws+17
void f386_SimpleValuesMatch(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v5272 = (i1)+0;
	i8 v5273 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5273 = v5272;

	i8 v5274 = (i8)(intptr_t)(ws+4216);
	i8 v5275 = *(i8*)(intptr_t)v5274;
	i8 v5276 = v5275+(+19);
	i1 v5277 = *(i1*)(intptr_t)v5276;
	i8 v5278 = (i8)(intptr_t)(ws+4224);
	i8 v5279 = *(i8*)(intptr_t)v5278;
	i8 v5280 = v5279+(+19);
	i1 v5281 = *(i1*)(intptr_t)v5280;
	if (v5277==v5281) goto c02_03af; else goto c02_03ae;

c02_03ae:;

	return;

c02_03af:;

c02_03ab:;


	i8 v5316 = (i8)(intptr_t)(ws+4216);
	i8 v5317 = *(i8*)(intptr_t)v5316;
	i8 v5318 = v5317+(+19);
	i1 v5319 = *(i1*)(intptr_t)v5318;

	if (v5319 != +47) goto c02_03bc;

	i8 v5320 = (i8)(intptr_t)(f387_check_deref);

	((void(*)(void))(intptr_t)v5320)();

	goto c02_03bb;

c02_03bc:;

	if (v5319 != +48) goto c02_03bd;

	i8 v5321 = (i8)(intptr_t)(f387_check_deref);

	((void(*)(void))(intptr_t)v5321)();

	goto c02_03bb;

c02_03bd:;

	if (v5319 != +49) goto c02_03be;

	i8 v5322 = (i8)(intptr_t)(f387_check_deref);

	((void(*)(void))(intptr_t)v5322)();

	goto c02_03bb;

c02_03be:;

	if (v5319 != +50) goto c02_03bf;

	i8 v5323 = (i8)(intptr_t)(f387_check_deref);

	((void(*)(void))(intptr_t)v5323)();

	goto c02_03bb;

c02_03bf:;

	if (v5319 != +44) goto c02_03c0;

	i8 v5324 = (i8)(intptr_t)(f387_check_deref);

	((void(*)(void))(intptr_t)v5324)();

	goto c02_03bb;

c02_03c0:;

	if (v5319 != +42) goto c02_03c1;

	i8 v5325 = (i8)(intptr_t)(ws+4216);
	i8 v5326 = *(i8*)(intptr_t)v5325;
	i4 v5327 = *(i4*)(intptr_t)v5326;
	i8 v5328 = (i8)(intptr_t)(ws+4224);
	i8 v5329 = *(i8*)(intptr_t)v5328;
	i4 v5330 = *(i4*)(intptr_t)v5329;
	if (v5327==v5330) goto c02_03c5; else goto c02_03c6;

c02_03c5:;

	i1 v5331 = (i1)+1;
	i8 v5332 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5332 = v5331;

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
	void f371_PopulateMatchBuffer(void);

// RewindRulePointers workspace at ws+4176 length ws+0
void f390_RewindRulePointers(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v5380 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)(ws+4176) = v5380;
	i8 v5381 = (i8)+4;
	*(i8*)(intptr_t)(ws+4184) = v5381;
	i8 v5382 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v5382)();

	i8 v5383 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)(ws+4176) = v5383;
	i8 v5384 = (i8)+32;
	*(i8*)(intptr_t)(ws+4184) = v5384;
	i8 v5385 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v5385)();

	i8 v5386 = (i8)(intptr_t)(ws+4088);
	i8 v5387 = *(i8*)(intptr_t)v5386;
	i8 v5388 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v5388 = v5387;

	i8 v5389 = (i8)(intptr_t)(ws+4072);
	i8 v5390 = *(i8*)(intptr_t)v5389;
	*(i8*)(intptr_t)(ws+4176) = v5390;
	i8 v5391 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)(ws+4184) = v5391;
	i8 v5392 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)(ws+4192) = v5392;
	i8 v5393 = (i8)(intptr_t)(f371_PopulateMatchBuffer);

	((void(*)(void))(intptr_t)v5393)();

	i1 v5394 = (i1)+255;
	i8 v5395 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v5395 = v5394;

	i8 v5396 = (i8)(intptr_t)((i1*)f3___main_s02aa);
	i8 v5397 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5397 = v5396;

	i8 v5398 = (i8)(intptr_t)((i1*)f3___main_s02ab);
	i8 v5399 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5399 = v5398;

	i8 v5400 = (i8)(intptr_t)((i1*)f3___main_s02ac-7);
	i8 v5401 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v5401 = v5400;

}
	void f189_MatchPredicate(void);

// TestRule workspace at ws+4176 length ws+28
void f391_TestRule(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v5402 = (i1)+0;
	i8 v5403 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5403 = v5402;

	i8 v5404 = (i8)(intptr_t)(ws+4104);
	i8 v5405 = *(i8*)(intptr_t)v5404;
	i8 v5406 = v5405+(+1);
	i1 v5407 = *(i1*)(intptr_t)v5406;
	i1 v5408 = (i1)+0;
	if (v5407==v5408) goto c02_03d6; else goto c02_03d5;

c02_03d5:;

	i8 v5409 = (i8)(intptr_t)(ws+4088);
	i8 v5410 = *(i8*)(intptr_t)v5409;
	i8 v5411 = v5410+(+56);
	i1 v5412 = *(i1*)(intptr_t)v5411;
	i8 v5413 = (i8)(intptr_t)(ws+4104);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = v5414+(+1);
	i1 v5416 = *(i1*)(intptr_t)v5415;
	i1 v5417 = v5412&v5416;
	i1 v5418 = (i1)+0;
	if (v5417==v5418) goto c02_03da; else goto c02_03db;

c02_03da:;

	return;

c02_03db:;

c02_03d7:;

	goto c02_03d2;

c02_03d6:;

	i8 v5419 = (i8)(intptr_t)(ws+4088);
	i8 v5420 = *(i8*)(intptr_t)v5419;
	i8 v5421 = v5420+(+56);
	i1 v5422 = *(i1*)(intptr_t)v5421;
	i1 v5423 = (i1)+0;
	if (v5422==v5423) goto c02_03e0; else goto c02_03df;

c02_03df:;

	return;

c02_03e0:;

c02_03dc:;

c02_03d2:;

	i8 v5424 = (i8)(intptr_t)(ws+4112);
	i8 v5425 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5425 = v5424;

	i8 v5426 = (i8)(intptr_t)(ws+4152);
	i8 v5427 = *(i8*)(intptr_t)v5426;
	i8 v5428 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5428 = v5427;

	i8 v5429 = (i8)(intptr_t)(ws+4104);
	i8 v5430 = *(i8*)(intptr_t)v5429;
	i8 v5431 = v5430+(+4);
	i1 v5432 = *(i1*)(intptr_t)v5431;
	i8 v5433 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v5433 = v5432;

c02_03e1:;

	i8 v5434 = (i8)(intptr_t)(ws+4200);
	i1 v5435 = *(i1*)(intptr_t)v5434;
	i1 v5436 = (i1)+0;
	if (v5435==v5436) goto c02_03e6; else goto c02_03e5;

c02_03e5:;

	i8 v5437 = (i8)(intptr_t)(ws+4184);
	i8 v5438 = *(i8*)(intptr_t)v5437;
	i1 v5439 = *(i1*)(intptr_t)v5438;
	i8 v5440 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v5440 = v5439;

	i8 v5441 = (i8)(intptr_t)(ws+4184);
	i8 v5442 = *(i8*)(intptr_t)v5441;
	i8 v5443 = v5442+(+1);
	i8 v5444 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5444 = v5443;

	i8 v5445 = (i8)(intptr_t)(ws+4200);
	i1 v5446 = *(i1*)(intptr_t)v5445;
	i1 v5447 = v5446&(+1);
	i1 v5448 = (i1)+0;
	if (v5447==v5448) goto c02_03eb; else goto c02_03ea;

c02_03ea:;

	i8 v5449 = (i8)(intptr_t)(ws+4192);
	i8 v5450 = *(i8*)(intptr_t)v5449;
	i1 v5451 = *(i1*)(intptr_t)v5450;
	i8 v5452 = (i8)(intptr_t)(ws+4202);
	*(i1*)(intptr_t)v5452 = v5451;

	i8 v5453 = (i8)(intptr_t)(ws+4192);
	i8 v5454 = *(i8*)(intptr_t)v5453;
	i8 v5455 = v5454+(+1);
	i8 v5456 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5456 = v5455;

	i8 v5457 = (i8)(intptr_t)(ws+4201);
	i1 v5458 = *(i1*)(intptr_t)v5457;
	i8 v5459 = (i8)(intptr_t)(ws+4202);
	i1 v5460 = *(i1*)(intptr_t)v5459;
	if (v5458==v5460) goto c02_03f0; else goto c02_03ef;

c02_03ef:;

	return;

c02_03f0:;

c02_03ec:;

c02_03eb:;

c02_03e7:;

	i8 v5461 = (i8)(intptr_t)(ws+4200);
	i1 v5462 = *(i1*)(intptr_t)v5461;
	i1 v5463 = (i1)+1;
	i1 v5464 = ((i1)v5462)>>v5463;
	i8 v5465 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v5465 = v5464;

	goto c02_03e1;

c02_03e6:;

	i8 v5466 = (i8)(intptr_t)(ws+4096);
	i1 v5467 = *(i1*)(intptr_t)v5466;
	*(i1*)(intptr_t)(ws+4208) = v5467;
	i8 v5468 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)(ws+4216) = v5468;
	i8 v5469 = (i8)(intptr_t)(f189_MatchPredicate);

	((void(*)(void))(intptr_t)v5469)();

	i1 v5470 = *(i1*)(intptr_t)(ws+4224);
	i8 v5471 = (i8)(intptr_t)(ws+4203);
	*(i1*)(intptr_t)v5471 = v5470;

	i8 v5472 = (i8)(intptr_t)(ws+4104);
	i8 v5473 = *(i8*)(intptr_t)v5472;
	i1 v5474 = *(i1*)(intptr_t)v5473;
	i1 v5475 = v5474&(+1);
	i1 v5476 = (i1)+0;
	if (v5475==v5476) goto c02_03f7; else goto c02_03f8;

c02_03f8:;

	i8 v5477 = (i8)(intptr_t)(ws+4203);
	i1 v5478 = *(i1*)(intptr_t)v5477;
	i1 v5479 = (i1)+0;
	if (v5478==v5479) goto c02_03f6; else goto c02_03f7;

c02_03f6:;

	return;

c02_03f7:;

c02_03f1:;

	i1 v5480 = (i1)+1;
	i8 v5481 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5481 = v5480;

}
	void f390_RewindRulePointers(void);
	void f77_AllocateNewNode(void);

// ConvertNodeToFallback workspace at ws+4176 length ws+33
void f392_ConvertNodeToFallback(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v5504 = (i8)(intptr_t)(ws+4088);
	i8 v5505 = *(i8*)(intptr_t)v5504;
	i8 v5506 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v5506 = v5505;

	i1 v5507 = (i1)+24;
	*(i1*)(intptr_t)(ws+4216) = v5507;
	i8 v5508 = (i8)(intptr_t)(f77_AllocateNewNode);

	((void(*)(void))(intptr_t)v5508)();

	i8 v5509 = *(i8*)(intptr_t)(ws+4224);
	i8 v5510 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5510 = v5509;

	i8 v5511 = (i8)(intptr_t)(ws+4184);
	i8 v5512 = *(i8*)(intptr_t)v5511;
	i8 v5513 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v5513 = v5512;

	i8 v5514 = (i8)(intptr_t)(ws+4176);
	i8 v5515 = *(i8*)(intptr_t)v5514;
	i8 v5516 = (i8)(intptr_t)(ws+4088);
	i8 v5517 = *(i8*)(intptr_t)v5516;
	i8 v5518 = v5517+(+24);
	*(i8*)(intptr_t)v5518 = v5515;

	i8 v5519 = (i8)(intptr_t)(ws+4176);
	i8 v5520 = *(i8*)(intptr_t)v5519;
	i8 v5521 = v5520+(+48);
	i8 v5522 = *(i8*)(intptr_t)v5521;
	i8 v5523 = (i8)(intptr_t)(ws+4088);
	i8 v5524 = *(i8*)(intptr_t)v5523;
	i8 v5525 = v5524+(+48);
	*(i8*)(intptr_t)v5525 = v5522;

	i8 v5526 = (i8)(intptr_t)(ws+4088);
	i8 v5527 = *(i8*)(intptr_t)v5526;
	i8 v5528 = v5527+(+48);
	i8 v5529 = *(i8*)(intptr_t)v5528;
	i8 v5530 = v5529+(+16);
	i8 v5531 = *(i8*)(intptr_t)v5530;
	i8 v5532 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5532 = v5531;

	i8 v5533 = (i8)(intptr_t)(ws+4176);
	i8 v5534 = *(i8*)(intptr_t)v5533;
	i8 v5535 = v5534+(+56);
	i1 v5536 = *(i1*)(intptr_t)v5535;
	i8 v5537 = (i8)(intptr_t)(ws+4088);
	i8 v5538 = *(i8*)(intptr_t)v5537;
	i8 v5539 = v5538+(+56);
	*(i1*)(intptr_t)v5539 = v5536;

	i8 v5540 = (i8)(intptr_t)(ws+4192);
	i8 v5541 = *(i8*)(intptr_t)v5540;
	i8 v5542 = v5541+(+40);
	i8 v5543 = *(i8*)(intptr_t)v5542;
	i8 v5544 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5544 = v5543;

	i1 v5545 = (i1)+0;
	i8 v5546 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5546 = v5545;

c02_0408:;

	i8 v5547 = (i8)(intptr_t)(ws+4208);
	i1 v5548 = *(i1*)(intptr_t)v5547;
	i1 v5549 = (i1)+4;
	if (v5548==v5549) goto c02_040d; else goto c02_040c;

c02_040c:;

	i8 v5550 = (i8)(intptr_t)(ws+4200);
	i8 v5551 = *(i8*)(intptr_t)v5550;
	i8 v5552 = v5551+(+16);
	i8 v5553 = (i8)(intptr_t)(ws+4208);
	i1 v5554 = *(i1*)(intptr_t)v5553;
	i8 v5555 = v5554;
	i1 v5556 = (i1)+3;
	i8 v5557 = ((i8)v5555)<<v5556;
	i8 v5558 = v5552+v5557;
	i8 v5559 = *(i8*)(intptr_t)v5558;
	i8 v5560 = (i8)(intptr_t)(ws+4176);
	i8 v5561 = *(i8*)(intptr_t)v5560;
	if (v5559==v5561) goto c02_0411; else goto c02_0412;

c02_0411:;

	i8 v5562 = (i8)(intptr_t)(ws+4088);
	i8 v5563 = *(i8*)(intptr_t)v5562;
	i8 v5564 = (i8)(intptr_t)(ws+4200);
	i8 v5565 = *(i8*)(intptr_t)v5564;
	i8 v5566 = v5565+(+16);
	i8 v5567 = (i8)(intptr_t)(ws+4208);
	i1 v5568 = *(i1*)(intptr_t)v5567;
	i8 v5569 = v5568;
	i1 v5570 = (i1)+3;
	i8 v5571 = ((i8)v5569)<<v5570;
	i8 v5572 = v5566+v5571;
	*(i8*)(intptr_t)v5572 = v5563;

c02_0412:;

c02_040e:;

	i8 v5573 = (i8)(intptr_t)(ws+4208);
	i1 v5574 = *(i1*)(intptr_t)v5573;
	i1 v5575 = v5574+(+1);
	i8 v5576 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5576 = v5575;

	goto c02_0408;

c02_040d:;

}
	void f392_ConvertNodeToFallback(void);
	void f390_RewindRulePointers(void);
	void f381_PrintNodes(void);
	void f66_StartError(void);
const i1 c02_s01cb[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
	void f12_print(void);
	void f18_print_i8(void);
	void f9_print_char(void);
const i1 c02_s01cc[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f67_EndError(void);
	void f391_TestRule(void);
	void f61_PushNode(void);

// CopyChildNodes workspace at ws+4176 length ws+16
void f393_CopyChildNodes(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v5679 = (i8)(intptr_t)(ws+4104);
	i8 v5680 = *(i8*)(intptr_t)v5679;
	i8 v5681 = v5680+(+5);
	i1 v5682 = *(i1*)(intptr_t)v5681;
	i8 v5683 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5683 = v5682;

	i8 v5684 = (i8)(intptr_t)(ws+4104);
	i8 v5685 = *(i8*)(intptr_t)v5684;
	i8 v5686 = v5685+(+6);
	i1 v5687 = *(i1*)(intptr_t)v5686;
	i8 v5688 = (i8)(intptr_t)(ws+4177);
	*(i1*)(intptr_t)v5688 = v5687;

	i1 v5689 = (i1)+0;
	i8 v5690 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v5690 = v5689;

c02_0434:;

	i8 v5691 = (i8)(intptr_t)(ws+4032);
	i1 v5692 = *(i1*)(intptr_t)v5691;
	i1 v5693 = (i1)+4;
	if (v5692==v5693) goto c02_0439; else goto c02_0438;

c02_0438:;

	i8 v5694 = (i8)(intptr_t)(ws+4120);
	i8 v5695 = (i8)(intptr_t)(ws+4032);
	i1 v5696 = *(i1*)(intptr_t)v5695;
	i8 v5697 = v5696;
	i1 v5698 = (i1)+3;
	i8 v5699 = ((i8)v5697)<<v5698;
	i8 v5700 = v5694+v5699;
	i8 v5701 = *(i8*)(intptr_t)v5700;
	i8 v5702 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5702 = v5701;

	i8 v5703 = (i8)(intptr_t)(ws+4176);
	i1 v5704 = *(i1*)(intptr_t)v5703;
	i1 v5705 = v5704&(+1);
	i1 v5706 = (i1)+0;
	if (v5705==v5706) goto c02_043e; else goto c02_043d;

c02_043d:;

	i8 v5707 = (i8)(intptr_t)(ws+4184);
	i8 v5708 = *(i8*)(intptr_t)v5707;
	i8 v5709 = (i8)(intptr_t)(ws+4072);
	i8 v5710 = *(i8*)(intptr_t)v5709;
	i8 v5711 = v5710+(+16);
	i8 v5712 = (i8)(intptr_t)(ws+4032);
	i1 v5713 = *(i1*)(intptr_t)v5712;
	i8 v5714 = v5713;
	i1 v5715 = (i1)+3;
	i8 v5716 = ((i8)v5714)<<v5715;
	i8 v5717 = v5711+v5716;
	*(i8*)(intptr_t)v5717 = v5708;

	i8 v5718 = (i8)(intptr_t)(ws+4177);
	i1 v5719 = *(i1*)(intptr_t)v5718;
	i1 v5720 = v5719&(+1);
	i1 v5721 = (i1)+0;
	if (v5720==v5721) goto c02_0443; else goto c02_0442;

c02_0442:;

	i8 v5722 = (i8)(intptr_t)(ws+4184);
	i8 v5723 = *(i8*)(intptr_t)v5722;
	*(i8*)(intptr_t)(ws+4232) = v5723;
	i8 v5724 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v5724)();

	i8 v5725 = (i8)(intptr_t)(ws+4160);
	i8 v5726 = *(i8*)(intptr_t)v5725;
	i1 v5727 = *(i1*)(intptr_t)v5726;
	i8 v5728 = (i8)(intptr_t)(ws+4184);
	i8 v5729 = *(i8*)(intptr_t)v5728;
	i8 v5730 = v5729+(+56);
	*(i1*)(intptr_t)v5730 = v5727;

	i8 v5731 = (i8)(intptr_t)(ws+4160);
	i8 v5732 = *(i8*)(intptr_t)v5731;
	i8 v5733 = v5732+(+1);
	i8 v5734 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5734 = v5733;

	i8 v5735 = (i8)(intptr_t)(ws+4072);
	i8 v5736 = *(i8*)(intptr_t)v5735;
	i8 v5737 = (i8)(intptr_t)(ws+4184);
	i8 v5738 = *(i8*)(intptr_t)v5737;
	i8 v5739 = v5738+(+48);
	*(i8*)(intptr_t)v5739 = v5736;

c02_0443:;

c02_043f:;

c02_043e:;

c02_043a:;

	i8 v5740 = (i8)(intptr_t)(ws+4176);
	i1 v5741 = *(i1*)(intptr_t)v5740;
	i1 v5742 = (i1)+1;
	i1 v5743 = ((i1)v5741)>>v5742;
	i8 v5744 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5744 = v5743;

	i8 v5745 = (i8)(intptr_t)(ws+4177);
	i1 v5746 = *(i1*)(intptr_t)v5745;
	i1 v5747 = (i1)+1;
	i1 v5748 = ((i1)v5746)>>v5747;
	i8 v5749 = (i8)(intptr_t)(ws+4177);
	*(i1*)(intptr_t)v5749 = v5748;

	i8 v5750 = (i8)(intptr_t)(ws+4032);
	i1 v5751 = *(i1*)(intptr_t)v5750;
	i1 v5752 = v5751+(+1);
	i8 v5753 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v5753 = v5752;

	goto c02_0434;

c02_0439:;

	i8 v5754 = (i8)(intptr_t)(ws+4072);
	i8 v5755 = *(i8*)(intptr_t)v5754;
	i8 v5756 = (i8)(intptr_t)(ws+4088);
	i8 v5757 = *(i8*)(intptr_t)v5756;
	i8 v5758 = v5757+(+40);
	*(i8*)(intptr_t)v5758 = v5755;

	i8 v5759 = (i8)(intptr_t)(ws+4088);
	i8 v5760 = *(i8*)(intptr_t)v5759;
	i8 v5761 = (i8)(intptr_t)(ws+4072);
	i8 v5762 = *(i8*)(intptr_t)v5761;
	i8 v5763 = v5762+(+56);
	*(i8*)(intptr_t)v5763 = v5760;

}
	void f393_CopyChildNodes(void);

// InstructionMatcher workspace at ws+4112 length ws+58
void f389_InstructionMatcher(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;



	i8 v5482 = (i8)(intptr_t)(f390_RewindRulePointers);

	((void(*)(void))(intptr_t)v5482)();

c02_03f9:;

	i8 v5483 = (i8)(intptr_t)(ws+4104);
	i8 v5484 = *(i8*)(intptr_t)v5483;
	i8 v5485 = v5484+(+7);
	i8 v5486 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v5486 = v5485;

	i8 v5487 = (i8)(intptr_t)(ws+4096);
	i1 v5488 = *(i1*)(intptr_t)v5487;
	i1 v5489 = v5488+(+1);
	i8 v5490 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v5490 = v5489;

	i8 v5491 = (i8)(intptr_t)(ws+4104);
	i8 v5492 = *(i8*)(intptr_t)v5491;
	i8 v5493 = (i8)(intptr_t)((i1*)f3___main_s02ac+1316);
	if (v5492==v5493) goto c02_03fe; else goto c02_03ff;

c02_03fe:;

	i8 v5494 = (i8)(intptr_t)(ws+4088);
	i8 v5495 = *(i8*)(intptr_t)v5494;
	i8 v5496 = v5495+(+256);
	i1 v5497 = *(i1*)(intptr_t)v5496;
	i1 v5498 = (i1)+24;
	if (v5497==v5498) goto c02_0406; else goto c02_0407;

c02_0407:;

	i8 v5499 = (i8)(intptr_t)(ws+4088);
	i8 v5500 = *(i8*)(intptr_t)v5499;
	i8 v5501 = v5500+(+48);
	i8 v5502 = *(i8*)(intptr_t)v5501;
	i8 v5503 = (i8)+0;
	if (v5502==v5503) goto c02_0406; else goto c02_0405;

c02_0405:;


	i8 v5577 = (i8)(intptr_t)(f392_ConvertNodeToFallback);

	((void(*)(void))(intptr_t)v5577)();

	i8 v5578 = (i8)(intptr_t)(f390_RewindRulePointers);

	((void(*)(void))(intptr_t)v5578)();

	goto c02_03f9;

c02_0406:;

c02_0400:;

	i8 v5579 = (i8)(intptr_t)(ws+4024);
	i8 v5580 = *(i8*)(intptr_t)v5579;
	*(i8*)(intptr_t)(ws+4176) = v5580;
	i8 v5581 = (i8)(intptr_t)(f381_PrintNodes);

	((void(*)(void))(intptr_t)v5581)();

	i8 v5582 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v5582)();

	i8 v5583 = (i8)(intptr_t)c02_s01cb;
	*(i8*)(intptr_t)(ws+4288) = v5583;
	i8 v5584 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v5584)();

	i1 v5585 = (i1)+0;
	i8 v5586 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v5586 = v5585;

c02_0413:;

	i8 v5587 = (i8)(intptr_t)(ws+4032);
	i1 v5588 = *(i1*)(intptr_t)v5587;
	i1 v5589 = (i1)+4;
	if (v5588==v5589) goto c02_0418; else goto c02_0417;

c02_0417:;

	i8 v5590 = (i8)(intptr_t)(ws+4112);
	i8 v5591 = (i8)(intptr_t)(ws+4032);
	i1 v5592 = *(i1*)(intptr_t)v5591;
	i8 v5593 = v5592;
	i8 v5594 = v5590+v5593;
	i1 v5595 = *(i1*)(intptr_t)v5594;
	*(i1*)(intptr_t)(ws+4232) = v5595;
	i8 v5596 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(void))(intptr_t)v5596)();

	i1 v5597 = (i1)+32;
	*(i1*)(intptr_t)(ws+4304) = v5597;
	i8 v5598 = (i8)(intptr_t)(f9_print_char);

	((void(*)(void))(intptr_t)v5598)();

	i8 v5599 = (i8)(intptr_t)(ws+4032);
	i1 v5600 = *(i1*)(intptr_t)v5599;
	i1 v5601 = v5600+(+1);
	i8 v5602 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v5602 = v5601;

	goto c02_0413;

c02_0418:;

	i8 v5603 = (i8)(intptr_t)c02_s01cc;
	*(i8*)(intptr_t)(ws+4288) = v5603;
	i8 v5604 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v5604)();

	i8 v5605 = (i8)(intptr_t)(ws+4088);
	i8 v5606 = *(i8*)(intptr_t)v5605;
	i8 v5607 = v5606+(+56);
	i1 v5608 = *(i1*)(intptr_t)v5607;
	i4 v5609 = v5608;
	*(i4*)(intptr_t)(ws+4288) = v5609;
	i8 v5610 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v5610)();

	i8 v5611 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v5611)();

c02_03ff:;

c02_03fb:;

	i8 v5612 = (i8)(intptr_t)(f391_TestRule);

	((void(*)(void))(intptr_t)v5612)();

	i1 v5613 = *(i1*)(intptr_t)(ws+4176);
	i8 v5614 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v5614 = v5613;

	i8 v5615 = (i8)(intptr_t)(ws+4168);
	i1 v5616 = *(i1*)(intptr_t)v5615;
	i1 v5617 = (i1)+0;
	if (v5616==v5617) goto c02_041d; else goto c02_041c;

c02_041c:;

	goto c02_03fa;

c02_041d:;

c02_0419:;

	i8 v5618 = (i8)(intptr_t)(ws+4104);
	i8 v5619 = *(i8*)(intptr_t)v5618;
	i8 v5620 = v5619+(+4);
	i1 v5621 = *(i1*)(intptr_t)v5620;
	i8 v5622 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v5622 = v5621;

c02_041e:;

	i8 v5623 = (i8)(intptr_t)(ws+4169);
	i1 v5624 = *(i1*)(intptr_t)v5623;
	i1 v5625 = (i1)+0;
	if (v5624==v5625) goto c02_0423; else goto c02_0422;

c02_0422:;

	i8 v5626 = (i8)(intptr_t)(ws+4169);
	i1 v5627 = *(i1*)(intptr_t)v5626;
	i1 v5628 = v5627&(+1);
	i1 v5629 = (i1)+0;
	if (v5628==v5629) goto c02_0428; else goto c02_0427;

c02_0427:;

	i8 v5630 = (i8)(intptr_t)(ws+4152);
	i8 v5631 = *(i8*)(intptr_t)v5630;
	i8 v5632 = v5631+(+1);
	i8 v5633 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5633 = v5632;

c02_0428:;

c02_0424:;

	i8 v5634 = (i8)(intptr_t)(ws+4169);
	i1 v5635 = *(i1*)(intptr_t)v5634;
	i1 v5636 = (i1)+1;
	i1 v5637 = ((i1)v5635)>>v5636;
	i8 v5638 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v5638 = v5637;

	goto c02_041e;

c02_0423:;

	i8 v5639 = (i8)(intptr_t)(ws+4104);
	i8 v5640 = *(i8*)(intptr_t)v5639;
	i8 v5641 = v5640+(+6);
	i1 v5642 = *(i1*)(intptr_t)v5641;
	i8 v5643 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v5643 = v5642;

c02_0429:;

	i8 v5644 = (i8)(intptr_t)(ws+4169);
	i1 v5645 = *(i1*)(intptr_t)v5644;
	i1 v5646 = (i1)+0;
	if (v5645==v5646) goto c02_042e; else goto c02_042d;

c02_042d:;

	i8 v5647 = (i8)(intptr_t)(ws+4169);
	i1 v5648 = *(i1*)(intptr_t)v5647;
	i1 v5649 = v5648&(+1);
	i1 v5650 = (i1)+0;
	if (v5649==v5650) goto c02_0433; else goto c02_0432;

c02_0432:;

	i8 v5651 = (i8)(intptr_t)(ws+4160);
	i8 v5652 = *(i8*)(intptr_t)v5651;
	i8 v5653 = v5652+(+1);
	i8 v5654 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5654 = v5653;

c02_0433:;

c02_042f:;

	i8 v5655 = (i8)(intptr_t)(ws+4169);
	i1 v5656 = *(i1*)(intptr_t)v5655;
	i1 v5657 = (i1)+1;
	i1 v5658 = ((i1)v5656)>>v5657;
	i8 v5659 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v5659 = v5658;

	goto c02_0429;

c02_042e:;

	goto c02_03f9;

c02_03fa:;

	i8 v5660 = (i8)(intptr_t)(ws+4096);
	i1 v5661 = *(i1*)(intptr_t)v5660;
	i8 v5662 = (i8)(intptr_t)(ws+4072);
	i8 v5663 = *(i8*)(intptr_t)v5662;
	i8 v5664 = v5663+(+86);
	*(i1*)(intptr_t)v5664 = v5661;

	i8 v5665 = (i8)(intptr_t)(ws+4104);
	i8 v5666 = *(i8*)(intptr_t)v5665;
	i8 v5667 = v5666+(+2);
	i1 v5668 = *(i1*)(intptr_t)v5667;
	i8 v5669 = (i8)(intptr_t)(ws+4072);
	i8 v5670 = *(i8*)(intptr_t)v5669;
	i8 v5671 = v5670+(+48);
	*(i1*)(intptr_t)v5671 = v5668;

	i8 v5672 = (i8)(intptr_t)(ws+4104);
	i8 v5673 = *(i8*)(intptr_t)v5672;
	i8 v5674 = v5673+(+3);
	i1 v5675 = *(i1*)(intptr_t)v5674;
	i8 v5676 = (i8)(intptr_t)(ws+4072);
	i8 v5677 = *(i8*)(intptr_t)v5676;
	i8 v5678 = v5677+(+65);
	*(i1*)(intptr_t)v5678 = v5675;


	i8 v5764 = (i8)(intptr_t)(f393_CopyChildNodes);

	((void(*)(void))(intptr_t)v5764)();

}
	void f389_InstructionMatcher(void);
	void f385_IsSimpleValue(void);
	void f386_SimpleValuesMatch(void);
	void f31_MemCopy(void);
	void f151_FindFirst(void);

// FindPreferredRegister workspace at ws+4152 length ws+58
void f394_FindPreferredRegister(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v5771 = (i8)(intptr_t)(ws+4072);
	i8 v5772 = *(i8*)(intptr_t)v5771;
	*(i8*)(intptr_t)(ws+4216) = v5772;
	i8 v5773 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)(ws+4224) = v5773;
	i8 v5774 = (i8)(intptr_t)(f385_IsSimpleValue);

	((void(*)(void))(intptr_t)v5774)();

	i1 v5775 = *(i1*)(intptr_t)(ws+4232);
	i8 v5776 = (i8)(intptr_t)(ws+4180);
	*(i1*)(intptr_t)v5776 = v5775;

	i8 v5777 = (i8)(intptr_t)(ws+4180);
	i1 v5778 = *(i1*)(intptr_t)v5777;
	i1 v5779 = (i1)+0;
	if (v5778==v5779) goto c02_044d; else goto c02_044c;

c02_044c:;

	i8 v5780 = (i8)(intptr_t)(ws+3576);
	i8 v5781 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5781 = v5780;

c02_044e:;

	i8 v5782 = (i8)(intptr_t)(ws+4184);
	i8 v5783 = *(i8*)(intptr_t)v5782;
	i8 v5784 = (i8)(intptr_t)(ws+3696);
	if (v5783==v5784) goto c02_0453; else goto c02_0452;

c02_0452:;

	i8 v5785 = (i8)(intptr_t)(ws+4184);
	i8 v5786 = *(i8*)(intptr_t)v5785;
	i8 v5787 = v5786+(+18);
	i1 v5788 = *(i1*)(intptr_t)v5787;
	i1 v5789 = (i1)+0;
	if (v5788==v5789) goto c02_0458; else goto c02_0457;

c02_0457:;

	i8 v5790 = (i8)(intptr_t)(ws+4184);
	i8 v5791 = *(i8*)(intptr_t)v5790;
	i8 v5792 = v5791+(+18);
	i1 v5793 = *(i1*)(intptr_t)v5792;
	i1 v5794 = v5793+(-1);
	i8 v5795 = (i8)(intptr_t)(ws+4184);
	i8 v5796 = *(i8*)(intptr_t)v5795;
	i8 v5797 = v5796+(+18);
	*(i1*)(intptr_t)v5797 = v5794;

c02_0458:;

c02_0454:;

	i8 v5798 = (i8)(intptr_t)(ws+4184);
	i8 v5799 = *(i8*)(intptr_t)v5798;
	i8 v5800 = v5799+(+24);
	i8 v5801 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5801 = v5800;

	goto c02_044e;

c02_0453:;

	i8 v5802 = (i8)(intptr_t)(ws+3576);
	i8 v5803 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5803 = v5802;

	i1 v5804 = (i1)+16;
	i8 v5805 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5805 = v5804;

c02_0459:;

	i8 v5806 = (i8)(intptr_t)(ws+4184);
	i8 v5807 = *(i8*)(intptr_t)v5806;
	i8 v5808 = (i8)(intptr_t)(ws+3696);
	if (v5807==v5808) goto c02_045e; else goto c02_045d;

c02_045d:;

	i8 v5809 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)(ws+4216) = v5809;
	i8 v5810 = (i8)(intptr_t)(ws+4184);
	i8 v5811 = *(i8*)(intptr_t)v5810;
	*(i8*)(intptr_t)(ws+4224) = v5811;
	i8 v5812 = (i8)(intptr_t)(f386_SimpleValuesMatch);

	((void(*)(void))(intptr_t)v5812)();

	i1 v5813 = *(i1*)(intptr_t)(ws+4232);
	i8 v5814 = (i8)(intptr_t)(ws+4192);
	*(i1*)(intptr_t)v5814 = v5813;

	i8 v5815 = (i8)(intptr_t)(ws+4184);
	i8 v5816 = *(i8*)(intptr_t)v5815;
	i8 v5817 = v5816+(+19);
	i1 v5818 = *(i1*)(intptr_t)v5817;
	i1 v5819 = (i1)+0;
	if (v5818==v5819) goto c02_0467; else goto c02_0469;

c02_0469:;

	i8 v5820 = (i8)(intptr_t)(ws+4153);
	i1 v5821 = *(i1*)(intptr_t)v5820;
	i8 v5822 = (i8)(intptr_t)(ws+4152);
	i1 v5823 = *(i1*)(intptr_t)v5822;
	i1 v5824 = v5821&v5823;
	i1 v5825 = (i1)+0;
	if (v5824==v5825) goto c02_0467; else goto c02_0468;

c02_0468:;

	i8 v5826 = (i8)(intptr_t)(ws+4192);
	i1 v5827 = *(i1*)(intptr_t)v5826;
	i1 v5828 = (i1)+0;
	if (v5827==v5828) goto c02_0467; else goto c02_0466;

c02_0466:;

	i1 v5829 = (i1)+255;
	i8 v5830 = (i8)(intptr_t)(ws+4184);
	i8 v5831 = *(i8*)(intptr_t)v5830;
	i8 v5832 = v5831+(+18);
	*(i1*)(intptr_t)v5832 = v5829;

	return;

c02_0467:;

c02_045f:;

	i8 v5833 = (i8)(intptr_t)(ws+4184);
	i8 v5834 = *(i8*)(intptr_t)v5833;
	i8 v5835 = v5834+(+24);
	i8 v5836 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5836 = v5835;

	i8 v5837 = (i8)(intptr_t)(ws+4153);
	i1 v5838 = *(i1*)(intptr_t)v5837;
	i1 v5839 = (i1)+1;
	i1 v5840 = ((i1)v5838)>>v5839;
	i8 v5841 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5841 = v5840;

	goto c02_0459;

c02_045e:;

	i8 v5842 = (i8)+0;
	i8 v5843 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5843 = v5842;

	i8 v5844 = (i8)(intptr_t)(ws+3576);
	i8 v5845 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5845 = v5844;

	i1 v5846 = (i1)+16;
	i8 v5847 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5847 = v5846;

c02_046a:;

	i8 v5848 = (i8)(intptr_t)(ws+4184);
	i8 v5849 = *(i8*)(intptr_t)v5848;
	i8 v5850 = (i8)(intptr_t)(ws+3696);
	if (v5849==v5850) goto c02_046f; else goto c02_046e;

c02_046e:;

	i8 v5851 = (i8)(intptr_t)(ws+4153);
	i1 v5852 = *(i1*)(intptr_t)v5851;
	i8 v5853 = (i8)(intptr_t)(ws+4152);
	i1 v5854 = *(i1*)(intptr_t)v5853;
	i1 v5855 = v5852&v5854;
	i1 v5856 = (i1)+0;
	if (v5855==v5856) goto c02_0474; else goto c02_0473;

c02_0473:;

	i8 v5857 = (i8)(intptr_t)(ws+4184);
	i8 v5858 = *(i8*)(intptr_t)v5857;
	i8 v5859 = v5858+(+19);
	i1 v5860 = *(i1*)(intptr_t)v5859;
	i1 v5861 = (i1)+0;
	if (v5860==v5861) goto c02_0478; else goto c02_0479;

c02_0478:;

	i8 v5862 = (i8)(intptr_t)(ws+4184);
	i8 v5863 = *(i8*)(intptr_t)v5862;
	i8 v5864 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5864 = v5863;

	i8 v5865 = (i8)(intptr_t)(ws+4153);
	i1 v5866 = *(i1*)(intptr_t)v5865;
	i8 v5867 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5867 = v5866;

	goto c02_046f;

c02_0479:;

c02_0475:;

	i8 v5868 = (i8)(intptr_t)(ws+4200);
	i8 v5869 = *(i8*)(intptr_t)v5868;
	i8 v5870 = (i8)+0;
	if (v5869==v5870) goto c02_047d; else goto c02_047e;

c02_047d:;

	i8 v5871 = (i8)(intptr_t)(ws+4184);
	i8 v5872 = *(i8*)(intptr_t)v5871;
	i8 v5873 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5873 = v5872;

	i8 v5874 = (i8)(intptr_t)(ws+4153);
	i1 v5875 = *(i1*)(intptr_t)v5874;
	i8 v5876 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5876 = v5875;

	goto c02_047a;

c02_047e:;

	i8 v5877 = (i8)(intptr_t)(ws+4184);
	i8 v5878 = *(i8*)(intptr_t)v5877;
	i8 v5879 = v5878+(+18);
	i1 v5880 = *(i1*)(intptr_t)v5879;
	i8 v5881 = (i8)(intptr_t)(ws+4200);
	i8 v5882 = *(i8*)(intptr_t)v5881;
	i8 v5883 = v5882+(+18);
	i1 v5884 = *(i1*)(intptr_t)v5883;
	if (v5880<v5884) goto c02_0482; else goto c02_0483;

c02_0482:;

	i8 v5885 = (i8)(intptr_t)(ws+4184);
	i8 v5886 = *(i8*)(intptr_t)v5885;
	i8 v5887 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5887 = v5886;

	i8 v5888 = (i8)(intptr_t)(ws+4153);
	i1 v5889 = *(i1*)(intptr_t)v5888;
	i8 v5890 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v5890 = v5889;

c02_0483:;

c02_047f:;

c02_047a:;

c02_0474:;

c02_0470:;

	i8 v5891 = (i8)(intptr_t)(ws+4184);
	i8 v5892 = *(i8*)(intptr_t)v5891;
	i8 v5893 = v5892+(+24);
	i8 v5894 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5894 = v5893;

	i8 v5895 = (i8)(intptr_t)(ws+4153);
	i1 v5896 = *(i1*)(intptr_t)v5895;
	i1 v5897 = (i1)+1;
	i1 v5898 = ((i1)v5896)>>v5897;
	i8 v5899 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5899 = v5898;

	goto c02_046a;

c02_046f:;

	i8 v5900 = (i8)(intptr_t)(ws+4200);
	i8 v5901 = *(i8*)(intptr_t)v5900;
	i8 v5902 = (i8)+0;
	if (v5901==v5902) goto c02_0488; else goto c02_0487;

c02_0487:;

	i8 v5903 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)(ws+4264) = v5903;
	i8 v5904 = (i8)+20;
	*(i8*)(intptr_t)(ws+4272) = v5904;
	i8 v5905 = (i8)(intptr_t)(ws+4200);
	i8 v5906 = *(i8*)(intptr_t)v5905;
	*(i8*)(intptr_t)(ws+4280) = v5906;
	i8 v5907 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(void))(intptr_t)v5907)();

	i1 v5908 = (i1)+255;
	i8 v5909 = (i8)(intptr_t)(ws+4200);
	i8 v5910 = *(i8*)(intptr_t)v5909;
	i8 v5911 = v5910+(+18);
	*(i1*)(intptr_t)v5911 = v5908;

	i8 v5912 = (i8)(intptr_t)(ws+4208);
	i1 v5913 = *(i1*)(intptr_t)v5912;
	i8 v5914 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5914 = v5913;

	return;

c02_0488:;

c02_0484:;

c02_044d:;

c02_0449:;

	i8 v5915 = (i8)(intptr_t)(ws+4152);
	i1 v5916 = *(i1*)(intptr_t)v5915;
	*(i1*)(intptr_t)(ws+4216) = v5916;
	i8 v5917 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v5917)();

	i1 v5918 = *(i1*)(intptr_t)(ws+4217);
	i8 v5919 = (i8)(intptr_t)(ws+4209);
	*(i1*)(intptr_t)v5919 = v5918;

	i8 v5920 = (i8)(intptr_t)(ws+4209);
	i1 v5921 = *(i1*)(intptr_t)v5920;
	i8 v5922 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5922 = v5921;

}
	void f372_IsStackedRegister(void);
	void f151_FindFirst(void);
	void f151_FindFirst(void);
	void f151_FindFirst(void);
	void f378_CreateSpill(void);
	void f373_CalculateBlockedRegisters(void);
	void f394_FindPreferredRegister(void);
	void f149_FindConflictingRegisters(void);
	void f375_BlockRegisters(void);
	void f150_FindCompatibleRegisters(void);
	void f151_FindFirst(void);
	void f151_FindFirst(void);
	void f149_FindConflictingRegisters(void);
	void f149_FindConflictingRegisters(void);
	void f375_BlockRegisters(void);
	void f379_CreateReload(void);
	void f151_FindFirst(void);
	void f151_FindFirst(void);
	void f149_FindConflictingRegisters(void);
	void f375_BlockRegisters(void);
	void f149_FindConflictingRegisters(void);
	void f378_CreateSpill(void);
	void f381_PrintNodes(void);
const i1 c02_s01cd[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01ce[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01cf[] = { 0x6e,0x6f,0x64,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01d0[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01d1[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01d2[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01d3[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
const i1 c02_s01d4[] = { 0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x3d,0 };
	void f12_print(void);
	void f21_print_hex_i32(void);
	void f13_print_nl(void);
	void f66_StartError(void);
const i1 c02_s01d5[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0x3a,0x20,0 };
	void f12_print(void);
	void f12_print(void);
	void f67_EndError(void);

// deadlock workspace at ws+4152 length ws+8
void f396_deadlock(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v6326 = (i8)(intptr_t)(ws+4024);
	i8 v6327 = *(i8*)(intptr_t)v6326;
	*(i8*)(intptr_t)(ws+4176) = v6327;
	i8 v6328 = (i8)(intptr_t)(f381_PrintNodes);

	((void(*)(void))(intptr_t)v6328)();

	i8 v6329 = (i8)(intptr_t)c02_s01cd;
	*(i8*)(intptr_t)(ws+4288) = v6329;
	i8 v6330 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6330)();

	i8 v6331 = (i8)(intptr_t)(ws+4072);
	i8 v6332 = *(i8*)(intptr_t)v6331;
	i8 v6333 = v6332+(+16);
	i8 v6334 = *(i8*)(intptr_t)v6333;
	i4 v6335 = v6334;
	*(i4*)(intptr_t)(ws+4288) = v6335;
	i8 v6336 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6336)();

	i8 v6337 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6337)();

	i8 v6338 = (i8)(intptr_t)c02_s01ce;
	*(i8*)(intptr_t)(ws+4288) = v6338;
	i8 v6339 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6339)();

	i8 v6340 = (i8)(intptr_t)(ws+4120);
	i8 v6341 = *(i8*)(intptr_t)v6340;
	i8 v6342 = v6341+(+16);
	i8 v6343 = *(i8*)(intptr_t)v6342;
	i4 v6344 = v6343;
	*(i4*)(intptr_t)(ws+4288) = v6344;
	i8 v6345 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6345)();

	i8 v6346 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6346)();

	i8 v6347 = (i8)(intptr_t)c02_s01cf;
	*(i8*)(intptr_t)(ws+4288) = v6347;
	i8 v6348 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6348)();

	i8 v6349 = (i8)(intptr_t)(ws+4088);
	i8 v6350 = *(i8*)(intptr_t)v6349;
	i4 v6351 = v6350;
	*(i4*)(intptr_t)(ws+4288) = v6351;
	i8 v6352 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6352)();

	i8 v6353 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6353)();

	i8 v6354 = (i8)(intptr_t)c02_s01d0;
	*(i8*)(intptr_t)(ws+4288) = v6354;
	i8 v6355 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6355)();

	i8 v6356 = (i8)(intptr_t)(ws+4072);
	i8 v6357 = *(i8*)(intptr_t)v6356;
	i8 v6358 = v6357+(+48);
	i1 v6359 = *(i1*)(intptr_t)v6358;
	i4 v6360 = v6359;
	*(i4*)(intptr_t)(ws+4288) = v6360;
	i8 v6361 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6361)();

	i8 v6362 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6362)();

	i8 v6363 = (i8)(intptr_t)c02_s01d1;
	*(i8*)(intptr_t)(ws+4288) = v6363;
	i8 v6364 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6364)();

	i8 v6365 = (i8)(intptr_t)(ws+4072);
	i8 v6366 = *(i8*)(intptr_t)v6365;
	i8 v6367 = v6366+(+66);
	i1 v6368 = *(i1*)(intptr_t)v6367;
	i4 v6369 = v6368;
	*(i4*)(intptr_t)(ws+4288) = v6369;
	i8 v6370 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6370)();

	i8 v6371 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6371)();

	i8 v6372 = (i8)(intptr_t)c02_s01d2;
	*(i8*)(intptr_t)(ws+4288) = v6372;
	i8 v6373 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6373)();

	i8 v6374 = (i8)(intptr_t)(ws+4088);
	i8 v6375 = *(i8*)(intptr_t)v6374;
	i8 v6376 = v6375+(+56);
	i1 v6377 = *(i1*)(intptr_t)v6376;
	i4 v6378 = v6377;
	*(i4*)(intptr_t)(ws+4288) = v6378;
	i8 v6379 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6379)();

	i8 v6380 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6380)();

	i8 v6381 = (i8)(intptr_t)c02_s01d3;
	*(i8*)(intptr_t)(ws+4288) = v6381;
	i8 v6382 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6382)();

	i8 v6383 = (i8)(intptr_t)(ws+4120);
	i8 v6384 = *(i8*)(intptr_t)v6383;
	i8 v6385 = v6384+(+64);
	i1 v6386 = *(i1*)(intptr_t)v6385;
	i4 v6387 = v6386;
	*(i4*)(intptr_t)(ws+4288) = v6387;
	i8 v6388 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6388)();

	i8 v6389 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6389)();

	i8 v6390 = (i8)(intptr_t)c02_s01d4;
	*(i8*)(intptr_t)(ws+4288) = v6390;
	i8 v6391 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6391)();

	i8 v6392 = (i8)(intptr_t)(ws+4134);
	i1 v6393 = *(i1*)(intptr_t)v6392;
	i4 v6394 = v6393;
	*(i4*)(intptr_t)(ws+4288) = v6394;
	i8 v6395 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v6395)();

	i8 v6396 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6396)();

	i8 v6397 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v6397)();

	i8 v6398 = (i8)(intptr_t)c02_s01d5;
	*(i8*)(intptr_t)(ws+4288) = v6398;
	i8 v6399 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6399)();

	i8 v6400 = (i8)(intptr_t)(ws+4152);
	i8 v6401 = *(i8*)(intptr_t)v6400;
	*(i8*)(intptr_t)(ws+4288) = v6401;
	i8 v6402 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v6402)();

	i8 v6403 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v6403)();

}
const i1 c02_s01d6[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0 };
	void f396_deadlock(void);
	void f151_FindFirst(void);
	void f149_FindConflictingRegisters(void);
	void f378_CreateSpill(void);
const i1 c02_s01d7[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0 };
	void f396_deadlock(void);
	void f151_FindFirst(void);
	void f149_FindConflictingRegisters(void);
	void f379_CreateReload(void);

// AllocateRegister workspace at ws+4112 length ws+36
void f395_AllocateRegister(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v5923 = (i8)(intptr_t)(ws+4072);
	i8 v5924 = *(i8*)(intptr_t)v5923;
	i8 v5925 = v5924+(+48);
	i1 v5926 = *(i1*)(intptr_t)v5925;
	*(i1*)(intptr_t)(ws+4256) = v5926;
	i8 v5927 = (i8)(intptr_t)(f372_IsStackedRegister);

	((void(*)(void))(intptr_t)v5927)();

	i1 v5928 = *(i1*)(intptr_t)(ws+4257);
	i8 v5929 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v5929 = v5928;

	i8 v5930 = (i8)(intptr_t)(ws+4112);
	i1 v5931 = *(i1*)(intptr_t)v5930;
	i1 v5932 = (i1)+0;
	if (v5931==v5932) goto c02_048d; else goto c02_048c;

c02_048c:;

	i8 v5933 = (i8)(intptr_t)(ws+4088);
	i8 v5934 = *(i8*)(intptr_t)v5933;
	i8 v5935 = v5934+(+56);
	i1 v5936 = *(i1*)(intptr_t)v5935;
	i8 v5937 = (i8)(intptr_t)(ws+4072);
	i8 v5938 = *(i8*)(intptr_t)v5937;
	i8 v5939 = v5938+(+48);
	i1 v5940 = *(i1*)(intptr_t)v5939;
	i1 v5941 = v5936&v5940;
	i8 v5942 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v5942 = v5941;

	i8 v5943 = (i8)(intptr_t)(ws+4113);
	i1 v5944 = *(i1*)(intptr_t)v5943;
	i1 v5945 = (i1)+0;
	if (v5944==v5945) goto c02_0492; else goto c02_0491;

c02_0491:;

	i8 v5946 = (i8)(intptr_t)(ws+4113);
	i1 v5947 = *(i1*)(intptr_t)v5946;
	*(i1*)(intptr_t)(ws+4216) = v5947;
	i8 v5948 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v5948)();

	i1 v5949 = *(i1*)(intptr_t)(ws+4217);
	i8 v5950 = (i8)(intptr_t)(ws+4114);
	*(i1*)(intptr_t)v5950 = v5949;

	i8 v5951 = (i8)(intptr_t)(ws+4114);
	i1 v5952 = *(i1*)(intptr_t)v5951;
	i8 v5953 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v5953 = v5952;

	i8 v5954 = (i8)(intptr_t)(ws+4113);
	i1 v5955 = *(i1*)(intptr_t)v5954;
	i8 v5956 = (i8)(intptr_t)(ws+4088);
	i8 v5957 = *(i8*)(intptr_t)v5956;
	i8 v5958 = v5957+(+57);
	*(i1*)(intptr_t)v5958 = v5955;

	i8 v5959 = (i8)(intptr_t)(ws+4113);
	i1 v5960 = *(i1*)(intptr_t)v5959;
	i8 v5961 = (i8)(intptr_t)(ws+4072);
	i8 v5962 = *(i8*)(intptr_t)v5961;
	i8 v5963 = v5962+(+49);
	*(i1*)(intptr_t)v5963 = v5960;

	goto c02_048e;

c02_0492:;

	i8 v5964 = (i8)(intptr_t)(ws+4072);
	i8 v5965 = *(i8*)(intptr_t)v5964;
	i8 v5966 = v5965+(+48);
	i1 v5967 = *(i1*)(intptr_t)v5966;
	*(i1*)(intptr_t)(ws+4216) = v5967;
	i8 v5968 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v5968)();

	i1 v5969 = *(i1*)(intptr_t)(ws+4217);
	i8 v5970 = (i8)(intptr_t)(ws+4115);
	*(i1*)(intptr_t)v5970 = v5969;

	i8 v5971 = (i8)(intptr_t)(ws+4115);
	i1 v5972 = *(i1*)(intptr_t)v5971;
	i8 v5973 = (i8)(intptr_t)(ws+4072);
	i8 v5974 = *(i8*)(intptr_t)v5973;
	i8 v5975 = v5974+(+49);
	*(i1*)(intptr_t)v5975 = v5972;

	i8 v5976 = (i8)(intptr_t)(ws+4088);
	i8 v5977 = *(i8*)(intptr_t)v5976;
	i8 v5978 = v5977+(+56);
	i1 v5979 = *(i1*)(intptr_t)v5978;
	*(i1*)(intptr_t)(ws+4216) = v5979;
	i8 v5980 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v5980)();

	i1 v5981 = *(i1*)(intptr_t)(ws+4217);
	i8 v5982 = (i8)(intptr_t)(ws+4116);
	*(i1*)(intptr_t)v5982 = v5981;

	i8 v5983 = (i8)(intptr_t)(ws+4116);
	i1 v5984 = *(i1*)(intptr_t)v5983;
	i8 v5985 = (i8)(intptr_t)(ws+4088);
	i8 v5986 = *(i8*)(intptr_t)v5985;
	i8 v5987 = v5986+(+57);
	*(i1*)(intptr_t)v5987 = v5984;

	i8 v5988 = (i8)(intptr_t)(ws+4072);
	i8 v5989 = *(i8*)(intptr_t)v5988;
	*(i8*)(intptr_t)(ws+4152) = v5989;
	i8 v5990 = (i8)(intptr_t)(ws+4072);
	i8 v5991 = *(i8*)(intptr_t)v5990;
	i8 v5992 = v5991+(+49);
	i1 v5993 = *(i1*)(intptr_t)v5992;
	*(i1*)(intptr_t)(ws+4160) = v5993;
	i8 v5994 = (i8)(intptr_t)(ws+4088);
	i8 v5995 = *(i8*)(intptr_t)v5994;
	i8 v5996 = v5995+(+57);
	i1 v5997 = *(i1*)(intptr_t)v5996;
	*(i1*)(intptr_t)(ws+4161) = v5997;
	i8 v5998 = (i8)(intptr_t)(f378_CreateSpill);

	((void(*)(void))(intptr_t)v5998)();

c02_048e:;

	goto c02_0489;

c02_048d:;

	i8 v5999 = (i8)(intptr_t)(ws+4088);
	i8 v6000 = *(i8*)(intptr_t)v5999;
	i8 v6001 = v6000+(+48);
	i8 v6002 = *(i8*)(intptr_t)v6001;
	i8 v6003 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v6003 = v6002;

	i8 v6004 = (i8)(intptr_t)(ws+4120);
	i8 v6005 = *(i8*)(intptr_t)v6004;
	*(i8*)(intptr_t)(ws+4152) = v6005;
	i8 v6006 = (i8)(intptr_t)(ws+4072);
	i8 v6007 = *(i8*)(intptr_t)v6006;
	*(i8*)(intptr_t)(ws+4160) = v6007;
	i8 v6008 = (i8)(intptr_t)(f373_CalculateBlockedRegisters);

	((void(*)(void))(intptr_t)v6008)();

	i1 v6009 = *(i1*)(intptr_t)(ws+4168);
	i8 v6010 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v6010 = v6009;

	i8 v6011 = (i8)(intptr_t)(ws+4128);
	i1 v6012 = *(i1*)(intptr_t)v6011;
	i8 v6013 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6013 = v6012;

	i8 v6014 = (i8)(intptr_t)(ws+4088);
	i8 v6015 = *(i8*)(intptr_t)v6014;
	i8 v6016 = v6015+(+56);
	i1 v6017 = *(i1*)(intptr_t)v6016;
	i8 v6018 = (i8)(intptr_t)(ws+4072);
	i8 v6019 = *(i8*)(intptr_t)v6018;
	i8 v6020 = v6019+(+48);
	i1 v6021 = *(i1*)(intptr_t)v6020;
	i1 v6022 = v6017&v6021;
	i8 v6023 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6023 = v6022;

	i8 v6024 = (i8)(intptr_t)(ws+4113);
	i1 v6025 = *(i1*)(intptr_t)v6024;
	i8 v6026 = (i8)(intptr_t)(ws+4129);
	i1 v6027 = *(i1*)(intptr_t)v6026;
	i8 v6028 = (i8)(intptr_t)(ws+4072);
	i8 v6029 = *(i8*)(intptr_t)v6028;
	i8 v6030 = v6029+(+66);
	i1 v6031 = *(i1*)(intptr_t)v6030;
	i1 v6032 = v6027|v6031;
	i8 v6033 = (i8)(intptr_t)(ws+4120);
	i8 v6034 = *(i8*)(intptr_t)v6033;
	i8 v6035 = v6034+(+64);
	i1 v6036 = *(i1*)(intptr_t)v6035;
	i1 v6037 = v6032|v6036;
	i1 v6038 = ~v6037;
	i1 v6039 = v6025&v6038;
	i8 v6040 = (i8)(intptr_t)(ws+4130);
	*(i1*)(intptr_t)v6040 = v6039;

	i8 v6041 = (i8)(intptr_t)(ws+4130);
	i1 v6042 = *(i1*)(intptr_t)v6041;
	i1 v6043 = (i1)+0;
	if (v6042==v6043) goto c02_0497; else goto c02_0496;

c02_0496:;

	i8 v6044 = (i8)(intptr_t)(ws+4130);
	i1 v6045 = *(i1*)(intptr_t)v6044;
	*(i1*)(intptr_t)(ws+4152) = v6045;
	i8 v6046 = (i8)(intptr_t)(f394_FindPreferredRegister);

	((void(*)(void))(intptr_t)v6046)();

	i1 v6047 = *(i1*)(intptr_t)(ws+4153);
	i8 v6048 = (i8)(intptr_t)(ws+4131);
	*(i1*)(intptr_t)v6048 = v6047;

	i8 v6049 = (i8)(intptr_t)(ws+4131);
	i1 v6050 = *(i1*)(intptr_t)v6049;
	i8 v6051 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6051 = v6050;

	i8 v6052 = (i8)(intptr_t)(ws+4113);
	i1 v6053 = *(i1*)(intptr_t)v6052;
	i8 v6054 = (i8)(intptr_t)(ws+4088);
	i8 v6055 = *(i8*)(intptr_t)v6054;
	i8 v6056 = v6055+(+57);
	*(i1*)(intptr_t)v6056 = v6053;

	i8 v6057 = (i8)(intptr_t)(ws+4113);
	i1 v6058 = *(i1*)(intptr_t)v6057;
	i8 v6059 = (i8)(intptr_t)(ws+4072);
	i8 v6060 = *(i8*)(intptr_t)v6059;
	i8 v6061 = v6060+(+49);
	*(i1*)(intptr_t)v6061 = v6058;

	i8 v6062 = (i8)(intptr_t)(ws+4113);
	i1 v6063 = *(i1*)(intptr_t)v6062;
	*(i1*)(intptr_t)(ws+4152) = v6063;
	i8 v6064 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6064)();

	i1 v6065 = *(i1*)(intptr_t)(ws+4153);
	i8 v6066 = (i8)(intptr_t)(ws+4132);
	*(i1*)(intptr_t)v6066 = v6065;

	i8 v6067 = (i8)(intptr_t)(ws+4132);
	i1 v6068 = *(i1*)(intptr_t)v6067;
	i8 v6069 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6069 = v6068;

	i8 v6070 = (i8)(intptr_t)(ws+4120);
	i8 v6071 = *(i8*)(intptr_t)v6070;
	i8 v6072 = v6071+(+64);
	i1 v6073 = *(i1*)(intptr_t)v6072;
	i8 v6074 = (i8)(intptr_t)(ws+4129);
	i1 v6075 = *(i1*)(intptr_t)v6074;
	i1 v6076 = v6073|v6075;
	i8 v6077 = (i8)(intptr_t)(ws+4120);
	i8 v6078 = *(i8*)(intptr_t)v6077;
	i8 v6079 = v6078+(+64);
	*(i1*)(intptr_t)v6079 = v6076;

	i8 v6080 = (i8)(intptr_t)(ws+4120);
	i8 v6081 = *(i8*)(intptr_t)v6080;
	*(i8*)(intptr_t)(ws+4152) = v6081;
	i8 v6082 = (i8)(intptr_t)(ws+4072);
	i8 v6083 = *(i8*)(intptr_t)v6082;
	*(i8*)(intptr_t)(ws+4160) = v6083;
	i8 v6084 = (i8)(intptr_t)(ws+4129);
	i1 v6085 = *(i1*)(intptr_t)v6084;
	*(i1*)(intptr_t)(ws+4168) = v6085;
	i8 v6086 = (i8)(intptr_t)(f375_BlockRegisters);

	((void(*)(void))(intptr_t)v6086)();

	i8 v6087 = (i8)(intptr_t)(ws+4072);
	i8 v6088 = *(i8*)(intptr_t)v6087;
	i8 v6089 = v6088+(+66);
	i1 v6090 = *(i1*)(intptr_t)v6089;
	i8 v6091 = (i8)(intptr_t)(ws+4129);
	i1 v6092 = *(i1*)(intptr_t)v6091;
	i1 v6093 = v6090|v6092;
	i8 v6094 = (i8)(intptr_t)(ws+4072);
	i8 v6095 = *(i8*)(intptr_t)v6094;
	i8 v6096 = v6095+(+66);
	*(i1*)(intptr_t)v6096 = v6093;

	goto c02_0493;

c02_0497:;

	i8 v6097 = (i8)(intptr_t)(ws+4088);
	i8 v6098 = *(i8*)(intptr_t)v6097;
	i8 v6099 = v6098+(+56);
	i1 v6100 = *(i1*)(intptr_t)v6099;
	i1 v6101 = v6100&(-1);
	*(i1*)(intptr_t)(ws+4152) = v6101;
	i8 v6102 = (i8)(intptr_t)(f150_FindCompatibleRegisters);

	((void(*)(void))(intptr_t)v6102)();

	i1 v6103 = *(i1*)(intptr_t)(ws+4153);
	i8 v6104 = (i8)(intptr_t)(ws+4133);
	*(i1*)(intptr_t)v6104 = v6103;

	i8 v6105 = (i8)(intptr_t)(ws+4133);
	i1 v6106 = *(i1*)(intptr_t)v6105;
	i8 v6107 = (i8)(intptr_t)(ws+4134);
	*(i1*)(intptr_t)v6107 = v6106;

	i8 v6108 = (i8)(intptr_t)(ws+4072);
	i8 v6109 = *(i8*)(intptr_t)v6108;
	i8 v6110 = v6109+(+48);
	i1 v6111 = *(i1*)(intptr_t)v6110;
	i8 v6112 = (i8)(intptr_t)(ws+4134);
	i1 v6113 = *(i1*)(intptr_t)v6112;
	i1 v6114 = v6111&v6113;
	i8 v6115 = (i8)(intptr_t)(ws+4129);
	i1 v6116 = *(i1*)(intptr_t)v6115;
	i8 v6117 = (i8)(intptr_t)(ws+4072);
	i8 v6118 = *(i8*)(intptr_t)v6117;
	i8 v6119 = v6118+(+66);
	i1 v6120 = *(i1*)(intptr_t)v6119;
	i1 v6121 = v6116|v6120;
	i1 v6122 = ~v6121;
	i1 v6123 = v6114&v6122;
	i8 v6124 = (i8)(intptr_t)(ws+4130);
	*(i1*)(intptr_t)v6124 = v6123;

	i8 v6125 = (i8)(intptr_t)(ws+4088);
	i8 v6126 = *(i8*)(intptr_t)v6125;
	i8 v6127 = v6126+(+56);
	i1 v6128 = *(i1*)(intptr_t)v6127;
	i8 v6129 = (i8)(intptr_t)(ws+4120);
	i8 v6130 = *(i8*)(intptr_t)v6129;
	i8 v6131 = v6130+(+64);
	i1 v6132 = *(i1*)(intptr_t)v6131;
	i1 v6133 = ~v6132;
	i1 v6134 = v6128&v6133;
	i8 v6135 = (i8)(intptr_t)(ws+4135);
	*(i1*)(intptr_t)v6135 = v6134;

	i8 v6136 = (i8)(intptr_t)(ws+4130);
	i1 v6137 = *(i1*)(intptr_t)v6136;
	i1 v6138 = (i1)+0;
	if (v6137==v6138) goto c02_049e; else goto c02_049f;

c02_049f:;

	i8 v6139 = (i8)(intptr_t)(ws+4135);
	i1 v6140 = *(i1*)(intptr_t)v6139;
	i1 v6141 = (i1)+0;
	if (v6140==v6141) goto c02_049e; else goto c02_049d;

c02_049d:;

	i8 v6142 = (i8)(intptr_t)(ws+4130);
	i1 v6143 = *(i1*)(intptr_t)v6142;
	*(i1*)(intptr_t)(ws+4216) = v6143;
	i8 v6144 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6144)();

	i1 v6145 = *(i1*)(intptr_t)(ws+4217);
	i8 v6146 = (i8)(intptr_t)(ws+4136);
	*(i1*)(intptr_t)v6146 = v6145;

	i8 v6147 = (i8)(intptr_t)(ws+4136);
	i1 v6148 = *(i1*)(intptr_t)v6147;
	i8 v6149 = (i8)(intptr_t)(ws+4072);
	i8 v6150 = *(i8*)(intptr_t)v6149;
	i8 v6151 = v6150+(+49);
	*(i1*)(intptr_t)v6151 = v6148;

	i8 v6152 = (i8)(intptr_t)(ws+4135);
	i1 v6153 = *(i1*)(intptr_t)v6152;
	*(i1*)(intptr_t)(ws+4216) = v6153;
	i8 v6154 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6154)();

	i1 v6155 = *(i1*)(intptr_t)(ws+4217);
	i8 v6156 = (i8)(intptr_t)(ws+4137);
	*(i1*)(intptr_t)v6156 = v6155;

	i8 v6157 = (i8)(intptr_t)(ws+4137);
	i1 v6158 = *(i1*)(intptr_t)v6157;
	i8 v6159 = (i8)(intptr_t)(ws+4088);
	i8 v6160 = *(i8*)(intptr_t)v6159;
	i8 v6161 = v6160+(+57);
	*(i1*)(intptr_t)v6161 = v6158;

	i8 v6162 = (i8)(intptr_t)(ws+4088);
	i8 v6163 = *(i8*)(intptr_t)v6162;
	i8 v6164 = v6163+(+57);
	i1 v6165 = *(i1*)(intptr_t)v6164;
	*(i1*)(intptr_t)(ws+4152) = v6165;
	i8 v6166 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6166)();

	i1 v6167 = *(i1*)(intptr_t)(ws+4153);
	i8 v6168 = (i8)(intptr_t)(ws+4138);
	*(i1*)(intptr_t)v6168 = v6167;

	i8 v6169 = (i8)(intptr_t)(ws+4120);
	i8 v6170 = *(i8*)(intptr_t)v6169;
	i8 v6171 = v6170+(+64);
	i1 v6172 = *(i1*)(intptr_t)v6171;
	i8 v6173 = (i8)(intptr_t)(ws+4138);
	i1 v6174 = *(i1*)(intptr_t)v6173;
	i1 v6175 = v6172|v6174;
	i8 v6176 = (i8)(intptr_t)(ws+4120);
	i8 v6177 = *(i8*)(intptr_t)v6176;
	i8 v6178 = v6177+(+64);
	*(i1*)(intptr_t)v6178 = v6175;

	i8 v6179 = (i8)(intptr_t)(ws+4072);
	i8 v6180 = *(i8*)(intptr_t)v6179;
	i8 v6181 = v6180+(+49);
	i1 v6182 = *(i1*)(intptr_t)v6181;
	*(i1*)(intptr_t)(ws+4152) = v6182;
	i8 v6183 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6183)();

	i1 v6184 = *(i1*)(intptr_t)(ws+4153);
	i8 v6185 = (i8)(intptr_t)(ws+4139);
	*(i1*)(intptr_t)v6185 = v6184;

	i8 v6186 = (i8)(intptr_t)(ws+4139);
	i1 v6187 = *(i1*)(intptr_t)v6186;
	i8 v6188 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6188 = v6187;

	i8 v6189 = (i8)(intptr_t)(ws+4120);
	i8 v6190 = *(i8*)(intptr_t)v6189;
	*(i8*)(intptr_t)(ws+4152) = v6190;
	i8 v6191 = (i8)(intptr_t)(ws+4072);
	i8 v6192 = *(i8*)(intptr_t)v6191;
	*(i8*)(intptr_t)(ws+4160) = v6192;
	i8 v6193 = (i8)(intptr_t)(ws+4129);
	i1 v6194 = *(i1*)(intptr_t)v6193;
	*(i1*)(intptr_t)(ws+4168) = v6194;
	i8 v6195 = (i8)(intptr_t)(f375_BlockRegisters);

	((void(*)(void))(intptr_t)v6195)();

	i8 v6196 = (i8)(intptr_t)(ws+4072);
	i8 v6197 = *(i8*)(intptr_t)v6196;
	i8 v6198 = v6197+(+66);
	i1 v6199 = *(i1*)(intptr_t)v6198;
	i8 v6200 = (i8)(intptr_t)(ws+4129);
	i1 v6201 = *(i1*)(intptr_t)v6200;
	i1 v6202 = v6199|v6201;
	i8 v6203 = (i8)(intptr_t)(ws+4072);
	i8 v6204 = *(i8*)(intptr_t)v6203;
	i8 v6205 = v6204+(+66);
	*(i1*)(intptr_t)v6205 = v6202;

	i8 v6206 = (i8)(intptr_t)(ws+4120);
	i8 v6207 = *(i8*)(intptr_t)v6206;
	*(i8*)(intptr_t)(ws+4152) = v6207;
	i8 v6208 = (i8)(intptr_t)(ws+4072);
	i8 v6209 = *(i8*)(intptr_t)v6208;
	i8 v6210 = v6209+(+49);
	i1 v6211 = *(i1*)(intptr_t)v6210;
	*(i1*)(intptr_t)(ws+4160) = v6211;
	i8 v6212 = (i8)(intptr_t)(ws+4088);
	i8 v6213 = *(i8*)(intptr_t)v6212;
	i8 v6214 = v6213+(+57);
	i1 v6215 = *(i1*)(intptr_t)v6214;
	*(i1*)(intptr_t)(ws+4161) = v6215;
	i8 v6216 = (i8)(intptr_t)(f379_CreateReload);

	((void(*)(void))(intptr_t)v6216)();

	goto c02_0498;

c02_049e:;

	i8 v6217 = (i8)(intptr_t)(ws+4088);
	i8 v6218 = *(i8*)(intptr_t)v6217;
	i8 v6219 = v6218+(+56);
	i1 v6220 = *(i1*)(intptr_t)v6219;
	i8 v6221 = (i8)(intptr_t)(ws+4129);
	i1 v6222 = *(i1*)(intptr_t)v6221;
	i8 v6223 = (i8)(intptr_t)(ws+4120);
	i8 v6224 = *(i8*)(intptr_t)v6223;
	i8 v6225 = v6224+(+64);
	i1 v6226 = *(i1*)(intptr_t)v6225;
	i1 v6227 = v6222|v6226;
	i1 v6228 = ~v6227;
	i1 v6229 = v6220&v6228;
	i8 v6230 = (i8)(intptr_t)(ws+4130);
	*(i1*)(intptr_t)v6230 = v6229;

	i8 v6231 = (i8)(intptr_t)(ws+4072);
	i8 v6232 = *(i8*)(intptr_t)v6231;
	i8 v6233 = v6232+(+48);
	i1 v6234 = *(i1*)(intptr_t)v6233;
	i8 v6235 = (i8)(intptr_t)(ws+4134);
	i1 v6236 = *(i1*)(intptr_t)v6235;
	i1 v6237 = v6234&v6236;
	i8 v6238 = (i8)(intptr_t)(ws+4072);
	i8 v6239 = *(i8*)(intptr_t)v6238;
	i8 v6240 = v6239+(+66);
	i1 v6241 = *(i1*)(intptr_t)v6240;
	i1 v6242 = ~v6241;
	i1 v6243 = v6237&v6242;
	i8 v6244 = (i8)(intptr_t)(ws+4135);
	*(i1*)(intptr_t)v6244 = v6243;

	i8 v6245 = (i8)(intptr_t)(ws+4130);
	i1 v6246 = *(i1*)(intptr_t)v6245;
	i1 v6247 = (i1)+0;
	if (v6246==v6247) goto c02_04a6; else goto c02_04a7;

c02_04a7:;

	i8 v6248 = (i8)(intptr_t)(ws+4135);
	i1 v6249 = *(i1*)(intptr_t)v6248;
	i1 v6250 = (i1)+0;
	if (v6249==v6250) goto c02_04a6; else goto c02_04a5;

c02_04a5:;

	i8 v6251 = (i8)(intptr_t)(ws+4135);
	i1 v6252 = *(i1*)(intptr_t)v6251;
	*(i1*)(intptr_t)(ws+4216) = v6252;
	i8 v6253 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6253)();

	i1 v6254 = *(i1*)(intptr_t)(ws+4217);
	i8 v6255 = (i8)(intptr_t)(ws+4140);
	*(i1*)(intptr_t)v6255 = v6254;

	i8 v6256 = (i8)(intptr_t)(ws+4140);
	i1 v6257 = *(i1*)(intptr_t)v6256;
	i8 v6258 = (i8)(intptr_t)(ws+4072);
	i8 v6259 = *(i8*)(intptr_t)v6258;
	i8 v6260 = v6259+(+49);
	*(i1*)(intptr_t)v6260 = v6257;

	i8 v6261 = (i8)(intptr_t)(ws+4130);
	i1 v6262 = *(i1*)(intptr_t)v6261;
	*(i1*)(intptr_t)(ws+4216) = v6262;
	i8 v6263 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6263)();

	i1 v6264 = *(i1*)(intptr_t)(ws+4217);
	i8 v6265 = (i8)(intptr_t)(ws+4141);
	*(i1*)(intptr_t)v6265 = v6264;

	i8 v6266 = (i8)(intptr_t)(ws+4141);
	i1 v6267 = *(i1*)(intptr_t)v6266;
	i8 v6268 = (i8)(intptr_t)(ws+4088);
	i8 v6269 = *(i8*)(intptr_t)v6268;
	i8 v6270 = v6269+(+57);
	*(i1*)(intptr_t)v6270 = v6267;

	i8 v6271 = (i8)(intptr_t)(ws+4088);
	i8 v6272 = *(i8*)(intptr_t)v6271;
	i8 v6273 = v6272+(+57);
	i1 v6274 = *(i1*)(intptr_t)v6273;
	*(i1*)(intptr_t)(ws+4152) = v6274;
	i8 v6275 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6275)();

	i1 v6276 = *(i1*)(intptr_t)(ws+4153);
	i8 v6277 = (i8)(intptr_t)(ws+4142);
	*(i1*)(intptr_t)v6277 = v6276;

	i8 v6278 = (i8)(intptr_t)(ws+4142);
	i1 v6279 = *(i1*)(intptr_t)v6278;
	i8 v6280 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6280 = v6279;

	i8 v6281 = (i8)(intptr_t)(ws+4120);
	i8 v6282 = *(i8*)(intptr_t)v6281;
	i8 v6283 = v6282+(+64);
	i1 v6284 = *(i1*)(intptr_t)v6283;
	i8 v6285 = (i8)(intptr_t)(ws+4129);
	i1 v6286 = *(i1*)(intptr_t)v6285;
	i1 v6287 = v6284|v6286;
	i8 v6288 = (i8)(intptr_t)(ws+4120);
	i8 v6289 = *(i8*)(intptr_t)v6288;
	i8 v6290 = v6289+(+64);
	*(i1*)(intptr_t)v6290 = v6287;

	i8 v6291 = (i8)(intptr_t)(ws+4120);
	i8 v6292 = *(i8*)(intptr_t)v6291;
	*(i8*)(intptr_t)(ws+4152) = v6292;
	i8 v6293 = (i8)(intptr_t)(ws+4072);
	i8 v6294 = *(i8*)(intptr_t)v6293;
	*(i8*)(intptr_t)(ws+4160) = v6294;
	i8 v6295 = (i8)(intptr_t)(ws+4129);
	i1 v6296 = *(i1*)(intptr_t)v6295;
	*(i1*)(intptr_t)(ws+4168) = v6296;
	i8 v6297 = (i8)(intptr_t)(f375_BlockRegisters);

	((void(*)(void))(intptr_t)v6297)();

	i8 v6298 = (i8)(intptr_t)(ws+4072);
	i8 v6299 = *(i8*)(intptr_t)v6298;
	i8 v6300 = v6299+(+49);
	i1 v6301 = *(i1*)(intptr_t)v6300;
	*(i1*)(intptr_t)(ws+4152) = v6301;
	i8 v6302 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6302)();

	i1 v6303 = *(i1*)(intptr_t)(ws+4153);
	i8 v6304 = (i8)(intptr_t)(ws+4143);
	*(i1*)(intptr_t)v6304 = v6303;

	i8 v6305 = (i8)(intptr_t)(ws+4072);
	i8 v6306 = *(i8*)(intptr_t)v6305;
	i8 v6307 = v6306+(+66);
	i1 v6308 = *(i1*)(intptr_t)v6307;
	i8 v6309 = (i8)(intptr_t)(ws+4143);
	i1 v6310 = *(i1*)(intptr_t)v6309;
	i1 v6311 = v6308|v6310;
	i8 v6312 = (i8)(intptr_t)(ws+4072);
	i8 v6313 = *(i8*)(intptr_t)v6312;
	i8 v6314 = v6313+(+66);
	*(i1*)(intptr_t)v6314 = v6311;

	i8 v6315 = (i8)(intptr_t)(ws+4072);
	i8 v6316 = *(i8*)(intptr_t)v6315;
	*(i8*)(intptr_t)(ws+4152) = v6316;
	i8 v6317 = (i8)(intptr_t)(ws+4072);
	i8 v6318 = *(i8*)(intptr_t)v6317;
	i8 v6319 = v6318+(+49);
	i1 v6320 = *(i1*)(intptr_t)v6319;
	*(i1*)(intptr_t)(ws+4160) = v6320;
	i8 v6321 = (i8)(intptr_t)(ws+4088);
	i8 v6322 = *(i8*)(intptr_t)v6321;
	i8 v6323 = v6322+(+57);
	i1 v6324 = *(i1*)(intptr_t)v6323;
	*(i1*)(intptr_t)(ws+4161) = v6324;
	i8 v6325 = (i8)(intptr_t)(f378_CreateSpill);

	((void(*)(void))(intptr_t)v6325)();

	goto c02_04a0;

c02_04a6:;


	i8 v6404 = (i8)(intptr_t)(ws+4072);
	i8 v6405 = *(i8*)(intptr_t)v6404;
	i8 v6406 = v6405+(+48);
	i1 v6407 = *(i1*)(intptr_t)v6406;
	i8 v6408 = (i8)(intptr_t)(ws+4134);
	i1 v6409 = *(i1*)(intptr_t)v6408;
	i1 v6410 = v6407&v6409;
	i8 v6411 = (i8)(intptr_t)(ws+4072);
	i8 v6412 = *(i8*)(intptr_t)v6411;
	i8 v6413 = v6412+(+66);
	i1 v6414 = *(i1*)(intptr_t)v6413;
	i1 v6415 = ~v6414;
	i1 v6416 = v6410&v6415;
	i8 v6417 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6417 = v6416;

	i8 v6418 = (i8)(intptr_t)(ws+4113);
	i1 v6419 = *(i1*)(intptr_t)v6418;
	i1 v6420 = (i1)+0;
	if (v6419==v6420) goto c02_04ab; else goto c02_04ac;

c02_04ab:;

	i8 v6421 = (i8)(intptr_t)c02_s01d6;
	*(i8*)(intptr_t)(ws+4152) = v6421;
	i8 v6422 = (i8)(intptr_t)(f396_deadlock);

	((void(*)(void))(intptr_t)v6422)();

c02_04ac:;

c02_04a8:;

	i8 v6423 = (i8)(intptr_t)(ws+4113);
	i1 v6424 = *(i1*)(intptr_t)v6423;
	*(i1*)(intptr_t)(ws+4216) = v6424;
	i8 v6425 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6425)();

	i1 v6426 = *(i1*)(intptr_t)(ws+4217);
	i8 v6427 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v6427 = v6426;

	i8 v6428 = (i8)(intptr_t)(ws+4144);
	i1 v6429 = *(i1*)(intptr_t)v6428;
	i8 v6430 = (i8)(intptr_t)(ws+4072);
	i8 v6431 = *(i8*)(intptr_t)v6430;
	i8 v6432 = v6431+(+49);
	*(i1*)(intptr_t)v6432 = v6429;

	i8 v6433 = (i8)(intptr_t)(ws+4072);
	i8 v6434 = *(i8*)(intptr_t)v6433;
	i8 v6435 = v6434+(+49);
	i1 v6436 = *(i1*)(intptr_t)v6435;
	*(i1*)(intptr_t)(ws+4152) = v6436;
	i8 v6437 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6437)();

	i1 v6438 = *(i1*)(intptr_t)(ws+4153);
	i8 v6439 = (i8)(intptr_t)(ws+4145);
	*(i1*)(intptr_t)v6439 = v6438;

	i8 v6440 = (i8)(intptr_t)(ws+4072);
	i8 v6441 = *(i8*)(intptr_t)v6440;
	i8 v6442 = v6441+(+66);
	i1 v6443 = *(i1*)(intptr_t)v6442;
	i8 v6444 = (i8)(intptr_t)(ws+4145);
	i1 v6445 = *(i1*)(intptr_t)v6444;
	i1 v6446 = v6443|v6445;
	i8 v6447 = (i8)(intptr_t)(ws+4072);
	i8 v6448 = *(i8*)(intptr_t)v6447;
	i8 v6449 = v6448+(+66);
	*(i1*)(intptr_t)v6449 = v6446;

	i8 v6450 = (i8)(intptr_t)(ws+4072);
	i8 v6451 = *(i8*)(intptr_t)v6450;
	*(i8*)(intptr_t)(ws+4152) = v6451;
	i8 v6452 = (i8)(intptr_t)(ws+4072);
	i8 v6453 = *(i8*)(intptr_t)v6452;
	i8 v6454 = v6453+(+49);
	i1 v6455 = *(i1*)(intptr_t)v6454;
	*(i1*)(intptr_t)(ws+4160) = v6455;
	i1 v6456 = (i1)+0;
	*(i1*)(intptr_t)(ws+4161) = v6456;
	i8 v6457 = (i8)(intptr_t)(f378_CreateSpill);

	((void(*)(void))(intptr_t)v6457)();

	i8 v6458 = (i8)(intptr_t)(ws+4088);
	i8 v6459 = *(i8*)(intptr_t)v6458;
	i8 v6460 = v6459+(+56);
	i1 v6461 = *(i1*)(intptr_t)v6460;
	i8 v6462 = (i8)(intptr_t)(ws+4120);
	i8 v6463 = *(i8*)(intptr_t)v6462;
	i8 v6464 = v6463+(+64);
	i1 v6465 = *(i1*)(intptr_t)v6464;
	i1 v6466 = ~v6465;
	i1 v6467 = v6461&v6466;
	i8 v6468 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6468 = v6467;

	i8 v6469 = (i8)(intptr_t)(ws+4113);
	i1 v6470 = *(i1*)(intptr_t)v6469;
	i1 v6471 = (i1)+0;
	if (v6470==v6471) goto c02_04b0; else goto c02_04b1;

c02_04b0:;

	i8 v6472 = (i8)(intptr_t)c02_s01d7;
	*(i8*)(intptr_t)(ws+4152) = v6472;
	i8 v6473 = (i8)(intptr_t)(f396_deadlock);

	((void(*)(void))(intptr_t)v6473)();

c02_04b1:;

c02_04ad:;

	i8 v6474 = (i8)(intptr_t)(ws+4113);
	i1 v6475 = *(i1*)(intptr_t)v6474;
	*(i1*)(intptr_t)(ws+4216) = v6475;
	i8 v6476 = (i8)(intptr_t)(f151_FindFirst);

	((void(*)(void))(intptr_t)v6476)();

	i1 v6477 = *(i1*)(intptr_t)(ws+4217);
	i8 v6478 = (i8)(intptr_t)(ws+4146);
	*(i1*)(intptr_t)v6478 = v6477;

	i8 v6479 = (i8)(intptr_t)(ws+4146);
	i1 v6480 = *(i1*)(intptr_t)v6479;
	i8 v6481 = (i8)(intptr_t)(ws+4088);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = v6482+(+57);
	*(i1*)(intptr_t)v6483 = v6480;

	i8 v6484 = (i8)(intptr_t)(ws+4088);
	i8 v6485 = *(i8*)(intptr_t)v6484;
	i8 v6486 = v6485+(+57);
	i1 v6487 = *(i1*)(intptr_t)v6486;
	*(i1*)(intptr_t)(ws+4152) = v6487;
	i8 v6488 = (i8)(intptr_t)(f149_FindConflictingRegisters);

	((void(*)(void))(intptr_t)v6488)();

	i1 v6489 = *(i1*)(intptr_t)(ws+4153);
	i8 v6490 = (i8)(intptr_t)(ws+4147);
	*(i1*)(intptr_t)v6490 = v6489;

	i8 v6491 = (i8)(intptr_t)(ws+4120);
	i8 v6492 = *(i8*)(intptr_t)v6491;
	i8 v6493 = v6492+(+64);
	i1 v6494 = *(i1*)(intptr_t)v6493;
	i8 v6495 = (i8)(intptr_t)(ws+4147);
	i1 v6496 = *(i1*)(intptr_t)v6495;
	i1 v6497 = v6494|v6496;
	i8 v6498 = (i8)(intptr_t)(ws+4120);
	i8 v6499 = *(i8*)(intptr_t)v6498;
	i8 v6500 = v6499+(+64);
	*(i1*)(intptr_t)v6500 = v6497;

	i8 v6501 = (i8)(intptr_t)(ws+4120);
	i8 v6502 = *(i8*)(intptr_t)v6501;
	*(i8*)(intptr_t)(ws+4152) = v6502;
	i1 v6503 = (i1)+0;
	*(i1*)(intptr_t)(ws+4160) = v6503;
	i8 v6504 = (i8)(intptr_t)(ws+4088);
	i8 v6505 = *(i8*)(intptr_t)v6504;
	i8 v6506 = v6505+(+57);
	i1 v6507 = *(i1*)(intptr_t)v6506;
	*(i1*)(intptr_t)(ws+4161) = v6507;
	i8 v6508 = (i8)(intptr_t)(f379_CreateReload);

	((void(*)(void))(intptr_t)v6508)();

c02_04a0:;

c02_0498:;

c02_0493:;

c02_0489:;

}
	void f395_AllocateRegister(void);

// UpdateProducedRegisters workspace at ws+4112 length ws+1
void f397_UpdateProducedRegisters(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v6510 = (i1)+0;
	i8 v6511 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6511 = v6510;

c02_04b2:;

	i8 v6512 = (i8)(intptr_t)(ws+4032);
	i1 v6513 = *(i1*)(intptr_t)v6512;
	i1 v6514 = (i1)+4;
	if (v6513==v6514) goto c02_04b7; else goto c02_04b6;

c02_04b6:;

	i8 v6515 = (i8)(intptr_t)(ws+4072);
	i8 v6516 = *(i8*)(intptr_t)v6515;
	i8 v6517 = v6516+(+16);
	i8 v6518 = (i8)(intptr_t)(ws+4032);
	i1 v6519 = *(i1*)(intptr_t)v6518;
	i8 v6520 = v6519;
	i1 v6521 = (i1)+3;
	i8 v6522 = ((i8)v6520)<<v6521;
	i8 v6523 = v6517+v6522;
	i8 v6524 = *(i8*)(intptr_t)v6523;
	i8 v6525 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v6525 = v6524;

	i8 v6526 = (i8)(intptr_t)(ws+4088);
	i8 v6527 = *(i8*)(intptr_t)v6526;
	i8 v6528 = (i8)+0;
	if (v6527==v6528) goto c02_04be; else goto c02_04bf;

c02_04bf:;

	i8 v6529 = (i8)(intptr_t)(ws+4088);
	i8 v6530 = *(i8*)(intptr_t)v6529;
	i8 v6531 = v6530+(+56);
	i1 v6532 = *(i1*)(intptr_t)v6531;
	i1 v6533 = (i1)-1;
	if (v6532==v6533) goto c02_04bd; else goto c02_04be;

c02_04bd:;

	i8 v6534 = (i8)(intptr_t)(ws+4072);
	i8 v6535 = *(i8*)(intptr_t)v6534;
	i8 v6536 = v6535+(+49);
	i1 v6537 = *(i1*)(intptr_t)v6536;
	i8 v6538 = (i8)(intptr_t)(ws+4088);
	i8 v6539 = *(i8*)(intptr_t)v6538;
	i8 v6540 = v6539+(+56);
	*(i1*)(intptr_t)v6540 = v6537;

	i1 v6541 = (i1)+0;
	i8 v6542 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v6542 = v6541;

c02_04c0:;

	i8 v6543 = (i8)(intptr_t)(ws+4112);
	i1 v6544 = *(i1*)(intptr_t)v6543;
	i1 v6545 = (i1)+4;
	if (v6544==v6545) goto c02_04c5; else goto c02_04c4;

c02_04c4:;

	i8 v6546 = (i8)(intptr_t)(ws+4032);
	i1 v6547 = *(i1*)(intptr_t)v6546;
	i8 v6548 = (i8)(intptr_t)(ws+4112);
	i1 v6549 = *(i1*)(intptr_t)v6548;
	if (v6547==v6549) goto c02_04ca; else goto c02_04c9;

c02_04c9:;

	i8 v6550 = (i8)(intptr_t)(ws+4072);
	i8 v6551 = *(i8*)(intptr_t)v6550;
	i8 v6552 = v6551+(+16);
	i8 v6553 = (i8)(intptr_t)(ws+4112);
	i1 v6554 = *(i1*)(intptr_t)v6553;
	i8 v6555 = v6554;
	i1 v6556 = (i1)+3;
	i8 v6557 = ((i8)v6555)<<v6556;
	i8 v6558 = v6552+v6557;
	i8 v6559 = *(i8*)(intptr_t)v6558;
	i8 v6560 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v6560 = v6559;

	i8 v6561 = (i8)(intptr_t)(ws+4088);
	i8 v6562 = *(i8*)(intptr_t)v6561;
	i8 v6563 = (i8)+0;
	if (v6562==v6563) goto c02_04cf; else goto c02_04ce;

c02_04ce:;

	i8 v6564 = (i8)(intptr_t)(ws+4088);
	i8 v6565 = *(i8*)(intptr_t)v6564;
	i8 v6566 = v6565+(+56);
	i1 v6567 = *(i1*)(intptr_t)v6566;
	i8 v6568 = (i8)(intptr_t)(ws+4072);
	i8 v6569 = *(i8*)(intptr_t)v6568;
	i8 v6570 = v6569+(+49);
	i1 v6571 = *(i1*)(intptr_t)v6570;
	i1 v6572 = ~v6571;
	i1 v6573 = v6567&v6572;
	i8 v6574 = (i8)(intptr_t)(ws+4088);
	i8 v6575 = *(i8*)(intptr_t)v6574;
	i8 v6576 = v6575+(+56);
	*(i1*)(intptr_t)v6576 = v6573;

c02_04cf:;

c02_04cb:;

c02_04ca:;

c02_04c6:;

	i8 v6577 = (i8)(intptr_t)(ws+4112);
	i1 v6578 = *(i1*)(intptr_t)v6577;
	i1 v6579 = v6578+(+1);
	i8 v6580 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v6580 = v6579;

	goto c02_04c0;

c02_04c5:;

c02_04be:;

c02_04b8:;

	i8 v6581 = (i8)(intptr_t)(ws+4032);
	i1 v6582 = *(i1*)(intptr_t)v6581;
	i1 v6583 = v6582+(+1);
	i8 v6584 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6584 = v6583;

	goto c02_04b2;

c02_04b7:;

}
	void f397_UpdateProducedRegisters(void);
	void f380_ShuffleRegisters(void);
	void f190_EmitOneInstruction(void);
	void f380_ShuffleRegisters(void);
	void f157_ArchEndInstruction(void);
	void f79_FreeNode(void);
	void f148_FreeInstruction(void);

// EmitAndFreeInstructions workspace at ws+4112 length ws+8
void f398_EmitAndFreeInstructions(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

c02_04d0:;

	i8 v6586 = (i8)(intptr_t)(ws+4048);
	i8 v6587 = *(i8*)(intptr_t)v6586;
	i8 v6588 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v6588 = v6587;

	i8 v6589 = (i8)(intptr_t)(ws+4112);
	i8 v6590 = *(i8*)(intptr_t)v6589;
	i8 v6591 = (i8)+0;
	if (v6590==v6591) goto c02_04d5; else goto c02_04d6;

c02_04d5:;

	goto c02_04d1;

c02_04d6:;

c02_04d2:;

	i8 v6592 = (i8)(intptr_t)(ws+4048);
	i8 v6593 = *(i8*)(intptr_t)v6592;
	i8 v6594 = v6593+(+8);
	i8 v6595 = *(i8*)(intptr_t)v6594;
	i8 v6596 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v6596 = v6595;

	i8 v6597 = (i8)(intptr_t)(ws+4112);
	i8 v6598 = *(i8*)(intptr_t)v6597;
	i8 v6599 = v6598+(+75);
	*(i8*)(intptr_t)(ws+4120) = v6599;
	i8 v6600 = (i8)(intptr_t)(f380_ShuffleRegisters);

	((void(*)(void))(intptr_t)v6600)();

	i8 v6601 = (i8)(intptr_t)(ws+4112);
	i8 v6602 = *(i8*)(intptr_t)v6601;
	i8 v6603 = v6602+(+16);
	i8 v6604 = *(i8*)(intptr_t)v6603;
	i8 v6605 = v6604+(+256);
	i1 v6606 = *(i1*)(intptr_t)v6605;
	i1 v6607 = (i1)+18;
	if (v6606==v6607) goto c02_04da; else goto c02_04db;

c02_04da:;

	i1 v6608 = (i1)+1;
	i8 v6609 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v6609 = v6608;

c02_04db:;

c02_04d7:;

	i8 v6610 = (i8)(intptr_t)(ws+4112);
	i8 v6611 = *(i8*)(intptr_t)v6610;
	i8 v6612 = v6611+(+86);
	i1 v6613 = *(i1*)(intptr_t)v6612;
	*(i1*)(intptr_t)(ws+4120) = v6613;
	i8 v6614 = (i8)(intptr_t)(ws+4112);
	i8 v6615 = *(i8*)(intptr_t)v6614;
	*(i8*)(intptr_t)(ws+4128) = v6615;
	i8 v6616 = (i8)(intptr_t)(f190_EmitOneInstruction);

	((void(*)(void))(intptr_t)v6616)();

	i8 v6617 = (i8)(intptr_t)(ws+4112);
	i8 v6618 = *(i8*)(intptr_t)v6617;
	i8 v6619 = v6618+(+67);
	*(i8*)(intptr_t)(ws+4120) = v6619;
	i8 v6620 = (i8)(intptr_t)(f380_ShuffleRegisters);

	((void(*)(void))(intptr_t)v6620)();

	i8 v6621 = (i8)(intptr_t)(f157_ArchEndInstruction);

	((void(*)(void))(intptr_t)v6621)();

	i8 v6622 = (i8)(intptr_t)(ws+4112);
	i8 v6623 = *(i8*)(intptr_t)v6622;
	i8 v6624 = v6623+(+16);
	i8 v6625 = *(i8*)(intptr_t)v6624;
	i8 v6626 = v6625+(+256);
	i1 v6627 = *(i1*)(intptr_t)v6626;
	i1 v6628 = (i1)+23;
	if (v6627==v6628) goto c02_04df; else goto c02_04e0;

c02_04df:;

	i1 v6629 = (i1)+0;
	i8 v6630 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v6630 = v6629;

c02_04e0:;

c02_04dc:;

	i8 v6631 = (i8)(intptr_t)(ws+4112);
	i8 v6632 = *(i8*)(intptr_t)v6631;
	i8 v6633 = v6632+(+16);
	i8 v6634 = *(i8*)(intptr_t)v6633;
	i8 v6635 = v6634+(+256);
	i1 v6636 = *(i1*)(intptr_t)v6635;
	i1 v6637 = (i1)+24;
	if (v6636==v6637) goto c02_04e4; else goto c02_04e5;

c02_04e4:;

	i8 v6638 = (i8)(intptr_t)(ws+4112);
	i8 v6639 = *(i8*)(intptr_t)v6638;
	i8 v6640 = v6639+(+16);
	i8 v6641 = *(i8*)(intptr_t)v6640;
	*(i8*)(intptr_t)(ws+4144) = v6641;
	i8 v6642 = (i8)(intptr_t)(f79_FreeNode);

	((void(*)(void))(intptr_t)v6642)();

c02_04e5:;

c02_04e1:;

	i8 v6643 = (i8)(intptr_t)(ws+4112);
	i8 v6644 = *(i8*)(intptr_t)v6643;
	*(i8*)(intptr_t)(ws+4120) = v6644;
	i8 v6645 = (i8)(intptr_t)(f148_FreeInstruction);

	((void(*)(void))(intptr_t)v6645)();

	goto c02_04d0;

c02_04d1:;

}
	void f398_EmitAndFreeInstructions(void);
	void f158_ArchEndGroup(void);
	void f64_Discard(void);

// Generate workspace at ws+4024 length ws+88
void f388_Generate(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v5333 = (i8)+0;
	i8 v5334 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v5334 = v5333;

	i8 v5335 = (i8)+0;
	i8 v5336 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v5336 = v5335;

	i8 v5337 = (i8)(intptr_t)(ws+184);
	i8 v5338 = *(i8*)(intptr_t)v5337;
	i8 v5339 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v5339 = v5338;

	i8 v5340 = (i8)(intptr_t)(ws+4024);
	i8 v5341 = *(i8*)(intptr_t)v5340;
	*(i8*)(intptr_t)(ws+4232) = v5341;
	i8 v5342 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v5342)();

c02_03c7:;

	i8 v5343 = (i8)(intptr_t)(ws+184);
	i8 v5344 = *(i8*)(intptr_t)v5343;
	i8 v5345 = (i8)(intptr_t)(ws+4056);
	i8 v5346 = *(i8*)(intptr_t)v5345;
	if (v5344==v5346) goto c02_03cc; else goto c02_03cb;

c02_03cb:;

	i8 v5347 = (i8)(intptr_t)(f147_AllocNewInstruction);

	((void(*)(void))(intptr_t)v5347)();

	i8 v5348 = *(i8*)(intptr_t)(ws+4112);
	i8 v5349 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v5349 = v5348;

	i8 v5350 = (i8)(intptr_t)(ws+4064);
	i8 v5351 = *(i8*)(intptr_t)v5350;
	i8 v5352 = (i8)(intptr_t)(ws+4072);
	*(i8*)(intptr_t)v5352 = v5351;

	i8 v5353 = (i8)(intptr_t)(ws+4040);
	i8 v5354 = *(i8*)(intptr_t)v5353;
	i8 v5355 = (i8)+0;
	if (v5354==v5355) goto c02_03d0; else goto c02_03d1;

c02_03d0:;

	i8 v5356 = (i8)(intptr_t)(ws+4072);
	i8 v5357 = *(i8*)(intptr_t)v5356;
	i8 v5358 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v5358 = v5357;

	i8 v5359 = (i8)(intptr_t)(ws+4072);
	i8 v5360 = *(i8*)(intptr_t)v5359;
	i8 v5361 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v5361 = v5360;

	goto c02_03cd;

c02_03d1:;

	i8 v5362 = (i8)(intptr_t)(ws+4072);
	i8 v5363 = *(i8*)(intptr_t)v5362;
	i8 v5364 = (i8)(intptr_t)(ws+4048);
	i8 v5365 = *(i8*)(intptr_t)v5364;
	*(i8*)(intptr_t)v5365 = v5363;

	i8 v5366 = (i8)(intptr_t)(ws+4048);
	i8 v5367 = *(i8*)(intptr_t)v5366;
	i8 v5368 = (i8)(intptr_t)(ws+4072);
	i8 v5369 = *(i8*)(intptr_t)v5368;
	i8 v5370 = v5369+(+8);
	*(i8*)(intptr_t)v5370 = v5367;

	i8 v5371 = (i8)(intptr_t)(ws+4072);
	i8 v5372 = *(i8*)(intptr_t)v5371;
	i8 v5373 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v5373 = v5372;

c02_03cd:;

	i8 v5374 = (i8)(intptr_t)(f62_PopNode);

	((void(*)(void))(intptr_t)v5374)();

	i8 v5375 = *(i8*)(intptr_t)(ws+4232);
	i8 v5376 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v5376 = v5375;

	i8 v5377 = (i8)(intptr_t)(ws+4080);
	i8 v5378 = *(i8*)(intptr_t)v5377;
	i8 v5379 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v5379 = v5378;


	i8 v5765 = (i8)(intptr_t)(f389_InstructionMatcher);

	((void(*)(void))(intptr_t)v5765)();

	i8 v5766 = (i8)(intptr_t)(ws+4072);
	i8 v5767 = *(i8*)(intptr_t)v5766;
	i8 v5768 = v5767+(+48);
	i1 v5769 = *(i1*)(intptr_t)v5768;
	i1 v5770 = (i1)+0;
	if (v5769==v5770) goto c02_0448; else goto c02_0447;

c02_0447:;



	i8 v6509 = (i8)(intptr_t)(f395_AllocateRegister);

	((void(*)(void))(intptr_t)v6509)();


	i8 v6585 = (i8)(intptr_t)(f397_UpdateProducedRegisters);

	((void(*)(void))(intptr_t)v6585)();

c02_0448:;

c02_0444:;

	goto c02_03c7;

c02_03cc:;


	i8 v6646 = (i8)(intptr_t)(f398_EmitAndFreeInstructions);

	((void(*)(void))(intptr_t)v6646)();

	i8 v6647 = (i8)(intptr_t)(f158_ArchEndGroup);

	((void(*)(void))(intptr_t)v6647)();

	i8 v6648 = (i8)(intptr_t)(ws+4024);
	i8 v6649 = *(i8*)(intptr_t)v6648;
	*(i8*)(intptr_t)(ws+4112) = v6649;
	i8 v6650 = (i8)(intptr_t)(f64_Discard);

	((void(*)(void))(intptr_t)v6650)();

}
const i1 c02_s01d8[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(void);

// PushNode workspace at ws+4232 length ws+8
void f61_PushNode(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v6812 = (i8)(intptr_t)(ws+4232);
	i8 v6813 = *(i8*)(intptr_t)v6812;
	i8 v6814 = (i8)+0;
	if (v6813==v6814) goto c02_0500; else goto c02_04ff;

c02_04ff:;

	i8 v6815 = (i8)(intptr_t)(ws+184);
	i8 v6816 = *(i8*)(intptr_t)v6815;
	i8 v6817 = (i8)(intptr_t)(ws+184);
	if (v6816==v6817) goto c02_0504; else goto c02_0505;

c02_0504:;

	i8 v6818 = (i8)(intptr_t)c02_s01d8;
	*(i8*)(intptr_t)(ws+4280) = v6818;
	i8 v6819 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v6819)();

c02_0505:;

c02_0501:;

	i8 v6820 = (i8)(intptr_t)(ws+4232);
	i8 v6821 = *(i8*)(intptr_t)v6820;
	i8 v6822 = (i8)(intptr_t)(ws+184);
	i8 v6823 = *(i8*)(intptr_t)v6822;
	*(i8*)(intptr_t)v6823 = v6821;

	i8 v6824 = (i8)(intptr_t)(ws+184);
	i8 v6825 = *(i8*)(intptr_t)v6824;
	i8 v6826 = v6825+(+8);
	i8 v6827 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v6827 = v6826;

c02_0500:;

c02_04fc:;

}

// PopNode workspace at ws+4232 length ws+8
void f62_PopNode(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v6828 = (i8)(intptr_t)(ws+184);
	i8 v6829 = *(i8*)(intptr_t)v6828;
	i8 v6830 = v6829+(-8);
	i8 v6831 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v6831 = v6830;

	i8 v6832 = (i8)(intptr_t)(ws+184);
	i8 v6833 = *(i8*)(intptr_t)v6832;
	i8 v6834 = *(i8*)(intptr_t)v6833;
	i8 v6835 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v6835 = v6834;

}
	void f62_PopNode(void);
	void f61_PushNode(void);
	void f61_PushNode(void);

// NextNode workspace at ws+4216 length ws+16
void f63_NextNode(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v6836 = (i8)(intptr_t)(f62_PopNode);

	((void(*)(void))(intptr_t)v6836)();

	i8 v6837 = *(i8*)(intptr_t)(ws+4232);
	i8 v6838 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v6838 = v6837;

	i8 v6839 = (i8)(intptr_t)(ws+4224);
	i8 v6840 = *(i8*)(intptr_t)v6839;
	i8 v6841 = (i8)(intptr_t)(ws+4216);
	*(i8*)(intptr_t)v6841 = v6840;

	i8 v6842 = (i8)(intptr_t)(ws+4216);
	i8 v6843 = *(i8*)(intptr_t)v6842;
	i8 v6844 = (i8)+0;
	if (v6843==v6844) goto c02_050a; else goto c02_0509;

c02_0509:;

	i8 v6845 = (i8)(intptr_t)(ws+4216);
	i8 v6846 = *(i8*)(intptr_t)v6845;
	i8 v6847 = v6846+(+24);
	i8 v6848 = *(i8*)(intptr_t)v6847;
	*(i8*)(intptr_t)(ws+4232) = v6848;
	i8 v6849 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v6849)();

	i8 v6850 = (i8)(intptr_t)(ws+4216);
	i8 v6851 = *(i8*)(intptr_t)v6850;
	i8 v6852 = v6851+(+32);
	i8 v6853 = *(i8*)(intptr_t)v6852;
	*(i8*)(intptr_t)(ws+4232) = v6853;
	i8 v6854 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v6854)();

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
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v6855 = (i8)(intptr_t)(ws+184);
	i8 v6856 = *(i8*)(intptr_t)v6855;
	i8 v6857 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v6857 = v6856;

	i8 v6858 = (i8)(intptr_t)(ws+4112);
	i8 v6859 = *(i8*)(intptr_t)v6858;
	*(i8*)(intptr_t)(ws+4232) = v6859;
	i8 v6860 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(void))(intptr_t)v6860)();

c02_050b:;

	i8 v6861 = (i8)(intptr_t)(ws+184);
	i8 v6862 = *(i8*)(intptr_t)v6861;
	i8 v6863 = (i8)(intptr_t)(ws+4120);
	i8 v6864 = *(i8*)(intptr_t)v6863;
	if (v6862==v6864) goto c02_0510; else goto c02_050f;

c02_050f:;

	i8 v6865 = (i8)(intptr_t)(f63_NextNode);

	((void(*)(void))(intptr_t)v6865)();

	i8 v6866 = *(i8*)(intptr_t)(ws+4216);
	i8 v6867 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v6867 = v6866;

	i8 v6868 = (i8)(intptr_t)(ws+4128);
	i8 v6869 = *(i8*)(intptr_t)v6868;
	i8 v6870 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v6870 = v6869;

	i8 v6871 = (i8)(intptr_t)(ws+4136);
	i8 v6872 = *(i8*)(intptr_t)v6871;
	i8 v6873 = v6872+(+256);
	i1 v6874 = *(i1*)(intptr_t)v6873;

	if (v6874 != +19) goto c02_0512;

	i8 v6875 = (i8)(intptr_t)(ws+4136);
	i8 v6876 = *(i8*)(intptr_t)v6875;
	i8 v6877 = *(i8*)(intptr_t)v6876;
	*(i8*)(intptr_t)(ws+4280) = v6877;
	i8 v6878 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6878)();

	goto c02_0511;

c02_0512:;

	if (v6874 != +12) goto c02_0513;

	i8 v6879 = (i8)(intptr_t)(ws+4136);
	i8 v6880 = *(i8*)(intptr_t)v6879;
	i8 v6881 = *(i8*)(intptr_t)v6880;
	*(i8*)(intptr_t)(ws+4280) = v6881;
	i8 v6882 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6882)();

	goto c02_0511;

c02_0513:;

	if (v6874 != +43) goto c02_0514;

	i8 v6883 = (i8)(intptr_t)(ws+4136);
	i8 v6884 = *(i8*)(intptr_t)v6883;
	i8 v6885 = *(i8*)(intptr_t)v6884;
	*(i8*)(intptr_t)(ws+4280) = v6885;
	i8 v6886 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v6886)();

c02_0514:;

c02_0511:;


	i8 v6887 = (i8)(intptr_t)(ws+4136);
	i8 v6888 = *(i8*)(intptr_t)v6887;
	*(i8*)(intptr_t)(ws+4144) = v6888;
	i8 v6889 = (i8)(intptr_t)(f79_FreeNode);

	((void(*)(void))(intptr_t)v6889)();

	goto c02_050b;

c02_0510:;

}
	void f115_I_b8(void);
	void f77_AllocateNewNode(void);

// I_node workspace at ws+4024 length ws+49
void f401_I_node(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i1 v6890 = (i1)+1;
	i8 v6891 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6891 = v6890;

	i8 v6892 = (i8)+0;
	i8 v6893 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v6893 = v6892;

c02_0515:;

	i8 v6894 = (i8)(intptr_t)(ws+4032);
	i1 v6895 = *(i1*)(intptr_t)v6894;
	i1 v6896 = (i1)+0;
	if (v6895==v6896) goto c02_051a; else goto c02_0519;

c02_0519:;

	i8 v6897 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v6897)();

	i1 v6898 = *(i1*)(intptr_t)(ws+4152);
	i8 v6899 = (i8)(intptr_t)(ws+4033);
	*(i1*)(intptr_t)v6899 = v6898;

	i8 v6900 = (i8)(intptr_t)(ws+4033);
	i1 v6901 = *(i1*)(intptr_t)v6900;
	i8 v6902 = (i8)(intptr_t)(ws+4034);
	*(i1*)(intptr_t)v6902 = v6901;

	i8 v6903 = (i8)(intptr_t)(ws+4034);
	i1 v6904 = *(i1*)(intptr_t)v6903;
	*(i1*)(intptr_t)(ws+4216) = v6904;
	i8 v6905 = (i8)(intptr_t)(f77_AllocateNewNode);

	((void(*)(void))(intptr_t)v6905)();

	i8 v6906 = *(i8*)(intptr_t)(ws+4224);
	i8 v6907 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v6907 = v6906;

	i8 v6908 = (i8)(intptr_t)(ws+4040);
	i8 v6909 = *(i8*)(intptr_t)v6908;
	i8 v6910 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v6910 = v6909;

	i8 v6911 = (i8)(intptr_t)(ws+4024);
	i8 v6912 = *(i8*)(intptr_t)v6911;
	i8 v6913 = (i8)(intptr_t)(ws+4048);
	i8 v6914 = *(i8*)(intptr_t)v6913;
	i8 v6915 = v6914+(+64);
	*(i8*)(intptr_t)v6915 = v6912;

	i8 v6916 = (i8)(intptr_t)(ws+4048);
	i8 v6917 = *(i8*)(intptr_t)v6916;
	i8 v6918 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v6918 = v6917;

	i8 v6919 = (i8)(intptr_t)((i1*)f3___main_s0170);
	i8 v6920 = (i8)(intptr_t)(ws+4034);
	i1 v6921 = *(i1*)(intptr_t)v6920;
	i1 v6922 = v6921+(-1);
	i8 v6923 = v6922;
	i8 v6924 = v6919+v6923;
	i1 v6925 = *(i1*)(intptr_t)v6924;
	i8 v6926 = (i8)(intptr_t)(ws+4056);
	*(i1*)(intptr_t)v6926 = v6925;

	i8 v6927 = (i8)(intptr_t)(ws+4048);
	i8 v6928 = *(i8*)(intptr_t)v6927;
	*(i8*)(intptr_t)(ws+4080) = v6928;
	i8 v6929 = (i8)(intptr_t)((i1*)f3___main_s016f);
	i8 v6930 = (i8)(intptr_t)(ws+4056);
	i1 v6931 = *(i1*)(intptr_t)v6930;
	i8 v6932 = v6931;
	i1 v6933 = (i1)+3;
	i8 v6934 = ((i8)v6932)<<v6933;
	i8 v6935 = v6929+v6934;
	i8 v6936 = *(i8*)(intptr_t)v6935;

	((void(*)(void))(intptr_t)v6936)();

	i8 v6937 = (i8)(intptr_t)(ws+4032);
	i1 v6938 = *(i1*)(intptr_t)v6937;
	i8 v6939 = (i8)(intptr_t)((i1*)f3___main_s0171);
	i8 v6940 = (i8)(intptr_t)(ws+4034);
	i1 v6941 = *(i1*)(intptr_t)v6940;
	i1 v6942 = v6941+(-1);
	i8 v6943 = v6942;
	i8 v6944 = v6939+v6943;
	i1 v6945 = *(i1*)(intptr_t)v6944;
	i1 v6946 = v6938+v6945;
	i1 v6947 = v6946+(-1);
	i8 v6948 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6948 = v6947;

	goto c02_0515;

c02_051a:;

	i8 v6949 = (i8)+0;
	i8 v6950 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6950 = v6949;

c02_051b:;

	i8 v6951 = (i8)(intptr_t)(ws+4024);
	i8 v6952 = *(i8*)(intptr_t)v6951;
	i8 v6953 = (i8)+0;
	if (v6952==v6953) goto c02_0520; else goto c02_051f;

c02_051f:;

	i8 v6954 = (i8)(intptr_t)(ws+4024);
	i8 v6955 = *(i8*)(intptr_t)v6954;
	i8 v6956 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v6956 = v6955;

	i8 v6957 = (i8)(intptr_t)(ws+4048);
	i8 v6958 = *(i8*)(intptr_t)v6957;
	i8 v6959 = v6958+(+64);
	i8 v6960 = *(i8*)(intptr_t)v6959;
	i8 v6961 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v6961 = v6960;

	i8 v6962 = (i8)(intptr_t)((i1*)f3___main_s0171);
	i8 v6963 = (i8)(intptr_t)(ws+4048);
	i8 v6964 = *(i8*)(intptr_t)v6963;
	i8 v6965 = v6964+(+256);
	i1 v6966 = *(i1*)(intptr_t)v6965;
	i1 v6967 = v6966+(-1);
	i8 v6968 = v6967;
	i8 v6969 = v6962+v6968;
	i1 v6970 = *(i1*)(intptr_t)v6969;
	i8 v6971 = (i8)(intptr_t)(ws+4072);
	*(i1*)(intptr_t)v6971 = v6970;

	i8 v6972 = (i8)(intptr_t)(ws+4072);
	i1 v6973 = *(i1*)(intptr_t)v6972;
	i1 v6974 = (i1)+1;
	if (v6973<v6974) goto c02_0525; else goto c02_0524;

c02_0524:;

	i8 v6975 = (i8)(intptr_t)(ws+4064);
	i8 v6976 = *(i8*)(intptr_t)v6975;
	i8 v6977 = (i8)(intptr_t)(ws+4048);
	i8 v6978 = *(i8*)(intptr_t)v6977;
	i8 v6979 = v6978+(+24);
	*(i8*)(intptr_t)v6979 = v6976;

	i8 v6980 = (i8)(intptr_t)(ws+4048);
	i8 v6981 = *(i8*)(intptr_t)v6980;
	i8 v6982 = v6981+(+24);
	i8 v6983 = *(i8*)(intptr_t)v6982;
	i8 v6984 = v6983+(+64);
	i8 v6985 = *(i8*)(intptr_t)v6984;
	i8 v6986 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6986 = v6985;

c02_0525:;

c02_0521:;

	i8 v6987 = (i8)(intptr_t)(ws+4072);
	i1 v6988 = *(i1*)(intptr_t)v6987;
	i1 v6989 = (i1)+2;
	if (v6988==v6989) goto c02_0529; else goto c02_052a;

c02_0529:;

	i8 v6990 = (i8)(intptr_t)(ws+4048);
	i8 v6991 = *(i8*)(intptr_t)v6990;
	i8 v6992 = v6991+(+24);
	i8 v6993 = *(i8*)(intptr_t)v6992;
	i8 v6994 = (i8)(intptr_t)(ws+4048);
	i8 v6995 = *(i8*)(intptr_t)v6994;
	i8 v6996 = v6995+(+32);
	*(i8*)(intptr_t)v6996 = v6993;

	i8 v6997 = (i8)(intptr_t)(ws+4064);
	i8 v6998 = *(i8*)(intptr_t)v6997;
	i8 v6999 = (i8)(intptr_t)(ws+4048);
	i8 v7000 = *(i8*)(intptr_t)v6999;
	i8 v7001 = v7000+(+24);
	*(i8*)(intptr_t)v7001 = v6998;

	i8 v7002 = (i8)(intptr_t)(ws+4048);
	i8 v7003 = *(i8*)(intptr_t)v7002;
	i8 v7004 = v7003+(+24);
	i8 v7005 = *(i8*)(intptr_t)v7004;
	i8 v7006 = v7005+(+64);
	i8 v7007 = *(i8*)(intptr_t)v7006;
	i8 v7008 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7008 = v7007;

c02_052a:;

c02_0526:;

	i8 v7009 = (i8)(intptr_t)(ws+4064);
	i8 v7010 = *(i8*)(intptr_t)v7009;
	i8 v7011 = (i8)(intptr_t)(ws+4048);
	i8 v7012 = *(i8*)(intptr_t)v7011;
	i8 v7013 = v7012+(+64);
	*(i8*)(intptr_t)v7013 = v7010;

	i8 v7014 = (i8)(intptr_t)(ws+4048);
	i8 v7015 = *(i8*)(intptr_t)v7014;
	i8 v7016 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7016 = v7015;

	goto c02_051b;

c02_0520:;

	i8 v7017 = (i8)(intptr_t)(ws+4064);
	i8 v7018 = *(i8*)(intptr_t)v7017;
	i8 v7019 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7019 = v7018;

}
	void f33_Alloc(void);
	void f66_StartError(void);
const i1 c02_s01d9[] = { 0x64,0x75,0x70,0x6c,0x69,0x63,0x61,0x74,0x65,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f20_print_hex_i16(void);
const i1 c02_s01da[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f48_FCBPos(void);
	void f21_print_hex_i32(void);
	void f67_EndError(void);
	void f33_Alloc(void);
	void f146_AllocSubrId(void);

// AddSubr workspace at ws+4024 length ws+66
void f402_AddSubr(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7020 = (i8)(intptr_t)(ws+4024);
	i2 v7021 = *(i2*)(intptr_t)v7020;
	i8 v7022 = (i8)(intptr_t)(ws+4040);
	*(i2*)(intptr_t)v7022 = v7021;

	i8 v7023 = (i8)(intptr_t)(ws+3848);
	i8 v7024 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7024 = v7023;

c02_052b:;

	i8 v7025 = (i8)(intptr_t)(ws+4040);
	i2 v7026 = *(i2*)(intptr_t)v7025;
	i2 v7027 = (i2)+16;
	if (v7026<v7027) goto c02_0530; else goto c02_052f;

c02_052f:;

	i8 v7028 = (i8)(intptr_t)(ws+4048);
	i8 v7029 = *(i8*)(intptr_t)v7028;
	i8 v7030 = *(i8*)(intptr_t)v7029;
	i8 v7031 = (i8)+0;
	if (v7030==v7031) goto c02_0534; else goto c02_0535;

c02_0534:;

	i8 v7032 = (i8)+136;
	*(i8*)(intptr_t)(ws+4152) = v7032;
	i8 v7033 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v7033)();

	i8 v7034 = *(i8*)(intptr_t)(ws+4160);
	i8 v7035 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v7035 = v7034;

	i8 v7036 = (i8)(intptr_t)(ws+4056);
	i8 v7037 = *(i8*)(intptr_t)v7036;
	i8 v7038 = (i8)(intptr_t)(ws+4048);
	i8 v7039 = *(i8*)(intptr_t)v7038;
	*(i8*)(intptr_t)v7039 = v7037;

c02_0535:;

c02_0531:;

	i8 v7040 = (i8)(intptr_t)(ws+4048);
	i8 v7041 = *(i8*)(intptr_t)v7040;
	i8 v7042 = *(i8*)(intptr_t)v7041;
	i8 v7043 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7043 = v7042;

	i8 v7044 = (i8)(intptr_t)(ws+4040);
	i2 v7045 = *(i2*)(intptr_t)v7044;
	i2 v7046 = v7045+(-16);
	i8 v7047 = (i8)(intptr_t)(ws+4040);
	*(i2*)(intptr_t)v7047 = v7046;

	goto c02_052b;

c02_0530:;

	i8 v7048 = (i8)(intptr_t)(ws+4048);
	i8 v7049 = *(i8*)(intptr_t)v7048;
	i8 v7050 = v7049+(+8);
	i8 v7051 = (i8)(intptr_t)(ws+4040);
	i2 v7052 = *(i2*)(intptr_t)v7051;
	i1 v7053 = v7052;
	i8 v7054 = v7053;
	i1 v7055 = (i1)+3;
	i8 v7056 = ((i8)v7054)<<v7055;
	i8 v7057 = v7050+v7056;
	i8 v7058 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7058 = v7057;

	i8 v7059 = (i8)(intptr_t)(ws+4064);
	i8 v7060 = *(i8*)(intptr_t)v7059;
	i8 v7061 = *(i8*)(intptr_t)v7060;
	i8 v7062 = (i8)+0;
	if (v7061==v7062) goto c02_053a; else goto c02_0539;

c02_0539:;

	i8 v7063 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7063)();

	i8 v7064 = (i8)(intptr_t)c02_s01d9;
	*(i8*)(intptr_t)(ws+4288) = v7064;
	i8 v7065 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7065)();

	i8 v7066 = (i8)(intptr_t)(ws+4024);
	i2 v7067 = *(i2*)(intptr_t)v7066;
	*(i2*)(intptr_t)(ws+4288) = v7067;
	i8 v7068 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(void))(intptr_t)v7068)();

	i8 v7069 = (i8)(intptr_t)c02_s01da;
	*(i8*)(intptr_t)(ws+4288) = v7069;
	i8 v7070 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7070)();

	i8 v7071 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4288) = v7071;
	i8 v7072 = (i8)(intptr_t)(f48_FCBPos);

	((void(*)(void))(intptr_t)v7072)();

	i4 v7073 = *(i4*)(intptr_t)(ws+4296);
	i8 v7074 = (i8)(intptr_t)(ws+4072);
	*(i4*)(intptr_t)v7074 = v7073;

	i8 v7075 = (i8)(intptr_t)(ws+4072);
	i4 v7076 = *(i4*)(intptr_t)v7075;
	*(i4*)(intptr_t)(ws+4288) = v7076;
	i8 v7077 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v7077)();

	i8 v7078 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7078)();

c02_053a:;

c02_0536:;

	i8 v7079 = (i8)+51;
	*(i8*)(intptr_t)(ws+4152) = v7079;
	i8 v7080 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v7080)();

	i8 v7081 = *(i8*)(intptr_t)(ws+4160);
	i8 v7082 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v7082 = v7081;

	i8 v7083 = (i8)(intptr_t)(ws+4080);
	i8 v7084 = *(i8*)(intptr_t)v7083;
	i8 v7085 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7085 = v7084;

	i8 v7086 = (i8)(intptr_t)(f146_AllocSubrId);

	((void(*)(void))(intptr_t)v7086)();

	i2 v7087 = *(i2*)(intptr_t)(ws+4096);
	i8 v7088 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v7088 = v7087;

	i8 v7089 = (i8)(intptr_t)(ws+4088);
	i2 v7090 = *(i2*)(intptr_t)v7089;
	i8 v7091 = (i8)(intptr_t)(ws+4032);
	i8 v7092 = *(i8*)(intptr_t)v7091;
	i8 v7093 = v7092+(+8);
	*(i2*)(intptr_t)v7093 = v7090;

	i8 v7094 = (i8)(intptr_t)(ws+4032);
	i8 v7095 = *(i8*)(intptr_t)v7094;
	i8 v7096 = (i8)(intptr_t)(ws+4064);
	i8 v7097 = *(i8*)(intptr_t)v7096;
	*(i8*)(intptr_t)v7097 = v7095;

}
	void f66_StartError(void);
const i1 c02_s01db[] = { 0x75,0x6e,0x6b,0x6e,0x6f,0x77,0x6e,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0 };
	void f12_print(void);
	void f20_print_hex_i16(void);
const i1 c02_s01dc[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f48_FCBPos(void);
	void f21_print_hex_i32(void);
	void f67_EndError(void);

// FindSubr workspace at ws+4256 length ws+32
void f65_FindSubr(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7098 = (i8)(intptr_t)(ws+3848);
	i8 v7099 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v7099 = v7098;

	i8 v7100 = (i8)(intptr_t)(ws+4256);
	i2 v7101 = *(i2*)(intptr_t)v7100;
	i8 v7102 = (i8)(intptr_t)(ws+4280);
	*(i2*)(intptr_t)v7102 = v7101;

c02_053b:;

	i8 v7103 = (i8)(intptr_t)(ws+4280);
	i2 v7104 = *(i2*)(intptr_t)v7103;
	i2 v7105 = (i2)+16;
	if (v7104<v7105) goto c02_0540; else goto c02_053f;

c02_053f:;

	i8 v7106 = (i8)(intptr_t)(ws+4272);
	i8 v7107 = *(i8*)(intptr_t)v7106;
	i8 v7108 = *(i8*)(intptr_t)v7107;
	i8 v7109 = (i8)+0;
	if (v7108==v7109) goto c02_0544; else goto c02_0545;

c02_0544:;

	i8 v7110 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7110)();

	i8 v7111 = (i8)(intptr_t)c02_s01db;
	*(i8*)(intptr_t)(ws+4288) = v7111;
	i8 v7112 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7112)();

	i8 v7113 = (i8)(intptr_t)(ws+4256);
	i2 v7114 = *(i2*)(intptr_t)v7113;
	*(i2*)(intptr_t)(ws+4288) = v7114;
	i8 v7115 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(void))(intptr_t)v7115)();

	i8 v7116 = (i8)(intptr_t)c02_s01dc;
	*(i8*)(intptr_t)(ws+4288) = v7116;
	i8 v7117 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7117)();

	i8 v7118 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4288) = v7118;
	i8 v7119 = (i8)(intptr_t)(f48_FCBPos);

	((void(*)(void))(intptr_t)v7119)();

	i4 v7120 = *(i4*)(intptr_t)(ws+4296);
	i8 v7121 = (i8)(intptr_t)(ws+4284);
	*(i4*)(intptr_t)v7121 = v7120;

	i8 v7122 = (i8)(intptr_t)(ws+4284);
	i4 v7123 = *(i4*)(intptr_t)v7122;
	*(i4*)(intptr_t)(ws+4288) = v7123;
	i8 v7124 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v7124)();

	i8 v7125 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7125)();

c02_0545:;

c02_0541:;

	i8 v7126 = (i8)(intptr_t)(ws+4272);
	i8 v7127 = *(i8*)(intptr_t)v7126;
	i8 v7128 = *(i8*)(intptr_t)v7127;
	i8 v7129 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v7129 = v7128;

	i8 v7130 = (i8)(intptr_t)(ws+4280);
	i2 v7131 = *(i2*)(intptr_t)v7130;
	i2 v7132 = v7131+(-16);
	i8 v7133 = (i8)(intptr_t)(ws+4280);
	*(i2*)(intptr_t)v7133 = v7132;

	goto c02_053b;

c02_0540:;

	i8 v7134 = (i8)(intptr_t)(ws+4272);
	i8 v7135 = *(i8*)(intptr_t)v7134;
	i8 v7136 = v7135+(+8);
	i8 v7137 = (i8)(intptr_t)(ws+4280);
	i2 v7138 = *(i2*)(intptr_t)v7137;
	i1 v7139 = v7138;
	i8 v7140 = v7139;
	i1 v7141 = (i1)+3;
	i8 v7142 = ((i8)v7140)<<v7141;
	i8 v7143 = v7136+v7142;
	i8 v7144 = *(i8*)(intptr_t)v7143;
	i8 v7145 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v7145 = v7144;

}
	void f116_I_b16(void);
	void f402_AddSubr(void);
	void f119_I_countedstring(void);
	void f110_EmitterDeclareSubroutine(void);

// ReadN workspace at ws+3992 length ws+32
void f403_ReadN(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7146 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7146)();

	i2 v7147 = *(i2*)(intptr_t)(ws+4136);
	i8 v7148 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7148 = v7147;

	i8 v7149 = (i8)(intptr_t)(ws+3992);
	i2 v7150 = *(i2*)(intptr_t)v7149;
	i8 v7151 = (i8)(intptr_t)(ws+3994);
	*(i2*)(intptr_t)v7151 = v7150;

	i8 v7152 = (i8)(intptr_t)(ws+3994);
	i2 v7153 = *(i2*)(intptr_t)v7152;
	*(i2*)(intptr_t)(ws+4024) = v7153;
	i8 v7154 = (i8)(intptr_t)(f402_AddSubr);

	((void(*)(void))(intptr_t)v7154)();

	i8 v7155 = *(i8*)(intptr_t)(ws+4032);
	i8 v7156 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7156 = v7155;

	i8 v7157 = (i8)(intptr_t)(ws+4000);
	i8 v7158 = *(i8*)(intptr_t)v7157;
	i8 v7159 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7159 = v7158;

	i8 v7160 = (i8)(intptr_t)(f119_I_countedstring);

	((void(*)(void))(intptr_t)v7160)();

	i8 v7161 = *(i8*)(intptr_t)(ws+4112);
	i8 v7162 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7162 = v7161;

	i8 v7163 = (i8)(intptr_t)(ws+4016);
	i8 v7164 = *(i8*)(intptr_t)v7163;
	i8 v7165 = (i8)(intptr_t)(ws+4008);
	i8 v7166 = *(i8*)(intptr_t)v7165;
	*(i8*)(intptr_t)v7166 = v7164;

	i8 v7167 = (i8)(intptr_t)(ws+4008);
	i8 v7168 = *(i8*)(intptr_t)v7167;
	*(i8*)(intptr_t)(ws+4024) = v7168;
	i8 v7169 = (i8)(intptr_t)(f110_EmitterDeclareSubroutine);

	((void(*)(void))(intptr_t)v7169)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f119_I_countedstring(void);
	void f111_EmitterDeclareExternalSubroutine(void);
	void f34_Free(void);

// ReadX workspace at ws+3992 length ws+40
void f404_ReadX(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7170 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7170)();

	i2 v7171 = *(i2*)(intptr_t)(ws+4136);
	i8 v7172 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7172 = v7171;

	i8 v7173 = (i8)(intptr_t)(ws+3992);
	i2 v7174 = *(i2*)(intptr_t)v7173;
	i8 v7175 = (i8)(intptr_t)(ws+3994);
	*(i2*)(intptr_t)v7175 = v7174;

	i8 v7176 = (i8)(intptr_t)(ws+3994);
	i2 v7177 = *(i2*)(intptr_t)v7176;
	*(i2*)(intptr_t)(ws+4256) = v7177;
	i8 v7178 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7178)();

	i8 v7179 = *(i8*)(intptr_t)(ws+4264);
	i8 v7180 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7180 = v7179;

	i8 v7181 = (i8)(intptr_t)(ws+4000);
	i8 v7182 = *(i8*)(intptr_t)v7181;
	i8 v7183 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7183 = v7182;

	i8 v7184 = (i8)(intptr_t)(f119_I_countedstring);

	((void(*)(void))(intptr_t)v7184)();

	i8 v7185 = *(i8*)(intptr_t)(ws+4112);
	i8 v7186 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7186 = v7185;

	i8 v7187 = (i8)(intptr_t)(ws+4016);
	i8 v7188 = *(i8*)(intptr_t)v7187;
	i8 v7189 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7189 = v7188;

	i8 v7190 = (i8)(intptr_t)(ws+4008);
	i8 v7191 = *(i8*)(intptr_t)v7190;
	i8 v7192 = v7191+(+8);
	i2 v7193 = *(i2*)(intptr_t)v7192;
	*(i2*)(intptr_t)(ws+4032) = v7193;
	i8 v7194 = (i8)(intptr_t)(ws+4024);
	i8 v7195 = *(i8*)(intptr_t)v7194;
	*(i8*)(intptr_t)(ws+4040) = v7195;
	i8 v7196 = (i8)(intptr_t)(f111_EmitterDeclareExternalSubroutine);

	((void(*)(void))(intptr_t)v7196)();

	i8 v7197 = (i8)(intptr_t)(ws+4024);
	i8 v7198 = *(i8*)(intptr_t)v7197;
	*(i8*)(intptr_t)(ws+4280) = v7198;
	i8 v7199 = (i8)(intptr_t)(f34_Free);

	((void(*)(void))(intptr_t)v7199)();

}
	void f401_I_node(void);
	void f12_print(void);
	void f13_print_nl(void);
	void f388_Generate(void);

// ReadM workspace at ws+3992 length ws+32
void f405_ReadM(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7200 = (i8)(intptr_t)(f401_I_node);

	((void(*)(void))(intptr_t)v7200)();

	i8 v7201 = *(i8*)(intptr_t)(ws+4024);
	i8 v7202 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7202 = v7201;

	i8 v7203 = (i8)(intptr_t)(ws+3992);
	i8 v7204 = *(i8*)(intptr_t)v7203;
	i8 v7205 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7205 = v7204;

	i8 v7206 = (i8)(intptr_t)(ws+4000);
	i8 v7207 = *(i8*)(intptr_t)v7206;
	i8 v7208 = v7207+(+256);
	i1 v7209 = *(i1*)(intptr_t)v7208;
	i8 v7210 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v7210 = v7209;

	i8 v7211 = (i8)(intptr_t)(ws+4008);
	i1 v7212 = *(i1*)(intptr_t)v7211;
	i1 v7213 = (i1)+4;
	if (v7212==v7213) goto c02_0549; else goto c02_054a;

c02_0549:;

	i8 v7214 = (i8)(intptr_t)(ws+4000);
	i8 v7215 = *(i8*)(intptr_t)v7214;
	i8 v7216 = *(i8*)(intptr_t)v7215;
	i8 v7217 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7217 = v7216;

	i8 v7218 = (i8)(intptr_t)(ws+40);
	i8 v7219 = *(i8*)(intptr_t)v7218;
	i8 v7220 = (i8)(intptr_t)(ws+4016);
	i8 v7221 = *(i8*)(intptr_t)v7220;
	i8 v7222 = v7221+(+16);
	*(i8*)(intptr_t)v7222 = v7219;

	i8 v7223 = (i8)(intptr_t)(ws+4016);
	i8 v7224 = *(i8*)(intptr_t)v7223;
	i8 v7225 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v7225 = v7224;

	i8 v7226 = (i8)(intptr_t)(ws+40);
	i8 v7227 = *(i8*)(intptr_t)v7226;
	i8 v7228 = *(i8*)(intptr_t)v7227;
	*(i8*)(intptr_t)(ws+4288) = v7228;
	i8 v7229 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7229)();

	i8 v7230 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v7230)();

c02_054a:;

c02_0546:;

	i8 v7231 = (i8)(intptr_t)(ws+4000);
	i8 v7232 = *(i8*)(intptr_t)v7231;
	*(i8*)(intptr_t)(ws+4024) = v7232;
	i8 v7233 = (i8)(intptr_t)(f388_Generate);

	((void(*)(void))(intptr_t)v7233)();

	i8 v7234 = (i8)(intptr_t)(ws+4008);
	i1 v7235 = *(i1*)(intptr_t)v7234;
	i1 v7236 = (i1)+5;
	if (v7235==v7236) goto c02_054e; else goto c02_054f;

c02_054e:;

	i8 v7237 = (i8)(intptr_t)(ws+40);
	i8 v7238 = *(i8*)(intptr_t)v7237;
	i8 v7239 = v7238+(+16);
	i8 v7240 = *(i8*)(intptr_t)v7239;
	i8 v7241 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v7241 = v7240;

c02_054f:;

c02_054b:;

}
const i1 c02_s01dd[] = { 0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0x20,0x74,0x77,0x69,0x63,0x65,0 };
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
void f406_ReadParameters(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7242 = (i8)(intptr_t)(ws+4032);
	i8 v7243 = *(i8*)(intptr_t)v7242;
	i8 v7244 = *(i8*)(intptr_t)v7243;
	i8 v7245 = (i8)+0;
	if (v7244==v7245) goto c02_0554; else goto c02_0553;

c02_0553:;

	i8 v7246 = (i8)(intptr_t)c02_s01dd;
	*(i8*)(intptr_t)(ws+4280) = v7246;
	i8 v7247 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(void))(intptr_t)v7247)();

c02_0554:;

c02_0550:;

	i8 v7248 = (i8)(intptr_t)(ws+4024);
	i1 v7249 = *(i1*)(intptr_t)v7248;
	i8 v7250 = v7249;
	i1 v7251 = (i1)+3;
	i8 v7252 = ((i8)v7250)<<v7251;
	*(i8*)(intptr_t)(ws+4152) = v7252;
	i8 v7253 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v7253)();

	i8 v7254 = *(i8*)(intptr_t)(ws+4160);
	i8 v7255 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v7255 = v7254;

	i8 v7256 = (i8)(intptr_t)(ws+4040);
	i8 v7257 = *(i8*)(intptr_t)v7256;
	i8 v7258 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7258 = v7257;

	i8 v7259 = (i8)(intptr_t)(ws+4048);
	i8 v7260 = *(i8*)(intptr_t)v7259;
	i8 v7261 = (i8)(intptr_t)(ws+4032);
	i8 v7262 = *(i8*)(intptr_t)v7261;
	*(i8*)(intptr_t)v7262 = v7260;

c02_0555:;

	i8 v7263 = (i8)(intptr_t)(ws+4024);
	i1 v7264 = *(i1*)(intptr_t)v7263;
	i1 v7265 = (i1)+0;
	if (v7264==v7265) goto c02_055a; else goto c02_0559;

c02_0559:;

	i8 v7266 = (i8)+24;
	*(i8*)(intptr_t)(ws+4152) = v7266;
	i8 v7267 = (i8)(intptr_t)(f33_Alloc);

	((void(*)(void))(intptr_t)v7267)();

	i8 v7268 = *(i8*)(intptr_t)(ws+4160);
	i8 v7269 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v7269 = v7268;

	i8 v7270 = (i8)(intptr_t)(ws+4056);
	i8 v7271 = *(i8*)(intptr_t)v7270;
	i8 v7272 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7272 = v7271;

	i8 v7273 = (i8)(intptr_t)(ws+4064);
	i8 v7274 = *(i8*)(intptr_t)v7273;
	i8 v7275 = (i8)(intptr_t)(ws+4048);
	i8 v7276 = *(i8*)(intptr_t)v7275;
	*(i8*)(intptr_t)v7276 = v7274;

	i8 v7277 = (i8)(intptr_t)(ws+4048);
	i8 v7278 = *(i8*)(intptr_t)v7277;
	i8 v7279 = v7278+(+8);
	i8 v7280 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7280 = v7279;

	i8 v7281 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7281)();

	i2 v7282 = *(i2*)(intptr_t)(ws+4136);
	i8 v7283 = (i8)(intptr_t)(ws+4072);
	*(i2*)(intptr_t)v7283 = v7282;

	i8 v7284 = (i8)(intptr_t)(ws+4072);
	i2 v7285 = *(i2*)(intptr_t)v7284;
	*(i2*)(intptr_t)(ws+4256) = v7285;
	i8 v7286 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7286)();

	i8 v7287 = *(i8*)(intptr_t)(ws+4264);
	i8 v7288 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v7288 = v7287;

	i8 v7289 = (i8)(intptr_t)(ws+4080);
	i8 v7290 = *(i8*)(intptr_t)v7289;
	i8 v7291 = (i8)(intptr_t)(ws+4064);
	i8 v7292 = *(i8*)(intptr_t)v7291;
	*(i8*)(intptr_t)v7292 = v7290;

	i8 v7293 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7293)();

	i1 v7294 = *(i1*)(intptr_t)(ws+4152);
	i8 v7295 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v7295 = v7294;

	i8 v7296 = (i8)(intptr_t)(ws+4088);
	i1 v7297 = *(i1*)(intptr_t)v7296;
	i8 v7298 = (i8)(intptr_t)(ws+4064);
	i8 v7299 = *(i8*)(intptr_t)v7298;
	i8 v7300 = v7299+(+10);
	*(i1*)(intptr_t)v7300 = v7297;

	i8 v7301 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v7301)();

	i2 v7302 = *(i2*)(intptr_t)(ws+4128);
	i8 v7303 = (i8)(intptr_t)(ws+4090);
	*(i2*)(intptr_t)v7303 = v7302;

	i8 v7304 = (i8)(intptr_t)(ws+4090);
	i2 v7305 = *(i2*)(intptr_t)v7304;
	i8 v7306 = (i8)(intptr_t)(ws+4064);
	i8 v7307 = *(i8*)(intptr_t)v7306;
	i8 v7308 = v7307+(+12);
	*(i2*)(intptr_t)v7308 = v7305;

	i8 v7309 = (i8)(intptr_t)(f119_I_countedstring);

	((void(*)(void))(intptr_t)v7309)();

	i8 v7310 = *(i8*)(intptr_t)(ws+4112);
	i8 v7311 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v7311 = v7310;

	i8 v7312 = (i8)(intptr_t)(ws+4096);
	i8 v7313 = *(i8*)(intptr_t)v7312;
	i8 v7314 = (i8)(intptr_t)(ws+4064);
	i8 v7315 = *(i8*)(intptr_t)v7314;
	i8 v7316 = v7315+(+16);
	*(i8*)(intptr_t)v7316 = v7313;

	i8 v7317 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7317)();

	i1 v7318 = *(i1*)(intptr_t)(ws+4152);
	i8 v7319 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v7319 = v7318;

	i8 v7320 = (i8)(intptr_t)(ws+4104);
	i1 v7321 = *(i1*)(intptr_t)v7320;
	i8 v7322 = (i8)(intptr_t)(ws+4064);
	i8 v7323 = *(i8*)(intptr_t)v7322;
	i8 v7324 = v7323+(+14);
	*(i1*)(intptr_t)v7324 = v7321;

	i8 v7325 = (i8)(intptr_t)(ws+4024);
	i1 v7326 = *(i1*)(intptr_t)v7325;
	i1 v7327 = v7326+(-1);
	i8 v7328 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7328 = v7327;

	goto c02_0555;

c02_055a:;

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f406_ReadParameters(void);

// ReadI workspace at ws+3992 length ws+25
void f407_ReadI(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7329 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7329)();

	i2 v7330 = *(i2*)(intptr_t)(ws+4136);
	i8 v7331 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7331 = v7330;

	i8 v7332 = (i8)(intptr_t)(ws+3992);
	i2 v7333 = *(i2*)(intptr_t)v7332;
	*(i2*)(intptr_t)(ws+4256) = v7333;
	i8 v7334 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7334)();

	i8 v7335 = *(i8*)(intptr_t)(ws+4264);
	i8 v7336 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7336 = v7335;

	i8 v7337 = (i8)(intptr_t)(ws+4000);
	i8 v7338 = *(i8*)(intptr_t)v7337;
	i8 v7339 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7339 = v7338;

	i8 v7340 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7340)();

	i1 v7341 = *(i1*)(intptr_t)(ws+4152);
	i8 v7342 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v7342 = v7341;

	i8 v7343 = (i8)(intptr_t)(ws+4016);
	i1 v7344 = *(i1*)(intptr_t)v7343;
	i8 v7345 = (i8)(intptr_t)(ws+4008);
	i8 v7346 = *(i8*)(intptr_t)v7345;
	i8 v7347 = v7346+(+48);
	*(i1*)(intptr_t)v7347 = v7344;

	i8 v7348 = (i8)(intptr_t)(ws+4008);
	i8 v7349 = *(i8*)(intptr_t)v7348;
	i8 v7350 = v7349+(+48);
	i1 v7351 = *(i1*)(intptr_t)v7350;
	*(i1*)(intptr_t)(ws+4024) = v7351;
	i8 v7352 = (i8)(intptr_t)(ws+4008);
	i8 v7353 = *(i8*)(intptr_t)v7352;
	i8 v7354 = v7353+(+32);
	*(i8*)(intptr_t)(ws+4032) = v7354;
	i8 v7355 = (i8)(intptr_t)(f406_ReadParameters);

	((void(*)(void))(intptr_t)v7355)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f406_ReadParameters(void);

// ReadO workspace at ws+3992 length ws+25
void f408_ReadO(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7356 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7356)();

	i2 v7357 = *(i2*)(intptr_t)(ws+4136);
	i8 v7358 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7358 = v7357;

	i8 v7359 = (i8)(intptr_t)(ws+3992);
	i2 v7360 = *(i2*)(intptr_t)v7359;
	*(i2*)(intptr_t)(ws+4256) = v7360;
	i8 v7361 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7361)();

	i8 v7362 = *(i8*)(intptr_t)(ws+4264);
	i8 v7363 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7363 = v7362;

	i8 v7364 = (i8)(intptr_t)(ws+4000);
	i8 v7365 = *(i8*)(intptr_t)v7364;
	i8 v7366 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7366 = v7365;

	i8 v7367 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7367)();

	i1 v7368 = *(i1*)(intptr_t)(ws+4152);
	i8 v7369 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v7369 = v7368;

	i8 v7370 = (i8)(intptr_t)(ws+4016);
	i1 v7371 = *(i1*)(intptr_t)v7370;
	i8 v7372 = (i8)(intptr_t)(ws+4008);
	i8 v7373 = *(i8*)(intptr_t)v7372;
	i8 v7374 = v7373+(+49);
	*(i1*)(intptr_t)v7374 = v7371;

	i8 v7375 = (i8)(intptr_t)(ws+4008);
	i8 v7376 = *(i8*)(intptr_t)v7375;
	i8 v7377 = v7376+(+49);
	i1 v7378 = *(i1*)(intptr_t)v7377;
	*(i1*)(intptr_t)(ws+4024) = v7378;
	i8 v7379 = (i8)(intptr_t)(ws+4008);
	i8 v7380 = *(i8*)(intptr_t)v7379;
	i8 v7381 = v7380+(+40);
	*(i8*)(intptr_t)(ws+4032) = v7381;
	i8 v7382 = (i8)(intptr_t)(f406_ReadParameters);

	((void(*)(void))(intptr_t)v7382)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f118_I_bsize(void);
	void f114_EmitterDeclareWorkspace(void);

// ReadW workspace at ws+3992 length ws+30
void f409_ReadW(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7383 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7383)();

	i2 v7384 = *(i2*)(intptr_t)(ws+4136);
	i8 v7385 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7385 = v7384;

	i8 v7386 = (i8)(intptr_t)(ws+3992);
	i2 v7387 = *(i2*)(intptr_t)v7386;
	*(i2*)(intptr_t)(ws+4256) = v7387;
	i8 v7388 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7388)();

	i8 v7389 = *(i8*)(intptr_t)(ws+4264);
	i8 v7390 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7390 = v7389;

	i8 v7391 = (i8)(intptr_t)(ws+4000);
	i8 v7392 = *(i8*)(intptr_t)v7391;
	i8 v7393 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7393 = v7392;

	i8 v7394 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7394)();

	i1 v7395 = *(i1*)(intptr_t)(ws+4152);
	i8 v7396 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v7396 = v7395;

	i8 v7397 = (i8)(intptr_t)(ws+4016);
	i1 v7398 = *(i1*)(intptr_t)v7397;
	i8 v7399 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v7399 = v7398;

	i8 v7400 = (i8)(intptr_t)(f118_I_bsize);

	((void(*)(void))(intptr_t)v7400)();

	i2 v7401 = *(i2*)(intptr_t)(ws+4128);
	i8 v7402 = (i8)(intptr_t)(ws+4018);
	*(i2*)(intptr_t)v7402 = v7401;

	i8 v7403 = (i8)(intptr_t)(ws+4018);
	i2 v7404 = *(i2*)(intptr_t)v7403;
	i8 v7405 = (i8)(intptr_t)(ws+4020);
	*(i2*)(intptr_t)v7405 = v7404;

	i8 v7406 = (i8)(intptr_t)(ws+4008);
	i8 v7407 = *(i8*)(intptr_t)v7406;
	i8 v7408 = v7407+(+8);
	i2 v7409 = *(i2*)(intptr_t)v7408;
	*(i2*)(intptr_t)(ws+4024) = v7409;
	i8 v7410 = (i8)(intptr_t)(ws+4017);
	i1 v7411 = *(i1*)(intptr_t)v7410;
	*(i1*)(intptr_t)(ws+4026) = v7411;
	i8 v7412 = (i8)(intptr_t)(ws+4020);
	i2 v7413 = *(i2*)(intptr_t)v7412;
	*(i2*)(intptr_t)(ws+4028) = v7413;
	i8 v7414 = (i8)(intptr_t)(f114_EmitterDeclareWorkspace);

	((void(*)(void))(intptr_t)v7414)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);
	void f112_EmitterReferenceSubroutineById(void);

// ReadR workspace at ws+3992 length ws+50
void f410_ReadR(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7415 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7415)();

	i2 v7416 = *(i2*)(intptr_t)(ws+4136);
	i8 v7417 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7417 = v7416;

	i8 v7418 = (i8)(intptr_t)(ws+3992);
	i2 v7419 = *(i2*)(intptr_t)v7418;
	*(i2*)(intptr_t)(ws+4256) = v7419;
	i8 v7420 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7420)();

	i8 v7421 = *(i8*)(intptr_t)(ws+4264);
	i8 v7422 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7422 = v7421;

	i8 v7423 = (i8)(intptr_t)(ws+4000);
	i8 v7424 = *(i8*)(intptr_t)v7423;
	i8 v7425 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7425 = v7424;

	i8 v7426 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7426)();

	i2 v7427 = *(i2*)(intptr_t)(ws+4136);
	i8 v7428 = (i8)(intptr_t)(ws+4016);
	*(i2*)(intptr_t)v7428 = v7427;

	i8 v7429 = (i8)(intptr_t)(ws+4016);
	i2 v7430 = *(i2*)(intptr_t)v7429;
	*(i2*)(intptr_t)(ws+4256) = v7430;
	i8 v7431 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7431)();

	i8 v7432 = *(i8*)(intptr_t)(ws+4264);
	i8 v7433 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7433 = v7432;

	i8 v7434 = (i8)(intptr_t)(ws+4024);
	i8 v7435 = *(i8*)(intptr_t)v7434;
	i8 v7436 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7436 = v7435;

	i8 v7437 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7437)();

	i1 v7438 = *(i1*)(intptr_t)(ws+4152);
	i8 v7439 = (i8)(intptr_t)(ws+4040);
	*(i1*)(intptr_t)v7439 = v7438;

	i8 v7440 = (i8)(intptr_t)(ws+4040);
	i1 v7441 = *(i1*)(intptr_t)v7440;
	i8 v7442 = (i8)(intptr_t)(ws+4041);
	*(i1*)(intptr_t)v7442 = v7441;

	i8 v7443 = (i8)(intptr_t)(ws+4008);
	i8 v7444 = *(i8*)(intptr_t)v7443;
	i8 v7445 = v7444+(+8);
	i2 v7446 = *(i2*)(intptr_t)v7445;
	*(i2*)(intptr_t)(ws+4048) = v7446;
	i8 v7447 = (i8)(intptr_t)(ws+4032);
	i8 v7448 = *(i8*)(intptr_t)v7447;
	i8 v7449 = v7448+(+8);
	i2 v7450 = *(i2*)(intptr_t)v7449;
	*(i2*)(intptr_t)(ws+4050) = v7450;
	i8 v7451 = (i8)(intptr_t)(ws+4041);
	i1 v7452 = *(i1*)(intptr_t)v7451;
	*(i1*)(intptr_t)(ws+4052) = v7452;
	i8 v7453 = (i8)(intptr_t)(f112_EmitterReferenceSubroutineById);

	((void(*)(void))(intptr_t)v7453)();

}
	void f116_I_b16(void);
	void f65_FindSubr(void);
	void f115_I_b8(void);

// ReadF workspace at ws+3992 length ws+25
void f411_ReadF(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7454 = (i8)(intptr_t)(f116_I_b16);

	((void(*)(void))(intptr_t)v7454)();

	i2 v7455 = *(i2*)(intptr_t)(ws+4136);
	i8 v7456 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7456 = v7455;

	i8 v7457 = (i8)(intptr_t)(ws+3992);
	i2 v7458 = *(i2*)(intptr_t)v7457;
	*(i2*)(intptr_t)(ws+4256) = v7458;
	i8 v7459 = (i8)(intptr_t)(f65_FindSubr);

	((void(*)(void))(intptr_t)v7459)();

	i8 v7460 = *(i8*)(intptr_t)(ws+4264);
	i8 v7461 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7461 = v7460;

	i8 v7462 = (i8)(intptr_t)(ws+4000);
	i8 v7463 = *(i8*)(intptr_t)v7462;
	i8 v7464 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7464 = v7463;

	i8 v7465 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7465)();

	i1 v7466 = *(i1*)(intptr_t)(ws+4152);
	i8 v7467 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v7467 = v7466;

	i8 v7468 = (i8)(intptr_t)(ws+4016);
	i1 v7469 = *(i1*)(intptr_t)v7468;
	i8 v7470 = (i8)(intptr_t)(ws+4008);
	i8 v7471 = *(i8*)(intptr_t)v7470;
	i8 v7472 = v7471+(+50);
	*(i1*)(intptr_t)v7472 = v7469;

}
	void f23_MemZero(void);
	void f115_I_b8(void);
	void f403_ReadN(void);
	void f404_ReadX(void);
	void f405_ReadM(void);
	void f407_ReadI(void);
	void f408_ReadO(void);
	void f409_ReadW(void);
	void f410_ReadR(void);
	void f411_ReadF(void);
	void f66_StartError(void);
const i1 c02_s01de[] = { 0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f19_print_hex_i8(void);
const i1 c02_s01df[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(void);
	void f48_FCBPos(void);
	void f21_print_hex_i32(void);
	void f67_EndError(void);

// ProcessFile workspace at ws+3984 length ws+8
void f412_ProcessFile(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7473 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)(ws+4176) = v7473;
	i8 v7474 = (i8)+136;
	*(i8*)(intptr_t)(ws+4184) = v7474;
	i8 v7475 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v7475)();

c02_055b:;

	i8 v7476 = (i8)(intptr_t)(f115_I_b8);

	((void(*)(void))(intptr_t)v7476)();

	i1 v7477 = *(i1*)(intptr_t)(ws+4152);
	i8 v7478 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v7478 = v7477;

	i8 v7479 = (i8)(intptr_t)(ws+3984);
	i1 v7480 = *(i1*)(intptr_t)v7479;
	i8 v7481 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v7481 = v7480;

	i8 v7482 = (i8)(intptr_t)(ws+3985);
	i1 v7483 = *(i1*)(intptr_t)v7482;

	if (v7483 != +69) goto c02_055e;

	return;

c02_055e:;

	if (v7483 != +78) goto c02_055f;

	i8 v7484 = (i8)(intptr_t)(f403_ReadN);

	((void(*)(void))(intptr_t)v7484)();

	goto c02_055d;

c02_055f:;

	if (v7483 != +88) goto c02_0560;

	i8 v7485 = (i8)(intptr_t)(f404_ReadX);

	((void(*)(void))(intptr_t)v7485)();

	goto c02_055d;

c02_0560:;

	if (v7483 != +77) goto c02_0561;

	i8 v7486 = (i8)(intptr_t)(f405_ReadM);

	((void(*)(void))(intptr_t)v7486)();

	goto c02_055d;

c02_0561:;

	if (v7483 != +73) goto c02_0562;

	i8 v7487 = (i8)(intptr_t)(f407_ReadI);

	((void(*)(void))(intptr_t)v7487)();

	goto c02_055d;

c02_0562:;

	if (v7483 != +79) goto c02_0563;

	i8 v7488 = (i8)(intptr_t)(f408_ReadO);

	((void(*)(void))(intptr_t)v7488)();

	goto c02_055d;

c02_0563:;

	if (v7483 != +87) goto c02_0564;

	i8 v7489 = (i8)(intptr_t)(f409_ReadW);

	((void(*)(void))(intptr_t)v7489)();

	goto c02_055d;

c02_0564:;

	if (v7483 != +82) goto c02_0565;

	i8 v7490 = (i8)(intptr_t)(f410_ReadR);

	((void(*)(void))(intptr_t)v7490)();

	goto c02_055d;

c02_0565:;

	if (v7483 != +70) goto c02_0566;

	i8 v7491 = (i8)(intptr_t)(f411_ReadF);

	((void(*)(void))(intptr_t)v7491)();

	goto c02_055d;

c02_0566:;

	i8 v7492 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7492)();

	i8 v7493 = (i8)(intptr_t)c02_s01de;
	*(i8*)(intptr_t)(ws+4288) = v7493;
	i8 v7494 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7494)();

	i8 v7495 = (i8)(intptr_t)(ws+3985);
	i1 v7496 = *(i1*)(intptr_t)v7495;
	*(i1*)(intptr_t)(ws+4296) = v7496;
	i8 v7497 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(void))(intptr_t)v7497)();

	i8 v7498 = (i8)(intptr_t)c02_s01df;
	*(i8*)(intptr_t)(ws+4288) = v7498;
	i8 v7499 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7499)();

	i8 v7500 = (i8)(intptr_t)(ws+2804);
	*(i8*)(intptr_t)(ws+4288) = v7500;
	i8 v7501 = (i8)(intptr_t)(f48_FCBPos);

	((void(*)(void))(intptr_t)v7501)();

	i4 v7502 = *(i4*)(intptr_t)(ws+4296);
	i8 v7503 = (i8)(intptr_t)(ws+3988);
	*(i4*)(intptr_t)v7503 = v7502;

	i8 v7504 = (i8)(intptr_t)(ws+3988);
	i4 v7505 = *(i4*)(intptr_t)v7504;
	*(i4*)(intptr_t)(ws+4288) = v7505;
	i8 v7506 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(void))(intptr_t)v7506)();

	i8 v7507 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7507)();

c02_055d:;


	goto c02_055b;

c02_055c:;

}
	void f38_GetFreeMemory(void);
	void f17_print_i16(void);
const i1 c02_s01e0[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(void);

// PrintFreeMemory workspace at ws+3984 length ws+8
void f413_PrintFreeMemory(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7508 = (i8)(intptr_t)(f38_GetFreeMemory);

	((void(*)(void))(intptr_t)v7508)();

	i8 v7509 = *(i8*)(intptr_t)(ws+3992);
	i8 v7510 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v7510 = v7509;

	i8 v7511 = (i8)(intptr_t)(ws+3984);
	i8 v7512 = *(i8*)(intptr_t)v7511;
	i1 v7513 = (i1)+10;
	i8 v7514 = ((i8)v7512)>>v7513;
	i2 v7515 = v7514;
	*(i2*)(intptr_t)(ws+3992) = v7515;
	i8 v7516 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(void))(intptr_t)v7516)();

	i8 v7517 = (i8)(intptr_t)c02_s01e0;
	*(i8*)(intptr_t)(ws+4288) = v7517;
	i8 v7518 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7518)();

}
const i1 c02_s01e1[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x62,0x65,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(void);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+4008 length ws+0
void f414_SyntaxError(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7519 = (i8)(intptr_t)c02_s01e1;
	*(i8*)(intptr_t)(ws+4288) = v7519;
	i8 v7520 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7520)();

	i8 v7521 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v7521)();

}
	void f24_ArgvInit(void);
	void f25_ArgvNext(void);
	void f25_ArgvNext(void);
	void f25_ArgvNext(void);
	void f414_SyntaxError(void);

// ParseArguments workspace at ws+3984 length ws+24
void f415_ParseArguments(void) {
	tframe_ptr->activated = tframe_ptr->tramp2function;
	tframe_ptr->tramp2function = 0;

	i8 v7522 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v7522)();

	i8 v7523 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v7523)();

	i8 v7524 = *(i8*)(intptr_t)(ws+4008);
	i8 v7525 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v7525 = v7524;

	i8 v7526 = (i8)(intptr_t)(ws+3984);
	i8 v7527 = *(i8*)(intptr_t)v7526;
	i8 v7528 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v7528 = v7527;

	i8 v7529 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v7529)();

	i8 v7530 = *(i8*)(intptr_t)(ws+4008);
	i8 v7531 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7531 = v7530;

	i8 v7532 = (i8)(intptr_t)(ws+3992);
	i8 v7533 = *(i8*)(intptr_t)v7532;
	i8 v7534 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v7534 = v7533;

	i8 v7535 = (i8)(intptr_t)(f25_ArgvNext);

	((void(*)(void))(intptr_t)v7535)();

	i8 v7536 = *(i8*)(intptr_t)(ws+4008);
	i8 v7537 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7537 = v7536;

	i8 v7538 = (i8)(intptr_t)(ws+4000);
	i8 v7539 = *(i8*)(intptr_t)v7538;
	i8 v7540 = (i8)+0;
	if (v7539==v7540) goto c02_0571; else goto c02_056e;

c02_0571:;

	i8 v7541 = (i8)(intptr_t)(ws+24);
	i8 v7542 = *(i8*)(intptr_t)v7541;
	i8 v7543 = (i8)+0;
	if (v7542==v7543) goto c02_056e; else goto c02_0570;

c02_0570:;

	i8 v7544 = (i8)(intptr_t)(ws+32);
	i8 v7545 = *(i8*)(intptr_t)v7544;
	i8 v7546 = (i8)+0;
	if (v7545==v7546) goto c02_056e; else goto c02_056f;

c02_056e:;

	i8 v7547 = (i8)(intptr_t)(f414_SyntaxError);

	((void(*)(void))(intptr_t)v7547)();

c02_056f:;

c02_0567:;

}
const i1 c02_s01e2[] = { 0x43,0x4f,0x57,0x42,0x45,0x3a,0x20,0 };
	void f12_print(void);
	void f413_PrintFreeMemory(void);
	void f415_ParseArguments(void);
	void f120_InputterOpenfile(void);
	void f108_EmitterOpenfile(void);
	void f412_ProcessFile(void);
	void f109_EmitterClosefile(void);
	void f121_InputterClosefile(void);
const i1 c02_s01e3[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(void);
	void f413_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3984
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





































































	i8 v2308 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)(ws+4176) = v2308;
	i8 v2309 = (i8)+116;
	*(i8*)(intptr_t)(ws+4184) = v2309;
	i8 v2310 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v2310)();

	i8 v2311 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)(ws+4176) = v2311;
	i8 v2312 = (i8)+116;
	*(i8*)(intptr_t)(ws+4184) = v2312;
	i8 v2313 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(void))(intptr_t)v2313)();

	i1 v2314 = (i1)+0;
	i8 v2315 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v2315 = v2314;



	i8 v2330 = (i8)+0;
	i8 v2331 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2331 = v2330;









	i2 v2481 = (i2)+1;
	i8 v2482 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v2482 = v2481;
































	i2 v3238 = (i2)+0;
	i8 v3239 = (i8)(intptr_t)(ws+3836);
	*(i2*)(intptr_t)v3239 = v3238;


	i1 v3292 = (i1)+0;
	i8 v3293 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3293 = v3292;















































	i8 v7548 = (i8)(intptr_t)c02_s01e2;
	*(i8*)(intptr_t)(ws+4288) = v7548;
	i8 v7549 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7549)();

	i8 v7550 = (i8)(intptr_t)(f413_PrintFreeMemory);

	((void(*)(void))(intptr_t)v7550)();

	i8 v7551 = (i8)(intptr_t)(f415_ParseArguments);

	((void(*)(void))(intptr_t)v7551)();

	i8 v7552 = (i8)(intptr_t)(ws+24);
	i8 v7553 = *(i8*)(intptr_t)v7552;
	*(i8*)(intptr_t)(ws+3984) = v7553;
	i8 v7554 = (i8)(intptr_t)(f120_InputterOpenfile);

	((void(*)(void))(intptr_t)v7554)();

	i8 v7555 = (i8)(intptr_t)(ws+32);
	i8 v7556 = *(i8*)(intptr_t)v7555;
	*(i8*)(intptr_t)(ws+3984) = v7556;
	i8 v7557 = (i8)(intptr_t)(f108_EmitterOpenfile);

	((void(*)(void))(intptr_t)v7557)();

	i8 v7558 = (i8)(intptr_t)(f412_ProcessFile);

	((void(*)(void))(intptr_t)v7558)();

	i8 v7559 = (i8)(intptr_t)(f109_EmitterClosefile);

	((void(*)(void))(intptr_t)v7559)();

	i8 v7560 = (i8)(intptr_t)(f121_InputterClosefile);

	((void(*)(void))(intptr_t)v7560)();

	i8 v7561 = (i8)(intptr_t)c02_s01e3;
	*(i8*)(intptr_t)(ws+4288) = v7561;
	i8 v7562 = (i8)(intptr_t)(f12_print);

	((void(*)(void))(intptr_t)v7562)();

	i8 v7563 = (i8)(intptr_t)(f413_PrintFreeMemory);

	((void(*)(void))(intptr_t)v7563)();

}
void cmain(void) {
	f3___main();
}
