#include "cowgol.h"
static i8 workspace[0x00a9];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+1264 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+1328 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+1328) = p10; /*buf */
	*(i1*)(intptr_t)(ws+1336) = p9; /*byte */
	*(i8*)(intptr_t)(ws+1344) = p8; /*len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1328) 
,  
*(i1*)(intptr_t)(ws+1336) 
,  
*(i8*)(intptr_t)(ws+1344) 
); 



endsub:;
}

// print_char workspace at ws+1280 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+1280) = p11; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+1280) 
); 



endsub:;
}
	void f8_print_char(i1 /* c */);

// print workspace at ws+1264 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+1264) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+1264);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+1272);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+1272);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+1272);
	i1 v29 = *(i1*)(intptr_t)v28;
	i8 v30 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v30)(v29);

	i8 v31 = (i8)(intptr_t)(ws+1264);
	i8 v32 = *(i8*)(intptr_t)v31;
	i8 v33 = v32+(+1);
	i8 v34 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v34 = v33;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_nl workspace at ws+1240 length ws+0
void f12_print_nl(void) {

	i1 v35 = (i1)+10;
	i8 v36 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v36)(v35);

endsub:;
}

// UIToA workspace at ws+1176 length ws+49
void f13_UIToA(i8* p37 /* ptr */, i8 p38 /* buffer */, i1 p39 /* base */, i4 p40 /* value */) {
	*(i4*)(intptr_t)(ws+1176) = p40; /*value */
	*(i1*)(intptr_t)(ws+1180) = p39; /*base */
	*(i8*)(intptr_t)(ws+1184) = p38; /*buffer */

	i8 v41 = (i8)(intptr_t)(ws+1184);
	i8 v42 = *(i8*)(intptr_t)v41;
	i8 v43 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v43 = v42;

c02_0008:;

	i8 v44 = (i8)(intptr_t)(ws+1176);
	i4 v45 = *(i4*)(intptr_t)v44;
	i8 v46 = (i8)(intptr_t)(ws+1180);
	i1 v47 = *(i1*)(intptr_t)v46;
	i4 v48 = v47;
	i4 v49 = v45%v48;
	i8 v50 = (i8)(intptr_t)(ws+1200);
	*(i4*)(intptr_t)v50 = v49;

	i8 v51 = (i8)(intptr_t)(ws+1176);
	i4 v52 = *(i4*)(intptr_t)v51;
	i8 v53 = (i8)(intptr_t)(ws+1180);
	i1 v54 = *(i1*)(intptr_t)v53;
	i4 v55 = v54;
	i4 v56 = v52/v55;
	i8 v57 = (i8)(intptr_t)(ws+1176);
	*(i4*)(intptr_t)v57 = v56;

	i8 v58 = (i8)(intptr_t)(ws+1200);
	i4 v59 = *(i4*)(intptr_t)v58;
	i4 v60 = (i4)+10;
	if (v59<v60) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v61 = (i8)(intptr_t)(ws+1200);
	i4 v62 = *(i4*)(intptr_t)v61;
	i4 v63 = v62+(+48);
	i8 v64 = (i8)(intptr_t)(ws+1200);
	*(i4*)(intptr_t)v64 = v63;

	goto c02_000a;

c02_000e:;

	i8 v65 = (i8)(intptr_t)(ws+1200);
	i4 v66 = *(i4*)(intptr_t)v65;
	i4 v67 = v66+(+87);
	i8 v68 = (i8)(intptr_t)(ws+1200);
	*(i4*)(intptr_t)v68 = v67;

c02_000a:;

	i8 v69 = (i8)(intptr_t)(ws+1200);
	i4 v70 = *(i4*)(intptr_t)v69;
	i1 v71 = v70;
	i8 v72 = (i8)(intptr_t)(ws+1192);
	i8 v73 = *(i8*)(intptr_t)v72;
	*(i1*)(intptr_t)v73 = v71;

	i8 v74 = (i8)(intptr_t)(ws+1192);
	i8 v75 = *(i8*)(intptr_t)v74;
	i8 v76 = v75+(+1);
	i8 v77 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v77 = v76;

	i8 v78 = (i8)(intptr_t)(ws+1176);
	i4 v79 = *(i4*)(intptr_t)v78;
	i4 v80 = (i4)+0;
	if (v79==v80) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v81 = (i8)(intptr_t)(ws+1184);
	i8 v82 = *(i8*)(intptr_t)v81;
	i8 v83 = (i8)(intptr_t)(ws+1208);
	*(i8*)(intptr_t)v83 = v82;

	i8 v84 = (i8)(intptr_t)(ws+1192);
	i8 v85 = *(i8*)(intptr_t)v84;
	i8 v86 = v85+(-1);
	i8 v87 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v87 = v86;

c02_0016:;

	i8 v88 = (i8)(intptr_t)(ws+1208);
	i8 v89 = *(i8*)(intptr_t)v88;
	i8 v90 = (i8)(intptr_t)(ws+1216);
	i8 v91 = *(i8*)(intptr_t)v90;
	if (v89<v91) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v92 = (i8)(intptr_t)(ws+1208);
	i8 v93 = *(i8*)(intptr_t)v92;
	i1 v94 = *(i1*)(intptr_t)v93;
	i8 v95 = (i8)(intptr_t)(ws+1224);
	*(i1*)(intptr_t)v95 = v94;

	i8 v96 = (i8)(intptr_t)(ws+1216);
	i8 v97 = *(i8*)(intptr_t)v96;
	i1 v98 = *(i1*)(intptr_t)v97;
	i8 v99 = (i8)(intptr_t)(ws+1208);
	i8 v100 = *(i8*)(intptr_t)v99;
	*(i1*)(intptr_t)v100 = v98;

	i8 v101 = (i8)(intptr_t)(ws+1224);
	i1 v102 = *(i1*)(intptr_t)v101;
	i8 v103 = (i8)(intptr_t)(ws+1216);
	i8 v104 = *(i8*)(intptr_t)v103;
	*(i1*)(intptr_t)v104 = v102;

	i8 v105 = (i8)(intptr_t)(ws+1208);
	i8 v106 = *(i8*)(intptr_t)v105;
	i8 v107 = v106+(+1);
	i8 v108 = (i8)(intptr_t)(ws+1208);
	*(i8*)(intptr_t)v108 = v107;

	i8 v109 = (i8)(intptr_t)(ws+1216);
	i8 v110 = *(i8*)(intptr_t)v109;
	i8 v111 = v110+(-1);
	i8 v112 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v112 = v111;

	goto c02_0016;

c02_0019:;

	i1 v113 = (i1)+0;
	i8 v114 = (i8)(intptr_t)(ws+1192);
	i8 v115 = *(i8*)(intptr_t)v114;
	*(i1*)(intptr_t)v115 = v113;

endsub:;
	*p37 = *(i8*)(intptr_t)(ws+1192);
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f11_print(i8 /* ptr */);

// print_i32 workspace at ws+1152 length ws+24
void f15_print_i32(i4 p143 /* value */) {
	*(i4*)(intptr_t)(ws+1152) = p143; /*value */

	i8 v144 = (i8)(intptr_t)(ws+1152);
	i4 v145 = *(i4*)(intptr_t)v144;
	i1 v146 = (i1)+10;
	i8 v147 = (i8)(intptr_t)(ws+1156);
	i8 v148 = (i8)(intptr_t)(f13_UIToA);
	i8 v149;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v148)(&v149, v147, v146, v145);
	i8 v150 = (i8)(intptr_t)(ws+1168);
	*(i8*)(intptr_t)v150 = v149;

	i8 v151 = (i8)(intptr_t)(ws+1156);
	i8 v152 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v152)(v151);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i16 workspace at ws+1144 length ws+2
void f16_print_i16(i2 p153 /* value */) {
	*(i2*)(intptr_t)(ws+1144) = p153; /*value */

	i8 v154 = (i8)(intptr_t)(ws+1144);
	i2 v155 = *(i2*)(intptr_t)v154;
	i4 v156 = v155;
	i8 v157 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v157)(v156);

endsub:;
}

// AToI workspace at ws+1224 length ws+27
void f21_AToI(i4* p231 /* result */, i8* p232 /* ptr */, i8 p233 /* buffer */) {
	*(i8*)(intptr_t)(ws+1224) = p233; /*buffer */

	i1 v234 = (i1)+0;
	i8 v235 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v235 = v234;

	i1 v236 = (i1)+10;
	i8 v237 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v237 = v236;

	i8 v238 = (i8)(intptr_t)(ws+1224);
	i8 v239 = *(i8*)(intptr_t)v238;
	i8 v240 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v240 = v239;

	i4 v241 = (i4)+0;
	i8 v242 = (i8)(intptr_t)(ws+1232);
	*(i4*)(intptr_t)v242 = v241;

	i8 v243 = (i8)(intptr_t)(ws+1240);
	i8 v244 = *(i8*)(intptr_t)v243;
	i1 v245 = *(i1*)(intptr_t)v244;
	i8 v246 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v246 = v245;

	i8 v247 = (i8)(intptr_t)(ws+1250);
	i1 v248 = *(i1*)(intptr_t)v247;
	i1 v249 = (i1)+45;
	if (v248==v249) goto c02_002e; else goto c02_002f;

c02_002e:;

	i1 v250 = (i1)+1;
	i8 v251 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v251 = v250;

	i8 v252 = (i8)(intptr_t)(ws+1240);
	i8 v253 = *(i8*)(intptr_t)v252;
	i8 v254 = v253+(+1);
	i8 v255 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v255 = v254;

	i8 v256 = (i8)(intptr_t)(ws+1240);
	i8 v257 = *(i8*)(intptr_t)v256;
	i1 v258 = *(i1*)(intptr_t)v257;
	i8 v259 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v259 = v258;

c02_002f:;

c02_002b:;

	i8 v260 = (i8)(intptr_t)(ws+1250);
	i1 v261 = *(i1*)(intptr_t)v260;
	i1 v262 = (i1)+48;
	if (v261==v262) goto c02_0033; else goto c02_0034;

c02_0033:;

	i8 v263 = (i8)(intptr_t)(ws+1240);
	i8 v264 = *(i8*)(intptr_t)v263;
	i8 v265 = v264+(+1);
	i1 v266 = *(i1*)(intptr_t)v265;

	if (v266 != +120) goto c02_0036;

	i1 v267 = (i1)+16;
	i8 v268 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v268 = v267;

	goto c02_0035;

c02_0036:;

	if (v266 != +111) goto c02_0037;

	i1 v269 = (i1)+8;
	i8 v270 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v270 = v269;

	goto c02_0035;

c02_0037:;

	if (v266 != +98) goto c02_0038;

	i1 v271 = (i1)+2;
	i8 v272 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v272 = v271;

	goto c02_0035;

c02_0038:;

	if (v266 != +100) goto c02_0039;

	i1 v273 = (i1)+10;
	i8 v274 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v274 = v273;

	goto c02_0035;

c02_0039:;

	i8 v275 = (i8)(intptr_t)(ws+1240);
	i8 v276 = *(i8*)(intptr_t)v275;
	i8 v277 = v276+(-2);
	i8 v278 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v278 = v277;

c02_0035:;


	i8 v279 = (i8)(intptr_t)(ws+1240);
	i8 v280 = *(i8*)(intptr_t)v279;
	i8 v281 = v280+(+2);
	i8 v282 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v282 = v281;

	i8 v283 = (i8)(intptr_t)(ws+1240);
	i8 v284 = *(i8*)(intptr_t)v283;
	i1 v285 = *(i1*)(intptr_t)v284;
	i8 v286 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v286 = v285;

c02_0034:;

c02_0030:;

c02_003a:;

	i8 v287 = (i8)(intptr_t)(ws+1250);
	i1 v288 = *(i1*)(intptr_t)v287;
	i1 v289 = (i1)+97;
	if (v288<v289) goto c02_0040; else goto c02_003f;

c02_003f:;

	i8 v290 = (i8)(intptr_t)(ws+1250);
	i1 v291 = *(i1*)(intptr_t)v290;
	i1 v292 = v291+(-87);
	i8 v293 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v293 = v292;

	goto c02_003c;

c02_0040:;

	i8 v294 = (i8)(intptr_t)(ws+1250);
	i1 v295 = *(i1*)(intptr_t)v294;
	i1 v296 = (i1)+65;
	if (v295<v296) goto c02_0044; else goto c02_0043;

c02_0043:;

	i8 v297 = (i8)(intptr_t)(ws+1250);
	i1 v298 = *(i1*)(intptr_t)v297;
	i1 v299 = v298+(-55);
	i8 v300 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v300 = v299;

	goto c02_003c;

c02_0044:;

	i8 v301 = (i8)(intptr_t)(ws+1250);
	i1 v302 = *(i1*)(intptr_t)v301;
	i1 v303 = v302+(-48);
	i8 v304 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v304 = v303;

c02_003c:;

	i8 v305 = (i8)(intptr_t)(ws+1250);
	i1 v306 = *(i1*)(intptr_t)v305;
	i8 v307 = (i8)(intptr_t)(ws+1249);
	i1 v308 = *(i1*)(intptr_t)v307;
	if (v306<v308) goto c02_0049; else goto c02_0048;

c02_0048:;

	goto c02_003b;

c02_0049:;

c02_0045:;

	i8 v309 = (i8)(intptr_t)(ws+1232);
	i4 v310 = *(i4*)(intptr_t)v309;
	i8 v311 = (i8)(intptr_t)(ws+1249);
	i1 v312 = *(i1*)(intptr_t)v311;
	i4 v313 = v312;
	i4 v314 = v310*v313;
	i8 v315 = (i8)(intptr_t)(ws+1250);
	i1 v316 = *(i1*)(intptr_t)v315;
	i4 v317 = v316;
	i4 v318 = v314+v317;
	i8 v319 = (i8)(intptr_t)(ws+1232);
	*(i4*)(intptr_t)v319 = v318;

	i8 v320 = (i8)(intptr_t)(ws+1240);
	i8 v321 = *(i8*)(intptr_t)v320;
	i8 v322 = v321+(+1);
	i8 v323 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v323 = v322;

	i8 v324 = (i8)(intptr_t)(ws+1240);
	i8 v325 = *(i8*)(intptr_t)v324;
	i1 v326 = *(i1*)(intptr_t)v325;
	i8 v327 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v327 = v326;

	goto c02_003a;

c02_003b:;

	i8 v328 = (i8)(intptr_t)(ws+1248);
	i1 v329 = *(i1*)(intptr_t)v328;
	i1 v330 = (i1)+0;
	if (v329==v330) goto c02_004e; else goto c02_004d;

c02_004d:;

	i8 v331 = (i8)(intptr_t)(ws+1232);
	i4 v332 = *(i4*)(intptr_t)v331;
	i4 v333 = -v332;
	i8 v334 = (i8)(intptr_t)(ws+1232);
	*(i4*)(intptr_t)v334 = v333;

c02_004e:;

c02_004a:;

endsub:;
	*p232 = *(i8*)(intptr_t)(ws+1240);
	*p231 = *(i4*)(intptr_t)(ws+1232);
}

