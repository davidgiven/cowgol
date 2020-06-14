#include "cowgol.h"
static i8 workspace[0x00a9];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+1240 length ws+0
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

// print_char workspace at ws+1256 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+1256) = p11; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+1256) 
); 



endsub:;
}
	void f8_print_char(i1 /* c */);

// print workspace at ws+1240 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+1240) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+1240);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+1248);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+1248);
	i1 v29 = *(i1*)(intptr_t)v28;
	i8 v30 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v30)(v29);

	i8 v31 = (i8)(intptr_t)(ws+1240);
	i8 v32 = *(i8*)(intptr_t)v31;
	i8 v33 = v32+(+1);
	i8 v34 = (i8)(intptr_t)(ws+1240);
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

	goto c02_002b;

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

	goto c02_0030;

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

	goto c02_004a;

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

// Alloc workspace at ws+1248 length ws+16
void f31_Alloc(i8* p503 /* block */, i8 p504 /* length */) {
	*(i8*)(intptr_t)(ws+1248) = p504; /*length */


	
*(i8*)(intptr_t)(ws+1256) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+1248) 
); 



endsub:;
	*p503 = *(i8*)(intptr_t)(ws+1256);
}

// Free workspace at ws+1256 length ws+8
void f32_Free(i8 p505 /* block */) {
	*(i8*)(intptr_t)(ws+1256) = p505; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1256) 
); 



endsub:;
}

// StrDup workspace at ws+1224 length ws+16
void f33_StrDup(i8* p506 /* sout */, i8 p507 /* s */) {
	*(i8*)(intptr_t)(ws+1224) = p507; /*s */


	
*(i8*)(intptr_t)(ws+1232) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1224) 
); 



endsub:;
	*p506 = *(i8*)(intptr_t)(ws+1232);
}

// GetFreeMemory workspace at ws+1144 length ws+8
void f35_GetFreeMemory(i8* p508 /* i */) {

	i8 v509 = (i8)+0;
	i8 v510 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v510 = v509;

endsub:;
	*p508 = *(i8*)(intptr_t)(ws+1144);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_blockin workspace at ws+1296 length ws+28
void f36_fcb_i_blockin(i8 p511 /* fcb */) {
	*(i8*)(intptr_t)(ws+1296) = p511; /*fcb */

	i8 v512 = (i8)(intptr_t)(ws+1296);
	i8 v513 = *(i8*)(intptr_t)v512;
	i8 v514 = v513+(+12);
	i1 v515 = (i1)+0;
	i8 v516 = (i8)+512;
	i8 v517 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v517)(v516, v515, v514);

	i8 v518 = (i8)(intptr_t)(ws+1296);
	i8 v519 = *(i8*)(intptr_t)v518;
	i4 v520 = *(i4*)(intptr_t)v519;
	i8 v521 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v521 = v520;

	i8 v522 = (i8)(intptr_t)(ws+1296);
	i8 v523 = *(i8*)(intptr_t)v522;
	i8 v524 = v523+(+12);
	i8 v525 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v525 = v524;

	i8 v526 = (i8)(intptr_t)(ws+1296);
	i8 v527 = *(i8*)(intptr_t)v526;
	i8 v528 = v527+(+8);
	i4 v529 = *(i4*)(intptr_t)v528;
	i1 v530 = (i1)+9;
	i4 v531 = ((i4)v529)<<v530;
	i8 v532 = (i8)(intptr_t)(ws+1320);
	*(i4*)(intptr_t)v532 = v531;


	
pread( 
*(i4*)(intptr_t)(ws+1304) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1312) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1320) 
); 



	i1 v533 = (i1)+0;
	i8 v534 = (i8)(intptr_t)(ws+1296);
	i8 v535 = *(i8*)(intptr_t)v534;
	i8 v536 = v535+(+6);
	*(i1*)(intptr_t)v536 = v533;

endsub:;
}

// fcb_i_blockout workspace at ws+1296 length ws+28
void f37_fcb_i_blockout(i8 p537 /* fcb */) {
	*(i8*)(intptr_t)(ws+1296) = p537; /*fcb */

	i8 v538 = (i8)(intptr_t)(ws+1296);
	i8 v539 = *(i8*)(intptr_t)v538;
	i8 v540 = v539+(+6);
	i1 v541 = *(i1*)(intptr_t)v540;
	i1 v542 = (i1)+0;
	if (v541==v542) goto c02_008d; else goto c02_008c;

c02_008c:;

	i8 v543 = (i8)(intptr_t)(ws+1296);
	i8 v544 = *(i8*)(intptr_t)v543;
	i4 v545 = *(i4*)(intptr_t)v544;
	i8 v546 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v546 = v545;

	i8 v547 = (i8)(intptr_t)(ws+1296);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+12);
	i8 v550 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v550 = v549;

	i8 v551 = (i8)(intptr_t)(ws+1296);
	i8 v552 = *(i8*)(intptr_t)v551;
	i8 v553 = v552+(+8);
	i4 v554 = *(i4*)(intptr_t)v553;
	i1 v555 = (i1)+9;
	i4 v556 = ((i4)v554)<<v555;
	i8 v557 = (i8)(intptr_t)(ws+1320);
	*(i4*)(intptr_t)v557 = v556;


	
pwrite( 
*(i4*)(intptr_t)(ws+1304) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1312) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1320) 
); 



	i1 v558 = (i1)+0;
	i8 v559 = (i8)(intptr_t)(ws+1296);
	i8 v560 = *(i8*)(intptr_t)v559;
	i8 v561 = v560+(+6);
	*(i1*)(intptr_t)v561 = v558;

	goto c02_0089;

c02_008d:;

c02_0089:;

endsub:;
}
	void f37_fcb_i_blockout(i8 /* fcb */);
	void f36_fcb_i_blockin(i8 /* fcb */);

// fcb_i_changeblock workspace at ws+1280 length ws+12
void f38_fcb_i_changeblock(i4 p562 /* newblock */, i8 p563 /* fcb */) {
	*(i8*)(intptr_t)(ws+1280) = p563; /*fcb */
	*(i4*)(intptr_t)(ws+1288) = p562; /*newblock */

	i8 v564 = (i8)(intptr_t)(ws+1288);
	i4 v565 = *(i4*)(intptr_t)v564;
	i8 v566 = (i8)(intptr_t)(ws+1280);
	i8 v567 = *(i8*)(intptr_t)v566;
	i8 v568 = v567+(+8);
	i4 v569 = *(i4*)(intptr_t)v568;
	if (v565==v569) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v570 = (i8)(intptr_t)(ws+1280);
	i8 v571 = *(i8*)(intptr_t)v570;
	i8 v572 = (i8)(intptr_t)(f37_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v572)(v571);

	i8 v573 = (i8)(intptr_t)(ws+1288);
	i4 v574 = *(i4*)(intptr_t)v573;
	i8 v575 = (i8)(intptr_t)(ws+1280);
	i8 v576 = *(i8*)(intptr_t)v575;
	i8 v577 = v576+(+8);
	*(i4*)(intptr_t)v577 = v574;

	i8 v578 = (i8)(intptr_t)(ws+1280);
	i8 v579 = *(i8*)(intptr_t)v578;
	i8 v580 = (i8)(intptr_t)(f36_fcb_i_blockin);

	((void(*)(i8 /* fcb */))(intptr_t)v580)(v579);

	goto c02_008e;

c02_0092:;

c02_008e:;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_open workspace at ws+1176 length ws+28
void f39_fcb_i_open(i1* p581 /* errno */, i4 p582 /* flags */, i8 p583 /* filename */, i8 p584 /* fcb */) {
	*(i8*)(intptr_t)(ws+1176) = p584; /*fcb */
	*(i8*)(intptr_t)(ws+1184) = p583; /*filename */
	*(i4*)(intptr_t)(ws+1192) = p582; /*flags */

	i8 v585 = (i8)(intptr_t)(ws+1176);
	i8 v586 = *(i8*)(intptr_t)v585;
	i1 v587 = (i1)+0;
	i8 v588 = (i8)+524;
	i8 v589 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v589)(v588, v587, v586);

	i2 v590 = (i2)+511;
	i8 v591 = (i8)(intptr_t)(ws+1176);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = v592+(+4);
	*(i2*)(intptr_t)v593 = v590;

	i4 v594 = (i4)-1;
	i8 v595 = (i8)(intptr_t)(ws+1176);
	i8 v596 = *(i8*)(intptr_t)v595;
	i8 v597 = v596+(+8);
	*(i4*)(intptr_t)v597 = v594;


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+1200) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1184) 
,  
*(i4*)(intptr_t)(ws+1192) 
,  
(+438)
); 



	i8 v598 = (i8)(intptr_t)(ws+1200);
	i4 v599 = *(i4*)(intptr_t)v598;
	i8 v600 = (i8)(intptr_t)(ws+1176);
	i8 v601 = *(i8*)(intptr_t)v600;
	*(i4*)(intptr_t)v601 = v599;

	i8 v602 = (i8)(intptr_t)(ws+1200);
	i4 v603 = *(i4*)(intptr_t)v602;
	i4 v604 = (i4)+0;
	if ((s4)v603<(s4)v604) goto c02_0096; else goto c02_0097;

c02_0096:;


	
*(i1*)(intptr_t)(ws+1196) 
 = errno; 



	goto c02_0093;

c02_0097:;

	i1 v605 = (i1)+0;
	i8 v606 = (i8)(intptr_t)(ws+1196);
	*(i1*)(intptr_t)v606 = v605;

c02_0093:;

endsub:;
	*p581 = *(i1*)(intptr_t)(ws+1196);
}
	void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+1144 length ws+17
void f40_FCBOpenIn(i1* p607 /* errno */, i8 p608 /* filename */, i8 p609 /* fcb */) {
	*(i8*)(intptr_t)(ws+1144) = p609; /*fcb */
	*(i8*)(intptr_t)(ws+1152) = p608; /*filename */

	i8 v610 = (i8)(intptr_t)(ws+1144);
	i8 v611 = *(i8*)(intptr_t)v610;
	i8 v612 = (i8)(intptr_t)(ws+1152);
	i8 v613 = *(i8*)(intptr_t)v612;
	i4 v614 = (i4)+0;
	i8 v615 = (i8)(intptr_t)(f39_fcb_i_open);
	i1 v616;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v615)(&v616, v614, v613, v611);
	i8 v617 = (i8)(intptr_t)(ws+1160);
	*(i1*)(intptr_t)v617 = v616;

