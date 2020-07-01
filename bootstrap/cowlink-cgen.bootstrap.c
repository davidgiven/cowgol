#include "cowgol.h"
static i8 workspace[0x01a1];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+3264 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+1008 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+1008) = p10; /*buf */
	*(i1*)(intptr_t)(ws+1016) = p9; /*byte */
	*(i8*)(intptr_t)(ws+1024) = p8; /*len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1008) 
,  
*(i1*)(intptr_t)(ws+1016) 
,  
*(i8*)(intptr_t)(ws+1024) 
); 



endsub:;
}

// print_char workspace at ws+3296 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+3296) = p11; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+3296) 
); 



endsub:;
}
	void f8_print_char(i1 /* c */);

// print workspace at ws+3280 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+3280) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+3280);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+3288);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+3288);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+3288);
	i1 v29 = *(i1*)(intptr_t)v28;
	i8 v30 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v30)(v29);

	i8 v31 = (i8)(intptr_t)(ws+3280);
	i8 v32 = *(i8*)(intptr_t)v31;
	i8 v33 = v32+(+1);
	i8 v34 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v34 = v33;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_nl workspace at ws+888 length ws+0
void f12_print_nl(void) {

	i1 v35 = (i1)+10;
	i8 v36 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v36)(v35);

endsub:;
}

// UIToA workspace at ws+3280 length ws+49
void f13_UIToA(i8* p37 /* ptr */, i8 p38 /* buffer */, i1 p39 /* base */, i4 p40 /* value */) {
	*(i4*)(intptr_t)(ws+3280) = p40; /*value */
	*(i1*)(intptr_t)(ws+3284) = p39; /*base */
	*(i8*)(intptr_t)(ws+3288) = p38; /*buffer */

	i8 v41 = (i8)(intptr_t)(ws+3288);
	i8 v42 = *(i8*)(intptr_t)v41;
	i8 v43 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v43 = v42;

c02_0008:;

	i8 v44 = (i8)(intptr_t)(ws+3280);
	i4 v45 = *(i4*)(intptr_t)v44;
	i8 v46 = (i8)(intptr_t)(ws+3284);
	i1 v47 = *(i1*)(intptr_t)v46;
	i4 v48 = v47;
	i4 v49 = v45%v48;
	i8 v50 = (i8)(intptr_t)(ws+3304);
	*(i4*)(intptr_t)v50 = v49;

	i8 v51 = (i8)(intptr_t)(ws+3280);
	i4 v52 = *(i4*)(intptr_t)v51;
	i8 v53 = (i8)(intptr_t)(ws+3284);
	i1 v54 = *(i1*)(intptr_t)v53;
	i4 v55 = v54;
	i4 v56 = v52/v55;
	i8 v57 = (i8)(intptr_t)(ws+3280);
	*(i4*)(intptr_t)v57 = v56;

	i8 v58 = (i8)(intptr_t)(ws+3304);
	i4 v59 = *(i4*)(intptr_t)v58;
	i4 v60 = (i4)+10;
	if (v59<v60) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v61 = (i8)(intptr_t)(ws+3304);
	i4 v62 = *(i4*)(intptr_t)v61;
	i4 v63 = v62+(+48);
	i8 v64 = (i8)(intptr_t)(ws+3304);
	*(i4*)(intptr_t)v64 = v63;

	goto c02_000a;

c02_000e:;

	i8 v65 = (i8)(intptr_t)(ws+3304);
	i4 v66 = *(i4*)(intptr_t)v65;
	i4 v67 = v66+(+87);
	i8 v68 = (i8)(intptr_t)(ws+3304);
	*(i4*)(intptr_t)v68 = v67;

c02_000a:;

	i8 v69 = (i8)(intptr_t)(ws+3304);
	i4 v70 = *(i4*)(intptr_t)v69;
	i1 v71 = v70;
	i8 v72 = (i8)(intptr_t)(ws+3296);
	i8 v73 = *(i8*)(intptr_t)v72;
	*(i1*)(intptr_t)v73 = v71;

	i8 v74 = (i8)(intptr_t)(ws+3296);
	i8 v75 = *(i8*)(intptr_t)v74;
	i8 v76 = v75+(+1);
	i8 v77 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v77 = v76;

	i8 v78 = (i8)(intptr_t)(ws+3280);
	i4 v79 = *(i4*)(intptr_t)v78;
	i4 v80 = (i4)+0;
	if (v79==v80) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v81 = (i8)(intptr_t)(ws+3288);
	i8 v82 = *(i8*)(intptr_t)v81;
	i8 v83 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v83 = v82;

	i8 v84 = (i8)(intptr_t)(ws+3296);
	i8 v85 = *(i8*)(intptr_t)v84;
	i8 v86 = v85+(-1);
	i8 v87 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v87 = v86;

c02_0016:;

	i8 v88 = (i8)(intptr_t)(ws+3312);
	i8 v89 = *(i8*)(intptr_t)v88;
	i8 v90 = (i8)(intptr_t)(ws+3320);
	i8 v91 = *(i8*)(intptr_t)v90;
	if (v89<v91) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v92 = (i8)(intptr_t)(ws+3312);
	i8 v93 = *(i8*)(intptr_t)v92;
	i1 v94 = *(i1*)(intptr_t)v93;
	i8 v95 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v95 = v94;

	i8 v96 = (i8)(intptr_t)(ws+3320);
	i8 v97 = *(i8*)(intptr_t)v96;
	i1 v98 = *(i1*)(intptr_t)v97;
	i8 v99 = (i8)(intptr_t)(ws+3312);
	i8 v100 = *(i8*)(intptr_t)v99;
	*(i1*)(intptr_t)v100 = v98;

	i8 v101 = (i8)(intptr_t)(ws+3328);
	i1 v102 = *(i1*)(intptr_t)v101;
	i8 v103 = (i8)(intptr_t)(ws+3320);
	i8 v104 = *(i8*)(intptr_t)v103;
	*(i1*)(intptr_t)v104 = v102;

	i8 v105 = (i8)(intptr_t)(ws+3312);
	i8 v106 = *(i8*)(intptr_t)v105;
	i8 v107 = v106+(+1);
	i8 v108 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v108 = v107;

	i8 v109 = (i8)(intptr_t)(ws+3320);
	i8 v110 = *(i8*)(intptr_t)v109;
	i8 v111 = v110+(-1);
	i8 v112 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v112 = v111;

	goto c02_0016;

c02_0019:;

	i1 v113 = (i1)+0;
	i8 v114 = (i8)(intptr_t)(ws+3296);
	i8 v115 = *(i8*)(intptr_t)v114;
	*(i1*)(intptr_t)v115 = v113;

endsub:;
	*p37 = *(i8*)(intptr_t)(ws+3296);
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f11_print(i8 /* ptr */);

// print_i32 workspace at ws+3256 length ws+24
void f15_print_i32(i4 p143 /* value */) {
	*(i4*)(intptr_t)(ws+3256) = p143; /*value */

	i8 v144 = (i8)(intptr_t)(ws+3256);
	i4 v145 = *(i4*)(intptr_t)v144;
	i1 v146 = (i1)+10;
	i8 v147 = (i8)(intptr_t)(ws+3260);
	i8 v148 = (i8)(intptr_t)(f13_UIToA);
	i8 v149;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v148)(&v149, v147, v146, v145);
	i8 v150 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v150 = v149;

	i8 v151 = (i8)(intptr_t)(ws+3260);
	i8 v152 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v152)(v151);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i16 workspace at ws+3248 length ws+2
void f16_print_i16(i2 p153 /* value */) {
	*(i2*)(intptr_t)(ws+3248) = p153; /*value */

	i8 v154 = (i8)(intptr_t)(ws+3248);
	i2 v155 = *(i2*)(intptr_t)v154;
	i4 v156 = v155;
	i8 v157 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v157)(v156);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i8 workspace at ws+3248 length ws+1
void f17_print_i8(i1 p158 /* value */) {
	*(i1*)(intptr_t)(ws+3248) = p158; /*value */

	i8 v159 = (i8)(intptr_t)(ws+3248);
	i1 v160 = *(i1*)(intptr_t)v159;
	i4 v161 = v160;
	i8 v162 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v162)(v161);

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+888 length ws+3
void f18_print_hex_i8(i1 p163 /* value */) {
	*(i1*)(intptr_t)(ws+888) = p163; /*value */

	i1 v164 = (i1)+2;
	i8 v165 = (i8)(intptr_t)(ws+889);
	*(i1*)(intptr_t)v165 = v164;

c02_001f:;

	i8 v166 = (i8)(intptr_t)(ws+888);
	i1 v167 = *(i1*)(intptr_t)v166;
	i1 v168 = (i1)+4;
	i1 v169 = ((i1)v167)>>v168;
	i8 v170 = (i8)(intptr_t)(ws+890);
	*(i1*)(intptr_t)v170 = v169;

	i8 v171 = (i8)(intptr_t)(ws+890);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = (i1)+10;
	if (v172<v173) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v174 = (i8)(intptr_t)(ws+890);
	i1 v175 = *(i1*)(intptr_t)v174;
	i1 v176 = v175+(+48);
	i8 v177 = (i8)(intptr_t)(ws+890);
	*(i1*)(intptr_t)v177 = v176;

	goto c02_0021;

c02_0025:;

	i8 v178 = (i8)(intptr_t)(ws+890);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = v179+(+87);
	i8 v181 = (i8)(intptr_t)(ws+890);
	*(i1*)(intptr_t)v181 = v180;

c02_0021:;

	i8 v182 = (i8)(intptr_t)(ws+890);
	i1 v183 = *(i1*)(intptr_t)v182;
	i8 v184 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v184)(v183);

	i8 v185 = (i8)(intptr_t)(ws+888);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = (i1)+4;
	i1 v188 = ((i1)v186)<<v187;
	i8 v189 = (i8)(intptr_t)(ws+888);
	*(i1*)(intptr_t)v189 = v188;

	i8 v190 = (i8)(intptr_t)(ws+889);
	i1 v191 = *(i1*)(intptr_t)v190;
	i1 v192 = v191+(-1);
	i8 v193 = (i8)(intptr_t)(ws+889);
	*(i1*)(intptr_t)v193 = v192;

	i8 v194 = (i8)(intptr_t)(ws+889);
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

// print_hex_i16 workspace at ws+880 length ws+2
void f19_print_hex_i16(i2 p197 /* value */) {
	*(i2*)(intptr_t)(ws+880) = p197; /*value */

	i8 v198 = (i8)(intptr_t)(ws+880);
	i2 v199 = *(i2*)(intptr_t)v198;
	i1 v200 = (i1)+8;
	i2 v201 = ((i2)v199)>>v200;
	i1 v202 = v201;
	i8 v203 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v203)(v202);

	i8 v204 = (i8)(intptr_t)(ws+880);
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

// print_hex_i32 workspace at ws+880 length ws+4
void f20_print_hex_i32(i4 p208 /* value */) {
	*(i4*)(intptr_t)(ws+880) = p208; /*value */

	i8 v209 = (i8)(intptr_t)(ws+880);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+24;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	i8 v214 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v214)(v213);

	i8 v215 = (i8)(intptr_t)(ws+880);
	i4 v216 = *(i4*)(intptr_t)v215;
	i1 v217 = (i1)+16;
	i4 v218 = ((i4)v216)>>v217;
	i1 v219 = v218;
	i8 v220 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v220)(v219);

	i8 v221 = (i8)(intptr_t)(ws+880);
	i4 v222 = *(i4*)(intptr_t)v221;
	i1 v223 = (i1)+8;
	i4 v224 = ((i4)v222)>>v223;
	i1 v225 = v224;
	i8 v226 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v226)(v225);

	i8 v227 = (i8)(intptr_t)(ws+880);
	i4 v228 = *(i4*)(intptr_t)v227;
	i1 v229 = v228;
	i8 v230 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v230)(v229);

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// MemZero workspace at ws+792 length ws+16
void f22_MemZero(i8 p335 /* size */, i8 p336 /* ptr */) {
	*(i8*)(intptr_t)(ws+792) = p336; /*ptr */
	*(i8*)(intptr_t)(ws+800) = p335; /*size */

	i8 v337 = (i8)(intptr_t)(ws+792);
	i8 v338 = *(i8*)(intptr_t)v337;
	i1 v339 = (i1)+0;
	i8 v340 = (i8)(intptr_t)(ws+800);
	i8 v341 = *(i8*)(intptr_t)v340;
	i8 v342 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v342)(v341, v339, v338);

endsub:;
}

// ArgvInit workspace at ws+792 length ws+0
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

// ArgvNext workspace at ws+792 length ws+8
void f24_ArgvNext(i8* p347 /* arg */) {

	i8 v348 = (i8)(intptr_t)(ws+16);
	i8 v349 = *(i8*)(intptr_t)v348;
	i8 v350 = (i8)+0;
	if (v349==v350) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v351 = (i8)+0;
	i8 v352 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v352 = v351;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v353 = (i8)(intptr_t)(ws+16);
	i8 v354 = *(i8*)(intptr_t)v353;
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v356 = v355;

	i8 v357 = (i8)(intptr_t)(ws+792);
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
	*p347 = *(i8*)(intptr_t)(ws+792);
}

// StrCmp workspace at ws+896 length ws+17
void f25_StrCmp(i1* p366 /* res */, i8 p367 /* s2 */, i8 p368 /* s1 */) {
	*(i8*)(intptr_t)(ws+896) = p368; /*s1 */
	*(i8*)(intptr_t)(ws+904) = p367; /*s2 */

c02_0059:;

	i8 v369 = (i8)(intptr_t)(ws+896);
	i8 v370 = *(i8*)(intptr_t)v369;
	i1 v371 = *(i1*)(intptr_t)v370;
	i8 v372 = (i8)(intptr_t)(ws+904);
	i8 v373 = *(i8*)(intptr_t)v372;
	i1 v374 = *(i1*)(intptr_t)v373;
	i1 v375 = v371-v374;
	i8 v376 = (i8)(intptr_t)(ws+912);
	*(i1*)(intptr_t)v376 = v375;

	i8 v377 = (i8)(intptr_t)(ws+912);
	i1 v378 = *(i1*)(intptr_t)v377;
	i1 v379 = (i1)+0;
	if (v378==v379) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v380 = (i8)(intptr_t)(ws+896);
	i8 v381 = *(i8*)(intptr_t)v380;
	i1 v382 = *(i1*)(intptr_t)v381;
	i1 v383 = (i1)+0;
	if (v382==v383) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v384 = (i8)(intptr_t)(ws+896);
	i8 v385 = *(i8*)(intptr_t)v384;
	i8 v386 = v385+(+1);
	i8 v387 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v387 = v386;

	i8 v388 = (i8)(intptr_t)(ws+904);
	i8 v389 = *(i8*)(intptr_t)v388;
	i8 v390 = v389+(+1);
	i8 v391 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v391 = v390;

	goto c02_0059;

c02_005a:;

endsub:;
	*p366 = *(i1*)(intptr_t)(ws+912);
}

// ToLower workspace at ws+816 length ws+2
void f26_ToLower(i1* p392 /* cc */, i1 p393 /* c */) {
	*(i1*)(intptr_t)(ws+816) = p393; /*c */

	i8 v394 = (i8)(intptr_t)(ws+816);
	i1 v395 = *(i1*)(intptr_t)v394;
	i1 v396 = (i1)+65;
	if (v395<v396) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v397 = (i1)+90;
	i8 v398 = (i8)(intptr_t)(ws+816);
	i1 v399 = *(i1*)(intptr_t)v398;
	if (v397<v399) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v400 = (i8)(intptr_t)(ws+816);
	i1 v401 = *(i1*)(intptr_t)v400;
	i1 v402 = v401|(+32);
	i8 v403 = (i8)(intptr_t)(ws+817);
	*(i1*)(intptr_t)v403 = v402;

	goto c02_0063;

c02_0069:;

	i8 v404 = (i8)(intptr_t)(ws+816);
	i1 v405 = *(i1*)(intptr_t)v404;
	i8 v406 = (i8)(intptr_t)(ws+817);
	*(i1*)(intptr_t)v406 = v405;

c02_0063:;

endsub:;
	*p392 = *(i1*)(intptr_t)(ws+817);
}
	void f26_ToLower(i1* /* cc */, i1 /* c */);
	void f26_ToLower(i1* /* cc */, i1 /* c */);

// StrICmp workspace at ws+792 length ws+17
void f27_StrICmp(i1* p407 /* res */, i8 p408 /* s2 */, i8 p409 /* s1 */) {
	*(i8*)(intptr_t)(ws+792) = p409; /*s1 */
	*(i8*)(intptr_t)(ws+800) = p408; /*s2 */

c02_006b:;

	i8 v410 = (i8)(intptr_t)(ws+792);
	i8 v411 = *(i8*)(intptr_t)v410;
	i1 v412 = *(i1*)(intptr_t)v411;
	i8 v413 = (i8)(intptr_t)(f26_ToLower);
	i1 v414;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v413)(&v414, v412);
	i8 v415 = (i8)(intptr_t)(ws+800);
	i8 v416 = *(i8*)(intptr_t)v415;
	i1 v417 = *(i1*)(intptr_t)v416;
	i8 v418 = (i8)(intptr_t)(f26_ToLower);
	i1 v419;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v418)(&v419, v417);
	i1 v420 = v414-v419;
	i8 v421 = (i8)(intptr_t)(ws+808);
	*(i1*)(intptr_t)v421 = v420;

	i8 v422 = (i8)(intptr_t)(ws+808);
	i1 v423 = *(i1*)(intptr_t)v422;
	i1 v424 = (i1)+0;
	if (v423==v424) goto c02_0074; else goto c02_0072;

c02_0074:;

	i8 v425 = (i8)(intptr_t)(ws+792);
	i8 v426 = *(i8*)(intptr_t)v425;
	i1 v427 = *(i1*)(intptr_t)v426;
	i1 v428 = (i1)+0;
	if (v427==v428) goto c02_0072; else goto c02_0073;

c02_0072:;

	goto c02_006c;

c02_0073:;

c02_006d:;

	i8 v429 = (i8)(intptr_t)(ws+792);
	i8 v430 = *(i8*)(intptr_t)v429;
	i8 v431 = v430+(+1);
	i8 v432 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v432 = v431;

	i8 v433 = (i8)(intptr_t)(ws+800);
	i8 v434 = *(i8*)(intptr_t)v433;
	i8 v435 = v434+(+1);
	i8 v436 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v436 = v435;

	goto c02_006b;

c02_006c:;

endsub:;
	*p407 = *(i1*)(intptr_t)(ws+808);
}

// RawAlloc workspace at ws+960 length ws+16
void f31_RawAlloc(i8* p503 /* block */, i8 p504 /* length */) {
	*(i8*)(intptr_t)(ws+960) = p504; /*length */


	
*(i8*)(intptr_t)(ws+968) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+960) 
); 



endsub:;
	*p503 = *(i8*)(intptr_t)(ws+968);
}
	void f31_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// Alloc workspace at ws+944 length ws+16
void f32_Alloc(i8* p505 /* block */, i8 p506 /* length */) {
	*(i8*)(intptr_t)(ws+944) = p506; /*length */

	i8 v507 = (i8)(intptr_t)(ws+944);
	i8 v508 = *(i8*)(intptr_t)v507;
	i8 v509 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v510;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v509)(&v510, v508);
	i8 v511 = (i8)(intptr_t)(ws+952);
	*(i8*)(intptr_t)v511 = v510;

	i8 v512 = (i8)(intptr_t)(ws+952);
	i8 v513 = *(i8*)(intptr_t)v512;
	i8 v514 = (i8)+0;
	if (v513==v514) goto c02_008c; else goto c02_008d;

c02_008c:;

	i8 v515 = (i8)(intptr_t)c02_s0000;
	i8 v516 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v516)(v515);

	i8 v517 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v517)();

c02_008d:;

c02_0089:;

endsub:;
	*p505 = *(i8*)(intptr_t)(ws+952);
}

// Free workspace at ws+848 length ws+8
void f33_Free(i8 p518 /* block */) {
	*(i8*)(intptr_t)(ws+848) = p518; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+848) 
); 



endsub:;
}

// StrDup workspace at ws+896 length ws+16
void f34_StrDup(i8* p519 /* sout */, i8 p520 /* s */) {
	*(i8*)(intptr_t)(ws+896) = p520; /*s */


	
*(i8*)(intptr_t)(ws+904) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+896) 
); 



endsub:;
	*p519 = *(i8*)(intptr_t)(ws+904);
}

// GetFreeMemory workspace at ws+792 length ws+8
void f37_GetFreeMemory(i8* p521 /* i */) {

	i8 v522 = (i8)+0;
	i8 v523 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v523 = v522;

endsub:;
	*p521 = *(i8*)(intptr_t)(ws+792);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_blockin workspace at ws+976 length ws+28
void f38_fcb_i_blockin(i8 p524 /* fcb */) {
	*(i8*)(intptr_t)(ws+976) = p524; /*fcb */

	i8 v525 = (i8)(intptr_t)(ws+976);
	i8 v526 = *(i8*)(intptr_t)v525;
	i8 v527 = v526+(+12);
	i1 v528 = (i1)+0;
	i8 v529 = (i8)+512;
	i8 v530 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v530)(v529, v528, v527);

	i8 v531 = (i8)(intptr_t)(ws+976);
	i8 v532 = *(i8*)(intptr_t)v531;
	i4 v533 = *(i4*)(intptr_t)v532;
	i8 v534 = (i8)(intptr_t)(ws+984);
	*(i4*)(intptr_t)v534 = v533;

	i8 v535 = (i8)(intptr_t)(ws+976);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+12);
	i8 v538 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v538 = v537;

	i8 v539 = (i8)(intptr_t)(ws+976);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+8);
	i4 v542 = *(i4*)(intptr_t)v541;
	i1 v543 = (i1)+9;
	i4 v544 = ((i4)v542)<<v543;
	i8 v545 = (i8)(intptr_t)(ws+1000);
	*(i4*)(intptr_t)v545 = v544;


	