// ArgvInit workspace at ws+1144 length ws+0
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

// ArgvNext workspace at ws+1144 length ws+8
void f24_ArgvNext(i8* p347 /* arg */) {

	i8 v348 = (i8)(intptr_t)(ws+16);
	i8 v349 = *(i8*)(intptr_t)v348;
	i8 v350 = (i8)+0;
	if (v349==v350) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v351 = (i8)+0;
	i8 v352 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v352 = v351;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v353 = (i8)(intptr_t)(ws+16);
	i8 v354 = *(i8*)(intptr_t)v353;
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v356 = v355;

	i8 v357 = (i8)(intptr_t)(ws+1144);
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
	*p347 = *(i8*)(intptr_t)(ws+1144);
}

// StrCmp workspace at ws+1224 length ws+17
void f25_StrCmp(i1* p366 /* res */, i8 p367 /* s2 */, i8 p368 /* s1 */) {
	*(i8*)(intptr_t)(ws+1224) = p368; /*s1 */
	*(i8*)(intptr_t)(ws+1232) = p367; /*s2 */

c02_0059:;

	i8 v369 = (i8)(intptr_t)(ws+1224);
	i8 v370 = *(i8*)(intptr_t)v369;
	i1 v371 = *(i1*)(intptr_t)v370;
	i8 v372 = (i8)(intptr_t)(ws+1232);
	i8 v373 = *(i8*)(intptr_t)v372;
	i1 v374 = *(i1*)(intptr_t)v373;
	i1 v375 = v371-v374;
	i8 v376 = (i8)(intptr_t)(ws+1240);
	*(i1*)(intptr_t)v376 = v375;

	i8 v377 = (i8)(intptr_t)(ws+1240);
	i1 v378 = *(i1*)(intptr_t)v377;
	i1 v379 = (i1)+0;
	if (v378==v379) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v380 = (i8)(intptr_t)(ws+1224);
	i8 v381 = *(i8*)(intptr_t)v380;
	i1 v382 = *(i1*)(intptr_t)v381;
	i1 v383 = (i1)+0;
	if (v382==v383) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v384 = (i8)(intptr_t)(ws+1224);
	i8 v385 = *(i8*)(intptr_t)v384;
	i8 v386 = v385+(+1);
	i8 v387 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v387 = v386;

	i8 v388 = (i8)(intptr_t)(ws+1232);
	i8 v389 = *(i8*)(intptr_t)v388;
	i8 v390 = v389+(+1);
	i8 v391 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v391 = v390;

	goto c02_0059;

c02_005a:;

endsub:;
	*p366 = *(i1*)(intptr_t)(ws+1240);
}

// RawAlloc workspace at ws+1264 length ws+16
void f31_RawAlloc(i8* p503 /* block */, i8 p504 /* length */) {
	*(i8*)(intptr_t)(ws+1264) = p504; /*length */


	
*(i8*)(intptr_t)(ws+1272) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+1264) 
); 



endsub:;
	*p503 = *(i8*)(intptr_t)(ws+1272);
}
	void f31_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// Alloc workspace at ws+1248 length ws+16
void f32_Alloc(i8* p505 /* block */, i8 p506 /* length */) {
	*(i8*)(intptr_t)(ws+1248) = p506; /*length */

	i8 v507 = (i8)(intptr_t)(ws+1248);
	i8 v508 = *(i8*)(intptr_t)v507;
	i8 v509 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v510;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v509)(&v510, v508);
	i8 v511 = (i8)(intptr_t)(ws+1256);
	*(i8*)(intptr_t)v511 = v510;

	i8 v512 = (i8)(intptr_t)(ws+1256);
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
	*p505 = *(i8*)(intptr_t)(ws+1256);
}

// Free workspace at ws+1256 length ws+8
void f33_Free(i8 p518 /* block */) {
	*(i8*)(intptr_t)(ws+1256) = p518; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1256) 
); 



endsub:;
}

// StrDup workspace at ws+1224 length ws+16
void f34_StrDup(i8* p519 /* sout */, i8 p520 /* s */) {
	*(i8*)(intptr_t)(ws+1224) = p520; /*s */


	
*(i8*)(intptr_t)(ws+1232) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1224) 
); 



endsub:;
	*p519 = *(i8*)(intptr_t)(ws+1232);
}

// GetFreeMemory workspace at ws+1144 length ws+8
void f37_GetFreeMemory(i8* p521 /* i */) {

	i8 v522 = (i8)+0;
	i8 v523 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v523 = v522;

endsub:;
	*p521 = *(i8*)(intptr_t)(ws+1144);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_blockin workspace at ws+1296 length ws+28
void f38_fcb_i_blockin(i8 p524 /* fcb */) {
	*(i8*)(intptr_t)(ws+1296) = p524; /*fcb */

	i8 v525 = (i8)(intptr_t)(ws+1296);
	i8 v526 = *(i8*)(intptr_t)v525;
	i8 v527 = v526+(+12);
	i1 v528 = (i1)+0;
	i8 v529 = (i8)+512;
	i8 v530 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v530)(v529, v528, v527);

	i8 v531 = (i8)(intptr_t)(ws+1296);
	i8 v532 = *(i8*)(intptr_t)v531;
	i4 v533 = *(i4*)(intptr_t)v532;
	i8 v534 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v534 = v533;

	i8 v535 = (i8)(intptr_t)(ws+1296);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+12);
	i8 v538 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v538 = v537;

	i8 v539 = (i8)(intptr_t)(ws+1296);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+8);
	i4 v542 = *(i4*)(intptr_t)v541;
	i1 v543 = (i1)+9;
	i4 v544 = ((i4)v542)<<v543;
	i8 v545 = (i8)(intptr_t)(ws+1320);
	*(i4*)(intptr_t)v545 = v544;


	
pread( 
*(i4*)(intptr_t)(ws+1304) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1312) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1320) 
); 



	i1 v546 = (i1)+0;
	i8 v547 = (i8)(intptr_t)(ws+1296);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+6);
	*(i1*)(intptr_t)v549 = v546;

endsub:;
}

// fcb_i_blockout workspace at ws+1296 length ws+28
void f39_fcb_i_blockout(i8 p550 /* fcb */) {
	*(i8*)(intptr_t)(ws+1296) = p550; /*fcb */

	i8 v551 = (i8)(intptr_t)(ws+1296);
	i8 v552 = *(i8*)(intptr_t)v551;
	i8 v553 = v552+(+6);
	i1 v554 = *(i1*)(intptr_t)v553;
	i1 v555 = (i1)+0;
	if (v554==v555) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v556 = (i8)(intptr_t)(ws+1296);
	i8 v557 = *(i8*)(intptr_t)v556;
	i4 v558 = *(i4*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+1296);
	i8 v561 = *(i8*)(intptr_t)v560;
	i8 v562 = v561+(+12);
	i8 v563 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+1296);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = v565+(+8);
	i4 v567 = *(i4*)(intptr_t)v566;
	i1 v568 = (i1)+9;
	i4 v569 = ((i4)v567)<<v568;
	i8 v570 = (i8)(intptr_t)(ws+1320);
	*(i4*)(intptr_t)v570 = v569;


	
pwrite( 
*(i4*)(intptr_t)(ws+1304) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1312) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1320) 
); 



	i1 v571 = (i1)+0;
	i8 v572 = (i8)(intptr_t)(ws+1296);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+6);
	*(i1*)(intptr_t)v574 = v571;

c02_0092:;

c02_008e:;

endsub:;
}
	void f39_fcb_i_blockout(i8 /* fcb */);
	void f38_fcb_i_blockin(i8 /* fcb */);

// fcb_i_changeblock workspace at ws+1280 length ws+12
void f40_fcb_i_changeblock(i4 p575 /* newblock */, i8 p576 /* fcb */) {
	*(i8*)(intptr_t)(ws+1280) = p576; /*fcb */
	*(i4*)(intptr_t)(ws+1288) = p575; /*newblock */

	i8 v577 = (i8)(intptr_t)(ws+1288);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+1280);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = v580+(+8);
	i4 v582 = *(i4*)(intptr_t)v581;
	if (v578==v582) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v583 = (i8)(intptr_t)(ws+1280);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v585)(v584);

	i8 v586 = (i8)(intptr_t)(ws+1288);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+1280);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+8);
	*(i4*)(intptr_t)v590 = v587;

	i8 v591 = (i8)(intptr_t)(ws+1280);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = (i8)(intptr_t)(f38_fcb_i_blockin);

	((void(*)(i8 /* fcb */))(intptr_t)v593)(v592);

c02_0097:;