endsub:;
	*p607 = *(i1*)(intptr_t)(ws+1160);
}
	void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+1152 length ws+17
void f42_FCBOpenOut(i1* p629 /* errno */, i8 p630 /* filename */, i8 p631 /* fcb */) {
	*(i8*)(intptr_t)(ws+1152) = p631; /*fcb */
	*(i8*)(intptr_t)(ws+1160) = p630; /*filename */

	i8 v632 = (i8)(intptr_t)(ws+1152);
	i8 v633 = *(i8*)(intptr_t)v632;
	i8 v634 = (i8)(intptr_t)(ws+1160);
	i8 v635 = *(i8*)(intptr_t)v634;
	i4 v636 = (i4)+578;
	i8 v637 = (i8)(intptr_t)(f39_fcb_i_open);
	i1 v638;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v637)(&v638, v636, v635, v633);
	i8 v639 = (i8)(intptr_t)(ws+1168);
	*(i1*)(intptr_t)v639 = v638;

endsub:;
	*p629 = *(i1*)(intptr_t)(ws+1168);
}
	void f37_fcb_i_blockout(i8 /* fcb */);

// FCBClose workspace at ws+1144 length ws+16
void f43_FCBClose(i1* p640 /* errno */, i8 p641 /* fcb */) {
	*(i8*)(intptr_t)(ws+1144) = p641; /*fcb */

	i8 v642 = (i8)(intptr_t)(ws+1144);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = (i8)(intptr_t)(f37_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v644)(v643);

	i8 v645 = (i8)(intptr_t)(ws+1144);
	i8 v646 = *(i8*)(intptr_t)v645;
	i4 v647 = *(i4*)(intptr_t)v646;
	i8 v648 = (i8)(intptr_t)(ws+1156);
	*(i4*)(intptr_t)v648 = v647;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+1156) 
); 


	
*(i1*)(intptr_t)(ws+1152) 
 = errno; 



endsub:;
	*p640 = *(i1*)(intptr_t)(ws+1152);
}
	void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// fcb_i_nextchar workspace at ws+1272 length ws+8
void f47_fcb_i_nextchar(i8 p705 /* fcb */) {
	*(i8*)(intptr_t)(ws+1272) = p705; /*fcb */

	i8 v706 = (i8)(intptr_t)(ws+1272);
	i8 v707 = *(i8*)(intptr_t)v706;
	i8 v708 = v707+(+4);
	i2 v709 = *(i2*)(intptr_t)v708;
	i2 v710 = v709+(+1);
	i8 v711 = (i8)(intptr_t)(ws+1272);
	i8 v712 = *(i8*)(intptr_t)v711;
	i8 v713 = v712+(+4);
	*(i2*)(intptr_t)v713 = v710;

	i8 v714 = (i8)(intptr_t)(ws+1272);
	i8 v715 = *(i8*)(intptr_t)v714;
	i8 v716 = v715+(+4);
	i2 v717 = *(i2*)(intptr_t)v716;
	i2 v718 = (i2)+512;
	if (v717==v718) goto c02_009b; else goto c02_009c;

c02_009b:;

	i8 v719 = (i8)(intptr_t)(ws+1272);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = (i8)(intptr_t)(ws+1272);
	i8 v722 = *(i8*)(intptr_t)v721;
	i8 v723 = v722+(+8);
	i4 v724 = *(i4*)(intptr_t)v723;
	i4 v725 = v724+(+1);
	i8 v726 = (i8)(intptr_t)(f38_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v726)(v725, v720);

	i2 v727 = (i2)+0;
	i8 v728 = (i8)(intptr_t)(ws+1272);
	i8 v729 = *(i8*)(intptr_t)v728;
	i8 v730 = v729+(+4);
	*(i2*)(intptr_t)v730 = v727;

	goto c02_0098;

c02_009c:;

c02_0098:;

endsub:;
}
	void f47_fcb_i_nextchar(i8 /* fcb */);

// FCBGetChar workspace at ws+1232 length ws+9
void f48_FCBGetChar(i1* p731 /* c */, i8 p732 /* fcb */) {
	*(i8*)(intptr_t)(ws+1232) = p732; /*fcb */

	i8 v733 = (i8)(intptr_t)(ws+1232);
	i8 v734 = *(i8*)(intptr_t)v733;
	i8 v735 = (i8)(intptr_t)(f47_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v735)(v734);

	i8 v736 = (i8)(intptr_t)(ws+1232);
	i8 v737 = *(i8*)(intptr_t)v736;
	i8 v738 = v737+(+12);
	i8 v739 = (i8)(intptr_t)(ws+1232);
	i8 v740 = *(i8*)(intptr_t)v739;
	i8 v741 = v740+(+4);
	i2 v742 = *(i2*)(intptr_t)v741;
	i8 v743 = v742;
	i8 v744 = v738+v743;
	i1 v745 = *(i1*)(intptr_t)v744;
	i8 v746 = (i8)(intptr_t)(ws+1240);
	*(i1*)(intptr_t)v746 = v745;

endsub:;
	*p731 = *(i1*)(intptr_t)(ws+1240);
}
	void f47_fcb_i_nextchar(i8 /* fcb */);

// FCBPutChar workspace at ws+1256 length ws+9
void f49_FCBPutChar(i1 p747 /* c */, i8 p748 /* fcb */) {
	*(i8*)(intptr_t)(ws+1256) = p748; /*fcb */
	*(i1*)(intptr_t)(ws+1264) = p747; /*c */

	i8 v749 = (i8)(intptr_t)(ws+1256);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = (i8)(intptr_t)(f47_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v751)(v750);

	i8 v752 = (i8)(intptr_t)(ws+1264);
	i1 v753 = *(i1*)(intptr_t)v752;
	i8 v754 = (i8)(intptr_t)(ws+1256);
	i8 v755 = *(i8*)(intptr_t)v754;
	i8 v756 = v755+(+12);
	i8 v757 = (i8)(intptr_t)(ws+1256);
	i8 v758 = *(i8*)(intptr_t)v757;
	i8 v759 = v758+(+4);
	i2 v760 = *(i2*)(intptr_t)v759;
	i8 v761 = v760;
	i8 v762 = v756+v761;
	*(i1*)(intptr_t)v762 = v753;

	i1 v763 = (i1)+1;
	i8 v764 = (i8)(intptr_t)(ws+1256);
	i8 v765 = *(i8*)(intptr_t)v764;
	i8 v766 = v765+(+6);
	*(i1*)(intptr_t)v766 = v763;

endsub:;
}
const i1 c02_s0000[] = { 0x43,0x4f,0x57,0x57,0x52,0x41,0x50,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f35_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0001[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s0002[] = { 0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+1144 length ws+0
void f53_SyntaxError(void) {

	i8 v839 = (i8)(intptr_t)c02_s0002;
	i8 v840 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v840)(v839);

	i8 v841 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v841)();

endsub:;
}
const i1 c02_s0003[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// FatalError workspace at ws+1232 length ws+8
void f54_FatalError(i8 p842 /* s */) {
	*(i8*)(intptr_t)(ws+1232) = p842; /*s */

	i8 v843 = (i8)(intptr_t)c02_s0003;
	i8 v844 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v844)(v843);

	i8 v845 = (i8)(intptr_t)(ws+1232);
	i8 v846 = *(i8*)(intptr_t)v845;
	i8 v847 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v847)(v846);

	i8 v848 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v848)();

	i8 v849 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v849)();

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);

// E_b8 workspace at ws+1232 length ws+16
void f55_E_b8(i1 p850 /* byte */) {
	*(i1*)(intptr_t)(ws+1232) = p850; /*byte */

	i8 v851 = (i8)(intptr_t)(ws+1088);
	i8 v852 = *(i8*)(intptr_t)v851;
	i8 v853 = (i8)+0;
	if (v852==v853) goto c02_00b4; else goto c02_00b3;

c02_00b3:;

	i8 v854 = (i8)(intptr_t)(ws+1088);
	i8 v855 = *(i8*)(intptr_t)v854;
	i8 v856 = v855+(+16);
	i8 v857 = *(i8*)(intptr_t)v856;
	i8 v858 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v858 = v857;

	i8 v859 = (i8)(intptr_t)(ws+1240);
	i8 v860 = *(i8*)(intptr_t)v859;
	i8 v861 = v860+(+255);
	i1 v862 = *(i1*)(intptr_t)v861;
	i1 v863 = (i1)+255;
	if (v862==v863) goto c02_00b8; else goto c02_00b9;

c02_00b8:;

	i8 v864 = (i8)+264;
	i8 v865 = (i8)(intptr_t)(f31_Alloc);
	i8 v866;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v865)(&v866, v864);
	i8 v867 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v867 = v866;

	i8 v868 = (i8)(intptr_t)(ws+1240);
	i8 v869 = *(i8*)(intptr_t)v868;
	i8 v870 = (i8)(intptr_t)(ws+1088);
	i8 v871 = *(i8*)(intptr_t)v870;
	i8 v872 = v871+(+16);
	i8 v873 = *(i8*)(intptr_t)v872;
	i8 v874 = v873+(+256);
	*(i8*)(intptr_t)v874 = v869;

	i8 v875 = (i8)(intptr_t)(ws+1240);
	i8 v876 = *(i8*)(intptr_t)v875;
	i8 v877 = (i8)(intptr_t)(ws+1088);
	i8 v878 = *(i8*)(intptr_t)v877;
	i8 v879 = v878+(+16);
	*(i8*)(intptr_t)v879 = v876;

	goto c02_00b5;

c02_00b9:;

