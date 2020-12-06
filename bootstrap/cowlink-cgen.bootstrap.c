#include "cowgol.h"
static i8 workspace[0x01a1];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+3264 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+808 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+808) = p10; /*buf */
	*(i1*)(intptr_t)(ws+816) = p9; /*byte */
	*(i8*)(intptr_t)(ws+824) = p8; /*len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+808) 
,  
*(i1*)(intptr_t)(ws+816) 
,  
*(i8*)(intptr_t)(ws+824) 
); 



endsub:;
}

// print_char workspace at ws+3296 length ws+1
void f9_print_char(i1 p12 /* c */) {
	*(i1*)(intptr_t)(ws+3296) = p12; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+3296) 
); 



endsub:;
}
	void f9_print_char(i1 /* c */);

// print workspace at ws+3280 length ws+9
void f12_print(i8 p21 /* ptr */) {
	*(i8*)(intptr_t)(ws+3280) = p21; /*ptr */

c02_0001:;

	i8 v22 = (i8)(intptr_t)(ws+3280);
	i8 v23 = *(i8*)(intptr_t)v22;
	i1 v24 = *(i1*)(intptr_t)v23;
	i8 v25 = (i8)(intptr_t)(ws+3288);
	*(i1*)(intptr_t)v25 = v24;

	i8 v26 = (i8)(intptr_t)(ws+3288);
	i1 v27 = *(i1*)(intptr_t)v26;
	i1 v28 = (i1)+0;
	if (v27==v28) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v29 = (i8)(intptr_t)(ws+3288);
	i1 v30 = *(i1*)(intptr_t)v29;
	i8 v31 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v31)(v30);

	i8 v32 = (i8)(intptr_t)(ws+3280);
	i8 v33 = *(i8*)(intptr_t)v32;
	i8 v34 = v33+(+1);
	i8 v35 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v35 = v34;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_nl workspace at ws+888 length ws+0
void f13_print_nl(void) {

	i1 v36 = (i1)+10;
	i8 v37 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v37)(v36);

endsub:;
}

// UIToA workspace at ws+3280 length ws+49
void f14_UIToA(i8* p38 /* ptr */, i8 p39 /* buffer */, i1 p40 /* base */, i4 p41 /* value */) {
	*(i4*)(intptr_t)(ws+3280) = p41; /*value */
	*(i1*)(intptr_t)(ws+3284) = p40; /*base */
	*(i8*)(intptr_t)(ws+3288) = p39; /*buffer */

	i8 v42 = (i8)(intptr_t)(ws+3288);
	i8 v43 = *(i8*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v44 = v43;

c02_0008:;

	i8 v45 = (i8)(intptr_t)(ws+3280);
	i4 v46 = *(i4*)(intptr_t)v45;
	i8 v47 = (i8)(intptr_t)(ws+3284);
	i1 v48 = *(i1*)(intptr_t)v47;
	i4 v49 = v48;
	i4 v50 = v46%v49;
	i8 v51 = (i8)(intptr_t)(ws+3304);
	*(i4*)(intptr_t)v51 = v50;

	i8 v52 = (i8)(intptr_t)(ws+3280);
	i4 v53 = *(i4*)(intptr_t)v52;
	i8 v54 = (i8)(intptr_t)(ws+3284);
	i1 v55 = *(i1*)(intptr_t)v54;
	i4 v56 = v55;
	i4 v57 = v53/v56;
	i8 v58 = (i8)(intptr_t)(ws+3280);
	*(i4*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+3304);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+10;
	if (v60<v61) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v62 = (i8)(intptr_t)(ws+3304);
	i4 v63 = *(i4*)(intptr_t)v62;
	i4 v64 = v63+(+48);
	i8 v65 = (i8)(intptr_t)(ws+3304);
	*(i4*)(intptr_t)v65 = v64;

	goto c02_000a;

c02_000e:;

	i8 v66 = (i8)(intptr_t)(ws+3304);
	i4 v67 = *(i4*)(intptr_t)v66;
	i4 v68 = v67+(+87);
	i8 v69 = (i8)(intptr_t)(ws+3304);
	*(i4*)(intptr_t)v69 = v68;

c02_000a:;

	i8 v70 = (i8)(intptr_t)(ws+3304);
	i4 v71 = *(i4*)(intptr_t)v70;
	i1 v72 = v71;
	i8 v73 = (i8)(intptr_t)(ws+3296);
	i8 v74 = *(i8*)(intptr_t)v73;
	*(i1*)(intptr_t)v74 = v72;

	i8 v75 = (i8)(intptr_t)(ws+3296);
	i8 v76 = *(i8*)(intptr_t)v75;
	i8 v77 = v76+(+1);
	i8 v78 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v78 = v77;

	i8 v79 = (i8)(intptr_t)(ws+3280);
	i4 v80 = *(i4*)(intptr_t)v79;
	i4 v81 = (i4)+0;
	if (v80==v81) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v82 = (i8)(intptr_t)(ws+3288);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v84 = v83;

	i8 v85 = (i8)(intptr_t)(ws+3296);
	i8 v86 = *(i8*)(intptr_t)v85;
	i8 v87 = v86+(-1);
	i8 v88 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v88 = v87;

c02_0016:;

	i8 v89 = (i8)(intptr_t)(ws+3312);
	i8 v90 = *(i8*)(intptr_t)v89;
	i8 v91 = (i8)(intptr_t)(ws+3320);
	i8 v92 = *(i8*)(intptr_t)v91;
	if (v90<v92) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v93 = (i8)(intptr_t)(ws+3312);
	i8 v94 = *(i8*)(intptr_t)v93;
	i1 v95 = *(i1*)(intptr_t)v94;
	i8 v96 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v96 = v95;

	i8 v97 = (i8)(intptr_t)(ws+3320);
	i8 v98 = *(i8*)(intptr_t)v97;
	i1 v99 = *(i1*)(intptr_t)v98;
	i8 v100 = (i8)(intptr_t)(ws+3312);
	i8 v101 = *(i8*)(intptr_t)v100;
	*(i1*)(intptr_t)v101 = v99;

	i8 v102 = (i8)(intptr_t)(ws+3328);
	i1 v103 = *(i1*)(intptr_t)v102;
	i8 v104 = (i8)(intptr_t)(ws+3320);
	i8 v105 = *(i8*)(intptr_t)v104;
	*(i1*)(intptr_t)v105 = v103;

	i8 v106 = (i8)(intptr_t)(ws+3312);
	i8 v107 = *(i8*)(intptr_t)v106;
	i8 v108 = v107+(+1);
	i8 v109 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v109 = v108;

	i8 v110 = (i8)(intptr_t)(ws+3320);
	i8 v111 = *(i8*)(intptr_t)v110;
	i8 v112 = v111+(-1);
	i8 v113 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v113 = v112;

	goto c02_0016;

c02_0019:;

	i1 v114 = (i1)+0;
	i8 v115 = (i8)(intptr_t)(ws+3296);
	i8 v116 = *(i8*)(intptr_t)v115;
	*(i1*)(intptr_t)v116 = v114;

endsub:;
	*p38 = *(i8*)(intptr_t)(ws+3296);
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f12_print(i8 /* ptr */);

// print_i32 workspace at ws+3256 length ws+24
void f16_print_i32(i4 p144 /* value */) {
	*(i4*)(intptr_t)(ws+3256) = p144; /*value */

	i8 v145 = (i8)(intptr_t)(ws+3256);
	i4 v146 = *(i4*)(intptr_t)v145;
	i1 v147 = (i1)+10;
	i8 v148 = (i8)(intptr_t)(ws+3260);
	i8 v149 = (i8)(intptr_t)(f14_UIToA);
	i8 v150;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v149)(&v150, v148, v147, v146);
	i8 v151 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v151 = v150;

	i8 v152 = (i8)(intptr_t)(ws+3260);
	i8 v153 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v153)(v152);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i16 workspace at ws+3248 length ws+2
void f17_print_i16(i2 p154 /* value */) {
	*(i2*)(intptr_t)(ws+3248) = p154; /*value */

	i8 v155 = (i8)(intptr_t)(ws+3248);
	i2 v156 = *(i2*)(intptr_t)v155;
	i4 v157 = v156;
	i8 v158 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v158)(v157);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i8 workspace at ws+3248 length ws+1
void f18_print_i8(i1 p159 /* value */) {
	*(i1*)(intptr_t)(ws+3248) = p159; /*value */

	i8 v160 = (i8)(intptr_t)(ws+3248);
	i1 v161 = *(i1*)(intptr_t)v160;
	i4 v162 = v161;
	i8 v163 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v163)(v162);

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+888 length ws+3
void f19_print_hex_i8(i1 p164 /* value */) {
	*(i1*)(intptr_t)(ws+888) = p164; /*value */

	i1 v165 = (i1)+2;
	i8 v166 = (i8)(intptr_t)(ws+889);
	*(i1*)(intptr_t)v166 = v165;

c02_001f:;

	i8 v167 = (i8)(intptr_t)(ws+888);
	i1 v168 = *(i1*)(intptr_t)v167;
	i1 v169 = (i1)+4;
	i1 v170 = ((i1)v168)>>v169;
	i8 v171 = (i8)(intptr_t)(ws+890);
	*(i1*)(intptr_t)v171 = v170;

	i8 v172 = (i8)(intptr_t)(ws+890);
	i1 v173 = *(i1*)(intptr_t)v172;
	i1 v174 = (i1)+10;
	if (v173<v174) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v175 = (i8)(intptr_t)(ws+890);
	i1 v176 = *(i1*)(intptr_t)v175;
	i1 v177 = v176+(+48);
	i8 v178 = (i8)(intptr_t)(ws+890);
	*(i1*)(intptr_t)v178 = v177;

	goto c02_0021;

c02_0025:;

	i8 v179 = (i8)(intptr_t)(ws+890);
	i1 v180 = *(i1*)(intptr_t)v179;
	i1 v181 = v180+(+87);
	i8 v182 = (i8)(intptr_t)(ws+890);
	*(i1*)(intptr_t)v182 = v181;

c02_0021:;

	i8 v183 = (i8)(intptr_t)(ws+890);
	i1 v184 = *(i1*)(intptr_t)v183;
	i8 v185 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v185)(v184);

	i8 v186 = (i8)(intptr_t)(ws+888);
	i1 v187 = *(i1*)(intptr_t)v186;
	i1 v188 = (i1)+4;
	i1 v189 = ((i1)v187)<<v188;
	i8 v190 = (i8)(intptr_t)(ws+888);
	*(i1*)(intptr_t)v190 = v189;

	i8 v191 = (i8)(intptr_t)(ws+889);
	i1 v192 = *(i1*)(intptr_t)v191;
	i1 v193 = v192+(-1);
	i8 v194 = (i8)(intptr_t)(ws+889);
	*(i1*)(intptr_t)v194 = v193;

	i8 v195 = (i8)(intptr_t)(ws+889);
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

// print_hex_i16 workspace at ws+880 length ws+2
void f20_print_hex_i16(i2 p198 /* value */) {
	*(i2*)(intptr_t)(ws+880) = p198; /*value */

	i8 v199 = (i8)(intptr_t)(ws+880);
	i2 v200 = *(i2*)(intptr_t)v199;
	i1 v201 = (i1)+8;
	i2 v202 = ((i2)v200)>>v201;
	i1 v203 = v202;
	i8 v204 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v204)(v203);

	i8 v205 = (i8)(intptr_t)(ws+880);
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

// print_hex_i32 workspace at ws+880 length ws+4
void f21_print_hex_i32(i4 p209 /* value */) {
	*(i4*)(intptr_t)(ws+880) = p209; /*value */

	i8 v210 = (i8)(intptr_t)(ws+880);
	i4 v211 = *(i4*)(intptr_t)v210;
	i1 v212 = (i1)+24;
	i4 v213 = ((i4)v211)>>v212;
	i1 v214 = v213;
	i8 v215 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v215)(v214);

	i8 v216 = (i8)(intptr_t)(ws+880);
	i4 v217 = *(i4*)(intptr_t)v216;
	i1 v218 = (i1)+16;
	i4 v219 = ((i4)v217)>>v218;
	i1 v220 = v219;
	i8 v221 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v221)(v220);

	i8 v222 = (i8)(intptr_t)(ws+880);
	i4 v223 = *(i4*)(intptr_t)v222;
	i1 v224 = (i1)+8;
	i4 v225 = ((i4)v223)>>v224;
	i1 v226 = v225;
	i8 v227 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v227)(v226);

	i8 v228 = (i8)(intptr_t)(ws+880);
	i4 v229 = *(i4*)(intptr_t)v228;
	i1 v230 = v229;
	i8 v231 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v231)(v230);

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// MemZero workspace at ws+792 length ws+16
void f23_MemZero(i8 p336 /* size */, i8 p337 /* ptr */) {
	*(i8*)(intptr_t)(ws+792) = p337; /*ptr */
	*(i8*)(intptr_t)(ws+800) = p336; /*size */

	i8 v338 = (i8)(intptr_t)(ws+792);
	i8 v339 = *(i8*)(intptr_t)v338;
	i1 v340 = (i1)+0;
	i8 v341 = (i8)(intptr_t)(ws+800);
	i8 v342 = *(i8*)(intptr_t)v341;
	i8 v343 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v343)(v342, v340, v339);

endsub:;
}

// ArgvInit workspace at ws+792 length ws+0
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

// ArgvNext workspace at ws+792 length ws+8
void f25_ArgvNext(i8* p348 /* arg */) {

	i8 v349 = (i8)(intptr_t)(ws+16);
	i8 v350 = *(i8*)(intptr_t)v349;
	i8 v351 = (i8)+0;
	if (v350==v351) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v352 = (i8)+0;
	i8 v353 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v353 = v352;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v354 = (i8)(intptr_t)(ws+16);
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = *(i8*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v357 = v356;

	i8 v358 = (i8)(intptr_t)(ws+792);
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
	*p348 = *(i8*)(intptr_t)(ws+792);
}

// StrCmp workspace at ws+896 length ws+17
void f26_StrCmp(i1* p367 /* res */, i8 p368 /* s2 */, i8 p369 /* s1 */) {
	*(i8*)(intptr_t)(ws+896) = p369; /*s1 */
	*(i8*)(intptr_t)(ws+904) = p368; /*s2 */

c02_0059:;

	i8 v370 = (i8)(intptr_t)(ws+896);
	i8 v371 = *(i8*)(intptr_t)v370;
	i1 v372 = *(i1*)(intptr_t)v371;
	i8 v373 = (i8)(intptr_t)(ws+904);
	i8 v374 = *(i8*)(intptr_t)v373;
	i1 v375 = *(i1*)(intptr_t)v374;
	i1 v376 = v372-v375;
	i8 v377 = (i8)(intptr_t)(ws+912);
	*(i1*)(intptr_t)v377 = v376;

	i8 v378 = (i8)(intptr_t)(ws+912);
	i1 v379 = *(i1*)(intptr_t)v378;
	i1 v380 = (i1)+0;
	if (v379==v380) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v381 = (i8)(intptr_t)(ws+896);
	i8 v382 = *(i8*)(intptr_t)v381;
	i1 v383 = *(i1*)(intptr_t)v382;
	i1 v384 = (i1)+0;
	if (v383==v384) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v385 = (i8)(intptr_t)(ws+896);
	i8 v386 = *(i8*)(intptr_t)v385;
	i8 v387 = v386+(+1);
	i8 v388 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v388 = v387;

	i8 v389 = (i8)(intptr_t)(ws+904);
	i8 v390 = *(i8*)(intptr_t)v389;
	i8 v391 = v390+(+1);
	i8 v392 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v392 = v391;

	goto c02_0059;

c02_005a:;

endsub:;
	*p367 = *(i1*)(intptr_t)(ws+912);
}

// ToLower workspace at ws+816 length ws+2
void f27_ToLower(i1* p393 /* cc */, i1 p394 /* c */) {
	*(i1*)(intptr_t)(ws+816) = p394; /*c */

	i8 v395 = (i8)(intptr_t)(ws+816);
	i1 v396 = *(i1*)(intptr_t)v395;
	i1 v397 = (i1)+65;
	if (v396<v397) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v398 = (i1)+90;
	i8 v399 = (i8)(intptr_t)(ws+816);
	i1 v400 = *(i1*)(intptr_t)v399;
	if (v398<v400) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v401 = (i8)(intptr_t)(ws+816);
	i1 v402 = *(i1*)(intptr_t)v401;
	i1 v403 = v402|(+32);
	i8 v404 = (i8)(intptr_t)(ws+817);
	*(i1*)(intptr_t)v404 = v403;

	goto c02_0063;

c02_0069:;

	i8 v405 = (i8)(intptr_t)(ws+816);
	i1 v406 = *(i1*)(intptr_t)v405;
	i8 v407 = (i8)(intptr_t)(ws+817);
	*(i1*)(intptr_t)v407 = v406;

c02_0063:;

endsub:;
	*p393 = *(i1*)(intptr_t)(ws+817);
}
	void f27_ToLower(i1* /* cc */, i1 /* c */);
	void f27_ToLower(i1* /* cc */, i1 /* c */);

// StrICmp workspace at ws+792 length ws+17
void f28_StrICmp(i1* p408 /* res */, i8 p409 /* s2 */, i8 p410 /* s1 */) {
	*(i8*)(intptr_t)(ws+792) = p410; /*s1 */
	*(i8*)(intptr_t)(ws+800) = p409; /*s2 */

c02_006b:;

	i8 v411 = (i8)(intptr_t)(ws+792);
	i8 v412 = *(i8*)(intptr_t)v411;
	i1 v413 = *(i1*)(intptr_t)v412;
	i8 v414 = (i8)(intptr_t)(f27_ToLower);
	i1 v415;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v414)(&v415, v413);
	i8 v416 = (i8)(intptr_t)(ws+800);
	i8 v417 = *(i8*)(intptr_t)v416;
	i1 v418 = *(i1*)(intptr_t)v417;
	i8 v419 = (i8)(intptr_t)(f27_ToLower);
	i1 v420;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v419)(&v420, v418);
	i1 v421 = v415-v420;
	i8 v422 = (i8)(intptr_t)(ws+808);
	*(i1*)(intptr_t)v422 = v421;

	i8 v423 = (i8)(intptr_t)(ws+808);
	i1 v424 = *(i1*)(intptr_t)v423;
	i1 v425 = (i1)+0;
	if (v424==v425) goto c02_0074; else goto c02_0072;

c02_0074:;

	i8 v426 = (i8)(intptr_t)(ws+792);
	i8 v427 = *(i8*)(intptr_t)v426;
	i1 v428 = *(i1*)(intptr_t)v427;
	i1 v429 = (i1)+0;
	if (v428==v429) goto c02_0072; else goto c02_0073;

c02_0072:;

	goto c02_006c;

c02_0073:;

c02_006d:;

	i8 v430 = (i8)(intptr_t)(ws+792);
	i8 v431 = *(i8*)(intptr_t)v430;
	i8 v432 = v431+(+1);
	i8 v433 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v433 = v432;

	i8 v434 = (i8)(intptr_t)(ws+800);
	i8 v435 = *(i8*)(intptr_t)v434;
	i8 v436 = v435+(+1);
	i8 v437 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v437 = v436;

	goto c02_006b;

c02_006c:;

endsub:;
	*p408 = *(i1*)(intptr_t)(ws+808);
}

// RawAlloc workspace at ws+960 length ws+16
void f32_RawAlloc(i8* p504 /* block */, i8 p505 /* length */) {
	*(i8*)(intptr_t)(ws+960) = p505; /*length */


	
*(i8*)(intptr_t)(ws+968) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+960) 
); 



endsub:;
	*p504 = *(i8*)(intptr_t)(ws+968);
}
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// Alloc workspace at ws+944 length ws+16
void f33_Alloc(i8* p506 /* block */, i8 p507 /* length */) {
	*(i8*)(intptr_t)(ws+944) = p507; /*length */

	i8 v508 = (i8)(intptr_t)(ws+944);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v511;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v510)(&v511, v509);
	i8 v512 = (i8)(intptr_t)(ws+952);
	*(i8*)(intptr_t)v512 = v511;

	i8 v513 = (i8)(intptr_t)(ws+952);
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
	*p506 = *(i8*)(intptr_t)(ws+952);
}

// Free workspace at ws+848 length ws+8
void f34_Free(i8 p519 /* block */) {
	*(i8*)(intptr_t)(ws+848) = p519; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+848) 
); 



endsub:;
}

// StrDup workspace at ws+896 length ws+16
void f35_StrDup(i8* p520 /* sout */, i8 p521 /* s */) {
	*(i8*)(intptr_t)(ws+896) = p521; /*s */


	
*(i8*)(intptr_t)(ws+904) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+896) 
); 



endsub:;
	*p520 = *(i8*)(intptr_t)(ws+904);
}

// GetFreeMemory workspace at ws+792 length ws+8
void f38_GetFreeMemory(i8* p522 /* i */) {

	i8 v523 = (i8)+0;
	i8 v524 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v524 = v523;

endsub:;
	*p522 = *(i8*)(intptr_t)(ws+792);
}

// _fcb_init workspace at ws+936 length ws+8
void f41__fcb_init(i8 p525 /* fcb */) {
	*(i8*)(intptr_t)(ws+936) = p525; /*fcb */

	i4 v526 = (i4)+0;
	i8 v527 = (i8)(intptr_t)(ws+936);
	i8 v528 = *(i8*)(intptr_t)v527;
	i8 v529 = v528+(+4);
	*(i4*)(intptr_t)v529 = v526;

	i2 v530 = (i2)+0;
	i8 v531 = (i8)(intptr_t)(ws+936);
	i8 v532 = *(i8*)(intptr_t)v531;
	i8 v533 = v532+(+8);
	*(i2*)(intptr_t)v533 = v530;

	i2 v534 = (i2)+0;
	i8 v535 = (i8)(intptr_t)(ws+936);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+10);
	*(i2*)(intptr_t)v537 = v534;

	i1 v538 = (i1)+0;
	i8 v539 = (i8)(intptr_t)(ws+936);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+524);
	*(i1*)(intptr_t)v541 = v538;

endsub:;
}

// _fcb_advance workspace at ws+968 length ws+8
void f42__fcb_advance(i8 p542 /* fcb */) {
	*(i8*)(intptr_t)(ws+968) = p542; /*fcb */

	i8 v543 = (i8)(intptr_t)(ws+968);
	i8 v544 = *(i8*)(intptr_t)v543;
	i8 v545 = v544+(+10);
	i2 v546 = *(i2*)(intptr_t)v545;
	i2 v547 = v546+(+1);
	i8 v548 = (i8)(intptr_t)(ws+968);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+10);
	*(i2*)(intptr_t)v550 = v547;

