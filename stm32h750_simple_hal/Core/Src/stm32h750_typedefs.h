typedef struct {
	__IO union {
			struct {
				uint32_t MBKEN:1;
				uint32_t MUXEN:1;
				uint32_t MTYP:2;
				uint32_t MWID:2;
				uint32_t FACCEN:1;
				uint32_t RESERVED7:1;
				uint32_t BURSTEN:1;
				uint32_t WAITPOL:1;
				uint32_t RESERVED10:1;
				uint32_t WAITCFG:1;
				uint32_t WREN:1;
				uint32_t WAITEN:1;
				uint32_t EXTMOD:1;
				uint32_t ASYNCWAIT:1;
				uint32_t CPSIZE:3;
				uint32_t CBURSTRW:1;
				uint32_t CCLKEN:1;
				uint32_t WFDIS:1;
				uint32_t RESERVED22:2;
				uint32_t BMAP:2;
				uint32_t RESERVED26:5;
				uint32_t FMCEN:1;
			};
			uint32_t val;
		} BCR1;
	__IO union {
			struct {
				uint32_t ADDSET:4;
				uint32_t ADDHLD:4;
				uint32_t DATAST:8;
				uint32_t BUSTURN:4;
				uint32_t CLKDIV:4;
				uint32_t DATLAT:4;
				uint32_t ACCMOD:2;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} BTR1;
	__IO union {
			struct {
				uint32_t MBKEN:1;
				uint32_t MUXEN:1;
				uint32_t MTYP:2;
				uint32_t MWID:2;
				uint32_t FACCEN:1;
				uint32_t RESERVED7:1;
				uint32_t BURSTEN:1;
				uint32_t WAITPOL:1;
				uint32_t RESERVED10:1;
				uint32_t WAITCFG:1;
				uint32_t WREN:1;
				uint32_t WAITEN:1;
				uint32_t EXTMOD:1;
				uint32_t ASYNCWAIT:1;
				uint32_t CPSIZE:3;
				uint32_t CBURSTRW:1;
				uint32_t CCLKEN:1;
				uint32_t WFDIS:1;
				uint32_t RESERVED22:2;
				uint32_t BMAP:2;
				uint32_t RESERVED26:5;
				uint32_t FMCEN:1;
			};
			uint32_t val;
		} BCR2;
	__IO union {
			struct {
				uint32_t ADDSET:4;
				uint32_t ADDHLD:4;
				uint32_t DATAST:8;
				uint32_t BUSTURN:4;
				uint32_t CLKDIV:4;
				uint32_t DATLAT:4;
				uint32_t ACCMOD:2;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} BTR2;
	__IO union {
			struct {
				uint32_t MBKEN:1;
				uint32_t MUXEN:1;
				uint32_t MTYP:2;
				uint32_t MWID:2;
				uint32_t FACCEN:1;
				uint32_t RESERVED7:1;
				uint32_t BURSTEN:1;
				uint32_t WAITPOL:1;
				uint32_t RESERVED10:1;
				uint32_t WAITCFG:1;
				uint32_t WREN:1;
				uint32_t WAITEN:1;
				uint32_t EXTMOD:1;
				uint32_t ASYNCWAIT:1;
				uint32_t CPSIZE:3;
				uint32_t CBURSTRW:1;
				uint32_t CCLKEN:1;
				uint32_t WFDIS:1;
				uint32_t RESERVED22:2;
				uint32_t BMAP:2;
				uint32_t RESERVED26:5;
				uint32_t FMCEN:1;
			};
			uint32_t val;
		} BCR3;
	__IO union {
			struct {
				uint32_t ADDSET:4;
				uint32_t ADDHLD:4;
				uint32_t DATAST:8;
				uint32_t BUSTURN:4;
				uint32_t CLKDIV:4;
				uint32_t DATLAT:4;
				uint32_t ACCMOD:2;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} BTR3;
	__IO union {
			struct {
				uint32_t MBKEN:1;
				uint32_t MUXEN:1;
				uint32_t MTYP:2;
				uint32_t MWID:2;
				uint32_t FACCEN:1;
				uint32_t RESERVED7:1;
				uint32_t BURSTEN:1;
				uint32_t WAITPOL:1;
				uint32_t RESERVED10:1;
				uint32_t WAITCFG:1;
				uint32_t WREN:1;
				uint32_t WAITEN:1;
				uint32_t EXTMOD:1;
				uint32_t ASYNCWAIT:1;
				uint32_t CPSIZE:3;
				uint32_t CBURSTRW:1;
				uint32_t CCLKEN:1;
				uint32_t WFDIS:1;
				uint32_t RESERVED22:2;
				uint32_t BMAP:2;
				uint32_t RESERVED26:5;
				uint32_t FMCEN:1;
			};
			uint32_t val;
		} BCR4;
	__IO union {
			struct {
				uint32_t ADDSET:4;
				uint32_t ADDHLD:4;
				uint32_t DATAST:8;
				uint32_t BUSTURN:4;
				uint32_t CLKDIV:4;
				uint32_t DATLAT:4;
				uint32_t ACCMOD:2;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} BTR4;
	uint32_t RESERVED8;
	uint32_t RESERVED9;
	uint32_t RESERVED10;
	uint32_t RESERVED11;
	uint32_t RESERVED12;
	uint32_t RESERVED13;
	uint32_t RESERVED14;
	uint32_t RESERVED15;
	uint32_t RESERVED16;
	uint32_t RESERVED17;
	uint32_t RESERVED18;
	uint32_t RESERVED19;
	uint32_t RESERVED20;
	uint32_t RESERVED21;
	uint32_t RESERVED22;
	uint32_t RESERVED23;
	uint32_t RESERVED24;
	uint32_t RESERVED25;
	uint32_t RESERVED26;
	uint32_t RESERVED27;
	uint32_t RESERVED28;
	uint32_t RESERVED29;
	uint32_t RESERVED30;
	uint32_t RESERVED31;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t PWAITEN:1;
				uint32_t PBKEN:1;
				uint32_t RESERVED3:1;
				uint32_t PWID:2;
				uint32_t ECCEN:1;
				uint32_t RESERVED7:2;
				uint32_t TCLR:4;
				uint32_t TAR:4;
				uint32_t ECCPS:3;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} PCR;
	__IO union {
			struct {
				uint32_t IRS:1;
				uint32_t ILS:1;
				uint32_t IFS:1;
				uint32_t IREN:1;
				uint32_t ILEN:1;
				uint32_t IFEN:1;
				uint32_t FEMPT:1;
				uint32_t RESERVED7:25;
			};
			uint32_t val;
		} SR;
	__IO union {
			struct {
				uint32_t MEMSET:8;
				uint32_t MEMWAIT:8;
				uint32_t MEMHOLD:8;
				uint32_t MEMHIZ:8;
			};
			uint32_t val;
		} PMEM;
	__IO union {
			struct {
				uint32_t ATTSET:8;
				uint32_t ATTWAIT:8;
				uint32_t ATTHOLD:8;
				uint32_t ATTHIZ:8;
			};
			uint32_t val;
		} PATT;
	uint32_t RESERVED36;
	__IO union {
			struct {
				uint32_t ECC:32;
			};
			uint32_t val;
		} ECCR;
	uint32_t RESERVED38;
	uint32_t RESERVED39;
	uint32_t RESERVED40;
	uint32_t RESERVED41;
	uint32_t RESERVED42;
	uint32_t RESERVED43;
	uint32_t RESERVED44;
	uint32_t RESERVED45;
	uint32_t RESERVED46;
	uint32_t RESERVED47;
	uint32_t RESERVED48;
	uint32_t RESERVED49;
	uint32_t RESERVED50;
	uint32_t RESERVED51;
	uint32_t RESERVED52;
	uint32_t RESERVED53;
	uint32_t RESERVED54;
	uint32_t RESERVED55;
	uint32_t RESERVED56;
	uint32_t RESERVED57;
	uint32_t RESERVED58;
	uint32_t RESERVED59;
	uint32_t RESERVED60;
	uint32_t RESERVED61;
	uint32_t RESERVED62;
	uint32_t RESERVED63;
	uint32_t RESERVED64;
	__IO union {
			struct {
				uint32_t ADDSET:4;
				uint32_t ADDHLD:4;
				uint32_t DATAST:8;
				uint32_t BUSTURN:4;
				uint32_t RESERVED20:8;
				uint32_t ACCMOD:2;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} BWTR1;
	uint32_t RESERVED66;
	__IO union {
			struct {
				uint32_t ADDSET:4;
				uint32_t ADDHLD:4;
				uint32_t DATAST:8;
				uint32_t BUSTURN:4;
				uint32_t RESERVED20:8;
				uint32_t ACCMOD:2;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} BWTR2;
	uint32_t RESERVED68;
	__IO union {
			struct {
				uint32_t ADDSET:4;
				uint32_t ADDHLD:4;
				uint32_t DATAST:8;
				uint32_t BUSTURN:4;
				uint32_t RESERVED20:8;
				uint32_t ACCMOD:2;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} BWTR3;
	uint32_t RESERVED70;
	__IO union {
			struct {
				uint32_t ADDSET:4;
				uint32_t ADDHLD:4;
				uint32_t DATAST:8;
				uint32_t BUSTURN:4;
				uint32_t RESERVED20:8;
				uint32_t ACCMOD:2;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} BWTR4;
	uint32_t RESERVED72;
	uint32_t RESERVED73;
	uint32_t RESERVED74;
	uint32_t RESERVED75;
	uint32_t RESERVED76;
	uint32_t RESERVED77;
	uint32_t RESERVED78;
	uint32_t RESERVED79;
	__IO union {
			struct {
				uint32_t NC:2;
				uint32_t NR:2;
				uint32_t MWID:2;
				uint32_t NB:1;
				uint32_t CAS:2;
				uint32_t WP:1;
				uint32_t SDCLK:2;
				uint32_t RBURST:1;
				uint32_t RPIPE:2;
				uint32_t RESERVED15:17;
			};
			uint32_t val;
		} SDCR1;
	__IO union {
			struct {
				uint32_t NC:2;
				uint32_t NR:2;
				uint32_t MWID:2;
				uint32_t NB:1;
				uint32_t CAS:2;
				uint32_t WP:1;
				uint32_t SDCLK:2;
				uint32_t RBURST:1;
				uint32_t RPIPE:2;
				uint32_t RESERVED15:17;
			};
			uint32_t val;
		} SDCR2;
	__IO union {
			struct {
				uint32_t TMRD:4;
				uint32_t TXSR:4;
				uint32_t TRAS:4;
				uint32_t TRC:4;
				uint32_t TWR:4;
				uint32_t TRP:4;
				uint32_t TRCD:4;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} SDTR1;
	__IO union {
			struct {
				uint32_t TMRD:4;
				uint32_t TXSR:4;
				uint32_t TRAS:4;
				uint32_t TRC:4;
				uint32_t TWR:4;
				uint32_t TRP:4;
				uint32_t TRCD:4;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} SDTR2;
	__IO union {
			struct {
				uint32_t MODE:3;
				uint32_t CTB2:1;
				uint32_t CTB1:1;
				uint32_t NRFS:4;
				uint32_t MRD:14;
				uint32_t RESERVED23:9;
			};
			uint32_t val;
		} SDCMR;
	__IO union {
			struct {
				uint32_t CRE:1;
				uint32_t COUNT:13;
				uint32_t REIE:1;
				uint32_t RESERVED15:17;
			};
			uint32_t val;
		} SDRTR;
	__IO union {
			struct {
				uint32_t RE:1;
				uint32_t MODES1:2;
				uint32_t MODES2:2;
				uint32_t RESERVED5:27;
			};
			uint32_t val;
		} SDSR;
} MyFMC_TypeDef;

typedef struct {
	__IO union {
			struct {
				uint32_t MODE0:2;
				uint32_t MODE1:2;
				uint32_t MODE2:2;
				uint32_t MODE3:2;
				uint32_t MODE4:2;
				uint32_t MODE5:2;
				uint32_t MODE6:2;
				uint32_t MODE7:2;
				uint32_t MODE8:2;
				uint32_t MODE9:2;
				uint32_t MODE10:2;
				uint32_t MODE11:2;
				uint32_t MODE12:2;
				uint32_t MODE13:2;
				uint32_t MODE14:2;
				uint32_t MODE15:2;
			};
			uint32_t val;
		} MODER;
	__IO union {
			struct {
				uint32_t OT0:1;
				uint32_t OT1:1;
				uint32_t OT2:1;
				uint32_t OT3:1;
				uint32_t OT4:1;
				uint32_t OT5:1;
				uint32_t OT6:1;
				uint32_t OT7:1;
				uint32_t OT8:1;
				uint32_t OT9:1;
				uint32_t OT10:1;
				uint32_t OT11:1;
				uint32_t OT12:1;
				uint32_t OT13:1;
				uint32_t OT14:1;
				uint32_t OT15:1;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} OTYPER;
	__IO union {
			struct {
				uint32_t OSPEED0:2;
				uint32_t OSPEED1:2;
				uint32_t OSPEED2:2;
				uint32_t OSPEED3:2;
				uint32_t OSPEED4:2;
				uint32_t OSPEED5:2;
				uint32_t OSPEED6:2;
				uint32_t OSPEED7:2;
				uint32_t OSPEED8:2;
				uint32_t OSPEED9:2;
				uint32_t OSPEED10:2;
				uint32_t OSPEED11:2;
				uint32_t OSPEED12:2;
				uint32_t OSPEED13:2;
				uint32_t OSPEED14:2;
				uint32_t OSPEED15:2;
			};
			uint32_t val;
		} OSPEEDR;
	__IO union {
			struct {
				uint32_t PUPD0:2;
				uint32_t PUPD1:2;
				uint32_t PUPD2:2;
				uint32_t PUPD3:2;
				uint32_t PUPD4:2;
				uint32_t PUPD5:2;
				uint32_t PUPD6:2;
				uint32_t PUPD7:2;
				uint32_t PUPD8:2;
				uint32_t PUPD9:2;
				uint32_t PUPD10:2;
				uint32_t PUPD11:2;
				uint32_t PUPD12:2;
				uint32_t PUPD13:2;
				uint32_t PUPD14:2;
				uint32_t PUPD15:2;
			};
			uint32_t val;
		} PUPDR;
	__IO union {
			struct {
				uint32_t ID0:1;
				uint32_t ID1:1;
				uint32_t ID2:1;
				uint32_t ID3:1;
				uint32_t ID4:1;
				uint32_t ID5:1;
				uint32_t ID6:1;
				uint32_t ID7:1;
				uint32_t ID8:1;
				uint32_t ID9:1;
				uint32_t ID10:1;
				uint32_t ID11:1;
				uint32_t ID12:1;
				uint32_t ID13:1;
				uint32_t ID14:1;
				uint32_t ID15:1;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} IDR;
	__IO union {
			struct {
				uint32_t OD0:1;
				uint32_t OD1:1;
				uint32_t OD2:1;
				uint32_t OD3:1;
				uint32_t OD4:1;
				uint32_t OD5:1;
				uint32_t OD6:1;
				uint32_t OD7:1;
				uint32_t OD8:1;
				uint32_t OD9:1;
				uint32_t OD10:1;
				uint32_t OD11:1;
				uint32_t OD12:1;
				uint32_t OD13:1;
				uint32_t OD14:1;
				uint32_t OD15:1;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} ODR;
	__IO union {
			struct {
				uint32_t BS0:1;
				uint32_t BS1:1;
				uint32_t BS2:1;
				uint32_t BS3:1;
				uint32_t BS4:1;
				uint32_t BS5:1;
				uint32_t BS6:1;
				uint32_t BS7:1;
				uint32_t BS8:1;
				uint32_t BS9:1;
				uint32_t BS10:1;
				uint32_t BS11:1;
				uint32_t BS12:1;
				uint32_t BS13:1;
				uint32_t BS14:1;
				uint32_t BS15:1;
				uint32_t BR0:1;
				uint32_t BR1:1;
				uint32_t BR2:1;
				uint32_t BR3:1;
				uint32_t BR4:1;
				uint32_t BR5:1;
				uint32_t BR6:1;
				uint32_t BR7:1;
				uint32_t BR8:1;
				uint32_t BR9:1;
				uint32_t BR10:1;
				uint32_t BR11:1;
				uint32_t BR12:1;
				uint32_t BR13:1;
				uint32_t BR14:1;
				uint32_t BR15:1;
			};
			uint32_t val;
		} BSRR;
	__IO union {
			struct {
				uint32_t LCK0:1;
				uint32_t LCK1:1;
				uint32_t LCK2:1;
				uint32_t LCK3:1;
				uint32_t LCK4:1;
				uint32_t LCK5:1;
				uint32_t LCK6:1;
				uint32_t LCK7:1;
				uint32_t LCK8:1;
				uint32_t LCK9:1;
				uint32_t LCK10:1;
				uint32_t LCK11:1;
				uint32_t LCK12:1;
				uint32_t LCK13:1;
				uint32_t LCK14:1;
				uint32_t LCK15:1;
				uint32_t LCKK:1;
				uint32_t RESERVED17:15;
			};
			uint32_t val;
		} LCKR;
	__IO union {
			struct {
				uint32_t AFSEL0:4;
				uint32_t AFSEL1:4;
				uint32_t AFSEL2:4;
				uint32_t AFSEL3:4;
				uint32_t AFSEL4:4;
				uint32_t AFSEL5:4;
				uint32_t AFSEL6:4;
				uint32_t AFSEL7:4;
			};
			uint32_t val;
		} AFRL;
	__IO union {
			struct {
				uint32_t AFSEL8:4;
				uint32_t AFSEL9:4;
				uint32_t AFSEL10:4;
				uint32_t AFSEL11:4;
				uint32_t AFSEL12:4;
				uint32_t AFSEL13:4;
				uint32_t AFSEL14:4;
				uint32_t AFSEL15:4;
			};
			uint32_t val;
		} AFRH;
} MyGPIOA_TypeDef;

//typedef struct {
//} MyGPIOB_TypeDef;

//typedef struct {
//} MyGPIOC_TypeDef;

//typedef struct {
//} MyGPIOD_TypeDef;

//typedef struct {
//} MyGPIOE_TypeDef;

//typedef struct {
//} MyGPIOF_TypeDef;

//typedef struct {
//} MyGPIOG_TypeDef;

//typedef struct {
//} MyGPIOH_TypeDef;

//typedef struct {
//} MyGPIOI_TypeDef;

//typedef struct {
//} MyGPIOJ_TypeDef;

//typedef struct {
//} MyGPIOK_TypeDef;

typedef struct {
	__IO union {
			struct {
				uint32_t EN:1;
				uint32_t ABORT:1;
				uint32_t DMAEN:1;
				uint32_t TCEN:1;
				uint32_t SSHIFT:1;
				uint32_t RESERVED5:1;
				uint32_t DFM:1;
				uint32_t FSEL:1;
				uint32_t FTHRES:5;
				uint32_t RESERVED13:3;
				uint32_t TEIE:1;
				uint32_t TCIE:1;
				uint32_t FTIE:1;
				uint32_t SMIE:1;
				uint32_t TOIE:1;
				uint32_t RESERVED21:1;
				uint32_t APMS:1;
				uint32_t PMM:1;
				uint32_t PRESCALER:8;
			};
			uint32_t val;
		} CR;
	__IO union {
			struct {
				uint32_t CKMODE:1;
				uint32_t RESERVED1:7;
				uint32_t CSHT:3;
				uint32_t RESERVED11:5;
				uint32_t FSIZE:5;
				uint32_t RESERVED21:11;
			};
			uint32_t val;
		} DCR;
	__IO union {
			struct {
				uint32_t TEF:1;
				uint32_t TCF:1;
				uint32_t FTF:1;
				uint32_t SMF:1;
				uint32_t TOF:1;
				uint32_t BUSY:1;
				uint32_t RESERVED6:2;
				uint32_t FLEVEL:6;
				uint32_t RESERVED14:18;
			};
			uint32_t val;
		} SR;
	__IO union {
			struct {
				uint32_t CTEF:1;
				uint32_t CTCF:1;
				uint32_t RESERVED2:1;
				uint32_t CSMF:1;
				uint32_t CTOF:1;
				uint32_t RESERVED5:27;
			};
			uint32_t val;
		} FCR;
	__IO union {
			struct {
				uint32_t DL:32;
			};
			uint32_t val;
		} DLR;
	__IO union {
			struct {
				uint32_t INSTRUCTION:8;
				uint32_t IMODE:2;
				uint32_t ADMODE:2;
				uint32_t ADSIZE:2;
				uint32_t ABMODE:2;
				uint32_t ABSIZE:2;
				uint32_t DCYC:5;
				uint32_t RESERVED23:1;
				uint32_t DMODE:2;
				uint32_t FMODE:2;
				uint32_t SIOO:1;
				uint32_t RESERVED29:1;
				uint32_t DHHC:1;
				uint32_t DDRM:1;
			};
			uint32_t val;
		} CCR;
	__IO union {
			struct {
				uint32_t ADDRESS:32;
			};
			uint32_t val;
		} AR;
	__IO union {
			struct {
				uint32_t ALTERNATE:32;
			};
			uint32_t val;
		} ABR;
	__IO union {
			struct {
				uint32_t DATA:32;
			};
			uint32_t val;
		} DR;
	__IO union {
			struct {
				uint32_t MASK:32;
			};
			uint32_t val;
		} PSMKR;
	__IO union {
			struct {
				uint32_t MATCH:32;
			};
			uint32_t val;
		} PSMAR;
	__IO union {
			struct {
				uint32_t INTERVAL:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} PIR;
	__IO union {
			struct {
				uint32_t TIMEOUT:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} LPTR;
} MyQUADSPI_TypeDef;

typedef struct {
	__IO union {
			struct {
				uint32_t LPDS:1;
				uint32_t RESERVED1:3;
				uint32_t PVDE:1;
				uint32_t PLS:3;
				uint32_t DBP:1;
				uint32_t FLPS:1;
				uint32_t RESERVED10:4;
				uint32_t SVOS:2;
				uint32_t AVDEN:1;
				uint32_t ALS:2;
				uint32_t RESERVED19:13;
			};
			uint32_t val;
		} CR1;
	__IO union {
			struct {
				uint32_t RESERVED0:4;
				uint32_t PVDO:1;
				uint32_t RESERVED5:8;
				uint32_t ACTVOSRDY:1;
				uint32_t ACTVOS:2;
				uint32_t AVDO:1;
				uint32_t RESERVED17:15;
			};
			uint32_t val;
		} CSR1;
	__IO union {
			struct {
				uint32_t BREN:1;
				uint32_t RESERVED1:3;
				uint32_t MONEN:1;
				uint32_t RESERVED5:11;
				uint32_t BRRDY:1;
				uint32_t RESERVED17:3;
				uint32_t VBATL:1;
				uint32_t VBATH:1;
				uint32_t TEMPL:1;
				uint32_t TEMPH:1;
				uint32_t RESERVED24:8;
			};
			uint32_t val;
		} CR2;
	__IO union {
			struct {
				uint32_t BYPASS:1;
				uint32_t LDOEN:1;
				uint32_t SDEN:1;
				uint32_t RESERVED3:5;
				uint32_t VBE:1;
				uint32_t VBRS:1;
				uint32_t RESERVED10:14;
				uint32_t USB33DEN:1;
				uint32_t USBREGEN:1;
				uint32_t USB33RDY:1;
				uint32_t RESERVED27:5;
			};
			uint32_t val;
		} CR3;
	__IO union {
			struct {
				uint32_t PDDS_D1:1;
				uint32_t PDDS_D2:1;
				uint32_t PDDS_D3:1;
				uint32_t RESERVED3:2;
				uint32_t STOPF:1;
				uint32_t SBF:1;
				uint32_t SBF_D1:1;
				uint32_t SBF_D2:1;
				uint32_t CSSF:1;
				uint32_t RESERVED10:1;
				uint32_t RUN_D3:1;
				uint32_t RESERVED12:20;
			};
			uint32_t val;
		} CPUCR;
	uint32_t RESERVED5;
	__IO union {
			struct {
				uint32_t RESERVED0:13;
				uint32_t VOSRDY:1;
				uint32_t VOS:2;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} D3CR;
	uint32_t RESERVED7;
	__IO union {
			struct {
				uint32_t WKUPC:6;
				uint32_t RESERVED6:26;
			};
			uint32_t val;
		} WKUPCR;
	__IO union {
			struct {
				uint32_t WKUPF1:1;
				uint32_t WKUPF2:1;
				uint32_t WKUPF3:1;
				uint32_t WKUPF4:1;
				uint32_t WKUPF5:1;
				uint32_t WKUPF6:1;
				uint32_t RESERVED6:26;
			};
			uint32_t val;
		} WKUPFR;
	__IO union {
			struct {
				uint32_t WKUPEN1:1;
				uint32_t WKUPEN2:1;
				uint32_t WKUPEN3:1;
				uint32_t WKUPEN4:1;
				uint32_t WKUPEN5:1;
				uint32_t WKUPEN6:1;
				uint32_t RESERVED6:2;
				uint32_t WKUPP1:1;
				uint32_t WKUPP2:1;
				uint32_t WKUPP3:1;
				uint32_t WKUPP4:1;
				uint32_t WKUPP5:1;
				uint32_t WKUPP6:1;
				uint32_t RESERVED14:2;
				uint32_t WKUPPUPD1:2;
				uint32_t WKUPPUPD2:2;
				uint32_t WKUPPUPD3:2;
				uint32_t WKUPPUPD4:2;
				uint32_t WKUPPUPD5:2;
				uint32_t WKUPPUPD6:2;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} WKUPEPR;
} MyPWR_TypeDef;

typedef struct {
	__IO union {
			struct {
				uint32_t SPE:1;
				uint32_t RESERVED1:7;
				uint32_t MASRX:1;
				uint32_t CSTART:1;
				uint32_t CSUSP:1;
				uint32_t HDDIR:1;
				uint32_t SSI:1;
				uint32_t CRC33_17:1;
				uint32_t RCRCI:1;
				uint32_t TCRCI:1;
				uint32_t IOLOCK:1;
				uint32_t RESERVED17:15;
			};
			uint32_t val;
		} CR1;
	__IO union {
			struct {
				uint32_t TSIZE:16;
				uint32_t TSER:16;
			};
			uint32_t val;
		} CR2;
	__IO union {
			struct {
				uint32_t DSIZE:5;
				uint32_t FTHVL:4;
				uint32_t UDRCFG:2;
				uint32_t UDRDET:2;
				uint32_t RESERVED13:1;
				uint32_t RXDMAEN:1;
				uint32_t TXDMAEN:1;
				uint32_t CRCSIZE:5;
				uint32_t RESERVED21:1;
				uint32_t CRCEN:1;
				uint32_t RESERVED23:5;
				uint32_t MBR:3;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} CFG1;
	__IO union {
			struct {
				uint32_t MSSI:4;
				uint32_t MIDI:4;
				uint32_t RESERVED8:7;
				uint32_t IOSWP:1;
				uint32_t RESERVED16:1;
				uint32_t COMM:2;
				uint32_t SP:3;
				uint32_t MASTER:1;
				uint32_t LSBFRST:1;
				uint32_t CPHA:1;
				uint32_t CPOL:1;
				uint32_t SSM:1;
				uint32_t RESERVED27:1;
				uint32_t SSIOP:1;
				uint32_t SSOE:1;
				uint32_t SSOM:1;
				uint32_t AFCNTR:1;
			};
			uint32_t val;
		} CFG2;
	__IO union {
			struct {
				uint32_t RXPIE:1;
				uint32_t TXPIE:1;
				uint32_t DPXPIE:1;
				uint32_t EOTIE:1;
				uint32_t TXTFIE:1;
				uint32_t UDRIE:1;
				uint32_t OVRIE:1;
				uint32_t CRCEIE:1;
				uint32_t TIFREIE:1;
				uint32_t MODFIE:1;
				uint32_t TSERFIE:1;
				uint32_t RESERVED11:21;
			};
			uint32_t val;
		} IER;
	__IO union {
			struct {
				uint32_t RXP:1;
				uint32_t TXP:1;
				uint32_t DXP:1;
				uint32_t EOT:1;
				uint32_t TXTF:1;
				uint32_t UDR:1;
				uint32_t OVR:1;
				uint32_t CRCE:1;
				uint32_t TIFRE:1;
				uint32_t MODF:1;
				uint32_t TSERF:1;
				uint32_t SUSP:1;
				uint32_t TXC:1;
				uint32_t RXPLVL:2;
				uint32_t RXWNE:1;
				uint32_t CTSIZE:16;
			};
			uint32_t val;
		} SR;
	__IO union {
			struct {
				uint32_t RESERVED0:3;
				uint32_t EOTC:1;
				uint32_t TXTFC:1;
				uint32_t UDRC:1;
				uint32_t OVRC:1;
				uint32_t CRCEC:1;
				uint32_t TIFREC:1;
				uint32_t MODFC:1;
				uint32_t TSERFC:1;
				uint32_t SUSPC:1;
				uint32_t RESERVED12:20;
			};
			uint32_t val;
		} IFCR;
	uint32_t RESERVED7;
	__IO union {
			struct {
				uint32_t TXDR:32;
			};
			uint32_t val;
		} TXDR;
	uint32_t RESERVED9;
	uint32_t RESERVED10;
	uint32_t RESERVED11;
	__IO union {
			struct {
				uint32_t RXDR:32;
			};
			uint32_t val;
		} RXDR;
	uint32_t RESERVED13;
	uint32_t RESERVED14;
	uint32_t RESERVED15;
	__IO union {
			struct {
				uint32_t CRCPOLY:32;
			};
			uint32_t val;
		} CRCPOLY;
	__IO union {
			struct {
				uint32_t TXCRC:32;
			};
			uint32_t val;
		} TXCRC;
	__IO union {
			struct {
				uint32_t RXCRC:32;
			};
			uint32_t val;
		} RXCRC;
	__IO union {
			struct {
				uint32_t UDRDR:32;
			};
			uint32_t val;
		} UDRDR;
	__IO union {
			struct {
				uint32_t I2SMOD:1;
				uint32_t I2SCFG:3;
				uint32_t I2SSTD:2;
				uint32_t RESERVED6:1;
				uint32_t PCMSYNC:1;
				uint32_t DATLEN:2;
				uint32_t CHLEN:1;
				uint32_t CKPOL:1;
				uint32_t FIXCH:1;
				uint32_t WSINV:1;
				uint32_t DATFMT:1;
				uint32_t RESERVED15:1;
				uint32_t I2SDIV:8;
				uint32_t ODD:1;
				uint32_t MCKOE:1;
				uint32_t RESERVED26:6;
			};
			uint32_t val;
		} CGFR;
} MySPI1_TypeDef;

typedef struct {
	uint32_t RESERVED0;
	uint32_t RESERVED1;
	__IO union {
			struct {
				uint32_t VSH:11;
				uint32_t RESERVED11:5;
				uint32_t HSW:10;
				uint32_t RESERVED26:6;
			};
			uint32_t val;
		} SSCR;
	__IO union {
			struct {
				uint32_t AVBP:11;
				uint32_t RESERVED11:5;
				uint32_t AHBP:12;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} BPCR;
	__IO union {
			struct {
				uint32_t AAH:11;
				uint32_t RESERVED11:5;
				uint32_t AAV:12;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} AWCR;
	__IO union {
			struct {
				uint32_t TOTALH:11;
				uint32_t RESERVED11:5;
				uint32_t TOTALW:12;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} TWCR;
	__IO union {
			struct {
				uint32_t LTDCEN:1;
				uint32_t RESERVED1:3;
				uint32_t DBW:3;
				uint32_t RESERVED7:1;
				uint32_t DGW:3;
				uint32_t RESERVED11:1;
				uint32_t DRW:3;
				uint32_t RESERVED15:1;
				uint32_t DEN:1;
				uint32_t RESERVED17:11;
				uint32_t PCPOL:1;
				uint32_t DEPOL:1;
				uint32_t VSPOL:1;
				uint32_t HSPOL:1;
			};
			uint32_t val;
		} GCR;
	uint32_t RESERVED7;
	uint32_t RESERVED8;
	__IO union {
			struct {
				uint32_t IMR:1;
				uint32_t VBR:1;
				uint32_t RESERVED2:30;
			};
			uint32_t val;
		} SRCR;
	uint32_t RESERVED10;
	__IO union {
			struct {
				uint32_t BCBLUE:8;
				uint32_t BCGREEN:8;
				uint32_t BCRED:8;
				uint32_t RESERVED24:8;
			};
			uint32_t val;
		} BCCR;
	uint32_t RESERVED12;
	__IO union {
			struct {
				uint32_t LIE:1;
				uint32_t FUIE:1;
				uint32_t TERRIE:1;
				uint32_t RRIE:1;
				uint32_t RESERVED4:28;
			};
			uint32_t val;
		} IER;
	__IO union {
			struct {
				uint32_t LIF:1;
				uint32_t FUIF:1;
				uint32_t TERRIF:1;
				uint32_t RRIF:1;
				uint32_t RESERVED4:28;
			};
			uint32_t val;
		} ISR;
	__IO union {
			struct {
				uint32_t CLIF:1;
				uint32_t CFUIF:1;
				uint32_t CTERRIF:1;
				uint32_t CRRIF:1;
				uint32_t RESERVED4:28;
			};
			uint32_t val;
		} ICR;
	__IO union {
			struct {
				uint32_t LIPOS:11;
				uint32_t RESERVED11:21;
			};
			uint32_t val;
		} LIPCR;
	__IO union {
			struct {
				uint32_t CYPOS:16;
				uint32_t CXPOS:16;
			};
			uint32_t val;
		} CPSR;
	__IO union {
			struct {
				uint32_t VDES:1;
				uint32_t HDES:1;
				uint32_t VSYNCS:1;
				uint32_t HSYNCS:1;
				uint32_t RESERVED4:28;
			};
			uint32_t val;
		} CDSR;
	uint32_t RESERVED19;
	uint32_t RESERVED20;
	uint32_t RESERVED21;
	uint32_t RESERVED22;
	uint32_t RESERVED23;
	uint32_t RESERVED24;
	uint32_t RESERVED25;
	uint32_t RESERVED26;
	uint32_t RESERVED27;
	uint32_t RESERVED28;
	uint32_t RESERVED29;
	uint32_t RESERVED30;
	uint32_t RESERVED31;
	uint32_t RESERVED32;
	__IO union {
			struct {
				uint32_t LEN:1;
				uint32_t COLKEN:1;
				uint32_t RESERVED2:2;
				uint32_t CLUTEN:1;
				uint32_t RESERVED5:27;
			};
			uint32_t val;
		} L1CR;
	__IO union {
			struct {
				uint32_t WHSTPOS:12;
				uint32_t RESERVED12:4;
				uint32_t WHSPPOS:12;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} L1WHPCR;
	__IO union {
			struct {
				uint32_t WVSTPOS:11;
				uint32_t RESERVED11:5;
				uint32_t WVSPPOS:11;
				uint32_t RESERVED27:5;
			};
			uint32_t val;
		} L1WVPCR;
	__IO union {
			struct {
				uint32_t CKBLUE:8;
				uint32_t CKGREEN:8;
				uint32_t CKRED:8;
				uint32_t RESERVED24:8;
			};
			uint32_t val;
		} L1CKCR;
	__IO union {
			struct {
				uint32_t PF:3;
				uint32_t RESERVED3:29;
			};
			uint32_t val;
		} L1PFCR;
	__IO union {
			struct {
				uint32_t CONSTA:8;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} L1CACR;
	__IO union {
			struct {
				uint32_t DCBLUE:8;
				uint32_t DCGREEN:8;
				uint32_t DCRED:8;
				uint32_t DCALPHA:8;
			};
			uint32_t val;
		} L1DCCR;
	__IO union {
			struct {
				uint32_t BF2:3;
				uint32_t RESERVED3:5;
				uint32_t BF1:3;
				uint32_t RESERVED11:21;
			};
			uint32_t val;
		} L1BFCR;
	uint32_t RESERVED41;
	uint32_t RESERVED42;
	__IO union {
			struct {
				uint32_t CFBADD:32;
			};
			uint32_t val;
		} L1CFBAR;
	__IO union {
			struct {
				uint32_t CFBLL:13;
				uint32_t RESERVED13:3;
				uint32_t CFBP:13;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} L1CFBLR;
	__IO union {
			struct {
				uint32_t CFBLNBR:11;
				uint32_t RESERVED11:21;
			};
			uint32_t val;
		} L1CFBLNR;
	uint32_t RESERVED46;
	uint32_t RESERVED47;
	uint32_t RESERVED48;
	__IO union {
			struct {
				uint32_t BLUE:8;
				uint32_t GREEN:8;
				uint32_t RED:8;
				uint32_t CLUTADD:8;
			};
			uint32_t val;
		} L1CLUTWR;
	uint32_t RESERVED50;
	uint32_t RESERVED51;
	uint32_t RESERVED52;
	uint32_t RESERVED53;
	uint32_t RESERVED54;
	uint32_t RESERVED55;
	uint32_t RESERVED56;
	uint32_t RESERVED57;
	uint32_t RESERVED58;
	uint32_t RESERVED59;
	uint32_t RESERVED60;
	uint32_t RESERVED61;
	uint32_t RESERVED62;
	uint32_t RESERVED63;
	uint32_t RESERVED64;
	__IO union {
			struct {
				uint32_t LEN:1;
				uint32_t COLKEN:1;
				uint32_t RESERVED2:2;
				uint32_t CLUTEN:1;
				uint32_t RESERVED5:27;
			};
			uint32_t val;
		} L2CR;
	__IO union {
			struct {
				uint32_t WHSTPOS:12;
				uint32_t RESERVED12:4;
				uint32_t WHSPPOS:12;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} L2WHPCR;
	__IO union {
			struct {
				uint32_t WVSTPOS:11;
				uint32_t RESERVED11:5;
				uint32_t WVSPPOS:11;
				uint32_t RESERVED27:5;
			};
			uint32_t val;
		} L2WVPCR;
	__IO union {
			struct {
				uint32_t CKBLUE:8;
				uint32_t CKGREEN:8;
				uint32_t CKRED:8;
				uint32_t RESERVED24:8;
			};
			uint32_t val;
		} L2CKCR;
	__IO union {
			struct {
				uint32_t PF:3;
				uint32_t RESERVED3:29;
			};
			uint32_t val;
		} L2PFCR;
	__IO union {
			struct {
				uint32_t CONSTA:8;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} L2CACR;
	__IO union {
			struct {
				uint32_t DCBLUE:8;
				uint32_t DCGREEN:8;
				uint32_t DCRED:8;
				uint32_t DCALPHA:8;
			};
			uint32_t val;
		} L2DCCR;
	__IO union {
			struct {
				uint32_t BF2:3;
				uint32_t RESERVED3:5;
				uint32_t BF1:3;
				uint32_t RESERVED11:21;
			};
			uint32_t val;
		} L2BFCR;
	uint32_t RESERVED73;
	uint32_t RESERVED74;
	__IO union {
			struct {
				uint32_t CFBADD:32;
			};
			uint32_t val;
		} L2CFBAR;
	__IO union {
			struct {
				uint32_t CFBLL:13;
				uint32_t RESERVED13:3;
				uint32_t CFBP:13;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} L2CFBLR;
	__IO union {
			struct {
				uint32_t CFBLNBR:11;
				uint32_t RESERVED11:21;
			};
			uint32_t val;
		} L2CFBLNR;
	uint32_t RESERVED78;
	uint32_t RESERVED79;
	uint32_t RESERVED80;
	__IO union {
			struct {
				uint32_t BLUE:8;
				uint32_t GREEN:8;
				uint32_t RED:8;
				uint32_t CLUTADD:8;
			};
			uint32_t val;
		} L2CLUTWR;
} MyLTDC_TypeDef;

typedef struct {
	__IO union {
			struct {
				uint32_t HSION:1;
				uint32_t HSIKERON:1;
				uint32_t HSIRDY:1;
				uint32_t HSIDIV:2;
				uint32_t HSIDIVF:1;
				uint32_t RESERVED6:1;
				uint32_t CSION:1;
				uint32_t CSIRDY:1;
				uint32_t CSIKERON:1;
				uint32_t RESERVED10:2;
				uint32_t RC48ON:1;
				uint32_t RC48RDY:1;
				uint32_t D1CKRDY:1;
				uint32_t D2CKRDY:1;
				uint32_t HSEON:1;
				uint32_t HSERDY:1;
				uint32_t HSEBYP:1;
				uint32_t HSECSSON:1;
				uint32_t RESERVED20:4;
				uint32_t PLL1ON:1;
				uint32_t PLL1RDY:1;
				uint32_t PLL2ON:1;
				uint32_t PLL2RDY:1;
				uint32_t PLL3ON:1;
				uint32_t PLL3RDY:1;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} CR;
	__IO union {
			struct {
				uint32_t HSICAL:12;
				uint32_t HSITRIM:6;
				uint32_t CSICAL:8;
				uint32_t CSITRIM:5;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} ICSCR;
	__IO union {
			struct {
				uint32_t RC48CAL:10;
				uint32_t RESERVED10:22;
			};
			uint32_t val;
		} CRRCR;
	uint32_t RESERVED3;
	__IO union {
			struct {
				uint32_t SW:3;
				uint32_t SWS:3;
				uint32_t STOPWUCK:1;
				uint32_t STOPKERWUCK:1;
				uint32_t RTCPRE:6;
				uint32_t HRTIMSEL:1;
				uint32_t TIMPRE:1;
				uint32_t RESERVED16:2;
				uint32_t MCO1PRE:4;
				uint32_t MCO1SEL:3;
				uint32_t MCO2PRE:4;
				uint32_t MCO2SEL:3;
			};
			uint32_t val;
		} CFGR;
	uint32_t RESERVED5;
	__IO union {
			struct {
				uint32_t HPRE:4;
				uint32_t D1PPRE:3;
				uint32_t RESERVED7:1;
				uint32_t D1CPRE:4;
				uint32_t RESERVED12:20;
			};
			uint32_t val;
		} D1CFGR;
	__IO union {
			struct {
				uint32_t RESERVED0:4;
				uint32_t D2PPRE1:3;
				uint32_t RESERVED7:1;
				uint32_t D2PPRE2:3;
				uint32_t RESERVED11:21;
			};
			uint32_t val;
		} D2CFGR;
	__IO union {
			struct {
				uint32_t RESERVED0:4;
				uint32_t D3PPRE:3;
				uint32_t RESERVED7:25;
			};
			uint32_t val;
		} D3CFGR;
	uint32_t RESERVED9;
	__IO union {
			struct {
				uint32_t PLLSRC:2;
				uint32_t RESERVED2:2;
				uint32_t DIVM1:6;
				uint32_t RESERVED10:2;
				uint32_t DIVM2:6;
				uint32_t RESERVED18:2;
				uint32_t DIVM3:6;
				uint32_t RESERVED26:6;
			};
			uint32_t val;
		} PLLCKSELR;
	__IO union {
			struct {
				uint32_t PLL1FRACEN:1;
				uint32_t PLL1VCOSEL:1;
				uint32_t PLL1RGE:2;
				uint32_t PLL2FRACEN:1;
				uint32_t PLL2VCOSEL:1;
				uint32_t PLL2RGE:2;
				uint32_t PLL3FRACEN:1;
				uint32_t PLL3VCOSEL:1;
				uint32_t PLL3RGE:2;
				uint32_t RESERVED12:4;
				uint32_t DIVP1EN:1;
				uint32_t DIVQ1EN:1;
				uint32_t DIVR1EN:1;
				uint32_t DIVP2EN:1;
				uint32_t DIVQ2EN:1;
				uint32_t DIVR2EN:1;
				uint32_t DIVP3EN:1;
				uint32_t DIVQ3EN:1;
				uint32_t DIVR3EN:1;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} PLLCFGR;
	__IO union {
			struct {
				uint32_t DIVN1:9;
				uint32_t DIVP1:7;
				uint32_t DIVQ1:7;
				uint32_t RESERVED23:1;
				uint32_t DIVR1:7;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} PLL1DIVR;
	__IO union {
			struct {
				uint32_t RESERVED0:3;
				uint32_t FRACN1:13;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} PLL1FRACR;
	__IO union {
			struct {
				uint32_t DIVN2:9;
				uint32_t DIVP2:7;
				uint32_t DIVQ2:7;
				uint32_t RESERVED23:1;
				uint32_t DIVR2:7;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} PLL2DIVR;
	__IO union {
			struct {
				uint32_t RESERVED0:3;
				uint32_t FRACN2:13;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} PLL2FRACR;
	__IO union {
			struct {
				uint32_t DIVN3:9;
				uint32_t DIVP3:7;
				uint32_t DIVQ3:7;
				uint32_t RESERVED23:1;
				uint32_t DIVR3:7;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} PLL3DIVR;
	__IO union {
			struct {
				uint32_t RESERVED0:3;
				uint32_t FRACN3:13;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} PLL3FRACR;
	uint32_t RESERVED18;
	__IO union {
			struct {
				uint32_t FMCSRC:2;
				uint32_t RESERVED2:2;
				uint32_t QSPISRC:2;
				uint32_t RESERVED6:10;
				uint32_t SDMMCSRC:1;
				uint32_t RESERVED17:11;
				uint32_t CKPERSRC:2;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} D1CCIPR;
	__IO union {
			struct {
				uint32_t SAI1SRC:3;
				uint32_t RESERVED3:3;
				uint32_t SAI23SRC:3;
				uint32_t RESERVED9:3;
				uint32_t SPI123SRC:3;
				uint32_t RESERVED15:1;
				uint32_t SPI45SRC:3;
				uint32_t RESERVED19:1;
				uint32_t SPDIFSRC:2;
				uint32_t RESERVED22:2;
				uint32_t DFSDM1SRC:1;
				uint32_t RESERVED25:3;
				uint32_t FDCANSRC:2;
				uint32_t RESERVED30:1;
				uint32_t SWPSRC:1;
			};
			uint32_t val;
		} D2CCIP1R;
	__IO union {
			struct {
				uint32_t USART234578SRC:3;
				uint32_t USART16SRC:3;
				uint32_t RESERVED6:2;
				uint32_t RNGSRC:2;
				uint32_t RESERVED10:2;
				uint32_t I2C123SRC:2;
				uint32_t RESERVED14:6;
				uint32_t USBSRC:2;
				uint32_t CECSRC:2;
				uint32_t RESERVED24:4;
				uint32_t LPTIM1SRC:3;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} D2CCIP2R;
	__IO union {
			struct {
				uint32_t LPUART1SRC:3;
				uint32_t RESERVED3:5;
				uint32_t I2C4SRC:2;
				uint32_t LPTIM2SRC:3;
				uint32_t LPTIM345SRC:3;
				uint32_t ADCSRC:2;
				uint32_t RESERVED18:3;
				uint32_t SAI4ASRC:3;
				uint32_t SAI4BSRC:3;
				uint32_t RESERVED27:1;
				uint32_t SPI6SRC:3;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} D3CCIPR;
	uint32_t RESERVED23;
	__IO union {
			struct {
				uint32_t LSIRDYIE:1;
				uint32_t LSERDYIE:1;
				uint32_t HSIRDYIE:1;
				uint32_t HSERDYIE:1;
				uint32_t CSIRDYIE:1;
				uint32_t RC48RDYIE:1;
				uint32_t PLL1RDYIE:1;
				uint32_t PLL2RDYIE:1;
				uint32_t PLL3RDYIE:1;
				uint32_t LSECSSIE:1;
				uint32_t RESERVED10:22;
			};
			uint32_t val;
		} CIER;
	__IO union {
			struct {
				uint32_t LSIRDYF:1;
				uint32_t LSERDYF:1;
				uint32_t HSIRDYF:1;
				uint32_t HSERDYF:1;
				uint32_t CSIRDY:1;
				uint32_t RC48RDYF:1;
				uint32_t PLL1RDYF:1;
				uint32_t PLL2RDYF:1;
				uint32_t PLL3RDYF:1;
				uint32_t LSECSSF:1;
				uint32_t HSECSSF:1;
				uint32_t RESERVED11:21;
			};
			uint32_t val;
		} CIFR;
	__IO union {
			struct {
				uint32_t LSIRDYC:1;
				uint32_t LSERDYC:1;
				uint32_t HSIRDYC:1;
				uint32_t HSERDYC:1;
				uint32_t HSE_ready_Interrupt_Clear:1;
				uint32_t RC48RDYC:1;
				uint32_t PLL1RDYC:1;
				uint32_t PLL2RDYC:1;
				uint32_t PLL3RDYC:1;
				uint32_t LSECSSC:1;
				uint32_t HSECSSC:1;
				uint32_t RESERVED11:21;
			};
			uint32_t val;
		} CICR;
	uint32_t RESERVED27;
	__IO union {
			struct {
				uint32_t LSEON:1;
				uint32_t LSERDY:1;
				uint32_t LSEBYP:1;
				uint32_t LSEDRV:2;
				uint32_t LSECSSON:1;
				uint32_t LSECSSD:1;
				uint32_t RESERVED7:1;
				uint32_t RTCSRC:2;
				uint32_t RESERVED10:5;
				uint32_t RTCEN:1;
				uint32_t VSWRST:1;
				uint32_t RESERVED17:15;
			};
			uint32_t val;
		} BDCR;
	__IO union {
			struct {
				uint32_t LSION:1;
				uint32_t LSIRDY:1;
				uint32_t RESERVED2:30;
			};
			uint32_t val;
		} CSR;
	uint32_t RESERVED30;
	__IO union {
			struct {
				uint32_t MDMARST:1;
				uint32_t RESERVED1:3;
				uint32_t DMA2DRST:1;
				uint32_t JPGDECRST:1;
				uint32_t RESERVED6:6;
				uint32_t FMCRST:1;
				uint32_t RESERVED13:1;
				uint32_t QSPIRST:1;
				uint32_t RESERVED15:1;
				uint32_t SDMMC1RST:1;
				uint32_t RESERVED17:14;
				uint32_t CPURST:1;
			};
			uint32_t val;
		} AHB3RSTR;
	__IO union {
			struct {
				uint32_t DMA1RST:1;
				uint32_t DMA2RST:1;
				uint32_t RESERVED2:3;
				uint32_t ADC12RST:1;
				uint32_t RESERVED6:9;
				uint32_t ETH1MACRST:1;
				uint32_t RESERVED16:9;
				uint32_t USB1OTGRST:1;
				uint32_t RESERVED26:1;
				uint32_t USB2OTGRST:1;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} AHB1RSTR;
	__IO union {
			struct {
				uint32_t CAMITFRST:1;
				uint32_t RESERVED1:3;
				uint32_t CRYPTRST:1;
				uint32_t HASHRST:1;
				uint32_t RNGRST:1;
				uint32_t RESERVED7:2;
				uint32_t SDMMC2RST:1;
				uint32_t RESERVED10:22;
			};
			uint32_t val;
		} AHB2RSTR;
	__IO union {
			struct {
				uint32_t GPIOARST:1;
				uint32_t GPIOBRST:1;
				uint32_t GPIOCRST:1;
				uint32_t GPIODRST:1;
				uint32_t GPIOERST:1;
				uint32_t GPIOFRST:1;
				uint32_t GPIOGRST:1;
				uint32_t GPIOHRST:1;
				uint32_t GPIOIRST:1;
				uint32_t GPIOJRST:1;
				uint32_t GPIOKRST:1;
				uint32_t RESERVED11:8;
				uint32_t CRCRST:1;
				uint32_t RESERVED20:1;
				uint32_t BDMARST:1;
				uint32_t RESERVED22:2;
				uint32_t ADC3RST:1;
				uint32_t HSEMRST:1;
				uint32_t RESERVED26:6;
			};
			uint32_t val;
		} AHB4RSTR;
	__IO union {
			struct {
				uint32_t RESERVED0:3;
				uint32_t LTDCRST:1;
				uint32_t RESERVED4:28;
			};
			uint32_t val;
		} APB3RSTR;
	__IO union {
			struct {
				uint32_t TIM2RST:1;
				uint32_t TIM3RST:1;
				uint32_t TIM4RST:1;
				uint32_t TIM5RST:1;
				uint32_t TIM6RST:1;
				uint32_t TIM7RST:1;
				uint32_t TIM12RST:1;
				uint32_t TIM13RST:1;
				uint32_t TIM14RST:1;
				uint32_t LPTIM1RST:1;
				uint32_t RESERVED10:4;
				uint32_t SPI2RST:1;
				uint32_t SPI3RST:1;
				uint32_t SPDIFRXRST:1;
				uint32_t USART2RST:1;
				uint32_t USART3RST:1;
				uint32_t UART4RST:1;
				uint32_t UART5RST:1;
				uint32_t I2C1RST:1;
				uint32_t I2C2RST:1;
				uint32_t I2C3RST:1;
				uint32_t RESERVED24:3;
				uint32_t HDMICECRST:1;
				uint32_t RESERVED28:1;
				uint32_t DAC12RST:1;
				uint32_t USART7RST:1;
				uint32_t USART8RST:1;
			};
			uint32_t val;
		} APB1LRSTR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t CRSRST:1;
				uint32_t SWPRST:1;
				uint32_t RESERVED3:1;
				uint32_t OPAMPRST:1;
				uint32_t MDIOSRST:1;
				uint32_t RESERVED6:2;
				uint32_t FDCANRST:1;
				uint32_t RESERVED9:23;
			};
			uint32_t val;
		} APB1HRSTR;
	__IO union {
			struct {
				uint32_t TIM1RST:1;
				uint32_t TIM8RST:1;
				uint32_t RESERVED2:2;
				uint32_t USART1RST:1;
				uint32_t USART6RST:1;
				uint32_t RESERVED6:6;
				uint32_t SPI1RST:1;
				uint32_t SPI4RST:1;
				uint32_t RESERVED14:2;
				uint32_t TIM15RST:1;
				uint32_t TIM16RST:1;
				uint32_t TIM17RST:1;
				uint32_t RESERVED19:1;
				uint32_t SPI5RST:1;
				uint32_t RESERVED21:1;
				uint32_t SAI1RST:1;
				uint32_t SAI2RST:1;
				uint32_t SAI3RST:1;
				uint32_t RESERVED25:3;
				uint32_t DFSDM1RST:1;
				uint32_t HRTIMRST:1;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} APB2RSTR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t SYSCFGRST:1;
				uint32_t RESERVED2:1;
				uint32_t LPUART1RST:1;
				uint32_t RESERVED4:1;
				uint32_t SPI6RST:1;
				uint32_t RESERVED6:1;
				uint32_t I2C4RST:1;
				uint32_t RESERVED8:1;
				uint32_t LPTIM2RST:1;
				uint32_t LPTIM3RST:1;
				uint32_t LPTIM4RST:1;
				uint32_t LPTIM5RST:1;
				uint32_t RESERVED13:1;
				uint32_t COMP12RST:1;
				uint32_t VREFRST:1;
				uint32_t RESERVED16:5;
				uint32_t SAI4RST:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} APB4RSTR;
	__IO union {
			struct {
				uint32_t WW1RSC:1;
				uint32_t RESERVED1:31;
			};
			uint32_t val;
		} GCR;
	uint32_t RESERVED41;
	__IO union {
			struct {
				uint32_t BDMAAMEN:1;
				uint32_t RESERVED1:2;
				uint32_t LPUART1AMEN:1;
				uint32_t RESERVED4:1;
				uint32_t SPI6AMEN:1;
				uint32_t RESERVED6:1;
				uint32_t I2C4AMEN:1;
				uint32_t RESERVED8:1;
				uint32_t LPTIM2AMEN:1;
				uint32_t LPTIM3AMEN:1;
				uint32_t LPTIM4AMEN:1;
				uint32_t LPTIM5AMEN:1;
				uint32_t RESERVED13:1;
				uint32_t COMP12AMEN:1;
				uint32_t VREFAMEN:1;
				uint32_t RTCAMEN:1;
				uint32_t RESERVED17:2;
				uint32_t CRCAMEN:1;
				uint32_t RESERVED20:1;
				uint32_t SAI4AMEN:1;
				uint32_t RESERVED22:2;
				uint32_t ADC3AMEN:1;
				uint32_t RESERVED25:3;
				uint32_t BKPSRAMAMEN:1;
				uint32_t SRAM4AMEN:1;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} D3AMR;
	uint32_t RESERVED43;
	uint32_t RESERVED44;
	uint32_t RESERVED45;
	uint32_t RESERVED46;
	uint32_t RESERVED47;
	uint32_t RESERVED48;
	uint32_t RESERVED49;
	uint32_t RESERVED50;
	uint32_t RESERVED51;
	__IO union {
			struct {
				uint32_t RESERVED0:16;
				uint32_t RMVF:1;
				uint32_t CPURSTF:1;
				uint32_t RESERVED18:1;
				uint32_t D1RSTF:1;
				uint32_t D2RSTF:1;
				uint32_t BORRSTF:1;
				uint32_t PINRSTF:1;
				uint32_t PORRSTF:1;
				uint32_t SFTRSTF:1;
				uint32_t RESERVED25:1;
				uint32_t IWDG1RSTF:1;
				uint32_t RESERVED27:1;
				uint32_t WWDG1RSTF:1;
				uint32_t RESERVED29:1;
				uint32_t LPWRRSTF:1;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} RSR;
	__IO union {
			struct {
				uint32_t MDMAEN:1;
				uint32_t RESERVED1:3;
				uint32_t DMA2DEN:1;
				uint32_t JPGDECEN:1;
				uint32_t RESERVED6:6;
				uint32_t FMCEN:1;
				uint32_t RESERVED13:1;
				uint32_t QSPIEN:1;
				uint32_t RESERVED15:1;
				uint32_t SDMMC1EN:1;
				uint32_t RESERVED17:15;
			};
			uint32_t val;
		} AHB3ENR;
	__IO union {
			struct {
				uint32_t DMA1EN:1;
				uint32_t DMA2EN:1;
				uint32_t RESERVED2:3;
				uint32_t ADC12EN:1;
				uint32_t RESERVED6:9;
				uint32_t ETH1MACEN:1;
				uint32_t ETH1TXEN:1;
				uint32_t ETH1RXEN:1;
				uint32_t RESERVED18:7;
				uint32_t USB1OTGEN:1;
				uint32_t USB1ULPIEN:1;
				uint32_t USB2OTGEN:1;
				uint32_t USB2ULPIEN:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} AHB1ENR;
	__IO union {
			struct {
				uint32_t CAMITFEN:1;
				uint32_t RESERVED1:3;
				uint32_t CRYPTEN:1;
				uint32_t HASHEN:1;
				uint32_t RNGEN:1;
				uint32_t RESERVED7:2;
				uint32_t SDMMC2EN:1;
				uint32_t RESERVED10:19;
				uint32_t SRAM1EN:1;
				uint32_t SRAM2EN:1;
				uint32_t SRAM3EN:1;
			};
			uint32_t val;
		} AHB2ENR;
	__IO union {
			struct {
				uint32_t GPIOAEN:1;
				uint32_t GPIOBEN:1;
				uint32_t GPIOCEN:1;
				uint32_t GPIODEN:1;
				uint32_t GPIOEEN:1;
				uint32_t GPIOFEN:1;
				uint32_t GPIOGEN:1;
				uint32_t GPIOHEN:1;
				uint32_t GPIOIEN:1;
				uint32_t GPIOJEN:1;
				uint32_t GPIOKEN:1;
				uint32_t RESERVED11:8;
				uint32_t CRCEN:1;
				uint32_t RESERVED20:1;
				uint32_t BDMAEN:1;
				uint32_t RESERVED22:2;
				uint32_t ADC3EN:1;
				uint32_t HSEMEN:1;
				uint32_t RESERVED26:2;
				uint32_t BKPRAMEN:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} AHB4ENR;
	__IO union {
			struct {
				uint32_t RESERVED0:3;
				uint32_t LTDCEN:1;
				uint32_t RESERVED4:2;
				uint32_t WWDG1EN:1;
				uint32_t RESERVED7:25;
			};
			uint32_t val;
		} APB3ENR;
	__IO union {
			struct {
				uint32_t TIM2EN:1;
				uint32_t TIM3EN:1;
				uint32_t TIM4EN:1;
				uint32_t TIM5EN:1;
				uint32_t TIM6EN:1;
				uint32_t TIM7EN:1;
				uint32_t TIM12EN:1;
				uint32_t TIM13EN:1;
				uint32_t TIM14EN:1;
				uint32_t LPTIM1EN:1;
				uint32_t RESERVED10:4;
				uint32_t SPI2EN:1;
				uint32_t SPI3EN:1;
				uint32_t SPDIFRXEN:1;
				uint32_t USART2EN:1;
				uint32_t USART3EN:1;
				uint32_t UART4EN:1;
				uint32_t UART5EN:1;
				uint32_t I2C1EN:1;
				uint32_t I2C2EN:1;
				uint32_t I2C3EN:1;
				uint32_t RESERVED24:3;
				uint32_t HDMICECEN:1;
				uint32_t RESERVED28:1;
				uint32_t DAC12EN:1;
				uint32_t USART7EN:1;
				uint32_t USART8EN:1;
			};
			uint32_t val;
		} APB1LENR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t CRSEN:1;
				uint32_t SWPEN:1;
				uint32_t RESERVED3:1;
				uint32_t OPAMPEN:1;
				uint32_t MDIOSEN:1;
				uint32_t RESERVED6:2;
				uint32_t FDCANEN:1;
				uint32_t RESERVED9:23;
			};
			uint32_t val;
		} APB1HENR;
	__IO union {
			struct {
				uint32_t TIM1EN:1;
				uint32_t TIM8EN:1;
				uint32_t RESERVED2:2;
				uint32_t USART1EN:1;
				uint32_t USART6EN:1;
				uint32_t RESERVED6:6;
				uint32_t SPI1EN:1;
				uint32_t SPI4EN:1;
				uint32_t RESERVED14:2;
				uint32_t TIM15EN:1;
				uint32_t TIM16EN:1;
				uint32_t TIM17EN:1;
				uint32_t RESERVED19:1;
				uint32_t SPI5EN:1;
				uint32_t RESERVED21:1;
				uint32_t SAI1EN:1;
				uint32_t SAI2EN:1;
				uint32_t SAI3EN:1;
				uint32_t RESERVED25:3;
				uint32_t DFSDM1EN:1;
				uint32_t HRTIMEN:1;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} APB2ENR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t SYSCFGEN:1;
				uint32_t RESERVED2:1;
				uint32_t LPUART1EN:1;
				uint32_t RESERVED4:1;
				uint32_t SPI6EN:1;
				uint32_t RESERVED6:1;
				uint32_t I2C4EN:1;
				uint32_t RESERVED8:1;
				uint32_t LPTIM2EN:1;
				uint32_t LPTIM3EN:1;
				uint32_t LPTIM4EN:1;
				uint32_t LPTIM5EN:1;
				uint32_t RESERVED13:1;
				uint32_t COMP12EN:1;
				uint32_t VREFEN:1;
				uint32_t RTCAPBEN:1;
				uint32_t RESERVED17:4;
				uint32_t SAI4EN:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} APB4ENR;
	uint32_t RESERVED62;
	__IO union {
			struct {
				uint32_t MDMALPEN:1;
				uint32_t RESERVED1:3;
				uint32_t DMA2DLPEN:1;
				uint32_t JPGDECLPEN:1;
				uint32_t RESERVED6:2;
				uint32_t FLITFLPEN:1;
				uint32_t RESERVED9:3;
				uint32_t FMCLPEN:1;
				uint32_t RESERVED13:1;
				uint32_t QSPILPEN:1;
				uint32_t RESERVED15:1;
				uint32_t SDMMC1LPEN:1;
				uint32_t RESERVED17:11;
				uint32_t D1DTCM1LPEN:1;
				uint32_t DTCM2LPEN:1;
				uint32_t ITCMLPEN:1;
				uint32_t AXISRAMLPEN:1;
			};
			uint32_t val;
		} AHB3LPENR;
	__IO union {
			struct {
				uint32_t DMA1LPEN:1;
				uint32_t DMA2LPEN:1;
				uint32_t RESERVED2:3;
				uint32_t ADC12LPEN:1;
				uint32_t RESERVED6:9;
				uint32_t ETH1MACLPEN:1;
				uint32_t ETH1TXLPEN:1;
				uint32_t ETH1RXLPEN:1;
				uint32_t RESERVED18:7;
				uint32_t USB1OTGLPEN:1;
				uint32_t USB1ULPILPEN:1;
				uint32_t USB2OTGLPEN:1;
				uint32_t USB2ULPILPEN:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} AHB1LPENR;
	__IO union {
			struct {
				uint32_t CAMITFLPEN:1;
				uint32_t RESERVED1:3;
				uint32_t CRYPTLPEN:1;
				uint32_t HASHLPEN:1;
				uint32_t RNGLPEN:1;
				uint32_t RESERVED7:2;
				uint32_t SDMMC2LPEN:1;
				uint32_t RESERVED10:19;
				uint32_t SRAM1LPEN:1;
				uint32_t SRAM2LPEN:1;
				uint32_t SRAM3LPEN:1;
			};
			uint32_t val;
		} AHB2LPENR;
	__IO union {
			struct {
				uint32_t GPIOALPEN:1;
				uint32_t GPIOBLPEN:1;
				uint32_t GPIOCLPEN:1;
				uint32_t GPIODLPEN:1;
				uint32_t GPIOELPEN:1;
				uint32_t GPIOFLPEN:1;
				uint32_t GPIOGLPEN:1;
				uint32_t GPIOHLPEN:1;
				uint32_t GPIOILPEN:1;
				uint32_t GPIOJLPEN:1;
				uint32_t GPIOKLPEN:1;
				uint32_t RESERVED11:8;
				uint32_t CRCLPEN:1;
				uint32_t RESERVED20:1;
				uint32_t BDMALPEN:1;
				uint32_t RESERVED22:2;
				uint32_t ADC3LPEN:1;
				uint32_t RESERVED25:3;
				uint32_t BKPRAMLPEN:1;
				uint32_t SRAM4LPEN:1;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} AHB4LPENR;
	__IO union {
			struct {
				uint32_t RESERVED0:3;
				uint32_t LTDCLPEN:1;
				uint32_t RESERVED4:2;
				uint32_t WWDG1LPEN:1;
				uint32_t RESERVED7:25;
			};
			uint32_t val;
		} APB3LPENR;
	__IO union {
			struct {
				uint32_t TIM2LPEN:1;
				uint32_t TIM3LPEN:1;
				uint32_t TIM4LPEN:1;
				uint32_t TIM5LPEN:1;
				uint32_t TIM6LPEN:1;
				uint32_t TIM7LPEN:1;
				uint32_t TIM12LPEN:1;
				uint32_t TIM13LPEN:1;
				uint32_t TIM14LPEN:1;
				uint32_t LPTIM1LPEN:1;
				uint32_t RESERVED10:4;
				uint32_t SPI2LPEN:1;
				uint32_t SPI3LPEN:1;
				uint32_t SPDIFRXLPEN:1;
				uint32_t USART2LPEN:1;
				uint32_t USART3LPEN:1;
				uint32_t UART4LPEN:1;
				uint32_t UART5LPEN:1;
				uint32_t I2C1LPEN:1;
				uint32_t I2C2LPEN:1;
				uint32_t I2C3LPEN:1;
				uint32_t RESERVED24:3;
				uint32_t HDMICECLPEN:1;
				uint32_t RESERVED28:1;
				uint32_t DAC12LPEN:1;
				uint32_t USART7LPEN:1;
				uint32_t USART8LPEN:1;
			};
			uint32_t val;
		} APB1LLPENR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t CRSLPEN:1;
				uint32_t SWPLPEN:1;
				uint32_t RESERVED3:1;
				uint32_t OPAMPLPEN:1;
				uint32_t MDIOSLPEN:1;
				uint32_t RESERVED6:2;
				uint32_t FDCANLPEN:1;
				uint32_t RESERVED9:23;
			};
			uint32_t val;
		} APB1HLPENR;
	__IO union {
			struct {
				uint32_t TIM1LPEN:1;
				uint32_t TIM8LPEN:1;
				uint32_t RESERVED2:2;
				uint32_t USART1LPEN:1;
				uint32_t USART6LPEN:1;
				uint32_t RESERVED6:6;
				uint32_t SPI1LPEN:1;
				uint32_t SPI4LPEN:1;
				uint32_t RESERVED14:2;
				uint32_t TIM15LPEN:1;
				uint32_t TIM16LPEN:1;
				uint32_t TIM17LPEN:1;
				uint32_t RESERVED19:1;
				uint32_t SPI5LPEN:1;
				uint32_t RESERVED21:1;
				uint32_t SAI1LPEN:1;
				uint32_t SAI2LPEN:1;
				uint32_t SAI3LPEN:1;
				uint32_t RESERVED25:3;
				uint32_t DFSDM1LPEN:1;
				uint32_t HRTIMLPEN:1;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} APB2LPENR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t SYSCFGLPEN:1;
				uint32_t RESERVED2:1;
				uint32_t LPUART1LPEN:1;
				uint32_t RESERVED4:1;
				uint32_t SPI6LPEN:1;
				uint32_t RESERVED6:1;
				uint32_t I2C4LPEN:1;
				uint32_t RESERVED8:1;
				uint32_t LPTIM2LPEN:1;
				uint32_t LPTIM3LPEN:1;
				uint32_t LPTIM4LPEN:1;
				uint32_t LPTIM5LPEN:1;
				uint32_t RESERVED13:1;
				uint32_t COMP12LPEN:1;
				uint32_t VREFLPEN:1;
				uint32_t RTCAPBLPEN:1;
				uint32_t RESERVED17:4;
				uint32_t SAI4LPEN:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} APB4LPENR;
	uint32_t RESERVED72;
	uint32_t RESERVED73;
	uint32_t RESERVED74;
	uint32_t RESERVED75;
	__IO union {
			struct {
				uint32_t RESERVED0:16;
				uint32_t RMVF:1;
				uint32_t CPURSTF:1;
				uint32_t RESERVED18:1;
				uint32_t D1RSTF:1;
				uint32_t D2RSTF:1;
				uint32_t BORRSTF:1;
				uint32_t PINRSTF:1;
				uint32_t PORRSTF:1;
				uint32_t SFTRSTF:1;
				uint32_t RESERVED25:1;
				uint32_t IWDG1RSTF:1;
				uint32_t RESERVED27:1;
				uint32_t WWDG1RSTF:1;
				uint32_t RESERVED29:1;
				uint32_t LPWRRSTF:1;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} C1_RSR;
	__IO union {
			struct {
				uint32_t MDMAEN:1;
				uint32_t RESERVED1:3;
				uint32_t DMA2DEN:1;
				uint32_t JPGDECEN:1;
				uint32_t RESERVED6:6;
				uint32_t FMCEN:1;
				uint32_t RESERVED13:1;
				uint32_t QSPIEN:1;
				uint32_t RESERVED15:1;
				uint32_t SDMMC1EN:1;
				uint32_t RESERVED17:15;
			};
			uint32_t val;
		} C1_AHB3ENR;
	__IO union {
			struct {
				uint32_t DMA1EN:1;
				uint32_t DMA2EN:1;
				uint32_t RESERVED2:3;
				uint32_t ADC12EN:1;
				uint32_t RESERVED6:9;
				uint32_t ETH1MACEN:1;
				uint32_t ETH1TXEN:1;
				uint32_t ETH1RXEN:1;
				uint32_t RESERVED18:7;
				uint32_t USB1OTGEN:1;
				uint32_t USB1ULPIEN:1;
				uint32_t USB2OTGEN:1;
				uint32_t USB2ULPIEN:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} C1_AHB1ENR;
	__IO union {
			struct {
				uint32_t CAMITFEN:1;
				uint32_t RESERVED1:3;
				uint32_t CRYPTEN:1;
				uint32_t HASHEN:1;
				uint32_t RNGEN:1;
				uint32_t RESERVED7:2;
				uint32_t SDMMC2EN:1;
				uint32_t RESERVED10:19;
				uint32_t SRAM1EN:1;
				uint32_t SRAM2EN:1;
				uint32_t SRAM3EN:1;
			};
			uint32_t val;
		} C1_AHB2ENR;
	__IO union {
			struct {
				uint32_t GPIOAEN:1;
				uint32_t GPIOBEN:1;
				uint32_t GPIOCEN:1;
				uint32_t GPIODEN:1;
				uint32_t GPIOEEN:1;
				uint32_t GPIOFEN:1;
				uint32_t GPIOGEN:1;
				uint32_t GPIOHEN:1;
				uint32_t GPIOIEN:1;
				uint32_t GPIOJEN:1;
				uint32_t GPIOKEN:1;
				uint32_t RESERVED11:8;
				uint32_t CRCEN:1;
				uint32_t RESERVED20:1;
				uint32_t BDMAEN:1;
				uint32_t RESERVED22:2;
				uint32_t ADC3EN:1;
				uint32_t HSEMEN:1;
				uint32_t RESERVED26:2;
				uint32_t BKPRAMEN:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} C1_AHB4ENR;
	__IO union {
			struct {
				uint32_t RESERVED0:3;
				uint32_t LTDCEN:1;
				uint32_t RESERVED4:2;
				uint32_t WWDG1EN:1;
				uint32_t RESERVED7:25;
			};
			uint32_t val;
		} C1_APB3ENR;
	__IO union {
			struct {
				uint32_t TIM2EN:1;
				uint32_t TIM3EN:1;
				uint32_t TIM4EN:1;
				uint32_t TIM5EN:1;
				uint32_t TIM6EN:1;
				uint32_t TIM7EN:1;
				uint32_t TIM12EN:1;
				uint32_t TIM13EN:1;
				uint32_t TIM14EN:1;
				uint32_t LPTIM1EN:1;
				uint32_t RESERVED10:4;
				uint32_t SPI2EN:1;
				uint32_t SPI3EN:1;
				uint32_t SPDIFRXEN:1;
				uint32_t USART2EN:1;
				uint32_t USART3EN:1;
				uint32_t UART4EN:1;
				uint32_t UART5EN:1;
				uint32_t I2C1EN:1;
				uint32_t I2C2EN:1;
				uint32_t I2C3EN:1;
				uint32_t RESERVED24:3;
				uint32_t HDMICECEN:1;
				uint32_t RESERVED28:1;
				uint32_t DAC12EN:1;
				uint32_t USART7EN:1;
				uint32_t USART8EN:1;
			};
			uint32_t val;
		} C1_APB1LENR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t CRSEN:1;
				uint32_t SWPEN:1;
				uint32_t RESERVED3:1;
				uint32_t OPAMPEN:1;
				uint32_t MDIOSEN:1;
				uint32_t RESERVED6:2;
				uint32_t FDCANEN:1;
				uint32_t RESERVED9:23;
			};
			uint32_t val;
		} C1_APB1HENR;
	__IO union {
			struct {
				uint32_t TIM1EN:1;
				uint32_t TIM8EN:1;
				uint32_t RESERVED2:2;
				uint32_t USART1EN:1;
				uint32_t USART6EN:1;
				uint32_t RESERVED6:6;
				uint32_t SPI1EN:1;
				uint32_t SPI4EN:1;
				uint32_t RESERVED14:2;
				uint32_t TIM15EN:1;
				uint32_t TIM16EN:1;
				uint32_t TIM17EN:1;
				uint32_t RESERVED19:1;
				uint32_t SPI5EN:1;
				uint32_t RESERVED21:1;
				uint32_t SAI1EN:1;
				uint32_t SAI2EN:1;
				uint32_t SAI3EN:1;
				uint32_t RESERVED25:3;
				uint32_t DFSDM1EN:1;
				uint32_t HRTIMEN:1;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} C1_APB2ENR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t SYSCFGEN:1;
				uint32_t RESERVED2:1;
				uint32_t LPUART1EN:1;
				uint32_t RESERVED4:1;
				uint32_t SPI6EN:1;
				uint32_t RESERVED6:1;
				uint32_t I2C4EN:1;
				uint32_t RESERVED8:1;
				uint32_t LPTIM2EN:1;
				uint32_t LPTIM3EN:1;
				uint32_t LPTIM4EN:1;
				uint32_t LPTIM5EN:1;
				uint32_t RESERVED13:1;
				uint32_t COMP12EN:1;
				uint32_t VREFEN:1;
				uint32_t RTCAPBEN:1;
				uint32_t RESERVED17:4;
				uint32_t SAI4EN:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} C1_APB4ENR;
	uint32_t RESERVED86;
	__IO union {
			struct {
				uint32_t MDMALPEN:1;
				uint32_t RESERVED1:3;
				uint32_t DMA2DLPEN:1;
				uint32_t JPGDECLPEN:1;
				uint32_t RESERVED6:2;
				uint32_t FLITFLPEN:1;
				uint32_t RESERVED9:3;
				uint32_t FMCLPEN:1;
				uint32_t RESERVED13:1;
				uint32_t QSPILPEN:1;
				uint32_t RESERVED15:1;
				uint32_t SDMMC1LPEN:1;
				uint32_t RESERVED17:11;
				uint32_t D1DTCM1LPEN:1;
				uint32_t DTCM2LPEN:1;
				uint32_t ITCMLPEN:1;
				uint32_t AXISRAMLPEN:1;
			};
			uint32_t val;
		} C1_AHB3LPENR;
	__IO union {
			struct {
				uint32_t DMA1LPEN:1;
				uint32_t DMA2LPEN:1;
				uint32_t RESERVED2:3;
				uint32_t ADC12LPEN:1;
				uint32_t RESERVED6:9;
				uint32_t ETH1MACLPEN:1;
				uint32_t ETH1TXLPEN:1;
				uint32_t ETH1RXLPEN:1;
				uint32_t RESERVED18:7;
				uint32_t USB1OTGLPEN:1;
				uint32_t USB1ULPILPEN:1;
				uint32_t USB2OTGLPEN:1;
				uint32_t USB2ULPILPEN:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} C1_AHB1LPENR;
	__IO union {
			struct {
				uint32_t CAMITFLPEN:1;
				uint32_t RESERVED1:3;
				uint32_t CRYPTLPEN:1;
				uint32_t HASHLPEN:1;
				uint32_t RNGLPEN:1;
				uint32_t RESERVED7:2;
				uint32_t SDMMC2LPEN:1;
				uint32_t RESERVED10:19;
				uint32_t SRAM1LPEN:1;
				uint32_t SRAM2LPEN:1;
				uint32_t SRAM3LPEN:1;
			};
			uint32_t val;
		} C1_AHB2LPENR;
	__IO union {
			struct {
				uint32_t GPIOALPEN:1;
				uint32_t GPIOBLPEN:1;
				uint32_t GPIOCLPEN:1;
				uint32_t GPIODLPEN:1;
				uint32_t GPIOELPEN:1;
				uint32_t GPIOFLPEN:1;
				uint32_t GPIOGLPEN:1;
				uint32_t GPIOHLPEN:1;
				uint32_t GPIOILPEN:1;
				uint32_t GPIOJLPEN:1;
				uint32_t GPIOKLPEN:1;
				uint32_t RESERVED11:8;
				uint32_t CRCLPEN:1;
				uint32_t RESERVED20:1;
				uint32_t BDMALPEN:1;
				uint32_t RESERVED22:2;
				uint32_t ADC3LPEN:1;
				uint32_t RESERVED25:3;
				uint32_t BKPRAMLPEN:1;
				uint32_t SRAM4LPEN:1;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} C1_AHB4LPENR;
	__IO union {
			struct {
				uint32_t RESERVED0:3;
				uint32_t LTDCLPEN:1;
				uint32_t RESERVED4:2;
				uint32_t WWDG1LPEN:1;
				uint32_t RESERVED7:25;
			};
			uint32_t val;
		} C1_APB3LPENR;
	__IO union {
			struct {
				uint32_t TIM2LPEN:1;
				uint32_t TIM3LPEN:1;
				uint32_t TIM4LPEN:1;
				uint32_t TIM5LPEN:1;
				uint32_t TIM6LPEN:1;
				uint32_t TIM7LPEN:1;
				uint32_t TIM12LPEN:1;
				uint32_t TIM13LPEN:1;
				uint32_t TIM14LPEN:1;
				uint32_t LPTIM1LPEN:1;
				uint32_t RESERVED10:4;
				uint32_t SPI2LPEN:1;
				uint32_t SPI3LPEN:1;
				uint32_t SPDIFRXLPEN:1;
				uint32_t USART2LPEN:1;
				uint32_t USART3LPEN:1;
				uint32_t UART4LPEN:1;
				uint32_t UART5LPEN:1;
				uint32_t I2C1LPEN:1;
				uint32_t I2C2LPEN:1;
				uint32_t I2C3LPEN:1;
				uint32_t RESERVED24:3;
				uint32_t HDMICECLPEN:1;
				uint32_t RESERVED28:1;
				uint32_t DAC12LPEN:1;
				uint32_t USART7LPEN:1;
				uint32_t USART8LPEN:1;
			};
			uint32_t val;
		} C1_APB1LLPENR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t CRSLPEN:1;
				uint32_t SWPLPEN:1;
				uint32_t RESERVED3:1;
				uint32_t OPAMPLPEN:1;
				uint32_t MDIOSLPEN:1;
				uint32_t RESERVED6:2;
				uint32_t FDCANLPEN:1;
				uint32_t RESERVED9:23;
			};
			uint32_t val;
		} C1_APB1HLPENR;
	__IO union {
			struct {
				uint32_t TIM1LPEN:1;
				uint32_t TIM8LPEN:1;
				uint32_t RESERVED2:2;
				uint32_t USART1LPEN:1;
				uint32_t USART6LPEN:1;
				uint32_t RESERVED6:6;
				uint32_t SPI1LPEN:1;
				uint32_t SPI4LPEN:1;
				uint32_t RESERVED14:2;
				uint32_t TIM15LPEN:1;
				uint32_t TIM16LPEN:1;
				uint32_t TIM17LPEN:1;
				uint32_t RESERVED19:1;
				uint32_t SPI5LPEN:1;
				uint32_t RESERVED21:1;
				uint32_t SAI1LPEN:1;
				uint32_t SAI2LPEN:1;
				uint32_t SAI3LPEN:1;
				uint32_t RESERVED25:3;
				uint32_t DFSDM1LPEN:1;
				uint32_t HRTIMLPEN:1;
				uint32_t RESERVED30:2;
			};
			uint32_t val;
		} C1_APB2LPENR;
	__IO union {
			struct {
				uint32_t RESERVED0:1;
				uint32_t SYSCFGLPEN:1;
				uint32_t RESERVED2:1;
				uint32_t LPUART1LPEN:1;
				uint32_t RESERVED4:1;
				uint32_t SPI6LPEN:1;
				uint32_t RESERVED6:1;
				uint32_t I2C4LPEN:1;
				uint32_t RESERVED8:1;
				uint32_t LPTIM2LPEN:1;
				uint32_t LPTIM3LPEN:1;
				uint32_t LPTIM4LPEN:1;
				uint32_t LPTIM5LPEN:1;
				uint32_t RESERVED13:1;
				uint32_t COMP12LPEN:1;
				uint32_t VREFLPEN:1;
				uint32_t RTCAPBLPEN:1;
				uint32_t RESERVED17:4;
				uint32_t SAI4LPEN:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} C1_APB4LPENR;
} MyRCC_TypeDef;

typedef struct {
	__IO union {
			struct {
				uint32_t TR0:1;
				uint32_t TR1:1;
				uint32_t TR2:1;
				uint32_t TR3:1;
				uint32_t TR4:1;
				uint32_t TR5:1;
				uint32_t TR6:1;
				uint32_t TR7:1;
				uint32_t TR8:1;
				uint32_t TR9:1;
				uint32_t TR10:1;
				uint32_t TR11:1;
				uint32_t TR12:1;
				uint32_t TR13:1;
				uint32_t TR14:1;
				uint32_t TR15:1;
				uint32_t TR16:1;
				uint32_t TR17:1;
				uint32_t TR18:1;
				uint32_t TR19:1;
				uint32_t TR20:1;
				uint32_t TR21:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} RTSR1;
	__IO union {
			struct {
				uint32_t TR0:1;
				uint32_t TR1:1;
				uint32_t TR2:1;
				uint32_t TR3:1;
				uint32_t TR4:1;
				uint32_t TR5:1;
				uint32_t TR6:1;
				uint32_t TR7:1;
				uint32_t TR8:1;
				uint32_t TR9:1;
				uint32_t TR10:1;
				uint32_t TR11:1;
				uint32_t TR12:1;
				uint32_t TR13:1;
				uint32_t TR14:1;
				uint32_t TR15:1;
				uint32_t TR16:1;
				uint32_t TR17:1;
				uint32_t TR18:1;
				uint32_t TR19:1;
				uint32_t TR20:1;
				uint32_t TR21:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} FTSR1;
	__IO union {
			struct {
				uint32_t SWIER0:1;
				uint32_t SWIER1:1;
				uint32_t SWIER2:1;
				uint32_t SWIER3:1;
				uint32_t SWIER4:1;
				uint32_t SWIER5:1;
				uint32_t SWIER6:1;
				uint32_t SWIER7:1;
				uint32_t SWIER8:1;
				uint32_t SWIER9:1;
				uint32_t SWIER10:1;
				uint32_t SWIER11:1;
				uint32_t SWIER12:1;
				uint32_t SWIER13:1;
				uint32_t SWIER14:1;
				uint32_t SWIER15:1;
				uint32_t SWIER16:1;
				uint32_t SWIER17:1;
				uint32_t SWIER18:1;
				uint32_t SWIER19:1;
				uint32_t SWIER20:1;
				uint32_t SWIER21:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} SWIER1;
	__IO union {
			struct {
				uint32_t MR0:1;
				uint32_t MR1:1;
				uint32_t MR2:1;
				uint32_t MR3:1;
				uint32_t MR4:1;
				uint32_t MR5:1;
				uint32_t MR6:1;
				uint32_t MR7:1;
				uint32_t MR8:1;
				uint32_t MR9:1;
				uint32_t MR10:1;
				uint32_t MR11:1;
				uint32_t MR12:1;
				uint32_t MR13:1;
				uint32_t MR14:1;
				uint32_t MR15:1;
				uint32_t RESERVED16:3;
				uint32_t MR19:1;
				uint32_t MR20:1;
				uint32_t MR21:1;
				uint32_t RESERVED22:3;
				uint32_t MR25:1;
				uint32_t RESERVED26:6;
			};
			uint32_t val;
		} D3PMR1;
	__IO union {
			struct {
				uint32_t PCS0:2;
				uint32_t PCS1:2;
				uint32_t PCS2:2;
				uint32_t PCS3:2;
				uint32_t PCS4:2;
				uint32_t PCS5:2;
				uint32_t PCS6:2;
				uint32_t PCS7:2;
				uint32_t PCS8:2;
				uint32_t PCS9:2;
				uint32_t PCS10:2;
				uint32_t PCS11:2;
				uint32_t PCS12:2;
				uint32_t PCS13:2;
				uint32_t PCS14:2;
				uint32_t PCS15:2;
			};
			uint32_t val;
		} D3PCR1L;
	__IO union {
			struct {
				uint32_t RESERVED0:6;
				uint32_t PCS19:2;
				uint32_t PCS20:2;
				uint32_t PCS21:2;
				uint32_t RESERVED12:6;
				uint32_t PCS25:2;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} D3PCR1H;
	uint32_t RESERVED6;
	uint32_t RESERVED7;
	__IO union {
			struct {
				uint32_t RESERVED0:17;
				uint32_t TR49:1;
				uint32_t RESERVED18:1;
				uint32_t TR51:1;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} RTSR2;
	__IO union {
			struct {
				uint32_t RESERVED0:17;
				uint32_t TR49:1;
				uint32_t RESERVED18:1;
				uint32_t TR51:1;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} FTSR2;
	__IO union {
			struct {
				uint32_t RESERVED0:17;
				uint32_t SWIER49:1;
				uint32_t RESERVED18:1;
				uint32_t SWIER51:1;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} SWIER2;
	__IO union {
			struct {
				uint32_t RESERVED0:2;
				uint32_t MR34:1;
				uint32_t MR35:1;
				uint32_t RESERVED4:5;
				uint32_t MR41:1;
				uint32_t RESERVED10:6;
				uint32_t MR48:1;
				uint32_t MR49:1;
				uint32_t MR50:1;
				uint32_t MR51:1;
				uint32_t MR52:1;
				uint32_t MR53:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} D3PMR2;
	__IO union {
			struct {
				uint32_t RESERVED0:4;
				uint32_t PCS34:2;
				uint32_t PCS35:2;
				uint32_t RESERVED8:10;
				uint32_t PCS41:2;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} D3PCR2L;
	__IO union {
			struct {
				uint32_t PCS48:2;
				uint32_t PCS49:2;
				uint32_t PCS50:2;
				uint32_t PCS51:2;
				uint32_t PCS52:2;
				uint32_t PCS53:2;
				uint32_t RESERVED12:20;
			};
			uint32_t val;
		} D3PCR2H;
	uint32_t RESERVED14;
	uint32_t RESERVED15;
	__IO union {
			struct {
				uint32_t RESERVED0:18;
				uint32_t TR82:1;
				uint32_t RESERVED19:1;
				uint32_t TR84:1;
				uint32_t TR85:1;
				uint32_t TR86:1;
				uint32_t RESERVED23:9;
			};
			uint32_t val;
		} RTSR3;
	__IO union {
			struct {
				uint32_t RESERVED0:18;
				uint32_t TR82:1;
				uint32_t RESERVED19:1;
				uint32_t TR84:1;
				uint32_t TR85:1;
				uint32_t TR86:1;
				uint32_t RESERVED23:9;
			};
			uint32_t val;
		} FTSR3;
	__IO union {
			struct {
				uint32_t RESERVED0:18;
				uint32_t SWIER82:1;
				uint32_t RESERVED19:1;
				uint32_t SWIER84:1;
				uint32_t SWIER85:1;
				uint32_t SWIER86:1;
				uint32_t RESERVED23:9;
			};
			uint32_t val;
		} SWIER3;
	__IO union {
			struct {
				uint32_t RESERVED0:24;
				uint32_t MR88:1;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} D3PMR3;
	uint32_t RESERVED20;
	__IO union {
			struct {
				uint32_t RESERVED0:18;
				uint32_t PCS88:2;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} D3PCR3H;
	uint32_t RESERVED22;
	uint32_t RESERVED23;
	uint32_t RESERVED24;
	uint32_t RESERVED25;
	uint32_t RESERVED26;
	uint32_t RESERVED27;
	uint32_t RESERVED28;
	uint32_t RESERVED29;
	uint32_t RESERVED30;
	uint32_t RESERVED31;
	__IO union {
			struct {
				uint32_t MR0:1;
				uint32_t MR1:1;
				uint32_t MR2:1;
				uint32_t MR3:1;
				uint32_t MR4:1;
				uint32_t MR5:1;
				uint32_t MR6:1;
				uint32_t MR7:1;
				uint32_t MR8:1;
				uint32_t MR9:1;
				uint32_t MR10:1;
				uint32_t MR11:1;
				uint32_t MR12:1;
				uint32_t MR13:1;
				uint32_t MR14:1;
				uint32_t MR15:1;
				uint32_t MR16:1;
				uint32_t MR17:1;
				uint32_t MR18:1;
				uint32_t MR19:1;
				uint32_t MR20:1;
				uint32_t MR21:1;
				uint32_t MR22:1;
				uint32_t MR23:1;
				uint32_t MR24:1;
				uint32_t MR25:1;
				uint32_t MR26:1;
				uint32_t MR27:1;
				uint32_t MR28:1;
				uint32_t MR29:1;
				uint32_t MR30:1;
				uint32_t MR31:1;
			};
			uint32_t val;
		} CPUIMR1;
	__IO union {
			struct {
				uint32_t MR0:1;
				uint32_t MR1:1;
				uint32_t MR2:1;
				uint32_t MR3:1;
				uint32_t MR4:1;
				uint32_t MR5:1;
				uint32_t MR6:1;
				uint32_t MR7:1;
				uint32_t MR8:1;
				uint32_t MR9:1;
				uint32_t MR10:1;
				uint32_t MR11:1;
				uint32_t MR12:1;
				uint32_t MR13:1;
				uint32_t MR14:1;
				uint32_t MR15:1;
				uint32_t MR16:1;
				uint32_t MR17:1;
				uint32_t MR18:1;
				uint32_t MR19:1;
				uint32_t MR20:1;
				uint32_t MR21:1;
				uint32_t MR22:1;
				uint32_t MR23:1;
				uint32_t MR24:1;
				uint32_t MR25:1;
				uint32_t MR26:1;
				uint32_t MR27:1;
				uint32_t MR28:1;
				uint32_t MR29:1;
				uint32_t MR30:1;
				uint32_t MR31:1;
			};
			uint32_t val;
		} CPUEMR1;
	__IO union {
			struct {
				uint32_t PR0:1;
				uint32_t PR1:1;
				uint32_t PR2:1;
				uint32_t PR3:1;
				uint32_t PR4:1;
				uint32_t PR5:1;
				uint32_t PR6:1;
				uint32_t PR7:1;
				uint32_t PR8:1;
				uint32_t PR9:1;
				uint32_t PR10:1;
				uint32_t PR11:1;
				uint32_t PR12:1;
				uint32_t PR13:1;
				uint32_t PR14:1;
				uint32_t PR15:1;
				uint32_t PR16:1;
				uint32_t PR17:1;
				uint32_t PR18:1;
				uint32_t PR19:1;
				uint32_t PR20:1;
				uint32_t PR21:1;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} CPUPR1;
	uint32_t RESERVED35;
	__IO union {
			struct {
				uint32_t MR0:1;
				uint32_t MR1:1;
				uint32_t MR2:1;
				uint32_t MR3:1;
				uint32_t MR4:1;
				uint32_t MR5:1;
				uint32_t MR6:1;
				uint32_t MR7:1;
				uint32_t MR8:1;
				uint32_t MR9:1;
				uint32_t MR10:1;
				uint32_t MR11:1;
				uint32_t MR12:1;
				uint32_t RESERVED13:1;
				uint32_t MR14:1;
				uint32_t MR15:1;
				uint32_t MR16:1;
				uint32_t MR17:1;
				uint32_t MR18:1;
				uint32_t MR19:1;
				uint32_t MR20:1;
				uint32_t MR21:1;
				uint32_t MR22:1;
				uint32_t MR23:1;
				uint32_t MR24:1;
				uint32_t MR25:1;
				uint32_t MR26:1;
				uint32_t MR27:1;
				uint32_t MR28:1;
				uint32_t MR29:1;
				uint32_t MR30:1;
				uint32_t MR31:1;
			};
			uint32_t val;
		} CPUIMR2;
	__IO union {
			struct {
				uint32_t MR32:1;
				uint32_t MR33:1;
				uint32_t MR34:1;
				uint32_t MR35:1;
				uint32_t MR36:1;
				uint32_t MR37:1;
				uint32_t MR38:1;
				uint32_t MR39:1;
				uint32_t MR40:1;
				uint32_t MR41:1;
				uint32_t MR42:1;
				uint32_t MR43:1;
				uint32_t MR44:1;
				uint32_t RESERVED13:1;
				uint32_t MR46:1;
				uint32_t MR47:1;
				uint32_t MR48:1;
				uint32_t MR49:1;
				uint32_t MR50:1;
				uint32_t MR51:1;
				uint32_t MR52:1;
				uint32_t MR53:1;
				uint32_t MR54:1;
				uint32_t MR55:1;
				uint32_t MR56:1;
				uint32_t MR57:1;
				uint32_t MR58:1;
				uint32_t MR59:1;
				uint32_t MR60:1;
				uint32_t MR61:1;
				uint32_t MR62:1;
				uint32_t MR63:1;
			};
			uint32_t val;
		} CPUEMR2;
	__IO union {
			struct {
				uint32_t RESERVED0:17;
				uint32_t PR49:1;
				uint32_t RESERVED18:1;
				uint32_t PR51:1;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} CPUPR2;
	uint32_t RESERVED39;
	__IO union {
			struct {
				uint32_t MR64:1;
				uint32_t MR65:1;
				uint32_t MR66:1;
				uint32_t MR67:1;
				uint32_t MR68:1;
				uint32_t MR69:1;
				uint32_t MR70:1;
				uint32_t MR71:1;
				uint32_t MR72:1;
				uint32_t MR73:1;
				uint32_t MR74:1;
				uint32_t MR75:1;
				uint32_t MR76:1;
				uint32_t MR77:1;
				uint32_t MR78:1;
				uint32_t MR79:1;
				uint32_t MR80:1;
				uint32_t RESERVED17:1;
				uint32_t MR82:1;
				uint32_t RESERVED19:1;
				uint32_t MR84:1;
				uint32_t MR85:1;
				uint32_t MR86:1;
				uint32_t MR87:1;
				uint32_t MR88:1;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} CPUIMR3;
	__IO union {
			struct {
				uint32_t MR64:1;
				uint32_t MR65:1;
				uint32_t MR66:1;
				uint32_t MR67:1;
				uint32_t MR68:1;
				uint32_t MR69:1;
				uint32_t MR70:1;
				uint32_t MR71:1;
				uint32_t MR72:1;
				uint32_t MR73:1;
				uint32_t MR74:1;
				uint32_t MR75:1;
				uint32_t MR76:1;
				uint32_t MR77:1;
				uint32_t MR78:1;
				uint32_t MR79:1;
				uint32_t MR80:1;
				uint32_t RESERVED17:1;
				uint32_t MR82:1;
				uint32_t RESERVED19:1;
				uint32_t MR84:1;
				uint32_t MR85:1;
				uint32_t MR86:1;
				uint32_t MR87:1;
				uint32_t MR88:1;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} CPUEMR3;
	__IO union {
			struct {
				uint32_t RESERVED0:18;
				uint32_t PR82:1;
				uint32_t RESERVED19:1;
				uint32_t PR84:1;
				uint32_t PR85:1;
				uint32_t PR86:1;
				uint32_t RESERVED23:9;
			};
			uint32_t val;
		} CPUPR3;
} MyEXTI_TypeDef;

typedef struct {
	__IO union {
			struct {
				uint32_t LATENCY:4;
				uint32_t WRHIGHFREQ:2;
				uint32_t RESERVED6:26;
			};
			uint32_t val;
		} ACR;
	__IO union {
			struct {
				uint32_t KEY1R:32;
			};
			uint32_t val;
		} KEYR1;
	__IO union {
			struct {
				uint32_t OPTKEYR:32;
			};
			uint32_t val;
		} OPTKEYR;
	__IO union {
			struct {
				uint32_t LOCK1:1;
				uint32_t PG1:1;
				uint32_t SER1:1;
				uint32_t BER1:1;
				uint32_t PSIZE1:2;
				uint32_t FW1:1;
				uint32_t START1:1;
				uint32_t SNB1:3;
				uint32_t RESERVED11:4;
				uint32_t CRC_EN:1;
				uint32_t EOPIE1:1;
				uint32_t WRPERRIE1:1;
				uint32_t PGSERRIE1:1;
				uint32_t STRBERRIE1:1;
				uint32_t RESERVED20:1;
				uint32_t INCERRIE1:1;
				uint32_t OPERRIE1:1;
				uint32_t RDPERRIE1:1;
				uint32_t RDSERRIE1:1;
				uint32_t SNECCERR1:1;
				uint32_t DBECCERRIE1:1;
				uint32_t CRCENDIE1:1;
				uint32_t CRCRDERRIE1:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} CR1;
	__IO union {
			struct {
				uint32_t BSY1:1;
				uint32_t WBNE1:1;
				uint32_t QW1:1;
				uint32_t CRC_BUSY1:1;
				uint32_t RESERVED4:12;
				uint32_t EOP1:1;
				uint32_t WRPERR1:1;
				uint32_t PGSERR1:1;
				uint32_t STRBERR1:1;
				uint32_t RESERVED20:1;
				uint32_t INCERR1:1;
				uint32_t OPERR1:1;
				uint32_t RDPERR1:1;
				uint32_t RDSERR1:1;
				uint32_t SNECCERR:1;
				uint32_t DBECCERR1:1;
				uint32_t CRCEND1:1;
				uint32_t CRCRDERR1:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} SR1;
	__IO union {
			struct {
				uint32_t RESERVED0:16;
				uint32_t CLR_EOP1:1;
				uint32_t CLR_WRPERR1:1;
				uint32_t CLR_PGSERR1:1;
				uint32_t CLR_STRBERR1:1;
				uint32_t RESERVED20:1;
				uint32_t CLR_INCERR1:1;
				uint32_t CLR_OPERR1:1;
				uint32_t CLR_RDPERR1:1;
				uint32_t CLR_RDSERR1:1;
				uint32_t CLR_SNECCERR1:1;
				uint32_t CLR_DBECCERR1:1;
				uint32_t CLR_CRCEND1:1;
				uint32_t CLR_CRCRDERR1:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} CCR1;
	__IO union {
			struct {
				uint32_t OPTLOCK:1;
				uint32_t OPTSTART:1;
				uint32_t RESERVED2:2;
				uint32_t MER:1;
				uint32_t RESERVED5:25;
				uint32_t OPTCHANGEERRIE:1;
				uint32_t SWAP_BANK:1;
			};
			uint32_t val;
		} OPTCR;
	__IO union {
			struct {
				uint32_t OPT_BUSY:1;
				uint32_t RESERVED1:1;
				uint32_t BOR_LEV:2;
				uint32_t IWDG1_SW:1;
				uint32_t RESERVED5:1;
				uint32_t NRST_STOP_D1:1;
				uint32_t NRST_STBY_D1:1;
				uint32_t RDP:8;
				uint32_t RESERVED16:1;
				uint32_t IWDG_FZ_STOP:1;
				uint32_t IWDG_FZ_SDBY:1;
				uint32_t ST_RAM_SIZE:2;
				uint32_t SECURITY:1;
				uint32_t RESERVED22:7;
				uint32_t IO_HSLV:1;
				uint32_t OPTCHANGEERR:1;
				uint32_t SWAP_BANK_OPT:1;
			};
			uint32_t val;
		} OPTSR_CUR;
	__IO union {
			struct {
				uint32_t RESERVED0:2;
				uint32_t BOR_LEV:2;
				uint32_t IWDG1_SW:1;
				uint32_t RESERVED5:1;
				uint32_t NRST_STOP_D1:1;
				uint32_t NRST_STBY_D1:1;
				uint32_t RDP:8;
				uint32_t RESERVED16:1;
				uint32_t IWDG_FZ_STOP:1;
				uint32_t IWDG_FZ_SDBY:1;
				uint32_t ST_RAM_SIZE:2;
				uint32_t SECURITY:1;
				uint32_t RESERVED22:7;
				uint32_t IO_HSLV:1;
				uint32_t RESERVED30:1;
				uint32_t SWAP_BANK_OPT:1;
			};
			uint32_t val;
		} OPTSR_PRG;
	__IO union {
			struct {
				uint32_t RESERVED0:30;
				uint32_t CLR_OPTCHANGEERR:1;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} OPTCCR;
	__IO union {
			struct {
				uint32_t PROT_AREA_START1:12;
				uint32_t RESERVED12:4;
				uint32_t PROT_AREA_END1:12;
				uint32_t RESERVED28:3;
				uint32_t DMEP1:1;
			};
			uint32_t val;
		} PRAR_CUR1;
	__IO union {
			struct {
				uint32_t PROT_AREA_START1:12;
				uint32_t RESERVED12:4;
				uint32_t PROT_AREA_END1:12;
				uint32_t RESERVED28:3;
				uint32_t DMEP1:1;
			};
			uint32_t val;
		} PRAR_PRG1;
	__IO union {
			struct {
				uint32_t SEC_AREA_START1:12;
				uint32_t RESERVED12:4;
				uint32_t SEC_AREA_END1:12;
				uint32_t RESERVED28:3;
				uint32_t DMES1:1;
			};
			uint32_t val;
		} SCAR_CUR1;
	__IO union {
			struct {
				uint32_t SEC_AREA_START1:12;
				uint32_t RESERVED12:4;
				uint32_t SEC_AREA_END1:12;
				uint32_t RESERVED28:3;
				uint32_t DMES1:1;
			};
			uint32_t val;
		} SCAR_PRG1;
	__IO union {
			struct {
				uint32_t WRPSn1:8;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} WPSN_CUR1R;
	__IO union {
			struct {
				uint32_t WRPSn1:8;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} WPSN_PRG1R;
	__IO union {
			struct {
				uint32_t BOOT_ADD0:16;
				uint32_t BOOT_ADD1:16;
			};
			uint32_t val;
		} BOOT_CURR;
	__IO union {
			struct {
				uint32_t BOOT_ADD0:16;
				uint32_t BOOT_ADD1:16;
			};
			uint32_t val;
		} BOOT_PRGR;
	uint32_t RESERVED18;
	uint32_t RESERVED19;
	__IO union {
			struct {
				uint32_t CRC_SECT:3;
				uint32_t RESERVED3:4;
				uint32_t ALL_BANK:1;
				uint32_t CRC_BY_SECT:1;
				uint32_t ADD_SECT:1;
				uint32_t CLEAN_SECT:1;
				uint32_t RESERVED11:5;
				uint32_t START_CRC:1;
				uint32_t CLEAN_CRC:1;
				uint32_t RESERVED18:2;
				uint32_t CRC_BURST:2;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} CRCCR1;
	__IO union {
			struct {
				uint32_t RESERVED0:2;
				uint32_t CRC_START_ADDR:18;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} CRCSADD1R;
	__IO union {
			struct {
				uint32_t RESERVED0:2;
				uint32_t CRC_END_ADDR:18;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} CRCEADD1R;
	__IO union {
			struct {
				uint32_t CRC_DATA:32;
			};
			uint32_t val;
		} CRCDATAR;
	__IO union {
			struct {
				uint32_t FAIL_ECC_ADDR1:15;
				uint32_t RESERVED15:17;
			};
			uint32_t val;
		} ECC_FA1R;
	uint32_t RESERVED25;
	uint32_t RESERVED26;
	uint32_t RESERVED27;
	uint32_t RESERVED28;
	uint32_t RESERVED29;
	uint32_t RESERVED30;
	uint32_t RESERVED31;
	uint32_t RESERVED32;
	uint32_t RESERVED33;
	uint32_t RESERVED34;
	uint32_t RESERVED35;
	uint32_t RESERVED36;
	uint32_t RESERVED37;
	uint32_t RESERVED38;
	uint32_t RESERVED39;
	uint32_t RESERVED40;
	uint32_t RESERVED41;
	uint32_t RESERVED42;
	uint32_t RESERVED43;
	uint32_t RESERVED44;
	uint32_t RESERVED45;
	uint32_t RESERVED46;
	uint32_t RESERVED47;
	uint32_t RESERVED48;
	uint32_t RESERVED49;
	uint32_t RESERVED50;
	uint32_t RESERVED51;
	uint32_t RESERVED52;
	uint32_t RESERVED53;
	uint32_t RESERVED54;
	uint32_t RESERVED55;
	uint32_t RESERVED56;
	uint32_t RESERVED57;
	uint32_t RESERVED58;
	uint32_t RESERVED59;
	uint32_t RESERVED60;
	uint32_t RESERVED61;
	uint32_t RESERVED62;
	uint32_t RESERVED63;
	__IO union {
			struct {
				uint32_t LATENCY:4;
				uint32_t WRHIGHFREQ:2;
				uint32_t RESERVED6:26;
			};
			uint32_t val;
		} ACR_;
	__IO union {
			struct {
				uint32_t KEYR2:32;
			};
			uint32_t val;
		} KEYR2;
	__IO union {
			struct {
				uint32_t OPTKEYR:32;
			};
			uint32_t val;
		} OPTKEYR_;
	__IO union {
			struct {
				uint32_t LOCK2:1;
				uint32_t PG2:1;
				uint32_t SER2:1;
				uint32_t BER2:1;
				uint32_t PSIZE2:2;
				uint32_t FW2:1;
				uint32_t START2:1;
				uint32_t SNB2:3;
				uint32_t RESERVED11:3;
				uint32_t SPSS2:1;
				uint32_t CRC_EN:1;
				uint32_t EOPIE2:1;
				uint32_t WRPERRIE2:1;
				uint32_t PGSERRIE2:1;
				uint32_t STRBERRIE2:1;
				uint32_t RESERVED20:1;
				uint32_t INCERRIE2:1;
				uint32_t OPERRIE2:1;
				uint32_t RDPERRIE2:1;
				uint32_t RDSERRIE2:1;
				uint32_t SNECCERRIE2:1;
				uint32_t DBECCERRIE2:1;
				uint32_t CRCENDIE2:1;
				uint32_t CRCRDERRIE2:1;
				uint32_t RESERVED29:3;
			};
			uint32_t val;
		} CR2;
	__IO union {
			struct {
				uint32_t BSY2:1;
				uint32_t WBNE2:1;
				uint32_t QW2:1;
				uint32_t CRC_BUSY2:1;
				uint32_t RESERVED4:12;
				uint32_t EOP2:1;
				uint32_t WRPERR2:1;
				uint32_t PGSERR2:1;
				uint32_t STRBERR2:1;
				uint32_t RESERVED20:1;
				uint32_t INCERR2:1;
				uint32_t OPERR2:1;
				uint32_t RDPERR2:1;
				uint32_t RDSERR2:1;
				uint32_t SNECCERR2:1;
				uint32_t DBECCERR2:1;
				uint32_t CRCEND2:1;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} SR2;
	__IO union {
			struct {
				uint32_t RESERVED0:16;
				uint32_t CLR_EOP2:1;
				uint32_t CLR_WRPERR2:1;
				uint32_t CLR_PGSERR2:1;
				uint32_t CLR_STRBERR2:1;
				uint32_t RESERVED20:1;
				uint32_t CLR_INCERR2:1;
				uint32_t CLR_OPERR2:1;
				uint32_t CLR_RDPERR2:1;
				uint32_t CLR_RDSERR1:1;
				uint32_t CLR_SNECCERR2:1;
				uint32_t CLR_DBECCERR1:1;
				uint32_t CLR_CRCEND2:1;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} CCR2;
	__IO union {
			struct {
				uint32_t OPTLOCK:1;
				uint32_t OPTSTART:1;
				uint32_t RESERVED2:2;
				uint32_t MER:1;
				uint32_t RESERVED5:25;
				uint32_t OPTCHANGEERRIE:1;
				uint32_t SWAP_BANK:1;
			};
			uint32_t val;
		} OPTCR_;
	__IO union {
			struct {
				uint32_t OPT_BUSY:1;
				uint32_t RESERVED1:1;
				uint32_t BOR_LEV:2;
				uint32_t IWDG1_SW:1;
				uint32_t RESERVED5:1;
				uint32_t NRST_STOP_D1:1;
				uint32_t NRST_STBY_D1:1;
				uint32_t RDP:8;
				uint32_t RESERVED16:1;
				uint32_t IWDG_FZ_STOP:1;
				uint32_t IWDG_FZ_SDBY:1;
				uint32_t ST_RAM_SIZE:2;
				uint32_t SECURITY:1;
				uint32_t RESERVED22:7;
				uint32_t IO_HSLV:1;
				uint32_t OPTCHANGEERR:1;
				uint32_t SWAP_BANK_OPT:1;
			};
			uint32_t val;
		} OPTSR_CUR_;
	__IO union {
			struct {
				uint32_t RESERVED0:2;
				uint32_t BOR_LEV:2;
				uint32_t IWDG1_SW:1;
				uint32_t RESERVED5:1;
				uint32_t nRST_STOP:1;
				uint32_t nRST_STDY:1;
				uint32_t RDP:8;
				uint32_t RESERVED16:1;
				uint32_t FZ_IWDG_STOP:1;
				uint32_t FZ_IWDG_SDBY:1;
				uint32_t ST_RAM_SIZE:2;
				uint32_t SECURITY:1;
				uint32_t RESERVED22:7;
				uint32_t IO_HSLV:1;
				uint32_t RESERVED30:1;
				uint32_t SWAP_BANK_OPT:1;
			};
			uint32_t val;
		} OPTSR_PRG_;
	__IO union {
			struct {
				uint32_t RESERVED0:30;
				uint32_t CLR_OPTCHANGEERR:1;
				uint32_t RESERVED31:1;
			};
			uint32_t val;
		} OPTCCR_;
	__IO union {
			struct {
				uint32_t PROT_AREA_START2:12;
				uint32_t RESERVED12:4;
				uint32_t PROT_AREA_END2:12;
				uint32_t RESERVED28:3;
				uint32_t DMEP2:1;
			};
			uint32_t val;
		} PRAR_CUR2;
	__IO union {
			struct {
				uint32_t PROT_AREA_START2:12;
				uint32_t RESERVED12:4;
				uint32_t PROT_AREA_END2:12;
				uint32_t RESERVED28:3;
				uint32_t DMEP2:1;
			};
			uint32_t val;
		} PRAR_PRG2;
	__IO union {
			struct {
				uint32_t SEC_AREA_START2:12;
				uint32_t RESERVED12:4;
				uint32_t SEC_AREA_END2:12;
				uint32_t RESERVED28:3;
				uint32_t DMES2:1;
			};
			uint32_t val;
		} SCAR_CUR2;
	__IO union {
			struct {
				uint32_t SEC_AREA_START2:12;
				uint32_t RESERVED12:4;
				uint32_t SEC_AREA_END2:12;
				uint32_t RESERVED28:3;
				uint32_t DMES2:1;
			};
			uint32_t val;
		} SCAR_PRG2;
	__IO union {
			struct {
				uint32_t WRPSn2:8;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} WPSN_CUR2R;
	__IO union {
			struct {
				uint32_t WRPSn2:8;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} WPSN_PRG2R;
	__IO union {
			struct {
				uint32_t BOOT_ADD0:16;
				uint32_t BOOT_ADD1:16;
			};
			uint32_t val;
		} BOOT_CURR_;
	__IO union {
			struct {
				uint32_t BOOT_ADD0:16;
				uint32_t BOOT_ADD1:16;
			};
			uint32_t val;
		} BOOT_PRGR_;
	uint32_t RESERVED82;
	uint32_t RESERVED83;
	__IO union {
			struct {
				uint32_t CRC_SECT:3;
				uint32_t RESERVED3:4;
				uint32_t ALL_BANK:1;
				uint32_t CRC_BY_SECT:1;
				uint32_t ADD_SECT:1;
				uint32_t CLEAN_SECT:1;
				uint32_t RESERVED11:5;
				uint32_t START_CRC:1;
				uint32_t CLEAN_CRC:1;
				uint32_t RESERVED18:2;
				uint32_t CRC_BURST:2;
				uint32_t RESERVED22:10;
			};
			uint32_t val;
		} CRCCR2;
	__IO union {
			struct {
				uint32_t RESERVED0:2;
				uint32_t CRC_START_ADDR:18;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} CRCSADD2R;
	__IO union {
			struct {
				uint32_t RESERVED0:2;
				uint32_t CRC_END_ADDR:18;
				uint32_t RESERVED20:12;
			};
			uint32_t val;
		} CRCEADD2R;
	__IO union {
			struct {
				uint32_t CRC_DATA:32;
			};
			uint32_t val;
		} CRCDATAR_;
	__IO union {
			struct {
				uint32_t FAIL_ECC_ADDR2:15;
				uint32_t RESERVED15:17;
			};
			uint32_t val;
		} ECC_FA2R;
} MyFlash_TypeDef;

typedef struct {
	__IO union {
			struct {
				uint32_t FEIF0:1;
				uint32_t RESERVED1:1;
				uint32_t DMEIF0:1;
				uint32_t TEIF0:1;
				uint32_t HTIF0:1;
				uint32_t TCIF0:1;
				uint32_t FEIF1:1;
				uint32_t RESERVED7:1;
				uint32_t DMEIF1:1;
				uint32_t TEIF1:1;
				uint32_t HTIF1:1;
				uint32_t TCIF1:1;
				uint32_t RESERVED12:4;
				uint32_t FEIF2:1;
				uint32_t RESERVED17:1;
				uint32_t DMEIF2:1;
				uint32_t TEIF2:1;
				uint32_t HTIF2:1;
				uint32_t TCIF2:1;
				uint32_t FEIF3:1;
				uint32_t RESERVED23:1;
				uint32_t DMEIF3:1;
				uint32_t TEIF3:1;
				uint32_t HTIF3:1;
				uint32_t TCIF3:1;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} LISR;
	__IO union {
			struct {
				uint32_t FEIF4:1;
				uint32_t RESERVED1:1;
				uint32_t DMEIF4:1;
				uint32_t TEIF4:1;
				uint32_t HTIF4:1;
				uint32_t TCIF4:1;
				uint32_t FEIF5:1;
				uint32_t RESERVED7:1;
				uint32_t DMEIF5:1;
				uint32_t TEIF5:1;
				uint32_t HTIF5:1;
				uint32_t TCIF5:1;
				uint32_t RESERVED12:4;
				uint32_t FEIF6:1;
				uint32_t RESERVED17:1;
				uint32_t DMEIF6:1;
				uint32_t TEIF6:1;
				uint32_t HTIF6:1;
				uint32_t TCIF6:1;
				uint32_t FEIF7:1;
				uint32_t RESERVED23:1;
				uint32_t DMEIF7:1;
				uint32_t TEIF7:1;
				uint32_t HTIF7:1;
				uint32_t TCIF7:1;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} HISR;
	__IO union {
			struct {
				uint32_t CFEIF0:1;
				uint32_t RESERVED1:1;
				uint32_t CDMEIF0:1;
				uint32_t CTEIF0:1;
				uint32_t CHTIF0:1;
				uint32_t CTCIF0:1;
				uint32_t CFEIF1:1;
				uint32_t RESERVED7:1;
				uint32_t CDMEIF1:1;
				uint32_t CTEIF1:1;
				uint32_t CHTIF1:1;
				uint32_t CTCIF1:1;
				uint32_t RESERVED12:4;
				uint32_t CFEIF2:1;
				uint32_t RESERVED17:1;
				uint32_t CDMEIF2:1;
				uint32_t CTEIF2:1;
				uint32_t CHTIF2:1;
				uint32_t CTCIF2:1;
				uint32_t CFEIF3:1;
				uint32_t RESERVED23:1;
				uint32_t CDMEIF3:1;
				uint32_t CTEIF3:1;
				uint32_t CHTIF3:1;
				uint32_t CTCIF3:1;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} LIFCR;
	__IO union {
			struct {
				uint32_t CFEIF4:1;
				uint32_t RESERVED1:1;
				uint32_t CDMEIF4:1;
				uint32_t CTEIF4:1;
				uint32_t CHTIF4:1;
				uint32_t CTCIF4:1;
				uint32_t CFEIF5:1;
				uint32_t RESERVED7:1;
				uint32_t CDMEIF5:1;
				uint32_t CTEIF5:1;
				uint32_t CHTIF5:1;
				uint32_t CTCIF5:1;
				uint32_t RESERVED12:4;
				uint32_t CFEIF6:1;
				uint32_t RESERVED17:1;
				uint32_t CDMEIF6:1;
				uint32_t CTEIF6:1;
				uint32_t CHTIF6:1;
				uint32_t CTCIF6:1;
				uint32_t CFEIF7:1;
				uint32_t RESERVED23:1;
				uint32_t CDMEIF7:1;
				uint32_t CTEIF7:1;
				uint32_t CHTIF7:1;
				uint32_t CTCIF7:1;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} HIFCR;
	__IO union {
			struct {
				uint32_t EN:1;
				uint32_t DMEIE:1;
				uint32_t TEIE:1;
				uint32_t HTIE:1;
				uint32_t TCIE:1;
				uint32_t PFCTRL:1;
				uint32_t DIR:2;
				uint32_t CIRC:1;
				uint32_t PINC:1;
				uint32_t MINC:1;
				uint32_t PSIZE:2;
				uint32_t MSIZE:2;
				uint32_t PINCOS:1;
				uint32_t PL:2;
				uint32_t DBM:1;
				uint32_t CT:1;
				uint32_t RESERVED20:1;
				uint32_t PBURST:2;
				uint32_t MBURST:2;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} S0CR;
	__IO union {
			struct {
				uint32_t NDT:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} S0NDTR;
	__IO union {
			struct {
				uint32_t PA:32;
			};
			uint32_t val;
		} S0PAR;
	__IO union {
			struct {
				uint32_t M0A:32;
			};
			uint32_t val;
		} S0M0AR;
	__IO union {
			struct {
				uint32_t M1A:32;
			};
			uint32_t val;
		} S0M1AR;
	__IO union {
			struct {
				uint32_t FTH:2;
				uint32_t DMDIS:1;
				uint32_t FS:3;
				uint32_t RESERVED6:1;
				uint32_t FEIE:1;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} S0FCR;
	__IO union {
			struct {
				uint32_t EN:1;
				uint32_t DMEIE:1;
				uint32_t TEIE:1;
				uint32_t HTIE:1;
				uint32_t TCIE:1;
				uint32_t PFCTRL:1;
				uint32_t DIR:2;
				uint32_t CIRC:1;
				uint32_t PINC:1;
				uint32_t MINC:1;
				uint32_t PSIZE:2;
				uint32_t MSIZE:2;
				uint32_t PINCOS:1;
				uint32_t PL:2;
				uint32_t DBM:1;
				uint32_t CT:1;
				uint32_t ACK:1;
				uint32_t PBURST:2;
				uint32_t MBURST:2;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} S1CR;
	__IO union {
			struct {
				uint32_t NDT:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} S1NDTR;
	__IO union {
			struct {
				uint32_t PA:32;
			};
			uint32_t val;
		} S1PAR;
	__IO union {
			struct {
				uint32_t M0A:32;
			};
			uint32_t val;
		} S1M0AR;
	__IO union {
			struct {
				uint32_t M1A:32;
			};
			uint32_t val;
		} S1M1AR;
	__IO union {
			struct {
				uint32_t FTH:2;
				uint32_t DMDIS:1;
				uint32_t FS:3;
				uint32_t RESERVED6:1;
				uint32_t FEIE:1;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} S1FCR;
	__IO union {
			struct {
				uint32_t EN:1;
				uint32_t DMEIE:1;
				uint32_t TEIE:1;
				uint32_t HTIE:1;
				uint32_t TCIE:1;
				uint32_t PFCTRL:1;
				uint32_t DIR:2;
				uint32_t CIRC:1;
				uint32_t PINC:1;
				uint32_t MINC:1;
				uint32_t PSIZE:2;
				uint32_t MSIZE:2;
				uint32_t PINCOS:1;
				uint32_t PL:2;
				uint32_t DBM:1;
				uint32_t CT:1;
				uint32_t ACK:1;
				uint32_t PBURST:2;
				uint32_t MBURST:2;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} S2CR;
	__IO union {
			struct {
				uint32_t NDT:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} S2NDTR;
	__IO union {
			struct {
				uint32_t PA:32;
			};
			uint32_t val;
		} S2PAR;
	__IO union {
			struct {
				uint32_t M0A:32;
			};
			uint32_t val;
		} S2M0AR;
	__IO union {
			struct {
				uint32_t M1A:32;
			};
			uint32_t val;
		} S2M1AR;
	__IO union {
			struct {
				uint32_t FTH:2;
				uint32_t DMDIS:1;
				uint32_t FS:3;
				uint32_t RESERVED6:1;
				uint32_t FEIE:1;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} S2FCR;
	__IO union {
			struct {
				uint32_t EN:1;
				uint32_t DMEIE:1;
				uint32_t TEIE:1;
				uint32_t HTIE:1;
				uint32_t TCIE:1;
				uint32_t PFCTRL:1;
				uint32_t DIR:2;
				uint32_t CIRC:1;
				uint32_t PINC:1;
				uint32_t MINC:1;
				uint32_t PSIZE:2;
				uint32_t MSIZE:2;
				uint32_t PINCOS:1;
				uint32_t PL:2;
				uint32_t DBM:1;
				uint32_t CT:1;
				uint32_t ACK:1;
				uint32_t PBURST:2;
				uint32_t MBURST:2;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} S3CR;
	__IO union {
			struct {
				uint32_t NDT:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} S3NDTR;
	__IO union {
			struct {
				uint32_t PA:32;
			};
			uint32_t val;
		} S3PAR;
	__IO union {
			struct {
				uint32_t M0A:32;
			};
			uint32_t val;
		} S3M0AR;
	__IO union {
			struct {
				uint32_t M1A:32;
			};
			uint32_t val;
		} S3M1AR;
	__IO union {
			struct {
				uint32_t FTH:2;
				uint32_t DMDIS:1;
				uint32_t FS:3;
				uint32_t RESERVED6:1;
				uint32_t FEIE:1;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} S3FCR;
	__IO union {
			struct {
				uint32_t EN:1;
				uint32_t DMEIE:1;
				uint32_t TEIE:1;
				uint32_t HTIE:1;
				uint32_t TCIE:1;
				uint32_t PFCTRL:1;
				uint32_t DIR:2;
				uint32_t CIRC:1;
				uint32_t PINC:1;
				uint32_t MINC:1;
				uint32_t PSIZE:2;
				uint32_t MSIZE:2;
				uint32_t PINCOS:1;
				uint32_t PL:2;
				uint32_t DBM:1;
				uint32_t CT:1;
				uint32_t ACK:1;
				uint32_t PBURST:2;
				uint32_t MBURST:2;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} S4CR;
	__IO union {
			struct {
				uint32_t NDT:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} S4NDTR;
	__IO union {
			struct {
				uint32_t PA:32;
			};
			uint32_t val;
		} S4PAR;
	__IO union {
			struct {
				uint32_t M0A:32;
			};
			uint32_t val;
		} S4M0AR;
	__IO union {
			struct {
				uint32_t M1A:32;
			};
			uint32_t val;
		} S4M1AR;
	__IO union {
			struct {
				uint32_t FTH:2;
				uint32_t DMDIS:1;
				uint32_t FS:3;
				uint32_t RESERVED6:1;
				uint32_t FEIE:1;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} S4FCR;
	__IO union {
			struct {
				uint32_t EN:1;
				uint32_t DMEIE:1;
				uint32_t TEIE:1;
				uint32_t HTIE:1;
				uint32_t TCIE:1;
				uint32_t PFCTRL:1;
				uint32_t DIR:2;
				uint32_t CIRC:1;
				uint32_t PINC:1;
				uint32_t MINC:1;
				uint32_t PSIZE:2;
				uint32_t MSIZE:2;
				uint32_t PINCOS:1;
				uint32_t PL:2;
				uint32_t DBM:1;
				uint32_t CT:1;
				uint32_t ACK:1;
				uint32_t PBURST:2;
				uint32_t MBURST:2;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} S5CR;
	__IO union {
			struct {
				uint32_t NDT:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} S5NDTR;
	__IO union {
			struct {
				uint32_t PA:32;
			};
			uint32_t val;
		} S5PAR;
	__IO union {
			struct {
				uint32_t M0A:32;
			};
			uint32_t val;
		} S5M0AR;
	__IO union {
			struct {
				uint32_t M1A:32;
			};
			uint32_t val;
		} S5M1AR;
	__IO union {
			struct {
				uint32_t FTH:2;
				uint32_t DMDIS:1;
				uint32_t FS:3;
				uint32_t RESERVED6:1;
				uint32_t FEIE:1;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} S5FCR;
	__IO union {
			struct {
				uint32_t EN:1;
				uint32_t DMEIE:1;
				uint32_t TEIE:1;
				uint32_t HTIE:1;
				uint32_t TCIE:1;
				uint32_t PFCTRL:1;
				uint32_t DIR:2;
				uint32_t CIRC:1;
				uint32_t PINC:1;
				uint32_t MINC:1;
				uint32_t PSIZE:2;
				uint32_t MSIZE:2;
				uint32_t PINCOS:1;
				uint32_t PL:2;
				uint32_t DBM:1;
				uint32_t CT:1;
				uint32_t ACK:1;
				uint32_t PBURST:2;
				uint32_t MBURST:2;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} S6CR;
	__IO union {
			struct {
				uint32_t NDT:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} S6NDTR;
	__IO union {
			struct {
				uint32_t PA:32;
			};
			uint32_t val;
		} S6PAR;
	__IO union {
			struct {
				uint32_t M0A:32;
			};
			uint32_t val;
		} S6M0AR;
	__IO union {
			struct {
				uint32_t M1A:32;
			};
			uint32_t val;
		} S6M1AR;
	__IO union {
			struct {
				uint32_t FTH:2;
				uint32_t DMDIS:1;
				uint32_t FS:3;
				uint32_t RESERVED6:1;
				uint32_t FEIE:1;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} S6FCR;
	__IO union {
			struct {
				uint32_t EN:1;
				uint32_t DMEIE:1;
				uint32_t TEIE:1;
				uint32_t HTIE:1;
				uint32_t TCIE:1;
				uint32_t PFCTRL:1;
				uint32_t DIR:2;
				uint32_t CIRC:1;
				uint32_t PINC:1;
				uint32_t MINC:1;
				uint32_t PSIZE:2;
				uint32_t MSIZE:2;
				uint32_t PINCOS:1;
				uint32_t PL:2;
				uint32_t DBM:1;
				uint32_t CT:1;
				uint32_t ACK:1;
				uint32_t PBURST:2;
				uint32_t MBURST:2;
				uint32_t RESERVED25:7;
			};
			uint32_t val;
		} S7CR;
	__IO union {
			struct {
				uint32_t NDT:16;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} S7NDTR;
	__IO union {
			struct {
				uint32_t PA:32;
			};
			uint32_t val;
		} S7PAR;
	__IO union {
			struct {
				uint32_t M0A:32;
			};
			uint32_t val;
		} S7M0AR;
	__IO union {
			struct {
				uint32_t M1A:32;
			};
			uint32_t val;
		} S7M1AR;
	__IO union {
			struct {
				uint32_t FTH:2;
				uint32_t DMDIS:1;
				uint32_t FS:3;
				uint32_t RESERVED6:1;
				uint32_t FEIE:1;
				uint32_t RESERVED8:24;
			};
			uint32_t val;
		} S7FCR;
} MyDMA1_TypeDef;

typedef struct {
	__IO union {
			struct {
				uint32_t UE:1;
				uint32_t UESM:1;
				uint32_t RE:1;
				uint32_t TE:1;
				uint32_t IDLEIE:1;
				uint32_t RXNEIE:1;
				uint32_t TCIE:1;
				uint32_t TXEIE:1;
				uint32_t PEIE:1;
				uint32_t PS:1;
				uint32_t PCE:1;
				uint32_t WAKE:1;
				uint32_t M0:1;
				uint32_t MME:1;
				uint32_t CMIE:1;
				uint32_t OVER8:1;
				uint32_t DEDT0:1;
				uint32_t DEDT1:1;
				uint32_t DEDT2:1;
				uint32_t DEDT3:1;
				uint32_t DEDT4:1;
				uint32_t DEAT0:1;
				uint32_t DEAT1:1;
				uint32_t DEAT2:1;
				uint32_t DEAT3:1;
				uint32_t DEAT4:1;
				uint32_t RTOIE:1;
				uint32_t EOBIE:1;
				uint32_t M1:1;
				uint32_t FIFOEN:1;
				uint32_t TXFEIE:1;
				uint32_t RXFFIE:1;
			};
			uint32_t val;
		} CR1;
	__IO union {
			struct {
				uint32_t SLVEN:1;
				uint32_t RESERVED1:2;
				uint32_t DIS_NSS:1;
				uint32_t ADDM7:1;
				uint32_t LBDL:1;
				uint32_t LBDIE:1;
				uint32_t RESERVED7:1;
				uint32_t LBCL:1;
				uint32_t CPHA:1;
				uint32_t CPOL:1;
				uint32_t CLKEN:1;
				uint32_t STOP:2;
				uint32_t LINEN:1;
				uint32_t SWAP:1;
				uint32_t RXINV:1;
				uint32_t TXINV:1;
				uint32_t TAINV:1;
				uint32_t MSBFIRST:1;
				uint32_t ABREN:1;
				uint32_t ABRMOD0:1;
				uint32_t ABRMOD1:1;
				uint32_t RTOEN:1;
				uint32_t ADD0_3:4;
				uint32_t ADD4_7:4;
			};
			uint32_t val;
		} CR2;
	__IO union {
			struct {
				uint32_t EIE:1;
				uint32_t IREN:1;
				uint32_t IRLP:1;
				uint32_t HDSEL:1;
				uint32_t NACK:1;
				uint32_t SCEN:1;
				uint32_t DMAR:1;
				uint32_t DMAT:1;
				uint32_t RTSE:1;
				uint32_t CTSE:1;
				uint32_t CTSIE:1;
				uint32_t ONEBIT:1;
				uint32_t OVRDIS:1;
				uint32_t DDRE:1;
				uint32_t DEM:1;
				uint32_t DEP:1;
				uint32_t RESERVED16:1;
				uint32_t SCARCNT:3;
				uint32_t WUS:2;
				uint32_t WUFIE:1;
				uint32_t TXFTIE:1;
				uint32_t TCBGTIE:1;
				uint32_t RXFTCFG:3;
				uint32_t RXFTIE:1;
				uint32_t TXFTCFG:3;
			};
			uint32_t val;
		} CR3;
	__IO union {
			struct {
				uint32_t BRR_0_3:4;
				uint32_t BRR_4_15:12;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} BRR;
	__IO union {
			struct {
				uint32_t PSC:8;
				uint32_t GT:8;
				uint32_t RESERVED16:16;
			};
			uint32_t val;
		} GTPR;
	__IO union {
			struct {
				uint32_t RTO:24;
				uint32_t BLEN:8;
			};
			uint32_t val;
		} RTOR;
	__IO union {
			struct {
				uint32_t ABRRQ:1;
				uint32_t SBKRQ:1;
				uint32_t MMRQ:1;
				uint32_t RXFRQ:1;
				uint32_t TXFRQ:1;
				uint32_t RESERVED5:27;
			};
			uint32_t val;
		} RQR;
	__IO union {
			struct {
				uint32_t PE:1;
				uint32_t FE:1;
				uint32_t NF:1;
				uint32_t ORE:1;
				uint32_t IDLE:1;
				uint32_t RXNE:1;
				uint32_t TC:1;
				uint32_t TXE:1;
				uint32_t LBDF:1;
				uint32_t CTSIF:1;
				uint32_t CTS:1;
				uint32_t RTOF:1;
				uint32_t EOBF:1;
				uint32_t UDR:1;
				uint32_t ABRE:1;
				uint32_t ABRF:1;
				uint32_t BUSY:1;
				uint32_t CMF:1;
				uint32_t SBKF:1;
				uint32_t RWU:1;
				uint32_t WUF:1;
				uint32_t TEACK:1;
				uint32_t REACK:1;
				uint32_t TXFE:1;
				uint32_t RXFF:1;
				uint32_t TCBGT:1;
				uint32_t RXFT:1;
				uint32_t TXFT:1;
				uint32_t RESERVED28:4;
			};
			uint32_t val;
		} ISR;
	__IO union {
			struct {
				uint32_t PECF:1;
				uint32_t FECF:1;
				uint32_t NCF:1;
				uint32_t ORECF:1;
				uint32_t IDLECF:1;
				uint32_t TXFECF:1;
				uint32_t TCCF:1;
				uint32_t TCBGTC:1;
				uint32_t LBDCF:1;
				uint32_t CTSCF:1;
				uint32_t RESERVED10:1;
				uint32_t RTOCF:1;
				uint32_t EOBCF:1;
				uint32_t UDRCF:1;
				uint32_t RESERVED14:3;
				uint32_t CMCF:1;
				uint32_t RESERVED18:2;
				uint32_t WUCF:1;
				uint32_t RESERVED21:11;
			};
			uint32_t val;
		} ICR;
	__IO union {
			struct {
				uint32_t RDR:9;
				uint32_t RESERVED9:23;
			};
			uint32_t val;
		} RDR;
	__IO union {
			struct {
				uint32_t TDR:9;
				uint32_t RESERVED9:23;
			};
			uint32_t val;
		} TDR;
	__IO union {
			struct {
				uint32_t PRESCALER:4;
				uint32_t RESERVED4:28;
			};
			uint32_t val;
		} PRESC;
} MyUSART1_TypeDef;

//typedef struct {
//} MyUART4_TypeDef;

#define MyFMC_BASE 0x52004000
#define MyFMC ((volatile MyFMC_TypeDef *)(MyFMC_BASE))

#define MyGPIOA_BASE 0x58020000
#define MyGPIOA ((volatile MyGPIOA_TypeDef *)(MyGPIOA_BASE))

#define MyGPIOB_BASE 0x58020400
#define MyGPIOB ((volatile MyGPIOA_TypeDef *)(MyGPIOB_BASE))

#define MyGPIOC_BASE 0x58020800
#define MyGPIOC ((volatile MyGPIOA_TypeDef *)(MyGPIOC_BASE))

#define MyGPIOD_BASE 0x58020C00
#define MyGPIOD ((volatile MyGPIOA_TypeDef *)(MyGPIOD_BASE))

#define MyGPIOE_BASE 0x58021000
#define MyGPIOE ((volatile MyGPIOA_TypeDef *)(MyGPIOE_BASE))

#define MyGPIOF_BASE 0x58021400
#define MyGPIOF ((volatile MyGPIOA_TypeDef *)(MyGPIOF_BASE))

#define MyGPIOG_BASE 0x58021800
#define MyGPIOG ((volatile MyGPIOA_TypeDef *)(MyGPIOG_BASE))

#define MyGPIOH_BASE 0x58021C00
#define MyGPIOH ((volatile MyGPIOA_TypeDef *)(MyGPIOH_BASE))

#define MyGPIOI_BASE 0x58022000
#define MyGPIOI ((volatile MyGPIOA_TypeDef *)(MyGPIOI_BASE))

#define MyGPIOJ_BASE 0x58022400
#define MyGPIOJ ((volatile MyGPIOA_TypeDef *)(MyGPIOJ_BASE))

#define MyGPIOK_BASE 0x58022800
#define MyGPIOK ((volatile MyGPIOA_TypeDef *)(MyGPIOK_BASE))

#define MyQUADSPI_BASE 0x52005000
#define MyQUADSPI ((volatile MyQUADSPI_TypeDef *)(MyQUADSPI_BASE))

#define MyPWR_BASE 0x58024800
#define MyPWR ((volatile MyPWR_TypeDef *)(MyPWR_BASE))

#define MySPI1_BASE 0x40013000
#define MySPI1 ((volatile MySPI1_TypeDef *)(MySPI1_BASE))

#define MyLTDC_BASE 0x50001000
#define MyLTDC ((volatile MyLTDC_TypeDef *)(MyLTDC_BASE))

#define MyRCC_BASE 0x58024400
#define MyRCC ((volatile MyRCC_TypeDef *)(MyRCC_BASE))

#define MyEXTI_BASE 0x58000000
#define MyEXTI ((volatile MyEXTI_TypeDef *)(MyEXTI_BASE))

#define MyFlash_BASE 0x52002000
#define MyFlash ((volatile MyFlash_TypeDef *)(MyFlash_BASE))

#define MyDMA1_BASE 0x40020000
#define MyDMA1 ((volatile MyDMA1_TypeDef *)(MyDMA1_BASE))

#define MyUSART1_BASE 0x40011000
#define MyUSART1 ((volatile MyUSART1_TypeDef *)(MyUSART1_BASE))

#define MyUART4_BASE 0x40004C00
#define MyUART4 ((volatile MyUSART1_TypeDef *)(MyUART4_BASE))

