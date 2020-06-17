#include "cowgol.h"
static i8 workspace[0x021f];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+4144 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+4320 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+4320) = p10; /*buf */
	*(i1*)(intptr_t)(ws+4328) = p9; /*byte */
	*(i8*)(intptr_t)(ws+4336) = p8; /*len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4320) 
,  
*(i1*)(intptr_t)(ws+4328) 
,  
*(i8*)(intptr_t)(ws+4336) 
); 



endsub:;
}

// print_char workspace at ws+4192 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+4192) = p11; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+4192) 
); 



endsub:;
}
	void f8_print_char(i1 /* c */);

// print workspace at ws+4176 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+4176) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+4176);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+4184);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+4184);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+4184);
	i1 v29 = *(i1*)(intptr_t)v28;
	i8 v30 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v30)(v29);

	i8 v31 = (i8)(intptr_t)(ws+4176);
	i8 v32 = *(i8*)(intptr_t)v31;
	i8 v33 = v32+(+1);
	i8 v34 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v34 = v33;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_nl workspace at ws+4144 length ws+0
void f12_print_nl(void) {

	i1 v35 = (i1)+10;
	i8 v36 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v36)(v35);

endsub:;
}

// UIToA workspace at ws+4208 length ws+49
void f13_UIToA(i8* p37 /* ptr */, i8 p38 /* buffer */, i1 p39 /* base */, i4 p40 /* value */) {
	*(i4*)(intptr_t)(ws+4208) = p40; /*value */
	*(i1*)(intptr_t)(ws+4212) = p39; /*base */
	*(i8*)(intptr_t)(ws+4216) = p38; /*buffer */

	i8 v41 = (i8)(intptr_t)(ws+4216);
	i8 v42 = *(i8*)(intptr_t)v41;
	i8 v43 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v43 = v42;

c02_0008:;

	i8 v44 = (i8)(intptr_t)(ws+4208);
	i4 v45 = *(i4*)(intptr_t)v44;
	i8 v46 = (i8)(intptr_t)(ws+4212);
	i1 v47 = *(i1*)(intptr_t)v46;
	i4 v48 = v47;
	i4 v49 = v45%v48;
	i8 v50 = (i8)(intptr_t)(ws+4232);
	*(i4*)(intptr_t)v50 = v49;

	i8 v51 = (i8)(intptr_t)(ws+4208);
	i4 v52 = *(i4*)(intptr_t)v51;
	i8 v53 = (i8)(intptr_t)(ws+4212);
	i1 v54 = *(i1*)(intptr_t)v53;
	i4 v55 = v54;
	i4 v56 = v52/v55;
	i8 v57 = (i8)(intptr_t)(ws+4208);
	*(i4*)(intptr_t)v57 = v56;

	i8 v58 = (i8)(intptr_t)(ws+4232);
	i4 v59 = *(i4*)(intptr_t)v58;
	i4 v60 = (i4)+10;
	if (v59<v60) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v61 = (i8)(intptr_t)(ws+4232);
	i4 v62 = *(i4*)(intptr_t)v61;
	i4 v63 = v62+(+48);
	i8 v64 = (i8)(intptr_t)(ws+4232);
	*(i4*)(intptr_t)v64 = v63;

	goto c02_000a;

c02_000e:;

	i8 v65 = (i8)(intptr_t)(ws+4232);
	i4 v66 = *(i4*)(intptr_t)v65;
	i4 v67 = v66+(+87);
	i8 v68 = (i8)(intptr_t)(ws+4232);
	*(i4*)(intptr_t)v68 = v67;

c02_000a:;

	i8 v69 = (i8)(intptr_t)(ws+4232);
	i4 v70 = *(i4*)(intptr_t)v69;
	i1 v71 = v70;
	i8 v72 = (i8)(intptr_t)(ws+4224);
	i8 v73 = *(i8*)(intptr_t)v72;
	*(i1*)(intptr_t)v73 = v71;

	i8 v74 = (i8)(intptr_t)(ws+4224);
	i8 v75 = *(i8*)(intptr_t)v74;
	i8 v76 = v75+(+1);
	i8 v77 = (i8)(intptr_t)(ws+4224);
	*(i8*)(intptr_t)v77 = v76;

	i8 v78 = (i8)(intptr_t)(ws+4208);
	i4 v79 = *(i4*)(intptr_t)v78;
	i4 v80 = (i4)+0;
	if (v79==v80) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v81 = (i8)(intptr_t)(ws+4216);
	i8 v82 = *(i8*)(intptr_t)v81;
	i8 v83 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v83 = v82;

	i8 v84 = (i8)(intptr_t)(ws+4224);
	i8 v85 = *(i8*)(intptr_t)v84;
	i8 v86 = v85+(-1);
	i8 v87 = (i8)(intptr_t)(ws+4248);
	*(i8*)(intptr_t)v87 = v86;

c02_0016:;

	i8 v88 = (i8)(intptr_t)(ws+4240);
	i8 v89 = *(i8*)(intptr_t)v88;
	i8 v90 = (i8)(intptr_t)(ws+4248);
	i8 v91 = *(i8*)(intptr_t)v90;
	if (v89<v91) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v92 = (i8)(intptr_t)(ws+4240);
	i8 v93 = *(i8*)(intptr_t)v92;
	i1 v94 = *(i1*)(intptr_t)v93;
	i8 v95 = (i8)(intptr_t)(ws+4256);
	*(i1*)(intptr_t)v95 = v94;

	i8 v96 = (i8)(intptr_t)(ws+4248);
	i8 v97 = *(i8*)(intptr_t)v96;
	i1 v98 = *(i1*)(intptr_t)v97;
	i8 v99 = (i8)(intptr_t)(ws+4240);
	i8 v100 = *(i8*)(intptr_t)v99;
	*(i1*)(intptr_t)v100 = v98;

	i8 v101 = (i8)(intptr_t)(ws+4256);
	i1 v102 = *(i1*)(intptr_t)v101;
	i8 v103 = (i8)(intptr_t)(ws+4248);
	i8 v104 = *(i8*)(intptr_t)v103;
	*(i1*)(intptr_t)v104 = v102;

	i8 v105 = (i8)(intptr_t)(ws+4240);
	i8 v106 = *(i8*)(intptr_t)v105;
	i8 v107 = v106+(+1);
	i8 v108 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v108 = v107;

	i8 v109 = (i8)(intptr_t)(ws+4248);
	i8 v110 = *(i8*)(intptr_t)v109;
	i8 v111 = v110+(-1);
	i8 v112 = (i8)(intptr_t)(ws+4248);
	*(i8*)(intptr_t)v112 = v111;

	goto c02_0016;

c02_0019:;

	i1 v113 = (i1)+0;
	i8 v114 = (i8)(intptr_t)(ws+4224);
	i8 v115 = *(i8*)(intptr_t)v114;
	*(i1*)(intptr_t)v115 = v113;

endsub:;
	*p37 = *(i8*)(intptr_t)(ws+4224);
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f11_print(i8 /* ptr */);

// print_i32 workspace at ws+4152 length ws+24
void f15_print_i32(i4 p143 /* value */) {
	*(i4*)(intptr_t)(ws+4152) = p143; /*value */

	i8 v144 = (i8)(intptr_t)(ws+4152);
	i4 v145 = *(i4*)(intptr_t)v144;
	i1 v146 = (i1)+10;
	i8 v147 = (i8)(intptr_t)(ws+4156);
	i8 v148 = (i8)(intptr_t)(f13_UIToA);
	i8 v149;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v148)(&v149, v147, v146, v145);
	i8 v150 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v150 = v149;

	i8 v151 = (i8)(intptr_t)(ws+4156);
	i8 v152 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v152)(v151);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i16 workspace at ws+4144 length ws+2
void f16_print_i16(i2 p153 /* value */) {
	*(i2*)(intptr_t)(ws+4144) = p153; /*value */

	i8 v154 = (i8)(intptr_t)(ws+4144);
	i2 v155 = *(i2*)(intptr_t)v154;
	i4 v156 = v155;
	i8 v157 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v157)(v156);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i8 workspace at ws+4088 length ws+1
void f17_print_i8(i1 p158 /* value */) {
	*(i1*)(intptr_t)(ws+4088) = p158; /*value */

	i8 v159 = (i8)(intptr_t)(ws+4088);
	i1 v160 = *(i1*)(intptr_t)v159;
	i4 v161 = v160;
	i8 v162 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v162)(v161);

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+4056 length ws+3
void f18_print_hex_i8(i1 p163 /* value */) {
	*(i1*)(intptr_t)(ws+4056) = p163; /*value */

	i1 v164 = (i1)+2;
	i8 v165 = (i8)(intptr_t)(ws+4057);
	*(i1*)(intptr_t)v165 = v164;

c02_001f:;

	i8 v166 = (i8)(intptr_t)(ws+4056);
	i1 v167 = *(i1*)(intptr_t)v166;
	i1 v168 = (i1)+4;
	i1 v169 = ((i1)v167)>>v168;
	i8 v170 = (i8)(intptr_t)(ws+4058);
	*(i1*)(intptr_t)v170 = v169;

	i8 v171 = (i8)(intptr_t)(ws+4058);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = (i1)+10;
	if (v172<v173) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v174 = (i8)(intptr_t)(ws+4058);
	i1 v175 = *(i1*)(intptr_t)v174;
	i1 v176 = v175+(+48);
	i8 v177 = (i8)(intptr_t)(ws+4058);
	*(i1*)(intptr_t)v177 = v176;

	goto c02_0021;

c02_0025:;

	i8 v178 = (i8)(intptr_t)(ws+4058);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = v179+(+87);
	i8 v181 = (i8)(intptr_t)(ws+4058);
	*(i1*)(intptr_t)v181 = v180;

c02_0021:;

	i8 v182 = (i8)(intptr_t)(ws+4058);
	i1 v183 = *(i1*)(intptr_t)v182;
	i8 v184 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v184)(v183);

	i8 v185 = (i8)(intptr_t)(ws+4056);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = (i1)+4;
	i1 v188 = ((i1)v186)<<v187;
	i8 v189 = (i8)(intptr_t)(ws+4056);
	*(i1*)(intptr_t)v189 = v188;

	i8 v190 = (i8)(intptr_t)(ws+4057);
	i1 v191 = *(i1*)(intptr_t)v190;
	i1 v192 = v191+(-1);
	i8 v193 = (i8)(intptr_t)(ws+4057);
	*(i1*)(intptr_t)v193 = v192;

	i8 v194 = (i8)(intptr_t)(ws+4057);
	i1 v195 = *(i1*)(intptr_t)v194;
	i1 v196 = (i1)+0;
	if (v195==v196) goto c02_0029; else goto c02_002a;

c02_0029:;

	goto c02_0020;

c02_002a:;

c02_0026:;

	goto c02_001f;

c02_0020:;

endsub:;
}
	void f18_print_hex_i8(i1 /* value */);
	void f18_print_hex_i8(i1 /* value */);

// print_hex_i16 workspace at ws+4040 length ws+2
void f19_print_hex_i16(i2 p197 /* value */) {
	*(i2*)(intptr_t)(ws+4040) = p197; /*value */

	i8 v198 = (i8)(intptr_t)(ws+4040);
	i2 v199 = *(i2*)(intptr_t)v198;
	i1 v200 = (i1)+8;
	i2 v201 = ((i2)v199)>>v200;
	i1 v202 = v201;
	i8 v203 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v203)(v202);

	i8 v204 = (i8)(intptr_t)(ws+4040);
	i2 v205 = *(i2*)(intptr_t)v204;
	i1 v206 = v205;
	i8 v207 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v207)(v206);

endsub:;
}
	void f18_print_hex_i8(i1 /* value */);
	void f18_print_hex_i8(i1 /* value */);
	void f18_print_hex_i8(i1 /* value */);
	void f18_print_hex_i8(i1 /* value */);

// print_hex_i32 workspace at ws+4048 length ws+4
void f20_print_hex_i32(i4 p208 /* value */) {
	*(i4*)(intptr_t)(ws+4048) = p208; /*value */

	i8 v209 = (i8)(intptr_t)(ws+4048);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+24;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	i8 v214 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v214)(v213);

	i8 v215 = (i8)(intptr_t)(ws+4048);
	i4 v216 = *(i4*)(intptr_t)v215;
	i1 v217 = (i1)+16;
	i4 v218 = ((i4)v216)>>v217;
	i1 v219 = v218;
	i8 v220 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v220)(v219);

	i8 v221 = (i8)(intptr_t)(ws+4048);
	i4 v222 = *(i4*)(intptr_t)v221;
	i1 v223 = (i1)+8;
	i4 v224 = ((i4)v222)>>v223;
	i1 v225 = v224;
	i8 v226 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v226)(v225);

	i8 v227 = (i8)(intptr_t)(ws+4048);
	i4 v228 = *(i4*)(intptr_t)v227;
	i1 v229 = v228;
	i8 v230 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v230)(v229);

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// MemZero workspace at ws+4048 length ws+16
void f22_MemZero(i8 p335 /* size */, i8 p336 /* ptr */) {
	*(i8*)(intptr_t)(ws+4048) = p336; /*ptr */
	*(i8*)(intptr_t)(ws+4056) = p335; /*size */

	i8 v337 = (i8)(intptr_t)(ws+4048);
	i8 v338 = *(i8*)(intptr_t)v337;
	i1 v339 = (i1)+0;
	i8 v340 = (i8)(intptr_t)(ws+4056);
	i8 v341 = *(i8*)(intptr_t)v340;
	i8 v342 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v342)(v341, v339, v338);

endsub:;
}

// ArgvInit workspace at ws+3728 length ws+0
void f23_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v343 = (i8)(intptr_t)(ws+16);
	i8 v344 = *(i8*)(intptr_t)v343;
	i8 v345 = v344+(+8);
	i8 v346 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v346 = v345;

endsub:;
}

// ArgvNext workspace at ws+3728 length ws+8
void f24_ArgvNext(i8* p347 /* arg */) {

	i8 v348 = (i8)(intptr_t)(ws+16);
	i8 v349 = *(i8*)(intptr_t)v348;
	i8 v350 = (i8)+0;
	if (v349==v350) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v351 = (i8)+0;
	i8 v352 = (i8)(intptr_t)(ws+3728);
	*(i8*)(intptr_t)v352 = v351;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v353 = (i8)(intptr_t)(ws+16);
	i8 v354 = *(i8*)(intptr_t)v353;
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = (i8)(intptr_t)(ws+3728);
	*(i8*)(intptr_t)v356 = v355;

	i8 v357 = (i8)(intptr_t)(ws+3728);
	i8 v358 = *(i8*)(intptr_t)v357;
	i8 v359 = (i8)+0;
	if (v358==v359) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v360 = (i8)+0;
	i8 v361 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v361 = v360;

	goto c02_0054;

c02_0058:;

	i8 v362 = (i8)(intptr_t)(ws+16);
	i8 v363 = *(i8*)(intptr_t)v362;
	i8 v364 = v363+(+8);
	i8 v365 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v365 = v364;

c02_0054:;

endsub:;
	*p347 = *(i8*)(intptr_t)(ws+3728);
}

// StrCmp workspace at ws+3928 length ws+17
void f25_StrCmp(i1* p366 /* res */, i8 p367 /* s2 */, i8 p368 /* s1 */) {
	*(i8*)(intptr_t)(ws+3928) = p368; /*s1 */
	*(i8*)(intptr_t)(ws+3936) = p367; /*s2 */

c02_0059:;

	i8 v369 = (i8)(intptr_t)(ws+3928);
	i8 v370 = *(i8*)(intptr_t)v369;
	i1 v371 = *(i1*)(intptr_t)v370;
	i8 v372 = (i8)(intptr_t)(ws+3936);
	i8 v373 = *(i8*)(intptr_t)v372;
	i1 v374 = *(i1*)(intptr_t)v373;
	i1 v375 = v371-v374;
	i8 v376 = (i8)(intptr_t)(ws+3944);
	*(i1*)(intptr_t)v376 = v375;

	i8 v377 = (i8)(intptr_t)(ws+3944);
	i1 v378 = *(i1*)(intptr_t)v377;
	i1 v379 = (i1)+0;
	if (v378==v379) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v380 = (i8)(intptr_t)(ws+3928);
	i8 v381 = *(i8*)(intptr_t)v380;
	i1 v382 = *(i1*)(intptr_t)v381;
	i1 v383 = (i1)+0;
	if (v382==v383) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v384 = (i8)(intptr_t)(ws+3928);
	i8 v385 = *(i8*)(intptr_t)v384;
	i8 v386 = v385+(+1);
	i8 v387 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v387 = v386;

	i8 v388 = (i8)(intptr_t)(ws+3936);
	i8 v389 = *(i8*)(intptr_t)v388;
	i8 v390 = v389+(+1);
	i8 v391 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v391 = v390;

	goto c02_0059;

c02_005a:;

endsub:;
	*p366 = *(i1*)(intptr_t)(ws+3944);
}

// ToLower workspace at ws+3744 length ws+2
void f26_ToLower(i1* p392 /* cc */, i1 p393 /* c */) {
	*(i1*)(intptr_t)(ws+3744) = p393; /*c */

	i8 v394 = (i8)(intptr_t)(ws+3744);
	i1 v395 = *(i1*)(intptr_t)v394;
	i1 v396 = (i1)+65;
	if (v395<v396) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v397 = (i1)+90;
	i8 v398 = (i8)(intptr_t)(ws+3744);
	i1 v399 = *(i1*)(intptr_t)v398;
	if (v397<v399) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v400 = (i8)(intptr_t)(ws+3744);
	i1 v401 = *(i1*)(intptr_t)v400;
	i1 v402 = v401|(+32);
	i8 v403 = (i8)(intptr_t)(ws+3745);
	*(i1*)(intptr_t)v403 = v402;

	goto c02_0063;

c02_0069:;

	i8 v404 = (i8)(intptr_t)(ws+3744);
	i1 v405 = *(i1*)(intptr_t)v404;
	i8 v406 = (i8)(intptr_t)(ws+3745);
	*(i1*)(intptr_t)v406 = v405;

c02_0063:;

endsub:;
	*p392 = *(i1*)(intptr_t)(ws+3745);
}

// StrLen workspace at ws+3936 length ws+25
void f28_StrLen(i8* p437 /* size */, i8 p438 /* s */) {
	*(i8*)(intptr_t)(ws+3936) = p438; /*s */

	i8 v439 = (i8)(intptr_t)(ws+3936);
	i8 v440 = *(i8*)(intptr_t)v439;
	i8 v441 = (i8)(intptr_t)(ws+3952);
	*(i8*)(intptr_t)v441 = v440;

c02_0075:;

	i8 v442 = (i8)(intptr_t)(ws+3952);
	i8 v443 = *(i8*)(intptr_t)v442;
	i1 v444 = *(i1*)(intptr_t)v443;
	i8 v445 = (i8)(intptr_t)(ws+3960);
	*(i1*)(intptr_t)v445 = v444;

	i8 v446 = (i8)(intptr_t)(ws+3960);
	i1 v447 = *(i1*)(intptr_t)v446;
	i1 v448 = (i1)+0;
	if (v447==v448) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v449 = (i8)(intptr_t)(ws+3952);
	i8 v450 = *(i8*)(intptr_t)v449;
	i8 v451 = v450+(+1);
	i8 v452 = (i8)(intptr_t)(ws+3952);
	*(i8*)(intptr_t)v452 = v451;

	goto c02_0075;

c02_0076:;

	i8 v453 = (i8)(intptr_t)(ws+3952);
	i8 v454 = *(i8*)(intptr_t)v453;
	i8 v455 = (i8)(intptr_t)(ws+3936);
	i8 v456 = *(i8*)(intptr_t)v455;
	i8 v457 = v454-v456;
	i8 v458 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v458 = v457;

endsub:;
	*p437 = *(i8*)(intptr_t)(ws+3944);
}

// MemCopy workspace at ws+4128 length ws+24
void f30_MemCopy(i8 p480 /* dest */, i8 p481 /* size */, i8 p482 /* src */) {
	*(i8*)(intptr_t)(ws+4128) = p482; /*src */
	*(i8*)(intptr_t)(ws+4136) = p481; /*size */
	*(i8*)(intptr_t)(ws+4144) = p480; /*dest */

c02_0085:;

	i8 v483 = (i8)(intptr_t)(ws+4136);
	i8 v484 = *(i8*)(intptr_t)v483;
	i8 v485 = (i8)+0;
	if (v484==v485) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v486 = (i8)(intptr_t)(ws+4128);
	i8 v487 = *(i8*)(intptr_t)v486;
	i1 v488 = *(i1*)(intptr_t)v487;
	i8 v489 = (i8)(intptr_t)(ws+4144);
	i8 v490 = *(i8*)(intptr_t)v489;
	*(i1*)(intptr_t)v490 = v488;

	i8 v491 = (i8)(intptr_t)(ws+4144);
	i8 v492 = *(i8*)(intptr_t)v491;
	i8 v493 = v492+(+1);
	i8 v494 = (i8)(intptr_t)(ws+4144);
	*(i8*)(intptr_t)v494 = v493;

	i8 v495 = (i8)(intptr_t)(ws+4128);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+1);
	i8 v498 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v498 = v497;

	i8 v499 = (i8)(intptr_t)(ws+4136);
	i8 v500 = *(i8*)(intptr_t)v499;
	i8 v501 = v500+(-1);
	i8 v502 = (i8)(intptr_t)(ws+4136);
	*(i8*)(intptr_t)v502 = v501;

	goto c02_0085;

c02_0088:;

endsub:;
}

// RawAlloc workspace at ws+4128 length ws+16
void f31_RawAlloc(i8* p503 /* block */, i8 p504 /* length */) {
	*(i8*)(intptr_t)(ws+4128) = p504; /*length */


	
*(i8*)(intptr_t)(ws+4136) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+4128) 
); 



endsub:;
	*p503 = *(i8*)(intptr_t)(ws+4136);
}

// Free workspace at ws+4136 length ws+8
void f33_Free(i8 p518 /* block */) {
	*(i8*)(intptr_t)(ws+4136) = p518; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4136) 
); 



endsub:;
}

// GetFreeMemory workspace at ws+3720 length ws+8
void f37_GetFreeMemory(i8* p521 /* i */) {

	i8 v522 = (i8)+0;
	i8 v523 = (i8)(intptr_t)(ws+3720);
	*(i8*)(intptr_t)v523 = v522;

endsub:;
	*p521 = *(i8*)(intptr_t)(ws+3720);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_blockin workspace at ws+4288 length ws+28
void f38_fcb_i_blockin(i8 p524 /* fcb */) {
	*(i8*)(intptr_t)(ws+4288) = p524; /*fcb */

	i8 v525 = (i8)(intptr_t)(ws+4288);
	i8 v526 = *(i8*)(intptr_t)v525;
	i8 v527 = v526+(+12);
	i1 v528 = (i1)+0;
	i8 v529 = (i8)+512;
	i8 v530 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v530)(v529, v528, v527);

	i8 v531 = (i8)(intptr_t)(ws+4288);
	i8 v532 = *(i8*)(intptr_t)v531;
	i4 v533 = *(i4*)(intptr_t)v532;
	i8 v534 = (i8)(intptr_t)(ws+4296);
	*(i4*)(intptr_t)v534 = v533;

	i8 v535 = (i8)(intptr_t)(ws+4288);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+12);
	i8 v538 = (i8)(intptr_t)(ws+4304);
	*(i8*)(intptr_t)v538 = v537;

	i8 v539 = (i8)(intptr_t)(ws+4288);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+8);
	i4 v542 = *(i4*)(intptr_t)v541;
	i1 v543 = (i1)+9;
	i4 v544 = ((i4)v542)<<v543;
	i8 v545 = (i8)(intptr_t)(ws+4312);
	*(i4*)(intptr_t)v545 = v544;


	
pread( 
*(i4*)(intptr_t)(ws+4296) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4304) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+4312) 
); 



	i1 v546 = (i1)+0;
	i8 v547 = (i8)(intptr_t)(ws+4288);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+6);
	*(i1*)(intptr_t)v549 = v546;

endsub:;
}

// fcb_i_blockout workspace at ws+4288 length ws+28
void f39_fcb_i_blockout(i8 p550 /* fcb */) {
	*(i8*)(intptr_t)(ws+4288) = p550; /*fcb */

	i8 v551 = (i8)(intptr_t)(ws+4288);
	i8 v552 = *(i8*)(intptr_t)v551;
	i8 v553 = v552+(+6);
	i1 v554 = *(i1*)(intptr_t)v553;
	i1 v555 = (i1)+0;
	if (v554==v555) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v556 = (i8)(intptr_t)(ws+4288);
	i8 v557 = *(i8*)(intptr_t)v556;
	i4 v558 = *(i4*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+4296);
	*(i4*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+4288);
	i8 v561 = *(i8*)(intptr_t)v560;
	i8 v562 = v561+(+12);
	i8 v563 = (i8)(intptr_t)(ws+4304);
	*(i8*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+4288);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = v565+(+8);
	i4 v567 = *(i4*)(intptr_t)v566;
	i1 v568 = (i1)+9;
	i4 v569 = ((i4)v567)<<v568;
	i8 v570 = (i8)(intptr_t)(ws+4312);
	*(i4*)(intptr_t)v570 = v569;


	
pwrite( 
*(i4*)(intptr_t)(ws+4296) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4304) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+4312) 
); 



	i1 v571 = (i1)+0;
	i8 v572 = (i8)(intptr_t)(ws+4288);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+6);
	*(i1*)(intptr_t)v574 = v571;

	goto c02_008e;

c02_0092:;

c02_008e:;

endsub:;
}
	void f39_fcb_i_blockout(i8 /* fcb */);
	void f38_fcb_i_blockin(i8 /* fcb */);

// fcb_i_changeblock workspace at ws+4272 length ws+12
void f40_fcb_i_changeblock(i4 p575 /* newblock */, i8 p576 /* fcb */) {
	*(i8*)(intptr_t)(ws+4272) = p576; /*fcb */
	*(i4*)(intptr_t)(ws+4280) = p575; /*newblock */

	i8 v577 = (i8)(intptr_t)(ws+4280);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+4272);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = v580+(+8);
	i4 v582 = *(i4*)(intptr_t)v581;
	if (v578==v582) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v583 = (i8)(intptr_t)(ws+4272);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v585)(v584);

	i8 v586 = (i8)(intptr_t)(ws+4280);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+4272);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+8);
	*(i4*)(intptr_t)v590 = v587;

	i8 v591 = (i8)(intptr_t)(ws+4272);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = (i8)(intptr_t)(f38_fcb_i_blockin);

	((void(*)(i8 /* fcb */))(intptr_t)v593)(v592);

	goto c02_0093;

c02_0097:;

c02_0093:;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_open workspace at ws+3816 length ws+28
void f41_fcb_i_open(i1* p594 /* errno */, i4 p595 /* flags */, i8 p596 /* filename */, i8 p597 /* fcb */) {
	*(i8*)(intptr_t)(ws+3816) = p597; /*fcb */
	*(i8*)(intptr_t)(ws+3824) = p596; /*filename */
	*(i4*)(intptr_t)(ws+3832) = p595; /*flags */

	i8 v598 = (i8)(intptr_t)(ws+3816);
	i8 v599 = *(i8*)(intptr_t)v598;
	i1 v600 = (i1)+0;
	i8 v601 = (i8)+524;
	i8 v602 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v602)(v601, v600, v599);

	i2 v603 = (i2)+511;
	i8 v604 = (i8)(intptr_t)(ws+3816);
	i8 v605 = *(i8*)(intptr_t)v604;
	i8 v606 = v605+(+4);
	*(i2*)(intptr_t)v606 = v603;

	i4 v607 = (i4)-1;
	i8 v608 = (i8)(intptr_t)(ws+3816);
	i8 v609 = *(i8*)(intptr_t)v608;
	i8 v610 = v609+(+8);
	*(i4*)(intptr_t)v610 = v607;


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+3840) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+3824) 
,  
*(i4*)(intptr_t)(ws+3832) 
,  
(+438)
); 



	i8 v611 = (i8)(intptr_t)(ws+3840);
	i4 v612 = *(i4*)(intptr_t)v611;
	i8 v613 = (i8)(intptr_t)(ws+3816);
	i8 v614 = *(i8*)(intptr_t)v613;
	*(i4*)(intptr_t)v614 = v612;

	i8 v615 = (i8)(intptr_t)(ws+3840);
	i4 v616 = *(i4*)(intptr_t)v615;
	i4 v617 = (i4)+0;
	if ((s4)v616<(s4)v617) goto c02_009b; else goto c02_009c;

c02_009b:;


	
*(i1*)(intptr_t)(ws+3836) 
 = errno; 



	goto c02_0098;

c02_009c:;

	i1 v618 = (i1)+0;
	i8 v619 = (i8)(intptr_t)(ws+3836);
	*(i1*)(intptr_t)v619 = v618;

c02_0098:;

endsub:;
	*p594 = *(i1*)(intptr_t)(ws+3836);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+3792 length ws+17
void f42_FCBOpenIn(i1* p620 /* errno */, i8 p621 /* filename */, i8 p622 /* fcb */) {
	*(i8*)(intptr_t)(ws+3792) = p622; /*fcb */
	*(i8*)(intptr_t)(ws+3800) = p621; /*filename */

	i8 v623 = (i8)(intptr_t)(ws+3792);
	i8 v624 = *(i8*)(intptr_t)v623;
	i8 v625 = (i8)(intptr_t)(ws+3800);
	i8 v626 = *(i8*)(intptr_t)v625;
	i4 v627 = (i4)+0;
	i8 v628 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v629;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v628)(&v629, v627, v626, v624);
	i8 v630 = (i8)(intptr_t)(ws+3808);
	*(i1*)(intptr_t)v630 = v629;

endsub:;
	*p620 = *(i1*)(intptr_t)(ws+3808);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+3728 length ws+17
void f44_FCBOpenOut(i1* p642 /* errno */, i8 p643 /* filename */, i8 p644 /* fcb */) {
	*(i8*)(intptr_t)(ws+3728) = p644; /*fcb */
	*(i8*)(intptr_t)(ws+3736) = p643; /*filename */

	i8 v645 = (i8)(intptr_t)(ws+3728);
	i8 v646 = *(i8*)(intptr_t)v645;
	i8 v647 = (i8)(intptr_t)(ws+3736);
	i8 v648 = *(i8*)(intptr_t)v647;
	i4 v649 = (i4)+578;
	i8 v650 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v651;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v650)(&v651, v649, v648, v646);
	i8 v652 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v652 = v651;

endsub:;
	*p642 = *(i1*)(intptr_t)(ws+3744);
}
	void f39_fcb_i_blockout(i8 /* fcb */);

// FCBClose workspace at ws+3792 length ws+16
void f45_FCBClose(i1* p653 /* errno */, i8 p654 /* fcb */) {
	*(i8*)(intptr_t)(ws+3792) = p654; /*fcb */

	i8 v655 = (i8)(intptr_t)(ws+3792);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v657)(v656);

	i8 v658 = (i8)(intptr_t)(ws+3792);
	i8 v659 = *(i8*)(intptr_t)v658;
	i4 v660 = *(i4*)(intptr_t)v659;
	i8 v661 = (i8)(intptr_t)(ws+3804);
	*(i4*)(intptr_t)v661 = v660;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+3804) 
); 


	
*(i1*)(intptr_t)(ws+3800) 
 = errno; 



endsub:;
	*p653 = *(i1*)(intptr_t)(ws+3800);
}
	void f40_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// FCBSeek workspace at ws+3792 length ws+18
void f46_FCBSeek(i4 p662 /* pos */, i8 p663 /* fcb */) {
	*(i8*)(intptr_t)(ws+3792) = p663; /*fcb */
	*(i4*)(intptr_t)(ws+3800) = p662; /*pos */

	i8 v664 = (i8)(intptr_t)(ws+3800);
	i4 v665 = *(i4*)(intptr_t)v664;
	i4 v666 = v665+(-1);
	i8 v667 = (i8)(intptr_t)(ws+3800);
	*(i4*)(intptr_t)v667 = v666;

	i8 v668 = (i8)(intptr_t)(ws+3800);
	i4 v669 = *(i4*)(intptr_t)v668;
	i1 v670 = (i1)+9;
	i4 v671 = ((i4)v669)>>v670;
	i8 v672 = (i8)(intptr_t)(ws+3804);
	*(i4*)(intptr_t)v672 = v671;

	i8 v673 = (i8)(intptr_t)(ws+3800);
	i4 v674 = *(i4*)(intptr_t)v673;
	i2 v675 = v674;
	i2 v676 = v675&(+511);
	i8 v677 = (i8)(intptr_t)(ws+3808);
	*(i2*)(intptr_t)v677 = v676;

	i8 v678 = (i8)(intptr_t)(ws+3792);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(ws+3804);
	i4 v681 = *(i4*)(intptr_t)v680;
	i8 v682 = (i8)(intptr_t)(f40_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v682)(v681, v679);

	i8 v683 = (i8)(intptr_t)(ws+3808);
	i2 v684 = *(i2*)(intptr_t)v683;
	i8 v685 = (i8)(intptr_t)(ws+3792);
	i8 v686 = *(i8*)(intptr_t)v685;
	i8 v687 = v686+(+4);
	*(i2*)(intptr_t)v687 = v684;

endsub:;
}

// FCBPos workspace at ws+3792 length ws+12
void f47_FCBPos(i4* p688 /* pos */, i8 p689 /* fcb */) {
	*(i8*)(intptr_t)(ws+3792) = p689; /*fcb */

	i8 v690 = (i8)(intptr_t)(ws+3792);
	i8 v691 = *(i8*)(intptr_t)v690;
	i8 v692 = v691+(+8);
	i4 v693 = *(i4*)(intptr_t)v692;
	i1 v694 = (i1)+9;
	i4 v695 = ((i4)v693)<<v694;
	i8 v696 = (i8)(intptr_t)(ws+3792);
	i8 v697 = *(i8*)(intptr_t)v696;
	i8 v698 = v697+(+4);
	i2 v699 = *(i2*)(intptr_t)v698;
	i4 v700 = v699;
	i4 v701 = v695|v700;
	i4 v702 = v701+(+1);
	i8 v703 = (i8)(intptr_t)(ws+3800);
	*(i4*)(intptr_t)v703 = v702;

endsub:;
	*p688 = *(i4*)(intptr_t)(ws+3800);
}
	void f40_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// fcb_i_nextchar workspace at ws+4264 length ws+8
void f49_fcb_i_nextchar(i8 p718 /* fcb */) {
	*(i8*)(intptr_t)(ws+4264) = p718; /*fcb */

	i8 v719 = (i8)(intptr_t)(ws+4264);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = v720+(+4);
	i2 v722 = *(i2*)(intptr_t)v721;
	i2 v723 = v722+(+1);
	i8 v724 = (i8)(intptr_t)(ws+4264);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+4);
	*(i2*)(intptr_t)v726 = v723;

	i8 v727 = (i8)(intptr_t)(ws+4264);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i2 v731 = (i2)+512;
	if (v730==v731) goto c02_00a0; else goto c02_00a1;

c02_00a0:;

	i8 v732 = (i8)(intptr_t)(ws+4264);
	i8 v733 = *(i8*)(intptr_t)v732;
	i8 v734 = (i8)(intptr_t)(ws+4264);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+8);
	i4 v737 = *(i4*)(intptr_t)v736;
	i4 v738 = v737+(+1);
	i8 v739 = (i8)(intptr_t)(f40_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v739)(v738, v733);

	i2 v740 = (i2)+0;
	i8 v741 = (i8)(intptr_t)(ws+4264);
	i8 v742 = *(i8*)(intptr_t)v741;
	i8 v743 = v742+(+4);
	*(i2*)(intptr_t)v743 = v740;

	goto c02_009d;

c02_00a1:;

c02_009d:;

endsub:;
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBGetChar workspace at ws+3768 length ws+9
void f50_FCBGetChar(i1* p744 /* c */, i8 p745 /* fcb */) {
	*(i8*)(intptr_t)(ws+3768) = p745; /*fcb */

	i8 v746 = (i8)(intptr_t)(ws+3768);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v748)(v747);

	i8 v749 = (i8)(intptr_t)(ws+3768);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = v750+(+12);
	i8 v752 = (i8)(intptr_t)(ws+3768);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+4);
	i2 v755 = *(i2*)(intptr_t)v754;
	i8 v756 = v755;
	i8 v757 = v751+v756;
	i1 v758 = *(i1*)(intptr_t)v757;
	i8 v759 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v759 = v758;

endsub:;
	*p744 = *(i1*)(intptr_t)(ws+3776);
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBPutChar workspace at ws+4248 length ws+9
void f51_FCBPutChar(i1 p760 /* c */, i8 p761 /* fcb */) {
	*(i8*)(intptr_t)(ws+4248) = p761; /*fcb */
	*(i1*)(intptr_t)(ws+4256) = p760; /*c */

	i8 v762 = (i8)(intptr_t)(ws+4248);
	i8 v763 = *(i8*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v764)(v763);

	i8 v765 = (i8)(intptr_t)(ws+4256);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+4248);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+4248);
	i8 v771 = *(i8*)(intptr_t)v770;
	i8 v772 = v771+(+4);
	i2 v773 = *(i2*)(intptr_t)v772;
	i8 v774 = v773;
	i8 v775 = v769+v774;
	*(i1*)(intptr_t)v775 = v766;

	i1 v776 = (i1)+1;
	i8 v777 = (i8)(intptr_t)(ws+4248);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+6);
	*(i1*)(intptr_t)v779 = v776;

endsub:;
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);

// FCBPutBlock workspace at ws+4224 length ws+24
void f54_FCBPutBlock(i8 p818 /* length */, i8 p819 /* buffer */, i8 p820 /* fcb */) {
	*(i8*)(intptr_t)(ws+4224) = p820; /*fcb */
	*(i8*)(intptr_t)(ws+4232) = p819; /*buffer */
	*(i8*)(intptr_t)(ws+4240) = p818; /*length */

c02_00b1:;

	i8 v821 = (i8)(intptr_t)(ws+4240);
	i8 v822 = *(i8*)(intptr_t)v821;
	i8 v823 = (i8)+0;
	if (v822==v823) goto c02_00b4; else goto c02_00b3;

c02_00b3:;

	i8 v824 = (i8)(intptr_t)(ws+4224);
	i8 v825 = *(i8*)(intptr_t)v824;
	i8 v826 = (i8)(intptr_t)(ws+4232);
	i8 v827 = *(i8*)(intptr_t)v826;
	i1 v828 = *(i1*)(intptr_t)v827;
	i8 v829 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v829)(v828, v825);

	i8 v830 = (i8)(intptr_t)(ws+4232);
	i8 v831 = *(i8*)(intptr_t)v830;
	i8 v832 = v831+(+1);
	i8 v833 = (i8)(intptr_t)(ws+4232);
	*(i8*)(intptr_t)v833 = v832;

	i8 v834 = (i8)(intptr_t)(ws+4240);
	i8 v835 = *(i8*)(intptr_t)v834;
	i8 v836 = v835+(-1);
	i8 v837 = (i8)(intptr_t)(ws+4240);
	*(i8*)(intptr_t)v837 = v836;

	goto c02_00b1;

c02_00b4:;

endsub:;
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupBraced workspace at ws+3904 length ws+32
void f64_StrDupBraced(i8* p850 /* news */, i8 p851 /* s */) {
	*(i8*)(intptr_t)(ws+3904) = p851; /*s */

	i8 v852 = (i8)(intptr_t)(ws+3904);
	i8 v853 = *(i8*)(intptr_t)v852;
	i8 v854 = (i8)(intptr_t)(f28_StrLen);
	i8 v855;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v854)(&v855, v853);
	i8 v856 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v856 = v855;

	i8 v857 = (i8)(intptr_t)(ws+3920);
	i8 v858 = *(i8*)(intptr_t)v857;
	i8 v859 = v858+(+3);
	i8 v860 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v861;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v860)(&v861, v859);
	i8 v862 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v862 = v861;

	i8 v863 = (i8)(intptr_t)(ws+3912);
	i8 v864 = *(i8*)(intptr_t)v863;
	i8 v865 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v865 = v864;

	i1 v866 = (i1)+91;
	i8 v867 = (i8)(intptr_t)(ws+3928);
	i8 v868 = *(i8*)(intptr_t)v867;
	*(i1*)(intptr_t)v868 = v866;

	i8 v869 = (i8)(intptr_t)(ws+3928);
	i8 v870 = *(i8*)(intptr_t)v869;
	i8 v871 = v870+(+1);
	i8 v872 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v872 = v871;

	i8 v873 = (i8)(intptr_t)(ws+3904);
	i8 v874 = *(i8*)(intptr_t)v873;
	i8 v875 = (i8)(intptr_t)(ws+3920);
	i8 v876 = *(i8*)(intptr_t)v875;
	i8 v877 = (i8)(intptr_t)(ws+3928);
	i8 v878 = *(i8*)(intptr_t)v877;
	i8 v879 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v879)(v878, v876, v874);

	i8 v880 = (i8)(intptr_t)(ws+3928);
	i8 v881 = *(i8*)(intptr_t)v880;
	i8 v882 = (i8)(intptr_t)(ws+3920);
	i8 v883 = *(i8*)(intptr_t)v882;
	i8 v884 = v881+v883;
	i8 v885 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v885 = v884;

	i1 v886 = (i1)+93;
	i8 v887 = (i8)(intptr_t)(ws+3928);
	i8 v888 = *(i8*)(intptr_t)v887;
	*(i1*)(intptr_t)v888 = v886;

	i8 v889 = (i8)(intptr_t)(ws+3928);
	i8 v890 = *(i8*)(intptr_t)v889;
	i8 v891 = v890+(+1);
	i8 v892 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v892 = v891;

	i1 v893 = (i1)+0;
	i8 v894 = (i8)(intptr_t)(ws+3928);
	i8 v895 = *(i8*)(intptr_t)v894;
	*(i1*)(intptr_t)v895 = v893;

endsub:;
	*p850 = *(i8*)(intptr_t)(ws+3912);
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupArrayed workspace at ws+3872 length ws+40
void f65_StrDupArrayed(i8* p896 /* news */, i2 p897 /* i */, i8 p898 /* s */) {
	*(i8*)(intptr_t)(ws+3872) = p898; /*s */
	*(i2*)(intptr_t)(ws+3880) = p897; /*i */

	i8 v899 = (i8)(intptr_t)(ws+3872);
	i8 v900 = *(i8*)(intptr_t)v899;
	i8 v901 = (i8)(intptr_t)(f28_StrLen);
	i8 v902;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v901)(&v902, v900);
	i8 v903 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v903 = v902;

	i8 v904 = (i8)(intptr_t)(ws+3896);
	i8 v905 = *(i8*)(intptr_t)v904;
	i8 v906 = v905+(+3);
	i8 v907 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v908;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v907)(&v908, v906);
	i8 v909 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v909 = v908;

	i8 v910 = (i8)(intptr_t)(ws+3888);
	i8 v911 = *(i8*)(intptr_t)v910;
	i8 v912 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v912 = v911;

	i8 v913 = (i8)(intptr_t)(ws+3872);
	i8 v914 = *(i8*)(intptr_t)v913;
	i8 v915 = (i8)(intptr_t)(ws+3896);
	i8 v916 = *(i8*)(intptr_t)v915;
	i8 v917 = (i8)(intptr_t)(ws+3904);
	i8 v918 = *(i8*)(intptr_t)v917;
	i8 v919 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v919)(v918, v916, v914);

	i8 v920 = (i8)(intptr_t)(ws+3904);
	i8 v921 = *(i8*)(intptr_t)v920;
	i8 v922 = (i8)(intptr_t)(ws+3896);
	i8 v923 = *(i8*)(intptr_t)v922;
	i8 v924 = v921+v923;
	i8 v925 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v925 = v924;

	i1 v926 = (i1)+91;
	i8 v927 = (i8)(intptr_t)(ws+3904);
	i8 v928 = *(i8*)(intptr_t)v927;
	*(i1*)(intptr_t)v928 = v926;

	i8 v929 = (i8)(intptr_t)(ws+3904);
	i8 v930 = *(i8*)(intptr_t)v929;
	i8 v931 = v930+(+1);
	i8 v932 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v932 = v931;

	i1 v933 = (i1)+93;
	i8 v934 = (i8)(intptr_t)(ws+3904);
	i8 v935 = *(i8*)(intptr_t)v934;
	*(i1*)(intptr_t)v935 = v933;

	i8 v936 = (i8)(intptr_t)(ws+3904);
	i8 v937 = *(i8*)(intptr_t)v936;
	i8 v938 = v937+(+1);
	i8 v939 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v939 = v938;

	i1 v940 = (i1)+0;
	i8 v941 = (i8)(intptr_t)(ws+3904);
	i8 v942 = *(i8*)(intptr_t)v941;
	*(i1*)(intptr_t)v942 = v940;

endsub:;
	*p896 = *(i8*)(intptr_t)(ws+3888);
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// InternalStrDup workspace at ws+3880 length ws+24
void f66_InternalStrDup(i8* p943 /* news */, i8 p944 /* s */) {
	*(i8*)(intptr_t)(ws+3880) = p944; /*s */

	i8 v945 = (i8)(intptr_t)(ws+3880);
	i8 v946 = *(i8*)(intptr_t)v945;
	i8 v947 = (i8)(intptr_t)(f28_StrLen);
	i8 v948;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v947)(&v948, v946);
	i8 v949 = v948+(+1);
	i8 v950 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v950 = v949;

	i8 v951 = (i8)(intptr_t)(ws+3896);
	i8 v952 = *(i8*)(intptr_t)v951;
	i8 v953 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v954;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v953)(&v954, v952);
	i8 v955 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v955 = v954;

	i8 v956 = (i8)(intptr_t)(ws+3880);
	i8 v957 = *(i8*)(intptr_t)v956;
	i8 v958 = (i8)(intptr_t)(ws+3896);
	i8 v959 = *(i8*)(intptr_t)v958;
	i8 v960 = (i8)(intptr_t)(ws+3888);
	i8 v961 = *(i8*)(intptr_t)v960;
	i8 v962 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v962)(v961, v959, v957);

endsub:;
	*p943 = *(i8*)(intptr_t)(ws+3888);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewSymbol workspace at ws+3936 length ws+8
void f59_AllocNewSymbol(i8* p965 /* symbol */) {

	i8 v966 = (i8)(intptr_t)(ws+232);
	i8 v967 = *(i8*)(intptr_t)v966;
	i8 v968 = (i8)+0;
	if (v967==v968) goto c02_00b9; else goto c02_00b8;

c02_00b8:;

	i8 v969 = (i8)(intptr_t)(ws+232);
	i8 v970 = *(i8*)(intptr_t)v969;
	i8 v971 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v971 = v970;

	i8 v972 = (i8)(intptr_t)(ws+232);
	i8 v973 = *(i8*)(intptr_t)v972;
	i8 v974 = v973+(+24);
	i8 v975 = *(i8*)(intptr_t)v974;
	i8 v976 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v976 = v975;

	i8 v977 = (i8)(intptr_t)(ws+3936);
	i8 v978 = *(i8*)(intptr_t)v977;
	i1 v979 = (i1)+0;
	i8 v980 = (i8)+33;
	i8 v981 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v981)(v980, v979, v978);

	goto c02_00b5;

c02_00b9:;

	i8 v982 = (i8)+33;
	i8 v983 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v984;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v983)(&v984, v982);
	i8 v985 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v985 = v984;

c02_00b5:;

endsub:;
	*p965 = *(i8*)(intptr_t)(ws+3936);
}

// FreeSymbol workspace at ws+3896 length ws+8
void f60_FreeSymbol(i8 p986 /* symbol */) {
	*(i8*)(intptr_t)(ws+3896) = p986; /*symbol */

	i8 v987 = (i8)(intptr_t)(ws+232);
	i8 v988 = *(i8*)(intptr_t)v987;
	i8 v989 = (i8)(intptr_t)(ws+3896);
	i8 v990 = *(i8*)(intptr_t)v989;
	i8 v991 = v990+(+24);
	*(i8*)(intptr_t)v991 = v988;

	i8 v992 = (i8)(intptr_t)(ws+3896);
	i8 v993 = *(i8*)(intptr_t)v992;
	i8 v994 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v994 = v993;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewType workspace at ws+3904 length ws+8
void f61_AllocNewType(i8* p997 /* type */) {

	i8 v998 = (i8)(intptr_t)(ws+240);
	i8 v999 = *(i8*)(intptr_t)v998;
	i8 v1000 = (i8)+0;
	if (v999==v1000) goto c02_00be; else goto c02_00bd;

c02_00bd:;

	i8 v1001 = (i8)(intptr_t)(ws+240);
	i8 v1002 = *(i8*)(intptr_t)v1001;
	i8 v1003 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v1003 = v1002;

	i8 v1004 = (i8)(intptr_t)(ws+240);
	i8 v1005 = *(i8*)(intptr_t)v1004;
	i8 v1006 = v1005+(+40);
	i8 v1007 = *(i8*)(intptr_t)v1006;
	i8 v1008 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1008 = v1007;

	i8 v1009 = (i8)(intptr_t)(ws+3904);
	i8 v1010 = *(i8*)(intptr_t)v1009;
	i1 v1011 = (i1)+0;
	i8 v1012 = (i8)+54;
	i8 v1013 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v1013)(v1012, v1011, v1010);

	goto c02_00ba;

c02_00be:;

	i8 v1014 = (i8)+54;
	i8 v1015 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v1016;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1015)(&v1016, v1014);
	i8 v1017 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v1017 = v1016;

c02_00ba:;

endsub:;
	*p997 = *(i8*)(intptr_t)(ws+3904);
}

// FreeType workspace at ws+3896 length ws+8
void f62_FreeType(i8 p1018 /* type */) {
	*(i8*)(intptr_t)(ws+3896) = p1018; /*type */

	i8 v1019 = (i8)(intptr_t)(ws+240);
	i8 v1020 = *(i8*)(intptr_t)v1019;
	i8 v1021 = (i8)(intptr_t)(ws+3896);
	i8 v1022 = *(i8*)(intptr_t)v1021;
	i8 v1023 = v1022+(+40);
	*(i8*)(intptr_t)v1023 = v1020;

	i8 v1024 = (i8)(intptr_t)(ws+3896);
	i8 v1025 = *(i8*)(intptr_t)v1024;
	i8 v1026 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1026 = v1025;

endsub:;
}
	void f31_RawAlloc(i8* /* block */, i8 /* length */);
	void f33_Free(i8 /* block */);
	void f33_Free(i8 /* block */);
	void f67_PurgeAllFreeNodes(void);
	void f68_PurgeAllFreeInstructions(void);
	void f31_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0001[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// InternalAlloc workspace at ws+4112 length ws+16
void f63_InternalAlloc(i8* p1027 /* block */, i8 p1028 /* length */) {
	*(i8*)(intptr_t)(ws+4112) = p1028; /*length */

	i8 v1029 = (i8)(intptr_t)(ws+4112);
	i8 v1030 = *(i8*)(intptr_t)v1029;
	i8 v1031 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v1032;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1031)(&v1032, v1030);
	i8 v1033 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v1033 = v1032;

	i8 v1034 = (i8)(intptr_t)(ws+4120);
	i8 v1035 = *(i8*)(intptr_t)v1034;
	i8 v1036 = (i8)+0;
	if (v1035==v1036) goto c02_00c2; else goto c02_00c3;

c02_00c2:;

c02_00c6:;

	i8 v1037 = (i8)(intptr_t)(ws+232);
	i8 v1038 = *(i8*)(intptr_t)v1037;
	i8 v1039 = (i8)+0;
	if (v1038==v1039) goto c02_00c9; else goto c02_00c8;

c02_00c8:;

	i8 v1040 = (i8)(intptr_t)(ws+232);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	i8 v1042 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v1042 = v1041;

	i8 v1043 = (i8)(intptr_t)(ws+232);
	i8 v1044 = *(i8*)(intptr_t)v1043;
	i8 v1045 = v1044+(+24);
	i8 v1046 = *(i8*)(intptr_t)v1045;
	i8 v1047 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1047 = v1046;

	i8 v1048 = (i8)(intptr_t)(ws+4120);
	i8 v1049 = *(i8*)(intptr_t)v1048;
	i8 v1050 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1050)(v1049);

	goto c02_00c6;

c02_00c9:;

c02_00cc:;

	i8 v1051 = (i8)(intptr_t)(ws+240);
	i8 v1052 = *(i8*)(intptr_t)v1051;
	i8 v1053 = (i8)+0;
	if (v1052==v1053) goto c02_00cf; else goto c02_00ce;

c02_00ce:;

	i8 v1054 = (i8)(intptr_t)(ws+240);
	i8 v1055 = *(i8*)(intptr_t)v1054;
	i8 v1056 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v1056 = v1055;

	i8 v1057 = (i8)(intptr_t)(ws+240);
	i8 v1058 = *(i8*)(intptr_t)v1057;
	i8 v1059 = v1058+(+40);
	i8 v1060 = *(i8*)(intptr_t)v1059;
	i8 v1061 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1061 = v1060;

	i8 v1062 = (i8)(intptr_t)(ws+4120);
	i8 v1063 = *(i8*)(intptr_t)v1062;
	i8 v1064 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1064)(v1063);

	goto c02_00cc;

c02_00cf:;

	i8 v1065 = (i8)(intptr_t)(f67_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v1065)();

	i8 v1066 = (i8)(intptr_t)(f68_PurgeAllFreeInstructions);

	((void(*)(void))(intptr_t)v1066)();

	i8 v1067 = (i8)(intptr_t)(ws+4112);
	i8 v1068 = *(i8*)(intptr_t)v1067;
	i8 v1069 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v1070;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1069)(&v1070, v1068);
	i8 v1071 = (i8)(intptr_t)(ws+4120);
	*(i8*)(intptr_t)v1071 = v1070;

	i8 v1072 = (i8)(intptr_t)(ws+4120);
	i8 v1073 = *(i8*)(intptr_t)v1072;
	i8 v1074 = (i8)+0;
	if (v1073==v1074) goto c02_00d3; else goto c02_00d4;

c02_00d3:;

	i8 v1075 = (i8)(intptr_t)c02_s0001;
	i8 v1076 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1076)(v1075);

	i8 v1077 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1077)();

	goto c02_00d0;

c02_00d4:;

c02_00d0:;

	goto c02_00bf;

c02_00c3:;

c02_00bf:;

endsub:;
	*p1027 = *(i8*)(intptr_t)(ws+4120);
}
const i1 c02_s0002[] = { 0x70,0x61,0x72,0x61,0x6d,0 };
const i1 c02_s0003[] = { 0x76,0x38,0 };
const i1 c02_s0004[] = { 0x76,0x34,0 };
const i1 c02_s0005[] = { 0x76,0x32,0 };
const i1 c02_s0006[] = { 0x76,0x31,0 };
static data c02_ad5[] = { // registers

	{ .ptr = (void*)c02_s0002 },








	{ .i1 = { 0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0003 },








	{ .i1 = { 0x08,0x08,0x08,0x01,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0004 },








	{ .i1 = { 0x04,0x04,0x04,0x01,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0005 },








	{ .i1 = { 0x02,0x02,0x02,0x01,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0006 },





	{ .i1 = { 0x01,0x01,0x01,0x01}},
};
static data c02_ad6[] = { // lexer_ctype








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
const i1 c02_s0007[] = { 0x40,0x61,0x6c,0x69,0x61,0x73,0 };
const i1 c02_s0008[] = { 0x40,0x61,0x73,0x6d,0 };
const i1 c02_s0009[] = { 0x40,0x61,0x74,0 };
const i1 c02_s000a[] = { 0x40,0x62,0x79,0x74,0x65,0x73,0x6f,0x66,0 };
const i1 c02_s000b[] = { 0x40,0x64,0x65,0x63,0x6c,0 };
const i1 c02_s000c[] = { 0x40,0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c02_s000d[] = { 0x40,0x69,0x6e,0x64,0x65,0x78,0x6f,0x66,0 };
const i1 c02_s000e[] = { 0x40,0x69,0x6d,0x70,0x6c,0 };
const i1 c02_s000f[] = { 0x40,0x73,0x69,0x7a,0x65,0x6f,0x66,0 };
const i1 c02_s0010[] = { 0x40,0x6e,0x65,0x78,0x74,0 };
const i1 c02_s0011[] = { 0x40,0x70,0x72,0x65,0x76,0 };
const i1 c02_s0012[] = { 0x61,0x6e,0x64,0 };
const i1 c02_s0013[] = { 0x61,0x73,0 };
const i1 c02_s0014[] = { 0x62,0x72,0x65,0x61,0x6b,0 };
const i1 c02_s0015[] = { 0x63,0x61,0x73,0x65,0 };
const i1 c02_s0016[] = { 0x63,0x6f,0x6e,0x73,0x74,0 };
const i1 c02_s0017[] = { 0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0 };
const i1 c02_s0018[] = { 0x65,0x6c,0x73,0x65,0 };
const i1 c02_s0019[] = { 0x65,0x6c,0x73,0x65,0x69,0x66,0 };
const i1 c02_s001a[] = { 0x65,0x6e,0x64,0 };
const i1 c02_s001b[] = { 0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c02_s001c[] = { 0x69,0x66,0 };
const i1 c02_s001d[] = { 0x69,0x73,0 };
const i1 c02_s001e[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0 };
const i1 c02_s001f[] = { 0x69,0x6e,0x74,0 };
const i1 c02_s0020[] = { 0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
const i1 c02_s0021[] = { 0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0 };
const i1 c02_s0022[] = { 0x6c,0x6f,0x6f,0x70,0 };
const i1 c02_s0023[] = { 0x6e,0x6f,0x74,0 };
const i1 c02_s0024[] = { 0x6f,0x72,0 };
const i1 c02_s0025[] = { 0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c02_s0026[] = { 0x72,0x65,0x74,0x75,0x72,0x6e,0 };
const i1 c02_s0027[] = { 0x73,0x75,0x62,0 };
const i1 c02_s0028[] = { 0x74,0x68,0x65,0x6e,0 };
const i1 c02_s0029[] = { 0x74,0x79,0x70,0x65,0x64,0x65,0x66,0 };
const i1 c02_s002a[] = { 0x76,0x61,0x72,0 };
const i1 c02_s002b[] = { 0x77,0x68,0x65,0x6e,0 };
const i1 c02_s002c[] = { 0x77,0x68,0x69,0x6c,0x65,0 };
static data c02_ad7[] = { // keyword_names

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

	{ .ptr = (void*)c02_s0029 },

	{ .ptr = (void*)c02_s002a },

	{ .ptr = (void*)c02_s002b },

	{ .ptr = (void*)c02_s002c },

};
static data c02_ad8[] = { // keyword_ids








	{ .i1 = { 0x43,0x01,0x23,0x24,0x2b,0x0b,0x3e,0x2a}},








	{ .i1 = { 0x28,0x3c,0x3d,0x2e,0x3a,0x03,0x40,0x07}},








	{ .i1 = { 0x3f,0x09,0x25,0x0a,0x0b,0x0c,0x41,0xff}},








	{ .i1 = { 0x26,0x2c,0x44,0x0d,0x0f,0x2f,0x14,0x15}},







	{ .i1 = { 0x19,0x1a,0x27,0x1c,0x42,0x1d}},
};
const i1 c02_s002d[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s002e[] = { 0x3c,0x65,0x6f,0x66,0x3e,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s002f[] = { 0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0030[] = { 0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);

// StartError workspace at ws+4144 length ws+0
void f69_StartError(void) {

	i8 v1086 = (i8)(intptr_t)c02_s002d;
	i8 v1087 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1087)(v1086);

	i8 v1088 = (i8)(intptr_t)(ws+256);
	i8 v1089 = *(i8*)(intptr_t)v1088;
	i8 v1090 = (i8)+0;
	if (v1089==v1090) goto c02_00dc; else goto c02_00dd;

c02_00dc:;

	i8 v1091 = (i8)(intptr_t)c02_s002e;
	i8 v1092 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1092)(v1091);

	goto c02_00d9;

c02_00dd:;

	i8 v1093 = (i8)(intptr_t)(ws+256);
	i8 v1094 = *(i8*)(intptr_t)v1093;
	i8 v1095 = v1094+(+8);
	i8 v1096 = *(i8*)(intptr_t)v1095;
	i8 v1097 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1097)(v1096);

	i8 v1098 = (i8)(intptr_t)c02_s002f;
	i8 v1099 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1099)(v1098);

	i8 v1100 = (i8)(intptr_t)(ws+256);
	i8 v1101 = *(i8*)(intptr_t)v1100;
	i8 v1102 = v1101+(+16);
	i2 v1103 = *(i2*)(intptr_t)v1102;
	i8 v1104 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v1104)(v1103);

c02_00d9:;

	i8 v1105 = (i8)(intptr_t)c02_s0030;
	i8 v1106 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1106)(v1105);

endsub:;
}
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+4144 length ws+0
void f70_EndError(void) {

	i8 v1107 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1107)();

	i8 v1108 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1108)();

endsub:;
}
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// SimpleError workspace at ws+4136 length ws+8
void f71_SimpleError(i8 p1109 /* message */) {
	*(i8*)(intptr_t)(ws+4136) = p1109; /*message */

	i8 v1110 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1110)();

	i8 v1111 = (i8)(intptr_t)(ws+4136);
	i8 v1112 = *(i8*)(intptr_t)v1111;
	i8 v1113 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1113)(v1112);

	i8 v1114 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1114)();

endsub:;
}
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);

// LexerAddIncludePath workspace at ws+3728 length ws+16
void f72_LexerAddIncludePath(i8 p1115 /* path */) {
	*(i8*)(intptr_t)(ws+3728) = p1115; /*path */

	i8 v1116 = (i8)+16;
	i8 v1117 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v1118;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1117)(&v1118, v1116);
	i8 v1119 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v1119 = v1118;

	i8 v1120 = (i8)(intptr_t)(ws+248);
	i8 v1121 = *(i8*)(intptr_t)v1120;
	i8 v1122 = (i8)(intptr_t)(ws+3736);
	i8 v1123 = *(i8*)(intptr_t)v1122;
	*(i8*)(intptr_t)v1123 = v1121;

	i8 v1124 = (i8)(intptr_t)(ws+3728);
	i8 v1125 = *(i8*)(intptr_t)v1124;
	i8 v1126 = (i8)(intptr_t)(ws+3736);
	i8 v1127 = *(i8*)(intptr_t)v1126;
	i8 v1128 = v1127+(+8);
	*(i8*)(intptr_t)v1128 = v1125;

	i8 v1129 = (i8)(intptr_t)(ws+3736);
	i8 v1130 = *(i8*)(intptr_t)v1129;
	i8 v1131 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1131 = v1130;

endsub:;
}
const i1 c02_s0031[] = { 0x20,0x20,0 };
	void f11_print(i8 /* ptr */);

// LexerPrintSpaces workspace at ws+3776 length ws+1
void f73_LexerPrintSpaces(void) {

	i8 v1134 = (i8)(intptr_t)(ws+924);
	i1 v1135 = *(i1*)(intptr_t)v1134;
	i8 v1136 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v1136 = v1135;

c02_00e0:;

	i8 v1137 = (i8)(intptr_t)(ws+3776);
	i1 v1138 = *(i1*)(intptr_t)v1137;
	i1 v1139 = (i1)+0;
	if (v1138==v1139) goto c02_00e3; else goto c02_00e2;

c02_00e2:;

	i8 v1140 = (i8)(intptr_t)c02_s0031;
	i8 v1141 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1141)(v1140);

	i8 v1142 = (i8)(intptr_t)(ws+3776);
	i1 v1143 = *(i1*)(intptr_t)v1142;
	i1 v1144 = v1143+(-1);
	i8 v1145 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v1145 = v1144;

	goto c02_00e0;

c02_00e3:;

endsub:;
}
	void f42_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f46_FCBSeek(i4 /* pos */, i8 /* fcb */);

// lexer_i_open workspace at ws+3776 length ws+9
void f74_lexer_i_open(i1* p1146 /* result */, i8 p1147 /* file */) {
	*(i8*)(intptr_t)(ws+3776) = p1147; /*file */

	i8 v1148 = (i8)(intptr_t)(ws+400);
	i8 v1149 = (i8)(intptr_t)(ws+3776);
	i8 v1150 = *(i8*)(intptr_t)v1149;
	i8 v1151 = v1150+(+8);
	i8 v1152 = *(i8*)(intptr_t)v1151;
	i8 v1153 = (i8)(intptr_t)(f42_FCBOpenIn);
	i1 v1154;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1153)(&v1154, v1152, v1148);
	i1 v1155 = (i1)+0;
	if (v1154==v1155) goto c02_00e7; else goto c02_00e8;

c02_00e7:;

	i8 v1156 = (i8)(intptr_t)(ws+400);
	i8 v1157 = (i8)(intptr_t)(ws+3776);
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = v1158+(+20);
	i4 v1160 = *(i4*)(intptr_t)v1159;
	i8 v1161 = (i8)(intptr_t)(f46_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1161)(v1160, v1156);

	i1 v1162 = (i1)+0;
	i8 v1163 = (i8)(intptr_t)(ws+3784);
	*(i1*)(intptr_t)v1163 = v1162;

	goto c02_00e4;

c02_00e8:;

	i1 v1164 = (i1)+1;
	i8 v1165 = (i8)(intptr_t)(ws+3784);
	*(i1*)(intptr_t)v1165 = v1164;

c02_00e4:;

endsub:;
	*p1146 = *(i1*)(intptr_t)(ws+3784);
}
	void f47_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f45_FCBClose(i1* /* errno */, i8 /* fcb */);

// lexer_i_close workspace at ws+3776 length ws+9
void f75_lexer_i_close(i8 p1166 /* file */) {
	*(i8*)(intptr_t)(ws+3776) = p1166; /*file */

	i8 v1167 = (i8)(intptr_t)(ws+400);
	i8 v1168 = (i8)(intptr_t)(f47_FCBPos);
	i4 v1169;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v1168)(&v1169, v1167);
	i8 v1170 = (i8)(intptr_t)(ws+3776);
	i8 v1171 = *(i8*)(intptr_t)v1170;
	i8 v1172 = v1171+(+20);
	*(i4*)(intptr_t)v1172 = v1169;

	i8 v1173 = (i8)(intptr_t)(ws+400);
	i8 v1174 = (i8)(intptr_t)(f45_FCBClose);
	i1 v1175;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1174)(&v1175, v1173);
	i8 v1176 = (i8)(intptr_t)(ws+3784);
	*(i1*)(intptr_t)v1176 = v1175;

endsub:;
}
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f75_lexer_i_close(i8 /* file */);
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f74_lexer_i_open(i1* /* result */, i8 /* file */);
	void f73_LexerPrintSpaces(void);
const i1 c02_s0032[] = { 0x3e,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f33_Free(i8 /* block */);
	void f69_StartError(void);
const i1 c02_s0033[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0034[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// LexerIncludeFile workspace at ws+3736 length ws+40
void f76_LexerIncludeFile(i8 p1177 /* path */) {
	*(i8*)(intptr_t)(ws+3736) = p1177; /*path */

	i8 v1178 = (i8)+24;
	i8 v1179 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v1180;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1179)(&v1180, v1178);
	i8 v1181 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v1181 = v1180;

	i8 v1182 = (i8)(intptr_t)(ws+256);
	i8 v1183 = *(i8*)(intptr_t)v1182;
	i8 v1184 = (i8)(intptr_t)(ws+3744);
	i8 v1185 = *(i8*)(intptr_t)v1184;
	*(i8*)(intptr_t)v1185 = v1183;

	i2 v1186 = (i2)+1;
	i8 v1187 = (i8)(intptr_t)(ws+3744);
	i8 v1188 = *(i8*)(intptr_t)v1187;
	i8 v1189 = v1188+(+16);
	*(i2*)(intptr_t)v1189 = v1186;

	i8 v1190 = (i8)(intptr_t)(ws+256);
	i8 v1191 = *(i8*)(intptr_t)v1190;
	i8 v1192 = (i8)+0;
	if (v1191==v1192) goto c02_00ed; else goto c02_00ec;

c02_00ec:;

	i8 v1193 = (i8)(intptr_t)(ws+256);
	i8 v1194 = *(i8*)(intptr_t)v1193;
	i8 v1195 = (i8)(intptr_t)(f75_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1195)(v1194);

	goto c02_00e9;

c02_00ed:;

c02_00e9:;

	i8 v1196 = (i8)(intptr_t)(ws+248);
	i8 v1197 = *(i8*)(intptr_t)v1196;
	i8 v1198 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v1198 = v1197;

	i8 v1199 = (i8)(intptr_t)(ws+3736);
	i8 v1200 = *(i8*)(intptr_t)v1199;
	i8 v1201 = (i8)(intptr_t)(f28_StrLen);
	i8 v1202;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1201)(&v1202, v1200);
	i8 v1203 = (i8)(intptr_t)(ws+3760);
	*(i8*)(intptr_t)v1203 = v1202;

c02_00f0:;

	i8 v1204 = (i8)(intptr_t)(ws+3752);
	i8 v1205 = *(i8*)(intptr_t)v1204;
	i8 v1206 = (i8)+0;
	if (v1205==v1206) goto c02_00f3; else goto c02_00f2;

c02_00f2:;

	i8 v1207 = (i8)(intptr_t)(ws+3752);
	i8 v1208 = *(i8*)(intptr_t)v1207;
	i8 v1209 = v1208+(+8);
	i8 v1210 = *(i8*)(intptr_t)v1209;
	i8 v1211 = (i8)(intptr_t)(f28_StrLen);
	i8 v1212;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1211)(&v1212, v1210);
	i8 v1213 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v1213 = v1212;

	i8 v1214 = (i8)(intptr_t)(ws+3760);
	i8 v1215 = *(i8*)(intptr_t)v1214;
	i8 v1216 = (i8)(intptr_t)(ws+3768);
	i8 v1217 = *(i8*)(intptr_t)v1216;
	i8 v1218 = v1215+v1217;
	i8 v1219 = v1218+(+1);
	i8 v1220 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v1221;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1220)(&v1221, v1219);
	i8 v1222 = (i8)(intptr_t)(ws+3744);
	i8 v1223 = *(i8*)(intptr_t)v1222;
	i8 v1224 = v1223+(+8);
	*(i8*)(intptr_t)v1224 = v1221;

	i8 v1225 = (i8)(intptr_t)(ws+3752);
	i8 v1226 = *(i8*)(intptr_t)v1225;
	i8 v1227 = v1226+(+8);
	i8 v1228 = *(i8*)(intptr_t)v1227;
	i8 v1229 = (i8)(intptr_t)(ws+3768);
	i8 v1230 = *(i8*)(intptr_t)v1229;
	i8 v1231 = (i8)(intptr_t)(ws+3744);
	i8 v1232 = *(i8*)(intptr_t)v1231;
	i8 v1233 = v1232+(+8);
	i8 v1234 = *(i8*)(intptr_t)v1233;
	i8 v1235 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1235)(v1234, v1230, v1228);

	i8 v1236 = (i8)(intptr_t)(ws+3736);
	i8 v1237 = *(i8*)(intptr_t)v1236;
	i8 v1238 = (i8)(intptr_t)(ws+3760);
	i8 v1239 = *(i8*)(intptr_t)v1238;
	i8 v1240 = v1239+(+1);
	i8 v1241 = (i8)(intptr_t)(ws+3744);
	i8 v1242 = *(i8*)(intptr_t)v1241;
	i8 v1243 = v1242+(+8);
	i8 v1244 = *(i8*)(intptr_t)v1243;
	i8 v1245 = (i8)(intptr_t)(ws+3768);
	i8 v1246 = *(i8*)(intptr_t)v1245;
	i8 v1247 = v1244+v1246;
	i8 v1248 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1248)(v1247, v1240, v1237);

	i8 v1249 = (i8)(intptr_t)(ws+3744);
	i8 v1250 = *(i8*)(intptr_t)v1249;
	i8 v1251 = (i8)(intptr_t)(f74_lexer_i_open);
	i1 v1252;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1251)(&v1252, v1250);
	i1 v1253 = (i1)+0;
	if (v1252==v1253) goto c02_00f7; else goto c02_00f8;

c02_00f7:;

	i8 v1254 = (i8)(intptr_t)(ws+924);
	i1 v1255 = *(i1*)(intptr_t)v1254;
	i1 v1256 = v1255+(+1);
	i8 v1257 = (i8)(intptr_t)(ws+924);
	*(i1*)(intptr_t)v1257 = v1256;

	i8 v1258 = (i8)(intptr_t)(f73_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1258)();

	i8 v1259 = (i8)(intptr_t)c02_s0032;
	i8 v1260 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1260)(v1259);

	i8 v1261 = (i8)(intptr_t)(ws+3744);
	i8 v1262 = *(i8*)(intptr_t)v1261;
	i8 v1263 = v1262+(+8);
	i8 v1264 = *(i8*)(intptr_t)v1263;
	i8 v1265 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1265)(v1264);

	i8 v1266 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1266)();

	i8 v1267 = (i8)(intptr_t)(ws+3744);
	i8 v1268 = *(i8*)(intptr_t)v1267;
	i8 v1269 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1269 = v1268;

	goto endsub;

c02_00f8:;

c02_00f4:;

	i8 v1270 = (i8)(intptr_t)(ws+3744);
	i8 v1271 = *(i8*)(intptr_t)v1270;
	i8 v1272 = v1271+(+8);
	i8 v1273 = *(i8*)(intptr_t)v1272;
	i8 v1274 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1274)(v1273);

	i8 v1275 = (i8)(intptr_t)(ws+3752);
	i8 v1276 = *(i8*)(intptr_t)v1275;
	i8 v1277 = *(i8*)(intptr_t)v1276;
	i8 v1278 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v1278 = v1277;

	goto c02_00f0;

c02_00f3:;

	i8 v1279 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1279)();

	i8 v1280 = (i8)(intptr_t)c02_s0033;
	i8 v1281 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1281)(v1280);

	i8 v1282 = (i8)(intptr_t)(ws+3736);
	i8 v1283 = *(i8*)(intptr_t)v1282;
	i8 v1284 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1284)(v1283);

	i8 v1285 = (i8)(intptr_t)c02_s0034;
	i8 v1286 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1286)(v1285);

	i8 v1287 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1287)();

endsub:;
}

// lexer_i_ctype workspace at ws+3744 length ws+3
void f78_lexer_i_ctype(i1* p1289 /* type */, i1* p1290 /* token */, i1 p1291 /* c */) {
	*(i1*)(intptr_t)(ws+3744) = p1291; /*c */

	i8 v1292 = (i8)(intptr_t)(ws+3744);
	i1 v1293 = *(i1*)(intptr_t)v1292;
	i1 v1294 = (i1)+33;
	if (v1293<v1294) goto c02_00ff; else goto c02_0100;

c02_0100:;

	i1 v1295 = (i1)+127;
	i8 v1296 = (i8)(intptr_t)(ws+3744);
	i1 v1297 = *(i1*)(intptr_t)v1296;
	if (v1295<v1297) goto c02_00ff; else goto c02_00fe;

c02_00fe:;

	i8 v1298 = (i8)(intptr_t)(((i1*)c02_ad6+0));
	i8 v1299 = (i8)(intptr_t)(ws+3744);
	i1 v1300 = *(i1*)(intptr_t)v1299;
	i1 v1301 = v1300+(-33);
	i8 v1302 = v1301;
	i8 v1303 = v1298+v1302;
	i1 v1304 = *(i1*)(intptr_t)v1303;
	i8 v1305 = (i8)(intptr_t)(ws+3745);
	*(i1*)(intptr_t)v1305 = v1304;

	i8 v1306 = (i8)(intptr_t)(ws+3745);
	i1 v1307 = *(i1*)(intptr_t)v1306;
	i1 v1308 = v1307&(+128);
	i1 v1309 = (i1)+0;
	if (v1308==v1309) goto c02_0105; else goto c02_0104;

c02_0104:;

	i8 v1310 = (i8)(intptr_t)(ws+3745);
	i1 v1311 = *(i1*)(intptr_t)v1310;
	i1 v1312 = v1311&(-129);
	i8 v1313 = (i8)(intptr_t)(ws+3746);
	*(i1*)(intptr_t)v1313 = v1312;

	i1 v1314 = (i1)+128;
	i8 v1315 = (i8)(intptr_t)(ws+3745);
	*(i1*)(intptr_t)v1315 = v1314;

	goto c02_0101;

c02_0105:;

c02_0101:;

	goto c02_00f9;

c02_00ff:;

	i1 v1316 = (i1)+0;
	i8 v1317 = (i8)(intptr_t)(ws+3745);
	*(i1*)(intptr_t)v1317 = v1316;

	i1 v1318 = (i1)+0;
	i8 v1319 = (i8)(intptr_t)(ws+3746);
	*(i1*)(intptr_t)v1319 = v1318;

c02_00f9:;

endsub:;
	*p1290 = *(i1*)(intptr_t)(ws+3746);
	*p1289 = *(i1*)(intptr_t)(ws+3745);
}
	void f50_FCBGetChar(i1* /* c */, i8 /* fcb */);
	void f75_lexer_i_close(i8 /* file */);
	void f33_Free(i8 /* block */);
	void f73_LexerPrintSpaces(void);
const i1 c02_s0035[] = { 0x3c,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f74_lexer_i_open(i1* /* result */, i8 /* file */);
const i1 c02_s0036[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };
	void f71_SimpleError(i8 /* message */);

// lexer_i_getchar workspace at ws+3752 length ws+16
void f79_lexer_i_getchar(i1* p1320 /* c */) {

	i8 v1321 = (i8)(intptr_t)(ws+264);
	i1 v1322 = *(i1*)(intptr_t)v1321;
	i1 v1323 = (i1)+0;
	if (v1322==v1323) goto c02_010a; else goto c02_0109;

c02_0109:;

	i8 v1324 = (i8)(intptr_t)(ws+264);
	i1 v1325 = *(i1*)(intptr_t)v1324;
	i8 v1326 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v1326 = v1325;

	i1 v1327 = (i1)+0;
	i8 v1328 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1328 = v1327;

	goto endsub;

c02_010a:;

c02_0106:;

c02_010b:;

	i8 v1329 = (i8)(intptr_t)(ws+256);
	i8 v1330 = *(i8*)(intptr_t)v1329;
	i8 v1331 = (i8)+0;
	if (v1330==v1331) goto c02_0110; else goto c02_0111;

c02_0110:;

	i1 v1332 = (i1)+0;
	i8 v1333 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v1333 = v1332;

	goto c02_010c;

c02_0111:;

c02_010d:;

	i8 v1334 = (i8)(intptr_t)(ws+256);
	i8 v1335 = *(i8*)(intptr_t)v1334;
	i8 v1336 = (i8)(intptr_t)(ws+3760);
	*(i8*)(intptr_t)v1336 = v1335;

	i8 v1337 = (i8)(intptr_t)(ws+400);
	i8 v1338 = (i8)(intptr_t)(f50_FCBGetChar);
	i1 v1339;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1338)(&v1339, v1337);
	i8 v1340 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v1340 = v1339;

	i8 v1341 = (i8)(intptr_t)(ws+3752);
	i1 v1342 = *(i1*)(intptr_t)v1341;
	i1 v1343 = (i1)+26;
	if (v1342==v1343) goto c02_0115; else goto c02_0116;

c02_0115:;

	i1 v1344 = (i1)+0;
	i8 v1345 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v1345 = v1344;

	goto c02_0112;

c02_0116:;

c02_0112:;

	i8 v1346 = (i8)(intptr_t)(ws+3752);
	i1 v1347 = *(i1*)(intptr_t)v1346;
	i1 v1348 = (i1)+0;
	if (v1347==v1348) goto c02_011b; else goto c02_011a;

c02_011a:;

	goto c02_010c;

c02_011b:;

c02_0117:;

	i8 v1349 = (i8)(intptr_t)(ws+3760);
	i8 v1350 = *(i8*)(intptr_t)v1349;
	i8 v1351 = *(i8*)(intptr_t)v1350;
	i8 v1352 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1352 = v1351;

	i8 v1353 = (i8)(intptr_t)(ws+3760);
	i8 v1354 = *(i8*)(intptr_t)v1353;
	i8 v1355 = (i8)(intptr_t)(f75_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1355)(v1354);

	i8 v1356 = (i8)(intptr_t)(ws+3760);
	i8 v1357 = *(i8*)(intptr_t)v1356;
	i8 v1358 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1358)(v1357);

	i8 v1359 = (i8)(intptr_t)(ws+256);
	i8 v1360 = *(i8*)(intptr_t)v1359;
	i8 v1361 = (i8)+0;
	if (v1360==v1361) goto c02_0120; else goto c02_011f;

c02_011f:;

	i8 v1362 = (i8)(intptr_t)(ws+924);
	i1 v1363 = *(i1*)(intptr_t)v1362;
	i1 v1364 = v1363+(-1);
	i8 v1365 = (i8)(intptr_t)(ws+924);
	*(i1*)(intptr_t)v1365 = v1364;

	i8 v1366 = (i8)(intptr_t)(f73_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1366)();

	i8 v1367 = (i8)(intptr_t)c02_s0035;
	i8 v1368 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1368)(v1367);

	i8 v1369 = (i8)(intptr_t)(ws+256);
	i8 v1370 = *(i8*)(intptr_t)v1369;
	i8 v1371 = v1370+(+8);
	i8 v1372 = *(i8*)(intptr_t)v1371;
	i8 v1373 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1373)(v1372);

	i8 v1374 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1374)();

	i8 v1375 = (i8)(intptr_t)(ws+256);
	i8 v1376 = *(i8*)(intptr_t)v1375;
	i8 v1377 = (i8)(intptr_t)(f74_lexer_i_open);
	i1 v1378;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1377)(&v1378, v1376);
	i1 v1379 = (i1)+0;
	if (v1378==v1379) goto c02_0125; else goto c02_0124;

c02_0124:;

	i8 v1380 = (i8)(intptr_t)c02_s0036;
	i8 v1381 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v1381)(v1380);

	goto c02_0121;

c02_0125:;

c02_0121:;

	goto c02_011c;

c02_0120:;

c02_011c:;

	goto c02_010b;

c02_010c:;

endsub:;
	*p1320 = *(i1*)(intptr_t)(ws+3752);
}
	void f69_StartError(void);
const i1 c02_s0037[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f18_print_hex_i8(i1 /* value */);
	void f70_EndError(void);

// lexer_i_unparseable workspace at ws+3728 length ws+1
void f80_lexer_i_unparseable(i1 p1382 /* c */) {
	*(i1*)(intptr_t)(ws+3728) = p1382; /*c */

	i8 v1383 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1383)();

	i8 v1384 = (i8)(intptr_t)c02_s0037;
	i8 v1385 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1385)(v1384);

	i8 v1386 = (i8)(intptr_t)(ws+3728);
	i1 v1387 = *(i1*)(intptr_t)v1386;
	i8 v1388 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v1388)(v1387);

	i8 v1389 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1389)();

endsub:;
}
	void f79_lexer_i_getchar(i1* /* c */);

// lexer_i_skipwhitespace workspace at ws+3736 length ws+1
void f81_lexer_i_skipwhitespace(void) {

c02_0126:;

	i8 v1390 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1391;

	((void(*)(i1* /* c */))(intptr_t)v1390)(&v1391);
	i8 v1392 = (i8)(intptr_t)(ws+3736);
	*(i1*)(intptr_t)v1392 = v1391;

	i8 v1393 = (i8)(intptr_t)(ws+3736);
	i1 v1394 = *(i1*)(intptr_t)v1393;

	if (v1394 != +32) goto c02_0129;

	goto c02_0128;

c02_0129:;

	if (v1394 != +13) goto c02_012a;

	goto c02_0128;

c02_012a:;

	if (v1394 != +10) goto c02_012b;

	i8 v1395 = (i8)(intptr_t)(ws+256);
	i8 v1396 = *(i8*)(intptr_t)v1395;
	i8 v1397 = v1396+(+16);
	i2 v1398 = *(i2*)(intptr_t)v1397;
	i2 v1399 = v1398+(+1);
	i8 v1400 = (i8)(intptr_t)(ws+256);
	i8 v1401 = *(i8*)(intptr_t)v1400;
	i8 v1402 = v1401+(+16);
	*(i2*)(intptr_t)v1402 = v1399;

	goto c02_0128;

c02_012b:;

	if (v1394 != +9) goto c02_012c;

	goto c02_0128;

c02_012c:;

	goto c02_0127;

c02_0128:;


	goto c02_0126;

c02_0127:;

	i8 v1403 = (i8)(intptr_t)(ws+3736);
	i1 v1404 = *(i1*)(intptr_t)v1403;
	i8 v1405 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1405 = v1404;

endsub:;
}
	void f79_lexer_i_getchar(i1* /* c */);
	void f78_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f69_StartError(void);
const i1 c02_s0038[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// lexer_i_read_identifier workspace at ws+3728 length ws+3
void f82_lexer_i_read_identifier(void) {

c02_012d:;

	i8 v1406 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1407;

	((void(*)(i1* /* c */))(intptr_t)v1406)(&v1407);
	i8 v1408 = (i8)(intptr_t)(ws+3728);
	*(i1*)(intptr_t)v1408 = v1407;

	i8 v1409 = (i8)(intptr_t)(ws+3728);
	i1 v1410 = *(i1*)(intptr_t)v1409;
	i8 v1411 = (i8)(intptr_t)(f78_lexer_i_ctype);
	i1 v1412;
	i1 v1413;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1411)(&v1412, &v1413, v1410);

	i8 v1414 = (i8)(intptr_t)(ws+3730);
	*(i1*)(intptr_t)v1414 = v1413;

	i8 v1415 = (i8)(intptr_t)(ws+3729);
	*(i1*)(intptr_t)v1415 = v1412;

	i8 v1416 = (i8)(intptr_t)(ws+3729);
	i1 v1417 = *(i1*)(intptr_t)v1416;
	i1 v1418 = v1417&(+32);
	i1 v1419 = (i1)+0;
	if (v1418==v1419) goto c02_0133; else goto c02_0132;

c02_0132:;

	i8 v1420 = (i8)(intptr_t)(ws+3728);
	i1 v1421 = *(i1*)(intptr_t)v1420;
	i8 v1422 = (i8)(intptr_t)(ws+265);
	i8 v1423 = (i8)(intptr_t)(ws+393);
	i1 v1424 = *(i1*)(intptr_t)v1423;
	i8 v1425 = v1424;
	i8 v1426 = v1422+v1425;
	*(i1*)(intptr_t)v1426 = v1421;

	i8 v1427 = (i8)(intptr_t)(ws+393);
	i1 v1428 = *(i1*)(intptr_t)v1427;
	i1 v1429 = v1428+(+1);
	i8 v1430 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1430 = v1429;

	i8 v1431 = (i8)(intptr_t)(ws+393);
	i1 v1432 = *(i1*)(intptr_t)v1431;
	i1 v1433 = (i1)+128;
	if (v1432==v1433) goto c02_0137; else goto c02_0138;

c02_0137:;

	i8 v1434 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1434)();

	i8 v1435 = (i8)(intptr_t)c02_s0038;
	i8 v1436 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1436)(v1435);

	i8 v1437 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1437)();

	goto c02_0134;

c02_0138:;

c02_0134:;

	goto c02_012f;

c02_0133:;

	i8 v1438 = (i8)(intptr_t)(ws+3728);
	i1 v1439 = *(i1*)(intptr_t)v1438;
	i8 v1440 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1440 = v1439;

	goto c02_012e;

c02_012f:;

	goto c02_012d;

c02_012e:;

	i1 v1441 = (i1)+0;
	i8 v1442 = (i8)(intptr_t)(ws+265);
	i8 v1443 = (i8)(intptr_t)(ws+393);
	i1 v1444 = *(i1*)(intptr_t)v1443;
	i8 v1445 = v1444;
	i8 v1446 = v1442+v1445;
	*(i1*)(intptr_t)v1446 = v1441;

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// lexer_i_match_keyword workspace at ws+3728 length ws+2
void f83_lexer_i_match_keyword(i1* p1447 /* token */) {

	i1 v1448 = (i1)+0;
	i8 v1449 = (i8)(intptr_t)(ws+3729);
	*(i1*)(intptr_t)v1449 = v1448;

c02_013b:;

	i8 v1450 = (i8)(intptr_t)(ws+3729);
	i1 v1451 = *(i1*)(intptr_t)v1450;
	i1 v1452 = (i1)+38;
	if (v1451==v1452) goto c02_013e; else goto c02_013d;

c02_013d:;

	i8 v1453 = (i8)(intptr_t)(ws+265);
	i8 v1454 = (i8)(intptr_t)(((i1*)c02_ad7+0));
	i8 v1455 = (i8)(intptr_t)(ws+3729);
	i1 v1456 = *(i1*)(intptr_t)v1455;
	i8 v1457 = v1456;
	i1 v1458 = (i1)+3;
	i8 v1459 = ((i8)v1457)<<v1458;
	i8 v1460 = v1454+v1459;
	i8 v1461 = *(i8*)(intptr_t)v1460;
	i8 v1462 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1463;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1462)(&v1463, v1461, v1453);
	i1 v1464 = (i1)+0;
	if (v1463==v1464) goto c02_0142; else goto c02_0143;

c02_0142:;

	i8 v1465 = (i8)(intptr_t)(((i1*)c02_ad8+0));
	i8 v1466 = (i8)(intptr_t)(ws+3729);
	i1 v1467 = *(i1*)(intptr_t)v1466;
	i8 v1468 = v1467;
	i8 v1469 = v1465+v1468;
	i1 v1470 = *(i1*)(intptr_t)v1469;
	i8 v1471 = (i8)(intptr_t)(ws+3728);
	*(i1*)(intptr_t)v1471 = v1470;

	goto endsub;

c02_0143:;

c02_013f:;

	i8 v1472 = (i8)(intptr_t)(ws+3729);
	i1 v1473 = *(i1*)(intptr_t)v1472;
	i1 v1474 = v1473+(+1);
	i8 v1475 = (i8)(intptr_t)(ws+3729);
	*(i1*)(intptr_t)v1475 = v1474;

	goto c02_013b;

c02_013e:;

	i1 v1476 = (i1)+33;
	i8 v1477 = (i8)(intptr_t)(ws+3728);
	*(i1*)(intptr_t)v1477 = v1476;

endsub:;
	*p1447 = *(i1*)(intptr_t)(ws+3728);
}
	void f79_lexer_i_getchar(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f78_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f26_ToLower(i1* /* cc */, i1 /* c */);
	void f78_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f69_StartError(void);
const i1 c02_s0039[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// lexer_i_read_number workspace at ws+3736 length ws+7
void f84_lexer_i_read_number(void) {

	i4 v1478 = (i4)+0;
	i8 v1479 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1479 = v1478;

	i4 v1480 = (i4)+10;
	i8 v1481 = (i8)(intptr_t)(ws+3736);
	*(i4*)(intptr_t)v1481 = v1480;

	i8 v1482 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1483;

	((void(*)(i1* /* c */))(intptr_t)v1482)(&v1483);
	i8 v1484 = (i8)(intptr_t)(ws+3742);
	*(i1*)(intptr_t)v1484 = v1483;

	i8 v1485 = (i8)(intptr_t)(ws+3742);
	i1 v1486 = *(i1*)(intptr_t)v1485;
	i1 v1487 = (i1)+48;
	if (v1486==v1487) goto c02_0147; else goto c02_0148;

c02_0147:;

	i8 v1488 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1489;

	((void(*)(i1* /* c */))(intptr_t)v1488)(&v1489);
	i8 v1490 = (i8)(intptr_t)(ws+3742);
	*(i1*)(intptr_t)v1490 = v1489;

	i8 v1491 = (i8)(intptr_t)(ws+3742);
	i1 v1492 = *(i1*)(intptr_t)v1491;

	if (v1492 != +98) goto c02_014a;

	i4 v1493 = (i4)+2;
	i8 v1494 = (i8)(intptr_t)(ws+3736);
	*(i4*)(intptr_t)v1494 = v1493;

	goto c02_0149;

c02_014a:;

	if (v1492 != +111) goto c02_014b;

	i4 v1495 = (i4)+8;
	i8 v1496 = (i8)(intptr_t)(ws+3736);
	*(i4*)(intptr_t)v1496 = v1495;

	goto c02_0149;

c02_014b:;

	if (v1492 != +100) goto c02_014c;

	i4 v1497 = (i4)+10;
	i8 v1498 = (i8)(intptr_t)(ws+3736);
	*(i4*)(intptr_t)v1498 = v1497;

	goto c02_0149;

c02_014c:;

	if (v1492 != +120) goto c02_014d;

	i4 v1499 = (i4)+16;
	i8 v1500 = (i8)(intptr_t)(ws+3736);
	*(i4*)(intptr_t)v1500 = v1499;

	goto c02_0149;

c02_014d:;

	i8 v1501 = (i8)(intptr_t)(ws+3742);
	i1 v1502 = *(i1*)(intptr_t)v1501;
	i8 v1503 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1503 = v1502;

	i8 v1504 = (i8)(intptr_t)(ws+3742);
	i1 v1505 = *(i1*)(intptr_t)v1504;
	i8 v1506 = (i8)(intptr_t)(f78_lexer_i_ctype);
	i1 v1507;
	i1 v1508;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1506)(&v1507, &v1508, v1505);

	i8 v1509 = (i8)(intptr_t)(ws+3741);
	*(i1*)(intptr_t)v1509 = v1508;

	i8 v1510 = (i8)(intptr_t)(ws+3740);
	*(i1*)(intptr_t)v1510 = v1507;

	i8 v1511 = (i8)(intptr_t)(ws+3740);
	i1 v1512 = *(i1*)(intptr_t)v1511;
	i1 v1513 = v1512&(+32);
	i1 v1514 = (i1)+0;
	if (v1513==v1514) goto c02_0151; else goto c02_0152;

c02_0151:;

	goto endsub;

c02_0152:;

c02_014e:;

c02_0149:;


	goto c02_0144;

c02_0148:;

	i8 v1515 = (i8)(intptr_t)(ws+3742);
	i1 v1516 = *(i1*)(intptr_t)v1515;
	i8 v1517 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1517 = v1516;

c02_0144:;

c02_0153:;

	i8 v1518 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1519;

	((void(*)(i1* /* c */))(intptr_t)v1518)(&v1519);
	i8 v1520 = (i8)(intptr_t)(f26_ToLower);
	i1 v1521;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v1520)(&v1521, v1519);
	i8 v1522 = (i8)(intptr_t)(ws+3742);
	*(i1*)(intptr_t)v1522 = v1521;

	i8 v1523 = (i8)(intptr_t)(ws+3742);
	i1 v1524 = *(i1*)(intptr_t)v1523;
	i8 v1525 = (i8)(intptr_t)(f78_lexer_i_ctype);
	i1 v1526;
	i1 v1527;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1525)(&v1526, &v1527, v1524);

	i8 v1528 = (i8)(intptr_t)(ws+3741);
	*(i1*)(intptr_t)v1528 = v1527;

	i8 v1529 = (i8)(intptr_t)(ws+3740);
	*(i1*)(intptr_t)v1529 = v1526;

	i8 v1530 = (i8)(intptr_t)(ws+3740);
	i1 v1531 = *(i1*)(intptr_t)v1530;
	i1 v1532 = v1531&(+32);
	i1 v1533 = (i1)+0;
	if (v1532==v1533) goto c02_0158; else goto c02_0159;

c02_0158:;

	i8 v1534 = (i8)(intptr_t)(ws+3742);
	i1 v1535 = *(i1*)(intptr_t)v1534;
	i8 v1536 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1536 = v1535;

	goto c02_0154;

c02_0159:;

c02_0155:;

	i8 v1537 = (i8)(intptr_t)(ws+3742);
	i1 v1538 = *(i1*)(intptr_t)v1537;
	i1 v1539 = (i1)+97;
	if (v1538<v1539) goto c02_015e; else goto c02_015d;

c02_015d:;

	i8 v1540 = (i8)(intptr_t)(ws+3742);
	i1 v1541 = *(i1*)(intptr_t)v1540;
	i1 v1542 = v1541+(-87);
	i8 v1543 = (i8)(intptr_t)(ws+3742);
	*(i1*)(intptr_t)v1543 = v1542;

	goto c02_015a;

c02_015e:;

	i8 v1544 = (i8)(intptr_t)(ws+3742);
	i1 v1545 = *(i1*)(intptr_t)v1544;
	i1 v1546 = v1545+(-48);
	i8 v1547 = (i8)(intptr_t)(ws+3742);
	*(i1*)(intptr_t)v1547 = v1546;

c02_015a:;

	i8 v1548 = (i8)(intptr_t)(ws+3742);
	i1 v1549 = *(i1*)(intptr_t)v1548;
	i8 v1550 = (i8)(intptr_t)(ws+3736);
	i4 v1551 = *(i4*)(intptr_t)v1550;
	i1 v1552 = (s1)(s4)v1551;
	if (v1549<v1552) goto c02_0163; else goto c02_0162;

c02_0162:;

	i8 v1553 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1553)();

	i8 v1554 = (i8)(intptr_t)c02_s0039;
	i8 v1555 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1555)(v1554);

	i8 v1556 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1556)();

	goto c02_015f;

c02_0163:;

c02_015f:;

	i8 v1557 = (i8)(intptr_t)(ws+396);
	i4 v1558 = *(i4*)(intptr_t)v1557;
	i8 v1559 = (i8)(intptr_t)(ws+3736);
	i4 v1560 = *(i4*)(intptr_t)v1559;
	i4 v1561 = v1558*v1560;
	i8 v1562 = (i8)(intptr_t)(ws+3742);
	i1 v1563 = *(i1*)(intptr_t)v1562;
	i4 v1564 = v1563;
	i4 v1565 = v1561+v1564;
	i8 v1566 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1566 = v1565;

	goto c02_0153;

c02_0154:;

endsub:;
}
	void f69_StartError(void);
const i1 c02_s003a[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// lexer_i_malformed workspace at ws+3752 length ws+8
void f85_lexer_i_malformed(i8 p1567 /* s */) {
	*(i8*)(intptr_t)(ws+3752) = p1567; /*s */

	i8 v1568 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1568)();

	i8 v1569 = (i8)(intptr_t)c02_s003a;
	i8 v1570 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1570)(v1569);

	i8 v1571 = (i8)(intptr_t)(ws+3752);
	i8 v1572 = *(i8*)(intptr_t)v1571;
	i8 v1573 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1573)(v1572);

	i8 v1574 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1574)();

endsub:;
}
	void f79_lexer_i_getchar(i1* /* c */);
const i1 c02_s003b[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };
	void f85_lexer_i_malformed(i8 /* s */);

// lexer_i_get_escaped workspace at ws+3744 length ws+1
void f86_lexer_i_get_escaped(i1* p1575 /* c */) {

	i8 v1576 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1577;

	((void(*)(i1* /* c */))(intptr_t)v1576)(&v1577);
	i8 v1578 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v1578 = v1577;

	i8 v1579 = (i8)(intptr_t)(ws+3744);
	i1 v1580 = *(i1*)(intptr_t)v1579;

	if (v1580 != +110) goto c02_0165;

	i1 v1581 = (i1)+10;
	i8 v1582 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v1582 = v1581;

	goto c02_0164;

c02_0165:;

	if (v1580 != +114) goto c02_0166;

	i1 v1583 = (i1)+13;
	i8 v1584 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v1584 = v1583;

	goto c02_0164;

c02_0166:;

	if (v1580 != +116) goto c02_0167;

	i1 v1585 = (i1)+9;
	i8 v1586 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v1586 = v1585;

	goto c02_0164;

c02_0167:;

	if (v1580 != +92) goto c02_0168;

	i1 v1587 = (i1)+92;
	i8 v1588 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v1588 = v1587;

	goto c02_0164;

c02_0168:;

	if (v1580 != +39) goto c02_0169;

	i1 v1589 = (i1)+39;
	i8 v1590 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v1590 = v1589;

	goto c02_0164;

c02_0169:;

	if (v1580 != +34) goto c02_016a;

	i1 v1591 = (i1)+34;
	i8 v1592 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v1592 = v1591;

	goto c02_0164;

c02_016a:;

	if (v1580 != +48) goto c02_016b;

	i1 v1593 = (i1)+0;
	i8 v1594 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v1594 = v1593;

	goto c02_0164;

c02_016b:;

	i8 v1595 = (i8)(intptr_t)c02_s003b;
	i8 v1596 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1596)(v1595);

c02_0164:;


endsub:;
	*p1575 = *(i1*)(intptr_t)(ws+3744);
}
	void f79_lexer_i_getchar(i1* /* c */);
const i1 c02_s003c[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f85_lexer_i_malformed(i8 /* s */);
	void f86_lexer_i_get_escaped(i1* /* c */);
	void f69_StartError(void);
const i1 c02_s003d[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// lexer_i_read_string workspace at ws+3736 length ws+1
void f87_lexer_i_read_string(void) {

	i1 v1597 = (i1)+0;
	i8 v1598 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1598 = v1597;

c02_016c:;

	i8 v1599 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1600;

	((void(*)(i1* /* c */))(intptr_t)v1599)(&v1600);
	i8 v1601 = (i8)(intptr_t)(ws+3736);
	*(i1*)(intptr_t)v1601 = v1600;

	i8 v1602 = (i8)(intptr_t)(ws+3736);
	i1 v1603 = *(i1*)(intptr_t)v1602;
	i1 v1604 = (i1)+32;
	if (v1603<v1604) goto c02_0171; else goto c02_0172;

c02_0171:;

	i8 v1605 = (i8)(intptr_t)c02_s003c;
	i8 v1606 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1606)(v1605);

	goto c02_016e;

c02_0172:;

c02_016e:;

	i8 v1607 = (i8)(intptr_t)(ws+3736);
	i1 v1608 = *(i1*)(intptr_t)v1607;

	if (v1608 != +34) goto c02_0174;

	goto c02_016d;

c02_0174:;

	if (v1608 != +92) goto c02_0175;

	i8 v1609 = (i8)(intptr_t)(f86_lexer_i_get_escaped);
	i1 v1610;

	((void(*)(i1* /* c */))(intptr_t)v1609)(&v1610);
	i8 v1611 = (i8)(intptr_t)(ws+3736);
	*(i1*)(intptr_t)v1611 = v1610;

c02_0175:;

c02_0173:;


	i8 v1612 = (i8)(intptr_t)(ws+3736);
	i1 v1613 = *(i1*)(intptr_t)v1612;
	i8 v1614 = (i8)(intptr_t)(ws+265);
	i8 v1615 = (i8)(intptr_t)(ws+393);
	i1 v1616 = *(i1*)(intptr_t)v1615;
	i8 v1617 = v1616;
	i8 v1618 = v1614+v1617;
	*(i1*)(intptr_t)v1618 = v1613;

	i8 v1619 = (i8)(intptr_t)(ws+393);
	i1 v1620 = *(i1*)(intptr_t)v1619;
	i1 v1621 = v1620+(+1);
	i8 v1622 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1622 = v1621;

	i8 v1623 = (i8)(intptr_t)(ws+393);
	i1 v1624 = *(i1*)(intptr_t)v1623;
	i1 v1625 = (i1)+128;
	if (v1624==v1625) goto c02_0179; else goto c02_017a;

c02_0179:;

	i8 v1626 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1626)();

	i8 v1627 = (i8)(intptr_t)c02_s003d;
	i8 v1628 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1628)(v1627);

	i8 v1629 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1629)();

	goto c02_0176;

c02_017a:;

c02_0176:;

	goto c02_016c;

c02_016d:;

	i1 v1630 = (i1)+0;
	i8 v1631 = (i8)(intptr_t)(ws+265);
	i8 v1632 = (i8)(intptr_t)(ws+393);
	i1 v1633 = *(i1*)(intptr_t)v1632;
	i8 v1634 = v1633;
	i8 v1635 = v1631+v1634;
	*(i1*)(intptr_t)v1635 = v1630;

endsub:;
}
const i1 c02_s003e[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f85_lexer_i_malformed(i8 /* s */);

// malformed workspace at ws+3736 length ws+0
void f89_malformed(void) {

	i8 v1636 = (i8)(intptr_t)c02_s003e;
	i8 v1637 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1637)(v1636);

endsub:;
}
	void f79_lexer_i_getchar(i1* /* c */);
	void f89_malformed(void);
	void f86_lexer_i_get_escaped(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f89_malformed(void);

// lexer_i_read_char workspace at ws+3728 length ws+1
void f88_lexer_i_read_char(void) {


	i8 v1638 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1639;

	((void(*)(i1* /* c */))(intptr_t)v1638)(&v1639);
	i8 v1640 = (i8)(intptr_t)(ws+3728);
	*(i1*)(intptr_t)v1640 = v1639;

	i8 v1641 = (i8)(intptr_t)(ws+3728);
	i1 v1642 = *(i1*)(intptr_t)v1641;
	i1 v1643 = (i1)+32;
	if (v1642<v1643) goto c02_0180; else goto c02_0182;

c02_0182:;

	i8 v1644 = (i8)(intptr_t)(ws+3728);
	i1 v1645 = *(i1*)(intptr_t)v1644;
	i1 v1646 = (i1)+39;
	if (v1645==v1646) goto c02_0180; else goto c02_0181;

c02_0180:;

	i8 v1647 = (i8)(intptr_t)(f89_malformed);

	((void(*)(void))(intptr_t)v1647)();

	goto c02_017b;

c02_0181:;

c02_017b:;

	i8 v1648 = (i8)(intptr_t)(ws+3728);
	i1 v1649 = *(i1*)(intptr_t)v1648;
	i1 v1650 = (i1)+92;
	if (v1649==v1650) goto c02_0186; else goto c02_0187;

c02_0186:;

	i8 v1651 = (i8)(intptr_t)(f86_lexer_i_get_escaped);
	i1 v1652;

	((void(*)(i1* /* c */))(intptr_t)v1651)(&v1652);
	i8 v1653 = (i8)(intptr_t)(ws+3728);
	*(i1*)(intptr_t)v1653 = v1652;

	goto c02_0183;

c02_0187:;

c02_0183:;

	i8 v1654 = (i8)(intptr_t)(ws+3728);
	i1 v1655 = *(i1*)(intptr_t)v1654;
	i4 v1656 = v1655;
	i8 v1657 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1657 = v1656;

	i8 v1658 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1659;

	((void(*)(i1* /* c */))(intptr_t)v1658)(&v1659);
	i8 v1660 = (i8)(intptr_t)(ws+3728);
	*(i1*)(intptr_t)v1660 = v1659;

	i8 v1661 = (i8)(intptr_t)(ws+3728);
	i1 v1662 = *(i1*)(intptr_t)v1661;
	i1 v1663 = (i1)+39;
	if (v1662==v1663) goto c02_018c; else goto c02_018b;

c02_018b:;

	i8 v1664 = (i8)(intptr_t)(f89_malformed);

	((void(*)(void))(intptr_t)v1664)();

	goto c02_0188;

c02_018c:;

c02_0188:;

endsub:;
}
const i1 c02_s003f[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f85_lexer_i_malformed(i8 /* s */);

// malformed_include workspace at ws+3736 length ws+0
void f91_malformed_include(void) {

	i8 v1665 = (i8)(intptr_t)c02_s003f;
	i8 v1666 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1666)(v1665);

endsub:;
}
	void f81_lexer_i_skipwhitespace(void);
	void f79_lexer_i_getchar(i1* /* c */);
	void f91_malformed_include(void);
	void f87_lexer_i_read_string(void);
	void f81_lexer_i_skipwhitespace(void);
	void f79_lexer_i_getchar(i1* /* c */);
	void f91_malformed_include(void);
	void f76_LexerIncludeFile(i8 /* path */);

// lexer_i_include workspace at ws+3728 length ws+1
void f90_lexer_i_include(void) {


	i8 v1667 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1667)();

	i8 v1668 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1669;

	((void(*)(i1* /* c */))(intptr_t)v1668)(&v1669);
	i8 v1670 = (i8)(intptr_t)(ws+3728);
	*(i1*)(intptr_t)v1670 = v1669;

	i8 v1671 = (i8)(intptr_t)(ws+3728);
	i1 v1672 = *(i1*)(intptr_t)v1671;
	i1 v1673 = (i1)+34;
	if (v1672==v1673) goto c02_0191; else goto c02_0190;

c02_0190:;

	i8 v1674 = (i8)(intptr_t)(f91_malformed_include);

	((void(*)(void))(intptr_t)v1674)();

	goto c02_018d;

c02_0191:;

c02_018d:;

	i8 v1675 = (i8)(intptr_t)(f87_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1675)();

	i8 v1676 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1676)();

	i8 v1677 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1678;

	((void(*)(i1* /* c */))(intptr_t)v1677)(&v1678);
	i8 v1679 = (i8)(intptr_t)(ws+3728);
	*(i1*)(intptr_t)v1679 = v1678;

	i8 v1680 = (i8)(intptr_t)(ws+3728);
	i1 v1681 = *(i1*)(intptr_t)v1680;
	i1 v1682 = (i1)+59;
	if (v1681==v1682) goto c02_0196; else goto c02_0195;

c02_0195:;

	i8 v1683 = (i8)(intptr_t)(f91_malformed_include);

	((void(*)(void))(intptr_t)v1683)();

	goto c02_0192;

c02_0196:;

c02_0192:;

	i8 v1684 = (i8)(intptr_t)(ws+265);
	i8 v1685 = (i8)(intptr_t)(f76_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v1685)(v1684);

endsub:;
}
	void f81_lexer_i_skipwhitespace(void);
	void f84_lexer_i_read_number(void);
	void f81_lexer_i_skipwhitespace(void);
	void f79_lexer_i_getchar(i1* /* c */);
const i1 c02_s0040[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f85_lexer_i_malformed(i8 /* s */);
	void f87_lexer_i_read_string(void);
	void f33_Free(i8 /* block */);
	void f66_InternalStrDup(i8* /* news */, i8 /* s */);

// lexer_i_line_directive workspace at ws+3728 length ws+1
void f92_lexer_i_line_directive(void) {

	i8 v1686 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1686)();

	i8 v1687 = (i8)(intptr_t)(f84_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1687)();

	i8 v1688 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1688)();

	i8 v1689 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1690;

	((void(*)(i1* /* c */))(intptr_t)v1689)(&v1690);
	i8 v1691 = (i8)(intptr_t)(ws+3728);
	*(i1*)(intptr_t)v1691 = v1690;

	i8 v1692 = (i8)(intptr_t)(ws+3728);
	i1 v1693 = *(i1*)(intptr_t)v1692;
	i1 v1694 = (i1)+34;
	if (v1693==v1694) goto c02_019b; else goto c02_019a;

c02_019a:;

	i8 v1695 = (i8)(intptr_t)c02_s0040;
	i8 v1696 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1696)(v1695);

	goto c02_0197;

c02_019b:;

c02_0197:;

	i8 v1697 = (i8)(intptr_t)(f87_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1697)();

	i8 v1698 = (i8)(intptr_t)(ws+396);
	i4 v1699 = *(i4*)(intptr_t)v1698;
	i2 v1700 = (s2)(s4)v1699;
	i8 v1701 = (i8)(intptr_t)(ws+256);
	i8 v1702 = *(i8*)(intptr_t)v1701;
	i8 v1703 = v1702+(+16);
	*(i2*)(intptr_t)v1703 = v1700;

	i8 v1704 = (i8)(intptr_t)(ws+256);
	i8 v1705 = *(i8*)(intptr_t)v1704;
	i8 v1706 = v1705+(+8);
	i8 v1707 = *(i8*)(intptr_t)v1706;
	i8 v1708 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1708)(v1707);

	i8 v1709 = (i8)(intptr_t)(ws+265);
	i8 v1710 = (i8)(intptr_t)(f66_InternalStrDup);
	i8 v1711;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v1710)(&v1711, v1709);
	i8 v1712 = (i8)(intptr_t)(ws+256);
	i8 v1713 = *(i8*)(intptr_t)v1712;
	i8 v1714 = v1713+(+8);
	*(i8*)(intptr_t)v1714 = v1711;

endsub:;
}
	void f81_lexer_i_skipwhitespace(void);
	void f79_lexer_i_getchar(i1* /* c */);
	void f82_lexer_i_read_identifier(void);
const i1 c02_s0041[] = { 0x6c,0x69,0x6e,0x65,0 };
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f92_lexer_i_line_directive(void);
	void f79_lexer_i_getchar(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f80_lexer_i_unparseable(i1 /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f80_lexer_i_unparseable(i1 /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f87_lexer_i_read_string(void);
	void f88_lexer_i_read_char(void);
	void f78_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f84_lexer_i_read_number(void);
	void f82_lexer_i_read_identifier(void);
	void f83_lexer_i_match_keyword(i1* /* token */);
	void f80_lexer_i_unparseable(i1 /* c */);
	void f90_lexer_i_include(void);

// LexerReadToken workspace at ws+3720 length ws+3
void f77_LexerReadToken(i1* p1288 /* token */) {














c02_019c:;

	i8 v1715 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1715)();

	i8 v1716 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1717;

	((void(*)(i1* /* c */))(intptr_t)v1716)(&v1717);
	i8 v1718 = (i8)(intptr_t)(ws+3721);
	*(i1*)(intptr_t)v1718 = v1717;

	i8 v1719 = (i8)(intptr_t)(ws+3721);
	i1 v1720 = *(i1*)(intptr_t)v1719;
	i1 v1721 = (i1)+35;
	if (v1720==v1721) goto c02_01a1; else goto c02_01a2;

c02_01a1:;

	i1 v1722 = (i1)+0;
	i8 v1723 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1723 = v1722;

	i8 v1724 = (i8)(intptr_t)(f82_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1724)();

	i8 v1725 = (i8)(intptr_t)(ws+265);
	i8 v1726 = (i8)(intptr_t)c02_s0041;
	i8 v1727 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1728;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1727)(&v1728, v1726, v1725);
	i1 v1729 = (i1)+0;
	if (v1728==v1729) goto c02_01a6; else goto c02_01a7;

c02_01a6:;

	i8 v1730 = (i8)(intptr_t)(f92_lexer_i_line_directive);

	((void(*)(void))(intptr_t)v1730)();

	goto c02_01a3;

c02_01a7:;

c02_01a3:;

c02_01a8:;

	i8 v1731 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1732;

	((void(*)(i1* /* c */))(intptr_t)v1731)(&v1732);
	i8 v1733 = (i8)(intptr_t)(ws+3721);
	*(i1*)(intptr_t)v1733 = v1732;

	i8 v1734 = (i8)(intptr_t)(ws+3721);
	i1 v1735 = *(i1*)(intptr_t)v1734;
	i1 v1736 = (i1)+10;
	if (v1735==v1736) goto c02_01af; else goto c02_01b1;

c02_01b1:;

	i8 v1737 = (i8)(intptr_t)(ws+3721);
	i1 v1738 = *(i1*)(intptr_t)v1737;
	i1 v1739 = (i1)+0;
	if (v1738==v1739) goto c02_01af; else goto c02_01b0;

c02_01af:;

	i8 v1740 = (i8)(intptr_t)(ws+3721);
	i1 v1741 = *(i1*)(intptr_t)v1740;
	i8 v1742 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1742 = v1741;

	goto c02_01a9;

c02_01b0:;

c02_01aa:;

	goto c02_01a8;

c02_01a9:;

	goto c02_019c;

c02_01a2:;

c02_019e:;

	i8 v1743 = (i8)(intptr_t)(ws+3721);
	i1 v1744 = *(i1*)(intptr_t)v1743;

	if (v1744 != +0) goto c02_01b3;

	i1 v1745 = (i1)+0;
	i8 v1746 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1746 = v1745;

	goto c02_01b2;

c02_01b3:;

	if (v1744 != +58) goto c02_01b4;

	i8 v1747 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1748;

	((void(*)(i1* /* c */))(intptr_t)v1747)(&v1748);
	i8 v1749 = (i8)(intptr_t)(ws+3721);
	*(i1*)(intptr_t)v1749 = v1748;

	i8 v1750 = (i8)(intptr_t)(ws+3721);
	i1 v1751 = *(i1*)(intptr_t)v1750;
	i1 v1752 = (i1)+61;
	if (v1751==v1752) goto c02_01b8; else goto c02_01b9;

c02_01b8:;

	i1 v1753 = (i1)+2;
	i8 v1754 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1754 = v1753;

	goto c02_01b5;

c02_01b9:;

	i8 v1755 = (i8)(intptr_t)(ws+3721);
	i1 v1756 = *(i1*)(intptr_t)v1755;
	i8 v1757 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1757 = v1756;

	i1 v1758 = (i1)+6;
	i8 v1759 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1759 = v1758;

c02_01b5:;

	goto c02_01b2;

c02_01b4:;

	if (v1744 != +60) goto c02_01ba;

	i8 v1760 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1761;

	((void(*)(i1* /* c */))(intptr_t)v1760)(&v1761);
	i8 v1762 = (i8)(intptr_t)(ws+3721);
	*(i1*)(intptr_t)v1762 = v1761;

	i8 v1763 = (i8)(intptr_t)(ws+3721);
	i1 v1764 = *(i1*)(intptr_t)v1763;

	if (v1764 != +60) goto c02_01bc;

	i1 v1765 = (i1)+56;
	i8 v1766 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1766 = v1765;

	goto c02_01bb;

c02_01bc:;

	if (v1764 != +61) goto c02_01bd;

	i1 v1767 = (i1)+51;
	i8 v1768 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1768 = v1767;

	goto c02_01bb;

c02_01bd:;

	i8 v1769 = (i8)(intptr_t)(ws+3721);
	i1 v1770 = *(i1*)(intptr_t)v1769;
	i8 v1771 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1771 = v1770;

	i1 v1772 = (i1)+50;
	i8 v1773 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1773 = v1772;

c02_01bb:;


	goto c02_01b2;

c02_01ba:;

	if (v1744 != +61) goto c02_01be;

	i8 v1774 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1775;

	((void(*)(i1* /* c */))(intptr_t)v1774)(&v1775);
	i8 v1776 = (i8)(intptr_t)(ws+3721);
	*(i1*)(intptr_t)v1776 = v1775;

	i8 v1777 = (i8)(intptr_t)(ws+3721);
	i1 v1778 = *(i1*)(intptr_t)v1777;
	i1 v1779 = (i1)+61;
	if (v1778==v1779) goto c02_01c2; else goto c02_01c3;

c02_01c2:;

	i1 v1780 = (i1)+54;
	i8 v1781 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1781 = v1780;

	goto c02_01bf;

c02_01c3:;

	i8 v1782 = (i8)(intptr_t)(ws+3721);
	i1 v1783 = *(i1*)(intptr_t)v1782;
	i8 v1784 = (i8)(intptr_t)(f80_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1784)(v1783);

c02_01bf:;

	goto c02_01b2;

c02_01be:;

	if (v1744 != +33) goto c02_01c4;

	i8 v1785 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1786;

	((void(*)(i1* /* c */))(intptr_t)v1785)(&v1786);
	i8 v1787 = (i8)(intptr_t)(ws+3721);
	*(i1*)(intptr_t)v1787 = v1786;

	i8 v1788 = (i8)(intptr_t)(ws+3721);
	i1 v1789 = *(i1*)(intptr_t)v1788;
	i1 v1790 = (i1)+61;
	if (v1789==v1790) goto c02_01c8; else goto c02_01c9;

c02_01c8:;

	i1 v1791 = (i1)+55;
	i8 v1792 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1792 = v1791;

	goto c02_01c5;

c02_01c9:;

	i8 v1793 = (i8)(intptr_t)(ws+3721);
	i1 v1794 = *(i1*)(intptr_t)v1793;
	i8 v1795 = (i8)(intptr_t)(f80_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1795)(v1794);

c02_01c5:;

	goto c02_01b2;

c02_01c4:;

	if (v1744 != +62) goto c02_01ca;

	i8 v1796 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1797;

	((void(*)(i1* /* c */))(intptr_t)v1796)(&v1797);
	i8 v1798 = (i8)(intptr_t)(ws+3721);
	*(i1*)(intptr_t)v1798 = v1797;

	i8 v1799 = (i8)(intptr_t)(ws+3721);
	i1 v1800 = *(i1*)(intptr_t)v1799;

	if (v1800 != +62) goto c02_01cc;

	i1 v1801 = (i1)+57;
	i8 v1802 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1802 = v1801;

	goto c02_01cb;

c02_01cc:;

	if (v1800 != +61) goto c02_01cd;

	i1 v1803 = (i1)+53;
	i8 v1804 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1804 = v1803;

	goto c02_01cb;

c02_01cd:;

	i8 v1805 = (i8)(intptr_t)(ws+3721);
	i1 v1806 = *(i1*)(intptr_t)v1805;
	i8 v1807 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1807 = v1806;

	i1 v1808 = (i1)+52;
	i8 v1809 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1809 = v1808;

c02_01cb:;


	goto c02_01b2;

c02_01ca:;

	if (v1744 != +34) goto c02_01ce;

	i8 v1810 = (i8)(intptr_t)(f87_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1810)();

	i1 v1811 = (i1)+41;
	i8 v1812 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1812 = v1811;

	goto c02_01b2;

c02_01ce:;

	if (v1744 != +39) goto c02_01cf;

	i8 v1813 = (i8)(intptr_t)(f88_lexer_i_read_char);

	((void(*)(void))(intptr_t)v1813)();

	i1 v1814 = (i1)+34;
	i8 v1815 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1815 = v1814;

	goto c02_01b2;

c02_01cf:;

	i8 v1816 = (i8)(intptr_t)(ws+3721);
	i1 v1817 = *(i1*)(intptr_t)v1816;
	i8 v1818 = (i8)(intptr_t)(f78_lexer_i_ctype);
	i1 v1819;
	i1 v1820;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1818)(&v1819, &v1820, v1817);

	i8 v1821 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1821 = v1820;

	i8 v1822 = (i8)(intptr_t)(ws+3722);
	*(i1*)(intptr_t)v1822 = v1819;

	i8 v1823 = (i8)(intptr_t)(ws+3722);
	i1 v1824 = *(i1*)(intptr_t)v1823;
	i1 v1825 = v1824&(+128);
	i1 v1826 = (i1)+0;
	if (v1825==v1826) goto c02_01d4; else goto c02_01d3;

c02_01d3:;

	goto c02_01d0;

c02_01d4:;

	i8 v1827 = (i8)(intptr_t)(ws+3722);
	i1 v1828 = *(i1*)(intptr_t)v1827;
	i1 v1829 = v1828&(+1);
	i1 v1830 = (i1)+0;
	if (v1829==v1830) goto c02_01d8; else goto c02_01d7;

c02_01d7:;

	i8 v1831 = (i8)(intptr_t)(ws+3721);
	i1 v1832 = *(i1*)(intptr_t)v1831;
	i8 v1833 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1833 = v1832;

	i8 v1834 = (i8)(intptr_t)(f84_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1834)();

	i1 v1835 = (i1)+34;
	i8 v1836 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1836 = v1835;

	goto c02_01d0;

c02_01d8:;

	i8 v1837 = (i8)(intptr_t)(ws+3722);
	i1 v1838 = *(i1*)(intptr_t)v1837;
	i1 v1839 = v1838&(+16);
	i1 v1840 = (i1)+0;
	if (v1839==v1840) goto c02_01dc; else goto c02_01db;

c02_01db:;

	i1 v1841 = (i1)+1;
	i8 v1842 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1842 = v1841;

	i8 v1843 = (i8)(intptr_t)(ws+3721);
	i1 v1844 = *(i1*)(intptr_t)v1843;
	i8 v1845 = (i8)(intptr_t)(ws+265);
	*(i1*)(intptr_t)v1845 = v1844;

	i8 v1846 = (i8)(intptr_t)(f82_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1846)();

	i8 v1847 = (i8)(intptr_t)(f83_lexer_i_match_keyword);
	i1 v1848;

	((void(*)(i1* /* token */))(intptr_t)v1847)(&v1848);
	i8 v1849 = (i8)(intptr_t)(ws+3720);
	*(i1*)(intptr_t)v1849 = v1848;

	goto c02_01d0;

c02_01dc:;

	i8 v1850 = (i8)(intptr_t)(ws+3721);
	i1 v1851 = *(i1*)(intptr_t)v1850;
	i8 v1852 = (i8)(intptr_t)(f80_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1852)(v1851);

c02_01d0:;

c02_01b2:;


	i8 v1853 = (i8)(intptr_t)(ws+3720);
	i1 v1854 = *(i1*)(intptr_t)v1853;
	i1 v1855 = (i1)+255;
	if (v1854==v1855) goto c02_01e0; else goto c02_01e1;

c02_01e0:;

	i8 v1856 = (i8)(intptr_t)(f90_lexer_i_include);

	((void(*)(void))(intptr_t)v1856)();

	goto c02_01dd;

c02_01e1:;

	goto c02_019d;

c02_01dd:;

	goto c02_019c;

c02_019d:;

endsub:;
	*p1288 = *(i1*)(intptr_t)(ws+3720);
}

// CountParameters workspace at ws+3840 length ws+9
void f93_CountParameters(i1* p1857 /* count */, i8 p1858 /* param */) {
	*(i8*)(intptr_t)(ws+3840) = p1858; /*param */

	i1 v1859 = (i1)+0;
	i8 v1860 = (i8)(intptr_t)(ws+3848);
	*(i1*)(intptr_t)v1860 = v1859;

c02_01e4:;

	i8 v1861 = (i8)(intptr_t)(ws+3840);
	i8 v1862 = *(i8*)(intptr_t)v1861;
	i8 v1863 = (i8)+0;
	if (v1862==v1863) goto c02_01e7; else goto c02_01e6;

c02_01e6:;

	i8 v1864 = (i8)(intptr_t)(ws+3848);
	i1 v1865 = *(i1*)(intptr_t)v1864;
	i1 v1866 = v1865+(+1);
	i8 v1867 = (i8)(intptr_t)(ws+3848);
	*(i1*)(intptr_t)v1867 = v1866;

	i8 v1868 = (i8)(intptr_t)(ws+3840);
	i8 v1869 = *(i8*)(intptr_t)v1868;
	i8 v1870 = *(i8*)(intptr_t)v1869;
	i8 v1871 = v1870+(+16);
	i8 v1872 = *(i8*)(intptr_t)v1871;
	i8 v1873 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v1873 = v1872;

	goto c02_01e4;

c02_01e7:;

endsub:;
	*p1857 = *(i1*)(intptr_t)(ws+3848);
}

// GetInputParameter workspace at ws+4160 length ws+24
void f94_GetInputParameter(i8* p1874 /* param */, i1 p1875 /* count */, i8 p1876 /* subr */) {
	*(i8*)(intptr_t)(ws+4160) = p1876; /*subr */
	*(i1*)(intptr_t)(ws+4168) = p1875; /*count */

	i8 v1877 = (i8)(intptr_t)(ws+4160);
	i8 v1878 = *(i8*)(intptr_t)v1877;
	i8 v1879 = v1878+(+80);
	i1 v1880 = *(i1*)(intptr_t)v1879;
	i1 v1881 = (i1)+0;
	if (v1880==v1881) goto c02_01ec; else goto c02_01eb;

c02_01eb:;

	i8 v1882 = (i8)(intptr_t)(ws+4160);
	i8 v1883 = *(i8*)(intptr_t)v1882;
	i8 v1884 = v1883+(+16);
	i8 v1885 = *(i8*)(intptr_t)v1884;
	i8 v1886 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v1886 = v1885;

c02_01ef:;

	i8 v1887 = (i8)(intptr_t)(ws+4168);
	i1 v1888 = *(i1*)(intptr_t)v1887;
	i1 v1889 = (i1)+0;
	if (v1888==v1889) goto c02_01f2; else goto c02_01f1;

c02_01f1:;

	i8 v1890 = (i8)(intptr_t)(ws+4176);
	i8 v1891 = *(i8*)(intptr_t)v1890;
	i8 v1892 = v1891+(+24);
	i8 v1893 = *(i8*)(intptr_t)v1892;
	i8 v1894 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v1894 = v1893;

	i8 v1895 = (i8)(intptr_t)(ws+4168);
	i1 v1896 = *(i1*)(intptr_t)v1895;
	i1 v1897 = v1896+(-1);
	i8 v1898 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v1898 = v1897;

	goto c02_01ef;

c02_01f2:;

	goto c02_01e8;

c02_01ec:;

	i8 v1899 = (i8)+0;
	i8 v1900 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v1900 = v1899;

c02_01e8:;

endsub:;
	*p1874 = *(i8*)(intptr_t)(ws+4176);
}

// GetOutputParameter workspace at ws+4160 length ws+24
void f95_GetOutputParameter(i8* p1901 /* param */, i1 p1902 /* count */, i8 p1903 /* subr */) {
	*(i8*)(intptr_t)(ws+4160) = p1903; /*subr */
	*(i1*)(intptr_t)(ws+4168) = p1902; /*count */

	i8 v1904 = (i8)(intptr_t)(ws+4160);
	i8 v1905 = *(i8*)(intptr_t)v1904;
	i8 v1906 = v1905+(+81);
	i1 v1907 = *(i1*)(intptr_t)v1906;
	i1 v1908 = (i1)+0;
	if (v1907==v1908) goto c02_01f7; else goto c02_01f6;

c02_01f6:;

	i8 v1909 = (i8)(intptr_t)(ws+4168);
	i1 v1910 = *(i1*)(intptr_t)v1909;
	i8 v1911 = (i8)(intptr_t)(ws+4160);
	i8 v1912 = *(i8*)(intptr_t)v1911;
	i8 v1913 = v1912+(+80);
	i1 v1914 = *(i1*)(intptr_t)v1913;
	i1 v1915 = v1910+v1914;
	i8 v1916 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v1916 = v1915;

	i8 v1917 = (i8)(intptr_t)(ws+4160);
	i8 v1918 = *(i8*)(intptr_t)v1917;
	i8 v1919 = v1918+(+16);
	i8 v1920 = *(i8*)(intptr_t)v1919;
	i8 v1921 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v1921 = v1920;

c02_01fa:;

	i8 v1922 = (i8)(intptr_t)(ws+4168);
	i1 v1923 = *(i1*)(intptr_t)v1922;
	i1 v1924 = (i1)+0;
	if (v1923==v1924) goto c02_01fd; else goto c02_01fc;

c02_01fc:;

	i8 v1925 = (i8)(intptr_t)(ws+4176);
	i8 v1926 = *(i8*)(intptr_t)v1925;
	i8 v1927 = v1926+(+24);
	i8 v1928 = *(i8*)(intptr_t)v1927;
	i8 v1929 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v1929 = v1928;

	i8 v1930 = (i8)(intptr_t)(ws+4168);
	i1 v1931 = *(i1*)(intptr_t)v1930;
	i1 v1932 = v1931+(-1);
	i8 v1933 = (i8)(intptr_t)(ws+4168);
	*(i1*)(intptr_t)v1933 = v1932;

	goto c02_01fa;

c02_01fd:;

	goto c02_01f3;

c02_01f7:;

	i8 v1934 = (i8)+0;
	i8 v1935 = (i8)(intptr_t)(ws+4176);
	*(i8*)(intptr_t)v1935 = v1934;

c02_01f3:;

endsub:;
	*p1901 = *(i8*)(intptr_t)(ws+4176);
}

// WidthToIndex workspace at ws+3944 length ws+2
void f97_WidthToIndex(i1* p1944 /* index */, i1 p1945 /* width */) {
	*(i1*)(intptr_t)(ws+3944) = p1945; /*width */

	i8 v1946 = (i8)(intptr_t)(ws+3944);
	i1 v1947 = *(i1*)(intptr_t)v1946;

	if (v1947 != +4) goto c02_01ff;

	i1 v1948 = (i1)+3;
	i8 v1949 = (i8)(intptr_t)(ws+3945);
	*(i1*)(intptr_t)v1949 = v1948;

	goto c02_01fe;

c02_01ff:;

	if (v1947 != +8) goto c02_0200;

	i1 v1950 = (i1)+4;
	i8 v1951 = (i8)(intptr_t)(ws+3945);
	*(i1*)(intptr_t)v1951 = v1950;

	goto c02_01fe;

c02_0200:;

	i8 v1952 = (i8)(intptr_t)(ws+3944);
	i1 v1953 = *(i1*)(intptr_t)v1952;
	i8 v1954 = (i8)(intptr_t)(ws+3945);
	*(i1*)(intptr_t)v1954 = v1953;

c02_01fe:;


endsub:;
	*p1944 = *(i1*)(intptr_t)(ws+3945);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAddress workspace at ws+3848 length ws+24
void f99_MidAddress(i8* p1955 /* m */, i2 p1956 /* off */, i8 p1957 /* sym */) {
	*(i8*)(intptr_t)(ws+3848) = p1957; /*sym */
	*(i2*)(intptr_t)(ws+3856) = p1956; /*off */

	i1 v1958 = (i1)+45;
	i8 v1959 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v1960;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1959)(&v1960, v1958);
	i8 v1961 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v1961 = v1960;

	i8 v1962 = (i8)(intptr_t)(ws+3848);
	i8 v1963 = *(i8*)(intptr_t)v1962;
	i8 v1964 = (i8)(intptr_t)(ws+3864);
	i8 v1965 = *(i8*)(intptr_t)v1964;
	*(i8*)(intptr_t)v1965 = v1963;

	i8 v1966 = (i8)(intptr_t)(ws+3856);
	i2 v1967 = *(i2*)(intptr_t)v1966;
	i8 v1968 = (i8)(intptr_t)(ws+3864);
	i8 v1969 = *(i8*)(intptr_t)v1968;
	i8 v1970 = v1969+(+8);
	*(i2*)(intptr_t)v1970 = v1967;

endsub:;
	*p1955 = *(i8*)(intptr_t)(ws+3864);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmtext workspace at ws+3840 length ws+16
void f100_MidAsmtext(i8* p1971 /* m */, i8 p1972 /* text */) {
	*(i8*)(intptr_t)(ws+3840) = p1972; /*text */

	i1 v1973 = (i1)+18;
	i8 v1974 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v1975;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1974)(&v1975, v1973);
	i8 v1976 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v1976 = v1975;

	i8 v1977 = (i8)(intptr_t)(ws+3840);
	i8 v1978 = *(i8*)(intptr_t)v1977;
	i8 v1979 = (i8)(intptr_t)(ws+3848);
	i8 v1980 = *(i8*)(intptr_t)v1979;
	*(i8*)(intptr_t)v1980 = v1978;

endsub:;
	*p1971 = *(i8*)(intptr_t)(ws+3848);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmvalue workspace at ws+3848 length ws+16
void f103_MidAsmvalue(i8* p2025 /* m */, i4 p2026 /* value */) {
	*(i4*)(intptr_t)(ws+3848) = p2026; /*value */

	i1 v2027 = (i1)+20;
	i8 v2028 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2029;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2028)(&v2029, v2027);
	i8 v2030 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v2030 = v2029;

	i8 v2031 = (i8)(intptr_t)(ws+3848);
	i4 v2032 = *(i4*)(intptr_t)v2031;
	i8 v2033 = (i8)(intptr_t)(ws+3856);
	i8 v2034 = *(i8*)(intptr_t)v2033;
	*(i4*)(intptr_t)v2034 = v2032;

endsub:;
	*p2025 = *(i8*)(intptr_t)(ws+3856);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidReturn workspace at ws+3840 length ws+8
void f104_MidReturn(i8* p2035 /* m */) {

	i1 v2036 = (i1)+26;
	i8 v2037 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2038;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2037)(&v2038, v2036);
	i8 v2039 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v2039 = v2038;

endsub:;
	*p2035 = *(i8*)(intptr_t)(ws+3840);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartcase workspace at ws+3848 length ws+24
void f105_MidStartcase(i8* p2040 /* m */, i8 p2041 /* left */, i1 p2042 /* width */) {
	*(i1*)(intptr_t)(ws+3848) = p2042; /*width */
	*(i8*)(intptr_t)(ws+3856) = p2041; /*left */

	i8 v2043 = (i8)(intptr_t)(ws+3848);
	i1 v2044 = *(i1*)(intptr_t)v2043;
	i8 v2045 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2046;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2045)(&v2046, v2044);
	i1 v2047 = v2046+(+73);
	i8 v2048 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2049;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2048)(&v2049, v2047);
	i8 v2050 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v2050 = v2049;

	i8 v2051 = (i8)(intptr_t)(ws+3856);
	i8 v2052 = *(i8*)(intptr_t)v2051;
	i8 v2053 = (i8)(intptr_t)(ws+3864);
	i8 v2054 = *(i8*)(intptr_t)v2053;
	i8 v2055 = v2054+(+24);
	*(i8*)(intptr_t)v2055 = v2052;

endsub:;
	*p2040 = *(i8*)(intptr_t)(ws+3864);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidJump workspace at ws+3848 length ws+16
void f106_MidJump(i8* p2056 /* m */, i2 p2057 /* label */) {
	*(i2*)(intptr_t)(ws+3848) = p2057; /*label */

	i1 v2058 = (i1)+25;
	i8 v2059 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2060;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2059)(&v2060, v2058);
	i8 v2061 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v2061 = v2060;

	i8 v2062 = (i8)(intptr_t)(ws+3848);
	i2 v2063 = *(i2*)(intptr_t)v2062;
	i8 v2064 = (i8)(intptr_t)(ws+3856);
	i8 v2065 = *(i8*)(intptr_t)v2064;
	*(i2*)(intptr_t)v2065 = v2063;

endsub:;
	*p2056 = *(i8*)(intptr_t)(ws+3856);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupstart workspace at ws+3920 length ws+8
void f107_MidAsmgroupstart(i8* p2066 /* m */) {

	i1 v2067 = (i1)+15;
	i8 v2068 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2069;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2068)(&v2069, v2067);
	i8 v2070 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v2070 = v2069;

endsub:;
	*p2066 = *(i8*)(intptr_t)(ws+3920);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLoad workspace at ws+3920 length ws+24
void f108_MidLoad(i8* p2071 /* m */, i8 p2072 /* left */, i1 p2073 /* width */) {
	*(i1*)(intptr_t)(ws+3920) = p2073; /*width */
	*(i8*)(intptr_t)(ws+3928) = p2072; /*left */

	i8 v2074 = (i8)(intptr_t)(ws+3920);
	i1 v2075 = *(i1*)(intptr_t)v2074;
	i8 v2076 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2077;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2076)(&v2077, v2075);
	i1 v2078 = v2077+(+46);
	i8 v2079 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2080;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2079)(&v2080, v2078);
	i8 v2081 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v2081 = v2080;

	i8 v2082 = (i8)(intptr_t)(ws+3928);
	i8 v2083 = *(i8*)(intptr_t)v2082;
	i8 v2084 = (i8)(intptr_t)(ws+3936);
	i8 v2085 = *(i8*)(intptr_t)v2084;
	i8 v2086 = v2085+(+24);
	*(i8*)(intptr_t)v2086 = v2083;

endsub:;
	*p2071 = *(i8*)(intptr_t)(ws+3936);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartfile workspace at ws+3720 length ws+8
void f109_MidStartfile(i8* p2087 /* m */) {

	i1 v2088 = (i1)+2;
	i8 v2089 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2090;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2089)(&v2090, v2088);
	i8 v2091 = (i8)(intptr_t)(ws+3720);
	*(i8*)(intptr_t)v2091 = v2090;

endsub:;
	*p2087 = *(i8*)(intptr_t)(ws+3720);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupend workspace at ws+3920 length ws+8
void f110_MidAsmgroupend(i8* p2092 /* m */) {

	i1 v2093 = (i1)+16;
	i8 v2094 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2095;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2094)(&v2095, v2093);
	i8 v2096 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v2096 = v2095;

endsub:;
	*p2092 = *(i8*)(intptr_t)(ws+3920);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndfile workspace at ws+3720 length ws+8
void f111_MidEndfile(i8* p2097 /* m */) {

	i1 v2098 = (i1)+3;
	i8 v2099 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2100;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2099)(&v2100, v2098);
	i8 v2101 = (i8)(intptr_t)(ws+3720);
	*(i8*)(intptr_t)v2101 = v2100;

endsub:;
	*p2097 = *(i8*)(intptr_t)(ws+3720);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInits workspace at ws+3864 length ws+16
void f112_MidInits(i8* p2102 /* m */, i8 p2103 /* text */) {
	*(i8*)(intptr_t)(ws+3864) = p2103; /*text */

	i1 v2104 = (i1)+12;
	i8 v2105 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2106;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2105)(&v2106, v2104);
	i8 v2107 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v2107 = v2106;

	i8 v2108 = (i8)(intptr_t)(ws+3864);
	i8 v2109 = *(i8*)(intptr_t)v2108;
	i8 v2110 = (i8)(intptr_t)(ws+3872);
	i8 v2111 = *(i8*)(intptr_t)v2110;
	*(i8*)(intptr_t)v2111 = v2109;

endsub:;
	*p2102 = *(i8*)(intptr_t)(ws+3872);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidString workspace at ws+3840 length ws+16
void f113_MidString(i8* p2112 /* m */, i8 p2113 /* text */) {
	*(i8*)(intptr_t)(ws+3840) = p2113; /*text */

	i1 v2114 = (i1)+44;
	i8 v2115 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2116;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2115)(&v2116, v2114);
	i8 v2117 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v2117 = v2116;

	i8 v2118 = (i8)(intptr_t)(ws+3840);
	i8 v2119 = *(i8*)(intptr_t)v2118;
	i8 v2120 = (i8)(intptr_t)(ws+3848);
	i8 v2121 = *(i8*)(intptr_t)v2120;
	*(i8*)(intptr_t)v2121 = v2119;

endsub:;
	*p2112 = *(i8*)(intptr_t)(ws+3848);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidFallback workspace at ws+4080 length ws+16
void f114_MidFallback(i8* p2122 /* m */, i8 p2123 /* left */) {
	*(i8*)(intptr_t)(ws+4080) = p2123; /*left */

	i1 v2124 = (i1)+22;
	i8 v2125 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2126;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2125)(&v2126, v2124);
	i8 v2127 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v2127 = v2126;

	i8 v2128 = (i8)(intptr_t)(ws+4080);
	i8 v2129 = *(i8*)(intptr_t)v2128;
	i8 v2130 = (i8)(intptr_t)(ws+4088);
	i8 v2131 = *(i8*)(intptr_t)v2130;
	i8 v2132 = v2131+(+24);
	*(i8*)(intptr_t)v2132 = v2129;

endsub:;
	*p2122 = *(i8*)(intptr_t)(ws+4088);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInit workspace at ws+3888 length ws+16
void f115_MidInit(i8* p2133 /* m */, i4 p2134 /* value */, i1 p2135 /* width */) {
	*(i1*)(intptr_t)(ws+3888) = p2135; /*width */
	*(i4*)(intptr_t)(ws+3892) = p2134; /*value */

	i8 v2136 = (i8)(intptr_t)(ws+3888);
	i1 v2137 = *(i1*)(intptr_t)v2136;
	i8 v2138 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2139;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2138)(&v2139, v2137);
	i1 v2140 = v2139+(+7);
	i8 v2141 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2142;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2141)(&v2142, v2140);
	i8 v2143 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v2143 = v2142;

	i8 v2144 = (i8)(intptr_t)(ws+3892);
	i4 v2145 = *(i4*)(intptr_t)v2144;
	i8 v2146 = (i8)(intptr_t)(ws+3896);
	i8 v2147 = *(i8*)(intptr_t)v2146;
	*(i4*)(intptr_t)v2147 = v2145;

endsub:;
	*p2133 = *(i8*)(intptr_t)(ws+3896);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLabel workspace at ws+3904 length ws+16
void f116_MidLabel(i8* p2148 /* m */, i2 p2149 /* label */) {
	*(i2*)(intptr_t)(ws+3904) = p2149; /*label */

	i1 v2150 = (i1)+24;
	i8 v2151 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2152;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2151)(&v2152, v2150);
	i8 v2153 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v2153 = v2152;

	i8 v2154 = (i8)(intptr_t)(ws+3904);
	i2 v2155 = *(i2*)(intptr_t)v2154;
	i8 v2156 = (i8)(intptr_t)(ws+3912);
	i8 v2157 = *(i8*)(intptr_t)v2156;
	*(i2*)(intptr_t)v2157 = v2155;

endsub:;
	*p2148 = *(i8*)(intptr_t)(ws+3912);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCalle workspace at ws+3856 length ws+40
void f118_MidCalle(i8* p2180 /* m */, i8 p2181 /* subr */, i8 p2182 /* right */, i8 p2183 /* left */, i1 p2184 /* width */) {
	*(i1*)(intptr_t)(ws+3856) = p2184; /*width */
	*(i8*)(intptr_t)(ws+3864) = p2183; /*left */
	*(i8*)(intptr_t)(ws+3872) = p2182; /*right */
	*(i8*)(intptr_t)(ws+3880) = p2181; /*subr */

	i8 v2185 = (i8)(intptr_t)(ws+3856);
	i1 v2186 = *(i1*)(intptr_t)v2185;
	i8 v2187 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2188;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2187)(&v2188, v2186);
	i1 v2189 = v2188+(+28);
	i8 v2190 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2191;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2190)(&v2191, v2189);
	i8 v2192 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v2192 = v2191;

	i8 v2193 = (i8)(intptr_t)(ws+3864);
	i8 v2194 = *(i8*)(intptr_t)v2193;
	i8 v2195 = (i8)(intptr_t)(ws+3888);
	i8 v2196 = *(i8*)(intptr_t)v2195;
	i8 v2197 = v2196+(+24);
	*(i8*)(intptr_t)v2197 = v2194;

	i8 v2198 = (i8)(intptr_t)(ws+3872);
	i8 v2199 = *(i8*)(intptr_t)v2198;
	i8 v2200 = (i8)(intptr_t)(ws+3888);
	i8 v2201 = *(i8*)(intptr_t)v2200;
	i8 v2202 = v2201+(+32);
	*(i8*)(intptr_t)v2202 = v2199;

	i8 v2203 = (i8)(intptr_t)(ws+3880);
	i8 v2204 = *(i8*)(intptr_t)v2203;
	i8 v2205 = (i8)(intptr_t)(ws+3888);
	i8 v2206 = *(i8*)(intptr_t)v2205;
	*(i8*)(intptr_t)v2206 = v2204;

endsub:;
	*p2180 = *(i8*)(intptr_t)(ws+3888);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEnd workspace at ws+3848 length ws+8
void f119_MidEnd(i8* p2207 /* m */) {

	i1 v2208 = (i1)+1;
	i8 v2209 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2210;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2209)(&v2210, v2208);
	i8 v2211 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v2211 = v2210;

endsub:;
	*p2207 = *(i8*)(intptr_t)(ws+3848);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmstart workspace at ws+3840 length ws+8
void f120_MidAsmstart(i8* p2212 /* m */) {

	i1 v2213 = (i1)+17;
	i8 v2214 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2215;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2214)(&v2215, v2213);
	i8 v2216 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v2216 = v2215;

endsub:;
	*p2212 = *(i8*)(intptr_t)(ws+3840);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBlts workspace at ws+3880 length ws+40
void f121_MidBlts(i8* p2217 /* m */, i1 p2218 /* negated */, i2 p2219 /* fallthrough */, i2 p2220 /* falselabel */, i2 p2221 /* truelabel */, i8 p2222 /* right */, i8 p2223 /* left */, i1 p2224 /* width */) {
	*(i1*)(intptr_t)(ws+3880) = p2224; /*width */
	*(i8*)(intptr_t)(ws+3888) = p2223; /*left */
	*(i8*)(intptr_t)(ws+3896) = p2222; /*right */
	*(i2*)(intptr_t)(ws+3904) = p2221; /*truelabel */
	*(i2*)(intptr_t)(ws+3906) = p2220; /*falselabel */
	*(i2*)(intptr_t)(ws+3908) = p2219; /*fallthrough */
	*(i1*)(intptr_t)(ws+3910) = p2218; /*negated */

	i8 v2225 = (i8)(intptr_t)(ws+3880);
	i1 v2226 = *(i1*)(intptr_t)v2225;
	i8 v2227 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2228;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2227)(&v2228, v2226);
	i1 v2229 = v2228+(+63);
	i8 v2230 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2231;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2230)(&v2231, v2229);
	i8 v2232 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v2232 = v2231;

	i8 v2233 = (i8)(intptr_t)(ws+3888);
	i8 v2234 = *(i8*)(intptr_t)v2233;
	i8 v2235 = (i8)(intptr_t)(ws+3912);
	i8 v2236 = *(i8*)(intptr_t)v2235;
	i8 v2237 = v2236+(+24);
	*(i8*)(intptr_t)v2237 = v2234;

	i8 v2238 = (i8)(intptr_t)(ws+3896);
	i8 v2239 = *(i8*)(intptr_t)v2238;
	i8 v2240 = (i8)(intptr_t)(ws+3912);
	i8 v2241 = *(i8*)(intptr_t)v2240;
	i8 v2242 = v2241+(+32);
	*(i8*)(intptr_t)v2242 = v2239;

	i8 v2243 = (i8)(intptr_t)(ws+3904);
	i2 v2244 = *(i2*)(intptr_t)v2243;
	i8 v2245 = (i8)(intptr_t)(ws+3912);
	i8 v2246 = *(i8*)(intptr_t)v2245;
	*(i2*)(intptr_t)v2246 = v2244;

	i8 v2247 = (i8)(intptr_t)(ws+3906);
	i2 v2248 = *(i2*)(intptr_t)v2247;
	i8 v2249 = (i8)(intptr_t)(ws+3912);
	i8 v2250 = *(i8*)(intptr_t)v2249;
	i8 v2251 = v2250+(+2);
	*(i2*)(intptr_t)v2251 = v2248;

	i8 v2252 = (i8)(intptr_t)(ws+3908);
	i2 v2253 = *(i2*)(intptr_t)v2252;
	i8 v2254 = (i8)(intptr_t)(ws+3912);
	i8 v2255 = *(i8*)(intptr_t)v2254;
	i8 v2256 = v2255+(+4);
	*(i2*)(intptr_t)v2256 = v2253;

	i8 v2257 = (i8)(intptr_t)(ws+3910);
	i1 v2258 = *(i1*)(intptr_t)v2257;
	i8 v2259 = (i8)(intptr_t)(ws+3912);
	i8 v2260 = *(i8*)(intptr_t)v2259;
	i8 v2261 = v2260+(+6);
	*(i1*)(intptr_t)v2261 = v2258;

endsub:;
	*p2217 = *(i8*)(intptr_t)(ws+3912);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndsub workspace at ws+3856 length ws+16
void f122_MidEndsub(i8* p2262 /* m */, i8 p2263 /* subr */) {
	*(i8*)(intptr_t)(ws+3856) = p2263; /*subr */

	i1 v2264 = (i1)+5;
	i8 v2265 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2266;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2265)(&v2266, v2264);
	i8 v2267 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v2267 = v2266;

	i8 v2268 = (i8)(intptr_t)(ws+3856);
	i8 v2269 = *(i8*)(intptr_t)v2268;
	i8 v2270 = (i8)(intptr_t)(ws+3864);
	i8 v2271 = *(i8*)(intptr_t)v2270;
	*(i8*)(intptr_t)v2271 = v2269;

endsub:;
	*p2262 = *(i8*)(intptr_t)(ws+3864);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPair workspace at ws+3840 length ws+24
void f125_MidPair(i8* p2315 /* m */, i8 p2316 /* right */, i8 p2317 /* left */) {
	*(i8*)(intptr_t)(ws+3840) = p2317; /*left */
	*(i8*)(intptr_t)(ws+3848) = p2316; /*right */

	i1 v2318 = (i1)+23;
	i8 v2319 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2320;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2319)(&v2320, v2318);
	i8 v2321 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v2321 = v2320;

	i8 v2322 = (i8)(intptr_t)(ws+3840);
	i8 v2323 = *(i8*)(intptr_t)v2322;
	i8 v2324 = (i8)(intptr_t)(ws+3856);
	i8 v2325 = *(i8*)(intptr_t)v2324;
	i8 v2326 = v2325+(+24);
	*(i8*)(intptr_t)v2326 = v2323;

	i8 v2327 = (i8)(intptr_t)(ws+3848);
	i8 v2328 = *(i8*)(intptr_t)v2327;
	i8 v2329 = (i8)(intptr_t)(ws+3856);
	i8 v2330 = *(i8*)(intptr_t)v2329;
	i8 v2331 = v2330+(+32);
	*(i8*)(intptr_t)v2331 = v2328;

endsub:;
	*p2315 = *(i8*)(intptr_t)(ws+3856);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBor workspace at ws+3840 length ws+32
void f128_MidBor(i8* p2376 /* m */, i1 p2377 /* negated */, i2 p2378 /* fallthrough */, i2 p2379 /* falselabel */, i2 p2380 /* truelabel */, i8 p2381 /* right */, i8 p2382 /* left */) {
	*(i8*)(intptr_t)(ws+3840) = p2382; /*left */
	*(i8*)(intptr_t)(ws+3848) = p2381; /*right */
	*(i2*)(intptr_t)(ws+3856) = p2380; /*truelabel */
	*(i2*)(intptr_t)(ws+3858) = p2379; /*falselabel */
	*(i2*)(intptr_t)(ws+3860) = p2378; /*fallthrough */
	*(i1*)(intptr_t)(ws+3862) = p2377; /*negated */

	i1 v2383 = (i1)+57;
	i8 v2384 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2385;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2384)(&v2385, v2383);
	i8 v2386 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v2386 = v2385;

	i8 v2387 = (i8)(intptr_t)(ws+3840);
	i8 v2388 = *(i8*)(intptr_t)v2387;
	i8 v2389 = (i8)(intptr_t)(ws+3864);
	i8 v2390 = *(i8*)(intptr_t)v2389;
	i8 v2391 = v2390+(+24);
	*(i8*)(intptr_t)v2391 = v2388;

	i8 v2392 = (i8)(intptr_t)(ws+3848);
	i8 v2393 = *(i8*)(intptr_t)v2392;
	i8 v2394 = (i8)(intptr_t)(ws+3864);
	i8 v2395 = *(i8*)(intptr_t)v2394;
	i8 v2396 = v2395+(+32);
	*(i8*)(intptr_t)v2396 = v2393;

	i8 v2397 = (i8)(intptr_t)(ws+3856);
	i2 v2398 = *(i2*)(intptr_t)v2397;
	i8 v2399 = (i8)(intptr_t)(ws+3864);
	i8 v2400 = *(i8*)(intptr_t)v2399;
	*(i2*)(intptr_t)v2400 = v2398;

	i8 v2401 = (i8)(intptr_t)(ws+3858);
	i2 v2402 = *(i2*)(intptr_t)v2401;
	i8 v2403 = (i8)(intptr_t)(ws+3864);
	i8 v2404 = *(i8*)(intptr_t)v2403;
	i8 v2405 = v2404+(+2);
	*(i2*)(intptr_t)v2405 = v2402;

	i8 v2406 = (i8)(intptr_t)(ws+3860);
	i2 v2407 = *(i2*)(intptr_t)v2406;
	i8 v2408 = (i8)(intptr_t)(ws+3864);
	i8 v2409 = *(i8*)(intptr_t)v2408;
	i8 v2410 = v2409+(+4);
	*(i2*)(intptr_t)v2410 = v2407;

	i8 v2411 = (i8)(intptr_t)(ws+3862);
	i1 v2412 = *(i1*)(intptr_t)v2411;
	i8 v2413 = (i8)(intptr_t)(ws+3864);
	i8 v2414 = *(i8*)(intptr_t)v2413;
	i8 v2415 = v2414+(+6);
	*(i1*)(intptr_t)v2415 = v2412;

endsub:;
	*p2376 = *(i8*)(intptr_t)(ws+3864);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBeq workspace at ws+3880 length ws+40
void f134_MidBeq(i8* p2524 /* m */, i1 p2525 /* negated */, i2 p2526 /* fallthrough */, i2 p2527 /* falselabel */, i2 p2528 /* truelabel */, i8 p2529 /* right */, i8 p2530 /* left */, i1 p2531 /* width */) {
	*(i1*)(intptr_t)(ws+3880) = p2531; /*width */
	*(i8*)(intptr_t)(ws+3888) = p2530; /*left */
	*(i8*)(intptr_t)(ws+3896) = p2529; /*right */
	*(i2*)(intptr_t)(ws+3904) = p2528; /*truelabel */
	*(i2*)(intptr_t)(ws+3906) = p2527; /*falselabel */
	*(i2*)(intptr_t)(ws+3908) = p2526; /*fallthrough */
	*(i1*)(intptr_t)(ws+3910) = p2525; /*negated */

	i8 v2532 = (i8)(intptr_t)(ws+3880);
	i1 v2533 = *(i1*)(intptr_t)v2532;
	i8 v2534 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2535;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2534)(&v2535, v2533);
	i1 v2536 = v2535+(+58);
	i8 v2537 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2538;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2537)(&v2538, v2536);
	i8 v2539 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v2539 = v2538;

	i8 v2540 = (i8)(intptr_t)(ws+3888);
	i8 v2541 = *(i8*)(intptr_t)v2540;
	i8 v2542 = (i8)(intptr_t)(ws+3912);
	i8 v2543 = *(i8*)(intptr_t)v2542;
	i8 v2544 = v2543+(+24);
	*(i8*)(intptr_t)v2544 = v2541;

	i8 v2545 = (i8)(intptr_t)(ws+3896);
	i8 v2546 = *(i8*)(intptr_t)v2545;
	i8 v2547 = (i8)(intptr_t)(ws+3912);
	i8 v2548 = *(i8*)(intptr_t)v2547;
	i8 v2549 = v2548+(+32);
	*(i8*)(intptr_t)v2549 = v2546;

	i8 v2550 = (i8)(intptr_t)(ws+3904);
	i2 v2551 = *(i2*)(intptr_t)v2550;
	i8 v2552 = (i8)(intptr_t)(ws+3912);
	i8 v2553 = *(i8*)(intptr_t)v2552;
	*(i2*)(intptr_t)v2553 = v2551;

	i8 v2554 = (i8)(intptr_t)(ws+3906);
	i2 v2555 = *(i2*)(intptr_t)v2554;
	i8 v2556 = (i8)(intptr_t)(ws+3912);
	i8 v2557 = *(i8*)(intptr_t)v2556;
	i8 v2558 = v2557+(+2);
	*(i2*)(intptr_t)v2558 = v2555;

	i8 v2559 = (i8)(intptr_t)(ws+3908);
	i2 v2560 = *(i2*)(intptr_t)v2559;
	i8 v2561 = (i8)(intptr_t)(ws+3912);
	i8 v2562 = *(i8*)(intptr_t)v2561;
	i8 v2563 = v2562+(+4);
	*(i2*)(intptr_t)v2563 = v2560;

	i8 v2564 = (i8)(intptr_t)(ws+3910);
	i1 v2565 = *(i1*)(intptr_t)v2564;
	i8 v2566 = (i8)(intptr_t)(ws+3912);
	i8 v2567 = *(i8*)(intptr_t)v2566;
	i8 v2568 = v2567+(+6);
	*(i1*)(intptr_t)v2568 = v2565;

endsub:;
	*p2524 = *(i8*)(intptr_t)(ws+3912);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidArg workspace at ws+3848 length ws+48
void f135_MidArg(i8* p2569 /* m */, i1 p2570 /* remaining */, i8 p2571 /* subr */, i8 p2572 /* right */, i8 p2573 /* left */, i1 p2574 /* width */) {
	*(i1*)(intptr_t)(ws+3848) = p2574; /*width */
	*(i8*)(intptr_t)(ws+3856) = p2573; /*left */
	*(i8*)(intptr_t)(ws+3864) = p2572; /*right */
	*(i8*)(intptr_t)(ws+3872) = p2571; /*subr */
	*(i1*)(intptr_t)(ws+3880) = p2570; /*remaining */

	i8 v2575 = (i8)(intptr_t)(ws+3848);
	i1 v2576 = *(i1*)(intptr_t)v2575;
	i8 v2577 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2578;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2577)(&v2578, v2576);
	i1 v2579 = v2578+(+33);
	i8 v2580 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2581;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2580)(&v2581, v2579);
	i8 v2582 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v2582 = v2581;

	i8 v2583 = (i8)(intptr_t)(ws+3856);
	i8 v2584 = *(i8*)(intptr_t)v2583;
	i8 v2585 = (i8)(intptr_t)(ws+3888);
	i8 v2586 = *(i8*)(intptr_t)v2585;
	i8 v2587 = v2586+(+24);
	*(i8*)(intptr_t)v2587 = v2584;

	i8 v2588 = (i8)(intptr_t)(ws+3864);
	i8 v2589 = *(i8*)(intptr_t)v2588;
	i8 v2590 = (i8)(intptr_t)(ws+3888);
	i8 v2591 = *(i8*)(intptr_t)v2590;
	i8 v2592 = v2591+(+32);
	*(i8*)(intptr_t)v2592 = v2589;

	i8 v2593 = (i8)(intptr_t)(ws+3872);
	i8 v2594 = *(i8*)(intptr_t)v2593;
	i8 v2595 = (i8)(intptr_t)(ws+3888);
	i8 v2596 = *(i8*)(intptr_t)v2595;
	*(i8*)(intptr_t)v2596 = v2594;

	i8 v2597 = (i8)(intptr_t)(ws+3880);
	i1 v2598 = *(i1*)(intptr_t)v2597;
	i8 v2599 = (i8)(intptr_t)(ws+3888);
	i8 v2600 = *(i8*)(intptr_t)v2599;
	i8 v2601 = v2600+(+8);
	*(i1*)(intptr_t)v2601 = v2598;

endsub:;
	*p2569 = *(i8*)(intptr_t)(ws+3888);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndinit workspace at ws+3840 length ws+8
void f137_MidEndinit(i8* p2623 /* m */) {

	i1 v2624 = (i1)+14;
	i8 v2625 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2626;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2625)(&v2626, v2624);
	i8 v2627 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v2627 = v2626;

endsub:;
	*p2623 = *(i8*)(intptr_t)(ws+3840);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInita workspace at ws+3864 length ws+24
void f138_MidInita(i8* p2628 /* m */, i2 p2629 /* off */, i8 p2630 /* sym */) {
	*(i8*)(intptr_t)(ws+3864) = p2630; /*sym */
	*(i2*)(intptr_t)(ws+3872) = p2629; /*off */

	i1 v2631 = (i1)+13;
	i8 v2632 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2633;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2632)(&v2633, v2631);
	i8 v2634 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v2634 = v2633;

	i8 v2635 = (i8)(intptr_t)(ws+3864);
	i8 v2636 = *(i8*)(intptr_t)v2635;
	i8 v2637 = (i8)(intptr_t)(ws+3880);
	i8 v2638 = *(i8*)(intptr_t)v2637;
	*(i8*)(intptr_t)v2638 = v2636;

	i8 v2639 = (i8)(intptr_t)(ws+3872);
	i2 v2640 = *(i2*)(intptr_t)v2639;
	i8 v2641 = (i8)(intptr_t)(ws+3880);
	i8 v2642 = *(i8*)(intptr_t)v2641;
	i8 v2643 = v2642+(+8);
	*(i2*)(intptr_t)v2643 = v2640;

endsub:;
	*p2628 = *(i8*)(intptr_t)(ws+3880);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCall workspace at ws+3888 length ws+32
void f140_MidCall(i8* p2660 /* m */, i8 p2661 /* subr */, i8 p2662 /* right */, i8 p2663 /* left */) {
	*(i8*)(intptr_t)(ws+3888) = p2663; /*left */
	*(i8*)(intptr_t)(ws+3896) = p2662; /*right */
	*(i8*)(intptr_t)(ws+3904) = p2661; /*subr */

	i1 v2664 = (i1)+27;
	i8 v2665 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2666;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2665)(&v2666, v2664);
	i8 v2667 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v2667 = v2666;

	i8 v2668 = (i8)(intptr_t)(ws+3888);
	i8 v2669 = *(i8*)(intptr_t)v2668;
	i8 v2670 = (i8)(intptr_t)(ws+3912);
	i8 v2671 = *(i8*)(intptr_t)v2670;
	i8 v2672 = v2671+(+24);
	*(i8*)(intptr_t)v2672 = v2669;

	i8 v2673 = (i8)(intptr_t)(ws+3896);
	i8 v2674 = *(i8*)(intptr_t)v2673;
	i8 v2675 = (i8)(intptr_t)(ws+3912);
	i8 v2676 = *(i8*)(intptr_t)v2675;
	i8 v2677 = v2676+(+32);
	*(i8*)(intptr_t)v2677 = v2674;

	i8 v2678 = (i8)(intptr_t)(ws+3904);
	i8 v2679 = *(i8*)(intptr_t)v2678;
	i8 v2680 = (i8)(intptr_t)(ws+3912);
	i8 v2681 = *(i8*)(intptr_t)v2680;
	*(i8*)(intptr_t)v2681 = v2679;

endsub:;
	*p2660 = *(i8*)(intptr_t)(ws+3912);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBand workspace at ws+3840 length ws+32
void f141_MidBand(i8* p2682 /* m */, i1 p2683 /* negated */, i2 p2684 /* fallthrough */, i2 p2685 /* falselabel */, i2 p2686 /* truelabel */, i8 p2687 /* right */, i8 p2688 /* left */) {
	*(i8*)(intptr_t)(ws+3840) = p2688; /*left */
	*(i8*)(intptr_t)(ws+3848) = p2687; /*right */
	*(i2*)(intptr_t)(ws+3856) = p2686; /*truelabel */
	*(i2*)(intptr_t)(ws+3858) = p2685; /*falselabel */
	*(i2*)(intptr_t)(ws+3860) = p2684; /*fallthrough */
	*(i1*)(intptr_t)(ws+3862) = p2683; /*negated */

	i1 v2689 = (i1)+56;
	i8 v2690 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2691;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2690)(&v2691, v2689);
	i8 v2692 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v2692 = v2691;

	i8 v2693 = (i8)(intptr_t)(ws+3840);
	i8 v2694 = *(i8*)(intptr_t)v2693;
	i8 v2695 = (i8)(intptr_t)(ws+3864);
	i8 v2696 = *(i8*)(intptr_t)v2695;
	i8 v2697 = v2696+(+24);
	*(i8*)(intptr_t)v2697 = v2694;

	i8 v2698 = (i8)(intptr_t)(ws+3848);
	i8 v2699 = *(i8*)(intptr_t)v2698;
	i8 v2700 = (i8)(intptr_t)(ws+3864);
	i8 v2701 = *(i8*)(intptr_t)v2700;
	i8 v2702 = v2701+(+32);
	*(i8*)(intptr_t)v2702 = v2699;

	i8 v2703 = (i8)(intptr_t)(ws+3856);
	i2 v2704 = *(i2*)(intptr_t)v2703;
	i8 v2705 = (i8)(intptr_t)(ws+3864);
	i8 v2706 = *(i8*)(intptr_t)v2705;
	*(i2*)(intptr_t)v2706 = v2704;

	i8 v2707 = (i8)(intptr_t)(ws+3858);
	i2 v2708 = *(i2*)(intptr_t)v2707;
	i8 v2709 = (i8)(intptr_t)(ws+3864);
	i8 v2710 = *(i8*)(intptr_t)v2709;
	i8 v2711 = v2710+(+2);
	*(i2*)(intptr_t)v2711 = v2708;

	i8 v2712 = (i8)(intptr_t)(ws+3860);
	i2 v2713 = *(i2*)(intptr_t)v2712;
	i8 v2714 = (i8)(intptr_t)(ws+3864);
	i8 v2715 = *(i8*)(intptr_t)v2714;
	i8 v2716 = v2715+(+4);
	*(i2*)(intptr_t)v2716 = v2713;

	i8 v2717 = (i8)(intptr_t)(ws+3862);
	i1 v2718 = *(i1*)(intptr_t)v2717;
	i8 v2719 = (i8)(intptr_t)(ws+3864);
	i8 v2720 = *(i8*)(intptr_t)v2719;
	i8 v2721 = v2720+(+6);
	*(i1*)(intptr_t)v2721 = v2718;

endsub:;
	*p2682 = *(i8*)(intptr_t)(ws+3864);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidConstant workspace at ws+3936 length ws+16
void f142_MidConstant(i8* p2722 /* m */, i4 p2723 /* value */) {
	*(i4*)(intptr_t)(ws+3936) = p2723; /*value */

	i1 v2724 = (i1)+43;
	i8 v2725 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2726;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2725)(&v2726, v2724);
	i8 v2727 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v2727 = v2726;

	i8 v2728 = (i8)(intptr_t)(ws+3936);
	i4 v2729 = *(i4*)(intptr_t)v2728;
	i8 v2730 = (i8)(intptr_t)(ws+3944);
	i8 v2731 = *(i8*)(intptr_t)v2730;
	*(i4*)(intptr_t)v2731 = v2729;

endsub:;
	*p2722 = *(i8*)(intptr_t)(ws+3944);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStore workspace at ws+3888 length ws+32
void f144_MidStore(i8* p2754 /* m */, i8 p2755 /* right */, i8 p2756 /* left */, i1 p2757 /* width */) {
	*(i1*)(intptr_t)(ws+3888) = p2757; /*width */
	*(i8*)(intptr_t)(ws+3896) = p2756; /*left */
	*(i8*)(intptr_t)(ws+3904) = p2755; /*right */

	i8 v2758 = (i8)(intptr_t)(ws+3888);
	i1 v2759 = *(i1*)(intptr_t)v2758;
	i8 v2760 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2761;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2760)(&v2761, v2759);
	i1 v2762 = v2761+(+51);
	i8 v2763 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2764;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2763)(&v2764, v2762);
	i8 v2765 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v2765 = v2764;

	i8 v2766 = (i8)(intptr_t)(ws+3896);
	i8 v2767 = *(i8*)(intptr_t)v2766;
	i8 v2768 = (i8)(intptr_t)(ws+3912);
	i8 v2769 = *(i8*)(intptr_t)v2768;
	i8 v2770 = v2769+(+24);
	*(i8*)(intptr_t)v2770 = v2767;

	i8 v2771 = (i8)(intptr_t)(ws+3904);
	i8 v2772 = *(i8*)(intptr_t)v2771;
	i8 v2773 = (i8)(intptr_t)(ws+3912);
	i8 v2774 = *(i8*)(intptr_t)v2773;
	i8 v2775 = v2774+(+32);
	*(i8*)(intptr_t)v2775 = v2772;

endsub:;
	*p2754 = *(i8*)(intptr_t)(ws+3912);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmend workspace at ws+3840 length ws+8
void f145_MidAsmend(i8* p2776 /* m */) {

	i1 v2777 = (i1)+21;
	i8 v2778 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2779;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2778)(&v2779, v2777);
	i8 v2780 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v2780 = v2779;

endsub:;
	*p2776 = *(i8*)(intptr_t)(ws+3840);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartsub workspace at ws+3848 length ws+16
void f146_MidStartsub(i8* p2781 /* m */, i8 p2782 /* subr */) {
	*(i8*)(intptr_t)(ws+3848) = p2782; /*subr */

	i1 v2783 = (i1)+4;
	i8 v2784 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2785;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2784)(&v2785, v2783);
	i8 v2786 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v2786 = v2785;

	i8 v2787 = (i8)(intptr_t)(ws+3848);
	i8 v2788 = *(i8*)(intptr_t)v2787;
	i8 v2789 = (i8)(intptr_t)(ws+3856);
	i8 v2790 = *(i8*)(intptr_t)v2789;
	*(i8*)(intptr_t)v2790 = v2788;

endsub:;
	*p2781 = *(i8*)(intptr_t)(ws+3856);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsymbol workspace at ws+3848 length ws+16
void f148_MidAsmsymbol(i8* p2813 /* m */, i8 p2814 /* sym */) {
	*(i8*)(intptr_t)(ws+3848) = p2814; /*sym */

	i1 v2815 = (i1)+19;
	i8 v2816 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2817;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2816)(&v2817, v2815);
	i8 v2818 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v2818 = v2817;

	i8 v2819 = (i8)(intptr_t)(ws+3848);
	i8 v2820 = *(i8*)(intptr_t)v2819;
	i8 v2821 = (i8)(intptr_t)(ws+3856);
	i8 v2822 = *(i8*)(intptr_t)v2821;
	*(i8*)(intptr_t)v2822 = v2820;

endsub:;
	*p2813 = *(i8*)(intptr_t)(ws+3856);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartinit workspace at ws+3856 length ws+16
void f149_MidStartinit(i8* p2823 /* m */, i8 p2824 /* sym */) {
	*(i8*)(intptr_t)(ws+3856) = p2824; /*sym */

	i1 v2825 = (i1)+6;
	i8 v2826 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2827;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2826)(&v2827, v2825);
	i8 v2828 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v2828 = v2827;

	i8 v2829 = (i8)(intptr_t)(ws+3856);
	i8 v2830 = *(i8*)(intptr_t)v2829;
	i8 v2831 = (i8)(intptr_t)(ws+3864);
	i8 v2832 = *(i8*)(intptr_t)v2831;
	*(i8*)(intptr_t)v2832 = v2830;

endsub:;
	*p2823 = *(i8*)(intptr_t)(ws+3864);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidWhencase workspace at ws+3840 length ws+24
void f150_MidWhencase(i8* p2833 /* m */, i2 p2834 /* falselabel */, i4 p2835 /* value */, i1 p2836 /* width */) {
	*(i1*)(intptr_t)(ws+3840) = p2836; /*width */
	*(i4*)(intptr_t)(ws+3844) = p2835; /*value */
	*(i2*)(intptr_t)(ws+3848) = p2834; /*falselabel */

	i8 v2837 = (i8)(intptr_t)(ws+3840);
	i1 v2838 = *(i1*)(intptr_t)v2837;
	i8 v2839 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2840;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2839)(&v2840, v2838);
	i1 v2841 = v2840+(+78);
	i8 v2842 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2843;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2842)(&v2843, v2841);
	i8 v2844 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v2844 = v2843;

	i8 v2845 = (i8)(intptr_t)(ws+3844);
	i4 v2846 = *(i4*)(intptr_t)v2845;
	i8 v2847 = (i8)(intptr_t)(ws+3856);
	i8 v2848 = *(i8*)(intptr_t)v2847;
	*(i4*)(intptr_t)v2848 = v2846;

	i8 v2849 = (i8)(intptr_t)(ws+3848);
	i2 v2850 = *(i2*)(intptr_t)v2849;
	i8 v2851 = (i8)(intptr_t)(ws+3856);
	i8 v2852 = *(i8*)(intptr_t)v2851;
	i8 v2853 = v2852+(+4);
	*(i2*)(intptr_t)v2853 = v2850;

endsub:;
	*p2833 = *(i8*)(intptr_t)(ws+3856);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPoparg workspace at ws+3888 length ws+32
void f154_MidPoparg(i8* p2914 /* m */, i1 p2915 /* remaining */, i8 p2916 /* subr */, i1 p2917 /* width */) {
	*(i1*)(intptr_t)(ws+3888) = p2917; /*width */
	*(i8*)(intptr_t)(ws+3896) = p2916; /*subr */
	*(i1*)(intptr_t)(ws+3904) = p2915; /*remaining */

	i8 v2918 = (i8)(intptr_t)(ws+3888);
	i1 v2919 = *(i1*)(intptr_t)v2918;
	i8 v2920 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2921;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2920)(&v2921, v2919);
	i1 v2922 = v2921+(+38);
	i8 v2923 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2924;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2923)(&v2924, v2922);
	i8 v2925 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v2925 = v2924;

	i8 v2926 = (i8)(intptr_t)(ws+3896);
	i8 v2927 = *(i8*)(intptr_t)v2926;
	i8 v2928 = (i8)(intptr_t)(ws+3912);
	i8 v2929 = *(i8*)(intptr_t)v2928;
	*(i8*)(intptr_t)v2929 = v2927;

	i8 v2930 = (i8)(intptr_t)(ws+3904);
	i1 v2931 = *(i1*)(intptr_t)v2930;
	i8 v2932 = (i8)(intptr_t)(ws+3912);
	i8 v2933 = *(i8*)(intptr_t)v2932;
	i8 v2934 = v2933+(+8);
	*(i1*)(intptr_t)v2934 = v2931;

endsub:;
	*p2914 = *(i8*)(intptr_t)(ws+3912);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndcase workspace at ws+3848 length ws+16
void f155_MidEndcase(i8* p2935 /* m */, i1 p2936 /* width */) {
	*(i1*)(intptr_t)(ws+3848) = p2936; /*width */

	i8 v2937 = (i8)(intptr_t)(ws+3848);
	i1 v2938 = *(i1*)(intptr_t)v2937;
	i8 v2939 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2940;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2939)(&v2940, v2938);
	i1 v2941 = v2940+(+83);
	i8 v2942 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2943;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2942)(&v2943, v2941);
	i8 v2944 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v2944 = v2943;

endsub:;
	*p2935 = *(i8*)(intptr_t)(ws+3856);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBltu workspace at ws+3880 length ws+40
void f156_MidBltu(i8* p2945 /* m */, i1 p2946 /* negated */, i2 p2947 /* fallthrough */, i2 p2948 /* falselabel */, i2 p2949 /* truelabel */, i8 p2950 /* right */, i8 p2951 /* left */, i1 p2952 /* width */) {
	*(i1*)(intptr_t)(ws+3880) = p2952; /*width */
	*(i8*)(intptr_t)(ws+3888) = p2951; /*left */
	*(i8*)(intptr_t)(ws+3896) = p2950; /*right */
	*(i2*)(intptr_t)(ws+3904) = p2949; /*truelabel */
	*(i2*)(intptr_t)(ws+3906) = p2948; /*falselabel */
	*(i2*)(intptr_t)(ws+3908) = p2947; /*fallthrough */
	*(i1*)(intptr_t)(ws+3910) = p2946; /*negated */

	i8 v2953 = (i8)(intptr_t)(ws+3880);
	i1 v2954 = *(i1*)(intptr_t)v2953;
	i8 v2955 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2956;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2955)(&v2956, v2954);
	i1 v2957 = v2956+(+68);
	i8 v2958 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2959;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2958)(&v2959, v2957);
	i8 v2960 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v2960 = v2959;

	i8 v2961 = (i8)(intptr_t)(ws+3888);
	i8 v2962 = *(i8*)(intptr_t)v2961;
	i8 v2963 = (i8)(intptr_t)(ws+3912);
	i8 v2964 = *(i8*)(intptr_t)v2963;
	i8 v2965 = v2964+(+24);
	*(i8*)(intptr_t)v2965 = v2962;

	i8 v2966 = (i8)(intptr_t)(ws+3896);
	i8 v2967 = *(i8*)(intptr_t)v2966;
	i8 v2968 = (i8)(intptr_t)(ws+3912);
	i8 v2969 = *(i8*)(intptr_t)v2968;
	i8 v2970 = v2969+(+32);
	*(i8*)(intptr_t)v2970 = v2967;

	i8 v2971 = (i8)(intptr_t)(ws+3904);
	i2 v2972 = *(i2*)(intptr_t)v2971;
	i8 v2973 = (i8)(intptr_t)(ws+3912);
	i8 v2974 = *(i8*)(intptr_t)v2973;
	*(i2*)(intptr_t)v2974 = v2972;

	i8 v2975 = (i8)(intptr_t)(ws+3906);
	i2 v2976 = *(i2*)(intptr_t)v2975;
	i8 v2977 = (i8)(intptr_t)(ws+3912);
	i8 v2978 = *(i8*)(intptr_t)v2977;
	i8 v2979 = v2978+(+2);
	*(i2*)(intptr_t)v2979 = v2976;

	i8 v2980 = (i8)(intptr_t)(ws+3908);
	i2 v2981 = *(i2*)(intptr_t)v2980;
	i8 v2982 = (i8)(intptr_t)(ws+3912);
	i8 v2983 = *(i8*)(intptr_t)v2982;
	i8 v2984 = v2983+(+4);
	*(i2*)(intptr_t)v2984 = v2981;

	i8 v2985 = (i8)(intptr_t)(ws+3910);
	i1 v2986 = *(i1*)(intptr_t)v2985;
	i8 v2987 = (i8)(intptr_t)(ws+3912);
	i8 v2988 = *(i8*)(intptr_t)v2987;
	i8 v2989 = v2988+(+6);
	*(i1*)(intptr_t)v2989 = v2986;

endsub:;
	*p2945 = *(i8*)(intptr_t)(ws+3912);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+4096 length ws+16
void f98_AllocateNewNode(i8* p2992 /* m */, i1 p2993 /* code */) {
	*(i1*)(intptr_t)(ws+4096) = p2993; /*code */

	i8 v2994 = (i8)(intptr_t)(ws+928);
	i8 v2995 = *(i8*)(intptr_t)v2994;
	i8 v2996 = (i8)+0;
	if (v2995==v2996) goto c02_0205; else goto c02_0204;

c02_0204:;

	i8 v2997 = (i8)(intptr_t)(ws+928);
	i8 v2998 = *(i8*)(intptr_t)v2997;
	i8 v2999 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v2999 = v2998;

	i8 v3000 = (i8)(intptr_t)(ws+928);
	i8 v3001 = *(i8*)(intptr_t)v3000;
	i8 v3002 = v3001+(+24);
	i8 v3003 = *(i8*)(intptr_t)v3002;
	i8 v3004 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3004 = v3003;

	i8 v3005 = (i8)(intptr_t)(ws+4104);
	i8 v3006 = *(i8*)(intptr_t)v3005;
	i1 v3007 = (i1)+0;
	i8 v3008 = (i8)+59;
	i8 v3009 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v3009)(v3008, v3007, v3006);

	goto c02_0201;

c02_0205:;

	i8 v3010 = (i8)+59;
	i8 v3011 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v3012;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3011)(&v3012, v3010);
	i8 v3013 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v3013 = v3012;

c02_0201:;

	i8 v3014 = (i8)(intptr_t)(ws+4096);
	i1 v3015 = *(i1*)(intptr_t)v3014;
	i8 v3016 = (i8)(intptr_t)(ws+4104);
	i8 v3017 = *(i8*)(intptr_t)v3016;
	i8 v3018 = v3017+(+58);
	*(i1*)(intptr_t)v3018 = v3015;

endsub:;
	*p2992 = *(i8*)(intptr_t)(ws+4104);
}

// FreeNode workspace at ws+4016 length ws+8
void f157_FreeNode(i8 p3019 /* node */) {
	*(i8*)(intptr_t)(ws+4016) = p3019; /*node */

	i8 v3020 = (i8)(intptr_t)(ws+928);
	i8 v3021 = *(i8*)(intptr_t)v3020;
	i8 v3022 = (i8)(intptr_t)(ws+4016);
	i8 v3023 = *(i8*)(intptr_t)v3022;
	i8 v3024 = v3023+(+24);
	*(i8*)(intptr_t)v3024 = v3021;

	i8 v3025 = (i8)(intptr_t)(ws+4016);
	i8 v3026 = *(i8*)(intptr_t)v3025;
	i8 v3027 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3027 = v3026;

endsub:;
}
	void f33_Free(i8 /* block */);

// PurgeAllFreeNodes workspace at ws+4128 length ws+8
void f67_PurgeAllFreeNodes(void) {

c02_0208:;

	i8 v3028 = (i8)(intptr_t)(ws+928);
	i8 v3029 = *(i8*)(intptr_t)v3028;
	i8 v3030 = (i8)+0;
	if (v3029==v3030) goto c02_020b; else goto c02_020a;

c02_020a:;

	i8 v3031 = (i8)(intptr_t)(ws+928);
	i8 v3032 = *(i8*)(intptr_t)v3031;
	i8 v3033 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v3033 = v3032;

	i8 v3034 = (i8)(intptr_t)(ws+928);
	i8 v3035 = *(i8*)(intptr_t)v3034;
	i8 v3036 = v3035+(+24);
	i8 v3037 = *(i8*)(intptr_t)v3036;
	i8 v3038 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3038 = v3037;

	i8 v3039 = (i8)(intptr_t)(ws+4128);
	i8 v3040 = *(i8*)(intptr_t)v3039;
	i8 v3041 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v3041)(v3040);

	goto c02_0208;

c02_020b:;

endsub:;
}

// NodeWidth workspace at ws+3888 length ws+9
void f158_NodeWidth(i1* p3042 /* width */, i8 p3043 /* node */) {
	*(i8*)(intptr_t)(ws+3888) = p3043; /*node */

	i1 v3044 = (i1)+0;
	i8 v3045 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v3045 = v3044;

	i8 v3046 = (i8)(intptr_t)(ws+3888);
	i8 v3047 = *(i8*)(intptr_t)v3046;
	i8 v3048 = v3047+(+16);
	i8 v3049 = *(i8*)(intptr_t)v3048;
	i8 v3050 = (i8)+0;
	if (v3049==v3050) goto c02_0210; else goto c02_020f;

c02_020f:;

	i8 v3051 = (i8)(intptr_t)(ws+3888);
	i8 v3052 = *(i8*)(intptr_t)v3051;
	i8 v3053 = v3052+(+16);
	i8 v3054 = *(i8*)(intptr_t)v3053;
	i8 v3055 = v3054+(+48);
	i2 v3056 = *(i2*)(intptr_t)v3055;
	i1 v3057 = v3056;
	i8 v3058 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v3058 = v3057;

	goto c02_020c;

c02_0210:;

c02_020c:;

endsub:;
	*p3042 = *(i1*)(intptr_t)(ws+3896);
}
const i1 c02_s0043[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f71_SimpleError(i8 /* message */);

// midcodec_i_bad_fold workspace at ws+3976 length ws+0
void f159_midcodec_i_bad_fold(void) {

	i8 v3059 = (i8)(intptr_t)c02_s0043;
	i8 v3060 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3060)(v3059);

endsub:;
}
	void f159_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3888 length ws+24
void f160_FoldConstant1(i4* p3061 /* result */, i8 p3062 /* lhsp */, i1 p3063 /* op */) {
	*(i1*)(intptr_t)(ws+3888) = p3063; /*op */
	*(i8*)(intptr_t)(ws+3896) = p3062; /*lhsp */

	i8 v3064 = (i8)(intptr_t)(ws+3896);
	i8 v3065 = *(i8*)(intptr_t)v3064;
	i4 v3066 = *(i4*)(intptr_t)v3065;
	i8 v3067 = (i8)(intptr_t)(ws+3908);
	*(i4*)(intptr_t)v3067 = v3066;

	i8 v3068 = (i8)(intptr_t)(ws+3888);
	i1 v3069 = *(i1*)(intptr_t)v3068;

	if (v3069 != +108) goto c02_0212;

	i8 v3070 = (i8)(intptr_t)(ws+3908);
	i4 v3071 = *(i4*)(intptr_t)v3070;
	i4 v3072 = ~v3071;
	i8 v3073 = (i8)(intptr_t)(ws+3904);
	*(i4*)(intptr_t)v3073 = v3072;

	goto c02_0211;

c02_0212:;

	if (v3069 != +113) goto c02_0213;

	i8 v3074 = (i8)(intptr_t)(ws+3908);
	i4 v3075 = *(i4*)(intptr_t)v3074;
	i4 v3076 = -v3075;
	i8 v3077 = (i8)(intptr_t)(ws+3904);
	*(i4*)(intptr_t)v3077 = v3076;

	goto c02_0211;

c02_0213:;

	i8 v3078 = (i8)(intptr_t)(f159_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3078)();

c02_0211:;


endsub:;
	*p3061 = *(i4*)(intptr_t)(ws+3904);
}
	void f159_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3936 length ws+36
void f161_FoldConstant2(i4* p3079 /* result */, i8 p3080 /* rhsp */, i8 p3081 /* lhsp */, i1 p3082 /* op */) {
	*(i1*)(intptr_t)(ws+3936) = p3082; /*op */
	*(i8*)(intptr_t)(ws+3944) = p3081; /*lhsp */
	*(i8*)(intptr_t)(ws+3952) = p3080; /*rhsp */

	i8 v3083 = (i8)(intptr_t)(ws+3944);
	i8 v3084 = *(i8*)(intptr_t)v3083;
	i4 v3085 = *(i4*)(intptr_t)v3084;
	i8 v3086 = (i8)(intptr_t)(ws+3964);
	*(i4*)(intptr_t)v3086 = v3085;

	i8 v3087 = (i8)(intptr_t)(ws+3952);
	i8 v3088 = *(i8*)(intptr_t)v3087;
	i4 v3089 = *(i4*)(intptr_t)v3088;
	i8 v3090 = (i8)(intptr_t)(ws+3968);
	*(i4*)(intptr_t)v3090 = v3089;

	i8 v3091 = (i8)(intptr_t)(ws+3936);
	i1 v3092 = *(i1*)(intptr_t)v3091;

	if (v3092 != +158) goto c02_0215;

	i8 v3093 = (i8)(intptr_t)(ws+3964);
	i4 v3094 = *(i4*)(intptr_t)v3093;
	i8 v3095 = (i8)(intptr_t)(ws+3968);
	i4 v3096 = *(i4*)(intptr_t)v3095;
	i4 v3097 = v3094+v3096;
	i8 v3098 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3098 = v3097;

	goto c02_0214;

c02_0215:;

	if (v3092 != +133) goto c02_0216;

	i8 v3099 = (i8)(intptr_t)(ws+3964);
	i4 v3100 = *(i4*)(intptr_t)v3099;
	i8 v3101 = (i8)(intptr_t)(ws+3968);
	i4 v3102 = *(i4*)(intptr_t)v3101;
	i4 v3103 = v3100-v3102;
	i8 v3104 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3104 = v3103;

	goto c02_0214;

c02_0216:;

	if (v3092 != +163) goto c02_0217;

	i8 v3105 = (i8)(intptr_t)(ws+3964);
	i4 v3106 = *(i4*)(intptr_t)v3105;
	i8 v3107 = (i8)(intptr_t)(ws+3968);
	i4 v3108 = *(i4*)(intptr_t)v3107;
	i4 v3109 = v3106*v3108;
	i8 v3110 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3110 = v3109;

	goto c02_0214;

c02_0217:;

	if (v3092 != +138) goto c02_0218;

	i8 v3111 = (i8)(intptr_t)(ws+3964);
	i4 v3112 = *(i4*)(intptr_t)v3111;
	i8 v3113 = (i8)(intptr_t)(ws+3968);
	i4 v3114 = *(i4*)(intptr_t)v3113;
	i4 v3115 = v3112/v3114;
	i8 v3116 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3116 = v3115;

	goto c02_0214;

c02_0218:;

	if (v3092 != +143) goto c02_0219;

	i8 v3117 = (i8)(intptr_t)(ws+3964);
	i4 v3118 = *(i4*)(intptr_t)v3117;
	i8 v3119 = (i8)(intptr_t)(ws+3968);
	i4 v3120 = *(i4*)(intptr_t)v3119;
	i4 v3121 = (s4)v3118/(s4)v3120;
	i8 v3122 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3122 = v3121;

	goto c02_0214;

c02_0219:;

	if (v3092 != +148) goto c02_021a;

	i8 v3123 = (i8)(intptr_t)(ws+3964);
	i4 v3124 = *(i4*)(intptr_t)v3123;
	i8 v3125 = (i8)(intptr_t)(ws+3968);
	i4 v3126 = *(i4*)(intptr_t)v3125;
	i4 v3127 = v3124%v3126;
	i8 v3128 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3128 = v3127;

	goto c02_0214;

c02_021a:;

	if (v3092 != +153) goto c02_021b;

	i8 v3129 = (i8)(intptr_t)(ws+3964);
	i4 v3130 = *(i4*)(intptr_t)v3129;
	i8 v3131 = (i8)(intptr_t)(ws+3968);
	i4 v3132 = *(i4*)(intptr_t)v3131;
	i4 v3133 = (s4)v3130%(s4)v3132;
	i8 v3134 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3134 = v3133;

	goto c02_0214;

c02_021b:;

	if (v3092 != +168) goto c02_021c;

	i8 v3135 = (i8)(intptr_t)(ws+3964);
	i4 v3136 = *(i4*)(intptr_t)v3135;
	i8 v3137 = (i8)(intptr_t)(ws+3968);
	i4 v3138 = *(i4*)(intptr_t)v3137;
	i4 v3139 = v3136&v3138;
	i8 v3140 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3140 = v3139;

	goto c02_0214;

c02_021c:;

	if (v3092 != +173) goto c02_021d;

	i8 v3141 = (i8)(intptr_t)(ws+3964);
	i4 v3142 = *(i4*)(intptr_t)v3141;
	i8 v3143 = (i8)(intptr_t)(ws+3968);
	i4 v3144 = *(i4*)(intptr_t)v3143;
	i4 v3145 = v3142|v3144;
	i8 v3146 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3146 = v3145;

	goto c02_0214;

c02_021d:;

	if (v3092 != +178) goto c02_021e;

	i8 v3147 = (i8)(intptr_t)(ws+3964);
	i4 v3148 = *(i4*)(intptr_t)v3147;
	i8 v3149 = (i8)(intptr_t)(ws+3968);
	i4 v3150 = *(i4*)(intptr_t)v3149;
	i4 v3151 = v3148^v3150;
	i8 v3152 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3152 = v3151;

	goto c02_0214;

c02_021e:;

	if (v3092 != +118) goto c02_021f;

	i8 v3153 = (i8)(intptr_t)(ws+3964);
	i4 v3154 = *(i4*)(intptr_t)v3153;
	i8 v3155 = (i8)(intptr_t)(ws+3968);
	i4 v3156 = *(i4*)(intptr_t)v3155;
	i1 v3157 = (s1)(s4)v3156;
	i4 v3158 = ((i4)v3154)<<v3157;
	i8 v3159 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3159 = v3158;

	goto c02_0214;

c02_021f:;

	if (v3092 != +123) goto c02_0220;

	i8 v3160 = (i8)(intptr_t)(ws+3964);
	i4 v3161 = *(i4*)(intptr_t)v3160;
	i8 v3162 = (i8)(intptr_t)(ws+3968);
	i4 v3163 = *(i4*)(intptr_t)v3162;
	i1 v3164 = (s1)(s4)v3163;
	i4 v3165 = ((i4)v3161)>>v3164;
	i8 v3166 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3166 = v3165;

	goto c02_0214;

c02_0220:;

	if (v3092 != +128) goto c02_0221;

	i8 v3167 = (i8)(intptr_t)(ws+3964);
	i4 v3168 = *(i4*)(intptr_t)v3167;
	i8 v3169 = (i8)(intptr_t)(ws+3968);
	i4 v3170 = *(i4*)(intptr_t)v3169;
	i1 v3171 = (s1)(s4)v3170;
	i4 v3172 = ((s4)v3168)>>v3171;
	i8 v3173 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v3173 = v3172;

	goto c02_0214;

c02_0221:;

	i8 v3174 = (i8)(intptr_t)(f159_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3174)();

c02_0214:;


endsub:;
	*p3079 = *(i4*)(intptr_t)(ws+3960);
}
	void f160_FoldConstant1(i4* /* result */, i8 /* lhsp */, i1 /* op */);
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC1Op workspace at ws+3864 length ws+24
void f162_MidC1Op(i8* p3175 /* result */, i8 p3176 /* lhs */, i1 p3177 /* width */, i1 p3178 /* op */) {
	*(i1*)(intptr_t)(ws+3864) = p3178; /*op */
	*(i1*)(intptr_t)(ws+3865) = p3177; /*width */
	*(i8*)(intptr_t)(ws+3872) = p3176; /*lhs */

	i8 v3179 = (i8)(intptr_t)(ws+3872);
	i8 v3180 = *(i8*)(intptr_t)v3179;
	i8 v3181 = v3180+(+58);
	i1 v3182 = *(i1*)(intptr_t)v3181;
	i1 v3183 = (i1)+43;
	if (v3182==v3183) goto c02_0225; else goto c02_0226;

c02_0225:;

	i8 v3184 = (i8)(intptr_t)(ws+3864);
	i1 v3185 = *(i1*)(intptr_t)v3184;
	i8 v3186 = (i8)(intptr_t)(ws+3872);
	i8 v3187 = *(i8*)(intptr_t)v3186;
	i8 v3188 = (i8)(intptr_t)(f160_FoldConstant1);
	i4 v3189;

	((void(*)(i4* /* result */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3188)(&v3189, v3187, v3185);
	i8 v3190 = (i8)(intptr_t)(ws+3872);
	i8 v3191 = *(i8*)(intptr_t)v3190;
	*(i4*)(intptr_t)v3191 = v3189;

	i8 v3192 = (i8)(intptr_t)(ws+3872);
	i8 v3193 = *(i8*)(intptr_t)v3192;
	i8 v3194 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v3194 = v3193;

	goto c02_0222;

c02_0226:;

	i8 v3195 = (i8)(intptr_t)(ws+3864);
	i1 v3196 = *(i1*)(intptr_t)v3195;
	i8 v3197 = (i8)(intptr_t)(ws+3865);
	i1 v3198 = *(i1*)(intptr_t)v3197;
	i8 v3199 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v3200;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3199)(&v3200, v3198);
	i1 v3201 = v3196+v3200;
	i8 v3202 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3203;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3202)(&v3203, v3201);
	i8 v3204 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v3204 = v3203;

	i8 v3205 = (i8)(intptr_t)(ws+3872);
	i8 v3206 = *(i8*)(intptr_t)v3205;
	i8 v3207 = (i8)(intptr_t)(ws+3880);
	i8 v3208 = *(i8*)(intptr_t)v3207;
	i8 v3209 = v3208+(+24);
	*(i8*)(intptr_t)v3209 = v3206;

c02_0222:;

endsub:;
	*p3175 = *(i8*)(intptr_t)(ws+3880);
}

// GetPowerOfTwo workspace at ws+3936 length ws+5
void f163_GetPowerOfTwo(i1* p3210 /* exp */, i4 p3211 /* value */) {
	*(i4*)(intptr_t)(ws+3936) = p3211; /*value */

	i1 v3212 = (i1)+0;
	i8 v3213 = (i8)(intptr_t)(ws+3940);
	*(i1*)(intptr_t)v3213 = v3212;

	i4 v3214 = (i4)+0;
	i8 v3215 = (i8)(intptr_t)(ws+3936);
	i4 v3216 = *(i4*)(intptr_t)v3215;
	if ((s4)v3214<(s4)v3216) goto c02_022e; else goto c02_022d;

c02_022e:;

	i8 v3217 = (i8)(intptr_t)(ws+3936);
	i4 v3218 = *(i4*)(intptr_t)v3217;
	i8 v3219 = (i8)(intptr_t)(ws+3936);
	i4 v3220 = *(i4*)(intptr_t)v3219;
	i4 v3221 = v3220+(-1);
	i4 v3222 = v3218&v3221;
	i4 v3223 = (i4)+0;
	if (v3222==v3223) goto c02_022c; else goto c02_022d;

c02_022c:;

c02_0231:;

	i8 v3224 = (i8)(intptr_t)(ws+3936);
	i4 v3225 = *(i4*)(intptr_t)v3224;
	i4 v3226 = (i4)+0;
	if (v3225==v3226) goto c02_0234; else goto c02_0233;

c02_0233:;

	i8 v3227 = (i8)(intptr_t)(ws+3940);
	i1 v3228 = *(i1*)(intptr_t)v3227;
	i1 v3229 = v3228+(+1);
	i8 v3230 = (i8)(intptr_t)(ws+3940);
	*(i1*)(intptr_t)v3230 = v3229;

	i8 v3231 = (i8)(intptr_t)(ws+3936);
	i4 v3232 = *(i4*)(intptr_t)v3231;
	i1 v3233 = (i1)+1;
	i4 v3234 = ((s4)v3232)>>v3233;
	i8 v3235 = (i8)(intptr_t)(ws+3936);
	*(i4*)(intptr_t)v3235 = v3234;

	goto c02_0231;

c02_0234:;

	goto c02_0227;

c02_022d:;

c02_0227:;

endsub:;
	*p3210 = *(i1*)(intptr_t)(ws+3940);
}
	void f161_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f142_MidConstant(i8* /* m */, i4 /* value */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f163_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	void f58_Discard(i8 /* node */);
	void f142_MidConstant(i8* /* m */, i4 /* value */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f161_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f58_Discard(i8 /* node */);
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC2Op workspace at ws+3888 length ws+48
void f164_MidC2Op(i8* p3236 /* result */, i8 p3237 /* rhs */, i8 p3238 /* lhs */, i1 p3239 /* width */, i1 p3240 /* op */) {
	*(i1*)(intptr_t)(ws+3888) = p3240; /*op */
	*(i1*)(intptr_t)(ws+3889) = p3239; /*width */
	*(i8*)(intptr_t)(ws+3896) = p3238; /*lhs */
	*(i8*)(intptr_t)(ws+3904) = p3237; /*rhs */

	i8 v3241 = (i8)(intptr_t)(ws+3888);
	i1 v3242 = *(i1*)(intptr_t)v3241;
	i1 v3243 = (i1)+133;
	if (v3242==v3243) goto c02_023c; else goto c02_023b;

c02_023c:;

	i8 v3244 = (i8)(intptr_t)(ws+3904);
	i8 v3245 = *(i8*)(intptr_t)v3244;
	i8 v3246 = v3245+(+58);
	i1 v3247 = *(i1*)(intptr_t)v3246;
	i1 v3248 = (i1)+43;
	if (v3247==v3248) goto c02_023a; else goto c02_023b;

c02_023a:;

	i8 v3249 = (i8)(intptr_t)(ws+3904);
	i8 v3250 = *(i8*)(intptr_t)v3249;
	i4 v3251 = *(i4*)(intptr_t)v3250;
	i4 v3252 = -v3251;
	i8 v3253 = (i8)(intptr_t)(ws+3904);
	i8 v3254 = *(i8*)(intptr_t)v3253;
	*(i4*)(intptr_t)v3254 = v3252;

	i1 v3255 = (i1)+158;
	i8 v3256 = (i8)(intptr_t)(ws+3888);
	*(i1*)(intptr_t)v3256 = v3255;

	goto c02_0235;

c02_023b:;

c02_0235:;

	i8 v3257 = (i8)(intptr_t)(ws+3888);
	i1 v3258 = *(i1*)(intptr_t)v3257;
	i1 v3259 = (i1)+158;
	if (v3258<v3259) goto c02_0241; else goto c02_0240;

c02_0240:;

	i8 v3260 = (i8)(intptr_t)(ws+3896);
	i8 v3261 = *(i8*)(intptr_t)v3260;
	i8 v3262 = v3261+(+58);
	i1 v3263 = *(i1*)(intptr_t)v3262;
	i1 v3264 = (i1)+43;
	if (v3263==v3264) goto c02_0245; else goto c02_0246;

c02_0245:;

	i8 v3265 = (i8)(intptr_t)(ws+3896);
	i8 v3266 = *(i8*)(intptr_t)v3265;
	i8 v3267 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v3267 = v3266;

	i8 v3268 = (i8)(intptr_t)(ws+3904);
	i8 v3269 = *(i8*)(intptr_t)v3268;
	i8 v3270 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v3270 = v3269;

	i8 v3271 = (i8)(intptr_t)(ws+3920);
	i8 v3272 = *(i8*)(intptr_t)v3271;
	i8 v3273 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v3273 = v3272;

	goto c02_0242;

c02_0246:;

c02_0242:;

	i8 v3274 = (i8)(intptr_t)(ws+3904);
	i8 v3275 = *(i8*)(intptr_t)v3274;
	i8 v3276 = v3275+(+58);
	i1 v3277 = *(i1*)(intptr_t)v3276;
	i1 v3278 = (i1)+43;
	if (v3277==v3278) goto c02_0254; else goto c02_0251;

c02_0254:;

	i8 v3279 = (i8)(intptr_t)(ws+3896);
	i8 v3280 = *(i8*)(intptr_t)v3279;
	i8 v3281 = v3280+(+58);
	i1 v3282 = *(i1*)(intptr_t)v3281;
	i8 v3283 = (i8)(intptr_t)(ws+3888);
	i1 v3284 = *(i1*)(intptr_t)v3283;
	if (v3282<v3284) goto c02_0251; else goto c02_0253;

c02_0253:;

	i8 v3285 = (i8)(intptr_t)(ws+3888);
	i1 v3286 = *(i1*)(intptr_t)v3285;
	i1 v3287 = v3286+(+4);
	i8 v3288 = (i8)(intptr_t)(ws+3896);
	i8 v3289 = *(i8*)(intptr_t)v3288;
	i8 v3290 = v3289+(+58);
	i1 v3291 = *(i1*)(intptr_t)v3290;
	if (v3287<v3291) goto c02_0251; else goto c02_0252;

c02_0252:;

	i8 v3292 = (i8)(intptr_t)(ws+3896);
	i8 v3293 = *(i8*)(intptr_t)v3292;
	i8 v3294 = v3293+(+32);
	i8 v3295 = *(i8*)(intptr_t)v3294;
	i8 v3296 = v3295+(+58);
	i1 v3297 = *(i1*)(intptr_t)v3296;
	i1 v3298 = (i1)+43;
	if (v3297==v3298) goto c02_0250; else goto c02_0251;

c02_0250:;

	i8 v3299 = (i8)(intptr_t)(ws+3888);
	i1 v3300 = *(i1*)(intptr_t)v3299;
	i8 v3301 = (i8)(intptr_t)(ws+3896);
	i8 v3302 = *(i8*)(intptr_t)v3301;
	i8 v3303 = v3302+(+32);
	i8 v3304 = *(i8*)(intptr_t)v3303;
	i8 v3305 = (i8)(intptr_t)(ws+3904);
	i8 v3306 = *(i8*)(intptr_t)v3305;
	i8 v3307 = (i8)(intptr_t)(f161_FoldConstant2);
	i4 v3308;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3307)(&v3308, v3306, v3304, v3300);
	i8 v3309 = (i8)(intptr_t)(f142_MidConstant);
	i8 v3310;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3309)(&v3310, v3308);
	i8 v3311 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v3311 = v3310;

	i8 v3312 = (i8)(intptr_t)(ws+3904);
	i8 v3313 = *(i8*)(intptr_t)v3312;
	i8 v3314 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3314)(v3313);

	i8 v3315 = (i8)(intptr_t)(ws+3920);
	i8 v3316 = *(i8*)(intptr_t)v3315;
	i8 v3317 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v3317 = v3316;

	i8 v3318 = (i8)(intptr_t)(ws+3896);
	i8 v3319 = *(i8*)(intptr_t)v3318;
	i8 v3320 = v3319+(+24);
	i8 v3321 = *(i8*)(intptr_t)v3320;
	i8 v3322 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v3322 = v3321;

	i8 v3323 = (i8)+0;
	i8 v3324 = (i8)(intptr_t)(ws+3896);
	i8 v3325 = *(i8*)(intptr_t)v3324;
	i8 v3326 = v3325+(+24);
	*(i8*)(intptr_t)v3326 = v3323;

	i8 v3327 = (i8)(intptr_t)(ws+3896);
	i8 v3328 = *(i8*)(intptr_t)v3327;
	i8 v3329 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3329)(v3328);

	i8 v3330 = (i8)(intptr_t)(ws+3920);
	i8 v3331 = *(i8*)(intptr_t)v3330;
	i8 v3332 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v3332 = v3331;

	goto c02_0247;

c02_0251:;

c02_0247:;

	goto c02_023d;

c02_0241:;

c02_023d:;

	i8 v3333 = (i8)(intptr_t)(ws+3896);
	i8 v3334 = *(i8*)(intptr_t)v3333;
	i8 v3335 = v3334+(+58);
	i1 v3336 = *(i1*)(intptr_t)v3335;
	i1 v3337 = (i1)+43;
	if (v3336==v3337) goto c02_025b; else goto c02_025c;

c02_025c:;

	i8 v3338 = (i8)(intptr_t)(ws+3904);
	i8 v3339 = *(i8*)(intptr_t)v3338;
	i8 v3340 = v3339+(+58);
	i1 v3341 = *(i1*)(intptr_t)v3340;
	i1 v3342 = (i1)+43;
	if (v3341==v3342) goto c02_025a; else goto c02_025b;

c02_025a:;

	i8 v3343 = (i8)(intptr_t)(ws+3888);
	i1 v3344 = *(i1*)(intptr_t)v3343;
	i1 v3345 = (i1)+163;
	if (v3344==v3345) goto c02_0264; else goto c02_0267;

c02_0267:;

	i8 v3346 = (i8)(intptr_t)(ws+3888);
	i1 v3347 = *(i1*)(intptr_t)v3346;
	i1 v3348 = (i1)+143;
	if (v3347==v3348) goto c02_0264; else goto c02_0266;

c02_0266:;

	i8 v3349 = (i8)(intptr_t)(ws+3888);
	i1 v3350 = *(i1*)(intptr_t)v3349;
	i1 v3351 = (i1)+138;
	if (v3350==v3351) goto c02_0264; else goto c02_0265;

c02_0264:;

	i8 v3352 = (i8)(intptr_t)(ws+3904);
	i8 v3353 = *(i8*)(intptr_t)v3352;
	i4 v3354 = *(i4*)(intptr_t)v3353;
	i8 v3355 = (i8)(intptr_t)(ws+3928);
	*(i4*)(intptr_t)v3355 = v3354;

	i8 v3356 = (i8)(intptr_t)(ws+3928);
	i4 v3357 = *(i4*)(intptr_t)v3356;
	i8 v3358 = (i8)(intptr_t)(f163_GetPowerOfTwo);
	i1 v3359;

	((void(*)(i1* /* exp */, i4 /* value */))(intptr_t)v3358)(&v3359, v3357);
	i8 v3360 = (i8)(intptr_t)(ws+3932);
	*(i1*)(intptr_t)v3360 = v3359;

	i8 v3361 = (i8)(intptr_t)(ws+3932);
	i1 v3362 = *(i1*)(intptr_t)v3361;
	i1 v3363 = (i1)+0;
	if (v3362==v3363) goto c02_026c; else goto c02_026b;

c02_026b:;

	i8 v3364 = (i8)(intptr_t)(ws+3904);
	i8 v3365 = *(i8*)(intptr_t)v3364;
	i8 v3366 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3366)(v3365);

	i8 v3367 = (i8)(intptr_t)(ws+3932);
	i1 v3368 = *(i1*)(intptr_t)v3367;
	i1 v3369 = v3368+(-1);
	i4 v3370 = v3369;
	i8 v3371 = (i8)(intptr_t)(f142_MidConstant);
	i8 v3372;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3371)(&v3372, v3370);
	i8 v3373 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v3373 = v3372;

	i8 v3374 = (i8)(intptr_t)(ws+3888);
	i1 v3375 = *(i1*)(intptr_t)v3374;

	if (v3375 != +163) goto c02_026e;

	i1 v3376 = (i1)+118;
	i8 v3377 = (i8)(intptr_t)(ws+3888);
	*(i1*)(intptr_t)v3377 = v3376;

	goto c02_026d;

c02_026e:;

	if (v3375 != +143) goto c02_026f;

	i1 v3378 = (i1)+128;
	i8 v3379 = (i8)(intptr_t)(ws+3888);
	*(i1*)(intptr_t)v3379 = v3378;

	goto c02_026d;

c02_026f:;

	if (v3375 != +138) goto c02_0270;

	i1 v3380 = (i1)+123;
	i8 v3381 = (i8)(intptr_t)(ws+3888);
	*(i1*)(intptr_t)v3381 = v3380;

c02_0270:;

c02_026d:;


	goto c02_0268;

c02_026c:;

c02_0268:;

	goto c02_025d;

c02_0265:;

c02_025d:;

	i8 v3382 = (i8)(intptr_t)(ws+3888);
	i1 v3383 = *(i1*)(intptr_t)v3382;
	i1 v3384 = (i1)+118;
	if (v3383==v3384) goto c02_0278; else goto c02_027b;

c02_027b:;

	i8 v3385 = (i8)(intptr_t)(ws+3888);
	i1 v3386 = *(i1*)(intptr_t)v3385;
	i1 v3387 = (i1)+123;
	if (v3386==v3387) goto c02_0278; else goto c02_027a;

c02_027a:;

	i8 v3388 = (i8)(intptr_t)(ws+3888);
	i1 v3389 = *(i1*)(intptr_t)v3388;
	i1 v3390 = (i1)+128;
	if (v3389==v3390) goto c02_0278; else goto c02_0279;

c02_0278:;

	i8 v3391 = (i8)(intptr_t)(ws+3904);
	i8 v3392 = *(i8*)(intptr_t)v3391;
	i4 v3393 = *(i4*)(intptr_t)v3392;
	i4 v3394 = (i4)+0;
	if (v3393==v3394) goto c02_027f; else goto c02_0280;

c02_027f:;

	i8 v3395 = (i8)(intptr_t)(ws+3904);
	i8 v3396 = *(i8*)(intptr_t)v3395;
	i8 v3397 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3397)(v3396);

	i8 v3398 = (i8)(intptr_t)(ws+3896);
	i8 v3399 = *(i8*)(intptr_t)v3398;
	i8 v3400 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3400 = v3399;

	goto endsub;

c02_0280:;

c02_027c:;

	goto c02_0271;

c02_0279:;

c02_0271:;

	i8 v3401 = (i8)(intptr_t)(ws+3888);
	i1 v3402 = *(i1*)(intptr_t)v3401;
	i1 v3403 = (i1)+158;
	if (v3402==v3403) goto c02_0286; else goto c02_0288;

c02_0288:;

	i8 v3404 = (i8)(intptr_t)(ws+3888);
	i1 v3405 = *(i1*)(intptr_t)v3404;
	i1 v3406 = (i1)+133;
	if (v3405==v3406) goto c02_0286; else goto c02_0287;

c02_0286:;

	i8 v3407 = (i8)(intptr_t)(ws+3904);
	i8 v3408 = *(i8*)(intptr_t)v3407;
	i4 v3409 = *(i4*)(intptr_t)v3408;
	i4 v3410 = (i4)+0;
	if (v3409==v3410) goto c02_028c; else goto c02_028d;

c02_028c:;

	i8 v3411 = (i8)(intptr_t)(ws+3904);
	i8 v3412 = *(i8*)(intptr_t)v3411;
	i8 v3413 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3413)(v3412);

	i8 v3414 = (i8)(intptr_t)(ws+3896);
	i8 v3415 = *(i8*)(intptr_t)v3414;
	i8 v3416 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3416 = v3415;

	goto endsub;

c02_028d:;

c02_0289:;

	i8 v3417 = (i8)(intptr_t)(ws+3896);
	i8 v3418 = *(i8*)(intptr_t)v3417;
	i8 v3419 = v3418+(+58);
	i1 v3420 = *(i1*)(intptr_t)v3419;
	i1 v3421 = (i1)+45;
	if (v3420==v3421) goto c02_0291; else goto c02_0292;

c02_0291:;

	i8 v3422 = (i8)(intptr_t)(ws+3904);
	i8 v3423 = *(i8*)(intptr_t)v3422;
	i4 v3424 = *(i4*)(intptr_t)v3423;
	i2 v3425 = (s2)(s4)v3424;
	i8 v3426 = (i8)(intptr_t)(ws+3934);
	*(i2*)(intptr_t)v3426 = v3425;

	i8 v3427 = (i8)(intptr_t)(ws+3888);
	i1 v3428 = *(i1*)(intptr_t)v3427;

	if (v3428 != +158) goto c02_0294;

	i8 v3429 = (i8)(intptr_t)(ws+3896);
	i8 v3430 = *(i8*)(intptr_t)v3429;
	i8 v3431 = v3430+(+8);
	i2 v3432 = *(i2*)(intptr_t)v3431;
	i8 v3433 = (i8)(intptr_t)(ws+3934);
	i2 v3434 = *(i2*)(intptr_t)v3433;
	i2 v3435 = v3432+v3434;
	i8 v3436 = (i8)(intptr_t)(ws+3896);
	i8 v3437 = *(i8*)(intptr_t)v3436;
	i8 v3438 = v3437+(+8);
	*(i2*)(intptr_t)v3438 = v3435;

	i8 v3439 = (i8)(intptr_t)(ws+3904);
	i8 v3440 = *(i8*)(intptr_t)v3439;
	i8 v3441 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3441)(v3440);

	i8 v3442 = (i8)(intptr_t)(ws+3896);
	i8 v3443 = *(i8*)(intptr_t)v3442;
	i8 v3444 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3444 = v3443;

	goto endsub;

c02_0294:;

	if (v3428 != +133) goto c02_0295;

	i8 v3445 = (i8)(intptr_t)(ws+3896);
	i8 v3446 = *(i8*)(intptr_t)v3445;
	i8 v3447 = v3446+(+8);
	i2 v3448 = *(i2*)(intptr_t)v3447;
	i8 v3449 = (i8)(intptr_t)(ws+3934);
	i2 v3450 = *(i2*)(intptr_t)v3449;
	i2 v3451 = v3448-v3450;
	i8 v3452 = (i8)(intptr_t)(ws+3896);
	i8 v3453 = *(i8*)(intptr_t)v3452;
	i8 v3454 = v3453+(+8);
	*(i2*)(intptr_t)v3454 = v3451;

	i8 v3455 = (i8)(intptr_t)(ws+3904);
	i8 v3456 = *(i8*)(intptr_t)v3455;
	i8 v3457 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3457)(v3456);

	i8 v3458 = (i8)(intptr_t)(ws+3896);
	i8 v3459 = *(i8*)(intptr_t)v3458;
	i8 v3460 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3460 = v3459;

	goto endsub;

c02_0295:;

c02_0293:;


	goto c02_028e;

c02_0292:;

c02_028e:;

	goto c02_0281;

c02_0287:;

c02_0281:;

	goto c02_0255;

c02_025b:;

c02_0255:;

	i8 v3461 = (i8)(intptr_t)(ws+3896);
	i8 v3462 = *(i8*)(intptr_t)v3461;
	i8 v3463 = v3462+(+58);
	i1 v3464 = *(i1*)(intptr_t)v3463;
	i1 v3465 = (i1)+43;
	if (v3464==v3465) goto c02_029d; else goto c02_029c;

c02_029d:;

	i8 v3466 = (i8)(intptr_t)(ws+3904);
	i8 v3467 = *(i8*)(intptr_t)v3466;
	i8 v3468 = v3467+(+58);
	i1 v3469 = *(i1*)(intptr_t)v3468;
	i1 v3470 = (i1)+43;
	if (v3469==v3470) goto c02_029b; else goto c02_029c;

c02_029b:;

	i8 v3471 = (i8)(intptr_t)(ws+3888);
	i1 v3472 = *(i1*)(intptr_t)v3471;
	i8 v3473 = (i8)(intptr_t)(ws+3896);
	i8 v3474 = *(i8*)(intptr_t)v3473;
	i8 v3475 = (i8)(intptr_t)(ws+3904);
	i8 v3476 = *(i8*)(intptr_t)v3475;
	i8 v3477 = (i8)(intptr_t)(f161_FoldConstant2);
	i4 v3478;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3477)(&v3478, v3476, v3474, v3472);
	i8 v3479 = (i8)(intptr_t)(ws+3896);
	i8 v3480 = *(i8*)(intptr_t)v3479;
	*(i4*)(intptr_t)v3480 = v3478;

	i8 v3481 = (i8)(intptr_t)(ws+3904);
	i8 v3482 = *(i8*)(intptr_t)v3481;
	i8 v3483 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3483)(v3482);

	i8 v3484 = (i8)(intptr_t)(ws+3896);
	i8 v3485 = *(i8*)(intptr_t)v3484;
	i8 v3486 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3486 = v3485;

	goto endsub;

c02_029c:;

c02_0296:;

	i8 v3487 = (i8)(intptr_t)(ws+3888);
	i1 v3488 = *(i1*)(intptr_t)v3487;
	i8 v3489 = (i8)(intptr_t)(ws+3889);
	i1 v3490 = *(i1*)(intptr_t)v3489;
	i8 v3491 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v3492;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3491)(&v3492, v3490);
	i1 v3493 = v3488+v3492;
	i8 v3494 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3495;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3494)(&v3495, v3493);
	i8 v3496 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3496 = v3495;

	i8 v3497 = (i8)(intptr_t)(ws+3896);
	i8 v3498 = *(i8*)(intptr_t)v3497;
	i8 v3499 = (i8)(intptr_t)(ws+3912);
	i8 v3500 = *(i8*)(intptr_t)v3499;
	i8 v3501 = v3500+(+24);
	*(i8*)(intptr_t)v3501 = v3498;

	i8 v3502 = (i8)(intptr_t)(ws+3904);
	i8 v3503 = *(i8*)(intptr_t)v3502;
	i8 v3504 = (i8)(intptr_t)(ws+3912);
	i8 v3505 = *(i8*)(intptr_t)v3504;
	i8 v3506 = v3505+(+32);
	*(i8*)(intptr_t)v3506 = v3503;

endsub:;
	*p3236 = *(i8*)(intptr_t)(ws+3912);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCCast workspace at ws+3888 length ws+34
void f165_MidCCast(i8* p3507 /* result */, i1 p3508 /* issigned */, i8 p3509 /* lhs */, i1 p3510 /* width */) {
	*(i1*)(intptr_t)(ws+3888) = p3510; /*width */
	*(i8*)(intptr_t)(ws+3896) = p3509; /*lhs */
	*(i1*)(intptr_t)(ws+3904) = p3508; /*issigned */

	i8 v3511 = (i8)(intptr_t)(ws+3896);
	i8 v3512 = *(i8*)(intptr_t)v3511;
	i8 v3513 = v3512+(+58);
	i1 v3514 = *(i1*)(intptr_t)v3513;
	i1 v3515 = (i1)+43;
	if (v3514==v3515) goto c02_02a1; else goto c02_02a2;

c02_02a1:;

	i8 v3516 = (i8)(intptr_t)(ws+3896);
	i8 v3517 = *(i8*)(intptr_t)v3516;
	i8 v3518 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3518 = v3517;

	goto endsub;

c02_02a2:;

c02_029e:;

	i8 v3519 = (i8)(intptr_t)(ws+3896);
	i8 v3520 = *(i8*)(intptr_t)v3519;
	i8 v3521 = v3520+(+16);
	i8 v3522 = *(i8*)(intptr_t)v3521;
	i8 v3523 = v3522+(+48);
	i2 v3524 = *(i2*)(intptr_t)v3523;
	i1 v3525 = v3524;
	i8 v3526 = (i8)(intptr_t)(ws+3920);
	*(i1*)(intptr_t)v3526 = v3525;

	i8 v3527 = (i8)(intptr_t)(ws+3920);
	i1 v3528 = *(i1*)(intptr_t)v3527;
	i8 v3529 = (i8)(intptr_t)(ws+3888);
	i1 v3530 = *(i1*)(intptr_t)v3529;
	if (v3528==v3530) goto c02_02a6; else goto c02_02a7;

c02_02a6:;

	i8 v3531 = (i8)(intptr_t)(ws+3896);
	i8 v3532 = *(i8*)(intptr_t)v3531;
	i8 v3533 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3533 = v3532;

	goto c02_02a3;

c02_02a7:;

	i8 v3534 = (i8)(intptr_t)(ws+3920);
	i1 v3535 = *(i1*)(intptr_t)v3534;

	if (v3535 != +1) goto c02_02a9;

	i1 v3536 = (i1)+88;
	i8 v3537 = (i8)(intptr_t)(ws+3921);
	*(i1*)(intptr_t)v3537 = v3536;

	goto c02_02a8;

c02_02a9:;

	if (v3535 != +2) goto c02_02aa;

	i1 v3538 = (i1)+93;
	i8 v3539 = (i8)(intptr_t)(ws+3921);
	*(i1*)(intptr_t)v3539 = v3538;

	goto c02_02a8;

c02_02aa:;

	if (v3535 != +4) goto c02_02ab;

	i1 v3540 = (i1)+98;
	i8 v3541 = (i8)(intptr_t)(ws+3921);
	*(i1*)(intptr_t)v3541 = v3540;

	goto c02_02a8;

c02_02ab:;

	if (v3535 != +8) goto c02_02ac;

	i1 v3542 = (i1)+103;
	i8 v3543 = (i8)(intptr_t)(ws+3921);
	*(i1*)(intptr_t)v3543 = v3542;

c02_02ac:;

c02_02a8:;


	i8 v3544 = (i8)(intptr_t)(ws+3921);
	i1 v3545 = *(i1*)(intptr_t)v3544;
	i8 v3546 = (i8)(intptr_t)(ws+3888);
	i1 v3547 = *(i1*)(intptr_t)v3546;
	i8 v3548 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v3549;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3548)(&v3549, v3547);
	i1 v3550 = v3545+v3549;
	i8 v3551 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3552;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3551)(&v3552, v3550);
	i8 v3553 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3553 = v3552;

	i8 v3554 = (i8)(intptr_t)(ws+3896);
	i8 v3555 = *(i8*)(intptr_t)v3554;
	i8 v3556 = (i8)(intptr_t)(ws+3912);
	i8 v3557 = *(i8*)(intptr_t)v3556;
	i8 v3558 = v3557+(+24);
	*(i8*)(intptr_t)v3558 = v3555;

	i8 v3559 = (i8)(intptr_t)(ws+3904);
	i1 v3560 = *(i1*)(intptr_t)v3559;
	i8 v3561 = (i8)(intptr_t)(ws+3912);
	i8 v3562 = *(i8*)(intptr_t)v3561;
	*(i1*)(intptr_t)v3562 = v3560;

c02_02a3:;

endsub:;
	*p3507 = *(i8*)(intptr_t)(ws+3912);
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);

// WriteB8 workspace at ws+4232 length ws+1
void f166_WriteB8(i1 p3569 /* b */) {
	*(i1*)(intptr_t)(ws+4232) = p3569; /*b */

	i8 v3570 = (i8)(intptr_t)(ws+936);
	i8 v3571 = (i8)(intptr_t)(ws+4232);
	i1 v3572 = *(i1*)(intptr_t)v3571;
	i8 v3573 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3573)(v3572, v3570);

endsub:;
}
	void f166_WriteB8(i1 /* b */);
	void f166_WriteB8(i1 /* b */);

// WriteB16 workspace at ws+4224 length ws+2
void f167_WriteB16(i2 p3574 /* w */) {
	*(i2*)(intptr_t)(ws+4224) = p3574; /*w */

	i8 v3575 = (i8)(intptr_t)(ws+4224);
	i2 v3576 = *(i2*)(intptr_t)v3575;
	i1 v3577 = v3576;
	i8 v3578 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3578)(v3577);

	i8 v3579 = (i8)(intptr_t)(ws+4224);
	i2 v3580 = *(i2*)(intptr_t)v3579;
	i1 v3581 = (i1)+8;
	i2 v3582 = ((i2)v3580)>>v3581;
	i1 v3583 = v3582;
	i8 v3584 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3584)(v3583);

endsub:;
}
	void f166_WriteB8(i1 /* b */);
	void f167_WriteB16(i2 /* w */);
	void f166_WriteB8(i1 /* b */);
	void f167_WriteB16(i2 /* w */);
	void f54_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// FlushCurrentStream workspace at ws+4216 length ws+1
void f168_FlushCurrentStream(i1 p3585 /* close */) {
	*(i1*)(intptr_t)(ws+4216) = p3585; /*close */

	i1 v3586 = (i1)+70;
	i8 v3587 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3587)(v3586);

	i8 v3588 = (i8)(intptr_t)(ws+1715);
	i1 v3589 = *(i1*)(intptr_t)v3588;
	i2 v3590 = v3589;
	i2 v3591 = v3590+(+3);
	i8 v3592 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3592)(v3591);

	i8 v3593 = (i8)(intptr_t)(ws+1744);
	i1 v3594 = *(i1*)(intptr_t)v3593;
	i8 v3595 = (i8)(intptr_t)(ws+4216);
	i1 v3596 = *(i1*)(intptr_t)v3595;
	i1 v3597 = v3594|v3596;
	i8 v3598 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3598)(v3597);

	i8 v3599 = (i8)(intptr_t)(ws+1736);
	i8 v3600 = *(i8*)(intptr_t)v3599;
	i2 v3601 = *(i2*)(intptr_t)v3600;
	i8 v3602 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3602)(v3601);

	i8 v3603 = (i8)(intptr_t)(ws+936);
	i8 v3604 = (i8)(intptr_t)(ws+1460);
	i8 v3605 = (i8)(intptr_t)(ws+1715);
	i1 v3606 = *(i1*)(intptr_t)v3605;
	i8 v3607 = v3606;
	i8 v3608 = (i8)(intptr_t)(f54_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v3608)(v3607, v3604, v3603);

	i1 v3609 = (i1)+0;
	i8 v3610 = (i8)(intptr_t)(ws+1715);
	*(i1*)(intptr_t)v3610 = v3609;

endsub:;
}
	void f168_FlushCurrentStream(i1 /* close */);

// E_b8 workspace at ws+4208 length ws+1
void f169_E_b8(i1 p3611 /* byte */) {
	*(i1*)(intptr_t)(ws+4208) = p3611; /*byte */

	i8 v3612 = (i8)(intptr_t)(ws+1736);
	i8 v3613 = *(i8*)(intptr_t)v3612;
	i8 v3614 = (i8)+0;
	if (v3613==v3614) goto c02_02b1; else goto c02_02b0;

c02_02b0:;

	i8 v3615 = (i8)(intptr_t)(ws+4208);
	i1 v3616 = *(i1*)(intptr_t)v3615;
	i8 v3617 = (i8)(intptr_t)(ws+1460);
	i8 v3618 = (i8)(intptr_t)(ws+1715);
	i1 v3619 = *(i1*)(intptr_t)v3618;
	i8 v3620 = v3619;
	i8 v3621 = v3617+v3620;
	*(i1*)(intptr_t)v3621 = v3616;

	i8 v3622 = (i8)(intptr_t)(ws+1715);
	i1 v3623 = *(i1*)(intptr_t)v3622;
	i1 v3624 = v3623+(+1);
	i8 v3625 = (i8)(intptr_t)(ws+1715);
	*(i1*)(intptr_t)v3625 = v3624;

	i8 v3626 = (i8)(intptr_t)(ws+1715);
	i1 v3627 = *(i1*)(intptr_t)v3626;
	i1 v3628 = (i1)+255;
	if (v3627==v3628) goto c02_02b5; else goto c02_02b6;

c02_02b5:;

	i1 v3629 = (i1)+0;
	i8 v3630 = (i8)(intptr_t)(f168_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v3630)(v3629);

	goto c02_02b2;

c02_02b6:;

c02_02b2:;

	goto c02_02ad;

c02_02b1:;

c02_02ad:;

endsub:;
}
	void f169_E_b8(i1 /* byte */);
	void f169_E_b8(i1 /* byte */);

// E_b16 workspace at ws+4144 length ws+2
void f170_E_b16(i2 p3631 /* word */) {
	*(i2*)(intptr_t)(ws+4144) = p3631; /*word */

	i8 v3632 = (i8)(intptr_t)(ws+4144);
	i2 v3633 = *(i2*)(intptr_t)v3632;
	i1 v3634 = v3633;
	i8 v3635 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3635)(v3634);

	i8 v3636 = (i8)(intptr_t)(ws+4144);
	i2 v3637 = *(i2*)(intptr_t)v3636;
	i1 v3638 = (i1)+8;
	i2 v3639 = ((i2)v3637)>>v3638;
	i1 v3640 = v3639;
	i8 v3641 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3641)(v3640);

endsub:;
}
	void f169_E_b8(i1 /* byte */);

// E_space workspace at ws+4088 length ws+0
void f172_E_space(void) {

	i1 v3653 = (i1)+32;
	i8 v3654 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3654)(v3653);

endsub:;
}
	void f169_E_b8(i1 /* byte */);

// E_comma workspace at ws+4112 length ws+0
void f173_E_comma(void) {

	i1 v3655 = (i1)+44;
	i8 v3656 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3656)(v3655);

endsub:;
}
	void f169_E_b8(i1 /* byte */);

// E_tab workspace at ws+4088 length ws+0
void f174_E_tab(void) {

	i1 v3657 = (i1)+9;
	i8 v3658 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3658)(v3657);

endsub:;
}
	void f169_E_b8(i1 /* byte */);

// E_nl workspace at ws+4088 length ws+0
void f175_E_nl(void) {

	i1 v3659 = (i1)+10;
	i8 v3660 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3660)(v3659);

endsub:;
}
	void f169_E_b8(i1 /* byte */);

// E workspace at ws+4168 length ws+9
void f178_E(i8 p3665 /* text */) {
	*(i8*)(intptr_t)(ws+4168) = p3665; /*text */

c02_02b7:;

	i8 v3666 = (i8)(intptr_t)(ws+4168);
	i8 v3667 = *(i8*)(intptr_t)v3666;
	i1 v3668 = *(i1*)(intptr_t)v3667;
	i8 v3669 = (i8)(intptr_t)(ws+4176);
	*(i1*)(intptr_t)v3669 = v3668;

	i8 v3670 = (i8)(intptr_t)(ws+4168);
	i8 v3671 = *(i8*)(intptr_t)v3670;
	i8 v3672 = v3671+(+1);
	i8 v3673 = (i8)(intptr_t)(ws+4168);
	*(i8*)(intptr_t)v3673 = v3672;

	i8 v3674 = (i8)(intptr_t)(ws+4176);
	i1 v3675 = *(i1*)(intptr_t)v3674;
	i1 v3676 = (i1)+0;
	if (v3675==v3676) goto c02_02bc; else goto c02_02bd;

c02_02bc:;

	goto c02_02b8;

c02_02bd:;

c02_02b9:;

	i8 v3677 = (i8)(intptr_t)(ws+4176);
	i1 v3678 = *(i1*)(intptr_t)v3677;
	i8 v3679 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3679)(v3678);

	goto c02_02b7;

c02_02b8:;

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f169_E_b8(i1 /* byte */);

// E_u32 workspace at ws+4168 length ws+33
void f179_E_u32(i4 p3680 /* value */) {
	*(i4*)(intptr_t)(ws+4168) = p3680; /*value */

	i8 v3681 = (i8)(intptr_t)(ws+4172);
	i8 v3682 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v3682 = v3681;

	i8 v3683 = (i8)(intptr_t)(ws+4168);
	i4 v3684 = *(i4*)(intptr_t)v3683;
	i1 v3685 = (i1)+10;
	i8 v3686 = (i8)(intptr_t)(ws+4184);
	i8 v3687 = *(i8*)(intptr_t)v3686;
	i8 v3688 = (i8)(intptr_t)(f13_UIToA);
	i8 v3689;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v3688)(&v3689, v3687, v3685, v3684);
	i8 v3690 = (i8)(intptr_t)(ws+4192);
	*(i8*)(intptr_t)v3690 = v3689;

c02_02be:;

	i8 v3691 = (i8)(intptr_t)(ws+4184);
	i8 v3692 = *(i8*)(intptr_t)v3691;
	i1 v3693 = *(i1*)(intptr_t)v3692;
	i8 v3694 = (i8)(intptr_t)(ws+4200);
	*(i1*)(intptr_t)v3694 = v3693;

	i8 v3695 = (i8)(intptr_t)(ws+4200);
	i1 v3696 = *(i1*)(intptr_t)v3695;
	i1 v3697 = (i1)+0;
	if (v3696==v3697) goto c02_02c3; else goto c02_02c4;

c02_02c3:;

	goto c02_02bf;

c02_02c4:;

c02_02c0:;

	i8 v3698 = (i8)(intptr_t)(ws+4200);
	i1 v3699 = *(i1*)(intptr_t)v3698;
	i8 v3700 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3700)(v3699);

	i8 v3701 = (i8)(intptr_t)(ws+4184);
	i8 v3702 = *(i8*)(intptr_t)v3701;
	i8 v3703 = v3702+(+1);
	i8 v3704 = (i8)(intptr_t)(ws+4184);
	*(i8*)(intptr_t)v3704 = v3703;

	goto c02_02be;

c02_02bf:;

endsub:;
}
	void f179_E_u32(i4 /* value */);

// E_u16 workspace at ws+4144 length ws+2
void f180_E_u16(i2 p3705 /* value */) {
	*(i2*)(intptr_t)(ws+4144) = p3705; /*value */

	i8 v3706 = (i8)(intptr_t)(ws+4144);
	i2 v3707 = *(i2*)(intptr_t)v3706;
	i4 v3708 = v3707;
	i8 v3709 = (i8)(intptr_t)(f179_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v3709)(v3708);

endsub:;
}
	void f179_E_u32(i4 /* value */);

// E_u8 workspace at ws+4160 length ws+1
void f181_E_u8(i1 p3710 /* value */) {
	*(i1*)(intptr_t)(ws+4160) = p3710; /*value */

	i8 v3711 = (i8)(intptr_t)(ws+4160);
	i1 v3712 = *(i1*)(intptr_t)v3711;
	i4 v3713 = v3712;
	i8 v3714 = (i8)(intptr_t)(f179_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v3714)(v3713);

endsub:;
}
	void f169_E_b8(i1 /* byte */);
	void f169_E_b8(i1 /* byte */);
	void f180_E_u16(i2 /* value */);

// E_i16 workspace at ws+4136 length ws+2
void f183_E_i16(i2 p3730 /* value */) {
	*(i2*)(intptr_t)(ws+4136) = p3730; /*value */

	i8 v3731 = (i8)(intptr_t)(ws+4136);
	i2 v3732 = *(i2*)(intptr_t)v3731;
	i2 v3733 = (i2)+0;
	if ((s2)v3732<(s2)v3733) goto c02_02cd; else goto c02_02ce;

c02_02cd:;

	i1 v3734 = (i1)+45;
	i8 v3735 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3735)(v3734);

	i8 v3736 = (i8)(intptr_t)(ws+4136);
	i2 v3737 = *(i2*)(intptr_t)v3736;
	i2 v3738 = -v3737;
	i8 v3739 = (i8)(intptr_t)(ws+4136);
	*(i2*)(intptr_t)v3739 = v3738;

	goto c02_02ca;

c02_02ce:;

	i1 v3740 = (i1)+43;
	i8 v3741 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3741)(v3740);

c02_02ca:;

	i8 v3742 = (i8)(intptr_t)(ws+4136);
	i2 v3743 = *(i2*)(intptr_t)v3742;
	i8 v3744 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3744)(v3743);

endsub:;
}
	void f169_E_b8(i1 /* byte */);
	void f169_E_b8(i1 /* byte */);
	void f179_E_u32(i4 /* value */);

// E_i32 workspace at ws+4112 length ws+4
void f184_E_i32(i4 p3745 /* value */) {
	*(i4*)(intptr_t)(ws+4112) = p3745; /*value */

	i8 v3746 = (i8)(intptr_t)(ws+4112);
	i4 v3747 = *(i4*)(intptr_t)v3746;
	i4 v3748 = (i4)+0;
	if ((s4)v3747<(s4)v3748) goto c02_02d2; else goto c02_02d3;

c02_02d2:;

	i1 v3749 = (i1)+45;
	i8 v3750 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3750)(v3749);

	i8 v3751 = (i8)(intptr_t)(ws+4112);
	i4 v3752 = *(i4*)(intptr_t)v3751;
	i4 v3753 = -v3752;
	i8 v3754 = (i8)(intptr_t)(ws+4112);
	*(i4*)(intptr_t)v3754 = v3753;

	goto c02_02cf;

c02_02d3:;

	i1 v3755 = (i1)+43;
	i8 v3756 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3756)(v3755);

c02_02cf:;

	i8 v3757 = (i8)(intptr_t)(ws+4112);
	i4 v3758 = *(i4*)(intptr_t)v3757;
	i8 v3759 = (i8)(intptr_t)(f179_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v3759)(v3758);

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f169_E_b8(i1 /* byte */);
	void f178_E(i8 /* text */);

// E_h workspace at ws+4136 length ws+25
void f185_E_h(i1 p3760 /* width */, i4 p3761 /* value */) {
	*(i4*)(intptr_t)(ws+4136) = p3761; /*value */
	*(i1*)(intptr_t)(ws+4140) = p3760; /*width */

	i8 v3762 = (i8)(intptr_t)(ws+4136);
	i4 v3763 = *(i4*)(intptr_t)v3762;
	i1 v3764 = (i1)+16;
	i8 v3765 = (i8)(intptr_t)(ws+4141);
	i8 v3766 = (i8)(intptr_t)(f13_UIToA);
	i8 v3767;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v3766)(&v3767, v3765, v3764, v3763);
	i8 v3768 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v3768 = v3767;

	i8 v3769 = (i8)(intptr_t)(ws+4140);
	i1 v3770 = *(i1*)(intptr_t)v3769;
	i8 v3771 = (i8)(intptr_t)(ws+4152);
	i8 v3772 = *(i8*)(intptr_t)v3771;
	i8 v3773 = (i8)(intptr_t)(ws+4141);
	i8 v3774 = v3772-v3773;
	i1 v3775 = v3774;
	i1 v3776 = v3770-v3775;
	i8 v3777 = (i8)(intptr_t)(ws+4160);
	*(i1*)(intptr_t)v3777 = v3776;

c02_02d6:;

	i8 v3778 = (i8)(intptr_t)(ws+4160);
	i1 v3779 = *(i1*)(intptr_t)v3778;
	i1 v3780 = (i1)+0;
	if (v3779==v3780) goto c02_02d9; else goto c02_02d8;

c02_02d8:;

	i1 v3781 = (i1)+48;
	i8 v3782 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3782)(v3781);

	i8 v3783 = (i8)(intptr_t)(ws+4160);
	i1 v3784 = *(i1*)(intptr_t)v3783;
	i1 v3785 = v3784+(-1);
	i8 v3786 = (i8)(intptr_t)(ws+4160);
	*(i1*)(intptr_t)v3786 = v3785;

	goto c02_02d6;

c02_02d9:;

	i8 v3787 = (i8)(intptr_t)(ws+4141);
	i8 v3788 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v3788)(v3787);

endsub:;
}
	void f185_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+4112 length ws+1
void f186_E_h8(i1 p3789 /* value */) {
	*(i1*)(intptr_t)(ws+4112) = p3789; /*value */

	i8 v3790 = (i8)(intptr_t)(ws+4112);
	i1 v3791 = *(i1*)(intptr_t)v3790;
	i4 v3792 = v3791;
	i1 v3793 = (i1)+2;
	i8 v3794 = (i8)(intptr_t)(f185_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v3794)(v3793, v3792);

endsub:;
}
	void f185_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+4128 length ws+2
void f187_E_h16(i2 p3795 /* value */) {
	*(i2*)(intptr_t)(ws+4128) = p3795; /*value */

	i8 v3796 = (i8)(intptr_t)(ws+4128);
	i2 v3797 = *(i2*)(intptr_t)v3796;
	i4 v3798 = v3797;
	i1 v3799 = (i1)+4;
	i8 v3800 = (i8)(intptr_t)(f185_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v3800)(v3799, v3798);

endsub:;
}
	void f169_E_b8(i1 /* byte */);
	void f187_E_h16(i2 /* value */);

// E_labelref workspace at ws+4120 length ws+2
void f189_E_labelref(i2 p3806 /* labelid */) {
	*(i2*)(intptr_t)(ws+4120) = p3806; /*labelid */

	i1 v3807 = (i1)+3;
	i8 v3808 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3808)(v3807);

	i8 v3809 = (i8)(intptr_t)(ws+4120);
	i2 v3810 = *(i2*)(intptr_t)v3809;
	i8 v3811 = (i8)(intptr_t)(f187_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v3811)(v3810);

endsub:;
}
	void f169_E_b8(i1 /* byte */);
	void f169_E_b8(i1 /* byte */);
	void f170_E_b16(i2 /* word */);

// E_subref workspace at ws+4136 length ws+8
void f190_E_subref(i8 p3812 /* subr */) {
	*(i8*)(intptr_t)(ws+4136) = p3812; /*subr */

	i8 v3813 = (i8)(intptr_t)(ws+4136);
	i8 v3814 = *(i8*)(intptr_t)v3813;
	i8 v3815 = (i8)(intptr_t)(ws+40);
	i8 v3816 = *(i8*)(intptr_t)v3815;
	if (v3814==v3816) goto c02_02dd; else goto c02_02de;

c02_02dd:;

	i1 v3817 = (i1)+4;
	i8 v3818 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3818)(v3817);

	goto c02_02da;

c02_02de:;

	i1 v3819 = (i1)+1;
	i8 v3820 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3820)(v3819);

	i8 v3821 = (i8)(intptr_t)(ws+4136);
	i8 v3822 = *(i8*)(intptr_t)v3821;
	i8 v3823 = v3822+(+56);
	i2 v3824 = *(i2*)(intptr_t)v3823;
	i8 v3825 = (i8)(intptr_t)(f170_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3825)(v3824);

c02_02da:;

endsub:;
}
	void f168_FlushCurrentStream(i1 /* close */);

// EmitterOpenStream workspace at ws+4136 length ws+8
void f192_EmitterOpenStream(i8 p3840 /* subr */) {
	*(i8*)(intptr_t)(ws+4136) = p3840; /*subr */

	i8 v3841 = (i8)(intptr_t)(ws+1736);
	i8 v3842 = *(i8*)(intptr_t)v3841;
	i8 v3843 = (i8)+0;
	if (v3842==v3843) goto c02_02e2; else goto c02_02e3;

c02_02e2:;

	i8 v3844 = (i8)(intptr_t)(ws+1716);
	i8 v3845 = (i8)(intptr_t)(ws+1736);
	*(i8*)(intptr_t)v3845 = v3844;

	i1 v3846 = (i1)+0;
	i8 v3847 = (i8)(intptr_t)(ws+1744);
	*(i1*)(intptr_t)v3847 = v3846;

	goto c02_02df;

c02_02e3:;

	i1 v3848 = (i1)+0;
	i8 v3849 = (i8)(intptr_t)(f168_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v3849)(v3848);

	i8 v3850 = (i8)(intptr_t)(ws+1736);
	i8 v3851 = *(i8*)(intptr_t)v3850;
	i8 v3852 = v3851+(+2);
	i8 v3853 = (i8)(intptr_t)(ws+1736);
	*(i8*)(intptr_t)v3853 = v3852;

	i8 v3854 = (i8)(intptr_t)(ws+1744);
	i1 v3855 = *(i1*)(intptr_t)v3854;
	i1 v3856 = v3855+(+1);
	i8 v3857 = (i8)(intptr_t)(ws+1744);
	*(i1*)(intptr_t)v3857 = v3856;

c02_02df:;

	i8 v3858 = (i8)(intptr_t)(ws+4136);
	i8 v3859 = *(i8*)(intptr_t)v3858;
	i8 v3860 = v3859+(+56);
	i2 v3861 = *(i2*)(intptr_t)v3860;
	i8 v3862 = (i8)(intptr_t)(ws+1736);
	i8 v3863 = *(i8*)(intptr_t)v3862;
	*(i2*)(intptr_t)v3863 = v3861;

endsub:;
}
	void f168_FlushCurrentStream(i1 /* close */);

// EmitterCloseStream workspace at ws+4136 length ws+0
void f193_EmitterCloseStream(void) {

	i1 v3864 = (i1)+128;
	i8 v3865 = (i8)(intptr_t)(f168_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v3865)(v3864);

	i8 v3866 = (i8)(intptr_t)(ws+1736);
	i8 v3867 = *(i8*)(intptr_t)v3866;
	i8 v3868 = (i8)(intptr_t)(ws+1716);
	if (v3867==v3868) goto c02_02e7; else goto c02_02e8;

c02_02e7:;

	i8 v3869 = (i8)+0;
	i8 v3870 = (i8)(intptr_t)(ws+1736);
	*(i8*)(intptr_t)v3870 = v3869;

	goto c02_02e4;

c02_02e8:;

	i8 v3871 = (i8)(intptr_t)(ws+1736);
	i8 v3872 = *(i8*)(intptr_t)v3871;
	i8 v3873 = v3872+(-2);
	i8 v3874 = (i8)(intptr_t)(ws+1736);
	*(i8*)(intptr_t)v3874 = v3873;

	i8 v3875 = (i8)(intptr_t)(ws+1744);
	i1 v3876 = *(i1*)(intptr_t)v3875;
	i1 v3877 = v3876+(-1);
	i8 v3878 = (i8)(intptr_t)(ws+1744);
	*(i1*)(intptr_t)v3878 = v3877;

c02_02e4:;

endsub:;
}
	void f44_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0044[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// EmitterOpenfile workspace at ws+3720 length ws+8
void f194_EmitterOpenfile(i8 p3879 /* filename */) {
	*(i8*)(intptr_t)(ws+3720) = p3879; /*filename */

	i8 v3880 = (i8)(intptr_t)(ws+936);
	i8 v3881 = (i8)(intptr_t)(ws+3720);
	i8 v3882 = *(i8*)(intptr_t)v3881;
	i8 v3883 = (i8)(intptr_t)(f44_FCBOpenOut);
	i1 v3884;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v3883)(&v3884, v3882, v3880);
	i1 v3885 = (i1)+0;
	if (v3884==v3885) goto c02_02ed; else goto c02_02ec;

c02_02ec:;

	i8 v3886 = (i8)(intptr_t)c02_s0044;
	i8 v3887 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3887)(v3886);

	goto c02_02e9;

c02_02ed:;

c02_02e9:;

endsub:;
}
	void f166_WriteB8(i1 /* b */);
	void f167_WriteB16(i2 /* w */);
	void f45_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s0045[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// EmitterClosefile workspace at ws+3720 length ws+0
void f195_EmitterClosefile(void) {

	i1 v3888 = (i1)+69;
	i8 v3889 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3889)(v3888);

	i2 v3890 = (i2)+0;
	i8 v3891 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3891)(v3890);

	i8 v3892 = (i8)(intptr_t)(ws+936);
	i8 v3893 = (i8)(intptr_t)(f45_FCBClose);
	i1 v3894;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v3893)(&v3894, v3892);
	i1 v3895 = (i1)+0;
	if (v3894==v3895) goto c02_02f2; else goto c02_02f1;

c02_02f1:;

	i8 v3896 = (i8)(intptr_t)c02_s0045;
	i8 v3897 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3897)(v3896);

	goto c02_02ee;

c02_02f2:;

c02_02ee:;

endsub:;
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f166_WriteB8(i1 /* b */);
	void f167_WriteB16(i2 /* w */);
	void f167_WriteB16(i2 /* w */);
	void f54_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// EmitterDeclareSubroutine workspace at ws+3848 length ws+10
void f196_EmitterDeclareSubroutine(i8 p3898 /* subr */) {
	*(i8*)(intptr_t)(ws+3848) = p3898; /*subr */

	i8 v3899 = (i8)(intptr_t)(ws+3848);
	i8 v3900 = *(i8*)(intptr_t)v3899;
	i8 v3901 = *(i8*)(intptr_t)v3900;
	i8 v3902 = v3901+(+8);
	i8 v3903 = *(i8*)(intptr_t)v3902;
	i8 v3904 = (i8)(intptr_t)(f28_StrLen);
	i8 v3905;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v3904)(&v3905, v3903);
	i2 v3906 = v3905;
	i8 v3907 = (i8)(intptr_t)(ws+3856);
	*(i2*)(intptr_t)v3907 = v3906;

	i1 v3908 = (i1)+78;
	i8 v3909 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3909)(v3908);

	i8 v3910 = (i8)(intptr_t)(ws+3856);
	i2 v3911 = *(i2*)(intptr_t)v3910;
	i2 v3912 = v3911+(+2);
	i8 v3913 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3913)(v3912);

	i8 v3914 = (i8)(intptr_t)(ws+3848);
	i8 v3915 = *(i8*)(intptr_t)v3914;
	i8 v3916 = v3915+(+56);
	i2 v3917 = *(i2*)(intptr_t)v3916;
	i8 v3918 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3918)(v3917);

	i8 v3919 = (i8)(intptr_t)(ws+936);
	i8 v3920 = (i8)(intptr_t)(ws+3848);
	i8 v3921 = *(i8*)(intptr_t)v3920;
	i8 v3922 = *(i8*)(intptr_t)v3921;
	i8 v3923 = v3922+(+8);
	i8 v3924 = *(i8*)(intptr_t)v3923;
	i8 v3925 = (i8)(intptr_t)(ws+3856);
	i2 v3926 = *(i2*)(intptr_t)v3925;
	i8 v3927 = v3926;
	i8 v3928 = (i8)(intptr_t)(f54_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v3928)(v3927, v3924, v3919);

endsub:;
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f166_WriteB8(i1 /* b */);
	void f167_WriteB16(i2 /* w */);
	void f167_WriteB16(i2 /* w */);
	void f54_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// EmitterDeclareExternalSubroutine workspace at ws+3840 length ws+18
void f197_EmitterDeclareExternalSubroutine(i8 p3929 /* external */, i2 p3930 /* id */) {
	*(i2*)(intptr_t)(ws+3840) = p3930; /*id */
	*(i8*)(intptr_t)(ws+3848) = p3929; /*external */

	i8 v3931 = (i8)(intptr_t)(ws+3848);
	i8 v3932 = *(i8*)(intptr_t)v3931;
	i8 v3933 = (i8)(intptr_t)(f28_StrLen);
	i8 v3934;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v3933)(&v3934, v3932);
	i2 v3935 = v3934;
	i8 v3936 = (i8)(intptr_t)(ws+3856);
	*(i2*)(intptr_t)v3936 = v3935;

	i1 v3937 = (i1)+88;
	i8 v3938 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3938)(v3937);

	i8 v3939 = (i8)(intptr_t)(ws+3856);
	i2 v3940 = *(i2*)(intptr_t)v3939;
	i2 v3941 = v3940+(+2);
	i8 v3942 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3942)(v3941);

	i8 v3943 = (i8)(intptr_t)(ws+3840);
	i2 v3944 = *(i2*)(intptr_t)v3943;
	i8 v3945 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3945)(v3944);

	i8 v3946 = (i8)(intptr_t)(ws+936);
	i8 v3947 = (i8)(intptr_t)(ws+3848);
	i8 v3948 = *(i8*)(intptr_t)v3947;
	i8 v3949 = (i8)(intptr_t)(ws+3856);
	i2 v3950 = *(i2*)(intptr_t)v3949;
	i8 v3951 = v3950;
	i8 v3952 = (i8)(intptr_t)(f54_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v3952)(v3951, v3948, v3946);

endsub:;
}
	void f166_WriteB8(i1 /* b */);
	void f167_WriteB16(i2 /* w */);
	void f167_WriteB16(i2 /* w */);
	void f167_WriteB16(i2 /* w */);

// EmitterReferenceSubroutineById workspace at ws+3912 length ws+4
void f198_EmitterReferenceSubroutineById(i2 p3953 /* used */, i2 p3954 /* user */) {
	*(i2*)(intptr_t)(ws+3912) = p3954; /*user */
	*(i2*)(intptr_t)(ws+3914) = p3953; /*used */

	i1 v3955 = (i1)+82;
	i8 v3956 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3956)(v3955);

	i2 v3957 = (i2)+4;
	i8 v3958 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3958)(v3957);

	i8 v3959 = (i8)(intptr_t)(ws+3912);
	i2 v3960 = *(i2*)(intptr_t)v3959;
	i8 v3961 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3961)(v3960);

	i8 v3962 = (i8)(intptr_t)(ws+3914);
	i2 v3963 = *(i2*)(intptr_t)v3962;
	i8 v3964 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3964)(v3963);

endsub:;
}
	void f198_EmitterReferenceSubroutineById(i2 /* used */, i2 /* user */);

// EmitterReferenceSubroutine workspace at ws+3896 length ws+16
void f199_EmitterReferenceSubroutine(i8 p3965 /* used */, i8 p3966 /* user */) {
	*(i8*)(intptr_t)(ws+3896) = p3966; /*user */
	*(i8*)(intptr_t)(ws+3904) = p3965; /*used */

	i8 v3967 = (i8)(intptr_t)(ws+3896);
	i8 v3968 = *(i8*)(intptr_t)v3967;
	i8 v3969 = v3968+(+56);
	i2 v3970 = *(i2*)(intptr_t)v3969;
	i8 v3971 = (i8)(intptr_t)(ws+3904);
	i8 v3972 = *(i8*)(intptr_t)v3971;
	i8 v3973 = v3972+(+56);
	i2 v3974 = *(i2*)(intptr_t)v3973;
	i8 v3975 = (i8)(intptr_t)(f198_EmitterReferenceSubroutineById);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v3975)(v3974, v3970);

endsub:;
}
	void f166_WriteB8(i1 /* b */);
	void f167_WriteB16(i2 /* w */);
	void f167_WriteB16(i2 /* w */);
	void f166_WriteB8(i1 /* b */);
	void f167_WriteB16(i2 /* w */);

// EmitterDeclareWorkspace workspace at ws+4112 length ws+12
void f200_EmitterDeclareWorkspace(i2 p3976 /* workspace */, i1 p3977 /* wid */, i8 p3978 /* subr */) {
	*(i8*)(intptr_t)(ws+4112) = p3978; /*subr */
	*(i1*)(intptr_t)(ws+4120) = p3977; /*wid */
	*(i2*)(intptr_t)(ws+4122) = p3976; /*workspace */

	i1 v3979 = (i1)+87;
	i8 v3980 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3980)(v3979);

	i2 v3981 = (i2)+5;
	i8 v3982 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3982)(v3981);

	i8 v3983 = (i8)(intptr_t)(ws+4112);
	i8 v3984 = *(i8*)(intptr_t)v3983;
	i8 v3985 = v3984+(+56);
	i2 v3986 = *(i2*)(intptr_t)v3985;
	i8 v3987 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3987)(v3986);

	i8 v3988 = (i8)(intptr_t)(ws+4120);
	i1 v3989 = *(i1*)(intptr_t)v3988;
	i8 v3990 = (i8)(intptr_t)(f166_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v3990)(v3989);

	i8 v3991 = (i8)(intptr_t)(ws+4122);
	i2 v3992 = *(i2*)(intptr_t)v3991;
	i8 v3993 = (i8)(intptr_t)(f167_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v3993)(v3992);

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// LookupSymbolInNamespace workspace at ws+3904 length ws+24
void f210_LookupSymbolInNamespace(i8* p4322 /* symbol */, i8 p4323 /* name */, i8 p4324 /* namespace */) {
	*(i8*)(intptr_t)(ws+3904) = p4324; /*namespace */
	*(i8*)(intptr_t)(ws+3912) = p4323; /*name */

	i8 v4325 = (i8)(intptr_t)(ws+3904);
	i8 v4326 = *(i8*)(intptr_t)v4325;
	i8 v4327 = *(i8*)(intptr_t)v4326;
	i8 v4328 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v4328 = v4327;

c02_037d:;

	i8 v4329 = (i8)(intptr_t)(ws+3920);
	i8 v4330 = *(i8*)(intptr_t)v4329;
	i8 v4331 = (i8)+0;
	if (v4330==v4331) goto c02_0380; else goto c02_037f;

c02_037f:;

	i8 v4332 = (i8)(intptr_t)(ws+3920);
	i8 v4333 = *(i8*)(intptr_t)v4332;
	i8 v4334 = v4333+(+8);
	i8 v4335 = *(i8*)(intptr_t)v4334;
	i8 v4336 = (i8)(intptr_t)(ws+3912);
	i8 v4337 = *(i8*)(intptr_t)v4336;
	i8 v4338 = (i8)(intptr_t)(f25_StrCmp);
	i1 v4339;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v4338)(&v4339, v4337, v4335);
	i1 v4340 = (i1)+0;
	if (v4339==v4340) goto c02_0384; else goto c02_0385;

c02_0384:;

c02_0388:;

	i8 v4341 = (i8)(intptr_t)(ws+3920);
	i8 v4342 = *(i8*)(intptr_t)v4341;
	i8 v4343 = v4342+(+32);
	i1 v4344 = *(i1*)(intptr_t)v4343;
	i1 v4345 = (i1)+39;
	if (v4344==v4345) goto c02_038a; else goto c02_038b;

c02_038a:;

	i8 v4346 = (i8)(intptr_t)(ws+3920);
	i8 v4347 = *(i8*)(intptr_t)v4346;
	i8 v4348 = *(i8*)(intptr_t)v4347;
	i8 v4349 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v4349 = v4348;

	goto c02_0388;

c02_038b:;

	goto endsub;

c02_0385:;

c02_0381:;

	i8 v4350 = (i8)(intptr_t)(ws+3920);
	i8 v4351 = *(i8*)(intptr_t)v4350;
	i8 v4352 = v4351+(+24);
	i8 v4353 = *(i8*)(intptr_t)v4352;
	i8 v4354 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v4354 = v4353;

	goto c02_037d;

c02_0380:;

	i8 v4355 = (i8)+0;
	i8 v4356 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v4356 = v4355;

endsub:;
	*p4322 = *(i8*)(intptr_t)(ws+3920);
}
	void f210_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// LookupSymbol workspace at ws+3864 length ws+24
void f211_LookupSymbol(i8* p4357 /* symbol */, i8 p4358 /* name */, i8 p4359 /* namespace */) {
	*(i8*)(intptr_t)(ws+3864) = p4359; /*namespace */
	*(i8*)(intptr_t)(ws+3872) = p4358; /*name */

	i8 v4360 = (i8)(intptr_t)(ws+3864);
	i8 v4361 = *(i8*)(intptr_t)v4360;
	i8 v4362 = (i8)+0;
	if (v4361==v4362) goto c02_038f; else goto c02_0390;

c02_038f:;

	i8 v4363 = (i8)(intptr_t)(ws+40);
	i8 v4364 = *(i8*)(intptr_t)v4363;
	i8 v4365 = v4364+(+16);
	i8 v4366 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4366 = v4365;

	goto c02_038c;

c02_0390:;

c02_038c:;

c02_0393:;

	i8 v4367 = (i8)(intptr_t)(ws+3864);
	i8 v4368 = *(i8*)(intptr_t)v4367;
	i8 v4369 = (i8)+0;
	if (v4368==v4369) goto c02_0396; else goto c02_0395;

c02_0395:;

	i8 v4370 = (i8)(intptr_t)(ws+3864);
	i8 v4371 = *(i8*)(intptr_t)v4370;
	i8 v4372 = (i8)(intptr_t)(ws+3872);
	i8 v4373 = *(i8*)(intptr_t)v4372;
	i8 v4374 = (i8)(intptr_t)(f210_LookupSymbolInNamespace);
	i8 v4375;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4374)(&v4375, v4373, v4371);
	i8 v4376 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4376 = v4375;

	i8 v4377 = (i8)(intptr_t)(ws+3880);
	i8 v4378 = *(i8*)(intptr_t)v4377;
	i8 v4379 = (i8)+0;
	if (v4378==v4379) goto c02_039b; else goto c02_039a;

c02_039a:;

	goto endsub;

c02_039b:;

c02_0397:;

	i8 v4380 = (i8)(intptr_t)(ws+3864);
	i8 v4381 = *(i8*)(intptr_t)v4380;
	i8 v4382 = v4381+(+16);
	i8 v4383 = *(i8*)(intptr_t)v4382;
	i8 v4384 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4384 = v4383;

	goto c02_0393;

c02_0396:;

	i8 v4385 = (i8)+0;
	i8 v4386 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4386 = v4385;

endsub:;
	*p4357 = *(i8*)(intptr_t)(ws+3880);
}

// AddToNamespace workspace at ws+3936 length ws+16
void f212_AddToNamespace(i8 p4387 /* symbol */, i8 p4388 /* namespace */) {
	*(i8*)(intptr_t)(ws+3936) = p4388; /*namespace */
	*(i8*)(intptr_t)(ws+3944) = p4387; /*symbol */

	i8 v4389 = (i8)(intptr_t)(ws+3936);
	i8 v4390 = *(i8*)(intptr_t)v4389;
	i8 v4391 = v4390+(+8);
	i8 v4392 = *(i8*)(intptr_t)v4391;
	i8 v4393 = (i8)+0;
	if (v4392==v4393) goto c02_039f; else goto c02_03a0;

c02_039f:;

	i8 v4394 = (i8)(intptr_t)(ws+3944);
	i8 v4395 = *(i8*)(intptr_t)v4394;
	i8 v4396 = (i8)(intptr_t)(ws+3936);
	i8 v4397 = *(i8*)(intptr_t)v4396;
	*(i8*)(intptr_t)v4397 = v4395;

	i8 v4398 = (i8)(intptr_t)(ws+3944);
	i8 v4399 = *(i8*)(intptr_t)v4398;
	i8 v4400 = (i8)(intptr_t)(ws+3936);
	i8 v4401 = *(i8*)(intptr_t)v4400;
	i8 v4402 = v4401+(+8);
	*(i8*)(intptr_t)v4402 = v4399;

	goto c02_039c;

c02_03a0:;

	i8 v4403 = (i8)(intptr_t)(ws+3944);
	i8 v4404 = *(i8*)(intptr_t)v4403;
	i8 v4405 = (i8)(intptr_t)(ws+3936);
	i8 v4406 = *(i8*)(intptr_t)v4405;
	i8 v4407 = v4406+(+8);
	i8 v4408 = *(i8*)(intptr_t)v4407;
	i8 v4409 = v4408+(+24);
	*(i8*)(intptr_t)v4409 = v4404;

	i8 v4410 = (i8)(intptr_t)(ws+3944);
	i8 v4411 = *(i8*)(intptr_t)v4410;
	i8 v4412 = (i8)(intptr_t)(ws+3936);
	i8 v4413 = *(i8*)(intptr_t)v4412;
	i8 v4414 = v4413+(+8);
	*(i8*)(intptr_t)v4414 = v4411;

c02_039c:;

	i8 v4415 = (i8)(intptr_t)(ws+3936);
	i8 v4416 = *(i8*)(intptr_t)v4415;
	i8 v4417 = (i8)(intptr_t)(ws+3944);
	i8 v4418 = *(i8*)(intptr_t)v4417;
	i8 v4419 = v4418+(+16);
	*(i8*)(intptr_t)v4419 = v4416;

endsub:;
}
	void f59_AllocNewSymbol(i8* /* symbol */);
	void f210_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f69_StartError(void);
const i1 c02_s0046[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0047[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f212_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddSymbol workspace at ws+3880 length ws+24
void f213_AddSymbol(i8* p4420 /* symbol */, i8 p4421 /* name */, i8 p4422 /* namespace */) {
	*(i8*)(intptr_t)(ws+3880) = p4422; /*namespace */
	*(i8*)(intptr_t)(ws+3888) = p4421; /*name */

	i8 v4423 = (i8)(intptr_t)(ws+3880);
	i8 v4424 = *(i8*)(intptr_t)v4423;
	i8 v4425 = (i8)+0;
	if (v4424==v4425) goto c02_03a4; else goto c02_03a5;

c02_03a4:;

	i8 v4426 = (i8)(intptr_t)(ws+40);
	i8 v4427 = *(i8*)(intptr_t)v4426;
	i8 v4428 = v4427+(+16);
	i8 v4429 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4429 = v4428;

	goto c02_03a1;

c02_03a5:;

c02_03a1:;

	i8 v4430 = (i8)(intptr_t)(f59_AllocNewSymbol);
	i8 v4431;

	((void(*)(i8* /* symbol */))(intptr_t)v4430)(&v4431);
	i8 v4432 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v4432 = v4431;

	i8 v4433 = (i8)(intptr_t)(ws+3888);
	i8 v4434 = *(i8*)(intptr_t)v4433;
	i8 v4435 = (i8)+0;
	if (v4434==v4435) goto c02_03aa; else goto c02_03a9;

c02_03a9:;

	i8 v4436 = (i8)(intptr_t)(ws+3880);
	i8 v4437 = *(i8*)(intptr_t)v4436;
	i8 v4438 = (i8)(intptr_t)(ws+3888);
	i8 v4439 = *(i8*)(intptr_t)v4438;
	i8 v4440 = (i8)(intptr_t)(f210_LookupSymbolInNamespace);
	i8 v4441;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4440)(&v4441, v4439, v4437);
	i8 v4442 = (i8)+0;
	if (v4441==v4442) goto c02_03af; else goto c02_03ae;

c02_03ae:;

	i8 v4443 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v4443)();

	i8 v4444 = (i8)(intptr_t)c02_s0046;
	i8 v4445 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4445)(v4444);

	i8 v4446 = (i8)(intptr_t)(ws+3888);
	i8 v4447 = *(i8*)(intptr_t)v4446;
	i8 v4448 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4448)(v4447);

	i8 v4449 = (i8)(intptr_t)c02_s0047;
	i8 v4450 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4450)(v4449);

	i8 v4451 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v4451)();

	goto c02_03ab;

c02_03af:;

c02_03ab:;

	i8 v4452 = (i8)(intptr_t)(ws+3888);
	i8 v4453 = *(i8*)(intptr_t)v4452;
	i8 v4454 = (i8)(intptr_t)(ws+3896);
	i8 v4455 = *(i8*)(intptr_t)v4454;
	i8 v4456 = v4455+(+8);
	*(i8*)(intptr_t)v4456 = v4453;

	i8 v4457 = (i8)(intptr_t)(ws+3880);
	i8 v4458 = *(i8*)(intptr_t)v4457;
	i8 v4459 = (i8)(intptr_t)(ws+3896);
	i8 v4460 = *(i8*)(intptr_t)v4459;
	i8 v4461 = (i8)(intptr_t)(f212_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4461)(v4460, v4458);

	goto c02_03a6;

c02_03aa:;

c02_03a6:;

endsub:;
	*p4420 = *(i8*)(intptr_t)(ws+3896);
}
	void f213_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// AddAlias workspace at ws+3848 length ws+32
void f214_AddAlias(i8* p4462 /* symbol */, i8 p4463 /* real */, i8 p4464 /* name */, i8 p4465 /* namespace */) {
	*(i8*)(intptr_t)(ws+3848) = p4465; /*namespace */
	*(i8*)(intptr_t)(ws+3856) = p4464; /*name */
	*(i8*)(intptr_t)(ws+3864) = p4463; /*real */

	i8 v4466 = (i8)(intptr_t)(ws+3848);
	i8 v4467 = *(i8*)(intptr_t)v4466;
	i8 v4468 = (i8)(intptr_t)(ws+3856);
	i8 v4469 = *(i8*)(intptr_t)v4468;
	i8 v4470 = (i8)(intptr_t)(f213_AddSymbol);
	i8 v4471;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4470)(&v4471, v4469, v4467);
	i8 v4472 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v4472 = v4471;

	i1 v4473 = (i1)+39;
	i8 v4474 = (i8)(intptr_t)(ws+3872);
	i8 v4475 = *(i8*)(intptr_t)v4474;
	i8 v4476 = v4475+(+32);
	*(i1*)(intptr_t)v4476 = v4473;

	i8 v4477 = (i8)(intptr_t)(ws+3864);
	i8 v4478 = *(i8*)(intptr_t)v4477;
	i8 v4479 = (i8)(intptr_t)(ws+3872);
	i8 v4480 = *(i8*)(intptr_t)v4479;
	*(i8*)(intptr_t)v4480 = v4478;

endsub:;
	*p4462 = *(i8*)(intptr_t)(ws+3872);
}
	void f214_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);

// AddAliasString workspace at ws+3720 length ws+24
void f215_AddAliasString(i8 p4481 /* real */, i8 p4482 /* name */) {
	*(i8*)(intptr_t)(ws+3720) = p4482; /*name */
	*(i8*)(intptr_t)(ws+3728) = p4481; /*real */

	i8 v4483 = (i8)+0;
	i8 v4484 = (i8)(intptr_t)(ws+3720);
	i8 v4485 = *(i8*)(intptr_t)v4484;
	i8 v4486 = (i8)(intptr_t)(ws+3728);
	i8 v4487 = *(i8*)(intptr_t)v4486;
	i8 v4488 = (i8)(intptr_t)(f214_AddAlias);
	i8 v4489;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v4488)(&v4489, v4487, v4485, v4483);
	i8 v4490 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v4490 = v4489;

endsub:;
}
	void f69_StartError(void);
const i1 c02_s0048[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0049[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// CheckNotPartialType workspace at ws+3888 length ws+8
void f216_CheckNotPartialType(i8 p4491 /* type */) {
	*(i8*)(intptr_t)(ws+3888) = p4491; /*type */

	i8 v4492 = (i8)(intptr_t)(ws+3888);
	i8 v4493 = *(i8*)(intptr_t)v4492;
	i8 v4494 = v4493+(+52);
	i1 v4495 = *(i1*)(intptr_t)v4494;
	i1 v4496 = (i1)+1;
	if (v4495==v4496) goto c02_03b3; else goto c02_03b4;

c02_03b3:;

	i8 v4497 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v4497)();

	i8 v4498 = (i8)(intptr_t)c02_s0048;
	i8 v4499 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4499)(v4498);

	i8 v4500 = (i8)(intptr_t)(ws+3888);
	i8 v4501 = *(i8*)(intptr_t)v4500;
	i8 v4502 = v4501+(+32);
	i8 v4503 = *(i8*)(intptr_t)v4502;
	i8 v4504 = v4503+(+8);
	i8 v4505 = *(i8*)(intptr_t)v4504;
	i8 v4506 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4506)(v4505);

	i8 v4507 = (i8)(intptr_t)c02_s0049;
	i8 v4508 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4508)(v4507);

	i8 v4509 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v4509)();

	goto c02_03b0;

c02_03b4:;

c02_03b0:;

endsub:;
}
	void f59_AllocNewSymbol(i8* /* symbol */);
	void f212_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddTypeToNamespace workspace at ws+3904 length ws+32
void f217_AddTypeToNamespace(i8 p4510 /* name */, i8 p4511 /* type */, i8 p4512 /* namespace */) {
	*(i8*)(intptr_t)(ws+3904) = p4512; /*namespace */
	*(i8*)(intptr_t)(ws+3912) = p4511; /*type */
	*(i8*)(intptr_t)(ws+3920) = p4510; /*name */

	i8 v4513 = (i8)(intptr_t)(f59_AllocNewSymbol);
	i8 v4514;

	((void(*)(i8* /* symbol */))(intptr_t)v4513)(&v4514);
	i8 v4515 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v4515 = v4514;

	i1 v4516 = (i1)+30;
	i8 v4517 = (i8)(intptr_t)(ws+3928);
	i8 v4518 = *(i8*)(intptr_t)v4517;
	i8 v4519 = v4518+(+32);
	*(i1*)(intptr_t)v4519 = v4516;

	i8 v4520 = (i8)(intptr_t)(ws+3912);
	i8 v4521 = *(i8*)(intptr_t)v4520;
	i8 v4522 = (i8)(intptr_t)(ws+3928);
	i8 v4523 = *(i8*)(intptr_t)v4522;
	*(i8*)(intptr_t)v4523 = v4521;

	i8 v4524 = (i8)(intptr_t)(ws+3920);
	i8 v4525 = *(i8*)(intptr_t)v4524;
	i8 v4526 = (i8)(intptr_t)(ws+3928);
	i8 v4527 = *(i8*)(intptr_t)v4526;
	i8 v4528 = v4527+(+8);
	*(i8*)(intptr_t)v4528 = v4525;

	i8 v4529 = (i8)(intptr_t)(ws+3928);
	i8 v4530 = *(i8*)(intptr_t)v4529;
	i8 v4531 = (i8)(intptr_t)(ws+3912);
	i8 v4532 = *(i8*)(intptr_t)v4531;
	i8 v4533 = v4532+(+32);
	*(i8*)(intptr_t)v4533 = v4530;

	i8 v4534 = (i8)(intptr_t)(ws+3904);
	i8 v4535 = *(i8*)(intptr_t)v4534;
	i8 v4536 = (i8)(intptr_t)(ws+3928);
	i8 v4537 = *(i8*)(intptr_t)v4536;
	i8 v4538 = (i8)(intptr_t)(f212_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4538)(v4537, v4535);

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f217_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeNumberType workspace at ws+3720 length ws+24
void f218_MakeNumberType(i8* p4539 /* type */, i8 p4540 /* name */, i1 p4541 /* is_signed */, i1 p4542 /* alignment */, i1 p4543 /* width */) {
	*(i1*)(intptr_t)(ws+3720) = p4543; /*width */
	*(i1*)(intptr_t)(ws+3721) = p4542; /*alignment */
	*(i1*)(intptr_t)(ws+3722) = p4541; /*is_signed */
	*(i8*)(intptr_t)(ws+3728) = p4540; /*name */

	i8 v4544 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v4545;

	((void(*)(i8* /* type */))(intptr_t)v4544)(&v4545);
	i8 v4546 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v4546 = v4545;

	i1 v4547 = (i1)+2;
	i8 v4548 = (i8)(intptr_t)(ws+3736);
	i8 v4549 = *(i8*)(intptr_t)v4548;
	i8 v4550 = v4549+(+52);
	*(i1*)(intptr_t)v4550 = v4547;

	i8 v4551 = (i8)(intptr_t)(ws+3720);
	i1 v4552 = *(i1*)(intptr_t)v4551;
	i2 v4553 = v4552;
	i8 v4554 = (i8)(intptr_t)(ws+3736);
	i8 v4555 = *(i8*)(intptr_t)v4554;
	i8 v4556 = v4555+(+48);
	*(i2*)(intptr_t)v4556 = v4553;

	i8 v4557 = (i8)(intptr_t)(ws+3720);
	i1 v4558 = *(i1*)(intptr_t)v4557;
	i2 v4559 = v4558;
	i8 v4560 = (i8)(intptr_t)(ws+3736);
	i8 v4561 = *(i8*)(intptr_t)v4560;
	i8 v4562 = v4561+(+50);
	*(i2*)(intptr_t)v4562 = v4559;

	i8 v4563 = (i8)(intptr_t)(ws+3721);
	i1 v4564 = *(i1*)(intptr_t)v4563;
	i8 v4565 = (i8)(intptr_t)(ws+3736);
	i8 v4566 = *(i8*)(intptr_t)v4565;
	i8 v4567 = v4566+(+53);
	*(i1*)(intptr_t)v4567 = v4564;

	i8 v4568 = (i8)(intptr_t)(ws+3722);
	i1 v4569 = *(i1*)(intptr_t)v4568;
	i8 v4570 = (i8)(intptr_t)(ws+3736);
	i8 v4571 = *(i8*)(intptr_t)v4570;
	*(i1*)(intptr_t)v4571 = v4569;

	i8 v4572 = (i8)(intptr_t)(ws+40);
	i8 v4573 = *(i8*)(intptr_t)v4572;
	i8 v4574 = v4573+(+16);
	i8 v4575 = (i8)(intptr_t)(ws+3736);
	i8 v4576 = *(i8*)(intptr_t)v4575;
	i8 v4577 = (i8)(intptr_t)(ws+3728);
	i8 v4578 = *(i8*)(intptr_t)v4577;
	i8 v4579 = (i8)(intptr_t)(f217_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v4579)(v4578, v4576, v4574);

endsub:;
	*p4539 = *(i8*)(intptr_t)(ws+3736);
}

// IsTypeOfKind workspace at ws+3952 length ws+10
void f219_IsTypeOfKind(i1* p4580 /* result */, i1 p4581 /* kind */, i8 p4582 /* type */) {
	*(i8*)(intptr_t)(ws+3952) = p4582; /*type */
	*(i1*)(intptr_t)(ws+3960) = p4581; /*kind */

	i1 v4583 = (i1)+0;
	i8 v4584 = (i8)(intptr_t)(ws+3961);
	*(i1*)(intptr_t)v4584 = v4583;

	i8 v4585 = (i8)(intptr_t)(ws+3952);
	i8 v4586 = *(i8*)(intptr_t)v4585;
	i8 v4587 = (i8)+0;
	if (v4586==v4587) goto c02_03bb; else goto c02_03bc;

c02_03bc:;

	i8 v4588 = (i8)(intptr_t)(ws+3952);
	i8 v4589 = *(i8*)(intptr_t)v4588;
	i8 v4590 = v4589+(+52);
	i1 v4591 = *(i1*)(intptr_t)v4590;
	i8 v4592 = (i8)(intptr_t)(ws+3960);
	i1 v4593 = *(i1*)(intptr_t)v4592;
	if (v4591==v4593) goto c02_03ba; else goto c02_03bb;

c02_03ba:;

	i1 v4594 = (i1)+1;
	i8 v4595 = (i8)(intptr_t)(ws+3961);
	*(i1*)(intptr_t)v4595 = v4594;

	goto c02_03b5;

c02_03bb:;

c02_03b5:;

endsub:;
	*p4580 = *(i1*)(intptr_t)(ws+3961);
}
	void f219_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsArray workspace at ws+3896 length ws+9
void f220_IsArray(i1* p4596 /* result */, i8 p4597 /* type */) {
	*(i8*)(intptr_t)(ws+3896) = p4597; /*type */

	i8 v4598 = (i8)(intptr_t)(ws+3896);
	i8 v4599 = *(i8*)(intptr_t)v4598;
	i1 v4600 = (i1)+4;
	i8 v4601 = (i8)(intptr_t)(f219_IsTypeOfKind);
	i1 v4602;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4601)(&v4602, v4600, v4599);
	i8 v4603 = (i8)(intptr_t)(ws+3904);
	*(i1*)(intptr_t)v4603 = v4602;

endsub:;
	*p4596 = *(i1*)(intptr_t)(ws+3904);
}
	void f219_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsPtr workspace at ws+3936 length ws+9
void f221_IsPtr(i1* p4604 /* result */, i8 p4605 /* type */) {
	*(i8*)(intptr_t)(ws+3936) = p4605; /*type */

	i8 v4606 = (i8)(intptr_t)(ws+3936);
	i8 v4607 = *(i8*)(intptr_t)v4606;
	i1 v4608 = (i1)+3;
	i8 v4609 = (i8)(intptr_t)(f219_IsTypeOfKind);
	i1 v4610;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4609)(&v4610, v4608, v4607);
	i8 v4611 = (i8)(intptr_t)(ws+3944);
	*(i1*)(intptr_t)v4611 = v4610;

endsub:;
	*p4604 = *(i1*)(intptr_t)(ws+3944);
}
	void f219_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSubroutine workspace at ws+3936 length ws+9
void f222_IsSubroutine(i1* p4612 /* result */, i8 p4613 /* type */) {
	*(i8*)(intptr_t)(ws+3936) = p4613; /*type */

	i8 v4614 = (i8)(intptr_t)(ws+3936);
	i8 v4615 = *(i8*)(intptr_t)v4614;
	i1 v4616 = (i1)+6;
	i8 v4617 = (i8)(intptr_t)(f219_IsTypeOfKind);
	i1 v4618;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4617)(&v4618, v4616, v4615);
	i8 v4619 = (i8)(intptr_t)(ws+3944);
	*(i1*)(intptr_t)v4619 = v4618;

endsub:;
	*p4612 = *(i1*)(intptr_t)(ws+3944);
}
	void f219_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsNum workspace at ws+3936 length ws+9
void f223_IsNum(i1* p4620 /* result */, i8 p4621 /* type */) {
	*(i8*)(intptr_t)(ws+3936) = p4621; /*type */

	i8 v4622 = (i8)(intptr_t)(ws+3936);
	i8 v4623 = *(i8*)(intptr_t)v4622;
	i8 v4624 = (i8)+0;
	if (v4623==v4624) goto c02_03c0; else goto c02_03c1;

c02_03c0:;

	i1 v4625 = (i1)+1;
	i8 v4626 = (i8)(intptr_t)(ws+3944);
	*(i1*)(intptr_t)v4626 = v4625;

	goto c02_03bd;

c02_03c1:;

	i8 v4627 = (i8)(intptr_t)(ws+3936);
	i8 v4628 = *(i8*)(intptr_t)v4627;
	i1 v4629 = (i1)+2;
	i8 v4630 = (i8)(intptr_t)(f219_IsTypeOfKind);
	i1 v4631;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4630)(&v4631, v4629, v4628);
	i8 v4632 = (i8)(intptr_t)(ws+3944);
	*(i1*)(intptr_t)v4632 = v4631;

c02_03bd:;

endsub:;
	*p4620 = *(i1*)(intptr_t)(ws+3944);
}
	void f219_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSNum workspace at ws+3888 length ws+9
void f224_IsSNum(i1* p4633 /* result */, i8 p4634 /* type */) {
	*(i8*)(intptr_t)(ws+3888) = p4634; /*type */

	i8 v4635 = (i8)(intptr_t)(ws+3888);
	i8 v4636 = *(i8*)(intptr_t)v4635;
	i8 v4637 = (i8)+0;
	if (v4636==v4637) goto c02_03c5; else goto c02_03c6;

c02_03c5:;

	i1 v4638 = (i1)+1;
	i8 v4639 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v4639 = v4638;

	goto c02_03c2;

c02_03c6:;

	i8 v4640 = (i8)(intptr_t)(ws+3888);
	i8 v4641 = *(i8*)(intptr_t)v4640;
	i1 v4642 = (i1)+2;
	i8 v4643 = (i8)(intptr_t)(f219_IsTypeOfKind);
	i1 v4644;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4643)(&v4644, v4642, v4641);
	i1 v4645 = (i1)+0;
	if (v4644==v4645) goto c02_03cc; else goto c02_03cd;

c02_03cd:;

	i8 v4646 = (i8)(intptr_t)(ws+3888);
	i8 v4647 = *(i8*)(intptr_t)v4646;
	i1 v4648 = *(i1*)(intptr_t)v4647;
	i1 v4649 = (i1)+0;
	if (v4648==v4649) goto c02_03cc; else goto c02_03cb;

c02_03cb:;

	i1 v4650 = (i1)+1;
	i8 v4651 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v4651 = v4650;

	goto c02_03c2;

c02_03cc:;

	i1 v4652 = (i1)+0;
	i8 v4653 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v4653 = v4652;

c02_03c2:;

endsub:;
	*p4633 = *(i1*)(intptr_t)(ws+3896);
}
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f223_IsNum(i1* /* result */, i8 /* type */);
	void f222_IsSubroutine(i1* /* result */, i8 /* type */);

// IsScalar workspace at ws+3920 length ws+9
void f225_IsScalar(i1* p4654 /* result */, i8 p4655 /* type */) {
	*(i8*)(intptr_t)(ws+3920) = p4655; /*type */

	i8 v4656 = (i8)(intptr_t)(ws+3920);
	i8 v4657 = *(i8*)(intptr_t)v4656;
	i8 v4658 = (i8)(intptr_t)(f221_IsPtr);
	i1 v4659;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4658)(&v4659, v4657);
	i1 v4660 = (i1)+0;
	if (v4659==v4660) goto c02_03d8; else goto c02_03d5;

c02_03d8:;

	i8 v4661 = (i8)(intptr_t)(ws+3920);
	i8 v4662 = *(i8*)(intptr_t)v4661;
	i8 v4663 = (i8)(intptr_t)(f223_IsNum);
	i1 v4664;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4663)(&v4664, v4662);
	i1 v4665 = (i1)+0;
	if (v4664==v4665) goto c02_03d7; else goto c02_03d5;

c02_03d7:;

	i8 v4666 = (i8)(intptr_t)(ws+3920);
	i8 v4667 = *(i8*)(intptr_t)v4666;
	i8 v4668 = (i8)(intptr_t)(f222_IsSubroutine);
	i1 v4669;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4668)(&v4669, v4667);
	i1 v4670 = (i1)+0;
	if (v4669==v4670) goto c02_03d6; else goto c02_03d5;

c02_03d5:;

	i1 v4671 = (i1)+1;
	i8 v4672 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v4672 = v4671;

	goto c02_03ce;

c02_03d6:;

	i1 v4673 = (i1)+0;
	i8 v4674 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v4674 = v4673;

c02_03ce:;

endsub:;
	*p4654 = *(i1*)(intptr_t)(ws+3928);
}
	void f219_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsRecord workspace at ws+3864 length ws+9
void f226_IsRecord(i1* p4675 /* result */, i8 p4676 /* type */) {
	*(i8*)(intptr_t)(ws+3864) = p4676; /*type */

	i8 v4677 = (i8)(intptr_t)(ws+3864);
	i8 v4678 = *(i8*)(intptr_t)v4677;
	i1 v4679 = (i1)+5;
	i8 v4680 = (i8)(intptr_t)(f219_IsTypeOfKind);
	i1 v4681;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4680)(&v4681, v4679, v4678);
	i8 v4682 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4682 = v4681;

endsub:;
	*p4675 = *(i1*)(intptr_t)(ws+3872);
}
	void f225_IsScalar(i1* /* result */, i8 /* type */);
	void f108_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);

// MakeLValue workspace at ws+3888 length ws+32
void f227_MakeLValue(i8* p4683 /* lvalue */, i8 p4684 /* address */) {
	*(i8*)(intptr_t)(ws+3888) = p4684; /*address */

	i1 v4685 = (i1)+0;
	i8 v4686 = (i8)(intptr_t)(ws+3904);
	*(i1*)(intptr_t)v4686 = v4685;

	i8 v4687 = (i8)(intptr_t)(ws+3888);
	i8 v4688 = *(i8*)(intptr_t)v4687;
	i8 v4689 = v4688+(+16);
	i8 v4690 = *(i8*)(intptr_t)v4689;
	i8 v4691 = *(i8*)(intptr_t)v4690;
	i8 v4692 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v4692 = v4691;

	i8 v4693 = (i8)(intptr_t)(ws+3912);
	i8 v4694 = *(i8*)(intptr_t)v4693;
	i8 v4695 = (i8)(intptr_t)(f225_IsScalar);
	i1 v4696;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4695)(&v4696, v4694);
	i1 v4697 = (i1)+0;
	if (v4696==v4697) goto c02_03dd; else goto c02_03dc;

c02_03dc:;

	i8 v4698 = (i8)(intptr_t)(ws+3912);
	i8 v4699 = *(i8*)(intptr_t)v4698;
	i8 v4700 = v4699+(+48);
	i2 v4701 = *(i2*)(intptr_t)v4700;
	i1 v4702 = v4701;
	i8 v4703 = (i8)(intptr_t)(ws+3904);
	*(i1*)(intptr_t)v4703 = v4702;

	goto c02_03d9;

c02_03dd:;

c02_03d9:;

	i8 v4704 = (i8)(intptr_t)(ws+3904);
	i1 v4705 = *(i1*)(intptr_t)v4704;
	i8 v4706 = (i8)(intptr_t)(ws+3888);
	i8 v4707 = *(i8*)(intptr_t)v4706;
	i8 v4708 = (i8)(intptr_t)(f108_MidLoad);
	i8 v4709;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v4708)(&v4709, v4707, v4705);
	i8 v4710 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v4710 = v4709;

	i8 v4711 = (i8)(intptr_t)(ws+3912);
	i8 v4712 = *(i8*)(intptr_t)v4711;
	i8 v4713 = (i8)(intptr_t)(ws+3896);
	i8 v4714 = *(i8*)(intptr_t)v4713;
	i8 v4715 = v4714+(+16);
	*(i8*)(intptr_t)v4715 = v4712;

endsub:;
	*p4683 = *(i8*)(intptr_t)(ws+3896);
}
const i1 c02_s004a[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f58_Discard(i8 /* node */);

// UndoLValue workspace at ws+3888 length ws+17
void f228_UndoLValue(i8* p4716 /* address */, i8 p4717 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3888) = p4717; /*lvalue */

	i8 v4718 = (i8)(intptr_t)(ws+3888);
	i8 v4719 = *(i8*)(intptr_t)v4718;
	i8 v4720 = v4719+(+58);
	i1 v4721 = *(i1*)(intptr_t)v4720;
	i8 v4722 = (i8)(intptr_t)(ws+3904);
	*(i1*)(intptr_t)v4722 = v4721;

	i8 v4723 = (i8)(intptr_t)(ws+3904);
	i1 v4724 = *(i1*)(intptr_t)v4723;
	i1 v4725 = (i1)+46;
	if (v4724<v4725) goto c02_03e3; else goto c02_03e5;

c02_03e5:;

	i1 v4726 = (i1)+50;
	i8 v4727 = (i8)(intptr_t)(ws+3904);
	i1 v4728 = *(i1*)(intptr_t)v4727;
	if (v4726<v4728) goto c02_03e3; else goto c02_03e4;

c02_03e3:;

	i8 v4729 = (i8)(intptr_t)c02_s004a;
	i8 v4730 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4730)(v4729);

	goto c02_03de;

c02_03e4:;

c02_03de:;

	i8 v4731 = (i8)(intptr_t)(ws+3888);
	i8 v4732 = *(i8*)(intptr_t)v4731;
	i8 v4733 = v4732+(+24);
	i8 v4734 = *(i8*)(intptr_t)v4733;
	i8 v4735 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v4735 = v4734;

	i8 v4736 = (i8)+0;
	i8 v4737 = (i8)(intptr_t)(ws+3888);
	i8 v4738 = *(i8*)(intptr_t)v4737;
	i8 v4739 = v4738+(+24);
	*(i8*)(intptr_t)v4739 = v4736;

	i8 v4740 = (i8)(intptr_t)(ws+3888);
	i8 v4741 = *(i8*)(intptr_t)v4740;
	i8 v4742 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4742)(v4741);

endsub:;
	*p4716 = *(i8*)(intptr_t)(ws+3896);
}

// AllocLabel workspace at ws+3904 length ws+2
void f229_AllocLabel(i2* p4743 /* label */) {

	i8 v4744 = (i8)(intptr_t)(ws+48);
	i2 v4745 = *(i2*)(intptr_t)v4744;
	i8 v4746 = (i8)(intptr_t)(ws+3904);
	*(i2*)(intptr_t)v4746 = v4745;

	i8 v4747 = (i8)(intptr_t)(ws+48);
	i2 v4748 = *(i2*)(intptr_t)v4747;
	i2 v4749 = v4748+(+1);
	i8 v4750 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4750 = v4749;

endsub:;
	*p4743 = *(i2*)(intptr_t)(ws+3904);
}

// AllocSubrId workspace at ws+3848 length ws+2
void f230_AllocSubrId(i2* p4751 /* id */) {

	i8 v4752 = (i8)(intptr_t)(ws+50);
	i2 v4753 = *(i2*)(intptr_t)v4752;
	i8 v4754 = (i8)(intptr_t)(ws+3848);
	*(i2*)(intptr_t)v4754 = v4753;

	i8 v4755 = (i8)(intptr_t)(ws+50);
	i2 v4756 = *(i2*)(intptr_t)v4755;
	i2 v4757 = v4756+(+1);
	i8 v4758 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4758 = v4757;

endsub:;
	*p4751 = *(i2*)(intptr_t)(ws+3848);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewInstruction workspace at ws+3992 length ws+8
void f231_AllocNewInstruction(i8* p4761 /* insn */) {

	i8 v4762 = (i8)(intptr_t)(ws+1832);
	i8 v4763 = *(i8*)(intptr_t)v4762;
	i8 v4764 = (i8)+0;
	if (v4763==v4764) goto c02_03ea; else goto c02_03e9;

c02_03e9:;

	i8 v4765 = (i8)(intptr_t)(ws+1832);
	i8 v4766 = *(i8*)(intptr_t)v4765;
	i8 v4767 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v4767 = v4766;

	i8 v4768 = (i8)(intptr_t)(ws+1832);
	i8 v4769 = *(i8*)(intptr_t)v4768;
	i8 v4770 = *(i8*)(intptr_t)v4769;
	i8 v4771 = (i8)(intptr_t)(ws+1832);
	*(i8*)(intptr_t)v4771 = v4770;

	i8 v4772 = (i8)(intptr_t)(ws+3992);
	i8 v4773 = *(i8*)(intptr_t)v4772;
	i1 v4774 = (i1)+0;
	i8 v4775 = (i8)+63;
	i8 v4776 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v4776)(v4775, v4774, v4773);

	goto c02_03e6;

c02_03ea:;

	i8 v4777 = (i8)+63;
	i8 v4778 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v4779;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v4778)(&v4779, v4777);
	i8 v4780 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v4780 = v4779;

c02_03e6:;

endsub:;
	*p4761 = *(i8*)(intptr_t)(ws+3992);
}

// FreeInstruction workspace at ws+4000 length ws+8
void f232_FreeInstruction(i8 p4781 /* insn */) {
	*(i8*)(intptr_t)(ws+4000) = p4781; /*insn */

	i8 v4782 = (i8)(intptr_t)(ws+1832);
	i8 v4783 = *(i8*)(intptr_t)v4782;
	i8 v4784 = (i8)(intptr_t)(ws+4000);
	i8 v4785 = *(i8*)(intptr_t)v4784;
	*(i8*)(intptr_t)v4785 = v4783;

	i8 v4786 = (i8)(intptr_t)(ws+4000);
	i8 v4787 = *(i8*)(intptr_t)v4786;
	i8 v4788 = (i8)(intptr_t)(ws+1832);
	*(i8*)(intptr_t)v4788 = v4787;

endsub:;
}
	void f33_Free(i8 /* block */);

// PurgeAllFreeInstructions workspace at ws+4128 length ws+8
void f68_PurgeAllFreeInstructions(void) {

c02_03ed:;

	i8 v4789 = (i8)(intptr_t)(ws+1832);
	i8 v4790 = *(i8*)(intptr_t)v4789;
	i8 v4791 = (i8)+0;
	if (v4790==v4791) goto c02_03f0; else goto c02_03ef;

c02_03ef:;

	i8 v4792 = (i8)(intptr_t)(ws+1832);
	i8 v4793 = *(i8*)(intptr_t)v4792;
	i8 v4794 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v4794 = v4793;

	i8 v4795 = (i8)(intptr_t)(ws+1832);
	i8 v4796 = *(i8*)(intptr_t)v4795;
	i8 v4797 = *(i8*)(intptr_t)v4796;
	i8 v4798 = (i8)(intptr_t)(ws+1832);
	*(i8*)(intptr_t)v4798 = v4797;

	i8 v4799 = (i8)(intptr_t)(ws+4128);
	i8 v4800 = *(i8*)(intptr_t)v4799;
	i8 v4801 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v4801)(v4800);

	goto c02_03ed;

c02_03f0:;

endsub:;
}

// FindConflictingRegisters workspace at ws+4016 length ws+16
void f233_FindConflictingRegisters(i1* p4802 /* conflicting */, i1 p4803 /* inreg */) {
	*(i1*)(intptr_t)(ws+4016) = p4803; /*inreg */

	i1 v4804 = (i1)+0;
	i8 v4805 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v4805 = v4804;

	i8 v4806 = (i8)(intptr_t)(((i1*)c02_ad5+0));
	i8 v4807 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v4807 = v4806;

c02_03f3:;

	i8 v4808 = (i8)(intptr_t)(ws+4024);
	i8 v4809 = *(i8*)(intptr_t)v4808;
	i8 v4810 = (i8)(intptr_t)(((i1*)c02_ad5+80));
	if (v4809==v4810) goto c02_03f6; else goto c02_03f5;

c02_03f5:;

	i8 v4811 = (i8)(intptr_t)(ws+4024);
	i8 v4812 = *(i8*)(intptr_t)v4811;
	i8 v4813 = v4812+(+8);
	i1 v4814 = *(i1*)(intptr_t)v4813;
	i8 v4815 = (i8)(intptr_t)(ws+4016);
	i1 v4816 = *(i1*)(intptr_t)v4815;
	i1 v4817 = v4814&v4816;
	i1 v4818 = (i1)+0;
	if (v4817==v4818) goto c02_03fb; else goto c02_03fa;

c02_03fa:;

	i8 v4819 = (i8)(intptr_t)(ws+4017);
	i1 v4820 = *(i1*)(intptr_t)v4819;
	i8 v4821 = (i8)(intptr_t)(ws+4024);
	i8 v4822 = *(i8*)(intptr_t)v4821;
	i8 v4823 = v4822+(+9);
	i1 v4824 = *(i1*)(intptr_t)v4823;
	i1 v4825 = v4820|v4824;
	i8 v4826 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v4826 = v4825;

	goto c02_03f7;

c02_03fb:;

c02_03f7:;

	i8 v4827 = (i8)(intptr_t)(ws+4024);
	i8 v4828 = *(i8*)(intptr_t)v4827;
	i8 v4829 = v4828+(+16);
	i8 v4830 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v4830 = v4829;

	goto c02_03f3;

c02_03f6:;

endsub:;
	*p4802 = *(i1*)(intptr_t)(ws+4017);
}

// FindCompatibleRegisters workspace at ws+4016 length ws+16
void f234_FindCompatibleRegisters(i1* p4831 /* compatible */, i1 p4832 /* inreg */) {
	*(i1*)(intptr_t)(ws+4016) = p4832; /*inreg */

	i1 v4833 = (i1)-1;
	i8 v4834 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v4834 = v4833;

	i8 v4835 = (i8)(intptr_t)(((i1*)c02_ad5+0));
	i8 v4836 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v4836 = v4835;

c02_03fe:;

	i8 v4837 = (i8)(intptr_t)(ws+4024);
	i8 v4838 = *(i8*)(intptr_t)v4837;
	i8 v4839 = (i8)(intptr_t)(((i1*)c02_ad5+80));
	if (v4838==v4839) goto c02_0401; else goto c02_0400;

c02_0400:;

	i8 v4840 = (i8)(intptr_t)(ws+4024);
	i8 v4841 = *(i8*)(intptr_t)v4840;
	i8 v4842 = v4841+(+8);
	i1 v4843 = *(i1*)(intptr_t)v4842;
	i8 v4844 = (i8)(intptr_t)(ws+4016);
	i1 v4845 = *(i1*)(intptr_t)v4844;
	i1 v4846 = v4843&v4845;
	i1 v4847 = (i1)+0;
	if (v4846==v4847) goto c02_0406; else goto c02_0405;

c02_0405:;

	i8 v4848 = (i8)(intptr_t)(ws+4017);
	i1 v4849 = *(i1*)(intptr_t)v4848;
	i8 v4850 = (i8)(intptr_t)(ws+4024);
	i8 v4851 = *(i8*)(intptr_t)v4850;
	i8 v4852 = v4851+(+10);
	i1 v4853 = *(i1*)(intptr_t)v4852;
	i1 v4854 = v4849&v4853;
	i8 v4855 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v4855 = v4854;

	goto c02_0402;

c02_0406:;

c02_0402:;

	i8 v4856 = (i8)(intptr_t)(ws+4024);
	i8 v4857 = *(i8*)(intptr_t)v4856;
	i8 v4858 = v4857+(+16);
	i8 v4859 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v4859 = v4858;

	goto c02_03fe;

c02_0401:;

endsub:;
	*p4831 = *(i1*)(intptr_t)(ws+4017);
}

// FindFirst workspace at ws+4016 length ws+2
void f235_FindFirst(i1* p4860 /* outreg */, i1 p4861 /* inreg */) {
	*(i1*)(intptr_t)(ws+4016) = p4861; /*inreg */

	i1 v4862 = (i1)+1;
	i8 v4863 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v4863 = v4862;

c02_0409:;

	i8 v4864 = (i8)(intptr_t)(ws+4017);
	i1 v4865 = *(i1*)(intptr_t)v4864;
	i1 v4866 = (i1)+0;
	if (v4865==v4866) goto c02_040c; else goto c02_040b;

c02_040b:;

	i8 v4867 = (i8)(intptr_t)(ws+4016);
	i1 v4868 = *(i1*)(intptr_t)v4867;
	i8 v4869 = (i8)(intptr_t)(ws+4017);
	i1 v4870 = *(i1*)(intptr_t)v4869;
	i1 v4871 = v4868&v4870;
	i1 v4872 = (i1)+0;
	if (v4871==v4872) goto c02_0411; else goto c02_0410;

c02_0410:;

	goto endsub;

c02_0411:;

c02_040d:;

	i8 v4873 = (i8)(intptr_t)(ws+4017);
	i1 v4874 = *(i1*)(intptr_t)v4873;
	i1 v4875 = (i1)+1;
	i1 v4876 = ((i1)v4874)<<v4875;
	i8 v4877 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v4877 = v4876;

	goto c02_0409;

c02_040c:;

	i1 v4878 = (i1)+0;
	i8 v4879 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v4879 = v4878;

endsub:;
	*p4860 = *(i1*)(intptr_t)(ws+4017);
}

// ArchAlignUp workspace at ws+3896 length ws+8
void f236_ArchAlignUp(i2* p4882 /* newvalue */, i1 p4883 /* alignment */, i2 p4884 /* value */) {
	*(i2*)(intptr_t)(ws+3896) = p4884; /*value */
	*(i1*)(intptr_t)(ws+3898) = p4883; /*alignment */

	i8 v4885 = (i8)(intptr_t)(ws+3898);
	i1 v4886 = *(i1*)(intptr_t)v4885;
	i1 v4887 = v4886+(-1);
	i2 v4888 = v4887;
	i8 v4889 = (i8)(intptr_t)(ws+3902);
	*(i2*)(intptr_t)v4889 = v4888;

	i8 v4890 = (i8)(intptr_t)(ws+3896);
	i2 v4891 = *(i2*)(intptr_t)v4890;
	i8 v4892 = (i8)(intptr_t)(ws+3902);
	i2 v4893 = *(i2*)(intptr_t)v4892;
	i2 v4894 = v4891+v4893;
	i8 v4895 = (i8)(intptr_t)(ws+3902);
	i2 v4896 = *(i2*)(intptr_t)v4895;
	i2 v4897 = ~v4896;
	i2 v4898 = v4894&v4897;
	i8 v4899 = (i8)(intptr_t)(ws+3900);
	*(i2*)(intptr_t)v4899 = v4898;

endsub:;
	*p4882 = *(i2*)(intptr_t)(ws+3900);
}
const i1 c02_s004b[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f218_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004c[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f218_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004d[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f218_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004e[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f218_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004f[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f218_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0050[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f218_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0051[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f218_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0052[] = { 0x69,0x6e,0x74,0x38,0 };
	void f218_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0053[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
const i1 c02_s0054[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f211_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f215_AddAliasString(i8 /* real */, i8 /* name */);

// ArchInitTypes workspace at ws+3720 length ws+0
void f237_ArchInitTypes(void) {

	i1 v4900 = (i1)+8;
	i1 v4901 = (i1)+8;
	i1 v4902 = (i1)+0;
	i8 v4903 = (i8)(intptr_t)c02_s004b;
	i8 v4904 = (i8)(intptr_t)(f218_MakeNumberType);
	i8 v4905;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4904)(&v4905, v4903, v4902, v4901, v4900);
	i8 v4906 = (i8)(intptr_t)(ws+1840);
	*(i8*)(intptr_t)v4906 = v4905;

	i1 v4907 = (i1)+8;
	i1 v4908 = (i1)+8;
	i1 v4909 = (i1)+1;
	i8 v4910 = (i8)(intptr_t)c02_s004c;
	i8 v4911 = (i8)(intptr_t)(f218_MakeNumberType);
	i8 v4912;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4911)(&v4912, v4910, v4909, v4908, v4907);
	i8 v4913 = (i8)(intptr_t)(ws+1848);
	*(i8*)(intptr_t)v4913 = v4912;

	i1 v4914 = (i1)+4;
	i1 v4915 = (i1)+4;
	i1 v4916 = (i1)+0;
	i8 v4917 = (i8)(intptr_t)c02_s004d;
	i8 v4918 = (i8)(intptr_t)(f218_MakeNumberType);
	i8 v4919;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4918)(&v4919, v4917, v4916, v4915, v4914);
	i8 v4920 = (i8)(intptr_t)(ws+1856);
	*(i8*)(intptr_t)v4920 = v4919;

	i1 v4921 = (i1)+4;
	i1 v4922 = (i1)+4;
	i1 v4923 = (i1)+1;
	i8 v4924 = (i8)(intptr_t)c02_s004e;
	i8 v4925 = (i8)(intptr_t)(f218_MakeNumberType);
	i8 v4926;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4925)(&v4926, v4924, v4923, v4922, v4921);
	i8 v4927 = (i8)(intptr_t)(ws+1864);
	*(i8*)(intptr_t)v4927 = v4926;

	i1 v4928 = (i1)+2;
	i1 v4929 = (i1)+2;
	i1 v4930 = (i1)+0;
	i8 v4931 = (i8)(intptr_t)c02_s004f;
	i8 v4932 = (i8)(intptr_t)(f218_MakeNumberType);
	i8 v4933;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4932)(&v4933, v4931, v4930, v4929, v4928);
	i8 v4934 = (i8)(intptr_t)(ws+1872);
	*(i8*)(intptr_t)v4934 = v4933;

	i1 v4935 = (i1)+2;
	i1 v4936 = (i1)+2;
	i1 v4937 = (i1)+1;
	i8 v4938 = (i8)(intptr_t)c02_s0050;
	i8 v4939 = (i8)(intptr_t)(f218_MakeNumberType);
	i8 v4940;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4939)(&v4940, v4938, v4937, v4936, v4935);
	i8 v4941 = (i8)(intptr_t)(ws+1880);
	*(i8*)(intptr_t)v4941 = v4940;

	i1 v4942 = (i1)+1;
	i1 v4943 = (i1)+1;
	i1 v4944 = (i1)+0;
	i8 v4945 = (i8)(intptr_t)c02_s0051;
	i8 v4946 = (i8)(intptr_t)(f218_MakeNumberType);
	i8 v4947;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4946)(&v4947, v4945, v4944, v4943, v4942);
	i8 v4948 = (i8)(intptr_t)(ws+1888);
	*(i8*)(intptr_t)v4948 = v4947;

	i1 v4949 = (i1)+1;
	i1 v4950 = (i1)+1;
	i1 v4951 = (i1)+1;
	i8 v4952 = (i8)(intptr_t)c02_s0052;
	i8 v4953 = (i8)(intptr_t)(f218_MakeNumberType);
	i8 v4954;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4953)(&v4954, v4952, v4951, v4950, v4949);
	i8 v4955 = (i8)(intptr_t)(ws+1896);
	*(i8*)(intptr_t)v4955 = v4954;

	i8 v4956 = (i8)(intptr_t)(ws+1840);
	i8 v4957 = *(i8*)(intptr_t)v4956;
	i8 v4958 = (i8)(intptr_t)(ws+1904);
	*(i8*)(intptr_t)v4958 = v4957;

	i8 v4959 = (i8)(intptr_t)c02_s0053;
	i8 v4960 = (i8)+0;
	i8 v4961 = (i8)(intptr_t)c02_s0054;
	i8 v4962 = (i8)(intptr_t)(f211_LookupSymbol);
	i8 v4963;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4962)(&v4963, v4961, v4960);
	i8 v4964 = (i8)(intptr_t)(f215_AddAliasString);

	((void(*)(i8 /* real */, i8 /* name */))(intptr_t)v4964)(v4963, v4959);

endsub:;
}

// ArchGuessIntType workspace at ws+3872 length ws+16
void f238_ArchGuessIntType(i8* p4965 /* symbol */, i4 p4966 /* max */, i4 p4967 /* min */) {
	*(i4*)(intptr_t)(ws+3872) = p4967; /*min */
	*(i4*)(intptr_t)(ws+3876) = p4966; /*max */

	i8 v4968 = (i8)(intptr_t)(ws+3872);
	i4 v4969 = *(i4*)(intptr_t)v4968;
	i4 v4970 = (i4)+0;
	if ((s4)v4969<(s4)v4970) goto c02_0418; else goto c02_0419;

c02_0419:;

	i4 v4971 = (i4)+255;
	i8 v4972 = (i8)(intptr_t)(ws+3876);
	i4 v4973 = *(i4*)(intptr_t)v4972;
	if ((s4)v4971<(s4)v4973) goto c02_0418; else goto c02_0417;

c02_0417:;

	i8 v4974 = (i8)(intptr_t)(ws+1888);
	i8 v4975 = *(i8*)(intptr_t)v4974;
	i8 v4976 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4976 = v4975;

	goto c02_0412;

c02_0418:;

	i8 v4977 = (i8)(intptr_t)(ws+3872);
	i4 v4978 = *(i4*)(intptr_t)v4977;
	i4 v4979 = (i4)-128;
	if ((s4)v4978<(s4)v4979) goto c02_041f; else goto c02_0420;

c02_0420:;

	i4 v4980 = (i4)+127;
	i8 v4981 = (i8)(intptr_t)(ws+3876);
	i4 v4982 = *(i4*)(intptr_t)v4981;
	if ((s4)v4980<(s4)v4982) goto c02_041f; else goto c02_041e;

c02_041e:;

	i8 v4983 = (i8)(intptr_t)(ws+1896);
	i8 v4984 = *(i8*)(intptr_t)v4983;
	i8 v4985 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4985 = v4984;

	goto c02_0412;

c02_041f:;

	i8 v4986 = (i8)(intptr_t)(ws+3872);
	i4 v4987 = *(i4*)(intptr_t)v4986;
	i4 v4988 = (i4)+0;
	if ((s4)v4987<(s4)v4988) goto c02_0426; else goto c02_0427;

c02_0427:;

	i4 v4989 = (i4)+65535;
	i8 v4990 = (i8)(intptr_t)(ws+3876);
	i4 v4991 = *(i4*)(intptr_t)v4990;
	if ((s4)v4989<(s4)v4991) goto c02_0426; else goto c02_0425;

c02_0425:;

	i8 v4992 = (i8)(intptr_t)(ws+1872);
	i8 v4993 = *(i8*)(intptr_t)v4992;
	i8 v4994 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4994 = v4993;

	goto c02_0412;

c02_0426:;

	i8 v4995 = (i8)(intptr_t)(ws+3872);
	i4 v4996 = *(i4*)(intptr_t)v4995;
	i4 v4997 = (i4)-32768;
	if ((s4)v4996<(s4)v4997) goto c02_042d; else goto c02_042e;

c02_042e:;

	i4 v4998 = (i4)+32767;
	i8 v4999 = (i8)(intptr_t)(ws+3876);
	i4 v5000 = *(i4*)(intptr_t)v4999;
	if ((s4)v4998<(s4)v5000) goto c02_042d; else goto c02_042c;

c02_042c:;

	i8 v5001 = (i8)(intptr_t)(ws+1880);
	i8 v5002 = *(i8*)(intptr_t)v5001;
	i8 v5003 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v5003 = v5002;

	goto c02_0412;

c02_042d:;

	i8 v5004 = (i8)(intptr_t)(ws+3872);
	i4 v5005 = *(i4*)(intptr_t)v5004;
	i4 v5006 = (i4)+0;
	if ((s4)v5005<(s4)v5006) goto c02_0432; else goto c02_0431;

c02_0431:;

	i8 v5007 = (i8)(intptr_t)(ws+1856);
	i8 v5008 = *(i8*)(intptr_t)v5007;
	i8 v5009 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v5009 = v5008;

	goto c02_0412;

c02_0432:;

	i8 v5010 = (i8)(intptr_t)(ws+1864);
	i8 v5011 = *(i8*)(intptr_t)v5010;
	i8 v5012 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v5012 = v5011;

c02_0412:;

endsub:;
	*p4965 = *(i8*)(intptr_t)(ws+3880);
}
	void f236_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitVariable workspace at ws+3872 length ws+18
void f239_ArchInitVariable(i8 p5013 /* symbol */) {
	*(i8*)(intptr_t)(ws+3872) = p5013; /*symbol */

	i8 v5014 = (i8)(intptr_t)(ws+3872);
	i8 v5015 = *(i8*)(intptr_t)v5014;
	i8 v5016 = *(i8*)(intptr_t)v5015;
	i8 v5017 = v5016+(+8);
	i8 v5018 = *(i8*)(intptr_t)v5017;
	i8 v5019 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v5019 = v5018;

	i8 v5020 = (i8)(intptr_t)(ws+3880);
	i8 v5021 = *(i8*)(intptr_t)v5020;
	i8 v5022 = v5021+(+58);
	i2 v5023 = *(i2*)(intptr_t)v5022;
	i8 v5024 = (i8)(intptr_t)(ws+3888);
	*(i2*)(intptr_t)v5024 = v5023;

	i8 v5025 = (i8)(intptr_t)(ws+3888);
	i2 v5026 = *(i2*)(intptr_t)v5025;
	i8 v5027 = (i8)(intptr_t)(ws+3872);
	i8 v5028 = *(i8*)(intptr_t)v5027;
	i8 v5029 = *(i8*)(intptr_t)v5028;
	i8 v5030 = *(i8*)(intptr_t)v5029;
	i8 v5031 = v5030+(+53);
	i1 v5032 = *(i1*)(intptr_t)v5031;
	i8 v5033 = (i8)(intptr_t)(f236_ArchAlignUp);
	i2 v5034;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v5033)(&v5034, v5032, v5026);
	i8 v5035 = (i8)(intptr_t)(ws+3888);
	*(i2*)(intptr_t)v5035 = v5034;

	i8 v5036 = (i8)(intptr_t)(ws+3888);
	i2 v5037 = *(i2*)(intptr_t)v5036;
	i8 v5038 = (i8)(intptr_t)(ws+3872);
	i8 v5039 = *(i8*)(intptr_t)v5038;
	i8 v5040 = *(i8*)(intptr_t)v5039;
	i8 v5041 = v5040+(+32);
	*(i2*)(intptr_t)v5041 = v5037;

	i8 v5042 = (i8)(intptr_t)(ws+3888);
	i2 v5043 = *(i2*)(intptr_t)v5042;
	i8 v5044 = (i8)(intptr_t)(ws+3872);
	i8 v5045 = *(i8*)(intptr_t)v5044;
	i8 v5046 = *(i8*)(intptr_t)v5045;
	i8 v5047 = *(i8*)(intptr_t)v5046;
	i8 v5048 = v5047+(+48);
	i2 v5049 = *(i2*)(intptr_t)v5048;
	i2 v5050 = v5043+v5049;
	i8 v5051 = (i8)(intptr_t)(ws+3880);
	i8 v5052 = *(i8*)(intptr_t)v5051;
	i8 v5053 = v5052+(+58);
	*(i2*)(intptr_t)v5053 = v5050;

endsub:;
}
	void f236_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitMember workspace at ws+3840 length ws+18
void f240_ArchInitMember(i2 p5054 /* position */, i8 p5055 /* member */, i8 p5056 /* containing */) {
	*(i8*)(intptr_t)(ws+3840) = p5056; /*containing */
	*(i8*)(intptr_t)(ws+3848) = p5055; /*member */
	*(i2*)(intptr_t)(ws+3856) = p5054; /*position */

	i8 v5057 = (i8)(intptr_t)(ws+3856);
	i2 v5058 = *(i2*)(intptr_t)v5057;
	i8 v5059 = (i8)(intptr_t)(ws+3848);
	i8 v5060 = *(i8*)(intptr_t)v5059;
	i8 v5061 = *(i8*)(intptr_t)v5060;
	i8 v5062 = *(i8*)(intptr_t)v5061;
	i8 v5063 = v5062+(+53);
	i1 v5064 = *(i1*)(intptr_t)v5063;
	i8 v5065 = (i8)(intptr_t)(f236_ArchAlignUp);
	i2 v5066;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v5065)(&v5066, v5064, v5058);
	i8 v5067 = (i8)(intptr_t)(ws+3856);
	*(i2*)(intptr_t)v5067 = v5066;

	i8 v5068 = (i8)(intptr_t)(ws+3856);
	i2 v5069 = *(i2*)(intptr_t)v5068;
	i8 v5070 = (i8)(intptr_t)(ws+3848);
	i8 v5071 = *(i8*)(intptr_t)v5070;
	i8 v5072 = *(i8*)(intptr_t)v5071;
	i8 v5073 = v5072+(+32);
	*(i2*)(intptr_t)v5073 = v5069;

	i8 v5074 = (i8)(intptr_t)(ws+3856);
	i2 v5075 = *(i2*)(intptr_t)v5074;
	i8 v5076 = (i8)(intptr_t)(ws+3848);
	i8 v5077 = *(i8*)(intptr_t)v5076;
	i8 v5078 = *(i8*)(intptr_t)v5077;
	i8 v5079 = *(i8*)(intptr_t)v5078;
	i8 v5080 = v5079+(+48);
	i2 v5081 = *(i2*)(intptr_t)v5080;
	i2 v5082 = v5075+v5081;
	i8 v5083 = (i8)(intptr_t)(ws+3856);
	*(i2*)(intptr_t)v5083 = v5082;

	i8 v5084 = (i8)(intptr_t)(ws+3840);
	i8 v5085 = *(i8*)(intptr_t)v5084;
	i8 v5086 = v5085+(+48);
	i2 v5087 = *(i2*)(intptr_t)v5086;
	i8 v5088 = (i8)(intptr_t)(ws+3856);
	i2 v5089 = *(i2*)(intptr_t)v5088;
	if (v5087<v5089) goto c02_0436; else goto c02_0437;

c02_0436:;

	i8 v5090 = (i8)(intptr_t)(ws+3856);
	i2 v5091 = *(i2*)(intptr_t)v5090;
	i8 v5092 = (i8)(intptr_t)(ws+3840);
	i8 v5093 = *(i8*)(intptr_t)v5092;
	i8 v5094 = v5093+(+48);
	*(i2*)(intptr_t)v5094 = v5091;

	goto c02_0433;

c02_0437:;

c02_0433:;

endsub:;
}
const i1 c02_s0055[] = { 0x28,0 };
	void f178_E(i8 /* text */);
const i1 c02_s0056[] = { 0x2c,0x20,0 };
	void f178_E(i8 /* text */);

// comma workspace at ws+4160 length ws+0
void f242_comma(void) {

	i8 v5100 = (i8)(intptr_t)(ws+4144);
	i1 v5101 = *(i1*)(intptr_t)v5100;
	i1 v5102 = (i1)+0;
	if (v5101==v5102) goto c02_043b; else goto c02_043c;

c02_043b:;

	i8 v5103 = (i8)(intptr_t)c02_s0056;
	i8 v5104 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5104)(v5103);

	goto c02_0438;

c02_043c:;

c02_0438:;

	i1 v5105 = (i1)+0;
	i8 v5106 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5106 = v5105;

endsub:;
}
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f242_comma(void);
const i1 c02_s0057[] = { 0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0058[] = { 0x2a,0x20,0x2f,0x2a,0x20,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s0059[] = { 0x20,0x2a,0x2f,0 };
	void f178_E(i8 /* text */);
	void f94_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f242_comma(void);
const i1 c02_s005a[] = { 0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s005b[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s005c[] = { 0x20,0x2a,0x2f,0 };
	void f178_E(i8 /* text */);
const i1 c02_s005d[] = { 0x76,0x6f,0x69,0x64,0 };
	void f178_E(i8 /* text */);
const i1 c02_s005e[] = { 0x29,0 };
	void f178_E(i8 /* text */);

// EmitFunctionSignature workspace at ws+4136 length ws+24
void f241_EmitFunctionSignature(i8 p5095 /* subr */) {
	*(i8*)(intptr_t)(ws+4136) = p5095; /*subr */

	i8 v5096 = (i8)(intptr_t)c02_s0055;
	i8 v5097 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5097)(v5096);

	i1 v5098 = (i1)+1;
	i8 v5099 = (i8)(intptr_t)(ws+4144);
	*(i1*)(intptr_t)v5099 = v5098;


	i1 v5107 = (i1)+0;
	i8 v5108 = (i8)(intptr_t)(ws+4145);
	*(i1*)(intptr_t)v5108 = v5107;

c02_043f:;

	i8 v5109 = (i8)(intptr_t)(ws+4145);
	i1 v5110 = *(i1*)(intptr_t)v5109;
	i8 v5111 = (i8)(intptr_t)(ws+4136);
	i8 v5112 = *(i8*)(intptr_t)v5111;
	i8 v5113 = v5112+(+81);
	i1 v5114 = *(i1*)(intptr_t)v5113;
	if (v5110==v5114) goto c02_0442; else goto c02_0441;

c02_0441:;

	i8 v5115 = (i8)(intptr_t)(ws+4136);
	i8 v5116 = *(i8*)(intptr_t)v5115;
	i8 v5117 = (i8)(intptr_t)(ws+4145);
	i1 v5118 = *(i1*)(intptr_t)v5117;
	i8 v5119 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v5120;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5119)(&v5120, v5118, v5116);
	i8 v5121 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5121 = v5120;

	i8 v5122 = (i8)(intptr_t)(f242_comma);

	((void(*)(void))(intptr_t)v5122)();

	i8 v5123 = (i8)(intptr_t)c02_s0057;
	i8 v5124 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5124)(v5123);

	i8 v5125 = (i8)(intptr_t)(ws+4152);
	i8 v5126 = *(i8*)(intptr_t)v5125;
	i8 v5127 = *(i8*)(intptr_t)v5126;
	i8 v5128 = *(i8*)(intptr_t)v5127;
	i8 v5129 = v5128+(+48);
	i2 v5130 = *(i2*)(intptr_t)v5129;
	i1 v5131 = v5130;
	i8 v5132 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5132)(v5131);

	i8 v5133 = (i8)(intptr_t)c02_s0058;
	i8 v5134 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5134)(v5133);

	i8 v5135 = (i8)(intptr_t)(ws+4152);
	i8 v5136 = *(i8*)(intptr_t)v5135;
	i8 v5137 = v5136+(+8);
	i8 v5138 = *(i8*)(intptr_t)v5137;
	i8 v5139 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5139)(v5138);

	i8 v5140 = (i8)(intptr_t)c02_s0059;
	i8 v5141 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5141)(v5140);

	i8 v5142 = (i8)(intptr_t)(ws+4145);
	i1 v5143 = *(i1*)(intptr_t)v5142;
	i1 v5144 = v5143+(+1);
	i8 v5145 = (i8)(intptr_t)(ws+4145);
	*(i1*)(intptr_t)v5145 = v5144;

	goto c02_043f;

c02_0442:;

	i8 v5146 = (i8)(intptr_t)(ws+4136);
	i8 v5147 = *(i8*)(intptr_t)v5146;
	i8 v5148 = v5147+(+80);
	i1 v5149 = *(i1*)(intptr_t)v5148;
	i8 v5150 = (i8)(intptr_t)(ws+4145);
	*(i1*)(intptr_t)v5150 = v5149;

c02_0445:;

	i8 v5151 = (i8)(intptr_t)(ws+4145);
	i1 v5152 = *(i1*)(intptr_t)v5151;
	i1 v5153 = (i1)+0;
	if (v5152==v5153) goto c02_0448; else goto c02_0447;

c02_0447:;

	i8 v5154 = (i8)(intptr_t)(ws+4145);
	i1 v5155 = *(i1*)(intptr_t)v5154;
	i1 v5156 = v5155+(-1);
	i8 v5157 = (i8)(intptr_t)(ws+4145);
	*(i1*)(intptr_t)v5157 = v5156;

	i8 v5158 = (i8)(intptr_t)(ws+4136);
	i8 v5159 = *(i8*)(intptr_t)v5158;
	i8 v5160 = (i8)(intptr_t)(ws+4145);
	i1 v5161 = *(i1*)(intptr_t)v5160;
	i8 v5162 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v5163;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5162)(&v5163, v5161, v5159);
	i8 v5164 = (i8)(intptr_t)(ws+4152);
	*(i8*)(intptr_t)v5164 = v5163;

	i8 v5165 = (i8)(intptr_t)(f242_comma);

	((void(*)(void))(intptr_t)v5165)();

	i8 v5166 = (i8)(intptr_t)c02_s005a;
	i8 v5167 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5167)(v5166);

	i8 v5168 = (i8)(intptr_t)(ws+4152);
	i8 v5169 = *(i8*)(intptr_t)v5168;
	i8 v5170 = *(i8*)(intptr_t)v5169;
	i8 v5171 = *(i8*)(intptr_t)v5170;
	i8 v5172 = v5171+(+48);
	i2 v5173 = *(i2*)(intptr_t)v5172;
	i1 v5174 = v5173;
	i8 v5175 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5175)(v5174);

	i8 v5176 = (i8)(intptr_t)c02_s005b;
	i8 v5177 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5177)(v5176);

	i8 v5178 = (i8)(intptr_t)(ws+4152);
	i8 v5179 = *(i8*)(intptr_t)v5178;
	i8 v5180 = v5179+(+8);
	i8 v5181 = *(i8*)(intptr_t)v5180;
	i8 v5182 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5182)(v5181);

	i8 v5183 = (i8)(intptr_t)c02_s005c;
	i8 v5184 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5184)(v5183);

	goto c02_0445;

c02_0448:;

	i8 v5185 = (i8)(intptr_t)(ws+4136);
	i8 v5186 = *(i8*)(intptr_t)v5185;
	i8 v5187 = v5186+(+80);
	i1 v5188 = *(i1*)(intptr_t)v5187;
	i8 v5189 = (i8)(intptr_t)(ws+4136);
	i8 v5190 = *(i8*)(intptr_t)v5189;
	i8 v5191 = v5190+(+81);
	i1 v5192 = *(i1*)(intptr_t)v5191;
	i1 v5193 = v5188+v5192;
	i1 v5194 = (i1)+0;
	if (v5193==v5194) goto c02_044c; else goto c02_044d;

c02_044c:;

	i8 v5195 = (i8)(intptr_t)c02_s005d;
	i8 v5196 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5196)(v5195);

	goto c02_0449;

c02_044d:;

c02_0449:;

	i8 v5197 = (i8)(intptr_t)c02_s005e;
	i8 v5198 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5198)(v5197);

endsub:;
}
	void f192_EmitterOpenStream(i8 /* subr */);
const i1 c02_s005f[] = { 0x09,0x76,0x6f,0x69,0x64,0x20,0 };
	void f178_E(i8 /* text */);
	void f190_E_subref(i8 /* subr */);
	void f241_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s0060[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);
	void f193_EmitterCloseStream(void);
	void f190_E_subref(i8 /* subr */);
const i1 c02_s0061[] = { 0x28,0x28,0x69,0x31,0x2a,0x29,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
	void f183_E_i16(i2 /* value */);
const i1 c02_s0062[] = { 0x29,0 };
	void f178_E(i8 /* text */);
	void f169_E_b8(i1 /* byte */);
	void f170_E_b16(i2 /* word */);
	void f169_E_b8(i1 /* byte */);
	void f170_E_b16(i2 /* word */);

// E_symref workspace at ws+4112 length ws+24
void f243_E_symref(i2 p5199 /* off */, i8 p5200 /* sym */) {
	*(i8*)(intptr_t)(ws+4112) = p5200; /*sym */
	*(i2*)(intptr_t)(ws+4120) = p5199; /*off */

	i8 v5201 = (i8)(intptr_t)(ws+4112);
	i8 v5202 = *(i8*)(intptr_t)v5201;
	i8 v5203 = v5202+(+32);
	i1 v5204 = *(i1*)(intptr_t)v5203;

	if (v5204 != +30) goto c02_044f;

	i8 v5205 = (i8)(intptr_t)(ws+40);
	i8 v5206 = *(i8*)(intptr_t)v5205;
	i8 v5207 = (i8)(intptr_t)(f192_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v5207)(v5206);

	i8 v5208 = (i8)(intptr_t)(ws+4112);
	i8 v5209 = *(i8*)(intptr_t)v5208;
	i8 v5210 = *(i8*)(intptr_t)v5209;
	i8 v5211 = *(i8*)(intptr_t)v5210;
	i8 v5212 = (i8)(intptr_t)(ws+4128);
	*(i8*)(intptr_t)v5212 = v5211;

	i8 v5213 = (i8)(intptr_t)c02_s005f;
	i8 v5214 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5214)(v5213);

	i8 v5215 = (i8)(intptr_t)(ws+4128);
	i8 v5216 = *(i8*)(intptr_t)v5215;
	i8 v5217 = (i8)(intptr_t)(f190_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v5217)(v5216);

	i8 v5218 = (i8)(intptr_t)(ws+4128);
	i8 v5219 = *(i8*)(intptr_t)v5218;
	i8 v5220 = (i8)(intptr_t)(f241_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v5220)(v5219);

	i8 v5221 = (i8)(intptr_t)c02_s0060;
	i8 v5222 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5222)(v5221);

	i8 v5223 = (i8)(intptr_t)(f193_EmitterCloseStream);

	((void(*)(void))(intptr_t)v5223)();

	i8 v5224 = (i8)(intptr_t)(ws+4128);
	i8 v5225 = *(i8*)(intptr_t)v5224;
	i8 v5226 = (i8)(intptr_t)(f190_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v5226)(v5225);

	goto c02_044e;

c02_044f:;

	if (v5204 != +28) goto c02_0450;

	i8 v5227 = (i8)(intptr_t)(ws+4112);
	i8 v5228 = *(i8*)(intptr_t)v5227;
	i8 v5229 = *(i8*)(intptr_t)v5228;
	i8 v5230 = v5229+(+24);
	i8 v5231 = *(i8*)(intptr_t)v5230;
	i8 v5232 = (i8)+0;
	if (v5231==v5232) goto c02_0455; else goto c02_0454;

c02_0454:;

	i8 v5233 = (i8)(intptr_t)c02_s0061;
	i8 v5234 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5234)(v5233);

	i8 v5235 = (i8)(intptr_t)(ws+4112);
	i8 v5236 = *(i8*)(intptr_t)v5235;
	i8 v5237 = *(i8*)(intptr_t)v5236;
	i8 v5238 = v5237+(+24);
	i8 v5239 = *(i8*)(intptr_t)v5238;
	i8 v5240 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5240)(v5239);

	i8 v5241 = (i8)(intptr_t)(ws+4120);
	i2 v5242 = *(i2*)(intptr_t)v5241;
	i8 v5243 = (i8)(intptr_t)(f183_E_i16);

	((void(*)(i2 /* value */))(intptr_t)v5243)(v5242);

	i8 v5244 = (i8)(intptr_t)c02_s0062;
	i8 v5245 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5245)(v5244);

	goto c02_0451;

c02_0455:;

	i1 v5246 = (i1)+2;
	i8 v5247 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5247)(v5246);

	i8 v5248 = (i8)(intptr_t)(ws+4112);
	i8 v5249 = *(i8*)(intptr_t)v5248;
	i8 v5250 = *(i8*)(intptr_t)v5249;
	i8 v5251 = v5250+(+8);
	i8 v5252 = *(i8*)(intptr_t)v5251;
	i8 v5253 = v5252+(+56);
	i2 v5254 = *(i2*)(intptr_t)v5253;
	i8 v5255 = (i8)(intptr_t)(f170_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5255)(v5254);

	i1 v5256 = (i1)+0;
	i8 v5257 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5257)(v5256);

	i8 v5258 = (i8)(intptr_t)(ws+4112);
	i8 v5259 = *(i8*)(intptr_t)v5258;
	i8 v5260 = *(i8*)(intptr_t)v5259;
	i8 v5261 = v5260+(+32);
	i2 v5262 = *(i2*)(intptr_t)v5261;
	i8 v5263 = (i8)(intptr_t)(ws+4120);
	i2 v5264 = *(i2*)(intptr_t)v5263;
	i2 v5265 = v5262+v5264;
	i8 v5266 = (i8)(intptr_t)(f170_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5266)(v5265);

c02_0451:;

c02_0450:;

c02_044e:;


endsub:;
}

// ArchEndInstruction workspace at ws+4000 length ws+0
void f244_ArchEndInstruction(void) {

endsub:;
}
	void f175_E_nl(void);

// ArchEndGroup workspace at ws+3992 length ws+0
void f245_ArchEndGroup(void) {

	i8 v5267 = (i8)(intptr_t)(f175_E_nl);

	((void(*)(void))(intptr_t)v5267)();

endsub:;
}
const i1 c02_s0063[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f71_SimpleError(i8 /* message */);

// PushVid workspace at ws+4128 length ws+2
void f246_PushVid(i2 p5268 /* vid */) {
	*(i2*)(intptr_t)(ws+4128) = p5268; /*vid */

	i8 v5269 = (i8)(intptr_t)(ws+2040);
	i1 v5270 = *(i1*)(intptr_t)v5269;
	i1 v5271 = (i1)+64;
	if (v5270==v5271) goto c02_0459; else goto c02_045a;

c02_0459:;

	i8 v5272 = (i8)(intptr_t)c02_s0063;
	i8 v5273 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v5273)(v5272);

	goto c02_0456;

c02_045a:;

c02_0456:;

	i8 v5274 = (i8)(intptr_t)(ws+4128);
	i2 v5275 = *(i2*)(intptr_t)v5274;
	i8 v5276 = (i8)(intptr_t)(ws+1912);
	i8 v5277 = (i8)(intptr_t)(ws+2040);
	i1 v5278 = *(i1*)(intptr_t)v5277;
	i8 v5279 = v5278;
	i1 v5280 = (i1)+1;
	i8 v5281 = ((i8)v5279)<<v5280;
	i8 v5282 = v5276+v5281;
	*(i2*)(intptr_t)v5282 = v5275;

	i8 v5283 = (i8)(intptr_t)(ws+2040);
	i1 v5284 = *(i1*)(intptr_t)v5283;
	i1 v5285 = v5284+(+1);
	i8 v5286 = (i8)(intptr_t)(ws+2040);
	*(i1*)(intptr_t)v5286 = v5285;

endsub:;
}
	void f246_PushVid(i2 /* vid */);

// Push workspace at ws+4120 length ws+2
void f247_Push(i2* p5287 /* vid */) {

	i8 v5288 = (i8)(intptr_t)(ws+2042);
	i2 v5289 = *(i2*)(intptr_t)v5288;
	i8 v5290 = (i8)(intptr_t)(ws+4120);
	*(i2*)(intptr_t)v5290 = v5289;

	i8 v5291 = (i8)(intptr_t)(ws+2042);
	i2 v5292 = *(i2*)(intptr_t)v5291;
	i2 v5293 = v5292+(+1);
	i8 v5294 = (i8)(intptr_t)(ws+2042);
	*(i2*)(intptr_t)v5294 = v5293;

	i8 v5295 = (i8)(intptr_t)(ws+4120);
	i2 v5296 = *(i2*)(intptr_t)v5295;
	i8 v5297 = (i8)(intptr_t)(f246_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v5297)(v5296);

endsub:;
	*p5287 = *(i2*)(intptr_t)(ws+4120);
}
const i1 c02_s0064[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f71_SimpleError(i8 /* message */);

// CheckVarstackUnderflow workspace at ws+4128 length ws+0
void f248_CheckVarstackUnderflow(void) {

	i8 v5298 = (i8)(intptr_t)(ws+2040);
	i1 v5299 = *(i1*)(intptr_t)v5298;
	i1 v5300 = (i1)+0;
	if (v5299==v5300) goto c02_045e; else goto c02_045f;

c02_045e:;

	i8 v5301 = (i8)(intptr_t)c02_s0064;
	i8 v5302 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v5302)(v5301);

	goto c02_045b;

c02_045f:;

c02_045b:;

endsub:;
}
	void f248_CheckVarstackUnderflow(void);

// Pop workspace at ws+4120 length ws+2
void f249_Pop(i2* p5303 /* vid */) {

	i8 v5304 = (i8)(intptr_t)(f248_CheckVarstackUnderflow);

	((void(*)(void))(intptr_t)v5304)();

	i8 v5305 = (i8)(intptr_t)(ws+2040);
	i1 v5306 = *(i1*)(intptr_t)v5305;
	i1 v5307 = v5306+(-1);
	i8 v5308 = (i8)(intptr_t)(ws+2040);
	*(i1*)(intptr_t)v5308 = v5307;

	i8 v5309 = (i8)(intptr_t)(ws+1912);
	i8 v5310 = (i8)(intptr_t)(ws+2040);
	i1 v5311 = *(i1*)(intptr_t)v5310;
	i8 v5312 = v5311;
	i1 v5313 = (i1)+1;
	i8 v5314 = ((i8)v5312)<<v5313;
	i8 v5315 = v5309+v5314;
	i2 v5316 = *(i2*)(intptr_t)v5315;
	i8 v5317 = (i8)(intptr_t)(ws+4120);
	*(i2*)(intptr_t)v5317 = v5316;

endsub:;
	*p5303 = *(i2*)(intptr_t)(ws+4120);
}

// ArchEmitMove workspace at ws+4032 length ws+2
void f251_ArchEmitMove(i1 p5330 /* dest */, i1 p5331 /* src */) {
	*(i1*)(intptr_t)(ws+4032) = p5331; /*src */
	*(i1*)(intptr_t)(ws+4033) = p5330; /*dest */

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
const i1 c02_s0065[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0066[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0067[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);
const i1 c02_s0068[] = { 0x0a,0x09,0x28,0x28,0x76,0x6f,0x69,0x64,0x28,0x2a,0x29,0 };
	void f178_E(i8 /* text */);
	void f241_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s0069[] = { 0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s006a[] = { 0x29,0x28,0 };
	void f178_E(i8 /* text */);
const i1 c02_s006b[] = { 0x2c,0x20,0 };
	void f178_E(i8 /* text */);

// comma workspace at ws+4120 length ws+0
void f253_comma(void) {

	i8 v5402 = (i8)(intptr_t)(ws+4112);
	i1 v5403 = *(i1*)(intptr_t)v5402;
	i1 v5404 = (i1)+0;
	if (v5403==v5404) goto c02_0469; else goto c02_046a;

c02_0469:;

	i8 v5405 = (i8)(intptr_t)c02_s006b;
	i8 v5406 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5406)(v5405);

	goto c02_0466;

c02_046a:;

c02_0466:;

	i1 v5407 = (i1)+0;
	i8 v5408 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v5408 = v5407;

endsub:;
}
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f253_comma(void);
const i1 c02_s006c[] = { 0x26,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
	void f249_Pop(i2* /* vid */);
	void f253_comma(void);
const i1 c02_s006d[] = { 0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s006e[] = { 0x29,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);
	void f246_PushVid(i2 /* vid */);

// Call workspace at ws+4088 length ws+28
void f252_Call(i8 p5332 /* subr */) {
	*(i8*)(intptr_t)(ws+4088) = p5332; /*subr */

	i8 v5333 = (i8)(intptr_t)(f249_Pop);
	i2 v5334;

	((void(*)(i2* /* vid */))(intptr_t)v5333)(&v5334);
	i8 v5335 = (i8)(intptr_t)(ws+4096);
	*(i2*)(intptr_t)v5335 = v5334;

	i8 v5336 = (i8)(intptr_t)(ws+2042);
	i2 v5337 = *(i2*)(intptr_t)v5336;
	i8 v5338 = (i8)(intptr_t)(ws+4098);
	*(i2*)(intptr_t)v5338 = v5337;

	i8 v5339 = (i8)(intptr_t)(ws+2042);
	i2 v5340 = *(i2*)(intptr_t)v5339;
	i8 v5341 = (i8)(intptr_t)(ws+4088);
	i8 v5342 = *(i8*)(intptr_t)v5341;
	i8 v5343 = v5342+(+81);
	i1 v5344 = *(i1*)(intptr_t)v5343;
	i2 v5345 = v5344;
	i2 v5346 = v5340+v5345;
	i8 v5347 = (i8)(intptr_t)(ws+2042);
	*(i2*)(intptr_t)v5347 = v5346;

	i1 v5348 = (i1)+0;
	i8 v5349 = (i8)(intptr_t)(ws+4100);
	*(i1*)(intptr_t)v5349 = v5348;

c02_0462:;

	i8 v5350 = (i8)(intptr_t)(ws+4100);
	i1 v5351 = *(i1*)(intptr_t)v5350;
	i8 v5352 = (i8)(intptr_t)(ws+4088);
	i8 v5353 = *(i8*)(intptr_t)v5352;
	i8 v5354 = v5353+(+81);
	i1 v5355 = *(i1*)(intptr_t)v5354;
	if (v5351==v5355) goto c02_0465; else goto c02_0464;

c02_0464:;

	i8 v5356 = (i8)(intptr_t)(ws+4088);
	i8 v5357 = *(i8*)(intptr_t)v5356;
	i8 v5358 = (i8)(intptr_t)(ws+4100);
	i1 v5359 = *(i1*)(intptr_t)v5358;
	i8 v5360 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v5361;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5360)(&v5361, v5359, v5357);
	i8 v5362 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v5362 = v5361;

	i8 v5363 = (i8)(intptr_t)c02_s0065;
	i8 v5364 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5364)(v5363);

	i8 v5365 = (i8)(intptr_t)(ws+4104);
	i8 v5366 = *(i8*)(intptr_t)v5365;
	i8 v5367 = *(i8*)(intptr_t)v5366;
	i8 v5368 = *(i8*)(intptr_t)v5367;
	i8 v5369 = v5368+(+48);
	i2 v5370 = *(i2*)(intptr_t)v5369;
	i1 v5371 = v5370;
	i8 v5372 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5372)(v5371);

	i8 v5373 = (i8)(intptr_t)c02_s0066;
	i8 v5374 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5374)(v5373);

	i8 v5375 = (i8)(intptr_t)(ws+4098);
	i2 v5376 = *(i2*)(intptr_t)v5375;
	i8 v5377 = (i8)(intptr_t)(ws+4100);
	i1 v5378 = *(i1*)(intptr_t)v5377;
	i2 v5379 = v5378;
	i2 v5380 = v5376+v5379;
	i8 v5381 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5381)(v5380);

	i8 v5382 = (i8)(intptr_t)c02_s0067;
	i8 v5383 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5383)(v5382);

	i8 v5384 = (i8)(intptr_t)(ws+4100);
	i1 v5385 = *(i1*)(intptr_t)v5384;
	i1 v5386 = v5385+(+1);
	i8 v5387 = (i8)(intptr_t)(ws+4100);
	*(i1*)(intptr_t)v5387 = v5386;

	goto c02_0462;

c02_0465:;

	i8 v5388 = (i8)(intptr_t)c02_s0068;
	i8 v5389 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5389)(v5388);

	i8 v5390 = (i8)(intptr_t)(ws+4088);
	i8 v5391 = *(i8*)(intptr_t)v5390;
	i8 v5392 = (i8)(intptr_t)(f241_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v5392)(v5391);

	i8 v5393 = (i8)(intptr_t)c02_s0069;
	i8 v5394 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5394)(v5393);

	i8 v5395 = (i8)(intptr_t)(ws+4096);
	i2 v5396 = *(i2*)(intptr_t)v5395;
	i8 v5397 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5397)(v5396);

	i8 v5398 = (i8)(intptr_t)c02_s006a;
	i8 v5399 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5399)(v5398);

	i1 v5400 = (i1)+1;
	i8 v5401 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v5401 = v5400;


	i1 v5409 = (i1)+0;
	i8 v5410 = (i8)(intptr_t)(ws+4100);
	*(i1*)(intptr_t)v5410 = v5409;

c02_046d:;

	i8 v5411 = (i8)(intptr_t)(ws+4100);
	i1 v5412 = *(i1*)(intptr_t)v5411;
	i8 v5413 = (i8)(intptr_t)(ws+4088);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = v5414+(+81);
	i1 v5416 = *(i1*)(intptr_t)v5415;
	if (v5412==v5416) goto c02_0470; else goto c02_046f;

c02_046f:;

	i8 v5417 = (i8)(intptr_t)(ws+4088);
	i8 v5418 = *(i8*)(intptr_t)v5417;
	i8 v5419 = (i8)(intptr_t)(ws+4100);
	i1 v5420 = *(i1*)(intptr_t)v5419;
	i8 v5421 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v5422;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5421)(&v5422, v5420, v5418);
	i8 v5423 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v5423 = v5422;

	i8 v5424 = (i8)(intptr_t)(f253_comma);

	((void(*)(void))(intptr_t)v5424)();

	i8 v5425 = (i8)(intptr_t)c02_s006c;
	i8 v5426 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5426)(v5425);

	i8 v5427 = (i8)(intptr_t)(ws+4098);
	i2 v5428 = *(i2*)(intptr_t)v5427;
	i8 v5429 = (i8)(intptr_t)(ws+4100);
	i1 v5430 = *(i1*)(intptr_t)v5429;
	i2 v5431 = v5430;
	i2 v5432 = v5428+v5431;
	i8 v5433 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5433)(v5432);

	i8 v5434 = (i8)(intptr_t)(ws+4100);
	i1 v5435 = *(i1*)(intptr_t)v5434;
	i1 v5436 = v5435+(+1);
	i8 v5437 = (i8)(intptr_t)(ws+4100);
	*(i1*)(intptr_t)v5437 = v5436;

	goto c02_046d;

c02_0470:;

	i1 v5438 = (i1)+0;
	i8 v5439 = (i8)(intptr_t)(ws+4100);
	*(i1*)(intptr_t)v5439 = v5438;

c02_0473:;

	i8 v5440 = (i8)(intptr_t)(ws+4100);
	i1 v5441 = *(i1*)(intptr_t)v5440;
	i8 v5442 = (i8)(intptr_t)(ws+4088);
	i8 v5443 = *(i8*)(intptr_t)v5442;
	i8 v5444 = v5443+(+80);
	i1 v5445 = *(i1*)(intptr_t)v5444;
	if (v5441==v5445) goto c02_0476; else goto c02_0475;

c02_0475:;

	i8 v5446 = (i8)(intptr_t)(f249_Pop);
	i2 v5447;

	((void(*)(i2* /* vid */))(intptr_t)v5446)(&v5447);
	i8 v5448 = (i8)(intptr_t)(ws+4114);
	*(i2*)(intptr_t)v5448 = v5447;

	i8 v5449 = (i8)(intptr_t)(f253_comma);

	((void(*)(void))(intptr_t)v5449)();

	i8 v5450 = (i8)(intptr_t)c02_s006d;
	i8 v5451 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5451)(v5450);

	i8 v5452 = (i8)(intptr_t)(ws+4114);
	i2 v5453 = *(i2*)(intptr_t)v5452;
	i8 v5454 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5454)(v5453);

	i8 v5455 = (i8)(intptr_t)(ws+4100);
	i1 v5456 = *(i1*)(intptr_t)v5455;
	i1 v5457 = v5456+(+1);
	i8 v5458 = (i8)(intptr_t)(ws+4100);
	*(i1*)(intptr_t)v5458 = v5457;

	goto c02_0473;

c02_0476:;

	i8 v5459 = (i8)(intptr_t)c02_s006e;
	i8 v5460 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5460)(v5459);

	i1 v5461 = (i1)+0;
	i8 v5462 = (i8)(intptr_t)(ws+4100);
	*(i1*)(intptr_t)v5462 = v5461;

c02_0479:;

	i8 v5463 = (i8)(intptr_t)(ws+4100);
	i1 v5464 = *(i1*)(intptr_t)v5463;
	i8 v5465 = (i8)(intptr_t)(ws+4088);
	i8 v5466 = *(i8*)(intptr_t)v5465;
	i8 v5467 = v5466+(+81);
	i1 v5468 = *(i1*)(intptr_t)v5467;
	if (v5464==v5468) goto c02_047c; else goto c02_047b;

c02_047b:;

	i8 v5469 = (i8)(intptr_t)(ws+4098);
	i2 v5470 = *(i2*)(intptr_t)v5469;
	i8 v5471 = (i8)(intptr_t)(ws+4100);
	i1 v5472 = *(i1*)(intptr_t)v5471;
	i2 v5473 = v5472;
	i2 v5474 = v5470+v5473;
	i8 v5475 = (i8)(intptr_t)(ws+4114);
	*(i2*)(intptr_t)v5475 = v5474;

	i8 v5476 = (i8)(intptr_t)(ws+4114);
	i2 v5477 = *(i2*)(intptr_t)v5476;
	i8 v5478 = (i8)(intptr_t)(f246_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v5478)(v5477);

	i8 v5479 = (i8)(intptr_t)(ws+4100);
	i1 v5480 = *(i1*)(intptr_t)v5479;
	i1 v5481 = v5480+(+1);
	i8 v5482 = (i8)(intptr_t)(ws+4100);
	*(i1*)(intptr_t)v5482 = v5481;

	goto c02_0479;

c02_047c:;

endsub:;
}
	void f247_Push(i2* /* vid */);
const i1 c02_s006f[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0070[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0071[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0072[] = { 0x29,0 };
	void f178_E(i8 /* text */);
	void f184_E_i32(i4 /* value */);
const i1 c02_s0073[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// LoadConstant workspace at ws+4088 length ws+10
void f254_LoadConstant(i4 p5483 /* value */, i1 p5484 /* width */) {
	*(i1*)(intptr_t)(ws+4088) = p5484; /*width */
	*(i4*)(intptr_t)(ws+4092) = p5483; /*value */

	i8 v5485 = (i8)(intptr_t)(f247_Push);
	i2 v5486;

	((void(*)(i2* /* vid */))(intptr_t)v5485)(&v5486);
	i8 v5487 = (i8)(intptr_t)(ws+4096);
	*(i2*)(intptr_t)v5487 = v5486;

	i8 v5488 = (i8)(intptr_t)c02_s006f;
	i8 v5489 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5489)(v5488);

	i8 v5490 = (i8)(intptr_t)(ws+4088);
	i1 v5491 = *(i1*)(intptr_t)v5490;
	i8 v5492 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5492)(v5491);

	i8 v5493 = (i8)(intptr_t)c02_s0070;
	i8 v5494 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5494)(v5493);

	i8 v5495 = (i8)(intptr_t)(ws+4096);
	i2 v5496 = *(i2*)(intptr_t)v5495;
	i8 v5497 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5497)(v5496);

	i8 v5498 = (i8)(intptr_t)c02_s0071;
	i8 v5499 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5499)(v5498);

	i8 v5500 = (i8)(intptr_t)(ws+4088);
	i1 v5501 = *(i1*)(intptr_t)v5500;
	i8 v5502 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5502)(v5501);

	i8 v5503 = (i8)(intptr_t)c02_s0072;
	i8 v5504 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5504)(v5503);

	i8 v5505 = (i8)(intptr_t)(ws+4092);
	i4 v5506 = *(i4*)(intptr_t)v5505;
	i8 v5507 = (i8)(intptr_t)(f184_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5507)(v5506);

	i8 v5508 = (i8)(intptr_t)c02_s0073;
	i8 v5509 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5509)(v5508);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f249_Pop(i2* /* vid */);
const i1 c02_s0074[] = { 0x09,0x2a,0x28,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0075[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0076[] = { 0x20,0x3d,0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0077[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// StoreVV workspace at ws+4088 length ws+6
void f255_StoreVV(i1 p5510 /* width */) {
	*(i1*)(intptr_t)(ws+4088) = p5510; /*width */

	i8 v5511 = (i8)(intptr_t)(f249_Pop);
	i2 v5512;

	((void(*)(i2* /* vid */))(intptr_t)v5511)(&v5512);
	i8 v5513 = (i8)(intptr_t)(ws+4090);
	*(i2*)(intptr_t)v5513 = v5512;

	i8 v5514 = (i8)(intptr_t)(f249_Pop);
	i2 v5515;

	((void(*)(i2* /* vid */))(intptr_t)v5514)(&v5515);
	i8 v5516 = (i8)(intptr_t)(ws+4092);
	*(i2*)(intptr_t)v5516 = v5515;

	i8 v5517 = (i8)(intptr_t)c02_s0074;
	i8 v5518 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5518)(v5517);

	i8 v5519 = (i8)(intptr_t)(ws+4088);
	i1 v5520 = *(i1*)(intptr_t)v5519;
	i8 v5521 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5521)(v5520);

	i8 v5522 = (i8)(intptr_t)c02_s0075;
	i8 v5523 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5523)(v5522);

	i8 v5524 = (i8)(intptr_t)(ws+4090);
	i2 v5525 = *(i2*)(intptr_t)v5524;
	i8 v5526 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5526)(v5525);

	i8 v5527 = (i8)(intptr_t)c02_s0076;
	i8 v5528 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5528)(v5527);

	i8 v5529 = (i8)(intptr_t)(ws+4092);
	i2 v5530 = *(i2*)(intptr_t)v5529;
	i8 v5531 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5531)(v5530);

	i8 v5532 = (i8)(intptr_t)c02_s0077;
	i8 v5533 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5533)(v5532);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f247_Push(i2* /* vid */);
const i1 c02_s0078[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0079[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s007a[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s007b[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s007c[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// LoadVV workspace at ws+4088 length ws+6
void f256_LoadVV(i1 p5534 /* width */) {
	*(i1*)(intptr_t)(ws+4088) = p5534; /*width */

	i8 v5535 = (i8)(intptr_t)(f249_Pop);
	i2 v5536;

	((void(*)(i2* /* vid */))(intptr_t)v5535)(&v5536);
	i8 v5537 = (i8)(intptr_t)(ws+4090);
	*(i2*)(intptr_t)v5537 = v5536;

	i8 v5538 = (i8)(intptr_t)(f247_Push);
	i2 v5539;

	((void(*)(i2* /* vid */))(intptr_t)v5538)(&v5539);
	i8 v5540 = (i8)(intptr_t)(ws+4092);
	*(i2*)(intptr_t)v5540 = v5539;

	i8 v5541 = (i8)(intptr_t)c02_s0078;
	i8 v5542 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5542)(v5541);

	i8 v5543 = (i8)(intptr_t)(ws+4088);
	i1 v5544 = *(i1*)(intptr_t)v5543;
	i8 v5545 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5545)(v5544);

	i8 v5546 = (i8)(intptr_t)c02_s0079;
	i8 v5547 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5547)(v5546);

	i8 v5548 = (i8)(intptr_t)(ws+4092);
	i2 v5549 = *(i2*)(intptr_t)v5548;
	i8 v5550 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5550)(v5549);

	i8 v5551 = (i8)(intptr_t)c02_s007a;
	i8 v5552 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5552)(v5551);

	i8 v5553 = (i8)(intptr_t)(ws+4088);
	i1 v5554 = *(i1*)(intptr_t)v5553;
	i8 v5555 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5555)(v5554);

	i8 v5556 = (i8)(intptr_t)c02_s007b;
	i8 v5557 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5557)(v5556);

	i8 v5558 = (i8)(intptr_t)(ws+4090);
	i2 v5559 = *(i2*)(intptr_t)v5558;
	i8 v5560 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5560)(v5559);

	i8 v5561 = (i8)(intptr_t)c02_s007c;
	i8 v5562 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5562)(v5561);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f249_Pop(i2* /* vid */);
	void f247_Push(i2* /* vid */);
const i1 c02_s007d[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s007e[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s007f[] = { 0x20,0x3d,0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
	void f178_E(i8 /* text */);
const i1 c02_s0080[] = { 0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0081[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// Op2VV workspace at ws+4088 length ws+22
void f257_Op2VV(i8 p5563 /* op */, i1 p5564 /* width */) {
	*(i1*)(intptr_t)(ws+4088) = p5564; /*width */
	*(i8*)(intptr_t)(ws+4096) = p5563; /*op */

	i8 v5565 = (i8)(intptr_t)(f249_Pop);
	i2 v5566;

	((void(*)(i2* /* vid */))(intptr_t)v5565)(&v5566);
	i8 v5567 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v5567 = v5566;

	i8 v5568 = (i8)(intptr_t)(f249_Pop);
	i2 v5569;

	((void(*)(i2* /* vid */))(intptr_t)v5568)(&v5569);
	i8 v5570 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v5570 = v5569;

	i8 v5571 = (i8)(intptr_t)(f247_Push);
	i2 v5572;

	((void(*)(i2* /* vid */))(intptr_t)v5571)(&v5572);
	i8 v5573 = (i8)(intptr_t)(ws+4108);
	*(i2*)(intptr_t)v5573 = v5572;

	i8 v5574 = (i8)(intptr_t)c02_s007d;
	i8 v5575 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5575)(v5574);

	i8 v5576 = (i8)(intptr_t)(ws+4088);
	i1 v5577 = *(i1*)(intptr_t)v5576;
	i8 v5578 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5578)(v5577);

	i8 v5579 = (i8)(intptr_t)c02_s007e;
	i8 v5580 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5580)(v5579);

	i8 v5581 = (i8)(intptr_t)(ws+4108);
	i2 v5582 = *(i2*)(intptr_t)v5581;
	i8 v5583 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5583)(v5582);

	i8 v5584 = (i8)(intptr_t)c02_s007f;
	i8 v5585 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5585)(v5584);

	i8 v5586 = (i8)(intptr_t)(ws+4106);
	i2 v5587 = *(i2*)(intptr_t)v5586;
	i8 v5588 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5588)(v5587);

	i8 v5589 = (i8)(intptr_t)(ws+4096);
	i8 v5590 = *(i8*)(intptr_t)v5589;
	i8 v5591 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5591)(v5590);

	i8 v5592 = (i8)(intptr_t)c02_s0080;
	i8 v5593 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5593)(v5592);

	i8 v5594 = (i8)(intptr_t)(ws+4104);
	i2 v5595 = *(i2*)(intptr_t)v5594;
	i8 v5596 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5596)(v5595);

	i8 v5597 = (i8)(intptr_t)c02_s0081;
	i8 v5598 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5598)(v5597);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f247_Push(i2* /* vid */);
const i1 c02_s0082[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0083[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0084[] = { 0x20,0x3d,0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
	void f178_E(i8 /* text */);
const i1 c02_s0085[] = { 0x28,0 };
	void f178_E(i8 /* text */);
	void f184_E_i32(i4 /* value */);
const i1 c02_s0086[] = { 0x29,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// Op2VC workspace at ws+4088 length ws+24
void f258_Op2VC(i4 p5599 /* rhs */, i8 p5600 /* op */, i1 p5601 /* width */) {
	*(i1*)(intptr_t)(ws+4088) = p5601; /*width */
	*(i8*)(intptr_t)(ws+4096) = p5600; /*op */
	*(i4*)(intptr_t)(ws+4104) = p5599; /*rhs */

	i8 v5602 = (i8)(intptr_t)(f249_Pop);
	i2 v5603;

	((void(*)(i2* /* vid */))(intptr_t)v5602)(&v5603);
	i8 v5604 = (i8)(intptr_t)(ws+4108);
	*(i2*)(intptr_t)v5604 = v5603;

	i8 v5605 = (i8)(intptr_t)(f247_Push);
	i2 v5606;

	((void(*)(i2* /* vid */))(intptr_t)v5605)(&v5606);
	i8 v5607 = (i8)(intptr_t)(ws+4110);
	*(i2*)(intptr_t)v5607 = v5606;

	i8 v5608 = (i8)(intptr_t)c02_s0082;
	i8 v5609 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5609)(v5608);

	i8 v5610 = (i8)(intptr_t)(ws+4088);
	i1 v5611 = *(i1*)(intptr_t)v5610;
	i8 v5612 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5612)(v5611);

	i8 v5613 = (i8)(intptr_t)c02_s0083;
	i8 v5614 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5614)(v5613);

	i8 v5615 = (i8)(intptr_t)(ws+4110);
	i2 v5616 = *(i2*)(intptr_t)v5615;
	i8 v5617 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5617)(v5616);

	i8 v5618 = (i8)(intptr_t)c02_s0084;
	i8 v5619 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5619)(v5618);

	i8 v5620 = (i8)(intptr_t)(ws+4108);
	i2 v5621 = *(i2*)(intptr_t)v5620;
	i8 v5622 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5622)(v5621);

	i8 v5623 = (i8)(intptr_t)(ws+4096);
	i8 v5624 = *(i8*)(intptr_t)v5623;
	i8 v5625 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5625)(v5624);

	i8 v5626 = (i8)(intptr_t)c02_s0085;
	i8 v5627 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5627)(v5626);

	i8 v5628 = (i8)(intptr_t)(ws+4104);
	i4 v5629 = *(i4*)(intptr_t)v5628;
	i8 v5630 = (i8)(intptr_t)(f184_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5630)(v5629);

	i8 v5631 = (i8)(intptr_t)c02_s0086;
	i8 v5632 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5632)(v5631);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f249_Pop(i2* /* vid */);
	void f247_Push(i2* /* vid */);
const i1 c02_s0087[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0088[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0089[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s008a[] = { 0x29,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
	void f178_E(i8 /* text */);
const i1 c02_s008b[] = { 0x28,0x73,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s008c[] = { 0x29,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s008d[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// Op2VVSigned workspace at ws+4088 length ws+22
void f259_Op2VVSigned(i8 p5633 /* op */, i1 p5634 /* width */) {
	*(i1*)(intptr_t)(ws+4088) = p5634; /*width */
	*(i8*)(intptr_t)(ws+4096) = p5633; /*op */

	i8 v5635 = (i8)(intptr_t)(f249_Pop);
	i2 v5636;

	((void(*)(i2* /* vid */))(intptr_t)v5635)(&v5636);
	i8 v5637 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v5637 = v5636;

	i8 v5638 = (i8)(intptr_t)(f249_Pop);
	i2 v5639;

	((void(*)(i2* /* vid */))(intptr_t)v5638)(&v5639);
	i8 v5640 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v5640 = v5639;

	i8 v5641 = (i8)(intptr_t)(f247_Push);
	i2 v5642;

	((void(*)(i2* /* vid */))(intptr_t)v5641)(&v5642);
	i8 v5643 = (i8)(intptr_t)(ws+4108);
	*(i2*)(intptr_t)v5643 = v5642;

	i8 v5644 = (i8)(intptr_t)c02_s0087;
	i8 v5645 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5645)(v5644);

	i8 v5646 = (i8)(intptr_t)(ws+4088);
	i1 v5647 = *(i1*)(intptr_t)v5646;
	i8 v5648 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5648)(v5647);

	i8 v5649 = (i8)(intptr_t)c02_s0088;
	i8 v5650 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5650)(v5649);

	i8 v5651 = (i8)(intptr_t)(ws+4108);
	i2 v5652 = *(i2*)(intptr_t)v5651;
	i8 v5653 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5653)(v5652);

	i8 v5654 = (i8)(intptr_t)c02_s0089;
	i8 v5655 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5655)(v5654);

	i8 v5656 = (i8)(intptr_t)(ws+4088);
	i1 v5657 = *(i1*)(intptr_t)v5656;
	i8 v5658 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5658)(v5657);

	i8 v5659 = (i8)(intptr_t)c02_s008a;
	i8 v5660 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5660)(v5659);

	i8 v5661 = (i8)(intptr_t)(ws+4106);
	i2 v5662 = *(i2*)(intptr_t)v5661;
	i8 v5663 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5663)(v5662);

	i8 v5664 = (i8)(intptr_t)(ws+4096);
	i8 v5665 = *(i8*)(intptr_t)v5664;
	i8 v5666 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5666)(v5665);

	i8 v5667 = (i8)(intptr_t)c02_s008b;
	i8 v5668 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5668)(v5667);

	i8 v5669 = (i8)(intptr_t)(ws+4088);
	i1 v5670 = *(i1*)(intptr_t)v5669;
	i8 v5671 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5671)(v5670);

	i8 v5672 = (i8)(intptr_t)c02_s008c;
	i8 v5673 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5673)(v5672);

	i8 v5674 = (i8)(intptr_t)(ws+4104);
	i2 v5675 = *(i2*)(intptr_t)v5674;
	i8 v5676 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5676)(v5675);

	i8 v5677 = (i8)(intptr_t)c02_s008d;
	i8 v5678 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5678)(v5677);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f247_Push(i2* /* vid */);
const i1 c02_s008e[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s008f[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0090[] = { 0x20,0x3d,0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
	void f178_E(i8 /* text */);
const i1 c02_s0091[] = { 0x28,0 };
	void f178_E(i8 /* text */);
	void f184_E_i32(i4 /* value */);
const i1 c02_s0092[] = { 0x29,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// Op2VCSigned workspace at ws+4088 length ws+24
void f260_Op2VCSigned(i4 p5679 /* rhs */, i8 p5680 /* op */, i1 p5681 /* width */) {
	*(i1*)(intptr_t)(ws+4088) = p5681; /*width */
	*(i8*)(intptr_t)(ws+4096) = p5680; /*op */
	*(i4*)(intptr_t)(ws+4104) = p5679; /*rhs */

	i8 v5682 = (i8)(intptr_t)(f249_Pop);
	i2 v5683;

	((void(*)(i2* /* vid */))(intptr_t)v5682)(&v5683);
	i8 v5684 = (i8)(intptr_t)(ws+4108);
	*(i2*)(intptr_t)v5684 = v5683;

	i8 v5685 = (i8)(intptr_t)(f247_Push);
	i2 v5686;

	((void(*)(i2* /* vid */))(intptr_t)v5685)(&v5686);
	i8 v5687 = (i8)(intptr_t)(ws+4110);
	*(i2*)(intptr_t)v5687 = v5686;

	i8 v5688 = (i8)(intptr_t)c02_s008e;
	i8 v5689 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5689)(v5688);

	i8 v5690 = (i8)(intptr_t)(ws+4088);
	i1 v5691 = *(i1*)(intptr_t)v5690;
	i8 v5692 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5692)(v5691);

	i8 v5693 = (i8)(intptr_t)c02_s008f;
	i8 v5694 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5694)(v5693);

	i8 v5695 = (i8)(intptr_t)(ws+4110);
	i2 v5696 = *(i2*)(intptr_t)v5695;
	i8 v5697 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5697)(v5696);

	i8 v5698 = (i8)(intptr_t)c02_s0090;
	i8 v5699 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5699)(v5698);

	i8 v5700 = (i8)(intptr_t)(ws+4108);
	i2 v5701 = *(i2*)(intptr_t)v5700;
	i8 v5702 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5702)(v5701);

	i8 v5703 = (i8)(intptr_t)(ws+4096);
	i8 v5704 = *(i8*)(intptr_t)v5703;
	i8 v5705 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5705)(v5704);

	i8 v5706 = (i8)(intptr_t)c02_s0091;
	i8 v5707 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5707)(v5706);

	i8 v5708 = (i8)(intptr_t)(ws+4104);
	i4 v5709 = *(i4*)(intptr_t)v5708;
	i8 v5710 = (i8)(intptr_t)(f184_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5710)(v5709);

	i8 v5711 = (i8)(intptr_t)c02_s0092;
	i8 v5712 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5712)(v5711);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f247_Push(i2* /* vid */);
const i1 c02_s0093[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0094[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0095[] = { 0x20,0x3d,0x20,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s0096[] = { 0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0097[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// Op1V workspace at ws+4088 length ws+20
void f261_Op1V(i8 p5713 /* op */, i1 p5714 /* width */) {
	*(i1*)(intptr_t)(ws+4088) = p5714; /*width */
	*(i8*)(intptr_t)(ws+4096) = p5713; /*op */

	i8 v5715 = (i8)(intptr_t)(f249_Pop);
	i2 v5716;

	((void(*)(i2* /* vid */))(intptr_t)v5715)(&v5716);
	i8 v5717 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v5717 = v5716;

	i8 v5718 = (i8)(intptr_t)(f247_Push);
	i2 v5719;

	((void(*)(i2* /* vid */))(intptr_t)v5718)(&v5719);
	i8 v5720 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v5720 = v5719;

	i8 v5721 = (i8)(intptr_t)c02_s0093;
	i8 v5722 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5722)(v5721);

	i8 v5723 = (i8)(intptr_t)(ws+4088);
	i1 v5724 = *(i1*)(intptr_t)v5723;
	i8 v5725 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5725)(v5724);

	i8 v5726 = (i8)(intptr_t)c02_s0094;
	i8 v5727 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5727)(v5726);

	i8 v5728 = (i8)(intptr_t)(ws+4106);
	i2 v5729 = *(i2*)(intptr_t)v5728;
	i8 v5730 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5730)(v5729);

	i8 v5731 = (i8)(intptr_t)c02_s0095;
	i8 v5732 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5732)(v5731);

	i8 v5733 = (i8)(intptr_t)(ws+4096);
	i8 v5734 = *(i8*)(intptr_t)v5733;
	i8 v5735 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5735)(v5734);

	i8 v5736 = (i8)(intptr_t)c02_s0096;
	i8 v5737 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5737)(v5736);

	i8 v5738 = (i8)(intptr_t)(ws+4104);
	i2 v5739 = *(i2*)(intptr_t)v5738;
	i8 v5740 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5740)(v5739);

	i8 v5741 = (i8)(intptr_t)c02_s0097;
	i8 v5742 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5742)(v5741);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f249_Pop(i2* /* vid */);
	void f247_Push(i2* /* vid */);
const i1 c02_s0098[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0099[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s009a[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s009b[] = { 0x29,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s009c[] = { 0x29,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s009d[] = { 0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s009e[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// Shift workspace at ws+4088 length ws+30
void f262_Shift(i8 p5743 /* op */, i8 p5744 /* type */, i1 p5745 /* width */) {
	*(i1*)(intptr_t)(ws+4088) = p5745; /*width */
	*(i8*)(intptr_t)(ws+4096) = p5744; /*type */
	*(i8*)(intptr_t)(ws+4104) = p5743; /*op */

	i8 v5746 = (i8)(intptr_t)(f249_Pop);
	i2 v5747;

	((void(*)(i2* /* vid */))(intptr_t)v5746)(&v5747);
	i8 v5748 = (i8)(intptr_t)(ws+4112);
	*(i2*)(intptr_t)v5748 = v5747;

	i8 v5749 = (i8)(intptr_t)(f249_Pop);
	i2 v5750;

	((void(*)(i2* /* vid */))(intptr_t)v5749)(&v5750);
	i8 v5751 = (i8)(intptr_t)(ws+4114);
	*(i2*)(intptr_t)v5751 = v5750;

	i8 v5752 = (i8)(intptr_t)(f247_Push);
	i2 v5753;

	((void(*)(i2* /* vid */))(intptr_t)v5752)(&v5753);
	i8 v5754 = (i8)(intptr_t)(ws+4116);
	*(i2*)(intptr_t)v5754 = v5753;

	i8 v5755 = (i8)(intptr_t)c02_s0098;
	i8 v5756 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5756)(v5755);

	i8 v5757 = (i8)(intptr_t)(ws+4088);
	i1 v5758 = *(i1*)(intptr_t)v5757;
	i8 v5759 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5759)(v5758);

	i8 v5760 = (i8)(intptr_t)c02_s0099;
	i8 v5761 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5761)(v5760);

	i8 v5762 = (i8)(intptr_t)(ws+4116);
	i2 v5763 = *(i2*)(intptr_t)v5762;
	i8 v5764 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5764)(v5763);

	i8 v5765 = (i8)(intptr_t)c02_s009a;
	i8 v5766 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5766)(v5765);

	i8 v5767 = (i8)(intptr_t)(ws+4096);
	i8 v5768 = *(i8*)(intptr_t)v5767;
	i8 v5769 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5769)(v5768);

	i8 v5770 = (i8)(intptr_t)c02_s009b;
	i8 v5771 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5771)(v5770);

	i8 v5772 = (i8)(intptr_t)(ws+4114);
	i2 v5773 = *(i2*)(intptr_t)v5772;
	i8 v5774 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5774)(v5773);

	i8 v5775 = (i8)(intptr_t)c02_s009c;
	i8 v5776 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5776)(v5775);

	i8 v5777 = (i8)(intptr_t)(ws+4104);
	i8 v5778 = *(i8*)(intptr_t)v5777;
	i8 v5779 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5779)(v5778);

	i8 v5780 = (i8)(intptr_t)c02_s009d;
	i8 v5781 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5781)(v5780);

	i8 v5782 = (i8)(intptr_t)(ws+4112);
	i2 v5783 = *(i2*)(intptr_t)v5782;
	i8 v5784 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5784)(v5783);

	i8 v5785 = (i8)(intptr_t)c02_s009e;
	i8 v5786 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5786)(v5785);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f249_Pop(i2* /* vid */);
const i1 c02_s009f[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
	void f178_E(i8 /* text */);
const i1 c02_s00a0[] = { 0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s00a1[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f178_E(i8 /* text */);
	void f189_E_labelref(i2 /* labelid */);
const i1 c02_s00a2[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f178_E(i8 /* text */);
	void f189_E_labelref(i2 /* labelid */);
const i1 c02_s00a3[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// Branch workspace at ws+4088 length ws+20
void f263_Branch(i8 p5787 /* op */, i8 p5788 /* node */) {
	*(i8*)(intptr_t)(ws+4088) = p5788; /*node */
	*(i8*)(intptr_t)(ws+4096) = p5787; /*op */

	i8 v5789 = (i8)(intptr_t)(f249_Pop);
	i2 v5790;

	((void(*)(i2* /* vid */))(intptr_t)v5789)(&v5790);
	i8 v5791 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v5791 = v5790;

	i8 v5792 = (i8)(intptr_t)(f249_Pop);
	i2 v5793;

	((void(*)(i2* /* vid */))(intptr_t)v5792)(&v5793);
	i8 v5794 = (i8)(intptr_t)(ws+4106);
	*(i2*)(intptr_t)v5794 = v5793;

	i8 v5795 = (i8)(intptr_t)c02_s009f;
	i8 v5796 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5796)(v5795);

	i8 v5797 = (i8)(intptr_t)(ws+4106);
	i2 v5798 = *(i2*)(intptr_t)v5797;
	i8 v5799 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5799)(v5798);

	i8 v5800 = (i8)(intptr_t)(ws+4096);
	i8 v5801 = *(i8*)(intptr_t)v5800;
	i8 v5802 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5802)(v5801);

	i8 v5803 = (i8)(intptr_t)c02_s00a0;
	i8 v5804 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5804)(v5803);

	i8 v5805 = (i8)(intptr_t)(ws+4104);
	i2 v5806 = *(i2*)(intptr_t)v5805;
	i8 v5807 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5807)(v5806);

	i8 v5808 = (i8)(intptr_t)c02_s00a1;
	i8 v5809 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5809)(v5808);

	i8 v5810 = (i8)(intptr_t)(ws+4088);
	i8 v5811 = *(i8*)(intptr_t)v5810;
	i2 v5812 = *(i2*)(intptr_t)v5811;
	i8 v5813 = (i8)(intptr_t)(f189_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5813)(v5812);

	i8 v5814 = (i8)(intptr_t)c02_s00a2;
	i8 v5815 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5815)(v5814);

	i8 v5816 = (i8)(intptr_t)(ws+4088);
	i8 v5817 = *(i8*)(intptr_t)v5816;
	i8 v5818 = v5817+(+2);
	i2 v5819 = *(i2*)(intptr_t)v5818;
	i8 v5820 = (i8)(intptr_t)(f189_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5820)(v5819);

	i8 v5821 = (i8)(intptr_t)c02_s00a3;
	i8 v5822 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5822)(v5821);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f249_Pop(i2* /* vid */);
const i1 c02_s00a4[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s00a5[] = { 0x29,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
	void f178_E(i8 /* text */);
const i1 c02_s00a6[] = { 0x28,0x73,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s00a7[] = { 0x29,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s00a8[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f178_E(i8 /* text */);
	void f189_E_labelref(i2 /* labelid */);
const i1 c02_s00a9[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f178_E(i8 /* text */);
	void f189_E_labelref(i2 /* labelid */);
const i1 c02_s00aa[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// BranchSigned workspace at ws+4088 length ws+28
void f264_BranchSigned(i8 p5823 /* op */, i1 p5824 /* width */, i8 p5825 /* node */) {
	*(i8*)(intptr_t)(ws+4088) = p5825; /*node */
	*(i1*)(intptr_t)(ws+4096) = p5824; /*width */
	*(i8*)(intptr_t)(ws+4104) = p5823; /*op */

	i8 v5826 = (i8)(intptr_t)(f249_Pop);
	i2 v5827;

	((void(*)(i2* /* vid */))(intptr_t)v5826)(&v5827);
	i8 v5828 = (i8)(intptr_t)(ws+4112);
	*(i2*)(intptr_t)v5828 = v5827;

	i8 v5829 = (i8)(intptr_t)(f249_Pop);
	i2 v5830;

	((void(*)(i2* /* vid */))(intptr_t)v5829)(&v5830);
	i8 v5831 = (i8)(intptr_t)(ws+4114);
	*(i2*)(intptr_t)v5831 = v5830;

	i8 v5832 = (i8)(intptr_t)c02_s00a4;
	i8 v5833 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5833)(v5832);

	i8 v5834 = (i8)(intptr_t)(ws+4096);
	i1 v5835 = *(i1*)(intptr_t)v5834;
	i8 v5836 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5836)(v5835);

	i8 v5837 = (i8)(intptr_t)c02_s00a5;
	i8 v5838 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5838)(v5837);

	i8 v5839 = (i8)(intptr_t)(ws+4114);
	i2 v5840 = *(i2*)(intptr_t)v5839;
	i8 v5841 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5841)(v5840);

	i8 v5842 = (i8)(intptr_t)(ws+4104);
	i8 v5843 = *(i8*)(intptr_t)v5842;
	i8 v5844 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5844)(v5843);

	i8 v5845 = (i8)(intptr_t)c02_s00a6;
	i8 v5846 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5846)(v5845);

	i8 v5847 = (i8)(intptr_t)(ws+4096);
	i1 v5848 = *(i1*)(intptr_t)v5847;
	i8 v5849 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5849)(v5848);

	i8 v5850 = (i8)(intptr_t)c02_s00a7;
	i8 v5851 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5851)(v5850);

	i8 v5852 = (i8)(intptr_t)(ws+4112);
	i2 v5853 = *(i2*)(intptr_t)v5852;
	i8 v5854 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5854)(v5853);

	i8 v5855 = (i8)(intptr_t)c02_s00a8;
	i8 v5856 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5856)(v5855);

	i8 v5857 = (i8)(intptr_t)(ws+4088);
	i8 v5858 = *(i8*)(intptr_t)v5857;
	i2 v5859 = *(i2*)(intptr_t)v5858;
	i8 v5860 = (i8)(intptr_t)(f189_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5860)(v5859);

	i8 v5861 = (i8)(intptr_t)c02_s00a9;
	i8 v5862 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5862)(v5861);

	i8 v5863 = (i8)(intptr_t)(ws+4088);
	i8 v5864 = *(i8*)(intptr_t)v5863;
	i8 v5865 = v5864+(+2);
	i2 v5866 = *(i2*)(intptr_t)v5865;
	i8 v5867 = (i8)(intptr_t)(f189_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5867)(v5866);

	i8 v5868 = (i8)(intptr_t)c02_s00aa;
	i8 v5869 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5869)(v5868);

endsub:;
}
const i1 c02_s00ab[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f178_E(i8 /* text */);
	void f189_E_labelref(i2 /* labelid */);
	void f189_E_labelref(i2 /* labelid */);
const i1 c02_s00ac[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// BranchConstant workspace at ws+4088 length ws+16
void f265_BranchConstant(i4 p5870 /* rhs */, i4 p5871 /* lhs */, i8 p5872 /* node */) {
	*(i8*)(intptr_t)(ws+4088) = p5872; /*node */
	*(i4*)(intptr_t)(ws+4096) = p5871; /*lhs */
	*(i4*)(intptr_t)(ws+4100) = p5870; /*rhs */

	i8 v5873 = (i8)(intptr_t)c02_s00ab;
	i8 v5874 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5874)(v5873);

	i8 v5875 = (i8)(intptr_t)(ws+4096);
	i4 v5876 = *(i4*)(intptr_t)v5875;
	i8 v5877 = (i8)(intptr_t)(ws+4100);
	i4 v5878 = *(i4*)(intptr_t)v5877;
	if (v5876==v5878) goto c02_0480; else goto c02_0481;

c02_0480:;

	i8 v5879 = (i8)(intptr_t)(ws+4088);
	i8 v5880 = *(i8*)(intptr_t)v5879;
	i2 v5881 = *(i2*)(intptr_t)v5880;
	i8 v5882 = (i8)(intptr_t)(f189_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5882)(v5881);

	goto c02_047d;

c02_0481:;

	i8 v5883 = (i8)(intptr_t)(ws+4088);
	i8 v5884 = *(i8*)(intptr_t)v5883;
	i8 v5885 = v5884+(+2);
	i2 v5886 = *(i2*)(intptr_t)v5885;
	i8 v5887 = (i8)(intptr_t)(f189_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5887)(v5886);

c02_047d:;

	i8 v5888 = (i8)(intptr_t)c02_s00ac;
	i8 v5889 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5889)(v5888);

endsub:;
}
const i1 c02_s00ad[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s00ae[] = { 0x20,0x21,0x3d,0x20,0 };
	void f178_E(i8 /* text */);
	void f184_E_i32(i4 /* value */);
const i1 c02_s00af[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f178_E(i8 /* text */);
	void f189_E_labelref(i2 /* labelid */);
const i1 c02_s00b0[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// Whencase workspace at ws+4088 length ws+8
void f266_Whencase(i2 p5890 /* falselabel */, i4 p5891 /* value */) {
	*(i4*)(intptr_t)(ws+4088) = p5891; /*value */
	*(i2*)(intptr_t)(ws+4092) = p5890; /*falselabel */

	i8 v5892 = (i8)(intptr_t)(ws+1912);
	i8 v5893 = (i8)(intptr_t)(ws+2040);
	i1 v5894 = *(i1*)(intptr_t)v5893;
	i1 v5895 = v5894+(-1);
	i8 v5896 = v5895;
	i1 v5897 = (i1)+1;
	i8 v5898 = ((i8)v5896)<<v5897;
	i8 v5899 = v5892+v5898;
	i2 v5900 = *(i2*)(intptr_t)v5899;
	i8 v5901 = (i8)(intptr_t)(ws+4094);
	*(i2*)(intptr_t)v5901 = v5900;

	i8 v5902 = (i8)(intptr_t)c02_s00ad;
	i8 v5903 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5903)(v5902);

	i8 v5904 = (i8)(intptr_t)(ws+4094);
	i2 v5905 = *(i2*)(intptr_t)v5904;
	i8 v5906 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5906)(v5905);

	i8 v5907 = (i8)(intptr_t)c02_s00ae;
	i8 v5908 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5908)(v5907);

	i8 v5909 = (i8)(intptr_t)(ws+4088);
	i4 v5910 = *(i4*)(intptr_t)v5909;
	i8 v5911 = (i8)(intptr_t)(f184_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5911)(v5910);

	i8 v5912 = (i8)(intptr_t)c02_s00af;
	i8 v5913 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5913)(v5912);

	i8 v5914 = (i8)(intptr_t)(ws+4092);
	i2 v5915 = *(i2*)(intptr_t)v5914;
	i8 v5916 = (i8)(intptr_t)(f189_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5916)(v5915);

	i8 v5917 = (i8)(intptr_t)c02_s00b0;
	i8 v5918 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5918)(v5917);

endsub:;
}
	void f249_Pop(i2* /* vid */);
	void f247_Push(i2* /* vid */);
const i1 c02_s00b1[] = { 0x09,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s00b2[] = { 0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s00b3[] = { 0x20,0x3d,0x20,0 };
	void f178_E(i8 /* text */);
const i1 c02_s00b4[] = { 0x28,0x73,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s00b5[] = { 0x29,0x28,0x73,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s00b6[] = { 0x29,0 };
	void f178_E(i8 /* text */);
const i1 c02_s00b7[] = { 0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s00b8[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// Cast workspace at ws+4088 length ws+8
void f267_Cast(i1 p5919 /* sext */, i1 p5920 /* dest */, i1 p5921 /* src */) {
	*(i1*)(intptr_t)(ws+4088) = p5921; /*src */
	*(i1*)(intptr_t)(ws+4089) = p5920; /*dest */
	*(i1*)(intptr_t)(ws+4090) = p5919; /*sext */

	i8 v5922 = (i8)(intptr_t)(f249_Pop);
	i2 v5923;

	((void(*)(i2* /* vid */))(intptr_t)v5922)(&v5923);
	i8 v5924 = (i8)(intptr_t)(ws+4092);
	*(i2*)(intptr_t)v5924 = v5923;

	i8 v5925 = (i8)(intptr_t)(f247_Push);
	i2 v5926;

	((void(*)(i2* /* vid */))(intptr_t)v5925)(&v5926);
	i8 v5927 = (i8)(intptr_t)(ws+4094);
	*(i2*)(intptr_t)v5927 = v5926;

	i8 v5928 = (i8)(intptr_t)c02_s00b1;
	i8 v5929 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5929)(v5928);

	i8 v5930 = (i8)(intptr_t)(ws+4089);
	i1 v5931 = *(i1*)(intptr_t)v5930;
	i8 v5932 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5932)(v5931);

	i8 v5933 = (i8)(intptr_t)c02_s00b2;
	i8 v5934 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5934)(v5933);

	i8 v5935 = (i8)(intptr_t)(ws+4094);
	i2 v5936 = *(i2*)(intptr_t)v5935;
	i8 v5937 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5937)(v5936);

	i8 v5938 = (i8)(intptr_t)c02_s00b3;
	i8 v5939 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5939)(v5938);

	i8 v5940 = (i8)(intptr_t)(ws+4090);
	i1 v5941 = *(i1*)(intptr_t)v5940;
	i1 v5942 = (i1)+0;
	if (v5941==v5942) goto c02_0486; else goto c02_0485;

c02_0485:;

	i8 v5943 = (i8)(intptr_t)c02_s00b4;
	i8 v5944 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5944)(v5943);

	i8 v5945 = (i8)(intptr_t)(ws+4089);
	i1 v5946 = *(i1*)(intptr_t)v5945;
	i8 v5947 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5947)(v5946);

	i8 v5948 = (i8)(intptr_t)c02_s00b5;
	i8 v5949 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5949)(v5948);

	i8 v5950 = (i8)(intptr_t)(ws+4088);
	i1 v5951 = *(i1*)(intptr_t)v5950;
	i8 v5952 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5952)(v5951);

	i8 v5953 = (i8)(intptr_t)c02_s00b6;
	i8 v5954 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5954)(v5953);

	goto c02_0482;

c02_0486:;

c02_0482:;

	i8 v5955 = (i8)(intptr_t)c02_s00b7;
	i8 v5956 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5956)(v5955);

	i8 v5957 = (i8)(intptr_t)(ws+4092);
	i2 v5958 = *(i2*)(intptr_t)v5957;
	i8 v5959 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5959)(v5958);

	i8 v5960 = (i8)(intptr_t)c02_s00b8;
	i8 v5961 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5961)(v5960);

endsub:;
}
	void f192_EmitterOpenStream(i8 /* subr */);
const i1 c02_s00b9[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
	void f178_E(i8 /* text */);
	void f169_E_b8(i1 /* byte */);
	void f169_E_b8(i1 /* byte */);
	void f187_E_h16(i2 /* value */);
const i1 c02_s00ba[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f178_E(i8 /* text */);
	void f173_E_comma(void);
const i1 c02_s00bb[] = { 0x30,0x78,0 };
	void f178_E(i8 /* text */);
	void f186_E_h8(i1 /* value */);
	void f173_E_comma(void);
const i1 c02_s00bc[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);
	void f193_EmitterCloseStream(void);

// E_string workspace at ws+4096 length ws+12
void f268_E_string(i2* p5964 /* sid */, i8 p5965 /* text */) {
	*(i8*)(intptr_t)(ws+4096) = p5965; /*text */

	i8 v5966 = (i8)(intptr_t)(ws+2044);
	i2 v5967 = *(i2*)(intptr_t)v5966;
	i8 v5968 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v5968 = v5967;

	i8 v5969 = (i8)(intptr_t)(ws+2044);
	i2 v5970 = *(i2*)(intptr_t)v5969;
	i2 v5971 = v5970+(+1);
	i8 v5972 = (i8)(intptr_t)(ws+2044);
	*(i2*)(intptr_t)v5972 = v5971;

	i8 v5973 = (i8)(intptr_t)(ws+40);
	i8 v5974 = *(i8*)(intptr_t)v5973;
	i8 v5975 = (i8)(intptr_t)(f192_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v5975)(v5974);

	i8 v5976 = (i8)(intptr_t)c02_s00b9;
	i8 v5977 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5977)(v5976);

	i1 v5978 = (i1)+3;
	i8 v5979 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5979)(v5978);

	i1 v5980 = (i1)+115;
	i8 v5981 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5981)(v5980);

	i8 v5982 = (i8)(intptr_t)(ws+4104);
	i2 v5983 = *(i2*)(intptr_t)v5982;
	i8 v5984 = (i8)(intptr_t)(f187_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v5984)(v5983);

	i8 v5985 = (i8)(intptr_t)c02_s00ba;
	i8 v5986 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v5986)(v5985);

	i1 v5987 = (i1)+1;
	i8 v5988 = (i8)(intptr_t)(ws+4106);
	*(i1*)(intptr_t)v5988 = v5987;

c02_0487:;

	i8 v5989 = (i8)(intptr_t)(ws+4096);
	i8 v5990 = *(i8*)(intptr_t)v5989;
	i1 v5991 = *(i1*)(intptr_t)v5990;
	i8 v5992 = (i8)(intptr_t)(ws+4107);
	*(i1*)(intptr_t)v5992 = v5991;

	i8 v5993 = (i8)(intptr_t)(ws+4096);
	i8 v5994 = *(i8*)(intptr_t)v5993;
	i8 v5995 = v5994+(+1);
	i8 v5996 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v5996 = v5995;

	i8 v5997 = (i8)(intptr_t)(ws+4107);
	i1 v5998 = *(i1*)(intptr_t)v5997;
	i1 v5999 = (i1)+0;
	if (v5998==v5999) goto c02_048c; else goto c02_048d;

c02_048c:;

	goto c02_0488;

c02_048d:;

c02_0489:;

	i8 v6000 = (i8)(intptr_t)(ws+4106);
	i1 v6001 = *(i1*)(intptr_t)v6000;
	i1 v6002 = (i1)+0;
	if (v6001==v6002) goto c02_0491; else goto c02_0492;

c02_0491:;

	i8 v6003 = (i8)(intptr_t)(f173_E_comma);

	((void(*)(void))(intptr_t)v6003)();

	goto c02_048e;

c02_0492:;

c02_048e:;

	i1 v6004 = (i1)+0;
	i8 v6005 = (i8)(intptr_t)(ws+4106);
	*(i1*)(intptr_t)v6005 = v6004;

	i8 v6006 = (i8)(intptr_t)c02_s00bb;
	i8 v6007 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6007)(v6006);

	i8 v6008 = (i8)(intptr_t)(ws+4107);
	i1 v6009 = *(i1*)(intptr_t)v6008;
	i8 v6010 = (i8)(intptr_t)(f186_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v6010)(v6009);

	goto c02_0487;

c02_0488:;

	i8 v6011 = (i8)(intptr_t)(ws+4106);
	i1 v6012 = *(i1*)(intptr_t)v6011;
	i1 v6013 = (i1)+0;
	if (v6012==v6013) goto c02_0496; else goto c02_0497;

c02_0496:;

	i8 v6014 = (i8)(intptr_t)(f173_E_comma);

	((void(*)(void))(intptr_t)v6014)();

	goto c02_0493;

c02_0497:;

c02_0493:;

	i8 v6015 = (i8)(intptr_t)c02_s00bc;
	i8 v6016 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6016)(v6015);

	i8 v6017 = (i8)(intptr_t)(f193_EmitterCloseStream);

	((void(*)(void))(intptr_t)v6017)();

endsub:;
	*p5964 = *(i2*)(intptr_t)(ws+4104);
}
const i1 c02_s00bd[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f178_E(i8 /* text */);
	void f173_E_comma(void);
const i1 c02_s00be[] = { 0x30,0x78,0 };
	void f178_E(i8 /* text */);
	void f186_E_h8(i1 /* value */);
const i1 c02_s00bf[] = { 0x7d,0x7d,0x2c,0x0a,0 };
	void f178_E(i8 /* text */);

// FlushInitialiserBuffer workspace at ws+4104 length ws+1
void f269_FlushInitialiserBuffer(void) {

	i8 v6020 = (i8)(intptr_t)(ws+2054);
	i1 v6021 = *(i1*)(intptr_t)v6020;
	i1 v6022 = (i1)+0;
	if (v6021==v6022) goto c02_049c; else goto c02_049b;

c02_049b:;

	i8 v6023 = (i8)(intptr_t)c02_s00bd;
	i8 v6024 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6024)(v6023);

	i1 v6025 = (i1)+0;
	i8 v6026 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v6026 = v6025;

c02_049f:;

	i8 v6027 = (i8)(intptr_t)(ws+4104);
	i1 v6028 = *(i1*)(intptr_t)v6027;
	i8 v6029 = (i8)(intptr_t)(ws+2054);
	i1 v6030 = *(i1*)(intptr_t)v6029;
	if (v6028==v6030) goto c02_04a2; else goto c02_04a1;

c02_04a1:;

	i8 v6031 = (i8)(intptr_t)(ws+4104);
	i1 v6032 = *(i1*)(intptr_t)v6031;
	i1 v6033 = (i1)+0;
	if (v6032==v6033) goto c02_04a7; else goto c02_04a6;

c02_04a6:;

	i8 v6034 = (i8)(intptr_t)(f173_E_comma);

	((void(*)(void))(intptr_t)v6034)();

	goto c02_04a3;

c02_04a7:;

c02_04a3:;

	i8 v6035 = (i8)(intptr_t)c02_s00be;
	i8 v6036 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6036)(v6035);

	i8 v6037 = (i8)(intptr_t)(ws+2046);
	i8 v6038 = (i8)(intptr_t)(ws+4104);
	i1 v6039 = *(i1*)(intptr_t)v6038;
	i8 v6040 = v6039;
	i8 v6041 = v6037+v6040;
	i1 v6042 = *(i1*)(intptr_t)v6041;
	i8 v6043 = (i8)(intptr_t)(f186_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v6043)(v6042);

	i8 v6044 = (i8)(intptr_t)(ws+4104);
	i1 v6045 = *(i1*)(intptr_t)v6044;
	i1 v6046 = v6045+(+1);
	i8 v6047 = (i8)(intptr_t)(ws+4104);
	*(i1*)(intptr_t)v6047 = v6046;

	goto c02_049f;

c02_04a2:;

	i8 v6048 = (i8)(intptr_t)c02_s00bf;
	i8 v6049 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6049)(v6048);

	i1 v6050 = (i1)+0;
	i8 v6051 = (i8)(intptr_t)(ws+2054);
	*(i1*)(intptr_t)v6051 = v6050;

	goto c02_0498;

c02_049c:;

c02_0498:;

endsub:;
}
	void f269_FlushInitialiserBuffer(void);

// E_bytes workspace at ws+4088 length ws+9
void f270_E_bytes(i1 p6052 /* width */, i8 p6053 /* ptr */) {
	*(i8*)(intptr_t)(ws+4088) = p6053; /*ptr */
	*(i1*)(intptr_t)(ws+4096) = p6052; /*width */

c02_04aa:;

	i8 v6054 = (i8)(intptr_t)(ws+4096);
	i1 v6055 = *(i1*)(intptr_t)v6054;
	i1 v6056 = (i1)+0;
	if (v6055==v6056) goto c02_04ad; else goto c02_04ac;

c02_04ac:;

	i8 v6057 = (i8)(intptr_t)(ws+4088);
	i8 v6058 = *(i8*)(intptr_t)v6057;
	i1 v6059 = *(i1*)(intptr_t)v6058;
	i8 v6060 = (i8)(intptr_t)(ws+2046);
	i8 v6061 = (i8)(intptr_t)(ws+2054);
	i1 v6062 = *(i1*)(intptr_t)v6061;
	i8 v6063 = v6062;
	i8 v6064 = v6060+v6063;
	*(i1*)(intptr_t)v6064 = v6059;

	i8 v6065 = (i8)(intptr_t)(ws+4088);
	i8 v6066 = *(i8*)(intptr_t)v6065;
	i8 v6067 = v6066+(+1);
	i8 v6068 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v6068 = v6067;

	i8 v6069 = (i8)(intptr_t)(ws+2054);
	i1 v6070 = *(i1*)(intptr_t)v6069;
	i1 v6071 = v6070+(+1);
	i8 v6072 = (i8)(intptr_t)(ws+2054);
	*(i1*)(intptr_t)v6072 = v6071;

	i8 v6073 = (i8)(intptr_t)(ws+2054);
	i1 v6074 = *(i1*)(intptr_t)v6073;
	i1 v6075 = (i1)+8;
	if (v6074==v6075) goto c02_04b1; else goto c02_04b2;

c02_04b1:;

	i8 v6076 = (i8)(intptr_t)(f269_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v6076)();

	goto c02_04ae;

c02_04b2:;

c02_04ae:;

	i8 v6077 = (i8)(intptr_t)(ws+4096);
	i1 v6078 = *(i1*)(intptr_t)v6077;
	i1 v6079 = v6078+(-1);
	i8 v6080 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v6080 = v6079;

	goto c02_04aa;

c02_04ad:;

endsub:;
}
	void f69_StartError(void);
const i1 c02_s00c0[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f70_EndError(void);

// CheckBufferAlignment workspace at ws+4088 length ws+0
void f271_CheckBufferAlignment(void) {

	i8 v6081 = (i8)(intptr_t)(ws+2054);
	i1 v6082 = *(i1*)(intptr_t)v6081;
	i1 v6083 = (i1)+0;
	if (v6082==v6083) goto c02_04b7; else goto c02_04b6;

c02_04b6:;

	i8 v6084 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v6084)();

	i8 v6085 = (i8)(intptr_t)c02_s00c0;
	i8 v6086 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6086)(v6085);

	i8 v6087 = (i8)(intptr_t)(ws+2054);
	i1 v6088 = *(i1*)(intptr_t)v6087;
	i8 v6089 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6089)(v6088);

	i8 v6090 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v6090)();

	goto c02_04b3;

c02_04b7:;

c02_04b3:;

endsub:;
}
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// MatchPredicate workspace at ws+4080 length ws+48
void f272_MatchPredicate(i1* p6091 /* matches */, i8 p6092 /* n */, i1 p6093 /* rule */) {
	*(i1*)(intptr_t)(ws+4080) = p6093; /*rule */
	*(i8*)(intptr_t)(ws+4088) = p6092; /*n */

	i8 v6094 = (i8)(intptr_t)(ws+4088);
	i8 v6095 = *(i8*)(intptr_t)v6094;
	i8 v6096 = (i8)+24;
	i8 v6097 = (i8)(intptr_t)(ws+4104);
	i8 v6098 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v6098)(v6097, v6096, v6095);

	i1 v6099 = (i1)+0;
	i8 v6100 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v6100 = v6099;

	i8 v6101 = (i8)(intptr_t)(ws+4080);
	i1 v6102 = *(i1*)(intptr_t)v6101;

c02_04b8:;


endsub:;
	*p6091 = *(i1*)(intptr_t)(ws+4096);
}

// Emitter workspace at ws+4088 length ws+0
void f274_Emitter(void) {

endsub:;
}
	void f265_BranchConstant(i4 /* rhs */, i4 /* lhs */, i8 /* node */);

// emit_0 workspace at ws+4088 length ws+0
void f275_emit_0(void) {

	i8 v6150 = (i8)(intptr_t)(ws+4008);
	i8 v6151 = *(i8*)(intptr_t)v6150;
	i8 v6152 = v6151+(+16);
	i8 v6153 = *(i8*)(intptr_t)v6152;
	i8 v6154 = (i8)(intptr_t)(ws+4032);
	i8 v6155 = *(i8*)(intptr_t)v6154;
	i4 v6156 = *(i4*)(intptr_t)v6155;
	i8 v6157 = (i8)(intptr_t)(ws+4048);
	i8 v6158 = *(i8*)(intptr_t)v6157;
	i4 v6159 = *(i4*)(intptr_t)v6158;
	i8 v6160 = (i8)(intptr_t)(f265_BranchConstant);

	((void(*)(i4 /* rhs */, i4 /* lhs */, i8 /* node */))(intptr_t)v6160)(v6159, v6156, v6153);

endsub:;
}
const i1 c02_s00c1[] = { 0x2b,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_1 workspace at ws+4088 length ws+0
void f276_emit_1(void) {

	i1 v6161 = (i1)+1;
	i8 v6162 = (i8)(intptr_t)c02_s00c1;
	i8 v6163 = (i8)(intptr_t)(ws+4048);
	i8 v6164 = *(i8*)(intptr_t)v6163;
	i4 v6165 = *(i4*)(intptr_t)v6164;
	i8 v6166 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6166)(v6165, v6162, v6161);

endsub:;
}
const i1 c02_s00c2[] = { 0x2b,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_2 workspace at ws+4088 length ws+0
void f277_emit_2(void) {

	i1 v6167 = (i1)+2;
	i8 v6168 = (i8)(intptr_t)c02_s00c2;
	i8 v6169 = (i8)(intptr_t)(ws+4048);
	i8 v6170 = *(i8*)(intptr_t)v6169;
	i4 v6171 = *(i4*)(intptr_t)v6170;
	i8 v6172 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6172)(v6171, v6168, v6167);

endsub:;
}
const i1 c02_s00c3[] = { 0x2b,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_3 workspace at ws+4088 length ws+0
void f278_emit_3(void) {

	i1 v6173 = (i1)+4;
	i8 v6174 = (i8)(intptr_t)c02_s00c3;
	i8 v6175 = (i8)(intptr_t)(ws+4048);
	i8 v6176 = *(i8*)(intptr_t)v6175;
	i4 v6177 = *(i4*)(intptr_t)v6176;
	i8 v6178 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6178)(v6177, v6174, v6173);

endsub:;
}
const i1 c02_s00c4[] = { 0x2b,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_4 workspace at ws+4088 length ws+0
void f279_emit_4(void) {

	i1 v6179 = (i1)+8;
	i8 v6180 = (i8)(intptr_t)c02_s00c4;
	i8 v6181 = (i8)(intptr_t)(ws+4048);
	i8 v6182 = *(i8*)(intptr_t)v6181;
	i4 v6183 = *(i4*)(intptr_t)v6182;
	i8 v6184 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6184)(v6183, v6180, v6179);

endsub:;
}
const i1 c02_s00c5[] = { 0x2d,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_5 workspace at ws+4088 length ws+0
void f280_emit_5(void) {

	i1 v6185 = (i1)+1;
	i8 v6186 = (i8)(intptr_t)c02_s00c5;
	i8 v6187 = (i8)(intptr_t)(ws+4048);
	i8 v6188 = *(i8*)(intptr_t)v6187;
	i4 v6189 = *(i4*)(intptr_t)v6188;
	i8 v6190 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6190)(v6189, v6186, v6185);

endsub:;
}
const i1 c02_s00c6[] = { 0x2d,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_6 workspace at ws+4088 length ws+0
void f281_emit_6(void) {

	i1 v6191 = (i1)+2;
	i8 v6192 = (i8)(intptr_t)c02_s00c6;
	i8 v6193 = (i8)(intptr_t)(ws+4048);
	i8 v6194 = *(i8*)(intptr_t)v6193;
	i4 v6195 = *(i4*)(intptr_t)v6194;
	i8 v6196 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6196)(v6195, v6192, v6191);

endsub:;
}
const i1 c02_s00c7[] = { 0x2d,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_7 workspace at ws+4088 length ws+0
void f282_emit_7(void) {

	i1 v6197 = (i1)+4;
	i8 v6198 = (i8)(intptr_t)c02_s00c7;
	i8 v6199 = (i8)(intptr_t)(ws+4048);
	i8 v6200 = *(i8*)(intptr_t)v6199;
	i4 v6201 = *(i4*)(intptr_t)v6200;
	i8 v6202 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6202)(v6201, v6198, v6197);

endsub:;
}
const i1 c02_s00c8[] = { 0x2d,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_8 workspace at ws+4088 length ws+0
void f283_emit_8(void) {

	i1 v6203 = (i1)+8;
	i8 v6204 = (i8)(intptr_t)c02_s00c8;
	i8 v6205 = (i8)(intptr_t)(ws+4048);
	i8 v6206 = *(i8*)(intptr_t)v6205;
	i4 v6207 = *(i4*)(intptr_t)v6206;
	i8 v6208 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6208)(v6207, v6204, v6203);

endsub:;
}
const i1 c02_s00c9[] = { 0x2a,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_9 workspace at ws+4088 length ws+0
void f284_emit_9(void) {

	i1 v6209 = (i1)+1;
	i8 v6210 = (i8)(intptr_t)c02_s00c9;
	i8 v6211 = (i8)(intptr_t)(ws+4048);
	i8 v6212 = *(i8*)(intptr_t)v6211;
	i4 v6213 = *(i4*)(intptr_t)v6212;
	i8 v6214 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6214)(v6213, v6210, v6209);

endsub:;
}
const i1 c02_s00ca[] = { 0x2a,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_10 workspace at ws+4088 length ws+0
void f285_emit_10(void) {

	i1 v6215 = (i1)+2;
	i8 v6216 = (i8)(intptr_t)c02_s00ca;
	i8 v6217 = (i8)(intptr_t)(ws+4048);
	i8 v6218 = *(i8*)(intptr_t)v6217;
	i4 v6219 = *(i4*)(intptr_t)v6218;
	i8 v6220 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6220)(v6219, v6216, v6215);

endsub:;
}
const i1 c02_s00cb[] = { 0x2a,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_11 workspace at ws+4088 length ws+0
void f286_emit_11(void) {

	i1 v6221 = (i1)+4;
	i8 v6222 = (i8)(intptr_t)c02_s00cb;
	i8 v6223 = (i8)(intptr_t)(ws+4048);
	i8 v6224 = *(i8*)(intptr_t)v6223;
	i4 v6225 = *(i4*)(intptr_t)v6224;
	i8 v6226 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6226)(v6225, v6222, v6221);

endsub:;
}
const i1 c02_s00cc[] = { 0x2a,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_12 workspace at ws+4088 length ws+0
void f287_emit_12(void) {

	i1 v6227 = (i1)+8;
	i8 v6228 = (i8)(intptr_t)c02_s00cc;
	i8 v6229 = (i8)(intptr_t)(ws+4048);
	i8 v6230 = *(i8*)(intptr_t)v6229;
	i4 v6231 = *(i4*)(intptr_t)v6230;
	i8 v6232 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6232)(v6231, v6228, v6227);

endsub:;
}
const i1 c02_s00cd[] = { 0x2f,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_13 workspace at ws+4088 length ws+0
void f288_emit_13(void) {

	i1 v6233 = (i1)+1;
	i8 v6234 = (i8)(intptr_t)c02_s00cd;
	i8 v6235 = (i8)(intptr_t)(ws+4048);
	i8 v6236 = *(i8*)(intptr_t)v6235;
	i4 v6237 = *(i4*)(intptr_t)v6236;
	i8 v6238 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6238)(v6237, v6234, v6233);

endsub:;
}
const i1 c02_s00ce[] = { 0x2f,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_14 workspace at ws+4088 length ws+0
void f289_emit_14(void) {

	i1 v6239 = (i1)+2;
	i8 v6240 = (i8)(intptr_t)c02_s00ce;
	i8 v6241 = (i8)(intptr_t)(ws+4048);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	i4 v6243 = *(i4*)(intptr_t)v6242;
	i8 v6244 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6244)(v6243, v6240, v6239);

endsub:;
}
const i1 c02_s00cf[] = { 0x2f,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_15 workspace at ws+4088 length ws+0
void f290_emit_15(void) {

	i1 v6245 = (i1)+4;
	i8 v6246 = (i8)(intptr_t)c02_s00cf;
	i8 v6247 = (i8)(intptr_t)(ws+4048);
	i8 v6248 = *(i8*)(intptr_t)v6247;
	i4 v6249 = *(i4*)(intptr_t)v6248;
	i8 v6250 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6250)(v6249, v6246, v6245);

endsub:;
}
const i1 c02_s00d0[] = { 0x2f,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_16 workspace at ws+4088 length ws+0
void f291_emit_16(void) {

	i1 v6251 = (i1)+8;
	i8 v6252 = (i8)(intptr_t)c02_s00d0;
	i8 v6253 = (i8)(intptr_t)(ws+4048);
	i8 v6254 = *(i8*)(intptr_t)v6253;
	i4 v6255 = *(i4*)(intptr_t)v6254;
	i8 v6256 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6256)(v6255, v6252, v6251);

endsub:;
}
const i1 c02_s00d1[] = { 0x25,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_17 workspace at ws+4088 length ws+0
void f292_emit_17(void) {

	i1 v6257 = (i1)+1;
	i8 v6258 = (i8)(intptr_t)c02_s00d1;
	i8 v6259 = (i8)(intptr_t)(ws+4048);
	i8 v6260 = *(i8*)(intptr_t)v6259;
	i4 v6261 = *(i4*)(intptr_t)v6260;
	i8 v6262 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6262)(v6261, v6258, v6257);

endsub:;
}
const i1 c02_s00d2[] = { 0x25,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_18 workspace at ws+4088 length ws+0
void f293_emit_18(void) {

	i1 v6263 = (i1)+2;
	i8 v6264 = (i8)(intptr_t)c02_s00d2;
	i8 v6265 = (i8)(intptr_t)(ws+4048);
	i8 v6266 = *(i8*)(intptr_t)v6265;
	i4 v6267 = *(i4*)(intptr_t)v6266;
	i8 v6268 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6268)(v6267, v6264, v6263);

endsub:;
}
const i1 c02_s00d3[] = { 0x25,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_19 workspace at ws+4088 length ws+0
void f294_emit_19(void) {

	i1 v6269 = (i1)+4;
	i8 v6270 = (i8)(intptr_t)c02_s00d3;
	i8 v6271 = (i8)(intptr_t)(ws+4048);
	i8 v6272 = *(i8*)(intptr_t)v6271;
	i4 v6273 = *(i4*)(intptr_t)v6272;
	i8 v6274 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6274)(v6273, v6270, v6269);

endsub:;
}
const i1 c02_s00d4[] = { 0x25,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_20 workspace at ws+4088 length ws+0
void f295_emit_20(void) {

	i1 v6275 = (i1)+8;
	i8 v6276 = (i8)(intptr_t)c02_s00d4;
	i8 v6277 = (i8)(intptr_t)(ws+4048);
	i8 v6278 = *(i8*)(intptr_t)v6277;
	i4 v6279 = *(i4*)(intptr_t)v6278;
	i8 v6280 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6280)(v6279, v6276, v6275);

endsub:;
}
const i1 c02_s00d5[] = { 0x2f,0 };
	void f260_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_21 workspace at ws+4088 length ws+0
void f296_emit_21(void) {

	i1 v6281 = (i1)+1;
	i8 v6282 = (i8)(intptr_t)c02_s00d5;
	i8 v6283 = (i8)(intptr_t)(ws+4048);
	i8 v6284 = *(i8*)(intptr_t)v6283;
	i4 v6285 = *(i4*)(intptr_t)v6284;
	i8 v6286 = (i8)(intptr_t)(f260_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6286)(v6285, v6282, v6281);

endsub:;
}
const i1 c02_s00d6[] = { 0x2f,0 };
	void f260_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_22 workspace at ws+4088 length ws+0
void f297_emit_22(void) {

	i1 v6287 = (i1)+2;
	i8 v6288 = (i8)(intptr_t)c02_s00d6;
	i8 v6289 = (i8)(intptr_t)(ws+4048);
	i8 v6290 = *(i8*)(intptr_t)v6289;
	i4 v6291 = *(i4*)(intptr_t)v6290;
	i8 v6292 = (i8)(intptr_t)(f260_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6292)(v6291, v6288, v6287);

endsub:;
}
const i1 c02_s00d7[] = { 0x2f,0 };
	void f260_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_23 workspace at ws+4088 length ws+0
void f298_emit_23(void) {

	i1 v6293 = (i1)+4;
	i8 v6294 = (i8)(intptr_t)c02_s00d7;
	i8 v6295 = (i8)(intptr_t)(ws+4048);
	i8 v6296 = *(i8*)(intptr_t)v6295;
	i4 v6297 = *(i4*)(intptr_t)v6296;
	i8 v6298 = (i8)(intptr_t)(f260_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6298)(v6297, v6294, v6293);

endsub:;
}
const i1 c02_s00d8[] = { 0x2f,0 };
	void f260_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_24 workspace at ws+4088 length ws+0
void f299_emit_24(void) {

	i1 v6299 = (i1)+8;
	i8 v6300 = (i8)(intptr_t)c02_s00d8;
	i8 v6301 = (i8)(intptr_t)(ws+4048);
	i8 v6302 = *(i8*)(intptr_t)v6301;
	i4 v6303 = *(i4*)(intptr_t)v6302;
	i8 v6304 = (i8)(intptr_t)(f260_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6304)(v6303, v6300, v6299);

endsub:;
}
const i1 c02_s00d9[] = { 0x25,0 };
	void f260_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_25 workspace at ws+4088 length ws+0
void f300_emit_25(void) {

	i1 v6305 = (i1)+1;
	i8 v6306 = (i8)(intptr_t)c02_s00d9;
	i8 v6307 = (i8)(intptr_t)(ws+4048);
	i8 v6308 = *(i8*)(intptr_t)v6307;
	i4 v6309 = *(i4*)(intptr_t)v6308;
	i8 v6310 = (i8)(intptr_t)(f260_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6310)(v6309, v6306, v6305);

endsub:;
}
const i1 c02_s00da[] = { 0x25,0 };
	void f260_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_26 workspace at ws+4088 length ws+0
void f301_emit_26(void) {

	i1 v6311 = (i1)+2;
	i8 v6312 = (i8)(intptr_t)c02_s00da;
	i8 v6313 = (i8)(intptr_t)(ws+4048);
	i8 v6314 = *(i8*)(intptr_t)v6313;
	i4 v6315 = *(i4*)(intptr_t)v6314;
	i8 v6316 = (i8)(intptr_t)(f260_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6316)(v6315, v6312, v6311);

endsub:;
}
const i1 c02_s00db[] = { 0x25,0 };
	void f260_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_27 workspace at ws+4088 length ws+0
void f302_emit_27(void) {

	i1 v6317 = (i1)+4;
	i8 v6318 = (i8)(intptr_t)c02_s00db;
	i8 v6319 = (i8)(intptr_t)(ws+4048);
	i8 v6320 = *(i8*)(intptr_t)v6319;
	i4 v6321 = *(i4*)(intptr_t)v6320;
	i8 v6322 = (i8)(intptr_t)(f260_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6322)(v6321, v6318, v6317);

endsub:;
}
const i1 c02_s00dc[] = { 0x25,0 };
	void f260_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_28 workspace at ws+4088 length ws+0
void f303_emit_28(void) {

	i1 v6323 = (i1)+8;
	i8 v6324 = (i8)(intptr_t)c02_s00dc;
	i8 v6325 = (i8)(intptr_t)(ws+4048);
	i8 v6326 = *(i8*)(intptr_t)v6325;
	i4 v6327 = *(i4*)(intptr_t)v6326;
	i8 v6328 = (i8)(intptr_t)(f260_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6328)(v6327, v6324, v6323);

endsub:;
}
const i1 c02_s00dd[] = { 0x26,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_29 workspace at ws+4088 length ws+0
void f304_emit_29(void) {

	i1 v6329 = (i1)+1;
	i8 v6330 = (i8)(intptr_t)c02_s00dd;
	i8 v6331 = (i8)(intptr_t)(ws+4048);
	i8 v6332 = *(i8*)(intptr_t)v6331;
	i4 v6333 = *(i4*)(intptr_t)v6332;
	i8 v6334 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6334)(v6333, v6330, v6329);

endsub:;
}
const i1 c02_s00de[] = { 0x26,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_30 workspace at ws+4088 length ws+0
void f305_emit_30(void) {

	i1 v6335 = (i1)+2;
	i8 v6336 = (i8)(intptr_t)c02_s00de;
	i8 v6337 = (i8)(intptr_t)(ws+4048);
	i8 v6338 = *(i8*)(intptr_t)v6337;
	i4 v6339 = *(i4*)(intptr_t)v6338;
	i8 v6340 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6340)(v6339, v6336, v6335);

endsub:;
}
const i1 c02_s00df[] = { 0x26,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_31 workspace at ws+4088 length ws+0
void f306_emit_31(void) {

	i1 v6341 = (i1)+4;
	i8 v6342 = (i8)(intptr_t)c02_s00df;
	i8 v6343 = (i8)(intptr_t)(ws+4048);
	i8 v6344 = *(i8*)(intptr_t)v6343;
	i4 v6345 = *(i4*)(intptr_t)v6344;
	i8 v6346 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6346)(v6345, v6342, v6341);

endsub:;
}
const i1 c02_s00e0[] = { 0x26,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_32 workspace at ws+4088 length ws+0
void f307_emit_32(void) {

	i1 v6347 = (i1)+8;
	i8 v6348 = (i8)(intptr_t)c02_s00e0;
	i8 v6349 = (i8)(intptr_t)(ws+4048);
	i8 v6350 = *(i8*)(intptr_t)v6349;
	i4 v6351 = *(i4*)(intptr_t)v6350;
	i8 v6352 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6352)(v6351, v6348, v6347);

endsub:;
}
const i1 c02_s00e1[] = { 0x7c,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_33 workspace at ws+4088 length ws+0
void f308_emit_33(void) {

	i1 v6353 = (i1)+1;
	i8 v6354 = (i8)(intptr_t)c02_s00e1;
	i8 v6355 = (i8)(intptr_t)(ws+4048);
	i8 v6356 = *(i8*)(intptr_t)v6355;
	i4 v6357 = *(i4*)(intptr_t)v6356;
	i8 v6358 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6358)(v6357, v6354, v6353);

endsub:;
}
const i1 c02_s00e2[] = { 0x7c,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_34 workspace at ws+4088 length ws+0
void f309_emit_34(void) {

	i1 v6359 = (i1)+2;
	i8 v6360 = (i8)(intptr_t)c02_s00e2;
	i8 v6361 = (i8)(intptr_t)(ws+4048);
	i8 v6362 = *(i8*)(intptr_t)v6361;
	i4 v6363 = *(i4*)(intptr_t)v6362;
	i8 v6364 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6364)(v6363, v6360, v6359);

endsub:;
}
const i1 c02_s00e3[] = { 0x7c,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_35 workspace at ws+4088 length ws+0
void f310_emit_35(void) {

	i1 v6365 = (i1)+4;
	i8 v6366 = (i8)(intptr_t)c02_s00e3;
	i8 v6367 = (i8)(intptr_t)(ws+4048);
	i8 v6368 = *(i8*)(intptr_t)v6367;
	i4 v6369 = *(i4*)(intptr_t)v6368;
	i8 v6370 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6370)(v6369, v6366, v6365);

endsub:;
}
const i1 c02_s00e4[] = { 0x7c,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_36 workspace at ws+4088 length ws+0
void f311_emit_36(void) {

	i1 v6371 = (i1)+8;
	i8 v6372 = (i8)(intptr_t)c02_s00e4;
	i8 v6373 = (i8)(intptr_t)(ws+4048);
	i8 v6374 = *(i8*)(intptr_t)v6373;
	i4 v6375 = *(i4*)(intptr_t)v6374;
	i8 v6376 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6376)(v6375, v6372, v6371);

endsub:;
}
const i1 c02_s00e5[] = { 0x5e,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_37 workspace at ws+4088 length ws+0
void f312_emit_37(void) {

	i1 v6377 = (i1)+1;
	i8 v6378 = (i8)(intptr_t)c02_s00e5;
	i8 v6379 = (i8)(intptr_t)(ws+4048);
	i8 v6380 = *(i8*)(intptr_t)v6379;
	i4 v6381 = *(i4*)(intptr_t)v6380;
	i8 v6382 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6382)(v6381, v6378, v6377);

endsub:;
}
const i1 c02_s00e6[] = { 0x5e,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_38 workspace at ws+4088 length ws+0
void f313_emit_38(void) {

	i1 v6383 = (i1)+2;
	i8 v6384 = (i8)(intptr_t)c02_s00e6;
	i8 v6385 = (i8)(intptr_t)(ws+4048);
	i8 v6386 = *(i8*)(intptr_t)v6385;
	i4 v6387 = *(i4*)(intptr_t)v6386;
	i8 v6388 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6388)(v6387, v6384, v6383);

endsub:;
}
const i1 c02_s00e7[] = { 0x5e,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_39 workspace at ws+4088 length ws+0
void f314_emit_39(void) {

	i1 v6389 = (i1)+4;
	i8 v6390 = (i8)(intptr_t)c02_s00e7;
	i8 v6391 = (i8)(intptr_t)(ws+4048);
	i8 v6392 = *(i8*)(intptr_t)v6391;
	i4 v6393 = *(i4*)(intptr_t)v6392;
	i8 v6394 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6394)(v6393, v6390, v6389);

endsub:;
}
const i1 c02_s00e8[] = { 0x5e,0 };
	void f258_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_40 workspace at ws+4088 length ws+0
void f315_emit_40(void) {

	i1 v6395 = (i1)+8;
	i8 v6396 = (i8)(intptr_t)c02_s00e8;
	i8 v6397 = (i8)(intptr_t)(ws+4048);
	i8 v6398 = *(i8*)(intptr_t)v6397;
	i4 v6399 = *(i4*)(intptr_t)v6398;
	i8 v6400 = (i8)(intptr_t)(f258_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6400)(v6399, v6396, v6395);

endsub:;
}
	void f189_E_labelref(i2 /* labelid */);
const i1 c02_s00e9[] = { 0x3a,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// emit_43 workspace at ws+4088 length ws+0
void f316_emit_43(void) {

	i8 v6401 = (i8)(intptr_t)(ws+4016);
	i8 v6402 = *(i8*)(intptr_t)v6401;
	i2 v6403 = *(i2*)(intptr_t)v6402;
	i8 v6404 = (i8)(intptr_t)(f189_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v6404)(v6403);

	i8 v6405 = (i8)(intptr_t)c02_s00e9;
	i8 v6406 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6406)(v6405);

endsub:;
}
const i1 c02_s00ea[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f178_E(i8 /* text */);
	void f189_E_labelref(i2 /* labelid */);
const i1 c02_s00eb[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// emit_44 workspace at ws+4088 length ws+0
void f317_emit_44(void) {

	i8 v6407 = (i8)(intptr_t)c02_s00ea;
	i8 v6408 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6408)(v6407);

	i8 v6409 = (i8)(intptr_t)(ws+4016);
	i8 v6410 = *(i8*)(intptr_t)v6409;
	i2 v6411 = *(i2*)(intptr_t)v6410;
	i8 v6412 = (i8)(intptr_t)(f189_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v6412)(v6411);

	i8 v6413 = (i8)(intptr_t)c02_s00eb;
	i8 v6414 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6414)(v6413);

endsub:;
}
const i1 c02_s00ec[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// emit_45 workspace at ws+4088 length ws+0
void f318_emit_45(void) {

	i8 v6415 = (i8)(intptr_t)c02_s00ec;
	i8 v6416 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6416)(v6415);

endsub:;
}
	void f192_EmitterOpenStream(i8 /* subr */);
const i1 c02_s00ed[] = { 0x0a,0x2f,0x2f,0x20,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s00ee[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
	void f178_E(i8 /* text */);
	void f169_E_b8(i1 /* byte */);
	void f170_E_b16(i2 /* word */);
	void f169_E_b8(i1 /* byte */);
	void f170_E_b16(i2 /* word */);
const i1 c02_s00ef[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
	void f178_E(i8 /* text */);
	void f169_E_b8(i1 /* byte */);
	void f170_E_b16(i2 /* word */);
	void f169_E_b8(i1 /* byte */);
const i1 c02_s00f0[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
	void f178_E(i8 /* text */);
	void f190_E_subref(i8 /* subr */);
const i1 c02_s00f1[] = { 0x28,0 };
	void f178_E(i8 /* text */);
const i1 c02_s00f2[] = { 0x2c,0x20,0 };
	void f178_E(i8 /* text */);

// comma workspace at ws+4112 length ws+0
void f320_comma(void) {

	i8 v6461 = (i8)(intptr_t)(ws+4088);
	i1 v6462 = *(i1*)(intptr_t)v6461;
	i1 v6463 = (i1)+0;
	if (v6462==v6463) goto c02_04c7; else goto c02_04c8;

c02_04c7:;

	i8 v6464 = (i8)(intptr_t)c02_s00f2;
	i8 v6465 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6465)(v6464);

	goto c02_04c4;

c02_04c8:;

c02_04c4:;

	i1 v6466 = (i1)+0;
	i8 v6467 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6467 = v6466;

endsub:;
}
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f247_Push(i2* /* vid */);
	void f320_comma(void);
const i1 c02_s00f3[] = { 0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s00f4[] = { 0x2a,0x20,0x70,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s00f5[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s00f6[] = { 0x20,0x2a,0x2f,0 };
	void f178_E(i8 /* text */);
	void f94_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f247_Push(i2* /* vid */);
	void f320_comma(void);
const i1 c02_s00f7[] = { 0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s00f8[] = { 0x20,0x70,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s00f9[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s00fa[] = { 0x20,0x2a,0x2f,0 };
	void f178_E(i8 /* text */);
const i1 c02_s00fb[] = { 0x76,0x6f,0x69,0x64,0 };
	void f178_E(i8 /* text */);
const i1 c02_s00fc[] = { 0x29,0x20,0x7b,0x0a,0 };
	void f178_E(i8 /* text */);
	void f94_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f249_Pop(i2* /* vid */);
const i1 c02_s00fd[] = { 0x09,0x2a,0x28,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s00fe[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f178_E(i8 /* text */);
	void f243_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s00ff[] = { 0x29,0x20,0x3d,0x20,0x70,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0100[] = { 0x3b,0x20,0x2f,0x2a,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s0101[] = { 0x20,0x2a,0x2f,0x0a,0 };
	void f178_E(i8 /* text */);

// emit_46 workspace at ws+4088 length ws+18
void f319_emit_46(void) {

	i8 v6417 = (i8)(intptr_t)(ws+40);
	i8 v6418 = *(i8*)(intptr_t)v6417;
	i8 v6419 = (i8)(intptr_t)(f192_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v6419)(v6418);

	i8 v6420 = (i8)(intptr_t)c02_s00ed;
	i8 v6421 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6421)(v6420);

	i8 v6422 = (i8)(intptr_t)(ws+40);
	i8 v6423 = *(i8*)(intptr_t)v6422;
	i8 v6424 = *(i8*)(intptr_t)v6423;
	i8 v6425 = v6424+(+8);
	i8 v6426 = *(i8*)(intptr_t)v6425;
	i8 v6427 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6427)(v6426);

	i8 v6428 = (i8)(intptr_t)c02_s00ee;
	i8 v6429 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6429)(v6428);

	i1 v6430 = (i1)+2;
	i8 v6431 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6431)(v6430);

	i8 v6432 = (i8)(intptr_t)(ws+40);
	i8 v6433 = *(i8*)(intptr_t)v6432;
	i8 v6434 = v6433+(+56);
	i2 v6435 = *(i2*)(intptr_t)v6434;
	i8 v6436 = (i8)(intptr_t)(f170_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6436)(v6435);

	i1 v6437 = (i1)+0;
	i8 v6438 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6438)(v6437);

	i2 v6439 = (i2)+0;
	i8 v6440 = (i8)(intptr_t)(f170_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6440)(v6439);

	i8 v6441 = (i8)(intptr_t)c02_s00ef;
	i8 v6442 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6442)(v6441);

	i1 v6443 = (i1)+5;
	i8 v6444 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6444)(v6443);

	i8 v6445 = (i8)(intptr_t)(ws+40);
	i8 v6446 = *(i8*)(intptr_t)v6445;
	i8 v6447 = v6446+(+56);
	i2 v6448 = *(i2*)(intptr_t)v6447;
	i8 v6449 = (i8)(intptr_t)(f170_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6449)(v6448);

	i1 v6450 = (i1)+0;
	i8 v6451 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6451)(v6450);

	i8 v6452 = (i8)(intptr_t)c02_s00f0;
	i8 v6453 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6453)(v6452);

	i8 v6454 = (i8)(intptr_t)(ws+40);
	i8 v6455 = *(i8*)(intptr_t)v6454;
	i8 v6456 = (i8)(intptr_t)(f190_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v6456)(v6455);

	i8 v6457 = (i8)(intptr_t)c02_s00f1;
	i8 v6458 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6458)(v6457);

	i1 v6459 = (i1)+1;
	i8 v6460 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6460 = v6459;


	i1 v6468 = (i1)+0;
	i8 v6469 = (i8)(intptr_t)(ws+4089);
	*(i1*)(intptr_t)v6469 = v6468;

c02_04cb:;

	i8 v6470 = (i8)(intptr_t)(ws+4089);
	i1 v6471 = *(i1*)(intptr_t)v6470;
	i8 v6472 = (i8)(intptr_t)(ws+40);
	i8 v6473 = *(i8*)(intptr_t)v6472;
	i8 v6474 = v6473+(+81);
	i1 v6475 = *(i1*)(intptr_t)v6474;
	if (v6471==v6475) goto c02_04ce; else goto c02_04cd;

c02_04cd:;

	i8 v6476 = (i8)(intptr_t)(ws+40);
	i8 v6477 = *(i8*)(intptr_t)v6476;
	i8 v6478 = (i8)(intptr_t)(ws+4089);
	i1 v6479 = *(i1*)(intptr_t)v6478;
	i8 v6480 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v6481;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6480)(&v6481, v6479, v6477);
	i8 v6482 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v6482 = v6481;

	i8 v6483 = (i8)(intptr_t)(f247_Push);
	i2 v6484;

	((void(*)(i2* /* vid */))(intptr_t)v6483)(&v6484);
	i8 v6485 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v6485 = v6484;

	i8 v6486 = (i8)(intptr_t)(f320_comma);

	((void(*)(void))(intptr_t)v6486)();

	i8 v6487 = (i8)(intptr_t)c02_s00f3;
	i8 v6488 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6488)(v6487);

	i8 v6489 = (i8)(intptr_t)(ws+4096);
	i8 v6490 = *(i8*)(intptr_t)v6489;
	i8 v6491 = *(i8*)(intptr_t)v6490;
	i8 v6492 = *(i8*)(intptr_t)v6491;
	i8 v6493 = v6492+(+48);
	i2 v6494 = *(i2*)(intptr_t)v6493;
	i1 v6495 = v6494;
	i8 v6496 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6496)(v6495);

	i8 v6497 = (i8)(intptr_t)c02_s00f4;
	i8 v6498 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6498)(v6497);

	i8 v6499 = (i8)(intptr_t)(ws+4104);
	i2 v6500 = *(i2*)(intptr_t)v6499;
	i8 v6501 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6501)(v6500);

	i8 v6502 = (i8)(intptr_t)c02_s00f5;
	i8 v6503 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6503)(v6502);

	i8 v6504 = (i8)(intptr_t)(ws+4096);
	i8 v6505 = *(i8*)(intptr_t)v6504;
	i8 v6506 = v6505+(+8);
	i8 v6507 = *(i8*)(intptr_t)v6506;
	i8 v6508 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6508)(v6507);

	i8 v6509 = (i8)(intptr_t)c02_s00f6;
	i8 v6510 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6510)(v6509);

	i8 v6511 = (i8)(intptr_t)(ws+4089);
	i1 v6512 = *(i1*)(intptr_t)v6511;
	i1 v6513 = v6512+(+1);
	i8 v6514 = (i8)(intptr_t)(ws+4089);
	*(i1*)(intptr_t)v6514 = v6513;

	goto c02_04cb;

c02_04ce:;

	i8 v6515 = (i8)(intptr_t)(ws+40);
	i8 v6516 = *(i8*)(intptr_t)v6515;
	i8 v6517 = v6516+(+80);
	i1 v6518 = *(i1*)(intptr_t)v6517;
	i8 v6519 = (i8)(intptr_t)(ws+4089);
	*(i1*)(intptr_t)v6519 = v6518;

c02_04d1:;

	i8 v6520 = (i8)(intptr_t)(ws+4089);
	i1 v6521 = *(i1*)(intptr_t)v6520;
	i1 v6522 = (i1)+0;
	if (v6521==v6522) goto c02_04d4; else goto c02_04d3;

c02_04d3:;

	i8 v6523 = (i8)(intptr_t)(ws+4089);
	i1 v6524 = *(i1*)(intptr_t)v6523;
	i1 v6525 = v6524+(-1);
	i8 v6526 = (i8)(intptr_t)(ws+4089);
	*(i1*)(intptr_t)v6526 = v6525;

	i8 v6527 = (i8)(intptr_t)(ws+40);
	i8 v6528 = *(i8*)(intptr_t)v6527;
	i8 v6529 = (i8)(intptr_t)(ws+4089);
	i1 v6530 = *(i1*)(intptr_t)v6529;
	i8 v6531 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v6532;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6531)(&v6532, v6530, v6528);
	i8 v6533 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v6533 = v6532;

	i8 v6534 = (i8)(intptr_t)(f247_Push);
	i2 v6535;

	((void(*)(i2* /* vid */))(intptr_t)v6534)(&v6535);
	i8 v6536 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v6536 = v6535;

	i8 v6537 = (i8)(intptr_t)(f320_comma);

	((void(*)(void))(intptr_t)v6537)();

	i8 v6538 = (i8)(intptr_t)c02_s00f7;
	i8 v6539 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6539)(v6538);

	i8 v6540 = (i8)(intptr_t)(ws+4096);
	i8 v6541 = *(i8*)(intptr_t)v6540;
	i8 v6542 = *(i8*)(intptr_t)v6541;
	i8 v6543 = *(i8*)(intptr_t)v6542;
	i8 v6544 = v6543+(+48);
	i2 v6545 = *(i2*)(intptr_t)v6544;
	i1 v6546 = v6545;
	i8 v6547 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6547)(v6546);

	i8 v6548 = (i8)(intptr_t)c02_s00f8;
	i8 v6549 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6549)(v6548);

	i8 v6550 = (i8)(intptr_t)(ws+4104);
	i2 v6551 = *(i2*)(intptr_t)v6550;
	i8 v6552 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6552)(v6551);

	i8 v6553 = (i8)(intptr_t)c02_s00f9;
	i8 v6554 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6554)(v6553);

	i8 v6555 = (i8)(intptr_t)(ws+4096);
	i8 v6556 = *(i8*)(intptr_t)v6555;
	i8 v6557 = v6556+(+8);
	i8 v6558 = *(i8*)(intptr_t)v6557;
	i8 v6559 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6559)(v6558);

	i8 v6560 = (i8)(intptr_t)c02_s00fa;
	i8 v6561 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6561)(v6560);

	goto c02_04d1;

c02_04d4:;

	i8 v6562 = (i8)(intptr_t)(ws+40);
	i8 v6563 = *(i8*)(intptr_t)v6562;
	i8 v6564 = v6563+(+80);
	i1 v6565 = *(i1*)(intptr_t)v6564;
	i8 v6566 = (i8)(intptr_t)(ws+40);
	i8 v6567 = *(i8*)(intptr_t)v6566;
	i8 v6568 = v6567+(+81);
	i1 v6569 = *(i1*)(intptr_t)v6568;
	i1 v6570 = v6565+v6569;
	i1 v6571 = (i1)+0;
	if (v6570==v6571) goto c02_04d8; else goto c02_04d9;

c02_04d8:;

	i8 v6572 = (i8)(intptr_t)c02_s00fb;
	i8 v6573 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6573)(v6572);

	goto c02_04d5;

c02_04d9:;

c02_04d5:;

	i8 v6574 = (i8)(intptr_t)c02_s00fc;
	i8 v6575 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6575)(v6574);

	i1 v6576 = (i1)+0;
	i8 v6577 = (i8)(intptr_t)(ws+4089);
	*(i1*)(intptr_t)v6577 = v6576;

c02_04dc:;

	i8 v6578 = (i8)(intptr_t)(ws+4089);
	i1 v6579 = *(i1*)(intptr_t)v6578;
	i8 v6580 = (i8)(intptr_t)(ws+40);
	i8 v6581 = *(i8*)(intptr_t)v6580;
	i8 v6582 = v6581+(+80);
	i1 v6583 = *(i1*)(intptr_t)v6582;
	if (v6579==v6583) goto c02_04df; else goto c02_04de;

c02_04de:;

	i8 v6584 = (i8)(intptr_t)(ws+40);
	i8 v6585 = *(i8*)(intptr_t)v6584;
	i8 v6586 = (i8)(intptr_t)(ws+4089);
	i1 v6587 = *(i1*)(intptr_t)v6586;
	i8 v6588 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v6589;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6588)(&v6589, v6587, v6585);
	i8 v6590 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v6590 = v6589;

	i8 v6591 = (i8)(intptr_t)(f249_Pop);
	i2 v6592;

	((void(*)(i2* /* vid */))(intptr_t)v6591)(&v6592);
	i8 v6593 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v6593 = v6592;

	i8 v6594 = (i8)(intptr_t)c02_s00fd;
	i8 v6595 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6595)(v6594);

	i8 v6596 = (i8)(intptr_t)(ws+4096);
	i8 v6597 = *(i8*)(intptr_t)v6596;
	i8 v6598 = *(i8*)(intptr_t)v6597;
	i8 v6599 = *(i8*)(intptr_t)v6598;
	i8 v6600 = v6599+(+48);
	i2 v6601 = *(i2*)(intptr_t)v6600;
	i1 v6602 = v6601;
	i8 v6603 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6603)(v6602);

	i8 v6604 = (i8)(intptr_t)c02_s00fe;
	i8 v6605 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6605)(v6604);

	i8 v6606 = (i8)(intptr_t)(ws+4096);
	i8 v6607 = *(i8*)(intptr_t)v6606;
	i2 v6608 = (i2)+0;
	i8 v6609 = (i8)(intptr_t)(f243_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6609)(v6608, v6607);

	i8 v6610 = (i8)(intptr_t)c02_s00ff;
	i8 v6611 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6611)(v6610);

	i8 v6612 = (i8)(intptr_t)(ws+4104);
	i2 v6613 = *(i2*)(intptr_t)v6612;
	i8 v6614 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6614)(v6613);

	i8 v6615 = (i8)(intptr_t)c02_s0100;
	i8 v6616 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6616)(v6615);

	i8 v6617 = (i8)(intptr_t)(ws+4096);
	i8 v6618 = *(i8*)(intptr_t)v6617;
	i8 v6619 = v6618+(+8);
	i8 v6620 = *(i8*)(intptr_t)v6619;
	i8 v6621 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6621)(v6620);

	i8 v6622 = (i8)(intptr_t)c02_s0101;
	i8 v6623 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6623)(v6622);

	i8 v6624 = (i8)(intptr_t)(ws+4089);
	i1 v6625 = *(i1*)(intptr_t)v6624;
	i1 v6626 = v6625+(+1);
	i8 v6627 = (i8)(intptr_t)(ws+4089);
	*(i1*)(intptr_t)v6627 = v6626;

	goto c02_04dc;

c02_04df:;

endsub:;
}
const i1 c02_s0102[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f249_Pop(i2* /* vid */);
const i1 c02_s0103[] = { 0x09,0x2a,0x70,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0104[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s0105[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f178_E(i8 /* text */);
	void f243_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0106[] = { 0x29,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);
const i1 c02_s0107[] = { 0x7d,0x0a,0 };
	void f178_E(i8 /* text */);
	void f200_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);
	void f193_EmitterCloseStream(void);

// emit_47 workspace at ws+4088 length ws+18
void f321_emit_47(void) {

	i8 v6628 = (i8)(intptr_t)c02_s0102;
	i8 v6629 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6629)(v6628);

	i8 v6630 = (i8)(intptr_t)(ws+40);
	i8 v6631 = *(i8*)(intptr_t)v6630;
	i8 v6632 = v6631+(+81);
	i1 v6633 = *(i1*)(intptr_t)v6632;
	i8 v6634 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6634 = v6633;

c02_04e2:;

	i8 v6635 = (i8)(intptr_t)(ws+4088);
	i1 v6636 = *(i1*)(intptr_t)v6635;
	i1 v6637 = (i1)+0;
	if (v6636==v6637) goto c02_04e5; else goto c02_04e4;

c02_04e4:;

	i8 v6638 = (i8)(intptr_t)(ws+4088);
	i1 v6639 = *(i1*)(intptr_t)v6638;
	i1 v6640 = v6639+(-1);
	i8 v6641 = (i8)(intptr_t)(ws+4088);
	*(i1*)(intptr_t)v6641 = v6640;

	i8 v6642 = (i8)(intptr_t)(ws+40);
	i8 v6643 = *(i8*)(intptr_t)v6642;
	i8 v6644 = (i8)(intptr_t)(ws+4088);
	i1 v6645 = *(i1*)(intptr_t)v6644;
	i8 v6646 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v6647;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6646)(&v6647, v6645, v6643);
	i8 v6648 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v6648 = v6647;

	i8 v6649 = (i8)(intptr_t)(f249_Pop);
	i2 v6650;

	((void(*)(i2* /* vid */))(intptr_t)v6649)(&v6650);
	i8 v6651 = (i8)(intptr_t)(ws+4104);
	*(i2*)(intptr_t)v6651 = v6650;

	i8 v6652 = (i8)(intptr_t)c02_s0103;
	i8 v6653 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6653)(v6652);

	i8 v6654 = (i8)(intptr_t)(ws+4104);
	i2 v6655 = *(i2*)(intptr_t)v6654;
	i8 v6656 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6656)(v6655);

	i8 v6657 = (i8)(intptr_t)c02_s0104;
	i8 v6658 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6658)(v6657);

	i8 v6659 = (i8)(intptr_t)(ws+4096);
	i8 v6660 = *(i8*)(intptr_t)v6659;
	i8 v6661 = *(i8*)(intptr_t)v6660;
	i8 v6662 = *(i8*)(intptr_t)v6661;
	i8 v6663 = v6662+(+48);
	i2 v6664 = *(i2*)(intptr_t)v6663;
	i1 v6665 = v6664;
	i8 v6666 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6666)(v6665);

	i8 v6667 = (i8)(intptr_t)c02_s0105;
	i8 v6668 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6668)(v6667);

	i8 v6669 = (i8)(intptr_t)(ws+4096);
	i8 v6670 = *(i8*)(intptr_t)v6669;
	i2 v6671 = (i2)+0;
	i8 v6672 = (i8)(intptr_t)(f243_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6672)(v6671, v6670);

	i8 v6673 = (i8)(intptr_t)c02_s0106;
	i8 v6674 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6674)(v6673);

	goto c02_04e2;

c02_04e5:;

	i8 v6675 = (i8)(intptr_t)c02_s0107;
	i8 v6676 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6676)(v6675);

	i8 v6677 = (i8)(intptr_t)(ws+40);
	i8 v6678 = *(i8*)(intptr_t)v6677;
	i1 v6679 = (i1)+0;
	i8 v6680 = (i8)(intptr_t)(ws+40);
	i8 v6681 = *(i8*)(intptr_t)v6680;
	i8 v6682 = v6681+(+58);
	i2 v6683 = *(i2*)(intptr_t)v6682;
	i8 v6684 = (i8)(intptr_t)(f200_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i8 /* subr */))(intptr_t)v6684)(v6683, v6679, v6678);

	i8 v6685 = (i8)(intptr_t)(f193_EmitterCloseStream);

	((void(*)(void))(intptr_t)v6685)();

endsub:;
}
	void f252_Call(i8 /* subr */);

// emit_48 workspace at ws+4088 length ws+0
void f322_emit_48(void) {

	i8 v6686 = (i8)(intptr_t)(ws+4016);
	i8 v6687 = *(i8*)(intptr_t)v6686;
	i8 v6688 = *(i8*)(intptr_t)v6687;
	i8 v6689 = (i8)(intptr_t)(f252_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6689)(v6688);

endsub:;
}
	void f252_Call(i8 /* subr */);

// emit_49 workspace at ws+4088 length ws+0
void f323_emit_49(void) {

	i8 v6690 = (i8)(intptr_t)(ws+4016);
	i8 v6691 = *(i8*)(intptr_t)v6690;
	i8 v6692 = *(i8*)(intptr_t)v6691;
	i8 v6693 = (i8)(intptr_t)(f252_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6693)(v6692);

endsub:;
}
	void f252_Call(i8 /* subr */);

// emit_50 workspace at ws+4088 length ws+0
void f324_emit_50(void) {

	i8 v6694 = (i8)(intptr_t)(ws+4016);
	i8 v6695 = *(i8*)(intptr_t)v6694;
	i8 v6696 = *(i8*)(intptr_t)v6695;
	i8 v6697 = (i8)(intptr_t)(f252_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6697)(v6696);

endsub:;
}
	void f252_Call(i8 /* subr */);

// emit_51 workspace at ws+4088 length ws+0
void f325_emit_51(void) {

	i8 v6698 = (i8)(intptr_t)(ws+4016);
	i8 v6699 = *(i8*)(intptr_t)v6698;
	i8 v6700 = *(i8*)(intptr_t)v6699;
	i8 v6701 = (i8)(intptr_t)(f252_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6701)(v6700);

endsub:;
}
	void f252_Call(i8 /* subr */);

// emit_52 workspace at ws+4088 length ws+0
void f326_emit_52(void) {

	i8 v6702 = (i8)(intptr_t)(ws+4016);
	i8 v6703 = *(i8*)(intptr_t)v6702;
	i8 v6704 = *(i8*)(intptr_t)v6703;
	i8 v6705 = (i8)(intptr_t)(f252_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6705)(v6704);

endsub:;
}
	void f254_LoadConstant(i4 /* value */, i1 /* width */);

// emit_62 workspace at ws+4088 length ws+0
void f327_emit_62(void) {

	i1 v6706 = (i1)+1;
	i8 v6707 = (i8)(intptr_t)(ws+4016);
	i8 v6708 = *(i8*)(intptr_t)v6707;
	i4 v6709 = *(i4*)(intptr_t)v6708;
	i8 v6710 = (i8)(intptr_t)(f254_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6710)(v6709, v6706);

endsub:;
}
	void f254_LoadConstant(i4 /* value */, i1 /* width */);

// emit_63 workspace at ws+4088 length ws+0
void f328_emit_63(void) {

	i1 v6711 = (i1)+2;
	i8 v6712 = (i8)(intptr_t)(ws+4016);
	i8 v6713 = *(i8*)(intptr_t)v6712;
	i4 v6714 = *(i4*)(intptr_t)v6713;
	i8 v6715 = (i8)(intptr_t)(f254_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6715)(v6714, v6711);

endsub:;
}
	void f254_LoadConstant(i4 /* value */, i1 /* width */);

// emit_64 workspace at ws+4088 length ws+0
void f329_emit_64(void) {

	i1 v6716 = (i1)+4;
	i8 v6717 = (i8)(intptr_t)(ws+4016);
	i8 v6718 = *(i8*)(intptr_t)v6717;
	i4 v6719 = *(i4*)(intptr_t)v6718;
	i8 v6720 = (i8)(intptr_t)(f254_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6720)(v6719, v6716);

endsub:;
}
	void f254_LoadConstant(i4 /* value */, i1 /* width */);

// emit_65 workspace at ws+4088 length ws+0
void f330_emit_65(void) {

	i1 v6721 = (i1)+8;
	i8 v6722 = (i8)(intptr_t)(ws+4016);
	i8 v6723 = *(i8*)(intptr_t)v6722;
	i4 v6724 = *(i4*)(intptr_t)v6723;
	i8 v6725 = (i8)(intptr_t)(f254_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6725)(v6724, v6721);

endsub:;
}
	void f247_Push(i2* /* vid */);
const i1 c02_s0108[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0109[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f178_E(i8 /* text */);
	void f243_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s010a[] = { 0x29,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// emit_66 workspace at ws+4088 length ws+2
void f331_emit_66(void) {

	i8 v6726 = (i8)(intptr_t)(f247_Push);
	i2 v6727;

	((void(*)(i2* /* vid */))(intptr_t)v6726)(&v6727);
	i8 v6728 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v6728 = v6727;

	i8 v6729 = (i8)(intptr_t)c02_s0108;
	i8 v6730 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6730)(v6729);

	i8 v6731 = (i8)(intptr_t)(ws+4088);
	i2 v6732 = *(i2*)(intptr_t)v6731;
	i8 v6733 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6733)(v6732);

	i8 v6734 = (i8)(intptr_t)c02_s0109;
	i8 v6735 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6735)(v6734);

	i8 v6736 = (i8)(intptr_t)(ws+4016);
	i8 v6737 = *(i8*)(intptr_t)v6736;
	i8 v6738 = *(i8*)(intptr_t)v6737;
	i8 v6739 = (i8)(intptr_t)(ws+4016);
	i8 v6740 = *(i8*)(intptr_t)v6739;
	i8 v6741 = v6740+(+8);
	i2 v6742 = *(i2*)(intptr_t)v6741;
	i8 v6743 = (i8)(intptr_t)(f243_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6743)(v6742, v6738);

	i8 v6744 = (i8)(intptr_t)c02_s010a;
	i8 v6745 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v6745)(v6744);

endsub:;
}
	void f255_StoreVV(i1 /* width */);

// emit_67 workspace at ws+4088 length ws+0
void f332_emit_67(void) {

	i1 v6746 = (i1)+1;
	i8 v6747 = (i8)(intptr_t)(f255_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6747)(v6746);

endsub:;
}
	void f255_StoreVV(i1 /* width */);

// emit_68 workspace at ws+4088 length ws+0
void f333_emit_68(void) {

	i1 v6748 = (i1)+2;
	i8 v6749 = (i8)(intptr_t)(f255_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6749)(v6748);

endsub:;
}
	void f255_StoreVV(i1 /* width */);

// emit_69 workspace at ws+4088 length ws+0
void f334_emit_69(void) {

	i1 v6750 = (i1)+4;
	i8 v6751 = (i8)(intptr_t)(f255_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6751)(v6750);

endsub:;
}
	void f255_StoreVV(i1 /* width */);

// emit_70 workspace at ws+4088 length ws+0
void f335_emit_70(void) {

	i1 v6752 = (i1)+8;
	i8 v6753 = (i8)(intptr_t)(f255_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6753)(v6752);

endsub:;
}
	void f256_LoadVV(i1 /* width */);

// emit_71 workspace at ws+4088 length ws+0
void f336_emit_71(void) {

	i1 v6754 = (i1)+1;
	i8 v6755 = (i8)(intptr_t)(f256_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6755)(v6754);

endsub:;
}
	void f256_LoadVV(i1 /* width */);

// emit_72 workspace at ws+4088 length ws+0
void f337_emit_72(void) {

	i1 v6756 = (i1)+2;
	i8 v6757 = (i8)(intptr_t)(f256_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6757)(v6756);

endsub:;
}
	void f256_LoadVV(i1 /* width */);

// emit_73 workspace at ws+4088 length ws+0
void f338_emit_73(void) {

	i1 v6758 = (i1)+4;
	i8 v6759 = (i8)(intptr_t)(f256_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6759)(v6758);

endsub:;
}
	void f256_LoadVV(i1 /* width */);

// emit_74 workspace at ws+4088 length ws+0
void f339_emit_74(void) {

	i1 v6760 = (i1)+8;
	i8 v6761 = (i8)(intptr_t)(f256_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6761)(v6760);

endsub:;
}
const i1 c02_s010b[] = { 0x2b,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_75 workspace at ws+4088 length ws+0
void f340_emit_75(void) {

	i1 v6762 = (i1)+1;
	i8 v6763 = (i8)(intptr_t)c02_s010b;
	i8 v6764 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6764)(v6763, v6762);

endsub:;
}
const i1 c02_s010c[] = { 0x2b,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_76 workspace at ws+4088 length ws+0
void f341_emit_76(void) {

	i1 v6765 = (i1)+2;
	i8 v6766 = (i8)(intptr_t)c02_s010c;
	i8 v6767 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6767)(v6766, v6765);

endsub:;
}
const i1 c02_s010d[] = { 0x2b,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_77 workspace at ws+4088 length ws+0
void f342_emit_77(void) {

	i1 v6768 = (i1)+4;
	i8 v6769 = (i8)(intptr_t)c02_s010d;
	i8 v6770 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6770)(v6769, v6768);

endsub:;
}
const i1 c02_s010e[] = { 0x2b,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_78 workspace at ws+4088 length ws+0
void f343_emit_78(void) {

	i1 v6771 = (i1)+8;
	i8 v6772 = (i8)(intptr_t)c02_s010e;
	i8 v6773 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6773)(v6772, v6771);

endsub:;
}
const i1 c02_s010f[] = { 0x2d,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_79 workspace at ws+4088 length ws+0
void f344_emit_79(void) {

	i1 v6774 = (i1)+1;
	i8 v6775 = (i8)(intptr_t)c02_s010f;
	i8 v6776 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6776)(v6775, v6774);

endsub:;
}
const i1 c02_s0110[] = { 0x2d,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_80 workspace at ws+4088 length ws+0
void f345_emit_80(void) {

	i1 v6777 = (i1)+2;
	i8 v6778 = (i8)(intptr_t)c02_s0110;
	i8 v6779 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6779)(v6778, v6777);

endsub:;
}
const i1 c02_s0111[] = { 0x2d,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_81 workspace at ws+4088 length ws+0
void f346_emit_81(void) {

	i1 v6780 = (i1)+4;
	i8 v6781 = (i8)(intptr_t)c02_s0111;
	i8 v6782 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6782)(v6781, v6780);

endsub:;
}
const i1 c02_s0112[] = { 0x2d,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_82 workspace at ws+4088 length ws+0
void f347_emit_82(void) {

	i1 v6783 = (i1)+8;
	i8 v6784 = (i8)(intptr_t)c02_s0112;
	i8 v6785 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6785)(v6784, v6783);

endsub:;
}
const i1 c02_s0113[] = { 0x2a,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_83 workspace at ws+4088 length ws+0
void f348_emit_83(void) {

	i1 v6786 = (i1)+1;
	i8 v6787 = (i8)(intptr_t)c02_s0113;
	i8 v6788 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6788)(v6787, v6786);

endsub:;
}
const i1 c02_s0114[] = { 0x2a,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_84 workspace at ws+4088 length ws+0
void f349_emit_84(void) {

	i1 v6789 = (i1)+2;
	i8 v6790 = (i8)(intptr_t)c02_s0114;
	i8 v6791 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6791)(v6790, v6789);

endsub:;
}
const i1 c02_s0115[] = { 0x2a,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_85 workspace at ws+4088 length ws+0
void f350_emit_85(void) {

	i1 v6792 = (i1)+4;
	i8 v6793 = (i8)(intptr_t)c02_s0115;
	i8 v6794 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6794)(v6793, v6792);

endsub:;
}
const i1 c02_s0116[] = { 0x2a,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_86 workspace at ws+4088 length ws+0
void f351_emit_86(void) {

	i1 v6795 = (i1)+8;
	i8 v6796 = (i8)(intptr_t)c02_s0116;
	i8 v6797 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6797)(v6796, v6795);

endsub:;
}
const i1 c02_s0117[] = { 0x2f,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_87 workspace at ws+4088 length ws+0
void f352_emit_87(void) {

	i1 v6798 = (i1)+1;
	i8 v6799 = (i8)(intptr_t)c02_s0117;
	i8 v6800 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6800)(v6799, v6798);

endsub:;
}
const i1 c02_s0118[] = { 0x2f,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_88 workspace at ws+4088 length ws+0
void f353_emit_88(void) {

	i1 v6801 = (i1)+2;
	i8 v6802 = (i8)(intptr_t)c02_s0118;
	i8 v6803 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6803)(v6802, v6801);

endsub:;
}
const i1 c02_s0119[] = { 0x2f,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_89 workspace at ws+4088 length ws+0
void f354_emit_89(void) {

	i1 v6804 = (i1)+4;
	i8 v6805 = (i8)(intptr_t)c02_s0119;
	i8 v6806 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6806)(v6805, v6804);

endsub:;
}
const i1 c02_s011a[] = { 0x2f,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_90 workspace at ws+4088 length ws+0
void f355_emit_90(void) {

	i1 v6807 = (i1)+8;
	i8 v6808 = (i8)(intptr_t)c02_s011a;
	i8 v6809 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6809)(v6808, v6807);

endsub:;
}
const i1 c02_s011b[] = { 0x25,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_91 workspace at ws+4088 length ws+0
void f356_emit_91(void) {

	i1 v6810 = (i1)+1;
	i8 v6811 = (i8)(intptr_t)c02_s011b;
	i8 v6812 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6812)(v6811, v6810);

endsub:;
}
const i1 c02_s011c[] = { 0x25,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_92 workspace at ws+4088 length ws+0
void f357_emit_92(void) {

	i1 v6813 = (i1)+2;
	i8 v6814 = (i8)(intptr_t)c02_s011c;
	i8 v6815 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6815)(v6814, v6813);

endsub:;
}
const i1 c02_s011d[] = { 0x25,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_93 workspace at ws+4088 length ws+0
void f358_emit_93(void) {

	i1 v6816 = (i1)+4;
	i8 v6817 = (i8)(intptr_t)c02_s011d;
	i8 v6818 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6818)(v6817, v6816);

endsub:;
}
const i1 c02_s011e[] = { 0x25,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_94 workspace at ws+4088 length ws+0
void f359_emit_94(void) {

	i1 v6819 = (i1)+8;
	i8 v6820 = (i8)(intptr_t)c02_s011e;
	i8 v6821 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6821)(v6820, v6819);

endsub:;
}
const i1 c02_s011f[] = { 0x2f,0 };
	void f259_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_95 workspace at ws+4088 length ws+0
void f360_emit_95(void) {

	i1 v6822 = (i1)+1;
	i8 v6823 = (i8)(intptr_t)c02_s011f;
	i8 v6824 = (i8)(intptr_t)(f259_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6824)(v6823, v6822);

endsub:;
}
const i1 c02_s0120[] = { 0x2f,0 };
	void f259_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_96 workspace at ws+4088 length ws+0
void f361_emit_96(void) {

	i1 v6825 = (i1)+2;
	i8 v6826 = (i8)(intptr_t)c02_s0120;
	i8 v6827 = (i8)(intptr_t)(f259_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6827)(v6826, v6825);

endsub:;
}
const i1 c02_s0121[] = { 0x2f,0 };
	void f259_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_97 workspace at ws+4088 length ws+0
void f362_emit_97(void) {

	i1 v6828 = (i1)+4;
	i8 v6829 = (i8)(intptr_t)c02_s0121;
	i8 v6830 = (i8)(intptr_t)(f259_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6830)(v6829, v6828);

endsub:;
}
const i1 c02_s0122[] = { 0x2f,0 };
	void f259_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_98 workspace at ws+4088 length ws+0
void f363_emit_98(void) {

	i1 v6831 = (i1)+8;
	i8 v6832 = (i8)(intptr_t)c02_s0122;
	i8 v6833 = (i8)(intptr_t)(f259_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6833)(v6832, v6831);

endsub:;
}
const i1 c02_s0123[] = { 0x25,0 };
	void f259_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_99 workspace at ws+4088 length ws+0
void f364_emit_99(void) {

	i1 v6834 = (i1)+1;
	i8 v6835 = (i8)(intptr_t)c02_s0123;
	i8 v6836 = (i8)(intptr_t)(f259_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6836)(v6835, v6834);

endsub:;
}
const i1 c02_s0124[] = { 0x25,0 };
	void f259_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_100 workspace at ws+4088 length ws+0
void f365_emit_100(void) {

	i1 v6837 = (i1)+2;
	i8 v6838 = (i8)(intptr_t)c02_s0124;
	i8 v6839 = (i8)(intptr_t)(f259_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6839)(v6838, v6837);

endsub:;
}
const i1 c02_s0125[] = { 0x25,0 };
	void f259_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_101 workspace at ws+4088 length ws+0
void f366_emit_101(void) {

	i1 v6840 = (i1)+4;
	i8 v6841 = (i8)(intptr_t)c02_s0125;
	i8 v6842 = (i8)(intptr_t)(f259_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6842)(v6841, v6840);

endsub:;
}
const i1 c02_s0126[] = { 0x25,0 };
	void f259_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_102 workspace at ws+4088 length ws+0
void f367_emit_102(void) {

	i1 v6843 = (i1)+8;
	i8 v6844 = (i8)(intptr_t)c02_s0126;
	i8 v6845 = (i8)(intptr_t)(f259_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6845)(v6844, v6843);

endsub:;
}
const i1 c02_s0127[] = { 0x26,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_103 workspace at ws+4088 length ws+0
void f368_emit_103(void) {

	i1 v6846 = (i1)+1;
	i8 v6847 = (i8)(intptr_t)c02_s0127;
	i8 v6848 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6848)(v6847, v6846);

endsub:;
}
const i1 c02_s0128[] = { 0x26,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_104 workspace at ws+4088 length ws+0
void f369_emit_104(void) {

	i1 v6849 = (i1)+2;
	i8 v6850 = (i8)(intptr_t)c02_s0128;
	i8 v6851 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6851)(v6850, v6849);

endsub:;
}
const i1 c02_s0129[] = { 0x26,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_105 workspace at ws+4088 length ws+0
void f370_emit_105(void) {

	i1 v6852 = (i1)+4;
	i8 v6853 = (i8)(intptr_t)c02_s0129;
	i8 v6854 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6854)(v6853, v6852);

endsub:;
}
const i1 c02_s012a[] = { 0x26,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_106 workspace at ws+4088 length ws+0
void f371_emit_106(void) {

	i1 v6855 = (i1)+8;
	i8 v6856 = (i8)(intptr_t)c02_s012a;
	i8 v6857 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6857)(v6856, v6855);

endsub:;
}
const i1 c02_s012b[] = { 0x7c,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_107 workspace at ws+4088 length ws+0
void f372_emit_107(void) {

	i1 v6858 = (i1)+1;
	i8 v6859 = (i8)(intptr_t)c02_s012b;
	i8 v6860 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6860)(v6859, v6858);

endsub:;
}
const i1 c02_s012c[] = { 0x7c,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_108 workspace at ws+4088 length ws+0
void f373_emit_108(void) {

	i1 v6861 = (i1)+2;
	i8 v6862 = (i8)(intptr_t)c02_s012c;
	i8 v6863 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6863)(v6862, v6861);

endsub:;
}
const i1 c02_s012d[] = { 0x7c,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_109 workspace at ws+4088 length ws+0
void f374_emit_109(void) {

	i1 v6864 = (i1)+4;
	i8 v6865 = (i8)(intptr_t)c02_s012d;
	i8 v6866 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6866)(v6865, v6864);

endsub:;
}
const i1 c02_s012e[] = { 0x7c,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_110 workspace at ws+4088 length ws+0
void f375_emit_110(void) {

	i1 v6867 = (i1)+8;
	i8 v6868 = (i8)(intptr_t)c02_s012e;
	i8 v6869 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6869)(v6868, v6867);

endsub:;
}
const i1 c02_s012f[] = { 0x5e,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_111 workspace at ws+4088 length ws+0
void f376_emit_111(void) {

	i1 v6870 = (i1)+1;
	i8 v6871 = (i8)(intptr_t)c02_s012f;
	i8 v6872 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6872)(v6871, v6870);

endsub:;
}
const i1 c02_s0130[] = { 0x5e,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_112 workspace at ws+4088 length ws+0
void f377_emit_112(void) {

	i1 v6873 = (i1)+2;
	i8 v6874 = (i8)(intptr_t)c02_s0130;
	i8 v6875 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6875)(v6874, v6873);

endsub:;
}
const i1 c02_s0131[] = { 0x5e,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_113 workspace at ws+4088 length ws+0
void f378_emit_113(void) {

	i1 v6876 = (i1)+4;
	i8 v6877 = (i8)(intptr_t)c02_s0131;
	i8 v6878 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6878)(v6877, v6876);

endsub:;
}
const i1 c02_s0132[] = { 0x5e,0 };
	void f257_Op2VV(i8 /* op */, i1 /* width */);

// emit_114 workspace at ws+4088 length ws+0
void f379_emit_114(void) {

	i1 v6879 = (i1)+8;
	i8 v6880 = (i8)(intptr_t)c02_s0132;
	i8 v6881 = (i8)(intptr_t)(f257_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6881)(v6880, v6879);

endsub:;
}
const i1 c02_s0133[] = { 0x2d,0 };
	void f261_Op1V(i8 /* op */, i1 /* width */);

// emit_115 workspace at ws+4088 length ws+0
void f380_emit_115(void) {

	i1 v6882 = (i1)+1;
	i8 v6883 = (i8)(intptr_t)c02_s0133;
	i8 v6884 = (i8)(intptr_t)(f261_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6884)(v6883, v6882);

endsub:;
}
const i1 c02_s0134[] = { 0x2d,0 };
	void f261_Op1V(i8 /* op */, i1 /* width */);

// emit_116 workspace at ws+4088 length ws+0
void f381_emit_116(void) {

	i1 v6885 = (i1)+2;
	i8 v6886 = (i8)(intptr_t)c02_s0134;
	i8 v6887 = (i8)(intptr_t)(f261_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6887)(v6886, v6885);

endsub:;
}
const i1 c02_s0135[] = { 0x2d,0 };
	void f261_Op1V(i8 /* op */, i1 /* width */);

// emit_117 workspace at ws+4088 length ws+0
void f382_emit_117(void) {

	i1 v6888 = (i1)+4;
	i8 v6889 = (i8)(intptr_t)c02_s0135;
	i8 v6890 = (i8)(intptr_t)(f261_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6890)(v6889, v6888);

endsub:;
}
const i1 c02_s0136[] = { 0x2d,0 };
	void f261_Op1V(i8 /* op */, i1 /* width */);

// emit_118 workspace at ws+4088 length ws+0
void f383_emit_118(void) {

	i1 v6891 = (i1)+8;
	i8 v6892 = (i8)(intptr_t)c02_s0136;
	i8 v6893 = (i8)(intptr_t)(f261_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6893)(v6892, v6891);

endsub:;
}
const i1 c02_s0137[] = { 0x7e,0 };
	void f261_Op1V(i8 /* op */, i1 /* width */);

// emit_119 workspace at ws+4088 length ws+0
void f384_emit_119(void) {

	i1 v6894 = (i1)+1;
	i8 v6895 = (i8)(intptr_t)c02_s0137;
	i8 v6896 = (i8)(intptr_t)(f261_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6896)(v6895, v6894);

endsub:;
}
const i1 c02_s0138[] = { 0x7e,0 };
	void f261_Op1V(i8 /* op */, i1 /* width */);

// emit_120 workspace at ws+4088 length ws+0
void f385_emit_120(void) {

	i1 v6897 = (i1)+2;
	i8 v6898 = (i8)(intptr_t)c02_s0138;
	i8 v6899 = (i8)(intptr_t)(f261_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6899)(v6898, v6897);

endsub:;
}
const i1 c02_s0139[] = { 0x7e,0 };
	void f261_Op1V(i8 /* op */, i1 /* width */);

// emit_121 workspace at ws+4088 length ws+0
void f386_emit_121(void) {

	i1 v6900 = (i1)+4;
	i8 v6901 = (i8)(intptr_t)c02_s0139;
	i8 v6902 = (i8)(intptr_t)(f261_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6902)(v6901, v6900);

endsub:;
}
const i1 c02_s013a[] = { 0x7e,0 };
	void f261_Op1V(i8 /* op */, i1 /* width */);

// emit_122 workspace at ws+4088 length ws+0
void f387_emit_122(void) {

	i1 v6903 = (i1)+8;
	i8 v6904 = (i8)(intptr_t)c02_s013a;
	i8 v6905 = (i8)(intptr_t)(f261_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6905)(v6904, v6903);

endsub:;
}
const i1 c02_s013b[] = { 0x69,0x31,0 };
const i1 c02_s013c[] = { 0x3c,0x3c,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_123 workspace at ws+4088 length ws+0
void f388_emit_123(void) {

	i1 v6906 = (i1)+1;
	i8 v6907 = (i8)(intptr_t)c02_s013b;
	i8 v6908 = (i8)(intptr_t)c02_s013c;
	i8 v6909 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6909)(v6908, v6907, v6906);

endsub:;
}
const i1 c02_s013d[] = { 0x69,0x32,0 };
const i1 c02_s013e[] = { 0x3c,0x3c,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_124 workspace at ws+4088 length ws+0
void f389_emit_124(void) {

	i1 v6910 = (i1)+2;
	i8 v6911 = (i8)(intptr_t)c02_s013d;
	i8 v6912 = (i8)(intptr_t)c02_s013e;
	i8 v6913 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6913)(v6912, v6911, v6910);

endsub:;
}
const i1 c02_s013f[] = { 0x69,0x34,0 };
const i1 c02_s0140[] = { 0x3c,0x3c,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_125 workspace at ws+4088 length ws+0
void f390_emit_125(void) {

	i1 v6914 = (i1)+4;
	i8 v6915 = (i8)(intptr_t)c02_s013f;
	i8 v6916 = (i8)(intptr_t)c02_s0140;
	i8 v6917 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6917)(v6916, v6915, v6914);

endsub:;
}
const i1 c02_s0141[] = { 0x69,0x38,0 };
const i1 c02_s0142[] = { 0x3c,0x3c,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_126 workspace at ws+4088 length ws+0
void f391_emit_126(void) {

	i1 v6918 = (i1)+8;
	i8 v6919 = (i8)(intptr_t)c02_s0141;
	i8 v6920 = (i8)(intptr_t)c02_s0142;
	i8 v6921 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6921)(v6920, v6919, v6918);

endsub:;
}
const i1 c02_s0143[] = { 0x69,0x31,0 };
const i1 c02_s0144[] = { 0x3e,0x3e,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_127 workspace at ws+4088 length ws+0
void f392_emit_127(void) {

	i1 v6922 = (i1)+1;
	i8 v6923 = (i8)(intptr_t)c02_s0143;
	i8 v6924 = (i8)(intptr_t)c02_s0144;
	i8 v6925 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6925)(v6924, v6923, v6922);

endsub:;
}
const i1 c02_s0145[] = { 0x69,0x32,0 };
const i1 c02_s0146[] = { 0x3e,0x3e,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_128 workspace at ws+4088 length ws+0
void f393_emit_128(void) {

	i1 v6926 = (i1)+2;
	i8 v6927 = (i8)(intptr_t)c02_s0145;
	i8 v6928 = (i8)(intptr_t)c02_s0146;
	i8 v6929 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6929)(v6928, v6927, v6926);

endsub:;
}
const i1 c02_s0147[] = { 0x69,0x34,0 };
const i1 c02_s0148[] = { 0x3e,0x3e,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_129 workspace at ws+4088 length ws+0
void f394_emit_129(void) {

	i1 v6930 = (i1)+4;
	i8 v6931 = (i8)(intptr_t)c02_s0147;
	i8 v6932 = (i8)(intptr_t)c02_s0148;
	i8 v6933 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6933)(v6932, v6931, v6930);

endsub:;
}
const i1 c02_s0149[] = { 0x69,0x38,0 };
const i1 c02_s014a[] = { 0x3e,0x3e,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_130 workspace at ws+4088 length ws+0
void f395_emit_130(void) {

	i1 v6934 = (i1)+8;
	i8 v6935 = (i8)(intptr_t)c02_s0149;
	i8 v6936 = (i8)(intptr_t)c02_s014a;
	i8 v6937 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6937)(v6936, v6935, v6934);

endsub:;
}
const i1 c02_s014b[] = { 0x73,0x31,0 };
const i1 c02_s014c[] = { 0x3e,0x3e,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_131 workspace at ws+4088 length ws+0
void f396_emit_131(void) {

	i1 v6938 = (i1)+1;
	i8 v6939 = (i8)(intptr_t)c02_s014b;
	i8 v6940 = (i8)(intptr_t)c02_s014c;
	i8 v6941 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6941)(v6940, v6939, v6938);

endsub:;
}
const i1 c02_s014d[] = { 0x73,0x32,0 };
const i1 c02_s014e[] = { 0x3e,0x3e,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_132 workspace at ws+4088 length ws+0
void f397_emit_132(void) {

	i1 v6942 = (i1)+2;
	i8 v6943 = (i8)(intptr_t)c02_s014d;
	i8 v6944 = (i8)(intptr_t)c02_s014e;
	i8 v6945 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6945)(v6944, v6943, v6942);

endsub:;
}
const i1 c02_s014f[] = { 0x73,0x34,0 };
const i1 c02_s0150[] = { 0x3e,0x3e,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_133 workspace at ws+4088 length ws+0
void f398_emit_133(void) {

	i1 v6946 = (i1)+4;
	i8 v6947 = (i8)(intptr_t)c02_s014f;
	i8 v6948 = (i8)(intptr_t)c02_s0150;
	i8 v6949 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6949)(v6948, v6947, v6946);

endsub:;
}
const i1 c02_s0151[] = { 0x73,0x38,0 };
const i1 c02_s0152[] = { 0x3e,0x3e,0 };
	void f262_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_134 workspace at ws+4088 length ws+0
void f399_emit_134(void) {

	i1 v6950 = (i1)+8;
	i8 v6951 = (i8)(intptr_t)c02_s0151;
	i8 v6952 = (i8)(intptr_t)c02_s0152;
	i8 v6953 = (i8)(intptr_t)(f262_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6953)(v6952, v6951, v6950);

endsub:;
}
const i1 c02_s0153[] = { 0x3d,0x3d,0 };
	void f263_Branch(i8 /* op */, i8 /* node */);

// emit_135 workspace at ws+4088 length ws+0
void f400_emit_135(void) {

	i8 v6954 = (i8)(intptr_t)(ws+4008);
	i8 v6955 = *(i8*)(intptr_t)v6954;
	i8 v6956 = v6955+(+16);
	i8 v6957 = *(i8*)(intptr_t)v6956;
	i8 v6958 = (i8)(intptr_t)c02_s0153;
	i8 v6959 = (i8)(intptr_t)(f263_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6959)(v6958, v6957);

endsub:;
}
const i1 c02_s0154[] = { 0x3d,0x3d,0 };
	void f263_Branch(i8 /* op */, i8 /* node */);

// emit_136 workspace at ws+4088 length ws+0
void f401_emit_136(void) {

	i8 v6960 = (i8)(intptr_t)(ws+4008);
	i8 v6961 = *(i8*)(intptr_t)v6960;
	i8 v6962 = v6961+(+16);
	i8 v6963 = *(i8*)(intptr_t)v6962;
	i8 v6964 = (i8)(intptr_t)c02_s0154;
	i8 v6965 = (i8)(intptr_t)(f263_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6965)(v6964, v6963);

endsub:;
}
const i1 c02_s0155[] = { 0x3d,0x3d,0 };
	void f263_Branch(i8 /* op */, i8 /* node */);

// emit_137 workspace at ws+4088 length ws+0
void f402_emit_137(void) {

	i8 v6966 = (i8)(intptr_t)(ws+4008);
	i8 v6967 = *(i8*)(intptr_t)v6966;
	i8 v6968 = v6967+(+16);
	i8 v6969 = *(i8*)(intptr_t)v6968;
	i8 v6970 = (i8)(intptr_t)c02_s0155;
	i8 v6971 = (i8)(intptr_t)(f263_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6971)(v6970, v6969);

endsub:;
}
const i1 c02_s0156[] = { 0x3d,0x3d,0 };
	void f263_Branch(i8 /* op */, i8 /* node */);

// emit_138 workspace at ws+4088 length ws+0
void f403_emit_138(void) {

	i8 v6972 = (i8)(intptr_t)(ws+4008);
	i8 v6973 = *(i8*)(intptr_t)v6972;
	i8 v6974 = v6973+(+16);
	i8 v6975 = *(i8*)(intptr_t)v6974;
	i8 v6976 = (i8)(intptr_t)c02_s0156;
	i8 v6977 = (i8)(intptr_t)(f263_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6977)(v6976, v6975);

endsub:;
}
const i1 c02_s0157[] = { 0x3c,0 };
	void f263_Branch(i8 /* op */, i8 /* node */);

// emit_139 workspace at ws+4088 length ws+0
void f404_emit_139(void) {

	i8 v6978 = (i8)(intptr_t)(ws+4008);
	i8 v6979 = *(i8*)(intptr_t)v6978;
	i8 v6980 = v6979+(+16);
	i8 v6981 = *(i8*)(intptr_t)v6980;
	i8 v6982 = (i8)(intptr_t)c02_s0157;
	i8 v6983 = (i8)(intptr_t)(f263_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6983)(v6982, v6981);

endsub:;
}
const i1 c02_s0158[] = { 0x3c,0 };
	void f263_Branch(i8 /* op */, i8 /* node */);

// emit_140 workspace at ws+4088 length ws+0
void f405_emit_140(void) {

	i8 v6984 = (i8)(intptr_t)(ws+4008);
	i8 v6985 = *(i8*)(intptr_t)v6984;
	i8 v6986 = v6985+(+16);
	i8 v6987 = *(i8*)(intptr_t)v6986;
	i8 v6988 = (i8)(intptr_t)c02_s0158;
	i8 v6989 = (i8)(intptr_t)(f263_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6989)(v6988, v6987);

endsub:;
}
const i1 c02_s0159[] = { 0x3c,0 };
	void f263_Branch(i8 /* op */, i8 /* node */);

// emit_141 workspace at ws+4088 length ws+0
void f406_emit_141(void) {

	i8 v6990 = (i8)(intptr_t)(ws+4008);
	i8 v6991 = *(i8*)(intptr_t)v6990;
	i8 v6992 = v6991+(+16);
	i8 v6993 = *(i8*)(intptr_t)v6992;
	i8 v6994 = (i8)(intptr_t)c02_s0159;
	i8 v6995 = (i8)(intptr_t)(f263_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6995)(v6994, v6993);

endsub:;
}
const i1 c02_s015a[] = { 0x3c,0 };
	void f263_Branch(i8 /* op */, i8 /* node */);

// emit_142 workspace at ws+4088 length ws+0
void f407_emit_142(void) {

	i8 v6996 = (i8)(intptr_t)(ws+4008);
	i8 v6997 = *(i8*)(intptr_t)v6996;
	i8 v6998 = v6997+(+16);
	i8 v6999 = *(i8*)(intptr_t)v6998;
	i8 v7000 = (i8)(intptr_t)c02_s015a;
	i8 v7001 = (i8)(intptr_t)(f263_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v7001)(v7000, v6999);

endsub:;
}
const i1 c02_s015b[] = { 0x3c,0 };
	void f264_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_143 workspace at ws+4088 length ws+0
void f408_emit_143(void) {

	i8 v7002 = (i8)(intptr_t)(ws+4008);
	i8 v7003 = *(i8*)(intptr_t)v7002;
	i8 v7004 = v7003+(+16);
	i8 v7005 = *(i8*)(intptr_t)v7004;
	i1 v7006 = (i1)+1;
	i8 v7007 = (i8)(intptr_t)c02_s015b;
	i8 v7008 = (i8)(intptr_t)(f264_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v7008)(v7007, v7006, v7005);

endsub:;
}
const i1 c02_s015c[] = { 0x3c,0 };
	void f264_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_144 workspace at ws+4088 length ws+0
void f409_emit_144(void) {

	i8 v7009 = (i8)(intptr_t)(ws+4008);
	i8 v7010 = *(i8*)(intptr_t)v7009;
	i8 v7011 = v7010+(+16);
	i8 v7012 = *(i8*)(intptr_t)v7011;
	i1 v7013 = (i1)+2;
	i8 v7014 = (i8)(intptr_t)c02_s015c;
	i8 v7015 = (i8)(intptr_t)(f264_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v7015)(v7014, v7013, v7012);

endsub:;
}
const i1 c02_s015d[] = { 0x3c,0 };
	void f264_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_145 workspace at ws+4088 length ws+0
void f410_emit_145(void) {

	i8 v7016 = (i8)(intptr_t)(ws+4008);
	i8 v7017 = *(i8*)(intptr_t)v7016;
	i8 v7018 = v7017+(+16);
	i8 v7019 = *(i8*)(intptr_t)v7018;
	i1 v7020 = (i1)+4;
	i8 v7021 = (i8)(intptr_t)c02_s015d;
	i8 v7022 = (i8)(intptr_t)(f264_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v7022)(v7021, v7020, v7019);

endsub:;
}
const i1 c02_s015e[] = { 0x3c,0 };
	void f264_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_146 workspace at ws+4088 length ws+0
void f411_emit_146(void) {

	i8 v7023 = (i8)(intptr_t)(ws+4008);
	i8 v7024 = *(i8*)(intptr_t)v7023;
	i8 v7025 = v7024+(+16);
	i8 v7026 = *(i8*)(intptr_t)v7025;
	i1 v7027 = (i1)+8;
	i8 v7028 = (i8)(intptr_t)c02_s015e;
	i8 v7029 = (i8)(intptr_t)(f264_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v7029)(v7028, v7027, v7026);

endsub:;
}
	void f266_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_151 workspace at ws+4088 length ws+0
void f412_emit_151(void) {

	i8 v7030 = (i8)(intptr_t)(ws+4016);
	i8 v7031 = *(i8*)(intptr_t)v7030;
	i4 v7032 = *(i4*)(intptr_t)v7031;
	i4 v7033 = v7032&(+255);
	i8 v7034 = (i8)(intptr_t)(ws+4016);
	i8 v7035 = *(i8*)(intptr_t)v7034;
	i8 v7036 = v7035+(+4);
	i2 v7037 = *(i2*)(intptr_t)v7036;
	i8 v7038 = (i8)(intptr_t)(f266_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v7038)(v7037, v7033);

endsub:;
}
	void f266_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_152 workspace at ws+4088 length ws+0
void f413_emit_152(void) {

	i8 v7039 = (i8)(intptr_t)(ws+4016);
	i8 v7040 = *(i8*)(intptr_t)v7039;
	i4 v7041 = *(i4*)(intptr_t)v7040;
	i4 v7042 = v7041&(+65535);
	i8 v7043 = (i8)(intptr_t)(ws+4016);
	i8 v7044 = *(i8*)(intptr_t)v7043;
	i8 v7045 = v7044+(+4);
	i2 v7046 = *(i2*)(intptr_t)v7045;
	i8 v7047 = (i8)(intptr_t)(f266_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v7047)(v7046, v7042);

endsub:;
}
	void f266_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_153 workspace at ws+4088 length ws+0
void f414_emit_153(void) {

	i8 v7048 = (i8)(intptr_t)(ws+4016);
	i8 v7049 = *(i8*)(intptr_t)v7048;
	i4 v7050 = *(i4*)(intptr_t)v7049;
	i4 v7051 = v7050&(-1);
	i8 v7052 = (i8)(intptr_t)(ws+4016);
	i8 v7053 = *(i8*)(intptr_t)v7052;
	i8 v7054 = v7053+(+4);
	i2 v7055 = *(i2*)(intptr_t)v7054;
	i8 v7056 = (i8)(intptr_t)(f266_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v7056)(v7055, v7051);

endsub:;
}
	void f266_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_154 workspace at ws+4088 length ws+0
void f415_emit_154(void) {

	i8 v7057 = (i8)(intptr_t)(ws+4016);
	i8 v7058 = *(i8*)(intptr_t)v7057;
	i4 v7059 = *(i4*)(intptr_t)v7058;
	i8 v7060 = (i8)(intptr_t)(ws+4016);
	i8 v7061 = *(i8*)(intptr_t)v7060;
	i8 v7062 = v7061+(+4);
	i2 v7063 = *(i2*)(intptr_t)v7062;
	i8 v7064 = (i8)(intptr_t)(f266_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v7064)(v7063, v7059);

endsub:;
}

// emit_155 workspace at ws+4088 length ws+0
void f416_emit_155(void) {

	i8 v7065 = (i8)(intptr_t)(ws+2040);
	i1 v7066 = *(i1*)(intptr_t)v7065;
	i1 v7067 = v7066+(-1);
	i8 v7068 = (i8)(intptr_t)(ws+2040);
	*(i1*)(intptr_t)v7068 = v7067;

endsub:;
}

// emit_156 workspace at ws+4088 length ws+0
void f417_emit_156(void) {

	i8 v7069 = (i8)(intptr_t)(ws+2040);
	i1 v7070 = *(i1*)(intptr_t)v7069;
	i1 v7071 = v7070+(-1);
	i8 v7072 = (i8)(intptr_t)(ws+2040);
	*(i1*)(intptr_t)v7072 = v7071;

endsub:;
}

// emit_157 workspace at ws+4088 length ws+0
void f418_emit_157(void) {

	i8 v7073 = (i8)(intptr_t)(ws+2040);
	i1 v7074 = *(i1*)(intptr_t)v7073;
	i1 v7075 = v7074+(-1);
	i8 v7076 = (i8)(intptr_t)(ws+2040);
	*(i1*)(intptr_t)v7076 = v7075;

endsub:;
}

// emit_158 workspace at ws+4088 length ws+0
void f419_emit_158(void) {

	i8 v7077 = (i8)(intptr_t)(ws+2040);
	i1 v7078 = *(i1*)(intptr_t)v7077;
	i1 v7079 = v7078+(-1);
	i8 v7080 = (i8)(intptr_t)(ws+2040);
	*(i1*)(intptr_t)v7080 = v7079;

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_159 workspace at ws+4088 length ws+0
void f420_emit_159(void) {

	i1 v7081 = (i1)+1;
	i1 v7082 = (i1)+2;
	i8 v7083 = (i8)(intptr_t)(ws+4016);
	i8 v7084 = *(i8*)(intptr_t)v7083;
	i1 v7085 = *(i1*)(intptr_t)v7084;
	i8 v7086 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7086)(v7085, v7082, v7081);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_160 workspace at ws+4088 length ws+0
void f421_emit_160(void) {

	i1 v7087 = (i1)+1;
	i1 v7088 = (i1)+4;
	i8 v7089 = (i8)(intptr_t)(ws+4016);
	i8 v7090 = *(i8*)(intptr_t)v7089;
	i1 v7091 = *(i1*)(intptr_t)v7090;
	i8 v7092 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7092)(v7091, v7088, v7087);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_161 workspace at ws+4088 length ws+0
void f422_emit_161(void) {

	i1 v7093 = (i1)+1;
	i1 v7094 = (i1)+8;
	i8 v7095 = (i8)(intptr_t)(ws+4016);
	i8 v7096 = *(i8*)(intptr_t)v7095;
	i1 v7097 = *(i1*)(intptr_t)v7096;
	i8 v7098 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7098)(v7097, v7094, v7093);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_162 workspace at ws+4088 length ws+0
void f423_emit_162(void) {

	i1 v7099 = (i1)+2;
	i1 v7100 = (i1)+1;
	i8 v7101 = (i8)(intptr_t)(ws+4016);
	i8 v7102 = *(i8*)(intptr_t)v7101;
	i1 v7103 = *(i1*)(intptr_t)v7102;
	i8 v7104 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7104)(v7103, v7100, v7099);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_163 workspace at ws+4088 length ws+0
void f424_emit_163(void) {

	i1 v7105 = (i1)+2;
	i1 v7106 = (i1)+4;
	i8 v7107 = (i8)(intptr_t)(ws+4016);
	i8 v7108 = *(i8*)(intptr_t)v7107;
	i1 v7109 = *(i1*)(intptr_t)v7108;
	i8 v7110 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7110)(v7109, v7106, v7105);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_164 workspace at ws+4088 length ws+0
void f425_emit_164(void) {

	i1 v7111 = (i1)+2;
	i1 v7112 = (i1)+8;
	i8 v7113 = (i8)(intptr_t)(ws+4016);
	i8 v7114 = *(i8*)(intptr_t)v7113;
	i1 v7115 = *(i1*)(intptr_t)v7114;
	i8 v7116 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7116)(v7115, v7112, v7111);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_165 workspace at ws+4088 length ws+0
void f426_emit_165(void) {

	i1 v7117 = (i1)+4;
	i1 v7118 = (i1)+1;
	i8 v7119 = (i8)(intptr_t)(ws+4016);
	i8 v7120 = *(i8*)(intptr_t)v7119;
	i1 v7121 = *(i1*)(intptr_t)v7120;
	i8 v7122 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7122)(v7121, v7118, v7117);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_166 workspace at ws+4088 length ws+0
void f427_emit_166(void) {

	i1 v7123 = (i1)+4;
	i1 v7124 = (i1)+2;
	i8 v7125 = (i8)(intptr_t)(ws+4016);
	i8 v7126 = *(i8*)(intptr_t)v7125;
	i1 v7127 = *(i1*)(intptr_t)v7126;
	i8 v7128 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7128)(v7127, v7124, v7123);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_167 workspace at ws+4088 length ws+0
void f428_emit_167(void) {

	i1 v7129 = (i1)+4;
	i1 v7130 = (i1)+8;
	i8 v7131 = (i8)(intptr_t)(ws+4016);
	i8 v7132 = *(i8*)(intptr_t)v7131;
	i1 v7133 = *(i1*)(intptr_t)v7132;
	i8 v7134 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7134)(v7133, v7130, v7129);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_168 workspace at ws+4088 length ws+0
void f429_emit_168(void) {

	i1 v7135 = (i1)+8;
	i1 v7136 = (i1)+1;
	i8 v7137 = (i8)(intptr_t)(ws+4016);
	i8 v7138 = *(i8*)(intptr_t)v7137;
	i1 v7139 = *(i1*)(intptr_t)v7138;
	i8 v7140 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7140)(v7139, v7136, v7135);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_169 workspace at ws+4088 length ws+0
void f430_emit_169(void) {

	i1 v7141 = (i1)+8;
	i1 v7142 = (i1)+2;
	i8 v7143 = (i8)(intptr_t)(ws+4016);
	i8 v7144 = *(i8*)(intptr_t)v7143;
	i1 v7145 = *(i1*)(intptr_t)v7144;
	i8 v7146 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7146)(v7145, v7142, v7141);

endsub:;
}
	void f267_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_170 workspace at ws+4088 length ws+0
void f431_emit_170(void) {

	i1 v7147 = (i1)+8;
	i1 v7148 = (i1)+4;
	i8 v7149 = (i8)(intptr_t)(ws+4016);
	i8 v7150 = *(i8*)(intptr_t)v7149;
	i1 v7151 = *(i1*)(intptr_t)v7150;
	i8 v7152 = (i8)(intptr_t)(f267_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7152)(v7151, v7148, v7147);

endsub:;
}
	void f247_Push(i2* /* vid */);
const i1 c02_s015f[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f178_E(i8 /* text */);
	void f180_E_u16(i2 /* value */);
const i1 c02_s0160[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
	void f178_E(i8 /* text */);
	void f169_E_b8(i1 /* byte */);
	void f169_E_b8(i1 /* byte */);
	void f268_E_string(i2* /* sid */, i8 /* text */);
	void f187_E_h16(i2 /* value */);
const i1 c02_s0161[] = { 0x3b,0x0a,0 };
	void f178_E(i8 /* text */);

// emit_171 workspace at ws+4088 length ws+2
void f432_emit_171(void) {

	i8 v7153 = (i8)(intptr_t)(f247_Push);
	i2 v7154;

	((void(*)(i2* /* vid */))(intptr_t)v7153)(&v7154);
	i8 v7155 = (i8)(intptr_t)(ws+4088);
	*(i2*)(intptr_t)v7155 = v7154;

	i8 v7156 = (i8)(intptr_t)c02_s015f;
	i8 v7157 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7157)(v7156);

	i8 v7158 = (i8)(intptr_t)(ws+4088);
	i2 v7159 = *(i2*)(intptr_t)v7158;
	i8 v7160 = (i8)(intptr_t)(f180_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v7160)(v7159);

	i8 v7161 = (i8)(intptr_t)c02_s0160;
	i8 v7162 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7162)(v7161);

	i1 v7163 = (i1)+3;
	i8 v7164 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7164)(v7163);

	i1 v7165 = (i1)+115;
	i8 v7166 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7166)(v7165);

	i8 v7167 = (i8)(intptr_t)(ws+4016);
	i8 v7168 = *(i8*)(intptr_t)v7167;
	i8 v7169 = *(i8*)(intptr_t)v7168;
	i8 v7170 = (i8)(intptr_t)(f268_E_string);
	i2 v7171;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v7170)(&v7171, v7169);
	i8 v7172 = (i8)(intptr_t)(f187_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v7172)(v7171);

	i8 v7173 = (i8)(intptr_t)c02_s0161;
	i8 v7174 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7174)(v7173);

endsub:;
}
	void f192_EmitterOpenStream(i8 /* subr */);
const i1 c02_s0162[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
const i1 c02_s0163[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0x2f,0x2f,0x20,0 };
	void f178_E(i8 /* text */);
	void f178_E(i8 /* text */);
	void f175_E_nl(void);

// emit_172 workspace at ws+4088 length ws+0
void f433_emit_172(void) {

	i8 v7175 = (i8)(intptr_t)(ws+40);
	i8 v7176 = *(i8*)(intptr_t)v7175;
	i8 v7177 = (i8)(intptr_t)(f192_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v7177)(v7176);

	i8 v7178 = (i8)(intptr_t)c02_s0162;
	i8 v7179 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7179)(v7178);

	i8 v7180 = (i8)(intptr_t)(ws+4016);
	i8 v7181 = *(i8*)(intptr_t)v7180;
	i8 v7182 = *(i8*)(intptr_t)v7181;
	i8 v7183 = *(i8*)(intptr_t)v7182;
	i8 v7184 = v7183+(+24);
	i8 v7185 = *(i8*)(intptr_t)v7184;
	i8 v7186 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7186)(v7185);

	i8 v7187 = (i8)(intptr_t)c02_s0163;
	i8 v7188 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7188)(v7187);

	i8 v7189 = (i8)(intptr_t)(ws+4016);
	i8 v7190 = *(i8*)(intptr_t)v7189;
	i8 v7191 = *(i8*)(intptr_t)v7190;
	i8 v7192 = v7191+(+8);
	i8 v7193 = *(i8*)(intptr_t)v7192;
	i8 v7194 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7194)(v7193);

	i8 v7195 = (i8)(intptr_t)(f175_E_nl);

	((void(*)(void))(intptr_t)v7195)();

	i1 v7196 = (i1)+0;
	i8 v7197 = (i8)(intptr_t)(ws+2054);
	*(i1*)(intptr_t)v7197 = v7196;

endsub:;
}
	void f270_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_173 workspace at ws+4088 length ws+0
void f434_emit_173(void) {

	i8 v7198 = (i8)(intptr_t)(ws+4016);
	i8 v7199 = *(i8*)(intptr_t)v7198;
	i1 v7200 = (i1)+1;
	i8 v7201 = (i8)(intptr_t)(f270_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v7201)(v7200, v7199);

endsub:;
}
	void f270_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_174 workspace at ws+4088 length ws+0
void f435_emit_174(void) {

	i8 v7202 = (i8)(intptr_t)(ws+4016);
	i8 v7203 = *(i8*)(intptr_t)v7202;
	i1 v7204 = (i1)+2;
	i8 v7205 = (i8)(intptr_t)(f270_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v7205)(v7204, v7203);

endsub:;
}
	void f270_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_175 workspace at ws+4088 length ws+0
void f436_emit_175(void) {

	i8 v7206 = (i8)(intptr_t)(ws+4016);
	i8 v7207 = *(i8*)(intptr_t)v7206;
	i1 v7208 = (i1)+4;
	i8 v7209 = (i8)(intptr_t)(f270_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v7209)(v7208, v7207);

endsub:;
}
	void f270_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_176 workspace at ws+4088 length ws+0
void f437_emit_176(void) {

	i8 v7210 = (i8)(intptr_t)(ws+4016);
	i8 v7211 = *(i8*)(intptr_t)v7210;
	i1 v7212 = (i1)+8;
	i8 v7213 = (i8)(intptr_t)(f270_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v7213)(v7212, v7211);

endsub:;
}
	void f271_CheckBufferAlignment(void);
const i1 c02_s0164[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f178_E(i8 /* text */);
	void f243_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0165[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f178_E(i8 /* text */);

// emit_177 workspace at ws+4088 length ws+0
void f438_emit_177(void) {

	i8 v7214 = (i8)(intptr_t)(f271_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v7214)();

	i8 v7215 = (i8)(intptr_t)c02_s0164;
	i8 v7216 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7216)(v7215);

	i8 v7217 = (i8)(intptr_t)(ws+4016);
	i8 v7218 = *(i8*)(intptr_t)v7217;
	i8 v7219 = *(i8*)(intptr_t)v7218;
	i8 v7220 = (i8)(intptr_t)(ws+4016);
	i8 v7221 = *(i8*)(intptr_t)v7220;
	i8 v7222 = v7221+(+8);
	i2 v7223 = *(i2*)(intptr_t)v7222;
	i8 v7224 = (i8)(intptr_t)(f243_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v7224)(v7223, v7219);

	i8 v7225 = (i8)(intptr_t)c02_s0165;
	i8 v7226 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7226)(v7225);

endsub:;
}
	void f271_CheckBufferAlignment(void);
const i1 c02_s0166[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f178_E(i8 /* text */);
	void f169_E_b8(i1 /* byte */);
	void f169_E_b8(i1 /* byte */);
	void f268_E_string(i2* /* sid */, i8 /* text */);
	void f187_E_h16(i2 /* value */);
const i1 c02_s0167[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f178_E(i8 /* text */);

// emit_178 workspace at ws+4088 length ws+0
void f439_emit_178(void) {

	i8 v7227 = (i8)(intptr_t)(f271_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v7227)();

	i8 v7228 = (i8)(intptr_t)c02_s0166;
	i8 v7229 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7229)(v7228);

	i1 v7230 = (i1)+3;
	i8 v7231 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7231)(v7230);

	i1 v7232 = (i1)+115;
	i8 v7233 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7233)(v7232);

	i8 v7234 = (i8)(intptr_t)(ws+4016);
	i8 v7235 = *(i8*)(intptr_t)v7234;
	i8 v7236 = *(i8*)(intptr_t)v7235;
	i8 v7237 = (i8)(intptr_t)(f268_E_string);
	i2 v7238;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v7237)(&v7238, v7236);
	i8 v7239 = (i8)(intptr_t)(f187_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v7239)(v7238);

	i8 v7240 = (i8)(intptr_t)c02_s0167;
	i8 v7241 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7241)(v7240);

endsub:;
}
	void f269_FlushInitialiserBuffer(void);
const i1 c02_s0168[] = { 0x7d,0x3b,0x0a,0 };
	void f178_E(i8 /* text */);
	void f193_EmitterCloseStream(void);

// emit_179 workspace at ws+4088 length ws+0
void f440_emit_179(void) {

	i8 v7242 = (i8)(intptr_t)(f269_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v7242)();

	i8 v7243 = (i8)(intptr_t)c02_s0168;
	i8 v7244 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7244)(v7243);

	i8 v7245 = (i8)(intptr_t)(f193_EmitterCloseStream);

	((void(*)(void))(intptr_t)v7245)();

endsub:;
}
	void f174_E_tab(void);

// emit_182 workspace at ws+4088 length ws+0
void f441_emit_182(void) {

	i8 v7246 = (i8)(intptr_t)(f174_E_tab);

	((void(*)(void))(intptr_t)v7246)();

endsub:;
}
	void f178_E(i8 /* text */);
	void f172_E_space(void);

// emit_183 workspace at ws+4088 length ws+0
void f442_emit_183(void) {

	i8 v7247 = (i8)(intptr_t)(ws+4016);
	i8 v7248 = *(i8*)(intptr_t)v7247;
	i8 v7249 = *(i8*)(intptr_t)v7248;
	i8 v7250 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7250)(v7249);

	i8 v7251 = (i8)(intptr_t)(f172_E_space);

	((void(*)(void))(intptr_t)v7251)();

endsub:;
}
const i1 c02_s0169[] = { 0x2a,0x28,0x69,0 };
	void f178_E(i8 /* text */);
	void f181_E_u8(i1 /* value */);
const i1 c02_s016a[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f178_E(i8 /* text */);
	void f243_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s016b[] = { 0x29,0 };
	void f178_E(i8 /* text */);
	void f190_E_subref(i8 /* subr */);
	void f172_E_space(void);

// emit_184 workspace at ws+4088 length ws+0
void f443_emit_184(void) {

	i8 v7252 = (i8)(intptr_t)(ws+4016);
	i8 v7253 = *(i8*)(intptr_t)v7252;
	i8 v7254 = *(i8*)(intptr_t)v7253;
	i8 v7255 = v7254+(+32);
	i1 v7256 = *(i1*)(intptr_t)v7255;

	if (v7256 != +28) goto c02_04e7;

	i8 v7257 = (i8)(intptr_t)c02_s0169;
	i8 v7258 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7258)(v7257);

	i8 v7259 = (i8)(intptr_t)(ws+4016);
	i8 v7260 = *(i8*)(intptr_t)v7259;
	i8 v7261 = *(i8*)(intptr_t)v7260;
	i8 v7262 = *(i8*)(intptr_t)v7261;
	i8 v7263 = *(i8*)(intptr_t)v7262;
	i8 v7264 = v7263+(+48);
	i2 v7265 = *(i2*)(intptr_t)v7264;
	i1 v7266 = v7265;
	i8 v7267 = (i8)(intptr_t)(f181_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v7267)(v7266);

	i8 v7268 = (i8)(intptr_t)c02_s016a;
	i8 v7269 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7269)(v7268);

	i8 v7270 = (i8)(intptr_t)(ws+4016);
	i8 v7271 = *(i8*)(intptr_t)v7270;
	i8 v7272 = *(i8*)(intptr_t)v7271;
	i2 v7273 = (i2)+0;
	i8 v7274 = (i8)(intptr_t)(f243_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v7274)(v7273, v7272);

	i8 v7275 = (i8)(intptr_t)c02_s016b;
	i8 v7276 = (i8)(intptr_t)(f178_E);

	((void(*)(i8 /* text */))(intptr_t)v7276)(v7275);

	goto c02_04e6;

c02_04e7:;

	if (v7256 != +30) goto c02_04e8;

	i8 v7277 = (i8)(intptr_t)(ws+4016);
	i8 v7278 = *(i8*)(intptr_t)v7277;
	i8 v7279 = *(i8*)(intptr_t)v7278;
	i8 v7280 = *(i8*)(intptr_t)v7279;
	i8 v7281 = *(i8*)(intptr_t)v7280;
	i8 v7282 = (i8)(intptr_t)(f190_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v7282)(v7281);

c02_04e8:;

c02_04e6:;


	i8 v7283 = (i8)(intptr_t)(f172_E_space);

	((void(*)(void))(intptr_t)v7283)();

endsub:;
}
	void f169_E_b8(i1 /* byte */);
	void f184_E_i32(i4 /* value */);
	void f169_E_b8(i1 /* byte */);

// emit_185 workspace at ws+4088 length ws+0
void f444_emit_185(void) {

	i1 v7284 = (i1)+40;
	i8 v7285 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7285)(v7284);

	i8 v7286 = (i8)(intptr_t)(ws+4016);
	i8 v7287 = *(i8*)(intptr_t)v7286;
	i4 v7288 = *(i4*)(intptr_t)v7287;
	i8 v7289 = (i8)(intptr_t)(f184_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v7289)(v7288);

	i1 v7290 = (i1)+41;
	i8 v7291 = (i8)(intptr_t)(f169_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7291)(v7290);

endsub:;
}
	void f175_E_nl(void);

// emit_186 workspace at ws+4088 length ws+0
void f445_emit_186(void) {

	i8 v7292 = (i8)(intptr_t)(f175_E_nl);

	((void(*)(void))(intptr_t)v7292)();

endsub:;
}

// nop_emitter workspace at ws+4088 length ws+0
void f446_nop_emitter(void) {

endsub:;
}
	void f275_emit_0(void);
	void f276_emit_1(void);
	void f277_emit_2(void);
	void f278_emit_3(void);
	void f279_emit_4(void);
	void f280_emit_5(void);
	void f281_emit_6(void);
	void f282_emit_7(void);
	void f283_emit_8(void);
	void f284_emit_9(void);
	void f285_emit_10(void);
	void f286_emit_11(void);
	void f287_emit_12(void);
	void f288_emit_13(void);
	void f289_emit_14(void);
	void f290_emit_15(void);
	void f291_emit_16(void);
	void f292_emit_17(void);
	void f293_emit_18(void);
	void f294_emit_19(void);
	void f295_emit_20(void);
	void f296_emit_21(void);
	void f297_emit_22(void);
	void f298_emit_23(void);
	void f299_emit_24(void);
	void f300_emit_25(void);
	void f301_emit_26(void);
	void f302_emit_27(void);
	void f303_emit_28(void);
	void f304_emit_29(void);
	void f305_emit_30(void);
	void f306_emit_31(void);
	void f307_emit_32(void);
	void f308_emit_33(void);
	void f309_emit_34(void);
	void f310_emit_35(void);
	void f311_emit_36(void);
	void f312_emit_37(void);
	void f313_emit_38(void);
	void f314_emit_39(void);
	void f315_emit_40(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f316_emit_43(void);
	void f317_emit_44(void);
	void f318_emit_45(void);
	void f319_emit_46(void);
	void f321_emit_47(void);
	void f322_emit_48(void);
	void f323_emit_49(void);
	void f324_emit_50(void);
	void f325_emit_51(void);
	void f326_emit_52(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f327_emit_62(void);
	void f328_emit_63(void);
	void f329_emit_64(void);
	void f330_emit_65(void);
	void f331_emit_66(void);
	void f332_emit_67(void);
	void f333_emit_68(void);
	void f334_emit_69(void);
	void f335_emit_70(void);
	void f336_emit_71(void);
	void f337_emit_72(void);
	void f338_emit_73(void);
	void f339_emit_74(void);
	void f340_emit_75(void);
	void f341_emit_76(void);
	void f342_emit_77(void);
	void f343_emit_78(void);
	void f344_emit_79(void);
	void f345_emit_80(void);
	void f346_emit_81(void);
	void f347_emit_82(void);
	void f348_emit_83(void);
	void f349_emit_84(void);
	void f350_emit_85(void);
	void f351_emit_86(void);
	void f352_emit_87(void);
	void f353_emit_88(void);
	void f354_emit_89(void);
	void f355_emit_90(void);
	void f356_emit_91(void);
	void f357_emit_92(void);
	void f358_emit_93(void);
	void f359_emit_94(void);
	void f360_emit_95(void);
	void f361_emit_96(void);
	void f362_emit_97(void);
	void f363_emit_98(void);
	void f364_emit_99(void);
	void f365_emit_100(void);
	void f366_emit_101(void);
	void f367_emit_102(void);
	void f368_emit_103(void);
	void f369_emit_104(void);
	void f370_emit_105(void);
	void f371_emit_106(void);
	void f372_emit_107(void);
	void f373_emit_108(void);
	void f374_emit_109(void);
	void f375_emit_110(void);
	void f376_emit_111(void);
	void f377_emit_112(void);
	void f378_emit_113(void);
	void f379_emit_114(void);
	void f380_emit_115(void);
	void f381_emit_116(void);
	void f382_emit_117(void);
	void f383_emit_118(void);
	void f384_emit_119(void);
	void f385_emit_120(void);
	void f386_emit_121(void);
	void f387_emit_122(void);
	void f388_emit_123(void);
	void f389_emit_124(void);
	void f390_emit_125(void);
	void f391_emit_126(void);
	void f392_emit_127(void);
	void f393_emit_128(void);
	void f394_emit_129(void);
	void f395_emit_130(void);
	void f396_emit_131(void);
	void f397_emit_132(void);
	void f398_emit_133(void);
	void f399_emit_134(void);
	void f400_emit_135(void);
	void f401_emit_136(void);
	void f402_emit_137(void);
	void f403_emit_138(void);
	void f404_emit_139(void);
	void f405_emit_140(void);
	void f406_emit_141(void);
	void f407_emit_142(void);
	void f408_emit_143(void);
	void f409_emit_144(void);
	void f410_emit_145(void);
	void f411_emit_146(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f412_emit_151(void);
	void f413_emit_152(void);
	void f414_emit_153(void);
	void f415_emit_154(void);
	void f416_emit_155(void);
	void f417_emit_156(void);
	void f418_emit_157(void);
	void f419_emit_158(void);
	void f420_emit_159(void);
	void f421_emit_160(void);
	void f422_emit_161(void);
	void f423_emit_162(void);
	void f424_emit_163(void);
	void f425_emit_164(void);
	void f426_emit_165(void);
	void f427_emit_166(void);
	void f428_emit_167(void);
	void f429_emit_168(void);
	void f430_emit_169(void);
	void f431_emit_170(void);
	void f432_emit_171(void);
	void f433_emit_172(void);
	void f434_emit_173(void);
	void f435_emit_174(void);
	void f436_emit_175(void);
	void f437_emit_176(void);
	void f438_emit_177(void);
	void f439_emit_178(void);
	void f440_emit_179(void);
	void f446_nop_emitter(void);
	void f446_nop_emitter(void);
	void f441_emit_182(void);
	void f442_emit_183(void);
	void f443_emit_184(void);
	void f444_emit_185(void);
	void f445_emit_186(void);
static data c02_a4e9[] = { // emitters

	{ .ptr = (void*)f275_emit_0 },

	{ .ptr = (void*)f276_emit_1 },

	{ .ptr = (void*)f277_emit_2 },

	{ .ptr = (void*)f278_emit_3 },

	{ .ptr = (void*)f279_emit_4 },

	{ .ptr = (void*)f280_emit_5 },

	{ .ptr = (void*)f281_emit_6 },

	{ .ptr = (void*)f282_emit_7 },

	{ .ptr = (void*)f283_emit_8 },

	{ .ptr = (void*)f284_emit_9 },

	{ .ptr = (void*)f285_emit_10 },

	{ .ptr = (void*)f286_emit_11 },

	{ .ptr = (void*)f287_emit_12 },

	{ .ptr = (void*)f288_emit_13 },

	{ .ptr = (void*)f289_emit_14 },

	{ .ptr = (void*)f290_emit_15 },

	{ .ptr = (void*)f291_emit_16 },

	{ .ptr = (void*)f292_emit_17 },

	{ .ptr = (void*)f293_emit_18 },

	{ .ptr = (void*)f294_emit_19 },

	{ .ptr = (void*)f295_emit_20 },

	{ .ptr = (void*)f296_emit_21 },

	{ .ptr = (void*)f297_emit_22 },

	{ .ptr = (void*)f298_emit_23 },

	{ .ptr = (void*)f299_emit_24 },

	{ .ptr = (void*)f300_emit_25 },

	{ .ptr = (void*)f301_emit_26 },

	{ .ptr = (void*)f302_emit_27 },

	{ .ptr = (void*)f303_emit_28 },

	{ .ptr = (void*)f304_emit_29 },

	{ .ptr = (void*)f305_emit_30 },

	{ .ptr = (void*)f306_emit_31 },

	{ .ptr = (void*)f307_emit_32 },

	{ .ptr = (void*)f308_emit_33 },

	{ .ptr = (void*)f309_emit_34 },

	{ .ptr = (void*)f310_emit_35 },

	{ .ptr = (void*)f311_emit_36 },

	{ .ptr = (void*)f312_emit_37 },

	{ .ptr = (void*)f313_emit_38 },

	{ .ptr = (void*)f314_emit_39 },

	{ .ptr = (void*)f315_emit_40 },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f316_emit_43 },

	{ .ptr = (void*)f317_emit_44 },

	{ .ptr = (void*)f318_emit_45 },

	{ .ptr = (void*)f319_emit_46 },

	{ .ptr = (void*)f321_emit_47 },

	{ .ptr = (void*)f322_emit_48 },

	{ .ptr = (void*)f323_emit_49 },

	{ .ptr = (void*)f324_emit_50 },

	{ .ptr = (void*)f325_emit_51 },

	{ .ptr = (void*)f326_emit_52 },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f327_emit_62 },

	{ .ptr = (void*)f328_emit_63 },

	{ .ptr = (void*)f329_emit_64 },

	{ .ptr = (void*)f330_emit_65 },

	{ .ptr = (void*)f331_emit_66 },

	{ .ptr = (void*)f332_emit_67 },

	{ .ptr = (void*)f333_emit_68 },

	{ .ptr = (void*)f334_emit_69 },

	{ .ptr = (void*)f335_emit_70 },

	{ .ptr = (void*)f336_emit_71 },

	{ .ptr = (void*)f337_emit_72 },

	{ .ptr = (void*)f338_emit_73 },

	{ .ptr = (void*)f339_emit_74 },

	{ .ptr = (void*)f340_emit_75 },

	{ .ptr = (void*)f341_emit_76 },

	{ .ptr = (void*)f342_emit_77 },

	{ .ptr = (void*)f343_emit_78 },

	{ .ptr = (void*)f344_emit_79 },

	{ .ptr = (void*)f345_emit_80 },

	{ .ptr = (void*)f346_emit_81 },

	{ .ptr = (void*)f347_emit_82 },

	{ .ptr = (void*)f348_emit_83 },

	{ .ptr = (void*)f349_emit_84 },

	{ .ptr = (void*)f350_emit_85 },

	{ .ptr = (void*)f351_emit_86 },

	{ .ptr = (void*)f352_emit_87 },

	{ .ptr = (void*)f353_emit_88 },

	{ .ptr = (void*)f354_emit_89 },

	{ .ptr = (void*)f355_emit_90 },

	{ .ptr = (void*)f356_emit_91 },

	{ .ptr = (void*)f357_emit_92 },

	{ .ptr = (void*)f358_emit_93 },

	{ .ptr = (void*)f359_emit_94 },

	{ .ptr = (void*)f360_emit_95 },

	{ .ptr = (void*)f361_emit_96 },

	{ .ptr = (void*)f362_emit_97 },

	{ .ptr = (void*)f363_emit_98 },

	{ .ptr = (void*)f364_emit_99 },

	{ .ptr = (void*)f365_emit_100 },

	{ .ptr = (void*)f366_emit_101 },

	{ .ptr = (void*)f367_emit_102 },

	{ .ptr = (void*)f368_emit_103 },

	{ .ptr = (void*)f369_emit_104 },

	{ .ptr = (void*)f370_emit_105 },

	{ .ptr = (void*)f371_emit_106 },

	{ .ptr = (void*)f372_emit_107 },

	{ .ptr = (void*)f373_emit_108 },

	{ .ptr = (void*)f374_emit_109 },

	{ .ptr = (void*)f375_emit_110 },

	{ .ptr = (void*)f376_emit_111 },

	{ .ptr = (void*)f377_emit_112 },

	{ .ptr = (void*)f378_emit_113 },

	{ .ptr = (void*)f379_emit_114 },

	{ .ptr = (void*)f380_emit_115 },

	{ .ptr = (void*)f381_emit_116 },

	{ .ptr = (void*)f382_emit_117 },

	{ .ptr = (void*)f383_emit_118 },

	{ .ptr = (void*)f384_emit_119 },

	{ .ptr = (void*)f385_emit_120 },

	{ .ptr = (void*)f386_emit_121 },

	{ .ptr = (void*)f387_emit_122 },

	{ .ptr = (void*)f388_emit_123 },

	{ .ptr = (void*)f389_emit_124 },

	{ .ptr = (void*)f390_emit_125 },

	{ .ptr = (void*)f391_emit_126 },

	{ .ptr = (void*)f392_emit_127 },

	{ .ptr = (void*)f393_emit_128 },

	{ .ptr = (void*)f394_emit_129 },

	{ .ptr = (void*)f395_emit_130 },

	{ .ptr = (void*)f396_emit_131 },

	{ .ptr = (void*)f397_emit_132 },

	{ .ptr = (void*)f398_emit_133 },

	{ .ptr = (void*)f399_emit_134 },

	{ .ptr = (void*)f400_emit_135 },

	{ .ptr = (void*)f401_emit_136 },

	{ .ptr = (void*)f402_emit_137 },

	{ .ptr = (void*)f403_emit_138 },

	{ .ptr = (void*)f404_emit_139 },

	{ .ptr = (void*)f405_emit_140 },

	{ .ptr = (void*)f406_emit_141 },

	{ .ptr = (void*)f407_emit_142 },

	{ .ptr = (void*)f408_emit_143 },

	{ .ptr = (void*)f409_emit_144 },

	{ .ptr = (void*)f410_emit_145 },

	{ .ptr = (void*)f411_emit_146 },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f412_emit_151 },

	{ .ptr = (void*)f413_emit_152 },

	{ .ptr = (void*)f414_emit_153 },

	{ .ptr = (void*)f415_emit_154 },

	{ .ptr = (void*)f416_emit_155 },

	{ .ptr = (void*)f417_emit_156 },

	{ .ptr = (void*)f418_emit_157 },

	{ .ptr = (void*)f419_emit_158 },

	{ .ptr = (void*)f420_emit_159 },

	{ .ptr = (void*)f421_emit_160 },

	{ .ptr = (void*)f422_emit_161 },

	{ .ptr = (void*)f423_emit_162 },

	{ .ptr = (void*)f424_emit_163 },

	{ .ptr = (void*)f425_emit_164 },

	{ .ptr = (void*)f426_emit_165 },

	{ .ptr = (void*)f427_emit_166 },

	{ .ptr = (void*)f428_emit_167 },

	{ .ptr = (void*)f429_emit_168 },

	{ .ptr = (void*)f430_emit_169 },

	{ .ptr = (void*)f431_emit_170 },

	{ .ptr = (void*)f432_emit_171 },

	{ .ptr = (void*)f433_emit_172 },

	{ .ptr = (void*)f434_emit_173 },

	{ .ptr = (void*)f435_emit_174 },

	{ .ptr = (void*)f436_emit_175 },

	{ .ptr = (void*)f437_emit_176 },

	{ .ptr = (void*)f438_emit_177 },

	{ .ptr = (void*)f439_emit_178 },

	{ .ptr = (void*)f440_emit_179 },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f446_nop_emitter },

	{ .ptr = (void*)f441_emit_182 },

	{ .ptr = (void*)f442_emit_183 },

	{ .ptr = (void*)f443_emit_184 },

	{ .ptr = (void*)f444_emit_185 },

	{ .ptr = (void*)f445_emit_186 },

};

// EmitOneInstruction workspace at ws+4000 length ws+82
void f273_EmitOneInstruction(i8 p6103 /* self */, i1 p6104 /* ruleid */) {
	*(i1*)(intptr_t)(ws+4000) = p6104; /*ruleid */
	*(i8*)(intptr_t)(ws+4008) = p6103; /*self */

	i8 v6105 = (i8)(intptr_t)(ws+4008);
	i8 v6106 = *(i8*)(intptr_t)v6105;
	i8 v6107 = v6106+(+16);
	i8 v6108 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6108 = v6107;

	i8 v6109 = (i8)(intptr_t)(ws+4016);
	i8 v6110 = (i8)(intptr_t)(ws+4072);
	*(i8*)(intptr_t)v6110 = v6109;

	i1 v6111 = (i1)+3;
	i8 v6112 = (i8)(intptr_t)(ws+4080);
	*(i1*)(intptr_t)v6112 = v6111;

c02_04bb:;

	i8 v6113 = (i8)(intptr_t)(ws+4080);
	i1 v6114 = *(i1*)(intptr_t)v6113;
	i1 v6115 = (i1)+0;
	if (v6114==v6115) goto c02_04be; else goto c02_04bd;

c02_04bd:;

	i8 v6116 = (i8)(intptr_t)(ws+4064);
	i8 v6117 = *(i8*)(intptr_t)v6116;
	i8 v6118 = *(i8*)(intptr_t)v6117;
	i8 v6119 = (i8)(intptr_t)(ws+4072);
	i8 v6120 = *(i8*)(intptr_t)v6119;
	*(i8*)(intptr_t)v6120 = v6118;

	i8 v6121 = (i8)(intptr_t)(ws+4072);
	i8 v6122 = *(i8*)(intptr_t)v6121;
	i8 v6123 = *(i8*)(intptr_t)v6122;
	i8 v6124 = (i8)+0;
	if (v6123==v6124) goto c02_04c3; else goto c02_04c2;

c02_04c2:;

	i8 v6125 = (i8)(intptr_t)(ws+4072);
	i8 v6126 = *(i8*)(intptr_t)v6125;
	i8 v6127 = *(i8*)(intptr_t)v6126;
	i8 v6128 = v6127+(+57);
	i1 v6129 = *(i1*)(intptr_t)v6128;
	i8 v6130 = (i8)(intptr_t)(ws+4072);
	i8 v6131 = *(i8*)(intptr_t)v6130;
	i8 v6132 = v6131+(+8);
	*(i1*)(intptr_t)v6132 = v6129;

	goto c02_04bf;

c02_04c3:;

c02_04bf:;

	i8 v6133 = (i8)(intptr_t)(ws+4064);
	i8 v6134 = *(i8*)(intptr_t)v6133;
	i8 v6135 = v6134+(+8);
	i8 v6136 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v6136 = v6135;

	i8 v6137 = (i8)(intptr_t)(ws+4072);
	i8 v6138 = *(i8*)(intptr_t)v6137;
	i8 v6139 = v6138+(+16);
	i8 v6140 = (i8)(intptr_t)(ws+4072);
	*(i8*)(intptr_t)v6140 = v6139;

	i8 v6141 = (i8)(intptr_t)(ws+4080);
	i1 v6142 = *(i1*)(intptr_t)v6141;
	i1 v6143 = v6142+(-1);
	i8 v6144 = (i8)(intptr_t)(ws+4080);
	*(i1*)(intptr_t)v6144 = v6143;

	goto c02_04bb;

c02_04be:;

	i8 v6145 = (i8)(intptr_t)(ws+4008);
	i8 v6146 = *(i8*)(intptr_t)v6145;
	i8 v6147 = v6146+(+41);
	i1 v6148 = *(i1*)(intptr_t)v6147;
	i8 v6149 = (i8)(intptr_t)(ws+4081);
	*(i1*)(intptr_t)v6149 = v6148;














































































































































































	i8 v7293 = (i8)(intptr_t)(((i1*)c02_a4e9+0));
	i8 v7294 = (i8)(intptr_t)(ws+4000);
	i1 v7295 = *(i1*)(intptr_t)v7294;
	i8 v7296 = v7295;
	i1 v7297 = (i1)+3;
	i8 v7298 = ((i8)v7296)<<v7297;
	i8 v7299 = v7293+v7298;
	i8 v7300 = *(i8*)(intptr_t)v7299;

	((void(*)(void))(intptr_t)v7300)();

endsub:;
}
static data c02_a4ea[] = { // codegen_midcodes








	{ .i1 = { 0x3a,0x2b,0x2b,0x9f,0x2b,0xa0,0x2b,0xa1}},








	{ .i1 = { 0x2b,0xa2,0x2b,0x86,0x2b,0x87,0x2b,0x88}},








	{ .i1 = { 0x2b,0x89,0x2b,0xa4,0x2b,0xa5,0x2b,0xa6}},








	{ .i1 = { 0x2b,0xa7,0x2b,0x8b,0x2b,0x8c,0x2b,0x8d}},








	{ .i1 = { 0x2b,0x8e,0x2b,0x95,0x2b,0x96,0x2b,0x97}},








	{ .i1 = { 0x2b,0x98,0x2b,0x90,0x2b,0x91,0x2b,0x92}},








	{ .i1 = { 0x2b,0x93,0x2b,0x9a,0x2b,0x9b,0x2b,0x9c}},








	{ .i1 = { 0x2b,0x9d,0x2b,0xa9,0x2b,0xaa,0x2b,0xab}},








	{ .i1 = { 0x2b,0xac,0x2b,0xae,0x2b,0xaf,0x2b,0xb0}},








	{ .i1 = { 0x2b,0xb1,0x2b,0xb3,0x2b,0xb4,0x2b,0xb5}},








	{ .i1 = { 0x2b,0xb6,0x2b,0x02,0x03,0x18,0x19,0x1a}},








	{ .i1 = { 0x04,0x05,0x1b,0x1d,0x1e,0x1f,0x20,0x01}},








	{ .i1 = { 0x22,0x23,0x24,0x25,0x27,0x28,0x29,0x2a}},








	{ .i1 = { 0x2b,0x2b,0x2b,0x2b,0x2d,0x34,0x35,0x36}},








	{ .i1 = { 0x37,0x2f,0x30,0x31,0x32,0x9f,0xa0,0xa1}},








	{ .i1 = { 0xa2,0x86,0x87,0x88,0x89,0xa4,0xa5,0xa6}},








	{ .i1 = { 0xa7,0x8b,0x8c,0x8d,0x8e,0x95,0x96,0x97}},








	{ .i1 = { 0x98,0x90,0x91,0x92,0x93,0x9a,0x9b,0x9c}},








	{ .i1 = { 0x9d,0xa9,0xaa,0xab,0xac,0xae,0xaf,0xb0}},








	{ .i1 = { 0xb1,0xb3,0xb4,0xb5,0xb6,0x72,0x73,0x74}},








	{ .i1 = { 0x75,0x6d,0x6e,0x6f,0x70,0x77,0x78,0x79}},








	{ .i1 = { 0x7a,0x7c,0x7d,0x7e,0x7f,0x81,0x82,0x83}},








	{ .i1 = { 0x84,0x3b,0x3c,0x3d,0x3e,0x45,0x46,0x47}},








	{ .i1 = { 0x48,0x40,0x41,0x42,0x43,0x4a,0x4b,0x4c}},








	{ .i1 = { 0x4d,0x4f,0x50,0x51,0x52,0x54,0x55,0x56}},








	{ .i1 = { 0x57,0x5a,0x5b,0x5c,0x5e,0x60,0x61,0x63}},








	{ .i1 = { 0x64,0x66,0x68,0x69,0x6a,0x2c,0x06,0x08}},








	{ .i1 = { 0x09,0x0a,0x0b,0x0d,0x0c,0x0e,0x0f,0x10}},






	{ .i1 = { 0x11,0x12,0x13,0x14,0x15}},
};
static data c02_a4eb[] = { // codegen_registers








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x10,0x08,0x10,0x08,0x10,0x08,0x10,0x08}},








	{ .i1 = { 0x10,0x08,0x10,0x01,0x10,0x02,0x10,0x04}},








	{ .i1 = { 0x10,0x08,0x01,0x08,0x02,0x08,0x04,0x08}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x08,0x08,0x01,0x01}},








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
static data c02_a4ec[] = { // codegen_rules








	{ .i1 = { 0x00,0x00,0x00,0x00,0x07,0x07,0x00,0x00}},








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








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x01,0x07,0x06,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x01,0x07,0x06,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x08,0x08,0x00}},








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








	{ .i1 = { 0x08,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x03,0x02,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x03,0x02,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x08,0x08,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x01,0x01,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x03,0x02,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x03,0x02,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








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








	{ .i1 = { 0x00,0x00,0x01,0x07,0x06,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x00,0x00,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x02,0x02,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x03,0x02,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x03,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x01,0x01,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x02,0x02,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x08,0x08,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x03,0x02,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x03,0x02,0x00,0x08,0x08}},








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






	{ .i1 = { 0x00,0x00,0x01,0x01,0x00}},
};

// PopulateMatchBuffer workspace at ws+4048 length ws+24
void f447_PopulateMatchBuffer(i8 p7301 /* matchbuf */, i8 p7302 /* n */, i8 p7303 /* insn */) {
	*(i8*)(intptr_t)(ws+4048) = p7303; /*insn */
	*(i8*)(intptr_t)(ws+4056) = p7302; /*n */
	*(i8*)(intptr_t)(ws+4064) = p7301; /*matchbuf */

	i8 v7304 = (i8)(intptr_t)(ws+4056);
	i8 v7305 = *(i8*)(intptr_t)v7304;
	i8 v7306 = *(i8*)(intptr_t)v7305;
	i8 v7307 = v7306+(+58);
	i1 v7308 = *(i1*)(intptr_t)v7307;
	i8 v7309 = (i8)(intptr_t)(ws+4064);
	i8 v7310 = *(i8*)(intptr_t)v7309;
	*(i1*)(intptr_t)v7310 = v7308;

	i8 v7311 = (i8)(intptr_t)(ws+4056);
	i8 v7312 = *(i8*)(intptr_t)v7311;
	i8 v7313 = *(i8*)(intptr_t)v7312;
	i8 v7314 = v7313+(+24);
	i8 v7315 = *(i8*)(intptr_t)v7314;
	i8 v7316 = (i8)(intptr_t)(ws+4056);
	i8 v7317 = *(i8*)(intptr_t)v7316;
	i8 v7318 = v7317+(+8);
	*(i8*)(intptr_t)v7318 = v7315;

	i8 v7319 = (i8)(intptr_t)(ws+4056);
	i8 v7320 = *(i8*)(intptr_t)v7319;
	i8 v7321 = v7320+(+8);
	i8 v7322 = *(i8*)(intptr_t)v7321;
	i8 v7323 = (i8)+0;
	if (v7322==v7323) goto c02_04f1; else goto c02_04f0;

c02_04f0:;

	i8 v7324 = (i8)(intptr_t)(ws+4056);
	i8 v7325 = *(i8*)(intptr_t)v7324;
	i8 v7326 = v7325+(+8);
	i8 v7327 = *(i8*)(intptr_t)v7326;
	i8 v7328 = v7327+(+58);
	i1 v7329 = *(i1*)(intptr_t)v7328;
	i8 v7330 = (i8)(intptr_t)(ws+4064);
	i8 v7331 = *(i8*)(intptr_t)v7330;
	i8 v7332 = v7331+(+1);
	*(i1*)(intptr_t)v7332 = v7329;

	goto c02_04ed;

c02_04f1:;

c02_04ed:;

	i8 v7333 = (i8)(intptr_t)(ws+4056);
	i8 v7334 = *(i8*)(intptr_t)v7333;
	i8 v7335 = *(i8*)(intptr_t)v7334;
	i8 v7336 = v7335+(+32);
	i8 v7337 = *(i8*)(intptr_t)v7336;
	i8 v7338 = (i8)(intptr_t)(ws+4056);
	i8 v7339 = *(i8*)(intptr_t)v7338;
	i8 v7340 = v7339+(+16);
	*(i8*)(intptr_t)v7340 = v7337;

	i8 v7341 = (i8)(intptr_t)(ws+4056);
	i8 v7342 = *(i8*)(intptr_t)v7341;
	i8 v7343 = v7342+(+16);
	i8 v7344 = *(i8*)(intptr_t)v7343;
	i8 v7345 = (i8)+0;
	if (v7344==v7345) goto c02_04f6; else goto c02_04f5;

c02_04f5:;

	i8 v7346 = (i8)(intptr_t)(ws+4056);
	i8 v7347 = *(i8*)(intptr_t)v7346;
	i8 v7348 = v7347+(+16);
	i8 v7349 = *(i8*)(intptr_t)v7348;
	i8 v7350 = v7349+(+58);
	i1 v7351 = *(i1*)(intptr_t)v7350;
	i8 v7352 = (i8)(intptr_t)(ws+4064);
	i8 v7353 = *(i8*)(intptr_t)v7352;
	i8 v7354 = v7353+(+2);
	*(i1*)(intptr_t)v7354 = v7351;

	goto c02_04f2;

c02_04f6:;

c02_04f2:;

endsub:;
}

// IsStackedRegister workspace at ws+4016 length ws+16
void f448_IsStackedRegister(i1* p7355 /* result */, i1 p7356 /* regid */) {
	*(i1*)(intptr_t)(ws+4016) = p7356; /*regid */

	i1 v7357 = (i1)+0;
	i8 v7358 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v7358 = v7357;

	i8 v7359 = (i8)(intptr_t)(((i1*)c02_ad5+0));
	i8 v7360 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7360 = v7359;

c02_04f9:;

	i8 v7361 = (i8)(intptr_t)(ws+4024);
	i8 v7362 = *(i8*)(intptr_t)v7361;
	i8 v7363 = (i8)(intptr_t)(((i1*)c02_ad5+80));
	if (v7362==v7363) goto c02_04fc; else goto c02_04fb;

c02_04fb:;

	i8 v7364 = (i8)(intptr_t)(ws+4024);
	i8 v7365 = *(i8*)(intptr_t)v7364;
	i8 v7366 = v7365+(+8);
	i1 v7367 = *(i1*)(intptr_t)v7366;
	i8 v7368 = (i8)(intptr_t)(ws+4016);
	i1 v7369 = *(i1*)(intptr_t)v7368;
	i1 v7370 = v7367&v7369;
	i1 v7371 = (i1)+0;
	if (v7370==v7371) goto c02_0501; else goto c02_0500;

c02_0500:;

	i8 v7372 = (i8)(intptr_t)(ws+4024);
	i8 v7373 = *(i8*)(intptr_t)v7372;
	i8 v7374 = v7373+(+11);
	i1 v7375 = *(i1*)(intptr_t)v7374;
	i8 v7376 = (i8)(intptr_t)(ws+4017);
	*(i1*)(intptr_t)v7376 = v7375;

	goto endsub;

c02_0501:;

c02_04fd:;

	i8 v7377 = (i8)(intptr_t)(ws+4024);
	i8 v7378 = *(i8*)(intptr_t)v7377;
	i8 v7379 = v7378+(+16);
	i8 v7380 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7380 = v7379;

	goto c02_04f9;

c02_04fc:;

endsub:;
	*p7355 = *(i1*)(intptr_t)(ws+4017);
}

// CalculateBlockedRegisters workspace at ws+4016 length ws+17
void f449_CalculateBlockedRegisters(i1* p7381 /* blocked */, i8 p7382 /* last */, i8 p7383 /* insn */) {
	*(i8*)(intptr_t)(ws+4016) = p7383; /*insn */
	*(i8*)(intptr_t)(ws+4024) = p7382; /*last */

	i1 v7384 = (i1)+0;
	i8 v7385 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v7385 = v7384;

	i8 v7386 = (i8)(intptr_t)(ws+4016);
	i8 v7387 = *(i8*)(intptr_t)v7386;
	i8 v7388 = *(i8*)(intptr_t)v7387;
	i8 v7389 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7389 = v7388;

c02_0504:;

	i8 v7390 = (i8)(intptr_t)(ws+4016);
	i8 v7391 = *(i8*)(intptr_t)v7390;
	i8 v7392 = (i8)(intptr_t)(ws+4024);
	i8 v7393 = *(i8*)(intptr_t)v7392;
	if (v7391==v7393) goto c02_0507; else goto c02_0506;

c02_0506:;

	i8 v7394 = (i8)(intptr_t)(ws+4032);
	i1 v7395 = *(i1*)(intptr_t)v7394;
	i8 v7396 = (i8)(intptr_t)(ws+4016);
	i8 v7397 = *(i8*)(intptr_t)v7396;
	i8 v7398 = v7397+(+42);
	i1 v7399 = *(i1*)(intptr_t)v7398;
	i1 v7400 = v7395|v7399;
	i8 v7401 = (i8)(intptr_t)(ws+4016);
	i8 v7402 = *(i8*)(intptr_t)v7401;
	i8 v7403 = v7402+(+43);
	i1 v7404 = *(i1*)(intptr_t)v7403;
	i1 v7405 = v7400|v7404;
	i8 v7406 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v7406 = v7405;

	i8 v7407 = (i8)(intptr_t)(ws+4016);
	i8 v7408 = *(i8*)(intptr_t)v7407;
	i8 v7409 = (i8)(intptr_t)(ws+4024);
	i8 v7410 = *(i8*)(intptr_t)v7409;
	if (v7408==v7410) goto c02_050b; else goto c02_050c;

c02_050b:;

	goto c02_0507;

c02_050c:;

c02_0508:;

	i8 v7411 = (i8)(intptr_t)(ws+4016);
	i8 v7412 = *(i8*)(intptr_t)v7411;
	i8 v7413 = *(i8*)(intptr_t)v7412;
	i8 v7414 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7414 = v7413;

	goto c02_0504;

c02_0507:;

endsub:;
	*p7381 = *(i1*)(intptr_t)(ws+4032);
}

// BlockRegisters workspace at ws+4016 length ws+17
void f450_BlockRegisters(i1 p7415 /* blocked */, i8 p7416 /* last */, i8 p7417 /* insn */) {
	*(i8*)(intptr_t)(ws+4016) = p7417; /*insn */
	*(i8*)(intptr_t)(ws+4024) = p7416; /*last */
	*(i1*)(intptr_t)(ws+4032) = p7415; /*blocked */

	i8 v7418 = (i8)(intptr_t)(ws+4016);
	i8 v7419 = *(i8*)(intptr_t)v7418;
	i8 v7420 = *(i8*)(intptr_t)v7419;
	i8 v7421 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7421 = v7420;

c02_050f:;

	i8 v7422 = (i8)(intptr_t)(ws+4016);
	i8 v7423 = *(i8*)(intptr_t)v7422;
	i8 v7424 = (i8)(intptr_t)(ws+4024);
	i8 v7425 = *(i8*)(intptr_t)v7424;
	if (v7423==v7425) goto c02_0512; else goto c02_0511;

c02_0511:;

	i8 v7426 = (i8)(intptr_t)(ws+4016);
	i8 v7427 = *(i8*)(intptr_t)v7426;
	i8 v7428 = v7427+(+42);
	i1 v7429 = *(i1*)(intptr_t)v7428;
	i8 v7430 = (i8)(intptr_t)(ws+4032);
	i1 v7431 = *(i1*)(intptr_t)v7430;
	i1 v7432 = v7429|v7431;
	i8 v7433 = (i8)(intptr_t)(ws+4016);
	i8 v7434 = *(i8*)(intptr_t)v7433;
	i8 v7435 = v7434+(+42);
	*(i1*)(intptr_t)v7435 = v7432;

	i8 v7436 = (i8)(intptr_t)(ws+4016);
	i8 v7437 = *(i8*)(intptr_t)v7436;
	i8 v7438 = v7437+(+43);
	i1 v7439 = *(i1*)(intptr_t)v7438;
	i8 v7440 = (i8)(intptr_t)(ws+4032);
	i1 v7441 = *(i1*)(intptr_t)v7440;
	i1 v7442 = v7439|v7441;
	i8 v7443 = (i8)(intptr_t)(ws+4016);
	i8 v7444 = *(i8*)(intptr_t)v7443;
	i8 v7445 = v7444+(+43);
	*(i1*)(intptr_t)v7445 = v7442;

	i8 v7446 = (i8)(intptr_t)(ws+4016);
	i8 v7447 = *(i8*)(intptr_t)v7446;
	i8 v7448 = (i8)(intptr_t)(ws+4024);
	i8 v7449 = *(i8*)(intptr_t)v7448;
	if (v7447==v7449) goto c02_0516; else goto c02_0517;

c02_0516:;

	goto c02_0512;

c02_0517:;

c02_0513:;

	i8 v7450 = (i8)(intptr_t)(ws+4016);
	i8 v7451 = *(i8*)(intptr_t)v7450;
	i8 v7452 = *(i8*)(intptr_t)v7451;
	i8 v7453 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7453 = v7452;

	goto c02_050f;

c02_0512:;

endsub:;
}
const i1 c02_s016c[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// CreateSpill workspace at ws+4016 length ws+24
void f451_CreateSpill(i1 p7454 /* dest */, i1 p7455 /* src */, i8 p7456 /* insn */) {
	*(i8*)(intptr_t)(ws+4016) = p7456; /*insn */
	*(i1*)(intptr_t)(ws+4024) = p7455; /*src */
	*(i1*)(intptr_t)(ws+4025) = p7454; /*dest */

	i8 v7457 = (i8)(intptr_t)(ws+4016);
	i8 v7458 = *(i8*)(intptr_t)v7457;
	i8 v7459 = v7458+(+60);
	i1 v7460 = *(i1*)(intptr_t)v7459;
	i8 v7461 = (i8)(intptr_t)(ws+4026);
	*(i1*)(intptr_t)v7461 = v7460;

	i8 v7462 = (i8)(intptr_t)(ws+4026);
	i1 v7463 = *(i1*)(intptr_t)v7462;
	i1 v7464 = (i1)+5;
	if (v7463==v7464) goto c02_051b; else goto c02_051c;

c02_051b:;

	i8 v7465 = (i8)(intptr_t)c02_s016c;
	i8 v7466 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7466)(v7465);

	goto c02_0518;

c02_051c:;

c02_0518:;

	i8 v7467 = (i8)(intptr_t)(ws+4016);
	i8 v7468 = *(i8*)(intptr_t)v7467;
	i8 v7469 = v7468+(+44);
	i8 v7470 = (i8)(intptr_t)(ws+4026);
	i1 v7471 = *(i1*)(intptr_t)v7470;
	i8 v7472 = v7471;
	i1 v7473 = (i1)+1;
	i8 v7474 = ((i8)v7472)<<v7473;
	i8 v7475 = v7469+v7474;
	i8 v7476 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7476 = v7475;

	i8 v7477 = (i8)(intptr_t)(ws+4024);
	i1 v7478 = *(i1*)(intptr_t)v7477;
	i8 v7479 = (i8)(intptr_t)(ws+4032);
	i8 v7480 = *(i8*)(intptr_t)v7479;
	*(i1*)(intptr_t)v7480 = v7478;

	i8 v7481 = (i8)(intptr_t)(ws+4025);
	i1 v7482 = *(i1*)(intptr_t)v7481;
	i8 v7483 = (i8)(intptr_t)(ws+4032);
	i8 v7484 = *(i8*)(intptr_t)v7483;
	i8 v7485 = v7484+(+1);
	*(i1*)(intptr_t)v7485 = v7482;

	i8 v7486 = (i8)(intptr_t)(ws+4026);
	i1 v7487 = *(i1*)(intptr_t)v7486;
	i1 v7488 = v7487+(+1);
	i8 v7489 = (i8)(intptr_t)(ws+4016);
	i8 v7490 = *(i8*)(intptr_t)v7489;
	i8 v7491 = v7490+(+60);
	*(i1*)(intptr_t)v7491 = v7488;

endsub:;
}
const i1 c02_s016d[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// CreateReload workspace at ws+4016 length ws+24
void f452_CreateReload(i1 p7492 /* dest */, i1 p7493 /* src */, i8 p7494 /* insn */) {
	*(i8*)(intptr_t)(ws+4016) = p7494; /*insn */
	*(i1*)(intptr_t)(ws+4024) = p7493; /*src */
	*(i1*)(intptr_t)(ws+4025) = p7492; /*dest */

	i8 v7495 = (i8)(intptr_t)(ws+4016);
	i8 v7496 = *(i8*)(intptr_t)v7495;
	i8 v7497 = v7496+(+61);
	i1 v7498 = *(i1*)(intptr_t)v7497;
	i8 v7499 = (i8)(intptr_t)(ws+4026);
	*(i1*)(intptr_t)v7499 = v7498;

	i8 v7500 = (i8)(intptr_t)(ws+4026);
	i1 v7501 = *(i1*)(intptr_t)v7500;
	i1 v7502 = (i1)+5;
	if (v7501==v7502) goto c02_0520; else goto c02_0521;

c02_0520:;

	i8 v7503 = (i8)(intptr_t)c02_s016d;
	i8 v7504 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7504)(v7503);

	goto c02_051d;

c02_0521:;

c02_051d:;

	i8 v7505 = (i8)(intptr_t)(ws+4016);
	i8 v7506 = *(i8*)(intptr_t)v7505;
	i8 v7507 = v7506+(+52);
	i8 v7508 = (i8)(intptr_t)(ws+4026);
	i1 v7509 = *(i1*)(intptr_t)v7508;
	i8 v7510 = v7509;
	i1 v7511 = (i1)+1;
	i8 v7512 = ((i8)v7510)<<v7511;
	i8 v7513 = v7507+v7512;
	i8 v7514 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7514 = v7513;

	i8 v7515 = (i8)(intptr_t)(ws+4024);
	i1 v7516 = *(i1*)(intptr_t)v7515;
	i8 v7517 = (i8)(intptr_t)(ws+4032);
	i8 v7518 = *(i8*)(intptr_t)v7517;
	*(i1*)(intptr_t)v7518 = v7516;

	i8 v7519 = (i8)(intptr_t)(ws+4025);
	i1 v7520 = *(i1*)(intptr_t)v7519;
	i8 v7521 = (i8)(intptr_t)(ws+4032);
	i8 v7522 = *(i8*)(intptr_t)v7521;
	i8 v7523 = v7522+(+1);
	*(i1*)(intptr_t)v7523 = v7520;

	i8 v7524 = (i8)(intptr_t)(ws+4026);
	i1 v7525 = *(i1*)(intptr_t)v7524;
	i1 v7526 = v7525+(+1);
	i8 v7527 = (i8)(intptr_t)(ws+4016);
	i8 v7528 = *(i8*)(intptr_t)v7527;
	i8 v7529 = v7528+(+61);
	*(i1*)(intptr_t)v7529 = v7526;

endsub:;
}
	void f251_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f251_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f251_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f251_ArchEmitMove(i1 /* dest */, i1 /* src */);

// ShuffleRegisters workspace at ws+4000 length ws+25
void f453_ShuffleRegisters(i8 p7530 /* moves */) {
	*(i8*)(intptr_t)(ws+4000) = p7530; /*moves */

	i1 v7531 = (i1)+0;
	i8 v7532 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v7532 = v7531;

	i1 v7533 = (i1)+0;
	i8 v7534 = (i8)(intptr_t)(ws+4009);
	*(i1*)(intptr_t)v7534 = v7533;

	i8 v7535 = (i8)(intptr_t)(ws+4000);
	i8 v7536 = *(i8*)(intptr_t)v7535;
	i8 v7537 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7537 = v7536;

	i1 v7538 = (i1)+4;
	i8 v7539 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7539 = v7538;

c02_0524:;

	i8 v7540 = (i8)(intptr_t)(ws+4024);
	i1 v7541 = *(i1*)(intptr_t)v7540;
	i1 v7542 = (i1)+0;
	if (v7541==v7542) goto c02_0527; else goto c02_0526;

c02_0526:;

	i8 v7543 = (i8)(intptr_t)(ws+4008);
	i1 v7544 = *(i1*)(intptr_t)v7543;
	i8 v7545 = (i8)(intptr_t)(ws+4016);
	i8 v7546 = *(i8*)(intptr_t)v7545;
	i8 v7547 = v7546+(+1);
	i1 v7548 = *(i1*)(intptr_t)v7547;
	i1 v7549 = v7544|v7548;
	i8 v7550 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v7550 = v7549;

	i8 v7551 = (i8)(intptr_t)(ws+4009);
	i1 v7552 = *(i1*)(intptr_t)v7551;
	i8 v7553 = (i8)(intptr_t)(ws+4016);
	i8 v7554 = *(i8*)(intptr_t)v7553;
	i1 v7555 = *(i1*)(intptr_t)v7554;
	i1 v7556 = v7552|v7555;
	i8 v7557 = (i8)(intptr_t)(ws+4009);
	*(i1*)(intptr_t)v7557 = v7556;

	i8 v7558 = (i8)(intptr_t)(ws+4024);
	i1 v7559 = *(i1*)(intptr_t)v7558;
	i1 v7560 = v7559+(-1);
	i8 v7561 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7561 = v7560;

	i8 v7562 = (i8)(intptr_t)(ws+4016);
	i8 v7563 = *(i8*)(intptr_t)v7562;
	i8 v7564 = v7563+(+2);
	i8 v7565 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7565 = v7564;

	goto c02_0524;

c02_0527:;

c02_0528:;

	i8 v7566 = (i8)(intptr_t)(ws+4000);
	i8 v7567 = *(i8*)(intptr_t)v7566;
	i8 v7568 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7568 = v7567;

	i1 v7569 = (i1)+4;
	i8 v7570 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7570 = v7569;

c02_052c:;

	i8 v7571 = (i8)(intptr_t)(ws+4024);
	i1 v7572 = *(i1*)(intptr_t)v7571;
	i1 v7573 = (i1)+0;
	if (v7572==v7573) goto c02_052f; else goto c02_052e;

c02_052e:;

	i8 v7574 = (i8)(intptr_t)(ws+4016);
	i8 v7575 = *(i8*)(intptr_t)v7574;
	i1 v7576 = *(i1*)(intptr_t)v7575;
	i1 v7577 = (i1)+0;
	if (v7576==v7577) goto c02_0536; else goto c02_0537;

c02_0537:;

	i8 v7578 = (i8)(intptr_t)(ws+4016);
	i8 v7579 = *(i8*)(intptr_t)v7578;
	i8 v7580 = v7579+(+1);
	i1 v7581 = *(i1*)(intptr_t)v7580;
	i1 v7582 = (i1)+0;
	if (v7581==v7582) goto c02_0535; else goto c02_0536;

c02_0535:;

	goto c02_052f;

c02_0536:;

c02_0530:;

	i8 v7583 = (i8)(intptr_t)(ws+4016);
	i8 v7584 = *(i8*)(intptr_t)v7583;
	i8 v7585 = v7584+(+2);
	i8 v7586 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7586 = v7585;

	i8 v7587 = (i8)(intptr_t)(ws+4024);
	i1 v7588 = *(i1*)(intptr_t)v7587;
	i1 v7589 = v7588+(-1);
	i8 v7590 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7590 = v7589;

	goto c02_052c;

c02_052f:;

	i8 v7591 = (i8)(intptr_t)(ws+4024);
	i1 v7592 = *(i1*)(intptr_t)v7591;
	i1 v7593 = (i1)+0;
	if (v7592==v7593) goto c02_053c; else goto c02_053b;

c02_053b:;

	i8 v7594 = (i8)(intptr_t)(ws+4016);
	i8 v7595 = *(i8*)(intptr_t)v7594;
	i1 v7596 = *(i1*)(intptr_t)v7595;
	i1 v7597 = (i1)+0;
	i8 v7598 = (i8)(intptr_t)(f251_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7598)(v7597, v7596);

	i8 v7599 = (i8)(intptr_t)(ws+4009);
	i1 v7600 = *(i1*)(intptr_t)v7599;
	i8 v7601 = (i8)(intptr_t)(ws+4016);
	i8 v7602 = *(i8*)(intptr_t)v7601;
	i1 v7603 = *(i1*)(intptr_t)v7602;
	i1 v7604 = ~v7603;
	i1 v7605 = v7600&v7604;
	i8 v7606 = (i8)(intptr_t)(ws+4009);
	*(i1*)(intptr_t)v7606 = v7605;

	i1 v7607 = (i1)+0;
	i8 v7608 = (i8)(intptr_t)(ws+4016);
	i8 v7609 = *(i8*)(intptr_t)v7608;
	*(i1*)(intptr_t)v7609 = v7607;

	goto c02_0528;

c02_053c:;

c02_0538:;

	i8 v7610 = (i8)(intptr_t)(ws+4000);
	i8 v7611 = *(i8*)(intptr_t)v7610;
	i8 v7612 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7612 = v7611;

	i1 v7613 = (i1)+4;
	i8 v7614 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7614 = v7613;

c02_053f:;

	i8 v7615 = (i8)(intptr_t)(ws+4024);
	i1 v7616 = *(i1*)(intptr_t)v7615;
	i1 v7617 = (i1)+0;
	if (v7616==v7617) goto c02_0542; else goto c02_0541;

c02_0541:;

	i8 v7618 = (i8)(intptr_t)(ws+4016);
	i8 v7619 = *(i8*)(intptr_t)v7618;
	i1 v7620 = *(i1*)(intptr_t)v7619;
	i1 v7621 = (i1)+0;
	if (v7620==v7621) goto c02_054b; else goto c02_054d;

c02_054d:;

	i8 v7622 = (i8)(intptr_t)(ws+4016);
	i8 v7623 = *(i8*)(intptr_t)v7622;
	i8 v7624 = v7623+(+1);
	i1 v7625 = *(i1*)(intptr_t)v7624;
	i1 v7626 = (i1)+0;
	if (v7625==v7626) goto c02_054b; else goto c02_054c;

c02_054c:;

	i8 v7627 = (i8)(intptr_t)(ws+4016);
	i8 v7628 = *(i8*)(intptr_t)v7627;
	i8 v7629 = v7628+(+1);
	i1 v7630 = *(i1*)(intptr_t)v7629;
	i8 v7631 = (i8)(intptr_t)(ws+4009);
	i1 v7632 = *(i1*)(intptr_t)v7631;
	i1 v7633 = v7630&v7632;
	i1 v7634 = (i1)+0;
	if (v7633==v7634) goto c02_054a; else goto c02_054b;

c02_054a:;

	goto c02_0542;

c02_054b:;

c02_0543:;

	i8 v7635 = (i8)(intptr_t)(ws+4016);
	i8 v7636 = *(i8*)(intptr_t)v7635;
	i8 v7637 = v7636+(+2);
	i8 v7638 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7638 = v7637;

	i8 v7639 = (i8)(intptr_t)(ws+4024);
	i1 v7640 = *(i1*)(intptr_t)v7639;
	i1 v7641 = v7640+(-1);
	i8 v7642 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7642 = v7641;

	goto c02_053f;

c02_0542:;

	i8 v7643 = (i8)(intptr_t)(ws+4024);
	i1 v7644 = *(i1*)(intptr_t)v7643;
	i1 v7645 = (i1)+0;
	if (v7644==v7645) goto c02_0552; else goto c02_0551;

c02_0551:;

	i8 v7646 = (i8)(intptr_t)(ws+4016);
	i8 v7647 = *(i8*)(intptr_t)v7646;
	i1 v7648 = *(i1*)(intptr_t)v7647;
	i8 v7649 = (i8)(intptr_t)(ws+4016);
	i8 v7650 = *(i8*)(intptr_t)v7649;
	i8 v7651 = v7650+(+1);
	i1 v7652 = *(i1*)(intptr_t)v7651;
	i8 v7653 = (i8)(intptr_t)(f251_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7653)(v7652, v7648);

	i8 v7654 = (i8)(intptr_t)(ws+4009);
	i1 v7655 = *(i1*)(intptr_t)v7654;
	i8 v7656 = (i8)(intptr_t)(ws+4016);
	i8 v7657 = *(i8*)(intptr_t)v7656;
	i1 v7658 = *(i1*)(intptr_t)v7657;
	i1 v7659 = ~v7658;
	i1 v7660 = v7655&v7659;
	i8 v7661 = (i8)(intptr_t)(ws+4009);
	*(i1*)(intptr_t)v7661 = v7660;

	i8 v7662 = (i8)(intptr_t)(ws+4008);
	i1 v7663 = *(i1*)(intptr_t)v7662;
	i8 v7664 = (i8)(intptr_t)(ws+4016);
	i8 v7665 = *(i8*)(intptr_t)v7664;
	i8 v7666 = v7665+(+1);
	i1 v7667 = *(i1*)(intptr_t)v7666;
	i1 v7668 = ~v7667;
	i1 v7669 = v7663&v7668;
	i8 v7670 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v7670 = v7669;

	i1 v7671 = (i1)+0;
	i8 v7672 = (i8)(intptr_t)(ws+4016);
	i8 v7673 = *(i8*)(intptr_t)v7672;
	*(i1*)(intptr_t)v7673 = v7671;

	i1 v7674 = (i1)+0;
	i8 v7675 = (i8)(intptr_t)(ws+4016);
	i8 v7676 = *(i8*)(intptr_t)v7675;
	i8 v7677 = v7676+(+1);
	*(i1*)(intptr_t)v7677 = v7674;

	goto c02_0528;

c02_0552:;

c02_054e:;

	i8 v7678 = (i8)(intptr_t)(ws+4000);
	i8 v7679 = *(i8*)(intptr_t)v7678;
	i8 v7680 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7680 = v7679;

	i1 v7681 = (i1)+4;
	i8 v7682 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7682 = v7681;

c02_0555:;

	i8 v7683 = (i8)(intptr_t)(ws+4024);
	i1 v7684 = *(i1*)(intptr_t)v7683;
	i1 v7685 = (i1)+0;
	if (v7684==v7685) goto c02_0558; else goto c02_0557;

c02_0557:;

	i8 v7686 = (i8)(intptr_t)(ws+4016);
	i8 v7687 = *(i8*)(intptr_t)v7686;
	i1 v7688 = *(i1*)(intptr_t)v7687;
	i1 v7689 = (i1)+0;
	if (v7688==v7689) goto c02_0560; else goto c02_055f;

c02_0560:;

	i8 v7690 = (i8)(intptr_t)(ws+4016);
	i8 v7691 = *(i8*)(intptr_t)v7690;
	i8 v7692 = v7691+(+1);
	i1 v7693 = *(i1*)(intptr_t)v7692;
	i1 v7694 = (i1)+0;
	if (v7693==v7694) goto c02_055f; else goto c02_055e;

c02_055e:;

	goto c02_0558;

c02_055f:;

c02_0559:;

	i8 v7695 = (i8)(intptr_t)(ws+4016);
	i8 v7696 = *(i8*)(intptr_t)v7695;
	i8 v7697 = v7696+(+2);
	i8 v7698 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7698 = v7697;

	i8 v7699 = (i8)(intptr_t)(ws+4024);
	i1 v7700 = *(i1*)(intptr_t)v7699;
	i1 v7701 = v7700+(-1);
	i8 v7702 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7702 = v7701;

	goto c02_0555;

c02_0558:;

	i8 v7703 = (i8)(intptr_t)(ws+4024);
	i1 v7704 = *(i1*)(intptr_t)v7703;
	i1 v7705 = (i1)+0;
	if (v7704==v7705) goto c02_0565; else goto c02_0564;

c02_0564:;

	i1 v7706 = (i1)+0;
	i8 v7707 = (i8)(intptr_t)(ws+4016);
	i8 v7708 = *(i8*)(intptr_t)v7707;
	i8 v7709 = v7708+(+1);
	i1 v7710 = *(i1*)(intptr_t)v7709;
	i8 v7711 = (i8)(intptr_t)(f251_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7711)(v7710, v7706);

	i8 v7712 = (i8)(intptr_t)(ws+4008);
	i1 v7713 = *(i1*)(intptr_t)v7712;
	i8 v7714 = (i8)(intptr_t)(ws+4016);
	i8 v7715 = *(i8*)(intptr_t)v7714;
	i8 v7716 = v7715+(+1);
	i1 v7717 = *(i1*)(intptr_t)v7716;
	i1 v7718 = ~v7717;
	i1 v7719 = v7713&v7718;
	i8 v7720 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v7720 = v7719;

	i1 v7721 = (i1)+0;
	i8 v7722 = (i8)(intptr_t)(ws+4016);
	i8 v7723 = *(i8*)(intptr_t)v7722;
	i8 v7724 = v7723+(+1);
	*(i1*)(intptr_t)v7724 = v7721;

	goto c02_0528;

c02_0565:;

c02_0561:;

	i8 v7725 = (i8)(intptr_t)(ws+4000);
	i8 v7726 = *(i8*)(intptr_t)v7725;
	i8 v7727 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7727 = v7726;

	i1 v7728 = (i1)+4;
	i8 v7729 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7729 = v7728;

c02_0568:;

	i8 v7730 = (i8)(intptr_t)(ws+4024);
	i1 v7731 = *(i1*)(intptr_t)v7730;
	i1 v7732 = (i1)+0;
	if (v7731==v7732) goto c02_056b; else goto c02_056a;

c02_056a:;

	i8 v7733 = (i8)(intptr_t)(ws+4016);
	i8 v7734 = *(i8*)(intptr_t)v7733;
	i1 v7735 = *(i1*)(intptr_t)v7734;
	i1 v7736 = (i1)+0;
	if (v7735==v7736) goto c02_0572; else goto c02_0573;

c02_0573:;

	i8 v7737 = (i8)(intptr_t)(ws+4016);
	i8 v7738 = *(i8*)(intptr_t)v7737;
	i8 v7739 = v7738+(+1);
	i1 v7740 = *(i1*)(intptr_t)v7739;
	i1 v7741 = (i1)+0;
	if (v7740==v7741) goto c02_0572; else goto c02_0571;

c02_0571:;

	goto c02_056b;

c02_0572:;

c02_056c:;

	i8 v7742 = (i8)(intptr_t)(ws+4016);
	i8 v7743 = *(i8*)(intptr_t)v7742;
	i8 v7744 = v7743+(+2);
	i8 v7745 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v7745 = v7744;

	i8 v7746 = (i8)(intptr_t)(ws+4024);
	i1 v7747 = *(i1*)(intptr_t)v7746;
	i1 v7748 = v7747+(-1);
	i8 v7749 = (i8)(intptr_t)(ws+4024);
	*(i1*)(intptr_t)v7749 = v7748;

	goto c02_0568;

c02_056b:;

	i8 v7750 = (i8)(intptr_t)(ws+4024);
	i1 v7751 = *(i1*)(intptr_t)v7750;
	i1 v7752 = (i1)+0;
	if (v7751==v7752) goto c02_0578; else goto c02_0577;

c02_0577:;

	i8 v7753 = (i8)(intptr_t)(ws+4016);
	i8 v7754 = *(i8*)(intptr_t)v7753;
	i1 v7755 = *(i1*)(intptr_t)v7754;
	i1 v7756 = (i1)+0;
	i8 v7757 = (i8)(intptr_t)(f251_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7757)(v7756, v7755);

	i8 v7758 = (i8)(intptr_t)(ws+4009);
	i1 v7759 = *(i1*)(intptr_t)v7758;
	i8 v7760 = (i8)(intptr_t)(ws+4016);
	i8 v7761 = *(i8*)(intptr_t)v7760;
	i1 v7762 = *(i1*)(intptr_t)v7761;
	i1 v7763 = ~v7762;
	i1 v7764 = v7759&v7763;
	i8 v7765 = (i8)(intptr_t)(ws+4009);
	*(i1*)(intptr_t)v7765 = v7764;

	i1 v7766 = (i1)+0;
	i8 v7767 = (i8)(intptr_t)(ws+4016);
	i8 v7768 = *(i8*)(intptr_t)v7767;
	*(i1*)(intptr_t)v7768 = v7766;

	goto c02_0528;

c02_0578:;

c02_0574:;

	goto c02_0529;

c02_0529:;

endsub:;
}
	void f55_PushNode(i8 /* node */);
	void f57_NextNode(i8* /* node */);
	void f20_print_hex_i32(i4 /* value */);
	void f8_print_char(i1 /* c */);
	void f17_print_i8(i1 /* value */);
	void f8_print_char(i1 /* c */);
	void f19_print_hex_i16(i2 /* value */);
	void f8_print_char(i1 /* c */);
	void f19_print_hex_i16(i2 /* value */);
	void f8_print_char(i1 /* c */);
	void f20_print_hex_i32(i4 /* value */);
	void f8_print_char(i1 /* c */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);

// PrintNodes workspace at ws+4016 length ws+24
void f454_PrintNodes(i8 p7769 /* rootnode */) {
	*(i8*)(intptr_t)(ws+4016) = p7769; /*rootnode */

	i8 v7770 = (i8)(intptr_t)(ws+224);
	i8 v7771 = *(i8*)(intptr_t)v7770;
	i8 v7772 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7772 = v7771;

	i8 v7773 = (i8)(intptr_t)(ws+4016);
	i8 v7774 = *(i8*)(intptr_t)v7773;
	i8 v7775 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7775)(v7774);

c02_057b:;

	i8 v7776 = (i8)(intptr_t)(ws+224);
	i8 v7777 = *(i8*)(intptr_t)v7776;
	i8 v7778 = (i8)(intptr_t)(ws+4024);
	i8 v7779 = *(i8*)(intptr_t)v7778;
	if (v7777==v7779) goto c02_057e; else goto c02_057d;

c02_057d:;

	i8 v7780 = (i8)(intptr_t)(f57_NextNode);
	i8 v7781;

	((void(*)(i8* /* node */))(intptr_t)v7780)(&v7781);
	i8 v7782 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7782 = v7781;

	i8 v7783 = (i8)(intptr_t)(ws+4032);
	i8 v7784 = *(i8*)(intptr_t)v7783;
	i8 v7785 = (i8)+0;
	if (v7784==v7785) goto c02_0582; else goto c02_0583;

c02_0582:;

	goto c02_057e;

c02_0583:;

c02_057f:;

	i8 v7786 = (i8)(intptr_t)(ws+4032);
	i8 v7787 = *(i8*)(intptr_t)v7786;
	i4 v7788 = v7787;
	i8 v7789 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7789)(v7788);

	i1 v7790 = (i1)+32;
	i8 v7791 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7791)(v7790);

	i8 v7792 = (i8)(intptr_t)(ws+4032);
	i8 v7793 = *(i8*)(intptr_t)v7792;
	i8 v7794 = v7793+(+58);
	i1 v7795 = *(i1*)(intptr_t)v7794;
	i8 v7796 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v7796)(v7795);

	i1 v7797 = (i1)+32;
	i8 v7798 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7798)(v7797);

	i8 v7799 = (i8)(intptr_t)(ws+4032);
	i8 v7800 = *(i8*)(intptr_t)v7799;
	i8 v7801 = v7800+(+56);
	i1 v7802 = *(i1*)(intptr_t)v7801;
	i2 v7803 = v7802;
	i8 v7804 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7804)(v7803);

	i1 v7805 = (i1)+32;
	i8 v7806 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7806)(v7805);

	i8 v7807 = (i8)(intptr_t)(ws+4032);
	i8 v7808 = *(i8*)(intptr_t)v7807;
	i8 v7809 = v7808+(+57);
	i1 v7810 = *(i1*)(intptr_t)v7809;
	i2 v7811 = v7810;
	i8 v7812 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7812)(v7811);

	i1 v7813 = (i1)+32;
	i8 v7814 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7814)(v7813);

	i8 v7815 = (i8)(intptr_t)(ws+4032);
	i8 v7816 = *(i8*)(intptr_t)v7815;
	i8 v7817 = v7816+(+24);
	i8 v7818 = *(i8*)(intptr_t)v7817;
	i4 v7819 = v7818;
	i8 v7820 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7820)(v7819);

	i1 v7821 = (i1)+32;
	i8 v7822 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7822)(v7821);

	i8 v7823 = (i8)(intptr_t)(ws+4032);
	i8 v7824 = *(i8*)(intptr_t)v7823;
	i8 v7825 = v7824+(+32);
	i8 v7826 = *(i8*)(intptr_t)v7825;
	i4 v7827 = v7826;
	i8 v7828 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7828)(v7827);

	i8 v7829 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v7829)();

	goto c02_057b;

c02_057e:;

endsub:;
}
	void f55_PushNode(i8 /* node */);
	void f231_AllocNewInstruction(i8* /* insn */);
	void f56_PopNode(i8* /* node */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f447_PopulateMatchBuffer(i8 /* matchbuf */, i8 /* n */, i8 /* insn */);

// RewindRulePointers workspace at ws+4048 length ws+0
void f457_RewindRulePointers(void) {

	i8 v7872 = (i8)(intptr_t)(ws+3992);
	i8 v7873 = (i8)+3;
	i8 v7874 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v7874)(v7873, v7872);

	i8 v7875 = (i8)(intptr_t)(ws+4000);
	i8 v7876 = (i8)+24;
	i8 v7877 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v7877)(v7876, v7875);

	i8 v7878 = (i8)(intptr_t)(ws+3968);
	i8 v7879 = *(i8*)(intptr_t)v7878;
	i8 v7880 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v7880 = v7879;

	i8 v7881 = (i8)(intptr_t)(ws+3960);
	i8 v7882 = *(i8*)(intptr_t)v7881;
	i8 v7883 = (i8)(intptr_t)(ws+4000);
	i8 v7884 = (i8)(intptr_t)(ws+3992);
	i8 v7885 = (i8)(intptr_t)(f447_PopulateMatchBuffer);

	((void(*)(i8 /* matchbuf */, i8 /* n */, i8 /* insn */))(intptr_t)v7885)(v7884, v7883, v7882);

	i1 v7886 = (i1)+255;
	i8 v7887 = (i8)(intptr_t)(ws+3976);
	*(i1*)(intptr_t)v7887 = v7886;

	i8 v7888 = (i8)(intptr_t)(((i1*)c02_a4ea+0));
	i8 v7889 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v7889 = v7888;

	i8 v7890 = (i8)(intptr_t)(((i1*)c02_a4eb+0));
	i8 v7891 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v7891 = v7890;

	i8 v7892 = (i8)(intptr_t)(((i1*)c02_a4ec-7));
	i8 v7893 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v7893 = v7892;

endsub:;
}
	void f272_MatchPredicate(i1* /* matches */, i8 /* n */, i1 /* rule */);

// TestRule workspace at ws+4048 length ws+27
void f458_TestRule(i1* p7894 /* result */) {

	i1 v7895 = (i1)+0;
	i8 v7896 = (i8)(intptr_t)(ws+4048);
	*(i1*)(intptr_t)v7896 = v7895;

	i8 v7897 = (i8)(intptr_t)(ws+3984);
	i8 v7898 = *(i8*)(intptr_t)v7897;
	i8 v7899 = v7898+(+1);
	i1 v7900 = *(i1*)(intptr_t)v7899;
	i1 v7901 = (i1)+0;
	if (v7900==v7901) goto c02_0593; else goto c02_0592;

c02_0592:;

	i8 v7902 = (i8)(intptr_t)(ws+3968);
	i8 v7903 = *(i8*)(intptr_t)v7902;
	i8 v7904 = v7903+(+56);
	i1 v7905 = *(i1*)(intptr_t)v7904;
	i8 v7906 = (i8)(intptr_t)(ws+3984);
	i8 v7907 = *(i8*)(intptr_t)v7906;
	i8 v7908 = v7907+(+1);
	i1 v7909 = *(i1*)(intptr_t)v7908;
	i1 v7910 = v7905&v7909;
	i1 v7911 = (i1)+0;
	if (v7910==v7911) goto c02_0597; else goto c02_0598;

c02_0597:;

	goto endsub;

c02_0598:;

c02_0594:;

	goto c02_058f;

c02_0593:;

	i8 v7912 = (i8)(intptr_t)(ws+3968);
	i8 v7913 = *(i8*)(intptr_t)v7912;
	i8 v7914 = v7913+(+56);
	i1 v7915 = *(i1*)(intptr_t)v7914;
	i1 v7916 = (i1)+0;
	if (v7915==v7916) goto c02_059d; else goto c02_059c;

c02_059c:;

	goto endsub;

c02_059d:;

c02_0599:;

c02_058f:;

	i8 v7917 = (i8)(intptr_t)(ws+3992);
	i8 v7918 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v7918 = v7917;

	i8 v7919 = (i8)(intptr_t)(ws+4024);
	i8 v7920 = *(i8*)(intptr_t)v7919;
	i8 v7921 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7921 = v7920;

	i8 v7922 = (i8)(intptr_t)(ws+3984);
	i8 v7923 = *(i8*)(intptr_t)v7922;
	i8 v7924 = v7923+(+4);
	i1 v7925 = *(i1*)(intptr_t)v7924;
	i8 v7926 = (i8)(intptr_t)(ws+4072);
	*(i1*)(intptr_t)v7926 = v7925;

c02_05a0:;

	i8 v7927 = (i8)(intptr_t)(ws+4072);
	i1 v7928 = *(i1*)(intptr_t)v7927;
	i1 v7929 = (i1)+0;
	if (v7928==v7929) goto c02_05a3; else goto c02_05a2;

c02_05a2:;

	i8 v7930 = (i8)(intptr_t)(ws+4056);
	i8 v7931 = *(i8*)(intptr_t)v7930;
	i1 v7932 = *(i1*)(intptr_t)v7931;
	i8 v7933 = (i8)(intptr_t)(ws+4073);
	*(i1*)(intptr_t)v7933 = v7932;

	i8 v7934 = (i8)(intptr_t)(ws+4056);
	i8 v7935 = *(i8*)(intptr_t)v7934;
	i8 v7936 = v7935+(+1);
	i8 v7937 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v7937 = v7936;

	i8 v7938 = (i8)(intptr_t)(ws+4072);
	i1 v7939 = *(i1*)(intptr_t)v7938;
	i1 v7940 = v7939&(+1);
	i1 v7941 = (i1)+0;
	if (v7940==v7941) goto c02_05a8; else goto c02_05a7;

c02_05a7:;

	i8 v7942 = (i8)(intptr_t)(ws+4064);
	i8 v7943 = *(i8*)(intptr_t)v7942;
	i1 v7944 = *(i1*)(intptr_t)v7943;
	i8 v7945 = (i8)(intptr_t)(ws+4074);
	*(i1*)(intptr_t)v7945 = v7944;

	i8 v7946 = (i8)(intptr_t)(ws+4064);
	i8 v7947 = *(i8*)(intptr_t)v7946;
	i8 v7948 = v7947+(+1);
	i8 v7949 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v7949 = v7948;

	i8 v7950 = (i8)(intptr_t)(ws+4073);
	i1 v7951 = *(i1*)(intptr_t)v7950;
	i8 v7952 = (i8)(intptr_t)(ws+4074);
	i1 v7953 = *(i1*)(intptr_t)v7952;
	if (v7951==v7953) goto c02_05ad; else goto c02_05ac;

c02_05ac:;

	goto endsub;

c02_05ad:;

c02_05a9:;

	goto c02_05a4;

c02_05a8:;

c02_05a4:;

	i8 v7954 = (i8)(intptr_t)(ws+4072);
	i1 v7955 = *(i1*)(intptr_t)v7954;
	i1 v7956 = (i1)+1;
	i1 v7957 = ((i1)v7955)>>v7956;
	i8 v7958 = (i8)(intptr_t)(ws+4072);
	*(i1*)(intptr_t)v7958 = v7957;

	goto c02_05a0;

c02_05a3:;

	i8 v7959 = (i8)(intptr_t)(ws+3984);
	i8 v7960 = *(i8*)(intptr_t)v7959;
	i1 v7961 = *(i1*)(intptr_t)v7960;
	i1 v7962 = v7961&(+1);
	i1 v7963 = (i1)+0;
	if (v7962==v7963) goto c02_05b4; else goto c02_05b5;

c02_05b5:;

	i8 v7964 = (i8)(intptr_t)(ws+3976);
	i1 v7965 = *(i1*)(intptr_t)v7964;
	i8 v7966 = (i8)(intptr_t)(ws+4000);
	i8 v7967 = (i8)(intptr_t)(f272_MatchPredicate);
	i1 v7968;

	((void(*)(i1* /* matches */, i8 /* n */, i1 /* rule */))(intptr_t)v7967)(&v7968, v7966, v7965);
	i1 v7969 = (i1)+0;
	if (v7968==v7969) goto c02_05b3; else goto c02_05b4;

c02_05b3:;

	goto endsub;

c02_05b4:;

c02_05ae:;

	i1 v7970 = (i1)+1;
	i8 v7971 = (i8)(intptr_t)(ws+4048);
	*(i1*)(intptr_t)v7971 = v7970;

endsub:;
	*p7894 = *(i1*)(intptr_t)(ws+4048);
}
	void f457_RewindRulePointers(void);
	void f114_MidFallback(i8* /* m */, i8 /* left */);

// ConvertNodeToFallback workspace at ws+4048 length ws+25
void f459_ConvertNodeToFallback(void) {

	i8 v7994 = (i8)(intptr_t)(ws+3968);
	i8 v7995 = *(i8*)(intptr_t)v7994;
	i8 v7996 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v7996 = v7995;

	i8 v7997 = (i8)(intptr_t)(ws+4048);
	i8 v7998 = *(i8*)(intptr_t)v7997;
	i8 v7999 = (i8)(intptr_t)(f114_MidFallback);
	i8 v8000;

	((void(*)(i8* /* m */, i8 /* left */))(intptr_t)v7999)(&v8000, v7998);
	i8 v8001 = (i8)(intptr_t)(ws+3968);
	*(i8*)(intptr_t)v8001 = v8000;

	i8 v8002 = (i8)(intptr_t)(ws+4048);
	i8 v8003 = *(i8*)(intptr_t)v8002;
	i8 v8004 = v8003+(+48);
	i8 v8005 = *(i8*)(intptr_t)v8004;
	i8 v8006 = (i8)(intptr_t)(ws+3968);
	i8 v8007 = *(i8*)(intptr_t)v8006;
	i8 v8008 = v8007+(+48);
	*(i8*)(intptr_t)v8008 = v8005;

	i8 v8009 = (i8)(intptr_t)(ws+3968);
	i8 v8010 = *(i8*)(intptr_t)v8009;
	i8 v8011 = v8010+(+48);
	i8 v8012 = *(i8*)(intptr_t)v8011;
	i8 v8013 = v8012+(+16);
	i8 v8014 = *(i8*)(intptr_t)v8013;
	i8 v8015 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v8015 = v8014;

	i8 v8016 = (i8)(intptr_t)(ws+4048);
	i8 v8017 = *(i8*)(intptr_t)v8016;
	i8 v8018 = v8017+(+56);
	i1 v8019 = *(i1*)(intptr_t)v8018;
	i8 v8020 = (i8)(intptr_t)(ws+3968);
	i8 v8021 = *(i8*)(intptr_t)v8020;
	i8 v8022 = v8021+(+56);
	*(i1*)(intptr_t)v8022 = v8019;

	i8 v8023 = (i8)(intptr_t)(ws+4056);
	i8 v8024 = *(i8*)(intptr_t)v8023;
	i8 v8025 = v8024+(+40);
	i8 v8026 = *(i8*)(intptr_t)v8025;
	i8 v8027 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v8027 = v8026;

	i1 v8028 = (i1)+0;
	i8 v8029 = (i8)(intptr_t)(ws+4072);
	*(i1*)(intptr_t)v8029 = v8028;

c02_05c7:;

	i8 v8030 = (i8)(intptr_t)(ws+4072);
	i1 v8031 = *(i1*)(intptr_t)v8030;
	i1 v8032 = (i1)+3;
	if (v8031==v8032) goto c02_05ca; else goto c02_05c9;

c02_05c9:;

	i8 v8033 = (i8)(intptr_t)(ws+4064);
	i8 v8034 = *(i8*)(intptr_t)v8033;
	i8 v8035 = v8034+(+16);
	i8 v8036 = (i8)(intptr_t)(ws+4072);
	i1 v8037 = *(i1*)(intptr_t)v8036;
	i8 v8038 = v8037;
	i1 v8039 = (i1)+3;
	i8 v8040 = ((i8)v8038)<<v8039;
	i8 v8041 = v8035+v8040;
	i8 v8042 = *(i8*)(intptr_t)v8041;
	i8 v8043 = (i8)(intptr_t)(ws+4048);
	i8 v8044 = *(i8*)(intptr_t)v8043;
	if (v8042==v8044) goto c02_05ce; else goto c02_05cf;

c02_05ce:;

	i8 v8045 = (i8)(intptr_t)(ws+3968);
	i8 v8046 = *(i8*)(intptr_t)v8045;
	i8 v8047 = (i8)(intptr_t)(ws+4064);
	i8 v8048 = *(i8*)(intptr_t)v8047;
	i8 v8049 = v8048+(+16);
	i8 v8050 = (i8)(intptr_t)(ws+4072);
	i1 v8051 = *(i1*)(intptr_t)v8050;
	i8 v8052 = v8051;
	i1 v8053 = (i1)+3;
	i8 v8054 = ((i8)v8052)<<v8053;
	i8 v8055 = v8049+v8054;
	*(i8*)(intptr_t)v8055 = v8046;

	goto c02_05cb;

c02_05cf:;

c02_05cb:;

	i8 v8056 = (i8)(intptr_t)(ws+4072);
	i1 v8057 = *(i1*)(intptr_t)v8056;
	i1 v8058 = v8057+(+1);
	i8 v8059 = (i8)(intptr_t)(ws+4072);
	*(i1*)(intptr_t)v8059 = v8058;

	goto c02_05c7;

c02_05ca:;

endsub:;
}
	void f459_ConvertNodeToFallback(void);
	void f457_RewindRulePointers(void);
	void f69_StartError(void);
const i1 c02_s016e[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f8_print_char(i1 /* c */);
const i1 c02_s016f[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f70_EndError(void);
	void f458_TestRule(i1* /* result */);
	void f55_PushNode(i8 /* node */);

// CopyChildNodes workspace at ws+4048 length ws+16
void f460_CopyChildNodes(void) {

	i8 v8156 = (i8)(intptr_t)(ws+3984);
	i8 v8157 = *(i8*)(intptr_t)v8156;
	i8 v8158 = v8157+(+5);
	i1 v8159 = *(i1*)(intptr_t)v8158;
	i8 v8160 = (i8)(intptr_t)(ws+4048);
	*(i1*)(intptr_t)v8160 = v8159;

	i8 v8161 = (i8)(intptr_t)(ws+3984);
	i8 v8162 = *(i8*)(intptr_t)v8161;
	i8 v8163 = v8162+(+6);
	i1 v8164 = *(i1*)(intptr_t)v8163;
	i8 v8165 = (i8)(intptr_t)(ws+4049);
	*(i1*)(intptr_t)v8165 = v8164;

	i1 v8166 = (i1)+0;
	i8 v8167 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v8167 = v8166;

c02_05f3:;

	i8 v8168 = (i8)(intptr_t)(ws+3928);
	i1 v8169 = *(i1*)(intptr_t)v8168;
	i1 v8170 = (i1)+3;
	if (v8169==v8170) goto c02_05f6; else goto c02_05f5;

c02_05f5:;

	i8 v8171 = (i8)(intptr_t)(ws+4000);
	i8 v8172 = (i8)(intptr_t)(ws+3928);
	i1 v8173 = *(i1*)(intptr_t)v8172;
	i8 v8174 = v8173;
	i1 v8175 = (i1)+3;
	i8 v8176 = ((i8)v8174)<<v8175;
	i8 v8177 = v8171+v8176;
	i8 v8178 = *(i8*)(intptr_t)v8177;
	i8 v8179 = (i8)(intptr_t)(ws+4056);
	*(i8*)(intptr_t)v8179 = v8178;

	i8 v8180 = (i8)(intptr_t)(ws+4048);
	i1 v8181 = *(i1*)(intptr_t)v8180;
	i1 v8182 = v8181&(+1);
	i1 v8183 = (i1)+0;
	if (v8182==v8183) goto c02_05fb; else goto c02_05fa;

c02_05fa:;

	i8 v8184 = (i8)(intptr_t)(ws+4056);
	i8 v8185 = *(i8*)(intptr_t)v8184;
	i8 v8186 = (i8)(intptr_t)(ws+3960);
	i8 v8187 = *(i8*)(intptr_t)v8186;
	i8 v8188 = v8187+(+16);
	i8 v8189 = (i8)(intptr_t)(ws+3928);
	i1 v8190 = *(i1*)(intptr_t)v8189;
	i8 v8191 = v8190;
	i1 v8192 = (i1)+3;
	i8 v8193 = ((i8)v8191)<<v8192;
	i8 v8194 = v8188+v8193;
	*(i8*)(intptr_t)v8194 = v8185;

	i8 v8195 = (i8)(intptr_t)(ws+4049);
	i1 v8196 = *(i1*)(intptr_t)v8195;
	i1 v8197 = v8196&(+1);
	i1 v8198 = (i1)+0;
	if (v8197==v8198) goto c02_0600; else goto c02_05ff;

c02_05ff:;

	i8 v8199 = (i8)(intptr_t)(ws+4056);
	i8 v8200 = *(i8*)(intptr_t)v8199;
	i8 v8201 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8201)(v8200);

	i8 v8202 = (i8)(intptr_t)(ws+4032);
	i8 v8203 = *(i8*)(intptr_t)v8202;
	i1 v8204 = *(i1*)(intptr_t)v8203;
	i8 v8205 = (i8)(intptr_t)(ws+4056);
	i8 v8206 = *(i8*)(intptr_t)v8205;
	i8 v8207 = v8206+(+56);
	*(i1*)(intptr_t)v8207 = v8204;

	i8 v8208 = (i8)(intptr_t)(ws+4032);
	i8 v8209 = *(i8*)(intptr_t)v8208;
	i8 v8210 = v8209+(+1);
	i8 v8211 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v8211 = v8210;

	i8 v8212 = (i8)(intptr_t)(ws+3960);
	i8 v8213 = *(i8*)(intptr_t)v8212;
	i8 v8214 = (i8)(intptr_t)(ws+4056);
	i8 v8215 = *(i8*)(intptr_t)v8214;
	i8 v8216 = v8215+(+48);
	*(i8*)(intptr_t)v8216 = v8213;

	goto c02_05fc;

c02_0600:;

c02_05fc:;

	goto c02_05f7;

c02_05fb:;

c02_05f7:;

	i8 v8217 = (i8)(intptr_t)(ws+4048);
	i1 v8218 = *(i1*)(intptr_t)v8217;
	i1 v8219 = (i1)+1;
	i1 v8220 = ((i1)v8218)>>v8219;
	i8 v8221 = (i8)(intptr_t)(ws+4048);
	*(i1*)(intptr_t)v8221 = v8220;

	i8 v8222 = (i8)(intptr_t)(ws+4049);
	i1 v8223 = *(i1*)(intptr_t)v8222;
	i1 v8224 = (i1)+1;
	i1 v8225 = ((i1)v8223)>>v8224;
	i8 v8226 = (i8)(intptr_t)(ws+4049);
	*(i1*)(intptr_t)v8226 = v8225;

	i8 v8227 = (i8)(intptr_t)(ws+3928);
	i1 v8228 = *(i1*)(intptr_t)v8227;
	i1 v8229 = v8228+(+1);
	i8 v8230 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v8230 = v8229;

	goto c02_05f3;

c02_05f6:;

	i8 v8231 = (i8)(intptr_t)(ws+3960);
	i8 v8232 = *(i8*)(intptr_t)v8231;
	i8 v8233 = (i8)(intptr_t)(ws+3968);
	i8 v8234 = *(i8*)(intptr_t)v8233;
	i8 v8235 = v8234+(+40);
	*(i8*)(intptr_t)v8235 = v8232;

endsub:;
}
	void f460_CopyChildNodes(void);

// InstructionMatcher workspace at ws+3992 length ws+49
void f456_InstructionMatcher(void) {



	i8 v7972 = (i8)(intptr_t)(f457_RewindRulePointers);

	((void(*)(void))(intptr_t)v7972)();

c02_05b6:;

	i8 v7973 = (i8)(intptr_t)(ws+3984);
	i8 v7974 = *(i8*)(intptr_t)v7973;
	i8 v7975 = v7974+(+7);
	i8 v7976 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v7976 = v7975;

	i8 v7977 = (i8)(intptr_t)(ws+3976);
	i1 v7978 = *(i1*)(intptr_t)v7977;
	i1 v7979 = v7978+(+1);
	i8 v7980 = (i8)(intptr_t)(ws+3976);
	*(i1*)(intptr_t)v7980 = v7979;

	i8 v7981 = (i8)(intptr_t)(ws+3984);
	i8 v7982 = *(i8*)(intptr_t)v7981;
	i8 v7983 = (i8)(intptr_t)(((i1*)c02_a4ec+1309));
	if (v7982==v7983) goto c02_05bb; else goto c02_05bc;

c02_05bb:;

	i8 v7984 = (i8)(intptr_t)(ws+3968);
	i8 v7985 = *(i8*)(intptr_t)v7984;
	i8 v7986 = v7985+(+58);
	i1 v7987 = *(i1*)(intptr_t)v7986;
	i1 v7988 = (i1)+22;
	if (v7987==v7988) goto c02_05c3; else goto c02_05c4;

c02_05c4:;

	i8 v7989 = (i8)(intptr_t)(ws+3968);
	i8 v7990 = *(i8*)(intptr_t)v7989;
	i8 v7991 = v7990+(+48);
	i8 v7992 = *(i8*)(intptr_t)v7991;
	i8 v7993 = (i8)+0;
	if (v7992==v7993) goto c02_05c3; else goto c02_05c2;

c02_05c2:;


	i8 v8060 = (i8)(intptr_t)(f459_ConvertNodeToFallback);

	((void(*)(void))(intptr_t)v8060)();

	i8 v8061 = (i8)(intptr_t)(f457_RewindRulePointers);

	((void(*)(void))(intptr_t)v8061)();

	goto c02_05b6;

c02_05c3:;

c02_05bd:;

	i8 v8062 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8062)();

	i8 v8063 = (i8)(intptr_t)c02_s016e;
	i8 v8064 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8064)(v8063);

	i1 v8065 = (i1)+0;
	i8 v8066 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v8066 = v8065;

c02_05d2:;

	i8 v8067 = (i8)(intptr_t)(ws+3928);
	i1 v8068 = *(i1*)(intptr_t)v8067;
	i1 v8069 = (i1)+3;
	if (v8068==v8069) goto c02_05d5; else goto c02_05d4;

c02_05d4:;

	i8 v8070 = (i8)(intptr_t)(ws+3992);
	i8 v8071 = (i8)(intptr_t)(ws+3928);
	i1 v8072 = *(i1*)(intptr_t)v8071;
	i8 v8073 = v8072;
	i8 v8074 = v8070+v8073;
	i1 v8075 = *(i1*)(intptr_t)v8074;
	i8 v8076 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v8076)(v8075);

	i1 v8077 = (i1)+32;
	i8 v8078 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v8078)(v8077);

	i8 v8079 = (i8)(intptr_t)(ws+3928);
	i1 v8080 = *(i1*)(intptr_t)v8079;
	i1 v8081 = v8080+(+1);
	i8 v8082 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v8082 = v8081;

	goto c02_05d2;

c02_05d5:;

	i8 v8083 = (i8)(intptr_t)c02_s016f;
	i8 v8084 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8084)(v8083);

	i8 v8085 = (i8)(intptr_t)(ws+3968);
	i8 v8086 = *(i8*)(intptr_t)v8085;
	i8 v8087 = v8086+(+56);
	i1 v8088 = *(i1*)(intptr_t)v8087;
	i4 v8089 = v8088;
	i8 v8090 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8090)(v8089);

	i8 v8091 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8091)();

	goto c02_05b8;

c02_05bc:;

c02_05b8:;

	i8 v8092 = (i8)(intptr_t)(f458_TestRule);
	i1 v8093;

	((void(*)(i1* /* result */))(intptr_t)v8092)(&v8093);
	i1 v8094 = (i1)+0;
	if (v8093==v8094) goto c02_05da; else goto c02_05d9;

c02_05d9:;

	goto c02_05b7;

c02_05da:;

c02_05d6:;

	i8 v8095 = (i8)(intptr_t)(ws+3984);
	i8 v8096 = *(i8*)(intptr_t)v8095;
	i8 v8097 = v8096+(+4);
	i1 v8098 = *(i1*)(intptr_t)v8097;
	i8 v8099 = (i8)(intptr_t)(ws+4040);
	*(i1*)(intptr_t)v8099 = v8098;

c02_05dd:;

	i8 v8100 = (i8)(intptr_t)(ws+4040);
	i1 v8101 = *(i1*)(intptr_t)v8100;
	i1 v8102 = (i1)+0;
	if (v8101==v8102) goto c02_05e0; else goto c02_05df;

c02_05df:;

	i8 v8103 = (i8)(intptr_t)(ws+4040);
	i1 v8104 = *(i1*)(intptr_t)v8103;
	i1 v8105 = v8104&(+1);
	i1 v8106 = (i1)+0;
	if (v8105==v8106) goto c02_05e5; else goto c02_05e4;

c02_05e4:;

	i8 v8107 = (i8)(intptr_t)(ws+4024);
	i8 v8108 = *(i8*)(intptr_t)v8107;
	i8 v8109 = v8108+(+1);
	i8 v8110 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v8110 = v8109;

	goto c02_05e1;

c02_05e5:;

c02_05e1:;

	i8 v8111 = (i8)(intptr_t)(ws+4040);
	i1 v8112 = *(i1*)(intptr_t)v8111;
	i1 v8113 = (i1)+1;
	i1 v8114 = ((i1)v8112)>>v8113;
	i8 v8115 = (i8)(intptr_t)(ws+4040);
	*(i1*)(intptr_t)v8115 = v8114;

	goto c02_05dd;

c02_05e0:;

	i8 v8116 = (i8)(intptr_t)(ws+3984);
	i8 v8117 = *(i8*)(intptr_t)v8116;
	i8 v8118 = v8117+(+6);
	i1 v8119 = *(i1*)(intptr_t)v8118;
	i8 v8120 = (i8)(intptr_t)(ws+4040);
	*(i1*)(intptr_t)v8120 = v8119;

c02_05e8:;

	i8 v8121 = (i8)(intptr_t)(ws+4040);
	i1 v8122 = *(i1*)(intptr_t)v8121;
	i1 v8123 = (i1)+0;
	if (v8122==v8123) goto c02_05eb; else goto c02_05ea;

c02_05ea:;

	i8 v8124 = (i8)(intptr_t)(ws+4040);
	i1 v8125 = *(i1*)(intptr_t)v8124;
	i1 v8126 = v8125&(+1);
	i1 v8127 = (i1)+0;
	if (v8126==v8127) goto c02_05f0; else goto c02_05ef;

c02_05ef:;

	i8 v8128 = (i8)(intptr_t)(ws+4032);
	i8 v8129 = *(i8*)(intptr_t)v8128;
	i8 v8130 = v8129+(+1);
	i8 v8131 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v8131 = v8130;

	goto c02_05ec;

c02_05f0:;

c02_05ec:;

	i8 v8132 = (i8)(intptr_t)(ws+4040);
	i1 v8133 = *(i1*)(intptr_t)v8132;
	i1 v8134 = (i1)+1;
	i1 v8135 = ((i1)v8133)>>v8134;
	i8 v8136 = (i8)(intptr_t)(ws+4040);
	*(i1*)(intptr_t)v8136 = v8135;

	goto c02_05e8;

c02_05eb:;

	goto c02_05b6;

c02_05b7:;

	i8 v8137 = (i8)(intptr_t)(ws+3976);
	i1 v8138 = *(i1*)(intptr_t)v8137;
	i8 v8139 = (i8)(intptr_t)(ws+3960);
	i8 v8140 = *(i8*)(intptr_t)v8139;
	i8 v8141 = v8140+(+62);
	*(i1*)(intptr_t)v8141 = v8138;

	i8 v8142 = (i8)(intptr_t)(ws+3984);
	i8 v8143 = *(i8*)(intptr_t)v8142;
	i8 v8144 = v8143+(+2);
	i1 v8145 = *(i1*)(intptr_t)v8144;
	i8 v8146 = (i8)(intptr_t)(ws+3960);
	i8 v8147 = *(i8*)(intptr_t)v8146;
	i8 v8148 = v8147+(+40);
	*(i1*)(intptr_t)v8148 = v8145;

	i8 v8149 = (i8)(intptr_t)(ws+3984);
	i8 v8150 = *(i8*)(intptr_t)v8149;
	i8 v8151 = v8150+(+3);
	i1 v8152 = *(i1*)(intptr_t)v8151;
	i8 v8153 = (i8)(intptr_t)(ws+3960);
	i8 v8154 = *(i8*)(intptr_t)v8153;
	i8 v8155 = v8154+(+43);
	*(i1*)(intptr_t)v8155 = v8152;


	i8 v8236 = (i8)(intptr_t)(f460_CopyChildNodes);

	((void(*)(void))(intptr_t)v8236)();

endsub:;
}
	void f456_InstructionMatcher(void);
	void f448_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f451_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f449_CalculateBlockedRegisters(i1* /* blocked */, i8 /* last */, i8 /* insn */);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f233_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f450_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f234_FindCompatibleRegisters(i1* /* compatible */, i1 /* inreg */);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f233_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f233_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f450_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f452_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f233_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f450_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f233_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f451_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f454_PrintNodes(i8 /* rootnode */);
const i1 c02_s0170[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0171[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0172[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0173[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0174[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0175[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0176[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0 };
	void f71_SimpleError(i8 /* message */);

// deadlock workspace at ws+4016 length ws+0
void f462_deadlock(void) {

	i8 v8597 = (i8)(intptr_t)(ws+3920);
	i8 v8598 = *(i8*)(intptr_t)v8597;
	i8 v8599 = (i8)(intptr_t)(f454_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v8599)(v8598);

	i8 v8600 = (i8)(intptr_t)c02_s0170;
	i8 v8601 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8601)(v8600);

	i8 v8602 = (i8)(intptr_t)(ws+3960);
	i8 v8603 = *(i8*)(intptr_t)v8602;
	i8 v8604 = v8603+(+16);
	i8 v8605 = *(i8*)(intptr_t)v8604;
	i4 v8606 = v8605;
	i8 v8607 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8607)(v8606);

	i8 v8608 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8608)();

	i8 v8609 = (i8)(intptr_t)c02_s0171;
	i8 v8610 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8610)(v8609);

	i8 v8611 = (i8)(intptr_t)(ws+4000);
	i8 v8612 = *(i8*)(intptr_t)v8611;
	i8 v8613 = v8612+(+16);
	i8 v8614 = *(i8*)(intptr_t)v8613;
	i4 v8615 = v8614;
	i8 v8616 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8616)(v8615);

	i8 v8617 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8617)();

	i8 v8618 = (i8)(intptr_t)c02_s0172;
	i8 v8619 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8619)(v8618);

	i8 v8620 = (i8)(intptr_t)(ws+3960);
	i8 v8621 = *(i8*)(intptr_t)v8620;
	i8 v8622 = v8621+(+40);
	i1 v8623 = *(i1*)(intptr_t)v8622;
	i4 v8624 = v8623;
	i8 v8625 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8625)(v8624);

	i8 v8626 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8626)();

	i8 v8627 = (i8)(intptr_t)c02_s0173;
	i8 v8628 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8628)(v8627);

	i8 v8629 = (i8)(intptr_t)(ws+3960);
	i8 v8630 = *(i8*)(intptr_t)v8629;
	i8 v8631 = v8630+(+43);
	i1 v8632 = *(i1*)(intptr_t)v8631;
	i4 v8633 = v8632;
	i8 v8634 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8634)(v8633);

	i8 v8635 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8635)();

	i8 v8636 = (i8)(intptr_t)c02_s0174;
	i8 v8637 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8637)(v8636);

	i8 v8638 = (i8)(intptr_t)(ws+3968);
	i8 v8639 = *(i8*)(intptr_t)v8638;
	i8 v8640 = v8639+(+56);
	i1 v8641 = *(i1*)(intptr_t)v8640;
	i4 v8642 = v8641;
	i8 v8643 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8643)(v8642);

	i8 v8644 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8644)();

	i8 v8645 = (i8)(intptr_t)c02_s0175;
	i8 v8646 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8646)(v8645);

	i8 v8647 = (i8)(intptr_t)(ws+4000);
	i8 v8648 = *(i8*)(intptr_t)v8647;
	i8 v8649 = v8648+(+42);
	i1 v8650 = *(i1*)(intptr_t)v8649;
	i4 v8651 = v8650;
	i8 v8652 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8652)(v8651);

	i8 v8653 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8653)();

	i8 v8654 = (i8)(intptr_t)c02_s0176;
	i8 v8655 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8655)(v8654);

endsub:;
}
	void f462_deadlock(void);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f233_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f451_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f462_deadlock(void);
	void f235_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f233_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f452_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);

// AllocateRegister workspace at ws+3992 length ws+20
void f461_AllocateRegister(void) {

	i8 v8243 = (i8)(intptr_t)(ws+3960);
	i8 v8244 = *(i8*)(intptr_t)v8243;
	i8 v8245 = v8244+(+40);
	i1 v8246 = *(i1*)(intptr_t)v8245;
	i8 v8247 = (i8)(intptr_t)(f448_IsStackedRegister);
	i1 v8248;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v8247)(&v8248, v8246);
	i1 v8249 = (i1)+0;
	if (v8248==v8249) goto c02_060a; else goto c02_0609;

c02_0609:;

	i8 v8250 = (i8)(intptr_t)(ws+3968);
	i8 v8251 = *(i8*)(intptr_t)v8250;
	i8 v8252 = v8251+(+56);
	i1 v8253 = *(i1*)(intptr_t)v8252;
	i8 v8254 = (i8)(intptr_t)(ws+3960);
	i8 v8255 = *(i8*)(intptr_t)v8254;
	i8 v8256 = v8255+(+40);
	i1 v8257 = *(i1*)(intptr_t)v8256;
	i1 v8258 = v8253&v8257;
	i8 v8259 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v8259 = v8258;

	i8 v8260 = (i8)(intptr_t)(ws+3992);
	i1 v8261 = *(i1*)(intptr_t)v8260;
	i1 v8262 = (i1)+0;
	if (v8261==v8262) goto c02_060f; else goto c02_060e;

c02_060e:;

	i8 v8263 = (i8)(intptr_t)(ws+3992);
	i1 v8264 = *(i1*)(intptr_t)v8263;
	i8 v8265 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8266;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8265)(&v8266, v8264);
	i8 v8267 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v8267 = v8266;

	i8 v8268 = (i8)(intptr_t)(ws+3992);
	i1 v8269 = *(i1*)(intptr_t)v8268;
	i8 v8270 = (i8)(intptr_t)(ws+3968);
	i8 v8271 = *(i8*)(intptr_t)v8270;
	i8 v8272 = v8271+(+57);
	*(i1*)(intptr_t)v8272 = v8269;

	i8 v8273 = (i8)(intptr_t)(ws+3992);
	i1 v8274 = *(i1*)(intptr_t)v8273;
	i8 v8275 = (i8)(intptr_t)(ws+3960);
	i8 v8276 = *(i8*)(intptr_t)v8275;
	i8 v8277 = v8276+(+41);
	*(i1*)(intptr_t)v8277 = v8274;

	goto c02_060b;

c02_060f:;

	i8 v8278 = (i8)(intptr_t)(ws+3960);
	i8 v8279 = *(i8*)(intptr_t)v8278;
	i8 v8280 = v8279+(+40);
	i1 v8281 = *(i1*)(intptr_t)v8280;
	i8 v8282 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8283;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8282)(&v8283, v8281);
	i8 v8284 = (i8)(intptr_t)(ws+3960);
	i8 v8285 = *(i8*)(intptr_t)v8284;
	i8 v8286 = v8285+(+41);
	*(i1*)(intptr_t)v8286 = v8283;

	i8 v8287 = (i8)(intptr_t)(ws+3968);
	i8 v8288 = *(i8*)(intptr_t)v8287;
	i8 v8289 = v8288+(+56);
	i1 v8290 = *(i1*)(intptr_t)v8289;
	i8 v8291 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8292;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8291)(&v8292, v8290);
	i8 v8293 = (i8)(intptr_t)(ws+3968);
	i8 v8294 = *(i8*)(intptr_t)v8293;
	i8 v8295 = v8294+(+57);
	*(i1*)(intptr_t)v8295 = v8292;

	i8 v8296 = (i8)(intptr_t)(ws+3960);
	i8 v8297 = *(i8*)(intptr_t)v8296;
	i8 v8298 = (i8)(intptr_t)(ws+3960);
	i8 v8299 = *(i8*)(intptr_t)v8298;
	i8 v8300 = v8299+(+41);
	i1 v8301 = *(i1*)(intptr_t)v8300;
	i8 v8302 = (i8)(intptr_t)(ws+3968);
	i8 v8303 = *(i8*)(intptr_t)v8302;
	i8 v8304 = v8303+(+57);
	i1 v8305 = *(i1*)(intptr_t)v8304;
	i8 v8306 = (i8)(intptr_t)(f451_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8306)(v8305, v8301, v8297);

c02_060b:;

	goto c02_0606;

c02_060a:;

	i8 v8307 = (i8)(intptr_t)(ws+3968);
	i8 v8308 = *(i8*)(intptr_t)v8307;
	i8 v8309 = v8308+(+48);
	i8 v8310 = *(i8*)(intptr_t)v8309;
	i8 v8311 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v8311 = v8310;

	i8 v8312 = (i8)(intptr_t)(ws+4000);
	i8 v8313 = *(i8*)(intptr_t)v8312;
	i8 v8314 = (i8)(intptr_t)(ws+3960);
	i8 v8315 = *(i8*)(intptr_t)v8314;
	i8 v8316 = (i8)(intptr_t)(f449_CalculateBlockedRegisters);
	i1 v8317;

	((void(*)(i1* /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8316)(&v8317, v8315, v8313);
	i8 v8318 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v8318 = v8317;

	i8 v8319 = (i8)(intptr_t)(ws+3968);
	i8 v8320 = *(i8*)(intptr_t)v8319;
	i8 v8321 = v8320+(+56);
	i1 v8322 = *(i1*)(intptr_t)v8321;
	i8 v8323 = (i8)(intptr_t)(ws+3960);
	i8 v8324 = *(i8*)(intptr_t)v8323;
	i8 v8325 = v8324+(+40);
	i1 v8326 = *(i1*)(intptr_t)v8325;
	i1 v8327 = v8322&v8326;
	i8 v8328 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v8328 = v8327;

	i8 v8329 = (i8)(intptr_t)(ws+3992);
	i1 v8330 = *(i1*)(intptr_t)v8329;
	i8 v8331 = (i8)(intptr_t)(ws+4008);
	i1 v8332 = *(i1*)(intptr_t)v8331;
	i8 v8333 = (i8)(intptr_t)(ws+3960);
	i8 v8334 = *(i8*)(intptr_t)v8333;
	i8 v8335 = v8334+(+43);
	i1 v8336 = *(i1*)(intptr_t)v8335;
	i1 v8337 = v8332|v8336;
	i8 v8338 = (i8)(intptr_t)(ws+4000);
	i8 v8339 = *(i8*)(intptr_t)v8338;
	i8 v8340 = v8339+(+42);
	i1 v8341 = *(i1*)(intptr_t)v8340;
	i1 v8342 = v8337|v8341;
	i1 v8343 = ~v8342;
	i1 v8344 = v8330&v8343;
	i8 v8345 = (i8)(intptr_t)(ws+4009);
	*(i1*)(intptr_t)v8345 = v8344;

	i8 v8346 = (i8)(intptr_t)(ws+4009);
	i1 v8347 = *(i1*)(intptr_t)v8346;
	i1 v8348 = (i1)+0;
	if (v8347==v8348) goto c02_0614; else goto c02_0613;

c02_0613:;

	i8 v8349 = (i8)(intptr_t)(ws+4009);
	i1 v8350 = *(i1*)(intptr_t)v8349;
	i8 v8351 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8352;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8351)(&v8352, v8350);
	i8 v8353 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v8353 = v8352;

	i8 v8354 = (i8)(intptr_t)(ws+3992);
	i1 v8355 = *(i1*)(intptr_t)v8354;
	i8 v8356 = (i8)(intptr_t)(ws+3968);
	i8 v8357 = *(i8*)(intptr_t)v8356;
	i8 v8358 = v8357+(+57);
	*(i1*)(intptr_t)v8358 = v8355;

	i8 v8359 = (i8)(intptr_t)(ws+3992);
	i1 v8360 = *(i1*)(intptr_t)v8359;
	i8 v8361 = (i8)(intptr_t)(ws+3960);
	i8 v8362 = *(i8*)(intptr_t)v8361;
	i8 v8363 = v8362+(+41);
	*(i1*)(intptr_t)v8363 = v8360;

	i8 v8364 = (i8)(intptr_t)(ws+3992);
	i1 v8365 = *(i1*)(intptr_t)v8364;
	i8 v8366 = (i8)(intptr_t)(f233_FindConflictingRegisters);
	i1 v8367;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8366)(&v8367, v8365);
	i8 v8368 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v8368 = v8367;

	i8 v8369 = (i8)(intptr_t)(ws+4000);
	i8 v8370 = *(i8*)(intptr_t)v8369;
	i8 v8371 = v8370+(+42);
	i1 v8372 = *(i1*)(intptr_t)v8371;
	i8 v8373 = (i8)(intptr_t)(ws+4008);
	i1 v8374 = *(i1*)(intptr_t)v8373;
	i1 v8375 = v8372|v8374;
	i8 v8376 = (i8)(intptr_t)(ws+4000);
	i8 v8377 = *(i8*)(intptr_t)v8376;
	i8 v8378 = v8377+(+42);
	*(i1*)(intptr_t)v8378 = v8375;

	i8 v8379 = (i8)(intptr_t)(ws+4000);
	i8 v8380 = *(i8*)(intptr_t)v8379;
	i8 v8381 = (i8)(intptr_t)(ws+3960);
	i8 v8382 = *(i8*)(intptr_t)v8381;
	i8 v8383 = (i8)(intptr_t)(ws+4008);
	i1 v8384 = *(i1*)(intptr_t)v8383;
	i8 v8385 = (i8)(intptr_t)(f450_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8385)(v8384, v8382, v8380);

	i8 v8386 = (i8)(intptr_t)(ws+3960);
	i8 v8387 = *(i8*)(intptr_t)v8386;
	i8 v8388 = v8387+(+43);
	i1 v8389 = *(i1*)(intptr_t)v8388;
	i8 v8390 = (i8)(intptr_t)(ws+4008);
	i1 v8391 = *(i1*)(intptr_t)v8390;
	i1 v8392 = v8389|v8391;
	i8 v8393 = (i8)(intptr_t)(ws+3960);
	i8 v8394 = *(i8*)(intptr_t)v8393;
	i8 v8395 = v8394+(+43);
	*(i1*)(intptr_t)v8395 = v8392;

	goto c02_0610;

c02_0614:;

	i8 v8396 = (i8)(intptr_t)(ws+3968);
	i8 v8397 = *(i8*)(intptr_t)v8396;
	i8 v8398 = v8397+(+56);
	i1 v8399 = *(i1*)(intptr_t)v8398;
	i8 v8400 = (i8)(intptr_t)(f234_FindCompatibleRegisters);
	i1 v8401;

	((void(*)(i1* /* compatible */, i1 /* inreg */))(intptr_t)v8400)(&v8401, v8399);
	i8 v8402 = (i8)(intptr_t)(ws+4010);
	*(i1*)(intptr_t)v8402 = v8401;

	i8 v8403 = (i8)(intptr_t)(ws+3960);
	i8 v8404 = *(i8*)(intptr_t)v8403;
	i8 v8405 = v8404+(+40);
	i1 v8406 = *(i1*)(intptr_t)v8405;
	i8 v8407 = (i8)(intptr_t)(ws+4010);
	i1 v8408 = *(i1*)(intptr_t)v8407;
	i1 v8409 = v8406&v8408;
	i8 v8410 = (i8)(intptr_t)(ws+4008);
	i1 v8411 = *(i1*)(intptr_t)v8410;
	i8 v8412 = (i8)(intptr_t)(ws+3960);
	i8 v8413 = *(i8*)(intptr_t)v8412;
	i8 v8414 = v8413+(+43);
	i1 v8415 = *(i1*)(intptr_t)v8414;
	i1 v8416 = v8411|v8415;
	i1 v8417 = ~v8416;
	i1 v8418 = v8409&v8417;
	i8 v8419 = (i8)(intptr_t)(ws+4009);
	*(i1*)(intptr_t)v8419 = v8418;

	i8 v8420 = (i8)(intptr_t)(ws+3968);
	i8 v8421 = *(i8*)(intptr_t)v8420;
	i8 v8422 = v8421+(+56);
	i1 v8423 = *(i1*)(intptr_t)v8422;
	i8 v8424 = (i8)(intptr_t)(ws+4000);
	i8 v8425 = *(i8*)(intptr_t)v8424;
	i8 v8426 = v8425+(+42);
	i1 v8427 = *(i1*)(intptr_t)v8426;
	i1 v8428 = ~v8427;
	i1 v8429 = v8423&v8428;
	i8 v8430 = (i8)(intptr_t)(ws+4011);
	*(i1*)(intptr_t)v8430 = v8429;

	i8 v8431 = (i8)(intptr_t)(ws+4009);
	i1 v8432 = *(i1*)(intptr_t)v8431;
	i1 v8433 = (i1)+0;
	if (v8432==v8433) goto c02_061b; else goto c02_061c;

c02_061c:;

	i8 v8434 = (i8)(intptr_t)(ws+4011);
	i1 v8435 = *(i1*)(intptr_t)v8434;
	i1 v8436 = (i1)+0;
	if (v8435==v8436) goto c02_061b; else goto c02_061a;

c02_061a:;

	i8 v8437 = (i8)(intptr_t)(ws+4009);
	i1 v8438 = *(i1*)(intptr_t)v8437;
	i8 v8439 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8440;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8439)(&v8440, v8438);
	i8 v8441 = (i8)(intptr_t)(ws+3960);
	i8 v8442 = *(i8*)(intptr_t)v8441;
	i8 v8443 = v8442+(+41);
	*(i1*)(intptr_t)v8443 = v8440;

	i8 v8444 = (i8)(intptr_t)(ws+4011);
	i1 v8445 = *(i1*)(intptr_t)v8444;
	i8 v8446 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8447;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8446)(&v8447, v8445);
	i8 v8448 = (i8)(intptr_t)(ws+3968);
	i8 v8449 = *(i8*)(intptr_t)v8448;
	i8 v8450 = v8449+(+57);
	*(i1*)(intptr_t)v8450 = v8447;

	i8 v8451 = (i8)(intptr_t)(ws+4000);
	i8 v8452 = *(i8*)(intptr_t)v8451;
	i8 v8453 = v8452+(+42);
	i1 v8454 = *(i1*)(intptr_t)v8453;
	i8 v8455 = (i8)(intptr_t)(ws+3968);
	i8 v8456 = *(i8*)(intptr_t)v8455;
	i8 v8457 = v8456+(+57);
	i1 v8458 = *(i1*)(intptr_t)v8457;
	i8 v8459 = (i8)(intptr_t)(f233_FindConflictingRegisters);
	i1 v8460;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8459)(&v8460, v8458);
	i1 v8461 = v8454|v8460;
	i8 v8462 = (i8)(intptr_t)(ws+4000);
	i8 v8463 = *(i8*)(intptr_t)v8462;
	i8 v8464 = v8463+(+42);
	*(i1*)(intptr_t)v8464 = v8461;

	i8 v8465 = (i8)(intptr_t)(ws+3960);
	i8 v8466 = *(i8*)(intptr_t)v8465;
	i8 v8467 = v8466+(+41);
	i1 v8468 = *(i1*)(intptr_t)v8467;
	i8 v8469 = (i8)(intptr_t)(f233_FindConflictingRegisters);
	i1 v8470;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8469)(&v8470, v8468);
	i8 v8471 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v8471 = v8470;

	i8 v8472 = (i8)(intptr_t)(ws+4000);
	i8 v8473 = *(i8*)(intptr_t)v8472;
	i8 v8474 = (i8)(intptr_t)(ws+3960);
	i8 v8475 = *(i8*)(intptr_t)v8474;
	i8 v8476 = (i8)(intptr_t)(ws+4008);
	i1 v8477 = *(i1*)(intptr_t)v8476;
	i8 v8478 = (i8)(intptr_t)(f450_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8478)(v8477, v8475, v8473);

	i8 v8479 = (i8)(intptr_t)(ws+3960);
	i8 v8480 = *(i8*)(intptr_t)v8479;
	i8 v8481 = v8480+(+43);
	i1 v8482 = *(i1*)(intptr_t)v8481;
	i8 v8483 = (i8)(intptr_t)(ws+4008);
	i1 v8484 = *(i1*)(intptr_t)v8483;
	i1 v8485 = v8482|v8484;
	i8 v8486 = (i8)(intptr_t)(ws+3960);
	i8 v8487 = *(i8*)(intptr_t)v8486;
	i8 v8488 = v8487+(+43);
	*(i1*)(intptr_t)v8488 = v8485;

	i8 v8489 = (i8)(intptr_t)(ws+4000);
	i8 v8490 = *(i8*)(intptr_t)v8489;
	i8 v8491 = (i8)(intptr_t)(ws+3960);
	i8 v8492 = *(i8*)(intptr_t)v8491;
	i8 v8493 = v8492+(+41);
	i1 v8494 = *(i1*)(intptr_t)v8493;
	i8 v8495 = (i8)(intptr_t)(ws+3968);
	i8 v8496 = *(i8*)(intptr_t)v8495;
	i8 v8497 = v8496+(+57);
	i1 v8498 = *(i1*)(intptr_t)v8497;
	i8 v8499 = (i8)(intptr_t)(f452_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8499)(v8498, v8494, v8490);

	goto c02_0615;

c02_061b:;

	i8 v8500 = (i8)(intptr_t)(ws+3968);
	i8 v8501 = *(i8*)(intptr_t)v8500;
	i8 v8502 = v8501+(+56);
	i1 v8503 = *(i1*)(intptr_t)v8502;
	i8 v8504 = (i8)(intptr_t)(ws+4008);
	i1 v8505 = *(i1*)(intptr_t)v8504;
	i8 v8506 = (i8)(intptr_t)(ws+4000);
	i8 v8507 = *(i8*)(intptr_t)v8506;
	i8 v8508 = v8507+(+42);
	i1 v8509 = *(i1*)(intptr_t)v8508;
	i1 v8510 = v8505|v8509;
	i1 v8511 = ~v8510;
	i1 v8512 = v8503&v8511;
	i8 v8513 = (i8)(intptr_t)(ws+4009);
	*(i1*)(intptr_t)v8513 = v8512;

	i8 v8514 = (i8)(intptr_t)(ws+3960);
	i8 v8515 = *(i8*)(intptr_t)v8514;
	i8 v8516 = v8515+(+40);
	i1 v8517 = *(i1*)(intptr_t)v8516;
	i8 v8518 = (i8)(intptr_t)(ws+4010);
	i1 v8519 = *(i1*)(intptr_t)v8518;
	i1 v8520 = v8517&v8519;
	i8 v8521 = (i8)(intptr_t)(ws+3960);
	i8 v8522 = *(i8*)(intptr_t)v8521;
	i8 v8523 = v8522+(+43);
	i1 v8524 = *(i1*)(intptr_t)v8523;
	i1 v8525 = ~v8524;
	i1 v8526 = v8520&v8525;
	i8 v8527 = (i8)(intptr_t)(ws+4011);
	*(i1*)(intptr_t)v8527 = v8526;

	i8 v8528 = (i8)(intptr_t)(ws+4009);
	i1 v8529 = *(i1*)(intptr_t)v8528;
	i1 v8530 = (i1)+0;
	if (v8529==v8530) goto c02_0623; else goto c02_0624;

c02_0624:;

	i8 v8531 = (i8)(intptr_t)(ws+4011);
	i1 v8532 = *(i1*)(intptr_t)v8531;
	i1 v8533 = (i1)+0;
	if (v8532==v8533) goto c02_0623; else goto c02_0622;

c02_0622:;

	i8 v8534 = (i8)(intptr_t)(ws+4011);
	i1 v8535 = *(i1*)(intptr_t)v8534;
	i8 v8536 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8537;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8536)(&v8537, v8535);
	i8 v8538 = (i8)(intptr_t)(ws+3960);
	i8 v8539 = *(i8*)(intptr_t)v8538;
	i8 v8540 = v8539+(+41);
	*(i1*)(intptr_t)v8540 = v8537;

	i8 v8541 = (i8)(intptr_t)(ws+4009);
	i1 v8542 = *(i1*)(intptr_t)v8541;
	i8 v8543 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8544;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8543)(&v8544, v8542);
	i8 v8545 = (i8)(intptr_t)(ws+3968);
	i8 v8546 = *(i8*)(intptr_t)v8545;
	i8 v8547 = v8546+(+57);
	*(i1*)(intptr_t)v8547 = v8544;

	i8 v8548 = (i8)(intptr_t)(ws+3968);
	i8 v8549 = *(i8*)(intptr_t)v8548;
	i8 v8550 = v8549+(+57);
	i1 v8551 = *(i1*)(intptr_t)v8550;
	i8 v8552 = (i8)(intptr_t)(f233_FindConflictingRegisters);
	i1 v8553;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8552)(&v8553, v8551);
	i8 v8554 = (i8)(intptr_t)(ws+4008);
	*(i1*)(intptr_t)v8554 = v8553;

	i8 v8555 = (i8)(intptr_t)(ws+4000);
	i8 v8556 = *(i8*)(intptr_t)v8555;
	i8 v8557 = v8556+(+42);
	i1 v8558 = *(i1*)(intptr_t)v8557;
	i8 v8559 = (i8)(intptr_t)(ws+4008);
	i1 v8560 = *(i1*)(intptr_t)v8559;
	i1 v8561 = v8558|v8560;
	i8 v8562 = (i8)(intptr_t)(ws+4000);
	i8 v8563 = *(i8*)(intptr_t)v8562;
	i8 v8564 = v8563+(+42);
	*(i1*)(intptr_t)v8564 = v8561;

	i8 v8565 = (i8)(intptr_t)(ws+4000);
	i8 v8566 = *(i8*)(intptr_t)v8565;
	i8 v8567 = (i8)(intptr_t)(ws+3960);
	i8 v8568 = *(i8*)(intptr_t)v8567;
	i8 v8569 = (i8)(intptr_t)(ws+4008);
	i1 v8570 = *(i1*)(intptr_t)v8569;
	i8 v8571 = (i8)(intptr_t)(f450_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8571)(v8570, v8568, v8566);

	i8 v8572 = (i8)(intptr_t)(ws+3960);
	i8 v8573 = *(i8*)(intptr_t)v8572;
	i8 v8574 = v8573+(+43);
	i1 v8575 = *(i1*)(intptr_t)v8574;
	i8 v8576 = (i8)(intptr_t)(ws+3960);
	i8 v8577 = *(i8*)(intptr_t)v8576;
	i8 v8578 = v8577+(+41);
	i1 v8579 = *(i1*)(intptr_t)v8578;
	i8 v8580 = (i8)(intptr_t)(f233_FindConflictingRegisters);
	i1 v8581;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8580)(&v8581, v8579);
	i1 v8582 = v8575|v8581;
	i8 v8583 = (i8)(intptr_t)(ws+3960);
	i8 v8584 = *(i8*)(intptr_t)v8583;
	i8 v8585 = v8584+(+43);
	*(i1*)(intptr_t)v8585 = v8582;

	i8 v8586 = (i8)(intptr_t)(ws+3960);
	i8 v8587 = *(i8*)(intptr_t)v8586;
	i8 v8588 = (i8)(intptr_t)(ws+3960);
	i8 v8589 = *(i8*)(intptr_t)v8588;
	i8 v8590 = v8589+(+41);
	i1 v8591 = *(i1*)(intptr_t)v8590;
	i8 v8592 = (i8)(intptr_t)(ws+3968);
	i8 v8593 = *(i8*)(intptr_t)v8592;
	i8 v8594 = v8593+(+57);
	i1 v8595 = *(i1*)(intptr_t)v8594;
	i8 v8596 = (i8)(intptr_t)(f451_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8596)(v8595, v8591, v8587);

	goto c02_061d;

c02_0623:;


	i8 v8656 = (i8)(intptr_t)(ws+3960);
	i8 v8657 = *(i8*)(intptr_t)v8656;
	i8 v8658 = v8657+(+40);
	i1 v8659 = *(i1*)(intptr_t)v8658;
	i8 v8660 = (i8)(intptr_t)(ws+4010);
	i1 v8661 = *(i1*)(intptr_t)v8660;
	i1 v8662 = v8659&v8661;
	i8 v8663 = (i8)(intptr_t)(ws+3960);
	i8 v8664 = *(i8*)(intptr_t)v8663;
	i8 v8665 = v8664+(+43);
	i1 v8666 = *(i1*)(intptr_t)v8665;
	i1 v8667 = ~v8666;
	i1 v8668 = v8662&v8667;
	i8 v8669 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v8669 = v8668;

	i8 v8670 = (i8)(intptr_t)(ws+3992);
	i1 v8671 = *(i1*)(intptr_t)v8670;
	i1 v8672 = (i1)+0;
	if (v8671==v8672) goto c02_0628; else goto c02_0629;

c02_0628:;

	i8 v8673 = (i8)(intptr_t)(f462_deadlock);

	((void(*)(void))(intptr_t)v8673)();

	goto c02_0625;

c02_0629:;

c02_0625:;

	i8 v8674 = (i8)(intptr_t)(ws+3992);
	i1 v8675 = *(i1*)(intptr_t)v8674;
	i8 v8676 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8677;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8676)(&v8677, v8675);
	i8 v8678 = (i8)(intptr_t)(ws+3960);
	i8 v8679 = *(i8*)(intptr_t)v8678;
	i8 v8680 = v8679+(+41);
	*(i1*)(intptr_t)v8680 = v8677;

	i8 v8681 = (i8)(intptr_t)(ws+3960);
	i8 v8682 = *(i8*)(intptr_t)v8681;
	i8 v8683 = v8682+(+43);
	i1 v8684 = *(i1*)(intptr_t)v8683;
	i8 v8685 = (i8)(intptr_t)(ws+3960);
	i8 v8686 = *(i8*)(intptr_t)v8685;
	i8 v8687 = v8686+(+41);
	i1 v8688 = *(i1*)(intptr_t)v8687;
	i8 v8689 = (i8)(intptr_t)(f233_FindConflictingRegisters);
	i1 v8690;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8689)(&v8690, v8688);
	i1 v8691 = v8684|v8690;
	i8 v8692 = (i8)(intptr_t)(ws+3960);
	i8 v8693 = *(i8*)(intptr_t)v8692;
	i8 v8694 = v8693+(+43);
	*(i1*)(intptr_t)v8694 = v8691;

	i8 v8695 = (i8)(intptr_t)(ws+3960);
	i8 v8696 = *(i8*)(intptr_t)v8695;
	i8 v8697 = (i8)(intptr_t)(ws+3960);
	i8 v8698 = *(i8*)(intptr_t)v8697;
	i8 v8699 = v8698+(+41);
	i1 v8700 = *(i1*)(intptr_t)v8699;
	i1 v8701 = (i1)+0;
	i8 v8702 = (i8)(intptr_t)(f451_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8702)(v8701, v8700, v8696);

	i8 v8703 = (i8)(intptr_t)(ws+3968);
	i8 v8704 = *(i8*)(intptr_t)v8703;
	i8 v8705 = v8704+(+56);
	i1 v8706 = *(i1*)(intptr_t)v8705;
	i8 v8707 = (i8)(intptr_t)(ws+4000);
	i8 v8708 = *(i8*)(intptr_t)v8707;
	i8 v8709 = v8708+(+42);
	i1 v8710 = *(i1*)(intptr_t)v8709;
	i1 v8711 = ~v8710;
	i1 v8712 = v8706&v8711;
	i8 v8713 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v8713 = v8712;

	i8 v8714 = (i8)(intptr_t)(ws+3992);
	i1 v8715 = *(i1*)(intptr_t)v8714;
	i1 v8716 = (i1)+0;
	if (v8715==v8716) goto c02_062d; else goto c02_062e;

c02_062d:;

	i8 v8717 = (i8)(intptr_t)(f462_deadlock);

	((void(*)(void))(intptr_t)v8717)();

	goto c02_062a;

c02_062e:;

c02_062a:;

	i8 v8718 = (i8)(intptr_t)(ws+3992);
	i1 v8719 = *(i1*)(intptr_t)v8718;
	i8 v8720 = (i8)(intptr_t)(f235_FindFirst);
	i1 v8721;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8720)(&v8721, v8719);
	i8 v8722 = (i8)(intptr_t)(ws+3968);
	i8 v8723 = *(i8*)(intptr_t)v8722;
	i8 v8724 = v8723+(+57);
	*(i1*)(intptr_t)v8724 = v8721;

	i8 v8725 = (i8)(intptr_t)(ws+4000);
	i8 v8726 = *(i8*)(intptr_t)v8725;
	i8 v8727 = v8726+(+42);
	i1 v8728 = *(i1*)(intptr_t)v8727;
	i8 v8729 = (i8)(intptr_t)(ws+3968);
	i8 v8730 = *(i8*)(intptr_t)v8729;
	i8 v8731 = v8730+(+57);
	i1 v8732 = *(i1*)(intptr_t)v8731;
	i8 v8733 = (i8)(intptr_t)(f233_FindConflictingRegisters);
	i1 v8734;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8733)(&v8734, v8732);
	i1 v8735 = v8728|v8734;
	i8 v8736 = (i8)(intptr_t)(ws+4000);
	i8 v8737 = *(i8*)(intptr_t)v8736;
	i8 v8738 = v8737+(+42);
	*(i1*)(intptr_t)v8738 = v8735;

	i8 v8739 = (i8)(intptr_t)(ws+4000);
	i8 v8740 = *(i8*)(intptr_t)v8739;
	i1 v8741 = (i1)+0;
	i8 v8742 = (i8)(intptr_t)(ws+3968);
	i8 v8743 = *(i8*)(intptr_t)v8742;
	i8 v8744 = v8743+(+57);
	i1 v8745 = *(i1*)(intptr_t)v8744;
	i8 v8746 = (i8)(intptr_t)(f452_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8746)(v8745, v8741, v8740);

c02_061d:;

c02_0615:;

c02_0610:;

c02_0606:;

endsub:;
}
	void f461_AllocateRegister(void);

// UpdateProducedRegisters workspace at ws+3992 length ws+1
void f463_UpdateProducedRegisters(void) {

	i1 v8748 = (i1)+0;
	i8 v8749 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v8749 = v8748;

c02_0631:;

	i8 v8750 = (i8)(intptr_t)(ws+3928);
	i1 v8751 = *(i1*)(intptr_t)v8750;
	i1 v8752 = (i1)+3;
	if (v8751==v8752) goto c02_0634; else goto c02_0633;

c02_0633:;

	i8 v8753 = (i8)(intptr_t)(ws+3960);
	i8 v8754 = *(i8*)(intptr_t)v8753;
	i8 v8755 = v8754+(+16);
	i8 v8756 = (i8)(intptr_t)(ws+3928);
	i1 v8757 = *(i1*)(intptr_t)v8756;
	i8 v8758 = v8757;
	i1 v8759 = (i1)+3;
	i8 v8760 = ((i8)v8758)<<v8759;
	i8 v8761 = v8755+v8760;
	i8 v8762 = *(i8*)(intptr_t)v8761;
	i8 v8763 = (i8)(intptr_t)(ws+3968);
	*(i8*)(intptr_t)v8763 = v8762;

	i8 v8764 = (i8)(intptr_t)(ws+3968);
	i8 v8765 = *(i8*)(intptr_t)v8764;
	i8 v8766 = (i8)+0;
	if (v8765==v8766) goto c02_063b; else goto c02_063c;

c02_063c:;

	i8 v8767 = (i8)(intptr_t)(ws+3968);
	i8 v8768 = *(i8*)(intptr_t)v8767;
	i8 v8769 = v8768+(+56);
	i1 v8770 = *(i1*)(intptr_t)v8769;
	i1 v8771 = (i1)-1;
	if (v8770==v8771) goto c02_063a; else goto c02_063b;

c02_063a:;

	i8 v8772 = (i8)(intptr_t)(ws+3960);
	i8 v8773 = *(i8*)(intptr_t)v8772;
	i8 v8774 = v8773+(+41);
	i1 v8775 = *(i1*)(intptr_t)v8774;
	i8 v8776 = (i8)(intptr_t)(ws+3968);
	i8 v8777 = *(i8*)(intptr_t)v8776;
	i8 v8778 = v8777+(+56);
	*(i1*)(intptr_t)v8778 = v8775;

	i1 v8779 = (i1)+0;
	i8 v8780 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v8780 = v8779;

c02_063f:;

	i8 v8781 = (i8)(intptr_t)(ws+3992);
	i1 v8782 = *(i1*)(intptr_t)v8781;
	i1 v8783 = (i1)+3;
	if (v8782==v8783) goto c02_0642; else goto c02_0641;

c02_0641:;

	i8 v8784 = (i8)(intptr_t)(ws+3928);
	i1 v8785 = *(i1*)(intptr_t)v8784;
	i8 v8786 = (i8)(intptr_t)(ws+3992);
	i1 v8787 = *(i1*)(intptr_t)v8786;
	if (v8785==v8787) goto c02_0647; else goto c02_0646;

c02_0646:;

	i8 v8788 = (i8)(intptr_t)(ws+3960);
	i8 v8789 = *(i8*)(intptr_t)v8788;
	i8 v8790 = v8789+(+16);
	i8 v8791 = (i8)(intptr_t)(ws+3992);
	i1 v8792 = *(i1*)(intptr_t)v8791;
	i8 v8793 = v8792;
	i1 v8794 = (i1)+3;
	i8 v8795 = ((i8)v8793)<<v8794;
	i8 v8796 = v8790+v8795;
	i8 v8797 = *(i8*)(intptr_t)v8796;
	i8 v8798 = (i8)(intptr_t)(ws+3968);
	*(i8*)(intptr_t)v8798 = v8797;

	i8 v8799 = (i8)(intptr_t)(ws+3968);
	i8 v8800 = *(i8*)(intptr_t)v8799;
	i8 v8801 = (i8)+0;
	if (v8800==v8801) goto c02_064c; else goto c02_064b;

c02_064b:;

	i8 v8802 = (i8)(intptr_t)(ws+3968);
	i8 v8803 = *(i8*)(intptr_t)v8802;
	i8 v8804 = v8803+(+56);
	i1 v8805 = *(i1*)(intptr_t)v8804;
	i8 v8806 = (i8)(intptr_t)(ws+3960);
	i8 v8807 = *(i8*)(intptr_t)v8806;
	i8 v8808 = v8807+(+41);
	i1 v8809 = *(i1*)(intptr_t)v8808;
	i1 v8810 = ~v8809;
	i1 v8811 = v8805&v8810;
	i8 v8812 = (i8)(intptr_t)(ws+3968);
	i8 v8813 = *(i8*)(intptr_t)v8812;
	i8 v8814 = v8813+(+56);
	*(i1*)(intptr_t)v8814 = v8811;

	goto c02_0648;

c02_064c:;

c02_0648:;

	goto c02_0643;

c02_0647:;

c02_0643:;

	i8 v8815 = (i8)(intptr_t)(ws+3992);
	i1 v8816 = *(i1*)(intptr_t)v8815;
	i1 v8817 = v8816+(+1);
	i8 v8818 = (i8)(intptr_t)(ws+3992);
	*(i1*)(intptr_t)v8818 = v8817;

	goto c02_063f;

c02_0642:;

	goto c02_0635;

c02_063b:;

c02_0635:;

	i8 v8819 = (i8)(intptr_t)(ws+3928);
	i1 v8820 = *(i1*)(intptr_t)v8819;
	i1 v8821 = v8820+(+1);
	i8 v8822 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v8822 = v8821;

	goto c02_0631;

c02_0634:;

endsub:;
}
	void f463_UpdateProducedRegisters(void);
	void f453_ShuffleRegisters(i8 /* moves */);
	void f273_EmitOneInstruction(i8 /* self */, i1 /* ruleid */);
	void f453_ShuffleRegisters(i8 /* moves */);
	void f244_ArchEndInstruction(void);
	void f157_FreeNode(i8 /* node */);
	void f232_FreeInstruction(i8 /* insn */);

// EmitAndFreeInstructions workspace at ws+3992 length ws+8
void f464_EmitAndFreeInstructions(void) {

c02_064d:;

	i8 v8824 = (i8)(intptr_t)(ws+3944);
	i8 v8825 = *(i8*)(intptr_t)v8824;
	i8 v8826 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v8826 = v8825;

	i8 v8827 = (i8)(intptr_t)(ws+3992);
	i8 v8828 = *(i8*)(intptr_t)v8827;
	i8 v8829 = (i8)+0;
	if (v8828==v8829) goto c02_0652; else goto c02_0653;

c02_0652:;

	goto c02_064e;

c02_0653:;

c02_064f:;

	i8 v8830 = (i8)(intptr_t)(ws+3944);
	i8 v8831 = *(i8*)(intptr_t)v8830;
	i8 v8832 = v8831+(+8);
	i8 v8833 = *(i8*)(intptr_t)v8832;
	i8 v8834 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v8834 = v8833;

	i8 v8835 = (i8)(intptr_t)(ws+3992);
	i8 v8836 = *(i8*)(intptr_t)v8835;
	i8 v8837 = v8836+(+52);
	i8 v8838 = (i8)(intptr_t)(f453_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v8838)(v8837);

	i8 v8839 = (i8)(intptr_t)(ws+3992);
	i8 v8840 = *(i8*)(intptr_t)v8839;
	i8 v8841 = v8840+(+62);
	i1 v8842 = *(i1*)(intptr_t)v8841;
	i8 v8843 = (i8)(intptr_t)(ws+3992);
	i8 v8844 = *(i8*)(intptr_t)v8843;
	i8 v8845 = (i8)(intptr_t)(f273_EmitOneInstruction);

	((void(*)(i8 /* self */, i1 /* ruleid */))(intptr_t)v8845)(v8844, v8842);

	i8 v8846 = (i8)(intptr_t)(ws+3992);
	i8 v8847 = *(i8*)(intptr_t)v8846;
	i8 v8848 = v8847+(+44);
	i8 v8849 = (i8)(intptr_t)(f453_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v8849)(v8848);

	i8 v8850 = (i8)(intptr_t)(f244_ArchEndInstruction);

	((void(*)(void))(intptr_t)v8850)();

	i8 v8851 = (i8)(intptr_t)(ws+3992);
	i8 v8852 = *(i8*)(intptr_t)v8851;
	i8 v8853 = v8852+(+16);
	i8 v8854 = *(i8*)(intptr_t)v8853;
	i8 v8855 = v8854+(+58);
	i1 v8856 = *(i1*)(intptr_t)v8855;
	i1 v8857 = (i1)+22;
	if (v8856==v8857) goto c02_0657; else goto c02_0658;

c02_0657:;

	i8 v8858 = (i8)(intptr_t)(ws+3992);
	i8 v8859 = *(i8*)(intptr_t)v8858;
	i8 v8860 = v8859+(+16);
	i8 v8861 = *(i8*)(intptr_t)v8860;
	i8 v8862 = (i8)(intptr_t)(f157_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v8862)(v8861);

	goto c02_0654;

c02_0658:;

c02_0654:;

	i8 v8863 = (i8)(intptr_t)(ws+3992);
	i8 v8864 = *(i8*)(intptr_t)v8863;
	i8 v8865 = (i8)(intptr_t)(f232_FreeInstruction);

	((void(*)(i8 /* insn */))(intptr_t)v8865)(v8864);

	goto c02_064d;

c02_064e:;

endsub:;
}
	void f464_EmitAndFreeInstructions(void);
	void f245_ArchEndGroup(void);
	void f58_Discard(i8 /* node */);

// ReallyGenerate workspace at ws+3920 length ws+72
void f455_ReallyGenerate(i8 p7830 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3920) = p7830; /*rootnode */

	i8 v7831 = (i8)+0;
	i8 v7832 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v7832 = v7831;

	i8 v7833 = (i8)+0;
	i8 v7834 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v7834 = v7833;

	i8 v7835 = (i8)(intptr_t)(ws+224);
	i8 v7836 = *(i8*)(intptr_t)v7835;
	i8 v7837 = (i8)(intptr_t)(ws+3952);
	*(i8*)(intptr_t)v7837 = v7836;

	i8 v7838 = (i8)(intptr_t)(ws+3920);
	i8 v7839 = *(i8*)(intptr_t)v7838;
	i8 v7840 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7840)(v7839);

c02_0586:;

	i8 v7841 = (i8)(intptr_t)(ws+224);
	i8 v7842 = *(i8*)(intptr_t)v7841;
	i8 v7843 = (i8)(intptr_t)(ws+3952);
	i8 v7844 = *(i8*)(intptr_t)v7843;
	if (v7842==v7844) goto c02_0589; else goto c02_0588;

c02_0588:;

	i8 v7845 = (i8)(intptr_t)(f231_AllocNewInstruction);
	i8 v7846;

	((void(*)(i8* /* insn */))(intptr_t)v7845)(&v7846);
	i8 v7847 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v7847 = v7846;

	i8 v7848 = (i8)(intptr_t)(ws+3936);
	i8 v7849 = *(i8*)(intptr_t)v7848;
	i8 v7850 = (i8)+0;
	if (v7849==v7850) goto c02_058d; else goto c02_058e;

c02_058d:;

	i8 v7851 = (i8)(intptr_t)(ws+3960);
	i8 v7852 = *(i8*)(intptr_t)v7851;
	i8 v7853 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v7853 = v7852;

	i8 v7854 = (i8)(intptr_t)(ws+3960);
	i8 v7855 = *(i8*)(intptr_t)v7854;
	i8 v7856 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v7856 = v7855;

	goto c02_058a;

c02_058e:;

	i8 v7857 = (i8)(intptr_t)(ws+3960);
	i8 v7858 = *(i8*)(intptr_t)v7857;
	i8 v7859 = (i8)(intptr_t)(ws+3944);
	i8 v7860 = *(i8*)(intptr_t)v7859;
	*(i8*)(intptr_t)v7860 = v7858;

	i8 v7861 = (i8)(intptr_t)(ws+3944);
	i8 v7862 = *(i8*)(intptr_t)v7861;
	i8 v7863 = (i8)(intptr_t)(ws+3960);
	i8 v7864 = *(i8*)(intptr_t)v7863;
	i8 v7865 = v7864+(+8);
	*(i8*)(intptr_t)v7865 = v7862;

	i8 v7866 = (i8)(intptr_t)(ws+3960);
	i8 v7867 = *(i8*)(intptr_t)v7866;
	i8 v7868 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v7868 = v7867;

c02_058a:;

	i8 v7869 = (i8)(intptr_t)(f56_PopNode);
	i8 v7870;

	((void(*)(i8* /* node */))(intptr_t)v7869)(&v7870);
	i8 v7871 = (i8)(intptr_t)(ws+3968);
	*(i8*)(intptr_t)v7871 = v7870;


	i8 v8237 = (i8)(intptr_t)(f456_InstructionMatcher);

	((void(*)(void))(intptr_t)v8237)();

	i8 v8238 = (i8)(intptr_t)(ws+3960);
	i8 v8239 = *(i8*)(intptr_t)v8238;
	i8 v8240 = v8239+(+40);
	i1 v8241 = *(i1*)(intptr_t)v8240;
	i1 v8242 = (i1)+0;
	if (v8241==v8242) goto c02_0605; else goto c02_0604;

c02_0604:;


	i8 v8747 = (i8)(intptr_t)(f461_AllocateRegister);

	((void(*)(void))(intptr_t)v8747)();


	i8 v8823 = (i8)(intptr_t)(f463_UpdateProducedRegisters);

	((void(*)(void))(intptr_t)v8823)();

	goto c02_0601;

c02_0605:;

c02_0601:;

	goto c02_0586;

c02_0589:;


	i8 v8866 = (i8)(intptr_t)(f464_EmitAndFreeInstructions);

	((void(*)(void))(intptr_t)v8866)();

	i8 v8867 = (i8)(intptr_t)(f245_ArchEndGroup);

	((void(*)(void))(intptr_t)v8867)();

	i8 v8868 = (i8)(intptr_t)(ws+3920);
	i8 v8869 = *(i8*)(intptr_t)v8868;
	i8 v8870 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8870)(v8869);

endsub:;
}
	void f58_Discard(i8 /* node */);
	void f107_MidAsmgroupstart(i8* /* m */);
	void f455_ReallyGenerate(i8 /* rootnode */);
	void f110_MidAsmgroupend(i8* /* m */);
	void f455_ReallyGenerate(i8 /* rootnode */);
	void f455_ReallyGenerate(i8 /* rootnode */);

// Generate workspace at ws+3904 length ws+9
void f465_Generate(i8 p8873 /* statement */) {
	*(i8*)(intptr_t)(ws+3904) = p8873; /*statement */

	i8 v8874 = (i8)(intptr_t)(ws+3904);
	i8 v8875 = *(i8*)(intptr_t)v8874;
	i8 v8876 = v8875+(+58);
	i1 v8877 = *(i1*)(intptr_t)v8876;
	i8 v8878 = (i8)(intptr_t)(ws+3912);
	*(i1*)(intptr_t)v8878 = v8877;

	i8 v8879 = (i8)(intptr_t)(ws+2055);
	i1 v8880 = *(i1*)(intptr_t)v8879;
	i1 v8881 = (i1)+25;
	if (v8880==v8881) goto c02_065e; else goto c02_0660;

c02_0660:;

	i8 v8882 = (i8)(intptr_t)(ws+2055);
	i1 v8883 = *(i1*)(intptr_t)v8882;
	i1 v8884 = (i1)+26;
	if (v8883==v8884) goto c02_065e; else goto c02_065f;

c02_065e:;

	i8 v8885 = (i8)(intptr_t)(ws+3912);
	i1 v8886 = *(i1*)(intptr_t)v8885;
	i1 v8887 = (i1)+24;
	if (v8886==v8887) goto c02_0667; else goto c02_0668;

c02_0668:;

	i8 v8888 = (i8)(intptr_t)(ws+3912);
	i1 v8889 = *(i1*)(intptr_t)v8888;
	i1 v8890 = (i1)+5;
	if (v8889==v8890) goto c02_0667; else goto c02_0666;

c02_0666:;

	i8 v8891 = (i8)(intptr_t)(ws+3904);
	i8 v8892 = *(i8*)(intptr_t)v8891;
	i8 v8893 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8893)(v8892);

	goto endsub;

c02_0667:;

c02_0661:;

	goto c02_0659;

c02_065f:;

c02_0659:;

	i8 v8894 = (i8)(intptr_t)(ws+3912);
	i1 v8895 = *(i1*)(intptr_t)v8894;
	i1 v8896 = (i1)+17;
	if (v8895==v8896) goto c02_0670; else goto c02_066f;

c02_0670:;

	i8 v8897 = (i8)(intptr_t)(ws+2055);
	i1 v8898 = *(i1*)(intptr_t)v8897;
	i1 v8899 = (i1)+21;
	if (v8898==v8899) goto c02_066f; else goto c02_066e;

c02_066e:;

	i8 v8900 = (i8)(intptr_t)(f107_MidAsmgroupstart);
	i8 v8901;

	((void(*)(i8* /* m */))(intptr_t)v8900)(&v8901);
	i8 v8902 = (i8)(intptr_t)(f455_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v8902)(v8901);

	goto c02_0669;

c02_066f:;

c02_0669:;

	i8 v8903 = (i8)(intptr_t)(ws+2055);
	i1 v8904 = *(i1*)(intptr_t)v8903;
	i1 v8905 = (i1)+21;
	if (v8904==v8905) goto c02_0678; else goto c02_0677;

c02_0678:;

	i8 v8906 = (i8)(intptr_t)(ws+3912);
	i1 v8907 = *(i1*)(intptr_t)v8906;
	i1 v8908 = (i1)+17;
	if (v8907==v8908) goto c02_0677; else goto c02_0676;

c02_0676:;

	i8 v8909 = (i8)(intptr_t)(f110_MidAsmgroupend);
	i8 v8910;

	((void(*)(i8* /* m */))(intptr_t)v8909)(&v8910);
	i8 v8911 = (i8)(intptr_t)(f455_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v8911)(v8910);

	goto c02_0671;

c02_0677:;

c02_0671:;

	i8 v8912 = (i8)(intptr_t)(ws+3912);
	i1 v8913 = *(i1*)(intptr_t)v8912;
	i8 v8914 = (i8)(intptr_t)(ws+2055);
	*(i1*)(intptr_t)v8914 = v8913;

	i8 v8915 = (i8)(intptr_t)(ws+3904);
	i8 v8916 = *(i8*)(intptr_t)v8915;
	i8 v8917 = (i8)(intptr_t)(f455_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v8917)(v8916);

endsub:;
}
	void f55_PushNode(i8 /* node */);
	void f56_PopNode(i8* /* node */);
	void f55_PushNode(i8 /* node */);
	void f55_PushNode(i8 /* node */);
	void f58_Discard(i8 /* node */);

// push_and_free workspace at ws+3904 length ws+0
void f467_push_and_free(void) {

	i8 v8961 = (i8)(intptr_t)(ws+3872);
	i2 v8962 = *(i2*)(intptr_t)v8961;
	i8 v8963 = (i8)(intptr_t)(ws+3888);
	i8 v8964 = *(i8*)(intptr_t)v8963;
	*(i2*)(intptr_t)v8964 = v8962;

	i8 v8965 = (i8)(intptr_t)(ws+3874);
	i2 v8966 = *(i2*)(intptr_t)v8965;
	i8 v8967 = (i8)(intptr_t)(ws+3888);
	i8 v8968 = *(i8*)(intptr_t)v8967;
	i8 v8969 = v8968+(+2);
	*(i2*)(intptr_t)v8969 = v8966;

	i8 v8970 = (i8)(intptr_t)(ws+3876);
	i2 v8971 = *(i2*)(intptr_t)v8970;
	i8 v8972 = (i8)(intptr_t)(ws+3888);
	i8 v8973 = *(i8*)(intptr_t)v8972;
	i8 v8974 = v8973+(+4);
	*(i2*)(intptr_t)v8974 = v8971;

	i8 v8975 = (i8)+0;
	i8 v8976 = (i8)(intptr_t)(ws+3864);
	i8 v8977 = *(i8*)(intptr_t)v8976;
	i8 v8978 = v8977+(+24);
	*(i8*)(intptr_t)v8978 = v8975;

	i8 v8979 = (i8)+0;
	i8 v8980 = (i8)(intptr_t)(ws+3864);
	i8 v8981 = *(i8*)(intptr_t)v8980;
	i8 v8982 = v8981+(+32);
	*(i8*)(intptr_t)v8982 = v8979;

	i8 v8983 = (i8)(intptr_t)(ws+3888);
	i8 v8984 = *(i8*)(intptr_t)v8983;
	i8 v8985 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8985)(v8984);

	i8 v8986 = (i8)(intptr_t)(ws+3880);
	i8 v8987 = *(i8*)(intptr_t)v8986;
	i8 v8988 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8988)(v8987);

	i8 v8989 = (i8)(intptr_t)(ws+3864);
	i8 v8990 = *(i8*)(intptr_t)v8989;
	i8 v8991 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8991)(v8990);

endsub:;
}
	void f229_AllocLabel(i2* /* label */);
	void f467_push_and_free(void);
	void f229_AllocLabel(i2* /* label */);
	void f467_push_and_free(void);
	void f465_Generate(i8 /* statement */);
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);

// GenerateConditional workspace at ws+3848 length ws+52
void f466_GenerateConditional(i8 p8918 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3848) = p8918; /*rootnode */

	i8 v8919 = (i8)(intptr_t)(ws+224);
	i8 v8920 = *(i8*)(intptr_t)v8919;
	i8 v8921 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v8921 = v8920;

	i8 v8922 = (i8)(intptr_t)(ws+3848);
	i8 v8923 = *(i8*)(intptr_t)v8922;
	i8 v8924 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8924)(v8923);

c02_067b:;

	i8 v8925 = (i8)(intptr_t)(ws+224);
	i8 v8926 = *(i8*)(intptr_t)v8925;
	i8 v8927 = (i8)(intptr_t)(ws+3856);
	i8 v8928 = *(i8*)(intptr_t)v8927;
	if (v8926==v8928) goto c02_067e; else goto c02_067d;

c02_067d:;

	i8 v8929 = (i8)(intptr_t)(f56_PopNode);
	i8 v8930;

	((void(*)(i8* /* node */))(intptr_t)v8929)(&v8930);
	i8 v8931 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v8931 = v8930;

	i8 v8932 = (i8)(intptr_t)(ws+3864);
	i8 v8933 = *(i8*)(intptr_t)v8932;
	i2 v8934 = *(i2*)(intptr_t)v8933;
	i8 v8935 = (i8)(intptr_t)(ws+3872);
	*(i2*)(intptr_t)v8935 = v8934;

	i8 v8936 = (i8)(intptr_t)(ws+3864);
	i8 v8937 = *(i8*)(intptr_t)v8936;
	i8 v8938 = v8937+(+2);
	i2 v8939 = *(i2*)(intptr_t)v8938;
	i8 v8940 = (i8)(intptr_t)(ws+3874);
	*(i2*)(intptr_t)v8940 = v8939;

	i8 v8941 = (i8)(intptr_t)(ws+3864);
	i8 v8942 = *(i8*)(intptr_t)v8941;
	i8 v8943 = v8942+(+4);
	i2 v8944 = *(i2*)(intptr_t)v8943;
	i8 v8945 = (i8)(intptr_t)(ws+3876);
	*(i2*)(intptr_t)v8945 = v8944;

	i8 v8946 = (i8)(intptr_t)(ws+3864);
	i8 v8947 = *(i8*)(intptr_t)v8946;
	i8 v8948 = v8947+(+24);
	i8 v8949 = *(i8*)(intptr_t)v8948;
	i8 v8950 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v8950 = v8949;

	i8 v8951 = (i8)(intptr_t)(ws+3864);
	i8 v8952 = *(i8*)(intptr_t)v8951;
	i8 v8953 = v8952+(+32);
	i8 v8954 = *(i8*)(intptr_t)v8953;
	i8 v8955 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v8955 = v8954;

	i8 v8956 = (i8)(intptr_t)(ws+3864);
	i8 v8957 = *(i8*)(intptr_t)v8956;
	i8 v8958 = v8957+(+58);
	i1 v8959 = *(i1*)(intptr_t)v8958;
	i8 v8960 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v8960 = v8959;


	i8 v8992 = (i8)(intptr_t)(ws+3896);
	i1 v8993 = *(i1*)(intptr_t)v8992;

	if (v8993 != +57) goto c02_0680;

	i8 v8994 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v8995;

	((void(*)(i2* /* label */))(intptr_t)v8994)(&v8995);
	i8 v8996 = (i8)(intptr_t)(ws+3898);
	*(i2*)(intptr_t)v8996 = v8995;

	i8 v8997 = (i8)(intptr_t)(ws+3872);
	i2 v8998 = *(i2*)(intptr_t)v8997;
	i8 v8999 = (i8)(intptr_t)(ws+3880);
	i8 v9000 = *(i8*)(intptr_t)v8999;
	*(i2*)(intptr_t)v9000 = v8998;

	i8 v9001 = (i8)(intptr_t)(ws+3898);
	i2 v9002 = *(i2*)(intptr_t)v9001;
	i8 v9003 = (i8)(intptr_t)(ws+3880);
	i8 v9004 = *(i8*)(intptr_t)v9003;
	i8 v9005 = v9004+(+2);
	*(i2*)(intptr_t)v9005 = v9002;

	i8 v9006 = (i8)(intptr_t)(ws+3898);
	i2 v9007 = *(i2*)(intptr_t)v9006;
	i8 v9008 = (i8)(intptr_t)(ws+3880);
	i8 v9009 = *(i8*)(intptr_t)v9008;
	i8 v9010 = v9009+(+4);
	*(i2*)(intptr_t)v9010 = v9007;

	i8 v9011 = (i8)(intptr_t)(f467_push_and_free);

	((void(*)(void))(intptr_t)v9011)();

	goto c02_067f;

c02_0680:;

	if (v8993 != +56) goto c02_0681;

	i8 v9012 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v9013;

	((void(*)(i2* /* label */))(intptr_t)v9012)(&v9013);
	i8 v9014 = (i8)(intptr_t)(ws+3898);
	*(i2*)(intptr_t)v9014 = v9013;

	i8 v9015 = (i8)(intptr_t)(ws+3898);
	i2 v9016 = *(i2*)(intptr_t)v9015;
	i8 v9017 = (i8)(intptr_t)(ws+3880);
	i8 v9018 = *(i8*)(intptr_t)v9017;
	*(i2*)(intptr_t)v9018 = v9016;

	i8 v9019 = (i8)(intptr_t)(ws+3874);
	i2 v9020 = *(i2*)(intptr_t)v9019;
	i8 v9021 = (i8)(intptr_t)(ws+3880);
	i8 v9022 = *(i8*)(intptr_t)v9021;
	i8 v9023 = v9022+(+2);
	*(i2*)(intptr_t)v9023 = v9020;

	i8 v9024 = (i8)(intptr_t)(ws+3898);
	i2 v9025 = *(i2*)(intptr_t)v9024;
	i8 v9026 = (i8)(intptr_t)(ws+3880);
	i8 v9027 = *(i8*)(intptr_t)v9026;
	i8 v9028 = v9027+(+4);
	*(i2*)(intptr_t)v9028 = v9025;

	i8 v9029 = (i8)(intptr_t)(f467_push_and_free);

	((void(*)(void))(intptr_t)v9029)();

	goto c02_067f;

c02_0681:;

	i8 v9030 = (i8)(intptr_t)(ws+3896);
	i1 v9031 = *(i1*)(intptr_t)v9030;
	i1 v9032 = (i1)+58;
	if (v9031<v9032) goto c02_0688; else goto c02_0689;

c02_0689:;

	i1 v9033 = (i1)+72;
	i8 v9034 = (i8)(intptr_t)(ws+3896);
	i1 v9035 = *(i1*)(intptr_t)v9034;
	if (v9033<v9035) goto c02_0688; else goto c02_0687;

c02_0687:;

	i8 v9036 = (i8)(intptr_t)(ws+3864);
	i8 v9037 = *(i8*)(intptr_t)v9036;
	i8 v9038 = v9037+(+6);
	i1 v9039 = *(i1*)(intptr_t)v9038;
	i1 v9040 = (i1)+0;
	if (v9039==v9040) goto c02_068e; else goto c02_068d;

c02_068d:;

	i8 v9041 = (i8)(intptr_t)(ws+3874);
	i2 v9042 = *(i2*)(intptr_t)v9041;
	i8 v9043 = (i8)(intptr_t)(ws+3864);
	i8 v9044 = *(i8*)(intptr_t)v9043;
	*(i2*)(intptr_t)v9044 = v9042;

	i8 v9045 = (i8)(intptr_t)(ws+3872);
	i2 v9046 = *(i2*)(intptr_t)v9045;
	i8 v9047 = (i8)(intptr_t)(ws+3864);
	i8 v9048 = *(i8*)(intptr_t)v9047;
	i8 v9049 = v9048+(+2);
	*(i2*)(intptr_t)v9049 = v9046;

	i1 v9050 = (i1)+0;
	i8 v9051 = (i8)(intptr_t)(ws+3864);
	i8 v9052 = *(i8*)(intptr_t)v9051;
	i8 v9053 = v9052+(+6);
	*(i1*)(intptr_t)v9053 = v9050;

	goto c02_068a;

c02_068e:;

c02_068a:;

	goto c02_0682;

c02_0688:;

c02_0682:;

	i8 v9054 = (i8)(intptr_t)(ws+3864);
	i8 v9055 = *(i8*)(intptr_t)v9054;
	i8 v9056 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9056)(v9055);

	i8 v9057 = (i8)(intptr_t)(ws+3876);
	i2 v9058 = *(i2*)(intptr_t)v9057;
	i8 v9059 = (i8)(intptr_t)(f116_MidLabel);
	i8 v9060;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v9059)(&v9060, v9058);
	i8 v9061 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9061)(v9060);

c02_067f:;


	goto c02_067b;

c02_067e:;

endsub:;
}
	void f216_CheckNotPartialType(i8 /* type */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f239_ArchInitVariable(i8 /* symbol */);

// InitVariable workspace at ws+3848 length ws+24
void f468_InitVariable(i8 p9062 /* type */, i8 p9063 /* symbol */, i8 p9064 /* subr */) {
	*(i8*)(intptr_t)(ws+3848) = p9064; /*subr */
	*(i8*)(intptr_t)(ws+3856) = p9063; /*symbol */
	*(i8*)(intptr_t)(ws+3864) = p9062; /*type */

	i8 v9065 = (i8)(intptr_t)(ws+3864);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9067)(v9066);

	i1 v9068 = (i1)+28;
	i8 v9069 = (i8)(intptr_t)(ws+3856);
	i8 v9070 = *(i8*)(intptr_t)v9069;
	i8 v9071 = v9070+(+32);
	*(i1*)(intptr_t)v9071 = v9068;

	i8 v9072 = (i8)+34;
	i8 v9073 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v9074;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9073)(&v9074, v9072);
	i8 v9075 = (i8)(intptr_t)(ws+3856);
	i8 v9076 = *(i8*)(intptr_t)v9075;
	*(i8*)(intptr_t)v9076 = v9074;

	i8 v9077 = (i8)(intptr_t)(ws+3864);
	i8 v9078 = *(i8*)(intptr_t)v9077;
	i8 v9079 = (i8)(intptr_t)(ws+3856);
	i8 v9080 = *(i8*)(intptr_t)v9079;
	i8 v9081 = *(i8*)(intptr_t)v9080;
	*(i8*)(intptr_t)v9081 = v9078;

	i8 v9082 = (i8)(intptr_t)(ws+3848);
	i8 v9083 = *(i8*)(intptr_t)v9082;
	i8 v9084 = (i8)(intptr_t)(ws+3856);
	i8 v9085 = *(i8*)(intptr_t)v9084;
	i8 v9086 = *(i8*)(intptr_t)v9085;
	i8 v9087 = v9086+(+8);
	*(i8*)(intptr_t)v9087 = v9083;

	i8 v9088 = (i8)(intptr_t)(ws+3856);
	i8 v9089 = *(i8*)(intptr_t)v9088;
	i8 v9090 = (i8)(intptr_t)(f239_ArchInitVariable);

	((void(*)(i8 /* symbol */))(intptr_t)v9090)(v9089);

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f64_StrDupBraced(i8* /* news */, i8 /* s */);
	void f217_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakePointerType workspace at ws+3888 length ws+16
void f469_MakePointerType(i8* p9091 /* ptrtype */, i8 p9092 /* type */) {
	*(i8*)(intptr_t)(ws+3888) = p9092; /*type */

	i8 v9093 = (i8)(intptr_t)(ws+3888);
	i8 v9094 = *(i8*)(intptr_t)v9093;
	i8 v9095 = v9094+(+40);
	i8 v9096 = *(i8*)(intptr_t)v9095;
	i8 v9097 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v9097 = v9096;

	i8 v9098 = (i8)(intptr_t)(ws+3896);
	i8 v9099 = *(i8*)(intptr_t)v9098;
	i8 v9100 = (i8)+0;
	if (v9099==v9100) goto c02_0692; else goto c02_0693;

c02_0692:;

	i8 v9101 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v9102;

	((void(*)(i8* /* type */))(intptr_t)v9101)(&v9102);
	i8 v9103 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v9103 = v9102;

	i1 v9104 = (i1)+3;
	i8 v9105 = (i8)(intptr_t)(ws+3896);
	i8 v9106 = *(i8*)(intptr_t)v9105;
	i8 v9107 = v9106+(+52);
	*(i1*)(intptr_t)v9107 = v9104;

	i8 v9108 = (i8)(intptr_t)(ws+1904);
	i8 v9109 = *(i8*)(intptr_t)v9108;
	i8 v9110 = v9109+(+48);
	i2 v9111 = *(i2*)(intptr_t)v9110;
	i8 v9112 = (i8)(intptr_t)(ws+3896);
	i8 v9113 = *(i8*)(intptr_t)v9112;
	i8 v9114 = v9113+(+48);
	*(i2*)(intptr_t)v9114 = v9111;

	i8 v9115 = (i8)(intptr_t)(ws+1904);
	i8 v9116 = *(i8*)(intptr_t)v9115;
	i8 v9117 = v9116+(+53);
	i1 v9118 = *(i1*)(intptr_t)v9117;
	i8 v9119 = (i8)(intptr_t)(ws+3896);
	i8 v9120 = *(i8*)(intptr_t)v9119;
	i8 v9121 = v9120+(+53);
	*(i1*)(intptr_t)v9121 = v9118;

	i8 v9122 = (i8)(intptr_t)(ws+1904);
	i8 v9123 = *(i8*)(intptr_t)v9122;
	i8 v9124 = v9123+(+50);
	i2 v9125 = *(i2*)(intptr_t)v9124;
	i8 v9126 = (i8)(intptr_t)(ws+3896);
	i8 v9127 = *(i8*)(intptr_t)v9126;
	i8 v9128 = v9127+(+50);
	*(i2*)(intptr_t)v9128 = v9125;

	i8 v9129 = (i8)(intptr_t)(ws+3888);
	i8 v9130 = *(i8*)(intptr_t)v9129;
	i8 v9131 = (i8)(intptr_t)(ws+3896);
	i8 v9132 = *(i8*)(intptr_t)v9131;
	*(i8*)(intptr_t)v9132 = v9130;

	i8 v9133 = (i8)(intptr_t)(ws+3896);
	i8 v9134 = *(i8*)(intptr_t)v9133;
	i8 v9135 = (i8)(intptr_t)(ws+3888);
	i8 v9136 = *(i8*)(intptr_t)v9135;
	i8 v9137 = v9136+(+40);
	*(i8*)(intptr_t)v9137 = v9134;

	i8 v9138 = (i8)(intptr_t)(ws+3888);
	i8 v9139 = *(i8*)(intptr_t)v9138;
	i8 v9140 = v9139+(+32);
	i8 v9141 = *(i8*)(intptr_t)v9140;
	i8 v9142 = v9141+(+16);
	i8 v9143 = *(i8*)(intptr_t)v9142;
	i8 v9144 = (i8)(intptr_t)(ws+3896);
	i8 v9145 = *(i8*)(intptr_t)v9144;
	i8 v9146 = (i8)(intptr_t)(ws+3888);
	i8 v9147 = *(i8*)(intptr_t)v9146;
	i8 v9148 = v9147+(+32);
	i8 v9149 = *(i8*)(intptr_t)v9148;
	i8 v9150 = v9149+(+8);
	i8 v9151 = *(i8*)(intptr_t)v9150;
	i8 v9152 = (i8)(intptr_t)(f64_StrDupBraced);
	i8 v9153;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v9152)(&v9153, v9151);
	i8 v9154 = (i8)(intptr_t)(f217_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v9154)(v9153, v9145, v9143);

	goto c02_068f;

c02_0693:;

c02_068f:;

endsub:;
	*p9091 = *(i8*)(intptr_t)(ws+3896);
}
	void f216_CheckNotPartialType(i8 /* type */);
	void f61_AllocNewType(i8* /* type */);
	void f238_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f65_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	void f217_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeArrayType workspace at ws+3840 length ws+26
void f470_MakeArrayType(i8* p9155 /* arraytype */, i2 p9156 /* size */, i8 p9157 /* type */) {
	*(i8*)(intptr_t)(ws+3840) = p9157; /*type */
	*(i2*)(intptr_t)(ws+3848) = p9156; /*size */

	i8 v9158 = (i8)(intptr_t)(ws+3840);
	i8 v9159 = *(i8*)(intptr_t)v9158;
	i8 v9160 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9160)(v9159);

	i8 v9161 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v9162;

	((void(*)(i8* /* type */))(intptr_t)v9161)(&v9162);
	i8 v9163 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v9163 = v9162;

	i1 v9164 = (i1)+4;
	i8 v9165 = (i8)(intptr_t)(ws+3856);
	i8 v9166 = *(i8*)(intptr_t)v9165;
	i8 v9167 = v9166+(+52);
	*(i1*)(intptr_t)v9167 = v9164;

	i2 v9168 = (i2)+0;
	i8 v9169 = (i8)(intptr_t)(ws+3864);
	*(i2*)(intptr_t)v9169 = v9168;

	i2 v9170 = (i2)+0;
	i8 v9171 = (i8)(intptr_t)(ws+3848);
	i2 v9172 = *(i2*)(intptr_t)v9171;
	if (v9170<v9172) goto c02_0697; else goto c02_0698;

c02_0697:;

	i8 v9173 = (i8)(intptr_t)(ws+3840);
	i8 v9174 = *(i8*)(intptr_t)v9173;
	i8 v9175 = v9174+(+50);
	i2 v9176 = *(i2*)(intptr_t)v9175;
	i8 v9177 = (i8)(intptr_t)(ws+3848);
	i2 v9178 = *(i2*)(intptr_t)v9177;
	i2 v9179 = v9178+(-1);
	i2 v9180 = v9176*v9179;
	i8 v9181 = (i8)(intptr_t)(ws+3840);
	i8 v9182 = *(i8*)(intptr_t)v9181;
	i8 v9183 = v9182+(+48);
	i2 v9184 = *(i2*)(intptr_t)v9183;
	i2 v9185 = v9180+v9184;
	i8 v9186 = (i8)(intptr_t)(ws+3864);
	*(i2*)(intptr_t)v9186 = v9185;

	goto c02_0694;

c02_0698:;

c02_0694:;

	i8 v9187 = (i8)(intptr_t)(ws+3864);
	i2 v9188 = *(i2*)(intptr_t)v9187;
	i8 v9189 = (i8)(intptr_t)(ws+3856);
	i8 v9190 = *(i8*)(intptr_t)v9189;
	i8 v9191 = v9190+(+48);
	*(i2*)(intptr_t)v9191 = v9188;

	i8 v9192 = (i8)(intptr_t)(ws+3840);
	i8 v9193 = *(i8*)(intptr_t)v9192;
	i8 v9194 = v9193+(+53);
	i1 v9195 = *(i1*)(intptr_t)v9194;
	i8 v9196 = (i8)(intptr_t)(ws+3856);
	i8 v9197 = *(i8*)(intptr_t)v9196;
	i8 v9198 = v9197+(+53);
	*(i1*)(intptr_t)v9198 = v9195;

	i8 v9199 = (i8)(intptr_t)(ws+3840);
	i8 v9200 = *(i8*)(intptr_t)v9199;
	i8 v9201 = v9200+(+50);
	i2 v9202 = *(i2*)(intptr_t)v9201;
	i8 v9203 = (i8)(intptr_t)(ws+3848);
	i2 v9204 = *(i2*)(intptr_t)v9203;
	i2 v9205 = v9202*v9204;
	i8 v9206 = (i8)(intptr_t)(ws+3856);
	i8 v9207 = *(i8*)(intptr_t)v9206;
	i8 v9208 = v9207+(+50);
	*(i2*)(intptr_t)v9208 = v9205;

	i8 v9209 = (i8)(intptr_t)(ws+3840);
	i8 v9210 = *(i8*)(intptr_t)v9209;
	i8 v9211 = (i8)(intptr_t)(ws+3856);
	i8 v9212 = *(i8*)(intptr_t)v9211;
	*(i8*)(intptr_t)v9212 = v9210;

	i8 v9213 = (i8)(intptr_t)(ws+3848);
	i2 v9214 = *(i2*)(intptr_t)v9213;
	i8 v9215 = (i8)(intptr_t)(ws+3856);
	i8 v9216 = *(i8*)(intptr_t)v9215;
	i8 v9217 = v9216+(+8);
	*(i2*)(intptr_t)v9217 = v9214;

	i4 v9218 = (i4)+0;
	i8 v9219 = (i8)(intptr_t)(ws+3848);
	i2 v9220 = *(i2*)(intptr_t)v9219;
	i2 v9221 = v9220+(-1);
	i4 v9222 = v9221;
	i8 v9223 = (i8)(intptr_t)(f238_ArchGuessIntType);
	i8 v9224;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v9223)(&v9224, v9222, v9218);
	i8 v9225 = (i8)(intptr_t)(ws+3856);
	i8 v9226 = *(i8*)(intptr_t)v9225;
	i8 v9227 = v9226+(+16);
	*(i8*)(intptr_t)v9227 = v9224;

	i8 v9228 = (i8)(intptr_t)(ws+3840);
	i8 v9229 = *(i8*)(intptr_t)v9228;
	i8 v9230 = v9229+(+32);
	i8 v9231 = *(i8*)(intptr_t)v9230;
	i8 v9232 = v9231+(+16);
	i8 v9233 = *(i8*)(intptr_t)v9232;
	i8 v9234 = (i8)(intptr_t)(ws+3856);
	i8 v9235 = *(i8*)(intptr_t)v9234;
	i8 v9236 = (i8)(intptr_t)(ws+3840);
	i8 v9237 = *(i8*)(intptr_t)v9236;
	i8 v9238 = v9237+(+32);
	i8 v9239 = *(i8*)(intptr_t)v9238;
	i8 v9240 = v9239+(+8);
	i8 v9241 = *(i8*)(intptr_t)v9240;
	i8 v9242 = (i8)(intptr_t)(ws+3848);
	i2 v9243 = *(i2*)(intptr_t)v9242;
	i8 v9244 = (i8)(intptr_t)(f65_StrDupArrayed);
	i8 v9245;

	((void(*)(i8* /* news */, i2 /* i */, i8 /* s */))(intptr_t)v9244)(&v9245, v9243, v9241);
	i8 v9246 = (i8)(intptr_t)(f217_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v9246)(v9245, v9235, v9233);

endsub:;
	*p9155 = *(i8*)(intptr_t)(ws+3856);
}

// QueueNamespace workspace at ws+3896 length ws+16
void f472_QueueNamespace(i8 p9250 /* namespace */) {
	*(i8*)(intptr_t)(ws+3896) = p9250; /*namespace */

c02_069b:;

	i8 v9251 = (i8)(intptr_t)(ws+3896);
	i8 v9252 = *(i8*)(intptr_t)v9251;
	i8 v9253 = *(i8*)(intptr_t)v9252;
	i8 v9254 = (i8)+0;
	if (v9253==v9254) goto c02_069e; else goto c02_069d;

c02_069d:;

	i8 v9255 = (i8)(intptr_t)(ws+3896);
	i8 v9256 = *(i8*)(intptr_t)v9255;
	i8 v9257 = *(i8*)(intptr_t)v9256;
	i8 v9258 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v9258 = v9257;

	i8 v9259 = (i8)(intptr_t)(ws+3904);
	i8 v9260 = *(i8*)(intptr_t)v9259;
	i8 v9261 = v9260+(+24);
	i8 v9262 = *(i8*)(intptr_t)v9261;
	i8 v9263 = (i8)(intptr_t)(ws+3896);
	i8 v9264 = *(i8*)(intptr_t)v9263;
	*(i8*)(intptr_t)v9264 = v9262;

	i8 v9265 = (i8)(intptr_t)(ws+3864);
	i8 v9266 = *(i8*)(intptr_t)v9265;
	i8 v9267 = (i8)(intptr_t)(ws+3904);
	i8 v9268 = *(i8*)(intptr_t)v9267;
	i8 v9269 = v9268+(+24);
	*(i8*)(intptr_t)v9269 = v9266;

	i8 v9270 = (i8)(intptr_t)(ws+3904);
	i8 v9271 = *(i8*)(intptr_t)v9270;
	i8 v9272 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9272 = v9271;

	goto c02_069b;

c02_069e:;

endsub:;
}
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f94_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f472_QueueNamespace(i8 /* namespace */);
	void f472_QueueNamespace(i8 /* namespace */);
	void f33_Free(i8 /* block */);
	void f62_FreeType(i8 /* type */);
	void f33_Free(i8 /* block */);
	void f33_Free(i8 /* block */);
	void f60_FreeSymbol(i8 /* symbol */);

// DestructSubroutineContents workspace at ws+3856 length ws+40
void f471_DestructSubroutineContents(i8 p9247 /* subr */) {
	*(i8*)(intptr_t)(ws+3856) = p9247; /*subr */

	i8 v9248 = (i8)+0;
	i8 v9249 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9249 = v9248;


	i8 v9273 = (i8)(intptr_t)(ws+3856);
	i8 v9274 = *(i8*)(intptr_t)v9273;
	i8 v9275 = v9274+(+81);
	i1 v9276 = *(i1*)(intptr_t)v9275;
	i1 v9277 = (i1)+0;
	if (v9276==v9277) goto c02_06a3; else goto c02_06a2;

c02_06a2:;

	i8 v9278 = (i8)(intptr_t)(ws+3856);
	i8 v9279 = *(i8*)(intptr_t)v9278;
	i8 v9280 = (i8)(intptr_t)(ws+3856);
	i8 v9281 = *(i8*)(intptr_t)v9280;
	i8 v9282 = v9281+(+81);
	i1 v9283 = *(i1*)(intptr_t)v9282;
	i1 v9284 = v9283+(-1);
	i8 v9285 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v9286;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9285)(&v9286, v9284, v9279);
	i8 v9287 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v9287 = v9286;

	goto c02_069f;

c02_06a3:;

	i8 v9288 = (i8)(intptr_t)(ws+3856);
	i8 v9289 = *(i8*)(intptr_t)v9288;
	i8 v9290 = v9289+(+80);
	i1 v9291 = *(i1*)(intptr_t)v9290;
	i1 v9292 = (i1)+0;
	if (v9291==v9292) goto c02_06a7; else goto c02_06a6;

c02_06a6:;

	i8 v9293 = (i8)(intptr_t)(ws+3856);
	i8 v9294 = *(i8*)(intptr_t)v9293;
	i8 v9295 = (i8)(intptr_t)(ws+3856);
	i8 v9296 = *(i8*)(intptr_t)v9295;
	i8 v9297 = v9296+(+80);
	i1 v9298 = *(i1*)(intptr_t)v9297;
	i1 v9299 = v9298+(-1);
	i8 v9300 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v9301;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9300)(&v9301, v9299, v9294);
	i8 v9302 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v9302 = v9301;

	goto c02_069f;

c02_06a7:;

	i8 v9303 = (i8)+0;
	i8 v9304 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v9304 = v9303;

c02_069f:;

	i8 v9305 = (i8)(intptr_t)(ws+3856);
	i8 v9306 = *(i8*)(intptr_t)v9305;
	i8 v9307 = v9306+(+16);
	i8 v9308 = *(i8*)(intptr_t)v9307;
	i8 v9309 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9309 = v9308;

	i8 v9310 = (i8)(intptr_t)(ws+3872);
	i8 v9311 = *(i8*)(intptr_t)v9310;
	i8 v9312 = (i8)+0;
	if (v9311==v9312) goto c02_06ac; else goto c02_06ab;

c02_06ab:;

	i8 v9313 = (i8)(intptr_t)(ws+3872);
	i8 v9314 = *(i8*)(intptr_t)v9313;
	i8 v9315 = v9314+(+24);
	i8 v9316 = *(i8*)(intptr_t)v9315;
	i8 v9317 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9317 = v9316;

	goto c02_06a8;

c02_06ac:;

c02_06a8:;

c02_06af:;

	i8 v9318 = (i8)(intptr_t)(ws+3864);
	i8 v9319 = *(i8*)(intptr_t)v9318;
	i8 v9320 = (i8)+0;
	if (v9319==v9320) goto c02_06b2; else goto c02_06b1;

c02_06b1:;

	i8 v9321 = (i8)(intptr_t)(ws+3864);
	i8 v9322 = *(i8*)(intptr_t)v9321;
	i8 v9323 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v9323 = v9322;

	i8 v9324 = (i8)(intptr_t)(ws+3864);
	i8 v9325 = *(i8*)(intptr_t)v9324;
	i8 v9326 = v9325+(+24);
	i8 v9327 = *(i8*)(intptr_t)v9326;
	i8 v9328 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9328 = v9327;

	i8 v9329 = (i8)(intptr_t)(ws+3880);
	i8 v9330 = *(i8*)(intptr_t)v9329;
	i8 v9331 = v9330+(+32);
	i1 v9332 = *(i1*)(intptr_t)v9331;

	if (v9332 != +30) goto c02_06b4;

	i8 v9333 = (i8)(intptr_t)(ws+3880);
	i8 v9334 = *(i8*)(intptr_t)v9333;
	i8 v9335 = *(i8*)(intptr_t)v9334;
	i8 v9336 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v9336 = v9335;

	i8 v9337 = (i8)(intptr_t)(ws+3888);
	i8 v9338 = *(i8*)(intptr_t)v9337;
	i8 v9339 = v9338+(+52);
	i1 v9340 = *(i1*)(intptr_t)v9339;

	if (v9340 != +5) goto c02_06b6;

	i8 v9341 = (i8)(intptr_t)(ws+3888);
	i8 v9342 = *(i8*)(intptr_t)v9341;
	i8 v9343 = (i8)(intptr_t)(f472_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v9343)(v9342);

	goto c02_06b5;

c02_06b6:;

	if (v9340 != +6) goto c02_06b7;

	i8 v9344 = (i8)(intptr_t)(ws+3888);
	i8 v9345 = *(i8*)(intptr_t)v9344;
	i8 v9346 = *(i8*)(intptr_t)v9345;
	i8 v9347 = v9346+(+16);
	i8 v9348 = (i8)(intptr_t)(f472_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v9348)(v9347);

	i8 v9349 = (i8)(intptr_t)(ws+3888);
	i8 v9350 = *(i8*)(intptr_t)v9349;
	i8 v9351 = *(i8*)(intptr_t)v9350;
	i8 v9352 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v9352)(v9351);

c02_06b7:;

c02_06b5:;


	i8 v9353 = (i8)(intptr_t)(ws+3888);
	i8 v9354 = *(i8*)(intptr_t)v9353;
	i8 v9355 = (i8)(intptr_t)(f62_FreeType);

	((void(*)(i8 /* type */))(intptr_t)v9355)(v9354);

	goto c02_06b3;

c02_06b4:;

	if (v9332 != +28) goto c02_06b8;

	i8 v9356 = (i8)(intptr_t)(ws+3880);
	i8 v9357 = *(i8*)(intptr_t)v9356;
	i8 v9358 = *(i8*)(intptr_t)v9357;
	i8 v9359 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v9359)(v9358);

c02_06b8:;

c02_06b3:;


	i8 v9360 = (i8)(intptr_t)(ws+3880);
	i8 v9361 = *(i8*)(intptr_t)v9360;
	i8 v9362 = v9361+(+8);
	i8 v9363 = *(i8*)(intptr_t)v9362;
	i8 v9364 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v9364)(v9363);

	i8 v9365 = (i8)(intptr_t)(ws+3880);
	i8 v9366 = *(i8*)(intptr_t)v9365;
	i8 v9367 = (i8)(intptr_t)(f60_FreeSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v9367)(v9366);

	goto c02_06af;

c02_06b2:;

	i8 v9368 = (i8)(intptr_t)(ws+3872);
	i8 v9369 = *(i8*)(intptr_t)v9368;
	i8 v9370 = (i8)+0;
	if (v9369==v9370) goto c02_06bd; else goto c02_06bc;

c02_06bc:;

	i8 v9371 = (i8)+0;
	i8 v9372 = (i8)(intptr_t)(ws+3872);
	i8 v9373 = *(i8*)(intptr_t)v9372;
	i8 v9374 = v9373+(+24);
	*(i8*)(intptr_t)v9374 = v9371;

	goto c02_06b9;

c02_06bd:;

	i8 v9375 = (i8)+0;
	i8 v9376 = (i8)(intptr_t)(ws+3856);
	i8 v9377 = *(i8*)(intptr_t)v9376;
	i8 v9378 = v9377+(+16);
	*(i8*)(intptr_t)v9378 = v9375;

c02_06b9:;

	i8 v9379 = (i8)(intptr_t)(ws+3872);
	i8 v9380 = *(i8*)(intptr_t)v9379;
	i8 v9381 = (i8)(intptr_t)(ws+3856);
	i8 v9382 = *(i8*)(intptr_t)v9381;
	i8 v9383 = v9382+(+24);
	*(i8*)(intptr_t)v9383 = v9380;

endsub:;
}
	void f66_InternalStrDup(i8* /* news */, i8 /* s */);
	void f213_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);

// CopyParameterList workspace at ws+3848 length ws+32
void f473_CopyParameterList(i8 p9384 /* subr */, i8 p9385 /* param */) {
	*(i8*)(intptr_t)(ws+3848) = p9385; /*param */
	*(i8*)(intptr_t)(ws+3856) = p9384; /*subr */

	i8 v9386 = (i8)+0;
	i8 v9387 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9387 = v9386;

c02_06c0:;

	i8 v9388 = (i8)(intptr_t)(ws+3848);
	i8 v9389 = *(i8*)(intptr_t)v9388;
	i8 v9390 = (i8)+0;
	if (v9389==v9390) goto c02_06c3; else goto c02_06c2;

c02_06c2:;

	i8 v9391 = (i8)(intptr_t)(ws+3856);
	i8 v9392 = *(i8*)(intptr_t)v9391;
	i8 v9393 = v9392+(+16);
	i8 v9394 = (i8)(intptr_t)(ws+3848);
	i8 v9395 = *(i8*)(intptr_t)v9394;
	i8 v9396 = v9395+(+8);
	i8 v9397 = *(i8*)(intptr_t)v9396;
	i8 v9398 = (i8)(intptr_t)(f66_InternalStrDup);
	i8 v9399;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v9398)(&v9399, v9397);
	i8 v9400 = (i8)(intptr_t)(f213_AddSymbol);
	i8 v9401;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9400)(&v9401, v9399, v9393);
	i8 v9402 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v9402 = v9401;

	i1 v9403 = (i1)+28;
	i8 v9404 = (i8)(intptr_t)(ws+3872);
	i8 v9405 = *(i8*)(intptr_t)v9404;
	i8 v9406 = v9405+(+32);
	*(i1*)(intptr_t)v9406 = v9403;

	i8 v9407 = (i8)+34;
	i8 v9408 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v9409;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9408)(&v9409, v9407);
	i8 v9410 = (i8)(intptr_t)(ws+3872);
	i8 v9411 = *(i8*)(intptr_t)v9410;
	*(i8*)(intptr_t)v9411 = v9409;

	i8 v9412 = (i8)(intptr_t)(ws+3848);
	i8 v9413 = *(i8*)(intptr_t)v9412;
	i8 v9414 = *(i8*)(intptr_t)v9413;
	i8 v9415 = *(i8*)(intptr_t)v9414;
	i8 v9416 = (i8)(intptr_t)(ws+3872);
	i8 v9417 = *(i8*)(intptr_t)v9416;
	i8 v9418 = *(i8*)(intptr_t)v9417;
	*(i8*)(intptr_t)v9418 = v9415;

	i8 v9419 = (i8)(intptr_t)(ws+3848);
	i8 v9420 = *(i8*)(intptr_t)v9419;
	i8 v9421 = *(i8*)(intptr_t)v9420;
	i8 v9422 = v9421+(+8);
	i8 v9423 = *(i8*)(intptr_t)v9422;
	i8 v9424 = (i8)(intptr_t)(ws+3872);
	i8 v9425 = *(i8*)(intptr_t)v9424;
	i8 v9426 = *(i8*)(intptr_t)v9425;
	i8 v9427 = v9426+(+8);
	*(i8*)(intptr_t)v9427 = v9423;

	i8 v9428 = (i8)(intptr_t)(ws+3848);
	i8 v9429 = *(i8*)(intptr_t)v9428;
	i8 v9430 = *(i8*)(intptr_t)v9429;
	i8 v9431 = v9430+(+32);
	i2 v9432 = *(i2*)(intptr_t)v9431;
	i8 v9433 = (i8)(intptr_t)(ws+3872);
	i8 v9434 = *(i8*)(intptr_t)v9433;
	i8 v9435 = *(i8*)(intptr_t)v9434;
	i8 v9436 = v9435+(+32);
	*(i2*)(intptr_t)v9436 = v9432;

	i8 v9437 = (i8)(intptr_t)(ws+3864);
	i8 v9438 = *(i8*)(intptr_t)v9437;
	i8 v9439 = (i8)+0;
	if (v9438==v9439) goto c02_06c8; else goto c02_06c7;

c02_06c7:;

	i8 v9440 = (i8)(intptr_t)(ws+3872);
	i8 v9441 = *(i8*)(intptr_t)v9440;
	i8 v9442 = (i8)(intptr_t)(ws+3864);
	i8 v9443 = *(i8*)(intptr_t)v9442;
	i8 v9444 = *(i8*)(intptr_t)v9443;
	i8 v9445 = v9444+(+16);
	*(i8*)(intptr_t)v9445 = v9441;

	goto c02_06c4;

c02_06c8:;

c02_06c4:;

	i8 v9446 = (i8)(intptr_t)(ws+3872);
	i8 v9447 = *(i8*)(intptr_t)v9446;
	i8 v9448 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9448 = v9447;

	i8 v9449 = (i8)(intptr_t)(ws+3848);
	i8 v9450 = *(i8*)(intptr_t)v9449;
	i8 v9451 = *(i8*)(intptr_t)v9450;
	i8 v9452 = v9451+(+16);
	i8 v9453 = *(i8*)(intptr_t)v9452;
	i8 v9454 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v9454 = v9453;

	goto c02_06c0;

c02_06c3:;

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f59_AllocNewSymbol(i8* /* symbol */);
const i1 c02_s0177[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f212_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// CreateMainSubroutine workspace at ws+3720 length ws+16
void f474_CreateMainSubroutine(void) {

	i8 v9455 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v9456;

	((void(*)(i8* /* type */))(intptr_t)v9455)(&v9456);
	i8 v9457 = (i8)(intptr_t)(ws+3720);
	*(i8*)(intptr_t)v9457 = v9456;

	i1 v9458 = (i1)+6;
	i8 v9459 = (i8)(intptr_t)(ws+3720);
	i8 v9460 = *(i8*)(intptr_t)v9459;
	i8 v9461 = v9460+(+52);
	*(i1*)(intptr_t)v9461 = v9458;

	i8 v9462 = (i8)(intptr_t)(f59_AllocNewSymbol);
	i8 v9463;

	((void(*)(i8* /* symbol */))(intptr_t)v9462)(&v9463);
	i8 v9464 = (i8)(intptr_t)(ws+3728);
	*(i8*)(intptr_t)v9464 = v9463;

	i1 v9465 = (i1)+30;
	i8 v9466 = (i8)(intptr_t)(ws+3728);
	i8 v9467 = *(i8*)(intptr_t)v9466;
	i8 v9468 = v9467+(+32);
	*(i1*)(intptr_t)v9468 = v9465;

	i8 v9469 = (i8)(intptr_t)c02_s0177;
	i8 v9470 = (i8)(intptr_t)(ws+3728);
	i8 v9471 = *(i8*)(intptr_t)v9470;
	i8 v9472 = v9471+(+8);
	*(i8*)(intptr_t)v9472 = v9469;

	i8 v9473 = (i8)(intptr_t)(ws+3720);
	i8 v9474 = *(i8*)(intptr_t)v9473;
	i8 v9475 = (i8)(intptr_t)(ws+3728);
	i8 v9476 = *(i8*)(intptr_t)v9475;
	*(i8*)(intptr_t)v9476 = v9474;

	i8 v9477 = (i8)(intptr_t)(ws+3728);
	i8 v9478 = *(i8*)(intptr_t)v9477;
	i8 v9479 = (i8)(intptr_t)(ws+3720);
	i8 v9480 = *(i8*)(intptr_t)v9479;
	i8 v9481 = v9480+(+32);
	*(i8*)(intptr_t)v9481 = v9478;

	i8 v9482 = (i8)+83;
	i8 v9483 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v9484;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9483)(&v9484, v9482);
	i8 v9485 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9485 = v9484;

	i8 v9486 = (i8)(intptr_t)(ws+3728);
	i8 v9487 = *(i8*)(intptr_t)v9486;
	i8 v9488 = (i8)(intptr_t)(ws+40);
	i8 v9489 = *(i8*)(intptr_t)v9488;
	*(i8*)(intptr_t)v9489 = v9487;

	i8 v9490 = (i8)(intptr_t)(ws+3720);
	i8 v9491 = *(i8*)(intptr_t)v9490;
	i8 v9492 = (i8)(intptr_t)(ws+40);
	i8 v9493 = *(i8*)(intptr_t)v9492;
	i8 v9494 = v9493+(+40);
	*(i8*)(intptr_t)v9494 = v9491;

	i8 v9495 = (i8)(intptr_t)(ws+40);
	i8 v9496 = *(i8*)(intptr_t)v9495;
	i8 v9497 = (i8)(intptr_t)(ws+40);
	i8 v9498 = *(i8*)(intptr_t)v9497;
	i8 v9499 = v9498+(+48);
	*(i8*)(intptr_t)v9499 = v9496;

	i8 v9500 = (i8)(intptr_t)(ws+40);
	i8 v9501 = *(i8*)(intptr_t)v9500;
	i8 v9502 = (i8)(intptr_t)(ws+3720);
	i8 v9503 = *(i8*)(intptr_t)v9502;
	*(i8*)(intptr_t)v9503 = v9501;

	i8 v9504 = (i8)(intptr_t)(ws+40);
	i8 v9505 = *(i8*)(intptr_t)v9504;
	i8 v9506 = v9505+(+16);
	i8 v9507 = (i8)(intptr_t)(ws+3728);
	i8 v9508 = *(i8*)(intptr_t)v9507;
	i8 v9509 = (i8)(intptr_t)(f212_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v9509)(v9508, v9506);

endsub:;
}
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s0178[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0179[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// expr_i_cant_do_that workspace at ws+3936 length ws+16
void f475_expr_i_cant_do_that(i8 p9510 /* rhs */, i8 p9511 /* lhs */) {
	*(i8*)(intptr_t)(ws+3936) = p9511; /*lhs */
	*(i8*)(intptr_t)(ws+3944) = p9510; /*rhs */

	i8 v9512 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v9512)();

	i8 v9513 = (i8)(intptr_t)(ws+3936);
	i8 v9514 = *(i8*)(intptr_t)v9513;
	i8 v9515 = v9514+(+16);
	i8 v9516 = *(i8*)(intptr_t)v9515;
	i8 v9517 = v9516+(+32);
	i8 v9518 = *(i8*)(intptr_t)v9517;
	i8 v9519 = v9518+(+8);
	i8 v9520 = *(i8*)(intptr_t)v9519;
	i8 v9521 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9521)(v9520);

	i8 v9522 = (i8)(intptr_t)c02_s0178;
	i8 v9523 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9523)(v9522);

	i8 v9524 = (i8)(intptr_t)(ws+3944);
	i8 v9525 = *(i8*)(intptr_t)v9524;
	i8 v9526 = v9525+(+16);
	i8 v9527 = *(i8*)(intptr_t)v9526;
	i8 v9528 = v9527+(+32);
	i8 v9529 = *(i8*)(intptr_t)v9528;
	i8 v9530 = v9529+(+8);
	i8 v9531 = *(i8*)(intptr_t)v9530;
	i8 v9532 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9532)(v9531);

	i8 v9533 = (i8)(intptr_t)c02_s0179;
	i8 v9534 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9534)(v9533);

	i8 v9535 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v9535)();

endsub:;
}
	void f69_StartError(void);
const i1 c02_s017a[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s017b[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s017c[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f225_IsScalar(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s017d[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// CheckExpressionType workspace at ws+3904 length ws+16
void f476_CheckExpressionType(i8 p9536 /* type */, i8 p9537 /* node */) {
	*(i8*)(intptr_t)(ws+3904) = p9537; /*node */
	*(i8*)(intptr_t)(ws+3912) = p9536; /*type */

	i8 v9538 = (i8)(intptr_t)(ws+3904);
	i8 v9539 = *(i8*)(intptr_t)v9538;
	i8 v9540 = v9539+(+16);
	i8 v9541 = *(i8*)(intptr_t)v9540;
	i8 v9542 = (i8)+0;
	if (v9541==v9542) goto c02_06cc; else goto c02_06cd;

c02_06cc:;

	i8 v9543 = (i8)(intptr_t)(ws+3912);
	i8 v9544 = *(i8*)(intptr_t)v9543;
	i8 v9545 = (i8)(intptr_t)(ws+3904);
	i8 v9546 = *(i8*)(intptr_t)v9545;
	i8 v9547 = v9546+(+16);
	*(i8*)(intptr_t)v9547 = v9544;

	goto c02_06c9;

c02_06cd:;

c02_06c9:;

	i8 v9548 = (i8)(intptr_t)(ws+3904);
	i8 v9549 = *(i8*)(intptr_t)v9548;
	i8 v9550 = v9549+(+16);
	i8 v9551 = *(i8*)(intptr_t)v9550;
	i8 v9552 = (i8)(intptr_t)(ws+3912);
	i8 v9553 = *(i8*)(intptr_t)v9552;
	if (v9551==v9553) goto c02_06d2; else goto c02_06d1;

c02_06d1:;

	i8 v9554 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v9554)();

	i8 v9555 = (i8)(intptr_t)c02_s017a;
	i8 v9556 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9556)(v9555);

	i8 v9557 = (i8)(intptr_t)(ws+3904);
	i8 v9558 = *(i8*)(intptr_t)v9557;
	i8 v9559 = v9558+(+16);
	i8 v9560 = *(i8*)(intptr_t)v9559;
	i8 v9561 = v9560+(+32);
	i8 v9562 = *(i8*)(intptr_t)v9561;
	i8 v9563 = v9562+(+8);
	i8 v9564 = *(i8*)(intptr_t)v9563;
	i8 v9565 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9565)(v9564);

	i8 v9566 = (i8)(intptr_t)c02_s017b;
	i8 v9567 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9567)(v9566);

	i8 v9568 = (i8)(intptr_t)(ws+3912);
	i8 v9569 = *(i8*)(intptr_t)v9568;
	i8 v9570 = v9569+(+32);
	i8 v9571 = *(i8*)(intptr_t)v9570;
	i8 v9572 = v9571+(+8);
	i8 v9573 = *(i8*)(intptr_t)v9572;
	i8 v9574 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9574)(v9573);

	i8 v9575 = (i8)(intptr_t)c02_s017c;
	i8 v9576 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9576)(v9575);

	i8 v9577 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v9577)();

	goto c02_06ce;

c02_06d2:;

c02_06ce:;

	i8 v9578 = (i8)(intptr_t)(ws+3912);
	i8 v9579 = *(i8*)(intptr_t)v9578;
	i8 v9580 = (i8)(intptr_t)(f225_IsScalar);
	i1 v9581;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9580)(&v9581, v9579);
	i1 v9582 = (i1)+0;
	if (v9581==v9582) goto c02_06d6; else goto c02_06d7;

c02_06d6:;

	i8 v9583 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v9583)();

	i8 v9584 = (i8)(intptr_t)(ws+3912);
	i8 v9585 = *(i8*)(intptr_t)v9584;
	i8 v9586 = v9585+(+32);
	i8 v9587 = *(i8*)(intptr_t)v9586;
	i8 v9588 = v9587+(+8);
	i8 v9589 = *(i8*)(intptr_t)v9588;
	i8 v9590 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9590)(v9589);

	i8 v9591 = (i8)(intptr_t)c02_s017d;
	i8 v9592 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9592)(v9591);

	i8 v9593 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v9593)();

	goto c02_06d3;

c02_06d7:;

c02_06d3:;

endsub:;
}
	void f223_IsNum(i1* /* result */, i8 /* type */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s017e[] = { 0x6c,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s017f[] = { 0x72,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0180[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f71_SimpleError(i8 /* message */);
	void f223_IsNum(i1* /* result */, i8 /* type */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0181[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f71_SimpleError(i8 /* message */);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3880 length ws+16
void f477_ResolveUntypedConstantsForAddOrSub(i8 p9594 /* rhs */, i8 p9595 /* lhs */) {
	*(i8*)(intptr_t)(ws+3880) = p9595; /*lhs */
	*(i8*)(intptr_t)(ws+3888) = p9594; /*rhs */

	i8 v9596 = (i8)(intptr_t)(ws+3880);
	i8 v9597 = *(i8*)(intptr_t)v9596;
	i8 v9598 = v9597+(+16);
	i8 v9599 = *(i8*)(intptr_t)v9598;
	i8 v9600 = (i8)+0;
	if (v9599==v9600) goto c02_06de; else goto c02_06df;

c02_06df:;

	i8 v9601 = (i8)(intptr_t)(ws+3888);
	i8 v9602 = *(i8*)(intptr_t)v9601;
	i8 v9603 = v9602+(+16);
	i8 v9604 = *(i8*)(intptr_t)v9603;
	i8 v9605 = (i8)+0;
	if (v9604==v9605) goto c02_06dd; else goto c02_06de;

c02_06dd:;

	i8 v9606 = (i8)(intptr_t)(ws+3880);
	i8 v9607 = *(i8*)(intptr_t)v9606;
	i8 v9608 = v9607+(+16);
	i8 v9609 = *(i8*)(intptr_t)v9608;
	i8 v9610 = (i8)(intptr_t)(f223_IsNum);
	i1 v9611;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9610)(&v9611, v9609);
	i1 v9612 = (i1)+0;
	if (v9611==v9612) goto c02_06e4; else goto c02_06e3;

c02_06e3:;

	i8 v9613 = (i8)(intptr_t)(ws+3880);
	i8 v9614 = *(i8*)(intptr_t)v9613;
	i8 v9615 = v9614+(+16);
	i8 v9616 = *(i8*)(intptr_t)v9615;
	i8 v9617 = (i8)(intptr_t)(ws+3888);
	i8 v9618 = *(i8*)(intptr_t)v9617;
	i8 v9619 = v9618+(+16);
	*(i8*)(intptr_t)v9619 = v9616;

	goto c02_06e0;

c02_06e4:;

	i8 v9620 = (i8)(intptr_t)(ws+3880);
	i8 v9621 = *(i8*)(intptr_t)v9620;
	i8 v9622 = v9621+(+16);
	i8 v9623 = *(i8*)(intptr_t)v9622;
	i8 v9624 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9625;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9624)(&v9625, v9623);
	i1 v9626 = (i1)+0;
	if (v9625==v9626) goto c02_06e8; else goto c02_06e7;

c02_06e7:;

	i8 v9627 = (i8)(intptr_t)(ws+1904);
	i8 v9628 = *(i8*)(intptr_t)v9627;
	i8 v9629 = (i8)(intptr_t)(ws+3888);
	i8 v9630 = *(i8*)(intptr_t)v9629;
	i8 v9631 = v9630+(+16);
	*(i8*)(intptr_t)v9631 = v9628;

	goto c02_06e0;

c02_06e8:;

	i8 v9632 = (i8)(intptr_t)c02_s017e;
	i8 v9633 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9633)(v9632);

	i8 v9634 = (i8)(intptr_t)(ws+3880);
	i8 v9635 = *(i8*)(intptr_t)v9634;
	i8 v9636 = v9635+(+16);
	i8 v9637 = *(i8*)(intptr_t)v9636;
	i4 v9638 = v9637;
	i8 v9639 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v9639)(v9638);

	i8 v9640 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v9640)();

	i8 v9641 = (i8)(intptr_t)c02_s017f;
	i8 v9642 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9642)(v9641);

	i8 v9643 = (i8)(intptr_t)(ws+3888);
	i8 v9644 = *(i8*)(intptr_t)v9643;
	i8 v9645 = v9644+(+16);
	i8 v9646 = *(i8*)(intptr_t)v9645;
	i4 v9647 = v9646;
	i8 v9648 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v9648)(v9647);

	i8 v9649 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v9649)();

	i8 v9650 = (i8)(intptr_t)c02_s0180;
	i8 v9651 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9651)(v9650);

c02_06e0:;

	goto c02_06d8;

c02_06de:;

c02_06d8:;

	i8 v9652 = (i8)(intptr_t)(ws+3880);
	i8 v9653 = *(i8*)(intptr_t)v9652;
	i8 v9654 = v9653+(+16);
	i8 v9655 = *(i8*)(intptr_t)v9654;
	i8 v9656 = (i8)+0;
	if (v9655==v9656) goto c02_06f0; else goto c02_06ef;

c02_06f0:;

	i8 v9657 = (i8)(intptr_t)(ws+3888);
	i8 v9658 = *(i8*)(intptr_t)v9657;
	i8 v9659 = v9658+(+16);
	i8 v9660 = *(i8*)(intptr_t)v9659;
	i8 v9661 = (i8)+0;
	if (v9660==v9661) goto c02_06ef; else goto c02_06ee;

c02_06ee:;

	i8 v9662 = (i8)(intptr_t)(ws+3888);
	i8 v9663 = *(i8*)(intptr_t)v9662;
	i8 v9664 = v9663+(+16);
	i8 v9665 = *(i8*)(intptr_t)v9664;
	i8 v9666 = (i8)(intptr_t)(f223_IsNum);
	i1 v9667;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9666)(&v9667, v9665);
	i1 v9668 = (i1)+0;
	if (v9667==v9668) goto c02_06f5; else goto c02_06f4;

c02_06f4:;

	i8 v9669 = (i8)(intptr_t)(ws+3888);
	i8 v9670 = *(i8*)(intptr_t)v9669;
	i8 v9671 = v9670+(+16);
	i8 v9672 = *(i8*)(intptr_t)v9671;
	i8 v9673 = (i8)(intptr_t)(ws+3880);
	i8 v9674 = *(i8*)(intptr_t)v9673;
	i8 v9675 = v9674+(+16);
	*(i8*)(intptr_t)v9675 = v9672;

	goto c02_06f1;

c02_06f5:;

	i8 v9676 = (i8)(intptr_t)(ws+3888);
	i8 v9677 = *(i8*)(intptr_t)v9676;
	i8 v9678 = v9677+(+16);
	i8 v9679 = *(i8*)(intptr_t)v9678;
	i8 v9680 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9681;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9680)(&v9681, v9679);
	i1 v9682 = (i1)+0;
	if (v9681==v9682) goto c02_06f9; else goto c02_06f8;

c02_06f8:;

	i8 v9683 = (i8)(intptr_t)c02_s0181;
	i8 v9684 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9684)(v9683);

	goto c02_06f1;

c02_06f9:;

c02_06f1:;

	goto c02_06e9;

c02_06ef:;

c02_06e9:;

endsub:;
}
	void f475_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// ResolveUntypedConstantsSimply workspace at ws+3904 length ws+32
void f478_ResolveUntypedConstantsSimply(i8 p9685 /* rhs */, i8 p9686 /* lhs */) {
	*(i8*)(intptr_t)(ws+3904) = p9686; /*lhs */
	*(i8*)(intptr_t)(ws+3912) = p9685; /*rhs */

	i8 v9687 = (i8)(intptr_t)(ws+3904);
	i8 v9688 = *(i8*)(intptr_t)v9687;
	i8 v9689 = v9688+(+16);
	i8 v9690 = *(i8*)(intptr_t)v9689;
	i8 v9691 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v9691 = v9690;

	i8 v9692 = (i8)(intptr_t)(ws+3912);
	i8 v9693 = *(i8*)(intptr_t)v9692;
	i8 v9694 = v9693+(+16);
	i8 v9695 = *(i8*)(intptr_t)v9694;
	i8 v9696 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v9696 = v9695;

	i8 v9697 = (i8)(intptr_t)(ws+3920);
	i8 v9698 = *(i8*)(intptr_t)v9697;
	i8 v9699 = (i8)+0;
	if (v9698==v9699) goto c02_0700; else goto c02_0701;

c02_0701:;

	i8 v9700 = (i8)(intptr_t)(ws+3928);
	i8 v9701 = *(i8*)(intptr_t)v9700;
	i8 v9702 = (i8)+0;
	if (v9701==v9702) goto c02_06ff; else goto c02_0700;

c02_06ff:;

	i8 v9703 = (i8)(intptr_t)(ws+3920);
	i8 v9704 = *(i8*)(intptr_t)v9703;
	i8 v9705 = (i8)(intptr_t)(ws+3912);
	i8 v9706 = *(i8*)(intptr_t)v9705;
	i8 v9707 = v9706+(+16);
	*(i8*)(intptr_t)v9707 = v9704;

	goto c02_06fa;

c02_0700:;

	i8 v9708 = (i8)(intptr_t)(ws+3920);
	i8 v9709 = *(i8*)(intptr_t)v9708;
	i8 v9710 = (i8)+0;
	if (v9709==v9710) goto c02_0708; else goto c02_0707;

c02_0708:;

	i8 v9711 = (i8)(intptr_t)(ws+3928);
	i8 v9712 = *(i8*)(intptr_t)v9711;
	i8 v9713 = (i8)+0;
	if (v9712==v9713) goto c02_0707; else goto c02_0706;

c02_0706:;

	i8 v9714 = (i8)(intptr_t)(ws+3928);
	i8 v9715 = *(i8*)(intptr_t)v9714;
	i8 v9716 = (i8)(intptr_t)(ws+3904);
	i8 v9717 = *(i8*)(intptr_t)v9716;
	i8 v9718 = v9717+(+16);
	*(i8*)(intptr_t)v9718 = v9715;

	goto c02_06fa;

c02_0707:;

	i8 v9719 = (i8)(intptr_t)(ws+3920);
	i8 v9720 = *(i8*)(intptr_t)v9719;
	i8 v9721 = (i8)(intptr_t)(ws+3928);
	i8 v9722 = *(i8*)(intptr_t)v9721;
	if (v9720==v9722) goto c02_070c; else goto c02_070b;

c02_070b:;

	i8 v9723 = (i8)(intptr_t)(ws+3904);
	i8 v9724 = *(i8*)(intptr_t)v9723;
	i8 v9725 = (i8)(intptr_t)(ws+3912);
	i8 v9726 = *(i8*)(intptr_t)v9725;
	i8 v9727 = (i8)(intptr_t)(f475_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9727)(v9726, v9724);

	goto c02_06fa;

c02_070c:;

c02_06fa:;

endsub:;
}
	void f223_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0182[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);

// CheckNumber workspace at ws+3904 length ws+8
void f479_CheckNumber(i8 p9728 /* node */) {
	*(i8*)(intptr_t)(ws+3904) = p9728; /*node */

	i8 v9729 = (i8)(intptr_t)(ws+3904);
	i8 v9730 = *(i8*)(intptr_t)v9729;
	i8 v9731 = v9730+(+16);
	i8 v9732 = *(i8*)(intptr_t)v9731;
	i8 v9733 = (i8)(intptr_t)(f223_IsNum);
	i1 v9734;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9733)(&v9734, v9732);
	i1 v9735 = (i1)+0;
	if (v9734==v9735) goto c02_0710; else goto c02_0711;

c02_0710:;

	i8 v9736 = (i8)(intptr_t)c02_s0182;
	i8 v9737 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9737)(v9736);

	goto c02_070d;

c02_0711:;

c02_070d:;

endsub:;
}
	void f478_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f479_CheckNumber(i8 /* node */);
	void f479_CheckNumber(i8 /* node */);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3888 length ws+16
void f480_ResolveUntypedConstantsNeedingNumbers(i8 p9738 /* rhs */, i8 p9739 /* lhs */) {
	*(i8*)(intptr_t)(ws+3888) = p9739; /*lhs */
	*(i8*)(intptr_t)(ws+3896) = p9738; /*rhs */

	i8 v9740 = (i8)(intptr_t)(ws+3888);
	i8 v9741 = *(i8*)(intptr_t)v9740;
	i8 v9742 = (i8)(intptr_t)(ws+3896);
	i8 v9743 = *(i8*)(intptr_t)v9742;
	i8 v9744 = (i8)(intptr_t)(f478_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9744)(v9743, v9741);

	i8 v9745 = (i8)(intptr_t)(ws+3888);
	i8 v9746 = *(i8*)(intptr_t)v9745;
	i8 v9747 = (i8)(intptr_t)(f479_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v9747)(v9746);

	i8 v9748 = (i8)(intptr_t)(ws+3896);
	i8 v9749 = *(i8*)(intptr_t)v9748;
	i8 v9750 = (i8)(intptr_t)(f479_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v9750)(v9749);

endsub:;
}
	void f478_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f475_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// CondSimple workspace at ws+3880 length ws+16
void f481_CondSimple(i8 p9751 /* rhs */, i8 p9752 /* lhs */) {
	*(i8*)(intptr_t)(ws+3880) = p9752; /*lhs */
	*(i8*)(intptr_t)(ws+3888) = p9751; /*rhs */

	i8 v9753 = (i8)(intptr_t)(ws+3880);
	i8 v9754 = *(i8*)(intptr_t)v9753;
	i8 v9755 = (i8)(intptr_t)(ws+3888);
	i8 v9756 = *(i8*)(intptr_t)v9755;
	i8 v9757 = (i8)(intptr_t)(f478_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9757)(v9756, v9754);

	i8 v9758 = (i8)(intptr_t)(ws+3880);
	i8 v9759 = *(i8*)(intptr_t)v9758;
	i8 v9760 = v9759+(+16);
	i8 v9761 = *(i8*)(intptr_t)v9760;
	i8 v9762 = (i8)(intptr_t)(ws+3888);
	i8 v9763 = *(i8*)(intptr_t)v9762;
	i8 v9764 = v9763+(+16);
	i8 v9765 = *(i8*)(intptr_t)v9764;
	if (v9761==v9765) goto c02_0716; else goto c02_0715;

c02_0715:;

	i8 v9766 = (i8)(intptr_t)(ws+3880);
	i8 v9767 = *(i8*)(intptr_t)v9766;
	i8 v9768 = (i8)(intptr_t)(ws+3888);
	i8 v9769 = *(i8*)(intptr_t)v9768;
	i8 v9770 = (i8)(intptr_t)(f475_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9770)(v9769, v9767);

	goto c02_0712;

c02_0716:;

c02_0712:;

endsub:;
}
	void f158_NodeWidth(i1* /* width */, i8 /* node */);
	void f162_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr1Simple workspace at ws+3840 length ws+24
void f482_Expr1Simple(i8* p9771 /* result */, i8 p9772 /* lhs */, i1 p9773 /* op */) {
	*(i1*)(intptr_t)(ws+3840) = p9773; /*op */
	*(i8*)(intptr_t)(ws+3848) = p9772; /*lhs */

	i8 v9774 = (i8)(intptr_t)(ws+3840);
	i1 v9775 = *(i1*)(intptr_t)v9774;
	i8 v9776 = (i8)(intptr_t)(ws+3848);
	i8 v9777 = *(i8*)(intptr_t)v9776;
	i8 v9778 = (i8)(intptr_t)(f158_NodeWidth);
	i1 v9779;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9778)(&v9779, v9777);
	i8 v9780 = (i8)(intptr_t)(ws+3848);
	i8 v9781 = *(i8*)(intptr_t)v9780;
	i8 v9782 = (i8)(intptr_t)(f162_MidC1Op);
	i8 v9783;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9782)(&v9783, v9781, v9779, v9775);
	i8 v9784 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v9784 = v9783;

	i8 v9785 = (i8)(intptr_t)(ws+3848);
	i8 v9786 = *(i8*)(intptr_t)v9785;
	i8 v9787 = v9786+(+16);
	i8 v9788 = *(i8*)(intptr_t)v9787;
	i8 v9789 = (i8)(intptr_t)(ws+3856);
	i8 v9790 = *(i8*)(intptr_t)v9789;
	i8 v9791 = v9790+(+16);
	*(i8*)(intptr_t)v9791 = v9788;

endsub:;
	*p9771 = *(i8*)(intptr_t)(ws+3856);
}
	void f477_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f475_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_add_that workspace at ws+3880 length ws+0
void f484_cant_add_that(void) {

	i8 v9800 = (i8)(intptr_t)(ws+3840);
	i8 v9801 = *(i8*)(intptr_t)v9800;
	i8 v9802 = (i8)(intptr_t)(ws+3848);
	i8 v9803 = *(i8*)(intptr_t)v9802;
	i8 v9804 = (i8)(intptr_t)(f475_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9804)(v9803, v9801);

endsub:;
}
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f484_cant_add_that(void);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f484_cant_add_that(void);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f484_cant_add_that(void);
	void f158_NodeWidth(i1* /* width */, i8 /* node */);
	void f164_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprAdd workspace at ws+3840 length ws+40
void f483_ExprAdd(i8* p9792 /* result */, i8 p9793 /* rhs */, i8 p9794 /* lhs */) {
	*(i8*)(intptr_t)(ws+3840) = p9794; /*lhs */
	*(i8*)(intptr_t)(ws+3848) = p9793; /*rhs */

	i8 v9795 = (i8)(intptr_t)(ws+3840);
	i8 v9796 = *(i8*)(intptr_t)v9795;
	i8 v9797 = (i8)(intptr_t)(ws+3848);
	i8 v9798 = *(i8*)(intptr_t)v9797;
	i8 v9799 = (i8)(intptr_t)(f477_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9799)(v9798, v9796);


	i8 v9805 = (i8)(intptr_t)(ws+3840);
	i8 v9806 = *(i8*)(intptr_t)v9805;
	i8 v9807 = v9806+(+16);
	i8 v9808 = *(i8*)(intptr_t)v9807;
	i8 v9809 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9809 = v9808;

	i8 v9810 = (i8)(intptr_t)(ws+3848);
	i8 v9811 = *(i8*)(intptr_t)v9810;
	i8 v9812 = v9811+(+16);
	i8 v9813 = *(i8*)(intptr_t)v9812;
	i8 v9814 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v9814 = v9813;

	i8 v9815 = (i8)(intptr_t)(ws+3864);
	i8 v9816 = *(i8*)(intptr_t)v9815;
	i8 v9817 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9818;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9817)(&v9818, v9816);
	i1 v9819 = (i1)+0;
	if (v9818==v9819) goto c02_071b; else goto c02_071a;

c02_071a:;

	i8 v9820 = (i8)(intptr_t)(ws+3872);
	i8 v9821 = *(i8*)(intptr_t)v9820;
	i8 v9822 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9823;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9822)(&v9823, v9821);
	i1 v9824 = (i1)+0;
	if (v9823==v9824) goto c02_0723; else goto c02_0721;

c02_0723:;

	i8 v9825 = (i8)(intptr_t)(ws+3872);
	i8 v9826 = *(i8*)(intptr_t)v9825;
	i8 v9827 = (i8)(intptr_t)(ws+1904);
	i8 v9828 = *(i8*)(intptr_t)v9827;
	if (v9826==v9828) goto c02_0722; else goto c02_0721;

c02_0721:;

	i8 v9829 = (i8)(intptr_t)(f484_cant_add_that);

	((void(*)(void))(intptr_t)v9829)();

	goto c02_071c;

c02_0722:;

c02_071c:;

	goto c02_0717;

c02_071b:;

	i8 v9830 = (i8)(intptr_t)(ws+3872);
	i8 v9831 = *(i8*)(intptr_t)v9830;
	i8 v9832 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9833;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9832)(&v9833, v9831);
	i1 v9834 = (i1)+0;
	if (v9833==v9834) goto c02_0727; else goto c02_0726;

c02_0726:;

	i8 v9835 = (i8)(intptr_t)(f484_cant_add_that);

	((void(*)(void))(intptr_t)v9835)();

	goto c02_0717;

c02_0727:;

	i8 v9836 = (i8)(intptr_t)(ws+3864);
	i8 v9837 = *(i8*)(intptr_t)v9836;
	i8 v9838 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9839;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9838)(&v9839, v9837);
	i1 v9840 = (i1)+0;
	if (v9839==v9840) goto c02_072e; else goto c02_072d;

c02_072e:;

	i8 v9841 = (i8)(intptr_t)(ws+3864);
	i8 v9842 = *(i8*)(intptr_t)v9841;
	i8 v9843 = (i8)(intptr_t)(ws+3872);
	i8 v9844 = *(i8*)(intptr_t)v9843;
	if (v9842==v9844) goto c02_072d; else goto c02_072c;

c02_072c:;

	i8 v9845 = (i8)(intptr_t)(f484_cant_add_that);

	((void(*)(void))(intptr_t)v9845)();

	goto c02_0717;

c02_072d:;

c02_0717:;

	i1 v9846 = (i1)+158;
	i8 v9847 = (i8)(intptr_t)(ws+3840);
	i8 v9848 = *(i8*)(intptr_t)v9847;
	i8 v9849 = (i8)(intptr_t)(f158_NodeWidth);
	i1 v9850;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9849)(&v9850, v9848);
	i8 v9851 = (i8)(intptr_t)(ws+3840);
	i8 v9852 = *(i8*)(intptr_t)v9851;
	i8 v9853 = (i8)(intptr_t)(ws+3848);
	i8 v9854 = *(i8*)(intptr_t)v9853;
	i8 v9855 = (i8)(intptr_t)(f164_MidC2Op);
	i8 v9856;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9855)(&v9856, v9854, v9852, v9850, v9846);
	i8 v9857 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v9857 = v9856;

	i8 v9858 = (i8)(intptr_t)(ws+3864);
	i8 v9859 = *(i8*)(intptr_t)v9858;
	i8 v9860 = (i8)(intptr_t)(ws+3856);
	i8 v9861 = *(i8*)(intptr_t)v9860;
	i8 v9862 = v9861+(+16);
	*(i8*)(intptr_t)v9862 = v9859;

endsub:;
	*p9792 = *(i8*)(intptr_t)(ws+3856);
}
	void f477_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f475_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_sub_that workspace at ws+3880 length ws+0
void f486_cant_sub_that(void) {

	i8 v9871 = (i8)(intptr_t)(ws+3840);
	i8 v9872 = *(i8*)(intptr_t)v9871;
	i8 v9873 = (i8)(intptr_t)(ws+3848);
	i8 v9874 = *(i8*)(intptr_t)v9873;
	i8 v9875 = (i8)(intptr_t)(f475_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9875)(v9874, v9872);

endsub:;
}
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f486_cant_sub_that(void);
	void f223_IsNum(i1* /* result */, i8 /* type */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f486_cant_sub_that(void);
	void f223_IsNum(i1* /* result */, i8 /* type */);
	void f223_IsNum(i1* /* result */, i8 /* type */);
	void f486_cant_sub_that(void);
	void f158_NodeWidth(i1* /* width */, i8 /* node */);
	void f164_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);

// ExprSub workspace at ws+3840 length ws+40
void f485_ExprSub(i8* p9863 /* result */, i8 p9864 /* rhs */, i8 p9865 /* lhs */) {
	*(i8*)(intptr_t)(ws+3840) = p9865; /*lhs */
	*(i8*)(intptr_t)(ws+3848) = p9864; /*rhs */

	i8 v9866 = (i8)(intptr_t)(ws+3840);
	i8 v9867 = *(i8*)(intptr_t)v9866;
	i8 v9868 = (i8)(intptr_t)(ws+3848);
	i8 v9869 = *(i8*)(intptr_t)v9868;
	i8 v9870 = (i8)(intptr_t)(f477_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9870)(v9869, v9867);


	i8 v9876 = (i8)(intptr_t)(ws+3840);
	i8 v9877 = *(i8*)(intptr_t)v9876;
	i8 v9878 = v9877+(+16);
	i8 v9879 = *(i8*)(intptr_t)v9878;
	i8 v9880 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9880 = v9879;

	i8 v9881 = (i8)(intptr_t)(ws+3848);
	i8 v9882 = *(i8*)(intptr_t)v9881;
	i8 v9883 = v9882+(+16);
	i8 v9884 = *(i8*)(intptr_t)v9883;
	i8 v9885 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v9885 = v9884;

	i8 v9886 = (i8)(intptr_t)(ws+3864);
	i8 v9887 = *(i8*)(intptr_t)v9886;
	i8 v9888 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9889;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9888)(&v9889, v9887);
	i1 v9890 = (i1)+0;
	if (v9889==v9890) goto c02_0737; else goto c02_0739;

c02_0739:;

	i8 v9891 = (i8)(intptr_t)(ws+3872);
	i8 v9892 = *(i8*)(intptr_t)v9891;
	i8 v9893 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9894;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9893)(&v9894, v9892);
	i1 v9895 = (i1)+0;
	if (v9894==v9895) goto c02_0738; else goto c02_0737;

c02_0738:;

	i8 v9896 = (i8)(intptr_t)(ws+3872);
	i8 v9897 = *(i8*)(intptr_t)v9896;
	i8 v9898 = (i8)(intptr_t)(ws+1904);
	i8 v9899 = *(i8*)(intptr_t)v9898;
	if (v9897==v9899) goto c02_0737; else goto c02_0736;

c02_0736:;

	i8 v9900 = (i8)(intptr_t)(f486_cant_sub_that);

	((void(*)(void))(intptr_t)v9900)();

	goto c02_072f;

c02_0737:;

	i8 v9901 = (i8)(intptr_t)(ws+3864);
	i8 v9902 = *(i8*)(intptr_t)v9901;
	i8 v9903 = (i8)(intptr_t)(f223_IsNum);
	i1 v9904;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9903)(&v9904, v9902);
	i1 v9905 = (i1)+0;
	if (v9904==v9905) goto c02_073f; else goto c02_0740;

c02_0740:;

	i8 v9906 = (i8)(intptr_t)(ws+3872);
	i8 v9907 = *(i8*)(intptr_t)v9906;
	i8 v9908 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9909;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9908)(&v9909, v9907);
	i1 v9910 = (i1)+0;
	if (v9909==v9910) goto c02_073f; else goto c02_073e;

c02_073e:;

	i8 v9911 = (i8)(intptr_t)(f486_cant_sub_that);

	((void(*)(void))(intptr_t)v9911)();

	goto c02_072f;

c02_073f:;

	i8 v9912 = (i8)(intptr_t)(ws+3864);
	i8 v9913 = *(i8*)(intptr_t)v9912;
	i8 v9914 = (i8)(intptr_t)(f223_IsNum);
	i1 v9915;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9914)(&v9915, v9913);
	i1 v9916 = (i1)+0;
	if (v9915==v9916) goto c02_0748; else goto c02_074a;

c02_074a:;

	i8 v9917 = (i8)(intptr_t)(ws+3872);
	i8 v9918 = *(i8*)(intptr_t)v9917;
	i8 v9919 = (i8)(intptr_t)(f223_IsNum);
	i1 v9920;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9919)(&v9920, v9918);
	i1 v9921 = (i1)+0;
	if (v9920==v9921) goto c02_0748; else goto c02_0749;

c02_0749:;

	i8 v9922 = (i8)(intptr_t)(ws+3864);
	i8 v9923 = *(i8*)(intptr_t)v9922;
	i8 v9924 = (i8)(intptr_t)(ws+3872);
	i8 v9925 = *(i8*)(intptr_t)v9924;
	if (v9923==v9925) goto c02_0748; else goto c02_0747;

c02_0747:;

	i8 v9926 = (i8)(intptr_t)(f486_cant_sub_that);

	((void(*)(void))(intptr_t)v9926)();

	goto c02_072f;

c02_0748:;

c02_072f:;

	i1 v9927 = (i1)+133;
	i8 v9928 = (i8)(intptr_t)(ws+3840);
	i8 v9929 = *(i8*)(intptr_t)v9928;
	i8 v9930 = (i8)(intptr_t)(f158_NodeWidth);
	i1 v9931;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9930)(&v9931, v9929);
	i8 v9932 = (i8)(intptr_t)(ws+3840);
	i8 v9933 = *(i8*)(intptr_t)v9932;
	i8 v9934 = (i8)(intptr_t)(ws+3848);
	i8 v9935 = *(i8*)(intptr_t)v9934;
	i8 v9936 = (i8)(intptr_t)(f164_MidC2Op);
	i8 v9937;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9936)(&v9937, v9935, v9933, v9931, v9927);
	i8 v9938 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v9938 = v9937;

	i8 v9939 = (i8)(intptr_t)(ws+3864);
	i8 v9940 = *(i8*)(intptr_t)v9939;
	i8 v9941 = (i8)(intptr_t)(f221_IsPtr);
	i1 v9942;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9941)(&v9942, v9940);
	i1 v9943 = (i1)+0;
	if (v9942==v9943) goto c02_0751; else goto c02_0752;

c02_0752:;

	i8 v9944 = (i8)(intptr_t)(ws+3864);
	i8 v9945 = *(i8*)(intptr_t)v9944;
	i8 v9946 = (i8)(intptr_t)(ws+3872);
	i8 v9947 = *(i8*)(intptr_t)v9946;
	if (v9945==v9947) goto c02_0750; else goto c02_0751;

c02_0750:;

	i8 v9948 = (i8)(intptr_t)(ws+1904);
	i8 v9949 = *(i8*)(intptr_t)v9948;
	i8 v9950 = (i8)(intptr_t)(ws+3856);
	i8 v9951 = *(i8*)(intptr_t)v9950;
	i8 v9952 = v9951+(+16);
	*(i8*)(intptr_t)v9952 = v9949;

	goto c02_074b;

c02_0751:;

	i8 v9953 = (i8)(intptr_t)(ws+3864);
	i8 v9954 = *(i8*)(intptr_t)v9953;
	i8 v9955 = (i8)(intptr_t)(ws+3856);
	i8 v9956 = *(i8*)(intptr_t)v9955;
	i8 v9957 = v9956+(+16);
	*(i8*)(intptr_t)v9957 = v9954;

c02_074b:;

endsub:;
	*p9863 = *(i8*)(intptr_t)(ws+3856);
}
	void f480_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	void f224_IsSNum(i1* /* result */, i8 /* type */);
	void f158_NodeWidth(i1* /* width */, i8 /* node */);
	void f164_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr2Simple workspace at ws+3840 length ws+48
void f487_Expr2Simple(i8* p9958 /* result */, i8 p9959 /* rhs */, i8 p9960 /* lhs */, i1 p9961 /* uop */, i1 p9962 /* sop */) {
	*(i1*)(intptr_t)(ws+3840) = p9962; /*sop */
	*(i1*)(intptr_t)(ws+3841) = p9961; /*uop */
	*(i8*)(intptr_t)(ws+3848) = p9960; /*lhs */
	*(i8*)(intptr_t)(ws+3856) = p9959; /*rhs */

	i8 v9963 = (i8)(intptr_t)(ws+3848);
	i8 v9964 = *(i8*)(intptr_t)v9963;
	i8 v9965 = (i8)(intptr_t)(ws+3856);
	i8 v9966 = *(i8*)(intptr_t)v9965;
	i8 v9967 = (i8)(intptr_t)(f480_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9967)(v9966, v9964);

	i8 v9968 = (i8)(intptr_t)(ws+3841);
	i1 v9969 = *(i1*)(intptr_t)v9968;
	i8 v9970 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v9970 = v9969;

	i8 v9971 = (i8)(intptr_t)(ws+3848);
	i8 v9972 = *(i8*)(intptr_t)v9971;
	i8 v9973 = v9972+(+16);
	i8 v9974 = *(i8*)(intptr_t)v9973;
	i8 v9975 = (i8)(intptr_t)(f224_IsSNum);
	i1 v9976;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9975)(&v9976, v9974);
	i1 v9977 = (i1)+0;
	if (v9976==v9977) goto c02_0757; else goto c02_0756;

c02_0756:;

	i8 v9978 = (i8)(intptr_t)(ws+3840);
	i1 v9979 = *(i1*)(intptr_t)v9978;
	i8 v9980 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v9980 = v9979;

	goto c02_0753;

c02_0757:;

c02_0753:;

	i8 v9981 = (i8)(intptr_t)(ws+3848);
	i8 v9982 = *(i8*)(intptr_t)v9981;
	i8 v9983 = v9982+(+16);
	i8 v9984 = *(i8*)(intptr_t)v9983;
	i8 v9985 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v9985 = v9984;

	i8 v9986 = (i8)(intptr_t)(ws+3872);
	i1 v9987 = *(i1*)(intptr_t)v9986;
	i8 v9988 = (i8)(intptr_t)(ws+3848);
	i8 v9989 = *(i8*)(intptr_t)v9988;
	i8 v9990 = (i8)(intptr_t)(f158_NodeWidth);
	i1 v9991;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9990)(&v9991, v9989);
	i8 v9992 = (i8)(intptr_t)(ws+3848);
	i8 v9993 = *(i8*)(intptr_t)v9992;
	i8 v9994 = (i8)(intptr_t)(ws+3856);
	i8 v9995 = *(i8*)(intptr_t)v9994;
	i8 v9996 = (i8)(intptr_t)(f164_MidC2Op);
	i8 v9997;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9996)(&v9997, v9995, v9993, v9991, v9987);
	i8 v9998 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v9998 = v9997;

	i8 v9999 = (i8)(intptr_t)(ws+3880);
	i8 v10000 = *(i8*)(intptr_t)v9999;
	i8 v10001 = (i8)(intptr_t)(ws+3864);
	i8 v10002 = *(i8*)(intptr_t)v10001;
	i8 v10003 = v10002+(+16);
	*(i8*)(intptr_t)v10003 = v10000;

endsub:;
	*p9958 = *(i8*)(intptr_t)(ws+3864);
}
const i1 c02_s0183[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f71_SimpleError(i8 /* message */);

// expr_i_checkrhsconst workspace at ws+3888 length ws+8
void f488_expr_i_checkrhsconst(i8 p10004 /* rhs */) {
	*(i8*)(intptr_t)(ws+3888) = p10004; /*rhs */

	i8 v10005 = (i8)(intptr_t)(ws+3888);
	i8 v10006 = *(i8*)(intptr_t)v10005;
	i8 v10007 = v10006+(+58);
	i1 v10008 = *(i1*)(intptr_t)v10007;
	i1 v10009 = (i1)+43;
	if (v10008==v10009) goto c02_075c; else goto c02_075b;

c02_075b:;

	i8 v10010 = (i8)(intptr_t)c02_s0183;
	i8 v10011 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10011)(v10010);

	goto c02_0758;

c02_075c:;

c02_0758:;

endsub:;
}
	void f223_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0184[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f71_SimpleError(i8 /* message */);
	void f476_CheckExpressionType(i8 /* type */, i8 /* node */);

// expr_i_checkshift workspace at ws+3888 length ws+16
void f489_expr_i_checkshift(i8 p10012 /* rhs */, i8 p10013 /* lhs */) {
	*(i8*)(intptr_t)(ws+3888) = p10013; /*lhs */
	*(i8*)(intptr_t)(ws+3896) = p10012; /*rhs */

	i8 v10014 = (i8)(intptr_t)(ws+3888);
	i8 v10015 = *(i8*)(intptr_t)v10014;
	i8 v10016 = v10015+(+16);
	i8 v10017 = *(i8*)(intptr_t)v10016;
	i8 v10018 = (i8)(intptr_t)(f223_IsNum);
	i1 v10019;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10018)(&v10019, v10017);
	i1 v10020 = (i1)+0;
	if (v10019==v10020) goto c02_0760; else goto c02_0761;

c02_0760:;

	i8 v10021 = (i8)(intptr_t)c02_s0184;
	i8 v10022 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10022)(v10021);

	goto c02_075d;

c02_0761:;

c02_075d:;

	i8 v10023 = (i8)(intptr_t)(ws+3896);
	i8 v10024 = *(i8*)(intptr_t)v10023;
	i8 v10025 = (i8)(intptr_t)(ws+1888);
	i8 v10026 = *(i8*)(intptr_t)v10025;
	i8 v10027 = (i8)(intptr_t)(f476_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10027)(v10026, v10024);

endsub:;
}
	void f224_IsSNum(i1* /* result */, i8 /* type */);
	void f488_expr_i_checkrhsconst(i8 /* rhs */);
	void f161_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f58_Discard(i8 /* node */);
	void f489_expr_i_checkshift(i8 /* rhs */, i8 /* lhs */);
	void f158_NodeWidth(i1* /* width */, i8 /* node */);
	void f164_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprShift workspace at ws+3840 length ws+48
void f490_ExprShift(i8* p10028 /* result */, i8 p10029 /* rhs */, i8 p10030 /* lhs */, i1 p10031 /* uop */, i1 p10032 /* sop */) {
	*(i1*)(intptr_t)(ws+3840) = p10032; /*sop */
	*(i1*)(intptr_t)(ws+3841) = p10031; /*uop */
	*(i8*)(intptr_t)(ws+3848) = p10030; /*lhs */
	*(i8*)(intptr_t)(ws+3856) = p10029; /*rhs */

	i8 v10033 = (i8)(intptr_t)(ws+3841);
	i1 v10034 = *(i1*)(intptr_t)v10033;
	i8 v10035 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v10035 = v10034;

	i8 v10036 = (i8)(intptr_t)(ws+3848);
	i8 v10037 = *(i8*)(intptr_t)v10036;
	i8 v10038 = v10037+(+16);
	i8 v10039 = *(i8*)(intptr_t)v10038;
	i8 v10040 = (i8)(intptr_t)(f224_IsSNum);
	i1 v10041;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10040)(&v10041, v10039);
	i1 v10042 = (i1)+0;
	if (v10041==v10042) goto c02_0766; else goto c02_0765;

c02_0765:;

	i8 v10043 = (i8)(intptr_t)(ws+3840);
	i1 v10044 = *(i1*)(intptr_t)v10043;
	i8 v10045 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v10045 = v10044;

	goto c02_0762;

c02_0766:;

c02_0762:;

	i8 v10046 = (i8)(intptr_t)(ws+3848);
	i8 v10047 = *(i8*)(intptr_t)v10046;
	i8 v10048 = v10047+(+58);
	i1 v10049 = *(i1*)(intptr_t)v10048;
	i1 v10050 = (i1)+43;
	if (v10049==v10050) goto c02_076a; else goto c02_076b;

c02_076a:;

	i8 v10051 = (i8)(intptr_t)(ws+3856);
	i8 v10052 = *(i8*)(intptr_t)v10051;
	i8 v10053 = (i8)(intptr_t)(f488_expr_i_checkrhsconst);

	((void(*)(i8 /* rhs */))(intptr_t)v10053)(v10052);

	i8 v10054 = (i8)(intptr_t)(ws+3872);
	i1 v10055 = *(i1*)(intptr_t)v10054;
	i8 v10056 = (i8)(intptr_t)(ws+3848);
	i8 v10057 = *(i8*)(intptr_t)v10056;
	i8 v10058 = (i8)(intptr_t)(ws+3856);
	i8 v10059 = *(i8*)(intptr_t)v10058;
	i8 v10060 = (i8)(intptr_t)(f161_FoldConstant2);
	i4 v10061;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v10060)(&v10061, v10059, v10057, v10055);
	i8 v10062 = (i8)(intptr_t)(ws+3848);
	i8 v10063 = *(i8*)(intptr_t)v10062;
	*(i4*)(intptr_t)v10063 = v10061;

	i8 v10064 = (i8)(intptr_t)(ws+3848);
	i8 v10065 = *(i8*)(intptr_t)v10064;
	i8 v10066 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v10066 = v10065;

	i8 v10067 = (i8)(intptr_t)(ws+3856);
	i8 v10068 = *(i8*)(intptr_t)v10067;
	i8 v10069 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v10069)(v10068);

	goto endsub;

c02_076b:;

c02_0767:;

	i8 v10070 = (i8)(intptr_t)(ws+3848);
	i8 v10071 = *(i8*)(intptr_t)v10070;
	i8 v10072 = (i8)(intptr_t)(ws+3856);
	i8 v10073 = *(i8*)(intptr_t)v10072;
	i8 v10074 = (i8)(intptr_t)(f489_expr_i_checkshift);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v10074)(v10073, v10071);

	i8 v10075 = (i8)(intptr_t)(ws+3848);
	i8 v10076 = *(i8*)(intptr_t)v10075;
	i8 v10077 = v10076+(+16);
	i8 v10078 = *(i8*)(intptr_t)v10077;
	i8 v10079 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v10079 = v10078;

	i8 v10080 = (i8)(intptr_t)(ws+3872);
	i1 v10081 = *(i1*)(intptr_t)v10080;
	i8 v10082 = (i8)(intptr_t)(ws+3848);
	i8 v10083 = *(i8*)(intptr_t)v10082;
	i8 v10084 = (i8)(intptr_t)(f158_NodeWidth);
	i1 v10085;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v10084)(&v10085, v10083);
	i8 v10086 = (i8)(intptr_t)(ws+3848);
	i8 v10087 = *(i8*)(intptr_t)v10086;
	i8 v10088 = (i8)(intptr_t)(ws+3856);
	i8 v10089 = *(i8*)(intptr_t)v10088;
	i8 v10090 = (i8)(intptr_t)(f164_MidC2Op);
	i8 v10091;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v10090)(&v10091, v10089, v10087, v10085, v10081);
	i8 v10092 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v10092 = v10091;

	i8 v10093 = (i8)(intptr_t)(ws+3880);
	i8 v10094 = *(i8*)(intptr_t)v10093;
	i8 v10095 = (i8)(intptr_t)(ws+3864);
	i8 v10096 = *(i8*)(intptr_t)v10095;
	i8 v10097 = v10096+(+16);
	*(i8*)(intptr_t)v10097 = v10094;

endsub:;
	*p10028 = *(i8*)(intptr_t)(ws+3864);
}
const i1 c02_s0185[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f71_SimpleError(i8 /* message */);

// PushNode workspace at ws+4064 length ws+8
void f55_PushNode(i8 p10098 /* node */) {
	*(i8*)(intptr_t)(ws+4064) = p10098; /*node */

	i8 v10099 = (i8)(intptr_t)(ws+4064);
	i8 v10100 = *(i8*)(intptr_t)v10099;
	i8 v10101 = (i8)+0;
	if (v10100==v10101) goto c02_0770; else goto c02_076f;

c02_076f:;

	i8 v10102 = (i8)(intptr_t)(ws+224);
	i8 v10103 = *(i8*)(intptr_t)v10102;
	i8 v10104 = (i8)(intptr_t)(ws+224);
	if (v10103==v10104) goto c02_0774; else goto c02_0775;

c02_0774:;

	i8 v10105 = (i8)(intptr_t)c02_s0185;
	i8 v10106 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10106)(v10105);

	goto c02_0771;

c02_0775:;

c02_0771:;

	i8 v10107 = (i8)(intptr_t)(ws+4064);
	i8 v10108 = *(i8*)(intptr_t)v10107;
	i8 v10109 = (i8)(intptr_t)(ws+224);
	i8 v10110 = *(i8*)(intptr_t)v10109;
	*(i8*)(intptr_t)v10110 = v10108;

	i8 v10111 = (i8)(intptr_t)(ws+224);
	i8 v10112 = *(i8*)(intptr_t)v10111;
	i8 v10113 = v10112+(+8);
	i8 v10114 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v10114 = v10113;

	goto c02_076c;

c02_0770:;

c02_076c:;

endsub:;
}

// PopNode workspace at ws+4048 length ws+8
void f56_PopNode(i8* p10115 /* node */) {

	i8 v10116 = (i8)(intptr_t)(ws+224);
	i8 v10117 = *(i8*)(intptr_t)v10116;
	i8 v10118 = v10117+(-8);
	i8 v10119 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v10119 = v10118;

	i8 v10120 = (i8)(intptr_t)(ws+224);
	i8 v10121 = *(i8*)(intptr_t)v10120;
	i8 v10122 = *(i8*)(intptr_t)v10121;
	i8 v10123 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v10123 = v10122;

endsub:;
	*p10115 = *(i8*)(intptr_t)(ws+4048);
}
	void f56_PopNode(i8* /* node */);
	void f55_PushNode(i8 /* node */);
	void f55_PushNode(i8 /* node */);

// NextNode workspace at ws+4040 length ws+8
void f57_NextNode(i8* p10124 /* node */) {

	i8 v10125 = (i8)(intptr_t)(f56_PopNode);
	i8 v10126;

	((void(*)(i8* /* node */))(intptr_t)v10125)(&v10126);
	i8 v10127 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v10127 = v10126;

	i8 v10128 = (i8)(intptr_t)(ws+4040);
	i8 v10129 = *(i8*)(intptr_t)v10128;
	i8 v10130 = (i8)+0;
	if (v10129==v10130) goto c02_077a; else goto c02_0779;

c02_0779:;

	i8 v10131 = (i8)(intptr_t)(ws+4040);
	i8 v10132 = *(i8*)(intptr_t)v10131;
	i8 v10133 = v10132+(+24);
	i8 v10134 = *(i8*)(intptr_t)v10133;
	i8 v10135 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v10135)(v10134);

	i8 v10136 = (i8)(intptr_t)(ws+4040);
	i8 v10137 = *(i8*)(intptr_t)v10136;
	i8 v10138 = v10137+(+32);
	i8 v10139 = *(i8*)(intptr_t)v10138;
	i8 v10140 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v10140)(v10139);

	goto c02_0776;

c02_077a:;

c02_0776:;

endsub:;
	*p10124 = *(i8*)(intptr_t)(ws+4040);
}
	void f55_PushNode(i8 /* node */);
	void f57_NextNode(i8* /* node */);
	void f157_FreeNode(i8 /* node */);

// Discard workspace at ws+3992 length ws+24
void f58_Discard(i8 p10141 /* node */) {
	*(i8*)(intptr_t)(ws+3992) = p10141; /*node */

	i8 v10142 = (i8)(intptr_t)(ws+224);
	i8 v10143 = *(i8*)(intptr_t)v10142;
	i8 v10144 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v10144 = v10143;

	i8 v10145 = (i8)(intptr_t)(ws+3992);
	i8 v10146 = *(i8*)(intptr_t)v10145;
	i8 v10147 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v10147)(v10146);

c02_077d:;

	i8 v10148 = (i8)(intptr_t)(ws+224);
	i8 v10149 = *(i8*)(intptr_t)v10148;
	i8 v10150 = (i8)(intptr_t)(ws+4000);
	i8 v10151 = *(i8*)(intptr_t)v10150;
	if (v10149==v10151) goto c02_0780; else goto c02_077f;

c02_077f:;

	i8 v10152 = (i8)(intptr_t)(f57_NextNode);
	i8 v10153;

	((void(*)(i8* /* node */))(intptr_t)v10152)(&v10153);
	i8 v10154 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v10154 = v10153;

	i8 v10155 = (i8)(intptr_t)(ws+4008);
	i8 v10156 = *(i8*)(intptr_t)v10155;
	i8 v10157 = (i8)(intptr_t)(f157_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v10157)(v10156);

	goto c02_077d;

c02_0780:;

endsub:;
}
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f229_AllocLabel(i2* /* label */);
	void f229_AllocLabel(i2* /* label */);

// BeginNormalLoop workspace at ws+3848 length ws+8
void f491_BeginNormalLoop(i8* p10158 /* ll */) {

	i8 v10159 = (i8)+8;
	i8 v10160 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v10161;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10160)(&v10161, v10159);
	i8 v10162 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v10162 = v10161;

	i8 v10163 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10164;

	((void(*)(i2* /* label */))(intptr_t)v10163)(&v10164);
	i8 v10165 = (i8)(intptr_t)(ws+3848);
	i8 v10166 = *(i8*)(intptr_t)v10165;
	*(i2*)(intptr_t)v10166 = v10164;

	i8 v10167 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10168;

	((void(*)(i2* /* label */))(intptr_t)v10167)(&v10168);
	i8 v10169 = (i8)(intptr_t)(ws+3848);
	i8 v10170 = *(i8*)(intptr_t)v10169;
	i8 v10171 = v10170+(+2);
	*(i2*)(intptr_t)v10171 = v10168;

	i8 v10172 = (i8)(intptr_t)(ws+52);
	i2 v10173 = *(i2*)(intptr_t)v10172;
	i8 v10174 = (i8)(intptr_t)(ws+3848);
	i8 v10175 = *(i8*)(intptr_t)v10174;
	i8 v10176 = v10175+(+4);
	*(i2*)(intptr_t)v10176 = v10173;

	i8 v10177 = (i8)(intptr_t)(ws+54);
	i2 v10178 = *(i2*)(intptr_t)v10177;
	i8 v10179 = (i8)(intptr_t)(ws+3848);
	i8 v10180 = *(i8*)(intptr_t)v10179;
	i8 v10181 = v10180+(+6);
	*(i2*)(intptr_t)v10181 = v10178;

	i8 v10182 = (i8)(intptr_t)(ws+3848);
	i8 v10183 = *(i8*)(intptr_t)v10182;
	i8 v10184 = v10183+(+2);
	i2 v10185 = *(i2*)(intptr_t)v10184;
	i8 v10186 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10186 = v10185;

	i8 v10187 = (i8)(intptr_t)(ws+3848);
	i8 v10188 = *(i8*)(intptr_t)v10187;
	i2 v10189 = *(i2*)(intptr_t)v10188;
	i8 v10190 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10190 = v10189;

endsub:;
	*p10158 = *(i8*)(intptr_t)(ws+3848);
}
	void f106_MidJump(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);

// TerminateNormalLoop workspace at ws+3840 length ws+8
void f492_TerminateNormalLoop(i8 p10191 /* ll */) {
	*(i8*)(intptr_t)(ws+3840) = p10191; /*ll */

	i8 v10192 = (i8)(intptr_t)(ws+54);
	i2 v10193 = *(i2*)(intptr_t)v10192;
	i8 v10194 = (i8)(intptr_t)(f106_MidJump);
	i8 v10195;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10194)(&v10195, v10193);
	i8 v10196 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10196)(v10195);

	i8 v10197 = (i8)(intptr_t)(ws+52);
	i2 v10198 = *(i2*)(intptr_t)v10197;
	i8 v10199 = (i8)(intptr_t)(f116_MidLabel);
	i8 v10200;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10199)(&v10200, v10198);
	i8 v10201 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10201)(v10200);

	i8 v10202 = (i8)(intptr_t)(ws+3840);
	i8 v10203 = *(i8*)(intptr_t)v10202;
	i8 v10204 = v10203+(+4);
	i2 v10205 = *(i2*)(intptr_t)v10204;
	i8 v10206 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10206 = v10205;

	i8 v10207 = (i8)(intptr_t)(ws+3840);
	i8 v10208 = *(i8*)(intptr_t)v10207;
	i8 v10209 = v10208+(+6);
	i2 v10210 = *(i2*)(intptr_t)v10209;
	i8 v10211 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10211 = v10210;

	i8 v10212 = (i8)(intptr_t)(ws+3840);
	i8 v10213 = *(i8*)(intptr_t)v10212;
	i8 v10214 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v10214)(v10213);

endsub:;
}

// Negate workspace at ws+3840 length ws+8
void f493_Negate(i8 p10215 /* node */) {
	*(i8*)(intptr_t)(ws+3840) = p10215; /*node */

	i8 v10216 = (i8)(intptr_t)(ws+3840);
	i8 v10217 = *(i8*)(intptr_t)v10216;
	i8 v10218 = v10217+(+6);
	i1 v10219 = *(i1*)(intptr_t)v10218;
	i1 v10220 = v10219^(+1);
	i8 v10221 = (i8)(intptr_t)(ws+3840);
	i8 v10222 = *(i8*)(intptr_t)v10221;
	i8 v10223 = v10222+(+6);
	*(i1*)(intptr_t)v10223 = v10220;

endsub:;
}
	void f481_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f229_AllocLabel(i2* /* label */);
	void f229_AllocLabel(i2* /* label */);
	void f158_NodeWidth(i1* /* width */, i8 /* node */);
	void f134_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalEq workspace at ws+3840 length ws+37
void f494_ConditionalEq(i8* p10224 /* result */, i1 p10225 /* negated */, i8 p10226 /* rhs */, i8 p10227 /* lhs */) {
	*(i8*)(intptr_t)(ws+3840) = p10227; /*lhs */
	*(i8*)(intptr_t)(ws+3848) = p10226; /*rhs */
	*(i1*)(intptr_t)(ws+3856) = p10225; /*negated */

	i8 v10228 = (i8)(intptr_t)(ws+3840);
	i8 v10229 = *(i8*)(intptr_t)v10228;
	i8 v10230 = (i8)(intptr_t)(ws+3848);
	i8 v10231 = *(i8*)(intptr_t)v10230;
	i8 v10232 = (i8)(intptr_t)(f481_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v10232)(v10231, v10229);

	i8 v10233 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10234;

	((void(*)(i2* /* label */))(intptr_t)v10233)(&v10234);
	i8 v10235 = (i8)(intptr_t)(ws+3872);
	*(i2*)(intptr_t)v10235 = v10234;

	i8 v10236 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10237;

	((void(*)(i2* /* label */))(intptr_t)v10236)(&v10237);
	i8 v10238 = (i8)(intptr_t)(ws+3874);
	*(i2*)(intptr_t)v10238 = v10237;

	i8 v10239 = (i8)(intptr_t)(ws+3840);
	i8 v10240 = *(i8*)(intptr_t)v10239;
	i8 v10241 = (i8)(intptr_t)(f158_NodeWidth);
	i1 v10242;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v10241)(&v10242, v10240);
	i8 v10243 = (i8)(intptr_t)(ws+3876);
	*(i1*)(intptr_t)v10243 = v10242;

	i8 v10244 = (i8)(intptr_t)(ws+3876);
	i1 v10245 = *(i1*)(intptr_t)v10244;
	i8 v10246 = (i8)(intptr_t)(ws+3840);
	i8 v10247 = *(i8*)(intptr_t)v10246;
	i8 v10248 = (i8)(intptr_t)(ws+3848);
	i8 v10249 = *(i8*)(intptr_t)v10248;
	i8 v10250 = (i8)(intptr_t)(ws+3872);
	i2 v10251 = *(i2*)(intptr_t)v10250;
	i8 v10252 = (i8)(intptr_t)(ws+3874);
	i2 v10253 = *(i2*)(intptr_t)v10252;
	i2 v10254 = (i2)+0;
	i8 v10255 = (i8)(intptr_t)(ws+3856);
	i1 v10256 = *(i1*)(intptr_t)v10255;
	i8 v10257 = (i8)(intptr_t)(f134_MidBeq);
	i8 v10258;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10257)(&v10258, v10256, v10254, v10253, v10251, v10249, v10247, v10245);
	i8 v10259 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v10259 = v10258;

endsub:;
	*p10224 = *(i8*)(intptr_t)(ws+3864);
}
	void f481_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f229_AllocLabel(i2* /* label */);
	void f229_AllocLabel(i2* /* label */);
	void f158_NodeWidth(i1* /* width */, i8 /* node */);
	void f224_IsSNum(i1* /* result */, i8 /* type */);
	void f121_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f156_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalLt workspace at ws+3840 length ws+37
void f495_ConditionalLt(i8* p10260 /* result */, i1 p10261 /* negated */, i8 p10262 /* rhs */, i8 p10263 /* lhs */) {
	*(i8*)(intptr_t)(ws+3840) = p10263; /*lhs */
	*(i8*)(intptr_t)(ws+3848) = p10262; /*rhs */
	*(i1*)(intptr_t)(ws+3856) = p10261; /*negated */

	i8 v10264 = (i8)(intptr_t)(ws+3840);
	i8 v10265 = *(i8*)(intptr_t)v10264;
	i8 v10266 = (i8)(intptr_t)(ws+3848);
	i8 v10267 = *(i8*)(intptr_t)v10266;
	i8 v10268 = (i8)(intptr_t)(f481_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v10268)(v10267, v10265);

	i8 v10269 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10270;

	((void(*)(i2* /* label */))(intptr_t)v10269)(&v10270);
	i8 v10271 = (i8)(intptr_t)(ws+3872);
	*(i2*)(intptr_t)v10271 = v10270;

	i8 v10272 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10273;

	((void(*)(i2* /* label */))(intptr_t)v10272)(&v10273);
	i8 v10274 = (i8)(intptr_t)(ws+3874);
	*(i2*)(intptr_t)v10274 = v10273;

	i8 v10275 = (i8)(intptr_t)(ws+3840);
	i8 v10276 = *(i8*)(intptr_t)v10275;
	i8 v10277 = (i8)(intptr_t)(f158_NodeWidth);
	i1 v10278;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v10277)(&v10278, v10276);
	i8 v10279 = (i8)(intptr_t)(ws+3876);
	*(i1*)(intptr_t)v10279 = v10278;

	i8 v10280 = (i8)(intptr_t)(ws+3840);
	i8 v10281 = *(i8*)(intptr_t)v10280;
	i8 v10282 = v10281+(+16);
	i8 v10283 = *(i8*)(intptr_t)v10282;
	i8 v10284 = (i8)(intptr_t)(f224_IsSNum);
	i1 v10285;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10284)(&v10285, v10283);
	i1 v10286 = (i1)+0;
	if (v10285==v10286) goto c02_0785; else goto c02_0784;

c02_0784:;

	i8 v10287 = (i8)(intptr_t)(ws+3876);
	i1 v10288 = *(i1*)(intptr_t)v10287;
	i8 v10289 = (i8)(intptr_t)(ws+3840);
	i8 v10290 = *(i8*)(intptr_t)v10289;
	i8 v10291 = (i8)(intptr_t)(ws+3848);
	i8 v10292 = *(i8*)(intptr_t)v10291;
	i8 v10293 = (i8)(intptr_t)(ws+3872);
	i2 v10294 = *(i2*)(intptr_t)v10293;
	i8 v10295 = (i8)(intptr_t)(ws+3874);
	i2 v10296 = *(i2*)(intptr_t)v10295;
	i2 v10297 = (i2)+0;
	i8 v10298 = (i8)(intptr_t)(ws+3856);
	i1 v10299 = *(i1*)(intptr_t)v10298;
	i8 v10300 = (i8)(intptr_t)(f121_MidBlts);
	i8 v10301;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10300)(&v10301, v10299, v10297, v10296, v10294, v10292, v10290, v10288);
	i8 v10302 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v10302 = v10301;

	goto c02_0781;

c02_0785:;

	i8 v10303 = (i8)(intptr_t)(ws+3876);
	i1 v10304 = *(i1*)(intptr_t)v10303;
	i8 v10305 = (i8)(intptr_t)(ws+3840);
	i8 v10306 = *(i8*)(intptr_t)v10305;
	i8 v10307 = (i8)(intptr_t)(ws+3848);
	i8 v10308 = *(i8*)(intptr_t)v10307;
	i8 v10309 = (i8)(intptr_t)(ws+3872);
	i2 v10310 = *(i2*)(intptr_t)v10309;
	i8 v10311 = (i8)(intptr_t)(ws+3874);
	i2 v10312 = *(i2*)(intptr_t)v10311;
	i2 v10313 = (i2)+0;
	i8 v10314 = (i8)(intptr_t)(ws+3856);
	i1 v10315 = *(i1*)(intptr_t)v10314;
	i8 v10316 = (i8)(intptr_t)(f156_MidBltu);
	i8 v10317;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10316)(&v10317, v10315, v10313, v10312, v10310, v10308, v10306, v10304);
	i8 v10318 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v10318 = v10317;

c02_0781:;

endsub:;
	*p10260 = *(i8*)(intptr_t)(ws+3864);
}
const i1 c02_s0186[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// parser_i_bad_next_prev workspace at ws+3840 length ws+0
void f496_parser_i_bad_next_prev(void) {

	i8 v10319 = (i8)(intptr_t)c02_s0186;
	i8 v10320 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10320)(v10319);

endsub:;
}
const i1 c02_s0187[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// parser_i_constant_error workspace at ws+3864 length ws+0
void f497_parser_i_constant_error(void) {

	i8 v10321 = (i8)(intptr_t)c02_s0187;
	i8 v10322 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10322)(v10321);

endsub:;
}
	void f69_StartError(void);
const i1 c02_s0188[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0189[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
const i1 c02_s018a[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f70_EndError(void);

// i_check_sub_call_args workspace at ws+3888 length ws+8
void f498_i_check_sub_call_args(void) {

	i8 v10323 = (i8)(intptr_t)(ws+80);
	i8 v10324 = *(i8*)(intptr_t)v10323;
	i8 v10325 = v10324+(+8);
	i8 v10326 = *(i8*)(intptr_t)v10325;
	i8 v10327 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v10327 = v10326;

	i8 v10328 = (i8)(intptr_t)(ws+80);
	i8 v10329 = *(i8*)(intptr_t)v10328;
	i8 v10330 = v10329+(+40);
	i1 v10331 = *(i1*)(intptr_t)v10330;
	i8 v10332 = (i8)(intptr_t)(ws+3888);
	i8 v10333 = *(i8*)(intptr_t)v10332;
	i8 v10334 = v10333+(+80);
	i1 v10335 = *(i1*)(intptr_t)v10334;
	if (v10331==v10335) goto c02_078a; else goto c02_0789;

c02_0789:;

	i8 v10336 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v10336)();

	i8 v10337 = (i8)(intptr_t)c02_s0188;
	i8 v10338 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10338)(v10337);

	i8 v10339 = (i8)(intptr_t)(ws+3888);
	i8 v10340 = *(i8*)(intptr_t)v10339;
	i8 v10341 = *(i8*)(intptr_t)v10340;
	i8 v10342 = v10341+(+8);
	i8 v10343 = *(i8*)(intptr_t)v10342;
	i8 v10344 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10344)(v10343);

	i8 v10345 = (i8)(intptr_t)c02_s0189;
	i8 v10346 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10346)(v10345);

	i8 v10347 = (i8)(intptr_t)(ws+3888);
	i8 v10348 = *(i8*)(intptr_t)v10347;
	i8 v10349 = v10348+(+80);
	i1 v10350 = *(i1*)(intptr_t)v10349;
	i8 v10351 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v10351)(v10350);

	i8 v10352 = (i8)(intptr_t)c02_s018a;
	i8 v10353 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10353)(v10352);

	i8 v10354 = (i8)(intptr_t)(ws+80);
	i8 v10355 = *(i8*)(intptr_t)v10354;
	i8 v10356 = v10355+(+40);
	i1 v10357 = *(i1*)(intptr_t)v10356;
	i8 v10358 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v10358)(v10357);

	i8 v10359 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v10359)();

	goto c02_0786;

c02_078a:;

c02_0786:;

endsub:;
}
	void f199_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f33_Free(i8 /* block */);

// i_end_call workspace at ws+3888 length ws+8
void f499_i_end_call(void) {

	i8 v10360 = (i8)(intptr_t)(ws+40);
	i8 v10361 = *(i8*)(intptr_t)v10360;
	i8 v10362 = (i8)(intptr_t)(ws+80);
	i8 v10363 = *(i8*)(intptr_t)v10362;
	i8 v10364 = v10363+(+8);
	i8 v10365 = *(i8*)(intptr_t)v10364;
	i8 v10366 = (i8)(intptr_t)(f199_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v10366)(v10365, v10361);

	i8 v10367 = (i8)(intptr_t)(ws+80);
	i8 v10368 = *(i8*)(intptr_t)v10367;
	i8 v10369 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v10369 = v10368;

	i8 v10370 = (i8)(intptr_t)(ws+3888);
	i8 v10371 = *(i8*)(intptr_t)v10370;
	i8 v10372 = v10371+(+16);
	i8 v10373 = *(i8*)(intptr_t)v10372;
	i8 v10374 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v10374 = v10373;

	i8 v10375 = (i8)(intptr_t)(ws+3888);
	i8 v10376 = *(i8*)(intptr_t)v10375;
	i8 v10377 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v10377)(v10376);

endsub:;
}
	void f69_StartError(void);
const i1 c02_s018b[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// SymbolRedeclarationError workspace at ws+3840 length ws+0
void f500_SymbolRedeclarationError(void) {

	i8 v10378 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v10378)();

	i8 v10379 = (i8)(intptr_t)c02_s018b;
	i8 v10380 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10380)(v10379);

	i8 v10381 = (i8)(intptr_t)(ws+72);
	i8 v10382 = *(i8*)(intptr_t)v10381;
	i8 v10383 = v10382+(+32);
	i8 v10384 = *(i8*)(intptr_t)v10383;
	i8 v10385 = v10384+(+8);
	i8 v10386 = *(i8*)(intptr_t)v10385;
	i8 v10387 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10387)(v10386);

	i8 v10388 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v10388)();

endsub:;
}
	void f69_StartError(void);
const i1 c02_s018c[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// WrongNumberOfElementsError workspace at ws+3880 length ws+0
void f501_WrongNumberOfElementsError(void) {

	i8 v10389 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v10389)();

	i8 v10390 = (i8)(intptr_t)c02_s018c;
	i8 v10391 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10391)(v10390);

	i8 v10392 = (i8)(intptr_t)(ws+72);
	i8 v10393 = *(i8*)(intptr_t)v10392;
	i8 v10394 = v10393+(+32);
	i8 v10395 = *(i8*)(intptr_t)v10394;
	i8 v10396 = v10395+(+8);
	i8 v10397 = *(i8*)(intptr_t)v10396;
	i8 v10398 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10398)(v10397);

	i8 v10399 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v10399)();

endsub:;
}
	void f220_IsArray(i1* /* result */, i8 /* type */);
	void f238_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f501_WrongNumberOfElementsError(void);
	void f501_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3840 length ws+4
void f502_CheckEndOfInitialiser(void) {

	i8 v10400 = (i8)(intptr_t)(ws+72);
	i8 v10401 = *(i8*)(intptr_t)v10400;
	i8 v10402 = (i8)(intptr_t)(f220_IsArray);
	i1 v10403;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10402)(&v10403, v10401);
	i1 v10404 = (i1)+0;
	if (v10403==v10404) goto c02_078f; else goto c02_078e;

c02_078e:;

	i8 v10405 = (i8)(intptr_t)(ws+72);
	i8 v10406 = *(i8*)(intptr_t)v10405;
	i8 v10407 = *(i8*)(intptr_t)v10406;
	i8 v10408 = v10407+(+50);
	i2 v10409 = *(i2*)(intptr_t)v10408;
	i8 v10410 = (i8)(intptr_t)(ws+3840);
	*(i2*)(intptr_t)v10410 = v10409;

	i8 v10411 = (i8)(intptr_t)(ws+72);
	i8 v10412 = *(i8*)(intptr_t)v10411;
	i8 v10413 = v10412+(+48);
	i2 v10414 = *(i2*)(intptr_t)v10413;
	i2 v10415 = (i2)+0;
	if (v10414==v10415) goto c02_0793; else goto c02_0794;

c02_0793:;

	i8 v10416 = (i8)(intptr_t)(ws+2072);
	i2 v10417 = *(i2*)(intptr_t)v10416;
	i8 v10418 = (i8)(intptr_t)(ws+72);
	i8 v10419 = *(i8*)(intptr_t)v10418;
	i8 v10420 = v10419+(+48);
	*(i2*)(intptr_t)v10420 = v10417;

	i8 v10421 = (i8)(intptr_t)(ws+2072);
	i2 v10422 = *(i2*)(intptr_t)v10421;
	i8 v10423 = (i8)(intptr_t)(ws+3840);
	i2 v10424 = *(i2*)(intptr_t)v10423;
	i2 v10425 = v10422/v10424;
	i8 v10426 = (i8)(intptr_t)(ws+3842);
	*(i2*)(intptr_t)v10426 = v10425;

	i8 v10427 = (i8)(intptr_t)(ws+3842);
	i2 v10428 = *(i2*)(intptr_t)v10427;
	i8 v10429 = (i8)(intptr_t)(ws+72);
	i8 v10430 = *(i8*)(intptr_t)v10429;
	i8 v10431 = v10430+(+8);
	*(i2*)(intptr_t)v10431 = v10428;

	i4 v10432 = (i4)+0;
	i8 v10433 = (i8)(intptr_t)(ws+3842);
	i2 v10434 = *(i2*)(intptr_t)v10433;
	i2 v10435 = v10434+(-1);
	i4 v10436 = v10435;
	i8 v10437 = (i8)(intptr_t)(f238_ArchGuessIntType);
	i8 v10438;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v10437)(&v10438, v10436, v10432);
	i8 v10439 = (i8)(intptr_t)(ws+72);
	i8 v10440 = *(i8*)(intptr_t)v10439;
	i8 v10441 = v10440+(+16);
	*(i8*)(intptr_t)v10441 = v10438;

	goto c02_0790;

c02_0794:;

c02_0790:;

	i8 v10442 = (i8)(intptr_t)(ws+2072);
	i2 v10443 = *(i2*)(intptr_t)v10442;
	i8 v10444 = (i8)(intptr_t)(ws+72);
	i8 v10445 = *(i8*)(intptr_t)v10444;
	i8 v10446 = v10445+(+48);
	i2 v10447 = *(i2*)(intptr_t)v10446;
	if (v10443==v10447) goto c02_0799; else goto c02_0798;

c02_0798:;

	i8 v10448 = (i8)(intptr_t)(f501_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v10448)();

	goto c02_0795;

c02_0799:;

c02_0795:;

	goto c02_078b;

c02_078f:;

	i8 v10449 = (i8)(intptr_t)(ws+2064);
	i8 v10450 = *(i8*)(intptr_t)v10449;
	i8 v10451 = (i8)+0;
	if (v10450==v10451) goto c02_079e; else goto c02_079d;

c02_079d:;

	i8 v10452 = (i8)(intptr_t)(f501_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v10452)();

	goto c02_079a;

c02_079e:;

c02_079a:;

c02_078b:;

endsub:;
}
	void f220_IsArray(i1* /* result */, i8 /* type */);

// GetInitedMember workspace at ws+3880 length ws+16
void f503_GetInitedMember(i8* p10453 /* member */, i8* p10454 /* type */) {

	i8 v10455 = (i8)+0;
	i8 v10456 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v10456 = v10455;

	i8 v10457 = (i8)(intptr_t)(ws+72);
	i8 v10458 = *(i8*)(intptr_t)v10457;
	i8 v10459 = (i8)(intptr_t)(f220_IsArray);
	i1 v10460;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10459)(&v10460, v10458);
	i1 v10461 = (i1)+0;
	if (v10460==v10461) goto c02_07a3; else goto c02_07a2;

c02_07a2:;

	i8 v10462 = (i8)(intptr_t)(ws+72);
	i8 v10463 = *(i8*)(intptr_t)v10462;
	i8 v10464 = *(i8*)(intptr_t)v10463;
	i8 v10465 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v10465 = v10464;

	goto c02_079f;

c02_07a3:;

	i8 v10466 = (i8)(intptr_t)(ws+2064);
	i8 v10467 = *(i8*)(intptr_t)v10466;
	i8 v10468 = (i8)+0;
	if (v10467==v10468) goto c02_07a7; else goto c02_07a8;

c02_07a7:;

	i8 v10469 = (i8)+0;
	i8 v10470 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v10470 = v10469;

	goto endsub;

c02_07a8:;

c02_07a4:;

	i8 v10471 = (i8)(intptr_t)(ws+2064);
	i8 v10472 = *(i8*)(intptr_t)v10471;
	i8 v10473 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v10473 = v10472;

	i8 v10474 = (i8)(intptr_t)(ws+2064);
	i8 v10475 = *(i8*)(intptr_t)v10474;
	i8 v10476 = *(i8*)(intptr_t)v10475;
	i8 v10477 = *(i8*)(intptr_t)v10476;
	i8 v10478 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v10478 = v10477;

	i8 v10479 = (i8)(intptr_t)(ws+2064);
	i8 v10480 = *(i8*)(intptr_t)v10479;
	i8 v10481 = v10480+(+24);
	i8 v10482 = *(i8*)(intptr_t)v10481;
	i8 v10483 = (i8)(intptr_t)(ws+2064);
	*(i8*)(intptr_t)v10483 = v10482;

c02_079f:;

endsub:;
	*p10454 = *(i8*)(intptr_t)(ws+3888);
	*p10453 = *(i8*)(intptr_t)(ws+3880);
}
	void f236_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f115_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f465_Generate(i8 /* statement */);

// AlignTo workspace at ws+3880 length ws+4
void f504_AlignTo(i1 p10484 /* alignment */) {
	*(i1*)(intptr_t)(ws+3880) = p10484; /*alignment */

	i8 v10485 = (i8)(intptr_t)(ws+2074);
	i2 v10486 = *(i2*)(intptr_t)v10485;
	i8 v10487 = (i8)(intptr_t)(ws+3880);
	i1 v10488 = *(i1*)(intptr_t)v10487;
	i8 v10489 = (i8)(intptr_t)(f236_ArchAlignUp);
	i2 v10490;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v10489)(&v10490, v10488, v10486);
	i8 v10491 = (i8)(intptr_t)(ws+3882);
	*(i2*)(intptr_t)v10491 = v10490;

c02_07ab:;

	i8 v10492 = (i8)(intptr_t)(ws+2074);
	i2 v10493 = *(i2*)(intptr_t)v10492;
	i8 v10494 = (i8)(intptr_t)(ws+3882);
	i2 v10495 = *(i2*)(intptr_t)v10494;
	if (v10493==v10495) goto c02_07ae; else goto c02_07ad;

c02_07ad:;

	i1 v10496 = (i1)+1;
	i4 v10497 = (i4)+0;
	i8 v10498 = (i8)(intptr_t)(f115_MidInit);
	i8 v10499;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v10498)(&v10499, v10497, v10496);
	i8 v10500 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10500)(v10499);

	i8 v10501 = (i8)(intptr_t)(ws+2072);
	i2 v10502 = *(i2*)(intptr_t)v10501;
	i2 v10503 = v10502+(+1);
	i8 v10504 = (i8)(intptr_t)(ws+2072);
	*(i2*)(intptr_t)v10504 = v10503;

	i8 v10505 = (i8)(intptr_t)(ws+2074);
	i2 v10506 = *(i2*)(intptr_t)v10505;
	i2 v10507 = v10506+(+1);
	i8 v10508 = (i8)(intptr_t)(ws+2074);
	*(i2*)(intptr_t)v10508 = v10507;

	goto c02_07ab;

c02_07ae:;

endsub:;
}
const i1 c02_s018d[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f71_SimpleError(i8 /* message */);

// CheckForOverlaps workspace at ws+3880 length ws+8
void f505_CheckForOverlaps(i8 p10509 /* member */) {
	*(i8*)(intptr_t)(ws+3880) = p10509; /*member */

	i8 v10510 = (i8)(intptr_t)(ws+3880);
	i8 v10511 = *(i8*)(intptr_t)v10510;
	i8 v10512 = (i8)+0;
	if (v10511==v10512) goto c02_07b2; else goto c02_07b3;

c02_07b2:;

	goto endsub;

c02_07b3:;

c02_07af:;

	i8 v10513 = (i8)(intptr_t)(ws+3880);
	i8 v10514 = *(i8*)(intptr_t)v10513;
	i8 v10515 = *(i8*)(intptr_t)v10514;
	i8 v10516 = v10515+(+32);
	i2 v10517 = *(i2*)(intptr_t)v10516;
	i8 v10518 = (i8)(intptr_t)(ws+2072);
	i2 v10519 = *(i2*)(intptr_t)v10518;
	if (v10517<v10519) goto c02_07b7; else goto c02_07b8;

c02_07b7:;

	i8 v10520 = (i8)(intptr_t)c02_s018d;
	i8 v10521 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10521)(v10520);

	goto c02_07b4;

c02_07b8:;

c02_07b4:;

endsub:;
}
	void f503_GetInitedMember(i8* /* member */, i8* /* type */);
	void f501_WrongNumberOfElementsError(void);
	void f504_AlignTo(i1 /* alignment */);
	void f505_CheckForOverlaps(i8 /* member */);

// GetInitedMemberChecked workspace at ws+3864 length ws+16
void f506_GetInitedMemberChecked(i8* p10522 /* member */, i8* p10523 /* type */) {

	i8 v10524 = (i8)(intptr_t)(f503_GetInitedMember);
	i8 v10525;
	i8 v10526;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v10524)(&v10525, &v10526);

	i8 v10527 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v10527 = v10526;

	i8 v10528 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v10528 = v10525;

	i8 v10529 = (i8)(intptr_t)(ws+3872);
	i8 v10530 = *(i8*)(intptr_t)v10529;
	i8 v10531 = (i8)+0;
	if (v10530==v10531) goto c02_07bc; else goto c02_07bd;

c02_07bc:;

	i8 v10532 = (i8)(intptr_t)(f501_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v10532)();

	goto c02_07b9;

c02_07bd:;

c02_07b9:;

	i8 v10533 = (i8)(intptr_t)(ws+3872);
	i8 v10534 = *(i8*)(intptr_t)v10533;
	i8 v10535 = v10534+(+53);
	i1 v10536 = *(i1*)(intptr_t)v10535;
	i8 v10537 = (i8)(intptr_t)(f504_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v10537)(v10536);

	i8 v10538 = (i8)(intptr_t)(ws+3864);
	i8 v10539 = *(i8*)(intptr_t)v10538;
	i8 v10540 = (i8)(intptr_t)(f505_CheckForOverlaps);

	((void(*)(i8 /* member */))(intptr_t)v10540)(v10539);

endsub:;
	*p10523 = *(i8*)(intptr_t)(ws+3872);
	*p10522 = *(i8*)(intptr_t)(ws+3864);
}
static data c02_a7be[] = { // yy_action




	{ .i1 = { 0x0c,0x02,0xa5,0x01,0xf6,0x01,0xd1,0x00}},




	{ .i1 = { 0x61,0x00,0xc1,0x01,0x06,0x00,0x63,0x00}},




	{ .i1 = { 0x93,0x01,0x09,0x00,0xb6,0x00,0x3d,0x02}},




	{ .i1 = { 0x6f,0x00,0x3b,0x01,0x36,0x00,0xaa,0x00}},




	{ .i1 = { 0x10,0x00,0x27,0x00,0xaf,0x00,0x58,0x00}},




	{ .i1 = { 0x51,0x00,0xdd,0x00,0xac,0x01,0x19,0x02}},




	{ .i1 = { 0x6c,0x00,0x55,0x00,0xc1,0x00,0x34,0x00}},




	{ .i1 = { 0x65,0x00,0x16,0x00,0xbe,0x00,0x1f,0x02}},




	{ .i1 = { 0xfe,0x01,0x77,0x01,0x52,0x01,0xfe,0x01}},




	{ .i1 = { 0x50,0x00,0xbb,0x00,0xda,0x00,0xc8,0x00}},




	{ .i1 = { 0x4f,0x00,0x6c,0x01,0xb7,0x00,0xc2,0x00}},




	{ .i1 = { 0x52,0x00,0x97,0x00,0x9e,0x01,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x41,0x00,0x77,0x01,0xa7,0x01}},




	{ .i1 = { 0x36,0x02,0x33,0x00,0x35,0x00,0xce,0x00}},




	{ .i1 = { 0x75,0x00,0xba,0x00,0xa6,0x01,0x2b,0x00}},




	{ .i1 = { 0x29,0x00,0x28,0x00,0xfe,0x01,0xd0,0x00}},




	{ .i1 = { 0x1e,0x00,0x4c,0x00,0xa5,0x01,0xd9,0x00}},




	{ .i1 = { 0xd1,0x00,0xdc,0x00,0x4c,0x00,0xf6,0x01}},




	{ .i1 = { 0x63,0x00,0x64,0x00,0xfe,0x01,0xd3,0x00}},




	{ .i1 = { 0x27,0x02,0x6f,0x00,0x3b,0x01,0x36,0x00}},




	{ .i1 = { 0x8d,0x01,0x10,0x00,0x27,0x00,0x4d,0x02}},




	{ .i1 = { 0xab,0x00,0x51,0x00,0xdd,0x00,0xac,0x01}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0x55,0x00,0x36,0x02}},




	{ .i1 = { 0x34,0x00,0x65,0x00,0x16,0x00,0x5c,0x00}},




	{ .i1 = { 0x48,0x01,0x73,0x00,0x77,0x01,0x52,0x01}},




	{ .i1 = { 0x94,0x00,0x50,0x00,0xa5,0x00,0x86,0x00}},




	{ .i1 = { 0xc8,0x00,0x4f,0x00,0x6c,0x01,0xb7,0x00}},




	{ .i1 = { 0xc2,0x00,0x52,0x00,0xdc,0x00,0x11,0x00}},




	{ .i1 = { 0xf6,0x01,0x9a,0x00,0x64,0x00,0xa9,0x00}},




	{ .i1 = { 0xdc,0x00,0x43,0x00,0xf6,0x01,0x78,0x01}},




	{ .i1 = { 0x64,0x00,0x3a,0x00,0xac,0x00,0xab,0x00}},




	{ .i1 = { 0x2b,0x00,0x29,0x00,0x28,0x00,0x76,0x01}},




	{ .i1 = { 0xd0,0x00,0x1e,0x00,0xfe,0x01,0xa5,0x01}},




	{ .i1 = { 0xd9,0x00,0xd1,0x00,0x3d,0x01,0x7f,0x01}},




	{ .i1 = { 0x17,0x00,0x63,0x00,0x15,0x00,0x13,0x00}},




	{ .i1 = { 0xd4,0x00,0x36,0x01,0x6f,0x00,0x3b,0x01}},




	{ .i1 = { 0x36,0x00,0xc1,0x00,0x10,0x00,0x27,0x00}},




	{ .i1 = { 0xbd,0x00,0xbc,0x00,0x51,0x00,0xdd,0x00}},




	{ .i1 = { 0xac,0x01,0xbb,0x00,0x68,0x00,0x55,0x00}},




	{ .i1 = { 0x88,0x01,0x34,0x00,0x65,0x00,0x16,0x00}},




	{ .i1 = { 0xbe,0x00,0x1f,0x02,0x7d,0x00,0x77,0x01}},




	{ .i1 = { 0x52,0x01,0x85,0x00,0x50,0x00,0x15,0x00}},




	{ .i1 = { 0x13,0x00,0xc8,0x00,0x4f,0x00,0x6c,0x01}},




	{ .i1 = { 0xb7,0x00,0xc2,0x00,0x52,0x00,0xdc,0x00}},




	{ .i1 = { 0x1c,0x00,0xf6,0x01,0xdc,0x00,0x64,0x00}},




	{ .i1 = { 0xf6,0x01,0x6a,0x00,0x64,0x00,0x9c,0x00}},




	{ .i1 = { 0x9b,0x00,0x9d,0x00,0x0f,0x02,0xbe,0x00}},




	{ .i1 = { 0x1f,0x02,0x2b,0x00,0x29,0x00,0x28,0x00}},




	{ .i1 = { 0xc1,0x00,0xd0,0x00,0x1e,0x00,0x37,0x02}},




	{ .i1 = { 0xa5,0x01,0xd9,0x00,0xd1,0x00,0xa7,0x00}},




	{ .i1 = { 0xfe,0x01,0xfe,0x01,0x63,0x00,0xb4,0x01}},




	{ .i1 = { 0x95,0x00,0x95,0x00,0x0a,0x00,0x6f,0x00}},




	{ .i1 = { 0x3b,0x01,0x36,0x00,0x6b,0x00,0x10,0x00}},




	{ .i1 = { 0x27,0x00,0x3f,0x02,0x6d,0x00,0x51,0x00}},




	{ .i1 = { 0xdd,0x00,0xac,0x01,0x66,0x00,0xb1,0x00}},




	{ .i1 = { 0x55,0x00,0xb2,0x00,0x34,0x00,0x65,0x00}},




	{ .i1 = { 0x16,0x00,0x02,0x02,0x07,0x02,0x7d,0x00}},




	{ .i1 = { 0x77,0x01,0x52,0x01,0x74,0x00,0x50,0x00}},




	{ .i1 = { 0x38,0x00,0x27,0x00,0xc8,0x00,0x4f,0x00}},




	{ .i1 = { 0x6c,0x01,0xb7,0x00,0xc2,0x00,0x52,0x00}},




	{ .i1 = { 0xdc,0x00,0x44,0x00,0xf6,0x01,0xdc,0x00}},




	{ .i1 = { 0x64,0x00,0xf6,0x01,0x0c,0x00,0x64,0x00}},




	{ .i1 = { 0xdb,0x00,0x77,0x01,0x52,0x01,0x93,0x00}},




	{ .i1 = { 0xcc,0x00,0x13,0x02,0x2b,0x00,0x29,0x00}},




	{ .i1 = { 0x28,0x00,0x6c,0x01,0xd0,0x00,0x1e,0x00}},




	{ .i1 = { 0x19,0x02,0xa5,0x01,0xd9,0x00,0xd1,0x00}},




	{ .i1 = { 0xb5,0x00,0xfe,0x01,0x49,0x00,0x63,0x00}},




	{ .i1 = { 0xfe,0x01,0x96,0x00,0x96,0x00,0x0a,0x00}},




	{ .i1 = { 0x6f,0x00,0x3b,0x01,0x36,0x00,0xda,0x00}},




	{ .i1 = { 0x10,0x00,0x27,0x00,0xf5,0x01,0x07,0x02}},




	{ .i1 = { 0x51,0x00,0xdd,0x00,0xac,0x01,0x77,0x01}},




	{ .i1 = { 0x2c,0x00,0x55,0x00,0x42,0x00,0x34,0x00}},




	{ .i1 = { 0x65,0x00,0x16,0x00,0xf4,0x01,0x07,0x02}},




	{ .i1 = { 0x73,0x00,0x77,0x01,0x52,0x01,0x94,0x00}},




	{ .i1 = { 0x50,0x00,0xcf,0x00,0x7d,0x00,0xc8,0x00}},




	{ .i1 = { 0x4f,0x00,0x6c,0x01,0xb7,0x00,0xc2,0x00}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0x09,0x00,0xf6,0x01}},




	{ .i1 = { 0x26,0x00,0x64,0x00,0x48,0x00,0xdc,0x00}},




	{ .i1 = { 0x4b,0x00,0xf6,0x01,0x77,0x01,0x64,0x00}},




	{ .i1 = { 0x59,0x00,0x7f,0x00,0x1a,0x02,0x2b,0x00}},




	{ .i1 = { 0x29,0x00,0x28,0x00,0x8d,0x01,0xd0,0x00}},




	{ .i1 = { 0x1e,0x00,0x53,0x01,0x78,0x01,0xd9,0x00}},




	{ .i1 = { 0x67,0x00,0xda,0x00,0xdc,0x00,0xd8,0x00}},




	{ .i1 = { 0xf6,0x01,0x73,0x00,0x64,0x00,0x37,0x00}},




	{ .i1 = { 0xd7,0x01,0x71,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0x4a,0x02,0x0a,0x00,0x69,0x00}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0xdc,0x00,0xda,0x00}},




	{ .i1 = { 0xf6,0x01,0x17,0x00,0x64,0x00,0x73,0x00}},




	{ .i1 = { 0xa2,0x01,0x37,0x00,0xd9,0x01,0x4e,0x00}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0x48,0x02}},




	{ .i1 = { 0x3f,0x00,0x5b,0x00,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xdc,0x00,0x0d,0x00,0xf6,0x01,0x1e,0x02}},




	{ .i1 = { 0x64,0x00,0x2f,0x00,0x31,0x00,0x22,0x00}},




	{ .i1 = { 0x1f,0x00,0x20,0x00,0x21,0x00,0x24,0x00}},




	{ .i1 = { 0x23,0x00,0x2e,0x00,0x2d,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0xb4,0x00,0x3f,0x00,0x5b,0x00}},




	{ .i1 = { 0x0f,0x00,0x24,0x02,0xbc,0x00,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0x22,0x00,0x1f,0x00,0x20,0x00}},




	{ .i1 = { 0x21,0x00,0x24,0x00,0x23,0x00,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0x39,0x02}},




	{ .i1 = { 0x15,0x00,0x13,0x00,0x77,0x00,0x71,0x00}},




	{ .i1 = { 0x70,0x00,0x80,0x00,0xc4,0x00,0xda,0x00}},




	{ .i1 = { 0x17,0x00,0xc6,0x00,0x6e,0x00,0x72,0x00}},




	{ .i1 = { 0xad,0x00,0x9b,0x01,0x91,0x00,0xdc,0x00}},




	{ .i1 = { 0x2c,0x00,0xf6,0x01,0xdc,0x00,0x62,0x00}},




	{ .i1 = { 0xf6,0x01,0xc5,0x00,0x64,0x00,0x19,0x02}},




	{ .i1 = { 0xdc,0x00,0x0d,0x00,0xf6,0x01,0x09,0x02}},




	{ .i1 = { 0x64,0x00,0x86,0x00,0xb8,0x00,0x5f,0x00}},




	{ .i1 = { 0x5e,0x00,0xca,0x00,0x39,0x02,0x17,0x00}},




	{ .i1 = { 0xa4,0x00,0x77,0x00,0x71,0x00,0x70,0x00}},




	{ .i1 = { 0x75,0x01,0xd5,0x00,0xdc,0x00,0xae,0x00}},




	{ .i1 = { 0xf6,0x01,0x6e,0x00,0x64,0x00,0x3d,0x00}},




	{ .i1 = { 0x7a,0x01,0x3e,0x00,0xdc,0x00,0x07,0x00}},




	{ .i1 = { 0xf6,0x01,0x01,0x00,0x62,0x00,0x02,0x00}},




	{ .i1 = { 0xc5,0x00,0x4a,0x00,0x30,0x00,0x39,0x02}},




	{ .i1 = { 0x98,0x00,0x17,0x00,0x77,0x00,0x71,0x00}},




	{ .i1 = { 0x70,0x00,0xb9,0x00,0x5f,0x00,0x5e,0x00}},




	{ .i1 = { 0x03,0x00,0x99,0x00,0x6e,0x00,0x73,0x00}},




	{ .i1 = { 0x5a,0x00,0x08,0x00,0xd2,0x00,0xdc,0x00}},




	{ .i1 = { 0x4d,0x00,0xf6,0x01,0xae,0x00,0x62,0x00}},




	{ .i1 = { 0x0e,0x00,0xc5,0x00,0x3d,0x00,0x04,0x00}},




	{ .i1 = { 0xdc,0x00,0x86,0x00,0xf6,0x01,0x05,0x00}},




	{ .i1 = { 0x64,0x00,0x56,0x00,0xc3,0x00,0x5f,0x00}},




	{ .i1 = { 0x5e,0x00,0x36,0x00,0x40,0x01,0x38,0x00}},




	{ .i1 = { 0x27,0x00,0xb0,0x00,0xdc,0x00,0xa6,0x00}},




	{ .i1 = { 0xf6,0x01,0x73,0x00,0x64,0x00,0xae,0x00}},




	{ .i1 = { 0x92,0x00,0x17,0x00,0x34,0x00,0x3d,0x00}},




	{ .i1 = { 0x47,0x01,0x46,0x01,0xa3,0x01,0x3c,0x00}},




	{ .i1 = { 0x77,0x01,0x52,0x01,0xdc,0x00,0x50,0x00}},




	{ .i1 = { 0xf6,0x01,0xa4,0x01,0x64,0x00,0x4f,0x00}},




	{ .i1 = { 0x6c,0x01,0xda,0x00,0x36,0x00,0x12,0x00}},




	{ .i1 = { 0x14,0x00,0x27,0x00,0x9f,0x01,0x37,0x00}},




	{ .i1 = { 0x0b,0x00,0x9d,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0x18,0x00,0x45,0x00,0x34,0x00}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0x2b,0x00,0x29,0x00}},




	{ .i1 = { 0x28,0x00,0x77,0x01,0x52,0x01,0x98,0x01}},




	{ .i1 = { 0x50,0x00,0xb3,0x00,0xd9,0x00,0x80,0x01}},




	{ .i1 = { 0x4f,0x00,0x6c,0x01,0x40,0x00,0x46,0x00}},




	{ .i1 = { 0x8e,0x01,0xb6,0x01,0x5d,0x00,0xb5,0x01}},




	{ .i1 = { 0x53,0x00,0x36,0x00,0x94,0x01,0x38,0x00}},




	{ .i1 = { 0x27,0x00,0x60,0x00,0x8a,0x01,0xbf,0x00}},




	{ .i1 = { 0xc0,0x00,0x81,0x00,0x54,0x00,0x2b,0x00}},




	{ .i1 = { 0x29,0x00,0x28,0x00,0x34,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0x86,0x00,0xb3,0x01,0xd9,0x00}},




	{ .i1 = { 0x77,0x01,0x52,0x01,0xdc,0x00,0x50,0x00}},




	{ .i1 = { 0xf6,0x01,0x7d,0x01,0x64,0x00,0x4f,0x00}},




	{ .i1 = { 0x6c,0x01,0xc9,0x00,0xdc,0x00,0xa8,0x00}},




	{ .i1 = { 0xf6,0x01,0x3b,0x00,0x64,0x00,0x7c,0x01}},




	{ .i1 = { 0x36,0x00,0xc7,0x00,0x38,0x00,0x27,0x00}},




	{ .i1 = { 0x6e,0x01,0x47,0x00,0x19,0x00,0x84,0x01}},




	{ .i1 = { 0x7e,0x00,0x1a,0x00,0x2b,0x00,0x29,0x00}},




	{ .i1 = { 0x28,0x00,0x34,0x00,0x44,0x01,0x57,0x00}},




	{ .i1 = { 0xcd,0x00,0x13,0x00,0xd9,0x00,0x77,0x01}},




	{ .i1 = { 0x52,0x01,0xdc,0x00,0x50,0x00,0xf6,0x01}},




	{ .i1 = { 0x3f,0x01,0x64,0x00,0x4f,0x00,0x6c,0x01}},




	{ .i1 = { 0x73,0x01,0x3e,0x01,0x3c,0x01,0xcb,0x00}},




	{ .i1 = { 0x3a,0x01,0x72,0x01,0x6f,0x01,0x1b,0x00}},




	{ .i1 = { 0x1d,0x00,0x36,0x00,0x2a,0x00,0x38,0x00}},




	{ .i1 = { 0x27,0x00,0x6b,0x01,0x0c,0x02,0x35,0x01}},




	{ .i1 = { 0xc2,0x01,0x2b,0x00,0x29,0x00,0x28,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x34,0x00,0xc2,0x01}},




	{ .i1 = { 0x82,0x00,0xd9,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x77,0x01,0x52,0x01,0x53,0x01,0x50,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xda,0x00,0x4f,0x00}},




	{ .i1 = { 0x6c,0x01,0xdc,0x00,0xc2,0x01,0xf6,0x01}},




	{ .i1 = { 0x37,0x00,0x64,0x00,0xc2,0x01,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x39,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x33,0x00,0x35,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2b,0x00,0x29,0x00}},




	{ .i1 = { 0x28,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xd9,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x85,0x00,0x2f,0x00,0x31,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2e,0x00,0x2d,0x00}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xda,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x10,0x02,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x37,0x00,0xc2,0x01,0x83,0x00}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xc2,0x01,0xda,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0xc2,0x01,0xf6,0x01,0x37,0x00}},




	{ .i1 = { 0x64,0x00,0xc2,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0xc2,0x01,0xc2,0x01,0x39,0x01}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x84,0x00,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0xdc,0x00}},




	{ .i1 = { 0xc2,0x01,0xf6,0x01,0xc2,0x01,0x64,0x00}},




	{ .i1 = { 0x45,0x01,0x2f,0x00,0x31,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x2e,0x00,0x2d,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0x25,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xda,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x37,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xc2,0x01,0xda,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x76,0x00,0xc2,0x01,0x37,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0xc2,0x01,0xc2,0x01,0x38,0x01}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x78,0x00,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x2f,0x00,0x31,0x00,0xdc,0x00}},




	{ .i1 = { 0xc2,0x01,0xf6,0x01,0xc2,0x01,0x64,0x00}},




	{ .i1 = { 0x86,0x00,0x2e,0x00,0x2d,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0xc2,0x01,0xc2,0x01,0x69,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xda,0x00,0xc2,0x01}},




	{ .i1 = { 0xd6,0x00,0xdc,0x00,0xc2,0x01,0xf6,0x01}},




	{ .i1 = { 0x37,0x00,0x64,0x00,0xc2,0x01,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x39,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x33,0x00,0x35,0x00,0x6a,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xda,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x37,0x00,0xc2,0x01,0xc2,0x01,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x39,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x33,0x00,0x35,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x79,0x00,0x2f,0x00,0x31,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2e,0x00,0x2d,0x00}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2f,0x00,0x31,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x9e,0x00,0x2e,0x00,0x2d,0x00}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x36,0x00,0xda,0x00}},




	{ .i1 = { 0x38,0x00,0x27,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0x37,0x00,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0x34,0x00}},




	{ .i1 = { 0xc2,0x01,0x37,0x01,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xc2,0x01,0x77,0x01,0x52,0x01,0xc2,0x01}},




	{ .i1 = { 0x50,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x4f,0x00,0x6c,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0xc2,0x01,0xc2,0x01,0x2b,0x00}},




	{ .i1 = { 0x29,0x00,0x28,0x00,0xc2,0x01,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0xd9,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x39,0x02,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x77,0x00,0x71,0x00,0x70,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x6e,0x00,0xc2,0x01,0x9f,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x62,0x00,0xc2,0x01}},




	{ .i1 = { 0xc5,0x00,0xc2,0x01,0xc2,0x01,0xda,0x00}},




	{ .i1 = { 0xdc,0x00,0xc2,0x01,0xf6,0x01,0xc2,0x01}},




	{ .i1 = { 0x64,0x00,0x37,0x00,0x5f,0x00,0x5e,0x00}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xc2,0x01,0xda,0x00,0xae,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x3d,0x00,0x37,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0xc2,0x01,0x86,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xd7,0x00,0xdc,0x00}},




	{ .i1 = { 0xc2,0x01,0xf6,0x01,0x31,0x00,0x64,0x00}},




	{ .i1 = { 0xa0,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x2e,0x00,0x2d,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xdc,0x00,0xda,0x00,0xf6,0x01}},




	{ .i1 = { 0xc2,0x01,0x64,0x00,0xc2,0x01,0xa1,0x00}},




	{ .i1 = { 0x37,0x00,0xc2,0x01,0x7a,0x00,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x39,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x33,0x00,0x35,0x00,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0x89,0x00,0xf6,0x01,0xdc,0x00}},




	{ .i1 = { 0x64,0x00,0xf6,0x01,0x8a,0x00,0x64,0x00}},




	{ .i1 = { 0xc2,0x01,0x87,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xdc,0x00}},




	{ .i1 = { 0xc2,0x01,0xf6,0x01,0xdc,0x00,0x64,0x00}},




	{ .i1 = { 0xf6,0x01,0xa2,0x00,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2e,0x00,0x2d,0x00}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x88,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0x8f,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x90,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0xa3,0x00,0xf6,0x01,0xc2,0x01}},




	{ .i1 = { 0x64,0x00,0xc2,0x01,0xdc,0x00,0x8e,0x00}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0x8d,0x00,0xc2,0x01,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0x8c,0x00,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0xc2,0x01,0xf6,0x01,0x7b,0x00}},




	{ .i1 = { 0x64,0x00,0xdc,0x00,0x8b,0x00,0xf6,0x01}},




	{ .i1 = { 0xc2,0x01,0x64,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0x7c,0x00,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0xc2,0x01,0xf6,0x01,0xdc,0x00}},




	{ .i1 = { 0x64,0x00,0xf6,0x01,0xc2,0x01,0x64,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00}},
};
static data c02_a7bf[] = { // yy_lookahead








	{ .i1 = { 0x57,0x01,0x59,0x03,0x5b,0x45,0x46,0x07}},








	{ .i1 = { 0x04,0x46,0x0a,0x51,0x0c,0x0d,0x0e,0x49}},








	{ .i1 = { 0x10,0x11,0x49,0x50,0x14,0x15,0x16,0x48}},








	{ .i1 = { 0x63,0x19,0x0b,0x1b,0x1c,0x1d,0x69,0x6a}},








	{ .i1 = { 0x5a,0x21,0x22,0x5a,0x24,0x21,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x2c,0x49,0x21,0x11}},








	{ .i1 = { 0x12,0x62,0x21,0x22,0x59,0x17,0x18,0x0a}},








	{ .i1 = { 0x4a,0x49,0x29,0x3b,0x3c,0x3d,0x5a,0x3f}},








	{ .i1 = { 0x40,0x10,0x01,0x43,0x03,0x57,0x10,0x59}},








	{ .i1 = { 0x07,0x5b,0x5a,0x0a,0x5a,0x0c,0x0d,0x0e}},








	{ .i1 = { 0x41,0x10,0x11,0x78,0x79,0x14,0x15,0x16}},








	{ .i1 = { 0x3a,0x3b,0x19,0x59,0x1b,0x1c,0x1d,0x6d}},








	{ .i1 = { 0x04,0x4a,0x21,0x22,0x4d,0x24,0x4f,0x4a}},








	{ .i1 = { 0x27,0x28,0x29,0x2a,0x2b,0x2c,0x57,0x42}},








	{ .i1 = { 0x59,0x49,0x5b,0x56,0x57,0x44,0x59,0x21}},








	{ .i1 = { 0x5b,0x02,0x78,0x79,0x3b,0x3c,0x3d,0x21}},








	{ .i1 = { 0x3f,0x40,0x5a,0x01,0x43,0x03,0x0d,0x04}},








	{ .i1 = { 0x11,0x07,0x2e,0x2f,0x0a,0x16,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x0b,0x10,0x11,0x6b,0x6c,0x14,0x15}},








	{ .i1 = { 0x16,0x21,0x63,0x19,0x16,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x69,0x6a,0x4a,0x21,0x22,0x4a,0x24,0x2e}},








	{ .i1 = { 0x2f,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x57}},








	{ .i1 = { 0x2d,0x59,0x57,0x5b,0x59,0x63,0x5b,0x49}},








	{ .i1 = { 0x49,0x5e,0x5f,0x69,0x6a,0x3b,0x3c,0x3d}},








	{ .i1 = { 0x0b,0x3f,0x40,0x00,0x01,0x43,0x03,0x51}},








	{ .i1 = { 0x5a,0x5a,0x07,0x16,0x74,0x75,0x76,0x0c}},








	{ .i1 = { 0x0d,0x0e,0x65,0x10,0x11,0x54,0x55,0x14}},








	{ .i1 = { 0x15,0x16,0x09,0x23,0x19,0x72,0x1b,0x1c}},








	{ .i1 = { 0x1d,0x58,0x59,0x4a,0x21,0x22,0x4a,0x24}},








	{ .i1 = { 0x10,0x11,0x27,0x28,0x29,0x2a,0x2b,0x2c}},








	{ .i1 = { 0x57,0x06,0x59,0x57,0x5b,0x59,0x25,0x5b}},








	{ .i1 = { 0x49,0x21,0x22,0x49,0x60,0x61,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x29,0x3f,0x40,0x48,0x01,0x43,0x03}},








	{ .i1 = { 0x6e,0x5a,0x10,0x07,0x5a,0x74,0x75,0x76}},








	{ .i1 = { 0x0c,0x0d,0x0e,0x08,0x10,0x11,0x58,0x59}},








	{ .i1 = { 0x14,0x15,0x16,0x21,0x11,0x19,0x62,0x1b}},








	{ .i1 = { 0x1c,0x1d,0x58,0x59,0x4a,0x21,0x22,0x4d}},








	{ .i1 = { 0x24,0x4f,0x4a,0x27,0x28,0x29,0x2a,0x2b}},








	{ .i1 = { 0x2c,0x57,0x46,0x59,0x02,0x5b,0x11,0x57}},








	{ .i1 = { 0x06,0x59,0x21,0x5b,0x50,0x4a,0x59,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x41,0x3f,0x40,0x04,0x21,0x43}},








	{ .i1 = { 0x65,0x08,0x57,0x26,0x59,0x4a,0x5b,0x0e}},








	{ .i1 = { 0x4d,0x05,0x11,0x12,0x13,0x75,0x76,0x65}},








	{ .i1 = { 0x17,0x18,0x57,0x08,0x59,0x11,0x5b,0x4a}},








	{ .i1 = { 0x20,0x0e,0x4d,0x3e,0x11,0x12,0x13,0x6f}},








	{ .i1 = { 0x70,0x71,0x17,0x18,0x57,0x2d,0x59,0x6a}},








	{ .i1 = { 0x5b,0x30,0x31,0x32,0x33,0x34,0x35,0x36}},








	{ .i1 = { 0x37,0x38,0x39,0x3a,0x3b,0x6f,0x70,0x71}},








	{ .i1 = { 0x10,0x6b,0x6c,0x30,0x31,0x32,0x33,0x34}},








	{ .i1 = { 0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x47}},








	{ .i1 = { 0x2e,0x2f,0x4a,0x4b,0x4c,0x4a,0x5c,0x08}},








	{ .i1 = { 0x11,0x5c,0x52,0x4a,0x20,0x16,0x4d,0x57}},








	{ .i1 = { 0x11,0x59,0x57,0x5b,0x59,0x5d,0x5b,0x48}},








	{ .i1 = { 0x57,0x2d,0x59,0x5c,0x5b,0x4a,0x66,0x67}},








	{ .i1 = { 0x68,0x48,0x47,0x11,0x48,0x4a,0x4b,0x4c}},








	{ .i1 = { 0x16,0x56,0x57,0x73,0x59,0x52,0x5b,0x77}},








	{ .i1 = { 0x04,0x62,0x57,0x46,0x59,0x46,0x5b,0x46}},








	{ .i1 = { 0x5d,0x3a,0x3b,0x47,0x64,0x11,0x4a,0x4b}},








	{ .i1 = { 0x4c,0x66,0x67,0x68,0x46,0x64,0x52,0x4a}},








	{ .i1 = { 0x64,0x46,0x4d,0x57,0x53,0x59,0x73,0x5b}},








	{ .i1 = { 0x4e,0x5d,0x77,0x46,0x57,0x4a,0x59,0x46}},








	{ .i1 = { 0x5b,0x1a,0x66,0x67,0x68,0x0e,0x0c,0x10}},








	{ .i1 = { 0x11,0x56,0x57,0x0a,0x59,0x4a,0x5b,0x73}},








	{ .i1 = { 0x4d,0x11,0x1b,0x77,0x06,0x06,0x1f,0x2d}},








	{ .i1 = { 0x21,0x22,0x57,0x24,0x59,0x16,0x5b,0x28}},








	{ .i1 = { 0x29,0x08,0x0e,0x0f,0x10,0x11,0x16,0x0e}},








	{ .i1 = { 0x1f,0x04,0x11,0x12,0x13,0x10,0x06,0x1b}},








	{ .i1 = { 0x17,0x18,0x3b,0x3c,0x3d,0x21,0x22,0x14}},








	{ .i1 = { 0x24,0x0a,0x43,0x04,0x28,0x29,0x41,0x06}},








	{ .i1 = { 0x19,0x16,0x19,0x16,0x2d,0x0e,0x04,0x10}},








	{ .i1 = { 0x11,0x06,0x04,0x29,0x10,0x4a,0x19,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x1b,0x3a,0x3b,0x4a,0x16,0x43}},








	{ .i1 = { 0x21,0x22,0x57,0x24,0x59,0x16,0x5b,0x28}},








	{ .i1 = { 0x29,0x56,0x57,0x09,0x59,0x02,0x5b,0x16}},








	{ .i1 = { 0x0e,0x21,0x10,0x11,0x16,0x41,0x02,0x04}},








	{ .i1 = { 0x4a,0x2d,0x3b,0x3c,0x3d,0x1b,0x16,0x1a}},








	{ .i1 = { 0x40,0x2f,0x43,0x21,0x22,0x57,0x24,0x59}},








	{ .i1 = { 0x16,0x5b,0x28,0x29,0x05,0x16,0x0d,0x61}},








	{ .i1 = { 0x0d,0x05,0x04,0x2d,0x10,0x0e,0x3b,0x10}},








	{ .i1 = { 0x11,0x21,0x10,0x16,0x7a,0x3b,0x3c,0x3d}},








	{ .i1 = { 0x7a,0x7a,0x1b,0x7a,0x4a,0x43,0x7a,0x7a}},








	{ .i1 = { 0x21,0x22,0x04,0x24,0x7a,0x7a,0x08,0x28}},








	{ .i1 = { 0x29,0x57,0x7a,0x59,0x0e,0x5b,0x7a,0x11}},








	{ .i1 = { 0x12,0x13,0x7a,0x7a,0x7a,0x17,0x18,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x3b,0x3c,0x3d,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x43,0x7a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x4a,0x30,0x31}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x38,0x39}},








	{ .i1 = { 0x3a,0x3b,0x57,0x7a,0x59,0x7a,0x5b,0x08}},








	{ .i1 = { 0x7a,0x7a,0x5f,0x7a,0x7a,0x0e,0x7a,0x4a}},








	{ .i1 = { 0x11,0x12,0x13,0x7a,0x7a,0x7a,0x17,0x18}},








	{ .i1 = { 0x7a,0x08,0x7a,0x7a,0x57,0x7a,0x59,0x0e}},








	{ .i1 = { 0x5b,0x7a,0x11,0x12,0x13,0x7a,0x7a,0x16}},








	{ .i1 = { 0x17,0x18,0x7a,0x7a,0x7a,0x7a,0x4a,0x30}},








	{ .i1 = { 0x31,0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x38}},








	{ .i1 = { 0x39,0x3a,0x3b,0x57,0x7a,0x59,0x7a,0x5b}},








	{ .i1 = { 0x41,0x30,0x31,0x7a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x38,0x39,0x3a,0x3b,0x02,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x08,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x0e,0x7a,0x7a,0x11,0x12,0x13,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x17,0x18,0x7a,0x08,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x4a,0x7a,0x0e,0x7a,0x7a,0x11,0x12}},








	{ .i1 = { 0x13,0x7a,0x7a,0x16,0x17,0x18,0x57,0x7a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x30,0x31,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x4a,0x38,0x39,0x3a,0x3b,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x30,0x31,0x57}},








	{ .i1 = { 0x7a,0x59,0x7a,0x5b,0x4a,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x7a,0x7a,0x05,0x7a,0x7a,0x08,0x7a}},








	{ .i1 = { 0x56,0x57,0x7a,0x59,0x0e,0x5b,0x7a,0x11}},








	{ .i1 = { 0x12,0x13,0x7a,0x7a,0x7a,0x17,0x18,0x05}},








	{ .i1 = { 0x7a,0x7a,0x08,0x7a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x0e,0x7a,0x7a,0x11,0x12,0x13,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x17,0x18,0x7a,0x7a,0x4a,0x30,0x31}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x38,0x39}},








	{ .i1 = { 0x3a,0x3b,0x57,0x7a,0x59,0x7a,0x5b,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x30,0x31,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x4a,0x38,0x39,0x3a,0x3b,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x0e,0x08,0x10,0x11,0x57,0x7a}},








	{ .i1 = { 0x59,0x0e,0x5b,0x7a,0x11,0x12,0x13,0x1b}},








	{ .i1 = { 0x7a,0x16,0x17,0x18,0x7a,0x21,0x22,0x7a}},








	{ .i1 = { 0x24,0x7a,0x7a,0x7a,0x28,0x29,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x30,0x31,0x7a,0x7a,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x7a,0x38,0x39,0x3a,0x3b,0x43}},








	{ .i1 = { 0x7a,0x7a,0x47,0x7a,0x7a,0x4a,0x4b,0x4c}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x52,0x7a,0x4a}},








	{ .i1 = { 0x7a,0x7a,0x57,0x7a,0x59,0x7a,0x5b,0x7a}},








	{ .i1 = { 0x5d,0x7a,0x7a,0x08,0x57,0x7a,0x59,0x7a}},








	{ .i1 = { 0x5b,0x0e,0x67,0x68,0x11,0x12,0x13,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x17,0x18,0x7a,0x08,0x73,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x77,0x0e,0x7a,0x7a,0x11,0x12}},








	{ .i1 = { 0x13,0x7a,0x7a,0x7a,0x17,0x18,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x30,0x31,0x7a,0x4a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x38,0x39,0x3a,0x3b,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x56,0x57,0x7a,0x59,0x31,0x5b}},








	{ .i1 = { 0x4a,0x7a,0x7a,0x7a,0x7a,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x7a,0x7a,0x7a,0x7a,0x57,0x08,0x59}},








	{ .i1 = { 0x7a,0x5b,0x7a,0x4a,0x0e,0x7a,0x4a,0x11}},








	{ .i1 = { 0x12,0x13,0x7a,0x7a,0x7a,0x17,0x18,0x7a}},








	{ .i1 = { 0x57,0x4a,0x59,0x57,0x5b,0x59,0x4a,0x5b}},








	{ .i1 = { 0x7a,0x4a,0x7a,0x7a,0x7a,0x7a,0x57,0x7a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x57,0x7a,0x59,0x57,0x5b}},








	{ .i1 = { 0x59,0x4a,0x5b,0x7a,0x7a,0x7a,0x38,0x39}},








	{ .i1 = { 0x3a,0x3b,0x7a,0x7a,0x7a,0x4a,0x57,0x7a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x4a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x4a,0x57,0x7a,0x59,0x7a,0x5b,0x7a}},








	{ .i1 = { 0x57,0x4a,0x59,0x7a,0x5b,0x7a,0x57,0x4a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x7a,0x4a,0x7a,0x57,0x7a}},








	{ .i1 = { 0x59,0x4a,0x5b,0x7a,0x57,0x7a,0x59,0x4a}},








	{ .i1 = { 0x5b,0x57,0x4a,0x59,0x7a,0x5b,0x57,0x7a}},








	{ .i1 = { 0x59,0x4a,0x5b,0x7a,0x57,0x7a,0x59,0x57}},








	{ .i1 = { 0x5b,0x59,0x7a,0x5b,0x7a,0x7a,0x57,0x7a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},

};
static data c02_a7c0[] = { // yy_shift_ofst




	{ .i1 = { 0xc3,0x04,0x00,0x00,0x00,0x00,0x00,0x00}},




	{ .i1 = { 0x41,0x00,0x82,0x00,0xc3,0x00,0x04,0x01}},




	{ .i1 = { 0x04,0x01,0x04,0x01,0xdf,0x01,0xdf,0x01}},




	{ .i1 = { 0xfc,0x01,0xdf,0x01,0xfc,0x01,0x1f,0x02}},




	{ .i1 = { 0x9c,0x03,0x42,0x02,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0xfc,0x01,0xfc,0x01,0x67,0x02}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0xd8,0x00}},




	{ .i1 = { 0x11,0x00,0x11,0x00,0x31,0x00,0x0d,0x00}},




	{ .i1 = { 0x0d,0x00,0x36,0x00,0x36,0x00,0x25,0x01}},




	{ .i1 = { 0x25,0x01,0x25,0x01,0x25,0x01,0x25,0x01}},




	{ .i1 = { 0x25,0x01,0x25,0x01,0x25,0x01,0x25,0x01}},




	{ .i1 = { 0x04,0x00,0x2d,0x00,0xfa,0x00,0xfa,0x00}},




	{ .i1 = { 0xfa,0x00,0x56,0x00,0x5e,0x00,0x78,0x00}},




	{ .i1 = { 0x5e,0x00,0x5e,0x00,0xc3,0x04,0xc3,0x04}},




	{ .i1 = { 0xd1,0x00,0xd1,0x00,0x0f,0x00,0xb8,0x00}},




	{ .i1 = { 0xeb,0x00,0x19,0x01,0x01,0x01,0x01,0x01}},




	{ .i1 = { 0x36,0x00,0x70,0x01,0x70,0x01,0x5e,0x00}},




	{ .i1 = { 0x70,0x01,0x5e,0x00,0xc3,0x04,0xc3,0x04}},




	{ .i1 = { 0xc3,0x04,0xc3,0x04,0xc3,0x04,0xc3,0x04}},




	{ .i1 = { 0xc3,0x04,0xc3,0x04,0xc3,0x04,0xc3,0x04}},




	{ .i1 = { 0xc3,0x04,0xc3,0x04,0x41,0x01,0x53,0x01}},




	{ .i1 = { 0x86,0x02,0xbf,0x02,0xd1,0x02,0x0b,0x03}},




	{ .i1 = { 0x1d,0x03,0x56,0x03,0x6a,0x03,0x86,0x02}},




	{ .i1 = { 0xa3,0x03,0xf3,0x03,0xf3,0x03,0xf3,0x03}},




	{ .i1 = { 0xf3,0x03,0xf3,0x03,0xf3,0x03,0xf3,0x03}},




	{ .i1 = { 0xf3,0x03,0xf3,0x03,0xf3,0x03,0x05,0x04}},




	{ .i1 = { 0x3e,0x04,0x01,0x02,0x01,0x02,0x1e,0x00}},




	{ .i1 = { 0x1e,0x00,0x1e,0x00,0x8f,0x01,0x8f,0x01}},




	{ .i1 = { 0x8f,0x01,0x5c,0x00,0x79,0x00,0x77,0x00}},




	{ .i1 = { 0x62,0x01,0x40,0x01,0x7c,0x01,0x87,0x01}},




	{ .i1 = { 0x86,0x00,0xb5,0x00,0xa2,0x01,0xbc,0x01}},




	{ .i1 = { 0x4c,0x01,0x83,0x00,0x0b,0x01,0x0b,0x01}},




	{ .i1 = { 0x0b,0x01,0x0b,0x01,0x0b,0x01,0x0b,0x01}},




	{ .i1 = { 0x32,0x01,0xcf,0x01,0xe2,0x01,0xe9,0x01}},




	{ .i1 = { 0xf6,0x01,0xf7,0x01,0xe8,0x01,0xd2,0x01}},




	{ .i1 = { 0xef,0x01,0xf8,0x01,0xf1,0x01,0xe8,0x01}},




	{ .i1 = { 0x0d,0x02,0x05,0x02,0x10,0x02,0x0b,0x02}},




	{ .i1 = { 0x17,0x02,0xe5,0x01,0x0f,0x02,0x11,0x02}},




	{ .i1 = { 0x13,0x02,0x15,0x02,0xe8,0x01,0x21,0x02}},




	{ .i1 = { 0xff,0x01,0x2a,0x02,0x2b,0x02,0x2e,0x02}},




	{ .i1 = { 0x0a,0x02,0x24,0x02,0x1d,0x02,0x28,0x02}},




	{ .i1 = { 0x2f,0x02,0x4b,0x02,0x39,0x02,0x14,0x02}},




	{ .i1 = { 0x30,0x02,0x3e,0x02,0x54,0x02,0x53,0x02}},




	{ .i1 = { 0x2c,0x02,0x48,0x02,0x20,0x02,0x45,0x02}},




	{ .i1 = { 0x52,0x02,0x57,0x02,0x32,0x02,0x61,0x02}},




	{ .i1 = { 0x63,0x02,0x6c,0x02,0x6e,0x02,0x46,0x02}},




	{ .i1 = { 0x64,0x02,0x3b,0x02,0x58,0x02,0xe8,0x01}},



	{ .i1 = { 0x6a,0x02,0x65,0x02}},
};
static data c02_a7c1[] = { // yy_reduce_ofst




	{ .i1 = { 0xc0,0xff,0x48,0x01,0x6b,0x01,0x84,0x01}},




	{ .i1 = { 0x9b,0x03,0x9b,0x03,0x9b,0x03,0x9b,0x03}},




	{ .i1 = { 0x9b,0x03,0x9b,0x03,0x58,0x00,0x99,0x00}},




	{ .i1 = { 0x17,0x00,0xe0,0x00,0xda,0x00,0x5b,0x00}},




	{ .i1 = { 0x9c,0x00,0x1d,0x00,0x03,0x01,0x15,0x01}},




	{ .i1 = { 0x51,0x01,0x8d,0x01,0xab,0x01,0x63,0x01}},




	{ .i1 = { 0x9b,0x01,0xf3,0x01,0x0e,0x02,0x0a,0x03}},




	{ .i1 = { 0x6b,0x02,0xdc,0x03,0xee,0xff,0xf3,0x00}},




	{ .i1 = { 0x4b,0x01,0xeb,0x01,0x3a,0x02,0x85,0x02}},




	{ .i1 = { 0xa4,0x02,0xdf,0x02,0xf8,0x02,0x3b,0x03}},




	{ .i1 = { 0x57,0x03,0xa5,0x03,0xee,0x03,0x01,0x04}},




	{ .i1 = { 0x04,0x04,0x0f,0x04,0x14,0x04,0x17,0x04}},




	{ .i1 = { 0x27,0x04,0x33,0x04,0x39,0x04,0x3f,0x04}},




	{ .i1 = { 0x47,0x04,0x4d,0x04,0x52,0x04,0x57,0x04}},




	{ .i1 = { 0x5d,0x04,0x60,0x04,0x67,0x04,0xa9,0xff}},




	{ .i1 = { 0xdb,0xff,0x02,0x00,0xb5,0xff,0xf8,0x00}},




	{ .i1 = { 0x0e,0x01,0x37,0x00,0x52,0x00,0xc6,0xff}},




	{ .i1 = { 0xc9,0xff,0xe4,0xff,0xf0,0xff,0x28,0x00}},




	{ .i1 = { 0x6e,0x00,0x6f,0x00,0xaf,0x00,0xb2,0x00}},




	{ .i1 = { 0x29,0x00,0x81,0x00,0x89,0x00,0xbe,0x00}},




	{ .i1 = { 0xca,0x00,0xf2,0xff,0xcf,0xff,0x16,0x01}},




	{ .i1 = { 0xbc,0x00,0x5f,0x01,0xc3,0xff,0xec,0x00}},




	{ .i1 = { 0xba,0xff,0x76,0x00,0x6d,0x00,0x6b,0x00}},




	{ .i1 = { 0x9a,0x00,0xe5,0x00,0xe3,0x00,0xf2,0x00}},




	{ .i1 = { 0x05,0x01,0x3a,0x01,0x3d,0x01,0x69,0x01}},




	{ .i1 = { 0x4f,0x01,0x6c,0x01,0x7d,0x01,0x7f,0x01}},




	{ .i1 = { 0x68,0x01,0x81,0x01,0x71,0x01,0x8e,0x01}},




	{ .i1 = { 0x74,0x01,0x93,0x01,0x89,0x01,0x92,0x01}},



	{ .i1 = { 0x9d,0x01,0xa1,0x01}},
};
static data c02_a7c2[] = { // yy_default




	{ .i1 = { 0x38,0x02,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0x3c,0x02}},




	{ .i1 = { 0x40,0x02,0xd1,0x01,0x4b,0x02,0x4b,0x02}},




	{ .i1 = { 0xc0,0x01,0x4b,0x02,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x2e,0x02,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x20,0x02,0x47,0x02}},




	{ .i1 = { 0x47,0x02,0x20,0x02,0x20,0x02,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x38,0x02,0x38,0x02}},




	{ .i1 = { 0x3b,0x02,0x3b,0x02,0xc0,0x01,0x2a,0x02}},




	{ .i1 = { 0x46,0x02,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x38,0x02,0x38,0x02}},




	{ .i1 = { 0x45,0x02,0x38,0x02,0x45,0x02,0x38,0x02}},




	{ .i1 = { 0x45,0x02,0x38,0x02,0x3e,0x02,0xcf,0x01}},




	{ .i1 = { 0x38,0x02,0x38,0x02,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0x15,0x02,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0x2f,0x02,0x15,0x02,0xdf,0x01}},




	{ .i1 = { 0xde,0x01,0xdd,0x01,0xdc,0x01,0xdb,0x01}},




	{ .i1 = { 0xda,0x01,0x11,0x02,0xfb,0x01,0xec,0x01}},




	{ .i1 = { 0xea,0x01,0xee,0x01,0xed,0x01,0xe5,0x01}},




	{ .i1 = { 0xe6,0x01,0xe3,0x01,0xe7,0x01,0xe9,0x01}},




	{ .i1 = { 0xe8,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xd0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xf3,0x01,0xf2,0x01}},




	{ .i1 = { 0xf1,0x01,0xf0,0x01,0xeb,0x01,0xe4,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x17,0x02,0x4c,0x02}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0x28,0x02}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x25,0x02,0xc0,0x01}},




	{ .i1 = { 0x23,0x02,0xc0,0x01,0x1d,0x02,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x09,0x02,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0x14,0x02}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xd8,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xef,0x01}},



	{ .i1 = { 0xe2,0x01,0xc0,0x01}},
};
const i1 c02_s018e[] = { 0x24,0 };
const i1 c02_s018f[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s0190[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s0191[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s0192[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0193[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s0194[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0195[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s0196[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s0197[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s0198[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s0199[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s019a[] = { 0x49,0x46,0 };
const i1 c02_s019b[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s019c[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s019d[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s019e[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s019f[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s01a0[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s01a1[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s01a2[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s01a3[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s01a4[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s01a5[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s01a6[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s01a7[] = { 0x53,0x55,0x42,0 };
const i1 c02_s01a8[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s01a9[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s01aa[] = { 0x56,0x41,0x52,0 };
const i1 c02_s01ab[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s01ac[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s01ad[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s01ae[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s01af[] = { 0x49,0x44,0 };
const i1 c02_s01b0[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s01b1[] = { 0x41,0x54,0 };
const i1 c02_s01b2[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s01b3[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s01b4[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s01b5[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s01b6[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s01b7[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s01b8[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c02_s01b9[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c02_s01ba[] = { 0x49,0x4e,0x54,0x45,0x52,0x46,0x41,0x43,0x45,0 };
const i1 c02_s01bb[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s01bc[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s01bd[] = { 0x4f,0x52,0 };
const i1 c02_s01be[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s01bf[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s01c0[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s01c1[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s01c2[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s01c3[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s01c4[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s01c5[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s01c6[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01c7[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01c8[] = { 0x41,0x53,0 };
const i1 c02_s01c9[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s01ca[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s01cb[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s01cc[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s01cd[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s01ce[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s01cf[] = { 0x49,0x53,0 };
const i1 c02_s01d0[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s01d1[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
const i1 c02_s01d2[] = { 0x49,0x4d,0x50,0x4c,0x45,0x4d,0x45,0x4e,0x54,0x53,0 };
static data c02_a7c3[] = { // yyTokenName

	{ .ptr = (void*)c02_s018e },

	{ .ptr = (void*)c02_s018f },

	{ .ptr = (void*)c02_s0190 },

	{ .ptr = (void*)c02_s0191 },

	{ .ptr = (void*)c02_s0192 },

	{ .ptr = (void*)c02_s0193 },

	{ .ptr = (void*)c02_s0194 },

	{ .ptr = (void*)c02_s0195 },

	{ .ptr = (void*)c02_s0196 },

	{ .ptr = (void*)c02_s0197 },

	{ .ptr = (void*)c02_s0198 },

	{ .ptr = (void*)c02_s0199 },

	{ .ptr = (void*)c02_s019a },

	{ .ptr = (void*)c02_s019b },

	{ .ptr = (void*)c02_s019c },

	{ .ptr = (void*)c02_s019d },

	{ .ptr = (void*)c02_s019e },

	{ .ptr = (void*)c02_s019f },

	{ .ptr = (void*)c02_s01a0 },

	{ .ptr = (void*)c02_s01a1 },

	{ .ptr = (void*)c02_s01a2 },

	{ .ptr = (void*)c02_s01a3 },

	{ .ptr = (void*)c02_s01a4 },

	{ .ptr = (void*)c02_s01a5 },

	{ .ptr = (void*)c02_s01a6 },

	{ .ptr = (void*)c02_s01a7 },

	{ .ptr = (void*)c02_s01a8 },

	{ .ptr = (void*)c02_s01a9 },

	{ .ptr = (void*)c02_s01aa },

	{ .ptr = (void*)c02_s01ab },

	{ .ptr = (void*)c02_s01ac },

	{ .ptr = (void*)c02_s01ad },

	{ .ptr = (void*)c02_s01ae },

	{ .ptr = (void*)c02_s01af },

	{ .ptr = (void*)c02_s01b0 },

	{ .ptr = (void*)c02_s01b1 },

	{ .ptr = (void*)c02_s01b2 },

	{ .ptr = (void*)c02_s01b3 },

	{ .ptr = (void*)c02_s01b4 },

	{ .ptr = (void*)c02_s01b5 },

	{ .ptr = (void*)c02_s01b6 },

	{ .ptr = (void*)c02_s01b7 },

	{ .ptr = (void*)c02_s01b8 },

	{ .ptr = (void*)c02_s01b9 },

	{ .ptr = (void*)c02_s01ba },

	{ .ptr = (void*)c02_s01bb },

	{ .ptr = (void*)c02_s01bc },

	{ .ptr = (void*)c02_s01bd },

	{ .ptr = (void*)c02_s01be },

	{ .ptr = (void*)c02_s01bf },

	{ .ptr = (void*)c02_s01c0 },

	{ .ptr = (void*)c02_s01c1 },

	{ .ptr = (void*)c02_s01c2 },

	{ .ptr = (void*)c02_s01c3 },

	{ .ptr = (void*)c02_s01c4 },

	{ .ptr = (void*)c02_s01c5 },

	{ .ptr = (void*)c02_s01c6 },

	{ .ptr = (void*)c02_s01c7 },

	{ .ptr = (void*)c02_s01c8 },

	{ .ptr = (void*)c02_s01c9 },

	{ .ptr = (void*)c02_s01ca },

	{ .ptr = (void*)c02_s01cb },

	{ .ptr = (void*)c02_s01cc },

	{ .ptr = (void*)c02_s01cd },

	{ .ptr = (void*)c02_s01ce },

	{ .ptr = (void*)c02_s01cf },

	{ .ptr = (void*)c02_s01d0 },

	{ .ptr = (void*)c02_s01d1 },

	{ .ptr = (void*)c02_s01d2 },

};
const i1 c02_s01d3[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f33_Free(i8 /* block */);

// token_destructor workspace at ws+3904 length ws+0
void f508_token_destructor(void) {

	i8 v10543 = (i8)(intptr_t)(ws+3888);
	i1 v10544 = *(i1*)(intptr_t)v10543;
	i1 v10545 = (i1)+41;
	if (v10544==v10545) goto c02_07c9; else goto c02_07cb;

c02_07cb:;

	i8 v10546 = (i8)(intptr_t)(ws+3888);
	i1 v10547 = *(i1*)(intptr_t)v10546;
	i1 v10548 = (i1)+33;
	if (v10547==v10548) goto c02_07c9; else goto c02_07ca;

c02_07c9:;

	i8 v10549 = (i8)(intptr_t)c02_s01d3;
	i8 v10550 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10550)(v10549);

	i8 v10551 = (i8)(intptr_t)(ws+3896);
	i8 v10552 = *(i8*)(intptr_t)v10551;
	i8 v10553 = *(i8*)(intptr_t)v10552;
	i8 v10554 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v10554)(v10553);

	goto c02_07c4;

c02_07ca:;

c02_07c4:;

endsub:;
}
	void f508_token_destructor(void);

// yy_destructor workspace at ws+3888 length ws+16
void f507_yy_destructor(i8 p10541 /* yypminor */, i1 p10542 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3888) = p10542; /*yymajor */
	*(i8*)(intptr_t)(ws+3896) = p10541; /*yypminor */


	i8 v10555 = (i8)(intptr_t)(ws+3888);
	i1 v10556 = *(i1*)(intptr_t)v10555;
	i1 v10557 = (i1)+0;
	if (v10556==v10557) goto c02_07d2; else goto c02_07d3;

c02_07d3:;

	i8 v10558 = (i8)(intptr_t)(ws+3888);
	i1 v10559 = *(i1*)(intptr_t)v10558;
	i1 v10560 = (i1)+69;
	if (v10559<v10560) goto c02_07d1; else goto c02_07d2;

c02_07d1:;

	i8 v10561 = (i8)(intptr_t)(f508_token_destructor);

	((void(*)(void))(intptr_t)v10561)();

	goto c02_07cc;

c02_07d2:;

c02_07cc:;

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// yy_pop_parser_stack workspace at ws+3840 length ws+0
void f509_yy_pop_parser_stack(void) {

	i8 v10562 = (i8)(intptr_t)(ws+2080);
	i8 v10563 = *(i8*)(intptr_t)v10562;
	i8 v10564 = v10563+(-16);
	i8 v10565 = (i8)(intptr_t)(ws+2080);
	*(i8*)(intptr_t)v10565 = v10564;

	i8 v10566 = (i8)(intptr_t)(ws+2080);
	i8 v10567 = *(i8*)(intptr_t)v10566;
	i8 v10568 = v10567+(+2);
	i1 v10569 = *(i1*)(intptr_t)v10568;
	i8 v10570 = (i8)(intptr_t)(ws+2080);
	i8 v10571 = *(i8*)(intptr_t)v10570;
	i8 v10572 = v10571+(+8);
	i8 v10573 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10573)(v10572, v10569);

endsub:;
}
	void f509_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3840 length ws+0
void f510_yy_pop_all_parser_stack(void) {

c02_07d6:;

	i8 v10574 = (i8)(intptr_t)(ws+2080);
	i8 v10575 = *(i8*)(intptr_t)v10574;
	i8 v10576 = (i8)(intptr_t)(ws+2088);
	if (v10575==v10576) goto c02_07d9; else goto c02_07d8;

c02_07d8:;

	i8 v10577 = (i8)(intptr_t)(f509_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v10577)();

	goto c02_07d6;

c02_07d9:;

endsub:;
}
	void f510_yy_pop_all_parser_stack(void);
	void f69_StartError(void);
const i1 c02_s01d4[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// yy_stack_overflow workspace at ws+3840 length ws+0
void f511_yy_stack_overflow(void) {

	i8 v10578 = (i8)(intptr_t)(f510_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v10578)();

	i8 v10579 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v10579)();

	i8 v10580 = (i8)(intptr_t)c02_s01d4;
	i8 v10581 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10581)(v10580);

	i8 v10582 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v10582)();

endsub:;
}
static data c02_a7da[] = { // yyRuleInfoLhs








	{ .i1 = { 0x47,0x47,0x47,0x47,0x47,0x47,0x4b,0x47}},








	{ .i1 = { 0x4c,0x47,0x47,0x47,0x4e,0x4f,0x50,0x47}},








	{ .i1 = { 0x52,0x55,0x55,0x4d,0x4d,0x4d,0x4d,0x4d}},








	{ .i1 = { 0x4d,0x4d,0x4d,0x4d,0x4d,0x57,0x57,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x57,0x57,0x4a,0x4a,0x57}},








	{ .i1 = { 0x56,0x47,0x49,0x49,0x49,0x49,0x49,0x49}},








	{ .i1 = { 0x47,0x48,0x59,0x5a,0x58,0x58,0x4a,0x47}},








	{ .i1 = { 0x47,0x5b,0x5c,0x5c,0x5e,0x5e,0x5f,0x5d}},








	{ .i1 = { 0x60,0x60,0x61,0x47,0x68,0x64,0x62,0x67}},








	{ .i1 = { 0x65,0x66,0x63,0x63,0x69,0x69,0x6a,0x6a}},








	{ .i1 = { 0x6b,0x6b,0x6c,0x47,0x6d,0x6e,0x70,0x72}},








	{ .i1 = { 0x72,0x71,0x47,0x73,0x75,0x75,0x76,0x47}},








	{ .i1 = { 0x77,0x79,0x79,0x79,0x45,0x46,0x46,0x47}},








	{ .i1 = { 0x51,0x51,0x51,0x53,0x53,0x54,0x47,0x47}},








	{ .i1 = { 0x47,0x47,0x64,0x6e,0x6f,0x6f,0x74,0x74}},




	{ .i1 = { 0x75,0x78,0x78}},
};
static data c02_a7db[] = { // yyRuleInfoNRhs








	{ .i1 = { 0x02,0x05,0x07,0x05,0x04,0x04,0x01,0x04}},








	{ .i1 = { 0x03,0x02,0x02,0x08,0x00,0x01,0x01,0x05}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x02,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x01}},








	{ .i1 = { 0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x01,0x03,0x04,0x03,0x01}},








	{ .i1 = { 0x01,0x05,0x06,0x01,0x03,0x04,0x03,0x02}},








	{ .i1 = { 0x05,0x01,0x01,0x01,0x01,0x03,0x02,0x03}},








	{ .i1 = { 0x05,0x01,0x03,0x02,0x01,0x03,0x01,0x05}},








	{ .i1 = { 0x01,0x03,0x01,0x05,0x04,0x05,0x01,0x03}},








	{ .i1 = { 0x01,0x02,0x01,0x03,0x01,0x00,0x02,0x03}},








	{ .i1 = { 0x01,0x03,0x03,0x07,0x01,0x02,0x05,0x00}},








	{ .i1 = { 0x04,0x01,0x05,0x05,0x01,0x03,0x01,0x03}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x00,0x02,0x01}},








	{ .i1 = { 0x00,0x02,0x05,0x00,0x02,0x02,0x08,0x06}},








	{ .i1 = { 0x05,0x05,0x00,0x00,0x00,0x02,0x01,0x03}},




	{ .i1 = { 0x00,0x01,0x03}},
};
	void f511_yy_stack_overflow(void);

// Reducer workspace at ws+3840 length ws+0
void f514_Reducer(void) {

endsub:;
}
	void f104_MidReturn(i8* /* m */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_0 workspace at ws+3840 length ws+0
void f515_reduce_0(void) {

	i8 v10648 = (i8)(intptr_t)(f104_MidReturn);
	i8 v10649;

	((void(*)(i8* /* m */))(intptr_t)v10648)(&v10649);
	i8 v10650 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10650)(v10649);

	i1 v10651 = (i1)+22;
	i8 v10652 = (i8)(intptr_t)(ws+3760);
	i8 v10653 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10653)(v10652, v10651);

endsub:;
}
	void f468_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_1 workspace at ws+3840 length ws+0
void f516_reduce_1(void) {

	i8 v10654 = (i8)(intptr_t)(ws+40);
	i8 v10655 = *(i8*)(intptr_t)v10654;
	i8 v10656 = (i8)(intptr_t)(ws+3784);
	i8 v10657 = *(i8*)(intptr_t)v10656;
	i8 v10658 = (i8)(intptr_t)(ws+3768);
	i8 v10659 = *(i8*)(intptr_t)v10658;
	i8 v10660 = (i8)(intptr_t)(f468_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10660)(v10659, v10657, v10655);

	i1 v10661 = (i1)+6;
	i8 v10662 = (i8)(intptr_t)(ws+3776);
	i8 v10663 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10663)(v10662, v10661);

	i1 v10664 = (i1)+22;
	i8 v10665 = (i8)(intptr_t)(ws+3760);
	i8 v10666 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10666)(v10665, v10664);

endsub:;
}
	void f468_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f476_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f99_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f144_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_2 workspace at ws+3840 length ws+0
void f517_reduce_2(void) {

	i8 v10667 = (i8)(intptr_t)(ws+40);
	i8 v10668 = *(i8*)(intptr_t)v10667;
	i8 v10669 = (i8)(intptr_t)(ws+3800);
	i8 v10670 = *(i8*)(intptr_t)v10669;
	i8 v10671 = (i8)(intptr_t)(ws+3784);
	i8 v10672 = *(i8*)(intptr_t)v10671;
	i8 v10673 = (i8)(intptr_t)(f468_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10673)(v10672, v10670, v10668);

	i8 v10674 = (i8)(intptr_t)(ws+3768);
	i8 v10675 = *(i8*)(intptr_t)v10674;
	i8 v10676 = (i8)(intptr_t)(ws+3800);
	i8 v10677 = *(i8*)(intptr_t)v10676;
	i8 v10678 = *(i8*)(intptr_t)v10677;
	i8 v10679 = *(i8*)(intptr_t)v10678;
	i8 v10680 = (i8)(intptr_t)(f476_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10680)(v10679, v10675);

	i8 v10681 = (i8)(intptr_t)(ws+3768);
	i8 v10682 = *(i8*)(intptr_t)v10681;
	i8 v10683 = v10682+(+16);
	i8 v10684 = *(i8*)(intptr_t)v10683;
	i8 v10685 = v10684+(+48);
	i2 v10686 = *(i2*)(intptr_t)v10685;
	i1 v10687 = v10686;
	i8 v10688 = (i8)(intptr_t)(ws+3768);
	i8 v10689 = *(i8*)(intptr_t)v10688;
	i8 v10690 = (i8)(intptr_t)(ws+3800);
	i8 v10691 = *(i8*)(intptr_t)v10690;
	i2 v10692 = (i2)+0;
	i8 v10693 = (i8)(intptr_t)(f99_MidAddress);
	i8 v10694;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v10693)(&v10694, v10692, v10691);
	i8 v10695 = (i8)(intptr_t)(f144_MidStore);
	i8 v10696;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10695)(&v10696, v10694, v10689, v10687);
	i8 v10697 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10697)(v10696);

	i1 v10698 = (i1)+6;
	i8 v10699 = (i8)(intptr_t)(ws+3792);
	i8 v10700 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10700)(v10699, v10698);

	i1 v10701 = (i1)+2;
	i8 v10702 = (i8)(intptr_t)(ws+3776);
	i8 v10703 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10703)(v10702, v10701);

	i1 v10704 = (i1)+22;
	i8 v10705 = (i8)(intptr_t)(ws+3760);
	i8 v10706 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10706)(v10705, v10704);

endsub:;
}
const i1 c02_s01d7[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f225_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s01d8[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f468_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f476_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f99_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f144_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_3 workspace at ws+3840 length ws+8
void f518_reduce_3(void) {

	i8 v10707 = (i8)(intptr_t)(ws+3768);
	i8 v10708 = *(i8*)(intptr_t)v10707;
	i8 v10709 = v10708+(+16);
	i8 v10710 = *(i8*)(intptr_t)v10709;
	i8 v10711 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v10711 = v10710;

	i8 v10712 = (i8)(intptr_t)(ws+3840);
	i8 v10713 = *(i8*)(intptr_t)v10712;
	i8 v10714 = (i8)+0;
	if (v10713==v10714) goto c02_07ea; else goto c02_07eb;

c02_07ea:;

	i8 v10715 = (i8)(intptr_t)c02_s01d7;
	i8 v10716 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10716)(v10715);

	goto c02_07e7;

c02_07eb:;

c02_07e7:;

	i8 v10717 = (i8)(intptr_t)(ws+3840);
	i8 v10718 = *(i8*)(intptr_t)v10717;
	i8 v10719 = (i8)(intptr_t)(f225_IsScalar);
	i1 v10720;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10719)(&v10720, v10718);
	i1 v10721 = (i1)+0;
	if (v10720==v10721) goto c02_07ef; else goto c02_07f0;

c02_07ef:;

	i8 v10722 = (i8)(intptr_t)c02_s01d8;
	i8 v10723 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10723)(v10722);

	goto c02_07ec;

c02_07f0:;

c02_07ec:;

	i8 v10724 = (i8)(intptr_t)(ws+40);
	i8 v10725 = *(i8*)(intptr_t)v10724;
	i8 v10726 = (i8)(intptr_t)(ws+3784);
	i8 v10727 = *(i8*)(intptr_t)v10726;
	i8 v10728 = (i8)(intptr_t)(ws+3840);
	i8 v10729 = *(i8*)(intptr_t)v10728;
	i8 v10730 = (i8)(intptr_t)(f468_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10730)(v10729, v10727, v10725);

	i8 v10731 = (i8)(intptr_t)(ws+3768);
	i8 v10732 = *(i8*)(intptr_t)v10731;
	i8 v10733 = (i8)(intptr_t)(ws+3784);
	i8 v10734 = *(i8*)(intptr_t)v10733;
	i8 v10735 = *(i8*)(intptr_t)v10734;
	i8 v10736 = *(i8*)(intptr_t)v10735;
	i8 v10737 = (i8)(intptr_t)(f476_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10737)(v10736, v10732);

	i8 v10738 = (i8)(intptr_t)(ws+3768);
	i8 v10739 = *(i8*)(intptr_t)v10738;
	i8 v10740 = v10739+(+16);
	i8 v10741 = *(i8*)(intptr_t)v10740;
	i8 v10742 = v10741+(+48);
	i2 v10743 = *(i2*)(intptr_t)v10742;
	i1 v10744 = v10743;
	i8 v10745 = (i8)(intptr_t)(ws+3768);
	i8 v10746 = *(i8*)(intptr_t)v10745;
	i8 v10747 = (i8)(intptr_t)(ws+3784);
	i8 v10748 = *(i8*)(intptr_t)v10747;
	i2 v10749 = (i2)+0;
	i8 v10750 = (i8)(intptr_t)(f99_MidAddress);
	i8 v10751;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v10750)(&v10751, v10749, v10748);
	i8 v10752 = (i8)(intptr_t)(f144_MidStore);
	i8 v10753;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10752)(&v10753, v10751, v10746, v10744);
	i8 v10754 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10754)(v10753);

	i1 v10755 = (i1)+2;
	i8 v10756 = (i8)(intptr_t)(ws+3776);
	i8 v10757 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10757)(v10756, v10755);

	i1 v10758 = (i1)+22;
	i8 v10759 = (i8)(intptr_t)(ws+3760);
	i8 v10760 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10760)(v10759, v10758);

endsub:;
}
	void f228_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f476_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f144_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_4 workspace at ws+3840 length ws+16
void f519_reduce_4(void) {

	i8 v10761 = (i8)(intptr_t)(ws+3784);
	i8 v10762 = *(i8*)(intptr_t)v10761;
	i8 v10763 = v10762+(+16);
	i8 v10764 = *(i8*)(intptr_t)v10763;
	i8 v10765 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v10765 = v10764;

	i8 v10766 = (i8)(intptr_t)(ws+3784);
	i8 v10767 = *(i8*)(intptr_t)v10766;
	i8 v10768 = (i8)(intptr_t)(f228_UndoLValue);
	i8 v10769;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v10768)(&v10769, v10767);
	i8 v10770 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v10770 = v10769;

	i8 v10771 = (i8)(intptr_t)(ws+3768);
	i8 v10772 = *(i8*)(intptr_t)v10771;
	i8 v10773 = (i8)(intptr_t)(ws+3840);
	i8 v10774 = *(i8*)(intptr_t)v10773;
	i8 v10775 = (i8)(intptr_t)(f476_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10775)(v10774, v10772);

	i8 v10776 = (i8)(intptr_t)(ws+3840);
	i8 v10777 = *(i8*)(intptr_t)v10776;
	i8 v10778 = v10777+(+48);
	i2 v10779 = *(i2*)(intptr_t)v10778;
	i1 v10780 = v10779;
	i8 v10781 = (i8)(intptr_t)(ws+3768);
	i8 v10782 = *(i8*)(intptr_t)v10781;
	i8 v10783 = (i8)(intptr_t)(ws+3848);
	i8 v10784 = *(i8*)(intptr_t)v10783;
	i8 v10785 = (i8)(intptr_t)(f144_MidStore);
	i8 v10786;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10785)(&v10786, v10784, v10782, v10780);
	i8 v10787 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10787)(v10786);

	i1 v10788 = (i1)+2;
	i8 v10789 = (i8)(intptr_t)(ws+3776);
	i8 v10790 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10790)(v10789, v10788);

	i1 v10791 = (i1)+22;
	i8 v10792 = (i8)(intptr_t)(ws+3760);
	i8 v10793 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10793)(v10792, v10791);

endsub:;
}
	void f492_TerminateNormalLoop(i8 /* ll */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_5 workspace at ws+3840 length ws+0
void f520_reduce_5(void) {

	i8 v10794 = (i8)(intptr_t)(ws+3784);
	i8 v10795 = *(i8*)(intptr_t)v10794;
	i8 v10796 = (i8)(intptr_t)(f492_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v10796)(v10795);

	i1 v10797 = (i1)+10;
	i8 v10798 = (i8)(intptr_t)(ws+3768);
	i8 v10799 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10799)(v10798, v10797);

	i1 v10800 = (i1)+13;
	i8 v10801 = (i8)(intptr_t)(ws+3760);
	i8 v10802 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10802)(v10801, v10800);

endsub:;
}
	void f491_BeginNormalLoop(i8* /* ll */);
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);

// reduce_6 workspace at ws+3840 length ws+0
void f521_reduce_6(void) {

	i8 v10803 = (i8)(intptr_t)(f491_BeginNormalLoop);
	i8 v10804;

	((void(*)(i8* /* ll */))(intptr_t)v10803)(&v10804);
	i8 v10805 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v10805 = v10804;

	i8 v10806 = (i8)(intptr_t)(ws+54);
	i2 v10807 = *(i2*)(intptr_t)v10806;
	i8 v10808 = (i8)(intptr_t)(f116_MidLabel);
	i8 v10809;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10808)(&v10809, v10807);
	i8 v10810 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10810)(v10809);

endsub:;
}
	void f492_TerminateNormalLoop(i8 /* ll */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_7 workspace at ws+3840 length ws+0
void f522_reduce_7(void) {

	i8 v10811 = (i8)(intptr_t)(ws+3784);
	i8 v10812 = *(i8*)(intptr_t)v10811;
	i8 v10813 = (i8)(intptr_t)(f492_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v10813)(v10812);

	i1 v10814 = (i1)+10;
	i8 v10815 = (i8)(intptr_t)(ws+3768);
	i8 v10816 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10816)(v10815, v10814);

	i1 v10817 = (i1)+13;
	i8 v10818 = (i8)(intptr_t)(ws+3760);
	i8 v10819 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10819)(v10818, v10817);

endsub:;
}
	void f491_BeginNormalLoop(i8* /* ll */);
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f229_AllocLabel(i2* /* label */);
	void f229_AllocLabel(i2* /* label */);
	void f466_GenerateConditional(i8 /* rootnode */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_8 workspace at ws+3840 length ws+2
void f523_reduce_8(void) {

	i8 v10820 = (i8)(intptr_t)(f491_BeginNormalLoop);
	i8 v10821;

	((void(*)(i8* /* ll */))(intptr_t)v10820)(&v10821);
	i8 v10822 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v10822 = v10821;

	i8 v10823 = (i8)(intptr_t)(ws+54);
	i2 v10824 = *(i2*)(intptr_t)v10823;
	i8 v10825 = (i8)(intptr_t)(f116_MidLabel);
	i8 v10826;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10825)(&v10826, v10824);
	i8 v10827 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10827)(v10826);

	i8 v10828 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10829;

	((void(*)(i2* /* label */))(intptr_t)v10828)(&v10829);
	i8 v10830 = (i8)(intptr_t)(ws+3840);
	*(i2*)(intptr_t)v10830 = v10829;

	i8 v10831 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10832;

	((void(*)(i2* /* label */))(intptr_t)v10831)(&v10832);
	i8 v10833 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10833 = v10832;

	i8 v10834 = (i8)(intptr_t)(ws+3840);
	i2 v10835 = *(i2*)(intptr_t)v10834;
	i8 v10836 = (i8)(intptr_t)(ws+3768);
	i8 v10837 = *(i8*)(intptr_t)v10836;
	*(i2*)(intptr_t)v10837 = v10835;

	i8 v10838 = (i8)(intptr_t)(ws+52);
	i2 v10839 = *(i2*)(intptr_t)v10838;
	i8 v10840 = (i8)(intptr_t)(ws+3768);
	i8 v10841 = *(i8*)(intptr_t)v10840;
	i8 v10842 = v10841+(+2);
	*(i2*)(intptr_t)v10842 = v10839;

	i8 v10843 = (i8)(intptr_t)(ws+3840);
	i2 v10844 = *(i2*)(intptr_t)v10843;
	i8 v10845 = (i8)(intptr_t)(ws+3768);
	i8 v10846 = *(i8*)(intptr_t)v10845;
	i8 v10847 = v10846+(+4);
	*(i2*)(intptr_t)v10847 = v10844;

	i8 v10848 = (i8)(intptr_t)(ws+3768);
	i8 v10849 = *(i8*)(intptr_t)v10848;
	i8 v10850 = (i8)(intptr_t)(f466_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v10850)(v10849);

	i8 v10851 = (i8)(intptr_t)(ws+52);
	i2 v10852 = *(i2*)(intptr_t)v10851;
	i8 v10853 = (i8)(intptr_t)(ws+3752);
	i8 v10854 = *(i8*)(intptr_t)v10853;
	i8 v10855 = v10854+(+2);
	*(i2*)(intptr_t)v10855 = v10852;

	i1 v10856 = (i1)+13;
	i8 v10857 = (i8)(intptr_t)(ws+3760);
	i8 v10858 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10858)(v10857, v10856);

endsub:;
}
const i1 c02_s01d9[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f71_SimpleError(i8 /* message */);
	void f106_MidJump(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_9 workspace at ws+3840 length ws+0
void f524_reduce_9(void) {

	i8 v10859 = (i8)(intptr_t)(ws+52);
	i2 v10860 = *(i2*)(intptr_t)v10859;
	i2 v10861 = (i2)+0;
	if (v10860==v10861) goto c02_07f4; else goto c02_07f5;

c02_07f4:;

	i8 v10862 = (i8)(intptr_t)c02_s01d9;
	i8 v10863 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10863)(v10862);

	goto c02_07f1;

c02_07f5:;

c02_07f1:;

	i8 v10864 = (i8)(intptr_t)(ws+52);
	i2 v10865 = *(i2*)(intptr_t)v10864;
	i8 v10866 = (i8)(intptr_t)(f106_MidJump);
	i8 v10867;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10866)(&v10867, v10865);
	i8 v10868 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10868)(v10867);

	i1 v10869 = (i1)+22;
	i8 v10870 = (i8)(intptr_t)(ws+3760);
	i8 v10871 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10871)(v10870, v10869);

endsub:;
}
const i1 c02_s01da[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f71_SimpleError(i8 /* message */);
	void f106_MidJump(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_10 workspace at ws+3840 length ws+0
void f525_reduce_10(void) {

	i8 v10872 = (i8)(intptr_t)(ws+54);
	i2 v10873 = *(i2*)(intptr_t)v10872;
	i2 v10874 = (i2)+0;
	if (v10873==v10874) goto c02_07f9; else goto c02_07fa;

c02_07f9:;

	i8 v10875 = (i8)(intptr_t)c02_s01da;
	i8 v10876 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10876)(v10875);

	goto c02_07f6;

c02_07fa:;

c02_07f6:;

	i8 v10877 = (i8)(intptr_t)(ws+54);
	i2 v10878 = *(i2*)(intptr_t)v10877;
	i8 v10879 = (i8)(intptr_t)(f106_MidJump);
	i8 v10880;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10879)(&v10880, v10878);
	i8 v10881 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10881)(v10880);

	i1 v10882 = (i1)+22;
	i8 v10883 = (i8)(intptr_t)(ws+3760);
	i8 v10884 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10884)(v10883, v10882);

endsub:;
}
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_11 workspace at ws+3840 length ws+8
void f526_reduce_11(void) {

	i8 v10885 = (i8)(intptr_t)(ws+56);
	i8 v10886 = *(i8*)(intptr_t)v10885;
	i2 v10887 = *(i2*)(intptr_t)v10886;
	i8 v10888 = (i8)(intptr_t)(f116_MidLabel);
	i8 v10889;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10888)(&v10889, v10887);
	i8 v10890 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10890)(v10889);

	i8 v10891 = (i8)(intptr_t)(ws+56);
	i8 v10892 = *(i8*)(intptr_t)v10891;
	i8 v10893 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v10893 = v10892;

	i8 v10894 = (i8)(intptr_t)(ws+56);
	i8 v10895 = *(i8*)(intptr_t)v10894;
	i8 v10896 = v10895+(+8);
	i8 v10897 = *(i8*)(intptr_t)v10896;
	i8 v10898 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v10898 = v10897;

	i8 v10899 = (i8)(intptr_t)(ws+3840);
	i8 v10900 = *(i8*)(intptr_t)v10899;
	i8 v10901 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v10901)(v10900);

	i1 v10902 = (i1)+26;
	i8 v10903 = (i8)(intptr_t)(ws+3792);
	i8 v10904 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10904)(v10903, v10902);

	i1 v10905 = (i1)+10;
	i8 v10906 = (i8)(intptr_t)(ws+3768);
	i8 v10907 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10907)(v10906, v10905);

	i1 v10908 = (i1)+12;
	i8 v10909 = (i8)(intptr_t)(ws+3760);
	i8 v10910 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10910)(v10909, v10908);

endsub:;
}
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f229_AllocLabel(i2* /* label */);

// reduce_12 workspace at ws+3840 length ws+8
void f527_reduce_12(void) {

	i8 v10911 = (i8)+16;
	i8 v10912 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v10913;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10912)(&v10913, v10911);
	i8 v10914 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v10914 = v10913;

	i8 v10915 = (i8)(intptr_t)(ws+56);
	i8 v10916 = *(i8*)(intptr_t)v10915;
	i8 v10917 = (i8)(intptr_t)(ws+3840);
	i8 v10918 = *(i8*)(intptr_t)v10917;
	i8 v10919 = v10918+(+8);
	*(i8*)(intptr_t)v10919 = v10916;

	i8 v10920 = (i8)(intptr_t)(ws+3840);
	i8 v10921 = *(i8*)(intptr_t)v10920;
	i8 v10922 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v10922 = v10921;

	i8 v10923 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10924;

	((void(*)(i2* /* label */))(intptr_t)v10923)(&v10924);
	i8 v10925 = (i8)(intptr_t)(ws+56);
	i8 v10926 = *(i8*)(intptr_t)v10925;
	*(i2*)(intptr_t)v10926 = v10924;

endsub:;
}
	void f229_AllocLabel(i2* /* label */);
	void f229_AllocLabel(i2* /* label */);
	void f466_GenerateConditional(i8 /* rootnode */);

// reduce_13 workspace at ws+3840 length ws+4
void f528_reduce_13(void) {

	i8 v10927 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10928;

	((void(*)(i2* /* label */))(intptr_t)v10927)(&v10928);
	i8 v10929 = (i8)(intptr_t)(ws+3840);
	*(i2*)(intptr_t)v10929 = v10928;

	i8 v10930 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v10931;

	((void(*)(i2* /* label */))(intptr_t)v10930)(&v10931);
	i8 v10932 = (i8)(intptr_t)(ws+3842);
	*(i2*)(intptr_t)v10932 = v10931;

	i8 v10933 = (i8)(intptr_t)(ws+3840);
	i2 v10934 = *(i2*)(intptr_t)v10933;
	i8 v10935 = (i8)(intptr_t)(ws+56);
	i8 v10936 = *(i8*)(intptr_t)v10935;
	i8 v10937 = v10936+(+2);
	*(i2*)(intptr_t)v10937 = v10934;

	i8 v10938 = (i8)(intptr_t)(ws+3842);
	i2 v10939 = *(i2*)(intptr_t)v10938;
	i8 v10940 = (i8)(intptr_t)(ws+56);
	i8 v10941 = *(i8*)(intptr_t)v10940;
	i8 v10942 = v10941+(+4);
	*(i2*)(intptr_t)v10942 = v10939;

	i8 v10943 = (i8)(intptr_t)(ws+3840);
	i2 v10944 = *(i2*)(intptr_t)v10943;
	i8 v10945 = (i8)(intptr_t)(ws+3760);
	i8 v10946 = *(i8*)(intptr_t)v10945;
	*(i2*)(intptr_t)v10946 = v10944;

	i8 v10947 = (i8)(intptr_t)(ws+3842);
	i2 v10948 = *(i2*)(intptr_t)v10947;
	i8 v10949 = (i8)(intptr_t)(ws+3760);
	i8 v10950 = *(i8*)(intptr_t)v10949;
	i8 v10951 = v10950+(+2);
	*(i2*)(intptr_t)v10951 = v10948;

	i8 v10952 = (i8)(intptr_t)(ws+3840);
	i2 v10953 = *(i2*)(intptr_t)v10952;
	i8 v10954 = (i8)(intptr_t)(ws+3760);
	i8 v10955 = *(i8*)(intptr_t)v10954;
	i8 v10956 = v10955+(+4);
	*(i2*)(intptr_t)v10956 = v10953;

	i8 v10957 = (i8)(intptr_t)(ws+3760);
	i8 v10958 = *(i8*)(intptr_t)v10957;
	i8 v10959 = (i8)(intptr_t)(f466_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v10959)(v10958);

endsub:;
}
	void f106_MidJump(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);

// reduce_14 workspace at ws+3840 length ws+0
void f529_reduce_14(void) {

	i8 v10960 = (i8)(intptr_t)(ws+56);
	i8 v10961 = *(i8*)(intptr_t)v10960;
	i2 v10962 = *(i2*)(intptr_t)v10961;
	i8 v10963 = (i8)(intptr_t)(f106_MidJump);
	i8 v10964;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10963)(&v10964, v10962);
	i8 v10965 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10965)(v10964);

	i8 v10966 = (i8)(intptr_t)(ws+56);
	i8 v10967 = *(i8*)(intptr_t)v10966;
	i8 v10968 = v10967+(+4);
	i2 v10969 = *(i2*)(intptr_t)v10968;
	i8 v10970 = (i8)(intptr_t)(f116_MidLabel);
	i8 v10971;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10970)(&v10971, v10969);
	i8 v10972 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10972)(v10971);

endsub:;
}
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f155_MidEndcase(i8* /* m */, i1 /* width */);
	void f465_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_15 workspace at ws+3840 length ws+8
void f530_reduce_15(void) {

	i8 v10973 = (i8)(intptr_t)(ws+64);
	i8 v10974 = *(i8*)(intptr_t)v10973;
	i8 v10975 = v10974+(+17);
	i1 v10976 = *(i1*)(intptr_t)v10975;
	i1 v10977 = (i1)+0;
	if (v10976==v10977) goto c02_0802; else goto c02_0801;

c02_0802:;

	i8 v10978 = (i8)(intptr_t)(ws+64);
	i8 v10979 = *(i8*)(intptr_t)v10978;
	i2 v10980 = *(i2*)(intptr_t)v10979;
	i2 v10981 = (i2)+0;
	if (v10980==v10981) goto c02_0801; else goto c02_0800;

c02_0800:;

	i8 v10982 = (i8)(intptr_t)(ws+64);
	i8 v10983 = *(i8*)(intptr_t)v10982;
	i2 v10984 = *(i2*)(intptr_t)v10983;
	i8 v10985 = (i8)(intptr_t)(f116_MidLabel);
	i8 v10986;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10985)(&v10986, v10984);
	i8 v10987 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10987)(v10986);

	goto c02_07fb;

c02_0801:;

c02_07fb:;

	i8 v10988 = (i8)(intptr_t)(ws+64);
	i8 v10989 = *(i8*)(intptr_t)v10988;
	i8 v10990 = v10989+(+2);
	i2 v10991 = *(i2*)(intptr_t)v10990;
	i8 v10992 = (i8)(intptr_t)(f116_MidLabel);
	i8 v10993;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10992)(&v10993, v10991);
	i8 v10994 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10994)(v10993);

	i8 v10995 = (i8)(intptr_t)(ws+64);
	i8 v10996 = *(i8*)(intptr_t)v10995;
	i8 v10997 = v10996+(+16);
	i1 v10998 = *(i1*)(intptr_t)v10997;
	i8 v10999 = (i8)(intptr_t)(f155_MidEndcase);
	i8 v11000;

	((void(*)(i8* /* m */, i1 /* width */))(intptr_t)v10999)(&v11000, v10998);
	i8 v11001 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11001)(v11000);

	i8 v11002 = (i8)(intptr_t)(ws+64);
	i8 v11003 = *(i8*)(intptr_t)v11002;
	i8 v11004 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v11004 = v11003;

	i8 v11005 = (i8)(intptr_t)(ws+3840);
	i8 v11006 = *(i8*)(intptr_t)v11005;
	i8 v11007 = v11006+(+8);
	i8 v11008 = *(i8*)(intptr_t)v11007;
	i8 v11009 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v11009 = v11008;

	i8 v11010 = (i8)(intptr_t)(ws+3840);
	i8 v11011 = *(i8*)(intptr_t)v11010;
	i8 v11012 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v11012)(v11011);

	i1 v11013 = (i1)+10;
	i8 v11014 = (i8)(intptr_t)(ws+3776);
	i8 v11015 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11015)(v11014, v11013);

	i1 v11016 = (i1)+64;
	i8 v11017 = (i8)(intptr_t)(ws+3768);
	i8 v11018 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11018)(v11017, v11016);

	i1 v11019 = (i1)+22;
	i8 v11020 = (i8)(intptr_t)(ws+3760);
	i8 v11021 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11021)(v11020, v11019);

endsub:;
}
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f229_AllocLabel(i2* /* label */);
	void f223_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s01db[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f158_NodeWidth(i1* /* width */, i8 /* node */);
	void f105_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_16 workspace at ws+3840 length ws+8
void f531_reduce_16(void) {

	i8 v11022 = (i8)+18;
	i8 v11023 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v11024;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v11023)(&v11024, v11022);
	i8 v11025 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v11025 = v11024;

	i8 v11026 = (i8)(intptr_t)(ws+64);
	i8 v11027 = *(i8*)(intptr_t)v11026;
	i8 v11028 = (i8)(intptr_t)(ws+3840);
	i8 v11029 = *(i8*)(intptr_t)v11028;
	i8 v11030 = v11029+(+8);
	*(i8*)(intptr_t)v11030 = v11027;

	i8 v11031 = (i8)(intptr_t)(ws+52);
	i2 v11032 = *(i2*)(intptr_t)v11031;
	i8 v11033 = (i8)(intptr_t)(ws+3840);
	i8 v11034 = *(i8*)(intptr_t)v11033;
	i8 v11035 = v11034+(+4);
	*(i2*)(intptr_t)v11035 = v11032;

	i8 v11036 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v11037;

	((void(*)(i2* /* label */))(intptr_t)v11036)(&v11037);
	i8 v11038 = (i8)(intptr_t)(ws+3840);
	i8 v11039 = *(i8*)(intptr_t)v11038;
	i8 v11040 = v11039+(+2);
	*(i2*)(intptr_t)v11040 = v11037;

	i8 v11041 = (i8)(intptr_t)(ws+3840);
	i8 v11042 = *(i8*)(intptr_t)v11041;
	i8 v11043 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v11043 = v11042;

	i8 v11044 = (i8)(intptr_t)(ws+3768);
	i8 v11045 = *(i8*)(intptr_t)v11044;
	i8 v11046 = v11045+(+16);
	i8 v11047 = *(i8*)(intptr_t)v11046;
	i8 v11048 = (i8)(intptr_t)(f223_IsNum);
	i1 v11049;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11048)(&v11049, v11047);
	i1 v11050 = (i1)+0;
	if (v11049==v11050) goto c02_0806; else goto c02_0807;

c02_0806:;

	i8 v11051 = (i8)(intptr_t)c02_s01db;
	i8 v11052 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11052)(v11051);

	goto c02_0803;

c02_0807:;

c02_0803:;

	i8 v11053 = (i8)(intptr_t)(ws+3768);
	i8 v11054 = *(i8*)(intptr_t)v11053;
	i8 v11055 = (i8)(intptr_t)(f158_NodeWidth);
	i1 v11056;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v11055)(&v11056, v11054);
	i8 v11057 = (i8)(intptr_t)(ws+3840);
	i8 v11058 = *(i8*)(intptr_t)v11057;
	i8 v11059 = v11058+(+16);
	*(i1*)(intptr_t)v11059 = v11056;

	i8 v11060 = (i8)(intptr_t)(ws+3840);
	i8 v11061 = *(i8*)(intptr_t)v11060;
	i8 v11062 = v11061+(+16);
	i1 v11063 = *(i1*)(intptr_t)v11062;
	i8 v11064 = (i8)(intptr_t)(ws+3768);
	i8 v11065 = *(i8*)(intptr_t)v11064;
	i8 v11066 = (i8)(intptr_t)(f105_MidStartcase);
	i8 v11067;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v11066)(&v11067, v11065, v11063);
	i8 v11068 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11068)(v11067);

	i1 v11069 = (i1)+65;
	i8 v11070 = (i8)(intptr_t)(ws+3760);
	i8 v11071 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11071)(v11070, v11069);

endsub:;
}
const i1 c02_s01dc[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f71_SimpleError(i8 /* message */);
	void f106_MidJump(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f229_AllocLabel(i2* /* label */);
	void f150_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_17 workspace at ws+3840 length ws+0
void f532_reduce_17(void) {

	i8 v11072 = (i8)(intptr_t)(ws+64);
	i8 v11073 = *(i8*)(intptr_t)v11072;
	i8 v11074 = v11073+(+17);
	i1 v11075 = *(i1*)(intptr_t)v11074;
	i1 v11076 = (i1)+0;
	if (v11075==v11076) goto c02_080c; else goto c02_080b;

c02_080b:;

	i8 v11077 = (i8)(intptr_t)c02_s01dc;
	i8 v11078 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11078)(v11077);

	goto c02_0808;

c02_080c:;

c02_0808:;

	i8 v11079 = (i8)(intptr_t)(ws+64);
	i8 v11080 = *(i8*)(intptr_t)v11079;
	i2 v11081 = *(i2*)(intptr_t)v11080;
	i2 v11082 = (i2)+0;
	if (v11081==v11082) goto c02_0811; else goto c02_0810;

c02_0810:;

	i8 v11083 = (i8)(intptr_t)(ws+64);
	i8 v11084 = *(i8*)(intptr_t)v11083;
	i8 v11085 = v11084+(+2);
	i2 v11086 = *(i2*)(intptr_t)v11085;
	i8 v11087 = (i8)(intptr_t)(f106_MidJump);
	i8 v11088;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v11087)(&v11088, v11086);
	i8 v11089 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11089)(v11088);

	i8 v11090 = (i8)(intptr_t)(ws+64);
	i8 v11091 = *(i8*)(intptr_t)v11090;
	i2 v11092 = *(i2*)(intptr_t)v11091;
	i8 v11093 = (i8)(intptr_t)(f116_MidLabel);
	i8 v11094;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v11093)(&v11094, v11092);
	i8 v11095 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11095)(v11094);

	goto c02_080d;

c02_0811:;

c02_080d:;

	i8 v11096 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v11097;

	((void(*)(i2* /* label */))(intptr_t)v11096)(&v11097);
	i8 v11098 = (i8)(intptr_t)(ws+64);
	i8 v11099 = *(i8*)(intptr_t)v11098;
	*(i2*)(intptr_t)v11099 = v11097;

	i8 v11100 = (i8)(intptr_t)(ws+64);
	i8 v11101 = *(i8*)(intptr_t)v11100;
	i8 v11102 = v11101+(+16);
	i1 v11103 = *(i1*)(intptr_t)v11102;
	i8 v11104 = (i8)(intptr_t)(ws+3768);
	i4 v11105 = *(i4*)(intptr_t)v11104;
	i8 v11106 = (i8)(intptr_t)(ws+64);
	i8 v11107 = *(i8*)(intptr_t)v11106;
	i2 v11108 = *(i2*)(intptr_t)v11107;
	i8 v11109 = (i8)(intptr_t)(f150_MidWhencase);
	i8 v11110;

	((void(*)(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */))(intptr_t)v11109)(&v11110, v11108, v11105, v11103);
	i8 v11111 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11111)(v11110);

	i1 v11112 = (i1)+6;
	i8 v11113 = (i8)(intptr_t)(ws+3760);
	i8 v11114 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11114)(v11113, v11112);

endsub:;
}
const i1 c02_s01dd[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f106_MidJump(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f116_MidLabel(i8* /* m */, i2 /* label */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_18 workspace at ws+3840 length ws+0
void f533_reduce_18(void) {

	i8 v11115 = (i8)(intptr_t)(ws+64);
	i8 v11116 = *(i8*)(intptr_t)v11115;
	i8 v11117 = v11116+(+17);
	i1 v11118 = *(i1*)(intptr_t)v11117;
	i1 v11119 = (i1)+0;
	if (v11118==v11119) goto c02_0816; else goto c02_0815;

c02_0815:;

	i8 v11120 = (i8)(intptr_t)c02_s01dd;
	i8 v11121 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11121)(v11120);

	goto c02_0812;

c02_0816:;

c02_0812:;

	i8 v11122 = (i8)(intptr_t)(ws+64);
	i8 v11123 = *(i8*)(intptr_t)v11122;
	i2 v11124 = *(i2*)(intptr_t)v11123;
	i2 v11125 = (i2)+0;
	if (v11124==v11125) goto c02_081b; else goto c02_081a;

c02_081a:;

	i8 v11126 = (i8)(intptr_t)(ws+64);
	i8 v11127 = *(i8*)(intptr_t)v11126;
	i8 v11128 = v11127+(+2);
	i2 v11129 = *(i2*)(intptr_t)v11128;
	i8 v11130 = (i8)(intptr_t)(f106_MidJump);
	i8 v11131;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v11130)(&v11131, v11129);
	i8 v11132 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11132)(v11131);

	i8 v11133 = (i8)(intptr_t)(ws+64);
	i8 v11134 = *(i8*)(intptr_t)v11133;
	i2 v11135 = *(i2*)(intptr_t)v11134;
	i8 v11136 = (i8)(intptr_t)(f116_MidLabel);
	i8 v11137;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v11136)(&v11137, v11135);
	i8 v11138 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11138)(v11137);

	goto c02_0817;

c02_081b:;

c02_0817:;

	i2 v11139 = (i2)+0;
	i8 v11140 = (i8)(intptr_t)(ws+64);
	i8 v11141 = *(i8*)(intptr_t)v11140;
	*(i2*)(intptr_t)v11141 = v11139;

	i1 v11142 = (i1)+1;
	i8 v11143 = (i8)(intptr_t)(ws+64);
	i8 v11144 = *(i8*)(intptr_t)v11143;
	i8 v11145 = v11144+(+17);
	*(i1*)(intptr_t)v11145 = v11142;

	i1 v11146 = (i1)+9;
	i8 v11147 = (i8)(intptr_t)(ws+3768);
	i8 v11148 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11148)(v11147, v11146);

	i1 v11149 = (i1)+6;
	i8 v11150 = (i8)(intptr_t)(ws+3760);
	i8 v11151 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11151)(v11150, v11149);

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_19 workspace at ws+3840 length ws+0
void f534_reduce_19(void) {

	i8 v11152 = (i8)(intptr_t)(ws+3768);
	i8 v11153 = *(i8*)(intptr_t)v11152;
	i8 v11154 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11154 = v11153;

	i1 v11155 = (i1)+4;
	i8 v11156 = (i8)(intptr_t)(ws+3760);
	i8 v11157 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11157)(v11156, v11155);

endsub:;
}
	void f493_Negate(i8 /* node */);

// reduce_20 workspace at ws+3840 length ws+0
void f535_reduce_20(void) {

	i8 v11158 = (i8)(intptr_t)(ws+3760);
	i8 v11159 = *(i8*)(intptr_t)v11158;
	i8 v11160 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11160 = v11159;

	i8 v11161 = (i8)(intptr_t)(ws+3760);
	i8 v11162 = *(i8*)(intptr_t)v11161;
	i8 v11163 = (i8)(intptr_t)(f493_Negate);

	((void(*)(i8 /* node */))(intptr_t)v11163)(v11162);

endsub:;
}
	void f141_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_21 workspace at ws+3840 length ws+0
void f536_reduce_21(void) {

	i8 v11164 = (i8)(intptr_t)(ws+3776);
	i8 v11165 = *(i8*)(intptr_t)v11164;
	i8 v11166 = (i8)(intptr_t)(ws+3760);
	i8 v11167 = *(i8*)(intptr_t)v11166;
	i2 v11168 = (i2)+0;
	i2 v11169 = (i2)+0;
	i2 v11170 = (i2)+0;
	i1 v11171 = (i1)+0;
	i8 v11172 = (i8)(intptr_t)(f141_MidBand);
	i8 v11173;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v11172)(&v11173, v11171, v11170, v11169, v11168, v11167, v11165);
	i8 v11174 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11174 = v11173;

	i1 v11175 = (i1)+46;
	i8 v11176 = (i8)(intptr_t)(ws+3768);
	i8 v11177 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11177)(v11176, v11175);

endsub:;
}
	void f128_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_22 workspace at ws+3840 length ws+0
void f537_reduce_22(void) {

	i8 v11178 = (i8)(intptr_t)(ws+3776);
	i8 v11179 = *(i8*)(intptr_t)v11178;
	i8 v11180 = (i8)(intptr_t)(ws+3760);
	i8 v11181 = *(i8*)(intptr_t)v11180;
	i2 v11182 = (i2)+0;
	i2 v11183 = (i2)+0;
	i2 v11184 = (i2)+0;
	i1 v11185 = (i1)+0;
	i8 v11186 = (i8)(intptr_t)(f128_MidBor);
	i8 v11187;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v11186)(&v11187, v11185, v11184, v11183, v11182, v11181, v11179);
	i8 v11188 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11188 = v11187;

	i1 v11189 = (i1)+47;
	i8 v11190 = (i8)(intptr_t)(ws+3768);
	i8 v11191 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11191)(v11190, v11189);

endsub:;
}
	void f494_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_23 workspace at ws+3840 length ws+0
void f538_reduce_23(void) {

	i8 v11192 = (i8)(intptr_t)(ws+3776);
	i8 v11193 = *(i8*)(intptr_t)v11192;
	i8 v11194 = (i8)(intptr_t)(ws+3760);
	i8 v11195 = *(i8*)(intptr_t)v11194;
	i1 v11196 = (i1)+0;
	i8 v11197 = (i8)(intptr_t)(f494_ConditionalEq);
	i8 v11198;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11197)(&v11198, v11196, v11195, v11193);
	i8 v11199 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11199 = v11198;

	i1 v11200 = (i1)+54;
	i8 v11201 = (i8)(intptr_t)(ws+3768);
	i8 v11202 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11202)(v11201, v11200);

endsub:;
}
	void f494_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_24 workspace at ws+3840 length ws+0
void f539_reduce_24(void) {

	i8 v11203 = (i8)(intptr_t)(ws+3776);
	i8 v11204 = *(i8*)(intptr_t)v11203;
	i8 v11205 = (i8)(intptr_t)(ws+3760);
	i8 v11206 = *(i8*)(intptr_t)v11205;
	i1 v11207 = (i1)+1;
	i8 v11208 = (i8)(intptr_t)(f494_ConditionalEq);
	i8 v11209;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11208)(&v11209, v11207, v11206, v11204);
	i8 v11210 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11210 = v11209;

	i1 v11211 = (i1)+55;
	i8 v11212 = (i8)(intptr_t)(ws+3768);
	i8 v11213 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11213)(v11212, v11211);

endsub:;
}
	void f495_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_25 workspace at ws+3840 length ws+0
void f540_reduce_25(void) {

	i8 v11214 = (i8)(intptr_t)(ws+3776);
	i8 v11215 = *(i8*)(intptr_t)v11214;
	i8 v11216 = (i8)(intptr_t)(ws+3760);
	i8 v11217 = *(i8*)(intptr_t)v11216;
	i1 v11218 = (i1)+0;
	i8 v11219 = (i8)(intptr_t)(f495_ConditionalLt);
	i8 v11220;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11219)(&v11220, v11218, v11217, v11215);
	i8 v11221 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11221 = v11220;

	i1 v11222 = (i1)+50;
	i8 v11223 = (i8)(intptr_t)(ws+3768);
	i8 v11224 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11224)(v11223, v11222);

endsub:;
}
	void f495_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_26 workspace at ws+3840 length ws+0
void f541_reduce_26(void) {

	i8 v11225 = (i8)(intptr_t)(ws+3776);
	i8 v11226 = *(i8*)(intptr_t)v11225;
	i8 v11227 = (i8)(intptr_t)(ws+3760);
	i8 v11228 = *(i8*)(intptr_t)v11227;
	i1 v11229 = (i1)+1;
	i8 v11230 = (i8)(intptr_t)(f495_ConditionalLt);
	i8 v11231;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11230)(&v11231, v11229, v11228, v11226);
	i8 v11232 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11232 = v11231;

	i1 v11233 = (i1)+53;
	i8 v11234 = (i8)(intptr_t)(ws+3768);
	i8 v11235 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11235)(v11234, v11233);

endsub:;
}
	void f495_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_27 workspace at ws+3840 length ws+0
void f542_reduce_27(void) {

	i8 v11236 = (i8)(intptr_t)(ws+3760);
	i8 v11237 = *(i8*)(intptr_t)v11236;
	i8 v11238 = (i8)(intptr_t)(ws+3776);
	i8 v11239 = *(i8*)(intptr_t)v11238;
	i1 v11240 = (i1)+0;
	i8 v11241 = (i8)(intptr_t)(f495_ConditionalLt);
	i8 v11242;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11241)(&v11242, v11240, v11239, v11237);
	i8 v11243 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11243 = v11242;

	i1 v11244 = (i1)+52;
	i8 v11245 = (i8)(intptr_t)(ws+3768);
	i8 v11246 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11246)(v11245, v11244);

endsub:;
}
	void f495_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_28 workspace at ws+3840 length ws+0
void f543_reduce_28(void) {

	i8 v11247 = (i8)(intptr_t)(ws+3760);
	i8 v11248 = *(i8*)(intptr_t)v11247;
	i8 v11249 = (i8)(intptr_t)(ws+3776);
	i8 v11250 = *(i8*)(intptr_t)v11249;
	i1 v11251 = (i1)+1;
	i8 v11252 = (i8)(intptr_t)(f495_ConditionalLt);
	i8 v11253;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11252)(&v11253, v11251, v11250, v11248);
	i8 v11254 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11254 = v11253;

	i1 v11255 = (i1)+51;
	i8 v11256 = (i8)(intptr_t)(ws+3768);
	i8 v11257 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11257)(v11256, v11255);

endsub:;
}
	void f142_MidConstant(i8* /* m */, i4 /* value */);

// reduce_29 workspace at ws+3840 length ws+0
void f544_reduce_29(void) {

	i8 v11258 = (i8)(intptr_t)(ws+3760);
	i4 v11259 = *(i4*)(intptr_t)v11258;
	i8 v11260 = (i8)(intptr_t)(f142_MidConstant);
	i8 v11261;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11260)(&v11261, v11259);
	i8 v11262 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11262 = v11261;

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_30 workspace at ws+3840 length ws+0
void f545_reduce_30(void) {

	i8 v11263 = (i8)(intptr_t)(ws+3768);
	i8 v11264 = *(i8*)(intptr_t)v11263;
	i8 v11265 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11265 = v11264;

	i1 v11266 = (i1)+4;
	i8 v11267 = (i8)(intptr_t)(ws+3760);
	i8 v11268 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11268)(v11267, v11266);

endsub:;
}

// reduce_31 workspace at ws+3840 length ws+0
void f546_reduce_31(void) {

	i8 v11269 = (i8)(intptr_t)(ws+3760);
	i8 v11270 = *(i8*)(intptr_t)v11269;
	i8 v11271 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11271 = v11270;

endsub:;
}
	void f482_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_32 workspace at ws+3840 length ws+0
void f547_reduce_32(void) {

	i1 v11272 = (i1)+113;
	i8 v11273 = (i8)(intptr_t)(ws+3760);
	i8 v11274 = *(i8*)(intptr_t)v11273;
	i8 v11275 = (i8)(intptr_t)(f482_Expr1Simple);
	i8 v11276;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v11275)(&v11276, v11274, v11272);
	i8 v11277 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11277 = v11276;

endsub:;
}
	void f482_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_33 workspace at ws+3840 length ws+0
void f548_reduce_33(void) {

	i1 v11278 = (i1)+108;
	i8 v11279 = (i8)(intptr_t)(ws+3760);
	i8 v11280 = *(i8*)(intptr_t)v11279;
	i8 v11281 = (i8)(intptr_t)(f482_Expr1Simple);
	i8 v11282;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v11281)(&v11282, v11280, v11278);
	i8 v11283 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11283 = v11282;

endsub:;
}
	void f483_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_34 workspace at ws+3840 length ws+0
void f549_reduce_34(void) {

	i8 v11284 = (i8)(intptr_t)(ws+3776);
	i8 v11285 = *(i8*)(intptr_t)v11284;
	i8 v11286 = (i8)(intptr_t)(ws+3760);
	i8 v11287 = *(i8*)(intptr_t)v11286;
	i8 v11288 = (i8)(intptr_t)(f483_ExprAdd);
	i8 v11289;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11288)(&v11289, v11287, v11285);
	i8 v11290 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11290 = v11289;

	i1 v11291 = (i1)+19;
	i8 v11292 = (i8)(intptr_t)(ws+3768);
	i8 v11293 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11293)(v11292, v11291);

endsub:;
}
	void f485_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_35 workspace at ws+3840 length ws+0
void f550_reduce_35(void) {

	i8 v11294 = (i8)(intptr_t)(ws+3776);
	i8 v11295 = *(i8*)(intptr_t)v11294;
	i8 v11296 = (i8)(intptr_t)(ws+3760);
	i8 v11297 = *(i8*)(intptr_t)v11296;
	i8 v11298 = (i8)(intptr_t)(f485_ExprSub);
	i8 v11299;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11298)(&v11299, v11297, v11295);
	i8 v11300 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11300 = v11299;

	i1 v11301 = (i1)+14;
	i8 v11302 = (i8)(intptr_t)(ws+3768);
	i8 v11303 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11303)(v11302, v11301);

endsub:;
}
	void f487_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_36 workspace at ws+3840 length ws+0
void f551_reduce_36(void) {

	i1 v11304 = (i1)+163;
	i1 v11305 = (i1)+163;
	i8 v11306 = (i8)(intptr_t)(ws+3776);
	i8 v11307 = *(i8*)(intptr_t)v11306;
	i8 v11308 = (i8)(intptr_t)(ws+3760);
	i8 v11309 = *(i8*)(intptr_t)v11308;
	i8 v11310 = (i8)(intptr_t)(f487_Expr2Simple);
	i8 v11311;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11310)(&v11311, v11309, v11307, v11305, v11304);
	i8 v11312 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11312 = v11311;

	i1 v11313 = (i1)+24;
	i8 v11314 = (i8)(intptr_t)(ws+3768);
	i8 v11315 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11315)(v11314, v11313);

endsub:;
}
	void f487_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_37 workspace at ws+3840 length ws+0
void f552_reduce_37(void) {

	i1 v11316 = (i1)+143;
	i1 v11317 = (i1)+138;
	i8 v11318 = (i8)(intptr_t)(ws+3776);
	i8 v11319 = *(i8*)(intptr_t)v11318;
	i8 v11320 = (i8)(intptr_t)(ws+3760);
	i8 v11321 = *(i8*)(intptr_t)v11320;
	i8 v11322 = (i8)(intptr_t)(f487_Expr2Simple);
	i8 v11323;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11322)(&v11323, v11321, v11319, v11317, v11316);
	i8 v11324 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11324 = v11323;

	i1 v11325 = (i1)+23;
	i8 v11326 = (i8)(intptr_t)(ws+3768);
	i8 v11327 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11327)(v11326, v11325);

endsub:;
}
	void f487_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_38 workspace at ws+3840 length ws+0
void f553_reduce_38(void) {

	i1 v11328 = (i1)+153;
	i1 v11329 = (i1)+148;
	i8 v11330 = (i8)(intptr_t)(ws+3776);
	i8 v11331 = *(i8*)(intptr_t)v11330;
	i8 v11332 = (i8)(intptr_t)(ws+3760);
	i8 v11333 = *(i8*)(intptr_t)v11332;
	i8 v11334 = (i8)(intptr_t)(f487_Expr2Simple);
	i8 v11335;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11334)(&v11335, v11333, v11331, v11329, v11328);
	i8 v11336 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11336 = v11335;

	i1 v11337 = (i1)+18;
	i8 v11338 = (i8)(intptr_t)(ws+3768);
	i8 v11339 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11339)(v11338, v11337);

endsub:;
}
	void f487_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_39 workspace at ws+3840 length ws+0
void f554_reduce_39(void) {

	i1 v11340 = (i1)+178;
	i1 v11341 = (i1)+178;
	i8 v11342 = (i8)(intptr_t)(ws+3776);
	i8 v11343 = *(i8*)(intptr_t)v11342;
	i8 v11344 = (i8)(intptr_t)(ws+3760);
	i8 v11345 = *(i8*)(intptr_t)v11344;
	i8 v11346 = (i8)(intptr_t)(f487_Expr2Simple);
	i8 v11347;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11346)(&v11347, v11345, v11343, v11341, v11340);
	i8 v11348 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11348 = v11347;

	i1 v11349 = (i1)+49;
	i8 v11350 = (i8)(intptr_t)(ws+3768);
	i8 v11351 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11351)(v11350, v11349);

endsub:;
}
	void f487_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_40 workspace at ws+3840 length ws+0
void f555_reduce_40(void) {

	i1 v11352 = (i1)+168;
	i1 v11353 = (i1)+168;
	i8 v11354 = (i8)(intptr_t)(ws+3776);
	i8 v11355 = *(i8*)(intptr_t)v11354;
	i8 v11356 = (i8)(intptr_t)(ws+3760);
	i8 v11357 = *(i8*)(intptr_t)v11356;
	i8 v11358 = (i8)(intptr_t)(f487_Expr2Simple);
	i8 v11359;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11358)(&v11359, v11357, v11355, v11353, v11352);
	i8 v11360 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11360 = v11359;

	i1 v11361 = (i1)+59;
	i8 v11362 = (i8)(intptr_t)(ws+3768);
	i8 v11363 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11363)(v11362, v11361);

endsub:;
}
	void f487_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_41 workspace at ws+3840 length ws+0
void f556_reduce_41(void) {

	i1 v11364 = (i1)+173;
	i1 v11365 = (i1)+173;
	i8 v11366 = (i8)(intptr_t)(ws+3776);
	i8 v11367 = *(i8*)(intptr_t)v11366;
	i8 v11368 = (i8)(intptr_t)(ws+3760);
	i8 v11369 = *(i8*)(intptr_t)v11368;
	i8 v11370 = (i8)(intptr_t)(f487_Expr2Simple);
	i8 v11371;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11370)(&v11371, v11369, v11367, v11365, v11364);
	i8 v11372 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11372 = v11371;

	i1 v11373 = (i1)+48;
	i8 v11374 = (i8)(intptr_t)(ws+3768);
	i8 v11375 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11375)(v11374, v11373);

endsub:;
}
	void f490_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_42 workspace at ws+3840 length ws+0
void f557_reduce_42(void) {

	i1 v11376 = (i1)+118;
	i1 v11377 = (i1)+118;
	i8 v11378 = (i8)(intptr_t)(ws+3776);
	i8 v11379 = *(i8*)(intptr_t)v11378;
	i8 v11380 = (i8)(intptr_t)(ws+3760);
	i8 v11381 = *(i8*)(intptr_t)v11380;
	i8 v11382 = (i8)(intptr_t)(f490_ExprShift);
	i8 v11383;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11382)(&v11383, v11381, v11379, v11377, v11376);
	i8 v11384 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11384 = v11383;

	i1 v11385 = (i1)+56;
	i8 v11386 = (i8)(intptr_t)(ws+3768);
	i8 v11387 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11387)(v11386, v11385);

endsub:;
}
	void f490_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_43 workspace at ws+3840 length ws+0
void f558_reduce_43(void) {

	i1 v11388 = (i1)+128;
	i1 v11389 = (i1)+123;
	i8 v11390 = (i8)(intptr_t)(ws+3776);
	i8 v11391 = *(i8*)(intptr_t)v11390;
	i8 v11392 = (i8)(intptr_t)(ws+3760);
	i8 v11393 = *(i8*)(intptr_t)v11392;
	i8 v11394 = (i8)(intptr_t)(f490_ExprShift);
	i8 v11395;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11394)(&v11395, v11393, v11391, v11389, v11388);
	i8 v11396 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11396 = v11395;

	i1 v11397 = (i1)+57;
	i8 v11398 = (i8)(intptr_t)(ws+3768);
	i8 v11399 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11399)(v11398, v11397);

endsub:;
}
	void f216_CheckNotPartialType(i8 /* type */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01de[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f224_IsSNum(i1* /* result */, i8 /* type */);
	void f165_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_44 workspace at ws+3840 length ws+0
void f559_reduce_44(void) {

	i8 v11400 = (i8)(intptr_t)(ws+3760);
	i8 v11401 = *(i8*)(intptr_t)v11400;
	i8 v11402 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11402)(v11401);

	i8 v11403 = (i8)(intptr_t)(ws+3776);
	i8 v11404 = *(i8*)(intptr_t)v11403;
	i8 v11405 = v11404+(+58);
	i1 v11406 = *(i1*)(intptr_t)v11405;
	i1 v11407 = (i1)+43;
	if (v11406==v11407) goto c02_0822; else goto c02_0823;

c02_0823:;

	i8 v11408 = (i8)(intptr_t)(ws+3776);
	i8 v11409 = *(i8*)(intptr_t)v11408;
	i8 v11410 = v11409+(+16);
	i8 v11411 = *(i8*)(intptr_t)v11410;
	i8 v11412 = v11411+(+48);
	i2 v11413 = *(i2*)(intptr_t)v11412;
	i8 v11414 = (i8)(intptr_t)(ws+3760);
	i8 v11415 = *(i8*)(intptr_t)v11414;
	i8 v11416 = v11415+(+48);
	i2 v11417 = *(i2*)(intptr_t)v11416;
	if (v11413==v11417) goto c02_0822; else goto c02_0821;

c02_0821:;

	i8 v11418 = (i8)(intptr_t)(ws+3776);
	i8 v11419 = *(i8*)(intptr_t)v11418;
	i8 v11420 = v11419+(+16);
	i8 v11421 = *(i8*)(intptr_t)v11420;
	i8 v11422 = (i8)(intptr_t)(f221_IsPtr);
	i1 v11423;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11422)(&v11423, v11421);
	i1 v11424 = (i1)+0;
	if (v11423==v11424) goto c02_082b; else goto c02_0829;

c02_082b:;

	i8 v11425 = (i8)(intptr_t)(ws+3760);
	i8 v11426 = *(i8*)(intptr_t)v11425;
	i8 v11427 = (i8)(intptr_t)(f221_IsPtr);
	i1 v11428;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11427)(&v11428, v11426);
	i1 v11429 = (i1)+0;
	if (v11428==v11429) goto c02_082a; else goto c02_0829;

c02_0829:;

	i8 v11430 = (i8)(intptr_t)c02_s01de;
	i8 v11431 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11431)(v11430);

	goto c02_0824;

c02_082a:;

c02_0824:;

	i8 v11432 = (i8)(intptr_t)(ws+3760);
	i8 v11433 = *(i8*)(intptr_t)v11432;
	i8 v11434 = v11433+(+48);
	i2 v11435 = *(i2*)(intptr_t)v11434;
	i1 v11436 = v11435;
	i8 v11437 = (i8)(intptr_t)(ws+3776);
	i8 v11438 = *(i8*)(intptr_t)v11437;
	i8 v11439 = (i8)(intptr_t)(ws+3776);
	i8 v11440 = *(i8*)(intptr_t)v11439;
	i8 v11441 = v11440+(+16);
	i8 v11442 = *(i8*)(intptr_t)v11441;
	i8 v11443 = (i8)(intptr_t)(f224_IsSNum);
	i1 v11444;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11443)(&v11444, v11442);
	i8 v11445 = (i8)(intptr_t)(f165_MidCCast);
	i8 v11446;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v11445)(&v11446, v11444, v11438, v11436);
	i8 v11447 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11447 = v11446;

	goto c02_081c;

c02_0822:;

	i8 v11448 = (i8)(intptr_t)(ws+3776);
	i8 v11449 = *(i8*)(intptr_t)v11448;
	i8 v11450 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11450 = v11449;

c02_081c:;

	i8 v11451 = (i8)(intptr_t)(ws+3760);
	i8 v11452 = *(i8*)(intptr_t)v11451;
	i8 v11453 = (i8)(intptr_t)(ws+3752);
	i8 v11454 = *(i8*)(intptr_t)v11453;
	i8 v11455 = v11454+(+16);
	*(i8*)(intptr_t)v11455 = v11452;

	i1 v11456 = (i1)+58;
	i8 v11457 = (i8)(intptr_t)(ws+3768);
	i8 v11458 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11458)(v11457, v11456);

endsub:;
}
	void f228_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f225_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s01df[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// reduce_45 workspace at ws+3840 length ws+8
void f560_reduce_45(void) {

	i8 v11459 = (i8)(intptr_t)(ws+3760);
	i8 v11460 = *(i8*)(intptr_t)v11459;
	i8 v11461 = (i8)(intptr_t)(f228_UndoLValue);
	i8 v11462;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11461)(&v11462, v11460);
	i8 v11463 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11463 = v11462;

	i8 v11464 = (i8)(intptr_t)(ws+3752);
	i8 v11465 = *(i8*)(intptr_t)v11464;
	i8 v11466 = v11465+(+58);
	i1 v11467 = *(i1*)(intptr_t)v11466;
	i1 v11468 = (i1)+45;
	if (v11467==v11468) goto c02_082f; else goto c02_0830;

c02_082f:;

	i8 v11469 = (i8)(intptr_t)(ws+3752);
	i8 v11470 = *(i8*)(intptr_t)v11469;
	i8 v11471 = *(i8*)(intptr_t)v11470;
	i8 v11472 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v11472 = v11471;

	i8 v11473 = (i8)(intptr_t)(ws+3840);
	i8 v11474 = *(i8*)(intptr_t)v11473;
	i8 v11475 = *(i8*)(intptr_t)v11474;
	i8 v11476 = *(i8*)(intptr_t)v11475;
	i8 v11477 = (i8)(intptr_t)(f225_IsScalar);
	i1 v11478;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11477)(&v11478, v11476);
	i1 v11479 = (i1)+0;
	if (v11478==v11479) goto c02_0835; else goto c02_0834;

c02_0834:;

	i8 v11480 = (i8)(intptr_t)c02_s01df;
	i8 v11481 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11481)(v11480);

	goto c02_0831;

c02_0835:;

c02_0831:;

	goto c02_082c;

c02_0830:;

c02_082c:;

endsub:;
}
	void f228_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_46 workspace at ws+3840 length ws+0
void f561_reduce_46(void) {

	i8 v11482 = (i8)(intptr_t)(ws+3760);
	i8 v11483 = *(i8*)(intptr_t)v11482;
	i8 v11484 = (i8)(intptr_t)(f228_UndoLValue);
	i8 v11485;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11484)(&v11485, v11483);
	i8 v11486 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11486 = v11485;

	i1 v11487 = (i1)+59;
	i8 v11488 = (i8)(intptr_t)(ws+3768);
	i8 v11489 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11489)(v11488, v11487);

endsub:;
}
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f496_parser_i_bad_next_prev(void);
	void f142_MidConstant(i8* /* m */, i4 /* value */);
	void f164_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_47 workspace at ws+3840 length ws+0
void f562_reduce_47(void) {

	i8 v11490 = (i8)(intptr_t)(ws+3760);
	i8 v11491 = *(i8*)(intptr_t)v11490;
	i8 v11492 = v11491+(+16);
	i8 v11493 = *(i8*)(intptr_t)v11492;
	i8 v11494 = (i8)(intptr_t)(f221_IsPtr);
	i1 v11495;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11494)(&v11495, v11493);
	i1 v11496 = (i1)+0;
	if (v11495==v11496) goto c02_0839; else goto c02_083a;

c02_0839:;

	i8 v11497 = (i8)(intptr_t)(f496_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v11497)();

	goto c02_0836;

c02_083a:;

c02_0836:;

	i1 v11498 = (i1)+158;
	i8 v11499 = (i8)(intptr_t)(ws+1904);
	i8 v11500 = *(i8*)(intptr_t)v11499;
	i8 v11501 = v11500+(+48);
	i2 v11502 = *(i2*)(intptr_t)v11501;
	i1 v11503 = v11502;
	i8 v11504 = (i8)(intptr_t)(ws+3760);
	i8 v11505 = *(i8*)(intptr_t)v11504;
	i8 v11506 = (i8)(intptr_t)(ws+3760);
	i8 v11507 = *(i8*)(intptr_t)v11506;
	i8 v11508 = v11507+(+16);
	i8 v11509 = *(i8*)(intptr_t)v11508;
	i8 v11510 = *(i8*)(intptr_t)v11509;
	i8 v11511 = v11510+(+50);
	i2 v11512 = *(i2*)(intptr_t)v11511;
	i4 v11513 = v11512;
	i8 v11514 = (i8)(intptr_t)(f142_MidConstant);
	i8 v11515;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11514)(&v11515, v11513);
	i8 v11516 = (i8)(intptr_t)(f164_MidC2Op);
	i8 v11517;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11516)(&v11517, v11515, v11505, v11503, v11498);
	i8 v11518 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11518 = v11517;

	i8 v11519 = (i8)(intptr_t)(ws+3760);
	i8 v11520 = *(i8*)(intptr_t)v11519;
	i8 v11521 = v11520+(+16);
	i8 v11522 = *(i8*)(intptr_t)v11521;
	i8 v11523 = (i8)(intptr_t)(ws+3752);
	i8 v11524 = *(i8*)(intptr_t)v11523;
	i8 v11525 = v11524+(+16);
	*(i8*)(intptr_t)v11525 = v11522;

endsub:;
}
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f496_parser_i_bad_next_prev(void);
	void f142_MidConstant(i8* /* m */, i4 /* value */);
	void f164_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_48 workspace at ws+3840 length ws+0
void f563_reduce_48(void) {

	i8 v11526 = (i8)(intptr_t)(ws+3760);
	i8 v11527 = *(i8*)(intptr_t)v11526;
	i8 v11528 = v11527+(+16);
	i8 v11529 = *(i8*)(intptr_t)v11528;
	i8 v11530 = (i8)(intptr_t)(f221_IsPtr);
	i1 v11531;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11530)(&v11531, v11529);
	i1 v11532 = (i1)+0;
	if (v11531==v11532) goto c02_083e; else goto c02_083f;

c02_083e:;

	i8 v11533 = (i8)(intptr_t)(f496_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v11533)();

	goto c02_083b;

c02_083f:;

c02_083b:;

	i1 v11534 = (i1)+133;
	i8 v11535 = (i8)(intptr_t)(ws+1904);
	i8 v11536 = *(i8*)(intptr_t)v11535;
	i8 v11537 = v11536+(+48);
	i2 v11538 = *(i2*)(intptr_t)v11537;
	i1 v11539 = v11538;
	i8 v11540 = (i8)(intptr_t)(ws+3760);
	i8 v11541 = *(i8*)(intptr_t)v11540;
	i8 v11542 = (i8)(intptr_t)(ws+3760);
	i8 v11543 = *(i8*)(intptr_t)v11542;
	i8 v11544 = v11543+(+16);
	i8 v11545 = *(i8*)(intptr_t)v11544;
	i8 v11546 = *(i8*)(intptr_t)v11545;
	i8 v11547 = v11546+(+50);
	i2 v11548 = *(i2*)(intptr_t)v11547;
	i4 v11549 = v11548;
	i8 v11550 = (i8)(intptr_t)(f142_MidConstant);
	i8 v11551;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11550)(&v11551, v11549);
	i8 v11552 = (i8)(intptr_t)(f164_MidC2Op);
	i8 v11553;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11552)(&v11553, v11551, v11541, v11539, v11534);
	i8 v11554 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11554 = v11553;

	i8 v11555 = (i8)(intptr_t)(ws+3760);
	i8 v11556 = *(i8*)(intptr_t)v11555;
	i8 v11557 = v11556+(+16);
	i8 v11558 = *(i8*)(intptr_t)v11557;
	i8 v11559 = (i8)(intptr_t)(ws+3752);
	i8 v11560 = *(i8*)(intptr_t)v11559;
	i8 v11561 = v11560+(+16);
	*(i8*)(intptr_t)v11561 = v11558;

endsub:;
}
	void f142_MidConstant(i8* /* m */, i4 /* value */);

// reduce_49 workspace at ws+3840 length ws+0
void f564_reduce_49(void) {

	i8 v11562 = (i8)(intptr_t)(ws+3760);
	i8 v11563 = *(i8*)(intptr_t)v11562;
	i8 v11564 = v11563+(+48);
	i2 v11565 = *(i2*)(intptr_t)v11564;
	i4 v11566 = v11565;
	i8 v11567 = (i8)(intptr_t)(f142_MidConstant);
	i8 v11568;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11567)(&v11568, v11566);
	i8 v11569 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11569 = v11568;

endsub:;
}
	void f220_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s01e0[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f142_MidConstant(i8* /* m */, i4 /* value */);

// reduce_50 workspace at ws+3840 length ws+0
void f565_reduce_50(void) {

	i8 v11570 = (i8)(intptr_t)(ws+3760);
	i8 v11571 = *(i8*)(intptr_t)v11570;
	i8 v11572 = (i8)(intptr_t)(f220_IsArray);
	i1 v11573;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11572)(&v11573, v11571);
	i1 v11574 = (i1)+0;
	if (v11573==v11574) goto c02_0843; else goto c02_0844;

c02_0843:;

	i8 v11575 = (i8)(intptr_t)c02_s01e0;
	i8 v11576 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11576)(v11575);

	goto c02_0840;

c02_0844:;

c02_0840:;

	i8 v11577 = (i8)(intptr_t)(ws+3760);
	i8 v11578 = *(i8*)(intptr_t)v11577;
	i8 v11579 = v11578+(+8);
	i2 v11580 = *(i2*)(intptr_t)v11579;
	i4 v11581 = v11580;
	i8 v11582 = (i8)(intptr_t)(f142_MidConstant);
	i8 v11583;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11582)(&v11583, v11581);
	i8 v11584 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11584 = v11583;

endsub:;
}
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e1[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// not_a_value workspace at ws+3840 length ws+0
void f567_not_a_value(void) {

	i8 v11585 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v11585)();

	i8 v11586 = (i8)(intptr_t)(ws+3760);
	i8 v11587 = *(i8*)(intptr_t)v11586;
	i8 v11588 = v11587+(+8);
	i8 v11589 = *(i8*)(intptr_t)v11588;
	i8 v11590 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11590)(v11589);

	i8 v11591 = (i8)(intptr_t)c02_s01e1;
	i8 v11592 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11592)(v11591);

	i8 v11593 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v11593)();

endsub:;
}
	void f142_MidConstant(i8* /* m */, i4 /* value */);
	void f99_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f469_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f227_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f99_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f567_not_a_value(void);
	void f567_not_a_value(void);

// reduce_51 workspace at ws+3840 length ws+0
void f566_reduce_51(void) {


	i8 v11594 = (i8)(intptr_t)(ws+3760);
	i8 v11595 = *(i8*)(intptr_t)v11594;
	i8 v11596 = v11595+(+32);
	i1 v11597 = *(i1*)(intptr_t)v11596;

	if (v11597 != +7) goto c02_0846;

	i8 v11598 = (i8)(intptr_t)(ws+3760);
	i8 v11599 = *(i8*)(intptr_t)v11598;
	i4 v11600 = *(i4*)(intptr_t)v11599;
	i8 v11601 = (i8)(intptr_t)(f142_MidConstant);
	i8 v11602;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11601)(&v11602, v11600);
	i8 v11603 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11603 = v11602;

	goto c02_0845;

c02_0846:;

	if (v11597 != +28) goto c02_0847;

	i8 v11604 = (i8)(intptr_t)(ws+3760);
	i8 v11605 = *(i8*)(intptr_t)v11604;
	i2 v11606 = (i2)+0;
	i8 v11607 = (i8)(intptr_t)(f99_MidAddress);
	i8 v11608;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v11607)(&v11608, v11606, v11605);
	i8 v11609 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11609 = v11608;

	i8 v11610 = (i8)(intptr_t)(ws+3760);
	i8 v11611 = *(i8*)(intptr_t)v11610;
	i8 v11612 = *(i8*)(intptr_t)v11611;
	i8 v11613 = *(i8*)(intptr_t)v11612;
	i8 v11614 = (i8)(intptr_t)(f469_MakePointerType);
	i8 v11615;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11614)(&v11615, v11613);
	i8 v11616 = (i8)(intptr_t)(ws+3752);
	i8 v11617 = *(i8*)(intptr_t)v11616;
	i8 v11618 = v11617+(+16);
	*(i8*)(intptr_t)v11618 = v11615;

	i8 v11619 = (i8)(intptr_t)(ws+3752);
	i8 v11620 = *(i8*)(intptr_t)v11619;
	i8 v11621 = (i8)(intptr_t)(f227_MakeLValue);
	i8 v11622;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11621)(&v11622, v11620);
	i8 v11623 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11623 = v11622;

	goto c02_0845;

c02_0847:;

	if (v11597 != +30) goto c02_0848;

	i8 v11624 = (i8)(intptr_t)(ws+3760);
	i8 v11625 = *(i8*)(intptr_t)v11624;
	i8 v11626 = *(i8*)(intptr_t)v11625;
	i8 v11627 = v11626+(+52);
	i1 v11628 = *(i1*)(intptr_t)v11627;
	i1 v11629 = (i1)+6;
	if (v11628==v11629) goto c02_084c; else goto c02_084d;

c02_084c:;

	i8 v11630 = (i8)(intptr_t)(ws+3760);
	i8 v11631 = *(i8*)(intptr_t)v11630;
	i2 v11632 = (i2)+0;
	i8 v11633 = (i8)(intptr_t)(f99_MidAddress);
	i8 v11634;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v11633)(&v11634, v11632, v11631);
	i8 v11635 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11635 = v11634;

	i8 v11636 = (i8)(intptr_t)(ws+3760);
	i8 v11637 = *(i8*)(intptr_t)v11636;
	i8 v11638 = *(i8*)(intptr_t)v11637;
	i8 v11639 = *(i8*)(intptr_t)v11638;
	i8 v11640 = v11639+(+48);
	i8 v11641 = *(i8*)(intptr_t)v11640;
	i8 v11642 = v11641+(+40);
	i8 v11643 = *(i8*)(intptr_t)v11642;
	i8 v11644 = (i8)(intptr_t)(ws+3752);
	i8 v11645 = *(i8*)(intptr_t)v11644;
	i8 v11646 = v11645+(+16);
	*(i8*)(intptr_t)v11646 = v11643;

	goto c02_0849;

c02_084d:;

	i8 v11647 = (i8)(intptr_t)(f567_not_a_value);

	((void(*)(void))(intptr_t)v11647)();

c02_0849:;

	goto c02_0845;

c02_0848:;

	i8 v11648 = (i8)(intptr_t)(f567_not_a_value);

	((void(*)(void))(intptr_t)v11648)();

c02_0845:;


endsub:;
}
	void f221_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01e2[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f227_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_52 workspace at ws+3840 length ws+0
void f568_reduce_52(void) {

	i8 v11649 = (i8)(intptr_t)(ws+3768);
	i8 v11650 = *(i8*)(intptr_t)v11649;
	i8 v11651 = v11650+(+16);
	i8 v11652 = *(i8*)(intptr_t)v11651;
	i8 v11653 = (i8)(intptr_t)(f221_IsPtr);
	i1 v11654;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11653)(&v11654, v11652);
	i1 v11655 = (i1)+0;
	if (v11654==v11655) goto c02_0851; else goto c02_0852;

c02_0851:;

	i8 v11656 = (i8)(intptr_t)c02_s01e2;
	i8 v11657 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11657)(v11656);

	goto c02_084e;

c02_0852:;

c02_084e:;

	i8 v11658 = (i8)(intptr_t)(ws+3768);
	i8 v11659 = *(i8*)(intptr_t)v11658;
	i8 v11660 = (i8)(intptr_t)(f227_MakeLValue);
	i8 v11661;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11660)(&v11661, v11659);
	i8 v11662 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11662 = v11661;

	i1 v11663 = (i1)+5;
	i8 v11664 = (i8)(intptr_t)(ws+3760);
	i8 v11665 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11665)(v11664, v11663);

endsub:;
}
	void f228_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f220_IsArray(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
const i1 c02_s01e3[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f476_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f223_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s01e4[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f165_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f142_MidConstant(i8* /* m */, i4 /* value */);
	void f164_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f164_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f469_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f227_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_53 workspace at ws+3840 length ws+48
void f569_reduce_53(void) {

	i8 v11666 = (i8)(intptr_t)(ws+3784);
	i8 v11667 = *(i8*)(intptr_t)v11666;
	i8 v11668 = v11667+(+16);
	i8 v11669 = *(i8*)(intptr_t)v11668;
	i8 v11670 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v11670 = v11669;

	i8 v11671 = (i8)(intptr_t)(ws+3784);
	i8 v11672 = *(i8*)(intptr_t)v11671;
	i8 v11673 = (i8)(intptr_t)(f228_UndoLValue);
	i8 v11674;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11673)(&v11674, v11672);
	i8 v11675 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v11675 = v11674;

	i8 v11676 = (i8)(intptr_t)(ws+3840);
	i8 v11677 = *(i8*)(intptr_t)v11676;
	i8 v11678 = (i8)(intptr_t)(f220_IsArray);
	i1 v11679;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11678)(&v11679, v11677);
	i1 v11680 = (i1)+0;
	if (v11679==v11680) goto c02_0856; else goto c02_0857;

c02_0856:;

	i8 v11681 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v11681)();

	i8 v11682 = (i8)(intptr_t)c02_s01e3;
	i8 v11683 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11683)(v11682);

	i8 v11684 = (i8)(intptr_t)(ws+3840);
	i8 v11685 = *(i8*)(intptr_t)v11684;
	i8 v11686 = v11685+(+32);
	i8 v11687 = *(i8*)(intptr_t)v11686;
	i8 v11688 = v11687+(+8);
	i8 v11689 = *(i8*)(intptr_t)v11688;
	i8 v11690 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11690)(v11689);

	i8 v11691 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v11691)();

	goto c02_0853;

c02_0857:;

c02_0853:;

	i8 v11692 = (i8)(intptr_t)(ws+3768);
	i8 v11693 = *(i8*)(intptr_t)v11692;
	i8 v11694 = (i8)(intptr_t)(ws+3840);
	i8 v11695 = *(i8*)(intptr_t)v11694;
	i8 v11696 = v11695+(+16);
	i8 v11697 = *(i8*)(intptr_t)v11696;
	i8 v11698 = (i8)(intptr_t)(f476_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v11698)(v11697, v11693);

	i8 v11699 = (i8)(intptr_t)(ws+3768);
	i8 v11700 = *(i8*)(intptr_t)v11699;
	i8 v11701 = v11700+(+16);
	i8 v11702 = *(i8*)(intptr_t)v11701;
	i8 v11703 = (i8)(intptr_t)(f223_IsNum);
	i1 v11704;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11703)(&v11704, v11702);
	i1 v11705 = (i1)+0;
	if (v11704==v11705) goto c02_085b; else goto c02_085c;

c02_085b:;

	i8 v11706 = (i8)(intptr_t)c02_s01e4;
	i8 v11707 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11707)(v11706);

	goto c02_0858;

c02_085c:;

c02_0858:;

	i8 v11708 = (i8)(intptr_t)(ws+3840);
	i8 v11709 = *(i8*)(intptr_t)v11708;
	i8 v11710 = *(i8*)(intptr_t)v11709;
	i8 v11711 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v11711 = v11710;

	i8 v11712 = (i8)(intptr_t)(ws+1904);
	i8 v11713 = *(i8*)(intptr_t)v11712;
	i8 v11714 = v11713+(+48);
	i2 v11715 = *(i2*)(intptr_t)v11714;
	i1 v11716 = v11715;
	i8 v11717 = (i8)(intptr_t)(ws+3864);
	*(i1*)(intptr_t)v11717 = v11716;

	i1 v11718 = (i1)+163;
	i8 v11719 = (i8)(intptr_t)(ws+3864);
	i1 v11720 = *(i1*)(intptr_t)v11719;
	i8 v11721 = (i8)(intptr_t)(ws+1904);
	i8 v11722 = *(i8*)(intptr_t)v11721;
	i8 v11723 = v11722+(+48);
	i2 v11724 = *(i2*)(intptr_t)v11723;
	i1 v11725 = v11724;
	i8 v11726 = (i8)(intptr_t)(ws+3768);
	i8 v11727 = *(i8*)(intptr_t)v11726;
	i1 v11728 = (i1)+0;
	i8 v11729 = (i8)(intptr_t)(f165_MidCCast);
	i8 v11730;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v11729)(&v11730, v11728, v11727, v11725);
	i8 v11731 = (i8)(intptr_t)(ws+3856);
	i8 v11732 = *(i8*)(intptr_t)v11731;
	i8 v11733 = v11732+(+50);
	i2 v11734 = *(i2*)(intptr_t)v11733;
	i4 v11735 = v11734;
	i8 v11736 = (i8)(intptr_t)(f142_MidConstant);
	i8 v11737;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11736)(&v11737, v11735);
	i8 v11738 = (i8)(intptr_t)(f164_MidC2Op);
	i8 v11739;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11738)(&v11739, v11737, v11730, v11720, v11718);
	i8 v11740 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v11740 = v11739;

	i8 v11741 = (i8)(intptr_t)(ws+1904);
	i8 v11742 = *(i8*)(intptr_t)v11741;
	i8 v11743 = (i8)(intptr_t)(ws+3872);
	i8 v11744 = *(i8*)(intptr_t)v11743;
	i8 v11745 = v11744+(+16);
	*(i8*)(intptr_t)v11745 = v11742;

	i1 v11746 = (i1)+158;
	i8 v11747 = (i8)(intptr_t)(ws+3864);
	i1 v11748 = *(i1*)(intptr_t)v11747;
	i8 v11749 = (i8)(intptr_t)(ws+3848);
	i8 v11750 = *(i8*)(intptr_t)v11749;
	i8 v11751 = (i8)(intptr_t)(ws+3872);
	i8 v11752 = *(i8*)(intptr_t)v11751;
	i8 v11753 = (i8)(intptr_t)(f164_MidC2Op);
	i8 v11754;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11753)(&v11754, v11752, v11750, v11748, v11746);
	i8 v11755 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v11755 = v11754;

	i8 v11756 = (i8)(intptr_t)(ws+3856);
	i8 v11757 = *(i8*)(intptr_t)v11756;
	i8 v11758 = (i8)(intptr_t)(f469_MakePointerType);
	i8 v11759;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11758)(&v11759, v11757);
	i8 v11760 = (i8)(intptr_t)(ws+3880);
	i8 v11761 = *(i8*)(intptr_t)v11760;
	i8 v11762 = v11761+(+16);
	*(i8*)(intptr_t)v11762 = v11759;

	i8 v11763 = (i8)(intptr_t)(ws+3880);
	i8 v11764 = *(i8*)(intptr_t)v11763;
	i8 v11765 = (i8)(intptr_t)(f227_MakeLValue);
	i8 v11766;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11765)(&v11766, v11764);
	i8 v11767 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11767 = v11766;

	i1 v11768 = (i1)+17;
	i8 v11769 = (i8)(intptr_t)(ws+3776);
	i8 v11770 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11770)(v11769, v11768);

	i1 v11771 = (i1)+5;
	i8 v11772 = (i8)(intptr_t)(ws+3760);
	i8 v11773 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11773)(v11772, v11771);

endsub:;
}
	void f228_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
	void f216_CheckNotPartialType(i8 /* type */);
	void f108_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);
	void f216_CheckNotPartialType(i8 /* type */);
	void f226_IsRecord(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e5[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f211_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e6[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e7[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f33_Free(i8 /* block */);
	void f142_MidConstant(i8* /* m */, i4 /* value */);
	void f164_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f469_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f227_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_54 workspace at ws+3840 length ws+24
void f570_reduce_54(void) {

	i8 v11774 = (i8)(intptr_t)(ws+3776);
	i8 v11775 = *(i8*)(intptr_t)v11774;
	i8 v11776 = v11775+(+16);
	i8 v11777 = *(i8*)(intptr_t)v11776;
	i8 v11778 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v11778 = v11777;

	i8 v11779 = (i8)(intptr_t)(ws+3776);
	i8 v11780 = *(i8*)(intptr_t)v11779;
	i8 v11781 = (i8)(intptr_t)(f228_UndoLValue);
	i8 v11782;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11781)(&v11782, v11780);
	i8 v11783 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v11783 = v11782;

c02_085f:;

	i8 v11784 = (i8)(intptr_t)(ws+3840);
	i8 v11785 = *(i8*)(intptr_t)v11784;
	i8 v11786 = (i8)(intptr_t)(f221_IsPtr);
	i1 v11787;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11786)(&v11787, v11785);
	i1 v11788 = (i1)+0;
	if (v11787==v11788) goto c02_0862; else goto c02_0861;

c02_0861:;

	i8 v11789 = (i8)(intptr_t)(ws+3840);
	i8 v11790 = *(i8*)(intptr_t)v11789;
	i8 v11791 = *(i8*)(intptr_t)v11790;
	i8 v11792 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v11792 = v11791;

	i8 v11793 = (i8)(intptr_t)(ws+3840);
	i8 v11794 = *(i8*)(intptr_t)v11793;
	i8 v11795 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11795)(v11794);

	i8 v11796 = (i8)(intptr_t)(ws+1904);
	i8 v11797 = *(i8*)(intptr_t)v11796;
	i8 v11798 = v11797+(+48);
	i2 v11799 = *(i2*)(intptr_t)v11798;
	i1 v11800 = v11799;
	i8 v11801 = (i8)(intptr_t)(ws+3848);
	i8 v11802 = *(i8*)(intptr_t)v11801;
	i8 v11803 = (i8)(intptr_t)(f108_MidLoad);
	i8 v11804;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v11803)(&v11804, v11802, v11800);
	i8 v11805 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v11805 = v11804;

	goto c02_085f;

c02_0862:;

	i8 v11806 = (i8)(intptr_t)(ws+3840);
	i8 v11807 = *(i8*)(intptr_t)v11806;
	i8 v11808 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11808)(v11807);

	i8 v11809 = (i8)(intptr_t)(ws+3840);
	i8 v11810 = *(i8*)(intptr_t)v11809;
	i8 v11811 = (i8)(intptr_t)(f226_IsRecord);
	i1 v11812;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11811)(&v11812, v11810);
	i1 v11813 = (i1)+0;
	if (v11812==v11813) goto c02_0866; else goto c02_0867;

c02_0866:;

	i8 v11814 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v11814)();

	i8 v11815 = (i8)(intptr_t)(ws+3840);
	i8 v11816 = *(i8*)(intptr_t)v11815;
	i8 v11817 = v11816+(+32);
	i8 v11818 = *(i8*)(intptr_t)v11817;
	i8 v11819 = v11818+(+8);
	i8 v11820 = *(i8*)(intptr_t)v11819;
	i8 v11821 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11821)(v11820);

	i8 v11822 = (i8)(intptr_t)c02_s01e5;
	i8 v11823 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11823)(v11822);

	i8 v11824 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v11824)();

	goto c02_0863;

c02_0867:;

c02_0863:;

	i8 v11825 = (i8)(intptr_t)(ws+3840);
	i8 v11826 = *(i8*)(intptr_t)v11825;
	i8 v11827 = (i8)(intptr_t)(ws+3760);
	i8 v11828 = *(i8*)(intptr_t)v11827;
	i8 v11829 = (i8)(intptr_t)(f211_LookupSymbol);
	i8 v11830;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11829)(&v11830, v11828, v11826);
	i8 v11831 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v11831 = v11830;

	i8 v11832 = (i8)(intptr_t)(ws+3856);
	i8 v11833 = *(i8*)(intptr_t)v11832;
	i8 v11834 = (i8)+0;
	if (v11833==v11834) goto c02_086b; else goto c02_086c;

c02_086b:;

	i8 v11835 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v11835)();

	i8 v11836 = (i8)(intptr_t)(ws+3840);
	i8 v11837 = *(i8*)(intptr_t)v11836;
	i8 v11838 = v11837+(+32);
	i8 v11839 = *(i8*)(intptr_t)v11838;
	i8 v11840 = v11839+(+8);
	i8 v11841 = *(i8*)(intptr_t)v11840;
	i8 v11842 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11842)(v11841);

	i8 v11843 = (i8)(intptr_t)c02_s01e6;
	i8 v11844 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11844)(v11843);

	i8 v11845 = (i8)(intptr_t)(ws+3760);
	i8 v11846 = *(i8*)(intptr_t)v11845;
	i8 v11847 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11847)(v11846);

	i8 v11848 = (i8)(intptr_t)c02_s01e7;
	i8 v11849 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11849)(v11848);

	i8 v11850 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v11850)();

	goto c02_0868;

c02_086c:;

c02_0868:;

	i8 v11851 = (i8)(intptr_t)(ws+3760);
	i8 v11852 = *(i8*)(intptr_t)v11851;
	i8 v11853 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v11853)(v11852);

	i1 v11854 = (i1)+158;
	i8 v11855 = (i8)(intptr_t)(ws+1904);
	i8 v11856 = *(i8*)(intptr_t)v11855;
	i8 v11857 = v11856+(+48);
	i2 v11858 = *(i2*)(intptr_t)v11857;
	i1 v11859 = v11858;
	i8 v11860 = (i8)(intptr_t)(ws+3848);
	i8 v11861 = *(i8*)(intptr_t)v11860;
	i8 v11862 = (i8)(intptr_t)(ws+3856);
	i8 v11863 = *(i8*)(intptr_t)v11862;
	i8 v11864 = *(i8*)(intptr_t)v11863;
	i8 v11865 = v11864+(+32);
	i2 v11866 = *(i2*)(intptr_t)v11865;
	i4 v11867 = v11866;
	i8 v11868 = (i8)(intptr_t)(f142_MidConstant);
	i8 v11869;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11868)(&v11869, v11867);
	i8 v11870 = (i8)(intptr_t)(f164_MidC2Op);
	i8 v11871;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11870)(&v11871, v11869, v11861, v11859, v11854);
	i8 v11872 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11872 = v11871;

	i8 v11873 = (i8)(intptr_t)(ws+3856);
	i8 v11874 = *(i8*)(intptr_t)v11873;
	i8 v11875 = *(i8*)(intptr_t)v11874;
	i8 v11876 = *(i8*)(intptr_t)v11875;
	i8 v11877 = (i8)(intptr_t)(f469_MakePointerType);
	i8 v11878;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11877)(&v11878, v11876);
	i8 v11879 = (i8)(intptr_t)(ws+3752);
	i8 v11880 = *(i8*)(intptr_t)v11879;
	i8 v11881 = v11880+(+16);
	*(i8*)(intptr_t)v11881 = v11878;

	i8 v11882 = (i8)(intptr_t)(ws+3752);
	i8 v11883 = *(i8*)(intptr_t)v11882;
	i8 v11884 = (i8)(intptr_t)(f227_MakeLValue);
	i8 v11885;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11884)(&v11885, v11883);
	i8 v11886 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11886 = v11885;

	i1 v11887 = (i1)+8;
	i8 v11888 = (i8)(intptr_t)(ws+3768);
	i8 v11889 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11889)(v11888, v11887);

endsub:;
}
	void f113_MidString(i8* /* m */, i8 /* text */);
	void f469_MakePointerType(i8* /* ptrtype */, i8 /* type */);

// reduce_55 workspace at ws+3840 length ws+0
void f571_reduce_55(void) {

	i8 v11890 = (i8)(intptr_t)(ws+3760);
	i8 v11891 = *(i8*)(intptr_t)v11890;
	i8 v11892 = (i8)(intptr_t)(f113_MidString);
	i8 v11893;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v11892)(&v11893, v11891);
	i8 v11894 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11894 = v11893;

	i8 v11895 = (i8)(intptr_t)(ws+1888);
	i8 v11896 = *(i8*)(intptr_t)v11895;
	i8 v11897 = (i8)(intptr_t)(f469_MakePointerType);
	i8 v11898;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11897)(&v11898, v11896);
	i8 v11899 = (i8)(intptr_t)(ws+3752);
	i8 v11900 = *(i8*)(intptr_t)v11899;
	i8 v11901 = v11900+(+16);
	*(i8*)(intptr_t)v11901 = v11898;

endsub:;
}
	void f497_parser_i_constant_error(void);
	void f58_Discard(i8 /* node */);

// reduce_56 workspace at ws+3840 length ws+0
void f572_reduce_56(void) {

	i8 v11902 = (i8)(intptr_t)(ws+3760);
	i8 v11903 = *(i8*)(intptr_t)v11902;
	i8 v11904 = v11903+(+58);
	i1 v11905 = *(i1*)(intptr_t)v11904;
	i1 v11906 = (i1)+43;
	if (v11905==v11906) goto c02_0871; else goto c02_0870;

c02_0870:;

	i8 v11907 = (i8)(intptr_t)(f497_parser_i_constant_error);

	((void(*)(void))(intptr_t)v11907)();

	goto c02_086d;

c02_0871:;

c02_086d:;

	i8 v11908 = (i8)(intptr_t)(ws+3760);
	i8 v11909 = *(i8*)(intptr_t)v11908;
	i4 v11910 = *(i4*)(intptr_t)v11909;
	i8 v11911 = (i8)(intptr_t)(ws+3752);
	*(i4*)(intptr_t)v11911 = v11910;

	i8 v11912 = (i8)(intptr_t)(ws+3760);
	i8 v11913 = *(i8*)(intptr_t)v11912;
	i8 v11914 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v11914)(v11913);

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_57 workspace at ws+3840 length ws+0
void f573_reduce_57(void) {

	i1 v11915 = (i1)+7;
	i8 v11916 = (i8)(intptr_t)(ws+3784);
	i8 v11917 = *(i8*)(intptr_t)v11916;
	i8 v11918 = v11917+(+32);
	*(i1*)(intptr_t)v11918 = v11915;

	i8 v11919 = (i8)(intptr_t)(ws+3768);
	i4 v11920 = *(i4*)(intptr_t)v11919;
	i8 v11921 = (i8)(intptr_t)(ws+3784);
	i8 v11922 = *(i8*)(intptr_t)v11921;
	*(i4*)(intptr_t)v11922 = v11920;

	i1 v11923 = (i1)+2;
	i8 v11924 = (i8)(intptr_t)(ws+3776);
	i8 v11925 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11925)(v11924, v11923);

	i1 v11926 = (i1)+22;
	i8 v11927 = (i8)(intptr_t)(ws+3760);
	i8 v11928 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11928)(v11927, v11926);

endsub:;
}
const i1 c02_s01e8[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f238_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_58 workspace at ws+3840 length ws+0
void f574_reduce_58(void) {

	i8 v11929 = (i8)(intptr_t)(ws+3784);
	i4 v11930 = *(i4*)(intptr_t)v11929;
	i8 v11931 = (i8)(intptr_t)(ws+3768);
	i4 v11932 = *(i4*)(intptr_t)v11931;
	if ((s4)v11930<(s4)v11932) goto c02_0876; else goto c02_0875;

c02_0875:;

	i8 v11933 = (i8)(intptr_t)c02_s01e8;
	i8 v11934 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11934)(v11933);

	goto c02_0872;

c02_0876:;

c02_0872:;

	i8 v11935 = (i8)(intptr_t)(ws+3784);
	i4 v11936 = *(i4*)(intptr_t)v11935;
	i8 v11937 = (i8)(intptr_t)(ws+3768);
	i4 v11938 = *(i4*)(intptr_t)v11937;
	i8 v11939 = (i8)(intptr_t)(f238_ArchGuessIntType);
	i8 v11940;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v11939)(&v11940, v11938, v11936);
	i8 v11941 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11941 = v11940;

	i1 v11942 = (i1)+16;
	i8 v11943 = (i8)(intptr_t)(ws+3792);
	i8 v11944 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11944)(v11943, v11942);

	i1 v11945 = (i1)+45;
	i8 v11946 = (i8)(intptr_t)(ws+3776);
	i8 v11947 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11947)(v11946, v11945);

	i1 v11948 = (i1)+4;
	i8 v11949 = (i8)(intptr_t)(ws+3760);
	i8 v11950 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11950)(v11949, v11948);

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f69_StartError(void);
const i1 c02_s01e9[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01ea[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// reduce_59 workspace at ws+3840 length ws+16
void f575_reduce_59(void) {

	i8 v11951 = (i8)(intptr_t)(ws+3760);
	i8 v11952 = *(i8*)(intptr_t)v11951;
	i8 v11953 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v11953 = v11952;

	i8 v11954 = (i8)(intptr_t)(ws+3840);
	i8 v11955 = *(i8*)(intptr_t)v11954;
	i8 v11956 = v11955+(+32);
	i1 v11957 = *(i1*)(intptr_t)v11956;
	i1 v11958 = (i1)+0;
	if (v11957==v11958) goto c02_087a; else goto c02_087b;

c02_087a:;

	i8 v11959 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v11960;

	((void(*)(i8* /* type */))(intptr_t)v11959)(&v11960);
	i8 v11961 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v11961 = v11960;

	i1 v11962 = (i1)+1;
	i8 v11963 = (i8)(intptr_t)(ws+3848);
	i8 v11964 = *(i8*)(intptr_t)v11963;
	i8 v11965 = v11964+(+52);
	*(i1*)(intptr_t)v11965 = v11962;

	i1 v11966 = (i1)+30;
	i8 v11967 = (i8)(intptr_t)(ws+3840);
	i8 v11968 = *(i8*)(intptr_t)v11967;
	i8 v11969 = v11968+(+32);
	*(i1*)(intptr_t)v11969 = v11966;

	i8 v11970 = (i8)(intptr_t)(ws+3848);
	i8 v11971 = *(i8*)(intptr_t)v11970;
	i8 v11972 = (i8)(intptr_t)(ws+3840);
	i8 v11973 = *(i8*)(intptr_t)v11972;
	*(i8*)(intptr_t)v11973 = v11971;

	i8 v11974 = (i8)(intptr_t)(ws+3840);
	i8 v11975 = *(i8*)(intptr_t)v11974;
	i8 v11976 = (i8)(intptr_t)(ws+3848);
	i8 v11977 = *(i8*)(intptr_t)v11976;
	i8 v11978 = v11977+(+32);
	*(i8*)(intptr_t)v11978 = v11975;

	goto c02_0877;

c02_087b:;

c02_0877:;

	i8 v11979 = (i8)(intptr_t)(ws+3840);
	i8 v11980 = *(i8*)(intptr_t)v11979;
	i8 v11981 = v11980+(+32);
	i1 v11982 = *(i1*)(intptr_t)v11981;
	i1 v11983 = (i1)+30;
	if (v11982==v11983) goto c02_0880; else goto c02_087f;

c02_087f:;

	i8 v11984 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v11984)();

	i8 v11985 = (i8)(intptr_t)c02_s01e9;
	i8 v11986 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11986)(v11985);

	i8 v11987 = (i8)(intptr_t)(ws+3840);
	i8 v11988 = *(i8*)(intptr_t)v11987;
	i8 v11989 = v11988+(+8);
	i8 v11990 = *(i8*)(intptr_t)v11989;
	i8 v11991 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11991)(v11990);

	i8 v11992 = (i8)(intptr_t)c02_s01ea;
	i8 v11993 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11993)(v11992);

	i8 v11994 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v11994)();

	goto c02_087c;

c02_0880:;

c02_087c:;

	i8 v11995 = (i8)(intptr_t)(ws+3840);
	i8 v11996 = *(i8*)(intptr_t)v11995;
	i8 v11997 = *(i8*)(intptr_t)v11996;
	i8 v11998 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v11998 = v11997;

endsub:;
}
	void f469_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_60 workspace at ws+3840 length ws+0
void f576_reduce_60(void) {

	i8 v11999 = (i8)(intptr_t)(ws+3768);
	i8 v12000 = *(i8*)(intptr_t)v11999;
	i8 v12001 = (i8)(intptr_t)(f469_MakePointerType);
	i8 v12002;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v12001)(&v12002, v12000);
	i8 v12003 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12003 = v12002;

	i1 v12004 = (i1)+5;
	i8 v12005 = (i8)(intptr_t)(ws+3760);
	i8 v12006 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12006)(v12005, v12004);

endsub:;
}
	void f470_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_61 workspace at ws+3840 length ws+0
void f577_reduce_61(void) {

	i8 v12007 = (i8)(intptr_t)(ws+3784);
	i8 v12008 = *(i8*)(intptr_t)v12007;
	i8 v12009 = (i8)(intptr_t)(ws+3768);
	i4 v12010 = *(i4*)(intptr_t)v12009;
	i2 v12011 = (s2)(s4)v12010;
	i8 v12012 = (i8)(intptr_t)(f470_MakeArrayType);
	i8 v12013;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v12012)(&v12013, v12011, v12008);
	i8 v12014 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12014 = v12013;

	i1 v12015 = (i1)+17;
	i8 v12016 = (i8)(intptr_t)(ws+3776);
	i8 v12017 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12017)(v12016, v12015);

	i1 v12018 = (i1)+5;
	i8 v12019 = (i8)(intptr_t)(ws+3760);
	i8 v12020 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12020)(v12019, v12018);

endsub:;
}
	void f470_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_62 workspace at ws+3840 length ws+0
void f578_reduce_62(void) {

	i8 v12021 = (i8)(intptr_t)(ws+3776);
	i8 v12022 = *(i8*)(intptr_t)v12021;
	i2 v12023 = (i2)+0;
	i8 v12024 = (i8)(intptr_t)(f470_MakeArrayType);
	i8 v12025;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v12024)(&v12025, v12023, v12022);
	i8 v12026 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12026 = v12025;

	i1 v12027 = (i1)+17;
	i8 v12028 = (i8)(intptr_t)(ws+3768);
	i8 v12029 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12029)(v12028, v12027);

	i1 v12030 = (i1)+5;
	i8 v12031 = (i8)(intptr_t)(ws+3760);
	i8 v12032 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12032)(v12031, v12030);

endsub:;
}
	void f220_IsArray(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01eb[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// reduce_63 workspace at ws+3840 length ws+0
void f579_reduce_63(void) {

	i8 v12033 = (i8)(intptr_t)(ws+3760);
	i8 v12034 = *(i8*)(intptr_t)v12033;
	i8 v12035 = (i8)(intptr_t)(f220_IsArray);
	i1 v12036;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12035)(&v12036, v12034);
	i1 v12037 = (i1)+0;
	if (v12036==v12037) goto c02_0884; else goto c02_0885;

c02_0884:;

	i8 v12038 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v12038)();

	i8 v12039 = (i8)(intptr_t)(ws+3760);
	i8 v12040 = *(i8*)(intptr_t)v12039;
	i8 v12041 = v12040+(+32);
	i8 v12042 = *(i8*)(intptr_t)v12041;
	i8 v12043 = v12042+(+8);
	i8 v12044 = *(i8*)(intptr_t)v12043;
	i8 v12045 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12045)(v12044);

	i8 v12046 = (i8)(intptr_t)c02_s01eb;
	i8 v12047 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12047)(v12046);

	i8 v12048 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v12048)();

	goto c02_0881;

c02_0885:;

c02_0881:;

	i8 v12049 = (i8)(intptr_t)(ws+3760);
	i8 v12050 = *(i8*)(intptr_t)v12049;
	i8 v12051 = v12050+(+16);
	i8 v12052 = *(i8*)(intptr_t)v12051;
	i8 v12053 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12053 = v12052;

endsub:;
}
	void f214_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_64 workspace at ws+3840 length ws+8
void f580_reduce_64(void) {

	i8 v12054 = (i8)+0;
	i8 v12055 = (i8)(intptr_t)(ws+3784);
	i8 v12056 = *(i8*)(intptr_t)v12055;
	i8 v12057 = (i8)(intptr_t)(ws+3768);
	i8 v12058 = *(i8*)(intptr_t)v12057;
	i8 v12059 = v12058+(+32);
	i8 v12060 = *(i8*)(intptr_t)v12059;
	i8 v12061 = (i8)(intptr_t)(f214_AddAlias);
	i8 v12062;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v12061)(&v12062, v12060, v12056, v12054);
	i8 v12063 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12063 = v12062;

	i1 v12064 = (i1)+65;
	i8 v12065 = (i8)(intptr_t)(ws+3776);
	i8 v12066 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12066)(v12065, v12064);

	i1 v12067 = (i1)+22;
	i8 v12068 = (i8)(intptr_t)(ws+3760);
	i8 v12069 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12069)(v12068, v12067);

endsub:;
}
	void f213_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_65 workspace at ws+3840 length ws+0
void f581_reduce_65(void) {

	i8 v12070 = (i8)+0;
	i8 v12071 = (i8)(intptr_t)(ws+3760);
	i8 v12072 = *(i8*)(intptr_t)v12071;
	i8 v12073 = (i8)(intptr_t)(f213_AddSymbol);
	i8 v12074;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v12073)(&v12074, v12072, v12070);
	i8 v12075 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12075 = v12074;

endsub:;
}
	void f211_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f69_StartError(void);
const i1 c02_s01ec[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01ed[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f33_Free(i8 /* block */);

// reduce_66 workspace at ws+3840 length ws+16
void f582_reduce_66(void) {

	i8 v12076 = (i8)(intptr_t)(ws+3760);
	i8 v12077 = *(i8*)(intptr_t)v12076;
	i8 v12078 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12078 = v12077;

	i8 v12079 = (i8)+0;
	i8 v12080 = (i8)(intptr_t)(ws+3840);
	i8 v12081 = *(i8*)(intptr_t)v12080;
	i8 v12082 = (i8)(intptr_t)(f211_LookupSymbol);
	i8 v12083;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v12082)(&v12083, v12081, v12079);
	i8 v12084 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v12084 = v12083;

	i8 v12085 = (i8)(intptr_t)(ws+3848);
	i8 v12086 = *(i8*)(intptr_t)v12085;
	i8 v12087 = (i8)+0;
	if (v12086==v12087) goto c02_0889; else goto c02_088a;

c02_0889:;

	i8 v12088 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v12088)();

	i8 v12089 = (i8)(intptr_t)c02_s01ec;
	i8 v12090 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12090)(v12089);

	i8 v12091 = (i8)(intptr_t)(ws+3840);
	i8 v12092 = *(i8*)(intptr_t)v12091;
	i8 v12093 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12093)(v12092);

	i8 v12094 = (i8)(intptr_t)c02_s01ed;
	i8 v12095 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12095)(v12094);

	i8 v12096 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v12096)();

	goto c02_0886;

c02_088a:;

c02_0886:;

	i8 v12097 = (i8)(intptr_t)(ws+3840);
	i8 v12098 = *(i8*)(intptr_t)v12097;
	i8 v12099 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v12099)(v12098);

	i8 v12100 = (i8)(intptr_t)(ws+3848);
	i8 v12101 = *(i8*)(intptr_t)v12100;
	i8 v12102 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12102 = v12101;

endsub:;
}
	void f211_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f213_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f33_Free(i8 /* block */);

// reduce_67 workspace at ws+3840 length ws+16
void f583_reduce_67(void) {

	i8 v12103 = (i8)(intptr_t)(ws+3760);
	i8 v12104 = *(i8*)(intptr_t)v12103;
	i8 v12105 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12105 = v12104;

	i8 v12106 = (i8)+0;
	i8 v12107 = (i8)(intptr_t)(ws+3840);
	i8 v12108 = *(i8*)(intptr_t)v12107;
	i8 v12109 = (i8)(intptr_t)(f211_LookupSymbol);
	i8 v12110;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v12109)(&v12110, v12108, v12106);
	i8 v12111 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v12111 = v12110;

	i8 v12112 = (i8)(intptr_t)(ws+3848);
	i8 v12113 = *(i8*)(intptr_t)v12112;
	i8 v12114 = (i8)+0;
	if (v12113==v12114) goto c02_088e; else goto c02_088f;

c02_088e:;

	i8 v12115 = (i8)+0;
	i8 v12116 = (i8)(intptr_t)(ws+3840);
	i8 v12117 = *(i8*)(intptr_t)v12116;
	i8 v12118 = (i8)(intptr_t)(f213_AddSymbol);
	i8 v12119;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v12118)(&v12119, v12117, v12115);
	i8 v12120 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v12120 = v12119;

	goto c02_088b;

c02_088f:;

	i8 v12121 = (i8)(intptr_t)(ws+3840);
	i8 v12122 = *(i8*)(intptr_t)v12121;
	i8 v12123 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v12123)(v12122);

c02_088b:;

	i8 v12124 = (i8)(intptr_t)(ws+3848);
	i8 v12125 = *(i8*)(intptr_t)v12124;
	i8 v12126 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12126 = v12125;

endsub:;
}
const i1 c02_s01ee[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);

// reduce_68 workspace at ws+3840 length ws+0
void f584_reduce_68(void) {

	i8 v12127 = (i8)(intptr_t)(ws+3760);
	i8 v12128 = *(i8*)(intptr_t)v12127;
	i8 v12129 = v12128+(+32);
	i1 v12130 = *(i1*)(intptr_t)v12129;

	if (v12130 != +28) goto c02_0891;

	i8 v12131 = (i8)(intptr_t)(ws+3760);
	i8 v12132 = *(i8*)(intptr_t)v12131;
	i8 v12133 = *(i8*)(intptr_t)v12132;
	i8 v12134 = *(i8*)(intptr_t)v12133;
	i8 v12135 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12135 = v12134;

	goto c02_0890;

c02_0891:;

	if (v12130 != +30) goto c02_0892;

	i8 v12136 = (i8)(intptr_t)(ws+3760);
	i8 v12137 = *(i8*)(intptr_t)v12136;
	i8 v12138 = *(i8*)(intptr_t)v12137;
	i8 v12139 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12139 = v12138;

	goto c02_0890;

c02_0892:;

	i8 v12140 = (i8)(intptr_t)c02_s01ee;
	i8 v12141 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12141)(v12140);

c02_0890:;


endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_69 workspace at ws+3840 length ws+0
void f585_reduce_69(void) {

	i8 v12142 = (i8)(intptr_t)(ws+3768);
	i8 v12143 = *(i8*)(intptr_t)v12142;
	i8 v12144 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12144 = v12143;

	i1 v12145 = (i1)+4;
	i8 v12146 = (i8)(intptr_t)(ws+3760);
	i8 v12147 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12147)(v12146, v12145);

endsub:;
}
	void f498_i_check_sub_call_args(void);
const i1 c02_s01ef[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f71_SimpleError(i8 /* message */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f118_MidCalle(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f499_i_end_call(void);

// reduce_70 workspace at ws+3840 length ws+16
void f586_reduce_70(void) {

	i8 v12148 = (i8)(intptr_t)(ws+80);
	i8 v12149 = *(i8*)(intptr_t)v12148;
	i8 v12150 = v12149+(+8);
	i8 v12151 = *(i8*)(intptr_t)v12150;
	i8 v12152 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12152 = v12151;

	i1 v12153 = (i1)+1;
	i8 v12154 = (i8)(intptr_t)(ws+80);
	i8 v12155 = *(i8*)(intptr_t)v12154;
	i8 v12156 = v12155+(+41);
	*(i1*)(intptr_t)v12156 = v12153;

	i8 v12157 = (i8)(intptr_t)(f498_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v12157)();

	i8 v12158 = (i8)(intptr_t)(ws+3840);
	i8 v12159 = *(i8*)(intptr_t)v12158;
	i8 v12160 = v12159+(+81);
	i1 v12161 = *(i1*)(intptr_t)v12160;
	i1 v12162 = (i1)+1;
	if (v12161==v12162) goto c02_0897; else goto c02_0896;

c02_0896:;

	i8 v12163 = (i8)(intptr_t)c02_s01ef;
	i8 v12164 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12164)(v12163);

	goto c02_0893;

c02_0897:;

c02_0893:;

	i8 v12165 = (i8)(intptr_t)(ws+3840);
	i8 v12166 = *(i8*)(intptr_t)v12165;
	i1 v12167 = (i1)+0;
	i8 v12168 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v12169;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v12168)(&v12169, v12167, v12166);
	i8 v12170 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v12170 = v12169;

	i8 v12171 = (i8)(intptr_t)(ws+3848);
	i8 v12172 = *(i8*)(intptr_t)v12171;
	i8 v12173 = *(i8*)(intptr_t)v12172;
	i8 v12174 = *(i8*)(intptr_t)v12173;
	i8 v12175 = v12174+(+48);
	i2 v12176 = *(i2*)(intptr_t)v12175;
	i1 v12177 = v12176;
	i8 v12178 = (i8)(intptr_t)(ws+3760);
	i8 v12179 = *(i8*)(intptr_t)v12178;
	i8 v12180 = (i8)(intptr_t)(ws+80);
	i8 v12181 = *(i8*)(intptr_t)v12180;
	i8 v12182 = *(i8*)(intptr_t)v12181;
	i8 v12183 = (i8)(intptr_t)(ws+3840);
	i8 v12184 = *(i8*)(intptr_t)v12183;
	i8 v12185 = (i8)(intptr_t)(f118_MidCalle);
	i8 v12186;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v12185)(&v12186, v12184, v12182, v12179, v12177);
	i8 v12187 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12187 = v12186;

	i8 v12188 = (i8)(intptr_t)(ws+3848);
	i8 v12189 = *(i8*)(intptr_t)v12188;
	i8 v12190 = *(i8*)(intptr_t)v12189;
	i8 v12191 = *(i8*)(intptr_t)v12190;
	i8 v12192 = (i8)(intptr_t)(ws+3752);
	i8 v12193 = *(i8*)(intptr_t)v12192;
	i8 v12194 = v12193+(+16);
	*(i8*)(intptr_t)v12194 = v12191;

	i8 v12195 = (i8)(intptr_t)(f499_i_end_call);

	((void(*)(void))(intptr_t)v12195)();

endsub:;
}
	void f498_i_check_sub_call_args(void);
const i1 c02_s01f0[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f140_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f465_Generate(i8 /* statement */);
	void f499_i_end_call(void);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_71 workspace at ws+3840 length ws+8
void f587_reduce_71(void) {

	i8 v12196 = (i8)(intptr_t)(ws+80);
	i8 v12197 = *(i8*)(intptr_t)v12196;
	i8 v12198 = v12197+(+8);
	i8 v12199 = *(i8*)(intptr_t)v12198;
	i8 v12200 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12200 = v12199;

	i8 v12201 = (i8)(intptr_t)(f498_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v12201)();

	i8 v12202 = (i8)(intptr_t)(ws+3840);
	i8 v12203 = *(i8*)(intptr_t)v12202;
	i8 v12204 = v12203+(+81);
	i1 v12205 = *(i1*)(intptr_t)v12204;
	i1 v12206 = (i1)+0;
	if (v12205==v12206) goto c02_089c; else goto c02_089b;

c02_089b:;

	i8 v12207 = (i8)(intptr_t)c02_s01f0;
	i8 v12208 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12208)(v12207);

	goto c02_0898;

c02_089c:;

c02_0898:;

	i8 v12209 = (i8)(intptr_t)(ws+3768);
	i8 v12210 = *(i8*)(intptr_t)v12209;
	i8 v12211 = (i8)(intptr_t)(ws+80);
	i8 v12212 = *(i8*)(intptr_t)v12211;
	i8 v12213 = *(i8*)(intptr_t)v12212;
	i8 v12214 = (i8)(intptr_t)(ws+3840);
	i8 v12215 = *(i8*)(intptr_t)v12214;
	i8 v12216 = (i8)(intptr_t)(f140_MidCall);
	i8 v12217;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v12216)(&v12217, v12215, v12213, v12210);
	i8 v12218 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12218)(v12217);

	i8 v12219 = (i8)(intptr_t)(f499_i_end_call);

	((void(*)(void))(intptr_t)v12219)();

	i1 v12220 = (i1)+22;
	i8 v12221 = (i8)(intptr_t)(ws+3760);
	i8 v12222 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12222)(v12221, v12220);

endsub:;
}
	void f498_i_check_sub_call_args(void);
	void f140_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f465_Generate(i8 /* statement */);
const i1 c02_s01f1[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01f2[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f469_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f476_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f216_CheckNotPartialType(i8 /* type */);
	void f216_CheckNotPartialType(i8 /* type */);
	void f154_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	void f144_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f465_Generate(i8 /* statement */);
	void f58_Discard(i8 /* node */);
const i1 c02_s01f3[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f499_i_end_call(void);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_72 workspace at ws+3840 length ws+41
void f588_reduce_72(void) {

	i8 v12223 = (i8)(intptr_t)(ws+80);
	i8 v12224 = *(i8*)(intptr_t)v12223;
	i8 v12225 = v12224+(+8);
	i8 v12226 = *(i8*)(intptr_t)v12225;
	i8 v12227 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12227 = v12226;

	i8 v12228 = (i8)(intptr_t)(f498_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v12228)();

	i8 v12229 = (i8)(intptr_t)(ws+3768);
	i8 v12230 = *(i8*)(intptr_t)v12229;
	i8 v12231 = (i8)(intptr_t)(ws+80);
	i8 v12232 = *(i8*)(intptr_t)v12231;
	i8 v12233 = *(i8*)(intptr_t)v12232;
	i8 v12234 = (i8)(intptr_t)(ws+3840);
	i8 v12235 = *(i8*)(intptr_t)v12234;
	i8 v12236 = (i8)(intptr_t)(f140_MidCall);
	i8 v12237;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v12236)(&v12237, v12235, v12233, v12230);
	i8 v12238 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12238)(v12237);

	i8 v12239 = (i8)(intptr_t)(ws+3840);
	i8 v12240 = *(i8*)(intptr_t)v12239;
	i8 v12241 = v12240+(+81);
	i1 v12242 = *(i1*)(intptr_t)v12241;
	i8 v12243 = (i8)(intptr_t)(ws+3848);
	*(i1*)(intptr_t)v12243 = v12242;

	i1 v12244 = (i1)+0;
	i8 v12245 = (i8)(intptr_t)(ws+3849);
	*(i1*)(intptr_t)v12245 = v12244;

	i8 v12246 = (i8)(intptr_t)(ws+3792);
	i8 v12247 = *(i8*)(intptr_t)v12246;
	i8 v12248 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v12248 = v12247;

c02_089f:;

	i8 v12249 = (i8)(intptr_t)(ws+3856);
	i8 v12250 = *(i8*)(intptr_t)v12249;
	i8 v12251 = (i8)+0;
	if (v12250==v12251) goto c02_08a2; else goto c02_08a1;

c02_08a1:;

	i8 v12252 = (i8)(intptr_t)(ws+3848);
	i1 v12253 = *(i1*)(intptr_t)v12252;
	i1 v12254 = (i1)+0;
	if (v12253==v12254) goto c02_08a6; else goto c02_08a7;

c02_08a6:;

	i8 v12255 = (i8)(intptr_t)c02_s01f1;
	i8 v12256 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12256)(v12255);

	goto c02_08a3;

c02_08a7:;

c02_08a3:;

	i8 v12257 = (i8)(intptr_t)(ws+3848);
	i1 v12258 = *(i1*)(intptr_t)v12257;
	i1 v12259 = v12258+(-1);
	i8 v12260 = (i8)(intptr_t)(ws+3848);
	*(i1*)(intptr_t)v12260 = v12259;

	i8 v12261 = (i8)(intptr_t)(ws+3840);
	i8 v12262 = *(i8*)(intptr_t)v12261;
	i8 v12263 = (i8)(intptr_t)(ws+3848);
	i1 v12264 = *(i1*)(intptr_t)v12263;
	i8 v12265 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v12266;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v12265)(&v12266, v12264, v12262);
	i8 v12267 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v12267 = v12266;

	i8 v12268 = (i8)(intptr_t)(ws+3856);
	i8 v12269 = *(i8*)(intptr_t)v12268;
	i8 v12270 = v12269+(+24);
	i8 v12271 = *(i8*)(intptr_t)v12270;
	i8 v12272 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v12272 = v12271;

	i8 v12273 = (i8)+0;
	i8 v12274 = (i8)(intptr_t)(ws+3856);
	i8 v12275 = *(i8*)(intptr_t)v12274;
	i8 v12276 = v12275+(+24);
	*(i8*)(intptr_t)v12276 = v12273;

	i8 v12277 = (i8)(intptr_t)(ws+3856);
	i8 v12278 = *(i8*)(intptr_t)v12277;
	i8 v12279 = v12278+(+32);
	i8 v12280 = *(i8*)(intptr_t)v12279;
	i8 v12281 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v12281 = v12280;

	i8 v12282 = (i8)(intptr_t)(ws+3872);
	i8 v12283 = *(i8*)(intptr_t)v12282;
	i8 v12284 = v12283+(+16);
	i8 v12285 = *(i8*)(intptr_t)v12284;
	i8 v12286 = (i8)(intptr_t)(f221_IsPtr);
	i1 v12287;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12286)(&v12287, v12285);
	i1 v12288 = (i1)+0;
	if (v12287==v12288) goto c02_08ab; else goto c02_08ac;

c02_08ab:;

	i8 v12289 = (i8)(intptr_t)c02_s01f2;
	i8 v12290 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12290)(v12289);

	goto c02_08a8;

c02_08ac:;

c02_08a8:;

	i8 v12291 = (i8)(intptr_t)(ws+3872);
	i8 v12292 = *(i8*)(intptr_t)v12291;
	i8 v12293 = (i8)(intptr_t)(ws+3864);
	i8 v12294 = *(i8*)(intptr_t)v12293;
	i8 v12295 = *(i8*)(intptr_t)v12294;
	i8 v12296 = *(i8*)(intptr_t)v12295;
	i8 v12297 = (i8)(intptr_t)(f469_MakePointerType);
	i8 v12298;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v12297)(&v12298, v12296);
	i8 v12299 = (i8)(intptr_t)(f476_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v12299)(v12298, v12292);

	i8 v12300 = (i8)(intptr_t)(ws+3864);
	i8 v12301 = *(i8*)(intptr_t)v12300;
	i8 v12302 = *(i8*)(intptr_t)v12301;
	i8 v12303 = *(i8*)(intptr_t)v12302;
	i8 v12304 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12304)(v12303);

	i8 v12305 = (i8)(intptr_t)(ws+3872);
	i8 v12306 = *(i8*)(intptr_t)v12305;
	i8 v12307 = v12306+(+16);
	i8 v12308 = *(i8*)(intptr_t)v12307;
	i8 v12309 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12309)(v12308);

	i8 v12310 = (i8)(intptr_t)(ws+3864);
	i8 v12311 = *(i8*)(intptr_t)v12310;
	i8 v12312 = *(i8*)(intptr_t)v12311;
	i8 v12313 = *(i8*)(intptr_t)v12312;
	i8 v12314 = v12313+(+48);
	i2 v12315 = *(i2*)(intptr_t)v12314;
	i1 v12316 = v12315;
	i8 v12317 = (i8)(intptr_t)(ws+3880);
	*(i1*)(intptr_t)v12317 = v12316;

	i8 v12318 = (i8)(intptr_t)(ws+3880);
	i1 v12319 = *(i1*)(intptr_t)v12318;
	i8 v12320 = (i8)(intptr_t)(ws+3880);
	i1 v12321 = *(i1*)(intptr_t)v12320;
	i8 v12322 = (i8)(intptr_t)(ws+3840);
	i8 v12323 = *(i8*)(intptr_t)v12322;
	i8 v12324 = (i8)(intptr_t)(ws+3849);
	i1 v12325 = *(i1*)(intptr_t)v12324;
	i8 v12326 = (i8)(intptr_t)(f154_MidPoparg);
	i8 v12327;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */))(intptr_t)v12326)(&v12327, v12325, v12323, v12321);
	i8 v12328 = (i8)(intptr_t)(ws+3872);
	i8 v12329 = *(i8*)(intptr_t)v12328;
	i8 v12330 = (i8)(intptr_t)(f144_MidStore);
	i8 v12331;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v12330)(&v12331, v12329, v12327, v12319);
	i8 v12332 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12332)(v12331);

	i8 v12333 = (i8)(intptr_t)(ws+3849);
	i1 v12334 = *(i1*)(intptr_t)v12333;
	i1 v12335 = v12334+(+1);
	i8 v12336 = (i8)(intptr_t)(ws+3849);
	*(i1*)(intptr_t)v12336 = v12335;

	i8 v12337 = (i8)(intptr_t)(ws+3864);
	i8 v12338 = *(i8*)(intptr_t)v12337;
	i8 v12339 = *(i8*)(intptr_t)v12338;
	i8 v12340 = v12339+(+16);
	i8 v12341 = *(i8*)(intptr_t)v12340;
	i8 v12342 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v12342 = v12341;

	goto c02_089f;

c02_08a2:;

	i8 v12343 = (i8)(intptr_t)(ws+3792);
	i8 v12344 = *(i8*)(intptr_t)v12343;
	i8 v12345 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v12345)(v12344);

	i8 v12346 = (i8)(intptr_t)(ws+3849);
	i1 v12347 = *(i1*)(intptr_t)v12346;
	i8 v12348 = (i8)(intptr_t)(ws+3840);
	i8 v12349 = *(i8*)(intptr_t)v12348;
	i8 v12350 = v12349+(+81);
	i1 v12351 = *(i1*)(intptr_t)v12350;
	if (v12347==v12351) goto c02_08b1; else goto c02_08b0;

c02_08b0:;

	i8 v12352 = (i8)(intptr_t)c02_s01f3;
	i8 v12353 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12353)(v12352);

	goto c02_08ad;

c02_08b1:;

c02_08ad:;

	i8 v12354 = (i8)(intptr_t)(f499_i_end_call);

	((void(*)(void))(intptr_t)v12354)();

	i1 v12355 = (i1)+2;
	i8 v12356 = (i8)(intptr_t)(ws+3784);
	i8 v12357 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12357)(v12356, v12355);

	i1 v12358 = (i1)+22;
	i8 v12359 = (i8)(intptr_t)(ws+3760);
	i8 v12360 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12360)(v12359, v12358);

endsub:;
}
	void f222_IsSubroutine(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
const i1 c02_s01f4[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01f5[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f94_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);

// reduce_73 workspace at ws+3840 length ws+16
void f589_reduce_73(void) {

	i8 v12361 = (i8)(intptr_t)(ws+3760);
	i8 v12362 = *(i8*)(intptr_t)v12361;
	i8 v12363 = v12362+(+16);
	i8 v12364 = *(i8*)(intptr_t)v12363;
	i8 v12365 = (i8)(intptr_t)(f222_IsSubroutine);
	i1 v12366;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12365)(&v12366, v12364);
	i1 v12367 = (i1)+0;
	if (v12366==v12367) goto c02_08b5; else goto c02_08b6;

c02_08b5:;

	i8 v12368 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v12368)();

	i8 v12369 = (i8)(intptr_t)c02_s01f4;
	i8 v12370 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12370)(v12369);

	i8 v12371 = (i8)(intptr_t)(ws+3760);
	i8 v12372 = *(i8*)(intptr_t)v12371;
	i8 v12373 = v12372+(+16);
	i8 v12374 = *(i8*)(intptr_t)v12373;
	i8 v12375 = v12374+(+32);
	i8 v12376 = *(i8*)(intptr_t)v12375;
	i8 v12377 = v12376+(+8);
	i8 v12378 = *(i8*)(intptr_t)v12377;
	i8 v12379 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12379)(v12378);

	i8 v12380 = (i8)(intptr_t)c02_s01f5;
	i8 v12381 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12381)(v12380);

	i8 v12382 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v12382)();

	goto c02_08b2;

c02_08b6:;

c02_08b2:;

	i8 v12383 = (i8)+42;
	i8 v12384 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v12385;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v12384)(&v12385, v12383);
	i8 v12386 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12386 = v12385;

	i8 v12387 = (i8)(intptr_t)(ws+80);
	i8 v12388 = *(i8*)(intptr_t)v12387;
	i8 v12389 = (i8)(intptr_t)(ws+3840);
	i8 v12390 = *(i8*)(intptr_t)v12389;
	i8 v12391 = v12390+(+16);
	*(i8*)(intptr_t)v12391 = v12388;

	i8 v12392 = (i8)(intptr_t)(ws+3760);
	i8 v12393 = *(i8*)(intptr_t)v12392;
	i8 v12394 = v12393+(+16);
	i8 v12395 = *(i8*)(intptr_t)v12394;
	i8 v12396 = *(i8*)(intptr_t)v12395;
	i8 v12397 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v12397 = v12396;

	i8 v12398 = (i8)(intptr_t)(ws+3760);
	i8 v12399 = *(i8*)(intptr_t)v12398;
	i8 v12400 = (i8)(intptr_t)(ws+3840);
	i8 v12401 = *(i8*)(intptr_t)v12400;
	*(i8*)(intptr_t)v12401 = v12399;

	i8 v12402 = (i8)(intptr_t)(ws+3848);
	i8 v12403 = *(i8*)(intptr_t)v12402;
	i8 v12404 = (i8)(intptr_t)(ws+3840);
	i8 v12405 = *(i8*)(intptr_t)v12404;
	i8 v12406 = v12405+(+8);
	*(i8*)(intptr_t)v12406 = v12403;

	i8 v12407 = (i8)(intptr_t)(ws+3848);
	i8 v12408 = *(i8*)(intptr_t)v12407;
	i1 v12409 = (i1)+0;
	i8 v12410 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v12411;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v12410)(&v12411, v12409, v12408);
	i8 v12412 = (i8)(intptr_t)(ws+3840);
	i8 v12413 = *(i8*)(intptr_t)v12412;
	i8 v12414 = v12413+(+24);
	*(i8*)(intptr_t)v12414 = v12411;

	i8 v12415 = (i8)(intptr_t)(ws+3848);
	i8 v12416 = *(i8*)(intptr_t)v12415;
	i1 v12417 = (i1)+0;
	i8 v12418 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v12419;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v12418)(&v12419, v12417, v12416);
	i8 v12420 = (i8)(intptr_t)(ws+3840);
	i8 v12421 = *(i8*)(intptr_t)v12420;
	i8 v12422 = v12421+(+32);
	*(i8*)(intptr_t)v12422 = v12419;

	i8 v12423 = (i8)(intptr_t)(ws+3840);
	i8 v12424 = *(i8*)(intptr_t)v12423;
	i8 v12425 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v12425 = v12424;

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_74 workspace at ws+3840 length ws+0
void f590_reduce_74(void) {

	i8 v12426 = (i8)(intptr_t)(ws+3768);
	i8 v12427 = *(i8*)(intptr_t)v12426;
	i8 v12428 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12428 = v12427;

	i1 v12429 = (i1)+4;
	i8 v12430 = (i8)(intptr_t)(ws+3760);
	i8 v12431 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12431)(v12430, v12429);

endsub:;
}
	void f119_MidEnd(i8* /* m */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_75 workspace at ws+3840 length ws+0
void f591_reduce_75(void) {

	i8 v12432 = (i8)(intptr_t)(f119_MidEnd);
	i8 v12433;

	((void(*)(i8* /* m */))(intptr_t)v12432)(&v12433);
	i8 v12434 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12434 = v12433;

	i1 v12435 = (i1)+4;
	i8 v12436 = (i8)(intptr_t)(ws+3760);
	i8 v12437 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12437)(v12436, v12435);

endsub:;
}

// reduce_76 workspace at ws+3840 length ws+0
void f592_reduce_76(void) {

	i8 v12438 = (i8)(intptr_t)(ws+3760);
	i8 v12439 = *(i8*)(intptr_t)v12438;
	i8 v12440 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12440 = v12439;

endsub:;
}
	void f58_Discard(i8 /* node */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_77 workspace at ws+3840 length ws+0
void f593_reduce_77(void) {

	i8 v12441 = (i8)(intptr_t)(ws+3760);
	i8 v12442 = *(i8*)(intptr_t)v12441;
	i8 v12443 = v12442+(+24);
	i8 v12444 = *(i8*)(intptr_t)v12443;
	i8 v12445 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v12445)(v12444);

	i8 v12446 = (i8)(intptr_t)(ws+3776);
	i8 v12447 = *(i8*)(intptr_t)v12446;
	i8 v12448 = (i8)(intptr_t)(ws+3760);
	i8 v12449 = *(i8*)(intptr_t)v12448;
	i8 v12450 = v12449+(+24);
	*(i8*)(intptr_t)v12450 = v12447;

	i8 v12451 = (i8)(intptr_t)(ws+3760);
	i8 v12452 = *(i8*)(intptr_t)v12451;
	i8 v12453 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12453 = v12452;

	i1 v12454 = (i1)+45;
	i8 v12455 = (i8)(intptr_t)(ws+3768);
	i8 v12456 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12456)(v12455, v12454);

endsub:;
}
	void f69_StartError(void);
const i1 c02_s01f6[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f476_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f216_CheckNotPartialType(i8 /* type */);
	void f216_CheckNotPartialType(i8 /* type */);
	void f158_NodeWidth(i1* /* width */, i8 /* node */);
	void f119_MidEnd(i8* /* m */);
	void f135_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);

// reduce_78 workspace at ws+3840 length ws+8
void f594_reduce_78(void) {

	i8 v12457 = (i8)(intptr_t)(ws+80);
	i8 v12458 = *(i8*)(intptr_t)v12457;
	i8 v12459 = v12458+(+24);
	i8 v12460 = *(i8*)(intptr_t)v12459;
	i8 v12461 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12461 = v12460;

	i8 v12462 = (i8)(intptr_t)(ws+3840);
	i8 v12463 = *(i8*)(intptr_t)v12462;
	i8 v12464 = (i8)+0;
	if (v12463==v12464) goto c02_08ba; else goto c02_08bb;

c02_08ba:;

	i8 v12465 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v12465)();

	i8 v12466 = (i8)(intptr_t)c02_s01f6;
	i8 v12467 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12467)(v12466);

	i8 v12468 = (i8)(intptr_t)(ws+80);
	i8 v12469 = *(i8*)(intptr_t)v12468;
	i8 v12470 = v12469+(+8);
	i8 v12471 = *(i8*)(intptr_t)v12470;
	i8 v12472 = *(i8*)(intptr_t)v12471;
	i8 v12473 = v12472+(+8);
	i8 v12474 = *(i8*)(intptr_t)v12473;
	i8 v12475 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12475)(v12474);

	i8 v12476 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v12476)();

	goto c02_08b7;

c02_08bb:;

c02_08b7:;

	i8 v12477 = (i8)(intptr_t)(ws+80);
	i8 v12478 = *(i8*)(intptr_t)v12477;
	i8 v12479 = v12478+(+24);
	i8 v12480 = *(i8*)(intptr_t)v12479;
	i8 v12481 = *(i8*)(intptr_t)v12480;
	i8 v12482 = v12481+(+16);
	i8 v12483 = *(i8*)(intptr_t)v12482;
	i8 v12484 = (i8)(intptr_t)(ws+80);
	i8 v12485 = *(i8*)(intptr_t)v12484;
	i8 v12486 = v12485+(+24);
	*(i8*)(intptr_t)v12486 = v12483;

	i8 v12487 = (i8)(intptr_t)(ws+3760);
	i8 v12488 = *(i8*)(intptr_t)v12487;
	i8 v12489 = (i8)(intptr_t)(ws+3840);
	i8 v12490 = *(i8*)(intptr_t)v12489;
	i8 v12491 = *(i8*)(intptr_t)v12490;
	i8 v12492 = *(i8*)(intptr_t)v12491;
	i8 v12493 = (i8)(intptr_t)(f476_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v12493)(v12492, v12488);

	i8 v12494 = (i8)(intptr_t)(ws+3840);
	i8 v12495 = *(i8*)(intptr_t)v12494;
	i8 v12496 = *(i8*)(intptr_t)v12495;
	i8 v12497 = *(i8*)(intptr_t)v12496;
	i8 v12498 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12498)(v12497);

	i8 v12499 = (i8)(intptr_t)(ws+3760);
	i8 v12500 = *(i8*)(intptr_t)v12499;
	i8 v12501 = v12500+(+16);
	i8 v12502 = *(i8*)(intptr_t)v12501;
	i8 v12503 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12503)(v12502);

	i8 v12504 = (i8)(intptr_t)(ws+80);
	i8 v12505 = *(i8*)(intptr_t)v12504;
	i8 v12506 = v12505+(+40);
	i1 v12507 = *(i1*)(intptr_t)v12506;
	i1 v12508 = v12507+(+1);
	i8 v12509 = (i8)(intptr_t)(ws+80);
	i8 v12510 = *(i8*)(intptr_t)v12509;
	i8 v12511 = v12510+(+40);
	*(i1*)(intptr_t)v12511 = v12508;

	i8 v12512 = (i8)(intptr_t)(ws+3760);
	i8 v12513 = *(i8*)(intptr_t)v12512;
	i8 v12514 = (i8)(intptr_t)(f158_NodeWidth);
	i1 v12515;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v12514)(&v12515, v12513);
	i8 v12516 = (i8)(intptr_t)(f119_MidEnd);
	i8 v12517;

	((void(*)(i8* /* m */))(intptr_t)v12516)(&v12517);
	i8 v12518 = (i8)(intptr_t)(ws+3760);
	i8 v12519 = *(i8*)(intptr_t)v12518;
	i8 v12520 = (i8)(intptr_t)(ws+80);
	i8 v12521 = *(i8*)(intptr_t)v12520;
	i8 v12522 = v12521+(+8);
	i8 v12523 = *(i8*)(intptr_t)v12522;
	i8 v12524 = (i8)(intptr_t)(ws+80);
	i8 v12525 = *(i8*)(intptr_t)v12524;
	i8 v12526 = v12525+(+8);
	i8 v12527 = *(i8*)(intptr_t)v12526;
	i8 v12528 = v12527+(+80);
	i1 v12529 = *(i1*)(intptr_t)v12528;
	i8 v12530 = (i8)(intptr_t)(ws+80);
	i8 v12531 = *(i8*)(intptr_t)v12530;
	i8 v12532 = v12531+(+40);
	i1 v12533 = *(i1*)(intptr_t)v12532;
	i1 v12534 = v12529-v12533;
	i8 v12535 = (i8)(intptr_t)(f135_MidArg);
	i8 v12536;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v12535)(&v12536, v12534, v12523, v12519, v12517, v12515);
	i8 v12537 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12537 = v12536;

endsub:;
}
	void f125_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_79 workspace at ws+3840 length ws+0
void f595_reduce_79(void) {

	i8 v12538 = (i8)(intptr_t)(ws+3768);
	i8 v12539 = *(i8*)(intptr_t)v12538;
	i8 v12540 = (i8)(intptr_t)(ws+3784);
	i8 v12541 = *(i8*)(intptr_t)v12540;
	i8 v12542 = (i8)(intptr_t)(f125_MidPair);
	i8 v12543;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v12542)(&v12543, v12541, v12539);
	i8 v12544 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12544 = v12543;

	i1 v12545 = (i1)+45;
	i8 v12546 = (i8)(intptr_t)(ws+3776);
	i8 v12547 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12547)(v12546, v12545);

	i1 v12548 = (i1)+4;
	i8 v12549 = (i8)(intptr_t)(ws+3760);
	i8 v12550 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12550)(v12549, v12548);

endsub:;
}
	void f125_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);

// reduce_80 workspace at ws+3840 length ws+0
void f596_reduce_80(void) {

	i8 v12551 = (i8)(intptr_t)(ws+3760);
	i8 v12552 = *(i8*)(intptr_t)v12551;
	i8 v12553 = (i8)+0;
	i8 v12554 = (i8)(intptr_t)(f125_MidPair);
	i8 v12555;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v12554)(&v12555, v12553, v12552);
	i8 v12556 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12556 = v12555;

endsub:;
}
	void f125_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_81 workspace at ws+3840 length ws+0
void f597_reduce_81(void) {

	i8 v12557 = (i8)(intptr_t)(ws+3760);
	i8 v12558 = *(i8*)(intptr_t)v12557;
	i8 v12559 = (i8)(intptr_t)(ws+3776);
	i8 v12560 = *(i8*)(intptr_t)v12559;
	i8 v12561 = (i8)(intptr_t)(f125_MidPair);
	i8 v12562;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v12561)(&v12562, v12560, v12558);
	i8 v12563 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12563 = v12562;

	i1 v12564 = (i1)+45;
	i8 v12565 = (i8)(intptr_t)(ws+3768);
	i8 v12566 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12566)(v12565, v12564);

endsub:;
}
	void f228_UndoLValue(i8* /* address */, i8 /* lvalue */);

// reduce_82 workspace at ws+3840 length ws+0
void f598_reduce_82(void) {

	i8 v12567 = (i8)(intptr_t)(ws+3760);
	i8 v12568 = *(i8*)(intptr_t)v12567;
	i8 v12569 = (i8)(intptr_t)(f228_UndoLValue);
	i8 v12570;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v12569)(&v12570, v12568);
	i8 v12571 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12571 = v12570;

endsub:;
}
	void f146_MidStartsub(i8* /* m */, i8 /* subr */);
	void f465_Generate(i8 /* statement */);
	void f122_MidEndsub(i8* /* m */, i8 /* subr */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_83 workspace at ws+3840 length ws+0
void f599_reduce_83(void) {

	i8 v12572 = (i8)(intptr_t)(ws+2056);
	i8 v12573 = *(i8*)(intptr_t)v12572;
	i8 v12574 = v12573+(+82);
	i1 v12575 = *(i1*)(intptr_t)v12574;
	i1 v12576 = v12575|(+2);
	i8 v12577 = (i8)(intptr_t)(ws+2056);
	i8 v12578 = *(i8*)(intptr_t)v12577;
	i8 v12579 = v12578+(+82);
	*(i1*)(intptr_t)v12579 = v12576;

	i8 v12580 = (i8)(intptr_t)(ws+2056);
	i8 v12581 = *(i8*)(intptr_t)v12580;
	i8 v12582 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12582 = v12581;

	i8 v12583 = (i8)(intptr_t)(ws+40);
	i8 v12584 = *(i8*)(intptr_t)v12583;
	i8 v12585 = (i8)(intptr_t)(f146_MidStartsub);
	i8 v12586;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12585)(&v12586, v12584);
	i8 v12587 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12587)(v12586);

	i8 v12588 = (i8)(intptr_t)(ws+40);
	i8 v12589 = *(i8*)(intptr_t)v12588;
	i8 v12590 = (i8)(intptr_t)(f122_MidEndsub);
	i8 v12591;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12590)(&v12591, v12589);
	i8 v12592 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12592)(v12591);

	i8 v12593 = (i8)(intptr_t)(ws+40);
	i8 v12594 = *(i8*)(intptr_t)v12593;
	i8 v12595 = v12594+(+8);
	i8 v12596 = *(i8*)(intptr_t)v12595;
	i8 v12597 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12597 = v12596;

	i1 v12598 = (i1)+22;
	i8 v12599 = (i8)(intptr_t)(ws+3760);
	i8 v12600 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12600)(v12599, v12598);

endsub:;
}
const i1 c02_s01f7[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// not_an_interface workspace at ws+3848 length ws+0
void f601_not_an_interface(void) {

	i8 v12601 = (i8)(intptr_t)c02_s01f7;
	i8 v12602 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12602)(v12601);

endsub:;
}
	void f222_IsSubroutine(i1* /* result */, i8 /* type */);
	void f601_not_an_interface(void);
	void f601_not_an_interface(void);
	void f199_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f199_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f473_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f473_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_84 workspace at ws+3840 length ws+8
void f600_reduce_84(void) {


	i8 v12603 = (i8)(intptr_t)(ws+3760);
	i8 v12604 = *(i8*)(intptr_t)v12603;
	i8 v12605 = (i8)(intptr_t)(f222_IsSubroutine);
	i1 v12606;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12605)(&v12606, v12604);
	i1 v12607 = (i1)+0;
	if (v12606==v12607) goto c02_08bf; else goto c02_08c0;

c02_08bf:;

	i8 v12608 = (i8)(intptr_t)(f601_not_an_interface);

	((void(*)(void))(intptr_t)v12608)();

	goto c02_08bc;

c02_08c0:;

c02_08bc:;

	i8 v12609 = (i8)(intptr_t)(ws+3760);
	i8 v12610 = *(i8*)(intptr_t)v12609;
	i8 v12611 = *(i8*)(intptr_t)v12610;
	i8 v12612 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12612 = v12611;

	i8 v12613 = (i8)(intptr_t)(ws+3840);
	i8 v12614 = *(i8*)(intptr_t)v12613;
	i8 v12615 = v12614+(+82);
	i1 v12616 = *(i1*)(intptr_t)v12615;
	i1 v12617 = v12616&(+2);
	i1 v12618 = (i1)+0;
	if (v12617==v12618) goto c02_08c4; else goto c02_08c5;

c02_08c4:;

	i8 v12619 = (i8)(intptr_t)(f601_not_an_interface);

	((void(*)(void))(intptr_t)v12619)();

	goto c02_08c1;

c02_08c5:;

c02_08c1:;

	i8 v12620 = (i8)(intptr_t)(ws+2056);
	i8 v12621 = *(i8*)(intptr_t)v12620;
	i8 v12622 = v12621+(+82);
	i1 v12623 = *(i1*)(intptr_t)v12622;
	i1 v12624 = v12623|(+4);
	i8 v12625 = (i8)(intptr_t)(ws+2056);
	i8 v12626 = *(i8*)(intptr_t)v12625;
	i8 v12627 = v12626+(+82);
	*(i1*)(intptr_t)v12627 = v12624;

	i8 v12628 = (i8)(intptr_t)(ws+3840);
	i8 v12629 = *(i8*)(intptr_t)v12628;
	i8 v12630 = (i8)(intptr_t)(ws+2056);
	i8 v12631 = *(i8*)(intptr_t)v12630;
	i8 v12632 = v12631+(+48);
	*(i8*)(intptr_t)v12632 = v12629;

	i8 v12633 = (i8)(intptr_t)(ws+3760);
	i8 v12634 = *(i8*)(intptr_t)v12633;
	i8 v12635 = (i8)(intptr_t)(ws+2056);
	i8 v12636 = *(i8*)(intptr_t)v12635;
	i8 v12637 = v12636+(+40);
	*(i8*)(intptr_t)v12637 = v12634;

	i8 v12638 = (i8)(intptr_t)(ws+40);
	i8 v12639 = *(i8*)(intptr_t)v12638;
	i8 v12640 = (i8)(intptr_t)(ws+3840);
	i8 v12641 = *(i8*)(intptr_t)v12640;
	i8 v12642 = (i8)(intptr_t)(f199_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v12642)(v12641, v12639);

	i8 v12643 = (i8)(intptr_t)(ws+3840);
	i8 v12644 = *(i8*)(intptr_t)v12643;
	i8 v12645 = (i8)(intptr_t)(ws+2056);
	i8 v12646 = *(i8*)(intptr_t)v12645;
	i8 v12647 = (i8)(intptr_t)(f199_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v12647)(v12646, v12644);

	i8 v12648 = (i8)(intptr_t)(ws+3840);
	i8 v12649 = *(i8*)(intptr_t)v12648;
	i8 v12650 = v12649+(+80);
	i1 v12651 = *(i1*)(intptr_t)v12650;
	i8 v12652 = (i8)(intptr_t)(ws+2056);
	i8 v12653 = *(i8*)(intptr_t)v12652;
	i8 v12654 = v12653+(+80);
	*(i1*)(intptr_t)v12654 = v12651;

	i8 v12655 = (i8)(intptr_t)(ws+2056);
	i8 v12656 = *(i8*)(intptr_t)v12655;
	i8 v12657 = v12656+(+80);
	i1 v12658 = *(i1*)(intptr_t)v12657;
	i1 v12659 = (i1)+0;
	if (v12658==v12659) goto c02_08ca; else goto c02_08c9;

c02_08c9:;

	i8 v12660 = (i8)(intptr_t)(ws+3840);
	i8 v12661 = *(i8*)(intptr_t)v12660;
	i8 v12662 = v12661+(+16);
	i8 v12663 = *(i8*)(intptr_t)v12662;
	i8 v12664 = (i8)(intptr_t)(ws+2056);
	i8 v12665 = *(i8*)(intptr_t)v12664;
	i8 v12666 = (i8)(intptr_t)(f473_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v12666)(v12665, v12663);

	goto c02_08c6;

c02_08ca:;

c02_08c6:;

	i8 v12667 = (i8)(intptr_t)(ws+3840);
	i8 v12668 = *(i8*)(intptr_t)v12667;
	i8 v12669 = v12668+(+81);
	i1 v12670 = *(i1*)(intptr_t)v12669;
	i8 v12671 = (i8)(intptr_t)(ws+2056);
	i8 v12672 = *(i8*)(intptr_t)v12671;
	i8 v12673 = v12672+(+81);
	*(i1*)(intptr_t)v12673 = v12670;

	i8 v12674 = (i8)(intptr_t)(ws+2056);
	i8 v12675 = *(i8*)(intptr_t)v12674;
	i8 v12676 = v12675+(+81);
	i1 v12677 = *(i1*)(intptr_t)v12676;
	i1 v12678 = (i1)+0;
	if (v12677==v12678) goto c02_08cf; else goto c02_08ce;

c02_08ce:;

	i8 v12679 = (i8)(intptr_t)(ws+3840);
	i8 v12680 = *(i8*)(intptr_t)v12679;
	i1 v12681 = (i1)+0;
	i8 v12682 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v12683;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v12682)(&v12683, v12681, v12680);
	i8 v12684 = (i8)(intptr_t)(ws+2056);
	i8 v12685 = *(i8*)(intptr_t)v12684;
	i8 v12686 = (i8)(intptr_t)(f473_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v12686)(v12685, v12683);

	goto c02_08cb;

c02_08cf:;

c02_08cb:;

	i1 v12687 = (i1)+68;
	i8 v12688 = (i8)(intptr_t)(ws+3768);
	i8 v12689 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12689)(v12688, v12687);

endsub:;
}
	void f197_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_85 workspace at ws+3840 length ws+0
void f602_reduce_85(void) {

	i8 v12690 = (i8)(intptr_t)(ws+2056);
	i8 v12691 = *(i8*)(intptr_t)v12690;
	i8 v12692 = v12691+(+56);
	i2 v12693 = *(i2*)(intptr_t)v12692;
	i8 v12694 = (i8)(intptr_t)(ws+3768);
	i8 v12695 = *(i8*)(intptr_t)v12694;
	i8 v12696 = (i8)(intptr_t)(f197_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* id */))(intptr_t)v12696)(v12695, v12693);

	i1 v12697 = (i1)+11;
	i8 v12698 = (i8)(intptr_t)(ws+3784);
	i8 v12699 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12699)(v12698, v12697);

	i1 v12700 = (i1)+16;
	i8 v12701 = (i8)(intptr_t)(ws+3776);
	i8 v12702 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12702)(v12701, v12700);

	i1 v12703 = (i1)+4;
	i8 v12704 = (i8)(intptr_t)(ws+3760);
	i8 v12705 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12705)(v12704, v12703);

endsub:;
}
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f230_AllocSubrId(i2* /* id */);
	void f61_AllocNewType(i8* /* type */);
	void f196_EmitterDeclareSubroutine(i8 /* subr */);

// reduce_86 workspace at ws+3840 length ws+8
void f603_reduce_86(void) {

	i8 v12706 = (i8)+83;
	i8 v12707 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v12708;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v12707)(&v12708, v12706);
	i8 v12709 = (i8)(intptr_t)(ws+2056);
	*(i8*)(intptr_t)v12709 = v12708;

	i8 v12710 = (i8)(intptr_t)(ws+40);
	i8 v12711 = *(i8*)(intptr_t)v12710;
	i8 v12712 = v12711+(+16);
	i8 v12713 = (i8)(intptr_t)(ws+2056);
	i8 v12714 = *(i8*)(intptr_t)v12713;
	i8 v12715 = v12714+(+32);
	*(i8*)(intptr_t)v12715 = v12712;

	i8 v12716 = (i8)(intptr_t)(ws+40);
	i8 v12717 = *(i8*)(intptr_t)v12716;
	i8 v12718 = (i8)(intptr_t)(ws+2056);
	i8 v12719 = *(i8*)(intptr_t)v12718;
	i8 v12720 = v12719+(+8);
	*(i8*)(intptr_t)v12720 = v12717;

	i8 v12721 = (i8)(intptr_t)(f230_AllocSubrId);
	i2 v12722;

	((void(*)(i2* /* id */))(intptr_t)v12721)(&v12722);
	i8 v12723 = (i8)(intptr_t)(ws+2056);
	i8 v12724 = *(i8*)(intptr_t)v12723;
	i8 v12725 = v12724+(+56);
	*(i2*)(intptr_t)v12725 = v12722;

	i8 v12726 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v12727;

	((void(*)(i8* /* type */))(intptr_t)v12726)(&v12727);
	i8 v12728 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12728 = v12727;

	i1 v12729 = (i1)+6;
	i8 v12730 = (i8)(intptr_t)(ws+3840);
	i8 v12731 = *(i8*)(intptr_t)v12730;
	i8 v12732 = v12731+(+52);
	*(i1*)(intptr_t)v12732 = v12729;

	i8 v12733 = (i8)(intptr_t)(ws+1904);
	i8 v12734 = *(i8*)(intptr_t)v12733;
	i8 v12735 = v12734+(+48);
	i2 v12736 = *(i2*)(intptr_t)v12735;
	i8 v12737 = (i8)(intptr_t)(ws+3840);
	i8 v12738 = *(i8*)(intptr_t)v12737;
	i8 v12739 = v12738+(+48);
	*(i2*)(intptr_t)v12739 = v12736;

	i8 v12740 = (i8)(intptr_t)(ws+1904);
	i8 v12741 = *(i8*)(intptr_t)v12740;
	i8 v12742 = v12741+(+53);
	i1 v12743 = *(i1*)(intptr_t)v12742;
	i8 v12744 = (i8)(intptr_t)(ws+3840);
	i8 v12745 = *(i8*)(intptr_t)v12744;
	i8 v12746 = v12745+(+53);
	*(i1*)(intptr_t)v12746 = v12743;

	i8 v12747 = (i8)(intptr_t)(ws+1904);
	i8 v12748 = *(i8*)(intptr_t)v12747;
	i8 v12749 = v12748+(+50);
	i2 v12750 = *(i2*)(intptr_t)v12749;
	i8 v12751 = (i8)(intptr_t)(ws+3840);
	i8 v12752 = *(i8*)(intptr_t)v12751;
	i8 v12753 = v12752+(+50);
	*(i2*)(intptr_t)v12753 = v12750;

	i8 v12754 = (i8)(intptr_t)(ws+2056);
	i8 v12755 = *(i8*)(intptr_t)v12754;
	i8 v12756 = (i8)(intptr_t)(ws+3840);
	i8 v12757 = *(i8*)(intptr_t)v12756;
	*(i8*)(intptr_t)v12757 = v12755;

	i8 v12758 = (i8)(intptr_t)(ws+3840);
	i8 v12759 = *(i8*)(intptr_t)v12758;
	i8 v12760 = (i8)(intptr_t)(ws+2056);
	i8 v12761 = *(i8*)(intptr_t)v12760;
	i8 v12762 = v12761+(+40);
	*(i8*)(intptr_t)v12762 = v12759;

	i8 v12763 = (i8)(intptr_t)(ws+2056);
	i8 v12764 = *(i8*)(intptr_t)v12763;
	i8 v12765 = (i8)(intptr_t)(ws+2056);
	i8 v12766 = *(i8*)(intptr_t)v12765;
	i8 v12767 = v12766+(+48);
	*(i8*)(intptr_t)v12767 = v12764;

	i1 v12768 = (i1)+30;
	i8 v12769 = (i8)(intptr_t)(ws+3760);
	i8 v12770 = *(i8*)(intptr_t)v12769;
	i8 v12771 = v12770+(+32);
	*(i1*)(intptr_t)v12771 = v12768;

	i8 v12772 = (i8)(intptr_t)(ws+3840);
	i8 v12773 = *(i8*)(intptr_t)v12772;
	i8 v12774 = (i8)(intptr_t)(ws+3760);
	i8 v12775 = *(i8*)(intptr_t)v12774;
	*(i8*)(intptr_t)v12775 = v12773;

	i8 v12776 = (i8)(intptr_t)(ws+3760);
	i8 v12777 = *(i8*)(intptr_t)v12776;
	i8 v12778 = (i8)(intptr_t)(ws+3840);
	i8 v12779 = *(i8*)(intptr_t)v12778;
	i8 v12780 = v12779+(+32);
	*(i8*)(intptr_t)v12780 = v12777;

	i8 v12781 = (i8)(intptr_t)(ws+3760);
	i8 v12782 = *(i8*)(intptr_t)v12781;
	i8 v12783 = (i8)(intptr_t)(ws+2056);
	i8 v12784 = *(i8*)(intptr_t)v12783;
	*(i8*)(intptr_t)v12784 = v12782;

	i8 v12785 = (i8)(intptr_t)(ws+2056);
	i8 v12786 = *(i8*)(intptr_t)v12785;
	i8 v12787 = (i8)(intptr_t)(f196_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v12787)(v12786);

	i8 v12788 = (i8)(intptr_t)(ws+3760);
	i8 v12789 = *(i8*)(intptr_t)v12788;
	i8 v12790 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12790 = v12789;

endsub:;
}
	void f222_IsSubroutine(i1* /* result */, i8 /* type */);
const i1 c02_s01f8[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f71_SimpleError(i8 /* message */);
const i1 c02_s01f9[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
const i1 c02_s01fa[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_87 workspace at ws+3840 length ws+0
void f604_reduce_87(void) {

	i8 v12791 = (i8)(intptr_t)(ws+3760);
	i8 v12792 = *(i8*)(intptr_t)v12791;
	i8 v12793 = v12792+(+32);
	i1 v12794 = *(i1*)(intptr_t)v12793;
	i1 v12795 = (i1)+30;
	if (v12794==v12795) goto c02_08d7; else goto c02_08d5;

c02_08d7:;

	i8 v12796 = (i8)(intptr_t)(ws+3760);
	i8 v12797 = *(i8*)(intptr_t)v12796;
	i8 v12798 = *(i8*)(intptr_t)v12797;
	i8 v12799 = (i8)(intptr_t)(f222_IsSubroutine);
	i1 v12800;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12799)(&v12800, v12798);
	i1 v12801 = (i1)+0;
	if (v12800==v12801) goto c02_08d5; else goto c02_08d6;

c02_08d5:;

	i8 v12802 = (i8)(intptr_t)c02_s01f8;
	i8 v12803 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12803)(v12802);

	goto c02_08d0;

c02_08d6:;

c02_08d0:;

	i8 v12804 = (i8)(intptr_t)(ws+3760);
	i8 v12805 = *(i8*)(intptr_t)v12804;
	i8 v12806 = *(i8*)(intptr_t)v12805;
	i8 v12807 = *(i8*)(intptr_t)v12806;
	i8 v12808 = (i8)(intptr_t)(ws+2056);
	*(i8*)(intptr_t)v12808 = v12807;

	i8 v12809 = (i8)(intptr_t)(ws+2056);
	i8 v12810 = *(i8*)(intptr_t)v12809;
	i8 v12811 = v12810+(+82);
	i1 v12812 = *(i1*)(intptr_t)v12811;
	i1 v12813 = v12812&(+1);
	i1 v12814 = (i1)+0;
	if (v12813==v12814) goto c02_08dc; else goto c02_08db;

c02_08db:;

	i8 v12815 = (i8)(intptr_t)c02_s01f9;
	i8 v12816 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12816)(v12815);

	goto c02_08d8;

c02_08dc:;

c02_08d8:;

	i8 v12817 = (i8)(intptr_t)(ws+2056);
	i8 v12818 = *(i8*)(intptr_t)v12817;
	i8 v12819 = v12818+(+8);
	i8 v12820 = *(i8*)(intptr_t)v12819;
	i8 v12821 = (i8)(intptr_t)(ws+40);
	i8 v12822 = *(i8*)(intptr_t)v12821;
	if (v12820==v12822) goto c02_08e1; else goto c02_08e0;

c02_08e0:;

	i8 v12823 = (i8)(intptr_t)c02_s01fa;
	i8 v12824 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12824)(v12823);

	goto c02_08dd;

c02_08e1:;

c02_08dd:;

	i1 v12825 = (i1)+25;
	i8 v12826 = (i8)(intptr_t)(ws+3768);
	i8 v12827 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12827)(v12826, v12825);

endsub:;
}
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f146_MidStartsub(i8* /* m */, i8 /* subr */);
	void f465_Generate(i8 /* statement */);

// reduce_88 workspace at ws+3840 length ws+8
void f605_reduce_88(void) {

	i8 v12828 = (i8)+16;
	i8 v12829 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v12830;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v12829)(&v12830, v12828);
	i8 v12831 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12831 = v12830;

	i8 v12832 = (i8)(intptr_t)(ws+88);
	i8 v12833 = *(i8*)(intptr_t)v12832;
	i8 v12834 = (i8)(intptr_t)(ws+3840);
	i8 v12835 = *(i8*)(intptr_t)v12834;
	i8 v12836 = v12835+(+8);
	*(i8*)(intptr_t)v12836 = v12833;

	i8 v12837 = (i8)(intptr_t)(ws+52);
	i2 v12838 = *(i2*)(intptr_t)v12837;
	i8 v12839 = (i8)(intptr_t)(ws+3840);
	i8 v12840 = *(i8*)(intptr_t)v12839;
	*(i2*)(intptr_t)v12840 = v12838;

	i2 v12841 = (i2)+0;
	i8 v12842 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v12842 = v12841;

	i8 v12843 = (i8)(intptr_t)(ws+54);
	i2 v12844 = *(i2*)(intptr_t)v12843;
	i8 v12845 = (i8)(intptr_t)(ws+3840);
	i8 v12846 = *(i8*)(intptr_t)v12845;
	i8 v12847 = v12846+(+2);
	*(i2*)(intptr_t)v12847 = v12844;

	i2 v12848 = (i2)+0;
	i8 v12849 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v12849 = v12848;

	i8 v12850 = (i8)(intptr_t)(ws+3840);
	i8 v12851 = *(i8*)(intptr_t)v12850;
	i8 v12852 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v12852 = v12851;

	i8 v12853 = (i8)(intptr_t)(ws+2056);
	i8 v12854 = *(i8*)(intptr_t)v12853;
	i8 v12855 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12855 = v12854;

	i8 v12856 = (i8)(intptr_t)(ws+40);
	i8 v12857 = *(i8*)(intptr_t)v12856;
	i8 v12858 = (i8)(intptr_t)(f146_MidStartsub);
	i8 v12859;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12858)(&v12859, v12857);
	i8 v12860 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12860)(v12859);

	i8 v12861 = (i8)(intptr_t)(ws+40);
	i8 v12862 = *(i8*)(intptr_t)v12861;
	i8 v12863 = v12862+(+82);
	i1 v12864 = *(i1*)(intptr_t)v12863;
	i1 v12865 = v12864|(+1);
	i8 v12866 = (i8)(intptr_t)(ws+40);
	i8 v12867 = *(i8*)(intptr_t)v12866;
	i8 v12868 = v12867+(+82);
	*(i1*)(intptr_t)v12868 = v12865;

endsub:;
}
	void f122_MidEndsub(i8* /* m */, i8 /* subr */);
	void f465_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);
	void f471_DestructSubroutineContents(i8 /* subr */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_89 workspace at ws+3840 length ws+16
void f606_reduce_89(void) {

	i8 v12869 = (i8)(intptr_t)(ws+40);
	i8 v12870 = *(i8*)(intptr_t)v12869;
	i8 v12871 = (i8)(intptr_t)(f122_MidEndsub);
	i8 v12872;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12871)(&v12872, v12870);
	i8 v12873 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12873)(v12872);

	i8 v12874 = (i8)(intptr_t)(ws+88);
	i8 v12875 = *(i8*)(intptr_t)v12874;
	i2 v12876 = *(i2*)(intptr_t)v12875;
	i8 v12877 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v12877 = v12876;

	i8 v12878 = (i8)(intptr_t)(ws+88);
	i8 v12879 = *(i8*)(intptr_t)v12878;
	i8 v12880 = v12879+(+2);
	i2 v12881 = *(i2*)(intptr_t)v12880;
	i8 v12882 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v12882 = v12881;

	i8 v12883 = (i8)(intptr_t)(ws+88);
	i8 v12884 = *(i8*)(intptr_t)v12883;
	i8 v12885 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v12885 = v12884;

	i8 v12886 = (i8)(intptr_t)(ws+3840);
	i8 v12887 = *(i8*)(intptr_t)v12886;
	i8 v12888 = v12887+(+8);
	i8 v12889 = *(i8*)(intptr_t)v12888;
	i8 v12890 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v12890 = v12889;

	i8 v12891 = (i8)(intptr_t)(ws+3840);
	i8 v12892 = *(i8*)(intptr_t)v12891;
	i8 v12893 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v12893)(v12892);

	i8 v12894 = (i8)(intptr_t)(ws+40);
	i8 v12895 = *(i8*)(intptr_t)v12894;
	i8 v12896 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v12896 = v12895;

	i8 v12897 = (i8)(intptr_t)(ws+3848);
	i8 v12898 = *(i8*)(intptr_t)v12897;
	i8 v12899 = v12898+(+8);
	i8 v12900 = *(i8*)(intptr_t)v12899;
	i8 v12901 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12901 = v12900;

	i8 v12902 = (i8)(intptr_t)(ws+3848);
	i8 v12903 = *(i8*)(intptr_t)v12902;
	i8 v12904 = (i8)(intptr_t)(f471_DestructSubroutineContents);

	((void(*)(i8 /* subr */))(intptr_t)v12904)(v12903);

	i1 v12905 = (i1)+25;
	i8 v12906 = (i8)(intptr_t)(ws+3760);
	i8 v12907 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12907)(v12906, v12905);

endsub:;
}

// reduce_90 workspace at ws+3840 length ws+0
void f607_reduce_90(void) {

	i1 v12908 = (i1)+0;
	i8 v12909 = (i8)(intptr_t)(ws+2056);
	i8 v12910 = *(i8*)(intptr_t)v12909;
	i8 v12911 = v12910+(+81);
	*(i1*)(intptr_t)v12911 = v12908;

endsub:;
}
	void f93_CountParameters(i1* /* count */, i8 /* param */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_91 workspace at ws+3840 length ws+0
void f608_reduce_91(void) {

	i8 v12912 = (i8)(intptr_t)(ws+3760);
	i8 v12913 = *(i8*)(intptr_t)v12912;
	i8 v12914 = (i8)(intptr_t)(f93_CountParameters);
	i1 v12915;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12914)(&v12915, v12913);
	i8 v12916 = (i8)(intptr_t)(ws+2056);
	i8 v12917 = *(i8*)(intptr_t)v12916;
	i8 v12918 = v12917+(+81);
	*(i1*)(intptr_t)v12918 = v12915;

	i1 v12919 = (i1)+6;
	i8 v12920 = (i8)(intptr_t)(ws+3768);
	i8 v12921 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12921)(v12920, v12919);

endsub:;
}
	void f93_CountParameters(i1* /* count */, i8 /* param */);

// reduce_92 workspace at ws+3840 length ws+0
void f609_reduce_92(void) {

	i8 v12922 = (i8)(intptr_t)(ws+3760);
	i8 v12923 = *(i8*)(intptr_t)v12922;
	i8 v12924 = (i8)(intptr_t)(f93_CountParameters);
	i1 v12925;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12924)(&v12925, v12923);
	i8 v12926 = (i8)(intptr_t)(ws+2056);
	i8 v12927 = *(i8*)(intptr_t)v12926;
	i8 v12928 = v12927+(+80);
	*(i1*)(intptr_t)v12928 = v12925;

endsub:;
}

// reduce_93 workspace at ws+3840 length ws+0
void f610_reduce_93(void) {

	i1 v12929 = (i1)+0;
	i8 v12930 = (i8)(intptr_t)(ws+2056);
	i8 v12931 = *(i8*)(intptr_t)v12930;
	i8 v12932 = v12931+(+80);
	*(i1*)(intptr_t)v12932 = v12929;

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_94 workspace at ws+3840 length ws+0
void f611_reduce_94(void) {

	i8 v12933 = (i8)+0;
	i8 v12934 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12934 = v12933;

	i1 v12935 = (i1)+4;
	i8 v12936 = (i8)(intptr_t)(ws+3760);
	i8 v12937 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12937)(v12936, v12935);

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_95 workspace at ws+3840 length ws+0
void f612_reduce_95(void) {

	i8 v12938 = (i8)(intptr_t)(ws+3768);
	i8 v12939 = *(i8*)(intptr_t)v12938;
	i8 v12940 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12940 = v12939;

	i1 v12941 = (i1)+4;
	i8 v12942 = (i8)(intptr_t)(ws+3760);
	i8 v12943 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12943)(v12942, v12941);

endsub:;
}

// reduce_96 workspace at ws+3840 length ws+0
void f613_reduce_96(void) {

	i8 v12944 = (i8)(intptr_t)(ws+3760);
	i8 v12945 = *(i8*)(intptr_t)v12944;
	i8 v12946 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12946 = v12945;

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_97 workspace at ws+3840 length ws+0
void f614_reduce_97(void) {

	i8 v12947 = (i8)(intptr_t)(ws+3760);
	i8 v12948 = *(i8*)(intptr_t)v12947;
	i8 v12949 = (i8)(intptr_t)(ws+3776);
	i8 v12950 = *(i8*)(intptr_t)v12949;
	i8 v12951 = *(i8*)(intptr_t)v12950;
	i8 v12952 = v12951+(+16);
	*(i8*)(intptr_t)v12952 = v12948;

	i8 v12953 = (i8)(intptr_t)(ws+3776);
	i8 v12954 = *(i8*)(intptr_t)v12953;
	i8 v12955 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12955 = v12954;

	i1 v12956 = (i1)+45;
	i8 v12957 = (i8)(intptr_t)(ws+3768);
	i8 v12958 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12958)(v12957, v12956);

endsub:;
}
	void f213_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f468_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_98 workspace at ws+3840 length ws+0
void f615_reduce_98(void) {

	i8 v12959 = (i8)(intptr_t)(ws+2056);
	i8 v12960 = *(i8*)(intptr_t)v12959;
	i8 v12961 = v12960+(+16);
	i8 v12962 = (i8)(intptr_t)(ws+3776);
	i8 v12963 = *(i8*)(intptr_t)v12962;
	i8 v12964 = (i8)(intptr_t)(f213_AddSymbol);
	i8 v12965;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v12964)(&v12965, v12963, v12961);
	i8 v12966 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v12966 = v12965;

	i8 v12967 = (i8)(intptr_t)(ws+2056);
	i8 v12968 = *(i8*)(intptr_t)v12967;
	i8 v12969 = (i8)(intptr_t)(ws+3752);
	i8 v12970 = *(i8*)(intptr_t)v12969;
	i8 v12971 = (i8)(intptr_t)(ws+3760);
	i8 v12972 = *(i8*)(intptr_t)v12971;
	i8 v12973 = (i8)(intptr_t)(f468_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v12973)(v12972, v12970, v12968);

	i1 v12974 = (i1)+6;
	i8 v12975 = (i8)(intptr_t)(ws+3768);
	i8 v12976 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12976)(v12975, v12974);

endsub:;
}
	void f236_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_99 workspace at ws+3840 length ws+0
void f616_reduce_99(void) {

	i8 v12977 = (i8)(intptr_t)(ws+72);
	i8 v12978 = *(i8*)(intptr_t)v12977;
	i8 v12979 = v12978+(+48);
	i2 v12980 = *(i2*)(intptr_t)v12979;
	i8 v12981 = (i8)(intptr_t)(ws+72);
	i8 v12982 = *(i8*)(intptr_t)v12981;
	i8 v12983 = v12982+(+53);
	i1 v12984 = *(i1*)(intptr_t)v12983;
	i8 v12985 = (i8)(intptr_t)(f236_ArchAlignUp);
	i2 v12986;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v12985)(&v12986, v12984, v12980);
	i8 v12987 = (i8)(intptr_t)(ws+72);
	i8 v12988 = *(i8*)(intptr_t)v12987;
	i8 v12989 = v12988+(+50);
	*(i2*)(intptr_t)v12989 = v12986;

	i1 v12990 = (i1)+65;
	i8 v12991 = (i8)(intptr_t)(ws+3784);
	i8 v12992 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12992)(v12991, v12990);

	i1 v12993 = (i1)+10;
	i8 v12994 = (i8)(intptr_t)(ws+3768);
	i8 v12995 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12995)(v12994, v12993);

	i1 v12996 = (i1)+20;
	i8 v12997 = (i8)(intptr_t)(ws+3760);
	i8 v12998 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12998)(v12997, v12996);

endsub:;
}
	void f500_SymbolRedeclarationError(void);
	void f61_AllocNewType(i8* /* type */);
	void f500_SymbolRedeclarationError(void);

// reduce_100 workspace at ws+3840 length ws+0
void f617_reduce_100(void) {

	i8 v12999 = (i8)(intptr_t)(ws+3760);
	i8 v13000 = *(i8*)(intptr_t)v12999;
	i8 v13001 = v13000+(+32);
	i1 v13002 = *(i1*)(intptr_t)v13001;

	if (v13002 != +30) goto c02_08e3;

	i8 v13003 = (i8)(intptr_t)(ws+3760);
	i8 v13004 = *(i8*)(intptr_t)v13003;
	i8 v13005 = *(i8*)(intptr_t)v13004;
	i8 v13006 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v13006 = v13005;

	i8 v13007 = (i8)(intptr_t)(ws+72);
	i8 v13008 = *(i8*)(intptr_t)v13007;
	i8 v13009 = v13008+(+52);
	i1 v13010 = *(i1*)(intptr_t)v13009;
	i1 v13011 = (i1)+1;
	if (v13010==v13011) goto c02_08e8; else goto c02_08e7;

c02_08e7:;

	i8 v13012 = (i8)(intptr_t)(f500_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v13012)();

	goto c02_08e4;

c02_08e8:;

c02_08e4:;

	goto c02_08e2;

c02_08e3:;

	if (v13002 != +0) goto c02_08e9;

	i8 v13013 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v13014;

	((void(*)(i8* /* type */))(intptr_t)v13013)(&v13014);
	i8 v13015 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v13015 = v13014;

	i1 v13016 = (i1)+30;
	i8 v13017 = (i8)(intptr_t)(ws+3760);
	i8 v13018 = *(i8*)(intptr_t)v13017;
	i8 v13019 = v13018+(+32);
	*(i1*)(intptr_t)v13019 = v13016;

	i8 v13020 = (i8)(intptr_t)(ws+72);
	i8 v13021 = *(i8*)(intptr_t)v13020;
	i8 v13022 = (i8)(intptr_t)(ws+3760);
	i8 v13023 = *(i8*)(intptr_t)v13022;
	*(i8*)(intptr_t)v13023 = v13021;

	i8 v13024 = (i8)(intptr_t)(ws+3760);
	i8 v13025 = *(i8*)(intptr_t)v13024;
	i8 v13026 = (i8)(intptr_t)(ws+72);
	i8 v13027 = *(i8*)(intptr_t)v13026;
	i8 v13028 = v13027+(+32);
	*(i8*)(intptr_t)v13028 = v13025;

	goto c02_08e2;

c02_08e9:;

	i8 v13029 = (i8)(intptr_t)(f500_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v13029)();

c02_08e2:;


	i1 v13030 = (i1)+5;
	i8 v13031 = (i8)(intptr_t)(ws+72);
	i8 v13032 = *(i8*)(intptr_t)v13031;
	i8 v13033 = v13032+(+52);
	*(i1*)(intptr_t)v13033 = v13030;

endsub:;
}
	void f216_CheckNotPartialType(i8 /* type */);
	void f226_IsRecord(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01fb[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// reduce_101 workspace at ws+3840 length ws+0
void f618_reduce_101(void) {

	i8 v13034 = (i8)(intptr_t)(ws+3760);
	i8 v13035 = *(i8*)(intptr_t)v13034;
	i8 v13036 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v13036)(v13035);

	i8 v13037 = (i8)(intptr_t)(ws+3760);
	i8 v13038 = *(i8*)(intptr_t)v13037;
	i8 v13039 = (i8)(intptr_t)(f226_IsRecord);
	i1 v13040;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13039)(&v13040, v13038);
	i1 v13041 = (i1)+0;
	if (v13040==v13041) goto c02_08ed; else goto c02_08ee;

c02_08ed:;

	i8 v13042 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v13042)();

	i8 v13043 = (i8)(intptr_t)(ws+3760);
	i8 v13044 = *(i8*)(intptr_t)v13043;
	i8 v13045 = v13044+(+32);
	i8 v13046 = *(i8*)(intptr_t)v13045;
	i8 v13047 = v13046+(+8);
	i8 v13048 = *(i8*)(intptr_t)v13047;
	i8 v13049 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13049)(v13048);

	i8 v13050 = (i8)(intptr_t)c02_s01fb;
	i8 v13051 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13051)(v13050);

	i8 v13052 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v13052)();

	goto c02_08ea;

c02_08ee:;

c02_08ea:;

	i8 v13053 = (i8)(intptr_t)(ws+3760);
	i8 v13054 = *(i8*)(intptr_t)v13053;
	i8 v13055 = v13054+(+53);
	i1 v13056 = *(i1*)(intptr_t)v13055;
	i8 v13057 = (i8)(intptr_t)(ws+72);
	i8 v13058 = *(i8*)(intptr_t)v13057;
	i8 v13059 = v13058+(+53);
	*(i1*)(intptr_t)v13059 = v13056;

	i8 v13060 = (i8)(intptr_t)(ws+3760);
	i8 v13061 = *(i8*)(intptr_t)v13060;
	i8 v13062 = v13061+(+48);
	i2 v13063 = *(i2*)(intptr_t)v13062;
	i8 v13064 = (i8)(intptr_t)(ws+72);
	i8 v13065 = *(i8*)(intptr_t)v13064;
	i8 v13066 = v13065+(+48);
	*(i2*)(intptr_t)v13066 = v13063;

	i8 v13067 = (i8)(intptr_t)(ws+3760);
	i8 v13068 = *(i8*)(intptr_t)v13067;
	i8 v13069 = (i8)(intptr_t)(ws+72);
	i8 v13070 = *(i8*)(intptr_t)v13069;
	i8 v13071 = v13070+(+16);
	*(i8*)(intptr_t)v13071 = v13068;

endsub:;
}
	void f216_CheckNotPartialType(i8 /* type */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f240_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_102 workspace at ws+3840 length ws+0
void f619_reduce_102(void) {

	i8 v13072 = (i8)(intptr_t)(ws+3768);
	i8 v13073 = *(i8*)(intptr_t)v13072;
	i8 v13074 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v13074)(v13073);

	i8 v13075 = (i8)(intptr_t)(ws+72);
	i8 v13076 = *(i8*)(intptr_t)v13075;
	i8 v13077 = v13076+(+53);
	i1 v13078 = *(i1*)(intptr_t)v13077;
	i8 v13079 = (i8)(intptr_t)(ws+3768);
	i8 v13080 = *(i8*)(intptr_t)v13079;
	i8 v13081 = v13080+(+53);
	i1 v13082 = *(i1*)(intptr_t)v13081;
	if (v13078<v13082) goto c02_08f2; else goto c02_08f3;

c02_08f2:;

	i8 v13083 = (i8)(intptr_t)(ws+3768);
	i8 v13084 = *(i8*)(intptr_t)v13083;
	i8 v13085 = v13084+(+53);
	i1 v13086 = *(i1*)(intptr_t)v13085;
	i8 v13087 = (i8)(intptr_t)(ws+72);
	i8 v13088 = *(i8*)(intptr_t)v13087;
	i8 v13089 = v13088+(+53);
	*(i1*)(intptr_t)v13089 = v13086;

	goto c02_08ef;

c02_08f3:;

c02_08ef:;

	i1 v13090 = (i1)+28;
	i8 v13091 = (i8)(intptr_t)(ws+3792);
	i8 v13092 = *(i8*)(intptr_t)v13091;
	i8 v13093 = v13092+(+32);
	*(i1*)(intptr_t)v13093 = v13090;

	i8 v13094 = (i8)+34;
	i8 v13095 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v13096;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v13095)(&v13096, v13094);
	i8 v13097 = (i8)(intptr_t)(ws+3792);
	i8 v13098 = *(i8*)(intptr_t)v13097;
	*(i8*)(intptr_t)v13098 = v13096;

	i8 v13099 = (i8)(intptr_t)(ws+3768);
	i8 v13100 = *(i8*)(intptr_t)v13099;
	i8 v13101 = (i8)(intptr_t)(ws+3792);
	i8 v13102 = *(i8*)(intptr_t)v13101;
	i8 v13103 = *(i8*)(intptr_t)v13102;
	*(i8*)(intptr_t)v13103 = v13100;

	i8 v13104 = (i8)(intptr_t)(ws+72);
	i8 v13105 = *(i8*)(intptr_t)v13104;
	i8 v13106 = (i8)(intptr_t)(ws+3792);
	i8 v13107 = *(i8*)(intptr_t)v13106;
	i8 v13108 = (i8)(intptr_t)(ws+3784);
	i2 v13109 = *(i2*)(intptr_t)v13108;
	i8 v13110 = (i8)(intptr_t)(f240_ArchInitMember);

	((void(*)(i2 /* position */, i8 /* member */, i8 /* containing */))(intptr_t)v13110)(v13109, v13107, v13105);

	i1 v13111 = (i1)+6;
	i8 v13112 = (i8)(intptr_t)(ws+3776);
	i8 v13113 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13113)(v13112, v13111);

	i1 v13114 = (i1)+22;
	i8 v13115 = (i8)(intptr_t)(ws+3760);
	i8 v13116 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13116)(v13115, v13114);

endsub:;
}

// reduce_103 workspace at ws+3840 length ws+0
void f620_reduce_103(void) {

	i8 v13117 = (i8)(intptr_t)(ws+72);
	i8 v13118 = *(i8*)(intptr_t)v13117;
	i8 v13119 = v13118+(+48);
	i2 v13120 = *(i2*)(intptr_t)v13119;
	i8 v13121 = (i8)(intptr_t)(ws+3752);
	*(i2*)(intptr_t)v13121 = v13120;

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_104 workspace at ws+3840 length ws+0
void f621_reduce_104(void) {

	i8 v13122 = (i8)(intptr_t)(ws+3768);
	i4 v13123 = *(i4*)(intptr_t)v13122;
	i2 v13124 = (s2)(s4)v13123;
	i8 v13125 = (i8)(intptr_t)(ws+3752);
	*(i2*)(intptr_t)v13125 = v13124;

	i1 v13126 = (i1)+16;
	i8 v13127 = (i8)(intptr_t)(ws+3776);
	i8 v13128 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13128)(v13127, v13126);

	i1 v13129 = (i1)+4;
	i8 v13130 = (i8)(intptr_t)(ws+3760);
	i8 v13131 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13131)(v13130, v13129);

endsub:;
}
	void f213_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_105 workspace at ws+3840 length ws+0
void f622_reduce_105(void) {

	i8 v13132 = (i8)(intptr_t)(ws+72);
	i8 v13133 = *(i8*)(intptr_t)v13132;
	i8 v13134 = (i8)(intptr_t)(ws+3760);
	i8 v13135 = *(i8*)(intptr_t)v13134;
	i8 v13136 = (i8)(intptr_t)(f213_AddSymbol);
	i8 v13137;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v13136)(&v13137, v13135, v13133);
	i8 v13138 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v13138 = v13137;

	i8 v13139 = (i8)(intptr_t)(ws+72);
	i8 v13140 = *(i8*)(intptr_t)v13139;
	i8 v13141 = v13140+(+24);
	i1 v13142 = *(i1*)(intptr_t)v13141;
	i1 v13143 = v13142+(+1);
	i8 v13144 = (i8)(intptr_t)(ws+72);
	i8 v13145 = *(i8*)(intptr_t)v13144;
	i8 v13146 = v13145+(+24);
	*(i1*)(intptr_t)v13146 = v13143;

endsub:;
}
	void f502_CheckEndOfInitialiser(void);
	void f137_MidEndinit(i8* /* m */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_106 workspace at ws+3840 length ws+0
void f623_reduce_106(void) {

	i8 v13147 = (i8)(intptr_t)(f502_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v13147)();

	i8 v13148 = (i8)(intptr_t)(f137_MidEndinit);
	i8 v13149;

	((void(*)(i8* /* m */))(intptr_t)v13148)(&v13149);
	i8 v13150 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13150)(v13149);

	i1 v13151 = (i1)+31;
	i8 v13152 = (i8)(intptr_t)(ws+3784);
	i8 v13153 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13153)(v13152, v13151);

	i1 v13154 = (i1)+32;
	i8 v13155 = (i8)(intptr_t)(ws+3768);
	i8 v13156 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13156)(v13155, v13154);

	i1 v13157 = (i1)+22;
	i8 v13158 = (i8)(intptr_t)(ws+3760);
	i8 v13159 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13159)(v13158, v13157);

endsub:;
}
	void f216_CheckNotPartialType(i8 /* type */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f229_AllocLabel(i2* /* label */);
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f220_IsArray(i1* /* result */, i8 /* type */);
	void f226_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s01fc[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f226_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s01fd[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f226_IsRecord(i1* /* result */, i8 /* type */);
	void f149_MidStartinit(i8* /* m */, i8 /* sym */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_107 workspace at ws+3840 length ws+16
void f624_reduce_107(void) {

	i8 v13160 = (i8)(intptr_t)(ws+3768);
	i8 v13161 = *(i8*)(intptr_t)v13160;
	i8 v13162 = (i8)(intptr_t)(f216_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v13162)(v13161);

	i1 v13163 = (i1)+28;
	i8 v13164 = (i8)(intptr_t)(ws+3784);
	i8 v13165 = *(i8*)(intptr_t)v13164;
	i8 v13166 = v13165+(+32);
	*(i1*)(intptr_t)v13166 = v13163;

	i8 v13167 = (i8)+34;
	i8 v13168 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v13169;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v13168)(&v13169, v13167);
	i8 v13170 = (i8)(intptr_t)(ws+3784);
	i8 v13171 = *(i8*)(intptr_t)v13170;
	*(i8*)(intptr_t)v13171 = v13169;

	i8 v13172 = (i8)(intptr_t)(ws+3768);
	i8 v13173 = *(i8*)(intptr_t)v13172;
	i8 v13174 = (i8)(intptr_t)(ws+3784);
	i8 v13175 = *(i8*)(intptr_t)v13174;
	i8 v13176 = *(i8*)(intptr_t)v13175;
	*(i8*)(intptr_t)v13176 = v13173;

	i8 v13177 = (i8)(intptr_t)(ws+40);
	i8 v13178 = *(i8*)(intptr_t)v13177;
	i8 v13179 = (i8)(intptr_t)(ws+3784);
	i8 v13180 = *(i8*)(intptr_t)v13179;
	i8 v13181 = *(i8*)(intptr_t)v13180;
	i8 v13182 = v13181+(+8);
	*(i8*)(intptr_t)v13182 = v13178;

	i8 v13183 = (i8)+8;
	i8 v13184 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v13185;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v13184)(&v13185, v13183);
	i8 v13186 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v13186 = v13185;

	i8 v13187 = (i8)(intptr_t)(ws+3840);
	i8 v13188 = *(i8*)(intptr_t)v13187;
	i8 v13189 = (i8)(intptr_t)(ws+3784);
	i8 v13190 = *(i8*)(intptr_t)v13189;
	i8 v13191 = *(i8*)(intptr_t)v13190;
	i8 v13192 = v13191+(+24);
	*(i8*)(intptr_t)v13192 = v13188;

	i1 v13193 = (i1)+3;
	i8 v13194 = (i8)(intptr_t)(ws+3840);
	i8 v13195 = *(i8*)(intptr_t)v13194;
	*(i1*)(intptr_t)v13195 = v13193;

	i1 v13196 = (i1)+97;
	i8 v13197 = (i8)(intptr_t)(ws+3840);
	i8 v13198 = *(i8*)(intptr_t)v13197;
	i8 v13199 = v13198+(+1);
	*(i1*)(intptr_t)v13199 = v13196;

	i8 v13200 = (i8)(intptr_t)(f229_AllocLabel);
	i2 v13201;

	((void(*)(i2* /* label */))(intptr_t)v13200)(&v13201);
	i4 v13202 = v13201;
	i1 v13203 = (i1)+16;
	i8 v13204 = (i8)(intptr_t)(ws+3840);
	i8 v13205 = *(i8*)(intptr_t)v13204;
	i8 v13206 = v13205+(+2);
	i8 v13207 = (i8)(intptr_t)(f13_UIToA);
	i8 v13208;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v13207)(&v13208, v13206, v13203, v13202);
	i8 v13209 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v13209 = v13208;

	i8 v13210 = (i8)(intptr_t)(ws+3768);
	i8 v13211 = *(i8*)(intptr_t)v13210;
	i8 v13212 = (i8)(intptr_t)(f220_IsArray);
	i1 v13213;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13212)(&v13213, v13211);
	i1 v13214 = (i1)+0;
	if (v13213==v13214) goto c02_08fb; else goto c02_08fa;

c02_08fb:;

	i8 v13215 = (i8)(intptr_t)(ws+3768);
	i8 v13216 = *(i8*)(intptr_t)v13215;
	i8 v13217 = (i8)(intptr_t)(f226_IsRecord);
	i1 v13218;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13217)(&v13218, v13216);
	i1 v13219 = (i1)+0;
	if (v13218==v13219) goto c02_08f9; else goto c02_08fa;

c02_08f9:;

	i8 v13220 = (i8)(intptr_t)c02_s01fc;
	i8 v13221 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13221)(v13220);

	goto c02_08f4;

c02_08fa:;

c02_08f4:;

	i8 v13222 = (i8)(intptr_t)(ws+3768);
	i8 v13223 = *(i8*)(intptr_t)v13222;
	i8 v13224 = (i8)(intptr_t)(f226_IsRecord);
	i1 v13225;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13224)(&v13225, v13223);
	i1 v13226 = (i1)+0;
	if (v13225==v13226) goto c02_0902; else goto c02_0903;

c02_0903:;

	i8 v13227 = (i8)(intptr_t)(ws+3768);
	i8 v13228 = *(i8*)(intptr_t)v13227;
	i8 v13229 = v13228+(+16);
	i8 v13230 = *(i8*)(intptr_t)v13229;
	i8 v13231 = (i8)+0;
	if (v13230==v13231) goto c02_0902; else goto c02_0901;

c02_0901:;

	i8 v13232 = (i8)(intptr_t)c02_s01fd;
	i8 v13233 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13233)(v13232);

	goto c02_08fc;

c02_0902:;

c02_08fc:;

	i8 v13234 = (i8)(intptr_t)(ws+3768);
	i8 v13235 = *(i8*)(intptr_t)v13234;
	i8 v13236 = (i8)(intptr_t)(f226_IsRecord);
	i1 v13237;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13236)(&v13237, v13235);
	i1 v13238 = (i1)+0;
	if (v13237==v13238) goto c02_0908; else goto c02_0907;

c02_0907:;

	i8 v13239 = (i8)(intptr_t)(ws+3768);
	i8 v13240 = *(i8*)(intptr_t)v13239;
	i8 v13241 = *(i8*)(intptr_t)v13240;
	i8 v13242 = (i8)(intptr_t)(ws+2064);
	*(i8*)(intptr_t)v13242 = v13241;

	goto c02_0904;

c02_0908:;

c02_0904:;

	i8 v13243 = (i8)(intptr_t)(ws+3768);
	i8 v13244 = *(i8*)(intptr_t)v13243;
	i8 v13245 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v13245 = v13244;

	i2 v13246 = (i2)+0;
	i8 v13247 = (i8)(intptr_t)(ws+2072);
	*(i2*)(intptr_t)v13247 = v13246;

	i2 v13248 = (i2)+0;
	i8 v13249 = (i8)(intptr_t)(ws+2074);
	*(i2*)(intptr_t)v13249 = v13248;

	i8 v13250 = (i8)(intptr_t)(ws+3784);
	i8 v13251 = *(i8*)(intptr_t)v13250;
	i8 v13252 = (i8)(intptr_t)(f149_MidStartinit);
	i8 v13253;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v13252)(&v13253, v13251);
	i8 v13254 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13254)(v13253);

	i1 v13255 = (i1)+6;
	i8 v13256 = (i8)(intptr_t)(ws+3776);
	i8 v13257 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13257)(v13256, v13255);

	i1 v13258 = (i1)+2;
	i8 v13259 = (i8)(intptr_t)(ws+3760);
	i8 v13260 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13260)(v13259, v13258);

endsub:;
}
	void f506_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f504_AlignTo(i1 /* alignment */);
	void f223_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s01fe[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f71_SimpleError(i8 /* message */);
	void f115_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f465_Generate(i8 /* statement */);
	void f221_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01ff[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f71_SimpleError(i8 /* message */);
	void f112_MidInits(i8* /* m */, i8 /* text */);
	void f465_Generate(i8 /* statement */);
const i1 c02_s0200[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f138_MidInita(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f465_Generate(i8 /* statement */);
	void f497_parser_i_constant_error(void);
	void f58_Discard(i8 /* node */);

// reduce_108 workspace at ws+3840 length ws+18
void f625_reduce_108(void) {

	i8 v13261 = (i8)(intptr_t)(f506_GetInitedMemberChecked);
	i8 v13262;
	i8 v13263;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v13261)(&v13262, &v13263);

	i8 v13264 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v13264 = v13263;

	i8 v13265 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v13265 = v13262;

	i8 v13266 = (i8)(intptr_t)(ws+3848);
	i8 v13267 = *(i8*)(intptr_t)v13266;
	i8 v13268 = v13267+(+53);
	i1 v13269 = *(i1*)(intptr_t)v13268;
	i8 v13270 = (i8)(intptr_t)(f504_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v13270)(v13269);

	i8 v13271 = (i8)(intptr_t)(ws+3848);
	i8 v13272 = *(i8*)(intptr_t)v13271;
	i8 v13273 = v13272+(+48);
	i2 v13274 = *(i2*)(intptr_t)v13273;
	i8 v13275 = (i8)(intptr_t)(ws+3856);
	*(i2*)(intptr_t)v13275 = v13274;

	i8 v13276 = (i8)(intptr_t)(ws+3760);
	i8 v13277 = *(i8*)(intptr_t)v13276;
	i8 v13278 = v13277+(+58);
	i1 v13279 = *(i1*)(intptr_t)v13278;

	if (v13279 != +43) goto c02_090a;

	i8 v13280 = (i8)(intptr_t)(ws+3848);
	i8 v13281 = *(i8*)(intptr_t)v13280;
	i8 v13282 = (i8)(intptr_t)(f223_IsNum);
	i1 v13283;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13282)(&v13283, v13281);
	i1 v13284 = (i1)+0;
	if (v13283==v13284) goto c02_090e; else goto c02_090f;

c02_090e:;

	i8 v13285 = (i8)(intptr_t)c02_s01fe;
	i8 v13286 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13286)(v13285);

	goto c02_090b;

c02_090f:;

c02_090b:;

	i8 v13287 = (i8)(intptr_t)(ws+3856);
	i2 v13288 = *(i2*)(intptr_t)v13287;
	i1 v13289 = v13288;
	i8 v13290 = (i8)(intptr_t)(ws+3760);
	i8 v13291 = *(i8*)(intptr_t)v13290;
	i4 v13292 = *(i4*)(intptr_t)v13291;
	i8 v13293 = (i8)(intptr_t)(f115_MidInit);
	i8 v13294;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v13293)(&v13294, v13292, v13289);
	i8 v13295 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13295)(v13294);

	goto c02_0909;

c02_090a:;

	if (v13279 != +44) goto c02_0910;

	i8 v13296 = (i8)(intptr_t)(ws+3848);
	i8 v13297 = *(i8*)(intptr_t)v13296;
	i8 v13298 = (i8)(intptr_t)(f221_IsPtr);
	i1 v13299;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13298)(&v13299, v13297);
	i1 v13300 = (i1)+0;
	if (v13299==v13300) goto c02_0916; else goto c02_0918;

c02_0918:;

	i8 v13301 = (i8)(intptr_t)(ws+3848);
	i8 v13302 = *(i8*)(intptr_t)v13301;
	i8 v13303 = *(i8*)(intptr_t)v13302;
	i8 v13304 = (i8)(intptr_t)(ws+1888);
	i8 v13305 = *(i8*)(intptr_t)v13304;
	if (v13303==v13305) goto c02_0917; else goto c02_0916;

c02_0916:;

	i8 v13306 = (i8)(intptr_t)c02_s01ff;
	i8 v13307 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13307)(v13306);

	goto c02_0911;

c02_0917:;

c02_0911:;

	i8 v13308 = (i8)(intptr_t)(ws+3760);
	i8 v13309 = *(i8*)(intptr_t)v13308;
	i8 v13310 = *(i8*)(intptr_t)v13309;
	i8 v13311 = (i8)(intptr_t)(f112_MidInits);
	i8 v13312;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v13311)(&v13312, v13310);
	i8 v13313 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13313)(v13312);

	goto c02_0909;

c02_0910:;

	if (v13279 != +45) goto c02_0919;

	i8 v13314 = (i8)(intptr_t)(ws+3848);
	i8 v13315 = *(i8*)(intptr_t)v13314;
	i8 v13316 = (i8)(intptr_t)(ws+3760);
	i8 v13317 = *(i8*)(intptr_t)v13316;
	i8 v13318 = v13317+(+16);
	i8 v13319 = *(i8*)(intptr_t)v13318;
	if (v13315==v13319) goto c02_091e; else goto c02_091d;

c02_091d:;

	i8 v13320 = (i8)(intptr_t)c02_s0200;
	i8 v13321 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13321)(v13320);

	goto c02_091a;

c02_091e:;

c02_091a:;

	i8 v13322 = (i8)(intptr_t)(ws+3760);
	i8 v13323 = *(i8*)(intptr_t)v13322;
	i8 v13324 = *(i8*)(intptr_t)v13323;
	i8 v13325 = (i8)(intptr_t)(ws+3760);
	i8 v13326 = *(i8*)(intptr_t)v13325;
	i8 v13327 = v13326+(+8);
	i2 v13328 = *(i2*)(intptr_t)v13327;
	i8 v13329 = (i8)(intptr_t)(f138_MidInita);
	i8 v13330;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v13329)(&v13330, v13328, v13324);
	i8 v13331 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13331)(v13330);

	goto c02_0909;

c02_0919:;

	i8 v13332 = (i8)(intptr_t)(f497_parser_i_constant_error);

	((void(*)(void))(intptr_t)v13332)();

c02_0909:;


	i8 v13333 = (i8)(intptr_t)(ws+3760);
	i8 v13334 = *(i8*)(intptr_t)v13333;
	i8 v13335 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v13335)(v13334);

	i8 v13336 = (i8)(intptr_t)(ws+2072);
	i2 v13337 = *(i2*)(intptr_t)v13336;
	i8 v13338 = (i8)(intptr_t)(ws+3856);
	i2 v13339 = *(i2*)(intptr_t)v13338;
	i2 v13340 = v13337+v13339;
	i8 v13341 = (i8)(intptr_t)(ws+2072);
	*(i2*)(intptr_t)v13341 = v13340;

	i8 v13342 = (i8)(intptr_t)(ws+2074);
	i2 v13343 = *(i2*)(intptr_t)v13342;
	i8 v13344 = (i8)(intptr_t)(ws+3856);
	i2 v13345 = *(i2*)(intptr_t)v13344;
	i2 v13346 = v13343+v13345;
	i8 v13347 = (i8)(intptr_t)(ws+2074);
	*(i2*)(intptr_t)v13347 = v13346;

endsub:;
}
	void f502_CheckEndOfInitialiser(void);
	void f33_Free(i8 /* block */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_109 workspace at ws+3840 length ws+0
void f626_reduce_109(void) {

	i8 v13348 = (i8)(intptr_t)(f502_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v13348)();

	i8 v13349 = (i8)(intptr_t)(ws+3776);
	i8 v13350 = *(i8*)(intptr_t)v13349;
	i8 v13351 = *(i8*)(intptr_t)v13350;
	i8 v13352 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v13352 = v13351;

	i8 v13353 = (i8)(intptr_t)(ws+3776);
	i8 v13354 = *(i8*)(intptr_t)v13353;
	i8 v13355 = v13354+(+8);
	i8 v13356 = *(i8*)(intptr_t)v13355;
	i8 v13357 = (i8)(intptr_t)(ws+2064);
	*(i8*)(intptr_t)v13357 = v13356;

	i8 v13358 = (i8)(intptr_t)(ws+3776);
	i8 v13359 = *(i8*)(intptr_t)v13358;
	i8 v13360 = v13359+(+16);
	i2 v13361 = *(i2*)(intptr_t)v13360;
	i8 v13362 = (i8)(intptr_t)(ws+2072);
	*(i2*)(intptr_t)v13362 = v13361;

	i8 v13363 = (i8)(intptr_t)(ws+3776);
	i8 v13364 = *(i8*)(intptr_t)v13363;
	i8 v13365 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v13365)(v13364);

	i1 v13366 = (i1)+32;
	i8 v13367 = (i8)(intptr_t)(ws+3760);
	i8 v13368 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13368)(v13367, v13366);

endsub:;
}
	void f506_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f504_AlignTo(i1 /* alignment */);
	void f63_InternalAlloc(i8* /* block */, i8 /* length */);
	void f226_IsRecord(i1* /* result */, i8 /* type */);
	void f220_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s0201[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// reduce_110 workspace at ws+3840 length ws+16
void f627_reduce_110(void) {

	i8 v13369 = (i8)(intptr_t)(f506_GetInitedMemberChecked);
	i8 v13370;
	i8 v13371;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v13369)(&v13370, &v13371);

	i8 v13372 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v13372 = v13371;

	i8 v13373 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v13373 = v13370;

	i8 v13374 = (i8)(intptr_t)(ws+3848);
	i8 v13375 = *(i8*)(intptr_t)v13374;
	i8 v13376 = v13375+(+53);
	i1 v13377 = *(i1*)(intptr_t)v13376;
	i8 v13378 = (i8)(intptr_t)(f504_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v13378)(v13377);

	i8 v13379 = (i8)+18;
	i8 v13380 = (i8)(intptr_t)(f63_InternalAlloc);
	i8 v13381;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v13380)(&v13381, v13379);
	i8 v13382 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v13382 = v13381;

	i8 v13383 = (i8)(intptr_t)(ws+72);
	i8 v13384 = *(i8*)(intptr_t)v13383;
	i8 v13385 = (i8)(intptr_t)(ws+3752);
	i8 v13386 = *(i8*)(intptr_t)v13385;
	*(i8*)(intptr_t)v13386 = v13384;

	i8 v13387 = (i8)(intptr_t)(ws+2064);
	i8 v13388 = *(i8*)(intptr_t)v13387;
	i8 v13389 = (i8)(intptr_t)(ws+3752);
	i8 v13390 = *(i8*)(intptr_t)v13389;
	i8 v13391 = v13390+(+8);
	*(i8*)(intptr_t)v13391 = v13388;

	i8 v13392 = (i8)(intptr_t)(ws+2072);
	i2 v13393 = *(i2*)(intptr_t)v13392;
	i8 v13394 = (i8)(intptr_t)(ws+3752);
	i8 v13395 = *(i8*)(intptr_t)v13394;
	i8 v13396 = v13395+(+16);
	*(i2*)(intptr_t)v13396 = v13393;

	i8 v13397 = (i8)(intptr_t)(ws+3848);
	i8 v13398 = *(i8*)(intptr_t)v13397;
	i8 v13399 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v13399 = v13398;

	i2 v13400 = (i2)+0;
	i8 v13401 = (i8)(intptr_t)(ws+2072);
	*(i2*)(intptr_t)v13401 = v13400;

	i8 v13402 = (i8)(intptr_t)(ws+3848);
	i8 v13403 = *(i8*)(intptr_t)v13402;
	i8 v13404 = (i8)(intptr_t)(f226_IsRecord);
	i1 v13405;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13404)(&v13405, v13403);
	i1 v13406 = (i1)+0;
	if (v13405==v13406) goto c02_0923; else goto c02_0922;

c02_0922:;

	i8 v13407 = (i8)(intptr_t)(ws+3848);
	i8 v13408 = *(i8*)(intptr_t)v13407;
	i8 v13409 = *(i8*)(intptr_t)v13408;
	i8 v13410 = (i8)(intptr_t)(ws+2064);
	*(i8*)(intptr_t)v13410 = v13409;

	goto c02_091f;

c02_0923:;

	i8 v13411 = (i8)(intptr_t)(ws+3848);
	i8 v13412 = *(i8*)(intptr_t)v13411;
	i8 v13413 = (i8)(intptr_t)(f220_IsArray);
	i1 v13414;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13413)(&v13414, v13412);
	i1 v13415 = (i1)+0;
	if (v13414==v13415) goto c02_0927; else goto c02_0926;

c02_0926:;

	i8 v13416 = (i8)+0;
	i8 v13417 = (i8)(intptr_t)(ws+2064);
	*(i8*)(intptr_t)v13417 = v13416;

	goto c02_091f;

c02_0927:;

	i8 v13418 = (i8)(intptr_t)c02_s0201;
	i8 v13419 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13419)(v13418);

c02_091f:;

endsub:;
}
	void f145_MidAsmend(i8* /* m */);
	void f465_Generate(i8 /* statement */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_111 workspace at ws+3840 length ws+0
void f628_reduce_111(void) {

	i8 v13420 = (i8)(intptr_t)(f145_MidAsmend);
	i8 v13421;

	((void(*)(i8* /* m */))(intptr_t)v13420)(&v13421);
	i8 v13422 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13422)(v13421);

	i1 v13423 = (i1)+22;
	i8 v13424 = (i8)(intptr_t)(ws+3760);
	i8 v13425 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13425)(v13424, v13423);

endsub:;
}
	void f120_MidAsmstart(i8* /* m */);
	void f465_Generate(i8 /* statement */);

// reduce_112 workspace at ws+3840 length ws+0
void f629_reduce_112(void) {

	i8 v13426 = (i8)(intptr_t)(f120_MidAsmstart);
	i8 v13427;

	((void(*)(i8* /* m */))(intptr_t)v13426)(&v13427);
	i8 v13428 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13428)(v13427);

endsub:;
}
	void f100_MidAsmtext(i8* /* m */, i8 /* text */);
	void f465_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);

// reduce_113 workspace at ws+3840 length ws+0
void f630_reduce_113(void) {

	i8 v13429 = (i8)(intptr_t)(ws+3760);
	i8 v13430 = *(i8*)(intptr_t)v13429;
	i8 v13431 = (i8)(intptr_t)(f100_MidAsmtext);
	i8 v13432;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v13431)(&v13432, v13430);
	i8 v13433 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13433)(v13432);

	i8 v13434 = (i8)(intptr_t)(ws+3760);
	i8 v13435 = *(i8*)(intptr_t)v13434;
	i8 v13436 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v13436)(v13435);

endsub:;
}
	void f103_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f465_Generate(i8 /* statement */);

// reduce_114 workspace at ws+3840 length ws+0
void f631_reduce_114(void) {

	i8 v13437 = (i8)(intptr_t)(ws+3760);
	i4 v13438 = *(i4*)(intptr_t)v13437;
	i8 v13439 = (i8)(intptr_t)(f103_MidAsmvalue);
	i8 v13440;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v13439)(&v13440, v13438);
	i8 v13441 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13441)(v13440);

endsub:;
}
const i1 c02_s0202[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// bad_reference workspace at ws+3848 length ws+0
void f633_bad_reference(void) {

	i8 v13442 = (i8)(intptr_t)c02_s0202;
	i8 v13443 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13443)(v13442);

endsub:;
}
	void f222_IsSubroutine(i1* /* result */, i8 /* type */);
	void f199_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f633_bad_reference(void);
	void f148_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	void f465_Generate(i8 /* statement */);
	void f103_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f465_Generate(i8 /* statement */);
	void f633_bad_reference(void);

// reduce_115 workspace at ws+3840 length ws+1
void f632_reduce_115(void) {


	i8 v13444 = (i8)(intptr_t)(ws+3760);
	i8 v13445 = *(i8*)(intptr_t)v13444;
	i8 v13446 = v13445+(+32);
	i1 v13447 = *(i1*)(intptr_t)v13446;
	i8 v13448 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v13448 = v13447;

	i8 v13449 = (i8)(intptr_t)(ws+3840);
	i1 v13450 = *(i1*)(intptr_t)v13449;
	i1 v13451 = (i1)+28;
	if (v13450==v13451) goto c02_092d; else goto c02_092f;

c02_092f:;

	i8 v13452 = (i8)(intptr_t)(ws+3840);
	i1 v13453 = *(i1*)(intptr_t)v13452;
	i1 v13454 = (i1)+30;
	if (v13453==v13454) goto c02_092d; else goto c02_092e;

c02_092d:;

	i8 v13455 = (i8)(intptr_t)(ws+3840);
	i1 v13456 = *(i1*)(intptr_t)v13455;
	i1 v13457 = (i1)+30;
	if (v13456==v13457) goto c02_0933; else goto c02_0934;

c02_0933:;

	i8 v13458 = (i8)(intptr_t)(ws+3760);
	i8 v13459 = *(i8*)(intptr_t)v13458;
	i8 v13460 = *(i8*)(intptr_t)v13459;
	i8 v13461 = (i8)(intptr_t)(f222_IsSubroutine);
	i1 v13462;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13461)(&v13462, v13460);
	i1 v13463 = (i1)+0;
	if (v13462==v13463) goto c02_0939; else goto c02_0938;

c02_0938:;

	i8 v13464 = (i8)(intptr_t)(ws+40);
	i8 v13465 = *(i8*)(intptr_t)v13464;
	i8 v13466 = (i8)(intptr_t)(ws+3760);
	i8 v13467 = *(i8*)(intptr_t)v13466;
	i8 v13468 = *(i8*)(intptr_t)v13467;
	i8 v13469 = *(i8*)(intptr_t)v13468;
	i8 v13470 = (i8)(intptr_t)(f199_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v13470)(v13469, v13465);

	goto c02_0935;

c02_0939:;

	i8 v13471 = (i8)(intptr_t)(f633_bad_reference);

	((void(*)(void))(intptr_t)v13471)();

c02_0935:;

	goto c02_0930;

c02_0934:;

c02_0930:;

	i8 v13472 = (i8)(intptr_t)(ws+3760);
	i8 v13473 = *(i8*)(intptr_t)v13472;
	i8 v13474 = (i8)(intptr_t)(f148_MidAsmsymbol);
	i8 v13475;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v13474)(&v13475, v13473);
	i8 v13476 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13476)(v13475);

	goto c02_0928;

c02_092e:;

	i8 v13477 = (i8)(intptr_t)(ws+3840);
	i1 v13478 = *(i1*)(intptr_t)v13477;
	i1 v13479 = (i1)+7;
	if (v13478==v13479) goto c02_093c; else goto c02_093d;

c02_093c:;

	i8 v13480 = (i8)(intptr_t)(ws+3760);
	i8 v13481 = *(i8*)(intptr_t)v13480;
	i4 v13482 = *(i4*)(intptr_t)v13481;
	i8 v13483 = (i8)(intptr_t)(f103_MidAsmvalue);
	i8 v13484;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v13483)(&v13484, v13482);
	i8 v13485 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13485)(v13484);

	goto c02_0928;

c02_093d:;

	i8 v13486 = (i8)(intptr_t)(f633_bad_reference);

	((void(*)(void))(intptr_t)v13486)();

c02_0928:;

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_122 workspace at ws+3840 length ws+0
void f634_reduce_122(void) {

	i1 v13487 = (i1)+26;
	i8 v13488 = (i8)(intptr_t)(ws+3776);
	i8 v13489 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13489)(v13488, v13487);

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_126 workspace at ws+3840 length ws+0
void f635_reduce_126(void) {

	i1 v13490 = (i1)+22;
	i8 v13491 = (i8)(intptr_t)(ws+3760);
	i8 v13492 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13492)(v13491, v13490);

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_127 workspace at ws+3840 length ws+0
void f636_reduce_127(void) {

	i1 v13493 = (i1)+25;
	i8 v13494 = (i8)(intptr_t)(ws+3792);
	i8 v13495 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13495)(v13494, v13493);

	i1 v13496 = (i1)+22;
	i8 v13497 = (i8)(intptr_t)(ws+3760);
	i8 v13498 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13498)(v13497, v13496);

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_128 workspace at ws+3840 length ws+0
void f637_reduce_128(void) {

	i1 v13499 = (i1)+22;
	i8 v13500 = (i8)(intptr_t)(ws+3760);
	i8 v13501 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13501)(v13500, v13499);

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_129 workspace at ws+3840 length ws+0
void f638_reduce_129(void) {

	i1 v13502 = (i1)+22;
	i8 v13503 = (i8)(intptr_t)(ws+3760);
	i8 v13504 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13504)(v13503, v13502);

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_135 workspace at ws+3840 length ws+0
void f639_reduce_135(void) {

	i1 v13505 = (i1)+45;
	i8 v13506 = (i8)(intptr_t)(ws+3768);
	i8 v13507 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13507)(v13506, v13505);

endsub:;
}
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_138 workspace at ws+3840 length ws+0
void f640_reduce_138(void) {

	i1 v13508 = (i1)+45;
	i8 v13509 = (i8)(intptr_t)(ws+3768);
	i8 v13510 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13510)(v13509, v13508);

endsub:;
}

// reduce_default workspace at ws+3840 length ws+0
void f641_reduce_default(void) {

endsub:;
}
	void f515_reduce_0(void);
	void f516_reduce_1(void);
	void f517_reduce_2(void);
	void f518_reduce_3(void);
	void f519_reduce_4(void);
	void f520_reduce_5(void);
	void f521_reduce_6(void);
	void f522_reduce_7(void);
	void f523_reduce_8(void);
	void f524_reduce_9(void);
	void f525_reduce_10(void);
	void f526_reduce_11(void);
	void f527_reduce_12(void);
	void f528_reduce_13(void);
	void f529_reduce_14(void);
	void f530_reduce_15(void);
	void f531_reduce_16(void);
	void f532_reduce_17(void);
	void f533_reduce_18(void);
	void f534_reduce_19(void);
	void f535_reduce_20(void);
	void f536_reduce_21(void);
	void f537_reduce_22(void);
	void f538_reduce_23(void);
	void f539_reduce_24(void);
	void f540_reduce_25(void);
	void f541_reduce_26(void);
	void f542_reduce_27(void);
	void f543_reduce_28(void);
	void f544_reduce_29(void);
	void f545_reduce_30(void);
	void f546_reduce_31(void);
	void f547_reduce_32(void);
	void f548_reduce_33(void);
	void f549_reduce_34(void);
	void f550_reduce_35(void);
	void f551_reduce_36(void);
	void f552_reduce_37(void);
	void f553_reduce_38(void);
	void f554_reduce_39(void);
	void f555_reduce_40(void);
	void f556_reduce_41(void);
	void f557_reduce_42(void);
	void f558_reduce_43(void);
	void f559_reduce_44(void);
	void f560_reduce_45(void);
	void f561_reduce_46(void);
	void f562_reduce_47(void);
	void f563_reduce_48(void);
	void f564_reduce_49(void);
	void f565_reduce_50(void);
	void f566_reduce_51(void);
	void f568_reduce_52(void);
	void f569_reduce_53(void);
	void f570_reduce_54(void);
	void f571_reduce_55(void);
	void f572_reduce_56(void);
	void f573_reduce_57(void);
	void f574_reduce_58(void);
	void f575_reduce_59(void);
	void f576_reduce_60(void);
	void f577_reduce_61(void);
	void f578_reduce_62(void);
	void f579_reduce_63(void);
	void f580_reduce_64(void);
	void f581_reduce_65(void);
	void f582_reduce_66(void);
	void f583_reduce_67(void);
	void f584_reduce_68(void);
	void f585_reduce_69(void);
	void f586_reduce_70(void);
	void f587_reduce_71(void);
	void f588_reduce_72(void);
	void f589_reduce_73(void);
	void f590_reduce_74(void);
	void f591_reduce_75(void);
	void f592_reduce_76(void);
	void f593_reduce_77(void);
	void f594_reduce_78(void);
	void f595_reduce_79(void);
	void f596_reduce_80(void);
	void f597_reduce_81(void);
	void f598_reduce_82(void);
	void f599_reduce_83(void);
	void f600_reduce_84(void);
	void f602_reduce_85(void);
	void f603_reduce_86(void);
	void f604_reduce_87(void);
	void f605_reduce_88(void);
	void f606_reduce_89(void);
	void f607_reduce_90(void);
	void f608_reduce_91(void);
	void f609_reduce_92(void);
	void f610_reduce_93(void);
	void f611_reduce_94(void);
	void f612_reduce_95(void);
	void f613_reduce_96(void);
	void f614_reduce_97(void);
	void f615_reduce_98(void);
	void f616_reduce_99(void);
	void f617_reduce_100(void);
	void f618_reduce_101(void);
	void f619_reduce_102(void);
	void f620_reduce_103(void);
	void f621_reduce_104(void);
	void f622_reduce_105(void);
	void f623_reduce_106(void);
	void f624_reduce_107(void);
	void f625_reduce_108(void);
	void f626_reduce_109(void);
	void f627_reduce_110(void);
	void f628_reduce_111(void);
	void f629_reduce_112(void);
	void f630_reduce_113(void);
	void f631_reduce_114(void);
	void f632_reduce_115(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f634_reduce_122(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f635_reduce_126(void);
	void f636_reduce_127(void);
	void f637_reduce_128(void);
	void f638_reduce_129(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f639_reduce_135(void);
	void f641_reduce_default(void);
	void f641_reduce_default(void);
	void f640_reduce_138(void);
static data c02_a93e[] = { // reducers

	{ .ptr = (void*)f515_reduce_0 },

	{ .ptr = (void*)f516_reduce_1 },

	{ .ptr = (void*)f517_reduce_2 },

	{ .ptr = (void*)f518_reduce_3 },

	{ .ptr = (void*)f519_reduce_4 },

	{ .ptr = (void*)f520_reduce_5 },

	{ .ptr = (void*)f521_reduce_6 },

	{ .ptr = (void*)f522_reduce_7 },

	{ .ptr = (void*)f523_reduce_8 },

	{ .ptr = (void*)f524_reduce_9 },

	{ .ptr = (void*)f525_reduce_10 },

	{ .ptr = (void*)f526_reduce_11 },

	{ .ptr = (void*)f527_reduce_12 },

	{ .ptr = (void*)f528_reduce_13 },

	{ .ptr = (void*)f529_reduce_14 },

	{ .ptr = (void*)f530_reduce_15 },

	{ .ptr = (void*)f531_reduce_16 },

	{ .ptr = (void*)f532_reduce_17 },

	{ .ptr = (void*)f533_reduce_18 },

	{ .ptr = (void*)f534_reduce_19 },

	{ .ptr = (void*)f535_reduce_20 },

	{ .ptr = (void*)f536_reduce_21 },

	{ .ptr = (void*)f537_reduce_22 },

	{ .ptr = (void*)f538_reduce_23 },

	{ .ptr = (void*)f539_reduce_24 },

	{ .ptr = (void*)f540_reduce_25 },

	{ .ptr = (void*)f541_reduce_26 },

	{ .ptr = (void*)f542_reduce_27 },

	{ .ptr = (void*)f543_reduce_28 },

	{ .ptr = (void*)f544_reduce_29 },

	{ .ptr = (void*)f545_reduce_30 },

	{ .ptr = (void*)f546_reduce_31 },

	{ .ptr = (void*)f547_reduce_32 },

	{ .ptr = (void*)f548_reduce_33 },

	{ .ptr = (void*)f549_reduce_34 },

	{ .ptr = (void*)f550_reduce_35 },

	{ .ptr = (void*)f551_reduce_36 },

	{ .ptr = (void*)f552_reduce_37 },

	{ .ptr = (void*)f553_reduce_38 },

	{ .ptr = (void*)f554_reduce_39 },

	{ .ptr = (void*)f555_reduce_40 },

	{ .ptr = (void*)f556_reduce_41 },

	{ .ptr = (void*)f557_reduce_42 },

	{ .ptr = (void*)f558_reduce_43 },

	{ .ptr = (void*)f559_reduce_44 },

	{ .ptr = (void*)f560_reduce_45 },

	{ .ptr = (void*)f561_reduce_46 },

	{ .ptr = (void*)f562_reduce_47 },

	{ .ptr = (void*)f563_reduce_48 },

	{ .ptr = (void*)f564_reduce_49 },

	{ .ptr = (void*)f565_reduce_50 },

	{ .ptr = (void*)f566_reduce_51 },

	{ .ptr = (void*)f568_reduce_52 },

	{ .ptr = (void*)f569_reduce_53 },

	{ .ptr = (void*)f570_reduce_54 },

	{ .ptr = (void*)f571_reduce_55 },

	{ .ptr = (void*)f572_reduce_56 },

	{ .ptr = (void*)f573_reduce_57 },

	{ .ptr = (void*)f574_reduce_58 },

	{ .ptr = (void*)f575_reduce_59 },

	{ .ptr = (void*)f576_reduce_60 },

	{ .ptr = (void*)f577_reduce_61 },

	{ .ptr = (void*)f578_reduce_62 },

	{ .ptr = (void*)f579_reduce_63 },

	{ .ptr = (void*)f580_reduce_64 },

	{ .ptr = (void*)f581_reduce_65 },

	{ .ptr = (void*)f582_reduce_66 },

	{ .ptr = (void*)f583_reduce_67 },

	{ .ptr = (void*)f584_reduce_68 },

	{ .ptr = (void*)f585_reduce_69 },

	{ .ptr = (void*)f586_reduce_70 },

	{ .ptr = (void*)f587_reduce_71 },

	{ .ptr = (void*)f588_reduce_72 },

	{ .ptr = (void*)f589_reduce_73 },

	{ .ptr = (void*)f590_reduce_74 },

	{ .ptr = (void*)f591_reduce_75 },

	{ .ptr = (void*)f592_reduce_76 },

	{ .ptr = (void*)f593_reduce_77 },

	{ .ptr = (void*)f594_reduce_78 },

	{ .ptr = (void*)f595_reduce_79 },

	{ .ptr = (void*)f596_reduce_80 },

	{ .ptr = (void*)f597_reduce_81 },

	{ .ptr = (void*)f598_reduce_82 },

	{ .ptr = (void*)f599_reduce_83 },

	{ .ptr = (void*)f600_reduce_84 },

	{ .ptr = (void*)f602_reduce_85 },

	{ .ptr = (void*)f603_reduce_86 },

	{ .ptr = (void*)f604_reduce_87 },

	{ .ptr = (void*)f605_reduce_88 },

	{ .ptr = (void*)f606_reduce_89 },

	{ .ptr = (void*)f607_reduce_90 },

	{ .ptr = (void*)f608_reduce_91 },

	{ .ptr = (void*)f609_reduce_92 },

	{ .ptr = (void*)f610_reduce_93 },

	{ .ptr = (void*)f611_reduce_94 },

	{ .ptr = (void*)f612_reduce_95 },

	{ .ptr = (void*)f613_reduce_96 },

	{ .ptr = (void*)f614_reduce_97 },

	{ .ptr = (void*)f615_reduce_98 },

	{ .ptr = (void*)f616_reduce_99 },

	{ .ptr = (void*)f617_reduce_100 },

	{ .ptr = (void*)f618_reduce_101 },

	{ .ptr = (void*)f619_reduce_102 },

	{ .ptr = (void*)f620_reduce_103 },

	{ .ptr = (void*)f621_reduce_104 },

	{ .ptr = (void*)f622_reduce_105 },

	{ .ptr = (void*)f623_reduce_106 },

	{ .ptr = (void*)f624_reduce_107 },

	{ .ptr = (void*)f625_reduce_108 },

	{ .ptr = (void*)f626_reduce_109 },

	{ .ptr = (void*)f627_reduce_110 },

	{ .ptr = (void*)f628_reduce_111 },

	{ .ptr = (void*)f629_reduce_112 },

	{ .ptr = (void*)f630_reduce_113 },

	{ .ptr = (void*)f631_reduce_114 },

	{ .ptr = (void*)f632_reduce_115 },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f634_reduce_122 },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f635_reduce_126 },

	{ .ptr = (void*)f636_reduce_127 },

	{ .ptr = (void*)f637_reduce_128 },

	{ .ptr = (void*)f638_reduce_129 },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f639_reduce_135 },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f641_reduce_default },

	{ .ptr = (void*)f640_reduce_138 },

};

// yy_reduce workspace at ws+3744 length ws+94
void f513_yy_reduce(i2* p10607 /* yyact */, i1 p10608 /* yylookahead */, i2 p10609 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+3744) = p10609; /*yyruleno */
	*(i1*)(intptr_t)(ws+3746) = p10608; /*yylookahead */

	i8 v10610 = (i8)(intptr_t)(((i1*)c02_a7db+0));
	i8 v10611 = (i8)(intptr_t)(ws+3744);
	i2 v10612 = *(i2*)(intptr_t)v10611;
	i1 v10613 = v10612;
	i8 v10614 = v10613;
	i8 v10615 = v10610+v10614;
	i1 v10616 = *(i1*)(intptr_t)v10615;
	i8 v10617 = (i8)(intptr_t)(ws+3750);
	*(i1*)(intptr_t)v10617 = v10616;

	i8 v10618 = (i8)(intptr_t)(ws+2080);
	i8 v10619 = *(i8*)(intptr_t)v10618;
	i8 v10620 = (i8)(intptr_t)(ws+3688);
	if (v10619==v10620) goto c02_07df; else goto c02_07e0;

c02_07df:;

	i8 v10621 = (i8)(intptr_t)(f511_yy_stack_overflow);

	((void(*)(void))(intptr_t)v10621)();

	goto c02_07dc;

c02_07e0:;

c02_07dc:;

	i8 v10622 = (i8)(intptr_t)(ws+3760);
	i8 v10623 = (i8)(intptr_t)(ws+3824);
	*(i8*)(intptr_t)v10623 = v10622;

	i8 v10624 = (i8)(intptr_t)(ws+3750);
	i1 v10625 = *(i1*)(intptr_t)v10624;
	i8 v10626 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v10626 = v10625;

c02_07e3:;

	i8 v10627 = (i8)(intptr_t)(ws+3832);
	i1 v10628 = *(i1*)(intptr_t)v10627;
	i1 v10629 = (i1)+0;
	if (v10628==v10629) goto c02_07e6; else goto c02_07e5;

c02_07e5:;

	i8 v10630 = (i8)(intptr_t)(ws+2080);
	i8 v10631 = *(i8*)(intptr_t)v10630;
	i8 v10632 = v10631+(+8);
	i8 v10633 = *(i8*)(intptr_t)v10632;
	i8 v10634 = (i8)(intptr_t)(ws+3824);
	i8 v10635 = *(i8*)(intptr_t)v10634;
	*(i8*)(intptr_t)v10635 = v10633;

	i8 v10636 = (i8)(intptr_t)(ws+2080);
	i8 v10637 = *(i8*)(intptr_t)v10636;
	i8 v10638 = v10637+(-16);
	i8 v10639 = (i8)(intptr_t)(ws+2080);
	*(i8*)(intptr_t)v10639 = v10638;

	i8 v10640 = (i8)(intptr_t)(ws+3824);
	i8 v10641 = *(i8*)(intptr_t)v10640;
	i8 v10642 = v10641+(+8);
	i8 v10643 = (i8)(intptr_t)(ws+3824);
	*(i8*)(intptr_t)v10643 = v10642;

	i8 v10644 = (i8)(intptr_t)(ws+3832);
	i1 v10645 = *(i1*)(intptr_t)v10644;
	i1 v10646 = v10645+(-1);
	i8 v10647 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v10647 = v10646;

	goto c02_07e3;

c02_07e6:;































































































































	i8 v13511 = (i8)(intptr_t)(((i1*)c02_a93e+0));
	i8 v13512 = (i8)(intptr_t)(ws+3744);
	i2 v13513 = *(i2*)(intptr_t)v13512;
	i1 v13514 = v13513;
	i8 v13515 = v13514;
	i1 v13516 = (i1)+3;
	i8 v13517 = ((i8)v13515)<<v13516;
	i8 v13518 = v13511+v13517;
	i8 v13519 = *(i8*)(intptr_t)v13518;

	((void(*)(void))(intptr_t)v13519)();

	i8 v13520 = (i8)(intptr_t)(ws+3752);
	i8 v13521 = *(i8*)(intptr_t)v13520;
	i8 v13522 = (i8)(intptr_t)(ws+2080);
	i8 v13523 = *(i8*)(intptr_t)v13522;
	i8 v13524 = v13523+(+24);
	*(i8*)(intptr_t)v13524 = v13521;

	i8 v13525 = (i8)(intptr_t)(((i1*)c02_a7da+0));
	i8 v13526 = (i8)(intptr_t)(ws+3744);
	i2 v13527 = *(i2*)(intptr_t)v13526;
	i1 v13528 = v13527;
	i8 v13529 = v13528;
	i8 v13530 = v13525+v13529;
	i1 v13531 = *(i1*)(intptr_t)v13530;
	i8 v13532 = (i8)(intptr_t)(ws+3833);
	*(i1*)(intptr_t)v13532 = v13531;

	i8 v13533 = (i8)(intptr_t)(ws+2080);
	i8 v13534 = *(i8*)(intptr_t)v13533;
	i2 v13535 = *(i2*)(intptr_t)v13534;
	i8 v13536 = (i8)(intptr_t)(ws+3834);
	*(i2*)(intptr_t)v13536 = v13535;

	i8 v13537 = (i8)(intptr_t)(((i1*)c02_a7c2+0));
	i8 v13538 = (i8)(intptr_t)(ws+3834);
	i2 v13539 = *(i2*)(intptr_t)v13538;
	i1 v13540 = v13539;
	i8 v13541 = v13540;
	i1 v13542 = (i1)+1;
	i8 v13543 = ((i8)v13541)<<v13542;
	i8 v13544 = v13537+v13543;
	i2 v13545 = *(i2*)(intptr_t)v13544;
	i8 v13546 = (i8)(intptr_t)(ws+3748);
	*(i2*)(intptr_t)v13546 = v13545;

	i2 v13547 = (i2)+113;
	i8 v13548 = (i8)(intptr_t)(ws+3834);
	i2 v13549 = *(i2*)(intptr_t)v13548;
	if (v13547<v13549) goto c02_0943; else goto c02_0942;

c02_0942:;

	i8 v13550 = (i8)(intptr_t)(((i1*)c02_a7c1+0));
	i8 v13551 = (i8)(intptr_t)(ws+3834);
	i2 v13552 = *(i2*)(intptr_t)v13551;
	i1 v13553 = v13552;
	i8 v13554 = v13553;
	i1 v13555 = (i1)+1;
	i8 v13556 = ((i8)v13554)<<v13555;
	i8 v13557 = v13550+v13556;
	i2 v13558 = *(i2*)(intptr_t)v13557;
	i8 v13559 = (i8)(intptr_t)(ws+3833);
	i1 v13560 = *(i1*)(intptr_t)v13559;
	i2 v13561 = v13560;
	i2 v13562 = v13558+v13561;
	i8 v13563 = (i8)(intptr_t)(ws+3836);
	*(i2*)(intptr_t)v13563 = v13562;

	i8 v13564 = (i8)(intptr_t)(ws+3836);
	i2 v13565 = *(i2*)(intptr_t)v13564;
	i2 v13566 = (i2)+0;
	if (v13565<v13566) goto c02_094c; else goto c02_094e;

c02_094e:;

	i8 v13567 = (i8)(intptr_t)(ws+3836);
	i2 v13568 = *(i2*)(intptr_t)v13567;
	i2 v13569 = (i2)+1219;
	if (v13568<v13569) goto c02_094d; else goto c02_094c;

c02_094d:;

	i8 v13570 = (i8)(intptr_t)(((i1*)c02_a7bf+0));
	i8 v13571 = (i8)(intptr_t)(ws+3836);
	i2 v13572 = *(i2*)(intptr_t)v13571;
	i8 v13573 = v13572;
	i8 v13574 = v13570+v13573;
	i1 v13575 = *(i1*)(intptr_t)v13574;
	i8 v13576 = (i8)(intptr_t)(ws+3833);
	i1 v13577 = *(i1*)(intptr_t)v13576;
	if (v13575==v13577) goto c02_094b; else goto c02_094c;

c02_094b:;

	i8 v13578 = (i8)(intptr_t)(((i1*)c02_a7be+0));
	i8 v13579 = (i8)(intptr_t)(ws+3836);
	i2 v13580 = *(i2*)(intptr_t)v13579;
	i8 v13581 = v13580;
	i1 v13582 = (i1)+1;
	i8 v13583 = ((i8)v13581)<<v13582;
	i8 v13584 = v13578+v13583;
	i2 v13585 = *(i2*)(intptr_t)v13584;
	i8 v13586 = (i8)(intptr_t)(ws+3748);
	*(i2*)(intptr_t)v13586 = v13585;

	goto c02_0944;

c02_094c:;

c02_0944:;

	goto c02_093f;

c02_0943:;

c02_093f:;

	i8 v13587 = (i8)(intptr_t)(ws+2080);
	i8 v13588 = *(i8*)(intptr_t)v13587;
	i8 v13589 = v13588+(+16);
	i8 v13590 = (i8)(intptr_t)(ws+2080);
	*(i8*)(intptr_t)v13590 = v13589;

	i8 v13591 = (i8)(intptr_t)(ws+3748);
	i2 v13592 = *(i2*)(intptr_t)v13591;
	i8 v13593 = (i8)(intptr_t)(ws+2080);
	i8 v13594 = *(i8*)(intptr_t)v13593;
	*(i2*)(intptr_t)v13594 = v13592;

	i8 v13595 = (i8)(intptr_t)(ws+3833);
	i1 v13596 = *(i1*)(intptr_t)v13595;
	i8 v13597 = (i8)(intptr_t)(ws+2080);
	i8 v13598 = *(i8*)(intptr_t)v13597;
	i8 v13599 = v13598+(+2);
	*(i1*)(intptr_t)v13599 = v13596;

endsub:;
	*p10607 = *(i2*)(intptr_t)(ws+3748);
}
	void f510_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+3744 length ws+0
void f642_yy_parse_failed(void) {

	i8 v13600 = (i8)(intptr_t)(f510_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v13600)();

endsub:;
}
	void f69_StartError(void);
const i1 c02_s0203[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// yy_syntax_error workspace at ws+3744 length ws+16
void f643_yy_syntax_error(i8 p13601 /* yyminor */, i1 p13602 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3744) = p13602; /*yymajor */
	*(i8*)(intptr_t)(ws+3752) = p13601; /*yyminor */

	i8 v13603 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v13603)();

	i8 v13604 = (i8)(intptr_t)c02_s0203;
	i8 v13605 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13605)(v13604);

	i8 v13606 = (i8)(intptr_t)(((i1*)c02_a7c3+0));
	i8 v13607 = (i8)(intptr_t)(ws+3744);
	i1 v13608 = *(i1*)(intptr_t)v13607;
	i8 v13609 = v13608;
	i1 v13610 = (i1)+3;
	i8 v13611 = ((i8)v13609)<<v13610;
	i8 v13612 = v13606+v13611;
	i8 v13613 = *(i8*)(intptr_t)v13612;
	i8 v13614 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13614)(v13613);

	i8 v13615 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v13615)();

endsub:;
}

// yy_accept workspace at ws+3744 length ws+0
void f644_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+3720 length ws+0
void f645_ParserInit(void) {

	i1 v13616 = (i1)-1;
	i8 v13617 = (i8)(intptr_t)(ws+3704);
	*(i1*)(intptr_t)v13617 = v13616;

	i8 v13618 = (i8)(intptr_t)(ws+2088);
	i8 v13619 = (i8)(intptr_t)(ws+2080);
	*(i8*)(intptr_t)v13619 = v13618;

	i2 v13620 = (i2)+0;
	i8 v13621 = (i8)(intptr_t)(ws+2088);
	*(i2*)(intptr_t)v13621 = v13620;

	i1 v13622 = (i1)+0;
	i8 v13623 = (i8)(intptr_t)(ws+2090);
	*(i1*)(intptr_t)v13623 = v13622;

endsub:;
}
	void f509_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+3720 length ws+0
void f646_ParserDeinit(void) {

c02_0951:;

	i8 v13624 = (i8)(intptr_t)(ws+2080);
	i8 v13625 = *(i8*)(intptr_t)v13624;
	i8 v13626 = (i8)(intptr_t)(ws+2088);
	if (v13625==v13626) goto c02_0954; else goto c02_0953;

c02_0953:;

	i8 v13627 = (i8)(intptr_t)(f509_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v13627)();

	goto c02_0951;

c02_0954:;

endsub:;
}
	void f513_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	void f511_yy_stack_overflow(void);
	void f644_yy_accept(void);
	void f643_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	void f507_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f642_yy_parse_failed(void);

// ParserFeedToken workspace at ws+3720 length ws+20
void f647_ParserFeedToken(i8 p13628 /* yyminor */, i1 p13629 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3720) = p13629; /*yymajor */
	*(i8*)(intptr_t)(ws+3728) = p13628; /*yyminor */

	i8 v13630 = (i8)(intptr_t)(ws+2080);
	i8 v13631 = *(i8*)(intptr_t)v13630;
	i2 v13632 = *(i2*)(intptr_t)v13631;
	i8 v13633 = (i8)(intptr_t)(ws+3736);
	*(i2*)(intptr_t)v13633 = v13632;

c02_0955:;

	i2 v13634 = (i2)+221;
	i8 v13635 = (i8)(intptr_t)(ws+3736);
	i2 v13636 = *(i2*)(intptr_t)v13635;
	if (v13634<v13636) goto c02_095b; else goto c02_095a;

c02_095a:;

	i8 v13637 = (i8)(intptr_t)(((i1*)c02_a7c0+0));
	i8 v13638 = (i8)(intptr_t)(ws+3736);
	i2 v13639 = *(i2*)(intptr_t)v13638;
	i1 v13640 = v13639;
	i8 v13641 = v13640;
	i1 v13642 = (i1)+1;
	i8 v13643 = ((i8)v13641)<<v13642;
	i8 v13644 = v13637+v13643;
	i2 v13645 = *(i2*)(intptr_t)v13644;
	i8 v13646 = (i8)(intptr_t)(ws+3720);
	i1 v13647 = *(i1*)(intptr_t)v13646;
	i2 v13648 = v13647;
	i2 v13649 = v13645+v13648;
	i8 v13650 = (i8)(intptr_t)(ws+3738);
	*(i2*)(intptr_t)v13650 = v13649;

	i8 v13651 = (i8)(intptr_t)(((i1*)c02_a7bf+0));
	i8 v13652 = (i8)(intptr_t)(ws+3738);
	i2 v13653 = *(i2*)(intptr_t)v13652;
	i8 v13654 = v13653;
	i8 v13655 = v13651+v13654;
	i1 v13656 = *(i1*)(intptr_t)v13655;
	i8 v13657 = (i8)(intptr_t)(ws+3720);
	i1 v13658 = *(i1*)(intptr_t)v13657;
	if (v13656==v13658) goto c02_0960; else goto c02_095f;

c02_095f:;

	i8 v13659 = (i8)(intptr_t)(((i1*)c02_a7c2+0));
	i8 v13660 = (i8)(intptr_t)(ws+3736);
	i2 v13661 = *(i2*)(intptr_t)v13660;
	i1 v13662 = v13661;
	i8 v13663 = v13662;
	i1 v13664 = (i1)+1;
	i8 v13665 = ((i8)v13663)<<v13664;
	i8 v13666 = v13659+v13665;
	i2 v13667 = *(i2*)(intptr_t)v13666;
	i8 v13668 = (i8)(intptr_t)(ws+3736);
	*(i2*)(intptr_t)v13668 = v13667;

	goto c02_095c;

c02_0960:;

	i8 v13669 = (i8)(intptr_t)(((i1*)c02_a7be+0));
	i8 v13670 = (i8)(intptr_t)(ws+3738);
	i2 v13671 = *(i2*)(intptr_t)v13670;
	i8 v13672 = v13671;
	i1 v13673 = (i1)+1;
	i8 v13674 = ((i8)v13672)<<v13673;
	i8 v13675 = v13669+v13674;
	i2 v13676 = *(i2*)(intptr_t)v13675;
	i8 v13677 = (i8)(intptr_t)(ws+3736);
	*(i2*)(intptr_t)v13677 = v13676;

c02_095c:;

	goto c02_0957;

c02_095b:;

c02_0957:;

	i8 v13678 = (i8)(intptr_t)(ws+3736);
	i2 v13679 = *(i2*)(intptr_t)v13678;
	i2 v13680 = (i2)+451;
	if (v13679<v13680) goto c02_0965; else goto c02_0964;

c02_0964:;

	i8 v13681 = (i8)(intptr_t)(ws+3736);
	i2 v13682 = *(i2*)(intptr_t)v13681;
	i2 v13683 = v13682+(-451);
	i8 v13684 = (i8)(intptr_t)(ws+3720);
	i1 v13685 = *(i1*)(intptr_t)v13684;
	i8 v13686 = (i8)(intptr_t)(f513_yy_reduce);
	i2 v13687;

	((void(*)(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */))(intptr_t)v13686)(&v13687, v13685, v13683);
	i8 v13688 = (i8)(intptr_t)(ws+3736);
	*(i2*)(intptr_t)v13688 = v13687;

	goto c02_0961;

c02_0965:;

	i2 v13689 = (i2)+447;
	i8 v13690 = (i8)(intptr_t)(ws+3736);
	i2 v13691 = *(i2*)(intptr_t)v13690;
	if (v13689<v13691) goto c02_0969; else goto c02_0968;

c02_0968:;

	i8 v13692 = (i8)(intptr_t)(ws+2080);
	i8 v13693 = *(i8*)(intptr_t)v13692;
	i8 v13694 = (i8)(intptr_t)(ws+3688);
	if (v13693==v13694) goto c02_096d; else goto c02_096e;

c02_096d:;

	i8 v13695 = (i8)(intptr_t)(f511_yy_stack_overflow);

	((void(*)(void))(intptr_t)v13695)();

	goto endsub;

c02_096e:;

c02_096a:;

	i8 v13696 = (i8)(intptr_t)(ws+2080);
	i8 v13697 = *(i8*)(intptr_t)v13696;
	i8 v13698 = v13697+(+16);
	i8 v13699 = (i8)(intptr_t)(ws+2080);
	*(i8*)(intptr_t)v13699 = v13698;

	i2 v13700 = (i2)+221;
	i8 v13701 = (i8)(intptr_t)(ws+3736);
	i2 v13702 = *(i2*)(intptr_t)v13701;
	if (v13700<v13702) goto c02_0972; else goto c02_0973;

c02_0972:;

	i8 v13703 = (i8)(intptr_t)(ws+3736);
	i2 v13704 = *(i2*)(intptr_t)v13703;
	i2 v13705 = v13704+(+142);
	i8 v13706 = (i8)(intptr_t)(ws+3736);
	*(i2*)(intptr_t)v13706 = v13705;

	goto c02_096f;

c02_0973:;

c02_096f:;

	i8 v13707 = (i8)(intptr_t)(ws+3736);
	i2 v13708 = *(i2*)(intptr_t)v13707;
	i8 v13709 = (i8)(intptr_t)(ws+2080);
	i8 v13710 = *(i8*)(intptr_t)v13709;
	*(i2*)(intptr_t)v13710 = v13708;

	i8 v13711 = (i8)(intptr_t)(ws+3720);
	i1 v13712 = *(i1*)(intptr_t)v13711;
	i8 v13713 = (i8)(intptr_t)(ws+2080);
	i8 v13714 = *(i8*)(intptr_t)v13713;
	i8 v13715 = v13714+(+2);
	*(i1*)(intptr_t)v13715 = v13712;

	i8 v13716 = (i8)(intptr_t)(ws+3728);
	i8 v13717 = *(i8*)(intptr_t)v13716;
	i8 v13718 = *(i8*)(intptr_t)v13717;
	i8 v13719 = (i8)(intptr_t)(ws+2080);
	i8 v13720 = *(i8*)(intptr_t)v13719;
	i8 v13721 = v13720+(+8);
	*(i8*)(intptr_t)v13721 = v13718;

	i8 v13722 = (i8)(intptr_t)(ws+3704);
	i1 v13723 = *(i1*)(intptr_t)v13722;
	i1 v13724 = (i1)+0;
	if ((s1)v13723<(s1)v13724) goto c02_0978; else goto c02_0977;

c02_0977:;

	i8 v13725 = (i8)(intptr_t)(ws+3704);
	i1 v13726 = *(i1*)(intptr_t)v13725;
	i1 v13727 = v13726+(-1);
	i8 v13728 = (i8)(intptr_t)(ws+3704);
	*(i1*)(intptr_t)v13728 = v13727;

	goto c02_0974;

c02_0978:;

c02_0974:;

	goto c02_0956;

c02_0969:;

	i8 v13729 = (i8)(intptr_t)(ws+3736);
	i2 v13730 = *(i2*)(intptr_t)v13729;
	i2 v13731 = (i2)+449;
	if (v13730==v13731) goto c02_097b; else goto c02_097c;

c02_097b:;

	i8 v13732 = (i8)(intptr_t)(ws+2080);
	i8 v13733 = *(i8*)(intptr_t)v13732;
	i8 v13734 = v13733+(-16);
	i8 v13735 = (i8)(intptr_t)(ws+2080);
	*(i8*)(intptr_t)v13735 = v13734;

	i8 v13736 = (i8)(intptr_t)(f644_yy_accept);

	((void(*)(void))(intptr_t)v13736)();

	goto c02_0956;

c02_097c:;

	i1 v13737 = (i1)+0;
	i8 v13738 = (i8)(intptr_t)(ws+3704);
	i1 v13739 = *(i1*)(intptr_t)v13738;
	if ((s1)v13737<(s1)v13739) goto c02_0981; else goto c02_0980;

c02_0980:;

	i8 v13740 = (i8)(intptr_t)(ws+3720);
	i1 v13741 = *(i1*)(intptr_t)v13740;
	i8 v13742 = (i8)(intptr_t)(ws+3728);
	i8 v13743 = *(i8*)(intptr_t)v13742;
	i8 v13744 = (i8)(intptr_t)(f643_yy_syntax_error);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v13744)(v13743, v13741);

	goto c02_097d;

c02_0981:;

c02_097d:;

	i1 v13745 = (i1)+3;
	i8 v13746 = (i8)(intptr_t)(ws+3704);
	*(i1*)(intptr_t)v13746 = v13745;

	i8 v13747 = (i8)(intptr_t)(ws+3720);
	i1 v13748 = *(i1*)(intptr_t)v13747;
	i8 v13749 = (i8)(intptr_t)(ws+3728);
	i8 v13750 = *(i8*)(intptr_t)v13749;
	i8 v13751 = (i8)(intptr_t)(f507_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13751)(v13750, v13748);

	i8 v13752 = (i8)(intptr_t)(ws+3720);
	i1 v13753 = *(i1*)(intptr_t)v13752;
	i1 v13754 = (i1)+0;
	if (v13753==v13754) goto c02_0985; else goto c02_0986;

c02_0985:;

	i8 v13755 = (i8)(intptr_t)(f642_yy_parse_failed);

	((void(*)(void))(intptr_t)v13755)();

	i1 v13756 = (i1)-1;
	i8 v13757 = (i8)(intptr_t)(ws+3704);
	*(i1*)(intptr_t)v13757 = v13756;

	goto c02_0982;

c02_0986:;

c02_0982:;

	goto c02_0956;

c02_0961:;

	i8 v13758 = (i8)(intptr_t)(ws+2080);
	i8 v13759 = *(i8*)(intptr_t)v13758;
	i8 v13760 = (i8)(intptr_t)(ws+2088);
	if (v13759==v13760) goto c02_098a; else goto c02_098b;

c02_098a:;

	goto c02_0956;

c02_098b:;

c02_0987:;

	goto c02_0955;

c02_0956:;

endsub:;
}
	void f37_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0204[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3720 length ws+0
void f648_PrintFreeMemory(void) {

	i8 v13761 = (i8)(intptr_t)(f37_GetFreeMemory);
	i8 v13762;

	((void(*)(i8* /* i */))(intptr_t)v13761)(&v13762);
	i1 v13763 = (i1)+10;
	i8 v13764 = ((i8)v13762)>>v13763;
	i2 v13765 = v13764;
	i8 v13766 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v13766)(v13765);

	i8 v13767 = (i8)(intptr_t)c02_s0204;
	i8 v13768 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13768)(v13767);

endsub:;
}
const i1 c02_s0205[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3728 length ws+0
void f649_SyntaxError(void) {

	i8 v13769 = (i8)(intptr_t)c02_s0205;
	i8 v13770 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13770)(v13769);

	i8 v13771 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v13771)();

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
	void f72_LexerAddIncludePath(i8 /* path */);
	void f649_SyntaxError(void);
	void f649_SyntaxError(void);
	void f649_SyntaxError(void);

// ParseArguments workspace at ws+3720 length ws+8
void f650_ParseArguments(void) {

	i8 v13772 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v13772)();

c02_098c:;

	i8 v13773 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v13774;

	((void(*)(i8* /* arg */))(intptr_t)v13773)(&v13774);
	i8 v13775 = (i8)(intptr_t)(ws+3720);
	*(i8*)(intptr_t)v13775 = v13774;

	i8 v13776 = (i8)(intptr_t)(ws+3720);
	i8 v13777 = *(i8*)(intptr_t)v13776;
	i8 v13778 = (i8)+0;
	if (v13777==v13778) goto c02_0991; else goto c02_0992;

c02_0991:;

	goto c02_098d;

c02_0992:;

c02_098e:;

	i8 v13779 = (i8)(intptr_t)(ws+3720);
	i8 v13780 = *(i8*)(intptr_t)v13779;
	i1 v13781 = *(i1*)(intptr_t)v13780;
	i1 v13782 = (i1)+45;
	if (v13781==v13782) goto c02_0996; else goto c02_0997;

c02_0996:;

	i8 v13783 = (i8)(intptr_t)(ws+3720);
	i8 v13784 = *(i8*)(intptr_t)v13783;
	i8 v13785 = v13784+(+1);
	i8 v13786 = (i8)(intptr_t)(ws+3720);
	*(i8*)(intptr_t)v13786 = v13785;

	i8 v13787 = (i8)(intptr_t)(ws+3720);
	i8 v13788 = *(i8*)(intptr_t)v13787;
	i1 v13789 = *(i1*)(intptr_t)v13788;
	i1 v13790 = (i1)+73;
	if (v13789==v13790) goto c02_099b; else goto c02_099c;

c02_099b:;

	i8 v13791 = (i8)(intptr_t)(ws+3720);
	i8 v13792 = *(i8*)(intptr_t)v13791;
	i8 v13793 = v13792+(+1);
	i8 v13794 = (i8)(intptr_t)(ws+3720);
	*(i8*)(intptr_t)v13794 = v13793;

	i8 v13795 = (i8)(intptr_t)(ws+3720);
	i8 v13796 = *(i8*)(intptr_t)v13795;
	i8 v13797 = (i8)(intptr_t)(f72_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v13797)(v13796);

	goto c02_0998;

c02_099c:;

	i8 v13798 = (i8)(intptr_t)(f649_SyntaxError);

	((void(*)(void))(intptr_t)v13798)();

c02_0998:;

	goto c02_0993;

c02_0997:;

	i8 v13799 = (i8)(intptr_t)(ws+24);
	i8 v13800 = *(i8*)(intptr_t)v13799;
	i8 v13801 = (i8)+0;
	if (v13800==v13801) goto c02_09a0; else goto c02_09a1;

c02_09a0:;

	i8 v13802 = (i8)(intptr_t)(ws+3720);
	i8 v13803 = *(i8*)(intptr_t)v13802;
	i8 v13804 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v13804 = v13803;

	goto c02_099d;

c02_09a1:;

	i8 v13805 = (i8)(intptr_t)(ws+32);
	i8 v13806 = *(i8*)(intptr_t)v13805;
	i8 v13807 = (i8)+0;
	if (v13806==v13807) goto c02_09a4; else goto c02_09a5;

c02_09a4:;

	i8 v13808 = (i8)(intptr_t)(ws+3720);
	i8 v13809 = *(i8*)(intptr_t)v13808;
	i8 v13810 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v13810 = v13809;

	goto c02_099d;

c02_09a5:;

	i8 v13811 = (i8)(intptr_t)(f649_SyntaxError);

	((void(*)(void))(intptr_t)v13811)();

c02_099d:;

c02_0993:;

	goto c02_098c;

c02_098d:;

	i8 v13812 = (i8)(intptr_t)(ws+24);
	i8 v13813 = *(i8*)(intptr_t)v13812;
	i8 v13814 = (i8)+0;
	if (v13813==v13814) goto c02_09ab; else goto c02_09ad;

c02_09ad:;

	i8 v13815 = (i8)(intptr_t)(ws+32);
	i8 v13816 = *(i8*)(intptr_t)v13815;
	i8 v13817 = (i8)+0;
	if (v13816==v13817) goto c02_09ab; else goto c02_09ac;

c02_09ab:;

	i8 v13818 = (i8)(intptr_t)(f649_SyntaxError);

	((void(*)(void))(intptr_t)v13818)();

	goto c02_09a6;

c02_09ac:;

c02_09a6:;

endsub:;
}
const i1 c02_s0206[] = { 0x43,0x4f,0x57,0x43,0x4f,0x4d,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f648_PrintFreeMemory(void);
	void f650_ParseArguments(void);
const i1 c02_s0207[] = { 0 };
	void f72_LexerAddIncludePath(i8 /* path */);
	void f76_LexerIncludeFile(i8 /* path */);
	void f474_CreateMainSubroutine(void);
	void f237_ArchInitTypes(void);
	void f194_EmitterOpenfile(i8 /* filename */);
	void f196_EmitterDeclareSubroutine(i8 /* subr */);
	void f109_MidStartfile(i8* /* m */);
	void f465_Generate(i8 /* statement */);
	void f146_MidStartsub(i8* /* m */, i8 /* subr */);
	void f465_Generate(i8 /* statement */);
	void f645_ParserInit(void);
	void f77_LexerReadToken(i1* /* token */);
	void f66_InternalStrDup(i8* /* news */, i8 /* s */);
	void f66_InternalStrDup(i8* /* news */, i8 /* s */);
	void f647_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	void f646_ParserDeinit(void);
	void f122_MidEndsub(i8* /* m */, i8 /* subr */);
	void f465_Generate(i8 /* statement */);
	void f111_MidEndfile(i8* /* m */);
	void f465_Generate(i8 /* statement */);
	void f195_EmitterClosefile(void);
const i1 c02_s0208[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f648_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3720
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 






















































	i8 v838 = (i8)+0;
	i8 v839 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v839 = v838;

	i8 v840 = (i8)+0;
	i8 v841 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v841 = v840;

	i2 v842 = (i2)+1;
	i8 v843 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v843 = v842;

	i2 v844 = (i2)+1;
	i8 v845 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v845 = v844;

	i8 v846 = (i8)+0;
	i8 v847 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v847 = v846;

	i8 v848 = (i8)(intptr_t)(ws+96);
	i8 v849 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v849 = v848;




	i8 v963 = (i8)+0;
	i8 v964 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v964 = v963;



	i8 v995 = (i8)+0;
	i8 v996 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v996 = v995;





	i8 v1078 = (i8)+0;
	i8 v1079 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1079 = v1078;

	i8 v1080 = (i8)+0;
	i8 v1081 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1081 = v1080;

	i1 v1082 = (i1)+0;
	i8 v1083 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1083 = v1082;

	i1 v1084 = (i1)+0;
	i8 v1085 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1085 = v1084;








	i1 v1132 = (i1)+0;
	i8 v1133 = (i8)(intptr_t)(ws+924);
	*(i1*)(intptr_t)v1133 = v1132;





































































	i8 v2990 = (i8)+0;
	i8 v2991 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v2991 = v2990;












	i1 v3563 = (i1)+0;
	i8 v3564 = (i8)(intptr_t)(ws+1715);
	*(i1*)(intptr_t)v3564 = v3563;

	i8 v3565 = (i8)+0;
	i8 v3566 = (i8)(intptr_t)(ws+1736);
	*(i8*)(intptr_t)v3566 = v3565;

	i1 v3567 = (i1)+0;
	i8 v3568 = (i8)(intptr_t)(ws+1744);
	*(i1*)(intptr_t)v3568 = v3567;


































































	i8 v4759 = (i8)+0;
	i8 v4760 = (i8)(intptr_t)(ws+1832);
	*(i8*)(intptr_t)v4760 = v4759;







	i2 v4880 = (i2)+1;
	i8 v4881 = (i8)(intptr_t)(ws+2042);
	*(i2*)(intptr_t)v4881 = v4880;































	i2 v5962 = (i2)+0;
	i8 v5963 = (i8)(intptr_t)(ws+2044);
	*(i2*)(intptr_t)v5963 = v5962;


	i1 v6018 = (i1)+0;
	i8 v6019 = (i8)(intptr_t)(ws+2054);
	*(i1*)(intptr_t)v6019 = v6018;


















	i1 v8871 = (i1)+0;
	i8 v8872 = (i8)(intptr_t)(ws+2055);
	*(i1*)(intptr_t)v8872 = v8871;


































































	i8 v13819 = (i8)(intptr_t)c02_s0206;
	i8 v13820 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13820)(v13819);

	i8 v13821 = (i8)(intptr_t)(f648_PrintFreeMemory);

	((void(*)(void))(intptr_t)v13821)();

	i8 v13822 = (i8)(intptr_t)(f650_ParseArguments);

	((void(*)(void))(intptr_t)v13822)();

	i8 v13823 = (i8)(intptr_t)c02_s0207;
	i8 v13824 = (i8)(intptr_t)(f72_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v13824)(v13823);

	i8 v13825 = (i8)(intptr_t)(ws+24);
	i8 v13826 = *(i8*)(intptr_t)v13825;
	i8 v13827 = (i8)(intptr_t)(f76_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v13827)(v13826);

	i8 v13828 = (i8)(intptr_t)(f474_CreateMainSubroutine);

	((void(*)(void))(intptr_t)v13828)();

	i8 v13829 = (i8)(intptr_t)(f237_ArchInitTypes);

	((void(*)(void))(intptr_t)v13829)();

	i8 v13830 = (i8)(intptr_t)(ws+32);
	i8 v13831 = *(i8*)(intptr_t)v13830;
	i8 v13832 = (i8)(intptr_t)(f194_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v13832)(v13831);

	i8 v13833 = (i8)(intptr_t)(ws+40);
	i8 v13834 = *(i8*)(intptr_t)v13833;
	i8 v13835 = (i8)(intptr_t)(f196_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v13835)(v13834);

	i8 v13836 = (i8)(intptr_t)(f109_MidStartfile);
	i8 v13837;

	((void(*)(i8* /* m */))(intptr_t)v13836)(&v13837);
	i8 v13838 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13838)(v13837);

	i8 v13839 = (i8)(intptr_t)(ws+40);
	i8 v13840 = *(i8*)(intptr_t)v13839;
	i8 v13841 = (i8)(intptr_t)(f146_MidStartsub);
	i8 v13842;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v13841)(&v13842, v13840);
	i8 v13843 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13843)(v13842);

	i8 v13844 = (i8)(intptr_t)(f645_ParserInit);

	((void(*)(void))(intptr_t)v13844)();

c02_09ae:;

	i8 v13845 = (i8)(intptr_t)(f77_LexerReadToken);
	i1 v13846;

	((void(*)(i1* /* token */))(intptr_t)v13845)(&v13846);
	i8 v13847 = (i8)(intptr_t)(ws+3705);
	*(i1*)(intptr_t)v13847 = v13846;

	i8 v13848 = (i8)(intptr_t)(ws+3705);
	i1 v13849 = *(i1*)(intptr_t)v13848;

	if (v13849 != +34) goto c02_09b1;

	i8 v13850 = (i8)(intptr_t)(ws+396);
	i4 v13851 = *(i4*)(intptr_t)v13850;
	i8 v13852 = (i8)(intptr_t)(ws+3712);
	*(i4*)(intptr_t)v13852 = v13851;

	goto c02_09b0;

c02_09b1:;

	if (v13849 != +33) goto c02_09b2;

	i8 v13853 = (i8)(intptr_t)(ws+265);
	i8 v13854 = (i8)(intptr_t)(f66_InternalStrDup);
	i8 v13855;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v13854)(&v13855, v13853);
	i8 v13856 = (i8)(intptr_t)(ws+3712);
	*(i8*)(intptr_t)v13856 = v13855;

	goto c02_09b0;

c02_09b2:;

	if (v13849 != +41) goto c02_09b3;

	i8 v13857 = (i8)(intptr_t)(ws+265);
	i8 v13858 = (i8)(intptr_t)(f66_InternalStrDup);
	i8 v13859;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v13858)(&v13859, v13857);
	i8 v13860 = (i8)(intptr_t)(ws+3712);
	*(i8*)(intptr_t)v13860 = v13859;

	goto c02_09b0;

c02_09b3:;

	i4 v13861 = (i4)+0;
	i8 v13862 = (i8)(intptr_t)(ws+3712);
	*(i4*)(intptr_t)v13862 = v13861;

c02_09b0:;


	i8 v13863 = (i8)(intptr_t)(ws+3705);
	i1 v13864 = *(i1*)(intptr_t)v13863;
	i8 v13865 = (i8)(intptr_t)(ws+3712);
	i8 v13866 = (i8)(intptr_t)(f647_ParserFeedToken);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v13866)(v13865, v13864);

	i8 v13867 = (i8)(intptr_t)(ws+3705);
	i1 v13868 = *(i1*)(intptr_t)v13867;
	i1 v13869 = (i1)+0;
	if (v13868==v13869) goto c02_09b7; else goto c02_09b8;

c02_09b7:;

	goto c02_09af;

c02_09b8:;

c02_09b4:;

	goto c02_09ae;

c02_09af:;

	i8 v13870 = (i8)(intptr_t)(f646_ParserDeinit);

	((void(*)(void))(intptr_t)v13870)();

	i8 v13871 = (i8)(intptr_t)(ws+40);
	i8 v13872 = *(i8*)(intptr_t)v13871;
	i8 v13873 = (i8)(intptr_t)(f122_MidEndsub);
	i8 v13874;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v13873)(&v13874, v13872);
	i8 v13875 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13875)(v13874);

	i8 v13876 = (i8)(intptr_t)(f111_MidEndfile);
	i8 v13877;

	((void(*)(i8* /* m */))(intptr_t)v13876)(&v13877);
	i8 v13878 = (i8)(intptr_t)(f465_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13878)(v13877);

	i8 v13879 = (i8)(intptr_t)(f195_EmitterClosefile);

	((void(*)(void))(intptr_t)v13879)();

	i8 v13880 = (i8)(intptr_t)c02_s0208;
	i8 v13881 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13881)(v13880);

	i8 v13882 = (i8)(intptr_t)(f648_PrintFreeMemory);

	((void(*)(void))(intptr_t)v13882)();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                                          