pread( 
*(i4*)(intptr_t)(ws+984) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+992) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1000) 
); 



	i1 v546 = (i1)+0;
	i8 v547 = (i8)(intptr_t)(ws+976);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+6);
	*(i1*)(intptr_t)v549 = v546;

endsub:;
}

// fcb_i_blockout workspace at ws+976 length ws+28
void f39_fcb_i_blockout(i8 p550 /* fcb */) {
	*(i8*)(intptr_t)(ws+976) = p550; /*fcb */

	i8 v551 = (i8)(intptr_t)(ws+976);
	i8 v552 = *(i8*)(intptr_t)v551;
	i8 v553 = v552+(+6);
	i1 v554 = *(i1*)(intptr_t)v553;
	i1 v555 = (i1)+0;
	if (v554==v555) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v556 = (i8)(intptr_t)(ws+976);
	i8 v557 = *(i8*)(intptr_t)v556;
	i4 v558 = *(i4*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+984);
	*(i4*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+976);
	i8 v561 = *(i8*)(intptr_t)v560;
	i8 v562 = v561+(+12);
	i8 v563 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+976);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = v565+(+8);
	i4 v567 = *(i4*)(intptr_t)v566;
	i1 v568 = (i1)+9;
	i4 v569 = ((i4)v567)<<v568;
	i8 v570 = (i8)(intptr_t)(ws+1000);
	*(i4*)(intptr_t)v570 = v569;


	
pwrite( 
*(i4*)(intptr_t)(ws+984) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+992) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1000) 
); 



	i1 v571 = (i1)+0;
	i8 v572 = (i8)(intptr_t)(ws+976);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+6);
	*(i1*)(intptr_t)v574 = v571;

c02_0092:;

c02_008e:;

endsub:;
}
	void f39_fcb_i_blockout(i8 /* fcb */);
	void f38_fcb_i_blockin(i8 /* fcb */);

// fcb_i_changeblock workspace at ws+960 length ws+12
void f40_fcb_i_changeblock(i4 p575 /* newblock */, i8 p576 /* fcb */) {
	*(i8*)(intptr_t)(ws+960) = p576; /*fcb */
	*(i4*)(intptr_t)(ws+968) = p575; /*newblock */

	i8 v577 = (i8)(intptr_t)(ws+968);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+960);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = v580+(+8);
	i4 v582 = *(i4*)(intptr_t)v581;
	if (v578==v582) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v583 = (i8)(intptr_t)(ws+960);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v585)(v584);

	i8 v586 = (i8)(intptr_t)(ws+968);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+960);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+8);
	*(i4*)(intptr_t)v590 = v587;

	i8 v591 = (i8)(intptr_t)(ws+960);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = (i8)(intptr_t)(f38_fcb_i_blockin);

	((void(*)(i8 /* fcb */))(intptr_t)v593)(v592);

c02_0097:;

c02_0093:;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_open workspace at ws+904 length ws+28
void f41_fcb_i_open(i1* p594 /* errno */, i4 p595 /* flags */, i8 p596 /* filename */, i8 p597 /* fcb */) {
	*(i8*)(intptr_t)(ws+904) = p597; /*fcb */
	*(i8*)(intptr_t)(ws+912) = p596; /*filename */
	*(i4*)(intptr_t)(ws+920) = p595; /*flags */

	i8 v598 = (i8)(intptr_t)(ws+904);
	i8 v599 = *(i8*)(intptr_t)v598;
	i1 v600 = (i1)+0;
	i8 v601 = (i8)+524;
	i8 v602 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v602)(v601, v600, v599);

	i2 v603 = (i2)+511;
	i8 v604 = (i8)(intptr_t)(ws+904);
	i8 v605 = *(i8*)(intptr_t)v604;
	i8 v606 = v605+(+4);
	*(i2*)(intptr_t)v606 = v603;

	i4 v607 = (i4)-1;
	i8 v608 = (i8)(intptr_t)(ws+904);
	i8 v609 = *(i8*)(intptr_t)v608;
	i8 v610 = v609+(+8);
	*(i4*)(intptr_t)v610 = v607;


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+928) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+912) 
,  
*(i4*)(intptr_t)(ws+920) 
,  
(+438)
); 



	i8 v611 = (i8)(intptr_t)(ws+928);
	i4 v612 = *(i4*)(intptr_t)v611;
	i8 v613 = (i8)(intptr_t)(ws+904);
	i8 v614 = *(i8*)(intptr_t)v613;
	*(i4*)(intptr_t)v614 = v612;

	i8 v615 = (i8)(intptr_t)(ws+928);
	i4 v616 = *(i4*)(intptr_t)v615;
	i4 v617 = (i4)+0;
	if ((s4)v616<(s4)v617) goto c02_009b; else goto c02_009c;

c02_009b:;


	
*(i1*)(intptr_t)(ws+924) 
 = errno; 



	goto c02_0098;

c02_009c:;

	i1 v618 = (i1)+0;
	i8 v619 = (i8)(intptr_t)(ws+924);
	*(i1*)(intptr_t)v619 = v618;

c02_0098:;

endsub:;
	*p594 = *(i1*)(intptr_t)(ws+924);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+880 length ws+17
void f42_FCBOpenIn(i1* p620 /* errno */, i8 p621 /* filename */, i8 p622 /* fcb */) {
	*(i8*)(intptr_t)(ws+880) = p622; /*fcb */
	*(i8*)(intptr_t)(ws+888) = p621; /*filename */

	i8 v623 = (i8)(intptr_t)(ws+880);
	i8 v624 = *(i8*)(intptr_t)v623;
	i8 v625 = (i8)(intptr_t)(ws+888);
	i8 v626 = *(i8*)(intptr_t)v625;
	i4 v627 = (i4)+0;
	i8 v628 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v629;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v628)(&v629, v627, v626, v624);
	i8 v630 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v630 = v629;

endsub:;
	*p620 = *(i1*)(intptr_t)(ws+896);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+800 length ws+17
void f44_FCBOpenOut(i1* p642 /* errno */, i8 p643 /* filename */, i8 p644 /* fcb */) {
	*(i8*)(intptr_t)(ws+800) = p644; /*fcb */
	*(i8*)(intptr_t)(ws+808) = p643; /*filename */

	i8 v645 = (i8)(intptr_t)(ws+800);
	i8 v646 = *(i8*)(intptr_t)v645;
	i8 v647 = (i8)(intptr_t)(ws+808);
	i8 v648 = *(i8*)(intptr_t)v647;
	i4 v649 = (i4)+578;
	i8 v650 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v651;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v650)(&v651, v649, v648, v646);
	i8 v652 = (i8)(intptr_t)(ws+816);
	*(i1*)(intptr_t)v652 = v651;

endsub:;
	*p642 = *(i1*)(intptr_t)(ws+816);
}
	void f39_fcb_i_blockout(i8 /* fcb */);

// FCBClose workspace at ws+800 length ws+16
void f45_FCBClose(i1* p653 /* errno */, i8 p654 /* fcb */) {
	*(i8*)(intptr_t)(ws+800) = p654; /*fcb */

	i8 v655 = (i8)(intptr_t)(ws+800);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v657)(v656);

	i8 v658 = (i8)(intptr_t)(ws+800);
	i8 v659 = *(i8*)(intptr_t)v658;
	i4 v660 = *(i4*)(intptr_t)v659;
	i8 v661 = (i8)(intptr_t)(ws+812);
	*(i4*)(intptr_t)v661 = v660;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+812) 
); 


	
*(i1*)(intptr_t)(ws+808) 
 = errno; 



endsub:;
	*p653 = *(i1*)(intptr_t)(ws+808);
}
	void f40_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// FCBSeek workspace at ws+880 length ws+18
void f46_FCBSeek(i4 p662 /* pos */, i8 p663 /* fcb */) {
	*(i8*)(intptr_t)(ws+880) = p663; /*fcb */
	*(i4*)(intptr_t)(ws+888) = p662; /*pos */

	i8 v664 = (i8)(intptr_t)(ws+888);
	i4 v665 = *(i4*)(intptr_t)v664;
	i4 v666 = v665+(-1);
	i8 v667 = (i8)(intptr_t)(ws+888);
	*(i4*)(intptr_t)v667 = v666;

	i8 v668 = (i8)(intptr_t)(ws+888);
	i4 v669 = *(i4*)(intptr_t)v668;
	i1 v670 = (i1)+9;
	i4 v671 = ((i4)v669)>>v670;
	i8 v672 = (i8)(intptr_t)(ws+892);
	*(i4*)(intptr_t)v672 = v671;

	i8 v673 = (i8)(intptr_t)(ws+888);
	i4 v674 = *(i4*)(intptr_t)v673;
	i2 v675 = v674;
	i2 v676 = v675&(+511);
	i8 v677 = (i8)(intptr_t)(ws+896);
	*(i2*)(intptr_t)v677 = v676;

	i8 v678 = (i8)(intptr_t)(ws+880);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(ws+892);
	i4 v681 = *(i4*)(intptr_t)v680;
	i8 v682 = (i8)(intptr_t)(f40_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v682)(v681, v679);

	i8 v683 = (i8)(intptr_t)(ws+896);
	i2 v684 = *(i2*)(intptr_t)v683;
	i8 v685 = (i8)(intptr_t)(ws+880);
	i8 v686 = *(i8*)(intptr_t)v685;
	i8 v687 = v686+(+4);
	*(i2*)(intptr_t)v687 = v684;

endsub:;
}

// FCBPos workspace at ws+800 length ws+12
void f47_FCBPos(i4* p688 /* pos */, i8 p689 /* fcb */) {
	*(i8*)(intptr_t)(ws+800) = p689; /*fcb */

	i8 v690 = (i8)(intptr_t)(ws+800);
	i8 v691 = *(i8*)(intptr_t)v690;
	i8 v692 = v691+(+8);
	i4 v693 = *(i4*)(intptr_t)v692;
	i1 v694 = (i1)+9;
	i4 v695 = ((i4)v693)<<v694;
	i8 v696 = (i8)(intptr_t)(ws+800);
	i8 v697 = *(i8*)(intptr_t)v696;
	i8 v698 = v697+(+4);
	i2 v699 = *(i2*)(intptr_t)v698;
	i4 v700 = v699;
	i4 v701 = v695|v700;
	i4 v702 = v701+(+1);
	i8 v703 = (i8)(intptr_t)(ws+808);
	*(i4*)(intptr_t)v703 = v702;

endsub:;
	*p688 = *(i4*)(intptr_t)(ws+808);
}
	void f39_fcb_i_blockout(i8 /* fcb */);

// FCBExt workspace at ws+800 length ws+16
void f48_FCBExt(i4* p704 /* len */, i8 p705 /* fcb */) {
	*(i8*)(intptr_t)(ws+800) = p705; /*fcb */

	i8 v706 = (i8)(intptr_t)(ws+800);
	i8 v707 = *(i8*)(intptr_t)v706;
	i8 v708 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v708)(v707);

	i8 v709 = (i8)(intptr_t)(ws+800);
	i8 v710 = *(i8*)(intptr_t)v709;
	i4 v711 = *(i4*)(intptr_t)v710;
	i8 v712 = (i8)(intptr_t)(ws+812);
	*(i4*)(intptr_t)v712 = v711;


	
*(i4*)(intptr_t)(ws+808) 
 = lseek( 
*(i4*)(intptr_t)(ws+812) 
, 0, SEEK_END); 



	i8 v713 = (i8)(intptr_t)(ws+808);
	i4 v714 = *(i4*)(intptr_t)v713;
	i4 v715 = v714+(+511);
	i4 v716 = v715&(-512);
	i8 v717 = (i8)(intptr_t)(ws+808);
	*(i4*)(intptr_t)v717 = v716;

endsub:;
	*p704 = *(i4*)(intptr_t)(ws+808);
}
	void f40_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// fcb_i_nextchar workspace at ws+952 length ws+8
void f49_fcb_i_nextchar(i8 p718 /* fcb */) {
	*(i8*)(intptr_t)(ws+952) = p718; /*fcb */

	i8 v719 = (i8)(intptr_t)(ws+952);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = v720+(+4);
	i2 v722 = *(i2*)(intptr_t)v721;
	i2 v723 = v722+(+1);
	i8 v724 = (i8)(intptr_t)(ws+952);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+4);
	*(i2*)(intptr_t)v726 = v723;

	i8 v727 = (i8)(intptr_t)(ws+952);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i2 v731 = (i2)+512;
	if (v730==v731) goto c02_00a0; else goto c02_00a1;

c02_00a0:;

	i8 v732 = (i8)(intptr_t)(ws+952);
	i8 v733 = *(i8*)(intptr_t)v732;
	i8 v734 = (i8)(intptr_t)(ws+952);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+8);
	i4 v737 = *(i4*)(intptr_t)v736;
	i4 v738 = v737+(+1);
	i8 v739 = (i8)(intptr_t)(f40_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v739)(v738, v733);

	i2 v740 = (i2)+0;
	i8 v741 = (i8)(intptr_t)(ws+952);
	i8 v742 = *(i8*)(intptr_t)v741;
	i8 v743 = v742+(+4);
	*(i2*)(intptr_t)v743 = v740;

c02_00a1:;

c02_009d:;

endsub:;
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBGetChar workspace at ws+928 length ws+9
void f50_FCBGetChar(i1* p744 /* c */, i8 p745 /* fcb */) {
	*(i8*)(intptr_t)(ws+928) = p745; /*fcb */

	i8 v746 = (i8)(intptr_t)(ws+928);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v748)(v747);

	i8 v749 = (i8)(intptr_t)(ws+928);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = v750+(+12);
	i8 v752 = (i8)(intptr_t)(ws+928);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+4);
	i2 v755 = *(i2*)(intptr_t)v754;
	i8 v756 = v755;
	i8 v757 = v751+v756;
	i1 v758 = *(i1*)(intptr_t)v757;
	i8 v759 = (i8)(intptr_t)(ws+936);
	*(i1*)(intptr_t)v759 = v758;

endsub:;
	*p744 = *(i1*)(intptr_t)(ws+936);
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBPutChar workspace at ws+936 length ws+9
void f51_FCBPutChar(i1 p760 /* c */, i8 p761 /* fcb */) {
	*(i8*)(intptr_t)(ws+936) = p761; /*fcb */
	*(i1*)(intptr_t)(ws+944) = p760; /*c */

	i8 v762 = (i8)(intptr_t)(ws+936);
	i8 v763 = *(i8*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v764)(v763);

	i8 v765 = (i8)(intptr_t)(ws+944);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+936);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+936);
	i8 v771 = *(i8*)(intptr_t)v770;
	i8 v772 = v771+(+4);
	i2 v773 = *(i2*)(intptr_t)v772;
	i8 v774 = v773;
	i8 v775 = v769+v774;
	*(i1*)(intptr_t)v775 = v766;

	i1 v776 = (i1)+1;
	i8 v777 = (i8)(intptr_t)(ws+936);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+6);
	*(i1*)(intptr_t)v779 = v776;

endsub:;
}
const i1 c02_s0001[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);

// StartError workspace at ws+888 length ws+0
void f55_StartError(void) {

	i8 v844 = (i8)(intptr_t)c02_s0001;
	i8 v845 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v845)(v844);

endsub:;
}
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+888 length ws+0
void f56_EndError(void) {

	i8 v846 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v846)();

	i8 v847 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v847)();

endsub:;
}
	void f55_StartError(void);
	void f11_print(i8 /* ptr */);
	void f56_EndError(void);

// SimpleError workspace at ws+840 length ws+8
void f57_SimpleError(i8 p848 /* s */) {
	*(i8*)(intptr_t)(ws+840) = p848; /*s */

	i8 v849 = (i8)(intptr_t)(f55_StartError);

	((void(*)(void))(intptr_t)v849)();

	i8 v850 = (i8)(intptr_t)(ws+840);
	i8 v851 = *(i8*)(intptr_t)v850;
	i8 v852 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v852)(v851);

	i8 v853 = (i8)(intptr_t)(f56_EndError);

	((void(*)(void))(intptr_t)v853)();

endsub:;
}
	void f55_StartError(void);
const i1 c02_s0002[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0003[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f56_EndError(void);

// CannotOpen workspace at ws+880 length ws+8
void f58_CannotOpen(i8 p854 /* filename */) {
	*(i8*)(intptr_t)(ws+880) = p854; /*filename */

	i8 v855 = (i8)(intptr_t)(f55_StartError);

	((void(*)(void))(intptr_t)v855)();

	i8 v856 = (i8)(intptr_t)c02_s0002;
	i8 v857 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v857)(v856);

	i8 v858 = (i8)(intptr_t)(ws+880);
	i8 v859 = *(i8*)(intptr_t)v858;
	i8 v860 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v860)(v859);

	i8 v861 = (i8)(intptr_t)c02_s0003;
	i8 v862 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v862)(v861);

	i8 v863 = (i8)(intptr_t)(f56_EndError);

	((void(*)(void))(intptr_t)v863)();

endsub:;
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);

// E_b8 workspace at ws+928 length ws+1
void f59_E_b8(i1 p864 /* c */) {
	*(i1*)(intptr_t)(ws+928) = p864; /*c */

	i8 v865 = (i8)(intptr_t)(ws+56);
	i8 v866 = (i8)(intptr_t)(ws+928);
	i1 v867 = *(i1*)(intptr_t)v866;
	i8 v868 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v868)(v867, v865);

endsub:;
}
	void f59_E_b8(i1 /* c */);

// E workspace at ws+912 length ws+9
void f60_E(i8 p869 /* text */) {
	*(i8*)(intptr_t)(ws+912) = p869; /*text */

c02_00b5:;

	i8 v870 = (i8)(intptr_t)(ws+912);
	i8 v871 = *(i8*)(intptr_t)v870;
	i1 v872 = *(i1*)(intptr_t)v871;
	i8 v873 = (i8)(intptr_t)(ws+920);
	*(i1*)(intptr_t)v873 = v872;

	i8 v874 = (i8)(intptr_t)(ws+912);
	i8 v875 = *(i8*)(intptr_t)v874;
	i8 v876 = v875+(+1);
	i8 v877 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v877 = v876;

	i8 v878 = (i8)(intptr_t)(ws+920);
	i1 v879 = *(i1*)(intptr_t)v878;
	i1 v880 = (i1)+0;
	if (v879==v880) goto c02_00ba; else goto c02_00bb;

c02_00ba:;

	goto c02_00b6;

c02_00bb:;

c02_00b7:;

	i8 v881 = (i8)(intptr_t)(ws+920);
	i1 v882 = *(i1*)(intptr_t)v881;
	i8 v883 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v883)(v882);

	goto c02_00b5;

c02_00b6:;

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f59_E_b8(i1 /* c */);

// E_u32 workspace at ws+888 length ws+33
void f61_E_u32(i4 p884 /* value */) {
	*(i4*)(intptr_t)(ws+888) = p884; /*value */

	i8 v885 = (i8)(intptr_t)(ws+892);
	i8 v886 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v886 = v885;

	i8 v887 = (i8)(intptr_t)(ws+888);
	i4 v888 = *(i4*)(intptr_t)v887;
	i1 v889 = (i1)+10;
	i8 v890 = (i8)(intptr_t)(ws+904);
	i8 v891 = *(i8*)(intptr_t)v890;
	i8 v892 = (i8)(intptr_t)(f13_UIToA);
	i8 v893;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v892)(&v893, v891, v889, v888);
	i8 v894 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v894 = v893;

c02_00bc:;

	i8 v895 = (i8)(intptr_t)(ws+904);
	i8 v896 = *(i8*)(intptr_t)v895;
	i1 v897 = *(i1*)(intptr_t)v896;
	i8 v898 = (i8)(intptr_t)(ws+920);
	*(i1*)(intptr_t)v898 = v897;

	i8 v899 = (i8)(intptr_t)(ws+920);
	i1 v900 = *(i1*)(intptr_t)v899;
	i1 v901 = (i1)+0;
	if (v900==v901) goto c02_00c1; else goto c02_00c2;

c02_00c1:;

	goto c02_00bd;

c02_00c2:;

c02_00be:;

	i8 v902 = (i8)(intptr_t)(ws+920);
	i1 v903 = *(i1*)(intptr_t)v902;
	i8 v904 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v904)(v903);

	i8 v905 = (i8)(intptr_t)(ws+904);
	i8 v906 = *(i8*)(intptr_t)v905;
	i8 v907 = v906+(+1);
	i8 v908 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v908 = v907;

	goto c02_00bc;

c02_00bd:;

endsub:;
}
	void f61_E_u32(i4 /* value */);

// E_u16 workspace at ws+880 length ws+2
void f62_E_u16(i2 p909 /* value */) {
	*(i2*)(intptr_t)(ws+880) = p909; /*value */

	i8 v910 = (i8)(intptr_t)(ws+880);
	i2 v911 = *(i2*)(intptr_t)v910;
	i4 v912 = v911;
	i8 v913 = (i8)(intptr_t)(f61_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v913)(v912);

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f59_E_b8(i1 /* c */);
	void f60_E(i8 /* text */);

// E_h workspace at ws+880 length ws+25
void f65_E_h(i1 p934 /* width */, i4 p935 /* value */) {
	*(i4*)(intptr_t)(ws+880) = p935; /*value */
	*(i1*)(intptr_t)(ws+884) = p934; /*width */

	i8 v936 = (i8)(intptr_t)(ws+880);
	i4 v937 = *(i4*)(intptr_t)v936;
	i1 v938 = (i1)+16;
	i8 v939 = (i8)(intptr_t)(ws+885);
	i8 v940 = (i8)(intptr_t)(f13_UIToA);
	i8 v941;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v940)(&v941, v939, v938, v937);
	i8 v942 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v942 = v941;

	i8 v943 = (i8)(intptr_t)(ws+884);
	i1 v944 = *(i1*)(intptr_t)v943;
	i8 v945 = (i8)(intptr_t)(ws+896);
	i8 v946 = *(i8*)(intptr_t)v945;
	i8 v947 = (i8)(intptr_t)(ws+885);
	i8 v948 = v946-v947;
	i1 v949 = v948;
	i1 v950 = v944-v949;
	i8 v951 = (i8)(intptr_t)(ws+904);
	*(i1*)(intptr_t)v951 = v950;

c02_00ca:;

	i8 v952 = (i8)(intptr_t)(ws+904);
	i1 v953 = *(i1*)(intptr_t)v952;
	i1 v954 = (i1)+0;
	if (v953==v954) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i1 v955 = (i1)+48;
	i8 v956 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v956)(v955);

	i8 v957 = (i8)(intptr_t)(ws+904);
	i1 v958 = *(i1*)(intptr_t)v957;
	i1 v959 = v958+(-1);
	i8 v960 = (i8)(intptr_t)(ws+904);
	*(i1*)(intptr_t)v960 = v959;

	goto c02_00ca;