endsub:;
}
	void f39_FCBRawRead(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_fillbuffer workspace at ws+944 length ws+16
void f43__fcb_fillbuffer(i1* p551 /* b */, i8 p552 /* fcb */) {
	*(i8*)(intptr_t)(ws+944) = p552; /*fcb */

	i8 v553 = (i8)(intptr_t)(ws+944);
	i8 v554 = *(i8*)(intptr_t)v553;
	i8 v555 = v554+(+4);
	i4 v556 = *(i4*)(intptr_t)v555;
	i8 v557 = (i8)(intptr_t)(ws+944);
	i8 v558 = *(i8*)(intptr_t)v557;
	i8 v559 = v558+(+10);
	i2 v560 = *(i2*)(intptr_t)v559;
	i4 v561 = v560;
	i4 v562 = v556+v561;
	i8 v563 = (i8)(intptr_t)(ws+956);
	*(i4*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+944);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = (i8)(intptr_t)(ws+956);
	i4 v567 = *(i4*)(intptr_t)v566;
	i2 v568 = (i2)+512;
	i8 v569 = (i8)(intptr_t)(f39_FCBRawRead);
	i2 v570;

	((void(*)(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v569)(&v570, v568, v567, v565);
	i8 v571 = (i8)(intptr_t)(ws+944);
	i8 v572 = *(i8*)(intptr_t)v571;
	i8 v573 = v572+(+8);
	*(i2*)(intptr_t)v573 = v570;

	i1 v574 = (i1)+0;
	i8 v575 = (i8)(intptr_t)(ws+952);
	*(i1*)(intptr_t)v575 = v574;

	i8 v576 = (i8)(intptr_t)(ws+944);
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
	i8 v583 = (i8)(intptr_t)(ws+944);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = v584+(+524);
	*(i1*)(intptr_t)v585 = v582;

	i8 v586 = (i8)(intptr_t)(ws+956);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+944);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+4);
	*(i4*)(intptr_t)v590 = v587;

	i2 v591 = (i2)+0;
	i8 v592 = (i8)(intptr_t)(ws+944);
	i8 v593 = *(i8*)(intptr_t)v592;
	i8 v594 = v593+(+10);
	*(i2*)(intptr_t)v594 = v591;

	i8 v595 = (i8)(intptr_t)(ws+944);
	i8 v596 = *(i8*)(intptr_t)v595;
	i8 v597 = v596+(+8);
	i2 v598 = *(i2*)(intptr_t)v597;
	i2 v599 = (i2)+0;
	if (v598==v599) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v600 = (i8)(intptr_t)(ws+944);
	i8 v601 = *(i8*)(intptr_t)v600;
	i8 v602 = v601+(+12);
	i1 v603 = *(i1*)(intptr_t)v602;
	i8 v604 = (i8)(intptr_t)(ws+952);
	*(i1*)(intptr_t)v604 = v603;

	i8 v605 = (i8)(intptr_t)(ws+944);
	i8 v606 = *(i8*)(intptr_t)v605;
	i8 v607 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v607)(v606);

c02_0097:;

c02_0093:;

endsub:;
	*p551 = *(i1*)(intptr_t)(ws+952);
}
	void f40_FCBRawWrite(i2 /* len */, i4 /* pos */, i8 /* fcb */);

// FCBFlush workspace at ws+968 length ws+12
void f44_FCBFlush(i8 p608 /* fcb */) {
	*(i8*)(intptr_t)(ws+968) = p608; /*fcb */

	i8 v609 = (i8)(intptr_t)(ws+968);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = v610+(+4);
	i4 v612 = *(i4*)(intptr_t)v611;
	i8 v613 = (i8)(intptr_t)(ws+976);
	*(i4*)(intptr_t)v613 = v612;

	i8 v614 = (i8)(intptr_t)(ws+968);
	i8 v615 = *(i8*)(intptr_t)v614;
	i8 v616 = v615+(+524);
	i1 v617 = *(i1*)(intptr_t)v616;
	i1 v618 = v617&(+4);
	i1 v619 = (i1)+0;
	if (v618==v619) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v620 = (i8)(intptr_t)(ws+968);
	i8 v621 = *(i8*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+976);
	i4 v623 = *(i4*)(intptr_t)v622;
	i8 v624 = (i8)(intptr_t)(ws+968);
	i8 v625 = *(i8*)(intptr_t)v624;
	i8 v626 = v625+(+10);
	i2 v627 = *(i2*)(intptr_t)v626;
	i8 v628 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v628)(v627, v623, v621);

	i8 v629 = (i8)(intptr_t)(ws+968);
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

	i8 v635 = (i8)(intptr_t)(ws+976);
	i4 v636 = *(i4*)(intptr_t)v635;
	i8 v637 = (i8)(intptr_t)(ws+968);
	i8 v638 = *(i8*)(intptr_t)v637;
	i8 v639 = v638+(+10);
	i2 v640 = *(i2*)(intptr_t)v639;
	i4 v641 = v640;
	i4 v642 = v636+v641;
	i8 v643 = (i8)(intptr_t)(ws+968);
	i8 v644 = *(i8*)(intptr_t)v643;
	i8 v645 = v644+(+4);
	*(i4*)(intptr_t)v645 = v642;

	i1 v646 = (i1)+0;
	i8 v647 = (i8)(intptr_t)(ws+968);
	i8 v648 = *(i8*)(intptr_t)v647;
	i8 v649 = v648+(+524);
	*(i1*)(intptr_t)v649 = v646;

	i2 v650 = (i2)+0;
	i8 v651 = (i8)(intptr_t)(ws+968);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = v652+(+10);
	*(i2*)(intptr_t)v653 = v650;

	i2 v654 = (i2)+0;
	i8 v655 = (i8)(intptr_t)(ws+968);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+8);
	*(i2*)(intptr_t)v657 = v654;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_flushbuffer workspace at ws+952 length ws+9
void f45__fcb_flushbuffer(i1 p658 /* b */, i8 p659 /* fcb */) {
	*(i8*)(intptr_t)(ws+952) = p659; /*fcb */
	*(i1*)(intptr_t)(ws+960) = p658; /*b */

	i8 v660 = (i8)(intptr_t)(ws+952);
	i8 v661 = *(i8*)(intptr_t)v660;
	i8 v662 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v662)(v661);

	i8 v663 = (i8)(intptr_t)(ws+952);
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
	i8 v670 = (i8)(intptr_t)(ws+952);
	i8 v671 = *(i8*)(intptr_t)v670;
	i8 v672 = v671+(+524);
	*(i1*)(intptr_t)v672 = v669;

	i8 v673 = (i8)(intptr_t)(ws+960);
	i1 v674 = *(i1*)(intptr_t)v673;
	i8 v675 = (i8)(intptr_t)(ws+952);
	i8 v676 = *(i8*)(intptr_t)v675;
	i8 v677 = v676+(+12);
	*(i1*)(intptr_t)v677 = v674;

	i8 v678 = (i8)(intptr_t)(ws+952);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v680)(v679);

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f43__fcb_fillbuffer(i1* /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBGetChar workspace at ws+928 length ws+12
void f46_FCBGetChar(i1* p681 /* b */, i8 p682 /* fcb */) {
	*(i8*)(intptr_t)(ws+928) = p682; /*fcb */

	i8 v683 = (i8)(intptr_t)(ws+928);
	i8 v684 = *(i8*)(intptr_t)v683;
	i8 v685 = v684+(+524);
	i1 v686 = *(i1*)(intptr_t)v685;
	i1 v687 = v686&(+4);
	i1 v688 = (i1)+0;
	if (v687==v688) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v689 = (i8)(intptr_t)(ws+928);
	i8 v690 = *(i8*)(intptr_t)v689;
	i8 v691 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v691)(v690);

c02_00ab:;

c02_00a7:;

	i8 v692 = (i8)(intptr_t)(ws+928);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = v693+(+10);
	i2 v695 = *(i2*)(intptr_t)v694;
	i8 v696 = (i8)(intptr_t)(ws+938);
	*(i2*)(intptr_t)v696 = v695;

	i8 v697 = (i8)(intptr_t)(ws+938);
	i2 v698 = *(i2*)(intptr_t)v697;
	i8 v699 = (i8)(intptr_t)(ws+928);
	i8 v700 = *(i8*)(intptr_t)v699;
	i8 v701 = v700+(+8);
	i2 v702 = *(i2*)(intptr_t)v701;
	if (v698==v702) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v703 = (i8)(intptr_t)(ws+928);
	i8 v704 = *(i8*)(intptr_t)v703;
	i8 v705 = (i8)(intptr_t)(f43__fcb_fillbuffer);
	i1 v706;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v705)(&v706, v704);
	i8 v707 = (i8)(intptr_t)(ws+936);
	*(i1*)(intptr_t)v707 = v706;

	goto c02_00ac;

c02_00b0:;

	i8 v708 = (i8)(intptr_t)(ws+928);
	i8 v709 = *(i8*)(intptr_t)v708;
	i8 v710 = v709+(+12);
	i8 v711 = (i8)(intptr_t)(ws+938);
	i2 v712 = *(i2*)(intptr_t)v711;
	i8 v713 = v712;
	i8 v714 = v710+v713;
	i1 v715 = *(i1*)(intptr_t)v714;
	i8 v716 = (i8)(intptr_t)(ws+936);
	*(i1*)(intptr_t)v716 = v715;

	i8 v717 = (i8)(intptr_t)(ws+928);
	i8 v718 = *(i8*)(intptr_t)v717;
	i8 v719 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v719)(v718);

c02_00ac:;

endsub:;
	*p681 = *(i1*)(intptr_t)(ws+936);
}
	void f44_FCBFlush(i8 /* fcb */);
	void f45__fcb_flushbuffer(i1 /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBPutChar workspace at ws+936 length ws+12
void f47_FCBPutChar(i1 p720 /* b */, i8 p721 /* fcb */) {
	*(i8*)(intptr_t)(ws+936) = p721; /*fcb */
	*(i1*)(intptr_t)(ws+944) = p720; /*b */

	i8 v722 = (i8)(intptr_t)(ws+936);
	i8 v723 = *(i8*)(intptr_t)v722;
	i8 v724 = v723+(+524);
	i1 v725 = *(i1*)(intptr_t)v724;
	i1 v726 = v725&(+2);
	i1 v727 = (i1)+0;
	if (v726==v727) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v728 = (i8)(intptr_t)(ws+936);
	i8 v729 = *(i8*)(intptr_t)v728;
	i8 v730 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v730)(v729);

c02_00b5:;

c02_00b1:;

	i8 v731 = (i8)(intptr_t)(ws+936);
	i8 v732 = *(i8*)(intptr_t)v731;
	i8 v733 = v732+(+10);
	i2 v734 = *(i2*)(intptr_t)v733;
	i8 v735 = (i8)(intptr_t)(ws+946);
	*(i2*)(intptr_t)v735 = v734;

	i8 v736 = (i8)(intptr_t)(ws+946);
	i2 v737 = *(i2*)(intptr_t)v736;
	i2 v738 = (i2)+512;
	if (v737==v738) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v739 = (i8)(intptr_t)(ws+936);
	i8 v740 = *(i8*)(intptr_t)v739;
	i8 v741 = (i8)(intptr_t)(ws+944);
	i1 v742 = *(i1*)(intptr_t)v741;
	i8 v743 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v743)(v742, v740);

	goto c02_00b6;

c02_00ba:;

	i8 v744 = (i8)(intptr_t)(ws+944);
	i1 v745 = *(i1*)(intptr_t)v744;
	i8 v746 = (i8)(intptr_t)(ws+936);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = v747+(+12);
	i8 v749 = (i8)(intptr_t)(ws+946);
	i2 v750 = *(i2*)(intptr_t)v749;
	i8 v751 = v750;
	i8 v752 = v748+v751;
	*(i1*)(intptr_t)v752 = v745;

	i8 v753 = (i8)(intptr_t)(ws+936);
	i8 v754 = *(i8*)(intptr_t)v753;
	i8 v755 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v755)(v754);

c02_00b6:;

	i8 v756 = (i8)(intptr_t)(ws+936);
	i8 v757 = *(i8*)(intptr_t)v756;
	i8 v758 = v757+(+524);
	i1 v759 = *(i1*)(intptr_t)v758;
	i1 v760 = v759|(+4);
	i8 v761 = (i8)(intptr_t)(ws+936);
	i8 v762 = *(i8*)(intptr_t)v761;
	i8 v763 = v762+(+524);
	*(i1*)(intptr_t)v763 = v760;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBSeek workspace at ws+880 length ws+16
void f50_FCBSeek(i4 p789 /* pos */, i8 p790 /* fcb */) {
	*(i8*)(intptr_t)(ws+880) = p790; /*fcb */
	*(i4*)(intptr_t)(ws+888) = p789; /*pos */

	i8 v791 = (i8)(intptr_t)(ws+888);
	i4 v792 = *(i4*)(intptr_t)v791;
	i8 v793 = (i8)(intptr_t)(ws+880);
	i8 v794 = *(i8*)(intptr_t)v793;
	i8 v795 = v794+(+4);
	i4 v796 = *(i4*)(intptr_t)v795;
	i4 v797 = v792-v796;
	i8 v798 = (i8)(intptr_t)(ws+892);
	*(i4*)(intptr_t)v798 = v797;

	i8 v799 = (i8)(intptr_t)(ws+880);
	i8 v800 = *(i8*)(intptr_t)v799;
	i8 v801 = v800+(+524);
	i1 v802 = *(i1*)(intptr_t)v801;
	i1 v803 = v802&(+2);
	i1 v804 = (i1)+0;
	if (v803==v804) goto c02_00c4; else goto c02_00c3;

c02_00c3:;

	i8 v805 = (i8)(intptr_t)(ws+892);
	i4 v806 = *(i4*)(intptr_t)v805;
	i8 v807 = (i8)(intptr_t)(ws+880);
	i8 v808 = *(i8*)(intptr_t)v807;
	i8 v809 = v808+(+8);
	i2 v810 = *(i2*)(intptr_t)v809;
	i4 v811 = v810;
	if (v806<v811) goto c02_00c8; else goto c02_00c9;

c02_00c8:;

	i8 v812 = (i8)(intptr_t)(ws+892);
	i4 v813 = *(i4*)(intptr_t)v812;
	i2 v814 = v813;
	i8 v815 = (i8)(intptr_t)(ws+880);
	i8 v816 = *(i8*)(intptr_t)v815;
	i8 v817 = v816+(+10);
	*(i2*)(intptr_t)v817 = v814;

	goto endsub;

c02_00c9:;

c02_00c5:;

	goto c02_00c0;

c02_00c4:;

	i8 v818 = (i8)(intptr_t)(ws+880);
	i8 v819 = *(i8*)(intptr_t)v818;
	i8 v820 = v819+(+524);
	i1 v821 = *(i1*)(intptr_t)v820;
	i1 v822 = v821&(+4);
	i1 v823 = (i1)+0;
	if (v822==v823) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i8 v824 = (i8)(intptr_t)(ws+880);
	i8 v825 = *(i8*)(intptr_t)v824;
	i8 v826 = v825+(+10);
	i2 v827 = *(i2*)(intptr_t)v826;
	i4 v828 = v827;
	i8 v829 = (i8)(intptr_t)(ws+892);
	i4 v830 = *(i4*)(intptr_t)v829;
	if (v828<v830) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v831 = (i8)(intptr_t)(ws+892);
	i4 v832 = *(i4*)(intptr_t)v831;
	i2 v833 = v832;
	i8 v834 = (i8)(intptr_t)(ws+880);
	i8 v835 = *(i8*)(intptr_t)v834;
	i8 v836 = v835+(+10);
	*(i2*)(intptr_t)v836 = v833;

	goto endsub;

c02_00d2:;

c02_00ce:;

c02_00cd:;

c02_00c0:;

	i8 v837 = (i8)(intptr_t)(ws+880);
	i8 v838 = *(i8*)(intptr_t)v837;
	i8 v839 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v839)(v838);

	i8 v840 = (i8)(intptr_t)(ws+888);
	i4 v841 = *(i4*)(intptr_t)v840;
	i8 v842 = (i8)(intptr_t)(ws+880);
	i8 v843 = *(i8*)(intptr_t)v842;
	i8 v844 = v843+(+4);
	*(i4*)(intptr_t)v844 = v841;

endsub:;
}

// FCBRawRead workspace at ws+960 length ws+36
void f39_FCBRawRead(i2* p845 /* amount */, i2 p846 /* len */, i4 p847 /* pos */, i8 p848 /* fcb */) {
	*(i8*)(intptr_t)(ws+960) = p848; /*fcb */
	*(i4*)(intptr_t)(ws+968) = p847; /*pos */
	*(i2*)(intptr_t)(ws+972) = p846; /*len */

	i8 v849 = (i8)(intptr_t)(ws+960);
	i8 v850 = *(i8*)(intptr_t)v849;
	i4 v851 = *(i4*)(intptr_t)v850;
	i8 v852 = (i8)(intptr_t)(ws+976);
	*(i4*)(intptr_t)v852 = v851;

	i8 v853 = (i8)(intptr_t)(ws+960);
	i8 v854 = *(i8*)(intptr_t)v853;
	i8 v855 = v854+(+12);
	i8 v856 = (i8)(intptr_t)(ws+984);
	*(i8*)(intptr_t)v856 = v855;


	
*(i4*)(intptr_t)(ws+992) 
=pread( 
*(i4*)(intptr_t)(ws+976) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+984) 
,  
*(i2*)(intptr_t)(ws+972) 
,  
*(i4*)(intptr_t)(ws+968) 
); 



	i8 v857 = (i8)(intptr_t)(ws+992);
	i4 v858 = *(i4*)(intptr_t)v857;
	i4 v859 = (i4)-1;
	if (v858==v859) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v860 = (i2)+0;
	i8 v861 = (i8)(intptr_t)(ws+974);
	*(i2*)(intptr_t)v861 = v860;

	i8 v862 = (i8)(intptr_t)(ws+960);
	i8 v863 = *(i8*)(intptr_t)v862;
	i8 v864 = v863+(+524);
	i1 v865 = *(i1*)(intptr_t)v864;
	i1 v866 = v865|(+1);
	i8 v867 = (i8)(intptr_t)(ws+960);
	i8 v868 = *(i8*)(intptr_t)v867;
	i8 v869 = v868+(+524);
	*(i1*)(intptr_t)v869 = v866;

	goto c02_00d3;

c02_00d7:;

	i8 v870 = (i8)(intptr_t)(ws+992);
	i4 v871 = *(i4*)(intptr_t)v870;
	i2 v872 = (s2)(s4)v871;
	i8 v873 = (i8)(intptr_t)(ws+974);
	*(i2*)(intptr_t)v873 = v872;

c02_00d3:;

endsub:;
	*p845 = *(i2*)(intptr_t)(ws+974);
}

// FCBRawWrite workspace at ws+984 length ws+36
void f40_FCBRawWrite(i2 p874 /* len */, i4 p875 /* pos */, i8 p876 /* fcb */) {
	*(i8*)(intptr_t)(ws+984) = p876; /*fcb */
	*(i4*)(intptr_t)(ws+992) = p875; /*pos */
	*(i2*)(intptr_t)(ws+996) = p874; /*len */

	i8 v877 = (i8)(intptr_t)(ws+984);
	i8 v878 = *(i8*)(intptr_t)v877;
	i4 v879 = *(i4*)(intptr_t)v878;
	i8 v880 = (i8)(intptr_t)(ws+1000);
	*(i4*)(intptr_t)v880 = v879;

	i8 v881 = (i8)(intptr_t)(ws+984);
	i8 v882 = *(i8*)(intptr_t)v881;
	i8 v883 = v882+(+12);
	i8 v884 = (i8)(intptr_t)(ws+1008);
	*(i8*)(intptr_t)v884 = v883;


	
*(i4*)(intptr_t)(ws+1016) 
=pwrite( 
*(i4*)(intptr_t)(ws+1000) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1008) 
,  
*(i2*)(intptr_t)(ws+996) 
,  
*(i4*)(intptr_t)(ws+992) 
); 



	i8 v885 = (i8)(intptr_t)(ws+1016);
	i4 v886 = *(i4*)(intptr_t)v885;
	i4 v887 = (i4)-1;
	if (v886==v887) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v888 = (i8)(intptr_t)(ws+984);
	i8 v889 = *(i8*)(intptr_t)v888;
	i8 v890 = v889+(+524);
	i1 v891 = *(i1*)(intptr_t)v890;
	i1 v892 = v891|(+1);
	i8 v893 = (i8)(intptr_t)(ws+984);
	i8 v894 = *(i8*)(intptr_t)v893;
	i8 v895 = v894+(+524);
	*(i1*)(intptr_t)v895 = v892;

c02_00dc:;

c02_00d8:;

endsub:;
}
	void f41__fcb_init(i8 /* fcb */);

// fcb_i_open workspace at ws+904 length ws+28
void f51_fcb_i_open(i1* p896 /* errno */, i4 p897 /* flags */, i8 p898 /* filename */, i8 p899 /* fcb */) {
	*(i8*)(intptr_t)(ws+904) = p899; /*fcb */
	*(i8*)(intptr_t)(ws+912) = p898; /*filename */
	*(i4*)(intptr_t)(ws+920) = p897; /*flags */

	i8 v900 = (i8)(intptr_t)(ws+904);
	i8 v901 = *(i8*)(intptr_t)v900;
	i8 v902 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(i8 /* fcb */))(intptr_t)v902)(v901);


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+928) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+912) 
,  
*(i4*)(intptr_t)(ws+920) 
,  
(+438)
); 



	i8 v903 = (i8)(intptr_t)(ws+928);
	i4 v904 = *(i4*)(intptr_t)v903;
	i8 v905 = (i8)(intptr_t)(ws+904);
	i8 v906 = *(i8*)(intptr_t)v905;
	*(i4*)(intptr_t)v906 = v904;

	i8 v907 = (i8)(intptr_t)(ws+928);
	i4 v908 = *(i4*)(intptr_t)v907;
	i4 v909 = (i4)+0;
	if ((s4)v908<(s4)v909) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+924) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v910 = (i1)+0;
	i8 v911 = (i8)(intptr_t)(ws+924);
	*(i1*)(intptr_t)v911 = v910;

c02_00dd:;

endsub:;
	*p896 = *(i1*)(intptr_t)(ws+924);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+880 length ws+17
void f52_FCBOpenIn(i1* p912 /* errno */, i8 p913 /* filename */, i8 p914 /* fcb */) {
	*(i8*)(intptr_t)(ws+880) = p914; /*fcb */
	*(i8*)(intptr_t)(ws+888) = p913; /*filename */

	i8 v915 = (i8)(intptr_t)(ws+880);
	i8 v916 = *(i8*)(intptr_t)v915;
	i8 v917 = (i8)(intptr_t)(ws+888);
	i8 v918 = *(i8*)(intptr_t)v917;
	i4 v919 = (i4)+0;
	i8 v920 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v921;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v920)(&v921, v919, v918, v916);
	i8 v922 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v922 = v921;

