#include "cowgol.h"
static i8 workspace[0x020d];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+4024 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+4176 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+4176) = p10; /*buf */
	*(i1*)(intptr_t)(ws+4184) = p9; /*byte */
	*(i8*)(intptr_t)(ws+4192) = p8; /*len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4176) 
,  
*(i1*)(intptr_t)(ws+4184) 
,  
*(i8*)(intptr_t)(ws+4192) 
); 



endsub:;
}

// print_char workspace at ws+4040 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+4040) = p11; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+4040) 
); 



endsub:;
}
	void f8_print_char(i1 /* c */);

// print workspace at ws+4024 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+4024) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+4024);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+4032);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+4032);
	i1 v29 = *(i1*)(intptr_t)v28;
	i8 v30 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v30)(v29);

	i8 v31 = (i8)(intptr_t)(ws+4024);
	i8 v32 = *(i8*)(intptr_t)v31;
	i8 v33 = v32+(+1);
	i8 v34 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v34 = v33;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_nl workspace at ws+4024 length ws+0
void f12_print_nl(void) {

	i1 v35 = (i1)+10;
	i8 v36 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v36)(v35);

endsub:;
}

// UIToA workspace at ws+4064 length ws+49
void f13_UIToA(i8* p37 /* ptr */, i8 p38 /* buffer */, i1 p39 /* base */, i4 p40 /* value */) {
	*(i4*)(intptr_t)(ws+4064) = p40; /*value */
	*(i1*)(intptr_t)(ws+4068) = p39; /*base */
	*(i8*)(intptr_t)(ws+4072) = p38; /*buffer */

	i8 v41 = (i8)(intptr_t)(ws+4072);
	i8 v42 = *(i8*)(intptr_t)v41;
	i8 v43 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v43 = v42;

c02_0008:;

	i8 v44 = (i8)(intptr_t)(ws+4064);
	i4 v45 = *(i4*)(intptr_t)v44;
	i8 v46 = (i8)(intptr_t)(ws+4068);
	i1 v47 = *(i1*)(intptr_t)v46;
	i4 v48 = v47;
	i4 v49 = v45%v48;
	i8 v50 = (i8)(intptr_t)(ws+4088);
	*(i4*)(intptr_t)v50 = v49;

	i8 v51 = (i8)(intptr_t)(ws+4064);
	i4 v52 = *(i4*)(intptr_t)v51;
	i8 v53 = (i8)(intptr_t)(ws+4068);
	i1 v54 = *(i1*)(intptr_t)v53;
	i4 v55 = v54;
	i4 v56 = v52/v55;
	i8 v57 = (i8)(intptr_t)(ws+4064);
	*(i4*)(intptr_t)v57 = v56;

	i8 v58 = (i8)(intptr_t)(ws+4088);
	i4 v59 = *(i4*)(intptr_t)v58;
	i4 v60 = (i4)+10;
	if (v59<v60) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v61 = (i8)(intptr_t)(ws+4088);
	i4 v62 = *(i4*)(intptr_t)v61;
	i4 v63 = v62+(+48);
	i8 v64 = (i8)(intptr_t)(ws+4088);
	*(i4*)(intptr_t)v64 = v63;

	goto c02_000a;

c02_000e:;

	i8 v65 = (i8)(intptr_t)(ws+4088);
	i4 v66 = *(i4*)(intptr_t)v65;
	i4 v67 = v66+(+87);
	i8 v68 = (i8)(intptr_t)(ws+4088);
	*(i4*)(intptr_t)v68 = v67;

c02_000a:;

	i8 v69 = (i8)(intptr_t)(ws+4088);
	i4 v70 = *(i4*)(intptr_t)v69;
	i1 v71 = v70;
	i8 v72 = (i8)(intptr_t)(ws+4080);
	i8 v73 = *(i8*)(intptr_t)v72;
	*(i1*)(intptr_t)v73 = v71;

	i8 v74 = (i8)(intptr_t)(ws+4080);
	i8 v75 = *(i8*)(intptr_t)v74;
	i8 v76 = v75+(+1);
	i8 v77 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v77 = v76;

	i8 v78 = (i8)(intptr_t)(ws+4064);
	i4 v79 = *(i4*)(intptr_t)v78;
	i4 v80 = (i4)+0;
	if (v79==v80) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v81 = (i8)(intptr_t)(ws+4072);
	i8 v82 = *(i8*)(intptr_t)v81;
	i8 v83 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v83 = v82;

	i8 v84 = (i8)(intptr_t)(ws+4080);
	i8 v85 = *(i8*)(intptr_t)v84;
	i8 v86 = v85+(-1);
	i8 v87 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v87 = v86;

c02_0016:;

	i8 v88 = (i8)(intptr_t)(ws+4096);
	i8 v89 = *(i8*)(intptr_t)v88;
	i8 v90 = (i8)(intptr_t)(ws+4104);
	i8 v91 = *(i8*)(intptr_t)v90;
	if (v89<v91) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v92 = (i8)(intptr_t)(ws+4096);
	i8 v93 = *(i8*)(intptr_t)v92;
	i1 v94 = *(i1*)(intptr_t)v93;
	i8 v95 = (i8)(intptr_t)(ws+4112);
	*(i1*)(intptr_t)v95 = v94;

	i8 v96 = (i8)(intptr_t)(ws+4104);
	i8 v97 = *(i8*)(intptr_t)v96;
	i1 v98 = *(i1*)(intptr_t)v97;
	i8 v99 = (i8)(intptr_t)(ws+4096);
	i8 v100 = *(i8*)(intptr_t)v99;
	*(i1*)(intptr_t)v100 = v98;

	i8 v101 = (i8)(intptr_t)(ws+4112);
	i1 v102 = *(i1*)(intptr_t)v101;
	i8 v103 = (i8)(intptr_t)(ws+4104);
	i8 v104 = *(i8*)(intptr_t)v103;
	*(i1*)(intptr_t)v104 = v102;

	i8 v105 = (i8)(intptr_t)(ws+4096);
	i8 v106 = *(i8*)(intptr_t)v105;
	i8 v107 = v106+(+1);
	i8 v108 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v108 = v107;

	i8 v109 = (i8)(intptr_t)(ws+4104);
	i8 v110 = *(i8*)(intptr_t)v109;
	i8 v111 = v110+(-1);
	i8 v112 = (i8)(intptr_t)(ws+4104);
	*(i8*)(intptr_t)v112 = v111;

	goto c02_0016;

c02_0019:;

	i1 v113 = (i1)+0;
	i8 v114 = (i8)(intptr_t)(ws+4080);
	i8 v115 = *(i8*)(intptr_t)v114;
	*(i1*)(intptr_t)v115 = v113;

endsub:;
	*p37 = *(i8*)(intptr_t)(ws+4080);
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f11_print(i8 /* ptr */);

// print_i32 workspace at ws+3960 length ws+24
void f15_print_i32(i4 p143 /* value */) {
	*(i4*)(intptr_t)(ws+3960) = p143; /*value */

	i8 v144 = (i8)(intptr_t)(ws+3960);
	i4 v145 = *(i4*)(intptr_t)v144;
	i1 v146 = (i1)+10;
	i8 v147 = (i8)(intptr_t)(ws+3964);
	i8 v148 = (i8)(intptr_t)(f13_UIToA);
	i8 v149;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v148)(&v149, v147, v146, v145);
	i8 v150 = (i8)(intptr_t)(ws+3976);
	*(i8*)(intptr_t)v150 = v149;

	i8 v151 = (i8)(intptr_t)(ws+3964);
	i8 v152 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v152)(v151);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i16 workspace at ws+3736 length ws+2
void f16_print_i16(i2 p153 /* value */) {
	*(i2*)(intptr_t)(ws+3736) = p153; /*value */

	i8 v154 = (i8)(intptr_t)(ws+3736);
	i2 v155 = *(i2*)(intptr_t)v154;
	i4 v156 = v155;
	i8 v157 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v157)(v156);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i8 workspace at ws+3952 length ws+1
void f17_print_i8(i1 p158 /* value */) {
	*(i1*)(intptr_t)(ws+3952) = p158; /*value */

	i8 v159 = (i8)(intptr_t)(ws+3952);
	i1 v160 = *(i1*)(intptr_t)v159;
	i4 v161 = v160;
	i8 v162 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v162)(v161);

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+4032 length ws+3
void f18_print_hex_i8(i1 p163 /* value */) {
	*(i1*)(intptr_t)(ws+4032) = p163; /*value */

	i1 v164 = (i1)+2;
	i8 v165 = (i8)(intptr_t)(ws+4033);
	*(i1*)(intptr_t)v165 = v164;

c02_001f:;

	i8 v166 = (i8)(intptr_t)(ws+4032);
	i1 v167 = *(i1*)(intptr_t)v166;
	i1 v168 = (i1)+4;
	i1 v169 = ((i1)v167)>>v168;
	i8 v170 = (i8)(intptr_t)(ws+4034);
	*(i1*)(intptr_t)v170 = v169;

	i8 v171 = (i8)(intptr_t)(ws+4034);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = (i1)+10;
	if (v172<v173) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v174 = (i8)(intptr_t)(ws+4034);
	i1 v175 = *(i1*)(intptr_t)v174;
	i1 v176 = v175+(+48);
	i8 v177 = (i8)(intptr_t)(ws+4034);
	*(i1*)(intptr_t)v177 = v176;

	goto c02_0021;

c02_0025:;

	i8 v178 = (i8)(intptr_t)(ws+4034);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = v179+(+87);
	i8 v181 = (i8)(intptr_t)(ws+4034);
	*(i1*)(intptr_t)v181 = v180;

c02_0021:;

	i8 v182 = (i8)(intptr_t)(ws+4034);
	i1 v183 = *(i1*)(intptr_t)v182;
	i8 v184 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v184)(v183);

	i8 v185 = (i8)(intptr_t)(ws+4032);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = (i1)+4;
	i1 v188 = ((i1)v186)<<v187;
	i8 v189 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v189 = v188;

	i8 v190 = (i8)(intptr_t)(ws+4033);
	i1 v191 = *(i1*)(intptr_t)v190;
	i1 v192 = v191+(-1);
	i8 v193 = (i8)(intptr_t)(ws+4033);
	*(i1*)(intptr_t)v193 = v192;

	i8 v194 = (i8)(intptr_t)(ws+4033);
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

// print_hex_i16 workspace at ws+4024 length ws+2
void f19_print_hex_i16(i2 p197 /* value */) {
	*(i2*)(intptr_t)(ws+4024) = p197; /*value */

	i8 v198 = (i8)(intptr_t)(ws+4024);
	i2 v199 = *(i2*)(intptr_t)v198;
	i1 v200 = (i1)+8;
	i2 v201 = ((i2)v199)>>v200;
	i1 v202 = v201;
	i8 v203 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v203)(v202);

	i8 v204 = (i8)(intptr_t)(ws+4024);
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

// print_hex_i32 workspace at ws+4024 length ws+4
void f20_print_hex_i32(i4 p208 /* value */) {
	*(i4*)(intptr_t)(ws+4024) = p208; /*value */

	i8 v209 = (i8)(intptr_t)(ws+4024);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+24;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	i8 v214 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v214)(v213);

	i8 v215 = (i8)(intptr_t)(ws+4024);
	i4 v216 = *(i4*)(intptr_t)v215;
	i1 v217 = (i1)+16;
	i4 v218 = ((i4)v216)>>v217;
	i1 v219 = v218;
	i8 v220 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v220)(v219);

	i8 v221 = (i8)(intptr_t)(ws+4024);
	i4 v222 = *(i4*)(intptr_t)v221;
	i1 v223 = (i1)+8;
	i4 v224 = ((i4)v222)>>v223;
	i1 v225 = v224;
	i8 v226 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v226)(v225);

	i8 v227 = (i8)(intptr_t)(ws+4024);
	i4 v228 = *(i4*)(intptr_t)v227;
	i1 v229 = v228;
	i8 v230 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v230)(v229);

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// MemZero workspace at ws+3904 length ws+16
void f22_MemZero(i8 p335 /* size */, i8 p336 /* ptr */) {
	*(i8*)(intptr_t)(ws+3904) = p336; /*ptr */
	*(i8*)(intptr_t)(ws+3912) = p335; /*size */

	i8 v337 = (i8)(intptr_t)(ws+3904);
	i8 v338 = *(i8*)(intptr_t)v337;
	i1 v339 = (i1)+0;
	i8 v340 = (i8)(intptr_t)(ws+3912);
	i8 v341 = *(i8*)(intptr_t)v340;
	i8 v342 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v342)(v341, v339, v338);

endsub:;
}

// ArgvInit workspace at ws+3736 length ws+0
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

// ArgvNext workspace at ws+3736 length ws+8
void f24_ArgvNext(i8* p347 /* arg */) {

	i8 v348 = (i8)(intptr_t)(ws+16);
	i8 v349 = *(i8*)(intptr_t)v348;
	i8 v350 = (i8)+0;
	if (v349==v350) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v351 = (i8)+0;
	i8 v352 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v352 = v351;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v353 = (i8)(intptr_t)(ws+16);
	i8 v354 = *(i8*)(intptr_t)v353;
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v356 = v355;

	i8 v357 = (i8)(intptr_t)(ws+3736);
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
	*p347 = *(i8*)(intptr_t)(ws+3736);
}

// StrLen workspace at ws+3792 length ws+25
void f28_StrLen(i8* p437 /* size */, i8 p438 /* s */) {
	*(i8*)(intptr_t)(ws+3792) = p438; /*s */

	i8 v439 = (i8)(intptr_t)(ws+3792);
	i8 v440 = *(i8*)(intptr_t)v439;
	i8 v441 = (i8)(intptr_t)(ws+3808);
	*(i8*)(intptr_t)v441 = v440;

c02_0075:;

	i8 v442 = (i8)(intptr_t)(ws+3808);
	i8 v443 = *(i8*)(intptr_t)v442;
	i1 v444 = *(i1*)(intptr_t)v443;
	i8 v445 = (i8)(intptr_t)(ws+3816);
	*(i1*)(intptr_t)v445 = v444;

	i8 v446 = (i8)(intptr_t)(ws+3816);
	i1 v447 = *(i1*)(intptr_t)v446;
	i1 v448 = (i1)+0;
	if (v447==v448) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v449 = (i8)(intptr_t)(ws+3808);
	i8 v450 = *(i8*)(intptr_t)v449;
	i8 v451 = v450+(+1);
	i8 v452 = (i8)(intptr_t)(ws+3808);
	*(i8*)(intptr_t)v452 = v451;

	goto c02_0075;

c02_0076:;

	i8 v453 = (i8)(intptr_t)(ws+3808);
	i8 v454 = *(i8*)(intptr_t)v453;
	i8 v455 = (i8)(intptr_t)(ws+3792);
	i8 v456 = *(i8*)(intptr_t)v455;
	i8 v457 = v454-v456;
	i8 v458 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v458 = v457;

endsub:;
	*p437 = *(i8*)(intptr_t)(ws+3800);
}

// MemCopy workspace at ws+3992 length ws+24
void f30_MemCopy(i8 p480 /* dest */, i8 p481 /* size */, i8 p482 /* src */) {
	*(i8*)(intptr_t)(ws+3992) = p482; /*src */
	*(i8*)(intptr_t)(ws+4000) = p481; /*size */
	*(i8*)(intptr_t)(ws+4008) = p480; /*dest */

c02_0085:;

	i8 v483 = (i8)(intptr_t)(ws+4000);
	i8 v484 = *(i8*)(intptr_t)v483;
	i8 v485 = (i8)+0;
	if (v484==v485) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v486 = (i8)(intptr_t)(ws+3992);
	i8 v487 = *(i8*)(intptr_t)v486;
	i1 v488 = *(i1*)(intptr_t)v487;
	i8 v489 = (i8)(intptr_t)(ws+4008);
	i8 v490 = *(i8*)(intptr_t)v489;
	*(i1*)(intptr_t)v490 = v488;

	i8 v491 = (i8)(intptr_t)(ws+4008);
	i8 v492 = *(i8*)(intptr_t)v491;
	i8 v493 = v492+(+1);
	i8 v494 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v494 = v493;

	i8 v495 = (i8)(intptr_t)(ws+3992);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+1);
	i8 v498 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v498 = v497;

	i8 v499 = (i8)(intptr_t)(ws+4000);
	i8 v500 = *(i8*)(intptr_t)v499;
	i8 v501 = v500+(-1);
	i8 v502 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v502 = v501;

	goto c02_0085;

c02_0088:;

endsub:;
}

// RawAlloc workspace at ws+3968 length ws+16
void f31_RawAlloc(i8* p503 /* block */, i8 p504 /* length */) {
	*(i8*)(intptr_t)(ws+3968) = p504; /*length */


	
*(i8*)(intptr_t)(ws+3976) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3968) 
); 



endsub:;
	*p503 = *(i8*)(intptr_t)(ws+3976);
}
	void f31_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// Alloc workspace at ws+3848 length ws+16
void f32_Alloc(i8* p505 /* block */, i8 p506 /* length */) {
	*(i8*)(intptr_t)(ws+3848) = p506; /*length */

	i8 v507 = (i8)(intptr_t)(ws+3848);
	i8 v508 = *(i8*)(intptr_t)v507;
	i8 v509 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v510;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v509)(&v510, v508);
	i8 v511 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v511 = v510;

	i8 v512 = (i8)(intptr_t)(ws+3856);
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
	*p505 = *(i8*)(intptr_t)(ws+3856);
}

// Free workspace at ws+3976 length ws+8
void f33_Free(i8 p518 /* block */) {
	*(i8*)(intptr_t)(ws+3976) = p518; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3976) 
); 



endsub:;
}

// GetFreeMemory workspace at ws+3736 length ws+8
void f37_GetFreeMemory(i8* p521 /* i */) {

	i8 v522 = (i8)+0;
	i8 v523 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v523 = v522;

endsub:;
	*p521 = *(i8*)(intptr_t)(ws+3736);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_blockin workspace at ws+4144 length ws+28
void f38_fcb_i_blockin(i8 p524 /* fcb */) {
	*(i8*)(intptr_t)(ws+4144) = p524; /*fcb */

	i8 v525 = (i8)(intptr_t)(ws+4144);
	i8 v526 = *(i8*)(intptr_t)v525;
	i8 v527 = v526+(+12);
	i1 v528 = (i1)+0;
	i8 v529 = (i8)+512;
	i8 v530 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v530)(v529, v528, v527);

	i8 v531 = (i8)(intptr_t)(ws+4144);
	i8 v532 = *(i8*)(intptr_t)v531;
	i4 v533 = *(i4*)(intptr_t)v532;
	i8 v534 = (i8)(intptr_t)(ws+4152);
	*(i4*)(intptr_t)v534 = v533;

	i8 v535 = (i8)(intptr_t)(ws+4144);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+12);
	i8 v538 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v538 = v537;

	i8 v539 = (i8)(intptr_t)(ws+4144);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+8);
	i4 v542 = *(i4*)(intptr_t)v541;
	i1 v543 = (i1)+9;
	i4 v544 = ((i4)v542)<<v543;
	i8 v545 = (i8)(intptr_t)(ws+4168);
	*(i4*)(intptr_t)v545 = v544;


	
pread( 
*(i4*)(intptr_t)(ws+4152) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4160) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+4168) 
); 



	i1 v546 = (i1)+0;
	i8 v547 = (i8)(intptr_t)(ws+4144);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+6);
	*(i1*)(intptr_t)v549 = v546;

endsub:;
}

// fcb_i_blockout workspace at ws+4144 length ws+28
void f39_fcb_i_blockout(i8 p550 /* fcb */) {
	*(i8*)(intptr_t)(ws+4144) = p550; /*fcb */

	i8 v551 = (i8)(intptr_t)(ws+4144);
	i8 v552 = *(i8*)(intptr_t)v551;
	i8 v553 = v552+(+6);
	i1 v554 = *(i1*)(intptr_t)v553;
	i1 v555 = (i1)+0;
	if (v554==v555) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v556 = (i8)(intptr_t)(ws+4144);
	i8 v557 = *(i8*)(intptr_t)v556;
	i4 v558 = *(i4*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+4152);
	*(i4*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+4144);
	i8 v561 = *(i8*)(intptr_t)v560;
	i8 v562 = v561+(+12);
	i8 v563 = (i8)(intptr_t)(ws+4160);
	*(i8*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+4144);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = v565+(+8);
	i4 v567 = *(i4*)(intptr_t)v566;
	i1 v568 = (i1)+9;
	i4 v569 = ((i4)v567)<<v568;
	i8 v570 = (i8)(intptr_t)(ws+4168);
	*(i4*)(intptr_t)v570 = v569;


	
pwrite( 
*(i4*)(intptr_t)(ws+4152) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4160) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+4168) 
); 



	i1 v571 = (i1)+0;
	i8 v572 = (i8)(intptr_t)(ws+4144);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+6);
	*(i1*)(intptr_t)v574 = v571;

c02_0092:;

c02_008e:;

endsub:;
}
	void f39_fcb_i_blockout(i8 /* fcb */);
	void f38_fcb_i_blockin(i8 /* fcb */);

// fcb_i_changeblock workspace at ws+4128 length ws+12
void f40_fcb_i_changeblock(i4 p575 /* newblock */, i8 p576 /* fcb */) {
	*(i8*)(intptr_t)(ws+4128) = p576; /*fcb */
	*(i4*)(intptr_t)(ws+4136) = p575; /*newblock */

	i8 v577 = (i8)(intptr_t)(ws+4136);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+4128);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = v580+(+8);
	i4 v582 = *(i4*)(intptr_t)v581;
	if (v578==v582) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v583 = (i8)(intptr_t)(ws+4128);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v585)(v584);

	i8 v586 = (i8)(intptr_t)(ws+4136);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+4128);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+8);
	*(i4*)(intptr_t)v590 = v587;

	i8 v591 = (i8)(intptr_t)(ws+4128);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = (i8)(intptr_t)(f38_fcb_i_blockin);

	((void(*)(i8 /* fcb */))(intptr_t)v593)(v592);

c02_0097:;

c02_0093:;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_open workspace at ws+3768 length ws+28
void f41_fcb_i_open(i1* p594 /* errno */, i4 p595 /* flags */, i8 p596 /* filename */, i8 p597 /* fcb */) {
	*(i8*)(intptr_t)(ws+3768) = p597; /*fcb */
	*(i8*)(intptr_t)(ws+3776) = p596; /*filename */
	*(i4*)(intptr_t)(ws+3784) = p595; /*flags */

	i8 v598 = (i8)(intptr_t)(ws+3768);
	i8 v599 = *(i8*)(intptr_t)v598;
	i1 v600 = (i1)+0;
	i8 v601 = (i8)+524;
	i8 v602 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v602)(v601, v600, v599);

	i2 v603 = (i2)+511;
	i8 v604 = (i8)(intptr_t)(ws+3768);
	i8 v605 = *(i8*)(intptr_t)v604;
	i8 v606 = v605+(+4);
	*(i2*)(intptr_t)v606 = v603;

	i4 v607 = (i4)-1;
	i8 v608 = (i8)(intptr_t)(ws+3768);
	i8 v609 = *(i8*)(intptr_t)v608;
	i8 v610 = v609+(+8);
	*(i4*)(intptr_t)v610 = v607;


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+3792) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+3776) 
,  
*(i4*)(intptr_t)(ws+3784) 
,  
(+438)
); 



	i8 v611 = (i8)(intptr_t)(ws+3792);
	i4 v612 = *(i4*)(intptr_t)v611;
	i8 v613 = (i8)(intptr_t)(ws+3768);
	i8 v614 = *(i8*)(intptr_t)v613;
	*(i4*)(intptr_t)v614 = v612;

	i8 v615 = (i8)(intptr_t)(ws+3792);
	i4 v616 = *(i4*)(intptr_t)v615;
	i4 v617 = (i4)+0;
	if ((s4)v616<(s4)v617) goto c02_009b; else goto c02_009c;

c02_009b:;


	
*(i1*)(intptr_t)(ws+3788) 
 = errno; 



	goto c02_0098;

c02_009c:;

	i1 v618 = (i1)+0;
	i8 v619 = (i8)(intptr_t)(ws+3788);
	*(i1*)(intptr_t)v619 = v618;

c02_0098:;

endsub:;
	*p594 = *(i1*)(intptr_t)(ws+3788);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+3744 length ws+17
void f42_FCBOpenIn(i1* p620 /* errno */, i8 p621 /* filename */, i8 p622 /* fcb */) {
	*(i8*)(intptr_t)(ws+3744) = p622; /*fcb */
	*(i8*)(intptr_t)(ws+3752) = p621; /*filename */

	i8 v623 = (i8)(intptr_t)(ws+3744);
	i8 v624 = *(i8*)(intptr_t)v623;
	i8 v625 = (i8)(intptr_t)(ws+3752);
	i8 v626 = *(i8*)(intptr_t)v625;
	i4 v627 = (i4)+0;
	i8 v628 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v629;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v628)(&v629, v627, v626, v624);
	i8 v630 = (i8)(intptr_t)(ws+3760);
	*(i1*)(intptr_t)v630 = v629;

endsub:;
	*p620 = *(i1*)(intptr_t)(ws+3760);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+3744 length ws+17
void f44_FCBOpenOut(i1* p642 /* errno */, i8 p643 /* filename */, i8 p644 /* fcb */) {
	*(i8*)(intptr_t)(ws+3744) = p644; /*fcb */
	*(i8*)(intptr_t)(ws+3752) = p643; /*filename */

	i8 v645 = (i8)(intptr_t)(ws+3744);
	i8 v646 = *(i8*)(intptr_t)v645;
	i8 v647 = (i8)(intptr_t)(ws+3752);
	i8 v648 = *(i8*)(intptr_t)v647;
	i4 v649 = (i4)+578;
	i8 v650 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v651;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v650)(&v651, v649, v648, v646);
	i8 v652 = (i8)(intptr_t)(ws+3760);
	*(i1*)(intptr_t)v652 = v651;

endsub:;
	*p642 = *(i1*)(intptr_t)(ws+3760);
}
	void f39_fcb_i_blockout(i8 /* fcb */);

// FCBClose workspace at ws+3744 length ws+16
void f45_FCBClose(i1* p653 /* errno */, i8 p654 /* fcb */) {
	*(i8*)(intptr_t)(ws+3744) = p654; /*fcb */

	i8 v655 = (i8)(intptr_t)(ws+3744);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v657)(v656);

	i8 v658 = (i8)(intptr_t)(ws+3744);
	i8 v659 = *(i8*)(intptr_t)v658;
	i4 v660 = *(i4*)(intptr_t)v659;
	i8 v661 = (i8)(intptr_t)(ws+3756);
	*(i4*)(intptr_t)v661 = v660;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+3756) 
); 


	
*(i1*)(intptr_t)(ws+3752) 
 = errno; 



endsub:;
	*p653 = *(i1*)(intptr_t)(ws+3752);
}

// FCBPos workspace at ws+4024 length ws+12
void f47_FCBPos(i4* p688 /* pos */, i8 p689 /* fcb */) {
	*(i8*)(intptr_t)(ws+4024) = p689; /*fcb */

	i8 v690 = (i8)(intptr_t)(ws+4024);
	i8 v691 = *(i8*)(intptr_t)v690;
	i8 v692 = v691+(+8);
	i4 v693 = *(i4*)(intptr_t)v692;
	i1 v694 = (i1)+9;
	i4 v695 = ((i4)v693)<<v694;
	i8 v696 = (i8)(intptr_t)(ws+4024);
	i8 v697 = *(i8*)(intptr_t)v696;
	i8 v698 = v697+(+4);
	i2 v699 = *(i2*)(intptr_t)v698;
	i4 v700 = v699;
	i4 v701 = v695|v700;
	i4 v702 = v701+(+1);
	i8 v703 = (i8)(intptr_t)(ws+4032);
	*(i4*)(intptr_t)v703 = v702;

endsub:;
	*p688 = *(i4*)(intptr_t)(ws+4032);
}
	void f40_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// fcb_i_nextchar workspace at ws+4120 length ws+8
void f49_fcb_i_nextchar(i8 p718 /* fcb */) {
	*(i8*)(intptr_t)(ws+4120) = p718; /*fcb */

	i8 v719 = (i8)(intptr_t)(ws+4120);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = v720+(+4);
	i2 v722 = *(i2*)(intptr_t)v721;
	i2 v723 = v722+(+1);
	i8 v724 = (i8)(intptr_t)(ws+4120);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+4);
	*(i2*)(intptr_t)v726 = v723;

	i8 v727 = (i8)(intptr_t)(ws+4120);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i2 v731 = (i2)+512;
	if (v730==v731) goto c02_00a0; else goto c02_00a1;

c02_00a0:;

	i8 v732 = (i8)(intptr_t)(ws+4120);
	i8 v733 = *(i8*)(intptr_t)v732;
	i8 v734 = (i8)(intptr_t)(ws+4120);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+8);
	i4 v737 = *(i4*)(intptr_t)v736;
	i4 v738 = v737+(+1);
	i8 v739 = (i8)(intptr_t)(f40_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v739)(v738, v733);

	i2 v740 = (i2)+0;
	i8 v741 = (i8)(intptr_t)(ws+4120);
	i8 v742 = *(i8*)(intptr_t)v741;
	i8 v743 = v742+(+4);
	*(i2*)(intptr_t)v743 = v740;

c02_00a1:;

c02_009d:;

endsub:;
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBGetChar workspace at ws+3856 length ws+9
void f50_FCBGetChar(i1* p744 /* c */, i8 p745 /* fcb */) {
	*(i8*)(intptr_t)(ws+3856) = p745; /*fcb */

	i8 v746 = (i8)(intptr_t)(ws+3856);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v748)(v747);

	i8 v749 = (i8)(intptr_t)(ws+3856);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = v750+(+12);
	i8 v752 = (i8)(intptr_t)(ws+3856);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+4);
	i2 v755 = *(i2*)(intptr_t)v754;
	i8 v756 = v755;
	i8 v757 = v751+v756;
	i1 v758 = *(i1*)(intptr_t)v757;
	i8 v759 = (i8)(intptr_t)(ws+3864);
	*(i1*)(intptr_t)v759 = v758;

endsub:;
	*p744 = *(i1*)(intptr_t)(ws+3864);
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBPutChar workspace at ws+4104 length ws+9
void f51_FCBPutChar(i1 p760 /* c */, i8 p761 /* fcb */) {
	*(i8*)(intptr_t)(ws+4104) = p761; /*fcb */
	*(i1*)(intptr_t)(ws+4112) = p760; /*c */

	i8 v762 = (i8)(intptr_t)(ws+4104);
	i8 v763 = *(i8*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v764)(v763);

	i8 v765 = (i8)(intptr_t)(ws+4112);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+4104);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+4104);
	i8 v771 = *(i8*)(intptr_t)v770;
	i8 v772 = v771+(+4);
	i2 v773 = *(i2*)(intptr_t)v772;
	i8 v774 = v773;
	i8 v775 = v769+v774;
	*(i1*)(intptr_t)v775 = v766;

	i1 v776 = (i1)+1;
	i8 v777 = (i8)(intptr_t)(ws+4104);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+6);
	*(i1*)(intptr_t)v779 = v776;

endsub:;
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);

// FCBPutBlock workspace at ws+4080 length ws+24
void f54_FCBPutBlock(i8 p818 /* length */, i8 p819 /* buffer */, i8 p820 /* fcb */) {
	*(i8*)(intptr_t)(ws+4080) = p820; /*fcb */
	*(i8*)(intptr_t)(ws+4088) = p819; /*buffer */
	*(i8*)(intptr_t)(ws+4096) = p818; /*length */

c02_00b1:;

	i8 v821 = (i8)(intptr_t)(ws+4096);
	i8 v822 = *(i8*)(intptr_t)v821;
	i8 v823 = (i8)+0;
	if (v822==v823) goto c02_00b4; else goto c02_00b3;

c02_00b3:;

	i8 v824 = (i8)(intptr_t)(ws+4080);
	i8 v825 = *(i8*)(intptr_t)v824;
	i8 v826 = (i8)(intptr_t)(ws+4088);
	i8 v827 = *(i8*)(intptr_t)v826;
	i1 v828 = *(i1*)(intptr_t)v827;
	i8 v829 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v829)(v828, v825);

	i8 v830 = (i8)(intptr_t)(ws+4088);
	i8 v831 = *(i8*)(intptr_t)v830;
	i8 v832 = v831+(+1);
	i8 v833 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v833 = v832;

	i8 v834 = (i8)(intptr_t)(ws+4096);
	i8 v835 = *(i8*)(intptr_t)v834;
	i8 v836 = v835+(-1);
	i8 v837 = (i8)(intptr_t)(ws+4096);
	*(i8*)(intptr_t)v837 = v836;

	goto c02_00b1;

c02_00b4:;

endsub:;
}

// MidReader workspace at ws+3816 length ws+8
void f55_MidReader(i8 p846 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p846; /*node */

endsub:;
}
const i1 c02_s0001[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);

// StartError workspace at ws+4024 length ws+0
void f61_StartError(void) {

	i8 v849 = (i8)(intptr_t)c02_s0001;
	i8 v850 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v850)(v849);

endsub:;
}
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+4024 length ws+0
void f62_EndError(void) {

	i8 v851 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v851)();

	i8 v852 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v852)();

endsub:;
}
	void f61_StartError(void);
	void f11_print(i8 /* ptr */);
	void f62_EndError(void);

// SimpleError workspace at ws+4000 length ws+8
void f63_SimpleError(i8 p853 /* s */) {
	*(i8*)(intptr_t)(ws+4000) = p853; /*s */

	i8 v854 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v854)();

	i8 v855 = (i8)(intptr_t)(ws+4000);
	i8 v856 = *(i8*)(intptr_t)v855;
	i8 v857 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v857)(v856);

	i8 v858 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v858)();

endsub:;
}
	void f61_StartError(void);
const i1 c02_s0002[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0003[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f62_EndError(void);

// CannotOpen workspace at ws+3744 length ws+8
void f64_CannotOpen(i8 p859 /* filename */) {
	*(i8*)(intptr_t)(ws+3744) = p859; /*filename */

	i8 v860 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v860)();

	i8 v861 = (i8)(intptr_t)c02_s0002;
	i8 v862 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v862)(v861);

	i8 v863 = (i8)(intptr_t)(ws+3744);
	i8 v864 = *(i8*)(intptr_t)v863;
	i8 v865 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v865)(v864);

	i8 v866 = (i8)(intptr_t)c02_s0003;
	i8 v867 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v867)(v866);

	i8 v868 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v868)();

endsub:;
}
	void f31_RawAlloc(i8* /* block */, i8 /* length */);
	void f66_PurgeAllFreeNodes(void);
	void f67_PurgeAllFreeInstructions(void);
	void f31_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0004[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// InternalAlloc workspace at ws+3952 length ws+16
void f65_InternalAlloc(i8* p869 /* block */, i8 p870 /* length */) {
	*(i8*)(intptr_t)(ws+3952) = p870; /*length */

	i8 v871 = (i8)(intptr_t)(ws+3952);
	i8 v872 = *(i8*)(intptr_t)v871;
	i8 v873 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v874;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v873)(&v874, v872);
	i8 v875 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v875 = v874;

	i8 v876 = (i8)(intptr_t)(ws+3960);
	i8 v877 = *(i8*)(intptr_t)v876;
	i8 v878 = (i8)+0;
	if (v877==v878) goto c02_00b8; else goto c02_00b9;

c02_00b8:;

	i8 v879 = (i8)(intptr_t)(f66_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v879)();

	i8 v880 = (i8)(intptr_t)(f67_PurgeAllFreeInstructions);

	((void(*)(void))(intptr_t)v880)();

	i8 v881 = (i8)(intptr_t)(ws+3952);
	i8 v882 = *(i8*)(intptr_t)v881;
	i8 v883 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v884;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v883)(&v884, v882);
	i8 v885 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v885 = v884;

	i8 v886 = (i8)(intptr_t)(ws+3960);
	i8 v887 = *(i8*)(intptr_t)v886;
	i8 v888 = (i8)+0;
	if (v887==v888) goto c02_00bd; else goto c02_00be;

c02_00bd:;

	i8 v889 = (i8)(intptr_t)c02_s0004;
	i8 v890 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v890)(v889);

	i8 v891 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v891)();

c02_00be:;

c02_00ba:;

c02_00b9:;

c02_00b5:;

endsub:;
	*p869 = *(i8*)(intptr_t)(ws+3960);
}
const i1 c02_s0005[] = { 0x70,0x61,0x72,0x61,0x6d,0 };
const i1 c02_s0006[] = { 0x76,0x38,0 };
const i1 c02_s0007[] = { 0x76,0x34,0 };
const i1 c02_s0008[] = { 0x76,0x32,0 };
const i1 c02_s0009[] = { 0x76,0x31,0 };
static data f3___main_s00bf[] = {

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

// GetInputParameter workspace at ws+4016 length ws+24
void f68_GetInputParameter(i8* p892 /* param */, i1 p893 /* count */, i8 p894 /* subr */) {
	*(i8*)(intptr_t)(ws+4016) = p894; /*subr */
	*(i1*)(intptr_t)(ws+4024) = p893; /*count */

	i8 v895 = (i8)+0;
	i8 v896 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v896 = v895;

	i8 v897 = (i8)(intptr_t)(ws+4016);
	i8 v898 = *(i8*)(intptr_t)v897;
	i8 v899 = v898+(+48);
	i1 v900 = *(i1*)(intptr_t)v899;
	i1 v901 = (i1)+0;
	if (v900==v901) goto c02_00c4; else goto c02_00c3;

c02_00c3:;

	i8 v902 = (i8)(intptr_t)(ws+4016);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+32);
	i8 v905 = *(i8*)(intptr_t)v904;
	i8 v906 = (i8)(intptr_t)(ws+4024);
	i1 v907 = *(i1*)(intptr_t)v906;
	i8 v908 = v907;
	i1 v909 = (i1)+3;
	i8 v910 = ((i8)v908)<<v909;
	i8 v911 = v905+v910;
	i8 v912 = *(i8*)(intptr_t)v911;
	i8 v913 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v913 = v912;

c02_00c4:;

c02_00c0:;

endsub:;
	*p892 = *(i8*)(intptr_t)(ws+4032);
}

// GetOutputParameter workspace at ws+4016 length ws+24
void f69_GetOutputParameter(i8* p914 /* param */, i1 p915 /* count */, i8 p916 /* subr */) {
	*(i8*)(intptr_t)(ws+4016) = p916; /*subr */
	*(i1*)(intptr_t)(ws+4024) = p915; /*count */

	i8 v917 = (i8)+0;
	i8 v918 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v918 = v917;

	i8 v919 = (i8)(intptr_t)(ws+4016);
	i8 v920 = *(i8*)(intptr_t)v919;
	i8 v921 = v920+(+49);
	i1 v922 = *(i1*)(intptr_t)v921;
	i1 v923 = (i1)+0;
	if (v922==v923) goto c02_00c9; else goto c02_00c8;

c02_00c8:;

	i8 v924 = (i8)(intptr_t)(ws+4016);
	i8 v925 = *(i8*)(intptr_t)v924;
	i8 v926 = v925+(+40);
	i8 v927 = *(i8*)(intptr_t)v926;
	i8 v928 = (i8)(intptr_t)(ws+4024);
	i1 v929 = *(i1*)(intptr_t)v928;
	i8 v930 = v929;
	i1 v931 = (i1)+3;
	i8 v932 = ((i8)v930)<<v931;
	i8 v933 = v927+v932;
	i8 v934 = *(i8*)(intptr_t)v933;
	i8 v935 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v935 = v934;

c02_00c9:;

c02_00c5:;

endsub:;
	*p914 = *(i8*)(intptr_t)(ws+4032);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f65_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+3936 length ws+16
void f72_AllocateNewNode(i8* p969 /* m */, i1 p970 /* code */) {
	*(i1*)(intptr_t)(ws+3936) = p970; /*code */

	i8 v971 = (i8)(intptr_t)(ws+192);
	i8 v972 = *(i8*)(intptr_t)v971;
	i8 v973 = (i8)+0;
	if (v972==v973) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v974 = (i8)(intptr_t)(ws+192);
	i8 v975 = *(i8*)(intptr_t)v974;
	i8 v976 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v976 = v975;

	i8 v977 = (i8)(intptr_t)(ws+192);
	i8 v978 = *(i8*)(intptr_t)v977;
	i8 v979 = v978+(+24);
	i8 v980 = *(i8*)(intptr_t)v979;
	i8 v981 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v981 = v980;

	i8 v982 = (i8)(intptr_t)(ws+3944);
	i8 v983 = *(i8*)(intptr_t)v982;
	i1 v984 = (i1)+0;
	i8 v985 = (i8)+257;
	i8 v986 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v986)(v985, v984, v983);

	goto c02_00ce;

c02_00d2:;

	i8 v987 = (i8)+257;
	i8 v988 = (i8)(intptr_t)(f65_InternalAlloc);
	i8 v989;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v988)(&v989, v987);
	i8 v990 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v990 = v989;

c02_00ce:;

	i8 v991 = (i8)(intptr_t)(ws+3936);
	i1 v992 = *(i1*)(intptr_t)v991;
	i8 v993 = (i8)(intptr_t)(ws+3944);
	i8 v994 = *(i8*)(intptr_t)v993;
	i8 v995 = v994+(+256);
	*(i1*)(intptr_t)v995 = v992;

endsub:;
	*p969 = *(i8*)(intptr_t)(ws+3944);
}

// FreeNode workspace at ws+3864 length ws+8
void f74_FreeNode(i8 p996 /* node */) {
	*(i8*)(intptr_t)(ws+3864) = p996; /*node */

	i8 v997 = (i8)(intptr_t)(ws+192);
	i8 v998 = *(i8*)(intptr_t)v997;
	i8 v999 = (i8)(intptr_t)(ws+3864);
	i8 v1000 = *(i8*)(intptr_t)v999;
	i8 v1001 = v1000+(+24);
	*(i8*)(intptr_t)v1001 = v998;

	i8 v1002 = (i8)(intptr_t)(ws+3864);
	i8 v1003 = *(i8*)(intptr_t)v1002;
	i8 v1004 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1004 = v1003;

endsub:;
}
	void f33_Free(i8 /* block */);

// PurgeAllFreeNodes workspace at ws+3968 length ws+8
void f66_PurgeAllFreeNodes(void) {

c02_00d5:;

	i8 v1005 = (i8)(intptr_t)(ws+192);
	i8 v1006 = *(i8*)(intptr_t)v1005;
	i8 v1007 = (i8)+0;
	if (v1006==v1007) goto c02_00d8; else goto c02_00d7;

c02_00d7:;

	i8 v1008 = (i8)(intptr_t)(ws+192);
	i8 v1009 = *(i8*)(intptr_t)v1008;
	i8 v1010 = (i8)(intptr_t)(ws+3968);
	*(i8*)(intptr_t)v1010 = v1009;

	i8 v1011 = (i8)(intptr_t)(ws+192);
	i8 v1012 = *(i8*)(intptr_t)v1011;
	i8 v1013 = v1012+(+24);
	i8 v1014 = *(i8*)(intptr_t)v1013;
	i8 v1015 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1015 = v1014;

	i8 v1016 = (i8)(intptr_t)(ws+3968);
	i8 v1017 = *(i8*)(intptr_t)v1016;
	i8 v1018 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1018)(v1017);

	goto c02_00d5;

c02_00d8:;

endsub:;
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);

// WriteB8 workspace at ws+4088 length ws+1
void f75_WriteB8(i1 p1025 /* b */) {
	*(i1*)(intptr_t)(ws+4088) = p1025; /*b */

	i8 v1026 = (i8)(intptr_t)(ws+200);
	i8 v1027 = (i8)(intptr_t)(ws+4088);
	i1 v1028 = *(i1*)(intptr_t)v1027;
	i8 v1029 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1029)(v1028, v1026);

endsub:;
}
	void f75_WriteB8(i1 /* b */);
	void f75_WriteB8(i1 /* b */);

// WriteB16 workspace at ws+4080 length ws+2
void f76_WriteB16(i2 p1030 /* w */) {
	*(i2*)(intptr_t)(ws+4080) = p1030; /*w */

	i8 v1031 = (i8)(intptr_t)(ws+4080);
	i2 v1032 = *(i2*)(intptr_t)v1031;
	i1 v1033 = v1032;
	i8 v1034 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1034)(v1033);

	i8 v1035 = (i8)(intptr_t)(ws+4080);
	i2 v1036 = *(i2*)(intptr_t)v1035;
	i1 v1037 = (i1)+8;
	i2 v1038 = ((i2)v1036)>>v1037;
	i1 v1039 = v1038;
	i8 v1040 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1040)(v1039);

endsub:;
}
	void f75_WriteB8(i1 /* b */);
	void f76_WriteB16(i2 /* w */);
	void f75_WriteB8(i1 /* b */);
	void f76_WriteB16(i2 /* w */);
	void f54_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// FlushCurrentStream workspace at ws+4072 length ws+1
void f77_FlushCurrentStream(i1 p1041 /* close */) {
	*(i1*)(intptr_t)(ws+4072) = p1041; /*close */

	i1 v1042 = (i1)+70;
	i8 v1043 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1043)(v1042);

	i8 v1044 = (i8)(intptr_t)(ws+2772);
	i2 v1045 = *(i2*)(intptr_t)v1044;
	i2 v1046 = v1045+(+3);
	i8 v1047 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1047)(v1046);

	i8 v1048 = (i8)(intptr_t)(ws+2800);
	i1 v1049 = *(i1*)(intptr_t)v1048;
	i8 v1050 = (i8)(intptr_t)(ws+4072);
	i1 v1051 = *(i1*)(intptr_t)v1050;
	i1 v1052 = v1049|v1051;
	i8 v1053 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1053)(v1052);

	i8 v1054 = (i8)(intptr_t)(ws+2792);
	i8 v1055 = *(i8*)(intptr_t)v1054;
	i2 v1056 = *(i2*)(intptr_t)v1055;
	i8 v1057 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1057)(v1056);

	i8 v1058 = (i8)(intptr_t)(ws+200);
	i8 v1059 = (i8)(intptr_t)(ws+724);
	i8 v1060 = (i8)(intptr_t)(ws+2772);
	i2 v1061 = *(i2*)(intptr_t)v1060;
	i8 v1062 = v1061;
	i8 v1063 = (i8)(intptr_t)(f54_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v1063)(v1062, v1059, v1058);

	i2 v1064 = (i2)+0;
	i8 v1065 = (i8)(intptr_t)(ws+2772);
	*(i2*)(intptr_t)v1065 = v1064;

endsub:;
}
	void f77_FlushCurrentStream(i1 /* close */);

// E_b8 workspace at ws+4064 length ws+1
void f78_E_b8(i1 p1066 /* byte */) {
	*(i1*)(intptr_t)(ws+4064) = p1066; /*byte */

	i8 v1067 = (i8)(intptr_t)(ws+2792);
	i8 v1068 = *(i8*)(intptr_t)v1067;
	i8 v1069 = (i8)+0;
	if (v1068==v1069) goto c02_00dd; else goto c02_00dc;

c02_00dc:;

	i8 v1070 = (i8)(intptr_t)(ws+4064);
	i1 v1071 = *(i1*)(intptr_t)v1070;
	i8 v1072 = (i8)(intptr_t)(ws+724);
	i8 v1073 = (i8)(intptr_t)(ws+2772);
	i2 v1074 = *(i2*)(intptr_t)v1073;
	i8 v1075 = v1074;
	i8 v1076 = v1072+v1075;
	*(i1*)(intptr_t)v1076 = v1071;

	i8 v1077 = (i8)(intptr_t)(ws+2772);
	i2 v1078 = *(i2*)(intptr_t)v1077;
	i2 v1079 = v1078+(+1);
	i8 v1080 = (i8)(intptr_t)(ws+2772);
	*(i2*)(intptr_t)v1080 = v1079;

	i8 v1081 = (i8)(intptr_t)(ws+2772);
	i2 v1082 = *(i2*)(intptr_t)v1081;
	i2 v1083 = (i2)+2048;
	if (v1082==v1083) goto c02_00e1; else goto c02_00e2;

c02_00e1:;

	i1 v1084 = (i1)+0;
	i8 v1085 = (i8)(intptr_t)(f77_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v1085)(v1084);

c02_00e2:;

c02_00de:;

c02_00dd:;

c02_00d9:;

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);

// E_b16 workspace at ws+4000 length ws+2
void f79_E_b16(i2 p1086 /* word */) {
	*(i2*)(intptr_t)(ws+4000) = p1086; /*word */

	i8 v1087 = (i8)(intptr_t)(ws+4000);
	i2 v1088 = *(i2*)(intptr_t)v1087;
	i1 v1089 = v1088;
	i8 v1090 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1090)(v1089);

	i8 v1091 = (i8)(intptr_t)(ws+4000);
	i2 v1092 = *(i2*)(intptr_t)v1091;
	i1 v1093 = (i1)+8;
	i2 v1094 = ((i2)v1092)>>v1093;
	i1 v1095 = v1094;
	i8 v1096 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1096)(v1095);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E_space workspace at ws+3952 length ws+0
void f81_E_space(void) {

	i1 v1108 = (i1)+32;
	i8 v1109 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1109)(v1108);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E_comma workspace at ws+3976 length ws+0
void f82_E_comma(void) {

	i1 v1110 = (i1)+44;
	i8 v1111 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1111)(v1110);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E_tab workspace at ws+3952 length ws+0
void f83_E_tab(void) {

	i1 v1112 = (i1)+9;
	i8 v1113 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1113)(v1112);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E_nl workspace at ws+3952 length ws+0
void f84_E_nl(void) {

	i1 v1114 = (i1)+10;
	i8 v1115 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1115)(v1114);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E workspace at ws+4040 length ws+9
void f87_E(i8 p1120 /* text */) {
	*(i8*)(intptr_t)(ws+4040) = p1120; /*text */

c02_00e3:;

	i8 v1121 = (i8)(intptr_t)(ws+4040);
	i8 v1122 = *(i8*)(intptr_t)v1121;
	i1 v1123 = *(i1*)(intptr_t)v1122;
	i8 v1124 = (i8)(intptr_t)(ws+4048);
	*(i1*)(intptr_t)v1124 = v1123;

	i8 v1125 = (i8)(intptr_t)(ws+4040);
	i8 v1126 = *(i8*)(intptr_t)v1125;
	i8 v1127 = v1126+(+1);
	i8 v1128 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v1128 = v1127;

	i8 v1129 = (i8)(intptr_t)(ws+4048);
	i1 v1130 = *(i1*)(intptr_t)v1129;
	i1 v1131 = (i1)+0;
	if (v1130==v1131) goto c02_00e8; else goto c02_00e9;

c02_00e8:;

	goto c02_00e4;

c02_00e9:;

c02_00e5:;

	i8 v1132 = (i8)(intptr_t)(ws+4048);
	i1 v1133 = *(i1*)(intptr_t)v1132;
	i8 v1134 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1134)(v1133);

	goto c02_00e3;

c02_00e4:;

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f78_E_b8(i1 /* byte */);

// E_u32 workspace at ws+4024 length ws+33
void f88_E_u32(i4 p1135 /* value */) {
	*(i4*)(intptr_t)(ws+4024) = p1135; /*value */

	i8 v1136 = (i8)(intptr_t)(ws+4028);
	i8 v1137 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v1137 = v1136;

	i8 v1138 = (i8)(intptr_t)(ws+4024);
	i4 v1139 = *(i4*)(intptr_t)v1138;
	i1 v1140 = (i1)+10;
	i8 v1141 = (i8)(intptr_t)(ws+4040);
	i8 v1142 = *(i8*)(intptr_t)v1141;
	i8 v1143 = (i8)(intptr_t)(f13_UIToA);
	i8 v1144;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1143)(&v1144, v1142, v1140, v1139);
	i8 v1145 = (i8)(intptr_t)(ws+4048);
	*(i8*)(intptr_t)v1145 = v1144;

c02_00ea:;

	i8 v1146 = (i8)(intptr_t)(ws+4040);
	i8 v1147 = *(i8*)(intptr_t)v1146;
	i1 v1148 = *(i1*)(intptr_t)v1147;
	i8 v1149 = (i8)(intptr_t)(ws+4056);
	*(i1*)(intptr_t)v1149 = v1148;

	i8 v1150 = (i8)(intptr_t)(ws+4056);
	i1 v1151 = *(i1*)(intptr_t)v1150;
	i1 v1152 = (i1)+0;
	if (v1151==v1152) goto c02_00ef; else goto c02_00f0;

c02_00ef:;

	goto c02_00eb;

c02_00f0:;

c02_00ec:;

	i8 v1153 = (i8)(intptr_t)(ws+4056);
	i1 v1154 = *(i1*)(intptr_t)v1153;
	i8 v1155 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1155)(v1154);

	i8 v1156 = (i8)(intptr_t)(ws+4040);
	i8 v1157 = *(i8*)(intptr_t)v1156;
	i8 v1158 = v1157+(+1);
	i8 v1159 = (i8)(intptr_t)(ws+4040);
	*(i8*)(intptr_t)v1159 = v1158;

	goto c02_00ea;

c02_00eb:;

endsub:;
}
	void f88_E_u32(i4 /* value */);

// E_u16 workspace at ws+4000 length ws+2
void f89_E_u16(i2 p1160 /* value */) {
	*(i2*)(intptr_t)(ws+4000) = p1160; /*value */

	i8 v1161 = (i8)(intptr_t)(ws+4000);
	i2 v1162 = *(i2*)(intptr_t)v1161;
	i4 v1163 = v1162;
	i8 v1164 = (i8)(intptr_t)(f88_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1164)(v1163);

endsub:;
}
	void f88_E_u32(i4 /* value */);

// E_u8 workspace at ws+4016 length ws+1
void f90_E_u8(i1 p1165 /* value */) {
	*(i1*)(intptr_t)(ws+4016) = p1165; /*value */

	i8 v1166 = (i8)(intptr_t)(ws+4016);
	i1 v1167 = *(i1*)(intptr_t)v1166;
	i4 v1168 = v1167;
	i8 v1169 = (i8)(intptr_t)(f88_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1169)(v1168);

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f89_E_u16(i2 /* value */);

// E_i16 workspace at ws+3992 length ws+2
void f92_E_i16(i2 p1185 /* value */) {
	*(i2*)(intptr_t)(ws+3992) = p1185; /*value */

	i8 v1186 = (i8)(intptr_t)(ws+3992);
	i2 v1187 = *(i2*)(intptr_t)v1186;
	i2 v1188 = (i2)+0;
	if ((s2)v1187<(s2)v1188) goto c02_00f9; else goto c02_00fa;

c02_00f9:;

	i1 v1189 = (i1)+45;
	i8 v1190 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1190)(v1189);

	i8 v1191 = (i8)(intptr_t)(ws+3992);
	i2 v1192 = *(i2*)(intptr_t)v1191;
	i2 v1193 = -v1192;
	i8 v1194 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v1194 = v1193;

	goto c02_00f6;

c02_00fa:;

	i1 v1195 = (i1)+43;
	i8 v1196 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1196)(v1195);

c02_00f6:;

	i8 v1197 = (i8)(intptr_t)(ws+3992);
	i2 v1198 = *(i2*)(intptr_t)v1197;
	i8 v1199 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1199)(v1198);

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f88_E_u32(i4 /* value */);

// E_i32 workspace at ws+3976 length ws+4
void f93_E_i32(i4 p1200 /* value */) {
	*(i4*)(intptr_t)(ws+3976) = p1200; /*value */

	i8 v1201 = (i8)(intptr_t)(ws+3976);
	i4 v1202 = *(i4*)(intptr_t)v1201;
	i4 v1203 = (i4)+0;
	if ((s4)v1202<(s4)v1203) goto c02_00fe; else goto c02_00ff;

c02_00fe:;

	i1 v1204 = (i1)+45;
	i8 v1205 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1205)(v1204);

	i8 v1206 = (i8)(intptr_t)(ws+3976);
	i4 v1207 = *(i4*)(intptr_t)v1206;
	i4 v1208 = -v1207;
	i8 v1209 = (i8)(intptr_t)(ws+3976);
	*(i4*)(intptr_t)v1209 = v1208;

	goto c02_00fb;

c02_00ff:;

	i1 v1210 = (i1)+43;
	i8 v1211 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1211)(v1210);

c02_00fb:;

	i8 v1212 = (i8)(intptr_t)(ws+3976);
	i4 v1213 = *(i4*)(intptr_t)v1212;
	i8 v1214 = (i8)(intptr_t)(f88_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1214)(v1213);

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f78_E_b8(i1 /* byte */);
	void f87_E(i8 /* text */);

// E_h workspace at ws+4008 length ws+25
void f94_E_h(i1 p1215 /* width */, i4 p1216 /* value */) {
	*(i4*)(intptr_t)(ws+4008) = p1216; /*value */
	*(i1*)(intptr_t)(ws+4012) = p1215; /*width */

	i8 v1217 = (i8)(intptr_t)(ws+4008);
	i4 v1218 = *(i4*)(intptr_t)v1217;
	i1 v1219 = (i1)+16;
	i8 v1220 = (i8)(intptr_t)(ws+4013);
	i8 v1221 = (i8)(intptr_t)(f13_UIToA);
	i8 v1222;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1221)(&v1222, v1220, v1219, v1218);
	i8 v1223 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v1223 = v1222;

	i8 v1224 = (i8)(intptr_t)(ws+4012);
	i1 v1225 = *(i1*)(intptr_t)v1224;
	i8 v1226 = (i8)(intptr_t)(ws+4024);
	i8 v1227 = *(i8*)(intptr_t)v1226;
	i8 v1228 = (i8)(intptr_t)(ws+4013);
	i8 v1229 = v1227-v1228;
	i1 v1230 = v1229;
	i1 v1231 = v1225-v1230;
	i8 v1232 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v1232 = v1231;

c02_0102:;

	i8 v1233 = (i8)(intptr_t)(ws+4032);
	i1 v1234 = *(i1*)(intptr_t)v1233;
	i1 v1235 = (i1)+0;
	if (v1234==v1235) goto c02_0105; else goto c02_0104;

c02_0104:;

	i1 v1236 = (i1)+48;
	i8 v1237 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1237)(v1236);

	i8 v1238 = (i8)(intptr_t)(ws+4032);
	i1 v1239 = *(i1*)(intptr_t)v1238;
	i1 v1240 = v1239+(-1);
	i8 v1241 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v1241 = v1240;

	goto c02_0102;

c02_0105:;

	i8 v1242 = (i8)(intptr_t)(ws+4013);
	i8 v1243 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v1243)(v1242);

endsub:;
}
	void f94_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+3976 length ws+1
void f95_E_h8(i1 p1244 /* value */) {
	*(i1*)(intptr_t)(ws+3976) = p1244; /*value */

	i8 v1245 = (i8)(intptr_t)(ws+3976);
	i1 v1246 = *(i1*)(intptr_t)v1245;
	i4 v1247 = v1246;
	i1 v1248 = (i1)+2;
	i8 v1249 = (i8)(intptr_t)(f94_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1249)(v1248, v1247);

endsub:;
}
	void f94_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+4000 length ws+2
void f96_E_h16(i2 p1250 /* value */) {
	*(i2*)(intptr_t)(ws+4000) = p1250; /*value */

	i8 v1251 = (i8)(intptr_t)(ws+4000);
	i2 v1252 = *(i2*)(intptr_t)v1251;
	i4 v1253 = v1252;
	i1 v1254 = (i1)+4;
	i8 v1255 = (i8)(intptr_t)(f94_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1255)(v1254, v1253);

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f96_E_h16(i2 /* value */);

// E_labelref workspace at ws+3984 length ws+2
void f98_E_labelref(i2 p1261 /* labelid */) {
	*(i2*)(intptr_t)(ws+3984) = p1261; /*labelid */

	i1 v1262 = (i1)+3;
	i8 v1263 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1263)(v1262);

	i8 v1264 = (i8)(intptr_t)(ws+3984);
	i2 v1265 = *(i2*)(intptr_t)v1264;
	i8 v1266 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1266)(v1265);

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f79_E_b16(i2 /* word */);

// E_subref workspace at ws+3976 length ws+8
void f99_E_subref(i8 p1267 /* subr */) {
	*(i8*)(intptr_t)(ws+3976) = p1267; /*subr */

	i8 v1268 = (i8)(intptr_t)(ws+3976);
	i8 v1269 = *(i8*)(intptr_t)v1268;
	i8 v1270 = (i8)(intptr_t)(ws+40);
	i8 v1271 = *(i8*)(intptr_t)v1270;
	if (v1269==v1271) goto c02_0109; else goto c02_010a;

c02_0109:;

	i1 v1272 = (i1)+4;
	i8 v1273 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1273)(v1272);

	goto c02_0106;

c02_010a:;

	i1 v1274 = (i1)+1;
	i8 v1275 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1275)(v1274);

	i8 v1276 = (i8)(intptr_t)(ws+3976);
	i8 v1277 = *(i8*)(intptr_t)v1276;
	i8 v1278 = v1277+(+8);
	i2 v1279 = *(i2*)(intptr_t)v1278;
	i8 v1280 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1280)(v1279);

c02_0106:;

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f79_E_b16(i2 /* word */);
const i1 c02_s00c4[] = { 0x5f,0x73,0 };
	void f87_E(i8 /* text */);
	void f96_E_h16(i2 /* value */);
	void f78_E_b8(i1 /* byte */);
	void f79_E_b16(i2 /* word */);
	void f78_E_b8(i1 /* byte */);
	void f79_E_b16(i2 /* word */);

// E_wsref workspace at ws+3992 length ws+6
void f100_E_wsref(i2 p1281 /* off */, i1 p1282 /* wsid */, i2 p1283 /* id */) {
	*(i2*)(intptr_t)(ws+3992) = p1283; /*id */
	*(i1*)(intptr_t)(ws+3994) = p1282; /*wsid */
	*(i2*)(intptr_t)(ws+3996) = p1281; /*off */

	i8 v1284 = (i8)(intptr_t)(ws+3994);
	i1 v1285 = *(i1*)(intptr_t)v1284;
	i1 v1286 = (i1)+255;
	if (v1285==v1286) goto c02_010e; else goto c02_010f;

c02_010e:;

	i1 v1287 = (i1)+1;
	i8 v1288 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1288)(v1287);

	i8 v1289 = (i8)(intptr_t)(ws+3992);
	i2 v1290 = *(i2*)(intptr_t)v1289;
	i8 v1291 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1291)(v1290);

	i8 v1292 = (i8)(intptr_t)c02_s00c4;
	i8 v1293 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v1293)(v1292);

	i8 v1294 = (i8)(intptr_t)(ws+3996);
	i2 v1295 = *(i2*)(intptr_t)v1294;
	i8 v1296 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1296)(v1295);

	goto c02_010b;

c02_010f:;

	i1 v1297 = (i1)+2;
	i8 v1298 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1298)(v1297);

	i8 v1299 = (i8)(intptr_t)(ws+3992);
	i2 v1300 = *(i2*)(intptr_t)v1299;
	i8 v1301 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1301)(v1300);

	i8 v1302 = (i8)(intptr_t)(ws+3994);
	i1 v1303 = *(i1*)(intptr_t)v1302;
	i8 v1304 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1304)(v1303);

	i8 v1305 = (i8)(intptr_t)(ws+3996);
	i2 v1306 = *(i2*)(intptr_t)v1305;
	i8 v1307 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1307)(v1306);

c02_010b:;

endsub:;
}
	void f77_FlushCurrentStream(i1 /* close */);

// EmitterOpenStream workspace at ws+3976 length ws+8
void f101_EmitterOpenStream(i8 p1308 /* subr */) {
	*(i8*)(intptr_t)(ws+3976) = p1308; /*subr */

	i8 v1309 = (i8)(intptr_t)(ws+2792);
	i8 v1310 = *(i8*)(intptr_t)v1309;
	i8 v1311 = (i8)+0;
	if (v1310==v1311) goto c02_0113; else goto c02_0114;

c02_0113:;

	i8 v1312 = (i8)(intptr_t)(ws+2774);
	i8 v1313 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1313 = v1312;

	i1 v1314 = (i1)+0;
	i8 v1315 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1315 = v1314;

	goto c02_0110;

c02_0114:;

	i1 v1316 = (i1)+0;
	i8 v1317 = (i8)(intptr_t)(f77_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v1317)(v1316);

	i8 v1318 = (i8)(intptr_t)(ws+2792);
	i8 v1319 = *(i8*)(intptr_t)v1318;
	i8 v1320 = v1319+(+2);
	i8 v1321 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1321 = v1320;

	i8 v1322 = (i8)(intptr_t)(ws+2800);
	i1 v1323 = *(i1*)(intptr_t)v1322;
	i1 v1324 = v1323+(+1);
	i8 v1325 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1325 = v1324;

c02_0110:;

	i8 v1326 = (i8)(intptr_t)(ws+3976);
	i8 v1327 = *(i8*)(intptr_t)v1326;
	i8 v1328 = v1327+(+8);
	i2 v1329 = *(i2*)(intptr_t)v1328;
	i8 v1330 = (i8)(intptr_t)(ws+2792);
	i8 v1331 = *(i8*)(intptr_t)v1330;
	*(i2*)(intptr_t)v1331 = v1329;

endsub:;
}
	void f77_FlushCurrentStream(i1 /* close */);

// EmitterCloseStream workspace at ws+3976 length ws+0
void f102_EmitterCloseStream(void) {

	i1 v1332 = (i1)+128;
	i8 v1333 = (i8)(intptr_t)(f77_FlushCurrentStream);

	((void(*)(i1 /* close */))(intptr_t)v1333)(v1332);

	i8 v1334 = (i8)(intptr_t)(ws+2792);
	i8 v1335 = *(i8*)(intptr_t)v1334;
	i8 v1336 = (i8)(intptr_t)(ws+2774);
	if (v1335==v1336) goto c02_0118; else goto c02_0119;

c02_0118:;

	i8 v1337 = (i8)+0;
	i8 v1338 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1338 = v1337;

	goto c02_0115;

c02_0119:;

	i8 v1339 = (i8)(intptr_t)(ws+2792);
	i8 v1340 = *(i8*)(intptr_t)v1339;
	i8 v1341 = v1340+(-2);
	i8 v1342 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1342 = v1341;

	i8 v1343 = (i8)(intptr_t)(ws+2800);
	i1 v1344 = *(i1*)(intptr_t)v1343;
	i1 v1345 = v1344+(-1);
	i8 v1346 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1346 = v1345;

c02_0115:;

endsub:;
}
	void f44_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s00c5[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f63_SimpleError(i8 /* s */);

// EmitterOpenfile workspace at ws+3736 length ws+8
void f103_EmitterOpenfile(i8 p1347 /* filename */) {
	*(i8*)(intptr_t)(ws+3736) = p1347; /*filename */

	i8 v1348 = (i8)(intptr_t)(ws+200);
	i8 v1349 = (i8)(intptr_t)(ws+3736);
	i8 v1350 = *(i8*)(intptr_t)v1349;
	i8 v1351 = (i8)(intptr_t)(f44_FCBOpenOut);
	i1 v1352;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1351)(&v1352, v1350, v1348);
	i1 v1353 = (i1)+0;
	if (v1352==v1353) goto c02_011e; else goto c02_011d;

c02_011d:;

	i8 v1354 = (i8)(intptr_t)c02_s00c5;
	i8 v1355 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1355)(v1354);

c02_011e:;

c02_011a:;

endsub:;
}
	void f75_WriteB8(i1 /* b */);
	void f76_WriteB16(i2 /* w */);
	void f45_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s00c6[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f63_SimpleError(i8 /* s */);

// EmitterClosefile workspace at ws+3736 length ws+0
void f104_EmitterClosefile(void) {

	i1 v1356 = (i1)+69;
	i8 v1357 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1357)(v1356);

	i2 v1358 = (i2)+0;
	i8 v1359 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1359)(v1358);

	i8 v1360 = (i8)(intptr_t)(ws+200);
	i8 v1361 = (i8)(intptr_t)(f45_FCBClose);
	i1 v1362;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1361)(&v1362, v1360);
	i1 v1363 = (i1)+0;
	if (v1362==v1363) goto c02_0123; else goto c02_0122;

c02_0122:;

	i8 v1364 = (i8)(intptr_t)c02_s00c6;
	i8 v1365 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1365)(v1364);

c02_0123:;

c02_011f:;

endsub:;
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f75_WriteB8(i1 /* b */);
	void f76_WriteB16(i2 /* w */);
	void f76_WriteB16(i2 /* w */);
	void f54_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// EmitterDeclareSubroutine workspace at ws+3760 length ws+10
void f105_EmitterDeclareSubroutine(i8 p1366 /* subr */) {
	*(i8*)(intptr_t)(ws+3760) = p1366; /*subr */

	i8 v1367 = (i8)(intptr_t)(ws+3760);
	i8 v1368 = *(i8*)(intptr_t)v1367;
	i8 v1369 = *(i8*)(intptr_t)v1368;
	i8 v1370 = (i8)(intptr_t)(f28_StrLen);
	i8 v1371;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1370)(&v1371, v1369);
	i2 v1372 = v1371;
	i8 v1373 = (i8)(intptr_t)(ws+3768);
	*(i2*)(intptr_t)v1373 = v1372;

	i1 v1374 = (i1)+78;
	i8 v1375 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1375)(v1374);

	i8 v1376 = (i8)(intptr_t)(ws+3768);
	i2 v1377 = *(i2*)(intptr_t)v1376;
	i2 v1378 = v1377+(+2);
	i8 v1379 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1379)(v1378);

	i8 v1380 = (i8)(intptr_t)(ws+3760);
	i8 v1381 = *(i8*)(intptr_t)v1380;
	i8 v1382 = v1381+(+8);
	i2 v1383 = *(i2*)(intptr_t)v1382;
	i8 v1384 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1384)(v1383);

	i8 v1385 = (i8)(intptr_t)(ws+200);
	i8 v1386 = (i8)(intptr_t)(ws+3760);
	i8 v1387 = *(i8*)(intptr_t)v1386;
	i8 v1388 = *(i8*)(intptr_t)v1387;
	i8 v1389 = (i8)(intptr_t)(ws+3768);
	i2 v1390 = *(i2*)(intptr_t)v1389;
	i8 v1391 = v1390;
	i8 v1392 = (i8)(intptr_t)(f54_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v1392)(v1391, v1388, v1385);

endsub:;
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f75_WriteB8(i1 /* b */);
	void f76_WriteB16(i2 /* w */);
	void f76_WriteB16(i2 /* w */);
	void f54_FCBPutBlock(i8 /* length */, i8 /* buffer */, i8 /* fcb */);

// EmitterDeclareExternalSubroutine workspace at ws+3768 length ws+18
void f106_EmitterDeclareExternalSubroutine(i8 p1393 /* external */, i2 p1394 /* subrid */) {
	*(i2*)(intptr_t)(ws+3768) = p1394; /*subrid */
	*(i8*)(intptr_t)(ws+3776) = p1393; /*external */

	i8 v1395 = (i8)(intptr_t)(ws+3776);
	i8 v1396 = *(i8*)(intptr_t)v1395;
	i8 v1397 = (i8)(intptr_t)(f28_StrLen);
	i8 v1398;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1397)(&v1398, v1396);
	i2 v1399 = v1398;
	i8 v1400 = (i8)(intptr_t)(ws+3784);
	*(i2*)(intptr_t)v1400 = v1399;

	i1 v1401 = (i1)+88;
	i8 v1402 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1402)(v1401);

	i8 v1403 = (i8)(intptr_t)(ws+3784);
	i2 v1404 = *(i2*)(intptr_t)v1403;
	i2 v1405 = v1404+(+2);
	i8 v1406 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1406)(v1405);

	i8 v1407 = (i8)(intptr_t)(ws+3768);
	i2 v1408 = *(i2*)(intptr_t)v1407;
	i8 v1409 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1409)(v1408);

	i8 v1410 = (i8)(intptr_t)(ws+200);
	i8 v1411 = (i8)(intptr_t)(ws+3776);
	i8 v1412 = *(i8*)(intptr_t)v1411;
	i8 v1413 = (i8)(intptr_t)(ws+3784);
	i2 v1414 = *(i2*)(intptr_t)v1413;
	i8 v1415 = v1414;
	i8 v1416 = (i8)(intptr_t)(f54_FCBPutBlock);

	((void(*)(i8 /* length */, i8 /* buffer */, i8 /* fcb */))(intptr_t)v1416)(v1415, v1412, v1410);

endsub:;
}
	void f75_WriteB8(i1 /* b */);
	void f76_WriteB16(i2 /* w */);
	void f76_WriteB16(i2 /* w */);
	void f76_WriteB16(i2 /* w */);

// EmitterReferenceSubroutineById workspace at ws+3760 length ws+4
void f107_EmitterReferenceSubroutineById(i2 p1417 /* used */, i2 p1418 /* user */) {
	*(i2*)(intptr_t)(ws+3760) = p1418; /*user */
	*(i2*)(intptr_t)(ws+3762) = p1417; /*used */

	i1 v1419 = (i1)+82;
	i8 v1420 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1420)(v1419);

	i2 v1421 = (i2)+4;
	i8 v1422 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1422)(v1421);

	i8 v1423 = (i8)(intptr_t)(ws+3760);
	i2 v1424 = *(i2*)(intptr_t)v1423;
	i8 v1425 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1425)(v1424);

	i8 v1426 = (i8)(intptr_t)(ws+3762);
	i2 v1427 = *(i2*)(intptr_t)v1426;
	i8 v1428 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1428)(v1427);

endsub:;
}
	void f75_WriteB8(i1 /* b */);
	void f76_WriteB16(i2 /* w */);
	void f76_WriteB16(i2 /* w */);
	void f75_WriteB8(i1 /* b */);
	void f76_WriteB16(i2 /* w */);

// EmitterDeclareWorkspace workspace at ws+3760 length ws+6
void f109_EmitterDeclareWorkspace(i2 p1440 /* workspace */, i1 p1441 /* wid */, i2 p1442 /* subrid */) {
	*(i2*)(intptr_t)(ws+3760) = p1442; /*subrid */
	*(i1*)(intptr_t)(ws+3762) = p1441; /*wid */
	*(i2*)(intptr_t)(ws+3764) = p1440; /*workspace */

	i1 v1443 = (i1)+87;
	i8 v1444 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1444)(v1443);

	i2 v1445 = (i2)+5;
	i8 v1446 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1446)(v1445);

	i8 v1447 = (i8)(intptr_t)(ws+3760);
	i2 v1448 = *(i2*)(intptr_t)v1447;
	i8 v1449 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1449)(v1448);

	i8 v1450 = (i8)(intptr_t)(ws+3762);
	i1 v1451 = *(i1*)(intptr_t)v1450;
	i8 v1452 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1452)(v1451);

	i8 v1453 = (i8)(intptr_t)(ws+3764);
	i2 v1454 = *(i2*)(intptr_t)v1453;
	i8 v1455 = (i8)(intptr_t)(f76_WriteB16);

	((void(*)(i2 /* w */))(intptr_t)v1455)(v1454);

endsub:;
}
	void f50_FCBGetChar(i1* /* c */, i8 /* fcb */);

// I_b8 workspace at ws+3848 length ws+1
void f110_I_b8(i1* p1456 /* b */) {

	i8 v1457 = (i8)(intptr_t)(ws+2804);
	i8 v1458 = (i8)(intptr_t)(f50_FCBGetChar);
	i1 v1459;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1458)(&v1459, v1457);
	i8 v1460 = (i8)(intptr_t)(ws+3848);
	*(i1*)(intptr_t)v1460 = v1459;

endsub:;
	*p1456 = *(i1*)(intptr_t)(ws+3848);
}
	void f110_I_b8(i1* /* b */);
	void f110_I_b8(i1* /* b */);

// I_b16 workspace at ws+3832 length ws+2
void f111_I_b16(i2* p1461 /* b */) {

	i8 v1462 = (i8)(intptr_t)(f110_I_b8);
	i1 v1463;

	((void(*)(i1* /* b */))(intptr_t)v1462)(&v1463);
	i2 v1464 = v1463;
	i8 v1465 = (i8)(intptr_t)(ws+3832);
	*(i2*)(intptr_t)v1465 = v1464;

	i8 v1466 = (i8)(intptr_t)(ws+3832);
	i2 v1467 = *(i2*)(intptr_t)v1466;
	i8 v1468 = (i8)(intptr_t)(f110_I_b8);
	i1 v1469;

	((void(*)(i1* /* b */))(intptr_t)v1468)(&v1469);
	i2 v1470 = v1469;
	i1 v1471 = (i1)+8;
	i2 v1472 = ((i2)v1470)<<v1471;
	i2 v1473 = v1467|v1472;
	i8 v1474 = (i8)(intptr_t)(ws+3832);
	*(i2*)(intptr_t)v1474 = v1473;

endsub:;
	*p1461 = *(i2*)(intptr_t)(ws+3832);
}
	void f111_I_b16(i2* /* b */);
	void f111_I_b16(i2* /* b */);

// I_b32 workspace at ws+3824 length ws+4
void f112_I_b32(i4* p1475 /* b */) {

	i8 v1476 = (i8)(intptr_t)(f111_I_b16);
	i2 v1477;

	((void(*)(i2* /* b */))(intptr_t)v1476)(&v1477);
	i4 v1478 = v1477;
	i8 v1479 = (i8)(intptr_t)(ws+3824);
	*(i4*)(intptr_t)v1479 = v1478;

	i8 v1480 = (i8)(intptr_t)(ws+3824);
	i4 v1481 = *(i4*)(intptr_t)v1480;
	i8 v1482 = (i8)(intptr_t)(f111_I_b16);
	i2 v1483;

	((void(*)(i2* /* b */))(intptr_t)v1482)(&v1483);
	i4 v1484 = v1483;
	i1 v1485 = (i1)+16;
	i4 v1486 = ((i4)v1484)<<v1485;
	i4 v1487 = v1481|v1486;
	i8 v1488 = (i8)(intptr_t)(ws+3824);
	*(i4*)(intptr_t)v1488 = v1487;

endsub:;
	*p1475 = *(i4*)(intptr_t)(ws+3824);
}
	void f111_I_b16(i2* /* b */);

// I_bsize workspace at ws+3824 length ws+2
void f113_I_bsize(i2* p1489 /* s */) {

	i8 v1490 = (i8)(intptr_t)(f111_I_b16);
	i2 v1491;

	((void(*)(i2* /* b */))(intptr_t)v1490)(&v1491);
	i8 v1492 = (i8)(intptr_t)(ws+3824);
	*(i2*)(intptr_t)v1492 = v1491;

endsub:;
	*p1489 = *(i2*)(intptr_t)(ws+3824);
}
	void f110_I_b8(i1* /* b */);
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f110_I_b8(i1* /* b */);

// I_countedstring workspace at ws+3824 length ws+24
void f114_I_countedstring(i8* p1493 /* s */) {

	i8 v1494 = (i8)(intptr_t)(f110_I_b8);
	i1 v1495;

	((void(*)(i1* /* b */))(intptr_t)v1494)(&v1495);
	i8 v1496 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v1496 = v1495;

	i8 v1497 = (i8)(intptr_t)(ws+3832);
	i1 v1498 = *(i1*)(intptr_t)v1497;
	i1 v1499 = v1498+(+1);
	i8 v1500 = v1499;
	i8 v1501 = (i8)(intptr_t)(f32_Alloc);
	i8 v1502;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1501)(&v1502, v1500);
	i8 v1503 = (i8)(intptr_t)(ws+3824);
	*(i8*)(intptr_t)v1503 = v1502;

	i8 v1504 = (i8)(intptr_t)(ws+3824);
	i8 v1505 = *(i8*)(intptr_t)v1504;
	i8 v1506 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v1506 = v1505;

c02_0126:;

	i8 v1507 = (i8)(intptr_t)(ws+3832);
	i1 v1508 = *(i1*)(intptr_t)v1507;
	i1 v1509 = (i1)+0;
	if (v1508==v1509) goto c02_0129; else goto c02_0128;

c02_0128:;

	i8 v1510 = (i8)(intptr_t)(f110_I_b8);
	i1 v1511;

	((void(*)(i1* /* b */))(intptr_t)v1510)(&v1511);
	i8 v1512 = (i8)(intptr_t)(ws+3840);
	i8 v1513 = *(i8*)(intptr_t)v1512;
	*(i1*)(intptr_t)v1513 = v1511;

	i8 v1514 = (i8)(intptr_t)(ws+3840);
	i8 v1515 = *(i8*)(intptr_t)v1514;
	i8 v1516 = v1515+(+1);
	i8 v1517 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v1517 = v1516;

	i8 v1518 = (i8)(intptr_t)(ws+3832);
	i1 v1519 = *(i1*)(intptr_t)v1518;
	i1 v1520 = v1519+(-1);
	i8 v1521 = (i8)(intptr_t)(ws+3832);
	*(i1*)(intptr_t)v1521 = v1520;

	goto c02_0126;

c02_0129:;

	i1 v1522 = (i1)+0;
	i8 v1523 = (i8)(intptr_t)(ws+3840);
	i8 v1524 = *(i8*)(intptr_t)v1523;
	*(i1*)(intptr_t)v1524 = v1522;

endsub:;
	*p1493 = *(i8*)(intptr_t)(ws+3824);
}
	void f42_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f64_CannotOpen(i8 /* filename */);

// InputterOpenfile workspace at ws+3736 length ws+8
void f115_InputterOpenfile(i8 p1525 /* filename */) {
	*(i8*)(intptr_t)(ws+3736) = p1525; /*filename */

	i8 v1526 = (i8)(intptr_t)(ws+2804);
	i8 v1527 = (i8)(intptr_t)(ws+3736);
	i8 v1528 = *(i8*)(intptr_t)v1527;
	i8 v1529 = (i8)(intptr_t)(f42_FCBOpenIn);
	i1 v1530;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1529)(&v1530, v1528, v1526);
	i1 v1531 = (i1)+0;
	if (v1530==v1531) goto c02_012e; else goto c02_012d;

c02_012d:;

	i8 v1532 = (i8)(intptr_t)(ws+3736);
	i8 v1533 = *(i8*)(intptr_t)v1532;
	i8 v1534 = (i8)(intptr_t)(f64_CannotOpen);

	((void(*)(i8 /* filename */))(intptr_t)v1534)(v1533);

c02_012e:;

c02_012a:;

endsub:;
}
	void f45_FCBClose(i1* /* errno */, i8 /* fcb */);

// InputterClosefile workspace at ws+3736 length ws+1
void f116_InputterClosefile(void) {

	i8 v1535 = (i8)(intptr_t)(ws+2804);
	i8 v1536 = (i8)(intptr_t)(f45_FCBClose);
	i1 v1537;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1536)(&v1537, v1535);
	i8 v1538 = (i8)(intptr_t)(ws+3736);
	*(i1*)(intptr_t)v1538 = v1537;

endsub:;
}

// ReadMid0 workspace at ws+3824 length ws+0
void f117_ReadMid0(i8 p1539 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1539; /*node */

endsub:;
}
	void f111_I_b16(i2* /* b */);

// ReadMid1 workspace at ws+3824 length ws+0
void f118_ReadMid1(i8 p1540 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1540; /*node */

	i8 v1541 = (i8)(intptr_t)(f111_I_b16);
	i2 v1542;

	((void(*)(i2* /* b */))(intptr_t)v1541)(&v1542);
	i8 v1543 = (i8)(intptr_t)(ws+3816);
	i8 v1544 = *(i8*)(intptr_t)v1543;
	*(i2*)(intptr_t)v1544 = v1542;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f113_I_bsize(i2* /* s */);
	void f110_I_b8(i1* /* b */);

// ReadMid2 workspace at ws+3824 length ws+0
void f119_ReadMid2(i8 p1545 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1545; /*node */

	i8 v1546 = (i8)(intptr_t)(f111_I_b16);
	i2 v1547;

	((void(*)(i2* /* b */))(intptr_t)v1546)(&v1547);
	i8 v1548 = (i8)(intptr_t)(f60_FindSubr);
	i8 v1549;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1548)(&v1549, v1547);
	i8 v1550 = (i8)(intptr_t)(ws+3816);
	i8 v1551 = *(i8*)(intptr_t)v1550;
	*(i8*)(intptr_t)v1551 = v1549;

	i8 v1552 = (i8)(intptr_t)(f110_I_b8);
	i1 v1553;

	((void(*)(i1* /* b */))(intptr_t)v1552)(&v1553);
	i8 v1554 = (i8)(intptr_t)(ws+3816);
	i8 v1555 = *(i8*)(intptr_t)v1554;
	i8 v1556 = v1555+(+10);
	*(i1*)(intptr_t)v1556 = v1553;

	i8 v1557 = (i8)(intptr_t)(f113_I_bsize);
	i2 v1558;

	((void(*)(i2* /* s */))(intptr_t)v1557)(&v1558);
	i8 v1559 = (i8)(intptr_t)(ws+3816);
	i8 v1560 = *(i8*)(intptr_t)v1559;
	i8 v1561 = v1560+(+12);
	*(i2*)(intptr_t)v1561 = v1558;

	i8 v1562 = (i8)(intptr_t)(f110_I_b8);
	i1 v1563;

	((void(*)(i1* /* b */))(intptr_t)v1562)(&v1563);
	i8 v1564 = (i8)(intptr_t)(ws+3816);
	i8 v1565 = *(i8*)(intptr_t)v1564;
	i8 v1566 = v1565+(+14);
	*(i1*)(intptr_t)v1566 = v1563;

endsub:;
}
	void f112_I_b32(i4* /* b */);
	void f111_I_b16(i2* /* b */);

// ReadMid3 workspace at ws+3824 length ws+0
void f120_ReadMid3(i8 p1567 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1567; /*node */

	i8 v1568 = (i8)(intptr_t)(f112_I_b32);
	i4 v1569;

	((void(*)(i4* /* b */))(intptr_t)v1568)(&v1569);
	i8 v1570 = (i8)(intptr_t)(ws+3816);
	i8 v1571 = *(i8*)(intptr_t)v1570;
	*(i4*)(intptr_t)v1571 = v1569;

	i8 v1572 = (i8)(intptr_t)(f111_I_b16);
	i2 v1573;

	((void(*)(i2* /* b */))(intptr_t)v1572)(&v1573);
	i8 v1574 = (i8)(intptr_t)(ws+3816);
	i8 v1575 = *(i8*)(intptr_t)v1574;
	i8 v1576 = v1575+(+4);
	*(i2*)(intptr_t)v1576 = v1573;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);

// ReadMid4 workspace at ws+3824 length ws+0
void f121_ReadMid4(i8 p1577 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1577; /*node */

	i8 v1578 = (i8)(intptr_t)(f111_I_b16);
	i2 v1579;

	((void(*)(i2* /* b */))(intptr_t)v1578)(&v1579);
	i8 v1580 = (i8)(intptr_t)(f60_FindSubr);
	i8 v1581;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1580)(&v1581, v1579);
	i8 v1582 = (i8)(intptr_t)(ws+3816);
	i8 v1583 = *(i8*)(intptr_t)v1582;
	*(i8*)(intptr_t)v1583 = v1581;

	i8 v1584 = (i8)(intptr_t)(f110_I_b8);
	i1 v1585;

	((void(*)(i1* /* b */))(intptr_t)v1584)(&v1585);
	i8 v1586 = (i8)(intptr_t)(ws+3816);
	i8 v1587 = *(i8*)(intptr_t)v1586;
	i8 v1588 = v1587+(+8);
	*(i1*)(intptr_t)v1588 = v1585;

endsub:;
}
	void f112_I_b32(i4* /* b */);

// ReadMid5 workspace at ws+3824 length ws+0
void f122_ReadMid5(i8 p1589 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1589; /*node */

	i8 v1590 = (i8)(intptr_t)(f112_I_b32);
	i4 v1591;

	((void(*)(i4* /* b */))(intptr_t)v1590)(&v1591);
	i8 v1592 = (i8)(intptr_t)(ws+3816);
	i8 v1593 = *(i8*)(intptr_t)v1592;
	*(i4*)(intptr_t)v1593 = v1591;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f111_I_b16(i2* /* b */);
	void f111_I_b16(i2* /* b */);
	void f110_I_b8(i1* /* b */);

// ReadMid6 workspace at ws+3824 length ws+0
void f123_ReadMid6(i8 p1594 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1594; /*node */

	i8 v1595 = (i8)(intptr_t)(f111_I_b16);
	i2 v1596;

	((void(*)(i2* /* b */))(intptr_t)v1595)(&v1596);
	i8 v1597 = (i8)(intptr_t)(ws+3816);
	i8 v1598 = *(i8*)(intptr_t)v1597;
	*(i2*)(intptr_t)v1598 = v1596;

	i8 v1599 = (i8)(intptr_t)(f111_I_b16);
	i2 v1600;

	((void(*)(i2* /* b */))(intptr_t)v1599)(&v1600);
	i8 v1601 = (i8)(intptr_t)(ws+3816);
	i8 v1602 = *(i8*)(intptr_t)v1601;
	i8 v1603 = v1602+(+2);
	*(i2*)(intptr_t)v1603 = v1600;

	i8 v1604 = (i8)(intptr_t)(f111_I_b16);
	i2 v1605;

	((void(*)(i2* /* b */))(intptr_t)v1604)(&v1605);
	i8 v1606 = (i8)(intptr_t)(ws+3816);
	i8 v1607 = *(i8*)(intptr_t)v1606;
	i8 v1608 = v1607+(+4);
	*(i2*)(intptr_t)v1608 = v1605;

	i8 v1609 = (i8)(intptr_t)(f110_I_b8);
	i1 v1610;

	((void(*)(i1* /* b */))(intptr_t)v1609)(&v1610);
	i8 v1611 = (i8)(intptr_t)(ws+3816);
	i8 v1612 = *(i8*)(intptr_t)v1611;
	i8 v1613 = v1612+(+6);
	*(i1*)(intptr_t)v1613 = v1610;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f113_I_bsize(i2* /* s */);
	void f110_I_b8(i1* /* b */);
	void f113_I_bsize(i2* /* s */);

// ReadMid7 workspace at ws+3824 length ws+0
void f124_ReadMid7(i8 p1614 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1614; /*node */

	i8 v1615 = (i8)(intptr_t)(f111_I_b16);
	i2 v1616;

	((void(*)(i2* /* b */))(intptr_t)v1615)(&v1616);
	i8 v1617 = (i8)(intptr_t)(f60_FindSubr);
	i8 v1618;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1617)(&v1618, v1616);
	i8 v1619 = (i8)(intptr_t)(ws+3816);
	i8 v1620 = *(i8*)(intptr_t)v1619;
	*(i8*)(intptr_t)v1620 = v1618;

	i8 v1621 = (i8)(intptr_t)(f110_I_b8);
	i1 v1622;

	((void(*)(i1* /* b */))(intptr_t)v1621)(&v1622);
	i8 v1623 = (i8)(intptr_t)(ws+3816);
	i8 v1624 = *(i8*)(intptr_t)v1623;
	i8 v1625 = v1624+(+10);
	*(i1*)(intptr_t)v1625 = v1622;

	i8 v1626 = (i8)(intptr_t)(f113_I_bsize);
	i2 v1627;

	((void(*)(i2* /* s */))(intptr_t)v1626)(&v1627);
	i8 v1628 = (i8)(intptr_t)(ws+3816);
	i8 v1629 = *(i8*)(intptr_t)v1628;
	i8 v1630 = v1629+(+12);
	*(i2*)(intptr_t)v1630 = v1627;

	i8 v1631 = (i8)(intptr_t)(f110_I_b8);
	i1 v1632;

	((void(*)(i1* /* b */))(intptr_t)v1631)(&v1632);
	i8 v1633 = (i8)(intptr_t)(ws+3816);
	i8 v1634 = *(i8*)(intptr_t)v1633;
	i8 v1635 = v1634+(+14);
	*(i1*)(intptr_t)v1635 = v1632;

	i8 v1636 = (i8)(intptr_t)(f113_I_bsize);
	i2 v1637;

	((void(*)(i2* /* s */))(intptr_t)v1636)(&v1637);
	i8 v1638 = (i8)(intptr_t)(ws+3816);
	i8 v1639 = *(i8*)(intptr_t)v1638;
	i8 v1640 = v1639+(+16);
	*(i2*)(intptr_t)v1640 = v1637;

endsub:;
}
	void f114_I_countedstring(i8* /* s */);

// ReadMid8 workspace at ws+3824 length ws+0
void f125_ReadMid8(i8 p1641 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1641; /*node */

	i8 v1642 = (i8)(intptr_t)(f114_I_countedstring);
	i8 v1643;

	((void(*)(i8* /* s */))(intptr_t)v1642)(&v1643);
	i8 v1644 = (i8)(intptr_t)(ws+3816);
	i8 v1645 = *(i8*)(intptr_t)v1644;
	*(i8*)(intptr_t)v1645 = v1643;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);

// ReadMid9 workspace at ws+3824 length ws+0
void f126_ReadMid9(i8 p1646 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1646; /*node */

	i8 v1647 = (i8)(intptr_t)(f111_I_b16);
	i2 v1648;

	((void(*)(i2* /* b */))(intptr_t)v1647)(&v1648);
	i8 v1649 = (i8)(intptr_t)(f60_FindSubr);
	i8 v1650;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1649)(&v1650, v1648);
	i8 v1651 = (i8)(intptr_t)(ws+3816);
	i8 v1652 = *(i8*)(intptr_t)v1651;
	*(i8*)(intptr_t)v1652 = v1650;

endsub:;
}
	void f110_I_b8(i1* /* b */);

// ReadMid10 workspace at ws+3824 length ws+0
void f127_ReadMid10(i8 p1653 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1653; /*node */

	i8 v1654 = (i8)(intptr_t)(f110_I_b8);
	i1 v1655;

	((void(*)(i1* /* b */))(intptr_t)v1654)(&v1655);
	i8 v1656 = (i8)(intptr_t)(ws+3816);
	i8 v1657 = *(i8*)(intptr_t)v1656;
	*(i1*)(intptr_t)v1657 = v1655;

endsub:;
}
	void f117_ReadMid0(i8 /* node */);
	void f118_ReadMid1(i8 /* node */);
	void f119_ReadMid2(i8 /* node */);
	void f120_ReadMid3(i8 /* node */);
	void f121_ReadMid4(i8 /* node */);
	void f122_ReadMid5(i8 /* node */);
	void f123_ReadMid6(i8 /* node */);
	void f124_ReadMid7(i8 /* node */);
	void f125_ReadMid8(i8 /* node */);
	void f126_ReadMid9(i8 /* node */);
	void f127_ReadMid10(i8 /* node */);
static data f3___main_s012f[] = {

	{ .ptr = (void*)f117_ReadMid0 },

	{ .ptr = (void*)f118_ReadMid1 },

	{ .ptr = (void*)f119_ReadMid2 },

	{ .ptr = (void*)f120_ReadMid3 },

	{ .ptr = (void*)f121_ReadMid4 },

	{ .ptr = (void*)f122_ReadMid5 },

	{ .ptr = (void*)f123_ReadMid6 },

	{ .ptr = (void*)f124_ReadMid7 },

	{ .ptr = (void*)f125_ReadMid8 },

	{ .ptr = (void*)f126_ReadMid9 },

	{ .ptr = (void*)f127_ReadMid10 },

};
static data f3___main_s0130[] = {








	{ .i1 = { 0x00,0x00,0x00,0x09,0x09,0x02,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x08,0x07,0x09,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x08,0x02,0x09,0x05,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x04,0x04,0x04,0x04,0x04,0x04}},








	{ .i1 = { 0x04,0x04,0x04,0x04,0x05,0x08,0x07,0x09}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},


	{ .i1 = { 0x00}},
};
static data f3___main_s0131[] = {








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

// AllocSubrId workspace at ws+3800 length ws+2
void f140_AllocSubrId(i2* p2095 /* id */) {

	i8 v2096 = (i8)(intptr_t)(ws+50);
	i2 v2097 = *(i2*)(intptr_t)v2096;
	i8 v2098 = (i8)(intptr_t)(ws+3800);
	*(i2*)(intptr_t)v2098 = v2097;

	i8 v2099 = (i8)(intptr_t)(ws+50);
	i2 v2100 = *(i2*)(intptr_t)v2099;
	i2 v2101 = v2100+(+1);
	i8 v2102 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v2102 = v2101;

endsub:;
	*p2095 = *(i2*)(intptr_t)(ws+3800);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f65_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewInstruction workspace at ws+3840 length ws+8
void f141_AllocNewInstruction(i8* p2105 /* insn */) {

	i8 v2106 = (i8)(intptr_t)(ws+3448);
	i8 v2107 = *(i8*)(intptr_t)v2106;
	i8 v2108 = (i8)+0;
	if (v2107==v2108) goto c02_01ca; else goto c02_01c9;

c02_01c9:;

	i8 v2109 = (i8)(intptr_t)(ws+3448);
	i8 v2110 = *(i8*)(intptr_t)v2109;
	i8 v2111 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v2111 = v2110;

	i8 v2112 = (i8)(intptr_t)(ws+3448);
	i8 v2113 = *(i8*)(intptr_t)v2112;
	i8 v2114 = *(i8*)(intptr_t)v2113;
	i8 v2115 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2115 = v2114;

	i8 v2116 = (i8)(intptr_t)(ws+3840);
	i8 v2117 = *(i8*)(intptr_t)v2116;
	i1 v2118 = (i1)+0;
	i8 v2119 = (i8)+71;
	i8 v2120 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v2120)(v2119, v2118, v2117);

	goto c02_01c6;

c02_01ca:;

	i8 v2121 = (i8)+71;
	i8 v2122 = (i8)(intptr_t)(f65_InternalAlloc);
	i8 v2123;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v2122)(&v2123, v2121);
	i8 v2124 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v2124 = v2123;

c02_01c6:;

endsub:;
	*p2105 = *(i8*)(intptr_t)(ws+3840);
}

// FreeInstruction workspace at ws+3848 length ws+8
void f142_FreeInstruction(i8 p2125 /* insn */) {
	*(i8*)(intptr_t)(ws+3848) = p2125; /*insn */

	i8 v2126 = (i8)(intptr_t)(ws+3448);
	i8 v2127 = *(i8*)(intptr_t)v2126;
	i8 v2128 = (i8)(intptr_t)(ws+3848);
	i8 v2129 = *(i8*)(intptr_t)v2128;
	*(i8*)(intptr_t)v2129 = v2127;

	i8 v2130 = (i8)(intptr_t)(ws+3848);
	i8 v2131 = *(i8*)(intptr_t)v2130;
	i8 v2132 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2132 = v2131;

endsub:;
}
	void f33_Free(i8 /* block */);

// PurgeAllFreeInstructions workspace at ws+3968 length ws+8
void f67_PurgeAllFreeInstructions(void) {

c02_01cd:;

	i8 v2133 = (i8)(intptr_t)(ws+3448);
	i8 v2134 = *(i8*)(intptr_t)v2133;
	i8 v2135 = (i8)+0;
	if (v2134==v2135) goto c02_01d0; else goto c02_01cf;

c02_01cf:;

	i8 v2136 = (i8)(intptr_t)(ws+3448);
	i8 v2137 = *(i8*)(intptr_t)v2136;
	i8 v2138 = (i8)(intptr_t)(ws+3968);
	*(i8*)(intptr_t)v2138 = v2137;

	i8 v2139 = (i8)(intptr_t)(ws+3448);
	i8 v2140 = *(i8*)(intptr_t)v2139;
	i8 v2141 = *(i8*)(intptr_t)v2140;
	i8 v2142 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2142 = v2141;

	i8 v2143 = (i8)(intptr_t)(ws+3968);
	i8 v2144 = *(i8*)(intptr_t)v2143;
	i8 v2145 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v2145)(v2144);

	goto c02_01cd;

c02_01d0:;

endsub:;
}

// FindConflictingRegisters workspace at ws+3864 length ws+16
void f143_FindConflictingRegisters(i1* p2146 /* conflicting */, i1 p2147 /* inreg */) {
	*(i1*)(intptr_t)(ws+3864) = p2147; /*inreg */

	i1 v2148 = (i1)+0;
	i8 v2149 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2149 = v2148;

	i8 v2150 = (i8)(intptr_t)((i1*)f3___main_s00bf);
	i8 v2151 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v2151 = v2150;

c02_01d3:;

	i8 v2152 = (i8)(intptr_t)(ws+3872);
	i8 v2153 = *(i8*)(intptr_t)v2152;
	i8 v2154 = (i8)(intptr_t)((i1*)f3___main_s00bf+80);
	if (v2153==v2154) goto c02_01d6; else goto c02_01d5;

c02_01d5:;

	i8 v2155 = (i8)(intptr_t)(ws+3872);
	i8 v2156 = *(i8*)(intptr_t)v2155;
	i8 v2157 = v2156+(+8);
	i1 v2158 = *(i1*)(intptr_t)v2157;
	i8 v2159 = (i8)(intptr_t)(ws+3864);
	i1 v2160 = *(i1*)(intptr_t)v2159;
	i1 v2161 = v2158&v2160;
	i1 v2162 = (i1)+0;
	if (v2161==v2162) goto c02_01db; else goto c02_01da;

c02_01da:;

	i8 v2163 = (i8)(intptr_t)(ws+3865);
	i1 v2164 = *(i1*)(intptr_t)v2163;
	i8 v2165 = (i8)(intptr_t)(ws+3872);
	i8 v2166 = *(i8*)(intptr_t)v2165;
	i8 v2167 = v2166+(+9);
	i1 v2168 = *(i1*)(intptr_t)v2167;
	i1 v2169 = v2164|v2168;
	i8 v2170 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2170 = v2169;

c02_01db:;

c02_01d7:;

	i8 v2171 = (i8)(intptr_t)(ws+3872);
	i8 v2172 = *(i8*)(intptr_t)v2171;
	i8 v2173 = v2172+(+16);
	i8 v2174 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v2174 = v2173;

	goto c02_01d3;

c02_01d6:;

endsub:;
	*p2146 = *(i1*)(intptr_t)(ws+3865);
}

// FindCompatibleRegisters workspace at ws+3864 length ws+16
void f144_FindCompatibleRegisters(i1* p2175 /* compatible */, i1 p2176 /* inreg */) {
	*(i1*)(intptr_t)(ws+3864) = p2176; /*inreg */

	i1 v2177 = (i1)-1;
	i8 v2178 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2178 = v2177;

	i8 v2179 = (i8)(intptr_t)((i1*)f3___main_s00bf);
	i8 v2180 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v2180 = v2179;

c02_01de:;

	i8 v2181 = (i8)(intptr_t)(ws+3872);
	i8 v2182 = *(i8*)(intptr_t)v2181;
	i8 v2183 = (i8)(intptr_t)((i1*)f3___main_s00bf+80);
	if (v2182==v2183) goto c02_01e1; else goto c02_01e0;

c02_01e0:;

	i8 v2184 = (i8)(intptr_t)(ws+3872);
	i8 v2185 = *(i8*)(intptr_t)v2184;
	i8 v2186 = v2185+(+8);
	i1 v2187 = *(i1*)(intptr_t)v2186;
	i8 v2188 = (i8)(intptr_t)(ws+3864);
	i1 v2189 = *(i1*)(intptr_t)v2188;
	i1 v2190 = v2187&v2189;
	i1 v2191 = (i1)+0;
	if (v2190==v2191) goto c02_01e6; else goto c02_01e5;

c02_01e5:;

	i8 v2192 = (i8)(intptr_t)(ws+3865);
	i1 v2193 = *(i1*)(intptr_t)v2192;
	i8 v2194 = (i8)(intptr_t)(ws+3872);
	i8 v2195 = *(i8*)(intptr_t)v2194;
	i8 v2196 = v2195+(+10);
	i1 v2197 = *(i1*)(intptr_t)v2196;
	i1 v2198 = v2193&v2197;
	i8 v2199 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2199 = v2198;

c02_01e6:;

c02_01e2:;

	i8 v2200 = (i8)(intptr_t)(ws+3872);
	i8 v2201 = *(i8*)(intptr_t)v2200;
	i8 v2202 = v2201+(+16);
	i8 v2203 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v2203 = v2202;

	goto c02_01de;

c02_01e1:;

endsub:;
	*p2175 = *(i1*)(intptr_t)(ws+3865);
}

// FindFirst workspace at ws+3864 length ws+2
void f145_FindFirst(i1* p2204 /* outreg */, i1 p2205 /* inreg */) {
	*(i1*)(intptr_t)(ws+3864) = p2205; /*inreg */

	i1 v2206 = (i1)+1;
	i8 v2207 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2207 = v2206;

c02_01e9:;

	i8 v2208 = (i8)(intptr_t)(ws+3865);
	i1 v2209 = *(i1*)(intptr_t)v2208;
	i1 v2210 = (i1)+0;
	if (v2209==v2210) goto c02_01ec; else goto c02_01eb;

c02_01eb:;

	i8 v2211 = (i8)(intptr_t)(ws+3864);
	i1 v2212 = *(i1*)(intptr_t)v2211;
	i8 v2213 = (i8)(intptr_t)(ws+3865);
	i1 v2214 = *(i1*)(intptr_t)v2213;
	i1 v2215 = v2212&v2214;
	i1 v2216 = (i1)+0;
	if (v2215==v2216) goto c02_01f1; else goto c02_01f0;

c02_01f0:;

	goto endsub;

c02_01f1:;

c02_01ed:;

	i8 v2217 = (i8)(intptr_t)(ws+3865);
	i1 v2218 = *(i1*)(intptr_t)v2217;
	i1 v2219 = (i1)+1;
	i1 v2220 = ((i1)v2218)<<v2219;
	i8 v2221 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2221 = v2220;

	goto c02_01e9;

c02_01ec:;

	i1 v2222 = (i1)+0;
	i8 v2223 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2223 = v2222;

endsub:;
	*p2204 = *(i1*)(intptr_t)(ws+3865);
}
const i1 c02_s00c7[] = { 0x28,0 };
	void f87_E(i8 /* text */);
const i1 c02_s00c8[] = { 0x2c,0x20,0 };
	void f87_E(i8 /* text */);

// comma workspace at ws+4016 length ws+0
void f148_comma(void) {

	i8 v2249 = (i8)(intptr_t)(ws+4000);
	i1 v2250 = *(i1*)(intptr_t)v2249;
	i1 v2251 = (i1)+0;
	if (v2250==v2251) goto c02_01f5; else goto c02_01f6;

c02_01f5:;

	i8 v2252 = (i8)(intptr_t)c02_s00c8;
	i8 v2253 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2253)(v2252);

c02_01f6:;

c02_01f2:;

	i1 v2254 = (i1)+0;
	i8 v2255 = (i8)(intptr_t)(ws+4000);
	*(i1*)(intptr_t)v2255 = v2254;

endsub:;
}
	void f69_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f148_comma(void);
const i1 c02_s00c9[] = { 0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00ca[] = { 0x2a,0x20,0x2f,0x2a,0x20,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s00cb[] = { 0x20,0x2a,0x2f,0 };
	void f87_E(i8 /* text */);
	void f68_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f148_comma(void);
const i1 c02_s00cc[] = { 0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00cd[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s00ce[] = { 0x20,0x2a,0x2f,0 };
	void f87_E(i8 /* text */);
const i1 c02_s00cf[] = { 0x76,0x6f,0x69,0x64,0 };
	void f87_E(i8 /* text */);
const i1 c02_s00d0[] = { 0x29,0 };
	void f87_E(i8 /* text */);

// EmitFunctionSignature workspace at ws+3992 length ws+24
void f147_EmitFunctionSignature(i8 p2244 /* subr */) {
	*(i8*)(intptr_t)(ws+3992) = p2244; /*subr */

	i8 v2245 = (i8)(intptr_t)c02_s00c7;
	i8 v2246 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2246)(v2245);

	i1 v2247 = (i1)+1;
	i8 v2248 = (i8)(intptr_t)(ws+4000);
	*(i1*)(intptr_t)v2248 = v2247;


	i1 v2256 = (i1)+0;
	i8 v2257 = (i8)(intptr_t)(ws+4001);
	*(i1*)(intptr_t)v2257 = v2256;

c02_01f9:;

	i8 v2258 = (i8)(intptr_t)(ws+4001);
	i1 v2259 = *(i1*)(intptr_t)v2258;
	i8 v2260 = (i8)(intptr_t)(ws+3992);
	i8 v2261 = *(i8*)(intptr_t)v2260;
	i8 v2262 = v2261+(+49);
	i1 v2263 = *(i1*)(intptr_t)v2262;
	if (v2259==v2263) goto c02_01fc; else goto c02_01fb;

c02_01fb:;

	i8 v2264 = (i8)(intptr_t)(ws+3992);
	i8 v2265 = *(i8*)(intptr_t)v2264;
	i8 v2266 = (i8)(intptr_t)(ws+4001);
	i1 v2267 = *(i1*)(intptr_t)v2266;
	i8 v2268 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v2269;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2268)(&v2269, v2267, v2265);
	i8 v2270 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v2270 = v2269;

	i8 v2271 = (i8)(intptr_t)(f148_comma);

	((void(*)(void))(intptr_t)v2271)();

	i8 v2272 = (i8)(intptr_t)c02_s00c9;
	i8 v2273 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2273)(v2272);

	i8 v2274 = (i8)(intptr_t)(ws+4008);
	i8 v2275 = *(i8*)(intptr_t)v2274;
	i8 v2276 = v2275+(+14);
	i1 v2277 = *(i1*)(intptr_t)v2276;
	i8 v2278 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2278)(v2277);

	i8 v2279 = (i8)(intptr_t)c02_s00ca;
	i8 v2280 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2280)(v2279);

	i8 v2281 = (i8)(intptr_t)(ws+4008);
	i8 v2282 = *(i8*)(intptr_t)v2281;
	i8 v2283 = v2282+(+16);
	i8 v2284 = *(i8*)(intptr_t)v2283;
	i8 v2285 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2285)(v2284);

	i8 v2286 = (i8)(intptr_t)c02_s00cb;
	i8 v2287 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2287)(v2286);

	i8 v2288 = (i8)(intptr_t)(ws+4001);
	i1 v2289 = *(i1*)(intptr_t)v2288;
	i1 v2290 = v2289+(+1);
	i8 v2291 = (i8)(intptr_t)(ws+4001);
	*(i1*)(intptr_t)v2291 = v2290;

	goto c02_01f9;

c02_01fc:;

	i8 v2292 = (i8)(intptr_t)(ws+3992);
	i8 v2293 = *(i8*)(intptr_t)v2292;
	i8 v2294 = v2293+(+48);
	i1 v2295 = *(i1*)(intptr_t)v2294;
	i8 v2296 = (i8)(intptr_t)(ws+4001);
	*(i1*)(intptr_t)v2296 = v2295;

c02_01ff:;

	i8 v2297 = (i8)(intptr_t)(ws+4001);
	i1 v2298 = *(i1*)(intptr_t)v2297;
	i1 v2299 = (i1)+0;
	if (v2298==v2299) goto c02_0202; else goto c02_0201;

c02_0201:;

	i8 v2300 = (i8)(intptr_t)(ws+4001);
	i1 v2301 = *(i1*)(intptr_t)v2300;
	i1 v2302 = v2301+(-1);
	i8 v2303 = (i8)(intptr_t)(ws+4001);
	*(i1*)(intptr_t)v2303 = v2302;

	i8 v2304 = (i8)(intptr_t)(ws+3992);
	i8 v2305 = *(i8*)(intptr_t)v2304;
	i8 v2306 = (i8)(intptr_t)(ws+4001);
	i1 v2307 = *(i1*)(intptr_t)v2306;
	i8 v2308 = (i8)(intptr_t)(f68_GetInputParameter);
	i8 v2309;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2308)(&v2309, v2307, v2305);
	i8 v2310 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v2310 = v2309;

	i8 v2311 = (i8)(intptr_t)(f148_comma);

	((void(*)(void))(intptr_t)v2311)();

	i8 v2312 = (i8)(intptr_t)c02_s00cc;
	i8 v2313 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2313)(v2312);

	i8 v2314 = (i8)(intptr_t)(ws+4008);
	i8 v2315 = *(i8*)(intptr_t)v2314;
	i8 v2316 = v2315+(+14);
	i1 v2317 = *(i1*)(intptr_t)v2316;
	i8 v2318 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2318)(v2317);

	i8 v2319 = (i8)(intptr_t)c02_s00cd;
	i8 v2320 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2320)(v2319);

	i8 v2321 = (i8)(intptr_t)(ws+4008);
	i8 v2322 = *(i8*)(intptr_t)v2321;
	i8 v2323 = v2322+(+16);
	i8 v2324 = *(i8*)(intptr_t)v2323;
	i8 v2325 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2325)(v2324);

	i8 v2326 = (i8)(intptr_t)c02_s00ce;
	i8 v2327 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2327)(v2326);

	goto c02_01ff;

c02_0202:;

	i8 v2328 = (i8)(intptr_t)(ws+3992);
	i8 v2329 = *(i8*)(intptr_t)v2328;
	i8 v2330 = v2329+(+48);
	i1 v2331 = *(i1*)(intptr_t)v2330;
	i8 v2332 = (i8)(intptr_t)(ws+3992);
	i8 v2333 = *(i8*)(intptr_t)v2332;
	i8 v2334 = v2333+(+49);
	i1 v2335 = *(i1*)(intptr_t)v2334;
	i1 v2336 = v2331+v2335;
	i1 v2337 = (i1)+0;
	if (v2336==v2337) goto c02_0206; else goto c02_0207;

c02_0206:;

	i8 v2338 = (i8)(intptr_t)c02_s00cf;
	i8 v2339 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2339)(v2338);

c02_0207:;

c02_0203:;

	i8 v2340 = (i8)(intptr_t)c02_s00d0;
	i8 v2341 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2341)(v2340);

endsub:;
}
	void f101_EmitterOpenStream(i8 /* subr */);
const i1 c02_s00d1[] = { 0x09,0x76,0x6f,0x69,0x64,0x20,0 };
	void f87_E(i8 /* text */);
	void f99_E_subref(i8 /* subr */);
	void f147_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s00d2[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f102_EmitterCloseStream(void);
	void f99_E_subref(i8 /* subr */);

// E_subref_sig workspace at ws+3960 length ws+8
void f149_E_subref_sig(i8 p2342 /* subr */) {
	*(i8*)(intptr_t)(ws+3960) = p2342; /*subr */

	i8 v2343 = (i8)(intptr_t)(ws+40);
	i8 v2344 = *(i8*)(intptr_t)v2343;
	i8 v2345 = (i8)(intptr_t)(f101_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v2345)(v2344);

	i8 v2346 = (i8)(intptr_t)c02_s00d1;
	i8 v2347 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2347)(v2346);

	i8 v2348 = (i8)(intptr_t)(ws+3960);
	i8 v2349 = *(i8*)(intptr_t)v2348;
	i8 v2350 = (i8)(intptr_t)(f99_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v2350)(v2349);

	i8 v2351 = (i8)(intptr_t)(ws+3960);
	i8 v2352 = *(i8*)(intptr_t)v2351;
	i8 v2353 = (i8)(intptr_t)(f147_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v2353)(v2352);

	i8 v2354 = (i8)(intptr_t)c02_s00d2;
	i8 v2355 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2355)(v2354);

	i8 v2356 = (i8)(intptr_t)(f102_EmitterCloseStream);

	((void(*)(void))(intptr_t)v2356)();

	i8 v2357 = (i8)(intptr_t)(ws+3960);
	i8 v2358 = *(i8*)(intptr_t)v2357;
	i8 v2359 = (i8)(intptr_t)(f99_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v2359)(v2358);

endsub:;
}
const i1 c02_s00d3[] = { 0x28,0x69,0x31,0x2a,0x29,0 };
	void f87_E(i8 /* text */);
	void f100_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);
	void f92_E_i16(i2 /* value */);
	void f100_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);

// E_symref workspace at ws+3976 length ws+10
void f150_E_symref(i2 p2360 /* off */, i8 p2361 /* sym */) {
	*(i8*)(intptr_t)(ws+3976) = p2361; /*sym */
	*(i2*)(intptr_t)(ws+3984) = p2360; /*off */

	i8 v2362 = (i8)(intptr_t)(ws+3976);
	i8 v2363 = *(i8*)(intptr_t)v2362;
	i8 v2364 = v2363+(+10);
	i1 v2365 = *(i1*)(intptr_t)v2364;
	i1 v2366 = (i1)+255;
	if (v2365==v2366) goto c02_020b; else goto c02_020c;

c02_020b:;

	i8 v2367 = (i8)(intptr_t)c02_s00d3;
	i8 v2368 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2368)(v2367);

	i8 v2369 = (i8)(intptr_t)(ws+3976);
	i8 v2370 = *(i8*)(intptr_t)v2369;
	i8 v2371 = *(i8*)(intptr_t)v2370;
	i8 v2372 = v2371+(+8);
	i2 v2373 = *(i2*)(intptr_t)v2372;
	i8 v2374 = (i8)(intptr_t)(ws+3976);
	i8 v2375 = *(i8*)(intptr_t)v2374;
	i8 v2376 = v2375+(+10);
	i1 v2377 = *(i1*)(intptr_t)v2376;
	i8 v2378 = (i8)(intptr_t)(ws+3976);
	i8 v2379 = *(i8*)(intptr_t)v2378;
	i8 v2380 = v2379+(+12);
	i2 v2381 = *(i2*)(intptr_t)v2380;
	i8 v2382 = (i8)(intptr_t)(f100_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v2382)(v2381, v2377, v2373);

	i8 v2383 = (i8)(intptr_t)(ws+3984);
	i2 v2384 = *(i2*)(intptr_t)v2383;
	i2 v2385 = (i2)+0;
	if (v2384==v2385) goto c02_0211; else goto c02_0210;

c02_0210:;

	i8 v2386 = (i8)(intptr_t)(ws+3984);
	i2 v2387 = *(i2*)(intptr_t)v2386;
	i8 v2388 = (i8)(intptr_t)(f92_E_i16);

	((void(*)(i2 /* value */))(intptr_t)v2388)(v2387);

c02_0211:;

c02_020d:;

	goto c02_0208;

c02_020c:;

	i8 v2389 = (i8)(intptr_t)(ws+3976);
	i8 v2390 = *(i8*)(intptr_t)v2389;
	i8 v2391 = *(i8*)(intptr_t)v2390;
	i8 v2392 = v2391+(+8);
	i2 v2393 = *(i2*)(intptr_t)v2392;
	i8 v2394 = (i8)(intptr_t)(ws+3976);
	i8 v2395 = *(i8*)(intptr_t)v2394;
	i8 v2396 = v2395+(+10);
	i1 v2397 = *(i1*)(intptr_t)v2396;
	i8 v2398 = (i8)(intptr_t)(ws+3976);
	i8 v2399 = *(i8*)(intptr_t)v2398;
	i8 v2400 = v2399+(+12);
	i2 v2401 = *(i2*)(intptr_t)v2400;
	i8 v2402 = (i8)(intptr_t)(ws+3984);
	i2 v2403 = *(i2*)(intptr_t)v2402;
	i2 v2404 = v2401+v2403;
	i8 v2405 = (i8)(intptr_t)(f100_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v2405)(v2404, v2397, v2393);

c02_0208:;

endsub:;
}

// ArchEndInstruction workspace at ws+3848 length ws+0
void f151_ArchEndInstruction(void) {

endsub:;
}
	void f84_E_nl(void);

// ArchEndGroup workspace at ws+3840 length ws+0
void f152_ArchEndGroup(void) {

	i8 v2406 = (i8)(intptr_t)(f84_E_nl);

	((void(*)(void))(intptr_t)v2406)();

endsub:;
}
const i1 c02_s00d4[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f63_SimpleError(i8 /* s */);

// PushVid workspace at ws+3992 length ws+2
void f153_PushVid(i2 p2407 /* vid */) {
	*(i2*)(intptr_t)(ws+3992) = p2407; /*vid */

	i8 v2408 = (i8)(intptr_t)(ws+3584);
	i1 v2409 = *(i1*)(intptr_t)v2408;
	i1 v2410 = (i1)+64;
	if (v2409==v2410) goto c02_0215; else goto c02_0216;

c02_0215:;

	i8 v2411 = (i8)(intptr_t)c02_s00d4;
	i8 v2412 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2412)(v2411);

c02_0216:;

c02_0212:;

	i8 v2413 = (i8)(intptr_t)(ws+3992);
	i2 v2414 = *(i2*)(intptr_t)v2413;
	i8 v2415 = (i8)(intptr_t)(ws+3456);
	i8 v2416 = (i8)(intptr_t)(ws+3584);
	i1 v2417 = *(i1*)(intptr_t)v2416;
	i8 v2418 = v2417;
	i1 v2419 = (i1)+1;
	i8 v2420 = ((i8)v2418)<<v2419;
	i8 v2421 = v2415+v2420;
	*(i2*)(intptr_t)v2421 = v2414;

	i8 v2422 = (i8)(intptr_t)(ws+3584);
	i1 v2423 = *(i1*)(intptr_t)v2422;
	i1 v2424 = v2423+(+1);
	i8 v2425 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v2425 = v2424;

endsub:;
}
	void f153_PushVid(i2 /* vid */);

// Push workspace at ws+3984 length ws+2
void f154_Push(i2* p2426 /* vid */) {

	i8 v2427 = (i8)(intptr_t)(ws+3586);
	i2 v2428 = *(i2*)(intptr_t)v2427;
	i8 v2429 = (i8)(intptr_t)(ws+3984);
	*(i2*)(intptr_t)v2429 = v2428;

	i8 v2430 = (i8)(intptr_t)(ws+3586);
	i2 v2431 = *(i2*)(intptr_t)v2430;
	i2 v2432 = v2431+(+1);
	i8 v2433 = (i8)(intptr_t)(ws+3586);
	*(i2*)(intptr_t)v2433 = v2432;

	i8 v2434 = (i8)(intptr_t)(ws+3984);
	i2 v2435 = *(i2*)(intptr_t)v2434;
	i8 v2436 = (i8)(intptr_t)(f153_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v2436)(v2435);

endsub:;
	*p2426 = *(i2*)(intptr_t)(ws+3984);
}
const i1 c02_s00d5[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f63_SimpleError(i8 /* s */);

// CheckVarstackUnderflow workspace at ws+4000 length ws+0
void f155_CheckVarstackUnderflow(void) {

	i8 v2437 = (i8)(intptr_t)(ws+3584);
	i1 v2438 = *(i1*)(intptr_t)v2437;
	i1 v2439 = (i1)+0;
	if (v2438==v2439) goto c02_021a; else goto c02_021b;

c02_021a:;

	i8 v2440 = (i8)(intptr_t)c02_s00d5;
	i8 v2441 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2441)(v2440);

c02_021b:;

c02_0217:;

endsub:;
}
	void f155_CheckVarstackUnderflow(void);

// Pop workspace at ws+3992 length ws+2
void f156_Pop(i2* p2442 /* vid */) {

	i8 v2443 = (i8)(intptr_t)(f155_CheckVarstackUnderflow);

	((void(*)(void))(intptr_t)v2443)();

	i8 v2444 = (i8)(intptr_t)(ws+3584);
	i1 v2445 = *(i1*)(intptr_t)v2444;
	i1 v2446 = v2445+(-1);
	i8 v2447 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v2447 = v2446;

	i8 v2448 = (i8)(intptr_t)(ws+3456);
	i8 v2449 = (i8)(intptr_t)(ws+3584);
	i1 v2450 = *(i1*)(intptr_t)v2449;
	i8 v2451 = v2450;
	i1 v2452 = (i1)+1;
	i8 v2453 = ((i8)v2451)<<v2452;
	i8 v2454 = v2448+v2453;
	i2 v2455 = *(i2*)(intptr_t)v2454;
	i8 v2456 = (i8)(intptr_t)(ws+3992);
	*(i2*)(intptr_t)v2456 = v2455;

endsub:;
	*p2442 = *(i2*)(intptr_t)(ws+3992);
}

// ArchEmitMove workspace at ws+3880 length ws+2
void f158_ArchEmitMove(i1 p2469 /* dest */, i1 p2470 /* src */) {
	*(i1*)(intptr_t)(ws+3880) = p2470; /*src */
	*(i1*)(intptr_t)(ws+3881) = p2469; /*dest */

endsub:;
}
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f156_Pop(i2* /* vid */);
	void f69_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
const i1 c02_s00d6[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00d7[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00d8[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
const i1 c02_s00d9[] = { 0x0a,0x09,0x28,0x28,0x76,0x6f,0x69,0x64,0x28,0x2a,0x29,0 };
	void f87_E(i8 /* text */);
	void f147_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s00da[] = { 0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00db[] = { 0x29,0x28,0 };
	void f87_E(i8 /* text */);
const i1 c02_s00dc[] = { 0x2c,0x20,0 };
	void f87_E(i8 /* text */);

// comma workspace at ws+3992 length ws+0
void f160_comma(void) {

	i8 v2543 = (i8)(intptr_t)(ws+3984);
	i1 v2544 = *(i1*)(intptr_t)v2543;
	i1 v2545 = (i1)+0;
	if (v2544==v2545) goto c02_0225; else goto c02_0226;

c02_0225:;

	i8 v2546 = (i8)(intptr_t)c02_s00dc;
	i8 v2547 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2547)(v2546);

c02_0226:;

c02_0222:;

	i1 v2548 = (i1)+0;
	i8 v2549 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v2549 = v2548;

endsub:;
}
	void f69_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f160_comma(void);
const i1 c02_s00dd[] = { 0x26,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
	void f156_Pop(i2* /* vid */);
	void f160_comma(void);
const i1 c02_s00de[] = { 0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00df[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f153_PushVid(i2 /* vid */);

// Call workspace at ws+3952 length ws+36
void f159_Call(i2 p2471 /* subrid */) {
	*(i2*)(intptr_t)(ws+3952) = p2471; /*subrid */

	i8 v2472 = (i8)(intptr_t)(ws+3952);
	i2 v2473 = *(i2*)(intptr_t)v2472;
	i8 v2474 = (i8)(intptr_t)(f60_FindSubr);
	i8 v2475;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v2474)(&v2475, v2473);
	i8 v2476 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v2476 = v2475;

	i8 v2477 = (i8)(intptr_t)(f156_Pop);
	i2 v2478;

	((void(*)(i2* /* vid */))(intptr_t)v2477)(&v2478);
	i8 v2479 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v2479 = v2478;

	i8 v2480 = (i8)(intptr_t)(ws+3586);
	i2 v2481 = *(i2*)(intptr_t)v2480;
	i8 v2482 = (i8)(intptr_t)(ws+3970);
	*(i2*)(intptr_t)v2482 = v2481;

	i8 v2483 = (i8)(intptr_t)(ws+3586);
	i2 v2484 = *(i2*)(intptr_t)v2483;
	i8 v2485 = (i8)(intptr_t)(ws+3960);
	i8 v2486 = *(i8*)(intptr_t)v2485;
	i8 v2487 = v2486+(+49);
	i1 v2488 = *(i1*)(intptr_t)v2487;
	i2 v2489 = v2488;
	i2 v2490 = v2484+v2489;
	i8 v2491 = (i8)(intptr_t)(ws+3586);
	*(i2*)(intptr_t)v2491 = v2490;

	i1 v2492 = (i1)+0;
	i8 v2493 = (i8)(intptr_t)(ws+3972);
	*(i1*)(intptr_t)v2493 = v2492;

c02_021e:;

	i8 v2494 = (i8)(intptr_t)(ws+3972);
	i1 v2495 = *(i1*)(intptr_t)v2494;
	i8 v2496 = (i8)(intptr_t)(ws+3960);
	i8 v2497 = *(i8*)(intptr_t)v2496;
	i8 v2498 = v2497+(+49);
	i1 v2499 = *(i1*)(intptr_t)v2498;
	if (v2495==v2499) goto c02_0221; else goto c02_0220;

c02_0220:;

	i8 v2500 = (i8)(intptr_t)(ws+3960);
	i8 v2501 = *(i8*)(intptr_t)v2500;
	i8 v2502 = (i8)(intptr_t)(ws+3972);
	i1 v2503 = *(i1*)(intptr_t)v2502;
	i8 v2504 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v2505;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2504)(&v2505, v2503, v2501);
	i8 v2506 = (i8)(intptr_t)(ws+3976);
	*(i8*)(intptr_t)v2506 = v2505;

	i8 v2507 = (i8)(intptr_t)c02_s00d6;
	i8 v2508 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2508)(v2507);

	i8 v2509 = (i8)(intptr_t)(ws+3976);
	i8 v2510 = *(i8*)(intptr_t)v2509;
	i8 v2511 = v2510+(+14);
	i1 v2512 = *(i1*)(intptr_t)v2511;
	i8 v2513 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2513)(v2512);

	i8 v2514 = (i8)(intptr_t)c02_s00d7;
	i8 v2515 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2515)(v2514);

	i8 v2516 = (i8)(intptr_t)(ws+3970);
	i2 v2517 = *(i2*)(intptr_t)v2516;
	i8 v2518 = (i8)(intptr_t)(ws+3972);
	i1 v2519 = *(i1*)(intptr_t)v2518;
	i2 v2520 = v2519;
	i2 v2521 = v2517+v2520;
	i8 v2522 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2522)(v2521);

	i8 v2523 = (i8)(intptr_t)c02_s00d8;
	i8 v2524 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2524)(v2523);

	i8 v2525 = (i8)(intptr_t)(ws+3972);
	i1 v2526 = *(i1*)(intptr_t)v2525;
	i1 v2527 = v2526+(+1);
	i8 v2528 = (i8)(intptr_t)(ws+3972);
	*(i1*)(intptr_t)v2528 = v2527;

	goto c02_021e;

c02_0221:;

	i8 v2529 = (i8)(intptr_t)c02_s00d9;
	i8 v2530 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2530)(v2529);

	i8 v2531 = (i8)(intptr_t)(ws+3960);
	i8 v2532 = *(i8*)(intptr_t)v2531;
	i8 v2533 = (i8)(intptr_t)(f147_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v2533)(v2532);

	i8 v2534 = (i8)(intptr_t)c02_s00da;
	i8 v2535 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2535)(v2534);

	i8 v2536 = (i8)(intptr_t)(ws+3968);
	i2 v2537 = *(i2*)(intptr_t)v2536;
	i8 v2538 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2538)(v2537);

	i8 v2539 = (i8)(intptr_t)c02_s00db;
	i8 v2540 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2540)(v2539);

	i1 v2541 = (i1)+1;
	i8 v2542 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v2542 = v2541;


	i1 v2550 = (i1)+0;
	i8 v2551 = (i8)(intptr_t)(ws+3972);
	*(i1*)(intptr_t)v2551 = v2550;

c02_0229:;

	i8 v2552 = (i8)(intptr_t)(ws+3972);
	i1 v2553 = *(i1*)(intptr_t)v2552;
	i8 v2554 = (i8)(intptr_t)(ws+3960);
	i8 v2555 = *(i8*)(intptr_t)v2554;
	i8 v2556 = v2555+(+49);
	i1 v2557 = *(i1*)(intptr_t)v2556;
	if (v2553==v2557) goto c02_022c; else goto c02_022b;

c02_022b:;

	i8 v2558 = (i8)(intptr_t)(ws+3960);
	i8 v2559 = *(i8*)(intptr_t)v2558;
	i8 v2560 = (i8)(intptr_t)(ws+3972);
	i1 v2561 = *(i1*)(intptr_t)v2560;
	i8 v2562 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v2563;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2562)(&v2563, v2561, v2559);
	i8 v2564 = (i8)(intptr_t)(ws+3976);
	*(i8*)(intptr_t)v2564 = v2563;

	i8 v2565 = (i8)(intptr_t)(f160_comma);

	((void(*)(void))(intptr_t)v2565)();

	i8 v2566 = (i8)(intptr_t)c02_s00dd;
	i8 v2567 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2567)(v2566);

	i8 v2568 = (i8)(intptr_t)(ws+3970);
	i2 v2569 = *(i2*)(intptr_t)v2568;
	i8 v2570 = (i8)(intptr_t)(ws+3972);
	i1 v2571 = *(i1*)(intptr_t)v2570;
	i2 v2572 = v2571;
	i2 v2573 = v2569+v2572;
	i8 v2574 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2574)(v2573);

	i8 v2575 = (i8)(intptr_t)(ws+3972);
	i1 v2576 = *(i1*)(intptr_t)v2575;
	i1 v2577 = v2576+(+1);
	i8 v2578 = (i8)(intptr_t)(ws+3972);
	*(i1*)(intptr_t)v2578 = v2577;

	goto c02_0229;

c02_022c:;

	i1 v2579 = (i1)+0;
	i8 v2580 = (i8)(intptr_t)(ws+3972);
	*(i1*)(intptr_t)v2580 = v2579;

c02_022f:;

	i8 v2581 = (i8)(intptr_t)(ws+3972);
	i1 v2582 = *(i1*)(intptr_t)v2581;
	i8 v2583 = (i8)(intptr_t)(ws+3960);
	i8 v2584 = *(i8*)(intptr_t)v2583;
	i8 v2585 = v2584+(+48);
	i1 v2586 = *(i1*)(intptr_t)v2585;
	if (v2582==v2586) goto c02_0232; else goto c02_0231;

c02_0231:;

	i8 v2587 = (i8)(intptr_t)(f156_Pop);
	i2 v2588;

	((void(*)(i2* /* vid */))(intptr_t)v2587)(&v2588);
	i8 v2589 = (i8)(intptr_t)(ws+3986);
	*(i2*)(intptr_t)v2589 = v2588;

	i8 v2590 = (i8)(intptr_t)(f160_comma);

	((void(*)(void))(intptr_t)v2590)();

	i8 v2591 = (i8)(intptr_t)c02_s00de;
	i8 v2592 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2592)(v2591);

	i8 v2593 = (i8)(intptr_t)(ws+3986);
	i2 v2594 = *(i2*)(intptr_t)v2593;
	i8 v2595 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2595)(v2594);

	i8 v2596 = (i8)(intptr_t)(ws+3972);
	i1 v2597 = *(i1*)(intptr_t)v2596;
	i1 v2598 = v2597+(+1);
	i8 v2599 = (i8)(intptr_t)(ws+3972);
	*(i1*)(intptr_t)v2599 = v2598;

	goto c02_022f;

c02_0232:;

	i8 v2600 = (i8)(intptr_t)c02_s00df;
	i8 v2601 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2601)(v2600);

	i1 v2602 = (i1)+0;
	i8 v2603 = (i8)(intptr_t)(ws+3972);
	*(i1*)(intptr_t)v2603 = v2602;

c02_0235:;

	i8 v2604 = (i8)(intptr_t)(ws+3972);
	i1 v2605 = *(i1*)(intptr_t)v2604;
	i8 v2606 = (i8)(intptr_t)(ws+3960);
	i8 v2607 = *(i8*)(intptr_t)v2606;
	i8 v2608 = v2607+(+49);
	i1 v2609 = *(i1*)(intptr_t)v2608;
	if (v2605==v2609) goto c02_0238; else goto c02_0237;

c02_0237:;

	i8 v2610 = (i8)(intptr_t)(ws+3970);
	i2 v2611 = *(i2*)(intptr_t)v2610;
	i8 v2612 = (i8)(intptr_t)(ws+3972);
	i1 v2613 = *(i1*)(intptr_t)v2612;
	i2 v2614 = v2613;
	i2 v2615 = v2611+v2614;
	i8 v2616 = (i8)(intptr_t)(ws+3986);
	*(i2*)(intptr_t)v2616 = v2615;

	i8 v2617 = (i8)(intptr_t)(ws+3986);
	i2 v2618 = *(i2*)(intptr_t)v2617;
	i8 v2619 = (i8)(intptr_t)(f153_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v2619)(v2618);

	i8 v2620 = (i8)(intptr_t)(ws+3972);
	i1 v2621 = *(i1*)(intptr_t)v2620;
	i1 v2622 = v2621+(+1);
	i8 v2623 = (i8)(intptr_t)(ws+3972);
	*(i1*)(intptr_t)v2623 = v2622;

	goto c02_0235;

c02_0238:;

endsub:;
}
	void f154_Push(i2* /* vid */);
const i1 c02_s00e0[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00e1[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00e2[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00e3[] = { 0x29,0 };
	void f87_E(i8 /* text */);
	void f93_E_i32(i4 /* value */);
const i1 c02_s00e4[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// LoadConstant workspace at ws+3952 length ws+10
void f161_LoadConstant(i4 p2624 /* value */, i1 p2625 /* width */) {
	*(i1*)(intptr_t)(ws+3952) = p2625; /*width */
	*(i4*)(intptr_t)(ws+3956) = p2624; /*value */

	i8 v2626 = (i8)(intptr_t)(f154_Push);
	i2 v2627;

	((void(*)(i2* /* vid */))(intptr_t)v2626)(&v2627);
	i8 v2628 = (i8)(intptr_t)(ws+3960);
	*(i2*)(intptr_t)v2628 = v2627;

	i8 v2629 = (i8)(intptr_t)c02_s00e0;
	i8 v2630 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2630)(v2629);

	i8 v2631 = (i8)(intptr_t)(ws+3952);
	i1 v2632 = *(i1*)(intptr_t)v2631;
	i8 v2633 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2633)(v2632);

	i8 v2634 = (i8)(intptr_t)c02_s00e1;
	i8 v2635 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2635)(v2634);

	i8 v2636 = (i8)(intptr_t)(ws+3960);
	i2 v2637 = *(i2*)(intptr_t)v2636;
	i8 v2638 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2638)(v2637);

	i8 v2639 = (i8)(intptr_t)c02_s00e2;
	i8 v2640 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2640)(v2639);

	i8 v2641 = (i8)(intptr_t)(ws+3952);
	i1 v2642 = *(i1*)(intptr_t)v2641;
	i8 v2643 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2643)(v2642);

	i8 v2644 = (i8)(intptr_t)c02_s00e3;
	i8 v2645 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2645)(v2644);

	i8 v2646 = (i8)(intptr_t)(ws+3956);
	i4 v2647 = *(i4*)(intptr_t)v2646;
	i8 v2648 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v2648)(v2647);

	i8 v2649 = (i8)(intptr_t)c02_s00e4;
	i8 v2650 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2650)(v2649);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f156_Pop(i2* /* vid */);
const i1 c02_s00e5[] = { 0x09,0x2a,0x28,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00e6[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00e7[] = { 0x20,0x3d,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00e8[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// StoreVV workspace at ws+3952 length ws+6
void f162_StoreVV(i1 p2651 /* width */) {
	*(i1*)(intptr_t)(ws+3952) = p2651; /*width */

	i8 v2652 = (i8)(intptr_t)(f156_Pop);
	i2 v2653;

	((void(*)(i2* /* vid */))(intptr_t)v2652)(&v2653);
	i8 v2654 = (i8)(intptr_t)(ws+3954);
	*(i2*)(intptr_t)v2654 = v2653;

	i8 v2655 = (i8)(intptr_t)(f156_Pop);
	i2 v2656;

	((void(*)(i2* /* vid */))(intptr_t)v2655)(&v2656);
	i8 v2657 = (i8)(intptr_t)(ws+3956);
	*(i2*)(intptr_t)v2657 = v2656;

	i8 v2658 = (i8)(intptr_t)c02_s00e5;
	i8 v2659 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2659)(v2658);

	i8 v2660 = (i8)(intptr_t)(ws+3952);
	i1 v2661 = *(i1*)(intptr_t)v2660;
	i8 v2662 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2662)(v2661);

	i8 v2663 = (i8)(intptr_t)c02_s00e6;
	i8 v2664 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2664)(v2663);

	i8 v2665 = (i8)(intptr_t)(ws+3954);
	i2 v2666 = *(i2*)(intptr_t)v2665;
	i8 v2667 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2667)(v2666);

	i8 v2668 = (i8)(intptr_t)c02_s00e7;
	i8 v2669 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2669)(v2668);

	i8 v2670 = (i8)(intptr_t)(ws+3956);
	i2 v2671 = *(i2*)(intptr_t)v2670;
	i8 v2672 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2672)(v2671);

	i8 v2673 = (i8)(intptr_t)c02_s00e8;
	i8 v2674 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2674)(v2673);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f154_Push(i2* /* vid */);
const i1 c02_s00e9[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00ea[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00eb[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00ec[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00ed[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// LoadVV workspace at ws+3952 length ws+6
void f163_LoadVV(i1 p2675 /* width */) {
	*(i1*)(intptr_t)(ws+3952) = p2675; /*width */

	i8 v2676 = (i8)(intptr_t)(f156_Pop);
	i2 v2677;

	((void(*)(i2* /* vid */))(intptr_t)v2676)(&v2677);
	i8 v2678 = (i8)(intptr_t)(ws+3954);
	*(i2*)(intptr_t)v2678 = v2677;

	i8 v2679 = (i8)(intptr_t)(f154_Push);
	i2 v2680;

	((void(*)(i2* /* vid */))(intptr_t)v2679)(&v2680);
	i8 v2681 = (i8)(intptr_t)(ws+3956);
	*(i2*)(intptr_t)v2681 = v2680;

	i8 v2682 = (i8)(intptr_t)c02_s00e9;
	i8 v2683 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2683)(v2682);

	i8 v2684 = (i8)(intptr_t)(ws+3952);
	i1 v2685 = *(i1*)(intptr_t)v2684;
	i8 v2686 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2686)(v2685);

	i8 v2687 = (i8)(intptr_t)c02_s00ea;
	i8 v2688 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2688)(v2687);

	i8 v2689 = (i8)(intptr_t)(ws+3956);
	i2 v2690 = *(i2*)(intptr_t)v2689;
	i8 v2691 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2691)(v2690);

	i8 v2692 = (i8)(intptr_t)c02_s00eb;
	i8 v2693 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2693)(v2692);

	i8 v2694 = (i8)(intptr_t)(ws+3952);
	i1 v2695 = *(i1*)(intptr_t)v2694;
	i8 v2696 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2696)(v2695);

	i8 v2697 = (i8)(intptr_t)c02_s00ec;
	i8 v2698 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2698)(v2697);

	i8 v2699 = (i8)(intptr_t)(ws+3954);
	i2 v2700 = *(i2*)(intptr_t)v2699;
	i8 v2701 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2701)(v2700);

	i8 v2702 = (i8)(intptr_t)c02_s00ed;
	i8 v2703 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2703)(v2702);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f156_Pop(i2* /* vid */);
	void f154_Push(i2* /* vid */);
const i1 c02_s00ee[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00ef[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00f0[] = { 0x20,0x3d,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
	void f87_E(i8 /* text */);
const i1 c02_s00f1[] = { 0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00f2[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// Op2VV workspace at ws+3952 length ws+22
void f164_Op2VV(i8 p2704 /* op */, i1 p2705 /* width */) {
	*(i1*)(intptr_t)(ws+3952) = p2705; /*width */
	*(i8*)(intptr_t)(ws+3960) = p2704; /*op */

	i8 v2706 = (i8)(intptr_t)(f156_Pop);
	i2 v2707;

	((void(*)(i2* /* vid */))(intptr_t)v2706)(&v2707);
	i8 v2708 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v2708 = v2707;

	i8 v2709 = (i8)(intptr_t)(f156_Pop);
	i2 v2710;

	((void(*)(i2* /* vid */))(intptr_t)v2709)(&v2710);
	i8 v2711 = (i8)(intptr_t)(ws+3970);
	*(i2*)(intptr_t)v2711 = v2710;

	i8 v2712 = (i8)(intptr_t)(f154_Push);
	i2 v2713;

	((void(*)(i2* /* vid */))(intptr_t)v2712)(&v2713);
	i8 v2714 = (i8)(intptr_t)(ws+3972);
	*(i2*)(intptr_t)v2714 = v2713;

	i8 v2715 = (i8)(intptr_t)c02_s00ee;
	i8 v2716 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2716)(v2715);

	i8 v2717 = (i8)(intptr_t)(ws+3952);
	i1 v2718 = *(i1*)(intptr_t)v2717;
	i8 v2719 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2719)(v2718);

	i8 v2720 = (i8)(intptr_t)c02_s00ef;
	i8 v2721 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2721)(v2720);

	i8 v2722 = (i8)(intptr_t)(ws+3972);
	i2 v2723 = *(i2*)(intptr_t)v2722;
	i8 v2724 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2724)(v2723);

	i8 v2725 = (i8)(intptr_t)c02_s00f0;
	i8 v2726 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2726)(v2725);

	i8 v2727 = (i8)(intptr_t)(ws+3970);
	i2 v2728 = *(i2*)(intptr_t)v2727;
	i8 v2729 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2729)(v2728);

	i8 v2730 = (i8)(intptr_t)(ws+3960);
	i8 v2731 = *(i8*)(intptr_t)v2730;
	i8 v2732 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2732)(v2731);

	i8 v2733 = (i8)(intptr_t)c02_s00f1;
	i8 v2734 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2734)(v2733);

	i8 v2735 = (i8)(intptr_t)(ws+3968);
	i2 v2736 = *(i2*)(intptr_t)v2735;
	i8 v2737 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2737)(v2736);

	i8 v2738 = (i8)(intptr_t)c02_s00f2;
	i8 v2739 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2739)(v2738);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f154_Push(i2* /* vid */);
const i1 c02_s00f3[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00f4[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00f5[] = { 0x20,0x3d,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
	void f87_E(i8 /* text */);
const i1 c02_s00f6[] = { 0x28,0 };
	void f87_E(i8 /* text */);
	void f93_E_i32(i4 /* value */);
const i1 c02_s00f7[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// Op2VC workspace at ws+3952 length ws+24
void f165_Op2VC(i4 p2740 /* rhs */, i8 p2741 /* op */, i1 p2742 /* width */) {
	*(i1*)(intptr_t)(ws+3952) = p2742; /*width */
	*(i8*)(intptr_t)(ws+3960) = p2741; /*op */
	*(i4*)(intptr_t)(ws+3968) = p2740; /*rhs */

	i8 v2743 = (i8)(intptr_t)(f156_Pop);
	i2 v2744;

	((void(*)(i2* /* vid */))(intptr_t)v2743)(&v2744);
	i8 v2745 = (i8)(intptr_t)(ws+3972);
	*(i2*)(intptr_t)v2745 = v2744;

	i8 v2746 = (i8)(intptr_t)(f154_Push);
	i2 v2747;

	((void(*)(i2* /* vid */))(intptr_t)v2746)(&v2747);
	i8 v2748 = (i8)(intptr_t)(ws+3974);
	*(i2*)(intptr_t)v2748 = v2747;

	i8 v2749 = (i8)(intptr_t)c02_s00f3;
	i8 v2750 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2750)(v2749);

	i8 v2751 = (i8)(intptr_t)(ws+3952);
	i1 v2752 = *(i1*)(intptr_t)v2751;
	i8 v2753 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2753)(v2752);

	i8 v2754 = (i8)(intptr_t)c02_s00f4;
	i8 v2755 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2755)(v2754);

	i8 v2756 = (i8)(intptr_t)(ws+3974);
	i2 v2757 = *(i2*)(intptr_t)v2756;
	i8 v2758 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2758)(v2757);

	i8 v2759 = (i8)(intptr_t)c02_s00f5;
	i8 v2760 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2760)(v2759);

	i8 v2761 = (i8)(intptr_t)(ws+3972);
	i2 v2762 = *(i2*)(intptr_t)v2761;
	i8 v2763 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2763)(v2762);

	i8 v2764 = (i8)(intptr_t)(ws+3960);
	i8 v2765 = *(i8*)(intptr_t)v2764;
	i8 v2766 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2766)(v2765);

	i8 v2767 = (i8)(intptr_t)c02_s00f6;
	i8 v2768 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2768)(v2767);

	i8 v2769 = (i8)(intptr_t)(ws+3968);
	i4 v2770 = *(i4*)(intptr_t)v2769;
	i8 v2771 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v2771)(v2770);

	i8 v2772 = (i8)(intptr_t)c02_s00f7;
	i8 v2773 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2773)(v2772);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f156_Pop(i2* /* vid */);
	void f154_Push(i2* /* vid */);
const i1 c02_s00f8[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00f9[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00fa[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00fb[] = { 0x29,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
	void f87_E(i8 /* text */);
const i1 c02_s00fc[] = { 0x28,0x73,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00fd[] = { 0x29,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00fe[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// Op2VVSigned workspace at ws+3952 length ws+22
void f166_Op2VVSigned(i8 p2774 /* op */, i1 p2775 /* width */) {
	*(i1*)(intptr_t)(ws+3952) = p2775; /*width */
	*(i8*)(intptr_t)(ws+3960) = p2774; /*op */

	i8 v2776 = (i8)(intptr_t)(f156_Pop);
	i2 v2777;

	((void(*)(i2* /* vid */))(intptr_t)v2776)(&v2777);
	i8 v2778 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v2778 = v2777;

	i8 v2779 = (i8)(intptr_t)(f156_Pop);
	i2 v2780;

	((void(*)(i2* /* vid */))(intptr_t)v2779)(&v2780);
	i8 v2781 = (i8)(intptr_t)(ws+3970);
	*(i2*)(intptr_t)v2781 = v2780;

	i8 v2782 = (i8)(intptr_t)(f154_Push);
	i2 v2783;

	((void(*)(i2* /* vid */))(intptr_t)v2782)(&v2783);
	i8 v2784 = (i8)(intptr_t)(ws+3972);
	*(i2*)(intptr_t)v2784 = v2783;

	i8 v2785 = (i8)(intptr_t)c02_s00f8;
	i8 v2786 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2786)(v2785);

	i8 v2787 = (i8)(intptr_t)(ws+3952);
	i1 v2788 = *(i1*)(intptr_t)v2787;
	i8 v2789 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2789)(v2788);

	i8 v2790 = (i8)(intptr_t)c02_s00f9;
	i8 v2791 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2791)(v2790);

	i8 v2792 = (i8)(intptr_t)(ws+3972);
	i2 v2793 = *(i2*)(intptr_t)v2792;
	i8 v2794 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2794)(v2793);

	i8 v2795 = (i8)(intptr_t)c02_s00fa;
	i8 v2796 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2796)(v2795);

	i8 v2797 = (i8)(intptr_t)(ws+3952);
	i1 v2798 = *(i1*)(intptr_t)v2797;
	i8 v2799 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2799)(v2798);

	i8 v2800 = (i8)(intptr_t)c02_s00fb;
	i8 v2801 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2801)(v2800);

	i8 v2802 = (i8)(intptr_t)(ws+3970);
	i2 v2803 = *(i2*)(intptr_t)v2802;
	i8 v2804 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2804)(v2803);

	i8 v2805 = (i8)(intptr_t)(ws+3960);
	i8 v2806 = *(i8*)(intptr_t)v2805;
	i8 v2807 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2807)(v2806);

	i8 v2808 = (i8)(intptr_t)c02_s00fc;
	i8 v2809 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2809)(v2808);

	i8 v2810 = (i8)(intptr_t)(ws+3952);
	i1 v2811 = *(i1*)(intptr_t)v2810;
	i8 v2812 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2812)(v2811);

	i8 v2813 = (i8)(intptr_t)c02_s00fd;
	i8 v2814 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2814)(v2813);

	i8 v2815 = (i8)(intptr_t)(ws+3968);
	i2 v2816 = *(i2*)(intptr_t)v2815;
	i8 v2817 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2817)(v2816);

	i8 v2818 = (i8)(intptr_t)c02_s00fe;
	i8 v2819 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2819)(v2818);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f154_Push(i2* /* vid */);
const i1 c02_s00ff[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0100[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0101[] = { 0x20,0x3d,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
	void f87_E(i8 /* text */);
const i1 c02_s0102[] = { 0x28,0 };
	void f87_E(i8 /* text */);
	void f93_E_i32(i4 /* value */);
const i1 c02_s0103[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// Op2VCSigned workspace at ws+3952 length ws+24
void f167_Op2VCSigned(i4 p2820 /* rhs */, i8 p2821 /* op */, i1 p2822 /* width */) {
	*(i1*)(intptr_t)(ws+3952) = p2822; /*width */
	*(i8*)(intptr_t)(ws+3960) = p2821; /*op */
	*(i4*)(intptr_t)(ws+3968) = p2820; /*rhs */

	i8 v2823 = (i8)(intptr_t)(f156_Pop);
	i2 v2824;

	((void(*)(i2* /* vid */))(intptr_t)v2823)(&v2824);
	i8 v2825 = (i8)(intptr_t)(ws+3972);
	*(i2*)(intptr_t)v2825 = v2824;

	i8 v2826 = (i8)(intptr_t)(f154_Push);
	i2 v2827;

	((void(*)(i2* /* vid */))(intptr_t)v2826)(&v2827);
	i8 v2828 = (i8)(intptr_t)(ws+3974);
	*(i2*)(intptr_t)v2828 = v2827;

	i8 v2829 = (i8)(intptr_t)c02_s00ff;
	i8 v2830 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2830)(v2829);

	i8 v2831 = (i8)(intptr_t)(ws+3952);
	i1 v2832 = *(i1*)(intptr_t)v2831;
	i8 v2833 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2833)(v2832);

	i8 v2834 = (i8)(intptr_t)c02_s0100;
	i8 v2835 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2835)(v2834);

	i8 v2836 = (i8)(intptr_t)(ws+3974);
	i2 v2837 = *(i2*)(intptr_t)v2836;
	i8 v2838 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2838)(v2837);

	i8 v2839 = (i8)(intptr_t)c02_s0101;
	i8 v2840 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2840)(v2839);

	i8 v2841 = (i8)(intptr_t)(ws+3972);
	i2 v2842 = *(i2*)(intptr_t)v2841;
	i8 v2843 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2843)(v2842);

	i8 v2844 = (i8)(intptr_t)(ws+3960);
	i8 v2845 = *(i8*)(intptr_t)v2844;
	i8 v2846 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2846)(v2845);

	i8 v2847 = (i8)(intptr_t)c02_s0102;
	i8 v2848 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2848)(v2847);

	i8 v2849 = (i8)(intptr_t)(ws+3968);
	i4 v2850 = *(i4*)(intptr_t)v2849;
	i8 v2851 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v2851)(v2850);

	i8 v2852 = (i8)(intptr_t)c02_s0103;
	i8 v2853 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2853)(v2852);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f154_Push(i2* /* vid */);
const i1 c02_s0104[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0105[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0106[] = { 0x20,0x3d,0x20,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s0107[] = { 0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0108[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// Op1V workspace at ws+3952 length ws+20
void f168_Op1V(i8 p2854 /* op */, i1 p2855 /* width */) {
	*(i1*)(intptr_t)(ws+3952) = p2855; /*width */
	*(i8*)(intptr_t)(ws+3960) = p2854; /*op */

	i8 v2856 = (i8)(intptr_t)(f156_Pop);
	i2 v2857;

	((void(*)(i2* /* vid */))(intptr_t)v2856)(&v2857);
	i8 v2858 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v2858 = v2857;

	i8 v2859 = (i8)(intptr_t)(f154_Push);
	i2 v2860;

	((void(*)(i2* /* vid */))(intptr_t)v2859)(&v2860);
	i8 v2861 = (i8)(intptr_t)(ws+3970);
	*(i2*)(intptr_t)v2861 = v2860;

	i8 v2862 = (i8)(intptr_t)c02_s0104;
	i8 v2863 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2863)(v2862);

	i8 v2864 = (i8)(intptr_t)(ws+3952);
	i1 v2865 = *(i1*)(intptr_t)v2864;
	i8 v2866 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2866)(v2865);

	i8 v2867 = (i8)(intptr_t)c02_s0105;
	i8 v2868 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2868)(v2867);

	i8 v2869 = (i8)(intptr_t)(ws+3970);
	i2 v2870 = *(i2*)(intptr_t)v2869;
	i8 v2871 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2871)(v2870);

	i8 v2872 = (i8)(intptr_t)c02_s0106;
	i8 v2873 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2873)(v2872);

	i8 v2874 = (i8)(intptr_t)(ws+3960);
	i8 v2875 = *(i8*)(intptr_t)v2874;
	i8 v2876 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2876)(v2875);

	i8 v2877 = (i8)(intptr_t)c02_s0107;
	i8 v2878 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2878)(v2877);

	i8 v2879 = (i8)(intptr_t)(ws+3968);
	i2 v2880 = *(i2*)(intptr_t)v2879;
	i8 v2881 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2881)(v2880);

	i8 v2882 = (i8)(intptr_t)c02_s0108;
	i8 v2883 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2883)(v2882);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f156_Pop(i2* /* vid */);
	void f154_Push(i2* /* vid */);
const i1 c02_s0109[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s010a[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s010b[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s010c[] = { 0x29,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s010d[] = { 0x29,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s010e[] = { 0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s010f[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// Shift workspace at ws+3952 length ws+30
void f169_Shift(i8 p2884 /* op */, i8 p2885 /* type */, i1 p2886 /* width */) {
	*(i1*)(intptr_t)(ws+3952) = p2886; /*width */
	*(i8*)(intptr_t)(ws+3960) = p2885; /*type */
	*(i8*)(intptr_t)(ws+3968) = p2884; /*op */

	i8 v2887 = (i8)(intptr_t)(f156_Pop);
	i2 v2888;

	((void(*)(i2* /* vid */))(intptr_t)v2887)(&v2888);
	i8 v2889 = (i8)(intptr_t)(ws+3976);
	*(i2*)(intptr_t)v2889 = v2888;

	i8 v2890 = (i8)(intptr_t)(f156_Pop);
	i2 v2891;

	((void(*)(i2* /* vid */))(intptr_t)v2890)(&v2891);
	i8 v2892 = (i8)(intptr_t)(ws+3978);
	*(i2*)(intptr_t)v2892 = v2891;

	i8 v2893 = (i8)(intptr_t)(f154_Push);
	i2 v2894;

	((void(*)(i2* /* vid */))(intptr_t)v2893)(&v2894);
	i8 v2895 = (i8)(intptr_t)(ws+3980);
	*(i2*)(intptr_t)v2895 = v2894;

	i8 v2896 = (i8)(intptr_t)c02_s0109;
	i8 v2897 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2897)(v2896);

	i8 v2898 = (i8)(intptr_t)(ws+3952);
	i1 v2899 = *(i1*)(intptr_t)v2898;
	i8 v2900 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2900)(v2899);

	i8 v2901 = (i8)(intptr_t)c02_s010a;
	i8 v2902 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2902)(v2901);

	i8 v2903 = (i8)(intptr_t)(ws+3980);
	i2 v2904 = *(i2*)(intptr_t)v2903;
	i8 v2905 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2905)(v2904);

	i8 v2906 = (i8)(intptr_t)c02_s010b;
	i8 v2907 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2907)(v2906);

	i8 v2908 = (i8)(intptr_t)(ws+3960);
	i8 v2909 = *(i8*)(intptr_t)v2908;
	i8 v2910 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2910)(v2909);

	i8 v2911 = (i8)(intptr_t)c02_s010c;
	i8 v2912 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2912)(v2911);

	i8 v2913 = (i8)(intptr_t)(ws+3978);
	i2 v2914 = *(i2*)(intptr_t)v2913;
	i8 v2915 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2915)(v2914);

	i8 v2916 = (i8)(intptr_t)c02_s010d;
	i8 v2917 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2917)(v2916);

	i8 v2918 = (i8)(intptr_t)(ws+3968);
	i8 v2919 = *(i8*)(intptr_t)v2918;
	i8 v2920 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2920)(v2919);

	i8 v2921 = (i8)(intptr_t)c02_s010e;
	i8 v2922 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2922)(v2921);

	i8 v2923 = (i8)(intptr_t)(ws+3976);
	i2 v2924 = *(i2*)(intptr_t)v2923;
	i8 v2925 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2925)(v2924);

	i8 v2926 = (i8)(intptr_t)c02_s010f;
	i8 v2927 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2927)(v2926);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f156_Pop(i2* /* vid */);
const i1 c02_s0110[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
	void f87_E(i8 /* text */);
const i1 c02_s0111[] = { 0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0112[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f87_E(i8 /* text */);
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s0113[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f87_E(i8 /* text */);
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s0114[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// Branch workspace at ws+3952 length ws+20
void f170_Branch(i8 p2928 /* op */, i8 p2929 /* node */) {
	*(i8*)(intptr_t)(ws+3952) = p2929; /*node */
	*(i8*)(intptr_t)(ws+3960) = p2928; /*op */

	i8 v2930 = (i8)(intptr_t)(f156_Pop);
	i2 v2931;

	((void(*)(i2* /* vid */))(intptr_t)v2930)(&v2931);
	i8 v2932 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v2932 = v2931;

	i8 v2933 = (i8)(intptr_t)(f156_Pop);
	i2 v2934;

	((void(*)(i2* /* vid */))(intptr_t)v2933)(&v2934);
	i8 v2935 = (i8)(intptr_t)(ws+3970);
	*(i2*)(intptr_t)v2935 = v2934;

	i8 v2936 = (i8)(intptr_t)c02_s0110;
	i8 v2937 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2937)(v2936);

	i8 v2938 = (i8)(intptr_t)(ws+3970);
	i2 v2939 = *(i2*)(intptr_t)v2938;
	i8 v2940 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2940)(v2939);

	i8 v2941 = (i8)(intptr_t)(ws+3960);
	i8 v2942 = *(i8*)(intptr_t)v2941;
	i8 v2943 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2943)(v2942);

	i8 v2944 = (i8)(intptr_t)c02_s0111;
	i8 v2945 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2945)(v2944);

	i8 v2946 = (i8)(intptr_t)(ws+3968);
	i2 v2947 = *(i2*)(intptr_t)v2946;
	i8 v2948 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2948)(v2947);

	i8 v2949 = (i8)(intptr_t)c02_s0112;
	i8 v2950 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2950)(v2949);

	i8 v2951 = (i8)(intptr_t)(ws+3952);
	i8 v2952 = *(i8*)(intptr_t)v2951;
	i2 v2953 = *(i2*)(intptr_t)v2952;
	i8 v2954 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v2954)(v2953);

	i8 v2955 = (i8)(intptr_t)c02_s0113;
	i8 v2956 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2956)(v2955);

	i8 v2957 = (i8)(intptr_t)(ws+3952);
	i8 v2958 = *(i8*)(intptr_t)v2957;
	i8 v2959 = v2958+(+2);
	i2 v2960 = *(i2*)(intptr_t)v2959;
	i8 v2961 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v2961)(v2960);

	i8 v2962 = (i8)(intptr_t)c02_s0114;
	i8 v2963 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2963)(v2962);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f156_Pop(i2* /* vid */);
const i1 c02_s0115[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0116[] = { 0x29,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
	void f87_E(i8 /* text */);
const i1 c02_s0117[] = { 0x28,0x73,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0118[] = { 0x29,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0119[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f87_E(i8 /* text */);
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s011a[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f87_E(i8 /* text */);
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s011b[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// BranchSigned workspace at ws+3952 length ws+28
void f171_BranchSigned(i8 p2964 /* op */, i1 p2965 /* width */, i8 p2966 /* node */) {
	*(i8*)(intptr_t)(ws+3952) = p2966; /*node */
	*(i1*)(intptr_t)(ws+3960) = p2965; /*width */
	*(i8*)(intptr_t)(ws+3968) = p2964; /*op */

	i8 v2967 = (i8)(intptr_t)(f156_Pop);
	i2 v2968;

	((void(*)(i2* /* vid */))(intptr_t)v2967)(&v2968);
	i8 v2969 = (i8)(intptr_t)(ws+3976);
	*(i2*)(intptr_t)v2969 = v2968;

	i8 v2970 = (i8)(intptr_t)(f156_Pop);
	i2 v2971;

	((void(*)(i2* /* vid */))(intptr_t)v2970)(&v2971);
	i8 v2972 = (i8)(intptr_t)(ws+3978);
	*(i2*)(intptr_t)v2972 = v2971;

	i8 v2973 = (i8)(intptr_t)c02_s0115;
	i8 v2974 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2974)(v2973);

	i8 v2975 = (i8)(intptr_t)(ws+3960);
	i1 v2976 = *(i1*)(intptr_t)v2975;
	i8 v2977 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2977)(v2976);

	i8 v2978 = (i8)(intptr_t)c02_s0116;
	i8 v2979 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2979)(v2978);

	i8 v2980 = (i8)(intptr_t)(ws+3978);
	i2 v2981 = *(i2*)(intptr_t)v2980;
	i8 v2982 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2982)(v2981);

	i8 v2983 = (i8)(intptr_t)(ws+3968);
	i8 v2984 = *(i8*)(intptr_t)v2983;
	i8 v2985 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2985)(v2984);

	i8 v2986 = (i8)(intptr_t)c02_s0117;
	i8 v2987 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2987)(v2986);

	i8 v2988 = (i8)(intptr_t)(ws+3960);
	i1 v2989 = *(i1*)(intptr_t)v2988;
	i8 v2990 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2990)(v2989);

	i8 v2991 = (i8)(intptr_t)c02_s0118;
	i8 v2992 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2992)(v2991);

	i8 v2993 = (i8)(intptr_t)(ws+3976);
	i2 v2994 = *(i2*)(intptr_t)v2993;
	i8 v2995 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2995)(v2994);

	i8 v2996 = (i8)(intptr_t)c02_s0119;
	i8 v2997 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2997)(v2996);

	i8 v2998 = (i8)(intptr_t)(ws+3952);
	i8 v2999 = *(i8*)(intptr_t)v2998;
	i2 v3000 = *(i2*)(intptr_t)v2999;
	i8 v3001 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3001)(v3000);

	i8 v3002 = (i8)(intptr_t)c02_s011a;
	i8 v3003 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3003)(v3002);

	i8 v3004 = (i8)(intptr_t)(ws+3952);
	i8 v3005 = *(i8*)(intptr_t)v3004;
	i8 v3006 = v3005+(+2);
	i2 v3007 = *(i2*)(intptr_t)v3006;
	i8 v3008 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3008)(v3007);

	i8 v3009 = (i8)(intptr_t)c02_s011b;
	i8 v3010 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3010)(v3009);

endsub:;
}
const i1 c02_s011c[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f87_E(i8 /* text */);
	void f98_E_labelref(i2 /* labelid */);
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s011d[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// BranchConstant workspace at ws+3952 length ws+16
void f172_BranchConstant(i4 p3011 /* rhs */, i4 p3012 /* lhs */, i8 p3013 /* node */) {
	*(i8*)(intptr_t)(ws+3952) = p3013; /*node */
	*(i4*)(intptr_t)(ws+3960) = p3012; /*lhs */
	*(i4*)(intptr_t)(ws+3964) = p3011; /*rhs */

	i8 v3014 = (i8)(intptr_t)c02_s011c;
	i8 v3015 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3015)(v3014);

	i8 v3016 = (i8)(intptr_t)(ws+3960);
	i4 v3017 = *(i4*)(intptr_t)v3016;
	i8 v3018 = (i8)(intptr_t)(ws+3964);
	i4 v3019 = *(i4*)(intptr_t)v3018;
	if (v3017==v3019) goto c02_023c; else goto c02_023d;

c02_023c:;

	i8 v3020 = (i8)(intptr_t)(ws+3952);
	i8 v3021 = *(i8*)(intptr_t)v3020;
	i2 v3022 = *(i2*)(intptr_t)v3021;
	i8 v3023 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3023)(v3022);

	goto c02_0239;

c02_023d:;

	i8 v3024 = (i8)(intptr_t)(ws+3952);
	i8 v3025 = *(i8*)(intptr_t)v3024;
	i8 v3026 = v3025+(+2);
	i2 v3027 = *(i2*)(intptr_t)v3026;
	i8 v3028 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3028)(v3027);

c02_0239:;

	i8 v3029 = (i8)(intptr_t)c02_s011d;
	i8 v3030 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3030)(v3029);

endsub:;
}
const i1 c02_s011e[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s011f[] = { 0x20,0x21,0x3d,0x20,0 };
	void f87_E(i8 /* text */);
	void f93_E_i32(i4 /* value */);
const i1 c02_s0120[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f87_E(i8 /* text */);
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s0121[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// Whencase workspace at ws+3952 length ws+8
void f173_Whencase(i2 p3031 /* falselabel */, i4 p3032 /* value */) {
	*(i4*)(intptr_t)(ws+3952) = p3032; /*value */
	*(i2*)(intptr_t)(ws+3956) = p3031; /*falselabel */

	i8 v3033 = (i8)(intptr_t)(ws+3456);
	i8 v3034 = (i8)(intptr_t)(ws+3584);
	i1 v3035 = *(i1*)(intptr_t)v3034;
	i1 v3036 = v3035+(-1);
	i8 v3037 = v3036;
	i1 v3038 = (i1)+1;
	i8 v3039 = ((i8)v3037)<<v3038;
	i8 v3040 = v3033+v3039;
	i2 v3041 = *(i2*)(intptr_t)v3040;
	i8 v3042 = (i8)(intptr_t)(ws+3958);
	*(i2*)(intptr_t)v3042 = v3041;

	i8 v3043 = (i8)(intptr_t)c02_s011e;
	i8 v3044 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3044)(v3043);

	i8 v3045 = (i8)(intptr_t)(ws+3958);
	i2 v3046 = *(i2*)(intptr_t)v3045;
	i8 v3047 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3047)(v3046);

	i8 v3048 = (i8)(intptr_t)c02_s011f;
	i8 v3049 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3049)(v3048);

	i8 v3050 = (i8)(intptr_t)(ws+3952);
	i4 v3051 = *(i4*)(intptr_t)v3050;
	i8 v3052 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v3052)(v3051);

	i8 v3053 = (i8)(intptr_t)c02_s0120;
	i8 v3054 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3054)(v3053);

	i8 v3055 = (i8)(intptr_t)(ws+3956);
	i2 v3056 = *(i2*)(intptr_t)v3055;
	i8 v3057 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3057)(v3056);

	i8 v3058 = (i8)(intptr_t)c02_s0121;
	i8 v3059 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3059)(v3058);

endsub:;
}
	void f156_Pop(i2* /* vid */);
	void f154_Push(i2* /* vid */);
const i1 c02_s0122[] = { 0x09,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0123[] = { 0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0124[] = { 0x20,0x3d,0x20,0 };
	void f87_E(i8 /* text */);
const i1 c02_s0125[] = { 0x28,0x73,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0126[] = { 0x29,0x28,0x73,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0127[] = { 0x29,0 };
	void f87_E(i8 /* text */);
const i1 c02_s0128[] = { 0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0129[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// Cast workspace at ws+3952 length ws+8
void f174_Cast(i1 p3060 /* sext */, i1 p3061 /* dest */, i1 p3062 /* src */) {
	*(i1*)(intptr_t)(ws+3952) = p3062; /*src */
	*(i1*)(intptr_t)(ws+3953) = p3061; /*dest */
	*(i1*)(intptr_t)(ws+3954) = p3060; /*sext */

	i8 v3063 = (i8)(intptr_t)(f156_Pop);
	i2 v3064;

	((void(*)(i2* /* vid */))(intptr_t)v3063)(&v3064);
	i8 v3065 = (i8)(intptr_t)(ws+3956);
	*(i2*)(intptr_t)v3065 = v3064;

	i8 v3066 = (i8)(intptr_t)(f154_Push);
	i2 v3067;

	((void(*)(i2* /* vid */))(intptr_t)v3066)(&v3067);
	i8 v3068 = (i8)(intptr_t)(ws+3958);
	*(i2*)(intptr_t)v3068 = v3067;

	i8 v3069 = (i8)(intptr_t)c02_s0122;
	i8 v3070 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3070)(v3069);

	i8 v3071 = (i8)(intptr_t)(ws+3953);
	i1 v3072 = *(i1*)(intptr_t)v3071;
	i8 v3073 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3073)(v3072);

	i8 v3074 = (i8)(intptr_t)c02_s0123;
	i8 v3075 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3075)(v3074);

	i8 v3076 = (i8)(intptr_t)(ws+3958);
	i2 v3077 = *(i2*)(intptr_t)v3076;
	i8 v3078 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3078)(v3077);

	i8 v3079 = (i8)(intptr_t)c02_s0124;
	i8 v3080 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3080)(v3079);

	i8 v3081 = (i8)(intptr_t)(ws+3954);
	i1 v3082 = *(i1*)(intptr_t)v3081;
	i1 v3083 = (i1)+0;
	if (v3082==v3083) goto c02_0242; else goto c02_0241;

c02_0241:;

	i8 v3084 = (i8)(intptr_t)c02_s0125;
	i8 v3085 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3085)(v3084);

	i8 v3086 = (i8)(intptr_t)(ws+3953);
	i1 v3087 = *(i1*)(intptr_t)v3086;
	i8 v3088 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3088)(v3087);

	i8 v3089 = (i8)(intptr_t)c02_s0126;
	i8 v3090 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3090)(v3089);

	i8 v3091 = (i8)(intptr_t)(ws+3952);
	i1 v3092 = *(i1*)(intptr_t)v3091;
	i8 v3093 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3093)(v3092);

	i8 v3094 = (i8)(intptr_t)c02_s0127;
	i8 v3095 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3095)(v3094);

c02_0242:;

c02_023e:;

	i8 v3096 = (i8)(intptr_t)c02_s0128;
	i8 v3097 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3097)(v3096);

	i8 v3098 = (i8)(intptr_t)(ws+3956);
	i2 v3099 = *(i2*)(intptr_t)v3098;
	i8 v3100 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3100)(v3099);

	i8 v3101 = (i8)(intptr_t)c02_s0129;
	i8 v3102 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3102)(v3101);

endsub:;
}
	void f101_EmitterOpenStream(i8 /* subr */);
const i1 c02_s012a[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
	void f87_E(i8 /* text */);
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f96_E_h16(i2 /* value */);
const i1 c02_s012b[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f87_E(i8 /* text */);
	void f82_E_comma(void);
const i1 c02_s012c[] = { 0x30,0x78,0 };
	void f87_E(i8 /* text */);
	void f95_E_h8(i1 /* value */);
	void f82_E_comma(void);
const i1 c02_s012d[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f102_EmitterCloseStream(void);

// E_string workspace at ws+3960 length ws+12
void f175_E_string(i2* p3105 /* sid */, i8 p3106 /* text */) {
	*(i8*)(intptr_t)(ws+3960) = p3106; /*text */

	i8 v3107 = (i8)(intptr_t)(ws+3588);
	i2 v3108 = *(i2*)(intptr_t)v3107;
	i8 v3109 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v3109 = v3108;

	i8 v3110 = (i8)(intptr_t)(ws+3588);
	i2 v3111 = *(i2*)(intptr_t)v3110;
	i2 v3112 = v3111+(+1);
	i8 v3113 = (i8)(intptr_t)(ws+3588);
	*(i2*)(intptr_t)v3113 = v3112;

	i8 v3114 = (i8)(intptr_t)(ws+40);
	i8 v3115 = *(i8*)(intptr_t)v3114;
	i8 v3116 = (i8)(intptr_t)(f101_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v3116)(v3115);

	i8 v3117 = (i8)(intptr_t)c02_s012a;
	i8 v3118 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3118)(v3117);

	i1 v3119 = (i1)+3;
	i8 v3120 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3120)(v3119);

	i1 v3121 = (i1)+115;
	i8 v3122 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3122)(v3121);

	i8 v3123 = (i8)(intptr_t)(ws+3968);
	i2 v3124 = *(i2*)(intptr_t)v3123;
	i8 v3125 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v3125)(v3124);

	i8 v3126 = (i8)(intptr_t)c02_s012b;
	i8 v3127 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3127)(v3126);

	i1 v3128 = (i1)+1;
	i8 v3129 = (i8)(intptr_t)(ws+3970);
	*(i1*)(intptr_t)v3129 = v3128;

c02_0243:;

	i8 v3130 = (i8)(intptr_t)(ws+3960);
	i8 v3131 = *(i8*)(intptr_t)v3130;
	i1 v3132 = *(i1*)(intptr_t)v3131;
	i8 v3133 = (i8)(intptr_t)(ws+3971);
	*(i1*)(intptr_t)v3133 = v3132;

	i8 v3134 = (i8)(intptr_t)(ws+3960);
	i8 v3135 = *(i8*)(intptr_t)v3134;
	i8 v3136 = v3135+(+1);
	i8 v3137 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v3137 = v3136;

	i8 v3138 = (i8)(intptr_t)(ws+3971);
	i1 v3139 = *(i1*)(intptr_t)v3138;
	i1 v3140 = (i1)+0;
	if (v3139==v3140) goto c02_0248; else goto c02_0249;

c02_0248:;

	goto c02_0244;

c02_0249:;

c02_0245:;

	i8 v3141 = (i8)(intptr_t)(ws+3970);
	i1 v3142 = *(i1*)(intptr_t)v3141;
	i1 v3143 = (i1)+0;
	if (v3142==v3143) goto c02_024d; else goto c02_024e;

c02_024d:;

	i8 v3144 = (i8)(intptr_t)(f82_E_comma);

	((void(*)(void))(intptr_t)v3144)();

c02_024e:;

c02_024a:;

	i1 v3145 = (i1)+0;
	i8 v3146 = (i8)(intptr_t)(ws+3970);
	*(i1*)(intptr_t)v3146 = v3145;

	i8 v3147 = (i8)(intptr_t)c02_s012c;
	i8 v3148 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3148)(v3147);

	i8 v3149 = (i8)(intptr_t)(ws+3971);
	i1 v3150 = *(i1*)(intptr_t)v3149;
	i8 v3151 = (i8)(intptr_t)(f95_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v3151)(v3150);

	goto c02_0243;

c02_0244:;

	i8 v3152 = (i8)(intptr_t)(ws+3970);
	i1 v3153 = *(i1*)(intptr_t)v3152;
	i1 v3154 = (i1)+0;
	if (v3153==v3154) goto c02_0252; else goto c02_0253;

c02_0252:;

	i8 v3155 = (i8)(intptr_t)(f82_E_comma);

	((void(*)(void))(intptr_t)v3155)();

c02_0253:;

c02_024f:;

	i8 v3156 = (i8)(intptr_t)c02_s012d;
	i8 v3157 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3157)(v3156);

	i8 v3158 = (i8)(intptr_t)(f102_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3158)();

endsub:;
	*p3105 = *(i2*)(intptr_t)(ws+3968);
}
const i1 c02_s012e[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f87_E(i8 /* text */);
	void f82_E_comma(void);
const i1 c02_s012f[] = { 0x30,0x78,0 };
	void f87_E(i8 /* text */);
	void f95_E_h8(i1 /* value */);
const i1 c02_s0130[] = { 0x7d,0x7d,0x2c,0x0a,0 };
	void f87_E(i8 /* text */);

// FlushInitialiserBuffer workspace at ws+3968 length ws+1
void f176_FlushInitialiserBuffer(void) {

	i8 v3161 = (i8)(intptr_t)(ws+3598);
	i1 v3162 = *(i1*)(intptr_t)v3161;
	i1 v3163 = (i1)+0;
	if (v3162==v3163) goto c02_0258; else goto c02_0257;

c02_0257:;

	i8 v3164 = (i8)(intptr_t)c02_s012e;
	i8 v3165 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3165)(v3164);

	i1 v3166 = (i1)+0;
	i8 v3167 = (i8)(intptr_t)(ws+3968);
	*(i1*)(intptr_t)v3167 = v3166;

c02_025b:;

	i8 v3168 = (i8)(intptr_t)(ws+3968);
	i1 v3169 = *(i1*)(intptr_t)v3168;
	i8 v3170 = (i8)(intptr_t)(ws+3598);
	i1 v3171 = *(i1*)(intptr_t)v3170;
	if (v3169==v3171) goto c02_025e; else goto c02_025d;

c02_025d:;

	i8 v3172 = (i8)(intptr_t)(ws+3968);
	i1 v3173 = *(i1*)(intptr_t)v3172;
	i1 v3174 = (i1)+0;
	if (v3173==v3174) goto c02_0263; else goto c02_0262;

c02_0262:;

	i8 v3175 = (i8)(intptr_t)(f82_E_comma);

	((void(*)(void))(intptr_t)v3175)();

c02_0263:;

c02_025f:;

	i8 v3176 = (i8)(intptr_t)c02_s012f;
	i8 v3177 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3177)(v3176);

	i8 v3178 = (i8)(intptr_t)(ws+3590);
	i8 v3179 = (i8)(intptr_t)(ws+3968);
	i1 v3180 = *(i1*)(intptr_t)v3179;
	i8 v3181 = v3180;
	i8 v3182 = v3178+v3181;
	i1 v3183 = *(i1*)(intptr_t)v3182;
	i8 v3184 = (i8)(intptr_t)(f95_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v3184)(v3183);

	i8 v3185 = (i8)(intptr_t)(ws+3968);
	i1 v3186 = *(i1*)(intptr_t)v3185;
	i1 v3187 = v3186+(+1);
	i8 v3188 = (i8)(intptr_t)(ws+3968);
	*(i1*)(intptr_t)v3188 = v3187;

	goto c02_025b;

c02_025e:;

	i8 v3189 = (i8)(intptr_t)c02_s0130;
	i8 v3190 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3190)(v3189);

	i1 v3191 = (i1)+0;
	i8 v3192 = (i8)(intptr_t)(ws+3598);
	*(i1*)(intptr_t)v3192 = v3191;

c02_0258:;

c02_0254:;

endsub:;
}
	void f176_FlushInitialiserBuffer(void);

// E_bytes workspace at ws+3952 length ws+9
void f177_E_bytes(i1 p3193 /* width */, i8 p3194 /* ptr */) {
	*(i8*)(intptr_t)(ws+3952) = p3194; /*ptr */
	*(i1*)(intptr_t)(ws+3960) = p3193; /*width */

c02_0266:;

	i8 v3195 = (i8)(intptr_t)(ws+3960);
	i1 v3196 = *(i1*)(intptr_t)v3195;
	i1 v3197 = (i1)+0;
	if (v3196==v3197) goto c02_0269; else goto c02_0268;

c02_0268:;

	i8 v3198 = (i8)(intptr_t)(ws+3952);
	i8 v3199 = *(i8*)(intptr_t)v3198;
	i1 v3200 = *(i1*)(intptr_t)v3199;
	i8 v3201 = (i8)(intptr_t)(ws+3590);
	i8 v3202 = (i8)(intptr_t)(ws+3598);
	i1 v3203 = *(i1*)(intptr_t)v3202;
	i8 v3204 = v3203;
	i8 v3205 = v3201+v3204;
	*(i1*)(intptr_t)v3205 = v3200;

	i8 v3206 = (i8)(intptr_t)(ws+3952);
	i8 v3207 = *(i8*)(intptr_t)v3206;
	i8 v3208 = v3207+(+1);
	i8 v3209 = (i8)(intptr_t)(ws+3952);
	*(i8*)(intptr_t)v3209 = v3208;

	i8 v3210 = (i8)(intptr_t)(ws+3598);
	i1 v3211 = *(i1*)(intptr_t)v3210;
	i1 v3212 = v3211+(+1);
	i8 v3213 = (i8)(intptr_t)(ws+3598);
	*(i1*)(intptr_t)v3213 = v3212;

	i8 v3214 = (i8)(intptr_t)(ws+3598);
	i1 v3215 = *(i1*)(intptr_t)v3214;
	i1 v3216 = (i1)+8;
	if (v3215==v3216) goto c02_026d; else goto c02_026e;

c02_026d:;

	i8 v3217 = (i8)(intptr_t)(f176_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v3217)();

c02_026e:;

c02_026a:;

	i8 v3218 = (i8)(intptr_t)(ws+3960);
	i1 v3219 = *(i1*)(intptr_t)v3218;
	i1 v3220 = v3219+(-1);
	i8 v3221 = (i8)(intptr_t)(ws+3960);
	*(i1*)(intptr_t)v3221 = v3220;

	goto c02_0266;

c02_0269:;

endsub:;
}
	void f61_StartError(void);
const i1 c02_s0131[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f62_EndError(void);

// CheckBufferAlignment workspace at ws+3952 length ws+0
void f178_CheckBufferAlignment(void) {

	i8 v3222 = (i8)(intptr_t)(ws+3598);
	i1 v3223 = *(i1*)(intptr_t)v3222;
	i1 v3224 = (i1)+0;
	if (v3223==v3224) goto c02_0273; else goto c02_0272;

c02_0272:;

	i8 v3225 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v3225)();

	i8 v3226 = (i8)(intptr_t)c02_s0131;
	i8 v3227 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v3227)(v3226);

	i8 v3228 = (i8)(intptr_t)(ws+3598);
	i1 v3229 = *(i1*)(intptr_t)v3228;
	i8 v3230 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v3230)(v3229);

	i8 v3231 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v3231)();

c02_0273:;

c02_026f:;

endsub:;
}
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// MatchPredicate workspace at ws+3936 length ws+56
void f179_MatchPredicate(i1* p3232 /* matches */, i8 p3233 /* n */, i1 p3234 /* rule */) {
	*(i1*)(intptr_t)(ws+3936) = p3234; /*rule */
	*(i8*)(intptr_t)(ws+3944) = p3233; /*n */

	i8 v3235 = (i8)(intptr_t)(ws+3944);
	i8 v3236 = *(i8*)(intptr_t)v3235;
	i8 v3237 = (i8)+32;
	i8 v3238 = (i8)(intptr_t)(ws+3960);
	i8 v3239 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v3239)(v3238, v3237, v3236);

	i1 v3240 = (i1)+0;
	i8 v3241 = (i8)(intptr_t)(ws+3952);
	*(i1*)(intptr_t)v3241 = v3240;

	i8 v3242 = (i8)(intptr_t)(ws+3936);
	i1 v3243 = *(i1*)(intptr_t)v3242;

c02_0274:;


endsub:;
	*p3232 = *(i1*)(intptr_t)(ws+3952);
}

// Emitter workspace at ws+3952 length ws+0
void f181_Emitter(void) {

endsub:;
}
	void f172_BranchConstant(i4 /* rhs */, i4 /* lhs */, i8 /* node */);

// emit_0 workspace at ws+3952 length ws+0
void f182_emit_0(void) {

	i8 v3291 = (i8)(intptr_t)(ws+3856);
	i8 v3292 = *(i8*)(intptr_t)v3291;
	i8 v3293 = v3292+(+16);
	i8 v3294 = *(i8*)(intptr_t)v3293;
	i8 v3295 = (i8)(intptr_t)(ws+3880);
	i8 v3296 = *(i8*)(intptr_t)v3295;
	i4 v3297 = *(i4*)(intptr_t)v3296;
	i8 v3298 = (i8)(intptr_t)(ws+3896);
	i8 v3299 = *(i8*)(intptr_t)v3298;
	i4 v3300 = *(i4*)(intptr_t)v3299;
	i8 v3301 = (i8)(intptr_t)(f172_BranchConstant);

	((void(*)(i4 /* rhs */, i4 /* lhs */, i8 /* node */))(intptr_t)v3301)(v3300, v3297, v3294);

endsub:;
}
	void f162_StoreVV(i1 /* width */);

// emit_1 workspace at ws+3952 length ws+0
void f183_emit_1(void) {

	i1 v3302 = (i1)+1;
	i8 v3303 = (i8)(intptr_t)(f162_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3303)(v3302);

endsub:;
}
	void f162_StoreVV(i1 /* width */);

// emit_2 workspace at ws+3952 length ws+0
void f184_emit_2(void) {

	i1 v3304 = (i1)+2;
	i8 v3305 = (i8)(intptr_t)(f162_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3305)(v3304);

endsub:;
}
	void f162_StoreVV(i1 /* width */);

// emit_3 workspace at ws+3952 length ws+0
void f185_emit_3(void) {

	i1 v3306 = (i1)+4;
	i8 v3307 = (i8)(intptr_t)(f162_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3307)(v3306);

endsub:;
}
	void f162_StoreVV(i1 /* width */);

// emit_4 workspace at ws+3952 length ws+0
void f186_emit_4(void) {

	i1 v3308 = (i1)+8;
	i8 v3309 = (i8)(intptr_t)(f162_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3309)(v3308);

endsub:;
}
const i1 c02_s0132[] = { 0x2b,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_5 workspace at ws+3952 length ws+0
void f187_emit_5(void) {

	i1 v3310 = (i1)+1;
	i8 v3311 = (i8)(intptr_t)c02_s0132;
	i8 v3312 = (i8)(intptr_t)(ws+3896);
	i8 v3313 = *(i8*)(intptr_t)v3312;
	i4 v3314 = *(i4*)(intptr_t)v3313;
	i8 v3315 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3315)(v3314, v3311, v3310);

endsub:;
}
const i1 c02_s0133[] = { 0x2b,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_6 workspace at ws+3952 length ws+0
void f188_emit_6(void) {

	i1 v3316 = (i1)+2;
	i8 v3317 = (i8)(intptr_t)c02_s0133;
	i8 v3318 = (i8)(intptr_t)(ws+3896);
	i8 v3319 = *(i8*)(intptr_t)v3318;
	i4 v3320 = *(i4*)(intptr_t)v3319;
	i8 v3321 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3321)(v3320, v3317, v3316);

endsub:;
}
const i1 c02_s0134[] = { 0x2b,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_7 workspace at ws+3952 length ws+0
void f189_emit_7(void) {

	i1 v3322 = (i1)+4;
	i8 v3323 = (i8)(intptr_t)c02_s0134;
	i8 v3324 = (i8)(intptr_t)(ws+3896);
	i8 v3325 = *(i8*)(intptr_t)v3324;
	i4 v3326 = *(i4*)(intptr_t)v3325;
	i8 v3327 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3327)(v3326, v3323, v3322);

endsub:;
}
const i1 c02_s0135[] = { 0x2b,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_8 workspace at ws+3952 length ws+0
void f190_emit_8(void) {

	i1 v3328 = (i1)+8;
	i8 v3329 = (i8)(intptr_t)c02_s0135;
	i8 v3330 = (i8)(intptr_t)(ws+3896);
	i8 v3331 = *(i8*)(intptr_t)v3330;
	i4 v3332 = *(i4*)(intptr_t)v3331;
	i8 v3333 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3333)(v3332, v3329, v3328);

endsub:;
}
const i1 c02_s0136[] = { 0x2d,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_9 workspace at ws+3952 length ws+0
void f191_emit_9(void) {

	i1 v3334 = (i1)+1;
	i8 v3335 = (i8)(intptr_t)c02_s0136;
	i8 v3336 = (i8)(intptr_t)(ws+3896);
	i8 v3337 = *(i8*)(intptr_t)v3336;
	i4 v3338 = *(i4*)(intptr_t)v3337;
	i8 v3339 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3339)(v3338, v3335, v3334);

endsub:;
}
const i1 c02_s0137[] = { 0x2d,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_10 workspace at ws+3952 length ws+0
void f192_emit_10(void) {

	i1 v3340 = (i1)+2;
	i8 v3341 = (i8)(intptr_t)c02_s0137;
	i8 v3342 = (i8)(intptr_t)(ws+3896);
	i8 v3343 = *(i8*)(intptr_t)v3342;
	i4 v3344 = *(i4*)(intptr_t)v3343;
	i8 v3345 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3345)(v3344, v3341, v3340);

endsub:;
}
const i1 c02_s0138[] = { 0x2d,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_11 workspace at ws+3952 length ws+0
void f193_emit_11(void) {

	i1 v3346 = (i1)+4;
	i8 v3347 = (i8)(intptr_t)c02_s0138;
	i8 v3348 = (i8)(intptr_t)(ws+3896);
	i8 v3349 = *(i8*)(intptr_t)v3348;
	i4 v3350 = *(i4*)(intptr_t)v3349;
	i8 v3351 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3351)(v3350, v3347, v3346);

endsub:;
}
const i1 c02_s0139[] = { 0x2d,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_12 workspace at ws+3952 length ws+0
void f194_emit_12(void) {

	i1 v3352 = (i1)+8;
	i8 v3353 = (i8)(intptr_t)c02_s0139;
	i8 v3354 = (i8)(intptr_t)(ws+3896);
	i8 v3355 = *(i8*)(intptr_t)v3354;
	i4 v3356 = *(i4*)(intptr_t)v3355;
	i8 v3357 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3357)(v3356, v3353, v3352);

endsub:;
}
const i1 c02_s013a[] = { 0x2a,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_13 workspace at ws+3952 length ws+0
void f195_emit_13(void) {

	i1 v3358 = (i1)+1;
	i8 v3359 = (i8)(intptr_t)c02_s013a;
	i8 v3360 = (i8)(intptr_t)(ws+3896);
	i8 v3361 = *(i8*)(intptr_t)v3360;
	i4 v3362 = *(i4*)(intptr_t)v3361;
	i8 v3363 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3363)(v3362, v3359, v3358);

endsub:;
}
const i1 c02_s013b[] = { 0x2a,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_14 workspace at ws+3952 length ws+0
void f196_emit_14(void) {

	i1 v3364 = (i1)+2;
	i8 v3365 = (i8)(intptr_t)c02_s013b;
	i8 v3366 = (i8)(intptr_t)(ws+3896);
	i8 v3367 = *(i8*)(intptr_t)v3366;
	i4 v3368 = *(i4*)(intptr_t)v3367;
	i8 v3369 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3369)(v3368, v3365, v3364);

endsub:;
}
const i1 c02_s013c[] = { 0x2a,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_15 workspace at ws+3952 length ws+0
void f197_emit_15(void) {

	i1 v3370 = (i1)+4;
	i8 v3371 = (i8)(intptr_t)c02_s013c;
	i8 v3372 = (i8)(intptr_t)(ws+3896);
	i8 v3373 = *(i8*)(intptr_t)v3372;
	i4 v3374 = *(i4*)(intptr_t)v3373;
	i8 v3375 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3375)(v3374, v3371, v3370);

endsub:;
}
const i1 c02_s013d[] = { 0x2a,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_16 workspace at ws+3952 length ws+0
void f198_emit_16(void) {

	i1 v3376 = (i1)+8;
	i8 v3377 = (i8)(intptr_t)c02_s013d;
	i8 v3378 = (i8)(intptr_t)(ws+3896);
	i8 v3379 = *(i8*)(intptr_t)v3378;
	i4 v3380 = *(i4*)(intptr_t)v3379;
	i8 v3381 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3381)(v3380, v3377, v3376);

endsub:;
}
const i1 c02_s013e[] = { 0x2f,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_17 workspace at ws+3952 length ws+0
void f199_emit_17(void) {

	i1 v3382 = (i1)+1;
	i8 v3383 = (i8)(intptr_t)c02_s013e;
	i8 v3384 = (i8)(intptr_t)(ws+3896);
	i8 v3385 = *(i8*)(intptr_t)v3384;
	i4 v3386 = *(i4*)(intptr_t)v3385;
	i8 v3387 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3387)(v3386, v3383, v3382);

endsub:;
}
const i1 c02_s013f[] = { 0x2f,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_18 workspace at ws+3952 length ws+0
void f200_emit_18(void) {

	i1 v3388 = (i1)+2;
	i8 v3389 = (i8)(intptr_t)c02_s013f;
	i8 v3390 = (i8)(intptr_t)(ws+3896);
	i8 v3391 = *(i8*)(intptr_t)v3390;
	i4 v3392 = *(i4*)(intptr_t)v3391;
	i8 v3393 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3393)(v3392, v3389, v3388);

endsub:;
}
const i1 c02_s0140[] = { 0x2f,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_19 workspace at ws+3952 length ws+0
void f201_emit_19(void) {

	i1 v3394 = (i1)+4;
	i8 v3395 = (i8)(intptr_t)c02_s0140;
	i8 v3396 = (i8)(intptr_t)(ws+3896);
	i8 v3397 = *(i8*)(intptr_t)v3396;
	i4 v3398 = *(i4*)(intptr_t)v3397;
	i8 v3399 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3399)(v3398, v3395, v3394);

endsub:;
}
const i1 c02_s0141[] = { 0x2f,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_20 workspace at ws+3952 length ws+0
void f202_emit_20(void) {

	i1 v3400 = (i1)+8;
	i8 v3401 = (i8)(intptr_t)c02_s0141;
	i8 v3402 = (i8)(intptr_t)(ws+3896);
	i8 v3403 = *(i8*)(intptr_t)v3402;
	i4 v3404 = *(i4*)(intptr_t)v3403;
	i8 v3405 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3405)(v3404, v3401, v3400);

endsub:;
}
const i1 c02_s0142[] = { 0x25,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_21 workspace at ws+3952 length ws+0
void f203_emit_21(void) {

	i1 v3406 = (i1)+1;
	i8 v3407 = (i8)(intptr_t)c02_s0142;
	i8 v3408 = (i8)(intptr_t)(ws+3896);
	i8 v3409 = *(i8*)(intptr_t)v3408;
	i4 v3410 = *(i4*)(intptr_t)v3409;
	i8 v3411 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3411)(v3410, v3407, v3406);

endsub:;
}
const i1 c02_s0143[] = { 0x25,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_22 workspace at ws+3952 length ws+0
void f204_emit_22(void) {

	i1 v3412 = (i1)+2;
	i8 v3413 = (i8)(intptr_t)c02_s0143;
	i8 v3414 = (i8)(intptr_t)(ws+3896);
	i8 v3415 = *(i8*)(intptr_t)v3414;
	i4 v3416 = *(i4*)(intptr_t)v3415;
	i8 v3417 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3417)(v3416, v3413, v3412);

endsub:;
}
const i1 c02_s0144[] = { 0x25,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_23 workspace at ws+3952 length ws+0
void f205_emit_23(void) {

	i1 v3418 = (i1)+4;
	i8 v3419 = (i8)(intptr_t)c02_s0144;
	i8 v3420 = (i8)(intptr_t)(ws+3896);
	i8 v3421 = *(i8*)(intptr_t)v3420;
	i4 v3422 = *(i4*)(intptr_t)v3421;
	i8 v3423 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3423)(v3422, v3419, v3418);

endsub:;
}
const i1 c02_s0145[] = { 0x25,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_24 workspace at ws+3952 length ws+0
void f206_emit_24(void) {

	i1 v3424 = (i1)+8;
	i8 v3425 = (i8)(intptr_t)c02_s0145;
	i8 v3426 = (i8)(intptr_t)(ws+3896);
	i8 v3427 = *(i8*)(intptr_t)v3426;
	i4 v3428 = *(i4*)(intptr_t)v3427;
	i8 v3429 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3429)(v3428, v3425, v3424);

endsub:;
}
const i1 c02_s0146[] = { 0x2f,0 };
	void f167_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_25 workspace at ws+3952 length ws+0
void f207_emit_25(void) {

	i1 v3430 = (i1)+1;
	i8 v3431 = (i8)(intptr_t)c02_s0146;
	i8 v3432 = (i8)(intptr_t)(ws+3896);
	i8 v3433 = *(i8*)(intptr_t)v3432;
	i4 v3434 = *(i4*)(intptr_t)v3433;
	i8 v3435 = (i8)(intptr_t)(f167_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3435)(v3434, v3431, v3430);

endsub:;
}
const i1 c02_s0147[] = { 0x2f,0 };
	void f167_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_26 workspace at ws+3952 length ws+0
void f208_emit_26(void) {

	i1 v3436 = (i1)+2;
	i8 v3437 = (i8)(intptr_t)c02_s0147;
	i8 v3438 = (i8)(intptr_t)(ws+3896);
	i8 v3439 = *(i8*)(intptr_t)v3438;
	i4 v3440 = *(i4*)(intptr_t)v3439;
	i8 v3441 = (i8)(intptr_t)(f167_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3441)(v3440, v3437, v3436);

endsub:;
}
const i1 c02_s0148[] = { 0x2f,0 };
	void f167_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_27 workspace at ws+3952 length ws+0
void f209_emit_27(void) {

	i1 v3442 = (i1)+4;
	i8 v3443 = (i8)(intptr_t)c02_s0148;
	i8 v3444 = (i8)(intptr_t)(ws+3896);
	i8 v3445 = *(i8*)(intptr_t)v3444;
	i4 v3446 = *(i4*)(intptr_t)v3445;
	i8 v3447 = (i8)(intptr_t)(f167_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3447)(v3446, v3443, v3442);

endsub:;
}
const i1 c02_s0149[] = { 0x2f,0 };
	void f167_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_28 workspace at ws+3952 length ws+0
void f210_emit_28(void) {

	i1 v3448 = (i1)+8;
	i8 v3449 = (i8)(intptr_t)c02_s0149;
	i8 v3450 = (i8)(intptr_t)(ws+3896);
	i8 v3451 = *(i8*)(intptr_t)v3450;
	i4 v3452 = *(i4*)(intptr_t)v3451;
	i8 v3453 = (i8)(intptr_t)(f167_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3453)(v3452, v3449, v3448);

endsub:;
}
const i1 c02_s014a[] = { 0x25,0 };
	void f167_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_29 workspace at ws+3952 length ws+0
void f211_emit_29(void) {

	i1 v3454 = (i1)+1;
	i8 v3455 = (i8)(intptr_t)c02_s014a;
	i8 v3456 = (i8)(intptr_t)(ws+3896);
	i8 v3457 = *(i8*)(intptr_t)v3456;
	i4 v3458 = *(i4*)(intptr_t)v3457;
	i8 v3459 = (i8)(intptr_t)(f167_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3459)(v3458, v3455, v3454);

endsub:;
}
const i1 c02_s014b[] = { 0x25,0 };
	void f167_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_30 workspace at ws+3952 length ws+0
void f212_emit_30(void) {

	i1 v3460 = (i1)+2;
	i8 v3461 = (i8)(intptr_t)c02_s014b;
	i8 v3462 = (i8)(intptr_t)(ws+3896);
	i8 v3463 = *(i8*)(intptr_t)v3462;
	i4 v3464 = *(i4*)(intptr_t)v3463;
	i8 v3465 = (i8)(intptr_t)(f167_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3465)(v3464, v3461, v3460);

endsub:;
}
const i1 c02_s014c[] = { 0x25,0 };
	void f167_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_31 workspace at ws+3952 length ws+0
void f213_emit_31(void) {

	i1 v3466 = (i1)+4;
	i8 v3467 = (i8)(intptr_t)c02_s014c;
	i8 v3468 = (i8)(intptr_t)(ws+3896);
	i8 v3469 = *(i8*)(intptr_t)v3468;
	i4 v3470 = *(i4*)(intptr_t)v3469;
	i8 v3471 = (i8)(intptr_t)(f167_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3471)(v3470, v3467, v3466);

endsub:;
}
const i1 c02_s014d[] = { 0x25,0 };
	void f167_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_32 workspace at ws+3952 length ws+0
void f214_emit_32(void) {

	i1 v3472 = (i1)+8;
	i8 v3473 = (i8)(intptr_t)c02_s014d;
	i8 v3474 = (i8)(intptr_t)(ws+3896);
	i8 v3475 = *(i8*)(intptr_t)v3474;
	i4 v3476 = *(i4*)(intptr_t)v3475;
	i8 v3477 = (i8)(intptr_t)(f167_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3477)(v3476, v3473, v3472);

endsub:;
}
const i1 c02_s014e[] = { 0x26,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_33 workspace at ws+3952 length ws+0
void f215_emit_33(void) {

	i1 v3478 = (i1)+1;
	i8 v3479 = (i8)(intptr_t)c02_s014e;
	i8 v3480 = (i8)(intptr_t)(ws+3896);
	i8 v3481 = *(i8*)(intptr_t)v3480;
	i4 v3482 = *(i4*)(intptr_t)v3481;
	i8 v3483 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3483)(v3482, v3479, v3478);

endsub:;
}
const i1 c02_s014f[] = { 0x26,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_34 workspace at ws+3952 length ws+0
void f216_emit_34(void) {

	i1 v3484 = (i1)+2;
	i8 v3485 = (i8)(intptr_t)c02_s014f;
	i8 v3486 = (i8)(intptr_t)(ws+3896);
	i8 v3487 = *(i8*)(intptr_t)v3486;
	i4 v3488 = *(i4*)(intptr_t)v3487;
	i8 v3489 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3489)(v3488, v3485, v3484);

endsub:;
}
const i1 c02_s0150[] = { 0x26,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_35 workspace at ws+3952 length ws+0
void f217_emit_35(void) {

	i1 v3490 = (i1)+4;
	i8 v3491 = (i8)(intptr_t)c02_s0150;
	i8 v3492 = (i8)(intptr_t)(ws+3896);
	i8 v3493 = *(i8*)(intptr_t)v3492;
	i4 v3494 = *(i4*)(intptr_t)v3493;
	i8 v3495 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3495)(v3494, v3491, v3490);

endsub:;
}
const i1 c02_s0151[] = { 0x26,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_36 workspace at ws+3952 length ws+0
void f218_emit_36(void) {

	i1 v3496 = (i1)+8;
	i8 v3497 = (i8)(intptr_t)c02_s0151;
	i8 v3498 = (i8)(intptr_t)(ws+3896);
	i8 v3499 = *(i8*)(intptr_t)v3498;
	i4 v3500 = *(i4*)(intptr_t)v3499;
	i8 v3501 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3501)(v3500, v3497, v3496);

endsub:;
}
const i1 c02_s0152[] = { 0x7c,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_37 workspace at ws+3952 length ws+0
void f219_emit_37(void) {

	i1 v3502 = (i1)+1;
	i8 v3503 = (i8)(intptr_t)c02_s0152;
	i8 v3504 = (i8)(intptr_t)(ws+3896);
	i8 v3505 = *(i8*)(intptr_t)v3504;
	i4 v3506 = *(i4*)(intptr_t)v3505;
	i8 v3507 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3507)(v3506, v3503, v3502);

endsub:;
}
const i1 c02_s0153[] = { 0x7c,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_38 workspace at ws+3952 length ws+0
void f220_emit_38(void) {

	i1 v3508 = (i1)+2;
	i8 v3509 = (i8)(intptr_t)c02_s0153;
	i8 v3510 = (i8)(intptr_t)(ws+3896);
	i8 v3511 = *(i8*)(intptr_t)v3510;
	i4 v3512 = *(i4*)(intptr_t)v3511;
	i8 v3513 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3513)(v3512, v3509, v3508);

endsub:;
}
const i1 c02_s0154[] = { 0x7c,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_39 workspace at ws+3952 length ws+0
void f221_emit_39(void) {

	i1 v3514 = (i1)+4;
	i8 v3515 = (i8)(intptr_t)c02_s0154;
	i8 v3516 = (i8)(intptr_t)(ws+3896);
	i8 v3517 = *(i8*)(intptr_t)v3516;
	i4 v3518 = *(i4*)(intptr_t)v3517;
	i8 v3519 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3519)(v3518, v3515, v3514);

endsub:;
}
const i1 c02_s0155[] = { 0x7c,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_40 workspace at ws+3952 length ws+0
void f222_emit_40(void) {

	i1 v3520 = (i1)+8;
	i8 v3521 = (i8)(intptr_t)c02_s0155;
	i8 v3522 = (i8)(intptr_t)(ws+3896);
	i8 v3523 = *(i8*)(intptr_t)v3522;
	i4 v3524 = *(i4*)(intptr_t)v3523;
	i8 v3525 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3525)(v3524, v3521, v3520);

endsub:;
}
const i1 c02_s0156[] = { 0x5e,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_41 workspace at ws+3952 length ws+0
void f223_emit_41(void) {

	i1 v3526 = (i1)+1;
	i8 v3527 = (i8)(intptr_t)c02_s0156;
	i8 v3528 = (i8)(intptr_t)(ws+3896);
	i8 v3529 = *(i8*)(intptr_t)v3528;
	i4 v3530 = *(i4*)(intptr_t)v3529;
	i8 v3531 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3531)(v3530, v3527, v3526);

endsub:;
}
const i1 c02_s0157[] = { 0x5e,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_42 workspace at ws+3952 length ws+0
void f224_emit_42(void) {

	i1 v3532 = (i1)+2;
	i8 v3533 = (i8)(intptr_t)c02_s0157;
	i8 v3534 = (i8)(intptr_t)(ws+3896);
	i8 v3535 = *(i8*)(intptr_t)v3534;
	i4 v3536 = *(i4*)(intptr_t)v3535;
	i8 v3537 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3537)(v3536, v3533, v3532);

endsub:;
}
const i1 c02_s0158[] = { 0x5e,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_43 workspace at ws+3952 length ws+0
void f225_emit_43(void) {

	i1 v3538 = (i1)+4;
	i8 v3539 = (i8)(intptr_t)c02_s0158;
	i8 v3540 = (i8)(intptr_t)(ws+3896);
	i8 v3541 = *(i8*)(intptr_t)v3540;
	i4 v3542 = *(i4*)(intptr_t)v3541;
	i8 v3543 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3543)(v3542, v3539, v3538);

endsub:;
}
const i1 c02_s0159[] = { 0x5e,0 };
	void f165_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_44 workspace at ws+3952 length ws+0
void f226_emit_44(void) {

	i1 v3544 = (i1)+8;
	i8 v3545 = (i8)(intptr_t)c02_s0159;
	i8 v3546 = (i8)(intptr_t)(ws+3896);
	i8 v3547 = *(i8*)(intptr_t)v3546;
	i4 v3548 = *(i4*)(intptr_t)v3547;
	i8 v3549 = (i8)(intptr_t)(f165_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3549)(v3548, v3545, v3544);

endsub:;
}
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s015a[] = { 0x3a,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_47 workspace at ws+3952 length ws+0
void f227_emit_47(void) {

	i8 v3550 = (i8)(intptr_t)(ws+3864);
	i8 v3551 = *(i8*)(intptr_t)v3550;
	i2 v3552 = *(i2*)(intptr_t)v3551;
	i8 v3553 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3553)(v3552);

	i8 v3554 = (i8)(intptr_t)c02_s015a;
	i8 v3555 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3555)(v3554);

endsub:;
}
const i1 c02_s015b[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f87_E(i8 /* text */);
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s015c[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_48 workspace at ws+3952 length ws+0
void f228_emit_48(void) {

	i8 v3556 = (i8)(intptr_t)c02_s015b;
	i8 v3557 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3557)(v3556);

	i8 v3558 = (i8)(intptr_t)(ws+3864);
	i8 v3559 = *(i8*)(intptr_t)v3558;
	i2 v3560 = *(i2*)(intptr_t)v3559;
	i8 v3561 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3561)(v3560);

	i8 v3562 = (i8)(intptr_t)c02_s015c;
	i8 v3563 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3563)(v3562);

endsub:;
}
const i1 c02_s015d[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_49 workspace at ws+3952 length ws+0
void f229_emit_49(void) {

	i8 v3564 = (i8)(intptr_t)c02_s015d;
	i8 v3565 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3565)(v3564);

endsub:;
}
	void f101_EmitterOpenStream(i8 /* subr */);
const i1 c02_s015e[] = { 0x0a,0x2f,0x2f,0x20,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s015f[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
	void f87_E(i8 /* text */);
	void f78_E_b8(i1 /* byte */);
	void f79_E_b16(i2 /* word */);
	void f78_E_b8(i1 /* byte */);
	void f79_E_b16(i2 /* word */);
const i1 c02_s0160[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
	void f87_E(i8 /* text */);
	void f78_E_b8(i1 /* byte */);
	void f79_E_b16(i2 /* word */);
	void f78_E_b8(i1 /* byte */);
const i1 c02_s0161[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
	void f87_E(i8 /* text */);
	void f99_E_subref(i8 /* subr */);
const i1 c02_s0162[] = { 0x28,0 };
	void f87_E(i8 /* text */);
const i1 c02_s0163[] = { 0x2c,0x20,0 };
	void f87_E(i8 /* text */);

// comma workspace at ws+3976 length ws+0
void f231_comma(void) {

	i8 v3608 = (i8)(intptr_t)(ws+3952);
	i1 v3609 = *(i1*)(intptr_t)v3608;
	i1 v3610 = (i1)+0;
	if (v3609==v3610) goto c02_0283; else goto c02_0284;

c02_0283:;

	i8 v3611 = (i8)(intptr_t)c02_s0163;
	i8 v3612 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3612)(v3611);

c02_0284:;

c02_0280:;

	i1 v3613 = (i1)+0;
	i8 v3614 = (i8)(intptr_t)(ws+3952);
	*(i1*)(intptr_t)v3614 = v3613;

endsub:;
}
	void f69_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f154_Push(i2* /* vid */);
	void f231_comma(void);
const i1 c02_s0164[] = { 0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0165[] = { 0x2a,0x20,0x70,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0166[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s0167[] = { 0x20,0x2a,0x2f,0 };
	void f87_E(i8 /* text */);
	void f68_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f154_Push(i2* /* vid */);
	void f231_comma(void);
const i1 c02_s0168[] = { 0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0169[] = { 0x20,0x70,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s016a[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s016b[] = { 0x20,0x2a,0x2f,0 };
	void f87_E(i8 /* text */);
const i1 c02_s016c[] = { 0x76,0x6f,0x69,0x64,0 };
	void f87_E(i8 /* text */);
const i1 c02_s016d[] = { 0x29,0x20,0x7b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f68_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f156_Pop(i2* /* vid */);
const i1 c02_s016e[] = { 0x09,0x2a,0x28,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s016f[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f150_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0170[] = { 0x29,0x20,0x3d,0x20,0x70,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0171[] = { 0x3b,0x20,0x2f,0x2a,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s0172[] = { 0x20,0x2a,0x2f,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_50 workspace at ws+3952 length ws+18
void f230_emit_50(void) {

	i8 v3566 = (i8)(intptr_t)(ws+40);
	i8 v3567 = *(i8*)(intptr_t)v3566;
	i8 v3568 = (i8)(intptr_t)(f101_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v3568)(v3567);

	i8 v3569 = (i8)(intptr_t)c02_s015e;
	i8 v3570 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3570)(v3569);

	i8 v3571 = (i8)(intptr_t)(ws+40);
	i8 v3572 = *(i8*)(intptr_t)v3571;
	i8 v3573 = *(i8*)(intptr_t)v3572;
	i8 v3574 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3574)(v3573);

	i8 v3575 = (i8)(intptr_t)c02_s015f;
	i8 v3576 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3576)(v3575);

	i1 v3577 = (i1)+2;
	i8 v3578 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3578)(v3577);

	i8 v3579 = (i8)(intptr_t)(ws+40);
	i8 v3580 = *(i8*)(intptr_t)v3579;
	i8 v3581 = v3580+(+8);
	i2 v3582 = *(i2*)(intptr_t)v3581;
	i8 v3583 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3583)(v3582);

	i1 v3584 = (i1)+0;
	i8 v3585 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3585)(v3584);

	i2 v3586 = (i2)+0;
	i8 v3587 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3587)(v3586);

	i8 v3588 = (i8)(intptr_t)c02_s0160;
	i8 v3589 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3589)(v3588);

	i1 v3590 = (i1)+5;
	i8 v3591 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3591)(v3590);

	i8 v3592 = (i8)(intptr_t)(ws+40);
	i8 v3593 = *(i8*)(intptr_t)v3592;
	i8 v3594 = v3593+(+8);
	i2 v3595 = *(i2*)(intptr_t)v3594;
	i8 v3596 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3596)(v3595);

	i1 v3597 = (i1)+0;
	i8 v3598 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3598)(v3597);

	i8 v3599 = (i8)(intptr_t)c02_s0161;
	i8 v3600 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3600)(v3599);

	i8 v3601 = (i8)(intptr_t)(ws+40);
	i8 v3602 = *(i8*)(intptr_t)v3601;
	i8 v3603 = (i8)(intptr_t)(f99_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v3603)(v3602);

	i8 v3604 = (i8)(intptr_t)c02_s0162;
	i8 v3605 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3605)(v3604);

	i1 v3606 = (i1)+1;
	i8 v3607 = (i8)(intptr_t)(ws+3952);
	*(i1*)(intptr_t)v3607 = v3606;


	i1 v3615 = (i1)+0;
	i8 v3616 = (i8)(intptr_t)(ws+3953);
	*(i1*)(intptr_t)v3616 = v3615;

c02_0287:;

	i8 v3617 = (i8)(intptr_t)(ws+3953);
	i1 v3618 = *(i1*)(intptr_t)v3617;
	i8 v3619 = (i8)(intptr_t)(ws+40);
	i8 v3620 = *(i8*)(intptr_t)v3619;
	i8 v3621 = v3620+(+49);
	i1 v3622 = *(i1*)(intptr_t)v3621;
	if (v3618==v3622) goto c02_028a; else goto c02_0289;

c02_0289:;

	i8 v3623 = (i8)(intptr_t)(ws+40);
	i8 v3624 = *(i8*)(intptr_t)v3623;
	i8 v3625 = (i8)(intptr_t)(ws+3953);
	i1 v3626 = *(i1*)(intptr_t)v3625;
	i8 v3627 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v3628;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3627)(&v3628, v3626, v3624);
	i8 v3629 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v3629 = v3628;

	i8 v3630 = (i8)(intptr_t)(f154_Push);
	i2 v3631;

	((void(*)(i2* /* vid */))(intptr_t)v3630)(&v3631);
	i8 v3632 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v3632 = v3631;

	i8 v3633 = (i8)(intptr_t)(f231_comma);

	((void(*)(void))(intptr_t)v3633)();

	i8 v3634 = (i8)(intptr_t)c02_s0164;
	i8 v3635 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3635)(v3634);

	i8 v3636 = (i8)(intptr_t)(ws+3960);
	i8 v3637 = *(i8*)(intptr_t)v3636;
	i8 v3638 = v3637+(+14);
	i1 v3639 = *(i1*)(intptr_t)v3638;
	i8 v3640 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3640)(v3639);

	i8 v3641 = (i8)(intptr_t)c02_s0165;
	i8 v3642 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3642)(v3641);

	i8 v3643 = (i8)(intptr_t)(ws+3968);
	i2 v3644 = *(i2*)(intptr_t)v3643;
	i8 v3645 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3645)(v3644);

	i8 v3646 = (i8)(intptr_t)c02_s0166;
	i8 v3647 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3647)(v3646);

	i8 v3648 = (i8)(intptr_t)(ws+3960);
	i8 v3649 = *(i8*)(intptr_t)v3648;
	i8 v3650 = v3649+(+16);
	i8 v3651 = *(i8*)(intptr_t)v3650;
	i8 v3652 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3652)(v3651);

	i8 v3653 = (i8)(intptr_t)c02_s0167;
	i8 v3654 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3654)(v3653);

	i8 v3655 = (i8)(intptr_t)(ws+3953);
	i1 v3656 = *(i1*)(intptr_t)v3655;
	i1 v3657 = v3656+(+1);
	i8 v3658 = (i8)(intptr_t)(ws+3953);
	*(i1*)(intptr_t)v3658 = v3657;

	goto c02_0287;

c02_028a:;

	i8 v3659 = (i8)(intptr_t)(ws+40);
	i8 v3660 = *(i8*)(intptr_t)v3659;
	i8 v3661 = v3660+(+48);
	i1 v3662 = *(i1*)(intptr_t)v3661;
	i8 v3663 = (i8)(intptr_t)(ws+3953);
	*(i1*)(intptr_t)v3663 = v3662;

c02_028d:;

	i8 v3664 = (i8)(intptr_t)(ws+3953);
	i1 v3665 = *(i1*)(intptr_t)v3664;
	i1 v3666 = (i1)+0;
	if (v3665==v3666) goto c02_0290; else goto c02_028f;

c02_028f:;

	i8 v3667 = (i8)(intptr_t)(ws+3953);
	i1 v3668 = *(i1*)(intptr_t)v3667;
	i1 v3669 = v3668+(-1);
	i8 v3670 = (i8)(intptr_t)(ws+3953);
	*(i1*)(intptr_t)v3670 = v3669;

	i8 v3671 = (i8)(intptr_t)(ws+40);
	i8 v3672 = *(i8*)(intptr_t)v3671;
	i8 v3673 = (i8)(intptr_t)(ws+3953);
	i1 v3674 = *(i1*)(intptr_t)v3673;
	i8 v3675 = (i8)(intptr_t)(f68_GetInputParameter);
	i8 v3676;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3675)(&v3676, v3674, v3672);
	i8 v3677 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v3677 = v3676;

	i8 v3678 = (i8)(intptr_t)(f154_Push);
	i2 v3679;

	((void(*)(i2* /* vid */))(intptr_t)v3678)(&v3679);
	i8 v3680 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v3680 = v3679;

	i8 v3681 = (i8)(intptr_t)(f231_comma);

	((void(*)(void))(intptr_t)v3681)();

	i8 v3682 = (i8)(intptr_t)c02_s0168;
	i8 v3683 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3683)(v3682);

	i8 v3684 = (i8)(intptr_t)(ws+3960);
	i8 v3685 = *(i8*)(intptr_t)v3684;
	i8 v3686 = v3685+(+14);
	i1 v3687 = *(i1*)(intptr_t)v3686;
	i8 v3688 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3688)(v3687);

	i8 v3689 = (i8)(intptr_t)c02_s0169;
	i8 v3690 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3690)(v3689);

	i8 v3691 = (i8)(intptr_t)(ws+3968);
	i2 v3692 = *(i2*)(intptr_t)v3691;
	i8 v3693 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3693)(v3692);

	i8 v3694 = (i8)(intptr_t)c02_s016a;
	i8 v3695 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3695)(v3694);

	i8 v3696 = (i8)(intptr_t)(ws+3960);
	i8 v3697 = *(i8*)(intptr_t)v3696;
	i8 v3698 = v3697+(+16);
	i8 v3699 = *(i8*)(intptr_t)v3698;
	i8 v3700 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3700)(v3699);

	i8 v3701 = (i8)(intptr_t)c02_s016b;
	i8 v3702 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3702)(v3701);

	goto c02_028d;

c02_0290:;

	i8 v3703 = (i8)(intptr_t)(ws+40);
	i8 v3704 = *(i8*)(intptr_t)v3703;
	i8 v3705 = v3704+(+48);
	i1 v3706 = *(i1*)(intptr_t)v3705;
	i8 v3707 = (i8)(intptr_t)(ws+40);
	i8 v3708 = *(i8*)(intptr_t)v3707;
	i8 v3709 = v3708+(+49);
	i1 v3710 = *(i1*)(intptr_t)v3709;
	i1 v3711 = v3706+v3710;
	i1 v3712 = (i1)+0;
	if (v3711==v3712) goto c02_0294; else goto c02_0295;

c02_0294:;

	i8 v3713 = (i8)(intptr_t)c02_s016c;
	i8 v3714 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3714)(v3713);

c02_0295:;

c02_0291:;

	i8 v3715 = (i8)(intptr_t)c02_s016d;
	i8 v3716 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3716)(v3715);

	i1 v3717 = (i1)+0;
	i8 v3718 = (i8)(intptr_t)(ws+3953);
	*(i1*)(intptr_t)v3718 = v3717;

c02_0298:;

	i8 v3719 = (i8)(intptr_t)(ws+3953);
	i1 v3720 = *(i1*)(intptr_t)v3719;
	i8 v3721 = (i8)(intptr_t)(ws+40);
	i8 v3722 = *(i8*)(intptr_t)v3721;
	i8 v3723 = v3722+(+48);
	i1 v3724 = *(i1*)(intptr_t)v3723;
	if (v3720==v3724) goto c02_029b; else goto c02_029a;

c02_029a:;

	i8 v3725 = (i8)(intptr_t)(ws+40);
	i8 v3726 = *(i8*)(intptr_t)v3725;
	i8 v3727 = (i8)(intptr_t)(ws+3953);
	i1 v3728 = *(i1*)(intptr_t)v3727;
	i8 v3729 = (i8)(intptr_t)(f68_GetInputParameter);
	i8 v3730;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3729)(&v3730, v3728, v3726);
	i8 v3731 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v3731 = v3730;

	i8 v3732 = (i8)(intptr_t)(f156_Pop);
	i2 v3733;

	((void(*)(i2* /* vid */))(intptr_t)v3732)(&v3733);
	i8 v3734 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v3734 = v3733;

	i8 v3735 = (i8)(intptr_t)c02_s016e;
	i8 v3736 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3736)(v3735);

	i8 v3737 = (i8)(intptr_t)(ws+3960);
	i8 v3738 = *(i8*)(intptr_t)v3737;
	i8 v3739 = v3738+(+14);
	i1 v3740 = *(i1*)(intptr_t)v3739;
	i8 v3741 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3741)(v3740);

	i8 v3742 = (i8)(intptr_t)c02_s016f;
	i8 v3743 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3743)(v3742);

	i8 v3744 = (i8)(intptr_t)(ws+3960);
	i8 v3745 = *(i8*)(intptr_t)v3744;
	i2 v3746 = (i2)+0;
	i8 v3747 = (i8)(intptr_t)(f150_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v3747)(v3746, v3745);

	i8 v3748 = (i8)(intptr_t)c02_s0170;
	i8 v3749 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3749)(v3748);

	i8 v3750 = (i8)(intptr_t)(ws+3968);
	i2 v3751 = *(i2*)(intptr_t)v3750;
	i8 v3752 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3752)(v3751);

	i8 v3753 = (i8)(intptr_t)c02_s0171;
	i8 v3754 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3754)(v3753);

	i8 v3755 = (i8)(intptr_t)(ws+3960);
	i8 v3756 = *(i8*)(intptr_t)v3755;
	i8 v3757 = v3756+(+16);
	i8 v3758 = *(i8*)(intptr_t)v3757;
	i8 v3759 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3759)(v3758);

	i8 v3760 = (i8)(intptr_t)c02_s0172;
	i8 v3761 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3761)(v3760);

	i8 v3762 = (i8)(intptr_t)(ws+3953);
	i1 v3763 = *(i1*)(intptr_t)v3762;
	i1 v3764 = v3763+(+1);
	i8 v3765 = (i8)(intptr_t)(ws+3953);
	*(i1*)(intptr_t)v3765 = v3764;

	goto c02_0298;

c02_029b:;

endsub:;
}
const i1 c02_s0173[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f69_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f156_Pop(i2* /* vid */);
const i1 c02_s0174[] = { 0x09,0x2a,0x70,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0175[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0176[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f150_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0177[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
const i1 c02_s0178[] = { 0x7d,0x0a,0 };
	void f87_E(i8 /* text */);
	void f102_EmitterCloseStream(void);

// emit_51 workspace at ws+3952 length ws+18
void f232_emit_51(void) {

	i8 v3766 = (i8)(intptr_t)c02_s0173;
	i8 v3767 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3767)(v3766);

	i8 v3768 = (i8)(intptr_t)(ws+40);
	i8 v3769 = *(i8*)(intptr_t)v3768;
	i8 v3770 = v3769+(+49);
	i1 v3771 = *(i1*)(intptr_t)v3770;
	i8 v3772 = (i8)(intptr_t)(ws+3952);
	*(i1*)(intptr_t)v3772 = v3771;

c02_029e:;

	i8 v3773 = (i8)(intptr_t)(ws+3952);
	i1 v3774 = *(i1*)(intptr_t)v3773;
	i1 v3775 = (i1)+0;
	if (v3774==v3775) goto c02_02a1; else goto c02_02a0;

c02_02a0:;

	i8 v3776 = (i8)(intptr_t)(ws+3952);
	i1 v3777 = *(i1*)(intptr_t)v3776;
	i1 v3778 = v3777+(-1);
	i8 v3779 = (i8)(intptr_t)(ws+3952);
	*(i1*)(intptr_t)v3779 = v3778;

	i8 v3780 = (i8)(intptr_t)(ws+40);
	i8 v3781 = *(i8*)(intptr_t)v3780;
	i8 v3782 = (i8)(intptr_t)(ws+3952);
	i1 v3783 = *(i1*)(intptr_t)v3782;
	i8 v3784 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v3785;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3784)(&v3785, v3783, v3781);
	i8 v3786 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v3786 = v3785;

	i8 v3787 = (i8)(intptr_t)(f156_Pop);
	i2 v3788;

	((void(*)(i2* /* vid */))(intptr_t)v3787)(&v3788);
	i8 v3789 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v3789 = v3788;

	i8 v3790 = (i8)(intptr_t)c02_s0174;
	i8 v3791 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3791)(v3790);

	i8 v3792 = (i8)(intptr_t)(ws+3968);
	i2 v3793 = *(i2*)(intptr_t)v3792;
	i8 v3794 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3794)(v3793);

	i8 v3795 = (i8)(intptr_t)c02_s0175;
	i8 v3796 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3796)(v3795);

	i8 v3797 = (i8)(intptr_t)(ws+3960);
	i8 v3798 = *(i8*)(intptr_t)v3797;
	i8 v3799 = v3798+(+14);
	i1 v3800 = *(i1*)(intptr_t)v3799;
	i8 v3801 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3801)(v3800);

	i8 v3802 = (i8)(intptr_t)c02_s0176;
	i8 v3803 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3803)(v3802);

	i8 v3804 = (i8)(intptr_t)(ws+3960);
	i8 v3805 = *(i8*)(intptr_t)v3804;
	i2 v3806 = (i2)+0;
	i8 v3807 = (i8)(intptr_t)(f150_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v3807)(v3806, v3805);

	i8 v3808 = (i8)(intptr_t)c02_s0177;
	i8 v3809 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3809)(v3808);

	goto c02_029e;

c02_02a1:;

	i8 v3810 = (i8)(intptr_t)c02_s0178;
	i8 v3811 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3811)(v3810);

	i8 v3812 = (i8)(intptr_t)(f102_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3812)();

endsub:;
}
	void f159_Call(i2 /* subrid */);

// emit_52 workspace at ws+3952 length ws+0
void f233_emit_52(void) {

	i8 v3813 = (i8)(intptr_t)(ws+3864);
	i8 v3814 = *(i8*)(intptr_t)v3813;
	i8 v3815 = *(i8*)(intptr_t)v3814;
	i8 v3816 = v3815+(+8);
	i2 v3817 = *(i2*)(intptr_t)v3816;
	i8 v3818 = (i8)(intptr_t)(f159_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3818)(v3817);

endsub:;
}
	void f159_Call(i2 /* subrid */);

// emit_53 workspace at ws+3952 length ws+0
void f234_emit_53(void) {

	i8 v3819 = (i8)(intptr_t)(ws+3864);
	i8 v3820 = *(i8*)(intptr_t)v3819;
	i8 v3821 = *(i8*)(intptr_t)v3820;
	i8 v3822 = v3821+(+8);
	i2 v3823 = *(i2*)(intptr_t)v3822;
	i8 v3824 = (i8)(intptr_t)(f159_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3824)(v3823);

endsub:;
}
	void f159_Call(i2 /* subrid */);

// emit_54 workspace at ws+3952 length ws+0
void f235_emit_54(void) {

	i8 v3825 = (i8)(intptr_t)(ws+3864);
	i8 v3826 = *(i8*)(intptr_t)v3825;
	i8 v3827 = *(i8*)(intptr_t)v3826;
	i8 v3828 = v3827+(+8);
	i2 v3829 = *(i2*)(intptr_t)v3828;
	i8 v3830 = (i8)(intptr_t)(f159_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3830)(v3829);

endsub:;
}
	void f159_Call(i2 /* subrid */);

// emit_55 workspace at ws+3952 length ws+0
void f236_emit_55(void) {

	i8 v3831 = (i8)(intptr_t)(ws+3864);
	i8 v3832 = *(i8*)(intptr_t)v3831;
	i8 v3833 = *(i8*)(intptr_t)v3832;
	i8 v3834 = v3833+(+8);
	i2 v3835 = *(i2*)(intptr_t)v3834;
	i8 v3836 = (i8)(intptr_t)(f159_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3836)(v3835);

endsub:;
}
	void f159_Call(i2 /* subrid */);

// emit_56 workspace at ws+3952 length ws+0
void f237_emit_56(void) {

	i8 v3837 = (i8)(intptr_t)(ws+3864);
	i8 v3838 = *(i8*)(intptr_t)v3837;
	i8 v3839 = *(i8*)(intptr_t)v3838;
	i8 v3840 = v3839+(+8);
	i2 v3841 = *(i2*)(intptr_t)v3840;
	i8 v3842 = (i8)(intptr_t)(f159_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3842)(v3841);

endsub:;
}
	void f161_LoadConstant(i4 /* value */, i1 /* width */);

// emit_66 workspace at ws+3952 length ws+0
void f238_emit_66(void) {

	i1 v3843 = (i1)+1;
	i8 v3844 = (i8)(intptr_t)(ws+3864);
	i8 v3845 = *(i8*)(intptr_t)v3844;
	i4 v3846 = *(i4*)(intptr_t)v3845;
	i8 v3847 = (i8)(intptr_t)(f161_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v3847)(v3846, v3843);

endsub:;
}
	void f161_LoadConstant(i4 /* value */, i1 /* width */);

// emit_67 workspace at ws+3952 length ws+0
void f239_emit_67(void) {

	i1 v3848 = (i1)+2;
	i8 v3849 = (i8)(intptr_t)(ws+3864);
	i8 v3850 = *(i8*)(intptr_t)v3849;
	i4 v3851 = *(i4*)(intptr_t)v3850;
	i8 v3852 = (i8)(intptr_t)(f161_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v3852)(v3851, v3848);

endsub:;
}
	void f161_LoadConstant(i4 /* value */, i1 /* width */);

// emit_68 workspace at ws+3952 length ws+0
void f240_emit_68(void) {

	i1 v3853 = (i1)+4;
	i8 v3854 = (i8)(intptr_t)(ws+3864);
	i8 v3855 = *(i8*)(intptr_t)v3854;
	i4 v3856 = *(i4*)(intptr_t)v3855;
	i8 v3857 = (i8)(intptr_t)(f161_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v3857)(v3856, v3853);

endsub:;
}
	void f161_LoadConstant(i4 /* value */, i1 /* width */);

// emit_69 workspace at ws+3952 length ws+0
void f241_emit_69(void) {

	i1 v3858 = (i1)+8;
	i8 v3859 = (i8)(intptr_t)(ws+3864);
	i8 v3860 = *(i8*)(intptr_t)v3859;
	i4 v3861 = *(i4*)(intptr_t)v3860;
	i8 v3862 = (i8)(intptr_t)(f161_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v3862)(v3861, v3858);

endsub:;
}
	void f154_Push(i2* /* vid */);
const i1 c02_s0179[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s017a[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f150_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s017b[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_70 workspace at ws+3952 length ws+2
void f242_emit_70(void) {

	i8 v3863 = (i8)(intptr_t)(f154_Push);
	i2 v3864;

	((void(*)(i2* /* vid */))(intptr_t)v3863)(&v3864);
	i8 v3865 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v3865 = v3864;

	i8 v3866 = (i8)(intptr_t)c02_s0179;
	i8 v3867 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3867)(v3866);

	i8 v3868 = (i8)(intptr_t)(ws+3952);
	i2 v3869 = *(i2*)(intptr_t)v3868;
	i8 v3870 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3870)(v3869);

	i8 v3871 = (i8)(intptr_t)c02_s017a;
	i8 v3872 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3872)(v3871);

	i8 v3873 = (i8)(intptr_t)(ws+3864);
	i8 v3874 = *(i8*)(intptr_t)v3873;
	i8 v3875 = (i8)(intptr_t)(ws+3864);
	i8 v3876 = *(i8*)(intptr_t)v3875;
	i8 v3877 = v3876+(+16);
	i2 v3878 = *(i2*)(intptr_t)v3877;
	i8 v3879 = (i8)(intptr_t)(f150_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v3879)(v3878, v3874);

	i8 v3880 = (i8)(intptr_t)c02_s017b;
	i8 v3881 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3881)(v3880);

endsub:;
}
	void f154_Push(i2* /* vid */);
const i1 c02_s017c[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s017d[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f149_E_subref_sig(i8 /* subr */);
const i1 c02_s017e[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_71 workspace at ws+3952 length ws+2
void f243_emit_71(void) {

	i8 v3882 = (i8)(intptr_t)(f154_Push);
	i2 v3883;

	((void(*)(i2* /* vid */))(intptr_t)v3882)(&v3883);
	i8 v3884 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v3884 = v3883;

	i8 v3885 = (i8)(intptr_t)c02_s017c;
	i8 v3886 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3886)(v3885);

	i8 v3887 = (i8)(intptr_t)(ws+3952);
	i2 v3888 = *(i2*)(intptr_t)v3887;
	i8 v3889 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3889)(v3888);

	i8 v3890 = (i8)(intptr_t)c02_s017d;
	i8 v3891 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3891)(v3890);

	i8 v3892 = (i8)(intptr_t)(ws+3864);
	i8 v3893 = *(i8*)(intptr_t)v3892;
	i8 v3894 = *(i8*)(intptr_t)v3893;
	i8 v3895 = (i8)(intptr_t)(f149_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v3895)(v3894);

	i8 v3896 = (i8)(intptr_t)c02_s017e;
	i8 v3897 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3897)(v3896);

endsub:;
}
	void f163_LoadVV(i1 /* width */);

// emit_72 workspace at ws+3952 length ws+0
void f244_emit_72(void) {

	i1 v3898 = (i1)+1;
	i8 v3899 = (i8)(intptr_t)(f163_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v3899)(v3898);

endsub:;
}
	void f163_LoadVV(i1 /* width */);

// emit_73 workspace at ws+3952 length ws+0
void f245_emit_73(void) {

	i1 v3900 = (i1)+2;
	i8 v3901 = (i8)(intptr_t)(f163_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v3901)(v3900);

endsub:;
}
	void f163_LoadVV(i1 /* width */);

// emit_74 workspace at ws+3952 length ws+0
void f246_emit_74(void) {

	i1 v3902 = (i1)+4;
	i8 v3903 = (i8)(intptr_t)(f163_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v3903)(v3902);

endsub:;
}
	void f163_LoadVV(i1 /* width */);

// emit_75 workspace at ws+3952 length ws+0
void f247_emit_75(void) {

	i1 v3904 = (i1)+8;
	i8 v3905 = (i8)(intptr_t)(f163_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v3905)(v3904);

endsub:;
}
const i1 c02_s017f[] = { 0x2b,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_76 workspace at ws+3952 length ws+0
void f248_emit_76(void) {

	i1 v3906 = (i1)+1;
	i8 v3907 = (i8)(intptr_t)c02_s017f;
	i8 v3908 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3908)(v3907, v3906);

endsub:;
}
const i1 c02_s0180[] = { 0x2b,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_77 workspace at ws+3952 length ws+0
void f249_emit_77(void) {

	i1 v3909 = (i1)+2;
	i8 v3910 = (i8)(intptr_t)c02_s0180;
	i8 v3911 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3911)(v3910, v3909);

endsub:;
}
const i1 c02_s0181[] = { 0x2b,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_78 workspace at ws+3952 length ws+0
void f250_emit_78(void) {

	i1 v3912 = (i1)+4;
	i8 v3913 = (i8)(intptr_t)c02_s0181;
	i8 v3914 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3914)(v3913, v3912);

endsub:;
}
const i1 c02_s0182[] = { 0x2b,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_79 workspace at ws+3952 length ws+0
void f251_emit_79(void) {

	i1 v3915 = (i1)+8;
	i8 v3916 = (i8)(intptr_t)c02_s0182;
	i8 v3917 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3917)(v3916, v3915);

endsub:;
}
const i1 c02_s0183[] = { 0x2d,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_80 workspace at ws+3952 length ws+0
void f252_emit_80(void) {

	i1 v3918 = (i1)+1;
	i8 v3919 = (i8)(intptr_t)c02_s0183;
	i8 v3920 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3920)(v3919, v3918);

endsub:;
}
const i1 c02_s0184[] = { 0x2d,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_81 workspace at ws+3952 length ws+0
void f253_emit_81(void) {

	i1 v3921 = (i1)+2;
	i8 v3922 = (i8)(intptr_t)c02_s0184;
	i8 v3923 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3923)(v3922, v3921);

endsub:;
}
const i1 c02_s0185[] = { 0x2d,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_82 workspace at ws+3952 length ws+0
void f254_emit_82(void) {

	i1 v3924 = (i1)+4;
	i8 v3925 = (i8)(intptr_t)c02_s0185;
	i8 v3926 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3926)(v3925, v3924);

endsub:;
}
const i1 c02_s0186[] = { 0x2d,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_83 workspace at ws+3952 length ws+0
void f255_emit_83(void) {

	i1 v3927 = (i1)+8;
	i8 v3928 = (i8)(intptr_t)c02_s0186;
	i8 v3929 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3929)(v3928, v3927);

endsub:;
}
const i1 c02_s0187[] = { 0x2a,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_84 workspace at ws+3952 length ws+0
void f256_emit_84(void) {

	i1 v3930 = (i1)+1;
	i8 v3931 = (i8)(intptr_t)c02_s0187;
	i8 v3932 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3932)(v3931, v3930);

endsub:;
}
const i1 c02_s0188[] = { 0x2a,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_85 workspace at ws+3952 length ws+0
void f257_emit_85(void) {

	i1 v3933 = (i1)+2;
	i8 v3934 = (i8)(intptr_t)c02_s0188;
	i8 v3935 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3935)(v3934, v3933);

endsub:;
}
const i1 c02_s0189[] = { 0x2a,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_86 workspace at ws+3952 length ws+0
void f258_emit_86(void) {

	i1 v3936 = (i1)+4;
	i8 v3937 = (i8)(intptr_t)c02_s0189;
	i8 v3938 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3938)(v3937, v3936);

endsub:;
}
const i1 c02_s018a[] = { 0x2a,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_87 workspace at ws+3952 length ws+0
void f259_emit_87(void) {

	i1 v3939 = (i1)+8;
	i8 v3940 = (i8)(intptr_t)c02_s018a;
	i8 v3941 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3941)(v3940, v3939);

endsub:;
}
const i1 c02_s018b[] = { 0x2f,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_88 workspace at ws+3952 length ws+0
void f260_emit_88(void) {

	i1 v3942 = (i1)+1;
	i8 v3943 = (i8)(intptr_t)c02_s018b;
	i8 v3944 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3944)(v3943, v3942);

endsub:;
}
const i1 c02_s018c[] = { 0x2f,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_89 workspace at ws+3952 length ws+0
void f261_emit_89(void) {

	i1 v3945 = (i1)+2;
	i8 v3946 = (i8)(intptr_t)c02_s018c;
	i8 v3947 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3947)(v3946, v3945);

endsub:;
}
const i1 c02_s018d[] = { 0x2f,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_90 workspace at ws+3952 length ws+0
void f262_emit_90(void) {

	i1 v3948 = (i1)+4;
	i8 v3949 = (i8)(intptr_t)c02_s018d;
	i8 v3950 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3950)(v3949, v3948);

endsub:;
}
const i1 c02_s018e[] = { 0x2f,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_91 workspace at ws+3952 length ws+0
void f263_emit_91(void) {

	i1 v3951 = (i1)+8;
	i8 v3952 = (i8)(intptr_t)c02_s018e;
	i8 v3953 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3953)(v3952, v3951);

endsub:;
}
const i1 c02_s018f[] = { 0x25,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_92 workspace at ws+3952 length ws+0
void f264_emit_92(void) {

	i1 v3954 = (i1)+1;
	i8 v3955 = (i8)(intptr_t)c02_s018f;
	i8 v3956 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3956)(v3955, v3954);

endsub:;
}
const i1 c02_s0190[] = { 0x25,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_93 workspace at ws+3952 length ws+0
void f265_emit_93(void) {

	i1 v3957 = (i1)+2;
	i8 v3958 = (i8)(intptr_t)c02_s0190;
	i8 v3959 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3959)(v3958, v3957);

endsub:;
}
const i1 c02_s0191[] = { 0x25,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_94 workspace at ws+3952 length ws+0
void f266_emit_94(void) {

	i1 v3960 = (i1)+4;
	i8 v3961 = (i8)(intptr_t)c02_s0191;
	i8 v3962 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3962)(v3961, v3960);

endsub:;
}
const i1 c02_s0192[] = { 0x25,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_95 workspace at ws+3952 length ws+0
void f267_emit_95(void) {

	i1 v3963 = (i1)+8;
	i8 v3964 = (i8)(intptr_t)c02_s0192;
	i8 v3965 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3965)(v3964, v3963);

endsub:;
}
const i1 c02_s0193[] = { 0x2f,0 };
	void f166_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_96 workspace at ws+3952 length ws+0
void f268_emit_96(void) {

	i1 v3966 = (i1)+1;
	i8 v3967 = (i8)(intptr_t)c02_s0193;
	i8 v3968 = (i8)(intptr_t)(f166_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3968)(v3967, v3966);

endsub:;
}
const i1 c02_s0194[] = { 0x2f,0 };
	void f166_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_97 workspace at ws+3952 length ws+0
void f269_emit_97(void) {

	i1 v3969 = (i1)+2;
	i8 v3970 = (i8)(intptr_t)c02_s0194;
	i8 v3971 = (i8)(intptr_t)(f166_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3971)(v3970, v3969);

endsub:;
}
const i1 c02_s0195[] = { 0x2f,0 };
	void f166_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_98 workspace at ws+3952 length ws+0
void f270_emit_98(void) {

	i1 v3972 = (i1)+4;
	i8 v3973 = (i8)(intptr_t)c02_s0195;
	i8 v3974 = (i8)(intptr_t)(f166_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3974)(v3973, v3972);

endsub:;
}
const i1 c02_s0196[] = { 0x2f,0 };
	void f166_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_99 workspace at ws+3952 length ws+0
void f271_emit_99(void) {

	i1 v3975 = (i1)+8;
	i8 v3976 = (i8)(intptr_t)c02_s0196;
	i8 v3977 = (i8)(intptr_t)(f166_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3977)(v3976, v3975);

endsub:;
}
const i1 c02_s0197[] = { 0x25,0 };
	void f166_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_100 workspace at ws+3952 length ws+0
void f272_emit_100(void) {

	i1 v3978 = (i1)+1;
	i8 v3979 = (i8)(intptr_t)c02_s0197;
	i8 v3980 = (i8)(intptr_t)(f166_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3980)(v3979, v3978);

endsub:;
}
const i1 c02_s0198[] = { 0x25,0 };
	void f166_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_101 workspace at ws+3952 length ws+0
void f273_emit_101(void) {

	i1 v3981 = (i1)+2;
	i8 v3982 = (i8)(intptr_t)c02_s0198;
	i8 v3983 = (i8)(intptr_t)(f166_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3983)(v3982, v3981);

endsub:;
}
const i1 c02_s0199[] = { 0x25,0 };
	void f166_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_102 workspace at ws+3952 length ws+0
void f274_emit_102(void) {

	i1 v3984 = (i1)+4;
	i8 v3985 = (i8)(intptr_t)c02_s0199;
	i8 v3986 = (i8)(intptr_t)(f166_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3986)(v3985, v3984);

endsub:;
}
const i1 c02_s019a[] = { 0x25,0 };
	void f166_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_103 workspace at ws+3952 length ws+0
void f275_emit_103(void) {

	i1 v3987 = (i1)+8;
	i8 v3988 = (i8)(intptr_t)c02_s019a;
	i8 v3989 = (i8)(intptr_t)(f166_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3989)(v3988, v3987);

endsub:;
}
const i1 c02_s019b[] = { 0x26,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_104 workspace at ws+3952 length ws+0
void f276_emit_104(void) {

	i1 v3990 = (i1)+1;
	i8 v3991 = (i8)(intptr_t)c02_s019b;
	i8 v3992 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3992)(v3991, v3990);

endsub:;
}
const i1 c02_s019c[] = { 0x26,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_105 workspace at ws+3952 length ws+0
void f277_emit_105(void) {

	i1 v3993 = (i1)+2;
	i8 v3994 = (i8)(intptr_t)c02_s019c;
	i8 v3995 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3995)(v3994, v3993);

endsub:;
}
const i1 c02_s019d[] = { 0x26,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_106 workspace at ws+3952 length ws+0
void f278_emit_106(void) {

	i1 v3996 = (i1)+4;
	i8 v3997 = (i8)(intptr_t)c02_s019d;
	i8 v3998 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3998)(v3997, v3996);

endsub:;
}
const i1 c02_s019e[] = { 0x26,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_107 workspace at ws+3952 length ws+0
void f279_emit_107(void) {

	i1 v3999 = (i1)+8;
	i8 v4000 = (i8)(intptr_t)c02_s019e;
	i8 v4001 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4001)(v4000, v3999);

endsub:;
}
const i1 c02_s019f[] = { 0x7c,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_108 workspace at ws+3952 length ws+0
void f280_emit_108(void) {

	i1 v4002 = (i1)+1;
	i8 v4003 = (i8)(intptr_t)c02_s019f;
	i8 v4004 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4004)(v4003, v4002);

endsub:;
}
const i1 c02_s01a0[] = { 0x7c,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_109 workspace at ws+3952 length ws+0
void f281_emit_109(void) {

	i1 v4005 = (i1)+2;
	i8 v4006 = (i8)(intptr_t)c02_s01a0;
	i8 v4007 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4007)(v4006, v4005);

endsub:;
}
const i1 c02_s01a1[] = { 0x7c,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_110 workspace at ws+3952 length ws+0
void f282_emit_110(void) {

	i1 v4008 = (i1)+4;
	i8 v4009 = (i8)(intptr_t)c02_s01a1;
	i8 v4010 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4010)(v4009, v4008);

endsub:;
}
const i1 c02_s01a2[] = { 0x7c,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_111 workspace at ws+3952 length ws+0
void f283_emit_111(void) {

	i1 v4011 = (i1)+8;
	i8 v4012 = (i8)(intptr_t)c02_s01a2;
	i8 v4013 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4013)(v4012, v4011);

endsub:;
}
const i1 c02_s01a3[] = { 0x5e,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_112 workspace at ws+3952 length ws+0
void f284_emit_112(void) {

	i1 v4014 = (i1)+1;
	i8 v4015 = (i8)(intptr_t)c02_s01a3;
	i8 v4016 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4016)(v4015, v4014);

endsub:;
}
const i1 c02_s01a4[] = { 0x5e,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_113 workspace at ws+3952 length ws+0
void f285_emit_113(void) {

	i1 v4017 = (i1)+2;
	i8 v4018 = (i8)(intptr_t)c02_s01a4;
	i8 v4019 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4019)(v4018, v4017);

endsub:;
}
const i1 c02_s01a5[] = { 0x5e,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_114 workspace at ws+3952 length ws+0
void f286_emit_114(void) {

	i1 v4020 = (i1)+4;
	i8 v4021 = (i8)(intptr_t)c02_s01a5;
	i8 v4022 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4022)(v4021, v4020);

endsub:;
}
const i1 c02_s01a6[] = { 0x5e,0 };
	void f164_Op2VV(i8 /* op */, i1 /* width */);

// emit_115 workspace at ws+3952 length ws+0
void f287_emit_115(void) {

	i1 v4023 = (i1)+8;
	i8 v4024 = (i8)(intptr_t)c02_s01a6;
	i8 v4025 = (i8)(intptr_t)(f164_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4025)(v4024, v4023);

endsub:;
}
const i1 c02_s01a7[] = { 0x2d,0 };
	void f168_Op1V(i8 /* op */, i1 /* width */);

// emit_116 workspace at ws+3952 length ws+0
void f288_emit_116(void) {

	i1 v4026 = (i1)+1;
	i8 v4027 = (i8)(intptr_t)c02_s01a7;
	i8 v4028 = (i8)(intptr_t)(f168_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4028)(v4027, v4026);

endsub:;
}
const i1 c02_s01a8[] = { 0x2d,0 };
	void f168_Op1V(i8 /* op */, i1 /* width */);

// emit_117 workspace at ws+3952 length ws+0
void f289_emit_117(void) {

	i1 v4029 = (i1)+2;
	i8 v4030 = (i8)(intptr_t)c02_s01a8;
	i8 v4031 = (i8)(intptr_t)(f168_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4031)(v4030, v4029);

endsub:;
}
const i1 c02_s01a9[] = { 0x2d,0 };
	void f168_Op1V(i8 /* op */, i1 /* width */);

// emit_118 workspace at ws+3952 length ws+0
void f290_emit_118(void) {

	i1 v4032 = (i1)+4;
	i8 v4033 = (i8)(intptr_t)c02_s01a9;
	i8 v4034 = (i8)(intptr_t)(f168_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4034)(v4033, v4032);

endsub:;
}
const i1 c02_s01aa[] = { 0x2d,0 };
	void f168_Op1V(i8 /* op */, i1 /* width */);

// emit_119 workspace at ws+3952 length ws+0
void f291_emit_119(void) {

	i1 v4035 = (i1)+8;
	i8 v4036 = (i8)(intptr_t)c02_s01aa;
	i8 v4037 = (i8)(intptr_t)(f168_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4037)(v4036, v4035);

endsub:;
}
const i1 c02_s01ab[] = { 0x7e,0 };
	void f168_Op1V(i8 /* op */, i1 /* width */);

// emit_120 workspace at ws+3952 length ws+0
void f292_emit_120(void) {

	i1 v4038 = (i1)+1;
	i8 v4039 = (i8)(intptr_t)c02_s01ab;
	i8 v4040 = (i8)(intptr_t)(f168_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4040)(v4039, v4038);

endsub:;
}
const i1 c02_s01ac[] = { 0x7e,0 };
	void f168_Op1V(i8 /* op */, i1 /* width */);

// emit_121 workspace at ws+3952 length ws+0
void f293_emit_121(void) {

	i1 v4041 = (i1)+2;
	i8 v4042 = (i8)(intptr_t)c02_s01ac;
	i8 v4043 = (i8)(intptr_t)(f168_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4043)(v4042, v4041);

endsub:;
}
const i1 c02_s01ad[] = { 0x7e,0 };
	void f168_Op1V(i8 /* op */, i1 /* width */);

// emit_122 workspace at ws+3952 length ws+0
void f294_emit_122(void) {

	i1 v4044 = (i1)+4;
	i8 v4045 = (i8)(intptr_t)c02_s01ad;
	i8 v4046 = (i8)(intptr_t)(f168_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4046)(v4045, v4044);

endsub:;
}
const i1 c02_s01ae[] = { 0x7e,0 };
	void f168_Op1V(i8 /* op */, i1 /* width */);

// emit_123 workspace at ws+3952 length ws+0
void f295_emit_123(void) {

	i1 v4047 = (i1)+8;
	i8 v4048 = (i8)(intptr_t)c02_s01ae;
	i8 v4049 = (i8)(intptr_t)(f168_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4049)(v4048, v4047);

endsub:;
}
const i1 c02_s01af[] = { 0x69,0x31,0 };
const i1 c02_s01b0[] = { 0x3c,0x3c,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_124 workspace at ws+3952 length ws+0
void f296_emit_124(void) {

	i1 v4050 = (i1)+1;
	i8 v4051 = (i8)(intptr_t)c02_s01af;
	i8 v4052 = (i8)(intptr_t)c02_s01b0;
	i8 v4053 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4053)(v4052, v4051, v4050);

endsub:;
}
const i1 c02_s01b1[] = { 0x69,0x32,0 };
const i1 c02_s01b2[] = { 0x3c,0x3c,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_125 workspace at ws+3952 length ws+0
void f297_emit_125(void) {

	i1 v4054 = (i1)+2;
	i8 v4055 = (i8)(intptr_t)c02_s01b1;
	i8 v4056 = (i8)(intptr_t)c02_s01b2;
	i8 v4057 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4057)(v4056, v4055, v4054);

endsub:;
}
const i1 c02_s01b3[] = { 0x69,0x34,0 };
const i1 c02_s01b4[] = { 0x3c,0x3c,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_126 workspace at ws+3952 length ws+0
void f298_emit_126(void) {

	i1 v4058 = (i1)+4;
	i8 v4059 = (i8)(intptr_t)c02_s01b3;
	i8 v4060 = (i8)(intptr_t)c02_s01b4;
	i8 v4061 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4061)(v4060, v4059, v4058);

endsub:;
}
const i1 c02_s01b5[] = { 0x69,0x38,0 };
const i1 c02_s01b6[] = { 0x3c,0x3c,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_127 workspace at ws+3952 length ws+0
void f299_emit_127(void) {

	i1 v4062 = (i1)+8;
	i8 v4063 = (i8)(intptr_t)c02_s01b5;
	i8 v4064 = (i8)(intptr_t)c02_s01b6;
	i8 v4065 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4065)(v4064, v4063, v4062);

endsub:;
}
const i1 c02_s01b7[] = { 0x69,0x31,0 };
const i1 c02_s01b8[] = { 0x3e,0x3e,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_128 workspace at ws+3952 length ws+0
void f300_emit_128(void) {

	i1 v4066 = (i1)+1;
	i8 v4067 = (i8)(intptr_t)c02_s01b7;
	i8 v4068 = (i8)(intptr_t)c02_s01b8;
	i8 v4069 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4069)(v4068, v4067, v4066);

endsub:;
}
const i1 c02_s01b9[] = { 0x69,0x32,0 };
const i1 c02_s01ba[] = { 0x3e,0x3e,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_129 workspace at ws+3952 length ws+0
void f301_emit_129(void) {

	i1 v4070 = (i1)+2;
	i8 v4071 = (i8)(intptr_t)c02_s01b9;
	i8 v4072 = (i8)(intptr_t)c02_s01ba;
	i8 v4073 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4073)(v4072, v4071, v4070);

endsub:;
}
const i1 c02_s01bb[] = { 0x69,0x34,0 };
const i1 c02_s01bc[] = { 0x3e,0x3e,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_130 workspace at ws+3952 length ws+0
void f302_emit_130(void) {

	i1 v4074 = (i1)+4;
	i8 v4075 = (i8)(intptr_t)c02_s01bb;
	i8 v4076 = (i8)(intptr_t)c02_s01bc;
	i8 v4077 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4077)(v4076, v4075, v4074);

endsub:;
}
const i1 c02_s01bd[] = { 0x69,0x38,0 };
const i1 c02_s01be[] = { 0x3e,0x3e,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_131 workspace at ws+3952 length ws+0
void f303_emit_131(void) {

	i1 v4078 = (i1)+8;
	i8 v4079 = (i8)(intptr_t)c02_s01bd;
	i8 v4080 = (i8)(intptr_t)c02_s01be;
	i8 v4081 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4081)(v4080, v4079, v4078);

endsub:;
}
const i1 c02_s01bf[] = { 0x73,0x31,0 };
const i1 c02_s01c0[] = { 0x3e,0x3e,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_132 workspace at ws+3952 length ws+0
void f304_emit_132(void) {

	i1 v4082 = (i1)+1;
	i8 v4083 = (i8)(intptr_t)c02_s01bf;
	i8 v4084 = (i8)(intptr_t)c02_s01c0;
	i8 v4085 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4085)(v4084, v4083, v4082);

endsub:;
}
const i1 c02_s01c1[] = { 0x73,0x32,0 };
const i1 c02_s01c2[] = { 0x3e,0x3e,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_133 workspace at ws+3952 length ws+0
void f305_emit_133(void) {

	i1 v4086 = (i1)+2;
	i8 v4087 = (i8)(intptr_t)c02_s01c1;
	i8 v4088 = (i8)(intptr_t)c02_s01c2;
	i8 v4089 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4089)(v4088, v4087, v4086);

endsub:;
}
const i1 c02_s01c3[] = { 0x73,0x34,0 };
const i1 c02_s01c4[] = { 0x3e,0x3e,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_134 workspace at ws+3952 length ws+0
void f306_emit_134(void) {

	i1 v4090 = (i1)+4;
	i8 v4091 = (i8)(intptr_t)c02_s01c3;
	i8 v4092 = (i8)(intptr_t)c02_s01c4;
	i8 v4093 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4093)(v4092, v4091, v4090);

endsub:;
}
const i1 c02_s01c5[] = { 0x73,0x38,0 };
const i1 c02_s01c6[] = { 0x3e,0x3e,0 };
	void f169_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_135 workspace at ws+3952 length ws+0
void f307_emit_135(void) {

	i1 v4094 = (i1)+8;
	i8 v4095 = (i8)(intptr_t)c02_s01c5;
	i8 v4096 = (i8)(intptr_t)c02_s01c6;
	i8 v4097 = (i8)(intptr_t)(f169_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4097)(v4096, v4095, v4094);

endsub:;
}
const i1 c02_s01c7[] = { 0x3d,0x3d,0 };
	void f170_Branch(i8 /* op */, i8 /* node */);

// emit_136 workspace at ws+3952 length ws+0
void f308_emit_136(void) {

	i8 v4098 = (i8)(intptr_t)(ws+3856);
	i8 v4099 = *(i8*)(intptr_t)v4098;
	i8 v4100 = v4099+(+16);
	i8 v4101 = *(i8*)(intptr_t)v4100;
	i8 v4102 = (i8)(intptr_t)c02_s01c7;
	i8 v4103 = (i8)(intptr_t)(f170_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4103)(v4102, v4101);

endsub:;
}
const i1 c02_s01c8[] = { 0x3d,0x3d,0 };
	void f170_Branch(i8 /* op */, i8 /* node */);

// emit_137 workspace at ws+3952 length ws+0
void f309_emit_137(void) {

	i8 v4104 = (i8)(intptr_t)(ws+3856);
	i8 v4105 = *(i8*)(intptr_t)v4104;
	i8 v4106 = v4105+(+16);
	i8 v4107 = *(i8*)(intptr_t)v4106;
	i8 v4108 = (i8)(intptr_t)c02_s01c8;
	i8 v4109 = (i8)(intptr_t)(f170_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4109)(v4108, v4107);

endsub:;
}
const i1 c02_s01c9[] = { 0x3d,0x3d,0 };
	void f170_Branch(i8 /* op */, i8 /* node */);

// emit_138 workspace at ws+3952 length ws+0
void f310_emit_138(void) {

	i8 v4110 = (i8)(intptr_t)(ws+3856);
	i8 v4111 = *(i8*)(intptr_t)v4110;
	i8 v4112 = v4111+(+16);
	i8 v4113 = *(i8*)(intptr_t)v4112;
	i8 v4114 = (i8)(intptr_t)c02_s01c9;
	i8 v4115 = (i8)(intptr_t)(f170_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4115)(v4114, v4113);

endsub:;
}
const i1 c02_s01ca[] = { 0x3d,0x3d,0 };
	void f170_Branch(i8 /* op */, i8 /* node */);

// emit_139 workspace at ws+3952 length ws+0
void f311_emit_139(void) {

	i8 v4116 = (i8)(intptr_t)(ws+3856);
	i8 v4117 = *(i8*)(intptr_t)v4116;
	i8 v4118 = v4117+(+16);
	i8 v4119 = *(i8*)(intptr_t)v4118;
	i8 v4120 = (i8)(intptr_t)c02_s01ca;
	i8 v4121 = (i8)(intptr_t)(f170_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4121)(v4120, v4119);

endsub:;
}
const i1 c02_s01cb[] = { 0x3c,0 };
	void f170_Branch(i8 /* op */, i8 /* node */);

// emit_140 workspace at ws+3952 length ws+0
void f312_emit_140(void) {

	i8 v4122 = (i8)(intptr_t)(ws+3856);
	i8 v4123 = *(i8*)(intptr_t)v4122;
	i8 v4124 = v4123+(+16);
	i8 v4125 = *(i8*)(intptr_t)v4124;
	i8 v4126 = (i8)(intptr_t)c02_s01cb;
	i8 v4127 = (i8)(intptr_t)(f170_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4127)(v4126, v4125);

endsub:;
}
const i1 c02_s01cc[] = { 0x3c,0 };
	void f170_Branch(i8 /* op */, i8 /* node */);

// emit_141 workspace at ws+3952 length ws+0
void f313_emit_141(void) {

	i8 v4128 = (i8)(intptr_t)(ws+3856);
	i8 v4129 = *(i8*)(intptr_t)v4128;
	i8 v4130 = v4129+(+16);
	i8 v4131 = *(i8*)(intptr_t)v4130;
	i8 v4132 = (i8)(intptr_t)c02_s01cc;
	i8 v4133 = (i8)(intptr_t)(f170_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4133)(v4132, v4131);

endsub:;
}
const i1 c02_s01cd[] = { 0x3c,0 };
	void f170_Branch(i8 /* op */, i8 /* node */);

// emit_142 workspace at ws+3952 length ws+0
void f314_emit_142(void) {

	i8 v4134 = (i8)(intptr_t)(ws+3856);
	i8 v4135 = *(i8*)(intptr_t)v4134;
	i8 v4136 = v4135+(+16);
	i8 v4137 = *(i8*)(intptr_t)v4136;
	i8 v4138 = (i8)(intptr_t)c02_s01cd;
	i8 v4139 = (i8)(intptr_t)(f170_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4139)(v4138, v4137);

endsub:;
}
const i1 c02_s01ce[] = { 0x3c,0 };
	void f170_Branch(i8 /* op */, i8 /* node */);

// emit_143 workspace at ws+3952 length ws+0
void f315_emit_143(void) {

	i8 v4140 = (i8)(intptr_t)(ws+3856);
	i8 v4141 = *(i8*)(intptr_t)v4140;
	i8 v4142 = v4141+(+16);
	i8 v4143 = *(i8*)(intptr_t)v4142;
	i8 v4144 = (i8)(intptr_t)c02_s01ce;
	i8 v4145 = (i8)(intptr_t)(f170_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4145)(v4144, v4143);

endsub:;
}
const i1 c02_s01cf[] = { 0x3c,0 };
	void f171_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_144 workspace at ws+3952 length ws+0
void f316_emit_144(void) {

	i8 v4146 = (i8)(intptr_t)(ws+3856);
	i8 v4147 = *(i8*)(intptr_t)v4146;
	i8 v4148 = v4147+(+16);
	i8 v4149 = *(i8*)(intptr_t)v4148;
	i1 v4150 = (i1)+1;
	i8 v4151 = (i8)(intptr_t)c02_s01cf;
	i8 v4152 = (i8)(intptr_t)(f171_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4152)(v4151, v4150, v4149);

endsub:;
}
const i1 c02_s01d0[] = { 0x3c,0 };
	void f171_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_145 workspace at ws+3952 length ws+0
void f317_emit_145(void) {

	i8 v4153 = (i8)(intptr_t)(ws+3856);
	i8 v4154 = *(i8*)(intptr_t)v4153;
	i8 v4155 = v4154+(+16);
	i8 v4156 = *(i8*)(intptr_t)v4155;
	i1 v4157 = (i1)+2;
	i8 v4158 = (i8)(intptr_t)c02_s01d0;
	i8 v4159 = (i8)(intptr_t)(f171_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4159)(v4158, v4157, v4156);

endsub:;
}
const i1 c02_s01d1[] = { 0x3c,0 };
	void f171_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_146 workspace at ws+3952 length ws+0
void f318_emit_146(void) {

	i8 v4160 = (i8)(intptr_t)(ws+3856);
	i8 v4161 = *(i8*)(intptr_t)v4160;
	i8 v4162 = v4161+(+16);
	i8 v4163 = *(i8*)(intptr_t)v4162;
	i1 v4164 = (i1)+4;
	i8 v4165 = (i8)(intptr_t)c02_s01d1;
	i8 v4166 = (i8)(intptr_t)(f171_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4166)(v4165, v4164, v4163);

endsub:;
}
const i1 c02_s01d2[] = { 0x3c,0 };
	void f171_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_147 workspace at ws+3952 length ws+0
void f319_emit_147(void) {

	i8 v4167 = (i8)(intptr_t)(ws+3856);
	i8 v4168 = *(i8*)(intptr_t)v4167;
	i8 v4169 = v4168+(+16);
	i8 v4170 = *(i8*)(intptr_t)v4169;
	i1 v4171 = (i1)+8;
	i8 v4172 = (i8)(intptr_t)c02_s01d2;
	i8 v4173 = (i8)(intptr_t)(f171_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4173)(v4172, v4171, v4170);

endsub:;
}
	void f173_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_152 workspace at ws+3952 length ws+0
void f320_emit_152(void) {

	i8 v4174 = (i8)(intptr_t)(ws+3864);
	i8 v4175 = *(i8*)(intptr_t)v4174;
	i4 v4176 = *(i4*)(intptr_t)v4175;
	i4 v4177 = v4176&(+255);
	i8 v4178 = (i8)(intptr_t)(ws+3864);
	i8 v4179 = *(i8*)(intptr_t)v4178;
	i8 v4180 = v4179+(+4);
	i2 v4181 = *(i2*)(intptr_t)v4180;
	i8 v4182 = (i8)(intptr_t)(f173_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4182)(v4181, v4177);

endsub:;
}
	void f173_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_153 workspace at ws+3952 length ws+0
void f321_emit_153(void) {

	i8 v4183 = (i8)(intptr_t)(ws+3864);
	i8 v4184 = *(i8*)(intptr_t)v4183;
	i4 v4185 = *(i4*)(intptr_t)v4184;
	i4 v4186 = v4185&(+65535);
	i8 v4187 = (i8)(intptr_t)(ws+3864);
	i8 v4188 = *(i8*)(intptr_t)v4187;
	i8 v4189 = v4188+(+4);
	i2 v4190 = *(i2*)(intptr_t)v4189;
	i8 v4191 = (i8)(intptr_t)(f173_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4191)(v4190, v4186);

endsub:;
}
	void f173_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_154 workspace at ws+3952 length ws+0
void f322_emit_154(void) {

	i8 v4192 = (i8)(intptr_t)(ws+3864);
	i8 v4193 = *(i8*)(intptr_t)v4192;
	i4 v4194 = *(i4*)(intptr_t)v4193;
	i4 v4195 = v4194&(-1);
	i8 v4196 = (i8)(intptr_t)(ws+3864);
	i8 v4197 = *(i8*)(intptr_t)v4196;
	i8 v4198 = v4197+(+4);
	i2 v4199 = *(i2*)(intptr_t)v4198;
	i8 v4200 = (i8)(intptr_t)(f173_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4200)(v4199, v4195);

endsub:;
}
	void f173_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_155 workspace at ws+3952 length ws+0
void f323_emit_155(void) {

	i8 v4201 = (i8)(intptr_t)(ws+3864);
	i8 v4202 = *(i8*)(intptr_t)v4201;
	i4 v4203 = *(i4*)(intptr_t)v4202;
	i8 v4204 = (i8)(intptr_t)(ws+3864);
	i8 v4205 = *(i8*)(intptr_t)v4204;
	i8 v4206 = v4205+(+4);
	i2 v4207 = *(i2*)(intptr_t)v4206;
	i8 v4208 = (i8)(intptr_t)(f173_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4208)(v4207, v4203);

endsub:;
}

// emit_156 workspace at ws+3952 length ws+0
void f324_emit_156(void) {

	i8 v4209 = (i8)(intptr_t)(ws+3584);
	i1 v4210 = *(i1*)(intptr_t)v4209;
	i1 v4211 = v4210+(-1);
	i8 v4212 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v4212 = v4211;

endsub:;
}

// emit_157 workspace at ws+3952 length ws+0
void f325_emit_157(void) {

	i8 v4213 = (i8)(intptr_t)(ws+3584);
	i1 v4214 = *(i1*)(intptr_t)v4213;
	i1 v4215 = v4214+(-1);
	i8 v4216 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v4216 = v4215;

endsub:;
}

// emit_158 workspace at ws+3952 length ws+0
void f326_emit_158(void) {

	i8 v4217 = (i8)(intptr_t)(ws+3584);
	i1 v4218 = *(i1*)(intptr_t)v4217;
	i1 v4219 = v4218+(-1);
	i8 v4220 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v4220 = v4219;

endsub:;
}

// emit_159 workspace at ws+3952 length ws+0
void f327_emit_159(void) {

	i8 v4221 = (i8)(intptr_t)(ws+3584);
	i1 v4222 = *(i1*)(intptr_t)v4221;
	i1 v4223 = v4222+(-1);
	i8 v4224 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v4224 = v4223;

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_160 workspace at ws+3952 length ws+0
void f328_emit_160(void) {

	i1 v4225 = (i1)+1;
	i1 v4226 = (i1)+2;
	i8 v4227 = (i8)(intptr_t)(ws+3864);
	i8 v4228 = *(i8*)(intptr_t)v4227;
	i1 v4229 = *(i1*)(intptr_t)v4228;
	i8 v4230 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4230)(v4229, v4226, v4225);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_161 workspace at ws+3952 length ws+0
void f329_emit_161(void) {

	i1 v4231 = (i1)+1;
	i1 v4232 = (i1)+4;
	i8 v4233 = (i8)(intptr_t)(ws+3864);
	i8 v4234 = *(i8*)(intptr_t)v4233;
	i1 v4235 = *(i1*)(intptr_t)v4234;
	i8 v4236 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4236)(v4235, v4232, v4231);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_162 workspace at ws+3952 length ws+0
void f330_emit_162(void) {

	i1 v4237 = (i1)+1;
	i1 v4238 = (i1)+8;
	i8 v4239 = (i8)(intptr_t)(ws+3864);
	i8 v4240 = *(i8*)(intptr_t)v4239;
	i1 v4241 = *(i1*)(intptr_t)v4240;
	i8 v4242 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4242)(v4241, v4238, v4237);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_163 workspace at ws+3952 length ws+0
void f331_emit_163(void) {

	i1 v4243 = (i1)+2;
	i1 v4244 = (i1)+1;
	i8 v4245 = (i8)(intptr_t)(ws+3864);
	i8 v4246 = *(i8*)(intptr_t)v4245;
	i1 v4247 = *(i1*)(intptr_t)v4246;
	i8 v4248 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4248)(v4247, v4244, v4243);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_164 workspace at ws+3952 length ws+0
void f332_emit_164(void) {

	i1 v4249 = (i1)+2;
	i1 v4250 = (i1)+4;
	i8 v4251 = (i8)(intptr_t)(ws+3864);
	i8 v4252 = *(i8*)(intptr_t)v4251;
	i1 v4253 = *(i1*)(intptr_t)v4252;
	i8 v4254 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4254)(v4253, v4250, v4249);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_165 workspace at ws+3952 length ws+0
void f333_emit_165(void) {

	i1 v4255 = (i1)+2;
	i1 v4256 = (i1)+8;
	i8 v4257 = (i8)(intptr_t)(ws+3864);
	i8 v4258 = *(i8*)(intptr_t)v4257;
	i1 v4259 = *(i1*)(intptr_t)v4258;
	i8 v4260 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4260)(v4259, v4256, v4255);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_166 workspace at ws+3952 length ws+0
void f334_emit_166(void) {

	i1 v4261 = (i1)+4;
	i1 v4262 = (i1)+1;
	i8 v4263 = (i8)(intptr_t)(ws+3864);
	i8 v4264 = *(i8*)(intptr_t)v4263;
	i1 v4265 = *(i1*)(intptr_t)v4264;
	i8 v4266 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4266)(v4265, v4262, v4261);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_167 workspace at ws+3952 length ws+0
void f335_emit_167(void) {

	i1 v4267 = (i1)+4;
	i1 v4268 = (i1)+2;
	i8 v4269 = (i8)(intptr_t)(ws+3864);
	i8 v4270 = *(i8*)(intptr_t)v4269;
	i1 v4271 = *(i1*)(intptr_t)v4270;
	i8 v4272 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4272)(v4271, v4268, v4267);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_168 workspace at ws+3952 length ws+0
void f336_emit_168(void) {

	i1 v4273 = (i1)+4;
	i1 v4274 = (i1)+8;
	i8 v4275 = (i8)(intptr_t)(ws+3864);
	i8 v4276 = *(i8*)(intptr_t)v4275;
	i1 v4277 = *(i1*)(intptr_t)v4276;
	i8 v4278 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4278)(v4277, v4274, v4273);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_169 workspace at ws+3952 length ws+0
void f337_emit_169(void) {

	i1 v4279 = (i1)+8;
	i1 v4280 = (i1)+1;
	i8 v4281 = (i8)(intptr_t)(ws+3864);
	i8 v4282 = *(i8*)(intptr_t)v4281;
	i1 v4283 = *(i1*)(intptr_t)v4282;
	i8 v4284 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4284)(v4283, v4280, v4279);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_170 workspace at ws+3952 length ws+0
void f338_emit_170(void) {

	i1 v4285 = (i1)+8;
	i1 v4286 = (i1)+2;
	i8 v4287 = (i8)(intptr_t)(ws+3864);
	i8 v4288 = *(i8*)(intptr_t)v4287;
	i1 v4289 = *(i1*)(intptr_t)v4288;
	i8 v4290 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4290)(v4289, v4286, v4285);

endsub:;
}
	void f174_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_171 workspace at ws+3952 length ws+0
void f339_emit_171(void) {

	i1 v4291 = (i1)+8;
	i1 v4292 = (i1)+4;
	i8 v4293 = (i8)(intptr_t)(ws+3864);
	i8 v4294 = *(i8*)(intptr_t)v4293;
	i1 v4295 = *(i1*)(intptr_t)v4294;
	i8 v4296 = (i8)(intptr_t)(f174_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4296)(v4295, v4292, v4291);

endsub:;
}
	void f154_Push(i2* /* vid */);
const i1 c02_s01d3[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s01d4[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
	void f87_E(i8 /* text */);
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f175_E_string(i2* /* sid */, i8 /* text */);
	void f96_E_h16(i2 /* value */);
const i1 c02_s01d5[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_172 workspace at ws+3952 length ws+2
void f340_emit_172(void) {

	i8 v4297 = (i8)(intptr_t)(f154_Push);
	i2 v4298;

	((void(*)(i2* /* vid */))(intptr_t)v4297)(&v4298);
	i8 v4299 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v4299 = v4298;

	i8 v4300 = (i8)(intptr_t)c02_s01d3;
	i8 v4301 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4301)(v4300);

	i8 v4302 = (i8)(intptr_t)(ws+3952);
	i2 v4303 = *(i2*)(intptr_t)v4302;
	i8 v4304 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4304)(v4303);

	i8 v4305 = (i8)(intptr_t)c02_s01d4;
	i8 v4306 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4306)(v4305);

	i1 v4307 = (i1)+3;
	i8 v4308 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4308)(v4307);

	i1 v4309 = (i1)+115;
	i8 v4310 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4310)(v4309);

	i8 v4311 = (i8)(intptr_t)(ws+3864);
	i8 v4312 = *(i8*)(intptr_t)v4311;
	i8 v4313 = *(i8*)(intptr_t)v4312;
	i8 v4314 = (i8)(intptr_t)(f175_E_string);
	i2 v4315;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v4314)(&v4315, v4313);
	i8 v4316 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v4316)(v4315);

	i8 v4317 = (i8)(intptr_t)c02_s01d5;
	i8 v4318 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4318)(v4317);

endsub:;
}
	void f101_EmitterOpenStream(i8 /* subr */);
const i1 c02_s01d6[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
	void f87_E(i8 /* text */);
	void f100_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);
const i1 c02_s01d7[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_173 workspace at ws+3952 length ws+0
void f341_emit_173(void) {

	i8 v4319 = (i8)(intptr_t)(ws+40);
	i8 v4320 = *(i8*)(intptr_t)v4319;
	i8 v4321 = (i8)(intptr_t)(f101_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v4321)(v4320);

	i8 v4322 = (i8)(intptr_t)c02_s01d6;
	i8 v4323 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4323)(v4322);

	i8 v4324 = (i8)(intptr_t)(ws+3864);
	i8 v4325 = *(i8*)(intptr_t)v4324;
	i8 v4326 = *(i8*)(intptr_t)v4325;
	i8 v4327 = v4326+(+8);
	i2 v4328 = *(i2*)(intptr_t)v4327;
	i8 v4329 = (i8)(intptr_t)(ws+3864);
	i8 v4330 = *(i8*)(intptr_t)v4329;
	i8 v4331 = v4330+(+10);
	i1 v4332 = *(i1*)(intptr_t)v4331;
	i8 v4333 = (i8)(intptr_t)(ws+3864);
	i8 v4334 = *(i8*)(intptr_t)v4333;
	i8 v4335 = v4334+(+12);
	i2 v4336 = *(i2*)(intptr_t)v4335;
	i8 v4337 = (i8)(intptr_t)(f100_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v4337)(v4336, v4332, v4328);

	i8 v4338 = (i8)(intptr_t)c02_s01d7;
	i8 v4339 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4339)(v4338);

	i1 v4340 = (i1)+0;
	i8 v4341 = (i8)(intptr_t)(ws+3598);
	*(i1*)(intptr_t)v4341 = v4340;

endsub:;
}
	void f177_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_174 workspace at ws+3952 length ws+0
void f342_emit_174(void) {

	i8 v4342 = (i8)(intptr_t)(ws+3864);
	i8 v4343 = *(i8*)(intptr_t)v4342;
	i1 v4344 = (i1)+1;
	i8 v4345 = (i8)(intptr_t)(f177_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4345)(v4344, v4343);

endsub:;
}
	void f177_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_175 workspace at ws+3952 length ws+0
void f343_emit_175(void) {

	i8 v4346 = (i8)(intptr_t)(ws+3864);
	i8 v4347 = *(i8*)(intptr_t)v4346;
	i1 v4348 = (i1)+2;
	i8 v4349 = (i8)(intptr_t)(f177_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4349)(v4348, v4347);

endsub:;
}
	void f177_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_176 workspace at ws+3952 length ws+0
void f344_emit_176(void) {

	i8 v4350 = (i8)(intptr_t)(ws+3864);
	i8 v4351 = *(i8*)(intptr_t)v4350;
	i1 v4352 = (i1)+4;
	i8 v4353 = (i8)(intptr_t)(f177_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4353)(v4352, v4351);

endsub:;
}
	void f177_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_177 workspace at ws+3952 length ws+0
void f345_emit_177(void) {

	i8 v4354 = (i8)(intptr_t)(ws+3864);
	i8 v4355 = *(i8*)(intptr_t)v4354;
	i1 v4356 = (i1)+8;
	i8 v4357 = (i8)(intptr_t)(f177_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4357)(v4356, v4355);

endsub:;
}
	void f178_CheckBufferAlignment(void);
const i1 c02_s01d8[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f87_E(i8 /* text */);
	void f149_E_subref_sig(i8 /* subr */);
const i1 c02_s01d9[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_178 workspace at ws+3952 length ws+0
void f346_emit_178(void) {

	i8 v4358 = (i8)(intptr_t)(f178_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4358)();

	i8 v4359 = (i8)(intptr_t)c02_s01d8;
	i8 v4360 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4360)(v4359);

	i8 v4361 = (i8)(intptr_t)(ws+3864);
	i8 v4362 = *(i8*)(intptr_t)v4361;
	i8 v4363 = *(i8*)(intptr_t)v4362;
	i8 v4364 = (i8)(intptr_t)(f149_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4364)(v4363);

	i8 v4365 = (i8)(intptr_t)c02_s01d9;
	i8 v4366 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4366)(v4365);

endsub:;
}
	void f178_CheckBufferAlignment(void);
const i1 c02_s01da[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f87_E(i8 /* text */);
	void f150_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s01db[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_179 workspace at ws+3952 length ws+0
void f347_emit_179(void) {

	i8 v4367 = (i8)(intptr_t)(f178_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4367)();

	i8 v4368 = (i8)(intptr_t)c02_s01da;
	i8 v4369 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4369)(v4368);

	i8 v4370 = (i8)(intptr_t)(ws+3864);
	i8 v4371 = *(i8*)(intptr_t)v4370;
	i8 v4372 = (i8)(intptr_t)(ws+3864);
	i8 v4373 = *(i8*)(intptr_t)v4372;
	i8 v4374 = v4373+(+16);
	i2 v4375 = *(i2*)(intptr_t)v4374;
	i8 v4376 = (i8)(intptr_t)(f150_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4376)(v4375, v4371);

	i8 v4377 = (i8)(intptr_t)c02_s01db;
	i8 v4378 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4378)(v4377);

endsub:;
}
	void f178_CheckBufferAlignment(void);
const i1 c02_s01dc[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f87_E(i8 /* text */);
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f175_E_string(i2* /* sid */, i8 /* text */);
	void f96_E_h16(i2 /* value */);
const i1 c02_s01dd[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_180 workspace at ws+3952 length ws+0
void f348_emit_180(void) {

	i8 v4379 = (i8)(intptr_t)(f178_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4379)();

	i8 v4380 = (i8)(intptr_t)c02_s01dc;
	i8 v4381 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4381)(v4380);

	i1 v4382 = (i1)+3;
	i8 v4383 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4383)(v4382);

	i1 v4384 = (i1)+115;
	i8 v4385 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4385)(v4384);

	i8 v4386 = (i8)(intptr_t)(ws+3864);
	i8 v4387 = *(i8*)(intptr_t)v4386;
	i8 v4388 = *(i8*)(intptr_t)v4387;
	i8 v4389 = (i8)(intptr_t)(f175_E_string);
	i2 v4390;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v4389)(&v4390, v4388);
	i8 v4391 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v4391)(v4390);

	i8 v4392 = (i8)(intptr_t)c02_s01dd;
	i8 v4393 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4393)(v4392);

endsub:;
}
	void f176_FlushInitialiserBuffer(void);
const i1 c02_s01de[] = { 0x7d,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f102_EmitterCloseStream(void);

// emit_181 workspace at ws+3952 length ws+0
void f349_emit_181(void) {

	i8 v4394 = (i8)(intptr_t)(f176_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v4394)();

	i8 v4395 = (i8)(intptr_t)c02_s01de;
	i8 v4396 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4396)(v4395);

	i8 v4397 = (i8)(intptr_t)(f102_EmitterCloseStream);

	((void(*)(void))(intptr_t)v4397)();

endsub:;
}
	void f83_E_tab(void);

// emit_184 workspace at ws+3952 length ws+0
void f350_emit_184(void) {

	i8 v4398 = (i8)(intptr_t)(f83_E_tab);

	((void(*)(void))(intptr_t)v4398)();

endsub:;
}
	void f87_E(i8 /* text */);
	void f81_E_space(void);

// emit_185 workspace at ws+3952 length ws+0
void f351_emit_185(void) {

	i8 v4399 = (i8)(intptr_t)(ws+3864);
	i8 v4400 = *(i8*)(intptr_t)v4399;
	i8 v4401 = *(i8*)(intptr_t)v4400;
	i8 v4402 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4402)(v4401);

	i8 v4403 = (i8)(intptr_t)(f81_E_space);

	((void(*)(void))(intptr_t)v4403)();

endsub:;
}
const i1 c02_s01df[] = { 0x2a,0x28,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s01e0[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f150_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s01e1[] = { 0x29,0 };
	void f87_E(i8 /* text */);
	void f81_E_space(void);

// emit_186 workspace at ws+3952 length ws+0
void f352_emit_186(void) {

	i8 v4404 = (i8)(intptr_t)c02_s01df;
	i8 v4405 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4405)(v4404);

	i8 v4406 = (i8)(intptr_t)(ws+3864);
	i8 v4407 = *(i8*)(intptr_t)v4406;
	i8 v4408 = v4407+(+14);
	i1 v4409 = *(i1*)(intptr_t)v4408;
	i8 v4410 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4410)(v4409);

	i8 v4411 = (i8)(intptr_t)c02_s01e0;
	i8 v4412 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4412)(v4411);

	i8 v4413 = (i8)(intptr_t)(ws+3864);
	i8 v4414 = *(i8*)(intptr_t)v4413;
	i2 v4415 = (i2)+0;
	i8 v4416 = (i8)(intptr_t)(f150_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4416)(v4415, v4414);

	i8 v4417 = (i8)(intptr_t)c02_s01e1;
	i8 v4418 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4418)(v4417);

	i8 v4419 = (i8)(intptr_t)(f81_E_space);

	((void(*)(void))(intptr_t)v4419)();

endsub:;
}
const i1 c02_s01e2[] = { 0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f149_E_subref_sig(i8 /* subr */);
const i1 c02_s01e3[] = { 0x29,0 };
	void f87_E(i8 /* text */);
	void f81_E_space(void);

// emit_187 workspace at ws+3952 length ws+0
void f353_emit_187(void) {

	i8 v4420 = (i8)(intptr_t)c02_s01e2;
	i8 v4421 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4421)(v4420);

	i8 v4422 = (i8)(intptr_t)(ws+3864);
	i8 v4423 = *(i8*)(intptr_t)v4422;
	i8 v4424 = *(i8*)(intptr_t)v4423;
	i8 v4425 = (i8)(intptr_t)(f149_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4425)(v4424);

	i8 v4426 = (i8)(intptr_t)c02_s01e3;
	i8 v4427 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4427)(v4426);

	i8 v4428 = (i8)(intptr_t)(f81_E_space);

	((void(*)(void))(intptr_t)v4428)();

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f93_E_i32(i4 /* value */);
	void f78_E_b8(i1 /* byte */);

// emit_188 workspace at ws+3952 length ws+0
void f354_emit_188(void) {

	i1 v4429 = (i1)+40;
	i8 v4430 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4430)(v4429);

	i8 v4431 = (i8)(intptr_t)(ws+3864);
	i8 v4432 = *(i8*)(intptr_t)v4431;
	i4 v4433 = *(i4*)(intptr_t)v4432;
	i8 v4434 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v4434)(v4433);

	i1 v4435 = (i1)+41;
	i8 v4436 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4436)(v4435);

endsub:;
}
	void f84_E_nl(void);

// emit_189 workspace at ws+3952 length ws+0
void f355_emit_189(void) {

	i8 v4437 = (i8)(intptr_t)(f84_E_nl);

	((void(*)(void))(intptr_t)v4437)();

endsub:;
}

// nop_emitter workspace at ws+3952 length ws+0
void f356_nop_emitter(void) {

endsub:;
}
	void f182_emit_0(void);
	void f183_emit_1(void);
	void f184_emit_2(void);
	void f185_emit_3(void);
	void f186_emit_4(void);
	void f187_emit_5(void);
	void f188_emit_6(void);
	void f189_emit_7(void);
	void f190_emit_8(void);
	void f191_emit_9(void);
	void f192_emit_10(void);
	void f193_emit_11(void);
	void f194_emit_12(void);
	void f195_emit_13(void);
	void f196_emit_14(void);
	void f197_emit_15(void);
	void f198_emit_16(void);
	void f199_emit_17(void);
	void f200_emit_18(void);
	void f201_emit_19(void);
	void f202_emit_20(void);
	void f203_emit_21(void);
	void f204_emit_22(void);
	void f205_emit_23(void);
	void f206_emit_24(void);
	void f207_emit_25(void);
	void f208_emit_26(void);
	void f209_emit_27(void);
	void f210_emit_28(void);
	void f211_emit_29(void);
	void f212_emit_30(void);
	void f213_emit_31(void);
	void f214_emit_32(void);
	void f215_emit_33(void);
	void f216_emit_34(void);
	void f217_emit_35(void);
	void f218_emit_36(void);
	void f219_emit_37(void);
	void f220_emit_38(void);
	void f221_emit_39(void);
	void f222_emit_40(void);
	void f223_emit_41(void);
	void f224_emit_42(void);
	void f225_emit_43(void);
	void f226_emit_44(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f227_emit_47(void);
	void f228_emit_48(void);
	void f229_emit_49(void);
	void f230_emit_50(void);
	void f232_emit_51(void);
	void f233_emit_52(void);
	void f234_emit_53(void);
	void f235_emit_54(void);
	void f236_emit_55(void);
	void f237_emit_56(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f238_emit_66(void);
	void f239_emit_67(void);
	void f240_emit_68(void);
	void f241_emit_69(void);
	void f242_emit_70(void);
	void f243_emit_71(void);
	void f244_emit_72(void);
	void f245_emit_73(void);
	void f246_emit_74(void);
	void f247_emit_75(void);
	void f248_emit_76(void);
	void f249_emit_77(void);
	void f250_emit_78(void);
	void f251_emit_79(void);
	void f252_emit_80(void);
	void f253_emit_81(void);
	void f254_emit_82(void);
	void f255_emit_83(void);
	void f256_emit_84(void);
	void f257_emit_85(void);
	void f258_emit_86(void);
	void f259_emit_87(void);
	void f260_emit_88(void);
	void f261_emit_89(void);
	void f262_emit_90(void);
	void f263_emit_91(void);
	void f264_emit_92(void);
	void f265_emit_93(void);
	void f266_emit_94(void);
	void f267_emit_95(void);
	void f268_emit_96(void);
	void f269_emit_97(void);
	void f270_emit_98(void);
	void f271_emit_99(void);
	void f272_emit_100(void);
	void f273_emit_101(void);
	void f274_emit_102(void);
	void f275_emit_103(void);
	void f276_emit_104(void);
	void f277_emit_105(void);
	void f278_emit_106(void);
	void f279_emit_107(void);
	void f280_emit_108(void);
	void f281_emit_109(void);
	void f282_emit_110(void);
	void f283_emit_111(void);
	void f284_emit_112(void);
	void f285_emit_113(void);
	void f286_emit_114(void);
	void f287_emit_115(void);
	void f288_emit_116(void);
	void f289_emit_117(void);
	void f290_emit_118(void);
	void f291_emit_119(void);
	void f292_emit_120(void);
	void f293_emit_121(void);
	void f294_emit_122(void);
	void f295_emit_123(void);
	void f296_emit_124(void);
	void f297_emit_125(void);
	void f298_emit_126(void);
	void f299_emit_127(void);
	void f300_emit_128(void);
	void f301_emit_129(void);
	void f302_emit_130(void);
	void f303_emit_131(void);
	void f304_emit_132(void);
	void f305_emit_133(void);
	void f306_emit_134(void);
	void f307_emit_135(void);
	void f308_emit_136(void);
	void f309_emit_137(void);
	void f310_emit_138(void);
	void f311_emit_139(void);
	void f312_emit_140(void);
	void f313_emit_141(void);
	void f314_emit_142(void);
	void f315_emit_143(void);
	void f316_emit_144(void);
	void f317_emit_145(void);
	void f318_emit_146(void);
	void f319_emit_147(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f320_emit_152(void);
	void f321_emit_153(void);
	void f322_emit_154(void);
	void f323_emit_155(void);
	void f324_emit_156(void);
	void f325_emit_157(void);
	void f326_emit_158(void);
	void f327_emit_159(void);
	void f328_emit_160(void);
	void f329_emit_161(void);
	void f330_emit_162(void);
	void f331_emit_163(void);
	void f332_emit_164(void);
	void f333_emit_165(void);
	void f334_emit_166(void);
	void f335_emit_167(void);
	void f336_emit_168(void);
	void f337_emit_169(void);
	void f338_emit_170(void);
	void f339_emit_171(void);
	void f340_emit_172(void);
	void f341_emit_173(void);
	void f342_emit_174(void);
	void f343_emit_175(void);
	void f344_emit_176(void);
	void f345_emit_177(void);
	void f346_emit_178(void);
	void f347_emit_179(void);
	void f348_emit_180(void);
	void f349_emit_181(void);
	void f356_nop_emitter(void);
	void f356_nop_emitter(void);
	void f350_emit_184(void);
	void f351_emit_185(void);
	void f352_emit_186(void);
	void f353_emit_187(void);
	void f354_emit_188(void);
	void f355_emit_189(void);
static data f180_EmitOneInstruction_s02a2[] = {

	{ .ptr = (void*)f182_emit_0 },

	{ .ptr = (void*)f183_emit_1 },

	{ .ptr = (void*)f184_emit_2 },

	{ .ptr = (void*)f185_emit_3 },

	{ .ptr = (void*)f186_emit_4 },

	{ .ptr = (void*)f187_emit_5 },

	{ .ptr = (void*)f188_emit_6 },

	{ .ptr = (void*)f189_emit_7 },

	{ .ptr = (void*)f190_emit_8 },

	{ .ptr = (void*)f191_emit_9 },

	{ .ptr = (void*)f192_emit_10 },

	{ .ptr = (void*)f193_emit_11 },

	{ .ptr = (void*)f194_emit_12 },

	{ .ptr = (void*)f195_emit_13 },

	{ .ptr = (void*)f196_emit_14 },

	{ .ptr = (void*)f197_emit_15 },

	{ .ptr = (void*)f198_emit_16 },

	{ .ptr = (void*)f199_emit_17 },

	{ .ptr = (void*)f200_emit_18 },

	{ .ptr = (void*)f201_emit_19 },

	{ .ptr = (void*)f202_emit_20 },

	{ .ptr = (void*)f203_emit_21 },

	{ .ptr = (void*)f204_emit_22 },

	{ .ptr = (void*)f205_emit_23 },

	{ .ptr = (void*)f206_emit_24 },

	{ .ptr = (void*)f207_emit_25 },

	{ .ptr = (void*)f208_emit_26 },

	{ .ptr = (void*)f209_emit_27 },

	{ .ptr = (void*)f210_emit_28 },

	{ .ptr = (void*)f211_emit_29 },

	{ .ptr = (void*)f212_emit_30 },

	{ .ptr = (void*)f213_emit_31 },

	{ .ptr = (void*)f214_emit_32 },

	{ .ptr = (void*)f215_emit_33 },

	{ .ptr = (void*)f216_emit_34 },

	{ .ptr = (void*)f217_emit_35 },

	{ .ptr = (void*)f218_emit_36 },

	{ .ptr = (void*)f219_emit_37 },

	{ .ptr = (void*)f220_emit_38 },

	{ .ptr = (void*)f221_emit_39 },

	{ .ptr = (void*)f222_emit_40 },

	{ .ptr = (void*)f223_emit_41 },

	{ .ptr = (void*)f224_emit_42 },

	{ .ptr = (void*)f225_emit_43 },

	{ .ptr = (void*)f226_emit_44 },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f227_emit_47 },

	{ .ptr = (void*)f228_emit_48 },

	{ .ptr = (void*)f229_emit_49 },

	{ .ptr = (void*)f230_emit_50 },

	{ .ptr = (void*)f232_emit_51 },

	{ .ptr = (void*)f233_emit_52 },

	{ .ptr = (void*)f234_emit_53 },

	{ .ptr = (void*)f235_emit_54 },

	{ .ptr = (void*)f236_emit_55 },

	{ .ptr = (void*)f237_emit_56 },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f238_emit_66 },

	{ .ptr = (void*)f239_emit_67 },

	{ .ptr = (void*)f240_emit_68 },

	{ .ptr = (void*)f241_emit_69 },

	{ .ptr = (void*)f242_emit_70 },

	{ .ptr = (void*)f243_emit_71 },

	{ .ptr = (void*)f244_emit_72 },

	{ .ptr = (void*)f245_emit_73 },

	{ .ptr = (void*)f246_emit_74 },

	{ .ptr = (void*)f247_emit_75 },

	{ .ptr = (void*)f248_emit_76 },

	{ .ptr = (void*)f249_emit_77 },

	{ .ptr = (void*)f250_emit_78 },

	{ .ptr = (void*)f251_emit_79 },

	{ .ptr = (void*)f252_emit_80 },

	{ .ptr = (void*)f253_emit_81 },

	{ .ptr = (void*)f254_emit_82 },

	{ .ptr = (void*)f255_emit_83 },

	{ .ptr = (void*)f256_emit_84 },

	{ .ptr = (void*)f257_emit_85 },

	{ .ptr = (void*)f258_emit_86 },

	{ .ptr = (void*)f259_emit_87 },

	{ .ptr = (void*)f260_emit_88 },

	{ .ptr = (void*)f261_emit_89 },

	{ .ptr = (void*)f262_emit_90 },

	{ .ptr = (void*)f263_emit_91 },

	{ .ptr = (void*)f264_emit_92 },

	{ .ptr = (void*)f265_emit_93 },

	{ .ptr = (void*)f266_emit_94 },

	{ .ptr = (void*)f267_emit_95 },

	{ .ptr = (void*)f268_emit_96 },

	{ .ptr = (void*)f269_emit_97 },

	{ .ptr = (void*)f270_emit_98 },

	{ .ptr = (void*)f271_emit_99 },

	{ .ptr = (void*)f272_emit_100 },

	{ .ptr = (void*)f273_emit_101 },

	{ .ptr = (void*)f274_emit_102 },

	{ .ptr = (void*)f275_emit_103 },

	{ .ptr = (void*)f276_emit_104 },

	{ .ptr = (void*)f277_emit_105 },

	{ .ptr = (void*)f278_emit_106 },

	{ .ptr = (void*)f279_emit_107 },

	{ .ptr = (void*)f280_emit_108 },

	{ .ptr = (void*)f281_emit_109 },

	{ .ptr = (void*)f282_emit_110 },

	{ .ptr = (void*)f283_emit_111 },

	{ .ptr = (void*)f284_emit_112 },

	{ .ptr = (void*)f285_emit_113 },

	{ .ptr = (void*)f286_emit_114 },

	{ .ptr = (void*)f287_emit_115 },

	{ .ptr = (void*)f288_emit_116 },

	{ .ptr = (void*)f289_emit_117 },

	{ .ptr = (void*)f290_emit_118 },

	{ .ptr = (void*)f291_emit_119 },

	{ .ptr = (void*)f292_emit_120 },

	{ .ptr = (void*)f293_emit_121 },

	{ .ptr = (void*)f294_emit_122 },

	{ .ptr = (void*)f295_emit_123 },

	{ .ptr = (void*)f296_emit_124 },

	{ .ptr = (void*)f297_emit_125 },

	{ .ptr = (void*)f298_emit_126 },

	{ .ptr = (void*)f299_emit_127 },

	{ .ptr = (void*)f300_emit_128 },

	{ .ptr = (void*)f301_emit_129 },

	{ .ptr = (void*)f302_emit_130 },

	{ .ptr = (void*)f303_emit_131 },

	{ .ptr = (void*)f304_emit_132 },

	{ .ptr = (void*)f305_emit_133 },

	{ .ptr = (void*)f306_emit_134 },

	{ .ptr = (void*)f307_emit_135 },

	{ .ptr = (void*)f308_emit_136 },

	{ .ptr = (void*)f309_emit_137 },

	{ .ptr = (void*)f310_emit_138 },

	{ .ptr = (void*)f311_emit_139 },

	{ .ptr = (void*)f312_emit_140 },

	{ .ptr = (void*)f313_emit_141 },

	{ .ptr = (void*)f314_emit_142 },

	{ .ptr = (void*)f315_emit_143 },

	{ .ptr = (void*)f316_emit_144 },

	{ .ptr = (void*)f317_emit_145 },

	{ .ptr = (void*)f318_emit_146 },

	{ .ptr = (void*)f319_emit_147 },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f320_emit_152 },

	{ .ptr = (void*)f321_emit_153 },

	{ .ptr = (void*)f322_emit_154 },

	{ .ptr = (void*)f323_emit_155 },

	{ .ptr = (void*)f324_emit_156 },

	{ .ptr = (void*)f325_emit_157 },

	{ .ptr = (void*)f326_emit_158 },

	{ .ptr = (void*)f327_emit_159 },

	{ .ptr = (void*)f328_emit_160 },

	{ .ptr = (void*)f329_emit_161 },

	{ .ptr = (void*)f330_emit_162 },

	{ .ptr = (void*)f331_emit_163 },

	{ .ptr = (void*)f332_emit_164 },

	{ .ptr = (void*)f333_emit_165 },

	{ .ptr = (void*)f334_emit_166 },

	{ .ptr = (void*)f335_emit_167 },

	{ .ptr = (void*)f336_emit_168 },

	{ .ptr = (void*)f337_emit_169 },

	{ .ptr = (void*)f338_emit_170 },

	{ .ptr = (void*)f339_emit_171 },

	{ .ptr = (void*)f340_emit_172 },

	{ .ptr = (void*)f341_emit_173 },

	{ .ptr = (void*)f342_emit_174 },

	{ .ptr = (void*)f343_emit_175 },

	{ .ptr = (void*)f344_emit_176 },

	{ .ptr = (void*)f345_emit_177 },

	{ .ptr = (void*)f346_emit_178 },

	{ .ptr = (void*)f347_emit_179 },

	{ .ptr = (void*)f348_emit_180 },

	{ .ptr = (void*)f349_emit_181 },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f356_nop_emitter },

	{ .ptr = (void*)f350_emit_184 },

	{ .ptr = (void*)f351_emit_185 },

	{ .ptr = (void*)f352_emit_186 },

	{ .ptr = (void*)f353_emit_187 },

	{ .ptr = (void*)f354_emit_188 },

	{ .ptr = (void*)f355_emit_189 },

};

// EmitOneInstruction workspace at ws+3848 length ws+98
void f180_EmitOneInstruction(i8 p3244 /* self */, i1 p3245 /* ruleid */) {
	*(i1*)(intptr_t)(ws+3848) = p3245; /*ruleid */
	*(i8*)(intptr_t)(ws+3856) = p3244; /*self */

	i8 v3246 = (i8)(intptr_t)(ws+3856);
	i8 v3247 = *(i8*)(intptr_t)v3246;
	i8 v3248 = v3247+(+16);
	i8 v3249 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v3249 = v3248;

	i8 v3250 = (i8)(intptr_t)(ws+3864);
	i8 v3251 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v3251 = v3250;

	i1 v3252 = (i1)+4;
	i8 v3253 = (i8)(intptr_t)(ws+3944);
	*(i1*)(intptr_t)v3253 = v3252;

c02_0277:;

	i8 v3254 = (i8)(intptr_t)(ws+3944);
	i1 v3255 = *(i1*)(intptr_t)v3254;
	i1 v3256 = (i1)+0;
	if (v3255==v3256) goto c02_027a; else goto c02_0279;

c02_0279:;

	i8 v3257 = (i8)(intptr_t)(ws+3928);
	i8 v3258 = *(i8*)(intptr_t)v3257;
	i8 v3259 = *(i8*)(intptr_t)v3258;
	i8 v3260 = (i8)(intptr_t)(ws+3936);
	i8 v3261 = *(i8*)(intptr_t)v3260;
	*(i8*)(intptr_t)v3261 = v3259;

	i8 v3262 = (i8)(intptr_t)(ws+3936);
	i8 v3263 = *(i8*)(intptr_t)v3262;
	i8 v3264 = *(i8*)(intptr_t)v3263;
	i8 v3265 = (i8)+0;
	if (v3264==v3265) goto c02_027f; else goto c02_027e;

c02_027e:;

	i8 v3266 = (i8)(intptr_t)(ws+3936);
	i8 v3267 = *(i8*)(intptr_t)v3266;
	i8 v3268 = *(i8*)(intptr_t)v3267;
	i8 v3269 = v3268+(+57);
	i1 v3270 = *(i1*)(intptr_t)v3269;
	i8 v3271 = (i8)(intptr_t)(ws+3936);
	i8 v3272 = *(i8*)(intptr_t)v3271;
	i8 v3273 = v3272+(+8);
	*(i1*)(intptr_t)v3273 = v3270;

c02_027f:;

c02_027b:;

	i8 v3274 = (i8)(intptr_t)(ws+3928);
	i8 v3275 = *(i8*)(intptr_t)v3274;
	i8 v3276 = v3275+(+8);
	i8 v3277 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v3277 = v3276;

	i8 v3278 = (i8)(intptr_t)(ws+3936);
	i8 v3279 = *(i8*)(intptr_t)v3278;
	i8 v3280 = v3279+(+16);
	i8 v3281 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v3281 = v3280;

	i8 v3282 = (i8)(intptr_t)(ws+3944);
	i1 v3283 = *(i1*)(intptr_t)v3282;
	i1 v3284 = v3283+(-1);
	i8 v3285 = (i8)(intptr_t)(ws+3944);
	*(i1*)(intptr_t)v3285 = v3284;

	goto c02_0277;

c02_027a:;

	i8 v3286 = (i8)(intptr_t)(ws+3856);
	i8 v3287 = *(i8*)(intptr_t)v3286;
	i8 v3288 = v3287+(+49);
	i1 v3289 = *(i1*)(intptr_t)v3288;
	i8 v3290 = (i8)(intptr_t)(ws+3945);
	*(i1*)(intptr_t)v3290 = v3289;

















































































































































































	i8 v4438 = (i8)(intptr_t)((i1*)f180_EmitOneInstruction_s02a2);
	i8 v4439 = (i8)(intptr_t)(ws+3848);
	i1 v4440 = *(i1*)(intptr_t)v4439;
	i8 v4441 = v4440;
	i1 v4442 = (i1)+3;
	i8 v4443 = ((i8)v4441)<<v4442;
	i8 v4444 = v4438+v4443;
	i8 v4445 = *(i8*)(intptr_t)v4444;

	((void(*)(void))(intptr_t)v4445)();

endsub:;
}
static data f3___main_s02a3[] = {








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
static data f3___main_s02a4[] = {








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
static data f3___main_s02a5[] = {








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

// PopulateMatchBuffer workspace at ws+3904 length ws+24
void f357_PopulateMatchBuffer(i8 p4446 /* matchbuf */, i8 p4447 /* n */, i8 p4448 /* insn */) {
	*(i8*)(intptr_t)(ws+3904) = p4448; /*insn */
	*(i8*)(intptr_t)(ws+3912) = p4447; /*n */
	*(i8*)(intptr_t)(ws+3920) = p4446; /*matchbuf */

	i8 v4449 = (i8)(intptr_t)(ws+3912);
	i8 v4450 = *(i8*)(intptr_t)v4449;
	i8 v4451 = *(i8*)(intptr_t)v4450;
	i8 v4452 = v4451+(+256);
	i1 v4453 = *(i1*)(intptr_t)v4452;
	i8 v4454 = (i8)(intptr_t)(ws+3920);
	i8 v4455 = *(i8*)(intptr_t)v4454;
	*(i1*)(intptr_t)v4455 = v4453;

	i8 v4456 = (i8)(intptr_t)(ws+3912);
	i8 v4457 = *(i8*)(intptr_t)v4456;
	i8 v4458 = *(i8*)(intptr_t)v4457;
	i8 v4459 = v4458+(+24);
	i8 v4460 = *(i8*)(intptr_t)v4459;
	i8 v4461 = (i8)(intptr_t)(ws+3912);
	i8 v4462 = *(i8*)(intptr_t)v4461;
	i8 v4463 = v4462+(+8);
	*(i8*)(intptr_t)v4463 = v4460;

	i8 v4464 = (i8)(intptr_t)(ws+3912);
	i8 v4465 = *(i8*)(intptr_t)v4464;
	i8 v4466 = v4465+(+8);
	i8 v4467 = *(i8*)(intptr_t)v4466;
	i8 v4468 = (i8)+0;
	if (v4467==v4468) goto c02_02aa; else goto c02_02a9;

c02_02a9:;

	i8 v4469 = (i8)(intptr_t)(ws+3912);
	i8 v4470 = *(i8*)(intptr_t)v4469;
	i8 v4471 = v4470+(+8);
	i8 v4472 = *(i8*)(intptr_t)v4471;
	i8 v4473 = v4472+(+256);
	i1 v4474 = *(i1*)(intptr_t)v4473;
	i8 v4475 = (i8)(intptr_t)(ws+3920);
	i8 v4476 = *(i8*)(intptr_t)v4475;
	i8 v4477 = v4476+(+1);
	*(i1*)(intptr_t)v4477 = v4474;

c02_02aa:;

c02_02a6:;

	i8 v4478 = (i8)(intptr_t)(ws+3912);
	i8 v4479 = *(i8*)(intptr_t)v4478;
	i8 v4480 = *(i8*)(intptr_t)v4479;
	i8 v4481 = v4480+(+32);
	i8 v4482 = *(i8*)(intptr_t)v4481;
	i8 v4483 = (i8)(intptr_t)(ws+3912);
	i8 v4484 = *(i8*)(intptr_t)v4483;
	i8 v4485 = v4484+(+16);
	*(i8*)(intptr_t)v4485 = v4482;

	i8 v4486 = (i8)(intptr_t)(ws+3912);
	i8 v4487 = *(i8*)(intptr_t)v4486;
	i8 v4488 = v4487+(+16);
	i8 v4489 = *(i8*)(intptr_t)v4488;
	i8 v4490 = (i8)+0;
	if (v4489==v4490) goto c02_02af; else goto c02_02ae;

c02_02ae:;

	i8 v4491 = (i8)(intptr_t)(ws+3912);
	i8 v4492 = *(i8*)(intptr_t)v4491;
	i8 v4493 = v4492+(+16);
	i8 v4494 = *(i8*)(intptr_t)v4493;
	i8 v4495 = v4494+(+256);
	i1 v4496 = *(i1*)(intptr_t)v4495;
	i8 v4497 = (i8)(intptr_t)(ws+3920);
	i8 v4498 = *(i8*)(intptr_t)v4497;
	i8 v4499 = v4498+(+2);
	*(i1*)(intptr_t)v4499 = v4496;

	i8 v4500 = (i8)(intptr_t)(ws+3912);
	i8 v4501 = *(i8*)(intptr_t)v4500;
	i8 v4502 = v4501+(+16);
	i8 v4503 = *(i8*)(intptr_t)v4502;
	i8 v4504 = v4503+(+24);
	i8 v4505 = *(i8*)(intptr_t)v4504;
	i8 v4506 = (i8)(intptr_t)(ws+3912);
	i8 v4507 = *(i8*)(intptr_t)v4506;
	i8 v4508 = v4507+(+24);
	*(i8*)(intptr_t)v4508 = v4505;

	i8 v4509 = (i8)(intptr_t)(ws+3912);
	i8 v4510 = *(i8*)(intptr_t)v4509;
	i8 v4511 = v4510+(+24);
	i8 v4512 = *(i8*)(intptr_t)v4511;
	i8 v4513 = (i8)+0;
	if (v4512==v4513) goto c02_02b4; else goto c02_02b3;

c02_02b3:;

	i8 v4514 = (i8)(intptr_t)(ws+3912);
	i8 v4515 = *(i8*)(intptr_t)v4514;
	i8 v4516 = v4515+(+24);
	i8 v4517 = *(i8*)(intptr_t)v4516;
	i8 v4518 = v4517+(+256);
	i1 v4519 = *(i1*)(intptr_t)v4518;
	i8 v4520 = (i8)(intptr_t)(ws+3920);
	i8 v4521 = *(i8*)(intptr_t)v4520;
	i8 v4522 = v4521+(+3);
	*(i1*)(intptr_t)v4522 = v4519;

c02_02b4:;

c02_02b0:;

c02_02af:;

c02_02ab:;

endsub:;
}

// IsStackedRegister workspace at ws+3864 length ws+16
void f358_IsStackedRegister(i1* p4523 /* result */, i1 p4524 /* regid */) {
	*(i1*)(intptr_t)(ws+3864) = p4524; /*regid */

	i1 v4525 = (i1)+0;
	i8 v4526 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v4526 = v4525;

	i8 v4527 = (i8)(intptr_t)((i1*)f3___main_s00bf);
	i8 v4528 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v4528 = v4527;

c02_02b7:;

	i8 v4529 = (i8)(intptr_t)(ws+3872);
	i8 v4530 = *(i8*)(intptr_t)v4529;
	i8 v4531 = (i8)(intptr_t)((i1*)f3___main_s00bf+80);
	if (v4530==v4531) goto c02_02ba; else goto c02_02b9;

c02_02b9:;

	i8 v4532 = (i8)(intptr_t)(ws+3872);
	i8 v4533 = *(i8*)(intptr_t)v4532;
	i8 v4534 = v4533+(+8);
	i1 v4535 = *(i1*)(intptr_t)v4534;
	i8 v4536 = (i8)(intptr_t)(ws+3864);
	i1 v4537 = *(i1*)(intptr_t)v4536;
	i1 v4538 = v4535&v4537;
	i1 v4539 = (i1)+0;
	if (v4538==v4539) goto c02_02bf; else goto c02_02be;

c02_02be:;

	i8 v4540 = (i8)(intptr_t)(ws+3872);
	i8 v4541 = *(i8*)(intptr_t)v4540;
	i8 v4542 = v4541+(+11);
	i1 v4543 = *(i1*)(intptr_t)v4542;
	i8 v4544 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v4544 = v4543;

	goto endsub;

c02_02bf:;

c02_02bb:;

	i8 v4545 = (i8)(intptr_t)(ws+3872);
	i8 v4546 = *(i8*)(intptr_t)v4545;
	i8 v4547 = v4546+(+16);
	i8 v4548 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v4548 = v4547;

	goto c02_02b7;

c02_02ba:;

endsub:;
	*p4523 = *(i1*)(intptr_t)(ws+3865);
}

// CalculateBlockedRegisters workspace at ws+3864 length ws+17
void f359_CalculateBlockedRegisters(i1* p4549 /* blocked */, i8 p4550 /* last */, i8 p4551 /* insn */) {
	*(i8*)(intptr_t)(ws+3864) = p4551; /*insn */
	*(i8*)(intptr_t)(ws+3872) = p4550; /*last */

	i1 v4552 = (i1)+0;
	i8 v4553 = (i8)(intptr_t)(ws+3880);
	*(i1*)(intptr_t)v4553 = v4552;

	i8 v4554 = (i8)(intptr_t)(ws+3864);
	i8 v4555 = *(i8*)(intptr_t)v4554;
	i8 v4556 = *(i8*)(intptr_t)v4555;
	i8 v4557 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4557 = v4556;

c02_02c2:;

	i8 v4558 = (i8)(intptr_t)(ws+3864);
	i8 v4559 = *(i8*)(intptr_t)v4558;
	i8 v4560 = (i8)(intptr_t)(ws+3872);
	i8 v4561 = *(i8*)(intptr_t)v4560;
	if (v4559==v4561) goto c02_02c5; else goto c02_02c4;

c02_02c4:;

	i8 v4562 = (i8)(intptr_t)(ws+3880);
	i1 v4563 = *(i1*)(intptr_t)v4562;
	i8 v4564 = (i8)(intptr_t)(ws+3864);
	i8 v4565 = *(i8*)(intptr_t)v4564;
	i8 v4566 = v4565+(+50);
	i1 v4567 = *(i1*)(intptr_t)v4566;
	i1 v4568 = v4563|v4567;
	i8 v4569 = (i8)(intptr_t)(ws+3864);
	i8 v4570 = *(i8*)(intptr_t)v4569;
	i8 v4571 = v4570+(+51);
	i1 v4572 = *(i1*)(intptr_t)v4571;
	i1 v4573 = v4568|v4572;
	i8 v4574 = (i8)(intptr_t)(ws+3880);
	*(i1*)(intptr_t)v4574 = v4573;

	i8 v4575 = (i8)(intptr_t)(ws+3864);
	i8 v4576 = *(i8*)(intptr_t)v4575;
	i8 v4577 = (i8)(intptr_t)(ws+3872);
	i8 v4578 = *(i8*)(intptr_t)v4577;
	if (v4576==v4578) goto c02_02c9; else goto c02_02ca;

c02_02c9:;

	goto c02_02c5;

c02_02ca:;

c02_02c6:;

	i8 v4579 = (i8)(intptr_t)(ws+3864);
	i8 v4580 = *(i8*)(intptr_t)v4579;
	i8 v4581 = *(i8*)(intptr_t)v4580;
	i8 v4582 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4582 = v4581;

	goto c02_02c2;

c02_02c5:;

endsub:;
	*p4549 = *(i1*)(intptr_t)(ws+3880);
}

// BlockRegisters workspace at ws+3864 length ws+17
void f360_BlockRegisters(i1 p4583 /* blocked */, i8 p4584 /* last */, i8 p4585 /* insn */) {
	*(i8*)(intptr_t)(ws+3864) = p4585; /*insn */
	*(i8*)(intptr_t)(ws+3872) = p4584; /*last */
	*(i1*)(intptr_t)(ws+3880) = p4583; /*blocked */

	i8 v4586 = (i8)(intptr_t)(ws+3864);
	i8 v4587 = *(i8*)(intptr_t)v4586;
	i8 v4588 = *(i8*)(intptr_t)v4587;
	i8 v4589 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4589 = v4588;

c02_02cd:;

	i8 v4590 = (i8)(intptr_t)(ws+3864);
	i8 v4591 = *(i8*)(intptr_t)v4590;
	i8 v4592 = (i8)(intptr_t)(ws+3872);
	i8 v4593 = *(i8*)(intptr_t)v4592;
	if (v4591==v4593) goto c02_02d0; else goto c02_02cf;

c02_02cf:;

	i8 v4594 = (i8)(intptr_t)(ws+3864);
	i8 v4595 = *(i8*)(intptr_t)v4594;
	i8 v4596 = v4595+(+50);
	i1 v4597 = *(i1*)(intptr_t)v4596;
	i8 v4598 = (i8)(intptr_t)(ws+3880);
	i1 v4599 = *(i1*)(intptr_t)v4598;
	i1 v4600 = v4597|v4599;
	i8 v4601 = (i8)(intptr_t)(ws+3864);
	i8 v4602 = *(i8*)(intptr_t)v4601;
	i8 v4603 = v4602+(+50);
	*(i1*)(intptr_t)v4603 = v4600;

	i8 v4604 = (i8)(intptr_t)(ws+3864);
	i8 v4605 = *(i8*)(intptr_t)v4604;
	i8 v4606 = v4605+(+51);
	i1 v4607 = *(i1*)(intptr_t)v4606;
	i8 v4608 = (i8)(intptr_t)(ws+3880);
	i1 v4609 = *(i1*)(intptr_t)v4608;
	i1 v4610 = v4607|v4609;
	i8 v4611 = (i8)(intptr_t)(ws+3864);
	i8 v4612 = *(i8*)(intptr_t)v4611;
	i8 v4613 = v4612+(+51);
	*(i1*)(intptr_t)v4613 = v4610;

	i8 v4614 = (i8)(intptr_t)(ws+3864);
	i8 v4615 = *(i8*)(intptr_t)v4614;
	i8 v4616 = (i8)(intptr_t)(ws+3872);
	i8 v4617 = *(i8*)(intptr_t)v4616;
	if (v4615==v4617) goto c02_02d4; else goto c02_02d5;

c02_02d4:;

	goto c02_02d0;

c02_02d5:;

c02_02d1:;

	i8 v4618 = (i8)(intptr_t)(ws+3864);
	i8 v4619 = *(i8*)(intptr_t)v4618;
	i8 v4620 = *(i8*)(intptr_t)v4619;
	i8 v4621 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4621 = v4620;

	goto c02_02cd;

c02_02d0:;

endsub:;
}
const i1 c02_s01e4[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };
	void f63_SimpleError(i8 /* s */);

// CreateSpill workspace at ws+3864 length ws+24
void f361_CreateSpill(i1 p4622 /* dest */, i1 p4623 /* src */, i8 p4624 /* insn */) {
	*(i8*)(intptr_t)(ws+3864) = p4624; /*insn */
	*(i1*)(intptr_t)(ws+3872) = p4623; /*src */
	*(i1*)(intptr_t)(ws+3873) = p4622; /*dest */

	i8 v4625 = (i8)(intptr_t)(ws+3864);
	i8 v4626 = *(i8*)(intptr_t)v4625;
	i8 v4627 = v4626+(+68);
	i1 v4628 = *(i1*)(intptr_t)v4627;
	i8 v4629 = (i8)(intptr_t)(ws+3874);
	*(i1*)(intptr_t)v4629 = v4628;

	i8 v4630 = (i8)(intptr_t)(ws+3874);
	i1 v4631 = *(i1*)(intptr_t)v4630;
	i1 v4632 = (i1)+5;
	if (v4631==v4632) goto c02_02d9; else goto c02_02da;

c02_02d9:;

	i8 v4633 = (i8)(intptr_t)c02_s01e4;
	i8 v4634 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v4634)(v4633);

c02_02da:;

c02_02d6:;

	i8 v4635 = (i8)(intptr_t)(ws+3864);
	i8 v4636 = *(i8*)(intptr_t)v4635;
	i8 v4637 = v4636+(+52);
	i8 v4638 = (i8)(intptr_t)(ws+3874);
	i1 v4639 = *(i1*)(intptr_t)v4638;
	i8 v4640 = v4639;
	i1 v4641 = (i1)+1;
	i8 v4642 = ((i8)v4640)<<v4641;
	i8 v4643 = v4637+v4642;
	i8 v4644 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4644 = v4643;

	i8 v4645 = (i8)(intptr_t)(ws+3872);
	i1 v4646 = *(i1*)(intptr_t)v4645;
	i8 v4647 = (i8)(intptr_t)(ws+3880);
	i8 v4648 = *(i8*)(intptr_t)v4647;
	*(i1*)(intptr_t)v4648 = v4646;

	i8 v4649 = (i8)(intptr_t)(ws+3873);
	i1 v4650 = *(i1*)(intptr_t)v4649;
	i8 v4651 = (i8)(intptr_t)(ws+3880);
	i8 v4652 = *(i8*)(intptr_t)v4651;
	i8 v4653 = v4652+(+1);
	*(i1*)(intptr_t)v4653 = v4650;

	i8 v4654 = (i8)(intptr_t)(ws+3874);
	i1 v4655 = *(i1*)(intptr_t)v4654;
	i1 v4656 = v4655+(+1);
	i8 v4657 = (i8)(intptr_t)(ws+3864);
	i8 v4658 = *(i8*)(intptr_t)v4657;
	i8 v4659 = v4658+(+68);
	*(i1*)(intptr_t)v4659 = v4656;

endsub:;
}
const i1 c02_s01e5[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };
	void f63_SimpleError(i8 /* s */);

// CreateReload workspace at ws+3864 length ws+24
void f362_CreateReload(i1 p4660 /* dest */, i1 p4661 /* src */, i8 p4662 /* insn */) {
	*(i8*)(intptr_t)(ws+3864) = p4662; /*insn */
	*(i1*)(intptr_t)(ws+3872) = p4661; /*src */
	*(i1*)(intptr_t)(ws+3873) = p4660; /*dest */

	i8 v4663 = (i8)(intptr_t)(ws+3864);
	i8 v4664 = *(i8*)(intptr_t)v4663;
	i8 v4665 = v4664+(+69);
	i1 v4666 = *(i1*)(intptr_t)v4665;
	i8 v4667 = (i8)(intptr_t)(ws+3874);
	*(i1*)(intptr_t)v4667 = v4666;

	i8 v4668 = (i8)(intptr_t)(ws+3874);
	i1 v4669 = *(i1*)(intptr_t)v4668;
	i1 v4670 = (i1)+5;
	if (v4669==v4670) goto c02_02de; else goto c02_02df;

c02_02de:;

	i8 v4671 = (i8)(intptr_t)c02_s01e5;
	i8 v4672 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v4672)(v4671);

c02_02df:;

c02_02db:;

	i8 v4673 = (i8)(intptr_t)(ws+3864);
	i8 v4674 = *(i8*)(intptr_t)v4673;
	i8 v4675 = v4674+(+60);
	i8 v4676 = (i8)(intptr_t)(ws+3874);
	i1 v4677 = *(i1*)(intptr_t)v4676;
	i8 v4678 = v4677;
	i1 v4679 = (i1)+1;
	i8 v4680 = ((i8)v4678)<<v4679;
	i8 v4681 = v4675+v4680;
	i8 v4682 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4682 = v4681;

	i8 v4683 = (i8)(intptr_t)(ws+3872);
	i1 v4684 = *(i1*)(intptr_t)v4683;
	i8 v4685 = (i8)(intptr_t)(ws+3880);
	i8 v4686 = *(i8*)(intptr_t)v4685;
	*(i1*)(intptr_t)v4686 = v4684;

	i8 v4687 = (i8)(intptr_t)(ws+3873);
	i1 v4688 = *(i1*)(intptr_t)v4687;
	i8 v4689 = (i8)(intptr_t)(ws+3880);
	i8 v4690 = *(i8*)(intptr_t)v4689;
	i8 v4691 = v4690+(+1);
	*(i1*)(intptr_t)v4691 = v4688;

	i8 v4692 = (i8)(intptr_t)(ws+3874);
	i1 v4693 = *(i1*)(intptr_t)v4692;
	i1 v4694 = v4693+(+1);
	i8 v4695 = (i8)(intptr_t)(ws+3864);
	i8 v4696 = *(i8*)(intptr_t)v4695;
	i8 v4697 = v4696+(+69);
	*(i1*)(intptr_t)v4697 = v4694;

endsub:;
}
	void f158_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f158_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f158_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f158_ArchEmitMove(i1 /* dest */, i1 /* src */);

// ShuffleRegisters workspace at ws+3848 length ws+25
void f363_ShuffleRegisters(i8 p4698 /* moves */) {
	*(i8*)(intptr_t)(ws+3848) = p4698; /*moves */

	i1 v4699 = (i1)+0;
	i8 v4700 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v4700 = v4699;

	i1 v4701 = (i1)+0;
	i8 v4702 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4702 = v4701;

	i8 v4703 = (i8)(intptr_t)(ws+3848);
	i8 v4704 = *(i8*)(intptr_t)v4703;
	i8 v4705 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4705 = v4704;

	i1 v4706 = (i1)+4;
	i8 v4707 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4707 = v4706;

c02_02e2:;

	i8 v4708 = (i8)(intptr_t)(ws+3872);
	i1 v4709 = *(i1*)(intptr_t)v4708;
	i1 v4710 = (i1)+0;
	if (v4709==v4710) goto c02_02e5; else goto c02_02e4;

c02_02e4:;

	i8 v4711 = (i8)(intptr_t)(ws+3856);
	i1 v4712 = *(i1*)(intptr_t)v4711;
	i8 v4713 = (i8)(intptr_t)(ws+3864);
	i8 v4714 = *(i8*)(intptr_t)v4713;
	i8 v4715 = v4714+(+1);
	i1 v4716 = *(i1*)(intptr_t)v4715;
	i1 v4717 = v4712|v4716;
	i8 v4718 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v4718 = v4717;

	i8 v4719 = (i8)(intptr_t)(ws+3857);
	i1 v4720 = *(i1*)(intptr_t)v4719;
	i8 v4721 = (i8)(intptr_t)(ws+3864);
	i8 v4722 = *(i8*)(intptr_t)v4721;
	i1 v4723 = *(i1*)(intptr_t)v4722;
	i1 v4724 = v4720|v4723;
	i8 v4725 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4725 = v4724;

	i8 v4726 = (i8)(intptr_t)(ws+3872);
	i1 v4727 = *(i1*)(intptr_t)v4726;
	i1 v4728 = v4727+(-1);
	i8 v4729 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4729 = v4728;

	i8 v4730 = (i8)(intptr_t)(ws+3864);
	i8 v4731 = *(i8*)(intptr_t)v4730;
	i8 v4732 = v4731+(+2);
	i8 v4733 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4733 = v4732;

	goto c02_02e2;

c02_02e5:;

c02_02e6:;

	i8 v4734 = (i8)(intptr_t)(ws+3848);
	i8 v4735 = *(i8*)(intptr_t)v4734;
	i8 v4736 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4736 = v4735;

	i1 v4737 = (i1)+4;
	i8 v4738 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4738 = v4737;

c02_02ea:;

	i8 v4739 = (i8)(intptr_t)(ws+3872);
	i1 v4740 = *(i1*)(intptr_t)v4739;
	i1 v4741 = (i1)+0;
	if (v4740==v4741) goto c02_02ed; else goto c02_02ec;

c02_02ec:;

	i8 v4742 = (i8)(intptr_t)(ws+3864);
	i8 v4743 = *(i8*)(intptr_t)v4742;
	i1 v4744 = *(i1*)(intptr_t)v4743;
	i1 v4745 = (i1)+0;
	if (v4744==v4745) goto c02_02f4; else goto c02_02f5;

c02_02f5:;

	i8 v4746 = (i8)(intptr_t)(ws+3864);
	i8 v4747 = *(i8*)(intptr_t)v4746;
	i8 v4748 = v4747+(+1);
	i1 v4749 = *(i1*)(intptr_t)v4748;
	i1 v4750 = (i1)+0;
	if (v4749==v4750) goto c02_02f3; else goto c02_02f4;

c02_02f3:;

	goto c02_02ed;

c02_02f4:;

c02_02ee:;

	i8 v4751 = (i8)(intptr_t)(ws+3864);
	i8 v4752 = *(i8*)(intptr_t)v4751;
	i8 v4753 = v4752+(+2);
	i8 v4754 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4754 = v4753;

	i8 v4755 = (i8)(intptr_t)(ws+3872);
	i1 v4756 = *(i1*)(intptr_t)v4755;
	i1 v4757 = v4756+(-1);
	i8 v4758 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4758 = v4757;

	goto c02_02ea;

c02_02ed:;

	i8 v4759 = (i8)(intptr_t)(ws+3872);
	i1 v4760 = *(i1*)(intptr_t)v4759;
	i1 v4761 = (i1)+0;
	if (v4760==v4761) goto c02_02fa; else goto c02_02f9;

c02_02f9:;

	i8 v4762 = (i8)(intptr_t)(ws+3864);
	i8 v4763 = *(i8*)(intptr_t)v4762;
	i1 v4764 = *(i1*)(intptr_t)v4763;
	i1 v4765 = (i1)+0;
	i8 v4766 = (i8)(intptr_t)(f158_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v4766)(v4765, v4764);

	i8 v4767 = (i8)(intptr_t)(ws+3857);
	i1 v4768 = *(i1*)(intptr_t)v4767;
	i8 v4769 = (i8)(intptr_t)(ws+3864);
	i8 v4770 = *(i8*)(intptr_t)v4769;
	i1 v4771 = *(i1*)(intptr_t)v4770;
	i1 v4772 = ~v4771;
	i1 v4773 = v4768&v4772;
	i8 v4774 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4774 = v4773;

	i1 v4775 = (i1)+0;
	i8 v4776 = (i8)(intptr_t)(ws+3864);
	i8 v4777 = *(i8*)(intptr_t)v4776;
	*(i1*)(intptr_t)v4777 = v4775;

	goto c02_02e6;

c02_02fa:;

c02_02f6:;

	i8 v4778 = (i8)(intptr_t)(ws+3848);
	i8 v4779 = *(i8*)(intptr_t)v4778;
	i8 v4780 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4780 = v4779;

	i1 v4781 = (i1)+4;
	i8 v4782 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4782 = v4781;

c02_02fd:;

	i8 v4783 = (i8)(intptr_t)(ws+3872);
	i1 v4784 = *(i1*)(intptr_t)v4783;
	i1 v4785 = (i1)+0;
	if (v4784==v4785) goto c02_0300; else goto c02_02ff;

c02_02ff:;

	i8 v4786 = (i8)(intptr_t)(ws+3864);
	i8 v4787 = *(i8*)(intptr_t)v4786;
	i1 v4788 = *(i1*)(intptr_t)v4787;
	i1 v4789 = (i1)+0;
	if (v4788==v4789) goto c02_0309; else goto c02_030b;

c02_030b:;

	i8 v4790 = (i8)(intptr_t)(ws+3864);
	i8 v4791 = *(i8*)(intptr_t)v4790;
	i8 v4792 = v4791+(+1);
	i1 v4793 = *(i1*)(intptr_t)v4792;
	i1 v4794 = (i1)+0;
	if (v4793==v4794) goto c02_0309; else goto c02_030a;

c02_030a:;

	i8 v4795 = (i8)(intptr_t)(ws+3864);
	i8 v4796 = *(i8*)(intptr_t)v4795;
	i8 v4797 = v4796+(+1);
	i1 v4798 = *(i1*)(intptr_t)v4797;
	i8 v4799 = (i8)(intptr_t)(ws+3857);
	i1 v4800 = *(i1*)(intptr_t)v4799;
	i1 v4801 = v4798&v4800;
	i1 v4802 = (i1)+0;
	if (v4801==v4802) goto c02_0308; else goto c02_0309;

c02_0308:;

	goto c02_0300;

c02_0309:;

c02_0301:;

	i8 v4803 = (i8)(intptr_t)(ws+3864);
	i8 v4804 = *(i8*)(intptr_t)v4803;
	i8 v4805 = v4804+(+2);
	i8 v4806 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4806 = v4805;

	i8 v4807 = (i8)(intptr_t)(ws+3872);
	i1 v4808 = *(i1*)(intptr_t)v4807;
	i1 v4809 = v4808+(-1);
	i8 v4810 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4810 = v4809;

	goto c02_02fd;

c02_0300:;

	i8 v4811 = (i8)(intptr_t)(ws+3872);
	i1 v4812 = *(i1*)(intptr_t)v4811;
	i1 v4813 = (i1)+0;
	if (v4812==v4813) goto c02_0310; else goto c02_030f;

c02_030f:;

	i8 v4814 = (i8)(intptr_t)(ws+3864);
	i8 v4815 = *(i8*)(intptr_t)v4814;
	i1 v4816 = *(i1*)(intptr_t)v4815;
	i8 v4817 = (i8)(intptr_t)(ws+3864);
	i8 v4818 = *(i8*)(intptr_t)v4817;
	i8 v4819 = v4818+(+1);
	i1 v4820 = *(i1*)(intptr_t)v4819;
	i8 v4821 = (i8)(intptr_t)(f158_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v4821)(v4820, v4816);

	i8 v4822 = (i8)(intptr_t)(ws+3857);
	i1 v4823 = *(i1*)(intptr_t)v4822;
	i8 v4824 = (i8)(intptr_t)(ws+3864);
	i8 v4825 = *(i8*)(intptr_t)v4824;
	i1 v4826 = *(i1*)(intptr_t)v4825;
	i1 v4827 = ~v4826;
	i1 v4828 = v4823&v4827;
	i8 v4829 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4829 = v4828;

	i8 v4830 = (i8)(intptr_t)(ws+3856);
	i1 v4831 = *(i1*)(intptr_t)v4830;
	i8 v4832 = (i8)(intptr_t)(ws+3864);
	i8 v4833 = *(i8*)(intptr_t)v4832;
	i8 v4834 = v4833+(+1);
	i1 v4835 = *(i1*)(intptr_t)v4834;
	i1 v4836 = ~v4835;
	i1 v4837 = v4831&v4836;
	i8 v4838 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v4838 = v4837;

	i1 v4839 = (i1)+0;
	i8 v4840 = (i8)(intptr_t)(ws+3864);
	i8 v4841 = *(i8*)(intptr_t)v4840;
	*(i1*)(intptr_t)v4841 = v4839;

	i1 v4842 = (i1)+0;
	i8 v4843 = (i8)(intptr_t)(ws+3864);
	i8 v4844 = *(i8*)(intptr_t)v4843;
	i8 v4845 = v4844+(+1);
	*(i1*)(intptr_t)v4845 = v4842;

	goto c02_02e6;

c02_0310:;

c02_030c:;

	i8 v4846 = (i8)(intptr_t)(ws+3848);
	i8 v4847 = *(i8*)(intptr_t)v4846;
	i8 v4848 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4848 = v4847;

	i1 v4849 = (i1)+4;
	i8 v4850 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4850 = v4849;

c02_0313:;

	i8 v4851 = (i8)(intptr_t)(ws+3872);
	i1 v4852 = *(i1*)(intptr_t)v4851;
	i1 v4853 = (i1)+0;
	if (v4852==v4853) goto c02_0316; else goto c02_0315;

c02_0315:;

	i8 v4854 = (i8)(intptr_t)(ws+3864);
	i8 v4855 = *(i8*)(intptr_t)v4854;
	i1 v4856 = *(i1*)(intptr_t)v4855;
	i1 v4857 = (i1)+0;
	if (v4856==v4857) goto c02_031e; else goto c02_031d;

c02_031e:;

	i8 v4858 = (i8)(intptr_t)(ws+3864);
	i8 v4859 = *(i8*)(intptr_t)v4858;
	i8 v4860 = v4859+(+1);
	i1 v4861 = *(i1*)(intptr_t)v4860;
	i1 v4862 = (i1)+0;
	if (v4861==v4862) goto c02_031d; else goto c02_031c;

c02_031c:;

	goto c02_0316;

c02_031d:;

c02_0317:;

	i8 v4863 = (i8)(intptr_t)(ws+3864);
	i8 v4864 = *(i8*)(intptr_t)v4863;
	i8 v4865 = v4864+(+2);
	i8 v4866 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4866 = v4865;

	i8 v4867 = (i8)(intptr_t)(ws+3872);
	i1 v4868 = *(i1*)(intptr_t)v4867;
	i1 v4869 = v4868+(-1);
	i8 v4870 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4870 = v4869;

	goto c02_0313;

c02_0316:;

	i8 v4871 = (i8)(intptr_t)(ws+3872);
	i1 v4872 = *(i1*)(intptr_t)v4871;
	i1 v4873 = (i1)+0;
	if (v4872==v4873) goto c02_0323; else goto c02_0322;

c02_0322:;

	i1 v4874 = (i1)+0;
	i8 v4875 = (i8)(intptr_t)(ws+3864);
	i8 v4876 = *(i8*)(intptr_t)v4875;
	i8 v4877 = v4876+(+1);
	i1 v4878 = *(i1*)(intptr_t)v4877;
	i8 v4879 = (i8)(intptr_t)(f158_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v4879)(v4878, v4874);

	i8 v4880 = (i8)(intptr_t)(ws+3856);
	i1 v4881 = *(i1*)(intptr_t)v4880;
	i8 v4882 = (i8)(intptr_t)(ws+3864);
	i8 v4883 = *(i8*)(intptr_t)v4882;
	i8 v4884 = v4883+(+1);
	i1 v4885 = *(i1*)(intptr_t)v4884;
	i1 v4886 = ~v4885;
	i1 v4887 = v4881&v4886;
	i8 v4888 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v4888 = v4887;

	i1 v4889 = (i1)+0;
	i8 v4890 = (i8)(intptr_t)(ws+3864);
	i8 v4891 = *(i8*)(intptr_t)v4890;
	i8 v4892 = v4891+(+1);
	*(i1*)(intptr_t)v4892 = v4889;

	goto c02_02e6;

c02_0323:;

c02_031f:;

	i8 v4893 = (i8)(intptr_t)(ws+3848);
	i8 v4894 = *(i8*)(intptr_t)v4893;
	i8 v4895 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4895 = v4894;

	i1 v4896 = (i1)+4;
	i8 v4897 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4897 = v4896;

c02_0326:;

	i8 v4898 = (i8)(intptr_t)(ws+3872);
	i1 v4899 = *(i1*)(intptr_t)v4898;
	i1 v4900 = (i1)+0;
	if (v4899==v4900) goto c02_0329; else goto c02_0328;

c02_0328:;

	i8 v4901 = (i8)(intptr_t)(ws+3864);
	i8 v4902 = *(i8*)(intptr_t)v4901;
	i1 v4903 = *(i1*)(intptr_t)v4902;
	i1 v4904 = (i1)+0;
	if (v4903==v4904) goto c02_0330; else goto c02_0331;

c02_0331:;

	i8 v4905 = (i8)(intptr_t)(ws+3864);
	i8 v4906 = *(i8*)(intptr_t)v4905;
	i8 v4907 = v4906+(+1);
	i1 v4908 = *(i1*)(intptr_t)v4907;
	i1 v4909 = (i1)+0;
	if (v4908==v4909) goto c02_0330; else goto c02_032f;

c02_032f:;

	goto c02_0329;

c02_0330:;

c02_032a:;

	i8 v4910 = (i8)(intptr_t)(ws+3864);
	i8 v4911 = *(i8*)(intptr_t)v4910;
	i8 v4912 = v4911+(+2);
	i8 v4913 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4913 = v4912;

	i8 v4914 = (i8)(intptr_t)(ws+3872);
	i1 v4915 = *(i1*)(intptr_t)v4914;
	i1 v4916 = v4915+(-1);
	i8 v4917 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4917 = v4916;

	goto c02_0326;

c02_0329:;

	i8 v4918 = (i8)(intptr_t)(ws+3872);
	i1 v4919 = *(i1*)(intptr_t)v4918;
	i1 v4920 = (i1)+0;
	if (v4919==v4920) goto c02_0336; else goto c02_0335;

c02_0335:;

	i8 v4921 = (i8)(intptr_t)(ws+3864);
	i8 v4922 = *(i8*)(intptr_t)v4921;
	i1 v4923 = *(i1*)(intptr_t)v4922;
	i1 v4924 = (i1)+0;
	i8 v4925 = (i8)(intptr_t)(f158_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v4925)(v4924, v4923);

	i8 v4926 = (i8)(intptr_t)(ws+3857);
	i1 v4927 = *(i1*)(intptr_t)v4926;
	i8 v4928 = (i8)(intptr_t)(ws+3864);
	i8 v4929 = *(i8*)(intptr_t)v4928;
	i1 v4930 = *(i1*)(intptr_t)v4929;
	i1 v4931 = ~v4930;
	i1 v4932 = v4927&v4931;
	i8 v4933 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4933 = v4932;

	i1 v4934 = (i1)+0;
	i8 v4935 = (i8)(intptr_t)(ws+3864);
	i8 v4936 = *(i8*)(intptr_t)v4935;
	*(i1*)(intptr_t)v4936 = v4934;

	goto c02_02e6;

c02_0336:;

c02_0332:;

	goto c02_02e7;

c02_02e7:;

endsub:;
}
	void f56_PushNode(i8 /* node */);
	void f58_NextNode(i8* /* node */);
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

// PrintNodes workspace at ws+3904 length ws+24
void f364_PrintNodes(i8 p4937 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3904) = p4937; /*rootnode */

	i8 v4938 = (i8)(intptr_t)(ws+184);
	i8 v4939 = *(i8*)(intptr_t)v4938;
	i8 v4940 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v4940 = v4939;

	i8 v4941 = (i8)(intptr_t)(ws+3904);
	i8 v4942 = *(i8*)(intptr_t)v4941;
	i8 v4943 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v4943)(v4942);

c02_0339:;

	i8 v4944 = (i8)(intptr_t)(ws+184);
	i8 v4945 = *(i8*)(intptr_t)v4944;
	i8 v4946 = (i8)(intptr_t)(ws+3912);
	i8 v4947 = *(i8*)(intptr_t)v4946;
	if (v4945==v4947) goto c02_033c; else goto c02_033b;

c02_033b:;

	i8 v4948 = (i8)(intptr_t)(f58_NextNode);
	i8 v4949;

	((void(*)(i8* /* node */))(intptr_t)v4948)(&v4949);
	i8 v4950 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v4950 = v4949;

	i8 v4951 = (i8)(intptr_t)(ws+3920);
	i8 v4952 = *(i8*)(intptr_t)v4951;
	i8 v4953 = (i8)+0;
	if (v4952==v4953) goto c02_0340; else goto c02_0341;

c02_0340:;

	goto c02_033c;

c02_0341:;

c02_033d:;

	i8 v4954 = (i8)(intptr_t)(ws+3920);
	i8 v4955 = *(i8*)(intptr_t)v4954;
	i4 v4956 = v4955;
	i8 v4957 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v4957)(v4956);

	i1 v4958 = (i1)+32;
	i8 v4959 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4959)(v4958);

	i8 v4960 = (i8)(intptr_t)(ws+3920);
	i8 v4961 = *(i8*)(intptr_t)v4960;
	i8 v4962 = v4961+(+256);
	i1 v4963 = *(i1*)(intptr_t)v4962;
	i8 v4964 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v4964)(v4963);

	i1 v4965 = (i1)+32;
	i8 v4966 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4966)(v4965);

	i8 v4967 = (i8)(intptr_t)(ws+3920);
	i8 v4968 = *(i8*)(intptr_t)v4967;
	i8 v4969 = v4968+(+56);
	i1 v4970 = *(i1*)(intptr_t)v4969;
	i2 v4971 = v4970;
	i8 v4972 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v4972)(v4971);

	i1 v4973 = (i1)+32;
	i8 v4974 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4974)(v4973);

	i8 v4975 = (i8)(intptr_t)(ws+3920);
	i8 v4976 = *(i8*)(intptr_t)v4975;
	i8 v4977 = v4976+(+57);
	i1 v4978 = *(i1*)(intptr_t)v4977;
	i2 v4979 = v4978;
	i8 v4980 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v4980)(v4979);

	i1 v4981 = (i1)+32;
	i8 v4982 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4982)(v4981);

	i8 v4983 = (i8)(intptr_t)(ws+3920);
	i8 v4984 = *(i8*)(intptr_t)v4983;
	i8 v4985 = v4984+(+24);
	i8 v4986 = *(i8*)(intptr_t)v4985;
	i4 v4987 = v4986;
	i8 v4988 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v4988)(v4987);

	i1 v4989 = (i1)+32;
	i8 v4990 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4990)(v4989);

	i8 v4991 = (i8)(intptr_t)(ws+3920);
	i8 v4992 = *(i8*)(intptr_t)v4991;
	i8 v4993 = v4992+(+32);
	i8 v4994 = *(i8*)(intptr_t)v4993;
	i4 v4995 = v4994;
	i8 v4996 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v4996)(v4995);

	i8 v4997 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v4997)();

	goto c02_0339;

c02_033c:;

endsub:;
}
	void f56_PushNode(i8 /* node */);
	void f141_AllocNewInstruction(i8* /* insn */);
	void f57_PopNode(i8* /* node */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f357_PopulateMatchBuffer(i8 /* matchbuf */, i8 /* n */, i8 /* insn */);

// RewindRulePointers workspace at ws+3904 length ws+0
void f367_RewindRulePointers(void) {

	i8 v5040 = (i8)(intptr_t)(ws+3840);
	i8 v5041 = (i8)+4;
	i8 v5042 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v5042)(v5041, v5040);

	i8 v5043 = (i8)(intptr_t)(ws+3848);
	i8 v5044 = (i8)+32;
	i8 v5045 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v5045)(v5044, v5043);

	i8 v5046 = (i8)(intptr_t)(ws+3816);
	i8 v5047 = *(i8*)(intptr_t)v5046;
	i8 v5048 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v5048 = v5047;

	i8 v5049 = (i8)(intptr_t)(ws+3808);
	i8 v5050 = *(i8*)(intptr_t)v5049;
	i8 v5051 = (i8)(intptr_t)(ws+3848);
	i8 v5052 = (i8)(intptr_t)(ws+3840);
	i8 v5053 = (i8)(intptr_t)(f357_PopulateMatchBuffer);

	((void(*)(i8 /* matchbuf */, i8 /* n */, i8 /* insn */))(intptr_t)v5053)(v5052, v5051, v5050);

	i1 v5054 = (i1)+255;
	i8 v5055 = (i8)(intptr_t)(ws+3824);
	*(i1*)(intptr_t)v5055 = v5054;

	i8 v5056 = (i8)(intptr_t)((i1*)f3___main_s02a3);
	i8 v5057 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v5057 = v5056;

	i8 v5058 = (i8)(intptr_t)((i1*)f3___main_s02a4);
	i8 v5059 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v5059 = v5058;

	i8 v5060 = (i8)(intptr_t)((i1*)f3___main_s02a5-7);
	i8 v5061 = (i8)(intptr_t)(ws+3832);
	*(i8*)(intptr_t)v5061 = v5060;

endsub:;
}
	void f179_MatchPredicate(i1* /* matches */, i8 /* n */, i1 /* rule */);

// TestRule workspace at ws+3904 length ws+27
void f368_TestRule(i1* p5062 /* result */) {

	i1 v5063 = (i1)+0;
	i8 v5064 = (i8)(intptr_t)(ws+3904);
	*(i1*)(intptr_t)v5064 = v5063;

	i8 v5065 = (i8)(intptr_t)(ws+3832);
	i8 v5066 = *(i8*)(intptr_t)v5065;
	i8 v5067 = v5066+(+1);
	i1 v5068 = *(i1*)(intptr_t)v5067;
	i1 v5069 = (i1)+0;
	if (v5068==v5069) goto c02_0351; else goto c02_0350;

c02_0350:;

	i8 v5070 = (i8)(intptr_t)(ws+3816);
	i8 v5071 = *(i8*)(intptr_t)v5070;
	i8 v5072 = v5071+(+56);
	i1 v5073 = *(i1*)(intptr_t)v5072;
	i8 v5074 = (i8)(intptr_t)(ws+3832);
	i8 v5075 = *(i8*)(intptr_t)v5074;
	i8 v5076 = v5075+(+1);
	i1 v5077 = *(i1*)(intptr_t)v5076;
	i1 v5078 = v5073&v5077;
	i1 v5079 = (i1)+0;
	if (v5078==v5079) goto c02_0355; else goto c02_0356;

c02_0355:;

	goto endsub;

c02_0356:;

c02_0352:;

	goto c02_034d;

c02_0351:;

	i8 v5080 = (i8)(intptr_t)(ws+3816);
	i8 v5081 = *(i8*)(intptr_t)v5080;
	i8 v5082 = v5081+(+56);
	i1 v5083 = *(i1*)(intptr_t)v5082;
	i1 v5084 = (i1)+0;
	if (v5083==v5084) goto c02_035b; else goto c02_035a;

c02_035a:;

	goto endsub;

c02_035b:;

c02_0357:;

c02_034d:;

	i8 v5085 = (i8)(intptr_t)(ws+3840);
	i8 v5086 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v5086 = v5085;

	i8 v5087 = (i8)(intptr_t)(ws+3880);
	i8 v5088 = *(i8*)(intptr_t)v5087;
	i8 v5089 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v5089 = v5088;

	i8 v5090 = (i8)(intptr_t)(ws+3832);
	i8 v5091 = *(i8*)(intptr_t)v5090;
	i8 v5092 = v5091+(+4);
	i1 v5093 = *(i1*)(intptr_t)v5092;
	i8 v5094 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v5094 = v5093;

c02_035e:;

	i8 v5095 = (i8)(intptr_t)(ws+3928);
	i1 v5096 = *(i1*)(intptr_t)v5095;
	i1 v5097 = (i1)+0;
	if (v5096==v5097) goto c02_0361; else goto c02_0360;

c02_0360:;

	i8 v5098 = (i8)(intptr_t)(ws+3912);
	i8 v5099 = *(i8*)(intptr_t)v5098;
	i1 v5100 = *(i1*)(intptr_t)v5099;
	i8 v5101 = (i8)(intptr_t)(ws+3929);
	*(i1*)(intptr_t)v5101 = v5100;

	i8 v5102 = (i8)(intptr_t)(ws+3912);
	i8 v5103 = *(i8*)(intptr_t)v5102;
	i8 v5104 = v5103+(+1);
	i8 v5105 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v5105 = v5104;

	i8 v5106 = (i8)(intptr_t)(ws+3928);
	i1 v5107 = *(i1*)(intptr_t)v5106;
	i1 v5108 = v5107&(+1);
	i1 v5109 = (i1)+0;
	if (v5108==v5109) goto c02_0366; else goto c02_0365;

c02_0365:;

	i8 v5110 = (i8)(intptr_t)(ws+3920);
	i8 v5111 = *(i8*)(intptr_t)v5110;
	i1 v5112 = *(i1*)(intptr_t)v5111;
	i8 v5113 = (i8)(intptr_t)(ws+3930);
	*(i1*)(intptr_t)v5113 = v5112;

	i8 v5114 = (i8)(intptr_t)(ws+3920);
	i8 v5115 = *(i8*)(intptr_t)v5114;
	i8 v5116 = v5115+(+1);
	i8 v5117 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v5117 = v5116;

	i8 v5118 = (i8)(intptr_t)(ws+3929);
	i1 v5119 = *(i1*)(intptr_t)v5118;
	i8 v5120 = (i8)(intptr_t)(ws+3930);
	i1 v5121 = *(i1*)(intptr_t)v5120;
	if (v5119==v5121) goto c02_036b; else goto c02_036a;

c02_036a:;

	goto endsub;

c02_036b:;

c02_0367:;

c02_0366:;

c02_0362:;

	i8 v5122 = (i8)(intptr_t)(ws+3928);
	i1 v5123 = *(i1*)(intptr_t)v5122;
	i1 v5124 = (i1)+1;
	i1 v5125 = ((i1)v5123)>>v5124;
	i8 v5126 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v5126 = v5125;

	goto c02_035e;

c02_0361:;

	i8 v5127 = (i8)(intptr_t)(ws+3832);
	i8 v5128 = *(i8*)(intptr_t)v5127;
	i1 v5129 = *(i1*)(intptr_t)v5128;
	i1 v5130 = v5129&(+1);
	i1 v5131 = (i1)+0;
	if (v5130==v5131) goto c02_0372; else goto c02_0373;

c02_0373:;

	i8 v5132 = (i8)(intptr_t)(ws+3824);
	i1 v5133 = *(i1*)(intptr_t)v5132;
	i8 v5134 = (i8)(intptr_t)(ws+3848);
	i8 v5135 = (i8)(intptr_t)(f179_MatchPredicate);
	i1 v5136;

	((void(*)(i1* /* matches */, i8 /* n */, i1 /* rule */))(intptr_t)v5135)(&v5136, v5134, v5133);
	i1 v5137 = (i1)+0;
	if (v5136==v5137) goto c02_0371; else goto c02_0372;

c02_0371:;

	goto endsub;

c02_0372:;

c02_036c:;

	i1 v5138 = (i1)+1;
	i8 v5139 = (i8)(intptr_t)(ws+3904);
	*(i1*)(intptr_t)v5139 = v5138;

endsub:;
	*p5062 = *(i1*)(intptr_t)(ws+3904);
}
	void f367_RewindRulePointers(void);
	void f72_AllocateNewNode(i8* /* m */, i1 /* code */);

// ConvertNodeToFallback workspace at ws+3904 length ws+25
void f369_ConvertNodeToFallback(void) {

	i8 v5162 = (i8)(intptr_t)(ws+3816);
	i8 v5163 = *(i8*)(intptr_t)v5162;
	i8 v5164 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v5164 = v5163;

	i1 v5165 = (i1)+24;
	i8 v5166 = (i8)(intptr_t)(f72_AllocateNewNode);
	i8 v5167;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v5166)(&v5167, v5165);
	i8 v5168 = (i8)(intptr_t)(ws+3816);
	*(i8*)(intptr_t)v5168 = v5167;

	i8 v5169 = (i8)(intptr_t)(ws+3904);
	i8 v5170 = *(i8*)(intptr_t)v5169;
	i8 v5171 = (i8)(intptr_t)(ws+3816);
	i8 v5172 = *(i8*)(intptr_t)v5171;
	i8 v5173 = v5172+(+24);
	*(i8*)(intptr_t)v5173 = v5170;

	i8 v5174 = (i8)(intptr_t)(ws+3904);
	i8 v5175 = *(i8*)(intptr_t)v5174;
	i8 v5176 = v5175+(+48);
	i8 v5177 = *(i8*)(intptr_t)v5176;
	i8 v5178 = (i8)(intptr_t)(ws+3816);
	i8 v5179 = *(i8*)(intptr_t)v5178;
	i8 v5180 = v5179+(+48);
	*(i8*)(intptr_t)v5180 = v5177;

	i8 v5181 = (i8)(intptr_t)(ws+3816);
	i8 v5182 = *(i8*)(intptr_t)v5181;
	i8 v5183 = v5182+(+48);
	i8 v5184 = *(i8*)(intptr_t)v5183;
	i8 v5185 = v5184+(+16);
	i8 v5186 = *(i8*)(intptr_t)v5185;
	i8 v5187 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v5187 = v5186;

	i8 v5188 = (i8)(intptr_t)(ws+3904);
	i8 v5189 = *(i8*)(intptr_t)v5188;
	i8 v5190 = v5189+(+56);
	i1 v5191 = *(i1*)(intptr_t)v5190;
	i8 v5192 = (i8)(intptr_t)(ws+3816);
	i8 v5193 = *(i8*)(intptr_t)v5192;
	i8 v5194 = v5193+(+56);
	*(i1*)(intptr_t)v5194 = v5191;

	i8 v5195 = (i8)(intptr_t)(ws+3912);
	i8 v5196 = *(i8*)(intptr_t)v5195;
	i8 v5197 = v5196+(+40);
	i8 v5198 = *(i8*)(intptr_t)v5197;
	i8 v5199 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v5199 = v5198;

	i1 v5200 = (i1)+0;
	i8 v5201 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v5201 = v5200;

c02_0385:;

	i8 v5202 = (i8)(intptr_t)(ws+3928);
	i1 v5203 = *(i1*)(intptr_t)v5202;
	i1 v5204 = (i1)+4;
	if (v5203==v5204) goto c02_0388; else goto c02_0387;

c02_0387:;

	i8 v5205 = (i8)(intptr_t)(ws+3920);
	i8 v5206 = *(i8*)(intptr_t)v5205;
	i8 v5207 = v5206+(+16);
	i8 v5208 = (i8)(intptr_t)(ws+3928);
	i1 v5209 = *(i1*)(intptr_t)v5208;
	i8 v5210 = v5209;
	i1 v5211 = (i1)+3;
	i8 v5212 = ((i8)v5210)<<v5211;
	i8 v5213 = v5207+v5212;
	i8 v5214 = *(i8*)(intptr_t)v5213;
	i8 v5215 = (i8)(intptr_t)(ws+3904);
	i8 v5216 = *(i8*)(intptr_t)v5215;
	if (v5214==v5216) goto c02_038c; else goto c02_038d;

c02_038c:;

	i8 v5217 = (i8)(intptr_t)(ws+3816);
	i8 v5218 = *(i8*)(intptr_t)v5217;
	i8 v5219 = (i8)(intptr_t)(ws+3920);
	i8 v5220 = *(i8*)(intptr_t)v5219;
	i8 v5221 = v5220+(+16);
	i8 v5222 = (i8)(intptr_t)(ws+3928);
	i1 v5223 = *(i1*)(intptr_t)v5222;
	i8 v5224 = v5223;
	i1 v5225 = (i1)+3;
	i8 v5226 = ((i8)v5224)<<v5225;
	i8 v5227 = v5221+v5226;
	*(i8*)(intptr_t)v5227 = v5218;

c02_038d:;

c02_0389:;

	i8 v5228 = (i8)(intptr_t)(ws+3928);
	i1 v5229 = *(i1*)(intptr_t)v5228;
	i1 v5230 = v5229+(+1);
	i8 v5231 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v5231 = v5230;

	goto c02_0385;

c02_0388:;

endsub:;
}
	void f369_ConvertNodeToFallback(void);
	void f367_RewindRulePointers(void);
	void f364_PrintNodes(i8 /* rootnode */);
	void f61_StartError(void);
const i1 c02_s01e6[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f8_print_char(i1 /* c */);
const i1 c02_s01e7[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f62_EndError(void);
	void f368_TestRule(i1* /* result */);
	void f56_PushNode(i8 /* node */);

// CopyChildNodes workspace at ws+3904 length ws+16
void f370_CopyChildNodes(void) {

	i8 v5331 = (i8)(intptr_t)(ws+3832);
	i8 v5332 = *(i8*)(intptr_t)v5331;
	i8 v5333 = v5332+(+5);
	i1 v5334 = *(i1*)(intptr_t)v5333;
	i8 v5335 = (i8)(intptr_t)(ws+3904);
	*(i1*)(intptr_t)v5335 = v5334;

	i8 v5336 = (i8)(intptr_t)(ws+3832);
	i8 v5337 = *(i8*)(intptr_t)v5336;
	i8 v5338 = v5337+(+6);
	i1 v5339 = *(i1*)(intptr_t)v5338;
	i8 v5340 = (i8)(intptr_t)(ws+3905);
	*(i1*)(intptr_t)v5340 = v5339;

	i1 v5341 = (i1)+0;
	i8 v5342 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5342 = v5341;

c02_03b1:;

	i8 v5343 = (i8)(intptr_t)(ws+3776);
	i1 v5344 = *(i1*)(intptr_t)v5343;
	i1 v5345 = (i1)+4;
	if (v5344==v5345) goto c02_03b4; else goto c02_03b3;

c02_03b3:;

	i8 v5346 = (i8)(intptr_t)(ws+3848);
	i8 v5347 = (i8)(intptr_t)(ws+3776);
	i1 v5348 = *(i1*)(intptr_t)v5347;
	i8 v5349 = v5348;
	i1 v5350 = (i1)+3;
	i8 v5351 = ((i8)v5349)<<v5350;
	i8 v5352 = v5346+v5351;
	i8 v5353 = *(i8*)(intptr_t)v5352;
	i8 v5354 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v5354 = v5353;

	i8 v5355 = (i8)(intptr_t)(ws+3904);
	i1 v5356 = *(i1*)(intptr_t)v5355;
	i1 v5357 = v5356&(+1);
	i1 v5358 = (i1)+0;
	if (v5357==v5358) goto c02_03b9; else goto c02_03b8;

c02_03b8:;

	i8 v5359 = (i8)(intptr_t)(ws+3912);
	i8 v5360 = *(i8*)(intptr_t)v5359;
	i8 v5361 = (i8)(intptr_t)(ws+3808);
	i8 v5362 = *(i8*)(intptr_t)v5361;
	i8 v5363 = v5362+(+16);
	i8 v5364 = (i8)(intptr_t)(ws+3776);
	i1 v5365 = *(i1*)(intptr_t)v5364;
	i8 v5366 = v5365;
	i1 v5367 = (i1)+3;
	i8 v5368 = ((i8)v5366)<<v5367;
	i8 v5369 = v5363+v5368;
	*(i8*)(intptr_t)v5369 = v5360;

	i8 v5370 = (i8)(intptr_t)(ws+3905);
	i1 v5371 = *(i1*)(intptr_t)v5370;
	i1 v5372 = v5371&(+1);
	i1 v5373 = (i1)+0;
	if (v5372==v5373) goto c02_03be; else goto c02_03bd;

c02_03bd:;

	i8 v5374 = (i8)(intptr_t)(ws+3912);
	i8 v5375 = *(i8*)(intptr_t)v5374;
	i8 v5376 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5376)(v5375);

	i8 v5377 = (i8)(intptr_t)(ws+3888);
	i8 v5378 = *(i8*)(intptr_t)v5377;
	i1 v5379 = *(i1*)(intptr_t)v5378;
	i8 v5380 = (i8)(intptr_t)(ws+3912);
	i8 v5381 = *(i8*)(intptr_t)v5380;
	i8 v5382 = v5381+(+56);
	*(i1*)(intptr_t)v5382 = v5379;

	i8 v5383 = (i8)(intptr_t)(ws+3888);
	i8 v5384 = *(i8*)(intptr_t)v5383;
	i8 v5385 = v5384+(+1);
	i8 v5386 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v5386 = v5385;

	i8 v5387 = (i8)(intptr_t)(ws+3808);
	i8 v5388 = *(i8*)(intptr_t)v5387;
	i8 v5389 = (i8)(intptr_t)(ws+3912);
	i8 v5390 = *(i8*)(intptr_t)v5389;
	i8 v5391 = v5390+(+48);
	*(i8*)(intptr_t)v5391 = v5388;

c02_03be:;

c02_03ba:;

c02_03b9:;

c02_03b5:;

	i8 v5392 = (i8)(intptr_t)(ws+3904);
	i1 v5393 = *(i1*)(intptr_t)v5392;
	i1 v5394 = (i1)+1;
	i1 v5395 = ((i1)v5393)>>v5394;
	i8 v5396 = (i8)(intptr_t)(ws+3904);
	*(i1*)(intptr_t)v5396 = v5395;

	i8 v5397 = (i8)(intptr_t)(ws+3905);
	i1 v5398 = *(i1*)(intptr_t)v5397;
	i1 v5399 = (i1)+1;
	i1 v5400 = ((i1)v5398)>>v5399;
	i8 v5401 = (i8)(intptr_t)(ws+3905);
	*(i1*)(intptr_t)v5401 = v5400;

	i8 v5402 = (i8)(intptr_t)(ws+3776);
	i1 v5403 = *(i1*)(intptr_t)v5402;
	i1 v5404 = v5403+(+1);
	i8 v5405 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5405 = v5404;

	goto c02_03b1;

c02_03b4:;

	i8 v5406 = (i8)(intptr_t)(ws+3808);
	i8 v5407 = *(i8*)(intptr_t)v5406;
	i8 v5408 = (i8)(intptr_t)(ws+3816);
	i8 v5409 = *(i8*)(intptr_t)v5408;
	i8 v5410 = v5409+(+40);
	*(i8*)(intptr_t)v5410 = v5407;

endsub:;
}
	void f370_CopyChildNodes(void);

// InstructionMatcher workspace at ws+3840 length ws+57
void f366_InstructionMatcher(void) {



	i8 v5140 = (i8)(intptr_t)(f367_RewindRulePointers);

	((void(*)(void))(intptr_t)v5140)();

c02_0374:;

	i8 v5141 = (i8)(intptr_t)(ws+3832);
	i8 v5142 = *(i8*)(intptr_t)v5141;
	i8 v5143 = v5142+(+7);
	i8 v5144 = (i8)(intptr_t)(ws+3832);
	*(i8*)(intptr_t)v5144 = v5143;

	i8 v5145 = (i8)(intptr_t)(ws+3824);
	i1 v5146 = *(i1*)(intptr_t)v5145;
	i1 v5147 = v5146+(+1);
	i8 v5148 = (i8)(intptr_t)(ws+3824);
	*(i1*)(intptr_t)v5148 = v5147;

	i8 v5149 = (i8)(intptr_t)(ws+3832);
	i8 v5150 = *(i8*)(intptr_t)v5149;
	i8 v5151 = (i8)(intptr_t)((i1*)f3___main_s02a5+1330);
	if (v5150==v5151) goto c02_0379; else goto c02_037a;

c02_0379:;

	i8 v5152 = (i8)(intptr_t)(ws+3816);
	i8 v5153 = *(i8*)(intptr_t)v5152;
	i8 v5154 = v5153+(+256);
	i1 v5155 = *(i1*)(intptr_t)v5154;
	i1 v5156 = (i1)+24;
	if (v5155==v5156) goto c02_0381; else goto c02_0382;

c02_0382:;

	i8 v5157 = (i8)(intptr_t)(ws+3816);
	i8 v5158 = *(i8*)(intptr_t)v5157;
	i8 v5159 = v5158+(+48);
	i8 v5160 = *(i8*)(intptr_t)v5159;
	i8 v5161 = (i8)+0;
	if (v5160==v5161) goto c02_0381; else goto c02_0380;

c02_0380:;


	i8 v5232 = (i8)(intptr_t)(f369_ConvertNodeToFallback);

	((void(*)(void))(intptr_t)v5232)();

	i8 v5233 = (i8)(intptr_t)(f367_RewindRulePointers);

	((void(*)(void))(intptr_t)v5233)();

	goto c02_0374;

c02_0381:;

c02_037b:;

	i8 v5234 = (i8)(intptr_t)(ws+3768);
	i8 v5235 = *(i8*)(intptr_t)v5234;
	i8 v5236 = (i8)(intptr_t)(f364_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v5236)(v5235);

	i8 v5237 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v5237)();

	i8 v5238 = (i8)(intptr_t)c02_s01e6;
	i8 v5239 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5239)(v5238);

	i1 v5240 = (i1)+0;
	i8 v5241 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5241 = v5240;

c02_0390:;

	i8 v5242 = (i8)(intptr_t)(ws+3776);
	i1 v5243 = *(i1*)(intptr_t)v5242;
	i1 v5244 = (i1)+4;
	if (v5243==v5244) goto c02_0393; else goto c02_0392;

c02_0392:;

	i8 v5245 = (i8)(intptr_t)(ws+3840);
	i8 v5246 = (i8)(intptr_t)(ws+3776);
	i1 v5247 = *(i1*)(intptr_t)v5246;
	i8 v5248 = v5247;
	i8 v5249 = v5245+v5248;
	i1 v5250 = *(i1*)(intptr_t)v5249;
	i8 v5251 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v5251)(v5250);

	i1 v5252 = (i1)+32;
	i8 v5253 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5253)(v5252);

	i8 v5254 = (i8)(intptr_t)(ws+3776);
	i1 v5255 = *(i1*)(intptr_t)v5254;
	i1 v5256 = v5255+(+1);
	i8 v5257 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5257 = v5256;

	goto c02_0390;

c02_0393:;

	i8 v5258 = (i8)(intptr_t)c02_s01e7;
	i8 v5259 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5259)(v5258);

	i8 v5260 = (i8)(intptr_t)(ws+3816);
	i8 v5261 = *(i8*)(intptr_t)v5260;
	i8 v5262 = v5261+(+56);
	i1 v5263 = *(i1*)(intptr_t)v5262;
	i4 v5264 = v5263;
	i8 v5265 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5265)(v5264);

	i8 v5266 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v5266)();

c02_037a:;

c02_0376:;

	i8 v5267 = (i8)(intptr_t)(f368_TestRule);
	i1 v5268;

	((void(*)(i1* /* result */))(intptr_t)v5267)(&v5268);
	i1 v5269 = (i1)+0;
	if (v5268==v5269) goto c02_0398; else goto c02_0397;

c02_0397:;

	goto c02_0375;

c02_0398:;

c02_0394:;

	i8 v5270 = (i8)(intptr_t)(ws+3832);
	i8 v5271 = *(i8*)(intptr_t)v5270;
	i8 v5272 = v5271+(+4);
	i1 v5273 = *(i1*)(intptr_t)v5272;
	i8 v5274 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v5274 = v5273;

c02_039b:;

	i8 v5275 = (i8)(intptr_t)(ws+3896);
	i1 v5276 = *(i1*)(intptr_t)v5275;
	i1 v5277 = (i1)+0;
	if (v5276==v5277) goto c02_039e; else goto c02_039d;

c02_039d:;

	i8 v5278 = (i8)(intptr_t)(ws+3896);
	i1 v5279 = *(i1*)(intptr_t)v5278;
	i1 v5280 = v5279&(+1);
	i1 v5281 = (i1)+0;
	if (v5280==v5281) goto c02_03a3; else goto c02_03a2;

c02_03a2:;

	i8 v5282 = (i8)(intptr_t)(ws+3880);
	i8 v5283 = *(i8*)(intptr_t)v5282;
	i8 v5284 = v5283+(+1);
	i8 v5285 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v5285 = v5284;

c02_03a3:;

c02_039f:;

	i8 v5286 = (i8)(intptr_t)(ws+3896);
	i1 v5287 = *(i1*)(intptr_t)v5286;
	i1 v5288 = (i1)+1;
	i1 v5289 = ((i1)v5287)>>v5288;
	i8 v5290 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v5290 = v5289;

	goto c02_039b;

c02_039e:;

	i8 v5291 = (i8)(intptr_t)(ws+3832);
	i8 v5292 = *(i8*)(intptr_t)v5291;
	i8 v5293 = v5292+(+6);
	i1 v5294 = *(i1*)(intptr_t)v5293;
	i8 v5295 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v5295 = v5294;

c02_03a6:;

	i8 v5296 = (i8)(intptr_t)(ws+3896);
	i1 v5297 = *(i1*)(intptr_t)v5296;
	i1 v5298 = (i1)+0;
	if (v5297==v5298) goto c02_03a9; else goto c02_03a8;

c02_03a8:;

	i8 v5299 = (i8)(intptr_t)(ws+3896);
	i1 v5300 = *(i1*)(intptr_t)v5299;
	i1 v5301 = v5300&(+1);
	i1 v5302 = (i1)+0;
	if (v5301==v5302) goto c02_03ae; else goto c02_03ad;

c02_03ad:;

	i8 v5303 = (i8)(intptr_t)(ws+3888);
	i8 v5304 = *(i8*)(intptr_t)v5303;
	i8 v5305 = v5304+(+1);
	i8 v5306 = (i8)(intptr_t)(ws+3888);
	*(i8*)(intptr_t)v5306 = v5305;

c02_03ae:;

c02_03aa:;

	i8 v5307 = (i8)(intptr_t)(ws+3896);
	i1 v5308 = *(i1*)(intptr_t)v5307;
	i1 v5309 = (i1)+1;
	i1 v5310 = ((i1)v5308)>>v5309;
	i8 v5311 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v5311 = v5310;

	goto c02_03a6;

c02_03a9:;

	goto c02_0374;

c02_0375:;

	i8 v5312 = (i8)(intptr_t)(ws+3824);
	i1 v5313 = *(i1*)(intptr_t)v5312;
	i8 v5314 = (i8)(intptr_t)(ws+3808);
	i8 v5315 = *(i8*)(intptr_t)v5314;
	i8 v5316 = v5315+(+70);
	*(i1*)(intptr_t)v5316 = v5313;

	i8 v5317 = (i8)(intptr_t)(ws+3832);
	i8 v5318 = *(i8*)(intptr_t)v5317;
	i8 v5319 = v5318+(+2);
	i1 v5320 = *(i1*)(intptr_t)v5319;
	i8 v5321 = (i8)(intptr_t)(ws+3808);
	i8 v5322 = *(i8*)(intptr_t)v5321;
	i8 v5323 = v5322+(+48);
	*(i1*)(intptr_t)v5323 = v5320;

	i8 v5324 = (i8)(intptr_t)(ws+3832);
	i8 v5325 = *(i8*)(intptr_t)v5324;
	i8 v5326 = v5325+(+3);
	i1 v5327 = *(i1*)(intptr_t)v5326;
	i8 v5328 = (i8)(intptr_t)(ws+3808);
	i8 v5329 = *(i8*)(intptr_t)v5328;
	i8 v5330 = v5329+(+51);
	*(i1*)(intptr_t)v5330 = v5327;


	i8 v5411 = (i8)(intptr_t)(f370_CopyChildNodes);

	((void(*)(void))(intptr_t)v5411)();

endsub:;
}
	void f366_InstructionMatcher(void);
	void f358_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f361_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f359_CalculateBlockedRegisters(i1* /* blocked */, i8 /* last */, i8 /* insn */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f143_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f360_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f144_FindCompatibleRegisters(i1* /* compatible */, i1 /* inreg */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f143_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f143_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f360_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f362_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f143_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f360_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f143_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f361_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f364_PrintNodes(i8 /* rootnode */);
const i1 c02_s01e8[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01e9[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01ea[] = { 0x6e,0x6f,0x64,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01eb[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01ec[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01ed[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01ee[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01ef[] = { 0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
	void f61_StartError(void);
const i1 c02_s01f0[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f62_EndError(void);

// deadlock workspace at ws+3864 length ws+8
void f372_deadlock(i8 p5773 /* s */) {
	*(i8*)(intptr_t)(ws+3864) = p5773; /*s */

	i8 v5774 = (i8)(intptr_t)(ws+3768);
	i8 v5775 = *(i8*)(intptr_t)v5774;
	i8 v5776 = (i8)(intptr_t)(f364_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v5776)(v5775);

	i8 v5777 = (i8)(intptr_t)c02_s01e8;
	i8 v5778 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5778)(v5777);

	i8 v5779 = (i8)(intptr_t)(ws+3808);
	i8 v5780 = *(i8*)(intptr_t)v5779;
	i8 v5781 = v5780+(+16);
	i8 v5782 = *(i8*)(intptr_t)v5781;
	i4 v5783 = v5782;
	i8 v5784 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5784)(v5783);

	i8 v5785 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5785)();

	i8 v5786 = (i8)(intptr_t)c02_s01e9;
	i8 v5787 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5787)(v5786);

	i8 v5788 = (i8)(intptr_t)(ws+3848);
	i8 v5789 = *(i8*)(intptr_t)v5788;
	i8 v5790 = v5789+(+16);
	i8 v5791 = *(i8*)(intptr_t)v5790;
	i4 v5792 = v5791;
	i8 v5793 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5793)(v5792);

	i8 v5794 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5794)();

	i8 v5795 = (i8)(intptr_t)c02_s01ea;
	i8 v5796 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5796)(v5795);

	i8 v5797 = (i8)(intptr_t)(ws+3816);
	i8 v5798 = *(i8*)(intptr_t)v5797;
	i4 v5799 = v5798;
	i8 v5800 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5800)(v5799);

	i8 v5801 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5801)();

	i8 v5802 = (i8)(intptr_t)c02_s01eb;
	i8 v5803 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5803)(v5802);

	i8 v5804 = (i8)(intptr_t)(ws+3808);
	i8 v5805 = *(i8*)(intptr_t)v5804;
	i8 v5806 = v5805+(+48);
	i1 v5807 = *(i1*)(intptr_t)v5806;
	i4 v5808 = v5807;
	i8 v5809 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5809)(v5808);

	i8 v5810 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5810)();

	i8 v5811 = (i8)(intptr_t)c02_s01ec;
	i8 v5812 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5812)(v5811);

	i8 v5813 = (i8)(intptr_t)(ws+3808);
	i8 v5814 = *(i8*)(intptr_t)v5813;
	i8 v5815 = v5814+(+51);
	i1 v5816 = *(i1*)(intptr_t)v5815;
	i4 v5817 = v5816;
	i8 v5818 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5818)(v5817);

	i8 v5819 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5819)();

	i8 v5820 = (i8)(intptr_t)c02_s01ed;
	i8 v5821 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5821)(v5820);

	i8 v5822 = (i8)(intptr_t)(ws+3816);
	i8 v5823 = *(i8*)(intptr_t)v5822;
	i8 v5824 = v5823+(+56);
	i1 v5825 = *(i1*)(intptr_t)v5824;
	i4 v5826 = v5825;
	i8 v5827 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5827)(v5826);

	i8 v5828 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5828)();

	i8 v5829 = (i8)(intptr_t)c02_s01ee;
	i8 v5830 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5830)(v5829);

	i8 v5831 = (i8)(intptr_t)(ws+3848);
	i8 v5832 = *(i8*)(intptr_t)v5831;
	i8 v5833 = v5832+(+50);
	i1 v5834 = *(i1*)(intptr_t)v5833;
	i4 v5835 = v5834;
	i8 v5836 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5836)(v5835);

	i8 v5837 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5837)();

	i8 v5838 = (i8)(intptr_t)c02_s01ef;
	i8 v5839 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5839)(v5838);

	i8 v5840 = (i8)(intptr_t)(ws+3858);
	i1 v5841 = *(i1*)(intptr_t)v5840;
	i4 v5842 = v5841;
	i8 v5843 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5843)(v5842);

	i8 v5844 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5844)();

	i8 v5845 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v5845)();

	i8 v5846 = (i8)(intptr_t)c02_s01f0;
	i8 v5847 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5847)(v5846);

	i8 v5848 = (i8)(intptr_t)(ws+3864);
	i8 v5849 = *(i8*)(intptr_t)v5848;
	i8 v5850 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5850)(v5849);

	i8 v5851 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v5851)();

endsub:;
}
const i1 c02_s01f1[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0 };
	void f372_deadlock(i8 /* s */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f143_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f361_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
const i1 c02_s01f2[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0 };
	void f372_deadlock(i8 /* s */);
	void f145_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f143_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f362_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);

// AllocateRegister workspace at ws+3840 length ws+20
void f371_AllocateRegister(void) {

	i8 v5418 = (i8)(intptr_t)(ws+3808);
	i8 v5419 = *(i8*)(intptr_t)v5418;
	i8 v5420 = v5419+(+48);
	i1 v5421 = *(i1*)(intptr_t)v5420;
	i8 v5422 = (i8)(intptr_t)(f358_IsStackedRegister);
	i1 v5423;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v5422)(&v5423, v5421);
	i1 v5424 = (i1)+0;
	if (v5423==v5424) goto c02_03c8; else goto c02_03c7;

c02_03c7:;

	i8 v5425 = (i8)(intptr_t)(ws+3816);
	i8 v5426 = *(i8*)(intptr_t)v5425;
	i8 v5427 = v5426+(+56);
	i1 v5428 = *(i1*)(intptr_t)v5427;
	i8 v5429 = (i8)(intptr_t)(ws+3808);
	i8 v5430 = *(i8*)(intptr_t)v5429;
	i8 v5431 = v5430+(+48);
	i1 v5432 = *(i1*)(intptr_t)v5431;
	i1 v5433 = v5428&v5432;
	i8 v5434 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5434 = v5433;

	i8 v5435 = (i8)(intptr_t)(ws+3840);
	i1 v5436 = *(i1*)(intptr_t)v5435;
	i1 v5437 = (i1)+0;
	if (v5436==v5437) goto c02_03cd; else goto c02_03cc;

c02_03cc:;

	i8 v5438 = (i8)(intptr_t)(ws+3840);
	i1 v5439 = *(i1*)(intptr_t)v5438;
	i8 v5440 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5441;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5440)(&v5441, v5439);
	i8 v5442 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5442 = v5441;

	i8 v5443 = (i8)(intptr_t)(ws+3840);
	i1 v5444 = *(i1*)(intptr_t)v5443;
	i8 v5445 = (i8)(intptr_t)(ws+3816);
	i8 v5446 = *(i8*)(intptr_t)v5445;
	i8 v5447 = v5446+(+57);
	*(i1*)(intptr_t)v5447 = v5444;

	i8 v5448 = (i8)(intptr_t)(ws+3840);
	i1 v5449 = *(i1*)(intptr_t)v5448;
	i8 v5450 = (i8)(intptr_t)(ws+3808);
	i8 v5451 = *(i8*)(intptr_t)v5450;
	i8 v5452 = v5451+(+49);
	*(i1*)(intptr_t)v5452 = v5449;

	goto c02_03c9;

c02_03cd:;

	i8 v5453 = (i8)(intptr_t)(ws+3808);
	i8 v5454 = *(i8*)(intptr_t)v5453;
	i8 v5455 = v5454+(+48);
	i1 v5456 = *(i1*)(intptr_t)v5455;
	i8 v5457 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5458;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5457)(&v5458, v5456);
	i8 v5459 = (i8)(intptr_t)(ws+3808);
	i8 v5460 = *(i8*)(intptr_t)v5459;
	i8 v5461 = v5460+(+49);
	*(i1*)(intptr_t)v5461 = v5458;

	i8 v5462 = (i8)(intptr_t)(ws+3816);
	i8 v5463 = *(i8*)(intptr_t)v5462;
	i8 v5464 = v5463+(+56);
	i1 v5465 = *(i1*)(intptr_t)v5464;
	i8 v5466 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5467;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5466)(&v5467, v5465);
	i8 v5468 = (i8)(intptr_t)(ws+3816);
	i8 v5469 = *(i8*)(intptr_t)v5468;
	i8 v5470 = v5469+(+57);
	*(i1*)(intptr_t)v5470 = v5467;

	i8 v5471 = (i8)(intptr_t)(ws+3808);
	i8 v5472 = *(i8*)(intptr_t)v5471;
	i8 v5473 = (i8)(intptr_t)(ws+3808);
	i8 v5474 = *(i8*)(intptr_t)v5473;
	i8 v5475 = v5474+(+49);
	i1 v5476 = *(i1*)(intptr_t)v5475;
	i8 v5477 = (i8)(intptr_t)(ws+3816);
	i8 v5478 = *(i8*)(intptr_t)v5477;
	i8 v5479 = v5478+(+57);
	i1 v5480 = *(i1*)(intptr_t)v5479;
	i8 v5481 = (i8)(intptr_t)(f361_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5481)(v5480, v5476, v5472);

c02_03c9:;

	goto c02_03c4;

c02_03c8:;

	i8 v5482 = (i8)(intptr_t)(ws+3816);
	i8 v5483 = *(i8*)(intptr_t)v5482;
	i8 v5484 = v5483+(+48);
	i8 v5485 = *(i8*)(intptr_t)v5484;
	i8 v5486 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v5486 = v5485;

	i8 v5487 = (i8)(intptr_t)(ws+3848);
	i8 v5488 = *(i8*)(intptr_t)v5487;
	i8 v5489 = (i8)(intptr_t)(ws+3808);
	i8 v5490 = *(i8*)(intptr_t)v5489;
	i8 v5491 = (i8)(intptr_t)(f359_CalculateBlockedRegisters);
	i1 v5492;

	((void(*)(i1* /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v5491)(&v5492, v5490, v5488);
	i8 v5493 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v5493 = v5492;

	i8 v5494 = (i8)(intptr_t)(ws+3816);
	i8 v5495 = *(i8*)(intptr_t)v5494;
	i8 v5496 = v5495+(+56);
	i1 v5497 = *(i1*)(intptr_t)v5496;
	i8 v5498 = (i8)(intptr_t)(ws+3808);
	i8 v5499 = *(i8*)(intptr_t)v5498;
	i8 v5500 = v5499+(+48);
	i1 v5501 = *(i1*)(intptr_t)v5500;
	i1 v5502 = v5497&v5501;
	i8 v5503 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5503 = v5502;

	i8 v5504 = (i8)(intptr_t)(ws+3840);
	i1 v5505 = *(i1*)(intptr_t)v5504;
	i8 v5506 = (i8)(intptr_t)(ws+3856);
	i1 v5507 = *(i1*)(intptr_t)v5506;
	i8 v5508 = (i8)(intptr_t)(ws+3808);
	i8 v5509 = *(i8*)(intptr_t)v5508;
	i8 v5510 = v5509+(+51);
	i1 v5511 = *(i1*)(intptr_t)v5510;
	i1 v5512 = v5507|v5511;
	i8 v5513 = (i8)(intptr_t)(ws+3848);
	i8 v5514 = *(i8*)(intptr_t)v5513;
	i8 v5515 = v5514+(+50);
	i1 v5516 = *(i1*)(intptr_t)v5515;
	i1 v5517 = v5512|v5516;
	i1 v5518 = ~v5517;
	i1 v5519 = v5505&v5518;
	i8 v5520 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v5520 = v5519;

	i8 v5521 = (i8)(intptr_t)(ws+3857);
	i1 v5522 = *(i1*)(intptr_t)v5521;
	i1 v5523 = (i1)+0;
	if (v5522==v5523) goto c02_03d2; else goto c02_03d1;

c02_03d1:;

	i8 v5524 = (i8)(intptr_t)(ws+3857);
	i1 v5525 = *(i1*)(intptr_t)v5524;
	i8 v5526 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5527;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5526)(&v5527, v5525);
	i8 v5528 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5528 = v5527;

	i8 v5529 = (i8)(intptr_t)(ws+3840);
	i1 v5530 = *(i1*)(intptr_t)v5529;
	i8 v5531 = (i8)(intptr_t)(ws+3816);
	i8 v5532 = *(i8*)(intptr_t)v5531;
	i8 v5533 = v5532+(+57);
	*(i1*)(intptr_t)v5533 = v5530;

	i8 v5534 = (i8)(intptr_t)(ws+3840);
	i1 v5535 = *(i1*)(intptr_t)v5534;
	i8 v5536 = (i8)(intptr_t)(ws+3808);
	i8 v5537 = *(i8*)(intptr_t)v5536;
	i8 v5538 = v5537+(+49);
	*(i1*)(intptr_t)v5538 = v5535;

	i8 v5539 = (i8)(intptr_t)(ws+3840);
	i1 v5540 = *(i1*)(intptr_t)v5539;
	i8 v5541 = (i8)(intptr_t)(f143_FindConflictingRegisters);
	i1 v5542;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5541)(&v5542, v5540);
	i8 v5543 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v5543 = v5542;

	i8 v5544 = (i8)(intptr_t)(ws+3848);
	i8 v5545 = *(i8*)(intptr_t)v5544;
	i8 v5546 = v5545+(+50);
	i1 v5547 = *(i1*)(intptr_t)v5546;
	i8 v5548 = (i8)(intptr_t)(ws+3856);
	i1 v5549 = *(i1*)(intptr_t)v5548;
	i1 v5550 = v5547|v5549;
	i8 v5551 = (i8)(intptr_t)(ws+3848);
	i8 v5552 = *(i8*)(intptr_t)v5551;
	i8 v5553 = v5552+(+50);
	*(i1*)(intptr_t)v5553 = v5550;

	i8 v5554 = (i8)(intptr_t)(ws+3848);
	i8 v5555 = *(i8*)(intptr_t)v5554;
	i8 v5556 = (i8)(intptr_t)(ws+3808);
	i8 v5557 = *(i8*)(intptr_t)v5556;
	i8 v5558 = (i8)(intptr_t)(ws+3856);
	i1 v5559 = *(i1*)(intptr_t)v5558;
	i8 v5560 = (i8)(intptr_t)(f360_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v5560)(v5559, v5557, v5555);

	i8 v5561 = (i8)(intptr_t)(ws+3808);
	i8 v5562 = *(i8*)(intptr_t)v5561;
	i8 v5563 = v5562+(+51);
	i1 v5564 = *(i1*)(intptr_t)v5563;
	i8 v5565 = (i8)(intptr_t)(ws+3856);
	i1 v5566 = *(i1*)(intptr_t)v5565;
	i1 v5567 = v5564|v5566;
	i8 v5568 = (i8)(intptr_t)(ws+3808);
	i8 v5569 = *(i8*)(intptr_t)v5568;
	i8 v5570 = v5569+(+51);
	*(i1*)(intptr_t)v5570 = v5567;

	goto c02_03ce;

c02_03d2:;

	i8 v5571 = (i8)(intptr_t)(ws+3816);
	i8 v5572 = *(i8*)(intptr_t)v5571;
	i8 v5573 = v5572+(+56);
	i1 v5574 = *(i1*)(intptr_t)v5573;
	i1 v5575 = v5574&(-1);
	i8 v5576 = (i8)(intptr_t)(f144_FindCompatibleRegisters);
	i1 v5577;

	((void(*)(i1* /* compatible */, i1 /* inreg */))(intptr_t)v5576)(&v5577, v5575);
	i8 v5578 = (i8)(intptr_t)(ws+3858);
	*(i1*)(intptr_t)v5578 = v5577;

	i8 v5579 = (i8)(intptr_t)(ws+3808);
	i8 v5580 = *(i8*)(intptr_t)v5579;
	i8 v5581 = v5580+(+48);
	i1 v5582 = *(i1*)(intptr_t)v5581;
	i8 v5583 = (i8)(intptr_t)(ws+3858);
	i1 v5584 = *(i1*)(intptr_t)v5583;
	i1 v5585 = v5582&v5584;
	i8 v5586 = (i8)(intptr_t)(ws+3856);
	i1 v5587 = *(i1*)(intptr_t)v5586;
	i8 v5588 = (i8)(intptr_t)(ws+3808);
	i8 v5589 = *(i8*)(intptr_t)v5588;
	i8 v5590 = v5589+(+51);
	i1 v5591 = *(i1*)(intptr_t)v5590;
	i1 v5592 = v5587|v5591;
	i1 v5593 = ~v5592;
	i1 v5594 = v5585&v5593;
	i8 v5595 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v5595 = v5594;

	i8 v5596 = (i8)(intptr_t)(ws+3816);
	i8 v5597 = *(i8*)(intptr_t)v5596;
	i8 v5598 = v5597+(+56);
	i1 v5599 = *(i1*)(intptr_t)v5598;
	i8 v5600 = (i8)(intptr_t)(ws+3848);
	i8 v5601 = *(i8*)(intptr_t)v5600;
	i8 v5602 = v5601+(+50);
	i1 v5603 = *(i1*)(intptr_t)v5602;
	i1 v5604 = ~v5603;
	i1 v5605 = v5599&v5604;
	i8 v5606 = (i8)(intptr_t)(ws+3859);
	*(i1*)(intptr_t)v5606 = v5605;

	i8 v5607 = (i8)(intptr_t)(ws+3857);
	i1 v5608 = *(i1*)(intptr_t)v5607;
	i1 v5609 = (i1)+0;
	if (v5608==v5609) goto c02_03d9; else goto c02_03da;

c02_03da:;

	i8 v5610 = (i8)(intptr_t)(ws+3859);
	i1 v5611 = *(i1*)(intptr_t)v5610;
	i1 v5612 = (i1)+0;
	if (v5611==v5612) goto c02_03d9; else goto c02_03d8;

c02_03d8:;

	i8 v5613 = (i8)(intptr_t)(ws+3857);
	i1 v5614 = *(i1*)(intptr_t)v5613;
	i8 v5615 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5616;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5615)(&v5616, v5614);
	i8 v5617 = (i8)(intptr_t)(ws+3808);
	i8 v5618 = *(i8*)(intptr_t)v5617;
	i8 v5619 = v5618+(+49);
	*(i1*)(intptr_t)v5619 = v5616;

	i8 v5620 = (i8)(intptr_t)(ws+3859);
	i1 v5621 = *(i1*)(intptr_t)v5620;
	i8 v5622 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5623;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5622)(&v5623, v5621);
	i8 v5624 = (i8)(intptr_t)(ws+3816);
	i8 v5625 = *(i8*)(intptr_t)v5624;
	i8 v5626 = v5625+(+57);
	*(i1*)(intptr_t)v5626 = v5623;

	i8 v5627 = (i8)(intptr_t)(ws+3848);
	i8 v5628 = *(i8*)(intptr_t)v5627;
	i8 v5629 = v5628+(+50);
	i1 v5630 = *(i1*)(intptr_t)v5629;
	i8 v5631 = (i8)(intptr_t)(ws+3816);
	i8 v5632 = *(i8*)(intptr_t)v5631;
	i8 v5633 = v5632+(+57);
	i1 v5634 = *(i1*)(intptr_t)v5633;
	i8 v5635 = (i8)(intptr_t)(f143_FindConflictingRegisters);
	i1 v5636;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5635)(&v5636, v5634);
	i1 v5637 = v5630|v5636;
	i8 v5638 = (i8)(intptr_t)(ws+3848);
	i8 v5639 = *(i8*)(intptr_t)v5638;
	i8 v5640 = v5639+(+50);
	*(i1*)(intptr_t)v5640 = v5637;

	i8 v5641 = (i8)(intptr_t)(ws+3808);
	i8 v5642 = *(i8*)(intptr_t)v5641;
	i8 v5643 = v5642+(+49);
	i1 v5644 = *(i1*)(intptr_t)v5643;
	i8 v5645 = (i8)(intptr_t)(f143_FindConflictingRegisters);
	i1 v5646;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5645)(&v5646, v5644);
	i8 v5647 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v5647 = v5646;

	i8 v5648 = (i8)(intptr_t)(ws+3848);
	i8 v5649 = *(i8*)(intptr_t)v5648;
	i8 v5650 = (i8)(intptr_t)(ws+3808);
	i8 v5651 = *(i8*)(intptr_t)v5650;
	i8 v5652 = (i8)(intptr_t)(ws+3856);
	i1 v5653 = *(i1*)(intptr_t)v5652;
	i8 v5654 = (i8)(intptr_t)(f360_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v5654)(v5653, v5651, v5649);

	i8 v5655 = (i8)(intptr_t)(ws+3808);
	i8 v5656 = *(i8*)(intptr_t)v5655;
	i8 v5657 = v5656+(+51);
	i1 v5658 = *(i1*)(intptr_t)v5657;
	i8 v5659 = (i8)(intptr_t)(ws+3856);
	i1 v5660 = *(i1*)(intptr_t)v5659;
	i1 v5661 = v5658|v5660;
	i8 v5662 = (i8)(intptr_t)(ws+3808);
	i8 v5663 = *(i8*)(intptr_t)v5662;
	i8 v5664 = v5663+(+51);
	*(i1*)(intptr_t)v5664 = v5661;

	i8 v5665 = (i8)(intptr_t)(ws+3848);
	i8 v5666 = *(i8*)(intptr_t)v5665;
	i8 v5667 = (i8)(intptr_t)(ws+3808);
	i8 v5668 = *(i8*)(intptr_t)v5667;
	i8 v5669 = v5668+(+49);
	i1 v5670 = *(i1*)(intptr_t)v5669;
	i8 v5671 = (i8)(intptr_t)(ws+3816);
	i8 v5672 = *(i8*)(intptr_t)v5671;
	i8 v5673 = v5672+(+57);
	i1 v5674 = *(i1*)(intptr_t)v5673;
	i8 v5675 = (i8)(intptr_t)(f362_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5675)(v5674, v5670, v5666);

	goto c02_03d3;

c02_03d9:;

	i8 v5676 = (i8)(intptr_t)(ws+3816);
	i8 v5677 = *(i8*)(intptr_t)v5676;
	i8 v5678 = v5677+(+56);
	i1 v5679 = *(i1*)(intptr_t)v5678;
	i8 v5680 = (i8)(intptr_t)(ws+3856);
	i1 v5681 = *(i1*)(intptr_t)v5680;
	i8 v5682 = (i8)(intptr_t)(ws+3848);
	i8 v5683 = *(i8*)(intptr_t)v5682;
	i8 v5684 = v5683+(+50);
	i1 v5685 = *(i1*)(intptr_t)v5684;
	i1 v5686 = v5681|v5685;
	i1 v5687 = ~v5686;
	i1 v5688 = v5679&v5687;
	i8 v5689 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v5689 = v5688;

	i8 v5690 = (i8)(intptr_t)(ws+3808);
	i8 v5691 = *(i8*)(intptr_t)v5690;
	i8 v5692 = v5691+(+48);
	i1 v5693 = *(i1*)(intptr_t)v5692;
	i8 v5694 = (i8)(intptr_t)(ws+3858);
	i1 v5695 = *(i1*)(intptr_t)v5694;
	i1 v5696 = v5693&v5695;
	i8 v5697 = (i8)(intptr_t)(ws+3808);
	i8 v5698 = *(i8*)(intptr_t)v5697;
	i8 v5699 = v5698+(+51);
	i1 v5700 = *(i1*)(intptr_t)v5699;
	i1 v5701 = ~v5700;
	i1 v5702 = v5696&v5701;
	i8 v5703 = (i8)(intptr_t)(ws+3859);
	*(i1*)(intptr_t)v5703 = v5702;

	i8 v5704 = (i8)(intptr_t)(ws+3857);
	i1 v5705 = *(i1*)(intptr_t)v5704;
	i1 v5706 = (i1)+0;
	if (v5705==v5706) goto c02_03e1; else goto c02_03e2;

c02_03e2:;

	i8 v5707 = (i8)(intptr_t)(ws+3859);
	i1 v5708 = *(i1*)(intptr_t)v5707;
	i1 v5709 = (i1)+0;
	if (v5708==v5709) goto c02_03e1; else goto c02_03e0;

c02_03e0:;

	i8 v5710 = (i8)(intptr_t)(ws+3859);
	i1 v5711 = *(i1*)(intptr_t)v5710;
	i8 v5712 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5713;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5712)(&v5713, v5711);
	i8 v5714 = (i8)(intptr_t)(ws+3808);
	i8 v5715 = *(i8*)(intptr_t)v5714;
	i8 v5716 = v5715+(+49);
	*(i1*)(intptr_t)v5716 = v5713;

	i8 v5717 = (i8)(intptr_t)(ws+3857);
	i1 v5718 = *(i1*)(intptr_t)v5717;
	i8 v5719 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5720;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5719)(&v5720, v5718);
	i8 v5721 = (i8)(intptr_t)(ws+3816);
	i8 v5722 = *(i8*)(intptr_t)v5721;
	i8 v5723 = v5722+(+57);
	*(i1*)(intptr_t)v5723 = v5720;

	i8 v5724 = (i8)(intptr_t)(ws+3816);
	i8 v5725 = *(i8*)(intptr_t)v5724;
	i8 v5726 = v5725+(+57);
	i1 v5727 = *(i1*)(intptr_t)v5726;
	i8 v5728 = (i8)(intptr_t)(f143_FindConflictingRegisters);
	i1 v5729;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5728)(&v5729, v5727);
	i8 v5730 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v5730 = v5729;

	i8 v5731 = (i8)(intptr_t)(ws+3848);
	i8 v5732 = *(i8*)(intptr_t)v5731;
	i8 v5733 = v5732+(+50);
	i1 v5734 = *(i1*)(intptr_t)v5733;
	i8 v5735 = (i8)(intptr_t)(ws+3856);
	i1 v5736 = *(i1*)(intptr_t)v5735;
	i1 v5737 = v5734|v5736;
	i8 v5738 = (i8)(intptr_t)(ws+3848);
	i8 v5739 = *(i8*)(intptr_t)v5738;
	i8 v5740 = v5739+(+50);
	*(i1*)(intptr_t)v5740 = v5737;

	i8 v5741 = (i8)(intptr_t)(ws+3848);
	i8 v5742 = *(i8*)(intptr_t)v5741;
	i8 v5743 = (i8)(intptr_t)(ws+3808);
	i8 v5744 = *(i8*)(intptr_t)v5743;
	i8 v5745 = (i8)(intptr_t)(ws+3856);
	i1 v5746 = *(i1*)(intptr_t)v5745;
	i8 v5747 = (i8)(intptr_t)(f360_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v5747)(v5746, v5744, v5742);

	i8 v5748 = (i8)(intptr_t)(ws+3808);
	i8 v5749 = *(i8*)(intptr_t)v5748;
	i8 v5750 = v5749+(+51);
	i1 v5751 = *(i1*)(intptr_t)v5750;
	i8 v5752 = (i8)(intptr_t)(ws+3808);
	i8 v5753 = *(i8*)(intptr_t)v5752;
	i8 v5754 = v5753+(+49);
	i1 v5755 = *(i1*)(intptr_t)v5754;
	i8 v5756 = (i8)(intptr_t)(f143_FindConflictingRegisters);
	i1 v5757;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5756)(&v5757, v5755);
	i1 v5758 = v5751|v5757;
	i8 v5759 = (i8)(intptr_t)(ws+3808);
	i8 v5760 = *(i8*)(intptr_t)v5759;
	i8 v5761 = v5760+(+51);
	*(i1*)(intptr_t)v5761 = v5758;

	i8 v5762 = (i8)(intptr_t)(ws+3808);
	i8 v5763 = *(i8*)(intptr_t)v5762;
	i8 v5764 = (i8)(intptr_t)(ws+3808);
	i8 v5765 = *(i8*)(intptr_t)v5764;
	i8 v5766 = v5765+(+49);
	i1 v5767 = *(i1*)(intptr_t)v5766;
	i8 v5768 = (i8)(intptr_t)(ws+3816);
	i8 v5769 = *(i8*)(intptr_t)v5768;
	i8 v5770 = v5769+(+57);
	i1 v5771 = *(i1*)(intptr_t)v5770;
	i8 v5772 = (i8)(intptr_t)(f361_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5772)(v5771, v5767, v5763);

	goto c02_03db;

c02_03e1:;


	i8 v5852 = (i8)(intptr_t)(ws+3808);
	i8 v5853 = *(i8*)(intptr_t)v5852;
	i8 v5854 = v5853+(+48);
	i1 v5855 = *(i1*)(intptr_t)v5854;
	i8 v5856 = (i8)(intptr_t)(ws+3858);
	i1 v5857 = *(i1*)(intptr_t)v5856;
	i1 v5858 = v5855&v5857;
	i8 v5859 = (i8)(intptr_t)(ws+3808);
	i8 v5860 = *(i8*)(intptr_t)v5859;
	i8 v5861 = v5860+(+51);
	i1 v5862 = *(i1*)(intptr_t)v5861;
	i1 v5863 = ~v5862;
	i1 v5864 = v5858&v5863;
	i8 v5865 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5865 = v5864;

	i8 v5866 = (i8)(intptr_t)(ws+3840);
	i1 v5867 = *(i1*)(intptr_t)v5866;
	i1 v5868 = (i1)+0;
	if (v5867==v5868) goto c02_03e6; else goto c02_03e7;

c02_03e6:;

	i8 v5869 = (i8)(intptr_t)c02_s01f1;
	i8 v5870 = (i8)(intptr_t)(f372_deadlock);

	((void(*)(i8 /* s */))(intptr_t)v5870)(v5869);

c02_03e7:;

c02_03e3:;

	i8 v5871 = (i8)(intptr_t)(ws+3840);
	i1 v5872 = *(i1*)(intptr_t)v5871;
	i8 v5873 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5874;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5873)(&v5874, v5872);
	i8 v5875 = (i8)(intptr_t)(ws+3808);
	i8 v5876 = *(i8*)(intptr_t)v5875;
	i8 v5877 = v5876+(+49);
	*(i1*)(intptr_t)v5877 = v5874;

	i8 v5878 = (i8)(intptr_t)(ws+3808);
	i8 v5879 = *(i8*)(intptr_t)v5878;
	i8 v5880 = v5879+(+51);
	i1 v5881 = *(i1*)(intptr_t)v5880;
	i8 v5882 = (i8)(intptr_t)(ws+3808);
	i8 v5883 = *(i8*)(intptr_t)v5882;
	i8 v5884 = v5883+(+49);
	i1 v5885 = *(i1*)(intptr_t)v5884;
	i8 v5886 = (i8)(intptr_t)(f143_FindConflictingRegisters);
	i1 v5887;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5886)(&v5887, v5885);
	i1 v5888 = v5881|v5887;
	i8 v5889 = (i8)(intptr_t)(ws+3808);
	i8 v5890 = *(i8*)(intptr_t)v5889;
	i8 v5891 = v5890+(+51);
	*(i1*)(intptr_t)v5891 = v5888;

	i8 v5892 = (i8)(intptr_t)(ws+3808);
	i8 v5893 = *(i8*)(intptr_t)v5892;
	i8 v5894 = (i8)(intptr_t)(ws+3808);
	i8 v5895 = *(i8*)(intptr_t)v5894;
	i8 v5896 = v5895+(+49);
	i1 v5897 = *(i1*)(intptr_t)v5896;
	i1 v5898 = (i1)+0;
	i8 v5899 = (i8)(intptr_t)(f361_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5899)(v5898, v5897, v5893);

	i8 v5900 = (i8)(intptr_t)(ws+3816);
	i8 v5901 = *(i8*)(intptr_t)v5900;
	i8 v5902 = v5901+(+56);
	i1 v5903 = *(i1*)(intptr_t)v5902;
	i8 v5904 = (i8)(intptr_t)(ws+3848);
	i8 v5905 = *(i8*)(intptr_t)v5904;
	i8 v5906 = v5905+(+50);
	i1 v5907 = *(i1*)(intptr_t)v5906;
	i1 v5908 = ~v5907;
	i1 v5909 = v5903&v5908;
	i8 v5910 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5910 = v5909;

	i8 v5911 = (i8)(intptr_t)(ws+3840);
	i1 v5912 = *(i1*)(intptr_t)v5911;
	i1 v5913 = (i1)+0;
	if (v5912==v5913) goto c02_03eb; else goto c02_03ec;

c02_03eb:;

	i8 v5914 = (i8)(intptr_t)c02_s01f2;
	i8 v5915 = (i8)(intptr_t)(f372_deadlock);

	((void(*)(i8 /* s */))(intptr_t)v5915)(v5914);

c02_03ec:;

c02_03e8:;

	i8 v5916 = (i8)(intptr_t)(ws+3840);
	i1 v5917 = *(i1*)(intptr_t)v5916;
	i8 v5918 = (i8)(intptr_t)(f145_FindFirst);
	i1 v5919;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5918)(&v5919, v5917);
	i8 v5920 = (i8)(intptr_t)(ws+3816);
	i8 v5921 = *(i8*)(intptr_t)v5920;
	i8 v5922 = v5921+(+57);
	*(i1*)(intptr_t)v5922 = v5919;

	i8 v5923 = (i8)(intptr_t)(ws+3848);
	i8 v5924 = *(i8*)(intptr_t)v5923;
	i8 v5925 = v5924+(+50);
	i1 v5926 = *(i1*)(intptr_t)v5925;
	i8 v5927 = (i8)(intptr_t)(ws+3816);
	i8 v5928 = *(i8*)(intptr_t)v5927;
	i8 v5929 = v5928+(+57);
	i1 v5930 = *(i1*)(intptr_t)v5929;
	i8 v5931 = (i8)(intptr_t)(f143_FindConflictingRegisters);
	i1 v5932;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5931)(&v5932, v5930);
	i1 v5933 = v5926|v5932;
	i8 v5934 = (i8)(intptr_t)(ws+3848);
	i8 v5935 = *(i8*)(intptr_t)v5934;
	i8 v5936 = v5935+(+50);
	*(i1*)(intptr_t)v5936 = v5933;

	i8 v5937 = (i8)(intptr_t)(ws+3848);
	i8 v5938 = *(i8*)(intptr_t)v5937;
	i1 v5939 = (i1)+0;
	i8 v5940 = (i8)(intptr_t)(ws+3816);
	i8 v5941 = *(i8*)(intptr_t)v5940;
	i8 v5942 = v5941+(+57);
	i1 v5943 = *(i1*)(intptr_t)v5942;
	i8 v5944 = (i8)(intptr_t)(f362_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5944)(v5943, v5939, v5938);

c02_03db:;

c02_03d3:;

c02_03ce:;

c02_03c4:;

endsub:;
}
	void f371_AllocateRegister(void);

// UpdateProducedRegisters workspace at ws+3840 length ws+1
void f373_UpdateProducedRegisters(void) {

	i1 v5946 = (i1)+0;
	i8 v5947 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5947 = v5946;

c02_03ef:;

	i8 v5948 = (i8)(intptr_t)(ws+3776);
	i1 v5949 = *(i1*)(intptr_t)v5948;
	i1 v5950 = (i1)+4;
	if (v5949==v5950) goto c02_03f2; else goto c02_03f1;

c02_03f1:;

	i8 v5951 = (i8)(intptr_t)(ws+3808);
	i8 v5952 = *(i8*)(intptr_t)v5951;
	i8 v5953 = v5952+(+16);
	i8 v5954 = (i8)(intptr_t)(ws+3776);
	i1 v5955 = *(i1*)(intptr_t)v5954;
	i8 v5956 = v5955;
	i1 v5957 = (i1)+3;
	i8 v5958 = ((i8)v5956)<<v5957;
	i8 v5959 = v5953+v5958;
	i8 v5960 = *(i8*)(intptr_t)v5959;
	i8 v5961 = (i8)(intptr_t)(ws+3816);
	*(i8*)(intptr_t)v5961 = v5960;

	i8 v5962 = (i8)(intptr_t)(ws+3816);
	i8 v5963 = *(i8*)(intptr_t)v5962;
	i8 v5964 = (i8)+0;
	if (v5963==v5964) goto c02_03f9; else goto c02_03fa;

c02_03fa:;

	i8 v5965 = (i8)(intptr_t)(ws+3816);
	i8 v5966 = *(i8*)(intptr_t)v5965;
	i8 v5967 = v5966+(+56);
	i1 v5968 = *(i1*)(intptr_t)v5967;
	i1 v5969 = (i1)-1;
	if (v5968==v5969) goto c02_03f8; else goto c02_03f9;

c02_03f8:;

	i8 v5970 = (i8)(intptr_t)(ws+3808);
	i8 v5971 = *(i8*)(intptr_t)v5970;
	i8 v5972 = v5971+(+49);
	i1 v5973 = *(i1*)(intptr_t)v5972;
	i8 v5974 = (i8)(intptr_t)(ws+3816);
	i8 v5975 = *(i8*)(intptr_t)v5974;
	i8 v5976 = v5975+(+56);
	*(i1*)(intptr_t)v5976 = v5973;

	i1 v5977 = (i1)+0;
	i8 v5978 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5978 = v5977;

c02_03fd:;

	i8 v5979 = (i8)(intptr_t)(ws+3840);
	i1 v5980 = *(i1*)(intptr_t)v5979;
	i1 v5981 = (i1)+4;
	if (v5980==v5981) goto c02_0400; else goto c02_03ff;

c02_03ff:;

	i8 v5982 = (i8)(intptr_t)(ws+3776);
	i1 v5983 = *(i1*)(intptr_t)v5982;
	i8 v5984 = (i8)(intptr_t)(ws+3840);
	i1 v5985 = *(i1*)(intptr_t)v5984;
	if (v5983==v5985) goto c02_0405; else goto c02_0404;

c02_0404:;

	i8 v5986 = (i8)(intptr_t)(ws+3808);
	i8 v5987 = *(i8*)(intptr_t)v5986;
	i8 v5988 = v5987+(+16);
	i8 v5989 = (i8)(intptr_t)(ws+3840);
	i1 v5990 = *(i1*)(intptr_t)v5989;
	i8 v5991 = v5990;
	i1 v5992 = (i1)+3;
	i8 v5993 = ((i8)v5991)<<v5992;
	i8 v5994 = v5988+v5993;
	i8 v5995 = *(i8*)(intptr_t)v5994;
	i8 v5996 = (i8)(intptr_t)(ws+3816);
	*(i8*)(intptr_t)v5996 = v5995;

	i8 v5997 = (i8)(intptr_t)(ws+3816);
	i8 v5998 = *(i8*)(intptr_t)v5997;
	i8 v5999 = (i8)+0;
	if (v5998==v5999) goto c02_040a; else goto c02_0409;

c02_0409:;

	i8 v6000 = (i8)(intptr_t)(ws+3816);
	i8 v6001 = *(i8*)(intptr_t)v6000;
	i8 v6002 = v6001+(+56);
	i1 v6003 = *(i1*)(intptr_t)v6002;
	i8 v6004 = (i8)(intptr_t)(ws+3808);
	i8 v6005 = *(i8*)(intptr_t)v6004;
	i8 v6006 = v6005+(+49);
	i1 v6007 = *(i1*)(intptr_t)v6006;
	i1 v6008 = ~v6007;
	i1 v6009 = v6003&v6008;
	i8 v6010 = (i8)(intptr_t)(ws+3816);
	i8 v6011 = *(i8*)(intptr_t)v6010;
	i8 v6012 = v6011+(+56);
	*(i1*)(intptr_t)v6012 = v6009;

c02_040a:;

c02_0406:;

c02_0405:;

c02_0401:;

	i8 v6013 = (i8)(intptr_t)(ws+3840);
	i1 v6014 = *(i1*)(intptr_t)v6013;
	i1 v6015 = v6014+(+1);
	i8 v6016 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v6016 = v6015;

	goto c02_03fd;

c02_0400:;

c02_03f9:;

c02_03f3:;

	i8 v6017 = (i8)(intptr_t)(ws+3776);
	i1 v6018 = *(i1*)(intptr_t)v6017;
	i1 v6019 = v6018+(+1);
	i8 v6020 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v6020 = v6019;

	goto c02_03ef;

c02_03f2:;

endsub:;
}
	void f373_UpdateProducedRegisters(void);
	void f363_ShuffleRegisters(i8 /* moves */);
	void f180_EmitOneInstruction(i8 /* self */, i1 /* ruleid */);
	void f363_ShuffleRegisters(i8 /* moves */);
	void f151_ArchEndInstruction(void);
	void f74_FreeNode(i8 /* node */);
	void f142_FreeInstruction(i8 /* insn */);

// EmitAndFreeInstructions workspace at ws+3840 length ws+8
void f374_EmitAndFreeInstructions(void) {

c02_040b:;

	i8 v6022 = (i8)(intptr_t)(ws+3792);
	i8 v6023 = *(i8*)(intptr_t)v6022;
	i8 v6024 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v6024 = v6023;

	i8 v6025 = (i8)(intptr_t)(ws+3840);
	i8 v6026 = *(i8*)(intptr_t)v6025;
	i8 v6027 = (i8)+0;
	if (v6026==v6027) goto c02_0410; else goto c02_0411;

c02_0410:;

	goto c02_040c;

c02_0411:;

c02_040d:;

	i8 v6028 = (i8)(intptr_t)(ws+3792);
	i8 v6029 = *(i8*)(intptr_t)v6028;
	i8 v6030 = v6029+(+8);
	i8 v6031 = *(i8*)(intptr_t)v6030;
	i8 v6032 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v6032 = v6031;

	i8 v6033 = (i8)(intptr_t)(ws+3840);
	i8 v6034 = *(i8*)(intptr_t)v6033;
	i8 v6035 = v6034+(+60);
	i8 v6036 = (i8)(intptr_t)(f363_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v6036)(v6035);

	i8 v6037 = (i8)(intptr_t)(ws+3840);
	i8 v6038 = *(i8*)(intptr_t)v6037;
	i8 v6039 = v6038+(+70);
	i1 v6040 = *(i1*)(intptr_t)v6039;
	i8 v6041 = (i8)(intptr_t)(ws+3840);
	i8 v6042 = *(i8*)(intptr_t)v6041;
	i8 v6043 = (i8)(intptr_t)(f180_EmitOneInstruction);

	((void(*)(i8 /* self */, i1 /* ruleid */))(intptr_t)v6043)(v6042, v6040);

	i8 v6044 = (i8)(intptr_t)(ws+3840);
	i8 v6045 = *(i8*)(intptr_t)v6044;
	i8 v6046 = v6045+(+52);
	i8 v6047 = (i8)(intptr_t)(f363_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v6047)(v6046);

	i8 v6048 = (i8)(intptr_t)(f151_ArchEndInstruction);

	((void(*)(void))(intptr_t)v6048)();

	i8 v6049 = (i8)(intptr_t)(ws+3840);
	i8 v6050 = *(i8*)(intptr_t)v6049;
	i8 v6051 = v6050+(+16);
	i8 v6052 = *(i8*)(intptr_t)v6051;
	i8 v6053 = v6052+(+256);
	i1 v6054 = *(i1*)(intptr_t)v6053;
	i1 v6055 = (i1)+24;
	if (v6054==v6055) goto c02_0415; else goto c02_0416;

c02_0415:;

	i8 v6056 = (i8)(intptr_t)(ws+3840);
	i8 v6057 = *(i8*)(intptr_t)v6056;
	i8 v6058 = v6057+(+16);
	i8 v6059 = *(i8*)(intptr_t)v6058;
	i8 v6060 = (i8)(intptr_t)(f74_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v6060)(v6059);

c02_0416:;

c02_0412:;

	i8 v6061 = (i8)(intptr_t)(ws+3840);
	i8 v6062 = *(i8*)(intptr_t)v6061;
	i8 v6063 = (i8)(intptr_t)(f142_FreeInstruction);

	((void(*)(i8 /* insn */))(intptr_t)v6063)(v6062);

	goto c02_040b;

c02_040c:;

endsub:;
}
	void f374_EmitAndFreeInstructions(void);
	void f152_ArchEndGroup(void);
	void f59_Discard(i8 /* node */);

// Generate workspace at ws+3768 length ws+72
void f365_Generate(i8 p4998 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3768) = p4998; /*rootnode */

	i8 v4999 = (i8)+0;
	i8 v5000 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v5000 = v4999;

	i8 v5001 = (i8)+0;
	i8 v5002 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v5002 = v5001;

	i8 v5003 = (i8)(intptr_t)(ws+184);
	i8 v5004 = *(i8*)(intptr_t)v5003;
	i8 v5005 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v5005 = v5004;

	i8 v5006 = (i8)(intptr_t)(ws+3768);
	i8 v5007 = *(i8*)(intptr_t)v5006;
	i8 v5008 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5008)(v5007);

c02_0344:;

	i8 v5009 = (i8)(intptr_t)(ws+184);
	i8 v5010 = *(i8*)(intptr_t)v5009;
	i8 v5011 = (i8)(intptr_t)(ws+3800);
	i8 v5012 = *(i8*)(intptr_t)v5011;
	if (v5010==v5012) goto c02_0347; else goto c02_0346;

c02_0346:;

	i8 v5013 = (i8)(intptr_t)(f141_AllocNewInstruction);
	i8 v5014;

	((void(*)(i8* /* insn */))(intptr_t)v5013)(&v5014);
	i8 v5015 = (i8)(intptr_t)(ws+3808);
	*(i8*)(intptr_t)v5015 = v5014;

	i8 v5016 = (i8)(intptr_t)(ws+3784);
	i8 v5017 = *(i8*)(intptr_t)v5016;
	i8 v5018 = (i8)+0;
	if (v5017==v5018) goto c02_034b; else goto c02_034c;

c02_034b:;

	i8 v5019 = (i8)(intptr_t)(ws+3808);
	i8 v5020 = *(i8*)(intptr_t)v5019;
	i8 v5021 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v5021 = v5020;

	i8 v5022 = (i8)(intptr_t)(ws+3808);
	i8 v5023 = *(i8*)(intptr_t)v5022;
	i8 v5024 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v5024 = v5023;

	goto c02_0348;

c02_034c:;

	i8 v5025 = (i8)(intptr_t)(ws+3808);
	i8 v5026 = *(i8*)(intptr_t)v5025;
	i8 v5027 = (i8)(intptr_t)(ws+3792);
	i8 v5028 = *(i8*)(intptr_t)v5027;
	*(i8*)(intptr_t)v5028 = v5026;

	i8 v5029 = (i8)(intptr_t)(ws+3792);
	i8 v5030 = *(i8*)(intptr_t)v5029;
	i8 v5031 = (i8)(intptr_t)(ws+3808);
	i8 v5032 = *(i8*)(intptr_t)v5031;
	i8 v5033 = v5032+(+8);
	*(i8*)(intptr_t)v5033 = v5030;

	i8 v5034 = (i8)(intptr_t)(ws+3808);
	i8 v5035 = *(i8*)(intptr_t)v5034;
	i8 v5036 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v5036 = v5035;

c02_0348:;

	i8 v5037 = (i8)(intptr_t)(f57_PopNode);
	i8 v5038;

	((void(*)(i8* /* node */))(intptr_t)v5037)(&v5038);
	i8 v5039 = (i8)(intptr_t)(ws+3816);
	*(i8*)(intptr_t)v5039 = v5038;


	i8 v5412 = (i8)(intptr_t)(f366_InstructionMatcher);

	((void(*)(void))(intptr_t)v5412)();

	i8 v5413 = (i8)(intptr_t)(ws+3808);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = v5414+(+48);
	i1 v5416 = *(i1*)(intptr_t)v5415;
	i1 v5417 = (i1)+0;
	if (v5416==v5417) goto c02_03c3; else goto c02_03c2;

c02_03c2:;


	i8 v5945 = (i8)(intptr_t)(f371_AllocateRegister);

	((void(*)(void))(intptr_t)v5945)();


	i8 v6021 = (i8)(intptr_t)(f373_UpdateProducedRegisters);

	((void(*)(void))(intptr_t)v6021)();

c02_03c3:;

c02_03bf:;

	goto c02_0344;

c02_0347:;


	i8 v6064 = (i8)(intptr_t)(f374_EmitAndFreeInstructions);

	((void(*)(void))(intptr_t)v6064)();

	i8 v6065 = (i8)(intptr_t)(f152_ArchEndGroup);

	((void(*)(void))(intptr_t)v6065)();

	i8 v6066 = (i8)(intptr_t)(ws+3768);
	i8 v6067 = *(i8*)(intptr_t)v6066;
	i8 v6068 = (i8)(intptr_t)(f59_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6068)(v6067);

endsub:;
}
const i1 c02_s01f3[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f63_SimpleError(i8 /* s */);

// PushNode workspace at ws+3936 length ws+8
void f56_PushNode(i8 p6219 /* node */) {
	*(i8*)(intptr_t)(ws+3936) = p6219; /*node */

	i8 v6220 = (i8)(intptr_t)(ws+3936);
	i8 v6221 = *(i8*)(intptr_t)v6220;
	i8 v6222 = (i8)+0;
	if (v6221==v6222) goto c02_0431; else goto c02_0430;

c02_0430:;

	i8 v6223 = (i8)(intptr_t)(ws+184);
	i8 v6224 = *(i8*)(intptr_t)v6223;
	i8 v6225 = (i8)(intptr_t)(ws+184);
	if (v6224==v6225) goto c02_0435; else goto c02_0436;

c02_0435:;

	i8 v6226 = (i8)(intptr_t)c02_s01f3;
	i8 v6227 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v6227)(v6226);

c02_0436:;

c02_0432:;

	i8 v6228 = (i8)(intptr_t)(ws+3936);
	i8 v6229 = *(i8*)(intptr_t)v6228;
	i8 v6230 = (i8)(intptr_t)(ws+184);
	i8 v6231 = *(i8*)(intptr_t)v6230;
	*(i8*)(intptr_t)v6231 = v6229;

	i8 v6232 = (i8)(intptr_t)(ws+184);
	i8 v6233 = *(i8*)(intptr_t)v6232;
	i8 v6234 = v6233+(+8);
	i8 v6235 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v6235 = v6234;

c02_0431:;

c02_042d:;

endsub:;
}

// PopNode workspace at ws+3936 length ws+8
void f57_PopNode(i8* p6236 /* node */) {

	i8 v6237 = (i8)(intptr_t)(ws+184);
	i8 v6238 = *(i8*)(intptr_t)v6237;
	i8 v6239 = v6238+(-8);
	i8 v6240 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v6240 = v6239;

	i8 v6241 = (i8)(intptr_t)(ws+184);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	i8 v6243 = *(i8*)(intptr_t)v6242;
	i8 v6244 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v6244 = v6243;

endsub:;
	*p6236 = *(i8*)(intptr_t)(ws+3936);
}
	void f57_PopNode(i8* /* node */);
	void f56_PushNode(i8 /* node */);
	void f56_PushNode(i8 /* node */);

// NextNode workspace at ws+3928 length ws+8
void f58_NextNode(i8* p6245 /* node */) {

	i8 v6246 = (i8)(intptr_t)(f57_PopNode);
	i8 v6247;

	((void(*)(i8* /* node */))(intptr_t)v6246)(&v6247);
	i8 v6248 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v6248 = v6247;

	i8 v6249 = (i8)(intptr_t)(ws+3928);
	i8 v6250 = *(i8*)(intptr_t)v6249;
	i8 v6251 = (i8)+0;
	if (v6250==v6251) goto c02_043b; else goto c02_043a;

c02_043a:;

	i8 v6252 = (i8)(intptr_t)(ws+3928);
	i8 v6253 = *(i8*)(intptr_t)v6252;
	i8 v6254 = v6253+(+24);
	i8 v6255 = *(i8*)(intptr_t)v6254;
	i8 v6256 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6256)(v6255);

	i8 v6257 = (i8)(intptr_t)(ws+3928);
	i8 v6258 = *(i8*)(intptr_t)v6257;
	i8 v6259 = v6258+(+32);
	i8 v6260 = *(i8*)(intptr_t)v6259;
	i8 v6261 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6261)(v6260);

c02_043b:;

c02_0437:;

endsub:;
	*p6245 = *(i8*)(intptr_t)(ws+3928);
}
	void f56_PushNode(i8 /* node */);
	void f58_NextNode(i8* /* node */);
	void f33_Free(i8 /* block */);
	void f33_Free(i8 /* block */);
	void f33_Free(i8 /* block */);
	void f74_FreeNode(i8 /* node */);

// Discard workspace at ws+3840 length ws+24
void f59_Discard(i8 p6262 /* node */) {
	*(i8*)(intptr_t)(ws+3840) = p6262; /*node */

	i8 v6263 = (i8)(intptr_t)(ws+184);
	i8 v6264 = *(i8*)(intptr_t)v6263;
	i8 v6265 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v6265 = v6264;

	i8 v6266 = (i8)(intptr_t)(ws+3840);
	i8 v6267 = *(i8*)(intptr_t)v6266;
	i8 v6268 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6268)(v6267);

c02_043e:;

	i8 v6269 = (i8)(intptr_t)(ws+184);
	i8 v6270 = *(i8*)(intptr_t)v6269;
	i8 v6271 = (i8)(intptr_t)(ws+3848);
	i8 v6272 = *(i8*)(intptr_t)v6271;
	if (v6270==v6272) goto c02_0441; else goto c02_0440;

c02_0440:;

	i8 v6273 = (i8)(intptr_t)(f58_NextNode);
	i8 v6274;

	((void(*)(i8* /* node */))(intptr_t)v6273)(&v6274);
	i8 v6275 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v6275 = v6274;

	i8 v6276 = (i8)(intptr_t)(ws+3856);
	i8 v6277 = *(i8*)(intptr_t)v6276;
	i8 v6278 = v6277+(+256);
	i1 v6279 = *(i1*)(intptr_t)v6278;

	if (v6279 != +19) goto c02_0443;

	i8 v6280 = (i8)(intptr_t)(ws+3856);
	i8 v6281 = *(i8*)(intptr_t)v6280;
	i8 v6282 = *(i8*)(intptr_t)v6281;
	i8 v6283 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6283)(v6282);

	goto c02_0442;

c02_0443:;

	if (v6279 != +12) goto c02_0444;

	i8 v6284 = (i8)(intptr_t)(ws+3856);
	i8 v6285 = *(i8*)(intptr_t)v6284;
	i8 v6286 = *(i8*)(intptr_t)v6285;
	i8 v6287 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6287)(v6286);

	goto c02_0442;

c02_0444:;

	if (v6279 != +46) goto c02_0445;

	i8 v6288 = (i8)(intptr_t)(ws+3856);
	i8 v6289 = *(i8*)(intptr_t)v6288;
	i8 v6290 = *(i8*)(intptr_t)v6289;
	i8 v6291 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6291)(v6290);

c02_0445:;

c02_0442:;


	i8 v6292 = (i8)(intptr_t)(ws+3856);
	i8 v6293 = *(i8*)(intptr_t)v6292;
	i8 v6294 = (i8)(intptr_t)(f74_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v6294)(v6293);

	goto c02_043e;

c02_0441:;

endsub:;
}
	void f110_I_b8(i1* /* b */);
	void f72_AllocateNewNode(i8* /* m */, i1 /* code */);

// I_node workspace at ws+3768 length ws+41
void f377_I_node(i8* p6295 /* rootnode */) {

	i1 v6296 = (i1)+1;
	i8 v6297 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v6297 = v6296;

	i8 v6298 = (i8)+0;
	i8 v6299 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6299 = v6298;

c02_0448:;

	i8 v6300 = (i8)(intptr_t)(ws+3776);
	i1 v6301 = *(i1*)(intptr_t)v6300;
	i1 v6302 = (i1)+0;
	if (v6301==v6302) goto c02_044b; else goto c02_044a;

c02_044a:;

	i8 v6303 = (i8)(intptr_t)(f110_I_b8);
	i1 v6304;

	((void(*)(i1* /* b */))(intptr_t)v6303)(&v6304);
	i8 v6305 = (i8)(intptr_t)(ws+3777);
	*(i1*)(intptr_t)v6305 = v6304;

	i8 v6306 = (i8)(intptr_t)(ws+3777);
	i1 v6307 = *(i1*)(intptr_t)v6306;
	i8 v6308 = (i8)(intptr_t)(f72_AllocateNewNode);
	i8 v6309;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v6308)(&v6309, v6307);
	i8 v6310 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v6310 = v6309;

	i8 v6311 = (i8)(intptr_t)(ws+3768);
	i8 v6312 = *(i8*)(intptr_t)v6311;
	i8 v6313 = (i8)(intptr_t)(ws+3784);
	i8 v6314 = *(i8*)(intptr_t)v6313;
	i8 v6315 = v6314+(+64);
	*(i8*)(intptr_t)v6315 = v6312;

	i8 v6316 = (i8)(intptr_t)(ws+3784);
	i8 v6317 = *(i8*)(intptr_t)v6316;
	i8 v6318 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6318 = v6317;

	i8 v6319 = (i8)(intptr_t)((i1*)f3___main_s0130);
	i8 v6320 = (i8)(intptr_t)(ws+3777);
	i1 v6321 = *(i1*)(intptr_t)v6320;
	i1 v6322 = v6321+(-1);
	i8 v6323 = v6322;
	i8 v6324 = v6319+v6323;
	i1 v6325 = *(i1*)(intptr_t)v6324;
	i8 v6326 = (i8)(intptr_t)(ws+3792);
	*(i1*)(intptr_t)v6326 = v6325;

	i8 v6327 = (i8)(intptr_t)(ws+3784);
	i8 v6328 = *(i8*)(intptr_t)v6327;
	i8 v6329 = (i8)(intptr_t)((i1*)f3___main_s012f);
	i8 v6330 = (i8)(intptr_t)(ws+3792);
	i1 v6331 = *(i1*)(intptr_t)v6330;
	i8 v6332 = v6331;
	i1 v6333 = (i1)+3;
	i8 v6334 = ((i8)v6332)<<v6333;
	i8 v6335 = v6329+v6334;
	i8 v6336 = *(i8*)(intptr_t)v6335;

	((void(*)(i8 /* node */))(intptr_t)v6336)(v6328);

	i8 v6337 = (i8)(intptr_t)(ws+3776);
	i1 v6338 = *(i1*)(intptr_t)v6337;
	i8 v6339 = (i8)(intptr_t)((i1*)f3___main_s0131);
	i8 v6340 = (i8)(intptr_t)(ws+3777);
	i1 v6341 = *(i1*)(intptr_t)v6340;
	i1 v6342 = v6341+(-1);
	i8 v6343 = v6342;
	i8 v6344 = v6339+v6343;
	i1 v6345 = *(i1*)(intptr_t)v6344;
	i1 v6346 = v6338+v6345;
	i1 v6347 = v6346+(-1);
	i8 v6348 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v6348 = v6347;

	goto c02_0448;

c02_044b:;

	i8 v6349 = (i8)+0;
	i8 v6350 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v6350 = v6349;

c02_044e:;

	i8 v6351 = (i8)(intptr_t)(ws+3768);
	i8 v6352 = *(i8*)(intptr_t)v6351;
	i8 v6353 = (i8)+0;
	if (v6352==v6353) goto c02_0451; else goto c02_0450;

c02_0450:;

	i8 v6354 = (i8)(intptr_t)(ws+3768);
	i8 v6355 = *(i8*)(intptr_t)v6354;
	i8 v6356 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v6356 = v6355;

	i8 v6357 = (i8)(intptr_t)(ws+3784);
	i8 v6358 = *(i8*)(intptr_t)v6357;
	i8 v6359 = v6358+(+64);
	i8 v6360 = *(i8*)(intptr_t)v6359;
	i8 v6361 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6361 = v6360;

	i8 v6362 = (i8)(intptr_t)((i1*)f3___main_s0131);
	i8 v6363 = (i8)(intptr_t)(ws+3784);
	i8 v6364 = *(i8*)(intptr_t)v6363;
	i8 v6365 = v6364+(+256);
	i1 v6366 = *(i1*)(intptr_t)v6365;
	i1 v6367 = v6366+(-1);
	i8 v6368 = v6367;
	i8 v6369 = v6362+v6368;
	i1 v6370 = *(i1*)(intptr_t)v6369;
	i8 v6371 = (i8)(intptr_t)(ws+3808);
	*(i1*)(intptr_t)v6371 = v6370;

	i8 v6372 = (i8)(intptr_t)(ws+3808);
	i1 v6373 = *(i1*)(intptr_t)v6372;
	i1 v6374 = (i1)+1;
	if (v6373<v6374) goto c02_0456; else goto c02_0455;

c02_0455:;

	i8 v6375 = (i8)(intptr_t)(ws+3800);
	i8 v6376 = *(i8*)(intptr_t)v6375;
	i8 v6377 = (i8)(intptr_t)(ws+3784);
	i8 v6378 = *(i8*)(intptr_t)v6377;
	i8 v6379 = v6378+(+24);
	*(i8*)(intptr_t)v6379 = v6376;

	i8 v6380 = (i8)(intptr_t)(ws+3784);
	i8 v6381 = *(i8*)(intptr_t)v6380;
	i8 v6382 = v6381+(+24);
	i8 v6383 = *(i8*)(intptr_t)v6382;
	i8 v6384 = v6383+(+64);
	i8 v6385 = *(i8*)(intptr_t)v6384;
	i8 v6386 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v6386 = v6385;

c02_0456:;

c02_0452:;

	i8 v6387 = (i8)(intptr_t)(ws+3808);
	i1 v6388 = *(i1*)(intptr_t)v6387;
	i1 v6389 = (i1)+2;
	if (v6388==v6389) goto c02_045a; else goto c02_045b;

c02_045a:;

	i8 v6390 = (i8)(intptr_t)(ws+3784);
	i8 v6391 = *(i8*)(intptr_t)v6390;
	i8 v6392 = v6391+(+24);
	i8 v6393 = *(i8*)(intptr_t)v6392;
	i8 v6394 = (i8)(intptr_t)(ws+3784);
	i8 v6395 = *(i8*)(intptr_t)v6394;
	i8 v6396 = v6395+(+32);
	*(i8*)(intptr_t)v6396 = v6393;

	i8 v6397 = (i8)(intptr_t)(ws+3800);
	i8 v6398 = *(i8*)(intptr_t)v6397;
	i8 v6399 = (i8)(intptr_t)(ws+3784);
	i8 v6400 = *(i8*)(intptr_t)v6399;
	i8 v6401 = v6400+(+24);
	*(i8*)(intptr_t)v6401 = v6398;

	i8 v6402 = (i8)(intptr_t)(ws+3784);
	i8 v6403 = *(i8*)(intptr_t)v6402;
	i8 v6404 = v6403+(+24);
	i8 v6405 = *(i8*)(intptr_t)v6404;
	i8 v6406 = v6405+(+64);
	i8 v6407 = *(i8*)(intptr_t)v6406;
	i8 v6408 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v6408 = v6407;

c02_045b:;

c02_0457:;

	i8 v6409 = (i8)(intptr_t)(ws+3800);
	i8 v6410 = *(i8*)(intptr_t)v6409;
	i8 v6411 = (i8)(intptr_t)(ws+3784);
	i8 v6412 = *(i8*)(intptr_t)v6411;
	i8 v6413 = v6412+(+64);
	*(i8*)(intptr_t)v6413 = v6410;

	i8 v6414 = (i8)(intptr_t)(ws+3784);
	i8 v6415 = *(i8*)(intptr_t)v6414;
	i8 v6416 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v6416 = v6415;

	goto c02_044e;

c02_0451:;

	i8 v6417 = (i8)(intptr_t)(ws+3800);
	i8 v6418 = *(i8*)(intptr_t)v6417;
	i8 v6419 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6419 = v6418;

endsub:;
	*p6295 = *(i8*)(intptr_t)(ws+3768);
}
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f61_StartError(void);
const i1 c02_s01f4[] = { 0x64,0x75,0x70,0x6c,0x69,0x63,0x61,0x74,0x65,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f19_print_hex_i16(i2 /* value */);
const i1 c02_s01f5[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f47_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f20_print_hex_i32(i4 /* value */);
	void f62_EndError(void);
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f140_AllocSubrId(i2* /* id */);

// AddSubr workspace at ws+3760 length ws+40
void f378_AddSubr(i8* p6420 /* subr */, i2 p6421 /* subrid */) {
	*(i2*)(intptr_t)(ws+3760) = p6421; /*subrid */

	i8 v6422 = (i8)(intptr_t)(ws+3760);
	i2 v6423 = *(i2*)(intptr_t)v6422;
	i8 v6424 = (i8)(intptr_t)(ws+3776);
	*(i2*)(intptr_t)v6424 = v6423;

	i8 v6425 = (i8)(intptr_t)(ws+3600);
	i8 v6426 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v6426 = v6425;

c02_045e:;

	i8 v6427 = (i8)(intptr_t)(ws+3776);
	i2 v6428 = *(i2*)(intptr_t)v6427;
	i2 v6429 = (i2)+16;
	if (v6428<v6429) goto c02_0461; else goto c02_0460;

c02_0460:;

	i8 v6430 = (i8)(intptr_t)(ws+3784);
	i8 v6431 = *(i8*)(intptr_t)v6430;
	i8 v6432 = *(i8*)(intptr_t)v6431;
	i8 v6433 = (i8)+0;
	if (v6432==v6433) goto c02_0465; else goto c02_0466;

c02_0465:;

	i8 v6434 = (i8)+136;
	i8 v6435 = (i8)(intptr_t)(f32_Alloc);
	i8 v6436;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6435)(&v6436, v6434);
	i8 v6437 = (i8)(intptr_t)(ws+3784);
	i8 v6438 = *(i8*)(intptr_t)v6437;
	*(i8*)(intptr_t)v6438 = v6436;

c02_0466:;

c02_0462:;

	i8 v6439 = (i8)(intptr_t)(ws+3784);
	i8 v6440 = *(i8*)(intptr_t)v6439;
	i8 v6441 = *(i8*)(intptr_t)v6440;
	i8 v6442 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v6442 = v6441;

	i8 v6443 = (i8)(intptr_t)(ws+3776);
	i2 v6444 = *(i2*)(intptr_t)v6443;
	i2 v6445 = v6444+(-16);
	i8 v6446 = (i8)(intptr_t)(ws+3776);
	*(i2*)(intptr_t)v6446 = v6445;

	goto c02_045e;

c02_0461:;

	i8 v6447 = (i8)(intptr_t)(ws+3784);
	i8 v6448 = *(i8*)(intptr_t)v6447;
	i8 v6449 = v6448+(+8);
	i8 v6450 = (i8)(intptr_t)(ws+3776);
	i2 v6451 = *(i2*)(intptr_t)v6450;
	i1 v6452 = v6451;
	i8 v6453 = v6452;
	i1 v6454 = (i1)+3;
	i8 v6455 = ((i8)v6453)<<v6454;
	i8 v6456 = v6449+v6455;
	i8 v6457 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v6457 = v6456;

	i8 v6458 = (i8)(intptr_t)(ws+3792);
	i8 v6459 = *(i8*)(intptr_t)v6458;
	i8 v6460 = *(i8*)(intptr_t)v6459;
	i8 v6461 = (i8)+0;
	if (v6460==v6461) goto c02_046b; else goto c02_046a;

c02_046a:;

	i8 v6462 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v6462)();

	i8 v6463 = (i8)(intptr_t)c02_s01f4;
	i8 v6464 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6464)(v6463);

	i8 v6465 = (i8)(intptr_t)(ws+3760);
	i2 v6466 = *(i2*)(intptr_t)v6465;
	i8 v6467 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v6467)(v6466);

	i8 v6468 = (i8)(intptr_t)c02_s01f5;
	i8 v6469 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6469)(v6468);

	i8 v6470 = (i8)(intptr_t)(ws+2804);
	i8 v6471 = (i8)(intptr_t)(f47_FCBPos);
	i4 v6472;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v6471)(&v6472, v6470);
	i8 v6473 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6473)(v6472);

	i8 v6474 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v6474)();

c02_046b:;

c02_0467:;

	i8 v6475 = (i8)+51;
	i8 v6476 = (i8)(intptr_t)(f32_Alloc);
	i8 v6477;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6476)(&v6477, v6475);
	i8 v6478 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6478 = v6477;

	i8 v6479 = (i8)(intptr_t)(f140_AllocSubrId);
	i2 v6480;

	((void(*)(i2* /* id */))(intptr_t)v6479)(&v6480);
	i8 v6481 = (i8)(intptr_t)(ws+3768);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = v6482+(+8);
	*(i2*)(intptr_t)v6483 = v6480;

	i8 v6484 = (i8)(intptr_t)(ws+3768);
	i8 v6485 = *(i8*)(intptr_t)v6484;
	i8 v6486 = (i8)(intptr_t)(ws+3792);
	i8 v6487 = *(i8*)(intptr_t)v6486;
	*(i8*)(intptr_t)v6487 = v6485;

endsub:;
	*p6420 = *(i8*)(intptr_t)(ws+3768);
}
	void f61_StartError(void);
const i1 c02_s01f6[] = { 0x75,0x6e,0x6b,0x6e,0x6f,0x77,0x6e,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f19_print_hex_i16(i2 /* value */);
const i1 c02_s01f7[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f47_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f20_print_hex_i32(i4 /* value */);
	void f62_EndError(void);

// FindSubr workspace at ws+3992 length ws+26
void f60_FindSubr(i8* p6488 /* subr */, i2 p6489 /* subrid */) {
	*(i2*)(intptr_t)(ws+3992) = p6489; /*subrid */

	i8 v6490 = (i8)(intptr_t)(ws+3600);
	i8 v6491 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v6491 = v6490;

	i8 v6492 = (i8)(intptr_t)(ws+3992);
	i2 v6493 = *(i2*)(intptr_t)v6492;
	i8 v6494 = (i8)(intptr_t)(ws+4016);
	*(i2*)(intptr_t)v6494 = v6493;

c02_046e:;

	i8 v6495 = (i8)(intptr_t)(ws+4016);
	i2 v6496 = *(i2*)(intptr_t)v6495;
	i2 v6497 = (i2)+16;
	if (v6496<v6497) goto c02_0471; else goto c02_0470;

c02_0470:;

	i8 v6498 = (i8)(intptr_t)(ws+4008);
	i8 v6499 = *(i8*)(intptr_t)v6498;
	i8 v6500 = *(i8*)(intptr_t)v6499;
	i8 v6501 = (i8)+0;
	if (v6500==v6501) goto c02_0475; else goto c02_0476;

c02_0475:;

	i8 v6502 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v6502)();

	i8 v6503 = (i8)(intptr_t)c02_s01f6;
	i8 v6504 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6504)(v6503);

	i8 v6505 = (i8)(intptr_t)(ws+3992);
	i2 v6506 = *(i2*)(intptr_t)v6505;
	i8 v6507 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v6507)(v6506);

	i8 v6508 = (i8)(intptr_t)c02_s01f7;
	i8 v6509 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6509)(v6508);

	i8 v6510 = (i8)(intptr_t)(ws+2804);
	i8 v6511 = (i8)(intptr_t)(f47_FCBPos);
	i4 v6512;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v6511)(&v6512, v6510);
	i8 v6513 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6513)(v6512);

	i8 v6514 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v6514)();

c02_0476:;

c02_0472:;

	i8 v6515 = (i8)(intptr_t)(ws+4008);
	i8 v6516 = *(i8*)(intptr_t)v6515;
	i8 v6517 = *(i8*)(intptr_t)v6516;
	i8 v6518 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v6518 = v6517;

	i8 v6519 = (i8)(intptr_t)(ws+4016);
	i2 v6520 = *(i2*)(intptr_t)v6519;
	i2 v6521 = v6520+(-16);
	i8 v6522 = (i8)(intptr_t)(ws+4016);
	*(i2*)(intptr_t)v6522 = v6521;

	goto c02_046e;

c02_0471:;

	i8 v6523 = (i8)(intptr_t)(ws+4008);
	i8 v6524 = *(i8*)(intptr_t)v6523;
	i8 v6525 = v6524+(+8);
	i8 v6526 = (i8)(intptr_t)(ws+4016);
	i2 v6527 = *(i2*)(intptr_t)v6526;
	i1 v6528 = v6527;
	i8 v6529 = v6528;
	i1 v6530 = (i1)+3;
	i8 v6531 = ((i8)v6529)<<v6530;
	i8 v6532 = v6525+v6531;
	i8 v6533 = *(i8*)(intptr_t)v6532;
	i8 v6534 = (i8)(intptr_t)(ws+4000);
	*(i8*)(intptr_t)v6534 = v6533;

endsub:;
	*p6488 = *(i8*)(intptr_t)(ws+4000);
}
	void f111_I_b16(i2* /* b */);
	void f378_AddSubr(i8* /* subr */, i2 /* subrid */);
	void f114_I_countedstring(i8* /* s */);
	void f105_EmitterDeclareSubroutine(i8 /* subr */);

// ReadN workspace at ws+3744 length ws+16
void f379_ReadN(void) {

	i8 v6535 = (i8)(intptr_t)(f111_I_b16);
	i2 v6536;

	((void(*)(i2* /* b */))(intptr_t)v6535)(&v6536);
	i8 v6537 = (i8)(intptr_t)(ws+3744);
	*(i2*)(intptr_t)v6537 = v6536;

	i8 v6538 = (i8)(intptr_t)(ws+3744);
	i2 v6539 = *(i2*)(intptr_t)v6538;
	i8 v6540 = (i8)(intptr_t)(f378_AddSubr);
	i8 v6541;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6540)(&v6541, v6539);
	i8 v6542 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v6542 = v6541;

	i8 v6543 = (i8)(intptr_t)(f114_I_countedstring);
	i8 v6544;

	((void(*)(i8* /* s */))(intptr_t)v6543)(&v6544);
	i8 v6545 = (i8)(intptr_t)(ws+3752);
	i8 v6546 = *(i8*)(intptr_t)v6545;
	*(i8*)(intptr_t)v6546 = v6544;

	i8 v6547 = (i8)(intptr_t)(ws+3752);
	i8 v6548 = *(i8*)(intptr_t)v6547;
	i8 v6549 = (i8)(intptr_t)(f105_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v6549)(v6548);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f114_I_countedstring(i8* /* s */);
	void f106_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* subrid */);
	void f33_Free(i8 /* block */);

// ReadX workspace at ws+3744 length ws+24
void f380_ReadX(void) {

	i8 v6550 = (i8)(intptr_t)(f111_I_b16);
	i2 v6551;

	((void(*)(i2* /* b */))(intptr_t)v6550)(&v6551);
	i8 v6552 = (i8)(intptr_t)(ws+3744);
	*(i2*)(intptr_t)v6552 = v6551;

	i8 v6553 = (i8)(intptr_t)(ws+3744);
	i2 v6554 = *(i2*)(intptr_t)v6553;
	i8 v6555 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6556;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6555)(&v6556, v6554);
	i8 v6557 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v6557 = v6556;

	i8 v6558 = (i8)(intptr_t)(f114_I_countedstring);
	i8 v6559;

	((void(*)(i8* /* s */))(intptr_t)v6558)(&v6559);
	i8 v6560 = (i8)(intptr_t)(ws+3760);
	*(i8*)(intptr_t)v6560 = v6559;

	i8 v6561 = (i8)(intptr_t)(ws+3752);
	i8 v6562 = *(i8*)(intptr_t)v6561;
	i8 v6563 = v6562+(+8);
	i2 v6564 = *(i2*)(intptr_t)v6563;
	i8 v6565 = (i8)(intptr_t)(ws+3760);
	i8 v6566 = *(i8*)(intptr_t)v6565;
	i8 v6567 = (i8)(intptr_t)(f106_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* subrid */))(intptr_t)v6567)(v6566, v6564);

	i8 v6568 = (i8)(intptr_t)(ws+3760);
	i8 v6569 = *(i8*)(intptr_t)v6568;
	i8 v6570 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6570)(v6569);

endsub:;
}
	void f377_I_node(i8* /* rootnode */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f365_Generate(i8 /* rootnode */);

// ReadM workspace at ws+3744 length ws+24
void f381_ReadM(void) {

	i8 v6571 = (i8)(intptr_t)(f377_I_node);
	i8 v6572;

	((void(*)(i8* /* rootnode */))(intptr_t)v6571)(&v6572);
	i8 v6573 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6573 = v6572;

	i8 v6574 = (i8)(intptr_t)(ws+3744);
	i8 v6575 = *(i8*)(intptr_t)v6574;
	i8 v6576 = v6575+(+256);
	i1 v6577 = *(i1*)(intptr_t)v6576;
	i8 v6578 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v6578 = v6577;

	i8 v6579 = (i8)(intptr_t)(ws+3752);
	i1 v6580 = *(i1*)(intptr_t)v6579;
	i1 v6581 = (i1)+4;
	if (v6580==v6581) goto c02_047a; else goto c02_047b;

c02_047a:;

	i8 v6582 = (i8)(intptr_t)(ws+3744);
	i8 v6583 = *(i8*)(intptr_t)v6582;
	i8 v6584 = *(i8*)(intptr_t)v6583;
	i8 v6585 = (i8)(intptr_t)(ws+3760);
	*(i8*)(intptr_t)v6585 = v6584;

	i8 v6586 = (i8)(intptr_t)(ws+40);
	i8 v6587 = *(i8*)(intptr_t)v6586;
	i8 v6588 = (i8)(intptr_t)(ws+3760);
	i8 v6589 = *(i8*)(intptr_t)v6588;
	i8 v6590 = v6589+(+16);
	*(i8*)(intptr_t)v6590 = v6587;

	i8 v6591 = (i8)(intptr_t)(ws+3760);
	i8 v6592 = *(i8*)(intptr_t)v6591;
	i8 v6593 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v6593 = v6592;

	i8 v6594 = (i8)(intptr_t)(ws+40);
	i8 v6595 = *(i8*)(intptr_t)v6594;
	i8 v6596 = *(i8*)(intptr_t)v6595;
	i8 v6597 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6597)(v6596);

	i8 v6598 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v6598)();

c02_047b:;

c02_0477:;

	i8 v6599 = (i8)(intptr_t)(ws+3744);
	i8 v6600 = *(i8*)(intptr_t)v6599;
	i8 v6601 = (i8)(intptr_t)(f365_Generate);

	((void(*)(i8 /* rootnode */))(intptr_t)v6601)(v6600);

	i8 v6602 = (i8)(intptr_t)(ws+3752);
	i1 v6603 = *(i1*)(intptr_t)v6602;
	i1 v6604 = (i1)+5;
	if (v6603==v6604) goto c02_047f; else goto c02_0480;

c02_047f:;

	i8 v6605 = (i8)(intptr_t)(ws+40);
	i8 v6606 = *(i8*)(intptr_t)v6605;
	i8 v6607 = v6606+(+16);
	i8 v6608 = *(i8*)(intptr_t)v6607;
	i8 v6609 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v6609 = v6608;

c02_0480:;

c02_047c:;

endsub:;
}
const i1 c02_s01f8[] = { 0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0x20,0x74,0x77,0x69,0x63,0x65,0 };
	void f63_SimpleError(i8 /* s */);
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f113_I_bsize(i2* /* s */);
	void f114_I_countedstring(i8* /* s */);
	void f110_I_b8(i1* /* b */);

// ReadParameters workspace at ws+3752 length ws+32
void f382_ReadParameters(i8 p6610 /* paramp */, i1 p6611 /* count */) {
	*(i1*)(intptr_t)(ws+3752) = p6611; /*count */
	*(i8*)(intptr_t)(ws+3760) = p6610; /*paramp */

	i8 v6612 = (i8)(intptr_t)(ws+3760);
	i8 v6613 = *(i8*)(intptr_t)v6612;
	i8 v6614 = *(i8*)(intptr_t)v6613;
	i8 v6615 = (i8)+0;
	if (v6614==v6615) goto c02_0485; else goto c02_0484;

c02_0484:;

	i8 v6616 = (i8)(intptr_t)c02_s01f8;
	i8 v6617 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v6617)(v6616);

c02_0485:;

c02_0481:;

	i8 v6618 = (i8)(intptr_t)(ws+3752);
	i1 v6619 = *(i1*)(intptr_t)v6618;
	i8 v6620 = v6619;
	i1 v6621 = (i1)+3;
	i8 v6622 = ((i8)v6620)<<v6621;
	i8 v6623 = (i8)(intptr_t)(f32_Alloc);
	i8 v6624;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6623)(&v6624, v6622);
	i8 v6625 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6625 = v6624;

	i8 v6626 = (i8)(intptr_t)(ws+3768);
	i8 v6627 = *(i8*)(intptr_t)v6626;
	i8 v6628 = (i8)(intptr_t)(ws+3760);
	i8 v6629 = *(i8*)(intptr_t)v6628;
	*(i8*)(intptr_t)v6629 = v6627;

c02_0488:;

	i8 v6630 = (i8)(intptr_t)(ws+3752);
	i1 v6631 = *(i1*)(intptr_t)v6630;
	i1 v6632 = (i1)+0;
	if (v6631==v6632) goto c02_048b; else goto c02_048a;

c02_048a:;

	i8 v6633 = (i8)+24;
	i8 v6634 = (i8)(intptr_t)(f32_Alloc);
	i8 v6635;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6634)(&v6635, v6633);
	i8 v6636 = (i8)(intptr_t)(ws+3776);
	*(i8*)(intptr_t)v6636 = v6635;

	i8 v6637 = (i8)(intptr_t)(ws+3776);
	i8 v6638 = *(i8*)(intptr_t)v6637;
	i8 v6639 = (i8)(intptr_t)(ws+3768);
	i8 v6640 = *(i8*)(intptr_t)v6639;
	*(i8*)(intptr_t)v6640 = v6638;

	i8 v6641 = (i8)(intptr_t)(ws+3768);
	i8 v6642 = *(i8*)(intptr_t)v6641;
	i8 v6643 = v6642+(+8);
	i8 v6644 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6644 = v6643;

	i8 v6645 = (i8)(intptr_t)(f111_I_b16);
	i2 v6646;

	((void(*)(i2* /* b */))(intptr_t)v6645)(&v6646);
	i8 v6647 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6648;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6647)(&v6648, v6646);
	i8 v6649 = (i8)(intptr_t)(ws+3776);
	i8 v6650 = *(i8*)(intptr_t)v6649;
	*(i8*)(intptr_t)v6650 = v6648;

	i8 v6651 = (i8)(intptr_t)(f110_I_b8);
	i1 v6652;

	((void(*)(i1* /* b */))(intptr_t)v6651)(&v6652);
	i8 v6653 = (i8)(intptr_t)(ws+3776);
	i8 v6654 = *(i8*)(intptr_t)v6653;
	i8 v6655 = v6654+(+10);
	*(i1*)(intptr_t)v6655 = v6652;

	i8 v6656 = (i8)(intptr_t)(f113_I_bsize);
	i2 v6657;

	((void(*)(i2* /* s */))(intptr_t)v6656)(&v6657);
	i8 v6658 = (i8)(intptr_t)(ws+3776);
	i8 v6659 = *(i8*)(intptr_t)v6658;
	i8 v6660 = v6659+(+12);
	*(i2*)(intptr_t)v6660 = v6657;

	i8 v6661 = (i8)(intptr_t)(f114_I_countedstring);
	i8 v6662;

	((void(*)(i8* /* s */))(intptr_t)v6661)(&v6662);
	i8 v6663 = (i8)(intptr_t)(ws+3776);
	i8 v6664 = *(i8*)(intptr_t)v6663;
	i8 v6665 = v6664+(+16);
	*(i8*)(intptr_t)v6665 = v6662;

	i8 v6666 = (i8)(intptr_t)(f110_I_b8);
	i1 v6667;

	((void(*)(i1* /* b */))(intptr_t)v6666)(&v6667);
	i8 v6668 = (i8)(intptr_t)(ws+3776);
	i8 v6669 = *(i8*)(intptr_t)v6668;
	i8 v6670 = v6669+(+14);
	*(i1*)(intptr_t)v6670 = v6667;

	i8 v6671 = (i8)(intptr_t)(ws+3752);
	i1 v6672 = *(i1*)(intptr_t)v6671;
	i1 v6673 = v6672+(-1);
	i8 v6674 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v6674 = v6673;

	goto c02_0488;

c02_048b:;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f382_ReadParameters(i8 /* paramp */, i1 /* count */);

// ReadI workspace at ws+3744 length ws+8
void f383_ReadI(void) {

	i8 v6675 = (i8)(intptr_t)(f111_I_b16);
	i2 v6676;

	((void(*)(i2* /* b */))(intptr_t)v6675)(&v6676);
	i8 v6677 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6678;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6677)(&v6678, v6676);
	i8 v6679 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6679 = v6678;

	i8 v6680 = (i8)(intptr_t)(f110_I_b8);
	i1 v6681;

	((void(*)(i1* /* b */))(intptr_t)v6680)(&v6681);
	i8 v6682 = (i8)(intptr_t)(ws+3744);
	i8 v6683 = *(i8*)(intptr_t)v6682;
	i8 v6684 = v6683+(+48);
	*(i1*)(intptr_t)v6684 = v6681;

	i8 v6685 = (i8)(intptr_t)(ws+3744);
	i8 v6686 = *(i8*)(intptr_t)v6685;
	i8 v6687 = v6686+(+48);
	i1 v6688 = *(i1*)(intptr_t)v6687;
	i8 v6689 = (i8)(intptr_t)(ws+3744);
	i8 v6690 = *(i8*)(intptr_t)v6689;
	i8 v6691 = v6690+(+32);
	i8 v6692 = (i8)(intptr_t)(f382_ReadParameters);

	((void(*)(i8 /* paramp */, i1 /* count */))(intptr_t)v6692)(v6691, v6688);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f382_ReadParameters(i8 /* paramp */, i1 /* count */);

// ReadO workspace at ws+3744 length ws+8
void f384_ReadO(void) {

	i8 v6693 = (i8)(intptr_t)(f111_I_b16);
	i2 v6694;

	((void(*)(i2* /* b */))(intptr_t)v6693)(&v6694);
	i8 v6695 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6696;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6695)(&v6696, v6694);
	i8 v6697 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6697 = v6696;

	i8 v6698 = (i8)(intptr_t)(f110_I_b8);
	i1 v6699;

	((void(*)(i1* /* b */))(intptr_t)v6698)(&v6699);
	i8 v6700 = (i8)(intptr_t)(ws+3744);
	i8 v6701 = *(i8*)(intptr_t)v6700;
	i8 v6702 = v6701+(+49);
	*(i1*)(intptr_t)v6702 = v6699;

	i8 v6703 = (i8)(intptr_t)(ws+3744);
	i8 v6704 = *(i8*)(intptr_t)v6703;
	i8 v6705 = v6704+(+49);
	i1 v6706 = *(i1*)(intptr_t)v6705;
	i8 v6707 = (i8)(intptr_t)(ws+3744);
	i8 v6708 = *(i8*)(intptr_t)v6707;
	i8 v6709 = v6708+(+40);
	i8 v6710 = (i8)(intptr_t)(f382_ReadParameters);

	((void(*)(i8 /* paramp */, i1 /* count */))(intptr_t)v6710)(v6709, v6706);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f113_I_bsize(i2* /* s */);
	void f109_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i2 /* subrid */);

// ReadW workspace at ws+3744 length ws+12
void f385_ReadW(void) {

	i8 v6711 = (i8)(intptr_t)(f111_I_b16);
	i2 v6712;

	((void(*)(i2* /* b */))(intptr_t)v6711)(&v6712);
	i8 v6713 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6714;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6713)(&v6714, v6712);
	i8 v6715 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6715 = v6714;

	i8 v6716 = (i8)(intptr_t)(f110_I_b8);
	i1 v6717;

	((void(*)(i1* /* b */))(intptr_t)v6716)(&v6717);
	i8 v6718 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v6718 = v6717;

	i8 v6719 = (i8)(intptr_t)(f113_I_bsize);
	i2 v6720;

	((void(*)(i2* /* s */))(intptr_t)v6719)(&v6720);
	i8 v6721 = (i8)(intptr_t)(ws+3754);
	*(i2*)(intptr_t)v6721 = v6720;

	i8 v6722 = (i8)(intptr_t)(ws+3744);
	i8 v6723 = *(i8*)(intptr_t)v6722;
	i8 v6724 = v6723+(+8);
	i2 v6725 = *(i2*)(intptr_t)v6724;
	i8 v6726 = (i8)(intptr_t)(ws+3752);
	i1 v6727 = *(i1*)(intptr_t)v6726;
	i8 v6728 = (i8)(intptr_t)(ws+3754);
	i2 v6729 = *(i2*)(intptr_t)v6728;
	i8 v6730 = (i8)(intptr_t)(f109_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i2 /* subrid */))(intptr_t)v6730)(v6729, v6727, v6725);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f107_EmitterReferenceSubroutineById(i2 /* used */, i2 /* user */);

// ReadR workspace at ws+3744 length ws+16
void f386_ReadR(void) {

	i8 v6731 = (i8)(intptr_t)(f111_I_b16);
	i2 v6732;

	((void(*)(i2* /* b */))(intptr_t)v6731)(&v6732);
	i8 v6733 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6734;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6733)(&v6734, v6732);
	i8 v6735 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6735 = v6734;

	i8 v6736 = (i8)(intptr_t)(f111_I_b16);
	i2 v6737;

	((void(*)(i2* /* b */))(intptr_t)v6736)(&v6737);
	i8 v6738 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6739;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6738)(&v6739, v6737);
	i8 v6740 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v6740 = v6739;

	i8 v6741 = (i8)(intptr_t)(ws+3744);
	i8 v6742 = *(i8*)(intptr_t)v6741;
	i8 v6743 = v6742+(+8);
	i2 v6744 = *(i2*)(intptr_t)v6743;
	i8 v6745 = (i8)(intptr_t)(ws+3752);
	i8 v6746 = *(i8*)(intptr_t)v6745;
	i8 v6747 = v6746+(+8);
	i2 v6748 = *(i2*)(intptr_t)v6747;
	i8 v6749 = (i8)(intptr_t)(f107_EmitterReferenceSubroutineById);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v6749)(v6748, v6744);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);

// ReadF workspace at ws+3744 length ws+8
void f387_ReadF(void) {

	i8 v6750 = (i8)(intptr_t)(f111_I_b16);
	i2 v6751;

	((void(*)(i2* /* b */))(intptr_t)v6750)(&v6751);
	i8 v6752 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6753;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6752)(&v6753, v6751);
	i8 v6754 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6754 = v6753;

	i8 v6755 = (i8)(intptr_t)(f110_I_b8);
	i1 v6756;

	((void(*)(i1* /* b */))(intptr_t)v6755)(&v6756);
	i8 v6757 = (i8)(intptr_t)(ws+3744);
	i8 v6758 = *(i8*)(intptr_t)v6757;
	i8 v6759 = v6758+(+50);
	*(i1*)(intptr_t)v6759 = v6756;

endsub:;
}
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f110_I_b8(i1* /* b */);
	void f379_ReadN(void);
	void f380_ReadX(void);
	void f381_ReadM(void);
	void f383_ReadI(void);
	void f384_ReadO(void);
	void f385_ReadW(void);
	void f386_ReadR(void);
	void f387_ReadF(void);
	void f61_StartError(void);
const i1 c02_s01f9[] = { 0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f18_print_hex_i8(i1 /* value */);
const i1 c02_s01fa[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f47_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f20_print_hex_i32(i4 /* value */);
	void f62_EndError(void);

// ProcessFile workspace at ws+3736 length ws+1
void f388_ProcessFile(void) {

	i8 v6760 = (i8)(intptr_t)(ws+3600);
	i8 v6761 = (i8)+136;
	i8 v6762 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v6762)(v6761, v6760);

c02_048c:;

	i8 v6763 = (i8)(intptr_t)(f110_I_b8);
	i1 v6764;

	((void(*)(i1* /* b */))(intptr_t)v6763)(&v6764);
	i8 v6765 = (i8)(intptr_t)(ws+3736);
	*(i1*)(intptr_t)v6765 = v6764;

	i8 v6766 = (i8)(intptr_t)(ws+3736);
	i1 v6767 = *(i1*)(intptr_t)v6766;

	if (v6767 != +69) goto c02_048f;

	goto endsub;

c02_048f:;

	if (v6767 != +78) goto c02_0490;

	i8 v6768 = (i8)(intptr_t)(f379_ReadN);

	((void(*)(void))(intptr_t)v6768)();

	goto c02_048e;

c02_0490:;

	if (v6767 != +88) goto c02_0491;

	i8 v6769 = (i8)(intptr_t)(f380_ReadX);

	((void(*)(void))(intptr_t)v6769)();

	goto c02_048e;

c02_0491:;

	if (v6767 != +77) goto c02_0492;

	i8 v6770 = (i8)(intptr_t)(f381_ReadM);

	((void(*)(void))(intptr_t)v6770)();

	goto c02_048e;

c02_0492:;

	if (v6767 != +73) goto c02_0493;

	i8 v6771 = (i8)(intptr_t)(f383_ReadI);

	((void(*)(void))(intptr_t)v6771)();

	goto c02_048e;

c02_0493:;

	if (v6767 != +79) goto c02_0494;

	i8 v6772 = (i8)(intptr_t)(f384_ReadO);

	((void(*)(void))(intptr_t)v6772)();

	goto c02_048e;

c02_0494:;

	if (v6767 != +87) goto c02_0495;

	i8 v6773 = (i8)(intptr_t)(f385_ReadW);

	((void(*)(void))(intptr_t)v6773)();

	goto c02_048e;

c02_0495:;

	if (v6767 != +82) goto c02_0496;

	i8 v6774 = (i8)(intptr_t)(f386_ReadR);

	((void(*)(void))(intptr_t)v6774)();

	goto c02_048e;

c02_0496:;

	if (v6767 != +70) goto c02_0497;

	i8 v6775 = (i8)(intptr_t)(f387_ReadF);

	((void(*)(void))(intptr_t)v6775)();

	goto c02_048e;

c02_0497:;

	i8 v6776 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v6776)();

	i8 v6777 = (i8)(intptr_t)c02_s01f9;
	i8 v6778 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6778)(v6777);

	i8 v6779 = (i8)(intptr_t)(ws+3736);
	i1 v6780 = *(i1*)(intptr_t)v6779;
	i8 v6781 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v6781)(v6780);

	i8 v6782 = (i8)(intptr_t)c02_s01fa;
	i8 v6783 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6783)(v6782);

	i8 v6784 = (i8)(intptr_t)(ws+2804);
	i8 v6785 = (i8)(intptr_t)(f47_FCBPos);
	i4 v6786;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v6785)(&v6786, v6784);
	i8 v6787 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6787)(v6786);

	i8 v6788 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v6788)();

c02_048e:;


	goto c02_048c;

c02_048d:;

endsub:;
}
	void f37_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s01fb[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3736 length ws+0
void f389_PrintFreeMemory(void) {

	i8 v6789 = (i8)(intptr_t)(f37_GetFreeMemory);
	i8 v6790;

	((void(*)(i8* /* i */))(intptr_t)v6789)(&v6790);
	i1 v6791 = (i1)+10;
	i8 v6792 = ((i8)v6790)>>v6791;
	i2 v6793 = v6792;
	i8 v6794 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v6794)(v6793);

	i8 v6795 = (i8)(intptr_t)c02_s01fb;
	i8 v6796 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6796)(v6795);

endsub:;
}
const i1 c02_s01fc[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3736 length ws+0
void f390_SyntaxError(void) {

	i8 v6797 = (i8)(intptr_t)c02_s01fc;
	i8 v6798 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6798)(v6797);

	i8 v6799 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v6799)();

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
	void f24_ArgvNext(i8* /* arg */);
	void f24_ArgvNext(i8* /* arg */);
	void f390_SyntaxError(void);

// ParseArguments workspace at ws+3736 length ws+0
void f391_ParseArguments(void) {

	i8 v6800 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v6800)();

	i8 v6801 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v6802;

	((void(*)(i8* /* arg */))(intptr_t)v6801)(&v6802);
	i8 v6803 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v6803 = v6802;

	i8 v6804 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v6805;

	((void(*)(i8* /* arg */))(intptr_t)v6804)(&v6805);
	i8 v6806 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v6806 = v6805;

	i8 v6807 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v6808;

	((void(*)(i8* /* arg */))(intptr_t)v6807)(&v6808);
	i8 v6809 = (i8)+0;
	if (v6808==v6809) goto c02_04a2; else goto c02_049f;

c02_04a2:;

	i8 v6810 = (i8)(intptr_t)(ws+24);
	i8 v6811 = *(i8*)(intptr_t)v6810;
	i8 v6812 = (i8)+0;
	if (v6811==v6812) goto c02_049f; else goto c02_04a1;

c02_04a1:;

	i8 v6813 = (i8)(intptr_t)(ws+32);
	i8 v6814 = *(i8*)(intptr_t)v6813;
	i8 v6815 = (i8)+0;
	if (v6814==v6815) goto c02_049f; else goto c02_04a0;

c02_049f:;

	i8 v6816 = (i8)(intptr_t)(f390_SyntaxError);

	((void(*)(void))(intptr_t)v6816)();

c02_04a0:;

c02_0498:;

endsub:;
}
const i1 c02_s01fd[] = { 0x43,0x4f,0x57,0x42,0x45,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f389_PrintFreeMemory(void);
	void f391_ParseArguments(void);
	void f115_InputterOpenfile(i8 /* filename */);
	void f103_EmitterOpenfile(i8 /* filename */);
	void f388_ProcessFile(void);
	void f104_EmitterClosefile(void);
	void f116_InputterClosefile(void);
const i1 c02_s01fe[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f389_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3736
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

	i2 v842 = (i2)+0;
	i8 v843 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v843 = v842;

	i2 v844 = (i2)+0;
	i8 v845 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v845 = v844;


	i8 v847 = (i8)(intptr_t)(ws+56);
	i8 v848 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v848 = v847;












	i8 v967 = (i8)+0;
	i8 v968 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v968 = v967;




	i2 v1019 = (i2)+0;
	i8 v1020 = (i8)(intptr_t)(ws+2772);
	*(i2*)(intptr_t)v1020 = v1019;

	i8 v1021 = (i8)+0;
	i8 v1022 = (i8)(intptr_t)(ws+2792);
	*(i8*)(intptr_t)v1022 = v1021;

	i1 v1023 = (i1)+0;
	i8 v1024 = (i8)(intptr_t)(ws+2800);
	*(i1*)(intptr_t)v1024 = v1023;






































































	i8 v2103 = (i8)+0;
	i8 v2104 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2104 = v2103;







	i2 v2224 = (i2)+1;
	i8 v2225 = (i8)(intptr_t)(ws+3586);
	*(i2*)(intptr_t)v2225 = v2224;




























	i2 v3103 = (i2)+0;
	i8 v3104 = (i8)(intptr_t)(ws+3588);
	*(i2*)(intptr_t)v3104 = v3103;


	i1 v3159 = (i1)+0;
	i8 v3160 = (i8)(intptr_t)(ws+3598);
	*(i1*)(intptr_t)v3160 = v3159;







































	i8 v6817 = (i8)(intptr_t)c02_s01fd;
	i8 v6818 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6818)(v6817);

	i8 v6819 = (i8)(intptr_t)(f389_PrintFreeMemory);

	((void(*)(void))(intptr_t)v6819)();

	i8 v6820 = (i8)(intptr_t)(f391_ParseArguments);

	((void(*)(void))(intptr_t)v6820)();

	i8 v6821 = (i8)(intptr_t)(ws+24);
	i8 v6822 = *(i8*)(intptr_t)v6821;
	i8 v6823 = (i8)(intptr_t)(f115_InputterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v6823)(v6822);

	i8 v6824 = (i8)(intptr_t)(ws+32);
	i8 v6825 = *(i8*)(intptr_t)v6824;
	i8 v6826 = (i8)(intptr_t)(f103_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v6826)(v6825);

	i8 v6827 = (i8)(intptr_t)(f388_ProcessFile);

	((void(*)(void))(intptr_t)v6827)();

	i8 v6828 = (i8)(intptr_t)(f104_EmitterClosefile);

	((void(*)(void))(intptr_t)v6828)();

	i8 v6829 = (i8)(intptr_t)(f116_InputterClosefile);

	((void(*)(void))(intptr_t)v6829)();

	i8 v6830 = (i8)(intptr_t)c02_s01fe;
	i8 v6831 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6831)(v6830);

	i8 v6832 = (i8)(intptr_t)(f389_PrintFreeMemory);

	((void(*)(void))(intptr_t)v6832)();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                                                                        