c02_00cd:;

	i8 v961 = (i8)(intptr_t)(ws+885);
	i8 v962 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v962)(v961);

endsub:;
}
	void f65_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+872 length ws+1
void f66_E_h8(i1 p963 /* value */) {
	*(i1*)(intptr_t)(ws+872) = p963; /*value */

	i8 v964 = (i8)(intptr_t)(ws+872);
	i1 v965 = *(i1*)(intptr_t)v964;
	i4 v966 = v965;
	i1 v967 = (i1)+2;
	i8 v968 = (i8)(intptr_t)(f65_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v968)(v967, v966);

endsub:;
}
	void f65_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+800 length ws+2
void f67_E_h16(i2 p969 /* value */) {
	*(i2*)(intptr_t)(ws+800) = p969; /*value */

	i8 v970 = (i8)(intptr_t)(ws+800);
	i2 v971 = *(i2*)(intptr_t)v970;
	i4 v972 = v971;
	i1 v973 = (i1)+4;
	i8 v974 = (i8)(intptr_t)(f65_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v974)(v973, v972);

endsub:;
}
	void f44_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0004[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f57_SimpleError(i8 /* s */);

// EmitterOpenfile workspace at ws+792 length ws+8
void f68_EmitterOpenfile(i8 p975 /* filename */) {
	*(i8*)(intptr_t)(ws+792) = p975; /*filename */

	i8 v976 = (i8)(intptr_t)(ws+56);
	i8 v977 = (i8)(intptr_t)(ws+792);
	i8 v978 = *(i8*)(intptr_t)v977;
	i8 v979 = (i8)(intptr_t)(f44_FCBOpenOut);
	i1 v980;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v979)(&v980, v978, v976);
	i1 v981 = (i1)+0;
	if (v980==v981) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v982 = (i8)(intptr_t)c02_s0004;
	i8 v983 = (i8)(intptr_t)(f57_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v983)(v982);

c02_00d2:;

c02_00ce:;

endsub:;
}
	void f48_FCBExt(i4* /* len */, i8 /* fcb */);
	void f47_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f45_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f57_SimpleError(i8 /* s */);

// EmitterClosefile workspace at ws+792 length ws+4
void f69_EmitterClosefile(void) {

	i8 v984 = (i8)(intptr_t)(ws+56);
	i8 v985 = (i8)(intptr_t)(f48_FCBExt);
	i4 v986;

	((void(*)(i4* /* len */, i8 /* fcb */))(intptr_t)v985)(&v986, v984);
	i8 v987 = (i8)(intptr_t)(ws+56);
	i8 v988 = (i8)(intptr_t)(f47_FCBPos);
	i4 v989;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v988)(&v989, v987);
	i4 v990 = v986-v989;
	i8 v991 = (i8)(intptr_t)(ws+792);
	*(i4*)(intptr_t)v991 = v990;

	i8 v992 = (i8)(intptr_t)(ws+792);
	i4 v993 = *(i4*)(intptr_t)v992;
	i4 v994 = (i4)+0;
	if ((s4)v993<(s4)v994) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i8 v995 = (i8)(intptr_t)(ws+792);
	i4 v996 = *(i4*)(intptr_t)v995;
	i4 v997 = -v996;
	i8 v998 = (i8)(intptr_t)(ws+792);
	*(i4*)(intptr_t)v998 = v997;

c02_00d7:;

c02_00d3:;

c02_00da:;

	i8 v999 = (i8)(intptr_t)(ws+792);
	i4 v1000 = *(i4*)(intptr_t)v999;
	i4 v1001 = (i4)+0;
	if (v1000==v1001) goto c02_00dd; else goto c02_00dc;

c02_00dc:;

	i8 v1002 = (i8)(intptr_t)(ws+56);
	i1 v1003 = (i1)+32;
	i8 v1004 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1004)(v1003, v1002);

	i8 v1005 = (i8)(intptr_t)(ws+792);
	i4 v1006 = *(i4*)(intptr_t)v1005;
	i4 v1007 = v1006+(-1);
	i8 v1008 = (i8)(intptr_t)(ws+792);
	*(i4*)(intptr_t)v1008 = v1007;

	goto c02_00da;

c02_00dd:;

	i8 v1009 = (i8)(intptr_t)(ws+56);
	i8 v1010 = (i8)(intptr_t)(f45_FCBClose);
	i1 v1011;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1010)(&v1011, v1009);
	i1 v1012 = (i1)+0;
	if (v1011==v1012) goto c02_00e2; else goto c02_00e1;

c02_00e1:;

	i8 v1013 = (i8)(intptr_t)c02_s0005;
	i8 v1014 = (i8)(intptr_t)(f57_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1014)(v1013);

c02_00e2:;

c02_00de:;

endsub:;
}

// ArchAlignUp workspace at ws+3248 length ws+8
void f70_ArchAlignUp(i2* p1015 /* newvalue */, i1 p1016 /* alignment */, i2 p1017 /* value */) {
	*(i2*)(intptr_t)(ws+3248) = p1017; /*value */
	*(i1*)(intptr_t)(ws+3250) = p1016; /*alignment */

	i8 v1018 = (i8)(intptr_t)(ws+3250);
	i1 v1019 = *(i1*)(intptr_t)v1018;
	i1 v1020 = v1019+(-1);
	i2 v1021 = v1020;
	i8 v1022 = (i8)(intptr_t)(ws+3254);
	*(i2*)(intptr_t)v1022 = v1021;

	i8 v1023 = (i8)(intptr_t)(ws+3248);
	i2 v1024 = *(i2*)(intptr_t)v1023;
	i8 v1025 = (i8)(intptr_t)(ws+3254);
	i2 v1026 = *(i2*)(intptr_t)v1025;
	i2 v1027 = v1024+v1026;
	i8 v1028 = (i8)(intptr_t)(ws+3254);
	i2 v1029 = *(i2*)(intptr_t)v1028;
	i2 v1030 = ~v1029;
	i2 v1031 = v1027&v1030;
	i8 v1032 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v1032 = v1031;

endsub:;
	*p1015 = *(i2*)(intptr_t)(ws+3252);
}
	void f59_E_b8(i1 /* c */);

// E_nl workspace at ws+872 length ws+0
void f71_E_nl(void) {

	i1 v1033 = (i1)+10;
	i8 v1034 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1034)(v1033);

endsub:;
}
	void f59_E_b8(i1 /* c */);
	void f62_E_u16(i2 /* value */);
	void f59_E_b8(i1 /* c */);
	void f60_E(i8 /* text */);

// ArchEmitSubRef workspace at ws+872 length ws+8
void f72_ArchEmitSubRef(i8 p1035 /* subr */) {
	*(i8*)(intptr_t)(ws+872) = p1035; /*subr */

	i1 v1036 = (i1)+102;
	i8 v1037 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1037)(v1036);

	i8 v1038 = (i8)(intptr_t)(ws+872);
	i8 v1039 = *(i8*)(intptr_t)v1038;
	i8 v1040 = v1039+(+186);
	i2 v1041 = *(i2*)(intptr_t)v1040;
	i8 v1042 = (i8)(intptr_t)(f62_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1042)(v1041);

	i1 v1043 = (i1)+95;
	i8 v1044 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1044)(v1043);

	i8 v1045 = (i8)(intptr_t)(ws+872);
	i8 v1046 = *(i8*)(intptr_t)v1045;
	i8 v1047 = v1046+(+152);
	i8 v1048 = *(i8*)(intptr_t)v1047;
	i8 v1049 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v1049)(v1048);

endsub:;
}
const i1 c02_s0006[] = { 0x77,0x73,0x2b,0 };
	void f60_E(i8 /* text */);
	void f62_E_u16(i2 /* value */);

// ArchEmitWSRef workspace at ws+872 length ws+4
void f73_ArchEmitWSRef(i2 p1050 /* address */, i1 p1051 /* wid */) {
	*(i1*)(intptr_t)(ws+872) = p1051; /*wid */
	*(i2*)(intptr_t)(ws+874) = p1050; /*address */

	i8 v1052 = (i8)(intptr_t)c02_s0006;
	i8 v1053 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v1053)(v1052);

	i8 v1054 = (i8)(intptr_t)(ws+874);
	i2 v1055 = *(i2*)(intptr_t)v1054;
	i8 v1056 = (i8)(intptr_t)(f62_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1056)(v1055);

endsub:;
}
const i1 c02_s0007[] = { 0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x22,0x63,0x6f,0x77,0x67,0x6f,0x6c,0x2e,0x68,0x22,0x0a,0 };
	void f60_E(i8 /* text */);
const i1 c02_s0008[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x38,0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x5b,0x30,0x78,0 };
	void f60_E(i8 /* text */);
	void f67_E_h16(i2 /* value */);
const i1 c02_s0009[] = { 0x5d,0x3b,0x0a,0 };
	void f60_E(i8 /* text */);
const i1 c02_s000a[] = { 0x23,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0x77,0x73,0x20,0x28,0x28,0x69,0x31,0x2a,0x29,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x29,0x0a,0 };
	void f60_E(i8 /* text */);

// ArchEmitHeader workspace at ws+792 length ws+8
void f74_ArchEmitHeader(i8 p1057 /* coo */) {
	*(i8*)(intptr_t)(ws+792) = p1057; /*coo */

	i8 v1058 = (i8)(intptr_t)c02_s0007;
	i8 v1059 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v1059)(v1058);

	i8 v1060 = (i8)(intptr_t)c02_s0008;
	i8 v1061 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v1061)(v1060);

	i8 v1062 = (i8)(intptr_t)(ws+580);
	i2 v1063 = *(i2*)(intptr_t)v1062;
	i2 v1064 = v1063+(+7);
	i1 v1065 = (i1)+3;
	i2 v1066 = ((i2)v1064)>>v1065;
	i8 v1067 = (i8)(intptr_t)(f67_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1067)(v1066);

	i8 v1068 = (i8)(intptr_t)c02_s0009;
	i8 v1069 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v1069)(v1068);

	i8 v1070 = (i8)(intptr_t)c02_s000a;
	i8 v1071 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v1071)(v1070);

endsub:;
}
const i1 c02_s000b[] = { 0x76,0x6f,0x69,0x64,0x20,0x63,0x6d,0x61,0x69,0x6e,0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
	void f60_E(i8 /* text */);
	void f59_E_b8(i1 /* c */);
	void f72_ArchEmitSubRef(i8 /* subr */);
const i1 c02_s000c[] = { 0x28,0x29,0x3b,0x0a,0 };
	void f60_E(i8 /* text */);
const i1 c02_s000d[] = { 0x7d,0x0a,0 };
	void f60_E(i8 /* text */);

// ArchEmitFooter workspace at ws+792 length ws+16
void f75_ArchEmitFooter(i8 p1072 /* coo */) {
	*(i8*)(intptr_t)(ws+792) = p1072; /*coo */

	i8 v1073 = (i8)(intptr_t)c02_s000b;
	i8 v1074 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v1074)(v1073);

c02_00e5:;

	i8 v1075 = (i8)(intptr_t)(ws+792);
	i8 v1076 = *(i8*)(intptr_t)v1075;
	i8 v1077 = (i8)+0;
	if (v1076==v1077) goto c02_00e8; else goto c02_00e7;

c02_00e7:;

	i8 v1078 = (i8)(intptr_t)(ws+792);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	i8 v1080 = v1079+(+544);
	i8 v1081 = *(i8*)(intptr_t)v1080;
	i8 v1082 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v1082 = v1081;

	i8 v1083 = (i8)(intptr_t)(ws+800);
	i8 v1084 = *(i8*)(intptr_t)v1083;
	i8 v1085 = (i8)+0;
	if (v1084==v1085) goto c02_00ed; else goto c02_00ec;

c02_00ec:;

	i1 v1086 = (i1)+9;
	i8 v1087 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1087)(v1086);

	i8 v1088 = (i8)(intptr_t)(ws+800);
	i8 v1089 = *(i8*)(intptr_t)v1088;
	i8 v1090 = (i8)(intptr_t)(f72_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1090)(v1089);

	i8 v1091 = (i8)(intptr_t)c02_s000c;
	i8 v1092 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v1092)(v1091);

c02_00ed:;

c02_00e9:;

	i8 v1093 = (i8)(intptr_t)(ws+792);
	i8 v1094 = *(i8*)(intptr_t)v1093;
	i8 v1095 = v1094+(+672);
	i8 v1096 = *(i8*)(intptr_t)v1095;
	i8 v1097 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v1097 = v1096;

	goto c02_00e5;

c02_00e8:;

	i8 v1098 = (i8)(intptr_t)c02_s000d;
	i8 v1099 = (i8)(intptr_t)(f60_E);

	((void(*)(i8 /* text */))(intptr_t)v1099)(v1098);

endsub:;
}
	void f50_FCBGetChar(i1* /* c */, i8 /* fcb */);

// read_bin1 workspace at ws+912 length ws+9
void f76_read_bin1(i1* p1102 /* c */, i8 p1103 /* fcb */) {
	*(i8*)(intptr_t)(ws+912) = p1103; /*fcb */

	i8 v1104 = (i8)(intptr_t)(ws+912);
	i8 v1105 = *(i8*)(intptr_t)v1104;
	i8 v1106 = (i8)(intptr_t)(f50_FCBGetChar);
	i1 v1107;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1106)(&v1107, v1105);
	i8 v1108 = (i8)(intptr_t)(ws+920);
	*(i1*)(intptr_t)v1108 = v1107;

endsub:;
	*p1102 = *(i1*)(intptr_t)(ws+920);
}
	void f76_read_bin1(i1* /* c */, i8 /* fcb */);
	void f76_read_bin1(i1* /* c */, i8 /* fcb */);

// read_bin2 workspace at ws+880 length ws+10
void f77_read_bin2(i2* p1109 /* val */, i8 p1110 /* fcb */) {
	*(i8*)(intptr_t)(ws+880) = p1110; /*fcb */

	i8 v1111 = (i8)(intptr_t)(ws+880);
	i8 v1112 = *(i8*)(intptr_t)v1111;
	i8 v1113 = (i8)(intptr_t)(f76_read_bin1);
	i1 v1114;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1113)(&v1114, v1112);
	i2 v1115 = v1114;
	i8 v1116 = (i8)(intptr_t)(ws+888);
	*(i2*)(intptr_t)v1116 = v1115;

	i8 v1117 = (i8)(intptr_t)(ws+888);
	i2 v1118 = *(i2*)(intptr_t)v1117;
	i8 v1119 = (i8)(intptr_t)(ws+880);
	i8 v1120 = *(i8*)(intptr_t)v1119;
	i8 v1121 = (i8)(intptr_t)(f76_read_bin1);
	i1 v1122;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1121)(&v1122, v1120);
	i2 v1123 = v1122;
	i1 v1124 = (i1)+8;
	i2 v1125 = ((i2)v1123)<<v1124;
	i2 v1126 = v1118|v1125;
	i8 v1127 = (i8)(intptr_t)(ws+888);
	*(i2*)(intptr_t)v1127 = v1126;

endsub:;
	*p1109 = *(i2*)(intptr_t)(ws+888);
}
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f76_read_bin1(i1* /* c */, i8 /* fcb */);

// read_string workspace at ws+880 length ws+32
void f78_read_string(i8* p1128 /* ptr */, i1 p1129 /* len */, i8 p1130 /* fcb */) {
	*(i8*)(intptr_t)(ws+880) = p1130; /*fcb */
	*(i1*)(intptr_t)(ws+888) = p1129; /*len */

	i8 v1131 = (i8)(intptr_t)(ws+888);
	i1 v1132 = *(i1*)(intptr_t)v1131;
	i1 v1133 = v1132+(+1);
	i8 v1134 = v1133;
	i8 v1135 = (i8)(intptr_t)(f32_Alloc);
	i8 v1136;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1135)(&v1136, v1134);
	i8 v1137 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v1137 = v1136;

	i8 v1138 = (i8)(intptr_t)(ws+896);
	i8 v1139 = *(i8*)(intptr_t)v1138;
	i8 v1140 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1140 = v1139;

c02_00ee:;

	i8 v1141 = (i8)(intptr_t)(ws+888);
	i1 v1142 = *(i1*)(intptr_t)v1141;
	i1 v1143 = (i1)+0;
	if (v1142==v1143) goto c02_00f3; else goto c02_00f4;

c02_00f3:;

	goto c02_00ef;

c02_00f4:;

c02_00f0:;

	i8 v1144 = (i8)(intptr_t)(ws+880);
	i8 v1145 = *(i8*)(intptr_t)v1144;
	i8 v1146 = (i8)(intptr_t)(f76_read_bin1);
	i1 v1147;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1146)(&v1147, v1145);
	i8 v1148 = (i8)(intptr_t)(ws+904);
	i8 v1149 = *(i8*)(intptr_t)v1148;
	*(i1*)(intptr_t)v1149 = v1147;

	i8 v1150 = (i8)(intptr_t)(ws+904);
	i8 v1151 = *(i8*)(intptr_t)v1150;
	i8 v1152 = v1151+(+1);
	i8 v1153 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1153 = v1152;

	i8 v1154 = (i8)(intptr_t)(ws+888);
	i1 v1155 = *(i1*)(intptr_t)v1154;
	i1 v1156 = v1155+(-1);
	i8 v1157 = (i8)(intptr_t)(ws+888);
	*(i1*)(intptr_t)v1157 = v1156;

	goto c02_00ee;

c02_00ef:;

endsub:;
	*p1128 = *(i8*)(intptr_t)(ws+896);
}
	void f32_Alloc(i8* /* block */, i8 /* length */);

// AddRef workspace at ws+880 length ws+32
void f79_AddRef(i8 p1158 /* calls */, i8 p1159 /* subr */) {
	*(i8*)(intptr_t)(ws+880) = p1159; /*subr */
	*(i8*)(intptr_t)(ws+888) = p1158; /*calls */

	i8 v1160 = (i8)(intptr_t)(ws+880);
	i8 v1161 = *(i8*)(intptr_t)v1160;
	i8 v1162 = v1161+(+184);
	i2 v1163 = *(i2*)(intptr_t)v1162;
	i8 v1164 = (i8)(intptr_t)(ws+896);
	*(i2*)(intptr_t)v1164 = v1163;

	i8 v1165 = (i8)(intptr_t)(ws+896);
	i2 v1166 = *(i2*)(intptr_t)v1165;
	i2 v1167 = v1166+(+1);
	i8 v1168 = (i8)(intptr_t)(ws+880);
	i8 v1169 = *(i8*)(intptr_t)v1168;
	i8 v1170 = v1169+(+184);
	*(i2*)(intptr_t)v1170 = v1167;

	i8 v1171 = (i8)(intptr_t)(ws+880);
	i8 v1172 = *(i8*)(intptr_t)v1171;
	i8 v1173 = v1172+(+16);
	i8 v1174 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1174 = v1173;

c02_00f7:;

	i8 v1175 = (i8)(intptr_t)(ws+896);
	i2 v1176 = *(i2*)(intptr_t)v1175;
	i2 v1177 = (i2)+16;
	if (v1176<v1177) goto c02_00fa; else goto c02_00f9;

c02_00f9:;

	i8 v1178 = (i8)(intptr_t)(ws+904);
	i8 v1179 = *(i8*)(intptr_t)v1178;
	i8 v1180 = *(i8*)(intptr_t)v1179;
	i8 v1181 = (i8)+0;
	if (v1180==v1181) goto c02_00fe; else goto c02_00ff;

c02_00fe:;

	i8 v1182 = (i8)+136;
	i8 v1183 = (i8)(intptr_t)(f32_Alloc);
	i8 v1184;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1183)(&v1184, v1182);
	i8 v1185 = (i8)(intptr_t)(ws+904);
	i8 v1186 = *(i8*)(intptr_t)v1185;
	*(i8*)(intptr_t)v1186 = v1184;

c02_00ff:;

c02_00fb:;

	i8 v1187 = (i8)(intptr_t)(ws+904);
	i8 v1188 = *(i8*)(intptr_t)v1187;
	i8 v1189 = *(i8*)(intptr_t)v1188;
	i8 v1190 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1190 = v1189;

	i8 v1191 = (i8)(intptr_t)(ws+896);
	i2 v1192 = *(i2*)(intptr_t)v1191;
	i2 v1193 = v1192+(-16);
	i8 v1194 = (i8)(intptr_t)(ws+896);
	*(i2*)(intptr_t)v1194 = v1193;

	goto c02_00f7;

c02_00fa:;

	i8 v1195 = (i8)(intptr_t)(ws+888);
	i8 v1196 = *(i8*)(intptr_t)v1195;
	i8 v1197 = (i8)(intptr_t)(ws+904);
	i8 v1198 = *(i8*)(intptr_t)v1197;
	i8 v1199 = v1198+(+8);
	i8 v1200 = (i8)(intptr_t)(ws+896);
	i2 v1201 = *(i2*)(intptr_t)v1200;
	i1 v1202 = v1201;
	i8 v1203 = v1202;
	i1 v1204 = (i1)+3;
	i8 v1205 = ((i8)v1203)<<v1204;
	i8 v1206 = v1199+v1205;
	*(i8*)(intptr_t)v1206 = v1196;

endsub:;
}
	void f32_Alloc(i8* /* block */, i8 /* length */);

// FindSub workspace at ws+912 length ws+32
void f80_FindSub(i8* p1207 /* ptr */, i2 p1208 /* id */, i8 p1209 /* coo */) {
	*(i8*)(intptr_t)(ws+912) = p1209; /*coo */
	*(i2*)(intptr_t)(ws+920) = p1208; /*id */

	i8 v1210 = (i8)(intptr_t)(ws+912);
	i8 v1211 = *(i8*)(intptr_t)v1210;
	i8 v1212 = v1211+(+536);
	i8 v1213 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)v1213 = v1212;