endsub:;
	*p912 = *(i1*)(intptr_t)(ws+896);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+800 length ws+17
void f54_FCBOpenOut(i1* p934 /* errno */, i8 p935 /* filename */, i8 p936 /* fcb */) {
	*(i8*)(intptr_t)(ws+800) = p936; /*fcb */
	*(i8*)(intptr_t)(ws+808) = p935; /*filename */

	i8 v937 = (i8)(intptr_t)(ws+800);
	i8 v938 = *(i8*)(intptr_t)v937;
	i8 v939 = (i8)(intptr_t)(ws+808);
	i8 v940 = *(i8*)(intptr_t)v939;
	i4 v941 = (i4)+578;
	i8 v942 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v943;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v942)(&v943, v941, v940, v938);
	i8 v944 = (i8)(intptr_t)(ws+816);
	*(i1*)(intptr_t)v944 = v943;

endsub:;
	*p934 = *(i1*)(intptr_t)(ws+816);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBClose workspace at ws+792 length ws+16
void f55_FCBClose(i1* p945 /* errno */, i8 p946 /* fcb */) {
	*(i8*)(intptr_t)(ws+792) = p946; /*fcb */

	i8 v947 = (i8)(intptr_t)(ws+792);
	i8 v948 = *(i8*)(intptr_t)v947;
	i8 v949 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v949)(v948);

	i8 v950 = (i8)(intptr_t)(ws+792);
	i8 v951 = *(i8*)(intptr_t)v950;
	i4 v952 = *(i4*)(intptr_t)v951;
	i8 v953 = (i8)(intptr_t)(ws+804);
	*(i4*)(intptr_t)v953 = v952;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+804) 
); 


	
*(i1*)(intptr_t)(ws+800) 
 = errno; 



endsub:;
	*p945 = *(i1*)(intptr_t)(ws+800);
}
const i1 c02_s0001[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);

// StartError workspace at ws+888 length ws+0
void f60_StartError(void) {

	i8 v1027 = (i8)(intptr_t)c02_s0001;
	i8 v1028 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1028)(v1027);

endsub:;
}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+888 length ws+0
void f61_EndError(void) {

	i8 v1029 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1029)();

	i8 v1030 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1030)();

endsub:;
}
	void f60_StartError(void);
	void f12_print(i8 /* ptr */);
	void f61_EndError(void);

// SimpleError workspace at ws+840 length ws+8
void f62_SimpleError(i8 p1031 /* s */) {
	*(i8*)(intptr_t)(ws+840) = p1031; /*s */

	i8 v1032 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1032)();

	i8 v1033 = (i8)(intptr_t)(ws+840);
	i8 v1034 = *(i8*)(intptr_t)v1033;
	i8 v1035 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1035)(v1034);

	i8 v1036 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1036)();

endsub:;
}
	void f60_StartError(void);
const i1 c02_s0002[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0003[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f61_EndError(void);

// CannotOpen workspace at ws+880 length ws+8
void f63_CannotOpen(i8 p1037 /* filename */) {
	*(i8*)(intptr_t)(ws+880) = p1037; /*filename */

	i8 v1038 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1038)();

	i8 v1039 = (i8)(intptr_t)c02_s0002;
	i8 v1040 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1040)(v1039);

	i8 v1041 = (i8)(intptr_t)(ws+880);
	i8 v1042 = *(i8*)(intptr_t)v1041;
	i8 v1043 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1043)(v1042);

	i8 v1044 = (i8)(intptr_t)c02_s0003;
	i8 v1045 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1045)(v1044);

	i8 v1046 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1046)();

endsub:;
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);

// E_b8 workspace at ws+928 length ws+1
void f64_E_b8(i1 p1047 /* c */) {
	*(i1*)(intptr_t)(ws+928) = p1047; /*c */

	i8 v1048 = (i8)(intptr_t)(ws+56);
	i8 v1049 = (i8)(intptr_t)(ws+928);
	i1 v1050 = *(i1*)(intptr_t)v1049;
	i8 v1051 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1051)(v1050, v1048);

endsub:;
}
	void f64_E_b8(i1 /* c */);

// E workspace at ws+912 length ws+9
void f65_E(i8 p1052 /* text */) {
	*(i8*)(intptr_t)(ws+912) = p1052; /*text */

c02_00f5:;

	i8 v1053 = (i8)(intptr_t)(ws+912);
	i8 v1054 = *(i8*)(intptr_t)v1053;
	i1 v1055 = *(i1*)(intptr_t)v1054;
	i8 v1056 = (i8)(intptr_t)(ws+920);
	*(i1*)(intptr_t)v1056 = v1055;

	i8 v1057 = (i8)(intptr_t)(ws+912);
	i8 v1058 = *(i8*)(intptr_t)v1057;
	i8 v1059 = v1058+(+1);
	i8 v1060 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1060 = v1059;

	i8 v1061 = (i8)(intptr_t)(ws+920);
	i1 v1062 = *(i1*)(intptr_t)v1061;
	i1 v1063 = (i1)+0;
	if (v1062==v1063) goto c02_00fa; else goto c02_00fb;

c02_00fa:;

	goto c02_00f6;

c02_00fb:;

c02_00f7:;

	i8 v1064 = (i8)(intptr_t)(ws+920);
	i1 v1065 = *(i1*)(intptr_t)v1064;
	i8 v1066 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1066)(v1065);

	goto c02_00f5;

c02_00f6:;

endsub:;
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f64_E_b8(i1 /* c */);

// E_u32 workspace at ws+888 length ws+33
void f66_E_u32(i4 p1067 /* value */) {
	*(i4*)(intptr_t)(ws+888) = p1067; /*value */

	i8 v1068 = (i8)(intptr_t)(ws+892);
	i8 v1069 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1069 = v1068;

	i8 v1070 = (i8)(intptr_t)(ws+888);
	i4 v1071 = *(i4*)(intptr_t)v1070;
	i1 v1072 = (i1)+10;
	i8 v1073 = (i8)(intptr_t)(ws+904);
	i8 v1074 = *(i8*)(intptr_t)v1073;
	i8 v1075 = (i8)(intptr_t)(f14_UIToA);
	i8 v1076;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1075)(&v1076, v1074, v1072, v1071);
	i8 v1077 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1077 = v1076;

c02_00fc:;

	i8 v1078 = (i8)(intptr_t)(ws+904);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	i1 v1080 = *(i1*)(intptr_t)v1079;
	i8 v1081 = (i8)(intptr_t)(ws+920);
	*(i1*)(intptr_t)v1081 = v1080;

	i8 v1082 = (i8)(intptr_t)(ws+920);
	i1 v1083 = *(i1*)(intptr_t)v1082;
	i1 v1084 = (i1)+0;
	if (v1083==v1084) goto c02_0101; else goto c02_0102;

c02_0101:;

	goto c02_00fd;

c02_0102:;

c02_00fe:;

	i8 v1085 = (i8)(intptr_t)(ws+920);
	i1 v1086 = *(i1*)(intptr_t)v1085;
	i8 v1087 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1087)(v1086);

	i8 v1088 = (i8)(intptr_t)(ws+904);
	i8 v1089 = *(i8*)(intptr_t)v1088;
	i8 v1090 = v1089+(+1);
	i8 v1091 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1091 = v1090;

	goto c02_00fc;

c02_00fd:;

endsub:;
}
	void f66_E_u32(i4 /* value */);

// E_u16 workspace at ws+880 length ws+2
void f67_E_u16(i2 p1092 /* value */) {
	*(i2*)(intptr_t)(ws+880) = p1092; /*value */

	i8 v1093 = (i8)(intptr_t)(ws+880);
	i2 v1094 = *(i2*)(intptr_t)v1093;
	i4 v1095 = v1094;
	i8 v1096 = (i8)(intptr_t)(f66_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1096)(v1095);

endsub:;
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f64_E_b8(i1 /* c */);
	void f65_E(i8 /* text */);

// E_h workspace at ws+880 length ws+25
void f70_E_h(i1 p1117 /* width */, i4 p1118 /* value */) {
	*(i4*)(intptr_t)(ws+880) = p1118; /*value */
	*(i1*)(intptr_t)(ws+884) = p1117; /*width */

	i8 v1119 = (i8)(intptr_t)(ws+880);
	i4 v1120 = *(i4*)(intptr_t)v1119;
	i1 v1121 = (i1)+16;
	i8 v1122 = (i8)(intptr_t)(ws+885);
	i8 v1123 = (i8)(intptr_t)(f14_UIToA);
	i8 v1124;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1123)(&v1124, v1122, v1121, v1120);
	i8 v1125 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v1125 = v1124;

	i8 v1126 = (i8)(intptr_t)(ws+884);
	i1 v1127 = *(i1*)(intptr_t)v1126;
	i8 v1128 = (i8)(intptr_t)(ws+896);
	i8 v1129 = *(i8*)(intptr_t)v1128;
	i8 v1130 = (i8)(intptr_t)(ws+885);
	i8 v1131 = v1129-v1130;
	i1 v1132 = v1131;
	i1 v1133 = v1127-v1132;
	i8 v1134 = (i8)(intptr_t)(ws+904);
	*(i1*)(intptr_t)v1134 = v1133;

c02_010a:;

	i8 v1135 = (i8)(intptr_t)(ws+904);
	i1 v1136 = *(i1*)(intptr_t)v1135;
	i1 v1137 = (i1)+0;
	if (v1136==v1137) goto c02_010d; else goto c02_010c;

c02_010c:;

	i1 v1138 = (i1)+48;
	i8 v1139 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1139)(v1138);

	i8 v1140 = (i8)(intptr_t)(ws+904);
	i1 v1141 = *(i1*)(intptr_t)v1140;
	i1 v1142 = v1141+(-1);
	i8 v1143 = (i8)(intptr_t)(ws+904);
	*(i1*)(intptr_t)v1143 = v1142;

	goto c02_010a;

c02_010d:;

	i8 v1144 = (i8)(intptr_t)(ws+885);
	i8 v1145 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1145)(v1144);

endsub:;
}
	void f70_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+872 length ws+1
void f71_E_h8(i1 p1146 /* value */) {
	*(i1*)(intptr_t)(ws+872) = p1146; /*value */

	i8 v1147 = (i8)(intptr_t)(ws+872);
	i1 v1148 = *(i1*)(intptr_t)v1147;
	i4 v1149 = v1148;
	i1 v1150 = (i1)+2;
	i8 v1151 = (i8)(intptr_t)(f70_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1151)(v1150, v1149);

endsub:;
}
	void f70_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+800 length ws+2
void f72_E_h16(i2 p1152 /* value */) {
	*(i2*)(intptr_t)(ws+800) = p1152; /*value */

	i8 v1153 = (i8)(intptr_t)(ws+800);
	i2 v1154 = *(i2*)(intptr_t)v1153;
	i4 v1155 = v1154;
	i1 v1156 = (i1)+4;
	i8 v1157 = (i8)(intptr_t)(f70_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1157)(v1156, v1155);

endsub:;
}
	void f54_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0004[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f62_SimpleError(i8 /* s */);

// EmitterOpenfile workspace at ws+792 length ws+8
void f73_EmitterOpenfile(i8 p1158 /* filename */) {
	*(i8*)(intptr_t)(ws+792) = p1158; /*filename */

	i8 v1159 = (i8)(intptr_t)(ws+56);
	i8 v1160 = (i8)(intptr_t)(ws+792);
	i8 v1161 = *(i8*)(intptr_t)v1160;
	i8 v1162 = (i8)(intptr_t)(f54_FCBOpenOut);
	i1 v1163;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1162)(&v1163, v1161, v1159);
	i1 v1164 = (i1)+0;
	if (v1163==v1164) goto c02_0112; else goto c02_0111;

c02_0111:;

	i8 v1165 = (i8)(intptr_t)c02_s0004;
	i8 v1166 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1166)(v1165);

c02_0112:;

c02_010e:;

endsub:;
}
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f62_SimpleError(i8 /* s */);

// EmitterClosefile workspace at ws+792 length ws+0
void f74_EmitterClosefile(void) {

	i8 v1167 = (i8)(intptr_t)(ws+56);
	i8 v1168 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1169;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1168)(&v1169, v1167);
	i1 v1170 = (i1)+0;
	if (v1169==v1170) goto c02_0117; else goto c02_0116;

c02_0116:;

	i8 v1171 = (i8)(intptr_t)c02_s0005;
	i8 v1172 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1172)(v1171);

c02_0117:;

c02_0113:;

endsub:;
}

// ArchAlignUp workspace at ws+3248 length ws+8
void f75_ArchAlignUp(i2* p1173 /* newvalue */, i1 p1174 /* alignment */, i2 p1175 /* value */) {
	*(i2*)(intptr_t)(ws+3248) = p1175; /*value */
	*(i1*)(intptr_t)(ws+3250) = p1174; /*alignment */

	i8 v1176 = (i8)(intptr_t)(ws+3250);
	i1 v1177 = *(i1*)(intptr_t)v1176;
	i1 v1178 = v1177+(-1);
	i2 v1179 = v1178;
	i8 v1180 = (i8)(intptr_t)(ws+3254);
	*(i2*)(intptr_t)v1180 = v1179;

	i8 v1181 = (i8)(intptr_t)(ws+3248);
	i2 v1182 = *(i2*)(intptr_t)v1181;
	i8 v1183 = (i8)(intptr_t)(ws+3254);
	i2 v1184 = *(i2*)(intptr_t)v1183;
	i2 v1185 = v1182+v1184;
	i8 v1186 = (i8)(intptr_t)(ws+3254);
	i2 v1187 = *(i2*)(intptr_t)v1186;
	i2 v1188 = ~v1187;
	i2 v1189 = v1185&v1188;
	i8 v1190 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v1190 = v1189;

endsub:;
	*p1173 = *(i2*)(intptr_t)(ws+3252);
}
	void f64_E_b8(i1 /* c */);

// E_nl workspace at ws+872 length ws+0
void f76_E_nl(void) {

	i1 v1191 = (i1)+10;
	i8 v1192 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1192)(v1191);

endsub:;
}
	void f64_E_b8(i1 /* c */);
	void f67_E_u16(i2 /* value */);
	void f64_E_b8(i1 /* c */);
	void f65_E(i8 /* text */);

// ArchEmitSubRef workspace at ws+872 length ws+8
void f77_ArchEmitSubRef(i8 p1193 /* subr */) {
	*(i8*)(intptr_t)(ws+872) = p1193; /*subr */

	i1 v1194 = (i1)+102;
	i8 v1195 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1195)(v1194);

	i8 v1196 = (i8)(intptr_t)(ws+872);
	i8 v1197 = *(i8*)(intptr_t)v1196;
	i8 v1198 = v1197+(+186);
	i2 v1199 = *(i2*)(intptr_t)v1198;
	i8 v1200 = (i8)(intptr_t)(f67_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1200)(v1199);

	i1 v1201 = (i1)+95;
	i8 v1202 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1202)(v1201);

	i8 v1203 = (i8)(intptr_t)(ws+872);
	i8 v1204 = *(i8*)(intptr_t)v1203;
	i8 v1205 = v1204+(+152);
	i8 v1206 = *(i8*)(intptr_t)v1205;
	i8 v1207 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1207)(v1206);

endsub:;
}
const i1 c02_s0006[] = { 0x77,0x73,0x2b,0 };
	void f65_E(i8 /* text */);
	void f67_E_u16(i2 /* value */);

// ArchEmitWSRef workspace at ws+872 length ws+4
void f78_ArchEmitWSRef(i2 p1208 /* address */, i1 p1209 /* wid */) {
	*(i1*)(intptr_t)(ws+872) = p1209; /*wid */
	*(i2*)(intptr_t)(ws+874) = p1208; /*address */

	i8 v1210 = (i8)(intptr_t)c02_s0006;
	i8 v1211 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1211)(v1210);

	i8 v1212 = (i8)(intptr_t)(ws+874);
	i2 v1213 = *(i2*)(intptr_t)v1212;
	i8 v1214 = (i8)(intptr_t)(f67_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1214)(v1213);

endsub:;
}
const i1 c02_s0007[] = { 0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x22,0x63,0x6f,0x77,0x67,0x6f,0x6c,0x2e,0x68,0x22,0x0a,0 };
	void f65_E(i8 /* text */);
const i1 c02_s0008[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x38,0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x5b,0x30,0x78,0 };
	void f65_E(i8 /* text */);
	void f72_E_h16(i2 /* value */);
const i1 c02_s0009[] = { 0x5d,0x3b,0x0a,0 };
	void f65_E(i8 /* text */);
const i1 c02_s000a[] = { 0x23,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0x77,0x73,0x20,0x28,0x28,0x69,0x31,0x2a,0x29,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x29,0x0a,0 };
	void f65_E(i8 /* text */);

// ArchEmitHeader workspace at ws+792 length ws+8
void f79_ArchEmitHeader(i8 p1215 /* coo */) {
	*(i8*)(intptr_t)(ws+792) = p1215; /*coo */

	i8 v1216 = (i8)(intptr_t)c02_s0007;
	i8 v1217 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1217)(v1216);

	i8 v1218 = (i8)(intptr_t)c02_s0008;
	i8 v1219 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1219)(v1218);

	i8 v1220 = (i8)(intptr_t)(ws+582);
	i2 v1221 = *(i2*)(intptr_t)v1220;
	i2 v1222 = v1221+(+7);
	i1 v1223 = (i1)+3;
	i2 v1224 = ((i2)v1222)>>v1223;
	i8 v1225 = (i8)(intptr_t)(f72_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1225)(v1224);

	i8 v1226 = (i8)(intptr_t)c02_s0009;
	i8 v1227 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1227)(v1226);

	i8 v1228 = (i8)(intptr_t)c02_s000a;
	i8 v1229 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1229)(v1228);

endsub:;
}
const i1 c02_s000b[] = { 0x76,0x6f,0x69,0x64,0x20,0x63,0x6d,0x61,0x69,0x6e,0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
	void f65_E(i8 /* text */);
	void f64_E_b8(i1 /* c */);
	void f77_ArchEmitSubRef(i8 /* subr */);
const i1 c02_s000c[] = { 0x28,0x29,0x3b,0x0a,0 };
	void f65_E(i8 /* text */);
const i1 c02_s000d[] = { 0x7d,0x0a,0 };
	void f65_E(i8 /* text */);

// ArchEmitFooter workspace at ws+792 length ws+16
void f80_ArchEmitFooter(i8 p1230 /* coo */) {
	*(i8*)(intptr_t)(ws+792) = p1230; /*coo */

	i8 v1231 = (i8)(intptr_t)c02_s000b;
	i8 v1232 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1232)(v1231);

c02_011a:;

	i8 v1233 = (i8)(intptr_t)(ws+792);
	i8 v1234 = *(i8*)(intptr_t)v1233;
	i8 v1235 = (i8)+0;
	if (v1234==v1235) goto c02_011d; else goto c02_011c;

c02_011c:;

	i8 v1236 = (i8)(intptr_t)(ws+792);
	i8 v1237 = *(i8*)(intptr_t)v1236;
	i8 v1238 = v1237+(+544);
	i8 v1239 = *(i8*)(intptr_t)v1238;
	i8 v1240 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v1240 = v1239;

	i8 v1241 = (i8)(intptr_t)(ws+800);
	i8 v1242 = *(i8*)(intptr_t)v1241;
	i8 v1243 = (i8)+0;
	if (v1242==v1243) goto c02_0122; else goto c02_0121;

c02_0121:;

	i1 v1244 = (i1)+9;
	i8 v1245 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1245)(v1244);

	i8 v1246 = (i8)(intptr_t)(ws+800);
	i8 v1247 = *(i8*)(intptr_t)v1246;
	i8 v1248 = (i8)(intptr_t)(f77_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1248)(v1247);

	i8 v1249 = (i8)(intptr_t)c02_s000c;
	i8 v1250 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1250)(v1249);

c02_0122:;

c02_011e:;

	i8 v1251 = (i8)(intptr_t)(ws+792);
	i8 v1252 = *(i8*)(intptr_t)v1251;
	i8 v1253 = v1252+(+672);
	i8 v1254 = *(i8*)(intptr_t)v1253;
	i8 v1255 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v1255 = v1254;

	goto c02_011a;

c02_011d:;

	i8 v1256 = (i8)(intptr_t)c02_s000d;
	i8 v1257 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1257)(v1256);

endsub:;
}
	void f46_FCBGetChar(i1* /* b */, i8 /* fcb */);

// read_bin1 workspace at ws+912 length ws+9
void f81_read_bin1(i1* p1260 /* c */, i8 p1261 /* fcb */) {
	*(i8*)(intptr_t)(ws+912) = p1261; /*fcb */

	i8 v1262 = (i8)(intptr_t)(ws+912);
	i8 v1263 = *(i8*)(intptr_t)v1262;
	i8 v1264 = (i8)(intptr_t)(f46_FCBGetChar);
	i1 v1265;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v1264)(&v1265, v1263);
	i8 v1266 = (i8)(intptr_t)(ws+920);
	*(i1*)(intptr_t)v1266 = v1265;

endsub:;
	*p1260 = *(i1*)(intptr_t)(ws+920);
}
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);

// read_bin2 workspace at ws+880 length ws+10
void f82_read_bin2(i2* p1267 /* val */, i8 p1268 /* fcb */) {
	*(i8*)(intptr_t)(ws+880) = p1268; /*fcb */

	i8 v1269 = (i8)(intptr_t)(ws+880);
	i8 v1270 = *(i8*)(intptr_t)v1269;
	i8 v1271 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1272;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1271)(&v1272, v1270);
	i2 v1273 = v1272;
	i8 v1274 = (i8)(intptr_t)(ws+888);
	*(i2*)(intptr_t)v1274 = v1273;

	i8 v1275 = (i8)(intptr_t)(ws+888);
	i2 v1276 = *(i2*)(intptr_t)v1275;
	i8 v1277 = (i8)(intptr_t)(ws+880);
	i8 v1278 = *(i8*)(intptr_t)v1277;
	i8 v1279 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1280;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1279)(&v1280, v1278);
	i2 v1281 = v1280;
	i1 v1282 = (i1)+8;
	i2 v1283 = ((i2)v1281)<<v1282;
	i2 v1284 = v1276|v1283;
	i8 v1285 = (i8)(intptr_t)(ws+888);
	*(i2*)(intptr_t)v1285 = v1284;

endsub:;
	*p1267 = *(i2*)(intptr_t)(ws+888);
}
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);