c02_0093:;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_open workspace at ws+1176 length ws+28
void f41_fcb_i_open(i1* p594 /* errno */, i4 p595 /* flags */, i8 p596 /* filename */, i8 p597 /* fcb */) {
	*(i8*)(intptr_t)(ws+1176) = p597; /*fcb */
	*(i8*)(intptr_t)(ws+1184) = p596; /*filename */
	*(i4*)(intptr_t)(ws+1192) = p595; /*flags */

	i8 v598 = (i8)(intptr_t)(ws+1176);
	i8 v599 = *(i8*)(intptr_t)v598;
	i1 v600 = (i1)+0;
	i8 v601 = (i8)+524;
	i8 v602 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v602)(v601, v600, v599);

	i2 v603 = (i2)+511;
	i8 v604 = (i8)(intptr_t)(ws+1176);
	i8 v605 = *(i8*)(intptr_t)v604;
	i8 v606 = v605+(+4);
	*(i2*)(intptr_t)v606 = v603;

	i4 v607 = (i4)-1;
	i8 v608 = (i8)(intptr_t)(ws+1176);
	i8 v609 = *(i8*)(intptr_t)v608;
	i8 v610 = v609+(+8);
	*(i4*)(intptr_t)v610 = v607;


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+1200) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1184) 
,  
*(i4*)(intptr_t)(ws+1192) 
,  
(+438)
); 



	i8 v611 = (i8)(intptr_t)(ws+1200);
	i4 v612 = *(i4*)(intptr_t)v611;
	i8 v613 = (i8)(intptr_t)(ws+1176);
	i8 v614 = *(i8*)(intptr_t)v613;
	*(i4*)(intptr_t)v614 = v612;

	i8 v615 = (i8)(intptr_t)(ws+1200);
	i4 v616 = *(i4*)(intptr_t)v615;
	i4 v617 = (i4)+0;
	if ((s4)v616<(s4)v617) goto c02_009b; else goto c02_009c;

c02_009b:;


	
*(i1*)(intptr_t)(ws+1196) 
 = errno; 



	goto c02_0098;

c02_009c:;

	i1 v618 = (i1)+0;
	i8 v619 = (i8)(intptr_t)(ws+1196);
	*(i1*)(intptr_t)v619 = v618;

c02_0098:;

endsub:;
	*p594 = *(i1*)(intptr_t)(ws+1196);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+1144 length ws+17
void f42_FCBOpenIn(i1* p620 /* errno */, i8 p621 /* filename */, i8 p622 /* fcb */) {
	*(i8*)(intptr_t)(ws+1144) = p622; /*fcb */
	*(i8*)(intptr_t)(ws+1152) = p621; /*filename */

	i8 v623 = (i8)(intptr_t)(ws+1144);
	i8 v624 = *(i8*)(intptr_t)v623;
	i8 v625 = (i8)(intptr_t)(ws+1152);
	i8 v626 = *(i8*)(intptr_t)v625;
	i4 v627 = (i4)+0;
	i8 v628 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v629;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v628)(&v629, v627, v626, v624);
	i8 v630 = (i8)(intptr_t)(ws+1160);
	*(i1*)(intptr_t)v630 = v629;

endsub:;
	*p620 = *(i1*)(intptr_t)(ws+1160);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+1152 length ws+17
void f44_FCBOpenOut(i1* p642 /* errno */, i8 p643 /* filename */, i8 p644 /* fcb */) {
	*(i8*)(intptr_t)(ws+1152) = p644; /*fcb */
	*(i8*)(intptr_t)(ws+1160) = p643; /*filename */

	i8 v645 = (i8)(intptr_t)(ws+1152);
	i8 v646 = *(i8*)(intptr_t)v645;
	i8 v647 = (i8)(intptr_t)(ws+1160);
	i8 v648 = *(i8*)(intptr_t)v647;
	i4 v649 = (i4)+578;
	i8 v650 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v651;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v650)(&v651, v649, v648, v646);
	i8 v652 = (i8)(intptr_t)(ws+1168);
	*(i1*)(intptr_t)v652 = v651;

endsub:;
	*p642 = *(i1*)(intptr_t)(ws+1168);
}
	void f39_fcb_i_blockout(i8 /* fcb */);

// FCBClose workspace at ws+1144 length ws+16
void f45_FCBClose(i1* p653 /* errno */, i8 p654 /* fcb */) {
	*(i8*)(intptr_t)(ws+1144) = p654; /*fcb */

	i8 v655 = (i8)(intptr_t)(ws+1144);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v657)(v656);

	i8 v658 = (i8)(intptr_t)(ws+1144);
	i8 v659 = *(i8*)(intptr_t)v658;
	i4 v660 = *(i4*)(intptr_t)v659;
	i8 v661 = (i8)(intptr_t)(ws+1156);
	*(i4*)(intptr_t)v661 = v660;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+1156) 
); 


	
*(i1*)(intptr_t)(ws+1152) 
 = errno; 



endsub:;
	*p653 = *(i1*)(intptr_t)(ws+1152);
}
	void f40_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// fcb_i_nextchar workspace at ws+1272 length ws+8
void f49_fcb_i_nextchar(i8 p718 /* fcb */) {
	*(i8*)(intptr_t)(ws+1272) = p718; /*fcb */

	i8 v719 = (i8)(intptr_t)(ws+1272);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = v720+(+4);
	i2 v722 = *(i2*)(intptr_t)v721;
	i2 v723 = v722+(+1);
	i8 v724 = (i8)(intptr_t)(ws+1272);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+4);
	*(i2*)(intptr_t)v726 = v723;

	i8 v727 = (i8)(intptr_t)(ws+1272);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i2 v731 = (i2)+512;
	if (v730==v731) goto c02_00a0; else goto c02_00a1;

c02_00a0:;

	i8 v732 = (i8)(intptr_t)(ws+1272);
	i8 v733 = *(i8*)(intptr_t)v732;
	i8 v734 = (i8)(intptr_t)(ws+1272);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+8);
	i4 v737 = *(i4*)(intptr_t)v736;
	i4 v738 = v737+(+1);
	i8 v739 = (i8)(intptr_t)(f40_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v739)(v738, v733);

	i2 v740 = (i2)+0;
	i8 v741 = (i8)(intptr_t)(ws+1272);
	i8 v742 = *(i8*)(intptr_t)v741;
	i8 v743 = v742+(+4);
	*(i2*)(intptr_t)v743 = v740;

c02_00a1:;

c02_009d:;

endsub:;
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBGetChar workspace at ws+1232 length ws+9
void f50_FCBGetChar(i1* p744 /* c */, i8 p745 /* fcb */) {
	*(i8*)(intptr_t)(ws+1232) = p745; /*fcb */

	i8 v746 = (i8)(intptr_t)(ws+1232);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v748)(v747);

	i8 v749 = (i8)(intptr_t)(ws+1232);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = v750+(+12);
	i8 v752 = (i8)(intptr_t)(ws+1232);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+4);
	i2 v755 = *(i2*)(intptr_t)v754;
	i8 v756 = v755;
	i8 v757 = v751+v756;
	i1 v758 = *(i1*)(intptr_t)v757;
	i8 v759 = (i8)(intptr_t)(ws+1240);
	*(i1*)(intptr_t)v759 = v758;

endsub:;
	*p744 = *(i1*)(intptr_t)(ws+1240);
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBPutChar workspace at ws+1256 length ws+9
void f51_FCBPutChar(i1 p760 /* c */, i8 p761 /* fcb */) {
	*(i8*)(intptr_t)(ws+1256) = p761; /*fcb */
	*(i1*)(intptr_t)(ws+1264) = p760; /*c */

	i8 v762 = (i8)(intptr_t)(ws+1256);
	i8 v763 = *(i8*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v764)(v763);

	i8 v765 = (i8)(intptr_t)(ws+1264);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+1256);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+1256);
	i8 v771 = *(i8*)(intptr_t)v770;
	i8 v772 = v771+(+4);
	i2 v773 = *(i2*)(intptr_t)v772;
	i8 v774 = v773;
	i8 v775 = v769+v774;
	*(i1*)(intptr_t)v775 = v766;

	i1 v776 = (i1)+1;
	i8 v777 = (i8)(intptr_t)(ws+1256);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+6);
	*(i1*)(intptr_t)v779 = v776;

endsub:;
}
const i1 c02_s0001[] = { 0x43,0x4f,0x57,0x57,0x52,0x41,0x50,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f37_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0002[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s0003[] = { 0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+1144 length ws+0
void f55_SyntaxError(void) {

	i8 v852 = (i8)(intptr_t)c02_s0003;
	i8 v853 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v853)(v852);

	i8 v854 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v854)();

endsub:;
}
const i1 c02_s0004[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// FatalError workspace at ws+1232 length ws+8
void f56_FatalError(i8 p855 /* s */) {
	*(i8*)(intptr_t)(ws+1232) = p855; /*s */

	i8 v856 = (i8)(intptr_t)c02_s0004;
	i8 v857 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v857)(v856);

	i8 v858 = (i8)(intptr_t)(ws+1232);
	i8 v859 = *(i8*)(intptr_t)v858;
	i8 v860 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v860)(v859);

	i8 v861 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v861)();

	i8 v862 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v862)();

endsub:;
}
	void f32_Alloc(i8* /* block */, i8 /* length */);

// E_b8 workspace at ws+1232 length ws+16
void f57_E_b8(i1 p863 /* byte */) {
	*(i1*)(intptr_t)(ws+1232) = p863; /*byte */

	i8 v864 = (i8)(intptr_t)(ws+1088);
	i8 v865 = *(i8*)(intptr_t)v864;
	i8 v866 = (i8)+0;
	if (v865==v866) goto c02_00b9; else goto c02_00b8;

c02_00b8:;

	i8 v867 = (i8)(intptr_t)(ws+1088);
	i8 v868 = *(i8*)(intptr_t)v867;
	i8 v869 = v868+(+16);
	i8 v870 = *(i8*)(intptr_t)v869;
	i8 v871 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v871 = v870;

	i8 v872 = (i8)(intptr_t)(ws+1240);
	i8 v873 = *(i8*)(intptr_t)v872;
	i8 v874 = v873+(+255);
	i1 v875 = *(i1*)(intptr_t)v874;
	i1 v876 = (i1)+255;
	if (v875==v876) goto c02_00bd; else goto c02_00be;

c02_00bd:;

	i8 v877 = (i8)+264;
	i8 v878 = (i8)(intptr_t)(f32_Alloc);
	i8 v879;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v878)(&v879, v877);
	i8 v880 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v880 = v879;

	i8 v881 = (i8)(intptr_t)(ws+1240);
	i8 v882 = *(i8*)(intptr_t)v881;
	i8 v883 = (i8)(intptr_t)(ws+1088);
	i8 v884 = *(i8*)(intptr_t)v883;
	i8 v885 = v884+(+16);
	i8 v886 = *(i8*)(intptr_t)v885;
	i8 v887 = v886+(+256);
	*(i8*)(intptr_t)v887 = v882;

	i8 v888 = (i8)(intptr_t)(ws+1240);
	i8 v889 = *(i8*)(intptr_t)v888;
	i8 v890 = (i8)(intptr_t)(ws+1088);
	i8 v891 = *(i8*)(intptr_t)v890;
	i8 v892 = v891+(+16);
	*(i8*)(intptr_t)v892 = v889;

c02_00be:;

c02_00ba:;

	i8 v893 = (i8)(intptr_t)(ws+1232);
	i1 v894 = *(i1*)(intptr_t)v893;
	i8 v895 = (i8)(intptr_t)(ws+1240);
	i8 v896 = *(i8*)(intptr_t)v895;
	i8 v897 = (i8)(intptr_t)(ws+1240);
	i8 v898 = *(i8*)(intptr_t)v897;
	i8 v899 = v898+(+255);
	i1 v900 = *(i1*)(intptr_t)v899;
	i8 v901 = v900;
	i8 v902 = v896+v901;
	*(i1*)(intptr_t)v902 = v894;

	i8 v903 = (i8)(intptr_t)(ws+1240);
	i8 v904 = *(i8*)(intptr_t)v903;
	i8 v905 = v904+(+255);
	i1 v906 = *(i1*)(intptr_t)v905;
	i1 v907 = v906+(+1);
	i8 v908 = (i8)(intptr_t)(ws+1240);
	i8 v909 = *(i8*)(intptr_t)v908;
	i8 v910 = v909+(+255);
	*(i1*)(intptr_t)v910 = v907;

	i8 v911 = (i8)(intptr_t)(ws+1088);
	i8 v912 = *(i8*)(intptr_t)v911;
	i8 v913 = v912+(+24);
	i2 v914 = *(i2*)(intptr_t)v913;
	i2 v915 = v914+(+1);
	i8 v916 = (i8)(intptr_t)(ws+1088);
	i8 v917 = *(i8*)(intptr_t)v916;
	i8 v918 = v917+(+24);
	*(i2*)(intptr_t)v918 = v915;