c02_0102:;

	i8 v1214 = (i8)(intptr_t)(ws+920);
	i2 v1215 = *(i2*)(intptr_t)v1214;
	i2 v1216 = (i2)+16;
	if (v1215<v1216) goto c02_0105; else goto c02_0104;

c02_0104:;

	i8 v1217 = (i8)(intptr_t)(ws+936);
	i8 v1218 = *(i8*)(intptr_t)v1217;
	i8 v1219 = *(i8*)(intptr_t)v1218;
	i8 v1220 = (i8)+0;
	if (v1219==v1220) goto c02_0109; else goto c02_010a;

c02_0109:;

	i8 v1221 = (i8)+136;
	i8 v1222 = (i8)(intptr_t)(f32_Alloc);
	i8 v1223;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1222)(&v1223, v1221);
	i8 v1224 = (i8)(intptr_t)(ws+936);
	i8 v1225 = *(i8*)(intptr_t)v1224;
	*(i8*)(intptr_t)v1225 = v1223;

c02_010a:;

c02_0106:;

	i8 v1226 = (i8)(intptr_t)(ws+936);
	i8 v1227 = *(i8*)(intptr_t)v1226;
	i8 v1228 = *(i8*)(intptr_t)v1227;
	i8 v1229 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)v1229 = v1228;

	i8 v1230 = (i8)(intptr_t)(ws+920);
	i2 v1231 = *(i2*)(intptr_t)v1230;
	i2 v1232 = v1231+(-16);
	i8 v1233 = (i8)(intptr_t)(ws+920);
	*(i2*)(intptr_t)v1233 = v1232;

	goto c02_0102;

c02_0105:;

	i8 v1234 = (i8)(intptr_t)(ws+936);
	i8 v1235 = *(i8*)(intptr_t)v1234;
	i8 v1236 = v1235+(+8);
	i8 v1237 = (i8)(intptr_t)(ws+920);
	i2 v1238 = *(i2*)(intptr_t)v1237;
	i1 v1239 = v1238;
	i8 v1240 = v1239;
	i1 v1241 = (i1)+3;
	i8 v1242 = ((i8)v1240)<<v1241;
	i8 v1243 = v1236+v1242;
	i8 v1244 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v1244 = v1243;

endsub:;
	*p1207 = *(i8*)(intptr_t)(ws+928);
}
	void f80_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	void f32_Alloc(i8* /* block */, i8 /* length */);

// FindOrCreateSub workspace at ws+880 length ws+32
void f81_FindOrCreateSub(i8* p1245 /* subroutine */, i2 p1246 /* id */, i8 p1247 /* coo */) {
	*(i8*)(intptr_t)(ws+880) = p1247; /*coo */
	*(i2*)(intptr_t)(ws+888) = p1246; /*id */

	i8 v1248 = (i8)(intptr_t)(ws+880);
	i8 v1249 = *(i8*)(intptr_t)v1248;
	i8 v1250 = (i8)(intptr_t)(ws+888);
	i2 v1251 = *(i2*)(intptr_t)v1250;
	i8 v1252 = (i8)(intptr_t)(f80_FindSub);
	i8 v1253;

	((void(*)(i8* /* ptr */, i2 /* id */, i8 /* coo */))(intptr_t)v1252)(&v1253, v1251, v1249);
	i8 v1254 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1254 = v1253;

	i8 v1255 = (i8)(intptr_t)(ws+904);
	i8 v1256 = *(i8*)(intptr_t)v1255;
	i8 v1257 = *(i8*)(intptr_t)v1256;
	i8 v1258 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v1258 = v1257;

	i8 v1259 = (i8)(intptr_t)(ws+896);
	i8 v1260 = *(i8*)(intptr_t)v1259;
	i8 v1261 = (i8)+0;
	if (v1260==v1261) goto c02_010e; else goto c02_010f;

c02_010e:;

	i8 v1262 = (i8)+189;
	i8 v1263 = (i8)(intptr_t)(f32_Alloc);
	i8 v1264;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1263)(&v1264, v1262);
	i8 v1265 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v1265 = v1264;

	i8 v1266 = (i8)(intptr_t)(ws+880);
	i8 v1267 = *(i8*)(intptr_t)v1266;
	i8 v1268 = (i8)(intptr_t)(ws+896);
	i8 v1269 = *(i8*)(intptr_t)v1268;
	*(i8*)(intptr_t)v1269 = v1267;

	i8 v1270 = (i8)(intptr_t)(ws+32);
	i8 v1271 = *(i8*)(intptr_t)v1270;
	i8 v1272 = (i8)(intptr_t)(ws+896);
	i8 v1273 = *(i8*)(intptr_t)v1272;
	i8 v1274 = v1273+(+8);
	*(i8*)(intptr_t)v1274 = v1271;

	i8 v1275 = (i8)(intptr_t)(ws+896);
	i8 v1276 = *(i8*)(intptr_t)v1275;
	i8 v1277 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1277 = v1276;

	i8 v1278 = (i8)(intptr_t)(ws+40);
	i2 v1279 = *(i2*)(intptr_t)v1278;
	i8 v1280 = (i8)(intptr_t)(ws+896);
	i8 v1281 = *(i8*)(intptr_t)v1280;
	i8 v1282 = v1281+(+186);
	*(i2*)(intptr_t)v1282 = v1279;

	i8 v1283 = (i8)(intptr_t)(ws+896);
	i8 v1284 = *(i8*)(intptr_t)v1283;
	i8 v1285 = (i8)(intptr_t)(ws+904);
	i8 v1286 = *(i8*)(intptr_t)v1285;
	*(i8*)(intptr_t)v1286 = v1284;

	i8 v1287 = (i8)(intptr_t)(ws+40);
	i2 v1288 = *(i2*)(intptr_t)v1287;
	i2 v1289 = v1288+(+1);
	i8 v1290 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1290 = v1289;

c02_010f:;

c02_010b:;

endsub:;
	*p1245 = *(i8*)(intptr_t)(ws+896);
}

// Deref workspace at ws+3248 length ws+24
void f82_Deref(i8* p1291 /* subout */, i8 p1292 /* subin */) {
	*(i8*)(intptr_t)(ws+3248) = p1292; /*subin */

	i8 v1293 = (i8)(intptr_t)(ws+3248);
	i8 v1294 = *(i8*)(intptr_t)v1293;
	i8 v1295 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v1295 = v1294;

	i8 v1296 = (i8)(intptr_t)(ws+3248);
	i8 v1297 = *(i8*)(intptr_t)v1296;
	i8 v1298 = (i8)+0;
	if (v1297==v1298) goto c02_0114; else goto c02_0113;

c02_0113:;

	i8 v1299 = (i8)(intptr_t)(ws+3248);
	i8 v1300 = *(i8*)(intptr_t)v1299;
	i8 v1301 = v1300+(+160);
	i8 v1302 = *(i8*)(intptr_t)v1301;
	i8 v1303 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v1303 = v1302;

	i8 v1304 = (i8)(intptr_t)(ws+3264);
	i8 v1305 = *(i8*)(intptr_t)v1304;
	i8 v1306 = (i8)+0;
	if (v1305==v1306) goto c02_0119; else goto c02_0118;

c02_0118:;

	i8 v1307 = (i8)(intptr_t)(ws+3264);
	i8 v1308 = *(i8*)(intptr_t)v1307;
	i8 v1309 = v1308+(+16);
	i8 v1310 = *(i8*)(intptr_t)v1309;
	i8 v1311 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v1311 = v1310;

c02_0119:;

c02_0115:;

c02_0114:;

c02_0110:;

endsub:;
	*p1291 = *(i8*)(intptr_t)(ws+3256);
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f34_StrDup(i8* /* sout */, i8 /* s */);

// FindOrCreateExternal workspace at ws+880 length ws+16
void f83_FindOrCreateExternal(i8* p1312 /* external */, i8 p1313 /* name */) {
	*(i8*)(intptr_t)(ws+880) = p1313; /*name */

	i8 v1314 = (i8)(intptr_t)(ws+24);
	i8 v1315 = *(i8*)(intptr_t)v1314;
	i8 v1316 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v1316 = v1315;

c02_011c:;

	i8 v1317 = (i8)(intptr_t)(ws+888);
	i8 v1318 = *(i8*)(intptr_t)v1317;
	i8 v1319 = (i8)+0;
	if (v1318==v1319) goto c02_011f; else goto c02_011e;

c02_011e:;

	i8 v1320 = (i8)(intptr_t)(ws+888);
	i8 v1321 = *(i8*)(intptr_t)v1320;
	i8 v1322 = v1321+(+8);
	i8 v1323 = *(i8*)(intptr_t)v1322;
	i8 v1324 = (i8)(intptr_t)(ws+880);
	i8 v1325 = *(i8*)(intptr_t)v1324;
	i8 v1326 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1327;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1326)(&v1327, v1325, v1323);
	i1 v1328 = (i1)+0;
	if (v1327==v1328) goto c02_0123; else goto c02_0124;

c02_0123:;

	goto endsub;

c02_0124:;

c02_0120:;

	i8 v1329 = (i8)(intptr_t)(ws+888);
	i8 v1330 = *(i8*)(intptr_t)v1329;
	i8 v1331 = *(i8*)(intptr_t)v1330;
	i8 v1332 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v1332 = v1331;

	goto c02_011c;

c02_011f:;

	i8 v1333 = (i8)+24;
	i8 v1334 = (i8)(intptr_t)(f32_Alloc);
	i8 v1335;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1334)(&v1335, v1333);
	i8 v1336 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v1336 = v1335;

	i8 v1337 = (i8)(intptr_t)(ws+24);
	i8 v1338 = *(i8*)(intptr_t)v1337;
	i8 v1339 = (i8)(intptr_t)(ws+888);
	i8 v1340 = *(i8*)(intptr_t)v1339;
	*(i8*)(intptr_t)v1340 = v1338;

	i8 v1341 = (i8)(intptr_t)(ws+880);
	i8 v1342 = *(i8*)(intptr_t)v1341;
	i8 v1343 = (i8)(intptr_t)(f34_StrDup);
	i8 v1344;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v1343)(&v1344, v1342);
	i8 v1345 = (i8)(intptr_t)(ws+888);
	i8 v1346 = *(i8*)(intptr_t)v1345;
	i8 v1347 = v1346+(+8);
	*(i8*)(intptr_t)v1347 = v1344;

	i8 v1348 = (i8)(intptr_t)(ws+888);
	i8 v1349 = *(i8*)(intptr_t)v1348;
	i8 v1350 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1350 = v1349;

endsub:;
	*p1312 = *(i8*)(intptr_t)(ws+888);
}
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f42_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f58_CannotOpen(i8 /* filename */);
	void f46_FCBSeek(i4 /* pos */, i8 /* fcb */);
	void f76_read_bin1(i1* /* c */, i8 /* fcb */);
	void f77_read_bin2(i2* /* val */, i8 /* fcb */);
	void f76_read_bin1(i1* /* c */, i8 /* fcb */);
	void f77_read_bin2(i2* /* val */, i8 /* fcb */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f77_read_bin2(i2* /* val */, i8 /* fcb */);
	void f77_read_bin2(i2* /* val */, i8 /* fcb */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f79_AddRef(i8 /* calls */, i8 /* subr */);
	void f77_read_bin2(i2* /* val */, i8 /* fcb */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f76_read_bin1(i1* /* c */, i8 /* fcb */);
	void f77_read_bin2(i2* /* val */, i8 /* fcb */);
	void f77_read_bin2(i2* /* val */, i8 /* fcb */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f78_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	void f77_read_bin2(i2* /* val */, i8 /* fcb */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f78_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	void f83_FindOrCreateExternal(i8* /* external */, i8 /* name */);
	void f55_StartError(void);
const i1 c02_s000e[] = { 0x6d,0x75,0x6c,0x74,0x69,0x70,0x6c,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x64,0x65,0x63,0x6c,0x61,0x72,0x61,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6f,0x66,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s000f[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f56_EndError(void);
const i1 c02_s0010[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f8_print_char(i1 /* c */);
const i1 c02_s0011[] = { 0x27,0x20,0x69,0x6e,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0012[] = { 0x20,0x61,0x74,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// OpenAndLoadCoo workspace at ws+816 length ws+64
void f84_OpenAndLoadCoo(i8* p1351 /* coo */, i8 p1352 /* filename */) {
	*(i8*)(intptr_t)(ws+816) = p1352; /*filename */

	i8 v1353 = (i8)+682;
	i8 v1354 = (i8)(intptr_t)(f32_Alloc);
	i8 v1355;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1354)(&v1355, v1353);
	i8 v1356 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v1356 = v1355;

	i8 v1357 = (i8)(intptr_t)(ws+40);
	i2 v1358 = *(i2*)(intptr_t)v1357;
	i8 v1359 = (i8)(intptr_t)(ws+824);
	i8 v1360 = *(i8*)(intptr_t)v1359;
	i8 v1361 = v1360+(+680);
	*(i2*)(intptr_t)v1361 = v1358;

	i8 v1362 = (i8)(intptr_t)(ws+816);
	i8 v1363 = *(i8*)(intptr_t)v1362;
	i8 v1364 = (i8)(intptr_t)(ws+824);
	i8 v1365 = *(i8*)(intptr_t)v1364;
	i8 v1366 = v1365+(+528);
	*(i8*)(intptr_t)v1366 = v1363;

	i8 v1367 = (i8)(intptr_t)(ws+40);
	i2 v1368 = *(i2*)(intptr_t)v1367;
	i2 v1369 = v1368+(+1);
	i8 v1370 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1370 = v1369;

	i8 v1371 = (i8)(intptr_t)(ws+824);
	i8 v1372 = *(i8*)(intptr_t)v1371;
	i8 v1373 = (i8)(intptr_t)(ws+816);
	i8 v1374 = *(i8*)(intptr_t)v1373;
	i8 v1375 = (i8)(intptr_t)(f42_FCBOpenIn);
	i1 v1376;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1375)(&v1376, v1374, v1372);
	i1 v1377 = (i1)+0;
	if (v1376==v1377) goto c02_0129; else goto c02_0128;

c02_0128:;

	i8 v1378 = (i8)(intptr_t)(ws+816);
	i8 v1379 = *(i8*)(intptr_t)v1378;
	i8 v1380 = (i8)(intptr_t)(f58_CannotOpen);

	((void(*)(i8 /* filename */))(intptr_t)v1380)(v1379);

c02_0129:;

c02_0125:;

	i4 v1381 = (i4)+0;
	i8 v1382 = (i8)(intptr_t)(ws+836);
	*(i4*)(intptr_t)v1382 = v1381;

c02_012a:;

	i8 v1383 = (i8)(intptr_t)(ws+824);
	i8 v1384 = *(i8*)(intptr_t)v1383;
	i8 v1385 = (i8)(intptr_t)(ws+836);
	i4 v1386 = *(i4*)(intptr_t)v1385;
	i8 v1387 = (i8)(intptr_t)(f46_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1387)(v1386, v1384);

	i8 v1388 = (i8)(intptr_t)(ws+824);
	i8 v1389 = *(i8*)(intptr_t)v1388;
	i8 v1390 = (i8)(intptr_t)(f76_read_bin1);
	i1 v1391;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1390)(&v1391, v1389);
	i8 v1392 = (i8)(intptr_t)(ws+840);
	*(i1*)(intptr_t)v1392 = v1391;

	i8 v1393 = (i8)(intptr_t)(ws+824);
	i8 v1394 = *(i8*)(intptr_t)v1393;
	i8 v1395 = (i8)(intptr_t)(f77_read_bin2);
	i2 v1396;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1395)(&v1396, v1394);
	i8 v1397 = (i8)(intptr_t)(ws+842);
	*(i2*)(intptr_t)v1397 = v1396;

	i8 v1398 = (i8)(intptr_t)(ws+840);
	i1 v1399 = *(i1*)(intptr_t)v1398;
	i1 v1400 = (i1)+69;
	if (v1399==v1400) goto c02_012f; else goto c02_0130;

c02_012f:;

	goto c02_012b;

c02_0130:;

	i8 v1401 = (i8)(intptr_t)(ws+840);
	i1 v1402 = *(i1*)(intptr_t)v1401;
	i1 v1403 = (i1)+70;
	if (v1402==v1403) goto c02_0133; else goto c02_0134;

c02_0133:;

	i8 v1404 = (i8)(intptr_t)(ws+824);
	i8 v1405 = *(i8*)(intptr_t)v1404;
	i8 v1406 = (i8)(intptr_t)(f76_read_bin1);
	i1 v1407;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1406)(&v1407, v1405);
	i8 v1408 = (i8)(intptr_t)(ws+832);
	*(i1*)(intptr_t)v1408 = v1407;

	i8 v1409 = (i8)(intptr_t)(ws+824);
	i8 v1410 = *(i8*)(intptr_t)v1409;
	i8 v1411 = (i8)(intptr_t)(f77_read_bin2);
	i2 v1412;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1411)(&v1412, v1410);
	i8 v1413 = (i8)(intptr_t)(ws+834);
	*(i2*)(intptr_t)v1413 = v1412;

	i8 v1414 = (i8)(intptr_t)(ws+824);
	i8 v1415 = *(i8*)(intptr_t)v1414;
	i8 v1416 = (i8)(intptr_t)(ws+834);
	i2 v1417 = *(i2*)(intptr_t)v1416;
	i8 v1418 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v1419;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1418)(&v1419, v1417, v1415);
	i8 v1420 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v1420 = v1419;

	i8 v1421 = (i8)(intptr_t)(ws+848);
	i8 v1422 = *(i8*)(intptr_t)v1421;
	i8 v1423 = v1422+(+188);
	i1 v1424 = *(i1*)(intptr_t)v1423;
	i1 v1425 = v1424|(+2);
	i8 v1426 = (i8)(intptr_t)(ws+848);
	i8 v1427 = *(i8*)(intptr_t)v1426;
	i8 v1428 = v1427+(+188);
	*(i1*)(intptr_t)v1428 = v1425;

	goto c02_012c;

c02_0134:;

	i8 v1429 = (i8)(intptr_t)(ws+840);
	i1 v1430 = *(i1*)(intptr_t)v1429;
	i1 v1431 = (i1)+82;
	if (v1430==v1431) goto c02_0137; else goto c02_0138;

c02_0137:;

	i8 v1432 = (i8)(intptr_t)(ws+824);
	i8 v1433 = *(i8*)(intptr_t)v1432;
	i8 v1434 = (i8)(intptr_t)(f77_read_bin2);
	i2 v1435;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1434)(&v1435, v1433);
	i8 v1436 = (i8)(intptr_t)(ws+856);
	*(i2*)(intptr_t)v1436 = v1435;

	i8 v1437 = (i8)(intptr_t)(ws+824);
	i8 v1438 = *(i8*)(intptr_t)v1437;
	i8 v1439 = (i8)(intptr_t)(f77_read_bin2);
	i2 v1440;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1439)(&v1440, v1438);
	i8 v1441 = (i8)(intptr_t)(ws+858);
	*(i2*)(intptr_t)v1441 = v1440;

	i8 v1442 = (i8)(intptr_t)(ws+824);
	i8 v1443 = *(i8*)(intptr_t)v1442;
	i8 v1444 = (i8)(intptr_t)(ws+856);
	i2 v1445 = *(i2*)(intptr_t)v1444;
	i8 v1446 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v1447;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1446)(&v1447, v1445, v1443);
	i8 v1448 = (i8)(intptr_t)(ws+824);
	i8 v1449 = *(i8*)(intptr_t)v1448;
	i8 v1450 = (i8)(intptr_t)(ws+858);
	i2 v1451 = *(i2*)(intptr_t)v1450;
	i8 v1452 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v1453;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1452)(&v1453, v1451, v1449);
	i8 v1454 = (i8)(intptr_t)(f79_AddRef);

	((void(*)(i8 /* calls */, i8 /* subr */))(intptr_t)v1454)(v1453, v1447);

	goto c02_012c;

c02_0138:;

	i8 v1455 = (i8)(intptr_t)(ws+840);
	i1 v1456 = *(i1*)(intptr_t)v1455;
	i1 v1457 = (i1)+87;
	if (v1456==v1457) goto c02_013b; else goto c02_013c;

c02_013b:;

	i8 v1458 = (i8)(intptr_t)(ws+824);
	i8 v1459 = *(i8*)(intptr_t)v1458;
	i8 v1460 = (i8)(intptr_t)(f77_read_bin2);
	i2 v1461;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1460)(&v1461, v1459);
	i8 v1462 = (i8)(intptr_t)(ws+834);
	*(i2*)(intptr_t)v1462 = v1461;

	i8 v1463 = (i8)(intptr_t)(ws+824);
	i8 v1464 = *(i8*)(intptr_t)v1463;
	i8 v1465 = (i8)(intptr_t)(ws+834);
	i2 v1466 = *(i2*)(intptr_t)v1465;
	i8 v1467 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v1468;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1467)(&v1468, v1466, v1464);
	i8 v1469 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v1469 = v1468;

	i8 v1470 = (i8)(intptr_t)(ws+824);
	i8 v1471 = *(i8*)(intptr_t)v1470;
	i8 v1472 = (i8)(intptr_t)(f76_read_bin1);
	i1 v1473;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1472)(&v1473, v1471);
	i8 v1474 = (i8)(intptr_t)(ws+860);
	*(i1*)(intptr_t)v1474 = v1473;

	i8 v1475 = (i8)(intptr_t)(ws+824);
	i8 v1476 = *(i8*)(intptr_t)v1475;
	i8 v1477 = (i8)(intptr_t)(f77_read_bin2);
	i2 v1478;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1477)(&v1478, v1476);
	i8 v1479 = (i8)(intptr_t)(ws+848);
	i8 v1480 = *(i8*)(intptr_t)v1479;
	i8 v1481 = v1480+(+168);
	i8 v1482 = (i8)(intptr_t)(ws+860);
	i1 v1483 = *(i1*)(intptr_t)v1482;
	i8 v1484 = v1483;
	i1 v1485 = (i1)+1;
	i8 v1486 = ((i8)v1484)<<v1485;
	i8 v1487 = v1481+v1486;
	*(i2*)(intptr_t)v1487 = v1478;

	goto c02_012c;