// read_string workspace at ws+880 length ws+32
void f83_read_string(i8* p1286 /* ptr */, i1 p1287 /* len */, i8 p1288 /* fcb */) {
	*(i8*)(intptr_t)(ws+880) = p1288; /*fcb */
	*(i1*)(intptr_t)(ws+888) = p1287; /*len */

	i8 v1289 = (i8)(intptr_t)(ws+888);
	i1 v1290 = *(i1*)(intptr_t)v1289;
	i1 v1291 = v1290+(+1);
	i8 v1292 = v1291;
	i8 v1293 = (i8)(intptr_t)(f33_Alloc);
	i8 v1294;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1293)(&v1294, v1292);
	i8 v1295 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v1295 = v1294;

	i8 v1296 = (i8)(intptr_t)(ws+896);
	i8 v1297 = *(i8*)(intptr_t)v1296;
	i8 v1298 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1298 = v1297;

c02_0123:;

	i8 v1299 = (i8)(intptr_t)(ws+888);
	i1 v1300 = *(i1*)(intptr_t)v1299;
	i1 v1301 = (i1)+0;
	if (v1300==v1301) goto c02_0128; else goto c02_0129;

c02_0128:;

	goto c02_0124;

c02_0129:;

c02_0125:;

	i8 v1302 = (i8)(intptr_t)(ws+880);
	i8 v1303 = *(i8*)(intptr_t)v1302;
	i8 v1304 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1305;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1304)(&v1305, v1303);
	i8 v1306 = (i8)(intptr_t)(ws+904);
	i8 v1307 = *(i8*)(intptr_t)v1306;
	*(i1*)(intptr_t)v1307 = v1305;

	i8 v1308 = (i8)(intptr_t)(ws+904);
	i8 v1309 = *(i8*)(intptr_t)v1308;
	i8 v1310 = v1309+(+1);
	i8 v1311 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1311 = v1310;

	i8 v1312 = (i8)(intptr_t)(ws+888);
	i1 v1313 = *(i1*)(intptr_t)v1312;
	i1 v1314 = v1313+(-1);
	i8 v1315 = (i8)(intptr_t)(ws+888);
	*(i1*)(intptr_t)v1315 = v1314;

	goto c02_0123;

c02_0124:;

endsub:;
	*p1286 = *(i8*)(intptr_t)(ws+896);
}
	void f33_Alloc(i8* /* block */, i8 /* length */);

// AddRef workspace at ws+880 length ws+32
void f84_AddRef(i8 p1316 /* calls */, i8 p1317 /* subr */) {
	*(i8*)(intptr_t)(ws+880) = p1317; /*subr */
	*(i8*)(intptr_t)(ws+888) = p1316; /*calls */

	i8 v1318 = (i8)(intptr_t)(ws+880);
	i8 v1319 = *(i8*)(intptr_t)v1318;
	i8 v1320 = v1319+(+184);
	i2 v1321 = *(i2*)(intptr_t)v1320;
	i8 v1322 = (i8)(intptr_t)(ws+896);
	*(i2*)(intptr_t)v1322 = v1321;

	i8 v1323 = (i8)(intptr_t)(ws+896);
	i2 v1324 = *(i2*)(intptr_t)v1323;
	i2 v1325 = v1324+(+1);
	i8 v1326 = (i8)(intptr_t)(ws+880);
	i8 v1327 = *(i8*)(intptr_t)v1326;
	i8 v1328 = v1327+(+184);
	*(i2*)(intptr_t)v1328 = v1325;

	i8 v1329 = (i8)(intptr_t)(ws+880);
	i8 v1330 = *(i8*)(intptr_t)v1329;
	i8 v1331 = v1330+(+16);
	i8 v1332 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1332 = v1331;

c02_012c:;

	i8 v1333 = (i8)(intptr_t)(ws+896);
	i2 v1334 = *(i2*)(intptr_t)v1333;
	i2 v1335 = (i2)+16;
	if (v1334<v1335) goto c02_012f; else goto c02_012e;

c02_012e:;

	i8 v1336 = (i8)(intptr_t)(ws+904);
	i8 v1337 = *(i8*)(intptr_t)v1336;
	i8 v1338 = *(i8*)(intptr_t)v1337;
	i8 v1339 = (i8)+0;
	if (v1338==v1339) goto c02_0133; else goto c02_0134;

c02_0133:;

	i8 v1340 = (i8)+136;
	i8 v1341 = (i8)(intptr_t)(f33_Alloc);
	i8 v1342;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1341)(&v1342, v1340);
	i8 v1343 = (i8)(intptr_t)(ws+904);
	i8 v1344 = *(i8*)(intptr_t)v1343;
	*(i8*)(intptr_t)v1344 = v1342;

c02_0134:;

c02_0130:;

	i8 v1345 = (i8)(intptr_t)(ws+904);
	i8 v1346 = *(i8*)(intptr_t)v1345;
	i8 v1347 = *(i8*)(intptr_t)v1346;
	i8 v1348 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1348 = v1347;

	i8 v1349 = (i8)(intptr_t)(ws+896);
	i2 v1350 = *(i2*)(intptr_t)v1349;
	i2 v1351 = v1350+(-16);
	i8 v1352 = (i8)(intptr_t)(ws+896);
	*(i2*)(intptr_t)v1352 = v1351;

	goto c02_012c;

c02_012f:;

	i8 v1353 = (i8)(intptr_t)(ws+888);
	i8 v1354 = *(i8*)(intptr_t)v1353;
	i8 v1355 = (i8)(intptr_t)(ws+904);
	i8 v1356 = *(i8*)(intptr_t)v1355;
	i8 v1357 = v1356+(+8);
	i8 v1358 = (i8)(intptr_t)(ws+896);
	i2 v1359 = *(i2*)(intptr_t)v1358;
	i1 v1360 = v1359;
	i8 v1361 = v1360;
	i1 v1362 = (i1)+3;
	i8 v1363 = ((i8)v1361)<<v1362;
	i8 v1364 = v1357+v1363;
	*(i8*)(intptr_t)v1364 = v1354;

endsub:;
}
	void f33_Alloc(i8* /* block */, i8 /* length */);

// FindSub workspace at ws+912 length ws+32
void f85_FindSub(i8* p1365 /* ptr */, i2 p1366 /* id */, i8 p1367 /* coo */) {
	*(i8*)(intptr_t)(ws+912) = p1367; /*coo */
	*(i2*)(intptr_t)(ws+920) = p1366; /*id */

	i8 v1368 = (i8)(intptr_t)(ws+912);
	i8 v1369 = *(i8*)(intptr_t)v1368;
	i8 v1370 = v1369+(+536);
	i8 v1371 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)v1371 = v1370;

c02_0137:;

	i8 v1372 = (i8)(intptr_t)(ws+920);
	i2 v1373 = *(i2*)(intptr_t)v1372;
	i2 v1374 = (i2)+16;
	if (v1373<v1374) goto c02_013a; else goto c02_0139;

c02_0139:;

	i8 v1375 = (i8)(intptr_t)(ws+936);
	i8 v1376 = *(i8*)(intptr_t)v1375;
	i8 v1377 = *(i8*)(intptr_t)v1376;
	i8 v1378 = (i8)+0;
	if (v1377==v1378) goto c02_013e; else goto c02_013f;

c02_013e:;

	i8 v1379 = (i8)+136;
	i8 v1380 = (i8)(intptr_t)(f33_Alloc);
	i8 v1381;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1380)(&v1381, v1379);
	i8 v1382 = (i8)(intptr_t)(ws+936);
	i8 v1383 = *(i8*)(intptr_t)v1382;
	*(i8*)(intptr_t)v1383 = v1381;

c02_013f:;

c02_013b:;

	i8 v1384 = (i8)(intptr_t)(ws+936);
	i8 v1385 = *(i8*)(intptr_t)v1384;
	i8 v1386 = *(i8*)(intptr_t)v1385;
	i8 v1387 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)v1387 = v1386;

	i8 v1388 = (i8)(intptr_t)(ws+920);
	i2 v1389 = *(i2*)(intptr_t)v1388;
	i2 v1390 = v1389+(-16);
	i8 v1391 = (i8)(intptr_t)(ws+920);
	*(i2*)(intptr_t)v1391 = v1390;

	goto c02_0137;

c02_013a:;

	i8 v1392 = (i8)(intptr_t)(ws+936);
	i8 v1393 = *(i8*)(intptr_t)v1392;
	i8 v1394 = v1393+(+8);
	i8 v1395 = (i8)(intptr_t)(ws+920);
	i2 v1396 = *(i2*)(intptr_t)v1395;
	i1 v1397 = v1396;
	i8 v1398 = v1397;
	i1 v1399 = (i1)+3;
	i8 v1400 = ((i8)v1398)<<v1399;
	i8 v1401 = v1394+v1400;
	i8 v1402 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v1402 = v1401;

endsub:;
	*p1365 = *(i8*)(intptr_t)(ws+928);
}
	void f85_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	void f33_Alloc(i8* /* block */, i8 /* length */);

// FindOrCreateSub workspace at ws+880 length ws+32
void f86_FindOrCreateSub(i8* p1403 /* subroutine */, i2 p1404 /* id */, i8 p1405 /* coo */) {
	*(i8*)(intptr_t)(ws+880) = p1405; /*coo */
	*(i2*)(intptr_t)(ws+888) = p1404; /*id */

	i8 v1406 = (i8)(intptr_t)(ws+880);
	i8 v1407 = *(i8*)(intptr_t)v1406;
	i8 v1408 = (i8)(intptr_t)(ws+888);
	i2 v1409 = *(i2*)(intptr_t)v1408;
	i8 v1410 = (i8)(intptr_t)(f85_FindSub);
	i8 v1411;

	((void(*)(i8* /* ptr */, i2 /* id */, i8 /* coo */))(intptr_t)v1410)(&v1411, v1409, v1407);
	i8 v1412 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1412 = v1411;

	i8 v1413 = (i8)(intptr_t)(ws+904);
	i8 v1414 = *(i8*)(intptr_t)v1413;
	i8 v1415 = *(i8*)(intptr_t)v1414;
	i8 v1416 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v1416 = v1415;

	i8 v1417 = (i8)(intptr_t)(ws+896);
	i8 v1418 = *(i8*)(intptr_t)v1417;
	i8 v1419 = (i8)+0;
	if (v1418==v1419) goto c02_0143; else goto c02_0144;

c02_0143:;

	i8 v1420 = (i8)+189;
	i8 v1421 = (i8)(intptr_t)(f33_Alloc);
	i8 v1422;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1421)(&v1422, v1420);
	i8 v1423 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v1423 = v1422;

	i8 v1424 = (i8)(intptr_t)(ws+880);
	i8 v1425 = *(i8*)(intptr_t)v1424;
	i8 v1426 = (i8)(intptr_t)(ws+896);
	i8 v1427 = *(i8*)(intptr_t)v1426;
	*(i8*)(intptr_t)v1427 = v1425;

	i8 v1428 = (i8)(intptr_t)(ws+32);
	i8 v1429 = *(i8*)(intptr_t)v1428;
	i8 v1430 = (i8)(intptr_t)(ws+896);
	i8 v1431 = *(i8*)(intptr_t)v1430;
	i8 v1432 = v1431+(+8);
	*(i8*)(intptr_t)v1432 = v1429;

	i8 v1433 = (i8)(intptr_t)(ws+896);
	i8 v1434 = *(i8*)(intptr_t)v1433;
	i8 v1435 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1435 = v1434;

	i8 v1436 = (i8)(intptr_t)(ws+40);
	i2 v1437 = *(i2*)(intptr_t)v1436;
	i8 v1438 = (i8)(intptr_t)(ws+896);
	i8 v1439 = *(i8*)(intptr_t)v1438;
	i8 v1440 = v1439+(+186);
	*(i2*)(intptr_t)v1440 = v1437;

	i8 v1441 = (i8)(intptr_t)(ws+896);
	i8 v1442 = *(i8*)(intptr_t)v1441;
	i8 v1443 = (i8)(intptr_t)(ws+904);
	i8 v1444 = *(i8*)(intptr_t)v1443;
	*(i8*)(intptr_t)v1444 = v1442;

	i8 v1445 = (i8)(intptr_t)(ws+40);
	i2 v1446 = *(i2*)(intptr_t)v1445;
	i2 v1447 = v1446+(+1);
	i8 v1448 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1448 = v1447;

c02_0144:;

c02_0140:;

endsub:;
	*p1403 = *(i8*)(intptr_t)(ws+896);
}

// Deref workspace at ws+3248 length ws+24
void f87_Deref(i8* p1449 /* subout */, i8 p1450 /* subin */) {
	*(i8*)(intptr_t)(ws+3248) = p1450; /*subin */

	i8 v1451 = (i8)(intptr_t)(ws+3248);
	i8 v1452 = *(i8*)(intptr_t)v1451;
	i8 v1453 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v1453 = v1452;

	i8 v1454 = (i8)(intptr_t)(ws+3248);
	i8 v1455 = *(i8*)(intptr_t)v1454;
	i8 v1456 = (i8)+0;
	if (v1455==v1456) goto c02_0149; else goto c02_0148;

c02_0148:;

	i8 v1457 = (i8)(intptr_t)(ws+3248);
	i8 v1458 = *(i8*)(intptr_t)v1457;
	i8 v1459 = v1458+(+160);
	i8 v1460 = *(i8*)(intptr_t)v1459;
	i8 v1461 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v1461 = v1460;

	i8 v1462 = (i8)(intptr_t)(ws+3264);
	i8 v1463 = *(i8*)(intptr_t)v1462;
	i8 v1464 = (i8)+0;
	if (v1463==v1464) goto c02_014e; else goto c02_014d;

c02_014d:;

	i8 v1465 = (i8)(intptr_t)(ws+3264);
	i8 v1466 = *(i8*)(intptr_t)v1465;
	i8 v1467 = v1466+(+16);
	i8 v1468 = *(i8*)(intptr_t)v1467;
	i8 v1469 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v1469 = v1468;

c02_014e:;

c02_014a:;

c02_0149:;

c02_0145:;

endsub:;
	*p1449 = *(i8*)(intptr_t)(ws+3256);
}
	void f26_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f35_StrDup(i8* /* sout */, i8 /* s */);

// FindOrCreateExternal workspace at ws+880 length ws+16
void f88_FindOrCreateExternal(i8* p1470 /* external */, i8 p1471 /* name */) {
	*(i8*)(intptr_t)(ws+880) = p1471; /*name */

	i8 v1472 = (i8)(intptr_t)(ws+24);
	i8 v1473 = *(i8*)(intptr_t)v1472;
	i8 v1474 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v1474 = v1473;

c02_0151:;

	i8 v1475 = (i8)(intptr_t)(ws+888);
	i8 v1476 = *(i8*)(intptr_t)v1475;
	i8 v1477 = (i8)+0;
	if (v1476==v1477) goto c02_0154; else goto c02_0153;

c02_0153:;

	i8 v1478 = (i8)(intptr_t)(ws+888);
	i8 v1479 = *(i8*)(intptr_t)v1478;
	i8 v1480 = v1479+(+8);
	i8 v1481 = *(i8*)(intptr_t)v1480;
	i8 v1482 = (i8)(intptr_t)(ws+880);
	i8 v1483 = *(i8*)(intptr_t)v1482;
	i8 v1484 = (i8)(intptr_t)(f26_StrCmp);
	i1 v1485;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1484)(&v1485, v1483, v1481);
	i1 v1486 = (i1)+0;
	if (v1485==v1486) goto c02_0158; else goto c02_0159;

c02_0158:;

	goto endsub;

c02_0159:;

c02_0155:;

	i8 v1487 = (i8)(intptr_t)(ws+888);
	i8 v1488 = *(i8*)(intptr_t)v1487;
	i8 v1489 = *(i8*)(intptr_t)v1488;
	i8 v1490 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v1490 = v1489;

	goto c02_0151;

c02_0154:;

	i8 v1491 = (i8)+24;
	i8 v1492 = (i8)(intptr_t)(f33_Alloc);
	i8 v1493;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1492)(&v1493, v1491);
	i8 v1494 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v1494 = v1493;

	i8 v1495 = (i8)(intptr_t)(ws+24);
	i8 v1496 = *(i8*)(intptr_t)v1495;
	i8 v1497 = (i8)(intptr_t)(ws+888);
	i8 v1498 = *(i8*)(intptr_t)v1497;
	*(i8*)(intptr_t)v1498 = v1496;

	i8 v1499 = (i8)(intptr_t)(ws+880);
	i8 v1500 = *(i8*)(intptr_t)v1499;
	i8 v1501 = (i8)(intptr_t)(f35_StrDup);
	i8 v1502;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v1501)(&v1502, v1500);
	i8 v1503 = (i8)(intptr_t)(ws+888);
	i8 v1504 = *(i8*)(intptr_t)v1503;
	i8 v1505 = v1504+(+8);
	*(i8*)(intptr_t)v1505 = v1502;

	i8 v1506 = (i8)(intptr_t)(ws+888);
	i8 v1507 = *(i8*)(intptr_t)v1506;
	i8 v1508 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1508 = v1507;

endsub:;
	*p1470 = *(i8*)(intptr_t)(ws+888);
}
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f52_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f63_CannotOpen(i8 /* filename */);
	void f50_FCBSeek(i4 /* pos */, i8 /* fcb */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f84_AddRef(i8 /* calls */, i8 /* subr */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f83_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f83_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	void f88_FindOrCreateExternal(i8* /* external */, i8 /* name */);
	void f60_StartError(void);
const i1 c02_s000e[] = { 0x6d,0x75,0x6c,0x74,0x69,0x70,0x6c,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x64,0x65,0x63,0x6c,0x61,0x72,0x61,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6f,0x66,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s000f[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f61_EndError(void);
const i1 c02_s0010[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f9_print_char(i1 /* c */);
const i1 c02_s0011[] = { 0x27,0x20,0x69,0x6e,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0012[] = { 0x20,0x61,0x74,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// OpenAndLoadCoo workspace at ws+816 length ws+64
void f89_OpenAndLoadCoo(i8* p1509 /* coo */, i8 p1510 /* filename */) {
	*(i8*)(intptr_t)(ws+816) = p1510; /*filename */

	i8 v1511 = (i8)+682;
	i8 v1512 = (i8)(intptr_t)(f33_Alloc);
	i8 v1513;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1512)(&v1513, v1511);
	i8 v1514 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v1514 = v1513;

	i8 v1515 = (i8)(intptr_t)(ws+40);
	i2 v1516 = *(i2*)(intptr_t)v1515;
	i8 v1517 = (i8)(intptr_t)(ws+824);
	i8 v1518 = *(i8*)(intptr_t)v1517;
	i8 v1519 = v1518+(+680);
	*(i2*)(intptr_t)v1519 = v1516;

	i8 v1520 = (i8)(intptr_t)(ws+816);
	i8 v1521 = *(i8*)(intptr_t)v1520;
	i8 v1522 = (i8)(intptr_t)(ws+824);
	i8 v1523 = *(i8*)(intptr_t)v1522;
	i8 v1524 = v1523+(+528);
	*(i8*)(intptr_t)v1524 = v1521;

	i8 v1525 = (i8)(intptr_t)(ws+40);
	i2 v1526 = *(i2*)(intptr_t)v1525;
	i2 v1527 = v1526+(+1);
	i8 v1528 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1528 = v1527;

	i8 v1529 = (i8)(intptr_t)(ws+824);
	i8 v1530 = *(i8*)(intptr_t)v1529;
	i8 v1531 = (i8)(intptr_t)(ws+816);
	i8 v1532 = *(i8*)(intptr_t)v1531;
	i8 v1533 = (i8)(intptr_t)(f52_FCBOpenIn);
	i1 v1534;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1533)(&v1534, v1532, v1530);
	i1 v1535 = (i1)+0;
	if (v1534==v1535) goto c02_015e; else goto c02_015d;

c02_015d:;

	i8 v1536 = (i8)(intptr_t)(ws+816);
	i8 v1537 = *(i8*)(intptr_t)v1536;
	i8 v1538 = (i8)(intptr_t)(f63_CannotOpen);

	((void(*)(i8 /* filename */))(intptr_t)v1538)(v1537);

c02_015e:;

c02_015a:;

	i4 v1539 = (i4)+0;
	i8 v1540 = (i8)(intptr_t)(ws+836);
	*(i4*)(intptr_t)v1540 = v1539;

c02_015f:;

	i8 v1541 = (i8)(intptr_t)(ws+824);
	i8 v1542 = *(i8*)(intptr_t)v1541;
	i8 v1543 = (i8)(intptr_t)(ws+836);
	i4 v1544 = *(i4*)(intptr_t)v1543;
	i8 v1545 = (i8)(intptr_t)(f50_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1545)(v1544, v1542);

	i8 v1546 = (i8)(intptr_t)(ws+824);
	i8 v1547 = *(i8*)(intptr_t)v1546;
	i8 v1548 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1549;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1548)(&v1549, v1547);
	i8 v1550 = (i8)(intptr_t)(ws+840);
	*(i1*)(intptr_t)v1550 = v1549;

	i8 v1551 = (i8)(intptr_t)(ws+824);
	i8 v1552 = *(i8*)(intptr_t)v1551;
	i8 v1553 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1554;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1553)(&v1554, v1552);
	i8 v1555 = (i8)(intptr_t)(ws+842);
	*(i2*)(intptr_t)v1555 = v1554;

	i8 v1556 = (i8)(intptr_t)(ws+840);
	i1 v1557 = *(i1*)(intptr_t)v1556;
	i1 v1558 = (i1)+69;
	if (v1557==v1558) goto c02_0164; else goto c02_0165;

c02_0164:;

	goto c02_0160;

c02_0165:;

	i8 v1559 = (i8)(intptr_t)(ws+840);
	i1 v1560 = *(i1*)(intptr_t)v1559;
	i1 v1561 = (i1)+70;
	if (v1560==v1561) goto c02_0168; else goto c02_0169;

c02_0168:;

	i8 v1562 = (i8)(intptr_t)(ws+824);
	i8 v1563 = *(i8*)(intptr_t)v1562;
	i8 v1564 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1565;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1564)(&v1565, v1563);
	i8 v1566 = (i8)(intptr_t)(ws+832);
	*(i1*)(intptr_t)v1566 = v1565;

	i8 v1567 = (i8)(intptr_t)(ws+824);
	i8 v1568 = *(i8*)(intptr_t)v1567;
	i8 v1569 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1570;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1569)(&v1570, v1568);
	i8 v1571 = (i8)(intptr_t)(ws+834);
	*(i2*)(intptr_t)v1571 = v1570;

	i8 v1572 = (i8)(intptr_t)(ws+824);
	i8 v1573 = *(i8*)(intptr_t)v1572;
	i8 v1574 = (i8)(intptr_t)(ws+834);
	i2 v1575 = *(i2*)(intptr_t)v1574;
	i8 v1576 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1577;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1576)(&v1577, v1575, v1573);
	i8 v1578 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v1578 = v1577;

	i8 v1579 = (i8)(intptr_t)(ws+848);
	i8 v1580 = *(i8*)(intptr_t)v1579;
	i8 v1581 = v1580+(+188);
	i1 v1582 = *(i1*)(intptr_t)v1581;
	i1 v1583 = v1582|(+2);
	i8 v1584 = (i8)(intptr_t)(ws+848);
	i8 v1585 = *(i8*)(intptr_t)v1584;
	i8 v1586 = v1585+(+188);
	*(i1*)(intptr_t)v1586 = v1583;

	goto c02_0161;

c02_0169:;

	i8 v1587 = (i8)(intptr_t)(ws+840);
	i1 v1588 = *(i1*)(intptr_t)v1587;
	i1 v1589 = (i1)+82;
	if (v1588==v1589) goto c02_016c; else goto c02_016d;

c02_016c:;

	i8 v1590 = (i8)(intptr_t)(ws+824);
	i8 v1591 = *(i8*)(intptr_t)v1590;
	i8 v1592 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1593;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1592)(&v1593, v1591);
	i8 v1594 = (i8)(intptr_t)(ws+856);
	*(i2*)(intptr_t)v1594 = v1593;

	i8 v1595 = (i8)(intptr_t)(ws+824);
	i8 v1596 = *(i8*)(intptr_t)v1595;
	i8 v1597 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1598;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1597)(&v1598, v1596);
	i8 v1599 = (i8)(intptr_t)(ws+858);
	*(i2*)(intptr_t)v1599 = v1598;

	i8 v1600 = (i8)(intptr_t)(ws+824);
	i8 v1601 = *(i8*)(intptr_t)v1600;
	i8 v1602 = (i8)(intptr_t)(ws+856);
	i2 v1603 = *(i2*)(intptr_t)v1602;
	i8 v1604 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1605;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1604)(&v1605, v1603, v1601);
	i8 v1606 = (i8)(intptr_t)(ws+824);
	i8 v1607 = *(i8*)(intptr_t)v1606;
	i8 v1608 = (i8)(intptr_t)(ws+858);
	i2 v1609 = *(i2*)(intptr_t)v1608;
	i8 v1610 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1611;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1610)(&v1611, v1609, v1607);
	i8 v1612 = (i8)(intptr_t)(f84_AddRef);

	((void(*)(i8 /* calls */, i8 /* subr */))(intptr_t)v1612)(v1611, v1605);

	goto c02_0161;