c02_00b9:;

c02_00b5:;

endsub:;
}
	void f57_E_b8(i1 /* byte */);

// E workspace at ws+1216 length ws+9
void f58_E(i8 p919 /* text */) {
	*(i8*)(intptr_t)(ws+1216) = p919; /*text */

c02_00bf:;

	i8 v920 = (i8)(intptr_t)(ws+1216);
	i8 v921 = *(i8*)(intptr_t)v920;
	i1 v922 = *(i1*)(intptr_t)v921;
	i8 v923 = (i8)(intptr_t)(ws+1224);
	*(i1*)(intptr_t)v923 = v922;

	i8 v924 = (i8)(intptr_t)(ws+1216);
	i8 v925 = *(i8*)(intptr_t)v924;
	i8 v926 = v925+(+1);
	i8 v927 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v927 = v926;

	i8 v928 = (i8)(intptr_t)(ws+1224);
	i1 v929 = *(i1*)(intptr_t)v928;
	i1 v930 = (i1)+0;
	if (v929==v930) goto c02_00c4; else goto c02_00c5;

c02_00c4:;

	goto c02_00c0;

c02_00c5:;

c02_00c1:;

	i8 v931 = (i8)(intptr_t)(ws+1224);
	i1 v932 = *(i1*)(intptr_t)v931;
	i8 v933 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v933)(v932);

	goto c02_00bf;

c02_00c0:;

endsub:;
}
	void f57_E_b8(i1 /* byte */);
	void f57_E_b8(i1 /* byte */);

// E_b16 workspace at ws+1216 length ws+2
void f59_E_b16(i2 p934 /* word */) {
	*(i2*)(intptr_t)(ws+1216) = p934; /*word */

	i8 v935 = (i8)(intptr_t)(ws+1216);
	i2 v936 = *(i2*)(intptr_t)v935;
	i1 v937 = v936;
	i8 v938 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v938)(v937);

	i8 v939 = (i8)(intptr_t)(ws+1216);
	i2 v940 = *(i2*)(intptr_t)v939;
	i1 v941 = (i1)+8;
	i2 v942 = ((i2)v940)>>v941;
	i1 v943 = v942;
	i8 v944 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v944)(v943);

endsub:;
}
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f32_Alloc(i8* /* block */, i8 /* length */);

// EmitterPushChunk workspace at ws+1216 length ws+8
void f61_EmitterPushChunk(void) {

	i8 v956 = (i8)+26;
	i8 v957 = (i8)(intptr_t)(f32_Alloc);
	i8 v958;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v957)(&v958, v956);
	i8 v959 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v959 = v958;

	i8 v960 = (i8)+264;
	i8 v961 = (i8)(intptr_t)(f32_Alloc);
	i8 v962;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v961)(&v962, v960);
	i8 v963 = (i8)(intptr_t)(ws+1216);
	i8 v964 = *(i8*)(intptr_t)v963;
	i8 v965 = v964+(+16);
	*(i8*)(intptr_t)v965 = v962;

	i8 v966 = (i8)(intptr_t)(ws+1216);
	i8 v967 = *(i8*)(intptr_t)v966;
	i8 v968 = v967+(+16);
	i8 v969 = *(i8*)(intptr_t)v968;
	i8 v970 = (i8)(intptr_t)(ws+1216);
	i8 v971 = *(i8*)(intptr_t)v970;
	i8 v972 = v971+(+8);
	*(i8*)(intptr_t)v972 = v969;

	i8 v973 = (i8)(intptr_t)(ws+1088);
	i8 v974 = *(i8*)(intptr_t)v973;
	i8 v975 = (i8)(intptr_t)(ws+1216);
	i8 v976 = *(i8*)(intptr_t)v975;
	*(i8*)(intptr_t)v976 = v974;

	i8 v977 = (i8)(intptr_t)(ws+1216);
	i8 v978 = *(i8*)(intptr_t)v977;
	i8 v979 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v979 = v978;

endsub:;
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f33_Free(i8 /* block */);
	void f33_Free(i8 /* block */);

// EmitterPopChunk workspace at ws+1216 length ws+40
void f62_EmitterPopChunk(i1 p980 /* type */) {
	*(i1*)(intptr_t)(ws+1216) = p980; /*type */

	i8 v981 = (i8)(intptr_t)(ws+564);
	i8 v982 = (i8)(intptr_t)(ws+1216);
	i1 v983 = *(i1*)(intptr_t)v982;
	i8 v984 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v984)(v983, v981);

	i8 v985 = (i8)(intptr_t)(ws+1088);
	i8 v986 = *(i8*)(intptr_t)v985;
	i8 v987 = v986+(+24);
	i2 v988 = *(i2*)(intptr_t)v987;
	i8 v989 = (i8)(intptr_t)(ws+1218);
	*(i2*)(intptr_t)v989 = v988;

	i8 v990 = (i8)(intptr_t)(ws+564);
	i8 v991 = (i8)(intptr_t)(ws+1218);
	i2 v992 = *(i2*)(intptr_t)v991;
	i1 v993 = v992;
	i8 v994 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v994)(v993, v990);

	i8 v995 = (i8)(intptr_t)(ws+564);
	i8 v996 = (i8)(intptr_t)(ws+1218);
	i2 v997 = *(i2*)(intptr_t)v996;
	i1 v998 = (i1)+8;
	i2 v999 = ((i2)v997)>>v998;
	i1 v1000 = v999;
	i8 v1001 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1001)(v1000, v995);

	i8 v1002 = (i8)(intptr_t)(ws+1088);
	i8 v1003 = *(i8*)(intptr_t)v1002;
	i8 v1004 = v1003+(+8);
	i8 v1005 = *(i8*)(intptr_t)v1004;
	i8 v1006 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1006 = v1005;

c02_00c8:;

	i8 v1007 = (i8)(intptr_t)(ws+1224);
	i8 v1008 = *(i8*)(intptr_t)v1007;
	i8 v1009 = (i8)+0;
	if (v1008==v1009) goto c02_00cb; else goto c02_00ca;

c02_00ca:;

	i1 v1010 = (i1)+0;
	i8 v1011 = (i8)(intptr_t)(ws+1232);
	*(i1*)(intptr_t)v1011 = v1010;

c02_00ce:;

	i8 v1012 = (i8)(intptr_t)(ws+1232);
	i1 v1013 = *(i1*)(intptr_t)v1012;
	i8 v1014 = (i8)(intptr_t)(ws+1224);
	i8 v1015 = *(i8*)(intptr_t)v1014;
	i8 v1016 = v1015+(+255);
	i1 v1017 = *(i1*)(intptr_t)v1016;
	if (v1013==v1017) goto c02_00d1; else goto c02_00d0;

c02_00d0:;

	i8 v1018 = (i8)(intptr_t)(ws+564);
	i8 v1019 = (i8)(intptr_t)(ws+1224);
	i8 v1020 = *(i8*)(intptr_t)v1019;
	i8 v1021 = (i8)(intptr_t)(ws+1232);
	i1 v1022 = *(i1*)(intptr_t)v1021;
	i8 v1023 = v1022;
	i8 v1024 = v1020+v1023;
	i1 v1025 = *(i1*)(intptr_t)v1024;
	i8 v1026 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1026)(v1025, v1018);

	i8 v1027 = (i8)(intptr_t)(ws+1232);
	i1 v1028 = *(i1*)(intptr_t)v1027;
	i1 v1029 = v1028+(+1);
	i8 v1030 = (i8)(intptr_t)(ws+1232);
	*(i1*)(intptr_t)v1030 = v1029;

	goto c02_00ce;

c02_00d1:;

	i8 v1031 = (i8)(intptr_t)(ws+1224);
	i8 v1032 = *(i8*)(intptr_t)v1031;
	i8 v1033 = v1032+(+256);
	i8 v1034 = *(i8*)(intptr_t)v1033;
	i8 v1035 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1035 = v1034;

	i8 v1036 = (i8)(intptr_t)(ws+1224);
	i8 v1037 = *(i8*)(intptr_t)v1036;
	i8 v1038 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1038)(v1037);

	i8 v1039 = (i8)(intptr_t)(ws+1240);
	i8 v1040 = *(i8*)(intptr_t)v1039;
	i8 v1041 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1041 = v1040;

	goto c02_00c8;

c02_00cb:;

	i8 v1042 = (i8)(intptr_t)(ws+1088);
	i8 v1043 = *(i8*)(intptr_t)v1042;
	i8 v1044 = *(i8*)(intptr_t)v1043;
	i8 v1045 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1045 = v1044;

	i8 v1046 = (i8)(intptr_t)(ws+1088);
	i8 v1047 = *(i8*)(intptr_t)v1046;
	i8 v1048 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1048)(v1047);

	i8 v1049 = (i8)(intptr_t)(ws+1248);
	i8 v1050 = *(i8*)(intptr_t)v1049;
	i8 v1051 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v1051 = v1050;

endsub:;
}
	void f44_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f56_FatalError(i8 /* s */);

// EmitterOpenfile workspace at ws+1144 length ws+8
void f63_EmitterOpenfile(i8 p1052 /* filename */) {
	*(i8*)(intptr_t)(ws+1144) = p1052; /*filename */

	i8 v1053 = (i8)(intptr_t)(ws+564);
	i8 v1054 = (i8)(intptr_t)(ws+1144);
	i8 v1055 = *(i8*)(intptr_t)v1054;
	i8 v1056 = (i8)(intptr_t)(f44_FCBOpenOut);
	i1 v1057;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1056)(&v1057, v1055, v1053);
	i1 v1058 = (i1)+0;
	if (v1057==v1058) goto c02_00d6; else goto c02_00d5;

c02_00d5:;

	i8 v1059 = (i8)(intptr_t)c02_s0005;
	i8 v1060 = (i8)(intptr_t)(f56_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1060)(v1059);

c02_00d6:;

c02_00d2:;

endsub:;
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f45_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s0006[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f56_FatalError(i8 /* s */);

// EmitterClosefile workspace at ws+1144 length ws+0
void f64_EmitterClosefile(void) {

	i8 v1061 = (i8)(intptr_t)(ws+564);
	i1 v1062 = (i1)+69;
	i8 v1063 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1063)(v1062, v1061);

	i8 v1064 = (i8)(intptr_t)(ws+564);
	i1 v1065 = (i1)+0;
	i8 v1066 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1066)(v1065, v1064);

	i8 v1067 = (i8)(intptr_t)(ws+564);
	i1 v1068 = (i1)+0;
	i8 v1069 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1069)(v1068, v1067);

	i8 v1070 = (i8)(intptr_t)(ws+564);
	i8 v1071 = (i8)(intptr_t)(f45_FCBClose);
	i1 v1072;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1071)(&v1072, v1070);
	i1 v1073 = (i1)+0;
	if (v1072==v1073) goto c02_00db; else goto c02_00da;

c02_00da:;

	i8 v1074 = (i8)(intptr_t)c02_s0006;
	i8 v1075 = (i8)(intptr_t)(f56_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1075)(v1074);

c02_00db:;

c02_00d7:;

endsub:;
}
	void f61_EmitterPushChunk(void);
	void f59_E_b16(i2 /* word */);
	void f58_E(i8 /* text */);
	void f62_EmitterPopChunk(i1 /* type */);