c02_013c:;

	i8 v1488 = (i8)(intptr_t)(ws+840);
	i1 v1489 = *(i1*)(intptr_t)v1488;
	i1 v1490 = (i1)+78;
	if (v1489==v1490) goto c02_013f; else goto c02_0140;

c02_013f:;

	i8 v1491 = (i8)(intptr_t)(ws+824);
	i8 v1492 = *(i8*)(intptr_t)v1491;
	i8 v1493 = (i8)(intptr_t)(f77_read_bin2);
	i2 v1494;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1493)(&v1494, v1492);
	i8 v1495 = (i8)(intptr_t)(ws+834);
	*(i2*)(intptr_t)v1495 = v1494;

	i8 v1496 = (i8)(intptr_t)(ws+824);
	i8 v1497 = *(i8*)(intptr_t)v1496;
	i8 v1498 = (i8)(intptr_t)(ws+834);
	i2 v1499 = *(i2*)(intptr_t)v1498;
	i8 v1500 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v1501;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1500)(&v1501, v1499, v1497);
	i8 v1502 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v1502 = v1501;

	i8 v1503 = (i8)(intptr_t)(ws+824);
	i8 v1504 = *(i8*)(intptr_t)v1503;
	i8 v1505 = (i8)(intptr_t)(ws+842);
	i2 v1506 = *(i2*)(intptr_t)v1505;
	i1 v1507 = v1506;
	i1 v1508 = v1507+(-2);
	i8 v1509 = (i8)(intptr_t)(f78_read_string);
	i8 v1510;

	((void(*)(i8* /* ptr */, i1 /* len */, i8 /* fcb */))(intptr_t)v1509)(&v1510, v1508, v1504);
	i8 v1511 = (i8)(intptr_t)(ws+848);
	i8 v1512 = *(i8*)(intptr_t)v1511;
	i8 v1513 = v1512+(+152);
	*(i8*)(intptr_t)v1513 = v1510;

	goto c02_012c;

c02_0140:;

	i8 v1514 = (i8)(intptr_t)(ws+840);
	i1 v1515 = *(i1*)(intptr_t)v1514;
	i1 v1516 = (i1)+88;
	if (v1515==v1516) goto c02_0143; else goto c02_0144;

c02_0143:;

	i8 v1517 = (i8)(intptr_t)(ws+824);
	i8 v1518 = *(i8*)(intptr_t)v1517;
	i8 v1519 = (i8)(intptr_t)(f77_read_bin2);
	i2 v1520;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1519)(&v1520, v1518);
	i8 v1521 = (i8)(intptr_t)(ws+834);
	*(i2*)(intptr_t)v1521 = v1520;

	i8 v1522 = (i8)(intptr_t)(ws+824);
	i8 v1523 = *(i8*)(intptr_t)v1522;
	i8 v1524 = (i8)(intptr_t)(ws+834);
	i2 v1525 = *(i2*)(intptr_t)v1524;
	i8 v1526 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v1527;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1526)(&v1527, v1525, v1523);
	i8 v1528 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v1528 = v1527;

	i8 v1529 = (i8)(intptr_t)(ws+824);
	i8 v1530 = *(i8*)(intptr_t)v1529;
	i8 v1531 = (i8)(intptr_t)(ws+842);
	i2 v1532 = *(i2*)(intptr_t)v1531;
	i1 v1533 = v1532;
	i1 v1534 = v1533+(-2);
	i8 v1535 = (i8)(intptr_t)(f78_read_string);
	i8 v1536;

	((void(*)(i8* /* ptr */, i1 /* len */, i8 /* fcb */))(intptr_t)v1535)(&v1536, v1534, v1530);
	i8 v1537 = (i8)(intptr_t)(ws+864);
	*(i8*)(intptr_t)v1537 = v1536;

	i8 v1538 = (i8)(intptr_t)(ws+864);
	i8 v1539 = *(i8*)(intptr_t)v1538;
	i8 v1540 = (i8)(intptr_t)(f83_FindOrCreateExternal);
	i8 v1541;

	((void(*)(i8* /* external */, i8 /* name */))(intptr_t)v1540)(&v1541, v1539);
	i8 v1542 = (i8)(intptr_t)(ws+872);
	*(i8*)(intptr_t)v1542 = v1541;

	i8 v1543 = (i8)(intptr_t)(ws+848);
	i8 v1544 = *(i8*)(intptr_t)v1543;
	i8 v1545 = v1544+(+160);
	i8 v1546 = *(i8*)(intptr_t)v1545;
	i8 v1547 = (i8)+0;
	if (v1546==v1547) goto c02_0149; else goto c02_0148;

c02_0148:;

	i8 v1548 = (i8)(intptr_t)(f55_StartError);

	((void(*)(void))(intptr_t)v1548)();

	i8 v1549 = (i8)(intptr_t)c02_s000e;
	i8 v1550 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1550)(v1549);

	i8 v1551 = (i8)(intptr_t)(ws+864);
	i8 v1552 = *(i8*)(intptr_t)v1551;
	i8 v1553 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1553)(v1552);

	i8 v1554 = (i8)(intptr_t)c02_s000f;
	i8 v1555 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1555)(v1554);

	i8 v1556 = (i8)(intptr_t)(f56_EndError);

	((void(*)(void))(intptr_t)v1556)();

c02_0149:;

c02_0145:;

	i8 v1557 = (i8)(intptr_t)(ws+872);
	i8 v1558 = *(i8*)(intptr_t)v1557;
	i8 v1559 = (i8)(intptr_t)(ws+848);
	i8 v1560 = *(i8*)(intptr_t)v1559;
	i8 v1561 = v1560+(+160);
	*(i8*)(intptr_t)v1561 = v1558;

	goto c02_012c;

c02_0144:;

	i8 v1562 = (i8)(intptr_t)c02_s0010;
	i8 v1563 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1563)(v1562);

	i8 v1564 = (i8)(intptr_t)(ws+840);
	i1 v1565 = *(i1*)(intptr_t)v1564;
	i8 v1566 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v1566)(v1565);

	i8 v1567 = (i8)(intptr_t)c02_s0011;
	i8 v1568 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1568)(v1567);

	i8 v1569 = (i8)(intptr_t)(ws+816);
	i8 v1570 = *(i8*)(intptr_t)v1569;
	i8 v1571 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1571)(v1570);

	i8 v1572 = (i8)(intptr_t)c02_s0012;
	i8 v1573 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1573)(v1572);

	i8 v1574 = (i8)(intptr_t)(ws+836);
	i4 v1575 = *(i4*)(intptr_t)v1574;
	i8 v1576 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v1576)(v1575);

	i8 v1577 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1577)();

	i8 v1578 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1578)();

c02_012c:;

	i8 v1579 = (i8)(intptr_t)(ws+836);
	i4 v1580 = *(i4*)(intptr_t)v1579;
	i8 v1581 = (i8)(intptr_t)(ws+842);
	i2 v1582 = *(i2*)(intptr_t)v1581;
	i4 v1583 = v1582;
	i4 v1584 = v1580+v1583;
	i4 v1585 = v1584+(+3);
	i8 v1586 = (i8)(intptr_t)(ws+836);
	*(i4*)(intptr_t)v1586 = v1585;

	goto c02_012a;

c02_012b:;

endsub:;
	*p1351 = *(i8*)(intptr_t)(ws+824);
}
	void f22_MemZero(i8 /* size */, i8 /* ptr */);

// InitStreams workspace at ws+792 length ws+0
void f85_InitStreams(void) {

	i8 v1587 = (i8)(intptr_t)(ws+592);
	i8 v1588 = (i8)+128;
	i8 v1589 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v1589)(v1588, v1587);

endsub:;
}
const i1 c02_s0013[] = { 0x73,0x74,0x72,0x65,0x61,0x6d,0x20,0x49,0x44,0x20,0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f57_SimpleError(i8 /* s */);
	void f32_Alloc(i8* /* block */, i8 /* length */);

// SetStream workspace at ws+824 length ws+16
void f86_SetStream(i1 p1590 /* sid */) {
	*(i1*)(intptr_t)(ws+824) = p1590; /*sid */

	i8 v1591 = (i8)(intptr_t)(ws+824);
	i1 v1592 = *(i1*)(intptr_t)v1591;
	i1 v1593 = (i1)+8;
	if (v1592<v1593) goto c02_014e; else goto c02_014d;

c02_014d:;

	i8 v1594 = (i8)(intptr_t)c02_s0013;
	i8 v1595 = (i8)(intptr_t)(f57_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1595)(v1594);

c02_014e:;

c02_014a:;

	i8 v1596 = (i8)(intptr_t)(ws+592);
	i8 v1597 = (i8)(intptr_t)(ws+824);
	i1 v1598 = *(i1*)(intptr_t)v1597;
	i8 v1599 = v1598;
	i1 v1600 = (i1)+4;
	i8 v1601 = ((i8)v1599)<<v1600;
	i8 v1602 = v1596+v1601;
	i8 v1603 = (i8)(intptr_t)(ws+720);
	*(i8*)(intptr_t)v1603 = v1602;

	i8 v1604 = (i8)(intptr_t)(ws+720);
	i8 v1605 = *(i8*)(intptr_t)v1604;
	i8 v1606 = v1605+(+8);
	i8 v1607 = *(i8*)(intptr_t)v1606;
	i8 v1608 = (i8)+0;
	if (v1607==v1608) goto c02_0152; else goto c02_0153;

c02_0152:;

	i8 v1609 = (i8)+264;
	i8 v1610 = (i8)(intptr_t)(f32_Alloc);
	i8 v1611;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1610)(&v1611, v1609);
	i8 v1612 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v1612 = v1611;

	i8 v1613 = (i8)(intptr_t)(ws+832);
	i8 v1614 = *(i8*)(intptr_t)v1613;
	i8 v1615 = (i8)(intptr_t)(ws+720);
	i8 v1616 = *(i8*)(intptr_t)v1615;
	*(i8*)(intptr_t)v1616 = v1614;

	i8 v1617 = (i8)(intptr_t)(ws+832);
	i8 v1618 = *(i8*)(intptr_t)v1617;
	i8 v1619 = (i8)(intptr_t)(ws+720);
	i8 v1620 = *(i8*)(intptr_t)v1619;
	i8 v1621 = v1620+(+8);
	*(i8*)(intptr_t)v1621 = v1618;

c02_0153:;

c02_014f:;

endsub:;
}
	void f55_StartError(void);
const i1 c02_s0014[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f19_print_hex_i16(i2 /* value */);
	void f8_print_char(i1 /* c */);
const i1 c02_s0015[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0016[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s0017[] = { 0x77,0x68,0x69,0x63,0x68,0x20,0x69,0x73,0x20,0x61,0x6e,0x6f,0x6e,0x79,0x6d,0x6f,0x75,0x73,0 };
	void f11_print(i8 /* ptr */);
	void f56_EndError(void);

// CheckSubExists workspace at ws+872 length ws+8
void f87_CheckSubExists(i8 p1622 /* subr */) {
	*(i8*)(intptr_t)(ws+872) = p1622; /*subr */

	i8 v1623 = (i8)(intptr_t)(ws+872);
	i8 v1624 = *(i8*)(intptr_t)v1623;
	i8 v1625 = v1624+(+188);
	i1 v1626 = *(i1*)(intptr_t)v1625;
	i1 v1627 = v1626&(+2);
	i1 v1628 = (i1)+0;
	if (v1627==v1628) goto c02_0157; else goto c02_0158;

c02_0157:;

	i8 v1629 = (i8)(intptr_t)(f55_StartError);

	((void(*)(void))(intptr_t)v1629)();

	i8 v1630 = (i8)(intptr_t)c02_s0014;
	i8 v1631 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1631)(v1630);

	i8 v1632 = (i8)(intptr_t)(ws+872);
	i8 v1633 = *(i8*)(intptr_t)v1632;
	i8 v1634 = v1633+(+186);
	i2 v1635 = *(i2*)(intptr_t)v1634;
	i8 v1636 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v1636)(v1635);

	i1 v1637 = (i1)+32;
	i8 v1638 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v1638)(v1637);

	i8 v1639 = (i8)(intptr_t)(ws+872);
	i8 v1640 = *(i8*)(intptr_t)v1639;
	i8 v1641 = v1640+(+152);
	i8 v1642 = *(i8*)(intptr_t)v1641;
	i8 v1643 = (i8)+0;
	if (v1642==v1643) goto c02_015d; else goto c02_015c;

c02_015c:;

	i8 v1644 = (i8)(intptr_t)c02_s0015;
	i8 v1645 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1645)(v1644);

	i8 v1646 = (i8)(intptr_t)(ws+872);
	i8 v1647 = *(i8*)(intptr_t)v1646;
	i8 v1648 = v1647+(+152);
	i8 v1649 = *(i8*)(intptr_t)v1648;
	i8 v1650 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1650)(v1649);

	i8 v1651 = (i8)(intptr_t)c02_s0016;
	i8 v1652 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1652)(v1651);

	goto c02_0159;

c02_015d:;

	i8 v1653 = (i8)(intptr_t)c02_s0017;
	i8 v1654 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1654)(v1653);

c02_0159:;

	i8 v1655 = (i8)(intptr_t)(f56_EndError);

	((void(*)(void))(intptr_t)v1655)();

c02_0158:;

c02_0154:;

endsub:;
}
	void f59_E_b8(i1 /* c */);
	void f66_E_h8(i1 /* value */);
	void f59_E_b8(i1 /* c */);
	void f72_ArchEmitSubRef(i8 /* subr */);
	void f71_E_nl(void);
	void f59_E_b8(i1 /* c */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f82_Deref(i8* /* subout */, i8 /* subin */);
	void f87_CheckSubExists(i8 /* subr */);
	void f72_ArchEmitSubRef(i8 /* subr */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f82_Deref(i8* /* subout */, i8 /* subin */);
	void f87_CheckSubExists(i8 /* subr */);
	void f73_ArchEmitWSRef(i2 /* address */, i1 /* wid */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f82_Deref(i8* /* subout */, i8 /* subin */);
	void f87_CheckSubExists(i8 /* subr */);
	void f73_ArchEmitWSRef(i2 /* address */, i1 /* wid */);

// WriteCharacterFromStream workspace at ws+848 length ws+20
void f88_WriteCharacterFromStream(i1 p1660 /* c */) {
	*(i1*)(intptr_t)(ws+848) = p1660; /*c */

	i8 v1661 = (i8)(intptr_t)(ws+736);
	i1 v1662 = *(i1*)(intptr_t)v1661;
	i1 v1663 = (i1)+0;
	if (v1662==v1663) goto c02_0161; else goto c02_0162;

c02_0161:;

	i8 v1664 = (i8)(intptr_t)(ws+848);
	i1 v1665 = *(i1*)(intptr_t)v1664;

	if (v1665 != +3) goto c02_0164;

	i1 v1666 = (i1)+99;
	i8 v1667 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1667)(v1666);

	i8 v1668 = (i8)(intptr_t)(ws+48);
	i8 v1669 = *(i8*)(intptr_t)v1668;
	i8 v1670 = *(i8*)(intptr_t)v1669;
	i8 v1671 = v1670+(+680);
	i2 v1672 = *(i2*)(intptr_t)v1671;
	i1 v1673 = v1672;
	i8 v1674 = (i8)(intptr_t)(f66_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v1674)(v1673);

	i1 v1675 = (i1)+95;
	i8 v1676 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1676)(v1675);

	goto endsub;

c02_0164:;

	if (v1665 != +4) goto c02_0165;

	i8 v1677 = (i8)(intptr_t)(ws+48);
	i8 v1678 = *(i8*)(intptr_t)v1677;
	i8 v1679 = (i8)(intptr_t)(f72_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1679)(v1678);

	goto endsub;

c02_0165:;

	if (v1665 != +1) goto c02_0166;

	i1 v1680 = (i1)+3;
	i8 v1681 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1681 = v1680;

	goto c02_0163;

c02_0166:;

	if (v1665 != +2) goto c02_0167;

	i1 v1682 = (i1)+6;
	i8 v1683 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1683 = v1682;

	goto c02_0163;

c02_0167:;

	if (v1665 != +5) goto c02_0168;

	i1 v1684 = (i1)+4;
	i8 v1685 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1685 = v1684;

	goto c02_0163;

c02_0168:;

	if (v1665 != +10) goto c02_0169;

	i8 v1686 = (i8)(intptr_t)(f71_E_nl);

	((void(*)(void))(intptr_t)v1686)();

	goto endsub;

c02_0169:;

	i8 v1687 = (i8)(intptr_t)(ws+848);
	i1 v1688 = *(i1*)(intptr_t)v1687;
	i8 v1689 = (i8)(intptr_t)(f59_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1689)(v1688);

	goto endsub;

c02_0163:;


	i8 v1690 = (i8)(intptr_t)(ws+848);
	i1 v1691 = *(i1*)(intptr_t)v1690;
	i8 v1692 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v1692 = v1691;

	i1 v1693 = (i1)+1;
	i8 v1694 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1694 = v1693;

	goto c02_015e;

c02_0162:;

	i8 v1695 = (i8)(intptr_t)(ws+848);
	i1 v1696 = *(i1*)(intptr_t)v1695;
	i8 v1697 = (i8)(intptr_t)(ws+728);
	i8 v1698 = (i8)(intptr_t)(ws+737);
	i1 v1699 = *(i1*)(intptr_t)v1698;
	i8 v1700 = v1699;
	i8 v1701 = v1697+v1700;
	*(i1*)(intptr_t)v1701 = v1696;

	i8 v1702 = (i8)(intptr_t)(ws+737);
	i1 v1703 = *(i1*)(intptr_t)v1702;
	i1 v1704 = v1703+(+1);
	i8 v1705 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1705 = v1704;

	i8 v1706 = (i8)(intptr_t)(ws+737);
	i1 v1707 = *(i1*)(intptr_t)v1706;
	i8 v1708 = (i8)(intptr_t)(ws+736);
	i1 v1709 = *(i1*)(intptr_t)v1708;
	if (v1707==v1709) goto c02_016e; else goto c02_016d;

c02_016d:;

	goto endsub;

c02_016e:;

c02_016a:;

	i8 v1710 = (i8)(intptr_t)(ws+728);
	i1 v1711 = *(i1*)(intptr_t)v1710;

	if (v1711 != +1) goto c02_0170;

	i8 v1712 = (i8)(intptr_t)(ws+729);
	i1 v1713 = *(i1*)(intptr_t)v1712;
	i2 v1714 = v1713;
	i8 v1715 = (i8)(intptr_t)(ws+730);
	i1 v1716 = *(i1*)(intptr_t)v1715;
	i2 v1717 = v1716;
	i1 v1718 = (i1)+8;
	i2 v1719 = ((i2)v1717)<<v1718;
	i2 v1720 = v1714|v1719;
	i8 v1721 = (i8)(intptr_t)(ws+850);
	*(i2*)(intptr_t)v1721 = v1720;

	i8 v1722 = (i8)(intptr_t)(ws+48);
	i8 v1723 = *(i8*)(intptr_t)v1722;
	i8 v1724 = *(i8*)(intptr_t)v1723;
	i8 v1725 = (i8)(intptr_t)(ws+850);
	i2 v1726 = *(i2*)(intptr_t)v1725;
	i8 v1727 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v1728;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1727)(&v1728, v1726, v1724);
	i8 v1729 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1729 = v1728;

	i8 v1730 = (i8)(intptr_t)(ws+856);
	i8 v1731 = *(i8*)(intptr_t)v1730;
	i8 v1732 = (i8)(intptr_t)(f82_Deref);
	i8 v1733;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1732)(&v1733, v1731);
	i8 v1734 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1734 = v1733;

	i8 v1735 = (i8)(intptr_t)(ws+856);
	i8 v1736 = *(i8*)(intptr_t)v1735;
	i8 v1737 = (i8)(intptr_t)(f87_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v1737)(v1736);

	i8 v1738 = (i8)(intptr_t)(ws+856);
	i8 v1739 = *(i8*)(intptr_t)v1738;
	i8 v1740 = (i8)(intptr_t)(f72_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1740)(v1739);

	goto c02_016f;