c02_016d:;

	i8 v1613 = (i8)(intptr_t)(ws+840);
	i1 v1614 = *(i1*)(intptr_t)v1613;
	i1 v1615 = (i1)+87;
	if (v1614==v1615) goto c02_0170; else goto c02_0171;

c02_0170:;

	i8 v1616 = (i8)(intptr_t)(ws+824);
	i8 v1617 = *(i8*)(intptr_t)v1616;
	i8 v1618 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1619;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1618)(&v1619, v1617);
	i8 v1620 = (i8)(intptr_t)(ws+834);
	*(i2*)(intptr_t)v1620 = v1619;

	i8 v1621 = (i8)(intptr_t)(ws+824);
	i8 v1622 = *(i8*)(intptr_t)v1621;
	i8 v1623 = (i8)(intptr_t)(ws+834);
	i2 v1624 = *(i2*)(intptr_t)v1623;
	i8 v1625 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1626;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1625)(&v1626, v1624, v1622);
	i8 v1627 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v1627 = v1626;

	i8 v1628 = (i8)(intptr_t)(ws+824);
	i8 v1629 = *(i8*)(intptr_t)v1628;
	i8 v1630 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1631;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1630)(&v1631, v1629);
	i8 v1632 = (i8)(intptr_t)(ws+860);
	*(i1*)(intptr_t)v1632 = v1631;

	i8 v1633 = (i8)(intptr_t)(ws+824);
	i8 v1634 = *(i8*)(intptr_t)v1633;
	i8 v1635 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1636;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1635)(&v1636, v1634);
	i8 v1637 = (i8)(intptr_t)(ws+848);
	i8 v1638 = *(i8*)(intptr_t)v1637;
	i8 v1639 = v1638+(+168);
	i8 v1640 = (i8)(intptr_t)(ws+860);
	i1 v1641 = *(i1*)(intptr_t)v1640;
	i8 v1642 = v1641;
	i1 v1643 = (i1)+1;
	i8 v1644 = ((i8)v1642)<<v1643;
	i8 v1645 = v1639+v1644;
	*(i2*)(intptr_t)v1645 = v1636;

	goto c02_0161;

c02_0171:;

	i8 v1646 = (i8)(intptr_t)(ws+840);
	i1 v1647 = *(i1*)(intptr_t)v1646;
	i1 v1648 = (i1)+78;
	if (v1647==v1648) goto c02_0174; else goto c02_0175;

c02_0174:;

	i8 v1649 = (i8)(intptr_t)(ws+824);
	i8 v1650 = *(i8*)(intptr_t)v1649;
	i8 v1651 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1652;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1651)(&v1652, v1650);
	i8 v1653 = (i8)(intptr_t)(ws+834);
	*(i2*)(intptr_t)v1653 = v1652;

	i8 v1654 = (i8)(intptr_t)(ws+824);
	i8 v1655 = *(i8*)(intptr_t)v1654;
	i8 v1656 = (i8)(intptr_t)(ws+834);
	i2 v1657 = *(i2*)(intptr_t)v1656;
	i8 v1658 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1659;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1658)(&v1659, v1657, v1655);
	i8 v1660 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v1660 = v1659;

	i8 v1661 = (i8)(intptr_t)(ws+824);
	i8 v1662 = *(i8*)(intptr_t)v1661;
	i8 v1663 = (i8)(intptr_t)(ws+842);
	i2 v1664 = *(i2*)(intptr_t)v1663;
	i1 v1665 = v1664;
	i1 v1666 = v1665+(-2);
	i8 v1667 = (i8)(intptr_t)(f83_read_string);
	i8 v1668;

	((void(*)(i8* /* ptr */, i1 /* len */, i8 /* fcb */))(intptr_t)v1667)(&v1668, v1666, v1662);
	i8 v1669 = (i8)(intptr_t)(ws+848);
	i8 v1670 = *(i8*)(intptr_t)v1669;
	i8 v1671 = v1670+(+152);
	*(i8*)(intptr_t)v1671 = v1668;

	goto c02_0161;

c02_0175:;

	i8 v1672 = (i8)(intptr_t)(ws+840);
	i1 v1673 = *(i1*)(intptr_t)v1672;
	i1 v1674 = (i1)+88;
	if (v1673==v1674) goto c02_0178; else goto c02_0179;

c02_0178:;

	i8 v1675 = (i8)(intptr_t)(ws+824);
	i8 v1676 = *(i8*)(intptr_t)v1675;
	i8 v1677 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1678;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1677)(&v1678, v1676);
	i8 v1679 = (i8)(intptr_t)(ws+834);
	*(i2*)(intptr_t)v1679 = v1678;

	i8 v1680 = (i8)(intptr_t)(ws+824);
	i8 v1681 = *(i8*)(intptr_t)v1680;
	i8 v1682 = (i8)(intptr_t)(ws+834);
	i2 v1683 = *(i2*)(intptr_t)v1682;
	i8 v1684 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1685;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1684)(&v1685, v1683, v1681);
	i8 v1686 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v1686 = v1685;

	i8 v1687 = (i8)(intptr_t)(ws+824);
	i8 v1688 = *(i8*)(intptr_t)v1687;
	i8 v1689 = (i8)(intptr_t)(ws+842);
	i2 v1690 = *(i2*)(intptr_t)v1689;
	i1 v1691 = v1690;
	i1 v1692 = v1691+(-2);
	i8 v1693 = (i8)(intptr_t)(f83_read_string);
	i8 v1694;

	((void(*)(i8* /* ptr */, i1 /* len */, i8 /* fcb */))(intptr_t)v1693)(&v1694, v1692, v1688);
	i8 v1695 = (i8)(intptr_t)(ws+864);
	*(i8*)(intptr_t)v1695 = v1694;

	i8 v1696 = (i8)(intptr_t)(ws+864);
	i8 v1697 = *(i8*)(intptr_t)v1696;
	i8 v1698 = (i8)(intptr_t)(f88_FindOrCreateExternal);
	i8 v1699;

	((void(*)(i8* /* external */, i8 /* name */))(intptr_t)v1698)(&v1699, v1697);
	i8 v1700 = (i8)(intptr_t)(ws+872);
	*(i8*)(intptr_t)v1700 = v1699;

	i8 v1701 = (i8)(intptr_t)(ws+848);
	i8 v1702 = *(i8*)(intptr_t)v1701;
	i8 v1703 = v1702+(+160);
	i8 v1704 = *(i8*)(intptr_t)v1703;
	i8 v1705 = (i8)+0;
	if (v1704==v1705) goto c02_017e; else goto c02_017d;

c02_017d:;

	i8 v1706 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1706)();

	i8 v1707 = (i8)(intptr_t)c02_s000e;
	i8 v1708 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1708)(v1707);

	i8 v1709 = (i8)(intptr_t)(ws+864);
	i8 v1710 = *(i8*)(intptr_t)v1709;
	i8 v1711 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1711)(v1710);

	i8 v1712 = (i8)(intptr_t)c02_s000f;
	i8 v1713 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1713)(v1712);

	i8 v1714 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1714)();

c02_017e:;

c02_017a:;

	i8 v1715 = (i8)(intptr_t)(ws+872);
	i8 v1716 = *(i8*)(intptr_t)v1715;
	i8 v1717 = (i8)(intptr_t)(ws+848);
	i8 v1718 = *(i8*)(intptr_t)v1717;
	i8 v1719 = v1718+(+160);
	*(i8*)(intptr_t)v1719 = v1716;

	goto c02_0161;

c02_0179:;

	i8 v1720 = (i8)(intptr_t)c02_s0010;
	i8 v1721 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1721)(v1720);

	i8 v1722 = (i8)(intptr_t)(ws+840);
	i1 v1723 = *(i1*)(intptr_t)v1722;
	i8 v1724 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v1724)(v1723);

	i8 v1725 = (i8)(intptr_t)c02_s0011;
	i8 v1726 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1726)(v1725);

	i8 v1727 = (i8)(intptr_t)(ws+816);
	i8 v1728 = *(i8*)(intptr_t)v1727;
	i8 v1729 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1729)(v1728);

	i8 v1730 = (i8)(intptr_t)c02_s0012;
	i8 v1731 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1731)(v1730);

	i8 v1732 = (i8)(intptr_t)(ws+836);
	i4 v1733 = *(i4*)(intptr_t)v1732;
	i8 v1734 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v1734)(v1733);

	i8 v1735 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1735)();

	i8 v1736 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1736)();

c02_0161:;

	i8 v1737 = (i8)(intptr_t)(ws+836);
	i4 v1738 = *(i4*)(intptr_t)v1737;
	i8 v1739 = (i8)(intptr_t)(ws+842);
	i2 v1740 = *(i2*)(intptr_t)v1739;
	i4 v1741 = v1740;
	i4 v1742 = v1738+v1741;
	i4 v1743 = v1742+(+3);
	i8 v1744 = (i8)(intptr_t)(ws+836);
	*(i4*)(intptr_t)v1744 = v1743;

	goto c02_015f;

c02_0160:;

endsub:;
	*p1509 = *(i8*)(intptr_t)(ws+824);
}
	void f23_MemZero(i8 /* size */, i8 /* ptr */);

// InitStreams workspace at ws+792 length ws+0
void f90_InitStreams(void) {

	i8 v1745 = (i8)(intptr_t)(ws+592);
	i8 v1746 = (i8)+128;
	i8 v1747 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v1747)(v1746, v1745);

endsub:;
}
const i1 c02_s0013[] = { 0x73,0x74,0x72,0x65,0x61,0x6d,0x20,0x49,0x44,0x20,0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f62_SimpleError(i8 /* s */);
	void f33_Alloc(i8* /* block */, i8 /* length */);

// SetStream workspace at ws+824 length ws+16
void f91_SetStream(i1 p1748 /* sid */) {
	*(i1*)(intptr_t)(ws+824) = p1748; /*sid */

	i8 v1749 = (i8)(intptr_t)(ws+824);
	i1 v1750 = *(i1*)(intptr_t)v1749;
	i1 v1751 = (i1)+8;
	if (v1750<v1751) goto c02_0183; else goto c02_0182;

c02_0182:;

	i8 v1752 = (i8)(intptr_t)c02_s0013;
	i8 v1753 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1753)(v1752);

c02_0183:;

c02_017f:;

	i8 v1754 = (i8)(intptr_t)(ws+592);
	i8 v1755 = (i8)(intptr_t)(ws+824);
	i1 v1756 = *(i1*)(intptr_t)v1755;
	i8 v1757 = v1756;
	i1 v1758 = (i1)+4;
	i8 v1759 = ((i8)v1757)<<v1758;
	i8 v1760 = v1754+v1759;
	i8 v1761 = (i8)(intptr_t)(ws+720);
	*(i8*)(intptr_t)v1761 = v1760;

	i8 v1762 = (i8)(intptr_t)(ws+720);
	i8 v1763 = *(i8*)(intptr_t)v1762;
	i8 v1764 = v1763+(+8);
	i8 v1765 = *(i8*)(intptr_t)v1764;
	i8 v1766 = (i8)+0;
	if (v1765==v1766) goto c02_0187; else goto c02_0188;

c02_0187:;

	i8 v1767 = (i8)+264;
	i8 v1768 = (i8)(intptr_t)(f33_Alloc);
	i8 v1769;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1768)(&v1769, v1767);
	i8 v1770 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v1770 = v1769;

	i8 v1771 = (i8)(intptr_t)(ws+832);
	i8 v1772 = *(i8*)(intptr_t)v1771;
	i8 v1773 = (i8)(intptr_t)(ws+720);
	i8 v1774 = *(i8*)(intptr_t)v1773;
	*(i8*)(intptr_t)v1774 = v1772;

	i8 v1775 = (i8)(intptr_t)(ws+832);
	i8 v1776 = *(i8*)(intptr_t)v1775;
	i8 v1777 = (i8)(intptr_t)(ws+720);
	i8 v1778 = *(i8*)(intptr_t)v1777;
	i8 v1779 = v1778+(+8);
	*(i8*)(intptr_t)v1779 = v1776;

c02_0188:;

c02_0184:;

endsub:;
}
	void f60_StartError(void);
const i1 c02_s0014[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f20_print_hex_i16(i2 /* value */);
	void f9_print_char(i1 /* c */);
const i1 c02_s0015[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0016[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s0017[] = { 0x77,0x68,0x69,0x63,0x68,0x20,0x69,0x73,0x20,0x61,0x6e,0x6f,0x6e,0x79,0x6d,0x6f,0x75,0x73,0 };
	void f12_print(i8 /* ptr */);
	void f61_EndError(void);

// CheckSubExists workspace at ws+872 length ws+8
void f92_CheckSubExists(i8 p1780 /* subr */) {
	*(i8*)(intptr_t)(ws+872) = p1780; /*subr */

	i8 v1781 = (i8)(intptr_t)(ws+872);
	i8 v1782 = *(i8*)(intptr_t)v1781;
	i8 v1783 = v1782+(+188);
	i1 v1784 = *(i1*)(intptr_t)v1783;
	i1 v1785 = v1784&(+2);
	i1 v1786 = (i1)+0;
	if (v1785==v1786) goto c02_018c; else goto c02_018d;

c02_018c:;

	i8 v1787 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1787)();

	i8 v1788 = (i8)(intptr_t)c02_s0014;
	i8 v1789 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1789)(v1788);

	i8 v1790 = (i8)(intptr_t)(ws+872);
	i8 v1791 = *(i8*)(intptr_t)v1790;
	i8 v1792 = v1791+(+186);
	i2 v1793 = *(i2*)(intptr_t)v1792;
	i8 v1794 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v1794)(v1793);

	i1 v1795 = (i1)+32;
	i8 v1796 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v1796)(v1795);

	i8 v1797 = (i8)(intptr_t)(ws+872);
	i8 v1798 = *(i8*)(intptr_t)v1797;
	i8 v1799 = v1798+(+152);
	i8 v1800 = *(i8*)(intptr_t)v1799;
	i8 v1801 = (i8)+0;
	if (v1800==v1801) goto c02_0192; else goto c02_0191;

c02_0191:;

	i8 v1802 = (i8)(intptr_t)c02_s0015;
	i8 v1803 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1803)(v1802);

	i8 v1804 = (i8)(intptr_t)(ws+872);
	i8 v1805 = *(i8*)(intptr_t)v1804;
	i8 v1806 = v1805+(+152);
	i8 v1807 = *(i8*)(intptr_t)v1806;
	i8 v1808 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1808)(v1807);

	i8 v1809 = (i8)(intptr_t)c02_s0016;
	i8 v1810 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1810)(v1809);

	goto c02_018e;

c02_0192:;

	i8 v1811 = (i8)(intptr_t)c02_s0017;
	i8 v1812 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1812)(v1811);

c02_018e:;

	i8 v1813 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1813)();

c02_018d:;

c02_0189:;

endsub:;
}
	void f64_E_b8(i1 /* c */);
	void f71_E_h8(i1 /* value */);
	void f64_E_b8(i1 /* c */);
	void f77_ArchEmitSubRef(i8 /* subr */);
	void f76_E_nl(void);
	void f64_E_b8(i1 /* c */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f92_CheckSubExists(i8 /* subr */);
	void f77_ArchEmitSubRef(i8 /* subr */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f92_CheckSubExists(i8 /* subr */);
	void f78_ArchEmitWSRef(i2 /* address */, i1 /* wid */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f92_CheckSubExists(i8 /* subr */);
	void f78_ArchEmitWSRef(i2 /* address */, i1 /* wid */);

// WriteCharacterFromStream workspace at ws+848 length ws+20
void f93_WriteCharacterFromStream(i1 p1818 /* c */) {
	*(i1*)(intptr_t)(ws+848) = p1818; /*c */

	i8 v1819 = (i8)(intptr_t)(ws+736);
	i1 v1820 = *(i1*)(intptr_t)v1819;
	i1 v1821 = (i1)+0;
	if (v1820==v1821) goto c02_0196; else goto c02_0197;

c02_0196:;

	i8 v1822 = (i8)(intptr_t)(ws+848);
	i1 v1823 = *(i1*)(intptr_t)v1822;

	if (v1823 != +3) goto c02_0199;

	i1 v1824 = (i1)+99;
	i8 v1825 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1825)(v1824);

	i8 v1826 = (i8)(intptr_t)(ws+48);
	i8 v1827 = *(i8*)(intptr_t)v1826;
	i8 v1828 = *(i8*)(intptr_t)v1827;
	i8 v1829 = v1828+(+680);
	i2 v1830 = *(i2*)(intptr_t)v1829;
	i1 v1831 = v1830;
	i8 v1832 = (i8)(intptr_t)(f71_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v1832)(v1831);

	i1 v1833 = (i1)+95;
	i8 v1834 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1834)(v1833);

	goto endsub;

c02_0199:;

	if (v1823 != +4) goto c02_019a;

	i8 v1835 = (i8)(intptr_t)(ws+48);
	i8 v1836 = *(i8*)(intptr_t)v1835;
	i8 v1837 = (i8)(intptr_t)(f77_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1837)(v1836);

	goto endsub;

c02_019a:;

	if (v1823 != +1) goto c02_019b;

	i1 v1838 = (i1)+3;
	i8 v1839 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1839 = v1838;

	goto c02_0198;

c02_019b:;

	if (v1823 != +2) goto c02_019c;

	i1 v1840 = (i1)+6;
	i8 v1841 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1841 = v1840;

	goto c02_0198;

c02_019c:;

	if (v1823 != +5) goto c02_019d;

	i1 v1842 = (i1)+4;
	i8 v1843 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1843 = v1842;

	goto c02_0198;

c02_019d:;

	if (v1823 != +10) goto c02_019e;

	i8 v1844 = (i8)(intptr_t)(f76_E_nl);

	((void(*)(void))(intptr_t)v1844)();

	goto endsub;

c02_019e:;

	i8 v1845 = (i8)(intptr_t)(ws+848);
	i1 v1846 = *(i1*)(intptr_t)v1845;
	i8 v1847 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1847)(v1846);

	goto endsub;

c02_0198:;


	i8 v1848 = (i8)(intptr_t)(ws+848);
	i1 v1849 = *(i1*)(intptr_t)v1848;
	i8 v1850 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v1850 = v1849;

	i1 v1851 = (i1)+1;
	i8 v1852 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1852 = v1851;

	goto c02_0193;

c02_0197:;

	i8 v1853 = (i8)(intptr_t)(ws+848);
	i1 v1854 = *(i1*)(intptr_t)v1853;
	i8 v1855 = (i8)(intptr_t)(ws+728);
	i8 v1856 = (i8)(intptr_t)(ws+737);
	i1 v1857 = *(i1*)(intptr_t)v1856;
	i8 v1858 = v1857;
	i8 v1859 = v1855+v1858;
	*(i1*)(intptr_t)v1859 = v1854;

	i8 v1860 = (i8)(intptr_t)(ws+737);
	i1 v1861 = *(i1*)(intptr_t)v1860;
	i1 v1862 = v1861+(+1);
	i8 v1863 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1863 = v1862;

	i8 v1864 = (i8)(intptr_t)(ws+737);
	i1 v1865 = *(i1*)(intptr_t)v1864;
	i8 v1866 = (i8)(intptr_t)(ws+736);
	i1 v1867 = *(i1*)(intptr_t)v1866;
	if (v1865==v1867) goto c02_01a3; else goto c02_01a2;

c02_01a2:;

	goto endsub;

c02_01a3:;

c02_019f:;

	i8 v1868 = (i8)(intptr_t)(ws+728);
	i1 v1869 = *(i1*)(intptr_t)v1868;

	if (v1869 != +1) goto c02_01a5;

	i8 v1870 = (i8)(intptr_t)(ws+729);
	i1 v1871 = *(i1*)(intptr_t)v1870;
	i2 v1872 = v1871;
	i8 v1873 = (i8)(intptr_t)(ws+730);
	i1 v1874 = *(i1*)(intptr_t)v1873;
	i2 v1875 = v1874;
	i1 v1876 = (i1)+8;
	i2 v1877 = ((i2)v1875)<<v1876;
	i2 v1878 = v1872|v1877;
	i8 v1879 = (i8)(intptr_t)(ws+850);
	*(i2*)(intptr_t)v1879 = v1878;

	i8 v1880 = (i8)(intptr_t)(ws+48);
	i8 v1881 = *(i8*)(intptr_t)v1880;
	i8 v1882 = *(i8*)(intptr_t)v1881;
	i8 v1883 = (i8)(intptr_t)(ws+850);
	i2 v1884 = *(i2*)(intptr_t)v1883;
	i8 v1885 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1886;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1885)(&v1886, v1884, v1882);
	i8 v1887 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1887 = v1886;

	i8 v1888 = (i8)(intptr_t)(ws+856);
	i8 v1889 = *(i8*)(intptr_t)v1888;
	i8 v1890 = (i8)(intptr_t)(f87_Deref);
	i8 v1891;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1890)(&v1891, v1889);
	i8 v1892 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1892 = v1891;

	i8 v1893 = (i8)(intptr_t)(ws+856);
	i8 v1894 = *(i8*)(intptr_t)v1893;
	i8 v1895 = (i8)(intptr_t)(f92_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v1895)(v1894);

	i8 v1896 = (i8)(intptr_t)(ws+856);
	i8 v1897 = *(i8*)(intptr_t)v1896;
	i8 v1898 = (i8)(intptr_t)(f77_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1898)(v1897);

	goto c02_01a4;