// EmitterDeclareSubroutine workspace at ws+1192 length ws+16
void f65_EmitterDeclareSubroutine(i8 p1076 /* name */, i2 p1077 /* id */) {
	*(i2*)(intptr_t)(ws+1192) = p1077; /*id */
	*(i8*)(intptr_t)(ws+1200) = p1076; /*name */

	i8 v1078 = (i8)(intptr_t)(f61_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1078)();

	i8 v1079 = (i8)(intptr_t)(ws+1192);
	i2 v1080 = *(i2*)(intptr_t)v1079;
	i8 v1081 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1081)(v1080);

	i8 v1082 = (i8)(intptr_t)(ws+1200);
	i8 v1083 = *(i8*)(intptr_t)v1082;
	i8 v1084 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1084)(v1083);

	i1 v1085 = (i1)+78;
	i8 v1086 = (i8)(intptr_t)(f62_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1086)(v1085);

endsub:;
}
	void f61_EmitterPushChunk(void);
	void f59_E_b16(i2 /* word */);
	void f58_E(i8 /* text */);
	void f62_EmitterPopChunk(i1 /* type */);

// EmitterDeclareExternal workspace at ws+1200 length ws+16
void f66_EmitterDeclareExternal(i8 p1087 /* name */, i2 p1088 /* id */) {
	*(i2*)(intptr_t)(ws+1200) = p1088; /*id */
	*(i8*)(intptr_t)(ws+1208) = p1087; /*name */

	i8 v1089 = (i8)(intptr_t)(f61_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1089)();

	i8 v1090 = (i8)(intptr_t)(ws+1200);
	i2 v1091 = *(i2*)(intptr_t)v1090;
	i8 v1092 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1092)(v1091);

	i8 v1093 = (i8)(intptr_t)(ws+1208);
	i8 v1094 = *(i8*)(intptr_t)v1093;
	i8 v1095 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1095)(v1094);

	i1 v1096 = (i1)+88;
	i8 v1097 = (i8)(intptr_t)(f62_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1097)(v1096);

endsub:;
}
	void f61_EmitterPushChunk(void);
	void f59_E_b16(i2 /* word */);
	void f59_E_b16(i2 /* word */);
	void f62_EmitterPopChunk(i1 /* type */);

// EmitterReferenceSubroutine workspace at ws+1208 length ws+4
void f67_EmitterReferenceSubroutine(i2 p1098 /* used */, i2 p1099 /* user */) {
	*(i2*)(intptr_t)(ws+1208) = p1099; /*user */
	*(i2*)(intptr_t)(ws+1210) = p1098; /*used */

	i8 v1100 = (i8)(intptr_t)(ws+1208);
	i2 v1101 = *(i2*)(intptr_t)v1100;
	i8 v1102 = (i8)(intptr_t)(ws+1210);
	i2 v1103 = *(i2*)(intptr_t)v1102;
	if (v1101==v1103) goto c02_00e0; else goto c02_00df;

c02_00df:;

	i8 v1104 = (i8)(intptr_t)(f61_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1104)();

	i8 v1105 = (i8)(intptr_t)(ws+1208);
	i2 v1106 = *(i2*)(intptr_t)v1105;
	i8 v1107 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1107)(v1106);

	i8 v1108 = (i8)(intptr_t)(ws+1210);
	i2 v1109 = *(i2*)(intptr_t)v1108;
	i8 v1110 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1110)(v1109);

	i1 v1111 = (i1)+82;
	i8 v1112 = (i8)(intptr_t)(f62_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1112)(v1111);

c02_00e0:;

c02_00dc:;

endsub:;
}
	void f61_EmitterPushChunk(void);
	void f59_E_b16(i2 /* word */);
	void f57_E_b8(i1 /* byte */);
	void f59_E_b16(i2 /* word */);
	void f62_EmitterPopChunk(i1 /* type */);

// EmitterDeclareWorkspace workspace at ws+1200 length ws+6
void f68_EmitterDeclareWorkspace(i2 p1113 /* workspace */, i1 p1114 /* wid */, i2 p1115 /* id */) {
	*(i2*)(intptr_t)(ws+1200) = p1115; /*id */
	*(i1*)(intptr_t)(ws+1202) = p1114; /*wid */
	*(i2*)(intptr_t)(ws+1204) = p1113; /*workspace */

	i8 v1116 = (i8)(intptr_t)(f61_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1116)();

	i8 v1117 = (i8)(intptr_t)(ws+1200);
	i2 v1118 = *(i2*)(intptr_t)v1117;
	i8 v1119 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1119)(v1118);

	i8 v1120 = (i8)(intptr_t)(ws+1202);
	i1 v1121 = *(i1*)(intptr_t)v1120;
	i8 v1122 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1122)(v1121);

	i8 v1123 = (i8)(intptr_t)(ws+1204);
	i2 v1124 = *(i2*)(intptr_t)v1123;
	i8 v1125 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1125)(v1124);

	i1 v1126 = (i1)+87;
	i8 v1127 = (i8)(intptr_t)(f62_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1127)(v1126);

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f32_Alloc(i8* /* block */, i8 /* length */);
	void f34_StrDup(i8* /* sout */, i8 /* s */);

// GetSymbol workspace at ws+1208 length ws+16
void f69_GetSymbol(i8* p1134 /* symbol */, i8 p1135 /* name */) {
	*(i8*)(intptr_t)(ws+1208) = p1135; /*name */

	i8 v1136 = (i8)(intptr_t)(ws+1120);
	i8 v1137 = *(i8*)(intptr_t)v1136;
	i8 v1138 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1138 = v1137;

c02_00e3:;

	i8 v1139 = (i8)(intptr_t)(ws+1216);
	i8 v1140 = *(i8*)(intptr_t)v1139;
	i8 v1141 = (i8)+0;
	if (v1140==v1141) goto c02_00e6; else goto c02_00e5;

c02_00e5:;

	i8 v1142 = (i8)(intptr_t)(ws+1208);
	i8 v1143 = *(i8*)(intptr_t)v1142;
	i8 v1144 = (i8)(intptr_t)(ws+1216);
	i8 v1145 = *(i8*)(intptr_t)v1144;
	i8 v1146 = v1145+(+8);
	i8 v1147 = *(i8*)(intptr_t)v1146;
	i8 v1148 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1149;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1148)(&v1149, v1147, v1143);
	i1 v1150 = (i1)+0;
	if (v1149==v1150) goto c02_00ea; else goto c02_00eb;

c02_00ea:;

	goto endsub;

c02_00eb:;

c02_00e7:;

	i8 v1151 = (i8)(intptr_t)(ws+1216);
	i8 v1152 = *(i8*)(intptr_t)v1151;
	i8 v1153 = *(i8*)(intptr_t)v1152;
	i8 v1154 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1154 = v1153;

	goto c02_00e3;

c02_00e6:;

	i8 v1155 = (i8)+19;
	i8 v1156 = (i8)(intptr_t)(f32_Alloc);
	i8 v1157;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1156)(&v1157, v1155);
	i8 v1158 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1158 = v1157;

	i8 v1159 = (i8)(intptr_t)(ws+1208);
	i8 v1160 = *(i8*)(intptr_t)v1159;
	i8 v1161 = (i8)(intptr_t)(f34_StrDup);
	i8 v1162;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v1161)(&v1162, v1160);
	i8 v1163 = (i8)(intptr_t)(ws+1216);
	i8 v1164 = *(i8*)(intptr_t)v1163;
	i8 v1165 = v1164+(+8);
	*(i8*)(intptr_t)v1165 = v1162;

	i8 v1166 = (i8)(intptr_t)(ws+1128);
	i2 v1167 = *(i2*)(intptr_t)v1166;
	i8 v1168 = (i8)(intptr_t)(ws+1216);
	i8 v1169 = *(i8*)(intptr_t)v1168;
	i8 v1170 = v1169+(+16);
	*(i2*)(intptr_t)v1170 = v1167;

	i8 v1171 = (i8)(intptr_t)(ws+1128);
	i2 v1172 = *(i2*)(intptr_t)v1171;
	i2 v1173 = v1172+(+1);
	i8 v1174 = (i8)(intptr_t)(ws+1128);
	*(i2*)(intptr_t)v1174 = v1173;

	i8 v1175 = (i8)(intptr_t)(ws+1120);
	i8 v1176 = *(i8*)(intptr_t)v1175;
	i8 v1177 = (i8)(intptr_t)(ws+1216);
	i8 v1178 = *(i8*)(intptr_t)v1177;
	*(i8*)(intptr_t)v1178 = v1176;

	i8 v1179 = (i8)(intptr_t)(ws+1216);
	i8 v1180 = *(i8*)(intptr_t)v1179;
	i8 v1181 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1181 = v1180;

endsub:;
	*p1134 = *(i8*)(intptr_t)(ws+1216);
}
const i1 c02_s0007[] = { 0x40,0 };
	void f50_FCBGetChar(i1* /* c */, i8 /* fcb */);

// GetC workspace at ws+1232 length ws+0
void f71_GetC(void) {

	i8 v1188 = (i8)(intptr_t)(ws+40);
	i8 v1189 = (i8)(intptr_t)(f50_FCBGetChar);
	i1 v1190;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1189)(&v1190, v1188);
	i8 v1191 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v1191 = v1190;

endsub:;
}
const i1 c02_s0008[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f56_FatalError(i8 /* s */);
	void f71_GetC(void);

// ExpectC workspace at ws+1208 length ws+1
void f72_ExpectC(i1 p1192 /* want */) {
	*(i1*)(intptr_t)(ws+1208) = p1192; /*want */

	i8 v1193 = (i8)(intptr_t)(ws+1144);
	i1 v1194 = *(i1*)(intptr_t)v1193;
	i8 v1195 = (i8)(intptr_t)(ws+1208);
	i1 v1196 = *(i1*)(intptr_t)v1195;
	if (v1194==v1196) goto c02_00f0; else goto c02_00ef;

c02_00ef:;

	i8 v1197 = (i8)(intptr_t)c02_s0008;
	i8 v1198 = (i8)(intptr_t)(f56_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1198)(v1197);

c02_00f0:;

c02_00ec:;

	i8 v1199 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1199)();

endsub:;
}
	void f71_GetC(void);

// SkipToEndOfLine workspace at ws+1184 length ws+0
void f73_SkipToEndOfLine(void) {

c02_00f1:;

	i8 v1200 = (i8)(intptr_t)(ws+1144);
	i1 v1201 = *(i1*)(intptr_t)v1200;
	i1 v1202 = (i1)+0;
	if (v1201==v1202) goto c02_00fa; else goto c02_00fd;

c02_00fd:;

	i8 v1203 = (i8)(intptr_t)(ws+1144);
	i1 v1204 = *(i1*)(intptr_t)v1203;
	i1 v1205 = (i1)+26;
	if (v1204==v1205) goto c02_00fa; else goto c02_00fc;

c02_00fc:;

	i8 v1206 = (i8)(intptr_t)(ws+1144);
	i1 v1207 = *(i1*)(intptr_t)v1206;
	i1 v1208 = (i1)+10;
	if (v1207==v1208) goto c02_00fa; else goto c02_00fb;

c02_00fa:;

	goto c02_00f2;

c02_00fb:;

c02_00f3:;

	i8 v1209 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1209)();

	goto c02_00f1;

c02_00f2:;

endsub:;
}
	void f71_GetC(void);

// SkipWhitespace workspace at ws+1232 length ws+0
void f74_SkipWhitespace(void) {

c02_00fe:;

	i8 v1210 = (i8)(intptr_t)(ws+1144);
	i1 v1211 = *(i1*)(intptr_t)v1210;
	i1 v1212 = (i1)+32;
	if (v1211==v1212) goto c02_0106; else goto c02_0107;

c02_0107:;

	i8 v1213 = (i8)(intptr_t)(ws+1144);
	i1 v1214 = *(i1*)(intptr_t)v1213;
	i1 v1215 = (i1)+9;
	if (v1214==v1215) goto c02_0106; else goto c02_0105;

c02_0105:;

	goto c02_00ff;

c02_0106:;

c02_0100:;

	i8 v1216 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1216)();

	goto c02_00fe;