c02_0170:;

	if (v1711 != +2) goto c02_0171;

	i8 v1741 = (i8)(intptr_t)(ws+729);
	i1 v1742 = *(i1*)(intptr_t)v1741;
	i2 v1743 = v1742;
	i8 v1744 = (i8)(intptr_t)(ws+730);
	i1 v1745 = *(i1*)(intptr_t)v1744;
	i2 v1746 = v1745;
	i1 v1747 = (i1)+8;
	i2 v1748 = ((i2)v1746)<<v1747;
	i2 v1749 = v1743|v1748;
	i8 v1750 = (i8)(intptr_t)(ws+850);
	*(i2*)(intptr_t)v1750 = v1749;

	i8 v1751 = (i8)(intptr_t)(ws+731);
	i1 v1752 = *(i1*)(intptr_t)v1751;
	i8 v1753 = (i8)(intptr_t)(ws+864);
	*(i1*)(intptr_t)v1753 = v1752;

	i8 v1754 = (i8)(intptr_t)(ws+732);
	i1 v1755 = *(i1*)(intptr_t)v1754;
	i2 v1756 = v1755;
	i8 v1757 = (i8)(intptr_t)(ws+733);
	i1 v1758 = *(i1*)(intptr_t)v1757;
	i2 v1759 = v1758;
	i1 v1760 = (i1)+8;
	i2 v1761 = ((i2)v1759)<<v1760;
	i2 v1762 = v1756|v1761;
	i8 v1763 = (i8)(intptr_t)(ws+866);
	*(i2*)(intptr_t)v1763 = v1762;

	i8 v1764 = (i8)(intptr_t)(ws+48);
	i8 v1765 = *(i8*)(intptr_t)v1764;
	i8 v1766 = *(i8*)(intptr_t)v1765;
	i8 v1767 = (i8)(intptr_t)(ws+850);
	i2 v1768 = *(i2*)(intptr_t)v1767;
	i8 v1769 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v1770;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1769)(&v1770, v1768, v1766);
	i8 v1771 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1771 = v1770;

	i8 v1772 = (i8)(intptr_t)(ws+856);
	i8 v1773 = *(i8*)(intptr_t)v1772;
	i8 v1774 = (i8)(intptr_t)(f82_Deref);
	i8 v1775;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1774)(&v1775, v1773);
	i8 v1776 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1776 = v1775;

	i8 v1777 = (i8)(intptr_t)(ws+856);
	i8 v1778 = *(i8*)(intptr_t)v1777;
	i8 v1779 = (i8)(intptr_t)(f87_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v1779)(v1778);

	i8 v1780 = (i8)(intptr_t)(ws+864);
	i1 v1781 = *(i1*)(intptr_t)v1780;
	i8 v1782 = (i8)(intptr_t)(ws+856);
	i8 v1783 = *(i8*)(intptr_t)v1782;
	i8 v1784 = v1783+(+176);
	i8 v1785 = (i8)(intptr_t)(ws+864);
	i1 v1786 = *(i1*)(intptr_t)v1785;
	i8 v1787 = v1786;
	i1 v1788 = (i1)+1;
	i8 v1789 = ((i8)v1787)<<v1788;
	i8 v1790 = v1784+v1789;
	i2 v1791 = *(i2*)(intptr_t)v1790;
	i8 v1792 = (i8)(intptr_t)(ws+866);
	i2 v1793 = *(i2*)(intptr_t)v1792;
	i2 v1794 = v1791+v1793;
	i8 v1795 = (i8)(intptr_t)(f73_ArchEmitWSRef);

	((void(*)(i2 /* address */, i1 /* wid */))(intptr_t)v1795)(v1794, v1781);

	goto c02_016f;

c02_0171:;

	if (v1711 != +5) goto c02_0172;

	i8 v1796 = (i8)(intptr_t)(ws+729);
	i1 v1797 = *(i1*)(intptr_t)v1796;
	i2 v1798 = v1797;
	i8 v1799 = (i8)(intptr_t)(ws+730);
	i1 v1800 = *(i1*)(intptr_t)v1799;
	i2 v1801 = v1800;
	i1 v1802 = (i1)+8;
	i2 v1803 = ((i2)v1801)<<v1802;
	i2 v1804 = v1798|v1803;
	i8 v1805 = (i8)(intptr_t)(ws+850);
	*(i2*)(intptr_t)v1805 = v1804;

	i8 v1806 = (i8)(intptr_t)(ws+731);
	i1 v1807 = *(i1*)(intptr_t)v1806;
	i8 v1808 = (i8)(intptr_t)(ws+864);
	*(i1*)(intptr_t)v1808 = v1807;

	i8 v1809 = (i8)(intptr_t)(ws+48);
	i8 v1810 = *(i8*)(intptr_t)v1809;
	i8 v1811 = *(i8*)(intptr_t)v1810;
	i8 v1812 = (i8)(intptr_t)(ws+850);
	i2 v1813 = *(i2*)(intptr_t)v1812;
	i8 v1814 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v1815;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1814)(&v1815, v1813, v1811);
	i8 v1816 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1816 = v1815;

	i8 v1817 = (i8)(intptr_t)(ws+856);
	i8 v1818 = *(i8*)(intptr_t)v1817;
	i8 v1819 = (i8)(intptr_t)(f82_Deref);
	i8 v1820;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1819)(&v1820, v1818);
	i8 v1821 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1821 = v1820;

	i8 v1822 = (i8)(intptr_t)(ws+856);
	i8 v1823 = *(i8*)(intptr_t)v1822;
	i8 v1824 = (i8)(intptr_t)(f87_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v1824)(v1823);

	i8 v1825 = (i8)(intptr_t)(ws+864);
	i1 v1826 = *(i1*)(intptr_t)v1825;
	i8 v1827 = (i8)(intptr_t)(ws+856);
	i8 v1828 = *(i8*)(intptr_t)v1827;
	i8 v1829 = v1828+(+168);
	i8 v1830 = (i8)(intptr_t)(ws+864);
	i1 v1831 = *(i1*)(intptr_t)v1830;
	i8 v1832 = v1831;
	i1 v1833 = (i1)+1;
	i8 v1834 = ((i8)v1832)<<v1833;
	i8 v1835 = v1829+v1834;
	i2 v1836 = *(i2*)(intptr_t)v1835;
	i8 v1837 = (i8)(intptr_t)(f73_ArchEmitWSRef);

	((void(*)(i2 /* address */, i1 /* wid */))(intptr_t)v1837)(v1836, v1826);

c02_0172:;

c02_016f:;


	i1 v1838 = (i1)+0;
	i8 v1839 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1839 = v1838;

c02_015e:;

endsub:;
}
	void f88_WriteCharacterFromStream(i1 /* c */);
	void f33_Free(i8 /* block */);

// FlushStream workspace at ws+824 length ws+24
void f89_FlushStream(void) {

	i8 v1840 = (i8)(intptr_t)(ws+720);
	i8 v1841 = *(i8*)(intptr_t)v1840;
	i8 v1842 = *(i8*)(intptr_t)v1841;
	i8 v1843 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v1843 = v1842;

c02_0175:;

	i8 v1844 = (i8)(intptr_t)(ws+824);
	i8 v1845 = *(i8*)(intptr_t)v1844;
	i8 v1846 = (i8)+0;
	if (v1845==v1846) goto c02_0178; else goto c02_0177;

c02_0177:;

	i1 v1847 = (i1)+0;
	i8 v1848 = (i8)(intptr_t)(ws+832);
	*(i1*)(intptr_t)v1848 = v1847;

c02_017b:;

	i8 v1849 = (i8)(intptr_t)(ws+832);
	i1 v1850 = *(i1*)(intptr_t)v1849;
	i8 v1851 = (i8)(intptr_t)(ws+824);
	i8 v1852 = *(i8*)(intptr_t)v1851;
	i8 v1853 = v1852+(+255);
	i1 v1854 = *(i1*)(intptr_t)v1853;
	if (v1850==v1854) goto c02_017e; else goto c02_017d;

c02_017d:;

	i8 v1855 = (i8)(intptr_t)(ws+824);
	i8 v1856 = *(i8*)(intptr_t)v1855;
	i8 v1857 = (i8)(intptr_t)(ws+832);
	i1 v1858 = *(i1*)(intptr_t)v1857;
	i8 v1859 = v1858;
	i8 v1860 = v1856+v1859;
	i1 v1861 = *(i1*)(intptr_t)v1860;
	i8 v1862 = (i8)(intptr_t)(f88_WriteCharacterFromStream);

	((void(*)(i1 /* c */))(intptr_t)v1862)(v1861);

	i8 v1863 = (i8)(intptr_t)(ws+832);
	i1 v1864 = *(i1*)(intptr_t)v1863;
	i1 v1865 = v1864+(+1);
	i8 v1866 = (i8)(intptr_t)(ws+832);
	*(i1*)(intptr_t)v1866 = v1865;

	goto c02_017b;

c02_017e:;

	i8 v1867 = (i8)(intptr_t)(ws+824);
	i8 v1868 = *(i8*)(intptr_t)v1867;
	i8 v1869 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v1869 = v1868;

	i8 v1870 = (i8)(intptr_t)(ws+824);
	i8 v1871 = *(i8*)(intptr_t)v1870;
	i8 v1872 = v1871+(+256);
	i8 v1873 = *(i8*)(intptr_t)v1872;
	i8 v1874 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v1874 = v1873;

	i8 v1875 = (i8)(intptr_t)(ws+840);
	i8 v1876 = *(i8*)(intptr_t)v1875;
	i8 v1877 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1877)(v1876);

	goto c02_0175;

c02_0178:;

	i8 v1878 = (i8)+0;
	i8 v1879 = (i8)(intptr_t)(ws+720);
	i8 v1880 = *(i8*)(intptr_t)v1879;
	*(i8*)(intptr_t)v1880 = v1878;

	i8 v1881 = (i8)+0;
	i8 v1882 = (i8)(intptr_t)(ws+720);
	i8 v1883 = *(i8*)(intptr_t)v1882;
	i8 v1884 = v1883+(+8);
	*(i8*)(intptr_t)v1884 = v1881;

endsub:;
}
	void f32_Alloc(i8* /* block */, i8 /* length */);

// WriteStream workspace at ws+824 length ws+16
void f90_WriteStream(i1 p1885 /* c */) {
	*(i1*)(intptr_t)(ws+824) = p1885; /*c */

	i8 v1886 = (i8)(intptr_t)(ws+720);
	i8 v1887 = *(i8*)(intptr_t)v1886;
	i8 v1888 = v1887+(+8);
	i8 v1889 = *(i8*)(intptr_t)v1888;
	i8 v1890 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v1890 = v1889;

	i8 v1891 = (i8)(intptr_t)(ws+832);
	i8 v1892 = *(i8*)(intptr_t)v1891;
	i8 v1893 = v1892+(+255);
	i1 v1894 = *(i1*)(intptr_t)v1893;
	i1 v1895 = (i1)+255;
	if (v1894==v1895) goto c02_0182; else goto c02_0183;

c02_0182:;

	i8 v1896 = (i8)+264;
	i8 v1897 = (i8)(intptr_t)(f32_Alloc);
	i8 v1898;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1897)(&v1898, v1896);
	i8 v1899 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v1899 = v1898;

	i8 v1900 = (i8)(intptr_t)(ws+832);
	i8 v1901 = *(i8*)(intptr_t)v1900;
	i8 v1902 = (i8)(intptr_t)(ws+720);
	i8 v1903 = *(i8*)(intptr_t)v1902;
	i8 v1904 = v1903+(+8);
	i8 v1905 = *(i8*)(intptr_t)v1904;
	i8 v1906 = v1905+(+256);
	*(i8*)(intptr_t)v1906 = v1901;

	i8 v1907 = (i8)(intptr_t)(ws+832);
	i8 v1908 = *(i8*)(intptr_t)v1907;
	i8 v1909 = (i8)(intptr_t)(ws+720);
	i8 v1910 = *(i8*)(intptr_t)v1909;
	i8 v1911 = v1910+(+8);
	*(i8*)(intptr_t)v1911 = v1908;

c02_0183:;

c02_017f:;

	i8 v1912 = (i8)(intptr_t)(ws+824);
	i1 v1913 = *(i1*)(intptr_t)v1912;
	i8 v1914 = (i8)(intptr_t)(ws+832);
	i8 v1915 = *(i8*)(intptr_t)v1914;
	i8 v1916 = (i8)(intptr_t)(ws+832);
	i8 v1917 = *(i8*)(intptr_t)v1916;
	i8 v1918 = v1917+(+255);
	i1 v1919 = *(i1*)(intptr_t)v1918;
	i8 v1920 = v1919;
	i8 v1921 = v1915+v1920;
	*(i1*)(intptr_t)v1921 = v1913;

	i8 v1922 = (i8)(intptr_t)(ws+832);
	i8 v1923 = *(i8*)(intptr_t)v1922;
	i8 v1924 = v1923+(+255);
	i1 v1925 = *(i1*)(intptr_t)v1924;
	i1 v1926 = v1925+(+1);
	i8 v1927 = (i8)(intptr_t)(ws+832);
	i8 v1928 = *(i8*)(intptr_t)v1927;
	i8 v1929 = v1928+(+255);
	*(i1*)(intptr_t)v1929 = v1926;

endsub:;
}
const i1 c02_s0018[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// MalformedError workspace at ws+832 length ws+8
void f92_MalformedError(i8 p1931 /* s */) {
	*(i8*)(intptr_t)(ws+832) = p1931; /*s */

	i8 v1932 = (i8)(intptr_t)c02_s0018;
	i8 v1933 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1933)(v1932);

	i8 v1934 = (i8)(intptr_t)(ws+832);
	i8 v1935 = *(i8*)(intptr_t)v1934;
	i8 v1936 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1936)(v1935);

	i8 v1937 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1937)();

	i8 v1938 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1938)();

endsub:;
}
const i1 c02_s0019[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0x65,0x6e,0x64,0x20,0x6f,0x66,0x20,0x63,0x68,0x75,0x6e,0x6b,0 };
	void f92_MalformedError(i8 /* s */);

// UnexpectedEndOfChunk workspace at ws+832 length ws+0
void f93_UnexpectedEndOfChunk(void) {

	i8 v1939 = (i8)(intptr_t)c02_s0019;
	i8 v1940 = (i8)(intptr_t)(f92_MalformedError);

	((void(*)(i8 /* s */))(intptr_t)v1940)(v1939);

endsub:;
}
	void f93_UnexpectedEndOfChunk(void);
	void f76_read_bin1(i1* /* c */, i8 /* fcb */);

// ReadB1 workspace at ws+824 length ws+1
void f94_ReadB1(i1* p1941 /* result */) {

	i8 v1942 = (i8)(intptr_t)(ws+812);
	i2 v1943 = *(i2*)(intptr_t)v1942;
	i2 v1944 = (i2)+1;
	if (v1943<v1944) goto c02_0187; else goto c02_0188;

c02_0187:;

	i8 v1945 = (i8)(intptr_t)(f93_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v1945)();

c02_0188:;

c02_0184:;

	i8 v1946 = (i8)(intptr_t)(ws+812);
	i2 v1947 = *(i2*)(intptr_t)v1946;
	i2 v1948 = v1947+(-1);
	i8 v1949 = (i8)(intptr_t)(ws+812);
	*(i2*)(intptr_t)v1949 = v1948;

	i8 v1950 = (i8)(intptr_t)(ws+800);
	i8 v1951 = *(i8*)(intptr_t)v1950;
	i8 v1952 = (i8)(intptr_t)(f76_read_bin1);
	i1 v1953;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1952)(&v1953, v1951);
	i8 v1954 = (i8)(intptr_t)(ws+824);
	*(i1*)(intptr_t)v1954 = v1953;

endsub:;
	*p1941 = *(i1*)(intptr_t)(ws+824);
}
	void f93_UnexpectedEndOfChunk(void);
	void f77_read_bin2(i2* /* val */, i8 /* fcb */);

// ReadB2 workspace at ws+824 length ws+2
void f95_ReadB2(i2* p1955 /* result */) {

	i8 v1956 = (i8)(intptr_t)(ws+812);
	i2 v1957 = *(i2*)(intptr_t)v1956;
	i2 v1958 = (i2)+2;
	if (v1957<v1958) goto c02_018c; else goto c02_018d;

c02_018c:;

	i8 v1959 = (i8)(intptr_t)(f93_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v1959)();

c02_018d:;

c02_0189:;

	i8 v1960 = (i8)(intptr_t)(ws+812);
	i2 v1961 = *(i2*)(intptr_t)v1960;
	i2 v1962 = v1961+(-2);
	i8 v1963 = (i8)(intptr_t)(ws+812);
	*(i2*)(intptr_t)v1963 = v1962;

	i8 v1964 = (i8)(intptr_t)(ws+800);
	i8 v1965 = *(i8*)(intptr_t)v1964;
	i8 v1966 = (i8)(intptr_t)(f77_read_bin2);
	i2 v1967;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1966)(&v1967, v1965);
	i8 v1968 = (i8)(intptr_t)(ws+824);
	*(i2*)(intptr_t)v1968 = v1967;

endsub:;
	*p1955 = *(i2*)(intptr_t)(ws+824);
}
	void f94_ReadB1(i1* /* result */);
	void f90_WriteStream(i1 /* c */);

// CopySourceChunk workspace at ws+824 length ws+0
void f96_CopySourceChunk(void) {

c02_0190:;

	i8 v1969 = (i8)(intptr_t)(ws+812);
	i2 v1970 = *(i2*)(intptr_t)v1969;
	i2 v1971 = (i2)+0;
	if (v1970==v1971) goto c02_0193; else goto c02_0192;

c02_0192:;

	i8 v1972 = (i8)(intptr_t)(f94_ReadB1);
	i1 v1973;

	((void(*)(i1* /* result */))(intptr_t)v1972)(&v1973);
	i8 v1974 = (i8)(intptr_t)(ws+810);
	*(i1*)(intptr_t)v1974 = v1973;

	i8 v1975 = (i8)(intptr_t)(ws+810);
	i1 v1976 = *(i1*)(intptr_t)v1975;
	i8 v1977 = (i8)(intptr_t)(f90_WriteStream);

	((void(*)(i1 /* c */))(intptr_t)v1977)(v1976);

	goto c02_0190;

c02_0193:;

endsub:;
}
	void f46_FCBSeek(i4 /* pos */, i8 /* fcb */);
	void f94_ReadB1(i1* /* result */);
	void f95_ReadB2(i2* /* result */);
	void f94_ReadB1(i1* /* result */);
	void f95_ReadB2(i2* /* result */);
	void f81_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f82_Deref(i8* /* subout */, i8 /* subin */);
	void f86_SetStream(i1 /* sid */);
	void f96_CopySourceChunk(void);
	void f89_FlushStream(void);

// WriteSubroutinesToOutputFile workspace at ws+800 length ws+20
void f91_WriteSubroutinesToOutputFile(i8 p1930 /* coo */) {
	*(i8*)(intptr_t)(ws+800) = p1930; /*coo */






	i4 v1978 = (i4)+0;
	i8 v1979 = (i8)(intptr_t)(ws+816);
	*(i4*)(intptr_t)v1979 = v1978;

c02_0194:;

	i2 v1980 = (i2)+255;
	i8 v1981 = (i8)(intptr_t)(ws+812);
	*(i2*)(intptr_t)v1981 = v1980;

	i8 v1982 = (i8)(intptr_t)(ws+800);
	i8 v1983 = *(i8*)(intptr_t)v1982;
	i8 v1984 = (i8)(intptr_t)(ws+816);
	i4 v1985 = *(i4*)(intptr_t)v1984;
	i8 v1986 = (i8)(intptr_t)(f46_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1986)(v1985, v1983);

	i8 v1987 = (i8)(intptr_t)(f94_ReadB1);
	i1 v1988;

	((void(*)(i1* /* result */))(intptr_t)v1987)(&v1988);
	i8 v1989 = (i8)(intptr_t)(ws+810);
	*(i1*)(intptr_t)v1989 = v1988;

	i8 v1990 = (i8)(intptr_t)(f95_ReadB2);
	i2 v1991;

	((void(*)(i2* /* result */))(intptr_t)v1990)(&v1991);
	i8 v1992 = (i8)(intptr_t)(ws+812);
	*(i2*)(intptr_t)v1992 = v1991;

	i8 v1993 = (i8)(intptr_t)(ws+816);
	i4 v1994 = *(i4*)(intptr_t)v1993;
	i8 v1995 = (i8)(intptr_t)(ws+812);
	i2 v1996 = *(i2*)(intptr_t)v1995;
	i4 v1997 = v1996;
	i4 v1998 = v1994+v1997;
	i4 v1999 = v1998+(+3);
	i8 v2000 = (i8)(intptr_t)(ws+816);
	*(i4*)(intptr_t)v2000 = v1999;

	i8 v2001 = (i8)(intptr_t)(ws+810);
	i1 v2002 = *(i1*)(intptr_t)v2001;
	i1 v2003 = (i1)+69;
	if (v2002==v2003) goto c02_0199; else goto c02_019a;

c02_0199:;

	goto c02_0195;

c02_019a:;

	i8 v2004 = (i8)(intptr_t)(ws+810);
	i1 v2005 = *(i1*)(intptr_t)v2004;
	i1 v2006 = (i1)+70;
	if (v2005==v2006) goto c02_019d; else goto c02_019e;

c02_019d:;

	i8 v2007 = (i8)(intptr_t)(f94_ReadB1);
	i1 v2008;

	((void(*)(i1* /* result */))(intptr_t)v2007)(&v2008);
	i8 v2009 = (i8)(intptr_t)(ws+814);
	*(i1*)(intptr_t)v2009 = v2008;

	i8 v2010 = (i8)(intptr_t)(f95_ReadB2);
	i2 v2011;

	((void(*)(i2* /* result */))(intptr_t)v2010)(&v2011);
	i8 v2012 = (i8)(intptr_t)(ws+808);
	*(i2*)(intptr_t)v2012 = v2011;

	i8 v2013 = (i8)(intptr_t)(ws+800);
	i8 v2014 = *(i8*)(intptr_t)v2013;
	i8 v2015 = (i8)(intptr_t)(ws+808);
	i2 v2016 = *(i2*)(intptr_t)v2015;
	i8 v2017 = (i8)(intptr_t)(f81_FindOrCreateSub);
	i8 v2018;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v2017)(&v2018, v2016, v2014);
	i8 v2019 = (i8)(intptr_t)(ws+48);
	*(i8*)(intptr_t)v2019 = v2018;

	i8 v2020 = (i8)(intptr_t)(ws+48);
	i8 v2021 = *(i8*)(intptr_t)v2020;
	i8 v2022 = (i8)(intptr_t)(f82_Deref);
	i8 v2023;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2022)(&v2023, v2021);
	i8 v2024 = (i8)(intptr_t)(ws+48);
	*(i8*)(intptr_t)v2024 = v2023;

	i8 v2025 = (i8)(intptr_t)(ws+48);
	i8 v2026 = *(i8*)(intptr_t)v2025;
	i8 v2027 = v2026+(+188);
	i1 v2028 = *(i1*)(intptr_t)v2027;
	i1 v2029 = v2028&(+1);
	i1 v2030 = (i1)+0;
	if (v2029==v2030) goto c02_01a3; else goto c02_01a2;

c02_01a2:;

	i8 v2031 = (i8)(intptr_t)(ws+814);
	i1 v2032 = *(i1*)(intptr_t)v2031;
	i1 v2033 = v2032&(+127);
	i8 v2034 = (i8)(intptr_t)(f86_SetStream);

	((void(*)(i1 /* sid */))(intptr_t)v2034)(v2033);

	i8 v2035 = (i8)(intptr_t)(f96_CopySourceChunk);

	((void(*)(void))(intptr_t)v2035)();

	i8 v2036 = (i8)(intptr_t)(ws+814);
	i1 v2037 = *(i1*)(intptr_t)v2036;
	i1 v2038 = v2037&(+128);
	i1 v2039 = (i1)+0;
	if (v2038==v2039) goto c02_01a8; else goto c02_01a7;