c02_01a5:;

	if (v1869 != +2) goto c02_01a6;

	i8 v1899 = (i8)(intptr_t)(ws+729);
	i1 v1900 = *(i1*)(intptr_t)v1899;
	i2 v1901 = v1900;
	i8 v1902 = (i8)(intptr_t)(ws+730);
	i1 v1903 = *(i1*)(intptr_t)v1902;
	i2 v1904 = v1903;
	i1 v1905 = (i1)+8;
	i2 v1906 = ((i2)v1904)<<v1905;
	i2 v1907 = v1901|v1906;
	i8 v1908 = (i8)(intptr_t)(ws+850);
	*(i2*)(intptr_t)v1908 = v1907;

	i8 v1909 = (i8)(intptr_t)(ws+731);
	i1 v1910 = *(i1*)(intptr_t)v1909;
	i8 v1911 = (i8)(intptr_t)(ws+864);
	*(i1*)(intptr_t)v1911 = v1910;

	i8 v1912 = (i8)(intptr_t)(ws+732);
	i1 v1913 = *(i1*)(intptr_t)v1912;
	i2 v1914 = v1913;
	i8 v1915 = (i8)(intptr_t)(ws+733);
	i1 v1916 = *(i1*)(intptr_t)v1915;
	i2 v1917 = v1916;
	i1 v1918 = (i1)+8;
	i2 v1919 = ((i2)v1917)<<v1918;
	i2 v1920 = v1914|v1919;
	i8 v1921 = (i8)(intptr_t)(ws+866);
	*(i2*)(intptr_t)v1921 = v1920;

	i8 v1922 = (i8)(intptr_t)(ws+48);
	i8 v1923 = *(i8*)(intptr_t)v1922;
	i8 v1924 = *(i8*)(intptr_t)v1923;
	i8 v1925 = (i8)(intptr_t)(ws+850);
	i2 v1926 = *(i2*)(intptr_t)v1925;
	i8 v1927 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1928;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1927)(&v1928, v1926, v1924);
	i8 v1929 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1929 = v1928;

	i8 v1930 = (i8)(intptr_t)(ws+856);
	i8 v1931 = *(i8*)(intptr_t)v1930;
	i8 v1932 = (i8)(intptr_t)(f87_Deref);
	i8 v1933;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1932)(&v1933, v1931);
	i8 v1934 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1934 = v1933;

	i8 v1935 = (i8)(intptr_t)(ws+856);
	i8 v1936 = *(i8*)(intptr_t)v1935;
	i8 v1937 = (i8)(intptr_t)(f92_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v1937)(v1936);

	i8 v1938 = (i8)(intptr_t)(ws+864);
	i1 v1939 = *(i1*)(intptr_t)v1938;
	i8 v1940 = (i8)(intptr_t)(ws+856);
	i8 v1941 = *(i8*)(intptr_t)v1940;
	i8 v1942 = v1941+(+176);
	i8 v1943 = (i8)(intptr_t)(ws+864);
	i1 v1944 = *(i1*)(intptr_t)v1943;
	i8 v1945 = v1944;
	i1 v1946 = (i1)+1;
	i8 v1947 = ((i8)v1945)<<v1946;
	i8 v1948 = v1942+v1947;
	i2 v1949 = *(i2*)(intptr_t)v1948;
	i8 v1950 = (i8)(intptr_t)(ws+866);
	i2 v1951 = *(i2*)(intptr_t)v1950;
	i2 v1952 = v1949+v1951;
	i8 v1953 = (i8)(intptr_t)(f78_ArchEmitWSRef);

	((void(*)(i2 /* address */, i1 /* wid */))(intptr_t)v1953)(v1952, v1939);

	goto c02_01a4;

c02_01a6:;

	if (v1869 != +5) goto c02_01a7;

	i8 v1954 = (i8)(intptr_t)(ws+729);
	i1 v1955 = *(i1*)(intptr_t)v1954;
	i2 v1956 = v1955;
	i8 v1957 = (i8)(intptr_t)(ws+730);
	i1 v1958 = *(i1*)(intptr_t)v1957;
	i2 v1959 = v1958;
	i1 v1960 = (i1)+8;
	i2 v1961 = ((i2)v1959)<<v1960;
	i2 v1962 = v1956|v1961;
	i8 v1963 = (i8)(intptr_t)(ws+850);
	*(i2*)(intptr_t)v1963 = v1962;

	i8 v1964 = (i8)(intptr_t)(ws+731);
	i1 v1965 = *(i1*)(intptr_t)v1964;
	i8 v1966 = (i8)(intptr_t)(ws+864);
	*(i1*)(intptr_t)v1966 = v1965;

	i8 v1967 = (i8)(intptr_t)(ws+48);
	i8 v1968 = *(i8*)(intptr_t)v1967;
	i8 v1969 = *(i8*)(intptr_t)v1968;
	i8 v1970 = (i8)(intptr_t)(ws+850);
	i2 v1971 = *(i2*)(intptr_t)v1970;
	i8 v1972 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1973;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1972)(&v1973, v1971, v1969);
	i8 v1974 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1974 = v1973;

	i8 v1975 = (i8)(intptr_t)(ws+856);
	i8 v1976 = *(i8*)(intptr_t)v1975;
	i8 v1977 = (i8)(intptr_t)(f87_Deref);
	i8 v1978;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1977)(&v1978, v1976);
	i8 v1979 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v1979 = v1978;

	i8 v1980 = (i8)(intptr_t)(ws+856);
	i8 v1981 = *(i8*)(intptr_t)v1980;
	i8 v1982 = (i8)(intptr_t)(f92_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v1982)(v1981);

	i8 v1983 = (i8)(intptr_t)(ws+864);
	i1 v1984 = *(i1*)(intptr_t)v1983;
	i8 v1985 = (i8)(intptr_t)(ws+856);
	i8 v1986 = *(i8*)(intptr_t)v1985;
	i8 v1987 = v1986+(+168);
	i8 v1988 = (i8)(intptr_t)(ws+864);
	i1 v1989 = *(i1*)(intptr_t)v1988;
	i8 v1990 = v1989;
	i1 v1991 = (i1)+1;
	i8 v1992 = ((i8)v1990)<<v1991;
	i8 v1993 = v1987+v1992;
	i2 v1994 = *(i2*)(intptr_t)v1993;
	i8 v1995 = (i8)(intptr_t)(f78_ArchEmitWSRef);

	((void(*)(i2 /* address */, i1 /* wid */))(intptr_t)v1995)(v1994, v1984);

c02_01a7:;

c02_01a4:;


	i1 v1996 = (i1)+0;
	i8 v1997 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1997 = v1996;

c02_0193:;

endsub:;
}
	void f93_WriteCharacterFromStream(i1 /* c */);
	void f34_Free(i8 /* block */);

// FlushStream workspace at ws+824 length ws+24
void f94_FlushStream(void) {

	i8 v1998 = (i8)(intptr_t)(ws+720);
	i8 v1999 = *(i8*)(intptr_t)v1998;
	i8 v2000 = *(i8*)(intptr_t)v1999;
	i8 v2001 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v2001 = v2000;

c02_01aa:;

	i8 v2002 = (i8)(intptr_t)(ws+824);
	i8 v2003 = *(i8*)(intptr_t)v2002;
	i8 v2004 = (i8)+0;
	if (v2003==v2004) goto c02_01ad; else goto c02_01ac;

c02_01ac:;

	i1 v2005 = (i1)+0;
	i8 v2006 = (i8)(intptr_t)(ws+832);
	*(i1*)(intptr_t)v2006 = v2005;

c02_01b0:;

	i8 v2007 = (i8)(intptr_t)(ws+832);
	i1 v2008 = *(i1*)(intptr_t)v2007;
	i8 v2009 = (i8)(intptr_t)(ws+824);
	i8 v2010 = *(i8*)(intptr_t)v2009;
	i8 v2011 = v2010+(+255);
	i1 v2012 = *(i1*)(intptr_t)v2011;
	if (v2008==v2012) goto c02_01b3; else goto c02_01b2;

c02_01b2:;

	i8 v2013 = (i8)(intptr_t)(ws+824);
	i8 v2014 = *(i8*)(intptr_t)v2013;
	i8 v2015 = (i8)(intptr_t)(ws+832);
	i1 v2016 = *(i1*)(intptr_t)v2015;
	i8 v2017 = v2016;
	i8 v2018 = v2014+v2017;
	i1 v2019 = *(i1*)(intptr_t)v2018;
	i8 v2020 = (i8)(intptr_t)(f93_WriteCharacterFromStream);

	((void(*)(i1 /* c */))(intptr_t)v2020)(v2019);

	i8 v2021 = (i8)(intptr_t)(ws+832);
	i1 v2022 = *(i1*)(intptr_t)v2021;
	i1 v2023 = v2022+(+1);
	i8 v2024 = (i8)(intptr_t)(ws+832);
	*(i1*)(intptr_t)v2024 = v2023;

	goto c02_01b0;

c02_01b3:;

	i8 v2025 = (i8)(intptr_t)(ws+824);
	i8 v2026 = *(i8*)(intptr_t)v2025;
	i8 v2027 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v2027 = v2026;

	i8 v2028 = (i8)(intptr_t)(ws+824);
	i8 v2029 = *(i8*)(intptr_t)v2028;
	i8 v2030 = v2029+(+256);
	i8 v2031 = *(i8*)(intptr_t)v2030;
	i8 v2032 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v2032 = v2031;

	i8 v2033 = (i8)(intptr_t)(ws+840);
	i8 v2034 = *(i8*)(intptr_t)v2033;
	i8 v2035 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v2035)(v2034);

	goto c02_01aa;

c02_01ad:;

	i8 v2036 = (i8)+0;
	i8 v2037 = (i8)(intptr_t)(ws+720);
	i8 v2038 = *(i8*)(intptr_t)v2037;
	*(i8*)(intptr_t)v2038 = v2036;

	i8 v2039 = (i8)+0;
	i8 v2040 = (i8)(intptr_t)(ws+720);
	i8 v2041 = *(i8*)(intptr_t)v2040;
	i8 v2042 = v2041+(+8);
	*(i8*)(intptr_t)v2042 = v2039;

endsub:;
}
	void f33_Alloc(i8* /* block */, i8 /* length */);

// WriteStream workspace at ws+824 length ws+16
void f95_WriteStream(i1 p2043 /* c */) {
	*(i1*)(intptr_t)(ws+824) = p2043; /*c */

	i8 v2044 = (i8)(intptr_t)(ws+720);
	i8 v2045 = *(i8*)(intptr_t)v2044;
	i8 v2046 = v2045+(+8);
	i8 v2047 = *(i8*)(intptr_t)v2046;
	i8 v2048 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2048 = v2047;

	i8 v2049 = (i8)(intptr_t)(ws+832);
	i8 v2050 = *(i8*)(intptr_t)v2049;
	i8 v2051 = v2050+(+255);
	i1 v2052 = *(i1*)(intptr_t)v2051;
	i1 v2053 = (i1)+255;
	if (v2052==v2053) goto c02_01b7; else goto c02_01b8;

c02_01b7:;

	i8 v2054 = (i8)+264;
	i8 v2055 = (i8)(intptr_t)(f33_Alloc);
	i8 v2056;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v2055)(&v2056, v2054);
	i8 v2057 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2057 = v2056;

	i8 v2058 = (i8)(intptr_t)(ws+832);
	i8 v2059 = *(i8*)(intptr_t)v2058;
	i8 v2060 = (i8)(intptr_t)(ws+720);
	i8 v2061 = *(i8*)(intptr_t)v2060;
	i8 v2062 = v2061+(+8);
	i8 v2063 = *(i8*)(intptr_t)v2062;
	i8 v2064 = v2063+(+256);
	*(i8*)(intptr_t)v2064 = v2059;

	i8 v2065 = (i8)(intptr_t)(ws+832);
	i8 v2066 = *(i8*)(intptr_t)v2065;
	i8 v2067 = (i8)(intptr_t)(ws+720);
	i8 v2068 = *(i8*)(intptr_t)v2067;
	i8 v2069 = v2068+(+8);
	*(i8*)(intptr_t)v2069 = v2066;

c02_01b8:;

c02_01b4:;

	i8 v2070 = (i8)(intptr_t)(ws+824);
	i1 v2071 = *(i1*)(intptr_t)v2070;
	i8 v2072 = (i8)(intptr_t)(ws+832);
	i8 v2073 = *(i8*)(intptr_t)v2072;
	i8 v2074 = (i8)(intptr_t)(ws+832);
	i8 v2075 = *(i8*)(intptr_t)v2074;
	i8 v2076 = v2075+(+255);
	i1 v2077 = *(i1*)(intptr_t)v2076;
	i8 v2078 = v2077;
	i8 v2079 = v2073+v2078;
	*(i1*)(intptr_t)v2079 = v2071;

	i8 v2080 = (i8)(intptr_t)(ws+832);
	i8 v2081 = *(i8*)(intptr_t)v2080;
	i8 v2082 = v2081+(+255);
	i1 v2083 = *(i1*)(intptr_t)v2082;
	i1 v2084 = v2083+(+1);
	i8 v2085 = (i8)(intptr_t)(ws+832);
	i8 v2086 = *(i8*)(intptr_t)v2085;
	i8 v2087 = v2086+(+255);
	*(i1*)(intptr_t)v2087 = v2084;

endsub:;
}
const i1 c02_s0018[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// MalformedError workspace at ws+832 length ws+8
void f97_MalformedError(i8 p2089 /* s */) {
	*(i8*)(intptr_t)(ws+832) = p2089; /*s */

	i8 v2090 = (i8)(intptr_t)c02_s0018;
	i8 v2091 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2091)(v2090);

	i8 v2092 = (i8)(intptr_t)(ws+832);
	i8 v2093 = *(i8*)(intptr_t)v2092;
	i8 v2094 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2094)(v2093);

	i8 v2095 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2095)();

	i8 v2096 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v2096)();

endsub:;
}
const i1 c02_s0019[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0x65,0x6e,0x64,0x20,0x6f,0x66,0x20,0x63,0x68,0x75,0x6e,0x6b,0 };
	void f97_MalformedError(i8 /* s */);

// UnexpectedEndOfChunk workspace at ws+832 length ws+0
void f98_UnexpectedEndOfChunk(void) {

	i8 v2097 = (i8)(intptr_t)c02_s0019;
	i8 v2098 = (i8)(intptr_t)(f97_MalformedError);

	((void(*)(i8 /* s */))(intptr_t)v2098)(v2097);

endsub:;
}
	void f98_UnexpectedEndOfChunk(void);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);

// ReadB1 workspace at ws+824 length ws+1
void f99_ReadB1(i1* p2099 /* result */) {

	i8 v2100 = (i8)(intptr_t)(ws+812);
	i2 v2101 = *(i2*)(intptr_t)v2100;
	i2 v2102 = (i2)+1;
	if (v2101<v2102) goto c02_01bc; else goto c02_01bd;

c02_01bc:;

	i8 v2103 = (i8)(intptr_t)(f98_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v2103)();

c02_01bd:;

c02_01b9:;

	i8 v2104 = (i8)(intptr_t)(ws+812);
	i2 v2105 = *(i2*)(intptr_t)v2104;
	i2 v2106 = v2105+(-1);
	i8 v2107 = (i8)(intptr_t)(ws+812);
	*(i2*)(intptr_t)v2107 = v2106;

	i8 v2108 = (i8)(intptr_t)(ws+800);
	i8 v2109 = *(i8*)(intptr_t)v2108;
	i8 v2110 = (i8)(intptr_t)(f81_read_bin1);
	i1 v2111;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v2110)(&v2111, v2109);
	i8 v2112 = (i8)(intptr_t)(ws+824);
	*(i1*)(intptr_t)v2112 = v2111;

endsub:;
	*p2099 = *(i1*)(intptr_t)(ws+824);
}
	void f98_UnexpectedEndOfChunk(void);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);

// ReadB2 workspace at ws+824 length ws+2
void f100_ReadB2(i2* p2113 /* result */) {

	i8 v2114 = (i8)(intptr_t)(ws+812);
	i2 v2115 = *(i2*)(intptr_t)v2114;
	i2 v2116 = (i2)+2;
	if (v2115<v2116) goto c02_01c1; else goto c02_01c2;

c02_01c1:;

	i8 v2117 = (i8)(intptr_t)(f98_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v2117)();

c02_01c2:;

c02_01be:;

	i8 v2118 = (i8)(intptr_t)(ws+812);
	i2 v2119 = *(i2*)(intptr_t)v2118;
	i2 v2120 = v2119+(-2);
	i8 v2121 = (i8)(intptr_t)(ws+812);
	*(i2*)(intptr_t)v2121 = v2120;

	i8 v2122 = (i8)(intptr_t)(ws+800);
	i8 v2123 = *(i8*)(intptr_t)v2122;
	i8 v2124 = (i8)(intptr_t)(f82_read_bin2);
	i2 v2125;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v2124)(&v2125, v2123);
	i8 v2126 = (i8)(intptr_t)(ws+824);
	*(i2*)(intptr_t)v2126 = v2125;

endsub:;
	*p2113 = *(i2*)(intptr_t)(ws+824);
}
	void f99_ReadB1(i1* /* result */);
	void f95_WriteStream(i1 /* c */);

// CopySourceChunk workspace at ws+824 length ws+0
void f101_CopySourceChunk(void) {

c02_01c5:;

	i8 v2127 = (i8)(intptr_t)(ws+812);
	i2 v2128 = *(i2*)(intptr_t)v2127;
	i2 v2129 = (i2)+0;
	if (v2128==v2129) goto c02_01c8; else goto c02_01c7;

c02_01c7:;

	i8 v2130 = (i8)(intptr_t)(f99_ReadB1);
	i1 v2131;

	((void(*)(i1* /* result */))(intptr_t)v2130)(&v2131);
	i8 v2132 = (i8)(intptr_t)(ws+810);
	*(i1*)(intptr_t)v2132 = v2131;

	i8 v2133 = (i8)(intptr_t)(ws+810);
	i1 v2134 = *(i1*)(intptr_t)v2133;
	i8 v2135 = (i8)(intptr_t)(f95_WriteStream);

	((void(*)(i1 /* c */))(intptr_t)v2135)(v2134);

	goto c02_01c5;

c02_01c8:;

endsub:;
}
	void f50_FCBSeek(i4 /* pos */, i8 /* fcb */);
	void f99_ReadB1(i1* /* result */);
	void f100_ReadB2(i2* /* result */);
	void f99_ReadB1(i1* /* result */);
	void f100_ReadB2(i2* /* result */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f91_SetStream(i1 /* sid */);
	void f101_CopySourceChunk(void);
	void f94_FlushStream(void);

// WriteSubroutinesToOutputFile workspace at ws+800 length ws+20
void f96_WriteSubroutinesToOutputFile(i8 p2088 /* coo */) {
	*(i8*)(intptr_t)(ws+800) = p2088; /*coo */






	i4 v2136 = (i4)+0;
	i8 v2137 = (i8)(intptr_t)(ws+816);
	*(i4*)(intptr_t)v2137 = v2136;

c02_01c9:;

	i2 v2138 = (i2)+255;
	i8 v2139 = (i8)(intptr_t)(ws+812);
	*(i2*)(intptr_t)v2139 = v2138;

	i8 v2140 = (i8)(intptr_t)(ws+800);
	i8 v2141 = *(i8*)(intptr_t)v2140;
	i8 v2142 = (i8)(intptr_t)(ws+816);
	i4 v2143 = *(i4*)(intptr_t)v2142;
	i8 v2144 = (i8)(intptr_t)(f50_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v2144)(v2143, v2141);

	i8 v2145 = (i8)(intptr_t)(f99_ReadB1);
	i1 v2146;

	((void(*)(i1* /* result */))(intptr_t)v2145)(&v2146);
	i8 v2147 = (i8)(intptr_t)(ws+810);
	*(i1*)(intptr_t)v2147 = v2146;

	i8 v2148 = (i8)(intptr_t)(f100_ReadB2);
	i2 v2149;

	((void(*)(i2* /* result */))(intptr_t)v2148)(&v2149);
	i8 v2150 = (i8)(intptr_t)(ws+812);
	*(i2*)(intptr_t)v2150 = v2149;

	i8 v2151 = (i8)(intptr_t)(ws+816);
	i4 v2152 = *(i4*)(intptr_t)v2151;
	i8 v2153 = (i8)(intptr_t)(ws+812);
	i2 v2154 = *(i2*)(intptr_t)v2153;
	i4 v2155 = v2154;
	i4 v2156 = v2152+v2155;
	i4 v2157 = v2156+(+3);
	i8 v2158 = (i8)(intptr_t)(ws+816);
	*(i4*)(intptr_t)v2158 = v2157;

	i8 v2159 = (i8)(intptr_t)(ws+810);
	i1 v2160 = *(i1*)(intptr_t)v2159;
	i1 v2161 = (i1)+69;
	if (v2160==v2161) goto c02_01ce; else goto c02_01cf;

c02_01ce:;

	goto c02_01ca;

c02_01cf:;

	i8 v2162 = (i8)(intptr_t)(ws+810);
	i1 v2163 = *(i1*)(intptr_t)v2162;
	i1 v2164 = (i1)+70;
	if (v2163==v2164) goto c02_01d2; else goto c02_01d3;

c02_01d2:;

	i8 v2165 = (i8)(intptr_t)(f99_ReadB1);
	i1 v2166;

	((void(*)(i1* /* result */))(intptr_t)v2165)(&v2166);
	i8 v2167 = (i8)(intptr_t)(ws+814);
	*(i1*)(intptr_t)v2167 = v2166;

	i8 v2168 = (i8)(intptr_t)(f100_ReadB2);
	i2 v2169;

	((void(*)(i2* /* result */))(intptr_t)v2168)(&v2169);
	i8 v2170 = (i8)(intptr_t)(ws+808);
	*(i2*)(intptr_t)v2170 = v2169;

	i8 v2171 = (i8)(intptr_t)(ws+800);
	i8 v2172 = *(i8*)(intptr_t)v2171;
	i8 v2173 = (i8)(intptr_t)(ws+808);
	i2 v2174 = *(i2*)(intptr_t)v2173;
	i8 v2175 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v2176;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v2175)(&v2176, v2174, v2172);
	i8 v2177 = (i8)(intptr_t)(ws+48);
	*(i8*)(intptr_t)v2177 = v2176;

	i8 v2178 = (i8)(intptr_t)(ws+48);
	i8 v2179 = *(i8*)(intptr_t)v2178;
	i8 v2180 = (i8)(intptr_t)(f87_Deref);
	i8 v2181;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2180)(&v2181, v2179);
	i8 v2182 = (i8)(intptr_t)(ws+48);
	*(i8*)(intptr_t)v2182 = v2181;

	i8 v2183 = (i8)(intptr_t)(ws+48);
	i8 v2184 = *(i8*)(intptr_t)v2183;
	i8 v2185 = v2184+(+188);
	i1 v2186 = *(i1*)(intptr_t)v2185;
	i1 v2187 = v2186&(+1);
	i1 v2188 = (i1)+0;
	if (v2187==v2188) goto c02_01d8; else goto c02_01d7;