c02_00ff:;

endsub:;
}
	void f74_SkipWhitespace(void);
const i1 c02_s0009[] = { 0x77,0x6f,0x72,0x64,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f56_FatalError(i8 /* s */);
	void f71_GetC(void);

// ReadWord workspace at ws+1224 length ws+8
void f75_ReadWord(void) {

	i8 v1217 = (i8)(intptr_t)(f74_SkipWhitespace);

	((void(*)(void))(intptr_t)v1217)();

	i8 v1218 = (i8)(intptr_t)(ws+1148);
	i8 v1219 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1219 = v1218;

c02_0108:;

	i8 v1220 = (i8)(intptr_t)(ws+1144);
	i1 v1221 = *(i1*)(intptr_t)v1220;
	i1 v1222 = (i1)+48;
	if (v1221<v1222) goto c02_0120; else goto c02_0121;

c02_0121:;

	i1 v1223 = (i1)+57;
	i8 v1224 = (i8)(intptr_t)(ws+1144);
	i1 v1225 = *(i1*)(intptr_t)v1224;
	if (v1223<v1225) goto c02_0120; else goto c02_011c;

c02_0120:;

	i8 v1226 = (i8)(intptr_t)(ws+1144);
	i1 v1227 = *(i1*)(intptr_t)v1226;
	i1 v1228 = (i1)+97;
	if (v1227<v1228) goto c02_011f; else goto c02_0122;

c02_0122:;

	i1 v1229 = (i1)+122;
	i8 v1230 = (i8)(intptr_t)(ws+1144);
	i1 v1231 = *(i1*)(intptr_t)v1230;
	if (v1229<v1231) goto c02_011f; else goto c02_011c;

c02_011f:;

	i8 v1232 = (i8)(intptr_t)(ws+1144);
	i1 v1233 = *(i1*)(intptr_t)v1232;
	i1 v1234 = (i1)+65;
	if (v1233<v1234) goto c02_011e; else goto c02_0123;

c02_0123:;

	i1 v1235 = (i1)+90;
	i8 v1236 = (i8)(intptr_t)(ws+1144);
	i1 v1237 = *(i1*)(intptr_t)v1236;
	if (v1235<v1237) goto c02_011e; else goto c02_011c;

c02_011e:;

	i8 v1238 = (i8)(intptr_t)(ws+1144);
	i1 v1239 = *(i1*)(intptr_t)v1238;
	i1 v1240 = (i1)+95;
	if (v1239==v1240) goto c02_011c; else goto c02_011d;

c02_011d:;

	i8 v1241 = (i8)(intptr_t)(ws+1144);
	i1 v1242 = *(i1*)(intptr_t)v1241;
	i1 v1243 = (i1)+64;
	if (v1242==v1243) goto c02_011c; else goto c02_011b;

c02_011b:;

	goto c02_0109;

c02_011c:;

c02_010a:;

	i8 v1244 = (i8)(intptr_t)(ws+1144);
	i1 v1245 = *(i1*)(intptr_t)v1244;
	i8 v1246 = (i8)(intptr_t)(ws+1224);
	i8 v1247 = *(i8*)(intptr_t)v1246;
	*(i1*)(intptr_t)v1247 = v1245;

	i8 v1248 = (i8)(intptr_t)(ws+1224);
	i8 v1249 = *(i8*)(intptr_t)v1248;
	i8 v1250 = v1249+(+1);
	i8 v1251 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1251 = v1250;

	i8 v1252 = (i8)(intptr_t)(ws+1224);
	i8 v1253 = *(i8*)(intptr_t)v1252;
	i8 v1254 = (i8)(intptr_t)(ws+1180);
	if (v1253==v1254) goto c02_0127; else goto c02_0128;

c02_0127:;

	i8 v1255 = (i8)(intptr_t)c02_s0009;
	i8 v1256 = (i8)(intptr_t)(f56_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1256)(v1255);

c02_0128:;

c02_0124:;

	i8 v1257 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1257)();

	goto c02_0108;

c02_0109:;

	i1 v1258 = (i1)+0;
	i8 v1259 = (i8)(intptr_t)(ws+1224);
	i8 v1260 = *(i8*)(intptr_t)v1259;
	*(i1*)(intptr_t)v1260 = v1258;

endsub:;
}
	void f75_ReadWord(void);
	void f21_AToI(i4* /* result */, i8* /* ptr */, i8 /* buffer */);
const i1 c02_s000a[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f56_FatalError(i8 /* s */);

// ReadNumber workspace at ws+1208 length ws+16
void f76_ReadNumber(i4* p1261 /* result */) {

	i8 v1262 = (i8)(intptr_t)(f75_ReadWord);

	((void(*)(void))(intptr_t)v1262)();

	i8 v1263 = (i8)(intptr_t)(ws+1148);
	i8 v1264 = (i8)(intptr_t)(f21_AToI);
	i4 v1265;
	i8 v1266;

	((void(*)(i4* /* result */, i8* /* ptr */, i8 /* buffer */))(intptr_t)v1264)(&v1265, &v1266, v1263);

	i8 v1267 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1267 = v1266;

	i8 v1268 = (i8)(intptr_t)(ws+1208);
	*(i4*)(intptr_t)v1268 = v1265;

	i8 v1269 = (i8)(intptr_t)(ws+1216);
	i8 v1270 = *(i8*)(intptr_t)v1269;
	i8 v1271 = (i8)(intptr_t)(ws+1148);
	if (v1270==v1271) goto c02_012c; else goto c02_012d;

c02_012c:;

	i8 v1272 = (i8)(intptr_t)c02_s000a;
	i8 v1273 = (i8)(intptr_t)(f56_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1273)(v1272);

c02_012d:;

c02_0129:;

endsub:;
	*p1261 = *(i4*)(intptr_t)(ws+1208);
}
	void f66_EmitterDeclareExternal(i8 /* name */, i2 /* id */);

// MarkSubroutinePublic workspace at ws+1192 length ws+8
void f77_MarkSubroutinePublic(i8 p1274 /* symbol */) {
	*(i8*)(intptr_t)(ws+1192) = p1274; /*symbol */

	i8 v1275 = (i8)(intptr_t)(ws+1192);
	i8 v1276 = *(i8*)(intptr_t)v1275;
	i8 v1277 = v1276+(+18);
	i1 v1278 = *(i1*)(intptr_t)v1277;
	i1 v1279 = v1278&(+2);
	i1 v1280 = (i1)+0;
	if (v1279==v1280) goto c02_0131; else goto c02_0132;

c02_0131:;

	i8 v1281 = (i8)(intptr_t)(ws+1192);
	i8 v1282 = *(i8*)(intptr_t)v1281;
	i8 v1283 = v1282+(+18);
	i1 v1284 = *(i1*)(intptr_t)v1283;
	i1 v1285 = v1284|(+2);
	i8 v1286 = (i8)(intptr_t)(ws+1192);
	i8 v1287 = *(i8*)(intptr_t)v1286;
	i8 v1288 = v1287+(+18);
	*(i1*)(intptr_t)v1288 = v1285;

	i8 v1289 = (i8)(intptr_t)(ws+1192);
	i8 v1290 = *(i8*)(intptr_t)v1289;
	i8 v1291 = v1290+(+16);
	i2 v1292 = *(i2*)(intptr_t)v1291;
	i8 v1293 = (i8)(intptr_t)(ws+1192);
	i8 v1294 = *(i8*)(intptr_t)v1293;
	i8 v1295 = v1294+(+8);
	i8 v1296 = *(i8*)(intptr_t)v1295;
	i8 v1297 = (i8)(intptr_t)(f66_EmitterDeclareExternal);

	((void(*)(i8 /* name */, i2 /* id */))(intptr_t)v1297)(v1296, v1292);

c02_0132:;

c02_012e:;

endsub:;
}
	void f62_EmitterPopChunk(i1 /* type */);

// CloseChunk workspace at ws+1192 length ws+0
void f79_CloseChunk(void) {

	i8 v1304 = (i8)(intptr_t)(ws+1136);
	i8 v1305 = *(i8*)(intptr_t)v1304;
	i8 v1306 = (i8)+0;
	if (v1305==v1306) goto c02_0137; else goto c02_0136;

c02_0136:;

	i1 v1307 = (i1)+70;
	i8 v1308 = (i8)(intptr_t)(f62_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1308)(v1307);

	i8 v1309 = (i8)+0;
	i8 v1310 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1310 = v1309;

c02_0137:;

c02_0133:;

endsub:;
}
	void f79_CloseChunk(void);
	void f71_GetC(void);
	void f75_ReadWord(void);
	void f69_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f77_MarkSubroutinePublic(i8 /* symbol */);
	void f65_EmitterDeclareSubroutine(i8 /* name */, i2 /* id */);
	void f61_EmitterPushChunk(void);
	void f57_E_b8(i1 /* byte */);
	void f59_E_b16(i2 /* word */);

// DeclareSubroutine workspace at ws+1184 length ws+1
void f80_DeclareSubroutine(i1 p1311 /* exported */) {
	*(i1*)(intptr_t)(ws+1184) = p1311; /*exported */

	i8 v1312 = (i8)(intptr_t)(f79_CloseChunk);

	((void(*)(void))(intptr_t)v1312)();

	i8 v1313 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1313)();

	i8 v1314 = (i8)(intptr_t)(f75_ReadWord);

	((void(*)(void))(intptr_t)v1314)();

	i8 v1315 = (i8)(intptr_t)(ws+1148);
	i8 v1316 = (i8)(intptr_t)(f69_GetSymbol);
	i8 v1317;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1316)(&v1317, v1315);
	i8 v1318 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1318 = v1317;

	i8 v1319 = (i8)(intptr_t)(ws+1136);
	i8 v1320 = *(i8*)(intptr_t)v1319;
	i8 v1321 = v1320+(+18);
	i1 v1322 = *(i1*)(intptr_t)v1321;
	i1 v1323 = v1322|(+1);
	i8 v1324 = (i8)(intptr_t)(ws+1136);
	i8 v1325 = *(i8*)(intptr_t)v1324;
	i8 v1326 = v1325+(+18);
	*(i1*)(intptr_t)v1326 = v1323;

	i8 v1327 = (i8)(intptr_t)(ws+1184);
	i1 v1328 = *(i1*)(intptr_t)v1327;
	i1 v1329 = (i1)+0;
	if (v1328==v1329) goto c02_013c; else goto c02_013b;

c02_013b:;

	i8 v1330 = (i8)(intptr_t)(ws+1136);
	i8 v1331 = *(i8*)(intptr_t)v1330;
	i8 v1332 = (i8)(intptr_t)(f77_MarkSubroutinePublic);

	((void(*)(i8 /* symbol */))(intptr_t)v1332)(v1331);

c02_013c:;

c02_0138:;

	i8 v1333 = (i8)(intptr_t)(ws+1136);
	i8 v1334 = *(i8*)(intptr_t)v1333;
	i8 v1335 = v1334+(+18);
	i1 v1336 = *(i1*)(intptr_t)v1335;
	i1 v1337 = v1336&(+4);
	i1 v1338 = (i1)+0;
	if (v1337==v1338) goto c02_0140; else goto c02_0141;

c02_0140:;

	i8 v1339 = (i8)(intptr_t)(ws+1136);
	i8 v1340 = *(i8*)(intptr_t)v1339;
	i8 v1341 = v1340+(+16);
	i2 v1342 = *(i2*)(intptr_t)v1341;
	i8 v1343 = (i8)(intptr_t)(ws+1136);
	i8 v1344 = *(i8*)(intptr_t)v1343;
	i8 v1345 = v1344+(+8);
	i8 v1346 = *(i8*)(intptr_t)v1345;
	i8 v1347 = (i8)(intptr_t)(f65_EmitterDeclareSubroutine);

	((void(*)(i8 /* name */, i2 /* id */))(intptr_t)v1347)(v1346, v1342);

	i8 v1348 = (i8)(intptr_t)(ws+1136);
	i8 v1349 = *(i8*)(intptr_t)v1348;
	i8 v1350 = v1349+(+18);
	i1 v1351 = *(i1*)(intptr_t)v1350;
	i1 v1352 = v1351|(+4);
	i8 v1353 = (i8)(intptr_t)(ws+1136);
	i8 v1354 = *(i8*)(intptr_t)v1353;
	i8 v1355 = v1354+(+18);
	*(i1*)(intptr_t)v1355 = v1352;