c02_00b5:;

	i8 v880 = (i8)(intptr_t)(ws+1232);
	i1 v881 = *(i1*)(intptr_t)v880;
	i8 v882 = (i8)(intptr_t)(ws+1240);
	i8 v883 = *(i8*)(intptr_t)v882;
	i8 v884 = (i8)(intptr_t)(ws+1240);
	i8 v885 = *(i8*)(intptr_t)v884;
	i8 v886 = v885+(+255);
	i1 v887 = *(i1*)(intptr_t)v886;
	i8 v888 = v887;
	i8 v889 = v883+v888;
	*(i1*)(intptr_t)v889 = v881;

	i8 v890 = (i8)(intptr_t)(ws+1240);
	i8 v891 = *(i8*)(intptr_t)v890;
	i8 v892 = v891+(+255);
	i1 v893 = *(i1*)(intptr_t)v892;
	i1 v894 = v893+(+1);
	i8 v895 = (i8)(intptr_t)(ws+1240);
	i8 v896 = *(i8*)(intptr_t)v895;
	i8 v897 = v896+(+255);
	*(i1*)(intptr_t)v897 = v894;

	i8 v898 = (i8)(intptr_t)(ws+1088);
	i8 v899 = *(i8*)(intptr_t)v898;
	i8 v900 = v899+(+24);
	i2 v901 = *(i2*)(intptr_t)v900;
	i2 v902 = v901+(+1);
	i8 v903 = (i8)(intptr_t)(ws+1088);
	i8 v904 = *(i8*)(intptr_t)v903;
	i8 v905 = v904+(+24);
	*(i2*)(intptr_t)v905 = v902;

	goto c02_00b0;

c02_00b4:;

c02_00b0:;

endsub:;
}
	void f55_E_b8(i1 /* byte */);

// E workspace at ws+1216 length ws+9
void f56_E(i8 p906 /* text */) {
	*(i8*)(intptr_t)(ws+1216) = p906; /*text */

c02_00ba:;

	i8 v907 = (i8)(intptr_t)(ws+1216);
	i8 v908 = *(i8*)(intptr_t)v907;
	i1 v909 = *(i1*)(intptr_t)v908;
	i8 v910 = (i8)(intptr_t)(ws+1224);
	*(i1*)(intptr_t)v910 = v909;

	i8 v911 = (i8)(intptr_t)(ws+1216);
	i8 v912 = *(i8*)(intptr_t)v911;
	i8 v913 = v912+(+1);
	i8 v914 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v914 = v913;

	i8 v915 = (i8)(intptr_t)(ws+1224);
	i1 v916 = *(i1*)(intptr_t)v915;
	i1 v917 = (i1)+0;
	if (v916==v917) goto c02_00bf; else goto c02_00c0;

c02_00bf:;

	goto c02_00bb;

c02_00c0:;

c02_00bc:;

	i8 v918 = (i8)(intptr_t)(ws+1224);
	i1 v919 = *(i1*)(intptr_t)v918;
	i8 v920 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v920)(v919);

	goto c02_00ba;

c02_00bb:;

endsub:;
}
	void f55_E_b8(i1 /* byte */);
	void f55_E_b8(i1 /* byte */);

// E_b16 workspace at ws+1216 length ws+2
void f57_E_b16(i2 p921 /* word */) {
	*(i2*)(intptr_t)(ws+1216) = p921; /*word */

	i8 v922 = (i8)(intptr_t)(ws+1216);
	i2 v923 = *(i2*)(intptr_t)v922;
	i1 v924 = v923;
	i8 v925 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v925)(v924);

	i8 v926 = (i8)(intptr_t)(ws+1216);
	i2 v927 = *(i2*)(intptr_t)v926;
	i1 v928 = (i1)+8;
	i2 v929 = ((i2)v927)>>v928;
	i1 v930 = v929;
	i8 v931 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v931)(v930);

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f31_Alloc(i8* /* block */, i8 /* length */);

// EmitterPushChunk workspace at ws+1216 length ws+8
void f59_EmitterPushChunk(void) {

	i8 v943 = (i8)+26;
	i8 v944 = (i8)(intptr_t)(f31_Alloc);
	i8 v945;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v944)(&v945, v943);
	i8 v946 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v946 = v945;

	i8 v947 = (i8)+264;
	i8 v948 = (i8)(intptr_t)(f31_Alloc);
	i8 v949;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v948)(&v949, v947);
	i8 v950 = (i8)(intptr_t)(ws+1216);
	i8 v951 = *(i8*)(intptr_t)v950;
	i8 v952 = v951+(+16);
	*(i8*)(intptr_t)v952 = v949;

	i8 v953 = (i8)(intptr_t)(ws+1216);
	i8 v954 = *(i8*)(intptr_t)v953;
	i8 v955 = v954+(+16);
	i8 v956 = *(i8*)(intptr_t)v955;
	i8 v957 = (i8)(intptr_t)(ws+1216);
	i8 v958 = *(i8*)(intptr_t)v957;
	i8 v959 = v958+(+8);
	*(i8*)(intptr_t)v959 = v956;

	i8 v960 = (i8)(intptr_t)(ws+1088);
	i8 v961 = *(i8*)(intptr_t)v960;
	i8 v962 = (i8)(intptr_t)(ws+1216);
	i8 v963 = *(i8*)(intptr_t)v962;
	*(i8*)(intptr_t)v963 = v961;

	i8 v964 = (i8)(intptr_t)(ws+1216);
	i8 v965 = *(i8*)(intptr_t)v964;
	i8 v966 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v966 = v965;

endsub:;
}
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);

// EmitterPopChunk workspace at ws+1216 length ws+40
void f60_EmitterPopChunk(i1 p967 /* type */) {
	*(i1*)(intptr_t)(ws+1216) = p967; /*type */

	i8 v968 = (i8)(intptr_t)(ws+564);
	i8 v969 = (i8)(intptr_t)(ws+1216);
	i1 v970 = *(i1*)(intptr_t)v969;
	i8 v971 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v971)(v970, v968);

	i8 v972 = (i8)(intptr_t)(ws+1088);
	i8 v973 = *(i8*)(intptr_t)v972;
	i8 v974 = v973+(+24);
	i2 v975 = *(i2*)(intptr_t)v974;
	i8 v976 = (i8)(intptr_t)(ws+1218);
	*(i2*)(intptr_t)v976 = v975;

	i8 v977 = (i8)(intptr_t)(ws+564);
	i8 v978 = (i8)(intptr_t)(ws+1218);
	i2 v979 = *(i2*)(intptr_t)v978;
	i1 v980 = v979;
	i8 v981 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v981)(v980, v977);

	i8 v982 = (i8)(intptr_t)(ws+564);
	i8 v983 = (i8)(intptr_t)(ws+1218);
	i2 v984 = *(i2*)(intptr_t)v983;
	i1 v985 = (i1)+8;
	i2 v986 = ((i2)v984)>>v985;
	i1 v987 = v986;
	i8 v988 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v988)(v987, v982);

	i8 v989 = (i8)(intptr_t)(ws+1088);
	i8 v990 = *(i8*)(intptr_t)v989;
	i8 v991 = v990+(+8);
	i8 v992 = *(i8*)(intptr_t)v991;
	i8 v993 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v993 = v992;

c02_00c3:;

	i8 v994 = (i8)(intptr_t)(ws+1224);
	i8 v995 = *(i8*)(intptr_t)v994;
	i8 v996 = (i8)+0;
	if (v995==v996) goto c02_00c6; else goto c02_00c5;

c02_00c5:;

	i1 v997 = (i1)+0;
	i8 v998 = (i8)(intptr_t)(ws+1232);
	*(i1*)(intptr_t)v998 = v997;

c02_00c9:;

	i8 v999 = (i8)(intptr_t)(ws+1232);
	i1 v1000 = *(i1*)(intptr_t)v999;
	i8 v1001 = (i8)(intptr_t)(ws+1224);
	i8 v1002 = *(i8*)(intptr_t)v1001;
	i8 v1003 = v1002+(+255);
	i1 v1004 = *(i1*)(intptr_t)v1003;
	if (v1000==v1004) goto c02_00cc; else goto c02_00cb;

c02_00cb:;

	i8 v1005 = (i8)(intptr_t)(ws+564);
	i8 v1006 = (i8)(intptr_t)(ws+1224);
	i8 v1007 = *(i8*)(intptr_t)v1006;
	i8 v1008 = (i8)(intptr_t)(ws+1232);
	i1 v1009 = *(i1*)(intptr_t)v1008;
	i8 v1010 = v1009;
	i8 v1011 = v1007+v1010;
	i1 v1012 = *(i1*)(intptr_t)v1011;
	i8 v1013 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1013)(v1012, v1005);

	i8 v1014 = (i8)(intptr_t)(ws+1232);
	i1 v1015 = *(i1*)(intptr_t)v1014;
	i1 v1016 = v1015+(+1);
	i8 v1017 = (i8)(intptr_t)(ws+1232);
	*(i1*)(intptr_t)v1017 = v1016;

	goto c02_00c9;

c02_00cc:;

	i8 v1018 = (i8)(intptr_t)(ws+1224);
	i8 v1019 = *(i8*)(intptr_t)v1018;
	i8 v1020 = v1019+(+256);
	i8 v1021 = *(i8*)(intptr_t)v1020;
	i8 v1022 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1022 = v1021;

	i8 v1023 = (i8)(intptr_t)(ws+1224);
	i8 v1024 = *(i8*)(intptr_t)v1023;
	i8 v1025 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v1025)(v1024);

	i8 v1026 = (i8)(intptr_t)(ws+1240);
	i8 v1027 = *(i8*)(intptr_t)v1026;
	i8 v1028 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1028 = v1027;

	goto c02_00c3;

c02_00c6:;

	i8 v1029 = (i8)(intptr_t)(ws+1088);
	i8 v1030 = *(i8*)(intptr_t)v1029;
	i8 v1031 = *(i8*)(intptr_t)v1030;
	i8 v1032 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1032 = v1031;

	i8 v1033 = (i8)(intptr_t)(ws+1088);
	i8 v1034 = *(i8*)(intptr_t)v1033;
	i8 v1035 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v1035)(v1034);

	i8 v1036 = (i8)(intptr_t)(ws+1248);
	i8 v1037 = *(i8*)(intptr_t)v1036;
	i8 v1038 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v1038 = v1037;