c02_01d7:;

	i8 v2189 = (i8)(intptr_t)(ws+814);
	i1 v2190 = *(i1*)(intptr_t)v2189;
	i1 v2191 = v2190&(+127);
	i8 v2192 = (i8)(intptr_t)(f91_SetStream);

	((void(*)(i1 /* sid */))(intptr_t)v2192)(v2191);

	i8 v2193 = (i8)(intptr_t)(f101_CopySourceChunk);

	((void(*)(void))(intptr_t)v2193)();

	i8 v2194 = (i8)(intptr_t)(ws+814);
	i1 v2195 = *(i1*)(intptr_t)v2194;
	i1 v2196 = v2195&(+128);
	i1 v2197 = (i1)+0;
	if (v2196==v2197) goto c02_01dd; else goto c02_01dc;

c02_01dc:;

	i8 v2198 = (i8)(intptr_t)(f94_FlushStream);

	((void(*)(void))(intptr_t)v2198)();

c02_01dd:;

c02_01d9:;

c02_01d8:;

c02_01d4:;

c02_01d3:;

c02_01cb:;

	goto c02_01c9;

c02_01ca:;

endsub:;
}
const i1 c02_s001a[] = { 0x43,0x6f,0x70,0x79,0x69,0x6e,0x67,0x20,0x66,0x72,0x6f,0x6d,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f96_WriteSubroutinesToOutputFile(i8 /* coo */);

// WriteAllSubroutinesToOutputFile workspace at ws+792 length ws+8
void f102_WriteAllSubroutinesToOutputFile(i8 p2199 /* coos */) {
	*(i8*)(intptr_t)(ws+792) = p2199; /*coos */

c02_01e0:;

	i8 v2200 = (i8)(intptr_t)(ws+792);
	i8 v2201 = *(i8*)(intptr_t)v2200;
	i8 v2202 = (i8)+0;
	if (v2201==v2202) goto c02_01e3; else goto c02_01e2;

c02_01e2:;

	i8 v2203 = (i8)(intptr_t)c02_s001a;
	i8 v2204 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2204)(v2203);

	i8 v2205 = (i8)(intptr_t)(ws+792);
	i8 v2206 = *(i8*)(intptr_t)v2205;
	i8 v2207 = v2206+(+528);
	i8 v2208 = *(i8*)(intptr_t)v2207;
	i8 v2209 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2209)(v2208);

	i8 v2210 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2210)();

	i8 v2211 = (i8)(intptr_t)(ws+792);
	i8 v2212 = *(i8*)(intptr_t)v2211;
	i8 v2213 = (i8)(intptr_t)(f96_WriteSubroutinesToOutputFile);

	((void(*)(i8 /* coo */))(intptr_t)v2213)(v2212);

	i8 v2214 = (i8)(intptr_t)(ws+792);
	i8 v2215 = *(i8*)(intptr_t)v2214;
	i8 v2216 = v2215+(+672);
	i8 v2217 = *(i8*)(intptr_t)v2216;
	i8 v2218 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2218 = v2217;

	goto c02_01e0;

c02_01e3:;

endsub:;
}
const i1 c02_s001b[] = { 0x63,0x6f,0x6e,0x66,0x6c,0x69,0x63,0x74,0x69,0x6e,0x67,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x73,0 };
	void f62_SimpleError(i8 /* s */);
const i1 c02_s001c[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s001d[] = { 0x27,0x20,0x75,0x6e,0x72,0x65,0x73,0x6f,0x6c,0x76,0x65,0x64,0x0a,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s001e[] = { 0x61,0x62,0x6f,0x72,0x74,0x69,0x6e,0x67,0 };
	void f62_SimpleError(i8 /* s */);

// ResolveExternals workspace at ws+792 length ws+24
void f103_ResolveExternals(void) {

	i1 v2219 = (i1)+0;
	i8 v2220 = (i8)(intptr_t)(ws+800);
	*(i1*)(intptr_t)v2220 = v2219;

	i8 v2221 = (i8)(intptr_t)(ws+32);
	i8 v2222 = *(i8*)(intptr_t)v2221;
	i8 v2223 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2223 = v2222;

c02_01e6:;

	i8 v2224 = (i8)(intptr_t)(ws+808);
	i8 v2225 = *(i8*)(intptr_t)v2224;
	i8 v2226 = (i8)+0;
	if (v2225==v2226) goto c02_01e9; else goto c02_01e8;

c02_01e8:;

	i8 v2227 = (i8)(intptr_t)(ws+808);
	i8 v2228 = *(i8*)(intptr_t)v2227;
	i8 v2229 = v2228+(+188);
	i1 v2230 = *(i1*)(intptr_t)v2229;
	i1 v2231 = v2230&(+2);
	i1 v2232 = (i1)+0;
	if (v2231==v2232) goto c02_01ee; else goto c02_01ed;

c02_01ed:;

	i8 v2233 = (i8)(intptr_t)(ws+808);
	i8 v2234 = *(i8*)(intptr_t)v2233;
	i8 v2235 = v2234+(+160);
	i8 v2236 = *(i8*)(intptr_t)v2235;
	i8 v2237 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2237 = v2236;

	i8 v2238 = (i8)(intptr_t)(ws+792);
	i8 v2239 = *(i8*)(intptr_t)v2238;
	i8 v2240 = (i8)+0;
	if (v2239==v2240) goto c02_01f3; else goto c02_01f2;

c02_01f2:;

	i8 v2241 = (i8)(intptr_t)(ws+792);
	i8 v2242 = *(i8*)(intptr_t)v2241;
	i8 v2243 = v2242+(+16);
	i8 v2244 = *(i8*)(intptr_t)v2243;
	i8 v2245 = (i8)+0;
	if (v2244==v2245) goto c02_01fa; else goto c02_01fb;

c02_01fb:;

	i8 v2246 = (i8)(intptr_t)(ws+792);
	i8 v2247 = *(i8*)(intptr_t)v2246;
	i8 v2248 = v2247+(+16);
	i8 v2249 = *(i8*)(intptr_t)v2248;
	i8 v2250 = (i8)(intptr_t)(ws+808);
	i8 v2251 = *(i8*)(intptr_t)v2250;
	if (v2249==v2251) goto c02_01fa; else goto c02_01f9;

c02_01f9:;

	i8 v2252 = (i8)(intptr_t)c02_s001b;
	i8 v2253 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2253)(v2252);

c02_01fa:;

c02_01f4:;

	i8 v2254 = (i8)(intptr_t)(ws+808);
	i8 v2255 = *(i8*)(intptr_t)v2254;
	i8 v2256 = (i8)(intptr_t)(ws+792);
	i8 v2257 = *(i8*)(intptr_t)v2256;
	i8 v2258 = v2257+(+16);
	*(i8*)(intptr_t)v2258 = v2255;

c02_01f3:;

c02_01ef:;

c02_01ee:;

c02_01ea:;

	i8 v2259 = (i8)(intptr_t)(ws+808);
	i8 v2260 = *(i8*)(intptr_t)v2259;
	i8 v2261 = v2260+(+8);
	i8 v2262 = *(i8*)(intptr_t)v2261;
	i8 v2263 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2263 = v2262;

	goto c02_01e6;

c02_01e9:;

	i8 v2264 = (i8)(intptr_t)(ws+32);
	i8 v2265 = *(i8*)(intptr_t)v2264;
	i8 v2266 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2266 = v2265;

c02_01fe:;

	i8 v2267 = (i8)(intptr_t)(ws+808);
	i8 v2268 = *(i8*)(intptr_t)v2267;
	i8 v2269 = (i8)+0;
	if (v2268==v2269) goto c02_0201; else goto c02_0200;

c02_0200:;

	i8 v2270 = (i8)(intptr_t)(ws+808);
	i8 v2271 = *(i8*)(intptr_t)v2270;
	i8 v2272 = v2271+(+160);
	i8 v2273 = *(i8*)(intptr_t)v2272;
	i8 v2274 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2274 = v2273;

	i8 v2275 = (i8)(intptr_t)(ws+792);
	i8 v2276 = *(i8*)(intptr_t)v2275;
	i8 v2277 = (i8)+0;
	if (v2276==v2277) goto c02_0208; else goto c02_0209;

c02_0209:;

	i8 v2278 = (i8)(intptr_t)(ws+792);
	i8 v2279 = *(i8*)(intptr_t)v2278;
	i8 v2280 = v2279+(+16);
	i8 v2281 = *(i8*)(intptr_t)v2280;
	i8 v2282 = (i8)+0;
	if (v2281==v2282) goto c02_0207; else goto c02_0208;

c02_0207:;

	i8 v2283 = (i8)(intptr_t)c02_s001c;
	i8 v2284 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2284)(v2283);

	i8 v2285 = (i8)(intptr_t)(ws+792);
	i8 v2286 = *(i8*)(intptr_t)v2285;
	i8 v2287 = v2286+(+8);
	i8 v2288 = *(i8*)(intptr_t)v2287;
	i8 v2289 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2289)(v2288);

	i8 v2290 = (i8)(intptr_t)c02_s001d;
	i8 v2291 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2291)(v2290);

	i1 v2292 = (i1)+1;
	i8 v2293 = (i8)(intptr_t)(ws+800);
	*(i1*)(intptr_t)v2293 = v2292;

c02_0208:;

c02_0202:;

	i8 v2294 = (i8)(intptr_t)(ws+808);
	i8 v2295 = *(i8*)(intptr_t)v2294;
	i8 v2296 = v2295+(+8);
	i8 v2297 = *(i8*)(intptr_t)v2296;
	i8 v2298 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2298 = v2297;

	goto c02_01fe;

c02_0201:;

	i8 v2299 = (i8)(intptr_t)(ws+800);
	i1 v2300 = *(i1*)(intptr_t)v2299;
	i1 v2301 = (i1)+0;
	if (v2300==v2301) goto c02_020e; else goto c02_020d;

c02_020d:;

	i8 v2302 = (i8)(intptr_t)c02_s001e;
	i8 v2303 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2303)(v2302);

c02_020e:;

c02_020a:;

endsub:;
}
const i1 c02_s001f[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x64,0x65,0x70,0x65,0x6e,0x64,0x65,0x6e,0x63,0x79,0x20,0x67,0x72,0x61,0x70,0x68,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// push workspace at ws+3248 length ws+10
void f105_push(i8 p2324 /* subr */) {
	*(i8*)(intptr_t)(ws+3248) = p2324; /*subr */

	i8 v2325 = (i8)(intptr_t)(ws+3200);
	i2 v2326 = *(i2*)(intptr_t)v2325;
	i8 v2327 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v2327 = v2326;

c02_0217:;

	i8 v2328 = (i8)(intptr_t)(ws+3256);
	i2 v2329 = *(i2*)(intptr_t)v2328;
	i2 v2330 = (i2)+0;
	if (v2329==v2330) goto c02_021a; else goto c02_0219;

c02_0219:;

	i8 v2331 = (i8)(intptr_t)(ws+3256);
	i2 v2332 = *(i2*)(intptr_t)v2331;
	i2 v2333 = v2332+(-1);
	i8 v2334 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v2334 = v2333;

	i8 v2335 = (i8)(intptr_t)(ws+800);
	i8 v2336 = (i8)(intptr_t)(ws+3256);
	i2 v2337 = *(i2*)(intptr_t)v2336;
	i8 v2338 = v2337;
	i1 v2339 = (i1)+3;
	i8 v2340 = ((i8)v2338)<<v2339;
	i8 v2341 = v2335+v2340;
	i8 v2342 = *(i8*)(intptr_t)v2341;
	i8 v2343 = (i8)(intptr_t)(ws+3248);
	i8 v2344 = *(i8*)(intptr_t)v2343;
	if (v2342==v2344) goto c02_021e; else goto c02_021f;

c02_021e:;

	goto endsub;

c02_021f:;

c02_021b:;

	goto c02_0217;

c02_021a:;

	i8 v2345 = (i8)(intptr_t)(ws+3200);
	i2 v2346 = *(i2*)(intptr_t)v2345;
	i2 v2347 = (i2)+300;
	if (v2346==v2347) goto c02_0223; else goto c02_0224;

c02_0223:;

	i8 v2348 = (i8)(intptr_t)c02_s001f;
	i8 v2349 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2349)(v2348);

	i8 v2350 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v2350)();

c02_0224:;

c02_0220:;

	i8 v2351 = (i8)(intptr_t)(ws+3248);
	i8 v2352 = *(i8*)(intptr_t)v2351;
	i8 v2353 = (i8)(intptr_t)(ws+800);
	i8 v2354 = (i8)(intptr_t)(ws+3200);
	i2 v2355 = *(i2*)(intptr_t)v2354;
	i8 v2356 = v2355;
	i1 v2357 = (i1)+3;
	i8 v2358 = ((i8)v2356)<<v2357;
	i8 v2359 = v2353+v2358;
	*(i8*)(intptr_t)v2359 = v2352;

	i8 v2360 = (i8)(intptr_t)(ws+3200);
	i2 v2361 = *(i2*)(intptr_t)v2360;
	i2 v2362 = v2361+(+1);
	i8 v2363 = (i8)(intptr_t)(ws+3200);
	*(i2*)(intptr_t)v2363 = v2362;

endsub:;
}
	void f105_push(i8 /* subr */);
	void f75_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f105_push(i8 /* subr */);
	void f105_push(i8 /* subr */);
const i1 c02_s0020[] = { 0x57,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x69,0x7a,0x65,0x73,0x3a,0x0a,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s0021[] = { 0x20,0x20,0x23,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
const i1 c02_s0022[] = { 0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s0023[] = { 0x20,0x62,0x79,0x74,0x65,0x73,0x0a,0 };
	void f12_print(i8 /* ptr */);

// PlaceSubroutines workspace at ws+792 length ws+2452
void f104_PlaceSubroutines(i8 p2304 /* subroutine */) {
	*(i8*)(intptr_t)(ws+792) = p2304; /*subroutine */

	i2 v2305 = (i2)+0;
	i8 v2306 = (i8)(intptr_t)(ws+3200);
	*(i2*)(intptr_t)v2306 = v2305;

	i1 v2307 = (i1)+0;
	i8 v2308 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2308 = v2307;

c02_0211:;

	i8 v2309 = (i8)(intptr_t)(ws+3202);
	i1 v2310 = *(i1*)(intptr_t)v2309;
	i1 v2311 = (i1)+4;
	if (v2310==v2311) goto c02_0214; else goto c02_0213;

c02_0213:;

	i2 v2312 = (i2)+0;
	i8 v2313 = (i8)(intptr_t)(ws+582);
	i8 v2314 = (i8)(intptr_t)(ws+3202);
	i1 v2315 = *(i1*)(intptr_t)v2314;
	i8 v2316 = v2315;
	i1 v2317 = (i1)+1;
	i8 v2318 = ((i8)v2316)<<v2317;
	i8 v2319 = v2313+v2318;
	*(i2*)(intptr_t)v2319 = v2312;

	i8 v2320 = (i8)(intptr_t)(ws+3202);
	i1 v2321 = *(i1*)(intptr_t)v2320;
	i1 v2322 = v2321+(+1);
	i8 v2323 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2323 = v2322;

	goto c02_0211;

c02_0214:;


	i8 v2364 = (i8)(intptr_t)(ws+792);
	i8 v2365 = *(i8*)(intptr_t)v2364;
	i8 v2366 = (i8)(intptr_t)(f105_push);

	((void(*)(i8 /* subr */))(intptr_t)v2366)(v2365);

c02_0227:;

	i8 v2367 = (i8)(intptr_t)(ws+3200);
	i2 v2368 = *(i2*)(intptr_t)v2367;
	i2 v2369 = (i2)+0;
	if (v2368==v2369) goto c02_022a; else goto c02_0229;

c02_0229:;

	i8 v2370 = (i8)(intptr_t)(ws+3200);
	i2 v2371 = *(i2*)(intptr_t)v2370;
	i2 v2372 = v2371+(-1);
	i8 v2373 = (i8)(intptr_t)(ws+3200);
	*(i2*)(intptr_t)v2373 = v2372;

	i8 v2374 = (i8)(intptr_t)(ws+800);
	i8 v2375 = (i8)(intptr_t)(ws+3200);
	i2 v2376 = *(i2*)(intptr_t)v2375;
	i8 v2377 = v2376;
	i1 v2378 = (i1)+3;
	i8 v2379 = ((i8)v2377)<<v2378;
	i8 v2380 = v2374+v2379;
	i8 v2381 = *(i8*)(intptr_t)v2380;
	i8 v2382 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2382 = v2381;

	i8 v2383 = (i8)(intptr_t)(ws+792);
	i8 v2384 = *(i8*)(intptr_t)v2383;
	i8 v2385 = v2384+(+188);
	i1 v2386 = *(i1*)(intptr_t)v2385;
	i1 v2387 = v2386|(+1);
	i8 v2388 = (i8)(intptr_t)(ws+792);
	i8 v2389 = *(i8*)(intptr_t)v2388;
	i8 v2390 = v2389+(+188);
	*(i1*)(intptr_t)v2390 = v2387;

	i1 v2391 = (i1)+0;
	i8 v2392 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2392 = v2391;

c02_022d:;

	i8 v2393 = (i8)(intptr_t)(ws+3202);
	i1 v2394 = *(i1*)(intptr_t)v2393;
	i1 v2395 = (i1)+4;
	if (v2394==v2395) goto c02_0230; else goto c02_022f;

c02_022f:;

	i8 v2396 = (i8)(intptr_t)(ws+792);
	i8 v2397 = *(i8*)(intptr_t)v2396;
	i8 v2398 = v2397+(+176);
	i8 v2399 = (i8)(intptr_t)(ws+3202);
	i1 v2400 = *(i1*)(intptr_t)v2399;
	i8 v2401 = v2400;
	i1 v2402 = (i1)+1;
	i8 v2403 = ((i8)v2401)<<v2402;
	i8 v2404 = v2398+v2403;
	i2 v2405 = *(i2*)(intptr_t)v2404;
	i8 v2406 = (i8)(intptr_t)(ws+792);
	i8 v2407 = *(i8*)(intptr_t)v2406;
	i8 v2408 = v2407+(+168);
	i8 v2409 = (i8)(intptr_t)(ws+3202);
	i1 v2410 = *(i1*)(intptr_t)v2409;
	i8 v2411 = v2410;
	i1 v2412 = (i1)+1;
	i8 v2413 = ((i8)v2411)<<v2412;
	i8 v2414 = v2408+v2413;
	i2 v2415 = *(i2*)(intptr_t)v2414;
	i2 v2416 = v2405+v2415;
	i8 v2417 = (i8)(intptr_t)(ws+3212);
	*(i2*)(intptr_t)v2417 = v2416;

	i8 v2418 = (i8)(intptr_t)(ws+3212);
	i2 v2419 = *(i2*)(intptr_t)v2418;
	i1 v2420 = (i1)+8;
	i8 v2421 = (i8)(intptr_t)(f75_ArchAlignUp);
	i2 v2422;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v2421)(&v2422, v2420, v2419);
	i8 v2423 = (i8)(intptr_t)(ws+3204);
	i8 v2424 = (i8)(intptr_t)(ws+3202);
	i1 v2425 = *(i1*)(intptr_t)v2424;
	i8 v2426 = v2425;
	i1 v2427 = (i1)+1;
	i8 v2428 = ((i8)v2426)<<v2427;
	i8 v2429 = v2423+v2428;
	*(i2*)(intptr_t)v2429 = v2422;

	i8 v2430 = (i8)(intptr_t)(ws+582);
	i8 v2431 = (i8)(intptr_t)(ws+3202);
	i1 v2432 = *(i1*)(intptr_t)v2431;
	i8 v2433 = v2432;
	i1 v2434 = (i1)+1;
	i8 v2435 = ((i8)v2433)<<v2434;
	i8 v2436 = v2430+v2435;
	i2 v2437 = *(i2*)(intptr_t)v2436;
	i8 v2438 = (i8)(intptr_t)(ws+3212);
	i2 v2439 = *(i2*)(intptr_t)v2438;
	if (v2437<v2439) goto c02_0234; else goto c02_0235;

c02_0234:;

	i8 v2440 = (i8)(intptr_t)(ws+3212);
	i2 v2441 = *(i2*)(intptr_t)v2440;
	i8 v2442 = (i8)(intptr_t)(ws+582);
	i8 v2443 = (i8)(intptr_t)(ws+3202);
	i1 v2444 = *(i1*)(intptr_t)v2443;
	i8 v2445 = v2444;
	i1 v2446 = (i1)+1;
	i8 v2447 = ((i8)v2445)<<v2446;
	i8 v2448 = v2442+v2447;
	*(i2*)(intptr_t)v2448 = v2441;

c02_0235:;

c02_0231:;

	i8 v2449 = (i8)(intptr_t)(ws+3202);
	i1 v2450 = *(i1*)(intptr_t)v2449;
	i1 v2451 = v2450+(+1);
	i8 v2452 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2452 = v2451;

	goto c02_022d;

c02_0230:;

	i8 v2453 = (i8)(intptr_t)(ws+792);
	i8 v2454 = *(i8*)(intptr_t)v2453;
	i8 v2455 = v2454+(+16);
	i8 v2456 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v2456 = v2455;

c02_0238:;

	i8 v2457 = (i8)(intptr_t)(ws+3216);
	i8 v2458 = *(i8*)(intptr_t)v2457;
	i8 v2459 = (i8)+0;
	if (v2458==v2459) goto c02_023b; else goto c02_023a;

c02_023a:;

	i1 v2460 = (i1)+0;
	i8 v2461 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v2461 = v2460;

c02_023e:;

	i8 v2462 = (i8)(intptr_t)(ws+3224);
	i1 v2463 = *(i1*)(intptr_t)v2462;
	i1 v2464 = (i1)+16;
	if (v2463==v2464) goto c02_0241; else goto c02_0240;

c02_0240:;

	i8 v2465 = (i8)(intptr_t)(ws+3216);
	i8 v2466 = *(i8*)(intptr_t)v2465;
	i8 v2467 = v2466+(+8);
	i8 v2468 = (i8)(intptr_t)(ws+3224);
	i1 v2469 = *(i1*)(intptr_t)v2468;
	i8 v2470 = v2469;
	i1 v2471 = (i1)+3;
	i8 v2472 = ((i8)v2470)<<v2471;
	i8 v2473 = v2467+v2472;
	i8 v2474 = *(i8*)(intptr_t)v2473;
	i8 v2475 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v2475 = v2474;

	i8 v2476 = (i8)(intptr_t)(ws+3224);
	i1 v2477 = *(i1*)(intptr_t)v2476;
	i1 v2478 = v2477+(+1);
	i8 v2479 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v2479 = v2478;

	i8 v2480 = (i8)(intptr_t)(ws+3232);
	i8 v2481 = *(i8*)(intptr_t)v2480;
	i8 v2482 = (i8)+0;
	if (v2481==v2482) goto c02_0245; else goto c02_0246;

c02_0245:;

	goto c02_0241;

c02_0246:;

c02_0242:;

	i8 v2483 = (i8)(intptr_t)(ws+3232);
	i8 v2484 = *(i8*)(intptr_t)v2483;
	i8 v2485 = (i8)(intptr_t)(f87_Deref);
	i8 v2486;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2485)(&v2486, v2484);
	i8 v2487 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v2487 = v2486;

	i1 v2488 = (i1)+0;
	i8 v2489 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2489 = v2488;

c02_0249:;

	i8 v2490 = (i8)(intptr_t)(ws+3202);
	i1 v2491 = *(i1*)(intptr_t)v2490;
	i1 v2492 = (i1)+4;
	if (v2491==v2492) goto c02_024c; else goto c02_024b;

c02_024b:;

	i8 v2493 = (i8)(intptr_t)(ws+3232);
	i8 v2494 = *(i8*)(intptr_t)v2493;
	i8 v2495 = v2494+(+176);
	i8 v2496 = (i8)(intptr_t)(ws+3202);
	i1 v2497 = *(i1*)(intptr_t)v2496;
	i8 v2498 = v2497;
	i1 v2499 = (i1)+1;
	i8 v2500 = ((i8)v2498)<<v2499;
	i8 v2501 = v2495+v2500;
	i2 v2502 = *(i2*)(intptr_t)v2501;
	i8 v2503 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v2503 = v2502;

	i8 v2504 = (i8)(intptr_t)(ws+3204);
	i8 v2505 = (i8)(intptr_t)(ws+3202);
	i1 v2506 = *(i1*)(intptr_t)v2505;
	i8 v2507 = v2506;
	i1 v2508 = (i1)+1;
	i8 v2509 = ((i8)v2507)<<v2508;
	i8 v2510 = v2504+v2509;
	i2 v2511 = *(i2*)(intptr_t)v2510;
	i8 v2512 = (i8)(intptr_t)(ws+3242);
	*(i2*)(intptr_t)v2512 = v2511;

	i8 v2513 = (i8)(intptr_t)(ws+3240);
	i2 v2514 = *(i2*)(intptr_t)v2513;
	i8 v2515 = (i8)(intptr_t)(ws+3242);
	i2 v2516 = *(i2*)(intptr_t)v2515;
	if (v2514<v2516) goto c02_0250; else goto c02_0251;

c02_0250:;

	i8 v2517 = (i8)(intptr_t)(ws+3242);
	i2 v2518 = *(i2*)(intptr_t)v2517;
	i8 v2519 = (i8)(intptr_t)(ws+3232);
	i8 v2520 = *(i8*)(intptr_t)v2519;
	i8 v2521 = v2520+(+176);
	i8 v2522 = (i8)(intptr_t)(ws+3202);
	i1 v2523 = *(i1*)(intptr_t)v2522;
	i8 v2524 = v2523;
	i1 v2525 = (i1)+1;
	i8 v2526 = ((i8)v2524)<<v2525;
	i8 v2527 = v2521+v2526;
	*(i2*)(intptr_t)v2527 = v2518;

	i8 v2528 = (i8)(intptr_t)(ws+3232);
	i8 v2529 = *(i8*)(intptr_t)v2528;
	i8 v2530 = (i8)(intptr_t)(f105_push);

	((void(*)(i8 /* subr */))(intptr_t)v2530)(v2529);

c02_0251:;

c02_024d:;

	i8 v2531 = (i8)(intptr_t)(ws+3202);
	i1 v2532 = *(i1*)(intptr_t)v2531;
	i1 v2533 = v2532+(+1);
	i8 v2534 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2534 = v2533;

	goto c02_0249;

c02_024c:;

	i8 v2535 = (i8)(intptr_t)(ws+3232);
	i8 v2536 = *(i8*)(intptr_t)v2535;
	i8 v2537 = v2536+(+188);
	i1 v2538 = *(i1*)(intptr_t)v2537;
	i1 v2539 = v2538&(+1);
	i1 v2540 = (i1)+0;
	if (v2539==v2540) goto c02_0255; else goto c02_0256;

c02_0255:;

	i8 v2541 = (i8)(intptr_t)(ws+3232);
	i8 v2542 = *(i8*)(intptr_t)v2541;
	i8 v2543 = (i8)(intptr_t)(f105_push);

	((void(*)(i8 /* subr */))(intptr_t)v2543)(v2542);

	i8 v2544 = (i8)(intptr_t)(ws+3232);
	i8 v2545 = *(i8*)(intptr_t)v2544;
	i8 v2546 = v2545+(+188);
	i1 v2547 = *(i1*)(intptr_t)v2546;
	i1 v2548 = v2547|(+1);
	i8 v2549 = (i8)(intptr_t)(ws+3232);
	i8 v2550 = *(i8*)(intptr_t)v2549;
	i8 v2551 = v2550+(+188);
	*(i1*)(intptr_t)v2551 = v2548;

c02_0256:;

c02_0252:;

	goto c02_023e;

c02_0241:;

	i8 v2552 = (i8)(intptr_t)(ws+3216);
	i8 v2553 = *(i8*)(intptr_t)v2552;
	i8 v2554 = *(i8*)(intptr_t)v2553;
	i8 v2555 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v2555 = v2554;

	goto c02_0238;

c02_023b:;

	goto c02_0227;

c02_022a:;

	i8 v2556 = (i8)(intptr_t)c02_s0020;
	i8 v2557 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2557)(v2556);

	i1 v2558 = (i1)+0;
	i8 v2559 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2559 = v2558;

c02_0259:;

	i8 v2560 = (i8)(intptr_t)(ws+3202);
	i1 v2561 = *(i1*)(intptr_t)v2560;
	i1 v2562 = (i1)+4;
	if (v2561==v2562) goto c02_025c; else goto c02_025b;

c02_025b:;

	i8 v2563 = (i8)(intptr_t)c02_s0021;
	i8 v2564 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2564)(v2563);

	i8 v2565 = (i8)(intptr_t)(ws+3202);
	i1 v2566 = *(i1*)(intptr_t)v2565;
	i8 v2567 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v2567)(v2566);

	i8 v2568 = (i8)(intptr_t)c02_s0022;
	i8 v2569 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2569)(v2568);

	i8 v2570 = (i8)(intptr_t)(ws+582);
	i8 v2571 = (i8)(intptr_t)(ws+3202);
	i1 v2572 = *(i1*)(intptr_t)v2571;
	i8 v2573 = v2572;
	i1 v2574 = (i1)+1;
	i8 v2575 = ((i8)v2573)<<v2574;
	i8 v2576 = v2570+v2575;
	i2 v2577 = *(i2*)(intptr_t)v2576;
	i8 v2578 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2578)(v2577);

	i8 v2579 = (i8)(intptr_t)c02_s0023;
	i8 v2580 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2580)(v2579);

	i8 v2581 = (i8)(intptr_t)(ws+3202);
	i1 v2582 = *(i1*)(intptr_t)v2581;
	i1 v2583 = v2582+(+1);
	i8 v2584 = (i8)(intptr_t)(ws+3202);
	*(i1*)(intptr_t)v2584 = v2583;

	goto c02_0259;