c02_0141:;

c02_013d:;

	i8 v1356 = (i8)(intptr_t)(f61_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1356)();

	i1 v1357 = (i1)+128;
	i8 v1358 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1358)(v1357);

	i8 v1359 = (i8)(intptr_t)(ws+1136);
	i8 v1360 = *(i8*)(intptr_t)v1359;
	i8 v1361 = v1360+(+16);
	i2 v1362 = *(i2*)(intptr_t)v1361;
	i8 v1363 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1363)(v1362);

endsub:;
}
	void f71_GetC(void);
	void f75_ReadWord(void);
	void f69_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f74_SkipWhitespace(void);
	void f76_ReadNumber(i4* /* result */);
	void f74_SkipWhitespace(void);
	void f76_ReadNumber(i4* /* result */);
	void f68_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i2 /* id */);

// SetSubroutineWorkspace workspace at ws+1184 length ws+12
void f81_SetSubroutineWorkspace(void) {

	i8 v1364 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1364)();

	i8 v1365 = (i8)(intptr_t)(f75_ReadWord);

	((void(*)(void))(intptr_t)v1365)();

	i8 v1366 = (i8)(intptr_t)(ws+1148);
	i8 v1367 = (i8)(intptr_t)(f69_GetSymbol);
	i8 v1368;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1367)(&v1368, v1366);
	i8 v1369 = (i8)(intptr_t)(ws+1184);
	*(i8*)(intptr_t)v1369 = v1368;

	i8 v1370 = (i8)(intptr_t)(f74_SkipWhitespace);

	((void(*)(void))(intptr_t)v1370)();

	i8 v1371 = (i8)(intptr_t)(f76_ReadNumber);
	i4 v1372;

	((void(*)(i4* /* result */))(intptr_t)v1371)(&v1372);
	i1 v1373 = (s1)(s4)v1372;
	i8 v1374 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1374 = v1373;

	i8 v1375 = (i8)(intptr_t)(f74_SkipWhitespace);

	((void(*)(void))(intptr_t)v1375)();

	i8 v1376 = (i8)(intptr_t)(f76_ReadNumber);
	i4 v1377;

	((void(*)(i4* /* result */))(intptr_t)v1376)(&v1377);
	i2 v1378 = (s2)(s4)v1377;
	i8 v1379 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v1379 = v1378;

	i8 v1380 = (i8)(intptr_t)(ws+1184);
	i8 v1381 = *(i8*)(intptr_t)v1380;
	i8 v1382 = v1381+(+16);
	i2 v1383 = *(i2*)(intptr_t)v1382;
	i8 v1384 = (i8)(intptr_t)(ws+1192);
	i1 v1385 = *(i1*)(intptr_t)v1384;
	i8 v1386 = (i8)(intptr_t)(ws+1194);
	i2 v1387 = *(i2*)(intptr_t)v1386;
	i8 v1388 = (i8)(intptr_t)(f68_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i2 /* id */))(intptr_t)v1388)(v1387, v1385, v1383);

endsub:;
}
	void f71_GetC(void);
	void f75_ReadWord(void);
	void f69_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f67_EmitterReferenceSubroutine(i2 /* used */, i2 /* user */);
	void f72_ExpectC(i1 /* want */);
	void f76_ReadNumber(i4* /* result */);
	void f72_ExpectC(i1 /* want */);
	void f76_ReadNumber(i4* /* result */);
	void f57_E_b8(i1 /* byte */);
	void f59_E_b16(i2 /* word */);
	void f57_E_b8(i1 /* byte */);
	void f59_E_b16(i2 /* word */);

// EmitWorkspaceRef workspace at ws+1192 length ws+12
void f82_EmitWorkspaceRef(void) {

	i8 v1389 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1389)();

	i8 v1390 = (i8)(intptr_t)(f75_ReadWord);

	((void(*)(void))(intptr_t)v1390)();

	i8 v1391 = (i8)(intptr_t)(ws+1136);
	i8 v1392 = *(i8*)(intptr_t)v1391;
	i8 v1393 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1393 = v1392;

	i8 v1394 = (i8)(intptr_t)(ws+1148);
	i1 v1395 = *(i1*)(intptr_t)v1394;
	i1 v1396 = (i1)+0;
	if (v1395==v1396) goto c02_0146; else goto c02_0145;

c02_0145:;

	i8 v1397 = (i8)(intptr_t)(ws+1148);
	i8 v1398 = (i8)(intptr_t)(f69_GetSymbol);
	i8 v1399;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1398)(&v1399, v1397);
	i8 v1400 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1400 = v1399;

	i8 v1401 = (i8)(intptr_t)(ws+1136);
	i8 v1402 = *(i8*)(intptr_t)v1401;
	i8 v1403 = v1402+(+16);
	i2 v1404 = *(i2*)(intptr_t)v1403;
	i8 v1405 = (i8)(intptr_t)(ws+1192);
	i8 v1406 = *(i8*)(intptr_t)v1405;
	i8 v1407 = v1406+(+16);
	i2 v1408 = *(i2*)(intptr_t)v1407;
	i8 v1409 = (i8)(intptr_t)(f67_EmitterReferenceSubroutine);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v1409)(v1408, v1404);

c02_0146:;

c02_0142:;

	i1 v1410 = (i1)+46;
	i8 v1411 = (i8)(intptr_t)(f72_ExpectC);

	((void(*)(i1 /* want */))(intptr_t)v1411)(v1410);

	i8 v1412 = (i8)(intptr_t)(f76_ReadNumber);
	i4 v1413;

	((void(*)(i4* /* result */))(intptr_t)v1412)(&v1413);
	i1 v1414 = (s1)(s4)v1413;
	i8 v1415 = (i8)(intptr_t)(ws+1200);
	*(i1*)(intptr_t)v1415 = v1414;

	i1 v1416 = (i1)+46;
	i8 v1417 = (i8)(intptr_t)(f72_ExpectC);

	((void(*)(i1 /* want */))(intptr_t)v1417)(v1416);

	i8 v1418 = (i8)(intptr_t)(f76_ReadNumber);
	i4 v1419;

	((void(*)(i4* /* result */))(intptr_t)v1418)(&v1419);
	i2 v1420 = (s2)(s4)v1419;
	i8 v1421 = (i8)(intptr_t)(ws+1202);
	*(i2*)(intptr_t)v1421 = v1420;

	i1 v1422 = (i1)+2;
	i8 v1423 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1423)(v1422);

	i8 v1424 = (i8)(intptr_t)(ws+1192);
	i8 v1425 = *(i8*)(intptr_t)v1424;
	i8 v1426 = v1425+(+16);
	i2 v1427 = *(i2*)(intptr_t)v1426;
	i8 v1428 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1428)(v1427);

	i8 v1429 = (i8)(intptr_t)(ws+1200);
	i1 v1430 = *(i1*)(intptr_t)v1429;
	i8 v1431 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1431)(v1430);

	i8 v1432 = (i8)(intptr_t)(ws+1202);
	i2 v1433 = *(i2*)(intptr_t)v1432;
	i8 v1434 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1434)(v1433);

endsub:;
}
const i1 c02_s000b[] = { 0x73,0x6f,0x75,0x72,0x63,0x65,0x20,0x74,0x65,0x78,0x74,0x20,0x77,0x69,0x74,0x68,0x20,0x6e,0x6f,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f56_FatalError(i8 /* s */);
	void f71_GetC(void);
	void f57_E_b8(i1 /* byte */);
	void f71_GetC(void);
	void f57_E_b8(i1 /* byte */);
	void f71_GetC(void);
	void f82_EmitWorkspaceRef(void);
	void f75_ReadWord(void);
	void f69_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f57_E_b8(i1 /* byte */);
	void f59_E_b16(i2 /* word */);
	void f67_EmitterReferenceSubroutine(i2 /* used */, i2 /* user */);
	void f57_E_b8(i1 /* byte */);
	void f71_GetC(void);
	void f57_E_b8(i1 /* byte */);

// SourceLine workspace at ws+1184 length ws+8
void f83_SourceLine(void) {

	i8 v1435 = (i8)(intptr_t)(ws+1136);
	i8 v1436 = *(i8*)(intptr_t)v1435;
	i8 v1437 = (i8)+0;
	if (v1436==v1437) goto c02_014a; else goto c02_014b;

c02_014a:;

	i8 v1438 = (i8)(intptr_t)c02_s000b;
	i8 v1439 = (i8)(intptr_t)(f56_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1439)(v1438);

c02_014b:;

c02_0147:;

c02_014c:;

	i8 v1440 = (i8)(intptr_t)(ws+1144);
	i1 v1441 = *(i1*)(intptr_t)v1440;
	i1 v1442 = (i1)+0;
	if (v1441==v1442) goto c02_0155; else goto c02_0158;

c02_0158:;

	i8 v1443 = (i8)(intptr_t)(ws+1144);
	i1 v1444 = *(i1*)(intptr_t)v1443;
	i1 v1445 = (i1)+10;
	if (v1444==v1445) goto c02_0155; else goto c02_0157;

c02_0157:;

	i8 v1446 = (i8)(intptr_t)(ws+1144);
	i1 v1447 = *(i1*)(intptr_t)v1446;
	i1 v1448 = (i1)+26;
	if (v1447==v1448) goto c02_0155; else goto c02_0156;

c02_0155:;

	goto c02_014d;

c02_0156:;

c02_014e:;

	i8 v1449 = (i8)(intptr_t)(ws+1144);
	i1 v1450 = *(i1*)(intptr_t)v1449;
	i1 v1451 = (i1)+13;
	if (v1450==v1451) goto c02_015d; else goto c02_015c;

c02_015c:;

	i8 v1452 = (i8)(intptr_t)(ws+1144);
	i1 v1453 = *(i1*)(intptr_t)v1452;
	i1 v1454 = (i1)+96;
	if (v1453==v1454) goto c02_0161; else goto c02_0162;

c02_0161:;

	i8 v1455 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1455)();

	i8 v1456 = (i8)(intptr_t)(ws+1144);
	i1 v1457 = *(i1*)(intptr_t)v1456;

	if (v1457 != +96) goto c02_0164;

	i1 v1458 = (i1)+4;
	i8 v1459 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1459)(v1458);

	i8 v1460 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1460)();

	goto c02_0163;

c02_0164:;

	if (v1457 != +94) goto c02_0165;

	i1 v1461 = (i1)+3;
	i8 v1462 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1462)(v1461);

	i8 v1463 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1463)();

	goto c02_0163;

c02_0165:;

	if (v1457 != +36) goto c02_0166;

	i8 v1464 = (i8)(intptr_t)(f82_EmitWorkspaceRef);

	((void(*)(void))(intptr_t)v1464)();

	goto c02_0163;

c02_0166:;

	i8 v1465 = (i8)(intptr_t)(f75_ReadWord);

	((void(*)(void))(intptr_t)v1465)();

	i8 v1466 = (i8)(intptr_t)(ws+1148);
	i8 v1467 = (i8)(intptr_t)(f69_GetSymbol);
	i8 v1468;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1467)(&v1468, v1466);
	i8 v1469 = (i8)(intptr_t)(ws+1184);
	*(i8*)(intptr_t)v1469 = v1468;

	i1 v1470 = (i1)+1;
	i8 v1471 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1471)(v1470);

	i8 v1472 = (i8)(intptr_t)(ws+1184);
	i8 v1473 = *(i8*)(intptr_t)v1472;
	i8 v1474 = v1473+(+16);
	i2 v1475 = *(i2*)(intptr_t)v1474;
	i8 v1476 = (i8)(intptr_t)(f59_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1476)(v1475);

	i8 v1477 = (i8)(intptr_t)(ws+1136);
	i8 v1478 = *(i8*)(intptr_t)v1477;
	i8 v1479 = v1478+(+16);
	i2 v1480 = *(i2*)(intptr_t)v1479;
	i8 v1481 = (i8)(intptr_t)(ws+1184);
	i8 v1482 = *(i8*)(intptr_t)v1481;
	i8 v1483 = v1482+(+16);
	i2 v1484 = *(i2*)(intptr_t)v1483;
	i8 v1485 = (i8)(intptr_t)(f67_EmitterReferenceSubroutine);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v1485)(v1484, v1480);