c02_01a7:;

	i8 v2040 = (i8)(intptr_t)(f89_FlushStream);

	((void(*)(void))(intptr_t)v2040)();

c02_01a8:;

c02_01a4:;

c02_01a3:;

c02_019f:;

c02_019e:;

c02_0196:;

	goto c02_0194;

c02_0195:;

endsub:;
}
const i1 c02_s001a[] = { 0x43,0x6f,0x70,0x79,0x69,0x6e,0x67,0x20,0x66,0x72,0x6f,0x6d,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f91_WriteSubroutinesToOutputFile(i8 /* coo */);

// WriteAllSubroutinesToOutputFile workspace at ws+792 length ws+8
void f97_WriteAllSubroutinesToOutputFile(i8 p2041 /* coos */) {
	*(i8*)(intptr_t)(ws+792) = p2041; /*coos */

c02_01ab:;

	i8 v2042 = (i8)(intptr_t)(ws+792);
	i8 v2043 = *(i8*)(intptr_t)v2042;
	i8 v2044 = (i8)+0;
	if (v2043==v2044) goto c02_01ae; else goto c02_01ad;

c02_01ad:;

	i8 v2045 = (i8)(intptr_t)c02_s001a;
	i8 v2046 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2046)(v2045);

	i8 v2047 = (i8)(intptr_t)(ws+792);
	i8 v2048 = *(i8*)(intptr_t)v2047;
	i8 v2049 = v2048+(+528);
	i8 v2050 = *(i8*)(intptr_t)v2049;
	i8 v2051 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2051)(v2050);

	i8 v2052 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v2052)();

	i8 v2053 = (i8)(intptr_t)(ws+792);
	i8 v2054 = *(i8*)(intptr_t)v2053;
	i8 v2055 = (i8)(intptr_t)(f91_WriteSubroutinesToOutputFile);

	((void(*)(i8 /* coo */))(intptr_t)v2055)(v2054);

	i8 v2056 = (i8)(intptr_t)(ws+792);
	i8 v2057 = *(i8*)(intptr_t)v2056;
	i8 v2058 = v2057+(+672);
	i8 v2059 = *(i8*)(intptr_t)v2058;
	i8 v2060 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2060 = v2059;

	goto c02_01ab;

c02_01ae:;

endsub:;
}
const i1 c02_s001b[] = { 0x63,0x6f,0x6e,0x66,0x6c,0x69,0x63,0x74,0x69,0x6e,0x67,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x73,0 };
	void f57_SimpleError(i8 /* s */);
const i1 c02_s001c[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s001d[] = { 0x27,0x20,0x75,0x6e,0x72,0x65,0x73,0x6f,0x6c,0x76,0x65,0x64,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s001e[] = { 0x61,0x62,0x6f,0x72,0x74,0x69,0x6e,0x67,0 };
	void f57_SimpleError(i8 /* s */);

// ResolveExternals workspace at ws+792 length ws+24
void f98_ResolveExternals(void) {

	i1 v2061 = (i1)+0;
	i8 v2062 = (i8)(intptr_t)(ws+800);
	*(i1*)(intptr_t)v2062 = v2061;

	i8 v2063 = (i8)(intptr_t)(ws+32);
	i8 v2064 = *(i8*)(intptr_t)v2063;
	i8 v2065 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2065 = v2064;

c02_01b1:;

	i8 v2066 = (i8)(intptr_t)(ws+808);
	i8 v2067 = *(i8*)(intptr_t)v2066;
	i8 v2068 = (i8)+0;
	if (v2067==v2068) goto c02_01b4; else goto c02_01b3;

c02_01b3:;

	i8 v2069 = (i8)(intptr_t)(ws+808);
	i8 v2070 = *(i8*)(intptr_t)v2069;
	i8 v2071 = v2070+(+188);
	i1 v2072 = *(i1*)(intptr_t)v2071;
	i1 v2073 = v2072&(+2);
	i1 v2074 = (i1)+0;
	if (v2073==v2074) goto c02_01b9; else goto c02_01b8;

c02_01b8:;

	i8 v2075 = (i8)(intptr_t)(ws+808);
	i8 v2076 = *(i8*)(intptr_t)v2075;
	i8 v2077 = v2076+(+160);
	i8 v2078 = *(i8*)(intptr_t)v2077;
	i8 v2079 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2079 = v2078;

	i8 v2080 = (i8)(intptr_t)(ws+792);
	i8 v2081 = *(i8*)(intptr_t)v2080;
	i8 v2082 = (i8)+0;
	if (v2081==v2082) goto c02_01be; else goto c02_01bd;

c02_01bd:;

	i8 v2083 = (i8)(intptr_t)(ws+792);
	i8 v2084 = *(i8*)(intptr_t)v2083;
	i8 v2085 = v2084+(+16);
	i8 v2086 = *(i8*)(intptr_t)v2085;
	i8 v2087 = (i8)+0;
	if (v2086==v2087) goto c02_01c5; else goto c02_01c6;

c02_01c6:;

	i8 v2088 = (i8)(intptr_t)(ws+792);
	i8 v2089 = *(i8*)(intptr_t)v2088;
	i8 v2090 = v2089+(+16);
	i8 v2091 = *(i8*)(intptr_t)v2090;
	i8 v2092 = (i8)(intptr_t)(ws+808);
	i8 v2093 = *(i8*)(intptr_t)v2092;
	if (v2091==v2093) goto c02_01c5; else goto c02_01c4;

c02_01c4:;

	i8 v2094 = (i8)(intptr_t)c02_s001b;
	i8 v2095 = (i8)(intptr_t)(f57_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2095)(v2094);

c02_01c5:;

c02_01bf:;

	i8 v2096 = (i8)(intptr_t)(ws+808);
	i8 v2097 = *(i8*)(intptr_t)v2096;
	i8 v2098 = (i8)(intptr_t)(ws+792);
	i8 v2099 = *(i8*)(intptr_t)v2098;
	i8 v2100 = v2099+(+16);
	*(i8*)(intptr_t)v2100 = v2097;

c02_01be:;

c02_01ba:;

c02_01b9:;

c02_01b5:;

	i8 v2101 = (i8)(intptr_t)(ws+808);
	i8 v2102 = *(i8*)(intptr_t)v2101;
	i8 v2103 = v2102+(+8);
	i8 v2104 = *(i8*)(intptr_t)v2103;
	i8 v2105 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2105 = v2104;

	goto c02_01b1;

c02_01b4:;

	i8 v2106 = (i8)(intptr_t)(ws+32);
	i8 v2107 = *(i8*)(intptr_t)v2106;
	i8 v2108 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2108 = v2107;

c02_01c9:;

	i8 v2109 = (i8)(intptr_t)(ws+808);
	i8 v2110 = *(i8*)(intptr_t)v2109;
	i8 v2111 = (i8)+0;
	if (v2110==v2111) goto c02_01cc; else goto c02_01cb;

c02_01cb:;

	i8 v2112 = (i8)(intptr_t)(ws+808);
	i8 v2113 = *(i8*)(intptr_t)v2112;
	i8 v2114 = v2113+(+160);
	i8 v2115 = *(i8*)(intptr_t)v2114;
	i8 v2116 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2116 = v2115;

	i8 v2117 = (i8)(intptr_t)(ws+792);
	i8 v2118 = *(i8*)(intptr_t)v2117;
	i8 v2119 = (i8)+0;
	if (v2118==v2119) goto c02_01d3; else goto c02_01d4;

c02_01d4:;

	i8 v2120 = (i8)(intptr_t)(ws+792);
	i8 v2121 = *(i8*)(intptr_t)v2120;
	i8 v2122 = v2121+(+16);
	i8 v2123 = *(i8*)(intptr_t)v2122;
	i8 v2124 = (i8)+0;
	if (v2123==v2124) goto c02_01d2; else goto c02_01d3;

c02_01d2:;

	i8 v2125 = (i8)(intptr_t)c02_s001c;
	i8 v2126 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2126)(v2125);

	i8 v2127 = (i8)(intptr_t)(ws+792);
	i8 v2128 = *(i8*)(intptr_t)v2127;
	i8 v2129 = v2128+(+8);
	i8 v2130 = *(i8*)(intptr_t)v2129;
	i8 v2131 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2131)(v2130);

	i8 v2132 = (i8)(intptr_t)c02_s001d;
	i8 v2133 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2133)(v2132);

	i1 v2134 = (i1)+1;
	i8 v2135 = (i8)(intptr_t)(ws+800);
	*(i1*)(intptr_t)v2135 = v2134;

c02_01d3:;

c02_01cd:;

	i8 v2136 = (i8)(intptr_t)(ws+808);
	i8 v2137 = *(i8*)(intptr_t)v2136;
	i8 v2138 = v2137+(+8);
	i8 v2139 = *(i8*)(intptr_t)v2138;
	i8 v2140 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2140 = v2139;

	goto c02_01c9;

c02_01cc:;

	i8 v2141 = (i8)(intptr_t)(ws+800);
	i1 v2142 = *(i1*)(intptr_t)v2141;
	i1 v2143 = (i1)+0;
	if (v2142==v2143) goto c02_01d9; else goto c02_01d8;

c02_01d8:;

	i8 v2144 = (i8)(intptr_t)c02_s001e;
	i8 v2145 = (i8)(intptr_t)(f57_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2145)(v2144);

c02_01d9:;

c02_01d5:;

endsub:;
}
const i1 c02_s001f[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x64,0x65,0x70,0x65,0x6e,0x64,0x65,0x6e,0x63,0x79,0x20,0x67,0x72,0x61,0x70,0x68,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// push workspace at ws+3248 length ws+10
void f100_push(i8 p2166 /* subr */) {
	*(i8*)(intptr_t)(ws+3248) = p2166; /*subr */

	i8 v2167 = (i8)(intptr_t)(ws+3200);
	i2 v2168 = *(i2*)(intptr_t)v2167;
	i8 v2169 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v2169 = v2168;

c02_01e2:;

	i8 v2170 = (i8)(intptr_t)(ws+3256);
	i2 v2171 = *(i2*)(intptr_t)v2170;
	i2 v2172 = (i2)+0;
	if (v2171==v2172) goto c02_01e5; else goto c02_01e4;

c02_01e4:;

	i8 v2173 = (i8)(intptr_t)(ws+3256);
	i2 v2174 = *(i2*)(intptr_t)v2173;
	i2 v2175 = v2174+(-1);
	i8 v2176 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v2176 = v2175;

	i8 v2177 = (i8)(intptr_t)(ws+800);
	i8 v2178 = (i8)(intptr_t)(ws+3256);
	i2 v2179 = *(i2*)(intptr_t)v2178;
	i8 v2180 = v2179;
	i1 v2181 = (i1)+3;
	i8 v2182 = ((i8)v2180)<<v2181;
	i8 v2183 = v2177+v2182;
	i8 v2184 = *(i8*)(intptr_t)v2183;
	i8 v2185 = (i8)(intptr_t)(ws+3248);
	i8 v2186 = *(i8*)(intptr_t)v2185;
	if (v2184==v2186) goto c02_01e9; else goto c02_01ea;

c02_01e9:;

	goto endsub;

c02_01ea:;

c02_01e6:;

	goto c02_01e2;

c02_01e5:;

	i8 v2187 = (i8)(intptr_t)(ws+3200);
	i2 v2188 = *(i2*)(intptr_t)v2187;
	i2 v2189 = (i2)+300;
	if (v2188==v2189) goto c02_01ee; else goto c02_01ef;

c02_01ee:;

	i8 v2190 = (i8)(intptr_t)c02_s001f;
	i8 v2191 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2191)(v2190);

	i8 v2192 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v2192)();

c02_01ef:;

c02_01eb:;

	i8 v2193 = (i8)(intptr_t)(ws+3248);
	i8 v2194 = *(i8*)(intptr_t)v2193;
	i8 v2195 = (i8)(intptr_t)(ws+800);
	i8 v2196 = (i8)(intptr_t)(ws+3200);
	i2 v2197 = *(i2*)(intptr_t)v2196;
	i8 v2198 = v2197;
	i1 v2199 = (i1)+3;
	i8 v2200 = ((i8)v2198)<<v2199;
	i8 v2201 = v2195+v2200;
	*(i8*)(intptr_t)v2201 = v2194;

	i8 v2202 = (i8)(intptr_t)(ws+3200);
	i2 v2203 = *(i2*)(intptr_t)v2202;
	i2 v2204 = v2203+(+1);
	i8 v2205 = (i8)(intptr_t)(ws+3200);
	*(i2*)(intptr_t)v2205 = v2204;

endsub:;
}
	void f100_push(i8 /* subr */);
	void f70_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f82_Deref(i8* /* subout */, i8 /* subin */);
	void f100_push(i8 /* subr */);
	void f100_push(i8 /* subr */);
const i1 c02_s0020[] = { 0x57,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x69,0x7a,0x65,0x73,0x3a,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s0021[] = { 0x20,0x20,0x23,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
const i1 c02_s0022[] = { 0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0023[] = { 0x20,0x62,0x79,0x74,0x65,0x73,0x0a,0 };
	void f11_print(i8 /* ptr */);

// PlaceSubroutines workspace at ws+792 length ws+2452
void f99_PlaceSubroutines(i8 p2146 /* subroutine */) {
	*(i8*)(intptr_t)(ws+792) = p2146; /*subroutine */

	i2 v2147 = (i2)+0;
	i8 v2148 = (i8)(intptr_t)(ws+3200);
	*(i2*)(intptr_t)v2148 = v2147;

	i1 v2149 = (i1)+0;
	i8 v2150 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2150 = v2149;

c02_01dc:;

	i8 v2151 = (i8)(intptr_t)(ws+3202);
	i1 v2152 = *(i1*)(intptr_t)v2151;
	i1 v2153 = (i1)+4;
	if (v2152==v2153) goto c02_01df; else goto c02_01de;

c02_01de:;

	i2 v2154 = (i2)+0;
	i8 v2155 = (i8)(intptr_t)(ws+580);
	i8 v2156 = (i8)(intptr_t)(ws+3202);
	i1 v2157 = *(i1*)(intptr_t)v2156;
	i8 v2158 = v2157;
	i1 v2159 = (i1)+1;
	i8 v2160 = ((i8)v2158)<<v2159;
	i8 v2161 = v2155+v2160;
	*(i2*)(intptr_t)v2161 = v2154;

	i8 v2162 = (i8)(intptr_t)(ws+3202);
	i1 v2163 = *(i1*)(intptr_t)v2162;
	i1 v2164 = v2163+(+1);
	i8 v2165 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2165 = v2164;

	goto c02_01dc;

c02_01df:;


	i8 v2206 = (i8)(intptr_t)(ws+792);
	i8 v2207 = *(i8*)(intptr_t)v2206;
	i8 v2208 = (i8)(intptr_t)(f100_push);

	((void(*)(i8 /* subr */))(intptr_t)v2208)(v2207);

c02_01f2:;

	i8 v2209 = (i8)(intptr_t)(ws+3200);
	i2 v2210 = *(i2*)(intptr_t)v2209;
	i2 v2211 = (i2)+0;
	if (v2210==v2211) goto c02_01f5; else goto c02_01f4;

c02_01f4:;

	i8 v2212 = (i8)(intptr_t)(ws+3200);
	i2 v2213 = *(i2*)(intptr_t)v2212;
	i2 v2214 = v2213+(-1);
	i8 v2215 = (i8)(intptr_t)(ws+3200);
	*(i2*)(intptr_t)v2215 = v2214;

	i8 v2216 = (i8)(intptr_t)(ws+800);
	i8 v2217 = (i8)(intptr_t)(ws+3200);
	i2 v2218 = *(i2*)(intptr_t)v2217;
	i8 v2219 = v2218;
	i1 v2220 = (i1)+3;
	i8 v2221 = ((i8)v2219)<<v2220;
	i8 v2222 = v2216+v2221;
	i8 v2223 = *(i8*)(intptr_t)v2222;
	i8 v2224 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2224 = v2223;

	i8 v2225 = (i8)(intptr_t)(ws+792);
	i8 v2226 = *(i8*)(intptr_t)v2225;
	i8 v2227 = v2226+(+188);
	i1 v2228 = *(i1*)(intptr_t)v2227;
	i1 v2229 = v2228|(+1);
	i8 v2230 = (i8)(intptr_t)(ws+792);
	i8 v2231 = *(i8*)(intptr_t)v2230;
	i8 v2232 = v2231+(+188);
	*(i1*)(intptr_t)v2232 = v2229;

	i1 v2233 = (i1)+0;
	i8 v2234 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2234 = v2233;

c02_01f8:;

	i8 v2235 = (i8)(intptr_t)(ws+3202);
	i1 v2236 = *(i1*)(intptr_t)v2235;
	i1 v2237 = (i1)+4;
	if (v2236==v2237) goto c02_01fb; else goto c02_01fa;

c02_01fa:;

	i8 v2238 = (i8)(intptr_t)(ws+792);
	i8 v2239 = *(i8*)(intptr_t)v2238;
	i8 v2240 = v2239+(+176);
	i8 v2241 = (i8)(intptr_t)(ws+3202);
	i1 v2242 = *(i1*)(intptr_t)v2241;
	i8 v2243 = v2242;
	i1 v2244 = (i1)+1;
	i8 v2245 = ((i8)v2243)<<v2244;
	i8 v2246 = v2240+v2245;
	i2 v2247 = *(i2*)(intptr_t)v2246;
	i8 v2248 = (i8)(intptr_t)(ws+792);
	i8 v2249 = *(i8*)(intptr_t)v2248;
	i8 v2250 = v2249+(+168);
	i8 v2251 = (i8)(intptr_t)(ws+3202);
	i1 v2252 = *(i1*)(intptr_t)v2251;
	i8 v2253 = v2252;
	i1 v2254 = (i1)+1;
	i8 v2255 = ((i8)v2253)<<v2254;
	i8 v2256 = v2250+v2255;
	i2 v2257 = *(i2*)(intptr_t)v2256;
	i2 v2258 = v2247+v2257;
	i8 v2259 = (i8)(intptr_t)(ws+3212);
	*(i2*)(intptr_t)v2259 = v2258;

	i8 v2260 = (i8)(intptr_t)(ws+3212);
	i2 v2261 = *(i2*)(intptr_t)v2260;
	i1 v2262 = (i1)+8;
	i8 v2263 = (i8)(intptr_t)(f70_ArchAlignUp);
	i2 v2264;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v2263)(&v2264, v2262, v2261);
	i8 v2265 = (i8)(intptr_t)(ws+3204);
	i8 v2266 = (i8)(intptr_t)(ws+3202);
	i1 v2267 = *(i1*)(intptr_t)v2266;
	i8 v2268 = v2267;
	i1 v2269 = (i1)+1;
	i8 v2270 = ((i8)v2268)<<v2269;
	i8 v2271 = v2265+v2270;
	*(i2*)(intptr_t)v2271 = v2264;

	i8 v2272 = (i8)(intptr_t)(ws+580);
	i8 v2273 = (i8)(intptr_t)(ws+3202);
	i1 v2274 = *(i1*)(intptr_t)v2273;
	i8 v2275 = v2274;
	i1 v2276 = (i1)+1;
	i8 v2277 = ((i8)v2275)<<v2276;
	i8 v2278 = v2272+v2277;
	i2 v2279 = *(i2*)(intptr_t)v2278;
	i8 v2280 = (i8)(intptr_t)(ws+3212);
	i2 v2281 = *(i2*)(intptr_t)v2280;
	if (v2279<v2281) goto c02_01ff; else goto c02_0200;

c02_01ff:;

	i8 v2282 = (i8)(intptr_t)(ws+3212);
	i2 v2283 = *(i2*)(intptr_t)v2282;
	i8 v2284 = (i8)(intptr_t)(ws+580);
	i8 v2285 = (i8)(intptr_t)(ws+3202);
	i1 v2286 = *(i1*)(intptr_t)v2285;
	i8 v2287 = v2286;
	i1 v2288 = (i1)+1;
	i8 v2289 = ((i8)v2287)<<v2288;
	i8 v2290 = v2284+v2289;
	*(i2*)(intptr_t)v2290 = v2283;

c02_0200:;

c02_01fc:;

	i8 v2291 = (i8)(intptr_t)(ws+3202);
	i1 v2292 = *(i1*)(intptr_t)v2291;
	i1 v2293 = v2292+(+1);
	i8 v2294 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2294 = v2293;

	goto c02_01f8;

c02_01fb:;

	i8 v2295 = (i8)(intptr_t)(ws+792);
	i8 v2296 = *(i8*)(intptr_t)v2295;
	i8 v2297 = v2296+(+16);
	i8 v2298 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v2298 = v2297;

c02_0203:;

	i8 v2299 = (i8)(intptr_t)(ws+3216);
	i8 v2300 = *(i8*)(intptr_t)v2299;
	i8 v2301 = (i8)+0;
	if (v2300==v2301) goto c02_0206; else goto c02_0205;

c02_0205:;

	i1 v2302 = (i1)+0;
	i8 v2303 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v2303 = v2302;

c02_0209:;

	i8 v2304 = (i8)(intptr_t)(ws+3224);
	i1 v2305 = *(i1*)(intptr_t)v2304;
	i1 v2306 = (i1)+16;
	if (v2305==v2306) goto c02_020c; else goto c02_020b;

c02_020b:;

	i8 v2307 = (i8)(intptr_t)(ws+3216);
	i8 v2308 = *(i8*)(intptr_t)v2307;
	i8 v2309 = v2308+(+8);
	i8 v2310 = (i8)(intptr_t)(ws+3224);
	i1 v2311 = *(i1*)(intptr_t)v2310;
	i8 v2312 = v2311;
	i1 v2313 = (i1)+3;
	i8 v2314 = ((i8)v2312)<<v2313;
	i8 v2315 = v2309+v2314;
	i8 v2316 = *(i8*)(intptr_t)v2315;
	i8 v2317 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v2317 = v2316;

	i8 v2318 = (i8)(intptr_t)(ws+3224);
	i1 v2319 = *(i1*)(intptr_t)v2318;
	i1 v2320 = v2319+(+1);
	i8 v2321 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v2321 = v2320;

	i8 v2322 = (i8)(intptr_t)(ws+3232);
	i8 v2323 = *(i8*)(intptr_t)v2322;
	i8 v2324 = (i8)+0;
	if (v2323==v2324) goto c02_0210; else goto c02_0211;

c02_0210:;

	goto c02_020c;

c02_0211:;

c02_020d:;

	i8 v2325 = (i8)(intptr_t)(ws+3232);
	i8 v2326 = *(i8*)(intptr_t)v2325;
	i8 v2327 = (i8)(intptr_t)(f82_Deref);
	i8 v2328;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2327)(&v2328, v2326);
	i8 v2329 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v2329 = v2328;

	i1 v2330 = (i1)+0;
	i8 v2331 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2331 = v2330;

c02_0214:;

	i8 v2332 = (i8)(intptr_t)(ws+3202);
	i1 v2333 = *(i1*)(intptr_t)v2332;
	i1 v2334 = (i1)+4;
	if (v2333==v2334) goto c02_0217; else goto c02_0216;

c02_0216:;

	i8 v2335 = (i8)(intptr_t)(ws+3232);
	i8 v2336 = *(i8*)(intptr_t)v2335;
	i8 v2337 = v2336+(+176);
	i8 v2338 = (i8)(intptr_t)(ws+3202);
	i1 v2339 = *(i1*)(intptr_t)v2338;
	i8 v2340 = v2339;
	i1 v2341 = (i1)+1;
	i8 v2342 = ((i8)v2340)<<v2341;
	i8 v2343 = v2337+v2342;
	i2 v2344 = *(i2*)(intptr_t)v2343;
	i8 v2345 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v2345 = v2344;

	i8 v2346 = (i8)(intptr_t)(ws+3204);
	i8 v2347 = (i8)(intptr_t)(ws+3202);
	i1 v2348 = *(i1*)(intptr_t)v2347;
	i8 v2349 = v2348;
	i1 v2350 = (i1)+1;
	i8 v2351 = ((i8)v2349)<<v2350;
	i8 v2352 = v2346+v2351;
	i2 v2353 = *(i2*)(intptr_t)v2352;
	i8 v2354 = (i8)(intptr_t)(ws+3242);
	*(i2*)(intptr_t)v2354 = v2353;

	i8 v2355 = (i8)(intptr_t)(ws+3240);
	i2 v2356 = *(i2*)(intptr_t)v2355;
	i8 v2357 = (i8)(intptr_t)(ws+3242);
	i2 v2358 = *(i2*)(intptr_t)v2357;
	if (v2356<v2358) goto c02_021b; else goto c02_021c;

c02_021b:;

	i8 v2359 = (i8)(intptr_t)(ws+3242);
	i2 v2360 = *(i2*)(intptr_t)v2359;
	i8 v2361 = (i8)(intptr_t)(ws+3232);
	i8 v2362 = *(i8*)(intptr_t)v2361;
	i8 v2363 = v2362+(+176);
	i8 v2364 = (i8)(intptr_t)(ws+3202);
	i1 v2365 = *(i1*)(intptr_t)v2364;
	i8 v2366 = v2365;
	i1 v2367 = (i1)+1;
	i8 v2368 = ((i8)v2366)<<v2367;
	i8 v2369 = v2363+v2368;
	*(i2*)(intptr_t)v2369 = v2360;

	i8 v2370 = (i8)(intptr_t)(ws+3232);
	i8 v2371 = *(i8*)(intptr_t)v2370;
	i8 v2372 = (i8)(intptr_t)(f100_push);

	((void(*)(i8 /* subr */))(intptr_t)v2372)(v2371);

c02_021c:;

c02_0218:;

	i8 v2373 = (i8)(intptr_t)(ws+3202);
	i1 v2374 = *(i1*)(intptr_t)v2373;
	i1 v2375 = v2374+(+1);
	i8 v2376 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2376 = v2375;

	goto c02_0214;

c02_0217:;

	i8 v2377 = (i8)(intptr_t)(ws+3232);
	i8 v2378 = *(i8*)(intptr_t)v2377;
	i8 v2379 = v2378+(+188);
	i1 v2380 = *(i1*)(intptr_t)v2379;
	i1 v2381 = v2380&(+1);
	i1 v2382 = (i1)+0;
	if (v2381==v2382) goto c02_0220; else goto c02_0221;

c02_0220:;

	i8 v2383 = (i8)(intptr_t)(ws+3232);
	i8 v2384 = *(i8*)(intptr_t)v2383;
	i8 v2385 = (i8)(intptr_t)(f100_push);

	((void(*)(i8 /* subr */))(intptr_t)v2385)(v2384);

	i8 v2386 = (i8)(intptr_t)(ws+3232);
	i8 v2387 = *(i8*)(intptr_t)v2386;
	i8 v2388 = v2387+(+188);
	i1 v2389 = *(i1*)(intptr_t)v2388;
	i1 v2390 = v2389|(+1);
	i8 v2391 = (i8)(intptr_t)(ws+3232);
	i8 v2392 = *(i8*)(intptr_t)v2391;
	i8 v2393 = v2392+(+188);
	*(i1*)(intptr_t)v2393 = v2390;

c02_0221:;

c02_021d:;

	goto c02_0209;

c02_020c:;

	i8 v2394 = (i8)(intptr_t)(ws+3216);
	i8 v2395 = *(i8*)(intptr_t)v2394;
	i8 v2396 = *(i8*)(intptr_t)v2395;
	i8 v2397 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v2397 = v2396;

	goto c02_0203;

c02_0206:;

	goto c02_01f2;

c02_01f5:;

	i8 v2398 = (i8)(intptr_t)c02_s0020;
	i8 v2399 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2399)(v2398);

	i1 v2400 = (i1)+0;
	i8 v2401 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2401 = v2400;

c02_0224:;

	i8 v2402 = (i8)(intptr_t)(ws+3202);
	i1 v2403 = *(i1*)(intptr_t)v2402;
	i1 v2404 = (i1)+4;
	if (v2403==v2404) goto c02_0227; else goto c02_0226;

c02_0226:;

	i8 v2405 = (i8)(intptr_t)c02_s0021;
	i8 v2406 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2406)(v2405);

	i8 v2407 = (i8)(intptr_t)(ws+3202);
	i1 v2408 = *(i1*)(intptr_t)v2407;
	i8 v2409 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v2409)(v2408);

	i8 v2410 = (i8)(intptr_t)c02_s0022;
	i8 v2411 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2411)(v2410);

	i8 v2412 = (i8)(intptr_t)(ws+580);
	i8 v2413 = (i8)(intptr_t)(ws+3202);
	i1 v2414 = *(i1*)(intptr_t)v2413;
	i8 v2415 = v2414;
	i1 v2416 = (i1)+1;
	i8 v2417 = ((i8)v2415)<<v2416;
	i8 v2418 = v2412+v2417;
	i2 v2419 = *(i2*)(intptr_t)v2418;
	i8 v2420 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2420)(v2419);

	i8 v2421 = (i8)(intptr_t)c02_s0023;
	i8 v2422 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2422)(v2421);

	i8 v2423 = (i8)(intptr_t)(ws+3202);
	i1 v2424 = *(i1*)(intptr_t)v2423;
	i1 v2425 = v2424+(+1);
	i8 v2426 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2426 = v2425;

	goto c02_0224;

