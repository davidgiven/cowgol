#include "cowgol.h"
static i8 workspace[0x022b];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+4272 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+4200 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+4200) = p10; /*buf */
	*(i1*)(intptr_t)(ws+4208) = p9; /*byte */
	*(i8*)(intptr_t)(ws+4216) = p8; /*len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4200) 
,  
*(i1*)(intptr_t)(ws+4208) 
,  
*(i8*)(intptr_t)(ws+4216) 
); 



endsub:;
}

// print_char workspace at ws+4288 length ws+1
void f9_print_char(i1 p12 /* c */) {
	*(i1*)(intptr_t)(ws+4288) = p12; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+4288) 
); 



endsub:;
}
	void f9_print_char(i1 /* c */);

// print workspace at ws+4272 length ws+9
void f12_print(i8 p21 /* ptr */) {
	*(i8*)(intptr_t)(ws+4272) = p21; /*ptr */

c02_0001:;

	i8 v22 = (i8)(intptr_t)(ws+4272);
	i8 v23 = *(i8*)(intptr_t)v22;
	i1 v24 = *(i1*)(intptr_t)v23;
	i8 v25 = (i8)(intptr_t)(ws+4280);
	*(i1*)(intptr_t)v25 = v24;

	i8 v26 = (i8)(intptr_t)(ws+4280);
	i1 v27 = *(i1*)(intptr_t)v26;
	i1 v28 = (i1)+0;
	if (v27==v28) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v29 = (i8)(intptr_t)(ws+4280);
	i1 v30 = *(i1*)(intptr_t)v29;
	i8 v31 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v31)(v30);

	i8 v32 = (i8)(intptr_t)(ws+4272);
	i8 v33 = *(i8*)(intptr_t)v32;
	i8 v34 = v33+(+1);
	i8 v35 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v35 = v34;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_nl workspace at ws+4272 length ws+0
void f13_print_nl(void) {

	i1 v36 = (i1)+10;
	i8 v37 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v37)(v36);

endsub:;
}

// UIToA workspace at ws+4312 length ws+49
void f14_UIToA(i8* p38 /* ptr */, i8 p39 /* buffer */, i1 p40 /* base */, i4 p41 /* value */) {
	*(i4*)(intptr_t)(ws+4312) = p41; /*value */
	*(i1*)(intptr_t)(ws+4316) = p40; /*base */
	*(i8*)(intptr_t)(ws+4320) = p39; /*buffer */

	i8 v42 = (i8)(intptr_t)(ws+4320);
	i8 v43 = *(i8*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+4328);
	*(i8*)(intptr_t)v44 = v43;

c02_0008:;

	i8 v45 = (i8)(intptr_t)(ws+4312);
	i4 v46 = *(i4*)(intptr_t)v45;
	i8 v47 = (i8)(intptr_t)(ws+4316);
	i1 v48 = *(i1*)(intptr_t)v47;
	i4 v49 = v48;
	i4 v50 = v46%v49;
	i8 v51 = (i8)(intptr_t)(ws+4336);
	*(i4*)(intptr_t)v51 = v50;

	i8 v52 = (i8)(intptr_t)(ws+4312);
	i4 v53 = *(i4*)(intptr_t)v52;
	i8 v54 = (i8)(intptr_t)(ws+4316);
	i1 v55 = *(i1*)(intptr_t)v54;
	i4 v56 = v55;
	i4 v57 = v53/v56;
	i8 v58 = (i8)(intptr_t)(ws+4312);
	*(i4*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+4336);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+10;
	if (v60<v61) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v62 = (i8)(intptr_t)(ws+4336);
	i4 v63 = *(i4*)(intptr_t)v62;
	i4 v64 = v63+(+48);
	i8 v65 = (i8)(intptr_t)(ws+4336);
	*(i4*)(intptr_t)v65 = v64;

	goto c02_000a;

c02_000e:;

	i8 v66 = (i8)(intptr_t)(ws+4336);
	i4 v67 = *(i4*)(intptr_t)v66;
	i4 v68 = v67+(+87);
	i8 v69 = (i8)(intptr_t)(ws+4336);
	*(i4*)(intptr_t)v69 = v68;

c02_000a:;

	i8 v70 = (i8)(intptr_t)(ws+4336);
	i4 v71 = *(i4*)(intptr_t)v70;
	i1 v72 = v71;
	i8 v73 = (i8)(intptr_t)(ws+4328);
	i8 v74 = *(i8*)(intptr_t)v73;
	*(i1*)(intptr_t)v74 = v72;

	i8 v75 = (i8)(intptr_t)(ws+4328);
	i8 v76 = *(i8*)(intptr_t)v75;
	i8 v77 = v76+(+1);
	i8 v78 = (i8)(intptr_t)(ws+4328);
	*(i8*)(intptr_t)v78 = v77;

	i8 v79 = (i8)(intptr_t)(ws+4312);
	i4 v80 = *(i4*)(intptr_t)v79;
	i4 v81 = (i4)+0;
	if (v80==v81) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v82 = (i8)(intptr_t)(ws+4320);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+4344);
	*(i8*)(intptr_t)v84 = v83;

	i8 v85 = (i8)(intptr_t)(ws+4328);
	i8 v86 = *(i8*)(intptr_t)v85;
	i8 v87 = v86+(-1);
	i8 v88 = (i8)(intptr_t)(ws+4352);
	*(i8*)(intptr_t)v88 = v87;

c02_0016:;

	i8 v89 = (i8)(intptr_t)(ws+4344);
	i8 v90 = *(i8*)(intptr_t)v89;
	i8 v91 = (i8)(intptr_t)(ws+4352);
	i8 v92 = *(i8*)(intptr_t)v91;
	if (v90<v92) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v93 = (i8)(intptr_t)(ws+4344);
	i8 v94 = *(i8*)(intptr_t)v93;
	i1 v95 = *(i1*)(intptr_t)v94;
	i8 v96 = (i8)(intptr_t)(ws+4360);
	*(i1*)(intptr_t)v96 = v95;

	i8 v97 = (i8)(intptr_t)(ws+4352);
	i8 v98 = *(i8*)(intptr_t)v97;
	i1 v99 = *(i1*)(intptr_t)v98;
	i8 v100 = (i8)(intptr_t)(ws+4344);
	i8 v101 = *(i8*)(intptr_t)v100;
	*(i1*)(intptr_t)v101 = v99;

	i8 v102 = (i8)(intptr_t)(ws+4360);
	i1 v103 = *(i1*)(intptr_t)v102;
	i8 v104 = (i8)(intptr_t)(ws+4352);
	i8 v105 = *(i8*)(intptr_t)v104;
	*(i1*)(intptr_t)v105 = v103;

	i8 v106 = (i8)(intptr_t)(ws+4344);
	i8 v107 = *(i8*)(intptr_t)v106;
	i8 v108 = v107+(+1);
	i8 v109 = (i8)(intptr_t)(ws+4344);
	*(i8*)(intptr_t)v109 = v108;

	i8 v110 = (i8)(intptr_t)(ws+4352);
	i8 v111 = *(i8*)(intptr_t)v110;
	i8 v112 = v111+(-1);
	i8 v113 = (i8)(intptr_t)(ws+4352);
	*(i8*)(intptr_t)v113 = v112;

	goto c02_0016;

c02_0019:;

	i1 v114 = (i1)+0;
	i8 v115 = (i8)(intptr_t)(ws+4328);
	i8 v116 = *(i8*)(intptr_t)v115;
	*(i1*)(intptr_t)v116 = v114;

endsub:;
	*p38 = *(i8*)(intptr_t)(ws+4328);
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f12_print(i8 /* ptr */);

// print_i32 workspace at ws+4208 length ws+24
void f16_print_i32(i4 p144 /* value */) {
	*(i4*)(intptr_t)(ws+4208) = p144; /*value */

	i8 v145 = (i8)(intptr_t)(ws+4208);
	i4 v146 = *(i4*)(intptr_t)v145;
	i1 v147 = (i1)+10;
	i8 v148 = (i8)(intptr_t)(ws+4212);
	i8 v149 = (i8)(intptr_t)(f14_UIToA);
	i8 v150;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v149)(&v150, v148, v147, v146);
	i8 v151 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v151 = v150;

	i8 v152 = (i8)(intptr_t)(ws+4212);
	i8 v153 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v153)(v152);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i16 workspace at ws+3984 length ws+2
void f17_print_i16(i2 p154 /* value */) {
	*(i2*)(intptr_t)(ws+3984) = p154; /*value */

	i8 v155 = (i8)(intptr_t)(ws+3984);
	i2 v156 = *(i2*)(intptr_t)v155;
	i4 v157 = v156;
	i8 v158 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v158)(v157);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i8 workspace at ws+4200 length ws+1
void f18_print_i8(i1 p159 /* value */) {
	*(i1*)(intptr_t)(ws+4200) = p159; /*value */

	i8 v160 = (i8)(intptr_t)(ws+4200);
	i1 v161 = *(i1*)(intptr_t)v160;
	i4 v162 = v161;
	i8 v163 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v163)(v162);

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+4280 length ws+3
void f19_print_hex_i8(i1 p164 /* value */) {
	*(i1*)(intptr_t)(ws+4280) = p164; /*value */

	i1 v165 = (i1)+2;
	i8 v166 = (i8)(intptr_t)(ws+4281);
	*(i1*)(intptr_t)v166 = v165;

c02_001f:;

	i8 v167 = (i8)(intptr_t)(ws+4280);
	i1 v168 = *(i1*)(intptr_t)v167;
	i1 v169 = (i1)+4;
	i1 v170 = ((i1)v168)>>v169;
	i8 v171 = (i8)(intptr_t)(ws+4282);
	*(i1*)(intptr_t)v171 = v170;

	i8 v172 = (i8)(intptr_t)(ws+4282);
	i1 v173 = *(i1*)(intptr_t)v172;
	i1 v174 = (i1)+10;
	if (v173<v174) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v175 = (i8)(intptr_t)(ws+4282);
	i1 v176 = *(i1*)(intptr_t)v175;
	i1 v177 = v176+(+48);
	i8 v178 = (i8)(intptr_t)(ws+4282);
	*(i1*)(intptr_t)v178 = v177;

	goto c02_0021;

c02_0025:;

	i8 v179 = (i8)(intptr_t)(ws+4282);
	i1 v180 = *(i1*)(intptr_t)v179;
	i1 v181 = v180+(+87);
	i8 v182 = (i8)(intptr_t)(ws+4282);
	*(i1*)(intptr_t)v182 = v181;

c02_0021:;

	i8 v183 = (i8)(intptr_t)(ws+4282);
	i1 v184 = *(i1*)(intptr_t)v183;
	i8 v185 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v185)(v184);

	i8 v186 = (i8)(intptr_t)(ws+4280);
	i1 v187 = *(i1*)(intptr_t)v186;
	i1 v188 = (i1)+4;
	i1 v189 = ((i1)v187)<<v188;
	i8 v190 = (i8)(intptr_t)(ws+4280);
	*(i1*)(intptr_t)v190 = v189;

	i8 v191 = (i8)(intptr_t)(ws+4281);
	i1 v192 = *(i1*)(intptr_t)v191;
	i1 v193 = v192+(-1);
	i8 v194 = (i8)(intptr_t)(ws+4281);
	*(i1*)(intptr_t)v194 = v193;

	i8 v195 = (i8)(intptr_t)(ws+4281);
	i1 v196 = *(i1*)(intptr_t)v195;
	i1 v197 = (i1)+0;
	if (v196==v197) goto c02_0029; else goto c02_002a;

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

// print_hex_i16 workspace at ws+4272 length ws+2
void f20_print_hex_i16(i2 p198 /* value */) {
	*(i2*)(intptr_t)(ws+4272) = p198; /*value */

	i8 v199 = (i8)(intptr_t)(ws+4272);
	i2 v200 = *(i2*)(intptr_t)v199;
	i1 v201 = (i1)+8;
	i2 v202 = ((i2)v200)>>v201;
	i1 v203 = v202;
	i8 v204 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v204)(v203);

	i8 v205 = (i8)(intptr_t)(ws+4272);
	i2 v206 = *(i2*)(intptr_t)v205;
	i1 v207 = v206;
	i8 v208 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v208)(v207);

endsub:;
}
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);

// print_hex_i32 workspace at ws+4272 length ws+4
void f21_print_hex_i32(i4 p209 /* value */) {
	*(i4*)(intptr_t)(ws+4272) = p209; /*value */

	i8 v210 = (i8)(intptr_t)(ws+4272);
	i4 v211 = *(i4*)(intptr_t)v210;
	i1 v212 = (i1)+24;
	i4 v213 = ((i4)v211)>>v212;
	i1 v214 = v213;
	i8 v215 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v215)(v214);

	i8 v216 = (i8)(intptr_t)(ws+4272);
	i4 v217 = *(i4*)(intptr_t)v216;
	i1 v218 = (i1)+16;
	i4 v219 = ((i4)v217)>>v218;
	i1 v220 = v219;
	i8 v221 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v221)(v220);

	i8 v222 = (i8)(intptr_t)(ws+4272);
	i4 v223 = *(i4*)(intptr_t)v222;
	i1 v224 = (i1)+8;
	i4 v225 = ((i4)v223)>>v224;
	i1 v226 = v225;
	i8 v227 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v227)(v226);

	i8 v228 = (i8)(intptr_t)(ws+4272);
	i4 v229 = *(i4*)(intptr_t)v228;
	i1 v230 = v229;
	i8 v231 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v231)(v230);

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// MemZero workspace at ws+4152 length ws+16
void f23_MemZero(i8 p336 /* size */, i8 p337 /* ptr */) {
	*(i8*)(intptr_t)(ws+4152) = p337; /*ptr */
	*(i8*)(intptr_t)(ws+4160) = p336; /*size */

	i8 v338 = (i8)(intptr_t)(ws+4152);
	i8 v339 = *(i8*)(intptr_t)v338;
	i1 v340 = (i1)+0;
	i8 v341 = (i8)(intptr_t)(ws+4160);
	i8 v342 = *(i8*)(intptr_t)v341;
	i8 v343 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v343)(v342, v340, v339);

endsub:;
}

// ArgvInit workspace at ws+3984 length ws+0
void f24_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v344 = (i8)(intptr_t)(ws+16);
	i8 v345 = *(i8*)(intptr_t)v344;
	i8 v346 = v345+(+8);
	i8 v347 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v347 = v346;

endsub:;
}

// ArgvNext workspace at ws+3984 length ws+8
void f25_ArgvNext(i8* p348 /* arg */) {

	i8 v349 = (i8)(intptr_t)(ws+16);
	i8 v350 = *(i8*)(intptr_t)v349;
	i8 v351 = (i8)+0;
	if (v350==v351) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v352 = (i8)+0;
	i8 v353 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v353 = v352;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v354 = (i8)(intptr_t)(ws+16);
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = *(i8*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v357 = v356;

	i8 v358 = (i8)(intptr_t)(ws+3984);
	i8 v359 = *(i8*)(intptr_t)v358;
	i8 v360 = (i8)+0;
	if (v359==v360) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v361 = (i8)+0;
	i8 v362 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v362 = v361;

	goto c02_0054;

c02_0058:;

	i8 v363 = (i8)(intptr_t)(ws+16);
	i8 v364 = *(i8*)(intptr_t)v363;
	i8 v365 = v364+(+8);
	i8 v366 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v366 = v365;

c02_0054:;

endsub:;
	*p348 = *(i8*)(intptr_t)(ws+3984);
}

// StrLen workspace at ws+4040 length ws+25
void f29_StrLen(i8* p438 /* size */, i8 p439 /* s */) {
	*(i8*)(intptr_t)(ws+4040) = p439; /*s */

	i8 v440 = (i8)(intptr_t)(ws+4040);
	i8 v441 = *(i8*)(intptr_t)v440;
	i8 v442 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v442 = v441;

c02_0075:;

	i8 v443 = (i8)(intptr_t)(ws+4056);
	i8 v444 = *(i8*)(intptr_t)v443;
	i1 v445 = *(i1*)(intptr_t)v444;
	i8 v446 = (i8)(intptr_t)(ws+4064);
	*(i1*)(intptr_t)v446 = v445;

	i8 v447 = (i8)(intptr_t)(ws+4064);
	i1 v448 = *(i1*)(intptr_t)v447;
	i1 v449 = (i1)+0;
	if (v448==v449) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v450 = (i8)(intptr_t)(ws+4056);
	i8 v451 = *(i8*)(intptr_t)v450;
	i8 v452 = v451+(+1);
	i8 v453 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v453 = v452;

	goto c02_0075;

c02_0076:;

	i8 v454 = (i8)(intptr_t)(ws+4056);
	i8 v455 = *(i8*)(intptr_t)v454;
	i8 v456 = (i8)(intptr_t)(ws+4040);
	i8 v457 = *(i8*)(intptr_t)v456;
	i8 v458 = v455-v457;
	i8 v459 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v459 = v458;

endsub:;
	*p438 = *(i8*)(intptr_t)(ws+4048);
}

// MemCopy workspace at ws+4240 length ws+24
void f31_MemCopy(i8 p481 /* dest */, i8 p482 /* size */, i8 p483 /* src */) {
	*(i8*)(intptr_t)(ws+4240) = p483; /*src */
	*(i8*)(intptr_t)(ws+4248) = p482; /*size */
	*(i8*)(intptr_t)(ws+4256) = p481; /*dest */

c02_0085:;

	i8 v484 = (i8)(intptr_t)(ws+4248);
	i8 v485 = *(i8*)(intptr_t)v484;
	i8 v486 = (i8)+0;
	if (v485==v486) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v487 = (i8)(intptr_t)(ws+4240);
	i8 v488 = *(i8*)(intptr_t)v487;
	i1 v489 = *(i1*)(intptr_t)v488;
	i8 v490 = (i8)(intptr_t)(ws+4256);
	i8 v491 = *(i8*)(intptr_t)v490;
	*(i1*)(intptr_t)v491 = v489;

	i8 v492 = (i8)(intptr_t)(ws+4256);
	i8 v493 = *(i8*)(intptr_t)v492;
	i8 v494 = v493+(+1);
	i8 v495 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v495 = v494;

	i8 v496 = (i8)(intptr_t)(ws+4240);
	i8 v497 = *(i8*)(intptr_t)v496;
	i8 v498 = v497+(+1);
	i8 v499 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v499 = v498;

	i8 v500 = (i8)(intptr_t)(ws+4248);
	i8 v501 = *(i8*)(intptr_t)v500;
	i8 v502 = v501+(-1);
	i8 v503 = (i8)(intptr_t)(ws+4248);
	*(i8*)(intptr_t)v503 = v502;

	goto c02_0085;

c02_0088:;

endsub:;
}

// RawAlloc workspace at ws+4216 length ws+16
void f32_RawAlloc(i8* p504 /* block */, i8 p505 /* length */) {
	*(i8*)(intptr_t)(ws+4216) = p505; /*length */


	
*(i8*)(intptr_t)(ws+4224) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+4216) 
); 



endsub:;
	*p504 = *(i8*)(intptr_t)(ws+4224);
}
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// Alloc workspace at ws+4096 length ws+16
void f33_Alloc(i8* p506 /* block */, i8 p507 /* length */) {
	*(i8*)(intptr_t)(ws+4096) = p507; /*length */

	i8 v508 = (i8)(intptr_t)(ws+4096);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v511;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v510)(&v511, v509);
	i8 v512 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v512 = v511;

	i8 v513 = (i8)(intptr_t)(ws+4104);
	i8 v514 = *(i8*)(intptr_t)v513;
	i8 v515 = (i8)+0;
	if (v514==v515) goto c02_008c; else goto c02_008d;

c02_008c:;

	i8 v516 = (i8)(intptr_t)c02_s0000;
	i8 v517 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v517)(v516);

	i8 v518 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v518)();

c02_008d:;

c02_0089:;

endsub:;
	*p506 = *(i8*)(intptr_t)(ws+4104);
}

// Free workspace at ws+4224 length ws+8
void f34_Free(i8 p519 /* block */) {
	*(i8*)(intptr_t)(ws+4224) = p519; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4224) 
); 



endsub:;
}

// GetFreeMemory workspace at ws+3984 length ws+8
void f38_GetFreeMemory(i8* p522 /* i */) {

	i8 v523 = (i8)+0;
	i8 v524 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v524 = v523;

endsub:;
	*p522 = *(i8*)(intptr_t)(ws+3984);
}

// _fcb_init workspace at ws+4048 length ws+8
void f41__fcb_init(i8 p525 /* fcb */) {
	*(i8*)(intptr_t)(ws+4048) = p525; /*fcb */

	i4 v526 = (i4)+0;
	i8 v527 = (i8)(intptr_t)(ws+4048);
	i8 v528 = *(i8*)(intptr_t)v527;
	i8 v529 = v528+(+4);
	*(i4*)(intptr_t)v529 = v526;

	i2 v530 = (i2)+0;
	i8 v531 = (i8)(intptr_t)(ws+4048);
	i8 v532 = *(i8*)(intptr_t)v531;
	i8 v533 = v532+(+8);
	*(i2*)(intptr_t)v533 = v530;

	i2 v534 = (i2)+0;
	i8 v535 = (i8)(intptr_t)(ws+4048);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+10);
	*(i2*)(intptr_t)v537 = v534;

	i1 v538 = (i1)+0;
	i8 v539 = (i8)(intptr_t)(ws+4048);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+524);
	*(i1*)(intptr_t)v541 = v538;

endsub:;
}

// _fcb_advance workspace at ws+4384 length ws+8
void f42__fcb_advance(i8 p542 /* fcb */) {
	*(i8*)(intptr_t)(ws+4384) = p542; /*fcb */

	i8 v543 = (i8)(intptr_t)(ws+4384);
	i8 v544 = *(i8*)(intptr_t)v543;
	i8 v545 = v544+(+10);
	i2 v546 = *(i2*)(intptr_t)v545;
	i2 v547 = v546+(+1);
	i8 v548 = (i8)(intptr_t)(ws+4384);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+10);
	*(i2*)(intptr_t)v550 = v547;

endsub:;
}
	void f39_FCBRawRead(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_fillbuffer workspace at ws+4120 length ws+16
void f43__fcb_fillbuffer(i1* p551 /* b */, i8 p552 /* fcb */) {
	*(i8*)(intptr_t)(ws+4120) = p552; /*fcb */

	i8 v553 = (i8)(intptr_t)(ws+4120);
	i8 v554 = *(i8*)(intptr_t)v553;
	i8 v555 = v554+(+4);
	i4 v556 = *(i4*)(intptr_t)v555;
	i8 v557 = (i8)(intptr_t)(ws+4120);
	i8 v558 = *(i8*)(intptr_t)v557;
	i8 v559 = v558+(+10);
	i2 v560 = *(i2*)(intptr_t)v559;
	i4 v561 = v560;
	i4 v562 = v556+v561;
	i8 v563 = (i8)(intptr_t)(ws+4132);
	*(i4*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+4120);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = (i8)(intptr_t)(ws+4132);
	i4 v567 = *(i4*)(intptr_t)v566;
	i2 v568 = (i2)+512;
	i8 v569 = (i8)(intptr_t)(f39_FCBRawRead);
	i2 v570;

	((void(*)(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v569)(&v570, v568, v567, v565);
	i8 v571 = (i8)(intptr_t)(ws+4120);
	i8 v572 = *(i8*)(intptr_t)v571;
	i8 v573 = v572+(+8);
	*(i2*)(intptr_t)v573 = v570;

	i1 v574 = (i1)+0;
	i8 v575 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v575 = v574;

	i8 v576 = (i8)(intptr_t)(ws+4120);
	i8 v577 = *(i8*)(intptr_t)v576;
	i8 v578 = v577+(+524);
	i1 v579 = *(i1*)(intptr_t)v578;
	i1 v580 = v579&(+1);
	i1 v581 = (i1)+0;
	if (v580==v581) goto c02_0092; else goto c02_0091;

c02_0091:;

	goto endsub;

c02_0092:;

c02_008e:;

	i1 v582 = (i1)+2;
	i8 v583 = (i8)(intptr_t)(ws+4120);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = v584+(+524);
	*(i1*)(intptr_t)v585 = v582;

	i8 v586 = (i8)(intptr_t)(ws+4132);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+4120);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+4);
	*(i4*)(intptr_t)v590 = v587;

	i2 v591 = (i2)+0;
	i8 v592 = (i8)(intptr_t)(ws+4120);
	i8 v593 = *(i8*)(intptr_t)v592;
	i8 v594 = v593+(+10);
	*(i2*)(intptr_t)v594 = v591;

	i8 v595 = (i8)(intptr_t)(ws+4120);
	i8 v596 = *(i8*)(intptr_t)v595;
	i8 v597 = v596+(+8);
	i2 v598 = *(i2*)(intptr_t)v597;
	i2 v599 = (i2)+0;
	if (v598==v599) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v600 = (i8)(intptr_t)(ws+4120);
	i8 v601 = *(i8*)(intptr_t)v600;
	i8 v602 = v601+(+12);
	i1 v603 = *(i1*)(intptr_t)v602;
	i8 v604 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v604 = v603;

	i8 v605 = (i8)(intptr_t)(ws+4120);
	i8 v606 = *(i8*)(intptr_t)v605;
	i8 v607 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v607)(v606);

c02_0097:;

c02_0093:;

endsub:;
	*p551 = *(i1*)(intptr_t)(ws+4128);
}
	void f40_FCBRawWrite(i2 /* len */, i4 /* pos */, i8 /* fcb */);

// FCBFlush workspace at ws+4384 length ws+12
void f44_FCBFlush(i8 p608 /* fcb */) {
	*(i8*)(intptr_t)(ws+4384) = p608; /*fcb */

	i8 v609 = (i8)(intptr_t)(ws+4384);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = v610+(+4);
	i4 v612 = *(i4*)(intptr_t)v611;
	i8 v613 = (i8)(intptr_t)(ws+4392);
	*(i4*)(intptr_t)v613 = v612;

	i8 v614 = (i8)(intptr_t)(ws+4384);
	i8 v615 = *(i8*)(intptr_t)v614;
	i8 v616 = v615+(+524);
	i1 v617 = *(i1*)(intptr_t)v616;
	i1 v618 = v617&(+4);
	i1 v619 = (i1)+0;
	if (v618==v619) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v620 = (i8)(intptr_t)(ws+4384);
	i8 v621 = *(i8*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+4392);
	i4 v623 = *(i4*)(intptr_t)v622;
	i8 v624 = (i8)(intptr_t)(ws+4384);
	i8 v625 = *(i8*)(intptr_t)v624;
	i8 v626 = v625+(+10);
	i2 v627 = *(i2*)(intptr_t)v626;
	i8 v628 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v628)(v627, v623, v621);

	i8 v629 = (i8)(intptr_t)(ws+4384);
	i8 v630 = *(i8*)(intptr_t)v629;
	i8 v631 = v630+(+524);
	i1 v632 = *(i1*)(intptr_t)v631;
	i1 v633 = v632&(+1);
	i1 v634 = (i1)+0;
	if (v633==v634) goto c02_00a1; else goto c02_00a0;

c02_00a0:;

	goto endsub;

c02_00a1:;

c02_009d:;

c02_009c:;

c02_0098:;

	i8 v635 = (i8)(intptr_t)(ws+4392);
	i4 v636 = *(i4*)(intptr_t)v635;
	i8 v637 = (i8)(intptr_t)(ws+4384);
	i8 v638 = *(i8*)(intptr_t)v637;
	i8 v639 = v638+(+10);
	i2 v640 = *(i2*)(intptr_t)v639;
	i4 v641 = v640;
	i4 v642 = v636+v641;
	i8 v643 = (i8)(intptr_t)(ws+4384);
	i8 v644 = *(i8*)(intptr_t)v643;
	i8 v645 = v644+(+4);
	*(i4*)(intptr_t)v645 = v642;

	i1 v646 = (i1)+0;
	i8 v647 = (i8)(intptr_t)(ws+4384);
	i8 v648 = *(i8*)(intptr_t)v647;
	i8 v649 = v648+(+524);
	*(i1*)(intptr_t)v649 = v646;

	i2 v650 = (i2)+0;
	i8 v651 = (i8)(intptr_t)(ws+4384);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = v652+(+10);
	*(i2*)(intptr_t)v653 = v650;

	i2 v654 = (i2)+0;
	i8 v655 = (i8)(intptr_t)(ws+4384);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+8);
	*(i2*)(intptr_t)v657 = v654;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_flushbuffer workspace at ws+4368 length ws+9
void f45__fcb_flushbuffer(i1 p658 /* b */, i8 p659 /* fcb */) {
	*(i8*)(intptr_t)(ws+4368) = p659; /*fcb */
	*(i1*)(intptr_t)(ws+4376) = p658; /*b */

	i8 v660 = (i8)(intptr_t)(ws+4368);
	i8 v661 = *(i8*)(intptr_t)v660;
	i8 v662 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v662)(v661);

	i8 v663 = (i8)(intptr_t)(ws+4368);
	i8 v664 = *(i8*)(intptr_t)v663;
	i8 v665 = v664+(+524);
	i1 v666 = *(i1*)(intptr_t)v665;
	i1 v667 = v666&(+1);
	i1 v668 = (i1)+0;
	if (v667==v668) goto c02_00a6; else goto c02_00a5;

c02_00a5:;

	goto endsub;

c02_00a6:;

c02_00a2:;

	i1 v669 = (i1)+4;
	i8 v670 = (i8)(intptr_t)(ws+4368);
	i8 v671 = *(i8*)(intptr_t)v670;
	i8 v672 = v671+(+524);
	*(i1*)(intptr_t)v672 = v669;

	i8 v673 = (i8)(intptr_t)(ws+4376);
	i1 v674 = *(i1*)(intptr_t)v673;
	i8 v675 = (i8)(intptr_t)(ws+4368);
	i8 v676 = *(i8*)(intptr_t)v675;
	i8 v677 = v676+(+12);
	*(i1*)(intptr_t)v677 = v674;

	i8 v678 = (i8)(intptr_t)(ws+4368);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v680)(v679);

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f43__fcb_fillbuffer(i1* /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBGetChar workspace at ws+4104 length ws+12
void f46_FCBGetChar(i1* p681 /* b */, i8 p682 /* fcb */) {
	*(i8*)(intptr_t)(ws+4104) = p682; /*fcb */

	i8 v683 = (i8)(intptr_t)(ws+4104);
	i8 v684 = *(i8*)(intptr_t)v683;
	i8 v685 = v684+(+524);
	i1 v686 = *(i1*)(intptr_t)v685;
	i1 v687 = v686&(+4);
	i1 v688 = (i1)+0;
	if (v687==v688) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v689 = (i8)(intptr_t)(ws+4104);
	i8 v690 = *(i8*)(intptr_t)v689;
	i8 v691 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v691)(v690);

c02_00ab:;

c02_00a7:;

	i8 v692 = (i8)(intptr_t)(ws+4104);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = v693+(+10);
	i2 v695 = *(i2*)(intptr_t)v694;
	i8 v696 = (i8)(intptr_t)(ws+4114);
	*(i2*)(intptr_t)v696 = v695;

	i8 v697 = (i8)(intptr_t)(ws+4114);
	i2 v698 = *(i2*)(intptr_t)v697;
	i8 v699 = (i8)(intptr_t)(ws+4104);
	i8 v700 = *(i8*)(intptr_t)v699;
	i8 v701 = v700+(+8);
	i2 v702 = *(i2*)(intptr_t)v701;
	if (v698==v702) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v703 = (i8)(intptr_t)(ws+4104);
	i8 v704 = *(i8*)(intptr_t)v703;
	i8 v705 = (i8)(intptr_t)(f43__fcb_fillbuffer);
	i1 v706;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v705)(&v706, v704);
	i8 v707 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v707 = v706;

	goto c02_00ac;

c02_00b0:;

	i8 v708 = (i8)(intptr_t)(ws+4104);
	i8 v709 = *(i8*)(intptr_t)v708;
	i8 v710 = v709+(+12);
	i8 v711 = (i8)(intptr_t)(ws+4114);
	i2 v712 = *(i2*)(intptr_t)v711;
	i8 v713 = v712;
	i8 v714 = v710+v713;
	i1 v715 = *(i1*)(intptr_t)v714;
	i8 v716 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v716 = v715;

	i8 v717 = (i8)(intptr_t)(ws+4104);
	i8 v718 = *(i8*)(intptr_t)v717;
	i8 v719 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v719)(v718);

c02_00ac:;

endsub:;
	*p681 = *(i1*)(intptr_t)(ws+4112);
}
	void f44_FCBFlush(i8 /* fcb */);
	void f45__fcb_flushbuffer(i1 /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBPutChar workspace at ws+4352 length ws+12
void f47_FCBPutChar(i1 p720 /* b */, i8 p721 /* fcb */) {
	*(i8*)(intptr_t)(ws+4352) = p721; /*fcb */
	*(i1*)(intptr_t)(ws+4360) = p720; /*b */

	i8 v722 = (i8)(intptr_t)(ws+4352);
	i8 v723 = *(i8*)(intptr_t)v722;
	i8 v724 = v723+(+524);
	i1 v725 = *(i1*)(intptr_t)v724;
	i1 v726 = v725&(+2);
	i1 v727 = (i1)+0;
	if (v726==v727) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v728 = (i8)(intptr_t)(ws+4352);
	i8 v729 = *(i8*)(intptr_t)v728;
	i8 v730 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v730)(v729);

c02_00b5:;

c02_00b1:;

	i8 v731 = (i8)(intptr_t)(ws+4352);
	i8 v732 = *(i8*)(intptr_t)v731;
	i8 v733 = v732+(+10);
	i2 v734 = *(i2*)(intptr_t)v733;
	i8 v735 = (i8)(intptr_t)(ws+4362);
	*(i2*)(intptr_t)v735 = v734;

	i8 v736 = (i8)(intptr_t)(ws+4362);
	i2 v737 = *(i2*)(intptr_t)v736;
	i2 v738 = (i2)+512;
	if (v737==v738) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v739 = (i8)(intptr_t)(ws+4352);
	i8 v740 = *(i8*)(intptr_t)v739;
	i8 v741 = (i8)(intptr_t)(ws+4360);
	i1 v742 = *(i1*)(intptr_t)v741;
	i8 v743 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v743)(v742, v740);

	goto c02_00b6;

c02_00ba:;

	i8 v744 = (i8)(intptr_t)(ws+4360);
	i1 v745 = *(i1*)(intptr_t)v744;
	i8 v746 = (i8)(intptr_t)(ws+4352);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = v747+(+12);
	i8 v749 = (i8)(intptr_t)(ws+4362);
	i2 v750 = *(i2*)(intptr_t)v749;
	i8 v751 = v750;
	i8 v752 = v748+v751;
	*(i1*)(intptr_t)v752 = v745;

	i8 v753 = (i8)(intptr_t)(ws+4352);
	i8 v754 = *(i8*)(intptr_t)v753;
	i8 v755 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v755)(v754);

c02_00b6:;

	i8 v756 = (i8)(intptr_t)(ws+4352);
	i8 v757 = *(i8*)(intptr_t)v756;
	i8 v758 = v757+(+524);
	i1 v759 = *(i1*)(intptr_t)v758;
	i1 v760 = v759|(+4);
	i8 v761 = (i8)(intptr_t)(ws+4352);
	i8 v762 = *(i8*)(intptr_t)v761;
	i8 v763 = v762+(+524);
	*(i1*)(intptr_t)v763 = v760;

endsub:;
}

// FCBPos workspace at ws+4272 length ws+12
void f48_FCBPos(i4* p764 /* pos */, i8 p765 /* fcb */) {
	*(i8*)(intptr_t)(ws+4272) = p765; /*fcb */

	i8 v766 = (i8)(intptr_t)(ws+4272);
	i8 v767 = *(i8*)(intptr_t)v766;
	i8 v768 = v767+(+4);
	i4 v769 = *(i4*)(intptr_t)v768;
	i8 v770 = (i8)(intptr_t)(ws+4272);
	i8 v771 = *(i8*)(intptr_t)v770;
	i8 v772 = v771+(+10);
	i2 v773 = *(i2*)(intptr_t)v772;
	i4 v774 = v773;
	i4 v775 = v769+v774;
	i8 v776 = (i8)(intptr_t)(ws+4280);
	*(i4*)(intptr_t)v776 = v775;

endsub:;
	*p764 = *(i4*)(intptr_t)(ws+4280);
}

// FCBRawRead workspace at ws+4136 length ws+36
void f39_FCBRawRead(i2* p845 /* amount */, i2 p846 /* len */, i4 p847 /* pos */, i8 p848 /* fcb */) {
	*(i8*)(intptr_t)(ws+4136) = p848; /*fcb */
	*(i4*)(intptr_t)(ws+4144) = p847; /*pos */
	*(i2*)(intptr_t)(ws+4148) = p846; /*len */

	i8 v849 = (i8)(intptr_t)(ws+4136);
	i8 v850 = *(i8*)(intptr_t)v849;
	i4 v851 = *(i4*)(intptr_t)v850;
	i8 v852 = (i8)(intptr_t)(ws+4152);
	*(i4*)(intptr_t)v852 = v851;

	i8 v853 = (i8)(intptr_t)(ws+4136);
	i8 v854 = *(i8*)(intptr_t)v853;
	i8 v855 = v854+(+12);
	i8 v856 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v856 = v855;


	
*(i4*)(intptr_t)(ws+4168) 
=pread( 
*(i4*)(intptr_t)(ws+4152) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4160) 
,  
*(i2*)(intptr_t)(ws+4148) 
,  
*(i4*)(intptr_t)(ws+4144) 
); 



	i8 v857 = (i8)(intptr_t)(ws+4168);
	i4 v858 = *(i4*)(intptr_t)v857;
	i4 v859 = (i4)-1;
	if (v858==v859) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v860 = (i2)+0;
	i8 v861 = (i8)(intptr_t)(ws+4150);
	*(i2*)(intptr_t)v861 = v860;

	i8 v862 = (i8)(intptr_t)(ws+4136);
	i8 v863 = *(i8*)(intptr_t)v862;
	i8 v864 = v863+(+524);
	i1 v865 = *(i1*)(intptr_t)v864;
	i1 v866 = v865|(+1);
	i8 v867 = (i8)(intptr_t)(ws+4136);
	i8 v868 = *(i8*)(intptr_t)v867;
	i8 v869 = v868+(+524);
	*(i1*)(intptr_t)v869 = v866;

	goto c02_00d3;

c02_00d7:;

	i8 v870 = (i8)(intptr_t)(ws+4168);
	i4 v871 = *(i4*)(intptr_t)v870;
	i2 v872 = (s2)(s4)v871;
	i8 v873 = (i8)(intptr_t)(ws+4150);
	*(i2*)(intptr_t)v873 = v872;

c02_00d3:;

endsub:;
	*p845 = *(i2*)(intptr_t)(ws+4150);
}

// FCBRawWrite workspace at ws+4400 length ws+36
void f40_FCBRawWrite(i2 p874 /* len */, i4 p875 /* pos */, i8 p876 /* fcb */) {
	*(i8*)(intptr_t)(ws+4400) = p876; /*fcb */
	*(i4*)(intptr_t)(ws+4408) = p875; /*pos */
	*(i2*)(intptr_t)(ws+4412) = p874; /*len */

	i8 v877 = (i8)(intptr_t)(ws+4400);
	i8 v878 = *(i8*)(intptr_t)v877;
	i4 v879 = *(i4*)(intptr_t)v878;
	i8 v880 = (i8)(intptr_t)(ws+4416);
	*(i4*)(intptr_t)v880 = v879;

	i8 v881 = (i8)(intptr_t)(ws+4400);
	i8 v882 = *(i8*)(intptr_t)v881;
	i8 v883 = v882+(+12);
	i8 v884 = (i8)(intptr_t)(ws+4424);
	*(i8*)(intptr_t)v884 = v883;


	
*(i4*)(intptr_t)(ws+4432) 
=pwrite( 
*(i4*)(intptr_t)(ws+4416) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4424) 
,  
*(i2*)(intptr_t)(ws+4412) 
,  
*(i4*)(intptr_t)(ws+4408) 
); 



	i8 v885 = (i8)(intptr_t)(ws+4432);
	i4 v886 = *(i4*)(intptr_t)v885;
	i4 v887 = (i4)-1;
	if (v886==v887) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v888 = (i8)(intptr_t)(ws+4400);
	i8 v889 = *(i8*)(intptr_t)v888;
	i8 v890 = v889+(+524);
	i1 v891 = *(i1*)(intptr_t)v890;
	i1 v892 = v891|(+1);
	i8 v893 = (i8)(intptr_t)(ws+4400);
	i8 v894 = *(i8*)(intptr_t)v893;
	i8 v895 = v894+(+524);
	*(i1*)(intptr_t)v895 = v892;

c02_00dc:;

c02_00d8:;

endsub:;
}
	void f41__fcb_init(i8 /* fcb */);

// fcb_i_open workspace at ws+4016 length ws+28
void f51_fcb_i_open(i1* p896 /* errno */, i4 p897 /* flags */, i8 p898 /* filename */, i8 p899 /* fcb */) {
	*(i8*)(intptr_t)(ws+4016) = p899; /*fcb */
	*(i8*)(intptr_t)(ws+4024) = p898; /*filename */
	*(i4*)(intptr_t)(ws+4032) = p897; /*flags */

	i8 v900 = (i8)(intptr_t)(ws+4016);
	i8 v901 = *(i8*)(intptr_t)v900;
	i8 v902 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(i8 /* fcb */))(intptr_t)v902)(v901);


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+4040) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+4024) 
,  
*(i4*)(intptr_t)(ws+4032) 
,  
(+438)
); 



	i8 v903 = (i8)(intptr_t)(ws+4040);
	i4 v904 = *(i4*)(intptr_t)v903;
	i8 v905 = (i8)(intptr_t)(ws+4016);
	i8 v906 = *(i8*)(intptr_t)v905;
	*(i4*)(intptr_t)v906 = v904;

	i8 v907 = (i8)(intptr_t)(ws+4040);
	i4 v908 = *(i4*)(intptr_t)v907;
	i4 v909 = (i4)+0;
	if ((s4)v908<(s4)v909) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+4036) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v910 = (i1)+0;
	i8 v911 = (i8)(intptr_t)(ws+4036);
	*(i1*)(intptr_t)v911 = v910;

c02_00dd:;

endsub:;
	*p896 = *(i1*)(intptr_t)(ws+4036);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+3992 length ws+17
void f52_FCBOpenIn(i1* p912 /* errno */, i8 p913 /* filename */, i8 p914 /* fcb */) {
	*(i8*)(intptr_t)(ws+3992) = p914; /*fcb */
	*(i8*)(intptr_t)(ws+4000) = p913; /*filename */

	i8 v915 = (i8)(intptr_t)(ws+3992);
	i8 v916 = *(i8*)(intptr_t)v915;
	i8 v917 = (i8)(intptr_t)(ws+4000);
	i8 v918 = *(i8*)(intptr_t)v917;
	i4 v919 = (i4)+0;
	i8 v920 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v921;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v920)(&v921, v919, v918, v916);
	i8 v922 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v922 = v921;

endsub:;
	*p912 = *(i1*)(intptr_t)(ws+4008);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+3992 length ws+17
void f54_FCBOpenOut(i1* p934 /* errno */, i8 p935 /* filename */, i8 p936 /* fcb */) {
	*(i8*)(intptr_t)(ws+3992) = p936; /*fcb */
	*(i8*)(intptr_t)(ws+4000) = p935; /*filename */

	i8 v937 = (i8)(intptr_t)(ws+3992);
	i8 v938 = *(i8*)(intptr_t)v937;
	i8 v939 = (i8)(intptr_t)(ws+4000);
	i8 v940 = *(i8*)(intptr_t)v939;
	i4 v941 = (i4)+578;
	i8 v942 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v943;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v942)(&v943, v941, v940, v938);
	i8 v944 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v944 = v943;

endsub:;
	*p934 = *(i1*)(intptr_t)(ws+4008);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBClose workspace at ws+3992 length ws+16
void f55_FCBClose(i1* p945 /* errno */, i8 p946 /* fcb */) {
	*(i8*)(intptr_t)(ws+3992) = p946; /*fcb */

	i8 v947 = (i8)(intptr_t)(ws+3992);
	i8 v948 = *(i8*)(intptr_t)v947;
	i8 v949 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v949)(v948);

	i8 v950 = (i8)(intptr_t)(ws+3992);
	i8 v951 = *(i8*)(intptr_t)v950;
	i4 v952 = *(i4*)(intptr_t)v951;
	i8 v953 = (i8)(intptr_t)(ws+4004);
	*(i4*)(intptr_t)v953 = v952;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+4004) 
); 


	
*(i1*)(intptr_t)(ws+4000) 
 = errno; 



endsub:;
	*p945 = *(i1*)(intptr_t)(ws+4000);
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);

// FCBPutBlock workspace at ws+4328 length ws+24
void f59_FCBPutBlock(i8 p1001 /* length */, i8 p1002 /* buffer */, i8 p1003 /* fcb */) {
	*(i8*)(intptr_t)(ws+4328) = p1003; /*fcb */
	*(i8*)(intptr_t)(ws+4336) = p1002; /*buffer */
	*(i8*)(intptr_t)(ws+4344) = p1001; /*length */

c02_00f1:;

	i8 v1004 = (i8)(intptr_t)(ws+4344);
	i8 v1005 = *(i8*)(intptr_t)v1004;
	i8 v1006 = (i8)+0;
	if (v1005==v1006) goto c02_00f4; else goto c02_00f3;

c02_00f3:;

	i8 v1007 = (i8)(intptr_t)(ws+4328);
	i8 v1008 = *(i8*)(intptr_t)v1007;
	i8 v1009 = (i8)(intptr_t)(ws+4336);
	i8 v1010 = *(i8*)(intptr_t)v1009;
	i1 v1011 = *(i1*)(intptr_t)v1010;
	i8 v1012 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1012)(v1011, v1008);

	i8 v1013 = (i8)(intptr_t)(ws+4336);
	i8 v1014 = *(i8*)(intptr_t)v1013;
	i8 v1015 = v1014+(+1);
	i8 v1016 = (i8)(intptr_t)(ws+4336);
	*(i8*)(intptr_t)v1016 = v1015;

	i8 v1017 = (i8)(intptr_t)(ws+4344);
	i8 v1018 = *(i8*)(intptr_t)v1017;
	i8 v1019 = v1018+(-1);
	i8 v1020 = (i8)(intptr_t)(ws+4344);
	*(i8*)(intptr_t)v1020 = v1019;

	goto c02_00f1;

c02_00f4:;

endsub:;
}

// MidReader workspace at ws+4064 length ws+8
void f60_MidReader(i8 p1029 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1029; /*node */

endsub:;
}
const i1 c02_s0001[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);

// StartError workspace at ws+4272 length ws+0
void f66_StartError(void) {

	i8 v1032 = (i8)(intptr_t)c02_s0001;
	i8 v1033 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1033)(v1032);

endsub:;
}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+4272 length ws+0
void f67_EndError(void) {

	i8 v1034 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1034)();

	i8 v1035 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1035)();

endsub:;
}
	void f66_StartError(void);
	void f12_print(i8 /* ptr */);
	void f67_EndError(void);

// SimpleError workspace at ws+4248 length ws+8
void f68_SimpleError(i8 p1036 /* s */) {
	*(i8*)(intptr_t)(ws+4248) = p1036; /*s */

	i8 v1037 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v1037)();

	i8 v1038 = (i8)(intptr_t)(ws+4248);
	i8 v1039 = *(i8*)(intptr_t)v1038;
	i8 v1040 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1040)(v1039);

	i8 v1041 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v1041)();

endsub:;
}
	void f66_StartError(void);
const i1 c02_s0002[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0003[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f67_EndError(void);

// CannotOpen workspace at ws+3992 length ws+8
void f69_CannotOpen(i8 p1042 /* filename */) {
	*(i8*)(intptr_t)(ws+3992) = p1042; /*filename */

	i8 v1043 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v1043)();

	i8 v1044 = (i8)(intptr_t)c02_s0002;
	i8 v1045 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1045)(v1044);

	i8 v1046 = (i8)(intptr_t)(ws+3992);
	i8 v1047 = *(i8*)(intptr_t)v1046;
	i8 v1048 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1048)(v1047);

	i8 v1049 = (i8)(intptr_t)c02_s0003;
	i8 v1050 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1050)(v1049);

	i8 v1051 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v1051)();

endsub:;
}
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
	void f71_PurgeAllFreeNodes(void);
	void f72_PurgeAllFreeInstructions(void);
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0004[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// InternalAlloc workspace at ws+4200 length ws+16
void f70_InternalAlloc(i8* p1052 /* block */, i8 p1053 /* length */) {
	*(i8*)(intptr_t)(ws+4200) = p1053; /*length */

	i8 v1054 = (i8)(intptr_t)(ws+4200);
	i8 v1055 = *(i8*)(intptr_t)v1054;
	i8 v1056 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v1057;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1056)(&v1057, v1055);
	i8 v1058 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v1058 = v1057;

	i8 v1059 = (i8)(intptr_t)(ws+4208);
	i8 v1060 = *(i8*)(intptr_t)v1059;
	i8 v1061 = (i8)+0;
	if (v1060==v1061) goto c02_00f8; else goto c02_00f9;

c02_00f8:;

	i8 v1062 = (i8)(intptr_t)(f71_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v1062)();

	i8 v1063 = (i8)(intptr_t)(f72_PurgeAllFreeInstructions);

	((void(*)(void))(intptr_t)v1063)();

	i8 v1064 = (i8)(intptr_t)(ws+4200);
	i8 v1065 = *(i8*)(intptr_t)v1064;
	i8 v1066 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v1067;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1066)(&v1067, v1065);
	i8 v1068 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v1068 = v1067;

	i8 v1069 = (i8)(intptr_t)(ws+4208);
	i8 v1070 = *(i8*)(intptr_t)v1069;
	i8 v1071 = (i8)+0;
	if (v1070==v1071) goto c02_00fd; else goto c02_00fe;

c02_00fd:;

	i8 v1072 = (i8)(intptr_t)c02_s0004;
	i8 v1073 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1073)(v1072);

	i8 v1074 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1074)();

c02_00fe:;

c02_00fa:;

c02_00f9:;

c02_00f5:;

endsub:;
	*p1052 = *(i8*)(intptr_t)(ws+4208);
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

// GetInputParameter workspace at ws+4264 length ws+24
void f73_GetInputParameter(i8* p1075 /* param */, i1 p1076 /* count */, i8 p1077 /* subr */) {
	*(i8*)(intptr_t)(ws+4264) = p1077; /*subr */
	*(i1*)(intptr_t)(ws+4272) = p1076; /*count */

	i8 v1078 = (i8)+0;
	i8 v1079 = (i8)(intptr_t)(ws+4280);
	*(i8*)(intptr_t)v1079 = v1078;

	i8 v1080 = (i8)(intptr_t)(ws+4264);
	i8 v1081 = *(i8*)(intptr_t)v1080;
	i8 v1082 = v1081+(+48);
	i1 v1083 = *(i1*)(intptr_t)v1082;
	i1 v1084 = (i1)+0;
	if (v1083==v1084) goto c02_0104; else goto c02_0103;

c02_0103:;

	i8 v1085 = (i8)(intptr_t)(ws+4264);
	i8 v1086 = *(i8*)(intptr_t)v1085;
	i8 v1087 = v1086+(+32);
	i8 v1088 = *(i8*)(intptr_t)v1087;
	i8 v1089 = (i8)(intptr_t)(ws+4272);
	i1 v1090 = *(i1*)(intptr_t)v1089;
	i8 v1091 = v1090;
	i1 v1092 = (i1)+3;
	i8 v1093 = ((i8)v1091)<<v1092;
	i8 v1094 = v1088+v1093;
	i8 v1095 = *(i8*)(intptr_t)v1094;
	i8 v1096 = (i8)(intptr_t)(ws+4280);
	*(i8*)(intptr_t)v1096 = v1095;

c02_0104:;

c02_0100:;

endsub:;
	*p1075 = *(i8*)(intptr_t)(ws+4280);
}

// GetOutputParameter workspace at ws+4264 length ws+24
void f74_GetOutputParameter(i8* p1097 /* param */, i1 p1098 /* count */, i8 p1099 /* subr */) {
	*(i8*)(intptr_t)(ws+4264) = p1099; /*subr */
	*(i1*)(intptr_t)(ws+4272) = p1098; /*count */

	i8 v1100 = (i8)+0;
	i8 v1101 = (i8)(intptr_t)(ws+4280);
	*(i8*)(intptr_t)v1101 = v1100;

	i8 v1102 = (i8)(intptr_t)(ws+4264);
	i8 v1103 = *(i8*)(intptr_t)v1102;
	i8 v1104 = v1103+(+49);
	i1 v1105 = *(i1*)(intptr_t)v1104;
	i1 v1106 = (i1)+0;
	if (v1105==v1106) goto c02_0109; else goto c02_0108;

c02_0108:;

	i8 v1107 = (i8)(intptr_t)(ws+4264);
	i8 v1108 = *(i8*)(intptr_t)v1107;
	i8 v1109 = v1108+(+40);
	i8 v1110 = *(i8*)(intptr_t)v1109;
	i8 v1111 = (i8)(intptr_t)(ws+4272);
	i1 v1112 = *(i1*)(intptr_t)v1111;
	i8 v1113 = v1112;
	i1 v1114 = (i1)+3;
	i8 v1115 = ((i8)v1113)<<v1114;
	i8 v1116 = v1110+v1115;
	i8 v1117 = *(i8*)(intptr_t)v1116;
	i8 v1118 = (i8)(intptr_t)(ws+4280);
	*(i8*)(intptr_t)v1118 = v1117;

c02_0109:;

c02_0105:;

endsub:;
	*p1097 = *(i8*)(intptr_t)(ws+4280);
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
const i1 c02_s0028[] = { 0x43,0x41,0x4c,0x4c,0x45,0x30,0 };
const i1 c02_s0029[] = { 0x43,0x41,0x4c,0x4c,0x45,0x31,0 };
const i1 c02_s002a[] = { 0x43,0x41,0x4c,0x4c,0x45,0x32,0 };
const i1 c02_s002b[] = { 0x43,0x41,0x4c,0x4c,0x45,0x34,0 };
const i1 c02_s002c[] = { 0x43,0x41,0x4c,0x4c,0x45,0x38,0 };
const i1 c02_s002d[] = { 0x41,0x52,0x47,0x30,0 };
const i1 c02_s002e[] = { 0x41,0x52,0x47,0x31,0 };
const i1 c02_s002f[] = { 0x41,0x52,0x47,0x32,0 };
const i1 c02_s0030[] = { 0x41,0x52,0x47,0x34,0 };
const i1 c02_s0031[] = { 0x41,0x52,0x47,0x38,0 };
const i1 c02_s0032[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x30,0 };
const i1 c02_s0033[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x31,0 };
const i1 c02_s0034[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x32,0 };
const i1 c02_s0035[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x34,0 };
const i1 c02_s0036[] = { 0x50,0x4f,0x50,0x41,0x52,0x47,0x38,0 };
const i1 c02_s0037[] = { 0x43,0x4f,0x4e,0x53,0x54,0x41,0x4e,0x54,0 };
const i1 c02_s0038[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s0039[] = { 0x41,0x44,0x44,0x52,0x45,0x53,0x53,0 };
const i1 c02_s003a[] = { 0x53,0x55,0x42,0x52,0x45,0x46,0 };
const i1 c02_s003b[] = { 0x44,0x45,0x52,0x45,0x46,0x30,0 };
const i1 c02_s003c[] = { 0x44,0x45,0x52,0x45,0x46,0x31,0 };
const i1 c02_s003d[] = { 0x44,0x45,0x52,0x45,0x46,0x32,0 };
const i1 c02_s003e[] = { 0x44,0x45,0x52,0x45,0x46,0x34,0 };
const i1 c02_s003f[] = { 0x44,0x45,0x52,0x45,0x46,0x38,0 };
const i1 c02_s0040[] = { 0x53,0x54,0x4f,0x52,0x45,0x30,0 };
const i1 c02_s0041[] = { 0x53,0x54,0x4f,0x52,0x45,0x31,0 };
const i1 c02_s0042[] = { 0x53,0x54,0x4f,0x52,0x45,0x32,0 };
const i1 c02_s0043[] = { 0x53,0x54,0x4f,0x52,0x45,0x34,0 };
const i1 c02_s0044[] = { 0x53,0x54,0x4f,0x52,0x45,0x38,0 };
const i1 c02_s0045[] = { 0x42,0x41,0x4e,0x44,0 };
const i1 c02_s0046[] = { 0x42,0x4f,0x52,0 };
const i1 c02_s0047[] = { 0x42,0x45,0x51,0x30,0 };
const i1 c02_s0048[] = { 0x42,0x45,0x51,0x31,0 };
const i1 c02_s0049[] = { 0x42,0x45,0x51,0x32,0 };
const i1 c02_s004a[] = { 0x42,0x45,0x51,0x34,0 };
const i1 c02_s004b[] = { 0x42,0x45,0x51,0x38,0 };
const i1 c02_s004c[] = { 0x42,0x4c,0x54,0x53,0x30,0 };
const i1 c02_s004d[] = { 0x42,0x4c,0x54,0x53,0x31,0 };
const i1 c02_s004e[] = { 0x42,0x4c,0x54,0x53,0x32,0 };
const i1 c02_s004f[] = { 0x42,0x4c,0x54,0x53,0x34,0 };
const i1 c02_s0050[] = { 0x42,0x4c,0x54,0x53,0x38,0 };
const i1 c02_s0051[] = { 0x42,0x4c,0x54,0x55,0x30,0 };
const i1 c02_s0052[] = { 0x42,0x4c,0x54,0x55,0x31,0 };
const i1 c02_s0053[] = { 0x42,0x4c,0x54,0x55,0x32,0 };
const i1 c02_s0054[] = { 0x42,0x4c,0x54,0x55,0x34,0 };
const i1 c02_s0055[] = { 0x42,0x4c,0x54,0x55,0x38,0 };
const i1 c02_s0056[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x30,0 };
const i1 c02_s0057[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x31,0 };
const i1 c02_s0058[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x32,0 };
const i1 c02_s0059[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x34,0 };
const i1 c02_s005a[] = { 0x53,0x54,0x41,0x52,0x54,0x43,0x41,0x53,0x45,0x38,0 };
const i1 c02_s005b[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x30,0 };
const i1 c02_s005c[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x31,0 };
const i1 c02_s005d[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x32,0 };
const i1 c02_s005e[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x34,0 };
const i1 c02_s005f[] = { 0x57,0x48,0x45,0x4e,0x43,0x41,0x53,0x45,0x38,0 };
const i1 c02_s0060[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x30,0 };
const i1 c02_s0061[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x31,0 };
const i1 c02_s0062[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x32,0 };
const i1 c02_s0063[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x34,0 };
const i1 c02_s0064[] = { 0x45,0x4e,0x44,0x43,0x41,0x53,0x45,0x38,0 };
const i1 c02_s0065[] = { 0x43,0x41,0x53,0x54,0x31,0x30,0 };
const i1 c02_s0066[] = { 0x43,0x41,0x53,0x54,0x31,0x31,0 };
const i1 c02_s0067[] = { 0x43,0x41,0x53,0x54,0x31,0x32,0 };
const i1 c02_s0068[] = { 0x43,0x41,0x53,0x54,0x31,0x34,0 };
const i1 c02_s0069[] = { 0x43,0x41,0x53,0x54,0x31,0x38,0 };
const i1 c02_s006a[] = { 0x43,0x41,0x53,0x54,0x32,0x30,0 };
const i1 c02_s006b[] = { 0x43,0x41,0x53,0x54,0x32,0x31,0 };
const i1 c02_s006c[] = { 0x43,0x41,0x53,0x54,0x32,0x32,0 };
const i1 c02_s006d[] = { 0x43,0x41,0x53,0x54,0x32,0x34,0 };
const i1 c02_s006e[] = { 0x43,0x41,0x53,0x54,0x32,0x38,0 };
const i1 c02_s006f[] = { 0x43,0x41,0x53,0x54,0x34,0x30,0 };
const i1 c02_s0070[] = { 0x43,0x41,0x53,0x54,0x34,0x31,0 };
const i1 c02_s0071[] = { 0x43,0x41,0x53,0x54,0x34,0x32,0 };
const i1 c02_s0072[] = { 0x43,0x41,0x53,0x54,0x34,0x34,0 };
const i1 c02_s0073[] = { 0x43,0x41,0x53,0x54,0x34,0x38,0 };
const i1 c02_s0074[] = { 0x43,0x41,0x53,0x54,0x38,0x30,0 };
const i1 c02_s0075[] = { 0x43,0x41,0x53,0x54,0x38,0x31,0 };
const i1 c02_s0076[] = { 0x43,0x41,0x53,0x54,0x38,0x32,0 };
const i1 c02_s0077[] = { 0x43,0x41,0x53,0x54,0x38,0x34,0 };
const i1 c02_s0078[] = { 0x43,0x41,0x53,0x54,0x38,0x38,0 };
const i1 c02_s0079[] = { 0x4e,0x4f,0x54,0x30,0 };
const i1 c02_s007a[] = { 0x4e,0x4f,0x54,0x31,0 };
const i1 c02_s007b[] = { 0x4e,0x4f,0x54,0x32,0 };
const i1 c02_s007c[] = { 0x4e,0x4f,0x54,0x34,0 };
const i1 c02_s007d[] = { 0x4e,0x4f,0x54,0x38,0 };
const i1 c02_s007e[] = { 0x4e,0x45,0x47,0x30,0 };
const i1 c02_s007f[] = { 0x4e,0x45,0x47,0x31,0 };
const i1 c02_s0080[] = { 0x4e,0x45,0x47,0x32,0 };
const i1 c02_s0081[] = { 0x4e,0x45,0x47,0x34,0 };
const i1 c02_s0082[] = { 0x4e,0x45,0x47,0x38,0 };
const i1 c02_s0083[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x30,0 };
const i1 c02_s0084[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x31,0 };
const i1 c02_s0085[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x32,0 };
const i1 c02_s0086[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x34,0 };
const i1 c02_s0087[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0x38,0 };
const i1 c02_s0088[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x30,0 };
const i1 c02_s0089[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x31,0 };
const i1 c02_s008a[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x32,0 };
const i1 c02_s008b[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x34,0 };
const i1 c02_s008c[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x55,0x38,0 };
const i1 c02_s008d[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x30,0 };
const i1 c02_s008e[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x31,0 };
const i1 c02_s008f[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x32,0 };
const i1 c02_s0090[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x34,0 };
const i1 c02_s0091[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0x53,0x38,0 };
const i1 c02_s0092[] = { 0x53,0x55,0x42,0x30,0 };
const i1 c02_s0093[] = { 0x53,0x55,0x42,0x31,0 };
const i1 c02_s0094[] = { 0x53,0x55,0x42,0x32,0 };
const i1 c02_s0095[] = { 0x53,0x55,0x42,0x34,0 };
const i1 c02_s0096[] = { 0x53,0x55,0x42,0x38,0 };
const i1 c02_s0097[] = { 0x44,0x49,0x56,0x55,0x30,0 };
const i1 c02_s0098[] = { 0x44,0x49,0x56,0x55,0x31,0 };
const i1 c02_s0099[] = { 0x44,0x49,0x56,0x55,0x32,0 };
const i1 c02_s009a[] = { 0x44,0x49,0x56,0x55,0x34,0 };
const i1 c02_s009b[] = { 0x44,0x49,0x56,0x55,0x38,0 };
const i1 c02_s009c[] = { 0x44,0x49,0x56,0x53,0x30,0 };
const i1 c02_s009d[] = { 0x44,0x49,0x56,0x53,0x31,0 };
const i1 c02_s009e[] = { 0x44,0x49,0x56,0x53,0x32,0 };
const i1 c02_s009f[] = { 0x44,0x49,0x56,0x53,0x34,0 };
const i1 c02_s00a0[] = { 0x44,0x49,0x56,0x53,0x38,0 };
const i1 c02_s00a1[] = { 0x52,0x45,0x4d,0x55,0x30,0 };
const i1 c02_s00a2[] = { 0x52,0x45,0x4d,0x55,0x31,0 };
const i1 c02_s00a3[] = { 0x52,0x45,0x4d,0x55,0x32,0 };
const i1 c02_s00a4[] = { 0x52,0x45,0x4d,0x55,0x34,0 };
const i1 c02_s00a5[] = { 0x52,0x45,0x4d,0x55,0x38,0 };
const i1 c02_s00a6[] = { 0x52,0x45,0x4d,0x53,0x30,0 };
const i1 c02_s00a7[] = { 0x52,0x45,0x4d,0x53,0x31,0 };
const i1 c02_s00a8[] = { 0x52,0x45,0x4d,0x53,0x32,0 };
const i1 c02_s00a9[] = { 0x52,0x45,0x4d,0x53,0x34,0 };
const i1 c02_s00aa[] = { 0x52,0x45,0x4d,0x53,0x38,0 };
const i1 c02_s00ab[] = { 0x41,0x44,0x44,0x30,0 };
const i1 c02_s00ac[] = { 0x41,0x44,0x44,0x31,0 };
const i1 c02_s00ad[] = { 0x41,0x44,0x44,0x32,0 };
const i1 c02_s00ae[] = { 0x41,0x44,0x44,0x34,0 };
const i1 c02_s00af[] = { 0x41,0x44,0x44,0x38,0 };
const i1 c02_s00b0[] = { 0x4d,0x55,0x4c,0x30,0 };
const i1 c02_s00b1[] = { 0x4d,0x55,0x4c,0x31,0 };
const i1 c02_s00b2[] = { 0x4d,0x55,0x4c,0x32,0 };
const i1 c02_s00b3[] = { 0x4d,0x55,0x4c,0x34,0 };
const i1 c02_s00b4[] = { 0x4d,0x55,0x4c,0x38,0 };
const i1 c02_s00b5[] = { 0x41,0x4e,0x44,0x30,0 };
const i1 c02_s00b6[] = { 0x41,0x4e,0x44,0x31,0 };
const i1 c02_s00b7[] = { 0x41,0x4e,0x44,0x32,0 };
const i1 c02_s00b8[] = { 0x41,0x4e,0x44,0x34,0 };
const i1 c02_s00b9[] = { 0x41,0x4e,0x44,0x38,0 };
const i1 c02_s00ba[] = { 0x4f,0x52,0x30,0 };
const i1 c02_s00bb[] = { 0x4f,0x52,0x31,0 };
const i1 c02_s00bc[] = { 0x4f,0x52,0x32,0 };
const i1 c02_s00bd[] = { 0x4f,0x52,0x34,0 };
const i1 c02_s00be[] = { 0x4f,0x52,0x38,0 };
const i1 c02_s00bf[] = { 0x45,0x4f,0x52,0x30,0 };
const i1 c02_s00c0[] = { 0x45,0x4f,0x52,0x31,0 };
const i1 c02_s00c1[] = { 0x45,0x4f,0x52,0x32,0 };
const i1 c02_s00c2[] = { 0x45,0x4f,0x52,0x34,0 };
const i1 c02_s00c3[] = { 0x45,0x4f,0x52,0x38,0 };
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

	{ .ptr = (void*)c02_s00c1 },

	{ .ptr = (void*)c02_s00c2 },

	{ .ptr = (void*)c02_s00c3 },

};

// MidcodeName workspace at ws+4176 length ws+16
void f78_MidcodeName(i8* p1138 /* name */, i1 p1139 /* op */) {
	*(i1*)(intptr_t)(ws+4176) = p1139; /*op */


	i8 v1140 = (i8)(intptr_t)((i1*)f78_MidcodeName_s010d);
	i8 v1141 = (i8)(intptr_t)(ws+4176);
	i1 v1142 = *(i1*)(intptr_t)v1141;
	i1 v1143 = v1142+(-1);
	i8 v1144 = v1143;
	i1 v1145 = (i1)+3;
	i8 v1146 = ((i8)v1144)<<v1145;
	i8 v1147 = v1140+v1146;
	i8 v1148 = *(i8*)(intptr_t)v1147;
	i8 v1149 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v1149 = v1148;

endsub:;
	*p1138 = *(i8*)(intptr_t)(ws+4184);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f70_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+4184 length ws+16
void f77_AllocateNewNode(i8* p1152 /* m */, i1 p1153 /* code */) {
	*(i1*)(intptr_t)(ws+4184) = p1153; /*code */

	i8 v1154 = (i8)(intptr_t)(ws+192);
	i8 v1155 = *(i8*)(intptr_t)v1154;
	i8 v1156 = (i8)+0;
	if (v1155==v1156) goto c02_0112; else goto c02_0111;

c02_0111:;

	i8 v1157 = (i8)(intptr_t)(ws+192);
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v1159 = v1158;

	i8 v1160 = (i8)(intptr_t)(ws+192);
	i8 v1161 = *(i8*)(intptr_t)v1160;
	i8 v1162 = v1161+(+24);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	i8 v1164 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1164 = v1163;

	i8 v1165 = (i8)(intptr_t)(ws+4192);
	i8 v1166 = *(i8*)(intptr_t)v1165;
	i1 v1167 = (i1)+0;
	i8 v1168 = (i8)+257;
	i8 v1169 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v1169)(v1168, v1167, v1166);

	goto c02_010e;

c02_0112:;

	i8 v1170 = (i8)+257;
	i8 v1171 = (i8)(intptr_t)(f70_InternalAlloc);
	i8 v1172;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1171)(&v1172, v1170);
	i8 v1173 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v1173 = v1172;

c02_010e:;

	i8 v1174 = (i8)(intptr_t)(ws+4184);
	i1 v1175 = *(i1*)(intptr_t)v1174;
	i8 v1176 = (i8)(intptr_t)(ws+4192);
	i8 v1177 = *(i8*)(intptr_t)v1176;
	i8 v1178 = v1177+(+256);
	*(i1*)(intptr_t)v1178 = v1175;

endsub:;
	*p1152 = *(i8*)(intptr_t)(ws+4192);
}

// FreeNode workspace at ws+4112 length ws+8
void f79_FreeNode(i8 p1179 /* node */) {
	*(i8*)(intptr_t)(ws+4112) = p1179; /*node */

	i8 v1180 = (i8)(intptr_t)(ws+192);
	i8 v1181 = *(i8*)(intptr_t)v1180;
	i8 v1182 = (i8)(intptr_t)(ws+4112);
	i8 v1183 = *(i8*)(intptr_t)v1182;
	i8 v1184 = v1183+(+24);
	*(i8*)(intptr_t)v1184 = v1181;

	i8 v1185 = (i8)(intptr_t)(ws+4112);
	i8 v1186 = *(i8*)(intptr_t)v1185;
	i8 v1187 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1187 = v1186;

endsub:;
}
	void f34_Free(i8 /* block */);

// PurgeAllFreeNodes workspace at ws+4216 length ws+8
void f71_PurgeAllFreeNodes(void) {

c02_0115:;

	i8 v1188 = (i8)(intptr_t)(ws+192);
	i8 v1189 = *(i8*)(intptr_t)v1188;
	i8 v1190 = (i8)+0;
	if (v1189==v1190) goto c02_0118; else goto c02_0117;

c02_0117:;

	i8 v1191 = (i8)(intptr_t)(ws+192);
	i8 v1192 = *(i8*)(intptr_t)v1191;
	i8 v1193 = (i8)(intptr_t)(ws+4216);
	*(i8*)(intptr_t)v1193 = v1192;

	i8 v1194 = (i8)(intptr_t)(ws+192);
	i8 v1195 = *(i8*)(intptr_t)v1194;
	i8 v1196 = v1195+(+24);
	i8 v1197 = *(i8*)(intptr_t)v1196;
	i8 v1198 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1198 = v1197;

	i8 v1199 = (i8)(intptr_t)(ws+4216);
	i8 v1200 = *(i8*)(intptr_t)v1199;
	i8 v1201 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1201)(v1200);

	goto c02_0115;

c02_0118:;

endsub:;
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);

// WriteB8 workspace at ws+4336 length ws+1
void f80_WriteB8(i1 p1208 /* b */) {
	*(i1*)(intptr_t)(ws+4336) = p1208; /*b */

	i8 v1209 = (i8)(intptr_t)(ws+200);
	i8 v1210 = (i8)(intptr_t)(ws+4336);
	i1 v1211 = *(i1*)(intptr_t)v1210;
	i8 v1212 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1212)(v1211, v1209);

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f80_WriteB8(i1 /* b */);

// WriteB16 workspace at ws+4328 length ws+2
void f81_WriteB16(i2 p1213 /* w */) {
	*(i2*)(intptr_t)(ws+4328) = p1213; /*w */

	i8 v1214 = (i8)(intptr_t)(ws+4328);
	i2 v1215 = *(i2*)(intptr_t)v1214;
	i1 v1216 = v1215;
	i8 v1217 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1217)(v1216);

	i8 v1218 = (i8)(intptr_t)(ws+4328);
	i2 v1219 = *(i2*)(intptr_t)v1218;
	i1 v1220 = (i1)+8;
	i2 v1221 = ((i2)v1219)>>v1220;
	i1 v1222 = v1221;
	i8 v1223 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1223)(v1222);

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f59_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// FlushCurrentStream workspace at ws+4320 length ws+1
void f82_FlushCurrentStream(i1 p1224 /* close */) {
	*(i1*)(intptr_t)(ws+4320) = p1224; /*close */

	i1 v1225 = (i1)+70;
	i8 v1226 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1226)(v1225);

	i8 v1227 = (i8)(intptr_t)(ws+2774);
	i2 v1228 = *(i2*)(intptr_t)v1227;
	i2 v1229 = v1228+(+3);
	i8 v1230 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1230)(v1229);

	i8 v1231 = (i8)(intptr_t)(ws+2800);
	i1 v1232 = *(i1*)(intptr_t)v1231;
	i8 v1233 = (i8)(intptr_t)(ws+4320);
	i1 v1234 = *(i1*)(intptr_t)v1233;
	i1 v1235 = v1232|v1234;
	i8 v1236 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1236)(v1235);

	i8 v1237 = (i8)(intptr_t)(ws+2792);
	i8 v1238 = *(i8*)(intptr_t)v1237;
	i2 v1239 = *(i2*)(intptr_t)v1238;
	i8 v1240 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1240)(v1239);

	i8 v1241 = (i8)(intptr_t)(ws+200);
	i8 v1242 = (i8)(intptr_t)(ws+725);
	i8 v1243 = (i8)(intptr_t)(ws+2774);
	i2 v1244 = *(i2*)(intptr_t)v1243;
	i8 v1245 = v1244;
	i8 v1246 = (i8)(intptr_t)(f59_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v1246)(v1245, v1242, v1241);

	i2 v1247 = (i2)+0;
	i8 v1248 = (i8)(intptr_t)(ws+2774);
	*(i2*)(intptr_t)v1248 = v1247;

endsub:;
}
	void f82_FlushCurrentStream(i1 /* close */);

// E_b8 workspace at ws+4312 length ws+1
void f83_E_b8(i1 p1249 /* byte */) {
	*(i1*)(intptr_t)(ws+4312) = p1249; /*byte */

	i8 v1250 = (i8)(intptr_t)(ws+2792);
	i8 v1251 = *(i8*)(intptr_t)v1250;
	i8 v1252 = (i8)+0;
	if (v1251==v1252) goto c02_011d; else goto c02_011c;

c02_011c:;

	i8 v1253 = (i8)(intptr_t)(ws+4312);
	i1 v1254 = *(i1*)(intptr_t)v1253;
	i8 v1255 = (i8)(intptr_t)(ws+725);
	i8 v1256 = (i8)(intptr_t)(ws+2774);
	i2 v1257 = *(i2*)(intptr_t)v1256;
	i8 v1258 = v1257;
	i8 v1259 = v1255+v1258;
	*(i1*)(intptr_t)v1259 = v1254;

	i8 v1260 = (i8)(intptr_t)(ws+2774);
	i2 v1261 = *(i2*)(intptr_t)v1260;
	i2 v1262 = v1261+(+1);
	i8 v1263 = (i8)(intptr_t)(ws+2774);
	*(i2*)(intptr_t)v1263 = v1262;

	i8 v1264 = (i8)(intptr_t)(ws+2774);
	i2 v1265 = *(i2*)(intptr_t)v1264;
	i2 v1266 = (i2)+2048;
	if (v1265==v1266) goto c02_0121; else goto c02_0122;

c02_0121:;

	i1 v1267 = (i1)+0;
	i8 v1268 = (i8)(intptr_t)(f82_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v1268)(v1267);

c02_0122:;

c02_011e:;

c02_011d:;

c02_0119:;

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);

// E_b16 workspace at ws+4248 length ws+2
void f84_E_b16(i2 p1269 /* word */) {
	*(i2*)(intptr_t)(ws+4248) = p1269; /*word */

	i8 v1270 = (i8)(intptr_t)(ws+4248);
	i2 v1271 = *(i2*)(intptr_t)v1270;
	i1 v1272 = v1271;
	i8 v1273 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1273)(v1272);

	i8 v1274 = (i8)(intptr_t)(ws+4248);
	i2 v1275 = *(i2*)(intptr_t)v1274;
	i1 v1276 = (i1)+8;
	i2 v1277 = ((i2)v1275)>>v1276;
	i1 v1278 = v1277;
	i8 v1279 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1279)(v1278);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E_space workspace at ws+4200 length ws+0
void f86_E_space(void) {

	i1 v1291 = (i1)+32;
	i8 v1292 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1292)(v1291);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E_comma workspace at ws+4224 length ws+0
void f87_E_comma(void) {

	i1 v1293 = (i1)+44;
	i8 v1294 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1294)(v1293);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E_tab workspace at ws+4200 length ws+0
void f88_E_tab(void) {

	i1 v1295 = (i1)+9;
	i8 v1296 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1296)(v1295);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E_nl workspace at ws+4200 length ws+0
void f89_E_nl(void) {

	i1 v1297 = (i1)+10;
	i8 v1298 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1298)(v1297);

endsub:;
}
	void f83_E_b8(i1 /* byte */);

// E workspace at ws+4288 length ws+9
void f92_E(i8 p1303 /* text */) {
	*(i8*)(intptr_t)(ws+4288) = p1303; /*text */

c02_0123:;

	i8 v1304 = (i8)(intptr_t)(ws+4288);
	i8 v1305 = *(i8*)(intptr_t)v1304;
	i1 v1306 = *(i1*)(intptr_t)v1305;
	i8 v1307 = (i8)(intptr_t)(ws+4296);
	*(i1*)(intptr_t)v1307 = v1306;

	i8 v1308 = (i8)(intptr_t)(ws+4288);
	i8 v1309 = *(i8*)(intptr_t)v1308;
	i8 v1310 = v1309+(+1);
	i8 v1311 = (i8)(intptr_t)(ws+4288);
	*(i8*)(intptr_t)v1311 = v1310;

	i8 v1312 = (i8)(intptr_t)(ws+4296);
	i1 v1313 = *(i1*)(intptr_t)v1312;
	i1 v1314 = (i1)+0;
	if (v1313==v1314) goto c02_0128; else goto c02_0129;

c02_0128:;

	goto c02_0124;

c02_0129:;

c02_0125:;

	i8 v1315 = (i8)(intptr_t)(ws+4296);
	i1 v1316 = *(i1*)(intptr_t)v1315;
	i8 v1317 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1317)(v1316);

	goto c02_0123;

c02_0124:;

endsub:;
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f83_E_b8(i1 /* byte */);

// E_u32 workspace at ws+4272 length ws+33
void f93_E_u32(i4 p1318 /* value */) {
	*(i4*)(intptr_t)(ws+4272) = p1318; /*value */

	i8 v1319 = (i8)(intptr_t)(ws+4276);
	i8 v1320 = (i8)(intptr_t)(ws+4288);
	*(i8*)(intptr_t)v1320 = v1319;

	i8 v1321 = (i8)(intptr_t)(ws+4272);
	i4 v1322 = *(i4*)(intptr_t)v1321;
	i1 v1323 = (i1)+10;
	i8 v1324 = (i8)(intptr_t)(ws+4288);
	i8 v1325 = *(i8*)(intptr_t)v1324;
	i8 v1326 = (i8)(intptr_t)(f14_UIToA);
	i8 v1327;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1326)(&v1327, v1325, v1323, v1322);
	i8 v1328 = (i8)(intptr_t)(ws+4296);
	*(i8*)(intptr_t)v1328 = v1327;

c02_012a:;

	i8 v1329 = (i8)(intptr_t)(ws+4288);
	i8 v1330 = *(i8*)(intptr_t)v1329;
	i1 v1331 = *(i1*)(intptr_t)v1330;
	i8 v1332 = (i8)(intptr_t)(ws+4304);
	*(i1*)(intptr_t)v1332 = v1331;

	i8 v1333 = (i8)(intptr_t)(ws+4304);
	i1 v1334 = *(i1*)(intptr_t)v1333;
	i1 v1335 = (i1)+0;
	if (v1334==v1335) goto c02_012f; else goto c02_0130;

c02_012f:;

	goto c02_012b;

c02_0130:;

c02_012c:;

	i8 v1336 = (i8)(intptr_t)(ws+4304);
	i1 v1337 = *(i1*)(intptr_t)v1336;
	i8 v1338 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1338)(v1337);

	i8 v1339 = (i8)(intptr_t)(ws+4288);
	i8 v1340 = *(i8*)(intptr_t)v1339;
	i8 v1341 = v1340+(+1);
	i8 v1342 = (i8)(intptr_t)(ws+4288);
	*(i8*)(intptr_t)v1342 = v1341;

	goto c02_012a;

c02_012b:;

endsub:;
}
	void f93_E_u32(i4 /* value */);

// E_u16 workspace at ws+4248 length ws+2
void f94_E_u16(i2 p1343 /* value */) {
	*(i2*)(intptr_t)(ws+4248) = p1343; /*value */

	i8 v1344 = (i8)(intptr_t)(ws+4248);
	i2 v1345 = *(i2*)(intptr_t)v1344;
	i4 v1346 = v1345;
	i8 v1347 = (i8)(intptr_t)(f93_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1347)(v1346);

endsub:;
}
	void f93_E_u32(i4 /* value */);

// E_u8 workspace at ws+4264 length ws+1
void f95_E_u8(i1 p1348 /* value */) {
	*(i1*)(intptr_t)(ws+4264) = p1348; /*value */

	i8 v1349 = (i8)(intptr_t)(ws+4264);
	i1 v1350 = *(i1*)(intptr_t)v1349;
	i4 v1351 = v1350;
	i8 v1352 = (i8)(intptr_t)(f93_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1352)(v1351);

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f94_E_u16(i2 /* value */);

// E_i16 workspace at ws+4240 length ws+2
void f97_E_i16(i2 p1368 /* value */) {
	*(i2*)(intptr_t)(ws+4240) = p1368; /*value */

	i8 v1369 = (i8)(intptr_t)(ws+4240);
	i2 v1370 = *(i2*)(intptr_t)v1369;
	i2 v1371 = (i2)+0;
	if ((s2)v1370<(s2)v1371) goto c02_0139; else goto c02_013a;

c02_0139:;

	i1 v1372 = (i1)+45;
	i8 v1373 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1373)(v1372);

	i8 v1374 = (i8)(intptr_t)(ws+4240);
	i2 v1375 = *(i2*)(intptr_t)v1374;
	i2 v1376 = -v1375;
	i8 v1377 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v1377 = v1376;

	goto c02_0136;

c02_013a:;

	i1 v1378 = (i1)+43;
	i8 v1379 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1379)(v1378);

c02_0136:;

	i8 v1380 = (i8)(intptr_t)(ws+4240);
	i2 v1381 = *(i2*)(intptr_t)v1380;
	i8 v1382 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1382)(v1381);

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f93_E_u32(i4 /* value */);

// E_i32 workspace at ws+4224 length ws+4
void f98_E_i32(i4 p1383 /* value */) {
	*(i4*)(intptr_t)(ws+4224) = p1383; /*value */

	i8 v1384 = (i8)(intptr_t)(ws+4224);
	i4 v1385 = *(i4*)(intptr_t)v1384;
	i4 v1386 = (i4)+0;
	if ((s4)v1385<(s4)v1386) goto c02_013e; else goto c02_013f;

c02_013e:;

	i1 v1387 = (i1)+45;
	i8 v1388 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1388)(v1387);

	i8 v1389 = (i8)(intptr_t)(ws+4224);
	i4 v1390 = *(i4*)(intptr_t)v1389;
	i4 v1391 = -v1390;
	i8 v1392 = (i8)(intptr_t)(ws+4224);
	*(i4*)(intptr_t)v1392 = v1391;

	goto c02_013b;

c02_013f:;

	i1 v1393 = (i1)+43;
	i8 v1394 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1394)(v1393);

c02_013b:;

	i8 v1395 = (i8)(intptr_t)(ws+4224);
	i4 v1396 = *(i4*)(intptr_t)v1395;
	i8 v1397 = (i8)(intptr_t)(f93_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1397)(v1396);

endsub:;
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f83_E_b8(i1 /* byte */);
	void f92_E(i8 /* text */);

// E_h workspace at ws+4256 length ws+25
void f99_E_h(i1 p1398 /* width */, i4 p1399 /* value */) {
	*(i4*)(intptr_t)(ws+4256) = p1399; /*value */
	*(i1*)(intptr_t)(ws+4260) = p1398; /*width */

	i8 v1400 = (i8)(intptr_t)(ws+4256);
	i4 v1401 = *(i4*)(intptr_t)v1400;
	i1 v1402 = (i1)+16;
	i8 v1403 = (i8)(intptr_t)(ws+4261);
	i8 v1404 = (i8)(intptr_t)(f14_UIToA);
	i8 v1405;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1404)(&v1405, v1403, v1402, v1401);
	i8 v1406 = (i8)(intptr_t)(ws+4272);
	*(i8*)(intptr_t)v1406 = v1405;

	i8 v1407 = (i8)(intptr_t)(ws+4260);
	i1 v1408 = *(i1*)(intptr_t)v1407;
	i8 v1409 = (i8)(intptr_t)(ws+4272);
	i8 v1410 = *(i8*)(intptr_t)v1409;
	i8 v1411 = (i8)(intptr_t)(ws+4261);
	i8 v1412 = v1410-v1411;
	i1 v1413 = v1412;
	i1 v1414 = v1408-v1413;
	i8 v1415 = (i8)(intptr_t)(ws+4280);
	*(i1*)(intptr_t)v1415 = v1414;

c02_0142:;

	i8 v1416 = (i8)(intptr_t)(ws+4280);
	i1 v1417 = *(i1*)(intptr_t)v1416;
	i1 v1418 = (i1)+0;
	if (v1417==v1418) goto c02_0145; else goto c02_0144;

c02_0144:;

	i1 v1419 = (i1)+48;
	i8 v1420 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1420)(v1419);

	i8 v1421 = (i8)(intptr_t)(ws+4280);
	i1 v1422 = *(i1*)(intptr_t)v1421;
	i1 v1423 = v1422+(-1);
	i8 v1424 = (i8)(intptr_t)(ws+4280);
	*(i1*)(intptr_t)v1424 = v1423;

	goto c02_0142;

c02_0145:;

	i8 v1425 = (i8)(intptr_t)(ws+4261);
	i8 v1426 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v1426)(v1425);

endsub:;
}
	void f99_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+4224 length ws+1
void f100_E_h8(i1 p1427 /* value */) {
	*(i1*)(intptr_t)(ws+4224) = p1427; /*value */

	i8 v1428 = (i8)(intptr_t)(ws+4224);
	i1 v1429 = *(i1*)(intptr_t)v1428;
	i4 v1430 = v1429;
	i1 v1431 = (i1)+2;
	i8 v1432 = (i8)(intptr_t)(f99_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1432)(v1431, v1430);

endsub:;
}
	void f99_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+4248 length ws+2
void f101_E_h16(i2 p1433 /* value */) {
	*(i2*)(intptr_t)(ws+4248) = p1433; /*value */

	i8 v1434 = (i8)(intptr_t)(ws+4248);
	i2 v1435 = *(i2*)(intptr_t)v1434;
	i4 v1436 = v1435;
	i1 v1437 = (i1)+4;
	i8 v1438 = (i8)(intptr_t)(f99_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1438)(v1437, v1436);

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f101_E_h16(i2 /* value */);

// E_labelref workspace at ws+4232 length ws+2
void f103_E_labelref(i2 p1444 /* labelid */) {
	*(i2*)(intptr_t)(ws+4232) = p1444; /*labelid */

	i1 v1445 = (i1)+3;
	i8 v1446 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1446)(v1445);

	i8 v1447 = (i8)(intptr_t)(ws+4232);
	i2 v1448 = *(i2*)(intptr_t)v1447;
	i8 v1449 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1449)(v1448);

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);

// E_subref workspace at ws+4224 length ws+8
void f104_E_subref(i8 p1450 /* subr */) {
	*(i8*)(intptr_t)(ws+4224) = p1450; /*subr */

	i8 v1451 = (i8)(intptr_t)(ws+4224);
	i8 v1452 = *(i8*)(intptr_t)v1451;
	i8 v1453 = (i8)(intptr_t)(ws+40);
	i8 v1454 = *(i8*)(intptr_t)v1453;
	if (v1452==v1454) goto c02_0149; else goto c02_014a;

c02_0149:;

	i1 v1455 = (i1)+4;
	i8 v1456 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1456)(v1455);

	goto c02_0146;

c02_014a:;

	i1 v1457 = (i1)+1;
	i8 v1458 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1458)(v1457);

	i8 v1459 = (i8)(intptr_t)(ws+4224);
	i8 v1460 = *(i8*)(intptr_t)v1459;
	i8 v1461 = v1460+(+8);
	i2 v1462 = *(i2*)(intptr_t)v1461;
	i8 v1463 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1463)(v1462);

c02_0146:;

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
const i1 c02_s00c4[] = { 0x5f,0x73,0 };
	void f92_E(i8 /* text */);
	void f101_E_h16(i2 /* value */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);

// E_wsref workspace at ws+4240 length ws+6
void f105_E_wsref(i2 p1464 /* off */, i1 p1465 /* wsid */, i2 p1466 /* id */) {
	*(i2*)(intptr_t)(ws+4240) = p1466; /*id */
	*(i1*)(intptr_t)(ws+4242) = p1465; /*wsid */
	*(i2*)(intptr_t)(ws+4244) = p1464; /*off */

	i8 v1467 = (i8)(intptr_t)(ws+4242);
	i1 v1468 = *(i1*)(intptr_t)v1467;
	i1 v1469 = (i1)+255;
	if (v1468==v1469) goto c02_014e; else goto c02_014f;

c02_014e:;

	i1 v1470 = (i1)+1;
	i8 v1471 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1471)(v1470);

	i8 v1472 = (i8)(intptr_t)(ws+4240);
	i2 v1473 = *(i2*)(intptr_t)v1472;
	i8 v1474 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1474)(v1473);

	i8 v1475 = (i8)(intptr_t)c02_s00c4;
	i8 v1476 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v1476)(v1475);

	i8 v1477 = (i8)(intptr_t)(ws+4244);
	i2 v1478 = *(i2*)(intptr_t)v1477;
	i8 v1479 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1479)(v1478);

	goto c02_014b;

c02_014f:;

	i1 v1480 = (i1)+2;
	i8 v1481 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1481)(v1480);

	i8 v1482 = (i8)(intptr_t)(ws+4240);
	i2 v1483 = *(i2*)(intptr_t)v1482;
	i8 v1484 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1484)(v1483);

	i8 v1485 = (i8)(intptr_t)(ws+4242);
	i1 v1486 = *(i1*)(intptr_t)v1485;
	i8 v1487 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1487)(v1486);

	i8 v1488 = (i8)(intptr_t)(ws+4244);
	i2 v1489 = *(i2*)(intptr_t)v1488;
	i8 v1490 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1490)(v1489);

c02_014b:;

endsub:;
}
	void f82_FlushCurrentStream(i1 /* close */);

// EmitterOpenStream workspace at ws+4224 length ws+8
void f106_EmitterOpenStream(i8 p1491 /* subr */) {
	*(i8*)(intptr_t)(ws+4224) = p1491; /*subr */

	i8 v1492 = (i8)(intptr_t)(ws+2792);
	i8 v1493 = *(i8*)(intptr_t)v1492;
	i8 v1494 = (i8)+0;
	if (v1493==v1494) goto c02_0153; else goto c02_0154;

c02_0153:;

	i8 v1495 = (i8)(intptr_t)(ws+2776);
	i8 v1496 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1496 = v1495;

	i1 v1497 = (i1)+0;
	i8 v1498 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1498 = v1497;

	goto c02_0150;

c02_0154:;

	i1 v1499 = (i1)+0;
	i8 v1500 = (i8)(intptr_t)(f82_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v1500)(v1499);

	i8 v1501 = (i8)(intptr_t)(ws+2792);
	i8 v1502 = *(i8*)(intptr_t)v1501;
	i8 v1503 = v1502+(+2);
	i8 v1504 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1504 = v1503;

	i8 v1505 = (i8)(intptr_t)(ws+2800);
	i1 v1506 = *(i1*)(intptr_t)v1505;
	i1 v1507 = v1506+(+1);
	i8 v1508 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1508 = v1507;

c02_0150:;

	i8 v1509 = (i8)(intptr_t)(ws+4224);
	i8 v1510 = *(i8*)(intptr_t)v1509;
	i8 v1511 = v1510+(+8);
	i2 v1512 = *(i2*)(intptr_t)v1511;
	i8 v1513 = (i8)(intptr_t)(ws+2792);
	i8 v1514 = *(i8*)(intptr_t)v1513;
	*(i2*)(intptr_t)v1514 = v1512;

endsub:;
}
	void f82_FlushCurrentStream(i1 /* close */);

// EmitterCloseStream workspace at ws+4224 length ws+0
void f107_EmitterCloseStream(void) {

	i1 v1515 = (i1)+128;
	i8 v1516 = (i8)(intptr_t)(f82_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v1516)(v1515);

	i8 v1517 = (i8)(intptr_t)(ws+2792);
	i8 v1518 = *(i8*)(intptr_t)v1517;
	i8 v1519 = (i8)(intptr_t)(ws+2776);
	if (v1518==v1519) goto c02_0158; else goto c02_0159;

c02_0158:;

	i8 v1520 = (i8)+0;
	i8 v1521 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1521 = v1520;

	goto c02_0155;

c02_0159:;

	i8 v1522 = (i8)(intptr_t)(ws+2792);
	i8 v1523 = *(i8*)(intptr_t)v1522;
	i8 v1524 = v1523+(-2);
	i8 v1525 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1525 = v1524;

	i8 v1526 = (i8)(intptr_t)(ws+2800);
	i1 v1527 = *(i1*)(intptr_t)v1526;
	i1 v1528 = v1527+(-1);
	i8 v1529 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1529 = v1528;

c02_0155:;

endsub:;
}
	void f54_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s00c5[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f68_SimpleError(i8 /* s */);

// EmitterOpenfile workspace at ws+3984 length ws+8
void f108_EmitterOpenfile(i8 p1530 /* filename */) {
	*(i8*)(intptr_t)(ws+3984) = p1530; /*filename */

	i8 v1531 = (i8)(intptr_t)(ws+200);
	i8 v1532 = (i8)(intptr_t)(ws+3984);
	i8 v1533 = *(i8*)(intptr_t)v1532;
	i8 v1534 = (i8)(intptr_t)(f54_FCBOpenOut);
	i1 v1535;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1534)(&v1535, v1533, v1531);
	i1 v1536 = (i1)+0;
	if (v1535==v1536) goto c02_015e; else goto c02_015d;

c02_015d:;

	i8 v1537 = (i8)(intptr_t)c02_s00c5;
	i8 v1538 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1538)(v1537);

c02_015e:;

c02_015a:;

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s00c6[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f68_SimpleError(i8 /* s */);

// EmitterClosefile workspace at ws+3984 length ws+0
void f109_EmitterClosefile(void) {

	i1 v1539 = (i1)+69;
	i8 v1540 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1540)(v1539);

	i2 v1541 = (i2)+0;
	i8 v1542 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1542)(v1541);

	i8 v1543 = (i8)(intptr_t)(ws+200);
	i8 v1544 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1545;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1544)(&v1545, v1543);
	i1 v1546 = (i1)+0;
	if (v1545==v1546) goto c02_0163; else goto c02_0162;

c02_0162:;

	i8 v1547 = (i8)(intptr_t)c02_s00c6;
	i8 v1548 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1548)(v1547);

c02_0163:;

c02_015f:;

endsub:;
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);
	void f59_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// EmitterDeclareSubroutine workspace at ws+4008 length ws+10
void f110_EmitterDeclareSubroutine(i8 p1549 /* subr */) {
	*(i8*)(intptr_t)(ws+4008) = p1549; /*subr */

	i8 v1550 = (i8)(intptr_t)(ws+4008);
	i8 v1551 = *(i8*)(intptr_t)v1550;
	i8 v1552 = *(i8*)(intptr_t)v1551;
	i8 v1553 = (i8)(intptr_t)(f29_StrLen);
	i8 v1554;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1553)(&v1554, v1552);
	i2 v1555 = v1554;
	i8 v1556 = (i8)(intptr_t)(ws+4016);
	*(i2*)(intptr_t)v1556 = v1555;

	i1 v1557 = (i1)+78;
	i8 v1558 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1558)(v1557);

	i8 v1559 = (i8)(intptr_t)(ws+4016);
	i2 v1560 = *(i2*)(intptr_t)v1559;
	i2 v1561 = v1560+(+2);
	i8 v1562 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1562)(v1561);

	i8 v1563 = (i8)(intptr_t)(ws+4008);
	i8 v1564 = *(i8*)(intptr_t)v1563;
	i8 v1565 = v1564+(+8);
	i2 v1566 = *(i2*)(intptr_t)v1565;
	i8 v1567 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1567)(v1566);

	i8 v1568 = (i8)(intptr_t)(ws+200);
	i8 v1569 = (i8)(intptr_t)(ws+4008);
	i8 v1570 = *(i8*)(intptr_t)v1569;
	i8 v1571 = *(i8*)(intptr_t)v1570;
	i8 v1572 = (i8)(intptr_t)(ws+4016);
	i2 v1573 = *(i2*)(intptr_t)v1572;
	i8 v1574 = v1573;
	i8 v1575 = (i8)(intptr_t)(f59_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v1575)(v1574, v1571, v1568);

endsub:;
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);
	void f59_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// EmitterDeclareExternalSubroutine workspace at ws+4016 length ws+18
void f111_EmitterDeclareExternalSubroutine(i8 p1576 /* external */, i2 p1577 /* subrid */) {
	*(i2*)(intptr_t)(ws+4016) = p1577; /*subrid */
	*(i8*)(intptr_t)(ws+4024) = p1576; /*external */

	i8 v1578 = (i8)(intptr_t)(ws+4024);
	i8 v1579 = *(i8*)(intptr_t)v1578;
	i8 v1580 = (i8)(intptr_t)(f29_StrLen);
	i8 v1581;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1580)(&v1581, v1579);
	i2 v1582 = v1581;
	i8 v1583 = (i8)(intptr_t)(ws+4032);
	*(i2*)(intptr_t)v1583 = v1582;

	i1 v1584 = (i1)+88;
	i8 v1585 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1585)(v1584);

	i8 v1586 = (i8)(intptr_t)(ws+4032);
	i2 v1587 = *(i2*)(intptr_t)v1586;
	i2 v1588 = v1587+(+2);
	i8 v1589 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1589)(v1588);

	i8 v1590 = (i8)(intptr_t)(ws+4016);
	i2 v1591 = *(i2*)(intptr_t)v1590;
	i8 v1592 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1592)(v1591);

	i8 v1593 = (i8)(intptr_t)(ws+200);
	i8 v1594 = (i8)(intptr_t)(ws+4024);
	i8 v1595 = *(i8*)(intptr_t)v1594;
	i8 v1596 = (i8)(intptr_t)(ws+4032);
	i2 v1597 = *(i2*)(intptr_t)v1596;
	i8 v1598 = v1597;
	i8 v1599 = (i8)(intptr_t)(f59_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v1599)(v1598, v1595, v1593);

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);

// EmitterReferenceSubroutineById workspace at ws+4008 length ws+4
void f112_EmitterReferenceSubroutineById(i2 p1600 /* used */, i2 p1601 /* user */) {
	*(i2*)(intptr_t)(ws+4008) = p1601; /*user */
	*(i2*)(intptr_t)(ws+4010) = p1600; /*used */

	i1 v1602 = (i1)+82;
	i8 v1603 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1603)(v1602);

	i2 v1604 = (i2)+4;
	i8 v1605 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1605)(v1604);

	i8 v1606 = (i8)(intptr_t)(ws+4008);
	i2 v1607 = *(i2*)(intptr_t)v1606;
	i8 v1608 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1608)(v1607);

	i8 v1609 = (i8)(intptr_t)(ws+4010);
	i2 v1610 = *(i2*)(intptr_t)v1609;
	i8 v1611 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1611)(v1610);

endsub:;
}
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);
	void f81_WriteB16(i2 /* w */);
	void f80_WriteB8(i1 /* b */);
	void f81_WriteB16(i2 /* w */);

// EmitterDeclareWorkspace workspace at ws+4008 length ws+6
void f114_EmitterDeclareWorkspace(i2 p1623 /* workspace */, i1 p1624 /* wid */, i2 p1625 /* subrid */) {
	*(i2*)(intptr_t)(ws+4008) = p1625; /*subrid */
	*(i1*)(intptr_t)(ws+4010) = p1624; /*wid */
	*(i2*)(intptr_t)(ws+4012) = p1623; /*workspace */

	i1 v1626 = (i1)+87;
	i8 v1627 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1627)(v1626);

	i2 v1628 = (i2)+5;
	i8 v1629 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1629)(v1628);

	i8 v1630 = (i8)(intptr_t)(ws+4008);
	i2 v1631 = *(i2*)(intptr_t)v1630;
	i8 v1632 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1632)(v1631);

	i8 v1633 = (i8)(intptr_t)(ws+4010);
	i1 v1634 = *(i1*)(intptr_t)v1633;
	i8 v1635 = (i8)(intptr_t)(f80_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1635)(v1634);

	i8 v1636 = (i8)(intptr_t)(ws+4012);
	i2 v1637 = *(i2*)(intptr_t)v1636;
	i8 v1638 = (i8)(intptr_t)(f81_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1638)(v1637);

endsub:;
}
	void f46_FCBGetChar(i1* /* b */, i8 /* fcb */);

// I_b8 workspace at ws+4096 length ws+1
void f115_I_b8(i1* p1639 /* b */) {

	i8 v1640 = (i8)(intptr_t)(ws+2804);
	i8 v1641 = (i8)(intptr_t)(f46_FCBGetChar);
	i1 v1642;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v1641)(&v1642, v1640);
	i8 v1643 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v1643 = v1642;

endsub:;
	*p1639 = *(i1*)(intptr_t)(ws+4096);
}
	void f115_I_b8(i1* /* b */);
	void f115_I_b8(i1* /* b */);

// I_b16 workspace at ws+4080 length ws+2
void f116_I_b16(i2* p1644 /* b */) {

	i8 v1645 = (i8)(intptr_t)(f115_I_b8);
	i1 v1646;

	((void(*)(i1* /* b */))(intptr_t)v1645)(&v1646);
	i2 v1647 = v1646;
	i8 v1648 = (i8)(intptr_t)(ws+4080);
	*(i2*)(intptr_t)v1648 = v1647;

	i8 v1649 = (i8)(intptr_t)(ws+4080);
	i2 v1650 = *(i2*)(intptr_t)v1649;
	i8 v1651 = (i8)(intptr_t)(f115_I_b8);
	i1 v1652;

	((void(*)(i1* /* b */))(intptr_t)v1651)(&v1652);
	i2 v1653 = v1652;
	i1 v1654 = (i1)+8;
	i2 v1655 = ((i2)v1653)<<v1654;
	i2 v1656 = v1650|v1655;
	i8 v1657 = (i8)(intptr_t)(ws+4080);
	*(i2*)(intptr_t)v1657 = v1656;

endsub:;
	*p1644 = *(i2*)(intptr_t)(ws+4080);
}
	void f116_I_b16(i2* /* b */);
	void f116_I_b16(i2* /* b */);

// I_b32 workspace at ws+4072 length ws+4
void f117_I_b32(i4* p1658 /* b */) {

	i8 v1659 = (i8)(intptr_t)(f116_I_b16);
	i2 v1660;

	((void(*)(i2* /* b */))(intptr_t)v1659)(&v1660);
	i4 v1661 = v1660;
	i8 v1662 = (i8)(intptr_t)(ws+4072);
	*(i4*)(intptr_t)v1662 = v1661;

	i8 v1663 = (i8)(intptr_t)(ws+4072);
	i4 v1664 = *(i4*)(intptr_t)v1663;
	i8 v1665 = (i8)(intptr_t)(f116_I_b16);
	i2 v1666;

	((void(*)(i2* /* b */))(intptr_t)v1665)(&v1666);
	i4 v1667 = v1666;
	i1 v1668 = (i1)+16;
	i4 v1669 = ((i4)v1667)<<v1668;
	i4 v1670 = v1664|v1669;
	i8 v1671 = (i8)(intptr_t)(ws+4072);
	*(i4*)(intptr_t)v1671 = v1670;

endsub:;
	*p1658 = *(i4*)(intptr_t)(ws+4072);
}
	void f116_I_b16(i2* /* b */);

// I_bsize workspace at ws+4072 length ws+2
void f118_I_bsize(i2* p1672 /* s */) {

	i8 v1673 = (i8)(intptr_t)(f116_I_b16);
	i2 v1674;

	((void(*)(i2* /* b */))(intptr_t)v1673)(&v1674);
	i8 v1675 = (i8)(intptr_t)(ws+4072);
	*(i2*)(intptr_t)v1675 = v1674;

endsub:;
	*p1672 = *(i2*)(intptr_t)(ws+4072);
}
	void f115_I_b8(i1* /* b */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f115_I_b8(i1* /* b */);

// I_countedstring workspace at ws+4072 length ws+24
void f119_I_countedstring(i8* p1676 /* s */) {

	i8 v1677 = (i8)(intptr_t)(f115_I_b8);
	i1 v1678;

	((void(*)(i1* /* b */))(intptr_t)v1677)(&v1678);
	i8 v1679 = (i8)(intptr_t)(ws+4080);
	*(i1*)(intptr_t)v1679 = v1678;

	i8 v1680 = (i8)(intptr_t)(ws+4080);
	i1 v1681 = *(i1*)(intptr_t)v1680;
	i1 v1682 = v1681+(+1);
	i8 v1683 = v1682;
	i8 v1684 = (i8)(intptr_t)(f33_Alloc);
	i8 v1685;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1684)(&v1685, v1683);
	i8 v1686 = (i8)(intptr_t)(ws+4072);
	*(i8*)(intptr_t)v1686 = v1685;

	i8 v1687 = (i8)(intptr_t)(ws+4072);
	i8 v1688 = *(i8*)(intptr_t)v1687;
	i8 v1689 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v1689 = v1688;

c02_0166:;

	i8 v1690 = (i8)(intptr_t)(ws+4080);
	i1 v1691 = *(i1*)(intptr_t)v1690;
	i1 v1692 = (i1)+0;
	if (v1691==v1692) goto c02_0169; else goto c02_0168;

c02_0168:;

	i8 v1693 = (i8)(intptr_t)(f115_I_b8);
	i1 v1694;

	((void(*)(i1* /* b */))(intptr_t)v1693)(&v1694);
	i8 v1695 = (i8)(intptr_t)(ws+4088);
	i8 v1696 = *(i8*)(intptr_t)v1695;
	*(i1*)(intptr_t)v1696 = v1694;

	i8 v1697 = (i8)(intptr_t)(ws+4088);
	i8 v1698 = *(i8*)(intptr_t)v1697;
	i8 v1699 = v1698+(+1);
	i8 v1700 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v1700 = v1699;

	i8 v1701 = (i8)(intptr_t)(ws+4080);
	i1 v1702 = *(i1*)(intptr_t)v1701;
	i1 v1703 = v1702+(-1);
	i8 v1704 = (i8)(intptr_t)(ws+4080);
	*(i1*)(intptr_t)v1704 = v1703;

	goto c02_0166;

c02_0169:;

	i1 v1705 = (i1)+0;
	i8 v1706 = (i8)(intptr_t)(ws+4088);
	i8 v1707 = *(i8*)(intptr_t)v1706;
	*(i1*)(intptr_t)v1707 = v1705;

endsub:;
	*p1676 = *(i8*)(intptr_t)(ws+4072);
}
	void f52_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f69_CannotOpen(i8 /* filename */);

// InputterOpenfile workspace at ws+3984 length ws+8
void f120_InputterOpenfile(i8 p1708 /* filename */) {
	*(i8*)(intptr_t)(ws+3984) = p1708; /*filename */

	i8 v1709 = (i8)(intptr_t)(ws+2804);
	i8 v1710 = (i8)(intptr_t)(ws+3984);
	i8 v1711 = *(i8*)(intptr_t)v1710;
	i8 v1712 = (i8)(intptr_t)(f52_FCBOpenIn);
	i1 v1713;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1712)(&v1713, v1711, v1709);
	i1 v1714 = (i1)+0;
	if (v1713==v1714) goto c02_016e; else goto c02_016d;

c02_016d:;

	i8 v1715 = (i8)(intptr_t)(ws+3984);
	i8 v1716 = *(i8*)(intptr_t)v1715;
	i8 v1717 = (i8)(intptr_t)(f69_CannotOpen);

	((void(*)(i8 /* filename */))(intptr_t)v1717)(v1716);

c02_016e:;

c02_016a:;

endsub:;
}
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);

// InputterClosefile workspace at ws+3984 length ws+1
void f121_InputterClosefile(void) {

	i8 v1718 = (i8)(intptr_t)(ws+2804);
	i8 v1719 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1720;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1719)(&v1720, v1718);
	i8 v1721 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v1721 = v1720;

endsub:;
}
	void f117_I_b32(i4* /* b */);

// ReadMid0 workspace at ws+4072 length ws+0
void f122_ReadMid0(i8 p1722 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1722; /*node */

	i8 v1723 = (i8)(intptr_t)(f117_I_b32);
	i4 v1724;

	((void(*)(i4* /* b */))(intptr_t)v1723)(&v1724);
	i8 v1725 = (i8)(intptr_t)(ws+4064);
	i8 v1726 = *(i8*)(intptr_t)v1725;
	*(i4*)(intptr_t)v1726 = v1724;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);
	void f115_I_b8(i1* /* b */);

// ReadMid1 workspace at ws+4072 length ws+0
void f123_ReadMid1(i8 p1727 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1727; /*node */

	i8 v1728 = (i8)(intptr_t)(f116_I_b16);
	i2 v1729;

	((void(*)(i2* /* b */))(intptr_t)v1728)(&v1729);
	i8 v1730 = (i8)(intptr_t)(f65_FindSubr);
	i8 v1731;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1730)(&v1731, v1729);
	i8 v1732 = (i8)(intptr_t)(ws+4064);
	i8 v1733 = *(i8*)(intptr_t)v1732;
	*(i8*)(intptr_t)v1733 = v1731;

	i8 v1734 = (i8)(intptr_t)(f115_I_b8);
	i1 v1735;

	((void(*)(i1* /* b */))(intptr_t)v1734)(&v1735);
	i8 v1736 = (i8)(intptr_t)(ws+4064);
	i8 v1737 = *(i8*)(intptr_t)v1736;
	i8 v1738 = v1737+(+10);
	*(i1*)(intptr_t)v1738 = v1735;

	i8 v1739 = (i8)(intptr_t)(f118_I_bsize);
	i2 v1740;

	((void(*)(i2* /* s */))(intptr_t)v1739)(&v1740);
	i8 v1741 = (i8)(intptr_t)(ws+4064);
	i8 v1742 = *(i8*)(intptr_t)v1741;
	i8 v1743 = v1742+(+12);
	*(i2*)(intptr_t)v1743 = v1740;

	i8 v1744 = (i8)(intptr_t)(f115_I_b8);
	i1 v1745;

	((void(*)(i1* /* b */))(intptr_t)v1744)(&v1745);
	i8 v1746 = (i8)(intptr_t)(ws+4064);
	i8 v1747 = *(i8*)(intptr_t)v1746;
	i8 v1748 = v1747+(+14);
	*(i1*)(intptr_t)v1748 = v1745;

endsub:;
}
	void f116_I_b16(i2* /* b */);

// ReadMid2 workspace at ws+4072 length ws+0
void f124_ReadMid2(i8 p1749 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1749; /*node */

	i8 v1750 = (i8)(intptr_t)(f116_I_b16);
	i2 v1751;

	((void(*)(i2* /* b */))(intptr_t)v1750)(&v1751);
	i8 v1752 = (i8)(intptr_t)(ws+4064);
	i8 v1753 = *(i8*)(intptr_t)v1752;
	*(i2*)(intptr_t)v1753 = v1751;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);

// ReadMid3 workspace at ws+4072 length ws+0
void f125_ReadMid3(i8 p1754 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1754; /*node */

	i8 v1755 = (i8)(intptr_t)(f116_I_b16);
	i2 v1756;

	((void(*)(i2* /* b */))(intptr_t)v1755)(&v1756);
	i8 v1757 = (i8)(intptr_t)(f65_FindSubr);
	i8 v1758;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1757)(&v1758, v1756);
	i8 v1759 = (i8)(intptr_t)(ws+4064);
	i8 v1760 = *(i8*)(intptr_t)v1759;
	*(i8*)(intptr_t)v1760 = v1758;

	i8 v1761 = (i8)(intptr_t)(f115_I_b8);
	i1 v1762;

	((void(*)(i1* /* b */))(intptr_t)v1761)(&v1762);
	i8 v1763 = (i8)(intptr_t)(ws+4064);
	i8 v1764 = *(i8*)(intptr_t)v1763;
	i8 v1765 = v1764+(+8);
	*(i1*)(intptr_t)v1765 = v1762;

endsub:;
}
	void f115_I_b8(i1* /* b */);

// ReadMid4 workspace at ws+4072 length ws+0
void f126_ReadMid4(i8 p1766 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1766; /*node */

	i8 v1767 = (i8)(intptr_t)(f115_I_b8);
	i1 v1768;

	((void(*)(i1* /* b */))(intptr_t)v1767)(&v1768);
	i8 v1769 = (i8)(intptr_t)(ws+4064);
	i8 v1770 = *(i8*)(intptr_t)v1769;
	*(i1*)(intptr_t)v1770 = v1768;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);

// ReadMid5 workspace at ws+4072 length ws+0
void f127_ReadMid5(i8 p1771 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1771; /*node */

	i8 v1772 = (i8)(intptr_t)(f116_I_b16);
	i2 v1773;

	((void(*)(i2* /* b */))(intptr_t)v1772)(&v1773);
	i8 v1774 = (i8)(intptr_t)(f65_FindSubr);
	i8 v1775;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1774)(&v1775, v1773);
	i8 v1776 = (i8)(intptr_t)(ws+4064);
	i8 v1777 = *(i8*)(intptr_t)v1776;
	*(i8*)(intptr_t)v1777 = v1775;

	i8 v1778 = (i8)(intptr_t)(f115_I_b8);
	i1 v1779;

	((void(*)(i1* /* b */))(intptr_t)v1778)(&v1779);
	i8 v1780 = (i8)(intptr_t)(ws+4064);
	i8 v1781 = *(i8*)(intptr_t)v1780;
	i8 v1782 = v1781+(+10);
	*(i1*)(intptr_t)v1782 = v1779;

	i8 v1783 = (i8)(intptr_t)(f118_I_bsize);
	i2 v1784;

	((void(*)(i2* /* s */))(intptr_t)v1783)(&v1784);
	i8 v1785 = (i8)(intptr_t)(ws+4064);
	i8 v1786 = *(i8*)(intptr_t)v1785;
	i8 v1787 = v1786+(+12);
	*(i2*)(intptr_t)v1787 = v1784;

	i8 v1788 = (i8)(intptr_t)(f115_I_b8);
	i1 v1789;

	((void(*)(i1* /* b */))(intptr_t)v1788)(&v1789);
	i8 v1790 = (i8)(intptr_t)(ws+4064);
	i8 v1791 = *(i8*)(intptr_t)v1790;
	i8 v1792 = v1791+(+14);
	*(i1*)(intptr_t)v1792 = v1789;

	i8 v1793 = (i8)(intptr_t)(f118_I_bsize);
	i2 v1794;

	((void(*)(i2* /* s */))(intptr_t)v1793)(&v1794);
	i8 v1795 = (i8)(intptr_t)(ws+4064);
	i8 v1796 = *(i8*)(intptr_t)v1795;
	i8 v1797 = v1796+(+16);
	*(i2*)(intptr_t)v1797 = v1794;

endsub:;
}

// ReadMid6 workspace at ws+4072 length ws+0
void f128_ReadMid6(i8 p1798 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1798; /*node */

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);

// ReadMid7 workspace at ws+4072 length ws+0
void f129_ReadMid7(i8 p1799 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1799; /*node */

	i8 v1800 = (i8)(intptr_t)(f116_I_b16);
	i2 v1801;

	((void(*)(i2* /* b */))(intptr_t)v1800)(&v1801);
	i8 v1802 = (i8)(intptr_t)(f65_FindSubr);
	i8 v1803;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1802)(&v1803, v1801);
	i8 v1804 = (i8)(intptr_t)(ws+4064);
	i8 v1805 = *(i8*)(intptr_t)v1804;
	*(i8*)(intptr_t)v1805 = v1803;

endsub:;
}
	void f117_I_b32(i4* /* b */);
	void f116_I_b16(i2* /* b */);

// ReadMid8 workspace at ws+4072 length ws+0
void f130_ReadMid8(i8 p1806 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1806; /*node */

	i8 v1807 = (i8)(intptr_t)(f117_I_b32);
	i4 v1808;

	((void(*)(i4* /* b */))(intptr_t)v1807)(&v1808);
	i8 v1809 = (i8)(intptr_t)(ws+4064);
	i8 v1810 = *(i8*)(intptr_t)v1809;
	*(i4*)(intptr_t)v1810 = v1808;

	i8 v1811 = (i8)(intptr_t)(f116_I_b16);
	i2 v1812;

	((void(*)(i2* /* b */))(intptr_t)v1811)(&v1812);
	i8 v1813 = (i8)(intptr_t)(ws+4064);
	i8 v1814 = *(i8*)(intptr_t)v1813;
	i8 v1815 = v1814+(+4);
	*(i2*)(intptr_t)v1815 = v1812;

endsub:;
}
	void f119_I_countedstring(i8* /* s */);

// ReadMid9 workspace at ws+4072 length ws+0
void f131_ReadMid9(i8 p1816 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1816; /*node */

	i8 v1817 = (i8)(intptr_t)(f119_I_countedstring);
	i8 v1818;

	((void(*)(i8* /* s */))(intptr_t)v1817)(&v1818);
	i8 v1819 = (i8)(intptr_t)(ws+4064);
	i8 v1820 = *(i8*)(intptr_t)v1819;
	*(i8*)(intptr_t)v1820 = v1818;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f116_I_b16(i2* /* b */);
	void f116_I_b16(i2* /* b */);
	void f115_I_b8(i1* /* b */);

// ReadMid10 workspace at ws+4072 length ws+0
void f132_ReadMid10(i8 p1821 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p1821; /*node */

	i8 v1822 = (i8)(intptr_t)(f116_I_b16);
	i2 v1823;

	((void(*)(i2* /* b */))(intptr_t)v1822)(&v1823);
	i8 v1824 = (i8)(intptr_t)(ws+4064);
	i8 v1825 = *(i8*)(intptr_t)v1824;
	*(i2*)(intptr_t)v1825 = v1823;

	i8 v1826 = (i8)(intptr_t)(f116_I_b16);
	i2 v1827;

	((void(*)(i2* /* b */))(intptr_t)v1826)(&v1827);
	i8 v1828 = (i8)(intptr_t)(ws+4064);
	i8 v1829 = *(i8*)(intptr_t)v1828;
	i8 v1830 = v1829+(+2);
	*(i2*)(intptr_t)v1830 = v1827;

	i8 v1831 = (i8)(intptr_t)(f116_I_b16);
	i2 v1832;

	((void(*)(i2* /* b */))(intptr_t)v1831)(&v1832);
	i8 v1833 = (i8)(intptr_t)(ws+4064);
	i8 v1834 = *(i8*)(intptr_t)v1833;
	i8 v1835 = v1834+(+4);
	*(i2*)(intptr_t)v1835 = v1832;

	i8 v1836 = (i8)(intptr_t)(f115_I_b8);
	i1 v1837;

	((void(*)(i1* /* b */))(intptr_t)v1836)(&v1837);
	i8 v1838 = (i8)(intptr_t)(ws+4064);
	i8 v1839 = *(i8*)(intptr_t)v1838;
	i8 v1840 = v1839+(+6);
	*(i1*)(intptr_t)v1840 = v1837;

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








	{ .i1 = { 0x06,0x06,0x06,0x07,0x07,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x09,0x05,0x07,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x09,0x01,0x07,0x00,0x06,0x06}},








	{ .i1 = { 0x06,0x02,0x02,0x06,0x07,0x07,0x07,0x07}},








	{ .i1 = { 0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x00,0x09,0x05,0x07}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x08,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x04,0x04,0x04,0x04,0x04,0x04}},








	{ .i1 = { 0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04}},








	{ .i1 = { 0x04,0x04,0x04,0x04,0x04,0x04,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},


	{ .i1 = { 0x06}},
};
static data f3___main_s0171[] = {








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x02,0x00,0x00,0x00,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},


	{ .i1 = { 0x02}},
};
	void f23_MemZero(i8 /* size */, i8 /* ptr */);
	void f23_MemZero(i8 /* size */, i8 /* ptr */);

// AllocSubrId workspace at ws+4048 length ws+2
void f146_AllocSubrId(i2* p2304 /* id */) {

	i8 v2305 = (i8)(intptr_t)(ws+50);
	i2 v2306 = *(i2*)(intptr_t)v2305;
	i8 v2307 = (i8)(intptr_t)(ws+4048);
	*(i2*)(intptr_t)v2307 = v2306;

	i8 v2308 = (i8)(intptr_t)(ws+50);
	i2 v2309 = *(i2*)(intptr_t)v2308;
	i2 v2310 = v2309+(+1);
	i8 v2311 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v2311 = v2310;

endsub:;
	*p2304 = *(i2*)(intptr_t)(ws+4048);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f70_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewInstruction workspace at ws+4088 length ws+8
void f147_AllocNewInstruction(i8* p2314 /* insn */) {

	i8 v2315 = (i8)(intptr_t)(ws+3696);
	i8 v2316 = *(i8*)(intptr_t)v2315;
	i8 v2317 = (i8)+0;
	if (v2316==v2317) goto c02_0215; else goto c02_0214;

c02_0214:;

	i8 v2318 = (i8)(intptr_t)(ws+3696);
	i8 v2319 = *(i8*)(intptr_t)v2318;
	i8 v2320 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v2320 = v2319;

	i8 v2321 = (i8)(intptr_t)(ws+3696);
	i8 v2322 = *(i8*)(intptr_t)v2321;
	i8 v2323 = *(i8*)(intptr_t)v2322;
	i8 v2324 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2324 = v2323;

	i8 v2325 = (i8)(intptr_t)(ws+4088);
	i8 v2326 = *(i8*)(intptr_t)v2325;
	i1 v2327 = (i1)+0;
	i8 v2328 = (i8)+87;
	i8 v2329 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v2329)(v2328, v2327, v2326);

	goto c02_0211;

c02_0215:;

	i8 v2330 = (i8)+87;
	i8 v2331 = (i8)(intptr_t)(f70_InternalAlloc);
	i8 v2332;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v2331)(&v2332, v2330);
	i8 v2333 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v2333 = v2332;

c02_0211:;

endsub:;
	*p2314 = *(i8*)(intptr_t)(ws+4088);
}

// FreeInstruction workspace at ws+4096 length ws+8
void f148_FreeInstruction(i8 p2334 /* insn */) {
	*(i8*)(intptr_t)(ws+4096) = p2334; /*insn */

	i8 v2335 = (i8)(intptr_t)(ws+3696);
	i8 v2336 = *(i8*)(intptr_t)v2335;
	i8 v2337 = (i8)(intptr_t)(ws+4096);
	i8 v2338 = *(i8*)(intptr_t)v2337;
	*(i8*)(intptr_t)v2338 = v2336;

	i8 v2339 = (i8)(intptr_t)(ws+4096);
	i8 v2340 = *(i8*)(intptr_t)v2339;
	i8 v2341 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2341 = v2340;

endsub:;
}
	void f34_Free(i8 /* block */);

// PurgeAllFreeInstructions workspace at ws+4216 length ws+8
void f72_PurgeAllFreeInstructions(void) {

c02_0218:;

	i8 v2342 = (i8)(intptr_t)(ws+3696);
	i8 v2343 = *(i8*)(intptr_t)v2342;
	i8 v2344 = (i8)+0;
	if (v2343==v2344) goto c02_021b; else goto c02_021a;

c02_021a:;

	i8 v2345 = (i8)(intptr_t)(ws+3696);
	i8 v2346 = *(i8*)(intptr_t)v2345;
	i8 v2347 = (i8)(intptr_t)(ws+4216);
	*(i8*)(intptr_t)v2347 = v2346;

	i8 v2348 = (i8)(intptr_t)(ws+3696);
	i8 v2349 = *(i8*)(intptr_t)v2348;
	i8 v2350 = *(i8*)(intptr_t)v2349;
	i8 v2351 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2351 = v2350;

	i8 v2352 = (i8)(intptr_t)(ws+4216);
	i8 v2353 = *(i8*)(intptr_t)v2352;
	i8 v2354 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v2354)(v2353);

	goto c02_0218;

c02_021b:;

endsub:;
}

// FindConflictingRegisters workspace at ws+4112 length ws+16
void f149_FindConflictingRegisters(i1* p2355 /* conflicting */, i1 p2356 /* inreg */) {
	*(i1*)(intptr_t)(ws+4112) = p2356; /*inreg */

	i1 v2357 = (i1)+0;
	i8 v2358 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v2358 = v2357;

	i8 v2359 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v2360 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v2360 = v2359;

c02_021e:;

	i8 v2361 = (i8)(intptr_t)(ws+4120);
	i8 v2362 = *(i8*)(intptr_t)v2361;
	i8 v2363 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v2362==v2363) goto c02_0221; else goto c02_0220;

c02_0220:;

	i8 v2364 = (i8)(intptr_t)(ws+4120);
	i8 v2365 = *(i8*)(intptr_t)v2364;
	i8 v2366 = v2365+(+8);
	i1 v2367 = *(i1*)(intptr_t)v2366;
	i8 v2368 = (i8)(intptr_t)(ws+4112);
	i1 v2369 = *(i1*)(intptr_t)v2368;
	i1 v2370 = v2367&v2369;
	i1 v2371 = (i1)+0;
	if (v2370==v2371) goto c02_0226; else goto c02_0225;

c02_0225:;

	i8 v2372 = (i8)(intptr_t)(ws+4113);
	i1 v2373 = *(i1*)(intptr_t)v2372;
	i8 v2374 = (i8)(intptr_t)(ws+4120);
	i8 v2375 = *(i8*)(intptr_t)v2374;
	i8 v2376 = v2375+(+9);
	i1 v2377 = *(i1*)(intptr_t)v2376;
	i1 v2378 = v2373|v2377;
	i8 v2379 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v2379 = v2378;

c02_0226:;

c02_0222:;

	i8 v2380 = (i8)(intptr_t)(ws+4120);
	i8 v2381 = *(i8*)(intptr_t)v2380;
	i8 v2382 = v2381+(+16);
	i8 v2383 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v2383 = v2382;

	goto c02_021e;

c02_0221:;

endsub:;
	*p2355 = *(i1*)(intptr_t)(ws+4113);
}

// FindCompatibleRegisters workspace at ws+4112 length ws+16
void f150_FindCompatibleRegisters(i1* p2384 /* compatible */, i1 p2385 /* inreg */) {
	*(i1*)(intptr_t)(ws+4112) = p2385; /*inreg */

	i1 v2386 = (i1)-1;
	i8 v2387 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v2387 = v2386;

	i8 v2388 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v2389 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v2389 = v2388;

c02_0229:;

	i8 v2390 = (i8)(intptr_t)(ws+4120);
	i8 v2391 = *(i8*)(intptr_t)v2390;
	i8 v2392 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v2391==v2392) goto c02_022c; else goto c02_022b;

c02_022b:;

	i8 v2393 = (i8)(intptr_t)(ws+4120);
	i8 v2394 = *(i8*)(intptr_t)v2393;
	i8 v2395 = v2394+(+8);
	i1 v2396 = *(i1*)(intptr_t)v2395;
	i8 v2397 = (i8)(intptr_t)(ws+4112);
	i1 v2398 = *(i1*)(intptr_t)v2397;
	i1 v2399 = v2396&v2398;
	i1 v2400 = (i1)+0;
	if (v2399==v2400) goto c02_0231; else goto c02_0230;

c02_0230:;

	i8 v2401 = (i8)(intptr_t)(ws+4113);
	i1 v2402 = *(i1*)(intptr_t)v2401;
	i8 v2403 = (i8)(intptr_t)(ws+4120);
	i8 v2404 = *(i8*)(intptr_t)v2403;
	i8 v2405 = v2404+(+10);
	i1 v2406 = *(i1*)(intptr_t)v2405;
	i1 v2407 = v2402&v2406;
	i8 v2408 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v2408 = v2407;

c02_0231:;

c02_022d:;

	i8 v2409 = (i8)(intptr_t)(ws+4120);
	i8 v2410 = *(i8*)(intptr_t)v2409;
	i8 v2411 = v2410+(+16);
	i8 v2412 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v2412 = v2411;

	goto c02_0229;

c02_022c:;

endsub:;
	*p2384 = *(i1*)(intptr_t)(ws+4113);
}

// FindFirst workspace at ws+4168 length ws+2
void f151_FindFirst(i1* p2413 /* outreg */, i1 p2414 /* inreg */) {
	*(i1*)(intptr_t)(ws+4168) = p2414; /*inreg */

	i1 v2415 = (i1)+1;
	i8 v2416 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v2416 = v2415;

c02_0234:;

	i8 v2417 = (i8)(intptr_t)(ws+4169);
	i1 v2418 = *(i1*)(intptr_t)v2417;
	i1 v2419 = (i1)+0;
	if (v2418==v2419) goto c02_0237; else goto c02_0236;

c02_0236:;

	i8 v2420 = (i8)(intptr_t)(ws+4168);
	i1 v2421 = *(i1*)(intptr_t)v2420;
	i8 v2422 = (i8)(intptr_t)(ws+4169);
	i1 v2423 = *(i1*)(intptr_t)v2422;
	i1 v2424 = v2421&v2423;
	i1 v2425 = (i1)+0;
	if (v2424==v2425) goto c02_023c; else goto c02_023b;

c02_023b:;

	goto endsub;

c02_023c:;

c02_0238:;

	i8 v2426 = (i8)(intptr_t)(ws+4169);
	i1 v2427 = *(i1*)(intptr_t)v2426;
	i1 v2428 = (i1)+1;
	i1 v2429 = ((i1)v2427)<<v2428;
	i8 v2430 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v2430 = v2429;

	goto c02_0234;

c02_0237:;

	i1 v2431 = (i1)+0;
	i8 v2432 = (i8)(intptr_t)(ws+4169);
	*(i1*)(intptr_t)v2432 = v2431;

endsub:;
	*p2413 = *(i1*)(intptr_t)(ws+4169);
}
const i1 c02_s00c7[] = { 0x28,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00c8[] = { 0x2c,0x20,0 };
	void f92_E(i8 /* text */);

// comma workspace at ws+4264 length ws+0
void f156_comma(void) {

	i8 v2497 = (i8)(intptr_t)(ws+4248);
	i1 v2498 = *(i1*)(intptr_t)v2497;
	i1 v2499 = (i1)+0;
	if (v2498==v2499) goto c02_0251; else goto c02_0252;

c02_0251:;

	i8 v2500 = (i8)(intptr_t)c02_s00c8;
	i8 v2501 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2501)(v2500);

c02_0252:;

c02_024e:;

	i1 v2502 = (i1)+0;
	i8 v2503 = (i8)(intptr_t)(ws+4248);
	*(i1*)(intptr_t)v2503 = v2502;

endsub:;
}
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f156_comma(void);
const i1 c02_s00c9[] = { 0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00ca[] = { 0x2a,0x20,0x2f,0x2a,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s00cb[] = { 0x20,0x2a,0x2f,0 };
	void f92_E(i8 /* text */);
	void f73_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f156_comma(void);
const i1 c02_s00cc[] = { 0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00cd[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s00ce[] = { 0x20,0x2a,0x2f,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00cf[] = { 0x76,0x6f,0x69,0x64,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00d0[] = { 0x29,0 };
	void f92_E(i8 /* text */);

// EmitFunctionSignature workspace at ws+4240 length ws+24
void f155_EmitFunctionSignature(i8 p2492 /* subr */) {
	*(i8*)(intptr_t)(ws+4240) = p2492; /*subr */

	i8 v2493 = (i8)(intptr_t)c02_s00c7;
	i8 v2494 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2494)(v2493);

	i1 v2495 = (i1)+1;
	i8 v2496 = (i8)(intptr_t)(ws+4248);
	*(i1*)(intptr_t)v2496 = v2495;


	i1 v2504 = (i1)+0;
	i8 v2505 = (i8)(intptr_t)(ws+4249);
	*(i1*)(intptr_t)v2505 = v2504;

c02_0255:;

	i8 v2506 = (i8)(intptr_t)(ws+4249);
	i1 v2507 = *(i1*)(intptr_t)v2506;
	i8 v2508 = (i8)(intptr_t)(ws+4240);
	i8 v2509 = *(i8*)(intptr_t)v2508;
	i8 v2510 = v2509+(+49);
	i1 v2511 = *(i1*)(intptr_t)v2510;
	if (v2507==v2511) goto c02_0258; else goto c02_0257;

c02_0257:;

	i8 v2512 = (i8)(intptr_t)(ws+4240);
	i8 v2513 = *(i8*)(intptr_t)v2512;
	i8 v2514 = (i8)(intptr_t)(ws+4249);
	i1 v2515 = *(i1*)(intptr_t)v2514;
	i8 v2516 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v2517;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2516)(&v2517, v2515, v2513);
	i8 v2518 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v2518 = v2517;

	i8 v2519 = (i8)(intptr_t)(f156_comma);

	((void(*)(void))(intptr_t)v2519)();

	i8 v2520 = (i8)(intptr_t)c02_s00c9;
	i8 v2521 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2521)(v2520);

	i8 v2522 = (i8)(intptr_t)(ws+4256);
	i8 v2523 = *(i8*)(intptr_t)v2522;
	i8 v2524 = v2523+(+14);
	i1 v2525 = *(i1*)(intptr_t)v2524;
	i8 v2526 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2526)(v2525);

	i8 v2527 = (i8)(intptr_t)c02_s00ca;
	i8 v2528 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2528)(v2527);

	i8 v2529 = (i8)(intptr_t)(ws+4256);
	i8 v2530 = *(i8*)(intptr_t)v2529;
	i8 v2531 = v2530+(+16);
	i8 v2532 = *(i8*)(intptr_t)v2531;
	i8 v2533 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2533)(v2532);

	i8 v2534 = (i8)(intptr_t)c02_s00cb;
	i8 v2535 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2535)(v2534);

	i8 v2536 = (i8)(intptr_t)(ws+4249);
	i1 v2537 = *(i1*)(intptr_t)v2536;
	i1 v2538 = v2537+(+1);
	i8 v2539 = (i8)(intptr_t)(ws+4249);
	*(i1*)(intptr_t)v2539 = v2538;

	goto c02_0255;

c02_0258:;

	i8 v2540 = (i8)(intptr_t)(ws+4240);
	i8 v2541 = *(i8*)(intptr_t)v2540;
	i8 v2542 = v2541+(+48);
	i1 v2543 = *(i1*)(intptr_t)v2542;
	i8 v2544 = (i8)(intptr_t)(ws+4249);
	*(i1*)(intptr_t)v2544 = v2543;

c02_025b:;

	i8 v2545 = (i8)(intptr_t)(ws+4249);
	i1 v2546 = *(i1*)(intptr_t)v2545;
	i1 v2547 = (i1)+0;
	if (v2546==v2547) goto c02_025e; else goto c02_025d;

c02_025d:;

	i8 v2548 = (i8)(intptr_t)(ws+4249);
	i1 v2549 = *(i1*)(intptr_t)v2548;
	i1 v2550 = v2549+(-1);
	i8 v2551 = (i8)(intptr_t)(ws+4249);
	*(i1*)(intptr_t)v2551 = v2550;

	i8 v2552 = (i8)(intptr_t)(ws+4240);
	i8 v2553 = *(i8*)(intptr_t)v2552;
	i8 v2554 = (i8)(intptr_t)(ws+4249);
	i1 v2555 = *(i1*)(intptr_t)v2554;
	i8 v2556 = (i8)(intptr_t)(f73_GetInputParameter);
	i8 v2557;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2556)(&v2557, v2555, v2553);
	i8 v2558 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v2558 = v2557;

	i8 v2559 = (i8)(intptr_t)(f156_comma);

	((void(*)(void))(intptr_t)v2559)();

	i8 v2560 = (i8)(intptr_t)c02_s00cc;
	i8 v2561 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2561)(v2560);

	i8 v2562 = (i8)(intptr_t)(ws+4256);
	i8 v2563 = *(i8*)(intptr_t)v2562;
	i8 v2564 = v2563+(+14);
	i1 v2565 = *(i1*)(intptr_t)v2564;
	i8 v2566 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2566)(v2565);

	i8 v2567 = (i8)(intptr_t)c02_s00cd;
	i8 v2568 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2568)(v2567);

	i8 v2569 = (i8)(intptr_t)(ws+4256);
	i8 v2570 = *(i8*)(intptr_t)v2569;
	i8 v2571 = v2570+(+16);
	i8 v2572 = *(i8*)(intptr_t)v2571;
	i8 v2573 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2573)(v2572);

	i8 v2574 = (i8)(intptr_t)c02_s00ce;
	i8 v2575 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2575)(v2574);

	goto c02_025b;

c02_025e:;

	i8 v2576 = (i8)(intptr_t)(ws+4240);
	i8 v2577 = *(i8*)(intptr_t)v2576;
	i8 v2578 = v2577+(+48);
	i1 v2579 = *(i1*)(intptr_t)v2578;
	i8 v2580 = (i8)(intptr_t)(ws+4240);
	i8 v2581 = *(i8*)(intptr_t)v2580;
	i8 v2582 = v2581+(+49);
	i1 v2583 = *(i1*)(intptr_t)v2582;
	i1 v2584 = v2579+v2583;
	i1 v2585 = (i1)+0;
	if (v2584==v2585) goto c02_0262; else goto c02_0263;

c02_0262:;

	i8 v2586 = (i8)(intptr_t)c02_s00cf;
	i8 v2587 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2587)(v2586);

c02_0263:;

c02_025f:;

	i8 v2588 = (i8)(intptr_t)c02_s00d0;
	i8 v2589 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2589)(v2588);

endsub:;
}
	void f106_EmitterOpenStream(i8 /* subr */);
const i1 c02_s00d1[] = { 0x09,0x76,0x6f,0x69,0x64,0x20,0 };
	void f92_E(i8 /* text */);
	void f104_E_subref(i8 /* subr */);
	void f155_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s00d2[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f107_EmitterCloseStream(void);
	void f104_E_subref(i8 /* subr */);

// E_subref_sig workspace at ws+4208 length ws+8
void f157_E_subref_sig(i8 p2590 /* subr */) {
	*(i8*)(intptr_t)(ws+4208) = p2590; /*subr */

	i8 v2591 = (i8)(intptr_t)(ws+40);
	i8 v2592 = *(i8*)(intptr_t)v2591;
	i8 v2593 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v2593)(v2592);

	i8 v2594 = (i8)(intptr_t)c02_s00d1;
	i8 v2595 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2595)(v2594);

	i8 v2596 = (i8)(intptr_t)(ws+4208);
	i8 v2597 = *(i8*)(intptr_t)v2596;
	i8 v2598 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v2598)(v2597);

	i8 v2599 = (i8)(intptr_t)(ws+4208);
	i8 v2600 = *(i8*)(intptr_t)v2599;
	i8 v2601 = (i8)(intptr_t)(f155_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v2601)(v2600);

	i8 v2602 = (i8)(intptr_t)c02_s00d2;
	i8 v2603 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2603)(v2602);

	i8 v2604 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v2604)();

	i8 v2605 = (i8)(intptr_t)(ws+4208);
	i8 v2606 = *(i8*)(intptr_t)v2605;
	i8 v2607 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v2607)(v2606);

endsub:;
}
const i1 c02_s00d3[] = { 0x28,0x69,0x31,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f105_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);
	void f97_E_i16(i2 /* value */);
	void f105_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);

// E_symref workspace at ws+4224 length ws+10
void f158_E_symref(i2 p2608 /* off */, i8 p2609 /* sym */) {
	*(i8*)(intptr_t)(ws+4224) = p2609; /*sym */
	*(i2*)(intptr_t)(ws+4232) = p2608; /*off */

	i8 v2610 = (i8)(intptr_t)(ws+4224);
	i8 v2611 = *(i8*)(intptr_t)v2610;
	i8 v2612 = v2611+(+10);
	i1 v2613 = *(i1*)(intptr_t)v2612;
	i1 v2614 = (i1)+255;
	if (v2613==v2614) goto c02_0267; else goto c02_0268;

c02_0267:;

	i8 v2615 = (i8)(intptr_t)c02_s00d3;
	i8 v2616 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2616)(v2615);

	i8 v2617 = (i8)(intptr_t)(ws+4224);
	i8 v2618 = *(i8*)(intptr_t)v2617;
	i8 v2619 = *(i8*)(intptr_t)v2618;
	i8 v2620 = v2619+(+8);
	i2 v2621 = *(i2*)(intptr_t)v2620;
	i8 v2622 = (i8)(intptr_t)(ws+4224);
	i8 v2623 = *(i8*)(intptr_t)v2622;
	i8 v2624 = v2623+(+10);
	i1 v2625 = *(i1*)(intptr_t)v2624;
	i8 v2626 = (i8)(intptr_t)(ws+4224);
	i8 v2627 = *(i8*)(intptr_t)v2626;
	i8 v2628 = v2627+(+12);
	i2 v2629 = *(i2*)(intptr_t)v2628;
	i8 v2630 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v2630)(v2629, v2625, v2621);

	i8 v2631 = (i8)(intptr_t)(ws+4232);
	i2 v2632 = *(i2*)(intptr_t)v2631;
	i2 v2633 = (i2)+0;
	if (v2632==v2633) goto c02_026d; else goto c02_026c;

c02_026c:;

	i8 v2634 = (i8)(intptr_t)(ws+4232);
	i2 v2635 = *(i2*)(intptr_t)v2634;
	i8 v2636 = (i8)(intptr_t)(f97_E_i16);

	((void(*)(i2 /* value */))(intptr_t)v2636)(v2635);

c02_026d:;

c02_0269:;

	goto c02_0264;

c02_0268:;

	i8 v2637 = (i8)(intptr_t)(ws+4224);
	i8 v2638 = *(i8*)(intptr_t)v2637;
	i8 v2639 = *(i8*)(intptr_t)v2638;
	i8 v2640 = v2639+(+8);
	i2 v2641 = *(i2*)(intptr_t)v2640;
	i8 v2642 = (i8)(intptr_t)(ws+4224);
	i8 v2643 = *(i8*)(intptr_t)v2642;
	i8 v2644 = v2643+(+10);
	i1 v2645 = *(i1*)(intptr_t)v2644;
	i8 v2646 = (i8)(intptr_t)(ws+4224);
	i8 v2647 = *(i8*)(intptr_t)v2646;
	i8 v2648 = v2647+(+12);
	i2 v2649 = *(i2*)(intptr_t)v2648;
	i8 v2650 = (i8)(intptr_t)(ws+4232);
	i2 v2651 = *(i2*)(intptr_t)v2650;
	i2 v2652 = v2649+v2651;
	i8 v2653 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v2653)(v2652, v2645, v2641);

c02_0264:;

endsub:;
}

// ArchEndInstruction workspace at ws+4096 length ws+0
void f159_ArchEndInstruction(void) {

endsub:;
}
	void f89_E_nl(void);

// ArchEndGroup workspace at ws+4088 length ws+0
void f160_ArchEndGroup(void) {

	i8 v2654 = (i8)(intptr_t)(f89_E_nl);

	((void(*)(void))(intptr_t)v2654)();

endsub:;
}
const i1 c02_s00d4[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(i8 /* s */);

// PushVid workspace at ws+4240 length ws+2
void f161_PushVid(i2 p2655 /* vid */) {
	*(i2*)(intptr_t)(ws+4240) = p2655; /*vid */

	i8 v2656 = (i8)(intptr_t)(ws+3832);
	i1 v2657 = *(i1*)(intptr_t)v2656;
	i1 v2658 = (i1)+64;
	if (v2657==v2658) goto c02_0271; else goto c02_0272;

c02_0271:;

	i8 v2659 = (i8)(intptr_t)c02_s00d4;
	i8 v2660 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2660)(v2659);

c02_0272:;

c02_026e:;

	i8 v2661 = (i8)(intptr_t)(ws+4240);
	i2 v2662 = *(i2*)(intptr_t)v2661;
	i8 v2663 = (i8)(intptr_t)(ws+3704);
	i8 v2664 = (i8)(intptr_t)(ws+3832);
	i1 v2665 = *(i1*)(intptr_t)v2664;
	i8 v2666 = v2665;
	i1 v2667 = (i1)+1;
	i8 v2668 = ((i8)v2666)<<v2667;
	i8 v2669 = v2663+v2668;
	*(i2*)(intptr_t)v2669 = v2662;

	i8 v2670 = (i8)(intptr_t)(ws+3832);
	i1 v2671 = *(i1*)(intptr_t)v2670;
	i1 v2672 = v2671+(+1);
	i8 v2673 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v2673 = v2672;

endsub:;
}
	void f161_PushVid(i2 /* vid */);

// Push workspace at ws+4232 length ws+2
void f162_Push(i2* p2674 /* vid */) {

	i8 v2675 = (i8)(intptr_t)(ws+3834);
	i2 v2676 = *(i2*)(intptr_t)v2675;
	i8 v2677 = (i8)(intptr_t)(ws+4232);
	*(i2*)(intptr_t)v2677 = v2676;

	i8 v2678 = (i8)(intptr_t)(ws+3834);
	i2 v2679 = *(i2*)(intptr_t)v2678;
	i2 v2680 = v2679+(+1);
	i8 v2681 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v2681 = v2680;

	i8 v2682 = (i8)(intptr_t)(ws+4232);
	i2 v2683 = *(i2*)(intptr_t)v2682;
	i8 v2684 = (i8)(intptr_t)(f161_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v2684)(v2683);

endsub:;
	*p2674 = *(i2*)(intptr_t)(ws+4232);
}
const i1 c02_s00d5[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(i8 /* s */);

// CheckVarstackUnderflow workspace at ws+4248 length ws+0
void f163_CheckVarstackUnderflow(void) {

	i8 v2685 = (i8)(intptr_t)(ws+3832);
	i1 v2686 = *(i1*)(intptr_t)v2685;
	i1 v2687 = (i1)+0;
	if (v2686==v2687) goto c02_0276; else goto c02_0277;

c02_0276:;

	i8 v2688 = (i8)(intptr_t)c02_s00d5;
	i8 v2689 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2689)(v2688);

c02_0277:;

c02_0273:;

endsub:;
}
	void f163_CheckVarstackUnderflow(void);

// Pop workspace at ws+4240 length ws+2
void f164_Pop(i2* p2690 /* vid */) {

	i8 v2691 = (i8)(intptr_t)(f163_CheckVarstackUnderflow);

	((void(*)(void))(intptr_t)v2691)();

	i8 v2692 = (i8)(intptr_t)(ws+3832);
	i1 v2693 = *(i1*)(intptr_t)v2692;
	i1 v2694 = v2693+(-1);
	i8 v2695 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v2695 = v2694;

	i8 v2696 = (i8)(intptr_t)(ws+3704);
	i8 v2697 = (i8)(intptr_t)(ws+3832);
	i1 v2698 = *(i1*)(intptr_t)v2697;
	i8 v2699 = v2698;
	i1 v2700 = (i1)+1;
	i8 v2701 = ((i8)v2699)<<v2700;
	i8 v2702 = v2696+v2701;
	i2 v2703 = *(i2*)(intptr_t)v2702;
	i8 v2704 = (i8)(intptr_t)(ws+4240);
	*(i2*)(intptr_t)v2704 = v2703;

endsub:;
	*p2690 = *(i2*)(intptr_t)(ws+4240);
}

// ArchEmitMove workspace at ws+4128 length ws+2
void f168_ArchEmitMove(i1 p2720 /* dest */, i1 p2721 /* src */) {
	*(i1*)(intptr_t)(ws+4128) = p2721; /*src */
	*(i1*)(intptr_t)(ws+4129) = p2720; /*dest */

endsub:;
}
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f164_Pop(i2* /* vid */);
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
const i1 c02_s00d7[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00d8[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00d9[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00da[] = { 0x0a,0x09,0x28,0x28,0x76,0x6f,0x69,0x64,0x28,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f155_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s00db[] = { 0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00dc[] = { 0x29,0x28,0 };
	void f92_E(i8 /* text */);
const i1 c02_s00dd[] = { 0x2c,0x20,0 };
	void f92_E(i8 /* text */);

// comma workspace at ws+4240 length ws+0
void f170_comma(void) {

	i8 v2794 = (i8)(intptr_t)(ws+4232);
	i1 v2795 = *(i1*)(intptr_t)v2794;
	i1 v2796 = (i1)+0;
	if (v2795==v2796) goto c02_0281; else goto c02_0282;

c02_0281:;

	i8 v2797 = (i8)(intptr_t)c02_s00dd;
	i8 v2798 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2798)(v2797);

c02_0282:;

c02_027e:;

	i1 v2799 = (i1)+0;
	i8 v2800 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v2800 = v2799;

endsub:;
}
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f170_comma(void);
const i1 c02_s00de[] = { 0x26,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f164_Pop(i2* /* vid */);
	void f170_comma(void);
const i1 c02_s00df[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00e0[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f161_PushVid(i2 /* vid */);

// Call workspace at ws+4200 length ws+36
void f169_Call(i2 p2722 /* subrid */) {
	*(i2*)(intptr_t)(ws+4200) = p2722; /*subrid */

	i8 v2723 = (i8)(intptr_t)(ws+4200);
	i2 v2724 = *(i2*)(intptr_t)v2723;
	i8 v2725 = (i8)(intptr_t)(f65_FindSubr);
	i8 v2726;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v2725)(&v2726, v2724);
	i8 v2727 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v2727 = v2726;

	i8 v2728 = (i8)(intptr_t)(f164_Pop);
	i2 v2729;

	((void(*)(i2* /* vid */))(intptr_t)v2728)(&v2729);
	i8 v2730 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v2730 = v2729;

	i8 v2731 = (i8)(intptr_t)(ws+3834);
	i2 v2732 = *(i2*)(intptr_t)v2731;
	i8 v2733 = (i8)(intptr_t)(ws+4218);
	*(i2*)(intptr_t)v2733 = v2732;

	i8 v2734 = (i8)(intptr_t)(ws+3834);
	i2 v2735 = *(i2*)(intptr_t)v2734;
	i8 v2736 = (i8)(intptr_t)(ws+4208);
	i8 v2737 = *(i8*)(intptr_t)v2736;
	i8 v2738 = v2737+(+49);
	i1 v2739 = *(i1*)(intptr_t)v2738;
	i2 v2740 = v2739;
	i2 v2741 = v2735+v2740;
	i8 v2742 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v2742 = v2741;

	i1 v2743 = (i1)+0;
	i8 v2744 = (i8)(intptr_t)(ws+4220);
	*(i1*)(intptr_t)v2744 = v2743;

c02_027a:;

	i8 v2745 = (i8)(intptr_t)(ws+4220);
	i1 v2746 = *(i1*)(intptr_t)v2745;
	i8 v2747 = (i8)(intptr_t)(ws+4208);
	i8 v2748 = *(i8*)(intptr_t)v2747;
	i8 v2749 = v2748+(+49);
	i1 v2750 = *(i1*)(intptr_t)v2749;
	if (v2746==v2750) goto c02_027d; else goto c02_027c;

c02_027c:;

	i8 v2751 = (i8)(intptr_t)(ws+4208);
	i8 v2752 = *(i8*)(intptr_t)v2751;
	i8 v2753 = (i8)(intptr_t)(ws+4220);
	i1 v2754 = *(i1*)(intptr_t)v2753;
	i8 v2755 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v2756;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2755)(&v2756, v2754, v2752);
	i8 v2757 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v2757 = v2756;

	i8 v2758 = (i8)(intptr_t)c02_s00d7;
	i8 v2759 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2759)(v2758);

	i8 v2760 = (i8)(intptr_t)(ws+4224);
	i8 v2761 = *(i8*)(intptr_t)v2760;
	i8 v2762 = v2761+(+14);
	i1 v2763 = *(i1*)(intptr_t)v2762;
	i8 v2764 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2764)(v2763);

	i8 v2765 = (i8)(intptr_t)c02_s00d8;
	i8 v2766 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2766)(v2765);

	i8 v2767 = (i8)(intptr_t)(ws+4218);
	i2 v2768 = *(i2*)(intptr_t)v2767;
	i8 v2769 = (i8)(intptr_t)(ws+4220);
	i1 v2770 = *(i1*)(intptr_t)v2769;
	i2 v2771 = v2770;
	i2 v2772 = v2768+v2771;
	i8 v2773 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2773)(v2772);

	i8 v2774 = (i8)(intptr_t)c02_s00d9;
	i8 v2775 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2775)(v2774);

	i8 v2776 = (i8)(intptr_t)(ws+4220);
	i1 v2777 = *(i1*)(intptr_t)v2776;
	i1 v2778 = v2777+(+1);
	i8 v2779 = (i8)(intptr_t)(ws+4220);
	*(i1*)(intptr_t)v2779 = v2778;

	goto c02_027a;

c02_027d:;

	i8 v2780 = (i8)(intptr_t)c02_s00da;
	i8 v2781 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2781)(v2780);

	i8 v2782 = (i8)(intptr_t)(ws+4208);
	i8 v2783 = *(i8*)(intptr_t)v2782;
	i8 v2784 = (i8)(intptr_t)(f155_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v2784)(v2783);

	i8 v2785 = (i8)(intptr_t)c02_s00db;
	i8 v2786 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2786)(v2785);

	i8 v2787 = (i8)(intptr_t)(ws+4216);
	i2 v2788 = *(i2*)(intptr_t)v2787;
	i8 v2789 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2789)(v2788);

	i8 v2790 = (i8)(intptr_t)c02_s00dc;
	i8 v2791 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2791)(v2790);

	i1 v2792 = (i1)+1;
	i8 v2793 = (i8)(intptr_t)(ws+4232);
	*(i1*)(intptr_t)v2793 = v2792;


	i1 v2801 = (i1)+0;
	i8 v2802 = (i8)(intptr_t)(ws+4220);
	*(i1*)(intptr_t)v2802 = v2801;

c02_0285:;

	i8 v2803 = (i8)(intptr_t)(ws+4220);
	i1 v2804 = *(i1*)(intptr_t)v2803;
	i8 v2805 = (i8)(intptr_t)(ws+4208);
	i8 v2806 = *(i8*)(intptr_t)v2805;
	i8 v2807 = v2806+(+49);
	i1 v2808 = *(i1*)(intptr_t)v2807;
	if (v2804==v2808) goto c02_0288; else goto c02_0287;

c02_0287:;

	i8 v2809 = (i8)(intptr_t)(ws+4208);
	i8 v2810 = *(i8*)(intptr_t)v2809;
	i8 v2811 = (i8)(intptr_t)(ws+4220);
	i1 v2812 = *(i1*)(intptr_t)v2811;
	i8 v2813 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v2814;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2813)(&v2814, v2812, v2810);
	i8 v2815 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v2815 = v2814;

	i8 v2816 = (i8)(intptr_t)(f170_comma);

	((void(*)(void))(intptr_t)v2816)();

	i8 v2817 = (i8)(intptr_t)c02_s00de;
	i8 v2818 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2818)(v2817);

	i8 v2819 = (i8)(intptr_t)(ws+4218);
	i2 v2820 = *(i2*)(intptr_t)v2819;
	i8 v2821 = (i8)(intptr_t)(ws+4220);
	i1 v2822 = *(i1*)(intptr_t)v2821;
	i2 v2823 = v2822;
	i2 v2824 = v2820+v2823;
	i8 v2825 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2825)(v2824);

	i8 v2826 = (i8)(intptr_t)(ws+4220);
	i1 v2827 = *(i1*)(intptr_t)v2826;
	i1 v2828 = v2827+(+1);
	i8 v2829 = (i8)(intptr_t)(ws+4220);
	*(i1*)(intptr_t)v2829 = v2828;

	goto c02_0285;

c02_0288:;

	i1 v2830 = (i1)+0;
	i8 v2831 = (i8)(intptr_t)(ws+4220);
	*(i1*)(intptr_t)v2831 = v2830;

c02_028b:;

	i8 v2832 = (i8)(intptr_t)(ws+4220);
	i1 v2833 = *(i1*)(intptr_t)v2832;
	i8 v2834 = (i8)(intptr_t)(ws+4208);
	i8 v2835 = *(i8*)(intptr_t)v2834;
	i8 v2836 = v2835+(+48);
	i1 v2837 = *(i1*)(intptr_t)v2836;
	if (v2833==v2837) goto c02_028e; else goto c02_028d;

c02_028d:;

	i8 v2838 = (i8)(intptr_t)(f164_Pop);
	i2 v2839;

	((void(*)(i2* /* vid */))(intptr_t)v2838)(&v2839);
	i8 v2840 = (i8)(intptr_t)(ws+4234);
	*(i2*)(intptr_t)v2840 = v2839;

	i8 v2841 = (i8)(intptr_t)(f170_comma);

	((void(*)(void))(intptr_t)v2841)();

	i8 v2842 = (i8)(intptr_t)c02_s00df;
	i8 v2843 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2843)(v2842);

	i8 v2844 = (i8)(intptr_t)(ws+4234);
	i2 v2845 = *(i2*)(intptr_t)v2844;
	i8 v2846 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2846)(v2845);

	i8 v2847 = (i8)(intptr_t)(ws+4220);
	i1 v2848 = *(i1*)(intptr_t)v2847;
	i1 v2849 = v2848+(+1);
	i8 v2850 = (i8)(intptr_t)(ws+4220);
	*(i1*)(intptr_t)v2850 = v2849;

	goto c02_028b;

c02_028e:;

	i8 v2851 = (i8)(intptr_t)c02_s00e0;
	i8 v2852 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2852)(v2851);

	i1 v2853 = (i1)+0;
	i8 v2854 = (i8)(intptr_t)(ws+4220);
	*(i1*)(intptr_t)v2854 = v2853;

c02_0291:;

	i8 v2855 = (i8)(intptr_t)(ws+4220);
	i1 v2856 = *(i1*)(intptr_t)v2855;
	i8 v2857 = (i8)(intptr_t)(ws+4208);
	i8 v2858 = *(i8*)(intptr_t)v2857;
	i8 v2859 = v2858+(+49);
	i1 v2860 = *(i1*)(intptr_t)v2859;
	if (v2856==v2860) goto c02_0294; else goto c02_0293;

c02_0293:;

	i8 v2861 = (i8)(intptr_t)(ws+4218);
	i2 v2862 = *(i2*)(intptr_t)v2861;
	i8 v2863 = (i8)(intptr_t)(ws+4220);
	i1 v2864 = *(i1*)(intptr_t)v2863;
	i2 v2865 = v2864;
	i2 v2866 = v2862+v2865;
	i8 v2867 = (i8)(intptr_t)(ws+4234);
	*(i2*)(intptr_t)v2867 = v2866;

	i8 v2868 = (i8)(intptr_t)(ws+4234);
	i2 v2869 = *(i2*)(intptr_t)v2868;
	i8 v2870 = (i8)(intptr_t)(f161_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v2870)(v2869);

	i8 v2871 = (i8)(intptr_t)(ws+4220);
	i1 v2872 = *(i1*)(intptr_t)v2871;
	i1 v2873 = v2872+(+1);
	i8 v2874 = (i8)(intptr_t)(ws+4220);
	*(i1*)(intptr_t)v2874 = v2873;

	goto c02_0291;

c02_0294:;

endsub:;
}
	void f162_Push(i2* /* vid */);
const i1 c02_s00e1[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00e2[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00e3[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00e4[] = { 0x29,0 };
	void f92_E(i8 /* text */);
	void f98_E_i32(i4 /* value */);
const i1 c02_s00e5[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// LoadConstant workspace at ws+4200 length ws+10
void f171_LoadConstant(i4 p2875 /* value */, i1 p2876 /* width */) {
	*(i1*)(intptr_t)(ws+4200) = p2876; /*width */
	*(i4*)(intptr_t)(ws+4204) = p2875; /*value */

	i8 v2877 = (i8)(intptr_t)(f162_Push);
	i2 v2878;

	((void(*)(i2* /* vid */))(intptr_t)v2877)(&v2878);
	i8 v2879 = (i8)(intptr_t)(ws+4208);
	*(i2*)(intptr_t)v2879 = v2878;

	i8 v2880 = (i8)(intptr_t)c02_s00e1;
	i8 v2881 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2881)(v2880);

	i8 v2882 = (i8)(intptr_t)(ws+4200);
	i1 v2883 = *(i1*)(intptr_t)v2882;
	i8 v2884 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2884)(v2883);

	i8 v2885 = (i8)(intptr_t)c02_s00e2;
	i8 v2886 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2886)(v2885);

	i8 v2887 = (i8)(intptr_t)(ws+4208);
	i2 v2888 = *(i2*)(intptr_t)v2887;
	i8 v2889 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2889)(v2888);

	i8 v2890 = (i8)(intptr_t)c02_s00e3;
	i8 v2891 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2891)(v2890);

	i8 v2892 = (i8)(intptr_t)(ws+4200);
	i1 v2893 = *(i1*)(intptr_t)v2892;
	i8 v2894 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2894)(v2893);

	i8 v2895 = (i8)(intptr_t)c02_s00e4;
	i8 v2896 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2896)(v2895);

	i8 v2897 = (i8)(intptr_t)(ws+4204);
	i4 v2898 = *(i4*)(intptr_t)v2897;
	i8 v2899 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v2899)(v2898);

	i8 v2900 = (i8)(intptr_t)c02_s00e5;
	i8 v2901 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2901)(v2900);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s00e6[] = { 0x09,0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00e7[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00e8[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00e9[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// StoreVV workspace at ws+4200 length ws+6
void f172_StoreVV(i1 p2902 /* width */) {
	*(i1*)(intptr_t)(ws+4200) = p2902; /*width */

	i8 v2903 = (i8)(intptr_t)(f164_Pop);
	i2 v2904;

	((void(*)(i2* /* vid */))(intptr_t)v2903)(&v2904);
	i8 v2905 = (i8)(intptr_t)(ws+4202);
	*(i2*)(intptr_t)v2905 = v2904;

	i8 v2906 = (i8)(intptr_t)(f164_Pop);
	i2 v2907;

	((void(*)(i2* /* vid */))(intptr_t)v2906)(&v2907);
	i8 v2908 = (i8)(intptr_t)(ws+4204);
	*(i2*)(intptr_t)v2908 = v2907;

	i8 v2909 = (i8)(intptr_t)c02_s00e6;
	i8 v2910 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2910)(v2909);

	i8 v2911 = (i8)(intptr_t)(ws+4200);
	i1 v2912 = *(i1*)(intptr_t)v2911;
	i8 v2913 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2913)(v2912);

	i8 v2914 = (i8)(intptr_t)c02_s00e7;
	i8 v2915 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2915)(v2914);

	i8 v2916 = (i8)(intptr_t)(ws+4202);
	i2 v2917 = *(i2*)(intptr_t)v2916;
	i8 v2918 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2918)(v2917);

	i8 v2919 = (i8)(intptr_t)c02_s00e8;
	i8 v2920 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2920)(v2919);

	i8 v2921 = (i8)(intptr_t)(ws+4204);
	i2 v2922 = *(i2*)(intptr_t)v2921;
	i8 v2923 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2923)(v2922);

	i8 v2924 = (i8)(intptr_t)c02_s00e9;
	i8 v2925 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2925)(v2924);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s00ea[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00eb[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00ec[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00ed[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00ee[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// LoadVV workspace at ws+4200 length ws+6
void f173_LoadVV(i1 p2926 /* width */) {
	*(i1*)(intptr_t)(ws+4200) = p2926; /*width */

	i8 v2927 = (i8)(intptr_t)(f164_Pop);
	i2 v2928;

	((void(*)(i2* /* vid */))(intptr_t)v2927)(&v2928);
	i8 v2929 = (i8)(intptr_t)(ws+4202);
	*(i2*)(intptr_t)v2929 = v2928;

	i8 v2930 = (i8)(intptr_t)(f162_Push);
	i2 v2931;

	((void(*)(i2* /* vid */))(intptr_t)v2930)(&v2931);
	i8 v2932 = (i8)(intptr_t)(ws+4204);
	*(i2*)(intptr_t)v2932 = v2931;

	i8 v2933 = (i8)(intptr_t)c02_s00ea;
	i8 v2934 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2934)(v2933);

	i8 v2935 = (i8)(intptr_t)(ws+4200);
	i1 v2936 = *(i1*)(intptr_t)v2935;
	i8 v2937 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2937)(v2936);

	i8 v2938 = (i8)(intptr_t)c02_s00eb;
	i8 v2939 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2939)(v2938);

	i8 v2940 = (i8)(intptr_t)(ws+4204);
	i2 v2941 = *(i2*)(intptr_t)v2940;
	i8 v2942 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2942)(v2941);

	i8 v2943 = (i8)(intptr_t)c02_s00ec;
	i8 v2944 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2944)(v2943);

	i8 v2945 = (i8)(intptr_t)(ws+4200);
	i1 v2946 = *(i1*)(intptr_t)v2945;
	i8 v2947 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2947)(v2946);

	i8 v2948 = (i8)(intptr_t)c02_s00ed;
	i8 v2949 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2949)(v2948);

	i8 v2950 = (i8)(intptr_t)(ws+4202);
	i2 v2951 = *(i2*)(intptr_t)v2950;
	i8 v2952 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2952)(v2951);

	i8 v2953 = (i8)(intptr_t)c02_s00ee;
	i8 v2954 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2954)(v2953);

endsub:;
}
	void f164_Pop(i2* /* vid */);
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
const i1 c02_s00f2[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00f3[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op2VV workspace at ws+4200 length ws+22
void f174_Op2VV(i8 p2955 /* op */, i1 p2956 /* width */) {
	*(i1*)(intptr_t)(ws+4200) = p2956; /*width */
	*(i8*)(intptr_t)(ws+4208) = p2955; /*op */

	i8 v2957 = (i8)(intptr_t)(f164_Pop);
	i2 v2958;

	((void(*)(i2* /* vid */))(intptr_t)v2957)(&v2958);
	i8 v2959 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v2959 = v2958;

	i8 v2960 = (i8)(intptr_t)(f164_Pop);
	i2 v2961;

	((void(*)(i2* /* vid */))(intptr_t)v2960)(&v2961);
	i8 v2962 = (i8)(intptr_t)(ws+4218);
	*(i2*)(intptr_t)v2962 = v2961;

	i8 v2963 = (i8)(intptr_t)(f162_Push);
	i2 v2964;

	((void(*)(i2* /* vid */))(intptr_t)v2963)(&v2964);
	i8 v2965 = (i8)(intptr_t)(ws+4220);
	*(i2*)(intptr_t)v2965 = v2964;

	i8 v2966 = (i8)(intptr_t)c02_s00ef;
	i8 v2967 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2967)(v2966);

	i8 v2968 = (i8)(intptr_t)(ws+4200);
	i1 v2969 = *(i1*)(intptr_t)v2968;
	i8 v2970 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2970)(v2969);

	i8 v2971 = (i8)(intptr_t)c02_s00f0;
	i8 v2972 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2972)(v2971);

	i8 v2973 = (i8)(intptr_t)(ws+4220);
	i2 v2974 = *(i2*)(intptr_t)v2973;
	i8 v2975 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2975)(v2974);

	i8 v2976 = (i8)(intptr_t)c02_s00f1;
	i8 v2977 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2977)(v2976);

	i8 v2978 = (i8)(intptr_t)(ws+4218);
	i2 v2979 = *(i2*)(intptr_t)v2978;
	i8 v2980 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2980)(v2979);

	i8 v2981 = (i8)(intptr_t)(ws+4208);
	i8 v2982 = *(i8*)(intptr_t)v2981;
	i8 v2983 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2983)(v2982);

	i8 v2984 = (i8)(intptr_t)c02_s00f2;
	i8 v2985 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2985)(v2984);

	i8 v2986 = (i8)(intptr_t)(ws+4216);
	i2 v2987 = *(i2*)(intptr_t)v2986;
	i8 v2988 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2988)(v2987);

	i8 v2989 = (i8)(intptr_t)c02_s00f3;
	i8 v2990 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v2990)(v2989);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s00f4[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00f5[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00f6[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s00f7[] = { 0x28,0 };
	void f92_E(i8 /* text */);
	void f98_E_i32(i4 /* value */);
const i1 c02_s00f8[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op2VC workspace at ws+4200 length ws+24
void f175_Op2VC(i4 p2991 /* rhs */, i8 p2992 /* op */, i1 p2993 /* width */) {
	*(i1*)(intptr_t)(ws+4200) = p2993; /*width */
	*(i8*)(intptr_t)(ws+4208) = p2992; /*op */
	*(i4*)(intptr_t)(ws+4216) = p2991; /*rhs */

	i8 v2994 = (i8)(intptr_t)(f164_Pop);
	i2 v2995;

	((void(*)(i2* /* vid */))(intptr_t)v2994)(&v2995);
	i8 v2996 = (i8)(intptr_t)(ws+4220);
	*(i2*)(intptr_t)v2996 = v2995;

	i8 v2997 = (i8)(intptr_t)(f162_Push);
	i2 v2998;

	((void(*)(i2* /* vid */))(intptr_t)v2997)(&v2998);
	i8 v2999 = (i8)(intptr_t)(ws+4222);
	*(i2*)(intptr_t)v2999 = v2998;

	i8 v3000 = (i8)(intptr_t)c02_s00f4;
	i8 v3001 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3001)(v3000);

	i8 v3002 = (i8)(intptr_t)(ws+4200);
	i1 v3003 = *(i1*)(intptr_t)v3002;
	i8 v3004 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3004)(v3003);

	i8 v3005 = (i8)(intptr_t)c02_s00f5;
	i8 v3006 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3006)(v3005);

	i8 v3007 = (i8)(intptr_t)(ws+4222);
	i2 v3008 = *(i2*)(intptr_t)v3007;
	i8 v3009 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3009)(v3008);

	i8 v3010 = (i8)(intptr_t)c02_s00f6;
	i8 v3011 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3011)(v3010);

	i8 v3012 = (i8)(intptr_t)(ws+4220);
	i2 v3013 = *(i2*)(intptr_t)v3012;
	i8 v3014 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3014)(v3013);

	i8 v3015 = (i8)(intptr_t)(ws+4208);
	i8 v3016 = *(i8*)(intptr_t)v3015;
	i8 v3017 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3017)(v3016);

	i8 v3018 = (i8)(intptr_t)c02_s00f7;
	i8 v3019 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3019)(v3018);

	i8 v3020 = (i8)(intptr_t)(ws+4216);
	i4 v3021 = *(i4*)(intptr_t)v3020;
	i8 v3022 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v3022)(v3021);

	i8 v3023 = (i8)(intptr_t)c02_s00f8;
	i8 v3024 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3024)(v3023);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s00f9[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00fa[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00fb[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00fc[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s00fd[] = { 0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s00fe[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s00ff[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op2VVSigned workspace at ws+4200 length ws+22
void f176_Op2VVSigned(i8 p3025 /* op */, i1 p3026 /* width */) {
	*(i1*)(intptr_t)(ws+4200) = p3026; /*width */
	*(i8*)(intptr_t)(ws+4208) = p3025; /*op */

	i8 v3027 = (i8)(intptr_t)(f164_Pop);
	i2 v3028;

	((void(*)(i2* /* vid */))(intptr_t)v3027)(&v3028);
	i8 v3029 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v3029 = v3028;

	i8 v3030 = (i8)(intptr_t)(f164_Pop);
	i2 v3031;

	((void(*)(i2* /* vid */))(intptr_t)v3030)(&v3031);
	i8 v3032 = (i8)(intptr_t)(ws+4218);
	*(i2*)(intptr_t)v3032 = v3031;

	i8 v3033 = (i8)(intptr_t)(f162_Push);
	i2 v3034;

	((void(*)(i2* /* vid */))(intptr_t)v3033)(&v3034);
	i8 v3035 = (i8)(intptr_t)(ws+4220);
	*(i2*)(intptr_t)v3035 = v3034;

	i8 v3036 = (i8)(intptr_t)c02_s00f9;
	i8 v3037 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3037)(v3036);

	i8 v3038 = (i8)(intptr_t)(ws+4200);
	i1 v3039 = *(i1*)(intptr_t)v3038;
	i8 v3040 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3040)(v3039);

	i8 v3041 = (i8)(intptr_t)c02_s00fa;
	i8 v3042 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3042)(v3041);

	i8 v3043 = (i8)(intptr_t)(ws+4220);
	i2 v3044 = *(i2*)(intptr_t)v3043;
	i8 v3045 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3045)(v3044);

	i8 v3046 = (i8)(intptr_t)c02_s00fb;
	i8 v3047 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3047)(v3046);

	i8 v3048 = (i8)(intptr_t)(ws+4200);
	i1 v3049 = *(i1*)(intptr_t)v3048;
	i8 v3050 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3050)(v3049);

	i8 v3051 = (i8)(intptr_t)c02_s00fc;
	i8 v3052 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3052)(v3051);

	i8 v3053 = (i8)(intptr_t)(ws+4218);
	i2 v3054 = *(i2*)(intptr_t)v3053;
	i8 v3055 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3055)(v3054);

	i8 v3056 = (i8)(intptr_t)(ws+4208);
	i8 v3057 = *(i8*)(intptr_t)v3056;
	i8 v3058 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3058)(v3057);

	i8 v3059 = (i8)(intptr_t)c02_s00fd;
	i8 v3060 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3060)(v3059);

	i8 v3061 = (i8)(intptr_t)(ws+4200);
	i1 v3062 = *(i1*)(intptr_t)v3061;
	i8 v3063 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3063)(v3062);

	i8 v3064 = (i8)(intptr_t)c02_s00fe;
	i8 v3065 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3065)(v3064);

	i8 v3066 = (i8)(intptr_t)(ws+4216);
	i2 v3067 = *(i2*)(intptr_t)v3066;
	i8 v3068 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3068)(v3067);

	i8 v3069 = (i8)(intptr_t)c02_s00ff;
	i8 v3070 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3070)(v3069);

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
const i1 c02_s0102[] = { 0x20,0x3d,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s0103[] = { 0x28,0 };
	void f92_E(i8 /* text */);
	void f98_E_i32(i4 /* value */);
const i1 c02_s0104[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op2VCSigned workspace at ws+4200 length ws+24
void f177_Op2VCSigned(i4 p3071 /* rhs */, i8 p3072 /* op */, i1 p3073 /* width */) {
	*(i1*)(intptr_t)(ws+4200) = p3073; /*width */
	*(i8*)(intptr_t)(ws+4208) = p3072; /*op */
	*(i4*)(intptr_t)(ws+4216) = p3071; /*rhs */

	i8 v3074 = (i8)(intptr_t)(f164_Pop);
	i2 v3075;

	((void(*)(i2* /* vid */))(intptr_t)v3074)(&v3075);
	i8 v3076 = (i8)(intptr_t)(ws+4220);
	*(i2*)(intptr_t)v3076 = v3075;

	i8 v3077 = (i8)(intptr_t)(f162_Push);
	i2 v3078;

	((void(*)(i2* /* vid */))(intptr_t)v3077)(&v3078);
	i8 v3079 = (i8)(intptr_t)(ws+4222);
	*(i2*)(intptr_t)v3079 = v3078;

	i8 v3080 = (i8)(intptr_t)c02_s0100;
	i8 v3081 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3081)(v3080);

	i8 v3082 = (i8)(intptr_t)(ws+4200);
	i1 v3083 = *(i1*)(intptr_t)v3082;
	i8 v3084 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3084)(v3083);

	i8 v3085 = (i8)(intptr_t)c02_s0101;
	i8 v3086 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3086)(v3085);

	i8 v3087 = (i8)(intptr_t)(ws+4222);
	i2 v3088 = *(i2*)(intptr_t)v3087;
	i8 v3089 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3089)(v3088);

	i8 v3090 = (i8)(intptr_t)c02_s0102;
	i8 v3091 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3091)(v3090);

	i8 v3092 = (i8)(intptr_t)(ws+4220);
	i2 v3093 = *(i2*)(intptr_t)v3092;
	i8 v3094 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3094)(v3093);

	i8 v3095 = (i8)(intptr_t)(ws+4208);
	i8 v3096 = *(i8*)(intptr_t)v3095;
	i8 v3097 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3097)(v3096);

	i8 v3098 = (i8)(intptr_t)c02_s0103;
	i8 v3099 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3099)(v3098);

	i8 v3100 = (i8)(intptr_t)(ws+4216);
	i4 v3101 = *(i4*)(intptr_t)v3100;
	i8 v3102 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v3102)(v3101);

	i8 v3103 = (i8)(intptr_t)c02_s0104;
	i8 v3104 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3104)(v3103);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s0105[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0106[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0107[] = { 0x20,0x3d,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s0108[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0109[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Op1V workspace at ws+4200 length ws+20
void f178_Op1V(i8 p3105 /* op */, i1 p3106 /* width */) {
	*(i1*)(intptr_t)(ws+4200) = p3106; /*width */
	*(i8*)(intptr_t)(ws+4208) = p3105; /*op */

	i8 v3107 = (i8)(intptr_t)(f164_Pop);
	i2 v3108;

	((void(*)(i2* /* vid */))(intptr_t)v3107)(&v3108);
	i8 v3109 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v3109 = v3108;

	i8 v3110 = (i8)(intptr_t)(f162_Push);
	i2 v3111;

	((void(*)(i2* /* vid */))(intptr_t)v3110)(&v3111);
	i8 v3112 = (i8)(intptr_t)(ws+4218);
	*(i2*)(intptr_t)v3112 = v3111;

	i8 v3113 = (i8)(intptr_t)c02_s0105;
	i8 v3114 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3114)(v3113);

	i8 v3115 = (i8)(intptr_t)(ws+4200);
	i1 v3116 = *(i1*)(intptr_t)v3115;
	i8 v3117 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3117)(v3116);

	i8 v3118 = (i8)(intptr_t)c02_s0106;
	i8 v3119 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3119)(v3118);

	i8 v3120 = (i8)(intptr_t)(ws+4218);
	i2 v3121 = *(i2*)(intptr_t)v3120;
	i8 v3122 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3122)(v3121);

	i8 v3123 = (i8)(intptr_t)c02_s0107;
	i8 v3124 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3124)(v3123);

	i8 v3125 = (i8)(intptr_t)(ws+4208);
	i8 v3126 = *(i8*)(intptr_t)v3125;
	i8 v3127 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3127)(v3126);

	i8 v3128 = (i8)(intptr_t)c02_s0108;
	i8 v3129 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3129)(v3128);

	i8 v3130 = (i8)(intptr_t)(ws+4216);
	i2 v3131 = *(i2*)(intptr_t)v3130;
	i8 v3132 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3132)(v3131);

	i8 v3133 = (i8)(intptr_t)c02_s0109;
	i8 v3134 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3134)(v3133);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s010a[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s010b[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s010c[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s010d[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s010e[] = { 0x29,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s010f[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0110[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Shift workspace at ws+4200 length ws+30
void f179_Shift(i8 p3135 /* op */, i8 p3136 /* type */, i1 p3137 /* width */) {
	*(i1*)(intptr_t)(ws+4200) = p3137; /*width */
	*(i8*)(intptr_t)(ws+4208) = p3136; /*type */
	*(i8*)(intptr_t)(ws+4216) = p3135; /*op */

	i8 v3138 = (i8)(intptr_t)(f164_Pop);
	i2 v3139;

	((void(*)(i2* /* vid */))(intptr_t)v3138)(&v3139);
	i8 v3140 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v3140 = v3139;

	i8 v3141 = (i8)(intptr_t)(f164_Pop);
	i2 v3142;

	((void(*)(i2* /* vid */))(intptr_t)v3141)(&v3142);
	i8 v3143 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v3143 = v3142;

	i8 v3144 = (i8)(intptr_t)(f162_Push);
	i2 v3145;

	((void(*)(i2* /* vid */))(intptr_t)v3144)(&v3145);
	i8 v3146 = (i8)(intptr_t)(ws+4228);
	*(i2*)(intptr_t)v3146 = v3145;

	i8 v3147 = (i8)(intptr_t)c02_s010a;
	i8 v3148 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3148)(v3147);

	i8 v3149 = (i8)(intptr_t)(ws+4200);
	i1 v3150 = *(i1*)(intptr_t)v3149;
	i8 v3151 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3151)(v3150);

	i8 v3152 = (i8)(intptr_t)c02_s010b;
	i8 v3153 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3153)(v3152);

	i8 v3154 = (i8)(intptr_t)(ws+4228);
	i2 v3155 = *(i2*)(intptr_t)v3154;
	i8 v3156 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3156)(v3155);

	i8 v3157 = (i8)(intptr_t)c02_s010c;
	i8 v3158 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3158)(v3157);

	i8 v3159 = (i8)(intptr_t)(ws+4208);
	i8 v3160 = *(i8*)(intptr_t)v3159;
	i8 v3161 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3161)(v3160);

	i8 v3162 = (i8)(intptr_t)c02_s010d;
	i8 v3163 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3163)(v3162);

	i8 v3164 = (i8)(intptr_t)(ws+4226);
	i2 v3165 = *(i2*)(intptr_t)v3164;
	i8 v3166 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3166)(v3165);

	i8 v3167 = (i8)(intptr_t)c02_s010e;
	i8 v3168 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3168)(v3167);

	i8 v3169 = (i8)(intptr_t)(ws+4216);
	i8 v3170 = *(i8*)(intptr_t)v3169;
	i8 v3171 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3171)(v3170);

	i8 v3172 = (i8)(intptr_t)c02_s010f;
	i8 v3173 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3173)(v3172);

	i8 v3174 = (i8)(intptr_t)(ws+4224);
	i2 v3175 = *(i2*)(intptr_t)v3174;
	i8 v3176 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3176)(v3175);

	i8 v3177 = (i8)(intptr_t)c02_s0110;
	i8 v3178 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3178)(v3177);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s0111[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s0112[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0113[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s0114[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s0115[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Branch workspace at ws+4200 length ws+20
void f180_Branch(i8 p3179 /* op */, i8 p3180 /* node */) {
	*(i8*)(intptr_t)(ws+4200) = p3180; /*node */
	*(i8*)(intptr_t)(ws+4208) = p3179; /*op */

	i8 v3181 = (i8)(intptr_t)(f164_Pop);
	i2 v3182;

	((void(*)(i2* /* vid */))(intptr_t)v3181)(&v3182);
	i8 v3183 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v3183 = v3182;

	i8 v3184 = (i8)(intptr_t)(f164_Pop);
	i2 v3185;

	((void(*)(i2* /* vid */))(intptr_t)v3184)(&v3185);
	i8 v3186 = (i8)(intptr_t)(ws+4218);
	*(i2*)(intptr_t)v3186 = v3185;

	i8 v3187 = (i8)(intptr_t)c02_s0111;
	i8 v3188 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3188)(v3187);

	i8 v3189 = (i8)(intptr_t)(ws+4218);
	i2 v3190 = *(i2*)(intptr_t)v3189;
	i8 v3191 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3191)(v3190);

	i8 v3192 = (i8)(intptr_t)(ws+4208);
	i8 v3193 = *(i8*)(intptr_t)v3192;
	i8 v3194 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3194)(v3193);

	i8 v3195 = (i8)(intptr_t)c02_s0112;
	i8 v3196 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3196)(v3195);

	i8 v3197 = (i8)(intptr_t)(ws+4216);
	i2 v3198 = *(i2*)(intptr_t)v3197;
	i8 v3199 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3199)(v3198);

	i8 v3200 = (i8)(intptr_t)c02_s0113;
	i8 v3201 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3201)(v3200);

	i8 v3202 = (i8)(intptr_t)(ws+4200);
	i8 v3203 = *(i8*)(intptr_t)v3202;
	i2 v3204 = *(i2*)(intptr_t)v3203;
	i8 v3205 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3205)(v3204);

	i8 v3206 = (i8)(intptr_t)c02_s0114;
	i8 v3207 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3207)(v3206);

	i8 v3208 = (i8)(intptr_t)(ws+4200);
	i8 v3209 = *(i8*)(intptr_t)v3208;
	i8 v3210 = v3209+(+2);
	i2 v3211 = *(i2*)(intptr_t)v3210;
	i8 v3212 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3212)(v3211);

	i8 v3213 = (i8)(intptr_t)c02_s0115;
	i8 v3214 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3214)(v3213);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s0116[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0117[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
	void f92_E(i8 /* text */);
const i1 c02_s0118[] = { 0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0119[] = { 0x29,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s011a[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s011b[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s011c[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// BranchSigned workspace at ws+4200 length ws+28
void f181_BranchSigned(i8 p3215 /* op */, i1 p3216 /* width */, i8 p3217 /* node */) {
	*(i8*)(intptr_t)(ws+4200) = p3217; /*node */
	*(i1*)(intptr_t)(ws+4208) = p3216; /*width */
	*(i8*)(intptr_t)(ws+4216) = p3215; /*op */

	i8 v3218 = (i8)(intptr_t)(f164_Pop);
	i2 v3219;

	((void(*)(i2* /* vid */))(intptr_t)v3218)(&v3219);
	i8 v3220 = (i8)(intptr_t)(ws+4224);
	*(i2*)(intptr_t)v3220 = v3219;

	i8 v3221 = (i8)(intptr_t)(f164_Pop);
	i2 v3222;

	((void(*)(i2* /* vid */))(intptr_t)v3221)(&v3222);
	i8 v3223 = (i8)(intptr_t)(ws+4226);
	*(i2*)(intptr_t)v3223 = v3222;

	i8 v3224 = (i8)(intptr_t)c02_s0116;
	i8 v3225 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3225)(v3224);

	i8 v3226 = (i8)(intptr_t)(ws+4208);
	i1 v3227 = *(i1*)(intptr_t)v3226;
	i8 v3228 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3228)(v3227);

	i8 v3229 = (i8)(intptr_t)c02_s0117;
	i8 v3230 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3230)(v3229);

	i8 v3231 = (i8)(intptr_t)(ws+4226);
	i2 v3232 = *(i2*)(intptr_t)v3231;
	i8 v3233 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3233)(v3232);

	i8 v3234 = (i8)(intptr_t)(ws+4216);
	i8 v3235 = *(i8*)(intptr_t)v3234;
	i8 v3236 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3236)(v3235);

	i8 v3237 = (i8)(intptr_t)c02_s0118;
	i8 v3238 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3238)(v3237);

	i8 v3239 = (i8)(intptr_t)(ws+4208);
	i1 v3240 = *(i1*)(intptr_t)v3239;
	i8 v3241 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3241)(v3240);

	i8 v3242 = (i8)(intptr_t)c02_s0119;
	i8 v3243 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3243)(v3242);

	i8 v3244 = (i8)(intptr_t)(ws+4224);
	i2 v3245 = *(i2*)(intptr_t)v3244;
	i8 v3246 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3246)(v3245);

	i8 v3247 = (i8)(intptr_t)c02_s011a;
	i8 v3248 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3248)(v3247);

	i8 v3249 = (i8)(intptr_t)(ws+4200);
	i8 v3250 = *(i8*)(intptr_t)v3249;
	i2 v3251 = *(i2*)(intptr_t)v3250;
	i8 v3252 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3252)(v3251);

	i8 v3253 = (i8)(intptr_t)c02_s011b;
	i8 v3254 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3254)(v3253);

	i8 v3255 = (i8)(intptr_t)(ws+4200);
	i8 v3256 = *(i8*)(intptr_t)v3255;
	i8 v3257 = v3256+(+2);
	i2 v3258 = *(i2*)(intptr_t)v3257;
	i8 v3259 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3259)(v3258);

	i8 v3260 = (i8)(intptr_t)c02_s011c;
	i8 v3261 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3261)(v3260);

endsub:;
}
const i1 c02_s011d[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s011e[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// BranchConstant workspace at ws+4200 length ws+16
void f182_BranchConstant(i4 p3262 /* rhs */, i4 p3263 /* lhs */, i8 p3264 /* node */) {
	*(i8*)(intptr_t)(ws+4200) = p3264; /*node */
	*(i4*)(intptr_t)(ws+4208) = p3263; /*lhs */
	*(i4*)(intptr_t)(ws+4212) = p3262; /*rhs */

	i8 v3265 = (i8)(intptr_t)c02_s011d;
	i8 v3266 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3266)(v3265);

	i8 v3267 = (i8)(intptr_t)(ws+4208);
	i4 v3268 = *(i4*)(intptr_t)v3267;
	i8 v3269 = (i8)(intptr_t)(ws+4212);
	i4 v3270 = *(i4*)(intptr_t)v3269;
	if (v3268==v3270) goto c02_0298; else goto c02_0299;

c02_0298:;

	i8 v3271 = (i8)(intptr_t)(ws+4200);
	i8 v3272 = *(i8*)(intptr_t)v3271;
	i2 v3273 = *(i2*)(intptr_t)v3272;
	i8 v3274 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3274)(v3273);

	goto c02_0295;

c02_0299:;

	i8 v3275 = (i8)(intptr_t)(ws+4200);
	i8 v3276 = *(i8*)(intptr_t)v3275;
	i8 v3277 = v3276+(+2);
	i2 v3278 = *(i2*)(intptr_t)v3277;
	i8 v3279 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3279)(v3278);

c02_0295:;

	i8 v3280 = (i8)(intptr_t)c02_s011e;
	i8 v3281 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3281)(v3280);

endsub:;
}
const i1 c02_s011f[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0120[] = { 0x20,0x21,0x3d,0x20,0 };
	void f92_E(i8 /* text */);
	void f98_E_i32(i4 /* value */);
const i1 c02_s0121[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s0122[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Whencase workspace at ws+4200 length ws+8
void f183_Whencase(i2 p3282 /* falselabel */, i4 p3283 /* value */) {
	*(i4*)(intptr_t)(ws+4200) = p3283; /*value */
	*(i2*)(intptr_t)(ws+4204) = p3282; /*falselabel */

	i8 v3284 = (i8)(intptr_t)(ws+3704);
	i8 v3285 = (i8)(intptr_t)(ws+3832);
	i1 v3286 = *(i1*)(intptr_t)v3285;
	i1 v3287 = v3286+(-1);
	i8 v3288 = v3287;
	i1 v3289 = (i1)+1;
	i8 v3290 = ((i8)v3288)<<v3289;
	i8 v3291 = v3284+v3290;
	i2 v3292 = *(i2*)(intptr_t)v3291;
	i8 v3293 = (i8)(intptr_t)(ws+4206);
	*(i2*)(intptr_t)v3293 = v3292;

	i8 v3294 = (i8)(intptr_t)c02_s011f;
	i8 v3295 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3295)(v3294);

	i8 v3296 = (i8)(intptr_t)(ws+4206);
	i2 v3297 = *(i2*)(intptr_t)v3296;
	i8 v3298 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3298)(v3297);

	i8 v3299 = (i8)(intptr_t)c02_s0120;
	i8 v3300 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3300)(v3299);

	i8 v3301 = (i8)(intptr_t)(ws+4200);
	i4 v3302 = *(i4*)(intptr_t)v3301;
	i8 v3303 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v3303)(v3302);

	i8 v3304 = (i8)(intptr_t)c02_s0121;
	i8 v3305 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3305)(v3304);

	i8 v3306 = (i8)(intptr_t)(ws+4204);
	i2 v3307 = *(i2*)(intptr_t)v3306;
	i8 v3308 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3308)(v3307);

	i8 v3309 = (i8)(intptr_t)c02_s0122;
	i8 v3310 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3310)(v3309);

endsub:;
}
	void f164_Pop(i2* /* vid */);
	void f162_Push(i2* /* vid */);
const i1 c02_s0123[] = { 0x09,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0124[] = { 0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0125[] = { 0x20,0x3d,0x20,0 };
	void f92_E(i8 /* text */);
const i1 c02_s0126[] = { 0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0127[] = { 0x29,0x28,0x73,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0128[] = { 0x29,0 };
	void f92_E(i8 /* text */);
const i1 c02_s0129[] = { 0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s012a[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// Cast workspace at ws+4200 length ws+8
void f184_Cast(i1 p3311 /* sext */, i1 p3312 /* dest */, i1 p3313 /* src */) {
	*(i1*)(intptr_t)(ws+4200) = p3313; /*src */
	*(i1*)(intptr_t)(ws+4201) = p3312; /*dest */
	*(i1*)(intptr_t)(ws+4202) = p3311; /*sext */

	i8 v3314 = (i8)(intptr_t)(f164_Pop);
	i2 v3315;

	((void(*)(i2* /* vid */))(intptr_t)v3314)(&v3315);
	i8 v3316 = (i8)(intptr_t)(ws+4204);
	*(i2*)(intptr_t)v3316 = v3315;

	i8 v3317 = (i8)(intptr_t)(f162_Push);
	i2 v3318;

	((void(*)(i2* /* vid */))(intptr_t)v3317)(&v3318);
	i8 v3319 = (i8)(intptr_t)(ws+4206);
	*(i2*)(intptr_t)v3319 = v3318;

	i8 v3320 = (i8)(intptr_t)c02_s0123;
	i8 v3321 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3321)(v3320);

	i8 v3322 = (i8)(intptr_t)(ws+4201);
	i1 v3323 = *(i1*)(intptr_t)v3322;
	i8 v3324 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3324)(v3323);

	i8 v3325 = (i8)(intptr_t)c02_s0124;
	i8 v3326 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3326)(v3325);

	i8 v3327 = (i8)(intptr_t)(ws+4206);
	i2 v3328 = *(i2*)(intptr_t)v3327;
	i8 v3329 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3329)(v3328);

	i8 v3330 = (i8)(intptr_t)c02_s0125;
	i8 v3331 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3331)(v3330);

	i8 v3332 = (i8)(intptr_t)(ws+4202);
	i1 v3333 = *(i1*)(intptr_t)v3332;
	i1 v3334 = (i1)+0;
	if (v3333==v3334) goto c02_029e; else goto c02_029d;

c02_029d:;

	i8 v3335 = (i8)(intptr_t)c02_s0126;
	i8 v3336 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3336)(v3335);

	i8 v3337 = (i8)(intptr_t)(ws+4201);
	i1 v3338 = *(i1*)(intptr_t)v3337;
	i8 v3339 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3339)(v3338);

	i8 v3340 = (i8)(intptr_t)c02_s0127;
	i8 v3341 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3341)(v3340);

	i8 v3342 = (i8)(intptr_t)(ws+4200);
	i1 v3343 = *(i1*)(intptr_t)v3342;
	i8 v3344 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3344)(v3343);

	i8 v3345 = (i8)(intptr_t)c02_s0128;
	i8 v3346 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3346)(v3345);

c02_029e:;

c02_029a:;

	i8 v3347 = (i8)(intptr_t)c02_s0129;
	i8 v3348 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3348)(v3347);

	i8 v3349 = (i8)(intptr_t)(ws+4204);
	i2 v3350 = *(i2*)(intptr_t)v3349;
	i8 v3351 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3351)(v3350);

	i8 v3352 = (i8)(intptr_t)c02_s012a;
	i8 v3353 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3353)(v3352);

endsub:;
}
	void f106_EmitterOpenStream(i8 /* subr */);
const i1 c02_s012b[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f101_E_h16(i2 /* value */);
const i1 c02_s012c[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f92_E(i8 /* text */);
	void f87_E_comma(void);
const i1 c02_s012d[] = { 0x30,0x78,0 };
	void f92_E(i8 /* text */);
	void f100_E_h8(i1 /* value */);
	void f87_E_comma(void);
const i1 c02_s012e[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f107_EmitterCloseStream(void);

// E_string workspace at ws+4208 length ws+12
void f185_E_string(i2* p3356 /* sid */, i8 p3357 /* text */) {
	*(i8*)(intptr_t)(ws+4208) = p3357; /*text */

	i8 v3358 = (i8)(intptr_t)(ws+3836);
	i2 v3359 = *(i2*)(intptr_t)v3358;
	i8 v3360 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v3360 = v3359;

	i8 v3361 = (i8)(intptr_t)(ws+3836);
	i2 v3362 = *(i2*)(intptr_t)v3361;
	i2 v3363 = v3362+(+1);
	i8 v3364 = (i8)(intptr_t)(ws+3836);
	*(i2*)(intptr_t)v3364 = v3363;

	i8 v3365 = (i8)(intptr_t)(ws+40);
	i8 v3366 = *(i8*)(intptr_t)v3365;
	i8 v3367 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v3367)(v3366);

	i8 v3368 = (i8)(intptr_t)c02_s012b;
	i8 v3369 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3369)(v3368);

	i1 v3370 = (i1)+3;
	i8 v3371 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3371)(v3370);

	i1 v3372 = (i1)+115;
	i8 v3373 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3373)(v3372);

	i8 v3374 = (i8)(intptr_t)(ws+4216);
	i2 v3375 = *(i2*)(intptr_t)v3374;
	i8 v3376 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v3376)(v3375);

	i8 v3377 = (i8)(intptr_t)c02_s012c;
	i8 v3378 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3378)(v3377);

	i1 v3379 = (i1)+1;
	i8 v3380 = (i8)(intptr_t)(ws+4218);
	*(i1*)(intptr_t)v3380 = v3379;

c02_029f:;

	i8 v3381 = (i8)(intptr_t)(ws+4208);
	i8 v3382 = *(i8*)(intptr_t)v3381;
	i1 v3383 = *(i1*)(intptr_t)v3382;
	i8 v3384 = (i8)(intptr_t)(ws+4219);
	*(i1*)(intptr_t)v3384 = v3383;

	i8 v3385 = (i8)(intptr_t)(ws+4208);
	i8 v3386 = *(i8*)(intptr_t)v3385;
	i8 v3387 = v3386+(+1);
	i8 v3388 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3388 = v3387;

	i8 v3389 = (i8)(intptr_t)(ws+4219);
	i1 v3390 = *(i1*)(intptr_t)v3389;
	i1 v3391 = (i1)+0;
	if (v3390==v3391) goto c02_02a4; else goto c02_02a5;

c02_02a4:;

	goto c02_02a0;

c02_02a5:;

c02_02a1:;

	i8 v3392 = (i8)(intptr_t)(ws+4218);
	i1 v3393 = *(i1*)(intptr_t)v3392;
	i1 v3394 = (i1)+0;
	if (v3393==v3394) goto c02_02a9; else goto c02_02aa;

c02_02a9:;

	i8 v3395 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3395)();

c02_02aa:;

c02_02a6:;

	i1 v3396 = (i1)+0;
	i8 v3397 = (i8)(intptr_t)(ws+4218);
	*(i1*)(intptr_t)v3397 = v3396;

	i8 v3398 = (i8)(intptr_t)c02_s012d;
	i8 v3399 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3399)(v3398);

	i8 v3400 = (i8)(intptr_t)(ws+4219);
	i1 v3401 = *(i1*)(intptr_t)v3400;
	i8 v3402 = (i8)(intptr_t)(f100_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v3402)(v3401);

	goto c02_029f;

c02_02a0:;

	i8 v3403 = (i8)(intptr_t)(ws+4218);
	i1 v3404 = *(i1*)(intptr_t)v3403;
	i1 v3405 = (i1)+0;
	if (v3404==v3405) goto c02_02ae; else goto c02_02af;

c02_02ae:;

	i8 v3406 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3406)();

c02_02af:;

c02_02ab:;

	i8 v3407 = (i8)(intptr_t)c02_s012e;
	i8 v3408 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3408)(v3407);

	i8 v3409 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3409)();

endsub:;
	*p3356 = *(i2*)(intptr_t)(ws+4216);
}
const i1 c02_s012f[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f92_E(i8 /* text */);
	void f87_E_comma(void);
const i1 c02_s0130[] = { 0x30,0x78,0 };
	void f92_E(i8 /* text */);
	void f100_E_h8(i1 /* value */);
const i1 c02_s0131[] = { 0x7d,0x7d,0x2c,0x0a,0 };
	void f92_E(i8 /* text */);

// FlushInitialiserBuffer workspace at ws+4216 length ws+1
void f186_FlushInitialiserBuffer(void) {

	i8 v3412 = (i8)(intptr_t)(ws+3846);
	i1 v3413 = *(i1*)(intptr_t)v3412;
	i1 v3414 = (i1)+0;
	if (v3413==v3414) goto c02_02b4; else goto c02_02b3;

c02_02b3:;

	i8 v3415 = (i8)(intptr_t)c02_s012f;
	i8 v3416 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3416)(v3415);

	i1 v3417 = (i1)+0;
	i8 v3418 = (i8)(intptr_t)(ws+4216);
	*(i1*)(intptr_t)v3418 = v3417;

c02_02b7:;

	i8 v3419 = (i8)(intptr_t)(ws+4216);
	i1 v3420 = *(i1*)(intptr_t)v3419;
	i8 v3421 = (i8)(intptr_t)(ws+3846);
	i1 v3422 = *(i1*)(intptr_t)v3421;
	if (v3420==v3422) goto c02_02ba; else goto c02_02b9;

c02_02b9:;

	i8 v3423 = (i8)(intptr_t)(ws+4216);
	i1 v3424 = *(i1*)(intptr_t)v3423;
	i1 v3425 = (i1)+0;
	if (v3424==v3425) goto c02_02bf; else goto c02_02be;

c02_02be:;

	i8 v3426 = (i8)(intptr_t)(f87_E_comma);

	((void(*)(void))(intptr_t)v3426)();

c02_02bf:;

c02_02bb:;

	i8 v3427 = (i8)(intptr_t)c02_s0130;
	i8 v3428 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3428)(v3427);

	i8 v3429 = (i8)(intptr_t)(ws+3838);
	i8 v3430 = (i8)(intptr_t)(ws+4216);
	i1 v3431 = *(i1*)(intptr_t)v3430;
	i8 v3432 = v3431;
	i8 v3433 = v3429+v3432;
	i1 v3434 = *(i1*)(intptr_t)v3433;
	i8 v3435 = (i8)(intptr_t)(f100_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v3435)(v3434);

	i8 v3436 = (i8)(intptr_t)(ws+4216);
	i1 v3437 = *(i1*)(intptr_t)v3436;
	i1 v3438 = v3437+(+1);
	i8 v3439 = (i8)(intptr_t)(ws+4216);
	*(i1*)(intptr_t)v3439 = v3438;

	goto c02_02b7;

c02_02ba:;

	i8 v3440 = (i8)(intptr_t)c02_s0131;
	i8 v3441 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3441)(v3440);

	i1 v3442 = (i1)+0;
	i8 v3443 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3443 = v3442;

c02_02b4:;

c02_02b0:;

endsub:;
}
	void f186_FlushInitialiserBuffer(void);

// E_bytes workspace at ws+4200 length ws+9
void f187_E_bytes(i1 p3444 /* width */, i8 p3445 /* ptr */) {
	*(i8*)(intptr_t)(ws+4200) = p3445; /*ptr */
	*(i1*)(intptr_t)(ws+4208) = p3444; /*width */

c02_02c2:;

	i8 v3446 = (i8)(intptr_t)(ws+4208);
	i1 v3447 = *(i1*)(intptr_t)v3446;
	i1 v3448 = (i1)+0;
	if (v3447==v3448) goto c02_02c5; else goto c02_02c4;

c02_02c4:;

	i8 v3449 = (i8)(intptr_t)(ws+4200);
	i8 v3450 = *(i8*)(intptr_t)v3449;
	i1 v3451 = *(i1*)(intptr_t)v3450;
	i8 v3452 = (i8)(intptr_t)(ws+3838);
	i8 v3453 = (i8)(intptr_t)(ws+3846);
	i1 v3454 = *(i1*)(intptr_t)v3453;
	i8 v3455 = v3454;
	i8 v3456 = v3452+v3455;
	*(i1*)(intptr_t)v3456 = v3451;

	i8 v3457 = (i8)(intptr_t)(ws+4200);
	i8 v3458 = *(i8*)(intptr_t)v3457;
	i8 v3459 = v3458+(+1);
	i8 v3460 = (i8)(intptr_t)(ws+4200);
	*(i8*)(intptr_t)v3460 = v3459;

	i8 v3461 = (i8)(intptr_t)(ws+3846);
	i1 v3462 = *(i1*)(intptr_t)v3461;
	i1 v3463 = v3462+(+1);
	i8 v3464 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3464 = v3463;

	i8 v3465 = (i8)(intptr_t)(ws+3846);
	i1 v3466 = *(i1*)(intptr_t)v3465;
	i1 v3467 = (i1)+8;
	if (v3466==v3467) goto c02_02c9; else goto c02_02ca;

c02_02c9:;

	i8 v3468 = (i8)(intptr_t)(f186_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v3468)();

c02_02ca:;

c02_02c6:;

	i8 v3469 = (i8)(intptr_t)(ws+4208);
	i1 v3470 = *(i1*)(intptr_t)v3469;
	i1 v3471 = v3470+(-1);
	i8 v3472 = (i8)(intptr_t)(ws+4208);
	*(i1*)(intptr_t)v3472 = v3471;

	goto c02_02c2;

c02_02c5:;

endsub:;
}
	void f66_StartError(void);
const i1 c02_s0132[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
	void f67_EndError(void);

// CheckBufferAlignment workspace at ws+4200 length ws+0
void f188_CheckBufferAlignment(void) {

	i8 v3473 = (i8)(intptr_t)(ws+3846);
	i1 v3474 = *(i1*)(intptr_t)v3473;
	i1 v3475 = (i1)+0;
	if (v3474==v3475) goto c02_02cf; else goto c02_02ce;

c02_02ce:;

	i8 v3476 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v3476)();

	i8 v3477 = (i8)(intptr_t)c02_s0132;
	i8 v3478 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v3478)(v3477);

	i8 v3479 = (i8)(intptr_t)(ws+3846);
	i1 v3480 = *(i1*)(intptr_t)v3479;
	i8 v3481 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v3481)(v3480);

	i8 v3482 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v3482)();

c02_02cf:;

c02_02cb:;

endsub:;
}
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// MatchPredicate workspace at ws+4184 length ws+56
void f189_MatchPredicate(i1* p3483 /* matches */, i8 p3484 /* n */, i1 p3485 /* rule */) {
	*(i1*)(intptr_t)(ws+4184) = p3485; /*rule */
	*(i8*)(intptr_t)(ws+4192) = p3484; /*n */

	i8 v3486 = (i8)(intptr_t)(ws+4192);
	i8 v3487 = *(i8*)(intptr_t)v3486;
	i8 v3488 = (i8)+32;
	i8 v3489 = (i8)(intptr_t)(ws+4208);
	i8 v3490 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v3490)(v3489, v3488, v3487);

	i1 v3491 = (i1)+0;
	i8 v3492 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v3492 = v3491;

	i8 v3493 = (i8)(intptr_t)(ws+4184);
	i1 v3494 = *(i1*)(intptr_t)v3493;

c02_02d0:;


endsub:;
	*p3483 = *(i1*)(intptr_t)(ws+4200);
}

// Emitter workspace at ws+4200 length ws+0
void f191_Emitter(void) {

endsub:;
}
	void f182_BranchConstant(i4 /* rhs */, i4 /* lhs */, i8 /* node */);

// emit_0 workspace at ws+4200 length ws+0
void f192_emit_0(void) {

	i8 v3542 = (i8)(intptr_t)(ws+4104);
	i8 v3543 = *(i8*)(intptr_t)v3542;
	i8 v3544 = v3543+(+16);
	i8 v3545 = *(i8*)(intptr_t)v3544;
	i8 v3546 = (i8)(intptr_t)(ws+4128);
	i8 v3547 = *(i8*)(intptr_t)v3546;
	i4 v3548 = *(i4*)(intptr_t)v3547;
	i8 v3549 = (i8)(intptr_t)(ws+4144);
	i8 v3550 = *(i8*)(intptr_t)v3549;
	i4 v3551 = *(i4*)(intptr_t)v3550;
	i8 v3552 = (i8)(intptr_t)(f182_BranchConstant);

	((void(*)(i4 /* rhs */, i4 /* lhs */, i8 /* node */))(intptr_t)v3552)(v3551, v3548, v3545);

endsub:;
}
	void f172_StoreVV(i1 /* width */);

// emit_1 workspace at ws+4200 length ws+0
void f193_emit_1(void) {

	i1 v3553 = (i1)+1;
	i8 v3554 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3554)(v3553);

endsub:;
}
	void f172_StoreVV(i1 /* width */);

// emit_2 workspace at ws+4200 length ws+0
void f194_emit_2(void) {

	i1 v3555 = (i1)+2;
	i8 v3556 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3556)(v3555);

endsub:;
}
	void f172_StoreVV(i1 /* width */);

// emit_3 workspace at ws+4200 length ws+0
void f195_emit_3(void) {

	i1 v3557 = (i1)+4;
	i8 v3558 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3558)(v3557);

endsub:;
}
	void f172_StoreVV(i1 /* width */);

// emit_4 workspace at ws+4200 length ws+0
void f196_emit_4(void) {

	i1 v3559 = (i1)+8;
	i8 v3560 = (i8)(intptr_t)(f172_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3560)(v3559);

endsub:;
}
const i1 c02_s0133[] = { 0x2b,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_5 workspace at ws+4200 length ws+0
void f197_emit_5(void) {

	i1 v3561 = (i1)+1;
	i8 v3562 = (i8)(intptr_t)c02_s0133;
	i8 v3563 = (i8)(intptr_t)(ws+4144);
	i8 v3564 = *(i8*)(intptr_t)v3563;
	i4 v3565 = *(i4*)(intptr_t)v3564;
	i8 v3566 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3566)(v3565, v3562, v3561);

endsub:;
}
const i1 c02_s0134[] = { 0x2b,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_6 workspace at ws+4200 length ws+0
void f198_emit_6(void) {

	i1 v3567 = (i1)+2;
	i8 v3568 = (i8)(intptr_t)c02_s0134;
	i8 v3569 = (i8)(intptr_t)(ws+4144);
	i8 v3570 = *(i8*)(intptr_t)v3569;
	i4 v3571 = *(i4*)(intptr_t)v3570;
	i8 v3572 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3572)(v3571, v3568, v3567);

endsub:;
}
const i1 c02_s0135[] = { 0x2b,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_7 workspace at ws+4200 length ws+0
void f199_emit_7(void) {

	i1 v3573 = (i1)+4;
	i8 v3574 = (i8)(intptr_t)c02_s0135;
	i8 v3575 = (i8)(intptr_t)(ws+4144);
	i8 v3576 = *(i8*)(intptr_t)v3575;
	i4 v3577 = *(i4*)(intptr_t)v3576;
	i8 v3578 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3578)(v3577, v3574, v3573);

endsub:;
}
const i1 c02_s0136[] = { 0x2b,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_8 workspace at ws+4200 length ws+0
void f200_emit_8(void) {

	i1 v3579 = (i1)+8;
	i8 v3580 = (i8)(intptr_t)c02_s0136;
	i8 v3581 = (i8)(intptr_t)(ws+4144);
	i8 v3582 = *(i8*)(intptr_t)v3581;
	i4 v3583 = *(i4*)(intptr_t)v3582;
	i8 v3584 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3584)(v3583, v3580, v3579);

endsub:;
}
const i1 c02_s0137[] = { 0x2d,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_9 workspace at ws+4200 length ws+0
void f201_emit_9(void) {

	i1 v3585 = (i1)+1;
	i8 v3586 = (i8)(intptr_t)c02_s0137;
	i8 v3587 = (i8)(intptr_t)(ws+4144);
	i8 v3588 = *(i8*)(intptr_t)v3587;
	i4 v3589 = *(i4*)(intptr_t)v3588;
	i8 v3590 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3590)(v3589, v3586, v3585);

endsub:;
}
const i1 c02_s0138[] = { 0x2d,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_10 workspace at ws+4200 length ws+0
void f202_emit_10(void) {

	i1 v3591 = (i1)+2;
	i8 v3592 = (i8)(intptr_t)c02_s0138;
	i8 v3593 = (i8)(intptr_t)(ws+4144);
	i8 v3594 = *(i8*)(intptr_t)v3593;
	i4 v3595 = *(i4*)(intptr_t)v3594;
	i8 v3596 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3596)(v3595, v3592, v3591);

endsub:;
}
const i1 c02_s0139[] = { 0x2d,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_11 workspace at ws+4200 length ws+0
void f203_emit_11(void) {

	i1 v3597 = (i1)+4;
	i8 v3598 = (i8)(intptr_t)c02_s0139;
	i8 v3599 = (i8)(intptr_t)(ws+4144);
	i8 v3600 = *(i8*)(intptr_t)v3599;
	i4 v3601 = *(i4*)(intptr_t)v3600;
	i8 v3602 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3602)(v3601, v3598, v3597);

endsub:;
}
const i1 c02_s013a[] = { 0x2d,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_12 workspace at ws+4200 length ws+0
void f204_emit_12(void) {

	i1 v3603 = (i1)+8;
	i8 v3604 = (i8)(intptr_t)c02_s013a;
	i8 v3605 = (i8)(intptr_t)(ws+4144);
	i8 v3606 = *(i8*)(intptr_t)v3605;
	i4 v3607 = *(i4*)(intptr_t)v3606;
	i8 v3608 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3608)(v3607, v3604, v3603);

endsub:;
}
const i1 c02_s013b[] = { 0x2a,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_13 workspace at ws+4200 length ws+0
void f205_emit_13(void) {

	i1 v3609 = (i1)+1;
	i8 v3610 = (i8)(intptr_t)c02_s013b;
	i8 v3611 = (i8)(intptr_t)(ws+4144);
	i8 v3612 = *(i8*)(intptr_t)v3611;
	i4 v3613 = *(i4*)(intptr_t)v3612;
	i8 v3614 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3614)(v3613, v3610, v3609);

endsub:;
}
const i1 c02_s013c[] = { 0x2a,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_14 workspace at ws+4200 length ws+0
void f206_emit_14(void) {

	i1 v3615 = (i1)+2;
	i8 v3616 = (i8)(intptr_t)c02_s013c;
	i8 v3617 = (i8)(intptr_t)(ws+4144);
	i8 v3618 = *(i8*)(intptr_t)v3617;
	i4 v3619 = *(i4*)(intptr_t)v3618;
	i8 v3620 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3620)(v3619, v3616, v3615);

endsub:;
}
const i1 c02_s013d[] = { 0x2a,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_15 workspace at ws+4200 length ws+0
void f207_emit_15(void) {

	i1 v3621 = (i1)+4;
	i8 v3622 = (i8)(intptr_t)c02_s013d;
	i8 v3623 = (i8)(intptr_t)(ws+4144);
	i8 v3624 = *(i8*)(intptr_t)v3623;
	i4 v3625 = *(i4*)(intptr_t)v3624;
	i8 v3626 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3626)(v3625, v3622, v3621);

endsub:;
}
const i1 c02_s013e[] = { 0x2a,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_16 workspace at ws+4200 length ws+0
void f208_emit_16(void) {

	i1 v3627 = (i1)+8;
	i8 v3628 = (i8)(intptr_t)c02_s013e;
	i8 v3629 = (i8)(intptr_t)(ws+4144);
	i8 v3630 = *(i8*)(intptr_t)v3629;
	i4 v3631 = *(i4*)(intptr_t)v3630;
	i8 v3632 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3632)(v3631, v3628, v3627);

endsub:;
}
const i1 c02_s013f[] = { 0x2f,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_17 workspace at ws+4200 length ws+0
void f209_emit_17(void) {

	i1 v3633 = (i1)+1;
	i8 v3634 = (i8)(intptr_t)c02_s013f;
	i8 v3635 = (i8)(intptr_t)(ws+4144);
	i8 v3636 = *(i8*)(intptr_t)v3635;
	i4 v3637 = *(i4*)(intptr_t)v3636;
	i8 v3638 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3638)(v3637, v3634, v3633);

endsub:;
}
const i1 c02_s0140[] = { 0x2f,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_18 workspace at ws+4200 length ws+0
void f210_emit_18(void) {

	i1 v3639 = (i1)+2;
	i8 v3640 = (i8)(intptr_t)c02_s0140;
	i8 v3641 = (i8)(intptr_t)(ws+4144);
	i8 v3642 = *(i8*)(intptr_t)v3641;
	i4 v3643 = *(i4*)(intptr_t)v3642;
	i8 v3644 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3644)(v3643, v3640, v3639);

endsub:;
}
const i1 c02_s0141[] = { 0x2f,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_19 workspace at ws+4200 length ws+0
void f211_emit_19(void) {

	i1 v3645 = (i1)+4;
	i8 v3646 = (i8)(intptr_t)c02_s0141;
	i8 v3647 = (i8)(intptr_t)(ws+4144);
	i8 v3648 = *(i8*)(intptr_t)v3647;
	i4 v3649 = *(i4*)(intptr_t)v3648;
	i8 v3650 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3650)(v3649, v3646, v3645);

endsub:;
}
const i1 c02_s0142[] = { 0x2f,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_20 workspace at ws+4200 length ws+0
void f212_emit_20(void) {

	i1 v3651 = (i1)+8;
	i8 v3652 = (i8)(intptr_t)c02_s0142;
	i8 v3653 = (i8)(intptr_t)(ws+4144);
	i8 v3654 = *(i8*)(intptr_t)v3653;
	i4 v3655 = *(i4*)(intptr_t)v3654;
	i8 v3656 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3656)(v3655, v3652, v3651);

endsub:;
}
const i1 c02_s0143[] = { 0x25,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_21 workspace at ws+4200 length ws+0
void f213_emit_21(void) {

	i1 v3657 = (i1)+1;
	i8 v3658 = (i8)(intptr_t)c02_s0143;
	i8 v3659 = (i8)(intptr_t)(ws+4144);
	i8 v3660 = *(i8*)(intptr_t)v3659;
	i4 v3661 = *(i4*)(intptr_t)v3660;
	i8 v3662 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3662)(v3661, v3658, v3657);

endsub:;
}
const i1 c02_s0144[] = { 0x25,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_22 workspace at ws+4200 length ws+0
void f214_emit_22(void) {

	i1 v3663 = (i1)+2;
	i8 v3664 = (i8)(intptr_t)c02_s0144;
	i8 v3665 = (i8)(intptr_t)(ws+4144);
	i8 v3666 = *(i8*)(intptr_t)v3665;
	i4 v3667 = *(i4*)(intptr_t)v3666;
	i8 v3668 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3668)(v3667, v3664, v3663);

endsub:;
}
const i1 c02_s0145[] = { 0x25,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_23 workspace at ws+4200 length ws+0
void f215_emit_23(void) {

	i1 v3669 = (i1)+4;
	i8 v3670 = (i8)(intptr_t)c02_s0145;
	i8 v3671 = (i8)(intptr_t)(ws+4144);
	i8 v3672 = *(i8*)(intptr_t)v3671;
	i4 v3673 = *(i4*)(intptr_t)v3672;
	i8 v3674 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3674)(v3673, v3670, v3669);

endsub:;
}
const i1 c02_s0146[] = { 0x25,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_24 workspace at ws+4200 length ws+0
void f216_emit_24(void) {

	i1 v3675 = (i1)+8;
	i8 v3676 = (i8)(intptr_t)c02_s0146;
	i8 v3677 = (i8)(intptr_t)(ws+4144);
	i8 v3678 = *(i8*)(intptr_t)v3677;
	i4 v3679 = *(i4*)(intptr_t)v3678;
	i8 v3680 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3680)(v3679, v3676, v3675);

endsub:;
}
const i1 c02_s0147[] = { 0x2f,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_25 workspace at ws+4200 length ws+0
void f217_emit_25(void) {

	i1 v3681 = (i1)+1;
	i8 v3682 = (i8)(intptr_t)c02_s0147;
	i8 v3683 = (i8)(intptr_t)(ws+4144);
	i8 v3684 = *(i8*)(intptr_t)v3683;
	i4 v3685 = *(i4*)(intptr_t)v3684;
	i8 v3686 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3686)(v3685, v3682, v3681);

endsub:;
}
const i1 c02_s0148[] = { 0x2f,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_26 workspace at ws+4200 length ws+0
void f218_emit_26(void) {

	i1 v3687 = (i1)+2;
	i8 v3688 = (i8)(intptr_t)c02_s0148;
	i8 v3689 = (i8)(intptr_t)(ws+4144);
	i8 v3690 = *(i8*)(intptr_t)v3689;
	i4 v3691 = *(i4*)(intptr_t)v3690;
	i8 v3692 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3692)(v3691, v3688, v3687);

endsub:;
}
const i1 c02_s0149[] = { 0x2f,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_27 workspace at ws+4200 length ws+0
void f219_emit_27(void) {

	i1 v3693 = (i1)+4;
	i8 v3694 = (i8)(intptr_t)c02_s0149;
	i8 v3695 = (i8)(intptr_t)(ws+4144);
	i8 v3696 = *(i8*)(intptr_t)v3695;
	i4 v3697 = *(i4*)(intptr_t)v3696;
	i8 v3698 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3698)(v3697, v3694, v3693);

endsub:;
}
const i1 c02_s014a[] = { 0x2f,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_28 workspace at ws+4200 length ws+0
void f220_emit_28(void) {

	i1 v3699 = (i1)+8;
	i8 v3700 = (i8)(intptr_t)c02_s014a;
	i8 v3701 = (i8)(intptr_t)(ws+4144);
	i8 v3702 = *(i8*)(intptr_t)v3701;
	i4 v3703 = *(i4*)(intptr_t)v3702;
	i8 v3704 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3704)(v3703, v3700, v3699);

endsub:;
}
const i1 c02_s014b[] = { 0x25,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_29 workspace at ws+4200 length ws+0
void f221_emit_29(void) {

	i1 v3705 = (i1)+1;
	i8 v3706 = (i8)(intptr_t)c02_s014b;
	i8 v3707 = (i8)(intptr_t)(ws+4144);
	i8 v3708 = *(i8*)(intptr_t)v3707;
	i4 v3709 = *(i4*)(intptr_t)v3708;
	i8 v3710 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3710)(v3709, v3706, v3705);

endsub:;
}
const i1 c02_s014c[] = { 0x25,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_30 workspace at ws+4200 length ws+0
void f222_emit_30(void) {

	i1 v3711 = (i1)+2;
	i8 v3712 = (i8)(intptr_t)c02_s014c;
	i8 v3713 = (i8)(intptr_t)(ws+4144);
	i8 v3714 = *(i8*)(intptr_t)v3713;
	i4 v3715 = *(i4*)(intptr_t)v3714;
	i8 v3716 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3716)(v3715, v3712, v3711);

endsub:;
}
const i1 c02_s014d[] = { 0x25,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_31 workspace at ws+4200 length ws+0
void f223_emit_31(void) {

	i1 v3717 = (i1)+4;
	i8 v3718 = (i8)(intptr_t)c02_s014d;
	i8 v3719 = (i8)(intptr_t)(ws+4144);
	i8 v3720 = *(i8*)(intptr_t)v3719;
	i4 v3721 = *(i4*)(intptr_t)v3720;
	i8 v3722 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3722)(v3721, v3718, v3717);

endsub:;
}
const i1 c02_s014e[] = { 0x25,0 };
	void f177_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_32 workspace at ws+4200 length ws+0
void f224_emit_32(void) {

	i1 v3723 = (i1)+8;
	i8 v3724 = (i8)(intptr_t)c02_s014e;
	i8 v3725 = (i8)(intptr_t)(ws+4144);
	i8 v3726 = *(i8*)(intptr_t)v3725;
	i4 v3727 = *(i4*)(intptr_t)v3726;
	i8 v3728 = (i8)(intptr_t)(f177_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3728)(v3727, v3724, v3723);

endsub:;
}
const i1 c02_s014f[] = { 0x26,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_33 workspace at ws+4200 length ws+0
void f225_emit_33(void) {

	i1 v3729 = (i1)+1;
	i8 v3730 = (i8)(intptr_t)c02_s014f;
	i8 v3731 = (i8)(intptr_t)(ws+4144);
	i8 v3732 = *(i8*)(intptr_t)v3731;
	i4 v3733 = *(i4*)(intptr_t)v3732;
	i8 v3734 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3734)(v3733, v3730, v3729);

endsub:;
}
const i1 c02_s0150[] = { 0x26,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_34 workspace at ws+4200 length ws+0
void f226_emit_34(void) {

	i1 v3735 = (i1)+2;
	i8 v3736 = (i8)(intptr_t)c02_s0150;
	i8 v3737 = (i8)(intptr_t)(ws+4144);
	i8 v3738 = *(i8*)(intptr_t)v3737;
	i4 v3739 = *(i4*)(intptr_t)v3738;
	i8 v3740 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3740)(v3739, v3736, v3735);

endsub:;
}
const i1 c02_s0151[] = { 0x26,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_35 workspace at ws+4200 length ws+0
void f227_emit_35(void) {

	i1 v3741 = (i1)+4;
	i8 v3742 = (i8)(intptr_t)c02_s0151;
	i8 v3743 = (i8)(intptr_t)(ws+4144);
	i8 v3744 = *(i8*)(intptr_t)v3743;
	i4 v3745 = *(i4*)(intptr_t)v3744;
	i8 v3746 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3746)(v3745, v3742, v3741);

endsub:;
}
const i1 c02_s0152[] = { 0x26,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_36 workspace at ws+4200 length ws+0
void f228_emit_36(void) {

	i1 v3747 = (i1)+8;
	i8 v3748 = (i8)(intptr_t)c02_s0152;
	i8 v3749 = (i8)(intptr_t)(ws+4144);
	i8 v3750 = *(i8*)(intptr_t)v3749;
	i4 v3751 = *(i4*)(intptr_t)v3750;
	i8 v3752 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3752)(v3751, v3748, v3747);

endsub:;
}
const i1 c02_s0153[] = { 0x7c,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_37 workspace at ws+4200 length ws+0
void f229_emit_37(void) {

	i1 v3753 = (i1)+1;
	i8 v3754 = (i8)(intptr_t)c02_s0153;
	i8 v3755 = (i8)(intptr_t)(ws+4144);
	i8 v3756 = *(i8*)(intptr_t)v3755;
	i4 v3757 = *(i4*)(intptr_t)v3756;
	i8 v3758 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3758)(v3757, v3754, v3753);

endsub:;
}
const i1 c02_s0154[] = { 0x7c,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_38 workspace at ws+4200 length ws+0
void f230_emit_38(void) {

	i1 v3759 = (i1)+2;
	i8 v3760 = (i8)(intptr_t)c02_s0154;
	i8 v3761 = (i8)(intptr_t)(ws+4144);
	i8 v3762 = *(i8*)(intptr_t)v3761;
	i4 v3763 = *(i4*)(intptr_t)v3762;
	i8 v3764 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3764)(v3763, v3760, v3759);

endsub:;
}
const i1 c02_s0155[] = { 0x7c,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_39 workspace at ws+4200 length ws+0
void f231_emit_39(void) {

	i1 v3765 = (i1)+4;
	i8 v3766 = (i8)(intptr_t)c02_s0155;
	i8 v3767 = (i8)(intptr_t)(ws+4144);
	i8 v3768 = *(i8*)(intptr_t)v3767;
	i4 v3769 = *(i4*)(intptr_t)v3768;
	i8 v3770 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3770)(v3769, v3766, v3765);

endsub:;
}
const i1 c02_s0156[] = { 0x7c,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_40 workspace at ws+4200 length ws+0
void f232_emit_40(void) {

	i1 v3771 = (i1)+8;
	i8 v3772 = (i8)(intptr_t)c02_s0156;
	i8 v3773 = (i8)(intptr_t)(ws+4144);
	i8 v3774 = *(i8*)(intptr_t)v3773;
	i4 v3775 = *(i4*)(intptr_t)v3774;
	i8 v3776 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3776)(v3775, v3772, v3771);

endsub:;
}
const i1 c02_s0157[] = { 0x5e,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_41 workspace at ws+4200 length ws+0
void f233_emit_41(void) {

	i1 v3777 = (i1)+1;
	i8 v3778 = (i8)(intptr_t)c02_s0157;
	i8 v3779 = (i8)(intptr_t)(ws+4144);
	i8 v3780 = *(i8*)(intptr_t)v3779;
	i4 v3781 = *(i4*)(intptr_t)v3780;
	i8 v3782 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3782)(v3781, v3778, v3777);

endsub:;
}
const i1 c02_s0158[] = { 0x5e,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_42 workspace at ws+4200 length ws+0
void f234_emit_42(void) {

	i1 v3783 = (i1)+2;
	i8 v3784 = (i8)(intptr_t)c02_s0158;
	i8 v3785 = (i8)(intptr_t)(ws+4144);
	i8 v3786 = *(i8*)(intptr_t)v3785;
	i4 v3787 = *(i4*)(intptr_t)v3786;
	i8 v3788 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3788)(v3787, v3784, v3783);

endsub:;
}
const i1 c02_s0159[] = { 0x5e,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_43 workspace at ws+4200 length ws+0
void f235_emit_43(void) {

	i1 v3789 = (i1)+4;
	i8 v3790 = (i8)(intptr_t)c02_s0159;
	i8 v3791 = (i8)(intptr_t)(ws+4144);
	i8 v3792 = *(i8*)(intptr_t)v3791;
	i4 v3793 = *(i4*)(intptr_t)v3792;
	i8 v3794 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3794)(v3793, v3790, v3789);

endsub:;
}
const i1 c02_s015a[] = { 0x5e,0 };
	void f175_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_44 workspace at ws+4200 length ws+0
void f236_emit_44(void) {

	i1 v3795 = (i1)+8;
	i8 v3796 = (i8)(intptr_t)c02_s015a;
	i8 v3797 = (i8)(intptr_t)(ws+4144);
	i8 v3798 = *(i8*)(intptr_t)v3797;
	i4 v3799 = *(i4*)(intptr_t)v3798;
	i8 v3800 = (i8)(intptr_t)(f175_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3800)(v3799, v3796, v3795);

endsub:;
}
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s015b[] = { 0x3a,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_47 workspace at ws+4200 length ws+0
void f237_emit_47(void) {

	i8 v3801 = (i8)(intptr_t)(ws+4112);
	i8 v3802 = *(i8*)(intptr_t)v3801;
	i2 v3803 = *(i2*)(intptr_t)v3802;
	i8 v3804 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3804)(v3803);

	i8 v3805 = (i8)(intptr_t)c02_s015b;
	i8 v3806 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3806)(v3805);

endsub:;
}
const i1 c02_s015c[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f92_E(i8 /* text */);
	void f103_E_labelref(i2 /* labelid */);
const i1 c02_s015d[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_48 workspace at ws+4200 length ws+0
void f238_emit_48(void) {

	i8 v3807 = (i8)(intptr_t)c02_s015c;
	i8 v3808 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3808)(v3807);

	i8 v3809 = (i8)(intptr_t)(ws+4112);
	i8 v3810 = *(i8*)(intptr_t)v3809;
	i2 v3811 = *(i2*)(intptr_t)v3810;
	i8 v3812 = (i8)(intptr_t)(f103_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3812)(v3811);

	i8 v3813 = (i8)(intptr_t)c02_s015d;
	i8 v3814 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3814)(v3813);

endsub:;
}
const i1 c02_s015e[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_49 workspace at ws+4200 length ws+0
void f239_emit_49(void) {

	i8 v3815 = (i8)(intptr_t)c02_s015e;
	i8 v3816 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3816)(v3815);

endsub:;
}
	void f106_EmitterOpenStream(i8 /* subr */);
const i1 c02_s015f[] = { 0x0a,0x2f,0x2f,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s0160[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
const i1 c02_s0161[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f84_E_b16(i2 /* word */);
	void f83_E_b8(i1 /* byte */);
const i1 c02_s0162[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
	void f92_E(i8 /* text */);
	void f104_E_subref(i8 /* subr */);
const i1 c02_s0163[] = { 0x28,0 };
	void f92_E(i8 /* text */);
const i1 c02_s0164[] = { 0x2c,0x20,0 };
	void f92_E(i8 /* text */);

// comma workspace at ws+4224 length ws+0
void f241_comma(void) {

	i8 v3859 = (i8)(intptr_t)(ws+4200);
	i1 v3860 = *(i1*)(intptr_t)v3859;
	i1 v3861 = (i1)+0;
	if (v3860==v3861) goto c02_02df; else goto c02_02e0;

c02_02df:;

	i8 v3862 = (i8)(intptr_t)c02_s0164;
	i8 v3863 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3863)(v3862);

c02_02e0:;

c02_02dc:;

	i1 v3864 = (i1)+0;
	i8 v3865 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v3865 = v3864;

endsub:;
}
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f162_Push(i2* /* vid */);
	void f241_comma(void);
const i1 c02_s0165[] = { 0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0166[] = { 0x2a,0x20,0x70,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0167[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s0168[] = { 0x20,0x2a,0x2f,0 };
	void f92_E(i8 /* text */);
	void f73_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f162_Push(i2* /* vid */);
	void f241_comma(void);
const i1 c02_s0169[] = { 0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s016a[] = { 0x20,0x70,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s016b[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s016c[] = { 0x20,0x2a,0x2f,0 };
	void f92_E(i8 /* text */);
const i1 c02_s016d[] = { 0x76,0x6f,0x69,0x64,0 };
	void f92_E(i8 /* text */);
const i1 c02_s016e[] = { 0x29,0x20,0x7b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f73_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s016f[] = { 0x09,0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0170[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0171[] = { 0x29,0x20,0x3d,0x20,0x70,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0172[] = { 0x3b,0x20,0x2f,0x2a,0 };
	void f92_E(i8 /* text */);
	void f92_E(i8 /* text */);
const i1 c02_s0173[] = { 0x20,0x2a,0x2f,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_50 workspace at ws+4200 length ws+18
void f240_emit_50(void) {

	i8 v3817 = (i8)(intptr_t)(ws+40);
	i8 v3818 = *(i8*)(intptr_t)v3817;
	i8 v3819 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v3819)(v3818);

	i8 v3820 = (i8)(intptr_t)c02_s015f;
	i8 v3821 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3821)(v3820);

	i8 v3822 = (i8)(intptr_t)(ws+40);
	i8 v3823 = *(i8*)(intptr_t)v3822;
	i8 v3824 = *(i8*)(intptr_t)v3823;
	i8 v3825 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3825)(v3824);

	i8 v3826 = (i8)(intptr_t)c02_s0160;
	i8 v3827 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3827)(v3826);

	i1 v3828 = (i1)+2;
	i8 v3829 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3829)(v3828);

	i8 v3830 = (i8)(intptr_t)(ws+40);
	i8 v3831 = *(i8*)(intptr_t)v3830;
	i8 v3832 = v3831+(+8);
	i2 v3833 = *(i2*)(intptr_t)v3832;
	i8 v3834 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3834)(v3833);

	i1 v3835 = (i1)+0;
	i8 v3836 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3836)(v3835);

	i2 v3837 = (i2)+0;
	i8 v3838 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3838)(v3837);

	i8 v3839 = (i8)(intptr_t)c02_s0161;
	i8 v3840 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3840)(v3839);

	i1 v3841 = (i1)+5;
	i8 v3842 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3842)(v3841);

	i8 v3843 = (i8)(intptr_t)(ws+40);
	i8 v3844 = *(i8*)(intptr_t)v3843;
	i8 v3845 = v3844+(+8);
	i2 v3846 = *(i2*)(intptr_t)v3845;
	i8 v3847 = (i8)(intptr_t)(f84_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3847)(v3846);

	i1 v3848 = (i1)+0;
	i8 v3849 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3849)(v3848);

	i8 v3850 = (i8)(intptr_t)c02_s0162;
	i8 v3851 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3851)(v3850);

	i8 v3852 = (i8)(intptr_t)(ws+40);
	i8 v3853 = *(i8*)(intptr_t)v3852;
	i8 v3854 = (i8)(intptr_t)(f104_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v3854)(v3853);

	i8 v3855 = (i8)(intptr_t)c02_s0163;
	i8 v3856 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3856)(v3855);

	i1 v3857 = (i1)+1;
	i8 v3858 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v3858 = v3857;


	i1 v3866 = (i1)+0;
	i8 v3867 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v3867 = v3866;

c02_02e3:;

	i8 v3868 = (i8)(intptr_t)(ws+4201);
	i1 v3869 = *(i1*)(intptr_t)v3868;
	i8 v3870 = (i8)(intptr_t)(ws+40);
	i8 v3871 = *(i8*)(intptr_t)v3870;
	i8 v3872 = v3871+(+49);
	i1 v3873 = *(i1*)(intptr_t)v3872;
	if (v3869==v3873) goto c02_02e6; else goto c02_02e5;

c02_02e5:;

	i8 v3874 = (i8)(intptr_t)(ws+40);
	i8 v3875 = *(i8*)(intptr_t)v3874;
	i8 v3876 = (i8)(intptr_t)(ws+4201);
	i1 v3877 = *(i1*)(intptr_t)v3876;
	i8 v3878 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v3879;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3878)(&v3879, v3877, v3875);
	i8 v3880 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3880 = v3879;

	i8 v3881 = (i8)(intptr_t)(f162_Push);
	i2 v3882;

	((void(*)(i2* /* vid */))(intptr_t)v3881)(&v3882);
	i8 v3883 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v3883 = v3882;

	i8 v3884 = (i8)(intptr_t)(f241_comma);

	((void(*)(void))(intptr_t)v3884)();

	i8 v3885 = (i8)(intptr_t)c02_s0165;
	i8 v3886 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3886)(v3885);

	i8 v3887 = (i8)(intptr_t)(ws+4208);
	i8 v3888 = *(i8*)(intptr_t)v3887;
	i8 v3889 = v3888+(+14);
	i1 v3890 = *(i1*)(intptr_t)v3889;
	i8 v3891 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3891)(v3890);

	i8 v3892 = (i8)(intptr_t)c02_s0166;
	i8 v3893 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3893)(v3892);

	i8 v3894 = (i8)(intptr_t)(ws+4216);
	i2 v3895 = *(i2*)(intptr_t)v3894;
	i8 v3896 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3896)(v3895);

	i8 v3897 = (i8)(intptr_t)c02_s0167;
	i8 v3898 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3898)(v3897);

	i8 v3899 = (i8)(intptr_t)(ws+4208);
	i8 v3900 = *(i8*)(intptr_t)v3899;
	i8 v3901 = v3900+(+16);
	i8 v3902 = *(i8*)(intptr_t)v3901;
	i8 v3903 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3903)(v3902);

	i8 v3904 = (i8)(intptr_t)c02_s0168;
	i8 v3905 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3905)(v3904);

	i8 v3906 = (i8)(intptr_t)(ws+4201);
	i1 v3907 = *(i1*)(intptr_t)v3906;
	i1 v3908 = v3907+(+1);
	i8 v3909 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v3909 = v3908;

	goto c02_02e3;

c02_02e6:;

	i8 v3910 = (i8)(intptr_t)(ws+40);
	i8 v3911 = *(i8*)(intptr_t)v3910;
	i8 v3912 = v3911+(+48);
	i1 v3913 = *(i1*)(intptr_t)v3912;
	i8 v3914 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v3914 = v3913;

c02_02e9:;

	i8 v3915 = (i8)(intptr_t)(ws+4201);
	i1 v3916 = *(i1*)(intptr_t)v3915;
	i1 v3917 = (i1)+0;
	if (v3916==v3917) goto c02_02ec; else goto c02_02eb;

c02_02eb:;

	i8 v3918 = (i8)(intptr_t)(ws+4201);
	i1 v3919 = *(i1*)(intptr_t)v3918;
	i1 v3920 = v3919+(-1);
	i8 v3921 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v3921 = v3920;

	i8 v3922 = (i8)(intptr_t)(ws+40);
	i8 v3923 = *(i8*)(intptr_t)v3922;
	i8 v3924 = (i8)(intptr_t)(ws+4201);
	i1 v3925 = *(i1*)(intptr_t)v3924;
	i8 v3926 = (i8)(intptr_t)(f73_GetInputParameter);
	i8 v3927;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3926)(&v3927, v3925, v3923);
	i8 v3928 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3928 = v3927;

	i8 v3929 = (i8)(intptr_t)(f162_Push);
	i2 v3930;

	((void(*)(i2* /* vid */))(intptr_t)v3929)(&v3930);
	i8 v3931 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v3931 = v3930;

	i8 v3932 = (i8)(intptr_t)(f241_comma);

	((void(*)(void))(intptr_t)v3932)();

	i8 v3933 = (i8)(intptr_t)c02_s0169;
	i8 v3934 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3934)(v3933);

	i8 v3935 = (i8)(intptr_t)(ws+4208);
	i8 v3936 = *(i8*)(intptr_t)v3935;
	i8 v3937 = v3936+(+14);
	i1 v3938 = *(i1*)(intptr_t)v3937;
	i8 v3939 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3939)(v3938);

	i8 v3940 = (i8)(intptr_t)c02_s016a;
	i8 v3941 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3941)(v3940);

	i8 v3942 = (i8)(intptr_t)(ws+4216);
	i2 v3943 = *(i2*)(intptr_t)v3942;
	i8 v3944 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3944)(v3943);

	i8 v3945 = (i8)(intptr_t)c02_s016b;
	i8 v3946 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3946)(v3945);

	i8 v3947 = (i8)(intptr_t)(ws+4208);
	i8 v3948 = *(i8*)(intptr_t)v3947;
	i8 v3949 = v3948+(+16);
	i8 v3950 = *(i8*)(intptr_t)v3949;
	i8 v3951 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3951)(v3950);

	i8 v3952 = (i8)(intptr_t)c02_s016c;
	i8 v3953 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3953)(v3952);

	goto c02_02e9;

c02_02ec:;

	i8 v3954 = (i8)(intptr_t)(ws+40);
	i8 v3955 = *(i8*)(intptr_t)v3954;
	i8 v3956 = v3955+(+48);
	i1 v3957 = *(i1*)(intptr_t)v3956;
	i8 v3958 = (i8)(intptr_t)(ws+40);
	i8 v3959 = *(i8*)(intptr_t)v3958;
	i8 v3960 = v3959+(+49);
	i1 v3961 = *(i1*)(intptr_t)v3960;
	i1 v3962 = v3957+v3961;
	i1 v3963 = (i1)+0;
	if (v3962==v3963) goto c02_02f0; else goto c02_02f1;

c02_02f0:;

	i8 v3964 = (i8)(intptr_t)c02_s016d;
	i8 v3965 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3965)(v3964);

c02_02f1:;

c02_02ed:;

	i8 v3966 = (i8)(intptr_t)c02_s016e;
	i8 v3967 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3967)(v3966);

	i1 v3968 = (i1)+0;
	i8 v3969 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v3969 = v3968;

c02_02f4:;

	i8 v3970 = (i8)(intptr_t)(ws+4201);
	i1 v3971 = *(i1*)(intptr_t)v3970;
	i8 v3972 = (i8)(intptr_t)(ws+40);
	i8 v3973 = *(i8*)(intptr_t)v3972;
	i8 v3974 = v3973+(+48);
	i1 v3975 = *(i1*)(intptr_t)v3974;
	if (v3971==v3975) goto c02_02f7; else goto c02_02f6;

c02_02f6:;

	i8 v3976 = (i8)(intptr_t)(ws+40);
	i8 v3977 = *(i8*)(intptr_t)v3976;
	i8 v3978 = (i8)(intptr_t)(ws+4201);
	i1 v3979 = *(i1*)(intptr_t)v3978;
	i8 v3980 = (i8)(intptr_t)(f73_GetInputParameter);
	i8 v3981;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3980)(&v3981, v3979, v3977);
	i8 v3982 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v3982 = v3981;

	i8 v3983 = (i8)(intptr_t)(f164_Pop);
	i2 v3984;

	((void(*)(i2* /* vid */))(intptr_t)v3983)(&v3984);
	i8 v3985 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v3985 = v3984;

	i8 v3986 = (i8)(intptr_t)c02_s016f;
	i8 v3987 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3987)(v3986);

	i8 v3988 = (i8)(intptr_t)(ws+4208);
	i8 v3989 = *(i8*)(intptr_t)v3988;
	i8 v3990 = v3989+(+14);
	i1 v3991 = *(i1*)(intptr_t)v3990;
	i8 v3992 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3992)(v3991);

	i8 v3993 = (i8)(intptr_t)c02_s0170;
	i8 v3994 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v3994)(v3993);

	i8 v3995 = (i8)(intptr_t)(ws+4208);
	i8 v3996 = *(i8*)(intptr_t)v3995;
	i2 v3997 = (i2)+0;
	i8 v3998 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v3998)(v3997, v3996);

	i8 v3999 = (i8)(intptr_t)c02_s0171;
	i8 v4000 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4000)(v3999);

	i8 v4001 = (i8)(intptr_t)(ws+4216);
	i2 v4002 = *(i2*)(intptr_t)v4001;
	i8 v4003 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4003)(v4002);

	i8 v4004 = (i8)(intptr_t)c02_s0172;
	i8 v4005 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4005)(v4004);

	i8 v4006 = (i8)(intptr_t)(ws+4208);
	i8 v4007 = *(i8*)(intptr_t)v4006;
	i8 v4008 = v4007+(+16);
	i8 v4009 = *(i8*)(intptr_t)v4008;
	i8 v4010 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4010)(v4009);

	i8 v4011 = (i8)(intptr_t)c02_s0173;
	i8 v4012 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4012)(v4011);

	i8 v4013 = (i8)(intptr_t)(ws+4201);
	i1 v4014 = *(i1*)(intptr_t)v4013;
	i1 v4015 = v4014+(+1);
	i8 v4016 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v4016 = v4015;

	goto c02_02f4;

c02_02f7:;

endsub:;
}
const i1 c02_s0174[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f74_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f164_Pop(i2* /* vid */);
const i1 c02_s0175[] = { 0x09,0x2a,0x70,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s0176[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s0177[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0178[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
const i1 c02_s0179[] = { 0x7d,0x0a,0 };
	void f92_E(i8 /* text */);
	void f107_EmitterCloseStream(void);

// emit_51 workspace at ws+4200 length ws+18
void f242_emit_51(void) {

	i8 v4017 = (i8)(intptr_t)c02_s0174;
	i8 v4018 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4018)(v4017);

	i8 v4019 = (i8)(intptr_t)(ws+40);
	i8 v4020 = *(i8*)(intptr_t)v4019;
	i8 v4021 = v4020+(+49);
	i1 v4022 = *(i1*)(intptr_t)v4021;
	i8 v4023 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v4023 = v4022;

c02_02fa:;

	i8 v4024 = (i8)(intptr_t)(ws+4200);
	i1 v4025 = *(i1*)(intptr_t)v4024;
	i1 v4026 = (i1)+0;
	if (v4025==v4026) goto c02_02fd; else goto c02_02fc;

c02_02fc:;

	i8 v4027 = (i8)(intptr_t)(ws+4200);
	i1 v4028 = *(i1*)(intptr_t)v4027;
	i1 v4029 = v4028+(-1);
	i8 v4030 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v4030 = v4029;

	i8 v4031 = (i8)(intptr_t)(ws+40);
	i8 v4032 = *(i8*)(intptr_t)v4031;
	i8 v4033 = (i8)(intptr_t)(ws+4200);
	i1 v4034 = *(i1*)(intptr_t)v4033;
	i8 v4035 = (i8)(intptr_t)(f74_GetOutputParameter);
	i8 v4036;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4035)(&v4036, v4034, v4032);
	i8 v4037 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v4037 = v4036;

	i8 v4038 = (i8)(intptr_t)(f164_Pop);
	i2 v4039;

	((void(*)(i2* /* vid */))(intptr_t)v4038)(&v4039);
	i8 v4040 = (i8)(intptr_t)(ws+4216);
	*(i2*)(intptr_t)v4040 = v4039;

	i8 v4041 = (i8)(intptr_t)c02_s0175;
	i8 v4042 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4042)(v4041);

	i8 v4043 = (i8)(intptr_t)(ws+4216);
	i2 v4044 = *(i2*)(intptr_t)v4043;
	i8 v4045 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4045)(v4044);

	i8 v4046 = (i8)(intptr_t)c02_s0176;
	i8 v4047 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4047)(v4046);

	i8 v4048 = (i8)(intptr_t)(ws+4208);
	i8 v4049 = *(i8*)(intptr_t)v4048;
	i8 v4050 = v4049+(+14);
	i1 v4051 = *(i1*)(intptr_t)v4050;
	i8 v4052 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4052)(v4051);

	i8 v4053 = (i8)(intptr_t)c02_s0177;
	i8 v4054 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4054)(v4053);

	i8 v4055 = (i8)(intptr_t)(ws+4208);
	i8 v4056 = *(i8*)(intptr_t)v4055;
	i2 v4057 = (i2)+0;
	i8 v4058 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4058)(v4057, v4056);

	i8 v4059 = (i8)(intptr_t)c02_s0178;
	i8 v4060 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4060)(v4059);

	goto c02_02fa;

c02_02fd:;

	i8 v4061 = (i8)(intptr_t)c02_s0179;
	i8 v4062 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4062)(v4061);

	i8 v4063 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v4063)();

endsub:;
}
	void f169_Call(i2 /* subrid */);

// emit_52 workspace at ws+4200 length ws+0
void f243_emit_52(void) {

	i8 v4064 = (i8)(intptr_t)(ws+4112);
	i8 v4065 = *(i8*)(intptr_t)v4064;
	i8 v4066 = *(i8*)(intptr_t)v4065;
	i8 v4067 = v4066+(+8);
	i2 v4068 = *(i2*)(intptr_t)v4067;
	i8 v4069 = (i8)(intptr_t)(f169_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v4069)(v4068);

endsub:;
}
	void f169_Call(i2 /* subrid */);

// emit_53 workspace at ws+4200 length ws+0
void f244_emit_53(void) {

	i8 v4070 = (i8)(intptr_t)(ws+4112);
	i8 v4071 = *(i8*)(intptr_t)v4070;
	i8 v4072 = *(i8*)(intptr_t)v4071;
	i8 v4073 = v4072+(+8);
	i2 v4074 = *(i2*)(intptr_t)v4073;
	i8 v4075 = (i8)(intptr_t)(f169_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v4075)(v4074);

endsub:;
}
	void f169_Call(i2 /* subrid */);

// emit_54 workspace at ws+4200 length ws+0
void f245_emit_54(void) {

	i8 v4076 = (i8)(intptr_t)(ws+4112);
	i8 v4077 = *(i8*)(intptr_t)v4076;
	i8 v4078 = *(i8*)(intptr_t)v4077;
	i8 v4079 = v4078+(+8);
	i2 v4080 = *(i2*)(intptr_t)v4079;
	i8 v4081 = (i8)(intptr_t)(f169_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v4081)(v4080);

endsub:;
}
	void f169_Call(i2 /* subrid */);

// emit_55 workspace at ws+4200 length ws+0
void f246_emit_55(void) {

	i8 v4082 = (i8)(intptr_t)(ws+4112);
	i8 v4083 = *(i8*)(intptr_t)v4082;
	i8 v4084 = *(i8*)(intptr_t)v4083;
	i8 v4085 = v4084+(+8);
	i2 v4086 = *(i2*)(intptr_t)v4085;
	i8 v4087 = (i8)(intptr_t)(f169_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v4087)(v4086);

endsub:;
}
	void f169_Call(i2 /* subrid */);

// emit_56 workspace at ws+4200 length ws+0
void f247_emit_56(void) {

	i8 v4088 = (i8)(intptr_t)(ws+4112);
	i8 v4089 = *(i8*)(intptr_t)v4088;
	i8 v4090 = *(i8*)(intptr_t)v4089;
	i8 v4091 = v4090+(+8);
	i2 v4092 = *(i2*)(intptr_t)v4091;
	i8 v4093 = (i8)(intptr_t)(f169_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v4093)(v4092);

endsub:;
}
	void f171_LoadConstant(i4 /* value */, i1 /* width */);

// emit_66 workspace at ws+4200 length ws+0
void f248_emit_66(void) {

	i1 v4094 = (i1)+1;
	i8 v4095 = (i8)(intptr_t)(ws+4112);
	i8 v4096 = *(i8*)(intptr_t)v4095;
	i4 v4097 = *(i4*)(intptr_t)v4096;
	i8 v4098 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v4098)(v4097, v4094);

endsub:;
}
	void f171_LoadConstant(i4 /* value */, i1 /* width */);

// emit_67 workspace at ws+4200 length ws+0
void f249_emit_67(void) {

	i1 v4099 = (i1)+2;
	i8 v4100 = (i8)(intptr_t)(ws+4112);
	i8 v4101 = *(i8*)(intptr_t)v4100;
	i4 v4102 = *(i4*)(intptr_t)v4101;
	i8 v4103 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v4103)(v4102, v4099);

endsub:;
}
	void f171_LoadConstant(i4 /* value */, i1 /* width */);

// emit_68 workspace at ws+4200 length ws+0
void f250_emit_68(void) {

	i1 v4104 = (i1)+4;
	i8 v4105 = (i8)(intptr_t)(ws+4112);
	i8 v4106 = *(i8*)(intptr_t)v4105;
	i4 v4107 = *(i4*)(intptr_t)v4106;
	i8 v4108 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v4108)(v4107, v4104);

endsub:;
}
	void f171_LoadConstant(i4 /* value */, i1 /* width */);

// emit_69 workspace at ws+4200 length ws+0
void f251_emit_69(void) {

	i1 v4109 = (i1)+8;
	i8 v4110 = (i8)(intptr_t)(ws+4112);
	i8 v4111 = *(i8*)(intptr_t)v4110;
	i4 v4112 = *(i4*)(intptr_t)v4111;
	i8 v4113 = (i8)(intptr_t)(f171_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v4113)(v4112, v4109);

endsub:;
}
	void f162_Push(i2* /* vid */);
const i1 c02_s017a[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s017b[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s017c[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_70 workspace at ws+4200 length ws+2
void f252_emit_70(void) {

	i8 v4114 = (i8)(intptr_t)(f162_Push);
	i2 v4115;

	((void(*)(i2* /* vid */))(intptr_t)v4114)(&v4115);
	i8 v4116 = (i8)(intptr_t)(ws+4200);
	*(i2*)(intptr_t)v4116 = v4115;

	i8 v4117 = (i8)(intptr_t)c02_s017a;
	i8 v4118 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4118)(v4117);

	i8 v4119 = (i8)(intptr_t)(ws+4200);
	i2 v4120 = *(i2*)(intptr_t)v4119;
	i8 v4121 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4121)(v4120);

	i8 v4122 = (i8)(intptr_t)c02_s017b;
	i8 v4123 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4123)(v4122);

	i8 v4124 = (i8)(intptr_t)(ws+4112);
	i8 v4125 = *(i8*)(intptr_t)v4124;
	i8 v4126 = (i8)(intptr_t)(ws+4112);
	i8 v4127 = *(i8*)(intptr_t)v4126;
	i8 v4128 = v4127+(+16);
	i2 v4129 = *(i2*)(intptr_t)v4128;
	i8 v4130 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4130)(v4129, v4125);

	i8 v4131 = (i8)(intptr_t)c02_s017c;
	i8 v4132 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4132)(v4131);

endsub:;
}
	void f162_Push(i2* /* vid */);
const i1 c02_s017d[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s017e[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f157_E_subref_sig(i8 /* subr */);
const i1 c02_s017f[] = { 0x29,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_71 workspace at ws+4200 length ws+2
void f253_emit_71(void) {

	i8 v4133 = (i8)(intptr_t)(f162_Push);
	i2 v4134;

	((void(*)(i2* /* vid */))(intptr_t)v4133)(&v4134);
	i8 v4135 = (i8)(intptr_t)(ws+4200);
	*(i2*)(intptr_t)v4135 = v4134;

	i8 v4136 = (i8)(intptr_t)c02_s017d;
	i8 v4137 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4137)(v4136);

	i8 v4138 = (i8)(intptr_t)(ws+4200);
	i2 v4139 = *(i2*)(intptr_t)v4138;
	i8 v4140 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4140)(v4139);

	i8 v4141 = (i8)(intptr_t)c02_s017e;
	i8 v4142 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4142)(v4141);

	i8 v4143 = (i8)(intptr_t)(ws+4112);
	i8 v4144 = *(i8*)(intptr_t)v4143;
	i8 v4145 = *(i8*)(intptr_t)v4144;
	i8 v4146 = (i8)(intptr_t)(f157_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4146)(v4145);

	i8 v4147 = (i8)(intptr_t)c02_s017f;
	i8 v4148 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4148)(v4147);

endsub:;
}
	void f173_LoadVV(i1 /* width */);

// emit_72 workspace at ws+4200 length ws+0
void f254_emit_72(void) {

	i1 v4149 = (i1)+1;
	i8 v4150 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v4150)(v4149);

endsub:;
}
	void f173_LoadVV(i1 /* width */);

// emit_73 workspace at ws+4200 length ws+0
void f255_emit_73(void) {

	i1 v4151 = (i1)+2;
	i8 v4152 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v4152)(v4151);

endsub:;
}
	void f173_LoadVV(i1 /* width */);

// emit_74 workspace at ws+4200 length ws+0
void f256_emit_74(void) {

	i1 v4153 = (i1)+4;
	i8 v4154 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v4154)(v4153);

endsub:;
}
	void f173_LoadVV(i1 /* width */);

// emit_75 workspace at ws+4200 length ws+0
void f257_emit_75(void) {

	i1 v4155 = (i1)+8;
	i8 v4156 = (i8)(intptr_t)(f173_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v4156)(v4155);

endsub:;
}
const i1 c02_s0180[] = { 0x2b,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_76 workspace at ws+4200 length ws+0
void f258_emit_76(void) {

	i1 v4157 = (i1)+1;
	i8 v4158 = (i8)(intptr_t)c02_s0180;
	i8 v4159 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4159)(v4158, v4157);

endsub:;
}
const i1 c02_s0181[] = { 0x2b,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_77 workspace at ws+4200 length ws+0
void f259_emit_77(void) {

	i1 v4160 = (i1)+2;
	i8 v4161 = (i8)(intptr_t)c02_s0181;
	i8 v4162 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4162)(v4161, v4160);

endsub:;
}
const i1 c02_s0182[] = { 0x2b,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_78 workspace at ws+4200 length ws+0
void f260_emit_78(void) {

	i1 v4163 = (i1)+4;
	i8 v4164 = (i8)(intptr_t)c02_s0182;
	i8 v4165 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4165)(v4164, v4163);

endsub:;
}
const i1 c02_s0183[] = { 0x2b,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_79 workspace at ws+4200 length ws+0
void f261_emit_79(void) {

	i1 v4166 = (i1)+8;
	i8 v4167 = (i8)(intptr_t)c02_s0183;
	i8 v4168 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4168)(v4167, v4166);

endsub:;
}
const i1 c02_s0184[] = { 0x2d,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_80 workspace at ws+4200 length ws+0
void f262_emit_80(void) {

	i1 v4169 = (i1)+1;
	i8 v4170 = (i8)(intptr_t)c02_s0184;
	i8 v4171 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4171)(v4170, v4169);

endsub:;
}
const i1 c02_s0185[] = { 0x2d,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_81 workspace at ws+4200 length ws+0
void f263_emit_81(void) {

	i1 v4172 = (i1)+2;
	i8 v4173 = (i8)(intptr_t)c02_s0185;
	i8 v4174 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4174)(v4173, v4172);

endsub:;
}
const i1 c02_s0186[] = { 0x2d,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_82 workspace at ws+4200 length ws+0
void f264_emit_82(void) {

	i1 v4175 = (i1)+4;
	i8 v4176 = (i8)(intptr_t)c02_s0186;
	i8 v4177 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4177)(v4176, v4175);

endsub:;
}
const i1 c02_s0187[] = { 0x2d,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_83 workspace at ws+4200 length ws+0
void f265_emit_83(void) {

	i1 v4178 = (i1)+8;
	i8 v4179 = (i8)(intptr_t)c02_s0187;
	i8 v4180 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4180)(v4179, v4178);

endsub:;
}
const i1 c02_s0188[] = { 0x2a,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_84 workspace at ws+4200 length ws+0
void f266_emit_84(void) {

	i1 v4181 = (i1)+1;
	i8 v4182 = (i8)(intptr_t)c02_s0188;
	i8 v4183 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4183)(v4182, v4181);

endsub:;
}
const i1 c02_s0189[] = { 0x2a,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_85 workspace at ws+4200 length ws+0
void f267_emit_85(void) {

	i1 v4184 = (i1)+2;
	i8 v4185 = (i8)(intptr_t)c02_s0189;
	i8 v4186 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4186)(v4185, v4184);

endsub:;
}
const i1 c02_s018a[] = { 0x2a,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_86 workspace at ws+4200 length ws+0
void f268_emit_86(void) {

	i1 v4187 = (i1)+4;
	i8 v4188 = (i8)(intptr_t)c02_s018a;
	i8 v4189 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4189)(v4188, v4187);

endsub:;
}
const i1 c02_s018b[] = { 0x2a,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_87 workspace at ws+4200 length ws+0
void f269_emit_87(void) {

	i1 v4190 = (i1)+8;
	i8 v4191 = (i8)(intptr_t)c02_s018b;
	i8 v4192 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4192)(v4191, v4190);

endsub:;
}
const i1 c02_s018c[] = { 0x2f,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_88 workspace at ws+4200 length ws+0
void f270_emit_88(void) {

	i1 v4193 = (i1)+1;
	i8 v4194 = (i8)(intptr_t)c02_s018c;
	i8 v4195 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4195)(v4194, v4193);

endsub:;
}
const i1 c02_s018d[] = { 0x2f,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_89 workspace at ws+4200 length ws+0
void f271_emit_89(void) {

	i1 v4196 = (i1)+2;
	i8 v4197 = (i8)(intptr_t)c02_s018d;
	i8 v4198 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4198)(v4197, v4196);

endsub:;
}
const i1 c02_s018e[] = { 0x2f,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_90 workspace at ws+4200 length ws+0
void f272_emit_90(void) {

	i1 v4199 = (i1)+4;
	i8 v4200 = (i8)(intptr_t)c02_s018e;
	i8 v4201 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4201)(v4200, v4199);

endsub:;
}
const i1 c02_s018f[] = { 0x2f,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_91 workspace at ws+4200 length ws+0
void f273_emit_91(void) {

	i1 v4202 = (i1)+8;
	i8 v4203 = (i8)(intptr_t)c02_s018f;
	i8 v4204 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4204)(v4203, v4202);

endsub:;
}
const i1 c02_s0190[] = { 0x25,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_92 workspace at ws+4200 length ws+0
void f274_emit_92(void) {

	i1 v4205 = (i1)+1;
	i8 v4206 = (i8)(intptr_t)c02_s0190;
	i8 v4207 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4207)(v4206, v4205);

endsub:;
}
const i1 c02_s0191[] = { 0x25,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_93 workspace at ws+4200 length ws+0
void f275_emit_93(void) {

	i1 v4208 = (i1)+2;
	i8 v4209 = (i8)(intptr_t)c02_s0191;
	i8 v4210 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4210)(v4209, v4208);

endsub:;
}
const i1 c02_s0192[] = { 0x25,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_94 workspace at ws+4200 length ws+0
void f276_emit_94(void) {

	i1 v4211 = (i1)+4;
	i8 v4212 = (i8)(intptr_t)c02_s0192;
	i8 v4213 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4213)(v4212, v4211);

endsub:;
}
const i1 c02_s0193[] = { 0x25,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_95 workspace at ws+4200 length ws+0
void f277_emit_95(void) {

	i1 v4214 = (i1)+8;
	i8 v4215 = (i8)(intptr_t)c02_s0193;
	i8 v4216 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4216)(v4215, v4214);

endsub:;
}
const i1 c02_s0194[] = { 0x2f,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_96 workspace at ws+4200 length ws+0
void f278_emit_96(void) {

	i1 v4217 = (i1)+1;
	i8 v4218 = (i8)(intptr_t)c02_s0194;
	i8 v4219 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4219)(v4218, v4217);

endsub:;
}
const i1 c02_s0195[] = { 0x2f,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_97 workspace at ws+4200 length ws+0
void f279_emit_97(void) {

	i1 v4220 = (i1)+2;
	i8 v4221 = (i8)(intptr_t)c02_s0195;
	i8 v4222 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4222)(v4221, v4220);

endsub:;
}
const i1 c02_s0196[] = { 0x2f,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_98 workspace at ws+4200 length ws+0
void f280_emit_98(void) {

	i1 v4223 = (i1)+4;
	i8 v4224 = (i8)(intptr_t)c02_s0196;
	i8 v4225 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4225)(v4224, v4223);

endsub:;
}
const i1 c02_s0197[] = { 0x2f,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_99 workspace at ws+4200 length ws+0
void f281_emit_99(void) {

	i1 v4226 = (i1)+8;
	i8 v4227 = (i8)(intptr_t)c02_s0197;
	i8 v4228 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4228)(v4227, v4226);

endsub:;
}
const i1 c02_s0198[] = { 0x25,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_100 workspace at ws+4200 length ws+0
void f282_emit_100(void) {

	i1 v4229 = (i1)+1;
	i8 v4230 = (i8)(intptr_t)c02_s0198;
	i8 v4231 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4231)(v4230, v4229);

endsub:;
}
const i1 c02_s0199[] = { 0x25,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_101 workspace at ws+4200 length ws+0
void f283_emit_101(void) {

	i1 v4232 = (i1)+2;
	i8 v4233 = (i8)(intptr_t)c02_s0199;
	i8 v4234 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4234)(v4233, v4232);

endsub:;
}
const i1 c02_s019a[] = { 0x25,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_102 workspace at ws+4200 length ws+0
void f284_emit_102(void) {

	i1 v4235 = (i1)+4;
	i8 v4236 = (i8)(intptr_t)c02_s019a;
	i8 v4237 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4237)(v4236, v4235);

endsub:;
}
const i1 c02_s019b[] = { 0x25,0 };
	void f176_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_103 workspace at ws+4200 length ws+0
void f285_emit_103(void) {

	i1 v4238 = (i1)+8;
	i8 v4239 = (i8)(intptr_t)c02_s019b;
	i8 v4240 = (i8)(intptr_t)(f176_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4240)(v4239, v4238);

endsub:;
}
const i1 c02_s019c[] = { 0x26,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_104 workspace at ws+4200 length ws+0
void f286_emit_104(void) {

	i1 v4241 = (i1)+1;
	i8 v4242 = (i8)(intptr_t)c02_s019c;
	i8 v4243 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4243)(v4242, v4241);

endsub:;
}
const i1 c02_s019d[] = { 0x26,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_105 workspace at ws+4200 length ws+0
void f287_emit_105(void) {

	i1 v4244 = (i1)+2;
	i8 v4245 = (i8)(intptr_t)c02_s019d;
	i8 v4246 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4246)(v4245, v4244);

endsub:;
}
const i1 c02_s019e[] = { 0x26,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_106 workspace at ws+4200 length ws+0
void f288_emit_106(void) {

	i1 v4247 = (i1)+4;
	i8 v4248 = (i8)(intptr_t)c02_s019e;
	i8 v4249 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4249)(v4248, v4247);

endsub:;
}
const i1 c02_s019f[] = { 0x26,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_107 workspace at ws+4200 length ws+0
void f289_emit_107(void) {

	i1 v4250 = (i1)+8;
	i8 v4251 = (i8)(intptr_t)c02_s019f;
	i8 v4252 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4252)(v4251, v4250);

endsub:;
}
const i1 c02_s01a0[] = { 0x7c,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_108 workspace at ws+4200 length ws+0
void f290_emit_108(void) {

	i1 v4253 = (i1)+1;
	i8 v4254 = (i8)(intptr_t)c02_s01a0;
	i8 v4255 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4255)(v4254, v4253);

endsub:;
}
const i1 c02_s01a1[] = { 0x7c,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_109 workspace at ws+4200 length ws+0
void f291_emit_109(void) {

	i1 v4256 = (i1)+2;
	i8 v4257 = (i8)(intptr_t)c02_s01a1;
	i8 v4258 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4258)(v4257, v4256);

endsub:;
}
const i1 c02_s01a2[] = { 0x7c,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_110 workspace at ws+4200 length ws+0
void f292_emit_110(void) {

	i1 v4259 = (i1)+4;
	i8 v4260 = (i8)(intptr_t)c02_s01a2;
	i8 v4261 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4261)(v4260, v4259);

endsub:;
}
const i1 c02_s01a3[] = { 0x7c,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_111 workspace at ws+4200 length ws+0
void f293_emit_111(void) {

	i1 v4262 = (i1)+8;
	i8 v4263 = (i8)(intptr_t)c02_s01a3;
	i8 v4264 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4264)(v4263, v4262);

endsub:;
}
const i1 c02_s01a4[] = { 0x5e,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_112 workspace at ws+4200 length ws+0
void f294_emit_112(void) {

	i1 v4265 = (i1)+1;
	i8 v4266 = (i8)(intptr_t)c02_s01a4;
	i8 v4267 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4267)(v4266, v4265);

endsub:;
}
const i1 c02_s01a5[] = { 0x5e,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_113 workspace at ws+4200 length ws+0
void f295_emit_113(void) {

	i1 v4268 = (i1)+2;
	i8 v4269 = (i8)(intptr_t)c02_s01a5;
	i8 v4270 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4270)(v4269, v4268);

endsub:;
}
const i1 c02_s01a6[] = { 0x5e,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_114 workspace at ws+4200 length ws+0
void f296_emit_114(void) {

	i1 v4271 = (i1)+4;
	i8 v4272 = (i8)(intptr_t)c02_s01a6;
	i8 v4273 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4273)(v4272, v4271);

endsub:;
}
const i1 c02_s01a7[] = { 0x5e,0 };
	void f174_Op2VV(i8 /* op */, i1 /* width */);

// emit_115 workspace at ws+4200 length ws+0
void f297_emit_115(void) {

	i1 v4274 = (i1)+8;
	i8 v4275 = (i8)(intptr_t)c02_s01a7;
	i8 v4276 = (i8)(intptr_t)(f174_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4276)(v4275, v4274);

endsub:;
}
const i1 c02_s01a8[] = { 0x2d,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_116 workspace at ws+4200 length ws+0
void f298_emit_116(void) {

	i1 v4277 = (i1)+1;
	i8 v4278 = (i8)(intptr_t)c02_s01a8;
	i8 v4279 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4279)(v4278, v4277);

endsub:;
}
const i1 c02_s01a9[] = { 0x2d,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_117 workspace at ws+4200 length ws+0
void f299_emit_117(void) {

	i1 v4280 = (i1)+2;
	i8 v4281 = (i8)(intptr_t)c02_s01a9;
	i8 v4282 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4282)(v4281, v4280);

endsub:;
}
const i1 c02_s01aa[] = { 0x2d,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_118 workspace at ws+4200 length ws+0
void f300_emit_118(void) {

	i1 v4283 = (i1)+4;
	i8 v4284 = (i8)(intptr_t)c02_s01aa;
	i8 v4285 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4285)(v4284, v4283);

endsub:;
}
const i1 c02_s01ab[] = { 0x2d,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_119 workspace at ws+4200 length ws+0
void f301_emit_119(void) {

	i1 v4286 = (i1)+8;
	i8 v4287 = (i8)(intptr_t)c02_s01ab;
	i8 v4288 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4288)(v4287, v4286);

endsub:;
}
const i1 c02_s01ac[] = { 0x7e,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_120 workspace at ws+4200 length ws+0
void f302_emit_120(void) {

	i1 v4289 = (i1)+1;
	i8 v4290 = (i8)(intptr_t)c02_s01ac;
	i8 v4291 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4291)(v4290, v4289);

endsub:;
}
const i1 c02_s01ad[] = { 0x7e,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_121 workspace at ws+4200 length ws+0
void f303_emit_121(void) {

	i1 v4292 = (i1)+2;
	i8 v4293 = (i8)(intptr_t)c02_s01ad;
	i8 v4294 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4294)(v4293, v4292);

endsub:;
}
const i1 c02_s01ae[] = { 0x7e,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_122 workspace at ws+4200 length ws+0
void f304_emit_122(void) {

	i1 v4295 = (i1)+4;
	i8 v4296 = (i8)(intptr_t)c02_s01ae;
	i8 v4297 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4297)(v4296, v4295);

endsub:;
}
const i1 c02_s01af[] = { 0x7e,0 };
	void f178_Op1V(i8 /* op */, i1 /* width */);

// emit_123 workspace at ws+4200 length ws+0
void f305_emit_123(void) {

	i1 v4298 = (i1)+8;
	i8 v4299 = (i8)(intptr_t)c02_s01af;
	i8 v4300 = (i8)(intptr_t)(f178_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4300)(v4299, v4298);

endsub:;
}
const i1 c02_s01b0[] = { 0x69,0x31,0 };
const i1 c02_s01b1[] = { 0x3c,0x3c,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_124 workspace at ws+4200 length ws+0
void f306_emit_124(void) {

	i1 v4301 = (i1)+1;
	i8 v4302 = (i8)(intptr_t)c02_s01b0;
	i8 v4303 = (i8)(intptr_t)c02_s01b1;
	i8 v4304 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4304)(v4303, v4302, v4301);

endsub:;
}
const i1 c02_s01b2[] = { 0x69,0x32,0 };
const i1 c02_s01b3[] = { 0x3c,0x3c,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_125 workspace at ws+4200 length ws+0
void f307_emit_125(void) {

	i1 v4305 = (i1)+2;
	i8 v4306 = (i8)(intptr_t)c02_s01b2;
	i8 v4307 = (i8)(intptr_t)c02_s01b3;
	i8 v4308 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4308)(v4307, v4306, v4305);

endsub:;
}
const i1 c02_s01b4[] = { 0x69,0x34,0 };
const i1 c02_s01b5[] = { 0x3c,0x3c,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_126 workspace at ws+4200 length ws+0
void f308_emit_126(void) {

	i1 v4309 = (i1)+4;
	i8 v4310 = (i8)(intptr_t)c02_s01b4;
	i8 v4311 = (i8)(intptr_t)c02_s01b5;
	i8 v4312 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4312)(v4311, v4310, v4309);

endsub:;
}
const i1 c02_s01b6[] = { 0x69,0x38,0 };
const i1 c02_s01b7[] = { 0x3c,0x3c,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_127 workspace at ws+4200 length ws+0
void f309_emit_127(void) {

	i1 v4313 = (i1)+8;
	i8 v4314 = (i8)(intptr_t)c02_s01b6;
	i8 v4315 = (i8)(intptr_t)c02_s01b7;
	i8 v4316 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4316)(v4315, v4314, v4313);

endsub:;
}
const i1 c02_s01b8[] = { 0x69,0x31,0 };
const i1 c02_s01b9[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_128 workspace at ws+4200 length ws+0
void f310_emit_128(void) {

	i1 v4317 = (i1)+1;
	i8 v4318 = (i8)(intptr_t)c02_s01b8;
	i8 v4319 = (i8)(intptr_t)c02_s01b9;
	i8 v4320 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4320)(v4319, v4318, v4317);

endsub:;
}
const i1 c02_s01ba[] = { 0x69,0x32,0 };
const i1 c02_s01bb[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_129 workspace at ws+4200 length ws+0
void f311_emit_129(void) {

	i1 v4321 = (i1)+2;
	i8 v4322 = (i8)(intptr_t)c02_s01ba;
	i8 v4323 = (i8)(intptr_t)c02_s01bb;
	i8 v4324 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4324)(v4323, v4322, v4321);

endsub:;
}
const i1 c02_s01bc[] = { 0x69,0x34,0 };
const i1 c02_s01bd[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_130 workspace at ws+4200 length ws+0
void f312_emit_130(void) {

	i1 v4325 = (i1)+4;
	i8 v4326 = (i8)(intptr_t)c02_s01bc;
	i8 v4327 = (i8)(intptr_t)c02_s01bd;
	i8 v4328 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4328)(v4327, v4326, v4325);

endsub:;
}
const i1 c02_s01be[] = { 0x69,0x38,0 };
const i1 c02_s01bf[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_131 workspace at ws+4200 length ws+0
void f313_emit_131(void) {

	i1 v4329 = (i1)+8;
	i8 v4330 = (i8)(intptr_t)c02_s01be;
	i8 v4331 = (i8)(intptr_t)c02_s01bf;
	i8 v4332 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4332)(v4331, v4330, v4329);

endsub:;
}
const i1 c02_s01c0[] = { 0x73,0x31,0 };
const i1 c02_s01c1[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_132 workspace at ws+4200 length ws+0
void f314_emit_132(void) {

	i1 v4333 = (i1)+1;
	i8 v4334 = (i8)(intptr_t)c02_s01c0;
	i8 v4335 = (i8)(intptr_t)c02_s01c1;
	i8 v4336 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4336)(v4335, v4334, v4333);

endsub:;
}
const i1 c02_s01c2[] = { 0x73,0x32,0 };
const i1 c02_s01c3[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_133 workspace at ws+4200 length ws+0
void f315_emit_133(void) {

	i1 v4337 = (i1)+2;
	i8 v4338 = (i8)(intptr_t)c02_s01c2;
	i8 v4339 = (i8)(intptr_t)c02_s01c3;
	i8 v4340 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4340)(v4339, v4338, v4337);

endsub:;
}
const i1 c02_s01c4[] = { 0x73,0x34,0 };
const i1 c02_s01c5[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_134 workspace at ws+4200 length ws+0
void f316_emit_134(void) {

	i1 v4341 = (i1)+4;
	i8 v4342 = (i8)(intptr_t)c02_s01c4;
	i8 v4343 = (i8)(intptr_t)c02_s01c5;
	i8 v4344 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4344)(v4343, v4342, v4341);

endsub:;
}
const i1 c02_s01c6[] = { 0x73,0x38,0 };
const i1 c02_s01c7[] = { 0x3e,0x3e,0 };
	void f179_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_135 workspace at ws+4200 length ws+0
void f317_emit_135(void) {

	i1 v4345 = (i1)+8;
	i8 v4346 = (i8)(intptr_t)c02_s01c6;
	i8 v4347 = (i8)(intptr_t)c02_s01c7;
	i8 v4348 = (i8)(intptr_t)(f179_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4348)(v4347, v4346, v4345);

endsub:;
}
const i1 c02_s01c8[] = { 0x3d,0x3d,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_136 workspace at ws+4200 length ws+0
void f318_emit_136(void) {

	i8 v4349 = (i8)(intptr_t)(ws+4104);
	i8 v4350 = *(i8*)(intptr_t)v4349;
	i8 v4351 = v4350+(+16);
	i8 v4352 = *(i8*)(intptr_t)v4351;
	i8 v4353 = (i8)(intptr_t)c02_s01c8;
	i8 v4354 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4354)(v4353, v4352);

endsub:;
}
const i1 c02_s01c9[] = { 0x3d,0x3d,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_137 workspace at ws+4200 length ws+0
void f319_emit_137(void) {

	i8 v4355 = (i8)(intptr_t)(ws+4104);
	i8 v4356 = *(i8*)(intptr_t)v4355;
	i8 v4357 = v4356+(+16);
	i8 v4358 = *(i8*)(intptr_t)v4357;
	i8 v4359 = (i8)(intptr_t)c02_s01c9;
	i8 v4360 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4360)(v4359, v4358);

endsub:;
}
const i1 c02_s01ca[] = { 0x3d,0x3d,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_138 workspace at ws+4200 length ws+0
void f320_emit_138(void) {

	i8 v4361 = (i8)(intptr_t)(ws+4104);
	i8 v4362 = *(i8*)(intptr_t)v4361;
	i8 v4363 = v4362+(+16);
	i8 v4364 = *(i8*)(intptr_t)v4363;
	i8 v4365 = (i8)(intptr_t)c02_s01ca;
	i8 v4366 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4366)(v4365, v4364);

endsub:;
}
const i1 c02_s01cb[] = { 0x3d,0x3d,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_139 workspace at ws+4200 length ws+0
void f321_emit_139(void) {

	i8 v4367 = (i8)(intptr_t)(ws+4104);
	i8 v4368 = *(i8*)(intptr_t)v4367;
	i8 v4369 = v4368+(+16);
	i8 v4370 = *(i8*)(intptr_t)v4369;
	i8 v4371 = (i8)(intptr_t)c02_s01cb;
	i8 v4372 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4372)(v4371, v4370);

endsub:;
}
const i1 c02_s01cc[] = { 0x3c,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_140 workspace at ws+4200 length ws+0
void f322_emit_140(void) {

	i8 v4373 = (i8)(intptr_t)(ws+4104);
	i8 v4374 = *(i8*)(intptr_t)v4373;
	i8 v4375 = v4374+(+16);
	i8 v4376 = *(i8*)(intptr_t)v4375;
	i8 v4377 = (i8)(intptr_t)c02_s01cc;
	i8 v4378 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4378)(v4377, v4376);

endsub:;
}
const i1 c02_s01cd[] = { 0x3c,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_141 workspace at ws+4200 length ws+0
void f323_emit_141(void) {

	i8 v4379 = (i8)(intptr_t)(ws+4104);
	i8 v4380 = *(i8*)(intptr_t)v4379;
	i8 v4381 = v4380+(+16);
	i8 v4382 = *(i8*)(intptr_t)v4381;
	i8 v4383 = (i8)(intptr_t)c02_s01cd;
	i8 v4384 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4384)(v4383, v4382);

endsub:;
}
const i1 c02_s01ce[] = { 0x3c,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_142 workspace at ws+4200 length ws+0
void f324_emit_142(void) {

	i8 v4385 = (i8)(intptr_t)(ws+4104);
	i8 v4386 = *(i8*)(intptr_t)v4385;
	i8 v4387 = v4386+(+16);
	i8 v4388 = *(i8*)(intptr_t)v4387;
	i8 v4389 = (i8)(intptr_t)c02_s01ce;
	i8 v4390 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4390)(v4389, v4388);

endsub:;
}
const i1 c02_s01cf[] = { 0x3c,0 };
	void f180_Branch(i8 /* op */, i8 /* node */);

// emit_143 workspace at ws+4200 length ws+0
void f325_emit_143(void) {

	i8 v4391 = (i8)(intptr_t)(ws+4104);
	i8 v4392 = *(i8*)(intptr_t)v4391;
	i8 v4393 = v4392+(+16);
	i8 v4394 = *(i8*)(intptr_t)v4393;
	i8 v4395 = (i8)(intptr_t)c02_s01cf;
	i8 v4396 = (i8)(intptr_t)(f180_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4396)(v4395, v4394);

endsub:;
}
const i1 c02_s01d0[] = { 0x3c,0 };
	void f181_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_144 workspace at ws+4200 length ws+0
void f326_emit_144(void) {

	i8 v4397 = (i8)(intptr_t)(ws+4104);
	i8 v4398 = *(i8*)(intptr_t)v4397;
	i8 v4399 = v4398+(+16);
	i8 v4400 = *(i8*)(intptr_t)v4399;
	i1 v4401 = (i1)+1;
	i8 v4402 = (i8)(intptr_t)c02_s01d0;
	i8 v4403 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4403)(v4402, v4401, v4400);

endsub:;
}
const i1 c02_s01d1[] = { 0x3c,0 };
	void f181_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_145 workspace at ws+4200 length ws+0
void f327_emit_145(void) {

	i8 v4404 = (i8)(intptr_t)(ws+4104);
	i8 v4405 = *(i8*)(intptr_t)v4404;
	i8 v4406 = v4405+(+16);
	i8 v4407 = *(i8*)(intptr_t)v4406;
	i1 v4408 = (i1)+2;
	i8 v4409 = (i8)(intptr_t)c02_s01d1;
	i8 v4410 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4410)(v4409, v4408, v4407);

endsub:;
}
const i1 c02_s01d2[] = { 0x3c,0 };
	void f181_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_146 workspace at ws+4200 length ws+0
void f328_emit_146(void) {

	i8 v4411 = (i8)(intptr_t)(ws+4104);
	i8 v4412 = *(i8*)(intptr_t)v4411;
	i8 v4413 = v4412+(+16);
	i8 v4414 = *(i8*)(intptr_t)v4413;
	i1 v4415 = (i1)+4;
	i8 v4416 = (i8)(intptr_t)c02_s01d2;
	i8 v4417 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4417)(v4416, v4415, v4414);

endsub:;
}
const i1 c02_s01d3[] = { 0x3c,0 };
	void f181_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_147 workspace at ws+4200 length ws+0
void f329_emit_147(void) {

	i8 v4418 = (i8)(intptr_t)(ws+4104);
	i8 v4419 = *(i8*)(intptr_t)v4418;
	i8 v4420 = v4419+(+16);
	i8 v4421 = *(i8*)(intptr_t)v4420;
	i1 v4422 = (i1)+8;
	i8 v4423 = (i8)(intptr_t)c02_s01d3;
	i8 v4424 = (i8)(intptr_t)(f181_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4424)(v4423, v4422, v4421);

endsub:;
}
	void f183_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_152 workspace at ws+4200 length ws+0
void f330_emit_152(void) {

	i8 v4425 = (i8)(intptr_t)(ws+4112);
	i8 v4426 = *(i8*)(intptr_t)v4425;
	i4 v4427 = *(i4*)(intptr_t)v4426;
	i4 v4428 = v4427&(+255);
	i8 v4429 = (i8)(intptr_t)(ws+4112);
	i8 v4430 = *(i8*)(intptr_t)v4429;
	i8 v4431 = v4430+(+4);
	i2 v4432 = *(i2*)(intptr_t)v4431;
	i8 v4433 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4433)(v4432, v4428);

endsub:;
}
	void f183_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_153 workspace at ws+4200 length ws+0
void f331_emit_153(void) {

	i8 v4434 = (i8)(intptr_t)(ws+4112);
	i8 v4435 = *(i8*)(intptr_t)v4434;
	i4 v4436 = *(i4*)(intptr_t)v4435;
	i4 v4437 = v4436&(+65535);
	i8 v4438 = (i8)(intptr_t)(ws+4112);
	i8 v4439 = *(i8*)(intptr_t)v4438;
	i8 v4440 = v4439+(+4);
	i2 v4441 = *(i2*)(intptr_t)v4440;
	i8 v4442 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4442)(v4441, v4437);

endsub:;
}
	void f183_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_154 workspace at ws+4200 length ws+0
void f332_emit_154(void) {

	i8 v4443 = (i8)(intptr_t)(ws+4112);
	i8 v4444 = *(i8*)(intptr_t)v4443;
	i4 v4445 = *(i4*)(intptr_t)v4444;
	i4 v4446 = v4445&(-1);
	i8 v4447 = (i8)(intptr_t)(ws+4112);
	i8 v4448 = *(i8*)(intptr_t)v4447;
	i8 v4449 = v4448+(+4);
	i2 v4450 = *(i2*)(intptr_t)v4449;
	i8 v4451 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4451)(v4450, v4446);

endsub:;
}
	void f183_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_155 workspace at ws+4200 length ws+0
void f333_emit_155(void) {

	i8 v4452 = (i8)(intptr_t)(ws+4112);
	i8 v4453 = *(i8*)(intptr_t)v4452;
	i4 v4454 = *(i4*)(intptr_t)v4453;
	i8 v4455 = (i8)(intptr_t)(ws+4112);
	i8 v4456 = *(i8*)(intptr_t)v4455;
	i8 v4457 = v4456+(+4);
	i2 v4458 = *(i2*)(intptr_t)v4457;
	i8 v4459 = (i8)(intptr_t)(f183_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4459)(v4458, v4454);

endsub:;
}

// emit_156 workspace at ws+4200 length ws+0
void f334_emit_156(void) {

	i8 v4460 = (i8)(intptr_t)(ws+3832);
	i1 v4461 = *(i1*)(intptr_t)v4460;
	i1 v4462 = v4461+(-1);
	i8 v4463 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4463 = v4462;

endsub:;
}

// emit_157 workspace at ws+4200 length ws+0
void f335_emit_157(void) {

	i8 v4464 = (i8)(intptr_t)(ws+3832);
	i1 v4465 = *(i1*)(intptr_t)v4464;
	i1 v4466 = v4465+(-1);
	i8 v4467 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4467 = v4466;

endsub:;
}

// emit_158 workspace at ws+4200 length ws+0
void f336_emit_158(void) {

	i8 v4468 = (i8)(intptr_t)(ws+3832);
	i1 v4469 = *(i1*)(intptr_t)v4468;
	i1 v4470 = v4469+(-1);
	i8 v4471 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4471 = v4470;

endsub:;
}

// emit_159 workspace at ws+4200 length ws+0
void f337_emit_159(void) {

	i8 v4472 = (i8)(intptr_t)(ws+3832);
	i1 v4473 = *(i1*)(intptr_t)v4472;
	i1 v4474 = v4473+(-1);
	i8 v4475 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v4475 = v4474;

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_160 workspace at ws+4200 length ws+0
void f338_emit_160(void) {

	i1 v4476 = (i1)+1;
	i1 v4477 = (i1)+2;
	i8 v4478 = (i8)(intptr_t)(ws+4112);
	i8 v4479 = *(i8*)(intptr_t)v4478;
	i1 v4480 = *(i1*)(intptr_t)v4479;
	i8 v4481 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4481)(v4480, v4477, v4476);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_161 workspace at ws+4200 length ws+0
void f339_emit_161(void) {

	i1 v4482 = (i1)+1;
	i1 v4483 = (i1)+4;
	i8 v4484 = (i8)(intptr_t)(ws+4112);
	i8 v4485 = *(i8*)(intptr_t)v4484;
	i1 v4486 = *(i1*)(intptr_t)v4485;
	i8 v4487 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4487)(v4486, v4483, v4482);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_162 workspace at ws+4200 length ws+0
void f340_emit_162(void) {

	i1 v4488 = (i1)+1;
	i1 v4489 = (i1)+8;
	i8 v4490 = (i8)(intptr_t)(ws+4112);
	i8 v4491 = *(i8*)(intptr_t)v4490;
	i1 v4492 = *(i1*)(intptr_t)v4491;
	i8 v4493 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4493)(v4492, v4489, v4488);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_163 workspace at ws+4200 length ws+0
void f341_emit_163(void) {

	i1 v4494 = (i1)+2;
	i1 v4495 = (i1)+1;
	i8 v4496 = (i8)(intptr_t)(ws+4112);
	i8 v4497 = *(i8*)(intptr_t)v4496;
	i1 v4498 = *(i1*)(intptr_t)v4497;
	i8 v4499 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4499)(v4498, v4495, v4494);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_164 workspace at ws+4200 length ws+0
void f342_emit_164(void) {

	i1 v4500 = (i1)+2;
	i1 v4501 = (i1)+4;
	i8 v4502 = (i8)(intptr_t)(ws+4112);
	i8 v4503 = *(i8*)(intptr_t)v4502;
	i1 v4504 = *(i1*)(intptr_t)v4503;
	i8 v4505 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4505)(v4504, v4501, v4500);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_165 workspace at ws+4200 length ws+0
void f343_emit_165(void) {

	i1 v4506 = (i1)+2;
	i1 v4507 = (i1)+8;
	i8 v4508 = (i8)(intptr_t)(ws+4112);
	i8 v4509 = *(i8*)(intptr_t)v4508;
	i1 v4510 = *(i1*)(intptr_t)v4509;
	i8 v4511 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4511)(v4510, v4507, v4506);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_166 workspace at ws+4200 length ws+0
void f344_emit_166(void) {

	i1 v4512 = (i1)+4;
	i1 v4513 = (i1)+1;
	i8 v4514 = (i8)(intptr_t)(ws+4112);
	i8 v4515 = *(i8*)(intptr_t)v4514;
	i1 v4516 = *(i1*)(intptr_t)v4515;
	i8 v4517 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4517)(v4516, v4513, v4512);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_167 workspace at ws+4200 length ws+0
void f345_emit_167(void) {

	i1 v4518 = (i1)+4;
	i1 v4519 = (i1)+2;
	i8 v4520 = (i8)(intptr_t)(ws+4112);
	i8 v4521 = *(i8*)(intptr_t)v4520;
	i1 v4522 = *(i1*)(intptr_t)v4521;
	i8 v4523 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4523)(v4522, v4519, v4518);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_168 workspace at ws+4200 length ws+0
void f346_emit_168(void) {

	i1 v4524 = (i1)+4;
	i1 v4525 = (i1)+8;
	i8 v4526 = (i8)(intptr_t)(ws+4112);
	i8 v4527 = *(i8*)(intptr_t)v4526;
	i1 v4528 = *(i1*)(intptr_t)v4527;
	i8 v4529 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4529)(v4528, v4525, v4524);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_169 workspace at ws+4200 length ws+0
void f347_emit_169(void) {

	i1 v4530 = (i1)+8;
	i1 v4531 = (i1)+1;
	i8 v4532 = (i8)(intptr_t)(ws+4112);
	i8 v4533 = *(i8*)(intptr_t)v4532;
	i1 v4534 = *(i1*)(intptr_t)v4533;
	i8 v4535 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4535)(v4534, v4531, v4530);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_170 workspace at ws+4200 length ws+0
void f348_emit_170(void) {

	i1 v4536 = (i1)+8;
	i1 v4537 = (i1)+2;
	i8 v4538 = (i8)(intptr_t)(ws+4112);
	i8 v4539 = *(i8*)(intptr_t)v4538;
	i1 v4540 = *(i1*)(intptr_t)v4539;
	i8 v4541 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4541)(v4540, v4537, v4536);

endsub:;
}
	void f184_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_171 workspace at ws+4200 length ws+0
void f349_emit_171(void) {

	i1 v4542 = (i1)+8;
	i1 v4543 = (i1)+4;
	i8 v4544 = (i8)(intptr_t)(ws+4112);
	i8 v4545 = *(i8*)(intptr_t)v4544;
	i1 v4546 = *(i1*)(intptr_t)v4545;
	i8 v4547 = (i8)(intptr_t)(f184_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4547)(v4546, v4543, v4542);

endsub:;
}
	void f162_Push(i2* /* vid */);
const i1 c02_s01d4[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f92_E(i8 /* text */);
	void f94_E_u16(i2 /* value */);
const i1 c02_s01d5[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f185_E_string(i2* /* sid */, i8 /* text */);
	void f101_E_h16(i2 /* value */);
const i1 c02_s01d6[] = { 0x3b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_172 workspace at ws+4200 length ws+2
void f350_emit_172(void) {

	i8 v4548 = (i8)(intptr_t)(f162_Push);
	i2 v4549;

	((void(*)(i2* /* vid */))(intptr_t)v4548)(&v4549);
	i8 v4550 = (i8)(intptr_t)(ws+4200);
	*(i2*)(intptr_t)v4550 = v4549;

	i8 v4551 = (i8)(intptr_t)c02_s01d4;
	i8 v4552 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4552)(v4551);

	i8 v4553 = (i8)(intptr_t)(ws+4200);
	i2 v4554 = *(i2*)(intptr_t)v4553;
	i8 v4555 = (i8)(intptr_t)(f94_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4555)(v4554);

	i8 v4556 = (i8)(intptr_t)c02_s01d5;
	i8 v4557 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4557)(v4556);

	i1 v4558 = (i1)+3;
	i8 v4559 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4559)(v4558);

	i1 v4560 = (i1)+115;
	i8 v4561 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4561)(v4560);

	i8 v4562 = (i8)(intptr_t)(ws+4112);
	i8 v4563 = *(i8*)(intptr_t)v4562;
	i8 v4564 = *(i8*)(intptr_t)v4563;
	i8 v4565 = (i8)(intptr_t)(f185_E_string);
	i2 v4566;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v4565)(&v4566, v4564);
	i8 v4567 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v4567)(v4566);

	i8 v4568 = (i8)(intptr_t)c02_s01d6;
	i8 v4569 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4569)(v4568);

endsub:;
}
	void f106_EmitterOpenStream(i8 /* subr */);
const i1 c02_s01d7[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
	void f92_E(i8 /* text */);
	void f105_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);
const i1 c02_s01d8[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_173 workspace at ws+4200 length ws+0
void f351_emit_173(void) {

	i8 v4570 = (i8)(intptr_t)(ws+40);
	i8 v4571 = *(i8*)(intptr_t)v4570;
	i8 v4572 = (i8)(intptr_t)(f106_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v4572)(v4571);

	i8 v4573 = (i8)(intptr_t)c02_s01d7;
	i8 v4574 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4574)(v4573);

	i8 v4575 = (i8)(intptr_t)(ws+4112);
	i8 v4576 = *(i8*)(intptr_t)v4575;
	i8 v4577 = *(i8*)(intptr_t)v4576;
	i8 v4578 = v4577+(+8);
	i2 v4579 = *(i2*)(intptr_t)v4578;
	i8 v4580 = (i8)(intptr_t)(ws+4112);
	i8 v4581 = *(i8*)(intptr_t)v4580;
	i8 v4582 = v4581+(+10);
	i1 v4583 = *(i1*)(intptr_t)v4582;
	i8 v4584 = (i8)(intptr_t)(ws+4112);
	i8 v4585 = *(i8*)(intptr_t)v4584;
	i8 v4586 = v4585+(+12);
	i2 v4587 = *(i2*)(intptr_t)v4586;
	i8 v4588 = (i8)(intptr_t)(f105_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v4588)(v4587, v4583, v4579);

	i8 v4589 = (i8)(intptr_t)c02_s01d8;
	i8 v4590 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4590)(v4589);

	i1 v4591 = (i1)+0;
	i8 v4592 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v4592 = v4591;

endsub:;
}
	void f187_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_174 workspace at ws+4200 length ws+0
void f352_emit_174(void) {

	i8 v4593 = (i8)(intptr_t)(ws+4112);
	i8 v4594 = *(i8*)(intptr_t)v4593;
	i1 v4595 = (i1)+1;
	i8 v4596 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4596)(v4595, v4594);

endsub:;
}
	void f187_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_175 workspace at ws+4200 length ws+0
void f353_emit_175(void) {

	i8 v4597 = (i8)(intptr_t)(ws+4112);
	i8 v4598 = *(i8*)(intptr_t)v4597;
	i1 v4599 = (i1)+2;
	i8 v4600 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4600)(v4599, v4598);

endsub:;
}
	void f187_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_176 workspace at ws+4200 length ws+0
void f354_emit_176(void) {

	i8 v4601 = (i8)(intptr_t)(ws+4112);
	i8 v4602 = *(i8*)(intptr_t)v4601;
	i1 v4603 = (i1)+4;
	i8 v4604 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4604)(v4603, v4602);

endsub:;
}
	void f187_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_177 workspace at ws+4200 length ws+0
void f355_emit_177(void) {

	i8 v4605 = (i8)(intptr_t)(ws+4112);
	i8 v4606 = *(i8*)(intptr_t)v4605;
	i1 v4607 = (i1)+8;
	i8 v4608 = (i8)(intptr_t)(f187_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4608)(v4607, v4606);

endsub:;
}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01d9[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f157_E_subref_sig(i8 /* subr */);
const i1 c02_s01da[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_178 workspace at ws+4200 length ws+0
void f356_emit_178(void) {

	i8 v4609 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4609)();

	i8 v4610 = (i8)(intptr_t)c02_s01d9;
	i8 v4611 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4611)(v4610);

	i8 v4612 = (i8)(intptr_t)(ws+4112);
	i8 v4613 = *(i8*)(intptr_t)v4612;
	i8 v4614 = *(i8*)(intptr_t)v4613;
	i8 v4615 = (i8)(intptr_t)(f157_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4615)(v4614);

	i8 v4616 = (i8)(intptr_t)c02_s01da;
	i8 v4617 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4617)(v4616);

endsub:;
}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01db[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s01dc[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_179 workspace at ws+4200 length ws+0
void f357_emit_179(void) {

	i8 v4618 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4618)();

	i8 v4619 = (i8)(intptr_t)c02_s01db;
	i8 v4620 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4620)(v4619);

	i8 v4621 = (i8)(intptr_t)(ws+4112);
	i8 v4622 = *(i8*)(intptr_t)v4621;
	i8 v4623 = (i8)(intptr_t)(ws+4112);
	i8 v4624 = *(i8*)(intptr_t)v4623;
	i8 v4625 = v4624+(+16);
	i2 v4626 = *(i2*)(intptr_t)v4625;
	i8 v4627 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4627)(v4626, v4622);

	i8 v4628 = (i8)(intptr_t)c02_s01dc;
	i8 v4629 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4629)(v4628);

endsub:;
}
	void f188_CheckBufferAlignment(void);
const i1 c02_s01dd[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f92_E(i8 /* text */);
	void f83_E_b8(i1 /* byte */);
	void f83_E_b8(i1 /* byte */);
	void f185_E_string(i2* /* sid */, i8 /* text */);
	void f101_E_h16(i2 /* value */);
const i1 c02_s01de[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f92_E(i8 /* text */);

// emit_180 workspace at ws+4200 length ws+0
void f358_emit_180(void) {

	i8 v4630 = (i8)(intptr_t)(f188_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4630)();

	i8 v4631 = (i8)(intptr_t)c02_s01dd;
	i8 v4632 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4632)(v4631);

	i1 v4633 = (i1)+3;
	i8 v4634 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4634)(v4633);

	i1 v4635 = (i1)+115;
	i8 v4636 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4636)(v4635);

	i8 v4637 = (i8)(intptr_t)(ws+4112);
	i8 v4638 = *(i8*)(intptr_t)v4637;
	i8 v4639 = *(i8*)(intptr_t)v4638;
	i8 v4640 = (i8)(intptr_t)(f185_E_string);
	i2 v4641;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v4640)(&v4641, v4639);
	i8 v4642 = (i8)(intptr_t)(f101_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v4642)(v4641);

	i8 v4643 = (i8)(intptr_t)c02_s01de;
	i8 v4644 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4644)(v4643);

endsub:;
}
	void f186_FlushInitialiserBuffer(void);
const i1 c02_s01df[] = { 0x7d,0x3b,0x0a,0 };
	void f92_E(i8 /* text */);
	void f107_EmitterCloseStream(void);

// emit_181 workspace at ws+4200 length ws+0
void f359_emit_181(void) {

	i8 v4645 = (i8)(intptr_t)(f186_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v4645)();

	i8 v4646 = (i8)(intptr_t)c02_s01df;
	i8 v4647 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4647)(v4646);

	i8 v4648 = (i8)(intptr_t)(f107_EmitterCloseStream);

	((void(*)(void))(intptr_t)v4648)();

endsub:;
}
	void f88_E_tab(void);

// emit_184 workspace at ws+4200 length ws+0
void f360_emit_184(void) {

	i8 v4649 = (i8)(intptr_t)(f88_E_tab);

	((void(*)(void))(intptr_t)v4649)();

endsub:;
}
	void f92_E(i8 /* text */);
	void f86_E_space(void);

// emit_185 workspace at ws+4200 length ws+0
void f361_emit_185(void) {

	i8 v4650 = (i8)(intptr_t)(ws+4112);
	i8 v4651 = *(i8*)(intptr_t)v4650;
	i8 v4652 = *(i8*)(intptr_t)v4651;
	i8 v4653 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4653)(v4652);

	i8 v4654 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4654)();

endsub:;
}
const i1 c02_s01e0[] = { 0x2a,0x28,0x69,0 };
	void f92_E(i8 /* text */);
	void f95_E_u8(i1 /* value */);
const i1 c02_s01e1[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f158_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s01e2[] = { 0x29,0 };
	void f92_E(i8 /* text */);
	void f86_E_space(void);

// emit_186 workspace at ws+4200 length ws+0
void f362_emit_186(void) {

	i8 v4655 = (i8)(intptr_t)c02_s01e0;
	i8 v4656 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4656)(v4655);

	i8 v4657 = (i8)(intptr_t)(ws+4112);
	i8 v4658 = *(i8*)(intptr_t)v4657;
	i8 v4659 = v4658+(+14);
	i1 v4660 = *(i1*)(intptr_t)v4659;
	i8 v4661 = (i8)(intptr_t)(f95_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4661)(v4660);

	i8 v4662 = (i8)(intptr_t)c02_s01e1;
	i8 v4663 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4663)(v4662);

	i8 v4664 = (i8)(intptr_t)(ws+4112);
	i8 v4665 = *(i8*)(intptr_t)v4664;
	i2 v4666 = (i2)+0;
	i8 v4667 = (i8)(intptr_t)(f158_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4667)(v4666, v4665);

	i8 v4668 = (i8)(intptr_t)c02_s01e2;
	i8 v4669 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4669)(v4668);

	i8 v4670 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4670)();

endsub:;
}
const i1 c02_s01e3[] = { 0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f92_E(i8 /* text */);
	void f157_E_subref_sig(i8 /* subr */);
const i1 c02_s01e4[] = { 0x29,0 };
	void f92_E(i8 /* text */);
	void f86_E_space(void);

// emit_187 workspace at ws+4200 length ws+0
void f363_emit_187(void) {

	i8 v4671 = (i8)(intptr_t)c02_s01e3;
	i8 v4672 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4672)(v4671);

	i8 v4673 = (i8)(intptr_t)(ws+4112);
	i8 v4674 = *(i8*)(intptr_t)v4673;
	i8 v4675 = *(i8*)(intptr_t)v4674;
	i8 v4676 = (i8)(intptr_t)(f157_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4676)(v4675);

	i8 v4677 = (i8)(intptr_t)c02_s01e4;
	i8 v4678 = (i8)(intptr_t)(f92_E);

	((void(*)(i8 /* text */))(intptr_t)v4678)(v4677);

	i8 v4679 = (i8)(intptr_t)(f86_E_space);

	((void(*)(void))(intptr_t)v4679)();

endsub:;
}
	void f83_E_b8(i1 /* byte */);
	void f98_E_i32(i4 /* value */);
	void f83_E_b8(i1 /* byte */);

// emit_188 workspace at ws+4200 length ws+0
void f364_emit_188(void) {

	i1 v4680 = (i1)+40;
	i8 v4681 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4681)(v4680);

	i8 v4682 = (i8)(intptr_t)(ws+4112);
	i8 v4683 = *(i8*)(intptr_t)v4682;
	i4 v4684 = *(i4*)(intptr_t)v4683;
	i8 v4685 = (i8)(intptr_t)(f98_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v4685)(v4684);

	i1 v4686 = (i1)+41;
	i8 v4687 = (i8)(intptr_t)(f83_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4687)(v4686);

endsub:;
}
	void f89_E_nl(void);

// emit_189 workspace at ws+4200 length ws+0
void f365_emit_189(void) {

	i8 v4688 = (i8)(intptr_t)(f89_E_nl);

	((void(*)(void))(intptr_t)v4688)();

endsub:;
}

// nop_emitter workspace at ws+4200 length ws+0
void f366_nop_emitter(void) {

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
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f237_emit_47(void);
	void f238_emit_48(void);
	void f239_emit_49(void);
	void f240_emit_50(void);
	void f242_emit_51(void);
	void f243_emit_52(void);
	void f244_emit_53(void);
	void f245_emit_54(void);
	void f246_emit_55(void);
	void f247_emit_56(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
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
	void f326_emit_144(void);
	void f327_emit_145(void);
	void f328_emit_146(void);
	void f329_emit_147(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
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
	void f356_emit_178(void);
	void f357_emit_179(void);
	void f358_emit_180(void);
	void f359_emit_181(void);
	void f366_nop_emitter(void);
	void f366_nop_emitter(void);
	void f360_emit_184(void);
	void f361_emit_185(void);
	void f362_emit_186(void);
	void f363_emit_187(void);
	void f364_emit_188(void);
	void f365_emit_189(void);
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

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f237_emit_47 },

	{ .ptr = (void*)f238_emit_48 },

	{ .ptr = (void*)f239_emit_49 },

	{ .ptr = (void*)f240_emit_50 },

	{ .ptr = (void*)f242_emit_51 },

	{ .ptr = (void*)f243_emit_52 },

	{ .ptr = (void*)f244_emit_53 },

	{ .ptr = (void*)f245_emit_54 },

	{ .ptr = (void*)f246_emit_55 },

	{ .ptr = (void*)f247_emit_56 },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

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

	{ .ptr = (void*)f326_emit_144 },

	{ .ptr = (void*)f327_emit_145 },

	{ .ptr = (void*)f328_emit_146 },

	{ .ptr = (void*)f329_emit_147 },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

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

	{ .ptr = (void*)f356_emit_178 },

	{ .ptr = (void*)f357_emit_179 },

	{ .ptr = (void*)f358_emit_180 },

	{ .ptr = (void*)f359_emit_181 },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f366_nop_emitter },

	{ .ptr = (void*)f360_emit_184 },

	{ .ptr = (void*)f361_emit_185 },

	{ .ptr = (void*)f362_emit_186 },

	{ .ptr = (void*)f363_emit_187 },

	{ .ptr = (void*)f364_emit_188 },

	{ .ptr = (void*)f365_emit_189 },

};

// EmitOneInstruction workspace at ws+4096 length ws+98
void f190_EmitOneInstruction(i8 p3495 /* self */, i1 p3496 /* ruleid */) {
	*(i1*)(intptr_t)(ws+4096) = p3496; /*ruleid */
	*(i8*)(intptr_t)(ws+4104) = p3495; /*self */

	i8 v3497 = (i8)(intptr_t)(ws+4104);
	i8 v3498 = *(i8*)(intptr_t)v3497;
	i8 v3499 = v3498+(+16);
	i8 v3500 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v3500 = v3499;

	i8 v3501 = (i8)(intptr_t)(ws+4112);
	i8 v3502 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v3502 = v3501;

	i1 v3503 = (i1)+4;
	i8 v3504 = (i8)(intptr_t)(ws+4192);
	*(i1*)(intptr_t)v3504 = v3503;

c02_02d3:;

	i8 v3505 = (i8)(intptr_t)(ws+4192);
	i1 v3506 = *(i1*)(intptr_t)v3505;
	i1 v3507 = (i1)+0;
	if (v3506==v3507) goto c02_02d6; else goto c02_02d5;

c02_02d5:;

	i8 v3508 = (i8)(intptr_t)(ws+4176);
	i8 v3509 = *(i8*)(intptr_t)v3508;
	i8 v3510 = *(i8*)(intptr_t)v3509;
	i8 v3511 = (i8)(intptr_t)(ws+4184);
	i8 v3512 = *(i8*)(intptr_t)v3511;
	*(i8*)(intptr_t)v3512 = v3510;

	i8 v3513 = (i8)(intptr_t)(ws+4184);
	i8 v3514 = *(i8*)(intptr_t)v3513;
	i8 v3515 = *(i8*)(intptr_t)v3514;
	i8 v3516 = (i8)+0;
	if (v3515==v3516) goto c02_02db; else goto c02_02da;

c02_02da:;

	i8 v3517 = (i8)(intptr_t)(ws+4184);
	i8 v3518 = *(i8*)(intptr_t)v3517;
	i8 v3519 = *(i8*)(intptr_t)v3518;
	i8 v3520 = v3519+(+57);
	i1 v3521 = *(i1*)(intptr_t)v3520;
	i8 v3522 = (i8)(intptr_t)(ws+4184);
	i8 v3523 = *(i8*)(intptr_t)v3522;
	i8 v3524 = v3523+(+8);
	*(i1*)(intptr_t)v3524 = v3521;

c02_02db:;

c02_02d7:;

	i8 v3525 = (i8)(intptr_t)(ws+4176);
	i8 v3526 = *(i8*)(intptr_t)v3525;
	i8 v3527 = v3526+(+8);
	i8 v3528 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v3528 = v3527;

	i8 v3529 = (i8)(intptr_t)(ws+4184);
	i8 v3530 = *(i8*)(intptr_t)v3529;
	i8 v3531 = v3530+(+16);
	i8 v3532 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v3532 = v3531;

	i8 v3533 = (i8)(intptr_t)(ws+4192);
	i1 v3534 = *(i1*)(intptr_t)v3533;
	i1 v3535 = v3534+(-1);
	i8 v3536 = (i8)(intptr_t)(ws+4192);
	*(i1*)(intptr_t)v3536 = v3535;

	goto c02_02d3;

c02_02d6:;

	i8 v3537 = (i8)(intptr_t)(ws+4104);
	i8 v3538 = *(i8*)(intptr_t)v3537;
	i8 v3539 = v3538+(+49);
	i1 v3540 = *(i1*)(intptr_t)v3539;
	i8 v3541 = (i8)(intptr_t)(ws+4193);
	*(i1*)(intptr_t)v3541 = v3540;

















































































































































































	i8 v4689 = (i8)(intptr_t)((i1*)f190_EmitOneInstruction_s02fe);
	i8 v4690 = (i8)(intptr_t)(ws+4096);
	i1 v4691 = *(i1*)(intptr_t)v4690;
	i8 v4692 = v4691;
	i1 v4693 = (i1)+3;
	i8 v4694 = ((i8)v4692)<<v4693;
	i8 v4695 = v4689+v4694;
	i8 v4696 = *(i8*)(intptr_t)v4695;

	((void(*)(void))(intptr_t)v4696)();

endsub:;
}
static data f3___main_s02ff[] = {








	{ .i1 = { 0x3d,0x2d,0x2d,0x37,0x32,0x38,0x33,0x39}},








	{ .i1 = { 0x34,0x3a,0x35,0xa2,0x2d,0xa3,0x2d,0xa4}},








	{ .i1 = { 0x2d,0xa5,0x2d,0x89,0x2d,0x8a,0x2d,0x8b}},








	{ .i1 = { 0x2d,0x8c,0x2d,0xa7,0x2d,0xa8,0x2d,0xa9}},








	{ .i1 = { 0x2d,0xaa,0x2d,0x8e,0x2d,0x8f,0x2d,0x90}},








	{ .i1 = { 0x2d,0x91,0x2d,0x98,0x2d,0x99,0x2d,0x9a}},








	{ .i1 = { 0x2d,0x9b,0x2d,0x93,0x2d,0x94,0x2d,0x95}},








	{ .i1 = { 0x2d,0x96,0x2d,0x9d,0x2d,0x9e,0x2d,0x9f}},








	{ .i1 = { 0x2d,0xa0,0x2d,0xac,0x2d,0xad,0x2d,0xae}},








	{ .i1 = { 0x2d,0xaf,0x2d,0xb1,0x2d,0xb2,0x2d,0xb3}},








	{ .i1 = { 0x2d,0xb4,0x2d,0xb6,0x2d,0xb7,0x2d,0xb8}},








	{ .i1 = { 0x2d,0xb9,0x2d,0x02,0x03,0x1a,0x1b,0x1c}},








	{ .i1 = { 0x04,0x05,0x1d,0x1f,0x20,0x21,0x22,0x01}},








	{ .i1 = { 0x24,0x25,0x26,0x27,0x29,0x2a,0x2b,0x2c}},








	{ .i1 = { 0x2d,0x2d,0x2d,0x2d,0x2f,0x30,0x32,0x33}},








	{ .i1 = { 0x34,0x35,0xa2,0xa3,0xa4,0xa5,0x89,0x8a}},








	{ .i1 = { 0x8b,0x8c,0xa7,0xa8,0xa9,0xaa,0x8e,0x8f}},








	{ .i1 = { 0x90,0x91,0x98,0x99,0x9a,0x9b,0x93,0x94}},








	{ .i1 = { 0x95,0x96,0x9d,0x9e,0x9f,0xa0,0xac,0xad}},








	{ .i1 = { 0xae,0xaf,0xb1,0xb2,0xb3,0xb4,0xb6,0xb7}},








	{ .i1 = { 0xb8,0xb9,0x75,0x76,0x77,0x78,0x70,0x71}},








	{ .i1 = { 0x72,0x73,0x7a,0x7b,0x7c,0x7d,0x7f,0x80}},








	{ .i1 = { 0x81,0x82,0x84,0x85,0x86,0x87,0x3e,0x3f}},








	{ .i1 = { 0x40,0x41,0x48,0x49,0x4a,0x4b,0x43,0x44}},








	{ .i1 = { 0x45,0x46,0x4d,0x4e,0x4f,0x50,0x52,0x53}},








	{ .i1 = { 0x54,0x55,0x57,0x58,0x59,0x5a,0x5d,0x5e}},








	{ .i1 = { 0x5f,0x61,0x63,0x64,0x66,0x67,0x69,0x6b}},








	{ .i1 = { 0x6c,0x6d,0x2e,0x06,0x08,0x09,0x0a,0x0b}},








	{ .i1 = { 0x0e,0x0d,0x0c,0x0f,0x10,0x11,0x12,0x13}},





	{ .i1 = { 0x14,0x15,0x16,0x17}},
};
static data f3___main_s0300[] = {








	{ .i1 = { 0x01,0x08,0x02,0x08,0x04,0x08,0x08,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x10,0x08,0x10,0x08,0x10,0x08,0x10,0x08}},








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








	{ .i1 = { 0x01,0x07,0x06,0x00,0x01,0x01,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x02,0x02,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x04,0x04,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x10,0x10,0x00,0x01,0x01,0x00,0x00,0x10}},








	{ .i1 = { 0x10,0x00,0x01,0x07,0x06,0x00,0x10,0x10}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x10,0x10,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x10,0x10,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x01,0x01,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x02,0x02,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x01,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x01,0x00,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x08,0x08,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x08,0x08,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x03,0x02,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x03,0x02,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x01,0x01,0x00}},








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








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x07,0x06,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x07,0x06,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x02,0x02,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x04,0x04,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x08,0x08,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x03,0x02,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x03,0x02,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x01,0x01,0x00}},








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








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x07,0x06,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x07,0x06,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x00,0x00,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x07,0x06,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x07,0x06,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x00,0x00,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x00,0x00,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x03,0x02,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x03,0x02,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x01,0x01,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x02,0x02,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x01,0x03,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x01,0x03,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x08,0x08,0x00}},








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








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},



	{ .i1 = { 0x01,0x00}},
};

// PopulateMatchBuffer workspace at ws+4152 length ws+24
void f367_PopulateMatchBuffer(i8 p4697 /* matchbuf */, i8 p4698 /* n */, i8 p4699 /* insn */) {
	*(i8*)(intptr_t)(ws+4152) = p4699; /*insn */
	*(i8*)(intptr_t)(ws+4160) = p4698; /*n */
	*(i8*)(intptr_t)(ws+4168) = p4697; /*matchbuf */

	i8 v4700 = (i8)(intptr_t)(ws+4160);
	i8 v4701 = *(i8*)(intptr_t)v4700;
	i8 v4702 = *(i8*)(intptr_t)v4701;
	i8 v4703 = v4702+(+256);
	i1 v4704 = *(i1*)(intptr_t)v4703;
	i8 v4705 = (i8)(intptr_t)(ws+4168);
	i8 v4706 = *(i8*)(intptr_t)v4705;
	*(i1*)(intptr_t)v4706 = v4704;

	i8 v4707 = (i8)(intptr_t)(ws+4160);
	i8 v4708 = *(i8*)(intptr_t)v4707;
	i8 v4709 = *(i8*)(intptr_t)v4708;
	i8 v4710 = v4709+(+24);
	i8 v4711 = *(i8*)(intptr_t)v4710;
	i8 v4712 = (i8)(intptr_t)(ws+4160);
	i8 v4713 = *(i8*)(intptr_t)v4712;
	i8 v4714 = v4713+(+8);
	*(i8*)(intptr_t)v4714 = v4711;

	i8 v4715 = (i8)(intptr_t)(ws+4160);
	i8 v4716 = *(i8*)(intptr_t)v4715;
	i8 v4717 = v4716+(+8);
	i8 v4718 = *(i8*)(intptr_t)v4717;
	i8 v4719 = (i8)+0;
	if (v4718==v4719) goto c02_0306; else goto c02_0305;

c02_0305:;

	i8 v4720 = (i8)(intptr_t)(ws+4160);
	i8 v4721 = *(i8*)(intptr_t)v4720;
	i8 v4722 = v4721+(+8);
	i8 v4723 = *(i8*)(intptr_t)v4722;
	i8 v4724 = v4723+(+256);
	i1 v4725 = *(i1*)(intptr_t)v4724;
	i8 v4726 = (i8)(intptr_t)(ws+4168);
	i8 v4727 = *(i8*)(intptr_t)v4726;
	i8 v4728 = v4727+(+1);
	*(i1*)(intptr_t)v4728 = v4725;

c02_0306:;

c02_0302:;

	i8 v4729 = (i8)(intptr_t)(ws+4160);
	i8 v4730 = *(i8*)(intptr_t)v4729;
	i8 v4731 = *(i8*)(intptr_t)v4730;
	i8 v4732 = v4731+(+32);
	i8 v4733 = *(i8*)(intptr_t)v4732;
	i8 v4734 = (i8)(intptr_t)(ws+4160);
	i8 v4735 = *(i8*)(intptr_t)v4734;
	i8 v4736 = v4735+(+16);
	*(i8*)(intptr_t)v4736 = v4733;

	i8 v4737 = (i8)(intptr_t)(ws+4160);
	i8 v4738 = *(i8*)(intptr_t)v4737;
	i8 v4739 = v4738+(+16);
	i8 v4740 = *(i8*)(intptr_t)v4739;
	i8 v4741 = (i8)+0;
	if (v4740==v4741) goto c02_030b; else goto c02_030a;

c02_030a:;

	i8 v4742 = (i8)(intptr_t)(ws+4160);
	i8 v4743 = *(i8*)(intptr_t)v4742;
	i8 v4744 = v4743+(+16);
	i8 v4745 = *(i8*)(intptr_t)v4744;
	i8 v4746 = v4745+(+256);
	i1 v4747 = *(i1*)(intptr_t)v4746;
	i8 v4748 = (i8)(intptr_t)(ws+4168);
	i8 v4749 = *(i8*)(intptr_t)v4748;
	i8 v4750 = v4749+(+2);
	*(i1*)(intptr_t)v4750 = v4747;

	i8 v4751 = (i8)(intptr_t)(ws+4160);
	i8 v4752 = *(i8*)(intptr_t)v4751;
	i8 v4753 = v4752+(+16);
	i8 v4754 = *(i8*)(intptr_t)v4753;
	i8 v4755 = v4754+(+24);
	i8 v4756 = *(i8*)(intptr_t)v4755;
	i8 v4757 = (i8)(intptr_t)(ws+4160);
	i8 v4758 = *(i8*)(intptr_t)v4757;
	i8 v4759 = v4758+(+24);
	*(i8*)(intptr_t)v4759 = v4756;

	i8 v4760 = (i8)(intptr_t)(ws+4160);
	i8 v4761 = *(i8*)(intptr_t)v4760;
	i8 v4762 = v4761+(+24);
	i8 v4763 = *(i8*)(intptr_t)v4762;
	i8 v4764 = (i8)+0;
	if (v4763==v4764) goto c02_0310; else goto c02_030f;

c02_030f:;

	i8 v4765 = (i8)(intptr_t)(ws+4160);
	i8 v4766 = *(i8*)(intptr_t)v4765;
	i8 v4767 = v4766+(+24);
	i8 v4768 = *(i8*)(intptr_t)v4767;
	i8 v4769 = v4768+(+256);
	i1 v4770 = *(i1*)(intptr_t)v4769;
	i8 v4771 = (i8)(intptr_t)(ws+4168);
	i8 v4772 = *(i8*)(intptr_t)v4771;
	i8 v4773 = v4772+(+3);
	*(i1*)(intptr_t)v4773 = v4770;

c02_0310:;

c02_030c:;

c02_030b:;

c02_0307:;

endsub:;
}

// IsStackedRegister workspace at ws+4200 length ws+16
void f368_IsStackedRegister(i1* p4774 /* result */, i1 p4775 /* regid */) {
	*(i1*)(intptr_t)(ws+4200) = p4775; /*regid */

	i1 v4776 = (i1)+0;
	i8 v4777 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v4777 = v4776;

	i8 v4778 = (i8)(intptr_t)((i1*)f3___main_s00ff);
	i8 v4779 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v4779 = v4778;

c02_0313:;

	i8 v4780 = (i8)(intptr_t)(ws+4208);
	i8 v4781 = *(i8*)(intptr_t)v4780;
	i8 v4782 = (i8)(intptr_t)((i1*)f3___main_s00ff+80);
	if (v4781==v4782) goto c02_0316; else goto c02_0315;

c02_0315:;

	i8 v4783 = (i8)(intptr_t)(ws+4208);
	i8 v4784 = *(i8*)(intptr_t)v4783;
	i8 v4785 = v4784+(+8);
	i1 v4786 = *(i1*)(intptr_t)v4785;
	i8 v4787 = (i8)(intptr_t)(ws+4200);
	i1 v4788 = *(i1*)(intptr_t)v4787;
	i1 v4789 = v4786&v4788;
	i1 v4790 = (i1)+0;
	if (v4789==v4790) goto c02_031b; else goto c02_031a;

c02_031a:;

	i8 v4791 = (i8)(intptr_t)(ws+4208);
	i8 v4792 = *(i8*)(intptr_t)v4791;
	i8 v4793 = v4792+(+11);
	i1 v4794 = *(i1*)(intptr_t)v4793;
	i8 v4795 = (i8)(intptr_t)(ws+4201);
	*(i1*)(intptr_t)v4795 = v4794;

	goto endsub;

c02_031b:;

c02_0317:;

	i8 v4796 = (i8)(intptr_t)(ws+4208);
	i8 v4797 = *(i8*)(intptr_t)v4796;
	i8 v4798 = v4797+(+16);
	i8 v4799 = (i8)(intptr_t)(ws+4208);
	*(i8*)(intptr_t)v4799 = v4798;

	goto c02_0313;

c02_0316:;

endsub:;
	*p4774 = *(i1*)(intptr_t)(ws+4201);
}

// CalculateBlockedRegisters workspace at ws+4112 length ws+17
void f369_CalculateBlockedRegisters(i1* p4800 /* blocked */, i8 p4801 /* last */, i8 p4802 /* insn */) {
	*(i8*)(intptr_t)(ws+4112) = p4802; /*insn */
	*(i8*)(intptr_t)(ws+4120) = p4801; /*last */

	i1 v4803 = (i1)+0;
	i8 v4804 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4804 = v4803;

	i8 v4805 = (i8)(intptr_t)(ws+4112);
	i8 v4806 = *(i8*)(intptr_t)v4805;
	i8 v4807 = (i8)(intptr_t)(ws+4120);
	i8 v4808 = *(i8*)(intptr_t)v4807;
	if (v4806==v4808) goto c02_031f; else goto c02_0320;

c02_031f:;

	goto endsub;

c02_0320:;

c02_031c:;

	i8 v4809 = (i8)(intptr_t)(ws+4112);
	i8 v4810 = *(i8*)(intptr_t)v4809;
	i8 v4811 = *(i8*)(intptr_t)v4810;
	i8 v4812 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v4812 = v4811;

c02_0323:;

	i8 v4813 = (i8)(intptr_t)(ws+4112);
	i8 v4814 = *(i8*)(intptr_t)v4813;
	i8 v4815 = (i8)(intptr_t)(ws+4120);
	i8 v4816 = *(i8*)(intptr_t)v4815;
	if (v4814==v4816) goto c02_0326; else goto c02_0325;

c02_0325:;

	i8 v4817 = (i8)(intptr_t)(ws+4128);
	i1 v4818 = *(i1*)(intptr_t)v4817;
	i8 v4819 = (i8)(intptr_t)(ws+4112);
	i8 v4820 = *(i8*)(intptr_t)v4819;
	i8 v4821 = v4820+(+64);
	i1 v4822 = *(i1*)(intptr_t)v4821;
	i1 v4823 = v4818|v4822;
	i8 v4824 = (i8)(intptr_t)(ws+4112);
	i8 v4825 = *(i8*)(intptr_t)v4824;
	i8 v4826 = v4825+(+66);
	i1 v4827 = *(i1*)(intptr_t)v4826;
	i1 v4828 = v4823|v4827;
	i8 v4829 = (i8)(intptr_t)(ws+4112);
	i8 v4830 = *(i8*)(intptr_t)v4829;
	i8 v4831 = v4830+(+65);
	i1 v4832 = *(i1*)(intptr_t)v4831;
	i1 v4833 = v4828|v4832;
	i8 v4834 = (i8)(intptr_t)(ws+4128);
	*(i1*)(intptr_t)v4834 = v4833;

	i8 v4835 = (i8)(intptr_t)(ws+4112);
	i8 v4836 = *(i8*)(intptr_t)v4835;
	i8 v4837 = (i8)(intptr_t)(ws+4120);
	i8 v4838 = *(i8*)(intptr_t)v4837;
	if (v4836==v4838) goto c02_032a; else goto c02_032b;

c02_032a:;

	goto c02_0326;

c02_032b:;

c02_0327:;

	i8 v4839 = (i8)(intptr_t)(ws+4112);
	i8 v4840 = *(i8*)(intptr_t)v4839;
	i8 v4841 = *(i8*)(intptr_t)v4840;
	i8 v4842 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v4842 = v4841;

	goto c02_0323;

c02_0326:;

endsub:;
	*p4800 = *(i1*)(intptr_t)(ws+4128);
}

// BlockRegisters workspace at ws+4112 length ws+17
void f371_BlockRegisters(i1 p4870 /* blocked */, i8 p4871 /* last */, i8 p4872 /* insn */) {
	*(i8*)(intptr_t)(ws+4112) = p4872; /*insn */
	*(i8*)(intptr_t)(ws+4120) = p4871; /*last */
	*(i1*)(intptr_t)(ws+4128) = p4870; /*blocked */

	i8 v4873 = (i8)(intptr_t)(ws+4112);
	i8 v4874 = *(i8*)(intptr_t)v4873;
	i8 v4875 = (i8)(intptr_t)(ws+4120);
	i8 v4876 = *(i8*)(intptr_t)v4875;
	if (v4874==v4876) goto c02_0334; else goto c02_0335;

c02_0334:;

	goto endsub;

c02_0335:;

c02_0331:;

	i8 v4877 = (i8)(intptr_t)(ws+4112);
	i8 v4878 = *(i8*)(intptr_t)v4877;
	i8 v4879 = *(i8*)(intptr_t)v4878;
	i8 v4880 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v4880 = v4879;

c02_0338:;

	i8 v4881 = (i8)(intptr_t)(ws+4112);
	i8 v4882 = *(i8*)(intptr_t)v4881;
	i8 v4883 = (i8)(intptr_t)(ws+4120);
	i8 v4884 = *(i8*)(intptr_t)v4883;
	if (v4882==v4884) goto c02_033b; else goto c02_033a;

c02_033a:;

	i8 v4885 = (i8)(intptr_t)(ws+4112);
	i8 v4886 = *(i8*)(intptr_t)v4885;
	i8 v4887 = v4886+(+64);
	i1 v4888 = *(i1*)(intptr_t)v4887;
	i8 v4889 = (i8)(intptr_t)(ws+4128);
	i1 v4890 = *(i1*)(intptr_t)v4889;
	i1 v4891 = v4888|v4890;
	i8 v4892 = (i8)(intptr_t)(ws+4112);
	i8 v4893 = *(i8*)(intptr_t)v4892;
	i8 v4894 = v4893+(+64);
	*(i1*)(intptr_t)v4894 = v4891;

	i8 v4895 = (i8)(intptr_t)(ws+4112);
	i8 v4896 = *(i8*)(intptr_t)v4895;
	i8 v4897 = v4896+(+65);
	i1 v4898 = *(i1*)(intptr_t)v4897;
	i8 v4899 = (i8)(intptr_t)(ws+4128);
	i1 v4900 = *(i1*)(intptr_t)v4899;
	i1 v4901 = v4898|v4900;
	i8 v4902 = (i8)(intptr_t)(ws+4112);
	i8 v4903 = *(i8*)(intptr_t)v4902;
	i8 v4904 = v4903+(+65);
	*(i1*)(intptr_t)v4904 = v4901;

	i8 v4905 = (i8)(intptr_t)(ws+4112);
	i8 v4906 = *(i8*)(intptr_t)v4905;
	i8 v4907 = v4906+(+66);
	i1 v4908 = *(i1*)(intptr_t)v4907;
	i8 v4909 = (i8)(intptr_t)(ws+4128);
	i1 v4910 = *(i1*)(intptr_t)v4909;
	i1 v4911 = v4908|v4910;
	i8 v4912 = (i8)(intptr_t)(ws+4112);
	i8 v4913 = *(i8*)(intptr_t)v4912;
	i8 v4914 = v4913+(+66);
	*(i1*)(intptr_t)v4914 = v4911;

	i8 v4915 = (i8)(intptr_t)(ws+4112);
	i8 v4916 = *(i8*)(intptr_t)v4915;
	i8 v4917 = (i8)(intptr_t)(ws+4120);
	i8 v4918 = *(i8*)(intptr_t)v4917;
	if (v4916==v4918) goto c02_033f; else goto c02_0340;

c02_033f:;

	goto c02_033b;

c02_0340:;

c02_033c:;

	i8 v4919 = (i8)(intptr_t)(ws+4112);
	i8 v4920 = *(i8*)(intptr_t)v4919;
	i8 v4921 = *(i8*)(intptr_t)v4920;
	i8 v4922 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v4922 = v4921;

	goto c02_0338;

c02_033b:;

endsub:;
}
const i1 c02_s01e5[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };
	void f68_SimpleError(i8 /* s */);

// CreateSpill workspace at ws+4112 length ws+24
void f374_CreateSpill(i1 p4998 /* dest */, i1 p4999 /* src */, i8 p5000 /* insn */) {
	*(i8*)(intptr_t)(ws+4112) = p5000; /*insn */
	*(i1*)(intptr_t)(ws+4120) = p4999; /*src */
	*(i1*)(intptr_t)(ws+4121) = p4998; /*dest */

	i8 v5001 = (i8)(intptr_t)(ws+4112);
	i8 v5002 = *(i8*)(intptr_t)v5001;
	i8 v5003 = v5002+(+83);
	i1 v5004 = *(i1*)(intptr_t)v5003;
	i8 v5005 = (i8)(intptr_t)(ws+4122);
	*(i1*)(intptr_t)v5005 = v5004;

	i8 v5006 = (i8)(intptr_t)(ws+4122);
	i1 v5007 = *(i1*)(intptr_t)v5006;
	i1 v5008 = (i1)+5;
	if (v5007==v5008) goto c02_0354; else goto c02_0355;

c02_0354:;

	i8 v5009 = (i8)(intptr_t)c02_s01e5;
	i8 v5010 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v5010)(v5009);

c02_0355:;

c02_0351:;

	i8 v5011 = (i8)(intptr_t)(ws+4112);
	i8 v5012 = *(i8*)(intptr_t)v5011;
	i8 v5013 = v5012+(+67);
	i8 v5014 = (i8)(intptr_t)(ws+4122);
	i1 v5015 = *(i1*)(intptr_t)v5014;
	i8 v5016 = v5015;
	i1 v5017 = (i1)+1;
	i8 v5018 = ((i8)v5016)<<v5017;
	i8 v5019 = v5013+v5018;
	i8 v5020 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v5020 = v5019;

	i8 v5021 = (i8)(intptr_t)(ws+4120);
	i1 v5022 = *(i1*)(intptr_t)v5021;
	i8 v5023 = (i8)(intptr_t)(ws+4128);
	i8 v5024 = *(i8*)(intptr_t)v5023;
	*(i1*)(intptr_t)v5024 = v5022;

	i8 v5025 = (i8)(intptr_t)(ws+4121);
	i1 v5026 = *(i1*)(intptr_t)v5025;
	i8 v5027 = (i8)(intptr_t)(ws+4128);
	i8 v5028 = *(i8*)(intptr_t)v5027;
	i8 v5029 = v5028+(+1);
	*(i1*)(intptr_t)v5029 = v5026;

	i8 v5030 = (i8)(intptr_t)(ws+4122);
	i1 v5031 = *(i1*)(intptr_t)v5030;
	i1 v5032 = v5031+(+1);
	i8 v5033 = (i8)(intptr_t)(ws+4112);
	i8 v5034 = *(i8*)(intptr_t)v5033;
	i8 v5035 = v5034+(+83);
	*(i1*)(intptr_t)v5035 = v5032;

endsub:;
}
const i1 c02_s01e6[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };
	void f68_SimpleError(i8 /* s */);

// CreateReload workspace at ws+4112 length ws+24
void f375_CreateReload(i1 p5036 /* dest */, i1 p5037 /* src */, i8 p5038 /* insn */) {
	*(i8*)(intptr_t)(ws+4112) = p5038; /*insn */
	*(i1*)(intptr_t)(ws+4120) = p5037; /*src */
	*(i1*)(intptr_t)(ws+4121) = p5036; /*dest */

	i8 v5039 = (i8)(intptr_t)(ws+4112);
	i8 v5040 = *(i8*)(intptr_t)v5039;
	i8 v5041 = v5040+(+84);
	i1 v5042 = *(i1*)(intptr_t)v5041;
	i8 v5043 = (i8)(intptr_t)(ws+4122);
	*(i1*)(intptr_t)v5043 = v5042;

	i8 v5044 = (i8)(intptr_t)(ws+4122);
	i1 v5045 = *(i1*)(intptr_t)v5044;
	i1 v5046 = (i1)+5;
	if (v5045==v5046) goto c02_0359; else goto c02_035a;

c02_0359:;

	i8 v5047 = (i8)(intptr_t)c02_s01e6;
	i8 v5048 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v5048)(v5047);

c02_035a:;

c02_0356:;

	i8 v5049 = (i8)(intptr_t)(ws+4112);
	i8 v5050 = *(i8*)(intptr_t)v5049;
	i8 v5051 = v5050+(+75);
	i8 v5052 = (i8)(intptr_t)(ws+4122);
	i1 v5053 = *(i1*)(intptr_t)v5052;
	i8 v5054 = v5053;
	i1 v5055 = (i1)+1;
	i8 v5056 = ((i8)v5054)<<v5055;
	i8 v5057 = v5051+v5056;
	i8 v5058 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v5058 = v5057;

	i8 v5059 = (i8)(intptr_t)(ws+4120);
	i1 v5060 = *(i1*)(intptr_t)v5059;
	i8 v5061 = (i8)(intptr_t)(ws+4128);
	i8 v5062 = *(i8*)(intptr_t)v5061;
	*(i1*)(intptr_t)v5062 = v5060;

	i8 v5063 = (i8)(intptr_t)(ws+4121);
	i1 v5064 = *(i1*)(intptr_t)v5063;
	i8 v5065 = (i8)(intptr_t)(ws+4128);
	i8 v5066 = *(i8*)(intptr_t)v5065;
	i8 v5067 = v5066+(+1);
	*(i1*)(intptr_t)v5067 = v5064;

	i8 v5068 = (i8)(intptr_t)(ws+4122);
	i1 v5069 = *(i1*)(intptr_t)v5068;
	i1 v5070 = v5069+(+1);
	i8 v5071 = (i8)(intptr_t)(ws+4112);
	i8 v5072 = *(i8*)(intptr_t)v5071;
	i8 v5073 = v5072+(+84);
	*(i1*)(intptr_t)v5073 = v5070;

endsub:;
}
	void f168_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f168_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f168_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f168_ArchEmitMove(i1 /* dest */, i1 /* src */);

// ShuffleRegisters workspace at ws+4096 length ws+25
void f376_ShuffleRegisters(i8 p5074 /* moves */) {
	*(i8*)(intptr_t)(ws+4096) = p5074; /*moves */

	i1 v5075 = (i1)+0;
	i8 v5076 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v5076 = v5075;

	i1 v5077 = (i1)+0;
	i8 v5078 = (i8)(intptr_t)(ws+4105);
	*(i1*)(intptr_t)v5078 = v5077;

	i8 v5079 = (i8)(intptr_t)(ws+4096);
	i8 v5080 = *(i8*)(intptr_t)v5079;
	i8 v5081 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5081 = v5080;

	i1 v5082 = (i1)+4;
	i8 v5083 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5083 = v5082;

c02_035d:;

	i8 v5084 = (i8)(intptr_t)(ws+4120);
	i1 v5085 = *(i1*)(intptr_t)v5084;
	i1 v5086 = (i1)+0;
	if (v5085==v5086) goto c02_0360; else goto c02_035f;

c02_035f:;

	i8 v5087 = (i8)(intptr_t)(ws+4104);
	i1 v5088 = *(i1*)(intptr_t)v5087;
	i8 v5089 = (i8)(intptr_t)(ws+4112);
	i8 v5090 = *(i8*)(intptr_t)v5089;
	i8 v5091 = v5090+(+1);
	i1 v5092 = *(i1*)(intptr_t)v5091;
	i1 v5093 = v5088|v5092;
	i8 v5094 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v5094 = v5093;

	i8 v5095 = (i8)(intptr_t)(ws+4105);
	i1 v5096 = *(i1*)(intptr_t)v5095;
	i8 v5097 = (i8)(intptr_t)(ws+4112);
	i8 v5098 = *(i8*)(intptr_t)v5097;
	i1 v5099 = *(i1*)(intptr_t)v5098;
	i1 v5100 = v5096|v5099;
	i8 v5101 = (i8)(intptr_t)(ws+4105);
	*(i1*)(intptr_t)v5101 = v5100;

	i8 v5102 = (i8)(intptr_t)(ws+4120);
	i1 v5103 = *(i1*)(intptr_t)v5102;
	i1 v5104 = v5103+(-1);
	i8 v5105 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5105 = v5104;

	i8 v5106 = (i8)(intptr_t)(ws+4112);
	i8 v5107 = *(i8*)(intptr_t)v5106;
	i8 v5108 = v5107+(+2);
	i8 v5109 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5109 = v5108;

	goto c02_035d;

c02_0360:;

c02_0361:;

	i8 v5110 = (i8)(intptr_t)(ws+4096);
	i8 v5111 = *(i8*)(intptr_t)v5110;
	i8 v5112 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5112 = v5111;

	i1 v5113 = (i1)+4;
	i8 v5114 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5114 = v5113;

c02_0365:;

	i8 v5115 = (i8)(intptr_t)(ws+4120);
	i1 v5116 = *(i1*)(intptr_t)v5115;
	i1 v5117 = (i1)+0;
	if (v5116==v5117) goto c02_0368; else goto c02_0367;

c02_0367:;

	i8 v5118 = (i8)(intptr_t)(ws+4112);
	i8 v5119 = *(i8*)(intptr_t)v5118;
	i1 v5120 = *(i1*)(intptr_t)v5119;
	i1 v5121 = (i1)+0;
	if (v5120==v5121) goto c02_036f; else goto c02_0370;

c02_0370:;

	i8 v5122 = (i8)(intptr_t)(ws+4112);
	i8 v5123 = *(i8*)(intptr_t)v5122;
	i8 v5124 = v5123+(+1);
	i1 v5125 = *(i1*)(intptr_t)v5124;
	i1 v5126 = (i1)+0;
	if (v5125==v5126) goto c02_036e; else goto c02_036f;

c02_036e:;

	goto c02_0368;

c02_036f:;

c02_0369:;

	i8 v5127 = (i8)(intptr_t)(ws+4112);
	i8 v5128 = *(i8*)(intptr_t)v5127;
	i8 v5129 = v5128+(+2);
	i8 v5130 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5130 = v5129;

	i8 v5131 = (i8)(intptr_t)(ws+4120);
	i1 v5132 = *(i1*)(intptr_t)v5131;
	i1 v5133 = v5132+(-1);
	i8 v5134 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5134 = v5133;

	goto c02_0365;

c02_0368:;

	i8 v5135 = (i8)(intptr_t)(ws+4120);
	i1 v5136 = *(i1*)(intptr_t)v5135;
	i1 v5137 = (i1)+0;
	if (v5136==v5137) goto c02_0375; else goto c02_0374;

c02_0374:;

	i8 v5138 = (i8)(intptr_t)(ws+4112);
	i8 v5139 = *(i8*)(intptr_t)v5138;
	i1 v5140 = *(i1*)(intptr_t)v5139;
	i1 v5141 = (i1)+0;
	i8 v5142 = (i8)(intptr_t)(f168_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v5142)(v5141, v5140);

	i8 v5143 = (i8)(intptr_t)(ws+4105);
	i1 v5144 = *(i1*)(intptr_t)v5143;
	i8 v5145 = (i8)(intptr_t)(ws+4112);
	i8 v5146 = *(i8*)(intptr_t)v5145;
	i1 v5147 = *(i1*)(intptr_t)v5146;
	i1 v5148 = ~v5147;
	i1 v5149 = v5144&v5148;
	i8 v5150 = (i8)(intptr_t)(ws+4105);
	*(i1*)(intptr_t)v5150 = v5149;

	i1 v5151 = (i1)+0;
	i8 v5152 = (i8)(intptr_t)(ws+4112);
	i8 v5153 = *(i8*)(intptr_t)v5152;
	*(i1*)(intptr_t)v5153 = v5151;

	goto c02_0361;

c02_0375:;

c02_0371:;

	i8 v5154 = (i8)(intptr_t)(ws+4096);
	i8 v5155 = *(i8*)(intptr_t)v5154;
	i8 v5156 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5156 = v5155;

	i1 v5157 = (i1)+4;
	i8 v5158 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5158 = v5157;

c02_0378:;

	i8 v5159 = (i8)(intptr_t)(ws+4120);
	i1 v5160 = *(i1*)(intptr_t)v5159;
	i1 v5161 = (i1)+0;
	if (v5160==v5161) goto c02_037b; else goto c02_037a;

c02_037a:;

	i8 v5162 = (i8)(intptr_t)(ws+4112);
	i8 v5163 = *(i8*)(intptr_t)v5162;
	i1 v5164 = *(i1*)(intptr_t)v5163;
	i1 v5165 = (i1)+0;
	if (v5164==v5165) goto c02_0384; else goto c02_0386;

c02_0386:;

	i8 v5166 = (i8)(intptr_t)(ws+4112);
	i8 v5167 = *(i8*)(intptr_t)v5166;
	i8 v5168 = v5167+(+1);
	i1 v5169 = *(i1*)(intptr_t)v5168;
	i1 v5170 = (i1)+0;
	if (v5169==v5170) goto c02_0384; else goto c02_0385;

c02_0385:;

	i8 v5171 = (i8)(intptr_t)(ws+4112);
	i8 v5172 = *(i8*)(intptr_t)v5171;
	i8 v5173 = v5172+(+1);
	i1 v5174 = *(i1*)(intptr_t)v5173;
	i8 v5175 = (i8)(intptr_t)(ws+4105);
	i1 v5176 = *(i1*)(intptr_t)v5175;
	i1 v5177 = v5174&v5176;
	i1 v5178 = (i1)+0;
	if (v5177==v5178) goto c02_0383; else goto c02_0384;

c02_0383:;

	goto c02_037b;

c02_0384:;

c02_037c:;

	i8 v5179 = (i8)(intptr_t)(ws+4112);
	i8 v5180 = *(i8*)(intptr_t)v5179;
	i8 v5181 = v5180+(+2);
	i8 v5182 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5182 = v5181;

	i8 v5183 = (i8)(intptr_t)(ws+4120);
	i1 v5184 = *(i1*)(intptr_t)v5183;
	i1 v5185 = v5184+(-1);
	i8 v5186 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5186 = v5185;

	goto c02_0378;

c02_037b:;

	i8 v5187 = (i8)(intptr_t)(ws+4120);
	i1 v5188 = *(i1*)(intptr_t)v5187;
	i1 v5189 = (i1)+0;
	if (v5188==v5189) goto c02_038b; else goto c02_038a;

c02_038a:;

	i8 v5190 = (i8)(intptr_t)(ws+4112);
	i8 v5191 = *(i8*)(intptr_t)v5190;
	i1 v5192 = *(i1*)(intptr_t)v5191;
	i8 v5193 = (i8)(intptr_t)(ws+4112);
	i8 v5194 = *(i8*)(intptr_t)v5193;
	i8 v5195 = v5194+(+1);
	i1 v5196 = *(i1*)(intptr_t)v5195;
	i8 v5197 = (i8)(intptr_t)(f168_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v5197)(v5196, v5192);

	i8 v5198 = (i8)(intptr_t)(ws+4105);
	i1 v5199 = *(i1*)(intptr_t)v5198;
	i8 v5200 = (i8)(intptr_t)(ws+4112);
	i8 v5201 = *(i8*)(intptr_t)v5200;
	i1 v5202 = *(i1*)(intptr_t)v5201;
	i1 v5203 = ~v5202;
	i1 v5204 = v5199&v5203;
	i8 v5205 = (i8)(intptr_t)(ws+4105);
	*(i1*)(intptr_t)v5205 = v5204;

	i8 v5206 = (i8)(intptr_t)(ws+4104);
	i1 v5207 = *(i1*)(intptr_t)v5206;
	i8 v5208 = (i8)(intptr_t)(ws+4112);
	i8 v5209 = *(i8*)(intptr_t)v5208;
	i8 v5210 = v5209+(+1);
	i1 v5211 = *(i1*)(intptr_t)v5210;
	i1 v5212 = ~v5211;
	i1 v5213 = v5207&v5212;
	i8 v5214 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v5214 = v5213;

	i1 v5215 = (i1)+0;
	i8 v5216 = (i8)(intptr_t)(ws+4112);
	i8 v5217 = *(i8*)(intptr_t)v5216;
	*(i1*)(intptr_t)v5217 = v5215;

	i1 v5218 = (i1)+0;
	i8 v5219 = (i8)(intptr_t)(ws+4112);
	i8 v5220 = *(i8*)(intptr_t)v5219;
	i8 v5221 = v5220+(+1);
	*(i1*)(intptr_t)v5221 = v5218;

	goto c02_0361;

c02_038b:;

c02_0387:;

	i8 v5222 = (i8)(intptr_t)(ws+4096);
	i8 v5223 = *(i8*)(intptr_t)v5222;
	i8 v5224 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5224 = v5223;

	i1 v5225 = (i1)+4;
	i8 v5226 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5226 = v5225;

c02_038e:;

	i8 v5227 = (i8)(intptr_t)(ws+4120);
	i1 v5228 = *(i1*)(intptr_t)v5227;
	i1 v5229 = (i1)+0;
	if (v5228==v5229) goto c02_0391; else goto c02_0390;

c02_0390:;

	i8 v5230 = (i8)(intptr_t)(ws+4112);
	i8 v5231 = *(i8*)(intptr_t)v5230;
	i1 v5232 = *(i1*)(intptr_t)v5231;
	i1 v5233 = (i1)+0;
	if (v5232==v5233) goto c02_0399; else goto c02_0398;

c02_0399:;

	i8 v5234 = (i8)(intptr_t)(ws+4112);
	i8 v5235 = *(i8*)(intptr_t)v5234;
	i8 v5236 = v5235+(+1);
	i1 v5237 = *(i1*)(intptr_t)v5236;
	i1 v5238 = (i1)+0;
	if (v5237==v5238) goto c02_0398; else goto c02_0397;

c02_0397:;

	goto c02_0391;

c02_0398:;

c02_0392:;

	i8 v5239 = (i8)(intptr_t)(ws+4112);
	i8 v5240 = *(i8*)(intptr_t)v5239;
	i8 v5241 = v5240+(+2);
	i8 v5242 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5242 = v5241;

	i8 v5243 = (i8)(intptr_t)(ws+4120);
	i1 v5244 = *(i1*)(intptr_t)v5243;
	i1 v5245 = v5244+(-1);
	i8 v5246 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5246 = v5245;

	goto c02_038e;

c02_0391:;

	i8 v5247 = (i8)(intptr_t)(ws+4120);
	i1 v5248 = *(i1*)(intptr_t)v5247;
	i1 v5249 = (i1)+0;
	if (v5248==v5249) goto c02_039e; else goto c02_039d;

c02_039d:;

	i1 v5250 = (i1)+0;
	i8 v5251 = (i8)(intptr_t)(ws+4112);
	i8 v5252 = *(i8*)(intptr_t)v5251;
	i8 v5253 = v5252+(+1);
	i1 v5254 = *(i1*)(intptr_t)v5253;
	i8 v5255 = (i8)(intptr_t)(f168_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v5255)(v5254, v5250);

	i8 v5256 = (i8)(intptr_t)(ws+4104);
	i1 v5257 = *(i1*)(intptr_t)v5256;
	i8 v5258 = (i8)(intptr_t)(ws+4112);
	i8 v5259 = *(i8*)(intptr_t)v5258;
	i8 v5260 = v5259+(+1);
	i1 v5261 = *(i1*)(intptr_t)v5260;
	i1 v5262 = ~v5261;
	i1 v5263 = v5257&v5262;
	i8 v5264 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v5264 = v5263;

	i1 v5265 = (i1)+0;
	i8 v5266 = (i8)(intptr_t)(ws+4112);
	i8 v5267 = *(i8*)(intptr_t)v5266;
	i8 v5268 = v5267+(+1);
	*(i1*)(intptr_t)v5268 = v5265;

	goto c02_0361;

c02_039e:;

c02_039a:;

	i8 v5269 = (i8)(intptr_t)(ws+4096);
	i8 v5270 = *(i8*)(intptr_t)v5269;
	i8 v5271 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5271 = v5270;

	i1 v5272 = (i1)+4;
	i8 v5273 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5273 = v5272;

c02_03a1:;

	i8 v5274 = (i8)(intptr_t)(ws+4120);
	i1 v5275 = *(i1*)(intptr_t)v5274;
	i1 v5276 = (i1)+0;
	if (v5275==v5276) goto c02_03a4; else goto c02_03a3;

c02_03a3:;

	i8 v5277 = (i8)(intptr_t)(ws+4112);
	i8 v5278 = *(i8*)(intptr_t)v5277;
	i1 v5279 = *(i1*)(intptr_t)v5278;
	i1 v5280 = (i1)+0;
	if (v5279==v5280) goto c02_03ab; else goto c02_03ac;

c02_03ac:;

	i8 v5281 = (i8)(intptr_t)(ws+4112);
	i8 v5282 = *(i8*)(intptr_t)v5281;
	i8 v5283 = v5282+(+1);
	i1 v5284 = *(i1*)(intptr_t)v5283;
	i1 v5285 = (i1)+0;
	if (v5284==v5285) goto c02_03ab; else goto c02_03aa;

c02_03aa:;

	goto c02_03a4;

c02_03ab:;

c02_03a5:;

	i8 v5286 = (i8)(intptr_t)(ws+4112);
	i8 v5287 = *(i8*)(intptr_t)v5286;
	i8 v5288 = v5287+(+2);
	i8 v5289 = (i8)(intptr_t)(ws+4112);
	*(i8*)(intptr_t)v5289 = v5288;

	i8 v5290 = (i8)(intptr_t)(ws+4120);
	i1 v5291 = *(i1*)(intptr_t)v5290;
	i1 v5292 = v5291+(-1);
	i8 v5293 = (i8)(intptr_t)(ws+4120);
	*(i1*)(intptr_t)v5293 = v5292;

	goto c02_03a1;

c02_03a4:;

	i8 v5294 = (i8)(intptr_t)(ws+4120);
	i1 v5295 = *(i1*)(intptr_t)v5294;
	i1 v5296 = (i1)+0;
	if (v5295==v5296) goto c02_03b1; else goto c02_03b0;

c02_03b0:;

	i8 v5297 = (i8)(intptr_t)(ws+4112);
	i8 v5298 = *(i8*)(intptr_t)v5297;
	i1 v5299 = *(i1*)(intptr_t)v5298;
	i1 v5300 = (i1)+0;
	i8 v5301 = (i8)(intptr_t)(f168_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v5301)(v5300, v5299);

	i8 v5302 = (i8)(intptr_t)(ws+4105);
	i1 v5303 = *(i1*)(intptr_t)v5302;
	i8 v5304 = (i8)(intptr_t)(ws+4112);
	i8 v5305 = *(i8*)(intptr_t)v5304;
	i1 v5306 = *(i1*)(intptr_t)v5305;
	i1 v5307 = ~v5306;
	i1 v5308 = v5303&v5307;
	i8 v5309 = (i8)(intptr_t)(ws+4105);
	*(i1*)(intptr_t)v5309 = v5308;

	i1 v5310 = (i1)+0;
	i8 v5311 = (i8)(intptr_t)(ws+4112);
	i8 v5312 = *(i8*)(intptr_t)v5311;
	*(i1*)(intptr_t)v5312 = v5310;

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

// PrintNodes workspace at ws+4152 length ws+24
void f377_PrintNodes(i8 p5313 /* rootnode */) {
	*(i8*)(intptr_t)(ws+4152) = p5313; /*rootnode */

	i8 v5314 = (i8)(intptr_t)(ws+184);
	i8 v5315 = *(i8*)(intptr_t)v5314;
	i8 v5316 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5316 = v5315;

	i8 v5317 = (i8)(intptr_t)(ws+4152);
	i8 v5318 = *(i8*)(intptr_t)v5317;
	i8 v5319 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5319)(v5318);

c02_03b4:;

	i8 v5320 = (i8)(intptr_t)(ws+184);
	i8 v5321 = *(i8*)(intptr_t)v5320;
	i8 v5322 = (i8)(intptr_t)(ws+4160);
	i8 v5323 = *(i8*)(intptr_t)v5322;
	if (v5321==v5323) goto c02_03b7; else goto c02_03b6;

c02_03b6:;

	i8 v5324 = (i8)(intptr_t)(f63_NextNode);
	i8 v5325;

	((void(*)(i8* /* node */))(intptr_t)v5324)(&v5325);
	i8 v5326 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v5326 = v5325;

	i8 v5327 = (i8)(intptr_t)(ws+4168);
	i8 v5328 = *(i8*)(intptr_t)v5327;
	i8 v5329 = (i8)+0;
	if (v5328==v5329) goto c02_03bb; else goto c02_03bc;

c02_03bb:;

	goto c02_03b7;

c02_03bc:;

c02_03b8:;

	i8 v5330 = (i8)(intptr_t)(ws+4168);
	i8 v5331 = *(i8*)(intptr_t)v5330;
	i4 v5332 = v5331;
	i8 v5333 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5333)(v5332);

	i1 v5334 = (i1)+32;
	i8 v5335 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5335)(v5334);

	i8 v5336 = (i8)(intptr_t)(ws+4168);
	i8 v5337 = *(i8*)(intptr_t)v5336;
	i8 v5338 = v5337+(+256);
	i1 v5339 = *(i1*)(intptr_t)v5338;
	i8 v5340 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v5340)(v5339);

	i1 v5341 = (i1)+61;
	i8 v5342 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5342)(v5341);

	i8 v5343 = (i8)(intptr_t)(ws+4168);
	i8 v5344 = *(i8*)(intptr_t)v5343;
	i8 v5345 = v5344+(+256);
	i1 v5346 = *(i1*)(intptr_t)v5345;
	i8 v5347 = (i8)(intptr_t)(f78_MidcodeName);
	i8 v5348;

	((void(*)(i8* /* name */, i1 /* op */))(intptr_t)v5347)(&v5348, v5346);
	i8 v5349 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5349)(v5348);

	i1 v5350 = (i1)+32;
	i8 v5351 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5351)(v5350);

	i8 v5352 = (i8)(intptr_t)(ws+4168);
	i8 v5353 = *(i8*)(intptr_t)v5352;
	i8 v5354 = v5353+(+56);
	i1 v5355 = *(i1*)(intptr_t)v5354;
	i4 v5356 = v5355;
	i8 v5357 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5357)(v5356);

	i1 v5358 = (i1)+32;
	i8 v5359 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5359)(v5358);

	i8 v5360 = (i8)(intptr_t)(ws+4168);
	i8 v5361 = *(i8*)(intptr_t)v5360;
	i8 v5362 = v5361+(+57);
	i1 v5363 = *(i1*)(intptr_t)v5362;
	i4 v5364 = v5363;
	i8 v5365 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5365)(v5364);

	i1 v5366 = (i1)+32;
	i8 v5367 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5367)(v5366);

	i8 v5368 = (i8)(intptr_t)(ws+4168);
	i8 v5369 = *(i8*)(intptr_t)v5368;
	i8 v5370 = v5369+(+24);
	i8 v5371 = *(i8*)(intptr_t)v5370;
	i4 v5372 = v5371;
	i8 v5373 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5373)(v5372);

	i1 v5374 = (i1)+32;
	i8 v5375 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5375)(v5374);

	i8 v5376 = (i8)(intptr_t)(ws+4168);
	i8 v5377 = *(i8*)(intptr_t)v5376;
	i8 v5378 = v5377+(+32);
	i8 v5379 = *(i8*)(intptr_t)v5378;
	i4 v5380 = v5379;
	i8 v5381 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5381)(v5380);

	i8 v5382 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v5382)();

	goto c02_03b4;

c02_03b7:;

endsub:;
}
	void f368_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f368_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// IsSimpleValue workspace at ws+4168 length ws+32
void f381_IsSimpleValue(i1* p5508 /* res */, i8 p5509 /* value */, i8 p5510 /* insn */) {
	*(i8*)(intptr_t)(ws+4168) = p5510; /*insn */
	*(i8*)(intptr_t)(ws+4176) = p5509; /*value */

	i1 v5511 = (i1)+0;
	i8 v5512 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v5512 = v5511;

	i8 v5513 = (i8)(intptr_t)(ws+4168);
	i8 v5514 = *(i8*)(intptr_t)v5513;
	i8 v5515 = v5514+(+48);
	i1 v5516 = *(i1*)(intptr_t)v5515;
	i8 v5517 = (i8)(intptr_t)(f368_IsStackedRegister);
	i1 v5518;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v5517)(&v5518, v5516);
	i1 v5519 = (i1)+0;
	if (v5518==v5519) goto c02_03e8; else goto c02_03e9;

c02_03e8:;

	i8 v5520 = (i8)(intptr_t)(ws+4168);
	i8 v5521 = *(i8*)(intptr_t)v5520;
	i8 v5522 = v5521+(+16);
	i8 v5523 = *(i8*)(intptr_t)v5522;
	i8 v5524 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5524 = v5523;

	i8 v5525 = (i8)(intptr_t)(ws+4192);
	i8 v5526 = *(i8*)(intptr_t)v5525;
	i8 v5527 = v5526+(+256);
	i1 v5528 = *(i1*)(intptr_t)v5527;
	i1 v5529 = (i1)+24;
	if (v5528==v5529) goto c02_03ed; else goto c02_03ee;

c02_03ed:;

	i8 v5530 = (i8)(intptr_t)(ws+4192);
	i8 v5531 = *(i8*)(intptr_t)v5530;
	i8 v5532 = v5531+(+24);
	i8 v5533 = *(i8*)(intptr_t)v5532;
	i8 v5534 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v5534 = v5533;

c02_03ee:;

c02_03ea:;

	i8 v5535 = (i8)(intptr_t)(ws+4192);
	i8 v5536 = *(i8*)(intptr_t)v5535;
	i8 v5537 = v5536+(+24);
	i8 v5538 = *(i8*)(intptr_t)v5537;
	i8 v5539 = (i8)+0;
	if (v5538==v5539) goto c02_03f5; else goto c02_03f6;

c02_03f6:;

	i8 v5540 = (i8)(intptr_t)(ws+4192);
	i8 v5541 = *(i8*)(intptr_t)v5540;
	i8 v5542 = v5541+(+57);
	i1 v5543 = *(i1*)(intptr_t)v5542;
	i8 v5544 = (i8)(intptr_t)(f368_IsStackedRegister);
	i1 v5545;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v5544)(&v5545, v5543);
	i1 v5546 = (i1)+0;
	if (v5545==v5546) goto c02_03f4; else goto c02_03f5;

c02_03f4:;

	goto endsub;

c02_03f5:;

c02_03ef:;

	i8 v5547 = (i8)(intptr_t)(ws+4192);
	i8 v5548 = *(i8*)(intptr_t)v5547;
	i8 v5549 = v5548+(+256);
	i1 v5550 = *(i1*)(intptr_t)v5549;
	i1 v5551 = (i1)+47;
	if (v5550==v5551) goto c02_03fa; else goto c02_03fb;

c02_03fa:;

	i8 v5552 = (i8)(intptr_t)(ws+4192);
	i8 v5553 = *(i8*)(intptr_t)v5552;
	i8 v5554 = (i8)+18;
	i8 v5555 = (i8)(intptr_t)(ws+4176);
	i8 v5556 = *(i8*)(intptr_t)v5555;
	i8 v5557 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v5557)(v5556, v5554, v5553);

	i1 v5558 = (i1)+47;
	i8 v5559 = (i8)(intptr_t)(ws+4176);
	i8 v5560 = *(i8*)(intptr_t)v5559;
	i8 v5561 = v5560+(+19);
	*(i1*)(intptr_t)v5561 = v5558;

	i1 v5562 = (i1)+1;
	i8 v5563 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v5563 = v5562;

	goto c02_03f7;

c02_03fb:;

	i8 v5564 = (i8)(intptr_t)(ws+4192);
	i8 v5565 = *(i8*)(intptr_t)v5564;
	i8 v5566 = v5565+(+256);
	i1 v5567 = *(i1*)(intptr_t)v5566;
	i1 v5568 = (i1)+45;
	if (v5567==v5568) goto c02_03fe; else goto c02_03ff;

c02_03fe:;

	i8 v5569 = (i8)(intptr_t)(ws+4192);
	i8 v5570 = *(i8*)(intptr_t)v5569;
	i4 v5571 = *(i4*)(intptr_t)v5570;
	i8 v5572 = (i8)(intptr_t)(ws+4176);
	i8 v5573 = *(i8*)(intptr_t)v5572;
	*(i4*)(intptr_t)v5573 = v5571;

	i1 v5574 = (i1)+45;
	i8 v5575 = (i8)(intptr_t)(ws+4176);
	i8 v5576 = *(i8*)(intptr_t)v5575;
	i8 v5577 = v5576+(+19);
	*(i1*)(intptr_t)v5577 = v5574;

	i1 v5578 = (i1)+1;
	i8 v5579 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v5579 = v5578;

c02_03ff:;

c02_03f7:;

c02_03e9:;

c02_03e5:;

endsub:;
	*p5508 = *(i1*)(intptr_t)(ws+4184);
}

// check_deref workspace at ws+4192 length ws+0
void f383_check_deref(void) {

	i8 v5593 = (i8)(intptr_t)(ws+4168);
	i8 v5594 = *(i8*)(intptr_t)v5593;
	i8 v5595 = *(i8*)(intptr_t)v5594;
	i8 v5596 = (i8)(intptr_t)(ws+4176);
	i8 v5597 = *(i8*)(intptr_t)v5596;
	i8 v5598 = *(i8*)(intptr_t)v5597;
	if (v5595==v5598) goto c02_040f; else goto c02_040d;

c02_040f:;

	i8 v5599 = (i8)(intptr_t)(ws+4168);
	i8 v5600 = *(i8*)(intptr_t)v5599;
	i8 v5601 = v5600+(+12);
	i2 v5602 = *(i2*)(intptr_t)v5601;
	i8 v5603 = (i8)(intptr_t)(ws+4168);
	i8 v5604 = *(i8*)(intptr_t)v5603;
	i8 v5605 = v5604+(+16);
	i2 v5606 = *(i2*)(intptr_t)v5605;
	i2 v5607 = v5602+v5606;
	i8 v5608 = (i8)(intptr_t)(ws+4176);
	i8 v5609 = *(i8*)(intptr_t)v5608;
	i8 v5610 = v5609+(+12);
	i2 v5611 = *(i2*)(intptr_t)v5610;
	i8 v5612 = (i8)(intptr_t)(ws+4176);
	i8 v5613 = *(i8*)(intptr_t)v5612;
	i8 v5614 = v5613+(+16);
	i2 v5615 = *(i2*)(intptr_t)v5614;
	i2 v5616 = v5611+v5615;
	if (v5607==v5616) goto c02_040e; else goto c02_040d;

c02_040e:;

	i8 v5617 = (i8)(intptr_t)(ws+4168);
	i8 v5618 = *(i8*)(intptr_t)v5617;
	i8 v5619 = v5618+(+10);
	i1 v5620 = *(i1*)(intptr_t)v5619;
	i8 v5621 = (i8)(intptr_t)(ws+4176);
	i8 v5622 = *(i8*)(intptr_t)v5621;
	i8 v5623 = v5622+(+10);
	i1 v5624 = *(i1*)(intptr_t)v5623;
	if (v5620==v5624) goto c02_040c; else goto c02_040d;

c02_040c:;

	i1 v5625 = (i1)+1;
	i8 v5626 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v5626 = v5625;

c02_040d:;

c02_0405:;

endsub:;
}
	void f383_check_deref(void);
	void f383_check_deref(void);
	void f383_check_deref(void);
	void f383_check_deref(void);
	void f383_check_deref(void);

// SimpleValuesMatch workspace at ws+4168 length ws+17
void f382_SimpleValuesMatch(i1* p5580 /* res */, i8 p5581 /* right */, i8 p5582 /* left */) {
	*(i8*)(intptr_t)(ws+4168) = p5582; /*left */
	*(i8*)(intptr_t)(ws+4176) = p5581; /*right */

	i1 v5583 = (i1)+0;
	i8 v5584 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v5584 = v5583;

	i8 v5585 = (i8)(intptr_t)(ws+4168);
	i8 v5586 = *(i8*)(intptr_t)v5585;
	i8 v5587 = v5586+(+19);
	i1 v5588 = *(i1*)(intptr_t)v5587;
	i8 v5589 = (i8)(intptr_t)(ws+4176);
	i8 v5590 = *(i8*)(intptr_t)v5589;
	i8 v5591 = v5590+(+19);
	i1 v5592 = *(i1*)(intptr_t)v5591;
	if (v5588==v5592) goto c02_0404; else goto c02_0403;

c02_0403:;

	goto endsub;

c02_0404:;

c02_0400:;


	i8 v5627 = (i8)(intptr_t)(ws+4168);
	i8 v5628 = *(i8*)(intptr_t)v5627;
	i8 v5629 = v5628+(+19);
	i1 v5630 = *(i1*)(intptr_t)v5629;

	if (v5630 != +50) goto c02_0411;

	i8 v5631 = (i8)(intptr_t)(f383_check_deref);

	((void(*)(void))(intptr_t)v5631)();

	goto c02_0410;

c02_0411:;

	if (v5630 != +51) goto c02_0412;

	i8 v5632 = (i8)(intptr_t)(f383_check_deref);

	((void(*)(void))(intptr_t)v5632)();

	goto c02_0410;

c02_0412:;

	if (v5630 != +52) goto c02_0413;

	i8 v5633 = (i8)(intptr_t)(f383_check_deref);

	((void(*)(void))(intptr_t)v5633)();

	goto c02_0410;

c02_0413:;

	if (v5630 != +53) goto c02_0414;

	i8 v5634 = (i8)(intptr_t)(f383_check_deref);

	((void(*)(void))(intptr_t)v5634)();

	goto c02_0410;

c02_0414:;

	if (v5630 != +47) goto c02_0415;

	i8 v5635 = (i8)(intptr_t)(f383_check_deref);

	((void(*)(void))(intptr_t)v5635)();

	goto c02_0410;

c02_0415:;

	if (v5630 != +45) goto c02_0416;

	i8 v5636 = (i8)(intptr_t)(ws+4168);
	i8 v5637 = *(i8*)(intptr_t)v5636;
	i4 v5638 = *(i4*)(intptr_t)v5637;
	i8 v5639 = (i8)(intptr_t)(ws+4176);
	i8 v5640 = *(i8*)(intptr_t)v5639;
	i4 v5641 = *(i4*)(intptr_t)v5640;
	if (v5638==v5641) goto c02_041a; else goto c02_041b;

c02_041a:;

	i1 v5642 = (i1)+1;
	i8 v5643 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v5643 = v5642;

c02_041b:;

c02_0417:;

c02_0416:;

c02_0410:;


endsub:;
	*p5580 = *(i1*)(intptr_t)(ws+4184);
}
	void f61_PushNode(i8 /* node */);
	void f147_AllocNewInstruction(i8* /* insn */);
	void f62_PopNode(i8* /* node */);
	void f23_MemZero(i8 /* size */, i8 /* ptr */);
	void f23_MemZero(i8 /* size */, i8 /* ptr */);
	void f367_PopulateMatchBuffer(i8 /* matchbuf */, i8 /* n */, i8 /* insn */);

// RewindRulePointers workspace at ws+4152 length ws+0
void f386_RewindRulePointers(void) {

	i8 v5686 = (i8)(intptr_t)(ws+4088);
	i8 v5687 = (i8)+4;
	i8 v5688 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v5688)(v5687, v5686);

	i8 v5689 = (i8)(intptr_t)(ws+4096);
	i8 v5690 = (i8)+32;
	i8 v5691 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v5691)(v5690, v5689);

	i8 v5692 = (i8)(intptr_t)(ws+4064);
	i8 v5693 = *(i8*)(intptr_t)v5692;
	i8 v5694 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v5694 = v5693;

	i8 v5695 = (i8)(intptr_t)(ws+4056);
	i8 v5696 = *(i8*)(intptr_t)v5695;
	i8 v5697 = (i8)(intptr_t)(ws+4096);
	i8 v5698 = (i8)(intptr_t)(ws+4088);
	i8 v5699 = (i8)(intptr_t)(f367_PopulateMatchBuffer);

	((void(*)(i8 /* matchbuf */, i8 /* n */, i8 /* insn */))(intptr_t)v5699)(v5698, v5697, v5696);

	i1 v5700 = (i1)+255;
	i8 v5701 = (i8)(intptr_t)(ws+4072);
	*(i1*)(intptr_t)v5701 = v5700;

	i8 v5702 = (i8)(intptr_t)((i1*)f3___main_s02ff);
	i8 v5703 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v5703 = v5702;

	i8 v5704 = (i8)(intptr_t)((i1*)f3___main_s0300);
	i8 v5705 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5705 = v5704;

	i8 v5706 = (i8)(intptr_t)((i1*)f3___main_s0301-7);
	i8 v5707 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v5707 = v5706;

endsub:;
}
	void f189_MatchPredicate(i1* /* matches */, i8 /* n */, i1 /* rule */);

// TestRule workspace at ws+4152 length ws+27
void f387_TestRule(i1* p5708 /* result */) {

	i1 v5709 = (i1)+0;
	i8 v5710 = (i8)(intptr_t)(ws+4152);
	*(i1*)(intptr_t)v5710 = v5709;

	i8 v5711 = (i8)(intptr_t)(ws+4080);
	i8 v5712 = *(i8*)(intptr_t)v5711;
	i8 v5713 = v5712+(+1);
	i1 v5714 = *(i1*)(intptr_t)v5713;
	i1 v5715 = (i1)+0;
	if (v5714==v5715) goto c02_042b; else goto c02_042a;

c02_042a:;

	i8 v5716 = (i8)(intptr_t)(ws+4064);
	i8 v5717 = *(i8*)(intptr_t)v5716;
	i8 v5718 = v5717+(+56);
	i1 v5719 = *(i1*)(intptr_t)v5718;
	i8 v5720 = (i8)(intptr_t)(ws+4080);
	i8 v5721 = *(i8*)(intptr_t)v5720;
	i8 v5722 = v5721+(+1);
	i1 v5723 = *(i1*)(intptr_t)v5722;
	i1 v5724 = v5719&v5723;
	i1 v5725 = (i1)+0;
	if (v5724==v5725) goto c02_042f; else goto c02_0430;

c02_042f:;

	goto endsub;

c02_0430:;

c02_042c:;

	goto c02_0427;

c02_042b:;

	i8 v5726 = (i8)(intptr_t)(ws+4064);
	i8 v5727 = *(i8*)(intptr_t)v5726;
	i8 v5728 = v5727+(+56);
	i1 v5729 = *(i1*)(intptr_t)v5728;
	i1 v5730 = (i1)+0;
	if (v5729==v5730) goto c02_0435; else goto c02_0434;

c02_0434:;

	goto endsub;

c02_0435:;

c02_0431:;

c02_0427:;

	i8 v5731 = (i8)(intptr_t)(ws+4088);
	i8 v5732 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5732 = v5731;

	i8 v5733 = (i8)(intptr_t)(ws+4128);
	i8 v5734 = *(i8*)(intptr_t)v5733;
	i8 v5735 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v5735 = v5734;

	i8 v5736 = (i8)(intptr_t)(ws+4080);
	i8 v5737 = *(i8*)(intptr_t)v5736;
	i8 v5738 = v5737+(+4);
	i1 v5739 = *(i1*)(intptr_t)v5738;
	i8 v5740 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5740 = v5739;

c02_0438:;

	i8 v5741 = (i8)(intptr_t)(ws+4176);
	i1 v5742 = *(i1*)(intptr_t)v5741;
	i1 v5743 = (i1)+0;
	if (v5742==v5743) goto c02_043b; else goto c02_043a;

c02_043a:;

	i8 v5744 = (i8)(intptr_t)(ws+4160);
	i8 v5745 = *(i8*)(intptr_t)v5744;
	i1 v5746 = *(i1*)(intptr_t)v5745;
	i8 v5747 = (i8)(intptr_t)(ws+4177);
	*(i1*)(intptr_t)v5747 = v5746;

	i8 v5748 = (i8)(intptr_t)(ws+4160);
	i8 v5749 = *(i8*)(intptr_t)v5748;
	i8 v5750 = v5749+(+1);
	i8 v5751 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5751 = v5750;

	i8 v5752 = (i8)(intptr_t)(ws+4176);
	i1 v5753 = *(i1*)(intptr_t)v5752;
	i1 v5754 = v5753&(+1);
	i1 v5755 = (i1)+0;
	if (v5754==v5755) goto c02_0440; else goto c02_043f;

c02_043f:;

	i8 v5756 = (i8)(intptr_t)(ws+4168);
	i8 v5757 = *(i8*)(intptr_t)v5756;
	i1 v5758 = *(i1*)(intptr_t)v5757;
	i8 v5759 = (i8)(intptr_t)(ws+4178);
	*(i1*)(intptr_t)v5759 = v5758;

	i8 v5760 = (i8)(intptr_t)(ws+4168);
	i8 v5761 = *(i8*)(intptr_t)v5760;
	i8 v5762 = v5761+(+1);
	i8 v5763 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v5763 = v5762;

	i8 v5764 = (i8)(intptr_t)(ws+4177);
	i1 v5765 = *(i1*)(intptr_t)v5764;
	i8 v5766 = (i8)(intptr_t)(ws+4178);
	i1 v5767 = *(i1*)(intptr_t)v5766;
	if (v5765==v5767) goto c02_0445; else goto c02_0444;

c02_0444:;

	goto endsub;

c02_0445:;

c02_0441:;

c02_0440:;

c02_043c:;

	i8 v5768 = (i8)(intptr_t)(ws+4176);
	i1 v5769 = *(i1*)(intptr_t)v5768;
	i1 v5770 = (i1)+1;
	i1 v5771 = ((i1)v5769)>>v5770;
	i8 v5772 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5772 = v5771;

	goto c02_0438;

c02_043b:;

	i8 v5773 = (i8)(intptr_t)(ws+4080);
	i8 v5774 = *(i8*)(intptr_t)v5773;
	i1 v5775 = *(i1*)(intptr_t)v5774;
	i1 v5776 = v5775&(+1);
	i1 v5777 = (i1)+0;
	if (v5776==v5777) goto c02_044c; else goto c02_044d;

c02_044d:;

	i8 v5778 = (i8)(intptr_t)(ws+4072);
	i1 v5779 = *(i1*)(intptr_t)v5778;
	i8 v5780 = (i8)(intptr_t)(ws+4096);
	i8 v5781 = (i8)(intptr_t)(f189_MatchPredicate);
	i1 v5782;

	((void(*)(i1* /* matches */, i8 /* n */, i1 /* rule */))(intptr_t)v5781)(&v5782, v5780, v5779);
	i1 v5783 = (i1)+0;
	if (v5782==v5783) goto c02_044b; else goto c02_044c;

c02_044b:;

	goto endsub;

c02_044c:;

c02_0446:;

	i1 v5784 = (i1)+1;
	i8 v5785 = (i8)(intptr_t)(ws+4152);
	*(i1*)(intptr_t)v5785 = v5784;

endsub:;
	*p5708 = *(i1*)(intptr_t)(ws+4152);
}
	void f386_RewindRulePointers(void);
	void f77_AllocateNewNode(i8* /* m */, i1 /* code */);

// ConvertNodeToFallback workspace at ws+4152 length ws+25
void f388_ConvertNodeToFallback(void) {

	i8 v5808 = (i8)(intptr_t)(ws+4064);
	i8 v5809 = *(i8*)(intptr_t)v5808;
	i8 v5810 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5810 = v5809;

	i1 v5811 = (i1)+24;
	i8 v5812 = (i8)(intptr_t)(f77_AllocateNewNode);
	i8 v5813;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v5812)(&v5813, v5811);
	i8 v5814 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v5814 = v5813;

	i8 v5815 = (i8)(intptr_t)(ws+4152);
	i8 v5816 = *(i8*)(intptr_t)v5815;
	i8 v5817 = (i8)(intptr_t)(ws+4064);
	i8 v5818 = *(i8*)(intptr_t)v5817;
	i8 v5819 = v5818+(+24);
	*(i8*)(intptr_t)v5819 = v5816;

	i8 v5820 = (i8)(intptr_t)(ws+4152);
	i8 v5821 = *(i8*)(intptr_t)v5820;
	i8 v5822 = v5821+(+48);
	i8 v5823 = *(i8*)(intptr_t)v5822;
	i8 v5824 = (i8)(intptr_t)(ws+4064);
	i8 v5825 = *(i8*)(intptr_t)v5824;
	i8 v5826 = v5825+(+48);
	*(i8*)(intptr_t)v5826 = v5823;

	i8 v5827 = (i8)(intptr_t)(ws+4064);
	i8 v5828 = *(i8*)(intptr_t)v5827;
	i8 v5829 = v5828+(+48);
	i8 v5830 = *(i8*)(intptr_t)v5829;
	i8 v5831 = v5830+(+16);
	i8 v5832 = *(i8*)(intptr_t)v5831;
	i8 v5833 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v5833 = v5832;

	i8 v5834 = (i8)(intptr_t)(ws+4152);
	i8 v5835 = *(i8*)(intptr_t)v5834;
	i8 v5836 = v5835+(+56);
	i1 v5837 = *(i1*)(intptr_t)v5836;
	i8 v5838 = (i8)(intptr_t)(ws+4064);
	i8 v5839 = *(i8*)(intptr_t)v5838;
	i8 v5840 = v5839+(+56);
	*(i1*)(intptr_t)v5840 = v5837;

	i8 v5841 = (i8)(intptr_t)(ws+4160);
	i8 v5842 = *(i8*)(intptr_t)v5841;
	i8 v5843 = v5842+(+40);
	i8 v5844 = *(i8*)(intptr_t)v5843;
	i8 v5845 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v5845 = v5844;

	i1 v5846 = (i1)+0;
	i8 v5847 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5847 = v5846;

c02_045f:;

	i8 v5848 = (i8)(intptr_t)(ws+4176);
	i1 v5849 = *(i1*)(intptr_t)v5848;
	i1 v5850 = (i1)+4;
	if (v5849==v5850) goto c02_0462; else goto c02_0461;

c02_0461:;

	i8 v5851 = (i8)(intptr_t)(ws+4168);
	i8 v5852 = *(i8*)(intptr_t)v5851;
	i8 v5853 = v5852+(+16);
	i8 v5854 = (i8)(intptr_t)(ws+4176);
	i1 v5855 = *(i1*)(intptr_t)v5854;
	i8 v5856 = v5855;
	i1 v5857 = (i1)+3;
	i8 v5858 = ((i8)v5856)<<v5857;
	i8 v5859 = v5853+v5858;
	i8 v5860 = *(i8*)(intptr_t)v5859;
	i8 v5861 = (i8)(intptr_t)(ws+4152);
	i8 v5862 = *(i8*)(intptr_t)v5861;
	if (v5860==v5862) goto c02_0466; else goto c02_0467;

c02_0466:;

	i8 v5863 = (i8)(intptr_t)(ws+4064);
	i8 v5864 = *(i8*)(intptr_t)v5863;
	i8 v5865 = (i8)(intptr_t)(ws+4168);
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = v5866+(+16);
	i8 v5868 = (i8)(intptr_t)(ws+4176);
	i1 v5869 = *(i1*)(intptr_t)v5868;
	i8 v5870 = v5869;
	i1 v5871 = (i1)+3;
	i8 v5872 = ((i8)v5870)<<v5871;
	i8 v5873 = v5867+v5872;
	*(i8*)(intptr_t)v5873 = v5864;

c02_0467:;

c02_0463:;

	i8 v5874 = (i8)(intptr_t)(ws+4176);
	i1 v5875 = *(i1*)(intptr_t)v5874;
	i1 v5876 = v5875+(+1);
	i8 v5877 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v5877 = v5876;

	goto c02_045f;

c02_0462:;

endsub:;
}
	void f388_ConvertNodeToFallback(void);
	void f386_RewindRulePointers(void);
	void f377_PrintNodes(i8 /* rootnode */);
	void f66_StartError(void);
const i1 c02_s01e8[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
	void f9_print_char(i1 /* c */);
const i1 c02_s01e9[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f67_EndError(void);
	void f387_TestRule(i1* /* result */);
	void f61_PushNode(i8 /* node */);

// CopyChildNodes workspace at ws+4152 length ws+16
void f389_CopyChildNodes(void) {

	i8 v5977 = (i8)(intptr_t)(ws+4080);
	i8 v5978 = *(i8*)(intptr_t)v5977;
	i8 v5979 = v5978+(+5);
	i1 v5980 = *(i1*)(intptr_t)v5979;
	i8 v5981 = (i8)(intptr_t)(ws+4152);
	*(i1*)(intptr_t)v5981 = v5980;

	i8 v5982 = (i8)(intptr_t)(ws+4080);
	i8 v5983 = *(i8*)(intptr_t)v5982;
	i8 v5984 = v5983+(+6);
	i1 v5985 = *(i1*)(intptr_t)v5984;
	i8 v5986 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v5986 = v5985;

	i1 v5987 = (i1)+0;
	i8 v5988 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v5988 = v5987;

c02_048b:;

	i8 v5989 = (i8)(intptr_t)(ws+4024);
	i1 v5990 = *(i1*)(intptr_t)v5989;
	i1 v5991 = (i1)+4;
	if (v5990==v5991) goto c02_048e; else goto c02_048d;

c02_048d:;

	i8 v5992 = (i8)(intptr_t)(ws+4096);
	i8 v5993 = (i8)(intptr_t)(ws+4024);
	i1 v5994 = *(i1*)(intptr_t)v5993;
	i8 v5995 = v5994;
	i1 v5996 = (i1)+3;
	i8 v5997 = ((i8)v5995)<<v5996;
	i8 v5998 = v5992+v5997;
	i8 v5999 = *(i8*)(intptr_t)v5998;
	i8 v6000 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v6000 = v5999;

	i8 v6001 = (i8)(intptr_t)(ws+4152);
	i1 v6002 = *(i1*)(intptr_t)v6001;
	i1 v6003 = v6002&(+1);
	i1 v6004 = (i1)+0;
	if (v6003==v6004) goto c02_0493; else goto c02_0492;

c02_0492:;

	i8 v6005 = (i8)(intptr_t)(ws+4160);
	i8 v6006 = *(i8*)(intptr_t)v6005;
	i8 v6007 = (i8)(intptr_t)(ws+4056);
	i8 v6008 = *(i8*)(intptr_t)v6007;
	i8 v6009 = v6008+(+16);
	i8 v6010 = (i8)(intptr_t)(ws+4024);
	i1 v6011 = *(i1*)(intptr_t)v6010;
	i8 v6012 = v6011;
	i1 v6013 = (i1)+3;
	i8 v6014 = ((i8)v6012)<<v6013;
	i8 v6015 = v6009+v6014;
	*(i8*)(intptr_t)v6015 = v6006;

	i8 v6016 = (i8)(intptr_t)(ws+4153);
	i1 v6017 = *(i1*)(intptr_t)v6016;
	i1 v6018 = v6017&(+1);
	i1 v6019 = (i1)+0;
	if (v6018==v6019) goto c02_0498; else goto c02_0497;

c02_0497:;

	i8 v6020 = (i8)(intptr_t)(ws+4160);
	i8 v6021 = *(i8*)(intptr_t)v6020;
	i8 v6022 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6022)(v6021);

	i8 v6023 = (i8)(intptr_t)(ws+4136);
	i8 v6024 = *(i8*)(intptr_t)v6023;
	i1 v6025 = *(i1*)(intptr_t)v6024;
	i8 v6026 = (i8)(intptr_t)(ws+4160);
	i8 v6027 = *(i8*)(intptr_t)v6026;
	i8 v6028 = v6027+(+56);
	*(i1*)(intptr_t)v6028 = v6025;

	i8 v6029 = (i8)(intptr_t)(ws+4136);
	i8 v6030 = *(i8*)(intptr_t)v6029;
	i8 v6031 = v6030+(+1);
	i8 v6032 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v6032 = v6031;

	i8 v6033 = (i8)(intptr_t)(ws+4056);
	i8 v6034 = *(i8*)(intptr_t)v6033;
	i8 v6035 = (i8)(intptr_t)(ws+4160);
	i8 v6036 = *(i8*)(intptr_t)v6035;
	i8 v6037 = v6036+(+48);
	*(i8*)(intptr_t)v6037 = v6034;

c02_0498:;

c02_0494:;

c02_0493:;

c02_048f:;

	i8 v6038 = (i8)(intptr_t)(ws+4152);
	i1 v6039 = *(i1*)(intptr_t)v6038;
	i1 v6040 = (i1)+1;
	i1 v6041 = ((i1)v6039)>>v6040;
	i8 v6042 = (i8)(intptr_t)(ws+4152);
	*(i1*)(intptr_t)v6042 = v6041;

	i8 v6043 = (i8)(intptr_t)(ws+4153);
	i1 v6044 = *(i1*)(intptr_t)v6043;
	i1 v6045 = (i1)+1;
	i1 v6046 = ((i1)v6044)>>v6045;
	i8 v6047 = (i8)(intptr_t)(ws+4153);
	*(i1*)(intptr_t)v6047 = v6046;

	i8 v6048 = (i8)(intptr_t)(ws+4024);
	i1 v6049 = *(i1*)(intptr_t)v6048;
	i1 v6050 = v6049+(+1);
	i8 v6051 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v6051 = v6050;

	goto c02_048b;

c02_048e:;

	i8 v6052 = (i8)(intptr_t)(ws+4056);
	i8 v6053 = *(i8*)(intptr_t)v6052;
	i8 v6054 = (i8)(intptr_t)(ws+4064);
	i8 v6055 = *(i8*)(intptr_t)v6054;
	i8 v6056 = v6055+(+40);
	*(i8*)(intptr_t)v6056 = v6053;

	i8 v6057 = (i8)(intptr_t)(ws+4064);
	i8 v6058 = *(i8*)(intptr_t)v6057;
	i8 v6059 = (i8)(intptr_t)(ws+4056);
	i8 v6060 = *(i8*)(intptr_t)v6059;
	i8 v6061 = v6060+(+56);
	*(i8*)(intptr_t)v6061 = v6058;

endsub:;
}
	void f389_CopyChildNodes(void);

// InstructionMatcher workspace at ws+4088 length ws+57
void f385_InstructionMatcher(void) {



	i8 v5786 = (i8)(intptr_t)(f386_RewindRulePointers);

	((void(*)(void))(intptr_t)v5786)();

c02_044e:;

	i8 v5787 = (i8)(intptr_t)(ws+4080);
	i8 v5788 = *(i8*)(intptr_t)v5787;
	i8 v5789 = v5788+(+7);
	i8 v5790 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v5790 = v5789;

	i8 v5791 = (i8)(intptr_t)(ws+4072);
	i1 v5792 = *(i1*)(intptr_t)v5791;
	i1 v5793 = v5792+(+1);
	i8 v5794 = (i8)(intptr_t)(ws+4072);
	*(i1*)(intptr_t)v5794 = v5793;

	i8 v5795 = (i8)(intptr_t)(ws+4080);
	i8 v5796 = *(i8*)(intptr_t)v5795;
	i8 v5797 = (i8)(intptr_t)((i1*)f3___main_s0301+1330);
	if (v5796==v5797) goto c02_0453; else goto c02_0454;

c02_0453:;

	i8 v5798 = (i8)(intptr_t)(ws+4064);
	i8 v5799 = *(i8*)(intptr_t)v5798;
	i8 v5800 = v5799+(+256);
	i1 v5801 = *(i1*)(intptr_t)v5800;
	i1 v5802 = (i1)+24;
	if (v5801==v5802) goto c02_045b; else goto c02_045c;

c02_045c:;

	i8 v5803 = (i8)(intptr_t)(ws+4064);
	i8 v5804 = *(i8*)(intptr_t)v5803;
	i8 v5805 = v5804+(+48);
	i8 v5806 = *(i8*)(intptr_t)v5805;
	i8 v5807 = (i8)+0;
	if (v5806==v5807) goto c02_045b; else goto c02_045a;

c02_045a:;


	i8 v5878 = (i8)(intptr_t)(f388_ConvertNodeToFallback);

	((void(*)(void))(intptr_t)v5878)();

	i8 v5879 = (i8)(intptr_t)(f386_RewindRulePointers);

	((void(*)(void))(intptr_t)v5879)();

	goto c02_044e;

c02_045b:;

c02_0455:;

	i8 v5880 = (i8)(intptr_t)(ws+4016);
	i8 v5881 = *(i8*)(intptr_t)v5880;
	i8 v5882 = (i8)(intptr_t)(f377_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v5882)(v5881);

	i8 v5883 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v5883)();

	i8 v5884 = (i8)(intptr_t)c02_s01e8;
	i8 v5885 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5885)(v5884);

	i1 v5886 = (i1)+0;
	i8 v5887 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v5887 = v5886;

c02_046a:;

	i8 v5888 = (i8)(intptr_t)(ws+4024);
	i1 v5889 = *(i1*)(intptr_t)v5888;
	i1 v5890 = (i1)+4;
	if (v5889==v5890) goto c02_046d; else goto c02_046c;

c02_046c:;

	i8 v5891 = (i8)(intptr_t)(ws+4088);
	i8 v5892 = (i8)(intptr_t)(ws+4024);
	i1 v5893 = *(i1*)(intptr_t)v5892;
	i8 v5894 = v5893;
	i8 v5895 = v5891+v5894;
	i1 v5896 = *(i1*)(intptr_t)v5895;
	i8 v5897 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v5897)(v5896);

	i1 v5898 = (i1)+32;
	i8 v5899 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5899)(v5898);

	i8 v5900 = (i8)(intptr_t)(ws+4024);
	i1 v5901 = *(i1*)(intptr_t)v5900;
	i1 v5902 = v5901+(+1);
	i8 v5903 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v5903 = v5902;

	goto c02_046a;

c02_046d:;

	i8 v5904 = (i8)(intptr_t)c02_s01e9;
	i8 v5905 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5905)(v5904);

	i8 v5906 = (i8)(intptr_t)(ws+4064);
	i8 v5907 = *(i8*)(intptr_t)v5906;
	i8 v5908 = v5907+(+56);
	i1 v5909 = *(i1*)(intptr_t)v5908;
	i4 v5910 = v5909;
	i8 v5911 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5911)(v5910);

	i8 v5912 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v5912)();

c02_0454:;

c02_0450:;

	i8 v5913 = (i8)(intptr_t)(f387_TestRule);
	i1 v5914;

	((void(*)(i1* /* result */))(intptr_t)v5913)(&v5914);
	i1 v5915 = (i1)+0;
	if (v5914==v5915) goto c02_0472; else goto c02_0471;

c02_0471:;

	goto c02_044f;

c02_0472:;

c02_046e:;

	i8 v5916 = (i8)(intptr_t)(ws+4080);
	i8 v5917 = *(i8*)(intptr_t)v5916;
	i8 v5918 = v5917+(+4);
	i1 v5919 = *(i1*)(intptr_t)v5918;
	i8 v5920 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5920 = v5919;

c02_0475:;

	i8 v5921 = (i8)(intptr_t)(ws+4144);
	i1 v5922 = *(i1*)(intptr_t)v5921;
	i1 v5923 = (i1)+0;
	if (v5922==v5923) goto c02_0478; else goto c02_0477;

c02_0477:;

	i8 v5924 = (i8)(intptr_t)(ws+4144);
	i1 v5925 = *(i1*)(intptr_t)v5924;
	i1 v5926 = v5925&(+1);
	i1 v5927 = (i1)+0;
	if (v5926==v5927) goto c02_047d; else goto c02_047c;

c02_047c:;

	i8 v5928 = (i8)(intptr_t)(ws+4128);
	i8 v5929 = *(i8*)(intptr_t)v5928;
	i8 v5930 = v5929+(+1);
	i8 v5931 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v5931 = v5930;

c02_047d:;

c02_0479:;

	i8 v5932 = (i8)(intptr_t)(ws+4144);
	i1 v5933 = *(i1*)(intptr_t)v5932;
	i1 v5934 = (i1)+1;
	i1 v5935 = ((i1)v5933)>>v5934;
	i8 v5936 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5936 = v5935;

	goto c02_0475;

c02_0478:;

	i8 v5937 = (i8)(intptr_t)(ws+4080);
	i8 v5938 = *(i8*)(intptr_t)v5937;
	i8 v5939 = v5938+(+6);
	i1 v5940 = *(i1*)(intptr_t)v5939;
	i8 v5941 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5941 = v5940;

c02_0480:;

	i8 v5942 = (i8)(intptr_t)(ws+4144);
	i1 v5943 = *(i1*)(intptr_t)v5942;
	i1 v5944 = (i1)+0;
	if (v5943==v5944) goto c02_0483; else goto c02_0482;

c02_0482:;

	i8 v5945 = (i8)(intptr_t)(ws+4144);
	i1 v5946 = *(i1*)(intptr_t)v5945;
	i1 v5947 = v5946&(+1);
	i1 v5948 = (i1)+0;
	if (v5947==v5948) goto c02_0488; else goto c02_0487;

c02_0487:;

	i8 v5949 = (i8)(intptr_t)(ws+4136);
	i8 v5950 = *(i8*)(intptr_t)v5949;
	i8 v5951 = v5950+(+1);
	i8 v5952 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v5952 = v5951;

c02_0488:;

c02_0484:;

	i8 v5953 = (i8)(intptr_t)(ws+4144);
	i1 v5954 = *(i1*)(intptr_t)v5953;
	i1 v5955 = (i1)+1;
	i1 v5956 = ((i1)v5954)>>v5955;
	i8 v5957 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5957 = v5956;

	goto c02_0480;

c02_0483:;

	goto c02_044e;

c02_044f:;

	i8 v5958 = (i8)(intptr_t)(ws+4072);
	i1 v5959 = *(i1*)(intptr_t)v5958;
	i8 v5960 = (i8)(intptr_t)(ws+4056);
	i8 v5961 = *(i8*)(intptr_t)v5960;
	i8 v5962 = v5961+(+86);
	*(i1*)(intptr_t)v5962 = v5959;

	i8 v5963 = (i8)(intptr_t)(ws+4080);
	i8 v5964 = *(i8*)(intptr_t)v5963;
	i8 v5965 = v5964+(+2);
	i1 v5966 = *(i1*)(intptr_t)v5965;
	i8 v5967 = (i8)(intptr_t)(ws+4056);
	i8 v5968 = *(i8*)(intptr_t)v5967;
	i8 v5969 = v5968+(+48);
	*(i1*)(intptr_t)v5969 = v5966;

	i8 v5970 = (i8)(intptr_t)(ws+4080);
	i8 v5971 = *(i8*)(intptr_t)v5970;
	i8 v5972 = v5971+(+3);
	i1 v5973 = *(i1*)(intptr_t)v5972;
	i8 v5974 = (i8)(intptr_t)(ws+4056);
	i8 v5975 = *(i8*)(intptr_t)v5974;
	i8 v5976 = v5975+(+65);
	*(i1*)(intptr_t)v5976 = v5973;


	i8 v6062 = (i8)(intptr_t)(f389_CopyChildNodes);

	((void(*)(void))(intptr_t)v6062)();

endsub:;
}
	void f385_InstructionMatcher(void);
	void f381_IsSimpleValue(i1* /* res */, i8 /* value */, i8 /* insn */);
	void f382_SimpleValuesMatch(i1* /* res */, i8 /* right */, i8 /* left */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);

// FindPreferredRegister workspace at ws+4112 length ws+49
void f390_FindPreferredRegister(i1* p6069 /* reg */, i1 p6070 /* mask */) {
	*(i1*)(intptr_t)(ws+4112) = p6070; /*mask */

	i8 v6071 = (i8)(intptr_t)(ws+4056);
	i8 v6072 = *(i8*)(intptr_t)v6071;
	i8 v6073 = (i8)(intptr_t)(ws+4120);
	i8 v6074 = (i8)(intptr_t)(f381_IsSimpleValue);
	i1 v6075;

	((void(*)(i1* /* res */, i8 /* value */, i8 /* insn */))(intptr_t)v6074)(&v6075, v6073, v6072);
	i1 v6076 = (i1)+0;
	if (v6075==v6076) goto c02_04a2; else goto c02_04a1;

c02_04a1:;

	i8 v6077 = (i8)(intptr_t)(ws+3576);
	i8 v6078 = (i8)(intptr_t)(ws+4144);
	*(i8*)(intptr_t)v6078 = v6077;

c02_04a5:;

	i8 v6079 = (i8)(intptr_t)(ws+4144);
	i8 v6080 = *(i8*)(intptr_t)v6079;
	i8 v6081 = (i8)(intptr_t)(ws+3696);
	if (v6080==v6081) goto c02_04a8; else goto c02_04a7;

c02_04a7:;

	i8 v6082 = (i8)(intptr_t)(ws+4144);
	i8 v6083 = *(i8*)(intptr_t)v6082;
	i8 v6084 = v6083+(+18);
	i1 v6085 = *(i1*)(intptr_t)v6084;
	i1 v6086 = (i1)+0;
	if (v6085==v6086) goto c02_04ad; else goto c02_04ac;

c02_04ac:;

	i8 v6087 = (i8)(intptr_t)(ws+4144);
	i8 v6088 = *(i8*)(intptr_t)v6087;
	i8 v6089 = v6088+(+18);
	i1 v6090 = *(i1*)(intptr_t)v6089;
	i1 v6091 = v6090+(-1);
	i8 v6092 = (i8)(intptr_t)(ws+4144);
	i8 v6093 = *(i8*)(intptr_t)v6092;
	i8 v6094 = v6093+(+18);
	*(i1*)(intptr_t)v6094 = v6091;

c02_04ad:;

c02_04a9:;

	i8 v6095 = (i8)(intptr_t)(ws+4144);
	i8 v6096 = *(i8*)(intptr_t)v6095;
	i8 v6097 = v6096+(+24);
	i8 v6098 = (i8)(intptr_t)(ws+4144);
	*(i8*)(intptr_t)v6098 = v6097;

	goto c02_04a5;

c02_04a8:;

	i8 v6099 = (i8)(intptr_t)(ws+3576);
	i8 v6100 = (i8)(intptr_t)(ws+4144);
	*(i8*)(intptr_t)v6100 = v6099;

	i1 v6101 = (i1)+16;
	i8 v6102 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6102 = v6101;

c02_04b0:;

	i8 v6103 = (i8)(intptr_t)(ws+4144);
	i8 v6104 = *(i8*)(intptr_t)v6103;
	i8 v6105 = (i8)(intptr_t)(ws+3696);
	if (v6104==v6105) goto c02_04b3; else goto c02_04b2;

c02_04b2:;

	i8 v6106 = (i8)(intptr_t)(ws+4144);
	i8 v6107 = *(i8*)(intptr_t)v6106;
	i8 v6108 = v6107+(+19);
	i1 v6109 = *(i1*)(intptr_t)v6108;
	i1 v6110 = (i1)+0;
	if (v6109==v6110) goto c02_04bc; else goto c02_04be;

c02_04be:;

	i8 v6111 = (i8)(intptr_t)(ws+4113);
	i1 v6112 = *(i1*)(intptr_t)v6111;
	i8 v6113 = (i8)(intptr_t)(ws+4112);
	i1 v6114 = *(i1*)(intptr_t)v6113;
	i1 v6115 = v6112&v6114;
	i1 v6116 = (i1)+0;
	if (v6115==v6116) goto c02_04bc; else goto c02_04bd;

c02_04bd:;

	i8 v6117 = (i8)(intptr_t)(ws+4120);
	i8 v6118 = (i8)(intptr_t)(ws+4144);
	i8 v6119 = *(i8*)(intptr_t)v6118;
	i8 v6120 = (i8)(intptr_t)(f382_SimpleValuesMatch);
	i1 v6121;

	((void(*)(i1* /* res */, i8 /* right */, i8 /* left */))(intptr_t)v6120)(&v6121, v6119, v6117);
	i1 v6122 = (i1)+0;
	if (v6121==v6122) goto c02_04bc; else goto c02_04bb;

c02_04bb:;

	i1 v6123 = (i1)+255;
	i8 v6124 = (i8)(intptr_t)(ws+4144);
	i8 v6125 = *(i8*)(intptr_t)v6124;
	i8 v6126 = v6125+(+18);
	*(i1*)(intptr_t)v6126 = v6123;

	goto endsub;

c02_04bc:;

c02_04b4:;

	i8 v6127 = (i8)(intptr_t)(ws+4144);
	i8 v6128 = *(i8*)(intptr_t)v6127;
	i8 v6129 = v6128+(+24);
	i8 v6130 = (i8)(intptr_t)(ws+4144);
	*(i8*)(intptr_t)v6130 = v6129;

	i8 v6131 = (i8)(intptr_t)(ws+4113);
	i1 v6132 = *(i1*)(intptr_t)v6131;
	i1 v6133 = (i1)+1;
	i1 v6134 = ((i1)v6132)>>v6133;
	i8 v6135 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6135 = v6134;

	goto c02_04b0;

c02_04b3:;

	i8 v6136 = (i8)+0;
	i8 v6137 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v6137 = v6136;

	i8 v6138 = (i8)(intptr_t)(ws+3576);
	i8 v6139 = (i8)(intptr_t)(ws+4144);
	*(i8*)(intptr_t)v6139 = v6138;

	i1 v6140 = (i1)+16;
	i8 v6141 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6141 = v6140;

c02_04c1:;

	i8 v6142 = (i8)(intptr_t)(ws+4144);
	i8 v6143 = *(i8*)(intptr_t)v6142;
	i8 v6144 = (i8)(intptr_t)(ws+3696);
	if (v6143==v6144) goto c02_04c4; else goto c02_04c3;

c02_04c3:;

	i8 v6145 = (i8)(intptr_t)(ws+4113);
	i1 v6146 = *(i1*)(intptr_t)v6145;
	i8 v6147 = (i8)(intptr_t)(ws+4112);
	i1 v6148 = *(i1*)(intptr_t)v6147;
	i1 v6149 = v6146&v6148;
	i1 v6150 = (i1)+0;
	if (v6149==v6150) goto c02_04c9; else goto c02_04c8;

c02_04c8:;

	i8 v6151 = (i8)(intptr_t)(ws+4144);
	i8 v6152 = *(i8*)(intptr_t)v6151;
	i8 v6153 = v6152+(+19);
	i1 v6154 = *(i1*)(intptr_t)v6153;
	i1 v6155 = (i1)+0;
	if (v6154==v6155) goto c02_04cd; else goto c02_04ce;

c02_04cd:;

	i8 v6156 = (i8)(intptr_t)(ws+4144);
	i8 v6157 = *(i8*)(intptr_t)v6156;
	i8 v6158 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v6158 = v6157;

	i8 v6159 = (i8)(intptr_t)(ws+4113);
	i1 v6160 = *(i1*)(intptr_t)v6159;
	i8 v6161 = (i8)(intptr_t)(ws+4160);
	*(i1*)(intptr_t)v6161 = v6160;

	goto c02_04c4;

c02_04ce:;

c02_04ca:;

	i8 v6162 = (i8)(intptr_t)(ws+4152);
	i8 v6163 = *(i8*)(intptr_t)v6162;
	i8 v6164 = (i8)+0;
	if (v6163==v6164) goto c02_04d2; else goto c02_04d3;

c02_04d2:;

	i8 v6165 = (i8)(intptr_t)(ws+4144);
	i8 v6166 = *(i8*)(intptr_t)v6165;
	i8 v6167 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v6167 = v6166;

	i8 v6168 = (i8)(intptr_t)(ws+4113);
	i1 v6169 = *(i1*)(intptr_t)v6168;
	i8 v6170 = (i8)(intptr_t)(ws+4160);
	*(i1*)(intptr_t)v6170 = v6169;

	goto c02_04cf;

c02_04d3:;

	i8 v6171 = (i8)(intptr_t)(ws+4144);
	i8 v6172 = *(i8*)(intptr_t)v6171;
	i8 v6173 = v6172+(+18);
	i1 v6174 = *(i1*)(intptr_t)v6173;
	i8 v6175 = (i8)(intptr_t)(ws+4152);
	i8 v6176 = *(i8*)(intptr_t)v6175;
	i8 v6177 = v6176+(+18);
	i1 v6178 = *(i1*)(intptr_t)v6177;
	if (v6174<v6178) goto c02_04d7; else goto c02_04d8;

c02_04d7:;

	i8 v6179 = (i8)(intptr_t)(ws+4144);
	i8 v6180 = *(i8*)(intptr_t)v6179;
	i8 v6181 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v6181 = v6180;

	i8 v6182 = (i8)(intptr_t)(ws+4113);
	i1 v6183 = *(i1*)(intptr_t)v6182;
	i8 v6184 = (i8)(intptr_t)(ws+4160);
	*(i1*)(intptr_t)v6184 = v6183;

c02_04d8:;

c02_04d4:;

c02_04cf:;

c02_04c9:;

c02_04c5:;

	i8 v6185 = (i8)(intptr_t)(ws+4144);
	i8 v6186 = *(i8*)(intptr_t)v6185;
	i8 v6187 = v6186+(+24);
	i8 v6188 = (i8)(intptr_t)(ws+4144);
	*(i8*)(intptr_t)v6188 = v6187;

	i8 v6189 = (i8)(intptr_t)(ws+4113);
	i1 v6190 = *(i1*)(intptr_t)v6189;
	i1 v6191 = (i1)+1;
	i1 v6192 = ((i1)v6190)>>v6191;
	i8 v6193 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6193 = v6192;

	goto c02_04c1;

c02_04c4:;

	i8 v6194 = (i8)(intptr_t)(ws+4152);
	i8 v6195 = *(i8*)(intptr_t)v6194;
	i8 v6196 = (i8)+0;
	if (v6195==v6196) goto c02_04dd; else goto c02_04dc;

c02_04dc:;

	i8 v6197 = (i8)(intptr_t)(ws+4120);
	i8 v6198 = (i8)+20;
	i8 v6199 = (i8)(intptr_t)(ws+4152);
	i8 v6200 = *(i8*)(intptr_t)v6199;
	i8 v6201 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v6201)(v6200, v6198, v6197);

	i1 v6202 = (i1)+255;
	i8 v6203 = (i8)(intptr_t)(ws+4152);
	i8 v6204 = *(i8*)(intptr_t)v6203;
	i8 v6205 = v6204+(+18);
	*(i1*)(intptr_t)v6205 = v6202;

	i8 v6206 = (i8)(intptr_t)(ws+4160);
	i1 v6207 = *(i1*)(intptr_t)v6206;
	i8 v6208 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6208 = v6207;

	goto endsub;

c02_04dd:;

c02_04d9:;

c02_04a2:;

c02_049e:;

	i8 v6209 = (i8)(intptr_t)(ws+4112);
	i1 v6210 = *(i1*)(intptr_t)v6209;
	i8 v6211 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6212;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6211)(&v6212, v6210);
	i8 v6213 = (i8)(intptr_t)(ws+4113);
	*(i1*)(intptr_t)v6213 = v6212;

endsub:;
	*p6069 = *(i1*)(intptr_t)(ws+4113);
}
	void f368_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f374_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f369_CalculateBlockedRegisters(i1* /* blocked */, i8 /* last */, i8 /* insn */);
	void f390_FindPreferredRegister(i1* /* reg */, i1 /* mask */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f371_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f150_FindCompatibleRegisters(i1* /* compatible */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f371_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f375_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f371_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f374_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f377_PrintNodes(i8 /* rootnode */);
const i1 c02_s01ea[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01eb[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01ec[] = { 0x6e,0x6f,0x64,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01ed[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01ee[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01ef[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01f0[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s01f1[] = { 0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
	void f66_StartError(void);
const i1 c02_s01f2[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f67_EndError(void);

// deadlock workspace at ws+4112 length ws+8
void f392_deadlock(i8 p6569 /* s */) {
	*(i8*)(intptr_t)(ws+4112) = p6569; /*s */

	i8 v6570 = (i8)(intptr_t)(ws+4016);
	i8 v6571 = *(i8*)(intptr_t)v6570;
	i8 v6572 = (i8)(intptr_t)(f377_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v6572)(v6571);

	i8 v6573 = (i8)(intptr_t)c02_s01ea;
	i8 v6574 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6574)(v6573);

	i8 v6575 = (i8)(intptr_t)(ws+4056);
	i8 v6576 = *(i8*)(intptr_t)v6575;
	i8 v6577 = v6576+(+16);
	i8 v6578 = *(i8*)(intptr_t)v6577;
	i4 v6579 = v6578;
	i8 v6580 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6580)(v6579);

	i8 v6581 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6581)();

	i8 v6582 = (i8)(intptr_t)c02_s01eb;
	i8 v6583 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6583)(v6582);

	i8 v6584 = (i8)(intptr_t)(ws+4096);
	i8 v6585 = *(i8*)(intptr_t)v6584;
	i8 v6586 = v6585+(+16);
	i8 v6587 = *(i8*)(intptr_t)v6586;
	i4 v6588 = v6587;
	i8 v6589 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6589)(v6588);

	i8 v6590 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6590)();

	i8 v6591 = (i8)(intptr_t)c02_s01ec;
	i8 v6592 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6592)(v6591);

	i8 v6593 = (i8)(intptr_t)(ws+4064);
	i8 v6594 = *(i8*)(intptr_t)v6593;
	i4 v6595 = v6594;
	i8 v6596 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6596)(v6595);

	i8 v6597 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6597)();

	i8 v6598 = (i8)(intptr_t)c02_s01ed;
	i8 v6599 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6599)(v6598);

	i8 v6600 = (i8)(intptr_t)(ws+4056);
	i8 v6601 = *(i8*)(intptr_t)v6600;
	i8 v6602 = v6601+(+48);
	i1 v6603 = *(i1*)(intptr_t)v6602;
	i4 v6604 = v6603;
	i8 v6605 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6605)(v6604);

	i8 v6606 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6606)();

	i8 v6607 = (i8)(intptr_t)c02_s01ee;
	i8 v6608 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6608)(v6607);

	i8 v6609 = (i8)(intptr_t)(ws+4056);
	i8 v6610 = *(i8*)(intptr_t)v6609;
	i8 v6611 = v6610+(+66);
	i1 v6612 = *(i1*)(intptr_t)v6611;
	i4 v6613 = v6612;
	i8 v6614 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6614)(v6613);

	i8 v6615 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6615)();

	i8 v6616 = (i8)(intptr_t)c02_s01ef;
	i8 v6617 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6617)(v6616);

	i8 v6618 = (i8)(intptr_t)(ws+4064);
	i8 v6619 = *(i8*)(intptr_t)v6618;
	i8 v6620 = v6619+(+56);
	i1 v6621 = *(i1*)(intptr_t)v6620;
	i4 v6622 = v6621;
	i8 v6623 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6623)(v6622);

	i8 v6624 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6624)();

	i8 v6625 = (i8)(intptr_t)c02_s01f0;
	i8 v6626 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6626)(v6625);

	i8 v6627 = (i8)(intptr_t)(ws+4096);
	i8 v6628 = *(i8*)(intptr_t)v6627;
	i8 v6629 = v6628+(+64);
	i1 v6630 = *(i1*)(intptr_t)v6629;
	i4 v6631 = v6630;
	i8 v6632 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6632)(v6631);

	i8 v6633 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6633)();

	i8 v6634 = (i8)(intptr_t)c02_s01f1;
	i8 v6635 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6635)(v6634);

	i8 v6636 = (i8)(intptr_t)(ws+4106);
	i1 v6637 = *(i1*)(intptr_t)v6636;
	i4 v6638 = v6637;
	i8 v6639 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6639)(v6638);

	i8 v6640 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6640)();

	i8 v6641 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v6641)();

	i8 v6642 = (i8)(intptr_t)c02_s01f2;
	i8 v6643 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6643)(v6642);

	i8 v6644 = (i8)(intptr_t)(ws+4112);
	i8 v6645 = *(i8*)(intptr_t)v6644;
	i8 v6646 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6646)(v6645);

	i8 v6647 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v6647)();

endsub:;
}
const i1 c02_s01f3[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0 };
	void f392_deadlock(i8 /* s */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f374_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
const i1 c02_s01f4[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0 };
	void f392_deadlock(i8 /* s */);
	void f151_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f149_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f375_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);

// AllocateRegister workspace at ws+4088 length ws+20
void f391_AllocateRegister(void) {

	i8 v6214 = (i8)(intptr_t)(ws+4056);
	i8 v6215 = *(i8*)(intptr_t)v6214;
	i8 v6216 = v6215+(+48);
	i1 v6217 = *(i1*)(intptr_t)v6216;
	i8 v6218 = (i8)(intptr_t)(f368_IsStackedRegister);
	i1 v6219;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v6218)(&v6219, v6217);
	i1 v6220 = (i1)+0;
	if (v6219==v6220) goto c02_04e2; else goto c02_04e1;

c02_04e1:;

	i8 v6221 = (i8)(intptr_t)(ws+4064);
	i8 v6222 = *(i8*)(intptr_t)v6221;
	i8 v6223 = v6222+(+56);
	i1 v6224 = *(i1*)(intptr_t)v6223;
	i8 v6225 = (i8)(intptr_t)(ws+4056);
	i8 v6226 = *(i8*)(intptr_t)v6225;
	i8 v6227 = v6226+(+48);
	i1 v6228 = *(i1*)(intptr_t)v6227;
	i1 v6229 = v6224&v6228;
	i8 v6230 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6230 = v6229;

	i8 v6231 = (i8)(intptr_t)(ws+4088);
	i1 v6232 = *(i1*)(intptr_t)v6231;
	i1 v6233 = (i1)+0;
	if (v6232==v6233) goto c02_04e7; else goto c02_04e6;

c02_04e6:;

	i8 v6234 = (i8)(intptr_t)(ws+4088);
	i1 v6235 = *(i1*)(intptr_t)v6234;
	i8 v6236 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6237;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6236)(&v6237, v6235);
	i8 v6238 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6238 = v6237;

	i8 v6239 = (i8)(intptr_t)(ws+4088);
	i1 v6240 = *(i1*)(intptr_t)v6239;
	i8 v6241 = (i8)(intptr_t)(ws+4064);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	i8 v6243 = v6242+(+57);
	*(i1*)(intptr_t)v6243 = v6240;

	i8 v6244 = (i8)(intptr_t)(ws+4088);
	i1 v6245 = *(i1*)(intptr_t)v6244;
	i8 v6246 = (i8)(intptr_t)(ws+4056);
	i8 v6247 = *(i8*)(intptr_t)v6246;
	i8 v6248 = v6247+(+49);
	*(i1*)(intptr_t)v6248 = v6245;

	goto c02_04e3;

c02_04e7:;

	i8 v6249 = (i8)(intptr_t)(ws+4056);
	i8 v6250 = *(i8*)(intptr_t)v6249;
	i8 v6251 = v6250+(+48);
	i1 v6252 = *(i1*)(intptr_t)v6251;
	i8 v6253 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6254;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6253)(&v6254, v6252);
	i8 v6255 = (i8)(intptr_t)(ws+4056);
	i8 v6256 = *(i8*)(intptr_t)v6255;
	i8 v6257 = v6256+(+49);
	*(i1*)(intptr_t)v6257 = v6254;

	i8 v6258 = (i8)(intptr_t)(ws+4064);
	i8 v6259 = *(i8*)(intptr_t)v6258;
	i8 v6260 = v6259+(+56);
	i1 v6261 = *(i1*)(intptr_t)v6260;
	i8 v6262 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6263;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6262)(&v6263, v6261);
	i8 v6264 = (i8)(intptr_t)(ws+4064);
	i8 v6265 = *(i8*)(intptr_t)v6264;
	i8 v6266 = v6265+(+57);
	*(i1*)(intptr_t)v6266 = v6263;

	i8 v6267 = (i8)(intptr_t)(ws+4056);
	i8 v6268 = *(i8*)(intptr_t)v6267;
	i8 v6269 = (i8)(intptr_t)(ws+4056);
	i8 v6270 = *(i8*)(intptr_t)v6269;
	i8 v6271 = v6270+(+49);
	i1 v6272 = *(i1*)(intptr_t)v6271;
	i8 v6273 = (i8)(intptr_t)(ws+4064);
	i8 v6274 = *(i8*)(intptr_t)v6273;
	i8 v6275 = v6274+(+57);
	i1 v6276 = *(i1*)(intptr_t)v6275;
	i8 v6277 = (i8)(intptr_t)(f374_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v6277)(v6276, v6272, v6268);

c02_04e3:;

	goto c02_04de;

c02_04e2:;

	i8 v6278 = (i8)(intptr_t)(ws+4064);
	i8 v6279 = *(i8*)(intptr_t)v6278;
	i8 v6280 = v6279+(+48);
	i8 v6281 = *(i8*)(intptr_t)v6280;
	i8 v6282 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v6282 = v6281;

	i8 v6283 = (i8)(intptr_t)(ws+4096);
	i8 v6284 = *(i8*)(intptr_t)v6283;
	i8 v6285 = (i8)(intptr_t)(ws+4056);
	i8 v6286 = *(i8*)(intptr_t)v6285;
	i8 v6287 = (i8)(intptr_t)(f369_CalculateBlockedRegisters);
	i1 v6288;

	((void(*)(i1* /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v6287)(&v6288, v6286, v6284);
	i8 v6289 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v6289 = v6288;

	i8 v6290 = (i8)(intptr_t)(ws+4064);
	i8 v6291 = *(i8*)(intptr_t)v6290;
	i8 v6292 = v6291+(+56);
	i1 v6293 = *(i1*)(intptr_t)v6292;
	i8 v6294 = (i8)(intptr_t)(ws+4056);
	i8 v6295 = *(i8*)(intptr_t)v6294;
	i8 v6296 = v6295+(+48);
	i1 v6297 = *(i1*)(intptr_t)v6296;
	i1 v6298 = v6293&v6297;
	i8 v6299 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6299 = v6298;

	i8 v6300 = (i8)(intptr_t)(ws+4088);
	i1 v6301 = *(i1*)(intptr_t)v6300;
	i8 v6302 = (i8)(intptr_t)(ws+4104);
	i1 v6303 = *(i1*)(intptr_t)v6302;
	i8 v6304 = (i8)(intptr_t)(ws+4056);
	i8 v6305 = *(i8*)(intptr_t)v6304;
	i8 v6306 = v6305+(+66);
	i1 v6307 = *(i1*)(intptr_t)v6306;
	i1 v6308 = v6303|v6307;
	i8 v6309 = (i8)(intptr_t)(ws+4096);
	i8 v6310 = *(i8*)(intptr_t)v6309;
	i8 v6311 = v6310+(+64);
	i1 v6312 = *(i1*)(intptr_t)v6311;
	i1 v6313 = v6308|v6312;
	i1 v6314 = ~v6313;
	i1 v6315 = v6301&v6314;
	i8 v6316 = (i8)(intptr_t)(ws+4105);
	*(i1*)(intptr_t)v6316 = v6315;

	i8 v6317 = (i8)(intptr_t)(ws+4105);
	i1 v6318 = *(i1*)(intptr_t)v6317;
	i1 v6319 = (i1)+0;
	if (v6318==v6319) goto c02_04ec; else goto c02_04eb;

c02_04eb:;

	i8 v6320 = (i8)(intptr_t)(ws+4105);
	i1 v6321 = *(i1*)(intptr_t)v6320;
	i8 v6322 = (i8)(intptr_t)(f390_FindPreferredRegister);
	i1 v6323;

	((void(*)(i1* /* reg */, i1 /* mask */))(intptr_t)v6322)(&v6323, v6321);
	i8 v6324 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6324 = v6323;

	i8 v6325 = (i8)(intptr_t)(ws+4088);
	i1 v6326 = *(i1*)(intptr_t)v6325;
	i8 v6327 = (i8)(intptr_t)(ws+4064);
	i8 v6328 = *(i8*)(intptr_t)v6327;
	i8 v6329 = v6328+(+57);
	*(i1*)(intptr_t)v6329 = v6326;

	i8 v6330 = (i8)(intptr_t)(ws+4088);
	i1 v6331 = *(i1*)(intptr_t)v6330;
	i8 v6332 = (i8)(intptr_t)(ws+4056);
	i8 v6333 = *(i8*)(intptr_t)v6332;
	i8 v6334 = v6333+(+49);
	*(i1*)(intptr_t)v6334 = v6331;

	i8 v6335 = (i8)(intptr_t)(ws+4088);
	i1 v6336 = *(i1*)(intptr_t)v6335;
	i8 v6337 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6338;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6337)(&v6338, v6336);
	i8 v6339 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v6339 = v6338;

	i8 v6340 = (i8)(intptr_t)(ws+4096);
	i8 v6341 = *(i8*)(intptr_t)v6340;
	i8 v6342 = v6341+(+64);
	i1 v6343 = *(i1*)(intptr_t)v6342;
	i8 v6344 = (i8)(intptr_t)(ws+4104);
	i1 v6345 = *(i1*)(intptr_t)v6344;
	i1 v6346 = v6343|v6345;
	i8 v6347 = (i8)(intptr_t)(ws+4096);
	i8 v6348 = *(i8*)(intptr_t)v6347;
	i8 v6349 = v6348+(+64);
	*(i1*)(intptr_t)v6349 = v6346;

	i8 v6350 = (i8)(intptr_t)(ws+4096);
	i8 v6351 = *(i8*)(intptr_t)v6350;
	i8 v6352 = (i8)(intptr_t)(ws+4056);
	i8 v6353 = *(i8*)(intptr_t)v6352;
	i8 v6354 = (i8)(intptr_t)(ws+4104);
	i1 v6355 = *(i1*)(intptr_t)v6354;
	i8 v6356 = (i8)(intptr_t)(f371_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v6356)(v6355, v6353, v6351);

	i8 v6357 = (i8)(intptr_t)(ws+4056);
	i8 v6358 = *(i8*)(intptr_t)v6357;
	i8 v6359 = v6358+(+66);
	i1 v6360 = *(i1*)(intptr_t)v6359;
	i8 v6361 = (i8)(intptr_t)(ws+4104);
	i1 v6362 = *(i1*)(intptr_t)v6361;
	i1 v6363 = v6360|v6362;
	i8 v6364 = (i8)(intptr_t)(ws+4056);
	i8 v6365 = *(i8*)(intptr_t)v6364;
	i8 v6366 = v6365+(+66);
	*(i1*)(intptr_t)v6366 = v6363;

	goto c02_04e8;

c02_04ec:;

	i8 v6367 = (i8)(intptr_t)(ws+4064);
	i8 v6368 = *(i8*)(intptr_t)v6367;
	i8 v6369 = v6368+(+56);
	i1 v6370 = *(i1*)(intptr_t)v6369;
	i1 v6371 = v6370&(-1);
	i8 v6372 = (i8)(intptr_t)(f150_FindCompatibleRegisters);
	i1 v6373;

	((void(*)(i1* /* compatible */, i1 /* inreg */))(intptr_t)v6372)(&v6373, v6371);
	i8 v6374 = (i8)(intptr_t)(ws+4106);
	*(i1*)(intptr_t)v6374 = v6373;

	i8 v6375 = (i8)(intptr_t)(ws+4056);
	i8 v6376 = *(i8*)(intptr_t)v6375;
	i8 v6377 = v6376+(+48);
	i1 v6378 = *(i1*)(intptr_t)v6377;
	i8 v6379 = (i8)(intptr_t)(ws+4106);
	i1 v6380 = *(i1*)(intptr_t)v6379;
	i1 v6381 = v6378&v6380;
	i8 v6382 = (i8)(intptr_t)(ws+4104);
	i1 v6383 = *(i1*)(intptr_t)v6382;
	i8 v6384 = (i8)(intptr_t)(ws+4056);
	i8 v6385 = *(i8*)(intptr_t)v6384;
	i8 v6386 = v6385+(+66);
	i1 v6387 = *(i1*)(intptr_t)v6386;
	i1 v6388 = v6383|v6387;
	i1 v6389 = ~v6388;
	i1 v6390 = v6381&v6389;
	i8 v6391 = (i8)(intptr_t)(ws+4105);
	*(i1*)(intptr_t)v6391 = v6390;

	i8 v6392 = (i8)(intptr_t)(ws+4064);
	i8 v6393 = *(i8*)(intptr_t)v6392;
	i8 v6394 = v6393+(+56);
	i1 v6395 = *(i1*)(intptr_t)v6394;
	i8 v6396 = (i8)(intptr_t)(ws+4096);
	i8 v6397 = *(i8*)(intptr_t)v6396;
	i8 v6398 = v6397+(+64);
	i1 v6399 = *(i1*)(intptr_t)v6398;
	i1 v6400 = ~v6399;
	i1 v6401 = v6395&v6400;
	i8 v6402 = (i8)(intptr_t)(ws+4107);
	*(i1*)(intptr_t)v6402 = v6401;

	i8 v6403 = (i8)(intptr_t)(ws+4105);
	i1 v6404 = *(i1*)(intptr_t)v6403;
	i1 v6405 = (i1)+0;
	if (v6404==v6405) goto c02_04f3; else goto c02_04f4;

c02_04f4:;

	i8 v6406 = (i8)(intptr_t)(ws+4107);
	i1 v6407 = *(i1*)(intptr_t)v6406;
	i1 v6408 = (i1)+0;
	if (v6407==v6408) goto c02_04f3; else goto c02_04f2;

c02_04f2:;

	i8 v6409 = (i8)(intptr_t)(ws+4105);
	i1 v6410 = *(i1*)(intptr_t)v6409;
	i8 v6411 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6412;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6411)(&v6412, v6410);
	i8 v6413 = (i8)(intptr_t)(ws+4056);
	i8 v6414 = *(i8*)(intptr_t)v6413;
	i8 v6415 = v6414+(+49);
	*(i1*)(intptr_t)v6415 = v6412;

	i8 v6416 = (i8)(intptr_t)(ws+4107);
	i1 v6417 = *(i1*)(intptr_t)v6416;
	i8 v6418 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6419;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6418)(&v6419, v6417);
	i8 v6420 = (i8)(intptr_t)(ws+4064);
	i8 v6421 = *(i8*)(intptr_t)v6420;
	i8 v6422 = v6421+(+57);
	*(i1*)(intptr_t)v6422 = v6419;

	i8 v6423 = (i8)(intptr_t)(ws+4096);
	i8 v6424 = *(i8*)(intptr_t)v6423;
	i8 v6425 = v6424+(+64);
	i1 v6426 = *(i1*)(intptr_t)v6425;
	i8 v6427 = (i8)(intptr_t)(ws+4064);
	i8 v6428 = *(i8*)(intptr_t)v6427;
	i8 v6429 = v6428+(+57);
	i1 v6430 = *(i1*)(intptr_t)v6429;
	i8 v6431 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6432;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6431)(&v6432, v6430);
	i1 v6433 = v6426|v6432;
	i8 v6434 = (i8)(intptr_t)(ws+4096);
	i8 v6435 = *(i8*)(intptr_t)v6434;
	i8 v6436 = v6435+(+64);
	*(i1*)(intptr_t)v6436 = v6433;

	i8 v6437 = (i8)(intptr_t)(ws+4056);
	i8 v6438 = *(i8*)(intptr_t)v6437;
	i8 v6439 = v6438+(+49);
	i1 v6440 = *(i1*)(intptr_t)v6439;
	i8 v6441 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6442;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6441)(&v6442, v6440);
	i8 v6443 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v6443 = v6442;

	i8 v6444 = (i8)(intptr_t)(ws+4096);
	i8 v6445 = *(i8*)(intptr_t)v6444;
	i8 v6446 = (i8)(intptr_t)(ws+4056);
	i8 v6447 = *(i8*)(intptr_t)v6446;
	i8 v6448 = (i8)(intptr_t)(ws+4104);
	i1 v6449 = *(i1*)(intptr_t)v6448;
	i8 v6450 = (i8)(intptr_t)(f371_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v6450)(v6449, v6447, v6445);

	i8 v6451 = (i8)(intptr_t)(ws+4056);
	i8 v6452 = *(i8*)(intptr_t)v6451;
	i8 v6453 = v6452+(+66);
	i1 v6454 = *(i1*)(intptr_t)v6453;
	i8 v6455 = (i8)(intptr_t)(ws+4104);
	i1 v6456 = *(i1*)(intptr_t)v6455;
	i1 v6457 = v6454|v6456;
	i8 v6458 = (i8)(intptr_t)(ws+4056);
	i8 v6459 = *(i8*)(intptr_t)v6458;
	i8 v6460 = v6459+(+66);
	*(i1*)(intptr_t)v6460 = v6457;

	i8 v6461 = (i8)(intptr_t)(ws+4096);
	i8 v6462 = *(i8*)(intptr_t)v6461;
	i8 v6463 = (i8)(intptr_t)(ws+4056);
	i8 v6464 = *(i8*)(intptr_t)v6463;
	i8 v6465 = v6464+(+49);
	i1 v6466 = *(i1*)(intptr_t)v6465;
	i8 v6467 = (i8)(intptr_t)(ws+4064);
	i8 v6468 = *(i8*)(intptr_t)v6467;
	i8 v6469 = v6468+(+57);
	i1 v6470 = *(i1*)(intptr_t)v6469;
	i8 v6471 = (i8)(intptr_t)(f375_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v6471)(v6470, v6466, v6462);

	goto c02_04ed;

c02_04f3:;

	i8 v6472 = (i8)(intptr_t)(ws+4064);
	i8 v6473 = *(i8*)(intptr_t)v6472;
	i8 v6474 = v6473+(+56);
	i1 v6475 = *(i1*)(intptr_t)v6474;
	i8 v6476 = (i8)(intptr_t)(ws+4104);
	i1 v6477 = *(i1*)(intptr_t)v6476;
	i8 v6478 = (i8)(intptr_t)(ws+4096);
	i8 v6479 = *(i8*)(intptr_t)v6478;
	i8 v6480 = v6479+(+64);
	i1 v6481 = *(i1*)(intptr_t)v6480;
	i1 v6482 = v6477|v6481;
	i1 v6483 = ~v6482;
	i1 v6484 = v6475&v6483;
	i8 v6485 = (i8)(intptr_t)(ws+4105);
	*(i1*)(intptr_t)v6485 = v6484;

	i8 v6486 = (i8)(intptr_t)(ws+4056);
	i8 v6487 = *(i8*)(intptr_t)v6486;
	i8 v6488 = v6487+(+48);
	i1 v6489 = *(i1*)(intptr_t)v6488;
	i8 v6490 = (i8)(intptr_t)(ws+4106);
	i1 v6491 = *(i1*)(intptr_t)v6490;
	i1 v6492 = v6489&v6491;
	i8 v6493 = (i8)(intptr_t)(ws+4056);
	i8 v6494 = *(i8*)(intptr_t)v6493;
	i8 v6495 = v6494+(+66);
	i1 v6496 = *(i1*)(intptr_t)v6495;
	i1 v6497 = ~v6496;
	i1 v6498 = v6492&v6497;
	i8 v6499 = (i8)(intptr_t)(ws+4107);
	*(i1*)(intptr_t)v6499 = v6498;

	i8 v6500 = (i8)(intptr_t)(ws+4105);
	i1 v6501 = *(i1*)(intptr_t)v6500;
	i1 v6502 = (i1)+0;
	if (v6501==v6502) goto c02_04fb; else goto c02_04fc;

c02_04fc:;

	i8 v6503 = (i8)(intptr_t)(ws+4107);
	i1 v6504 = *(i1*)(intptr_t)v6503;
	i1 v6505 = (i1)+0;
	if (v6504==v6505) goto c02_04fb; else goto c02_04fa;

c02_04fa:;

	i8 v6506 = (i8)(intptr_t)(ws+4107);
	i1 v6507 = *(i1*)(intptr_t)v6506;
	i8 v6508 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6509;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6508)(&v6509, v6507);
	i8 v6510 = (i8)(intptr_t)(ws+4056);
	i8 v6511 = *(i8*)(intptr_t)v6510;
	i8 v6512 = v6511+(+49);
	*(i1*)(intptr_t)v6512 = v6509;

	i8 v6513 = (i8)(intptr_t)(ws+4105);
	i1 v6514 = *(i1*)(intptr_t)v6513;
	i8 v6515 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6516;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6515)(&v6516, v6514);
	i8 v6517 = (i8)(intptr_t)(ws+4064);
	i8 v6518 = *(i8*)(intptr_t)v6517;
	i8 v6519 = v6518+(+57);
	*(i1*)(intptr_t)v6519 = v6516;

	i8 v6520 = (i8)(intptr_t)(ws+4064);
	i8 v6521 = *(i8*)(intptr_t)v6520;
	i8 v6522 = v6521+(+57);
	i1 v6523 = *(i1*)(intptr_t)v6522;
	i8 v6524 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6525;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6524)(&v6525, v6523);
	i8 v6526 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v6526 = v6525;

	i8 v6527 = (i8)(intptr_t)(ws+4096);
	i8 v6528 = *(i8*)(intptr_t)v6527;
	i8 v6529 = v6528+(+64);
	i1 v6530 = *(i1*)(intptr_t)v6529;
	i8 v6531 = (i8)(intptr_t)(ws+4104);
	i1 v6532 = *(i1*)(intptr_t)v6531;
	i1 v6533 = v6530|v6532;
	i8 v6534 = (i8)(intptr_t)(ws+4096);
	i8 v6535 = *(i8*)(intptr_t)v6534;
	i8 v6536 = v6535+(+64);
	*(i1*)(intptr_t)v6536 = v6533;

	i8 v6537 = (i8)(intptr_t)(ws+4096);
	i8 v6538 = *(i8*)(intptr_t)v6537;
	i8 v6539 = (i8)(intptr_t)(ws+4056);
	i8 v6540 = *(i8*)(intptr_t)v6539;
	i8 v6541 = (i8)(intptr_t)(ws+4104);
	i1 v6542 = *(i1*)(intptr_t)v6541;
	i8 v6543 = (i8)(intptr_t)(f371_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v6543)(v6542, v6540, v6538);

	i8 v6544 = (i8)(intptr_t)(ws+4056);
	i8 v6545 = *(i8*)(intptr_t)v6544;
	i8 v6546 = v6545+(+66);
	i1 v6547 = *(i1*)(intptr_t)v6546;
	i8 v6548 = (i8)(intptr_t)(ws+4056);
	i8 v6549 = *(i8*)(intptr_t)v6548;
	i8 v6550 = v6549+(+49);
	i1 v6551 = *(i1*)(intptr_t)v6550;
	i8 v6552 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6553;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6552)(&v6553, v6551);
	i1 v6554 = v6547|v6553;
	i8 v6555 = (i8)(intptr_t)(ws+4056);
	i8 v6556 = *(i8*)(intptr_t)v6555;
	i8 v6557 = v6556+(+66);
	*(i1*)(intptr_t)v6557 = v6554;

	i8 v6558 = (i8)(intptr_t)(ws+4056);
	i8 v6559 = *(i8*)(intptr_t)v6558;
	i8 v6560 = (i8)(intptr_t)(ws+4056);
	i8 v6561 = *(i8*)(intptr_t)v6560;
	i8 v6562 = v6561+(+49);
	i1 v6563 = *(i1*)(intptr_t)v6562;
	i8 v6564 = (i8)(intptr_t)(ws+4064);
	i8 v6565 = *(i8*)(intptr_t)v6564;
	i8 v6566 = v6565+(+57);
	i1 v6567 = *(i1*)(intptr_t)v6566;
	i8 v6568 = (i8)(intptr_t)(f374_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v6568)(v6567, v6563, v6559);

	goto c02_04f5;

c02_04fb:;


	i8 v6648 = (i8)(intptr_t)(ws+4056);
	i8 v6649 = *(i8*)(intptr_t)v6648;
	i8 v6650 = v6649+(+48);
	i1 v6651 = *(i1*)(intptr_t)v6650;
	i8 v6652 = (i8)(intptr_t)(ws+4106);
	i1 v6653 = *(i1*)(intptr_t)v6652;
	i1 v6654 = v6651&v6653;
	i8 v6655 = (i8)(intptr_t)(ws+4056);
	i8 v6656 = *(i8*)(intptr_t)v6655;
	i8 v6657 = v6656+(+66);
	i1 v6658 = *(i1*)(intptr_t)v6657;
	i1 v6659 = ~v6658;
	i1 v6660 = v6654&v6659;
	i8 v6661 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6661 = v6660;

	i8 v6662 = (i8)(intptr_t)(ws+4088);
	i1 v6663 = *(i1*)(intptr_t)v6662;
	i1 v6664 = (i1)+0;
	if (v6663==v6664) goto c02_0500; else goto c02_0501;

c02_0500:;

	i8 v6665 = (i8)(intptr_t)c02_s01f3;
	i8 v6666 = (i8)(intptr_t)(f392_deadlock);

	((void(*)(i8 /* s */))(intptr_t)v6666)(v6665);

c02_0501:;

c02_04fd:;

	i8 v6667 = (i8)(intptr_t)(ws+4088);
	i1 v6668 = *(i1*)(intptr_t)v6667;
	i8 v6669 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6670;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6669)(&v6670, v6668);
	i8 v6671 = (i8)(intptr_t)(ws+4056);
	i8 v6672 = *(i8*)(intptr_t)v6671;
	i8 v6673 = v6672+(+49);
	*(i1*)(intptr_t)v6673 = v6670;

	i8 v6674 = (i8)(intptr_t)(ws+4056);
	i8 v6675 = *(i8*)(intptr_t)v6674;
	i8 v6676 = v6675+(+66);
	i1 v6677 = *(i1*)(intptr_t)v6676;
	i8 v6678 = (i8)(intptr_t)(ws+4056);
	i8 v6679 = *(i8*)(intptr_t)v6678;
	i8 v6680 = v6679+(+49);
	i1 v6681 = *(i1*)(intptr_t)v6680;
	i8 v6682 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6683;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6682)(&v6683, v6681);
	i1 v6684 = v6677|v6683;
	i8 v6685 = (i8)(intptr_t)(ws+4056);
	i8 v6686 = *(i8*)(intptr_t)v6685;
	i8 v6687 = v6686+(+66);
	*(i1*)(intptr_t)v6687 = v6684;

	i8 v6688 = (i8)(intptr_t)(ws+4056);
	i8 v6689 = *(i8*)(intptr_t)v6688;
	i8 v6690 = (i8)(intptr_t)(ws+4056);
	i8 v6691 = *(i8*)(intptr_t)v6690;
	i8 v6692 = v6691+(+49);
	i1 v6693 = *(i1*)(intptr_t)v6692;
	i1 v6694 = (i1)+0;
	i8 v6695 = (i8)(intptr_t)(f374_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v6695)(v6694, v6693, v6689);

	i8 v6696 = (i8)(intptr_t)(ws+4064);
	i8 v6697 = *(i8*)(intptr_t)v6696;
	i8 v6698 = v6697+(+56);
	i1 v6699 = *(i1*)(intptr_t)v6698;
	i8 v6700 = (i8)(intptr_t)(ws+4096);
	i8 v6701 = *(i8*)(intptr_t)v6700;
	i8 v6702 = v6701+(+64);
	i1 v6703 = *(i1*)(intptr_t)v6702;
	i1 v6704 = ~v6703;
	i1 v6705 = v6699&v6704;
	i8 v6706 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6706 = v6705;

	i8 v6707 = (i8)(intptr_t)(ws+4088);
	i1 v6708 = *(i1*)(intptr_t)v6707;
	i1 v6709 = (i1)+0;
	if (v6708==v6709) goto c02_0505; else goto c02_0506;

c02_0505:;

	i8 v6710 = (i8)(intptr_t)c02_s01f4;
	i8 v6711 = (i8)(intptr_t)(f392_deadlock);

	((void(*)(i8 /* s */))(intptr_t)v6711)(v6710);

c02_0506:;

c02_0502:;

	i8 v6712 = (i8)(intptr_t)(ws+4088);
	i1 v6713 = *(i1*)(intptr_t)v6712;
	i8 v6714 = (i8)(intptr_t)(f151_FindFirst);
	i1 v6715;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v6714)(&v6715, v6713);
	i8 v6716 = (i8)(intptr_t)(ws+4064);
	i8 v6717 = *(i8*)(intptr_t)v6716;
	i8 v6718 = v6717+(+57);
	*(i1*)(intptr_t)v6718 = v6715;

	i8 v6719 = (i8)(intptr_t)(ws+4096);
	i8 v6720 = *(i8*)(intptr_t)v6719;
	i8 v6721 = v6720+(+64);
	i1 v6722 = *(i1*)(intptr_t)v6721;
	i8 v6723 = (i8)(intptr_t)(ws+4064);
	i8 v6724 = *(i8*)(intptr_t)v6723;
	i8 v6725 = v6724+(+57);
	i1 v6726 = *(i1*)(intptr_t)v6725;
	i8 v6727 = (i8)(intptr_t)(f149_FindConflictingRegisters);
	i1 v6728;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v6727)(&v6728, v6726);
	i1 v6729 = v6722|v6728;
	i8 v6730 = (i8)(intptr_t)(ws+4096);
	i8 v6731 = *(i8*)(intptr_t)v6730;
	i8 v6732 = v6731+(+64);
	*(i1*)(intptr_t)v6732 = v6729;

	i8 v6733 = (i8)(intptr_t)(ws+4096);
	i8 v6734 = *(i8*)(intptr_t)v6733;
	i1 v6735 = (i1)+0;
	i8 v6736 = (i8)(intptr_t)(ws+4064);
	i8 v6737 = *(i8*)(intptr_t)v6736;
	i8 v6738 = v6737+(+57);
	i1 v6739 = *(i1*)(intptr_t)v6738;
	i8 v6740 = (i8)(intptr_t)(f375_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v6740)(v6739, v6735, v6734);

c02_04f5:;

c02_04ed:;

c02_04e8:;

c02_04de:;

endsub:;
}
	void f391_AllocateRegister(void);

// UpdateProducedRegisters workspace at ws+4088 length ws+1
void f393_UpdateProducedRegisters(void) {

	i1 v6742 = (i1)+0;
	i8 v6743 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v6743 = v6742;

c02_0509:;

	i8 v6744 = (i8)(intptr_t)(ws+4024);
	i1 v6745 = *(i1*)(intptr_t)v6744;
	i1 v6746 = (i1)+4;
	if (v6745==v6746) goto c02_050c; else goto c02_050b;

c02_050b:;

	i8 v6747 = (i8)(intptr_t)(ws+4056);
	i8 v6748 = *(i8*)(intptr_t)v6747;
	i8 v6749 = v6748+(+16);
	i8 v6750 = (i8)(intptr_t)(ws+4024);
	i1 v6751 = *(i1*)(intptr_t)v6750;
	i8 v6752 = v6751;
	i1 v6753 = (i1)+3;
	i8 v6754 = ((i8)v6752)<<v6753;
	i8 v6755 = v6749+v6754;
	i8 v6756 = *(i8*)(intptr_t)v6755;
	i8 v6757 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6757 = v6756;

	i8 v6758 = (i8)(intptr_t)(ws+4064);
	i8 v6759 = *(i8*)(intptr_t)v6758;
	i8 v6760 = (i8)+0;
	if (v6759==v6760) goto c02_0513; else goto c02_0514;

c02_0514:;

	i8 v6761 = (i8)(intptr_t)(ws+4064);
	i8 v6762 = *(i8*)(intptr_t)v6761;
	i8 v6763 = v6762+(+56);
	i1 v6764 = *(i1*)(intptr_t)v6763;
	i1 v6765 = (i1)-1;
	if (v6764==v6765) goto c02_0512; else goto c02_0513;

c02_0512:;

	i8 v6766 = (i8)(intptr_t)(ws+4056);
	i8 v6767 = *(i8*)(intptr_t)v6766;
	i8 v6768 = v6767+(+49);
	i1 v6769 = *(i1*)(intptr_t)v6768;
	i8 v6770 = (i8)(intptr_t)(ws+4064);
	i8 v6771 = *(i8*)(intptr_t)v6770;
	i8 v6772 = v6771+(+56);
	*(i1*)(intptr_t)v6772 = v6769;

	i1 v6773 = (i1)+0;
	i8 v6774 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6774 = v6773;

c02_0517:;

	i8 v6775 = (i8)(intptr_t)(ws+4088);
	i1 v6776 = *(i1*)(intptr_t)v6775;
	i1 v6777 = (i1)+4;
	if (v6776==v6777) goto c02_051a; else goto c02_0519;

c02_0519:;

	i8 v6778 = (i8)(intptr_t)(ws+4024);
	i1 v6779 = *(i1*)(intptr_t)v6778;
	i8 v6780 = (i8)(intptr_t)(ws+4088);
	i1 v6781 = *(i1*)(intptr_t)v6780;
	if (v6779==v6781) goto c02_051f; else goto c02_051e;

c02_051e:;

	i8 v6782 = (i8)(intptr_t)(ws+4056);
	i8 v6783 = *(i8*)(intptr_t)v6782;
	i8 v6784 = v6783+(+16);
	i8 v6785 = (i8)(intptr_t)(ws+4088);
	i1 v6786 = *(i1*)(intptr_t)v6785;
	i8 v6787 = v6786;
	i1 v6788 = (i1)+3;
	i8 v6789 = ((i8)v6787)<<v6788;
	i8 v6790 = v6784+v6789;
	i8 v6791 = *(i8*)(intptr_t)v6790;
	i8 v6792 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6792 = v6791;

	i8 v6793 = (i8)(intptr_t)(ws+4064);
	i8 v6794 = *(i8*)(intptr_t)v6793;
	i8 v6795 = (i8)+0;
	if (v6794==v6795) goto c02_0524; else goto c02_0523;

c02_0523:;

	i8 v6796 = (i8)(intptr_t)(ws+4064);
	i8 v6797 = *(i8*)(intptr_t)v6796;
	i8 v6798 = v6797+(+56);
	i1 v6799 = *(i1*)(intptr_t)v6798;
	i8 v6800 = (i8)(intptr_t)(ws+4056);
	i8 v6801 = *(i8*)(intptr_t)v6800;
	i8 v6802 = v6801+(+49);
	i1 v6803 = *(i1*)(intptr_t)v6802;
	i1 v6804 = ~v6803;
	i1 v6805 = v6799&v6804;
	i8 v6806 = (i8)(intptr_t)(ws+4064);
	i8 v6807 = *(i8*)(intptr_t)v6806;
	i8 v6808 = v6807+(+56);
	*(i1*)(intptr_t)v6808 = v6805;

c02_0524:;

c02_0520:;

c02_051f:;

c02_051b:;

	i8 v6809 = (i8)(intptr_t)(ws+4088);
	i1 v6810 = *(i1*)(intptr_t)v6809;
	i1 v6811 = v6810+(+1);
	i8 v6812 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6812 = v6811;

	goto c02_0517;

c02_051a:;

c02_0513:;

c02_050d:;

	i8 v6813 = (i8)(intptr_t)(ws+4024);
	i1 v6814 = *(i1*)(intptr_t)v6813;
	i1 v6815 = v6814+(+1);
	i8 v6816 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v6816 = v6815;

	goto c02_0509;

c02_050c:;

endsub:;
}
	void f393_UpdateProducedRegisters(void);
	void f376_ShuffleRegisters(i8 /* moves */);
	void f190_EmitOneInstruction(i8 /* self */, i1 /* ruleid */);
	void f376_ShuffleRegisters(i8 /* moves */);
	void f159_ArchEndInstruction(void);
	void f79_FreeNode(i8 /* node */);
	void f148_FreeInstruction(i8 /* insn */);

// EmitAndFreeInstructions workspace at ws+4088 length ws+8
void f394_EmitAndFreeInstructions(void) {

c02_0525:;

	i8 v6818 = (i8)(intptr_t)(ws+4040);
	i8 v6819 = *(i8*)(intptr_t)v6818;
	i8 v6820 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v6820 = v6819;

	i8 v6821 = (i8)(intptr_t)(ws+4088);
	i8 v6822 = *(i8*)(intptr_t)v6821;
	i8 v6823 = (i8)+0;
	if (v6822==v6823) goto c02_052a; else goto c02_052b;

c02_052a:;

	goto c02_0526;

c02_052b:;

c02_0527:;

	i8 v6824 = (i8)(intptr_t)(ws+4040);
	i8 v6825 = *(i8*)(intptr_t)v6824;
	i8 v6826 = v6825+(+8);
	i8 v6827 = *(i8*)(intptr_t)v6826;
	i8 v6828 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v6828 = v6827;

	i8 v6829 = (i8)(intptr_t)(ws+4088);
	i8 v6830 = *(i8*)(intptr_t)v6829;
	i8 v6831 = v6830+(+75);
	i8 v6832 = (i8)(intptr_t)(f376_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v6832)(v6831);

	i8 v6833 = (i8)(intptr_t)(ws+4088);
	i8 v6834 = *(i8*)(intptr_t)v6833;
	i8 v6835 = v6834+(+16);
	i8 v6836 = *(i8*)(intptr_t)v6835;
	i8 v6837 = v6836+(+256);
	i1 v6838 = *(i1*)(intptr_t)v6837;

	if (v6838 != +18) goto c02_052d;

	i1 v6839 = (i1)+1;
	i8 v6840 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v6840 = v6839;

	goto c02_052c;

c02_052d:;

	if (v6838 != +23) goto c02_052e;

	i1 v6841 = (i1)+0;
	i8 v6842 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v6842 = v6841;

c02_052e:;

c02_052c:;


	i8 v6843 = (i8)(intptr_t)(ws+4088);
	i8 v6844 = *(i8*)(intptr_t)v6843;
	i8 v6845 = v6844+(+86);
	i1 v6846 = *(i1*)(intptr_t)v6845;
	i8 v6847 = (i8)(intptr_t)(ws+4088);
	i8 v6848 = *(i8*)(intptr_t)v6847;
	i8 v6849 = (i8)(intptr_t)(f190_EmitOneInstruction);

	((void(*)(i8 /* self */, i1 /* ruleid */))(intptr_t)v6849)(v6848, v6846);

	i8 v6850 = (i8)(intptr_t)(ws+4088);
	i8 v6851 = *(i8*)(intptr_t)v6850;
	i8 v6852 = v6851+(+67);
	i8 v6853 = (i8)(intptr_t)(f376_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v6853)(v6852);

	i8 v6854 = (i8)(intptr_t)(f159_ArchEndInstruction);

	((void(*)(void))(intptr_t)v6854)();

	i8 v6855 = (i8)(intptr_t)(ws+4088);
	i8 v6856 = *(i8*)(intptr_t)v6855;
	i8 v6857 = v6856+(+16);
	i8 v6858 = *(i8*)(intptr_t)v6857;
	i8 v6859 = v6858+(+256);
	i1 v6860 = *(i1*)(intptr_t)v6859;
	i1 v6861 = (i1)+24;
	if (v6860==v6861) goto c02_0532; else goto c02_0533;

c02_0532:;

	i8 v6862 = (i8)(intptr_t)(ws+4088);
	i8 v6863 = *(i8*)(intptr_t)v6862;
	i8 v6864 = v6863+(+16);
	i8 v6865 = *(i8*)(intptr_t)v6864;
	i8 v6866 = (i8)(intptr_t)(f79_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v6866)(v6865);

c02_0533:;

c02_052f:;

	i8 v6867 = (i8)(intptr_t)(ws+4088);
	i8 v6868 = *(i8*)(intptr_t)v6867;
	i8 v6869 = (i8)(intptr_t)(f148_FreeInstruction);

	((void(*)(i8 /* insn */))(intptr_t)v6869)(v6868);

	goto c02_0525;

c02_0526:;

endsub:;
}
	void f394_EmitAndFreeInstructions(void);
	void f160_ArchEndGroup(void);
	void f64_Discard(i8 /* node */);

// Generate workspace at ws+4016 length ws+72
void f384_Generate(i8 p5644 /* rootnode */) {
	*(i8*)(intptr_t)(ws+4016) = p5644; /*rootnode */

	i8 v5645 = (i8)+0;
	i8 v5646 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v5646 = v5645;

	i8 v5647 = (i8)+0;
	i8 v5648 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v5648 = v5647;

	i8 v5649 = (i8)(intptr_t)(ws+184);
	i8 v5650 = *(i8*)(intptr_t)v5649;
	i8 v5651 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v5651 = v5650;

	i8 v5652 = (i8)(intptr_t)(ws+4016);
	i8 v5653 = *(i8*)(intptr_t)v5652;
	i8 v5654 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5654)(v5653);

c02_041e:;

	i8 v5655 = (i8)(intptr_t)(ws+184);
	i8 v5656 = *(i8*)(intptr_t)v5655;
	i8 v5657 = (i8)(intptr_t)(ws+4048);
	i8 v5658 = *(i8*)(intptr_t)v5657;
	if (v5656==v5658) goto c02_0421; else goto c02_0420;

c02_0420:;

	i8 v5659 = (i8)(intptr_t)(f147_AllocNewInstruction);
	i8 v5660;

	((void(*)(i8* /* insn */))(intptr_t)v5659)(&v5660);
	i8 v5661 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v5661 = v5660;

	i8 v5662 = (i8)(intptr_t)(ws+4032);
	i8 v5663 = *(i8*)(intptr_t)v5662;
	i8 v5664 = (i8)+0;
	if (v5663==v5664) goto c02_0425; else goto c02_0426;

c02_0425:;

	i8 v5665 = (i8)(intptr_t)(ws+4056);
	i8 v5666 = *(i8*)(intptr_t)v5665;
	i8 v5667 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v5667 = v5666;

	i8 v5668 = (i8)(intptr_t)(ws+4056);
	i8 v5669 = *(i8*)(intptr_t)v5668;
	i8 v5670 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v5670 = v5669;

	goto c02_0422;

c02_0426:;

	i8 v5671 = (i8)(intptr_t)(ws+4056);
	i8 v5672 = *(i8*)(intptr_t)v5671;
	i8 v5673 = (i8)(intptr_t)(ws+4040);
	i8 v5674 = *(i8*)(intptr_t)v5673;
	*(i8*)(intptr_t)v5674 = v5672;

	i8 v5675 = (i8)(intptr_t)(ws+4040);
	i8 v5676 = *(i8*)(intptr_t)v5675;
	i8 v5677 = (i8)(intptr_t)(ws+4056);
	i8 v5678 = *(i8*)(intptr_t)v5677;
	i8 v5679 = v5678+(+8);
	*(i8*)(intptr_t)v5679 = v5676;

	i8 v5680 = (i8)(intptr_t)(ws+4056);
	i8 v5681 = *(i8*)(intptr_t)v5680;
	i8 v5682 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v5682 = v5681;

c02_0422:;

	i8 v5683 = (i8)(intptr_t)(f62_PopNode);
	i8 v5684;

	((void(*)(i8* /* node */))(intptr_t)v5683)(&v5684);
	i8 v5685 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v5685 = v5684;


	i8 v6063 = (i8)(intptr_t)(f385_InstructionMatcher);

	((void(*)(void))(intptr_t)v6063)();

	i8 v6064 = (i8)(intptr_t)(ws+4056);
	i8 v6065 = *(i8*)(intptr_t)v6064;
	i8 v6066 = v6065+(+48);
	i1 v6067 = *(i1*)(intptr_t)v6066;
	i1 v6068 = (i1)+0;
	if (v6067==v6068) goto c02_049d; else goto c02_049c;

c02_049c:;



	i8 v6741 = (i8)(intptr_t)(f391_AllocateRegister);

	((void(*)(void))(intptr_t)v6741)();


	i8 v6817 = (i8)(intptr_t)(f393_UpdateProducedRegisters);

	((void(*)(void))(intptr_t)v6817)();

c02_049d:;

c02_0499:;

	goto c02_041e;

c02_0421:;


	i8 v6870 = (i8)(intptr_t)(f394_EmitAndFreeInstructions);

	((void(*)(void))(intptr_t)v6870)();

	i8 v6871 = (i8)(intptr_t)(f160_ArchEndGroup);

	((void(*)(void))(intptr_t)v6871)();

	i8 v6872 = (i8)(intptr_t)(ws+4016);
	i8 v6873 = *(i8*)(intptr_t)v6872;
	i8 v6874 = (i8)(intptr_t)(f64_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6874)(v6873);

endsub:;
}
const i1 c02_s01f5[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f68_SimpleError(i8 /* s */);

// PushNode workspace at ws+4184 length ws+8
void f61_PushNode(i8 p7025 /* node */) {
	*(i8*)(intptr_t)(ws+4184) = p7025; /*node */

	i8 v7026 = (i8)(intptr_t)(ws+4184);
	i8 v7027 = *(i8*)(intptr_t)v7026;
	i8 v7028 = (i8)+0;
	if (v7027==v7028) goto c02_054e; else goto c02_054d;

c02_054d:;

	i8 v7029 = (i8)(intptr_t)(ws+184);
	i8 v7030 = *(i8*)(intptr_t)v7029;
	i8 v7031 = (i8)(intptr_t)(ws+184);
	if (v7030==v7031) goto c02_0552; else goto c02_0553;

c02_0552:;

	i8 v7032 = (i8)(intptr_t)c02_s01f5;
	i8 v7033 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v7033)(v7032);

c02_0553:;

c02_054f:;

	i8 v7034 = (i8)(intptr_t)(ws+4184);
	i8 v7035 = *(i8*)(intptr_t)v7034;
	i8 v7036 = (i8)(intptr_t)(ws+184);
	i8 v7037 = *(i8*)(intptr_t)v7036;
	*(i8*)(intptr_t)v7037 = v7035;

	i8 v7038 = (i8)(intptr_t)(ws+184);
	i8 v7039 = *(i8*)(intptr_t)v7038;
	i8 v7040 = v7039+(+8);
	i8 v7041 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v7041 = v7040;

c02_054e:;

c02_054a:;

endsub:;
}

// PopNode workspace at ws+4184 length ws+8
void f62_PopNode(i8* p7042 /* node */) {

	i8 v7043 = (i8)(intptr_t)(ws+184);
	i8 v7044 = *(i8*)(intptr_t)v7043;
	i8 v7045 = v7044+(-8);
	i8 v7046 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v7046 = v7045;

	i8 v7047 = (i8)(intptr_t)(ws+184);
	i8 v7048 = *(i8*)(intptr_t)v7047;
	i8 v7049 = *(i8*)(intptr_t)v7048;
	i8 v7050 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v7050 = v7049;

endsub:;
	*p7042 = *(i8*)(intptr_t)(ws+4184);
}
	void f62_PopNode(i8* /* node */);
	void f61_PushNode(i8 /* node */);
	void f61_PushNode(i8 /* node */);

// NextNode workspace at ws+4176 length ws+8
void f63_NextNode(i8* p7051 /* node */) {

	i8 v7052 = (i8)(intptr_t)(f62_PopNode);
	i8 v7053;

	((void(*)(i8* /* node */))(intptr_t)v7052)(&v7053);
	i8 v7054 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v7054 = v7053;

	i8 v7055 = (i8)(intptr_t)(ws+4176);
	i8 v7056 = *(i8*)(intptr_t)v7055;
	i8 v7057 = (i8)+0;
	if (v7056==v7057) goto c02_0558; else goto c02_0557;

c02_0557:;

	i8 v7058 = (i8)(intptr_t)(ws+4176);
	i8 v7059 = *(i8*)(intptr_t)v7058;
	i8 v7060 = v7059+(+24);
	i8 v7061 = *(i8*)(intptr_t)v7060;
	i8 v7062 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7062)(v7061);

	i8 v7063 = (i8)(intptr_t)(ws+4176);
	i8 v7064 = *(i8*)(intptr_t)v7063;
	i8 v7065 = v7064+(+32);
	i8 v7066 = *(i8*)(intptr_t)v7065;
	i8 v7067 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7067)(v7066);

c02_0558:;

c02_0554:;

endsub:;
	*p7051 = *(i8*)(intptr_t)(ws+4176);
}
	void f61_PushNode(i8 /* node */);
	void f63_NextNode(i8* /* node */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);
	void f79_FreeNode(i8 /* node */);

// Discard workspace at ws+4088 length ws+24
void f64_Discard(i8 p7068 /* node */) {
	*(i8*)(intptr_t)(ws+4088) = p7068; /*node */

	i8 v7069 = (i8)(intptr_t)(ws+184);
	i8 v7070 = *(i8*)(intptr_t)v7069;
	i8 v7071 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v7071 = v7070;

	i8 v7072 = (i8)(intptr_t)(ws+4088);
	i8 v7073 = *(i8*)(intptr_t)v7072;
	i8 v7074 = (i8)(intptr_t)(f61_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7074)(v7073);

c02_055b:;

	i8 v7075 = (i8)(intptr_t)(ws+184);
	i8 v7076 = *(i8*)(intptr_t)v7075;
	i8 v7077 = (i8)(intptr_t)(ws+4096);
	i8 v7078 = *(i8*)(intptr_t)v7077;
	if (v7076==v7078) goto c02_055e; else goto c02_055d;

c02_055d:;

	i8 v7079 = (i8)(intptr_t)(f63_NextNode);
	i8 v7080;

	((void(*)(i8* /* node */))(intptr_t)v7079)(&v7080);
	i8 v7081 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v7081 = v7080;

	i8 v7082 = (i8)(intptr_t)(ws+4104);
	i8 v7083 = *(i8*)(intptr_t)v7082;
	i8 v7084 = v7083+(+256);
	i1 v7085 = *(i1*)(intptr_t)v7084;

	if (v7085 != +19) goto c02_0560;

	i8 v7086 = (i8)(intptr_t)(ws+4104);
	i8 v7087 = *(i8*)(intptr_t)v7086;
	i8 v7088 = *(i8*)(intptr_t)v7087;
	i8 v7089 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7089)(v7088);

	goto c02_055f;

c02_0560:;

	if (v7085 != +12) goto c02_0561;

	i8 v7090 = (i8)(intptr_t)(ws+4104);
	i8 v7091 = *(i8*)(intptr_t)v7090;
	i8 v7092 = *(i8*)(intptr_t)v7091;
	i8 v7093 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7093)(v7092);

	goto c02_055f;

c02_0561:;

	if (v7085 != +46) goto c02_0562;

	i8 v7094 = (i8)(intptr_t)(ws+4104);
	i8 v7095 = *(i8*)(intptr_t)v7094;
	i8 v7096 = *(i8*)(intptr_t)v7095;
	i8 v7097 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7097)(v7096);

c02_0562:;

c02_055f:;


	i8 v7098 = (i8)(intptr_t)(ws+4104);
	i8 v7099 = *(i8*)(intptr_t)v7098;
	i8 v7100 = (i8)(intptr_t)(f79_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v7100)(v7099);

	goto c02_055b;

c02_055e:;

endsub:;
}
	void f115_I_b8(i1* /* b */);
	void f77_AllocateNewNode(i8* /* m */, i1 /* code */);

// I_node workspace at ws+4016 length ws+41
void f397_I_node(i8* p7101 /* rootnode */) {

	i1 v7102 = (i1)+1;
	i8 v7103 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7103 = v7102;

	i8 v7104 = (i8)+0;
	i8 v7105 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7105 = v7104;

c02_0565:;

	i8 v7106 = (i8)(intptr_t)(ws+4024);
	i1 v7107 = *(i1*)(intptr_t)v7106;
	i1 v7108 = (i1)+0;
	if (v7107==v7108) goto c02_0568; else goto c02_0567;

c02_0567:;

	i8 v7109 = (i8)(intptr_t)(f115_I_b8);
	i1 v7110;

	((void(*)(i1* /* b */))(intptr_t)v7109)(&v7110);
	i8 v7111 = (i8)(intptr_t)(ws+4025);
	*(i1*)(intptr_t)v7111 = v7110;

	i8 v7112 = (i8)(intptr_t)(ws+4025);
	i1 v7113 = *(i1*)(intptr_t)v7112;
	i8 v7114 = (i8)(intptr_t)(f77_AllocateNewNode);
	i8 v7115;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v7114)(&v7115, v7113);
	i8 v7116 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7116 = v7115;

	i8 v7117 = (i8)(intptr_t)(ws+4016);
	i8 v7118 = *(i8*)(intptr_t)v7117;
	i8 v7119 = (i8)(intptr_t)(ws+4032);
	i8 v7120 = *(i8*)(intptr_t)v7119;
	i8 v7121 = v7120+(+64);
	*(i8*)(intptr_t)v7121 = v7118;

	i8 v7122 = (i8)(intptr_t)(ws+4032);
	i8 v7123 = *(i8*)(intptr_t)v7122;
	i8 v7124 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7124 = v7123;

	i8 v7125 = (i8)(intptr_t)((i1*)f3___main_s0170);
	i8 v7126 = (i8)(intptr_t)(ws+4025);
	i1 v7127 = *(i1*)(intptr_t)v7126;
	i1 v7128 = v7127+(-1);
	i8 v7129 = v7128;
	i8 v7130 = v7125+v7129;
	i1 v7131 = *(i1*)(intptr_t)v7130;
	i8 v7132 = (i8)(intptr_t)(ws+4040);
	*(i1*)(intptr_t)v7132 = v7131;

	i8 v7133 = (i8)(intptr_t)(ws+4032);
	i8 v7134 = *(i8*)(intptr_t)v7133;
	i8 v7135 = (i8)(intptr_t)((i1*)f3___main_s016f);
	i8 v7136 = (i8)(intptr_t)(ws+4040);
	i1 v7137 = *(i1*)(intptr_t)v7136;
	i8 v7138 = v7137;
	i1 v7139 = (i1)+3;
	i8 v7140 = ((i8)v7138)<<v7139;
	i8 v7141 = v7135+v7140;
	i8 v7142 = *(i8*)(intptr_t)v7141;

	((void(*)(i8 /* node */))(intptr_t)v7142)(v7134);

	i8 v7143 = (i8)(intptr_t)(ws+4024);
	i1 v7144 = *(i1*)(intptr_t)v7143;
	i8 v7145 = (i8)(intptr_t)((i1*)f3___main_s0171);
	i8 v7146 = (i8)(intptr_t)(ws+4025);
	i1 v7147 = *(i1*)(intptr_t)v7146;
	i1 v7148 = v7147+(-1);
	i8 v7149 = v7148;
	i8 v7150 = v7145+v7149;
	i1 v7151 = *(i1*)(intptr_t)v7150;
	i1 v7152 = v7144+v7151;
	i1 v7153 = v7152+(-1);
	i8 v7154 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7154 = v7153;

	goto c02_0565;

c02_0568:;

	i8 v7155 = (i8)+0;
	i8 v7156 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7156 = v7155;

c02_056b:;

	i8 v7157 = (i8)(intptr_t)(ws+4016);
	i8 v7158 = *(i8*)(intptr_t)v7157;
	i8 v7159 = (i8)+0;
	if (v7158==v7159) goto c02_056e; else goto c02_056d;

c02_056d:;

	i8 v7160 = (i8)(intptr_t)(ws+4016);
	i8 v7161 = *(i8*)(intptr_t)v7160;
	i8 v7162 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7162 = v7161;

	i8 v7163 = (i8)(intptr_t)(ws+4032);
	i8 v7164 = *(i8*)(intptr_t)v7163;
	i8 v7165 = v7164+(+64);
	i8 v7166 = *(i8*)(intptr_t)v7165;
	i8 v7167 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7167 = v7166;

	i8 v7168 = (i8)(intptr_t)((i1*)f3___main_s0171);
	i8 v7169 = (i8)(intptr_t)(ws+4032);
	i8 v7170 = *(i8*)(intptr_t)v7169;
	i8 v7171 = v7170+(+256);
	i1 v7172 = *(i1*)(intptr_t)v7171;
	i1 v7173 = v7172+(-1);
	i8 v7174 = v7173;
	i8 v7175 = v7168+v7174;
	i1 v7176 = *(i1*)(intptr_t)v7175;
	i8 v7177 = (i8)(intptr_t)(ws+4056);
	*(i1*)(intptr_t)v7177 = v7176;

	i8 v7178 = (i8)(intptr_t)(ws+4056);
	i1 v7179 = *(i1*)(intptr_t)v7178;
	i1 v7180 = (i1)+1;
	if (v7179<v7180) goto c02_0573; else goto c02_0572;

c02_0572:;

	i8 v7181 = (i8)(intptr_t)(ws+4048);
	i8 v7182 = *(i8*)(intptr_t)v7181;
	i8 v7183 = (i8)(intptr_t)(ws+4032);
	i8 v7184 = *(i8*)(intptr_t)v7183;
	i8 v7185 = v7184+(+24);
	*(i8*)(intptr_t)v7185 = v7182;

	i8 v7186 = (i8)(intptr_t)(ws+4032);
	i8 v7187 = *(i8*)(intptr_t)v7186;
	i8 v7188 = v7187+(+24);
	i8 v7189 = *(i8*)(intptr_t)v7188;
	i8 v7190 = v7189+(+64);
	i8 v7191 = *(i8*)(intptr_t)v7190;
	i8 v7192 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7192 = v7191;

c02_0573:;

c02_056f:;

	i8 v7193 = (i8)(intptr_t)(ws+4056);
	i1 v7194 = *(i1*)(intptr_t)v7193;
	i1 v7195 = (i1)+2;
	if (v7194==v7195) goto c02_0577; else goto c02_0578;

c02_0577:;

	i8 v7196 = (i8)(intptr_t)(ws+4032);
	i8 v7197 = *(i8*)(intptr_t)v7196;
	i8 v7198 = v7197+(+24);
	i8 v7199 = *(i8*)(intptr_t)v7198;
	i8 v7200 = (i8)(intptr_t)(ws+4032);
	i8 v7201 = *(i8*)(intptr_t)v7200;
	i8 v7202 = v7201+(+32);
	*(i8*)(intptr_t)v7202 = v7199;

	i8 v7203 = (i8)(intptr_t)(ws+4048);
	i8 v7204 = *(i8*)(intptr_t)v7203;
	i8 v7205 = (i8)(intptr_t)(ws+4032);
	i8 v7206 = *(i8*)(intptr_t)v7205;
	i8 v7207 = v7206+(+24);
	*(i8*)(intptr_t)v7207 = v7204;

	i8 v7208 = (i8)(intptr_t)(ws+4032);
	i8 v7209 = *(i8*)(intptr_t)v7208;
	i8 v7210 = v7209+(+24);
	i8 v7211 = *(i8*)(intptr_t)v7210;
	i8 v7212 = v7211+(+64);
	i8 v7213 = *(i8*)(intptr_t)v7212;
	i8 v7214 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7214 = v7213;

c02_0578:;

c02_0574:;

	i8 v7215 = (i8)(intptr_t)(ws+4048);
	i8 v7216 = *(i8*)(intptr_t)v7215;
	i8 v7217 = (i8)(intptr_t)(ws+4032);
	i8 v7218 = *(i8*)(intptr_t)v7217;
	i8 v7219 = v7218+(+64);
	*(i8*)(intptr_t)v7219 = v7216;

	i8 v7220 = (i8)(intptr_t)(ws+4032);
	i8 v7221 = *(i8*)(intptr_t)v7220;
	i8 v7222 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7222 = v7221;

	goto c02_056b;

c02_056e:;

	i8 v7223 = (i8)(intptr_t)(ws+4048);
	i8 v7224 = *(i8*)(intptr_t)v7223;
	i8 v7225 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7225 = v7224;

endsub:;
	*p7101 = *(i8*)(intptr_t)(ws+4016);
}
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f66_StartError(void);
const i1 c02_s01f6[] = { 0x64,0x75,0x70,0x6c,0x69,0x63,0x61,0x74,0x65,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f20_print_hex_i16(i2 /* value */);
const i1 c02_s01f7[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f48_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f21_print_hex_i32(i4 /* value */);
	void f67_EndError(void);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f146_AllocSubrId(i2* /* id */);

// AddSubr workspace at ws+4008 length ws+40
void f398_AddSubr(i8* p7226 /* subr */, i2 p7227 /* subrid */) {
	*(i2*)(intptr_t)(ws+4008) = p7227; /*subrid */

	i8 v7228 = (i8)(intptr_t)(ws+4008);
	i2 v7229 = *(i2*)(intptr_t)v7228;
	i8 v7230 = (i8)(intptr_t)(ws+4024);
	*(i2*)(intptr_t)v7230 = v7229;

	i8 v7231 = (i8)(intptr_t)(ws+3848);
	i8 v7232 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7232 = v7231;

c02_057b:;

	i8 v7233 = (i8)(intptr_t)(ws+4024);
	i2 v7234 = *(i2*)(intptr_t)v7233;
	i2 v7235 = (i2)+16;
	if (v7234<v7235) goto c02_057e; else goto c02_057d;

c02_057d:;

	i8 v7236 = (i8)(intptr_t)(ws+4032);
	i8 v7237 = *(i8*)(intptr_t)v7236;
	i8 v7238 = *(i8*)(intptr_t)v7237;
	i8 v7239 = (i8)+0;
	if (v7238==v7239) goto c02_0582; else goto c02_0583;

c02_0582:;

	i8 v7240 = (i8)+136;
	i8 v7241 = (i8)(intptr_t)(f33_Alloc);
	i8 v7242;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7241)(&v7242, v7240);
	i8 v7243 = (i8)(intptr_t)(ws+4032);
	i8 v7244 = *(i8*)(intptr_t)v7243;
	*(i8*)(intptr_t)v7244 = v7242;

c02_0583:;

c02_057f:;

	i8 v7245 = (i8)(intptr_t)(ws+4032);
	i8 v7246 = *(i8*)(intptr_t)v7245;
	i8 v7247 = *(i8*)(intptr_t)v7246;
	i8 v7248 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7248 = v7247;

	i8 v7249 = (i8)(intptr_t)(ws+4024);
	i2 v7250 = *(i2*)(intptr_t)v7249;
	i2 v7251 = v7250+(-16);
	i8 v7252 = (i8)(intptr_t)(ws+4024);
	*(i2*)(intptr_t)v7252 = v7251;

	goto c02_057b;

c02_057e:;

	i8 v7253 = (i8)(intptr_t)(ws+4032);
	i8 v7254 = *(i8*)(intptr_t)v7253;
	i8 v7255 = v7254+(+8);
	i8 v7256 = (i8)(intptr_t)(ws+4024);
	i2 v7257 = *(i2*)(intptr_t)v7256;
	i1 v7258 = v7257;
	i8 v7259 = v7258;
	i1 v7260 = (i1)+3;
	i8 v7261 = ((i8)v7259)<<v7260;
	i8 v7262 = v7255+v7261;
	i8 v7263 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v7263 = v7262;

	i8 v7264 = (i8)(intptr_t)(ws+4040);
	i8 v7265 = *(i8*)(intptr_t)v7264;
	i8 v7266 = *(i8*)(intptr_t)v7265;
	i8 v7267 = (i8)+0;
	if (v7266==v7267) goto c02_0588; else goto c02_0587;

c02_0587:;

	i8 v7268 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7268)();

	i8 v7269 = (i8)(intptr_t)c02_s01f6;
	i8 v7270 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7270)(v7269);

	i8 v7271 = (i8)(intptr_t)(ws+4008);
	i2 v7272 = *(i2*)(intptr_t)v7271;
	i8 v7273 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7273)(v7272);

	i8 v7274 = (i8)(intptr_t)c02_s01f7;
	i8 v7275 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7275)(v7274);

	i8 v7276 = (i8)(intptr_t)(ws+2804);
	i8 v7277 = (i8)(intptr_t)(f48_FCBPos);
	i4 v7278;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v7277)(&v7278, v7276);
	i8 v7279 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7279)(v7278);

	i8 v7280 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7280)();

c02_0588:;

c02_0584:;

	i8 v7281 = (i8)+51;
	i8 v7282 = (i8)(intptr_t)(f33_Alloc);
	i8 v7283;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7282)(&v7283, v7281);
	i8 v7284 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7284 = v7283;

	i8 v7285 = (i8)(intptr_t)(f146_AllocSubrId);
	i2 v7286;

	((void(*)(i2* /* id */))(intptr_t)v7285)(&v7286);
	i8 v7287 = (i8)(intptr_t)(ws+4016);
	i8 v7288 = *(i8*)(intptr_t)v7287;
	i8 v7289 = v7288+(+8);
	*(i2*)(intptr_t)v7289 = v7286;

	i8 v7290 = (i8)(intptr_t)(ws+4016);
	i8 v7291 = *(i8*)(intptr_t)v7290;
	i8 v7292 = (i8)(intptr_t)(ws+4040);
	i8 v7293 = *(i8*)(intptr_t)v7292;
	*(i8*)(intptr_t)v7293 = v7291;

endsub:;
	*p7226 = *(i8*)(intptr_t)(ws+4016);
}
	void f66_StartError(void);
const i1 c02_s01f8[] = { 0x75,0x6e,0x6b,0x6e,0x6f,0x77,0x6e,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f20_print_hex_i16(i2 /* value */);
const i1 c02_s01f9[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f48_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f21_print_hex_i32(i4 /* value */);
	void f67_EndError(void);

// FindSubr workspace at ws+4240 length ws+26
void f65_FindSubr(i8* p7294 /* subr */, i2 p7295 /* subrid */) {
	*(i2*)(intptr_t)(ws+4240) = p7295; /*subrid */

	i8 v7296 = (i8)(intptr_t)(ws+3848);
	i8 v7297 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v7297 = v7296;

	i8 v7298 = (i8)(intptr_t)(ws+4240);
	i2 v7299 = *(i2*)(intptr_t)v7298;
	i8 v7300 = (i8)(intptr_t)(ws+4264);
	*(i2*)(intptr_t)v7300 = v7299;

c02_058b:;

	i8 v7301 = (i8)(intptr_t)(ws+4264);
	i2 v7302 = *(i2*)(intptr_t)v7301;
	i2 v7303 = (i2)+16;
	if (v7302<v7303) goto c02_058e; else goto c02_058d;

c02_058d:;

	i8 v7304 = (i8)(intptr_t)(ws+4256);
	i8 v7305 = *(i8*)(intptr_t)v7304;
	i8 v7306 = *(i8*)(intptr_t)v7305;
	i8 v7307 = (i8)+0;
	if (v7306==v7307) goto c02_0592; else goto c02_0593;

c02_0592:;

	i8 v7308 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7308)();

	i8 v7309 = (i8)(intptr_t)c02_s01f8;
	i8 v7310 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7310)(v7309);

	i8 v7311 = (i8)(intptr_t)(ws+4240);
	i2 v7312 = *(i2*)(intptr_t)v7311;
	i8 v7313 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7313)(v7312);

	i8 v7314 = (i8)(intptr_t)c02_s01f9;
	i8 v7315 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7315)(v7314);

	i8 v7316 = (i8)(intptr_t)(ws+2804);
	i8 v7317 = (i8)(intptr_t)(f48_FCBPos);
	i4 v7318;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v7317)(&v7318, v7316);
	i8 v7319 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7319)(v7318);

	i8 v7320 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7320)();

c02_0593:;

c02_058f:;

	i8 v7321 = (i8)(intptr_t)(ws+4256);
	i8 v7322 = *(i8*)(intptr_t)v7321;
	i8 v7323 = *(i8*)(intptr_t)v7322;
	i8 v7324 = (i8)(intptr_t)(ws+4256);
	*(i8*)(intptr_t)v7324 = v7323;

	i8 v7325 = (i8)(intptr_t)(ws+4264);
	i2 v7326 = *(i2*)(intptr_t)v7325;
	i2 v7327 = v7326+(-16);
	i8 v7328 = (i8)(intptr_t)(ws+4264);
	*(i2*)(intptr_t)v7328 = v7327;

	goto c02_058b;

c02_058e:;

	i8 v7329 = (i8)(intptr_t)(ws+4256);
	i8 v7330 = *(i8*)(intptr_t)v7329;
	i8 v7331 = v7330+(+8);
	i8 v7332 = (i8)(intptr_t)(ws+4264);
	i2 v7333 = *(i2*)(intptr_t)v7332;
	i1 v7334 = v7333;
	i8 v7335 = v7334;
	i1 v7336 = (i1)+3;
	i8 v7337 = ((i8)v7335)<<v7336;
	i8 v7338 = v7331+v7337;
	i8 v7339 = *(i8*)(intptr_t)v7338;
	i8 v7340 = (i8)(intptr_t)(ws+4248);
	*(i8*)(intptr_t)v7340 = v7339;

endsub:;
	*p7294 = *(i8*)(intptr_t)(ws+4248);
}
	void f116_I_b16(i2* /* b */);
	void f398_AddSubr(i8* /* subr */, i2 /* subrid */);
	void f119_I_countedstring(i8* /* s */);
	void f110_EmitterDeclareSubroutine(i8 /* subr */);

// ReadN workspace at ws+3992 length ws+16
void f399_ReadN(void) {

	i8 v7341 = (i8)(intptr_t)(f116_I_b16);
	i2 v7342;

	((void(*)(i2* /* b */))(intptr_t)v7341)(&v7342);
	i8 v7343 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7343 = v7342;

	i8 v7344 = (i8)(intptr_t)(ws+3992);
	i2 v7345 = *(i2*)(intptr_t)v7344;
	i8 v7346 = (i8)(intptr_t)(f398_AddSubr);
	i8 v7347;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7346)(&v7347, v7345);
	i8 v7348 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7348 = v7347;

	i8 v7349 = (i8)(intptr_t)(f119_I_countedstring);
	i8 v7350;

	((void(*)(i8* /* s */))(intptr_t)v7349)(&v7350);
	i8 v7351 = (i8)(intptr_t)(ws+4000);
	i8 v7352 = *(i8*)(intptr_t)v7351;
	*(i8*)(intptr_t)v7352 = v7350;

	i8 v7353 = (i8)(intptr_t)(ws+4000);
	i8 v7354 = *(i8*)(intptr_t)v7353;
	i8 v7355 = (i8)(intptr_t)(f110_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v7355)(v7354);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f119_I_countedstring(i8* /* s */);
	void f111_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* subrid */);
	void f34_Free(i8 /* block */);

// ReadX workspace at ws+3992 length ws+24
void f400_ReadX(void) {

	i8 v7356 = (i8)(intptr_t)(f116_I_b16);
	i2 v7357;

	((void(*)(i2* /* b */))(intptr_t)v7356)(&v7357);
	i8 v7358 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v7358 = v7357;

	i8 v7359 = (i8)(intptr_t)(ws+3992);
	i2 v7360 = *(i2*)(intptr_t)v7359;
	i8 v7361 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7362;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7361)(&v7362, v7360);
	i8 v7363 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7363 = v7362;

	i8 v7364 = (i8)(intptr_t)(f119_I_countedstring);
	i8 v7365;

	((void(*)(i8* /* s */))(intptr_t)v7364)(&v7365);
	i8 v7366 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7366 = v7365;

	i8 v7367 = (i8)(intptr_t)(ws+4000);
	i8 v7368 = *(i8*)(intptr_t)v7367;
	i8 v7369 = v7368+(+8);
	i2 v7370 = *(i2*)(intptr_t)v7369;
	i8 v7371 = (i8)(intptr_t)(ws+4008);
	i8 v7372 = *(i8*)(intptr_t)v7371;
	i8 v7373 = (i8)(intptr_t)(f111_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* subrid */))(intptr_t)v7373)(v7372, v7370);

	i8 v7374 = (i8)(intptr_t)(ws+4008);
	i8 v7375 = *(i8*)(intptr_t)v7374;
	i8 v7376 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7376)(v7375);

endsub:;
}
	void f397_I_node(i8* /* rootnode */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f384_Generate(i8 /* rootnode */);

// ReadM workspace at ws+3992 length ws+24
void f401_ReadM(void) {

	i8 v7377 = (i8)(intptr_t)(f397_I_node);
	i8 v7378;

	((void(*)(i8* /* rootnode */))(intptr_t)v7377)(&v7378);
	i8 v7379 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7379 = v7378;

	i8 v7380 = (i8)(intptr_t)(ws+3992);
	i8 v7381 = *(i8*)(intptr_t)v7380;
	i8 v7382 = v7381+(+256);
	i1 v7383 = *(i1*)(intptr_t)v7382;
	i8 v7384 = (i8)(intptr_t)(ws+4000);
	*(i1*)(intptr_t)v7384 = v7383;

	i8 v7385 = (i8)(intptr_t)(ws+4000);
	i1 v7386 = *(i1*)(intptr_t)v7385;
	i1 v7387 = (i1)+4;
	if (v7386==v7387) goto c02_0597; else goto c02_0598;

c02_0597:;

	i8 v7388 = (i8)(intptr_t)(ws+3992);
	i8 v7389 = *(i8*)(intptr_t)v7388;
	i8 v7390 = *(i8*)(intptr_t)v7389;
	i8 v7391 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v7391 = v7390;

	i8 v7392 = (i8)(intptr_t)(ws+40);
	i8 v7393 = *(i8*)(intptr_t)v7392;
	i8 v7394 = (i8)(intptr_t)(ws+4008);
	i8 v7395 = *(i8*)(intptr_t)v7394;
	i8 v7396 = v7395+(+16);
	*(i8*)(intptr_t)v7396 = v7393;

	i8 v7397 = (i8)(intptr_t)(ws+4008);
	i8 v7398 = *(i8*)(intptr_t)v7397;
	i8 v7399 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v7399 = v7398;

	i8 v7400 = (i8)(intptr_t)(ws+40);
	i8 v7401 = *(i8*)(intptr_t)v7400;
	i8 v7402 = *(i8*)(intptr_t)v7401;
	i8 v7403 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7403)(v7402);

	i8 v7404 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v7404)();

c02_0598:;

c02_0594:;

	i8 v7405 = (i8)(intptr_t)(ws+3992);
	i8 v7406 = *(i8*)(intptr_t)v7405;
	i8 v7407 = (i8)(intptr_t)(f384_Generate);

	((void(*)(i8 /* rootnode */))(intptr_t)v7407)(v7406);

	i8 v7408 = (i8)(intptr_t)(ws+4000);
	i1 v7409 = *(i1*)(intptr_t)v7408;
	i1 v7410 = (i1)+5;
	if (v7409==v7410) goto c02_059c; else goto c02_059d;

c02_059c:;

	i8 v7411 = (i8)(intptr_t)(ws+40);
	i8 v7412 = *(i8*)(intptr_t)v7411;
	i8 v7413 = v7412+(+16);
	i8 v7414 = *(i8*)(intptr_t)v7413;
	i8 v7415 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v7415 = v7414;

c02_059d:;

c02_0599:;

endsub:;
}
const i1 c02_s01fa[] = { 0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0x20,0x74,0x77,0x69,0x63,0x65,0 };
	void f68_SimpleError(i8 /* s */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);
	void f119_I_countedstring(i8* /* s */);
	void f115_I_b8(i1* /* b */);

// ReadParameters workspace at ws+4000 length ws+32
void f402_ReadParameters(i8 p7416 /* paramp */, i1 p7417 /* count */) {
	*(i1*)(intptr_t)(ws+4000) = p7417; /*count */
	*(i8*)(intptr_t)(ws+4008) = p7416; /*paramp */

	i8 v7418 = (i8)(intptr_t)(ws+4008);
	i8 v7419 = *(i8*)(intptr_t)v7418;
	i8 v7420 = *(i8*)(intptr_t)v7419;
	i8 v7421 = (i8)+0;
	if (v7420==v7421) goto c02_05a2; else goto c02_05a1;

c02_05a1:;

	i8 v7422 = (i8)(intptr_t)c02_s01fa;
	i8 v7423 = (i8)(intptr_t)(f68_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v7423)(v7422);

c02_05a2:;

c02_059e:;

	i8 v7424 = (i8)(intptr_t)(ws+4000);
	i1 v7425 = *(i1*)(intptr_t)v7424;
	i8 v7426 = v7425;
	i1 v7427 = (i1)+3;
	i8 v7428 = ((i8)v7426)<<v7427;
	i8 v7429 = (i8)(intptr_t)(f33_Alloc);
	i8 v7430;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7429)(&v7430, v7428);
	i8 v7431 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7431 = v7430;

	i8 v7432 = (i8)(intptr_t)(ws+4016);
	i8 v7433 = *(i8*)(intptr_t)v7432;
	i8 v7434 = (i8)(intptr_t)(ws+4008);
	i8 v7435 = *(i8*)(intptr_t)v7434;
	*(i8*)(intptr_t)v7435 = v7433;

c02_05a5:;

	i8 v7436 = (i8)(intptr_t)(ws+4000);
	i1 v7437 = *(i1*)(intptr_t)v7436;
	i1 v7438 = (i1)+0;
	if (v7437==v7438) goto c02_05a8; else goto c02_05a7;

c02_05a7:;

	i8 v7439 = (i8)+24;
	i8 v7440 = (i8)(intptr_t)(f33_Alloc);
	i8 v7441;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7440)(&v7441, v7439);
	i8 v7442 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7442 = v7441;

	i8 v7443 = (i8)(intptr_t)(ws+4024);
	i8 v7444 = *(i8*)(intptr_t)v7443;
	i8 v7445 = (i8)(intptr_t)(ws+4016);
	i8 v7446 = *(i8*)(intptr_t)v7445;
	*(i8*)(intptr_t)v7446 = v7444;

	i8 v7447 = (i8)(intptr_t)(ws+4016);
	i8 v7448 = *(i8*)(intptr_t)v7447;
	i8 v7449 = v7448+(+8);
	i8 v7450 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7450 = v7449;

	i8 v7451 = (i8)(intptr_t)(f116_I_b16);
	i2 v7452;

	((void(*)(i2* /* b */))(intptr_t)v7451)(&v7452);
	i8 v7453 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7454;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7453)(&v7454, v7452);
	i8 v7455 = (i8)(intptr_t)(ws+4024);
	i8 v7456 = *(i8*)(intptr_t)v7455;
	*(i8*)(intptr_t)v7456 = v7454;

	i8 v7457 = (i8)(intptr_t)(f115_I_b8);
	i1 v7458;

	((void(*)(i1* /* b */))(intptr_t)v7457)(&v7458);
	i8 v7459 = (i8)(intptr_t)(ws+4024);
	i8 v7460 = *(i8*)(intptr_t)v7459;
	i8 v7461 = v7460+(+10);
	*(i1*)(intptr_t)v7461 = v7458;

	i8 v7462 = (i8)(intptr_t)(f118_I_bsize);
	i2 v7463;

	((void(*)(i2* /* s */))(intptr_t)v7462)(&v7463);
	i8 v7464 = (i8)(intptr_t)(ws+4024);
	i8 v7465 = *(i8*)(intptr_t)v7464;
	i8 v7466 = v7465+(+12);
	*(i2*)(intptr_t)v7466 = v7463;

	i8 v7467 = (i8)(intptr_t)(f119_I_countedstring);
	i8 v7468;

	((void(*)(i8* /* s */))(intptr_t)v7467)(&v7468);
	i8 v7469 = (i8)(intptr_t)(ws+4024);
	i8 v7470 = *(i8*)(intptr_t)v7469;
	i8 v7471 = v7470+(+16);
	*(i8*)(intptr_t)v7471 = v7468;

	i8 v7472 = (i8)(intptr_t)(f115_I_b8);
	i1 v7473;

	((void(*)(i1* /* b */))(intptr_t)v7472)(&v7473);
	i8 v7474 = (i8)(intptr_t)(ws+4024);
	i8 v7475 = *(i8*)(intptr_t)v7474;
	i8 v7476 = v7475+(+14);
	*(i1*)(intptr_t)v7476 = v7473;

	i8 v7477 = (i8)(intptr_t)(ws+4000);
	i1 v7478 = *(i1*)(intptr_t)v7477;
	i1 v7479 = v7478+(-1);
	i8 v7480 = (i8)(intptr_t)(ws+4000);
	*(i1*)(intptr_t)v7480 = v7479;

	goto c02_05a5;

c02_05a8:;

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f402_ReadParameters(i8 /* paramp */, i1 /* count */);

// ReadI workspace at ws+3992 length ws+8
void f403_ReadI(void) {

	i8 v7481 = (i8)(intptr_t)(f116_I_b16);
	i2 v7482;

	((void(*)(i2* /* b */))(intptr_t)v7481)(&v7482);
	i8 v7483 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7484;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7483)(&v7484, v7482);
	i8 v7485 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7485 = v7484;

	i8 v7486 = (i8)(intptr_t)(f115_I_b8);
	i1 v7487;

	((void(*)(i1* /* b */))(intptr_t)v7486)(&v7487);
	i8 v7488 = (i8)(intptr_t)(ws+3992);
	i8 v7489 = *(i8*)(intptr_t)v7488;
	i8 v7490 = v7489+(+48);
	*(i1*)(intptr_t)v7490 = v7487;

	i8 v7491 = (i8)(intptr_t)(ws+3992);
	i8 v7492 = *(i8*)(intptr_t)v7491;
	i8 v7493 = v7492+(+48);
	i1 v7494 = *(i1*)(intptr_t)v7493;
	i8 v7495 = (i8)(intptr_t)(ws+3992);
	i8 v7496 = *(i8*)(intptr_t)v7495;
	i8 v7497 = v7496+(+32);
	i8 v7498 = (i8)(intptr_t)(f402_ReadParameters);

	((void(*)(i8 /* paramp */, i1 /* count */))(intptr_t)v7498)(v7497, v7494);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f402_ReadParameters(i8 /* paramp */, i1 /* count */);

// ReadO workspace at ws+3992 length ws+8
void f404_ReadO(void) {

	i8 v7499 = (i8)(intptr_t)(f116_I_b16);
	i2 v7500;

	((void(*)(i2* /* b */))(intptr_t)v7499)(&v7500);
	i8 v7501 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7502;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7501)(&v7502, v7500);
	i8 v7503 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7503 = v7502;

	i8 v7504 = (i8)(intptr_t)(f115_I_b8);
	i1 v7505;

	((void(*)(i1* /* b */))(intptr_t)v7504)(&v7505);
	i8 v7506 = (i8)(intptr_t)(ws+3992);
	i8 v7507 = *(i8*)(intptr_t)v7506;
	i8 v7508 = v7507+(+49);
	*(i1*)(intptr_t)v7508 = v7505;

	i8 v7509 = (i8)(intptr_t)(ws+3992);
	i8 v7510 = *(i8*)(intptr_t)v7509;
	i8 v7511 = v7510+(+49);
	i1 v7512 = *(i1*)(intptr_t)v7511;
	i8 v7513 = (i8)(intptr_t)(ws+3992);
	i8 v7514 = *(i8*)(intptr_t)v7513;
	i8 v7515 = v7514+(+40);
	i8 v7516 = (i8)(intptr_t)(f402_ReadParameters);

	((void(*)(i8 /* paramp */, i1 /* count */))(intptr_t)v7516)(v7515, v7512);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);
	void f118_I_bsize(i2* /* s */);
	void f114_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i2 /* subrid */);

// ReadW workspace at ws+3992 length ws+12
void f405_ReadW(void) {

	i8 v7517 = (i8)(intptr_t)(f116_I_b16);
	i2 v7518;

	((void(*)(i2* /* b */))(intptr_t)v7517)(&v7518);
	i8 v7519 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7520;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7519)(&v7520, v7518);
	i8 v7521 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7521 = v7520;

	i8 v7522 = (i8)(intptr_t)(f115_I_b8);
	i1 v7523;

	((void(*)(i1* /* b */))(intptr_t)v7522)(&v7523);
	i8 v7524 = (i8)(intptr_t)(ws+4000);
	*(i1*)(intptr_t)v7524 = v7523;

	i8 v7525 = (i8)(intptr_t)(f118_I_bsize);
	i2 v7526;

	((void(*)(i2* /* s */))(intptr_t)v7525)(&v7526);
	i8 v7527 = (i8)(intptr_t)(ws+4002);
	*(i2*)(intptr_t)v7527 = v7526;

	i8 v7528 = (i8)(intptr_t)(ws+3992);
	i8 v7529 = *(i8*)(intptr_t)v7528;
	i8 v7530 = v7529+(+8);
	i2 v7531 = *(i2*)(intptr_t)v7530;
	i8 v7532 = (i8)(intptr_t)(ws+4000);
	i1 v7533 = *(i1*)(intptr_t)v7532;
	i8 v7534 = (i8)(intptr_t)(ws+4002);
	i2 v7535 = *(i2*)(intptr_t)v7534;
	i8 v7536 = (i8)(intptr_t)(f114_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i2 /* subrid */))(intptr_t)v7536)(v7535, v7533, v7531);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f112_EmitterReferenceSubroutineById(i2 /* used */, i2 /* user */);

// ReadR workspace at ws+3992 length ws+16
void f406_ReadR(void) {

	i8 v7537 = (i8)(intptr_t)(f116_I_b16);
	i2 v7538;

	((void(*)(i2* /* b */))(intptr_t)v7537)(&v7538);
	i8 v7539 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7540;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7539)(&v7540, v7538);
	i8 v7541 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7541 = v7540;

	i8 v7542 = (i8)(intptr_t)(f116_I_b16);
	i2 v7543;

	((void(*)(i2* /* b */))(intptr_t)v7542)(&v7543);
	i8 v7544 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7545;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7544)(&v7545, v7543);
	i8 v7546 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7546 = v7545;

	i8 v7547 = (i8)(intptr_t)(ws+3992);
	i8 v7548 = *(i8*)(intptr_t)v7547;
	i8 v7549 = v7548+(+8);
	i2 v7550 = *(i2*)(intptr_t)v7549;
	i8 v7551 = (i8)(intptr_t)(ws+4000);
	i8 v7552 = *(i8*)(intptr_t)v7551;
	i8 v7553 = v7552+(+8);
	i2 v7554 = *(i2*)(intptr_t)v7553;
	i8 v7555 = (i8)(intptr_t)(f112_EmitterReferenceSubroutineById);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v7555)(v7554, v7550);

endsub:;
}
	void f116_I_b16(i2* /* b */);
	void f65_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f115_I_b8(i1* /* b */);

// ReadF workspace at ws+3992 length ws+8
void f407_ReadF(void) {

	i8 v7556 = (i8)(intptr_t)(f116_I_b16);
	i2 v7557;

	((void(*)(i2* /* b */))(intptr_t)v7556)(&v7557);
	i8 v7558 = (i8)(intptr_t)(f65_FindSubr);
	i8 v7559;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v7558)(&v7559, v7557);
	i8 v7560 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v7560 = v7559;

	i8 v7561 = (i8)(intptr_t)(f115_I_b8);
	i1 v7562;

	((void(*)(i1* /* b */))(intptr_t)v7561)(&v7562);
	i8 v7563 = (i8)(intptr_t)(ws+3992);
	i8 v7564 = *(i8*)(intptr_t)v7563;
	i8 v7565 = v7564+(+50);
	*(i1*)(intptr_t)v7565 = v7562;

endsub:;
}
	void f23_MemZero(i8 /* size */, i8 /* ptr */);
	void f115_I_b8(i1* /* b */);
	void f399_ReadN(void);
	void f400_ReadX(void);
	void f401_ReadM(void);
	void f403_ReadI(void);
	void f404_ReadO(void);
	void f405_ReadW(void);
	void f406_ReadR(void);
	void f407_ReadF(void);
	void f66_StartError(void);
const i1 c02_s01fb[] = { 0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f19_print_hex_i8(i1 /* value */);
const i1 c02_s01fc[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f48_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f21_print_hex_i32(i4 /* value */);
	void f67_EndError(void);

// ProcessFile workspace at ws+3984 length ws+1
void f408_ProcessFile(void) {

	i8 v7566 = (i8)(intptr_t)(ws+3848);
	i8 v7567 = (i8)+136;
	i8 v7568 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v7568)(v7567, v7566);

c02_05a9:;

	i8 v7569 = (i8)(intptr_t)(f115_I_b8);
	i1 v7570;

	((void(*)(i1* /* b */))(intptr_t)v7569)(&v7570);
	i8 v7571 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v7571 = v7570;

	i8 v7572 = (i8)(intptr_t)(ws+3984);
	i1 v7573 = *(i1*)(intptr_t)v7572;

	if (v7573 != +69) goto c02_05ac;

	goto endsub;

c02_05ac:;

	if (v7573 != +78) goto c02_05ad;

	i8 v7574 = (i8)(intptr_t)(f399_ReadN);

	((void(*)(void))(intptr_t)v7574)();

	goto c02_05ab;

c02_05ad:;

	if (v7573 != +88) goto c02_05ae;

	i8 v7575 = (i8)(intptr_t)(f400_ReadX);

	((void(*)(void))(intptr_t)v7575)();

	goto c02_05ab;

c02_05ae:;

	if (v7573 != +77) goto c02_05af;

	i8 v7576 = (i8)(intptr_t)(f401_ReadM);

	((void(*)(void))(intptr_t)v7576)();

	goto c02_05ab;

c02_05af:;

	if (v7573 != +73) goto c02_05b0;

	i8 v7577 = (i8)(intptr_t)(f403_ReadI);

	((void(*)(void))(intptr_t)v7577)();

	goto c02_05ab;

c02_05b0:;

	if (v7573 != +79) goto c02_05b1;

	i8 v7578 = (i8)(intptr_t)(f404_ReadO);

	((void(*)(void))(intptr_t)v7578)();

	goto c02_05ab;

c02_05b1:;

	if (v7573 != +87) goto c02_05b2;

	i8 v7579 = (i8)(intptr_t)(f405_ReadW);

	((void(*)(void))(intptr_t)v7579)();

	goto c02_05ab;

c02_05b2:;

	if (v7573 != +82) goto c02_05b3;

	i8 v7580 = (i8)(intptr_t)(f406_ReadR);

	((void(*)(void))(intptr_t)v7580)();

	goto c02_05ab;

c02_05b3:;

	if (v7573 != +70) goto c02_05b4;

	i8 v7581 = (i8)(intptr_t)(f407_ReadF);

	((void(*)(void))(intptr_t)v7581)();

	goto c02_05ab;

c02_05b4:;

	i8 v7582 = (i8)(intptr_t)(f66_StartError);

	((void(*)(void))(intptr_t)v7582)();

	i8 v7583 = (i8)(intptr_t)c02_s01fb;
	i8 v7584 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7584)(v7583);

	i8 v7585 = (i8)(intptr_t)(ws+3984);
	i1 v7586 = *(i1*)(intptr_t)v7585;
	i8 v7587 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v7587)(v7586);

	i8 v7588 = (i8)(intptr_t)c02_s01fc;
	i8 v7589 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7589)(v7588);

	i8 v7590 = (i8)(intptr_t)(ws+2804);
	i8 v7591 = (i8)(intptr_t)(f48_FCBPos);
	i4 v7592;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v7591)(&v7592, v7590);
	i8 v7593 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7593)(v7592);

	i8 v7594 = (i8)(intptr_t)(f67_EndError);

	((void(*)(void))(intptr_t)v7594)();

c02_05ab:;


	goto c02_05a9;

c02_05aa:;

endsub:;
}
	void f38_GetFreeMemory(i8* /* i */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s01fd[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3984 length ws+0
void f409_PrintFreeMemory(void) {

	i8 v7595 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v7596;

	((void(*)(i8* /* i */))(intptr_t)v7595)(&v7596);
	i1 v7597 = (i1)+10;
	i8 v7598 = ((i8)v7596)>>v7597;
	i2 v7599 = v7598;
	i8 v7600 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v7600)(v7599);

	i8 v7601 = (i8)(intptr_t)c02_s01fd;
	i8 v7602 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7602)(v7601);

endsub:;
}
const i1 c02_s01fe[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3984 length ws+0
void f410_SyntaxError(void) {

	i8 v7603 = (i8)(intptr_t)c02_s01fe;
	i8 v7604 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7604)(v7603);

	i8 v7605 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v7605)();

endsub:;
}
	void f24_ArgvInit(void);
	void f25_ArgvNext(i8* /* arg */);
	void f25_ArgvNext(i8* /* arg */);
	void f25_ArgvNext(i8* /* arg */);
	void f410_SyntaxError(void);

// ParseArguments workspace at ws+3984 length ws+0
void f411_ParseArguments(void) {

	i8 v7606 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v7606)();

	i8 v7607 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v7608;

	((void(*)(i8* /* arg */))(intptr_t)v7607)(&v7608);
	i8 v7609 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v7609 = v7608;

	i8 v7610 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v7611;

	((void(*)(i8* /* arg */))(intptr_t)v7610)(&v7611);
	i8 v7612 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v7612 = v7611;

	i8 v7613 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v7614;

	((void(*)(i8* /* arg */))(intptr_t)v7613)(&v7614);
	i8 v7615 = (i8)+0;
	if (v7614==v7615) goto c02_05bf; else goto c02_05bc;

c02_05bf:;

	i8 v7616 = (i8)(intptr_t)(ws+24);
	i8 v7617 = *(i8*)(intptr_t)v7616;
	i8 v7618 = (i8)+0;
	if (v7617==v7618) goto c02_05bc; else goto c02_05be;

c02_05be:;

	i8 v7619 = (i8)(intptr_t)(ws+32);
	i8 v7620 = *(i8*)(intptr_t)v7619;
	i8 v7621 = (i8)+0;
	if (v7620==v7621) goto c02_05bc; else goto c02_05bd;

c02_05bc:;

	i8 v7622 = (i8)(intptr_t)(f410_SyntaxError);

	((void(*)(void))(intptr_t)v7622)();

c02_05bd:;

c02_05b5:;

endsub:;
}
const i1 c02_s01ff[] = { 0x43,0x4f,0x57,0x42,0x45,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f409_PrintFreeMemory(void);
	void f411_ParseArguments(void);
	void f120_InputterOpenfile(i8 /* filename */);
	void f108_EmitterOpenfile(i8 /* filename */);
	void f408_ProcessFile(void);
	void f109_EmitterClosefile(void);
	void f121_InputterClosefile(void);
const i1 c02_s0200[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f409_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3984
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 



























































	i8 v1021 = (i8)+0;
	i8 v1022 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1022 = v1021;

	i8 v1023 = (i8)+0;
	i8 v1024 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1024 = v1023;

	i2 v1025 = (i2)+0;
	i8 v1026 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1026 = v1025;

	i2 v1027 = (i2)+0;
	i8 v1028 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v1028 = v1027;


	i8 v1030 = (i8)(intptr_t)(ws+56);
	i8 v1031 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v1031 = v1030;












	i8 v1150 = (i8)+0;
	i8 v1151 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1151 = v1150;




	i2 v1202 = (i2)+0;
	i8 v1203 = (i8)(intptr_t)(ws+2774);
	*(i2*)(intptr_t)v1203 = v1202;

	i8 v1204 = (i8)+0;
	i8 v1205 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1205 = v1204;

	i1 v1206 = (i1)+0;
	i8 v1207 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1207 = v1206;





































































	i8 v2288 = (i8)(intptr_t)(ws+3456);
	i8 v2289 = (i8)+116;
	i8 v2290 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v2290)(v2289, v2288);

	i8 v2291 = (i8)(intptr_t)(ws+3576);
	i8 v2292 = (i8)+116;
	i8 v2293 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v2293)(v2292, v2291);

	i1 v2294 = (i1)+0;
	i8 v2295 = (i8)(intptr_t)(ws+3692);
	*(i1*)(intptr_t)v2295 = v2294;



	i8 v2312 = (i8)+0;
	i8 v2313 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v2313 = v2312;









	i2 v2472 = (i2)+1;
	i8 v2473 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v2473 = v2472;






























	i2 v3354 = (i2)+0;
	i8 v3355 = (i8)(intptr_t)(ws+3836);
	*(i2*)(intptr_t)v3355 = v3354;


	i1 v3410 = (i1)+0;
	i8 v3411 = (i8)(intptr_t)(ws+3846);
	*(i1*)(intptr_t)v3411 = v3410;















































	i8 v7623 = (i8)(intptr_t)c02_s01ff;
	i8 v7624 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7624)(v7623);

	i8 v7625 = (i8)(intptr_t)(f409_PrintFreeMemory);

	((void(*)(void))(intptr_t)v7625)();

	i8 v7626 = (i8)(intptr_t)(f411_ParseArguments);

	((void(*)(void))(intptr_t)v7626)();

	i8 v7627 = (i8)(intptr_t)(ws+24);
	i8 v7628 = *(i8*)(intptr_t)v7627;
	i8 v7629 = (i8)(intptr_t)(f120_InputterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v7629)(v7628);

	i8 v7630 = (i8)(intptr_t)(ws+32);
	i8 v7631 = *(i8*)(intptr_t)v7630;
	i8 v7632 = (i8)(intptr_t)(f108_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v7632)(v7631);

	i8 v7633 = (i8)(intptr_t)(f408_ProcessFile);

	((void(*)(void))(intptr_t)v7633)();

	i8 v7634 = (i8)(intptr_t)(f109_EmitterClosefile);

	((void(*)(void))(intptr_t)v7634)();

	i8 v7635 = (i8)(intptr_t)(f121_InputterClosefile);

	((void(*)(void))(intptr_t)v7635)();

	i8 v7636 = (i8)(intptr_t)c02_s0200;
	i8 v7637 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7637)(v7636);

	i8 v7638 = (i8)(intptr_t)(f409_PrintFreeMemory);

	((void(*)(void))(intptr_t)v7638)();

endsub:;
}
void cmain(void) {
	f3___main();
}