endsub:;
}
	void f42_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0004[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f54_FatalError(i8 /* s */);

// EmitterOpenfile workspace at ws+1144 length ws+8
void f61_EmitterOpenfile(i8 p1039 /* filename */) {
	*(i8*)(intptr_t)(ws+1144) = p1039; /*filename */

	i8 v1040 = (i8)(intptr_t)(ws+564);
	i8 v1041 = (i8)(intptr_t)(ws+1144);
	i8 v1042 = *(i8*)(intptr_t)v1041;
	i8 v1043 = (i8)(intptr_t)(f42_FCBOpenOut);
	i1 v1044;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1043)(&v1044, v1042, v1040);
	i1 v1045 = (i1)+0;
	if (v1044==v1045) goto c02_00d1; else goto c02_00d0;

c02_00d0:;

	i8 v1046 = (i8)(intptr_t)c02_s0004;
	i8 v1047 = (i8)(intptr_t)(f54_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1047)(v1046);

	goto c02_00cd;

c02_00d1:;

c02_00cd:;

endsub:;
}
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f54_FatalError(i8 /* s */);

// EmitterClosefile workspace at ws+1144 length ws+0
void f62_EmitterClosefile(void) {

	i8 v1048 = (i8)(intptr_t)(ws+564);
	i1 v1049 = (i1)+69;
	i8 v1050 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1050)(v1049, v1048);

	i8 v1051 = (i8)(intptr_t)(ws+564);
	i1 v1052 = (i1)+0;
	i8 v1053 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1053)(v1052, v1051);

	i8 v1054 = (i8)(intptr_t)(ws+564);
	i1 v1055 = (i1)+0;
	i8 v1056 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v1056)(v1055, v1054);

	i8 v1057 = (i8)(intptr_t)(ws+564);
	i8 v1058 = (i8)(intptr_t)(f43_FCBClose);
	i1 v1059;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1058)(&v1059, v1057);
	i1 v1060 = (i1)+0;
	if (v1059==v1060) goto c02_00d6; else goto c02_00d5;

c02_00d5:;

	i8 v1061 = (i8)(intptr_t)c02_s0005;
	i8 v1062 = (i8)(intptr_t)(f54_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1062)(v1061);

	goto c02_00d2;

c02_00d6:;

c02_00d2:;

endsub:;
}
	void f59_EmitterPushChunk(void);
	void f57_E_b16(i2 /* word */);
	void f56_E(i8 /* text */);
	void f60_EmitterPopChunk(i1 /* type */);

// EmitterDeclareSubroutine workspace at ws+1192 length ws+16
void f63_EmitterDeclareSubroutine(i8 p1063 /* name */, i2 p1064 /* id */) {
	*(i2*)(intptr_t)(ws+1192) = p1064; /*id */
	*(i8*)(intptr_t)(ws+1200) = p1063; /*name */

	i8 v1065 = (i8)(intptr_t)(f59_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1065)();

	i8 v1066 = (i8)(intptr_t)(ws+1192);
	i2 v1067 = *(i2*)(intptr_t)v1066;
	i8 v1068 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1068)(v1067);

	i8 v1069 = (i8)(intptr_t)(ws+1200);
	i8 v1070 = *(i8*)(intptr_t)v1069;
	i8 v1071 = (i8)(intptr_t)(f56_E);

	((void(*)(i8 /* text */))(intptr_t)v1071)(v1070);

	i1 v1072 = (i1)+78;
	i8 v1073 = (i8)(intptr_t)(f60_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1073)(v1072);

endsub:;
}
	void f59_EmitterPushChunk(void);
	void f57_E_b16(i2 /* word */);
	void f56_E(i8 /* text */);
	void f60_EmitterPopChunk(i1 /* type */);

// EmitterDeclareExternal workspace at ws+1200 length ws+16
void f64_EmitterDeclareExternal(i8 p1074 /* name */, i2 p1075 /* id */) {
	*(i2*)(intptr_t)(ws+1200) = p1075; /*id */
	*(i8*)(intptr_t)(ws+1208) = p1074; /*name */

	i8 v1076 = (i8)(intptr_t)(f59_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1076)();

	i8 v1077 = (i8)(intptr_t)(ws+1200);
	i2 v1078 = *(i2*)(intptr_t)v1077;
	i8 v1079 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1079)(v1078);

	i8 v1080 = (i8)(intptr_t)(ws+1208);
	i8 v1081 = *(i8*)(intptr_t)v1080;
	i8 v1082 = (i8)(intptr_t)(f56_E);

	((void(*)(i8 /* text */))(intptr_t)v1082)(v1081);

	i1 v1083 = (i1)+88;
	i8 v1084 = (i8)(intptr_t)(f60_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1084)(v1083);

endsub:;
}
	void f59_EmitterPushChunk(void);
	void f57_E_b16(i2 /* word */);
	void f57_E_b16(i2 /* word */);
	void f60_EmitterPopChunk(i1 /* type */);

// EmitterReferenceSubroutine workspace at ws+1208 length ws+4
void f65_EmitterReferenceSubroutine(i2 p1085 /* used */, i2 p1086 /* user */) {
	*(i2*)(intptr_t)(ws+1208) = p1086; /*user */
	*(i2*)(intptr_t)(ws+1210) = p1085; /*used */

	i8 v1087 = (i8)(intptr_t)(ws+1208);
	i2 v1088 = *(i2*)(intptr_t)v1087;
	i8 v1089 = (i8)(intptr_t)(ws+1210);
	i2 v1090 = *(i2*)(intptr_t)v1089;
	if (v1088==v1090) goto c02_00db; else goto c02_00da;

c02_00da:;

	i8 v1091 = (i8)(intptr_t)(f59_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1091)();

	i8 v1092 = (i8)(intptr_t)(ws+1208);
	i2 v1093 = *(i2*)(intptr_t)v1092;
	i8 v1094 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1094)(v1093);

	i8 v1095 = (i8)(intptr_t)(ws+1210);
	i2 v1096 = *(i2*)(intptr_t)v1095;
	i8 v1097 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1097)(v1096);

	i1 v1098 = (i1)+82;
	i8 v1099 = (i8)(intptr_t)(f60_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1099)(v1098);

	goto c02_00d7;

c02_00db:;

c02_00d7:;

endsub:;
}
	void f59_EmitterPushChunk(void);
	void f57_E_b16(i2 /* word */);
	void f55_E_b8(i1 /* byte */);
	void f57_E_b16(i2 /* word */);
	void f60_EmitterPopChunk(i1 /* type */);

// EmitterDeclareWorkspace workspace at ws+1200 length ws+6
void f66_EmitterDeclareWorkspace(i2 p1100 /* workspace */, i1 p1101 /* wid */, i2 p1102 /* id */) {
	*(i2*)(intptr_t)(ws+1200) = p1102; /*id */
	*(i1*)(intptr_t)(ws+1202) = p1101; /*wid */
	*(i2*)(intptr_t)(ws+1204) = p1100; /*workspace */

	i8 v1103 = (i8)(intptr_t)(f59_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1103)();

	i8 v1104 = (i8)(intptr_t)(ws+1200);
	i2 v1105 = *(i2*)(intptr_t)v1104;
	i8 v1106 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1106)(v1105);

	i8 v1107 = (i8)(intptr_t)(ws+1202);
	i1 v1108 = *(i1*)(intptr_t)v1107;
	i8 v1109 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1109)(v1108);

	i8 v1110 = (i8)(intptr_t)(ws+1204);
	i2 v1111 = *(i2*)(intptr_t)v1110;
	i8 v1112 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1112)(v1111);

	i1 v1113 = (i1)+87;
	i8 v1114 = (i8)(intptr_t)(f60_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1114)(v1113);

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f33_StrDup(i8* /* sout */, i8 /* s */);

// GetSymbol workspace at ws+1208 length ws+16
void f67_GetSymbol(i8* p1121 /* symbol */, i8 p1122 /* name */) {
	*(i8*)(intptr_t)(ws+1208) = p1122; /*name */

	i8 v1123 = (i8)(intptr_t)(ws+1120);
	i8 v1124 = *(i8*)(intptr_t)v1123;
	i8 v1125 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1125 = v1124;

c02_00de:;

	i8 v1126 = (i8)(intptr_t)(ws+1216);
	i8 v1127 = *(i8*)(intptr_t)v1126;
	i8 v1128 = (i8)+0;
	if (v1127==v1128) goto c02_00e1; else goto c02_00e0;

c02_00e0:;

	i8 v1129 = (i8)(intptr_t)(ws+1208);
	i8 v1130 = *(i8*)(intptr_t)v1129;
	i8 v1131 = (i8)(intptr_t)(ws+1216);
	i8 v1132 = *(i8*)(intptr_t)v1131;
	i8 v1133 = v1132+(+8);
	i8 v1134 = *(i8*)(intptr_t)v1133;
	i8 v1135 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1136;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1135)(&v1136, v1134, v1130);
	i1 v1137 = (i1)+0;
	if (v1136==v1137) goto c02_00e5; else goto c02_00e6;

c02_00e5:;

	goto endsub;

c02_00e6:;

c02_00e2:;

	i8 v1138 = (i8)(intptr_t)(ws+1216);
	i8 v1139 = *(i8*)(intptr_t)v1138;
	i8 v1140 = *(i8*)(intptr_t)v1139;
	i8 v1141 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1141 = v1140;

	goto c02_00de;

c02_00e1:;

	i8 v1142 = (i8)+19;
	i8 v1143 = (i8)(intptr_t)(f31_Alloc);
	i8 v1144;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1143)(&v1144, v1142);
	i8 v1145 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1145 = v1144;

	i8 v1146 = (i8)(intptr_t)(ws+1208);
	i8 v1147 = *(i8*)(intptr_t)v1146;
	i8 v1148 = (i8)(intptr_t)(f33_StrDup);
	i8 v1149;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v1148)(&v1149, v1147);
	i8 v1150 = (i8)(intptr_t)(ws+1216);
	i8 v1151 = *(i8*)(intptr_t)v1150;
	i8 v1152 = v1151+(+8);
	*(i8*)(intptr_t)v1152 = v1149;

	i8 v1153 = (i8)(intptr_t)(ws+1128);
	i2 v1154 = *(i2*)(intptr_t)v1153;
	i8 v1155 = (i8)(intptr_t)(ws+1216);
	i8 v1156 = *(i8*)(intptr_t)v1155;
	i8 v1157 = v1156+(+16);
	*(i2*)(intptr_t)v1157 = v1154;

	i8 v1158 = (i8)(intptr_t)(ws+1128);
	i2 v1159 = *(i2*)(intptr_t)v1158;
	i2 v1160 = v1159+(+1);
	i8 v1161 = (i8)(intptr_t)(ws+1128);
	*(i2*)(intptr_t)v1161 = v1160;

	i8 v1162 = (i8)(intptr_t)(ws+1120);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	i8 v1164 = (i8)(intptr_t)(ws+1216);
	i8 v1165 = *(i8*)(intptr_t)v1164;
	*(i8*)(intptr_t)v1165 = v1163;

	i8 v1166 = (i8)(intptr_t)(ws+1216);
	i8 v1167 = *(i8*)(intptr_t)v1166;
	i8 v1168 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1168 = v1167;

