#include "cowgol.h"
static i8 workspace[0x020b];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+4008 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+4160 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+4160) = p10; /*buf */
	*(i1*)(intptr_t)(ws+4168) = p9; /*byte */
	*(i8*)(intptr_t)(ws+4176) = p8; /*len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4160) 
,  
*(i1*)(intptr_t)(ws+4168) 
,  
*(i8*)(intptr_t)(ws+4176) 
); 



endsub:;
}

// print_char workspace at ws+4024 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+4024) = p11; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+4024) 
); 



endsub:;
}
	void f8_print_char(i1 /* c */);

// print workspace at ws+4008 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+4008) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+4008);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+4016);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+4016);
	i1 v29 = *(i1*)(intptr_t)v28;
	i8 v30 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v30)(v29);

	i8 v31 = (i8)(intptr_t)(ws+4008);
	i8 v32 = *(i8*)(intptr_t)v31;
	i8 v33 = v32+(+1);
	i8 v34 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v34 = v33;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_nl workspace at ws+4008 length ws+0
void f12_print_nl(void) {

	i1 v35 = (i1)+10;
	i8 v36 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v36)(v35);

endsub:;
}

// UIToA workspace at ws+4048 length ws+49
void f13_UIToA(i8* p37 /* ptr */, i8 p38 /* buffer */, i1 p39 /* base */, i4 p40 /* value */) {
	*(i4*)(intptr_t)(ws+4048) = p40; /*value */
	*(i1*)(intptr_t)(ws+4052) = p39; /*base */
	*(i8*)(intptr_t)(ws+4056) = p38; /*buffer */

	i8 v41 = (i8)(intptr_t)(ws+4056);
	i8 v42 = *(i8*)(intptr_t)v41;
	i8 v43 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v43 = v42;

c02_0008:;

	i8 v44 = (i8)(intptr_t)(ws+4048);
	i4 v45 = *(i4*)(intptr_t)v44;
	i8 v46 = (i8)(intptr_t)(ws+4052);
	i1 v47 = *(i1*)(intptr_t)v46;
	i4 v48 = v47;
	i4 v49 = v45%v48;
	i8 v50 = (i8)(intptr_t)(ws+4072);
	*(i4*)(intptr_t)v50 = v49;

	i8 v51 = (i8)(intptr_t)(ws+4048);
	i4 v52 = *(i4*)(intptr_t)v51;
	i8 v53 = (i8)(intptr_t)(ws+4052);
	i1 v54 = *(i1*)(intptr_t)v53;
	i4 v55 = v54;
	i4 v56 = v52/v55;
	i8 v57 = (i8)(intptr_t)(ws+4048);
	*(i4*)(intptr_t)v57 = v56;

	i8 v58 = (i8)(intptr_t)(ws+4072);
	i4 v59 = *(i4*)(intptr_t)v58;
	i4 v60 = (i4)+10;
	if (v59<v60) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v61 = (i8)(intptr_t)(ws+4072);
	i4 v62 = *(i4*)(intptr_t)v61;
	i4 v63 = v62+(+48);
	i8 v64 = (i8)(intptr_t)(ws+4072);
	*(i4*)(intptr_t)v64 = v63;

	goto c02_000a;

c02_000e:;

	i8 v65 = (i8)(intptr_t)(ws+4072);
	i4 v66 = *(i4*)(intptr_t)v65;
	i4 v67 = v66+(+87);
	i8 v68 = (i8)(intptr_t)(ws+4072);
	*(i4*)(intptr_t)v68 = v67;

c02_000a:;

	i8 v69 = (i8)(intptr_t)(ws+4072);
	i4 v70 = *(i4*)(intptr_t)v69;
	i1 v71 = v70;
	i8 v72 = (i8)(intptr_t)(ws+4064);
	i8 v73 = *(i8*)(intptr_t)v72;
	*(i1*)(intptr_t)v73 = v71;

	i8 v74 = (i8)(intptr_t)(ws+4064);
	i8 v75 = *(i8*)(intptr_t)v74;
	i8 v76 = v75+(+1);
	i8 v77 = (i8)(intptr_t)(ws+4064);
	*(i8*)(intptr_t)v77 = v76;

	i8 v78 = (i8)(intptr_t)(ws+4048);
	i4 v79 = *(i4*)(intptr_t)v78;
	i4 v80 = (i4)+0;
	if (v79==v80) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v81 = (i8)(intptr_t)(ws+4056);
	i8 v82 = *(i8*)(intptr_t)v81;
	i8 v83 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v83 = v82;

	i8 v84 = (i8)(intptr_t)(ws+4064);
	i8 v85 = *(i8*)(intptr_t)v84;
	i8 v86 = v85+(-1);
	i8 v87 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v87 = v86;

c02_0016:;

	i8 v88 = (i8)(intptr_t)(ws+4080);
	i8 v89 = *(i8*)(intptr_t)v88;
	i8 v90 = (i8)(intptr_t)(ws+4088);
	i8 v91 = *(i8*)(intptr_t)v90;
	if (v89<v91) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v92 = (i8)(intptr_t)(ws+4080);
	i8 v93 = *(i8*)(intptr_t)v92;
	i1 v94 = *(i1*)(intptr_t)v93;
	i8 v95 = (i8)(intptr_t)(ws+4096);
	*(i1*)(intptr_t)v95 = v94;

	i8 v96 = (i8)(intptr_t)(ws+4088);
	i8 v97 = *(i8*)(intptr_t)v96;
	i1 v98 = *(i1*)(intptr_t)v97;
	i8 v99 = (i8)(intptr_t)(ws+4080);
	i8 v100 = *(i8*)(intptr_t)v99;
	*(i1*)(intptr_t)v100 = v98;

	i8 v101 = (i8)(intptr_t)(ws+4096);
	i1 v102 = *(i1*)(intptr_t)v101;
	i8 v103 = (i8)(intptr_t)(ws+4088);
	i8 v104 = *(i8*)(intptr_t)v103;
	*(i1*)(intptr_t)v104 = v102;

	i8 v105 = (i8)(intptr_t)(ws+4080);
	i8 v106 = *(i8*)(intptr_t)v105;
	i8 v107 = v106+(+1);
	i8 v108 = (i8)(intptr_t)(ws+4080);
	*(i8*)(intptr_t)v108 = v107;

	i8 v109 = (i8)(intptr_t)(ws+4088);
	i8 v110 = *(i8*)(intptr_t)v109;
	i8 v111 = v110+(-1);
	i8 v112 = (i8)(intptr_t)(ws+4088);
	*(i8*)(intptr_t)v112 = v111;

	goto c02_0016;

c02_0019:;

	i1 v113 = (i1)+0;
	i8 v114 = (i8)(intptr_t)(ws+4064);
	i8 v115 = *(i8*)(intptr_t)v114;
	*(i1*)(intptr_t)v115 = v113;

endsub:;
	*p37 = *(i8*)(intptr_t)(ws+4064);
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f11_print(i8 /* ptr */);

// print_i32 workspace at ws+3944 length ws+24
void f15_print_i32(i4 p143 /* value */) {
	*(i4*)(intptr_t)(ws+3944) = p143; /*value */

	i8 v144 = (i8)(intptr_t)(ws+3944);
	i4 v145 = *(i4*)(intptr_t)v144;
	i1 v146 = (i1)+10;
	i8 v147 = (i8)(intptr_t)(ws+3948);
	i8 v148 = (i8)(intptr_t)(f13_UIToA);
	i8 v149;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v148)(&v149, v147, v146, v145);
	i8 v150 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v150 = v149;

	i8 v151 = (i8)(intptr_t)(ws+3948);
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

// print_i8 workspace at ws+3936 length ws+1
void f17_print_i8(i1 p158 /* value */) {
	*(i1*)(intptr_t)(ws+3936) = p158; /*value */

	i8 v159 = (i8)(intptr_t)(ws+3936);
	i1 v160 = *(i1*)(intptr_t)v159;
	i4 v161 = v160;
	i8 v162 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v162)(v161);

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+3928 length ws+3
void f18_print_hex_i8(i1 p163 /* value */) {
	*(i1*)(intptr_t)(ws+3928) = p163; /*value */

	i1 v164 = (i1)+2;
	i8 v165 = (i8)(intptr_t)(ws+3929);
	*(i1*)(intptr_t)v165 = v164;

c02_001f:;

	i8 v166 = (i8)(intptr_t)(ws+3928);
	i1 v167 = *(i1*)(intptr_t)v166;
	i1 v168 = (i1)+4;
	i1 v169 = ((i1)v167)>>v168;
	i8 v170 = (i8)(intptr_t)(ws+3930);
	*(i1*)(intptr_t)v170 = v169;

	i8 v171 = (i8)(intptr_t)(ws+3930);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = (i1)+10;
	if (v172<v173) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v174 = (i8)(intptr_t)(ws+3930);
	i1 v175 = *(i1*)(intptr_t)v174;
	i1 v176 = v175+(+48);
	i8 v177 = (i8)(intptr_t)(ws+3930);
	*(i1*)(intptr_t)v177 = v176;

	goto c02_0021;

c02_0025:;

	i8 v178 = (i8)(intptr_t)(ws+3930);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = v179+(+87);
	i8 v181 = (i8)(intptr_t)(ws+3930);
	*(i1*)(intptr_t)v181 = v180;

c02_0021:;

	i8 v182 = (i8)(intptr_t)(ws+3930);
	i1 v183 = *(i1*)(intptr_t)v182;
	i8 v184 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v184)(v183);

	i8 v185 = (i8)(intptr_t)(ws+3928);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = (i1)+4;
	i1 v188 = ((i1)v186)<<v187;
	i8 v189 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v189 = v188;

	i8 v190 = (i8)(intptr_t)(ws+3929);
	i1 v191 = *(i1*)(intptr_t)v190;
	i1 v192 = v191+(-1);
	i8 v193 = (i8)(intptr_t)(ws+3929);
	*(i1*)(intptr_t)v193 = v192;

	i8 v194 = (i8)(intptr_t)(ws+3929);
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

// print_hex_i16 workspace at ws+3920 length ws+2
void f19_print_hex_i16(i2 p197 /* value */) {
	*(i2*)(intptr_t)(ws+3920) = p197; /*value */

	i8 v198 = (i8)(intptr_t)(ws+3920);
	i2 v199 = *(i2*)(intptr_t)v198;
	i1 v200 = (i1)+8;
	i2 v201 = ((i2)v199)>>v200;
	i1 v202 = v201;
	i8 v203 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v203)(v202);

	i8 v204 = (i8)(intptr_t)(ws+3920);
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

// print_hex_i32 workspace at ws+3920 length ws+4
void f20_print_hex_i32(i4 p208 /* value */) {
	*(i4*)(intptr_t)(ws+3920) = p208; /*value */

	i8 v209 = (i8)(intptr_t)(ws+3920);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+24;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	i8 v214 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v214)(v213);

	i8 v215 = (i8)(intptr_t)(ws+3920);
	i4 v216 = *(i4*)(intptr_t)v215;
	i1 v217 = (i1)+16;
	i4 v218 = ((i4)v216)>>v217;
	i1 v219 = v218;
	i8 v220 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v220)(v219);

	i8 v221 = (i8)(intptr_t)(ws+3920);
	i4 v222 = *(i4*)(intptr_t)v221;
	i1 v223 = (i1)+8;
	i4 v224 = ((i4)v222)>>v223;
	i1 v225 = v224;
	i8 v226 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v226)(v225);

	i8 v227 = (i8)(intptr_t)(ws+3920);
	i4 v228 = *(i4*)(intptr_t)v227;
	i1 v229 = v228;
	i8 v230 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v230)(v229);

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// MemZero workspace at ws+3896 length ws+16
void f22_MemZero(i8 p335 /* size */, i8 p336 /* ptr */) {
	*(i8*)(intptr_t)(ws+3896) = p336; /*ptr */
	*(i8*)(intptr_t)(ws+3904) = p335; /*size */

	i8 v337 = (i8)(intptr_t)(ws+3896);
	i8 v338 = *(i8*)(intptr_t)v337;
	i1 v339 = (i1)+0;
	i8 v340 = (i8)(intptr_t)(ws+3904);
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

// MemCopy workspace at ws+3976 length ws+24
void f30_MemCopy(i8 p480 /* dest */, i8 p481 /* size */, i8 p482 /* src */) {
	*(i8*)(intptr_t)(ws+3976) = p482; /*src */
	*(i8*)(intptr_t)(ws+3984) = p481; /*size */
	*(i8*)(intptr_t)(ws+3992) = p480; /*dest */

c02_0085:;

	i8 v483 = (i8)(intptr_t)(ws+3984);
	i8 v484 = *(i8*)(intptr_t)v483;
	i8 v485 = (i8)+0;
	if (v484==v485) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v486 = (i8)(intptr_t)(ws+3976);
	i8 v487 = *(i8*)(intptr_t)v486;
	i1 v488 = *(i1*)(intptr_t)v487;
	i8 v489 = (i8)(intptr_t)(ws+3992);
	i8 v490 = *(i8*)(intptr_t)v489;
	*(i1*)(intptr_t)v490 = v488;

	i8 v491 = (i8)(intptr_t)(ws+3992);
	i8 v492 = *(i8*)(intptr_t)v491;
	i8 v493 = v492+(+1);
	i8 v494 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v494 = v493;

	i8 v495 = (i8)(intptr_t)(ws+3976);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+1);
	i8 v498 = (i8)(intptr_t)(ws+3976);
	*(i8*)(intptr_t)v498 = v497;

	i8 v499 = (i8)(intptr_t)(ws+3984);
	i8 v500 = *(i8*)(intptr_t)v499;
	i8 v501 = v500+(-1);
	i8 v502 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v502 = v501;

	goto c02_0085;

c02_0088:;

endsub:;
}

// RawAlloc workspace at ws+3960 length ws+16
void f31_RawAlloc(i8* p503 /* block */, i8 p504 /* length */) {
	*(i8*)(intptr_t)(ws+3960) = p504; /*length */


	
*(i8*)(intptr_t)(ws+3968) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3960) 
); 



endsub:;
	*p503 = *(i8*)(intptr_t)(ws+3968);
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

// Free workspace at ws+3968 length ws+8
void f33_Free(i8 p518 /* block */) {
	*(i8*)(intptr_t)(ws+3968) = p518; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3968) 
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

// fcb_i_blockin workspace at ws+4128 length ws+28
void f38_fcb_i_blockin(i8 p524 /* fcb */) {
	*(i8*)(intptr_t)(ws+4128) = p524; /*fcb */

	i8 v525 = (i8)(intptr_t)(ws+4128);
	i8 v526 = *(i8*)(intptr_t)v525;
	i8 v527 = v526+(+12);
	i1 v528 = (i1)+0;
	i8 v529 = (i8)+512;
	i8 v530 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v530)(v529, v528, v527);

	i8 v531 = (i8)(intptr_t)(ws+4128);
	i8 v532 = *(i8*)(intptr_t)v531;
	i4 v533 = *(i4*)(intptr_t)v532;
	i8 v534 = (i8)(intptr_t)(ws+4136);
	*(i4*)(intptr_t)v534 = v533;

	i8 v535 = (i8)(intptr_t)(ws+4128);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+12);
	i8 v538 = (i8)(intptr_t)(ws+4144);
	*(i8*)(intptr_t)v538 = v537;

	i8 v539 = (i8)(intptr_t)(ws+4128);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+8);
	i4 v542 = *(i4*)(intptr_t)v541;
	i1 v543 = (i1)+9;
	i4 v544 = ((i4)v542)<<v543;
	i8 v545 = (i8)(intptr_t)(ws+4152);
	*(i4*)(intptr_t)v545 = v544;


	
pread( 
*(i4*)(intptr_t)(ws+4136) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4144) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+4152) 
); 



	i1 v546 = (i1)+0;
	i8 v547 = (i8)(intptr_t)(ws+4128);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+6);
	*(i1*)(intptr_t)v549 = v546;

endsub:;
}

// fcb_i_blockout workspace at ws+4128 length ws+28
void f39_fcb_i_blockout(i8 p550 /* fcb */) {
	*(i8*)(intptr_t)(ws+4128) = p550; /*fcb */

	i8 v551 = (i8)(intptr_t)(ws+4128);
	i8 v552 = *(i8*)(intptr_t)v551;
	i8 v553 = v552+(+6);
	i1 v554 = *(i1*)(intptr_t)v553;
	i1 v555 = (i1)+0;
	if (v554==v555) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v556 = (i8)(intptr_t)(ws+4128);
	i8 v557 = *(i8*)(intptr_t)v556;
	i4 v558 = *(i4*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+4136);
	*(i4*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+4128);
	i8 v561 = *(i8*)(intptr_t)v560;
	i8 v562 = v561+(+12);
	i8 v563 = (i8)(intptr_t)(ws+4144);
	*(i8*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+4128);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = v565+(+8);
	i4 v567 = *(i4*)(intptr_t)v566;
	i1 v568 = (i1)+9;
	i4 v569 = ((i4)v567)<<v568;
	i8 v570 = (i8)(intptr_t)(ws+4152);
	*(i4*)(intptr_t)v570 = v569;


	
pwrite( 
*(i4*)(intptr_t)(ws+4136) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+4144) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+4152) 
); 



	i1 v571 = (i1)+0;
	i8 v572 = (i8)(intptr_t)(ws+4128);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+6);
	*(i1*)(intptr_t)v574 = v571;

c02_0092:;

c02_008e:;

endsub:;
}
	void f39_fcb_i_blockout(i8 /* fcb */);
	void f38_fcb_i_blockin(i8 /* fcb */);

// fcb_i_changeblock workspace at ws+4112 length ws+12
void f40_fcb_i_changeblock(i4 p575 /* newblock */, i8 p576 /* fcb */) {
	*(i8*)(intptr_t)(ws+4112) = p576; /*fcb */
	*(i4*)(intptr_t)(ws+4120) = p575; /*newblock */

	i8 v577 = (i8)(intptr_t)(ws+4120);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+4112);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = v580+(+8);
	i4 v582 = *(i4*)(intptr_t)v581;
	if (v578==v582) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v583 = (i8)(intptr_t)(ws+4112);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v585)(v584);

	i8 v586 = (i8)(intptr_t)(ws+4120);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+4112);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+8);
	*(i4*)(intptr_t)v590 = v587;

	i8 v591 = (i8)(intptr_t)(ws+4112);
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

// FCBPos workspace at ws+3800 length ws+12
void f47_FCBPos(i4* p688 /* pos */, i8 p689 /* fcb */) {
	*(i8*)(intptr_t)(ws+3800) = p689; /*fcb */

	i8 v690 = (i8)(intptr_t)(ws+3800);
	i8 v691 = *(i8*)(intptr_t)v690;
	i8 v692 = v691+(+8);
	i4 v693 = *(i4*)(intptr_t)v692;
	i1 v694 = (i1)+9;
	i4 v695 = ((i4)v693)<<v694;
	i8 v696 = (i8)(intptr_t)(ws+3800);
	i8 v697 = *(i8*)(intptr_t)v696;
	i8 v698 = v697+(+4);
	i2 v699 = *(i2*)(intptr_t)v698;
	i4 v700 = v699;
	i4 v701 = v695|v700;
	i4 v702 = v701+(+1);
	i8 v703 = (i8)(intptr_t)(ws+3808);
	*(i4*)(intptr_t)v703 = v702;

endsub:;
	*p688 = *(i4*)(intptr_t)(ws+3808);
}
	void f40_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// fcb_i_nextchar workspace at ws+4104 length ws+8
void f49_fcb_i_nextchar(i8 p718 /* fcb */) {
	*(i8*)(intptr_t)(ws+4104) = p718; /*fcb */

	i8 v719 = (i8)(intptr_t)(ws+4104);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = v720+(+4);
	i2 v722 = *(i2*)(intptr_t)v721;
	i2 v723 = v722+(+1);
	i8 v724 = (i8)(intptr_t)(ws+4104);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+4);
	*(i2*)(intptr_t)v726 = v723;

	i8 v727 = (i8)(intptr_t)(ws+4104);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i2 v731 = (i2)+512;
	if (v730==v731) goto c02_00a0; else goto c02_00a1;

c02_00a0:;

	i8 v732 = (i8)(intptr_t)(ws+4104);
	i8 v733 = *(i8*)(intptr_t)v732;
	i8 v734 = (i8)(intptr_t)(ws+4104);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+8);
	i4 v737 = *(i4*)(intptr_t)v736;
	i4 v738 = v737+(+1);
	i8 v739 = (i8)(intptr_t)(f40_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v739)(v738, v733);

	i2 v740 = (i2)+0;
	i8 v741 = (i8)(intptr_t)(ws+4104);
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

// FCBPutChar workspace at ws+4088 length ws+9
void f51_FCBPutChar(i1 p760 /* c */, i8 p761 /* fcb */) {
	*(i8*)(intptr_t)(ws+4088) = p761; /*fcb */
	*(i1*)(intptr_t)(ws+4096) = p760; /*c */

	i8 v762 = (i8)(intptr_t)(ws+4088);
	i8 v763 = *(i8*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v764)(v763);

	i8 v765 = (i8)(intptr_t)(ws+4096);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+4088);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+4088);
	i8 v771 = *(i8*)(intptr_t)v770;
	i8 v772 = v771+(+4);
	i2 v773 = *(i2*)(intptr_t)v772;
	i8 v774 = v773;
	i8 v775 = v769+v774;
	*(i1*)(intptr_t)v775 = v766;

	i1 v776 = (i1)+1;
	i8 v777 = (i8)(intptr_t)(ws+4088);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+6);
	*(i1*)(intptr_t)v779 = v776;

endsub:;
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);

// FCBPutBlock workspace at ws+4064 length ws+24
void f54_FCBPutBlock(i8 p818 /* length */, i8 p819 /* buffer */, i8 p820 /* fcb */) {
	*(i8*)(intptr_t)(ws+4064) = p820; /*fcb */
	*(i8*)(intptr_t)(ws+4072) = p819; /*buffer */
	*(i8*)(intptr_t)(ws+4080) = p818; /*length */

c02_00b1:;

	i8 v821 = (i8)(intptr_t)(ws+4080);
	i8 v822 = *(i8*)(intptr_t)v821;
	i8 v823 = (i8)+0;
	if (v822==v823) goto c02_00b4; else goto c02_00b3;

c02_00b3:;

	i8 v824 = (i8)(intptr_t)(ws+4064);
	i8 v825 = *(i8*)(intptr_t)v824;
	i8 v826 = (i8)(intptr_t)(ws+4072);
	i8 v827 = *(i8*)(intptr_t)v826;
	i1 v828 = *(i1*)(intptr_t)v827;
	i8 v829 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v829)(v828, v825);

	i8 v830 = (i8)(intptr_t)(ws+4072);
	i8 v831 = *(i8*)(intptr_t)v830;
	i8 v832 = v831+(+1);
	i8 v833 = (i8)(intptr_t)(ws+4072);
	*(i8*)(intptr_t)v833 = v832;

	i8 v834 = (i8)(intptr_t)(ws+4080);
	i8 v835 = *(i8*)(intptr_t)v834;
	i8 v836 = v835+(-1);
	i8 v837 = (i8)(intptr_t)(ws+4080);
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

// StartError workspace at ws+4008 length ws+0
void f61_StartError(void) {

	i8 v849 = (i8)(intptr_t)c02_s0001;
	i8 v850 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v850)(v849);

endsub:;
}
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+4008 length ws+0
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

// InternalAlloc workspace at ws+3944 length ws+16
void f65_InternalAlloc(i8* p869 /* block */, i8 p870 /* length */) {
	*(i8*)(intptr_t)(ws+3944) = p870; /*length */

	i8 v871 = (i8)(intptr_t)(ws+3944);
	i8 v872 = *(i8*)(intptr_t)v871;
	i8 v873 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v874;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v873)(&v874, v872);
	i8 v875 = (i8)(intptr_t)(ws+3952);
	*(i8*)(intptr_t)v875 = v874;

	i8 v876 = (i8)(intptr_t)(ws+3952);
	i8 v877 = *(i8*)(intptr_t)v876;
	i8 v878 = (i8)+0;
	if (v877==v878) goto c02_00b8; else goto c02_00b9;

c02_00b8:;

	i8 v879 = (i8)(intptr_t)(f66_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v879)();

	i8 v880 = (i8)(intptr_t)(f67_PurgeAllFreeInstructions);

	((void(*)(void))(intptr_t)v880)();

	i8 v881 = (i8)(intptr_t)(ws+3944);
	i8 v882 = *(i8*)(intptr_t)v881;
	i8 v883 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v884;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v883)(&v884, v882);
	i8 v885 = (i8)(intptr_t)(ws+3952);
	*(i8*)(intptr_t)v885 = v884;

	i8 v886 = (i8)(intptr_t)(ws+3952);
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
	*p869 = *(i8*)(intptr_t)(ws+3952);
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

// GetInputParameter workspace at ws+4000 length ws+24
void f68_GetInputParameter(i8* p892 /* param */, i1 p893 /* count */, i8 p894 /* subr */) {
	*(i8*)(intptr_t)(ws+4000) = p894; /*subr */
	*(i1*)(intptr_t)(ws+4008) = p893; /*count */

	i8 v895 = (i8)+0;
	i8 v896 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v896 = v895;

	i8 v897 = (i8)(intptr_t)(ws+4000);
	i8 v898 = *(i8*)(intptr_t)v897;
	i8 v899 = v898+(+48);
	i1 v900 = *(i1*)(intptr_t)v899;
	i1 v901 = (i1)+0;
	if (v900==v901) goto c02_00c4; else goto c02_00c3;

c02_00c3:;

	i8 v902 = (i8)(intptr_t)(ws+4000);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+32);
	i8 v905 = *(i8*)(intptr_t)v904;
	i8 v906 = (i8)(intptr_t)(ws+4008);
	i1 v907 = *(i1*)(intptr_t)v906;
	i8 v908 = v907;
	i1 v909 = (i1)+3;
	i8 v910 = ((i8)v908)<<v909;
	i8 v911 = v905+v910;
	i8 v912 = *(i8*)(intptr_t)v911;
	i8 v913 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v913 = v912;

c02_00c4:;

c02_00c0:;

endsub:;
	*p892 = *(i8*)(intptr_t)(ws+4016);
}

// GetOutputParameter workspace at ws+4000 length ws+24
void f69_GetOutputParameter(i8* p914 /* param */, i1 p915 /* count */, i8 p916 /* subr */) {
	*(i8*)(intptr_t)(ws+4000) = p916; /*subr */
	*(i1*)(intptr_t)(ws+4008) = p915; /*count */

	i8 v917 = (i8)+0;
	i8 v918 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v918 = v917;

	i8 v919 = (i8)(intptr_t)(ws+4000);
	i8 v920 = *(i8*)(intptr_t)v919;
	i8 v921 = v920+(+49);
	i1 v922 = *(i1*)(intptr_t)v921;
	i1 v923 = (i1)+0;
	if (v922==v923) goto c02_00c9; else goto c02_00c8;

c02_00c8:;

	i8 v924 = (i8)(intptr_t)(ws+4000);
	i8 v925 = *(i8*)(intptr_t)v924;
	i8 v926 = v925+(+40);
	i8 v927 = *(i8*)(intptr_t)v926;
	i8 v928 = (i8)(intptr_t)(ws+4008);
	i1 v929 = *(i1*)(intptr_t)v928;
	i8 v930 = v929;
	i1 v931 = (i1)+3;
	i8 v932 = ((i8)v930)<<v931;
	i8 v933 = v927+v932;
	i8 v934 = *(i8*)(intptr_t)v933;
	i8 v935 = (i8)(intptr_t)(ws+4016);
	*(i8*)(intptr_t)v935 = v934;

c02_00c9:;

c02_00c5:;

endsub:;
	*p914 = *(i8*)(intptr_t)(ws+4016);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f65_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+3928 length ws+16
void f72_AllocateNewNode(i8* p969 /* m */, i1 p970 /* code */) {
	*(i1*)(intptr_t)(ws+3928) = p970; /*code */

	i8 v971 = (i8)(intptr_t)(ws+192);
	i8 v972 = *(i8*)(intptr_t)v971;
	i8 v973 = (i8)+0;
	if (v972==v973) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v974 = (i8)(intptr_t)(ws+192);
	i8 v975 = *(i8*)(intptr_t)v974;
	i8 v976 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v976 = v975;

	i8 v977 = (i8)(intptr_t)(ws+192);
	i8 v978 = *(i8*)(intptr_t)v977;
	i8 v979 = v978+(+24);
	i8 v980 = *(i8*)(intptr_t)v979;
	i8 v981 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v981 = v980;

	i8 v982 = (i8)(intptr_t)(ws+3936);
	i8 v983 = *(i8*)(intptr_t)v982;
	i1 v984 = (i1)+0;
	i8 v985 = (i8)+73;
	i8 v986 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v986)(v985, v984, v983);

	goto c02_00ce;

c02_00d2:;

	i8 v987 = (i8)+73;
	i8 v988 = (i8)(intptr_t)(f65_InternalAlloc);
	i8 v989;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v988)(&v989, v987);
	i8 v990 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v990 = v989;

c02_00ce:;

	i8 v991 = (i8)(intptr_t)(ws+3928);
	i1 v992 = *(i1*)(intptr_t)v991;
	i8 v993 = (i8)(intptr_t)(ws+3936);
	i8 v994 = *(i8*)(intptr_t)v993;
	i8 v995 = v994+(+72);
	*(i1*)(intptr_t)v995 = v992;

endsub:;
	*p969 = *(i8*)(intptr_t)(ws+3936);
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

// PurgeAllFreeNodes workspace at ws+3960 length ws+8
void f66_PurgeAllFreeNodes(void) {

c02_00d5:;

	i8 v1005 = (i8)(intptr_t)(ws+192);
	i8 v1006 = *(i8*)(intptr_t)v1005;
	i8 v1007 = (i8)+0;
	if (v1006==v1007) goto c02_00d8; else goto c02_00d7;

c02_00d7:;

	i8 v1008 = (i8)(intptr_t)(ws+192);
	i8 v1009 = *(i8*)(intptr_t)v1008;
	i8 v1010 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v1010 = v1009;

	i8 v1011 = (i8)(intptr_t)(ws+192);
	i8 v1012 = *(i8*)(intptr_t)v1011;
	i8 v1013 = v1012+(+24);
	i8 v1014 = *(i8*)(intptr_t)v1013;
	i8 v1015 = (i8)(intptr_t)(ws+192);
	*(i8*)(intptr_t)v1015 = v1014;

	i8 v1016 = (i8)(intptr_t)(ws+3960);
	i8 v1017 = *(i8*)(intptr_t)v1016;
	i8 v1018 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1018)(v1017);

	goto c02_00d5;

c02_00d8:;

endsub:;
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);

// WriteB8 workspace at ws+4072 length ws+1
void f75_WriteB8(i1 p1025 /* b */) {
	*(i1*)(intptr_t)(ws+4072) = p1025; /*b */

	i8 v1026 = (i8)(intptr_t)(ws+200);
	i8 v1027 = (i8)(intptr_t)(ws+4072);
	i1 v1028 = *(i1*)(intptr_t)v1027;
	i8 v1029 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1029)(v1028, v1026);

endsub:;
}
	void f75_WriteB8(i1 /* b */);
	void f75_WriteB8(i1 /* b */);

// WriteB16 workspace at ws+4064 length ws+2
void f76_WriteB16(i2 p1030 /* w */) {
	*(i2*)(intptr_t)(ws+4064) = p1030; /*w */

	i8 v1031 = (i8)(intptr_t)(ws+4064);
	i2 v1032 = *(i2*)(intptr_t)v1031;
	i1 v1033 = v1032;
	i8 v1034 = (i8)(intptr_t)(f75_WriteB8);

	((void(*)(i1 /* b */))(intptr_t)v1034)(v1033);

	i8 v1035 = (i8)(intptr_t)(ws+4064);
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

// FlushCurrentStream workspace at ws+4056 length ws+1
void f77_FlushCurrentStream(i1 p1041 /* close */) {
	*(i1*)(intptr_t)(ws+4056) = p1041; /*close */

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
	i8 v1050 = (i8)(intptr_t)(ws+4056);
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

// E_b8 workspace at ws+4048 length ws+1
void f78_E_b8(i1 p1066 /* byte */) {
	*(i1*)(intptr_t)(ws+4048) = p1066; /*byte */

	i8 v1067 = (i8)(intptr_t)(ws+2792);
	i8 v1068 = *(i8*)(intptr_t)v1067;
	i8 v1069 = (i8)+0;
	if (v1068==v1069) goto c02_00dd; else goto c02_00dc;

c02_00dc:;

	i8 v1070 = (i8)(intptr_t)(ws+4048);
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

// E_b16 workspace at ws+3984 length ws+2
void f79_E_b16(i2 p1086 /* word */) {
	*(i2*)(intptr_t)(ws+3984) = p1086; /*word */

	i8 v1087 = (i8)(intptr_t)(ws+3984);
	i2 v1088 = *(i2*)(intptr_t)v1087;
	i1 v1089 = v1088;
	i8 v1090 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1090)(v1089);

	i8 v1091 = (i8)(intptr_t)(ws+3984);
	i2 v1092 = *(i2*)(intptr_t)v1091;
	i1 v1093 = (i1)+8;
	i2 v1094 = ((i2)v1092)>>v1093;
	i1 v1095 = v1094;
	i8 v1096 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1096)(v1095);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E_space workspace at ws+3936 length ws+0
void f81_E_space(void) {

	i1 v1108 = (i1)+32;
	i8 v1109 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1109)(v1108);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E_comma workspace at ws+3960 length ws+0
void f82_E_comma(void) {

	i1 v1110 = (i1)+44;
	i8 v1111 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1111)(v1110);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E_tab workspace at ws+3936 length ws+0
void f83_E_tab(void) {

	i1 v1112 = (i1)+9;
	i8 v1113 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1113)(v1112);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E_nl workspace at ws+3936 length ws+0
void f84_E_nl(void) {

	i1 v1114 = (i1)+10;
	i8 v1115 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1115)(v1114);

endsub:;
}
	void f78_E_b8(i1 /* byte */);

// E workspace at ws+4024 length ws+9
void f87_E(i8 p1120 /* text */) {
	*(i8*)(intptr_t)(ws+4024) = p1120; /*text */

c02_00e3:;

	i8 v1121 = (i8)(intptr_t)(ws+4024);
	i8 v1122 = *(i8*)(intptr_t)v1121;
	i1 v1123 = *(i1*)(intptr_t)v1122;
	i8 v1124 = (i8)(intptr_t)(ws+4032);
	*(i1*)(intptr_t)v1124 = v1123;

	i8 v1125 = (i8)(intptr_t)(ws+4024);
	i8 v1126 = *(i8*)(intptr_t)v1125;
	i8 v1127 = v1126+(+1);
	i8 v1128 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v1128 = v1127;

	i8 v1129 = (i8)(intptr_t)(ws+4032);
	i1 v1130 = *(i1*)(intptr_t)v1129;
	i1 v1131 = (i1)+0;
	if (v1130==v1131) goto c02_00e8; else goto c02_00e9;

c02_00e8:;

	goto c02_00e4;

c02_00e9:;

c02_00e5:;

	i8 v1132 = (i8)(intptr_t)(ws+4032);
	i1 v1133 = *(i1*)(intptr_t)v1132;
	i8 v1134 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1134)(v1133);

	goto c02_00e3;

c02_00e4:;

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f78_E_b8(i1 /* byte */);

// E_u32 workspace at ws+4008 length ws+33
void f88_E_u32(i4 p1135 /* value */) {
	*(i4*)(intptr_t)(ws+4008) = p1135; /*value */

	i8 v1136 = (i8)(intptr_t)(ws+4012);
	i8 v1137 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v1137 = v1136;

	i8 v1138 = (i8)(intptr_t)(ws+4008);
	i4 v1139 = *(i4*)(intptr_t)v1138;
	i1 v1140 = (i1)+10;
	i8 v1141 = (i8)(intptr_t)(ws+4024);
	i8 v1142 = *(i8*)(intptr_t)v1141;
	i8 v1143 = (i8)(intptr_t)(f13_UIToA);
	i8 v1144;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1143)(&v1144, v1142, v1140, v1139);
	i8 v1145 = (i8)(intptr_t)(ws+4032);
	*(i8*)(intptr_t)v1145 = v1144;

c02_00ea:;

	i8 v1146 = (i8)(intptr_t)(ws+4024);
	i8 v1147 = *(i8*)(intptr_t)v1146;
	i1 v1148 = *(i1*)(intptr_t)v1147;
	i8 v1149 = (i8)(intptr_t)(ws+4040);
	*(i1*)(intptr_t)v1149 = v1148;

	i8 v1150 = (i8)(intptr_t)(ws+4040);
	i1 v1151 = *(i1*)(intptr_t)v1150;
	i1 v1152 = (i1)+0;
	if (v1151==v1152) goto c02_00ef; else goto c02_00f0;

c02_00ef:;

	goto c02_00eb;

c02_00f0:;

c02_00ec:;

	i8 v1153 = (i8)(intptr_t)(ws+4040);
	i1 v1154 = *(i1*)(intptr_t)v1153;
	i8 v1155 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1155)(v1154);

	i8 v1156 = (i8)(intptr_t)(ws+4024);
	i8 v1157 = *(i8*)(intptr_t)v1156;
	i8 v1158 = v1157+(+1);
	i8 v1159 = (i8)(intptr_t)(ws+4024);
	*(i8*)(intptr_t)v1159 = v1158;

	goto c02_00ea;

c02_00eb:;

endsub:;
}
	void f88_E_u32(i4 /* value */);

// E_u16 workspace at ws+3984 length ws+2
void f89_E_u16(i2 p1160 /* value */) {
	*(i2*)(intptr_t)(ws+3984) = p1160; /*value */

	i8 v1161 = (i8)(intptr_t)(ws+3984);
	i2 v1162 = *(i2*)(intptr_t)v1161;
	i4 v1163 = v1162;
	i8 v1164 = (i8)(intptr_t)(f88_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1164)(v1163);

endsub:;
}
	void f88_E_u32(i4 /* value */);

// E_u8 workspace at ws+4000 length ws+1
void f90_E_u8(i1 p1165 /* value */) {
	*(i1*)(intptr_t)(ws+4000) = p1165; /*value */

	i8 v1166 = (i8)(intptr_t)(ws+4000);
	i1 v1167 = *(i1*)(intptr_t)v1166;
	i4 v1168 = v1167;
	i8 v1169 = (i8)(intptr_t)(f88_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1169)(v1168);

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f89_E_u16(i2 /* value */);

// E_i16 workspace at ws+3976 length ws+2
void f92_E_i16(i2 p1185 /* value */) {
	*(i2*)(intptr_t)(ws+3976) = p1185; /*value */

	i8 v1186 = (i8)(intptr_t)(ws+3976);
	i2 v1187 = *(i2*)(intptr_t)v1186;
	i2 v1188 = (i2)+0;
	if ((s2)v1187<(s2)v1188) goto c02_00f9; else goto c02_00fa;

c02_00f9:;

	i1 v1189 = (i1)+45;
	i8 v1190 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1190)(v1189);

	i8 v1191 = (i8)(intptr_t)(ws+3976);
	i2 v1192 = *(i2*)(intptr_t)v1191;
	i2 v1193 = -v1192;
	i8 v1194 = (i8)(intptr_t)(ws+3976);
	*(i2*)(intptr_t)v1194 = v1193;

	goto c02_00f6;

c02_00fa:;

	i1 v1195 = (i1)+43;
	i8 v1196 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1196)(v1195);

c02_00f6:;

	i8 v1197 = (i8)(intptr_t)(ws+3976);
	i2 v1198 = *(i2*)(intptr_t)v1197;
	i8 v1199 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1199)(v1198);

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f88_E_u32(i4 /* value */);

// E_i32 workspace at ws+3960 length ws+4
void f93_E_i32(i4 p1200 /* value */) {
	*(i4*)(intptr_t)(ws+3960) = p1200; /*value */

	i8 v1201 = (i8)(intptr_t)(ws+3960);
	i4 v1202 = *(i4*)(intptr_t)v1201;
	i4 v1203 = (i4)+0;
	if ((s4)v1202<(s4)v1203) goto c02_00fe; else goto c02_00ff;

c02_00fe:;

	i1 v1204 = (i1)+45;
	i8 v1205 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1205)(v1204);

	i8 v1206 = (i8)(intptr_t)(ws+3960);
	i4 v1207 = *(i4*)(intptr_t)v1206;
	i4 v1208 = -v1207;
	i8 v1209 = (i8)(intptr_t)(ws+3960);
	*(i4*)(intptr_t)v1209 = v1208;

	goto c02_00fb;

c02_00ff:;

	i1 v1210 = (i1)+43;
	i8 v1211 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1211)(v1210);

c02_00fb:;

	i8 v1212 = (i8)(intptr_t)(ws+3960);
	i4 v1213 = *(i4*)(intptr_t)v1212;
	i8 v1214 = (i8)(intptr_t)(f88_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1214)(v1213);

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f78_E_b8(i1 /* byte */);
	void f87_E(i8 /* text */);

// E_h workspace at ws+3992 length ws+25
void f94_E_h(i1 p1215 /* width */, i4 p1216 /* value */) {
	*(i4*)(intptr_t)(ws+3992) = p1216; /*value */
	*(i1*)(intptr_t)(ws+3996) = p1215; /*width */

	i8 v1217 = (i8)(intptr_t)(ws+3992);
	i4 v1218 = *(i4*)(intptr_t)v1217;
	i1 v1219 = (i1)+16;
	i8 v1220 = (i8)(intptr_t)(ws+3997);
	i8 v1221 = (i8)(intptr_t)(f13_UIToA);
	i8 v1222;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1221)(&v1222, v1220, v1219, v1218);
	i8 v1223 = (i8)(intptr_t)(ws+4008);
	*(i8*)(intptr_t)v1223 = v1222;

	i8 v1224 = (i8)(intptr_t)(ws+3996);
	i1 v1225 = *(i1*)(intptr_t)v1224;
	i8 v1226 = (i8)(intptr_t)(ws+4008);
	i8 v1227 = *(i8*)(intptr_t)v1226;
	i8 v1228 = (i8)(intptr_t)(ws+3997);
	i8 v1229 = v1227-v1228;
	i1 v1230 = v1229;
	i1 v1231 = v1225-v1230;
	i8 v1232 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v1232 = v1231;

c02_0102:;

	i8 v1233 = (i8)(intptr_t)(ws+4016);
	i1 v1234 = *(i1*)(intptr_t)v1233;
	i1 v1235 = (i1)+0;
	if (v1234==v1235) goto c02_0105; else goto c02_0104;

c02_0104:;

	i1 v1236 = (i1)+48;
	i8 v1237 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1237)(v1236);

	i8 v1238 = (i8)(intptr_t)(ws+4016);
	i1 v1239 = *(i1*)(intptr_t)v1238;
	i1 v1240 = v1239+(-1);
	i8 v1241 = (i8)(intptr_t)(ws+4016);
	*(i1*)(intptr_t)v1241 = v1240;

	goto c02_0102;

c02_0105:;

	i8 v1242 = (i8)(intptr_t)(ws+3997);
	i8 v1243 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v1243)(v1242);

endsub:;
}
	void f94_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+3960 length ws+1
void f95_E_h8(i1 p1244 /* value */) {
	*(i1*)(intptr_t)(ws+3960) = p1244; /*value */

	i8 v1245 = (i8)(intptr_t)(ws+3960);
	i1 v1246 = *(i1*)(intptr_t)v1245;
	i4 v1247 = v1246;
	i1 v1248 = (i1)+2;
	i8 v1249 = (i8)(intptr_t)(f94_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1249)(v1248, v1247);

endsub:;
}
	void f94_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+3984 length ws+2
void f96_E_h16(i2 p1250 /* value */) {
	*(i2*)(intptr_t)(ws+3984) = p1250; /*value */

	i8 v1251 = (i8)(intptr_t)(ws+3984);
	i2 v1252 = *(i2*)(intptr_t)v1251;
	i4 v1253 = v1252;
	i1 v1254 = (i1)+4;
	i8 v1255 = (i8)(intptr_t)(f94_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1255)(v1254, v1253);

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f96_E_h16(i2 /* value */);

// E_labelref workspace at ws+3968 length ws+2
void f98_E_labelref(i2 p1261 /* labelid */) {
	*(i2*)(intptr_t)(ws+3968) = p1261; /*labelid */

	i1 v1262 = (i1)+3;
	i8 v1263 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1263)(v1262);

	i8 v1264 = (i8)(intptr_t)(ws+3968);
	i2 v1265 = *(i2*)(intptr_t)v1264;
	i8 v1266 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1266)(v1265);

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f79_E_b16(i2 /* word */);

// E_subref workspace at ws+3960 length ws+8
void f99_E_subref(i8 p1267 /* subr */) {
	*(i8*)(intptr_t)(ws+3960) = p1267; /*subr */

	i8 v1268 = (i8)(intptr_t)(ws+3960);
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

	i8 v1276 = (i8)(intptr_t)(ws+3960);
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

// E_wsref workspace at ws+3976 length ws+6
void f100_E_wsref(i2 p1281 /* off */, i1 p1282 /* wsid */, i2 p1283 /* id */) {
	*(i2*)(intptr_t)(ws+3976) = p1283; /*id */
	*(i1*)(intptr_t)(ws+3978) = p1282; /*wsid */
	*(i2*)(intptr_t)(ws+3980) = p1281; /*off */

	i8 v1284 = (i8)(intptr_t)(ws+3978);
	i1 v1285 = *(i1*)(intptr_t)v1284;
	i1 v1286 = (i1)+255;
	if (v1285==v1286) goto c02_010e; else goto c02_010f;

c02_010e:;

	i1 v1287 = (i1)+1;
	i8 v1288 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1288)(v1287);

	i8 v1289 = (i8)(intptr_t)(ws+3976);
	i2 v1290 = *(i2*)(intptr_t)v1289;
	i8 v1291 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1291)(v1290);

	i8 v1292 = (i8)(intptr_t)c02_s00c4;
	i8 v1293 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v1293)(v1292);

	i8 v1294 = (i8)(intptr_t)(ws+3980);
	i2 v1295 = *(i2*)(intptr_t)v1294;
	i8 v1296 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1296)(v1295);

	goto c02_010b;

c02_010f:;

	i1 v1297 = (i1)+2;
	i8 v1298 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1298)(v1297);

	i8 v1299 = (i8)(intptr_t)(ws+3976);
	i2 v1300 = *(i2*)(intptr_t)v1299;
	i8 v1301 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1301)(v1300);

	i8 v1302 = (i8)(intptr_t)(ws+3978);
	i1 v1303 = *(i1*)(intptr_t)v1302;
	i8 v1304 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1304)(v1303);

	i8 v1305 = (i8)(intptr_t)(ws+3980);
	i2 v1306 = *(i2*)(intptr_t)v1305;
	i8 v1307 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1307)(v1306);

c02_010b:;

endsub:;
}
	void f77_FlushCurrentStream(i1 /* close */);

// EmitterOpenStream workspace at ws+3960 length ws+8
void f101_EmitterOpenStream(i8 p1308 /* subr */) {
	*(i8*)(intptr_t)(ws+3960) = p1308; /*subr */

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

	i8 v1326 = (i8)(intptr_t)(ws+3960);
	i8 v1327 = *(i8*)(intptr_t)v1326;
	i8 v1328 = v1327+(+8);
	i2 v1329 = *(i2*)(intptr_t)v1328;
	i8 v1330 = (i8)(intptr_t)(ws+2792);
	i8 v1331 = *(i8*)(intptr_t)v1330;
	*(i2*)(intptr_t)v1331 = v1329;

endsub:;
}
	void f77_FlushCurrentStream(i1 /* close */);

// EmitterCloseStream workspace at ws+3960 length ws+0
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
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);

// ReadMid0 workspace at ws+3824 length ws+0
void f117_ReadMid0(i8 p1539 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1539; /*node */

	i8 v1540 = (i8)(intptr_t)(f111_I_b16);
	i2 v1541;

	((void(*)(i2* /* b */))(intptr_t)v1540)(&v1541);
	i8 v1542 = (i8)(intptr_t)(f60_FindSubr);
	i8 v1543;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1542)(&v1543, v1541);
	i8 v1544 = (i8)(intptr_t)(ws+3816);
	i8 v1545 = *(i8*)(intptr_t)v1544;
	*(i8*)(intptr_t)v1545 = v1543;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f113_I_bsize(i2* /* s */);
	void f110_I_b8(i1* /* b */);

// ReadMid1 workspace at ws+3824 length ws+0
void f118_ReadMid1(i8 p1546 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1546; /*node */

	i8 v1547 = (i8)(intptr_t)(f111_I_b16);
	i2 v1548;

	((void(*)(i2* /* b */))(intptr_t)v1547)(&v1548);
	i8 v1549 = (i8)(intptr_t)(f60_FindSubr);
	i8 v1550;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1549)(&v1550, v1548);
	i8 v1551 = (i8)(intptr_t)(ws+3816);
	i8 v1552 = *(i8*)(intptr_t)v1551;
	*(i8*)(intptr_t)v1552 = v1550;

	i8 v1553 = (i8)(intptr_t)(f110_I_b8);
	i1 v1554;

	((void(*)(i1* /* b */))(intptr_t)v1553)(&v1554);
	i8 v1555 = (i8)(intptr_t)(ws+3816);
	i8 v1556 = *(i8*)(intptr_t)v1555;
	i8 v1557 = v1556+(+10);
	*(i1*)(intptr_t)v1557 = v1554;

	i8 v1558 = (i8)(intptr_t)(f113_I_bsize);
	i2 v1559;

	((void(*)(i2* /* s */))(intptr_t)v1558)(&v1559);
	i8 v1560 = (i8)(intptr_t)(ws+3816);
	i8 v1561 = *(i8*)(intptr_t)v1560;
	i8 v1562 = v1561+(+12);
	*(i2*)(intptr_t)v1562 = v1559;

	i8 v1563 = (i8)(intptr_t)(f110_I_b8);
	i1 v1564;

	((void(*)(i1* /* b */))(intptr_t)v1563)(&v1564);
	i8 v1565 = (i8)(intptr_t)(ws+3816);
	i8 v1566 = *(i8*)(intptr_t)v1565;
	i8 v1567 = v1566+(+14);
	*(i1*)(intptr_t)v1567 = v1564;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f111_I_b16(i2* /* b */);
	void f111_I_b16(i2* /* b */);
	void f110_I_b8(i1* /* b */);

// ReadMid2 workspace at ws+3824 length ws+0
void f119_ReadMid2(i8 p1568 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1568; /*node */

	i8 v1569 = (i8)(intptr_t)(f111_I_b16);
	i2 v1570;

	((void(*)(i2* /* b */))(intptr_t)v1569)(&v1570);
	i8 v1571 = (i8)(intptr_t)(ws+3816);
	i8 v1572 = *(i8*)(intptr_t)v1571;
	*(i2*)(intptr_t)v1572 = v1570;

	i8 v1573 = (i8)(intptr_t)(f111_I_b16);
	i2 v1574;

	((void(*)(i2* /* b */))(intptr_t)v1573)(&v1574);
	i8 v1575 = (i8)(intptr_t)(ws+3816);
	i8 v1576 = *(i8*)(intptr_t)v1575;
	i8 v1577 = v1576+(+2);
	*(i2*)(intptr_t)v1577 = v1574;

	i8 v1578 = (i8)(intptr_t)(f111_I_b16);
	i2 v1579;

	((void(*)(i2* /* b */))(intptr_t)v1578)(&v1579);
	i8 v1580 = (i8)(intptr_t)(ws+3816);
	i8 v1581 = *(i8*)(intptr_t)v1580;
	i8 v1582 = v1581+(+4);
	*(i2*)(intptr_t)v1582 = v1579;

	i8 v1583 = (i8)(intptr_t)(f110_I_b8);
	i1 v1584;

	((void(*)(i1* /* b */))(intptr_t)v1583)(&v1584);
	i8 v1585 = (i8)(intptr_t)(ws+3816);
	i8 v1586 = *(i8*)(intptr_t)v1585;
	i8 v1587 = v1586+(+6);
	*(i1*)(intptr_t)v1587 = v1584;

endsub:;
}
	void f112_I_b32(i4* /* b */);
	void f111_I_b16(i2* /* b */);

// ReadMid3 workspace at ws+3824 length ws+0
void f120_ReadMid3(i8 p1588 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1588; /*node */

	i8 v1589 = (i8)(intptr_t)(f112_I_b32);
	i4 v1590;

	((void(*)(i4* /* b */))(intptr_t)v1589)(&v1590);
	i8 v1591 = (i8)(intptr_t)(ws+3816);
	i8 v1592 = *(i8*)(intptr_t)v1591;
	*(i4*)(intptr_t)v1592 = v1590;

	i8 v1593 = (i8)(intptr_t)(f111_I_b16);
	i2 v1594;

	((void(*)(i2* /* b */))(intptr_t)v1593)(&v1594);
	i8 v1595 = (i8)(intptr_t)(ws+3816);
	i8 v1596 = *(i8*)(intptr_t)v1595;
	i8 v1597 = v1596+(+4);
	*(i2*)(intptr_t)v1597 = v1594;

endsub:;
}
	void f111_I_b16(i2* /* b */);

// ReadMid4 workspace at ws+3824 length ws+0
void f121_ReadMid4(i8 p1598 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1598; /*node */

	i8 v1599 = (i8)(intptr_t)(f111_I_b16);
	i2 v1600;

	((void(*)(i2* /* b */))(intptr_t)v1599)(&v1600);
	i8 v1601 = (i8)(intptr_t)(ws+3816);
	i8 v1602 = *(i8*)(intptr_t)v1601;
	*(i2*)(intptr_t)v1602 = v1600;

endsub:;
}
	void f112_I_b32(i4* /* b */);

// ReadMid5 workspace at ws+3824 length ws+0
void f122_ReadMid5(i8 p1603 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1603; /*node */

	i8 v1604 = (i8)(intptr_t)(f112_I_b32);
	i4 v1605;

	((void(*)(i4* /* b */))(intptr_t)v1604)(&v1605);
	i8 v1606 = (i8)(intptr_t)(ws+3816);
	i8 v1607 = *(i8*)(intptr_t)v1606;
	*(i4*)(intptr_t)v1607 = v1605;

endsub:;
}

// ReadMid6 workspace at ws+3824 length ws+0
void f123_ReadMid6(i8 p1608 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1608; /*node */

endsub:;
}
	void f114_I_countedstring(i8* /* s */);

// ReadMid7 workspace at ws+3824 length ws+0
void f124_ReadMid7(i8 p1609 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1609; /*node */

	i8 v1610 = (i8)(intptr_t)(f114_I_countedstring);
	i8 v1611;

	((void(*)(i8* /* s */))(intptr_t)v1610)(&v1611);
	i8 v1612 = (i8)(intptr_t)(ws+3816);
	i8 v1613 = *(i8*)(intptr_t)v1612;
	*(i8*)(intptr_t)v1613 = v1611;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f113_I_bsize(i2* /* s */);
	void f110_I_b8(i1* /* b */);
	void f113_I_bsize(i2* /* s */);

// ReadMid8 workspace at ws+3824 length ws+0
void f125_ReadMid8(i8 p1614 /* node */) {
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
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);

// ReadMid9 workspace at ws+3824 length ws+0
void f126_ReadMid9(i8 p1641 /* node */) {
	*(i8*)(intptr_t)(ws+3816) = p1641; /*node */

	i8 v1642 = (i8)(intptr_t)(f111_I_b16);
	i2 v1643;

	((void(*)(i2* /* b */))(intptr_t)v1642)(&v1643);
	i8 v1644 = (i8)(intptr_t)(f60_FindSubr);
	i8 v1645;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v1644)(&v1645, v1643);
	i8 v1646 = (i8)(intptr_t)(ws+3816);
	i8 v1647 = *(i8*)(intptr_t)v1646;
	*(i8*)(intptr_t)v1647 = v1645;

	i8 v1648 = (i8)(intptr_t)(f110_I_b8);
	i1 v1649;

	((void(*)(i1* /* b */))(intptr_t)v1648)(&v1649);
	i8 v1650 = (i8)(intptr_t)(ws+3816);
	i8 v1651 = *(i8*)(intptr_t)v1650;
	i8 v1652 = v1651+(+8);
	*(i1*)(intptr_t)v1652 = v1649;

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








	{ .i1 = { 0x06,0x06,0x06,0x00,0x00,0x01,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x07,0x08,0x00,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x07,0x01,0x00,0x05,0x06,0x06}},








	{ .i1 = { 0x06,0x04,0x04,0x06,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x09,0x09,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x09,0x09,0x05,0x07,0x08,0x00}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x06,0x06}},








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
void f138_AllocSubrId(i2* p2078 /* id */) {

	i8 v2079 = (i8)(intptr_t)(ws+50);
	i2 v2080 = *(i2*)(intptr_t)v2079;
	i8 v2081 = (i8)(intptr_t)(ws+3800);
	*(i2*)(intptr_t)v2081 = v2080;

	i8 v2082 = (i8)(intptr_t)(ws+50);
	i2 v2083 = *(i2*)(intptr_t)v2082;
	i2 v2084 = v2083+(+1);
	i8 v2085 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v2085 = v2084;

endsub:;
	*p2078 = *(i2*)(intptr_t)(ws+3800);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f65_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewInstruction workspace at ws+3840 length ws+8
void f139_AllocNewInstruction(i8* p2088 /* insn */) {

	i8 v2089 = (i8)(intptr_t)(ws+3448);
	i8 v2090 = *(i8*)(intptr_t)v2089;
	i8 v2091 = (i8)+0;
	if (v2090==v2091) goto c02_01ca; else goto c02_01c9;

c02_01c9:;

	i8 v2092 = (i8)(intptr_t)(ws+3448);
	i8 v2093 = *(i8*)(intptr_t)v2092;
	i8 v2094 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v2094 = v2093;

	i8 v2095 = (i8)(intptr_t)(ws+3448);
	i8 v2096 = *(i8*)(intptr_t)v2095;
	i8 v2097 = *(i8*)(intptr_t)v2096;
	i8 v2098 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2098 = v2097;

	i8 v2099 = (i8)(intptr_t)(ws+3840);
	i8 v2100 = *(i8*)(intptr_t)v2099;
	i1 v2101 = (i1)+0;
	i8 v2102 = (i8)+63;
	i8 v2103 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v2103)(v2102, v2101, v2100);

	goto c02_01c6;

c02_01ca:;

	i8 v2104 = (i8)+63;
	i8 v2105 = (i8)(intptr_t)(f65_InternalAlloc);
	i8 v2106;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v2105)(&v2106, v2104);
	i8 v2107 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v2107 = v2106;

c02_01c6:;

endsub:;
	*p2088 = *(i8*)(intptr_t)(ws+3840);
}

// FreeInstruction workspace at ws+3848 length ws+8
void f140_FreeInstruction(i8 p2108 /* insn */) {
	*(i8*)(intptr_t)(ws+3848) = p2108; /*insn */

	i8 v2109 = (i8)(intptr_t)(ws+3448);
	i8 v2110 = *(i8*)(intptr_t)v2109;
	i8 v2111 = (i8)(intptr_t)(ws+3848);
	i8 v2112 = *(i8*)(intptr_t)v2111;
	*(i8*)(intptr_t)v2112 = v2110;

	i8 v2113 = (i8)(intptr_t)(ws+3848);
	i8 v2114 = *(i8*)(intptr_t)v2113;
	i8 v2115 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2115 = v2114;

endsub:;
}
	void f33_Free(i8 /* block */);

// PurgeAllFreeInstructions workspace at ws+3960 length ws+8
void f67_PurgeAllFreeInstructions(void) {

c02_01cd:;

	i8 v2116 = (i8)(intptr_t)(ws+3448);
	i8 v2117 = *(i8*)(intptr_t)v2116;
	i8 v2118 = (i8)+0;
	if (v2117==v2118) goto c02_01d0; else goto c02_01cf;

c02_01cf:;

	i8 v2119 = (i8)(intptr_t)(ws+3448);
	i8 v2120 = *(i8*)(intptr_t)v2119;
	i8 v2121 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v2121 = v2120;

	i8 v2122 = (i8)(intptr_t)(ws+3448);
	i8 v2123 = *(i8*)(intptr_t)v2122;
	i8 v2124 = *(i8*)(intptr_t)v2123;
	i8 v2125 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2125 = v2124;

	i8 v2126 = (i8)(intptr_t)(ws+3960);
	i8 v2127 = *(i8*)(intptr_t)v2126;
	i8 v2128 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v2128)(v2127);

	goto c02_01cd;

c02_01d0:;

endsub:;
}

// FindConflictingRegisters workspace at ws+3864 length ws+16
void f141_FindConflictingRegisters(i1* p2129 /* conflicting */, i1 p2130 /* inreg */) {
	*(i1*)(intptr_t)(ws+3864) = p2130; /*inreg */

	i1 v2131 = (i1)+0;
	i8 v2132 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2132 = v2131;

	i8 v2133 = (i8)(intptr_t)((i1*)f3___main_s00bf);
	i8 v2134 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v2134 = v2133;

c02_01d3:;

	i8 v2135 = (i8)(intptr_t)(ws+3872);
	i8 v2136 = *(i8*)(intptr_t)v2135;
	i8 v2137 = (i8)(intptr_t)((i1*)f3___main_s00bf+80);
	if (v2136==v2137) goto c02_01d6; else goto c02_01d5;

c02_01d5:;

	i8 v2138 = (i8)(intptr_t)(ws+3872);
	i8 v2139 = *(i8*)(intptr_t)v2138;
	i8 v2140 = v2139+(+8);
	i1 v2141 = *(i1*)(intptr_t)v2140;
	i8 v2142 = (i8)(intptr_t)(ws+3864);
	i1 v2143 = *(i1*)(intptr_t)v2142;
	i1 v2144 = v2141&v2143;
	i1 v2145 = (i1)+0;
	if (v2144==v2145) goto c02_01db; else goto c02_01da;

c02_01da:;

	i8 v2146 = (i8)(intptr_t)(ws+3865);
	i1 v2147 = *(i1*)(intptr_t)v2146;
	i8 v2148 = (i8)(intptr_t)(ws+3872);
	i8 v2149 = *(i8*)(intptr_t)v2148;
	i8 v2150 = v2149+(+9);
	i1 v2151 = *(i1*)(intptr_t)v2150;
	i1 v2152 = v2147|v2151;
	i8 v2153 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2153 = v2152;

c02_01db:;

c02_01d7:;

	i8 v2154 = (i8)(intptr_t)(ws+3872);
	i8 v2155 = *(i8*)(intptr_t)v2154;
	i8 v2156 = v2155+(+16);
	i8 v2157 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v2157 = v2156;

	goto c02_01d3;

c02_01d6:;

endsub:;
	*p2129 = *(i1*)(intptr_t)(ws+3865);
}

// FindCompatibleRegisters workspace at ws+3864 length ws+16
void f142_FindCompatibleRegisters(i1* p2158 /* compatible */, i1 p2159 /* inreg */) {
	*(i1*)(intptr_t)(ws+3864) = p2159; /*inreg */

	i1 v2160 = (i1)-1;
	i8 v2161 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2161 = v2160;

	i8 v2162 = (i8)(intptr_t)((i1*)f3___main_s00bf);
	i8 v2163 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v2163 = v2162;

c02_01de:;

	i8 v2164 = (i8)(intptr_t)(ws+3872);
	i8 v2165 = *(i8*)(intptr_t)v2164;
	i8 v2166 = (i8)(intptr_t)((i1*)f3___main_s00bf+80);
	if (v2165==v2166) goto c02_01e1; else goto c02_01e0;

c02_01e0:;

	i8 v2167 = (i8)(intptr_t)(ws+3872);
	i8 v2168 = *(i8*)(intptr_t)v2167;
	i8 v2169 = v2168+(+8);
	i1 v2170 = *(i1*)(intptr_t)v2169;
	i8 v2171 = (i8)(intptr_t)(ws+3864);
	i1 v2172 = *(i1*)(intptr_t)v2171;
	i1 v2173 = v2170&v2172;
	i1 v2174 = (i1)+0;
	if (v2173==v2174) goto c02_01e6; else goto c02_01e5;

c02_01e5:;

	i8 v2175 = (i8)(intptr_t)(ws+3865);
	i1 v2176 = *(i1*)(intptr_t)v2175;
	i8 v2177 = (i8)(intptr_t)(ws+3872);
	i8 v2178 = *(i8*)(intptr_t)v2177;
	i8 v2179 = v2178+(+10);
	i1 v2180 = *(i1*)(intptr_t)v2179;
	i1 v2181 = v2176&v2180;
	i8 v2182 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2182 = v2181;

c02_01e6:;

c02_01e2:;

	i8 v2183 = (i8)(intptr_t)(ws+3872);
	i8 v2184 = *(i8*)(intptr_t)v2183;
	i8 v2185 = v2184+(+16);
	i8 v2186 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v2186 = v2185;

	goto c02_01de;

c02_01e1:;

endsub:;
	*p2158 = *(i1*)(intptr_t)(ws+3865);
}

// FindFirst workspace at ws+3864 length ws+2
void f143_FindFirst(i1* p2187 /* outreg */, i1 p2188 /* inreg */) {
	*(i1*)(intptr_t)(ws+3864) = p2188; /*inreg */

	i1 v2189 = (i1)+1;
	i8 v2190 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2190 = v2189;

c02_01e9:;

	i8 v2191 = (i8)(intptr_t)(ws+3865);
	i1 v2192 = *(i1*)(intptr_t)v2191;
	i1 v2193 = (i1)+0;
	if (v2192==v2193) goto c02_01ec; else goto c02_01eb;

c02_01eb:;

	i8 v2194 = (i8)(intptr_t)(ws+3864);
	i1 v2195 = *(i1*)(intptr_t)v2194;
	i8 v2196 = (i8)(intptr_t)(ws+3865);
	i1 v2197 = *(i1*)(intptr_t)v2196;
	i1 v2198 = v2195&v2197;
	i1 v2199 = (i1)+0;
	if (v2198==v2199) goto c02_01f1; else goto c02_01f0;

c02_01f0:;

	goto endsub;

c02_01f1:;

c02_01ed:;

	i8 v2200 = (i8)(intptr_t)(ws+3865);
	i1 v2201 = *(i1*)(intptr_t)v2200;
	i1 v2202 = (i1)+1;
	i1 v2203 = ((i1)v2201)<<v2202;
	i8 v2204 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2204 = v2203;

	goto c02_01e9;

c02_01ec:;

	i1 v2205 = (i1)+0;
	i8 v2206 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v2206 = v2205;

endsub:;
	*p2187 = *(i1*)(intptr_t)(ws+3865);
}
const i1 c02_s00c7[] = { 0x28,0 };
	void f87_E(i8 /* text */);
const i1 c02_s00c8[] = { 0x2c,0x20,0 };
	void f87_E(i8 /* text */);

// comma workspace at ws+4000 length ws+0
void f146_comma(void) {

	i8 v2232 = (i8)(intptr_t)(ws+3984);
	i1 v2233 = *(i1*)(intptr_t)v2232;
	i1 v2234 = (i1)+0;
	if (v2233==v2234) goto c02_01f5; else goto c02_01f6;

c02_01f5:;

	i8 v2235 = (i8)(intptr_t)c02_s00c8;
	i8 v2236 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2236)(v2235);

c02_01f6:;

c02_01f2:;

	i1 v2237 = (i1)+0;
	i8 v2238 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v2238 = v2237;

endsub:;
}
	void f69_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f146_comma(void);
const i1 c02_s00c9[] = { 0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s00ca[] = { 0x2a,0x20,0x2f,0x2a,0x20,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s00cb[] = { 0x20,0x2a,0x2f,0 };
	void f87_E(i8 /* text */);
	void f68_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f146_comma(void);
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

// EmitFunctionSignature workspace at ws+3976 length ws+24
void f145_EmitFunctionSignature(i8 p2227 /* subr */) {
	*(i8*)(intptr_t)(ws+3976) = p2227; /*subr */

	i8 v2228 = (i8)(intptr_t)c02_s00c7;
	i8 v2229 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2229)(v2228);

	i1 v2230 = (i1)+1;
	i8 v2231 = (i8)(intptr_t)(ws+3984);
	*(i1*)(intptr_t)v2231 = v2230;


	i1 v2239 = (i1)+0;
	i8 v2240 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v2240 = v2239;

c02_01f9:;

	i8 v2241 = (i8)(intptr_t)(ws+3985);
	i1 v2242 = *(i1*)(intptr_t)v2241;
	i8 v2243 = (i8)(intptr_t)(ws+3976);
	i8 v2244 = *(i8*)(intptr_t)v2243;
	i8 v2245 = v2244+(+49);
	i1 v2246 = *(i1*)(intptr_t)v2245;
	if (v2242==v2246) goto c02_01fc; else goto c02_01fb;

c02_01fb:;

	i8 v2247 = (i8)(intptr_t)(ws+3976);
	i8 v2248 = *(i8*)(intptr_t)v2247;
	i8 v2249 = (i8)(intptr_t)(ws+3985);
	i1 v2250 = *(i1*)(intptr_t)v2249;
	i8 v2251 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v2252;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2251)(&v2252, v2250, v2248);
	i8 v2253 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v2253 = v2252;

	i8 v2254 = (i8)(intptr_t)(f146_comma);

	((void(*)(void))(intptr_t)v2254)();

	i8 v2255 = (i8)(intptr_t)c02_s00c9;
	i8 v2256 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2256)(v2255);

	i8 v2257 = (i8)(intptr_t)(ws+3992);
	i8 v2258 = *(i8*)(intptr_t)v2257;
	i8 v2259 = v2258+(+14);
	i1 v2260 = *(i1*)(intptr_t)v2259;
	i8 v2261 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2261)(v2260);

	i8 v2262 = (i8)(intptr_t)c02_s00ca;
	i8 v2263 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2263)(v2262);

	i8 v2264 = (i8)(intptr_t)(ws+3992);
	i8 v2265 = *(i8*)(intptr_t)v2264;
	i8 v2266 = v2265+(+16);
	i8 v2267 = *(i8*)(intptr_t)v2266;
	i8 v2268 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2268)(v2267);

	i8 v2269 = (i8)(intptr_t)c02_s00cb;
	i8 v2270 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2270)(v2269);

	i8 v2271 = (i8)(intptr_t)(ws+3985);
	i1 v2272 = *(i1*)(intptr_t)v2271;
	i1 v2273 = v2272+(+1);
	i8 v2274 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v2274 = v2273;

	goto c02_01f9;

c02_01fc:;

	i8 v2275 = (i8)(intptr_t)(ws+3976);
	i8 v2276 = *(i8*)(intptr_t)v2275;
	i8 v2277 = v2276+(+48);
	i1 v2278 = *(i1*)(intptr_t)v2277;
	i8 v2279 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v2279 = v2278;

c02_01ff:;

	i8 v2280 = (i8)(intptr_t)(ws+3985);
	i1 v2281 = *(i1*)(intptr_t)v2280;
	i1 v2282 = (i1)+0;
	if (v2281==v2282) goto c02_0202; else goto c02_0201;

c02_0201:;

	i8 v2283 = (i8)(intptr_t)(ws+3985);
	i1 v2284 = *(i1*)(intptr_t)v2283;
	i1 v2285 = v2284+(-1);
	i8 v2286 = (i8)(intptr_t)(ws+3985);
	*(i1*)(intptr_t)v2286 = v2285;

	i8 v2287 = (i8)(intptr_t)(ws+3976);
	i8 v2288 = *(i8*)(intptr_t)v2287;
	i8 v2289 = (i8)(intptr_t)(ws+3985);
	i1 v2290 = *(i1*)(intptr_t)v2289;
	i8 v2291 = (i8)(intptr_t)(f68_GetInputParameter);
	i8 v2292;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2291)(&v2292, v2290, v2288);
	i8 v2293 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v2293 = v2292;

	i8 v2294 = (i8)(intptr_t)(f146_comma);

	((void(*)(void))(intptr_t)v2294)();

	i8 v2295 = (i8)(intptr_t)c02_s00cc;
	i8 v2296 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2296)(v2295);

	i8 v2297 = (i8)(intptr_t)(ws+3992);
	i8 v2298 = *(i8*)(intptr_t)v2297;
	i8 v2299 = v2298+(+14);
	i1 v2300 = *(i1*)(intptr_t)v2299;
	i8 v2301 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2301)(v2300);

	i8 v2302 = (i8)(intptr_t)c02_s00cd;
	i8 v2303 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2303)(v2302);

	i8 v2304 = (i8)(intptr_t)(ws+3992);
	i8 v2305 = *(i8*)(intptr_t)v2304;
	i8 v2306 = v2305+(+16);
	i8 v2307 = *(i8*)(intptr_t)v2306;
	i8 v2308 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2308)(v2307);

	i8 v2309 = (i8)(intptr_t)c02_s00ce;
	i8 v2310 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2310)(v2309);

	goto c02_01ff;

c02_0202:;

	i8 v2311 = (i8)(intptr_t)(ws+3976);
	i8 v2312 = *(i8*)(intptr_t)v2311;
	i8 v2313 = v2312+(+48);
	i1 v2314 = *(i1*)(intptr_t)v2313;
	i8 v2315 = (i8)(intptr_t)(ws+3976);
	i8 v2316 = *(i8*)(intptr_t)v2315;
	i8 v2317 = v2316+(+49);
	i1 v2318 = *(i1*)(intptr_t)v2317;
	i1 v2319 = v2314+v2318;
	i1 v2320 = (i1)+0;
	if (v2319==v2320) goto c02_0206; else goto c02_0207;

c02_0206:;

	i8 v2321 = (i8)(intptr_t)c02_s00cf;
	i8 v2322 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2322)(v2321);

c02_0207:;

c02_0203:;

	i8 v2323 = (i8)(intptr_t)c02_s00d0;
	i8 v2324 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2324)(v2323);

endsub:;
}
	void f101_EmitterOpenStream(i8 /* subr */);
const i1 c02_s00d1[] = { 0x09,0x76,0x6f,0x69,0x64,0x20,0 };
	void f87_E(i8 /* text */);
	void f99_E_subref(i8 /* subr */);
	void f145_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s00d2[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f102_EmitterCloseStream(void);
	void f99_E_subref(i8 /* subr */);

// E_subref_sig workspace at ws+3944 length ws+8
void f147_E_subref_sig(i8 p2325 /* subr */) {
	*(i8*)(intptr_t)(ws+3944) = p2325; /*subr */

	i8 v2326 = (i8)(intptr_t)(ws+40);
	i8 v2327 = *(i8*)(intptr_t)v2326;
	i8 v2328 = (i8)(intptr_t)(f101_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v2328)(v2327);

	i8 v2329 = (i8)(intptr_t)c02_s00d1;
	i8 v2330 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2330)(v2329);

	i8 v2331 = (i8)(intptr_t)(ws+3944);
	i8 v2332 = *(i8*)(intptr_t)v2331;
	i8 v2333 = (i8)(intptr_t)(f99_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v2333)(v2332);

	i8 v2334 = (i8)(intptr_t)(ws+3944);
	i8 v2335 = *(i8*)(intptr_t)v2334;
	i8 v2336 = (i8)(intptr_t)(f145_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v2336)(v2335);

	i8 v2337 = (i8)(intptr_t)c02_s00d2;
	i8 v2338 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2338)(v2337);

	i8 v2339 = (i8)(intptr_t)(f102_EmitterCloseStream);

	((void(*)(void))(intptr_t)v2339)();

	i8 v2340 = (i8)(intptr_t)(ws+3944);
	i8 v2341 = *(i8*)(intptr_t)v2340;
	i8 v2342 = (i8)(intptr_t)(f99_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v2342)(v2341);

endsub:;
}
const i1 c02_s00d3[] = { 0x28,0x69,0x31,0x2a,0x29,0 };
	void f87_E(i8 /* text */);
	void f100_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);
	void f92_E_i16(i2 /* value */);
	void f100_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);

// E_symref workspace at ws+3960 length ws+10
void f148_E_symref(i2 p2343 /* off */, i8 p2344 /* sym */) {
	*(i8*)(intptr_t)(ws+3960) = p2344; /*sym */
	*(i2*)(intptr_t)(ws+3968) = p2343; /*off */

	i8 v2345 = (i8)(intptr_t)(ws+3960);
	i8 v2346 = *(i8*)(intptr_t)v2345;
	i8 v2347 = v2346+(+10);
	i1 v2348 = *(i1*)(intptr_t)v2347;
	i1 v2349 = (i1)+255;
	if (v2348==v2349) goto c02_020b; else goto c02_020c;

c02_020b:;

	i8 v2350 = (i8)(intptr_t)c02_s00d3;
	i8 v2351 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2351)(v2350);

	i8 v2352 = (i8)(intptr_t)(ws+3960);
	i8 v2353 = *(i8*)(intptr_t)v2352;
	i8 v2354 = *(i8*)(intptr_t)v2353;
	i8 v2355 = v2354+(+8);
	i2 v2356 = *(i2*)(intptr_t)v2355;
	i8 v2357 = (i8)(intptr_t)(ws+3960);
	i8 v2358 = *(i8*)(intptr_t)v2357;
	i8 v2359 = v2358+(+10);
	i1 v2360 = *(i1*)(intptr_t)v2359;
	i8 v2361 = (i8)(intptr_t)(ws+3960);
	i8 v2362 = *(i8*)(intptr_t)v2361;
	i8 v2363 = v2362+(+12);
	i2 v2364 = *(i2*)(intptr_t)v2363;
	i8 v2365 = (i8)(intptr_t)(f100_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v2365)(v2364, v2360, v2356);

	i8 v2366 = (i8)(intptr_t)(ws+3968);
	i2 v2367 = *(i2*)(intptr_t)v2366;
	i2 v2368 = (i2)+0;
	if (v2367==v2368) goto c02_0211; else goto c02_0210;

c02_0210:;

	i8 v2369 = (i8)(intptr_t)(ws+3968);
	i2 v2370 = *(i2*)(intptr_t)v2369;
	i8 v2371 = (i8)(intptr_t)(f92_E_i16);

	((void(*)(i2 /* value */))(intptr_t)v2371)(v2370);

c02_0211:;

c02_020d:;

	goto c02_0208;

c02_020c:;

	i8 v2372 = (i8)(intptr_t)(ws+3960);
	i8 v2373 = *(i8*)(intptr_t)v2372;
	i8 v2374 = *(i8*)(intptr_t)v2373;
	i8 v2375 = v2374+(+8);
	i2 v2376 = *(i2*)(intptr_t)v2375;
	i8 v2377 = (i8)(intptr_t)(ws+3960);
	i8 v2378 = *(i8*)(intptr_t)v2377;
	i8 v2379 = v2378+(+10);
	i1 v2380 = *(i1*)(intptr_t)v2379;
	i8 v2381 = (i8)(intptr_t)(ws+3960);
	i8 v2382 = *(i8*)(intptr_t)v2381;
	i8 v2383 = v2382+(+12);
	i2 v2384 = *(i2*)(intptr_t)v2383;
	i8 v2385 = (i8)(intptr_t)(ws+3968);
	i2 v2386 = *(i2*)(intptr_t)v2385;
	i2 v2387 = v2384+v2386;
	i8 v2388 = (i8)(intptr_t)(f100_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v2388)(v2387, v2380, v2376);

c02_0208:;

endsub:;
}

// ArchEndInstruction workspace at ws+3848 length ws+0
void f149_ArchEndInstruction(void) {

endsub:;
}
	void f84_E_nl(void);

// ArchEndGroup workspace at ws+3840 length ws+0
void f150_ArchEndGroup(void) {

	i8 v2389 = (i8)(intptr_t)(f84_E_nl);

	((void(*)(void))(intptr_t)v2389)();

endsub:;
}
const i1 c02_s00d4[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f63_SimpleError(i8 /* s */);

// PushVid workspace at ws+3976 length ws+2
void f151_PushVid(i2 p2390 /* vid */) {
	*(i2*)(intptr_t)(ws+3976) = p2390; /*vid */

	i8 v2391 = (i8)(intptr_t)(ws+3584);
	i1 v2392 = *(i1*)(intptr_t)v2391;
	i1 v2393 = (i1)+64;
	if (v2392==v2393) goto c02_0215; else goto c02_0216;

c02_0215:;

	i8 v2394 = (i8)(intptr_t)c02_s00d4;
	i8 v2395 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2395)(v2394);

c02_0216:;

c02_0212:;

	i8 v2396 = (i8)(intptr_t)(ws+3976);
	i2 v2397 = *(i2*)(intptr_t)v2396;
	i8 v2398 = (i8)(intptr_t)(ws+3456);
	i8 v2399 = (i8)(intptr_t)(ws+3584);
	i1 v2400 = *(i1*)(intptr_t)v2399;
	i8 v2401 = v2400;
	i1 v2402 = (i1)+1;
	i8 v2403 = ((i8)v2401)<<v2402;
	i8 v2404 = v2398+v2403;
	*(i2*)(intptr_t)v2404 = v2397;

	i8 v2405 = (i8)(intptr_t)(ws+3584);
	i1 v2406 = *(i1*)(intptr_t)v2405;
	i1 v2407 = v2406+(+1);
	i8 v2408 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v2408 = v2407;

endsub:;
}
	void f151_PushVid(i2 /* vid */);

// Push workspace at ws+3968 length ws+2
void f152_Push(i2* p2409 /* vid */) {

	i8 v2410 = (i8)(intptr_t)(ws+3586);
	i2 v2411 = *(i2*)(intptr_t)v2410;
	i8 v2412 = (i8)(intptr_t)(ws+3968);
	*(i2*)(intptr_t)v2412 = v2411;

	i8 v2413 = (i8)(intptr_t)(ws+3586);
	i2 v2414 = *(i2*)(intptr_t)v2413;
	i2 v2415 = v2414+(+1);
	i8 v2416 = (i8)(intptr_t)(ws+3586);
	*(i2*)(intptr_t)v2416 = v2415;

	i8 v2417 = (i8)(intptr_t)(ws+3968);
	i2 v2418 = *(i2*)(intptr_t)v2417;
	i8 v2419 = (i8)(intptr_t)(f151_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v2419)(v2418);

endsub:;
	*p2409 = *(i2*)(intptr_t)(ws+3968);
}
const i1 c02_s00d5[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f63_SimpleError(i8 /* s */);

// CheckVarstackUnderflow workspace at ws+3984 length ws+0
void f153_CheckVarstackUnderflow(void) {

	i8 v2420 = (i8)(intptr_t)(ws+3584);
	i1 v2421 = *(i1*)(intptr_t)v2420;
	i1 v2422 = (i1)+0;
	if (v2421==v2422) goto c02_021a; else goto c02_021b;

c02_021a:;

	i8 v2423 = (i8)(intptr_t)c02_s00d5;
	i8 v2424 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2424)(v2423);

c02_021b:;

c02_0217:;

endsub:;
}
	void f153_CheckVarstackUnderflow(void);

// Pop workspace at ws+3976 length ws+2
void f154_Pop(i2* p2425 /* vid */) {

	i8 v2426 = (i8)(intptr_t)(f153_CheckVarstackUnderflow);

	((void(*)(void))(intptr_t)v2426)();

	i8 v2427 = (i8)(intptr_t)(ws+3584);
	i1 v2428 = *(i1*)(intptr_t)v2427;
	i1 v2429 = v2428+(-1);
	i8 v2430 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v2430 = v2429;

	i8 v2431 = (i8)(intptr_t)(ws+3456);
	i8 v2432 = (i8)(intptr_t)(ws+3584);
	i1 v2433 = *(i1*)(intptr_t)v2432;
	i8 v2434 = v2433;
	i1 v2435 = (i1)+1;
	i8 v2436 = ((i8)v2434)<<v2435;
	i8 v2437 = v2431+v2436;
	i2 v2438 = *(i2*)(intptr_t)v2437;
	i8 v2439 = (i8)(intptr_t)(ws+3976);
	*(i2*)(intptr_t)v2439 = v2438;

endsub:;
	*p2425 = *(i2*)(intptr_t)(ws+3976);
}

// ArchEmitMove workspace at ws+3880 length ws+2
void f156_ArchEmitMove(i1 p2452 /* dest */, i1 p2453 /* src */) {
	*(i1*)(intptr_t)(ws+3880) = p2453; /*src */
	*(i1*)(intptr_t)(ws+3881) = p2452; /*dest */

endsub:;
}
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f154_Pop(i2* /* vid */);
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
	void f145_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s00da[] = { 0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00db[] = { 0x29,0x28,0 };
	void f87_E(i8 /* text */);
const i1 c02_s00dc[] = { 0x2c,0x20,0 };
	void f87_E(i8 /* text */);

// comma workspace at ws+3976 length ws+0
void f158_comma(void) {

	i8 v2526 = (i8)(intptr_t)(ws+3968);
	i1 v2527 = *(i1*)(intptr_t)v2526;
	i1 v2528 = (i1)+0;
	if (v2527==v2528) goto c02_0225; else goto c02_0226;

c02_0225:;

	i8 v2529 = (i8)(intptr_t)c02_s00dc;
	i8 v2530 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2530)(v2529);

c02_0226:;

c02_0222:;

	i1 v2531 = (i1)+0;
	i8 v2532 = (i8)(intptr_t)(ws+3968);
	*(i1*)(intptr_t)v2532 = v2531;

endsub:;
}
	void f69_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f158_comma(void);
const i1 c02_s00dd[] = { 0x26,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
	void f154_Pop(i2* /* vid */);
	void f158_comma(void);
const i1 c02_s00de[] = { 0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s00df[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f151_PushVid(i2 /* vid */);

// Call workspace at ws+3936 length ws+36
void f157_Call(i2 p2454 /* subrid */) {
	*(i2*)(intptr_t)(ws+3936) = p2454; /*subrid */

	i8 v2455 = (i8)(intptr_t)(ws+3936);
	i2 v2456 = *(i2*)(intptr_t)v2455;
	i8 v2457 = (i8)(intptr_t)(f60_FindSubr);
	i8 v2458;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v2457)(&v2458, v2456);
	i8 v2459 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v2459 = v2458;

	i8 v2460 = (i8)(intptr_t)(f154_Pop);
	i2 v2461;

	((void(*)(i2* /* vid */))(intptr_t)v2460)(&v2461);
	i8 v2462 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v2462 = v2461;

	i8 v2463 = (i8)(intptr_t)(ws+3586);
	i2 v2464 = *(i2*)(intptr_t)v2463;
	i8 v2465 = (i8)(intptr_t)(ws+3954);
	*(i2*)(intptr_t)v2465 = v2464;

	i8 v2466 = (i8)(intptr_t)(ws+3586);
	i2 v2467 = *(i2*)(intptr_t)v2466;
	i8 v2468 = (i8)(intptr_t)(ws+3944);
	i8 v2469 = *(i8*)(intptr_t)v2468;
	i8 v2470 = v2469+(+49);
	i1 v2471 = *(i1*)(intptr_t)v2470;
	i2 v2472 = v2471;
	i2 v2473 = v2467+v2472;
	i8 v2474 = (i8)(intptr_t)(ws+3586);
	*(i2*)(intptr_t)v2474 = v2473;

	i1 v2475 = (i1)+0;
	i8 v2476 = (i8)(intptr_t)(ws+3956);
	*(i1*)(intptr_t)v2476 = v2475;

c02_021e:;

	i8 v2477 = (i8)(intptr_t)(ws+3956);
	i1 v2478 = *(i1*)(intptr_t)v2477;
	i8 v2479 = (i8)(intptr_t)(ws+3944);
	i8 v2480 = *(i8*)(intptr_t)v2479;
	i8 v2481 = v2480+(+49);
	i1 v2482 = *(i1*)(intptr_t)v2481;
	if (v2478==v2482) goto c02_0221; else goto c02_0220;

c02_0220:;

	i8 v2483 = (i8)(intptr_t)(ws+3944);
	i8 v2484 = *(i8*)(intptr_t)v2483;
	i8 v2485 = (i8)(intptr_t)(ws+3956);
	i1 v2486 = *(i1*)(intptr_t)v2485;
	i8 v2487 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v2488;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2487)(&v2488, v2486, v2484);
	i8 v2489 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v2489 = v2488;

	i8 v2490 = (i8)(intptr_t)c02_s00d6;
	i8 v2491 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2491)(v2490);

	i8 v2492 = (i8)(intptr_t)(ws+3960);
	i8 v2493 = *(i8*)(intptr_t)v2492;
	i8 v2494 = v2493+(+14);
	i1 v2495 = *(i1*)(intptr_t)v2494;
	i8 v2496 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2496)(v2495);

	i8 v2497 = (i8)(intptr_t)c02_s00d7;
	i8 v2498 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2498)(v2497);

	i8 v2499 = (i8)(intptr_t)(ws+3954);
	i2 v2500 = *(i2*)(intptr_t)v2499;
	i8 v2501 = (i8)(intptr_t)(ws+3956);
	i1 v2502 = *(i1*)(intptr_t)v2501;
	i2 v2503 = v2502;
	i2 v2504 = v2500+v2503;
	i8 v2505 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2505)(v2504);

	i8 v2506 = (i8)(intptr_t)c02_s00d8;
	i8 v2507 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2507)(v2506);

	i8 v2508 = (i8)(intptr_t)(ws+3956);
	i1 v2509 = *(i1*)(intptr_t)v2508;
	i1 v2510 = v2509+(+1);
	i8 v2511 = (i8)(intptr_t)(ws+3956);
	*(i1*)(intptr_t)v2511 = v2510;

	goto c02_021e;

c02_0221:;

	i8 v2512 = (i8)(intptr_t)c02_s00d9;
	i8 v2513 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2513)(v2512);

	i8 v2514 = (i8)(intptr_t)(ws+3944);
	i8 v2515 = *(i8*)(intptr_t)v2514;
	i8 v2516 = (i8)(intptr_t)(f145_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v2516)(v2515);

	i8 v2517 = (i8)(intptr_t)c02_s00da;
	i8 v2518 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2518)(v2517);

	i8 v2519 = (i8)(intptr_t)(ws+3952);
	i2 v2520 = *(i2*)(intptr_t)v2519;
	i8 v2521 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2521)(v2520);

	i8 v2522 = (i8)(intptr_t)c02_s00db;
	i8 v2523 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2523)(v2522);

	i1 v2524 = (i1)+1;
	i8 v2525 = (i8)(intptr_t)(ws+3968);
	*(i1*)(intptr_t)v2525 = v2524;


	i1 v2533 = (i1)+0;
	i8 v2534 = (i8)(intptr_t)(ws+3956);
	*(i1*)(intptr_t)v2534 = v2533;

c02_0229:;

	i8 v2535 = (i8)(intptr_t)(ws+3956);
	i1 v2536 = *(i1*)(intptr_t)v2535;
	i8 v2537 = (i8)(intptr_t)(ws+3944);
	i8 v2538 = *(i8*)(intptr_t)v2537;
	i8 v2539 = v2538+(+49);
	i1 v2540 = *(i1*)(intptr_t)v2539;
	if (v2536==v2540) goto c02_022c; else goto c02_022b;

c02_022b:;

	i8 v2541 = (i8)(intptr_t)(ws+3944);
	i8 v2542 = *(i8*)(intptr_t)v2541;
	i8 v2543 = (i8)(intptr_t)(ws+3956);
	i1 v2544 = *(i1*)(intptr_t)v2543;
	i8 v2545 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v2546;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v2545)(&v2546, v2544, v2542);
	i8 v2547 = (i8)(intptr_t)(ws+3960);
	*(i8*)(intptr_t)v2547 = v2546;

	i8 v2548 = (i8)(intptr_t)(f158_comma);

	((void(*)(void))(intptr_t)v2548)();

	i8 v2549 = (i8)(intptr_t)c02_s00dd;
	i8 v2550 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2550)(v2549);

	i8 v2551 = (i8)(intptr_t)(ws+3954);
	i2 v2552 = *(i2*)(intptr_t)v2551;
	i8 v2553 = (i8)(intptr_t)(ws+3956);
	i1 v2554 = *(i1*)(intptr_t)v2553;
	i2 v2555 = v2554;
	i2 v2556 = v2552+v2555;
	i8 v2557 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2557)(v2556);

	i8 v2558 = (i8)(intptr_t)(ws+3956);
	i1 v2559 = *(i1*)(intptr_t)v2558;
	i1 v2560 = v2559+(+1);
	i8 v2561 = (i8)(intptr_t)(ws+3956);
	*(i1*)(intptr_t)v2561 = v2560;

	goto c02_0229;

c02_022c:;

	i1 v2562 = (i1)+0;
	i8 v2563 = (i8)(intptr_t)(ws+3956);
	*(i1*)(intptr_t)v2563 = v2562;

c02_022f:;

	i8 v2564 = (i8)(intptr_t)(ws+3956);
	i1 v2565 = *(i1*)(intptr_t)v2564;
	i8 v2566 = (i8)(intptr_t)(ws+3944);
	i8 v2567 = *(i8*)(intptr_t)v2566;
	i8 v2568 = v2567+(+48);
	i1 v2569 = *(i1*)(intptr_t)v2568;
	if (v2565==v2569) goto c02_0232; else goto c02_0231;

c02_0231:;

	i8 v2570 = (i8)(intptr_t)(f154_Pop);
	i2 v2571;

	((void(*)(i2* /* vid */))(intptr_t)v2570)(&v2571);
	i8 v2572 = (i8)(intptr_t)(ws+3970);
	*(i2*)(intptr_t)v2572 = v2571;

	i8 v2573 = (i8)(intptr_t)(f158_comma);

	((void(*)(void))(intptr_t)v2573)();

	i8 v2574 = (i8)(intptr_t)c02_s00de;
	i8 v2575 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2575)(v2574);

	i8 v2576 = (i8)(intptr_t)(ws+3970);
	i2 v2577 = *(i2*)(intptr_t)v2576;
	i8 v2578 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2578)(v2577);

	i8 v2579 = (i8)(intptr_t)(ws+3956);
	i1 v2580 = *(i1*)(intptr_t)v2579;
	i1 v2581 = v2580+(+1);
	i8 v2582 = (i8)(intptr_t)(ws+3956);
	*(i1*)(intptr_t)v2582 = v2581;

	goto c02_022f;

c02_0232:;

	i8 v2583 = (i8)(intptr_t)c02_s00df;
	i8 v2584 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2584)(v2583);

	i1 v2585 = (i1)+0;
	i8 v2586 = (i8)(intptr_t)(ws+3956);
	*(i1*)(intptr_t)v2586 = v2585;

c02_0235:;

	i8 v2587 = (i8)(intptr_t)(ws+3956);
	i1 v2588 = *(i1*)(intptr_t)v2587;
	i8 v2589 = (i8)(intptr_t)(ws+3944);
	i8 v2590 = *(i8*)(intptr_t)v2589;
	i8 v2591 = v2590+(+49);
	i1 v2592 = *(i1*)(intptr_t)v2591;
	if (v2588==v2592) goto c02_0238; else goto c02_0237;

c02_0237:;

	i8 v2593 = (i8)(intptr_t)(ws+3954);
	i2 v2594 = *(i2*)(intptr_t)v2593;
	i8 v2595 = (i8)(intptr_t)(ws+3956);
	i1 v2596 = *(i1*)(intptr_t)v2595;
	i2 v2597 = v2596;
	i2 v2598 = v2594+v2597;
	i8 v2599 = (i8)(intptr_t)(ws+3970);
	*(i2*)(intptr_t)v2599 = v2598;

	i8 v2600 = (i8)(intptr_t)(ws+3970);
	i2 v2601 = *(i2*)(intptr_t)v2600;
	i8 v2602 = (i8)(intptr_t)(f151_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v2602)(v2601);

	i8 v2603 = (i8)(intptr_t)(ws+3956);
	i1 v2604 = *(i1*)(intptr_t)v2603;
	i1 v2605 = v2604+(+1);
	i8 v2606 = (i8)(intptr_t)(ws+3956);
	*(i1*)(intptr_t)v2606 = v2605;

	goto c02_0235;

c02_0238:;

endsub:;
}
	void f152_Push(i2* /* vid */);
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

// LoadConstant workspace at ws+3936 length ws+10
void f159_LoadConstant(i4 p2607 /* value */, i1 p2608 /* width */) {
	*(i1*)(intptr_t)(ws+3936) = p2608; /*width */
	*(i4*)(intptr_t)(ws+3940) = p2607; /*value */

	i8 v2609 = (i8)(intptr_t)(f152_Push);
	i2 v2610;

	((void(*)(i2* /* vid */))(intptr_t)v2609)(&v2610);
	i8 v2611 = (i8)(intptr_t)(ws+3944);
	*(i2*)(intptr_t)v2611 = v2610;

	i8 v2612 = (i8)(intptr_t)c02_s00e0;
	i8 v2613 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2613)(v2612);

	i8 v2614 = (i8)(intptr_t)(ws+3936);
	i1 v2615 = *(i1*)(intptr_t)v2614;
	i8 v2616 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2616)(v2615);

	i8 v2617 = (i8)(intptr_t)c02_s00e1;
	i8 v2618 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2618)(v2617);

	i8 v2619 = (i8)(intptr_t)(ws+3944);
	i2 v2620 = *(i2*)(intptr_t)v2619;
	i8 v2621 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2621)(v2620);

	i8 v2622 = (i8)(intptr_t)c02_s00e2;
	i8 v2623 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2623)(v2622);

	i8 v2624 = (i8)(intptr_t)(ws+3936);
	i1 v2625 = *(i1*)(intptr_t)v2624;
	i8 v2626 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2626)(v2625);

	i8 v2627 = (i8)(intptr_t)c02_s00e3;
	i8 v2628 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2628)(v2627);

	i8 v2629 = (i8)(intptr_t)(ws+3940);
	i4 v2630 = *(i4*)(intptr_t)v2629;
	i8 v2631 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v2631)(v2630);

	i8 v2632 = (i8)(intptr_t)c02_s00e4;
	i8 v2633 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2633)(v2632);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f154_Pop(i2* /* vid */);
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

// StoreVV workspace at ws+3936 length ws+6
void f160_StoreVV(i1 p2634 /* width */) {
	*(i1*)(intptr_t)(ws+3936) = p2634; /*width */

	i8 v2635 = (i8)(intptr_t)(f154_Pop);
	i2 v2636;

	((void(*)(i2* /* vid */))(intptr_t)v2635)(&v2636);
	i8 v2637 = (i8)(intptr_t)(ws+3938);
	*(i2*)(intptr_t)v2637 = v2636;

	i8 v2638 = (i8)(intptr_t)(f154_Pop);
	i2 v2639;

	((void(*)(i2* /* vid */))(intptr_t)v2638)(&v2639);
	i8 v2640 = (i8)(intptr_t)(ws+3940);
	*(i2*)(intptr_t)v2640 = v2639;

	i8 v2641 = (i8)(intptr_t)c02_s00e5;
	i8 v2642 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2642)(v2641);

	i8 v2643 = (i8)(intptr_t)(ws+3936);
	i1 v2644 = *(i1*)(intptr_t)v2643;
	i8 v2645 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2645)(v2644);

	i8 v2646 = (i8)(intptr_t)c02_s00e6;
	i8 v2647 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2647)(v2646);

	i8 v2648 = (i8)(intptr_t)(ws+3938);
	i2 v2649 = *(i2*)(intptr_t)v2648;
	i8 v2650 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2650)(v2649);

	i8 v2651 = (i8)(intptr_t)c02_s00e7;
	i8 v2652 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2652)(v2651);

	i8 v2653 = (i8)(intptr_t)(ws+3940);
	i2 v2654 = *(i2*)(intptr_t)v2653;
	i8 v2655 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2655)(v2654);

	i8 v2656 = (i8)(intptr_t)c02_s00e8;
	i8 v2657 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2657)(v2656);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f152_Push(i2* /* vid */);
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

// LoadVV workspace at ws+3936 length ws+6
void f161_LoadVV(i1 p2658 /* width */) {
	*(i1*)(intptr_t)(ws+3936) = p2658; /*width */

	i8 v2659 = (i8)(intptr_t)(f154_Pop);
	i2 v2660;

	((void(*)(i2* /* vid */))(intptr_t)v2659)(&v2660);
	i8 v2661 = (i8)(intptr_t)(ws+3938);
	*(i2*)(intptr_t)v2661 = v2660;

	i8 v2662 = (i8)(intptr_t)(f152_Push);
	i2 v2663;

	((void(*)(i2* /* vid */))(intptr_t)v2662)(&v2663);
	i8 v2664 = (i8)(intptr_t)(ws+3940);
	*(i2*)(intptr_t)v2664 = v2663;

	i8 v2665 = (i8)(intptr_t)c02_s00e9;
	i8 v2666 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2666)(v2665);

	i8 v2667 = (i8)(intptr_t)(ws+3936);
	i1 v2668 = *(i1*)(intptr_t)v2667;
	i8 v2669 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2669)(v2668);

	i8 v2670 = (i8)(intptr_t)c02_s00ea;
	i8 v2671 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2671)(v2670);

	i8 v2672 = (i8)(intptr_t)(ws+3940);
	i2 v2673 = *(i2*)(intptr_t)v2672;
	i8 v2674 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2674)(v2673);

	i8 v2675 = (i8)(intptr_t)c02_s00eb;
	i8 v2676 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2676)(v2675);

	i8 v2677 = (i8)(intptr_t)(ws+3936);
	i1 v2678 = *(i1*)(intptr_t)v2677;
	i8 v2679 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2679)(v2678);

	i8 v2680 = (i8)(intptr_t)c02_s00ec;
	i8 v2681 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2681)(v2680);

	i8 v2682 = (i8)(intptr_t)(ws+3938);
	i2 v2683 = *(i2*)(intptr_t)v2682;
	i8 v2684 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2684)(v2683);

	i8 v2685 = (i8)(intptr_t)c02_s00ed;
	i8 v2686 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2686)(v2685);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f154_Pop(i2* /* vid */);
	void f152_Push(i2* /* vid */);
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

// Op2VV workspace at ws+3936 length ws+22
void f162_Op2VV(i8 p2687 /* op */, i1 p2688 /* width */) {
	*(i1*)(intptr_t)(ws+3936) = p2688; /*width */
	*(i8*)(intptr_t)(ws+3944) = p2687; /*op */

	i8 v2689 = (i8)(intptr_t)(f154_Pop);
	i2 v2690;

	((void(*)(i2* /* vid */))(intptr_t)v2689)(&v2690);
	i8 v2691 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v2691 = v2690;

	i8 v2692 = (i8)(intptr_t)(f154_Pop);
	i2 v2693;

	((void(*)(i2* /* vid */))(intptr_t)v2692)(&v2693);
	i8 v2694 = (i8)(intptr_t)(ws+3954);
	*(i2*)(intptr_t)v2694 = v2693;

	i8 v2695 = (i8)(intptr_t)(f152_Push);
	i2 v2696;

	((void(*)(i2* /* vid */))(intptr_t)v2695)(&v2696);
	i8 v2697 = (i8)(intptr_t)(ws+3956);
	*(i2*)(intptr_t)v2697 = v2696;

	i8 v2698 = (i8)(intptr_t)c02_s00ee;
	i8 v2699 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2699)(v2698);

	i8 v2700 = (i8)(intptr_t)(ws+3936);
	i1 v2701 = *(i1*)(intptr_t)v2700;
	i8 v2702 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2702)(v2701);

	i8 v2703 = (i8)(intptr_t)c02_s00ef;
	i8 v2704 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2704)(v2703);

	i8 v2705 = (i8)(intptr_t)(ws+3956);
	i2 v2706 = *(i2*)(intptr_t)v2705;
	i8 v2707 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2707)(v2706);

	i8 v2708 = (i8)(intptr_t)c02_s00f0;
	i8 v2709 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2709)(v2708);

	i8 v2710 = (i8)(intptr_t)(ws+3954);
	i2 v2711 = *(i2*)(intptr_t)v2710;
	i8 v2712 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2712)(v2711);

	i8 v2713 = (i8)(intptr_t)(ws+3944);
	i8 v2714 = *(i8*)(intptr_t)v2713;
	i8 v2715 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2715)(v2714);

	i8 v2716 = (i8)(intptr_t)c02_s00f1;
	i8 v2717 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2717)(v2716);

	i8 v2718 = (i8)(intptr_t)(ws+3952);
	i2 v2719 = *(i2*)(intptr_t)v2718;
	i8 v2720 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2720)(v2719);

	i8 v2721 = (i8)(intptr_t)c02_s00f2;
	i8 v2722 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2722)(v2721);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f152_Push(i2* /* vid */);
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

// Op2VC workspace at ws+3936 length ws+24
void f163_Op2VC(i4 p2723 /* rhs */, i8 p2724 /* op */, i1 p2725 /* width */) {
	*(i1*)(intptr_t)(ws+3936) = p2725; /*width */
	*(i8*)(intptr_t)(ws+3944) = p2724; /*op */
	*(i4*)(intptr_t)(ws+3952) = p2723; /*rhs */

	i8 v2726 = (i8)(intptr_t)(f154_Pop);
	i2 v2727;

	((void(*)(i2* /* vid */))(intptr_t)v2726)(&v2727);
	i8 v2728 = (i8)(intptr_t)(ws+3956);
	*(i2*)(intptr_t)v2728 = v2727;

	i8 v2729 = (i8)(intptr_t)(f152_Push);
	i2 v2730;

	((void(*)(i2* /* vid */))(intptr_t)v2729)(&v2730);
	i8 v2731 = (i8)(intptr_t)(ws+3958);
	*(i2*)(intptr_t)v2731 = v2730;

	i8 v2732 = (i8)(intptr_t)c02_s00f3;
	i8 v2733 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2733)(v2732);

	i8 v2734 = (i8)(intptr_t)(ws+3936);
	i1 v2735 = *(i1*)(intptr_t)v2734;
	i8 v2736 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2736)(v2735);

	i8 v2737 = (i8)(intptr_t)c02_s00f4;
	i8 v2738 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2738)(v2737);

	i8 v2739 = (i8)(intptr_t)(ws+3958);
	i2 v2740 = *(i2*)(intptr_t)v2739;
	i8 v2741 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2741)(v2740);

	i8 v2742 = (i8)(intptr_t)c02_s00f5;
	i8 v2743 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2743)(v2742);

	i8 v2744 = (i8)(intptr_t)(ws+3956);
	i2 v2745 = *(i2*)(intptr_t)v2744;
	i8 v2746 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2746)(v2745);

	i8 v2747 = (i8)(intptr_t)(ws+3944);
	i8 v2748 = *(i8*)(intptr_t)v2747;
	i8 v2749 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2749)(v2748);

	i8 v2750 = (i8)(intptr_t)c02_s00f6;
	i8 v2751 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2751)(v2750);

	i8 v2752 = (i8)(intptr_t)(ws+3952);
	i4 v2753 = *(i4*)(intptr_t)v2752;
	i8 v2754 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v2754)(v2753);

	i8 v2755 = (i8)(intptr_t)c02_s00f7;
	i8 v2756 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2756)(v2755);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f154_Pop(i2* /* vid */);
	void f152_Push(i2* /* vid */);
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

// Op2VVSigned workspace at ws+3936 length ws+22
void f164_Op2VVSigned(i8 p2757 /* op */, i1 p2758 /* width */) {
	*(i1*)(intptr_t)(ws+3936) = p2758; /*width */
	*(i8*)(intptr_t)(ws+3944) = p2757; /*op */

	i8 v2759 = (i8)(intptr_t)(f154_Pop);
	i2 v2760;

	((void(*)(i2* /* vid */))(intptr_t)v2759)(&v2760);
	i8 v2761 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v2761 = v2760;

	i8 v2762 = (i8)(intptr_t)(f154_Pop);
	i2 v2763;

	((void(*)(i2* /* vid */))(intptr_t)v2762)(&v2763);
	i8 v2764 = (i8)(intptr_t)(ws+3954);
	*(i2*)(intptr_t)v2764 = v2763;

	i8 v2765 = (i8)(intptr_t)(f152_Push);
	i2 v2766;

	((void(*)(i2* /* vid */))(intptr_t)v2765)(&v2766);
	i8 v2767 = (i8)(intptr_t)(ws+3956);
	*(i2*)(intptr_t)v2767 = v2766;

	i8 v2768 = (i8)(intptr_t)c02_s00f8;
	i8 v2769 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2769)(v2768);

	i8 v2770 = (i8)(intptr_t)(ws+3936);
	i1 v2771 = *(i1*)(intptr_t)v2770;
	i8 v2772 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2772)(v2771);

	i8 v2773 = (i8)(intptr_t)c02_s00f9;
	i8 v2774 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2774)(v2773);

	i8 v2775 = (i8)(intptr_t)(ws+3956);
	i2 v2776 = *(i2*)(intptr_t)v2775;
	i8 v2777 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2777)(v2776);

	i8 v2778 = (i8)(intptr_t)c02_s00fa;
	i8 v2779 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2779)(v2778);

	i8 v2780 = (i8)(intptr_t)(ws+3936);
	i1 v2781 = *(i1*)(intptr_t)v2780;
	i8 v2782 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2782)(v2781);

	i8 v2783 = (i8)(intptr_t)c02_s00fb;
	i8 v2784 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2784)(v2783);

	i8 v2785 = (i8)(intptr_t)(ws+3954);
	i2 v2786 = *(i2*)(intptr_t)v2785;
	i8 v2787 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2787)(v2786);

	i8 v2788 = (i8)(intptr_t)(ws+3944);
	i8 v2789 = *(i8*)(intptr_t)v2788;
	i8 v2790 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2790)(v2789);

	i8 v2791 = (i8)(intptr_t)c02_s00fc;
	i8 v2792 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2792)(v2791);

	i8 v2793 = (i8)(intptr_t)(ws+3936);
	i1 v2794 = *(i1*)(intptr_t)v2793;
	i8 v2795 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2795)(v2794);

	i8 v2796 = (i8)(intptr_t)c02_s00fd;
	i8 v2797 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2797)(v2796);

	i8 v2798 = (i8)(intptr_t)(ws+3952);
	i2 v2799 = *(i2*)(intptr_t)v2798;
	i8 v2800 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2800)(v2799);

	i8 v2801 = (i8)(intptr_t)c02_s00fe;
	i8 v2802 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2802)(v2801);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f152_Push(i2* /* vid */);
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

// Op2VCSigned workspace at ws+3936 length ws+24
void f165_Op2VCSigned(i4 p2803 /* rhs */, i8 p2804 /* op */, i1 p2805 /* width */) {
	*(i1*)(intptr_t)(ws+3936) = p2805; /*width */
	*(i8*)(intptr_t)(ws+3944) = p2804; /*op */
	*(i4*)(intptr_t)(ws+3952) = p2803; /*rhs */

	i8 v2806 = (i8)(intptr_t)(f154_Pop);
	i2 v2807;

	((void(*)(i2* /* vid */))(intptr_t)v2806)(&v2807);
	i8 v2808 = (i8)(intptr_t)(ws+3956);
	*(i2*)(intptr_t)v2808 = v2807;

	i8 v2809 = (i8)(intptr_t)(f152_Push);
	i2 v2810;

	((void(*)(i2* /* vid */))(intptr_t)v2809)(&v2810);
	i8 v2811 = (i8)(intptr_t)(ws+3958);
	*(i2*)(intptr_t)v2811 = v2810;

	i8 v2812 = (i8)(intptr_t)c02_s00ff;
	i8 v2813 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2813)(v2812);

	i8 v2814 = (i8)(intptr_t)(ws+3936);
	i1 v2815 = *(i1*)(intptr_t)v2814;
	i8 v2816 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2816)(v2815);

	i8 v2817 = (i8)(intptr_t)c02_s0100;
	i8 v2818 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2818)(v2817);

	i8 v2819 = (i8)(intptr_t)(ws+3958);
	i2 v2820 = *(i2*)(intptr_t)v2819;
	i8 v2821 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2821)(v2820);

	i8 v2822 = (i8)(intptr_t)c02_s0101;
	i8 v2823 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2823)(v2822);

	i8 v2824 = (i8)(intptr_t)(ws+3956);
	i2 v2825 = *(i2*)(intptr_t)v2824;
	i8 v2826 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2826)(v2825);

	i8 v2827 = (i8)(intptr_t)(ws+3944);
	i8 v2828 = *(i8*)(intptr_t)v2827;
	i8 v2829 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2829)(v2828);

	i8 v2830 = (i8)(intptr_t)c02_s0102;
	i8 v2831 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2831)(v2830);

	i8 v2832 = (i8)(intptr_t)(ws+3952);
	i4 v2833 = *(i4*)(intptr_t)v2832;
	i8 v2834 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v2834)(v2833);

	i8 v2835 = (i8)(intptr_t)c02_s0103;
	i8 v2836 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2836)(v2835);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f152_Push(i2* /* vid */);
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

// Op1V workspace at ws+3936 length ws+20
void f166_Op1V(i8 p2837 /* op */, i1 p2838 /* width */) {
	*(i1*)(intptr_t)(ws+3936) = p2838; /*width */
	*(i8*)(intptr_t)(ws+3944) = p2837; /*op */

	i8 v2839 = (i8)(intptr_t)(f154_Pop);
	i2 v2840;

	((void(*)(i2* /* vid */))(intptr_t)v2839)(&v2840);
	i8 v2841 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v2841 = v2840;

	i8 v2842 = (i8)(intptr_t)(f152_Push);
	i2 v2843;

	((void(*)(i2* /* vid */))(intptr_t)v2842)(&v2843);
	i8 v2844 = (i8)(intptr_t)(ws+3954);
	*(i2*)(intptr_t)v2844 = v2843;

	i8 v2845 = (i8)(intptr_t)c02_s0104;
	i8 v2846 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2846)(v2845);

	i8 v2847 = (i8)(intptr_t)(ws+3936);
	i1 v2848 = *(i1*)(intptr_t)v2847;
	i8 v2849 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2849)(v2848);

	i8 v2850 = (i8)(intptr_t)c02_s0105;
	i8 v2851 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2851)(v2850);

	i8 v2852 = (i8)(intptr_t)(ws+3954);
	i2 v2853 = *(i2*)(intptr_t)v2852;
	i8 v2854 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2854)(v2853);

	i8 v2855 = (i8)(intptr_t)c02_s0106;
	i8 v2856 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2856)(v2855);

	i8 v2857 = (i8)(intptr_t)(ws+3944);
	i8 v2858 = *(i8*)(intptr_t)v2857;
	i8 v2859 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2859)(v2858);

	i8 v2860 = (i8)(intptr_t)c02_s0107;
	i8 v2861 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2861)(v2860);

	i8 v2862 = (i8)(intptr_t)(ws+3952);
	i2 v2863 = *(i2*)(intptr_t)v2862;
	i8 v2864 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2864)(v2863);

	i8 v2865 = (i8)(intptr_t)c02_s0108;
	i8 v2866 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2866)(v2865);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f154_Pop(i2* /* vid */);
	void f152_Push(i2* /* vid */);
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

// Shift workspace at ws+3936 length ws+30
void f167_Shift(i8 p2867 /* op */, i8 p2868 /* type */, i1 p2869 /* width */) {
	*(i1*)(intptr_t)(ws+3936) = p2869; /*width */
	*(i8*)(intptr_t)(ws+3944) = p2868; /*type */
	*(i8*)(intptr_t)(ws+3952) = p2867; /*op */

	i8 v2870 = (i8)(intptr_t)(f154_Pop);
	i2 v2871;

	((void(*)(i2* /* vid */))(intptr_t)v2870)(&v2871);
	i8 v2872 = (i8)(intptr_t)(ws+3960);
	*(i2*)(intptr_t)v2872 = v2871;

	i8 v2873 = (i8)(intptr_t)(f154_Pop);
	i2 v2874;

	((void(*)(i2* /* vid */))(intptr_t)v2873)(&v2874);
	i8 v2875 = (i8)(intptr_t)(ws+3962);
	*(i2*)(intptr_t)v2875 = v2874;

	i8 v2876 = (i8)(intptr_t)(f152_Push);
	i2 v2877;

	((void(*)(i2* /* vid */))(intptr_t)v2876)(&v2877);
	i8 v2878 = (i8)(intptr_t)(ws+3964);
	*(i2*)(intptr_t)v2878 = v2877;

	i8 v2879 = (i8)(intptr_t)c02_s0109;
	i8 v2880 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2880)(v2879);

	i8 v2881 = (i8)(intptr_t)(ws+3936);
	i1 v2882 = *(i1*)(intptr_t)v2881;
	i8 v2883 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2883)(v2882);

	i8 v2884 = (i8)(intptr_t)c02_s010a;
	i8 v2885 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2885)(v2884);

	i8 v2886 = (i8)(intptr_t)(ws+3964);
	i2 v2887 = *(i2*)(intptr_t)v2886;
	i8 v2888 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2888)(v2887);

	i8 v2889 = (i8)(intptr_t)c02_s010b;
	i8 v2890 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2890)(v2889);

	i8 v2891 = (i8)(intptr_t)(ws+3944);
	i8 v2892 = *(i8*)(intptr_t)v2891;
	i8 v2893 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2893)(v2892);

	i8 v2894 = (i8)(intptr_t)c02_s010c;
	i8 v2895 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2895)(v2894);

	i8 v2896 = (i8)(intptr_t)(ws+3962);
	i2 v2897 = *(i2*)(intptr_t)v2896;
	i8 v2898 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2898)(v2897);

	i8 v2899 = (i8)(intptr_t)c02_s010d;
	i8 v2900 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2900)(v2899);

	i8 v2901 = (i8)(intptr_t)(ws+3952);
	i8 v2902 = *(i8*)(intptr_t)v2901;
	i8 v2903 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2903)(v2902);

	i8 v2904 = (i8)(intptr_t)c02_s010e;
	i8 v2905 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2905)(v2904);

	i8 v2906 = (i8)(intptr_t)(ws+3960);
	i2 v2907 = *(i2*)(intptr_t)v2906;
	i8 v2908 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2908)(v2907);

	i8 v2909 = (i8)(intptr_t)c02_s010f;
	i8 v2910 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2910)(v2909);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f154_Pop(i2* /* vid */);
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

// Branch workspace at ws+3936 length ws+20
void f168_Branch(i8 p2911 /* op */, i8 p2912 /* node */) {
	*(i8*)(intptr_t)(ws+3936) = p2912; /*node */
	*(i8*)(intptr_t)(ws+3944) = p2911; /*op */

	i8 v2913 = (i8)(intptr_t)(f154_Pop);
	i2 v2914;

	((void(*)(i2* /* vid */))(intptr_t)v2913)(&v2914);
	i8 v2915 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v2915 = v2914;

	i8 v2916 = (i8)(intptr_t)(f154_Pop);
	i2 v2917;

	((void(*)(i2* /* vid */))(intptr_t)v2916)(&v2917);
	i8 v2918 = (i8)(intptr_t)(ws+3954);
	*(i2*)(intptr_t)v2918 = v2917;

	i8 v2919 = (i8)(intptr_t)c02_s0110;
	i8 v2920 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2920)(v2919);

	i8 v2921 = (i8)(intptr_t)(ws+3954);
	i2 v2922 = *(i2*)(intptr_t)v2921;
	i8 v2923 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2923)(v2922);

	i8 v2924 = (i8)(intptr_t)(ws+3944);
	i8 v2925 = *(i8*)(intptr_t)v2924;
	i8 v2926 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2926)(v2925);

	i8 v2927 = (i8)(intptr_t)c02_s0111;
	i8 v2928 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2928)(v2927);

	i8 v2929 = (i8)(intptr_t)(ws+3952);
	i2 v2930 = *(i2*)(intptr_t)v2929;
	i8 v2931 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2931)(v2930);

	i8 v2932 = (i8)(intptr_t)c02_s0112;
	i8 v2933 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2933)(v2932);

	i8 v2934 = (i8)(intptr_t)(ws+3936);
	i8 v2935 = *(i8*)(intptr_t)v2934;
	i2 v2936 = *(i2*)(intptr_t)v2935;
	i8 v2937 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v2937)(v2936);

	i8 v2938 = (i8)(intptr_t)c02_s0113;
	i8 v2939 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2939)(v2938);

	i8 v2940 = (i8)(intptr_t)(ws+3936);
	i8 v2941 = *(i8*)(intptr_t)v2940;
	i8 v2942 = v2941+(+2);
	i2 v2943 = *(i2*)(intptr_t)v2942;
	i8 v2944 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v2944)(v2943);

	i8 v2945 = (i8)(intptr_t)c02_s0114;
	i8 v2946 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2946)(v2945);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f154_Pop(i2* /* vid */);
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

// BranchSigned workspace at ws+3936 length ws+28
void f169_BranchSigned(i8 p2947 /* op */, i1 p2948 /* width */, i8 p2949 /* node */) {
	*(i8*)(intptr_t)(ws+3936) = p2949; /*node */
	*(i1*)(intptr_t)(ws+3944) = p2948; /*width */
	*(i8*)(intptr_t)(ws+3952) = p2947; /*op */

	i8 v2950 = (i8)(intptr_t)(f154_Pop);
	i2 v2951;

	((void(*)(i2* /* vid */))(intptr_t)v2950)(&v2951);
	i8 v2952 = (i8)(intptr_t)(ws+3960);
	*(i2*)(intptr_t)v2952 = v2951;

	i8 v2953 = (i8)(intptr_t)(f154_Pop);
	i2 v2954;

	((void(*)(i2* /* vid */))(intptr_t)v2953)(&v2954);
	i8 v2955 = (i8)(intptr_t)(ws+3962);
	*(i2*)(intptr_t)v2955 = v2954;

	i8 v2956 = (i8)(intptr_t)c02_s0115;
	i8 v2957 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2957)(v2956);

	i8 v2958 = (i8)(intptr_t)(ws+3944);
	i1 v2959 = *(i1*)(intptr_t)v2958;
	i8 v2960 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2960)(v2959);

	i8 v2961 = (i8)(intptr_t)c02_s0116;
	i8 v2962 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2962)(v2961);

	i8 v2963 = (i8)(intptr_t)(ws+3962);
	i2 v2964 = *(i2*)(intptr_t)v2963;
	i8 v2965 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2965)(v2964);

	i8 v2966 = (i8)(intptr_t)(ws+3952);
	i8 v2967 = *(i8*)(intptr_t)v2966;
	i8 v2968 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2968)(v2967);

	i8 v2969 = (i8)(intptr_t)c02_s0117;
	i8 v2970 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2970)(v2969);

	i8 v2971 = (i8)(intptr_t)(ws+3944);
	i1 v2972 = *(i1*)(intptr_t)v2971;
	i8 v2973 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v2973)(v2972);

	i8 v2974 = (i8)(intptr_t)c02_s0118;
	i8 v2975 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2975)(v2974);

	i8 v2976 = (i8)(intptr_t)(ws+3960);
	i2 v2977 = *(i2*)(intptr_t)v2976;
	i8 v2978 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2978)(v2977);

	i8 v2979 = (i8)(intptr_t)c02_s0119;
	i8 v2980 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2980)(v2979);

	i8 v2981 = (i8)(intptr_t)(ws+3936);
	i8 v2982 = *(i8*)(intptr_t)v2981;
	i2 v2983 = *(i2*)(intptr_t)v2982;
	i8 v2984 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v2984)(v2983);

	i8 v2985 = (i8)(intptr_t)c02_s011a;
	i8 v2986 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2986)(v2985);

	i8 v2987 = (i8)(intptr_t)(ws+3936);
	i8 v2988 = *(i8*)(intptr_t)v2987;
	i8 v2989 = v2988+(+2);
	i2 v2990 = *(i2*)(intptr_t)v2989;
	i8 v2991 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v2991)(v2990);

	i8 v2992 = (i8)(intptr_t)c02_s011b;
	i8 v2993 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2993)(v2992);

endsub:;
}
const i1 c02_s011c[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f87_E(i8 /* text */);
	void f98_E_labelref(i2 /* labelid */);
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s011d[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// BranchConstant workspace at ws+3936 length ws+16
void f170_BranchConstant(i4 p2994 /* rhs */, i4 p2995 /* lhs */, i8 p2996 /* node */) {
	*(i8*)(intptr_t)(ws+3936) = p2996; /*node */
	*(i4*)(intptr_t)(ws+3944) = p2995; /*lhs */
	*(i4*)(intptr_t)(ws+3948) = p2994; /*rhs */

	i8 v2997 = (i8)(intptr_t)c02_s011c;
	i8 v2998 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v2998)(v2997);

	i8 v2999 = (i8)(intptr_t)(ws+3944);
	i4 v3000 = *(i4*)(intptr_t)v2999;
	i8 v3001 = (i8)(intptr_t)(ws+3948);
	i4 v3002 = *(i4*)(intptr_t)v3001;
	if (v3000==v3002) goto c02_023c; else goto c02_023d;

c02_023c:;

	i8 v3003 = (i8)(intptr_t)(ws+3936);
	i8 v3004 = *(i8*)(intptr_t)v3003;
	i2 v3005 = *(i2*)(intptr_t)v3004;
	i8 v3006 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3006)(v3005);

	goto c02_0239;

c02_023d:;

	i8 v3007 = (i8)(intptr_t)(ws+3936);
	i8 v3008 = *(i8*)(intptr_t)v3007;
	i8 v3009 = v3008+(+2);
	i2 v3010 = *(i2*)(intptr_t)v3009;
	i8 v3011 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3011)(v3010);

c02_0239:;

	i8 v3012 = (i8)(intptr_t)c02_s011d;
	i8 v3013 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3013)(v3012);

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

// Whencase workspace at ws+3936 length ws+8
void f171_Whencase(i2 p3014 /* falselabel */, i4 p3015 /* value */) {
	*(i4*)(intptr_t)(ws+3936) = p3015; /*value */
	*(i2*)(intptr_t)(ws+3940) = p3014; /*falselabel */

	i8 v3016 = (i8)(intptr_t)(ws+3456);
	i8 v3017 = (i8)(intptr_t)(ws+3584);
	i1 v3018 = *(i1*)(intptr_t)v3017;
	i1 v3019 = v3018+(-1);
	i8 v3020 = v3019;
	i1 v3021 = (i1)+1;
	i8 v3022 = ((i8)v3020)<<v3021;
	i8 v3023 = v3016+v3022;
	i2 v3024 = *(i2*)(intptr_t)v3023;
	i8 v3025 = (i8)(intptr_t)(ws+3942);
	*(i2*)(intptr_t)v3025 = v3024;

	i8 v3026 = (i8)(intptr_t)c02_s011e;
	i8 v3027 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3027)(v3026);

	i8 v3028 = (i8)(intptr_t)(ws+3942);
	i2 v3029 = *(i2*)(intptr_t)v3028;
	i8 v3030 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3030)(v3029);

	i8 v3031 = (i8)(intptr_t)c02_s011f;
	i8 v3032 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3032)(v3031);

	i8 v3033 = (i8)(intptr_t)(ws+3936);
	i4 v3034 = *(i4*)(intptr_t)v3033;
	i8 v3035 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v3035)(v3034);

	i8 v3036 = (i8)(intptr_t)c02_s0120;
	i8 v3037 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3037)(v3036);

	i8 v3038 = (i8)(intptr_t)(ws+3940);
	i2 v3039 = *(i2*)(intptr_t)v3038;
	i8 v3040 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3040)(v3039);

	i8 v3041 = (i8)(intptr_t)c02_s0121;
	i8 v3042 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3042)(v3041);

endsub:;
}
	void f154_Pop(i2* /* vid */);
	void f152_Push(i2* /* vid */);
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

// Cast workspace at ws+3936 length ws+8
void f172_Cast(i1 p3043 /* sext */, i1 p3044 /* dest */, i1 p3045 /* src */) {
	*(i1*)(intptr_t)(ws+3936) = p3045; /*src */
	*(i1*)(intptr_t)(ws+3937) = p3044; /*dest */
	*(i1*)(intptr_t)(ws+3938) = p3043; /*sext */

	i8 v3046 = (i8)(intptr_t)(f154_Pop);
	i2 v3047;

	((void(*)(i2* /* vid */))(intptr_t)v3046)(&v3047);
	i8 v3048 = (i8)(intptr_t)(ws+3940);
	*(i2*)(intptr_t)v3048 = v3047;

	i8 v3049 = (i8)(intptr_t)(f152_Push);
	i2 v3050;

	((void(*)(i2* /* vid */))(intptr_t)v3049)(&v3050);
	i8 v3051 = (i8)(intptr_t)(ws+3942);
	*(i2*)(intptr_t)v3051 = v3050;

	i8 v3052 = (i8)(intptr_t)c02_s0122;
	i8 v3053 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3053)(v3052);

	i8 v3054 = (i8)(intptr_t)(ws+3937);
	i1 v3055 = *(i1*)(intptr_t)v3054;
	i8 v3056 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3056)(v3055);

	i8 v3057 = (i8)(intptr_t)c02_s0123;
	i8 v3058 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3058)(v3057);

	i8 v3059 = (i8)(intptr_t)(ws+3942);
	i2 v3060 = *(i2*)(intptr_t)v3059;
	i8 v3061 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3061)(v3060);

	i8 v3062 = (i8)(intptr_t)c02_s0124;
	i8 v3063 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3063)(v3062);

	i8 v3064 = (i8)(intptr_t)(ws+3938);
	i1 v3065 = *(i1*)(intptr_t)v3064;
	i1 v3066 = (i1)+0;
	if (v3065==v3066) goto c02_0242; else goto c02_0241;

c02_0241:;

	i8 v3067 = (i8)(intptr_t)c02_s0125;
	i8 v3068 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3068)(v3067);

	i8 v3069 = (i8)(intptr_t)(ws+3937);
	i1 v3070 = *(i1*)(intptr_t)v3069;
	i8 v3071 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3071)(v3070);

	i8 v3072 = (i8)(intptr_t)c02_s0126;
	i8 v3073 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3073)(v3072);

	i8 v3074 = (i8)(intptr_t)(ws+3936);
	i1 v3075 = *(i1*)(intptr_t)v3074;
	i8 v3076 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3076)(v3075);

	i8 v3077 = (i8)(intptr_t)c02_s0127;
	i8 v3078 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3078)(v3077);

c02_0242:;

c02_023e:;

	i8 v3079 = (i8)(intptr_t)c02_s0128;
	i8 v3080 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3080)(v3079);

	i8 v3081 = (i8)(intptr_t)(ws+3940);
	i2 v3082 = *(i2*)(intptr_t)v3081;
	i8 v3083 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3083)(v3082);

	i8 v3084 = (i8)(intptr_t)c02_s0129;
	i8 v3085 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3085)(v3084);

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

// E_string workspace at ws+3944 length ws+12
void f173_E_string(i2* p3088 /* sid */, i8 p3089 /* text */) {
	*(i8*)(intptr_t)(ws+3944) = p3089; /*text */

	i8 v3090 = (i8)(intptr_t)(ws+3588);
	i2 v3091 = *(i2*)(intptr_t)v3090;
	i8 v3092 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v3092 = v3091;

	i8 v3093 = (i8)(intptr_t)(ws+3588);
	i2 v3094 = *(i2*)(intptr_t)v3093;
	i2 v3095 = v3094+(+1);
	i8 v3096 = (i8)(intptr_t)(ws+3588);
	*(i2*)(intptr_t)v3096 = v3095;

	i8 v3097 = (i8)(intptr_t)(ws+40);
	i8 v3098 = *(i8*)(intptr_t)v3097;
	i8 v3099 = (i8)(intptr_t)(f101_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v3099)(v3098);

	i8 v3100 = (i8)(intptr_t)c02_s012a;
	i8 v3101 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3101)(v3100);

	i1 v3102 = (i1)+3;
	i8 v3103 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3103)(v3102);

	i1 v3104 = (i1)+115;
	i8 v3105 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3105)(v3104);

	i8 v3106 = (i8)(intptr_t)(ws+3952);
	i2 v3107 = *(i2*)(intptr_t)v3106;
	i8 v3108 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v3108)(v3107);

	i8 v3109 = (i8)(intptr_t)c02_s012b;
	i8 v3110 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3110)(v3109);

	i1 v3111 = (i1)+1;
	i8 v3112 = (i8)(intptr_t)(ws+3954);
	*(i1*)(intptr_t)v3112 = v3111;

c02_0243:;

	i8 v3113 = (i8)(intptr_t)(ws+3944);
	i8 v3114 = *(i8*)(intptr_t)v3113;
	i1 v3115 = *(i1*)(intptr_t)v3114;
	i8 v3116 = (i8)(intptr_t)(ws+3955);
	*(i1*)(intptr_t)v3116 = v3115;

	i8 v3117 = (i8)(intptr_t)(ws+3944);
	i8 v3118 = *(i8*)(intptr_t)v3117;
	i8 v3119 = v3118+(+1);
	i8 v3120 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v3120 = v3119;

	i8 v3121 = (i8)(intptr_t)(ws+3955);
	i1 v3122 = *(i1*)(intptr_t)v3121;
	i1 v3123 = (i1)+0;
	if (v3122==v3123) goto c02_0248; else goto c02_0249;

c02_0248:;

	goto c02_0244;

c02_0249:;

c02_0245:;

	i8 v3124 = (i8)(intptr_t)(ws+3954);
	i1 v3125 = *(i1*)(intptr_t)v3124;
	i1 v3126 = (i1)+0;
	if (v3125==v3126) goto c02_024d; else goto c02_024e;

c02_024d:;

	i8 v3127 = (i8)(intptr_t)(f82_E_comma);

	((void(*)(void))(intptr_t)v3127)();

c02_024e:;

c02_024a:;

	i1 v3128 = (i1)+0;
	i8 v3129 = (i8)(intptr_t)(ws+3954);
	*(i1*)(intptr_t)v3129 = v3128;

	i8 v3130 = (i8)(intptr_t)c02_s012c;
	i8 v3131 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3131)(v3130);

	i8 v3132 = (i8)(intptr_t)(ws+3955);
	i1 v3133 = *(i1*)(intptr_t)v3132;
	i8 v3134 = (i8)(intptr_t)(f95_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v3134)(v3133);

	goto c02_0243;

c02_0244:;

	i8 v3135 = (i8)(intptr_t)(ws+3954);
	i1 v3136 = *(i1*)(intptr_t)v3135;
	i1 v3137 = (i1)+0;
	if (v3136==v3137) goto c02_0252; else goto c02_0253;

c02_0252:;

	i8 v3138 = (i8)(intptr_t)(f82_E_comma);

	((void(*)(void))(intptr_t)v3138)();

c02_0253:;

c02_024f:;

	i8 v3139 = (i8)(intptr_t)c02_s012d;
	i8 v3140 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3140)(v3139);

	i8 v3141 = (i8)(intptr_t)(f102_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3141)();

endsub:;
	*p3088 = *(i2*)(intptr_t)(ws+3952);
}
const i1 c02_s012e[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f87_E(i8 /* text */);
	void f82_E_comma(void);
const i1 c02_s012f[] = { 0x30,0x78,0 };
	void f87_E(i8 /* text */);
	void f95_E_h8(i1 /* value */);
const i1 c02_s0130[] = { 0x7d,0x7d,0x2c,0x0a,0 };
	void f87_E(i8 /* text */);

// FlushInitialiserBuffer workspace at ws+3952 length ws+1
void f174_FlushInitialiserBuffer(void) {

	i8 v3144 = (i8)(intptr_t)(ws+3598);
	i1 v3145 = *(i1*)(intptr_t)v3144;
	i1 v3146 = (i1)+0;
	if (v3145==v3146) goto c02_0258; else goto c02_0257;

c02_0257:;

	i8 v3147 = (i8)(intptr_t)c02_s012e;
	i8 v3148 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3148)(v3147);

	i1 v3149 = (i1)+0;
	i8 v3150 = (i8)(intptr_t)(ws+3952);
	*(i1*)(intptr_t)v3150 = v3149;

c02_025b:;

	i8 v3151 = (i8)(intptr_t)(ws+3952);
	i1 v3152 = *(i1*)(intptr_t)v3151;
	i8 v3153 = (i8)(intptr_t)(ws+3598);
	i1 v3154 = *(i1*)(intptr_t)v3153;
	if (v3152==v3154) goto c02_025e; else goto c02_025d;

c02_025d:;

	i8 v3155 = (i8)(intptr_t)(ws+3952);
	i1 v3156 = *(i1*)(intptr_t)v3155;
	i1 v3157 = (i1)+0;
	if (v3156==v3157) goto c02_0263; else goto c02_0262;

c02_0262:;

	i8 v3158 = (i8)(intptr_t)(f82_E_comma);

	((void(*)(void))(intptr_t)v3158)();

c02_0263:;

c02_025f:;

	i8 v3159 = (i8)(intptr_t)c02_s012f;
	i8 v3160 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3160)(v3159);

	i8 v3161 = (i8)(intptr_t)(ws+3590);
	i8 v3162 = (i8)(intptr_t)(ws+3952);
	i1 v3163 = *(i1*)(intptr_t)v3162;
	i8 v3164 = v3163;
	i8 v3165 = v3161+v3164;
	i1 v3166 = *(i1*)(intptr_t)v3165;
	i8 v3167 = (i8)(intptr_t)(f95_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v3167)(v3166);

	i8 v3168 = (i8)(intptr_t)(ws+3952);
	i1 v3169 = *(i1*)(intptr_t)v3168;
	i1 v3170 = v3169+(+1);
	i8 v3171 = (i8)(intptr_t)(ws+3952);
	*(i1*)(intptr_t)v3171 = v3170;

	goto c02_025b;

c02_025e:;

	i8 v3172 = (i8)(intptr_t)c02_s0130;
	i8 v3173 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3173)(v3172);

	i1 v3174 = (i1)+0;
	i8 v3175 = (i8)(intptr_t)(ws+3598);
	*(i1*)(intptr_t)v3175 = v3174;

c02_0258:;

c02_0254:;

endsub:;
}
	void f174_FlushInitialiserBuffer(void);

// E_bytes workspace at ws+3936 length ws+9
void f175_E_bytes(i1 p3176 /* width */, i8 p3177 /* ptr */) {
	*(i8*)(intptr_t)(ws+3936) = p3177; /*ptr */
	*(i1*)(intptr_t)(ws+3944) = p3176; /*width */

c02_0266:;

	i8 v3178 = (i8)(intptr_t)(ws+3944);
	i1 v3179 = *(i1*)(intptr_t)v3178;
	i1 v3180 = (i1)+0;
	if (v3179==v3180) goto c02_0269; else goto c02_0268;

c02_0268:;

	i8 v3181 = (i8)(intptr_t)(ws+3936);
	i8 v3182 = *(i8*)(intptr_t)v3181;
	i1 v3183 = *(i1*)(intptr_t)v3182;
	i8 v3184 = (i8)(intptr_t)(ws+3590);
	i8 v3185 = (i8)(intptr_t)(ws+3598);
	i1 v3186 = *(i1*)(intptr_t)v3185;
	i8 v3187 = v3186;
	i8 v3188 = v3184+v3187;
	*(i1*)(intptr_t)v3188 = v3183;

	i8 v3189 = (i8)(intptr_t)(ws+3936);
	i8 v3190 = *(i8*)(intptr_t)v3189;
	i8 v3191 = v3190+(+1);
	i8 v3192 = (i8)(intptr_t)(ws+3936);
	*(i8*)(intptr_t)v3192 = v3191;

	i8 v3193 = (i8)(intptr_t)(ws+3598);
	i1 v3194 = *(i1*)(intptr_t)v3193;
	i1 v3195 = v3194+(+1);
	i8 v3196 = (i8)(intptr_t)(ws+3598);
	*(i1*)(intptr_t)v3196 = v3195;

	i8 v3197 = (i8)(intptr_t)(ws+3598);
	i1 v3198 = *(i1*)(intptr_t)v3197;
	i1 v3199 = (i1)+8;
	if (v3198==v3199) goto c02_026d; else goto c02_026e;

c02_026d:;

	i8 v3200 = (i8)(intptr_t)(f174_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v3200)();

c02_026e:;

c02_026a:;

	i8 v3201 = (i8)(intptr_t)(ws+3944);
	i1 v3202 = *(i1*)(intptr_t)v3201;
	i1 v3203 = v3202+(-1);
	i8 v3204 = (i8)(intptr_t)(ws+3944);
	*(i1*)(intptr_t)v3204 = v3203;

	goto c02_0266;

c02_0269:;

endsub:;
}
	void f61_StartError(void);
const i1 c02_s0131[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f62_EndError(void);

// CheckBufferAlignment workspace at ws+3936 length ws+0
void f176_CheckBufferAlignment(void) {

	i8 v3205 = (i8)(intptr_t)(ws+3598);
	i1 v3206 = *(i1*)(intptr_t)v3205;
	i1 v3207 = (i1)+0;
	if (v3206==v3207) goto c02_0273; else goto c02_0272;

c02_0272:;

	i8 v3208 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v3208)();

	i8 v3209 = (i8)(intptr_t)c02_s0131;
	i8 v3210 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v3210)(v3209);

	i8 v3211 = (i8)(intptr_t)(ws+3598);
	i1 v3212 = *(i1*)(intptr_t)v3211;
	i8 v3213 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v3213)(v3212);

	i8 v3214 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v3214)();

c02_0273:;

c02_026f:;

endsub:;
}
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// MatchPredicate workspace at ws+3928 length ws+48
void f177_MatchPredicate(i1* p3215 /* matches */, i8 p3216 /* n */, i1 p3217 /* rule */) {
	*(i1*)(intptr_t)(ws+3928) = p3217; /*rule */
	*(i8*)(intptr_t)(ws+3936) = p3216; /*n */

	i8 v3218 = (i8)(intptr_t)(ws+3936);
	i8 v3219 = *(i8*)(intptr_t)v3218;
	i8 v3220 = (i8)+24;
	i8 v3221 = (i8)(intptr_t)(ws+3952);
	i8 v3222 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v3222)(v3221, v3220, v3219);

	i1 v3223 = (i1)+0;
	i8 v3224 = (i8)(intptr_t)(ws+3944);
	*(i1*)(intptr_t)v3224 = v3223;

	i8 v3225 = (i8)(intptr_t)(ws+3928);
	i1 v3226 = *(i1*)(intptr_t)v3225;

c02_0274:;


endsub:;
	*p3215 = *(i1*)(intptr_t)(ws+3944);
}

// Emitter workspace at ws+3936 length ws+0
void f179_Emitter(void) {

endsub:;
}
	void f170_BranchConstant(i4 /* rhs */, i4 /* lhs */, i8 /* node */);

// emit_0 workspace at ws+3936 length ws+0
void f180_emit_0(void) {

	i8 v3274 = (i8)(intptr_t)(ws+3856);
	i8 v3275 = *(i8*)(intptr_t)v3274;
	i8 v3276 = v3275+(+16);
	i8 v3277 = *(i8*)(intptr_t)v3276;
	i8 v3278 = (i8)(intptr_t)(ws+3880);
	i8 v3279 = *(i8*)(intptr_t)v3278;
	i4 v3280 = *(i4*)(intptr_t)v3279;
	i8 v3281 = (i8)(intptr_t)(ws+3896);
	i8 v3282 = *(i8*)(intptr_t)v3281;
	i4 v3283 = *(i4*)(intptr_t)v3282;
	i8 v3284 = (i8)(intptr_t)(f170_BranchConstant);

	((void(*)(i4 /* rhs */, i4 /* lhs */, i8 /* node */))(intptr_t)v3284)(v3283, v3280, v3277);

endsub:;
}
const i1 c02_s0132[] = { 0x2b,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_1 workspace at ws+3936 length ws+0
void f181_emit_1(void) {

	i1 v3285 = (i1)+1;
	i8 v3286 = (i8)(intptr_t)c02_s0132;
	i8 v3287 = (i8)(intptr_t)(ws+3896);
	i8 v3288 = *(i8*)(intptr_t)v3287;
	i4 v3289 = *(i4*)(intptr_t)v3288;
	i8 v3290 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3290)(v3289, v3286, v3285);

endsub:;
}
const i1 c02_s0133[] = { 0x2b,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_2 workspace at ws+3936 length ws+0
void f182_emit_2(void) {

	i1 v3291 = (i1)+2;
	i8 v3292 = (i8)(intptr_t)c02_s0133;
	i8 v3293 = (i8)(intptr_t)(ws+3896);
	i8 v3294 = *(i8*)(intptr_t)v3293;
	i4 v3295 = *(i4*)(intptr_t)v3294;
	i8 v3296 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3296)(v3295, v3292, v3291);

endsub:;
}
const i1 c02_s0134[] = { 0x2b,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_3 workspace at ws+3936 length ws+0
void f183_emit_3(void) {

	i1 v3297 = (i1)+4;
	i8 v3298 = (i8)(intptr_t)c02_s0134;
	i8 v3299 = (i8)(intptr_t)(ws+3896);
	i8 v3300 = *(i8*)(intptr_t)v3299;
	i4 v3301 = *(i4*)(intptr_t)v3300;
	i8 v3302 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3302)(v3301, v3298, v3297);

endsub:;
}
const i1 c02_s0135[] = { 0x2b,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_4 workspace at ws+3936 length ws+0
void f184_emit_4(void) {

	i1 v3303 = (i1)+8;
	i8 v3304 = (i8)(intptr_t)c02_s0135;
	i8 v3305 = (i8)(intptr_t)(ws+3896);
	i8 v3306 = *(i8*)(intptr_t)v3305;
	i4 v3307 = *(i4*)(intptr_t)v3306;
	i8 v3308 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3308)(v3307, v3304, v3303);

endsub:;
}
const i1 c02_s0136[] = { 0x2d,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_5 workspace at ws+3936 length ws+0
void f185_emit_5(void) {

	i1 v3309 = (i1)+1;
	i8 v3310 = (i8)(intptr_t)c02_s0136;
	i8 v3311 = (i8)(intptr_t)(ws+3896);
	i8 v3312 = *(i8*)(intptr_t)v3311;
	i4 v3313 = *(i4*)(intptr_t)v3312;
	i8 v3314 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3314)(v3313, v3310, v3309);

endsub:;
}
const i1 c02_s0137[] = { 0x2d,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_6 workspace at ws+3936 length ws+0
void f186_emit_6(void) {

	i1 v3315 = (i1)+2;
	i8 v3316 = (i8)(intptr_t)c02_s0137;
	i8 v3317 = (i8)(intptr_t)(ws+3896);
	i8 v3318 = *(i8*)(intptr_t)v3317;
	i4 v3319 = *(i4*)(intptr_t)v3318;
	i8 v3320 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3320)(v3319, v3316, v3315);

endsub:;
}
const i1 c02_s0138[] = { 0x2d,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_7 workspace at ws+3936 length ws+0
void f187_emit_7(void) {

	i1 v3321 = (i1)+4;
	i8 v3322 = (i8)(intptr_t)c02_s0138;
	i8 v3323 = (i8)(intptr_t)(ws+3896);
	i8 v3324 = *(i8*)(intptr_t)v3323;
	i4 v3325 = *(i4*)(intptr_t)v3324;
	i8 v3326 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3326)(v3325, v3322, v3321);

endsub:;
}
const i1 c02_s0139[] = { 0x2d,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_8 workspace at ws+3936 length ws+0
void f188_emit_8(void) {

	i1 v3327 = (i1)+8;
	i8 v3328 = (i8)(intptr_t)c02_s0139;
	i8 v3329 = (i8)(intptr_t)(ws+3896);
	i8 v3330 = *(i8*)(intptr_t)v3329;
	i4 v3331 = *(i4*)(intptr_t)v3330;
	i8 v3332 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3332)(v3331, v3328, v3327);

endsub:;
}
const i1 c02_s013a[] = { 0x2a,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_9 workspace at ws+3936 length ws+0
void f189_emit_9(void) {

	i1 v3333 = (i1)+1;
	i8 v3334 = (i8)(intptr_t)c02_s013a;
	i8 v3335 = (i8)(intptr_t)(ws+3896);
	i8 v3336 = *(i8*)(intptr_t)v3335;
	i4 v3337 = *(i4*)(intptr_t)v3336;
	i8 v3338 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3338)(v3337, v3334, v3333);

endsub:;
}
const i1 c02_s013b[] = { 0x2a,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_10 workspace at ws+3936 length ws+0
void f190_emit_10(void) {

	i1 v3339 = (i1)+2;
	i8 v3340 = (i8)(intptr_t)c02_s013b;
	i8 v3341 = (i8)(intptr_t)(ws+3896);
	i8 v3342 = *(i8*)(intptr_t)v3341;
	i4 v3343 = *(i4*)(intptr_t)v3342;
	i8 v3344 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3344)(v3343, v3340, v3339);

endsub:;
}
const i1 c02_s013c[] = { 0x2a,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_11 workspace at ws+3936 length ws+0
void f191_emit_11(void) {

	i1 v3345 = (i1)+4;
	i8 v3346 = (i8)(intptr_t)c02_s013c;
	i8 v3347 = (i8)(intptr_t)(ws+3896);
	i8 v3348 = *(i8*)(intptr_t)v3347;
	i4 v3349 = *(i4*)(intptr_t)v3348;
	i8 v3350 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3350)(v3349, v3346, v3345);

endsub:;
}
const i1 c02_s013d[] = { 0x2a,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_12 workspace at ws+3936 length ws+0
void f192_emit_12(void) {

	i1 v3351 = (i1)+8;
	i8 v3352 = (i8)(intptr_t)c02_s013d;
	i8 v3353 = (i8)(intptr_t)(ws+3896);
	i8 v3354 = *(i8*)(intptr_t)v3353;
	i4 v3355 = *(i4*)(intptr_t)v3354;
	i8 v3356 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3356)(v3355, v3352, v3351);

endsub:;
}
const i1 c02_s013e[] = { 0x2f,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_13 workspace at ws+3936 length ws+0
void f193_emit_13(void) {

	i1 v3357 = (i1)+1;
	i8 v3358 = (i8)(intptr_t)c02_s013e;
	i8 v3359 = (i8)(intptr_t)(ws+3896);
	i8 v3360 = *(i8*)(intptr_t)v3359;
	i4 v3361 = *(i4*)(intptr_t)v3360;
	i8 v3362 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3362)(v3361, v3358, v3357);

endsub:;
}
const i1 c02_s013f[] = { 0x2f,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_14 workspace at ws+3936 length ws+0
void f194_emit_14(void) {

	i1 v3363 = (i1)+2;
	i8 v3364 = (i8)(intptr_t)c02_s013f;
	i8 v3365 = (i8)(intptr_t)(ws+3896);
	i8 v3366 = *(i8*)(intptr_t)v3365;
	i4 v3367 = *(i4*)(intptr_t)v3366;
	i8 v3368 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3368)(v3367, v3364, v3363);

endsub:;
}
const i1 c02_s0140[] = { 0x2f,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_15 workspace at ws+3936 length ws+0
void f195_emit_15(void) {

	i1 v3369 = (i1)+4;
	i8 v3370 = (i8)(intptr_t)c02_s0140;
	i8 v3371 = (i8)(intptr_t)(ws+3896);
	i8 v3372 = *(i8*)(intptr_t)v3371;
	i4 v3373 = *(i4*)(intptr_t)v3372;
	i8 v3374 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3374)(v3373, v3370, v3369);

endsub:;
}
const i1 c02_s0141[] = { 0x2f,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_16 workspace at ws+3936 length ws+0
void f196_emit_16(void) {

	i1 v3375 = (i1)+8;
	i8 v3376 = (i8)(intptr_t)c02_s0141;
	i8 v3377 = (i8)(intptr_t)(ws+3896);
	i8 v3378 = *(i8*)(intptr_t)v3377;
	i4 v3379 = *(i4*)(intptr_t)v3378;
	i8 v3380 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3380)(v3379, v3376, v3375);

endsub:;
}
const i1 c02_s0142[] = { 0x25,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_17 workspace at ws+3936 length ws+0
void f197_emit_17(void) {

	i1 v3381 = (i1)+1;
	i8 v3382 = (i8)(intptr_t)c02_s0142;
	i8 v3383 = (i8)(intptr_t)(ws+3896);
	i8 v3384 = *(i8*)(intptr_t)v3383;
	i4 v3385 = *(i4*)(intptr_t)v3384;
	i8 v3386 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3386)(v3385, v3382, v3381);

endsub:;
}
const i1 c02_s0143[] = { 0x25,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_18 workspace at ws+3936 length ws+0
void f198_emit_18(void) {

	i1 v3387 = (i1)+2;
	i8 v3388 = (i8)(intptr_t)c02_s0143;
	i8 v3389 = (i8)(intptr_t)(ws+3896);
	i8 v3390 = *(i8*)(intptr_t)v3389;
	i4 v3391 = *(i4*)(intptr_t)v3390;
	i8 v3392 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3392)(v3391, v3388, v3387);

endsub:;
}
const i1 c02_s0144[] = { 0x25,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_19 workspace at ws+3936 length ws+0
void f199_emit_19(void) {

	i1 v3393 = (i1)+4;
	i8 v3394 = (i8)(intptr_t)c02_s0144;
	i8 v3395 = (i8)(intptr_t)(ws+3896);
	i8 v3396 = *(i8*)(intptr_t)v3395;
	i4 v3397 = *(i4*)(intptr_t)v3396;
	i8 v3398 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3398)(v3397, v3394, v3393);

endsub:;
}
const i1 c02_s0145[] = { 0x25,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_20 workspace at ws+3936 length ws+0
void f200_emit_20(void) {

	i1 v3399 = (i1)+8;
	i8 v3400 = (i8)(intptr_t)c02_s0145;
	i8 v3401 = (i8)(intptr_t)(ws+3896);
	i8 v3402 = *(i8*)(intptr_t)v3401;
	i4 v3403 = *(i4*)(intptr_t)v3402;
	i8 v3404 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3404)(v3403, v3400, v3399);

endsub:;
}
const i1 c02_s0146[] = { 0x2f,0 };
	void f165_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_21 workspace at ws+3936 length ws+0
void f201_emit_21(void) {

	i1 v3405 = (i1)+1;
	i8 v3406 = (i8)(intptr_t)c02_s0146;
	i8 v3407 = (i8)(intptr_t)(ws+3896);
	i8 v3408 = *(i8*)(intptr_t)v3407;
	i4 v3409 = *(i4*)(intptr_t)v3408;
	i8 v3410 = (i8)(intptr_t)(f165_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3410)(v3409, v3406, v3405);

endsub:;
}
const i1 c02_s0147[] = { 0x2f,0 };
	void f165_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_22 workspace at ws+3936 length ws+0
void f202_emit_22(void) {

	i1 v3411 = (i1)+2;
	i8 v3412 = (i8)(intptr_t)c02_s0147;
	i8 v3413 = (i8)(intptr_t)(ws+3896);
	i8 v3414 = *(i8*)(intptr_t)v3413;
	i4 v3415 = *(i4*)(intptr_t)v3414;
	i8 v3416 = (i8)(intptr_t)(f165_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3416)(v3415, v3412, v3411);

endsub:;
}
const i1 c02_s0148[] = { 0x2f,0 };
	void f165_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_23 workspace at ws+3936 length ws+0
void f203_emit_23(void) {

	i1 v3417 = (i1)+4;
	i8 v3418 = (i8)(intptr_t)c02_s0148;
	i8 v3419 = (i8)(intptr_t)(ws+3896);
	i8 v3420 = *(i8*)(intptr_t)v3419;
	i4 v3421 = *(i4*)(intptr_t)v3420;
	i8 v3422 = (i8)(intptr_t)(f165_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3422)(v3421, v3418, v3417);

endsub:;
}
const i1 c02_s0149[] = { 0x2f,0 };
	void f165_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_24 workspace at ws+3936 length ws+0
void f204_emit_24(void) {

	i1 v3423 = (i1)+8;
	i8 v3424 = (i8)(intptr_t)c02_s0149;
	i8 v3425 = (i8)(intptr_t)(ws+3896);
	i8 v3426 = *(i8*)(intptr_t)v3425;
	i4 v3427 = *(i4*)(intptr_t)v3426;
	i8 v3428 = (i8)(intptr_t)(f165_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3428)(v3427, v3424, v3423);

endsub:;
}
const i1 c02_s014a[] = { 0x25,0 };
	void f165_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_25 workspace at ws+3936 length ws+0
void f205_emit_25(void) {

	i1 v3429 = (i1)+1;
	i8 v3430 = (i8)(intptr_t)c02_s014a;
	i8 v3431 = (i8)(intptr_t)(ws+3896);
	i8 v3432 = *(i8*)(intptr_t)v3431;
	i4 v3433 = *(i4*)(intptr_t)v3432;
	i8 v3434 = (i8)(intptr_t)(f165_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3434)(v3433, v3430, v3429);

endsub:;
}
const i1 c02_s014b[] = { 0x25,0 };
	void f165_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_26 workspace at ws+3936 length ws+0
void f206_emit_26(void) {

	i1 v3435 = (i1)+2;
	i8 v3436 = (i8)(intptr_t)c02_s014b;
	i8 v3437 = (i8)(intptr_t)(ws+3896);
	i8 v3438 = *(i8*)(intptr_t)v3437;
	i4 v3439 = *(i4*)(intptr_t)v3438;
	i8 v3440 = (i8)(intptr_t)(f165_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3440)(v3439, v3436, v3435);

endsub:;
}
const i1 c02_s014c[] = { 0x25,0 };
	void f165_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_27 workspace at ws+3936 length ws+0
void f207_emit_27(void) {

	i1 v3441 = (i1)+4;
	i8 v3442 = (i8)(intptr_t)c02_s014c;
	i8 v3443 = (i8)(intptr_t)(ws+3896);
	i8 v3444 = *(i8*)(intptr_t)v3443;
	i4 v3445 = *(i4*)(intptr_t)v3444;
	i8 v3446 = (i8)(intptr_t)(f165_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3446)(v3445, v3442, v3441);

endsub:;
}
const i1 c02_s014d[] = { 0x25,0 };
	void f165_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_28 workspace at ws+3936 length ws+0
void f208_emit_28(void) {

	i1 v3447 = (i1)+8;
	i8 v3448 = (i8)(intptr_t)c02_s014d;
	i8 v3449 = (i8)(intptr_t)(ws+3896);
	i8 v3450 = *(i8*)(intptr_t)v3449;
	i4 v3451 = *(i4*)(intptr_t)v3450;
	i8 v3452 = (i8)(intptr_t)(f165_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3452)(v3451, v3448, v3447);

endsub:;
}
const i1 c02_s014e[] = { 0x26,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_29 workspace at ws+3936 length ws+0
void f209_emit_29(void) {

	i1 v3453 = (i1)+1;
	i8 v3454 = (i8)(intptr_t)c02_s014e;
	i8 v3455 = (i8)(intptr_t)(ws+3896);
	i8 v3456 = *(i8*)(intptr_t)v3455;
	i4 v3457 = *(i4*)(intptr_t)v3456;
	i8 v3458 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3458)(v3457, v3454, v3453);

endsub:;
}
const i1 c02_s014f[] = { 0x26,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_30 workspace at ws+3936 length ws+0
void f210_emit_30(void) {

	i1 v3459 = (i1)+2;
	i8 v3460 = (i8)(intptr_t)c02_s014f;
	i8 v3461 = (i8)(intptr_t)(ws+3896);
	i8 v3462 = *(i8*)(intptr_t)v3461;
	i4 v3463 = *(i4*)(intptr_t)v3462;
	i8 v3464 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3464)(v3463, v3460, v3459);

endsub:;
}
const i1 c02_s0150[] = { 0x26,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_31 workspace at ws+3936 length ws+0
void f211_emit_31(void) {

	i1 v3465 = (i1)+4;
	i8 v3466 = (i8)(intptr_t)c02_s0150;
	i8 v3467 = (i8)(intptr_t)(ws+3896);
	i8 v3468 = *(i8*)(intptr_t)v3467;
	i4 v3469 = *(i4*)(intptr_t)v3468;
	i8 v3470 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3470)(v3469, v3466, v3465);

endsub:;
}
const i1 c02_s0151[] = { 0x26,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_32 workspace at ws+3936 length ws+0
void f212_emit_32(void) {

	i1 v3471 = (i1)+8;
	i8 v3472 = (i8)(intptr_t)c02_s0151;
	i8 v3473 = (i8)(intptr_t)(ws+3896);
	i8 v3474 = *(i8*)(intptr_t)v3473;
	i4 v3475 = *(i4*)(intptr_t)v3474;
	i8 v3476 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3476)(v3475, v3472, v3471);

endsub:;
}
const i1 c02_s0152[] = { 0x7c,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_33 workspace at ws+3936 length ws+0
void f213_emit_33(void) {

	i1 v3477 = (i1)+1;
	i8 v3478 = (i8)(intptr_t)c02_s0152;
	i8 v3479 = (i8)(intptr_t)(ws+3896);
	i8 v3480 = *(i8*)(intptr_t)v3479;
	i4 v3481 = *(i4*)(intptr_t)v3480;
	i8 v3482 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3482)(v3481, v3478, v3477);

endsub:;
}
const i1 c02_s0153[] = { 0x7c,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_34 workspace at ws+3936 length ws+0
void f214_emit_34(void) {

	i1 v3483 = (i1)+2;
	i8 v3484 = (i8)(intptr_t)c02_s0153;
	i8 v3485 = (i8)(intptr_t)(ws+3896);
	i8 v3486 = *(i8*)(intptr_t)v3485;
	i4 v3487 = *(i4*)(intptr_t)v3486;
	i8 v3488 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3488)(v3487, v3484, v3483);

endsub:;
}
const i1 c02_s0154[] = { 0x7c,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_35 workspace at ws+3936 length ws+0
void f215_emit_35(void) {

	i1 v3489 = (i1)+4;
	i8 v3490 = (i8)(intptr_t)c02_s0154;
	i8 v3491 = (i8)(intptr_t)(ws+3896);
	i8 v3492 = *(i8*)(intptr_t)v3491;
	i4 v3493 = *(i4*)(intptr_t)v3492;
	i8 v3494 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3494)(v3493, v3490, v3489);

endsub:;
}
const i1 c02_s0155[] = { 0x7c,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_36 workspace at ws+3936 length ws+0
void f216_emit_36(void) {

	i1 v3495 = (i1)+8;
	i8 v3496 = (i8)(intptr_t)c02_s0155;
	i8 v3497 = (i8)(intptr_t)(ws+3896);
	i8 v3498 = *(i8*)(intptr_t)v3497;
	i4 v3499 = *(i4*)(intptr_t)v3498;
	i8 v3500 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3500)(v3499, v3496, v3495);

endsub:;
}
const i1 c02_s0156[] = { 0x5e,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_37 workspace at ws+3936 length ws+0
void f217_emit_37(void) {

	i1 v3501 = (i1)+1;
	i8 v3502 = (i8)(intptr_t)c02_s0156;
	i8 v3503 = (i8)(intptr_t)(ws+3896);
	i8 v3504 = *(i8*)(intptr_t)v3503;
	i4 v3505 = *(i4*)(intptr_t)v3504;
	i8 v3506 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3506)(v3505, v3502, v3501);

endsub:;
}
const i1 c02_s0157[] = { 0x5e,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_38 workspace at ws+3936 length ws+0
void f218_emit_38(void) {

	i1 v3507 = (i1)+2;
	i8 v3508 = (i8)(intptr_t)c02_s0157;
	i8 v3509 = (i8)(intptr_t)(ws+3896);
	i8 v3510 = *(i8*)(intptr_t)v3509;
	i4 v3511 = *(i4*)(intptr_t)v3510;
	i8 v3512 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3512)(v3511, v3508, v3507);

endsub:;
}
const i1 c02_s0158[] = { 0x5e,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_39 workspace at ws+3936 length ws+0
void f219_emit_39(void) {

	i1 v3513 = (i1)+4;
	i8 v3514 = (i8)(intptr_t)c02_s0158;
	i8 v3515 = (i8)(intptr_t)(ws+3896);
	i8 v3516 = *(i8*)(intptr_t)v3515;
	i4 v3517 = *(i4*)(intptr_t)v3516;
	i8 v3518 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3518)(v3517, v3514, v3513);

endsub:;
}
const i1 c02_s0159[] = { 0x5e,0 };
	void f163_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_40 workspace at ws+3936 length ws+0
void f220_emit_40(void) {

	i1 v3519 = (i1)+8;
	i8 v3520 = (i8)(intptr_t)c02_s0159;
	i8 v3521 = (i8)(intptr_t)(ws+3896);
	i8 v3522 = *(i8*)(intptr_t)v3521;
	i4 v3523 = *(i4*)(intptr_t)v3522;
	i8 v3524 = (i8)(intptr_t)(f163_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v3524)(v3523, v3520, v3519);

endsub:;
}
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s015a[] = { 0x3a,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_43 workspace at ws+3936 length ws+0
void f221_emit_43(void) {

	i8 v3525 = (i8)(intptr_t)(ws+3864);
	i8 v3526 = *(i8*)(intptr_t)v3525;
	i2 v3527 = *(i2*)(intptr_t)v3526;
	i8 v3528 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3528)(v3527);

	i8 v3529 = (i8)(intptr_t)c02_s015a;
	i8 v3530 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3530)(v3529);

endsub:;
}
const i1 c02_s015b[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f87_E(i8 /* text */);
	void f98_E_labelref(i2 /* labelid */);
const i1 c02_s015c[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_44 workspace at ws+3936 length ws+0
void f222_emit_44(void) {

	i8 v3531 = (i8)(intptr_t)c02_s015b;
	i8 v3532 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3532)(v3531);

	i8 v3533 = (i8)(intptr_t)(ws+3864);
	i8 v3534 = *(i8*)(intptr_t)v3533;
	i2 v3535 = *(i2*)(intptr_t)v3534;
	i8 v3536 = (i8)(intptr_t)(f98_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v3536)(v3535);

	i8 v3537 = (i8)(intptr_t)c02_s015c;
	i8 v3538 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3538)(v3537);

endsub:;
}
const i1 c02_s015d[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_45 workspace at ws+3936 length ws+0
void f223_emit_45(void) {

	i8 v3539 = (i8)(intptr_t)c02_s015d;
	i8 v3540 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3540)(v3539);

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

// comma workspace at ws+3960 length ws+0
void f225_comma(void) {

	i8 v3583 = (i8)(intptr_t)(ws+3936);
	i1 v3584 = *(i1*)(intptr_t)v3583;
	i1 v3585 = (i1)+0;
	if (v3584==v3585) goto c02_0283; else goto c02_0284;

c02_0283:;

	i8 v3586 = (i8)(intptr_t)c02_s0163;
	i8 v3587 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3587)(v3586);

c02_0284:;

c02_0280:;

	i1 v3588 = (i1)+0;
	i8 v3589 = (i8)(intptr_t)(ws+3936);
	*(i1*)(intptr_t)v3589 = v3588;

endsub:;
}
	void f69_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f152_Push(i2* /* vid */);
	void f225_comma(void);
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
	void f152_Push(i2* /* vid */);
	void f225_comma(void);
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
	void f154_Pop(i2* /* vid */);
const i1 c02_s016e[] = { 0x09,0x2a,0x28,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s016f[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f148_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0170[] = { 0x29,0x20,0x3d,0x20,0x70,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0171[] = { 0x3b,0x20,0x2f,0x2a,0 };
	void f87_E(i8 /* text */);
	void f87_E(i8 /* text */);
const i1 c02_s0172[] = { 0x20,0x2a,0x2f,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_46 workspace at ws+3936 length ws+18
void f224_emit_46(void) {

	i8 v3541 = (i8)(intptr_t)(ws+40);
	i8 v3542 = *(i8*)(intptr_t)v3541;
	i8 v3543 = (i8)(intptr_t)(f101_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v3543)(v3542);

	i8 v3544 = (i8)(intptr_t)c02_s015e;
	i8 v3545 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3545)(v3544);

	i8 v3546 = (i8)(intptr_t)(ws+40);
	i8 v3547 = *(i8*)(intptr_t)v3546;
	i8 v3548 = *(i8*)(intptr_t)v3547;
	i8 v3549 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3549)(v3548);

	i8 v3550 = (i8)(intptr_t)c02_s015f;
	i8 v3551 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3551)(v3550);

	i1 v3552 = (i1)+2;
	i8 v3553 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3553)(v3552);

	i8 v3554 = (i8)(intptr_t)(ws+40);
	i8 v3555 = *(i8*)(intptr_t)v3554;
	i8 v3556 = v3555+(+8);
	i2 v3557 = *(i2*)(intptr_t)v3556;
	i8 v3558 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3558)(v3557);

	i1 v3559 = (i1)+0;
	i8 v3560 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3560)(v3559);

	i2 v3561 = (i2)+0;
	i8 v3562 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3562)(v3561);

	i8 v3563 = (i8)(intptr_t)c02_s0160;
	i8 v3564 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3564)(v3563);

	i1 v3565 = (i1)+5;
	i8 v3566 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3566)(v3565);

	i8 v3567 = (i8)(intptr_t)(ws+40);
	i8 v3568 = *(i8*)(intptr_t)v3567;
	i8 v3569 = v3568+(+8);
	i2 v3570 = *(i2*)(intptr_t)v3569;
	i8 v3571 = (i8)(intptr_t)(f79_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3571)(v3570);

	i1 v3572 = (i1)+0;
	i8 v3573 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3573)(v3572);

	i8 v3574 = (i8)(intptr_t)c02_s0161;
	i8 v3575 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3575)(v3574);

	i8 v3576 = (i8)(intptr_t)(ws+40);
	i8 v3577 = *(i8*)(intptr_t)v3576;
	i8 v3578 = (i8)(intptr_t)(f99_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v3578)(v3577);

	i8 v3579 = (i8)(intptr_t)c02_s0162;
	i8 v3580 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3580)(v3579);

	i1 v3581 = (i1)+1;
	i8 v3582 = (i8)(intptr_t)(ws+3936);
	*(i1*)(intptr_t)v3582 = v3581;


	i1 v3590 = (i1)+0;
	i8 v3591 = (i8)(intptr_t)(ws+3937);
	*(i1*)(intptr_t)v3591 = v3590;

c02_0287:;

	i8 v3592 = (i8)(intptr_t)(ws+3937);
	i1 v3593 = *(i1*)(intptr_t)v3592;
	i8 v3594 = (i8)(intptr_t)(ws+40);
	i8 v3595 = *(i8*)(intptr_t)v3594;
	i8 v3596 = v3595+(+49);
	i1 v3597 = *(i1*)(intptr_t)v3596;
	if (v3593==v3597) goto c02_028a; else goto c02_0289;

c02_0289:;

	i8 v3598 = (i8)(intptr_t)(ws+40);
	i8 v3599 = *(i8*)(intptr_t)v3598;
	i8 v3600 = (i8)(intptr_t)(ws+3937);
	i1 v3601 = *(i1*)(intptr_t)v3600;
	i8 v3602 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v3603;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3602)(&v3603, v3601, v3599);
	i8 v3604 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v3604 = v3603;

	i8 v3605 = (i8)(intptr_t)(f152_Push);
	i2 v3606;

	((void(*)(i2* /* vid */))(intptr_t)v3605)(&v3606);
	i8 v3607 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v3607 = v3606;

	i8 v3608 = (i8)(intptr_t)(f225_comma);

	((void(*)(void))(intptr_t)v3608)();

	i8 v3609 = (i8)(intptr_t)c02_s0164;
	i8 v3610 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3610)(v3609);

	i8 v3611 = (i8)(intptr_t)(ws+3944);
	i8 v3612 = *(i8*)(intptr_t)v3611;
	i8 v3613 = v3612+(+14);
	i1 v3614 = *(i1*)(intptr_t)v3613;
	i8 v3615 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3615)(v3614);

	i8 v3616 = (i8)(intptr_t)c02_s0165;
	i8 v3617 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3617)(v3616);

	i8 v3618 = (i8)(intptr_t)(ws+3952);
	i2 v3619 = *(i2*)(intptr_t)v3618;
	i8 v3620 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3620)(v3619);

	i8 v3621 = (i8)(intptr_t)c02_s0166;
	i8 v3622 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3622)(v3621);

	i8 v3623 = (i8)(intptr_t)(ws+3944);
	i8 v3624 = *(i8*)(intptr_t)v3623;
	i8 v3625 = v3624+(+16);
	i8 v3626 = *(i8*)(intptr_t)v3625;
	i8 v3627 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3627)(v3626);

	i8 v3628 = (i8)(intptr_t)c02_s0167;
	i8 v3629 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3629)(v3628);

	i8 v3630 = (i8)(intptr_t)(ws+3937);
	i1 v3631 = *(i1*)(intptr_t)v3630;
	i1 v3632 = v3631+(+1);
	i8 v3633 = (i8)(intptr_t)(ws+3937);
	*(i1*)(intptr_t)v3633 = v3632;

	goto c02_0287;

c02_028a:;

	i8 v3634 = (i8)(intptr_t)(ws+40);
	i8 v3635 = *(i8*)(intptr_t)v3634;
	i8 v3636 = v3635+(+48);
	i1 v3637 = *(i1*)(intptr_t)v3636;
	i8 v3638 = (i8)(intptr_t)(ws+3937);
	*(i1*)(intptr_t)v3638 = v3637;

c02_028d:;

	i8 v3639 = (i8)(intptr_t)(ws+3937);
	i1 v3640 = *(i1*)(intptr_t)v3639;
	i1 v3641 = (i1)+0;
	if (v3640==v3641) goto c02_0290; else goto c02_028f;

c02_028f:;

	i8 v3642 = (i8)(intptr_t)(ws+3937);
	i1 v3643 = *(i1*)(intptr_t)v3642;
	i1 v3644 = v3643+(-1);
	i8 v3645 = (i8)(intptr_t)(ws+3937);
	*(i1*)(intptr_t)v3645 = v3644;

	i8 v3646 = (i8)(intptr_t)(ws+40);
	i8 v3647 = *(i8*)(intptr_t)v3646;
	i8 v3648 = (i8)(intptr_t)(ws+3937);
	i1 v3649 = *(i1*)(intptr_t)v3648;
	i8 v3650 = (i8)(intptr_t)(f68_GetInputParameter);
	i8 v3651;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3650)(&v3651, v3649, v3647);
	i8 v3652 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v3652 = v3651;

	i8 v3653 = (i8)(intptr_t)(f152_Push);
	i2 v3654;

	((void(*)(i2* /* vid */))(intptr_t)v3653)(&v3654);
	i8 v3655 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v3655 = v3654;

	i8 v3656 = (i8)(intptr_t)(f225_comma);

	((void(*)(void))(intptr_t)v3656)();

	i8 v3657 = (i8)(intptr_t)c02_s0168;
	i8 v3658 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3658)(v3657);

	i8 v3659 = (i8)(intptr_t)(ws+3944);
	i8 v3660 = *(i8*)(intptr_t)v3659;
	i8 v3661 = v3660+(+14);
	i1 v3662 = *(i1*)(intptr_t)v3661;
	i8 v3663 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3663)(v3662);

	i8 v3664 = (i8)(intptr_t)c02_s0169;
	i8 v3665 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3665)(v3664);

	i8 v3666 = (i8)(intptr_t)(ws+3952);
	i2 v3667 = *(i2*)(intptr_t)v3666;
	i8 v3668 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3668)(v3667);

	i8 v3669 = (i8)(intptr_t)c02_s016a;
	i8 v3670 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3670)(v3669);

	i8 v3671 = (i8)(intptr_t)(ws+3944);
	i8 v3672 = *(i8*)(intptr_t)v3671;
	i8 v3673 = v3672+(+16);
	i8 v3674 = *(i8*)(intptr_t)v3673;
	i8 v3675 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3675)(v3674);

	i8 v3676 = (i8)(intptr_t)c02_s016b;
	i8 v3677 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3677)(v3676);

	goto c02_028d;

c02_0290:;

	i8 v3678 = (i8)(intptr_t)(ws+40);
	i8 v3679 = *(i8*)(intptr_t)v3678;
	i8 v3680 = v3679+(+48);
	i1 v3681 = *(i1*)(intptr_t)v3680;
	i8 v3682 = (i8)(intptr_t)(ws+40);
	i8 v3683 = *(i8*)(intptr_t)v3682;
	i8 v3684 = v3683+(+49);
	i1 v3685 = *(i1*)(intptr_t)v3684;
	i1 v3686 = v3681+v3685;
	i1 v3687 = (i1)+0;
	if (v3686==v3687) goto c02_0294; else goto c02_0295;

c02_0294:;

	i8 v3688 = (i8)(intptr_t)c02_s016c;
	i8 v3689 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3689)(v3688);

c02_0295:;

c02_0291:;

	i8 v3690 = (i8)(intptr_t)c02_s016d;
	i8 v3691 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3691)(v3690);

	i1 v3692 = (i1)+0;
	i8 v3693 = (i8)(intptr_t)(ws+3937);
	*(i1*)(intptr_t)v3693 = v3692;

c02_0298:;

	i8 v3694 = (i8)(intptr_t)(ws+3937);
	i1 v3695 = *(i1*)(intptr_t)v3694;
	i8 v3696 = (i8)(intptr_t)(ws+40);
	i8 v3697 = *(i8*)(intptr_t)v3696;
	i8 v3698 = v3697+(+48);
	i1 v3699 = *(i1*)(intptr_t)v3698;
	if (v3695==v3699) goto c02_029b; else goto c02_029a;

c02_029a:;

	i8 v3700 = (i8)(intptr_t)(ws+40);
	i8 v3701 = *(i8*)(intptr_t)v3700;
	i8 v3702 = (i8)(intptr_t)(ws+3937);
	i1 v3703 = *(i1*)(intptr_t)v3702;
	i8 v3704 = (i8)(intptr_t)(f68_GetInputParameter);
	i8 v3705;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3704)(&v3705, v3703, v3701);
	i8 v3706 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v3706 = v3705;

	i8 v3707 = (i8)(intptr_t)(f154_Pop);
	i2 v3708;

	((void(*)(i2* /* vid */))(intptr_t)v3707)(&v3708);
	i8 v3709 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v3709 = v3708;

	i8 v3710 = (i8)(intptr_t)c02_s016e;
	i8 v3711 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3711)(v3710);

	i8 v3712 = (i8)(intptr_t)(ws+3944);
	i8 v3713 = *(i8*)(intptr_t)v3712;
	i8 v3714 = v3713+(+14);
	i1 v3715 = *(i1*)(intptr_t)v3714;
	i8 v3716 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3716)(v3715);

	i8 v3717 = (i8)(intptr_t)c02_s016f;
	i8 v3718 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3718)(v3717);

	i8 v3719 = (i8)(intptr_t)(ws+3944);
	i8 v3720 = *(i8*)(intptr_t)v3719;
	i2 v3721 = (i2)+0;
	i8 v3722 = (i8)(intptr_t)(f148_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v3722)(v3721, v3720);

	i8 v3723 = (i8)(intptr_t)c02_s0170;
	i8 v3724 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3724)(v3723);

	i8 v3725 = (i8)(intptr_t)(ws+3952);
	i2 v3726 = *(i2*)(intptr_t)v3725;
	i8 v3727 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3727)(v3726);

	i8 v3728 = (i8)(intptr_t)c02_s0171;
	i8 v3729 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3729)(v3728);

	i8 v3730 = (i8)(intptr_t)(ws+3944);
	i8 v3731 = *(i8*)(intptr_t)v3730;
	i8 v3732 = v3731+(+16);
	i8 v3733 = *(i8*)(intptr_t)v3732;
	i8 v3734 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3734)(v3733);

	i8 v3735 = (i8)(intptr_t)c02_s0172;
	i8 v3736 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3736)(v3735);

	i8 v3737 = (i8)(intptr_t)(ws+3937);
	i1 v3738 = *(i1*)(intptr_t)v3737;
	i1 v3739 = v3738+(+1);
	i8 v3740 = (i8)(intptr_t)(ws+3937);
	*(i1*)(intptr_t)v3740 = v3739;

	goto c02_0298;

c02_029b:;

endsub:;
}
const i1 c02_s0173[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f69_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f154_Pop(i2* /* vid */);
const i1 c02_s0174[] = { 0x09,0x2a,0x70,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s0175[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s0176[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f148_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0177[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
const i1 c02_s0178[] = { 0x7d,0x0a,0 };
	void f87_E(i8 /* text */);
	void f102_EmitterCloseStream(void);

// emit_47 workspace at ws+3936 length ws+18
void f226_emit_47(void) {

	i8 v3741 = (i8)(intptr_t)c02_s0173;
	i8 v3742 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3742)(v3741);

	i8 v3743 = (i8)(intptr_t)(ws+40);
	i8 v3744 = *(i8*)(intptr_t)v3743;
	i8 v3745 = v3744+(+49);
	i1 v3746 = *(i1*)(intptr_t)v3745;
	i8 v3747 = (i8)(intptr_t)(ws+3936);
	*(i1*)(intptr_t)v3747 = v3746;

c02_029e:;

	i8 v3748 = (i8)(intptr_t)(ws+3936);
	i1 v3749 = *(i1*)(intptr_t)v3748;
	i1 v3750 = (i1)+0;
	if (v3749==v3750) goto c02_02a1; else goto c02_02a0;

c02_02a0:;

	i8 v3751 = (i8)(intptr_t)(ws+3936);
	i1 v3752 = *(i1*)(intptr_t)v3751;
	i1 v3753 = v3752+(-1);
	i8 v3754 = (i8)(intptr_t)(ws+3936);
	*(i1*)(intptr_t)v3754 = v3753;

	i8 v3755 = (i8)(intptr_t)(ws+40);
	i8 v3756 = *(i8*)(intptr_t)v3755;
	i8 v3757 = (i8)(intptr_t)(ws+3936);
	i1 v3758 = *(i1*)(intptr_t)v3757;
	i8 v3759 = (i8)(intptr_t)(f69_GetOutputParameter);
	i8 v3760;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3759)(&v3760, v3758, v3756);
	i8 v3761 = (i8)(intptr_t)(ws+3944);
	*(i8*)(intptr_t)v3761 = v3760;

	i8 v3762 = (i8)(intptr_t)(f154_Pop);
	i2 v3763;

	((void(*)(i2* /* vid */))(intptr_t)v3762)(&v3763);
	i8 v3764 = (i8)(intptr_t)(ws+3952);
	*(i2*)(intptr_t)v3764 = v3763;

	i8 v3765 = (i8)(intptr_t)c02_s0174;
	i8 v3766 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3766)(v3765);

	i8 v3767 = (i8)(intptr_t)(ws+3952);
	i2 v3768 = *(i2*)(intptr_t)v3767;
	i8 v3769 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3769)(v3768);

	i8 v3770 = (i8)(intptr_t)c02_s0175;
	i8 v3771 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3771)(v3770);

	i8 v3772 = (i8)(intptr_t)(ws+3944);
	i8 v3773 = *(i8*)(intptr_t)v3772;
	i8 v3774 = v3773+(+14);
	i1 v3775 = *(i1*)(intptr_t)v3774;
	i8 v3776 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v3776)(v3775);

	i8 v3777 = (i8)(intptr_t)c02_s0176;
	i8 v3778 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3778)(v3777);

	i8 v3779 = (i8)(intptr_t)(ws+3944);
	i8 v3780 = *(i8*)(intptr_t)v3779;
	i2 v3781 = (i2)+0;
	i8 v3782 = (i8)(intptr_t)(f148_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v3782)(v3781, v3780);

	i8 v3783 = (i8)(intptr_t)c02_s0177;
	i8 v3784 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3784)(v3783);

	goto c02_029e;

c02_02a1:;

	i8 v3785 = (i8)(intptr_t)c02_s0178;
	i8 v3786 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3786)(v3785);

	i8 v3787 = (i8)(intptr_t)(f102_EmitterCloseStream);

	((void(*)(void))(intptr_t)v3787)();

endsub:;
}
	void f157_Call(i2 /* subrid */);

// emit_48 workspace at ws+3936 length ws+0
void f227_emit_48(void) {

	i8 v3788 = (i8)(intptr_t)(ws+3864);
	i8 v3789 = *(i8*)(intptr_t)v3788;
	i8 v3790 = *(i8*)(intptr_t)v3789;
	i8 v3791 = v3790+(+8);
	i2 v3792 = *(i2*)(intptr_t)v3791;
	i8 v3793 = (i8)(intptr_t)(f157_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3793)(v3792);

endsub:;
}
	void f157_Call(i2 /* subrid */);

// emit_49 workspace at ws+3936 length ws+0
void f228_emit_49(void) {

	i8 v3794 = (i8)(intptr_t)(ws+3864);
	i8 v3795 = *(i8*)(intptr_t)v3794;
	i8 v3796 = *(i8*)(intptr_t)v3795;
	i8 v3797 = v3796+(+8);
	i2 v3798 = *(i2*)(intptr_t)v3797;
	i8 v3799 = (i8)(intptr_t)(f157_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3799)(v3798);

endsub:;
}
	void f157_Call(i2 /* subrid */);

// emit_50 workspace at ws+3936 length ws+0
void f229_emit_50(void) {

	i8 v3800 = (i8)(intptr_t)(ws+3864);
	i8 v3801 = *(i8*)(intptr_t)v3800;
	i8 v3802 = *(i8*)(intptr_t)v3801;
	i8 v3803 = v3802+(+8);
	i2 v3804 = *(i2*)(intptr_t)v3803;
	i8 v3805 = (i8)(intptr_t)(f157_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3805)(v3804);

endsub:;
}
	void f157_Call(i2 /* subrid */);

// emit_51 workspace at ws+3936 length ws+0
void f230_emit_51(void) {

	i8 v3806 = (i8)(intptr_t)(ws+3864);
	i8 v3807 = *(i8*)(intptr_t)v3806;
	i8 v3808 = *(i8*)(intptr_t)v3807;
	i8 v3809 = v3808+(+8);
	i2 v3810 = *(i2*)(intptr_t)v3809;
	i8 v3811 = (i8)(intptr_t)(f157_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3811)(v3810);

endsub:;
}
	void f157_Call(i2 /* subrid */);

// emit_52 workspace at ws+3936 length ws+0
void f231_emit_52(void) {

	i8 v3812 = (i8)(intptr_t)(ws+3864);
	i8 v3813 = *(i8*)(intptr_t)v3812;
	i8 v3814 = *(i8*)(intptr_t)v3813;
	i8 v3815 = v3814+(+8);
	i2 v3816 = *(i2*)(intptr_t)v3815;
	i8 v3817 = (i8)(intptr_t)(f157_Call);

	((void(*)(i2 /* subrid */))(intptr_t)v3817)(v3816);

endsub:;
}
	void f159_LoadConstant(i4 /* value */, i1 /* width */);

// emit_62 workspace at ws+3936 length ws+0
void f232_emit_62(void) {

	i1 v3818 = (i1)+1;
	i8 v3819 = (i8)(intptr_t)(ws+3864);
	i8 v3820 = *(i8*)(intptr_t)v3819;
	i4 v3821 = *(i4*)(intptr_t)v3820;
	i8 v3822 = (i8)(intptr_t)(f159_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v3822)(v3821, v3818);

endsub:;
}
	void f159_LoadConstant(i4 /* value */, i1 /* width */);

// emit_63 workspace at ws+3936 length ws+0
void f233_emit_63(void) {

	i1 v3823 = (i1)+2;
	i8 v3824 = (i8)(intptr_t)(ws+3864);
	i8 v3825 = *(i8*)(intptr_t)v3824;
	i4 v3826 = *(i4*)(intptr_t)v3825;
	i8 v3827 = (i8)(intptr_t)(f159_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v3827)(v3826, v3823);

endsub:;
}
	void f159_LoadConstant(i4 /* value */, i1 /* width */);

// emit_64 workspace at ws+3936 length ws+0
void f234_emit_64(void) {

	i1 v3828 = (i1)+4;
	i8 v3829 = (i8)(intptr_t)(ws+3864);
	i8 v3830 = *(i8*)(intptr_t)v3829;
	i4 v3831 = *(i4*)(intptr_t)v3830;
	i8 v3832 = (i8)(intptr_t)(f159_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v3832)(v3831, v3828);

endsub:;
}
	void f159_LoadConstant(i4 /* value */, i1 /* width */);

// emit_65 workspace at ws+3936 length ws+0
void f235_emit_65(void) {

	i1 v3833 = (i1)+8;
	i8 v3834 = (i8)(intptr_t)(ws+3864);
	i8 v3835 = *(i8*)(intptr_t)v3834;
	i4 v3836 = *(i4*)(intptr_t)v3835;
	i8 v3837 = (i8)(intptr_t)(f159_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v3837)(v3836, v3833);

endsub:;
}
	void f152_Push(i2* /* vid */);
const i1 c02_s0179[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s017a[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f148_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s017b[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_66 workspace at ws+3936 length ws+2
void f236_emit_66(void) {

	i8 v3838 = (i8)(intptr_t)(f152_Push);
	i2 v3839;

	((void(*)(i2* /* vid */))(intptr_t)v3838)(&v3839);
	i8 v3840 = (i8)(intptr_t)(ws+3936);
	*(i2*)(intptr_t)v3840 = v3839;

	i8 v3841 = (i8)(intptr_t)c02_s0179;
	i8 v3842 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3842)(v3841);

	i8 v3843 = (i8)(intptr_t)(ws+3936);
	i2 v3844 = *(i2*)(intptr_t)v3843;
	i8 v3845 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3845)(v3844);

	i8 v3846 = (i8)(intptr_t)c02_s017a;
	i8 v3847 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3847)(v3846);

	i8 v3848 = (i8)(intptr_t)(ws+3864);
	i8 v3849 = *(i8*)(intptr_t)v3848;
	i8 v3850 = (i8)(intptr_t)(ws+3864);
	i8 v3851 = *(i8*)(intptr_t)v3850;
	i8 v3852 = v3851+(+16);
	i2 v3853 = *(i2*)(intptr_t)v3852;
	i8 v3854 = (i8)(intptr_t)(f148_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v3854)(v3853, v3849);

	i8 v3855 = (i8)(intptr_t)c02_s017b;
	i8 v3856 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3856)(v3855);

endsub:;
}
	void f152_Push(i2* /* vid */);
const i1 c02_s017c[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s017d[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f147_E_subref_sig(i8 /* subr */);
const i1 c02_s017e[] = { 0x29,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_67 workspace at ws+3936 length ws+2
void f237_emit_67(void) {

	i8 v3857 = (i8)(intptr_t)(f152_Push);
	i2 v3858;

	((void(*)(i2* /* vid */))(intptr_t)v3857)(&v3858);
	i8 v3859 = (i8)(intptr_t)(ws+3936);
	*(i2*)(intptr_t)v3859 = v3858;

	i8 v3860 = (i8)(intptr_t)c02_s017c;
	i8 v3861 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3861)(v3860);

	i8 v3862 = (i8)(intptr_t)(ws+3936);
	i2 v3863 = *(i2*)(intptr_t)v3862;
	i8 v3864 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3864)(v3863);

	i8 v3865 = (i8)(intptr_t)c02_s017d;
	i8 v3866 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3866)(v3865);

	i8 v3867 = (i8)(intptr_t)(ws+3864);
	i8 v3868 = *(i8*)(intptr_t)v3867;
	i8 v3869 = *(i8*)(intptr_t)v3868;
	i8 v3870 = (i8)(intptr_t)(f147_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v3870)(v3869);

	i8 v3871 = (i8)(intptr_t)c02_s017e;
	i8 v3872 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v3872)(v3871);

endsub:;
}
	void f160_StoreVV(i1 /* width */);

// emit_68 workspace at ws+3936 length ws+0
void f238_emit_68(void) {

	i1 v3873 = (i1)+1;
	i8 v3874 = (i8)(intptr_t)(f160_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3874)(v3873);

endsub:;
}
	void f160_StoreVV(i1 /* width */);

// emit_69 workspace at ws+3936 length ws+0
void f239_emit_69(void) {

	i1 v3875 = (i1)+2;
	i8 v3876 = (i8)(intptr_t)(f160_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3876)(v3875);

endsub:;
}
	void f160_StoreVV(i1 /* width */);

// emit_70 workspace at ws+3936 length ws+0
void f240_emit_70(void) {

	i1 v3877 = (i1)+4;
	i8 v3878 = (i8)(intptr_t)(f160_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3878)(v3877);

endsub:;
}
	void f160_StoreVV(i1 /* width */);

// emit_71 workspace at ws+3936 length ws+0
void f241_emit_71(void) {

	i1 v3879 = (i1)+8;
	i8 v3880 = (i8)(intptr_t)(f160_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v3880)(v3879);

endsub:;
}
	void f161_LoadVV(i1 /* width */);

// emit_72 workspace at ws+3936 length ws+0
void f242_emit_72(void) {

	i1 v3881 = (i1)+1;
	i8 v3882 = (i8)(intptr_t)(f161_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v3882)(v3881);

endsub:;
}
	void f161_LoadVV(i1 /* width */);

// emit_73 workspace at ws+3936 length ws+0
void f243_emit_73(void) {

	i1 v3883 = (i1)+2;
	i8 v3884 = (i8)(intptr_t)(f161_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v3884)(v3883);

endsub:;
}
	void f161_LoadVV(i1 /* width */);

// emit_74 workspace at ws+3936 length ws+0
void f244_emit_74(void) {

	i1 v3885 = (i1)+4;
	i8 v3886 = (i8)(intptr_t)(f161_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v3886)(v3885);

endsub:;
}
	void f161_LoadVV(i1 /* width */);

// emit_75 workspace at ws+3936 length ws+0
void f245_emit_75(void) {

	i1 v3887 = (i1)+8;
	i8 v3888 = (i8)(intptr_t)(f161_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v3888)(v3887);

endsub:;
}
const i1 c02_s017f[] = { 0x2b,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_76 workspace at ws+3936 length ws+0
void f246_emit_76(void) {

	i1 v3889 = (i1)+1;
	i8 v3890 = (i8)(intptr_t)c02_s017f;
	i8 v3891 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3891)(v3890, v3889);

endsub:;
}
const i1 c02_s0180[] = { 0x2b,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_77 workspace at ws+3936 length ws+0
void f247_emit_77(void) {

	i1 v3892 = (i1)+2;
	i8 v3893 = (i8)(intptr_t)c02_s0180;
	i8 v3894 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3894)(v3893, v3892);

endsub:;
}
const i1 c02_s0181[] = { 0x2b,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_78 workspace at ws+3936 length ws+0
void f248_emit_78(void) {

	i1 v3895 = (i1)+4;
	i8 v3896 = (i8)(intptr_t)c02_s0181;
	i8 v3897 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3897)(v3896, v3895);

endsub:;
}
const i1 c02_s0182[] = { 0x2b,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_79 workspace at ws+3936 length ws+0
void f249_emit_79(void) {

	i1 v3898 = (i1)+8;
	i8 v3899 = (i8)(intptr_t)c02_s0182;
	i8 v3900 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3900)(v3899, v3898);

endsub:;
}
const i1 c02_s0183[] = { 0x2d,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_80 workspace at ws+3936 length ws+0
void f250_emit_80(void) {

	i1 v3901 = (i1)+1;
	i8 v3902 = (i8)(intptr_t)c02_s0183;
	i8 v3903 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3903)(v3902, v3901);

endsub:;
}
const i1 c02_s0184[] = { 0x2d,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_81 workspace at ws+3936 length ws+0
void f251_emit_81(void) {

	i1 v3904 = (i1)+2;
	i8 v3905 = (i8)(intptr_t)c02_s0184;
	i8 v3906 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3906)(v3905, v3904);

endsub:;
}
const i1 c02_s0185[] = { 0x2d,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_82 workspace at ws+3936 length ws+0
void f252_emit_82(void) {

	i1 v3907 = (i1)+4;
	i8 v3908 = (i8)(intptr_t)c02_s0185;
	i8 v3909 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3909)(v3908, v3907);

endsub:;
}
const i1 c02_s0186[] = { 0x2d,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_83 workspace at ws+3936 length ws+0
void f253_emit_83(void) {

	i1 v3910 = (i1)+8;
	i8 v3911 = (i8)(intptr_t)c02_s0186;
	i8 v3912 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3912)(v3911, v3910);

endsub:;
}
const i1 c02_s0187[] = { 0x2a,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_84 workspace at ws+3936 length ws+0
void f254_emit_84(void) {

	i1 v3913 = (i1)+1;
	i8 v3914 = (i8)(intptr_t)c02_s0187;
	i8 v3915 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3915)(v3914, v3913);

endsub:;
}
const i1 c02_s0188[] = { 0x2a,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_85 workspace at ws+3936 length ws+0
void f255_emit_85(void) {

	i1 v3916 = (i1)+2;
	i8 v3917 = (i8)(intptr_t)c02_s0188;
	i8 v3918 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3918)(v3917, v3916);

endsub:;
}
const i1 c02_s0189[] = { 0x2a,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_86 workspace at ws+3936 length ws+0
void f256_emit_86(void) {

	i1 v3919 = (i1)+4;
	i8 v3920 = (i8)(intptr_t)c02_s0189;
	i8 v3921 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3921)(v3920, v3919);

endsub:;
}
const i1 c02_s018a[] = { 0x2a,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_87 workspace at ws+3936 length ws+0
void f257_emit_87(void) {

	i1 v3922 = (i1)+8;
	i8 v3923 = (i8)(intptr_t)c02_s018a;
	i8 v3924 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3924)(v3923, v3922);

endsub:;
}
const i1 c02_s018b[] = { 0x2f,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_88 workspace at ws+3936 length ws+0
void f258_emit_88(void) {

	i1 v3925 = (i1)+1;
	i8 v3926 = (i8)(intptr_t)c02_s018b;
	i8 v3927 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3927)(v3926, v3925);

endsub:;
}
const i1 c02_s018c[] = { 0x2f,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_89 workspace at ws+3936 length ws+0
void f259_emit_89(void) {

	i1 v3928 = (i1)+2;
	i8 v3929 = (i8)(intptr_t)c02_s018c;
	i8 v3930 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3930)(v3929, v3928);

endsub:;
}
const i1 c02_s018d[] = { 0x2f,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_90 workspace at ws+3936 length ws+0
void f260_emit_90(void) {

	i1 v3931 = (i1)+4;
	i8 v3932 = (i8)(intptr_t)c02_s018d;
	i8 v3933 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3933)(v3932, v3931);

endsub:;
}
const i1 c02_s018e[] = { 0x2f,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_91 workspace at ws+3936 length ws+0
void f261_emit_91(void) {

	i1 v3934 = (i1)+8;
	i8 v3935 = (i8)(intptr_t)c02_s018e;
	i8 v3936 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3936)(v3935, v3934);

endsub:;
}
const i1 c02_s018f[] = { 0x25,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_92 workspace at ws+3936 length ws+0
void f262_emit_92(void) {

	i1 v3937 = (i1)+1;
	i8 v3938 = (i8)(intptr_t)c02_s018f;
	i8 v3939 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3939)(v3938, v3937);

endsub:;
}
const i1 c02_s0190[] = { 0x25,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_93 workspace at ws+3936 length ws+0
void f263_emit_93(void) {

	i1 v3940 = (i1)+2;
	i8 v3941 = (i8)(intptr_t)c02_s0190;
	i8 v3942 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3942)(v3941, v3940);

endsub:;
}
const i1 c02_s0191[] = { 0x25,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_94 workspace at ws+3936 length ws+0
void f264_emit_94(void) {

	i1 v3943 = (i1)+4;
	i8 v3944 = (i8)(intptr_t)c02_s0191;
	i8 v3945 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3945)(v3944, v3943);

endsub:;
}
const i1 c02_s0192[] = { 0x25,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_95 workspace at ws+3936 length ws+0
void f265_emit_95(void) {

	i1 v3946 = (i1)+8;
	i8 v3947 = (i8)(intptr_t)c02_s0192;
	i8 v3948 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3948)(v3947, v3946);

endsub:;
}
const i1 c02_s0193[] = { 0x2f,0 };
	void f164_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_96 workspace at ws+3936 length ws+0
void f266_emit_96(void) {

	i1 v3949 = (i1)+1;
	i8 v3950 = (i8)(intptr_t)c02_s0193;
	i8 v3951 = (i8)(intptr_t)(f164_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3951)(v3950, v3949);

endsub:;
}
const i1 c02_s0194[] = { 0x2f,0 };
	void f164_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_97 workspace at ws+3936 length ws+0
void f267_emit_97(void) {

	i1 v3952 = (i1)+2;
	i8 v3953 = (i8)(intptr_t)c02_s0194;
	i8 v3954 = (i8)(intptr_t)(f164_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3954)(v3953, v3952);

endsub:;
}
const i1 c02_s0195[] = { 0x2f,0 };
	void f164_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_98 workspace at ws+3936 length ws+0
void f268_emit_98(void) {

	i1 v3955 = (i1)+4;
	i8 v3956 = (i8)(intptr_t)c02_s0195;
	i8 v3957 = (i8)(intptr_t)(f164_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3957)(v3956, v3955);

endsub:;
}
const i1 c02_s0196[] = { 0x2f,0 };
	void f164_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_99 workspace at ws+3936 length ws+0
void f269_emit_99(void) {

	i1 v3958 = (i1)+8;
	i8 v3959 = (i8)(intptr_t)c02_s0196;
	i8 v3960 = (i8)(intptr_t)(f164_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3960)(v3959, v3958);

endsub:;
}
const i1 c02_s0197[] = { 0x25,0 };
	void f164_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_100 workspace at ws+3936 length ws+0
void f270_emit_100(void) {

	i1 v3961 = (i1)+1;
	i8 v3962 = (i8)(intptr_t)c02_s0197;
	i8 v3963 = (i8)(intptr_t)(f164_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3963)(v3962, v3961);

endsub:;
}
const i1 c02_s0198[] = { 0x25,0 };
	void f164_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_101 workspace at ws+3936 length ws+0
void f271_emit_101(void) {

	i1 v3964 = (i1)+2;
	i8 v3965 = (i8)(intptr_t)c02_s0198;
	i8 v3966 = (i8)(intptr_t)(f164_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3966)(v3965, v3964);

endsub:;
}
const i1 c02_s0199[] = { 0x25,0 };
	void f164_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_102 workspace at ws+3936 length ws+0
void f272_emit_102(void) {

	i1 v3967 = (i1)+4;
	i8 v3968 = (i8)(intptr_t)c02_s0199;
	i8 v3969 = (i8)(intptr_t)(f164_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3969)(v3968, v3967);

endsub:;
}
const i1 c02_s019a[] = { 0x25,0 };
	void f164_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_103 workspace at ws+3936 length ws+0
void f273_emit_103(void) {

	i1 v3970 = (i1)+8;
	i8 v3971 = (i8)(intptr_t)c02_s019a;
	i8 v3972 = (i8)(intptr_t)(f164_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3972)(v3971, v3970);

endsub:;
}
const i1 c02_s019b[] = { 0x26,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_104 workspace at ws+3936 length ws+0
void f274_emit_104(void) {

	i1 v3973 = (i1)+1;
	i8 v3974 = (i8)(intptr_t)c02_s019b;
	i8 v3975 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3975)(v3974, v3973);

endsub:;
}
const i1 c02_s019c[] = { 0x26,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_105 workspace at ws+3936 length ws+0
void f275_emit_105(void) {

	i1 v3976 = (i1)+2;
	i8 v3977 = (i8)(intptr_t)c02_s019c;
	i8 v3978 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3978)(v3977, v3976);

endsub:;
}
const i1 c02_s019d[] = { 0x26,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_106 workspace at ws+3936 length ws+0
void f276_emit_106(void) {

	i1 v3979 = (i1)+4;
	i8 v3980 = (i8)(intptr_t)c02_s019d;
	i8 v3981 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3981)(v3980, v3979);

endsub:;
}
const i1 c02_s019e[] = { 0x26,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_107 workspace at ws+3936 length ws+0
void f277_emit_107(void) {

	i1 v3982 = (i1)+8;
	i8 v3983 = (i8)(intptr_t)c02_s019e;
	i8 v3984 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3984)(v3983, v3982);

endsub:;
}
const i1 c02_s019f[] = { 0x7c,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_108 workspace at ws+3936 length ws+0
void f278_emit_108(void) {

	i1 v3985 = (i1)+1;
	i8 v3986 = (i8)(intptr_t)c02_s019f;
	i8 v3987 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3987)(v3986, v3985);

endsub:;
}
const i1 c02_s01a0[] = { 0x7c,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_109 workspace at ws+3936 length ws+0
void f279_emit_109(void) {

	i1 v3988 = (i1)+2;
	i8 v3989 = (i8)(intptr_t)c02_s01a0;
	i8 v3990 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3990)(v3989, v3988);

endsub:;
}
const i1 c02_s01a1[] = { 0x7c,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_110 workspace at ws+3936 length ws+0
void f280_emit_110(void) {

	i1 v3991 = (i1)+4;
	i8 v3992 = (i8)(intptr_t)c02_s01a1;
	i8 v3993 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3993)(v3992, v3991);

endsub:;
}
const i1 c02_s01a2[] = { 0x7c,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_111 workspace at ws+3936 length ws+0
void f281_emit_111(void) {

	i1 v3994 = (i1)+8;
	i8 v3995 = (i8)(intptr_t)c02_s01a2;
	i8 v3996 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3996)(v3995, v3994);

endsub:;
}
const i1 c02_s01a3[] = { 0x5e,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_112 workspace at ws+3936 length ws+0
void f282_emit_112(void) {

	i1 v3997 = (i1)+1;
	i8 v3998 = (i8)(intptr_t)c02_s01a3;
	i8 v3999 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v3999)(v3998, v3997);

endsub:;
}
const i1 c02_s01a4[] = { 0x5e,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_113 workspace at ws+3936 length ws+0
void f283_emit_113(void) {

	i1 v4000 = (i1)+2;
	i8 v4001 = (i8)(intptr_t)c02_s01a4;
	i8 v4002 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4002)(v4001, v4000);

endsub:;
}
const i1 c02_s01a5[] = { 0x5e,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_114 workspace at ws+3936 length ws+0
void f284_emit_114(void) {

	i1 v4003 = (i1)+4;
	i8 v4004 = (i8)(intptr_t)c02_s01a5;
	i8 v4005 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4005)(v4004, v4003);

endsub:;
}
const i1 c02_s01a6[] = { 0x5e,0 };
	void f162_Op2VV(i8 /* op */, i1 /* width */);

// emit_115 workspace at ws+3936 length ws+0
void f285_emit_115(void) {

	i1 v4006 = (i1)+8;
	i8 v4007 = (i8)(intptr_t)c02_s01a6;
	i8 v4008 = (i8)(intptr_t)(f162_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4008)(v4007, v4006);

endsub:;
}
const i1 c02_s01a7[] = { 0x2d,0 };
	void f166_Op1V(i8 /* op */, i1 /* width */);

// emit_116 workspace at ws+3936 length ws+0
void f286_emit_116(void) {

	i1 v4009 = (i1)+1;
	i8 v4010 = (i8)(intptr_t)c02_s01a7;
	i8 v4011 = (i8)(intptr_t)(f166_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4011)(v4010, v4009);

endsub:;
}
const i1 c02_s01a8[] = { 0x2d,0 };
	void f166_Op1V(i8 /* op */, i1 /* width */);

// emit_117 workspace at ws+3936 length ws+0
void f287_emit_117(void) {

	i1 v4012 = (i1)+2;
	i8 v4013 = (i8)(intptr_t)c02_s01a8;
	i8 v4014 = (i8)(intptr_t)(f166_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4014)(v4013, v4012);

endsub:;
}
const i1 c02_s01a9[] = { 0x2d,0 };
	void f166_Op1V(i8 /* op */, i1 /* width */);

// emit_118 workspace at ws+3936 length ws+0
void f288_emit_118(void) {

	i1 v4015 = (i1)+4;
	i8 v4016 = (i8)(intptr_t)c02_s01a9;
	i8 v4017 = (i8)(intptr_t)(f166_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4017)(v4016, v4015);

endsub:;
}
const i1 c02_s01aa[] = { 0x2d,0 };
	void f166_Op1V(i8 /* op */, i1 /* width */);

// emit_119 workspace at ws+3936 length ws+0
void f289_emit_119(void) {

	i1 v4018 = (i1)+8;
	i8 v4019 = (i8)(intptr_t)c02_s01aa;
	i8 v4020 = (i8)(intptr_t)(f166_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4020)(v4019, v4018);

endsub:;
}
const i1 c02_s01ab[] = { 0x7e,0 };
	void f166_Op1V(i8 /* op */, i1 /* width */);

// emit_120 workspace at ws+3936 length ws+0
void f290_emit_120(void) {

	i1 v4021 = (i1)+1;
	i8 v4022 = (i8)(intptr_t)c02_s01ab;
	i8 v4023 = (i8)(intptr_t)(f166_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4023)(v4022, v4021);

endsub:;
}
const i1 c02_s01ac[] = { 0x7e,0 };
	void f166_Op1V(i8 /* op */, i1 /* width */);

// emit_121 workspace at ws+3936 length ws+0
void f291_emit_121(void) {

	i1 v4024 = (i1)+2;
	i8 v4025 = (i8)(intptr_t)c02_s01ac;
	i8 v4026 = (i8)(intptr_t)(f166_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4026)(v4025, v4024);

endsub:;
}
const i1 c02_s01ad[] = { 0x7e,0 };
	void f166_Op1V(i8 /* op */, i1 /* width */);

// emit_122 workspace at ws+3936 length ws+0
void f292_emit_122(void) {

	i1 v4027 = (i1)+4;
	i8 v4028 = (i8)(intptr_t)c02_s01ad;
	i8 v4029 = (i8)(intptr_t)(f166_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4029)(v4028, v4027);

endsub:;
}
const i1 c02_s01ae[] = { 0x7e,0 };
	void f166_Op1V(i8 /* op */, i1 /* width */);

// emit_123 workspace at ws+3936 length ws+0
void f293_emit_123(void) {

	i1 v4030 = (i1)+8;
	i8 v4031 = (i8)(intptr_t)c02_s01ae;
	i8 v4032 = (i8)(intptr_t)(f166_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v4032)(v4031, v4030);

endsub:;
}
const i1 c02_s01af[] = { 0x69,0x31,0 };
const i1 c02_s01b0[] = { 0x3c,0x3c,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_124 workspace at ws+3936 length ws+0
void f294_emit_124(void) {

	i1 v4033 = (i1)+1;
	i8 v4034 = (i8)(intptr_t)c02_s01af;
	i8 v4035 = (i8)(intptr_t)c02_s01b0;
	i8 v4036 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4036)(v4035, v4034, v4033);

endsub:;
}
const i1 c02_s01b1[] = { 0x69,0x32,0 };
const i1 c02_s01b2[] = { 0x3c,0x3c,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_125 workspace at ws+3936 length ws+0
void f295_emit_125(void) {

	i1 v4037 = (i1)+2;
	i8 v4038 = (i8)(intptr_t)c02_s01b1;
	i8 v4039 = (i8)(intptr_t)c02_s01b2;
	i8 v4040 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4040)(v4039, v4038, v4037);

endsub:;
}
const i1 c02_s01b3[] = { 0x69,0x34,0 };
const i1 c02_s01b4[] = { 0x3c,0x3c,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_126 workspace at ws+3936 length ws+0
void f296_emit_126(void) {

	i1 v4041 = (i1)+4;
	i8 v4042 = (i8)(intptr_t)c02_s01b3;
	i8 v4043 = (i8)(intptr_t)c02_s01b4;
	i8 v4044 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4044)(v4043, v4042, v4041);

endsub:;
}
const i1 c02_s01b5[] = { 0x69,0x38,0 };
const i1 c02_s01b6[] = { 0x3c,0x3c,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_127 workspace at ws+3936 length ws+0
void f297_emit_127(void) {

	i1 v4045 = (i1)+8;
	i8 v4046 = (i8)(intptr_t)c02_s01b5;
	i8 v4047 = (i8)(intptr_t)c02_s01b6;
	i8 v4048 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4048)(v4047, v4046, v4045);

endsub:;
}
const i1 c02_s01b7[] = { 0x69,0x31,0 };
const i1 c02_s01b8[] = { 0x3e,0x3e,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_128 workspace at ws+3936 length ws+0
void f298_emit_128(void) {

	i1 v4049 = (i1)+1;
	i8 v4050 = (i8)(intptr_t)c02_s01b7;
	i8 v4051 = (i8)(intptr_t)c02_s01b8;
	i8 v4052 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4052)(v4051, v4050, v4049);

endsub:;
}
const i1 c02_s01b9[] = { 0x69,0x32,0 };
const i1 c02_s01ba[] = { 0x3e,0x3e,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_129 workspace at ws+3936 length ws+0
void f299_emit_129(void) {

	i1 v4053 = (i1)+2;
	i8 v4054 = (i8)(intptr_t)c02_s01b9;
	i8 v4055 = (i8)(intptr_t)c02_s01ba;
	i8 v4056 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4056)(v4055, v4054, v4053);

endsub:;
}
const i1 c02_s01bb[] = { 0x69,0x34,0 };
const i1 c02_s01bc[] = { 0x3e,0x3e,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_130 workspace at ws+3936 length ws+0
void f300_emit_130(void) {

	i1 v4057 = (i1)+4;
	i8 v4058 = (i8)(intptr_t)c02_s01bb;
	i8 v4059 = (i8)(intptr_t)c02_s01bc;
	i8 v4060 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4060)(v4059, v4058, v4057);

endsub:;
}
const i1 c02_s01bd[] = { 0x69,0x38,0 };
const i1 c02_s01be[] = { 0x3e,0x3e,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_131 workspace at ws+3936 length ws+0
void f301_emit_131(void) {

	i1 v4061 = (i1)+8;
	i8 v4062 = (i8)(intptr_t)c02_s01bd;
	i8 v4063 = (i8)(intptr_t)c02_s01be;
	i8 v4064 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4064)(v4063, v4062, v4061);

endsub:;
}
const i1 c02_s01bf[] = { 0x73,0x31,0 };
const i1 c02_s01c0[] = { 0x3e,0x3e,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_132 workspace at ws+3936 length ws+0
void f302_emit_132(void) {

	i1 v4065 = (i1)+1;
	i8 v4066 = (i8)(intptr_t)c02_s01bf;
	i8 v4067 = (i8)(intptr_t)c02_s01c0;
	i8 v4068 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4068)(v4067, v4066, v4065);

endsub:;
}
const i1 c02_s01c1[] = { 0x73,0x32,0 };
const i1 c02_s01c2[] = { 0x3e,0x3e,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_133 workspace at ws+3936 length ws+0
void f303_emit_133(void) {

	i1 v4069 = (i1)+2;
	i8 v4070 = (i8)(intptr_t)c02_s01c1;
	i8 v4071 = (i8)(intptr_t)c02_s01c2;
	i8 v4072 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4072)(v4071, v4070, v4069);

endsub:;
}
const i1 c02_s01c3[] = { 0x73,0x34,0 };
const i1 c02_s01c4[] = { 0x3e,0x3e,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_134 workspace at ws+3936 length ws+0
void f304_emit_134(void) {

	i1 v4073 = (i1)+4;
	i8 v4074 = (i8)(intptr_t)c02_s01c3;
	i8 v4075 = (i8)(intptr_t)c02_s01c4;
	i8 v4076 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4076)(v4075, v4074, v4073);

endsub:;
}
const i1 c02_s01c5[] = { 0x73,0x38,0 };
const i1 c02_s01c6[] = { 0x3e,0x3e,0 };
	void f167_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_135 workspace at ws+3936 length ws+0
void f305_emit_135(void) {

	i1 v4077 = (i1)+8;
	i8 v4078 = (i8)(intptr_t)c02_s01c5;
	i8 v4079 = (i8)(intptr_t)c02_s01c6;
	i8 v4080 = (i8)(intptr_t)(f167_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v4080)(v4079, v4078, v4077);

endsub:;
}
const i1 c02_s01c7[] = { 0x3d,0x3d,0 };
	void f168_Branch(i8 /* op */, i8 /* node */);

// emit_136 workspace at ws+3936 length ws+0
void f306_emit_136(void) {

	i8 v4081 = (i8)(intptr_t)(ws+3856);
	i8 v4082 = *(i8*)(intptr_t)v4081;
	i8 v4083 = v4082+(+16);
	i8 v4084 = *(i8*)(intptr_t)v4083;
	i8 v4085 = (i8)(intptr_t)c02_s01c7;
	i8 v4086 = (i8)(intptr_t)(f168_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4086)(v4085, v4084);

endsub:;
}
const i1 c02_s01c8[] = { 0x3d,0x3d,0 };
	void f168_Branch(i8 /* op */, i8 /* node */);

// emit_137 workspace at ws+3936 length ws+0
void f307_emit_137(void) {

	i8 v4087 = (i8)(intptr_t)(ws+3856);
	i8 v4088 = *(i8*)(intptr_t)v4087;
	i8 v4089 = v4088+(+16);
	i8 v4090 = *(i8*)(intptr_t)v4089;
	i8 v4091 = (i8)(intptr_t)c02_s01c8;
	i8 v4092 = (i8)(intptr_t)(f168_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4092)(v4091, v4090);

endsub:;
}
const i1 c02_s01c9[] = { 0x3d,0x3d,0 };
	void f168_Branch(i8 /* op */, i8 /* node */);

// emit_138 workspace at ws+3936 length ws+0
void f308_emit_138(void) {

	i8 v4093 = (i8)(intptr_t)(ws+3856);
	i8 v4094 = *(i8*)(intptr_t)v4093;
	i8 v4095 = v4094+(+16);
	i8 v4096 = *(i8*)(intptr_t)v4095;
	i8 v4097 = (i8)(intptr_t)c02_s01c9;
	i8 v4098 = (i8)(intptr_t)(f168_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4098)(v4097, v4096);

endsub:;
}
const i1 c02_s01ca[] = { 0x3d,0x3d,0 };
	void f168_Branch(i8 /* op */, i8 /* node */);

// emit_139 workspace at ws+3936 length ws+0
void f309_emit_139(void) {

	i8 v4099 = (i8)(intptr_t)(ws+3856);
	i8 v4100 = *(i8*)(intptr_t)v4099;
	i8 v4101 = v4100+(+16);
	i8 v4102 = *(i8*)(intptr_t)v4101;
	i8 v4103 = (i8)(intptr_t)c02_s01ca;
	i8 v4104 = (i8)(intptr_t)(f168_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4104)(v4103, v4102);

endsub:;
}
const i1 c02_s01cb[] = { 0x3c,0 };
	void f168_Branch(i8 /* op */, i8 /* node */);

// emit_140 workspace at ws+3936 length ws+0
void f310_emit_140(void) {

	i8 v4105 = (i8)(intptr_t)(ws+3856);
	i8 v4106 = *(i8*)(intptr_t)v4105;
	i8 v4107 = v4106+(+16);
	i8 v4108 = *(i8*)(intptr_t)v4107;
	i8 v4109 = (i8)(intptr_t)c02_s01cb;
	i8 v4110 = (i8)(intptr_t)(f168_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4110)(v4109, v4108);

endsub:;
}
const i1 c02_s01cc[] = { 0x3c,0 };
	void f168_Branch(i8 /* op */, i8 /* node */);

// emit_141 workspace at ws+3936 length ws+0
void f311_emit_141(void) {

	i8 v4111 = (i8)(intptr_t)(ws+3856);
	i8 v4112 = *(i8*)(intptr_t)v4111;
	i8 v4113 = v4112+(+16);
	i8 v4114 = *(i8*)(intptr_t)v4113;
	i8 v4115 = (i8)(intptr_t)c02_s01cc;
	i8 v4116 = (i8)(intptr_t)(f168_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4116)(v4115, v4114);

endsub:;
}
const i1 c02_s01cd[] = { 0x3c,0 };
	void f168_Branch(i8 /* op */, i8 /* node */);

// emit_142 workspace at ws+3936 length ws+0
void f312_emit_142(void) {

	i8 v4117 = (i8)(intptr_t)(ws+3856);
	i8 v4118 = *(i8*)(intptr_t)v4117;
	i8 v4119 = v4118+(+16);
	i8 v4120 = *(i8*)(intptr_t)v4119;
	i8 v4121 = (i8)(intptr_t)c02_s01cd;
	i8 v4122 = (i8)(intptr_t)(f168_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4122)(v4121, v4120);

endsub:;
}
const i1 c02_s01ce[] = { 0x3c,0 };
	void f168_Branch(i8 /* op */, i8 /* node */);

// emit_143 workspace at ws+3936 length ws+0
void f313_emit_143(void) {

	i8 v4123 = (i8)(intptr_t)(ws+3856);
	i8 v4124 = *(i8*)(intptr_t)v4123;
	i8 v4125 = v4124+(+16);
	i8 v4126 = *(i8*)(intptr_t)v4125;
	i8 v4127 = (i8)(intptr_t)c02_s01ce;
	i8 v4128 = (i8)(intptr_t)(f168_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v4128)(v4127, v4126);

endsub:;
}
const i1 c02_s01cf[] = { 0x3c,0 };
	void f169_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_144 workspace at ws+3936 length ws+0
void f314_emit_144(void) {

	i8 v4129 = (i8)(intptr_t)(ws+3856);
	i8 v4130 = *(i8*)(intptr_t)v4129;
	i8 v4131 = v4130+(+16);
	i8 v4132 = *(i8*)(intptr_t)v4131;
	i1 v4133 = (i1)+1;
	i8 v4134 = (i8)(intptr_t)c02_s01cf;
	i8 v4135 = (i8)(intptr_t)(f169_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4135)(v4134, v4133, v4132);

endsub:;
}
const i1 c02_s01d0[] = { 0x3c,0 };
	void f169_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_145 workspace at ws+3936 length ws+0
void f315_emit_145(void) {

	i8 v4136 = (i8)(intptr_t)(ws+3856);
	i8 v4137 = *(i8*)(intptr_t)v4136;
	i8 v4138 = v4137+(+16);
	i8 v4139 = *(i8*)(intptr_t)v4138;
	i1 v4140 = (i1)+2;
	i8 v4141 = (i8)(intptr_t)c02_s01d0;
	i8 v4142 = (i8)(intptr_t)(f169_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4142)(v4141, v4140, v4139);

endsub:;
}
const i1 c02_s01d1[] = { 0x3c,0 };
	void f169_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_146 workspace at ws+3936 length ws+0
void f316_emit_146(void) {

	i8 v4143 = (i8)(intptr_t)(ws+3856);
	i8 v4144 = *(i8*)(intptr_t)v4143;
	i8 v4145 = v4144+(+16);
	i8 v4146 = *(i8*)(intptr_t)v4145;
	i1 v4147 = (i1)+4;
	i8 v4148 = (i8)(intptr_t)c02_s01d1;
	i8 v4149 = (i8)(intptr_t)(f169_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4149)(v4148, v4147, v4146);

endsub:;
}
const i1 c02_s01d2[] = { 0x3c,0 };
	void f169_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_147 workspace at ws+3936 length ws+0
void f317_emit_147(void) {

	i8 v4150 = (i8)(intptr_t)(ws+3856);
	i8 v4151 = *(i8*)(intptr_t)v4150;
	i8 v4152 = v4151+(+16);
	i8 v4153 = *(i8*)(intptr_t)v4152;
	i1 v4154 = (i1)+8;
	i8 v4155 = (i8)(intptr_t)c02_s01d2;
	i8 v4156 = (i8)(intptr_t)(f169_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v4156)(v4155, v4154, v4153);

endsub:;
}
	void f171_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_152 workspace at ws+3936 length ws+0
void f318_emit_152(void) {

	i8 v4157 = (i8)(intptr_t)(ws+3864);
	i8 v4158 = *(i8*)(intptr_t)v4157;
	i4 v4159 = *(i4*)(intptr_t)v4158;
	i4 v4160 = v4159&(+255);
	i8 v4161 = (i8)(intptr_t)(ws+3864);
	i8 v4162 = *(i8*)(intptr_t)v4161;
	i8 v4163 = v4162+(+4);
	i2 v4164 = *(i2*)(intptr_t)v4163;
	i8 v4165 = (i8)(intptr_t)(f171_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4165)(v4164, v4160);

endsub:;
}
	void f171_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_153 workspace at ws+3936 length ws+0
void f319_emit_153(void) {

	i8 v4166 = (i8)(intptr_t)(ws+3864);
	i8 v4167 = *(i8*)(intptr_t)v4166;
	i4 v4168 = *(i4*)(intptr_t)v4167;
	i4 v4169 = v4168&(+65535);
	i8 v4170 = (i8)(intptr_t)(ws+3864);
	i8 v4171 = *(i8*)(intptr_t)v4170;
	i8 v4172 = v4171+(+4);
	i2 v4173 = *(i2*)(intptr_t)v4172;
	i8 v4174 = (i8)(intptr_t)(f171_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4174)(v4173, v4169);

endsub:;
}
	void f171_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_154 workspace at ws+3936 length ws+0
void f320_emit_154(void) {

	i8 v4175 = (i8)(intptr_t)(ws+3864);
	i8 v4176 = *(i8*)(intptr_t)v4175;
	i4 v4177 = *(i4*)(intptr_t)v4176;
	i4 v4178 = v4177&(-1);
	i8 v4179 = (i8)(intptr_t)(ws+3864);
	i8 v4180 = *(i8*)(intptr_t)v4179;
	i8 v4181 = v4180+(+4);
	i2 v4182 = *(i2*)(intptr_t)v4181;
	i8 v4183 = (i8)(intptr_t)(f171_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4183)(v4182, v4178);

endsub:;
}
	void f171_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_155 workspace at ws+3936 length ws+0
void f321_emit_155(void) {

	i8 v4184 = (i8)(intptr_t)(ws+3864);
	i8 v4185 = *(i8*)(intptr_t)v4184;
	i4 v4186 = *(i4*)(intptr_t)v4185;
	i8 v4187 = (i8)(intptr_t)(ws+3864);
	i8 v4188 = *(i8*)(intptr_t)v4187;
	i8 v4189 = v4188+(+4);
	i2 v4190 = *(i2*)(intptr_t)v4189;
	i8 v4191 = (i8)(intptr_t)(f171_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v4191)(v4190, v4186);

endsub:;
}

// emit_156 workspace at ws+3936 length ws+0
void f322_emit_156(void) {

	i8 v4192 = (i8)(intptr_t)(ws+3584);
	i1 v4193 = *(i1*)(intptr_t)v4192;
	i1 v4194 = v4193+(-1);
	i8 v4195 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v4195 = v4194;

endsub:;
}

// emit_157 workspace at ws+3936 length ws+0
void f323_emit_157(void) {

	i8 v4196 = (i8)(intptr_t)(ws+3584);
	i1 v4197 = *(i1*)(intptr_t)v4196;
	i1 v4198 = v4197+(-1);
	i8 v4199 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v4199 = v4198;

endsub:;
}

// emit_158 workspace at ws+3936 length ws+0
void f324_emit_158(void) {

	i8 v4200 = (i8)(intptr_t)(ws+3584);
	i1 v4201 = *(i1*)(intptr_t)v4200;
	i1 v4202 = v4201+(-1);
	i8 v4203 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v4203 = v4202;

endsub:;
}

// emit_159 workspace at ws+3936 length ws+0
void f325_emit_159(void) {

	i8 v4204 = (i8)(intptr_t)(ws+3584);
	i1 v4205 = *(i1*)(intptr_t)v4204;
	i1 v4206 = v4205+(-1);
	i8 v4207 = (i8)(intptr_t)(ws+3584);
	*(i1*)(intptr_t)v4207 = v4206;

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_160 workspace at ws+3936 length ws+0
void f326_emit_160(void) {

	i1 v4208 = (i1)+1;
	i1 v4209 = (i1)+2;
	i8 v4210 = (i8)(intptr_t)(ws+3864);
	i8 v4211 = *(i8*)(intptr_t)v4210;
	i1 v4212 = *(i1*)(intptr_t)v4211;
	i8 v4213 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4213)(v4212, v4209, v4208);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_161 workspace at ws+3936 length ws+0
void f327_emit_161(void) {

	i1 v4214 = (i1)+1;
	i1 v4215 = (i1)+4;
	i8 v4216 = (i8)(intptr_t)(ws+3864);
	i8 v4217 = *(i8*)(intptr_t)v4216;
	i1 v4218 = *(i1*)(intptr_t)v4217;
	i8 v4219 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4219)(v4218, v4215, v4214);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_162 workspace at ws+3936 length ws+0
void f328_emit_162(void) {

	i1 v4220 = (i1)+1;
	i1 v4221 = (i1)+8;
	i8 v4222 = (i8)(intptr_t)(ws+3864);
	i8 v4223 = *(i8*)(intptr_t)v4222;
	i1 v4224 = *(i1*)(intptr_t)v4223;
	i8 v4225 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4225)(v4224, v4221, v4220);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_163 workspace at ws+3936 length ws+0
void f329_emit_163(void) {

	i1 v4226 = (i1)+2;
	i1 v4227 = (i1)+1;
	i8 v4228 = (i8)(intptr_t)(ws+3864);
	i8 v4229 = *(i8*)(intptr_t)v4228;
	i1 v4230 = *(i1*)(intptr_t)v4229;
	i8 v4231 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4231)(v4230, v4227, v4226);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_164 workspace at ws+3936 length ws+0
void f330_emit_164(void) {

	i1 v4232 = (i1)+2;
	i1 v4233 = (i1)+4;
	i8 v4234 = (i8)(intptr_t)(ws+3864);
	i8 v4235 = *(i8*)(intptr_t)v4234;
	i1 v4236 = *(i1*)(intptr_t)v4235;
	i8 v4237 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4237)(v4236, v4233, v4232);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_165 workspace at ws+3936 length ws+0
void f331_emit_165(void) {

	i1 v4238 = (i1)+2;
	i1 v4239 = (i1)+8;
	i8 v4240 = (i8)(intptr_t)(ws+3864);
	i8 v4241 = *(i8*)(intptr_t)v4240;
	i1 v4242 = *(i1*)(intptr_t)v4241;
	i8 v4243 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4243)(v4242, v4239, v4238);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_166 workspace at ws+3936 length ws+0
void f332_emit_166(void) {

	i1 v4244 = (i1)+4;
	i1 v4245 = (i1)+1;
	i8 v4246 = (i8)(intptr_t)(ws+3864);
	i8 v4247 = *(i8*)(intptr_t)v4246;
	i1 v4248 = *(i1*)(intptr_t)v4247;
	i8 v4249 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4249)(v4248, v4245, v4244);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_167 workspace at ws+3936 length ws+0
void f333_emit_167(void) {

	i1 v4250 = (i1)+4;
	i1 v4251 = (i1)+2;
	i8 v4252 = (i8)(intptr_t)(ws+3864);
	i8 v4253 = *(i8*)(intptr_t)v4252;
	i1 v4254 = *(i1*)(intptr_t)v4253;
	i8 v4255 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4255)(v4254, v4251, v4250);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_168 workspace at ws+3936 length ws+0
void f334_emit_168(void) {

	i1 v4256 = (i1)+4;
	i1 v4257 = (i1)+8;
	i8 v4258 = (i8)(intptr_t)(ws+3864);
	i8 v4259 = *(i8*)(intptr_t)v4258;
	i1 v4260 = *(i1*)(intptr_t)v4259;
	i8 v4261 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4261)(v4260, v4257, v4256);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_169 workspace at ws+3936 length ws+0
void f335_emit_169(void) {

	i1 v4262 = (i1)+8;
	i1 v4263 = (i1)+1;
	i8 v4264 = (i8)(intptr_t)(ws+3864);
	i8 v4265 = *(i8*)(intptr_t)v4264;
	i1 v4266 = *(i1*)(intptr_t)v4265;
	i8 v4267 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4267)(v4266, v4263, v4262);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_170 workspace at ws+3936 length ws+0
void f336_emit_170(void) {

	i1 v4268 = (i1)+8;
	i1 v4269 = (i1)+2;
	i8 v4270 = (i8)(intptr_t)(ws+3864);
	i8 v4271 = *(i8*)(intptr_t)v4270;
	i1 v4272 = *(i1*)(intptr_t)v4271;
	i8 v4273 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4273)(v4272, v4269, v4268);

endsub:;
}
	void f172_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_171 workspace at ws+3936 length ws+0
void f337_emit_171(void) {

	i1 v4274 = (i1)+8;
	i1 v4275 = (i1)+4;
	i8 v4276 = (i8)(intptr_t)(ws+3864);
	i8 v4277 = *(i8*)(intptr_t)v4276;
	i1 v4278 = *(i1*)(intptr_t)v4277;
	i8 v4279 = (i8)(intptr_t)(f172_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v4279)(v4278, v4275, v4274);

endsub:;
}
	void f152_Push(i2* /* vid */);
const i1 c02_s01d3[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f87_E(i8 /* text */);
	void f89_E_u16(i2 /* value */);
const i1 c02_s01d4[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
	void f87_E(i8 /* text */);
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f173_E_string(i2* /* sid */, i8 /* text */);
	void f96_E_h16(i2 /* value */);
const i1 c02_s01d5[] = { 0x3b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_172 workspace at ws+3936 length ws+2
void f338_emit_172(void) {

	i8 v4280 = (i8)(intptr_t)(f152_Push);
	i2 v4281;

	((void(*)(i2* /* vid */))(intptr_t)v4280)(&v4281);
	i8 v4282 = (i8)(intptr_t)(ws+3936);
	*(i2*)(intptr_t)v4282 = v4281;

	i8 v4283 = (i8)(intptr_t)c02_s01d3;
	i8 v4284 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4284)(v4283);

	i8 v4285 = (i8)(intptr_t)(ws+3936);
	i2 v4286 = *(i2*)(intptr_t)v4285;
	i8 v4287 = (i8)(intptr_t)(f89_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v4287)(v4286);

	i8 v4288 = (i8)(intptr_t)c02_s01d4;
	i8 v4289 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4289)(v4288);

	i1 v4290 = (i1)+3;
	i8 v4291 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4291)(v4290);

	i1 v4292 = (i1)+115;
	i8 v4293 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4293)(v4292);

	i8 v4294 = (i8)(intptr_t)(ws+3864);
	i8 v4295 = *(i8*)(intptr_t)v4294;
	i8 v4296 = *(i8*)(intptr_t)v4295;
	i8 v4297 = (i8)(intptr_t)(f173_E_string);
	i2 v4298;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v4297)(&v4298, v4296);
	i8 v4299 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v4299)(v4298);

	i8 v4300 = (i8)(intptr_t)c02_s01d5;
	i8 v4301 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4301)(v4300);

endsub:;
}
	void f101_EmitterOpenStream(i8 /* subr */);
const i1 c02_s01d6[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
	void f87_E(i8 /* text */);
	void f100_E_wsref(i2 /* off */, i1 /* wsid */, i2 /* id */);
const i1 c02_s01d7[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_173 workspace at ws+3936 length ws+0
void f339_emit_173(void) {

	i8 v4302 = (i8)(intptr_t)(ws+40);
	i8 v4303 = *(i8*)(intptr_t)v4302;
	i8 v4304 = (i8)(intptr_t)(f101_EmitterOpenStream);

	((void(*)(i8 /* subr */))(intptr_t)v4304)(v4303);

	i8 v4305 = (i8)(intptr_t)c02_s01d6;
	i8 v4306 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4306)(v4305);

	i8 v4307 = (i8)(intptr_t)(ws+3864);
	i8 v4308 = *(i8*)(intptr_t)v4307;
	i8 v4309 = *(i8*)(intptr_t)v4308;
	i8 v4310 = v4309+(+8);
	i2 v4311 = *(i2*)(intptr_t)v4310;
	i8 v4312 = (i8)(intptr_t)(ws+3864);
	i8 v4313 = *(i8*)(intptr_t)v4312;
	i8 v4314 = v4313+(+10);
	i1 v4315 = *(i1*)(intptr_t)v4314;
	i8 v4316 = (i8)(intptr_t)(ws+3864);
	i8 v4317 = *(i8*)(intptr_t)v4316;
	i8 v4318 = v4317+(+12);
	i2 v4319 = *(i2*)(intptr_t)v4318;
	i8 v4320 = (i8)(intptr_t)(f100_E_wsref);

	((void(*)(i2 /* off */, i1 /* wsid */, i2 /* id */))(intptr_t)v4320)(v4319, v4315, v4311);

	i8 v4321 = (i8)(intptr_t)c02_s01d7;
	i8 v4322 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4322)(v4321);

	i1 v4323 = (i1)+0;
	i8 v4324 = (i8)(intptr_t)(ws+3598);
	*(i1*)(intptr_t)v4324 = v4323;

endsub:;
}
	void f175_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_174 workspace at ws+3936 length ws+0
void f340_emit_174(void) {

	i8 v4325 = (i8)(intptr_t)(ws+3864);
	i8 v4326 = *(i8*)(intptr_t)v4325;
	i1 v4327 = (i1)+1;
	i8 v4328 = (i8)(intptr_t)(f175_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4328)(v4327, v4326);

endsub:;
}
	void f175_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_175 workspace at ws+3936 length ws+0
void f341_emit_175(void) {

	i8 v4329 = (i8)(intptr_t)(ws+3864);
	i8 v4330 = *(i8*)(intptr_t)v4329;
	i1 v4331 = (i1)+2;
	i8 v4332 = (i8)(intptr_t)(f175_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4332)(v4331, v4330);

endsub:;
}
	void f175_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_176 workspace at ws+3936 length ws+0
void f342_emit_176(void) {

	i8 v4333 = (i8)(intptr_t)(ws+3864);
	i8 v4334 = *(i8*)(intptr_t)v4333;
	i1 v4335 = (i1)+4;
	i8 v4336 = (i8)(intptr_t)(f175_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4336)(v4335, v4334);

endsub:;
}
	void f175_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_177 workspace at ws+3936 length ws+0
void f343_emit_177(void) {

	i8 v4337 = (i8)(intptr_t)(ws+3864);
	i8 v4338 = *(i8*)(intptr_t)v4337;
	i1 v4339 = (i1)+8;
	i8 v4340 = (i8)(intptr_t)(f175_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v4340)(v4339, v4338);

endsub:;
}
	void f176_CheckBufferAlignment(void);
const i1 c02_s01d8[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f87_E(i8 /* text */);
	void f147_E_subref_sig(i8 /* subr */);
const i1 c02_s01d9[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_178 workspace at ws+3936 length ws+0
void f344_emit_178(void) {

	i8 v4341 = (i8)(intptr_t)(f176_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4341)();

	i8 v4342 = (i8)(intptr_t)c02_s01d8;
	i8 v4343 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4343)(v4342);

	i8 v4344 = (i8)(intptr_t)(ws+3864);
	i8 v4345 = *(i8*)(intptr_t)v4344;
	i8 v4346 = *(i8*)(intptr_t)v4345;
	i8 v4347 = (i8)(intptr_t)(f147_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4347)(v4346);

	i8 v4348 = (i8)(intptr_t)c02_s01d9;
	i8 v4349 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4349)(v4348);

endsub:;
}
	void f176_CheckBufferAlignment(void);
const i1 c02_s01da[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f87_E(i8 /* text */);
	void f148_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s01db[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_179 workspace at ws+3936 length ws+0
void f345_emit_179(void) {

	i8 v4350 = (i8)(intptr_t)(f176_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4350)();

	i8 v4351 = (i8)(intptr_t)c02_s01da;
	i8 v4352 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4352)(v4351);

	i8 v4353 = (i8)(intptr_t)(ws+3864);
	i8 v4354 = *(i8*)(intptr_t)v4353;
	i8 v4355 = (i8)(intptr_t)(ws+3864);
	i8 v4356 = *(i8*)(intptr_t)v4355;
	i8 v4357 = v4356+(+16);
	i2 v4358 = *(i2*)(intptr_t)v4357;
	i8 v4359 = (i8)(intptr_t)(f148_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4359)(v4358, v4354);

	i8 v4360 = (i8)(intptr_t)c02_s01db;
	i8 v4361 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4361)(v4360);

endsub:;
}
	void f176_CheckBufferAlignment(void);
const i1 c02_s01dc[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f87_E(i8 /* text */);
	void f78_E_b8(i1 /* byte */);
	void f78_E_b8(i1 /* byte */);
	void f173_E_string(i2* /* sid */, i8 /* text */);
	void f96_E_h16(i2 /* value */);
const i1 c02_s01dd[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f87_E(i8 /* text */);

// emit_180 workspace at ws+3936 length ws+0
void f346_emit_180(void) {

	i8 v4362 = (i8)(intptr_t)(f176_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v4362)();

	i8 v4363 = (i8)(intptr_t)c02_s01dc;
	i8 v4364 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4364)(v4363);

	i1 v4365 = (i1)+3;
	i8 v4366 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4366)(v4365);

	i1 v4367 = (i1)+115;
	i8 v4368 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4368)(v4367);

	i8 v4369 = (i8)(intptr_t)(ws+3864);
	i8 v4370 = *(i8*)(intptr_t)v4369;
	i8 v4371 = *(i8*)(intptr_t)v4370;
	i8 v4372 = (i8)(intptr_t)(f173_E_string);
	i2 v4373;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v4372)(&v4373, v4371);
	i8 v4374 = (i8)(intptr_t)(f96_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v4374)(v4373);

	i8 v4375 = (i8)(intptr_t)c02_s01dd;
	i8 v4376 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4376)(v4375);

endsub:;
}
	void f174_FlushInitialiserBuffer(void);
const i1 c02_s01de[] = { 0x7d,0x3b,0x0a,0 };
	void f87_E(i8 /* text */);
	void f102_EmitterCloseStream(void);

// emit_181 workspace at ws+3936 length ws+0
void f347_emit_181(void) {

	i8 v4377 = (i8)(intptr_t)(f174_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v4377)();

	i8 v4378 = (i8)(intptr_t)c02_s01de;
	i8 v4379 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4379)(v4378);

	i8 v4380 = (i8)(intptr_t)(f102_EmitterCloseStream);

	((void(*)(void))(intptr_t)v4380)();

endsub:;
}
	void f83_E_tab(void);

// emit_184 workspace at ws+3936 length ws+0
void f348_emit_184(void) {

	i8 v4381 = (i8)(intptr_t)(f83_E_tab);

	((void(*)(void))(intptr_t)v4381)();

endsub:;
}
	void f87_E(i8 /* text */);
	void f81_E_space(void);

// emit_185 workspace at ws+3936 length ws+0
void f349_emit_185(void) {

	i8 v4382 = (i8)(intptr_t)(ws+3864);
	i8 v4383 = *(i8*)(intptr_t)v4382;
	i8 v4384 = *(i8*)(intptr_t)v4383;
	i8 v4385 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4385)(v4384);

	i8 v4386 = (i8)(intptr_t)(f81_E_space);

	((void(*)(void))(intptr_t)v4386)();

endsub:;
}
const i1 c02_s01df[] = { 0x2a,0x28,0x69,0 };
	void f87_E(i8 /* text */);
	void f90_E_u8(i1 /* value */);
const i1 c02_s01e0[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f148_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s01e1[] = { 0x29,0 };
	void f87_E(i8 /* text */);
	void f81_E_space(void);

// emit_186 workspace at ws+3936 length ws+0
void f350_emit_186(void) {

	i8 v4387 = (i8)(intptr_t)c02_s01df;
	i8 v4388 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4388)(v4387);

	i8 v4389 = (i8)(intptr_t)(ws+3864);
	i8 v4390 = *(i8*)(intptr_t)v4389;
	i8 v4391 = v4390+(+14);
	i1 v4392 = *(i1*)(intptr_t)v4391;
	i8 v4393 = (i8)(intptr_t)(f90_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4393)(v4392);

	i8 v4394 = (i8)(intptr_t)c02_s01e0;
	i8 v4395 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4395)(v4394);

	i8 v4396 = (i8)(intptr_t)(ws+3864);
	i8 v4397 = *(i8*)(intptr_t)v4396;
	i2 v4398 = (i2)+0;
	i8 v4399 = (i8)(intptr_t)(f148_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v4399)(v4398, v4397);

	i8 v4400 = (i8)(intptr_t)c02_s01e1;
	i8 v4401 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4401)(v4400);

	i8 v4402 = (i8)(intptr_t)(f81_E_space);

	((void(*)(void))(intptr_t)v4402)();

endsub:;
}
const i1 c02_s01e2[] = { 0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f87_E(i8 /* text */);
	void f147_E_subref_sig(i8 /* subr */);
const i1 c02_s01e3[] = { 0x29,0 };
	void f87_E(i8 /* text */);
	void f81_E_space(void);

// emit_187 workspace at ws+3936 length ws+0
void f351_emit_187(void) {

	i8 v4403 = (i8)(intptr_t)c02_s01e2;
	i8 v4404 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4404)(v4403);

	i8 v4405 = (i8)(intptr_t)(ws+3864);
	i8 v4406 = *(i8*)(intptr_t)v4405;
	i8 v4407 = *(i8*)(intptr_t)v4406;
	i8 v4408 = (i8)(intptr_t)(f147_E_subref_sig);

	((void(*)(i8 /* subr */))(intptr_t)v4408)(v4407);

	i8 v4409 = (i8)(intptr_t)c02_s01e3;
	i8 v4410 = (i8)(intptr_t)(f87_E);

	((void(*)(i8 /* text */))(intptr_t)v4410)(v4409);

	i8 v4411 = (i8)(intptr_t)(f81_E_space);

	((void(*)(void))(intptr_t)v4411)();

endsub:;
}
	void f78_E_b8(i1 /* byte */);
	void f93_E_i32(i4 /* value */);
	void f78_E_b8(i1 /* byte */);

// emit_188 workspace at ws+3936 length ws+0
void f352_emit_188(void) {

	i1 v4412 = (i1)+40;
	i8 v4413 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4413)(v4412);

	i8 v4414 = (i8)(intptr_t)(ws+3864);
	i8 v4415 = *(i8*)(intptr_t)v4414;
	i4 v4416 = *(i4*)(intptr_t)v4415;
	i8 v4417 = (i8)(intptr_t)(f93_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v4417)(v4416);

	i1 v4418 = (i1)+41;
	i8 v4419 = (i8)(intptr_t)(f78_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4419)(v4418);

endsub:;
}
	void f84_E_nl(void);

// emit_189 workspace at ws+3936 length ws+0
void f353_emit_189(void) {

	i8 v4420 = (i8)(intptr_t)(f84_E_nl);

	((void(*)(void))(intptr_t)v4420)();

endsub:;
}

// nop_emitter workspace at ws+3936 length ws+0
void f354_nop_emitter(void) {

endsub:;
}
	void f180_emit_0(void);
	void f181_emit_1(void);
	void f182_emit_2(void);
	void f183_emit_3(void);
	void f184_emit_4(void);
	void f185_emit_5(void);
	void f186_emit_6(void);
	void f187_emit_7(void);
	void f188_emit_8(void);
	void f189_emit_9(void);
	void f190_emit_10(void);
	void f191_emit_11(void);
	void f192_emit_12(void);
	void f193_emit_13(void);
	void f194_emit_14(void);
	void f195_emit_15(void);
	void f196_emit_16(void);
	void f197_emit_17(void);
	void f198_emit_18(void);
	void f199_emit_19(void);
	void f200_emit_20(void);
	void f201_emit_21(void);
	void f202_emit_22(void);
	void f203_emit_23(void);
	void f204_emit_24(void);
	void f205_emit_25(void);
	void f206_emit_26(void);
	void f207_emit_27(void);
	void f208_emit_28(void);
	void f209_emit_29(void);
	void f210_emit_30(void);
	void f211_emit_31(void);
	void f212_emit_32(void);
	void f213_emit_33(void);
	void f214_emit_34(void);
	void f215_emit_35(void);
	void f216_emit_36(void);
	void f217_emit_37(void);
	void f218_emit_38(void);
	void f219_emit_39(void);
	void f220_emit_40(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f221_emit_43(void);
	void f222_emit_44(void);
	void f223_emit_45(void);
	void f224_emit_46(void);
	void f226_emit_47(void);
	void f227_emit_48(void);
	void f228_emit_49(void);
	void f229_emit_50(void);
	void f230_emit_51(void);
	void f231_emit_52(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f232_emit_62(void);
	void f233_emit_63(void);
	void f234_emit_64(void);
	void f235_emit_65(void);
	void f236_emit_66(void);
	void f237_emit_67(void);
	void f238_emit_68(void);
	void f239_emit_69(void);
	void f240_emit_70(void);
	void f241_emit_71(void);
	void f242_emit_72(void);
	void f243_emit_73(void);
	void f244_emit_74(void);
	void f245_emit_75(void);
	void f246_emit_76(void);
	void f247_emit_77(void);
	void f248_emit_78(void);
	void f249_emit_79(void);
	void f250_emit_80(void);
	void f251_emit_81(void);
	void f252_emit_82(void);
	void f253_emit_83(void);
	void f254_emit_84(void);
	void f255_emit_85(void);
	void f256_emit_86(void);
	void f257_emit_87(void);
	void f258_emit_88(void);
	void f259_emit_89(void);
	void f260_emit_90(void);
	void f261_emit_91(void);
	void f262_emit_92(void);
	void f263_emit_93(void);
	void f264_emit_94(void);
	void f265_emit_95(void);
	void f266_emit_96(void);
	void f267_emit_97(void);
	void f268_emit_98(void);
	void f269_emit_99(void);
	void f270_emit_100(void);
	void f271_emit_101(void);
	void f272_emit_102(void);
	void f273_emit_103(void);
	void f274_emit_104(void);
	void f275_emit_105(void);
	void f276_emit_106(void);
	void f277_emit_107(void);
	void f278_emit_108(void);
	void f279_emit_109(void);
	void f280_emit_110(void);
	void f281_emit_111(void);
	void f282_emit_112(void);
	void f283_emit_113(void);
	void f284_emit_114(void);
	void f285_emit_115(void);
	void f286_emit_116(void);
	void f287_emit_117(void);
	void f288_emit_118(void);
	void f289_emit_119(void);
	void f290_emit_120(void);
	void f291_emit_121(void);
	void f292_emit_122(void);
	void f293_emit_123(void);
	void f294_emit_124(void);
	void f295_emit_125(void);
	void f296_emit_126(void);
	void f297_emit_127(void);
	void f298_emit_128(void);
	void f299_emit_129(void);
	void f300_emit_130(void);
	void f301_emit_131(void);
	void f302_emit_132(void);
	void f303_emit_133(void);
	void f304_emit_134(void);
	void f305_emit_135(void);
	void f306_emit_136(void);
	void f307_emit_137(void);
	void f308_emit_138(void);
	void f309_emit_139(void);
	void f310_emit_140(void);
	void f311_emit_141(void);
	void f312_emit_142(void);
	void f313_emit_143(void);
	void f314_emit_144(void);
	void f315_emit_145(void);
	void f316_emit_146(void);
	void f317_emit_147(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f318_emit_152(void);
	void f319_emit_153(void);
	void f320_emit_154(void);
	void f321_emit_155(void);
	void f322_emit_156(void);
	void f323_emit_157(void);
	void f324_emit_158(void);
	void f325_emit_159(void);
	void f326_emit_160(void);
	void f327_emit_161(void);
	void f328_emit_162(void);
	void f329_emit_163(void);
	void f330_emit_164(void);
	void f331_emit_165(void);
	void f332_emit_166(void);
	void f333_emit_167(void);
	void f334_emit_168(void);
	void f335_emit_169(void);
	void f336_emit_170(void);
	void f337_emit_171(void);
	void f338_emit_172(void);
	void f339_emit_173(void);
	void f340_emit_174(void);
	void f341_emit_175(void);
	void f342_emit_176(void);
	void f343_emit_177(void);
	void f344_emit_178(void);
	void f345_emit_179(void);
	void f346_emit_180(void);
	void f347_emit_181(void);
	void f354_nop_emitter(void);
	void f354_nop_emitter(void);
	void f348_emit_184(void);
	void f349_emit_185(void);
	void f350_emit_186(void);
	void f351_emit_187(void);
	void f352_emit_188(void);
	void f353_emit_189(void);
static data f178_EmitOneInstruction_s02a2[] = {

	{ .ptr = (void*)f180_emit_0 },

	{ .ptr = (void*)f181_emit_1 },

	{ .ptr = (void*)f182_emit_2 },

	{ .ptr = (void*)f183_emit_3 },

	{ .ptr = (void*)f184_emit_4 },

	{ .ptr = (void*)f185_emit_5 },

	{ .ptr = (void*)f186_emit_6 },

	{ .ptr = (void*)f187_emit_7 },

	{ .ptr = (void*)f188_emit_8 },

	{ .ptr = (void*)f189_emit_9 },

	{ .ptr = (void*)f190_emit_10 },

	{ .ptr = (void*)f191_emit_11 },

	{ .ptr = (void*)f192_emit_12 },

	{ .ptr = (void*)f193_emit_13 },

	{ .ptr = (void*)f194_emit_14 },

	{ .ptr = (void*)f195_emit_15 },

	{ .ptr = (void*)f196_emit_16 },

	{ .ptr = (void*)f197_emit_17 },

	{ .ptr = (void*)f198_emit_18 },

	{ .ptr = (void*)f199_emit_19 },

	{ .ptr = (void*)f200_emit_20 },

	{ .ptr = (void*)f201_emit_21 },

	{ .ptr = (void*)f202_emit_22 },

	{ .ptr = (void*)f203_emit_23 },

	{ .ptr = (void*)f204_emit_24 },

	{ .ptr = (void*)f205_emit_25 },

	{ .ptr = (void*)f206_emit_26 },

	{ .ptr = (void*)f207_emit_27 },

	{ .ptr = (void*)f208_emit_28 },

	{ .ptr = (void*)f209_emit_29 },

	{ .ptr = (void*)f210_emit_30 },

	{ .ptr = (void*)f211_emit_31 },

	{ .ptr = (void*)f212_emit_32 },

	{ .ptr = (void*)f213_emit_33 },

	{ .ptr = (void*)f214_emit_34 },

	{ .ptr = (void*)f215_emit_35 },

	{ .ptr = (void*)f216_emit_36 },

	{ .ptr = (void*)f217_emit_37 },

	{ .ptr = (void*)f218_emit_38 },

	{ .ptr = (void*)f219_emit_39 },

	{ .ptr = (void*)f220_emit_40 },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f221_emit_43 },

	{ .ptr = (void*)f222_emit_44 },

	{ .ptr = (void*)f223_emit_45 },

	{ .ptr = (void*)f224_emit_46 },

	{ .ptr = (void*)f226_emit_47 },

	{ .ptr = (void*)f227_emit_48 },

	{ .ptr = (void*)f228_emit_49 },

	{ .ptr = (void*)f229_emit_50 },

	{ .ptr = (void*)f230_emit_51 },

	{ .ptr = (void*)f231_emit_52 },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f232_emit_62 },

	{ .ptr = (void*)f233_emit_63 },

	{ .ptr = (void*)f234_emit_64 },

	{ .ptr = (void*)f235_emit_65 },

	{ .ptr = (void*)f236_emit_66 },

	{ .ptr = (void*)f237_emit_67 },

	{ .ptr = (void*)f238_emit_68 },

	{ .ptr = (void*)f239_emit_69 },

	{ .ptr = (void*)f240_emit_70 },

	{ .ptr = (void*)f241_emit_71 },

	{ .ptr = (void*)f242_emit_72 },

	{ .ptr = (void*)f243_emit_73 },

	{ .ptr = (void*)f244_emit_74 },

	{ .ptr = (void*)f245_emit_75 },

	{ .ptr = (void*)f246_emit_76 },

	{ .ptr = (void*)f247_emit_77 },

	{ .ptr = (void*)f248_emit_78 },

	{ .ptr = (void*)f249_emit_79 },

	{ .ptr = (void*)f250_emit_80 },

	{ .ptr = (void*)f251_emit_81 },

	{ .ptr = (void*)f252_emit_82 },

	{ .ptr = (void*)f253_emit_83 },

	{ .ptr = (void*)f254_emit_84 },

	{ .ptr = (void*)f255_emit_85 },

	{ .ptr = (void*)f256_emit_86 },

	{ .ptr = (void*)f257_emit_87 },

	{ .ptr = (void*)f258_emit_88 },

	{ .ptr = (void*)f259_emit_89 },

	{ .ptr = (void*)f260_emit_90 },

	{ .ptr = (void*)f261_emit_91 },

	{ .ptr = (void*)f262_emit_92 },

	{ .ptr = (void*)f263_emit_93 },

	{ .ptr = (void*)f264_emit_94 },

	{ .ptr = (void*)f265_emit_95 },

	{ .ptr = (void*)f266_emit_96 },

	{ .ptr = (void*)f267_emit_97 },

	{ .ptr = (void*)f268_emit_98 },

	{ .ptr = (void*)f269_emit_99 },

	{ .ptr = (void*)f270_emit_100 },

	{ .ptr = (void*)f271_emit_101 },

	{ .ptr = (void*)f272_emit_102 },

	{ .ptr = (void*)f273_emit_103 },

	{ .ptr = (void*)f274_emit_104 },

	{ .ptr = (void*)f275_emit_105 },

	{ .ptr = (void*)f276_emit_106 },

	{ .ptr = (void*)f277_emit_107 },

	{ .ptr = (void*)f278_emit_108 },

	{ .ptr = (void*)f279_emit_109 },

	{ .ptr = (void*)f280_emit_110 },

	{ .ptr = (void*)f281_emit_111 },

	{ .ptr = (void*)f282_emit_112 },

	{ .ptr = (void*)f283_emit_113 },

	{ .ptr = (void*)f284_emit_114 },

	{ .ptr = (void*)f285_emit_115 },

	{ .ptr = (void*)f286_emit_116 },

	{ .ptr = (void*)f287_emit_117 },

	{ .ptr = (void*)f288_emit_118 },

	{ .ptr = (void*)f289_emit_119 },

	{ .ptr = (void*)f290_emit_120 },

	{ .ptr = (void*)f291_emit_121 },

	{ .ptr = (void*)f292_emit_122 },

	{ .ptr = (void*)f293_emit_123 },

	{ .ptr = (void*)f294_emit_124 },

	{ .ptr = (void*)f295_emit_125 },

	{ .ptr = (void*)f296_emit_126 },

	{ .ptr = (void*)f297_emit_127 },

	{ .ptr = (void*)f298_emit_128 },

	{ .ptr = (void*)f299_emit_129 },

	{ .ptr = (void*)f300_emit_130 },

	{ .ptr = (void*)f301_emit_131 },

	{ .ptr = (void*)f302_emit_132 },

	{ .ptr = (void*)f303_emit_133 },

	{ .ptr = (void*)f304_emit_134 },

	{ .ptr = (void*)f305_emit_135 },

	{ .ptr = (void*)f306_emit_136 },

	{ .ptr = (void*)f307_emit_137 },

	{ .ptr = (void*)f308_emit_138 },

	{ .ptr = (void*)f309_emit_139 },

	{ .ptr = (void*)f310_emit_140 },

	{ .ptr = (void*)f311_emit_141 },

	{ .ptr = (void*)f312_emit_142 },

	{ .ptr = (void*)f313_emit_143 },

	{ .ptr = (void*)f314_emit_144 },

	{ .ptr = (void*)f315_emit_145 },

	{ .ptr = (void*)f316_emit_146 },

	{ .ptr = (void*)f317_emit_147 },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f318_emit_152 },

	{ .ptr = (void*)f319_emit_153 },

	{ .ptr = (void*)f320_emit_154 },

	{ .ptr = (void*)f321_emit_155 },

	{ .ptr = (void*)f322_emit_156 },

	{ .ptr = (void*)f323_emit_157 },

	{ .ptr = (void*)f324_emit_158 },

	{ .ptr = (void*)f325_emit_159 },

	{ .ptr = (void*)f326_emit_160 },

	{ .ptr = (void*)f327_emit_161 },

	{ .ptr = (void*)f328_emit_162 },

	{ .ptr = (void*)f329_emit_163 },

	{ .ptr = (void*)f330_emit_164 },

	{ .ptr = (void*)f331_emit_165 },

	{ .ptr = (void*)f332_emit_166 },

	{ .ptr = (void*)f333_emit_167 },

	{ .ptr = (void*)f334_emit_168 },

	{ .ptr = (void*)f335_emit_169 },

	{ .ptr = (void*)f336_emit_170 },

	{ .ptr = (void*)f337_emit_171 },

	{ .ptr = (void*)f338_emit_172 },

	{ .ptr = (void*)f339_emit_173 },

	{ .ptr = (void*)f340_emit_174 },

	{ .ptr = (void*)f341_emit_175 },

	{ .ptr = (void*)f342_emit_176 },

	{ .ptr = (void*)f343_emit_177 },

	{ .ptr = (void*)f344_emit_178 },

	{ .ptr = (void*)f345_emit_179 },

	{ .ptr = (void*)f346_emit_180 },

	{ .ptr = (void*)f347_emit_181 },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f354_nop_emitter },

	{ .ptr = (void*)f348_emit_184 },

	{ .ptr = (void*)f349_emit_185 },

	{ .ptr = (void*)f350_emit_186 },

	{ .ptr = (void*)f351_emit_187 },

	{ .ptr = (void*)f352_emit_188 },

	{ .ptr = (void*)f353_emit_189 },

};

// EmitOneInstruction workspace at ws+3848 length ws+82
void f178_EmitOneInstruction(i8 p3227 /* self */, i1 p3228 /* ruleid */) {
	*(i1*)(intptr_t)(ws+3848) = p3228; /*ruleid */
	*(i8*)(intptr_t)(ws+3856) = p3227; /*self */

	i8 v3229 = (i8)(intptr_t)(ws+3856);
	i8 v3230 = *(i8*)(intptr_t)v3229;
	i8 v3231 = v3230+(+16);
	i8 v3232 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3232 = v3231;

	i8 v3233 = (i8)(intptr_t)(ws+3864);
	i8 v3234 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v3234 = v3233;

	i1 v3235 = (i1)+3;
	i8 v3236 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v3236 = v3235;

c02_0277:;

	i8 v3237 = (i8)(intptr_t)(ws+3928);
	i1 v3238 = *(i1*)(intptr_t)v3237;
	i1 v3239 = (i1)+0;
	if (v3238==v3239) goto c02_027a; else goto c02_0279;

c02_0279:;

	i8 v3240 = (i8)(intptr_t)(ws+3912);
	i8 v3241 = *(i8*)(intptr_t)v3240;
	i8 v3242 = *(i8*)(intptr_t)v3241;
	i8 v3243 = (i8)(intptr_t)(ws+3920);
	i8 v3244 = *(i8*)(intptr_t)v3243;
	*(i8*)(intptr_t)v3244 = v3242;

	i8 v3245 = (i8)(intptr_t)(ws+3920);
	i8 v3246 = *(i8*)(intptr_t)v3245;
	i8 v3247 = *(i8*)(intptr_t)v3246;
	i8 v3248 = (i8)+0;
	if (v3247==v3248) goto c02_027f; else goto c02_027e;

c02_027e:;

	i8 v3249 = (i8)(intptr_t)(ws+3920);
	i8 v3250 = *(i8*)(intptr_t)v3249;
	i8 v3251 = *(i8*)(intptr_t)v3250;
	i8 v3252 = v3251+(+57);
	i1 v3253 = *(i1*)(intptr_t)v3252;
	i8 v3254 = (i8)(intptr_t)(ws+3920);
	i8 v3255 = *(i8*)(intptr_t)v3254;
	i8 v3256 = v3255+(+8);
	*(i1*)(intptr_t)v3256 = v3253;

c02_027f:;

c02_027b:;

	i8 v3257 = (i8)(intptr_t)(ws+3912);
	i8 v3258 = *(i8*)(intptr_t)v3257;
	i8 v3259 = v3258+(+8);
	i8 v3260 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v3260 = v3259;

	i8 v3261 = (i8)(intptr_t)(ws+3920);
	i8 v3262 = *(i8*)(intptr_t)v3261;
	i8 v3263 = v3262+(+16);
	i8 v3264 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v3264 = v3263;

	i8 v3265 = (i8)(intptr_t)(ws+3928);
	i1 v3266 = *(i1*)(intptr_t)v3265;
	i1 v3267 = v3266+(-1);
	i8 v3268 = (i8)(intptr_t)(ws+3928);
	*(i1*)(intptr_t)v3268 = v3267;

	goto c02_0277;

c02_027a:;

	i8 v3269 = (i8)(intptr_t)(ws+3856);
	i8 v3270 = *(i8*)(intptr_t)v3269;
	i8 v3271 = v3270+(+41);
	i1 v3272 = *(i1*)(intptr_t)v3271;
	i8 v3273 = (i8)(intptr_t)(ws+3929);
	*(i1*)(intptr_t)v3273 = v3272;

















































































































































































	i8 v4421 = (i8)(intptr_t)((i1*)f178_EmitOneInstruction_s02a2);
	i8 v4422 = (i8)(intptr_t)(ws+3848);
	i1 v4423 = *(i1*)(intptr_t)v4422;
	i8 v4424 = v4423;
	i1 v4425 = (i1)+3;
	i8 v4426 = ((i8)v4424)<<v4425;
	i8 v4427 = v4421+v4426;
	i8 v4428 = *(i8*)(intptr_t)v4427;

	((void(*)(void))(intptr_t)v4428)();

endsub:;
}
static data f3___main_s02a3[] = {








	{ .i1 = { 0x3d,0x2d,0x2d,0xa2,0x2d,0xa3,0x2d,0xa4}},








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








	{ .i1 = { 0x2d,0x2d,0x2d,0x2d,0x2f,0x30,0x37,0x38}},








	{ .i1 = { 0x39,0x3a,0x32,0x33,0x34,0x35,0xa2,0xa3}},








	{ .i1 = { 0xa4,0xa5,0x89,0x8a,0x8b,0x8c,0xa7,0xa8}},








	{ .i1 = { 0xa9,0xaa,0x8e,0x8f,0x90,0x91,0x98,0x99}},








	{ .i1 = { 0x9a,0x9b,0x93,0x94,0x95,0x96,0x9d,0x9e}},








	{ .i1 = { 0x9f,0xa0,0xac,0xad,0xae,0xaf,0xb1,0xb2}},








	{ .i1 = { 0xb3,0xb4,0xb6,0xb7,0xb8,0xb9,0x75,0x76}},








	{ .i1 = { 0x77,0x78,0x70,0x71,0x72,0x73,0x7a,0x7b}},








	{ .i1 = { 0x7c,0x7d,0x7f,0x80,0x81,0x82,0x84,0x85}},








	{ .i1 = { 0x86,0x87,0x3e,0x3f,0x40,0x41,0x48,0x49}},








	{ .i1 = { 0x4a,0x4b,0x43,0x44,0x45,0x46,0x4d,0x4e}},








	{ .i1 = { 0x4f,0x50,0x52,0x53,0x54,0x55,0x57,0x58}},








	{ .i1 = { 0x59,0x5a,0x5d,0x5e,0x5f,0x61,0x63,0x64}},








	{ .i1 = { 0x66,0x67,0x69,0x6b,0x6c,0x6d,0x2e,0x06}},








	{ .i1 = { 0x08,0x09,0x0a,0x0b,0x0e,0x0d,0x0c,0x0f}},








	{ .i1 = { 0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17}},

};
static data f3___main_s02a4[] = {








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
static data f3___main_s02a5[] = {








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








	{ .i1 = { 0x08,0x00,0x01,0x01,0x00,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x00,0x00,0x00,0x01,0x07,0x06}},








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

// PopulateMatchBuffer workspace at ws+3896 length ws+24
void f355_PopulateMatchBuffer(i8 p4429 /* matchbuf */, i8 p4430 /* n */, i8 p4431 /* insn */) {
	*(i8*)(intptr_t)(ws+3896) = p4431; /*insn */
	*(i8*)(intptr_t)(ws+3904) = p4430; /*n */
	*(i8*)(intptr_t)(ws+3912) = p4429; /*matchbuf */

	i8 v4432 = (i8)(intptr_t)(ws+3904);
	i8 v4433 = *(i8*)(intptr_t)v4432;
	i8 v4434 = *(i8*)(intptr_t)v4433;
	i8 v4435 = v4434+(+72);
	i1 v4436 = *(i1*)(intptr_t)v4435;
	i8 v4437 = (i8)(intptr_t)(ws+3912);
	i8 v4438 = *(i8*)(intptr_t)v4437;
	*(i1*)(intptr_t)v4438 = v4436;

	i8 v4439 = (i8)(intptr_t)(ws+3904);
	i8 v4440 = *(i8*)(intptr_t)v4439;
	i8 v4441 = *(i8*)(intptr_t)v4440;
	i8 v4442 = v4441+(+24);
	i8 v4443 = *(i8*)(intptr_t)v4442;
	i8 v4444 = (i8)(intptr_t)(ws+3904);
	i8 v4445 = *(i8*)(intptr_t)v4444;
	i8 v4446 = v4445+(+8);
	*(i8*)(intptr_t)v4446 = v4443;

	i8 v4447 = (i8)(intptr_t)(ws+3904);
	i8 v4448 = *(i8*)(intptr_t)v4447;
	i8 v4449 = v4448+(+8);
	i8 v4450 = *(i8*)(intptr_t)v4449;
	i8 v4451 = (i8)+0;
	if (v4450==v4451) goto c02_02aa; else goto c02_02a9;

c02_02a9:;

	i8 v4452 = (i8)(intptr_t)(ws+3904);
	i8 v4453 = *(i8*)(intptr_t)v4452;
	i8 v4454 = v4453+(+8);
	i8 v4455 = *(i8*)(intptr_t)v4454;
	i8 v4456 = v4455+(+72);
	i1 v4457 = *(i1*)(intptr_t)v4456;
	i8 v4458 = (i8)(intptr_t)(ws+3912);
	i8 v4459 = *(i8*)(intptr_t)v4458;
	i8 v4460 = v4459+(+1);
	*(i1*)(intptr_t)v4460 = v4457;

c02_02aa:;

c02_02a6:;

	i8 v4461 = (i8)(intptr_t)(ws+3904);
	i8 v4462 = *(i8*)(intptr_t)v4461;
	i8 v4463 = *(i8*)(intptr_t)v4462;
	i8 v4464 = v4463+(+32);
	i8 v4465 = *(i8*)(intptr_t)v4464;
	i8 v4466 = (i8)(intptr_t)(ws+3904);
	i8 v4467 = *(i8*)(intptr_t)v4466;
	i8 v4468 = v4467+(+16);
	*(i8*)(intptr_t)v4468 = v4465;

	i8 v4469 = (i8)(intptr_t)(ws+3904);
	i8 v4470 = *(i8*)(intptr_t)v4469;
	i8 v4471 = v4470+(+16);
	i8 v4472 = *(i8*)(intptr_t)v4471;
	i8 v4473 = (i8)+0;
	if (v4472==v4473) goto c02_02af; else goto c02_02ae;

c02_02ae:;

	i8 v4474 = (i8)(intptr_t)(ws+3904);
	i8 v4475 = *(i8*)(intptr_t)v4474;
	i8 v4476 = v4475+(+16);
	i8 v4477 = *(i8*)(intptr_t)v4476;
	i8 v4478 = v4477+(+72);
	i1 v4479 = *(i1*)(intptr_t)v4478;
	i8 v4480 = (i8)(intptr_t)(ws+3912);
	i8 v4481 = *(i8*)(intptr_t)v4480;
	i8 v4482 = v4481+(+2);
	*(i1*)(intptr_t)v4482 = v4479;

c02_02af:;

c02_02ab:;

endsub:;
}

// IsStackedRegister workspace at ws+3864 length ws+16
void f356_IsStackedRegister(i1* p4483 /* result */, i1 p4484 /* regid */) {
	*(i1*)(intptr_t)(ws+3864) = p4484; /*regid */

	i1 v4485 = (i1)+0;
	i8 v4486 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v4486 = v4485;

	i8 v4487 = (i8)(intptr_t)((i1*)f3___main_s00bf);
	i8 v4488 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v4488 = v4487;

c02_02b2:;

	i8 v4489 = (i8)(intptr_t)(ws+3872);
	i8 v4490 = *(i8*)(intptr_t)v4489;
	i8 v4491 = (i8)(intptr_t)((i1*)f3___main_s00bf+80);
	if (v4490==v4491) goto c02_02b5; else goto c02_02b4;

c02_02b4:;

	i8 v4492 = (i8)(intptr_t)(ws+3872);
	i8 v4493 = *(i8*)(intptr_t)v4492;
	i8 v4494 = v4493+(+8);
	i1 v4495 = *(i1*)(intptr_t)v4494;
	i8 v4496 = (i8)(intptr_t)(ws+3864);
	i1 v4497 = *(i1*)(intptr_t)v4496;
	i1 v4498 = v4495&v4497;
	i1 v4499 = (i1)+0;
	if (v4498==v4499) goto c02_02ba; else goto c02_02b9;

c02_02b9:;

	i8 v4500 = (i8)(intptr_t)(ws+3872);
	i8 v4501 = *(i8*)(intptr_t)v4500;
	i8 v4502 = v4501+(+11);
	i1 v4503 = *(i1*)(intptr_t)v4502;
	i8 v4504 = (i8)(intptr_t)(ws+3865);
	*(i1*)(intptr_t)v4504 = v4503;

	goto endsub;

c02_02ba:;

c02_02b6:;

	i8 v4505 = (i8)(intptr_t)(ws+3872);
	i8 v4506 = *(i8*)(intptr_t)v4505;
	i8 v4507 = v4506+(+16);
	i8 v4508 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v4508 = v4507;

	goto c02_02b2;

c02_02b5:;

endsub:;
	*p4483 = *(i1*)(intptr_t)(ws+3865);
}

// CalculateBlockedRegisters workspace at ws+3864 length ws+17
void f357_CalculateBlockedRegisters(i1* p4509 /* blocked */, i8 p4510 /* last */, i8 p4511 /* insn */) {
	*(i8*)(intptr_t)(ws+3864) = p4511; /*insn */
	*(i8*)(intptr_t)(ws+3872) = p4510; /*last */

	i1 v4512 = (i1)+0;
	i8 v4513 = (i8)(intptr_t)(ws+3880);
	*(i1*)(intptr_t)v4513 = v4512;

	i8 v4514 = (i8)(intptr_t)(ws+3864);
	i8 v4515 = *(i8*)(intptr_t)v4514;
	i8 v4516 = *(i8*)(intptr_t)v4515;
	i8 v4517 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4517 = v4516;

c02_02bd:;

	i8 v4518 = (i8)(intptr_t)(ws+3864);
	i8 v4519 = *(i8*)(intptr_t)v4518;
	i8 v4520 = (i8)(intptr_t)(ws+3872);
	i8 v4521 = *(i8*)(intptr_t)v4520;
	if (v4519==v4521) goto c02_02c0; else goto c02_02bf;

c02_02bf:;

	i8 v4522 = (i8)(intptr_t)(ws+3880);
	i1 v4523 = *(i1*)(intptr_t)v4522;
	i8 v4524 = (i8)(intptr_t)(ws+3864);
	i8 v4525 = *(i8*)(intptr_t)v4524;
	i8 v4526 = v4525+(+42);
	i1 v4527 = *(i1*)(intptr_t)v4526;
	i1 v4528 = v4523|v4527;
	i8 v4529 = (i8)(intptr_t)(ws+3864);
	i8 v4530 = *(i8*)(intptr_t)v4529;
	i8 v4531 = v4530+(+43);
	i1 v4532 = *(i1*)(intptr_t)v4531;
	i1 v4533 = v4528|v4532;
	i8 v4534 = (i8)(intptr_t)(ws+3880);
	*(i1*)(intptr_t)v4534 = v4533;

	i8 v4535 = (i8)(intptr_t)(ws+3864);
	i8 v4536 = *(i8*)(intptr_t)v4535;
	i8 v4537 = (i8)(intptr_t)(ws+3872);
	i8 v4538 = *(i8*)(intptr_t)v4537;
	if (v4536==v4538) goto c02_02c4; else goto c02_02c5;

c02_02c4:;

	goto c02_02c0;

c02_02c5:;

c02_02c1:;

	i8 v4539 = (i8)(intptr_t)(ws+3864);
	i8 v4540 = *(i8*)(intptr_t)v4539;
	i8 v4541 = *(i8*)(intptr_t)v4540;
	i8 v4542 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4542 = v4541;

	goto c02_02bd;

c02_02c0:;

endsub:;
	*p4509 = *(i1*)(intptr_t)(ws+3880);
}

// BlockRegisters workspace at ws+3864 length ws+17
void f358_BlockRegisters(i1 p4543 /* blocked */, i8 p4544 /* last */, i8 p4545 /* insn */) {
	*(i8*)(intptr_t)(ws+3864) = p4545; /*insn */
	*(i8*)(intptr_t)(ws+3872) = p4544; /*last */
	*(i1*)(intptr_t)(ws+3880) = p4543; /*blocked */

	i8 v4546 = (i8)(intptr_t)(ws+3864);
	i8 v4547 = *(i8*)(intptr_t)v4546;
	i8 v4548 = *(i8*)(intptr_t)v4547;
	i8 v4549 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4549 = v4548;

c02_02c8:;

	i8 v4550 = (i8)(intptr_t)(ws+3864);
	i8 v4551 = *(i8*)(intptr_t)v4550;
	i8 v4552 = (i8)(intptr_t)(ws+3872);
	i8 v4553 = *(i8*)(intptr_t)v4552;
	if (v4551==v4553) goto c02_02cb; else goto c02_02ca;

c02_02ca:;

	i8 v4554 = (i8)(intptr_t)(ws+3864);
	i8 v4555 = *(i8*)(intptr_t)v4554;
	i8 v4556 = v4555+(+42);
	i1 v4557 = *(i1*)(intptr_t)v4556;
	i8 v4558 = (i8)(intptr_t)(ws+3880);
	i1 v4559 = *(i1*)(intptr_t)v4558;
	i1 v4560 = v4557|v4559;
	i8 v4561 = (i8)(intptr_t)(ws+3864);
	i8 v4562 = *(i8*)(intptr_t)v4561;
	i8 v4563 = v4562+(+42);
	*(i1*)(intptr_t)v4563 = v4560;

	i8 v4564 = (i8)(intptr_t)(ws+3864);
	i8 v4565 = *(i8*)(intptr_t)v4564;
	i8 v4566 = v4565+(+43);
	i1 v4567 = *(i1*)(intptr_t)v4566;
	i8 v4568 = (i8)(intptr_t)(ws+3880);
	i1 v4569 = *(i1*)(intptr_t)v4568;
	i1 v4570 = v4567|v4569;
	i8 v4571 = (i8)(intptr_t)(ws+3864);
	i8 v4572 = *(i8*)(intptr_t)v4571;
	i8 v4573 = v4572+(+43);
	*(i1*)(intptr_t)v4573 = v4570;

	i8 v4574 = (i8)(intptr_t)(ws+3864);
	i8 v4575 = *(i8*)(intptr_t)v4574;
	i8 v4576 = (i8)(intptr_t)(ws+3872);
	i8 v4577 = *(i8*)(intptr_t)v4576;
	if (v4575==v4577) goto c02_02cf; else goto c02_02d0;

c02_02cf:;

	goto c02_02cb;

c02_02d0:;

c02_02cc:;

	i8 v4578 = (i8)(intptr_t)(ws+3864);
	i8 v4579 = *(i8*)(intptr_t)v4578;
	i8 v4580 = *(i8*)(intptr_t)v4579;
	i8 v4581 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4581 = v4580;

	goto c02_02c8;

c02_02cb:;

endsub:;
}
const i1 c02_s01e4[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };
	void f63_SimpleError(i8 /* s */);

// CreateSpill workspace at ws+3864 length ws+24
void f359_CreateSpill(i1 p4582 /* dest */, i1 p4583 /* src */, i8 p4584 /* insn */) {
	*(i8*)(intptr_t)(ws+3864) = p4584; /*insn */
	*(i1*)(intptr_t)(ws+3872) = p4583; /*src */
	*(i1*)(intptr_t)(ws+3873) = p4582; /*dest */

	i8 v4585 = (i8)(intptr_t)(ws+3864);
	i8 v4586 = *(i8*)(intptr_t)v4585;
	i8 v4587 = v4586+(+60);
	i1 v4588 = *(i1*)(intptr_t)v4587;
	i8 v4589 = (i8)(intptr_t)(ws+3874);
	*(i1*)(intptr_t)v4589 = v4588;

	i8 v4590 = (i8)(intptr_t)(ws+3874);
	i1 v4591 = *(i1*)(intptr_t)v4590;
	i1 v4592 = (i1)+5;
	if (v4591==v4592) goto c02_02d4; else goto c02_02d5;

c02_02d4:;

	i8 v4593 = (i8)(intptr_t)c02_s01e4;
	i8 v4594 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v4594)(v4593);

c02_02d5:;

c02_02d1:;

	i8 v4595 = (i8)(intptr_t)(ws+3864);
	i8 v4596 = *(i8*)(intptr_t)v4595;
	i8 v4597 = v4596+(+44);
	i8 v4598 = (i8)(intptr_t)(ws+3874);
	i1 v4599 = *(i1*)(intptr_t)v4598;
	i8 v4600 = v4599;
	i1 v4601 = (i1)+1;
	i8 v4602 = ((i8)v4600)<<v4601;
	i8 v4603 = v4597+v4602;
	i8 v4604 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4604 = v4603;

	i8 v4605 = (i8)(intptr_t)(ws+3872);
	i1 v4606 = *(i1*)(intptr_t)v4605;
	i8 v4607 = (i8)(intptr_t)(ws+3880);
	i8 v4608 = *(i8*)(intptr_t)v4607;
	*(i1*)(intptr_t)v4608 = v4606;

	i8 v4609 = (i8)(intptr_t)(ws+3873);
	i1 v4610 = *(i1*)(intptr_t)v4609;
	i8 v4611 = (i8)(intptr_t)(ws+3880);
	i8 v4612 = *(i8*)(intptr_t)v4611;
	i8 v4613 = v4612+(+1);
	*(i1*)(intptr_t)v4613 = v4610;

	i8 v4614 = (i8)(intptr_t)(ws+3874);
	i1 v4615 = *(i1*)(intptr_t)v4614;
	i1 v4616 = v4615+(+1);
	i8 v4617 = (i8)(intptr_t)(ws+3864);
	i8 v4618 = *(i8*)(intptr_t)v4617;
	i8 v4619 = v4618+(+60);
	*(i1*)(intptr_t)v4619 = v4616;

endsub:;
}
const i1 c02_s01e5[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };
	void f63_SimpleError(i8 /* s */);

// CreateReload workspace at ws+3864 length ws+24
void f360_CreateReload(i1 p4620 /* dest */, i1 p4621 /* src */, i8 p4622 /* insn */) {
	*(i8*)(intptr_t)(ws+3864) = p4622; /*insn */
	*(i1*)(intptr_t)(ws+3872) = p4621; /*src */
	*(i1*)(intptr_t)(ws+3873) = p4620; /*dest */

	i8 v4623 = (i8)(intptr_t)(ws+3864);
	i8 v4624 = *(i8*)(intptr_t)v4623;
	i8 v4625 = v4624+(+61);
	i1 v4626 = *(i1*)(intptr_t)v4625;
	i8 v4627 = (i8)(intptr_t)(ws+3874);
	*(i1*)(intptr_t)v4627 = v4626;

	i8 v4628 = (i8)(intptr_t)(ws+3874);
	i1 v4629 = *(i1*)(intptr_t)v4628;
	i1 v4630 = (i1)+5;
	if (v4629==v4630) goto c02_02d9; else goto c02_02da;

c02_02d9:;

	i8 v4631 = (i8)(intptr_t)c02_s01e5;
	i8 v4632 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v4632)(v4631);

c02_02da:;

c02_02d6:;

	i8 v4633 = (i8)(intptr_t)(ws+3864);
	i8 v4634 = *(i8*)(intptr_t)v4633;
	i8 v4635 = v4634+(+52);
	i8 v4636 = (i8)(intptr_t)(ws+3874);
	i1 v4637 = *(i1*)(intptr_t)v4636;
	i8 v4638 = v4637;
	i1 v4639 = (i1)+1;
	i8 v4640 = ((i8)v4638)<<v4639;
	i8 v4641 = v4635+v4640;
	i8 v4642 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v4642 = v4641;

	i8 v4643 = (i8)(intptr_t)(ws+3872);
	i1 v4644 = *(i1*)(intptr_t)v4643;
	i8 v4645 = (i8)(intptr_t)(ws+3880);
	i8 v4646 = *(i8*)(intptr_t)v4645;
	*(i1*)(intptr_t)v4646 = v4644;

	i8 v4647 = (i8)(intptr_t)(ws+3873);
	i1 v4648 = *(i1*)(intptr_t)v4647;
	i8 v4649 = (i8)(intptr_t)(ws+3880);
	i8 v4650 = *(i8*)(intptr_t)v4649;
	i8 v4651 = v4650+(+1);
	*(i1*)(intptr_t)v4651 = v4648;

	i8 v4652 = (i8)(intptr_t)(ws+3874);
	i1 v4653 = *(i1*)(intptr_t)v4652;
	i1 v4654 = v4653+(+1);
	i8 v4655 = (i8)(intptr_t)(ws+3864);
	i8 v4656 = *(i8*)(intptr_t)v4655;
	i8 v4657 = v4656+(+61);
	*(i1*)(intptr_t)v4657 = v4654;

endsub:;
}
	void f156_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f156_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f156_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f156_ArchEmitMove(i1 /* dest */, i1 /* src */);

// ShuffleRegisters workspace at ws+3848 length ws+25
void f361_ShuffleRegisters(i8 p4658 /* moves */) {
	*(i8*)(intptr_t)(ws+3848) = p4658; /*moves */

	i1 v4659 = (i1)+0;
	i8 v4660 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v4660 = v4659;

	i1 v4661 = (i1)+0;
	i8 v4662 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4662 = v4661;

	i8 v4663 = (i8)(intptr_t)(ws+3848);
	i8 v4664 = *(i8*)(intptr_t)v4663;
	i8 v4665 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4665 = v4664;

	i1 v4666 = (i1)+4;
	i8 v4667 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4667 = v4666;

c02_02dd:;

	i8 v4668 = (i8)(intptr_t)(ws+3872);
	i1 v4669 = *(i1*)(intptr_t)v4668;
	i1 v4670 = (i1)+0;
	if (v4669==v4670) goto c02_02e0; else goto c02_02df;

c02_02df:;

	i8 v4671 = (i8)(intptr_t)(ws+3856);
	i1 v4672 = *(i1*)(intptr_t)v4671;
	i8 v4673 = (i8)(intptr_t)(ws+3864);
	i8 v4674 = *(i8*)(intptr_t)v4673;
	i8 v4675 = v4674+(+1);
	i1 v4676 = *(i1*)(intptr_t)v4675;
	i1 v4677 = v4672|v4676;
	i8 v4678 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v4678 = v4677;

	i8 v4679 = (i8)(intptr_t)(ws+3857);
	i1 v4680 = *(i1*)(intptr_t)v4679;
	i8 v4681 = (i8)(intptr_t)(ws+3864);
	i8 v4682 = *(i8*)(intptr_t)v4681;
	i1 v4683 = *(i1*)(intptr_t)v4682;
	i1 v4684 = v4680|v4683;
	i8 v4685 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4685 = v4684;

	i8 v4686 = (i8)(intptr_t)(ws+3872);
	i1 v4687 = *(i1*)(intptr_t)v4686;
	i1 v4688 = v4687+(-1);
	i8 v4689 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4689 = v4688;

	i8 v4690 = (i8)(intptr_t)(ws+3864);
	i8 v4691 = *(i8*)(intptr_t)v4690;
	i8 v4692 = v4691+(+2);
	i8 v4693 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4693 = v4692;

	goto c02_02dd;

c02_02e0:;

c02_02e1:;

	i8 v4694 = (i8)(intptr_t)(ws+3848);
	i8 v4695 = *(i8*)(intptr_t)v4694;
	i8 v4696 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4696 = v4695;

	i1 v4697 = (i1)+4;
	i8 v4698 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4698 = v4697;

c02_02e5:;

	i8 v4699 = (i8)(intptr_t)(ws+3872);
	i1 v4700 = *(i1*)(intptr_t)v4699;
	i1 v4701 = (i1)+0;
	if (v4700==v4701) goto c02_02e8; else goto c02_02e7;

c02_02e7:;

	i8 v4702 = (i8)(intptr_t)(ws+3864);
	i8 v4703 = *(i8*)(intptr_t)v4702;
	i1 v4704 = *(i1*)(intptr_t)v4703;
	i1 v4705 = (i1)+0;
	if (v4704==v4705) goto c02_02ef; else goto c02_02f0;

c02_02f0:;

	i8 v4706 = (i8)(intptr_t)(ws+3864);
	i8 v4707 = *(i8*)(intptr_t)v4706;
	i8 v4708 = v4707+(+1);
	i1 v4709 = *(i1*)(intptr_t)v4708;
	i1 v4710 = (i1)+0;
	if (v4709==v4710) goto c02_02ee; else goto c02_02ef;

c02_02ee:;

	goto c02_02e8;

c02_02ef:;

c02_02e9:;

	i8 v4711 = (i8)(intptr_t)(ws+3864);
	i8 v4712 = *(i8*)(intptr_t)v4711;
	i8 v4713 = v4712+(+2);
	i8 v4714 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4714 = v4713;

	i8 v4715 = (i8)(intptr_t)(ws+3872);
	i1 v4716 = *(i1*)(intptr_t)v4715;
	i1 v4717 = v4716+(-1);
	i8 v4718 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4718 = v4717;

	goto c02_02e5;

c02_02e8:;

	i8 v4719 = (i8)(intptr_t)(ws+3872);
	i1 v4720 = *(i1*)(intptr_t)v4719;
	i1 v4721 = (i1)+0;
	if (v4720==v4721) goto c02_02f5; else goto c02_02f4;

c02_02f4:;

	i8 v4722 = (i8)(intptr_t)(ws+3864);
	i8 v4723 = *(i8*)(intptr_t)v4722;
	i1 v4724 = *(i1*)(intptr_t)v4723;
	i1 v4725 = (i1)+0;
	i8 v4726 = (i8)(intptr_t)(f156_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v4726)(v4725, v4724);

	i8 v4727 = (i8)(intptr_t)(ws+3857);
	i1 v4728 = *(i1*)(intptr_t)v4727;
	i8 v4729 = (i8)(intptr_t)(ws+3864);
	i8 v4730 = *(i8*)(intptr_t)v4729;
	i1 v4731 = *(i1*)(intptr_t)v4730;
	i1 v4732 = ~v4731;
	i1 v4733 = v4728&v4732;
	i8 v4734 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4734 = v4733;

	i1 v4735 = (i1)+0;
	i8 v4736 = (i8)(intptr_t)(ws+3864);
	i8 v4737 = *(i8*)(intptr_t)v4736;
	*(i1*)(intptr_t)v4737 = v4735;

	goto c02_02e1;

c02_02f5:;

c02_02f1:;

	i8 v4738 = (i8)(intptr_t)(ws+3848);
	i8 v4739 = *(i8*)(intptr_t)v4738;
	i8 v4740 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4740 = v4739;

	i1 v4741 = (i1)+4;
	i8 v4742 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4742 = v4741;

c02_02f8:;

	i8 v4743 = (i8)(intptr_t)(ws+3872);
	i1 v4744 = *(i1*)(intptr_t)v4743;
	i1 v4745 = (i1)+0;
	if (v4744==v4745) goto c02_02fb; else goto c02_02fa;

c02_02fa:;

	i8 v4746 = (i8)(intptr_t)(ws+3864);
	i8 v4747 = *(i8*)(intptr_t)v4746;
	i1 v4748 = *(i1*)(intptr_t)v4747;
	i1 v4749 = (i1)+0;
	if (v4748==v4749) goto c02_0304; else goto c02_0306;

c02_0306:;

	i8 v4750 = (i8)(intptr_t)(ws+3864);
	i8 v4751 = *(i8*)(intptr_t)v4750;
	i8 v4752 = v4751+(+1);
	i1 v4753 = *(i1*)(intptr_t)v4752;
	i1 v4754 = (i1)+0;
	if (v4753==v4754) goto c02_0304; else goto c02_0305;

c02_0305:;

	i8 v4755 = (i8)(intptr_t)(ws+3864);
	i8 v4756 = *(i8*)(intptr_t)v4755;
	i8 v4757 = v4756+(+1);
	i1 v4758 = *(i1*)(intptr_t)v4757;
	i8 v4759 = (i8)(intptr_t)(ws+3857);
	i1 v4760 = *(i1*)(intptr_t)v4759;
	i1 v4761 = v4758&v4760;
	i1 v4762 = (i1)+0;
	if (v4761==v4762) goto c02_0303; else goto c02_0304;

c02_0303:;

	goto c02_02fb;

c02_0304:;

c02_02fc:;

	i8 v4763 = (i8)(intptr_t)(ws+3864);
	i8 v4764 = *(i8*)(intptr_t)v4763;
	i8 v4765 = v4764+(+2);
	i8 v4766 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4766 = v4765;

	i8 v4767 = (i8)(intptr_t)(ws+3872);
	i1 v4768 = *(i1*)(intptr_t)v4767;
	i1 v4769 = v4768+(-1);
	i8 v4770 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4770 = v4769;

	goto c02_02f8;

c02_02fb:;

	i8 v4771 = (i8)(intptr_t)(ws+3872);
	i1 v4772 = *(i1*)(intptr_t)v4771;
	i1 v4773 = (i1)+0;
	if (v4772==v4773) goto c02_030b; else goto c02_030a;

c02_030a:;

	i8 v4774 = (i8)(intptr_t)(ws+3864);
	i8 v4775 = *(i8*)(intptr_t)v4774;
	i1 v4776 = *(i1*)(intptr_t)v4775;
	i8 v4777 = (i8)(intptr_t)(ws+3864);
	i8 v4778 = *(i8*)(intptr_t)v4777;
	i8 v4779 = v4778+(+1);
	i1 v4780 = *(i1*)(intptr_t)v4779;
	i8 v4781 = (i8)(intptr_t)(f156_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v4781)(v4780, v4776);

	i8 v4782 = (i8)(intptr_t)(ws+3857);
	i1 v4783 = *(i1*)(intptr_t)v4782;
	i8 v4784 = (i8)(intptr_t)(ws+3864);
	i8 v4785 = *(i8*)(intptr_t)v4784;
	i1 v4786 = *(i1*)(intptr_t)v4785;
	i1 v4787 = ~v4786;
	i1 v4788 = v4783&v4787;
	i8 v4789 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4789 = v4788;

	i8 v4790 = (i8)(intptr_t)(ws+3856);
	i1 v4791 = *(i1*)(intptr_t)v4790;
	i8 v4792 = (i8)(intptr_t)(ws+3864);
	i8 v4793 = *(i8*)(intptr_t)v4792;
	i8 v4794 = v4793+(+1);
	i1 v4795 = *(i1*)(intptr_t)v4794;
	i1 v4796 = ~v4795;
	i1 v4797 = v4791&v4796;
	i8 v4798 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v4798 = v4797;

	i1 v4799 = (i1)+0;
	i8 v4800 = (i8)(intptr_t)(ws+3864);
	i8 v4801 = *(i8*)(intptr_t)v4800;
	*(i1*)(intptr_t)v4801 = v4799;

	i1 v4802 = (i1)+0;
	i8 v4803 = (i8)(intptr_t)(ws+3864);
	i8 v4804 = *(i8*)(intptr_t)v4803;
	i8 v4805 = v4804+(+1);
	*(i1*)(intptr_t)v4805 = v4802;

	goto c02_02e1;

c02_030b:;

c02_0307:;

	i8 v4806 = (i8)(intptr_t)(ws+3848);
	i8 v4807 = *(i8*)(intptr_t)v4806;
	i8 v4808 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4808 = v4807;

	i1 v4809 = (i1)+4;
	i8 v4810 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4810 = v4809;

c02_030e:;

	i8 v4811 = (i8)(intptr_t)(ws+3872);
	i1 v4812 = *(i1*)(intptr_t)v4811;
	i1 v4813 = (i1)+0;
	if (v4812==v4813) goto c02_0311; else goto c02_0310;

c02_0310:;

	i8 v4814 = (i8)(intptr_t)(ws+3864);
	i8 v4815 = *(i8*)(intptr_t)v4814;
	i1 v4816 = *(i1*)(intptr_t)v4815;
	i1 v4817 = (i1)+0;
	if (v4816==v4817) goto c02_0319; else goto c02_0318;

c02_0319:;

	i8 v4818 = (i8)(intptr_t)(ws+3864);
	i8 v4819 = *(i8*)(intptr_t)v4818;
	i8 v4820 = v4819+(+1);
	i1 v4821 = *(i1*)(intptr_t)v4820;
	i1 v4822 = (i1)+0;
	if (v4821==v4822) goto c02_0318; else goto c02_0317;

c02_0317:;

	goto c02_0311;

c02_0318:;

c02_0312:;

	i8 v4823 = (i8)(intptr_t)(ws+3864);
	i8 v4824 = *(i8*)(intptr_t)v4823;
	i8 v4825 = v4824+(+2);
	i8 v4826 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4826 = v4825;

	i8 v4827 = (i8)(intptr_t)(ws+3872);
	i1 v4828 = *(i1*)(intptr_t)v4827;
	i1 v4829 = v4828+(-1);
	i8 v4830 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4830 = v4829;

	goto c02_030e;

c02_0311:;

	i8 v4831 = (i8)(intptr_t)(ws+3872);
	i1 v4832 = *(i1*)(intptr_t)v4831;
	i1 v4833 = (i1)+0;
	if (v4832==v4833) goto c02_031e; else goto c02_031d;

c02_031d:;

	i1 v4834 = (i1)+0;
	i8 v4835 = (i8)(intptr_t)(ws+3864);
	i8 v4836 = *(i8*)(intptr_t)v4835;
	i8 v4837 = v4836+(+1);
	i1 v4838 = *(i1*)(intptr_t)v4837;
	i8 v4839 = (i8)(intptr_t)(f156_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v4839)(v4838, v4834);

	i8 v4840 = (i8)(intptr_t)(ws+3856);
	i1 v4841 = *(i1*)(intptr_t)v4840;
	i8 v4842 = (i8)(intptr_t)(ws+3864);
	i8 v4843 = *(i8*)(intptr_t)v4842;
	i8 v4844 = v4843+(+1);
	i1 v4845 = *(i1*)(intptr_t)v4844;
	i1 v4846 = ~v4845;
	i1 v4847 = v4841&v4846;
	i8 v4848 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v4848 = v4847;

	i1 v4849 = (i1)+0;
	i8 v4850 = (i8)(intptr_t)(ws+3864);
	i8 v4851 = *(i8*)(intptr_t)v4850;
	i8 v4852 = v4851+(+1);
	*(i1*)(intptr_t)v4852 = v4849;

	goto c02_02e1;

c02_031e:;

c02_031a:;

	i8 v4853 = (i8)(intptr_t)(ws+3848);
	i8 v4854 = *(i8*)(intptr_t)v4853;
	i8 v4855 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4855 = v4854;

	i1 v4856 = (i1)+4;
	i8 v4857 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4857 = v4856;

c02_0321:;

	i8 v4858 = (i8)(intptr_t)(ws+3872);
	i1 v4859 = *(i1*)(intptr_t)v4858;
	i1 v4860 = (i1)+0;
	if (v4859==v4860) goto c02_0324; else goto c02_0323;

c02_0323:;

	i8 v4861 = (i8)(intptr_t)(ws+3864);
	i8 v4862 = *(i8*)(intptr_t)v4861;
	i1 v4863 = *(i1*)(intptr_t)v4862;
	i1 v4864 = (i1)+0;
	if (v4863==v4864) goto c02_032b; else goto c02_032c;

c02_032c:;

	i8 v4865 = (i8)(intptr_t)(ws+3864);
	i8 v4866 = *(i8*)(intptr_t)v4865;
	i8 v4867 = v4866+(+1);
	i1 v4868 = *(i1*)(intptr_t)v4867;
	i1 v4869 = (i1)+0;
	if (v4868==v4869) goto c02_032b; else goto c02_032a;

c02_032a:;

	goto c02_0324;

c02_032b:;

c02_0325:;

	i8 v4870 = (i8)(intptr_t)(ws+3864);
	i8 v4871 = *(i8*)(intptr_t)v4870;
	i8 v4872 = v4871+(+2);
	i8 v4873 = (i8)(intptr_t)(ws+3864);
	*(i8*)(intptr_t)v4873 = v4872;

	i8 v4874 = (i8)(intptr_t)(ws+3872);
	i1 v4875 = *(i1*)(intptr_t)v4874;
	i1 v4876 = v4875+(-1);
	i8 v4877 = (i8)(intptr_t)(ws+3872);
	*(i1*)(intptr_t)v4877 = v4876;

	goto c02_0321;

c02_0324:;

	i8 v4878 = (i8)(intptr_t)(ws+3872);
	i1 v4879 = *(i1*)(intptr_t)v4878;
	i1 v4880 = (i1)+0;
	if (v4879==v4880) goto c02_0331; else goto c02_0330;

c02_0330:;

	i8 v4881 = (i8)(intptr_t)(ws+3864);
	i8 v4882 = *(i8*)(intptr_t)v4881;
	i1 v4883 = *(i1*)(intptr_t)v4882;
	i1 v4884 = (i1)+0;
	i8 v4885 = (i8)(intptr_t)(f156_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v4885)(v4884, v4883);

	i8 v4886 = (i8)(intptr_t)(ws+3857);
	i1 v4887 = *(i1*)(intptr_t)v4886;
	i8 v4888 = (i8)(intptr_t)(ws+3864);
	i8 v4889 = *(i8*)(intptr_t)v4888;
	i1 v4890 = *(i1*)(intptr_t)v4889;
	i1 v4891 = ~v4890;
	i1 v4892 = v4887&v4891;
	i8 v4893 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v4893 = v4892;

	i1 v4894 = (i1)+0;
	i8 v4895 = (i8)(intptr_t)(ws+3864);
	i8 v4896 = *(i8*)(intptr_t)v4895;
	*(i1*)(intptr_t)v4896 = v4894;

	goto c02_02e1;

c02_0331:;

c02_032d:;

	goto c02_02e2;

c02_02e2:;

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

// PrintNodes workspace at ws+3896 length ws+24
void f362_PrintNodes(i8 p4897 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3896) = p4897; /*rootnode */

	i8 v4898 = (i8)(intptr_t)(ws+184);
	i8 v4899 = *(i8*)(intptr_t)v4898;
	i8 v4900 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v4900 = v4899;

	i8 v4901 = (i8)(intptr_t)(ws+3896);
	i8 v4902 = *(i8*)(intptr_t)v4901;
	i8 v4903 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v4903)(v4902);

c02_0334:;

	i8 v4904 = (i8)(intptr_t)(ws+184);
	i8 v4905 = *(i8*)(intptr_t)v4904;
	i8 v4906 = (i8)(intptr_t)(ws+3904);
	i8 v4907 = *(i8*)(intptr_t)v4906;
	if (v4905==v4907) goto c02_0337; else goto c02_0336;

c02_0336:;

	i8 v4908 = (i8)(intptr_t)(f58_NextNode);
	i8 v4909;

	((void(*)(i8* /* node */))(intptr_t)v4908)(&v4909);
	i8 v4910 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v4910 = v4909;

	i8 v4911 = (i8)(intptr_t)(ws+3912);
	i8 v4912 = *(i8*)(intptr_t)v4911;
	i8 v4913 = (i8)+0;
	if (v4912==v4913) goto c02_033b; else goto c02_033c;

c02_033b:;

	goto c02_0337;

c02_033c:;

c02_0338:;

	i8 v4914 = (i8)(intptr_t)(ws+3912);
	i8 v4915 = *(i8*)(intptr_t)v4914;
	i4 v4916 = v4915;
	i8 v4917 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v4917)(v4916);

	i1 v4918 = (i1)+32;
	i8 v4919 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4919)(v4918);

	i8 v4920 = (i8)(intptr_t)(ws+3912);
	i8 v4921 = *(i8*)(intptr_t)v4920;
	i8 v4922 = v4921+(+72);
	i1 v4923 = *(i1*)(intptr_t)v4922;
	i8 v4924 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v4924)(v4923);

	i1 v4925 = (i1)+32;
	i8 v4926 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4926)(v4925);

	i8 v4927 = (i8)(intptr_t)(ws+3912);
	i8 v4928 = *(i8*)(intptr_t)v4927;
	i8 v4929 = v4928+(+56);
	i1 v4930 = *(i1*)(intptr_t)v4929;
	i2 v4931 = v4930;
	i8 v4932 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v4932)(v4931);

	i1 v4933 = (i1)+32;
	i8 v4934 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4934)(v4933);

	i8 v4935 = (i8)(intptr_t)(ws+3912);
	i8 v4936 = *(i8*)(intptr_t)v4935;
	i8 v4937 = v4936+(+57);
	i1 v4938 = *(i1*)(intptr_t)v4937;
	i2 v4939 = v4938;
	i8 v4940 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v4940)(v4939);

	i1 v4941 = (i1)+32;
	i8 v4942 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4942)(v4941);

	i8 v4943 = (i8)(intptr_t)(ws+3912);
	i8 v4944 = *(i8*)(intptr_t)v4943;
	i8 v4945 = v4944+(+24);
	i8 v4946 = *(i8*)(intptr_t)v4945;
	i4 v4947 = v4946;
	i8 v4948 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v4948)(v4947);

	i1 v4949 = (i1)+32;
	i8 v4950 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v4950)(v4949);

	i8 v4951 = (i8)(intptr_t)(ws+3912);
	i8 v4952 = *(i8*)(intptr_t)v4951;
	i8 v4953 = v4952+(+32);
	i8 v4954 = *(i8*)(intptr_t)v4953;
	i4 v4955 = v4954;
	i8 v4956 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v4956)(v4955);

	i8 v4957 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v4957)();

	goto c02_0334;

c02_0337:;

endsub:;
}
	void f56_PushNode(i8 /* node */);
	void f139_AllocNewInstruction(i8* /* insn */);
	void f57_PopNode(i8* /* node */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f355_PopulateMatchBuffer(i8 /* matchbuf */, i8 /* n */, i8 /* insn */);

// RewindRulePointers workspace at ws+3896 length ws+0
void f365_RewindRulePointers(void) {

	i8 v5000 = (i8)(intptr_t)(ws+3840);
	i8 v5001 = (i8)+3;
	i8 v5002 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v5002)(v5001, v5000);

	i8 v5003 = (i8)(intptr_t)(ws+3848);
	i8 v5004 = (i8)+24;
	i8 v5005 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v5005)(v5004, v5003);

	i8 v5006 = (i8)(intptr_t)(ws+3816);
	i8 v5007 = *(i8*)(intptr_t)v5006;
	i8 v5008 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v5008 = v5007;

	i8 v5009 = (i8)(intptr_t)(ws+3808);
	i8 v5010 = *(i8*)(intptr_t)v5009;
	i8 v5011 = (i8)(intptr_t)(ws+3848);
	i8 v5012 = (i8)(intptr_t)(ws+3840);
	i8 v5013 = (i8)(intptr_t)(f355_PopulateMatchBuffer);

	((void(*)(i8 /* matchbuf */, i8 /* n */, i8 /* insn */))(intptr_t)v5013)(v5012, v5011, v5010);

	i1 v5014 = (i1)+255;
	i8 v5015 = (i8)(intptr_t)(ws+3824);
	*(i1*)(intptr_t)v5015 = v5014;

	i8 v5016 = (i8)(intptr_t)((i1*)f3___main_s02a3);
	i8 v5017 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v5017 = v5016;

	i8 v5018 = (i8)(intptr_t)((i1*)f3___main_s02a4);
	i8 v5019 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v5019 = v5018;

	i8 v5020 = (i8)(intptr_t)((i1*)f3___main_s02a5-7);
	i8 v5021 = (i8)(intptr_t)(ws+3832);
	*(i8*)(intptr_t)v5021 = v5020;

endsub:;
}
	void f177_MatchPredicate(i1* /* matches */, i8 /* n */, i1 /* rule */);

// TestRule workspace at ws+3896 length ws+27
void f366_TestRule(i1* p5022 /* result */) {

	i1 v5023 = (i1)+0;
	i8 v5024 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v5024 = v5023;

	i8 v5025 = (i8)(intptr_t)(ws+3832);
	i8 v5026 = *(i8*)(intptr_t)v5025;
	i8 v5027 = v5026+(+1);
	i1 v5028 = *(i1*)(intptr_t)v5027;
	i1 v5029 = (i1)+0;
	if (v5028==v5029) goto c02_034c; else goto c02_034b;

c02_034b:;

	i8 v5030 = (i8)(intptr_t)(ws+3816);
	i8 v5031 = *(i8*)(intptr_t)v5030;
	i8 v5032 = v5031+(+56);
	i1 v5033 = *(i1*)(intptr_t)v5032;
	i8 v5034 = (i8)(intptr_t)(ws+3832);
	i8 v5035 = *(i8*)(intptr_t)v5034;
	i8 v5036 = v5035+(+1);
	i1 v5037 = *(i1*)(intptr_t)v5036;
	i1 v5038 = v5033&v5037;
	i1 v5039 = (i1)+0;
	if (v5038==v5039) goto c02_0350; else goto c02_0351;

c02_0350:;

	goto endsub;

c02_0351:;

c02_034d:;

	goto c02_0348;

c02_034c:;

	i8 v5040 = (i8)(intptr_t)(ws+3816);
	i8 v5041 = *(i8*)(intptr_t)v5040;
	i8 v5042 = v5041+(+56);
	i1 v5043 = *(i1*)(intptr_t)v5042;
	i1 v5044 = (i1)+0;
	if (v5043==v5044) goto c02_0356; else goto c02_0355;

c02_0355:;

	goto endsub;

c02_0356:;

c02_0352:;

c02_0348:;

	i8 v5045 = (i8)(intptr_t)(ws+3840);
	i8 v5046 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v5046 = v5045;

	i8 v5047 = (i8)(intptr_t)(ws+3872);
	i8 v5048 = *(i8*)(intptr_t)v5047;
	i8 v5049 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v5049 = v5048;

	i8 v5050 = (i8)(intptr_t)(ws+3832);
	i8 v5051 = *(i8*)(intptr_t)v5050;
	i8 v5052 = v5051+(+4);
	i1 v5053 = *(i1*)(intptr_t)v5052;
	i8 v5054 = (i8)(intptr_t)(ws+3920);
	*(i1*)(intptr_t)v5054 = v5053;

c02_0359:;

	i8 v5055 = (i8)(intptr_t)(ws+3920);
	i1 v5056 = *(i1*)(intptr_t)v5055;
	i1 v5057 = (i1)+0;
	if (v5056==v5057) goto c02_035c; else goto c02_035b;

c02_035b:;

	i8 v5058 = (i8)(intptr_t)(ws+3904);
	i8 v5059 = *(i8*)(intptr_t)v5058;
	i1 v5060 = *(i1*)(intptr_t)v5059;
	i8 v5061 = (i8)(intptr_t)(ws+3921);
	*(i1*)(intptr_t)v5061 = v5060;

	i8 v5062 = (i8)(intptr_t)(ws+3904);
	i8 v5063 = *(i8*)(intptr_t)v5062;
	i8 v5064 = v5063+(+1);
	i8 v5065 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v5065 = v5064;

	i8 v5066 = (i8)(intptr_t)(ws+3920);
	i1 v5067 = *(i1*)(intptr_t)v5066;
	i1 v5068 = v5067&(+1);
	i1 v5069 = (i1)+0;
	if (v5068==v5069) goto c02_0361; else goto c02_0360;

c02_0360:;

	i8 v5070 = (i8)(intptr_t)(ws+3912);
	i8 v5071 = *(i8*)(intptr_t)v5070;
	i1 v5072 = *(i1*)(intptr_t)v5071;
	i8 v5073 = (i8)(intptr_t)(ws+3922);
	*(i1*)(intptr_t)v5073 = v5072;

	i8 v5074 = (i8)(intptr_t)(ws+3912);
	i8 v5075 = *(i8*)(intptr_t)v5074;
	i8 v5076 = v5075+(+1);
	i8 v5077 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v5077 = v5076;

	i8 v5078 = (i8)(intptr_t)(ws+3921);
	i1 v5079 = *(i1*)(intptr_t)v5078;
	i8 v5080 = (i8)(intptr_t)(ws+3922);
	i1 v5081 = *(i1*)(intptr_t)v5080;
	if (v5079==v5081) goto c02_0366; else goto c02_0365;

c02_0365:;

	goto endsub;

c02_0366:;

c02_0362:;

c02_0361:;

c02_035d:;

	i8 v5082 = (i8)(intptr_t)(ws+3920);
	i1 v5083 = *(i1*)(intptr_t)v5082;
	i1 v5084 = (i1)+1;
	i1 v5085 = ((i1)v5083)>>v5084;
	i8 v5086 = (i8)(intptr_t)(ws+3920);
	*(i1*)(intptr_t)v5086 = v5085;

	goto c02_0359;

c02_035c:;

	i8 v5087 = (i8)(intptr_t)(ws+3832);
	i8 v5088 = *(i8*)(intptr_t)v5087;
	i1 v5089 = *(i1*)(intptr_t)v5088;
	i1 v5090 = v5089&(+1);
	i1 v5091 = (i1)+0;
	if (v5090==v5091) goto c02_036d; else goto c02_036e;

c02_036e:;

	i8 v5092 = (i8)(intptr_t)(ws+3824);
	i1 v5093 = *(i1*)(intptr_t)v5092;
	i8 v5094 = (i8)(intptr_t)(ws+3848);
	i8 v5095 = (i8)(intptr_t)(f177_MatchPredicate);
	i1 v5096;

	((void(*)(i1* /* matches */, i8 /* n */, i1 /* rule */))(intptr_t)v5095)(&v5096, v5094, v5093);
	i1 v5097 = (i1)+0;
	if (v5096==v5097) goto c02_036c; else goto c02_036d;

c02_036c:;

	goto endsub;

c02_036d:;

c02_0367:;

	i1 v5098 = (i1)+1;
	i8 v5099 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v5099 = v5098;

endsub:;
	*p5022 = *(i1*)(intptr_t)(ws+3896);
}
	void f365_RewindRulePointers(void);
	void f72_AllocateNewNode(i8* /* m */, i1 /* code */);

// ConvertNodeToFallback workspace at ws+3896 length ws+25
void f367_ConvertNodeToFallback(void) {

	i8 v5122 = (i8)(intptr_t)(ws+3816);
	i8 v5123 = *(i8*)(intptr_t)v5122;
	i8 v5124 = (i8)(intptr_t)(ws+3896);
	*(i8*)(intptr_t)v5124 = v5123;

	i1 v5125 = (i1)+24;
	i8 v5126 = (i8)(intptr_t)(f72_AllocateNewNode);
	i8 v5127;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v5126)(&v5127, v5125);
	i8 v5128 = (i8)(intptr_t)(ws+3816);
	*(i8*)(intptr_t)v5128 = v5127;

	i8 v5129 = (i8)(intptr_t)(ws+3896);
	i8 v5130 = *(i8*)(intptr_t)v5129;
	i8 v5131 = (i8)(intptr_t)(ws+3816);
	i8 v5132 = *(i8*)(intptr_t)v5131;
	i8 v5133 = v5132+(+24);
	*(i8*)(intptr_t)v5133 = v5130;

	i8 v5134 = (i8)(intptr_t)(ws+3896);
	i8 v5135 = *(i8*)(intptr_t)v5134;
	i8 v5136 = v5135+(+48);
	i8 v5137 = *(i8*)(intptr_t)v5136;
	i8 v5138 = (i8)(intptr_t)(ws+3816);
	i8 v5139 = *(i8*)(intptr_t)v5138;
	i8 v5140 = v5139+(+48);
	*(i8*)(intptr_t)v5140 = v5137;

	i8 v5141 = (i8)(intptr_t)(ws+3816);
	i8 v5142 = *(i8*)(intptr_t)v5141;
	i8 v5143 = v5142+(+48);
	i8 v5144 = *(i8*)(intptr_t)v5143;
	i8 v5145 = v5144+(+16);
	i8 v5146 = *(i8*)(intptr_t)v5145;
	i8 v5147 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v5147 = v5146;

	i8 v5148 = (i8)(intptr_t)(ws+3896);
	i8 v5149 = *(i8*)(intptr_t)v5148;
	i8 v5150 = v5149+(+56);
	i1 v5151 = *(i1*)(intptr_t)v5150;
	i8 v5152 = (i8)(intptr_t)(ws+3816);
	i8 v5153 = *(i8*)(intptr_t)v5152;
	i8 v5154 = v5153+(+56);
	*(i1*)(intptr_t)v5154 = v5151;

	i8 v5155 = (i8)(intptr_t)(ws+3904);
	i8 v5156 = *(i8*)(intptr_t)v5155;
	i8 v5157 = v5156+(+40);
	i8 v5158 = *(i8*)(intptr_t)v5157;
	i8 v5159 = (i8)(intptr_t)(ws+3912);
	*(i8*)(intptr_t)v5159 = v5158;

	i1 v5160 = (i1)+0;
	i8 v5161 = (i8)(intptr_t)(ws+3920);
	*(i1*)(intptr_t)v5161 = v5160;

c02_0380:;

	i8 v5162 = (i8)(intptr_t)(ws+3920);
	i1 v5163 = *(i1*)(intptr_t)v5162;
	i1 v5164 = (i1)+3;
	if (v5163==v5164) goto c02_0383; else goto c02_0382;

c02_0382:;

	i8 v5165 = (i8)(intptr_t)(ws+3912);
	i8 v5166 = *(i8*)(intptr_t)v5165;
	i8 v5167 = v5166+(+16);
	i8 v5168 = (i8)(intptr_t)(ws+3920);
	i1 v5169 = *(i1*)(intptr_t)v5168;
	i8 v5170 = v5169;
	i1 v5171 = (i1)+3;
	i8 v5172 = ((i8)v5170)<<v5171;
	i8 v5173 = v5167+v5172;
	i8 v5174 = *(i8*)(intptr_t)v5173;
	i8 v5175 = (i8)(intptr_t)(ws+3896);
	i8 v5176 = *(i8*)(intptr_t)v5175;
	if (v5174==v5176) goto c02_0387; else goto c02_0388;

c02_0387:;

	i8 v5177 = (i8)(intptr_t)(ws+3816);
	i8 v5178 = *(i8*)(intptr_t)v5177;
	i8 v5179 = (i8)(intptr_t)(ws+3912);
	i8 v5180 = *(i8*)(intptr_t)v5179;
	i8 v5181 = v5180+(+16);
	i8 v5182 = (i8)(intptr_t)(ws+3920);
	i1 v5183 = *(i1*)(intptr_t)v5182;
	i8 v5184 = v5183;
	i1 v5185 = (i1)+3;
	i8 v5186 = ((i8)v5184)<<v5185;
	i8 v5187 = v5181+v5186;
	*(i8*)(intptr_t)v5187 = v5178;

c02_0388:;

c02_0384:;

	i8 v5188 = (i8)(intptr_t)(ws+3920);
	i1 v5189 = *(i1*)(intptr_t)v5188;
	i1 v5190 = v5189+(+1);
	i8 v5191 = (i8)(intptr_t)(ws+3920);
	*(i1*)(intptr_t)v5191 = v5190;

	goto c02_0380;

c02_0383:;

endsub:;
}
	void f367_ConvertNodeToFallback(void);
	void f365_RewindRulePointers(void);
	void f362_PrintNodes(i8 /* rootnode */);
	void f61_StartError(void);
const i1 c02_s01e6[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f8_print_char(i1 /* c */);
const i1 c02_s01e7[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f62_EndError(void);
	void f366_TestRule(i1* /* result */);
	void f56_PushNode(i8 /* node */);

// CopyChildNodes workspace at ws+3896 length ws+16
void f368_CopyChildNodes(void) {

	i8 v5291 = (i8)(intptr_t)(ws+3832);
	i8 v5292 = *(i8*)(intptr_t)v5291;
	i8 v5293 = v5292+(+5);
	i1 v5294 = *(i1*)(intptr_t)v5293;
	i8 v5295 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v5295 = v5294;

	i8 v5296 = (i8)(intptr_t)(ws+3832);
	i8 v5297 = *(i8*)(intptr_t)v5296;
	i8 v5298 = v5297+(+6);
	i1 v5299 = *(i1*)(intptr_t)v5298;
	i8 v5300 = (i8)(intptr_t)(ws+3897);
	*(i1*)(intptr_t)v5300 = v5299;

	i1 v5301 = (i1)+0;
	i8 v5302 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5302 = v5301;

c02_03ac:;

	i8 v5303 = (i8)(intptr_t)(ws+3776);
	i1 v5304 = *(i1*)(intptr_t)v5303;
	i1 v5305 = (i1)+3;
	if (v5304==v5305) goto c02_03af; else goto c02_03ae;

c02_03ae:;

	i8 v5306 = (i8)(intptr_t)(ws+3848);
	i8 v5307 = (i8)(intptr_t)(ws+3776);
	i1 v5308 = *(i1*)(intptr_t)v5307;
	i8 v5309 = v5308;
	i1 v5310 = (i1)+3;
	i8 v5311 = ((i8)v5309)<<v5310;
	i8 v5312 = v5306+v5311;
	i8 v5313 = *(i8*)(intptr_t)v5312;
	i8 v5314 = (i8)(intptr_t)(ws+3904);
	*(i8*)(intptr_t)v5314 = v5313;

	i8 v5315 = (i8)(intptr_t)(ws+3896);
	i1 v5316 = *(i1*)(intptr_t)v5315;
	i1 v5317 = v5316&(+1);
	i1 v5318 = (i1)+0;
	if (v5317==v5318) goto c02_03b4; else goto c02_03b3;

c02_03b3:;

	i8 v5319 = (i8)(intptr_t)(ws+3904);
	i8 v5320 = *(i8*)(intptr_t)v5319;
	i8 v5321 = (i8)(intptr_t)(ws+3808);
	i8 v5322 = *(i8*)(intptr_t)v5321;
	i8 v5323 = v5322+(+16);
	i8 v5324 = (i8)(intptr_t)(ws+3776);
	i1 v5325 = *(i1*)(intptr_t)v5324;
	i8 v5326 = v5325;
	i1 v5327 = (i1)+3;
	i8 v5328 = ((i8)v5326)<<v5327;
	i8 v5329 = v5323+v5328;
	*(i8*)(intptr_t)v5329 = v5320;

	i8 v5330 = (i8)(intptr_t)(ws+3897);
	i1 v5331 = *(i1*)(intptr_t)v5330;
	i1 v5332 = v5331&(+1);
	i1 v5333 = (i1)+0;
	if (v5332==v5333) goto c02_03b9; else goto c02_03b8;

c02_03b8:;

	i8 v5334 = (i8)(intptr_t)(ws+3904);
	i8 v5335 = *(i8*)(intptr_t)v5334;
	i8 v5336 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5336)(v5335);

	i8 v5337 = (i8)(intptr_t)(ws+3880);
	i8 v5338 = *(i8*)(intptr_t)v5337;
	i1 v5339 = *(i1*)(intptr_t)v5338;
	i8 v5340 = (i8)(intptr_t)(ws+3904);
	i8 v5341 = *(i8*)(intptr_t)v5340;
	i8 v5342 = v5341+(+56);
	*(i1*)(intptr_t)v5342 = v5339;

	i8 v5343 = (i8)(intptr_t)(ws+3880);
	i8 v5344 = *(i8*)(intptr_t)v5343;
	i8 v5345 = v5344+(+1);
	i8 v5346 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v5346 = v5345;

	i8 v5347 = (i8)(intptr_t)(ws+3808);
	i8 v5348 = *(i8*)(intptr_t)v5347;
	i8 v5349 = (i8)(intptr_t)(ws+3904);
	i8 v5350 = *(i8*)(intptr_t)v5349;
	i8 v5351 = v5350+(+48);
	*(i8*)(intptr_t)v5351 = v5348;

c02_03b9:;

c02_03b5:;

c02_03b4:;

c02_03b0:;

	i8 v5352 = (i8)(intptr_t)(ws+3896);
	i1 v5353 = *(i1*)(intptr_t)v5352;
	i1 v5354 = (i1)+1;
	i1 v5355 = ((i1)v5353)>>v5354;
	i8 v5356 = (i8)(intptr_t)(ws+3896);
	*(i1*)(intptr_t)v5356 = v5355;

	i8 v5357 = (i8)(intptr_t)(ws+3897);
	i1 v5358 = *(i1*)(intptr_t)v5357;
	i1 v5359 = (i1)+1;
	i1 v5360 = ((i1)v5358)>>v5359;
	i8 v5361 = (i8)(intptr_t)(ws+3897);
	*(i1*)(intptr_t)v5361 = v5360;

	i8 v5362 = (i8)(intptr_t)(ws+3776);
	i1 v5363 = *(i1*)(intptr_t)v5362;
	i1 v5364 = v5363+(+1);
	i8 v5365 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5365 = v5364;

	goto c02_03ac;

c02_03af:;

	i8 v5366 = (i8)(intptr_t)(ws+3808);
	i8 v5367 = *(i8*)(intptr_t)v5366;
	i8 v5368 = (i8)(intptr_t)(ws+3816);
	i8 v5369 = *(i8*)(intptr_t)v5368;
	i8 v5370 = v5369+(+40);
	*(i8*)(intptr_t)v5370 = v5367;

endsub:;
}
	void f368_CopyChildNodes(void);

// InstructionMatcher workspace at ws+3840 length ws+49
void f364_InstructionMatcher(void) {



	i8 v5100 = (i8)(intptr_t)(f365_RewindRulePointers);

	((void(*)(void))(intptr_t)v5100)();

c02_036f:;

	i8 v5101 = (i8)(intptr_t)(ws+3832);
	i8 v5102 = *(i8*)(intptr_t)v5101;
	i8 v5103 = v5102+(+7);
	i8 v5104 = (i8)(intptr_t)(ws+3832);
	*(i8*)(intptr_t)v5104 = v5103;

	i8 v5105 = (i8)(intptr_t)(ws+3824);
	i1 v5106 = *(i1*)(intptr_t)v5105;
	i1 v5107 = v5106+(+1);
	i8 v5108 = (i8)(intptr_t)(ws+3824);
	*(i1*)(intptr_t)v5108 = v5107;

	i8 v5109 = (i8)(intptr_t)(ws+3832);
	i8 v5110 = *(i8*)(intptr_t)v5109;
	i8 v5111 = (i8)(intptr_t)((i1*)f3___main_s02a5+1330);
	if (v5110==v5111) goto c02_0374; else goto c02_0375;

c02_0374:;

	i8 v5112 = (i8)(intptr_t)(ws+3816);
	i8 v5113 = *(i8*)(intptr_t)v5112;
	i8 v5114 = v5113+(+72);
	i1 v5115 = *(i1*)(intptr_t)v5114;
	i1 v5116 = (i1)+24;
	if (v5115==v5116) goto c02_037c; else goto c02_037d;

c02_037d:;

	i8 v5117 = (i8)(intptr_t)(ws+3816);
	i8 v5118 = *(i8*)(intptr_t)v5117;
	i8 v5119 = v5118+(+48);
	i8 v5120 = *(i8*)(intptr_t)v5119;
	i8 v5121 = (i8)+0;
	if (v5120==v5121) goto c02_037c; else goto c02_037b;

c02_037b:;


	i8 v5192 = (i8)(intptr_t)(f367_ConvertNodeToFallback);

	((void(*)(void))(intptr_t)v5192)();

	i8 v5193 = (i8)(intptr_t)(f365_RewindRulePointers);

	((void(*)(void))(intptr_t)v5193)();

	goto c02_036f;

c02_037c:;

c02_0376:;

	i8 v5194 = (i8)(intptr_t)(ws+3768);
	i8 v5195 = *(i8*)(intptr_t)v5194;
	i8 v5196 = (i8)(intptr_t)(f362_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v5196)(v5195);

	i8 v5197 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v5197)();

	i8 v5198 = (i8)(intptr_t)c02_s01e6;
	i8 v5199 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5199)(v5198);

	i1 v5200 = (i1)+0;
	i8 v5201 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5201 = v5200;

c02_038b:;

	i8 v5202 = (i8)(intptr_t)(ws+3776);
	i1 v5203 = *(i1*)(intptr_t)v5202;
	i1 v5204 = (i1)+3;
	if (v5203==v5204) goto c02_038e; else goto c02_038d;

c02_038d:;

	i8 v5205 = (i8)(intptr_t)(ws+3840);
	i8 v5206 = (i8)(intptr_t)(ws+3776);
	i1 v5207 = *(i1*)(intptr_t)v5206;
	i8 v5208 = v5207;
	i8 v5209 = v5205+v5208;
	i1 v5210 = *(i1*)(intptr_t)v5209;
	i8 v5211 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v5211)(v5210);

	i1 v5212 = (i1)+32;
	i8 v5213 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v5213)(v5212);

	i8 v5214 = (i8)(intptr_t)(ws+3776);
	i1 v5215 = *(i1*)(intptr_t)v5214;
	i1 v5216 = v5215+(+1);
	i8 v5217 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5217 = v5216;

	goto c02_038b;

c02_038e:;

	i8 v5218 = (i8)(intptr_t)c02_s01e7;
	i8 v5219 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5219)(v5218);

	i8 v5220 = (i8)(intptr_t)(ws+3816);
	i8 v5221 = *(i8*)(intptr_t)v5220;
	i8 v5222 = v5221+(+56);
	i1 v5223 = *(i1*)(intptr_t)v5222;
	i4 v5224 = v5223;
	i8 v5225 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5225)(v5224);

	i8 v5226 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v5226)();

c02_0375:;

c02_0371:;

	i8 v5227 = (i8)(intptr_t)(f366_TestRule);
	i1 v5228;

	((void(*)(i1* /* result */))(intptr_t)v5227)(&v5228);
	i1 v5229 = (i1)+0;
	if (v5228==v5229) goto c02_0393; else goto c02_0392;

c02_0392:;

	goto c02_0370;

c02_0393:;

c02_038f:;

	i8 v5230 = (i8)(intptr_t)(ws+3832);
	i8 v5231 = *(i8*)(intptr_t)v5230;
	i8 v5232 = v5231+(+4);
	i1 v5233 = *(i1*)(intptr_t)v5232;
	i8 v5234 = (i8)(intptr_t)(ws+3888);
	*(i1*)(intptr_t)v5234 = v5233;

c02_0396:;

	i8 v5235 = (i8)(intptr_t)(ws+3888);
	i1 v5236 = *(i1*)(intptr_t)v5235;
	i1 v5237 = (i1)+0;
	if (v5236==v5237) goto c02_0399; else goto c02_0398;

c02_0398:;

	i8 v5238 = (i8)(intptr_t)(ws+3888);
	i1 v5239 = *(i1*)(intptr_t)v5238;
	i1 v5240 = v5239&(+1);
	i1 v5241 = (i1)+0;
	if (v5240==v5241) goto c02_039e; else goto c02_039d;

c02_039d:;

	i8 v5242 = (i8)(intptr_t)(ws+3872);
	i8 v5243 = *(i8*)(intptr_t)v5242;
	i8 v5244 = v5243+(+1);
	i8 v5245 = (i8)(intptr_t)(ws+3872);
	*(i8*)(intptr_t)v5245 = v5244;

c02_039e:;

c02_039a:;

	i8 v5246 = (i8)(intptr_t)(ws+3888);
	i1 v5247 = *(i1*)(intptr_t)v5246;
	i1 v5248 = (i1)+1;
	i1 v5249 = ((i1)v5247)>>v5248;
	i8 v5250 = (i8)(intptr_t)(ws+3888);
	*(i1*)(intptr_t)v5250 = v5249;

	goto c02_0396;

c02_0399:;

	i8 v5251 = (i8)(intptr_t)(ws+3832);
	i8 v5252 = *(i8*)(intptr_t)v5251;
	i8 v5253 = v5252+(+6);
	i1 v5254 = *(i1*)(intptr_t)v5253;
	i8 v5255 = (i8)(intptr_t)(ws+3888);
	*(i1*)(intptr_t)v5255 = v5254;

c02_03a1:;

	i8 v5256 = (i8)(intptr_t)(ws+3888);
	i1 v5257 = *(i1*)(intptr_t)v5256;
	i1 v5258 = (i1)+0;
	if (v5257==v5258) goto c02_03a4; else goto c02_03a3;

c02_03a3:;

	i8 v5259 = (i8)(intptr_t)(ws+3888);
	i1 v5260 = *(i1*)(intptr_t)v5259;
	i1 v5261 = v5260&(+1);
	i1 v5262 = (i1)+0;
	if (v5261==v5262) goto c02_03a9; else goto c02_03a8;

c02_03a8:;

	i8 v5263 = (i8)(intptr_t)(ws+3880);
	i8 v5264 = *(i8*)(intptr_t)v5263;
	i8 v5265 = v5264+(+1);
	i8 v5266 = (i8)(intptr_t)(ws+3880);
	*(i8*)(intptr_t)v5266 = v5265;

c02_03a9:;

c02_03a5:;

	i8 v5267 = (i8)(intptr_t)(ws+3888);
	i1 v5268 = *(i1*)(intptr_t)v5267;
	i1 v5269 = (i1)+1;
	i1 v5270 = ((i1)v5268)>>v5269;
	i8 v5271 = (i8)(intptr_t)(ws+3888);
	*(i1*)(intptr_t)v5271 = v5270;

	goto c02_03a1;

c02_03a4:;

	goto c02_036f;

c02_0370:;

	i8 v5272 = (i8)(intptr_t)(ws+3824);
	i1 v5273 = *(i1*)(intptr_t)v5272;
	i8 v5274 = (i8)(intptr_t)(ws+3808);
	i8 v5275 = *(i8*)(intptr_t)v5274;
	i8 v5276 = v5275+(+62);
	*(i1*)(intptr_t)v5276 = v5273;

	i8 v5277 = (i8)(intptr_t)(ws+3832);
	i8 v5278 = *(i8*)(intptr_t)v5277;
	i8 v5279 = v5278+(+2);
	i1 v5280 = *(i1*)(intptr_t)v5279;
	i8 v5281 = (i8)(intptr_t)(ws+3808);
	i8 v5282 = *(i8*)(intptr_t)v5281;
	i8 v5283 = v5282+(+40);
	*(i1*)(intptr_t)v5283 = v5280;

	i8 v5284 = (i8)(intptr_t)(ws+3832);
	i8 v5285 = *(i8*)(intptr_t)v5284;
	i8 v5286 = v5285+(+3);
	i1 v5287 = *(i1*)(intptr_t)v5286;
	i8 v5288 = (i8)(intptr_t)(ws+3808);
	i8 v5289 = *(i8*)(intptr_t)v5288;
	i8 v5290 = v5289+(+43);
	*(i1*)(intptr_t)v5290 = v5287;


	i8 v5371 = (i8)(intptr_t)(f368_CopyChildNodes);

	((void(*)(void))(intptr_t)v5371)();

endsub:;
}
	void f364_InstructionMatcher(void);
	void f356_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f359_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f357_CalculateBlockedRegisters(i1* /* blocked */, i8 /* last */, i8 /* insn */);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f141_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f358_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f142_FindCompatibleRegisters(i1* /* compatible */, i1 /* inreg */);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f141_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f141_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f358_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f360_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f141_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f358_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f141_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f359_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f362_PrintNodes(i8 /* rootnode */);
const i1 c02_s01e8[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01e9[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01ea[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01eb[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01ec[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01ed[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s01ee[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0 };
	void f63_SimpleError(i8 /* s */);

// deadlock workspace at ws+3864 length ws+0
void f370_deadlock(void) {

	i8 v5732 = (i8)(intptr_t)(ws+3768);
	i8 v5733 = *(i8*)(intptr_t)v5732;
	i8 v5734 = (i8)(intptr_t)(f362_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v5734)(v5733);

	i8 v5735 = (i8)(intptr_t)c02_s01e8;
	i8 v5736 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5736)(v5735);

	i8 v5737 = (i8)(intptr_t)(ws+3808);
	i8 v5738 = *(i8*)(intptr_t)v5737;
	i8 v5739 = v5738+(+16);
	i8 v5740 = *(i8*)(intptr_t)v5739;
	i4 v5741 = v5740;
	i8 v5742 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5742)(v5741);

	i8 v5743 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5743)();

	i8 v5744 = (i8)(intptr_t)c02_s01e9;
	i8 v5745 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5745)(v5744);

	i8 v5746 = (i8)(intptr_t)(ws+3848);
	i8 v5747 = *(i8*)(intptr_t)v5746;
	i8 v5748 = v5747+(+16);
	i8 v5749 = *(i8*)(intptr_t)v5748;
	i4 v5750 = v5749;
	i8 v5751 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5751)(v5750);

	i8 v5752 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5752)();

	i8 v5753 = (i8)(intptr_t)c02_s01ea;
	i8 v5754 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5754)(v5753);

	i8 v5755 = (i8)(intptr_t)(ws+3808);
	i8 v5756 = *(i8*)(intptr_t)v5755;
	i8 v5757 = v5756+(+40);
	i1 v5758 = *(i1*)(intptr_t)v5757;
	i4 v5759 = v5758;
	i8 v5760 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5760)(v5759);

	i8 v5761 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5761)();

	i8 v5762 = (i8)(intptr_t)c02_s01eb;
	i8 v5763 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5763)(v5762);

	i8 v5764 = (i8)(intptr_t)(ws+3808);
	i8 v5765 = *(i8*)(intptr_t)v5764;
	i8 v5766 = v5765+(+43);
	i1 v5767 = *(i1*)(intptr_t)v5766;
	i4 v5768 = v5767;
	i8 v5769 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5769)(v5768);

	i8 v5770 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5770)();

	i8 v5771 = (i8)(intptr_t)c02_s01ec;
	i8 v5772 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5772)(v5771);

	i8 v5773 = (i8)(intptr_t)(ws+3816);
	i8 v5774 = *(i8*)(intptr_t)v5773;
	i8 v5775 = v5774+(+56);
	i1 v5776 = *(i1*)(intptr_t)v5775;
	i4 v5777 = v5776;
	i8 v5778 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5778)(v5777);

	i8 v5779 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5779)();

	i8 v5780 = (i8)(intptr_t)c02_s01ed;
	i8 v5781 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5781)(v5780);

	i8 v5782 = (i8)(intptr_t)(ws+3848);
	i8 v5783 = *(i8*)(intptr_t)v5782;
	i8 v5784 = v5783+(+42);
	i1 v5785 = *(i1*)(intptr_t)v5784;
	i4 v5786 = v5785;
	i8 v5787 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5787)(v5786);

	i8 v5788 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5788)();

	i8 v5789 = (i8)(intptr_t)c02_s01ee;
	i8 v5790 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v5790)(v5789);

endsub:;
}
	void f370_deadlock(void);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f141_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f359_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f370_deadlock(void);
	void f143_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f141_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f360_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);

// AllocateRegister workspace at ws+3840 length ws+20
void f369_AllocateRegister(void) {

	i8 v5378 = (i8)(intptr_t)(ws+3808);
	i8 v5379 = *(i8*)(intptr_t)v5378;
	i8 v5380 = v5379+(+40);
	i1 v5381 = *(i1*)(intptr_t)v5380;
	i8 v5382 = (i8)(intptr_t)(f356_IsStackedRegister);
	i1 v5383;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v5382)(&v5383, v5381);
	i1 v5384 = (i1)+0;
	if (v5383==v5384) goto c02_03c3; else goto c02_03c2;

c02_03c2:;

	i8 v5385 = (i8)(intptr_t)(ws+3816);
	i8 v5386 = *(i8*)(intptr_t)v5385;
	i8 v5387 = v5386+(+56);
	i1 v5388 = *(i1*)(intptr_t)v5387;
	i8 v5389 = (i8)(intptr_t)(ws+3808);
	i8 v5390 = *(i8*)(intptr_t)v5389;
	i8 v5391 = v5390+(+40);
	i1 v5392 = *(i1*)(intptr_t)v5391;
	i1 v5393 = v5388&v5392;
	i8 v5394 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5394 = v5393;

	i8 v5395 = (i8)(intptr_t)(ws+3840);
	i1 v5396 = *(i1*)(intptr_t)v5395;
	i1 v5397 = (i1)+0;
	if (v5396==v5397) goto c02_03c8; else goto c02_03c7;

c02_03c7:;

	i8 v5398 = (i8)(intptr_t)(ws+3840);
	i1 v5399 = *(i1*)(intptr_t)v5398;
	i8 v5400 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5401;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5400)(&v5401, v5399);
	i8 v5402 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5402 = v5401;

	i8 v5403 = (i8)(intptr_t)(ws+3840);
	i1 v5404 = *(i1*)(intptr_t)v5403;
	i8 v5405 = (i8)(intptr_t)(ws+3816);
	i8 v5406 = *(i8*)(intptr_t)v5405;
	i8 v5407 = v5406+(+57);
	*(i1*)(intptr_t)v5407 = v5404;

	i8 v5408 = (i8)(intptr_t)(ws+3840);
	i1 v5409 = *(i1*)(intptr_t)v5408;
	i8 v5410 = (i8)(intptr_t)(ws+3808);
	i8 v5411 = *(i8*)(intptr_t)v5410;
	i8 v5412 = v5411+(+41);
	*(i1*)(intptr_t)v5412 = v5409;

	goto c02_03c4;

c02_03c8:;

	i8 v5413 = (i8)(intptr_t)(ws+3808);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = v5414+(+40);
	i1 v5416 = *(i1*)(intptr_t)v5415;
	i8 v5417 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5418;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5417)(&v5418, v5416);
	i8 v5419 = (i8)(intptr_t)(ws+3808);
	i8 v5420 = *(i8*)(intptr_t)v5419;
	i8 v5421 = v5420+(+41);
	*(i1*)(intptr_t)v5421 = v5418;

	i8 v5422 = (i8)(intptr_t)(ws+3816);
	i8 v5423 = *(i8*)(intptr_t)v5422;
	i8 v5424 = v5423+(+56);
	i1 v5425 = *(i1*)(intptr_t)v5424;
	i8 v5426 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5427;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5426)(&v5427, v5425);
	i8 v5428 = (i8)(intptr_t)(ws+3816);
	i8 v5429 = *(i8*)(intptr_t)v5428;
	i8 v5430 = v5429+(+57);
	*(i1*)(intptr_t)v5430 = v5427;

	i8 v5431 = (i8)(intptr_t)(ws+3808);
	i8 v5432 = *(i8*)(intptr_t)v5431;
	i8 v5433 = (i8)(intptr_t)(ws+3808);
	i8 v5434 = *(i8*)(intptr_t)v5433;
	i8 v5435 = v5434+(+41);
	i1 v5436 = *(i1*)(intptr_t)v5435;
	i8 v5437 = (i8)(intptr_t)(ws+3816);
	i8 v5438 = *(i8*)(intptr_t)v5437;
	i8 v5439 = v5438+(+57);
	i1 v5440 = *(i1*)(intptr_t)v5439;
	i8 v5441 = (i8)(intptr_t)(f359_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5441)(v5440, v5436, v5432);

c02_03c4:;

	goto c02_03bf;

c02_03c3:;

	i8 v5442 = (i8)(intptr_t)(ws+3816);
	i8 v5443 = *(i8*)(intptr_t)v5442;
	i8 v5444 = v5443+(+48);
	i8 v5445 = *(i8*)(intptr_t)v5444;
	i8 v5446 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v5446 = v5445;

	i8 v5447 = (i8)(intptr_t)(ws+3848);
	i8 v5448 = *(i8*)(intptr_t)v5447;
	i8 v5449 = (i8)(intptr_t)(ws+3808);
	i8 v5450 = *(i8*)(intptr_t)v5449;
	i8 v5451 = (i8)(intptr_t)(f357_CalculateBlockedRegisters);
	i1 v5452;

	((void(*)(i1* /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v5451)(&v5452, v5450, v5448);
	i8 v5453 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v5453 = v5452;

	i8 v5454 = (i8)(intptr_t)(ws+3816);
	i8 v5455 = *(i8*)(intptr_t)v5454;
	i8 v5456 = v5455+(+56);
	i1 v5457 = *(i1*)(intptr_t)v5456;
	i8 v5458 = (i8)(intptr_t)(ws+3808);
	i8 v5459 = *(i8*)(intptr_t)v5458;
	i8 v5460 = v5459+(+40);
	i1 v5461 = *(i1*)(intptr_t)v5460;
	i1 v5462 = v5457&v5461;
	i8 v5463 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5463 = v5462;

	i8 v5464 = (i8)(intptr_t)(ws+3840);
	i1 v5465 = *(i1*)(intptr_t)v5464;
	i8 v5466 = (i8)(intptr_t)(ws+3856);
	i1 v5467 = *(i1*)(intptr_t)v5466;
	i8 v5468 = (i8)(intptr_t)(ws+3808);
	i8 v5469 = *(i8*)(intptr_t)v5468;
	i8 v5470 = v5469+(+43);
	i1 v5471 = *(i1*)(intptr_t)v5470;
	i1 v5472 = v5467|v5471;
	i8 v5473 = (i8)(intptr_t)(ws+3848);
	i8 v5474 = *(i8*)(intptr_t)v5473;
	i8 v5475 = v5474+(+42);
	i1 v5476 = *(i1*)(intptr_t)v5475;
	i1 v5477 = v5472|v5476;
	i1 v5478 = ~v5477;
	i1 v5479 = v5465&v5478;
	i8 v5480 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v5480 = v5479;

	i8 v5481 = (i8)(intptr_t)(ws+3857);
	i1 v5482 = *(i1*)(intptr_t)v5481;
	i1 v5483 = (i1)+0;
	if (v5482==v5483) goto c02_03cd; else goto c02_03cc;

c02_03cc:;

	i8 v5484 = (i8)(intptr_t)(ws+3857);
	i1 v5485 = *(i1*)(intptr_t)v5484;
	i8 v5486 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5487;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5486)(&v5487, v5485);
	i8 v5488 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5488 = v5487;

	i8 v5489 = (i8)(intptr_t)(ws+3840);
	i1 v5490 = *(i1*)(intptr_t)v5489;
	i8 v5491 = (i8)(intptr_t)(ws+3816);
	i8 v5492 = *(i8*)(intptr_t)v5491;
	i8 v5493 = v5492+(+57);
	*(i1*)(intptr_t)v5493 = v5490;

	i8 v5494 = (i8)(intptr_t)(ws+3840);
	i1 v5495 = *(i1*)(intptr_t)v5494;
	i8 v5496 = (i8)(intptr_t)(ws+3808);
	i8 v5497 = *(i8*)(intptr_t)v5496;
	i8 v5498 = v5497+(+41);
	*(i1*)(intptr_t)v5498 = v5495;

	i8 v5499 = (i8)(intptr_t)(ws+3840);
	i1 v5500 = *(i1*)(intptr_t)v5499;
	i8 v5501 = (i8)(intptr_t)(f141_FindConflictingRegisters);
	i1 v5502;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5501)(&v5502, v5500);
	i8 v5503 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v5503 = v5502;

	i8 v5504 = (i8)(intptr_t)(ws+3848);
	i8 v5505 = *(i8*)(intptr_t)v5504;
	i8 v5506 = v5505+(+42);
	i1 v5507 = *(i1*)(intptr_t)v5506;
	i8 v5508 = (i8)(intptr_t)(ws+3856);
	i1 v5509 = *(i1*)(intptr_t)v5508;
	i1 v5510 = v5507|v5509;
	i8 v5511 = (i8)(intptr_t)(ws+3848);
	i8 v5512 = *(i8*)(intptr_t)v5511;
	i8 v5513 = v5512+(+42);
	*(i1*)(intptr_t)v5513 = v5510;

	i8 v5514 = (i8)(intptr_t)(ws+3848);
	i8 v5515 = *(i8*)(intptr_t)v5514;
	i8 v5516 = (i8)(intptr_t)(ws+3808);
	i8 v5517 = *(i8*)(intptr_t)v5516;
	i8 v5518 = (i8)(intptr_t)(ws+3856);
	i1 v5519 = *(i1*)(intptr_t)v5518;
	i8 v5520 = (i8)(intptr_t)(f358_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v5520)(v5519, v5517, v5515);

	i8 v5521 = (i8)(intptr_t)(ws+3808);
	i8 v5522 = *(i8*)(intptr_t)v5521;
	i8 v5523 = v5522+(+43);
	i1 v5524 = *(i1*)(intptr_t)v5523;
	i8 v5525 = (i8)(intptr_t)(ws+3856);
	i1 v5526 = *(i1*)(intptr_t)v5525;
	i1 v5527 = v5524|v5526;
	i8 v5528 = (i8)(intptr_t)(ws+3808);
	i8 v5529 = *(i8*)(intptr_t)v5528;
	i8 v5530 = v5529+(+43);
	*(i1*)(intptr_t)v5530 = v5527;

	goto c02_03c9;

c02_03cd:;

	i8 v5531 = (i8)(intptr_t)(ws+3816);
	i8 v5532 = *(i8*)(intptr_t)v5531;
	i8 v5533 = v5532+(+56);
	i1 v5534 = *(i1*)(intptr_t)v5533;
	i8 v5535 = (i8)(intptr_t)(f142_FindCompatibleRegisters);
	i1 v5536;

	((void(*)(i1* /* compatible */, i1 /* inreg */))(intptr_t)v5535)(&v5536, v5534);
	i8 v5537 = (i8)(intptr_t)(ws+3858);
	*(i1*)(intptr_t)v5537 = v5536;

	i8 v5538 = (i8)(intptr_t)(ws+3808);
	i8 v5539 = *(i8*)(intptr_t)v5538;
	i8 v5540 = v5539+(+40);
	i1 v5541 = *(i1*)(intptr_t)v5540;
	i8 v5542 = (i8)(intptr_t)(ws+3858);
	i1 v5543 = *(i1*)(intptr_t)v5542;
	i1 v5544 = v5541&v5543;
	i8 v5545 = (i8)(intptr_t)(ws+3856);
	i1 v5546 = *(i1*)(intptr_t)v5545;
	i8 v5547 = (i8)(intptr_t)(ws+3808);
	i8 v5548 = *(i8*)(intptr_t)v5547;
	i8 v5549 = v5548+(+43);
	i1 v5550 = *(i1*)(intptr_t)v5549;
	i1 v5551 = v5546|v5550;
	i1 v5552 = ~v5551;
	i1 v5553 = v5544&v5552;
	i8 v5554 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v5554 = v5553;

	i8 v5555 = (i8)(intptr_t)(ws+3816);
	i8 v5556 = *(i8*)(intptr_t)v5555;
	i8 v5557 = v5556+(+56);
	i1 v5558 = *(i1*)(intptr_t)v5557;
	i8 v5559 = (i8)(intptr_t)(ws+3848);
	i8 v5560 = *(i8*)(intptr_t)v5559;
	i8 v5561 = v5560+(+42);
	i1 v5562 = *(i1*)(intptr_t)v5561;
	i1 v5563 = ~v5562;
	i1 v5564 = v5558&v5563;
	i8 v5565 = (i8)(intptr_t)(ws+3859);
	*(i1*)(intptr_t)v5565 = v5564;

	i8 v5566 = (i8)(intptr_t)(ws+3857);
	i1 v5567 = *(i1*)(intptr_t)v5566;
	i1 v5568 = (i1)+0;
	if (v5567==v5568) goto c02_03d4; else goto c02_03d5;

c02_03d5:;

	i8 v5569 = (i8)(intptr_t)(ws+3859);
	i1 v5570 = *(i1*)(intptr_t)v5569;
	i1 v5571 = (i1)+0;
	if (v5570==v5571) goto c02_03d4; else goto c02_03d3;

c02_03d3:;

	i8 v5572 = (i8)(intptr_t)(ws+3857);
	i1 v5573 = *(i1*)(intptr_t)v5572;
	i8 v5574 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5575;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5574)(&v5575, v5573);
	i8 v5576 = (i8)(intptr_t)(ws+3808);
	i8 v5577 = *(i8*)(intptr_t)v5576;
	i8 v5578 = v5577+(+41);
	*(i1*)(intptr_t)v5578 = v5575;

	i8 v5579 = (i8)(intptr_t)(ws+3859);
	i1 v5580 = *(i1*)(intptr_t)v5579;
	i8 v5581 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5582;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5581)(&v5582, v5580);
	i8 v5583 = (i8)(intptr_t)(ws+3816);
	i8 v5584 = *(i8*)(intptr_t)v5583;
	i8 v5585 = v5584+(+57);
	*(i1*)(intptr_t)v5585 = v5582;

	i8 v5586 = (i8)(intptr_t)(ws+3848);
	i8 v5587 = *(i8*)(intptr_t)v5586;
	i8 v5588 = v5587+(+42);
	i1 v5589 = *(i1*)(intptr_t)v5588;
	i8 v5590 = (i8)(intptr_t)(ws+3816);
	i8 v5591 = *(i8*)(intptr_t)v5590;
	i8 v5592 = v5591+(+57);
	i1 v5593 = *(i1*)(intptr_t)v5592;
	i8 v5594 = (i8)(intptr_t)(f141_FindConflictingRegisters);
	i1 v5595;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5594)(&v5595, v5593);
	i1 v5596 = v5589|v5595;
	i8 v5597 = (i8)(intptr_t)(ws+3848);
	i8 v5598 = *(i8*)(intptr_t)v5597;
	i8 v5599 = v5598+(+42);
	*(i1*)(intptr_t)v5599 = v5596;

	i8 v5600 = (i8)(intptr_t)(ws+3808);
	i8 v5601 = *(i8*)(intptr_t)v5600;
	i8 v5602 = v5601+(+41);
	i1 v5603 = *(i1*)(intptr_t)v5602;
	i8 v5604 = (i8)(intptr_t)(f141_FindConflictingRegisters);
	i1 v5605;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5604)(&v5605, v5603);
	i8 v5606 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v5606 = v5605;

	i8 v5607 = (i8)(intptr_t)(ws+3848);
	i8 v5608 = *(i8*)(intptr_t)v5607;
	i8 v5609 = (i8)(intptr_t)(ws+3808);
	i8 v5610 = *(i8*)(intptr_t)v5609;
	i8 v5611 = (i8)(intptr_t)(ws+3856);
	i1 v5612 = *(i1*)(intptr_t)v5611;
	i8 v5613 = (i8)(intptr_t)(f358_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v5613)(v5612, v5610, v5608);

	i8 v5614 = (i8)(intptr_t)(ws+3808);
	i8 v5615 = *(i8*)(intptr_t)v5614;
	i8 v5616 = v5615+(+43);
	i1 v5617 = *(i1*)(intptr_t)v5616;
	i8 v5618 = (i8)(intptr_t)(ws+3856);
	i1 v5619 = *(i1*)(intptr_t)v5618;
	i1 v5620 = v5617|v5619;
	i8 v5621 = (i8)(intptr_t)(ws+3808);
	i8 v5622 = *(i8*)(intptr_t)v5621;
	i8 v5623 = v5622+(+43);
	*(i1*)(intptr_t)v5623 = v5620;

	i8 v5624 = (i8)(intptr_t)(ws+3848);
	i8 v5625 = *(i8*)(intptr_t)v5624;
	i8 v5626 = (i8)(intptr_t)(ws+3808);
	i8 v5627 = *(i8*)(intptr_t)v5626;
	i8 v5628 = v5627+(+41);
	i1 v5629 = *(i1*)(intptr_t)v5628;
	i8 v5630 = (i8)(intptr_t)(ws+3816);
	i8 v5631 = *(i8*)(intptr_t)v5630;
	i8 v5632 = v5631+(+57);
	i1 v5633 = *(i1*)(intptr_t)v5632;
	i8 v5634 = (i8)(intptr_t)(f360_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5634)(v5633, v5629, v5625);

	goto c02_03ce;

c02_03d4:;

	i8 v5635 = (i8)(intptr_t)(ws+3816);
	i8 v5636 = *(i8*)(intptr_t)v5635;
	i8 v5637 = v5636+(+56);
	i1 v5638 = *(i1*)(intptr_t)v5637;
	i8 v5639 = (i8)(intptr_t)(ws+3856);
	i1 v5640 = *(i1*)(intptr_t)v5639;
	i8 v5641 = (i8)(intptr_t)(ws+3848);
	i8 v5642 = *(i8*)(intptr_t)v5641;
	i8 v5643 = v5642+(+42);
	i1 v5644 = *(i1*)(intptr_t)v5643;
	i1 v5645 = v5640|v5644;
	i1 v5646 = ~v5645;
	i1 v5647 = v5638&v5646;
	i8 v5648 = (i8)(intptr_t)(ws+3857);
	*(i1*)(intptr_t)v5648 = v5647;

	i8 v5649 = (i8)(intptr_t)(ws+3808);
	i8 v5650 = *(i8*)(intptr_t)v5649;
	i8 v5651 = v5650+(+40);
	i1 v5652 = *(i1*)(intptr_t)v5651;
	i8 v5653 = (i8)(intptr_t)(ws+3858);
	i1 v5654 = *(i1*)(intptr_t)v5653;
	i1 v5655 = v5652&v5654;
	i8 v5656 = (i8)(intptr_t)(ws+3808);
	i8 v5657 = *(i8*)(intptr_t)v5656;
	i8 v5658 = v5657+(+43);
	i1 v5659 = *(i1*)(intptr_t)v5658;
	i1 v5660 = ~v5659;
	i1 v5661 = v5655&v5660;
	i8 v5662 = (i8)(intptr_t)(ws+3859);
	*(i1*)(intptr_t)v5662 = v5661;

	i8 v5663 = (i8)(intptr_t)(ws+3857);
	i1 v5664 = *(i1*)(intptr_t)v5663;
	i1 v5665 = (i1)+0;
	if (v5664==v5665) goto c02_03dc; else goto c02_03dd;

c02_03dd:;

	i8 v5666 = (i8)(intptr_t)(ws+3859);
	i1 v5667 = *(i1*)(intptr_t)v5666;
	i1 v5668 = (i1)+0;
	if (v5667==v5668) goto c02_03dc; else goto c02_03db;

c02_03db:;

	i8 v5669 = (i8)(intptr_t)(ws+3859);
	i1 v5670 = *(i1*)(intptr_t)v5669;
	i8 v5671 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5672;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5671)(&v5672, v5670);
	i8 v5673 = (i8)(intptr_t)(ws+3808);
	i8 v5674 = *(i8*)(intptr_t)v5673;
	i8 v5675 = v5674+(+41);
	*(i1*)(intptr_t)v5675 = v5672;

	i8 v5676 = (i8)(intptr_t)(ws+3857);
	i1 v5677 = *(i1*)(intptr_t)v5676;
	i8 v5678 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5679;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5678)(&v5679, v5677);
	i8 v5680 = (i8)(intptr_t)(ws+3816);
	i8 v5681 = *(i8*)(intptr_t)v5680;
	i8 v5682 = v5681+(+57);
	*(i1*)(intptr_t)v5682 = v5679;

	i8 v5683 = (i8)(intptr_t)(ws+3816);
	i8 v5684 = *(i8*)(intptr_t)v5683;
	i8 v5685 = v5684+(+57);
	i1 v5686 = *(i1*)(intptr_t)v5685;
	i8 v5687 = (i8)(intptr_t)(f141_FindConflictingRegisters);
	i1 v5688;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5687)(&v5688, v5686);
	i8 v5689 = (i8)(intptr_t)(ws+3856);
	*(i1*)(intptr_t)v5689 = v5688;

	i8 v5690 = (i8)(intptr_t)(ws+3848);
	i8 v5691 = *(i8*)(intptr_t)v5690;
	i8 v5692 = v5691+(+42);
	i1 v5693 = *(i1*)(intptr_t)v5692;
	i8 v5694 = (i8)(intptr_t)(ws+3856);
	i1 v5695 = *(i1*)(intptr_t)v5694;
	i1 v5696 = v5693|v5695;
	i8 v5697 = (i8)(intptr_t)(ws+3848);
	i8 v5698 = *(i8*)(intptr_t)v5697;
	i8 v5699 = v5698+(+42);
	*(i1*)(intptr_t)v5699 = v5696;

	i8 v5700 = (i8)(intptr_t)(ws+3848);
	i8 v5701 = *(i8*)(intptr_t)v5700;
	i8 v5702 = (i8)(intptr_t)(ws+3808);
	i8 v5703 = *(i8*)(intptr_t)v5702;
	i8 v5704 = (i8)(intptr_t)(ws+3856);
	i1 v5705 = *(i1*)(intptr_t)v5704;
	i8 v5706 = (i8)(intptr_t)(f358_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v5706)(v5705, v5703, v5701);

	i8 v5707 = (i8)(intptr_t)(ws+3808);
	i8 v5708 = *(i8*)(intptr_t)v5707;
	i8 v5709 = v5708+(+43);
	i1 v5710 = *(i1*)(intptr_t)v5709;
	i8 v5711 = (i8)(intptr_t)(ws+3808);
	i8 v5712 = *(i8*)(intptr_t)v5711;
	i8 v5713 = v5712+(+41);
	i1 v5714 = *(i1*)(intptr_t)v5713;
	i8 v5715 = (i8)(intptr_t)(f141_FindConflictingRegisters);
	i1 v5716;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5715)(&v5716, v5714);
	i1 v5717 = v5710|v5716;
	i8 v5718 = (i8)(intptr_t)(ws+3808);
	i8 v5719 = *(i8*)(intptr_t)v5718;
	i8 v5720 = v5719+(+43);
	*(i1*)(intptr_t)v5720 = v5717;

	i8 v5721 = (i8)(intptr_t)(ws+3808);
	i8 v5722 = *(i8*)(intptr_t)v5721;
	i8 v5723 = (i8)(intptr_t)(ws+3808);
	i8 v5724 = *(i8*)(intptr_t)v5723;
	i8 v5725 = v5724+(+41);
	i1 v5726 = *(i1*)(intptr_t)v5725;
	i8 v5727 = (i8)(intptr_t)(ws+3816);
	i8 v5728 = *(i8*)(intptr_t)v5727;
	i8 v5729 = v5728+(+57);
	i1 v5730 = *(i1*)(intptr_t)v5729;
	i8 v5731 = (i8)(intptr_t)(f359_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5731)(v5730, v5726, v5722);

	goto c02_03d6;

c02_03dc:;


	i8 v5791 = (i8)(intptr_t)(ws+3808);
	i8 v5792 = *(i8*)(intptr_t)v5791;
	i8 v5793 = v5792+(+40);
	i1 v5794 = *(i1*)(intptr_t)v5793;
	i8 v5795 = (i8)(intptr_t)(ws+3858);
	i1 v5796 = *(i1*)(intptr_t)v5795;
	i1 v5797 = v5794&v5796;
	i8 v5798 = (i8)(intptr_t)(ws+3808);
	i8 v5799 = *(i8*)(intptr_t)v5798;
	i8 v5800 = v5799+(+43);
	i1 v5801 = *(i1*)(intptr_t)v5800;
	i1 v5802 = ~v5801;
	i1 v5803 = v5797&v5802;
	i8 v5804 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5804 = v5803;

	i8 v5805 = (i8)(intptr_t)(ws+3840);
	i1 v5806 = *(i1*)(intptr_t)v5805;
	i1 v5807 = (i1)+0;
	if (v5806==v5807) goto c02_03e1; else goto c02_03e2;

c02_03e1:;

	i8 v5808 = (i8)(intptr_t)(f370_deadlock);

	((void(*)(void))(intptr_t)v5808)();

c02_03e2:;

c02_03de:;

	i8 v5809 = (i8)(intptr_t)(ws+3840);
	i1 v5810 = *(i1*)(intptr_t)v5809;
	i8 v5811 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5812;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5811)(&v5812, v5810);
	i8 v5813 = (i8)(intptr_t)(ws+3808);
	i8 v5814 = *(i8*)(intptr_t)v5813;
	i8 v5815 = v5814+(+41);
	*(i1*)(intptr_t)v5815 = v5812;

	i8 v5816 = (i8)(intptr_t)(ws+3808);
	i8 v5817 = *(i8*)(intptr_t)v5816;
	i8 v5818 = v5817+(+43);
	i1 v5819 = *(i1*)(intptr_t)v5818;
	i8 v5820 = (i8)(intptr_t)(ws+3808);
	i8 v5821 = *(i8*)(intptr_t)v5820;
	i8 v5822 = v5821+(+41);
	i1 v5823 = *(i1*)(intptr_t)v5822;
	i8 v5824 = (i8)(intptr_t)(f141_FindConflictingRegisters);
	i1 v5825;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5824)(&v5825, v5823);
	i1 v5826 = v5819|v5825;
	i8 v5827 = (i8)(intptr_t)(ws+3808);
	i8 v5828 = *(i8*)(intptr_t)v5827;
	i8 v5829 = v5828+(+43);
	*(i1*)(intptr_t)v5829 = v5826;

	i8 v5830 = (i8)(intptr_t)(ws+3808);
	i8 v5831 = *(i8*)(intptr_t)v5830;
	i8 v5832 = (i8)(intptr_t)(ws+3808);
	i8 v5833 = *(i8*)(intptr_t)v5832;
	i8 v5834 = v5833+(+41);
	i1 v5835 = *(i1*)(intptr_t)v5834;
	i1 v5836 = (i1)+0;
	i8 v5837 = (i8)(intptr_t)(f359_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5837)(v5836, v5835, v5831);

	i8 v5838 = (i8)(intptr_t)(ws+3816);
	i8 v5839 = *(i8*)(intptr_t)v5838;
	i8 v5840 = v5839+(+56);
	i1 v5841 = *(i1*)(intptr_t)v5840;
	i8 v5842 = (i8)(intptr_t)(ws+3848);
	i8 v5843 = *(i8*)(intptr_t)v5842;
	i8 v5844 = v5843+(+42);
	i1 v5845 = *(i1*)(intptr_t)v5844;
	i1 v5846 = ~v5845;
	i1 v5847 = v5841&v5846;
	i8 v5848 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5848 = v5847;

	i8 v5849 = (i8)(intptr_t)(ws+3840);
	i1 v5850 = *(i1*)(intptr_t)v5849;
	i1 v5851 = (i1)+0;
	if (v5850==v5851) goto c02_03e6; else goto c02_03e7;

c02_03e6:;

	i8 v5852 = (i8)(intptr_t)(f370_deadlock);

	((void(*)(void))(intptr_t)v5852)();

c02_03e7:;

c02_03e3:;

	i8 v5853 = (i8)(intptr_t)(ws+3840);
	i1 v5854 = *(i1*)(intptr_t)v5853;
	i8 v5855 = (i8)(intptr_t)(f143_FindFirst);
	i1 v5856;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v5855)(&v5856, v5854);
	i8 v5857 = (i8)(intptr_t)(ws+3816);
	i8 v5858 = *(i8*)(intptr_t)v5857;
	i8 v5859 = v5858+(+57);
	*(i1*)(intptr_t)v5859 = v5856;

	i8 v5860 = (i8)(intptr_t)(ws+3848);
	i8 v5861 = *(i8*)(intptr_t)v5860;
	i8 v5862 = v5861+(+42);
	i1 v5863 = *(i1*)(intptr_t)v5862;
	i8 v5864 = (i8)(intptr_t)(ws+3816);
	i8 v5865 = *(i8*)(intptr_t)v5864;
	i8 v5866 = v5865+(+57);
	i1 v5867 = *(i1*)(intptr_t)v5866;
	i8 v5868 = (i8)(intptr_t)(f141_FindConflictingRegisters);
	i1 v5869;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v5868)(&v5869, v5867);
	i1 v5870 = v5863|v5869;
	i8 v5871 = (i8)(intptr_t)(ws+3848);
	i8 v5872 = *(i8*)(intptr_t)v5871;
	i8 v5873 = v5872+(+42);
	*(i1*)(intptr_t)v5873 = v5870;

	i8 v5874 = (i8)(intptr_t)(ws+3848);
	i8 v5875 = *(i8*)(intptr_t)v5874;
	i1 v5876 = (i1)+0;
	i8 v5877 = (i8)(intptr_t)(ws+3816);
	i8 v5878 = *(i8*)(intptr_t)v5877;
	i8 v5879 = v5878+(+57);
	i1 v5880 = *(i1*)(intptr_t)v5879;
	i8 v5881 = (i8)(intptr_t)(f360_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v5881)(v5880, v5876, v5875);

c02_03d6:;

c02_03ce:;

c02_03c9:;

c02_03bf:;

endsub:;
}
	void f369_AllocateRegister(void);

// UpdateProducedRegisters workspace at ws+3840 length ws+1
void f371_UpdateProducedRegisters(void) {

	i1 v5883 = (i1)+0;
	i8 v5884 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5884 = v5883;

c02_03ea:;

	i8 v5885 = (i8)(intptr_t)(ws+3776);
	i1 v5886 = *(i1*)(intptr_t)v5885;
	i1 v5887 = (i1)+3;
	if (v5886==v5887) goto c02_03ed; else goto c02_03ec;

c02_03ec:;

	i8 v5888 = (i8)(intptr_t)(ws+3808);
	i8 v5889 = *(i8*)(intptr_t)v5888;
	i8 v5890 = v5889+(+16);
	i8 v5891 = (i8)(intptr_t)(ws+3776);
	i1 v5892 = *(i1*)(intptr_t)v5891;
	i8 v5893 = v5892;
	i1 v5894 = (i1)+3;
	i8 v5895 = ((i8)v5893)<<v5894;
	i8 v5896 = v5890+v5895;
	i8 v5897 = *(i8*)(intptr_t)v5896;
	i8 v5898 = (i8)(intptr_t)(ws+3816);
	*(i8*)(intptr_t)v5898 = v5897;

	i8 v5899 = (i8)(intptr_t)(ws+3816);
	i8 v5900 = *(i8*)(intptr_t)v5899;
	i8 v5901 = (i8)+0;
	if (v5900==v5901) goto c02_03f4; else goto c02_03f5;

c02_03f5:;

	i8 v5902 = (i8)(intptr_t)(ws+3816);
	i8 v5903 = *(i8*)(intptr_t)v5902;
	i8 v5904 = v5903+(+56);
	i1 v5905 = *(i1*)(intptr_t)v5904;
	i1 v5906 = (i1)-1;
	if (v5905==v5906) goto c02_03f3; else goto c02_03f4;

c02_03f3:;

	i8 v5907 = (i8)(intptr_t)(ws+3808);
	i8 v5908 = *(i8*)(intptr_t)v5907;
	i8 v5909 = v5908+(+41);
	i1 v5910 = *(i1*)(intptr_t)v5909;
	i8 v5911 = (i8)(intptr_t)(ws+3816);
	i8 v5912 = *(i8*)(intptr_t)v5911;
	i8 v5913 = v5912+(+56);
	*(i1*)(intptr_t)v5913 = v5910;

	i1 v5914 = (i1)+0;
	i8 v5915 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5915 = v5914;

c02_03f8:;

	i8 v5916 = (i8)(intptr_t)(ws+3840);
	i1 v5917 = *(i1*)(intptr_t)v5916;
	i1 v5918 = (i1)+3;
	if (v5917==v5918) goto c02_03fb; else goto c02_03fa;

c02_03fa:;

	i8 v5919 = (i8)(intptr_t)(ws+3776);
	i1 v5920 = *(i1*)(intptr_t)v5919;
	i8 v5921 = (i8)(intptr_t)(ws+3840);
	i1 v5922 = *(i1*)(intptr_t)v5921;
	if (v5920==v5922) goto c02_0400; else goto c02_03ff;

c02_03ff:;

	i8 v5923 = (i8)(intptr_t)(ws+3808);
	i8 v5924 = *(i8*)(intptr_t)v5923;
	i8 v5925 = v5924+(+16);
	i8 v5926 = (i8)(intptr_t)(ws+3840);
	i1 v5927 = *(i1*)(intptr_t)v5926;
	i8 v5928 = v5927;
	i1 v5929 = (i1)+3;
	i8 v5930 = ((i8)v5928)<<v5929;
	i8 v5931 = v5925+v5930;
	i8 v5932 = *(i8*)(intptr_t)v5931;
	i8 v5933 = (i8)(intptr_t)(ws+3816);
	*(i8*)(intptr_t)v5933 = v5932;

	i8 v5934 = (i8)(intptr_t)(ws+3816);
	i8 v5935 = *(i8*)(intptr_t)v5934;
	i8 v5936 = (i8)+0;
	if (v5935==v5936) goto c02_0405; else goto c02_0404;

c02_0404:;

	i8 v5937 = (i8)(intptr_t)(ws+3816);
	i8 v5938 = *(i8*)(intptr_t)v5937;
	i8 v5939 = v5938+(+56);
	i1 v5940 = *(i1*)(intptr_t)v5939;
	i8 v5941 = (i8)(intptr_t)(ws+3808);
	i8 v5942 = *(i8*)(intptr_t)v5941;
	i8 v5943 = v5942+(+41);
	i1 v5944 = *(i1*)(intptr_t)v5943;
	i1 v5945 = ~v5944;
	i1 v5946 = v5940&v5945;
	i8 v5947 = (i8)(intptr_t)(ws+3816);
	i8 v5948 = *(i8*)(intptr_t)v5947;
	i8 v5949 = v5948+(+56);
	*(i1*)(intptr_t)v5949 = v5946;

c02_0405:;

c02_0401:;

c02_0400:;

c02_03fc:;

	i8 v5950 = (i8)(intptr_t)(ws+3840);
	i1 v5951 = *(i1*)(intptr_t)v5950;
	i1 v5952 = v5951+(+1);
	i8 v5953 = (i8)(intptr_t)(ws+3840);
	*(i1*)(intptr_t)v5953 = v5952;

	goto c02_03f8;

c02_03fb:;

c02_03f4:;

c02_03ee:;

	i8 v5954 = (i8)(intptr_t)(ws+3776);
	i1 v5955 = *(i1*)(intptr_t)v5954;
	i1 v5956 = v5955+(+1);
	i8 v5957 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v5957 = v5956;

	goto c02_03ea;

c02_03ed:;

endsub:;
}
	void f371_UpdateProducedRegisters(void);
	void f361_ShuffleRegisters(i8 /* moves */);
	void f178_EmitOneInstruction(i8 /* self */, i1 /* ruleid */);
	void f361_ShuffleRegisters(i8 /* moves */);
	void f149_ArchEndInstruction(void);
	void f74_FreeNode(i8 /* node */);
	void f140_FreeInstruction(i8 /* insn */);

// EmitAndFreeInstructions workspace at ws+3840 length ws+8
void f372_EmitAndFreeInstructions(void) {

c02_0406:;

	i8 v5959 = (i8)(intptr_t)(ws+3792);
	i8 v5960 = *(i8*)(intptr_t)v5959;
	i8 v5961 = (i8)(intptr_t)(ws+3840);
	*(i8*)(intptr_t)v5961 = v5960;

	i8 v5962 = (i8)(intptr_t)(ws+3840);
	i8 v5963 = *(i8*)(intptr_t)v5962;
	i8 v5964 = (i8)+0;
	if (v5963==v5964) goto c02_040b; else goto c02_040c;

c02_040b:;

	goto c02_0407;

c02_040c:;

c02_0408:;

	i8 v5965 = (i8)(intptr_t)(ws+3792);
	i8 v5966 = *(i8*)(intptr_t)v5965;
	i8 v5967 = v5966+(+8);
	i8 v5968 = *(i8*)(intptr_t)v5967;
	i8 v5969 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v5969 = v5968;

	i8 v5970 = (i8)(intptr_t)(ws+3840);
	i8 v5971 = *(i8*)(intptr_t)v5970;
	i8 v5972 = v5971+(+52);
	i8 v5973 = (i8)(intptr_t)(f361_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v5973)(v5972);

	i8 v5974 = (i8)(intptr_t)(ws+3840);
	i8 v5975 = *(i8*)(intptr_t)v5974;
	i8 v5976 = v5975+(+62);
	i1 v5977 = *(i1*)(intptr_t)v5976;
	i8 v5978 = (i8)(intptr_t)(ws+3840);
	i8 v5979 = *(i8*)(intptr_t)v5978;
	i8 v5980 = (i8)(intptr_t)(f178_EmitOneInstruction);

	((void(*)(i8 /* self */, i1 /* ruleid */))(intptr_t)v5980)(v5979, v5977);

	i8 v5981 = (i8)(intptr_t)(ws+3840);
	i8 v5982 = *(i8*)(intptr_t)v5981;
	i8 v5983 = v5982+(+44);
	i8 v5984 = (i8)(intptr_t)(f361_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v5984)(v5983);

	i8 v5985 = (i8)(intptr_t)(f149_ArchEndInstruction);

	((void(*)(void))(intptr_t)v5985)();

	i8 v5986 = (i8)(intptr_t)(ws+3840);
	i8 v5987 = *(i8*)(intptr_t)v5986;
	i8 v5988 = v5987+(+16);
	i8 v5989 = *(i8*)(intptr_t)v5988;
	i8 v5990 = v5989+(+72);
	i1 v5991 = *(i1*)(intptr_t)v5990;
	i1 v5992 = (i1)+24;
	if (v5991==v5992) goto c02_0410; else goto c02_0411;

c02_0410:;

	i8 v5993 = (i8)(intptr_t)(ws+3840);
	i8 v5994 = *(i8*)(intptr_t)v5993;
	i8 v5995 = v5994+(+16);
	i8 v5996 = *(i8*)(intptr_t)v5995;
	i8 v5997 = (i8)(intptr_t)(f74_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v5997)(v5996);

c02_0411:;

c02_040d:;

	i8 v5998 = (i8)(intptr_t)(ws+3840);
	i8 v5999 = *(i8*)(intptr_t)v5998;
	i8 v6000 = (i8)(intptr_t)(f140_FreeInstruction);

	((void(*)(i8 /* insn */))(intptr_t)v6000)(v5999);

	goto c02_0406;

c02_0407:;

endsub:;
}
	void f372_EmitAndFreeInstructions(void);
	void f150_ArchEndGroup(void);
	void f59_Discard(i8 /* node */);

// Generate workspace at ws+3768 length ws+72
void f363_Generate(i8 p4958 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3768) = p4958; /*rootnode */

	i8 v4959 = (i8)+0;
	i8 v4960 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v4960 = v4959;

	i8 v4961 = (i8)+0;
	i8 v4962 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v4962 = v4961;

	i8 v4963 = (i8)(intptr_t)(ws+184);
	i8 v4964 = *(i8*)(intptr_t)v4963;
	i8 v4965 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v4965 = v4964;

	i8 v4966 = (i8)(intptr_t)(ws+3768);
	i8 v4967 = *(i8*)(intptr_t)v4966;
	i8 v4968 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v4968)(v4967);

c02_033f:;

	i8 v4969 = (i8)(intptr_t)(ws+184);
	i8 v4970 = *(i8*)(intptr_t)v4969;
	i8 v4971 = (i8)(intptr_t)(ws+3800);
	i8 v4972 = *(i8*)(intptr_t)v4971;
	if (v4970==v4972) goto c02_0342; else goto c02_0341;

c02_0341:;

	i8 v4973 = (i8)(intptr_t)(f139_AllocNewInstruction);
	i8 v4974;

	((void(*)(i8* /* insn */))(intptr_t)v4973)(&v4974);
	i8 v4975 = (i8)(intptr_t)(ws+3808);
	*(i8*)(intptr_t)v4975 = v4974;

	i8 v4976 = (i8)(intptr_t)(ws+3784);
	i8 v4977 = *(i8*)(intptr_t)v4976;
	i8 v4978 = (i8)+0;
	if (v4977==v4978) goto c02_0346; else goto c02_0347;

c02_0346:;

	i8 v4979 = (i8)(intptr_t)(ws+3808);
	i8 v4980 = *(i8*)(intptr_t)v4979;
	i8 v4981 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v4981 = v4980;

	i8 v4982 = (i8)(intptr_t)(ws+3808);
	i8 v4983 = *(i8*)(intptr_t)v4982;
	i8 v4984 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v4984 = v4983;

	goto c02_0343;

c02_0347:;

	i8 v4985 = (i8)(intptr_t)(ws+3808);
	i8 v4986 = *(i8*)(intptr_t)v4985;
	i8 v4987 = (i8)(intptr_t)(ws+3792);
	i8 v4988 = *(i8*)(intptr_t)v4987;
	*(i8*)(intptr_t)v4988 = v4986;

	i8 v4989 = (i8)(intptr_t)(ws+3792);
	i8 v4990 = *(i8*)(intptr_t)v4989;
	i8 v4991 = (i8)(intptr_t)(ws+3808);
	i8 v4992 = *(i8*)(intptr_t)v4991;
	i8 v4993 = v4992+(+8);
	*(i8*)(intptr_t)v4993 = v4990;

	i8 v4994 = (i8)(intptr_t)(ws+3808);
	i8 v4995 = *(i8*)(intptr_t)v4994;
	i8 v4996 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v4996 = v4995;

c02_0343:;

	i8 v4997 = (i8)(intptr_t)(f57_PopNode);
	i8 v4998;

	((void(*)(i8* /* node */))(intptr_t)v4997)(&v4998);
	i8 v4999 = (i8)(intptr_t)(ws+3816);
	*(i8*)(intptr_t)v4999 = v4998;


	i8 v5372 = (i8)(intptr_t)(f364_InstructionMatcher);

	((void(*)(void))(intptr_t)v5372)();

	i8 v5373 = (i8)(intptr_t)(ws+3808);
	i8 v5374 = *(i8*)(intptr_t)v5373;
	i8 v5375 = v5374+(+40);
	i1 v5376 = *(i1*)(intptr_t)v5375;
	i1 v5377 = (i1)+0;
	if (v5376==v5377) goto c02_03be; else goto c02_03bd;

c02_03bd:;


	i8 v5882 = (i8)(intptr_t)(f369_AllocateRegister);

	((void(*)(void))(intptr_t)v5882)();


	i8 v5958 = (i8)(intptr_t)(f371_UpdateProducedRegisters);

	((void(*)(void))(intptr_t)v5958)();

c02_03be:;

c02_03ba:;

	goto c02_033f;

c02_0342:;


	i8 v6001 = (i8)(intptr_t)(f372_EmitAndFreeInstructions);

	((void(*)(void))(intptr_t)v6001)();

	i8 v6002 = (i8)(intptr_t)(f150_ArchEndGroup);

	((void(*)(void))(intptr_t)v6002)();

	i8 v6003 = (i8)(intptr_t)(ws+3768);
	i8 v6004 = *(i8*)(intptr_t)v6003;
	i8 v6005 = (i8)(intptr_t)(f59_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6005)(v6004);

endsub:;
}
const i1 c02_s01ef[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f63_SimpleError(i8 /* s */);

// PushNode workspace at ws+3928 length ws+8
void f56_PushNode(i8 p6156 /* node */) {
	*(i8*)(intptr_t)(ws+3928) = p6156; /*node */

	i8 v6157 = (i8)(intptr_t)(ws+3928);
	i8 v6158 = *(i8*)(intptr_t)v6157;
	i8 v6159 = (i8)+0;
	if (v6158==v6159) goto c02_042c; else goto c02_042b;

c02_042b:;

	i8 v6160 = (i8)(intptr_t)(ws+184);
	i8 v6161 = *(i8*)(intptr_t)v6160;
	i8 v6162 = (i8)(intptr_t)(ws+184);
	if (v6161==v6162) goto c02_0430; else goto c02_0431;

c02_0430:;

	i8 v6163 = (i8)(intptr_t)c02_s01ef;
	i8 v6164 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v6164)(v6163);

c02_0431:;

c02_042d:;

	i8 v6165 = (i8)(intptr_t)(ws+3928);
	i8 v6166 = *(i8*)(intptr_t)v6165;
	i8 v6167 = (i8)(intptr_t)(ws+184);
	i8 v6168 = *(i8*)(intptr_t)v6167;
	*(i8*)(intptr_t)v6168 = v6166;

	i8 v6169 = (i8)(intptr_t)(ws+184);
	i8 v6170 = *(i8*)(intptr_t)v6169;
	i8 v6171 = v6170+(+8);
	i8 v6172 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v6172 = v6171;

c02_042c:;

c02_0428:;

endsub:;
}

// PopNode workspace at ws+3928 length ws+8
void f57_PopNode(i8* p6173 /* node */) {

	i8 v6174 = (i8)(intptr_t)(ws+184);
	i8 v6175 = *(i8*)(intptr_t)v6174;
	i8 v6176 = v6175+(-8);
	i8 v6177 = (i8)(intptr_t)(ws+184);
	*(i8*)(intptr_t)v6177 = v6176;

	i8 v6178 = (i8)(intptr_t)(ws+184);
	i8 v6179 = *(i8*)(intptr_t)v6178;
	i8 v6180 = *(i8*)(intptr_t)v6179;
	i8 v6181 = (i8)(intptr_t)(ws+3928);
	*(i8*)(intptr_t)v6181 = v6180;

endsub:;
	*p6173 = *(i8*)(intptr_t)(ws+3928);
}
	void f57_PopNode(i8* /* node */);
	void f56_PushNode(i8 /* node */);
	void f56_PushNode(i8 /* node */);

// NextNode workspace at ws+3920 length ws+8
void f58_NextNode(i8* p6182 /* node */) {

	i8 v6183 = (i8)(intptr_t)(f57_PopNode);
	i8 v6184;

	((void(*)(i8* /* node */))(intptr_t)v6183)(&v6184);
	i8 v6185 = (i8)(intptr_t)(ws+3920);
	*(i8*)(intptr_t)v6185 = v6184;

	i8 v6186 = (i8)(intptr_t)(ws+3920);
	i8 v6187 = *(i8*)(intptr_t)v6186;
	i8 v6188 = (i8)+0;
	if (v6187==v6188) goto c02_0436; else goto c02_0435;

c02_0435:;

	i8 v6189 = (i8)(intptr_t)(ws+3920);
	i8 v6190 = *(i8*)(intptr_t)v6189;
	i8 v6191 = v6190+(+24);
	i8 v6192 = *(i8*)(intptr_t)v6191;
	i8 v6193 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6193)(v6192);

	i8 v6194 = (i8)(intptr_t)(ws+3920);
	i8 v6195 = *(i8*)(intptr_t)v6194;
	i8 v6196 = v6195+(+32);
	i8 v6197 = *(i8*)(intptr_t)v6196;
	i8 v6198 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6198)(v6197);

c02_0436:;

c02_0432:;

endsub:;
	*p6182 = *(i8*)(intptr_t)(ws+3920);
}
	void f56_PushNode(i8 /* node */);
	void f58_NextNode(i8* /* node */);
	void f74_FreeNode(i8 /* node */);

// Discard workspace at ws+3840 length ws+24
void f59_Discard(i8 p6199 /* node */) {
	*(i8*)(intptr_t)(ws+3840) = p6199; /*node */

	i8 v6200 = (i8)(intptr_t)(ws+184);
	i8 v6201 = *(i8*)(intptr_t)v6200;
	i8 v6202 = (i8)(intptr_t)(ws+3848);
	*(i8*)(intptr_t)v6202 = v6201;

	i8 v6203 = (i8)(intptr_t)(ws+3840);
	i8 v6204 = *(i8*)(intptr_t)v6203;
	i8 v6205 = (i8)(intptr_t)(f56_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6205)(v6204);

c02_0439:;

	i8 v6206 = (i8)(intptr_t)(ws+184);
	i8 v6207 = *(i8*)(intptr_t)v6206;
	i8 v6208 = (i8)(intptr_t)(ws+3848);
	i8 v6209 = *(i8*)(intptr_t)v6208;
	if (v6207==v6209) goto c02_043c; else goto c02_043b;

c02_043b:;

	i8 v6210 = (i8)(intptr_t)(f58_NextNode);
	i8 v6211;

	((void(*)(i8* /* node */))(intptr_t)v6210)(&v6211);
	i8 v6212 = (i8)(intptr_t)(ws+3856);
	*(i8*)(intptr_t)v6212 = v6211;

	i8 v6213 = (i8)(intptr_t)(ws+3856);
	i8 v6214 = *(i8*)(intptr_t)v6213;
	i8 v6215 = (i8)(intptr_t)(f74_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v6215)(v6214);

	goto c02_0439;

c02_043c:;

endsub:;
}
	void f110_I_b8(i1* /* b */);
	void f72_AllocateNewNode(i8* /* m */, i1 /* code */);

// I_node workspace at ws+3768 length ws+41
void f375_I_node(i8* p6216 /* rootnode */) {

	i1 v6217 = (i1)+1;
	i8 v6218 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v6218 = v6217;

	i8 v6219 = (i8)+0;
	i8 v6220 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6220 = v6219;

c02_043f:;

	i8 v6221 = (i8)(intptr_t)(ws+3776);
	i1 v6222 = *(i1*)(intptr_t)v6221;
	i1 v6223 = (i1)+0;
	if (v6222==v6223) goto c02_0442; else goto c02_0441;

c02_0441:;

	i8 v6224 = (i8)(intptr_t)(f110_I_b8);
	i1 v6225;

	((void(*)(i1* /* b */))(intptr_t)v6224)(&v6225);
	i8 v6226 = (i8)(intptr_t)(ws+3777);
	*(i1*)(intptr_t)v6226 = v6225;

	i8 v6227 = (i8)(intptr_t)(ws+3777);
	i1 v6228 = *(i1*)(intptr_t)v6227;
	i8 v6229 = (i8)(intptr_t)(f72_AllocateNewNode);
	i8 v6230;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v6229)(&v6230, v6228);
	i8 v6231 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v6231 = v6230;

	i8 v6232 = (i8)(intptr_t)(ws+3768);
	i8 v6233 = *(i8*)(intptr_t)v6232;
	i8 v6234 = (i8)(intptr_t)(ws+3784);
	i8 v6235 = *(i8*)(intptr_t)v6234;
	i8 v6236 = v6235+(+64);
	*(i8*)(intptr_t)v6236 = v6233;

	i8 v6237 = (i8)(intptr_t)(ws+3784);
	i8 v6238 = *(i8*)(intptr_t)v6237;
	i8 v6239 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6239 = v6238;

	i8 v6240 = (i8)(intptr_t)((i1*)f3___main_s0130);
	i8 v6241 = (i8)(intptr_t)(ws+3777);
	i1 v6242 = *(i1*)(intptr_t)v6241;
	i1 v6243 = v6242+(-1);
	i8 v6244 = v6243;
	i8 v6245 = v6240+v6244;
	i1 v6246 = *(i1*)(intptr_t)v6245;
	i8 v6247 = (i8)(intptr_t)(ws+3792);
	*(i1*)(intptr_t)v6247 = v6246;

	i8 v6248 = (i8)(intptr_t)(ws+3784);
	i8 v6249 = *(i8*)(intptr_t)v6248;
	i8 v6250 = (i8)(intptr_t)((i1*)f3___main_s012f);
	i8 v6251 = (i8)(intptr_t)(ws+3792);
	i1 v6252 = *(i1*)(intptr_t)v6251;
	i8 v6253 = v6252;
	i1 v6254 = (i1)+3;
	i8 v6255 = ((i8)v6253)<<v6254;
	i8 v6256 = v6250+v6255;
	i8 v6257 = *(i8*)(intptr_t)v6256;

	((void(*)(i8 /* node */))(intptr_t)v6257)(v6249);

	i8 v6258 = (i8)(intptr_t)(ws+3776);
	i1 v6259 = *(i1*)(intptr_t)v6258;
	i8 v6260 = (i8)(intptr_t)((i1*)f3___main_s0131);
	i8 v6261 = (i8)(intptr_t)(ws+3777);
	i1 v6262 = *(i1*)(intptr_t)v6261;
	i1 v6263 = v6262+(-1);
	i8 v6264 = v6263;
	i8 v6265 = v6260+v6264;
	i1 v6266 = *(i1*)(intptr_t)v6265;
	i1 v6267 = v6259+v6266;
	i1 v6268 = v6267+(-1);
	i8 v6269 = (i8)(intptr_t)(ws+3776);
	*(i1*)(intptr_t)v6269 = v6268;

	goto c02_043f;

c02_0442:;

	i8 v6270 = (i8)+0;
	i8 v6271 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v6271 = v6270;

c02_0445:;

	i8 v6272 = (i8)(intptr_t)(ws+3768);
	i8 v6273 = *(i8*)(intptr_t)v6272;
	i8 v6274 = (i8)+0;
	if (v6273==v6274) goto c02_0448; else goto c02_0447;

c02_0447:;

	i8 v6275 = (i8)(intptr_t)(ws+3768);
	i8 v6276 = *(i8*)(intptr_t)v6275;
	i8 v6277 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v6277 = v6276;

	i8 v6278 = (i8)(intptr_t)(ws+3784);
	i8 v6279 = *(i8*)(intptr_t)v6278;
	i8 v6280 = v6279+(+64);
	i8 v6281 = *(i8*)(intptr_t)v6280;
	i8 v6282 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6282 = v6281;

	i8 v6283 = (i8)(intptr_t)((i1*)f3___main_s0131);
	i8 v6284 = (i8)(intptr_t)(ws+3784);
	i8 v6285 = *(i8*)(intptr_t)v6284;
	i8 v6286 = v6285+(+72);
	i1 v6287 = *(i1*)(intptr_t)v6286;
	i1 v6288 = v6287+(-1);
	i8 v6289 = v6288;
	i8 v6290 = v6283+v6289;
	i1 v6291 = *(i1*)(intptr_t)v6290;
	i8 v6292 = (i8)(intptr_t)(ws+3808);
	*(i1*)(intptr_t)v6292 = v6291;

	i8 v6293 = (i8)(intptr_t)(ws+3808);
	i1 v6294 = *(i1*)(intptr_t)v6293;
	i1 v6295 = (i1)+1;
	if (v6294<v6295) goto c02_044d; else goto c02_044c;

c02_044c:;

	i8 v6296 = (i8)(intptr_t)(ws+3800);
	i8 v6297 = *(i8*)(intptr_t)v6296;
	i8 v6298 = (i8)(intptr_t)(ws+3784);
	i8 v6299 = *(i8*)(intptr_t)v6298;
	i8 v6300 = v6299+(+24);
	*(i8*)(intptr_t)v6300 = v6297;

	i8 v6301 = (i8)(intptr_t)(ws+3784);
	i8 v6302 = *(i8*)(intptr_t)v6301;
	i8 v6303 = v6302+(+24);
	i8 v6304 = *(i8*)(intptr_t)v6303;
	i8 v6305 = v6304+(+64);
	i8 v6306 = *(i8*)(intptr_t)v6305;
	i8 v6307 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v6307 = v6306;

c02_044d:;

c02_0449:;

	i8 v6308 = (i8)(intptr_t)(ws+3808);
	i1 v6309 = *(i1*)(intptr_t)v6308;
	i1 v6310 = (i1)+2;
	if (v6309==v6310) goto c02_0451; else goto c02_0452;

c02_0451:;

	i8 v6311 = (i8)(intptr_t)(ws+3784);
	i8 v6312 = *(i8*)(intptr_t)v6311;
	i8 v6313 = v6312+(+24);
	i8 v6314 = *(i8*)(intptr_t)v6313;
	i8 v6315 = (i8)(intptr_t)(ws+3784);
	i8 v6316 = *(i8*)(intptr_t)v6315;
	i8 v6317 = v6316+(+32);
	*(i8*)(intptr_t)v6317 = v6314;

	i8 v6318 = (i8)(intptr_t)(ws+3800);
	i8 v6319 = *(i8*)(intptr_t)v6318;
	i8 v6320 = (i8)(intptr_t)(ws+3784);
	i8 v6321 = *(i8*)(intptr_t)v6320;
	i8 v6322 = v6321+(+24);
	*(i8*)(intptr_t)v6322 = v6319;

	i8 v6323 = (i8)(intptr_t)(ws+3784);
	i8 v6324 = *(i8*)(intptr_t)v6323;
	i8 v6325 = v6324+(+24);
	i8 v6326 = *(i8*)(intptr_t)v6325;
	i8 v6327 = v6326+(+64);
	i8 v6328 = *(i8*)(intptr_t)v6327;
	i8 v6329 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v6329 = v6328;

c02_0452:;

c02_044e:;

	i8 v6330 = (i8)(intptr_t)(ws+3800);
	i8 v6331 = *(i8*)(intptr_t)v6330;
	i8 v6332 = (i8)(intptr_t)(ws+3784);
	i8 v6333 = *(i8*)(intptr_t)v6332;
	i8 v6334 = v6333+(+64);
	*(i8*)(intptr_t)v6334 = v6331;

	i8 v6335 = (i8)(intptr_t)(ws+3784);
	i8 v6336 = *(i8*)(intptr_t)v6335;
	i8 v6337 = (i8)(intptr_t)(ws+3800);
	*(i8*)(intptr_t)v6337 = v6336;

	goto c02_0445;

c02_0448:;

	i8 v6338 = (i8)(intptr_t)(ws+3800);
	i8 v6339 = *(i8*)(intptr_t)v6338;
	i8 v6340 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6340 = v6339;

endsub:;
	*p6216 = *(i8*)(intptr_t)(ws+3768);
}
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f61_StartError(void);
const i1 c02_s01f0[] = { 0x64,0x75,0x70,0x6c,0x69,0x63,0x61,0x74,0x65,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f19_print_hex_i16(i2 /* value */);
const i1 c02_s01f1[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f47_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f20_print_hex_i32(i4 /* value */);
	void f62_EndError(void);
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f138_AllocSubrId(i2* /* id */);

// AddSubr workspace at ws+3760 length ws+40
void f376_AddSubr(i8* p6341 /* subr */, i2 p6342 /* subrid */) {
	*(i2*)(intptr_t)(ws+3760) = p6342; /*subrid */

	i8 v6343 = (i8)(intptr_t)(ws+3760);
	i2 v6344 = *(i2*)(intptr_t)v6343;
	i8 v6345 = (i8)(intptr_t)(ws+3776);
	*(i2*)(intptr_t)v6345 = v6344;

	i8 v6346 = (i8)(intptr_t)(ws+3600);
	i8 v6347 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v6347 = v6346;

c02_0455:;

	i8 v6348 = (i8)(intptr_t)(ws+3776);
	i2 v6349 = *(i2*)(intptr_t)v6348;
	i2 v6350 = (i2)+16;
	if (v6349<v6350) goto c02_0458; else goto c02_0457;

c02_0457:;

	i8 v6351 = (i8)(intptr_t)(ws+3784);
	i8 v6352 = *(i8*)(intptr_t)v6351;
	i8 v6353 = *(i8*)(intptr_t)v6352;
	i8 v6354 = (i8)+0;
	if (v6353==v6354) goto c02_045c; else goto c02_045d;

c02_045c:;

	i8 v6355 = (i8)+136;
	i8 v6356 = (i8)(intptr_t)(f32_Alloc);
	i8 v6357;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6356)(&v6357, v6355);
	i8 v6358 = (i8)(intptr_t)(ws+3784);
	i8 v6359 = *(i8*)(intptr_t)v6358;
	*(i8*)(intptr_t)v6359 = v6357;

c02_045d:;

c02_0459:;

	i8 v6360 = (i8)(intptr_t)(ws+3784);
	i8 v6361 = *(i8*)(intptr_t)v6360;
	i8 v6362 = *(i8*)(intptr_t)v6361;
	i8 v6363 = (i8)(intptr_t)(ws+3784);
	*(i8*)(intptr_t)v6363 = v6362;

	i8 v6364 = (i8)(intptr_t)(ws+3776);
	i2 v6365 = *(i2*)(intptr_t)v6364;
	i2 v6366 = v6365+(-16);
	i8 v6367 = (i8)(intptr_t)(ws+3776);
	*(i2*)(intptr_t)v6367 = v6366;

	goto c02_0455;

c02_0458:;

	i8 v6368 = (i8)(intptr_t)(ws+3784);
	i8 v6369 = *(i8*)(intptr_t)v6368;
	i8 v6370 = v6369+(+8);
	i8 v6371 = (i8)(intptr_t)(ws+3776);
	i2 v6372 = *(i2*)(intptr_t)v6371;
	i1 v6373 = v6372;
	i8 v6374 = v6373;
	i1 v6375 = (i1)+3;
	i8 v6376 = ((i8)v6374)<<v6375;
	i8 v6377 = v6370+v6376;
	i8 v6378 = (i8)(intptr_t)(ws+3792);
	*(i8*)(intptr_t)v6378 = v6377;

	i8 v6379 = (i8)(intptr_t)(ws+3792);
	i8 v6380 = *(i8*)(intptr_t)v6379;
	i8 v6381 = *(i8*)(intptr_t)v6380;
	i8 v6382 = (i8)+0;
	if (v6381==v6382) goto c02_0462; else goto c02_0461;

c02_0461:;

	i8 v6383 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v6383)();

	i8 v6384 = (i8)(intptr_t)c02_s01f0;
	i8 v6385 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6385)(v6384);

	i8 v6386 = (i8)(intptr_t)(ws+3760);
	i2 v6387 = *(i2*)(intptr_t)v6386;
	i8 v6388 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v6388)(v6387);

	i8 v6389 = (i8)(intptr_t)c02_s01f1;
	i8 v6390 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6390)(v6389);

	i8 v6391 = (i8)(intptr_t)(ws+2804);
	i8 v6392 = (i8)(intptr_t)(f47_FCBPos);
	i4 v6393;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v6392)(&v6393, v6391);
	i8 v6394 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6394)(v6393);

	i8 v6395 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v6395)();

c02_0462:;

c02_045e:;

	i8 v6396 = (i8)+51;
	i8 v6397 = (i8)(intptr_t)(f32_Alloc);
	i8 v6398;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6397)(&v6398, v6396);
	i8 v6399 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6399 = v6398;

	i8 v6400 = (i8)(intptr_t)(f138_AllocSubrId);
	i2 v6401;

	((void(*)(i2* /* id */))(intptr_t)v6400)(&v6401);
	i8 v6402 = (i8)(intptr_t)(ws+3768);
	i8 v6403 = *(i8*)(intptr_t)v6402;
	i8 v6404 = v6403+(+8);
	*(i2*)(intptr_t)v6404 = v6401;

	i8 v6405 = (i8)(intptr_t)(ws+3768);
	i8 v6406 = *(i8*)(intptr_t)v6405;
	i8 v6407 = (i8)(intptr_t)(ws+3792);
	i8 v6408 = *(i8*)(intptr_t)v6407;
	*(i8*)(intptr_t)v6408 = v6406;

endsub:;
	*p6341 = *(i8*)(intptr_t)(ws+3768);
}
const i1 c02_s01f2[] = { 0x75,0x6e,0x6b,0x6e,0x6f,0x77,0x6e,0x20,0x73,0x75,0x62,0x72,0x69,0x64,0 };
	void f63_SimpleError(i8 /* s */);

// FindSubr workspace at ws+3976 length ws+24
void f60_FindSubr(i8* p6409 /* subr */, i2 p6410 /* subrid */) {
	*(i2*)(intptr_t)(ws+3976) = p6410; /*subrid */

	i8 v6411 = (i8)(intptr_t)(ws+3600);
	i8 v6412 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v6412 = v6411;

c02_0465:;

	i8 v6413 = (i8)(intptr_t)(ws+3976);
	i2 v6414 = *(i2*)(intptr_t)v6413;
	i2 v6415 = (i2)+16;
	if (v6414<v6415) goto c02_0468; else goto c02_0467;

c02_0467:;

	i8 v6416 = (i8)(intptr_t)(ws+3992);
	i8 v6417 = *(i8*)(intptr_t)v6416;
	i8 v6418 = *(i8*)(intptr_t)v6417;
	i8 v6419 = (i8)+0;
	if (v6418==v6419) goto c02_046c; else goto c02_046d;

c02_046c:;

	i8 v6420 = (i8)(intptr_t)c02_s01f2;
	i8 v6421 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v6421)(v6420);

c02_046d:;

c02_0469:;

	i8 v6422 = (i8)(intptr_t)(ws+3992);
	i8 v6423 = *(i8*)(intptr_t)v6422;
	i8 v6424 = *(i8*)(intptr_t)v6423;
	i8 v6425 = (i8)(intptr_t)(ws+3992);
	*(i8*)(intptr_t)v6425 = v6424;

	i8 v6426 = (i8)(intptr_t)(ws+3976);
	i2 v6427 = *(i2*)(intptr_t)v6426;
	i2 v6428 = v6427+(-16);
	i8 v6429 = (i8)(intptr_t)(ws+3976);
	*(i2*)(intptr_t)v6429 = v6428;

	goto c02_0465;

c02_0468:;

	i8 v6430 = (i8)(intptr_t)(ws+3992);
	i8 v6431 = *(i8*)(intptr_t)v6430;
	i8 v6432 = v6431+(+8);
	i8 v6433 = (i8)(intptr_t)(ws+3976);
	i2 v6434 = *(i2*)(intptr_t)v6433;
	i1 v6435 = v6434;
	i8 v6436 = v6435;
	i1 v6437 = (i1)+3;
	i8 v6438 = ((i8)v6436)<<v6437;
	i8 v6439 = v6432+v6438;
	i8 v6440 = *(i8*)(intptr_t)v6439;
	i8 v6441 = (i8)(intptr_t)(ws+3984);
	*(i8*)(intptr_t)v6441 = v6440;

endsub:;
	*p6409 = *(i8*)(intptr_t)(ws+3984);
}
	void f111_I_b16(i2* /* b */);
	void f376_AddSubr(i8* /* subr */, i2 /* subrid */);
	void f114_I_countedstring(i8* /* s */);
	void f105_EmitterDeclareSubroutine(i8 /* subr */);

// ReadN workspace at ws+3744 length ws+16
void f377_ReadN(void) {

	i8 v6442 = (i8)(intptr_t)(f111_I_b16);
	i2 v6443;

	((void(*)(i2* /* b */))(intptr_t)v6442)(&v6443);
	i8 v6444 = (i8)(intptr_t)(ws+3744);
	*(i2*)(intptr_t)v6444 = v6443;

	i8 v6445 = (i8)(intptr_t)(ws+3744);
	i2 v6446 = *(i2*)(intptr_t)v6445;
	i8 v6447 = (i8)(intptr_t)(f376_AddSubr);
	i8 v6448;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6447)(&v6448, v6446);
	i8 v6449 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v6449 = v6448;

	i8 v6450 = (i8)(intptr_t)(f114_I_countedstring);
	i8 v6451;

	((void(*)(i8* /* s */))(intptr_t)v6450)(&v6451);
	i8 v6452 = (i8)(intptr_t)(ws+3752);
	i8 v6453 = *(i8*)(intptr_t)v6452;
	*(i8*)(intptr_t)v6453 = v6451;

	i8 v6454 = (i8)(intptr_t)(ws+3752);
	i8 v6455 = *(i8*)(intptr_t)v6454;
	i8 v6456 = (i8)(intptr_t)(f105_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v6456)(v6455);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f114_I_countedstring(i8* /* s */);
	void f106_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* subrid */);
	void f33_Free(i8 /* block */);

// ReadX workspace at ws+3744 length ws+24
void f378_ReadX(void) {

	i8 v6457 = (i8)(intptr_t)(f111_I_b16);
	i2 v6458;

	((void(*)(i2* /* b */))(intptr_t)v6457)(&v6458);
	i8 v6459 = (i8)(intptr_t)(ws+3744);
	*(i2*)(intptr_t)v6459 = v6458;

	i8 v6460 = (i8)(intptr_t)(ws+3744);
	i2 v6461 = *(i2*)(intptr_t)v6460;
	i8 v6462 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6463;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6462)(&v6463, v6461);
	i8 v6464 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v6464 = v6463;

	i8 v6465 = (i8)(intptr_t)(f114_I_countedstring);
	i8 v6466;

	((void(*)(i8* /* s */))(intptr_t)v6465)(&v6466);
	i8 v6467 = (i8)(intptr_t)(ws+3760);
	*(i8*)(intptr_t)v6467 = v6466;

	i8 v6468 = (i8)(intptr_t)(ws+3752);
	i8 v6469 = *(i8*)(intptr_t)v6468;
	i8 v6470 = v6469+(+8);
	i2 v6471 = *(i2*)(intptr_t)v6470;
	i8 v6472 = (i8)(intptr_t)(ws+3760);
	i8 v6473 = *(i8*)(intptr_t)v6472;
	i8 v6474 = (i8)(intptr_t)(f106_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* subrid */))(intptr_t)v6474)(v6473, v6471);

	i8 v6475 = (i8)(intptr_t)(ws+3760);
	i8 v6476 = *(i8*)(intptr_t)v6475;
	i8 v6477 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6477)(v6476);

endsub:;
}
	void f375_I_node(i8* /* rootnode */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f363_Generate(i8 /* rootnode */);

// ReadM workspace at ws+3744 length ws+24
void f379_ReadM(void) {

	i8 v6478 = (i8)(intptr_t)(f375_I_node);
	i8 v6479;

	((void(*)(i8* /* rootnode */))(intptr_t)v6478)(&v6479);
	i8 v6480 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6480 = v6479;

	i8 v6481 = (i8)(intptr_t)(ws+3744);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = v6482+(+72);
	i1 v6484 = *(i1*)(intptr_t)v6483;
	i8 v6485 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v6485 = v6484;

	i8 v6486 = (i8)(intptr_t)(ws+3752);
	i1 v6487 = *(i1*)(intptr_t)v6486;
	i1 v6488 = (i1)+4;
	if (v6487==v6488) goto c02_0471; else goto c02_0472;

c02_0471:;

	i8 v6489 = (i8)(intptr_t)(ws+3744);
	i8 v6490 = *(i8*)(intptr_t)v6489;
	i8 v6491 = *(i8*)(intptr_t)v6490;
	i8 v6492 = (i8)(intptr_t)(ws+3760);
	*(i8*)(intptr_t)v6492 = v6491;

	i8 v6493 = (i8)(intptr_t)(ws+40);
	i8 v6494 = *(i8*)(intptr_t)v6493;
	i8 v6495 = (i8)(intptr_t)(ws+3760);
	i8 v6496 = *(i8*)(intptr_t)v6495;
	i8 v6497 = v6496+(+16);
	*(i8*)(intptr_t)v6497 = v6494;

	i8 v6498 = (i8)(intptr_t)(ws+3760);
	i8 v6499 = *(i8*)(intptr_t)v6498;
	i8 v6500 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v6500 = v6499;

	i8 v6501 = (i8)(intptr_t)(ws+40);
	i8 v6502 = *(i8*)(intptr_t)v6501;
	i8 v6503 = *(i8*)(intptr_t)v6502;
	i8 v6504 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6504)(v6503);

	i8 v6505 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v6505)();

c02_0472:;

c02_046e:;

	i8 v6506 = (i8)(intptr_t)(ws+3744);
	i8 v6507 = *(i8*)(intptr_t)v6506;
	i8 v6508 = (i8)(intptr_t)(f363_Generate);

	((void(*)(i8 /* rootnode */))(intptr_t)v6508)(v6507);

	i8 v6509 = (i8)(intptr_t)(ws+3752);
	i1 v6510 = *(i1*)(intptr_t)v6509;
	i1 v6511 = (i1)+5;
	if (v6510==v6511) goto c02_0476; else goto c02_0477;

c02_0476:;

	i8 v6512 = (i8)(intptr_t)(ws+40);
	i8 v6513 = *(i8*)(intptr_t)v6512;
	i8 v6514 = v6513+(+16);
	i8 v6515 = *(i8*)(intptr_t)v6514;
	i8 v6516 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v6516 = v6515;

c02_0477:;

c02_0473:;

endsub:;
}
const i1 c02_s01f3[] = { 0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0x20,0x74,0x77,0x69,0x63,0x65,0 };
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
void f380_ReadParameters(i8 p6517 /* paramp */, i1 p6518 /* count */) {
	*(i1*)(intptr_t)(ws+3752) = p6518; /*count */
	*(i8*)(intptr_t)(ws+3760) = p6517; /*paramp */

	i8 v6519 = (i8)(intptr_t)(ws+3760);
	i8 v6520 = *(i8*)(intptr_t)v6519;
	i8 v6521 = *(i8*)(intptr_t)v6520;
	i8 v6522 = (i8)+0;
	if (v6521==v6522) goto c02_047c; else goto c02_047b;

c02_047b:;

	i8 v6523 = (i8)(intptr_t)c02_s01f3;
	i8 v6524 = (i8)(intptr_t)(f63_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v6524)(v6523);

c02_047c:;

c02_0478:;

	i8 v6525 = (i8)(intptr_t)(ws+3752);
	i1 v6526 = *(i1*)(intptr_t)v6525;
	i8 v6527 = v6526;
	i1 v6528 = (i1)+3;
	i8 v6529 = ((i8)v6527)<<v6528;
	i8 v6530 = (i8)(intptr_t)(f32_Alloc);
	i8 v6531;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6530)(&v6531, v6529);
	i8 v6532 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6532 = v6531;

	i8 v6533 = (i8)(intptr_t)(ws+3768);
	i8 v6534 = *(i8*)(intptr_t)v6533;
	i8 v6535 = (i8)(intptr_t)(ws+3760);
	i8 v6536 = *(i8*)(intptr_t)v6535;
	*(i8*)(intptr_t)v6536 = v6534;

c02_047f:;

	i8 v6537 = (i8)(intptr_t)(ws+3752);
	i1 v6538 = *(i1*)(intptr_t)v6537;
	i1 v6539 = (i1)+0;
	if (v6538==v6539) goto c02_0482; else goto c02_0481;

c02_0481:;

	i8 v6540 = (i8)+24;
	i8 v6541 = (i8)(intptr_t)(f32_Alloc);
	i8 v6542;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6541)(&v6542, v6540);
	i8 v6543 = (i8)(intptr_t)(ws+3776);
	*(i8*)(intptr_t)v6543 = v6542;

	i8 v6544 = (i8)(intptr_t)(ws+3776);
	i8 v6545 = *(i8*)(intptr_t)v6544;
	i8 v6546 = (i8)(intptr_t)(ws+3768);
	i8 v6547 = *(i8*)(intptr_t)v6546;
	*(i8*)(intptr_t)v6547 = v6545;

	i8 v6548 = (i8)(intptr_t)(ws+3768);
	i8 v6549 = *(i8*)(intptr_t)v6548;
	i8 v6550 = v6549+(+8);
	i8 v6551 = (i8)(intptr_t)(ws+3768);
	*(i8*)(intptr_t)v6551 = v6550;

	i8 v6552 = (i8)(intptr_t)(f111_I_b16);
	i2 v6553;

	((void(*)(i2* /* b */))(intptr_t)v6552)(&v6553);
	i8 v6554 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6555;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6554)(&v6555, v6553);
	i8 v6556 = (i8)(intptr_t)(ws+3776);
	i8 v6557 = *(i8*)(intptr_t)v6556;
	*(i8*)(intptr_t)v6557 = v6555;

	i8 v6558 = (i8)(intptr_t)(f110_I_b8);
	i1 v6559;

	((void(*)(i1* /* b */))(intptr_t)v6558)(&v6559);
	i8 v6560 = (i8)(intptr_t)(ws+3776);
	i8 v6561 = *(i8*)(intptr_t)v6560;
	i8 v6562 = v6561+(+10);
	*(i1*)(intptr_t)v6562 = v6559;

	i8 v6563 = (i8)(intptr_t)(f113_I_bsize);
	i2 v6564;

	((void(*)(i2* /* s */))(intptr_t)v6563)(&v6564);
	i8 v6565 = (i8)(intptr_t)(ws+3776);
	i8 v6566 = *(i8*)(intptr_t)v6565;
	i8 v6567 = v6566+(+12);
	*(i2*)(intptr_t)v6567 = v6564;

	i8 v6568 = (i8)(intptr_t)(f114_I_countedstring);
	i8 v6569;

	((void(*)(i8* /* s */))(intptr_t)v6568)(&v6569);
	i8 v6570 = (i8)(intptr_t)(ws+3776);
	i8 v6571 = *(i8*)(intptr_t)v6570;
	i8 v6572 = v6571+(+16);
	*(i8*)(intptr_t)v6572 = v6569;

	i8 v6573 = (i8)(intptr_t)(f110_I_b8);
	i1 v6574;

	((void(*)(i1* /* b */))(intptr_t)v6573)(&v6574);
	i8 v6575 = (i8)(intptr_t)(ws+3776);
	i8 v6576 = *(i8*)(intptr_t)v6575;
	i8 v6577 = v6576+(+14);
	*(i1*)(intptr_t)v6577 = v6574;

	i8 v6578 = (i8)(intptr_t)(ws+3752);
	i1 v6579 = *(i1*)(intptr_t)v6578;
	i1 v6580 = v6579+(-1);
	i8 v6581 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v6581 = v6580;

	goto c02_047f;

c02_0482:;

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f380_ReadParameters(i8 /* paramp */, i1 /* count */);

// ReadI workspace at ws+3744 length ws+8
void f381_ReadI(void) {

	i8 v6582 = (i8)(intptr_t)(f111_I_b16);
	i2 v6583;

	((void(*)(i2* /* b */))(intptr_t)v6582)(&v6583);
	i8 v6584 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6585;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6584)(&v6585, v6583);
	i8 v6586 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6586 = v6585;

	i8 v6587 = (i8)(intptr_t)(f110_I_b8);
	i1 v6588;

	((void(*)(i1* /* b */))(intptr_t)v6587)(&v6588);
	i8 v6589 = (i8)(intptr_t)(ws+3744);
	i8 v6590 = *(i8*)(intptr_t)v6589;
	i8 v6591 = v6590+(+48);
	*(i1*)(intptr_t)v6591 = v6588;

	i8 v6592 = (i8)(intptr_t)(ws+3744);
	i8 v6593 = *(i8*)(intptr_t)v6592;
	i8 v6594 = v6593+(+48);
	i1 v6595 = *(i1*)(intptr_t)v6594;
	i8 v6596 = (i8)(intptr_t)(ws+3744);
	i8 v6597 = *(i8*)(intptr_t)v6596;
	i8 v6598 = v6597+(+32);
	i8 v6599 = (i8)(intptr_t)(f380_ReadParameters);

	((void(*)(i8 /* paramp */, i1 /* count */))(intptr_t)v6599)(v6598, v6595);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f380_ReadParameters(i8 /* paramp */, i1 /* count */);

// ReadO workspace at ws+3744 length ws+8
void f382_ReadO(void) {

	i8 v6600 = (i8)(intptr_t)(f111_I_b16);
	i2 v6601;

	((void(*)(i2* /* b */))(intptr_t)v6600)(&v6601);
	i8 v6602 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6603;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6602)(&v6603, v6601);
	i8 v6604 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6604 = v6603;

	i8 v6605 = (i8)(intptr_t)(f110_I_b8);
	i1 v6606;

	((void(*)(i1* /* b */))(intptr_t)v6605)(&v6606);
	i8 v6607 = (i8)(intptr_t)(ws+3744);
	i8 v6608 = *(i8*)(intptr_t)v6607;
	i8 v6609 = v6608+(+49);
	*(i1*)(intptr_t)v6609 = v6606;

	i8 v6610 = (i8)(intptr_t)(ws+3744);
	i8 v6611 = *(i8*)(intptr_t)v6610;
	i8 v6612 = v6611+(+49);
	i1 v6613 = *(i1*)(intptr_t)v6612;
	i8 v6614 = (i8)(intptr_t)(ws+3744);
	i8 v6615 = *(i8*)(intptr_t)v6614;
	i8 v6616 = v6615+(+40);
	i8 v6617 = (i8)(intptr_t)(f380_ReadParameters);

	((void(*)(i8 /* paramp */, i1 /* count */))(intptr_t)v6617)(v6616, v6613);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);
	void f113_I_bsize(i2* /* s */);
	void f109_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i2 /* subrid */);

// ReadW workspace at ws+3744 length ws+12
void f383_ReadW(void) {

	i8 v6618 = (i8)(intptr_t)(f111_I_b16);
	i2 v6619;

	((void(*)(i2* /* b */))(intptr_t)v6618)(&v6619);
	i8 v6620 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6621;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6620)(&v6621, v6619);
	i8 v6622 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6622 = v6621;

	i8 v6623 = (i8)(intptr_t)(f110_I_b8);
	i1 v6624;

	((void(*)(i1* /* b */))(intptr_t)v6623)(&v6624);
	i8 v6625 = (i8)(intptr_t)(ws+3752);
	*(i1*)(intptr_t)v6625 = v6624;

	i8 v6626 = (i8)(intptr_t)(f113_I_bsize);
	i2 v6627;

	((void(*)(i2* /* s */))(intptr_t)v6626)(&v6627);
	i8 v6628 = (i8)(intptr_t)(ws+3754);
	*(i2*)(intptr_t)v6628 = v6627;

	i8 v6629 = (i8)(intptr_t)(ws+3744);
	i8 v6630 = *(i8*)(intptr_t)v6629;
	i8 v6631 = v6630+(+8);
	i2 v6632 = *(i2*)(intptr_t)v6631;
	i8 v6633 = (i8)(intptr_t)(ws+3752);
	i1 v6634 = *(i1*)(intptr_t)v6633;
	i8 v6635 = (i8)(intptr_t)(ws+3754);
	i2 v6636 = *(i2*)(intptr_t)v6635;
	i8 v6637 = (i8)(intptr_t)(f109_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i2 /* subrid */))(intptr_t)v6637)(v6636, v6634, v6632);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f107_EmitterReferenceSubroutineById(i2 /* used */, i2 /* user */);

// ReadR workspace at ws+3744 length ws+16
void f384_ReadR(void) {

	i8 v6638 = (i8)(intptr_t)(f111_I_b16);
	i2 v6639;

	((void(*)(i2* /* b */))(intptr_t)v6638)(&v6639);
	i8 v6640 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6641;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6640)(&v6641, v6639);
	i8 v6642 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6642 = v6641;

	i8 v6643 = (i8)(intptr_t)(f111_I_b16);
	i2 v6644;

	((void(*)(i2* /* b */))(intptr_t)v6643)(&v6644);
	i8 v6645 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6646;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6645)(&v6646, v6644);
	i8 v6647 = (i8)(intptr_t)(ws+3752);
	*(i8*)(intptr_t)v6647 = v6646;

	i8 v6648 = (i8)(intptr_t)(ws+3744);
	i8 v6649 = *(i8*)(intptr_t)v6648;
	i8 v6650 = v6649+(+8);
	i2 v6651 = *(i2*)(intptr_t)v6650;
	i8 v6652 = (i8)(intptr_t)(ws+3752);
	i8 v6653 = *(i8*)(intptr_t)v6652;
	i8 v6654 = v6653+(+8);
	i2 v6655 = *(i2*)(intptr_t)v6654;
	i8 v6656 = (i8)(intptr_t)(f107_EmitterReferenceSubroutineById);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v6656)(v6655, v6651);

endsub:;
}
	void f111_I_b16(i2* /* b */);
	void f60_FindSubr(i8* /* subr */, i2 /* subrid */);
	void f110_I_b8(i1* /* b */);

// ReadF workspace at ws+3744 length ws+8
void f385_ReadF(void) {

	i8 v6657 = (i8)(intptr_t)(f111_I_b16);
	i2 v6658;

	((void(*)(i2* /* b */))(intptr_t)v6657)(&v6658);
	i8 v6659 = (i8)(intptr_t)(f60_FindSubr);
	i8 v6660;

	((void(*)(i8* /* subr */, i2 /* subrid */))(intptr_t)v6659)(&v6660, v6658);
	i8 v6661 = (i8)(intptr_t)(ws+3744);
	*(i8*)(intptr_t)v6661 = v6660;

	i8 v6662 = (i8)(intptr_t)(f110_I_b8);
	i1 v6663;

	((void(*)(i1* /* b */))(intptr_t)v6662)(&v6663);
	i8 v6664 = (i8)(intptr_t)(ws+3744);
	i8 v6665 = *(i8*)(intptr_t)v6664;
	i8 v6666 = v6665+(+50);
	*(i1*)(intptr_t)v6666 = v6663;

endsub:;
}
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f110_I_b8(i1* /* b */);
	void f377_ReadN(void);
	void f378_ReadX(void);
	void f379_ReadM(void);
	void f381_ReadI(void);
	void f382_ReadO(void);
	void f383_ReadW(void);
	void f384_ReadR(void);
	void f385_ReadF(void);
	void f61_StartError(void);
const i1 c02_s01f4[] = { 0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f18_print_hex_i8(i1 /* value */);
const i1 c02_s01f5[] = { 0x20,0x61,0x74,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f47_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f20_print_hex_i32(i4 /* value */);
	void f62_EndError(void);

// ProcessFile workspace at ws+3736 length ws+1
void f386_ProcessFile(void) {

	i8 v6667 = (i8)(intptr_t)(ws+3600);
	i8 v6668 = (i8)+136;
	i8 v6669 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v6669)(v6668, v6667);

c02_0483:;

	i8 v6670 = (i8)(intptr_t)(f110_I_b8);
	i1 v6671;

	((void(*)(i1* /* b */))(intptr_t)v6670)(&v6671);
	i8 v6672 = (i8)(intptr_t)(ws+3736);
	*(i1*)(intptr_t)v6672 = v6671;

	i8 v6673 = (i8)(intptr_t)(ws+3736);
	i1 v6674 = *(i1*)(intptr_t)v6673;

	if (v6674 != +69) goto c02_0486;

	goto endsub;

c02_0486:;

	if (v6674 != +78) goto c02_0487;

	i8 v6675 = (i8)(intptr_t)(f377_ReadN);

	((void(*)(void))(intptr_t)v6675)();

	goto c02_0485;

c02_0487:;

	if (v6674 != +88) goto c02_0488;

	i8 v6676 = (i8)(intptr_t)(f378_ReadX);

	((void(*)(void))(intptr_t)v6676)();

	goto c02_0485;

c02_0488:;

	if (v6674 != +77) goto c02_0489;

	i8 v6677 = (i8)(intptr_t)(f379_ReadM);

	((void(*)(void))(intptr_t)v6677)();

	goto c02_0485;

c02_0489:;

	if (v6674 != +73) goto c02_048a;

	i8 v6678 = (i8)(intptr_t)(f381_ReadI);

	((void(*)(void))(intptr_t)v6678)();

	goto c02_0485;

c02_048a:;

	if (v6674 != +79) goto c02_048b;

	i8 v6679 = (i8)(intptr_t)(f382_ReadO);

	((void(*)(void))(intptr_t)v6679)();

	goto c02_0485;

c02_048b:;

	if (v6674 != +87) goto c02_048c;

	i8 v6680 = (i8)(intptr_t)(f383_ReadW);

	((void(*)(void))(intptr_t)v6680)();

	goto c02_0485;

c02_048c:;

	if (v6674 != +82) goto c02_048d;

	i8 v6681 = (i8)(intptr_t)(f384_ReadR);

	((void(*)(void))(intptr_t)v6681)();

	goto c02_0485;

c02_048d:;

	if (v6674 != +70) goto c02_048e;

	i8 v6682 = (i8)(intptr_t)(f385_ReadF);

	((void(*)(void))(intptr_t)v6682)();

	goto c02_0485;

c02_048e:;

	i8 v6683 = (i8)(intptr_t)(f61_StartError);

	((void(*)(void))(intptr_t)v6683)();

	i8 v6684 = (i8)(intptr_t)c02_s01f4;
	i8 v6685 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6685)(v6684);

	i8 v6686 = (i8)(intptr_t)(ws+3736);
	i1 v6687 = *(i1*)(intptr_t)v6686;
	i8 v6688 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v6688)(v6687);

	i8 v6689 = (i8)(intptr_t)c02_s01f5;
	i8 v6690 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6690)(v6689);

	i8 v6691 = (i8)(intptr_t)(ws+2804);
	i8 v6692 = (i8)(intptr_t)(f47_FCBPos);
	i4 v6693;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v6692)(&v6693, v6691);
	i8 v6694 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6694)(v6693);

	i8 v6695 = (i8)(intptr_t)(f62_EndError);

	((void(*)(void))(intptr_t)v6695)();

c02_0485:;


	goto c02_0483;

c02_0484:;

endsub:;
}
	void f37_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s01f6[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3736 length ws+0
void f387_PrintFreeMemory(void) {

	i8 v6696 = (i8)(intptr_t)(f37_GetFreeMemory);
	i8 v6697;

	((void(*)(i8* /* i */))(intptr_t)v6696)(&v6697);
	i1 v6698 = (i1)+10;
	i8 v6699 = ((i8)v6697)>>v6698;
	i2 v6700 = v6699;
	i8 v6701 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v6701)(v6700);

	i8 v6702 = (i8)(intptr_t)c02_s01f6;
	i8 v6703 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6703)(v6702);

endsub:;
}
const i1 c02_s01f7[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3736 length ws+0
void f388_SyntaxError(void) {

	i8 v6704 = (i8)(intptr_t)c02_s01f7;
	i8 v6705 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6705)(v6704);

	i8 v6706 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v6706)();

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
	void f24_ArgvNext(i8* /* arg */);
	void f24_ArgvNext(i8* /* arg */);
	void f388_SyntaxError(void);

// ParseArguments workspace at ws+3736 length ws+0
void f389_ParseArguments(void) {

	i8 v6707 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v6707)();

	i8 v6708 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v6709;

	((void(*)(i8* /* arg */))(intptr_t)v6708)(&v6709);
	i8 v6710 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v6710 = v6709;

	i8 v6711 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v6712;

	((void(*)(i8* /* arg */))(intptr_t)v6711)(&v6712);
	i8 v6713 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v6713 = v6712;

	i8 v6714 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v6715;

	((void(*)(i8* /* arg */))(intptr_t)v6714)(&v6715);
	i8 v6716 = (i8)+0;
	if (v6715==v6716) goto c02_0499; else goto c02_0496;

c02_0499:;

	i8 v6717 = (i8)(intptr_t)(ws+24);
	i8 v6718 = *(i8*)(intptr_t)v6717;
	i8 v6719 = (i8)+0;
	if (v6718==v6719) goto c02_0496; else goto c02_0498;

c02_0498:;

	i8 v6720 = (i8)(intptr_t)(ws+32);
	i8 v6721 = *(i8*)(intptr_t)v6720;
	i8 v6722 = (i8)+0;
	if (v6721==v6722) goto c02_0496; else goto c02_0497;

c02_0496:;

	i8 v6723 = (i8)(intptr_t)(f388_SyntaxError);

	((void(*)(void))(intptr_t)v6723)();

c02_0497:;

c02_048f:;

endsub:;
}
const i1 c02_s01f8[] = { 0x43,0x4f,0x57,0x42,0x45,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f387_PrintFreeMemory(void);
	void f389_ParseArguments(void);
	void f115_InputterOpenfile(i8 /* filename */);
	void f103_EmitterOpenfile(i8 /* filename */);
	void f386_ProcessFile(void);
	void f104_EmitterClosefile(void);
	void f116_InputterClosefile(void);
const i1 c02_s01f9[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f387_PrintFreeMemory(void);

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




































































	i8 v2086 = (i8)+0;
	i8 v2087 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2087 = v2086;







	i2 v2207 = (i2)+1;
	i8 v2208 = (i8)(intptr_t)(ws+3586);
	*(i2*)(intptr_t)v2208 = v2207;




























	i2 v3086 = (i2)+0;
	i8 v3087 = (i8)(intptr_t)(ws+3588);
	*(i2*)(intptr_t)v3087 = v3086;


	i1 v3142 = (i1)+0;
	i8 v3143 = (i8)(intptr_t)(ws+3598);
	*(i1*)(intptr_t)v3143 = v3142;







































	i8 v6724 = (i8)(intptr_t)c02_s01f8;
	i8 v6725 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6725)(v6724);

	i8 v6726 = (i8)(intptr_t)(f387_PrintFreeMemory);

	((void(*)(void))(intptr_t)v6726)();

	i8 v6727 = (i8)(intptr_t)(f389_ParseArguments);

	((void(*)(void))(intptr_t)v6727)();

	i8 v6728 = (i8)(intptr_t)(ws+24);
	i8 v6729 = *(i8*)(intptr_t)v6728;
	i8 v6730 = (i8)(intptr_t)(f115_InputterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v6730)(v6729);

	i8 v6731 = (i8)(intptr_t)(ws+32);
	i8 v6732 = *(i8*)(intptr_t)v6731;
	i8 v6733 = (i8)(intptr_t)(f103_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v6733)(v6732);

	i8 v6734 = (i8)(intptr_t)(f386_ProcessFile);

	((void(*)(void))(intptr_t)v6734)();

	i8 v6735 = (i8)(intptr_t)(f104_EmitterClosefile);

	((void(*)(void))(intptr_t)v6735)();

	i8 v6736 = (i8)(intptr_t)(f116_InputterClosefile);

	((void(*)(void))(intptr_t)v6736)();

	i8 v6737 = (i8)(intptr_t)c02_s01f9;
	i8 v6738 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6738)(v6737);

	i8 v6739 = (i8)(intptr_t)(f387_PrintFreeMemory);

	((void(*)(void))(intptr_t)v6739)();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                      