c02_0163:;


	goto c02_015e;

c02_0162:;

	i8 v1486 = (i8)(intptr_t)(ws+1144);
	i1 v1487 = *(i1*)(intptr_t)v1486;
	i8 v1488 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1488)(v1487);

	i8 v1489 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1489)();

c02_015e:;

c02_015d:;

c02_0159:;

	goto c02_014c;

c02_014d:;

	i1 v1490 = (i1)+10;
	i8 v1491 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1491)(v1490);

endsub:;
}
	void f71_GetC(void);
	void f71_GetC(void);
	void f80_DeclareSubroutine(i1 /* exported */);
	void f80_DeclareSubroutine(i1 /* exported */);
	void f81_SetSubroutineWorkspace(void);
const i1 c02_s000c[] = { 0x62,0x61,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x63,0x6f,0x6d,0x6d,0x61,0x6e,0x64,0 };
	void f56_FatalError(i8 /* s */);
	void f73_SkipToEndOfLine(void);
	void f73_SkipToEndOfLine(void);
	void f83_SourceLine(void);
	void f71_GetC(void);
	void f79_CloseChunk(void);

// ProcessFile workspace at ws+1144 length ws+36
void f70_ProcessFile(void) {

	i8 v1182 = (i8)(intptr_t)c02_s0007;
	i8 v1183 = (i8)(intptr_t)(ws+1104);
	*(i8*)(intptr_t)v1183 = v1182;

	i1 v1184 = (i1)+5;
	i8 v1185 = (i8)(intptr_t)(ws+1114);
	*(i1*)(intptr_t)v1185 = v1184;

	i2 v1186 = (i2)+0;
	i8 v1187 = (i8)(intptr_t)(ws+1146);
	*(i2*)(intptr_t)v1187 = v1186;














	i8 v1492 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1492)();

c02_0167:;

	i8 v1493 = (i8)(intptr_t)(ws+1144);
	i1 v1494 = *(i1*)(intptr_t)v1493;
	i1 v1495 = (i1)+0;
	if (v1494==v1495) goto c02_016e; else goto c02_0170;

c02_0170:;

	i8 v1496 = (i8)(intptr_t)(ws+1144);
	i1 v1497 = *(i1*)(intptr_t)v1496;
	i1 v1498 = (i1)+26;
	if (v1497==v1498) goto c02_016e; else goto c02_016f;

c02_016e:;

	goto c02_0168;

c02_016f:;

c02_0169:;

	i8 v1499 = (i8)(intptr_t)(ws+1144);
	i1 v1500 = *(i1*)(intptr_t)v1499;

	if (v1500 != +38) goto c02_0172;

	i8 v1501 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1501)();

	i8 v1502 = (i8)(intptr_t)(ws+1144);
	i1 v1503 = *(i1*)(intptr_t)v1502;

	if (v1503 != +88) goto c02_0174;

	i1 v1504 = (i1)+1;
	i8 v1505 = (i8)(intptr_t)(f80_DeclareSubroutine);

	((void(*)(i1 /* exported */))(intptr_t)v1505)(v1504);

	goto c02_0173;

c02_0174:;

	if (v1503 != +83) goto c02_0175;

	i1 v1506 = (i1)+0;
	i8 v1507 = (i8)(intptr_t)(f80_DeclareSubroutine);

	((void(*)(i1 /* exported */))(intptr_t)v1507)(v1506);

	goto c02_0173;

c02_0175:;

	if (v1503 != +87) goto c02_0176;

	i8 v1508 = (i8)(intptr_t)(f81_SetSubroutineWorkspace);

	((void(*)(void))(intptr_t)v1508)();

	goto c02_0173;

c02_0176:;

	i8 v1509 = (i8)(intptr_t)c02_s000c;
	i8 v1510 = (i8)(intptr_t)(f56_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1510)(v1509);

c02_0173:;


	i8 v1511 = (i8)(intptr_t)(f73_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1511)();

	goto c02_0171;

c02_0172:;

	if (v1500 != +35) goto c02_0177;

	i8 v1512 = (i8)(intptr_t)(f73_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1512)();

	goto c02_0171;

c02_0177:;

	i8 v1513 = (i8)(intptr_t)(f83_SourceLine);

	((void(*)(void))(intptr_t)v1513)();

c02_0171:;


	i8 v1514 = (i8)(intptr_t)(f71_GetC);

	((void(*)(void))(intptr_t)v1514)();

	goto c02_0167;

c02_0168:;

	i8 v1515 = (i8)(intptr_t)(f79_CloseChunk);

	((void(*)(void))(intptr_t)v1515)();

endsub:;
}
const i1 c02_s000d[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x63,0x6c,0x61,0x72,0x65,0x64,0x20,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s000e[] = { 0x27,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s000f[] = { 0x66,0x61,0x69,0x6c,0x65,0x64,0 };
	void f56_FatalError(i8 /* s */);

// CheckSymbols workspace at ws+1144 length ws+16
void f84_CheckSymbols(void) {

	i1 v1516 = (i1)+1;
	i8 v1517 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v1517 = v1516;

	i8 v1518 = (i8)(intptr_t)(ws+1120);
	i8 v1519 = *(i8*)(intptr_t)v1518;
	i8 v1520 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1520 = v1519;

c02_017a:;

	i8 v1521 = (i8)(intptr_t)(ws+1152);
	i8 v1522 = *(i8*)(intptr_t)v1521;
	i8 v1523 = (i8)+0;
	if (v1522==v1523) goto c02_017d; else goto c02_017c;

c02_017c:;

	i8 v1524 = (i8)(intptr_t)(ws+1152);
	i8 v1525 = *(i8*)(intptr_t)v1524;
	i8 v1526 = v1525+(+18);
	i1 v1527 = *(i1*)(intptr_t)v1526;
	i1 v1528 = (i1)+0;
	if (v1527==v1528) goto c02_0181; else goto c02_0182;

c02_0181:;

	i8 v1529 = (i8)(intptr_t)c02_s000d;
	i8 v1530 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1530)(v1529);

	i8 v1531 = (i8)(intptr_t)(ws+1152);
	i8 v1532 = *(i8*)(intptr_t)v1531;
	i8 v1533 = v1532+(+8);
	i8 v1534 = *(i8*)(intptr_t)v1533;
	i8 v1535 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1535)(v1534);

	i8 v1536 = (i8)(intptr_t)c02_s000e;
	i8 v1537 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1537)(v1536);

	i1 v1538 = (i1)+0;
	i8 v1539 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v1539 = v1538;

c02_0182:;

c02_017e:;

	i8 v1540 = (i8)(intptr_t)(ws+1152);
	i8 v1541 = *(i8*)(intptr_t)v1540;
	i8 v1542 = *(i8*)(intptr_t)v1541;
	i8 v1543 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1543 = v1542;

	goto c02_017a;

c02_017d:;

	i8 v1544 = (i8)(intptr_t)(ws+1144);
	i1 v1545 = *(i1*)(intptr_t)v1544;
	i1 v1546 = (i1)+0;
	if (v1545==v1546) goto c02_0186; else goto c02_0187;

c02_0186:;

	i8 v1547 = (i8)(intptr_t)c02_s000f;
	i8 v1548 = (i8)(intptr_t)(f56_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1548)(v1547);

c02_0187:;

c02_0183:;

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
	void f24_ArgvNext(i8* /* arg */);
	void f24_ArgvNext(i8* /* arg */);
	void f55_SyntaxError(void);
	void f42_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0010[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f56_FatalError(i8 /* s */);
	void f63_EmitterOpenfile(i8 /* filename */);
	void f70_ProcessFile(void);
	void f84_CheckSymbols(void);
	void f64_EmitterClosefile(void);

// __main workspace at ws+0 length ws+1144
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

	i8 v842 = (i8)(intptr_t)c02_s0001;
	i8 v843 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v843)(v842);

	i8 v844 = (i8)(intptr_t)(f37_GetFreeMemory);
	i8 v845;

	((void(*)(i8* /* i */))(intptr_t)v844)(&v845);
	i1 v846 = (i1)+10;
	i8 v847 = ((i8)v845)>>v846;
	i2 v848 = v847;
	i8 v849 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v849)(v848);

	i8 v850 = (i8)(intptr_t)c02_s0002;
	i8 v851 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v851)(v850);















	i8 v1128 = (i8)(intptr_t)(ws+1096);
	i8 v1129 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1129 = v1128;

	i2 v1130 = (i2)+1;
	i8 v1131 = (i8)(intptr_t)(ws+1128);
	*(i2*)(intptr_t)v1131 = v1130;

	i8 v1132 = (i8)+0;
	i8 v1133 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1133 = v1132;




	i8 v1549 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v1549)();

	i8 v1550 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v1551;

	((void(*)(i8* /* arg */))(intptr_t)v1550)(&v1551);
	i8 v1552 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1552 = v1551;

	i8 v1553 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v1554;

	((void(*)(i8* /* arg */))(intptr_t)v1553)(&v1554);
	i8 v1555 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1555 = v1554;

	i8 v1556 = (i8)(intptr_t)(ws+24);
	i8 v1557 = *(i8*)(intptr_t)v1556;
	i8 v1558 = (i8)+0;
	if (v1557==v1558) goto c02_018f; else goto c02_0192;

c02_0192:;

	i8 v1559 = (i8)(intptr_t)(ws+32);
	i8 v1560 = *(i8*)(intptr_t)v1559;
	i8 v1561 = (i8)+0;
	if (v1560==v1561) goto c02_018f; else goto c02_0191;

c02_0191:;

	i8 v1562 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v1563;

	((void(*)(i8* /* arg */))(intptr_t)v1562)(&v1563);
	i8 v1564 = (i8)+0;
	if (v1563==v1564) goto c02_0190; else goto c02_018f;

c02_018f:;

	i8 v1565 = (i8)(intptr_t)(f55_SyntaxError);

	((void(*)(void))(intptr_t)v1565)();

c02_0190:;

c02_0188:;

	i8 v1566 = (i8)(intptr_t)(ws+40);
	i8 v1567 = (i8)(intptr_t)(ws+24);
	i8 v1568 = *(i8*)(intptr_t)v1567;
	i8 v1569 = (i8)(intptr_t)(f42_FCBOpenIn);
	i1 v1570;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1569)(&v1570, v1568, v1566);
	i1 v1571 = (i1)+0;
	if (v1570==v1571) goto c02_0197; else goto c02_0196;

c02_0196:;

	i8 v1572 = (i8)(intptr_t)c02_s0010;
	i8 v1573 = (i8)(intptr_t)(f56_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1573)(v1572);

c02_0197:;

c02_0193:;

	i8 v1574 = (i8)(intptr_t)(ws+32);
	i8 v1575 = *(i8*)(intptr_t)v1574;
	i8 v1576 = (i8)(intptr_t)(f63_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v1576)(v1575);

	i8 v1577 = (i8)(intptr_t)(f70_ProcessFile);

	((void(*)(void))(intptr_t)v1577)();

	i8 v1578 = (i8)(intptr_t)(f84_CheckSymbols);

	((void(*)(void))(intptr_t)v1578)();

	i8 v1579 = (i8)(intptr_t)(f64_EmitterClosefile);

	((void(*)(void))(intptr_t)v1579)();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     