endsub:;
	*p1121 = *(i8*)(intptr_t)(ws+1216);
}
const i1 c02_s0006[] = { 0x40,0 };
	void f48_FCBGetChar(i1* /* c */, i8 /* fcb */);

// GetC workspace at ws+1232 length ws+0
void f69_GetC(void) {

	i8 v1175 = (i8)(intptr_t)(ws+40);
	i8 v1176 = (i8)(intptr_t)(f48_FCBGetChar);
	i1 v1177;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1176)(&v1177, v1175);
	i8 v1178 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v1178 = v1177;

endsub:;
}
const i1 c02_s0007[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f54_FatalError(i8 /* s */);
	void f69_GetC(void);

// ExpectC workspace at ws+1208 length ws+1
void f70_ExpectC(i1 p1179 /* want */) {
	*(i1*)(intptr_t)(ws+1208) = p1179; /*want */

	i8 v1180 = (i8)(intptr_t)(ws+1144);
	i1 v1181 = *(i1*)(intptr_t)v1180;
	i8 v1182 = (i8)(intptr_t)(ws+1208);
	i1 v1183 = *(i1*)(intptr_t)v1182;
	if (v1181==v1183) goto c02_00eb; else goto c02_00ea;

c02_00ea:;

	i8 v1184 = (i8)(intptr_t)c02_s0007;
	i8 v1185 = (i8)(intptr_t)(f54_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1185)(v1184);

	goto c02_00e7;

c02_00eb:;

c02_00e7:;

	i8 v1186 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1186)();

endsub:;
}
	void f69_GetC(void);

// SkipToEndOfLine workspace at ws+1184 length ws+0
void f71_SkipToEndOfLine(void) {

c02_00ec:;

	i8 v1187 = (i8)(intptr_t)(ws+1144);
	i1 v1188 = *(i1*)(intptr_t)v1187;
	i1 v1189 = (i1)+0;
	if (v1188==v1189) goto c02_00f5; else goto c02_00f8;

c02_00f8:;

	i8 v1190 = (i8)(intptr_t)(ws+1144);
	i1 v1191 = *(i1*)(intptr_t)v1190;
	i1 v1192 = (i1)+26;
	if (v1191==v1192) goto c02_00f5; else goto c02_00f7;

c02_00f7:;

	i8 v1193 = (i8)(intptr_t)(ws+1144);
	i1 v1194 = *(i1*)(intptr_t)v1193;
	i1 v1195 = (i1)+10;
	if (v1194==v1195) goto c02_00f5; else goto c02_00f6;

c02_00f5:;

	goto c02_00ed;

c02_00f6:;

c02_00ee:;

	i8 v1196 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1196)();

	goto c02_00ec;

c02_00ed:;

endsub:;
}
	void f69_GetC(void);

// SkipWhitespace workspace at ws+1232 length ws+0
void f72_SkipWhitespace(void) {

c02_00f9:;

	i8 v1197 = (i8)(intptr_t)(ws+1144);
	i1 v1198 = *(i1*)(intptr_t)v1197;
	i1 v1199 = (i1)+32;
	if (v1198==v1199) goto c02_0101; else goto c02_0102;

c02_0102:;

	i8 v1200 = (i8)(intptr_t)(ws+1144);
	i1 v1201 = *(i1*)(intptr_t)v1200;
	i1 v1202 = (i1)+9;
	if (v1201==v1202) goto c02_0101; else goto c02_0100;

c02_0100:;

	goto c02_00fa;

c02_0101:;

c02_00fb:;

	i8 v1203 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1203)();

	goto c02_00f9;

c02_00fa:;

endsub:;
}
	void f72_SkipWhitespace(void);
const i1 c02_s0008[] = { 0x77,0x6f,0x72,0x64,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f54_FatalError(i8 /* s */);
	void f69_GetC(void);

// ReadWord workspace at ws+1224 length ws+8
void f73_ReadWord(void) {

	i8 v1204 = (i8)(intptr_t)(f72_SkipWhitespace);

	((void(*)(void))(intptr_t)v1204)();

	i8 v1205 = (i8)(intptr_t)(ws+1148);
	i8 v1206 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1206 = v1205;

c02_0103:;

	i8 v1207 = (i8)(intptr_t)(ws+1144);
	i1 v1208 = *(i1*)(intptr_t)v1207;
	i1 v1209 = (i1)+48;
	if (v1208<v1209) goto c02_011b; else goto c02_011c;

c02_011c:;

	i1 v1210 = (i1)+57;
	i8 v1211 = (i8)(intptr_t)(ws+1144);
	i1 v1212 = *(i1*)(intptr_t)v1211;
	if (v1210<v1212) goto c02_011b; else goto c02_0117;

c02_011b:;

	i8 v1213 = (i8)(intptr_t)(ws+1144);
	i1 v1214 = *(i1*)(intptr_t)v1213;
	i1 v1215 = (i1)+97;
	if (v1214<v1215) goto c02_011a; else goto c02_011d;

c02_011d:;

	i1 v1216 = (i1)+122;
	i8 v1217 = (i8)(intptr_t)(ws+1144);
	i1 v1218 = *(i1*)(intptr_t)v1217;
	if (v1216<v1218) goto c02_011a; else goto c02_0117;

c02_011a:;

	i8 v1219 = (i8)(intptr_t)(ws+1144);
	i1 v1220 = *(i1*)(intptr_t)v1219;
	i1 v1221 = (i1)+65;
	if (v1220<v1221) goto c02_0119; else goto c02_011e;

c02_011e:;

	i1 v1222 = (i1)+90;
	i8 v1223 = (i8)(intptr_t)(ws+1144);
	i1 v1224 = *(i1*)(intptr_t)v1223;
	if (v1222<v1224) goto c02_0119; else goto c02_0117;

c02_0119:;

	i8 v1225 = (i8)(intptr_t)(ws+1144);
	i1 v1226 = *(i1*)(intptr_t)v1225;
	i1 v1227 = (i1)+95;
	if (v1226==v1227) goto c02_0117; else goto c02_0118;

c02_0118:;

	i8 v1228 = (i8)(intptr_t)(ws+1144);
	i1 v1229 = *(i1*)(intptr_t)v1228;
	i1 v1230 = (i1)+64;
	if (v1229==v1230) goto c02_0117; else goto c02_0116;

c02_0116:;

	goto c02_0104;

c02_0117:;

c02_0105:;

	i8 v1231 = (i8)(intptr_t)(ws+1144);
	i1 v1232 = *(i1*)(intptr_t)v1231;
	i8 v1233 = (i8)(intptr_t)(ws+1224);
	i8 v1234 = *(i8*)(intptr_t)v1233;
	*(i1*)(intptr_t)v1234 = v1232;

	i8 v1235 = (i8)(intptr_t)(ws+1224);
	i8 v1236 = *(i8*)(intptr_t)v1235;
	i8 v1237 = v1236+(+1);
	i8 v1238 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1238 = v1237;

	i8 v1239 = (i8)(intptr_t)(ws+1224);
	i8 v1240 = *(i8*)(intptr_t)v1239;
	i8 v1241 = (i8)(intptr_t)(ws+1180);
	if (v1240==v1241) goto c02_0122; else goto c02_0123;

c02_0122:;

	i8 v1242 = (i8)(intptr_t)c02_s0008;
	i8 v1243 = (i8)(intptr_t)(f54_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1243)(v1242);

	goto c02_011f;

c02_0123:;

c02_011f:;

	i8 v1244 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1244)();

	goto c02_0103;

c02_0104:;

	i1 v1245 = (i1)+0;
	i8 v1246 = (i8)(intptr_t)(ws+1224);
	i8 v1247 = *(i8*)(intptr_t)v1246;
	*(i1*)(intptr_t)v1247 = v1245;

endsub:;
}
	void f73_ReadWord(void);
	void f21_AToI(i4* /* result */, i8* /* ptr */, i8 /* buffer */);
