#include "cowgol.h"
static i8 workspace[0x0235];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+4328 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+4240 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+4240) = p10; /* buf */
	*(i1*)(intptr_t)(ws+4248) = p9; /* byte */
	*(i8*)(intptr_t)(ws+4256) = p8; /* len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4240) 
,  
*(i1*)(intptr_t)(ws+4248) 
,  
*(i8*)(intptr_t)(ws+4256) 
); 



endsub:;
}

// print_char workspace at ws+4344 length ws+1
void f9_print_char(i1 p12 /* c */) {
	*(i1*)(intptr_t)(ws+4344) = p12; /* c */


	
putchar( 
*(i1*)(intptr_t)(ws+4344) 
); 



endsub:;
}
	void f9_print_char(i1 /* c */);

// print workspace at ws+4328 length ws+9
void f12_print(i8 p21 /* ptr */) {
	*(i8*)(intptr_t)(ws+4328) = p21; /* ptr */

c02_0001:;

	i8 v22 = (i8)(intptr_t)(ws+4328);
	i8 v23 = *(i8*)(intptr_t)v22;
	i1 v24 = *(i1*)(intptr_t)v23;
	i8 v25 = (i8)(intptr_t)(ws+4336);
	*(i1*)(intptr_t)v25 = v24;

	i8 v26 = (i8)(intptr_t)(ws+4336);
	i1 v27 = *(i1*)(intptr_t)v26;
	i1 v28 = (i1)+0;
	if (v27==v28) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v29 = (i8)(intptr_t)(ws+4336);
	i1 v30 = *(i1*)(intptr_t)v29;
	i8 v31 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v31)(v30);

	i8 v32 = (i8)(intptr_t)(ws+4328);
	i8 v33 = *(i8*)(intptr_t)v32;
	i8 v34 = v33+(+1);
	i8 v35 = (i8)(intptr_t)(ws+4328);
	*(i8*)(intptr_t)v35 = v34;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_nl workspace at ws+4328 length ws+0
void f13_print_nl(void) {

	i1 v36 = (i1)+10;
	i8 v37 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v37)(v36);

endsub:;
}

// UIToA workspace at ws+4392 length ws+49
void f14_UIToA(i8* p38 /* ptr */, i8 p39 /* buffer */, i1 p40 /* base */, i4 p41 /* value */) {
	*(i4*)(intptr_t)(ws+4392) = p41; /* value */
	*(i1*)(intptr_t)(ws+4396) = p40; /* base */
	*(i8*)(intptr_t)(ws+4400) = p39; /* buffer */

	i8 v42 = (i8)(intptr_t)(ws+4400);
	i8 v43 = *(i8*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+4408);
	*(i8*)(intptr_t)v44 = v43;

c02_0008:;

	i8 v45 = (i8)(intptr_t)(ws+4392);
	i4 v46 = *(i4*)(intptr_t)v45;
	i8 v47 = (i8)(intptr_t)(ws+4396);
	i1 v48 = *(i1*)(intptr_t)v47;
	i4 v49 = v48;
	i4 v50 = v46%v49;
	i8 v51 = (i8)(intptr_t)(ws+4416);
	*(i4*)(intptr_t)v51 = v50;

	i8 v52 = (i8)(intptr_t)(ws+4392);
	i4 v53 = *(i4*)(intptr_t)v52;
	i8 v54 = (i8)(intptr_t)(ws+4396);
	i1 v55 = *(i1*)(intptr_t)v54;
	i4 v56 = v55;
	i4 v57 = v53/v56;
	i8 v58 = (i8)(intptr_t)(ws+4392);
	*(i4*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+4416);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+10;
	if (v60<v61) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v62 = (i8)(intptr_t)(ws+4416);
	i4 v63 = *(i4*)(intptr_t)v62;
	i4 v64 = v63+(+48);
	i8 v65 = (i8)(intptr_t)(ws+4416);
	*(i4*)(intptr_t)v65 = v64;

	goto c02_000a;

c02_000e:;

	i8 v66 = (i8)(intptr_t)(ws+4416);
	i4 v67 = *(i4*)(intptr_t)v66;
	i4 v68 = v67+(+87);
	i8 v69 = (i8)(intptr_t)(ws+4416);
	*(i4*)(intptr_t)v69 = v68;

c02_000a:;

	i8 v70 = (i8)(intptr_t)(ws+4416);
	i4 v71 = *(i4*)(intptr_t)v70;
	i1 v72 = v71;
	i8 v73 = (i8)(intptr_t)(ws+4408);
	i8 v74 = *(i8*)(intptr_t)v73;
	*(i1*)(intptr_t)v74 = v72;

	i8 v75 = (i8)(intptr_t)(ws+4408);
	i8 v76 = *(i8*)(intptr_t)v75;
	i8 v77 = v76+(+1);
	i8 v78 = (i8)(intptr_t)(ws+4408);
	*(i8*)(intptr_t)v78 = v77;

	i8 v79 = (i8)(intptr_t)(ws+4392);
	i4 v80 = *(i4*)(intptr_t)v79;
	i4 v81 = (i4)+0;
	if (v80==v81) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v82 = (i8)(intptr_t)(ws+4400);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+4424);
	*(i8*)(intptr_t)v84 = v83;

	i8 v85 = (i8)(intptr_t)(ws+4408);
	i8 v86 = *(i8*)(intptr_t)v85;
	i8 v87 = v86+(-1);
	i8 v88 = (i8)(intptr_t)(ws+4432);
	*(i8*)(intptr_t)v88 = v87;

c02_0014:;

	i8 v89 = (i8)(intptr_t)(ws+4424);
	i8 v90 = *(i8*)(intptr_t)v89;
	i8 v91 = (i8)(intptr_t)(ws+4432);
	i8 v92 = *(i8*)(intptr_t)v91;
	if (v90<v92) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v93 = (i8)(intptr_t)(ws+4424);
	i8 v94 = *(i8*)(intptr_t)v93;
	i1 v95 = *(i1*)(intptr_t)v94;
	i8 v96 = (i8)(intptr_t)(ws+4440);
	*(i1*)(intptr_t)v96 = v95;

	i8 v97 = (i8)(intptr_t)(ws+4432);
	i8 v98 = *(i8*)(intptr_t)v97;
	i1 v99 = *(i1*)(intptr_t)v98;
	i8 v100 = (i8)(intptr_t)(ws+4424);
	i8 v101 = *(i8*)(intptr_t)v100;
	*(i1*)(intptr_t)v101 = v99;

	i8 v102 = (i8)(intptr_t)(ws+4440);
	i1 v103 = *(i1*)(intptr_t)v102;
	i8 v104 = (i8)(intptr_t)(ws+4432);
	i8 v105 = *(i8*)(intptr_t)v104;
	*(i1*)(intptr_t)v105 = v103;

	i8 v106 = (i8)(intptr_t)(ws+4424);
	i8 v107 = *(i8*)(intptr_t)v106;
	i8 v108 = v107+(+1);
	i8 v109 = (i8)(intptr_t)(ws+4424);
	*(i8*)(intptr_t)v109 = v108;

	i8 v110 = (i8)(intptr_t)(ws+4432);
	i8 v111 = *(i8*)(intptr_t)v110;
	i8 v112 = v111+(-1);
	i8 v113 = (i8)(intptr_t)(ws+4432);
	*(i8*)(intptr_t)v113 = v112;

	goto c02_0014;

c02_0019:;

	i1 v114 = (i1)+0;
	i8 v115 = (i8)(intptr_t)(ws+4408);
	i8 v116 = *(i8*)(intptr_t)v115;
	*(i1*)(intptr_t)v116 = v114;

endsub:;
	*p38 = *(i8*)(intptr_t)(ws+4408);
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f12_print(i8 /* ptr */);

// print_i32 workspace at ws+4240 length ws+32
void f16_print_i32(i4 p147 /* value */) {
	*(i4*)(intptr_t)(ws+4240) = p147; /* value */

	i8 v148 = (i8)(intptr_t)(ws+4240);
	i4 v149 = *(i4*)(intptr_t)v148;
	i1 v150 = (i1)+10;
	i8 v151 = (i8)(intptr_t)(ws+4244);
	i8 v152 = (i8)(intptr_t)(f14_UIToA);
	i8 v153;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v152)(&v153, v151, v150, v149);

	i8 v154 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v154 = v153;

	i8 v155 = (i8)(intptr_t)(ws+4256);
	i8 v156 = *(i8*)(intptr_t)v155;
	i8 v157 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v157 = v156;

	i8 v158 = (i8)(intptr_t)(ws+4244);
	i8 v159 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v159)(v158);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i16 workspace at ws+3992 length ws+2
void f17_print_i16(i2 p160 /* value */) {
	*(i2*)(intptr_t)(ws+3992) = p160; /* value */

	i8 v161 = (i8)(intptr_t)(ws+3992);
	i2 v162 = *(i2*)(intptr_t)v161;
	i4 v163 = v162;
	i8 v164 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v164)(v163);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i8 workspace at ws+4232 length ws+1
void f18_print_i8(i1 p165 /* value */) {
	*(i1*)(intptr_t)(ws+4232) = p165; /* value */

	i8 v166 = (i8)(intptr_t)(ws+4232);
	i1 v167 = *(i1*)(intptr_t)v166;
	i4 v168 = v167;
	i8 v169 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v169)(v168);

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+4336 length ws+3
void f19_print_hex_i8(i1 p170 /* value */) {
	*(i1*)(intptr_t)(ws+4336) = p170; /* value */

	i1 v171 = (i1)+2;
	i8 v172 = (i8)(intptr_t)(ws+4337);
	*(i1*)(intptr_t)v172 = v171;

c02_001f:;

	i8 v173 = (i8)(intptr_t)(ws+4336);
	i1 v174 = *(i1*)(intptr_t)v173;
	i1 v175 = (i1)+4;
	i1 v176 = ((i1)v174)>>v175;
	i8 v177 = (i8)(intptr_t)(ws+4338);
	*(i1*)(intptr_t)v177 = v176;

	i8 v178 = (i8)(intptr_t)(ws+4338);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = (i1)+10;
	if (v179<v180) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v181 = (i8)(intptr_t)(ws+4338);
	i1 v182 = *(i1*)(intptr_t)v181;
	i1 v183 = v182+(+48);
	i8 v184 = (i8)(intptr_t)(ws+4338);
	*(i1*)(intptr_t)v184 = v183;

	goto c02_0021;

c02_0025:;

	i8 v185 = (i8)(intptr_t)(ws+4338);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = v186+(+87);
	i8 v188 = (i8)(intptr_t)(ws+4338);
	*(i1*)(intptr_t)v188 = v187;

c02_0021:;

	i8 v189 = (i8)(intptr_t)(ws+4338);
	i1 v190 = *(i1*)(intptr_t)v189;
	i8 v191 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v191)(v190);

	i8 v192 = (i8)(intptr_t)(ws+4336);
	i1 v193 = *(i1*)(intptr_t)v192;
	i1 v194 = (i1)+4;
	i1 v195 = ((i1)v193)<<v194;
	i8 v196 = (i8)(intptr_t)(ws+4336);
	*(i1*)(intptr_t)v196 = v195;

	i8 v197 = (i8)(intptr_t)(ws+4337);
	i1 v198 = *(i1*)(intptr_t)v197;
	i1 v199 = v198+(-1);
	i8 v200 = (i8)(intptr_t)(ws+4337);
	*(i1*)(intptr_t)v200 = v199;

	i8 v201 = (i8)(intptr_t)(ws+4337);
	i1 v202 = *(i1*)(intptr_t)v201;
	i1 v203 = (i1)+0;
	if (v202==v203) goto c02_0029; else goto c02_002a;

c02_0029:;

	goto c02_0020;

c02_002a:;

c02_0026:;

	goto c02_001f;

c02_0020:;

endsub:;
}
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);

// print_hex_i16 workspace at ws+4328 length ws+2
void f20_print_hex_i16(i2 p204 /* value */) {
	*(i2*)(intptr_t)(ws+4328) = p204; /* value */

	i8 v205 = (i8)(intptr_t)(ws+4328);
	i2 v206 = *(i2*)(intptr_t)v205;
	i1 v207 = (i1)+8;
	i2 v208 = ((i2)v206)>>v207;
	i1 v209 = v208;
	i8 v210 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v210)(v209);

	i8 v211 = (i8)(intptr_t)(ws+4328);
	i2 v212 = *(i2*)(intptr_t)v211;
	i1 v213 = v212;
	i8 v214 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v214)(v213);

endsub:;
}
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);

// print_hex_i32 workspace at ws+4328 length ws+4
void f21_print_hex_i32(i4 p215 /* value */) {
	*(i4*)(intptr_t)(ws+4328) = p215; /* value */

	i8 v216 = (i8)(intptr_t)(ws+4328);
	i4 v217 = *(i4*)(intptr_t)v216;
	i1 v218 = (i1)+24;
	i4 v219 = ((i4)v217)>>v218;
	i1 v220 = v219;
	i8 v221 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v221)(v220);

	i8 v222 = (i8)(intptr_t)(ws+4328);
	i4 v223 = *(i4*)(intptr_t)v222;
	i1 v224 = (i1)+16;
	i4 v225 = ((i4)v223)>>v224;
	i1 v226 = v225;
	i8 v227 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v227)(v226);

	i8 v228 = (i8)(intptr_t)(ws+4328);
	i4 v229 = *(i4*)(intptr_t)v228;
	i1 v230 = (i1)+8;
	i4 v231 = ((i4)v229)>>v230;
	i1 v232 = v231;
	i8 v233 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v233)(v232);

	i8 v234 = (i8)(intptr_t)(ws+4328);
	i4 v235 = *(i4*)(intptr_t)v234;
	i1 v236 = v235;
	i8 v237 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v237)(v236);

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// MemZero workspace at ws+4176 length ws+16
void f23_MemZero(i8 p342 /* size */, i8 p343 /* ptr */) {
	*(i8*)(intptr_t)(ws+4176) = p343; /* ptr */
	*(i8*)(intptr_t)(ws+4184) = p342; /* size */

	i8 v344 = (i8)(intptr_t)(ws+4176);
	i8 v345 = *(i8*)(intptr_t)v344;
	i1 v346 = (i1)+0;
	i8 v347 = (i8)(intptr_t)(ws+4184);
	i8 v348 = *(i8*)(intptr_t)v347;
	i8 v349 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v349)(v348, v346, v345);

endsub:;
}

// ArgvInit workspace at ws+4008 length ws+0
void f24_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v350 = (i8)(intptr_t)(ws+16);
	i8 v351 = *(i8*)(intptr_t)v350;
	i8 v352 = v351+(+8);
	i8 v353 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v353 = v352;

endsub:;
}

// ArgvNext workspace at ws+4008 length ws+8
void f25_ArgvNext(i8* p354 /* arg */) {

	i8 v355 = (i8)(intptr_t)(ws+16);
	i8 v356 = *(i8*)(intptr_t)v355;
	i8 v357 = (i8)+0;
	if (v356==v357) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v358 = (i8)+0;
	i8 v359 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v359 = v358;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v360 = (i8)(intptr_t)(ws+16);
	i8 v361 = *(i8*)(intptr_t)v360;
	i8 v362 = *(i8*)(intptr_t)v361;
	i8 v363 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v363 = v362;

	i8 v364 = (i8)(intptr_t)(ws+4008);
	i8 v365 = *(i8*)(intptr_t)v364;
	i8 v366 = (i8)+0;
	if (v365==v366) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v367 = (i8)+0;
	i8 v368 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v368 = v367;

	goto c02_0054;

c02_0058:;

	i8 v369 = (i8)(intptr_t)(ws+16);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+8);
	i8 v372 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v372 = v371;

c02_0054:;

endsub:;
	*p354 = *(i8*)(intptr_t)(ws+4008);
}

// StrLen workspace at ws+4064 length ws+25
void f29_StrLen(i8* p450 /* size */, i8 p451 /* s */) {
	*(i8*)(intptr_t)(ws+4064) = p451; /* s */

	i8 v452 = (i8)(intptr_t)(ws+4064);
	i8 v453 = *(i8*)(intptr_t)v452;
	i8 v454 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v454 = v453;

c02_0075:;

	i8 v455 = (i8)(intptr_t)(ws+4080);
	i8 v456 = *(i8*)(intptr_t)v455;
	i1 v457 = *(i1*)(intptr_t)v456;
	i8 v458 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v458 = v457;

	i8 v459 = (i8)(intptr_t)(ws+4088);
	i1 v460 = *(i1*)(intptr_t)v459;
	i1 v461 = (i1)+0;
	if (v460==v461) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v462 = (i8)(intptr_t)(ws+4080);
	i8 v463 = *(i8*)(intptr_t)v462;
	i8 v464 = v463+(+1);
	i8 v465 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v465 = v464;

	goto c02_0075;

c02_0076:;

	i8 v466 = (i8)(intptr_t)(ws+4080);
	i8 v467 = *(i8*)(intptr_t)v466;
	i8 v468 = (i8)(intptr_t)(ws+4064);
	i8 v469 = *(i8*)(intptr_t)v468;
	i8 v470 = v467-v469;
	i8 v471 = (i8)(intptr_t)(ws+4072);
	*(i8*)(intptr_t)v471 = v470;

endsub:;
	*p450 = *(i8*)(intptr_t)(ws+4072);
}

// MemCopy workspace at ws+4264 length ws+24
void f31_MemCopy(i8 p493 /* dest */, i8 p494 /* size */, i8 p495 /* src */) {
	*(i8*)(intptr_t)(ws+4264) = p495; /* src */
	*(i8*)(intptr_t)(ws+4272) = p494; /* size */
	*(i8*)(intptr_t)(ws+4280) = p493; /* dest */

c02_0083:;

	i8 v496 = (i8)(intptr_t)(ws+4272);
	i8 v497 = *(i8*)(intptr_t)v496;
	i8 v498 = (i8)+0;
	if (v497==v498) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v499 = (i8)(intptr_t)(ws+4264);
	i8 v500 = *(i8*)(intptr_t)v499;
	i1 v501 = *(i1*)(intptr_t)v500;
	i8 v502 = (i8)(intptr_t)(ws+4280);
	i8 v503 = *(i8*)(intptr_t)v502;
	*(i1*)(intptr_t)v503 = v501;

	i8 v504 = (i8)(intptr_t)(ws+4280);
	i8 v505 = *(i8*)(intptr_t)v504;
	i8 v506 = v505+(+1);
	i8 v507 = (i8)(intptr_t)(ws+4280);
	*(i8*)(intptr_t)v507 = v506;

	i8 v508 = (i8)(intptr_t)(ws+4264);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = v509+(+1);
	i8 v511 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v511 = v510;

	i8 v512 = (i8)(intptr_t)(ws+4272);
	i8 v513 = *(i8*)(intptr_t)v512;
	i8 v514 = v513+(-1);
	i8 v515 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v515 = v514;

	goto c02_0083;

c02_0088:;

endsub:;
}

// RawAlloc workspace at ws+4272 length ws+16
void f32_RawAlloc(i8* p516 /* block */, i8 p517 /* length */) {
	*(i8*)(intptr_t)(ws+4272) = p517; /* length */


	
*(i8*)(intptr_t)(ws+4280) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+4272) 
); 



endsub:;
	*p516 = *(i8*)(intptr_t)(ws+4280);
}
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// Alloc workspace at ws+4152 length ws+24
void f33_Alloc(i8* p518 /* block */, i8 p519 /* length */) {
	*(i8*)(intptr_t)(ws+4152) = p519; /* length */

	i8 v520 = (i8)(intptr_t)(ws+4152);
	i8 v521 = *(i8*)(intptr_t)v520;
	i8 v522 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v523;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v522)(&v523, v521);

	i8 v524 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v524 = v523;

	i8 v525 = (i8)(intptr_t)(ws+4168);
	i8 v526 = *(i8*)(intptr_t)v525;
	i8 v527 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v527 = v526;

	i8 v528 = (i8)(intptr_t)(ws+4160);
	i8 v529 = *(i8*)(intptr_t)v528;
	i8 v530 = (i8)+0;
	if (v529==v530) goto c02_008c; else goto c02_008d;

c02_008c:;

	i8 v531 = (i8)(intptr_t)c02_s0000;
	i8 v532 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v532)(v531);

	i8 v533 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v533)();

c02_008d:;

c02_0089:;

endsub:;
	*p518 = *(i8*)(intptr_t)(ws+4160);
}

// Free workspace at ws+4280 length ws+8
void f34_Free(i8 p534 /* block */) {
	*(i8*)(intptr_t)(ws+4280) = p534; /* block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4280) 
); 



endsub:;
}

// GetFreeMemory workspace at ws+3992 length ws+8
void f38_GetFreeMemory(i8* p537 /* i */) {

	i8 v538 = (i8)+0;
	i8 v539 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v539 = v538;

endsub:;
	*p537 = *(i8*)(intptr_t)(ws+3992);
}

// _fcb_init workspace at ws+4056 length ws+8
void f41__fcb_init(i8 p540 /* fcb */) {
	*(i8*)(intptr_t)(ws+4056) = p540; /* fcb */

	i4 v541 = (i4)+0;
	i8 v542 = (i8)(intptr_t)(ws+4056);
	i8 v543 = *(i8*)(intptr_t)v542;
	i8 v544 = v543+(+4);
	*(i4*)(intptr_t)v544 = v541;

	i2 v545 = (i2)+0;
	i8 v546 = (i8)(intptr_t)(ws+4056);
	i8 v547 = *(i8*)(intptr_t)v546;
	i8 v548 = v547+(+8);
	*(i2*)(intptr_t)v548 = v545;

	i2 v549 = (i2)+0;
	i8 v550 = (i8)(intptr_t)(ws+4056);
	i8 v551 = *(i8*)(intptr_t)v550;
	i8 v552 = v551+(+10);
	*(i2*)(intptr_t)v552 = v549;

	i1 v553 = (i1)+0;
	i8 v554 = (i8)(intptr_t)(ws+4056);
	i8 v555 = *(i8*)(intptr_t)v554;
	i8 v556 = v555+(+524);
	*(i1*)(intptr_t)v556 = v553;

endsub:;
}

// _fcb_advance workspace at ws+4464 length ws+8
void f42__fcb_advance(i8 p557 /* fcb */) {
	*(i8*)(intptr_t)(ws+4464) = p557; /* fcb */

	i8 v558 = (i8)(intptr_t)(ws+4464);
	i8 v559 = *(i8*)(intptr_t)v558;
	i8 v560 = v559+(+10);
	i2 v561 = *(i2*)(intptr_t)v560;
	i2 v562 = v561+(+1);
	i8 v563 = (i8)(intptr_t)(ws+4464);
	i8 v564 = *(i8*)(intptr_t)v563;
	i8 v565 = v564+(+10);
	*(i2*)(intptr_t)v565 = v562;

endsub:;
}
	void f39_FCBRawRead(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_fillbuffer workspace at ws+4176 length ws+18
void f43__fcb_fillbuffer(i1* p566 /* b */, i8 p567 /* fcb */) {
	*(i8*)(intptr_t)(ws+4176) = p567; /* fcb */

	i8 v568 = (i8)(intptr_t)(ws+4176);
	i8 v569 = *(i8*)(intptr_t)v568;
	i8 v570 = v569+(+4);
	i4 v571 = *(i4*)(intptr_t)v570;
	i8 v572 = (i8)(intptr_t)(ws+4176);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+10);
	i2 v575 = *(i2*)(intptr_t)v574;
	i4 v576 = v575;
	i4 v577 = v571+v576;
	i8 v578 = (i8)(intptr_t)(ws+4188);
	*(i4*)(intptr_t)v578 = v577;

	i8 v579 = (i8)(intptr_t)(ws+4176);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = (i8)(intptr_t)(ws+4188);
	i4 v582 = *(i4*)(intptr_t)v581;
	i2 v583 = (i2)+512;
	i8 v584 = (i8)(intptr_t)(f39_FCBRawRead);
	i2 v585;

	((void(*)(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v584)(&v585, v583, v582, v580);

	i8 v586 = (i8)(intptr_t)(ws+4192);
	*(i2*)(intptr_t)v586 = v585;

	i8 v587 = (i8)(intptr_t)(ws+4192);
	i2 v588 = *(i2*)(intptr_t)v587;
	i8 v589 = (i8)(intptr_t)(ws+4176);
	i8 v590 = *(i8*)(intptr_t)v589;
	i8 v591 = v590+(+8);
	*(i2*)(intptr_t)v591 = v588;

	i1 v592 = (i1)+0;
	i8 v593 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v593 = v592;

	i8 v594 = (i8)(intptr_t)(ws+4176);
	i8 v595 = *(i8*)(intptr_t)v594;
	i8 v596 = v595+(+524);
	i1 v597 = *(i1*)(intptr_t)v596;
	i1 v598 = v597&(+1);
	i1 v599 = (i1)+0;
	if (v598==v599) goto c02_0092; else goto c02_0091;

c02_0091:;

	goto endsub;

c02_0092:;

c02_008e:;

	i1 v600 = (i1)+2;
	i8 v601 = (i8)(intptr_t)(ws+4176);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = v602+(+524);
	*(i1*)(intptr_t)v603 = v600;

	i8 v604 = (i8)(intptr_t)(ws+4188);
	i4 v605 = *(i4*)(intptr_t)v604;
	i8 v606 = (i8)(intptr_t)(ws+4176);
	i8 v607 = *(i8*)(intptr_t)v606;
	i8 v608 = v607+(+4);
	*(i4*)(intptr_t)v608 = v605;

	i2 v609 = (i2)+0;
	i8 v610 = (i8)(intptr_t)(ws+4176);
	i8 v611 = *(i8*)(intptr_t)v610;
	i8 v612 = v611+(+10);
	*(i2*)(intptr_t)v612 = v609;

	i8 v613 = (i8)(intptr_t)(ws+4176);
	i8 v614 = *(i8*)(intptr_t)v613;
	i8 v615 = v614+(+8);
	i2 v616 = *(i2*)(intptr_t)v615;
	i2 v617 = (i2)+0;
	if (v616==v617) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v618 = (i8)(intptr_t)(ws+4176);
	i8 v619 = *(i8*)(intptr_t)v618;
	i8 v620 = v619+(+12);
	i1 v621 = *(i1*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v622 = v621;

	i8 v623 = (i8)(intptr_t)(ws+4176);
	i8 v624 = *(i8*)(intptr_t)v623;
	i8 v625 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v625)(v624);

c02_0097:;

c02_0093:;

endsub:;
	*p566 = *(i1*)(intptr_t)(ws+4184);
}
	void f40_FCBRawWrite(i2 /* len */, i4 /* pos */, i8 /* fcb */);

// FCBFlush workspace at ws+4464 length ws+12
void f44_FCBFlush(i8 p626 /* fcb */) {
	*(i8*)(intptr_t)(ws+4464) = p626; /* fcb */

	i8 v627 = (i8)(intptr_t)(ws+4464);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v628+(+4);
	i4 v630 = *(i4*)(intptr_t)v629;
	i8 v631 = (i8)(intptr_t)(ws+4472);
	*(i4*)(intptr_t)v631 = v630;

	i8 v632 = (i8)(intptr_t)(ws+4464);
	i8 v633 = *(i8*)(intptr_t)v632;
	i8 v634 = v633+(+524);
	i1 v635 = *(i1*)(intptr_t)v634;
	i1 v636 = v635&(+4);
	i1 v637 = (i1)+0;
	if (v636==v637) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v638 = (i8)(intptr_t)(ws+4464);
	i8 v639 = *(i8*)(intptr_t)v638;
	i8 v640 = (i8)(intptr_t)(ws+4472);
	i4 v641 = *(i4*)(intptr_t)v640;
	i8 v642 = (i8)(intptr_t)(ws+4464);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = v643+(+10);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v646)(v645, v641, v639);

	i8 v647 = (i8)(intptr_t)(ws+4464);
	i8 v648 = *(i8*)(intptr_t)v647;
	i8 v649 = v648+(+524);
	i1 v650 = *(i1*)(intptr_t)v649;
	i1 v651 = v650&(+1);
	i1 v652 = (i1)+0;
	if (v651==v652) goto c02_00a1; else goto c02_00a0;

c02_00a0:;

	goto endsub;

c02_00a1:;

c02_009d:;

c02_009c:;

c02_0098:;

	i8 v653 = (i8)(intptr_t)(ws+4472);
	i4 v654 = *(i4*)(intptr_t)v653;
	i8 v655 = (i8)(intptr_t)(ws+4464);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+10);
	i2 v658 = *(i2*)(intptr_t)v657;
	i4 v659 = v658;
	i4 v660 = v654+v659;
	i8 v661 = (i8)(intptr_t)(ws+4464);
	i8 v662 = *(i8*)(intptr_t)v661;
	i8 v663 = v662+(+4);
	*(i4*)(intptr_t)v663 = v660;

	i1 v664 = (i1)+0;
	i8 v665 = (i8)(intptr_t)(ws+4464);
	i8 v666 = *(i8*)(intptr_t)v665;
	i8 v667 = v666+(+524);
	*(i1*)(intptr_t)v667 = v664;

	i2 v668 = (i2)+0;
	i8 v669 = (i8)(intptr_t)(ws+4464);
	i8 v670 = *(i8*)(intptr_t)v669;
	i8 v671 = v670+(+10);
	*(i2*)(intptr_t)v671 = v668;

	i2 v672 = (i2)+0;
	i8 v673 = (i8)(intptr_t)(ws+4464);
	i8 v674 = *(i8*)(intptr_t)v673;
	i8 v675 = v674+(+8);
	*(i2*)(intptr_t)v675 = v672;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_flushbuffer workspace at ws+4448 length ws+9
void f45__fcb_flushbuffer(i1 p676 /* b */, i8 p677 /* fcb */) {
	*(i8*)(intptr_t)(ws+4448) = p677; /* fcb */
	*(i1*)(intptr_t)(ws+4456) = p676; /* b */

	i8 v678 = (i8)(intptr_t)(ws+4448);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v680)(v679);

	i8 v681 = (i8)(intptr_t)(ws+4448);
	i8 v682 = *(i8*)(intptr_t)v681;
	i8 v683 = v682+(+524);
	i1 v684 = *(i1*)(intptr_t)v683;
	i1 v685 = v684&(+1);
	i1 v686 = (i1)+0;
	if (v685==v686) goto c02_00a6; else goto c02_00a5;

c02_00a5:;

	goto endsub;

c02_00a6:;

c02_00a2:;

	i1 v687 = (i1)+4;
	i8 v688 = (i8)(intptr_t)(ws+4448);
	i8 v689 = *(i8*)(intptr_t)v688;
	i8 v690 = v689+(+524);
	*(i1*)(intptr_t)v690 = v687;

	i8 v691 = (i8)(intptr_t)(ws+4456);
	i1 v692 = *(i1*)(intptr_t)v691;
	i8 v693 = (i8)(intptr_t)(ws+4448);
	i8 v694 = *(i8*)(intptr_t)v693;
	i8 v695 = v694+(+12);
	*(i1*)(intptr_t)v695 = v692;

	i8 v696 = (i8)(intptr_t)(ws+4448);
	i8 v697 = *(i8*)(intptr_t)v696;
	i8 v698 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v698)(v697);

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f43__fcb_fillbuffer(i1* /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBGetChar workspace at ws+4160 length ws+13
void f46_FCBGetChar(i1* p699 /* b */, i8 p700 /* fcb */) {
	*(i8*)(intptr_t)(ws+4160) = p700; /* fcb */

	i8 v701 = (i8)(intptr_t)(ws+4160);
	i8 v702 = *(i8*)(intptr_t)v701;
	i8 v703 = v702+(+524);
	i1 v704 = *(i1*)(intptr_t)v703;
	i1 v705 = v704&(+4);
	i1 v706 = (i1)+0;
	if (v705==v706) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v707 = (i8)(intptr_t)(ws+4160);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v709)(v708);

c02_00ab:;

c02_00a7:;

	i8 v710 = (i8)(intptr_t)(ws+4160);
	i8 v711 = *(i8*)(intptr_t)v710;
	i8 v712 = v711+(+10);
	i2 v713 = *(i2*)(intptr_t)v712;
	i8 v714 = (i8)(intptr_t)(ws+4170);
	*(i2*)(intptr_t)v714 = v713;

	i8 v715 = (i8)(intptr_t)(ws+4170);
	i2 v716 = *(i2*)(intptr_t)v715;
	i8 v717 = (i8)(intptr_t)(ws+4160);
	i8 v718 = *(i8*)(intptr_t)v717;
	i8 v719 = v718+(+8);
	i2 v720 = *(i2*)(intptr_t)v719;
	if (v716==v720) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v721 = (i8)(intptr_t)(ws+4160);
	i8 v722 = *(i8*)(intptr_t)v721;
	i8 v723 = (i8)(intptr_t)(f43__fcb_fillbuffer);
	i1 v724;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v723)(&v724, v722);

	i8 v725 = (i8)(intptr_t)(ws+4172);
	*(i1*)(intptr_t)v725 = v724;

	i8 v726 = (i8)(intptr_t)(ws+4172);
	i1 v727 = *(i1*)(intptr_t)v726;
	i8 v728 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v728 = v727;

	goto c02_00ac;

c02_00b0:;

	i8 v729 = (i8)(intptr_t)(ws+4160);
	i8 v730 = *(i8*)(intptr_t)v729;
	i8 v731 = v730+(+12);
	i8 v732 = (i8)(intptr_t)(ws+4170);
	i2 v733 = *(i2*)(intptr_t)v732;
	i8 v734 = v733;
	i8 v735 = v731+v734;
	i1 v736 = *(i1*)(intptr_t)v735;
	i8 v737 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v737 = v736;

	i8 v738 = (i8)(intptr_t)(ws+4160);
	i8 v739 = *(i8*)(intptr_t)v738;
	i8 v740 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v740)(v739);

c02_00ac:;

endsub:;
	*p699 = *(i1*)(intptr_t)(ws+4168);
}
	void f44_FCBFlush(i8 /* fcb */);
	void f45__fcb_flushbuffer(i1 /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBPutChar workspace at ws+4432 length ws+12
void f47_FCBPutChar(i1 p741 /* b */, i8 p742 /* fcb */) {
	*(i8*)(intptr_t)(ws+4432) = p742; /* fcb */
	*(i1*)(intptr_t)(ws+4440) = p741; /* b */

	i8 v743 = (i8)(intptr_t)(ws+4432);
	i8 v744 = *(i8*)(intptr_t)v743;
	i8 v745 = v744+(+524);
	i1 v746 = *(i1*)(intptr_t)v745;
	i1 v747 = v746&(+2);
	i1 v748 = (i1)+0;
	if (v747==v748) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v749 = (i8)(intptr_t)(ws+4432);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v751)(v750);

c02_00b5:;

c02_00b1:;

	i8 v752 = (i8)(intptr_t)(ws+4432);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+10);
	i2 v755 = *(i2*)(intptr_t)v754;
	i8 v756 = (i8)(intptr_t)(ws+4442);
	*(i2*)(intptr_t)v756 = v755;

	i8 v757 = (i8)(intptr_t)(ws+4442);
	i2 v758 = *(i2*)(intptr_t)v757;
	i2 v759 = (i2)+512;
	if (v758==v759) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v760 = (i8)(intptr_t)(ws+4432);
	i8 v761 = *(i8*)(intptr_t)v760;
	i8 v762 = (i8)(intptr_t)(ws+4440);
	i1 v763 = *(i1*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v764)(v763, v761);

	goto c02_00b6;

c02_00ba:;

	i8 v765 = (i8)(intptr_t)(ws+4440);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+4432);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+4442);
	i2 v771 = *(i2*)(intptr_t)v770;
	i8 v772 = v771;
	i8 v773 = v769+v772;
	*(i1*)(intptr_t)v773 = v766;

	i8 v774 = (i8)(intptr_t)(ws+4432);
	i8 v775 = *(i8*)(intptr_t)v774;
	i8 v776 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v776)(v775);

c02_00b6:;

	i8 v777 = (i8)(intptr_t)(ws+4432);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+524);
	i1 v780 = *(i1*)(intptr_t)v779;
	i1 v781 = v780|(+4);
	i8 v782 = (i8)(intptr_t)(ws+4432);
	i8 v783 = *(i8*)(intptr_t)v782;
	i8 v784 = v783+(+524);
	*(i1*)(intptr_t)v784 = v781;

endsub:;
}

// FCBPos workspace at ws+4328 length ws+12
void f48_FCBPos(i4* p785 /* pos */, i8 p786 /* fcb */) {
	*(i8*)(intptr_t)(ws+4328) = p786; /* fcb */

	i8 v787 = (i8)(intptr_t)(ws+4328);
	i8 v788 = *(i8*)(intptr_t)v787;
	i8 v789 = v788+(+4);
	i4 v790 = *(i4*)(intptr_t)v789;
	i8 v791 = (i8)(intptr_t)(ws+4328);
	i8 v792 = *(i8*)(intptr_t)v791;
	i8 v793 = v792+(+10);
	i2 v794 = *(i2*)(intptr_t)v793;
	i4 v795 = v794;
	i4 v796 = v790+v795;
	i8 v797 = (i8)(intptr_t)(ws+4336);
	*(i4*)(intptr_t)v797 = v796;

endsub:;
	*p785 = *(i4*)(intptr_t)(ws+4336);
}

// FCBRawRead workspace at ws+4200 length ws+36
void f39_FCBRawRead(i2* p866 /* amount */, i2 p867 /* len */, i4 p868 /* pos */, i8 p869 /* fcb */) {
	*(i8*)(intptr_t)(ws+4200) = p869; /* fcb */
	*(i4*)(intptr_t)(ws+4208) = p868; /* pos */
	*(i2*)(intptr_t)(ws+4212) = p867; /* len */

	i8 v870 = (i8)(intptr_t)(ws+4200);
	i8 v871 = *(i8*)(intptr_t)v870;
	i4 v872 = *(i4*)(intptr_t)v871;
	i8 v873 = (i8)(intptr_t)(ws+4216);
	*(i4*)(intptr_t)v873 = v872;

	i8 v874 = (i8)(intptr_t)(ws+4200);
	i8 v875 = *(i8*)(intptr_t)v874;
	i8 v876 = v875+(+12);
	i8 v877 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v877 = v876;


	
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



	i8 v878 = (i8)(intptr_t)(ws+4232);
	i4 v879 = *(i4*)(intptr_t)v878;
	i4 v880 = (i4)-1;
	if (v879==v880) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v881 = (i2)+0;
	i8 v882 = (i8)(intptr_t)(ws+4214);
	*(i2*)(intptr_t)v882 = v881;

	i8 v883 = (i8)(intptr_t)(ws+4200);
	i8 v884 = *(i8*)(intptr_t)v883;
	i8 v885 = v884+(+524);
	i1 v886 = *(i1*)(intptr_t)v885;
	i1 v887 = v886|(+1);
	i8 v888 = (i8)(intptr_t)(ws+4200);
	i8 v889 = *(i8*)(intptr_t)v888;
	i8 v890 = v889+(+524);
	*(i1*)(intptr_t)v890 = v887;

	goto c02_00d3;

c02_00d7:;

	i8 v891 = (i8)(intptr_t)(ws+4232);
	i4 v892 = *(i4*)(intptr_t)v891;
	i2 v893 = (s2)(s4)v892;
	i8 v894 = (i8)(intptr_t)(ws+4214);
	*(i2*)(intptr_t)v894 = v893;

c02_00d3:;

endsub:;
	*p866 = *(i2*)(intptr_t)(ws+4214);
}

// FCBRawWrite workspace at ws+4480 length ws+36
void f40_FCBRawWrite(i2 p895 /* len */, i4 p896 /* pos */, i8 p897 /* fcb */) {
	*(i8*)(intptr_t)(ws+4480) = p897; /* fcb */
	*(i4*)(intptr_t)(ws+4488) = p896; /* pos */
	*(i2*)(intptr_t)(ws+4492) = p895; /* len */

	i8 v898 = (i8)(intptr_t)(ws+4480);
	i8 v899 = *(i8*)(intptr_t)v898;
	i4 v900 = *(i4*)(intptr_t)v899;
	i8 v901 = (i8)(intptr_t)(ws+4496);
	*(i4*)(intptr_t)v901 = v900;

	i8 v902 = (i8)(intptr_t)(ws+4480);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+12);
	i8 v905 = (i8)(intptr_t)(ws+4504);
	*(i8*)(intptr_t)v905 = v904;


	
*(i4*)(intptr_t)(ws+4512) 
=pwrite( 
*(i4*)(intptr_t)(ws+4496) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4504) 
,  
*(i2*)(intptr_t)(ws+4492) 
,  
*(i4*)(intptr_t)(ws+4488) 
); 



	i8 v906 = (i8)(intptr_t)(ws+4512);
	i4 v907 = *(i4*)(intptr_t)v906;
	i4 v908 = (i4)-1;
	if (v907==v908) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v909 = (i8)(intptr_t)(ws+4480);
	i8 v910 = *(i8*)(intptr_t)v909;
	i8 v911 = v910+(+524);
	i1 v912 = *(i1*)(intptr_t)v911;
	i1 v913 = v912|(+1);
	i8 v914 = (i8)(intptr_t)(ws+4480);
	i8 v915 = *(i8*)(intptr_t)v914;
	i8 v916 = v915+(+524);
	*(i1*)(intptr_t)v916 = v913;

c02_00dc:;

c02_00d8:;

endsub:;
}
	void f41__fcb_init(i8 /* fcb */);

// fcb_i_open workspace at ws+4024 length ws+28
void f51_fcb_i_open(i1* p917 /* errno */, i4 p918 /* flags */, i8 p919 /* filename */, i8 p920 /* fcb */) {
	*(i8*)(intptr_t)(ws+4024) = p920; /* fcb */
	*(i8*)(intptr_t)(ws+4032) = p919; /* filename */
	*(i4*)(intptr_t)(ws+4040) = p918; /* flags */

	i8 v921 = (i8)(intptr_t)(ws+4024);
	i8 v922 = *(i8*)(intptr_t)v921;
	i8 v923 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(i8 /* fcb */))(intptr_t)v923)(v922);


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+4048) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+4032) 
,  
*(i4*)(intptr_t)(ws+4040) 
,  
(+438)
); 



	i8 v924 = (i8)(intptr_t)(ws+4048);
	i4 v925 = *(i4*)(intptr_t)v924;
	i8 v926 = (i8)(intptr_t)(ws+4024);
	i8 v927 = *(i8*)(intptr_t)v926;
	*(i4*)(intptr_t)v927 = v925;

	i8 v928 = (i8)(intptr_t)(ws+4048);
	i4 v929 = *(i4*)(intptr_t)v928;
	i4 v930 = (i4)+0;
	if ((s4)v929<(s4)v930) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+4044) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v931 = (i1)+0;
	i8 v932 = (i8)(intptr_t)(ws+4044);
	*(i1*)(intptr_t)v932 = v931;

c02_00dd:;

endsub:;
	*p917 = *(i1*)(intptr_t)(ws+4044);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+4000 length ws+18
void f52_FCBOpenIn(i1* p933 /* errno */, i8 p934 /* filename */, i8 p935 /* fcb */) {
	*(i8*)(intptr_t)(ws+4000) = p935; /* fcb */
	*(i8*)(intptr_t)(ws+4008) = p934; /* filename */

	i8 v936 = (i8)(intptr_t)(ws+4000);
	i8 v937 = *(i8*)(intptr_t)v936;
	i8 v938 = (i8)(intptr_t)(ws+4008);
	i8 v939 = *(i8*)(intptr_t)v938;
	i4 v940 = (i4)+0;
	i8 v941 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v942;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v941)(&v942, v940, v939, v937);

	i8 v943 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v943 = v942;

	i8 v944 = (i8)(intptr_t)(ws+4017);
	i1 v945 = *(i1*)(intptr_t)v944;
	i8 v946 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v946 = v945;

endsub:;
	*p933 = *(i1*)(intptr_t)(ws+4016);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+4000 length ws+18
void f54_FCBOpenOut(i1* p961 /* errno */, i8 p962 /* filename */, i8 p963 /* fcb */) {
	*(i8*)(intptr_t)(ws+4000) = p963; /* fcb */
	*(i8*)(intptr_t)(ws+4008) = p962; /* filename */

	i8 v964 = (i8)(intptr_t)(ws+4000);
	i8 v965 = *(i8*)(intptr_t)v964;
	i8 v966 = (i8)(intptr_t)(ws+4008);
	i8 v967 = *(i8*)(intptr_t)v966;
	i4 v968 = (i4)+578;
	i8 v969 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v970;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v969)(&v970, v968, v967, v965);

	i8 v971 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v971 = v970;

	i8 v972 = (i8)(intptr_t)(ws+4017);
	i1 v973 = *(i1*)(intptr_t)v972;
	i8 v974 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v974 = v973;

endsub:;
	*p961 = *(i1*)(intptr_t)(ws+4016);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBClose workspace at ws+3992 length ws+16
void f55_FCBClose(i1* p975 /* errno */, i8 p976 /* fcb */) {
	*(i8*)(intptr_t)(ws+3992) = p976; /* fcb */

	i8 v977 = (i8)(intptr_t)(ws+3992);
	i8 v978 = *(i8*)(intptr_t)v977;
	i8 v979 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v979)(v978);

	i8 v980 = (i8)(intptr_t)(ws+3992);
	i8 v981 = *(i8*)(intptr_t)v980;
	i4 v982 = *(i4*)(intptr_t)v981;
	i8 v983 = (i8)(intptr_t)(ws+4004);
	*(i4*)(intptr_t)v983 = v982;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+4004) 
); 


	
*(i1*)(intptr_t)(ws+4000) 
 = errno; 



endsub:;
	*p975 = *(i1*)(intptr_t)(ws+4000);
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);

// FCBPutBlock workspace at ws+4408 length ws+24
void f59_FCBPutBlock(i8 p1034 /* length */, i8 p1035 /* buffer */, i8 p1036 /* fcb */) {
	*(i8*)(intptr_t)(ws+4408) = p1036; /* fcb */
	*(i8*)(intptr_t)(ws+4416) = p1035; /* buffer */
	*(i8*)(intptr_t)(ws+4424) = p1034; /* length */

c02_00ef:;

	i8 v1037 = (i8)(intptr_t)(ws+4424);
	i8 v1038 = *(i8*)(intptr_t)v1037;
	i8 v1039 = (i8)+0;
	if (v1038==v1039) goto c02_00f4; else goto c02_00f3;

c02_00f3:;

	i8 v1040 = (i8)(intptr_t)(ws+4408);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	i8 v1042 = (i8)(intptr_t)(ws+4416);
	i8 v1043 = *(i8*)(intptr_t)v1042;
	i1 v1044 = *(i1*)(intptr_t)v1043;
	i8 v1045 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1045)(v1044, v1041);

	i8 v1046 = (i8)(intptr_t)(ws+4416);
	i8 v1047 = *(i8*)(intptr_t)v1046;
	i8 v1048 = v1047+(+1);
	i8 v1049 = (i8)(intptr_t)(ws+4416);
	*(i8*)(intptr_t)v1049 = v1048;

	i8 v1050 = (i8)(intptr_t)(ws+4424);
	i8 v1051 = *(i8*)(intptr_t)v1050;
	i8 v1052 = v1051+(-1);
	i8 v1053 = (i8)(intptr_t)(ws+4424);
	*(i8*)(intptr_t)v1053 = v1052;

	goto c02_00ef;

c02_00f4:;

endsub:;
}

// MidReader workspace at ws+4080 length ws+8
void f60_MidReader(i8 p1062 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1062; /* node */

endsub:;
}
const i1 c02_s0001[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);

// StartError workspace at ws+4328 length ws+0
void f66_StartError(void) {

	i8 v1065 = (i8)(intptr_t)c02_s0001;
	i8 v1066 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1066)(v1065);

endsub:;
}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+4328 length ws+0
void f67_EndError(void) {

	i8 v1067 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1067)();

	i8 v1068 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1068)();

endsub:;
}
	void f66_StartError(void);
	void f12_print(i8 /* ptr */);
	void f67_EndError(void);

// SimpleError workspace at ws+4304 length ws+8
void f68_SimpleError(i8 p1069 /* s */) {
	*(i8*)(intptr_t)(ws+4304) = p1069; /* s */

	i8 v1070 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v1070)();

	i8 v1071 = (i8)(intptr_t)(ws+4304);
	i8 v1072 = *(i8*)(intptr_t)v1071;
	i8 v1073 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1073)(v1072);

	i8 v1074 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v1074)();

endsub:;
}
	void f66_StartError(void);
const i1 c02_s0002[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0003[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f67_EndError(void);

// CannotOpen workspace at ws+4000 length ws+8
void f69_CannotOpen(i8 p1075 /* filename */) {
	*(i8*)(intptr_t)(ws+4000) = p1075; /* filename */

	i8 v1076 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v1076)();

	i8 v1077 = (i8)(intptr_t)c02_s0002;
	i8 v1078 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1078)(v1077);

	i8 v1079 = (i8)(intptr_t)(ws+4000);
	i8 v1080 = *(i8*)(intptr_t)v1079;
	i8 v1081 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1081)(v1080);

	i8 v1082 = (i8)(intptr_t)c02_s0003;
	i8 v1083 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1083)(v1082);

	i8 v1084 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v1084)();

endsub:;
}
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
	void f71_PurgeAllFreeNodes(void);
	void f72_PurgeAllFreeInstructions(void);
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0004[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// InternalAlloc workspace at ws+4240 length ws+32
void f70_InternalAlloc(i8* p1085 /* block */, i8 p1086 /* length */) {
	*(i8*)(intptr_t)(ws+4240) = p1086; /* length */

	i8 v1087 = (i8)(intptr_t)(ws+4240);
	i8 v1088 = *(i8*)(intptr_t)v1087;
	i8 v1089 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v1090;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1089)(&v1090, v1088);

	i8 v1091 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v1091 = v1090;

	i8 v1092 = (i8)(intptr_t)(ws+4256);
	i8 v1093 = *(i8*)(intptr_t)v1092;
	i8 v1094 = (i8)(intptr_t)(ws+4248);
	*(i8*)(intptr_t)v1094 = v1093;

	i8 v1095 = (i8)(intptr_t)(ws+4248);
	i8 v1096 = *(i8*)(intptr_t)v1095;
	i8 v1097 = (i8)+0;
	if (v1096==v1097) goto c02_00f8; else goto c02_00f9;

c02_00f8:;

	i8 v1098 = (i8)(intptr_t)(f71_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v1098)();

	i8 v1099 = (i8)(intptr_t)(f72_PurgeAllFreeInstructions);

	((void(*)(void))(intptr_t)v1099)();

	i8 v1100 = (i8)(intptr_t)(ws+4240);
	i8 v1101 = *(i8*)(intptr_t)v1100;
	i8 v1102 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v1103;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1102)(&v1103, v1101);

	i8 v1104 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v1104 = v1103;

	i8 v1105 = (i8)(intptr_t)(ws+4264);
	i8 v1106 = *(i8*)(intptr_t)v1105;
	i8 v1107 = (i8)(intptr_t)(ws+4248);
	*(i8*)(intptr_t)v1107 = v1106;

	i8 v1108 = (i8)(intptr_t)(ws+4248);
	i8 v1109 = *(i8*)(intptr_t)v1108;
	i8 v1110 = (i8)+0;
	if (v1109==v1110) goto c02_00fd; else goto c02_00fe;

c02_00fd:;

	i8 v1111 = (i8)(intptr_t)c02_s0004;
	i8 v1112 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1112)(v1111);

	i8 v1113 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1113)();

c02_00fe:;

c02_00fa:;

c02_00f9:;

c02_00f5:;

endsub:;
	*p1085 = *(i8*)(intptr_t)(ws+4248);
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

// GetInputParameter workspace at ws+4336 length ws+24
void f73_GetInputParameter(i8* p1114 /* param */, i1 p1115 /* count */, i8 p1116 /* subr */) {
	*(i8*)(intptr_t)(ws+4336) = p1116; /* subr */
	*(i1*)(intptr_t)(ws+4344) = p1115; /* count */

	i8 v1117 = (i8)+0;
	i8 v1118 = (i8)(intptr_t)(ws+4352);
	*(i8*)(intptr_t)v1118 = v1117;

	i8 v1119 = (i8)(intptr_t)(ws+4336);
	i8 v1120 = *(i8*)(intptr_t)v1119;
	i8 v1121 = v1120+(+48);
	i1 v1122 = *(i1*)(intptr_t)v1121;
	i1 v1123 = (i1)+0;
	if (v1122==v1123) goto c02_0104; else goto c02_0103;

c02_0103:;

	i8 v1124 = (i8)(intptr_t)(ws+4336);
	i8 v1125 = *(i8*)(intptr_t)v1124;
	i8 v1126 = v1125+(+32);
	i8 v1127 = *(i8*)(intptr_t)v1126;
	i8 v1128 = (i8)(intptr_t)(ws+4344);
	i1 v1129 = *(i1*)(intptr_t)v1128;
	i8 v1130 = v1129;
	i1 v1131 = (i1)+3;
	i8 v1132 = ((i8)v1130)<<v1131;
	i8 v1133 = v1127+v1132;
	i8 v1134 = *(i8*)(intptr_t)v1133;
	i8 v1135 = (i8)(intptr_t)(ws+4352);
	*(i8*)(intptr_t)v1135 = v1134;

c02_0104:;

c02_0100:;

endsub:;
	*p1114 = *(i8*)(intptr_t)(ws+4352);
}

// GetOutputParameter workspace at ws+4336 length ws+24
void f74_GetOutputParameter(i8* p1136 /* param */, i1 p1137 /* count */, i8 p1138 /* subr */) {
	*(i8*)(intptr_t)(ws+4336) = p1138; /* subr */
	*(i1*)(intptr_t)(ws+4344) = p1137; /* count */

	i8 v1139 = (i8)+0;
	i8 v1140 = (i8)(intptr_t)(ws+4352);
	*(i8*)(intptr_t)v1140 = v1139;

	i8 v1141 = (i8)(intptr_t)(ws+4336);
	i8 v1142 = *(i8*)(intptr_t)v1141;
	i8 v1143 = v1142+(+49);
	i1 v1144 = *(i1*)(intptr_t)v1143;
	i1 v1145 = (i1)+0;
	if (v1144==v1145) goto c02_0109; else goto c02_0108;

c02_0108:;

	i8 v1146 = (i8)(intptr_t)(ws+4336);
	i8 v1147 = *(i8*)(intptr_t)v1146;
	i8 v1148 = v1147+(+40);
	i8 v1149 = *(i8*)(intptr_t)v1148;
	i8 v1150 = (i8)(intptr_t)(ws+4344);
	i1 v1151 = *(i1*)(intptr_t)v1150;
	i8 v1152 = v1151;
	i1 v1153 = (i1)+3;
	i8 v1154 = ((i8)v1152)<<v1153;
	i8 v1155 = v1149+v1154;
	i8 v1156 = *(i8*)(intptr_t)v1155;
	i8 v1157 = (i8)(intptr_t)(ws+4352);
	*(i8*)(intptr_t)v1157 = v1156;

c02_0109:;

c02_0105:;

endsub:;
	*p1136 = *(i8*)(intptr_t)(ws+4352);
}
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
void f78_MidcodeName(i8* p1177 /* name */, i1 p1178 /* op */) {
	*(i1*)(intptr_t)(ws+4216) = p1178; /* op */


	i8 v1179 = (i8)(intptr_t)((i1*)f78_MidcodeName_s010d);
	i8 v1180 = (i8)(intptr_t)(ws+4216);
	i1 v1181 = *(i1*)(intptr_t)v1180;
	i1 v1182 = v1181+(-1);
	i8 v1183 = v1182;
	i1 v1184 = (i1)+3;
	i8 v1185 = ((i8)v1183)<<v1184;
	i8 v1186 = v1179+v1185;
	i8 v1187 = *(i8*)(intptr_t)v1186;
	i8 v1188 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v1188 = v1187;

endsub:;
	*p1177 = *(i8*)(intptr_t)(ws+4224);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f70_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+4216 length ws+24
void f77_AllocateNewNode(i8* p1191 /* m */, i1 p1192 /* code */) {
	*(i1*)(intptr_t)(ws+4216) = p1192; /* code */

	i8 v1193 = (i8)(intptr_t)(ws+192);
	i8 v1194 = *(i8*)(intptr_t)v1193;
	i8 v1195 = (i8)+0;
	if (v1194==v1195) goto c02_0112; else goto c02_0111;

c02_0111:;

	i8 v1196 = (i8)(intptr_t)(ws+192);
	i8 v1197 = *(i8*)(intptr_t)v1196;
	i8 v1198 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v1198 = v1197;

	i8 v1199 = (i8)(intptr_t)(ws+192);
	i8 v1200 = *(i8*)(intptr_t)v1199;
	i8 v1201 = v1200+(+24);
	i8 v1202 = *(i8*)(intptr_t)v1201;
	i8 v1203 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1203 = v1202;

	i8 v1204 = (i8)(intptr_t)(ws+4224);
	i8 v1205 = *(i8*)(intptr_t)v1204;
	i1 v1206 = (i1)+0;
	i8 v1207 = (i8)+257;
	i8 v1208 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v1208)(v1207, v1206, v1205);

	goto c02_010e;

c02_0112:;

	i8 v1209 = (i8)+257;
	i8 v1210 = (i8)(intptr_t)(f70_InternalAlloc);
	i8 v1211;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1210)(&v1211, v1209);

	i8 v1212 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v1212 = v1211;

	i8 v1213 = (i8)(intptr_t)(ws+4232);
	i8 v1214 = *(i8*)(intptr_t)v1213;
	i8 v1215 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v1215 = v1214;

c02_010e:;

	i8 v1216 = (i8)(intptr_t)(ws+4216);
	i1 v1217 = *(i1*)(intptr_t)v1216;
	i8 v1218 = (i8)(intptr_t)(ws+4224);
	i8 v1219 = *(i8*)(intptr_t)v1218;
	i8 v1220 = v1219+(+256);
	*(i1*)(intptr_t)v1220 = v1217;

endsub:;
	*p1191 = *(i8*)(intptr_t)(ws+4224);
}

// FreeNode workspace at ws+4144 length ws+8
void f79_FreeNode(i8 p1221 /* node */) {
	*(i8*)(intptr_t)(ws+4144) = p1221; /* node */

	i8 v1222 = (i8)(intptr_t)(ws+192);
	i8 v1223 = *(i8*)(intptr_t)v1222;
	i8 v1224 = (i8)(intptr_t)(ws+4144);
	i8 v1225 = *(i8*)(intptr_t)v1224;
	i8 v1226 = v1225+(+24);
	*(i8*)(intptr_t)v1226 = v1223;

	i8 v1227 = (i8)(intptr_t)(ws+4144);
	i8 v1228 = *(i8*)(intptr_t)v1227;
	i8 v1229 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1229 = v1228;

endsub:;
}
	void f34_Free(i8 /* block */);

// PurgeAllFreeNodes workspace at ws+4272 length ws+8
void f71_PurgeAllFreeNodes(void) {

c02_0113:;

	i8 v1230 = (i8)(intptr_t)(ws+192);
	i8 v1231 = *(i8*)(intptr_t)v1230;
	i8 v1232 = (i8)+0;
	if (v1231==v1232) goto c02_0118; else goto c02_0117;

c02_0117:;

	i8 v1233 = (i8)(intptr_t)(ws+192);
	i8 v1234 = *(i8*)(intptr_t)v1233;
	i8 v1235 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v1235 = v1234;

	i8 v1236 = (i8)(intptr_t)(ws+192);
	i8 v1237 = *(i8*)(intptr_t)v1236;
	i8 v1238 = v1237+(+24);
	i8 v1239 = *(i8*)(intptr_t)v1238;
	i8 v1240 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1240 = v1239;

	i8 v1241 = (i8)(intptr_t)(ws+4272);
	i8 v1242 = *(i8*)(intptr_t)v1241;
	i8 v1243 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1243)(v1242);

	goto c02_0113;

c02_0118:;

endsub:;
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);

// WriteB8 workspace at ws+4416 length ws+1
void f80_WriteB8(i1 p1250 /* b */) {
	*(i1*)(intptr_t)(ws+4416) = p1250; /* b */

	i8 v1251 = (i8)(intptr_t)(ws+200);
	i8 v1252 = (i8)(intptr_t)(ws+4416);
	i1 v1253 = *(i1*)(intptr_t)v1252;
	i8 v1254 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1254)(v1253, v1251);

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f80_WriteB8(i1 /* b */);

// WriteB16 workspace at ws+4408 length ws+2
void f81_WriteB16(i2 p1255 /* w */) {
	*(i2*)(intptr_t)(ws+4408) = p1255; /* w */

	i8 v1256 = (i8)(intptr_t)(ws+4408);
	i2 v1257 = *(i2*)(intptr_t)v1256;
	i1 v1258 = v1257;
	i8 v1259 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1259)(v1258);

	i8 v1260 = (i8)(intptr_t)(ws+4408);
	i2 v1261 = *(i2*)(intptr_t)v1260;
	i1 v1262 = (i1)+8;
	i2 v1263 = ((i2)v1261)>>v1262;
	i1 v1264 = v1263;
	i8 v1265 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1265)(v1264);

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f59_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// FlushCurrentStream workspace at ws+4400 length ws+1
void f82_FlushCurrentStream(i1 p1266 /* close */) {
	*(i1*)(intptr_t)(ws+4400) = p1266; /* close */

	i1 v1267 = (i1)+70;
	i8 v1268 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1268)(v1267);

	i8 v1269 = (i8)(intptr_t)(ws+2774);
	i2 v1270 = *(i2*)(intptr_t)v1269;
	i2 v1271 = v1270+(+3);
	i8 v1272 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1272)(v1271);

	i8 v1273 = (i8)(intptr_t)(ws+2800);
	i1 v1274 = *(i1*)(intptr_t)v1273;
	i8 v1275 = (i8)(intptr_t)(ws+4400);
	i1 v1276 = *(i1*)(intptr_t)v1275;
	i1 v1277 = v1274|v1276;
	i8 v1278 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1278)(v1277);

	i8 v1279 = (i8)(intptr_t)(ws+2792);
	i8 v1280 = *(i8*)(intptr_t)v1279;
	i2 v1281 = *(i2*)(intptr_t)v1280;
	i8 v1282 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1282)(v1281);

	i8 v1283 = (i8)(intptr_t)(ws+200);
	i8 v1284 = (i8)(intptr_t)(ws+725);
	i8 v1285 = (i8)(intptr_t)(ws+2774);
	i2 v1286 = *(i2*)(intptr_t)v1285;
	i8 v1287 = v1286;
	i8 v1288 = (i8)(intptr_t)(f59_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v1288)(v1287, v1284, v1283);

	i2 v1289 = (i2)+0;
	i8 v1290 = (i8)(intptr_t)(ws+2774);
	*(i2*)(intptr_t)v1290 = v1289;

endsub:;
}
	void f82_FlushCurrentStream(i1 /* close */);

// E_b8 workspace at ws+4392 length ws+1
void f83_E_b8(i1 p1291 /* byte */) {
	*(i1*)(intptr_t)(ws+4392) = p1291; /* byte */

	i8 v1292 = (i8)(intptr_t)(ws+2792);
	i8 v1293 = *(i8*)(intptr_t)v1292;
	i8 v1294 = (i8)+0;
	if (v1293==v1294) goto c02_011d; else goto c02_011c;

c02_011c:;

	i8 v1295 = (i8)(intptr_t)(ws+4392);
	i1 v1296 = *(i1*)(intptr_t)v1295;
	i8 v1297 = (i8)(intptr_t)(ws+725);
	i8 v1298 = (i8)(intptr_t)(ws+2774);
	i2 v1299 = *(i2*)(intptr_t)v1298;
	i8 v1300 = v1299;
	i8 v1301 = v1297+v1300;
	*(i1*)(intptr_t)v1301 = v1296;

	i8 v1302 = (i8)(intptr_t)(ws+2774);
	i2 v1303 = *(i2*)(intptr_t)v1302;
	i2 v1304 = v1303+(+1);
	i8 v1305 = (i8)(intptr_t)(ws+2774);
	*(i2*)(intptr_t)v1305 = v1304;

	i8 v1306 = (i8)(intptr_t)(ws+2774);
	i2 v1307 = *(i2*)(intptr_t)v1306;
	i2 v1308 = (i2)+2048;
	if (v1307==v1308) goto c02_0121; else goto c02_0122;

c02_0121:;

	i1 v1309 = (i1)+0;
	i8 v1310 = (i8)(intptr_t)(f82_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v1310)(v1309);

c02_0122:;

c02_011e:;

c02_011d:;

c02_0119:;

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);

// E_b16 workspace at ws+4312 length ws+2
void f84_E_b16(i2 p1311 /* word */) {
	*(i2*)(intptr_t)(ws+4312) = p1311; /* word */

	i8 v1312 = (i8)(intptr_t)(ws+4312);
	i2 v1313 = *(i2*)(intptr_t)v1312;
	i1 v1314 = v1313;
	i8 v1315 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1315)(v1314);

	i8 v1316 = (i8)(intptr_t)(ws+4312);
	i2 v1317 = *(i2*)(intptr_t)v1316;
	i1 v1318 = (i1)+8;
	i2 v1319 = ((i2)v1317)>>v1318;
	i1 v1320 = v1319;
	i8 v1321 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1321)(v1320);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E_space workspace at ws+4224 length ws+0
void f86_E_space(void) {

	i1 v1333 = (i1)+32;
	i8 v1334 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1334)(v1333);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E_comma workspace at ws+4248 length ws+0
void f87_E_comma(void) {

	i1 v1335 = (i1)+44;
	i8 v1336 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1336)(v1335);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E_tab workspace at ws+4224 length ws+0
void f88_E_tab(void) {

	i1 v1337 = (i1)+9;
	i8 v1338 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1338)(v1337);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E_nl workspace at ws+4224 length ws+0
void f89_E_nl(void) {

	i1 v1339 = (i1)+10;
	i8 v1340 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1340)(v1339);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E workspace at ws+4360 length ws+9
void f92_E(i8 p1345 /* text */) {
	*(i8*)(intptr_t)(ws+4360) = p1345; /* text */

c02_0123:;

	i8 v1346 = (i8)(intptr_t)(ws+4360);
	i8 v1347 = *(i8*)(intptr_t)v1346;
	i1 v1348 = *(i1*)(intptr_t)v1347;
	i8 v1349 = (i8)(intptr_t)(ws+4368);
	*(i1*)(intptr_t)v1349 = v1348;

	i8 v1350 = (i8)(intptr_t)(ws+4360);
	i8 v1351 = *(i8*)(intptr_t)v1350;
	i8 v1352 = v1351+(+1);
	i8 v1353 = (i8)(intptr_t)(ws+4360);
	*(i8*)(intptr_t)v1353 = v1352;

	i8 v1354 = (i8)(intptr_t)(ws+4368);
	i1 v1355 = *(i1*)(intptr_t)v1354;
	i1 v1356 = (i1)+0;
	if (v1355==v1356) goto c02_0128; else goto c02_0129;

c02_0128:;

	goto c02_0124;

c02_0129:;

c02_0125:;

	i8 v1357 = (i8)(intptr_t)(ws+4368);
	i1 v1358 = *(i1*)(intptr_t)v1357;
	i8 v1359 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1359)(v1358);

	goto c02_0123;

c02_0124:;

endsub:;
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f83_E_b8(i1 /* byte */);

// E_u32 workspace at ws+4344 length ws+41
void f93_E_u32(i4 p1360 /* value */) {
	*(i4*)(intptr_t)(ws+4344) = p1360; /* value */

	i8 v1361 = (i8)(intptr_t)(ws+4348);
	i8 v1362 = (i8)(intptr_t)(ws+4360);
	*(i8*)(intptr_t)v1362 = v1361;

	i8 v1363 = (i8)(intptr_t)(ws+4344);
	i4 v1364 = *(i4*)(intptr_t)v1363;
	i1 v1365 = (i1)+10;
	i8 v1366 = (i8)(intptr_t)(ws+4360);
	i8 v1367 = *(i8*)(intptr_t)v1366;
	i8 v1368 = (i8)(intptr_t)(f14_UIToA);
	i8 v1369;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1368)(&v1369, v1367, v1365, v1364);

	i8 v1370 = (i8)(intptr_t)(ws+4368);
	*(i8*)(intptr_t)v1370 = v1369;

	i8 v1371 = (i8)(intptr_t)(ws+4368);
	i8 v1372 = *(i8*)(intptr_t)v1371;
	i8 v1373 = (i8)(intptr_t)(ws+4376);
	*(i8*)(intptr_t)v1373 = v1372;

c02_012a:;

	i8 v1374 = (i8)(intptr_t)(ws+4360);
	i8 v1375 = *(i8*)(intptr_t)v1374;
	i1 v1376 = *(i1*)(intptr_t)v1375;
	i8 v1377 = (i8)(intptr_t)(ws+4384);
	*(i1*)(intptr_t)v1377 = v1376;

	i8 v1378 = (i8)(intptr_t)(ws+4384);
	i1 v1379 = *(i1*)(intptr_t)v1378;
	i1 v1380 = (i1)+0;
	if (v1379==v1380) goto c02_012f; else goto c02_0130;

c02_012f:;

	goto c02_012b;

c02_0130:;

c02_012c:;

	i8 v1381 = (i8)(intptr_t)(ws+4384);
	i1 v1382 = *(i1*)(intptr_t)v1381;
	i8 v1383 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1383)(v1382);

	i8 v1384 = (i8)(intptr_t)(ws+4360);
	i8 v1385 = *(i8*)(intptr_t)v1384;
	i8 v1386 = v1385+(+1);
	i8 v1387 = (i8)(intptr_t)(ws+4360);
	*(i8*)(intptr_t)v1387 = v1386;

	goto c02_012a;

c02_012b:;

endsub:;
}
	void f93_E_u32(i4 /* value */);

// E_u16 workspace at ws+4312 length ws+2
void f94_E_u16(i2 p1388 /* value */) {
	*(i2*)(intptr_t)(ws+4312) = p1388; /* value */

	i8 v1389 = (i8)(intptr_t)(ws+4312);
	i2 v1390 = *(i2*)(intptr_t)v1389;
	i4 v1391 = v1390;
	i8 v1392 = (i8)(intptr_t)(f93_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1392)(v1391);

endsub:;
}
	void f93_E_u32(i4 /* value */);

// E_u8 workspace at ws+4336 length ws+1
void f95_E_u8(i1 p1393 /* value */) {
	*(i1*)(intptr_t)(ws+4336) = p1393; /* value */

	i8 v1394 = (i8)(intptr_t)(ws+4336);
	i1 v1395 = *(i1*)(intptr_t)v1394;
	i4 v1396 = v1395;
	i8 v1397 = (i8)(intptr_t)(f93_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1397)(v1396);

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f94_E_u16(i2 /* value */);

// E_i16 workspace at ws+4304 length ws+2
void f97_E_i16(i2 p1413 /* value */) {
	*(i2*)(intptr_t)(ws+4304) = p1413; /* value */

	i8 v1414 = (i8)(intptr_t)(ws+4304);
	i2 v1415 = *(i2*)(intptr_t)v1414;
	i2 v1416 = (i2)+0;
	if ((s2)v1415<(s2)v1416) goto c02_0139; else goto c02_013a;

c02_0139:;

	i1 v1417 = (i1)+45;
	i8 v1418 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1418)(v1417);

	i8 v1419 = (i8)(intptr_t)(ws+4304);
	i2 v1420 = *(i2*)(intptr_t)v1419;
	i2 v1421 = -v1420;
	i8 v1422 = (i8)(intptr_t)(ws+4304);
	*(i2*)(intptr_t)v1422 = v1421;

	goto c02_0136;

c02_013a:;

	i1 v1423 = (i1)+43;
	i8 v1424 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1424)(v1423);

c02_0136:;

	i8 v1425 = (i8)(intptr_t)(ws+4304);
	i2 v1426 = *(i2*)(intptr_t)v1425;
	i8 v1427 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1427)(v1426);

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f93_E_u32(i4 /* value */);

// E_i32 workspace at ws+4256 length ws+4
void f98_E_i32(i4 p1428 /* value */) {
	*(i4*)(intptr_t)(ws+4256) = p1428; /* value */

	i8 v1429 = (i8)(intptr_t)(ws+4256);
	i4 v1430 = *(i4*)(intptr_t)v1429;
	i4 v1431 = (i4)+0;
	if ((s4)v1430<(s4)v1431) goto c02_013e; else goto c02_013f;

c02_013e:;

	i1 v1432 = (i1)+45;
	i8 v1433 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1433)(v1432);

	i8 v1434 = (i8)(intptr_t)(ws+4256);
	i4 v1435 = *(i4*)(intptr_t)v1434;
	i4 v1436 = -v1435;
	i8 v1437 = (i8)(intptr_t)(ws+4256);
	*(i4*)(intptr_t)v1437 = v1436;

	goto c02_013b;

c02_013f:;

	i1 v1438 = (i1)+43;
	i8 v1439 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1439)(v1438);

c02_013b:;

	i8 v1440 = (i8)(intptr_t)(ws+4256);
	i4 v1441 = *(i4*)(intptr_t)v1440;
	i8 v1442 = (i8)(intptr_t)(f93_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1442)(v1441);

endsub:;
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f83_E_b8(i1 /* byte */);
	void f92_E(i8 /* text */);

// E_h workspace at ws+4320 length ws+33
void f99_E_h(i1 p1443 /* width */, i4 p1444 /* value */) {
	*(i4*)(intptr_t)(ws+4320) = p1444; /* value */
	*(i1*)(intptr_t)(ws+4324) = p1443; /* width */

	i8 v1445 = (i8)(intptr_t)(ws+4320);
	i4 v1446 = *(i4*)(intptr_t)v1445;
	i1 v1447 = (i1)+16;
	i8 v1448 = (i8)(intptr_t)(ws+4325);
	i8 v1449 = (i8)(intptr_t)(f14_UIToA);
	i8 v1450;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1449)(&v1450, v1448, v1447, v1446);

	i8 v1451 = (i8)(intptr_t)(ws+4336);
	*(i8*)(intptr_t)v1451 = v1450;

	i8 v1452 = (i8)(intptr_t)(ws+4336);
	i8 v1453 = *(i8*)(intptr_t)v1452;
	i8 v1454 = (i8)(intptr_t)(ws+4344);
	*(i8*)(intptr_t)v1454 = v1453;

	i8 v1455 = (i8)(intptr_t)(ws+4324);
	i1 v1456 = *(i1*)(intptr_t)v1455;
	i8 v1457 = (i8)(intptr_t)(ws+4344);
	i8 v1458 = *(i8*)(intptr_t)v1457;
	i8 v1459 = (i8)(intptr_t)(ws+4325);
	i8 v1460 = v1458-v1459;
	i1 v1461 = v1460;
	i1 v1462 = v1456-v1461;
	i8 v1463 = (i8)(intptr_t)(ws+4352);
	*(i1*)(intptr_t)v1463 = v1462;

c02_0140:;

	i8 v1464 = (i8)(intptr_t)(ws+4352);
	i1 v1465 = *(i1*)(intptr_t)v1464;
	i1 v1466 = (i1)+0;
	if (v1465==v1466) goto c02_0145; else goto c02_0144;

c02_0144:;

	i1 v1467 = (i1)+48;
	i8 v1468 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1468)(v1467);

	i8 v1469 = (i8)(intptr_t)(ws+4352);
	i1 v1470 = *(i1*)(intptr_t)v1469;
	i1 v1471 = v1470+(-1);
	i8 v1472 = (i8)(intptr_t)(ws+4352);
	*(i1*)(intptr_t)v1472 = v1471;

	goto c02_0140;

c02_0145:;

	i8 v1473 = (i8)(intptr_t)(ws+4325);
	i8 v1474 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v1474)(v1473);

endsub:;
}
	void f99_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+4248 length ws+1
void f100_E_h8(i1 p1475 /* value */) {
	*(i1*)(intptr_t)(ws+4248) = p1475; /* value */

	i8 v1476 = (i8)(intptr_t)(ws+4248);
	i1 v1477 = *(i1*)(intptr_t)v1476;
	i4 v1478 = v1477;
	i1 v1479 = (i1)+2;
	i8 v1480 = (i8)(intptr_t)(f99_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1480)(v1479, v1478);

endsub:;
}
	void f99_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+4312 length ws+2
void f101_E_h16(i2 p1481 /* value */) {
	*(i2*)(intptr_t)(ws+4312) = p1481; /* value */

	i8 v1482 = (i8)(intptr_t)(ws+4312);
	i2 v1483 = *(i2*)(intptr_t)v1482;
	i4 v1484 = v1483;
	i1 v1485 = (i1)+4;
	i8 v1486 = (i8)(intptr_t)(f99_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1486)(v1485, v1484);

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f101_E_h16(i2 /* value */);

// E_labelref workspace at ws+4256 length ws+2
void f103_E_labelref(i2 p1492 /* labelid */) {
	*(i2*)(intptr_t)(ws+4256) = p1492; /* labelid */

	i1 v1493 = (i1)+3;
	i8 v1494 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1494)(v1493);

	i8 v1495 = (i8)(intptr_t)(ws+4256);
	i2 v1496 = *(i2*)(intptr_t)v1495;
	i8 v1497 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1497)(v1496);

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);

// E_subref workspace at ws+4288 length ws+8
void f104_E_subref(i8 p1498 /* subr */) {
	*(i8*)(intptr_t)(ws+4288) = p1498; /* subr */

	i8 v1499 = (i8)(intptr_t)(ws+4288);
	i8 v1500 = *(i8*)(intptr_t)v1499;
	i8 v1501 = (i8)(intptr_t)(ws+40);
	i8 v1502 = *(i8*)(intptr_t)v1501;
	if (v1500==v1502) goto c02_0149; else goto c02_014a;

c02_0149:;

	i1 v1503 = (i1)+4;
	i8 v1504 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1504)(v1503);

	goto c02_0146;

c02_014a:;

	i1 v1505 = (i1)+1;
	i8 v1506 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1506)(v1505);

	i8 v1507 = (i8)(intptr_t)(ws+4288);
	i8 v1508 = *(i8*)(intptr_t)v1507;
	i8 v1509 = v1508+(+8);
	i2 v1510 = *(i2*)(intptr_t)v1509;
	i8 v1511 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1511)(v1510);

c02_0146:;

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
const i1 c02_s00bf[] = { 0x5f,0x73,0 };
	void f92_E(i8 /* text */);
	void f101_E_h16(i2 /* value */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);

// E_wsref workspace at ws+4304 length ws+6
void f105_E_wsref(i2 p1512 /* off */, i1 p1513 /* wsid */, i2 p1514 /* id */) {
	*(i2*)(intptr_t)(ws+4304) = p1514; /* id */
	*(i1*)(intptr_t)(ws+4306) = p1513; /* wsid */
	*(i2*)(intptr_t)(ws+4308) = p1512; /* off */

	i8 v1515 = (i8)(intptr_t)(ws+4306);
	i1 v1516 = *(i1*)(intptr_t)v1515;
	i1 v1517 = (i1)+255;
	if (v1516==v1517) goto c02_014e; else goto c02_014f;

c02_014e:;

	i1 v1518 = (i1)+1;
	i8 v1519 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1519)(v1518);

	i8 v1520 = (i8)(intptr_t)(ws+4304);
	i2 v1521 = *(i2*)(intptr_t)v1520;
	i8 v1522 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1522)(v1521);

	i8 v1523 = (i8)(intptr_t)c02_s00bf;
	i8 v1524 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v1524)(v1523);

	i8 v1525 = (i8)(intptr_t)(ws+4308);
	i2 v1526 = *(i2*)(intptr_t)v1525;
	i8 v1527 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1527)(v1526);

	goto c02_014b;

c02_014f:;

	i1 v1528 = (i1)+2;
	i8 v1529 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1529)(v1528);

	i8 v1530 = (i8)(intptr_t)(ws+4304);
	i2 v1531 = *(i2*)(intptr_t)v1530;
	i8 v1532 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1532)(v1531);

	i8 v1533 = (i8)(intptr_t)(ws+4306);
	i1 v1534 = *(i1*)(intptr_t)v1533;
	i8 v1535 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1535)(v1534);

	i8 v1536 = (i8)(intptr_t)(ws+4308);
	i2 v1537 = *(i2*)(intptr_t)v1536;
	i8 v1538 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1538)(v1537);

c02_014b:;

endsub:;
}
	void f82_FlushCurrentStream(i1 /* close */);

// EmitterOpenStream workspace at ws+4288 length ws+8
void f106_EmitterOpenStream(i8 p1539 /* subr */) {
	*(i8*)(intptr_t)(ws+4288) = p1539; /* subr */

	i8 v1540 = (i8)(intptr_t)(ws+2792);
	i8 v1541 = *(i8*)(intptr_t)v1540;
	i8 v1542 = (i8)+0;
	if (v1541==v1542) goto c02_0153; else goto c02_0154;

c02_0153:;

	i8 v1543 = (i8)(intptr_t)(ws+2776);
	i8 v1544 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1544 = v1543;

	i1 v1545 = (i1)+0;
	i8 v1546 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1546 = v1545;

	goto c02_0150;

c02_0154:;

	i1 v1547 = (i1)+0;
	i8 v1548 = (i8)(intptr_t)(f82_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v1548)(v1547);

	i8 v1549 = (i8)(intptr_t)(ws+2792);
	i8 v1550 = *(i8*)(intptr_t)v1549;
	i8 v1551 = v1550+(+2);
	i8 v1552 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1552 = v1551;

	i8 v1553 = (i8)(intptr_t)(ws+2800);
	i1 v1554 = *(i1*)(intptr_t)v1553;
	i1 v1555 = v1554+(+1);
	i8 v1556 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1556 = v1555;

c02_0150:;

	i8 v1557 = (i8)(intptr_t)(ws+4288);
	i8 v1558 = *(i8*)(intptr_t)v1557;
	i8 v1559 = v1558+(+8);
	i2 v1560 = *(i2*)(intptr_t)v1559;
	i8 v1561 = (i8)(intptr_t)(ws+2792);
	i8 v1562 = *(i8*)(intptr_t)v1561;
	*(i2*)(intptr_t)v1562 = v1560;

endsub:;
}
	void f82_FlushCurrentStream(i1 /* close */);

// EmitterCloseStream workspace at ws+4256 length ws+0
void f107_EmitterCloseStream(void) {

	i1 v1563 = (i1)+128;
	i8 v1564 = (i8)(intptr_t)(f82_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v1564)(v1563);

	i8 v1565 = (i8)(intptr_t)(ws+2792);
	i8 v1566 = *(i8*)(intptr_t)v1565;
	i8 v1567 = (i8)(intptr_t)(ws+2776);
	if (v1566==v1567) goto c02_0158; else goto c02_0159;

c02_0158:;

	i8 v1568 = (i8)+0;
	i8 v1569 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1569 = v1568;

	goto c02_0155;

c02_0159:;

	i8 v1570 = (i8)(intptr_t)(ws+2792);
	i8 v1571 = *(i8*)(intptr_t)v1570;
	i8 v1572 = v1571+(-2);
	i8 v1573 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1573 = v1572;

	i8 v1574 = (i8)(intptr_t)(ws+2800);
	i1 v1575 = *(i1*)(intptr_t)v1574;
	i1 v1576 = v1575+(-1);
	i8 v1577 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1577 = v1576;

c02_0155:;

endsub:;
}
	void f54_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s00c0[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f68_SimpleError(i8 /* s */);

// EmitterOpenfile workspace at ws+3984 length ws+9
void f108_EmitterOpenfile(i8 p1578 /* filename */) {
	*(i8*)(intptr_t)(ws+3984) = p1578; /* filename */

	i8 v1579 = (i8)(intptr_t)(ws+200);
	i8 v1580 = (i8)(intptr_t)(ws+3984);
	i8 v1581 = *(i8*)(intptr_t)v1580;
	i8 v1582 = (i8)(intptr_t)(f54_FCBOpenOut);
	i1 v1583;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1582)(&v1583, v1581, v1579);

	i8 v1584 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v1584 = v1583;

	i8 v1585 = (i8)(intptr_t)(ws+3992);
	i1 v1586 = *(i1*)(intptr_t)v1585;
	i1 v1587 = (i1)+0;
	if (v1586==v1587) goto c02_015e; else goto c02_015d;

c02_015d:;

	i8 v1588 = (i8)(intptr_t)c02_s00c0;
	i8 v1589 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1589)(v1588);

c02_015e:;

c02_015a:;

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s00c1[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f68_SimpleError(i8 /* s */);

// EmitterClosefile workspace at ws+3984 length ws+1
void f109_EmitterClosefile(void) {

	i1 v1590 = (i1)+69;
	i8 v1591 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1591)(v1590);

	i2 v1592 = (i2)+0;
	i8 v1593 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1593)(v1592);

	i8 v1594 = (i8)(intptr_t)(ws+200);
	i8 v1595 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1596;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1595)(&v1596, v1594);

	i8 v1597 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v1597 = v1596;

	i8 v1598 = (i8)(intptr_t)(ws+3984);
	i1 v1599 = *(i1*)(intptr_t)v1598;
	i1 v1600 = (i1)+0;
	if (v1599==v1600) goto c02_0163; else goto c02_0162;

c02_0162:;

	i8 v1601 = (i8)(intptr_t)c02_s00c1;
	i8 v1602 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1602)(v1601);

c02_0163:;

c02_015f:;

endsub:;
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);
	void f59_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// EmitterDeclareSubroutine workspace at ws+4024 length ws+18
void f110_EmitterDeclareSubroutine(i8 p1603 /* subr */) {
	*(i8*)(intptr_t)(ws+4024) = p1603; /* subr */

	i8 v1604 = (i8)(intptr_t)(ws+4024);
	i8 v1605 = *(i8*)(intptr_t)v1604;
	i8 v1606 = *(i8*)(intptr_t)v1605;
	i8 v1607 = (i8)(intptr_t)(f29_StrLen);
	i8 v1608;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1607)(&v1608, v1606);

	i8 v1609 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v1609 = v1608;

	i8 v1610 = (i8)(intptr_t)(ws+4032);
	i8 v1611 = *(i8*)(intptr_t)v1610;
	i2 v1612 = v1611;
	i8 v1613 = (i8)(intptr_t)(ws+4040);
	*(i2*)(intptr_t)v1613 = v1612;

	i1 v1614 = (i1)+78;
	i8 v1615 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1615)(v1614);

	i8 v1616 = (i8)(intptr_t)(ws+4040);
	i2 v1617 = *(i2*)(intptr_t)v1616;
	i2 v1618 = v1617+(+2);
	i8 v1619 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1619)(v1618);

	i8 v1620 = (i8)(intptr_t)(ws+4024);
	i8 v1621 = *(i8*)(intptr_t)v1620;
	i8 v1622 = v1621+(+8);
	i2 v1623 = *(i2*)(intptr_t)v1622;
	i8 v1624 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1624)(v1623);

	i8 v1625 = (i8)(intptr_t)(ws+200);
	i8 v1626 = (i8)(intptr_t)(ws+4024);
	i8 v1627 = *(i8*)(intptr_t)v1626;
	i8 v1628 = *(i8*)(intptr_t)v1627;
	i8 v1629 = (i8)(intptr_t)(ws+4040);
	i2 v1630 = *(i2*)(intptr_t)v1629;
	i8 v1631 = v1630;
	i8 v1632 = (i8)(intptr_t)(f59_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v1632)(v1631, v1628, v1625);

endsub:;
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);
	void f59_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// EmitterDeclareExternalSubroutine workspace at ws+4032 length ws+26
void f111_EmitterDeclareExternalSubroutine(i8 p1633 /* external */, i2 p1634 /* subrid */) {
	*(i2*)(intptr_t)(ws+4032) = p1634; /* subrid */
	*(i8*)(intptr_t)(ws+4040) = p1633; /* external */

	i8 v1635 = (i8)(intptr_t)(ws+4040);
	i8 v1636 = *(i8*)(intptr_t)v1635;
	i8 v1637 = (i8)(intptr_t)(f29_StrLen);
	i8 v1638;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1637)(&v1638, v1636);

	i8 v1639 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v1639 = v1638;

	i8 v1640 = (i8)(intptr_t)(ws+4048);
	i8 v1641 = *(i8*)(intptr_t)v1640;
	i2 v1642 = v1641;
	i8 v1643 = (i8)(intptr_t)(ws+4056);
	*(i2*)(intptr_t)v1643 = v1642;

	i1 v1644 = (i1)+88;
	i8 v1645 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1645)(v1644);

	i8 v1646 = (i8)(intptr_t)(ws+4056);
	i2 v1647 = *(i2*)(intptr_t)v1646;
	i2 v1648 = v1647+(+2);
	i8 v1649 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1649)(v1648);

	i8 v1650 = (i8)(intptr_t)(ws+4032);
	i2 v1651 = *(i2*)(intptr_t)v1650;
	i8 v1652 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1652)(v1651);

	i8 v1653 = (i8)(intptr_t)(ws+200);
	i8 v1654 = (i8)(intptr_t)(ws+4040);
	i8 v1655 = *(i8*)(intptr_t)v1654;
	i8 v1656 = (i8)(intptr_t)(ws+4056);
	i2 v1657 = *(i2*)(intptr_t)v1656;
	i8 v1658 = v1657;
	i8 v1659 = (i8)(intptr_t)(f59_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v1659)(v1658, v1655, v1653);

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);

// EmitterReferenceSubroutineById workspace at ws+4040 length ws+4
void f112_EmitterReferenceSubroutineById(i2 p1660 /* used */, i2 p1661 /* user */) {
	*(i2*)(intptr_t)(ws+4040) = p1661; /* user */
	*(i2*)(intptr_t)(ws+4042) = p1660; /* used */

	i1 v1662 = (i1)+82;
	i8 v1663 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1663)(v1662);

	i2 v1664 = (i2)+4;
	i8 v1665 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1665)(v1664);

	i8 v1666 = (i8)(intptr_t)(ws+4040);
	i2 v1667 = *(i2*)(intptr_t)v1666;
	i8 v1668 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1668)(v1667);

	i8 v1669 = (i8)(intptr_t)(ws+4042);
	i2 v1670 = *(i2*)(intptr_t)v1669;
	i8 v1671 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1671)(v1670);

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);

// EmitterDeclareWorkspace workspace at ws+4024 length ws+6
void f114_EmitterDeclareWorkspace(i2 p1683 /* workspace */, i1 p1684 /* wid */, i2 p1685 /* subrid */) {
	*(i2*)(intptr_t)(ws+4024) = p1685; /* subrid */
	*(i1*)(intptr_t)(ws+4026) = p1684; /* wid */
	*(i2*)(intptr_t)(ws+4028) = p1683; /* workspace */

	i1 v1686 = (i1)+87;
	i8 v1687 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1687)(v1686);

	i2 v1688 = (i2)+5;
	i8 v1689 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1689)(v1688);

	i8 v1690 = (i8)(intptr_t)(ws+4024);
	i2 v1691 = *(i2*)(intptr_t)v1690;
	i8 v1692 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1692)(v1691);

	i8 v1693 = (i8)(intptr_t)(ws+4026);
	i1 v1694 = *(i1*)(intptr_t)v1693;
	i8 v1695 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1695)(v1694);

	i8 v1696 = (i8)(intptr_t)(ws+4028);
	i2 v1697 = *(i2*)(intptr_t)v1696;
	i8 v1698 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1698)(v1697);

endsub:;
}
	void f46_FCBGetChar(i1* /* b */, i8 /* fcb */);

// I_b8 workspace at ws+4152 length ws+2
void f115_I_b8(i1* p1699 /* b */) {

	i8 v1700 = (i8)(intptr_t)(ws+2804);
	i8 v1701 = (i8)(intptr_t)(f46_FCBGetChar);
	i1 v1702;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v1701)(&v1702, v1700);

	i8 v1703 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v1703 = v1702;

	i8 v1704 = (i8)(intptr_t)(ws+4153);
	i1 v1705 = *(i1*)(intptr_t)v1704;
	i8 v1706 = (i8)(intptr_t)(ws+4152);
	*(i1*)(intptr_t)v1706 = v1705;

endsub:;
	*p1699 = *(i1*)(intptr_t)(ws+4152);
}
	void f115_I_b8(i1* /* b */);
	void f115_I_b8(i1* /* b */);

// I_b16 workspace at ws+4120 length ws+4
void f116_I_b16(i2* p1707 /* b */) {

	i8 v1708 = (i8)(intptr_t)(f115_I_b8);
	i1 v1709;

	((void(*)(i1* /* b */))(intptr_t)v1708)(&v1709);

	i8 v1710 = (i8)(intptr_t)(ws+4122);
	*(i1*)(intptr_t)v1710 = v1709;

	i8 v1711 = (i8)(intptr_t)(ws+4122);
	i1 v1712 = *(i1*)(intptr_t)v1711;
	i2 v1713 = v1712;
	i8 v1714 = (i8)(intptr_t)(ws+4120);
	*(i2*)(intptr_t)v1714 = v1713;

	i8 v1715 = (i8)(intptr_t)(f115_I_b8);
	i1 v1716;

	((void(*)(i1* /* b */))(intptr_t)v1715)(&v1716);

	i8 v1717 = (i8)(intptr_t)(ws+4123);
	*(i1*)(intptr_t)v1717 = v1716;

	i8 v1718 = (i8)(intptr_t)(ws+4120);
	i2 v1719 = *(i2*)(intptr_t)v1718;
	i8 v1720 = (i8)(intptr_t)(ws+4123);
	i1 v1721 = *(i1*)(intptr_t)v1720;
	i2 v1722 = v1721;
	i1 v1723 = (i1)+8;
	i2 v1724 = ((i2)v1722)<<v1723;
	i2 v1725 = v1719|v1724;
	i8 v1726 = (i8)(intptr_t)(ws+4120);
	*(i2*)(intptr_t)v1726 = v1725;

endsub:;
	*p1707 = *(i2*)(intptr_t)(ws+4120);
}
	void f116_I_b16(i2* /* b */);
	void f116_I_b16(i2* /* b */);

// I_b32 workspace at ws+4096 length ws+8
void f117_I_b32(i4* p1727 /* b */) {

	i8 v1728 = (i8)(intptr_t)(f116_I_b16);
	i2 v1729;

	((void(*)(i2* /* b */))(intptr_t)v1728)(&v1729);

	i8 v1730 = (i8)(intptr_t)(ws+4100);
	*(i2*)(intptr_t)v1730 = v1729;

	i8 v1731 = (i8)(intptr_t)(ws+4100);
	i2 v1732 = *(i2*)(intptr_t)v1731;
	i4 v1733 = v1732;
	i8 v1734 = (i8)(intptr_t)(ws+4096);
	*(i4*)(intptr_t)v1734 = v1733;

	i8 v1735 = (i8)(intptr_t)(f116_I_b16);
	i2 v1736;

	((void(*)(i2* /* b */))(intptr_t)v1735)(&v1736);

	i8 v1737 = (i8)(intptr_t)(ws+4102);
	*(i2*)(intptr_t)v1737 = v1736;

	i8 v1738 = (i8)(intptr_t)(ws+4096);
	i4 v1739 = *(i4*)(intptr_t)v1738;
	i8 v1740 = (i8)(intptr_t)(ws+4102);
	i2 v1741 = *(i2*)(intptr_t)v1740;
	i4 v1742 = v1741;
	i1 v1743 = (i1)+16;
	i4 v1744 = ((i4)v1742)<<v1743;
	i4 v1745 = v1739|v1744;
	i8 v1746 = (i8)(intptr_t)(ws+4096);
	*(i4*)(intptr_t)v1746 = v1745;

endsub:;
	*p1727 = *(i4*)(intptr_t)(ws+4096);
}
	void f116_I_b16(i2* /* b */);

// I_bsize workspace at ws+4112 length ws+4
void f118_I_bsize(i2* p1747 /* s */) {

	i8 v1748 = (i8)(intptr_t)(f116_I_b16);
	i2 v1749;

	((void(*)(i2* /* b */))(intptr_t)v1748)(&v1749);

	i8 v1750 = (i8)(intptr_t)(ws+4114);
	*(i2*)(intptr_t)v1750 = v1749;

	i8 v1751 = (i8)(intptr_t)(ws+4114);
	i2 v1752 = *(i2*)(intptr_t)v1751;
	i8 v1753 = (i8)(intptr_t)(ws+4112);
	*(i2*)(intptr_t)v1753 = v1752;

endsub:;
	*p1747 = *(i2*)(intptr_t)(ws+4112);
}
	void f115_I_b8(i1* /* b */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f115_I_b8(i1* /* b */);

// I_countedstring workspace at ws+4112 length ws+33
void f119_I_countedstring(i8* p1754 /* s */) {

	i8 v1755 = (i8)(intptr_t)(f115_I_b8);
	i1 v1756;

	((void(*)(i1* /* b */))(intptr_t)v1755)(&v1756);

	i8 v1757 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v1757 = v1756;

	i8 v1758 = (i8)(intptr_t)(ws+4120);
	i1 v1759 = *(i1*)(intptr_t)v1758;
	i8 v1760 = (i8)(intptr_t)(ws+4121);
	*(i1*)(intptr_t)v1760 = v1759;

	i8 v1761 = (i8)(intptr_t)(ws+4121);
	i1 v1762 = *(i1*)(intptr_t)v1761;
	i1 v1763 = v1762+(+1);
	i8 v1764 = v1763;
	i8 v1765 = (i8)(intptr_t)(f33_Alloc);
	i8 v1766;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1765)(&v1766, v1764);

	i8 v1767 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v1767 = v1766;

	i8 v1768 = (i8)(intptr_t)(ws+4128);
	i8 v1769 = *(i8*)(intptr_t)v1768;
	i8 v1770 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v1770 = v1769;

	i8 v1771 = (i8)(intptr_t)(ws+4112);
	i8 v1772 = *(i8*)(intptr_t)v1771;
	i8 v1773 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v1773 = v1772;

c02_0164:;

	i8 v1774 = (i8)(intptr_t)(ws+4121);
	i1 v1775 = *(i1*)(intptr_t)v1774;
	i1 v1776 = (i1)+0;
	if (v1775==v1776) goto c02_0169; else goto c02_0168;

c02_0168:;

	i8 v1777 = (i8)(intptr_t)(f115_I_b8);
	i1 v1778;

	((void(*)(i1* /* b */))(intptr_t)v1777)(&v1778);

	i8 v1779 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v1779 = v1778;

	i8 v1780 = (i8)(intptr_t)(ws+4144);
	i1 v1781 = *(i1*)(intptr_t)v1780;
	i8 v1782 = (i8)(intptr_t)(ws+4136);
	i8 v1783 = *(i8*)(intptr_t)v1782;
	*(i1*)(intptr_t)v1783 = v1781;

	i8 v1784 = (i8)(intptr_t)(ws+4136);
	i8 v1785 = *(i8*)(intptr_t)v1784;
	i8 v1786 = v1785+(+1);
	i8 v1787 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v1787 = v1786;

	i8 v1788 = (i8)(intptr_t)(ws+4121);
	i1 v1789 = *(i1*)(intptr_t)v1788;
	i1 v1790 = v1789+(-1);
	i8 v1791 = (i8)(intptr_t)(ws+4121);
	*(i1*)(intptr_t)v1791 = v1790;

	goto c02_0164;

c02_0169:;

	i1 v1792 = (i1)+0;
	i8 v1793 = (i8)(intptr_t)(ws+4136);
	i8 v1794 = *(i8*)(intptr_t)v1793;
	*(i1*)(intptr_t)v1794 = v1792;

endsub:;
	*p1754 = *(i8*)(intptr_t)(ws+4112);
}
	void f52_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f69_CannotOpen(i8 /* filename */);

// InputterOpenfile workspace at ws+3984 length ws+9
void f120_InputterOpenfile(i8 p1795 /* filename */) {
	*(i8*)(intptr_t)(ws+3984) = p1795; /* filename */

	i8 v1796 = (i8)(intptr_t)(ws+2804);
	i8 v1797 = (i8)(intptr_t)(ws+3984);
	i8 v1798 = *(i8*)(intptr_t)v1797;
	i8 v1799 = (i8)(intptr_t)(f52_FCBOpenIn);
	i1 v1800;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1799)(&v1800, v1798, v1796);

	i8 v1801 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v1801 = v1800;

	i8 v1802 = (i8)(intptr_t)(ws+3992);
	i1 v1803 = *(i1*)(intptr_t)v1802;
	i1 v1804 = (i1)+0;
	if (v1803==v1804) goto c02_016e; else goto c02_016d;

c02_016d:;

	i8 v1805 = (i8)(intptr_t)(ws+3984);
	i8 v1806 = *(i8*)(intptr_t)v1805;
	i8 v1807 = (i8)(intptr_t)(f69_CannotOpen);

	((void(*)(i8 /* filename */))(intptr_t)v1807)(v1806);

c02_016e:;

c02_016a:;

endsub:;
}
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);

// InputterClosefile workspace at ws+3984 length ws+2
void f121_InputterClosefile(void) {

	i8 v1808 = (i8)(intptr_t)(ws+2804);
	i8 v1809 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1810;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1809)(&v1810, v1808);

	i8 v1811 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v1811 = v1810;

	i8 v1812 = (i8)(intptr_t)(ws+3984);
	i1 v1813 = *(i1*)(intptr_t)v1812;
	i8 v1814 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v1814 = v1813;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);

// ReadMid0 workspace at ws+4088 length ws+24
void f122_ReadMid0(i8 p1815 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1815; /* node */

	i8 v1816 = (i8)(intptr_t)(f116_I_b16);
	i2 v1817;

	((void(*)(i2* /* b */))(intptr_t)v1816)(&v1817);

	i8 v1818 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1818 = v1817;

	i8 v1819 = (i8)(intptr_t)(ws+4088);
	i2 v1820 = *(i2*)(intptr_t)v1819;
	i8 v1821 = (i8)(intptr_t)(f65_FindSubr);
	i8 v1822;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1821)(&v1822, v1820);

	i8 v1823 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1823 = v1822;

	i8 v1824 = (i8)(intptr_t)(ws+4096);
	i8 v1825 = *(i8*)(intptr_t)v1824;
	i8 v1826 = (i8)(intptr_t)(ws+4080);
	i8 v1827 = *(i8*)(intptr_t)v1826;
	*(i8*)(intptr_t)v1827 = v1825;

	i8 v1828 = (i8)(intptr_t)(f115_I_b8);
	i1 v1829;

	((void(*)(i1* /* b */))(intptr_t)v1828)(&v1829);

	i8 v1830 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v1830 = v1829;

	i8 v1831 = (i8)(intptr_t)(ws+4104);
	i1 v1832 = *(i1*)(intptr_t)v1831;
	i8 v1833 = (i8)(intptr_t)(ws+4080);
	i8 v1834 = *(i8*)(intptr_t)v1833;
	i8 v1835 = v1834+(+10);
	*(i1*)(intptr_t)v1835 = v1832;

	i8 v1836 = (i8)(intptr_t)(f118_I_bsize);
	i2 v1837;

	((void(*)(i2* /* s */))(intptr_t)v1836)(&v1837);

	i8 v1838 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v1838 = v1837;

	i8 v1839 = (i8)(intptr_t)(ws+4106);
	i2 v1840 = *(i2*)(intptr_t)v1839;
	i8 v1841 = (i8)(intptr_t)(ws+4080);
	i8 v1842 = *(i8*)(intptr_t)v1841;
	i8 v1843 = v1842+(+12);
	*(i2*)(intptr_t)v1843 = v1840;

	i8 v1844 = (i8)(intptr_t)(f115_I_b8);
	i1 v1845;

	((void(*)(i1* /* b */))(intptr_t)v1844)(&v1845);

	i8 v1846 = (i8)(intptr_t)(ws+4108);
	*(i1*)(intptr_t)v1846 = v1845;

	i8 v1847 = (i8)(intptr_t)(ws+4108);
	i1 v1848 = *(i1*)(intptr_t)v1847;
	i8 v1849 = (i8)(intptr_t)(ws+4080);
	i8 v1850 = *(i8*)(intptr_t)v1849;
	i8 v1851 = v1850+(+14);
	*(i1*)(intptr_t)v1851 = v1848;

	i8 v1852 = (i8)(intptr_t)(f118_I_bsize);
	i2 v1853;

	((void(*)(i2* /* s */))(intptr_t)v1852)(&v1853);

	i8 v1854 = (i8)(intptr_t)(ws+4110);
	*(i2*)(intptr_t)v1854 = v1853;

	i8 v1855 = (i8)(intptr_t)(ws+4110);
	i2 v1856 = *(i2*)(intptr_t)v1855;
	i8 v1857 = (i8)(intptr_t)(ws+4080);
	i8 v1858 = *(i8*)(intptr_t)v1857;
	i8 v1859 = v1858+(+16);
	*(i2*)(intptr_t)v1859 = v1856;

endsub:;
}
	void f115_I_b8(i1* /* b */);

// ReadMid1 workspace at ws+4088 length ws+1
void f123_ReadMid1(i8 p1860 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1860; /* node */

	i8 v1861 = (i8)(intptr_t)(f115_I_b8);
	i1 v1862;

	((void(*)(i1* /* b */))(intptr_t)v1861)(&v1862);

	i8 v1863 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v1863 = v1862;

	i8 v1864 = (i8)(intptr_t)(ws+4088);
	i1 v1865 = *(i1*)(intptr_t)v1864;
	i8 v1866 = (i8)(intptr_t)(ws+4080);
	i8 v1867 = *(i8*)(intptr_t)v1866;
	*(i1*)(intptr_t)v1867 = v1865;

endsub:;
}
	void f116_I_b16(i2* /* b */);

// ReadMid2 workspace at ws+4088 length ws+2
void f124_ReadMid2(i8 p1868 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1868; /* node */

	i8 v1869 = (i8)(intptr_t)(f116_I_b16);
	i2 v1870;

	((void(*)(i2* /* b */))(intptr_t)v1869)(&v1870);

	i8 v1871 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1871 = v1870;

	i8 v1872 = (i8)(intptr_t)(ws+4088);
	i2 v1873 = *(i2*)(intptr_t)v1872;
	i8 v1874 = (i8)(intptr_t)(ws+4080);
	i8 v1875 = *(i8*)(intptr_t)v1874;
	*(i2*)(intptr_t)v1875 = v1873;

endsub:;
}

// ReadMid3 workspace at ws+4088 length ws+0
void f125_ReadMid3(i8 p1876 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1876; /* node */

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);

// ReadMid4 workspace at ws+4088 length ws+16
void f126_ReadMid4(i8 p1877 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1877; /* node */

	i8 v1878 = (i8)(intptr_t)(f116_I_b16);
	i2 v1879;

	((void(*)(i2* /* b */))(intptr_t)v1878)(&v1879);

	i8 v1880 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1880 = v1879;

	i8 v1881 = (i8)(intptr_t)(ws+4088);
	i2 v1882 = *(i2*)(intptr_t)v1881;
	i8 v1883 = (i8)(intptr_t)(f65_FindSubr);
	i8 v1884;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1883)(&v1884, v1882);

	i8 v1885 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1885 = v1884;

	i8 v1886 = (i8)(intptr_t)(ws+4096);
	i8 v1887 = *(i8*)(intptr_t)v1886;
	i8 v1888 = (i8)(intptr_t)(ws+4080);
	i8 v1889 = *(i8*)(intptr_t)v1888;
	*(i8*)(intptr_t)v1889 = v1887;

endsub:;
}
	void f119_I_countedstring(i8* /* s */);

// ReadMid5 workspace at ws+4088 length ws+8
void f127_ReadMid5(i8 p1890 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1890; /* node */

	i8 v1891 = (i8)(intptr_t)(f119_I_countedstring);
	i8 v1892;

	((void(*)(i8* /* s */))(intptr_t)v1891)(&v1892);

	i8 v1893 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v1893 = v1892;

	i8 v1894 = (i8)(intptr_t)(ws+4088);
	i8 v1895 = *(i8*)(intptr_t)v1894;
	i8 v1896 = (i8)(intptr_t)(ws+4080);
	i8 v1897 = *(i8*)(intptr_t)v1896;
	*(i8*)(intptr_t)v1897 = v1895;

endsub:;
}
	void f117_I_b32(i4* /* b */);

// ReadMid6 workspace at ws+4088 length ws+4
void f128_ReadMid6(i8 p1898 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1898; /* node */

	i8 v1899 = (i8)(intptr_t)(f117_I_b32);
	i4 v1900;

	((void(*)(i4* /* b */))(intptr_t)v1899)(&v1900);

	i8 v1901 = (i8)(intptr_t)(ws+4088);
	*(i4*)(intptr_t)v1901 = v1900;

	i8 v1902 = (i8)(intptr_t)(ws+4088);
	i4 v1903 = *(i4*)(intptr_t)v1902;
	i8 v1904 = (i8)(intptr_t)(ws+4080);
	i8 v1905 = *(i8*)(intptr_t)v1904;
	*(i4*)(intptr_t)v1905 = v1903;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);
	void f115_I_b8(i1* /* b */);

// ReadMid7 workspace at ws+4088 length ws+21
void f129_ReadMid7(i8 p1906 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1906; /* node */

	i8 v1907 = (i8)(intptr_t)(f116_I_b16);
	i2 v1908;

	((void(*)(i2* /* b */))(intptr_t)v1907)(&v1908);

	i8 v1909 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1909 = v1908;

	i8 v1910 = (i8)(intptr_t)(ws+4088);
	i2 v1911 = *(i2*)(intptr_t)v1910;
	i8 v1912 = (i8)(intptr_t)(f65_FindSubr);
	i8 v1913;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1912)(&v1913, v1911);

	i8 v1914 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1914 = v1913;

	i8 v1915 = (i8)(intptr_t)(ws+4096);
	i8 v1916 = *(i8*)(intptr_t)v1915;
	i8 v1917 = (i8)(intptr_t)(ws+4080);
	i8 v1918 = *(i8*)(intptr_t)v1917;
	*(i8*)(intptr_t)v1918 = v1916;

	i8 v1919 = (i8)(intptr_t)(f115_I_b8);
	i1 v1920;

	((void(*)(i1* /* b */))(intptr_t)v1919)(&v1920);

	i8 v1921 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v1921 = v1920;

	i8 v1922 = (i8)(intptr_t)(ws+4104);
	i1 v1923 = *(i1*)(intptr_t)v1922;
	i8 v1924 = (i8)(intptr_t)(ws+4080);
	i8 v1925 = *(i8*)(intptr_t)v1924;
	i8 v1926 = v1925+(+10);
	*(i1*)(intptr_t)v1926 = v1923;

	i8 v1927 = (i8)(intptr_t)(f118_I_bsize);
	i2 v1928;

	((void(*)(i2* /* s */))(intptr_t)v1927)(&v1928);

	i8 v1929 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v1929 = v1928;

	i8 v1930 = (i8)(intptr_t)(ws+4106);
	i2 v1931 = *(i2*)(intptr_t)v1930;
	i8 v1932 = (i8)(intptr_t)(ws+4080);
	i8 v1933 = *(i8*)(intptr_t)v1932;
	i8 v1934 = v1933+(+12);
	*(i2*)(intptr_t)v1934 = v1931;

	i8 v1935 = (i8)(intptr_t)(f115_I_b8);
	i1 v1936;

	((void(*)(i1* /* b */))(intptr_t)v1935)(&v1936);

	i8 v1937 = (i8)(intptr_t)(ws+4108);
	*(i1*)(intptr_t)v1937 = v1936;

	i8 v1938 = (i8)(intptr_t)(ws+4108);
	i1 v1939 = *(i1*)(intptr_t)v1938;
	i8 v1940 = (i8)(intptr_t)(ws+4080);
	i8 v1941 = *(i8*)(intptr_t)v1940;
	i8 v1942 = v1941+(+14);
	*(i1*)(intptr_t)v1942 = v1939;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f116_I_b16(i2* /* b */);
	void f116_I_b16(i2* /* b */);
	void f115_I_b8(i1* /* b */);

// ReadMid8 workspace at ws+4088 length ws+7
void f130_ReadMid8(i8 p1943 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1943; /* node */

	i8 v1944 = (i8)(intptr_t)(f116_I_b16);
	i2 v1945;

	((void(*)(i2* /* b */))(intptr_t)v1944)(&v1945);

	i8 v1946 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1946 = v1945;

	i8 v1947 = (i8)(intptr_t)(ws+4088);
	i2 v1948 = *(i2*)(intptr_t)v1947;
	i8 v1949 = (i8)(intptr_t)(ws+4080);
	i8 v1950 = *(i8*)(intptr_t)v1949;
	*(i2*)(intptr_t)v1950 = v1948;

	i8 v1951 = (i8)(intptr_t)(f116_I_b16);
	i2 v1952;

	((void(*)(i2* /* b */))(intptr_t)v1951)(&v1952);

	i8 v1953 = (i8)(intptr_t)(ws+4090);
	*(i2*)(intptr_t)v1953 = v1952;

	i8 v1954 = (i8)(intptr_t)(ws+4090);
	i2 v1955 = *(i2*)(intptr_t)v1954;
	i8 v1956 = (i8)(intptr_t)(ws+4080);
	i8 v1957 = *(i8*)(intptr_t)v1956;
	i8 v1958 = v1957+(+2);
	*(i2*)(intptr_t)v1958 = v1955;

	i8 v1959 = (i8)(intptr_t)(f116_I_b16);
	i2 v1960;

	((void(*)(i2* /* b */))(intptr_t)v1959)(&v1960);

	i8 v1961 = (i8)(intptr_t)(ws+4092);
	*(i2*)(intptr_t)v1961 = v1960;

	i8 v1962 = (i8)(intptr_t)(ws+4092);
	i2 v1963 = *(i2*)(intptr_t)v1962;
	i8 v1964 = (i8)(intptr_t)(ws+4080);
	i8 v1965 = *(i8*)(intptr_t)v1964;
	i8 v1966 = v1965+(+4);
	*(i2*)(intptr_t)v1966 = v1963;

	i8 v1967 = (i8)(intptr_t)(f115_I_b8);
	i1 v1968;

	((void(*)(i1* /* b */))(intptr_t)v1967)(&v1968);

	i8 v1969 = (i8)(intptr_t)(ws+4094);
	*(i1*)(intptr_t)v1969 = v1968;

	i8 v1970 = (i8)(intptr_t)(ws+4094);
	i1 v1971 = *(i1*)(intptr_t)v1970;
	i8 v1972 = (i8)(intptr_t)(ws+4080);
	i8 v1973 = *(i8*)(intptr_t)v1972;
	i8 v1974 = v1973+(+6);
	*(i1*)(intptr_t)v1974 = v1971;

endsub:;
}
	void f117_I_b32(i4* /* b */);
	void f116_I_b16(i2* /* b */);

// ReadMid9 workspace at ws+4088 length ws+6
void f131_ReadMid9(i8 p1975 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1975; /* node */

	i8 v1976 = (i8)(intptr_t)(f117_I_b32);
	i4 v1977;

	((void(*)(i4* /* b */))(intptr_t)v1976)(&v1977);

	i8 v1978 = (i8)(intptr_t)(ws+4088);
	*(i4*)(intptr_t)v1978 = v1977;

	i8 v1979 = (i8)(intptr_t)(ws+4088);
	i4 v1980 = *(i4*)(intptr_t)v1979;
	i8 v1981 = (i8)(intptr_t)(ws+4080);
	i8 v1982 = *(i8*)(intptr_t)v1981;
	*(i4*)(intptr_t)v1982 = v1980;

	i8 v1983 = (i8)(intptr_t)(f116_I_b16);
	i2 v1984;

	((void(*)(i2* /* b */))(intptr_t)v1983)(&v1984);

	i8 v1985 = (i8)(intptr_t)(ws+4092);
	*(i2*)(intptr_t)v1985 = v1984;

	i8 v1986 = (i8)(intptr_t)(ws+4092);
	i2 v1987 = *(i2*)(intptr_t)v1986;
	i8 v1988 = (i8)(intptr_t)(ws+4080);
	i8 v1989 = *(i8*)(intptr_t)v1988;
	i8 v1990 = v1989+(+4);
	*(i2*)(intptr_t)v1990 = v1987;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);

// ReadMid10 workspace at ws+4088 length ws+17
void f132_ReadMid10(i8 p1991 /* node */) {
	*(i8*)(intptr_t)(ws+4080) = p1991; /* node */

	i8 v1992 = (i8)(intptr_t)(f116_I_b16);
	i2 v1993;

	((void(*)(i2* /* b */))(intptr_t)v1992)(&v1993);

	i8 v1994 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v1994 = v1993;

	i8 v1995 = (i8)(intptr_t)(ws+4088);
	i2 v1996 = *(i2*)(intptr_t)v1995;
	i8 v1997 = (i8)(intptr_t)(f65_FindSubr);
	i8 v1998;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1997)(&v1998, v1996);

	i8 v1999 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v1999 = v1998;

	i8 v2000 = (i8)(intptr_t)(ws+4096);
	i8 v2001 = *(i8*)(intptr_t)v2000;
	i8 v2002 = (i8)(intptr_t)(ws+4080);
	i8 v2003 = *(i8*)(intptr_t)v2002;
	*(i8*)(intptr_t)v2003 = v2001;

	i8 v2004 = (i8)(intptr_t)(f115_I_b8);
	i1 v2005;

	((void(*)(i1* /* b */))(intptr_t)v2004)(&v2005);

	i8 v2006 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v2006 = v2005;

	i8 v2007 = (i8)(intptr_t)(ws+4104);
	i1 v2008 = *(i1*)(intptr_t)v2007;
	i8 v2009 = (i8)(intptr_t)(ws+4080);
	i8 v2010 = *(i8*)(intptr_t)v2009;
	i8 v2011 = v2010+(+8);
	*(i1*)(intptr_t)v2011 = v2008;

endsub:;
}
	void f122_ReadMid0(i8 /* node */);
	void f123_ReadMid1(i8 /* node */);
	void f124_ReadMid2(i8 /* node */);
	void f125_ReadMid3(i8 /* node */);
	void f126_ReadMid4(i8 /* node */);
	void f127_ReadMid5(i8 /* node */);
	void f128_ReadMid6(i8 /* node */);
	void f129_ReadMid7(i8 /* node */);
	void f130_ReadMid8(i8 /* node */);
	void f131_ReadMid9(i8 /* node */);
	void f132_ReadMid10(i8 /* node */);
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








	{ .i1 = { 0x03,0x03,0x03,0x04,0x04,0x07,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x05,0x00,0x04,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x05,0x07,0x04,0x06,0x03,0x03}},








	{ .i1 = { 0x03,0x02,0x02,0x03,0x04,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x06}},








	{ .i1 = { 0x05,0x00,0x04,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x08,0x08,0x08}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x08,0x08,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x09,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








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
	void f23_MemZero(i8 /* size */, i8 /* ptr */);
	void f23_MemZero(i8 /* size */, i8 /* ptr */);

// AllocSubrId workspace at ws+4096 length ws+2
void f146_AllocSubrId(i2* p2487 /* id */) {

	i8 v2488 = (i8)(intptr_t)(ws+50);
	i2 v2489 = *(i2*)(intptr_t)v2488;
	i8 v2490 = (i8)(intptr_t)(ws+4096);
	*(i2*)(intptr_t)v2490 = v2489;

	i8 v2491 = (i8)(intptr_t)(ws+50);
	i2 v2492 = *(i2*)(intptr_t)v2491;
	i2 v2493 = v2492+(+1);
	i8 v2494 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v2494 = v2493;

endsub:;
	*p2487 = *(i2*)(intptr_t)(ws+4096);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f70_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewInstruction workspace at ws+4112 length ws+16
void f147_AllocNewInstruction(i8* p2497 /* insn */) {

	i8 v2498 = (i8)(intptr_t)(ws+3696);
	i8 v2499 = *(i8*)(intptr_t)v2498;
	i8 v2500 = (i8)+0;
	if (v2499==v2500) goto c02_0215; else goto c02_0214;

c02_0214:;

	i8 v2501 = (i8)(intptr_t)(ws+3696);
	i8 v2502 = *(i8*)(intptr_t)v2501;
	i8 v2503 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v2503 = v2502;

	i8 v2504 = (i8)(intptr_t)(ws+3696);
	i8 v2505 = *(i8*)(intptr_t)v2504;
	i8 v2506 = *(i8*)(intptr_t)v2505;
	i8 v2507 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2507 = v2506;

	i8 v2508 = (i8)(intptr_t)(ws+4112);
	i8 v2509 = *(i8*)(intptr_t)v2508;
	i1 v2510 = (i1)+0;
	i8 v2511 = (i8)+87;
	i8 v2512 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v2512)(v2511, v2510, v2509);

	goto c02_0211;

c02_0215:;

	i8 v2513 = (i8)+87;
	i8 v2514 = (i8)(intptr_t)(f70_InternalAlloc);
	i8 v2515;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v2514)(&v2515, v2513);

	i8 v2516 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v2516 = v2515;

	i8 v2517 = (i8)(intptr_t)(ws+4120);
	i8 v2518 = *(i8*)(intptr_t)v2517;
	i8 v2519 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v2519 = v2518;

c02_0211:;

endsub:;
	*p2497 = *(i8*)(intptr_t)(ws+4112);
}

// FreeInstruction workspace at ws+4120 length ws+8
void f148_FreeInstruction(i8 p2520 /* insn */) {
	*(i8*)(intptr_t)(ws+4120) = p2520; /* insn */

	i8 v2521 = (i8)(intptr_t)(ws+3696);
	i8 v2522 = *(i8*)(intptr_t)v2521;
	i8 v2523 = (i8)(intptr_t)(ws+4120);
	i8 v2524 = *(i8*)(intptr_t)v2523;
	*(i8*)(intptr_t)v2524 = v2522;

	i8 v2525 = (i8)(intptr_t)(ws+4120);
	i8 v2526 = *(i8*)(intptr_t)v2525;
	i8 v2527 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2527 = v2526;

endsub:;
}
	void f34_Free(i8 /* block */);

// PurgeAllFreeInstructions workspace at ws+4272 length ws+8
void f72_PurgeAllFreeInstructions(void) {

c02_0216:;

	i8 v2528 = (i8)(intptr_t)(ws+3696);
	i8 v2529 = *(i8*)(intptr_t)v2528;
	i8 v2530 = (i8)+0;
	if (v2529==v2530) goto c02_021b; else goto c02_021a;

c02_021a:;

	i8 v2531 = (i8)(intptr_t)(ws+3696);
	i8 v2532 = *(i8*)(intptr_t)v2531;
	i8 v2533 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v2533 = v2532;

	i8 v2534 = (i8)(intptr_t)(ws+3696);
	i8 v2535 = *(i8*)(intptr_t)v2534;
	i8 v2536 = *(i8*)(intptr_t)v2535;
	i8 v2537 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2537 = v2536;

	i8 v2538 = (i8)(intptr_t)(ws+4272);
	i8 v2539 = *(i8*)(intptr_t)v2538;
	i8 v2540 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v2540)(v2539);

	goto c02_0216;

c02_021b:;

endsub:;
}

// FindConflictingRegisters workspace at ws+4152 length ws+16
void f149_FindConflictingRegisters(i1* p2541 /* conflicting */, i1 p2542 /* inreg */) {
	*(i1*)(intptr_t)(ws+4152) = p2542; /* inreg */

	i1 v2543 = (i1)+0;
	i8 v2544 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2544 = v2543;

	i8 v2545 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v2546 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2546 = v2545;

c02_021c:;

	i8 v2547 = (i8)(intptr_t)(ws+4160);
	i8 v2548 = *(i8*)(intptr_t)v2547;
	i8 v2549 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v2548==v2549) goto c02_0221; else goto c02_0220;

c02_0220:;

	i8 v2550 = (i8)(intptr_t)(ws+4160);
	i8 v2551 = *(i8*)(intptr_t)v2550;
	i8 v2552 = v2551+(+8);
	i1 v2553 = *(i1*)(intptr_t)v2552;
	i8 v2554 = (i8)(intptr_t)(ws+4152);
	i1 v2555 = *(i1*)(intptr_t)v2554;
	i1 v2556 = v2553&v2555;
	i1 v2557 = (i1)+0;
	if (v2556==v2557) goto c02_0226; else goto c02_0225;

c02_0225:;

	i8 v2558 = (i8)(intptr_t)(ws+4153);
	i1 v2559 = *(i1*)(intptr_t)v2558;
	i8 v2560 = (i8)(intptr_t)(ws+4160);
	i8 v2561 = *(i8*)(intptr_t)v2560;
	i8 v2562 = v2561+(+9);
	i1 v2563 = *(i1*)(intptr_t)v2562;
	i1 v2564 = v2559|v2563;
	i8 v2565 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2565 = v2564;

c02_0226:;

c02_0222:;

	i8 v2566 = (i8)(intptr_t)(ws+4160);
	i8 v2567 = *(i8*)(intptr_t)v2566;
	i8 v2568 = v2567+(+16);
	i8 v2569 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2569 = v2568;

	goto c02_021c;

c02_0221:;

endsub:;
	*p2541 = *(i1*)(intptr_t)(ws+4153);
}

// FindCompatibleRegisters workspace at ws+4152 length ws+16
void f150_FindCompatibleRegisters(i1* p2570 /* compatible */, i1 p2571 /* inreg */) {
	*(i1*)(intptr_t)(ws+4152) = p2571; /* inreg */

	i1 v2572 = (i1)-1;
	i8 v2573 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2573 = v2572;

	i8 v2574 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v2575 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2575 = v2574;

c02_0227:;

	i8 v2576 = (i8)(intptr_t)(ws+4160);
	i8 v2577 = *(i8*)(intptr_t)v2576;
	i8 v2578 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v2577==v2578) goto c02_022c; else goto c02_022b;

c02_022b:;

	i8 v2579 = (i8)(intptr_t)(ws+4160);
	i8 v2580 = *(i8*)(intptr_t)v2579;
	i8 v2581 = v2580+(+8);
	i1 v2582 = *(i1*)(intptr_t)v2581;
	i8 v2583 = (i8)(intptr_t)(ws+4152);
	i1 v2584 = *(i1*)(intptr_t)v2583;
	i1 v2585 = v2582&v2584;
	i1 v2586 = (i1)+0;
	if (v2585==v2586) goto c02_0231; else goto c02_0230;

c02_0230:;

	i8 v2587 = (i8)(intptr_t)(ws+4153);
	i1 v2588 = *(i1*)(intptr_t)v2587;
	i8 v2589 = (i8)(intptr_t)(ws+4160);
	i8 v2590 = *(i8*)(intptr_t)v2589;
	i8 v2591 = v2590+(+10);
	i1 v2592 = *(i1*)(intptr_t)v2591;
	i1 v2593 = v2588&v2592;
	i8 v2594 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v2594 = v2593;

c02_0231:;

c02_022d:;

	i8 v2595 = (i8)(intptr_t)(ws+4160);
	i8 v2596 = *(i8*)(intptr_t)v2595;
	i8 v2597 = v2596+(+16);
	i8 v2598 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v2598 = v2597;

	goto c02_0227;

c02_022c:;

endsub:;
	*p2570 = *(i1*)(intptr_t)(ws+4153);
}

// FindFirst workspace at ws+4216 length ws+2
void f151_FindFirst(i1* p2599 /* outreg */, i1 p2600 /* inreg */) {
	*(i1*)(intptr_t)(ws+4216) = p2600; /* inreg */

	i1 v2601 = (i1)+1;
	i8 v2602 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v2602 = v2601;

c02_0232:;

	i8 v2603 = (i8)(intptr_t)(ws+4217);
	i1 v2604 = *(i1*)(intptr_t)v2603;
	i1 v2605 = (i1)+0;
	if (v2604==v2605) goto c02_0237; else goto c02_0236;

c02_0236:;

	i8 v2606 = (i8)(intptr_t)(ws+4216);
	i1 v2607 = *(i1*)(intptr_t)v2606;
	i8 v2608 = (i8)(intptr_t)(ws+4217);
	i1 v2609 = *(i1*)(intptr_t)v2608;
	i1 v2610 = v2607&v2609;
	i1 v2611 = (i1)+0;
	if (v2610==v2611) goto c02_023c; else goto c02_023b;

c02_023b:;

	goto endsub;

c02_023c:;

c02_0238:;

	i8 v2612 = (i8)(intptr_t)(ws+4217);
	i1 v2613 = *(i1*)(intptr_t)v2612;
	i1 v2614 = (i1)+1;
	i1 v2615 = ((i1)v2613)<<v2614;
	i8 v2616 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v2616 = v2615;

	goto c02_0232;

c02_0237:;

	i1 v2617 = (i1)+0;
	i8 v2618 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v2618 = v2617;

endsub:;
	*p2599 = *(i1*)(intptr_t)(ws+4217);
}
const i1 c02_s00c2[] = { 0x28,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00c3[] = { 0x2c,0x20,0 };
	void f92_E(i8 /* text */);

// comma workspace at ws+4336 length ws+0
void f156_comma(void) {

	i8 v2683 = (i8)(intptr_t)(ws+4304);
	i1 v2684 = *(i1*)(intptr_t)v2683;
	i1 v2685 = (i1)+0;
	if (v2684==v2685) goto c02_0251; else goto c02_0252;

c02_0251:;

	i8 v2686 = (i8)(intptr_t)c02_s00c3;
	i8 v2687 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2687)(v2686);

c02_0252:;

c02_024e:;

	i1 v2688 = (i1)+0;
	i8 v2689 = (i8)(intptr_t)(ws+4304);
	*(i1*)(intptr_t)v2689 = v2688;

endsub:;
}
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f156_comma(void);
const i1 c02_s00c4[] = { 0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00c5[] = { 0x2a,0x20,0x2f,0x2a,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s00c6[] = { 0x20,0x2a,0x2f,0 };
	void f92_E(i8 /* text */);
	void f73_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f156_comma(void);
const i1 c02_s00c7[] = { 0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00c8[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s00c9[] = { 0x20,0x2a,0x2f,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00ca[] = { 0x76,0x6f,0x69,0x64,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00cb[] = { 0x29,0 };
	void f92_E(i8 /* text */);

// EmitFunctionSignature workspace at ws+4296 length ws+40
void f155_EmitFunctionSignature(i8 p2678 /* subr */) {
	*(i8*)(intptr_t)(ws+4296) = p2678; /* subr */

	i8 v2679 = (i8)(intptr_t)c02_s00c2;
	i8 v2680 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2680)(v2679);

	i1 v2681 = (i1)+1;
	i8 v2682 = (i8)(intptr_t)(ws+4304);
	*(i1*)(intptr_t)v2682 = v2681;


	i1 v2690 = (i1)+0;
	i8 v2691 = (i8)(intptr_t)(ws+4305);
	*(i1*)(intptr_t)v2691 = v2690;

c02_0253:;

	i8 v2692 = (i8)(intptr_t)(ws+4305);
	i1 v2693 = *(i1*)(intptr_t)v2692;
	i8 v2694 = (i8)(intptr_t)(ws+4296);
	i8 v2695 = *(i8*)(intptr_t)v2694;
	i8 v2696 = v2695+(+49);
	i1 v2697 = *(i1*)(intptr_t)v2696;
	if (v2693==v2697) goto c02_0258; else goto c02_0257;

c02_0257:;

	i8 v2698 = (i8)(intptr_t)(ws+4296);
	i8 v2699 = *(i8*)(intptr_t)v2698;
	i8 v2700 = (i8)(intptr_t)(ws+4305);
	i1 v2701 = *(i1*)(intptr_t)v2700;
	i8 v2702 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v2703;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2702)(&v2703, v2701, v2699);

	i8 v2704 = (i8)(intptr_t)(ws+4312);
	*(i8*)(intptr_t)v2704 = v2703;

	i8 v2705 = (i8)(intptr_t)(ws+4312);
	i8 v2706 = *(i8*)(intptr_t)v2705;
	i8 v2707 = (i8)(intptr_t)(ws+4320);
	*(i8*)(intptr_t)v2707 = v2706;

	i8 v2708 = (i8)(intptr_t)(f156_comma);

	((void(*)(void))(intptr_t)v2708)();

	i8 v2709 = (i8)(intptr_t)c02_s00c4;
	i8 v2710 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2710)(v2709);

	i8 v2711 = (i8)(intptr_t)(ws+4320);
	i8 v2712 = *(i8*)(intptr_t)v2711;
	i8 v2713 = v2712+(+14);
	i1 v2714 = *(i1*)(intptr_t)v2713;
	i8 v2715 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2715)(v2714);

	i8 v2716 = (i8)(intptr_t)c02_s00c5;
	i8 v2717 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2717)(v2716);

	i8 v2718 = (i8)(intptr_t)(ws+4320);
	i8 v2719 = *(i8*)(intptr_t)v2718;
	i8 v2720 = v2719+(+16);
	i8 v2721 = *(i8*)(intptr_t)v2720;
	i8 v2722 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2722)(v2721);

	i8 v2723 = (i8)(intptr_t)c02_s00c6;
	i8 v2724 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2724)(v2723);

	i8 v2725 = (i8)(intptr_t)(ws+4305);
	i1 v2726 = *(i1*)(intptr_t)v2725;
	i1 v2727 = v2726+(+1);
	i8 v2728 = (i8)(intptr_t)(ws+4305);
	*(i1*)(intptr_t)v2728 = v2727;

	goto c02_0253;

c02_0258:;

	i8 v2729 = (i8)(intptr_t)(ws+4296);
	i8 v2730 = *(i8*)(intptr_t)v2729;
	i8 v2731 = v2730+(+48);
	i1 v2732 = *(i1*)(intptr_t)v2731;
	i8 v2733 = (i8)(intptr_t)(ws+4305);
	*(i1*)(intptr_t)v2733 = v2732;

c02_0259:;

	i8 v2734 = (i8)(intptr_t)(ws+4305);
	i1 v2735 = *(i1*)(intptr_t)v2734;
	i1 v2736 = (i1)+0;
	if (v2735==v2736) goto c02_025e; else goto c02_025d;

c02_025d:;

	i8 v2737 = (i8)(intptr_t)(ws+4305);
	i1 v2738 = *(i1*)(intptr_t)v2737;
	i1 v2739 = v2738+(-1);
	i8 v2740 = (i8)(intptr_t)(ws+4305);
	*(i1*)(intptr_t)v2740 = v2739;

	i8 v2741 = (i8)(intptr_t)(ws+4296);
	i8 v2742 = *(i8*)(intptr_t)v2741;
	i8 v2743 = (i8)(intptr_t)(ws+4305);
	i1 v2744 = *(i1*)(intptr_t)v2743;
	i8 v2745 = (i8)(intptr_t)(f73_GetInputParameter);
	i8 v2746;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2745)(&v2746, v2744, v2742);

	i8 v2747 = (i8)(intptr_t)(ws+4328);
	*(i8*)(intptr_t)v2747 = v2746;

	i8 v2748 = (i8)(intptr_t)(ws+4328);
	i8 v2749 = *(i8*)(intptr_t)v2748;
	i8 v2750 = (i8)(intptr_t)(ws+4320);
	*(i8*)(intptr_t)v2750 = v2749;

	i8 v2751 = (i8)(intptr_t)(f156_comma);

	((void(*)(void))(intptr_t)v2751)();

	i8 v2752 = (i8)(intptr_t)c02_s00c7;
	i8 v2753 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2753)(v2752);

	i8 v2754 = (i8)(intptr_t)(ws+4320);
	i8 v2755 = *(i8*)(intptr_t)v2754;
	i8 v2756 = v2755+(+14);
	i1 v2757 = *(i1*)(intptr_t)v2756;
	i8 v2758 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2758)(v2757);

	i8 v2759 = (i8)(intptr_t)c02_s00c8;
	i8 v2760 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2760)(v2759);

	i8 v2761 = (i8)(intptr_t)(ws+4320);
	i8 v2762 = *(i8*)(intptr_t)v2761;
	i8 v2763 = v2762+(+16);
	i8 v2764 = *(i8*)(intptr_t)v2763;
	i8 v2765 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2765)(v2764);

	i8 v2766 = (i8)(intptr_t)c02_s00c9;
	i8 v2767 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2767)(v2766);

	goto c02_0259;

c02_025e:;

	i8 v2768 = (i8)(intptr_t)(ws+4296);
	i8 v2769 = *(i8*)(intptr_t)v2768;
	i8 v2770 = v2769+(+48);
	i1 v2771 = *(i1*)(intptr_t)v2770;
	i8 v2772 = (i8)(intptr_t)(ws+4296);
	i8 v2773 = *(i8*)(intptr_t)v2772;
	i8 v2774 = v2773+(+49);
	i1 v2775 = *(i1*)(intptr_t)v2774;
	i1 v2776 = v2771+v2775;
	i1 v2777 = (i1)+0;
	if (v2776==v2777) goto c02_0262; else goto c02_0263;

c02_0262:;

	i8 v2778 = (i8)(intptr_t)c02_s00ca;
	i8 v2779 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2779)(v2778);

c02_0263:;

c02_025f:;

	i8 v2780 = (i8)(intptr_t)c02_s00cb;
	i8 v2781 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2781)(v2780);

endsub:;
}
	void f106_EmitterOpenStream(i8 /* subr */);
const i1 c02_s00cc[] = { 0x09,0x76,0x6f,0x69,0x64,0x20,0 };
	void f92_E(i8 /* text */);
	void f104_E_subref(i8 /* subr */);
	void f155_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s00cd[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f107_EmitterCloseStream(void);
	void f104_E_subref(i8 /* subr */);

// E_subref_sig workspace at ws+4232 length ws+8
void f157_E_subref_sig(i8 p2782 /* subr */) {
	*(i8*)(intptr_t)(ws+4232) = p2782; /* subr */

	i8 v2783 = (i8)(intptr_t)(ws+40);
	i8 v2784 = *(i8*)(intptr_t)v2783;
	i8 v2785 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v2785)(v2784);

	i8 v2786 = (i8)(intptr_t)c02_s00cc;
	i8 v2787 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2787)(v2786);

	i8 v2788 = (i8)(intptr_t)(ws+4232);
	i8 v2789 = *(i8*)(intptr_t)v2788;
	i8 v2790 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v2790)(v2789);

	i8 v2791 = (i8)(intptr_t)(ws+4232);
	i8 v2792 = *(i8*)(intptr_t)v2791;
	i8 v2793 = (i8)(intptr_t)(f155_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v2793)(v2792);

	i8 v2794 = (i8)(intptr_t)c02_s00cd;
	i8 v2795 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2795)(v2794);

	i8 v2796 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v2796)();

	i8 v2797 = (i8)(intptr_t)(ws+4232);
	i8 v2798 = *(i8*)(intptr_t)v2797;
	i8 v2799 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v2799)(v2798);

endsub:;
}
const i1 c02_s00ce[] = { 0x28,0x69,0x31,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f105_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);
	void f97_E_i16(i2 /* value */);
	void f105_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);

// E_symref workspace at ws+4288 length ws+10
void f158_E_symref(i2 p2800 /* off */, i8 p2801 /* sym */) {
	*(i8*)(intptr_t)(ws+4288) = p2801; /* sym */
	*(i2*)(intptr_t)(ws+4296) = p2800; /* off */

	i8 v2802 = (i8)(intptr_t)(ws+4288);
	i8 v2803 = *(i8*)(intptr_t)v2802;
	i8 v2804 = v2803+(+10);
	i1 v2805 = *(i1*)(intptr_t)v2804;
	i1 v2806 = (i1)+255;
	if (v2805==v2806) goto c02_0267; else goto c02_0268;

c02_0267:;

	i8 v2807 = (i8)(intptr_t)c02_s00ce;
	i8 v2808 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2808)(v2807);

	i8 v2809 = (i8)(intptr_t)(ws+4288);
	i8 v2810 = *(i8*)(intptr_t)v2809;
	i8 v2811 = *(i8*)(intptr_t)v2810;
	i8 v2812 = v2811+(+8);
	i2 v2813 = *(i2*)(intptr_t)v2812;
	i8 v2814 = (i8)(intptr_t)(ws+4288);
	i8 v2815 = *(i8*)(intptr_t)v2814;
	i8 v2816 = v2815+(+10);
	i1 v2817 = *(i1*)(intptr_t)v2816;
	i8 v2818 = (i8)(intptr_t)(ws+4288);
	i8 v2819 = *(i8*)(intptr_t)v2818;
	i8 v2820 = v2819+(+12);
	i2 v2821 = *(i2*)(intptr_t)v2820;
	i8 v2822 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v2822)(v2821, v2817, v2813);

	i8 v2823 = (i8)(intptr_t)(ws+4296);
	i2 v2824 = *(i2*)(intptr_t)v2823;
	i2 v2825 = (i2)+0;
	if (v2824==v2825) goto c02_026d; else goto c02_026c;

c02_026c:;

	i8 v2826 = (i8)(intptr_t)(ws+4296);
	i2 v2827 = *(i2*)(intptr_t)v2826;
	i8 v2828 = (i8)(intptr_t)(f97_E_i16);

	((void(*)(i2 /* value */))(intptr_t)v2828)(v2827);

c02_026d:;

c02_0269:;

	goto c02_0264;

c02_0268:;

	i8 v2829 = (i8)(intptr_t)(ws+4288);
	i8 v2830 = *(i8*)(intptr_t)v2829;
	i8 v2831 = *(i8*)(intptr_t)v2830;
	i8 v2832 = v2831+(+8);
	i2 v2833 = *(i2*)(intptr_t)v2832;
	i8 v2834 = (i8)(intptr_t)(ws+4288);
	i8 v2835 = *(i8*)(intptr_t)v2834;
	i8 v2836 = v2835+(+10);
	i1 v2837 = *(i1*)(intptr_t)v2836;
	i8 v2838 = (i8)(intptr_t)(ws+4288);
	i8 v2839 = *(i8*)(intptr_t)v2838;
	i8 v2840 = v2839+(+12);
	i2 v2841 = *(i2*)(intptr_t)v2840;
	i8 v2842 = (i8)(intptr_t)(ws+4296);
	i2 v2843 = *(i2*)(intptr_t)v2842;
	i2 v2844 = v2841+v2843;
	i8 v2845 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v2845)(v2844, v2837, v2833);

c02_0264:;

endsub:;
}

// ArchEndInstruction workspace at ws+4120 length ws+0
void f159_ArchEndInstruction(void) {

endsub:;
}
	void f89_E_nl(void);

// ArchEndGroup workspace at ws+4112 length ws+0
void f160_ArchEndGroup(void) {

	i8 v2846 = (i8)(intptr_t)(f89_E_nl);

	((void(*)(void))(intptr_t)v2846)();

endsub:;
}
const i1 c02_s00cf[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(i8 /* s */);

// PushVid workspace at ws+4296 length ws+2
void f161_PushVid(i2 p2847 /* vid */) {
	*(i2*)(intptr_t)(ws+4296) = p2847; /* vid */

	i8 v2848 = (i8)(intptr_t)(ws+3832);
	i1 v2849 = *(i1*)(intptr_t)v2848;
	i1 v2850 = (i1)+64;
	if (v2849==v2850) goto c02_0271; else goto c02_0272;

c02_0271:;

	i8 v2851 = (i8)(intptr_t)c02_s00cf;
	i8 v2852 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2852)(v2851);

c02_0272:;

c02_026e:;

	i8 v2853 = (i8)(intptr_t)(ws+4296);
	i2 v2854 = *(i2*)(intptr_t)v2853;
	i8 v2855 = (i8)(intptr_t)(ws+3704);
	i8 v2856 = (i8)(intptr_t)(ws+3832);
	i1 v2857 = *(i1*)(intptr_t)v2856;
	i8 v2858 = v2857;
	i1 v2859 = (i1)+1;
	i8 v2860 = ((i8)v2858)<<v2859;
	i8 v2861 = v2855+v2860;
	*(i2*)(intptr_t)v2861 = v2854;

	i8 v2862 = (i8)(intptr_t)(ws+3832);
	i1 v2863 = *(i1*)(intptr_t)v2862;
	i1 v2864 = v2863+(+1);
	i8 v2865 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v2865 = v2864;

endsub:;
}
	void f161_PushVid(i2 /* vid */);

// Push workspace at ws+4288 length ws+2
void f162_Push(i2* p2866 /* vid */) {

	i8 v2867 = (i8)(intptr_t)(ws+3834);
	i2 v2868 = *(i2*)(intptr_t)v2867;
	i8 v2869 = (i8)(intptr_t)(ws+4288);
	*(i2*)(intptr_t)v2869 = v2868;

	i8 v2870 = (i8)(intptr_t)(ws+3834);
	i2 v2871 = *(i2*)(intptr_t)v2870;
	i2 v2872 = v2871+(+1);
	i8 v2873 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v2873 = v2872;

	i8 v2874 = (i8)(intptr_t)(ws+4288);
	i2 v2875 = *(i2*)(intptr_t)v2874;
	i8 v2876 = (i8)(intptr_t)(f161_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v2876)(v2875);

endsub:;
	*p2866 = *(i2*)(intptr_t)(ws+4288);
}
const i1 c02_s00d0[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(i8 /* s */);

// CheckVarstackUnderflow workspace at ws+4304 length ws+0
void f163_CheckVarstackUnderflow(void) {

	i8 v2877 = (i8)(intptr_t)(ws+3832);
	i1 v2878 = *(i1*)(intptr_t)v2877;
	i1 v2879 = (i1)+0;
	if (v2878==v2879) goto c02_0276; else goto c02_0277;

c02_0276:;

	i8 v2880 = (i8)(intptr_t)c02_s00d0;
	i8 v2881 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2881)(v2880);

c02_0277:;

c02_0273:;

endsub:;
}
	void f163_CheckVarstackUnderflow(void);

// Pop workspace at ws+4296 length ws+2
void f164_Pop(i2* p2882 /* vid */) {

	i8 v2883 = (i8)(intptr_t)(f163_CheckVarstackUnderflow);

	((void(*)(void))(intptr_t)v2883)();

	i8 v2884 = (i8)(intptr_t)(ws+3832);
	i1 v2885 = *(i1*)(intptr_t)v2884;
	i1 v2886 = v2885+(-1);
	i8 v2887 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v2887 = v2886;

	i8 v2888 = (i8)(intptr_t)(ws+3704);
	i8 v2889 = (i8)(intptr_t)(ws+3832);
	i1 v2890 = *(i1*)(intptr_t)v2889;
	i8 v2891 = v2890;
	i1 v2892 = (i1)+1;
	i8 v2893 = ((i8)v2891)<<v2892;
	i8 v2894 = v2888+v2893;
	i2 v2895 = *(i2*)(intptr_t)v2894;
	i8 v2896 = (i8)(intptr_t)(ws+4296);
	*(i2*)(intptr_t)v2896 = v2895;

endsub:;
	*p2882 = *(i2*)(intptr_t)(ws+4296);
}

// ArchEmitMove workspace at ws+4152 length ws+2
void f168_ArchEmitMove(i1 p2912 /* dest */, i1 p2913 /* src */) {
	*(i1*)(intptr_t)(ws+4152) = p2913; /* src */
	*(i1*)(intptr_t)(ws+4153) = p2912; /* dest */

endsub:;
}
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f164_Pop(i2* /* vid */);
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
const i1 c02_s00d2[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00d3[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00d4[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00d5[] = { 0x0a,0x09,0x28,0x28,0x76,0x6f,0x69,0x64,0x28,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f155_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s00d6[] = { 0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00d7[] = { 0x29,0x28,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00d8[] = { 0x2c,0x20,0 };
	void f92_E(i8 /* text */);

// comma workspace at ws+4296 length ws+0
void f170_comma(void) {

	i8 v2995 = (i8)(intptr_t)(ws+4272);
	i1 v2996 = *(i1*)(intptr_t)v2995;
	i1 v2997 = (i1)+0;
	if (v2996==v2997) goto c02_0281; else goto c02_0282;

c02_0281:;

	i8 v2998 = (i8)(intptr_t)c02_s00d8;
	i8 v2999 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2999)(v2998);

c02_0282:;

c02_027e:;

	i1 v3000 = (i1)+0;
	i8 v3001 = (i8)(intptr_t)(ws+4272);
	*(i1*)(intptr_t)v3001 = v3000;

endsub:;
}
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f170_comma(void);
const i1 c02_s00d9[] = { 0x26,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f164_Pop(i2* /* vid */);
	void f170_comma(void);
const i1 c02_s00da[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00db[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f161_PushVid(i2 /* vid */);

// Call workspace at ws+4224 length ws+68
void f169_Call(i2 p2914 /* subrid */) {
	*(i2*)(intptr_t)(ws+4224) = p2914; /* subrid */

	i8 v2915 = (i8)(intptr_t)(ws+4224);
	i2 v2916 = *(i2*)(intptr_t)v2915;
	i8 v2917 = (i8)(intptr_t)(f65_FindSubr);
	i8 v2918;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v2917)(&v2918, v2916);

	i8 v2919 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v2919 = v2918;

	i8 v2920 = (i8)(intptr_t)(ws+4232);
	i8 v2921 = *(i8*)(intptr_t)v2920;
	i8 v2922 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v2922 = v2921;

	i8 v2923 = (i8)(intptr_t)(f164_Pop);
	i2 v2924;

	((void(*)(i2* /* vid */))(intptr_t)v2923)(&v2924);

	i8 v2925 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v2925 = v2924;

	i8 v2926 = (i8)(intptr_t)(ws+4248);
	i2 v2927 = *(i2*)(intptr_t)v2926;
	i8 v2928 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v2928 = v2927;

	i8 v2929 = (i8)(intptr_t)(ws+3834);
	i2 v2930 = *(i2*)(intptr_t)v2929;
	i8 v2931 = (i8)(intptr_t)(ws+4252);
	*(i2*)(intptr_t)v2931 = v2930;

	i8 v2932 = (i8)(intptr_t)(ws+3834);
	i2 v2933 = *(i2*)(intptr_t)v2932;
	i8 v2934 = (i8)(intptr_t)(ws+4240);
	i8 v2935 = *(i8*)(intptr_t)v2934;
	i8 v2936 = v2935+(+49);
	i1 v2937 = *(i1*)(intptr_t)v2936;
	i2 v2938 = v2937;
	i2 v2939 = v2933+v2938;
	i8 v2940 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v2940 = v2939;

	i1 v2941 = (i1)+0;
	i8 v2942 = (i8)(intptr_t)(ws+4254);
	*(i1*)(intptr_t)v2942 = v2941;

c02_0278:;

	i8 v2943 = (i8)(intptr_t)(ws+4254);
	i1 v2944 = *(i1*)(intptr_t)v2943;
	i8 v2945 = (i8)(intptr_t)(ws+4240);
	i8 v2946 = *(i8*)(intptr_t)v2945;
	i8 v2947 = v2946+(+49);
	i1 v2948 = *(i1*)(intptr_t)v2947;
	if (v2944==v2948) goto c02_027d; else goto c02_027c;

c02_027c:;

	i8 v2949 = (i8)(intptr_t)(ws+4240);
	i8 v2950 = *(i8*)(intptr_t)v2949;
	i8 v2951 = (i8)(intptr_t)(ws+4254);
	i1 v2952 = *(i1*)(intptr_t)v2951;
	i8 v2953 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v2954;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2953)(&v2954, v2952, v2950);

	i8 v2955 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v2955 = v2954;

	i8 v2956 = (i8)(intptr_t)(ws+4256);
	i8 v2957 = *(i8*)(intptr_t)v2956;
	i8 v2958 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v2958 = v2957;

	i8 v2959 = (i8)(intptr_t)c02_s00d2;
	i8 v2960 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2960)(v2959);

	i8 v2961 = (i8)(intptr_t)(ws+4264);
	i8 v2962 = *(i8*)(intptr_t)v2961;
	i8 v2963 = v2962+(+14);
	i1 v2964 = *(i1*)(intptr_t)v2963;
	i8 v2965 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2965)(v2964);

	i8 v2966 = (i8)(intptr_t)c02_s00d3;
	i8 v2967 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2967)(v2966);

	i8 v2968 = (i8)(intptr_t)(ws+4252);
	i2 v2969 = *(i2*)(intptr_t)v2968;
	i8 v2970 = (i8)(intptr_t)(ws+4254);
	i1 v2971 = *(i1*)(intptr_t)v2970;
	i2 v2972 = v2971;
	i2 v2973 = v2969+v2972;
	i8 v2974 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2974)(v2973);

	i8 v2975 = (i8)(intptr_t)c02_s00d4;
	i8 v2976 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2976)(v2975);

	i8 v2977 = (i8)(intptr_t)(ws+4254);
	i1 v2978 = *(i1*)(intptr_t)v2977;
	i1 v2979 = v2978+(+1);
	i8 v2980 = (i8)(intptr_t)(ws+4254);
	*(i1*)(intptr_t)v2980 = v2979;

	goto c02_0278;

c02_027d:;

	i8 v2981 = (i8)(intptr_t)c02_s00d5;
	i8 v2982 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2982)(v2981);

	i8 v2983 = (i8)(intptr_t)(ws+4240);
	i8 v2984 = *(i8*)(intptr_t)v2983;
	i8 v2985 = (i8)(intptr_t)(f155_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v2985)(v2984);

	i8 v2986 = (i8)(intptr_t)c02_s00d6;
	i8 v2987 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2987)(v2986);

	i8 v2988 = (i8)(intptr_t)(ws+4250);
	i2 v2989 = *(i2*)(intptr_t)v2988;
	i8 v2990 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2990)(v2989);

	i8 v2991 = (i8)(intptr_t)c02_s00d7;
	i8 v2992 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2992)(v2991);

	i1 v2993 = (i1)+1;
	i8 v2994 = (i8)(intptr_t)(ws+4272);
	*(i1*)(intptr_t)v2994 = v2993;


	i1 v3002 = (i1)+0;
	i8 v3003 = (i8)(intptr_t)(ws+4254);
	*(i1*)(intptr_t)v3003 = v3002;

c02_0283:;

	i8 v3004 = (i8)(intptr_t)(ws+4254);
	i1 v3005 = *(i1*)(intptr_t)v3004;
	i8 v3006 = (i8)(intptr_t)(ws+4240);
	i8 v3007 = *(i8*)(intptr_t)v3006;
	i8 v3008 = v3007+(+49);
	i1 v3009 = *(i1*)(intptr_t)v3008;
	if (v3005==v3009) goto c02_0288; else goto c02_0287;

c02_0287:;

	i8 v3010 = (i8)(intptr_t)(ws+4240);
	i8 v3011 = *(i8*)(intptr_t)v3010;
	i8 v3012 = (i8)(intptr_t)(ws+4254);
	i1 v3013 = *(i1*)(intptr_t)v3012;
	i8 v3014 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v3015;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3014)(&v3015, v3013, v3011);

	i8 v3016 = (i8)(intptr_t)(ws+4280);
	*(i8*)(intptr_t)v3016 = v3015;

	i8 v3017 = (i8)(intptr_t)(ws+4280);
	i8 v3018 = *(i8*)(intptr_t)v3017;
	i8 v3019 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v3019 = v3018;

	i8 v3020 = (i8)(intptr_t)(f170_comma);

	((void(*)(void))(intptr_t)v3020)();

	i8 v3021 = (i8)(intptr_t)c02_s00d9;
	i8 v3022 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3022)(v3021);

	i8 v3023 = (i8)(intptr_t)(ws+4252);
	i2 v3024 = *(i2*)(intptr_t)v3023;
	i8 v3025 = (i8)(intptr_t)(ws+4254);
	i1 v3026 = *(i1*)(intptr_t)v3025;
	i2 v3027 = v3026;
	i2 v3028 = v3024+v3027;
	i8 v3029 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3029)(v3028);

	i8 v3030 = (i8)(intptr_t)(ws+4254);
	i1 v3031 = *(i1*)(intptr_t)v3030;
	i1 v3032 = v3031+(+1);
	i8 v3033 = (i8)(intptr_t)(ws+4254);
	*(i1*)(intptr_t)v3033 = v3032;

	goto c02_0283;

c02_0288:;

	i1 v3034 = (i1)+0;
	i8 v3035 = (i8)(intptr_t)(ws+4254);
	*(i1*)(intptr_t)v3035 = v3034;

c02_0289:;

	i8 v3036 = (i8)(intptr_t)(ws+4254);
	i1 v3037 = *(i1*)(intptr_t)v3036;
	i8 v3038 = (i8)(intptr_t)(ws+4240);
	i8 v3039 = *(i8*)(intptr_t)v3038;
	i8 v3040 = v3039+(+48);
	i1 v3041 = *(i1*)(intptr_t)v3040;
	if (v3037==v3041) goto c02_028e; else goto c02_028d;

c02_028d:;

	i8 v3042 = (i8)(intptr_t)(f164_Pop);
	i2 v3043;

	((void(*)(i2* /* vid */))(intptr_t)v3042)(&v3043);

	i8 v3044 = (i8)(intptr_t)(ws+4288);
	*(i2*)(intptr_t)v3044 = v3043;

	i8 v3045 = (i8)(intptr_t)(ws+4288);
	i2 v3046 = *(i2*)(intptr_t)v3045;
	i8 v3047 = (i8)(intptr_t)(ws+4290);
	*(i2*)(intptr_t)v3047 = v3046;

	i8 v3048 = (i8)(intptr_t)(f170_comma);

	((void(*)(void))(intptr_t)v3048)();

	i8 v3049 = (i8)(intptr_t)c02_s00da;
	i8 v3050 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3050)(v3049);

	i8 v3051 = (i8)(intptr_t)(ws+4290);
	i2 v3052 = *(i2*)(intptr_t)v3051;
	i8 v3053 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3053)(v3052);

	i8 v3054 = (i8)(intptr_t)(ws+4254);
	i1 v3055 = *(i1*)(intptr_t)v3054;
	i1 v3056 = v3055+(+1);
	i8 v3057 = (i8)(intptr_t)(ws+4254);
	*(i1*)(intptr_t)v3057 = v3056;

	goto c02_0289;

c02_028e:;

	i8 v3058 = (i8)(intptr_t)c02_s00db;
	i8 v3059 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3059)(v3058);

	i1 v3060 = (i1)+0;
	i8 v3061 = (i8)(intptr_t)(ws+4254);
	*(i1*)(intptr_t)v3061 = v3060;

c02_028f:;

	i8 v3062 = (i8)(intptr_t)(ws+4254);
	i1 v3063 = *(i1*)(intptr_t)v3062;
	i8 v3064 = (i8)(intptr_t)(ws+4240);
	i8 v3065 = *(i8*)(intptr_t)v3064;
	i8 v3066 = v3065+(+49);
	i1 v3067 = *(i1*)(intptr_t)v3066;
	if (v3063==v3067) goto c02_0294; else goto c02_0293;

c02_0293:;

	i8 v3068 = (i8)(intptr_t)(ws+4252);
	i2 v3069 = *(i2*)(intptr_t)v3068;
	i8 v3070 = (i8)(intptr_t)(ws+4254);
	i1 v3071 = *(i1*)(intptr_t)v3070;
	i2 v3072 = v3071;
	i2 v3073 = v3069+v3072;
	i8 v3074 = (i8)(intptr_t)(ws+4290);
	*(i2*)(intptr_t)v3074 = v3073;

	i8 v3075 = (i8)(intptr_t)(ws+4290);
	i2 v3076 = *(i2*)(intptr_t)v3075;
	i8 v3077 = (i8)(intptr_t)(f161_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v3077)(v3076);

	i8 v3078 = (i8)(intptr_t)(ws+4254);
	i1 v3079 = *(i1*)(intptr_t)v3078;
	i1 v3080 = v3079+(+1);
	i8 v3081 = (i8)(intptr_t)(ws+4254);
	*(i1*)(intptr_t)v3081 = v3080;

	goto c02_028f;

c02_0294:;

endsub:;
}
	void f162_Push(i2* /* vid */);
const i1 c02_s00dc[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00dd[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00de[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00df[] = { 0x29,0 };
	void f92_E(i8 /* text */);
	void f98_E_i32(i4 /* value */);
const i1 c02_s00e0[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// LoadConstant workspace at ws+4224 length ws+12
void f171_LoadConstant(i4 p3082 /* value */, i1 p3083 /* width */) {
	*(i1*)(intptr_t)(ws+4224) = p3083; /* width */
	*(i4*)(intptr_t)(ws+4228) = p3082; /* value */

	i8 v3084 = (i8)(intptr_t)(f162_Push);
	i2 v3085;

	((void(*)(i2* /* vid */))(intptr_t)v3084)(&v3085);

	i8 v3086 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v3086 = v3085;

	i8 v3087 = (i8)(intptr_t)(ws+4232);
	i2 v3088 = *(i2*)(intptr_t)v3087;
	i8 v3089 = (i8)(intptr_t)(ws+4234);
	*(i2*)(intptr_t)v3089 = v3088;

	i8 v3090 = (i8)(intptr_t)c02_s00dc;
	i8 v3091 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3091)(v3090);

	i8 v3092 = (i8)(intptr_t)(ws+4224);
	i1 v3093 = *(i1*)(intptr_t)v3092;
	i8 v3094 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3094)(v3093);

	i8 v3095 = (i8)(intptr_t)c02_s00dd;
	i8 v3096 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3096)(v3095);

	i8 v3097 = (i8)(intptr_t)(ws+4234);
	i2 v3098 = *(i2*)(intptr_t)v3097;
	i8 v3099 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3099)(v3098);

	i8 v3100 = (i8)(intptr_t)c02_s00de;
	i8 v3101 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3101)(v3100);

	i8 v3102 = (i8)(intptr_t)(ws+4224);
	i1 v3103 = *(i1*)(intptr_t)v3102;
	i8 v3104 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3104)(v3103);

	i8 v3105 = (i8)(intptr_t)c02_s00df;
	i8 v3106 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3106)(v3105);

	i8 v3107 = (i8)(intptr_t)(ws+4228);
	i4 v3108 = *(i4*)(intptr_t)v3107;
	i8 v3109 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v3109)(v3108);

	i8 v3110 = (i8)(intptr_t)c02_s00e0;
	i8 v3111 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3111)(v3110);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s00e1[] = { 0x09,0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00e2[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00e3[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00e4[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// StoreVV workspace at ws+4224 length ws+10
void f172_StoreVV(i1 p3112 /* width */) {
	*(i1*)(intptr_t)(ws+4224) = p3112; /* width */

	i8 v3113 = (i8)(intptr_t)(f164_Pop);
	i2 v3114;

	((void(*)(i2* /* vid */))(intptr_t)v3113)(&v3114);

	i8 v3115 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v3115 = v3114;

	i8 v3116 = (i8)(intptr_t)(ws+4226);
	i2 v3117 = *(i2*)(intptr_t)v3116;
	i8 v3118 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v3118 = v3117;

	i8 v3119 = (i8)(intptr_t)(f164_Pop);
	i2 v3120;

	((void(*)(i2* /* vid */))(intptr_t)v3119)(&v3120);

	i8 v3121 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v3121 = v3120;

	i8 v3122 = (i8)(intptr_t)(ws+4230);
	i2 v3123 = *(i2*)(intptr_t)v3122;
	i8 v3124 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v3124 = v3123;

	i8 v3125 = (i8)(intptr_t)c02_s00e1;
	i8 v3126 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3126)(v3125);

	i8 v3127 = (i8)(intptr_t)(ws+4224);
	i1 v3128 = *(i1*)(intptr_t)v3127;
	i8 v3129 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3129)(v3128);

	i8 v3130 = (i8)(intptr_t)c02_s00e2;
	i8 v3131 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3131)(v3130);

	i8 v3132 = (i8)(intptr_t)(ws+4228);
	i2 v3133 = *(i2*)(intptr_t)v3132;
	i8 v3134 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3134)(v3133);

	i8 v3135 = (i8)(intptr_t)c02_s00e3;
	i8 v3136 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3136)(v3135);

	i8 v3137 = (i8)(intptr_t)(ws+4232);
	i2 v3138 = *(i2*)(intptr_t)v3137;
	i8 v3139 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3139)(v3138);

	i8 v3140 = (i8)(intptr_t)c02_s00e4;
	i8 v3141 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3141)(v3140);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s00e5[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00e6[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00e7[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00e8[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00e9[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// LoadVV workspace at ws+4224 length ws+10
void f173_LoadVV(i1 p3142 /* width */) {
	*(i1*)(intptr_t)(ws+4224) = p3142; /* width */

	i8 v3143 = (i8)(intptr_t)(f164_Pop);
	i2 v3144;

	((void(*)(i2* /* vid */))(intptr_t)v3143)(&v3144);

	i8 v3145 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v3145 = v3144;

	i8 v3146 = (i8)(intptr_t)(ws+4226);
	i2 v3147 = *(i2*)(intptr_t)v3146;
	i8 v3148 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v3148 = v3147;

	i8 v3149 = (i8)(intptr_t)(f162_Push);
	i2 v3150;

	((void(*)(i2* /* vid */))(intptr_t)v3149)(&v3150);

	i8 v3151 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v3151 = v3150;

	i8 v3152 = (i8)(intptr_t)(ws+4230);
	i2 v3153 = *(i2*)(intptr_t)v3152;
	i8 v3154 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v3154 = v3153;

	i8 v3155 = (i8)(intptr_t)c02_s00e5;
	i8 v3156 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3156)(v3155);

	i8 v3157 = (i8)(intptr_t)(ws+4224);
	i1 v3158 = *(i1*)(intptr_t)v3157;
	i8 v3159 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3159)(v3158);

	i8 v3160 = (i8)(intptr_t)c02_s00e6;
	i8 v3161 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3161)(v3160);

	i8 v3162 = (i8)(intptr_t)(ws+4232);
	i2 v3163 = *(i2*)(intptr_t)v3162;
	i8 v3164 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3164)(v3163);

	i8 v3165 = (i8)(intptr_t)c02_s00e7;
	i8 v3166 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3166)(v3165);

	i8 v3167 = (i8)(intptr_t)(ws+4224);
	i1 v3168 = *(i1*)(intptr_t)v3167;
	i8 v3169 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3169)(v3168);

	i8 v3170 = (i8)(intptr_t)c02_s00e8;
	i8 v3171 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3171)(v3170);

	i8 v3172 = (i8)(intptr_t)(ws+4228);
	i2 v3173 = *(i2*)(intptr_t)v3172;
	i8 v3174 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3174)(v3173);

	i8 v3175 = (i8)(intptr_t)c02_s00e9;
	i8 v3176 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3176)(v3175);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s00ea[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00eb[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00ec[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s00ed[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00ee[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op2VV workspace at ws+4224 length ws+28
void f174_Op2VV(i8 p3177 /* op */, i1 p3178 /* width */) {
	*(i1*)(intptr_t)(ws+4224) = p3178; /* width */
	*(i8*)(intptr_t)(ws+4232) = p3177; /* op */

	i8 v3179 = (i8)(intptr_t)(f164_Pop);
	i2 v3180;

	((void(*)(i2* /* vid */))(intptr_t)v3179)(&v3180);

	i8 v3181 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v3181 = v3180;

	i8 v3182 = (i8)(intptr_t)(ws+4240);
	i2 v3183 = *(i2*)(intptr_t)v3182;
	i8 v3184 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v3184 = v3183;

	i8 v3185 = (i8)(intptr_t)(f164_Pop);
	i2 v3186;

	((void(*)(i2* /* vid */))(intptr_t)v3185)(&v3186);

	i8 v3187 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v3187 = v3186;

	i8 v3188 = (i8)(intptr_t)(ws+4244);
	i2 v3189 = *(i2*)(intptr_t)v3188;
	i8 v3190 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v3190 = v3189;

	i8 v3191 = (i8)(intptr_t)(f162_Push);
	i2 v3192;

	((void(*)(i2* /* vid */))(intptr_t)v3191)(&v3192);

	i8 v3193 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v3193 = v3192;

	i8 v3194 = (i8)(intptr_t)(ws+4248);
	i2 v3195 = *(i2*)(intptr_t)v3194;
	i8 v3196 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v3196 = v3195;

	i8 v3197 = (i8)(intptr_t)c02_s00ea;
	i8 v3198 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3198)(v3197);

	i8 v3199 = (i8)(intptr_t)(ws+4224);
	i1 v3200 = *(i1*)(intptr_t)v3199;
	i8 v3201 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3201)(v3200);

	i8 v3202 = (i8)(intptr_t)c02_s00eb;
	i8 v3203 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3203)(v3202);

	i8 v3204 = (i8)(intptr_t)(ws+4250);
	i2 v3205 = *(i2*)(intptr_t)v3204;
	i8 v3206 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3206)(v3205);

	i8 v3207 = (i8)(intptr_t)c02_s00ec;
	i8 v3208 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3208)(v3207);

	i8 v3209 = (i8)(intptr_t)(ws+4246);
	i2 v3210 = *(i2*)(intptr_t)v3209;
	i8 v3211 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3211)(v3210);

	i8 v3212 = (i8)(intptr_t)(ws+4232);
	i8 v3213 = *(i8*)(intptr_t)v3212;
	i8 v3214 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3214)(v3213);

	i8 v3215 = (i8)(intptr_t)c02_s00ed;
	i8 v3216 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3216)(v3215);

	i8 v3217 = (i8)(intptr_t)(ws+4242);
	i2 v3218 = *(i2*)(intptr_t)v3217;
	i8 v3219 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3219)(v3218);

	i8 v3220 = (i8)(intptr_t)c02_s00ee;
	i8 v3221 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3221)(v3220);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s00ef[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00f0[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00f1[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s00f2[] = { 0x28,0 };
	void f92_E(i8 /* text */);
	void f98_E_i32(i4 /* value */);
const i1 c02_s00f3[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op2VC workspace at ws+4224 length ws+28
void f175_Op2VC(i4 p3222 /* rhs */, i8 p3223 /* op */, i1 p3224 /* width */) {
	*(i1*)(intptr_t)(ws+4224) = p3224; /* width */
	*(i8*)(intptr_t)(ws+4232) = p3223; /* op */
	*(i4*)(intptr_t)(ws+4240) = p3222; /* rhs */

	i8 v3225 = (i8)(intptr_t)(f164_Pop);
	i2 v3226;

	((void(*)(i2* /* vid */))(intptr_t)v3225)(&v3226);

	i8 v3227 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v3227 = v3226;

	i8 v3228 = (i8)(intptr_t)(ws+4244);
	i2 v3229 = *(i2*)(intptr_t)v3228;
	i8 v3230 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v3230 = v3229;

	i8 v3231 = (i8)(intptr_t)(f162_Push);
	i2 v3232;

	((void(*)(i2* /* vid */))(intptr_t)v3231)(&v3232);

	i8 v3233 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v3233 = v3232;

	i8 v3234 = (i8)(intptr_t)(ws+4248);
	i2 v3235 = *(i2*)(intptr_t)v3234;
	i8 v3236 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v3236 = v3235;

	i8 v3237 = (i8)(intptr_t)c02_s00ef;
	i8 v3238 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3238)(v3237);

	i8 v3239 = (i8)(intptr_t)(ws+4224);
	i1 v3240 = *(i1*)(intptr_t)v3239;
	i8 v3241 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3241)(v3240);

	i8 v3242 = (i8)(intptr_t)c02_s00f0;
	i8 v3243 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3243)(v3242);

	i8 v3244 = (i8)(intptr_t)(ws+4250);
	i2 v3245 = *(i2*)(intptr_t)v3244;
	i8 v3246 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3246)(v3245);

	i8 v3247 = (i8)(intptr_t)c02_s00f1;
	i8 v3248 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3248)(v3247);

	i8 v3249 = (i8)(intptr_t)(ws+4246);
	i2 v3250 = *(i2*)(intptr_t)v3249;
	i8 v3251 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3251)(v3250);

	i8 v3252 = (i8)(intptr_t)(ws+4232);
	i8 v3253 = *(i8*)(intptr_t)v3252;
	i8 v3254 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3254)(v3253);

	i8 v3255 = (i8)(intptr_t)c02_s00f2;
	i8 v3256 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3256)(v3255);

	i8 v3257 = (i8)(intptr_t)(ws+4240);
	i4 v3258 = *(i4*)(intptr_t)v3257;
	i8 v3259 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v3259)(v3258);

	i8 v3260 = (i8)(intptr_t)c02_s00f3;
	i8 v3261 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3261)(v3260);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s00f4[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00f5[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00f6[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00f7[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s00f8[] = { 0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00f9[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00fa[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op2VVSigned workspace at ws+4224 length ws+28
void f176_Op2VVSigned(i8 p3262 /* op */, i1 p3263 /* width */) {
	*(i1*)(intptr_t)(ws+4224) = p3263; /* width */
	*(i8*)(intptr_t)(ws+4232) = p3262; /* op */

	i8 v3264 = (i8)(intptr_t)(f164_Pop);
	i2 v3265;

	((void(*)(i2* /* vid */))(intptr_t)v3264)(&v3265);

	i8 v3266 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v3266 = v3265;

	i8 v3267 = (i8)(intptr_t)(ws+4240);
	i2 v3268 = *(i2*)(intptr_t)v3267;
	i8 v3269 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v3269 = v3268;

	i8 v3270 = (i8)(intptr_t)(f164_Pop);
	i2 v3271;

	((void(*)(i2* /* vid */))(intptr_t)v3270)(&v3271);

	i8 v3272 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v3272 = v3271;

	i8 v3273 = (i8)(intptr_t)(ws+4244);
	i2 v3274 = *(i2*)(intptr_t)v3273;
	i8 v3275 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v3275 = v3274;

	i8 v3276 = (i8)(intptr_t)(f162_Push);
	i2 v3277;

	((void(*)(i2* /* vid */))(intptr_t)v3276)(&v3277);

	i8 v3278 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v3278 = v3277;

	i8 v3279 = (i8)(intptr_t)(ws+4248);
	i2 v3280 = *(i2*)(intptr_t)v3279;
	i8 v3281 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v3281 = v3280;

	i8 v3282 = (i8)(intptr_t)c02_s00f4;
	i8 v3283 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3283)(v3282);

	i8 v3284 = (i8)(intptr_t)(ws+4224);
	i1 v3285 = *(i1*)(intptr_t)v3284;
	i8 v3286 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3286)(v3285);

	i8 v3287 = (i8)(intptr_t)c02_s00f5;
	i8 v3288 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3288)(v3287);

	i8 v3289 = (i8)(intptr_t)(ws+4250);
	i2 v3290 = *(i2*)(intptr_t)v3289;
	i8 v3291 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3291)(v3290);

	i8 v3292 = (i8)(intptr_t)c02_s00f6;
	i8 v3293 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3293)(v3292);

	i8 v3294 = (i8)(intptr_t)(ws+4224);
	i1 v3295 = *(i1*)(intptr_t)v3294;
	i8 v3296 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3296)(v3295);

	i8 v3297 = (i8)(intptr_t)c02_s00f7;
	i8 v3298 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3298)(v3297);

	i8 v3299 = (i8)(intptr_t)(ws+4246);
	i2 v3300 = *(i2*)(intptr_t)v3299;
	i8 v3301 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3301)(v3300);

	i8 v3302 = (i8)(intptr_t)(ws+4232);
	i8 v3303 = *(i8*)(intptr_t)v3302;
	i8 v3304 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3304)(v3303);

	i8 v3305 = (i8)(intptr_t)c02_s00f8;
	i8 v3306 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3306)(v3305);

	i8 v3307 = (i8)(intptr_t)(ws+4224);
	i1 v3308 = *(i1*)(intptr_t)v3307;
	i8 v3309 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3309)(v3308);

	i8 v3310 = (i8)(intptr_t)c02_s00f9;
	i8 v3311 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3311)(v3310);

	i8 v3312 = (i8)(intptr_t)(ws+4242);
	i2 v3313 = *(i2*)(intptr_t)v3312;
	i8 v3314 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3314)(v3313);

	i8 v3315 = (i8)(intptr_t)c02_s00fa;
	i8 v3316 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3316)(v3315);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s00fb[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00fc[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00fd[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s00fe[] = { 0x28,0 };
	void f92_E(i8 /* text */);
	void f98_E_i32(i4 /* value */);
const i1 c02_s00ff[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op2VCSigned workspace at ws+4224 length ws+28
void f177_Op2VCSigned(i4 p3317 /* rhs */, i8 p3318 /* op */, i1 p3319 /* width */) {
	*(i1*)(intptr_t)(ws+4224) = p3319; /* width */
	*(i8*)(intptr_t)(ws+4232) = p3318; /* op */
	*(i4*)(intptr_t)(ws+4240) = p3317; /* rhs */

	i8 v3320 = (i8)(intptr_t)(f164_Pop);
	i2 v3321;

	((void(*)(i2* /* vid */))(intptr_t)v3320)(&v3321);

	i8 v3322 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v3322 = v3321;

	i8 v3323 = (i8)(intptr_t)(ws+4244);
	i2 v3324 = *(i2*)(intptr_t)v3323;
	i8 v3325 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v3325 = v3324;

	i8 v3326 = (i8)(intptr_t)(f162_Push);
	i2 v3327;

	((void(*)(i2* /* vid */))(intptr_t)v3326)(&v3327);

	i8 v3328 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v3328 = v3327;

	i8 v3329 = (i8)(intptr_t)(ws+4248);
	i2 v3330 = *(i2*)(intptr_t)v3329;
	i8 v3331 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v3331 = v3330;

	i8 v3332 = (i8)(intptr_t)c02_s00fb;
	i8 v3333 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3333)(v3332);

	i8 v3334 = (i8)(intptr_t)(ws+4224);
	i1 v3335 = *(i1*)(intptr_t)v3334;
	i8 v3336 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3336)(v3335);

	i8 v3337 = (i8)(intptr_t)c02_s00fc;
	i8 v3338 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3338)(v3337);

	i8 v3339 = (i8)(intptr_t)(ws+4250);
	i2 v3340 = *(i2*)(intptr_t)v3339;
	i8 v3341 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3341)(v3340);

	i8 v3342 = (i8)(intptr_t)c02_s00fd;
	i8 v3343 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3343)(v3342);

	i8 v3344 = (i8)(intptr_t)(ws+4246);
	i2 v3345 = *(i2*)(intptr_t)v3344;
	i8 v3346 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3346)(v3345);

	i8 v3347 = (i8)(intptr_t)(ws+4232);
	i8 v3348 = *(i8*)(intptr_t)v3347;
	i8 v3349 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3349)(v3348);

	i8 v3350 = (i8)(intptr_t)c02_s00fe;
	i8 v3351 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3351)(v3350);

	i8 v3352 = (i8)(intptr_t)(ws+4240);
	i4 v3353 = *(i4*)(intptr_t)v3352;
	i8 v3354 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v3354)(v3353);

	i8 v3355 = (i8)(intptr_t)c02_s00ff;
	i8 v3356 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3356)(v3355);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s0100[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0101[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0102[] = { 0x20,0x3d,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s0103[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0104[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op1V workspace at ws+4224 length ws+24
void f178_Op1V(i8 p3357 /* op */, i1 p3358 /* width */) {
	*(i1*)(intptr_t)(ws+4224) = p3358; /* width */
	*(i8*)(intptr_t)(ws+4232) = p3357; /* op */

	i8 v3359 = (i8)(intptr_t)(f164_Pop);
	i2 v3360;

	((void(*)(i2* /* vid */))(intptr_t)v3359)(&v3360);

	i8 v3361 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v3361 = v3360;

	i8 v3362 = (i8)(intptr_t)(ws+4240);
	i2 v3363 = *(i2*)(intptr_t)v3362;
	i8 v3364 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v3364 = v3363;

	i8 v3365 = (i8)(intptr_t)(f162_Push);
	i2 v3366;

	((void(*)(i2* /* vid */))(intptr_t)v3365)(&v3366);

	i8 v3367 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v3367 = v3366;

	i8 v3368 = (i8)(intptr_t)(ws+4244);
	i2 v3369 = *(i2*)(intptr_t)v3368;
	i8 v3370 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v3370 = v3369;

	i8 v3371 = (i8)(intptr_t)c02_s0100;
	i8 v3372 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3372)(v3371);

	i8 v3373 = (i8)(intptr_t)(ws+4224);
	i1 v3374 = *(i1*)(intptr_t)v3373;
	i8 v3375 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3375)(v3374);

	i8 v3376 = (i8)(intptr_t)c02_s0101;
	i8 v3377 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3377)(v3376);

	i8 v3378 = (i8)(intptr_t)(ws+4246);
	i2 v3379 = *(i2*)(intptr_t)v3378;
	i8 v3380 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3380)(v3379);

	i8 v3381 = (i8)(intptr_t)c02_s0102;
	i8 v3382 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3382)(v3381);

	i8 v3383 = (i8)(intptr_t)(ws+4232);
	i8 v3384 = *(i8*)(intptr_t)v3383;
	i8 v3385 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3385)(v3384);

	i8 v3386 = (i8)(intptr_t)c02_s0103;
	i8 v3387 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3387)(v3386);

	i8 v3388 = (i8)(intptr_t)(ws+4242);
	i2 v3389 = *(i2*)(intptr_t)v3388;
	i8 v3390 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3390)(v3389);

	i8 v3391 = (i8)(intptr_t)c02_s0104;
	i8 v3392 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3392)(v3391);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s0105[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0106[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0107[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s0108[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0109[] = { 0x29,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s010a[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s010b[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Shift workspace at ws+4224 length ws+36
void f179_Shift(i8 p3393 /* op */, i8 p3394 /* type */, i1 p3395 /* width */) {
	*(i1*)(intptr_t)(ws+4224) = p3395; /* width */
	*(i8*)(intptr_t)(ws+4232) = p3394; /* type */
	*(i8*)(intptr_t)(ws+4240) = p3393; /* op */

	i8 v3396 = (i8)(intptr_t)(f164_Pop);
	i2 v3397;

	((void(*)(i2* /* vid */))(intptr_t)v3396)(&v3397);

	i8 v3398 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v3398 = v3397;

	i8 v3399 = (i8)(intptr_t)(ws+4248);
	i2 v3400 = *(i2*)(intptr_t)v3399;
	i8 v3401 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v3401 = v3400;

	i8 v3402 = (i8)(intptr_t)(f164_Pop);
	i2 v3403;

	((void(*)(i2* /* vid */))(intptr_t)v3402)(&v3403);

	i8 v3404 = (i8)(intptr_t)(ws+4252);
	*(i2*)(intptr_t)v3404 = v3403;

	i8 v3405 = (i8)(intptr_t)(ws+4252);
	i2 v3406 = *(i2*)(intptr_t)v3405;
	i8 v3407 = (i8)(intptr_t)(ws+4254);
	*(i2*)(intptr_t)v3407 = v3406;

	i8 v3408 = (i8)(intptr_t)(f162_Push);
	i2 v3409;

	((void(*)(i2* /* vid */))(intptr_t)v3408)(&v3409);

	i8 v3410 = (i8)(intptr_t)(ws+4256);
	*(i2*)(intptr_t)v3410 = v3409;

	i8 v3411 = (i8)(intptr_t)(ws+4256);
	i2 v3412 = *(i2*)(intptr_t)v3411;
	i8 v3413 = (i8)(intptr_t)(ws+4258);
	*(i2*)(intptr_t)v3413 = v3412;

	i8 v3414 = (i8)(intptr_t)c02_s0105;
	i8 v3415 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3415)(v3414);

	i8 v3416 = (i8)(intptr_t)(ws+4224);
	i1 v3417 = *(i1*)(intptr_t)v3416;
	i8 v3418 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3418)(v3417);

	i8 v3419 = (i8)(intptr_t)c02_s0106;
	i8 v3420 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3420)(v3419);

	i8 v3421 = (i8)(intptr_t)(ws+4258);
	i2 v3422 = *(i2*)(intptr_t)v3421;
	i8 v3423 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3423)(v3422);

	i8 v3424 = (i8)(intptr_t)c02_s0107;
	i8 v3425 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3425)(v3424);

	i8 v3426 = (i8)(intptr_t)(ws+4232);
	i8 v3427 = *(i8*)(intptr_t)v3426;
	i8 v3428 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3428)(v3427);

	i8 v3429 = (i8)(intptr_t)c02_s0108;
	i8 v3430 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3430)(v3429);

	i8 v3431 = (i8)(intptr_t)(ws+4254);
	i2 v3432 = *(i2*)(intptr_t)v3431;
	i8 v3433 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3433)(v3432);

	i8 v3434 = (i8)(intptr_t)c02_s0109;
	i8 v3435 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3435)(v3434);

	i8 v3436 = (i8)(intptr_t)(ws+4240);
	i8 v3437 = *(i8*)(intptr_t)v3436;
	i8 v3438 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3438)(v3437);

	i8 v3439 = (i8)(intptr_t)c02_s010a;
	i8 v3440 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3440)(v3439);

	i8 v3441 = (i8)(intptr_t)(ws+4250);
	i2 v3442 = *(i2*)(intptr_t)v3441;
	i8 v3443 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3443)(v3442);

	i8 v3444 = (i8)(intptr_t)c02_s010b;
	i8 v3445 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3445)(v3444);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s010c[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s010d[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s010e[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s010f[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s0110[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Branch workspace at ws+4224 length ws+24
void f180_Branch(i8 p3446 /* op */, i8 p3447 /* node */) {
	*(i8*)(intptr_t)(ws+4224) = p3447; /* node */
	*(i8*)(intptr_t)(ws+4232) = p3446; /* op */

	i8 v3448 = (i8)(intptr_t)(f164_Pop);
	i2 v3449;

	((void(*)(i2* /* vid */))(intptr_t)v3448)(&v3449);

	i8 v3450 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v3450 = v3449;

	i8 v3451 = (i8)(intptr_t)(ws+4240);
	i2 v3452 = *(i2*)(intptr_t)v3451;
	i8 v3453 = (i8)(intptr_t)(ws+4242);
	*(i2*)(intptr_t)v3453 = v3452;

	i8 v3454 = (i8)(intptr_t)(f164_Pop);
	i2 v3455;

	((void(*)(i2* /* vid */))(intptr_t)v3454)(&v3455);

	i8 v3456 = (i8)(intptr_t)(ws+4244);
	*(i2*)(intptr_t)v3456 = v3455;

	i8 v3457 = (i8)(intptr_t)(ws+4244);
	i2 v3458 = *(i2*)(intptr_t)v3457;
	i8 v3459 = (i8)(intptr_t)(ws+4246);
	*(i2*)(intptr_t)v3459 = v3458;

	i8 v3460 = (i8)(intptr_t)c02_s010c;
	i8 v3461 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3461)(v3460);

	i8 v3462 = (i8)(intptr_t)(ws+4246);
	i2 v3463 = *(i2*)(intptr_t)v3462;
	i8 v3464 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3464)(v3463);

	i8 v3465 = (i8)(intptr_t)(ws+4232);
	i8 v3466 = *(i8*)(intptr_t)v3465;
	i8 v3467 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3467)(v3466);

	i8 v3468 = (i8)(intptr_t)c02_s010d;
	i8 v3469 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3469)(v3468);

	i8 v3470 = (i8)(intptr_t)(ws+4242);
	i2 v3471 = *(i2*)(intptr_t)v3470;
	i8 v3472 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3472)(v3471);

	i8 v3473 = (i8)(intptr_t)c02_s010e;
	i8 v3474 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3474)(v3473);

	i8 v3475 = (i8)(intptr_t)(ws+4224);
	i8 v3476 = *(i8*)(intptr_t)v3475;
	i2 v3477 = *(i2*)(intptr_t)v3476;
	i8 v3478 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3478)(v3477);

	i8 v3479 = (i8)(intptr_t)c02_s010f;
	i8 v3480 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3480)(v3479);

	i8 v3481 = (i8)(intptr_t)(ws+4224);
	i8 v3482 = *(i8*)(intptr_t)v3481;
	i8 v3483 = v3482+(+2);
	i2 v3484 = *(i2*)(intptr_t)v3483;
	i8 v3485 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3485)(v3484);

	i8 v3486 = (i8)(intptr_t)c02_s0110;
	i8 v3487 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3487)(v3486);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s0111[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0112[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s0113[] = { 0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0114[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0115[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s0116[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s0117[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// BranchSigned workspace at ws+4224 length ws+32
void f181_BranchSigned(i8 p3488 /* op */, i1 p3489 /* width */, i8 p3490 /* node */) {
	*(i8*)(intptr_t)(ws+4224) = p3490; /* node */
	*(i1*)(intptr_t)(ws+4232) = p3489; /* width */
	*(i8*)(intptr_t)(ws+4240) = p3488; /* op */

	i8 v3491 = (i8)(intptr_t)(f164_Pop);
	i2 v3492;

	((void(*)(i2* /* vid */))(intptr_t)v3491)(&v3492);

	i8 v3493 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v3493 = v3492;

	i8 v3494 = (i8)(intptr_t)(ws+4248);
	i2 v3495 = *(i2*)(intptr_t)v3494;
	i8 v3496 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v3496 = v3495;

	i8 v3497 = (i8)(intptr_t)(f164_Pop);
	i2 v3498;

	((void(*)(i2* /* vid */))(intptr_t)v3497)(&v3498);

	i8 v3499 = (i8)(intptr_t)(ws+4252);
	*(i2*)(intptr_t)v3499 = v3498;

	i8 v3500 = (i8)(intptr_t)(ws+4252);
	i2 v3501 = *(i2*)(intptr_t)v3500;
	i8 v3502 = (i8)(intptr_t)(ws+4254);
	*(i2*)(intptr_t)v3502 = v3501;

	i8 v3503 = (i8)(intptr_t)c02_s0111;
	i8 v3504 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3504)(v3503);

	i8 v3505 = (i8)(intptr_t)(ws+4232);
	i1 v3506 = *(i1*)(intptr_t)v3505;
	i8 v3507 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3507)(v3506);

	i8 v3508 = (i8)(intptr_t)c02_s0112;
	i8 v3509 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3509)(v3508);

	i8 v3510 = (i8)(intptr_t)(ws+4254);
	i2 v3511 = *(i2*)(intptr_t)v3510;
	i8 v3512 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3512)(v3511);

	i8 v3513 = (i8)(intptr_t)(ws+4240);
	i8 v3514 = *(i8*)(intptr_t)v3513;
	i8 v3515 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3515)(v3514);

	i8 v3516 = (i8)(intptr_t)c02_s0113;
	i8 v3517 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3517)(v3516);

	i8 v3518 = (i8)(intptr_t)(ws+4232);
	i1 v3519 = *(i1*)(intptr_t)v3518;
	i8 v3520 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3520)(v3519);

	i8 v3521 = (i8)(intptr_t)c02_s0114;
	i8 v3522 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3522)(v3521);

	i8 v3523 = (i8)(intptr_t)(ws+4250);
	i2 v3524 = *(i2*)(intptr_t)v3523;
	i8 v3525 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3525)(v3524);

	i8 v3526 = (i8)(intptr_t)c02_s0115;
	i8 v3527 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3527)(v3526);

	i8 v3528 = (i8)(intptr_t)(ws+4224);
	i8 v3529 = *(i8*)(intptr_t)v3528;
	i2 v3530 = *(i2*)(intptr_t)v3529;
	i8 v3531 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3531)(v3530);

	i8 v3532 = (i8)(intptr_t)c02_s0116;
	i8 v3533 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3533)(v3532);

	i8 v3534 = (i8)(intptr_t)(ws+4224);
	i8 v3535 = *(i8*)(intptr_t)v3534;
	i8 v3536 = v3535+(+2);
	i2 v3537 = *(i2*)(intptr_t)v3536;
	i8 v3538 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3538)(v3537);

	i8 v3539 = (i8)(intptr_t)c02_s0117;
	i8 v3540 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3540)(v3539);

endsub:;
}
const i1 c02_s0118[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s0119[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// BranchConstant workspace at ws+4224 length ws+16
void f182_BranchConstant(i4 p3541 /* rhs */, i4 p3542 /* lhs */, i8 p3543 /* node */) {
	*(i8*)(intptr_t)(ws+4224) = p3543; /* node */
	*(i4*)(intptr_t)(ws+4232) = p3542; /* lhs */
	*(i4*)(intptr_t)(ws+4236) = p3541; /* rhs */

	i8 v3544 = (i8)(intptr_t)c02_s0118;
	i8 v3545 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3545)(v3544);

	i8 v3546 = (i8)(intptr_t)(ws+4232);
	i4 v3547 = *(i4*)(intptr_t)v3546;
	i8 v3548 = (i8)(intptr_t)(ws+4236);
	i4 v3549 = *(i4*)(intptr_t)v3548;
	if (v3547==v3549) goto c02_0298; else goto c02_0299;

c02_0298:;

	i8 v3550 = (i8)(intptr_t)(ws+4224);
	i8 v3551 = *(i8*)(intptr_t)v3550;
	i2 v3552 = *(i2*)(intptr_t)v3551;
	i8 v3553 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3553)(v3552);

	goto c02_0295;

c02_0299:;

	i8 v3554 = (i8)(intptr_t)(ws+4224);
	i8 v3555 = *(i8*)(intptr_t)v3554;
	i8 v3556 = v3555+(+2);
	i2 v3557 = *(i2*)(intptr_t)v3556;
	i8 v3558 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3558)(v3557);

c02_0295:;

	i8 v3559 = (i8)(intptr_t)c02_s0119;
	i8 v3560 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3560)(v3559);

endsub:;
}
const i1 c02_s011a[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s011b[] = { 0x20,0x21,0x3d,0x20,0 };
	void f92_E(i8 /* text */);
	void f98_E_i32(i4 /* value */);
const i1 c02_s011c[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s011d[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Whencase workspace at ws+4224 length ws+8
void f183_Whencase(i2 p3561 /* falselabel */, i4 p3562 /* value */) {
	*(i4*)(intptr_t)(ws+4224) = p3562; /* value */
	*(i2*)(intptr_t)(ws+4228) = p3561; /* falselabel */

	i8 v3563 = (i8)(intptr_t)(ws+3704);
	i8 v3564 = (i8)(intptr_t)(ws+3832);
	i1 v3565 = *(i1*)(intptr_t)v3564;
	i1 v3566 = v3565+(-1);
	i8 v3567 = v3566;
	i1 v3568 = (i1)+1;
	i8 v3569 = ((i8)v3567)<<v3568;
	i8 v3570 = v3563+v3569;
	i2 v3571 = *(i2*)(intptr_t)v3570;
	i8 v3572 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v3572 = v3571;

	i8 v3573 = (i8)(intptr_t)c02_s011a;
	i8 v3574 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3574)(v3573);

	i8 v3575 = (i8)(intptr_t)(ws+4230);
	i2 v3576 = *(i2*)(intptr_t)v3575;
	i8 v3577 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3577)(v3576);

	i8 v3578 = (i8)(intptr_t)c02_s011b;
	i8 v3579 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3579)(v3578);

	i8 v3580 = (i8)(intptr_t)(ws+4224);
	i4 v3581 = *(i4*)(intptr_t)v3580;
	i8 v3582 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v3582)(v3581);

	i8 v3583 = (i8)(intptr_t)c02_s011c;
	i8 v3584 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3584)(v3583);

	i8 v3585 = (i8)(intptr_t)(ws+4228);
	i2 v3586 = *(i2*)(intptr_t)v3585;
	i8 v3587 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3587)(v3586);

	i8 v3588 = (i8)(intptr_t)c02_s011d;
	i8 v3589 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3589)(v3588);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s011e[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s011f[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0120[] = { 0x20,0x3d,0x20,0 };
	void f92_E(i8 /* text */);
const i1 c02_s0121[] = { 0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0122[] = { 0x29,0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0123[] = { 0x29,0 };
	void f92_E(i8 /* text */);
const i1 c02_s0124[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0125[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Cast workspace at ws+4224 length ws+12
void f184_Cast(i1 p3590 /* sext */, i1 p3591 /* dest */, i1 p3592 /* src */) {
	*(i1*)(intptr_t)(ws+4224) = p3592; /* src */
	*(i1*)(intptr_t)(ws+4225) = p3591; /* dest */
	*(i1*)(intptr_t)(ws+4226) = p3590; /* sext */

	i8 v3593 = (i8)(intptr_t)(f164_Pop);
	i2 v3594;

	((void(*)(i2* /* vid */))(intptr_t)v3593)(&v3594);

	i8 v3595 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v3595 = v3594;

	i8 v3596 = (i8)(intptr_t)(ws+4228);
	i2 v3597 = *(i2*)(intptr_t)v3596;
	i8 v3598 = (i8)(intptr_t)(ws+4230);
	*(i2*)(intptr_t)v3598 = v3597;

	i8 v3599 = (i8)(intptr_t)(f162_Push);
	i2 v3600;

	((void(*)(i2* /* vid */))(intptr_t)v3599)(&v3600);

	i8 v3601 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v3601 = v3600;

	i8 v3602 = (i8)(intptr_t)(ws+4232);
	i2 v3603 = *(i2*)(intptr_t)v3602;
	i8 v3604 = (i8)(intptr_t)(ws+4234);
	*(i2*)(intptr_t)v3604 = v3603;

	i8 v3605 = (i8)(intptr_t)c02_s011e;
	i8 v3606 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3606)(v3605);

	i8 v3607 = (i8)(intptr_t)(ws+4225);
	i1 v3608 = *(i1*)(intptr_t)v3607;
	i8 v3609 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3609)(v3608);

	i8 v3610 = (i8)(intptr_t)c02_s011f;
	i8 v3611 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3611)(v3610);

	i8 v3612 = (i8)(intptr_t)(ws+4234);
	i2 v3613 = *(i2*)(intptr_t)v3612;
	i8 v3614 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3614)(v3613);

	i8 v3615 = (i8)(intptr_t)c02_s0120;
	i8 v3616 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3616)(v3615);

	i8 v3617 = (i8)(intptr_t)(ws+4226);
	i1 v3618 = *(i1*)(intptr_t)v3617;
	i1 v3619 = (i1)+0;
	if (v3618==v3619) goto c02_029e; else goto c02_029d;

c02_029d:;

	i8 v3620 = (i8)(intptr_t)c02_s0121;
	i8 v3621 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3621)(v3620);

	i8 v3622 = (i8)(intptr_t)(ws+4225);
	i1 v3623 = *(i1*)(intptr_t)v3622;
	i8 v3624 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3624)(v3623);

	i8 v3625 = (i8)(intptr_t)c02_s0122;
	i8 v3626 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3626)(v3625);

	i8 v3627 = (i8)(intptr_t)(ws+4224);
	i1 v3628 = *(i1*)(intptr_t)v3627;
	i8 v3629 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3629)(v3628);

	i8 v3630 = (i8)(intptr_t)c02_s0123;
	i8 v3631 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3631)(v3630);

c02_029e:;

c02_029a:;

	i8 v3632 = (i8)(intptr_t)c02_s0124;
	i8 v3633 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3633)(v3632);

	i8 v3634 = (i8)(intptr_t)(ws+4230);
	i2 v3635 = *(i2*)(intptr_t)v3634;
	i8 v3636 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3636)(v3635);

	i8 v3637 = (i8)(intptr_t)c02_s0125;
	i8 v3638 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3638)(v3637);

endsub:;
}
	void f106_EmitterOpenStream(i8 /* subr */);
const i1 c02_s0126[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f101_E_h16(i2 /* value */);
const i1 c02_s0127[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f92_E(i8 /* text */);
	void f87_E_comma(void);
const i1 c02_s0128[] = { 0x30,0x78,0 };
	void f92_E(i8 /* text */);
	void f100_E_h8(i1 /* value */);
	void f87_E_comma(void);
const i1 c02_s0129[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f107_EmitterCloseStream(void);

// E_string workspace at ws+4232 length ws+12
void f185_E_string(i2* p3641 /* sid */, i8 p3642 /* text */) {
	*(i8*)(intptr_t)(ws+4232) = p3642; /* text */

	i8 v3643 = (i8)(intptr_t)(ws+3836);
	i2 v3644 = *(i2*)(intptr_t)v3643;
	i8 v3645 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v3645 = v3644;

	i8 v3646 = (i8)(intptr_t)(ws+3836);
	i2 v3647 = *(i2*)(intptr_t)v3646;
	i2 v3648 = v3647+(+1);
	i8 v3649 = (i8)(intptr_t)(ws+3836);
	*(i2*)(intptr_t)v3649 = v3648;

	i8 v3650 = (i8)(intptr_t)(ws+40);
	i8 v3651 = *(i8*)(intptr_t)v3650;
	i8 v3652 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v3652)(v3651);

	i8 v3653 = (i8)(intptr_t)c02_s0126;
	i8 v3654 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3654)(v3653);

	i1 v3655 = (i1)+3;
	i8 v3656 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3656)(v3655);

	i1 v3657 = (i1)+115;
	i8 v3658 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3658)(v3657);

	i8 v3659 = (i8)(intptr_t)(ws+4240);
	i2 v3660 = *(i2*)(intptr_t)v3659;
	i8 v3661 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v3661)(v3660);

	i8 v3662 = (i8)(intptr_t)c02_s0127;
	i8 v3663 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3663)(v3662);

	i1 v3664 = (i1)+1;
	i8 v3665 = (i8)(intptr_t)(ws+4242);
	*(i1*)(intptr_t)v3665 = v3664;

c02_029f:;

	i8 v3666 = (i8)(intptr_t)(ws+4232);
	i8 v3667 = *(i8*)(intptr_t)v3666;
	i1 v3668 = *(i1*)(intptr_t)v3667;
	i8 v3669 = (i8)(intptr_t)(ws+4243);
	*(i1*)(intptr_t)v3669 = v3668;

	i8 v3670 = (i8)(intptr_t)(ws+4232);
	i8 v3671 = *(i8*)(intptr_t)v3670;
	i8 v3672 = v3671+(+1);
	i8 v3673 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v3673 = v3672;

	i8 v3674 = (i8)(intptr_t)(ws+4243);
	i1 v3675 = *(i1*)(intptr_t)v3674;
	i1 v3676 = (i1)+0;
	if (v3675==v3676) goto c02_02a4; else goto c02_02a5;

c02_02a4:;

	goto c02_02a0;

c02_02a5:;

c02_02a1:;

	i8 v3677 = (i8)(intptr_t)(ws+4242);
	i1 v3678 = *(i1*)(intptr_t)v3677;
	i1 v3679 = (i1)+0;
	if (v3678==v3679) goto c02_02a9; else goto c02_02aa;

c02_02a9:;

	i8 v3680 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3680)();

c02_02aa:;

c02_02a6:;

	i1 v3681 = (i1)+0;
	i8 v3682 = (i8)(intptr_t)(ws+4242);
	*(i1*)(intptr_t)v3682 = v3681;

	i8 v3683 = (i8)(intptr_t)c02_s0128;
	i8 v3684 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3684)(v3683);

	i8 v3685 = (i8)(intptr_t)(ws+4243);
	i1 v3686 = *(i1*)(intptr_t)v3685;
	i8 v3687 = (i8)(intptr_t)(f100_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v3687)(v3686);

	goto c02_029f;

c02_02a0:;

	i8 v3688 = (i8)(intptr_t)(ws+4242);
	i1 v3689 = *(i1*)(intptr_t)v3688;
	i1 v3690 = (i1)+0;
	if (v3689==v3690) goto c02_02ae; else goto c02_02af;

c02_02ae:;

	i8 v3691 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3691)();

c02_02af:;

c02_02ab:;

	i8 v3692 = (i8)(intptr_t)c02_s0129;
	i8 v3693 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3693)(v3692);

	i8 v3694 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3694)();

endsub:;
	*p3641 = *(i2*)(intptr_t)(ws+4240);
}
const i1 c02_s012a[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f92_E(i8 /* text */);
	void f87_E_comma(void);
const i1 c02_s012b[] = { 0x30,0x78,0 };
	void f92_E(i8 /* text */);
	void f100_E_h8(i1 /* value */);
const i1 c02_s012c[] = { 0x7d,0x7d,0x2c,0x0a,0 };
	void f92_E(i8 /* text */);

// FlushInitialiserBuffer workspace at ws+4240 length ws+1
void f186_FlushInitialiserBuffer(void) {

	i8 v3697 = (i8)(intptr_t)(ws+3846);
	i1 v3698 = *(i1*)(intptr_t)v3697;
	i1 v3699 = (i1)+0;
	if (v3698==v3699) goto c02_02b4; else goto c02_02b3;

c02_02b3:;

	i8 v3700 = (i8)(intptr_t)c02_s012a;
	i8 v3701 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3701)(v3700);

	i1 v3702 = (i1)+0;
	i8 v3703 = (i8)(intptr_t)(ws+4240);
	*(i1*)(intptr_t)v3703 = v3702;

c02_02b5:;

	i8 v3704 = (i8)(intptr_t)(ws+4240);
	i1 v3705 = *(i1*)(intptr_t)v3704;
	i8 v3706 = (i8)(intptr_t)(ws+3846);
	i1 v3707 = *(i1*)(intptr_t)v3706;
	if (v3705==v3707) goto c02_02ba; else goto c02_02b9;

c02_02b9:;

	i8 v3708 = (i8)(intptr_t)(ws+4240);
	i1 v3709 = *(i1*)(intptr_t)v3708;
	i1 v3710 = (i1)+0;
	if (v3709==v3710) goto c02_02bf; else goto c02_02be;

c02_02be:;

	i8 v3711 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3711)();

c02_02bf:;

c02_02bb:;

	i8 v3712 = (i8)(intptr_t)c02_s012b;
	i8 v3713 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3713)(v3712);

	i8 v3714 = (i8)(intptr_t)(ws+3838);
	i8 v3715 = (i8)(intptr_t)(ws+4240);
	i1 v3716 = *(i1*)(intptr_t)v3715;
	i8 v3717 = v3716;
	i8 v3718 = v3714+v3717;
	i1 v3719 = *(i1*)(intptr_t)v3718;
	i8 v3720 = (i8)(intptr_t)(f100_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v3720)(v3719);

	i8 v3721 = (i8)(intptr_t)(ws+4240);
	i1 v3722 = *(i1*)(intptr_t)v3721;
	i1 v3723 = v3722+(+1);
	i8 v3724 = (i8)(intptr_t)(ws+4240);
	*(i1*)(intptr_t)v3724 = v3723;

	goto c02_02b5;

c02_02ba:;

	i8 v3725 = (i8)(intptr_t)c02_s012c;
	i8 v3726 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3726)(v3725);

	i1 v3727 = (i1)+0;
	i8 v3728 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3728 = v3727;

c02_02b4:;

c02_02b0:;

endsub:;
}
	void f186_FlushInitialiserBuffer(void);

// E_bytes workspace at ws+4224 length ws+9
void f187_E_bytes(i1 p3729 /* width */, i8 p3730 /* ptr */) {
	*(i8*)(intptr_t)(ws+4224) = p3730; /* ptr */
	*(i1*)(intptr_t)(ws+4232) = p3729; /* width */

c02_02c0:;

	i8 v3731 = (i8)(intptr_t)(ws+4232);
	i1 v3732 = *(i1*)(intptr_t)v3731;
	i1 v3733 = (i1)+0;
	if (v3732==v3733) goto c02_02c5; else goto c02_02c4;

c02_02c4:;

	i8 v3734 = (i8)(intptr_t)(ws+4224);
	i8 v3735 = *(i8*)(intptr_t)v3734;
	i1 v3736 = *(i1*)(intptr_t)v3735;
	i8 v3737 = (i8)(intptr_t)(ws+3838);
	i8 v3738 = (i8)(intptr_t)(ws+3846);
	i1 v3739 = *(i1*)(intptr_t)v3738;
	i8 v3740 = v3739;
	i8 v3741 = v3737+v3740;
	*(i1*)(intptr_t)v3741 = v3736;

	i8 v3742 = (i8)(intptr_t)(ws+4224);
	i8 v3743 = *(i8*)(intptr_t)v3742;
	i8 v3744 = v3743+(+1);
	i8 v3745 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v3745 = v3744;

	i8 v3746 = (i8)(intptr_t)(ws+3846);
	i1 v3747 = *(i1*)(intptr_t)v3746;
	i1 v3748 = v3747+(+1);
	i8 v3749 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3749 = v3748;

	i8 v3750 = (i8)(intptr_t)(ws+3846);
	i1 v3751 = *(i1*)(intptr_t)v3750;
	i1 v3752 = (i1)+8;
	if (v3751==v3752) goto c02_02c9; else goto c02_02ca;

c02_02c9:;

	i8 v3753 = (i8)(intptr_t)(f186_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v3753)();

c02_02ca:;

c02_02c6:;

	i8 v3754 = (i8)(intptr_t)(ws+4232);
	i1 v3755 = *(i1*)(intptr_t)v3754;
	i1 v3756 = v3755+(-1);
	i8 v3757 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v3757 = v3756;

	goto c02_02c0;

c02_02c5:;

endsub:;
}
	void f66_StartError(void);
const i1 c02_s012d[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
	void f67_EndError(void);

// CheckBufferAlignment workspace at ws+4232 length ws+0
void f188_CheckBufferAlignment(void) {

	i8 v3758 = (i8)(intptr_t)(ws+3846);
	i1 v3759 = *(i1*)(intptr_t)v3758;
	i1 v3760 = (i1)+0;
	if (v3759==v3760) goto c02_02cf; else goto c02_02ce;

c02_02ce:;

	i8 v3761 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v3761)();

	i8 v3762 = (i8)(intptr_t)c02_s012d;
	i8 v3763 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v3763)(v3762);

	i8 v3764 = (i8)(intptr_t)(ws+3846);
	i1 v3765 = *(i1*)(intptr_t)v3764;
	i8 v3766 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v3766)(v3765);

	i8 v3767 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v3767)();

c02_02cf:;

c02_02cb:;

endsub:;
}
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// MatchPredicate workspace at ws+4208 length ws+56
void f189_MatchPredicate(i1* p3768 /* matches */, i8 p3769 /* n */, i1 p3770 /* rule */) {
	*(i1*)(intptr_t)(ws+4208) = p3770; /* rule */
	*(i8*)(intptr_t)(ws+4216) = p3769; /* n */

	i8 v3771 = (i8)(intptr_t)(ws+4216);
	i8 v3772 = *(i8*)(intptr_t)v3771;
	i8 v3773 = (i8)+32;
	i8 v3774 = (i8)(intptr_t)(ws+4232);
	i8 v3775 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v3775)(v3774, v3773, v3772);

	i1 v3776 = (i1)+0;
	i8 v3777 = (i8)(intptr_t)(ws+4224);
	*(i1*)(intptr_t)v3777 = v3776;

	i8 v3778 = (i8)(intptr_t)(ws+4208);
	i1 v3779 = *(i1*)(intptr_t)v3778;

c02_02d0:;


endsub:;
	*p3768 = *(i1*)(intptr_t)(ws+4224);
}

// Emitter workspace at ws+4224 length ws+0
void f191_Emitter(void) {

endsub:;
}
	void f182_BranchConstant(i4 /* rhs */, i4 /* lhs */, i8 /* node */);

// emit_0 workspace at ws+4224 length ws+0
void f192_emit_0(void) {

	i8 v3827 = (i8)(intptr_t)(ws+4128);
	i8 v3828 = *(i8*)(intptr_t)v3827;
	i8 v3829 = v3828+(+16);
	i8 v3830 = *(i8*)(intptr_t)v3829;
	i8 v3831 = (i8)(intptr_t)(ws+4152);
	i8 v3832 = *(i8*)(intptr_t)v3831;
	i4 v3833 = *(i4*)(intptr_t)v3832;
	i8 v3834 = (i8)(intptr_t)(ws+4168);
	i8 v3835 = *(i8*)(intptr_t)v3834;
	i4 v3836 = *(i4*)(intptr_t)v3835;
	i8 v3837 = (i8)(intptr_t)(f182_BranchConstant);

	((void(*)(i4 /* rhs */, i4 /* lhs */, i8 /* node */))(intptr_t)v3837)(v3836, v3833, v3830);

endsub:;
}
	void f172_StoreVV(i1 /* width */);

// emit_1 workspace at ws+4224 length ws+0
void f193_emit_1(void) {

	i1 v3838 = (i1)+1;
	i8 v3839 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3839)(v3838);

endsub:;
}
	void f172_StoreVV(i1 /* width */);

// emit_2 workspace at ws+4224 length ws+0
void f194_emit_2(void) {

	i1 v3840 = (i1)+2;
	i8 v3841 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3841)(v3840);

endsub:;
}
	void f172_StoreVV(i1 /* width */);

// emit_3 workspace at ws+4224 length ws+0
void f195_emit_3(void) {

	i1 v3842 = (i1)+4;
	i8 v3843 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3843)(v3842);

endsub:;
}
	void f172_StoreVV(i1 /* width */);

// emit_4 workspace at ws+4224 length ws+0
void f196_emit_4(void) {

	i1 v3844 = (i1)+8;
	i8 v3845 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3845)(v3844);

endsub:;
}
const i1 c02_s012e[] = { 0x2b,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_5 workspace at ws+4224 length ws+0
void f197_emit_5(void) {

	i1 v3846 = (i1)+1;
	i8 v3847 = (i8)(intptr_t)c02_s012e;
	i8 v3848 = (i8)(intptr_t)(ws+4168);
	i8 v3849 = *(i8*)(intptr_t)v3848;
	i4 v3850 = *(i4*)(intptr_t)v3849;
	i8 v3851 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3851)(v3850, v3847, v3846);

endsub:;
}
const i1 c02_s012f[] = { 0x2b,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_6 workspace at ws+4224 length ws+0
void f198_emit_6(void) {

	i1 v3852 = (i1)+2;
	i8 v3853 = (i8)(intptr_t)c02_s012f;
	i8 v3854 = (i8)(intptr_t)(ws+4168);
	i8 v3855 = *(i8*)(intptr_t)v3854;
	i4 v3856 = *(i4*)(intptr_t)v3855;
	i8 v3857 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3857)(v3856, v3853, v3852);

endsub:;
}
const i1 c02_s0130[] = { 0x2b,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_7 workspace at ws+4224 length ws+0
void f199_emit_7(void) {

	i1 v3858 = (i1)+4;
	i8 v3859 = (i8)(intptr_t)c02_s0130;
	i8 v3860 = (i8)(intptr_t)(ws+4168);
	i8 v3861 = *(i8*)(intptr_t)v3860;
	i4 v3862 = *(i4*)(intptr_t)v3861;
	i8 v3863 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3863)(v3862, v3859, v3858);

endsub:;
}
const i1 c02_s0131[] = { 0x2b,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_8 workspace at ws+4224 length ws+0
void f200_emit_8(void) {

	i1 v3864 = (i1)+8;
	i8 v3865 = (i8)(intptr_t)c02_s0131;
	i8 v3866 = (i8)(intptr_t)(ws+4168);
	i8 v3867 = *(i8*)(intptr_t)v3866;
	i4 v3868 = *(i4*)(intptr_t)v3867;
	i8 v3869 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3869)(v3868, v3865, v3864);

endsub:;
}
const i1 c02_s0132[] = { 0x2d,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_9 workspace at ws+4224 length ws+0
void f201_emit_9(void) {

	i1 v3870 = (i1)+1;
	i8 v3871 = (i8)(intptr_t)c02_s0132;
	i8 v3872 = (i8)(intptr_t)(ws+4168);
	i8 v3873 = *(i8*)(intptr_t)v3872;
	i4 v3874 = *(i4*)(intptr_t)v3873;
	i8 v3875 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3875)(v3874, v3871, v3870);

endsub:;
}
const i1 c02_s0133[] = { 0x2d,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_10 workspace at ws+4224 length ws+0
void f202_emit_10(void) {

	i1 v3876 = (i1)+2;
	i8 v3877 = (i8)(intptr_t)c02_s0133;
	i8 v3878 = (i8)(intptr_t)(ws+4168);
	i8 v3879 = *(i8*)(intptr_t)v3878;
	i4 v3880 = *(i4*)(intptr_t)v3879;
	i8 v3881 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3881)(v3880, v3877, v3876);

endsub:;
}
const i1 c02_s0134[] = { 0x2d,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_11 workspace at ws+4224 length ws+0
void f203_emit_11(void) {

	i1 v3882 = (i1)+4;
	i8 v3883 = (i8)(intptr_t)c02_s0134;
	i8 v3884 = (i8)(intptr_t)(ws+4168);
	i8 v3885 = *(i8*)(intptr_t)v3884;
	i4 v3886 = *(i4*)(intptr_t)v3885;
	i8 v3887 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3887)(v3886, v3883, v3882);

endsub:;
}
const i1 c02_s0135[] = { 0x2d,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_12 workspace at ws+4224 length ws+0
void f204_emit_12(void) {

	i1 v3888 = (i1)+8;
	i8 v3889 = (i8)(intptr_t)c02_s0135;
	i8 v3890 = (i8)(intptr_t)(ws+4168);
	i8 v3891 = *(i8*)(intptr_t)v3890;
	i4 v3892 = *(i4*)(intptr_t)v3891;
	i8 v3893 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3893)(v3892, v3889, v3888);

endsub:;
}
const i1 c02_s0136[] = { 0x2a,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_13 workspace at ws+4224 length ws+0
void f205_emit_13(void) {

	i1 v3894 = (i1)+1;
	i8 v3895 = (i8)(intptr_t)c02_s0136;
	i8 v3896 = (i8)(intptr_t)(ws+4168);
	i8 v3897 = *(i8*)(intptr_t)v3896;
	i4 v3898 = *(i4*)(intptr_t)v3897;
	i8 v3899 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3899)(v3898, v3895, v3894);

endsub:;
}
const i1 c02_s0137[] = { 0x2a,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_14 workspace at ws+4224 length ws+0
void f206_emit_14(void) {

	i1 v3900 = (i1)+2;
	i8 v3901 = (i8)(intptr_t)c02_s0137;
	i8 v3902 = (i8)(intptr_t)(ws+4168);
	i8 v3903 = *(i8*)(intptr_t)v3902;
	i4 v3904 = *(i4*)(intptr_t)v3903;
	i8 v3905 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3905)(v3904, v3901, v3900);

endsub:;
}
const i1 c02_s0138[] = { 0x2a,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_15 workspace at ws+4224 length ws+0
void f207_emit_15(void) {

	i1 v3906 = (i1)+4;
	i8 v3907 = (i8)(intptr_t)c02_s0138;
	i8 v3908 = (i8)(intptr_t)(ws+4168);
	i8 v3909 = *(i8*)(intptr_t)v3908;
	i4 v3910 = *(i4*)(intptr_t)v3909;
	i8 v3911 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3911)(v3910, v3907, v3906);

endsub:;
}
const i1 c02_s0139[] = { 0x2a,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_16 workspace at ws+4224 length ws+0
void f208_emit_16(void) {

	i1 v3912 = (i1)+8;
	i8 v3913 = (i8)(intptr_t)c02_s0139;
	i8 v3914 = (i8)(intptr_t)(ws+4168);
	i8 v3915 = *(i8*)(intptr_t)v3914;
	i4 v3916 = *(i4*)(intptr_t)v3915;
	i8 v3917 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3917)(v3916, v3913, v3912);

endsub:;
}
const i1 c02_s013a[] = { 0x2f,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_17 workspace at ws+4224 length ws+0
void f209_emit_17(void) {

	i1 v3918 = (i1)+1;
	i8 v3919 = (i8)(intptr_t)c02_s013a;
	i8 v3920 = (i8)(intptr_t)(ws+4168);
	i8 v3921 = *(i8*)(intptr_t)v3920;
	i4 v3922 = *(i4*)(intptr_t)v3921;
	i8 v3923 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3923)(v3922, v3919, v3918);

endsub:;
}
const i1 c02_s013b[] = { 0x2f,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_18 workspace at ws+4224 length ws+0
void f210_emit_18(void) {

	i1 v3924 = (i1)+2;
	i8 v3925 = (i8)(intptr_t)c02_s013b;
	i8 v3926 = (i8)(intptr_t)(ws+4168);
	i8 v3927 = *(i8*)(intptr_t)v3926;
	i4 v3928 = *(i4*)(intptr_t)v3927;
	i8 v3929 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3929)(v3928, v3925, v3924);

endsub:;
}
const i1 c02_s013c[] = { 0x2f,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_19 workspace at ws+4224 length ws+0
void f211_emit_19(void) {

	i1 v3930 = (i1)+4;
	i8 v3931 = (i8)(intptr_t)c02_s013c;
	i8 v3932 = (i8)(intptr_t)(ws+4168);
	i8 v3933 = *(i8*)(intptr_t)v3932;
	i4 v3934 = *(i4*)(intptr_t)v3933;
	i8 v3935 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3935)(v3934, v3931, v3930);

endsub:;
}
const i1 c02_s013d[] = { 0x2f,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_20 workspace at ws+4224 length ws+0
void f212_emit_20(void) {

	i1 v3936 = (i1)+8;
	i8 v3937 = (i8)(intptr_t)c02_s013d;
	i8 v3938 = (i8)(intptr_t)(ws+4168);
	i8 v3939 = *(i8*)(intptr_t)v3938;
	i4 v3940 = *(i4*)(intptr_t)v3939;
	i8 v3941 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3941)(v3940, v3937, v3936);

endsub:;
}
const i1 c02_s013e[] = { 0x25,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_21 workspace at ws+4224 length ws+0
void f213_emit_21(void) {

	i1 v3942 = (i1)+1;
	i8 v3943 = (i8)(intptr_t)c02_s013e;
	i8 v3944 = (i8)(intptr_t)(ws+4168);
	i8 v3945 = *(i8*)(intptr_t)v3944;
	i4 v3946 = *(i4*)(intptr_t)v3945;
	i8 v3947 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3947)(v3946, v3943, v3942);

endsub:;
}
const i1 c02_s013f[] = { 0x25,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_22 workspace at ws+4224 length ws+0
void f214_emit_22(void) {

	i1 v3948 = (i1)+2;
	i8 v3949 = (i8)(intptr_t)c02_s013f;
	i8 v3950 = (i8)(intptr_t)(ws+4168);
	i8 v3951 = *(i8*)(intptr_t)v3950;
	i4 v3952 = *(i4*)(intptr_t)v3951;
	i8 v3953 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3953)(v3952, v3949, v3948);

endsub:;
}
const i1 c02_s0140[] = { 0x25,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_23 workspace at ws+4224 length ws+0
void f215_emit_23(void) {

	i1 v3954 = (i1)+4;
	i8 v3955 = (i8)(intptr_t)c02_s0140;
	i8 v3956 = (i8)(intptr_t)(ws+4168);
	i8 v3957 = *(i8*)(intptr_t)v3956;
	i4 v3958 = *(i4*)(intptr_t)v3957;
	i8 v3959 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3959)(v3958, v3955, v3954);

endsub:;
}
const i1 c02_s0141[] = { 0x25,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_24 workspace at ws+4224 length ws+0
void f216_emit_24(void) {

	i1 v3960 = (i1)+8;
	i8 v3961 = (i8)(intptr_t)c02_s0141;
	i8 v3962 = (i8)(intptr_t)(ws+4168);
	i8 v3963 = *(i8*)(intptr_t)v3962;
	i4 v3964 = *(i4*)(intptr_t)v3963;
	i8 v3965 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3965)(v3964, v3961, v3960);

endsub:;
}
const i1 c02_s0142[] = { 0x2f,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_25 workspace at ws+4224 length ws+0
void f217_emit_25(void) {

	i1 v3966 = (i1)+1;
	i8 v3967 = (i8)(intptr_t)c02_s0142;
	i8 v3968 = (i8)(intptr_t)(ws+4168);
	i8 v3969 = *(i8*)(intptr_t)v3968;
	i4 v3970 = *(i4*)(intptr_t)v3969;
	i8 v3971 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3971)(v3970, v3967, v3966);

endsub:;
}
const i1 c02_s0143[] = { 0x2f,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_26 workspace at ws+4224 length ws+0
void f218_emit_26(void) {

	i1 v3972 = (i1)+2;
	i8 v3973 = (i8)(intptr_t)c02_s0143;
	i8 v3974 = (i8)(intptr_t)(ws+4168);
	i8 v3975 = *(i8*)(intptr_t)v3974;
	i4 v3976 = *(i4*)(intptr_t)v3975;
	i8 v3977 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3977)(v3976, v3973, v3972);

endsub:;
}
const i1 c02_s0144[] = { 0x2f,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_27 workspace at ws+4224 length ws+0
void f219_emit_27(void) {

	i1 v3978 = (i1)+4;
	i8 v3979 = (i8)(intptr_t)c02_s0144;
	i8 v3980 = (i8)(intptr_t)(ws+4168);
	i8 v3981 = *(i8*)(intptr_t)v3980;
	i4 v3982 = *(i4*)(intptr_t)v3981;
	i8 v3983 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3983)(v3982, v3979, v3978);

endsub:;
}
const i1 c02_s0145[] = { 0x2f,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_28 workspace at ws+4224 length ws+0
void f220_emit_28(void) {

	i1 v3984 = (i1)+8;
	i8 v3985 = (i8)(intptr_t)c02_s0145;
	i8 v3986 = (i8)(intptr_t)(ws+4168);
	i8 v3987 = *(i8*)(intptr_t)v3986;
	i4 v3988 = *(i4*)(intptr_t)v3987;
	i8 v3989 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3989)(v3988, v3985, v3984);

endsub:;
}
const i1 c02_s0146[] = { 0x25,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_29 workspace at ws+4224 length ws+0
void f221_emit_29(void) {

	i1 v3990 = (i1)+1;
	i8 v3991 = (i8)(intptr_t)c02_s0146;
	i8 v3992 = (i8)(intptr_t)(ws+4168);
	i8 v3993 = *(i8*)(intptr_t)v3992;
	i4 v3994 = *(i4*)(intptr_t)v3993;
	i8 v3995 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3995)(v3994, v3991, v3990);

endsub:;
}
const i1 c02_s0147[] = { 0x25,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_30 workspace at ws+4224 length ws+0
void f222_emit_30(void) {

	i1 v3996 = (i1)+2;
	i8 v3997 = (i8)(intptr_t)c02_s0147;
	i8 v3998 = (i8)(intptr_t)(ws+4168);
	i8 v3999 = *(i8*)(intptr_t)v3998;
	i4 v4000 = *(i4*)(intptr_t)v3999;
	i8 v4001 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4001)(v4000, v3997, v3996);

endsub:;
}
const i1 c02_s0148[] = { 0x25,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_31 workspace at ws+4224 length ws+0
void f223_emit_31(void) {

	i1 v4002 = (i1)+4;
	i8 v4003 = (i8)(intptr_t)c02_s0148;
	i8 v4004 = (i8)(intptr_t)(ws+4168);
	i8 v4005 = *(i8*)(intptr_t)v4004;
	i4 v4006 = *(i4*)(intptr_t)v4005;
	i8 v4007 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4007)(v4006, v4003, v4002);

endsub:;
}
const i1 c02_s0149[] = { 0x25,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_32 workspace at ws+4224 length ws+0
void f224_emit_32(void) {

	i1 v4008 = (i1)+8;
	i8 v4009 = (i8)(intptr_t)c02_s0149;
	i8 v4010 = (i8)(intptr_t)(ws+4168);
	i8 v4011 = *(i8*)(intptr_t)v4010;
	i4 v4012 = *(i4*)(intptr_t)v4011;
	i8 v4013 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4013)(v4012, v4009, v4008);

endsub:;
}
const i1 c02_s014a[] = { 0x26,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_33 workspace at ws+4224 length ws+0
void f225_emit_33(void) {

	i1 v4014 = (i1)+1;
	i8 v4015 = (i8)(intptr_t)c02_s014a;
	i8 v4016 = (i8)(intptr_t)(ws+4168);
	i8 v4017 = *(i8*)(intptr_t)v4016;
	i4 v4018 = *(i4*)(intptr_t)v4017;
	i8 v4019 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4019)(v4018, v4015, v4014);

endsub:;
}
const i1 c02_s014b[] = { 0x26,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_34 workspace at ws+4224 length ws+0
void f226_emit_34(void) {

	i1 v4020 = (i1)+2;
	i8 v4021 = (i8)(intptr_t)c02_s014b;
	i8 v4022 = (i8)(intptr_t)(ws+4168);
	i8 v4023 = *(i8*)(intptr_t)v4022;
	i4 v4024 = *(i4*)(intptr_t)v4023;
	i8 v4025 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4025)(v4024, v4021, v4020);

endsub:;
}
const i1 c02_s014c[] = { 0x26,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_35 workspace at ws+4224 length ws+0
void f227_emit_35(void) {

	i1 v4026 = (i1)+4;
	i8 v4027 = (i8)(intptr_t)c02_s014c;
	i8 v4028 = (i8)(intptr_t)(ws+4168);
	i8 v4029 = *(i8*)(intptr_t)v4028;
	i4 v4030 = *(i4*)(intptr_t)v4029;
	i8 v4031 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4031)(v4030, v4027, v4026);

endsub:;
}
const i1 c02_s014d[] = { 0x26,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_36 workspace at ws+4224 length ws+0
void f228_emit_36(void) {

	i1 v4032 = (i1)+8;
	i8 v4033 = (i8)(intptr_t)c02_s014d;
	i8 v4034 = (i8)(intptr_t)(ws+4168);
	i8 v4035 = *(i8*)(intptr_t)v4034;
	i4 v4036 = *(i4*)(intptr_t)v4035;
	i8 v4037 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4037)(v4036, v4033, v4032);

endsub:;
}
const i1 c02_s014e[] = { 0x7c,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_37 workspace at ws+4224 length ws+0
void f229_emit_37(void) {

	i1 v4038 = (i1)+1;
	i8 v4039 = (i8)(intptr_t)c02_s014e;
	i8 v4040 = (i8)(intptr_t)(ws+4168);
	i8 v4041 = *(i8*)(intptr_t)v4040;
	i4 v4042 = *(i4*)(intptr_t)v4041;
	i8 v4043 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4043)(v4042, v4039, v4038);

endsub:;
}
const i1 c02_s014f[] = { 0x7c,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_38 workspace at ws+4224 length ws+0
void f230_emit_38(void) {

	i1 v4044 = (i1)+2;
	i8 v4045 = (i8)(intptr_t)c02_s014f;
	i8 v4046 = (i8)(intptr_t)(ws+4168);
	i8 v4047 = *(i8*)(intptr_t)v4046;
	i4 v4048 = *(i4*)(intptr_t)v4047;
	i8 v4049 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4049)(v4048, v4045, v4044);

endsub:;
}
const i1 c02_s0150[] = { 0x7c,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_39 workspace at ws+4224 length ws+0
void f231_emit_39(void) {

	i1 v4050 = (i1)+4;
	i8 v4051 = (i8)(intptr_t)c02_s0150;
	i8 v4052 = (i8)(intptr_t)(ws+4168);
	i8 v4053 = *(i8*)(intptr_t)v4052;
	i4 v4054 = *(i4*)(intptr_t)v4053;
	i8 v4055 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4055)(v4054, v4051, v4050);

endsub:;
}
const i1 c02_s0151[] = { 0x7c,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_40 workspace at ws+4224 length ws+0
void f232_emit_40(void) {

	i1 v4056 = (i1)+8;
	i8 v4057 = (i8)(intptr_t)c02_s0151;
	i8 v4058 = (i8)(intptr_t)(ws+4168);
	i8 v4059 = *(i8*)(intptr_t)v4058;
	i4 v4060 = *(i4*)(intptr_t)v4059;
	i8 v4061 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4061)(v4060, v4057, v4056);

endsub:;
}
const i1 c02_s0152[] = { 0x5e,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_41 workspace at ws+4224 length ws+0
void f233_emit_41(void) {

	i1 v4062 = (i1)+1;
	i8 v4063 = (i8)(intptr_t)c02_s0152;
	i8 v4064 = (i8)(intptr_t)(ws+4168);
	i8 v4065 = *(i8*)(intptr_t)v4064;
	i4 v4066 = *(i4*)(intptr_t)v4065;
	i8 v4067 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4067)(v4066, v4063, v4062);

endsub:;
}
const i1 c02_s0153[] = { 0x5e,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_42 workspace at ws+4224 length ws+0
void f234_emit_42(void) {

	i1 v4068 = (i1)+2;
	i8 v4069 = (i8)(intptr_t)c02_s0153;
	i8 v4070 = (i8)(intptr_t)(ws+4168);
	i8 v4071 = *(i8*)(intptr_t)v4070;
	i4 v4072 = *(i4*)(intptr_t)v4071;
	i8 v4073 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4073)(v4072, v4069, v4068);

endsub:;
}
const i1 c02_s0154[] = { 0x5e,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_43 workspace at ws+4224 length ws+0
void f235_emit_43(void) {

	i1 v4074 = (i1)+4;
	i8 v4075 = (i8)(intptr_t)c02_s0154;
	i8 v4076 = (i8)(intptr_t)(ws+4168);
	i8 v4077 = *(i8*)(intptr_t)v4076;
	i4 v4078 = *(i4*)(intptr_t)v4077;
	i8 v4079 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4079)(v4078, v4075, v4074);

endsub:;
}
const i1 c02_s0155[] = { 0x5e,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_44 workspace at ws+4224 length ws+0
void f236_emit_44(void) {

	i1 v4080 = (i1)+8;
	i8 v4081 = (i8)(intptr_t)c02_s0155;
	i8 v4082 = (i8)(intptr_t)(ws+4168);
	i8 v4083 = *(i8*)(intptr_t)v4082;
	i4 v4084 = *(i4*)(intptr_t)v4083;
	i8 v4085 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v4085)(v4084, v4081, v4080);

endsub:;
}
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s0156[] = { 0x3a,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_47 workspace at ws+4224 length ws+0
void f237_emit_47(void) {

	i8 v4086 = (i8)(intptr_t)(ws+4136);
	i8 v4087 = *(i8*)(intptr_t)v4086;
	i2 v4088 = *(i2*)(intptr_t)v4087;
	i8 v4089 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v4089)(v4088);

	i8 v4090 = (i8)(intptr_t)c02_s0156;
	i8 v4091 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4091)(v4090);

endsub:;
}
const i1 c02_s0157[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s0158[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_48 workspace at ws+4224 length ws+0
void f238_emit_48(void) {

	i8 v4092 = (i8)(intptr_t)c02_s0157;
	i8 v4093 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4093)(v4092);

	i8 v4094 = (i8)(intptr_t)(ws+4136);
	i8 v4095 = *(i8*)(intptr_t)v4094;
	i2 v4096 = *(i2*)(intptr_t)v4095;
	i8 v4097 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v4097)(v4096);

	i8 v4098 = (i8)(intptr_t)c02_s0158;
	i8 v4099 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4099)(v4098);

endsub:;
}
const i1 c02_s0159[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_49 workspace at ws+4224 length ws+0
void f239_emit_49(void) {

	i8 v4100 = (i8)(intptr_t)c02_s0159;
	i8 v4101 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4101)(v4100);

endsub:;
}
	void f106_EmitterOpenStream(i8 /* subr */);
const i1 c02_s015a[] = { 0x0a,0x2f,0x2f,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s015b[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
const i1 c02_s015c[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
	void f83_E_b8(i1 /* byte */);
const i1 c02_s015d[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
	void f92_E(i8 /* text */);
	void f104_E_subref(i8 /* subr */);
const i1 c02_s015e[] = { 0x28,0 };
	void f92_E(i8 /* text */);
const i1 c02_s015f[] = { 0x2c,0x20,0 };
	void f92_E(i8 /* text */);

// comma workspace at ws+4288 length ws+0
void f241_comma(void) {

	i8 v4144 = (i8)(intptr_t)(ws+4224);
	i1 v4145 = *(i1*)(intptr_t)v4144;
	i1 v4146 = (i1)+0;
	if (v4145==v4146) goto c02_02df; else goto c02_02e0;

c02_02df:;

	i8 v4147 = (i8)(intptr_t)c02_s015f;
	i8 v4148 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4148)(v4147);

c02_02e0:;

c02_02dc:;

	i1 v4149 = (i1)+0;
	i8 v4150 = (i8)(intptr_t)(ws+4224);
	*(i1*)(intptr_t)v4150 = v4149;

endsub:;
}
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f162_Push(i2* /* vid */);
	void f241_comma(void);
const i1 c02_s0160[] = { 0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0161[] = { 0x2a,0x20,0x70,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0162[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s0163[] = { 0x20,0x2a,0x2f,0 };
	void f92_E(i8 /* text */);
	void f73_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f162_Push(i2* /* vid */);
	void f241_comma(void);
const i1 c02_s0164[] = { 0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0165[] = { 0x20,0x70,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0166[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s0167[] = { 0x20,0x2a,0x2f,0 };
	void f92_E(i8 /* text */);
const i1 c02_s0168[] = { 0x76,0x6f,0x69,0x64,0 };
	void f92_E(i8 /* text */);
const i1 c02_s0169[] = { 0x29,0x20,0x7b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f73_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s016a[] = { 0x09,0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s016b[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s016c[] = { 0x29,0x20,0x3d,0x20,0x70,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s016d[] = { 0x3b,0x20,0x2f,0x2a,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s016e[] = { 0x20,0x2a,0x2f,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_50 workspace at ws+4224 length ws+58
void f240_emit_50(void) {

	i8 v4102 = (i8)(intptr_t)(ws+40);
	i8 v4103 = *(i8*)(intptr_t)v4102;
	i8 v4104 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v4104)(v4103);

	i8 v4105 = (i8)(intptr_t)c02_s015a;
	i8 v4106 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4106)(v4105);

	i8 v4107 = (i8)(intptr_t)(ws+40);
	i8 v4108 = *(i8*)(intptr_t)v4107;
	i8 v4109 = *(i8*)(intptr_t)v4108;
	i8 v4110 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4110)(v4109);

	i8 v4111 = (i8)(intptr_t)c02_s015b;
	i8 v4112 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4112)(v4111);

	i1 v4113 = (i1)+2;
	i8 v4114 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4114)(v4113);

	i8 v4115 = (i8)(intptr_t)(ws+40);
	i8 v4116 = *(i8*)(intptr_t)v4115;
	i8 v4117 = v4116+(+8);
	i2 v4118 = *(i2*)(intptr_t)v4117;
	i8 v4119 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4119)(v4118);

	i1 v4120 = (i1)+0;
	i8 v4121 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4121)(v4120);

	i2 v4122 = (i2)+0;
	i8 v4123 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4123)(v4122);

	i8 v4124 = (i8)(intptr_t)c02_s015c;
	i8 v4125 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4125)(v4124);

	i1 v4126 = (i1)+5;
	i8 v4127 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4127)(v4126);

	i8 v4128 = (i8)(intptr_t)(ws+40);
	i8 v4129 = *(i8*)(intptr_t)v4128;
	i8 v4130 = v4129+(+8);
	i2 v4131 = *(i2*)(intptr_t)v4130;
	i8 v4132 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4132)(v4131);

	i1 v4133 = (i1)+0;
	i8 v4134 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4134)(v4133);

	i8 v4135 = (i8)(intptr_t)c02_s015d;
	i8 v4136 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4136)(v4135);

	i8 v4137 = (i8)(intptr_t)(ws+40);
	i8 v4138 = *(i8*)(intptr_t)v4137;
	i8 v4139 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v4139)(v4138);

	i8 v4140 = (i8)(intptr_t)c02_s015e;
	i8 v4141 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4141)(v4140);

	i1 v4142 = (i1)+1;
	i8 v4143 = (i8)(intptr_t)(ws+4224);
	*(i1*)(intptr_t)v4143 = v4142;


	i1 v4151 = (i1)+0;
	i8 v4152 = (i8)(intptr_t)(ws+4225);
	*(i1*)(intptr_t)v4152 = v4151;

c02_02e1:;

	i8 v4153 = (i8)(intptr_t)(ws+4225);
	i1 v4154 = *(i1*)(intptr_t)v4153;
	i8 v4155 = (i8)(intptr_t)(ws+40);
	i8 v4156 = *(i8*)(intptr_t)v4155;
	i8 v4157 = v4156+(+49);
	i1 v4158 = *(i1*)(intptr_t)v4157;
	if (v4154==v4158) goto c02_02e6; else goto c02_02e5;

c02_02e5:;

	i8 v4159 = (i8)(intptr_t)(ws+40);
	i8 v4160 = *(i8*)(intptr_t)v4159;
	i8 v4161 = (i8)(intptr_t)(ws+4225);
	i1 v4162 = *(i1*)(intptr_t)v4161;
	i8 v4163 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v4164;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4163)(&v4164, v4162, v4160);

	i8 v4165 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v4165 = v4164;

	i8 v4166 = (i8)(intptr_t)(ws+4232);
	i8 v4167 = *(i8*)(intptr_t)v4166;
	i8 v4168 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v4168 = v4167;

	i8 v4169 = (i8)(intptr_t)(f162_Push);
	i2 v4170;

	((void(*)(i2* /* vid */))(intptr_t)v4169)(&v4170);

	i8 v4171 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v4171 = v4170;

	i8 v4172 = (i8)(intptr_t)(ws+4248);
	i2 v4173 = *(i2*)(intptr_t)v4172;
	i8 v4174 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v4174 = v4173;

	i8 v4175 = (i8)(intptr_t)(f241_comma);

	((void(*)(void))(intptr_t)v4175)();

	i8 v4176 = (i8)(intptr_t)c02_s0160;
	i8 v4177 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4177)(v4176);

	i8 v4178 = (i8)(intptr_t)(ws+4240);
	i8 v4179 = *(i8*)(intptr_t)v4178;
	i8 v4180 = v4179+(+14);
	i1 v4181 = *(i1*)(intptr_t)v4180;
	i8 v4182 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4182)(v4181);

	i8 v4183 = (i8)(intptr_t)c02_s0161;
	i8 v4184 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4184)(v4183);

	i8 v4185 = (i8)(intptr_t)(ws+4250);
	i2 v4186 = *(i2*)(intptr_t)v4185;
	i8 v4187 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4187)(v4186);

	i8 v4188 = (i8)(intptr_t)c02_s0162;
	i8 v4189 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4189)(v4188);

	i8 v4190 = (i8)(intptr_t)(ws+4240);
	i8 v4191 = *(i8*)(intptr_t)v4190;
	i8 v4192 = v4191+(+16);
	i8 v4193 = *(i8*)(intptr_t)v4192;
	i8 v4194 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4194)(v4193);

	i8 v4195 = (i8)(intptr_t)c02_s0163;
	i8 v4196 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4196)(v4195);

	i8 v4197 = (i8)(intptr_t)(ws+4225);
	i1 v4198 = *(i1*)(intptr_t)v4197;
	i1 v4199 = v4198+(+1);
	i8 v4200 = (i8)(intptr_t)(ws+4225);
	*(i1*)(intptr_t)v4200 = v4199;

	goto c02_02e1;

c02_02e6:;

	i8 v4201 = (i8)(intptr_t)(ws+40);
	i8 v4202 = *(i8*)(intptr_t)v4201;
	i8 v4203 = v4202+(+48);
	i1 v4204 = *(i1*)(intptr_t)v4203;
	i8 v4205 = (i8)(intptr_t)(ws+4225);
	*(i1*)(intptr_t)v4205 = v4204;

c02_02e7:;

	i8 v4206 = (i8)(intptr_t)(ws+4225);
	i1 v4207 = *(i1*)(intptr_t)v4206;
	i1 v4208 = (i1)+0;
	if (v4207==v4208) goto c02_02ec; else goto c02_02eb;

c02_02eb:;

	i8 v4209 = (i8)(intptr_t)(ws+4225);
	i1 v4210 = *(i1*)(intptr_t)v4209;
	i1 v4211 = v4210+(-1);
	i8 v4212 = (i8)(intptr_t)(ws+4225);
	*(i1*)(intptr_t)v4212 = v4211;

	i8 v4213 = (i8)(intptr_t)(ws+40);
	i8 v4214 = *(i8*)(intptr_t)v4213;
	i8 v4215 = (i8)(intptr_t)(ws+4225);
	i1 v4216 = *(i1*)(intptr_t)v4215;
	i8 v4217 = (i8)(intptr_t)(f73_GetInputParameter);
	i8 v4218;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4217)(&v4218, v4216, v4214);

	i8 v4219 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v4219 = v4218;

	i8 v4220 = (i8)(intptr_t)(ws+4256);
	i8 v4221 = *(i8*)(intptr_t)v4220;
	i8 v4222 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v4222 = v4221;

	i8 v4223 = (i8)(intptr_t)(f162_Push);
	i2 v4224;

	((void(*)(i2* /* vid */))(intptr_t)v4223)(&v4224);

	i8 v4225 = (i8)(intptr_t)(ws+4264);
	*(i2*)(intptr_t)v4225 = v4224;

	i8 v4226 = (i8)(intptr_t)(ws+4264);
	i2 v4227 = *(i2*)(intptr_t)v4226;
	i8 v4228 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v4228 = v4227;

	i8 v4229 = (i8)(intptr_t)(f241_comma);

	((void(*)(void))(intptr_t)v4229)();

	i8 v4230 = (i8)(intptr_t)c02_s0164;
	i8 v4231 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4231)(v4230);

	i8 v4232 = (i8)(intptr_t)(ws+4240);
	i8 v4233 = *(i8*)(intptr_t)v4232;
	i8 v4234 = v4233+(+14);
	i1 v4235 = *(i1*)(intptr_t)v4234;
	i8 v4236 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4236)(v4235);

	i8 v4237 = (i8)(intptr_t)c02_s0165;
	i8 v4238 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4238)(v4237);

	i8 v4239 = (i8)(intptr_t)(ws+4250);
	i2 v4240 = *(i2*)(intptr_t)v4239;
	i8 v4241 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4241)(v4240);

	i8 v4242 = (i8)(intptr_t)c02_s0166;
	i8 v4243 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4243)(v4242);

	i8 v4244 = (i8)(intptr_t)(ws+4240);
	i8 v4245 = *(i8*)(intptr_t)v4244;
	i8 v4246 = v4245+(+16);
	i8 v4247 = *(i8*)(intptr_t)v4246;
	i8 v4248 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4248)(v4247);

	i8 v4249 = (i8)(intptr_t)c02_s0167;
	i8 v4250 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4250)(v4249);

	goto c02_02e7;

c02_02ec:;

	i8 v4251 = (i8)(intptr_t)(ws+40);
	i8 v4252 = *(i8*)(intptr_t)v4251;
	i8 v4253 = v4252+(+48);
	i1 v4254 = *(i1*)(intptr_t)v4253;
	i8 v4255 = (i8)(intptr_t)(ws+40);
	i8 v4256 = *(i8*)(intptr_t)v4255;
	i8 v4257 = v4256+(+49);
	i1 v4258 = *(i1*)(intptr_t)v4257;
	i1 v4259 = v4254+v4258;
	i1 v4260 = (i1)+0;
	if (v4259==v4260) goto c02_02f0; else goto c02_02f1;

c02_02f0:;

	i8 v4261 = (i8)(intptr_t)c02_s0168;
	i8 v4262 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4262)(v4261);

c02_02f1:;

c02_02ed:;

	i8 v4263 = (i8)(intptr_t)c02_s0169;
	i8 v4264 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4264)(v4263);

	i1 v4265 = (i1)+0;
	i8 v4266 = (i8)(intptr_t)(ws+4225);
	*(i1*)(intptr_t)v4266 = v4265;

c02_02f2:;

	i8 v4267 = (i8)(intptr_t)(ws+4225);
	i1 v4268 = *(i1*)(intptr_t)v4267;
	i8 v4269 = (i8)(intptr_t)(ws+40);
	i8 v4270 = *(i8*)(intptr_t)v4269;
	i8 v4271 = v4270+(+48);
	i1 v4272 = *(i1*)(intptr_t)v4271;
	if (v4268==v4272) goto c02_02f7; else goto c02_02f6;

c02_02f6:;

	i8 v4273 = (i8)(intptr_t)(ws+40);
	i8 v4274 = *(i8*)(intptr_t)v4273;
	i8 v4275 = (i8)(intptr_t)(ws+4225);
	i1 v4276 = *(i1*)(intptr_t)v4275;
	i8 v4277 = (i8)(intptr_t)(f73_GetInputParameter);
	i8 v4278;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4277)(&v4278, v4276, v4274);

	i8 v4279 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v4279 = v4278;

	i8 v4280 = (i8)(intptr_t)(ws+4272);
	i8 v4281 = *(i8*)(intptr_t)v4280;
	i8 v4282 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v4282 = v4281;

	i8 v4283 = (i8)(intptr_t)(f164_Pop);
	i2 v4284;

	((void(*)(i2* /* vid */))(intptr_t)v4283)(&v4284);

	i8 v4285 = (i8)(intptr_t)(ws+4280);
	*(i2*)(intptr_t)v4285 = v4284;

	i8 v4286 = (i8)(intptr_t)(ws+4280);
	i2 v4287 = *(i2*)(intptr_t)v4286;
	i8 v4288 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v4288 = v4287;

	i8 v4289 = (i8)(intptr_t)c02_s016a;
	i8 v4290 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4290)(v4289);

	i8 v4291 = (i8)(intptr_t)(ws+4240);
	i8 v4292 = *(i8*)(intptr_t)v4291;
	i8 v4293 = v4292+(+14);
	i1 v4294 = *(i1*)(intptr_t)v4293;
	i8 v4295 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4295)(v4294);

	i8 v4296 = (i8)(intptr_t)c02_s016b;
	i8 v4297 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4297)(v4296);

	i8 v4298 = (i8)(intptr_t)(ws+4240);
	i8 v4299 = *(i8*)(intptr_t)v4298;
	i2 v4300 = (i2)+0;
	i8 v4301 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4301)(v4300, v4299);

	i8 v4302 = (i8)(intptr_t)c02_s016c;
	i8 v4303 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4303)(v4302);

	i8 v4304 = (i8)(intptr_t)(ws+4250);
	i2 v4305 = *(i2*)(intptr_t)v4304;
	i8 v4306 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4306)(v4305);

	i8 v4307 = (i8)(intptr_t)c02_s016d;
	i8 v4308 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4308)(v4307);

	i8 v4309 = (i8)(intptr_t)(ws+4240);
	i8 v4310 = *(i8*)(intptr_t)v4309;
	i8 v4311 = v4310+(+16);
	i8 v4312 = *(i8*)(intptr_t)v4311;
	i8 v4313 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4313)(v4312);

	i8 v4314 = (i8)(intptr_t)c02_s016e;
	i8 v4315 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4315)(v4314);

	i8 v4316 = (i8)(intptr_t)(ws+4225);
	i1 v4317 = *(i1*)(intptr_t)v4316;
	i1 v4318 = v4317+(+1);
	i8 v4319 = (i8)(intptr_t)(ws+4225);
	*(i1*)(intptr_t)v4319 = v4318;

	goto c02_02f2;

c02_02f7:;

endsub:;
}
const i1 c02_s016f[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s0170[] = { 0x09,0x2a,0x70,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0171[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0172[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0173[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
const i1 c02_s0174[] = { 0x7d,0x0a,0 };
	void f92_E(i8 /* text */);
	void f107_EmitterCloseStream(void);

// emit_51 workspace at ws+4224 length ws+28
void f242_emit_51(void) {

	i8 v4320 = (i8)(intptr_t)c02_s016f;
	i8 v4321 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4321)(v4320);

	i8 v4322 = (i8)(intptr_t)(ws+40);
	i8 v4323 = *(i8*)(intptr_t)v4322;
	i8 v4324 = v4323+(+49);
	i1 v4325 = *(i1*)(intptr_t)v4324;
	i8 v4326 = (i8)(intptr_t)(ws+4224);
	*(i1*)(intptr_t)v4326 = v4325;

c02_02f8:;

	i8 v4327 = (i8)(intptr_t)(ws+4224);
	i1 v4328 = *(i1*)(intptr_t)v4327;
	i1 v4329 = (i1)+0;
	if (v4328==v4329) goto c02_02fd; else goto c02_02fc;

c02_02fc:;

	i8 v4330 = (i8)(intptr_t)(ws+4224);
	i1 v4331 = *(i1*)(intptr_t)v4330;
	i1 v4332 = v4331+(-1);
	i8 v4333 = (i8)(intptr_t)(ws+4224);
	*(i1*)(intptr_t)v4333 = v4332;

	i8 v4334 = (i8)(intptr_t)(ws+40);
	i8 v4335 = *(i8*)(intptr_t)v4334;
	i8 v4336 = (i8)(intptr_t)(ws+4224);
	i1 v4337 = *(i1*)(intptr_t)v4336;
	i8 v4338 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v4339;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4338)(&v4339, v4337, v4335);

	i8 v4340 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v4340 = v4339;

	i8 v4341 = (i8)(intptr_t)(ws+4232);
	i8 v4342 = *(i8*)(intptr_t)v4341;
	i8 v4343 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v4343 = v4342;

	i8 v4344 = (i8)(intptr_t)(f164_Pop);
	i2 v4345;

	((void(*)(i2* /* vid */))(intptr_t)v4344)(&v4345);

	i8 v4346 = (i8)(intptr_t)(ws+4248);
	*(i2*)(intptr_t)v4346 = v4345;

	i8 v4347 = (i8)(intptr_t)(ws+4248);
	i2 v4348 = *(i2*)(intptr_t)v4347;
	i8 v4349 = (i8)(intptr_t)(ws+4250);
	*(i2*)(intptr_t)v4349 = v4348;

	i8 v4350 = (i8)(intptr_t)c02_s0170;
	i8 v4351 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4351)(v4350);

	i8 v4352 = (i8)(intptr_t)(ws+4250);
	i2 v4353 = *(i2*)(intptr_t)v4352;
	i8 v4354 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4354)(v4353);

	i8 v4355 = (i8)(intptr_t)c02_s0171;
	i8 v4356 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4356)(v4355);

	i8 v4357 = (i8)(intptr_t)(ws+4240);
	i8 v4358 = *(i8*)(intptr_t)v4357;
	i8 v4359 = v4358+(+14);
	i1 v4360 = *(i1*)(intptr_t)v4359;
	i8 v4361 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4361)(v4360);

	i8 v4362 = (i8)(intptr_t)c02_s0172;
	i8 v4363 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4363)(v4362);

	i8 v4364 = (i8)(intptr_t)(ws+4240);
	i8 v4365 = *(i8*)(intptr_t)v4364;
	i2 v4366 = (i2)+0;
	i8 v4367 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4367)(v4366, v4365);

	i8 v4368 = (i8)(intptr_t)c02_s0173;
	i8 v4369 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4369)(v4368);

	goto c02_02f8;

c02_02fd:;

	i8 v4370 = (i8)(intptr_t)c02_s0174;
	i8 v4371 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4371)(v4370);

	i8 v4372 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v4372)();

endsub:;
}
	void f169_Call(i2 /* subrid */);

// emit_52 workspace at ws+4224 length ws+0
void f243_emit_52(void) {

	i8 v4373 = (i8)(intptr_t)(ws+4136);
	i8 v4374 = *(i8*)(intptr_t)v4373;
	i8 v4375 = *(i8*)(intptr_t)v4374;
	i8 v4376 = v4375+(+8);
	i2 v4377 = *(i2*)(intptr_t)v4376;
	i8 v4378 = (i8)(intptr_t)(f169_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v4378)(v4377);

endsub:;
}
	void f171_LoadConstant(i4 /* value */, i1 /* width */);

// emit_62 workspace at ws+4224 length ws+0
void f244_emit_62(void) {

	i1 v4379 = (i1)+1;
	i8 v4380 = (i8)(intptr_t)(ws+4136);
	i8 v4381 = *(i8*)(intptr_t)v4380;
	i4 v4382 = *(i4*)(intptr_t)v4381;
	i8 v4383 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v4383)(v4382, v4379);

endsub:;
}
	void f171_LoadConstant(i4 /* value */, i1 /* width */);

// emit_63 workspace at ws+4224 length ws+0
void f245_emit_63(void) {

	i1 v4384 = (i1)+2;
	i8 v4385 = (i8)(intptr_t)(ws+4136);
	i8 v4386 = *(i8*)(intptr_t)v4385;
	i4 v4387 = *(i4*)(intptr_t)v4386;
	i8 v4388 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v4388)(v4387, v4384);

endsub:;
}
	void f171_LoadConstant(i4 /* value */, i1 /* width */);

// emit_64 workspace at ws+4224 length ws+0
void f246_emit_64(void) {

	i1 v4389 = (i1)+4;
	i8 v4390 = (i8)(intptr_t)(ws+4136);
	i8 v4391 = *(i8*)(intptr_t)v4390;
	i4 v4392 = *(i4*)(intptr_t)v4391;
	i8 v4393 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v4393)(v4392, v4389);

endsub:;
}
	void f171_LoadConstant(i4 /* value */, i1 /* width */);

// emit_65 workspace at ws+4224 length ws+0
void f247_emit_65(void) {

	i1 v4394 = (i1)+8;
	i8 v4395 = (i8)(intptr_t)(ws+4136);
	i8 v4396 = *(i8*)(intptr_t)v4395;
	i4 v4397 = *(i4*)(intptr_t)v4396;
	i8 v4398 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v4398)(v4397, v4394);

endsub:;
}
	void f162_Push(i2* /* vid */);
const i1 c02_s0175[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0176[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0177[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_66 workspace at ws+4224 length ws+4
void f248_emit_66(void) {

	i8 v4399 = (i8)(intptr_t)(f162_Push);
	i2 v4400;

	((void(*)(i2* /* vid */))(intptr_t)v4399)(&v4400);

	i8 v4401 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v4401 = v4400;

	i8 v4402 = (i8)(intptr_t)(ws+4224);
	i2 v4403 = *(i2*)(intptr_t)v4402;
	i8 v4404 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v4404 = v4403;

	i8 v4405 = (i8)(intptr_t)c02_s0175;
	i8 v4406 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4406)(v4405);

	i8 v4407 = (i8)(intptr_t)(ws+4226);
	i2 v4408 = *(i2*)(intptr_t)v4407;
	i8 v4409 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4409)(v4408);

	i8 v4410 = (i8)(intptr_t)c02_s0176;
	i8 v4411 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4411)(v4410);

	i8 v4412 = (i8)(intptr_t)(ws+4136);
	i8 v4413 = *(i8*)(intptr_t)v4412;
	i8 v4414 = (i8)(intptr_t)(ws+4136);
	i8 v4415 = *(i8*)(intptr_t)v4414;
	i8 v4416 = v4415+(+16);
	i2 v4417 = *(i2*)(intptr_t)v4416;
	i8 v4418 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4418)(v4417, v4413);

	i8 v4419 = (i8)(intptr_t)c02_s0177;
	i8 v4420 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4420)(v4419);

endsub:;
}
	void f162_Push(i2* /* vid */);
const i1 c02_s0178[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0179[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f157_E_subref_sig(i8 /* subr */);
const i1 c02_s017a[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_67 workspace at ws+4224 length ws+4
void f249_emit_67(void) {

	i8 v4421 = (i8)(intptr_t)(f162_Push);
	i2 v4422;

	((void(*)(i2* /* vid */))(intptr_t)v4421)(&v4422);

	i8 v4423 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v4423 = v4422;

	i8 v4424 = (i8)(intptr_t)(ws+4224);
	i2 v4425 = *(i2*)(intptr_t)v4424;
	i8 v4426 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v4426 = v4425;

	i8 v4427 = (i8)(intptr_t)c02_s0178;
	i8 v4428 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4428)(v4427);

	i8 v4429 = (i8)(intptr_t)(ws+4226);
	i2 v4430 = *(i2*)(intptr_t)v4429;
	i8 v4431 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4431)(v4430);

	i8 v4432 = (i8)(intptr_t)c02_s0179;
	i8 v4433 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4433)(v4432);

	i8 v4434 = (i8)(intptr_t)(ws+4136);
	i8 v4435 = *(i8*)(intptr_t)v4434;
	i8 v4436 = *(i8*)(intptr_t)v4435;
	i8 v4437 = (i8)(intptr_t)(f157_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4437)(v4436);

	i8 v4438 = (i8)(intptr_t)c02_s017a;
	i8 v4439 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4439)(v4438);

endsub:;
}
	void f173_LoadVV(i1 /* width */);

// emit_68 workspace at ws+4224 length ws+0
void f250_emit_68(void) {

	i1 v4440 = (i1)+1;
	i8 v4441 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v4441)(v4440);

endsub:;
}
	void f173_LoadVV(i1 /* width */);

// emit_69 workspace at ws+4224 length ws+0
void f251_emit_69(void) {

	i1 v4442 = (i1)+2;
	i8 v4443 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v4443)(v4442);

endsub:;
}
	void f173_LoadVV(i1 /* width */);

// emit_70 workspace at ws+4224 length ws+0
void f252_emit_70(void) {

	i1 v4444 = (i1)+4;
	i8 v4445 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v4445)(v4444);

endsub:;
}
	void f173_LoadVV(i1 /* width */);

// emit_71 workspace at ws+4224 length ws+0
void f253_emit_71(void) {

	i1 v4446 = (i1)+8;
	i8 v4447 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v4447)(v4446);

endsub:;
}
const i1 c02_s017b[] = { 0x2b,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_72 workspace at ws+4224 length ws+0
void f254_emit_72(void) {

	i1 v4448 = (i1)+1;
	i8 v4449 = (i8)(intptr_t)c02_s017b;
	i8 v4450 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4450)(v4449, v4448);

endsub:;
}
const i1 c02_s017c[] = { 0x2b,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_73 workspace at ws+4224 length ws+0
void f255_emit_73(void) {

	i1 v4451 = (i1)+2;
	i8 v4452 = (i8)(intptr_t)c02_s017c;
	i8 v4453 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4453)(v4452, v4451);

endsub:;
}
const i1 c02_s017d[] = { 0x2b,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_74 workspace at ws+4224 length ws+0
void f256_emit_74(void) {

	i1 v4454 = (i1)+4;
	i8 v4455 = (i8)(intptr_t)c02_s017d;
	i8 v4456 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4456)(v4455, v4454);

endsub:;
}
const i1 c02_s017e[] = { 0x2b,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_75 workspace at ws+4224 length ws+0
void f257_emit_75(void) {

	i1 v4457 = (i1)+8;
	i8 v4458 = (i8)(intptr_t)c02_s017e;
	i8 v4459 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4459)(v4458, v4457);

endsub:;
}
const i1 c02_s017f[] = { 0x2d,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_76 workspace at ws+4224 length ws+0
void f258_emit_76(void) {

	i1 v4460 = (i1)+1;
	i8 v4461 = (i8)(intptr_t)c02_s017f;
	i8 v4462 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4462)(v4461, v4460);

endsub:;
}
const i1 c02_s0180[] = { 0x2d,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_77 workspace at ws+4224 length ws+0
void f259_emit_77(void) {

	i1 v4463 = (i1)+2;
	i8 v4464 = (i8)(intptr_t)c02_s0180;
	i8 v4465 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4465)(v4464, v4463);

endsub:;
}
const i1 c02_s0181[] = { 0x2d,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_78 workspace at ws+4224 length ws+0
void f260_emit_78(void) {

	i1 v4466 = (i1)+4;
	i8 v4467 = (i8)(intptr_t)c02_s0181;
	i8 v4468 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4468)(v4467, v4466);

endsub:;
}
const i1 c02_s0182[] = { 0x2d,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_79 workspace at ws+4224 length ws+0
void f261_emit_79(void) {

	i1 v4469 = (i1)+8;
	i8 v4470 = (i8)(intptr_t)c02_s0182;
	i8 v4471 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4471)(v4470, v4469);

endsub:;
}
const i1 c02_s0183[] = { 0x2a,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_80 workspace at ws+4224 length ws+0
void f262_emit_80(void) {

	i1 v4472 = (i1)+1;
	i8 v4473 = (i8)(intptr_t)c02_s0183;
	i8 v4474 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4474)(v4473, v4472);

endsub:;
}
const i1 c02_s0184[] = { 0x2a,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_81 workspace at ws+4224 length ws+0
void f263_emit_81(void) {

	i1 v4475 = (i1)+2;
	i8 v4476 = (i8)(intptr_t)c02_s0184;
	i8 v4477 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4477)(v4476, v4475);

endsub:;
}
const i1 c02_s0185[] = { 0x2a,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_82 workspace at ws+4224 length ws+0
void f264_emit_82(void) {

	i1 v4478 = (i1)+4;
	i8 v4479 = (i8)(intptr_t)c02_s0185;
	i8 v4480 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4480)(v4479, v4478);

endsub:;
}
const i1 c02_s0186[] = { 0x2a,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_83 workspace at ws+4224 length ws+0
void f265_emit_83(void) {

	i1 v4481 = (i1)+8;
	i8 v4482 = (i8)(intptr_t)c02_s0186;
	i8 v4483 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4483)(v4482, v4481);

endsub:;
}
const i1 c02_s0187[] = { 0x2f,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_84 workspace at ws+4224 length ws+0
void f266_emit_84(void) {

	i1 v4484 = (i1)+1;
	i8 v4485 = (i8)(intptr_t)c02_s0187;
	i8 v4486 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4486)(v4485, v4484);

endsub:;
}
const i1 c02_s0188[] = { 0x2f,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_85 workspace at ws+4224 length ws+0
void f267_emit_85(void) {

	i1 v4487 = (i1)+2;
	i8 v4488 = (i8)(intptr_t)c02_s0188;
	i8 v4489 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4489)(v4488, v4487);

endsub:;
}
const i1 c02_s0189[] = { 0x2f,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_86 workspace at ws+4224 length ws+0
void f268_emit_86(void) {

	i1 v4490 = (i1)+4;
	i8 v4491 = (i8)(intptr_t)c02_s0189;
	i8 v4492 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4492)(v4491, v4490);

endsub:;
}
const i1 c02_s018a[] = { 0x2f,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_87 workspace at ws+4224 length ws+0
void f269_emit_87(void) {

	i1 v4493 = (i1)+8;
	i8 v4494 = (i8)(intptr_t)c02_s018a;
	i8 v4495 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4495)(v4494, v4493);

endsub:;
}
const i1 c02_s018b[] = { 0x25,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_88 workspace at ws+4224 length ws+0
void f270_emit_88(void) {

	i1 v4496 = (i1)+1;
	i8 v4497 = (i8)(intptr_t)c02_s018b;
	i8 v4498 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4498)(v4497, v4496);

endsub:;
}
const i1 c02_s018c[] = { 0x25,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_89 workspace at ws+4224 length ws+0
void f271_emit_89(void) {

	i1 v4499 = (i1)+2;
	i8 v4500 = (i8)(intptr_t)c02_s018c;
	i8 v4501 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4501)(v4500, v4499);

endsub:;
}
const i1 c02_s018d[] = { 0x25,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_90 workspace at ws+4224 length ws+0
void f272_emit_90(void) {

	i1 v4502 = (i1)+4;
	i8 v4503 = (i8)(intptr_t)c02_s018d;
	i8 v4504 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4504)(v4503, v4502);

endsub:;
}
const i1 c02_s018e[] = { 0x25,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_91 workspace at ws+4224 length ws+0
void f273_emit_91(void) {

	i1 v4505 = (i1)+8;
	i8 v4506 = (i8)(intptr_t)c02_s018e;
	i8 v4507 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4507)(v4506, v4505);

endsub:;
}
const i1 c02_s018f[] = { 0x2f,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_92 workspace at ws+4224 length ws+0
void f274_emit_92(void) {

	i1 v4508 = (i1)+1;
	i8 v4509 = (i8)(intptr_t)c02_s018f;
	i8 v4510 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4510)(v4509, v4508);

endsub:;
}
const i1 c02_s0190[] = { 0x2f,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_93 workspace at ws+4224 length ws+0
void f275_emit_93(void) {

	i1 v4511 = (i1)+2;
	i8 v4512 = (i8)(intptr_t)c02_s0190;
	i8 v4513 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4513)(v4512, v4511);

endsub:;
}
const i1 c02_s0191[] = { 0x2f,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_94 workspace at ws+4224 length ws+0
void f276_emit_94(void) {

	i1 v4514 = (i1)+4;
	i8 v4515 = (i8)(intptr_t)c02_s0191;
	i8 v4516 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4516)(v4515, v4514);

endsub:;
}
const i1 c02_s0192[] = { 0x2f,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_95 workspace at ws+4224 length ws+0
void f277_emit_95(void) {

	i1 v4517 = (i1)+8;
	i8 v4518 = (i8)(intptr_t)c02_s0192;
	i8 v4519 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4519)(v4518, v4517);

endsub:;
}
const i1 c02_s0193[] = { 0x25,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_96 workspace at ws+4224 length ws+0
void f278_emit_96(void) {

	i1 v4520 = (i1)+1;
	i8 v4521 = (i8)(intptr_t)c02_s0193;
	i8 v4522 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4522)(v4521, v4520);

endsub:;
}
const i1 c02_s0194[] = { 0x25,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_97 workspace at ws+4224 length ws+0
void f279_emit_97(void) {

	i1 v4523 = (i1)+2;
	i8 v4524 = (i8)(intptr_t)c02_s0194;
	i8 v4525 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4525)(v4524, v4523);

endsub:;
}
const i1 c02_s0195[] = { 0x25,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_98 workspace at ws+4224 length ws+0
void f280_emit_98(void) {

	i1 v4526 = (i1)+4;
	i8 v4527 = (i8)(intptr_t)c02_s0195;
	i8 v4528 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4528)(v4527, v4526);

endsub:;
}
const i1 c02_s0196[] = { 0x25,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_99 workspace at ws+4224 length ws+0
void f281_emit_99(void) {

	i1 v4529 = (i1)+8;
	i8 v4530 = (i8)(intptr_t)c02_s0196;
	i8 v4531 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4531)(v4530, v4529);

endsub:;
}
const i1 c02_s0197[] = { 0x26,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_100 workspace at ws+4224 length ws+0
void f282_emit_100(void) {

	i1 v4532 = (i1)+1;
	i8 v4533 = (i8)(intptr_t)c02_s0197;
	i8 v4534 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4534)(v4533, v4532);

endsub:;
}
const i1 c02_s0198[] = { 0x26,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_101 workspace at ws+4224 length ws+0
void f283_emit_101(void) {

	i1 v4535 = (i1)+2;
	i8 v4536 = (i8)(intptr_t)c02_s0198;
	i8 v4537 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4537)(v4536, v4535);

endsub:;
}
const i1 c02_s0199[] = { 0x26,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_102 workspace at ws+4224 length ws+0
void f284_emit_102(void) {

	i1 v4538 = (i1)+4;
	i8 v4539 = (i8)(intptr_t)c02_s0199;
	i8 v4540 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4540)(v4539, v4538);

endsub:;
}
const i1 c02_s019a[] = { 0x26,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_103 workspace at ws+4224 length ws+0
void f285_emit_103(void) {

	i1 v4541 = (i1)+8;
	i8 v4542 = (i8)(intptr_t)c02_s019a;
	i8 v4543 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4543)(v4542, v4541);

endsub:;
}
const i1 c02_s019b[] = { 0x7c,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_104 workspace at ws+4224 length ws+0
void f286_emit_104(void) {

	i1 v4544 = (i1)+1;
	i8 v4545 = (i8)(intptr_t)c02_s019b;
	i8 v4546 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4546)(v4545, v4544);

endsub:;
}
const i1 c02_s019c[] = { 0x7c,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_105 workspace at ws+4224 length ws+0
void f287_emit_105(void) {

	i1 v4547 = (i1)+2;
	i8 v4548 = (i8)(intptr_t)c02_s019c;
	i8 v4549 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4549)(v4548, v4547);

endsub:;
}
const i1 c02_s019d[] = { 0x7c,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_106 workspace at ws+4224 length ws+0
void f288_emit_106(void) {

	i1 v4550 = (i1)+4;
	i8 v4551 = (i8)(intptr_t)c02_s019d;
	i8 v4552 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4552)(v4551, v4550);

endsub:;
}
const i1 c02_s019e[] = { 0x7c,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_107 workspace at ws+4224 length ws+0
void f289_emit_107(void) {

	i1 v4553 = (i1)+8;
	i8 v4554 = (i8)(intptr_t)c02_s019e;
	i8 v4555 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4555)(v4554, v4553);

endsub:;
}
const i1 c02_s019f[] = { 0x5e,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_108 workspace at ws+4224 length ws+0
void f290_emit_108(void) {

	i1 v4556 = (i1)+1;
	i8 v4557 = (i8)(intptr_t)c02_s019f;
	i8 v4558 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4558)(v4557, v4556);

endsub:;
}
const i1 c02_s01a0[] = { 0x5e,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_109 workspace at ws+4224 length ws+0
void f291_emit_109(void) {

	i1 v4559 = (i1)+2;
	i8 v4560 = (i8)(intptr_t)c02_s01a0;
	i8 v4561 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4561)(v4560, v4559);

endsub:;
}
const i1 c02_s01a1[] = { 0x5e,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_110 workspace at ws+4224 length ws+0
void f292_emit_110(void) {

	i1 v4562 = (i1)+4;
	i8 v4563 = (i8)(intptr_t)c02_s01a1;
	i8 v4564 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4564)(v4563, v4562);

endsub:;
}
const i1 c02_s01a2[] = { 0x5e,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_111 workspace at ws+4224 length ws+0
void f293_emit_111(void) {

	i1 v4565 = (i1)+8;
	i8 v4566 = (i8)(intptr_t)c02_s01a2;
	i8 v4567 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4567)(v4566, v4565);

endsub:;
}
const i1 c02_s01a3[] = { 0x2d,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_112 workspace at ws+4224 length ws+0
void f294_emit_112(void) {

	i1 v4568 = (i1)+1;
	i8 v4569 = (i8)(intptr_t)c02_s01a3;
	i8 v4570 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4570)(v4569, v4568);

endsub:;
}
const i1 c02_s01a4[] = { 0x2d,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_113 workspace at ws+4224 length ws+0
void f295_emit_113(void) {

	i1 v4571 = (i1)+2;
	i8 v4572 = (i8)(intptr_t)c02_s01a4;
	i8 v4573 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4573)(v4572, v4571);

endsub:;
}
const i1 c02_s01a5[] = { 0x2d,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_114 workspace at ws+4224 length ws+0
void f296_emit_114(void) {

	i1 v4574 = (i1)+4;
	i8 v4575 = (i8)(intptr_t)c02_s01a5;
	i8 v4576 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4576)(v4575, v4574);

endsub:;
}
const i1 c02_s01a6[] = { 0x2d,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_115 workspace at ws+4224 length ws+0
void f297_emit_115(void) {

	i1 v4577 = (i1)+8;
	i8 v4578 = (i8)(intptr_t)c02_s01a6;
	i8 v4579 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4579)(v4578, v4577);

endsub:;
}
const i1 c02_s01a7[] = { 0x7e,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_116 workspace at ws+4224 length ws+0
void f298_emit_116(void) {

	i1 v4580 = (i1)+1;
	i8 v4581 = (i8)(intptr_t)c02_s01a7;
	i8 v4582 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4582)(v4581, v4580);

endsub:;
}
const i1 c02_s01a8[] = { 0x7e,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_117 workspace at ws+4224 length ws+0
void f299_emit_117(void) {

	i1 v4583 = (i1)+2;
	i8 v4584 = (i8)(intptr_t)c02_s01a8;
	i8 v4585 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4585)(v4584, v4583);

endsub:;
}
const i1 c02_s01a9[] = { 0x7e,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_118 workspace at ws+4224 length ws+0
void f300_emit_118(void) {

	i1 v4586 = (i1)+4;
	i8 v4587 = (i8)(intptr_t)c02_s01a9;
	i8 v4588 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4588)(v4587, v4586);

endsub:;
}
const i1 c02_s01aa[] = { 0x7e,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_119 workspace at ws+4224 length ws+0
void f301_emit_119(void) {

	i1 v4589 = (i1)+8;
	i8 v4590 = (i8)(intptr_t)c02_s01aa;
	i8 v4591 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4591)(v4590, v4589);

endsub:;
}
const i1 c02_s01ab[] = { 0x69,0x31,0 };
const i1 c02_s01ac[] = { 0x3c,0x3c,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_120 workspace at ws+4224 length ws+0
void f302_emit_120(void) {

	i1 v4592 = (i1)+1;
	i8 v4593 = (i8)(intptr_t)c02_s01ab;
	i8 v4594 = (i8)(intptr_t)c02_s01ac;
	i8 v4595 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4595)(v4594, v4593, v4592);

endsub:;
}
const i1 c02_s01ad[] = { 0x69,0x32,0 };
const i1 c02_s01ae[] = { 0x3c,0x3c,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_121 workspace at ws+4224 length ws+0
void f303_emit_121(void) {

	i1 v4596 = (i1)+2;
	i8 v4597 = (i8)(intptr_t)c02_s01ad;
	i8 v4598 = (i8)(intptr_t)c02_s01ae;
	i8 v4599 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4599)(v4598, v4597, v4596);

endsub:;
}
const i1 c02_s01af[] = { 0x69,0x34,0 };
const i1 c02_s01b0[] = { 0x3c,0x3c,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_122 workspace at ws+4224 length ws+0
void f304_emit_122(void) {

	i1 v4600 = (i1)+4;
	i8 v4601 = (i8)(intptr_t)c02_s01af;
	i8 v4602 = (i8)(intptr_t)c02_s01b0;
	i8 v4603 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4603)(v4602, v4601, v4600);

endsub:;
}
const i1 c02_s01b1[] = { 0x69,0x38,0 };
const i1 c02_s01b2[] = { 0x3c,0x3c,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_123 workspace at ws+4224 length ws+0
void f305_emit_123(void) {

	i1 v4604 = (i1)+8;
	i8 v4605 = (i8)(intptr_t)c02_s01b1;
	i8 v4606 = (i8)(intptr_t)c02_s01b2;
	i8 v4607 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4607)(v4606, v4605, v4604);

endsub:;
}
const i1 c02_s01b3[] = { 0x69,0x31,0 };
const i1 c02_s01b4[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_124 workspace at ws+4224 length ws+0
void f306_emit_124(void) {

	i1 v4608 = (i1)+1;
	i8 v4609 = (i8)(intptr_t)c02_s01b3;
	i8 v4610 = (i8)(intptr_t)c02_s01b4;
	i8 v4611 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4611)(v4610, v4609, v4608);

endsub:;
}
const i1 c02_s01b5[] = { 0x69,0x32,0 };
const i1 c02_s01b6[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_125 workspace at ws+4224 length ws+0
void f307_emit_125(void) {

	i1 v4612 = (i1)+2;
	i8 v4613 = (i8)(intptr_t)c02_s01b5;
	i8 v4614 = (i8)(intptr_t)c02_s01b6;
	i8 v4615 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4615)(v4614, v4613, v4612);

endsub:;
}
const i1 c02_s01b7[] = { 0x69,0x34,0 };
const i1 c02_s01b8[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_126 workspace at ws+4224 length ws+0
void f308_emit_126(void) {

	i1 v4616 = (i1)+4;
	i8 v4617 = (i8)(intptr_t)c02_s01b7;
	i8 v4618 = (i8)(intptr_t)c02_s01b8;
	i8 v4619 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4619)(v4618, v4617, v4616);

endsub:;
}
const i1 c02_s01b9[] = { 0x69,0x38,0 };
const i1 c02_s01ba[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_127 workspace at ws+4224 length ws+0
void f309_emit_127(void) {

	i1 v4620 = (i1)+8;
	i8 v4621 = (i8)(intptr_t)c02_s01b9;
	i8 v4622 = (i8)(intptr_t)c02_s01ba;
	i8 v4623 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4623)(v4622, v4621, v4620);

endsub:;
}
const i1 c02_s01bb[] = { 0x73,0x31,0 };
const i1 c02_s01bc[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_128 workspace at ws+4224 length ws+0
void f310_emit_128(void) {

	i1 v4624 = (i1)+1;
	i8 v4625 = (i8)(intptr_t)c02_s01bb;
	i8 v4626 = (i8)(intptr_t)c02_s01bc;
	i8 v4627 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4627)(v4626, v4625, v4624);

endsub:;
}
const i1 c02_s01bd[] = { 0x73,0x32,0 };
const i1 c02_s01be[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_129 workspace at ws+4224 length ws+0
void f311_emit_129(void) {

	i1 v4628 = (i1)+2;
	i8 v4629 = (i8)(intptr_t)c02_s01bd;
	i8 v4630 = (i8)(intptr_t)c02_s01be;
	i8 v4631 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4631)(v4630, v4629, v4628);

endsub:;
}
const i1 c02_s01bf[] = { 0x73,0x34,0 };
const i1 c02_s01c0[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_130 workspace at ws+4224 length ws+0
void f312_emit_130(void) {

	i1 v4632 = (i1)+4;
	i8 v4633 = (i8)(intptr_t)c02_s01bf;
	i8 v4634 = (i8)(intptr_t)c02_s01c0;
	i8 v4635 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4635)(v4634, v4633, v4632);

endsub:;
}
const i1 c02_s01c1[] = { 0x73,0x38,0 };
const i1 c02_s01c2[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_131 workspace at ws+4224 length ws+0
void f313_emit_131(void) {

	i1 v4636 = (i1)+8;
	i8 v4637 = (i8)(intptr_t)c02_s01c1;
	i8 v4638 = (i8)(intptr_t)c02_s01c2;
	i8 v4639 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4639)(v4638, v4637, v4636);

endsub:;
}
const i1 c02_s01c3[] = { 0x3d,0x3d,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_132 workspace at ws+4224 length ws+0
void f314_emit_132(void) {

	i8 v4640 = (i8)(intptr_t)(ws+4128);
	i8 v4641 = *(i8*)(intptr_t)v4640;
	i8 v4642 = v4641+(+16);
	i8 v4643 = *(i8*)(intptr_t)v4642;
	i8 v4644 = (i8)(intptr_t)c02_s01c3;
	i8 v4645 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4645)(v4644, v4643);

endsub:;
}
const i1 c02_s01c4[] = { 0x3d,0x3d,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_133 workspace at ws+4224 length ws+0
void f315_emit_133(void) {

	i8 v4646 = (i8)(intptr_t)(ws+4128);
	i8 v4647 = *(i8*)(intptr_t)v4646;
	i8 v4648 = v4647+(+16);
	i8 v4649 = *(i8*)(intptr_t)v4648;
	i8 v4650 = (i8)(intptr_t)c02_s01c4;
	i8 v4651 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4651)(v4650, v4649);

endsub:;
}
const i1 c02_s01c5[] = { 0x3d,0x3d,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_134 workspace at ws+4224 length ws+0
void f316_emit_134(void) {

	i8 v4652 = (i8)(intptr_t)(ws+4128);
	i8 v4653 = *(i8*)(intptr_t)v4652;
	i8 v4654 = v4653+(+16);
	i8 v4655 = *(i8*)(intptr_t)v4654;
	i8 v4656 = (i8)(intptr_t)c02_s01c5;
	i8 v4657 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4657)(v4656, v4655);

endsub:;
}
const i1 c02_s01c6[] = { 0x3d,0x3d,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_135 workspace at ws+4224 length ws+0
void f317_emit_135(void) {

	i8 v4658 = (i8)(intptr_t)(ws+4128);
	i8 v4659 = *(i8*)(intptr_t)v4658;
	i8 v4660 = v4659+(+16);
	i8 v4661 = *(i8*)(intptr_t)v4660;
	i8 v4662 = (i8)(intptr_t)c02_s01c6;
	i8 v4663 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4663)(v4662, v4661);

endsub:;
}
const i1 c02_s01c7[] = { 0x3c,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_136 workspace at ws+4224 length ws+0
void f318_emit_136(void) {

	i8 v4664 = (i8)(intptr_t)(ws+4128);
	i8 v4665 = *(i8*)(intptr_t)v4664;
	i8 v4666 = v4665+(+16);
	i8 v4667 = *(i8*)(intptr_t)v4666;
	i8 v4668 = (i8)(intptr_t)c02_s01c7;
	i8 v4669 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4669)(v4668, v4667);

endsub:;
}
const i1 c02_s01c8[] = { 0x3c,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_137 workspace at ws+4224 length ws+0
void f319_emit_137(void) {

	i8 v4670 = (i8)(intptr_t)(ws+4128);
	i8 v4671 = *(i8*)(intptr_t)v4670;
	i8 v4672 = v4671+(+16);
	i8 v4673 = *(i8*)(intptr_t)v4672;
	i8 v4674 = (i8)(intptr_t)c02_s01c8;
	i8 v4675 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4675)(v4674, v4673);

endsub:;
}
const i1 c02_s01c9[] = { 0x3c,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_138 workspace at ws+4224 length ws+0
void f320_emit_138(void) {

	i8 v4676 = (i8)(intptr_t)(ws+4128);
	i8 v4677 = *(i8*)(intptr_t)v4676;
	i8 v4678 = v4677+(+16);
	i8 v4679 = *(i8*)(intptr_t)v4678;
	i8 v4680 = (i8)(intptr_t)c02_s01c9;
	i8 v4681 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4681)(v4680, v4679);

endsub:;
}
const i1 c02_s01ca[] = { 0x3c,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_139 workspace at ws+4224 length ws+0
void f321_emit_139(void) {

	i8 v4682 = (i8)(intptr_t)(ws+4128);
	i8 v4683 = *(i8*)(intptr_t)v4682;
	i8 v4684 = v4683+(+16);
	i8 v4685 = *(i8*)(intptr_t)v4684;
	i8 v4686 = (i8)(intptr_t)c02_s01ca;
	i8 v4687 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4687)(v4686, v4685);

endsub:;
}
const i1 c02_s01cb[] = { 0x3c,0 };
	void f181_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_140 workspace at ws+4224 length ws+0
void f322_emit_140(void) {

	i8 v4688 = (i8)(intptr_t)(ws+4128);
	i8 v4689 = *(i8*)(intptr_t)v4688;
	i8 v4690 = v4689+(+16);
	i8 v4691 = *(i8*)(intptr_t)v4690;
	i1 v4692 = (i1)+1;
	i8 v4693 = (i8)(intptr_t)c02_s01cb;
	i8 v4694 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4694)(v4693, v4692, v4691);

endsub:;
}
const i1 c02_s01cc[] = { 0x3c,0 };
	void f181_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_141 workspace at ws+4224 length ws+0
void f323_emit_141(void) {

	i8 v4695 = (i8)(intptr_t)(ws+4128);
	i8 v4696 = *(i8*)(intptr_t)v4695;
	i8 v4697 = v4696+(+16);
	i8 v4698 = *(i8*)(intptr_t)v4697;
	i1 v4699 = (i1)+2;
	i8 v4700 = (i8)(intptr_t)c02_s01cc;
	i8 v4701 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4701)(v4700, v4699, v4698);

endsub:;
}
const i1 c02_s01cd[] = { 0x3c,0 };
	void f181_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_142 workspace at ws+4224 length ws+0
void f324_emit_142(void) {

	i8 v4702 = (i8)(intptr_t)(ws+4128);
	i8 v4703 = *(i8*)(intptr_t)v4702;
	i8 v4704 = v4703+(+16);
	i8 v4705 = *(i8*)(intptr_t)v4704;
	i1 v4706 = (i1)+4;
	i8 v4707 = (i8)(intptr_t)c02_s01cd;
	i8 v4708 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4708)(v4707, v4706, v4705);

endsub:;
}
const i1 c02_s01ce[] = { 0x3c,0 };
	void f181_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_143 workspace at ws+4224 length ws+0
void f325_emit_143(void) {

	i8 v4709 = (i8)(intptr_t)(ws+4128);
	i8 v4710 = *(i8*)(intptr_t)v4709;
	i8 v4711 = v4710+(+16);
	i8 v4712 = *(i8*)(intptr_t)v4711;
	i1 v4713 = (i1)+8;
	i8 v4714 = (i8)(intptr_t)c02_s01ce;
	i8 v4715 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4715)(v4714, v4713, v4712);

endsub:;
}
	void f183_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_148 workspace at ws+4224 length ws+0
void f326_emit_148(void) {

	i8 v4716 = (i8)(intptr_t)(ws+4136);
	i8 v4717 = *(i8*)(intptr_t)v4716;
	i4 v4718 = *(i4*)(intptr_t)v4717;
	i4 v4719 = v4718&(+255);
	i8 v4720 = (i8)(intptr_t)(ws+4136);
	i8 v4721 = *(i8*)(intptr_t)v4720;
	i8 v4722 = v4721+(+4);
	i2 v4723 = *(i2*)(intptr_t)v4722;
	i8 v4724 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4724)(v4723, v4719);

endsub:;
}
	void f183_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_149 workspace at ws+4224 length ws+0
void f327_emit_149(void) {

	i8 v4725 = (i8)(intptr_t)(ws+4136);
	i8 v4726 = *(i8*)(intptr_t)v4725;
	i4 v4727 = *(i4*)(intptr_t)v4726;
	i4 v4728 = v4727&(+65535);
	i8 v4729 = (i8)(intptr_t)(ws+4136);
	i8 v4730 = *(i8*)(intptr_t)v4729;
	i8 v4731 = v4730+(+4);
	i2 v4732 = *(i2*)(intptr_t)v4731;
	i8 v4733 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4733)(v4732, v4728);

endsub:;
}
	void f183_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_150 workspace at ws+4224 length ws+0
void f328_emit_150(void) {

	i8 v4734 = (i8)(intptr_t)(ws+4136);
	i8 v4735 = *(i8*)(intptr_t)v4734;
	i4 v4736 = *(i4*)(intptr_t)v4735;
	i4 v4737 = v4736&(-1);
	i8 v4738 = (i8)(intptr_t)(ws+4136);
	i8 v4739 = *(i8*)(intptr_t)v4738;
	i8 v4740 = v4739+(+4);
	i2 v4741 = *(i2*)(intptr_t)v4740;
	i8 v4742 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4742)(v4741, v4737);

endsub:;
}
	void f183_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_151 workspace at ws+4224 length ws+0
void f329_emit_151(void) {

	i8 v4743 = (i8)(intptr_t)(ws+4136);
	i8 v4744 = *(i8*)(intptr_t)v4743;
	i4 v4745 = *(i4*)(intptr_t)v4744;
	i8 v4746 = (i8)(intptr_t)(ws+4136);
	i8 v4747 = *(i8*)(intptr_t)v4746;
	i8 v4748 = v4747+(+4);
	i2 v4749 = *(i2*)(intptr_t)v4748;
	i8 v4750 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4750)(v4749, v4745);

endsub:;
}

// emit_152 workspace at ws+4224 length ws+0
void f330_emit_152(void) {

	i8 v4751 = (i8)(intptr_t)(ws+3832);
	i1 v4752 = *(i1*)(intptr_t)v4751;
	i1 v4753 = v4752+(-1);
	i8 v4754 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4754 = v4753;

endsub:;
}

// emit_153 workspace at ws+4224 length ws+0
void f331_emit_153(void) {

	i8 v4755 = (i8)(intptr_t)(ws+3832);
	i1 v4756 = *(i1*)(intptr_t)v4755;
	i1 v4757 = v4756+(-1);
	i8 v4758 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4758 = v4757;

endsub:;
}

// emit_154 workspace at ws+4224 length ws+0
void f332_emit_154(void) {

	i8 v4759 = (i8)(intptr_t)(ws+3832);
	i1 v4760 = *(i1*)(intptr_t)v4759;
	i1 v4761 = v4760+(-1);
	i8 v4762 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4762 = v4761;

endsub:;
}

// emit_155 workspace at ws+4224 length ws+0
void f333_emit_155(void) {

	i8 v4763 = (i8)(intptr_t)(ws+3832);
	i1 v4764 = *(i1*)(intptr_t)v4763;
	i1 v4765 = v4764+(-1);
	i8 v4766 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4766 = v4765;

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_156 workspace at ws+4224 length ws+0
void f334_emit_156(void) {

	i1 v4767 = (i1)+1;
	i1 v4768 = (i1)+2;
	i8 v4769 = (i8)(intptr_t)(ws+4136);
	i8 v4770 = *(i8*)(intptr_t)v4769;
	i1 v4771 = *(i1*)(intptr_t)v4770;
	i8 v4772 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4772)(v4771, v4768, v4767);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_157 workspace at ws+4224 length ws+0
void f335_emit_157(void) {

	i1 v4773 = (i1)+1;
	i1 v4774 = (i1)+4;
	i8 v4775 = (i8)(intptr_t)(ws+4136);
	i8 v4776 = *(i8*)(intptr_t)v4775;
	i1 v4777 = *(i1*)(intptr_t)v4776;
	i8 v4778 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4778)(v4777, v4774, v4773);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_158 workspace at ws+4224 length ws+0
void f336_emit_158(void) {

	i1 v4779 = (i1)+1;
	i1 v4780 = (i1)+8;
	i8 v4781 = (i8)(intptr_t)(ws+4136);
	i8 v4782 = *(i8*)(intptr_t)v4781;
	i1 v4783 = *(i1*)(intptr_t)v4782;
	i8 v4784 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4784)(v4783, v4780, v4779);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_159 workspace at ws+4224 length ws+0
void f337_emit_159(void) {

	i1 v4785 = (i1)+2;
	i1 v4786 = (i1)+1;
	i8 v4787 = (i8)(intptr_t)(ws+4136);
	i8 v4788 = *(i8*)(intptr_t)v4787;
	i1 v4789 = *(i1*)(intptr_t)v4788;
	i8 v4790 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4790)(v4789, v4786, v4785);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_160 workspace at ws+4224 length ws+0
void f338_emit_160(void) {

	i1 v4791 = (i1)+2;
	i1 v4792 = (i1)+4;
	i8 v4793 = (i8)(intptr_t)(ws+4136);
	i8 v4794 = *(i8*)(intptr_t)v4793;
	i1 v4795 = *(i1*)(intptr_t)v4794;
	i8 v4796 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4796)(v4795, v4792, v4791);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_161 workspace at ws+4224 length ws+0
void f339_emit_161(void) {

	i1 v4797 = (i1)+2;
	i1 v4798 = (i1)+8;
	i8 v4799 = (i8)(intptr_t)(ws+4136);
	i8 v4800 = *(i8*)(intptr_t)v4799;
	i1 v4801 = *(i1*)(intptr_t)v4800;
	i8 v4802 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4802)(v4801, v4798, v4797);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_162 workspace at ws+4224 length ws+0
void f340_emit_162(void) {

	i1 v4803 = (i1)+4;
	i1 v4804 = (i1)+1;
	i8 v4805 = (i8)(intptr_t)(ws+4136);
	i8 v4806 = *(i8*)(intptr_t)v4805;
	i1 v4807 = *(i1*)(intptr_t)v4806;
	i8 v4808 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4808)(v4807, v4804, v4803);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_163 workspace at ws+4224 length ws+0
void f341_emit_163(void) {

	i1 v4809 = (i1)+4;
	i1 v4810 = (i1)+2;
	i8 v4811 = (i8)(intptr_t)(ws+4136);
	i8 v4812 = *(i8*)(intptr_t)v4811;
	i1 v4813 = *(i1*)(intptr_t)v4812;
	i8 v4814 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4814)(v4813, v4810, v4809);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_164 workspace at ws+4224 length ws+0
void f342_emit_164(void) {

	i1 v4815 = (i1)+4;
	i1 v4816 = (i1)+8;
	i8 v4817 = (i8)(intptr_t)(ws+4136);
	i8 v4818 = *(i8*)(intptr_t)v4817;
	i1 v4819 = *(i1*)(intptr_t)v4818;
	i8 v4820 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4820)(v4819, v4816, v4815);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_165 workspace at ws+4224 length ws+0
void f343_emit_165(void) {

	i1 v4821 = (i1)+8;
	i1 v4822 = (i1)+1;
	i8 v4823 = (i8)(intptr_t)(ws+4136);
	i8 v4824 = *(i8*)(intptr_t)v4823;
	i1 v4825 = *(i1*)(intptr_t)v4824;
	i8 v4826 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4826)(v4825, v4822, v4821);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_166 workspace at ws+4224 length ws+0
void f344_emit_166(void) {

	i1 v4827 = (i1)+8;
	i1 v4828 = (i1)+2;
	i8 v4829 = (i8)(intptr_t)(ws+4136);
	i8 v4830 = *(i8*)(intptr_t)v4829;
	i1 v4831 = *(i1*)(intptr_t)v4830;
	i8 v4832 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4832)(v4831, v4828, v4827);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_167 workspace at ws+4224 length ws+0
void f345_emit_167(void) {

	i1 v4833 = (i1)+8;
	i1 v4834 = (i1)+4;
	i8 v4835 = (i8)(intptr_t)(ws+4136);
	i8 v4836 = *(i8*)(intptr_t)v4835;
	i1 v4837 = *(i1*)(intptr_t)v4836;
	i8 v4838 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4838)(v4837, v4834, v4833);

endsub:;
}
	void f162_Push(i2* /* vid */);
const i1 c02_s01cf[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s01d0[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f185_E_string(i2* /* sid */, i8 /* text */);
	void f101_E_h16(i2 /* value */);
const i1 c02_s01d1[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_168 workspace at ws+4224 length ws+6
void f346_emit_168(void) {

	i8 v4839 = (i8)(intptr_t)(f162_Push);
	i2 v4840;

	((void(*)(i2* /* vid */))(intptr_t)v4839)(&v4840);

	i8 v4841 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v4841 = v4840;

	i8 v4842 = (i8)(intptr_t)(ws+4224);
	i2 v4843 = *(i2*)(intptr_t)v4842;
	i8 v4844 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v4844 = v4843;

	i8 v4845 = (i8)(intptr_t)c02_s01cf;
	i8 v4846 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4846)(v4845);

	i8 v4847 = (i8)(intptr_t)(ws+4226);
	i2 v4848 = *(i2*)(intptr_t)v4847;
	i8 v4849 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4849)(v4848);

	i8 v4850 = (i8)(intptr_t)c02_s01d0;
	i8 v4851 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4851)(v4850);

	i1 v4852 = (i1)+3;
	i8 v4853 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4853)(v4852);

	i1 v4854 = (i1)+115;
	i8 v4855 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4855)(v4854);

	i8 v4856 = (i8)(intptr_t)(ws+4136);
	i8 v4857 = *(i8*)(intptr_t)v4856;
	i8 v4858 = *(i8*)(intptr_t)v4857;
	i8 v4859 = (i8)(intptr_t)(f185_E_string);
	i2 v4860;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v4859)(&v4860, v4858);

	i8 v4861 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v4861 = v4860;

	i8 v4862 = (i8)(intptr_t)(ws+4228);
	i2 v4863 = *(i2*)(intptr_t)v4862;
	i8 v4864 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v4864)(v4863);

	i8 v4865 = (i8)(intptr_t)c02_s01d1;
	i8 v4866 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4866)(v4865);

endsub:;
}
	void f106_EmitterOpenStream(i8 /* subr */);
const i1 c02_s01d2[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
	void f92_E(i8 /* text */);
	void f105_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);
const i1 c02_s01d3[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_169 workspace at ws+4224 length ws+0
void f347_emit_169(void) {

	i8 v4867 = (i8)(intptr_t)(ws+40);
	i8 v4868 = *(i8*)(intptr_t)v4867;
	i8 v4869 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v4869)(v4868);

	i8 v4870 = (i8)(intptr_t)c02_s01d2;
	i8 v4871 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4871)(v4870);

	i8 v4872 = (i8)(intptr_t)(ws+4136);
	i8 v4873 = *(i8*)(intptr_t)v4872;
	i8 v4874 = *(i8*)(intptr_t)v4873;
	i8 v4875 = v4874+(+8);
	i2 v4876 = *(i2*)(intptr_t)v4875;
	i8 v4877 = (i8)(intptr_t)(ws+4136);
	i8 v4878 = *(i8*)(intptr_t)v4877;
	i8 v4879 = v4878+(+10);
	i1 v4880 = *(i1*)(intptr_t)v4879;
	i8 v4881 = (i8)(intptr_t)(ws+4136);
	i8 v4882 = *(i8*)(intptr_t)v4881;
	i8 v4883 = v4882+(+12);
	i2 v4884 = *(i2*)(intptr_t)v4883;
	i8 v4885 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v4885)(v4884, v4880, v4876);

	i8 v4886 = (i8)(intptr_t)c02_s01d3;
	i8 v4887 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4887)(v4886);

	i1 v4888 = (i1)+0;
	i8 v4889 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v4889 = v4888;

endsub:;
}
	void f187_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_170 workspace at ws+4224 length ws+0
void f348_emit_170(void) {

	i8 v4890 = (i8)(intptr_t)(ws+4136);
	i8 v4891 = *(i8*)(intptr_t)v4890;
	i1 v4892 = (i1)+1;
	i8 v4893 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4893)(v4892, v4891);

endsub:;
}
	void f187_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_171 workspace at ws+4224 length ws+0
void f349_emit_171(void) {

	i8 v4894 = (i8)(intptr_t)(ws+4136);
	i8 v4895 = *(i8*)(intptr_t)v4894;
	i1 v4896 = (i1)+2;
	i8 v4897 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4897)(v4896, v4895);

endsub:;
}
	void f187_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_172 workspace at ws+4224 length ws+0
void f350_emit_172(void) {

	i8 v4898 = (i8)(intptr_t)(ws+4136);
	i8 v4899 = *(i8*)(intptr_t)v4898;
	i1 v4900 = (i1)+4;
	i8 v4901 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4901)(v4900, v4899);

endsub:;
}
	void f187_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_173 workspace at ws+4224 length ws+0
void f351_emit_173(void) {

	i8 v4902 = (i8)(intptr_t)(ws+4136);
	i8 v4903 = *(i8*)(intptr_t)v4902;
	i1 v4904 = (i1)+8;
	i8 v4905 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4905)(v4904, v4903);

endsub:;
}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01d4[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f157_E_subref_sig(i8 /* subr */);
const i1 c02_s01d5[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_174 workspace at ws+4224 length ws+0
void f352_emit_174(void) {

	i8 v4906 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4906)();

	i8 v4907 = (i8)(intptr_t)c02_s01d4;
	i8 v4908 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4908)(v4907);

	i8 v4909 = (i8)(intptr_t)(ws+4136);
	i8 v4910 = *(i8*)(intptr_t)v4909;
	i8 v4911 = *(i8*)(intptr_t)v4910;
	i8 v4912 = (i8)(intptr_t)(f157_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4912)(v4911);

	i8 v4913 = (i8)(intptr_t)c02_s01d5;
	i8 v4914 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4914)(v4913);

endsub:;
}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01d6[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s01d7[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_175 workspace at ws+4224 length ws+0
void f353_emit_175(void) {

	i8 v4915 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4915)();

	i8 v4916 = (i8)(intptr_t)c02_s01d6;
	i8 v4917 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4917)(v4916);

	i8 v4918 = (i8)(intptr_t)(ws+4136);
	i8 v4919 = *(i8*)(intptr_t)v4918;
	i8 v4920 = (i8)(intptr_t)(ws+4136);
	i8 v4921 = *(i8*)(intptr_t)v4920;
	i8 v4922 = v4921+(+16);
	i2 v4923 = *(i2*)(intptr_t)v4922;
	i8 v4924 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4924)(v4923, v4919);

	i8 v4925 = (i8)(intptr_t)c02_s01d7;
	i8 v4926 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4926)(v4925);

endsub:;
}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01d8[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f185_E_string(i2* /* sid */, i8 /* text */);
	void f101_E_h16(i2 /* value */);
const i1 c02_s01d9[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_176 workspace at ws+4224 length ws+2
void f354_emit_176(void) {

	i8 v4927 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4927)();

	i8 v4928 = (i8)(intptr_t)c02_s01d8;
	i8 v4929 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4929)(v4928);

	i1 v4930 = (i1)+3;
	i8 v4931 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4931)(v4930);

	i1 v4932 = (i1)+115;
	i8 v4933 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4933)(v4932);

	i8 v4934 = (i8)(intptr_t)(ws+4136);
	i8 v4935 = *(i8*)(intptr_t)v4934;
	i8 v4936 = *(i8*)(intptr_t)v4935;
	i8 v4937 = (i8)(intptr_t)(f185_E_string);
	i2 v4938;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v4937)(&v4938, v4936);

	i8 v4939 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v4939 = v4938;

	i8 v4940 = (i8)(intptr_t)(ws+4224);
	i2 v4941 = *(i2*)(intptr_t)v4940;
	i8 v4942 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v4942)(v4941);

	i8 v4943 = (i8)(intptr_t)c02_s01d9;
	i8 v4944 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4944)(v4943);

endsub:;
}
	void f186_FlushInitialiserBuffer(void);
const i1 c02_s01da[] = { 0x7d,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f107_EmitterCloseStream(void);

// emit_177 workspace at ws+4224 length ws+0
void f355_emit_177(void) {

	i8 v4945 = (i8)(intptr_t)(f186_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v4945)();

	i8 v4946 = (i8)(intptr_t)c02_s01da;
	i8 v4947 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4947)(v4946);

	i8 v4948 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v4948)();

endsub:;
}
	void f88_E_tab(void);

// emit_180 workspace at ws+4224 length ws+0
void f356_emit_180(void) {

	i8 v4949 = (i8)(intptr_t)(f88_E_tab);

	((void(*)(void))(intptr_t)v4949)();

endsub:;
}
	void f92_E(i8 /* text */);
	void f86_E_space(void);

// emit_181 workspace at ws+4224 length ws+0
void f357_emit_181(void) {

	i8 v4950 = (i8)(intptr_t)(ws+4136);
	i8 v4951 = *(i8*)(intptr_t)v4950;
	i8 v4952 = *(i8*)(intptr_t)v4951;
	i8 v4953 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4953)(v4952);

	i8 v4954 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4954)();

endsub:;
}
const i1 c02_s01db[] = { 0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s01dc[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s01dd[] = { 0x29,0 };
	void f92_E(i8 /* text */);
	void f86_E_space(void);

// emit_182 workspace at ws+4224 length ws+0
void f358_emit_182(void) {

	i8 v4955 = (i8)(intptr_t)c02_s01db;
	i8 v4956 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4956)(v4955);

	i8 v4957 = (i8)(intptr_t)(ws+4136);
	i8 v4958 = *(i8*)(intptr_t)v4957;
	i8 v4959 = v4958+(+14);
	i1 v4960 = *(i1*)(intptr_t)v4959;
	i8 v4961 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4961)(v4960);

	i8 v4962 = (i8)(intptr_t)c02_s01dc;
	i8 v4963 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4963)(v4962);

	i8 v4964 = (i8)(intptr_t)(ws+4136);
	i8 v4965 = *(i8*)(intptr_t)v4964;
	i2 v4966 = (i2)+0;
	i8 v4967 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4967)(v4966, v4965);

	i8 v4968 = (i8)(intptr_t)c02_s01dd;
	i8 v4969 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4969)(v4968);

	i8 v4970 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4970)();

endsub:;
}
const i1 c02_s01de[] = { 0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f157_E_subref_sig(i8 /* subr */);
const i1 c02_s01df[] = { 0x29,0 };
	void f92_E(i8 /* text */);
	void f86_E_space(void);

// emit_183 workspace at ws+4224 length ws+0
void f359_emit_183(void) {

	i8 v4971 = (i8)(intptr_t)c02_s01de;
	i8 v4972 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4972)(v4971);

	i8 v4973 = (i8)(intptr_t)(ws+4136);
	i8 v4974 = *(i8*)(intptr_t)v4973;
	i8 v4975 = *(i8*)(intptr_t)v4974;
	i8 v4976 = (i8)(intptr_t)(f157_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4976)(v4975);

	i8 v4977 = (i8)(intptr_t)c02_s01df;
	i8 v4978 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4978)(v4977);

	i8 v4979 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4979)();

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f98_E_i32(i4 /* value */);
	void f83_E_b8(i1 /* byte */);

// emit_184 workspace at ws+4224 length ws+0
void f360_emit_184(void) {

	i1 v4980 = (i1)+40;
	i8 v4981 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4981)(v4980);

	i8 v4982 = (i8)(intptr_t)(ws+4136);
	i8 v4983 = *(i8*)(intptr_t)v4982;
	i4 v4984 = *(i4*)(intptr_t)v4983;
	i8 v4985 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v4985)(v4984);

	i1 v4986 = (i1)+41;
	i8 v4987 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4987)(v4986);

endsub:;
}
	void f89_E_nl(void);

// emit_185 workspace at ws+4224 length ws+0
void f361_emit_185(void) {

	i8 v4988 = (i8)(intptr_t)(f89_E_nl);

	((void(*)(void))(intptr_t)v4988)();

endsub:;
}

// nop_emitter workspace at ws+4224 length ws+0
void f362_nop_emitter(void) {

endsub:;
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
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f237_emit_47(void);
	void f238_emit_48(void);
	void f239_emit_49(void);
	void f240_emit_50(void);
	void f242_emit_51(void);
	void f243_emit_52(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f244_emit_62(void);
	void f245_emit_63(void);
	void f246_emit_64(void);
	void f247_emit_65(void);
	void f248_emit_66(void);
	void f249_emit_67(void);
	void f250_emit_68(void);
	void f251_emit_69(void);
	void f252_emit_70(void);
	void f253_emit_71(void);
	void f254_emit_72(void);
	void f255_emit_73(void);
	void f256_emit_74(void);
	void f257_emit_75(void);
	void f258_emit_76(void);
	void f259_emit_77(void);
	void f260_emit_78(void);
	void f261_emit_79(void);
	void f262_emit_80(void);
	void f263_emit_81(void);
	void f264_emit_82(void);
	void f265_emit_83(void);
	void f266_emit_84(void);
	void f267_emit_85(void);
	void f268_emit_86(void);
	void f269_emit_87(void);
	void f270_emit_88(void);
	void f271_emit_89(void);
	void f272_emit_90(void);
	void f273_emit_91(void);
	void f274_emit_92(void);
	void f275_emit_93(void);
	void f276_emit_94(void);
	void f277_emit_95(void);
	void f278_emit_96(void);
	void f279_emit_97(void);
	void f280_emit_98(void);
	void f281_emit_99(void);
	void f282_emit_100(void);
	void f283_emit_101(void);
	void f284_emit_102(void);
	void f285_emit_103(void);
	void f286_emit_104(void);
	void f287_emit_105(void);
	void f288_emit_106(void);
	void f289_emit_107(void);
	void f290_emit_108(void);
	void f291_emit_109(void);
	void f292_emit_110(void);
	void f293_emit_111(void);
	void f294_emit_112(void);
	void f295_emit_113(void);
	void f296_emit_114(void);
	void f297_emit_115(void);
	void f298_emit_116(void);
	void f299_emit_117(void);
	void f300_emit_118(void);
	void f301_emit_119(void);
	void f302_emit_120(void);
	void f303_emit_121(void);
	void f304_emit_122(void);
	void f305_emit_123(void);
	void f306_emit_124(void);
	void f307_emit_125(void);
	void f308_emit_126(void);
	void f309_emit_127(void);
	void f310_emit_128(void);
	void f311_emit_129(void);
	void f312_emit_130(void);
	void f313_emit_131(void);
	void f314_emit_132(void);
	void f315_emit_133(void);
	void f316_emit_134(void);
	void f317_emit_135(void);
	void f318_emit_136(void);
	void f319_emit_137(void);
	void f320_emit_138(void);
	void f321_emit_139(void);
	void f322_emit_140(void);
	void f323_emit_141(void);
	void f324_emit_142(void);
	void f325_emit_143(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f326_emit_148(void);
	void f327_emit_149(void);
	void f328_emit_150(void);
	void f329_emit_151(void);
	void f330_emit_152(void);
	void f331_emit_153(void);
	void f332_emit_154(void);
	void f333_emit_155(void);
	void f334_emit_156(void);
	void f335_emit_157(void);
	void f336_emit_158(void);
	void f337_emit_159(void);
	void f338_emit_160(void);
	void f339_emit_161(void);
	void f340_emit_162(void);
	void f341_emit_163(void);
	void f342_emit_164(void);
	void f343_emit_165(void);
	void f344_emit_166(void);
	void f345_emit_167(void);
	void f346_emit_168(void);
	void f347_emit_169(void);
	void f348_emit_170(void);
	void f349_emit_171(void);
	void f350_emit_172(void);
	void f351_emit_173(void);
	void f352_emit_174(void);
	void f353_emit_175(void);
	void f354_emit_176(void);
	void f355_emit_177(void);
	void f362_nop_emitter(void);
	void f362_nop_emitter(void);
	void f356_emit_180(void);
	void f357_emit_181(void);
	void f358_emit_182(void);
	void f359_emit_183(void);
	void f360_emit_184(void);
	void f361_emit_185(void);
static data f190_EmitOneInstruction_s02fe[] = {

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

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f237_emit_47 },

	{ .ptr = (void*)f238_emit_48 },

	{ .ptr = (void*)f239_emit_49 },

	{ .ptr = (void*)f240_emit_50 },

	{ .ptr = (void*)f242_emit_51 },

	{ .ptr = (void*)f243_emit_52 },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f244_emit_62 },

	{ .ptr = (void*)f245_emit_63 },

	{ .ptr = (void*)f246_emit_64 },

	{ .ptr = (void*)f247_emit_65 },

	{ .ptr = (void*)f248_emit_66 },

	{ .ptr = (void*)f249_emit_67 },

	{ .ptr = (void*)f250_emit_68 },

	{ .ptr = (void*)f251_emit_69 },

	{ .ptr = (void*)f252_emit_70 },

	{ .ptr = (void*)f253_emit_71 },

	{ .ptr = (void*)f254_emit_72 },

	{ .ptr = (void*)f255_emit_73 },

	{ .ptr = (void*)f256_emit_74 },

	{ .ptr = (void*)f257_emit_75 },

	{ .ptr = (void*)f258_emit_76 },

	{ .ptr = (void*)f259_emit_77 },

	{ .ptr = (void*)f260_emit_78 },

	{ .ptr = (void*)f261_emit_79 },

	{ .ptr = (void*)f262_emit_80 },

	{ .ptr = (void*)f263_emit_81 },

	{ .ptr = (void*)f264_emit_82 },

	{ .ptr = (void*)f265_emit_83 },

	{ .ptr = (void*)f266_emit_84 },

	{ .ptr = (void*)f267_emit_85 },

	{ .ptr = (void*)f268_emit_86 },

	{ .ptr = (void*)f269_emit_87 },

	{ .ptr = (void*)f270_emit_88 },

	{ .ptr = (void*)f271_emit_89 },

	{ .ptr = (void*)f272_emit_90 },

	{ .ptr = (void*)f273_emit_91 },

	{ .ptr = (void*)f274_emit_92 },

	{ .ptr = (void*)f275_emit_93 },

	{ .ptr = (void*)f276_emit_94 },

	{ .ptr = (void*)f277_emit_95 },

	{ .ptr = (void*)f278_emit_96 },

	{ .ptr = (void*)f279_emit_97 },

	{ .ptr = (void*)f280_emit_98 },

	{ .ptr = (void*)f281_emit_99 },

	{ .ptr = (void*)f282_emit_100 },

	{ .ptr = (void*)f283_emit_101 },

	{ .ptr = (void*)f284_emit_102 },

	{ .ptr = (void*)f285_emit_103 },

	{ .ptr = (void*)f286_emit_104 },

	{ .ptr = (void*)f287_emit_105 },

	{ .ptr = (void*)f288_emit_106 },

	{ .ptr = (void*)f289_emit_107 },

	{ .ptr = (void*)f290_emit_108 },

	{ .ptr = (void*)f291_emit_109 },

	{ .ptr = (void*)f292_emit_110 },

	{ .ptr = (void*)f293_emit_111 },

	{ .ptr = (void*)f294_emit_112 },

	{ .ptr = (void*)f295_emit_113 },

	{ .ptr = (void*)f296_emit_114 },

	{ .ptr = (void*)f297_emit_115 },

	{ .ptr = (void*)f298_emit_116 },

	{ .ptr = (void*)f299_emit_117 },

	{ .ptr = (void*)f300_emit_118 },

	{ .ptr = (void*)f301_emit_119 },

	{ .ptr = (void*)f302_emit_120 },

	{ .ptr = (void*)f303_emit_121 },

	{ .ptr = (void*)f304_emit_122 },

	{ .ptr = (void*)f305_emit_123 },

	{ .ptr = (void*)f306_emit_124 },

	{ .ptr = (void*)f307_emit_125 },

	{ .ptr = (void*)f308_emit_126 },

	{ .ptr = (void*)f309_emit_127 },

	{ .ptr = (void*)f310_emit_128 },

	{ .ptr = (void*)f311_emit_129 },

	{ .ptr = (void*)f312_emit_130 },

	{ .ptr = (void*)f313_emit_131 },

	{ .ptr = (void*)f314_emit_132 },

	{ .ptr = (void*)f315_emit_133 },

	{ .ptr = (void*)f316_emit_134 },

	{ .ptr = (void*)f317_emit_135 },

	{ .ptr = (void*)f318_emit_136 },

	{ .ptr = (void*)f319_emit_137 },

	{ .ptr = (void*)f320_emit_138 },

	{ .ptr = (void*)f321_emit_139 },

	{ .ptr = (void*)f322_emit_140 },

	{ .ptr = (void*)f323_emit_141 },

	{ .ptr = (void*)f324_emit_142 },

	{ .ptr = (void*)f325_emit_143 },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f326_emit_148 },

	{ .ptr = (void*)f327_emit_149 },

	{ .ptr = (void*)f328_emit_150 },

	{ .ptr = (void*)f329_emit_151 },

	{ .ptr = (void*)f330_emit_152 },

	{ .ptr = (void*)f331_emit_153 },

	{ .ptr = (void*)f332_emit_154 },

	{ .ptr = (void*)f333_emit_155 },

	{ .ptr = (void*)f334_emit_156 },

	{ .ptr = (void*)f335_emit_157 },

	{ .ptr = (void*)f336_emit_158 },

	{ .ptr = (void*)f337_emit_159 },

	{ .ptr = (void*)f338_emit_160 },

	{ .ptr = (void*)f339_emit_161 },

	{ .ptr = (void*)f340_emit_162 },

	{ .ptr = (void*)f341_emit_163 },

	{ .ptr = (void*)f342_emit_164 },

	{ .ptr = (void*)f343_emit_165 },

	{ .ptr = (void*)f344_emit_166 },

	{ .ptr = (void*)f345_emit_167 },

	{ .ptr = (void*)f346_emit_168 },

	{ .ptr = (void*)f347_emit_169 },

	{ .ptr = (void*)f348_emit_170 },

	{ .ptr = (void*)f349_emit_171 },

	{ .ptr = (void*)f350_emit_172 },

	{ .ptr = (void*)f351_emit_173 },

	{ .ptr = (void*)f352_emit_174 },

	{ .ptr = (void*)f353_emit_175 },

	{ .ptr = (void*)f354_emit_176 },

	{ .ptr = (void*)f355_emit_177 },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f362_nop_emitter },

	{ .ptr = (void*)f356_emit_180 },

	{ .ptr = (void*)f357_emit_181 },

	{ .ptr = (void*)f358_emit_182 },

	{ .ptr = (void*)f359_emit_183 },

	{ .ptr = (void*)f360_emit_184 },

	{ .ptr = (void*)f361_emit_185 },

};

// EmitOneInstruction workspace at ws+4120 length ws+98
void f190_EmitOneInstruction(i8 p3780 /* self */, i1 p3781 /* ruleid */) {
	*(i1*)(intptr_t)(ws+4120) = p3781; /* ruleid */
	*(i8*)(intptr_t)(ws+4128) = p3780; /* self */

	i8 v3782 = (i8)(intptr_t)(ws+4128);
	i8 v3783 = *(i8*)(intptr_t)v3782;
	i8 v3784 = v3783+(+16);
	i8 v3785 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v3785 = v3784;

	i8 v3786 = (i8)(intptr_t)(ws+4136);
	i8 v3787 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3787 = v3786;

	i1 v3788 = (i1)+4;
	i8 v3789 = (i8)(intptr_t)(ws+4216);
	*(i1*)(intptr_t)v3789 = v3788;

c02_02d1:;

	i8 v3790 = (i8)(intptr_t)(ws+4216);
	i1 v3791 = *(i1*)(intptr_t)v3790;
	i1 v3792 = (i1)+0;
	if (v3791==v3792) goto c02_02d6; else goto c02_02d5;

c02_02d5:;

	i8 v3793 = (i8)(intptr_t)(ws+4200);
	i8 v3794 = *(i8*)(intptr_t)v3793;
	i8 v3795 = *(i8*)(intptr_t)v3794;
	i8 v3796 = (i8)(intptr_t)(ws+4208);
	i8 v3797 = *(i8*)(intptr_t)v3796;
	*(i8*)(intptr_t)v3797 = v3795;

	i8 v3798 = (i8)(intptr_t)(ws+4208);
	i8 v3799 = *(i8*)(intptr_t)v3798;
	i8 v3800 = *(i8*)(intptr_t)v3799;
	i8 v3801 = (i8)+0;
	if (v3800==v3801) goto c02_02db; else goto c02_02da;

c02_02da:;

	i8 v3802 = (i8)(intptr_t)(ws+4208);
	i8 v3803 = *(i8*)(intptr_t)v3802;
	i8 v3804 = *(i8*)(intptr_t)v3803;
	i8 v3805 = v3804+(+57);
	i1 v3806 = *(i1*)(intptr_t)v3805;
	i8 v3807 = (i8)(intptr_t)(ws+4208);
	i8 v3808 = *(i8*)(intptr_t)v3807;
	i8 v3809 = v3808+(+8);
	*(i1*)(intptr_t)v3809 = v3806;

c02_02db:;

c02_02d7:;

	i8 v3810 = (i8)(intptr_t)(ws+4200);
	i8 v3811 = *(i8*)(intptr_t)v3810;
	i8 v3812 = v3811+(+8);
	i8 v3813 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v3813 = v3812;

	i8 v3814 = (i8)(intptr_t)(ws+4208);
	i8 v3815 = *(i8*)(intptr_t)v3814;
	i8 v3816 = v3815+(+16);
	i8 v3817 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3817 = v3816;

	i8 v3818 = (i8)(intptr_t)(ws+4216);
	i1 v3819 = *(i1*)(intptr_t)v3818;
	i1 v3820 = v3819+(-1);
	i8 v3821 = (i8)(intptr_t)(ws+4216);
	*(i1*)(intptr_t)v3821 = v3820;

	goto c02_02d1;

c02_02d6:;

	i8 v3822 = (i8)(intptr_t)(ws+4128);
	i8 v3823 = *(i8*)(intptr_t)v3822;
	i8 v3824 = v3823+(+49);
	i1 v3825 = *(i1*)(intptr_t)v3824;
	i8 v3826 = (i8)(intptr_t)(ws+4217);
	*(i1*)(intptr_t)v3826 = v3825;













































































































































































	i8 v4989 = (i8)(intptr_t)((i1*)f190_EmitOneInstruction_s02fe);
	i8 v4990 = (i8)(intptr_t)(ws+4120);
	i1 v4991 = *(i1*)(intptr_t)v4990;
	i8 v4992 = v4991;
	i1 v4993 = (i1)+3;
	i8 v4994 = ((i8)v4992)<<v4993;
	i8 v4995 = v4989+v4994;
	i8 v4996 = *(i8*)(intptr_t)v4995;

	((void(*)(void))(intptr_t)v4996)();

endsub:;
}
static data f3___main_s02ff[] = {








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
static data f3___main_s0300[] = {








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
static data f3___main_s0301[] = {








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
void f363_PopulateMatchBuffer(i8 p4997 /* matchbuf */, i8 p4998 /* n */, i8 p4999 /* insn */) {
	*(i8*)(intptr_t)(ws+4176) = p4999; /* insn */
	*(i8*)(intptr_t)(ws+4184) = p4998; /* n */
	*(i8*)(intptr_t)(ws+4192) = p4997; /* matchbuf */

	i8 v5000 = (i8)(intptr_t)(ws+4184);
	i8 v5001 = *(i8*)(intptr_t)v5000;
	i8 v5002 = *(i8*)(intptr_t)v5001;
	i8 v5003 = v5002+(+256);
	i1 v5004 = *(i1*)(intptr_t)v5003;
	i8 v5005 = (i8)(intptr_t)(ws+4192);
	i8 v5006 = *(i8*)(intptr_t)v5005;
	*(i1*)(intptr_t)v5006 = v5004;

	i8 v5007 = (i8)(intptr_t)(ws+4184);
	i8 v5008 = *(i8*)(intptr_t)v5007;
	i8 v5009 = *(i8*)(intptr_t)v5008;
	i8 v5010 = v5009+(+24);
	i8 v5011 = *(i8*)(intptr_t)v5010;
	i8 v5012 = (i8)(intptr_t)(ws+4184);
	i8 v5013 = *(i8*)(intptr_t)v5012;
	i8 v5014 = v5013+(+8);
	*(i8*)(intptr_t)v5014 = v5011;

	i8 v5015 = (i8)(intptr_t)(ws+4184);
	i8 v5016 = *(i8*)(intptr_t)v5015;
	i8 v5017 = v5016+(+8);
	i8 v5018 = *(i8*)(intptr_t)v5017;
	i8 v5019 = (i8)+0;
	if (v5018==v5019) goto c02_0306; else goto c02_0305;

c02_0305:;

	i8 v5020 = (i8)(intptr_t)(ws+4184);
	i8 v5021 = *(i8*)(intptr_t)v5020;
	i8 v5022 = v5021+(+8);
	i8 v5023 = *(i8*)(intptr_t)v5022;
	i8 v5024 = v5023+(+256);
	i1 v5025 = *(i1*)(intptr_t)v5024;
	i8 v5026 = (i8)(intptr_t)(ws+4192);
	i8 v5027 = *(i8*)(intptr_t)v5026;
	i8 v5028 = v5027+(+1);
	*(i1*)(intptr_t)v5028 = v5025;

c02_0306:;

c02_0302:;

	i8 v5029 = (i8)(intptr_t)(ws+4184);
	i8 v5030 = *(i8*)(intptr_t)v5029;
	i8 v5031 = *(i8*)(intptr_t)v5030;
	i8 v5032 = v5031+(+32);
	i8 v5033 = *(i8*)(intptr_t)v5032;
	i8 v5034 = (i8)(intptr_t)(ws+4184);
	i8 v5035 = *(i8*)(intptr_t)v5034;
	i8 v5036 = v5035+(+16);
	*(i8*)(intptr_t)v5036 = v5033;

	i8 v5037 = (i8)(intptr_t)(ws+4184);
	i8 v5038 = *(i8*)(intptr_t)v5037;
	i8 v5039 = v5038+(+16);
	i8 v5040 = *(i8*)(intptr_t)v5039;
	i8 v5041 = (i8)+0;
	if (v5040==v5041) goto c02_030b; else goto c02_030a;

c02_030a:;

	i8 v5042 = (i8)(intptr_t)(ws+4184);
	i8 v5043 = *(i8*)(intptr_t)v5042;
	i8 v5044 = v5043+(+16);
	i8 v5045 = *(i8*)(intptr_t)v5044;
	i8 v5046 = v5045+(+256);
	i1 v5047 = *(i1*)(intptr_t)v5046;
	i8 v5048 = (i8)(intptr_t)(ws+4192);
	i8 v5049 = *(i8*)(intptr_t)v5048;
	i8 v5050 = v5049+(+2);
	*(i1*)(intptr_t)v5050 = v5047;

	i8 v5051 = (i8)(intptr_t)(ws+4184);
	i8 v5052 = *(i8*)(intptr_t)v5051;
	i8 v5053 = v5052+(+16);
	i8 v5054 = *(i8*)(intptr_t)v5053;
	i8 v5055 = v5054+(+24);
	i8 v5056 = *(i8*)(intptr_t)v5055;
	i8 v5057 = (i8)(intptr_t)(ws+4184);
	i8 v5058 = *(i8*)(intptr_t)v5057;
	i8 v5059 = v5058+(+24);
	*(i8*)(intptr_t)v5059 = v5056;

	i8 v5060 = (i8)(intptr_t)(ws+4184);
	i8 v5061 = *(i8*)(intptr_t)v5060;
	i8 v5062 = v5061+(+24);
	i8 v5063 = *(i8*)(intptr_t)v5062;
	i8 v5064 = (i8)+0;
	if (v5063==v5064) goto c02_0310; else goto c02_030f;

c02_030f:;

	i8 v5065 = (i8)(intptr_t)(ws+4184);
	i8 v5066 = *(i8*)(intptr_t)v5065;
	i8 v5067 = v5066+(+24);
	i8 v5068 = *(i8*)(intptr_t)v5067;
	i8 v5069 = v5068+(+256);
	i1 v5070 = *(i1*)(intptr_t)v5069;
	i8 v5071 = (i8)(intptr_t)(ws+4192);
	i8 v5072 = *(i8*)(intptr_t)v5071;
	i8 v5073 = v5072+(+3);
	*(i1*)(intptr_t)v5073 = v5070;

c02_0310:;

c02_030c:;

c02_030b:;

c02_0307:;

endsub:;
}

// IsStackedRegister workspace at ws+4256 length ws+16
void f364_IsStackedRegister(i1* p5074 /* result */, i1 p5075 /* regid */) {
	*(i1*)(intptr_t)(ws+4256) = p5075; /* regid */

	i1 v5076 = (i1)+0;
	i8 v5077 = (i8)(intptr_t)(ws+4257);
	*(i1*)(intptr_t)v5077 = v5076;

	i8 v5078 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v5079 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v5079 = v5078;

c02_0311:;

	i8 v5080 = (i8)(intptr_t)(ws+4264);
	i8 v5081 = *(i8*)(intptr_t)v5080;
	i8 v5082 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v5081==v5082) goto c02_0316; else goto c02_0315;

c02_0315:;

	i8 v5083 = (i8)(intptr_t)(ws+4264);
	i8 v5084 = *(i8*)(intptr_t)v5083;
	i8 v5085 = v5084+(+8);
	i1 v5086 = *(i1*)(intptr_t)v5085;
	i8 v5087 = (i8)(intptr_t)(ws+4256);
	i1 v5088 = *(i1*)(intptr_t)v5087;
	i1 v5089 = v5086&v5088;
	i1 v5090 = (i1)+0;
	if (v5089==v5090) goto c02_031b; else goto c02_031a;

c02_031a:;

	i8 v5091 = (i8)(intptr_t)(ws+4264);
	i8 v5092 = *(i8*)(intptr_t)v5091;
	i8 v5093 = v5092+(+11);
	i1 v5094 = *(i1*)(intptr_t)v5093;
	i8 v5095 = (i8)(intptr_t)(ws+4257);
	*(i1*)(intptr_t)v5095 = v5094;

	goto endsub;

c02_031b:;

c02_0317:;

	i8 v5096 = (i8)(intptr_t)(ws+4264);
	i8 v5097 = *(i8*)(intptr_t)v5096;
	i8 v5098 = v5097+(+16);
	i8 v5099 = (i8)(intptr_t)(ws+4264);
	*(i8*)(intptr_t)v5099 = v5098;

	goto c02_0311;

c02_0316:;

endsub:;
	*p5074 = *(i1*)(intptr_t)(ws+4257);
}

// CalculateBlockedRegisters workspace at ws+4152 length ws+17
void f365_CalculateBlockedRegisters(i1* p5100 /* blocked */, i8 p5101 /* last */, i8 p5102 /* insn */) {
	*(i8*)(intptr_t)(ws+4152) = p5102; /* insn */
	*(i8*)(intptr_t)(ws+4160) = p5101; /* last */

	i1 v5103 = (i1)+0;
	i8 v5104 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v5104 = v5103;

	i8 v5105 = (i8)(intptr_t)(ws+4152);
	i8 v5106 = *(i8*)(intptr_t)v5105;
	i8 v5107 = (i8)(intptr_t)(ws+4160);
	i8 v5108 = *(i8*)(intptr_t)v5107;
	if (v5106==v5108) goto c02_031f; else goto c02_0320;

c02_031f:;

	goto endsub;

c02_0320:;

c02_031c:;

	i8 v5109 = (i8)(intptr_t)(ws+4152);
	i8 v5110 = *(i8*)(intptr_t)v5109;
	i8 v5111 = *(i8*)(intptr_t)v5110;
	i8 v5112 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5112 = v5111;

c02_0321:;

	i8 v5113 = (i8)(intptr_t)(ws+4152);
	i8 v5114 = *(i8*)(intptr_t)v5113;
	i8 v5115 = (i8)(intptr_t)(ws+4160);
	i8 v5116 = *(i8*)(intptr_t)v5115;
	if (v5114==v5116) goto c02_0326; else goto c02_0325;

c02_0325:;

	i8 v5117 = (i8)(intptr_t)(ws+4168);
	i1 v5118 = *(i1*)(intptr_t)v5117;
	i8 v5119 = (i8)(intptr_t)(ws+4152);
	i8 v5120 = *(i8*)(intptr_t)v5119;
	i8 v5121 = v5120+(+64);
	i1 v5122 = *(i1*)(intptr_t)v5121;
	i1 v5123 = v5118|v5122;
	i8 v5124 = (i8)(intptr_t)(ws+4152);
	i8 v5125 = *(i8*)(intptr_t)v5124;
	i8 v5126 = v5125+(+66);
	i1 v5127 = *(i1*)(intptr_t)v5126;
	i1 v5128 = v5123|v5127;
	i8 v5129 = (i8)(intptr_t)(ws+4152);
	i8 v5130 = *(i8*)(intptr_t)v5129;
	i8 v5131 = v5130+(+65);
	i1 v5132 = *(i1*)(intptr_t)v5131;
	i1 v5133 = v5128|v5132;
	i8 v5134 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v5134 = v5133;

	i8 v5135 = (i8)(intptr_t)(ws+4152);
	i8 v5136 = *(i8*)(intptr_t)v5135;
	i8 v5137 = (i8)(intptr_t)(ws+4160);
	i8 v5138 = *(i8*)(intptr_t)v5137;
	if (v5136==v5138) goto c02_032a; else goto c02_032b;

c02_032a:;

	goto c02_0326;

c02_032b:;

c02_0327:;

	i8 v5139 = (i8)(intptr_t)(ws+4152);
	i8 v5140 = *(i8*)(intptr_t)v5139;
	i8 v5141 = *(i8*)(intptr_t)v5140;
	i8 v5142 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5142 = v5141;

	goto c02_0321;

c02_0326:;

endsub:;
	*p5100 = *(i1*)(intptr_t)(ws+4168);
}

// BlockRegisters workspace at ws+4152 length ws+17
void f367_BlockRegisters(i1 p5173 /* blocked */, i8 p5174 /* last */, i8 p5175 /* insn */) {
	*(i8*)(intptr_t)(ws+4152) = p5175; /* insn */
	*(i8*)(intptr_t)(ws+4160) = p5174; /* last */
	*(i1*)(intptr_t)(ws+4168) = p5173; /* blocked */

	i8 v5176 = (i8)(intptr_t)(ws+4152);
	i8 v5177 = *(i8*)(intptr_t)v5176;
	i8 v5178 = (i8)(intptr_t)(ws+4160);
	i8 v5179 = *(i8*)(intptr_t)v5178;
	if (v5177==v5179) goto c02_0334; else goto c02_0335;

c02_0334:;

	goto endsub;

c02_0335:;

c02_0331:;

	i8 v5180 = (i8)(intptr_t)(ws+4152);
	i8 v5181 = *(i8*)(intptr_t)v5180;
	i8 v5182 = *(i8*)(intptr_t)v5181;
	i8 v5183 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5183 = v5182;

c02_0336:;

	i8 v5184 = (i8)(intptr_t)(ws+4152);
	i8 v5185 = *(i8*)(intptr_t)v5184;
	i8 v5186 = (i8)(intptr_t)(ws+4160);
	i8 v5187 = *(i8*)(intptr_t)v5186;
	if (v5185==v5187) goto c02_033b; else goto c02_033a;

c02_033a:;

	i8 v5188 = (i8)(intptr_t)(ws+4152);
	i8 v5189 = *(i8*)(intptr_t)v5188;
	i8 v5190 = v5189+(+64);
	i1 v5191 = *(i1*)(intptr_t)v5190;
	i8 v5192 = (i8)(intptr_t)(ws+4168);
	i1 v5193 = *(i1*)(intptr_t)v5192;
	i1 v5194 = v5191|v5193;
	i8 v5195 = (i8)(intptr_t)(ws+4152);
	i8 v5196 = *(i8*)(intptr_t)v5195;
	i8 v5197 = v5196+(+64);
	*(i1*)(intptr_t)v5197 = v5194;

	i8 v5198 = (i8)(intptr_t)(ws+4152);
	i8 v5199 = *(i8*)(intptr_t)v5198;
	i8 v5200 = v5199+(+65);
	i1 v5201 = *(i1*)(intptr_t)v5200;
	i8 v5202 = (i8)(intptr_t)(ws+4168);
	i1 v5203 = *(i1*)(intptr_t)v5202;
	i1 v5204 = v5201|v5203;
	i8 v5205 = (i8)(intptr_t)(ws+4152);
	i8 v5206 = *(i8*)(intptr_t)v5205;
	i8 v5207 = v5206+(+65);
	*(i1*)(intptr_t)v5207 = v5204;

	i8 v5208 = (i8)(intptr_t)(ws+4152);
	i8 v5209 = *(i8*)(intptr_t)v5208;
	i8 v5210 = v5209+(+66);
	i1 v5211 = *(i1*)(intptr_t)v5210;
	i8 v5212 = (i8)(intptr_t)(ws+4168);
	i1 v5213 = *(i1*)(intptr_t)v5212;
	i1 v5214 = v5211|v5213;
	i8 v5215 = (i8)(intptr_t)(ws+4152);
	i8 v5216 = *(i8*)(intptr_t)v5215;
	i8 v5217 = v5216+(+66);
	*(i1*)(intptr_t)v5217 = v5214;

	i8 v5218 = (i8)(intptr_t)(ws+4152);
	i8 v5219 = *(i8*)(intptr_t)v5218;
	i8 v5220 = (i8)(intptr_t)(ws+4160);
	i8 v5221 = *(i8*)(intptr_t)v5220;
	if (v5219==v5221) goto c02_033f; else goto c02_0340;

c02_033f:;

	goto c02_033b;

c02_0340:;

c02_033c:;

	i8 v5222 = (i8)(intptr_t)(ws+4152);
	i8 v5223 = *(i8*)(intptr_t)v5222;
	i8 v5224 = *(i8*)(intptr_t)v5223;
	i8 v5225 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5225 = v5224;

	goto c02_0336;

c02_033b:;

endsub:;
}
const i1 c02_s01e0[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };
	void f68_SimpleError(i8 /* s */);

// CreateSpill workspace at ws+4152 length ws+24
void f370_CreateSpill(i1 p5301 /* dest */, i1 p5302 /* src */, i8 p5303 /* insn */) {
	*(i8*)(intptr_t)(ws+4152) = p5303; /* insn */
	*(i1*)(intptr_t)(ws+4160) = p5302; /* src */
	*(i1*)(intptr_t)(ws+4161) = p5301; /* dest */

	i8 v5304 = (i8)(intptr_t)(ws+4152);
	i8 v5305 = *(i8*)(intptr_t)v5304;
	i8 v5306 = v5305+(+83);
	i1 v5307 = *(i1*)(intptr_t)v5306;
	i8 v5308 = (i8)(intptr_t)(ws+4162);
	*(i1*)(intptr_t)v5308 = v5307;

	i8 v5309 = (i8)(intptr_t)(ws+4162);
	i1 v5310 = *(i1*)(intptr_t)v5309;
	i1 v5311 = (i1)+5;
	if (v5310==v5311) goto c02_0354; else goto c02_0355;

c02_0354:;

	i8 v5312 = (i8)(intptr_t)c02_s01e0;
	i8 v5313 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v5313)(v5312);

c02_0355:;

c02_0351:;

	i8 v5314 = (i8)(intptr_t)(ws+4152);
	i8 v5315 = *(i8*)(intptr_t)v5314;
	i8 v5316 = v5315+(+67);
	i8 v5317 = (i8)(intptr_t)(ws+4162);
	i1 v5318 = *(i1*)(intptr_t)v5317;
	i8 v5319 = v5318;
	i1 v5320 = (i1)+1;
	i8 v5321 = ((i8)v5319)<<v5320;
	i8 v5322 = v5316+v5321;
	i8 v5323 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v5323 = v5322;

	i8 v5324 = (i8)(intptr_t)(ws+4160);
	i1 v5325 = *(i1*)(intptr_t)v5324;
	i8 v5326 = (i8)(intptr_t)(ws+4168);
	i8 v5327 = *(i8*)(intptr_t)v5326;
	*(i1*)(intptr_t)v5327 = v5325;

	i8 v5328 = (i8)(intptr_t)(ws+4161);
	i1 v5329 = *(i1*)(intptr_t)v5328;
	i8 v5330 = (i8)(intptr_t)(ws+4168);
	i8 v5331 = *(i8*)(intptr_t)v5330;
	i8 v5332 = v5331+(+1);
	*(i1*)(intptr_t)v5332 = v5329;

	i8 v5333 = (i8)(intptr_t)(ws+4162);
	i1 v5334 = *(i1*)(intptr_t)v5333;
	i1 v5335 = v5334+(+1);
	i8 v5336 = (i8)(intptr_t)(ws+4152);
	i8 v5337 = *(i8*)(intptr_t)v5336;
	i8 v5338 = v5337+(+83);
	*(i1*)(intptr_t)v5338 = v5335;

endsub:;
}
const i1 c02_s01e1[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };
	void f68_SimpleError(i8 /* s */);

// CreateReload workspace at ws+4152 length ws+24
void f371_CreateReload(i1 p5339 /* dest */, i1 p5340 /* src */, i8 p5341 /* insn */) {
	*(i8*)(intptr_t)(ws+4152) = p5341; /* insn */
	*(i1*)(intptr_t)(ws+4160) = p5340; /* src */
	*(i1*)(intptr_t)(ws+4161) = p5339; /* dest */

	i8 v5342 = (i8)(intptr_t)(ws+4152);
	i8 v5343 = *(i8*)(intptr_t)v5342;
	i8 v5344 = v5343+(+84);
	i1 v5345 = *(i1*)(intptr_t)v5344;
	i8 v5346 = (i8)(intptr_t)(ws+4162);
	*(i1*)(intptr_t)v5346 = v5345;

	i8 v5347 = (i8)(intptr_t)(ws+4162);
	i1 v5348 = *(i1*)(intptr_t)v5347;
	i1 v5349 = (i1)+5;
	if (v5348==v5349) goto c02_0359; else goto c02_035a;

c02_0359:;

	i8 v5350 = (i8)(intptr_t)c02_s01e1;
	i8 v5351 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v5351)(v5350);

c02_035a:;

c02_0356:;

	i8 v5352 = (i8)(intptr_t)(ws+4152);
	i8 v5353 = *(i8*)(intptr_t)v5352;
	i8 v5354 = v5353+(+75);
	i8 v5355 = (i8)(intptr_t)(ws+4162);
	i1 v5356 = *(i1*)(intptr_t)v5355;
	i8 v5357 = v5356;
	i1 v5358 = (i1)+1;
	i8 v5359 = ((i8)v5357)<<v5358;
	i8 v5360 = v5354+v5359;
	i8 v5361 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v5361 = v5360;

	i8 v5362 = (i8)(intptr_t)(ws+4160);
	i1 v5363 = *(i1*)(intptr_t)v5362;
	i8 v5364 = (i8)(intptr_t)(ws+4168);
	i8 v5365 = *(i8*)(intptr_t)v5364;
	*(i1*)(intptr_t)v5365 = v5363;

	i8 v5366 = (i8)(intptr_t)(ws+4161);
	i1 v5367 = *(i1*)(intptr_t)v5366;
	i8 v5368 = (i8)(intptr_t)(ws+4168);
	i8 v5369 = *(i8*)(intptr_t)v5368;
	i8 v5370 = v5369+(+1);
	*(i1*)(intptr_t)v5370 = v5367;

	i8 v5371 = (i8)(intptr_t)(ws+4162);
	i1 v5372 = *(i1*)(intptr_t)v5371;
	i1 v5373 = v5372+(+1);
	i8 v5374 = (i8)(intptr_t)(ws+4152);
	i8 v5375 = *(i8*)(intptr_t)v5374;
	i8 v5376 = v5375+(+84);
	*(i1*)(intptr_t)v5376 = v5373;

endsub:;
}
	void f168_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f168_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f168_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f168_ArchEmitMove(i1 /* dest */, i1 /* src */);

// ShuffleRegisters workspace at ws+4120 length ws+25
void f372_ShuffleRegisters(i8 p5377 /* moves */) {
	*(i8*)(intptr_t)(ws+4120) = p5377; /* moves */

	i1 v5378 = (i1)+0;
	i8 v5379 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v5379 = v5378;

	i1 v5380 = (i1)+0;
	i8 v5381 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v5381 = v5380;

	i8 v5382 = (i8)(intptr_t)(ws+4120);
	i8 v5383 = *(i8*)(intptr_t)v5382;
	i8 v5384 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5384 = v5383;

	i1 v5385 = (i1)+4;
	i8 v5386 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5386 = v5385;

c02_035b:;

	i8 v5387 = (i8)(intptr_t)(ws+4144);
	i1 v5388 = *(i1*)(intptr_t)v5387;
	i1 v5389 = (i1)+0;
	if (v5388==v5389) goto c02_0360; else goto c02_035f;

c02_035f:;

	i8 v5390 = (i8)(intptr_t)(ws+4128);
	i1 v5391 = *(i1*)(intptr_t)v5390;
	i8 v5392 = (i8)(intptr_t)(ws+4136);
	i8 v5393 = *(i8*)(intptr_t)v5392;
	i8 v5394 = v5393+(+1);
	i1 v5395 = *(i1*)(intptr_t)v5394;
	i1 v5396 = v5391|v5395;
	i8 v5397 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v5397 = v5396;

	i8 v5398 = (i8)(intptr_t)(ws+4129);
	i1 v5399 = *(i1*)(intptr_t)v5398;
	i8 v5400 = (i8)(intptr_t)(ws+4136);
	i8 v5401 = *(i8*)(intptr_t)v5400;
	i1 v5402 = *(i1*)(intptr_t)v5401;
	i1 v5403 = v5399|v5402;
	i8 v5404 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v5404 = v5403;

	i8 v5405 = (i8)(intptr_t)(ws+4144);
	i1 v5406 = *(i1*)(intptr_t)v5405;
	i1 v5407 = v5406+(-1);
	i8 v5408 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5408 = v5407;

	i8 v5409 = (i8)(intptr_t)(ws+4136);
	i8 v5410 = *(i8*)(intptr_t)v5409;
	i8 v5411 = v5410+(+2);
	i8 v5412 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5412 = v5411;

	goto c02_035b;

c02_0360:;

c02_0361:;

	i8 v5413 = (i8)(intptr_t)(ws+4120);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5415 = v5414;

	i1 v5416 = (i1)+4;
	i8 v5417 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5417 = v5416;

c02_0363:;

	i8 v5418 = (i8)(intptr_t)(ws+4144);
	i1 v5419 = *(i1*)(intptr_t)v5418;
	i1 v5420 = (i1)+0;
	if (v5419==v5420) goto c02_0368; else goto c02_0367;

c02_0367:;

	i8 v5421 = (i8)(intptr_t)(ws+4136);
	i8 v5422 = *(i8*)(intptr_t)v5421;
	i1 v5423 = *(i1*)(intptr_t)v5422;
	i1 v5424 = (i1)+0;
	if (v5423==v5424) goto c02_036f; else goto c02_0370;

c02_0370:;

	i8 v5425 = (i8)(intptr_t)(ws+4136);
	i8 v5426 = *(i8*)(intptr_t)v5425;
	i8 v5427 = v5426+(+1);
	i1 v5428 = *(i1*)(intptr_t)v5427;
	i1 v5429 = (i1)+0;
	if (v5428==v5429) goto c02_036e; else goto c02_036f;

c02_036e:;

	goto c02_0368;

c02_036f:;

c02_0369:;

	i8 v5430 = (i8)(intptr_t)(ws+4136);
	i8 v5431 = *(i8*)(intptr_t)v5430;
	i8 v5432 = v5431+(+2);
	i8 v5433 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5433 = v5432;

	i8 v5434 = (i8)(intptr_t)(ws+4144);
	i1 v5435 = *(i1*)(intptr_t)v5434;
	i1 v5436 = v5435+(-1);
	i8 v5437 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5437 = v5436;

	goto c02_0363;

c02_0368:;

	i8 v5438 = (i8)(intptr_t)(ws+4144);
	i1 v5439 = *(i1*)(intptr_t)v5438;
	i1 v5440 = (i1)+0;
	if (v5439==v5440) goto c02_0375; else goto c02_0374;

c02_0374:;

	i8 v5441 = (i8)(intptr_t)(ws+4136);
	i8 v5442 = *(i8*)(intptr_t)v5441;
	i1 v5443 = *(i1*)(intptr_t)v5442;
	i1 v5444 = (i1)+0;
	i8 v5445 = (i8)(intptr_t)(f168_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v5445)(v5444, v5443);

	i8 v5446 = (i8)(intptr_t)(ws+4129);
	i1 v5447 = *(i1*)(intptr_t)v5446;
	i8 v5448 = (i8)(intptr_t)(ws+4136);
	i8 v5449 = *(i8*)(intptr_t)v5448;
	i1 v5450 = *(i1*)(intptr_t)v5449;
	i1 v5451 = ~v5450;
	i1 v5452 = v5447&v5451;
	i8 v5453 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v5453 = v5452;

	i1 v5454 = (i1)+0;
	i8 v5455 = (i8)(intptr_t)(ws+4136);
	i8 v5456 = *(i8*)(intptr_t)v5455;
	*(i1*)(intptr_t)v5456 = v5454;

	goto c02_0361;

c02_0375:;

c02_0371:;

	i8 v5457 = (i8)(intptr_t)(ws+4120);
	i8 v5458 = *(i8*)(intptr_t)v5457;
	i8 v5459 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5459 = v5458;

	i1 v5460 = (i1)+4;
	i8 v5461 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5461 = v5460;

c02_0376:;

	i8 v5462 = (i8)(intptr_t)(ws+4144);
	i1 v5463 = *(i1*)(intptr_t)v5462;
	i1 v5464 = (i1)+0;
	if (v5463==v5464) goto c02_037b; else goto c02_037a;

c02_037a:;

	i8 v5465 = (i8)(intptr_t)(ws+4136);
	i8 v5466 = *(i8*)(intptr_t)v5465;
	i1 v5467 = *(i1*)(intptr_t)v5466;
	i1 v5468 = (i1)+0;
	if (v5467==v5468) goto c02_0384; else goto c02_0386;

c02_0386:;

	i8 v5469 = (i8)(intptr_t)(ws+4136);
	i8 v5470 = *(i8*)(intptr_t)v5469;
	i8 v5471 = v5470+(+1);
	i1 v5472 = *(i1*)(intptr_t)v5471;
	i1 v5473 = (i1)+0;
	if (v5472==v5473) goto c02_0384; else goto c02_0385;

c02_0385:;

	i8 v5474 = (i8)(intptr_t)(ws+4136);
	i8 v5475 = *(i8*)(intptr_t)v5474;
	i8 v5476 = v5475+(+1);
	i1 v5477 = *(i1*)(intptr_t)v5476;
	i8 v5478 = (i8)(intptr_t)(ws+4129);
	i1 v5479 = *(i1*)(intptr_t)v5478;
	i1 v5480 = v5477&v5479;
	i1 v5481 = (i1)+0;
	if (v5480==v5481) goto c02_0383; else goto c02_0384;

c02_0383:;

	goto c02_037b;

c02_0384:;

c02_037c:;

	i8 v5482 = (i8)(intptr_t)(ws+4136);
	i8 v5483 = *(i8*)(intptr_t)v5482;
	i8 v5484 = v5483+(+2);
	i8 v5485 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5485 = v5484;

	i8 v5486 = (i8)(intptr_t)(ws+4144);
	i1 v5487 = *(i1*)(intptr_t)v5486;
	i1 v5488 = v5487+(-1);
	i8 v5489 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5489 = v5488;

	goto c02_0376;

c02_037b:;

	i8 v5490 = (i8)(intptr_t)(ws+4144);
	i1 v5491 = *(i1*)(intptr_t)v5490;
	i1 v5492 = (i1)+0;
	if (v5491==v5492) goto c02_038b; else goto c02_038a;

c02_038a:;

	i8 v5493 = (i8)(intptr_t)(ws+4136);
	i8 v5494 = *(i8*)(intptr_t)v5493;
	i1 v5495 = *(i1*)(intptr_t)v5494;
	i8 v5496 = (i8)(intptr_t)(ws+4136);
	i8 v5497 = *(i8*)(intptr_t)v5496;
	i8 v5498 = v5497+(+1);
	i1 v5499 = *(i1*)(intptr_t)v5498;
	i8 v5500 = (i8)(intptr_t)(f168_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v5500)(v5499, v5495);

	i8 v5501 = (i8)(intptr_t)(ws+4129);
	i1 v5502 = *(i1*)(intptr_t)v5501;
	i8 v5503 = (i8)(intptr_t)(ws+4136);
	i8 v5504 = *(i8*)(intptr_t)v5503;
	i1 v5505 = *(i1*)(intptr_t)v5504;
	i1 v5506 = ~v5505;
	i1 v5507 = v5502&v5506;
	i8 v5508 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v5508 = v5507;

	i8 v5509 = (i8)(intptr_t)(ws+4128);
	i1 v5510 = *(i1*)(intptr_t)v5509;
	i8 v5511 = (i8)(intptr_t)(ws+4136);
	i8 v5512 = *(i8*)(intptr_t)v5511;
	i8 v5513 = v5512+(+1);
	i1 v5514 = *(i1*)(intptr_t)v5513;
	i1 v5515 = ~v5514;
	i1 v5516 = v5510&v5515;
	i8 v5517 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v5517 = v5516;

	i1 v5518 = (i1)+0;
	i8 v5519 = (i8)(intptr_t)(ws+4136);
	i8 v5520 = *(i8*)(intptr_t)v5519;
	*(i1*)(intptr_t)v5520 = v5518;

	i1 v5521 = (i1)+0;
	i8 v5522 = (i8)(intptr_t)(ws+4136);
	i8 v5523 = *(i8*)(intptr_t)v5522;
	i8 v5524 = v5523+(+1);
	*(i1*)(intptr_t)v5524 = v5521;

	goto c02_0361;

c02_038b:;

c02_0387:;

	i8 v5525 = (i8)(intptr_t)(ws+4120);
	i8 v5526 = *(i8*)(intptr_t)v5525;
	i8 v5527 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5527 = v5526;

	i1 v5528 = (i1)+4;
	i8 v5529 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5529 = v5528;

c02_038c:;

	i8 v5530 = (i8)(intptr_t)(ws+4144);
	i1 v5531 = *(i1*)(intptr_t)v5530;
	i1 v5532 = (i1)+0;
	if (v5531==v5532) goto c02_0391; else goto c02_0390;

c02_0390:;

	i8 v5533 = (i8)(intptr_t)(ws+4136);
	i8 v5534 = *(i8*)(intptr_t)v5533;
	i1 v5535 = *(i1*)(intptr_t)v5534;
	i1 v5536 = (i1)+0;
	if (v5535==v5536) goto c02_0399; else goto c02_0398;

c02_0399:;

	i8 v5537 = (i8)(intptr_t)(ws+4136);
	i8 v5538 = *(i8*)(intptr_t)v5537;
	i8 v5539 = v5538+(+1);
	i1 v5540 = *(i1*)(intptr_t)v5539;
	i1 v5541 = (i1)+0;
	if (v5540==v5541) goto c02_0398; else goto c02_0397;

c02_0397:;

	goto c02_0391;

c02_0398:;

c02_0392:;

	i8 v5542 = (i8)(intptr_t)(ws+4136);
	i8 v5543 = *(i8*)(intptr_t)v5542;
	i8 v5544 = v5543+(+2);
	i8 v5545 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5545 = v5544;

	i8 v5546 = (i8)(intptr_t)(ws+4144);
	i1 v5547 = *(i1*)(intptr_t)v5546;
	i1 v5548 = v5547+(-1);
	i8 v5549 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5549 = v5548;

	goto c02_038c;

c02_0391:;

	i8 v5550 = (i8)(intptr_t)(ws+4144);
	i1 v5551 = *(i1*)(intptr_t)v5550;
	i1 v5552 = (i1)+0;
	if (v5551==v5552) goto c02_039e; else goto c02_039d;

c02_039d:;

	i1 v5553 = (i1)+0;
	i8 v5554 = (i8)(intptr_t)(ws+4136);
	i8 v5555 = *(i8*)(intptr_t)v5554;
	i8 v5556 = v5555+(+1);
	i1 v5557 = *(i1*)(intptr_t)v5556;
	i8 v5558 = (i8)(intptr_t)(f168_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v5558)(v5557, v5553);

	i8 v5559 = (i8)(intptr_t)(ws+4128);
	i1 v5560 = *(i1*)(intptr_t)v5559;
	i8 v5561 = (i8)(intptr_t)(ws+4136);
	i8 v5562 = *(i8*)(intptr_t)v5561;
	i8 v5563 = v5562+(+1);
	i1 v5564 = *(i1*)(intptr_t)v5563;
	i1 v5565 = ~v5564;
	i1 v5566 = v5560&v5565;
	i8 v5567 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v5567 = v5566;

	i1 v5568 = (i1)+0;
	i8 v5569 = (i8)(intptr_t)(ws+4136);
	i8 v5570 = *(i8*)(intptr_t)v5569;
	i8 v5571 = v5570+(+1);
	*(i1*)(intptr_t)v5571 = v5568;

	goto c02_0361;

c02_039e:;

c02_039a:;

	i8 v5572 = (i8)(intptr_t)(ws+4120);
	i8 v5573 = *(i8*)(intptr_t)v5572;
	i8 v5574 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5574 = v5573;

	i1 v5575 = (i1)+4;
	i8 v5576 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5576 = v5575;

c02_039f:;

	i8 v5577 = (i8)(intptr_t)(ws+4144);
	i1 v5578 = *(i1*)(intptr_t)v5577;
	i1 v5579 = (i1)+0;
	if (v5578==v5579) goto c02_03a4; else goto c02_03a3;

c02_03a3:;

	i8 v5580 = (i8)(intptr_t)(ws+4136);
	i8 v5581 = *(i8*)(intptr_t)v5580;
	i1 v5582 = *(i1*)(intptr_t)v5581;
	i1 v5583 = (i1)+0;
	if (v5582==v5583) goto c02_03ab; else goto c02_03ac;

c02_03ac:;

	i8 v5584 = (i8)(intptr_t)(ws+4136);
	i8 v5585 = *(i8*)(intptr_t)v5584;
	i8 v5586 = v5585+(+1);
	i1 v5587 = *(i1*)(intptr_t)v5586;
	i1 v5588 = (i1)+0;
	if (v5587==v5588) goto c02_03ab; else goto c02_03aa;

c02_03aa:;

	goto c02_03a4;

c02_03ab:;

c02_03a5:;

	i8 v5589 = (i8)(intptr_t)(ws+4136);
	i8 v5590 = *(i8*)(intptr_t)v5589;
	i8 v5591 = v5590+(+2);
	i8 v5592 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5592 = v5591;

	i8 v5593 = (i8)(intptr_t)(ws+4144);
	i1 v5594 = *(i1*)(intptr_t)v5593;
	i1 v5595 = v5594+(-1);
	i8 v5596 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5596 = v5595;

	goto c02_039f;

c02_03a4:;

	i8 v5597 = (i8)(intptr_t)(ws+4144);
	i1 v5598 = *(i1*)(intptr_t)v5597;
	i1 v5599 = (i1)+0;
	if (v5598==v5599) goto c02_03b1; else goto c02_03b0;

c02_03b0:;

	i8 v5600 = (i8)(intptr_t)(ws+4136);
	i8 v5601 = *(i8*)(intptr_t)v5600;
	i1 v5602 = *(i1*)(intptr_t)v5601;
	i1 v5603 = (i1)+0;
	i8 v5604 = (i8)(intptr_t)(f168_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v5604)(v5603, v5602);

	i8 v5605 = (i8)(intptr_t)(ws+4129);
	i1 v5606 = *(i1*)(intptr_t)v5605;
	i8 v5607 = (i8)(intptr_t)(ws+4136);
	i8 v5608 = *(i8*)(intptr_t)v5607;
	i1 v5609 = *(i1*)(intptr_t)v5608;
	i1 v5610 = ~v5609;
	i1 v5611 = v5606&v5610;
	i8 v5612 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v5612 = v5611;

	i1 v5613 = (i1)+0;
	i8 v5614 = (i8)(intptr_t)(ws+4136);
	i8 v5615 = *(i8*)(intptr_t)v5614;
	*(i1*)(intptr_t)v5615 = v5613;

	goto c02_0361;

c02_03b1:;

c02_03ad:;

	goto c02_0362;

c02_0362:;

endsub:;
}
	void f61_PushNode(i8 /* node */);
	void f63_NextNode(i8* /* node */);
	void f21_print_hex_i32(i4 /* value */);
	void f9_print_char(i1 /* c */);
	void f18_print_i8(i1 /* value */);
	void f9_print_char(i1 /* c */);
	void f78_MidcodeName(i8* /* name */, i1 /* op */);
	void f12_print(i8 /* ptr */);
	void f9_print_char(i1 /* c */);
	void f21_print_hex_i32(i4 /* value */);
	void f9_print_char(i1 /* c */);
	void f21_print_hex_i32(i4 /* value */);
	void f9_print_char(i1 /* c */);
	void f21_print_hex_i32(i4 /* value */);
	void f9_print_char(i1 /* c */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);

// PrintNodes workspace at ws+4176 length ws+40
void f373_PrintNodes(i8 p5616 /* rootnode */) {
	*(i8*)(intptr_t)(ws+4176) = p5616; /* rootnode */

	i8 v5617 = (i8)(intptr_t)(ws+184);
	i8 v5618 = *(i8*)(intptr_t)v5617;
	i8 v5619 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v5619 = v5618;

	i8 v5620 = (i8)(intptr_t)(ws+4176);
	i8 v5621 = *(i8*)(intptr_t)v5620;
	i8 v5622 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5622)(v5621);

c02_03b2:;

	i8 v5623 = (i8)(intptr_t)(ws+184);
	i8 v5624 = *(i8*)(intptr_t)v5623;
	i8 v5625 = (i8)(intptr_t)(ws+4184);
	i8 v5626 = *(i8*)(intptr_t)v5625;
	if (v5624==v5626) goto c02_03b7; else goto c02_03b6;

c02_03b6:;

	i8 v5627 = (i8)(intptr_t)(f63_NextNode);
	i8 v5628;

	((void(*)(i8* /* node */))(intptr_t)v5627)(&v5628);

	i8 v5629 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5629 = v5628;

	i8 v5630 = (i8)(intptr_t)(ws+4192);
	i8 v5631 = *(i8*)(intptr_t)v5630;
	i8 v5632 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v5632 = v5631;

	i8 v5633 = (i8)(intptr_t)(ws+4200);
	i8 v5634 = *(i8*)(intptr_t)v5633;
	i8 v5635 = (i8)+0;
	if (v5634==v5635) goto c02_03bb; else goto c02_03bc;

c02_03bb:;

	goto c02_03b7;

c02_03bc:;

c02_03b8:;

	i8 v5636 = (i8)(intptr_t)(ws+4200);
	i8 v5637 = *(i8*)(intptr_t)v5636;
	i4 v5638 = v5637;
	i8 v5639 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5639)(v5638);

	i1 v5640 = (i1)+32;
	i8 v5641 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5641)(v5640);

	i8 v5642 = (i8)(intptr_t)(ws+4200);
	i8 v5643 = *(i8*)(intptr_t)v5642;
	i8 v5644 = v5643+(+256);
	i1 v5645 = *(i1*)(intptr_t)v5644;
	i8 v5646 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v5646)(v5645);

	i1 v5647 = (i1)+61;
	i8 v5648 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5648)(v5647);

	i8 v5649 = (i8)(intptr_t)(ws+4200);
	i8 v5650 = *(i8*)(intptr_t)v5649;
	i8 v5651 = v5650+(+256);
	i1 v5652 = *(i1*)(intptr_t)v5651;
	i8 v5653 = (i8)(intptr_t)(f78_MidcodeName);
	i8 v5654;

	((void(*)(i8* /* name */, i1 /* op */))(intptr_t)v5653)(&v5654, v5652);

	i8 v5655 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v5655 = v5654;

	i8 v5656 = (i8)(intptr_t)(ws+4208);
	i8 v5657 = *(i8*)(intptr_t)v5656;
	i8 v5658 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5658)(v5657);

	i1 v5659 = (i1)+32;
	i8 v5660 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5660)(v5659);

	i8 v5661 = (i8)(intptr_t)(ws+4200);
	i8 v5662 = *(i8*)(intptr_t)v5661;
	i8 v5663 = v5662+(+56);
	i1 v5664 = *(i1*)(intptr_t)v5663;
	i4 v5665 = v5664;
	i8 v5666 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5666)(v5665);

	i1 v5667 = (i1)+32;
	i8 v5668 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5668)(v5667);

	i8 v5669 = (i8)(intptr_t)(ws+4200);
	i8 v5670 = *(i8*)(intptr_t)v5669;
	i8 v5671 = v5670+(+57);
	i1 v5672 = *(i1*)(intptr_t)v5671;
	i4 v5673 = v5672;
	i8 v5674 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5674)(v5673);

	i1 v5675 = (i1)+32;
	i8 v5676 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5676)(v5675);

	i8 v5677 = (i8)(intptr_t)(ws+4200);
	i8 v5678 = *(i8*)(intptr_t)v5677;
	i8 v5679 = v5678+(+24);
	i8 v5680 = *(i8*)(intptr_t)v5679;
	i4 v5681 = v5680;
	i8 v5682 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5682)(v5681);

	i1 v5683 = (i1)+32;
	i8 v5684 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5684)(v5683);

	i8 v5685 = (i8)(intptr_t)(ws+4200);
	i8 v5686 = *(i8*)(intptr_t)v5685;
	i8 v5687 = v5686+(+32);
	i8 v5688 = *(i8*)(intptr_t)v5687;
	i4 v5689 = v5688;
	i8 v5690 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5690)(v5689);

	i8 v5691 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v5691)();

	goto c02_03b2;

c02_03b7:;

endsub:;
}
	void f364_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f364_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// IsSimpleValue workspace at ws+4216 length ws+33
void f377_IsSimpleValue(i1* p5820 /* res */, i8 p5821 /* value */, i8 p5822 /* insn */) {
	*(i8*)(intptr_t)(ws+4216) = p5822; /* insn */
	*(i8*)(intptr_t)(ws+4224) = p5821; /* value */

	i1 v5823 = (i1)+0;
	i8 v5824 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5824 = v5823;

	i8 v5825 = (i8)(intptr_t)(ws+4216);
	i8 v5826 = *(i8*)(intptr_t)v5825;
	i8 v5827 = v5826+(+48);
	i1 v5828 = *(i1*)(intptr_t)v5827;
	i8 v5829 = (i8)(intptr_t)(f364_IsStackedRegister);
	i1 v5830;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v5829)(&v5830, v5828);

	i8 v5831 = (i8)(intptr_t)(ws+4233);
	*(i1*)(intptr_t)v5831 = v5830;

	i8 v5832 = (i8)(intptr_t)(ws+4233);
	i1 v5833 = *(i1*)(intptr_t)v5832;
	i1 v5834 = (i1)+0;
	if (v5833==v5834) goto c02_03e8; else goto c02_03e9;

c02_03e8:;

	i8 v5835 = (i8)(intptr_t)(ws+4216);
	i8 v5836 = *(i8*)(intptr_t)v5835;
	i8 v5837 = v5836+(+16);
	i8 v5838 = *(i8*)(intptr_t)v5837;
	i8 v5839 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v5839 = v5838;

	i8 v5840 = (i8)(intptr_t)(ws+4240);
	i8 v5841 = *(i8*)(intptr_t)v5840;
	i8 v5842 = v5841+(+256);
	i1 v5843 = *(i1*)(intptr_t)v5842;
	i1 v5844 = (i1)+24;
	if (v5843==v5844) goto c02_03ed; else goto c02_03ee;

c02_03ed:;

	i8 v5845 = (i8)(intptr_t)(ws+4240);
	i8 v5846 = *(i8*)(intptr_t)v5845;
	i8 v5847 = v5846+(+24);
	i8 v5848 = *(i8*)(intptr_t)v5847;
	i8 v5849 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v5849 = v5848;

c02_03ee:;

c02_03ea:;

	i8 v5850 = (i8)(intptr_t)(ws+4240);
	i8 v5851 = *(i8*)(intptr_t)v5850;
	i8 v5852 = v5851+(+57);
	i1 v5853 = *(i1*)(intptr_t)v5852;
	i8 v5854 = (i8)(intptr_t)(f364_IsStackedRegister);
	i1 v5855;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v5854)(&v5855, v5853);

	i8 v5856 = (i8)(intptr_t)(ws+4248);
	*(i1*)(intptr_t)v5856 = v5855;

	i8 v5857 = (i8)(intptr_t)(ws+4240);
	i8 v5858 = *(i8*)(intptr_t)v5857;
	i8 v5859 = v5858+(+24);
	i8 v5860 = *(i8*)(intptr_t)v5859;
	i8 v5861 = (i8)+0;
	if (v5860==v5861) goto c02_03f5; else goto c02_03f6;

c02_03f6:;

	i8 v5862 = (i8)(intptr_t)(ws+4248);
	i1 v5863 = *(i1*)(intptr_t)v5862;
	i1 v5864 = (i1)+0;
	if (v5863==v5864) goto c02_03f4; else goto c02_03f5;

c02_03f4:;

	goto endsub;

c02_03f5:;

c02_03ef:;

	i8 v5865 = (i8)(intptr_t)(ws+4240);
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = v5866+(+256);
	i1 v5868 = *(i1*)(intptr_t)v5867;
	i1 v5869 = (i1)+42;
	if (v5868==v5869) goto c02_03fa; else goto c02_03fb;

c02_03fa:;

	i8 v5870 = (i8)(intptr_t)(ws+4240);
	i8 v5871 = *(i8*)(intptr_t)v5870;
	i8 v5872 = (i8)+18;
	i8 v5873 = (i8)(intptr_t)(ws+4224);
	i8 v5874 = *(i8*)(intptr_t)v5873;
	i8 v5875 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v5875)(v5874, v5872, v5871);

	i1 v5876 = (i1)+42;
	i8 v5877 = (i8)(intptr_t)(ws+4224);
	i8 v5878 = *(i8*)(intptr_t)v5877;
	i8 v5879 = v5878+(+19);
	*(i1*)(intptr_t)v5879 = v5876;

	i1 v5880 = (i1)+1;
	i8 v5881 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5881 = v5880;

	goto c02_03f7;

c02_03fb:;

	i8 v5882 = (i8)(intptr_t)(ws+4240);
	i8 v5883 = *(i8*)(intptr_t)v5882;
	i8 v5884 = v5883+(+256);
	i1 v5885 = *(i1*)(intptr_t)v5884;
	i1 v5886 = (i1)+40;
	if (v5885==v5886) goto c02_03fe; else goto c02_03ff;

c02_03fe:;

	i8 v5887 = (i8)(intptr_t)(ws+4240);
	i8 v5888 = *(i8*)(intptr_t)v5887;
	i4 v5889 = *(i4*)(intptr_t)v5888;
	i8 v5890 = (i8)(intptr_t)(ws+4224);
	i8 v5891 = *(i8*)(intptr_t)v5890;
	*(i4*)(intptr_t)v5891 = v5889;

	i1 v5892 = (i1)+40;
	i8 v5893 = (i8)(intptr_t)(ws+4224);
	i8 v5894 = *(i8*)(intptr_t)v5893;
	i8 v5895 = v5894+(+19);
	*(i1*)(intptr_t)v5895 = v5892;

	i1 v5896 = (i1)+1;
	i8 v5897 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5897 = v5896;

c02_03ff:;

c02_03f7:;

c02_03e9:;

c02_03e5:;

endsub:;
	*p5820 = *(i1*)(intptr_t)(ws+4232);
}

// check_deref workspace at ws+4240 length ws+0
void f379_check_deref(void) {

	i8 v5911 = (i8)(intptr_t)(ws+4216);
	i8 v5912 = *(i8*)(intptr_t)v5911;
	i8 v5913 = *(i8*)(intptr_t)v5912;
	i8 v5914 = (i8)(intptr_t)(ws+4224);
	i8 v5915 = *(i8*)(intptr_t)v5914;
	i8 v5916 = *(i8*)(intptr_t)v5915;
	if (v5913==v5916) goto c02_040f; else goto c02_040d;

c02_040f:;

	i8 v5917 = (i8)(intptr_t)(ws+4216);
	i8 v5918 = *(i8*)(intptr_t)v5917;
	i8 v5919 = v5918+(+12);
	i2 v5920 = *(i2*)(intptr_t)v5919;
	i8 v5921 = (i8)(intptr_t)(ws+4216);
	i8 v5922 = *(i8*)(intptr_t)v5921;
	i8 v5923 = v5922+(+16);
	i2 v5924 = *(i2*)(intptr_t)v5923;
	i2 v5925 = v5920+v5924;
	i8 v5926 = (i8)(intptr_t)(ws+4224);
	i8 v5927 = *(i8*)(intptr_t)v5926;
	i8 v5928 = v5927+(+12);
	i2 v5929 = *(i2*)(intptr_t)v5928;
	i8 v5930 = (i8)(intptr_t)(ws+4224);
	i8 v5931 = *(i8*)(intptr_t)v5930;
	i8 v5932 = v5931+(+16);
	i2 v5933 = *(i2*)(intptr_t)v5932;
	i2 v5934 = v5929+v5933;
	if (v5925==v5934) goto c02_040e; else goto c02_040d;

c02_040e:;

	i8 v5935 = (i8)(intptr_t)(ws+4216);
	i8 v5936 = *(i8*)(intptr_t)v5935;
	i8 v5937 = v5936+(+10);
	i1 v5938 = *(i1*)(intptr_t)v5937;
	i8 v5939 = (i8)(intptr_t)(ws+4224);
	i8 v5940 = *(i8*)(intptr_t)v5939;
	i8 v5941 = v5940+(+10);
	i1 v5942 = *(i1*)(intptr_t)v5941;
	if (v5938==v5942) goto c02_040c; else goto c02_040d;

c02_040c:;

	i1 v5943 = (i1)+1;
	i8 v5944 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5944 = v5943;

c02_040d:;

c02_0405:;

endsub:;
}
	void f379_check_deref(void);
	void f379_check_deref(void);
	void f379_check_deref(void);
	void f379_check_deref(void);
	void f379_check_deref(void);

// SimpleValuesMatch workspace at ws+4216 length ws+17
void f378_SimpleValuesMatch(i1* p5898 /* res */, i8 p5899 /* right */, i8 p5900 /* left */) {
	*(i8*)(intptr_t)(ws+4216) = p5900; /* left */
	*(i8*)(intptr_t)(ws+4224) = p5899; /* right */

	i1 v5901 = (i1)+0;
	i8 v5902 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5902 = v5901;

	i8 v5903 = (i8)(intptr_t)(ws+4216);
	i8 v5904 = *(i8*)(intptr_t)v5903;
	i8 v5905 = v5904+(+19);
	i1 v5906 = *(i1*)(intptr_t)v5905;
	i8 v5907 = (i8)(intptr_t)(ws+4224);
	i8 v5908 = *(i8*)(intptr_t)v5907;
	i8 v5909 = v5908+(+19);
	i1 v5910 = *(i1*)(intptr_t)v5909;
	if (v5906==v5910) goto c02_0404; else goto c02_0403;

c02_0403:;

	goto endsub;

c02_0404:;

c02_0400:;


	i8 v5945 = (i8)(intptr_t)(ws+4216);
	i8 v5946 = *(i8*)(intptr_t)v5945;
	i8 v5947 = v5946+(+19);
	i1 v5948 = *(i1*)(intptr_t)v5947;

	if (v5948 != +45) goto c02_0411;

	i8 v5949 = (i8)(intptr_t)(f379_check_deref);

	((void(*)(void))(intptr_t)v5949)();

	goto c02_0410;

c02_0411:;

	if (v5948 != +46) goto c02_0412;

	i8 v5950 = (i8)(intptr_t)(f379_check_deref);

	((void(*)(void))(intptr_t)v5950)();

	goto c02_0410;

c02_0412:;

	if (v5948 != +47) goto c02_0413;

	i8 v5951 = (i8)(intptr_t)(f379_check_deref);

	((void(*)(void))(intptr_t)v5951)();

	goto c02_0410;

c02_0413:;

	if (v5948 != +48) goto c02_0414;

	i8 v5952 = (i8)(intptr_t)(f379_check_deref);

	((void(*)(void))(intptr_t)v5952)();

	goto c02_0410;

c02_0414:;

	if (v5948 != +42) goto c02_0415;

	i8 v5953 = (i8)(intptr_t)(f379_check_deref);

	((void(*)(void))(intptr_t)v5953)();

	goto c02_0410;

c02_0415:;

	if (v5948 != +40) goto c02_0416;

	i8 v5954 = (i8)(intptr_t)(ws+4216);
	i8 v5955 = *(i8*)(intptr_t)v5954;
	i4 v5956 = *(i4*)(intptr_t)v5955;
	i8 v5957 = (i8)(intptr_t)(ws+4224);
	i8 v5958 = *(i8*)(intptr_t)v5957;
	i4 v5959 = *(i4*)(intptr_t)v5958;
	if (v5956==v5959) goto c02_041a; else goto c02_041b;

c02_041a:;

	i1 v5960 = (i1)+1;
	i8 v5961 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v5961 = v5960;

c02_041b:;

c02_0417:;

c02_0416:;

c02_0410:;


endsub:;
	*p5898 = *(i1*)(intptr_t)(ws+4232);
}
	void f61_PushNode(i8 /* node */);
	void f147_AllocNewInstruction(i8* /* insn */);
	void f62_PopNode(i8* /* node */);
	void f23_MemZero(i8 /* size */, i8 /* ptr */);
	void f23_MemZero(i8 /* size */, i8 /* ptr */);
	void f363_PopulateMatchBuffer(i8 /* matchbuf */, i8 /* n */, i8 /* insn */);

// RewindRulePointers workspace at ws+4176 length ws+0
void f382_RewindRulePointers(void) {

	i8 v6010 = (i8)(intptr_t)(ws+4112);
	i8 v6011 = (i8)+4;
	i8 v6012 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v6012)(v6011, v6010);

	i8 v6013 = (i8)(intptr_t)(ws+4120);
	i8 v6014 = (i8)+32;
	i8 v6015 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v6015)(v6014, v6013);

	i8 v6016 = (i8)(intptr_t)(ws+4088);
	i8 v6017 = *(i8*)(intptr_t)v6016;
	i8 v6018 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v6018 = v6017;

	i8 v6019 = (i8)(intptr_t)(ws+4072);
	i8 v6020 = *(i8*)(intptr_t)v6019;
	i8 v6021 = (i8)(intptr_t)(ws+4120);
	i8 v6022 = (i8)(intptr_t)(ws+4112);
	i8 v6023 = (i8)(intptr_t)(f363_PopulateMatchBuffer);

	((void(*)(i8 /* matchbuf */, i8 /* n */, i8 /* insn */))(intptr_t)v6023)(v6022, v6021, v6020);

	i1 v6024 = (i1)+255;
	i8 v6025 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v6025 = v6024;

	i8 v6026 = (i8)(intptr_t)((i1*)f3___main_s02ff);
	i8 v6027 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v6027 = v6026;

	i8 v6028 = (i8)(intptr_t)((i1*)f3___main_s0300);
	i8 v6029 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v6029 = v6028;

	i8 v6030 = (i8)(intptr_t)((i1*)f3___main_s0301-7);
	i8 v6031 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v6031 = v6030;

endsub:;
}
	void f189_MatchPredicate(i1* /* matches */, i8 /* n */, i1 /* rule */);

// TestRule workspace at ws+4176 length ws+28
void f383_TestRule(i1* p6032 /* result */) {

	i1 v6033 = (i1)+0;
	i8 v6034 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v6034 = v6033;

	i8 v6035 = (i8)(intptr_t)(ws+4104);
	i8 v6036 = *(i8*)(intptr_t)v6035;
	i8 v6037 = v6036+(+1);
	i1 v6038 = *(i1*)(intptr_t)v6037;
	i1 v6039 = (i1)+0;
	if (v6038==v6039) goto c02_042b; else goto c02_042a;

c02_042a:;

	i8 v6040 = (i8)(intptr_t)(ws+4088);
	i8 v6041 = *(i8*)(intptr_t)v6040;
	i8 v6042 = v6041+(+56);
	i1 v6043 = *(i1*)(intptr_t)v6042;
	i8 v6044 = (i8)(intptr_t)(ws+4104);
	i8 v6045 = *(i8*)(intptr_t)v6044;
	i8 v6046 = v6045+(+1);
	i1 v6047 = *(i1*)(intptr_t)v6046;
	i1 v6048 = v6043&v6047;
	i1 v6049 = (i1)+0;
	if (v6048==v6049) goto c02_042f; else goto c02_0430;

c02_042f:;

	goto endsub;

c02_0430:;

c02_042c:;

	goto c02_0427;

c02_042b:;

	i8 v6050 = (i8)(intptr_t)(ws+4088);
	i8 v6051 = *(i8*)(intptr_t)v6050;
	i8 v6052 = v6051+(+56);
	i1 v6053 = *(i1*)(intptr_t)v6052;
	i1 v6054 = (i1)+0;
	if (v6053==v6054) goto c02_0435; else goto c02_0434;

c02_0434:;

	goto endsub;

c02_0435:;

c02_0431:;

c02_0427:;

	i8 v6055 = (i8)(intptr_t)(ws+4112);
	i8 v6056 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6056 = v6055;

	i8 v6057 = (i8)(intptr_t)(ws+4152);
	i8 v6058 = *(i8*)(intptr_t)v6057;
	i8 v6059 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v6059 = v6058;

	i8 v6060 = (i8)(intptr_t)(ws+4104);
	i8 v6061 = *(i8*)(intptr_t)v6060;
	i8 v6062 = v6061+(+4);
	i1 v6063 = *(i1*)(intptr_t)v6062;
	i8 v6064 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v6064 = v6063;

c02_0436:;

	i8 v6065 = (i8)(intptr_t)(ws+4200);
	i1 v6066 = *(i1*)(intptr_t)v6065;
	i1 v6067 = (i1)+0;
	if (v6066==v6067) goto c02_043b; else goto c02_043a;

c02_043a:;

	i8 v6068 = (i8)(intptr_t)(ws+4184);
	i8 v6069 = *(i8*)(intptr_t)v6068;
	i1 v6070 = *(i1*)(intptr_t)v6069;
	i8 v6071 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v6071 = v6070;

	i8 v6072 = (i8)(intptr_t)(ws+4184);
	i8 v6073 = *(i8*)(intptr_t)v6072;
	i8 v6074 = v6073+(+1);
	i8 v6075 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6075 = v6074;

	i8 v6076 = (i8)(intptr_t)(ws+4200);
	i1 v6077 = *(i1*)(intptr_t)v6076;
	i1 v6078 = v6077&(+1);
	i1 v6079 = (i1)+0;
	if (v6078==v6079) goto c02_0440; else goto c02_043f;

c02_043f:;

	i8 v6080 = (i8)(intptr_t)(ws+4192);
	i8 v6081 = *(i8*)(intptr_t)v6080;
	i1 v6082 = *(i1*)(intptr_t)v6081;
	i8 v6083 = (i8)(intptr_t)(ws+4202);
	*(i1*)(intptr_t)v6083 = v6082;

	i8 v6084 = (i8)(intptr_t)(ws+4192);
	i8 v6085 = *(i8*)(intptr_t)v6084;
	i8 v6086 = v6085+(+1);
	i8 v6087 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v6087 = v6086;

	i8 v6088 = (i8)(intptr_t)(ws+4201);
	i1 v6089 = *(i1*)(intptr_t)v6088;
	i8 v6090 = (i8)(intptr_t)(ws+4202);
	i1 v6091 = *(i1*)(intptr_t)v6090;
	if (v6089==v6091) goto c02_0445; else goto c02_0444;

c02_0444:;

	goto endsub;

c02_0445:;

c02_0441:;

c02_0440:;

c02_043c:;

	i8 v6092 = (i8)(intptr_t)(ws+4200);
	i1 v6093 = *(i1*)(intptr_t)v6092;
	i1 v6094 = (i1)+1;
	i1 v6095 = ((i1)v6093)>>v6094;
	i8 v6096 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v6096 = v6095;

	goto c02_0436;

c02_043b:;

	i8 v6097 = (i8)(intptr_t)(ws+4096);
	i1 v6098 = *(i1*)(intptr_t)v6097;
	i8 v6099 = (i8)(intptr_t)(ws+4120);
	i8 v6100 = (i8)(intptr_t)(f189_MatchPredicate);
	i1 v6101;

	((void(*)(i1* /* matches */, i8 /* n */, i1 /* rule */))(intptr_t)v6100)(&v6101, v6099, v6098);

	i8 v6102 = (i8)(intptr_t)(ws+4203);
	*(i1*)(intptr_t)v6102 = v6101;

	i8 v6103 = (i8)(intptr_t)(ws+4104);
	i8 v6104 = *(i8*)(intptr_t)v6103;
	i1 v6105 = *(i1*)(intptr_t)v6104;
	i1 v6106 = v6105&(+1);
	i1 v6107 = (i1)+0;
	if (v6106==v6107) goto c02_044c; else goto c02_044d;

c02_044d:;

	i8 v6108 = (i8)(intptr_t)(ws+4203);
	i1 v6109 = *(i1*)(intptr_t)v6108;
	i1 v6110 = (i1)+0;
	if (v6109==v6110) goto c02_044b; else goto c02_044c;

c02_044b:;

	goto endsub;

c02_044c:;

c02_0446:;

	i1 v6111 = (i1)+1;
	i8 v6112 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v6112 = v6111;

endsub:;
	*p6032 = *(i1*)(intptr_t)(ws+4176);
}
	void f382_RewindRulePointers(void);
	void f77_AllocateNewNode(i8* /* m */, i1 /* code */);

// ConvertNodeToFallback workspace at ws+4176 length ws+33
void f384_ConvertNodeToFallback(void) {

	i8 v6135 = (i8)(intptr_t)(ws+4088);
	i8 v6136 = *(i8*)(intptr_t)v6135;
	i8 v6137 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v6137 = v6136;

	i1 v6138 = (i1)+24;
	i8 v6139 = (i8)(intptr_t)(f77_AllocateNewNode);
	i8 v6140;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v6139)(&v6140, v6138);

	i8 v6141 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6141 = v6140;

	i8 v6142 = (i8)(intptr_t)(ws+4184);
	i8 v6143 = *(i8*)(intptr_t)v6142;
	i8 v6144 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v6144 = v6143;

	i8 v6145 = (i8)(intptr_t)(ws+4176);
	i8 v6146 = *(i8*)(intptr_t)v6145;
	i8 v6147 = (i8)(intptr_t)(ws+4088);
	i8 v6148 = *(i8*)(intptr_t)v6147;
	i8 v6149 = v6148+(+24);
	*(i8*)(intptr_t)v6149 = v6146;

	i8 v6150 = (i8)(intptr_t)(ws+4176);
	i8 v6151 = *(i8*)(intptr_t)v6150;
	i8 v6152 = v6151+(+48);
	i8 v6153 = *(i8*)(intptr_t)v6152;
	i8 v6154 = (i8)(intptr_t)(ws+4088);
	i8 v6155 = *(i8*)(intptr_t)v6154;
	i8 v6156 = v6155+(+48);
	*(i8*)(intptr_t)v6156 = v6153;

	i8 v6157 = (i8)(intptr_t)(ws+4088);
	i8 v6158 = *(i8*)(intptr_t)v6157;
	i8 v6159 = v6158+(+48);
	i8 v6160 = *(i8*)(intptr_t)v6159;
	i8 v6161 = v6160+(+16);
	i8 v6162 = *(i8*)(intptr_t)v6161;
	i8 v6163 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v6163 = v6162;

	i8 v6164 = (i8)(intptr_t)(ws+4176);
	i8 v6165 = *(i8*)(intptr_t)v6164;
	i8 v6166 = v6165+(+56);
	i1 v6167 = *(i1*)(intptr_t)v6166;
	i8 v6168 = (i8)(intptr_t)(ws+4088);
	i8 v6169 = *(i8*)(intptr_t)v6168;
	i8 v6170 = v6169+(+56);
	*(i1*)(intptr_t)v6170 = v6167;

	i8 v6171 = (i8)(intptr_t)(ws+4192);
	i8 v6172 = *(i8*)(intptr_t)v6171;
	i8 v6173 = v6172+(+40);
	i8 v6174 = *(i8*)(intptr_t)v6173;
	i8 v6175 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v6175 = v6174;

	i1 v6176 = (i1)+0;
	i8 v6177 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v6177 = v6176;

c02_045d:;

	i8 v6178 = (i8)(intptr_t)(ws+4208);
	i1 v6179 = *(i1*)(intptr_t)v6178;
	i1 v6180 = (i1)+4;
	if (v6179==v6180) goto c02_0462; else goto c02_0461;

c02_0461:;

	i8 v6181 = (i8)(intptr_t)(ws+4200);
	i8 v6182 = *(i8*)(intptr_t)v6181;
	i8 v6183 = v6182+(+16);
	i8 v6184 = (i8)(intptr_t)(ws+4208);
	i1 v6185 = *(i1*)(intptr_t)v6184;
	i8 v6186 = v6185;
	i1 v6187 = (i1)+3;
	i8 v6188 = ((i8)v6186)<<v6187;
	i8 v6189 = v6183+v6188;
	i8 v6190 = *(i8*)(intptr_t)v6189;
	i8 v6191 = (i8)(intptr_t)(ws+4176);
	i8 v6192 = *(i8*)(intptr_t)v6191;
	if (v6190==v6192) goto c02_0466; else goto c02_0467;

c02_0466:;

	i8 v6193 = (i8)(intptr_t)(ws+4088);
	i8 v6194 = *(i8*)(intptr_t)v6193;
	i8 v6195 = (i8)(intptr_t)(ws+4200);
	i8 v6196 = *(i8*)(intptr_t)v6195;
	i8 v6197 = v6196+(+16);
	i8 v6198 = (i8)(intptr_t)(ws+4208);
	i1 v6199 = *(i1*)(intptr_t)v6198;
	i8 v6200 = v6199;
	i1 v6201 = (i1)+3;
	i8 v6202 = ((i8)v6200)<<v6201;
	i8 v6203 = v6197+v6202;
	*(i8*)(intptr_t)v6203 = v6194;

c02_0467:;

c02_0463:;

	i8 v6204 = (i8)(intptr_t)(ws+4208);
	i1 v6205 = *(i1*)(intptr_t)v6204;
	i1 v6206 = v6205+(+1);
	i8 v6207 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v6207 = v6206;

	goto c02_045d;

c02_0462:;

endsub:;
}
	void f384_ConvertNodeToFallback(void);
	void f382_RewindRulePointers(void);
	void f373_PrintNodes(i8 /* rootnode */);
	void f66_StartError(void);
const i1 c02_s01e3[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
	void f9_print_char(i1 /* c */);
const i1 c02_s01e4[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f67_EndError(void);
	void f383_TestRule(i1* /* result */);
	void f61_PushNode(i8 /* node */);

// CopyChildNodes workspace at ws+4176 length ws+16
void f385_CopyChildNodes(void) {

	i8 v6310 = (i8)(intptr_t)(ws+4104);
	i8 v6311 = *(i8*)(intptr_t)v6310;
	i8 v6312 = v6311+(+5);
	i1 v6313 = *(i1*)(intptr_t)v6312;
	i8 v6314 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v6314 = v6313;

	i8 v6315 = (i8)(intptr_t)(ws+4104);
	i8 v6316 = *(i8*)(intptr_t)v6315;
	i8 v6317 = v6316+(+6);
	i1 v6318 = *(i1*)(intptr_t)v6317;
	i8 v6319 = (i8)(intptr_t)(ws+4177);
	*(i1*)(intptr_t)v6319 = v6318;

	i1 v6320 = (i1)+0;
	i8 v6321 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6321 = v6320;

c02_0489:;

	i8 v6322 = (i8)(intptr_t)(ws+4032);
	i1 v6323 = *(i1*)(intptr_t)v6322;
	i1 v6324 = (i1)+4;
	if (v6323==v6324) goto c02_048e; else goto c02_048d;

c02_048d:;

	i8 v6325 = (i8)(intptr_t)(ws+4120);
	i8 v6326 = (i8)(intptr_t)(ws+4032);
	i1 v6327 = *(i1*)(intptr_t)v6326;
	i8 v6328 = v6327;
	i1 v6329 = (i1)+3;
	i8 v6330 = ((i8)v6328)<<v6329;
	i8 v6331 = v6325+v6330;
	i8 v6332 = *(i8*)(intptr_t)v6331;
	i8 v6333 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6333 = v6332;

	i8 v6334 = (i8)(intptr_t)(ws+4176);
	i1 v6335 = *(i1*)(intptr_t)v6334;
	i1 v6336 = v6335&(+1);
	i1 v6337 = (i1)+0;
	if (v6336==v6337) goto c02_0493; else goto c02_0492;

c02_0492:;

	i8 v6338 = (i8)(intptr_t)(ws+4184);
	i8 v6339 = *(i8*)(intptr_t)v6338;
	i8 v6340 = (i8)(intptr_t)(ws+4072);
	i8 v6341 = *(i8*)(intptr_t)v6340;
	i8 v6342 = v6341+(+16);
	i8 v6343 = (i8)(intptr_t)(ws+4032);
	i1 v6344 = *(i1*)(intptr_t)v6343;
	i8 v6345 = v6344;
	i1 v6346 = (i1)+3;
	i8 v6347 = ((i8)v6345)<<v6346;
	i8 v6348 = v6342+v6347;
	*(i8*)(intptr_t)v6348 = v6339;

	i8 v6349 = (i8)(intptr_t)(ws+4177);
	i1 v6350 = *(i1*)(intptr_t)v6349;
	i1 v6351 = v6350&(+1);
	i1 v6352 = (i1)+0;
	if (v6351==v6352) goto c02_0498; else goto c02_0497;

c02_0497:;

	i8 v6353 = (i8)(intptr_t)(ws+4184);
	i8 v6354 = *(i8*)(intptr_t)v6353;
	i8 v6355 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6355)(v6354);

	i8 v6356 = (i8)(intptr_t)(ws+4160);
	i8 v6357 = *(i8*)(intptr_t)v6356;
	i1 v6358 = *(i1*)(intptr_t)v6357;
	i8 v6359 = (i8)(intptr_t)(ws+4184);
	i8 v6360 = *(i8*)(intptr_t)v6359;
	i8 v6361 = v6360+(+56);
	*(i1*)(intptr_t)v6361 = v6358;

	i8 v6362 = (i8)(intptr_t)(ws+4160);
	i8 v6363 = *(i8*)(intptr_t)v6362;
	i8 v6364 = v6363+(+1);
	i8 v6365 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v6365 = v6364;

	i8 v6366 = (i8)(intptr_t)(ws+4072);
	i8 v6367 = *(i8*)(intptr_t)v6366;
	i8 v6368 = (i8)(intptr_t)(ws+4184);
	i8 v6369 = *(i8*)(intptr_t)v6368;
	i8 v6370 = v6369+(+48);
	*(i8*)(intptr_t)v6370 = v6367;

c02_0498:;

c02_0494:;

c02_0493:;

c02_048f:;

	i8 v6371 = (i8)(intptr_t)(ws+4176);
	i1 v6372 = *(i1*)(intptr_t)v6371;
	i1 v6373 = (i1)+1;
	i1 v6374 = ((i1)v6372)>>v6373;
	i8 v6375 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v6375 = v6374;

	i8 v6376 = (i8)(intptr_t)(ws+4177);
	i1 v6377 = *(i1*)(intptr_t)v6376;
	i1 v6378 = (i1)+1;
	i1 v6379 = ((i1)v6377)>>v6378;
	i8 v6380 = (i8)(intptr_t)(ws+4177);
	*(i1*)(intptr_t)v6380 = v6379;

	i8 v6381 = (i8)(intptr_t)(ws+4032);
	i1 v6382 = *(i1*)(intptr_t)v6381;
	i1 v6383 = v6382+(+1);
	i8 v6384 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6384 = v6383;

	goto c02_0489;

c02_048e:;

	i8 v6385 = (i8)(intptr_t)(ws+4072);
	i8 v6386 = *(i8*)(intptr_t)v6385;
	i8 v6387 = (i8)(intptr_t)(ws+4088);
	i8 v6388 = *(i8*)(intptr_t)v6387;
	i8 v6389 = v6388+(+40);
	*(i8*)(intptr_t)v6389 = v6386;

	i8 v6390 = (i8)(intptr_t)(ws+4088);
	i8 v6391 = *(i8*)(intptr_t)v6390;
	i8 v6392 = (i8)(intptr_t)(ws+4072);
	i8 v6393 = *(i8*)(intptr_t)v6392;
	i8 v6394 = v6393+(+56);
	*(i8*)(intptr_t)v6394 = v6391;

endsub:;
}
	void f385_CopyChildNodes(void);

// InstructionMatcher workspace at ws+4112 length ws+58
void f381_InstructionMatcher(void) {



	i8 v6113 = (i8)(intptr_t)(f382_RewindRulePointers);

	((void(*)(void))(intptr_t)v6113)();

c02_044e:;

	i8 v6114 = (i8)(intptr_t)(ws+4104);
	i8 v6115 = *(i8*)(intptr_t)v6114;
	i8 v6116 = v6115+(+7);
	i8 v6117 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v6117 = v6116;

	i8 v6118 = (i8)(intptr_t)(ws+4096);
	i1 v6119 = *(i1*)(intptr_t)v6118;
	i1 v6120 = v6119+(+1);
	i8 v6121 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v6121 = v6120;

	i8 v6122 = (i8)(intptr_t)(ws+4104);
	i8 v6123 = *(i8*)(intptr_t)v6122;
	i8 v6124 = (i8)(intptr_t)((i1*)f3___main_s0301+1302);
	if (v6123==v6124) goto c02_0453; else goto c02_0454;

c02_0453:;

	i8 v6125 = (i8)(intptr_t)(ws+4088);
	i8 v6126 = *(i8*)(intptr_t)v6125;
	i8 v6127 = v6126+(+256);
	i1 v6128 = *(i1*)(intptr_t)v6127;
	i1 v6129 = (i1)+24;
	if (v6128==v6129) goto c02_045b; else goto c02_045c;

c02_045c:;

	i8 v6130 = (i8)(intptr_t)(ws+4088);
	i8 v6131 = *(i8*)(intptr_t)v6130;
	i8 v6132 = v6131+(+48);
	i8 v6133 = *(i8*)(intptr_t)v6132;
	i8 v6134 = (i8)+0;
	if (v6133==v6134) goto c02_045b; else goto c02_045a;

c02_045a:;


	i8 v6208 = (i8)(intptr_t)(f384_ConvertNodeToFallback);

	((void(*)(void))(intptr_t)v6208)();

	i8 v6209 = (i8)(intptr_t)(f382_RewindRulePointers);

	((void(*)(void))(intptr_t)v6209)();

	goto c02_044e;

c02_045b:;

c02_0455:;

	i8 v6210 = (i8)(intptr_t)(ws+4024);
	i8 v6211 = *(i8*)(intptr_t)v6210;
	i8 v6212 = (i8)(intptr_t)(f373_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v6212)(v6211);

	i8 v6213 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v6213)();

	i8 v6214 = (i8)(intptr_t)c02_s01e3;
	i8 v6215 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6215)(v6214);

	i1 v6216 = (i1)+0;
	i8 v6217 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6217 = v6216;

c02_0468:;

	i8 v6218 = (i8)(intptr_t)(ws+4032);
	i1 v6219 = *(i1*)(intptr_t)v6218;
	i1 v6220 = (i1)+4;
	if (v6219==v6220) goto c02_046d; else goto c02_046c;

c02_046c:;

	i8 v6221 = (i8)(intptr_t)(ws+4112);
	i8 v6222 = (i8)(intptr_t)(ws+4032);
	i1 v6223 = *(i1*)(intptr_t)v6222;
	i8 v6224 = v6223;
	i8 v6225 = v6221+v6224;
	i1 v6226 = *(i1*)(intptr_t)v6225;
	i8 v6227 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6227)(v6226);

	i1 v6228 = (i1)+32;
	i8 v6229 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v6229)(v6228);

	i8 v6230 = (i8)(intptr_t)(ws+4032);
	i1 v6231 = *(i1*)(intptr_t)v6230;
	i1 v6232 = v6231+(+1);
	i8 v6233 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v6233 = v6232;

	goto c02_0468;

c02_046d:;

	i8 v6234 = (i8)(intptr_t)c02_s01e4;
	i8 v6235 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6235)(v6234);

	i8 v6236 = (i8)(intptr_t)(ws+4088);
	i8 v6237 = *(i8*)(intptr_t)v6236;
	i8 v6238 = v6237+(+56);
	i1 v6239 = *(i1*)(intptr_t)v6238;
	i4 v6240 = v6239;
	i8 v6241 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6241)(v6240);

	i8 v6242 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v6242)();

c02_0454:;

c02_0450:;

	i8 v6243 = (i8)(intptr_t)(f383_TestRule);
	i1 v6244;

	((void(*)(i1* /* result */))(intptr_t)v6243)(&v6244);

	i8 v6245 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v6245 = v6244;

	i8 v6246 = (i8)(intptr_t)(ws+4168);
	i1 v6247 = *(i1*)(intptr_t)v6246;
	i1 v6248 = (i1)+0;
	if (v6247==v6248) goto c02_0472; else goto c02_0471;

c02_0471:;

	goto c02_044f;

c02_0472:;

c02_046e:;

	i8 v6249 = (i8)(intptr_t)(ws+4104);
	i8 v6250 = *(i8*)(intptr_t)v6249;
	i8 v6251 = v6250+(+4);
	i1 v6252 = *(i1*)(intptr_t)v6251;
	i8 v6253 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v6253 = v6252;

c02_0473:;

	i8 v6254 = (i8)(intptr_t)(ws+4169);
	i1 v6255 = *(i1*)(intptr_t)v6254;
	i1 v6256 = (i1)+0;
	if (v6255==v6256) goto c02_0478; else goto c02_0477;

c02_0477:;

	i8 v6257 = (i8)(intptr_t)(ws+4169);
	i1 v6258 = *(i1*)(intptr_t)v6257;
	i1 v6259 = v6258&(+1);
	i1 v6260 = (i1)+0;
	if (v6259==v6260) goto c02_047d; else goto c02_047c;

c02_047c:;

	i8 v6261 = (i8)(intptr_t)(ws+4152);
	i8 v6262 = *(i8*)(intptr_t)v6261;
	i8 v6263 = v6262+(+1);
	i8 v6264 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v6264 = v6263;

c02_047d:;

c02_0479:;

	i8 v6265 = (i8)(intptr_t)(ws+4169);
	i1 v6266 = *(i1*)(intptr_t)v6265;
	i1 v6267 = (i1)+1;
	i1 v6268 = ((i1)v6266)>>v6267;
	i8 v6269 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v6269 = v6268;

	goto c02_0473;

c02_0478:;

	i8 v6270 = (i8)(intptr_t)(ws+4104);
	i8 v6271 = *(i8*)(intptr_t)v6270;
	i8 v6272 = v6271+(+6);
	i1 v6273 = *(i1*)(intptr_t)v6272;
	i8 v6274 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v6274 = v6273;

c02_047e:;

	i8 v6275 = (i8)(intptr_t)(ws+4169);
	i1 v6276 = *(i1*)(intptr_t)v6275;
	i1 v6277 = (i1)+0;
	if (v6276==v6277) goto c02_0483; else goto c02_0482;

c02_0482:;

	i8 v6278 = (i8)(intptr_t)(ws+4169);
	i1 v6279 = *(i1*)(intptr_t)v6278;
	i1 v6280 = v6279&(+1);
	i1 v6281 = (i1)+0;
	if (v6280==v6281) goto c02_0488; else goto c02_0487;

c02_0487:;

	i8 v6282 = (i8)(intptr_t)(ws+4160);
	i8 v6283 = *(i8*)(intptr_t)v6282;
	i8 v6284 = v6283+(+1);
	i8 v6285 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v6285 = v6284;

c02_0488:;

c02_0484:;

	i8 v6286 = (i8)(intptr_t)(ws+4169);
	i1 v6287 = *(i1*)(intptr_t)v6286;
	i1 v6288 = (i1)+1;
	i1 v6289 = ((i1)v6287)>>v6288;
	i8 v6290 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v6290 = v6289;

	goto c02_047e;

c02_0483:;

	goto c02_044e;

c02_044f:;

	i8 v6291 = (i8)(intptr_t)(ws+4096);
	i1 v6292 = *(i1*)(intptr_t)v6291;
	i8 v6293 = (i8)(intptr_t)(ws+4072);
	i8 v6294 = *(i8*)(intptr_t)v6293;
	i8 v6295 = v6294+(+86);
	*(i1*)(intptr_t)v6295 = v6292;

	i8 v6296 = (i8)(intptr_t)(ws+4104);
	i8 v6297 = *(i8*)(intptr_t)v6296;
	i8 v6298 = v6297+(+2);
	i1 v6299 = *(i1*)(intptr_t)v6298;
	i8 v6300 = (i8)(intptr_t)(ws+4072);
	i8 v6301 = *(i8*)(intptr_t)v6300;
	i8 v6302 = v6301+(+48);
	*(i1*)(intptr_t)v6302 = v6299;

	i8 v6303 = (i8)(intptr_t)(ws+4104);
	i8 v6304 = *(i8*)(intptr_t)v6303;
	i8 v6305 = v6304+(+3);
	i1 v6306 = *(i1*)(intptr_t)v6305;
	i8 v6307 = (i8)(intptr_t)(ws+4072);
	i8 v6308 = *(i8*)(intptr_t)v6307;
	i8 v6309 = v6308+(+65);
	*(i1*)(intptr_t)v6309 = v6306;


	i8 v6395 = (i8)(intptr_t)(f385_CopyChildNodes);

	((void(*)(void))(intptr_t)v6395)();

endsub:;
}
	void f381_InstructionMatcher(void);
	void f377_IsSimpleValue(i1* /* res */, i8 /* value */, i8 /* insn */);
	void f378_SimpleValuesMatch(i1* /* res */, i8 /* right */, i8 /* left */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);

// FindPreferredRegister workspace at ws+4152 length ws+58
void f386_FindPreferredRegister(i1* p6402 /* reg */, i1 p6403 /* mask */) {
	*(i1*)(intptr_t)(ws+4152) = p6403; /* mask */

	i8 v6404 = (i8)(intptr_t)(ws+4072);
	i8 v6405 = *(i8*)(intptr_t)v6404;
	i8 v6406 = (i8)(intptr_t)(ws+4160);
	i8 v6407 = (i8)(intptr_t)(f377_IsSimpleValue);
	i1 v6408;

	((void(*)(i1* /* res */, i8 /* value */, i8 /* insn */))(intptr_t)v6407)(&v6408, v6406, v6405);

	i8 v6409 = (i8)(intptr_t)(ws+4180);
	*(i1*)(intptr_t)v6409 = v6408;

	i8 v6410 = (i8)(intptr_t)(ws+4180);
	i1 v6411 = *(i1*)(intptr_t)v6410;
	i1 v6412 = (i1)+0;
	if (v6411==v6412) goto c02_04a2; else goto c02_04a1;

c02_04a1:;

	i8 v6413 = (i8)(intptr_t)(ws+3576);
	i8 v6414 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6414 = v6413;

c02_04a3:;

	i8 v6415 = (i8)(intptr_t)(ws+4184);
	i8 v6416 = *(i8*)(intptr_t)v6415;
	i8 v6417 = (i8)(intptr_t)(ws+3696);
	if (v6416==v6417) goto c02_04a8; else goto c02_04a7;

c02_04a7:;

	i8 v6418 = (i8)(intptr_t)(ws+4184);
	i8 v6419 = *(i8*)(intptr_t)v6418;
	i8 v6420 = v6419+(+18);
	i1 v6421 = *(i1*)(intptr_t)v6420;
	i1 v6422 = (i1)+0;
	if (v6421==v6422) goto c02_04ad; else goto c02_04ac;

c02_04ac:;

	i8 v6423 = (i8)(intptr_t)(ws+4184);
	i8 v6424 = *(i8*)(intptr_t)v6423;
	i8 v6425 = v6424+(+18);
	i1 v6426 = *(i1*)(intptr_t)v6425;
	i1 v6427 = v6426+(-1);
	i8 v6428 = (i8)(intptr_t)(ws+4184);
	i8 v6429 = *(i8*)(intptr_t)v6428;
	i8 v6430 = v6429+(+18);
	*(i1*)(intptr_t)v6430 = v6427;

c02_04ad:;

c02_04a9:;

	i8 v6431 = (i8)(intptr_t)(ws+4184);
	i8 v6432 = *(i8*)(intptr_t)v6431;
	i8 v6433 = v6432+(+24);
	i8 v6434 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6434 = v6433;

	goto c02_04a3;

c02_04a8:;

	i8 v6435 = (i8)(intptr_t)(ws+3576);
	i8 v6436 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6436 = v6435;

	i1 v6437 = (i1)+16;
	i8 v6438 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v6438 = v6437;

c02_04ae:;

	i8 v6439 = (i8)(intptr_t)(ws+4184);
	i8 v6440 = *(i8*)(intptr_t)v6439;
	i8 v6441 = (i8)(intptr_t)(ws+3696);
	if (v6440==v6441) goto c02_04b3; else goto c02_04b2;

c02_04b2:;

	i8 v6442 = (i8)(intptr_t)(ws+4160);
	i8 v6443 = (i8)(intptr_t)(ws+4184);
	i8 v6444 = *(i8*)(intptr_t)v6443;
	i8 v6445 = (i8)(intptr_t)(f378_SimpleValuesMatch);
	i1 v6446;

	((void(*)(i1* /* res */, i8 /* right */, i8 /* left */))(intptr_t)v6445)(&v6446, v6444, v6442);

	i8 v6447 = (i8)(intptr_t)(ws+4192);
	*(i1*)(intptr_t)v6447 = v6446;

	i8 v6448 = (i8)(intptr_t)(ws+4184);
	i8 v6449 = *(i8*)(intptr_t)v6448;
	i8 v6450 = v6449+(+19);
	i1 v6451 = *(i1*)(intptr_t)v6450;
	i1 v6452 = (i1)+0;
	if (v6451==v6452) goto c02_04bc; else goto c02_04be;

c02_04be:;

	i8 v6453 = (i8)(intptr_t)(ws+4153);
	i1 v6454 = *(i1*)(intptr_t)v6453;
	i8 v6455 = (i8)(intptr_t)(ws+4152);
	i1 v6456 = *(i1*)(intptr_t)v6455;
	i1 v6457 = v6454&v6456;
	i1 v6458 = (i1)+0;
	if (v6457==v6458) goto c02_04bc; else goto c02_04bd;

c02_04bd:;

	i8 v6459 = (i8)(intptr_t)(ws+4192);
	i1 v6460 = *(i1*)(intptr_t)v6459;
	i1 v6461 = (i1)+0;
	if (v6460==v6461) goto c02_04bc; else goto c02_04bb;

c02_04bb:;

	i1 v6462 = (i1)+255;
	i8 v6463 = (i8)(intptr_t)(ws+4184);
	i8 v6464 = *(i8*)(intptr_t)v6463;
	i8 v6465 = v6464+(+18);
	*(i1*)(intptr_t)v6465 = v6462;

	goto endsub;

c02_04bc:;

c02_04b4:;

	i8 v6466 = (i8)(intptr_t)(ws+4184);
	i8 v6467 = *(i8*)(intptr_t)v6466;
	i8 v6468 = v6467+(+24);
	i8 v6469 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6469 = v6468;

	i8 v6470 = (i8)(intptr_t)(ws+4153);
	i1 v6471 = *(i1*)(intptr_t)v6470;
	i1 v6472 = (i1)+1;
	i1 v6473 = ((i1)v6471)>>v6472;
	i8 v6474 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v6474 = v6473;

	goto c02_04ae;

c02_04b3:;

	i8 v6475 = (i8)+0;
	i8 v6476 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v6476 = v6475;

	i8 v6477 = (i8)(intptr_t)(ws+3576);
	i8 v6478 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6478 = v6477;

	i1 v6479 = (i1)+16;
	i8 v6480 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v6480 = v6479;

c02_04bf:;

	i8 v6481 = (i8)(intptr_t)(ws+4184);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = (i8)(intptr_t)(ws+3696);
	if (v6482==v6483) goto c02_04c4; else goto c02_04c3;

c02_04c3:;

	i8 v6484 = (i8)(intptr_t)(ws+4153);
	i1 v6485 = *(i1*)(intptr_t)v6484;
	i8 v6486 = (i8)(intptr_t)(ws+4152);
	i1 v6487 = *(i1*)(intptr_t)v6486;
	i1 v6488 = v6485&v6487;
	i1 v6489 = (i1)+0;
	if (v6488==v6489) goto c02_04c9; else goto c02_04c8;

c02_04c8:;

	i8 v6490 = (i8)(intptr_t)(ws+4184);
	i8 v6491 = *(i8*)(intptr_t)v6490;
	i8 v6492 = v6491+(+19);
	i1 v6493 = *(i1*)(intptr_t)v6492;
	i1 v6494 = (i1)+0;
	if (v6493==v6494) goto c02_04cd; else goto c02_04ce;

c02_04cd:;

	i8 v6495 = (i8)(intptr_t)(ws+4184);
	i8 v6496 = *(i8*)(intptr_t)v6495;
	i8 v6497 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v6497 = v6496;

	i8 v6498 = (i8)(intptr_t)(ws+4153);
	i1 v6499 = *(i1*)(intptr_t)v6498;
	i8 v6500 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v6500 = v6499;

	goto c02_04c4;

c02_04ce:;

c02_04ca:;

	i8 v6501 = (i8)(intptr_t)(ws+4200);
	i8 v6502 = *(i8*)(intptr_t)v6501;
	i8 v6503 = (i8)+0;
	if (v6502==v6503) goto c02_04d2; else goto c02_04d3;

c02_04d2:;

	i8 v6504 = (i8)(intptr_t)(ws+4184);
	i8 v6505 = *(i8*)(intptr_t)v6504;
	i8 v6506 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v6506 = v6505;

	i8 v6507 = (i8)(intptr_t)(ws+4153);
	i1 v6508 = *(i1*)(intptr_t)v6507;
	i8 v6509 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v6509 = v6508;

	goto c02_04cf;

c02_04d3:;

	i8 v6510 = (i8)(intptr_t)(ws+4184);
	i8 v6511 = *(i8*)(intptr_t)v6510;
	i8 v6512 = v6511+(+18);
	i1 v6513 = *(i1*)(intptr_t)v6512;
	i8 v6514 = (i8)(intptr_t)(ws+4200);
	i8 v6515 = *(i8*)(intptr_t)v6514;
	i8 v6516 = v6515+(+18);
	i1 v6517 = *(i1*)(intptr_t)v6516;
	if (v6513<v6517) goto c02_04d7; else goto c02_04d8;

c02_04d7:;

	i8 v6518 = (i8)(intptr_t)(ws+4184);
	i8 v6519 = *(i8*)(intptr_t)v6518;
	i8 v6520 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v6520 = v6519;

	i8 v6521 = (i8)(intptr_t)(ws+4153);
	i1 v6522 = *(i1*)(intptr_t)v6521;
	i8 v6523 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v6523 = v6522;

c02_04d8:;

c02_04d4:;

c02_04cf:;

c02_04c9:;

c02_04c5:;

	i8 v6524 = (i8)(intptr_t)(ws+4184);
	i8 v6525 = *(i8*)(intptr_t)v6524;
	i8 v6526 = v6525+(+24);
	i8 v6527 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v6527 = v6526;

	i8 v6528 = (i8)(intptr_t)(ws+4153);
	i1 v6529 = *(i1*)(intptr_t)v6528;
	i1 v6530 = (i1)+1;
	i1 v6531 = ((i1)v6529)>>v6530;
	i8 v6532 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v6532 = v6531;

	goto c02_04bf;

c02_04c4:;

	i8 v6533 = (i8)(intptr_t)(ws+4200);
	i8 v6534 = *(i8*)(intptr_t)v6533;
	i8 v6535 = (i8)+0;
	if (v6534==v6535) goto c02_04dd; else goto c02_04dc;

c02_04dc:;

	i8 v6536 = (i8)(intptr_t)(ws+4160);
	i8 v6537 = (i8)+20;
	i8 v6538 = (i8)(intptr_t)(ws+4200);
	i8 v6539 = *(i8*)(intptr_t)v6538;
	i8 v6540 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v6540)(v6539, v6537, v6536);

	i1 v6541 = (i1)+255;
	i8 v6542 = (i8)(intptr_t)(ws+4200);
	i8 v6543 = *(i8*)(intptr_t)v6542;
	i8 v6544 = v6543+(+18);
	*(i1*)(intptr_t)v6544 = v6541;

	i8 v6545 = (i8)(intptr_t)(ws+4208);
	i1 v6546 = *(i1*)(intptr_t)v6545;
	i8 v6547 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v6547 = v6546;

	goto endsub;

c02_04dd:;

c02_04d9:;

c02_04a2:;

c02_049e:;

	i8 v6548 = (i8)(intptr_t)(ws+4152);
	i1 v6549 = *(i1*)(intptr_t)v6548;
	i8 v6550 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6551;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6550)(&v6551, v6549);

	i8 v6552 = (i8)(intptr_t)(ws+4209);
	*(i1*)(intptr_t)v6552 = v6551;

	i8 v6553 = (i8)(intptr_t)(ws+4209);
	i1 v6554 = *(i1*)(intptr_t)v6553;
	i8 v6555 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v6555 = v6554;

endsub:;
	*p6402 = *(i1*)(intptr_t)(ws+4153);
}
	void f364_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f370_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f365_CalculateBlockedRegisters(i1* /* blocked */, i8 /* last */, i8 /* insn */);
	void f386_FindPreferredRegister(i1* /* reg */, i1 /* mask */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f367_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f150_FindCompatibleRegisters(i1* /* compatible */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f367_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f371_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f367_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f370_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f373_PrintNodes(i8 /* rootnode */);
const i1 c02_s01e5[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01e6[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01e7[] = { 0x6e,0x6f,0x64,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01e8[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01e9[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01ea[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01eb[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01ec[] = { 0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
	void f66_StartError(void);
const i1 c02_s01ed[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f67_EndError(void);

// deadlock workspace at ws+4152 length ws+8
void f388_deadlock(i8 p6959 /* s */) {
	*(i8*)(intptr_t)(ws+4152) = p6959; /* s */

	i8 v6960 = (i8)(intptr_t)(ws+4024);
	i8 v6961 = *(i8*)(intptr_t)v6960;
	i8 v6962 = (i8)(intptr_t)(f373_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v6962)(v6961);

	i8 v6963 = (i8)(intptr_t)c02_s01e5;
	i8 v6964 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6964)(v6963);

	i8 v6965 = (i8)(intptr_t)(ws+4072);
	i8 v6966 = *(i8*)(intptr_t)v6965;
	i8 v6967 = v6966+(+16);
	i8 v6968 = *(i8*)(intptr_t)v6967;
	i4 v6969 = v6968;
	i8 v6970 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6970)(v6969);

	i8 v6971 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6971)();

	i8 v6972 = (i8)(intptr_t)c02_s01e6;
	i8 v6973 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6973)(v6972);

	i8 v6974 = (i8)(intptr_t)(ws+4120);
	i8 v6975 = *(i8*)(intptr_t)v6974;
	i8 v6976 = v6975+(+16);
	i8 v6977 = *(i8*)(intptr_t)v6976;
	i4 v6978 = v6977;
	i8 v6979 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6979)(v6978);

	i8 v6980 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6980)();

	i8 v6981 = (i8)(intptr_t)c02_s01e7;
	i8 v6982 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6982)(v6981);

	i8 v6983 = (i8)(intptr_t)(ws+4088);
	i8 v6984 = *(i8*)(intptr_t)v6983;
	i4 v6985 = v6984;
	i8 v6986 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6986)(v6985);

	i8 v6987 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6987)();

	i8 v6988 = (i8)(intptr_t)c02_s01e8;
	i8 v6989 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6989)(v6988);

	i8 v6990 = (i8)(intptr_t)(ws+4072);
	i8 v6991 = *(i8*)(intptr_t)v6990;
	i8 v6992 = v6991+(+48);
	i1 v6993 = *(i1*)(intptr_t)v6992;
	i4 v6994 = v6993;
	i8 v6995 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6995)(v6994);

	i8 v6996 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6996)();

	i8 v6997 = (i8)(intptr_t)c02_s01e9;
	i8 v6998 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6998)(v6997);

	i8 v6999 = (i8)(intptr_t)(ws+4072);
	i8 v7000 = *(i8*)(intptr_t)v6999;
	i8 v7001 = v7000+(+66);
	i1 v7002 = *(i1*)(intptr_t)v7001;
	i4 v7003 = v7002;
	i8 v7004 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7004)(v7003);

	i8 v7005 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v7005)();

	i8 v7006 = (i8)(intptr_t)c02_s01ea;
	i8 v7007 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7007)(v7006);

	i8 v7008 = (i8)(intptr_t)(ws+4088);
	i8 v7009 = *(i8*)(intptr_t)v7008;
	i8 v7010 = v7009+(+56);
	i1 v7011 = *(i1*)(intptr_t)v7010;
	i4 v7012 = v7011;
	i8 v7013 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7013)(v7012);

	i8 v7014 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v7014)();

	i8 v7015 = (i8)(intptr_t)c02_s01eb;
	i8 v7016 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7016)(v7015);

	i8 v7017 = (i8)(intptr_t)(ws+4120);
	i8 v7018 = *(i8*)(intptr_t)v7017;
	i8 v7019 = v7018+(+64);
	i1 v7020 = *(i1*)(intptr_t)v7019;
	i4 v7021 = v7020;
	i8 v7022 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7022)(v7021);

	i8 v7023 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v7023)();

	i8 v7024 = (i8)(intptr_t)c02_s01ec;
	i8 v7025 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7025)(v7024);

	i8 v7026 = (i8)(intptr_t)(ws+4134);
	i1 v7027 = *(i1*)(intptr_t)v7026;
	i4 v7028 = v7027;
	i8 v7029 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7029)(v7028);

	i8 v7030 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v7030)();

	i8 v7031 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7031)();

	i8 v7032 = (i8)(intptr_t)c02_s01ed;
	i8 v7033 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7033)(v7032);

	i8 v7034 = (i8)(intptr_t)(ws+4152);
	i8 v7035 = *(i8*)(intptr_t)v7034;
	i8 v7036 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7036)(v7035);

	i8 v7037 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7037)();

endsub:;
}
const i1 c02_s01ee[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0 };
	void f388_deadlock(i8 /* s */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f370_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
const i1 c02_s01ef[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0 };
	void f388_deadlock(i8 /* s */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f371_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);

// AllocateRegister workspace at ws+4112 length ws+36
void f387_AllocateRegister(void) {

	i8 v6556 = (i8)(intptr_t)(ws+4072);
	i8 v6557 = *(i8*)(intptr_t)v6556;
	i8 v6558 = v6557+(+48);
	i1 v6559 = *(i1*)(intptr_t)v6558;
	i8 v6560 = (i8)(intptr_t)(f364_IsStackedRegister);
	i1 v6561;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v6560)(&v6561, v6559);

	i8 v6562 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v6562 = v6561;

	i8 v6563 = (i8)(intptr_t)(ws+4112);
	i1 v6564 = *(i1*)(intptr_t)v6563;
	i1 v6565 = (i1)+0;
	if (v6564==v6565) goto c02_04e2; else goto c02_04e1;

c02_04e1:;

	i8 v6566 = (i8)(intptr_t)(ws+4088);
	i8 v6567 = *(i8*)(intptr_t)v6566;
	i8 v6568 = v6567+(+56);
	i1 v6569 = *(i1*)(intptr_t)v6568;
	i8 v6570 = (i8)(intptr_t)(ws+4072);
	i8 v6571 = *(i8*)(intptr_t)v6570;
	i8 v6572 = v6571+(+48);
	i1 v6573 = *(i1*)(intptr_t)v6572;
	i1 v6574 = v6569&v6573;
	i8 v6575 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6575 = v6574;

	i8 v6576 = (i8)(intptr_t)(ws+4113);
	i1 v6577 = *(i1*)(intptr_t)v6576;
	i1 v6578 = (i1)+0;
	if (v6577==v6578) goto c02_04e7; else goto c02_04e6;

c02_04e6:;

	i8 v6579 = (i8)(intptr_t)(ws+4113);
	i1 v6580 = *(i1*)(intptr_t)v6579;
	i8 v6581 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6582;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6581)(&v6582, v6580);

	i8 v6583 = (i8)(intptr_t)(ws+4114);
	*(i1*)(intptr_t)v6583 = v6582;

	i8 v6584 = (i8)(intptr_t)(ws+4114);
	i1 v6585 = *(i1*)(intptr_t)v6584;
	i8 v6586 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6586 = v6585;

	i8 v6587 = (i8)(intptr_t)(ws+4113);
	i1 v6588 = *(i1*)(intptr_t)v6587;
	i8 v6589 = (i8)(intptr_t)(ws+4088);
	i8 v6590 = *(i8*)(intptr_t)v6589;
	i8 v6591 = v6590+(+57);
	*(i1*)(intptr_t)v6591 = v6588;

	i8 v6592 = (i8)(intptr_t)(ws+4113);
	i1 v6593 = *(i1*)(intptr_t)v6592;
	i8 v6594 = (i8)(intptr_t)(ws+4072);
	i8 v6595 = *(i8*)(intptr_t)v6594;
	i8 v6596 = v6595+(+49);
	*(i1*)(intptr_t)v6596 = v6593;

	goto c02_04e3;

c02_04e7:;

	i8 v6597 = (i8)(intptr_t)(ws+4072);
	i8 v6598 = *(i8*)(intptr_t)v6597;
	i8 v6599 = v6598+(+48);
	i1 v6600 = *(i1*)(intptr_t)v6599;
	i8 v6601 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6602;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6601)(&v6602, v6600);

	i8 v6603 = (i8)(intptr_t)(ws+4115);
	*(i1*)(intptr_t)v6603 = v6602;

	i8 v6604 = (i8)(intptr_t)(ws+4115);
	i1 v6605 = *(i1*)(intptr_t)v6604;
	i8 v6606 = (i8)(intptr_t)(ws+4072);
	i8 v6607 = *(i8*)(intptr_t)v6606;
	i8 v6608 = v6607+(+49);
	*(i1*)(intptr_t)v6608 = v6605;

	i8 v6609 = (i8)(intptr_t)(ws+4088);
	i8 v6610 = *(i8*)(intptr_t)v6609;
	i8 v6611 = v6610+(+56);
	i1 v6612 = *(i1*)(intptr_t)v6611;
	i8 v6613 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6614;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6613)(&v6614, v6612);

	i8 v6615 = (i8)(intptr_t)(ws+4116);
	*(i1*)(intptr_t)v6615 = v6614;

	i8 v6616 = (i8)(intptr_t)(ws+4116);
	i1 v6617 = *(i1*)(intptr_t)v6616;
	i8 v6618 = (i8)(intptr_t)(ws+4088);
	i8 v6619 = *(i8*)(intptr_t)v6618;
	i8 v6620 = v6619+(+57);
	*(i1*)(intptr_t)v6620 = v6617;

	i8 v6621 = (i8)(intptr_t)(ws+4072);
	i8 v6622 = *(i8*)(intptr_t)v6621;
	i8 v6623 = (i8)(intptr_t)(ws+4072);
	i8 v6624 = *(i8*)(intptr_t)v6623;
	i8 v6625 = v6624+(+49);
	i1 v6626 = *(i1*)(intptr_t)v6625;
	i8 v6627 = (i8)(intptr_t)(ws+4088);
	i8 v6628 = *(i8*)(intptr_t)v6627;
	i8 v6629 = v6628+(+57);
	i1 v6630 = *(i1*)(intptr_t)v6629;
	i8 v6631 = (i8)(intptr_t)(f370_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v6631)(v6630, v6626, v6622);

c02_04e3:;

	goto c02_04de;

c02_04e2:;

	i8 v6632 = (i8)(intptr_t)(ws+4088);
	i8 v6633 = *(i8*)(intptr_t)v6632;
	i8 v6634 = v6633+(+48);
	i8 v6635 = *(i8*)(intptr_t)v6634;
	i8 v6636 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v6636 = v6635;

	i8 v6637 = (i8)(intptr_t)(ws+4120);
	i8 v6638 = *(i8*)(intptr_t)v6637;
	i8 v6639 = (i8)(intptr_t)(ws+4072);
	i8 v6640 = *(i8*)(intptr_t)v6639;
	i8 v6641 = (i8)(intptr_t)(f365_CalculateBlockedRegisters);
	i1 v6642;

	((void(*)(i1* /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v6641)(&v6642, v6640, v6638);

	i8 v6643 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v6643 = v6642;

	i8 v6644 = (i8)(intptr_t)(ws+4128);
	i1 v6645 = *(i1*)(intptr_t)v6644;
	i8 v6646 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6646 = v6645;

	i8 v6647 = (i8)(intptr_t)(ws+4088);
	i8 v6648 = *(i8*)(intptr_t)v6647;
	i8 v6649 = v6648+(+56);
	i1 v6650 = *(i1*)(intptr_t)v6649;
	i8 v6651 = (i8)(intptr_t)(ws+4072);
	i8 v6652 = *(i8*)(intptr_t)v6651;
	i8 v6653 = v6652+(+48);
	i1 v6654 = *(i1*)(intptr_t)v6653;
	i1 v6655 = v6650&v6654;
	i8 v6656 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6656 = v6655;

	i8 v6657 = (i8)(intptr_t)(ws+4113);
	i1 v6658 = *(i1*)(intptr_t)v6657;
	i8 v6659 = (i8)(intptr_t)(ws+4129);
	i1 v6660 = *(i1*)(intptr_t)v6659;
	i8 v6661 = (i8)(intptr_t)(ws+4072);
	i8 v6662 = *(i8*)(intptr_t)v6661;
	i8 v6663 = v6662+(+66);
	i1 v6664 = *(i1*)(intptr_t)v6663;
	i1 v6665 = v6660|v6664;
	i8 v6666 = (i8)(intptr_t)(ws+4120);
	i8 v6667 = *(i8*)(intptr_t)v6666;
	i8 v6668 = v6667+(+64);
	i1 v6669 = *(i1*)(intptr_t)v6668;
	i1 v6670 = v6665|v6669;
	i1 v6671 = ~v6670;
	i1 v6672 = v6658&v6671;
	i8 v6673 = (i8)(intptr_t)(ws+4130);
	*(i1*)(intptr_t)v6673 = v6672;

	i8 v6674 = (i8)(intptr_t)(ws+4130);
	i1 v6675 = *(i1*)(intptr_t)v6674;
	i1 v6676 = (i1)+0;
	if (v6675==v6676) goto c02_04ec; else goto c02_04eb;

c02_04eb:;

	i8 v6677 = (i8)(intptr_t)(ws+4130);
	i1 v6678 = *(i1*)(intptr_t)v6677;
	i8 v6679 = (i8)(intptr_t)(f386_FindPreferredRegister);
	i1 v6680;

	((void(*)(i1* /* reg */, i1 /* mask */))(intptr_t)v6679)(&v6680, v6678);

	i8 v6681 = (i8)(intptr_t)(ws+4131);
	*(i1*)(intptr_t)v6681 = v6680;

	i8 v6682 = (i8)(intptr_t)(ws+4131);
	i1 v6683 = *(i1*)(intptr_t)v6682;
	i8 v6684 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6684 = v6683;

	i8 v6685 = (i8)(intptr_t)(ws+4113);
	i1 v6686 = *(i1*)(intptr_t)v6685;
	i8 v6687 = (i8)(intptr_t)(ws+4088);
	i8 v6688 = *(i8*)(intptr_t)v6687;
	i8 v6689 = v6688+(+57);
	*(i1*)(intptr_t)v6689 = v6686;

	i8 v6690 = (i8)(intptr_t)(ws+4113);
	i1 v6691 = *(i1*)(intptr_t)v6690;
	i8 v6692 = (i8)(intptr_t)(ws+4072);
	i8 v6693 = *(i8*)(intptr_t)v6692;
	i8 v6694 = v6693+(+49);
	*(i1*)(intptr_t)v6694 = v6691;

	i8 v6695 = (i8)(intptr_t)(ws+4113);
	i1 v6696 = *(i1*)(intptr_t)v6695;
	i8 v6697 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6698;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6697)(&v6698, v6696);

	i8 v6699 = (i8)(intptr_t)(ws+4132);
	*(i1*)(intptr_t)v6699 = v6698;

	i8 v6700 = (i8)(intptr_t)(ws+4132);
	i1 v6701 = *(i1*)(intptr_t)v6700;
	i8 v6702 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6702 = v6701;

	i8 v6703 = (i8)(intptr_t)(ws+4120);
	i8 v6704 = *(i8*)(intptr_t)v6703;
	i8 v6705 = v6704+(+64);
	i1 v6706 = *(i1*)(intptr_t)v6705;
	i8 v6707 = (i8)(intptr_t)(ws+4129);
	i1 v6708 = *(i1*)(intptr_t)v6707;
	i1 v6709 = v6706|v6708;
	i8 v6710 = (i8)(intptr_t)(ws+4120);
	i8 v6711 = *(i8*)(intptr_t)v6710;
	i8 v6712 = v6711+(+64);
	*(i1*)(intptr_t)v6712 = v6709;

	i8 v6713 = (i8)(intptr_t)(ws+4120);
	i8 v6714 = *(i8*)(intptr_t)v6713;
	i8 v6715 = (i8)(intptr_t)(ws+4072);
	i8 v6716 = *(i8*)(intptr_t)v6715;
	i8 v6717 = (i8)(intptr_t)(ws+4129);
	i1 v6718 = *(i1*)(intptr_t)v6717;
	i8 v6719 = (i8)(intptr_t)(f367_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v6719)(v6718, v6716, v6714);

	i8 v6720 = (i8)(intptr_t)(ws+4072);
	i8 v6721 = *(i8*)(intptr_t)v6720;
	i8 v6722 = v6721+(+66);
	i1 v6723 = *(i1*)(intptr_t)v6722;
	i8 v6724 = (i8)(intptr_t)(ws+4129);
	i1 v6725 = *(i1*)(intptr_t)v6724;
	i1 v6726 = v6723|v6725;
	i8 v6727 = (i8)(intptr_t)(ws+4072);
	i8 v6728 = *(i8*)(intptr_t)v6727;
	i8 v6729 = v6728+(+66);
	*(i1*)(intptr_t)v6729 = v6726;

	goto c02_04e8;

c02_04ec:;

	i8 v6730 = (i8)(intptr_t)(ws+4088);
	i8 v6731 = *(i8*)(intptr_t)v6730;
	i8 v6732 = v6731+(+56);
	i1 v6733 = *(i1*)(intptr_t)v6732;
	i1 v6734 = v6733&(-1);
	i8 v6735 = (i8)(intptr_t)(f150_FindCompatibleRegisters);
	i1 v6736;

	((void(*)(i1* /* compatible */, i1 /* inreg */))(intptr_t)v6735)(&v6736, v6734);

	i8 v6737 = (i8)(intptr_t)(ws+4133);
	*(i1*)(intptr_t)v6737 = v6736;

	i8 v6738 = (i8)(intptr_t)(ws+4133);
	i1 v6739 = *(i1*)(intptr_t)v6738;
	i8 v6740 = (i8)(intptr_t)(ws+4134);
	*(i1*)(intptr_t)v6740 = v6739;

	i8 v6741 = (i8)(intptr_t)(ws+4072);
	i8 v6742 = *(i8*)(intptr_t)v6741;
	i8 v6743 = v6742+(+48);
	i1 v6744 = *(i1*)(intptr_t)v6743;
	i8 v6745 = (i8)(intptr_t)(ws+4134);
	i1 v6746 = *(i1*)(intptr_t)v6745;
	i1 v6747 = v6744&v6746;
	i8 v6748 = (i8)(intptr_t)(ws+4129);
	i1 v6749 = *(i1*)(intptr_t)v6748;
	i8 v6750 = (i8)(intptr_t)(ws+4072);
	i8 v6751 = *(i8*)(intptr_t)v6750;
	i8 v6752 = v6751+(+66);
	i1 v6753 = *(i1*)(intptr_t)v6752;
	i1 v6754 = v6749|v6753;
	i1 v6755 = ~v6754;
	i1 v6756 = v6747&v6755;
	i8 v6757 = (i8)(intptr_t)(ws+4130);
	*(i1*)(intptr_t)v6757 = v6756;

	i8 v6758 = (i8)(intptr_t)(ws+4088);
	i8 v6759 = *(i8*)(intptr_t)v6758;
	i8 v6760 = v6759+(+56);
	i1 v6761 = *(i1*)(intptr_t)v6760;
	i8 v6762 = (i8)(intptr_t)(ws+4120);
	i8 v6763 = *(i8*)(intptr_t)v6762;
	i8 v6764 = v6763+(+64);
	i1 v6765 = *(i1*)(intptr_t)v6764;
	i1 v6766 = ~v6765;
	i1 v6767 = v6761&v6766;
	i8 v6768 = (i8)(intptr_t)(ws+4135);
	*(i1*)(intptr_t)v6768 = v6767;

	i8 v6769 = (i8)(intptr_t)(ws+4130);
	i1 v6770 = *(i1*)(intptr_t)v6769;
	i1 v6771 = (i1)+0;
	if (v6770==v6771) goto c02_04f3; else goto c02_04f4;

c02_04f4:;

	i8 v6772 = (i8)(intptr_t)(ws+4135);
	i1 v6773 = *(i1*)(intptr_t)v6772;
	i1 v6774 = (i1)+0;
	if (v6773==v6774) goto c02_04f3; else goto c02_04f2;

c02_04f2:;

	i8 v6775 = (i8)(intptr_t)(ws+4130);
	i1 v6776 = *(i1*)(intptr_t)v6775;
	i8 v6777 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6778;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6777)(&v6778, v6776);

	i8 v6779 = (i8)(intptr_t)(ws+4136);
	*(i1*)(intptr_t)v6779 = v6778;

	i8 v6780 = (i8)(intptr_t)(ws+4136);
	i1 v6781 = *(i1*)(intptr_t)v6780;
	i8 v6782 = (i8)(intptr_t)(ws+4072);
	i8 v6783 = *(i8*)(intptr_t)v6782;
	i8 v6784 = v6783+(+49);
	*(i1*)(intptr_t)v6784 = v6781;

	i8 v6785 = (i8)(intptr_t)(ws+4135);
	i1 v6786 = *(i1*)(intptr_t)v6785;
	i8 v6787 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6788;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6787)(&v6788, v6786);

	i8 v6789 = (i8)(intptr_t)(ws+4137);
	*(i1*)(intptr_t)v6789 = v6788;

	i8 v6790 = (i8)(intptr_t)(ws+4137);
	i1 v6791 = *(i1*)(intptr_t)v6790;
	i8 v6792 = (i8)(intptr_t)(ws+4088);
	i8 v6793 = *(i8*)(intptr_t)v6792;
	i8 v6794 = v6793+(+57);
	*(i1*)(intptr_t)v6794 = v6791;

	i8 v6795 = (i8)(intptr_t)(ws+4088);
	i8 v6796 = *(i8*)(intptr_t)v6795;
	i8 v6797 = v6796+(+57);
	i1 v6798 = *(i1*)(intptr_t)v6797;
	i8 v6799 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6800;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6799)(&v6800, v6798);

	i8 v6801 = (i8)(intptr_t)(ws+4138);
	*(i1*)(intptr_t)v6801 = v6800;

	i8 v6802 = (i8)(intptr_t)(ws+4120);
	i8 v6803 = *(i8*)(intptr_t)v6802;
	i8 v6804 = v6803+(+64);
	i1 v6805 = *(i1*)(intptr_t)v6804;
	i8 v6806 = (i8)(intptr_t)(ws+4138);
	i1 v6807 = *(i1*)(intptr_t)v6806;
	i1 v6808 = v6805|v6807;
	i8 v6809 = (i8)(intptr_t)(ws+4120);
	i8 v6810 = *(i8*)(intptr_t)v6809;
	i8 v6811 = v6810+(+64);
	*(i1*)(intptr_t)v6811 = v6808;

	i8 v6812 = (i8)(intptr_t)(ws+4072);
	i8 v6813 = *(i8*)(intptr_t)v6812;
	i8 v6814 = v6813+(+49);
	i1 v6815 = *(i1*)(intptr_t)v6814;
	i8 v6816 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6817;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6816)(&v6817, v6815);

	i8 v6818 = (i8)(intptr_t)(ws+4139);
	*(i1*)(intptr_t)v6818 = v6817;

	i8 v6819 = (i8)(intptr_t)(ws+4139);
	i1 v6820 = *(i1*)(intptr_t)v6819;
	i8 v6821 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6821 = v6820;

	i8 v6822 = (i8)(intptr_t)(ws+4120);
	i8 v6823 = *(i8*)(intptr_t)v6822;
	i8 v6824 = (i8)(intptr_t)(ws+4072);
	i8 v6825 = *(i8*)(intptr_t)v6824;
	i8 v6826 = (i8)(intptr_t)(ws+4129);
	i1 v6827 = *(i1*)(intptr_t)v6826;
	i8 v6828 = (i8)(intptr_t)(f367_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v6828)(v6827, v6825, v6823);

	i8 v6829 = (i8)(intptr_t)(ws+4072);
	i8 v6830 = *(i8*)(intptr_t)v6829;
	i8 v6831 = v6830+(+66);
	i1 v6832 = *(i1*)(intptr_t)v6831;
	i8 v6833 = (i8)(intptr_t)(ws+4129);
	i1 v6834 = *(i1*)(intptr_t)v6833;
	i1 v6835 = v6832|v6834;
	i8 v6836 = (i8)(intptr_t)(ws+4072);
	i8 v6837 = *(i8*)(intptr_t)v6836;
	i8 v6838 = v6837+(+66);
	*(i1*)(intptr_t)v6838 = v6835;

	i8 v6839 = (i8)(intptr_t)(ws+4120);
	i8 v6840 = *(i8*)(intptr_t)v6839;
	i8 v6841 = (i8)(intptr_t)(ws+4072);
	i8 v6842 = *(i8*)(intptr_t)v6841;
	i8 v6843 = v6842+(+49);
	i1 v6844 = *(i1*)(intptr_t)v6843;
	i8 v6845 = (i8)(intptr_t)(ws+4088);
	i8 v6846 = *(i8*)(intptr_t)v6845;
	i8 v6847 = v6846+(+57);
	i1 v6848 = *(i1*)(intptr_t)v6847;
	i8 v6849 = (i8)(intptr_t)(f371_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v6849)(v6848, v6844, v6840);

	goto c02_04ed;

c02_04f3:;

	i8 v6850 = (i8)(intptr_t)(ws+4088);
	i8 v6851 = *(i8*)(intptr_t)v6850;
	i8 v6852 = v6851+(+56);
	i1 v6853 = *(i1*)(intptr_t)v6852;
	i8 v6854 = (i8)(intptr_t)(ws+4129);
	i1 v6855 = *(i1*)(intptr_t)v6854;
	i8 v6856 = (i8)(intptr_t)(ws+4120);
	i8 v6857 = *(i8*)(intptr_t)v6856;
	i8 v6858 = v6857+(+64);
	i1 v6859 = *(i1*)(intptr_t)v6858;
	i1 v6860 = v6855|v6859;
	i1 v6861 = ~v6860;
	i1 v6862 = v6853&v6861;
	i8 v6863 = (i8)(intptr_t)(ws+4130);
	*(i1*)(intptr_t)v6863 = v6862;

	i8 v6864 = (i8)(intptr_t)(ws+4072);
	i8 v6865 = *(i8*)(intptr_t)v6864;
	i8 v6866 = v6865+(+48);
	i1 v6867 = *(i1*)(intptr_t)v6866;
	i8 v6868 = (i8)(intptr_t)(ws+4134);
	i1 v6869 = *(i1*)(intptr_t)v6868;
	i1 v6870 = v6867&v6869;
	i8 v6871 = (i8)(intptr_t)(ws+4072);
	i8 v6872 = *(i8*)(intptr_t)v6871;
	i8 v6873 = v6872+(+66);
	i1 v6874 = *(i1*)(intptr_t)v6873;
	i1 v6875 = ~v6874;
	i1 v6876 = v6870&v6875;
	i8 v6877 = (i8)(intptr_t)(ws+4135);
	*(i1*)(intptr_t)v6877 = v6876;

	i8 v6878 = (i8)(intptr_t)(ws+4130);
	i1 v6879 = *(i1*)(intptr_t)v6878;
	i1 v6880 = (i1)+0;
	if (v6879==v6880) goto c02_04fb; else goto c02_04fc;

c02_04fc:;

	i8 v6881 = (i8)(intptr_t)(ws+4135);
	i1 v6882 = *(i1*)(intptr_t)v6881;
	i1 v6883 = (i1)+0;
	if (v6882==v6883) goto c02_04fb; else goto c02_04fa;

c02_04fa:;

	i8 v6884 = (i8)(intptr_t)(ws+4135);
	i1 v6885 = *(i1*)(intptr_t)v6884;
	i8 v6886 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6887;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6886)(&v6887, v6885);

	i8 v6888 = (i8)(intptr_t)(ws+4140);
	*(i1*)(intptr_t)v6888 = v6887;

	i8 v6889 = (i8)(intptr_t)(ws+4140);
	i1 v6890 = *(i1*)(intptr_t)v6889;
	i8 v6891 = (i8)(intptr_t)(ws+4072);
	i8 v6892 = *(i8*)(intptr_t)v6891;
	i8 v6893 = v6892+(+49);
	*(i1*)(intptr_t)v6893 = v6890;

	i8 v6894 = (i8)(intptr_t)(ws+4130);
	i1 v6895 = *(i1*)(intptr_t)v6894;
	i8 v6896 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6897;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6896)(&v6897, v6895);

	i8 v6898 = (i8)(intptr_t)(ws+4141);
	*(i1*)(intptr_t)v6898 = v6897;

	i8 v6899 = (i8)(intptr_t)(ws+4141);
	i1 v6900 = *(i1*)(intptr_t)v6899;
	i8 v6901 = (i8)(intptr_t)(ws+4088);
	i8 v6902 = *(i8*)(intptr_t)v6901;
	i8 v6903 = v6902+(+57);
	*(i1*)(intptr_t)v6903 = v6900;

	i8 v6904 = (i8)(intptr_t)(ws+4088);
	i8 v6905 = *(i8*)(intptr_t)v6904;
	i8 v6906 = v6905+(+57);
	i1 v6907 = *(i1*)(intptr_t)v6906;
	i8 v6908 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6909;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6908)(&v6909, v6907);

	i8 v6910 = (i8)(intptr_t)(ws+4142);
	*(i1*)(intptr_t)v6910 = v6909;

	i8 v6911 = (i8)(intptr_t)(ws+4142);
	i1 v6912 = *(i1*)(intptr_t)v6911;
	i8 v6913 = (i8)(intptr_t)(ws+4129);
	*(i1*)(intptr_t)v6913 = v6912;

	i8 v6914 = (i8)(intptr_t)(ws+4120);
	i8 v6915 = *(i8*)(intptr_t)v6914;
	i8 v6916 = v6915+(+64);
	i1 v6917 = *(i1*)(intptr_t)v6916;
	i8 v6918 = (i8)(intptr_t)(ws+4129);
	i1 v6919 = *(i1*)(intptr_t)v6918;
	i1 v6920 = v6917|v6919;
	i8 v6921 = (i8)(intptr_t)(ws+4120);
	i8 v6922 = *(i8*)(intptr_t)v6921;
	i8 v6923 = v6922+(+64);
	*(i1*)(intptr_t)v6923 = v6920;

	i8 v6924 = (i8)(intptr_t)(ws+4120);
	i8 v6925 = *(i8*)(intptr_t)v6924;
	i8 v6926 = (i8)(intptr_t)(ws+4072);
	i8 v6927 = *(i8*)(intptr_t)v6926;
	i8 v6928 = (i8)(intptr_t)(ws+4129);
	i1 v6929 = *(i1*)(intptr_t)v6928;
	i8 v6930 = (i8)(intptr_t)(f367_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v6930)(v6929, v6927, v6925);

	i8 v6931 = (i8)(intptr_t)(ws+4072);
	i8 v6932 = *(i8*)(intptr_t)v6931;
	i8 v6933 = v6932+(+49);
	i1 v6934 = *(i1*)(intptr_t)v6933;
	i8 v6935 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6936;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6935)(&v6936, v6934);

	i8 v6937 = (i8)(intptr_t)(ws+4143);
	*(i1*)(intptr_t)v6937 = v6936;

	i8 v6938 = (i8)(intptr_t)(ws+4072);
	i8 v6939 = *(i8*)(intptr_t)v6938;
	i8 v6940 = v6939+(+66);
	i1 v6941 = *(i1*)(intptr_t)v6940;
	i8 v6942 = (i8)(intptr_t)(ws+4143);
	i1 v6943 = *(i1*)(intptr_t)v6942;
	i1 v6944 = v6941|v6943;
	i8 v6945 = (i8)(intptr_t)(ws+4072);
	i8 v6946 = *(i8*)(intptr_t)v6945;
	i8 v6947 = v6946+(+66);
	*(i1*)(intptr_t)v6947 = v6944;

	i8 v6948 = (i8)(intptr_t)(ws+4072);
	i8 v6949 = *(i8*)(intptr_t)v6948;
	i8 v6950 = (i8)(intptr_t)(ws+4072);
	i8 v6951 = *(i8*)(intptr_t)v6950;
	i8 v6952 = v6951+(+49);
	i1 v6953 = *(i1*)(intptr_t)v6952;
	i8 v6954 = (i8)(intptr_t)(ws+4088);
	i8 v6955 = *(i8*)(intptr_t)v6954;
	i8 v6956 = v6955+(+57);
	i1 v6957 = *(i1*)(intptr_t)v6956;
	i8 v6958 = (i8)(intptr_t)(f370_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v6958)(v6957, v6953, v6949);

	goto c02_04f5;

c02_04fb:;


	i8 v7038 = (i8)(intptr_t)(ws+4072);
	i8 v7039 = *(i8*)(intptr_t)v7038;
	i8 v7040 = v7039+(+48);
	i1 v7041 = *(i1*)(intptr_t)v7040;
	i8 v7042 = (i8)(intptr_t)(ws+4134);
	i1 v7043 = *(i1*)(intptr_t)v7042;
	i1 v7044 = v7041&v7043;
	i8 v7045 = (i8)(intptr_t)(ws+4072);
	i8 v7046 = *(i8*)(intptr_t)v7045;
	i8 v7047 = v7046+(+66);
	i1 v7048 = *(i1*)(intptr_t)v7047;
	i1 v7049 = ~v7048;
	i1 v7050 = v7044&v7049;
	i8 v7051 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v7051 = v7050;

	i8 v7052 = (i8)(intptr_t)(ws+4113);
	i1 v7053 = *(i1*)(intptr_t)v7052;
	i1 v7054 = (i1)+0;
	if (v7053==v7054) goto c02_0500; else goto c02_0501;

c02_0500:;

	i8 v7055 = (i8)(intptr_t)c02_s01ee;
	i8 v7056 = (i8)(intptr_t)(f388_deadlock);

	((void(*)(i8 /* s */))(intptr_t)v7056)(v7055);

c02_0501:;

c02_04fd:;

	i8 v7057 = (i8)(intptr_t)(ws+4113);
	i1 v7058 = *(i1*)(intptr_t)v7057;
	i8 v7059 = (i8)(intptr_t)(f151_FindFirst);
	i1 v7060;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v7059)(&v7060, v7058);

	i8 v7061 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v7061 = v7060;

	i8 v7062 = (i8)(intptr_t)(ws+4144);
	i1 v7063 = *(i1*)(intptr_t)v7062;
	i8 v7064 = (i8)(intptr_t)(ws+4072);
	i8 v7065 = *(i8*)(intptr_t)v7064;
	i8 v7066 = v7065+(+49);
	*(i1*)(intptr_t)v7066 = v7063;

	i8 v7067 = (i8)(intptr_t)(ws+4072);
	i8 v7068 = *(i8*)(intptr_t)v7067;
	i8 v7069 = v7068+(+49);
	i1 v7070 = *(i1*)(intptr_t)v7069;
	i8 v7071 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v7072;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v7071)(&v7072, v7070);

	i8 v7073 = (i8)(intptr_t)(ws+4145);
	*(i1*)(intptr_t)v7073 = v7072;

	i8 v7074 = (i8)(intptr_t)(ws+4072);
	i8 v7075 = *(i8*)(intptr_t)v7074;
	i8 v7076 = v7075+(+66);
	i1 v7077 = *(i1*)(intptr_t)v7076;
	i8 v7078 = (i8)(intptr_t)(ws+4145);
	i1 v7079 = *(i1*)(intptr_t)v7078;
	i1 v7080 = v7077|v7079;
	i8 v7081 = (i8)(intptr_t)(ws+4072);
	i8 v7082 = *(i8*)(intptr_t)v7081;
	i8 v7083 = v7082+(+66);
	*(i1*)(intptr_t)v7083 = v7080;

	i8 v7084 = (i8)(intptr_t)(ws+4072);
	i8 v7085 = *(i8*)(intptr_t)v7084;
	i8 v7086 = (i8)(intptr_t)(ws+4072);
	i8 v7087 = *(i8*)(intptr_t)v7086;
	i8 v7088 = v7087+(+49);
	i1 v7089 = *(i1*)(intptr_t)v7088;
	i1 v7090 = (i1)+0;
	i8 v7091 = (i8)(intptr_t)(f370_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v7091)(v7090, v7089, v7085);

	i8 v7092 = (i8)(intptr_t)(ws+4088);
	i8 v7093 = *(i8*)(intptr_t)v7092;
	i8 v7094 = v7093+(+56);
	i1 v7095 = *(i1*)(intptr_t)v7094;
	i8 v7096 = (i8)(intptr_t)(ws+4120);
	i8 v7097 = *(i8*)(intptr_t)v7096;
	i8 v7098 = v7097+(+64);
	i1 v7099 = *(i1*)(intptr_t)v7098;
	i1 v7100 = ~v7099;
	i1 v7101 = v7095&v7100;
	i8 v7102 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v7102 = v7101;

	i8 v7103 = (i8)(intptr_t)(ws+4113);
	i1 v7104 = *(i1*)(intptr_t)v7103;
	i1 v7105 = (i1)+0;
	if (v7104==v7105) goto c02_0505; else goto c02_0506;

c02_0505:;

	i8 v7106 = (i8)(intptr_t)c02_s01ef;
	i8 v7107 = (i8)(intptr_t)(f388_deadlock);

	((void(*)(i8 /* s */))(intptr_t)v7107)(v7106);

c02_0506:;

c02_0502:;

	i8 v7108 = (i8)(intptr_t)(ws+4113);
	i1 v7109 = *(i1*)(intptr_t)v7108;
	i8 v7110 = (i8)(intptr_t)(f151_FindFirst);
	i1 v7111;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v7110)(&v7111, v7109);

	i8 v7112 = (i8)(intptr_t)(ws+4146);
	*(i1*)(intptr_t)v7112 = v7111;

	i8 v7113 = (i8)(intptr_t)(ws+4146);
	i1 v7114 = *(i1*)(intptr_t)v7113;
	i8 v7115 = (i8)(intptr_t)(ws+4088);
	i8 v7116 = *(i8*)(intptr_t)v7115;
	i8 v7117 = v7116+(+57);
	*(i1*)(intptr_t)v7117 = v7114;

	i8 v7118 = (i8)(intptr_t)(ws+4088);
	i8 v7119 = *(i8*)(intptr_t)v7118;
	i8 v7120 = v7119+(+57);
	i1 v7121 = *(i1*)(intptr_t)v7120;
	i8 v7122 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v7123;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v7122)(&v7123, v7121);

	i8 v7124 = (i8)(intptr_t)(ws+4147);
	*(i1*)(intptr_t)v7124 = v7123;

	i8 v7125 = (i8)(intptr_t)(ws+4120);
	i8 v7126 = *(i8*)(intptr_t)v7125;
	i8 v7127 = v7126+(+64);
	i1 v7128 = *(i1*)(intptr_t)v7127;
	i8 v7129 = (i8)(intptr_t)(ws+4147);
	i1 v7130 = *(i1*)(intptr_t)v7129;
	i1 v7131 = v7128|v7130;
	i8 v7132 = (i8)(intptr_t)(ws+4120);
	i8 v7133 = *(i8*)(intptr_t)v7132;
	i8 v7134 = v7133+(+64);
	*(i1*)(intptr_t)v7134 = v7131;

	i8 v7135 = (i8)(intptr_t)(ws+4120);
	i8 v7136 = *(i8*)(intptr_t)v7135;
	i1 v7137 = (i1)+0;
	i8 v7138 = (i8)(intptr_t)(ws+4088);
	i8 v7139 = *(i8*)(intptr_t)v7138;
	i8 v7140 = v7139+(+57);
	i1 v7141 = *(i1*)(intptr_t)v7140;
	i8 v7142 = (i8)(intptr_t)(f371_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v7142)(v7141, v7137, v7136);

c02_04f5:;

c02_04ed:;

c02_04e8:;

c02_04de:;

endsub:;
}
	void f387_AllocateRegister(void);

// UpdateProducedRegisters workspace at ws+4112 length ws+1
void f389_UpdateProducedRegisters(void) {

	i1 v7144 = (i1)+0;
	i8 v7145 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v7145 = v7144;

c02_0507:;

	i8 v7146 = (i8)(intptr_t)(ws+4032);
	i1 v7147 = *(i1*)(intptr_t)v7146;
	i1 v7148 = (i1)+4;
	if (v7147==v7148) goto c02_050c; else goto c02_050b;

c02_050b:;

	i8 v7149 = (i8)(intptr_t)(ws+4072);
	i8 v7150 = *(i8*)(intptr_t)v7149;
	i8 v7151 = v7150+(+16);
	i8 v7152 = (i8)(intptr_t)(ws+4032);
	i1 v7153 = *(i1*)(intptr_t)v7152;
	i8 v7154 = v7153;
	i1 v7155 = (i1)+3;
	i8 v7156 = ((i8)v7154)<<v7155;
	i8 v7157 = v7151+v7156;
	i8 v7158 = *(i8*)(intptr_t)v7157;
	i8 v7159 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v7159 = v7158;

	i8 v7160 = (i8)(intptr_t)(ws+4088);
	i8 v7161 = *(i8*)(intptr_t)v7160;
	i8 v7162 = (i8)+0;
	if (v7161==v7162) goto c02_0513; else goto c02_0514;

c02_0514:;

	i8 v7163 = (i8)(intptr_t)(ws+4088);
	i8 v7164 = *(i8*)(intptr_t)v7163;
	i8 v7165 = v7164+(+56);
	i1 v7166 = *(i1*)(intptr_t)v7165;
	i1 v7167 = (i1)-1;
	if (v7166==v7167) goto c02_0512; else goto c02_0513;

c02_0512:;

	i8 v7168 = (i8)(intptr_t)(ws+4072);
	i8 v7169 = *(i8*)(intptr_t)v7168;
	i8 v7170 = v7169+(+49);
	i1 v7171 = *(i1*)(intptr_t)v7170;
	i8 v7172 = (i8)(intptr_t)(ws+4088);
	i8 v7173 = *(i8*)(intptr_t)v7172;
	i8 v7174 = v7173+(+56);
	*(i1*)(intptr_t)v7174 = v7171;

	i1 v7175 = (i1)+0;
	i8 v7176 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v7176 = v7175;

c02_0515:;

	i8 v7177 = (i8)(intptr_t)(ws+4112);
	i1 v7178 = *(i1*)(intptr_t)v7177;
	i1 v7179 = (i1)+4;
	if (v7178==v7179) goto c02_051a; else goto c02_0519;

c02_0519:;

	i8 v7180 = (i8)(intptr_t)(ws+4032);
	i1 v7181 = *(i1*)(intptr_t)v7180;
	i8 v7182 = (i8)(intptr_t)(ws+4112);
	i1 v7183 = *(i1*)(intptr_t)v7182;
	if (v7181==v7183) goto c02_051f; else goto c02_051e;

c02_051e:;

	i8 v7184 = (i8)(intptr_t)(ws+4072);
	i8 v7185 = *(i8*)(intptr_t)v7184;
	i8 v7186 = v7185+(+16);
	i8 v7187 = (i8)(intptr_t)(ws+4112);
	i1 v7188 = *(i1*)(intptr_t)v7187;
	i8 v7189 = v7188;
	i1 v7190 = (i1)+3;
	i8 v7191 = ((i8)v7189)<<v7190;
	i8 v7192 = v7186+v7191;
	i8 v7193 = *(i8*)(intptr_t)v7192;
	i8 v7194 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v7194 = v7193;

	i8 v7195 = (i8)(intptr_t)(ws+4088);
	i8 v7196 = *(i8*)(intptr_t)v7195;
	i8 v7197 = (i8)+0;
	if (v7196==v7197) goto c02_0524; else goto c02_0523;

c02_0523:;

	i8 v7198 = (i8)(intptr_t)(ws+4088);
	i8 v7199 = *(i8*)(intptr_t)v7198;
	i8 v7200 = v7199+(+56);
	i1 v7201 = *(i1*)(intptr_t)v7200;
	i8 v7202 = (i8)(intptr_t)(ws+4072);
	i8 v7203 = *(i8*)(intptr_t)v7202;
	i8 v7204 = v7203+(+49);
	i1 v7205 = *(i1*)(intptr_t)v7204;
	i1 v7206 = ~v7205;
	i1 v7207 = v7201&v7206;
	i8 v7208 = (i8)(intptr_t)(ws+4088);
	i8 v7209 = *(i8*)(intptr_t)v7208;
	i8 v7210 = v7209+(+56);
	*(i1*)(intptr_t)v7210 = v7207;

c02_0524:;

c02_0520:;

c02_051f:;

c02_051b:;

	i8 v7211 = (i8)(intptr_t)(ws+4112);
	i1 v7212 = *(i1*)(intptr_t)v7211;
	i1 v7213 = v7212+(+1);
	i8 v7214 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v7214 = v7213;

	goto c02_0515;

c02_051a:;

c02_0513:;

c02_050d:;

	i8 v7215 = (i8)(intptr_t)(ws+4032);
	i1 v7216 = *(i1*)(intptr_t)v7215;
	i1 v7217 = v7216+(+1);
	i8 v7218 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v7218 = v7217;

	goto c02_0507;

c02_050c:;

endsub:;
}
	void f389_UpdateProducedRegisters(void);
	void f372_ShuffleRegisters(i8 /* moves */);
	void f190_EmitOneInstruction(i8 /* self */, i1 /* ruleid */);
	void f372_ShuffleRegisters(i8 /* moves */);
	void f159_ArchEndInstruction(void);
	void f79_FreeNode(i8 /* node */);
	void f148_FreeInstruction(i8 /* insn */);

// EmitAndFreeInstructions workspace at ws+4112 length ws+8
void f390_EmitAndFreeInstructions(void) {

c02_0525:;

	i8 v7220 = (i8)(intptr_t)(ws+4048);
	i8 v7221 = *(i8*)(intptr_t)v7220;
	i8 v7222 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v7222 = v7221;

	i8 v7223 = (i8)(intptr_t)(ws+4112);
	i8 v7224 = *(i8*)(intptr_t)v7223;
	i8 v7225 = (i8)+0;
	if (v7224==v7225) goto c02_052a; else goto c02_052b;

c02_052a:;

	goto c02_0526;

c02_052b:;

c02_0527:;

	i8 v7226 = (i8)(intptr_t)(ws+4048);
	i8 v7227 = *(i8*)(intptr_t)v7226;
	i8 v7228 = v7227+(+8);
	i8 v7229 = *(i8*)(intptr_t)v7228;
	i8 v7230 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7230 = v7229;

	i8 v7231 = (i8)(intptr_t)(ws+4112);
	i8 v7232 = *(i8*)(intptr_t)v7231;
	i8 v7233 = v7232+(+75);
	i8 v7234 = (i8)(intptr_t)(f372_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v7234)(v7233);

	i8 v7235 = (i8)(intptr_t)(ws+4112);
	i8 v7236 = *(i8*)(intptr_t)v7235;
	i8 v7237 = v7236+(+16);
	i8 v7238 = *(i8*)(intptr_t)v7237;
	i8 v7239 = v7238+(+256);
	i1 v7240 = *(i1*)(intptr_t)v7239;
	i1 v7241 = (i1)+18;
	if (v7240==v7241) goto c02_052f; else goto c02_0530;

c02_052f:;

	i1 v7242 = (i1)+1;
	i8 v7243 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v7243 = v7242;

c02_0530:;

c02_052c:;

	i8 v7244 = (i8)(intptr_t)(ws+4112);
	i8 v7245 = *(i8*)(intptr_t)v7244;
	i8 v7246 = v7245+(+86);
	i1 v7247 = *(i1*)(intptr_t)v7246;
	i8 v7248 = (i8)(intptr_t)(ws+4112);
	i8 v7249 = *(i8*)(intptr_t)v7248;
	i8 v7250 = (i8)(intptr_t)(f190_EmitOneInstruction);

	((void(*)(i8 /* self */, i1 /* ruleid */))(intptr_t)v7250)(v7249, v7247);

	i8 v7251 = (i8)(intptr_t)(ws+4112);
	i8 v7252 = *(i8*)(intptr_t)v7251;
	i8 v7253 = v7252+(+67);
	i8 v7254 = (i8)(intptr_t)(f372_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v7254)(v7253);

	i8 v7255 = (i8)(intptr_t)(f159_ArchEndInstruction);

	((void(*)(void))(intptr_t)v7255)();

	i8 v7256 = (i8)(intptr_t)(ws+4112);
	i8 v7257 = *(i8*)(intptr_t)v7256;
	i8 v7258 = v7257+(+16);
	i8 v7259 = *(i8*)(intptr_t)v7258;
	i8 v7260 = v7259+(+256);
	i1 v7261 = *(i1*)(intptr_t)v7260;
	i1 v7262 = (i1)+23;
	if (v7261==v7262) goto c02_0534; else goto c02_0535;

c02_0534:;

	i1 v7263 = (i1)+0;
	i8 v7264 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v7264 = v7263;

c02_0535:;

c02_0531:;

	i8 v7265 = (i8)(intptr_t)(ws+4112);
	i8 v7266 = *(i8*)(intptr_t)v7265;
	i8 v7267 = v7266+(+16);
	i8 v7268 = *(i8*)(intptr_t)v7267;
	i8 v7269 = v7268+(+256);
	i1 v7270 = *(i1*)(intptr_t)v7269;
	i1 v7271 = (i1)+24;
	if (v7270==v7271) goto c02_0539; else goto c02_053a;

c02_0539:;

	i8 v7272 = (i8)(intptr_t)(ws+4112);
	i8 v7273 = *(i8*)(intptr_t)v7272;
	i8 v7274 = v7273+(+16);
	i8 v7275 = *(i8*)(intptr_t)v7274;
	i8 v7276 = (i8)(intptr_t)(f79_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v7276)(v7275);

c02_053a:;

c02_0536:;

	i8 v7277 = (i8)(intptr_t)(ws+4112);
	i8 v7278 = *(i8*)(intptr_t)v7277;
	i8 v7279 = (i8)(intptr_t)(f148_FreeInstruction);

	((void(*)(i8 /* insn */))(intptr_t)v7279)(v7278);

	goto c02_0525;

c02_0526:;

endsub:;
}
	void f390_EmitAndFreeInstructions(void);
	void f160_ArchEndGroup(void);
	void f64_Discard(i8 /* node */);

// Generate workspace at ws+4024 length ws+88
void f380_Generate(i8 p5962 /* rootnode */) {
	*(i8*)(intptr_t)(ws+4024) = p5962; /* rootnode */

	i8 v5963 = (i8)+0;
	i8 v5964 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v5964 = v5963;

	i8 v5965 = (i8)+0;
	i8 v5966 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v5966 = v5965;

	i8 v5967 = (i8)(intptr_t)(ws+184);
	i8 v5968 = *(i8*)(intptr_t)v5967;
	i8 v5969 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v5969 = v5968;

	i8 v5970 = (i8)(intptr_t)(ws+4024);
	i8 v5971 = *(i8*)(intptr_t)v5970;
	i8 v5972 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5972)(v5971);

c02_041c:;

	i8 v5973 = (i8)(intptr_t)(ws+184);
	i8 v5974 = *(i8*)(intptr_t)v5973;
	i8 v5975 = (i8)(intptr_t)(ws+4056);
	i8 v5976 = *(i8*)(intptr_t)v5975;
	if (v5974==v5976) goto c02_0421; else goto c02_0420;

c02_0420:;

	i8 v5977 = (i8)(intptr_t)(f147_AllocNewInstruction);
	i8 v5978;

	((void(*)(i8* /* insn */))(intptr_t)v5977)(&v5978);

	i8 v5979 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v5979 = v5978;

	i8 v5980 = (i8)(intptr_t)(ws+4064);
	i8 v5981 = *(i8*)(intptr_t)v5980;
	i8 v5982 = (i8)(intptr_t)(ws+4072);
	*(i8*)(intptr_t)v5982 = v5981;

	i8 v5983 = (i8)(intptr_t)(ws+4040);
	i8 v5984 = *(i8*)(intptr_t)v5983;
	i8 v5985 = (i8)+0;
	if (v5984==v5985) goto c02_0425; else goto c02_0426;

c02_0425:;

	i8 v5986 = (i8)(intptr_t)(ws+4072);
	i8 v5987 = *(i8*)(intptr_t)v5986;
	i8 v5988 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v5988 = v5987;

	i8 v5989 = (i8)(intptr_t)(ws+4072);
	i8 v5990 = *(i8*)(intptr_t)v5989;
	i8 v5991 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v5991 = v5990;

	goto c02_0422;

c02_0426:;

	i8 v5992 = (i8)(intptr_t)(ws+4072);
	i8 v5993 = *(i8*)(intptr_t)v5992;
	i8 v5994 = (i8)(intptr_t)(ws+4048);
	i8 v5995 = *(i8*)(intptr_t)v5994;
	*(i8*)(intptr_t)v5995 = v5993;

	i8 v5996 = (i8)(intptr_t)(ws+4048);
	i8 v5997 = *(i8*)(intptr_t)v5996;
	i8 v5998 = (i8)(intptr_t)(ws+4072);
	i8 v5999 = *(i8*)(intptr_t)v5998;
	i8 v6000 = v5999+(+8);
	*(i8*)(intptr_t)v6000 = v5997;

	i8 v6001 = (i8)(intptr_t)(ws+4072);
	i8 v6002 = *(i8*)(intptr_t)v6001;
	i8 v6003 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v6003 = v6002;

c02_0422:;

	i8 v6004 = (i8)(intptr_t)(f62_PopNode);
	i8 v6005;

	((void(*)(i8* /* node */))(intptr_t)v6004)(&v6005);

	i8 v6006 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v6006 = v6005;

	i8 v6007 = (i8)(intptr_t)(ws+4080);
	i8 v6008 = *(i8*)(intptr_t)v6007;
	i8 v6009 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v6009 = v6008;


	i8 v6396 = (i8)(intptr_t)(f381_InstructionMatcher);

	((void(*)(void))(intptr_t)v6396)();

	i8 v6397 = (i8)(intptr_t)(ws+4072);
	i8 v6398 = *(i8*)(intptr_t)v6397;
	i8 v6399 = v6398+(+48);
	i1 v6400 = *(i1*)(intptr_t)v6399;
	i1 v6401 = (i1)+0;
	if (v6400==v6401) goto c02_049d; else goto c02_049c;

c02_049c:;



	i8 v7143 = (i8)(intptr_t)(f387_AllocateRegister);

	((void(*)(void))(intptr_t)v7143)();


	i8 v7219 = (i8)(intptr_t)(f389_UpdateProducedRegisters);

	((void(*)(void))(intptr_t)v7219)();

c02_049d:;

c02_0499:;

	goto c02_041c;

c02_0421:;


	i8 v7280 = (i8)(intptr_t)(f390_EmitAndFreeInstructions);

	((void(*)(void))(intptr_t)v7280)();

	i8 v7281 = (i8)(intptr_t)(f160_ArchEndGroup);

	((void(*)(void))(intptr_t)v7281)();

	i8 v7282 = (i8)(intptr_t)(ws+4024);
	i8 v7283 = *(i8*)(intptr_t)v7282;
	i8 v7284 = (i8)(intptr_t)(f64_Discard);

	((void(*)(i8 /* node */))(intptr_t)v7284)(v7283);

endsub:;
}
const i1 c02_s01f0[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(i8 /* s */);

// PushNode workspace at ws+4232 length ws+8
void f61_PushNode(i8 p7447 /* node */) {
	*(i8*)(intptr_t)(ws+4232) = p7447; /* node */

	i8 v7448 = (i8)(intptr_t)(ws+4232);
	i8 v7449 = *(i8*)(intptr_t)v7448;
	i8 v7450 = (i8)+0;
	if (v7449==v7450) goto c02_0555; else goto c02_0554;

c02_0554:;

	i8 v7451 = (i8)(intptr_t)(ws+184);
	i8 v7452 = *(i8*)(intptr_t)v7451;
	i8 v7453 = (i8)(intptr_t)(ws+184);
	if (v7452==v7453) goto c02_0559; else goto c02_055a;

c02_0559:;

	i8 v7454 = (i8)(intptr_t)c02_s01f0;
	i8 v7455 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v7455)(v7454);

c02_055a:;

c02_0556:;

	i8 v7456 = (i8)(intptr_t)(ws+4232);
	i8 v7457 = *(i8*)(intptr_t)v7456;
	i8 v7458 = (i8)(intptr_t)(ws+184);
	i8 v7459 = *(i8*)(intptr_t)v7458;
	*(i8*)(intptr_t)v7459 = v7457;

	i8 v7460 = (i8)(intptr_t)(ws+184);
	i8 v7461 = *(i8*)(intptr_t)v7460;
	i8 v7462 = v7461+(+8);
	i8 v7463 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v7463 = v7462;

c02_0555:;

c02_0551:;

endsub:;
}

// PopNode workspace at ws+4232 length ws+8
void f62_PopNode(i8* p7464 /* node */) {

	i8 v7465 = (i8)(intptr_t)(ws+184);
	i8 v7466 = *(i8*)(intptr_t)v7465;
	i8 v7467 = v7466+(-8);
	i8 v7468 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v7468 = v7467;

	i8 v7469 = (i8)(intptr_t)(ws+184);
	i8 v7470 = *(i8*)(intptr_t)v7469;
	i8 v7471 = *(i8*)(intptr_t)v7470;
	i8 v7472 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v7472 = v7471;

endsub:;
	*p7464 = *(i8*)(intptr_t)(ws+4232);
}
	void f62_PopNode(i8* /* node */);
	void f61_PushNode(i8 /* node */);
	void f61_PushNode(i8 /* node */);

// NextNode workspace at ws+4216 length ws+16
void f63_NextNode(i8* p7473 /* node */) {

	i8 v7474 = (i8)(intptr_t)(f62_PopNode);
	i8 v7475;

	((void(*)(i8* /* node */))(intptr_t)v7474)(&v7475);

	i8 v7476 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v7476 = v7475;

	i8 v7477 = (i8)(intptr_t)(ws+4224);
	i8 v7478 = *(i8*)(intptr_t)v7477;
	i8 v7479 = (i8)(intptr_t)(ws+4216);
	*(i8*)(intptr_t)v7479 = v7478;

	i8 v7480 = (i8)(intptr_t)(ws+4216);
	i8 v7481 = *(i8*)(intptr_t)v7480;
	i8 v7482 = (i8)+0;
	if (v7481==v7482) goto c02_055f; else goto c02_055e;

c02_055e:;

	i8 v7483 = (i8)(intptr_t)(ws+4216);
	i8 v7484 = *(i8*)(intptr_t)v7483;
	i8 v7485 = v7484+(+24);
	i8 v7486 = *(i8*)(intptr_t)v7485;
	i8 v7487 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7487)(v7486);

	i8 v7488 = (i8)(intptr_t)(ws+4216);
	i8 v7489 = *(i8*)(intptr_t)v7488;
	i8 v7490 = v7489+(+32);
	i8 v7491 = *(i8*)(intptr_t)v7490;
	i8 v7492 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7492)(v7491);

c02_055f:;

c02_055b:;

endsub:;
	*p7473 = *(i8*)(intptr_t)(ws+4216);
}
	void f61_PushNode(i8 /* node */);
	void f63_NextNode(i8* /* node */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);
	void f79_FreeNode(i8 /* node */);

// Discard workspace at ws+4112 length ws+32
void f64_Discard(i8 p7493 /* node */) {
	*(i8*)(intptr_t)(ws+4112) = p7493; /* node */

	i8 v7494 = (i8)(intptr_t)(ws+184);
	i8 v7495 = *(i8*)(intptr_t)v7494;
	i8 v7496 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v7496 = v7495;

	i8 v7497 = (i8)(intptr_t)(ws+4112);
	i8 v7498 = *(i8*)(intptr_t)v7497;
	i8 v7499 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7499)(v7498);

c02_0560:;

	i8 v7500 = (i8)(intptr_t)(ws+184);
	i8 v7501 = *(i8*)(intptr_t)v7500;
	i8 v7502 = (i8)(intptr_t)(ws+4120);
	i8 v7503 = *(i8*)(intptr_t)v7502;
	if (v7501==v7503) goto c02_0565; else goto c02_0564;

c02_0564:;

	i8 v7504 = (i8)(intptr_t)(f63_NextNode);
	i8 v7505;

	((void(*)(i8* /* node */))(intptr_t)v7504)(&v7505);

	i8 v7506 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v7506 = v7505;

	i8 v7507 = (i8)(intptr_t)(ws+4128);
	i8 v7508 = *(i8*)(intptr_t)v7507;
	i8 v7509 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v7509 = v7508;

	i8 v7510 = (i8)(intptr_t)(ws+4136);
	i8 v7511 = *(i8*)(intptr_t)v7510;
	i8 v7512 = v7511+(+256);
	i1 v7513 = *(i1*)(intptr_t)v7512;

	if (v7513 != +19) goto c02_0567;

	i8 v7514 = (i8)(intptr_t)(ws+4136);
	i8 v7515 = *(i8*)(intptr_t)v7514;
	i8 v7516 = *(i8*)(intptr_t)v7515;
	i8 v7517 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7517)(v7516);

	goto c02_0566;

c02_0567:;

	if (v7513 != +12) goto c02_0568;

	i8 v7518 = (i8)(intptr_t)(ws+4136);
	i8 v7519 = *(i8*)(intptr_t)v7518;
	i8 v7520 = *(i8*)(intptr_t)v7519;
	i8 v7521 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7521)(v7520);

	goto c02_0566;

c02_0568:;

	if (v7513 != +41) goto c02_0569;

	i8 v7522 = (i8)(intptr_t)(ws+4136);
	i8 v7523 = *(i8*)(intptr_t)v7522;
	i8 v7524 = *(i8*)(intptr_t)v7523;
	i8 v7525 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7525)(v7524);

c02_0569:;

c02_0566:;


	i8 v7526 = (i8)(intptr_t)(ws+4136);
	i8 v7527 = *(i8*)(intptr_t)v7526;
	i8 v7528 = (i8)(intptr_t)(f79_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v7528)(v7527);

	goto c02_0560;

c02_0565:;

endsub:;
}
	void f115_I_b8(i1* /* b */);
	void f77_AllocateNewNode(i8* /* m */, i1 /* code */);

// I_node workspace at ws+4024 length ws+49
void f393_I_node(i8* p7529 /* rootnode */) {

	i1 v7530 = (i1)+1;
	i8 v7531 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v7531 = v7530;

	i8 v7532 = (i8)+0;
	i8 v7533 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7533 = v7532;

c02_056a:;

	i8 v7534 = (i8)(intptr_t)(ws+4032);
	i1 v7535 = *(i1*)(intptr_t)v7534;
	i1 v7536 = (i1)+0;
	if (v7535==v7536) goto c02_056f; else goto c02_056e;

c02_056e:;

	i8 v7537 = (i8)(intptr_t)(f115_I_b8);
	i1 v7538;

	((void(*)(i1* /* b */))(intptr_t)v7537)(&v7538);

	i8 v7539 = (i8)(intptr_t)(ws+4033);
	*(i1*)(intptr_t)v7539 = v7538;

	i8 v7540 = (i8)(intptr_t)(ws+4033);
	i1 v7541 = *(i1*)(intptr_t)v7540;
	i8 v7542 = (i8)(intptr_t)(ws+4034);
	*(i1*)(intptr_t)v7542 = v7541;

	i8 v7543 = (i8)(intptr_t)(ws+4034);
	i1 v7544 = *(i1*)(intptr_t)v7543;
	i8 v7545 = (i8)(intptr_t)(f77_AllocateNewNode);
	i8 v7546;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v7545)(&v7546, v7544);

	i8 v7547 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v7547 = v7546;

	i8 v7548 = (i8)(intptr_t)(ws+4040);
	i8 v7549 = *(i8*)(intptr_t)v7548;
	i8 v7550 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7550 = v7549;

	i8 v7551 = (i8)(intptr_t)(ws+4024);
	i8 v7552 = *(i8*)(intptr_t)v7551;
	i8 v7553 = (i8)(intptr_t)(ws+4048);
	i8 v7554 = *(i8*)(intptr_t)v7553;
	i8 v7555 = v7554+(+64);
	*(i8*)(intptr_t)v7555 = v7552;

	i8 v7556 = (i8)(intptr_t)(ws+4048);
	i8 v7557 = *(i8*)(intptr_t)v7556;
	i8 v7558 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7558 = v7557;

	i8 v7559 = (i8)(intptr_t)((i1*)f3___main_s0170);
	i8 v7560 = (i8)(intptr_t)(ws+4034);
	i1 v7561 = *(i1*)(intptr_t)v7560;
	i1 v7562 = v7561+(-1);
	i8 v7563 = v7562;
	i8 v7564 = v7559+v7563;
	i1 v7565 = *(i1*)(intptr_t)v7564;
	i8 v7566 = (i8)(intptr_t)(ws+4056);
	*(i1*)(intptr_t)v7566 = v7565;

	i8 v7567 = (i8)(intptr_t)(ws+4048);
	i8 v7568 = *(i8*)(intptr_t)v7567;
	i8 v7569 = (i8)(intptr_t)((i1*)f3___main_s016f);
	i8 v7570 = (i8)(intptr_t)(ws+4056);
	i1 v7571 = *(i1*)(intptr_t)v7570;
	i8 v7572 = v7571;
	i1 v7573 = (i1)+3;
	i8 v7574 = ((i8)v7572)<<v7573;
	i8 v7575 = v7569+v7574;
	i8 v7576 = *(i8*)(intptr_t)v7575;

	((void(*)(i8 /* node */))(intptr_t)v7576)(v7568);

	i8 v7577 = (i8)(intptr_t)(ws+4032);
	i1 v7578 = *(i1*)(intptr_t)v7577;
	i8 v7579 = (i8)(intptr_t)((i1*)f3___main_s0171);
	i8 v7580 = (i8)(intptr_t)(ws+4034);
	i1 v7581 = *(i1*)(intptr_t)v7580;
	i1 v7582 = v7581+(-1);
	i8 v7583 = v7582;
	i8 v7584 = v7579+v7583;
	i1 v7585 = *(i1*)(intptr_t)v7584;
	i1 v7586 = v7578+v7585;
	i1 v7587 = v7586+(-1);
	i8 v7588 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v7588 = v7587;

	goto c02_056a;

c02_056f:;

	i8 v7589 = (i8)+0;
	i8 v7590 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7590 = v7589;

c02_0570:;

	i8 v7591 = (i8)(intptr_t)(ws+4024);
	i8 v7592 = *(i8*)(intptr_t)v7591;
	i8 v7593 = (i8)+0;
	if (v7592==v7593) goto c02_0575; else goto c02_0574;

c02_0574:;

	i8 v7594 = (i8)(intptr_t)(ws+4024);
	i8 v7595 = *(i8*)(intptr_t)v7594;
	i8 v7596 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7596 = v7595;

	i8 v7597 = (i8)(intptr_t)(ws+4048);
	i8 v7598 = *(i8*)(intptr_t)v7597;
	i8 v7599 = v7598+(+64);
	i8 v7600 = *(i8*)(intptr_t)v7599;
	i8 v7601 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7601 = v7600;

	i8 v7602 = (i8)(intptr_t)((i1*)f3___main_s0171);
	i8 v7603 = (i8)(intptr_t)(ws+4048);
	i8 v7604 = *(i8*)(intptr_t)v7603;
	i8 v7605 = v7604+(+256);
	i1 v7606 = *(i1*)(intptr_t)v7605;
	i1 v7607 = v7606+(-1);
	i8 v7608 = v7607;
	i8 v7609 = v7602+v7608;
	i1 v7610 = *(i1*)(intptr_t)v7609;
	i8 v7611 = (i8)(intptr_t)(ws+4072);
	*(i1*)(intptr_t)v7611 = v7610;

	i8 v7612 = (i8)(intptr_t)(ws+4072);
	i1 v7613 = *(i1*)(intptr_t)v7612;
	i1 v7614 = (i1)+1;
	if (v7613<v7614) goto c02_057a; else goto c02_0579;

c02_0579:;

	i8 v7615 = (i8)(intptr_t)(ws+4064);
	i8 v7616 = *(i8*)(intptr_t)v7615;
	i8 v7617 = (i8)(intptr_t)(ws+4048);
	i8 v7618 = *(i8*)(intptr_t)v7617;
	i8 v7619 = v7618+(+24);
	*(i8*)(intptr_t)v7619 = v7616;

	i8 v7620 = (i8)(intptr_t)(ws+4048);
	i8 v7621 = *(i8*)(intptr_t)v7620;
	i8 v7622 = v7621+(+24);
	i8 v7623 = *(i8*)(intptr_t)v7622;
	i8 v7624 = v7623+(+64);
	i8 v7625 = *(i8*)(intptr_t)v7624;
	i8 v7626 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7626 = v7625;

c02_057a:;

c02_0576:;

	i8 v7627 = (i8)(intptr_t)(ws+4072);
	i1 v7628 = *(i1*)(intptr_t)v7627;
	i1 v7629 = (i1)+2;
	if (v7628==v7629) goto c02_057e; else goto c02_057f;

c02_057e:;

	i8 v7630 = (i8)(intptr_t)(ws+4048);
	i8 v7631 = *(i8*)(intptr_t)v7630;
	i8 v7632 = v7631+(+24);
	i8 v7633 = *(i8*)(intptr_t)v7632;
	i8 v7634 = (i8)(intptr_t)(ws+4048);
	i8 v7635 = *(i8*)(intptr_t)v7634;
	i8 v7636 = v7635+(+32);
	*(i8*)(intptr_t)v7636 = v7633;

	i8 v7637 = (i8)(intptr_t)(ws+4064);
	i8 v7638 = *(i8*)(intptr_t)v7637;
	i8 v7639 = (i8)(intptr_t)(ws+4048);
	i8 v7640 = *(i8*)(intptr_t)v7639;
	i8 v7641 = v7640+(+24);
	*(i8*)(intptr_t)v7641 = v7638;

	i8 v7642 = (i8)(intptr_t)(ws+4048);
	i8 v7643 = *(i8*)(intptr_t)v7642;
	i8 v7644 = v7643+(+24);
	i8 v7645 = *(i8*)(intptr_t)v7644;
	i8 v7646 = v7645+(+64);
	i8 v7647 = *(i8*)(intptr_t)v7646;
	i8 v7648 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7648 = v7647;

c02_057f:;

c02_057b:;

	i8 v7649 = (i8)(intptr_t)(ws+4064);
	i8 v7650 = *(i8*)(intptr_t)v7649;
	i8 v7651 = (i8)(intptr_t)(ws+4048);
	i8 v7652 = *(i8*)(intptr_t)v7651;
	i8 v7653 = v7652+(+64);
	*(i8*)(intptr_t)v7653 = v7650;

	i8 v7654 = (i8)(intptr_t)(ws+4048);
	i8 v7655 = *(i8*)(intptr_t)v7654;
	i8 v7656 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7656 = v7655;

	goto c02_0570;

c02_0575:;

	i8 v7657 = (i8)(intptr_t)(ws+4064);
	i8 v7658 = *(i8*)(intptr_t)v7657;
	i8 v7659 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7659 = v7658;

endsub:;
	*p7529 = *(i8*)(intptr_t)(ws+4024);
}
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f66_StartError(void);
const i1 c02_s01f1[] = { 0x64,0x75,0x70,0x6c,0x69,0x63,0x61,0x74,0x65,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f20_print_hex_i16(i2 /* value */);
const i1 c02_s01f2[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f48_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f21_print_hex_i32(i4 /* value */);
	void f67_EndError(void);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f146_AllocSubrId(i2* /* id */);

// AddSubr workspace at ws+4024 length ws+66
void f394_AddSubr(i8* p7660 /* subr */, i2 p7661 /* subrid */) {
	*(i2*)(intptr_t)(ws+4024) = p7661; /* subrid */

	i8 v7662 = (i8)(intptr_t)(ws+4024);
	i2 v7663 = *(i2*)(intptr_t)v7662;
	i8 v7664 = (i8)(intptr_t)(ws+4040);
	*(i2*)(intptr_t)v7664 = v7663;

	i8 v7665 = (i8)(intptr_t)(ws+3848);
	i8 v7666 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7666 = v7665;

c02_0580:;

	i8 v7667 = (i8)(intptr_t)(ws+4040);
	i2 v7668 = *(i2*)(intptr_t)v7667;
	i2 v7669 = (i2)+16;
	if (v7668<v7669) goto c02_0585; else goto c02_0584;

c02_0584:;

	i8 v7670 = (i8)(intptr_t)(ws+4048);
	i8 v7671 = *(i8*)(intptr_t)v7670;
	i8 v7672 = *(i8*)(intptr_t)v7671;
	i8 v7673 = (i8)+0;
	if (v7672==v7673) goto c02_0589; else goto c02_058a;

c02_0589:;

	i8 v7674 = (i8)+136;
	i8 v7675 = (i8)(intptr_t)(f33_Alloc);
	i8 v7676;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7675)(&v7676, v7674);

	i8 v7677 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v7677 = v7676;

	i8 v7678 = (i8)(intptr_t)(ws+4056);
	i8 v7679 = *(i8*)(intptr_t)v7678;
	i8 v7680 = (i8)(intptr_t)(ws+4048);
	i8 v7681 = *(i8*)(intptr_t)v7680;
	*(i8*)(intptr_t)v7681 = v7679;

c02_058a:;

c02_0586:;

	i8 v7682 = (i8)(intptr_t)(ws+4048);
	i8 v7683 = *(i8*)(intptr_t)v7682;
	i8 v7684 = *(i8*)(intptr_t)v7683;
	i8 v7685 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7685 = v7684;

	i8 v7686 = (i8)(intptr_t)(ws+4040);
	i2 v7687 = *(i2*)(intptr_t)v7686;
	i2 v7688 = v7687+(-16);
	i8 v7689 = (i8)(intptr_t)(ws+4040);
	*(i2*)(intptr_t)v7689 = v7688;

	goto c02_0580;

c02_0585:;

	i8 v7690 = (i8)(intptr_t)(ws+4048);
	i8 v7691 = *(i8*)(intptr_t)v7690;
	i8 v7692 = v7691+(+8);
	i8 v7693 = (i8)(intptr_t)(ws+4040);
	i2 v7694 = *(i2*)(intptr_t)v7693;
	i1 v7695 = v7694;
	i8 v7696 = v7695;
	i1 v7697 = (i1)+3;
	i8 v7698 = ((i8)v7696)<<v7697;
	i8 v7699 = v7692+v7698;
	i8 v7700 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7700 = v7699;

	i8 v7701 = (i8)(intptr_t)(ws+4064);
	i8 v7702 = *(i8*)(intptr_t)v7701;
	i8 v7703 = *(i8*)(intptr_t)v7702;
	i8 v7704 = (i8)+0;
	if (v7703==v7704) goto c02_058f; else goto c02_058e;

c02_058e:;

	i8 v7705 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7705)();

	i8 v7706 = (i8)(intptr_t)c02_s01f1;
	i8 v7707 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7707)(v7706);

	i8 v7708 = (i8)(intptr_t)(ws+4024);
	i2 v7709 = *(i2*)(intptr_t)v7708;
	i8 v7710 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7710)(v7709);

	i8 v7711 = (i8)(intptr_t)c02_s01f2;
	i8 v7712 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7712)(v7711);

	i8 v7713 = (i8)(intptr_t)(ws+2804);
	i8 v7714 = (i8)(intptr_t)(f48_FCBPos);
	i4 v7715;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v7714)(&v7715, v7713);

	i8 v7716 = (i8)(intptr_t)(ws+4072);
	*(i4*)(intptr_t)v7716 = v7715;

	i8 v7717 = (i8)(intptr_t)(ws+4072);
	i4 v7718 = *(i4*)(intptr_t)v7717;
	i8 v7719 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7719)(v7718);

	i8 v7720 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7720)();

c02_058f:;

c02_058b:;

	i8 v7721 = (i8)+51;
	i8 v7722 = (i8)(intptr_t)(f33_Alloc);
	i8 v7723;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7722)(&v7723, v7721);

	i8 v7724 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v7724 = v7723;

	i8 v7725 = (i8)(intptr_t)(ws+4080);
	i8 v7726 = *(i8*)(intptr_t)v7725;
	i8 v7727 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7727 = v7726;

	i8 v7728 = (i8)(intptr_t)(f146_AllocSubrId);
	i2 v7729;

	((void(*)(i2* /* id */))(intptr_t)v7728)(&v7729);

	i8 v7730 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v7730 = v7729;

	i8 v7731 = (i8)(intptr_t)(ws+4088);
	i2 v7732 = *(i2*)(intptr_t)v7731;
	i8 v7733 = (i8)(intptr_t)(ws+4032);
	i8 v7734 = *(i8*)(intptr_t)v7733;
	i8 v7735 = v7734+(+8);
	*(i2*)(intptr_t)v7735 = v7732;

	i8 v7736 = (i8)(intptr_t)(ws+4032);
	i8 v7737 = *(i8*)(intptr_t)v7736;
	i8 v7738 = (i8)(intptr_t)(ws+4064);
	i8 v7739 = *(i8*)(intptr_t)v7738;
	*(i8*)(intptr_t)v7739 = v7737;

endsub:;
	*p7660 = *(i8*)(intptr_t)(ws+4032);
}
	void f66_StartError(void);
const i1 c02_s01f3[] = { 0x75,0x6e,0x6b,0x6e,0x6f,0x77,0x6e,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f20_print_hex_i16(i2 /* value */);
const i1 c02_s01f4[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f48_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f21_print_hex_i32(i4 /* value */);
	void f67_EndError(void);

// FindSubr workspace at ws+4296 length ws+32
void f65_FindSubr(i8* p7740 /* subr */, i2 p7741 /* subrid */) {
	*(i2*)(intptr_t)(ws+4296) = p7741; /* subrid */

	i8 v7742 = (i8)(intptr_t)(ws+3848);
	i8 v7743 = (i8)(intptr_t)(ws+4312);
	*(i8*)(intptr_t)v7743 = v7742;

	i8 v7744 = (i8)(intptr_t)(ws+4296);
	i2 v7745 = *(i2*)(intptr_t)v7744;
	i8 v7746 = (i8)(intptr_t)(ws+4320);
	*(i2*)(intptr_t)v7746 = v7745;

c02_0590:;

	i8 v7747 = (i8)(intptr_t)(ws+4320);
	i2 v7748 = *(i2*)(intptr_t)v7747;
	i2 v7749 = (i2)+16;
	if (v7748<v7749) goto c02_0595; else goto c02_0594;

c02_0594:;

	i8 v7750 = (i8)(intptr_t)(ws+4312);
	i8 v7751 = *(i8*)(intptr_t)v7750;
	i8 v7752 = *(i8*)(intptr_t)v7751;
	i8 v7753 = (i8)+0;
	if (v7752==v7753) goto c02_0599; else goto c02_059a;

c02_0599:;

	i8 v7754 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7754)();

	i8 v7755 = (i8)(intptr_t)c02_s01f3;
	i8 v7756 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7756)(v7755);

	i8 v7757 = (i8)(intptr_t)(ws+4296);
	i2 v7758 = *(i2*)(intptr_t)v7757;
	i8 v7759 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7759)(v7758);

	i8 v7760 = (i8)(intptr_t)c02_s01f4;
	i8 v7761 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7761)(v7760);

	i8 v7762 = (i8)(intptr_t)(ws+2804);
	i8 v7763 = (i8)(intptr_t)(f48_FCBPos);
	i4 v7764;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v7763)(&v7764, v7762);

	i8 v7765 = (i8)(intptr_t)(ws+4324);
	*(i4*)(intptr_t)v7765 = v7764;

	i8 v7766 = (i8)(intptr_t)(ws+4324);
	i4 v7767 = *(i4*)(intptr_t)v7766;
	i8 v7768 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7768)(v7767);

	i8 v7769 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7769)();

c02_059a:;

c02_0596:;

	i8 v7770 = (i8)(intptr_t)(ws+4312);
	i8 v7771 = *(i8*)(intptr_t)v7770;
	i8 v7772 = *(i8*)(intptr_t)v7771;
	i8 v7773 = (i8)(intptr_t)(ws+4312);
	*(i8*)(intptr_t)v7773 = v7772;

	i8 v7774 = (i8)(intptr_t)(ws+4320);
	i2 v7775 = *(i2*)(intptr_t)v7774;
	i2 v7776 = v7775+(-16);
	i8 v7777 = (i8)(intptr_t)(ws+4320);
	*(i2*)(intptr_t)v7777 = v7776;

	goto c02_0590;

c02_0595:;

	i8 v7778 = (i8)(intptr_t)(ws+4312);
	i8 v7779 = *(i8*)(intptr_t)v7778;
	i8 v7780 = v7779+(+8);
	i8 v7781 = (i8)(intptr_t)(ws+4320);
	i2 v7782 = *(i2*)(intptr_t)v7781;
	i1 v7783 = v7782;
	i8 v7784 = v7783;
	i1 v7785 = (i1)+3;
	i8 v7786 = ((i8)v7784)<<v7785;
	i8 v7787 = v7780+v7786;
	i8 v7788 = *(i8*)(intptr_t)v7787;
	i8 v7789 = (i8)(intptr_t)(ws+4304);
	*(i8*)(intptr_t)v7789 = v7788;

endsub:;
	*p7740 = *(i8*)(intptr_t)(ws+4304);
}
	void f116_I_b16(i2* /* b */);
	void f394_AddSubr(i8* /* subr */, i2 /* subrid */);
	void f119_I_countedstring(i8* /* s */);
	void f110_EmitterDeclareSubroutine(i8 /* subr */);

// ReadN workspace at ws+3992 length ws+32
void f395_ReadN(void) {

	i8 v7790 = (i8)(intptr_t)(f116_I_b16);
	i2 v7791;

	((void(*)(i2* /* b */))(intptr_t)v7790)(&v7791);

	i8 v7792 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7792 = v7791;

	i8 v7793 = (i8)(intptr_t)(ws+3992);
	i2 v7794 = *(i2*)(intptr_t)v7793;
	i8 v7795 = (i8)(intptr_t)(ws+3994);
	*(i2*)(intptr_t)v7795 = v7794;

	i8 v7796 = (i8)(intptr_t)(ws+3994);
	i2 v7797 = *(i2*)(intptr_t)v7796;
	i8 v7798 = (i8)(intptr_t)(f394_AddSubr);
	i8 v7799;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7798)(&v7799, v7797);

	i8 v7800 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7800 = v7799;

	i8 v7801 = (i8)(intptr_t)(ws+4000);
	i8 v7802 = *(i8*)(intptr_t)v7801;
	i8 v7803 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7803 = v7802;

	i8 v7804 = (i8)(intptr_t)(f119_I_countedstring);
	i8 v7805;

	((void(*)(i8* /* s */))(intptr_t)v7804)(&v7805);

	i8 v7806 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7806 = v7805;

	i8 v7807 = (i8)(intptr_t)(ws+4016);
	i8 v7808 = *(i8*)(intptr_t)v7807;
	i8 v7809 = (i8)(intptr_t)(ws+4008);
	i8 v7810 = *(i8*)(intptr_t)v7809;
	*(i8*)(intptr_t)v7810 = v7808;

	i8 v7811 = (i8)(intptr_t)(ws+4008);
	i8 v7812 = *(i8*)(intptr_t)v7811;
	i8 v7813 = (i8)(intptr_t)(f110_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v7813)(v7812);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f119_I_countedstring(i8* /* s */);
	void f111_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* subrid */);
	void f34_Free(i8 /* block */);

// ReadX workspace at ws+3992 length ws+40
void f396_ReadX(void) {

	i8 v7814 = (i8)(intptr_t)(f116_I_b16);
	i2 v7815;

	((void(*)(i2* /* b */))(intptr_t)v7814)(&v7815);

	i8 v7816 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7816 = v7815;

	i8 v7817 = (i8)(intptr_t)(ws+3992);
	i2 v7818 = *(i2*)(intptr_t)v7817;
	i8 v7819 = (i8)(intptr_t)(ws+3994);
	*(i2*)(intptr_t)v7819 = v7818;

	i8 v7820 = (i8)(intptr_t)(ws+3994);
	i2 v7821 = *(i2*)(intptr_t)v7820;
	i8 v7822 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7823;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7822)(&v7823, v7821);

	i8 v7824 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7824 = v7823;

	i8 v7825 = (i8)(intptr_t)(ws+4000);
	i8 v7826 = *(i8*)(intptr_t)v7825;
	i8 v7827 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7827 = v7826;

	i8 v7828 = (i8)(intptr_t)(f119_I_countedstring);
	i8 v7829;

	((void(*)(i8* /* s */))(intptr_t)v7828)(&v7829);

	i8 v7830 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7830 = v7829;

	i8 v7831 = (i8)(intptr_t)(ws+4016);
	i8 v7832 = *(i8*)(intptr_t)v7831;
	i8 v7833 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7833 = v7832;

	i8 v7834 = (i8)(intptr_t)(ws+4008);
	i8 v7835 = *(i8*)(intptr_t)v7834;
	i8 v7836 = v7835+(+8);
	i2 v7837 = *(i2*)(intptr_t)v7836;
	i8 v7838 = (i8)(intptr_t)(ws+4024);
	i8 v7839 = *(i8*)(intptr_t)v7838;
	i8 v7840 = (i8)(intptr_t)(f111_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* subrid */))(intptr_t)v7840)(v7839, v7837);

	i8 v7841 = (i8)(intptr_t)(ws+4024);
	i8 v7842 = *(i8*)(intptr_t)v7841;
	i8 v7843 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7843)(v7842);

endsub:;
}
	void f393_I_node(i8* /* rootnode */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f380_Generate(i8 /* rootnode */);

// ReadM workspace at ws+3992 length ws+32
void f397_ReadM(void) {

	i8 v7844 = (i8)(intptr_t)(f393_I_node);
	i8 v7845;

	((void(*)(i8* /* rootnode */))(intptr_t)v7844)(&v7845);

	i8 v7846 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7846 = v7845;

	i8 v7847 = (i8)(intptr_t)(ws+3992);
	i8 v7848 = *(i8*)(intptr_t)v7847;
	i8 v7849 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7849 = v7848;

	i8 v7850 = (i8)(intptr_t)(ws+4000);
	i8 v7851 = *(i8*)(intptr_t)v7850;
	i8 v7852 = v7851+(+256);
	i1 v7853 = *(i1*)(intptr_t)v7852;
	i8 v7854 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v7854 = v7853;

	i8 v7855 = (i8)(intptr_t)(ws+4008);
	i1 v7856 = *(i1*)(intptr_t)v7855;
	i1 v7857 = (i1)+4;
	if (v7856==v7857) goto c02_059e; else goto c02_059f;

c02_059e:;

	i8 v7858 = (i8)(intptr_t)(ws+4000);
	i8 v7859 = *(i8*)(intptr_t)v7858;
	i8 v7860 = *(i8*)(intptr_t)v7859;
	i8 v7861 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7861 = v7860;

	i8 v7862 = (i8)(intptr_t)(ws+40);
	i8 v7863 = *(i8*)(intptr_t)v7862;
	i8 v7864 = (i8)(intptr_t)(ws+4016);
	i8 v7865 = *(i8*)(intptr_t)v7864;
	i8 v7866 = v7865+(+16);
	*(i8*)(intptr_t)v7866 = v7863;

	i8 v7867 = (i8)(intptr_t)(ws+4016);
	i8 v7868 = *(i8*)(intptr_t)v7867;
	i8 v7869 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v7869 = v7868;

	i8 v7870 = (i8)(intptr_t)(ws+40);
	i8 v7871 = *(i8*)(intptr_t)v7870;
	i8 v7872 = *(i8*)(intptr_t)v7871;
	i8 v7873 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7873)(v7872);

	i8 v7874 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v7874)();

c02_059f:;

c02_059b:;

	i8 v7875 = (i8)(intptr_t)(ws+4000);
	i8 v7876 = *(i8*)(intptr_t)v7875;
	i8 v7877 = (i8)(intptr_t)(f380_Generate);

	((void(*)(i8 /* rootnode */))(intptr_t)v7877)(v7876);

	i8 v7878 = (i8)(intptr_t)(ws+4008);
	i1 v7879 = *(i1*)(intptr_t)v7878;
	i1 v7880 = (i1)+5;
	if (v7879==v7880) goto c02_05a3; else goto c02_05a4;

c02_05a3:;

	i8 v7881 = (i8)(intptr_t)(ws+40);
	i8 v7882 = *(i8*)(intptr_t)v7881;
	i8 v7883 = v7882+(+16);
	i8 v7884 = *(i8*)(intptr_t)v7883;
	i8 v7885 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v7885 = v7884;

c02_05a4:;

c02_05a0:;

endsub:;
}
const i1 c02_s01f5[] = { 0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0x20,0x74,0x77,0x69,0x63,0x65,0 };
	void f68_SimpleError(i8 /* s */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);
	void f119_I_countedstring(i8* /* s */);
	void f115_I_b8(i1* /* b */);

// ReadParameters workspace at ws+4024 length ws+81
void f398_ReadParameters(i8 p7886 /* paramp */, i1 p7887 /* count */) {
	*(i1*)(intptr_t)(ws+4024) = p7887; /* count */
	*(i8*)(intptr_t)(ws+4032) = p7886; /* paramp */

	i8 v7888 = (i8)(intptr_t)(ws+4032);
	i8 v7889 = *(i8*)(intptr_t)v7888;
	i8 v7890 = *(i8*)(intptr_t)v7889;
	i8 v7891 = (i8)+0;
	if (v7890==v7891) goto c02_05a9; else goto c02_05a8;

c02_05a8:;

	i8 v7892 = (i8)(intptr_t)c02_s01f5;
	i8 v7893 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v7893)(v7892);

c02_05a9:;

c02_05a5:;

	i8 v7894 = (i8)(intptr_t)(ws+4024);
	i1 v7895 = *(i1*)(intptr_t)v7894;
	i8 v7896 = v7895;
	i1 v7897 = (i1)+3;
	i8 v7898 = ((i8)v7896)<<v7897;
	i8 v7899 = (i8)(intptr_t)(f33_Alloc);
	i8 v7900;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7899)(&v7900, v7898);

	i8 v7901 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v7901 = v7900;

	i8 v7902 = (i8)(intptr_t)(ws+4040);
	i8 v7903 = *(i8*)(intptr_t)v7902;
	i8 v7904 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7904 = v7903;

	i8 v7905 = (i8)(intptr_t)(ws+4048);
	i8 v7906 = *(i8*)(intptr_t)v7905;
	i8 v7907 = (i8)(intptr_t)(ws+4032);
	i8 v7908 = *(i8*)(intptr_t)v7907;
	*(i8*)(intptr_t)v7908 = v7906;

c02_05aa:;

	i8 v7909 = (i8)(intptr_t)(ws+4024);
	i1 v7910 = *(i1*)(intptr_t)v7909;
	i1 v7911 = (i1)+0;
	if (v7910==v7911) goto c02_05af; else goto c02_05ae;

c02_05ae:;

	i8 v7912 = (i8)+24;
	i8 v7913 = (i8)(intptr_t)(f33_Alloc);
	i8 v7914;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7913)(&v7914, v7912);

	i8 v7915 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v7915 = v7914;

	i8 v7916 = (i8)(intptr_t)(ws+4056);
	i8 v7917 = *(i8*)(intptr_t)v7916;
	i8 v7918 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7918 = v7917;

	i8 v7919 = (i8)(intptr_t)(ws+4064);
	i8 v7920 = *(i8*)(intptr_t)v7919;
	i8 v7921 = (i8)(intptr_t)(ws+4048);
	i8 v7922 = *(i8*)(intptr_t)v7921;
	*(i8*)(intptr_t)v7922 = v7920;

	i8 v7923 = (i8)(intptr_t)(ws+4048);
	i8 v7924 = *(i8*)(intptr_t)v7923;
	i8 v7925 = v7924+(+8);
	i8 v7926 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7926 = v7925;

	i8 v7927 = (i8)(intptr_t)(f116_I_b16);
	i2 v7928;

	((void(*)(i2* /* b */))(intptr_t)v7927)(&v7928);

	i8 v7929 = (i8)(intptr_t)(ws+4072);
	*(i2*)(intptr_t)v7929 = v7928;

	i8 v7930 = (i8)(intptr_t)(ws+4072);
	i2 v7931 = *(i2*)(intptr_t)v7930;
	i8 v7932 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7933;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7932)(&v7933, v7931);

	i8 v7934 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v7934 = v7933;

	i8 v7935 = (i8)(intptr_t)(ws+4080);
	i8 v7936 = *(i8*)(intptr_t)v7935;
	i8 v7937 = (i8)(intptr_t)(ws+4064);
	i8 v7938 = *(i8*)(intptr_t)v7937;
	*(i8*)(intptr_t)v7938 = v7936;

	i8 v7939 = (i8)(intptr_t)(f115_I_b8);
	i1 v7940;

	((void(*)(i1* /* b */))(intptr_t)v7939)(&v7940);

	i8 v7941 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v7941 = v7940;

	i8 v7942 = (i8)(intptr_t)(ws+4088);
	i1 v7943 = *(i1*)(intptr_t)v7942;
	i8 v7944 = (i8)(intptr_t)(ws+4064);
	i8 v7945 = *(i8*)(intptr_t)v7944;
	i8 v7946 = v7945+(+10);
	*(i1*)(intptr_t)v7946 = v7943;

	i8 v7947 = (i8)(intptr_t)(f118_I_bsize);
	i2 v7948;

	((void(*)(i2* /* s */))(intptr_t)v7947)(&v7948);

	i8 v7949 = (i8)(intptr_t)(ws+4090);
	*(i2*)(intptr_t)v7949 = v7948;

	i8 v7950 = (i8)(intptr_t)(ws+4090);
	i2 v7951 = *(i2*)(intptr_t)v7950;
	i8 v7952 = (i8)(intptr_t)(ws+4064);
	i8 v7953 = *(i8*)(intptr_t)v7952;
	i8 v7954 = v7953+(+12);
	*(i2*)(intptr_t)v7954 = v7951;

	i8 v7955 = (i8)(intptr_t)(f119_I_countedstring);
	i8 v7956;

	((void(*)(i8* /* s */))(intptr_t)v7955)(&v7956);

	i8 v7957 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v7957 = v7956;

	i8 v7958 = (i8)(intptr_t)(ws+4096);
	i8 v7959 = *(i8*)(intptr_t)v7958;
	i8 v7960 = (i8)(intptr_t)(ws+4064);
	i8 v7961 = *(i8*)(intptr_t)v7960;
	i8 v7962 = v7961+(+16);
	*(i8*)(intptr_t)v7962 = v7959;

	i8 v7963 = (i8)(intptr_t)(f115_I_b8);
	i1 v7964;

	((void(*)(i1* /* b */))(intptr_t)v7963)(&v7964);

	i8 v7965 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v7965 = v7964;

	i8 v7966 = (i8)(intptr_t)(ws+4104);
	i1 v7967 = *(i1*)(intptr_t)v7966;
	i8 v7968 = (i8)(intptr_t)(ws+4064);
	i8 v7969 = *(i8*)(intptr_t)v7968;
	i8 v7970 = v7969+(+14);
	*(i1*)(intptr_t)v7970 = v7967;

	i8 v7971 = (i8)(intptr_t)(ws+4024);
	i1 v7972 = *(i1*)(intptr_t)v7971;
	i1 v7973 = v7972+(-1);
	i8 v7974 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7974 = v7973;

	goto c02_05aa;

c02_05af:;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f398_ReadParameters(i8 /* paramp */, i1 /* count */);

// ReadI workspace at ws+3992 length ws+25
void f399_ReadI(void) {

	i8 v7975 = (i8)(intptr_t)(f116_I_b16);
	i2 v7976;

	((void(*)(i2* /* b */))(intptr_t)v7975)(&v7976);

	i8 v7977 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7977 = v7976;

	i8 v7978 = (i8)(intptr_t)(ws+3992);
	i2 v7979 = *(i2*)(intptr_t)v7978;
	i8 v7980 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7981;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7980)(&v7981, v7979);

	i8 v7982 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7982 = v7981;

	i8 v7983 = (i8)(intptr_t)(ws+4000);
	i8 v7984 = *(i8*)(intptr_t)v7983;
	i8 v7985 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7985 = v7984;

	i8 v7986 = (i8)(intptr_t)(f115_I_b8);
	i1 v7987;

	((void(*)(i1* /* b */))(intptr_t)v7986)(&v7987);

	i8 v7988 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v7988 = v7987;

	i8 v7989 = (i8)(intptr_t)(ws+4016);
	i1 v7990 = *(i1*)(intptr_t)v7989;
	i8 v7991 = (i8)(intptr_t)(ws+4008);
	i8 v7992 = *(i8*)(intptr_t)v7991;
	i8 v7993 = v7992+(+48);
	*(i1*)(intptr_t)v7993 = v7990;

	i8 v7994 = (i8)(intptr_t)(ws+4008);
	i8 v7995 = *(i8*)(intptr_t)v7994;
	i8 v7996 = v7995+(+48);
	i1 v7997 = *(i1*)(intptr_t)v7996;
	i8 v7998 = (i8)(intptr_t)(ws+4008);
	i8 v7999 = *(i8*)(intptr_t)v7998;
	i8 v8000 = v7999+(+32);
	i8 v8001 = (i8)(intptr_t)(f398_ReadParameters);

	((void(*)(i8 /* paramp */, i1 /* count */))(intptr_t)v8001)(v8000, v7997);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f398_ReadParameters(i8 /* paramp */, i1 /* count */);

// ReadO workspace at ws+3992 length ws+25
void f400_ReadO(void) {

	i8 v8002 = (i8)(intptr_t)(f116_I_b16);
	i2 v8003;

	((void(*)(i2* /* b */))(intptr_t)v8002)(&v8003);

	i8 v8004 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v8004 = v8003;

	i8 v8005 = (i8)(intptr_t)(ws+3992);
	i2 v8006 = *(i2*)(intptr_t)v8005;
	i8 v8007 = (i8)(intptr_t)(f65_FindSubr);
	i8 v8008;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v8007)(&v8008, v8006);

	i8 v8009 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v8009 = v8008;

	i8 v8010 = (i8)(intptr_t)(ws+4000);
	i8 v8011 = *(i8*)(intptr_t)v8010;
	i8 v8012 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v8012 = v8011;

	i8 v8013 = (i8)(intptr_t)(f115_I_b8);
	i1 v8014;

	((void(*)(i1* /* b */))(intptr_t)v8013)(&v8014);

	i8 v8015 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v8015 = v8014;

	i8 v8016 = (i8)(intptr_t)(ws+4016);
	i1 v8017 = *(i1*)(intptr_t)v8016;
	i8 v8018 = (i8)(intptr_t)(ws+4008);
	i8 v8019 = *(i8*)(intptr_t)v8018;
	i8 v8020 = v8019+(+49);
	*(i1*)(intptr_t)v8020 = v8017;

	i8 v8021 = (i8)(intptr_t)(ws+4008);
	i8 v8022 = *(i8*)(intptr_t)v8021;
	i8 v8023 = v8022+(+49);
	i1 v8024 = *(i1*)(intptr_t)v8023;
	i8 v8025 = (i8)(intptr_t)(ws+4008);
	i8 v8026 = *(i8*)(intptr_t)v8025;
	i8 v8027 = v8026+(+40);
	i8 v8028 = (i8)(intptr_t)(f398_ReadParameters);

	((void(*)(i8 /* paramp */, i1 /* count */))(intptr_t)v8028)(v8027, v8024);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);
	void f114_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i2 /* subrid */);

// ReadW workspace at ws+3992 length ws+30
void f401_ReadW(void) {

	i8 v8029 = (i8)(intptr_t)(f116_I_b16);
	i2 v8030;

	((void(*)(i2* /* b */))(intptr_t)v8029)(&v8030);

	i8 v8031 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v8031 = v8030;

	i8 v8032 = (i8)(intptr_t)(ws+3992);
	i2 v8033 = *(i2*)(intptr_t)v8032;
	i8 v8034 = (i8)(intptr_t)(f65_FindSubr);
	i8 v8035;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v8034)(&v8035, v8033);

	i8 v8036 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v8036 = v8035;

	i8 v8037 = (i8)(intptr_t)(ws+4000);
	i8 v8038 = *(i8*)(intptr_t)v8037;
	i8 v8039 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v8039 = v8038;

	i8 v8040 = (i8)(intptr_t)(f115_I_b8);
	i1 v8041;

	((void(*)(i1* /* b */))(intptr_t)v8040)(&v8041);

	i8 v8042 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v8042 = v8041;

	i8 v8043 = (i8)(intptr_t)(ws+4016);
	i1 v8044 = *(i1*)(intptr_t)v8043;
	i8 v8045 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v8045 = v8044;

	i8 v8046 = (i8)(intptr_t)(f118_I_bsize);
	i2 v8047;

	((void(*)(i2* /* s */))(intptr_t)v8046)(&v8047);

	i8 v8048 = (i8)(intptr_t)(ws+4018);
	*(i2*)(intptr_t)v8048 = v8047;

	i8 v8049 = (i8)(intptr_t)(ws+4018);
	i2 v8050 = *(i2*)(intptr_t)v8049;
	i8 v8051 = (i8)(intptr_t)(ws+4020);
	*(i2*)(intptr_t)v8051 = v8050;

	i8 v8052 = (i8)(intptr_t)(ws+4008);
	i8 v8053 = *(i8*)(intptr_t)v8052;
	i8 v8054 = v8053+(+8);
	i2 v8055 = *(i2*)(intptr_t)v8054;
	i8 v8056 = (i8)(intptr_t)(ws+4017);
	i1 v8057 = *(i1*)(intptr_t)v8056;
	i8 v8058 = (i8)(intptr_t)(ws+4020);
	i2 v8059 = *(i2*)(intptr_t)v8058;
	i8 v8060 = (i8)(intptr_t)(f114_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i2 /* subrid */))(intptr_t)v8060)(v8059, v8057, v8055);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f112_EmitterReferenceSubroutineById(i2 /* used */, i2 /* user */);

// ReadR workspace at ws+3992 length ws+48
void f402_ReadR(void) {

	i8 v8061 = (i8)(intptr_t)(f116_I_b16);
	i2 v8062;

	((void(*)(i2* /* b */))(intptr_t)v8061)(&v8062);

	i8 v8063 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v8063 = v8062;

	i8 v8064 = (i8)(intptr_t)(ws+3992);
	i2 v8065 = *(i2*)(intptr_t)v8064;
	i8 v8066 = (i8)(intptr_t)(f65_FindSubr);
	i8 v8067;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v8066)(&v8067, v8065);

	i8 v8068 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v8068 = v8067;

	i8 v8069 = (i8)(intptr_t)(ws+4000);
	i8 v8070 = *(i8*)(intptr_t)v8069;
	i8 v8071 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v8071 = v8070;

	i8 v8072 = (i8)(intptr_t)(f116_I_b16);
	i2 v8073;

	((void(*)(i2* /* b */))(intptr_t)v8072)(&v8073);

	i8 v8074 = (i8)(intptr_t)(ws+4016);
	*(i2*)(intptr_t)v8074 = v8073;

	i8 v8075 = (i8)(intptr_t)(ws+4016);
	i2 v8076 = *(i2*)(intptr_t)v8075;
	i8 v8077 = (i8)(intptr_t)(f65_FindSubr);
	i8 v8078;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v8077)(&v8078, v8076);

	i8 v8079 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v8079 = v8078;

	i8 v8080 = (i8)(intptr_t)(ws+4024);
	i8 v8081 = *(i8*)(intptr_t)v8080;
	i8 v8082 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v8082 = v8081;

	i8 v8083 = (i8)(intptr_t)(ws+4008);
	i8 v8084 = *(i8*)(intptr_t)v8083;
	i8 v8085 = v8084+(+8);
	i2 v8086 = *(i2*)(intptr_t)v8085;
	i8 v8087 = (i8)(intptr_t)(ws+4032);
	i8 v8088 = *(i8*)(intptr_t)v8087;
	i8 v8089 = v8088+(+8);
	i2 v8090 = *(i2*)(intptr_t)v8089;
	i8 v8091 = (i8)(intptr_t)(f112_EmitterReferenceSubroutineById);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v8091)(v8090, v8086);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);

// ReadF workspace at ws+3992 length ws+25
void f403_ReadF(void) {

	i8 v8092 = (i8)(intptr_t)(f116_I_b16);
	i2 v8093;

	((void(*)(i2* /* b */))(intptr_t)v8092)(&v8093);

	i8 v8094 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v8094 = v8093;

	i8 v8095 = (i8)(intptr_t)(ws+3992);
	i2 v8096 = *(i2*)(intptr_t)v8095;
	i8 v8097 = (i8)(intptr_t)(f65_FindSubr);
	i8 v8098;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v8097)(&v8098, v8096);

	i8 v8099 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v8099 = v8098;

	i8 v8100 = (i8)(intptr_t)(ws+4000);
	i8 v8101 = *(i8*)(intptr_t)v8100;
	i8 v8102 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v8102 = v8101;

	i8 v8103 = (i8)(intptr_t)(f115_I_b8);
	i1 v8104;

	((void(*)(i1* /* b */))(intptr_t)v8103)(&v8104);

	i8 v8105 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v8105 = v8104;

	i8 v8106 = (i8)(intptr_t)(ws+4016);
	i1 v8107 = *(i1*)(intptr_t)v8106;
	i8 v8108 = (i8)(intptr_t)(ws+4008);
	i8 v8109 = *(i8*)(intptr_t)v8108;
	i8 v8110 = v8109+(+50);
	*(i1*)(intptr_t)v8110 = v8107;

endsub:;
}
	void f23_MemZero(i8 /* size */, i8 /* ptr */);
	void f115_I_b8(i1* /* b */);
	void f395_ReadN(void);
	void f396_ReadX(void);
	void f397_ReadM(void);
	void f399_ReadI(void);
	void f400_ReadO(void);
	void f401_ReadW(void);
	void f402_ReadR(void);
	void f403_ReadF(void);
	void f66_StartError(void);
const i1 c02_s01f6[] = { 0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f19_print_hex_i8(i1 /* value */);
const i1 c02_s01f7[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f48_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f21_print_hex_i32(i4 /* value */);
	void f67_EndError(void);

// ProcessFile workspace at ws+3984 length ws+8
void f404_ProcessFile(void) {

	i8 v8111 = (i8)(intptr_t)(ws+3848);
	i8 v8112 = (i8)+136;
	i8 v8113 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v8113)(v8112, v8111);

c02_05b0:;

	i8 v8114 = (i8)(intptr_t)(f115_I_b8);
	i1 v8115;

	((void(*)(i1* /* b */))(intptr_t)v8114)(&v8115);

	i8 v8116 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v8116 = v8115;

	i8 v8117 = (i8)(intptr_t)(ws+3984);
	i1 v8118 = *(i1*)(intptr_t)v8117;
	i8 v8119 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v8119 = v8118;

	i8 v8120 = (i8)(intptr_t)(ws+3985);
	i1 v8121 = *(i1*)(intptr_t)v8120;

	if (v8121 != +69) goto c02_05b3;

	goto endsub;

c02_05b3:;

	if (v8121 != +78) goto c02_05b4;

	i8 v8122 = (i8)(intptr_t)(f395_ReadN);

	((void(*)(void))(intptr_t)v8122)();

	goto c02_05b2;

c02_05b4:;

	if (v8121 != +88) goto c02_05b5;

	i8 v8123 = (i8)(intptr_t)(f396_ReadX);

	((void(*)(void))(intptr_t)v8123)();

	goto c02_05b2;

c02_05b5:;

	if (v8121 != +77) goto c02_05b6;

	i8 v8124 = (i8)(intptr_t)(f397_ReadM);

	((void(*)(void))(intptr_t)v8124)();

	goto c02_05b2;

c02_05b6:;

	if (v8121 != +73) goto c02_05b7;

	i8 v8125 = (i8)(intptr_t)(f399_ReadI);

	((void(*)(void))(intptr_t)v8125)();

	goto c02_05b2;

c02_05b7:;

	if (v8121 != +79) goto c02_05b8;

	i8 v8126 = (i8)(intptr_t)(f400_ReadO);

	((void(*)(void))(intptr_t)v8126)();

	goto c02_05b2;

c02_05b8:;

	if (v8121 != +87) goto c02_05b9;

	i8 v8127 = (i8)(intptr_t)(f401_ReadW);

	((void(*)(void))(intptr_t)v8127)();

	goto c02_05b2;

c02_05b9:;

	if (v8121 != +82) goto c02_05ba;

	i8 v8128 = (i8)(intptr_t)(f402_ReadR);

	((void(*)(void))(intptr_t)v8128)();

	goto c02_05b2;

c02_05ba:;

	if (v8121 != +70) goto c02_05bb;

	i8 v8129 = (i8)(intptr_t)(f403_ReadF);

	((void(*)(void))(intptr_t)v8129)();

	goto c02_05b2;

c02_05bb:;

	i8 v8130 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v8130)();

	i8 v8131 = (i8)(intptr_t)c02_s01f6;
	i8 v8132 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8132)(v8131);

	i8 v8133 = (i8)(intptr_t)(ws+3985);
	i1 v8134 = *(i1*)(intptr_t)v8133;
	i8 v8135 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v8135)(v8134);

	i8 v8136 = (i8)(intptr_t)c02_s01f7;
	i8 v8137 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8137)(v8136);

	i8 v8138 = (i8)(intptr_t)(ws+2804);
	i8 v8139 = (i8)(intptr_t)(f48_FCBPos);
	i4 v8140;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v8139)(&v8140, v8138);

	i8 v8141 = (i8)(intptr_t)(ws+3988);
	*(i4*)(intptr_t)v8141 = v8140;

	i8 v8142 = (i8)(intptr_t)(ws+3988);
	i4 v8143 = *(i4*)(intptr_t)v8142;
	i8 v8144 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8144)(v8143);

	i8 v8145 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v8145)();

c02_05b2:;


	goto c02_05b0;

c02_05b1:;

endsub:;
}
	void f38_GetFreeMemory(i8* /* i */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s01f8[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3984 length ws+8
void f405_PrintFreeMemory(void) {

	i8 v8146 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v8147;

	((void(*)(i8* /* i */))(intptr_t)v8146)(&v8147);

	i8 v8148 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v8148 = v8147;

	i8 v8149 = (i8)(intptr_t)(ws+3984);
	i8 v8150 = *(i8*)(intptr_t)v8149;
	i1 v8151 = (i1)+10;
	i8 v8152 = ((i8)v8150)>>v8151;
	i2 v8153 = v8152;
	i8 v8154 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v8154)(v8153);

	i8 v8155 = (i8)(intptr_t)c02_s01f8;
	i8 v8156 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8156)(v8155);

endsub:;
}
const i1 c02_s01f9[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x62,0x65,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+4008 length ws+0
void f406_SyntaxError(void) {

	i8 v8157 = (i8)(intptr_t)c02_s01f9;
	i8 v8158 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8158)(v8157);

	i8 v8159 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v8159)();

endsub:;
}
	void f24_ArgvInit(void);
	void f25_ArgvNext(i8* /* arg */);
	void f25_ArgvNext(i8* /* arg */);
	void f25_ArgvNext(i8* /* arg */);
	void f406_SyntaxError(void);

// ParseArguments workspace at ws+3984 length ws+24
void f407_ParseArguments(void) {

	i8 v8160 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v8160)();

	i8 v8161 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v8162;

	((void(*)(i8* /* arg */))(intptr_t)v8161)(&v8162);

	i8 v8163 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v8163 = v8162;

	i8 v8164 = (i8)(intptr_t)(ws+3984);
	i8 v8165 = *(i8*)(intptr_t)v8164;
	i8 v8166 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v8166 = v8165;

	i8 v8167 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v8168;

	((void(*)(i8* /* arg */))(intptr_t)v8167)(&v8168);

	i8 v8169 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v8169 = v8168;

	i8 v8170 = (i8)(intptr_t)(ws+3992);
	i8 v8171 = *(i8*)(intptr_t)v8170;
	i8 v8172 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v8172 = v8171;

	i8 v8173 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v8174;

	((void(*)(i8* /* arg */))(intptr_t)v8173)(&v8174);

	i8 v8175 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v8175 = v8174;

	i8 v8176 = (i8)(intptr_t)(ws+4000);
	i8 v8177 = *(i8*)(intptr_t)v8176;
	i8 v8178 = (i8)+0;
	if (v8177==v8178) goto c02_05c6; else goto c02_05c3;

c02_05c6:;

	i8 v8179 = (i8)(intptr_t)(ws+24);
	i8 v8180 = *(i8*)(intptr_t)v8179;
	i8 v8181 = (i8)+0;
	if (v8180==v8181) goto c02_05c3; else goto c02_05c5;

c02_05c5:;

	i8 v8182 = (i8)(intptr_t)(ws+32);
	i8 v8183 = *(i8*)(intptr_t)v8182;
	i8 v8184 = (i8)+0;
	if (v8183==v8184) goto c02_05c3; else goto c02_05c4;

c02_05c3:;

	i8 v8185 = (i8)(intptr_t)(f406_SyntaxError);

	((void(*)(void))(intptr_t)v8185)();

c02_05c4:;

c02_05bc:;

endsub:;
}
const i1 c02_s01fa[] = { 0x43,0x4f,0x57,0x42,0x45,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f405_PrintFreeMemory(void);
	void f407_ParseArguments(void);
	void f120_InputterOpenfile(i8 /* filename */);
	void f108_EmitterOpenfile(i8 /* filename */);
	void f404_ProcessFile(void);
	void f109_EmitterClosefile(void);
	void f121_InputterClosefile(void);
const i1 c02_s01fb[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f405_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3984
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 



























































	i8 v1054 = (i8)+0;
	i8 v1055 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1055 = v1054;

	i8 v1056 = (i8)+0;
	i8 v1057 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1057 = v1056;

	i2 v1058 = (i2)+0;
	i8 v1059 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1059 = v1058;

	i2 v1060 = (i2)+0;
	i8 v1061 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v1061 = v1060;


	i8 v1063 = (i8)(intptr_t)(ws+56);
	i8 v1064 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v1064 = v1063;












	i8 v1189 = (i8)+0;
	i8 v1190 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1190 = v1189;




	i2 v1244 = (i2)+0;
	i8 v1245 = (i8)(intptr_t)(ws+2774);
	*(i2*)(intptr_t)v1245 = v1244;

	i8 v1246 = (i8)+0;
	i8 v1247 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1247 = v1246;

	i1 v1248 = (i1)+0;
	i8 v1249 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1249 = v1248;





































































	i8 v2471 = (i8)(intptr_t)(ws+3456);
	i8 v2472 = (i8)+116;
	i8 v2473 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v2473)(v2472, v2471);

	i8 v2474 = (i8)(intptr_t)(ws+3576);
	i8 v2475 = (i8)+116;
	i8 v2476 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v2476)(v2475, v2474);

	i1 v2477 = (i1)+0;
	i8 v2478 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v2478 = v2477;



	i8 v2495 = (i8)+0;
	i8 v2496 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2496 = v2495;









	i2 v2658 = (i2)+1;
	i8 v2659 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v2659 = v2658;






























	i2 v3639 = (i2)+0;
	i8 v3640 = (i8)(intptr_t)(ws+3836);
	*(i2*)(intptr_t)v3640 = v3639;


	i1 v3695 = (i1)+0;
	i8 v3696 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3696 = v3695;















































	i8 v8186 = (i8)(intptr_t)c02_s01fa;
	i8 v8187 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8187)(v8186);

	i8 v8188 = (i8)(intptr_t)(f405_PrintFreeMemory);

	((void(*)(void))(intptr_t)v8188)();

	i8 v8189 = (i8)(intptr_t)(f407_ParseArguments);

	((void(*)(void))(intptr_t)v8189)();

	i8 v8190 = (i8)(intptr_t)(ws+24);
	i8 v8191 = *(i8*)(intptr_t)v8190;
	i8 v8192 = (i8)(intptr_t)(f120_InputterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v8192)(v8191);

	i8 v8193 = (i8)(intptr_t)(ws+32);
	i8 v8194 = *(i8*)(intptr_t)v8193;
	i8 v8195 = (i8)(intptr_t)(f108_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v8195)(v8194);

	i8 v8196 = (i8)(intptr_t)(f404_ProcessFile);

	((void(*)(void))(intptr_t)v8196)();

	i8 v8197 = (i8)(intptr_t)(f109_EmitterClosefile);

	((void(*)(void))(intptr_t)v8197)();

	i8 v8198 = (i8)(intptr_t)(f121_InputterClosefile);

	((void(*)(void))(intptr_t)v8198)();

	i8 v8199 = (i8)(intptr_t)c02_s01fb;
	i8 v8200 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8200)(v8199);

	i8 v8201 = (i8)(intptr_t)(f405_PrintFreeMemory);

	((void(*)(void))(intptr_t)v8201)();

endsub:;
}
void cmain(void) {
	f3___main();
}