c02_025c:;

endsub:;
}
const i1 c02_s0024[] = { 0x43,0x4f,0x57,0x4c,0x49,0x4e,0x4b,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f38_GetFreeMemory(i8* /* i */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s0025[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s0026[] = { 0x53,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x0a,0 };
	void f62_SimpleError(i8 /* s */);

// SyntaxError workspace at ws+792 length ws+0
void f106_SyntaxError(void) {

	i8 v2605 = (i8)(intptr_t)c02_s0026;
	i8 v2606 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2606)(v2605);

endsub:;
}
const i1 c02_s0027[] = { 0x41,0x64,0x64,0x69,0x6e,0x67,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f89_OpenAndLoadCoo(i8* /* coo */, i8 /* filename */);
	void f85_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	void f84_AddRef(i8 /* calls */, i8 /* subr */);

// AddInputFile workspace at ws+792 length ws+24
void f107_AddInputFile(i8 p2607 /* filename */) {
	*(i8*)(intptr_t)(ws+792) = p2607; /*filename */

	i8 v2608 = (i8)(intptr_t)c02_s0027;
	i8 v2609 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2609)(v2608);

	i8 v2610 = (i8)(intptr_t)(ws+792);
	i8 v2611 = *(i8*)(intptr_t)v2610;
	i8 v2612 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2612)(v2611);

	i8 v2613 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2613)();

	i8 v2614 = (i8)(intptr_t)(ws+792);
	i8 v2615 = *(i8*)(intptr_t)v2614;
	i8 v2616 = (i8)(intptr_t)(f89_OpenAndLoadCoo);
	i8 v2617;

	((void(*)(i8* /* coo */, i8 /* filename */))(intptr_t)v2616)(&v2617, v2615);
	i8 v2618 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v2618 = v2617;

	i8 v2619 = (i8)(intptr_t)(ws+752);
	i8 v2620 = *(i8*)(intptr_t)v2619;
	i8 v2621 = (i8)+0;
	if (v2620==v2621) goto c02_0260; else goto c02_0261;

c02_0260:;

	i8 v2622 = (i8)(intptr_t)(ws+800);
	i8 v2623 = *(i8*)(intptr_t)v2622;
	i8 v2624 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2624 = v2623;

	i8 v2625 = (i8)(intptr_t)(ws+800);
	i8 v2626 = *(i8*)(intptr_t)v2625;
	i8 v2627 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v2627 = v2626;

	goto c02_025d;

c02_0261:;

	i8 v2628 = (i8)(intptr_t)(ws+800);
	i8 v2629 = *(i8*)(intptr_t)v2628;
	i8 v2630 = (i8)(intptr_t)(ws+744);
	i8 v2631 = *(i8*)(intptr_t)v2630;
	i8 v2632 = v2631+(+672);
	*(i8*)(intptr_t)v2632 = v2629;

	i8 v2633 = (i8)(intptr_t)(ws+800);
	i8 v2634 = *(i8*)(intptr_t)v2633;
	i8 v2635 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v2635 = v2634;

c02_025d:;

	i8 v2636 = (i8)(intptr_t)(ws+800);
	i8 v2637 = *(i8*)(intptr_t)v2636;
	i2 v2638 = (i2)+0;
	i8 v2639 = (i8)(intptr_t)(f85_FindSub);
	i8 v2640;

	((void(*)(i8* /* ptr */, i2 /* id */, i8 /* coo */))(intptr_t)v2639)(&v2640, v2638, v2637);
	i8 v2641 = *(i8*)(intptr_t)v2640;
	i8 v2642 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v2642 = v2641;

	i8 v2643 = (i8)(intptr_t)(ws+808);
	i8 v2644 = *(i8*)(intptr_t)v2643;
	i8 v2645 = (i8)+0;
	if (v2644==v2645) goto c02_0266; else goto c02_0265;

c02_0265:;

	i8 v2646 = (i8)(intptr_t)(ws+768);
	i8 v2647 = *(i8*)(intptr_t)v2646;
	i8 v2648 = (i8)+0;
	if (v2647==v2648) goto c02_026a; else goto c02_026b;

c02_026a:;

	i8 v2649 = (i8)(intptr_t)(ws+808);
	i8 v2650 = *(i8*)(intptr_t)v2649;
	i8 v2651 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v2651 = v2650;

c02_026b:;

c02_0267:;

c02_0266:;

c02_0262:;

	i8 v2652 = (i8)(intptr_t)(ws+776);
	i8 v2653 = *(i8*)(intptr_t)v2652;
	i8 v2654 = (i8)+0;
	if (v2653==v2654) goto c02_0270; else goto c02_026f;

c02_026f:;

	i8 v2655 = (i8)(intptr_t)(ws+776);
	i8 v2656 = *(i8*)(intptr_t)v2655;
	i8 v2657 = (i8)(intptr_t)(ws+808);
	i8 v2658 = *(i8*)(intptr_t)v2657;
	i8 v2659 = (i8)(intptr_t)(f84_AddRef);

	((void(*)(i8 /* calls */, i8 /* subr */))(intptr_t)v2659)(v2658, v2656);

c02_0270:;

c02_026c:;

	i8 v2660 = (i8)(intptr_t)(ws+808);
	i8 v2661 = *(i8*)(intptr_t)v2660;
	i8 v2662 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v2662 = v2661;

endsub:;
}
	void f24_ArgvInit(void);
	void f25_ArgvNext(i8* /* arg */);
const i1 c02_s0028[] = { 0x2d,0x6f,0 };
	void f28_StrICmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f25_ArgvNext(i8* /* arg */);
	void f106_SyntaxError(void);
	void f107_AddInputFile(i8 /* filename */);
const i1 c02_s0029[] = { 0x4e,0x6f,0x20,0x6d,0x61,0x69,0x6e,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x69,0x6e,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0 };
	void f62_SimpleError(i8 /* s */);
const i1 c02_s002a[] = { 0x4e,0x6f,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0 };
	void f62_SimpleError(i8 /* s */);
const i1 c02_s002b[] = { 0x41,0x6e,0x61,0x6c,0x79,0x73,0x69,0x6e,0x67,0x2e,0x2e,0x2e,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f103_ResolveExternals(void);
	void f104_PlaceSubroutines(i8 /* subroutine */);
	void f73_EmitterOpenfile(i8 /* filename */);
const i1 c02_s002c[] = { 0x43,0x72,0x65,0x61,0x74,0x69,0x6e,0x67,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f90_InitStreams(void);
	void f91_SetStream(i1 /* sid */);
	void f79_ArchEmitHeader(i8 /* coo */);
	void f94_FlushStream(void);
	void f102_WriteAllSubroutinesToOutputFile(i8 /* coos */);
	void f91_SetStream(i1 /* sid */);
	void f80_ArchEmitFooter(i8 /* coo */);
	void f94_FlushStream(void);
	void f74_EmitterClosefile(void);
const i1 c02_s002d[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f38_GetFreeMemory(i8* /* i */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s002e[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);

// __main workspace at ws+0 length ws+792
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

	i2 v1025 = (i2)+1;
	i8 v1026 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1026 = v1025;






















	i1 v1258 = (i1)+1;
	i8 v1259 = (i8)(intptr_t)(ws+590);
	*(i1*)(intptr_t)v1259 = v1258;













	i1 v1814 = (i1)+0;
	i8 v1815 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1815 = v1814;

	i1 v1816 = (i1)+0;
	i8 v1817 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1817 = v1816;








	i8 v2585 = (i8)(intptr_t)c02_s0024;
	i8 v2586 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2586)(v2585);

	i8 v2587 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v2588;

	((void(*)(i8* /* i */))(intptr_t)v2587)(&v2588);
	i1 v2589 = (i1)+10;
	i8 v2590 = ((i8)v2588)>>v2589;
	i2 v2591 = v2590;
	i8 v2592 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2592)(v2591);

	i8 v2593 = (i8)(intptr_t)c02_s0025;
	i8 v2594 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2594)(v2593);

	i8 v2595 = (i8)+0;
	i8 v2596 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v2596 = v2595;

	i8 v2597 = (i8)+0;
	i8 v2598 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2598 = v2597;

	i8 v2599 = (i8)+0;
	i8 v2600 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v2600 = v2599;

	i8 v2601 = (i8)+0;
	i8 v2602 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v2602 = v2601;

	i8 v2603 = (i8)+0;
	i8 v2604 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v2604 = v2603;



	i8 v2663 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v2663)();

c02_0271:;

	i8 v2664 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v2665;

	((void(*)(i8* /* arg */))(intptr_t)v2664)(&v2665);
	i8 v2666 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v2666 = v2665;

	i8 v2667 = (i8)(intptr_t)(ws+784);
	i8 v2668 = *(i8*)(intptr_t)v2667;
	i8 v2669 = (i8)+0;
	if (v2668==v2669) goto c02_0276; else goto c02_0277;

c02_0276:;

	goto c02_0272;

c02_0277:;

c02_0273:;

	i8 v2670 = (i8)(intptr_t)(ws+784);
	i8 v2671 = *(i8*)(intptr_t)v2670;
	i8 v2672 = (i8)(intptr_t)c02_s0028;
	i8 v2673 = (i8)(intptr_t)(f28_StrICmp);
	i1 v2674;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v2673)(&v2674, v2672, v2671);
	i1 v2675 = (i1)+0;
	if (v2674==v2675) goto c02_027b; else goto c02_027c;

c02_027b:;

	i8 v2676 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v2677;

	((void(*)(i8* /* arg */))(intptr_t)v2676)(&v2677);
	i8 v2678 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v2678 = v2677;

	goto c02_0278;

c02_027c:;

	i8 v2679 = (i8)(intptr_t)(ws+784);
	i8 v2680 = *(i8*)(intptr_t)v2679;
	i1 v2681 = *(i1*)(intptr_t)v2680;
	i1 v2682 = (i1)+45;
	if (v2681==v2682) goto c02_027f; else goto c02_0280;

c02_027f:;

	i8 v2683 = (i8)(intptr_t)(f106_SyntaxError);

	((void(*)(void))(intptr_t)v2683)();

	goto c02_0278;

c02_0280:;

	i8 v2684 = (i8)(intptr_t)(ws+784);
	i8 v2685 = *(i8*)(intptr_t)v2684;
	i8 v2686 = (i8)(intptr_t)(f107_AddInputFile);

	((void(*)(i8 /* filename */))(intptr_t)v2686)(v2685);

c02_0278:;

	goto c02_0271;

c02_0272:;

	i8 v2687 = (i8)(intptr_t)(ws+768);
	i8 v2688 = *(i8*)(intptr_t)v2687;
	i8 v2689 = (i8)+0;
	if (v2688==v2689) goto c02_0284; else goto c02_0285;

c02_0284:;

	i8 v2690 = (i8)(intptr_t)c02_s0029;
	i8 v2691 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2691)(v2690);

c02_0285:;

c02_0281:;

	i8 v2692 = (i8)(intptr_t)(ws+760);
	i8 v2693 = *(i8*)(intptr_t)v2692;
	i8 v2694 = (i8)+0;
	if (v2693==v2694) goto c02_0289; else goto c02_028a;

c02_0289:;

	i8 v2695 = (i8)(intptr_t)c02_s002a;
	i8 v2696 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2696)(v2695);

c02_028a:;

c02_0286:;

	i8 v2697 = (i8)(intptr_t)c02_s002b;
	i8 v2698 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2698)(v2697);

	i8 v2699 = (i8)(intptr_t)(f103_ResolveExternals);

	((void(*)(void))(intptr_t)v2699)();

	i8 v2700 = (i8)(intptr_t)(ws+768);
	i8 v2701 = *(i8*)(intptr_t)v2700;
	i8 v2702 = (i8)(intptr_t)(f104_PlaceSubroutines);

	((void(*)(i8 /* subroutine */))(intptr_t)v2702)(v2701);

	i8 v2703 = (i8)(intptr_t)(ws+760);
	i8 v2704 = *(i8*)(intptr_t)v2703;
	i8 v2705 = (i8)(intptr_t)(f73_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v2705)(v2704);

	i8 v2706 = (i8)(intptr_t)c02_s002c;
	i8 v2707 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2707)(v2706);

	i8 v2708 = (i8)(intptr_t)(ws+760);
	i8 v2709 = *(i8*)(intptr_t)v2708;
	i8 v2710 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2710)(v2709);

	i8 v2711 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2711)();

	i8 v2712 = (i8)(intptr_t)(f90_InitStreams);

	((void(*)(void))(intptr_t)v2712)();

	i1 v2713 = (i1)+7;
	i8 v2714 = (i8)(intptr_t)(f91_SetStream);

	((void(*)(i1 /* sid */))(intptr_t)v2714)(v2713);

	i8 v2715 = (i8)(intptr_t)(ws+752);
	i8 v2716 = *(i8*)(intptr_t)v2715;
	i8 v2717 = (i8)(intptr_t)(f79_ArchEmitHeader);

	((void(*)(i8 /* coo */))(intptr_t)v2717)(v2716);

	i8 v2718 = (i8)(intptr_t)(f94_FlushStream);

	((void(*)(void))(intptr_t)v2718)();

	i8 v2719 = (i8)(intptr_t)(ws+752);
	i8 v2720 = *(i8*)(intptr_t)v2719;
	i8 v2721 = (i8)(intptr_t)(f102_WriteAllSubroutinesToOutputFile);

	((void(*)(i8 /* coos */))(intptr_t)v2721)(v2720);

	i1 v2722 = (i1)+7;
	i8 v2723 = (i8)(intptr_t)(f91_SetStream);

	((void(*)(i1 /* sid */))(intptr_t)v2723)(v2722);

	i8 v2724 = (i8)(intptr_t)(ws+752);
	i8 v2725 = *(i8*)(intptr_t)v2724;
	i8 v2726 = (i8)(intptr_t)(f80_ArchEmitFooter);

	((void(*)(i8 /* coo */))(intptr_t)v2726)(v2725);

	i8 v2727 = (i8)(intptr_t)(f94_FlushStream);

	((void(*)(void))(intptr_t)v2727)();

	i8 v2728 = (i8)(intptr_t)(f74_EmitterClosefile);

	((void(*)(void))(intptr_t)v2728)();

	i8 v2729 = (i8)(intptr_t)c02_s002d;
	i8 v2730 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2730)(v2729);

	i8 v2731 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v2732;

	((void(*)(i8* /* i */))(intptr_t)v2731)(&v2732);
	i1 v2733 = (i1)+10;
	i8 v2734 = ((i8)v2732)>>v2733;
	i2 v2735 = v2734;
	i8 v2736 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2736)(v2735);

	i8 v2737 = (i8)(intptr_t)c02_s002e;
	i8 v2738 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2738)(v2737);

endsub:;
}
void cmain(void) {
	f3___main();
}