const i1 c02_s0009[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f54_FatalError(i8 /* s */);

// ReadNumber workspace at ws+1208 length ws+16
void f74_ReadNumber(i4* p1248 /* result */) {

	i8 v1249 = (i8)(intptr_t)(f73_ReadWord);

	((void(*)(void))(intptr_t)v1249)();

	i8 v1250 = (i8)(intptr_t)(ws+1148);
	i8 v1251 = (i8)(intptr_t)(f21_AToI);
	i4 v1252;
	i8 v1253;

	((void(*)(i4* /* result */, i8* /* ptr */, i8 /* buffer */))(intptr_t)v1251)(&v1252, &v1253, v1250);

	i8 v1254 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1254 = v1253;

	i8 v1255 = (i8)(intptr_t)(ws+1208);
	*(i4*)(intptr_t)v1255 = v1252;

	i8 v1256 = (i8)(intptr_t)(ws+1216);
	i8 v1257 = *(i8*)(intptr_t)v1256;
	i8 v1258 = (i8)(intptr_t)(ws+1148);
	if (v1257==v1258) goto c02_0127; else goto c02_0128;

c02_0127:;

	i8 v1259 = (i8)(intptr_t)c02_s0009;
	i8 v1260 = (i8)(intptr_t)(f54_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1260)(v1259);

	goto c02_0124;

c02_0128:;

c02_0124:;

endsub:;
	*p1248 = *(i4*)(intptr_t)(ws+1208);
}
	void f64_EmitterDeclareExternal(i8 /* name */, i2 /* id */);

// MarkSubroutinePublic workspace at ws+1192 length ws+8
void f75_MarkSubroutinePublic(i8 p1261 /* symbol */) {
	*(i8*)(intptr_t)(ws+1192) = p1261; /*symbol */

	i8 v1262 = (i8)(intptr_t)(ws+1192);
	i8 v1263 = *(i8*)(intptr_t)v1262;
	i8 v1264 = v1263+(+18);
	i1 v1265 = *(i1*)(intptr_t)v1264;
	i1 v1266 = v1265&(+2);
	i1 v1267 = (i1)+0;
	if (v1266==v1267) goto c02_012c; else goto c02_012d;

c02_012c:;

	i8 v1268 = (i8)(intptr_t)(ws+1192);
	i8 v1269 = *(i8*)(intptr_t)v1268;
	i8 v1270 = v1269+(+18);
	i1 v1271 = *(i1*)(intptr_t)v1270;
	i1 v1272 = v1271|(+2);
	i8 v1273 = (i8)(intptr_t)(ws+1192);
	i8 v1274 = *(i8*)(intptr_t)v1273;
	i8 v1275 = v1274+(+18);
	*(i1*)(intptr_t)v1275 = v1272;

	i8 v1276 = (i8)(intptr_t)(ws+1192);
	i8 v1277 = *(i8*)(intptr_t)v1276;
	i8 v1278 = v1277+(+16);
	i2 v1279 = *(i2*)(intptr_t)v1278;
	i8 v1280 = (i8)(intptr_t)(ws+1192);
	i8 v1281 = *(i8*)(intptr_t)v1280;
	i8 v1282 = v1281+(+8);
	i8 v1283 = *(i8*)(intptr_t)v1282;
	i8 v1284 = (i8)(intptr_t)(f64_EmitterDeclareExternal);

	((void(*)(i8 /* name */, i2 /* id */))(intptr_t)v1284)(v1283, v1279);

	goto c02_0129;

c02_012d:;

c02_0129:;

endsub:;
}
	void f60_EmitterPopChunk(i1 /* type */);

// CloseChunk workspace at ws+1192 length ws+0
void f77_CloseChunk(void) {

	i8 v1291 = (i8)(intptr_t)(ws+1136);
	i8 v1292 = *(i8*)(intptr_t)v1291;
	i8 v1293 = (i8)+0;
	if (v1292==v1293) goto c02_0132; else goto c02_0131;

c02_0131:;

	i1 v1294 = (i1)+83;
	i8 v1295 = (i8)(intptr_t)(f60_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1295)(v1294);

	i8 v1296 = (i8)+0;
	i8 v1297 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1297 = v1296;

	goto c02_012e;

c02_0132:;

c02_012e:;

endsub:;
}
	void f77_CloseChunk(void);
	void f69_GetC(void);
	void f73_ReadWord(void);
	void f67_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f75_MarkSubroutinePublic(i8 /* symbol */);
	void f63_EmitterDeclareSubroutine(i8 /* name */, i2 /* id */);
	void f59_EmitterPushChunk(void);
	void f57_E_b16(i2 /* word */);

// DeclareSubroutine workspace at ws+1184 length ws+1
void f78_DeclareSubroutine(i1 p1298 /* exported */) {
	*(i1*)(intptr_t)(ws+1184) = p1298; /*exported */

	i8 v1299 = (i8)(intptr_t)(f77_CloseChunk);

	((void(*)(void))(intptr_t)v1299)();

	i8 v1300 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1300)();

	i8 v1301 = (i8)(intptr_t)(f73_ReadWord);

	((void(*)(void))(intptr_t)v1301)();

	i8 v1302 = (i8)(intptr_t)(ws+1148);
	i8 v1303 = (i8)(intptr_t)(f67_GetSymbol);
	i8 v1304;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1303)(&v1304, v1302);
	i8 v1305 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1305 = v1304;

	i8 v1306 = (i8)(intptr_t)(ws+1136);
	i8 v1307 = *(i8*)(intptr_t)v1306;
	i8 v1308 = v1307+(+18);
	i1 v1309 = *(i1*)(intptr_t)v1308;
	i1 v1310 = v1309|(+1);
	i8 v1311 = (i8)(intptr_t)(ws+1136);
	i8 v1312 = *(i8*)(intptr_t)v1311;
	i8 v1313 = v1312+(+18);
	*(i1*)(intptr_t)v1313 = v1310;

	i8 v1314 = (i8)(intptr_t)(ws+1184);
	i1 v1315 = *(i1*)(intptr_t)v1314;
	i1 v1316 = (i1)+0;
	if (v1315==v1316) goto c02_0137; else goto c02_0136;

c02_0136:;

	i8 v1317 = (i8)(intptr_t)(ws+1136);
	i8 v1318 = *(i8*)(intptr_t)v1317;
	i8 v1319 = (i8)(intptr_t)(f75_MarkSubroutinePublic);

	((void(*)(i8 /* symbol */))(intptr_t)v1319)(v1318);

	goto c02_0133;

c02_0137:;

c02_0133:;

	i8 v1320 = (i8)(intptr_t)(ws+1136);
	i8 v1321 = *(i8*)(intptr_t)v1320;
	i8 v1322 = v1321+(+18);
	i1 v1323 = *(i1*)(intptr_t)v1322;
	i1 v1324 = v1323&(+4);
	i1 v1325 = (i1)+0;
	if (v1324==v1325) goto c02_013b; else goto c02_013c;

c02_013b:;

	i8 v1326 = (i8)(intptr_t)(ws+1136);
	i8 v1327 = *(i8*)(intptr_t)v1326;
	i8 v1328 = v1327+(+16);
	i2 v1329 = *(i2*)(intptr_t)v1328;
	i8 v1330 = (i8)(intptr_t)(ws+1136);
	i8 v1331 = *(i8*)(intptr_t)v1330;
	i8 v1332 = v1331+(+8);
	i8 v1333 = *(i8*)(intptr_t)v1332;
	i8 v1334 = (i8)(intptr_t)(f63_EmitterDeclareSubroutine);

	((void(*)(i8 /* name */, i2 /* id */))(intptr_t)v1334)(v1333, v1329);

	i8 v1335 = (i8)(intptr_t)(ws+1136);
	i8 v1336 = *(i8*)(intptr_t)v1335;
	i8 v1337 = v1336+(+18);
	i1 v1338 = *(i1*)(intptr_t)v1337;
	i1 v1339 = v1338|(+4);
	i8 v1340 = (i8)(intptr_t)(ws+1136);
	i8 v1341 = *(i8*)(intptr_t)v1340;
	i8 v1342 = v1341+(+18);
	*(i1*)(intptr_t)v1342 = v1339;

	goto c02_0138;

c02_013c:;

c02_0138:;

	i8 v1343 = (i8)(intptr_t)(f59_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1343)();

	i8 v1344 = (i8)(intptr_t)(ws+1136);
	i8 v1345 = *(i8*)(intptr_t)v1344;
	i8 v1346 = v1345+(+16);
	i2 v1347 = *(i2*)(intptr_t)v1346;
	i8 v1348 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1348)(v1347);

endsub:;
}
	void f69_GetC(void);
	void f73_ReadWord(void);
	void f67_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f72_SkipWhitespace(void);
	void f74_ReadNumber(i4* /* result */);
	void f72_SkipWhitespace(void);
	void f74_ReadNumber(i4* /* result */);
	void f66_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i2 /* id */);

// SetSubroutineWorkspace workspace at ws+1184 length ws+12
void f79_SetSubroutineWorkspace(void) {

	i8 v1349 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1349)();

	i8 v1350 = (i8)(intptr_t)(f73_ReadWord);

	((void(*)(void))(intptr_t)v1350)();

	i8 v1351 = (i8)(intptr_t)(ws+1148);
	i8 v1352 = (i8)(intptr_t)(f67_GetSymbol);
	i8 v1353;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1352)(&v1353, v1351);
	i8 v1354 = (i8)(intptr_t)(ws+1184);
	*(i8*)(intptr_t)v1354 = v1353;

	i8 v1355 = (i8)(intptr_t)(f72_SkipWhitespace);

	((void(*)(void))(intptr_t)v1355)();

	i8 v1356 = (i8)(intptr_t)(f74_ReadNumber);
	i4 v1357;

	((void(*)(i4* /* result */))(intptr_t)v1356)(&v1357);
	i1 v1358 = (s1)(s4)v1357;
	i8 v1359 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1359 = v1358;

	i8 v1360 = (i8)(intptr_t)(f72_SkipWhitespace);

	((void(*)(void))(intptr_t)v1360)();

	i8 v1361 = (i8)(intptr_t)(f74_ReadNumber);
	i4 v1362;

	((void(*)(i4* /* result */))(intptr_t)v1361)(&v1362);
	i2 v1363 = (s2)(s4)v1362;
	i8 v1364 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v1364 = v1363;

	i8 v1365 = (i8)(intptr_t)(ws+1184);
	i8 v1366 = *(i8*)(intptr_t)v1365;
	i8 v1367 = v1366+(+16);
	i2 v1368 = *(i2*)(intptr_t)v1367;
	i8 v1369 = (i8)(intptr_t)(ws+1192);
	i1 v1370 = *(i1*)(intptr_t)v1369;
	i8 v1371 = (i8)(intptr_t)(ws+1194);
	i2 v1372 = *(i2*)(intptr_t)v1371;
	i8 v1373 = (i8)(intptr_t)(f66_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i2 /* id */))(intptr_t)v1373)(v1372, v1370, v1368);

endsub:;
}
	void f69_GetC(void);
	void f73_ReadWord(void);
	void f67_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f65_EmitterReferenceSubroutine(i2 /* used */, i2 /* user */);
	void f70_ExpectC(i1 /* want */);
	void f74_ReadNumber(i4* /* result */);
	void f70_ExpectC(i1 /* want */);
	void f74_ReadNumber(i4* /* result */);
	void f55_E_b8(i1 /* byte */);
	void f57_E_b16(i2 /* word */);
	void f55_E_b8(i1 /* byte */);
	void f57_E_b16(i2 /* word */);