c02_0227:;

endsub:;
}
const i1 c02_s0024[] = { 0x43,0x4f,0x57,0x4c,0x49,0x4e,0x4b,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f37_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0025[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s0026[] = { 0x53,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x0a,0 };
	void f57_SimpleError(i8 /* s */);

// SyntaxError workspace at ws+792 length ws+0
void f101_SyntaxError(void) {

	i8 v2447 = (i8)(intptr_t)c02_s0026;
	i8 v2448 = (i8)(intptr_t)(f57_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2448)(v2447);

endsub:;
}
const i1 c02_s0027[] = { 0x41,0x64,0x64,0x69,0x6e,0x67,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f84_OpenAndLoadCoo(i8* /* coo */, i8 /* filename */);
	void f80_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	void f79_AddRef(i8 /* calls */, i8 /* subr */);

// AddInputFile workspace at ws+792 length ws+24
void f102_AddInputFile(i8 p2449 /* filename */) {
	*(i8*)(intptr_t)(ws+792) = p2449; /*filename */

	i8 v2450 = (i8)(intptr_t)c02_s0027;
	i8 v2451 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2451)(v2450);

	i8 v2452 = (i8)(intptr_t)(ws+792);
	i8 v2453 = *(i8*)(intptr_t)v2452;
	i8 v2454 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2454)(v2453);

	i8 v2455 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v2455)();

	i8 v2456 = (i8)(intptr_t)(ws+792);
	i8 v2457 = *(i8*)(intptr_t)v2456;
	i8 v2458 = (i8)(intptr_t)(f84_OpenAndLoadCoo);
	i8 v2459;

	((void(*)(i8* /* coo */, i8 /* filename */))(intptr_t)v2458)(&v2459, v2457);
	i8 v2460 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v2460 = v2459;

	i8 v2461 = (i8)(intptr_t)(ws+752);
	i8 v2462 = *(i8*)(intptr_t)v2461;
	i8 v2463 = (i8)+0;
	if (v2462==v2463) goto c02_022b; else goto c02_022c;

c02_022b:;

	i8 v2464 = (i8)(intptr_t)(ws+800);
	i8 v2465 = *(i8*)(intptr_t)v2464;
	i8 v2466 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2466 = v2465;

	i8 v2467 = (i8)(intptr_t)(ws+800);
	i8 v2468 = *(i8*)(intptr_t)v2467;
	i8 v2469 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v2469 = v2468;

	goto c02_0228;

c02_022c:;

	i8 v2470 = (i8)(intptr_t)(ws+800);
	i8 v2471 = *(i8*)(intptr_t)v2470;
	i8 v2472 = (i8)(intptr_t)(ws+744);
	i8 v2473 = *(i8*)(intptr_t)v2472;
	i8 v2474 = v2473+(+672);
	*(i8*)(intptr_t)v2474 = v2471;

	i8 v2475 = (i8)(intptr_t)(ws+800);
	i8 v2476 = *(i8*)(intptr_t)v2475;
	i8 v2477 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v2477 = v2476;

c02_0228:;

	i8 v2478 = (i8)(intptr_t)(ws+800);
	i8 v2479 = *(i8*)(intptr_t)v2478;
	i2 v2480 = (i2)+0;
	i8 v2481 = (i8)(intptr_t)(f80_FindSub);
	i8 v2482;

	((void(*)(i8* /* ptr */, i2 /* id */, i8 /* coo */))(intptr_t)v2481)(&v2482, v2480, v2479);
	i8 v2483 = *(i8*)(intptr_t)v2482;
	i8 v2484 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2484 = v2483;

	i8 v2485 = (i8)(intptr_t)(ws+808);
	i8 v2486 = *(i8*)(intptr_t)v2485;
	i8 v2487 = (i8)+0;
	if (v2486==v2487) goto c02_0231; else goto c02_0230;

c02_0230:;

	i8 v2488 = (i8)(intptr_t)(ws+768);
	i8 v2489 = *(i8*)(intptr_t)v2488;
	i8 v2490 = (i8)+0;
	if (v2489==v2490) goto c02_0235; else goto c02_0236;

c02_0235:;

	i8 v2491 = (i8)(intptr_t)(ws+808);
	i8 v2492 = *(i8*)(intptr_t)v2491;
	i8 v2493 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v2493 = v2492;

c02_0236:;

c02_0232:;

c02_0231:;

c02_022d:;

	i8 v2494 = (i8)(intptr_t)(ws+776);
	i8 v2495 = *(i8*)(intptr_t)v2494;
	i8 v2496 = (i8)+0;
	if (v2495==v2496) goto c02_023b; else goto c02_023a;

c02_023a:;

	i8 v2497 = (i8)(intptr_t)(ws+776);
	i8 v2498 = *(i8*)(intptr_t)v2497;
	i8 v2499 = (i8)(intptr_t)(ws+808);
	i8 v2500 = *(i8*)(intptr_t)v2499;
	i8 v2501 = (i8)(intptr_t)(f79_AddRef);

	((void(*)(i8 /* calls */, i8 /* subr */))(intptr_t)v2501)(v2500, v2498);

c02_023b:;

c02_0237:;

	i8 v2502 = (i8)(intptr_t)(ws+808);
	i8 v2503 = *(i8*)(intptr_t)v2502;
	i8 v2504 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v2504 = v2503;

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
const i1 c02_s0028[] = { 0x2d,0x6f,0 };
	void f27_StrICmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f24_ArgvNext(i8* /* arg */);
	void f101_SyntaxError(void);
	void f102_AddInputFile(i8 /* filename */);
const i1 c02_s0029[] = { 0x4e,0x6f,0x20,0x6d,0x61,0x69,0x6e,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x69,0x6e,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0 };
	void f57_SimpleError(i8 /* s */);
const i1 c02_s002a[] = { 0x4e,0x6f,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0 };
	void f57_SimpleError(i8 /* s */);
const i1 c02_s002b[] = { 0x41,0x6e,0x61,0x6c,0x79,0x73,0x69,0x6e,0x67,0x2e,0x2e,0x2e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f98_ResolveExternals(void);
	void f99_PlaceSubroutines(i8 /* subroutine */);
	void f68_EmitterOpenfile(i8 /* filename */);
const i1 c02_s002c[] = { 0x43,0x72,0x65,0x61,0x74,0x69,0x6e,0x67,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f85_InitStreams(void);
	void f86_SetStream(i1 /* sid */);
	void f74_ArchEmitHeader(i8 /* coo */);
	void f89_FlushStream(void);
	void f97_WriteAllSubroutinesToOutputFile(i8 /* coos */);
	void f86_SetStream(i1 /* sid */);
	void f75_ArchEmitFooter(i8 /* coo */);
	void f89_FlushStream(void);
	void f69_EmitterClosefile(void);
const i1 c02_s002d[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f37_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s002e[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);

// __main workspace at ws+0 length ws+792
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
	i8 v843 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v843 = v842;






















	i1 v1100 = (i1)+1;
	i8 v1101 = (i8)(intptr_t)(ws+588);
	*(i1*)(intptr_t)v1101 = v1100;













	i1 v1656 = (i1)+0;
	i8 v1657 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1657 = v1656;

	i1 v1658 = (i1)+0;
	i8 v1659 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1659 = v1658;








	i8 v2427 = (i8)(intptr_t)c02_s0024;
	i8 v2428 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2428)(v2427);

	i8 v2429 = (i8)(intptr_t)(f37_GetFreeMemory);
	i8 v2430;

	((void(*)(i8* /* i */))(intptr_t)v2429)(&v2430);
	i1 v2431 = (i1)+10;
	i8 v2432 = ((i8)v2430)>>v2431;
	i2 v2433 = v2432;
	i8 v2434 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2434)(v2433);

	i8 v2435 = (i8)(intptr_t)c02_s0025;
	i8 v2436 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2436)(v2435);

	i8 v2437 = (i8)+0;
	i8 v2438 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v2438 = v2437;

	i8 v2439 = (i8)+0;
	i8 v2440 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2440 = v2439;

	i8 v2441 = (i8)+0;
	i8 v2442 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v2442 = v2441;

	i8 v2443 = (i8)+0;
	i8 v2444 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v2444 = v2443;

	i8 v2445 = (i8)+0;
	i8 v2446 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v2446 = v2445;



	i8 v2505 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v2505)();

c02_023c:;

	i8 v2506 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v2507;

	((void(*)(i8* /* arg */))(intptr_t)v2506)(&v2507);
	i8 v2508 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v2508 = v2507;

	i8 v2509 = (i8)(intptr_t)(ws+784);
	i8 v2510 = *(i8*)(intptr_t)v2509;
	i8 v2511 = (i8)+0;
	if (v2510==v2511) goto c02_0241; else goto c02_0242;

c02_0241:;

	goto c02_023d;

c02_0242:;

c02_023e:;

	i8 v2512 = (i8)(intptr_t)(ws+784);
	i8 v2513 = *(i8*)(intptr_t)v2512;
	i8 v2514 = (i8)(intptr_t)c02_s0028;
	i8 v2515 = (i8)(intptr_t)(f27_StrICmp);
	i1 v2516;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v2515)(&v2516, v2514, v2513);
	i1 v2517 = (i1)+0;
	if (v2516==v2517) goto c02_0246; else goto c02_0247;

c02_0246:;

	i8 v2518 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v2519;

	((void(*)(i8* /* arg */))(intptr_t)v2518)(&v2519);
	i8 v2520 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v2520 = v2519;

	goto c02_0243;

c02_0247:;

	i8 v2521 = (i8)(intptr_t)(ws+784);
	i8 v2522 = *(i8*)(intptr_t)v2521;
	i1 v2523 = *(i1*)(intptr_t)v2522;
	i1 v2524 = (i1)+45;
	if (v2523==v2524) goto c02_024a; else goto c02_024b;

c02_024a:;

	i8 v2525 = (i8)(intptr_t)(f101_SyntaxError);

	((void(*)(void))(intptr_t)v2525)();

	goto c02_0243;

c02_024b:;

	i8 v2526 = (i8)(intptr_t)(ws+784);
	i8 v2527 = *(i8*)(intptr_t)v2526;
	i8 v2528 = (i8)(intptr_t)(f102_AddInputFile);

	((void(*)(i8 /* filename */))(intptr_t)v2528)(v2527);

c02_0243:;

	goto c02_023c;

c02_023d:;

	i8 v2529 = (i8)(intptr_t)(ws+768);
	i8 v2530 = *(i8*)(intptr_t)v2529;
	i8 v2531 = (i8)+0;
	if (v2530==v2531) goto c02_024f; else goto c02_0250;

c02_024f:;

	i8 v2532 = (i8)(intptr_t)c02_s0029;
	i8 v2533 = (i8)(intptr_t)(f57_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2533)(v2532);

c02_0250:;

c02_024c:;

	i8 v2534 = (i8)(intptr_t)(ws+760);
	i8 v2535 = *(i8*)(intptr_t)v2534;
	i8 v2536 = (i8)+0;
	if (v2535==v2536) goto c02_0254; else goto c02_0255;

c02_0254:;

	i8 v2537 = (i8)(intptr_t)c02_s002a;
	i8 v2538 = (i8)(intptr_t)(f57_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2538)(v2537);

c02_0255:;

c02_0251:;

	i8 v2539 = (i8)(intptr_t)c02_s002b;
	i8 v2540 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2540)(v2539);

	i8 v2541 = (i8)(intptr_t)(f98_ResolveExternals);

	((void(*)(void))(intptr_t)v2541)();

	i8 v2542 = (i8)(intptr_t)(ws+768);
	i8 v2543 = *(i8*)(intptr_t)v2542;
	i8 v2544 = (i8)(intptr_t)(f99_PlaceSubroutines);

	((void(*)(i8 /* subroutine */))(intptr_t)v2544)(v2543);

	i8 v2545 = (i8)(intptr_t)(ws+760);
	i8 v2546 = *(i8*)(intptr_t)v2545;
	i8 v2547 = (i8)(intptr_t)(f68_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v2547)(v2546);

	i8 v2548 = (i8)(intptr_t)c02_s002c;
	i8 v2549 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2549)(v2548);

	i8 v2550 = (i8)(intptr_t)(ws+760);
	i8 v2551 = *(i8*)(intptr_t)v2550;
	i8 v2552 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2552)(v2551);

	i8 v2553 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v2553)();

	i8 v2554 = (i8)(intptr_t)(f85_InitStreams);

	((void(*)(void))(intptr_t)v2554)();

	i1 v2555 = (i1)+7;
	i8 v2556 = (i8)(intptr_t)(f86_SetStream);

	((void(*)(i1 /* sid */))(intptr_t)v2556)(v2555);

	i8 v2557 = (i8)(intptr_t)(ws+752);
	i8 v2558 = *(i8*)(intptr_t)v2557;
	i8 v2559 = (i8)(intptr_t)(f74_ArchEmitHeader);

	((void(*)(i8 /* coo */))(intptr_t)v2559)(v2558);

	i8 v2560 = (i8)(intptr_t)(f89_FlushStream);

	((void(*)(void))(intptr_t)v2560)();

	i8 v2561 = (i8)(intptr_t)(ws+752);
	i8 v2562 = *(i8*)(intptr_t)v2561;
	i8 v2563 = (i8)(intptr_t)(f97_WriteAllSubroutinesToOutputFile);

	((void(*)(i8 /* coos */))(intptr_t)v2563)(v2562);

	i1 v2564 = (i1)+7;
	i8 v2565 = (i8)(intptr_t)(f86_SetStream);

	((void(*)(i1 /* sid */))(intptr_t)v2565)(v2564);

	i8 v2566 = (i8)(intptr_t)(ws+752);
	i8 v2567 = *(i8*)(intptr_t)v2566;
	i8 v2568 = (i8)(intptr_t)(f75_ArchEmitFooter);

	((void(*)(i8 /* coo */))(intptr_t)v2568)(v2567);

	i8 v2569 = (i8)(intptr_t)(f89_FlushStream);

	((void(*)(void))(intptr_t)v2569)();

	i8 v2570 = (i8)(intptr_t)(f69_EmitterClosefile);

	((void(*)(void))(intptr_t)v2570)();

	i8 v2571 = (i8)(intptr_t)c02_s002d;
	i8 v2572 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2572)(v2571);

	i8 v2573 = (i8)(intptr_t)(f37_GetFreeMemory);
	i8 v2574;

	((void(*)(i8* /* i */))(intptr_t)v2573)(&v2574);
	i1 v2575 = (i1)+10;
	i8 v2576 = ((i8)v2574)>>v2575;
	i2 v2577 = v2576;
	i8 v2578 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2578)(v2577);

	i8 v2579 = (i8)(intptr_t)c02_s002e;
	i8 v2580 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2580)(v2579);

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                                                                                                                                                               