// EmitWorkspaceRef workspace at ws+1192 length ws+12
void f80_EmitWorkspaceRef(void) {

	i8 v1374 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1374)();

	i8 v1375 = (i8)(intptr_t)(f73_ReadWord);

	((void(*)(void))(intptr_t)v1375)();

	i8 v1376 = (i8)(intptr_t)(ws+1136);
	i8 v1377 = *(i8*)(intptr_t)v1376;
	i8 v1378 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1378 = v1377;

	i8 v1379 = (i8)(intptr_t)(ws+1148);
	i1 v1380 = *(i1*)(intptr_t)v1379;
	i1 v1381 = (i1)+0;
	if (v1380==v1381) goto c02_0141; else goto c02_0140;

c02_0140:;

	i8 v1382 = (i8)(intptr_t)(ws+1148);
	i8 v1383 = (i8)(intptr_t)(f67_GetSymbol);
	i8 v1384;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1383)(&v1384, v1382);
	i8 v1385 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1385 = v1384;

	i8 v1386 = (i8)(intptr_t)(ws+1136);
	i8 v1387 = *(i8*)(intptr_t)v1386;
	i8 v1388 = v1387+(+16);
	i2 v1389 = *(i2*)(intptr_t)v1388;
	i8 v1390 = (i8)(intptr_t)(ws+1192);
	i8 v1391 = *(i8*)(intptr_t)v1390;
	i8 v1392 = v1391+(+16);
	i2 v1393 = *(i2*)(intptr_t)v1392;
	i8 v1394 = (i8)(intptr_t)(f65_EmitterReferenceSubroutine);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v1394)(v1393, v1389);

	goto c02_013d;

c02_0141:;

c02_013d:;

	i1 v1395 = (i1)+46;
	i8 v1396 = (i8)(intptr_t)(f70_ExpectC);

	((void(*)(i1 /* want */))(intptr_t)v1396)(v1395);

	i8 v1397 = (i8)(intptr_t)(f74_ReadNumber);
	i4 v1398;

	((void(*)(i4* /* result */))(intptr_t)v1397)(&v1398);
	i1 v1399 = (s1)(s4)v1398;
	i8 v1400 = (i8)(intptr_t)(ws+1200);
	*(i1*)(intptr_t)v1400 = v1399;

	i1 v1401 = (i1)+46;
	i8 v1402 = (i8)(intptr_t)(f70_ExpectC);

	((void(*)(i1 /* want */))(intptr_t)v1402)(v1401);

	i8 v1403 = (i8)(intptr_t)(f74_ReadNumber);
	i4 v1404;

	((void(*)(i4* /* result */))(intptr_t)v1403)(&v1404);
	i2 v1405 = (s2)(s4)v1404;
	i8 v1406 = (i8)(intptr_t)(ws+1202);
	*(i2*)(intptr_t)v1406 = v1405;

	i1 v1407 = (i1)+2;
	i8 v1408 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1408)(v1407);

	i8 v1409 = (i8)(intptr_t)(ws+1192);
	i8 v1410 = *(i8*)(intptr_t)v1409;
	i8 v1411 = v1410+(+16);
	i2 v1412 = *(i2*)(intptr_t)v1411;
	i8 v1413 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1413)(v1412);

	i8 v1414 = (i8)(intptr_t)(ws+1200);
	i1 v1415 = *(i1*)(intptr_t)v1414;
	i8 v1416 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1416)(v1415);

	i8 v1417 = (i8)(intptr_t)(ws+1202);
	i2 v1418 = *(i2*)(intptr_t)v1417;
	i8 v1419 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1419)(v1418);

endsub:;
}
const i1 c02_s000a[] = { 0x73,0x6f,0x75,0x72,0x63,0x65,0x20,0x74,0x65,0x78,0x74,0x20,0x77,0x69,0x74,0x68,0x20,0x6e,0x6f,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f54_FatalError(i8 /* s */);
	void f69_GetC(void);
	void f55_E_b8(i1 /* byte */);
	void f69_GetC(void);
	void f55_E_b8(i1 /* byte */);
	void f69_GetC(void);
	void f80_EmitWorkspaceRef(void);
	void f73_ReadWord(void);
	void f67_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f55_E_b8(i1 /* byte */);
	void f57_E_b16(i2 /* word */);
	void f65_EmitterReferenceSubroutine(i2 /* used */, i2 /* user */);
	void f55_E_b8(i1 /* byte */);
	void f69_GetC(void);
	void f55_E_b8(i1 /* byte */);

// SourceLine workspace at ws+1184 length ws+8
void f81_SourceLine(void) {

	i8 v1420 = (i8)(intptr_t)(ws+1136);
	i8 v1421 = *(i8*)(intptr_t)v1420;
	i8 v1422 = (i8)+0;
	if (v1421==v1422) goto c02_0145; else goto c02_0146;

c02_0145:;

	i8 v1423 = (i8)(intptr_t)c02_s000a;
	i8 v1424 = (i8)(intptr_t)(f54_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1424)(v1423);

	goto c02_0142;

c02_0146:;

c02_0142:;

c02_0147:;

	i8 v1425 = (i8)(intptr_t)(ws+1144);
	i1 v1426 = *(i1*)(intptr_t)v1425;
	i1 v1427 = (i1)+0;
	if (v1426==v1427) goto c02_0150; else goto c02_0153;

c02_0153:;

	i8 v1428 = (i8)(intptr_t)(ws+1144);
	i1 v1429 = *(i1*)(intptr_t)v1428;
	i1 v1430 = (i1)+10;
	if (v1429==v1430) goto c02_0150; else goto c02_0152;

c02_0152:;

	i8 v1431 = (i8)(intptr_t)(ws+1144);
	i1 v1432 = *(i1*)(intptr_t)v1431;
	i1 v1433 = (i1)+26;
	if (v1432==v1433) goto c02_0150; else goto c02_0151;

c02_0150:;

	goto c02_0148;

c02_0151:;

c02_0149:;

	i8 v1434 = (i8)(intptr_t)(ws+1144);
	i1 v1435 = *(i1*)(intptr_t)v1434;
	i1 v1436 = (i1)+13;
	if (v1435==v1436) goto c02_0158; else goto c02_0157;

c02_0157:;

	i8 v1437 = (i8)(intptr_t)(ws+1144);
	i1 v1438 = *(i1*)(intptr_t)v1437;
	i1 v1439 = (i1)+96;
	if (v1438==v1439) goto c02_015c; else goto c02_015d;

c02_015c:;

	i8 v1440 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1440)();

	i8 v1441 = (i8)(intptr_t)(ws+1144);
	i1 v1442 = *(i1*)(intptr_t)v1441;

	if (v1442 != +96) goto c02_015f;

	i1 v1443 = (i1)+4;
	i8 v1444 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1444)(v1443);

	i8 v1445 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1445)();

	goto c02_015e;

c02_015f:;

	if (v1442 != +94) goto c02_0160;

	i1 v1446 = (i1)+3;
	i8 v1447 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1447)(v1446);

	i8 v1448 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1448)();

	goto c02_015e;

c02_0160:;

	if (v1442 != +36) goto c02_0161;

	i8 v1449 = (i8)(intptr_t)(f80_EmitWorkspaceRef);

	((void(*)(void))(intptr_t)v1449)();

	goto c02_015e;

c02_0161:;

	i8 v1450 = (i8)(intptr_t)(f73_ReadWord);

	((void(*)(void))(intptr_t)v1450)();

	i8 v1451 = (i8)(intptr_t)(ws+1148);
	i8 v1452 = (i8)(intptr_t)(f67_GetSymbol);
	i8 v1453;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1452)(&v1453, v1451);
	i8 v1454 = (i8)(intptr_t)(ws+1184);
	*(i8*)(intptr_t)v1454 = v1453;

	i1 v1455 = (i1)+1;
	i8 v1456 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1456)(v1455);

	i8 v1457 = (i8)(intptr_t)(ws+1184);
	i8 v1458 = *(i8*)(intptr_t)v1457;
	i8 v1459 = v1458+(+16);
	i2 v1460 = *(i2*)(intptr_t)v1459;
	i8 v1461 = (i8)(intptr_t)(f57_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1461)(v1460);

	i8 v1462 = (i8)(intptr_t)(ws+1136);
	i8 v1463 = *(i8*)(intptr_t)v1462;
	i8 v1464 = v1463+(+16);
	i2 v1465 = *(i2*)(intptr_t)v1464;
	i8 v1466 = (i8)(intptr_t)(ws+1184);
	i8 v1467 = *(i8*)(intptr_t)v1466;
	i8 v1468 = v1467+(+16);
	i2 v1469 = *(i2*)(intptr_t)v1468;
	i8 v1470 = (i8)(intptr_t)(f65_EmitterReferenceSubroutine);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v1470)(v1469, v1465);

c02_015e:;


	goto c02_0159;

c02_015d:;

	i8 v1471 = (i8)(intptr_t)(ws+1144);
	i1 v1472 = *(i1*)(intptr_t)v1471;
	i8 v1473 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1473)(v1472);

	i8 v1474 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1474)();

c02_0159:;

	goto c02_0154;

c02_0158:;

c02_0154:;

	goto c02_0147;

c02_0148:;

	i1 v1475 = (i1)+10;
	i8 v1476 = (i8)(intptr_t)(f55_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1476)(v1475);

endsub:;
}
	void f69_GetC(void);
	void f69_GetC(void);
	void f78_DeclareSubroutine(i1 /* exported */);
	void f78_DeclareSubroutine(i1 /* exported */);
	void f79_SetSubroutineWorkspace(void);
const i1 c02_s000b[] = { 0x62,0x61,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x63,0x6f,0x6d,0x6d,0x61,0x6e,0x64,0 };
	void f54_FatalError(i8 /* s */);
	void f71_SkipToEndOfLine(void);
	void f71_SkipToEndOfLine(void);
	void f81_SourceLine(void);
	void f69_GetC(void);
	void f77_CloseChunk(void);

// ProcessFile workspace at ws+1144 length ws+36
void f68_ProcessFile(void) {

	i8 v1169 = (i8)(intptr_t)c02_s0006;
	i8 v1170 = (i8)(intptr_t)(ws+1104);
	*(i8*)(intptr_t)v1170 = v1169;

	i1 v1171 = (i1)+5;
	i8 v1172 = (i8)(intptr_t)(ws+1114);
	*(i1*)(intptr_t)v1172 = v1171;

	i2 v1173 = (i2)+0;
	i8 v1174 = (i8)(intptr_t)(ws+1146);
	*(i2*)(intptr_t)v1174 = v1173;














	i8 v1477 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1477)();

c02_0162:;

	i8 v1478 = (i8)(intptr_t)(ws+1144);
	i1 v1479 = *(i1*)(intptr_t)v1478;
	i1 v1480 = (i1)+0;
	if (v1479==v1480) goto c02_0169; else goto c02_016b;

c02_016b:;

	i8 v1481 = (i8)(intptr_t)(ws+1144);
	i1 v1482 = *(i1*)(intptr_t)v1481;
	i1 v1483 = (i1)+26;
	if (v1482==v1483) goto c02_0169; else goto c02_016a;

c02_0169:;

	goto c02_0163;

c02_016a:;

c02_0164:;

	i8 v1484 = (i8)(intptr_t)(ws+1144);
	i1 v1485 = *(i1*)(intptr_t)v1484;

	if (v1485 != +38) goto c02_016d;

	i8 v1486 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1486)();

	i8 v1487 = (i8)(intptr_t)(ws+1144);
	i1 v1488 = *(i1*)(intptr_t)v1487;

	if (v1488 != +88) goto c02_016f;

	i1 v1489 = (i1)+1;
	i8 v1490 = (i8)(intptr_t)(f78_DeclareSubroutine);

	((void(*)(i1 /* exported */))(intptr_t)v1490)(v1489);

	goto c02_016e;

c02_016f:;

	if (v1488 != +83) goto c02_0170;

	i1 v1491 = (i1)+0;
	i8 v1492 = (i8)(intptr_t)(f78_DeclareSubroutine);

	((void(*)(i1 /* exported */))(intptr_t)v1492)(v1491);

	goto c02_016e;

c02_0170:;

	if (v1488 != +87) goto c02_0171;

	i8 v1493 = (i8)(intptr_t)(f79_SetSubroutineWorkspace);

	((void(*)(void))(intptr_t)v1493)();

	goto c02_016e;

c02_0171:;

	i8 v1494 = (i8)(intptr_t)c02_s000b;
	i8 v1495 = (i8)(intptr_t)(f54_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1495)(v1494);

c02_016e:;


	i8 v1496 = (i8)(intptr_t)(f71_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1496)();

	goto c02_016c;

c02_016d:;

	if (v1485 != +35) goto c02_0172;

	i8 v1497 = (i8)(intptr_t)(f71_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1497)();

	goto c02_016c;

c02_0172:;

	i8 v1498 = (i8)(intptr_t)(f81_SourceLine);

	((void(*)(void))(intptr_t)v1498)();

c02_016c:;


	i8 v1499 = (i8)(intptr_t)(f69_GetC);

	((void(*)(void))(intptr_t)v1499)();

	goto c02_0162;

c02_0163:;

	i8 v1500 = (i8)(intptr_t)(f77_CloseChunk);

	((void(*)(void))(intptr_t)v1500)();

endsub:;
}
const i1 c02_s000c[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x63,0x6c,0x61,0x72,0x65,0x64,0x20,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s000d[] = { 0x27,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s000e[] = { 0x66,0x61,0x69,0x6c,0x65,0x64,0 };
	void f54_FatalError(i8 /* s */);

// CheckSymbols workspace at ws+1144 length ws+16
void f82_CheckSymbols(void) {

	i1 v1501 = (i1)+1;
	i8 v1502 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v1502 = v1501;

	i8 v1503 = (i8)(intptr_t)(ws+1120);
	i8 v1504 = *(i8*)(intptr_t)v1503;
	i8 v1505 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1505 = v1504;

c02_0175:;

	i8 v1506 = (i8)(intptr_t)(ws+1152);
	i8 v1507 = *(i8*)(intptr_t)v1506;
	i8 v1508 = (i8)+0;
	if (v1507==v1508) goto c02_0178; else goto c02_0177;

c02_0177:;

	i8 v1509 = (i8)(intptr_t)(ws+1152);
	i8 v1510 = *(i8*)(intptr_t)v1509;
	i8 v1511 = v1510+(+18);
	i1 v1512 = *(i1*)(intptr_t)v1511;
	i1 v1513 = (i1)+0;
	if (v1512==v1513) goto c02_017c; else goto c02_017d;

c02_017c:;

	i8 v1514 = (i8)(intptr_t)c02_s000c;
	i8 v1515 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1515)(v1514);

	i8 v1516 = (i8)(intptr_t)(ws+1152);
	i8 v1517 = *(i8*)(intptr_t)v1516;
	i8 v1518 = v1517+(+8);
	i8 v1519 = *(i8*)(intptr_t)v1518;
	i8 v1520 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1520)(v1519);

	i8 v1521 = (i8)(intptr_t)c02_s000d;
	i8 v1522 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1522)(v1521);

	i1 v1523 = (i1)+0;
	i8 v1524 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v1524 = v1523;

	goto c02_0179;

c02_017d:;

c02_0179:;

	i8 v1525 = (i8)(intptr_t)(ws+1152);
	i8 v1526 = *(i8*)(intptr_t)v1525;
	i8 v1527 = *(i8*)(intptr_t)v1526;
	i8 v1528 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1528 = v1527;

	goto c02_0175;

c02_0178:;

	i8 v1529 = (i8)(intptr_t)(ws+1144);
	i1 v1530 = *(i1*)(intptr_t)v1529;
	i1 v1531 = (i1)+0;
	if (v1530==v1531) goto c02_0181; else goto c02_0182;

c02_0181:;

	i8 v1532 = (i8)(intptr_t)c02_s000e;
	i8 v1533 = (i8)(intptr_t)(f54_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1533)(v1532);

	goto c02_017e;

c02_0182:;

c02_017e:;

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
	void f24_ArgvNext(i8* /* arg */);
	void f24_ArgvNext(i8* /* arg */);
	void f53_SyntaxError(void);
	void f40_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s000f[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f54_FatalError(i8 /* s */);
	void f61_EmitterOpenfile(i8 /* filename */);
	void f68_ProcessFile(void);
	void f82_CheckSymbols(void);
	void f62_EmitterClosefile(void);

// __main workspace at ws+0 length ws+1144
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 




















































	i8 v825 = (i8)+0;
	i8 v826 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v826 = v825;

	i8 v827 = (i8)+0;
	i8 v828 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v828 = v827;

	i8 v829 = (i8)(intptr_t)c02_s0000;
	i8 v830 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v830)(v829);

	i8 v831 = (i8)(intptr_t)(f35_GetFreeMemory);
	i8 v832;

	((void(*)(i8* /* i */))(intptr_t)v831)(&v832);
	i1 v833 = (i1)+10;
	i8 v834 = ((i8)v832)>>v833;
	i2 v835 = v834;
	i8 v836 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v836)(v835);

	i8 v837 = (i8)(intptr_t)c02_s0001;
	i8 v838 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v838)(v837);















	i8 v1115 = (i8)(intptr_t)(ws+1096);
	i8 v1116 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1116 = v1115;

	i2 v1117 = (i2)+1;
	i8 v1118 = (i8)(intptr_t)(ws+1128);
	*(i2*)(intptr_t)v1118 = v1117;

	i8 v1119 = (i8)+0;
	i8 v1120 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1120 = v1119;




	i8 v1534 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v1534)();

	i8 v1535 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v1536;

	((void(*)(i8* /* arg */))(intptr_t)v1535)(&v1536);
	i8 v1537 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1537 = v1536;

	i8 v1538 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v1539;

	((void(*)(i8* /* arg */))(intptr_t)v1538)(&v1539);
	i8 v1540 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1540 = v1539;

	i8 v1541 = (i8)(intptr_t)(ws+24);
	i8 v1542 = *(i8*)(intptr_t)v1541;
	i8 v1543 = (i8)+0;
	if (v1542==v1543) goto c02_018a; else goto c02_018d;

c02_018d:;

	i8 v1544 = (i8)(intptr_t)(ws+32);
	i8 v1545 = *(i8*)(intptr_t)v1544;
	i8 v1546 = (i8)+0;
	if (v1545==v1546) goto c02_018a; else goto c02_018c;

c02_018c:;

	i8 v1547 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v1548;

	((void(*)(i8* /* arg */))(intptr_t)v1547)(&v1548);
	i8 v1549 = (i8)+0;
	if (v1548==v1549) goto c02_018b; else goto c02_018a;

c02_018a:;

	i8 v1550 = (i8)(intptr_t)(f53_SyntaxError);

	((void(*)(void))(intptr_t)v1550)();

	goto c02_0183;

c02_018b:;

c02_0183:;

	i8 v1551 = (i8)(intptr_t)(ws+40);
	i8 v1552 = (i8)(intptr_t)(ws+24);
	i8 v1553 = *(i8*)(intptr_t)v1552;
	i8 v1554 = (i8)(intptr_t)(f40_FCBOpenIn);
	i1 v1555;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1554)(&v1555, v1553, v1551);
	i1 v1556 = (i1)+0;
	if (v1555==v1556) goto c02_0192; else goto c02_0191;

c02_0191:;

	i8 v1557 = (i8)(intptr_t)c02_s000f;
	i8 v1558 = (i8)(intptr_t)(f54_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1558)(v1557);

	goto c02_018e;

c02_0192:;

c02_018e:;

	i8 v1559 = (i8)(intptr_t)(ws+32);
	i8 v1560 = *(i8*)(intptr_t)v1559;
	i8 v1561 = (i8)(intptr_t)(f61_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v1561)(v1560);

	i8 v1562 = (i8)(intptr_t)(f68_ProcessFile);

	((void(*)(void))(intptr_t)v1562)();

	i8 v1563 = (i8)(intptr_t)(f82_CheckSymbols);

	((void(*)(void))(intptr_t)v1563)();

	i8 v1564 = (i8)(intptr_t)(f62_EmitterClosefile);

	((void(*)(void))(intptr_t)v1564)();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                           