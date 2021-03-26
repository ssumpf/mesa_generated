/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/lib/mesa/src/mesa/program/program_parse.y"

/*
 * Copyright © 2009 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main/errors.h"
#include "main/mtypes.h"

#include "program/program.h"
#include "program/prog_parameter.h"
#include "program/prog_parameter_layout.h"
#include "program/prog_statevars.h"
#include "program/prog_instruction.h"

#include "program/symbol_table.h"
#include "program/program_parser.h"

#include "util/u_math.h"
#include "util/u_memory.h"

enum {
   STATE_MATRIX_NO_MODIFIER,
   STATE_MATRIX_INVERSE,
   STATE_MATRIX_TRANSPOSE,
   STATE_MATRIX_INVTRANS,
};

extern void *yy_scan_string(char *);
extern void yy_delete_buffer(void *);

static struct asm_symbol *declare_variable(struct asm_parser_state *state,
    char *name, enum asm_type t, struct YYLTYPE *locp);

static int add_state_reference(struct gl_program_parameter_list *param_list,
    const gl_state_index16 tokens[STATE_LENGTH]);

static int initialize_symbol_from_state(struct gl_program *prog,
    struct asm_symbol *param_var, const gl_state_index16 tokens[STATE_LENGTH]);

static int initialize_symbol_from_param(struct gl_program *prog,
    struct asm_symbol *param_var, const gl_state_index16 tokens[STATE_LENGTH]);

static int initialize_symbol_from_const(struct gl_program *prog,
    struct asm_symbol *param_var, const struct asm_vector *vec,
    GLboolean allowSwizzle);

static int yyparse(struct asm_parser_state *state);

static char *make_error_string(const char *fmt, ...);

static void yyerror(struct YYLTYPE *locp, struct asm_parser_state *state,
    const char *s);

static int validate_inputs(struct YYLTYPE *locp,
    struct asm_parser_state *state);

static void init_dst_reg(struct prog_dst_register *r);

static void set_dst_reg(struct prog_dst_register *r,
                        gl_register_file file, GLint index);

static void init_src_reg(struct asm_src_register *r);

static void set_src_reg(struct asm_src_register *r,
                        gl_register_file file, GLint index);

static void set_src_reg_swz(struct asm_src_register *r,
                            gl_register_file file, GLint index, GLuint swizzle);

static void asm_instruction_set_operands(struct asm_instruction *inst,
    const struct prog_dst_register *dst, const struct asm_src_register *src0,
    const struct asm_src_register *src1, const struct asm_src_register *src2);

static struct asm_instruction *asm_instruction_ctor(enum prog_opcode op,
    const struct prog_dst_register *dst, const struct asm_src_register *src0,
    const struct asm_src_register *src1, const struct asm_src_register *src2);

static struct asm_instruction *asm_instruction_copy_ctor(
    const struct prog_instruction *base, const struct prog_dst_register *dst,
    const struct asm_src_register *src0, const struct asm_src_register *src1,
    const struct asm_src_register *src2);

#ifndef FALSE
#define FALSE 0
#define TRUE (!FALSE)
#endif

#define YYLLOC_DEFAULT(Current, Rhs, N)					\
   do {									\
      if (N) {							\
	 (Current).first_line = YYRHSLOC(Rhs, 1).first_line;		\
	 (Current).first_column = YYRHSLOC(Rhs, 1).first_column;	\
	 (Current).position = YYRHSLOC(Rhs, 1).position;		\
	 (Current).last_line = YYRHSLOC(Rhs, N).last_line;		\
	 (Current).last_column = YYRHSLOC(Rhs, N).last_column;		\
      } else {								\
	 (Current).first_line = YYRHSLOC(Rhs, 0).last_line;		\
	 (Current).last_line = (Current).first_line;			\
	 (Current).first_column = YYRHSLOC(Rhs, 0).last_column;		\
	 (Current).last_column = (Current).first_column;		\
	 (Current).position = YYRHSLOC(Rhs, 0).position			\
	    + (Current).first_column;					\
      }									\
   } while(0)

#line 201 "generated/src/mesa/program/program_parse.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "program_parse.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ARBvp_10 = 3,                   /* ARBvp_10  */
  YYSYMBOL_ARBfp_10 = 4,                   /* ARBfp_10  */
  YYSYMBOL_ADDRESS = 5,                    /* ADDRESS  */
  YYSYMBOL_ALIAS = 6,                      /* ALIAS  */
  YYSYMBOL_ATTRIB = 7,                     /* ATTRIB  */
  YYSYMBOL_OPTION = 8,                     /* OPTION  */
  YYSYMBOL_OUTPUT = 9,                     /* OUTPUT  */
  YYSYMBOL_PARAM = 10,                     /* PARAM  */
  YYSYMBOL_TEMP = 11,                      /* TEMP  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_BIN_OP = 13,                    /* BIN_OP  */
  YYSYMBOL_BINSC_OP = 14,                  /* BINSC_OP  */
  YYSYMBOL_SAMPLE_OP = 15,                 /* SAMPLE_OP  */
  YYSYMBOL_SCALAR_OP = 16,                 /* SCALAR_OP  */
  YYSYMBOL_TRI_OP = 17,                    /* TRI_OP  */
  YYSYMBOL_VECTOR_OP = 18,                 /* VECTOR_OP  */
  YYSYMBOL_ARL = 19,                       /* ARL  */
  YYSYMBOL_KIL = 20,                       /* KIL  */
  YYSYMBOL_SWZ = 21,                       /* SWZ  */
  YYSYMBOL_TXD_OP = 22,                    /* TXD_OP  */
  YYSYMBOL_INTEGER = 23,                   /* INTEGER  */
  YYSYMBOL_REAL = 24,                      /* REAL  */
  YYSYMBOL_AMBIENT = 25,                   /* AMBIENT  */
  YYSYMBOL_ATTENUATION = 26,               /* ATTENUATION  */
  YYSYMBOL_BACK = 27,                      /* BACK  */
  YYSYMBOL_CLIP = 28,                      /* CLIP  */
  YYSYMBOL_COLOR = 29,                     /* COLOR  */
  YYSYMBOL_DEPTH = 30,                     /* DEPTH  */
  YYSYMBOL_DIFFUSE = 31,                   /* DIFFUSE  */
  YYSYMBOL_DIRECTION = 32,                 /* DIRECTION  */
  YYSYMBOL_EMISSION = 33,                  /* EMISSION  */
  YYSYMBOL_ENV = 34,                       /* ENV  */
  YYSYMBOL_EYE = 35,                       /* EYE  */
  YYSYMBOL_FOG = 36,                       /* FOG  */
  YYSYMBOL_FOGCOORD = 37,                  /* FOGCOORD  */
  YYSYMBOL_FRAGMENT = 38,                  /* FRAGMENT  */
  YYSYMBOL_FRONT = 39,                     /* FRONT  */
  YYSYMBOL_HALF = 40,                      /* HALF  */
  YYSYMBOL_INVERSE = 41,                   /* INVERSE  */
  YYSYMBOL_INVTRANS = 42,                  /* INVTRANS  */
  YYSYMBOL_LIGHT = 43,                     /* LIGHT  */
  YYSYMBOL_LIGHTMODEL = 44,                /* LIGHTMODEL  */
  YYSYMBOL_LIGHTPROD = 45,                 /* LIGHTPROD  */
  YYSYMBOL_LOCAL = 46,                     /* LOCAL  */
  YYSYMBOL_MATERIAL = 47,                  /* MATERIAL  */
  YYSYMBOL_MAT_PROGRAM = 48,               /* MAT_PROGRAM  */
  YYSYMBOL_MATRIX = 49,                    /* MATRIX  */
  YYSYMBOL_MATRIXINDEX = 50,               /* MATRIXINDEX  */
  YYSYMBOL_MODELVIEW = 51,                 /* MODELVIEW  */
  YYSYMBOL_MVP = 52,                       /* MVP  */
  YYSYMBOL_NORMAL = 53,                    /* NORMAL  */
  YYSYMBOL_OBJECT = 54,                    /* OBJECT  */
  YYSYMBOL_PALETTE = 55,                   /* PALETTE  */
  YYSYMBOL_PARAMS = 56,                    /* PARAMS  */
  YYSYMBOL_PLANE = 57,                     /* PLANE  */
  YYSYMBOL_POINT_TOK = 58,                 /* POINT_TOK  */
  YYSYMBOL_POINTSIZE = 59,                 /* POINTSIZE  */
  YYSYMBOL_POSITION = 60,                  /* POSITION  */
  YYSYMBOL_PRIMARY = 61,                   /* PRIMARY  */
  YYSYMBOL_PROGRAM = 62,                   /* PROGRAM  */
  YYSYMBOL_PROJECTION = 63,                /* PROJECTION  */
  YYSYMBOL_RANGE = 64,                     /* RANGE  */
  YYSYMBOL_RESULT = 65,                    /* RESULT  */
  YYSYMBOL_ROW = 66,                       /* ROW  */
  YYSYMBOL_SCENECOLOR = 67,                /* SCENECOLOR  */
  YYSYMBOL_SECONDARY = 68,                 /* SECONDARY  */
  YYSYMBOL_SHININESS = 69,                 /* SHININESS  */
  YYSYMBOL_SIZE_TOK = 70,                  /* SIZE_TOK  */
  YYSYMBOL_SPECULAR = 71,                  /* SPECULAR  */
  YYSYMBOL_SPOT = 72,                      /* SPOT  */
  YYSYMBOL_STATE = 73,                     /* STATE  */
  YYSYMBOL_TEXCOORD = 74,                  /* TEXCOORD  */
  YYSYMBOL_TEXENV = 75,                    /* TEXENV  */
  YYSYMBOL_TEXGEN = 76,                    /* TEXGEN  */
  YYSYMBOL_TEXGEN_Q = 77,                  /* TEXGEN_Q  */
  YYSYMBOL_TEXGEN_R = 78,                  /* TEXGEN_R  */
  YYSYMBOL_TEXGEN_S = 79,                  /* TEXGEN_S  */
  YYSYMBOL_TEXGEN_T = 80,                  /* TEXGEN_T  */
  YYSYMBOL_TEXTURE = 81,                   /* TEXTURE  */
  YYSYMBOL_TRANSPOSE = 82,                 /* TRANSPOSE  */
  YYSYMBOL_TEXTURE_UNIT = 83,              /* TEXTURE_UNIT  */
  YYSYMBOL_TEX_1D = 84,                    /* TEX_1D  */
  YYSYMBOL_TEX_2D = 85,                    /* TEX_2D  */
  YYSYMBOL_TEX_3D = 86,                    /* TEX_3D  */
  YYSYMBOL_TEX_CUBE = 87,                  /* TEX_CUBE  */
  YYSYMBOL_TEX_RECT = 88,                  /* TEX_RECT  */
  YYSYMBOL_TEX_SHADOW1D = 89,              /* TEX_SHADOW1D  */
  YYSYMBOL_TEX_SHADOW2D = 90,              /* TEX_SHADOW2D  */
  YYSYMBOL_TEX_SHADOWRECT = 91,            /* TEX_SHADOWRECT  */
  YYSYMBOL_TEX_ARRAY1D = 92,               /* TEX_ARRAY1D  */
  YYSYMBOL_TEX_ARRAY2D = 93,               /* TEX_ARRAY2D  */
  YYSYMBOL_TEX_ARRAYSHADOW1D = 94,         /* TEX_ARRAYSHADOW1D  */
  YYSYMBOL_TEX_ARRAYSHADOW2D = 95,         /* TEX_ARRAYSHADOW2D  */
  YYSYMBOL_VERTEX = 96,                    /* VERTEX  */
  YYSYMBOL_VTXATTRIB = 97,                 /* VTXATTRIB  */
  YYSYMBOL_IDENTIFIER = 98,                /* IDENTIFIER  */
  YYSYMBOL_USED_IDENTIFIER = 99,           /* USED_IDENTIFIER  */
  YYSYMBOL_MASK4 = 100,                    /* MASK4  */
  YYSYMBOL_MASK3 = 101,                    /* MASK3  */
  YYSYMBOL_MASK2 = 102,                    /* MASK2  */
  YYSYMBOL_MASK1 = 103,                    /* MASK1  */
  YYSYMBOL_SWIZZLE = 104,                  /* SWIZZLE  */
  YYSYMBOL_DOT_DOT = 105,                  /* DOT_DOT  */
  YYSYMBOL_DOT = 106,                      /* DOT  */
  YYSYMBOL_107_ = 107,                     /* ';'  */
  YYSYMBOL_108_ = 108,                     /* ','  */
  YYSYMBOL_109_ = 109,                     /* '['  */
  YYSYMBOL_110_ = 110,                     /* ']'  */
  YYSYMBOL_111_ = 111,                     /* '+'  */
  YYSYMBOL_112_ = 112,                     /* '-'  */
  YYSYMBOL_113_ = 113,                     /* '='  */
  YYSYMBOL_114_ = 114,                     /* '{'  */
  YYSYMBOL_115_ = 115,                     /* '}'  */
  YYSYMBOL_YYACCEPT = 116,                 /* $accept  */
  YYSYMBOL_program = 117,                  /* program  */
  YYSYMBOL_language = 118,                 /* language  */
  YYSYMBOL_optionSequence = 119,           /* optionSequence  */
  YYSYMBOL_option = 120,                   /* option  */
  YYSYMBOL_statementSequence = 121,        /* statementSequence  */
  YYSYMBOL_statement = 122,                /* statement  */
  YYSYMBOL_instruction = 123,              /* instruction  */
  YYSYMBOL_ALU_instruction = 124,          /* ALU_instruction  */
  YYSYMBOL_TexInstruction = 125,           /* TexInstruction  */
  YYSYMBOL_ARL_instruction = 126,          /* ARL_instruction  */
  YYSYMBOL_VECTORop_instruction = 127,     /* VECTORop_instruction  */
  YYSYMBOL_SCALARop_instruction = 128,     /* SCALARop_instruction  */
  YYSYMBOL_BINSCop_instruction = 129,      /* BINSCop_instruction  */
  YYSYMBOL_BINop_instruction = 130,        /* BINop_instruction  */
  YYSYMBOL_TRIop_instruction = 131,        /* TRIop_instruction  */
  YYSYMBOL_SAMPLE_instruction = 132,       /* SAMPLE_instruction  */
  YYSYMBOL_KIL_instruction = 133,          /* KIL_instruction  */
  YYSYMBOL_TXD_instruction = 134,          /* TXD_instruction  */
  YYSYMBOL_texImageUnit = 135,             /* texImageUnit  */
  YYSYMBOL_texTarget = 136,                /* texTarget  */
  YYSYMBOL_SWZ_instruction = 137,          /* SWZ_instruction  */
  YYSYMBOL_scalarSrcReg = 138,             /* scalarSrcReg  */
  YYSYMBOL_scalarUse = 139,                /* scalarUse  */
  YYSYMBOL_swizzleSrcReg = 140,            /* swizzleSrcReg  */
  YYSYMBOL_maskedDstReg = 141,             /* maskedDstReg  */
  YYSYMBOL_maskedAddrReg = 142,            /* maskedAddrReg  */
  YYSYMBOL_extendedSwizzle = 143,          /* extendedSwizzle  */
  YYSYMBOL_extSwizComp = 144,              /* extSwizComp  */
  YYSYMBOL_extSwizSel = 145,               /* extSwizSel  */
  YYSYMBOL_srcReg = 146,                   /* srcReg  */
  YYSYMBOL_dstReg = 147,                   /* dstReg  */
  YYSYMBOL_progParamArray = 148,           /* progParamArray  */
  YYSYMBOL_progParamArrayMem = 149,        /* progParamArrayMem  */
  YYSYMBOL_progParamArrayAbs = 150,        /* progParamArrayAbs  */
  YYSYMBOL_progParamArrayRel = 151,        /* progParamArrayRel  */
  YYSYMBOL_addrRegRelOffset = 152,         /* addrRegRelOffset  */
  YYSYMBOL_addrRegPosOffset = 153,         /* addrRegPosOffset  */
  YYSYMBOL_addrRegNegOffset = 154,         /* addrRegNegOffset  */
  YYSYMBOL_addrReg = 155,                  /* addrReg  */
  YYSYMBOL_addrComponent = 156,            /* addrComponent  */
  YYSYMBOL_addrWriteMask = 157,            /* addrWriteMask  */
  YYSYMBOL_scalarSuffix = 158,             /* scalarSuffix  */
  YYSYMBOL_swizzleSuffix = 159,            /* swizzleSuffix  */
  YYSYMBOL_optionalMask = 160,             /* optionalMask  */
  YYSYMBOL_namingStatement = 161,          /* namingStatement  */
  YYSYMBOL_ATTRIB_statement = 162,         /* ATTRIB_statement  */
  YYSYMBOL_attribBinding = 163,            /* attribBinding  */
  YYSYMBOL_vtxAttribItem = 164,            /* vtxAttribItem  */
  YYSYMBOL_vtxAttribNum = 165,             /* vtxAttribNum  */
  YYSYMBOL_vtxWeightNum = 166,             /* vtxWeightNum  */
  YYSYMBOL_fragAttribItem = 167,           /* fragAttribItem  */
  YYSYMBOL_PARAM_statement = 168,          /* PARAM_statement  */
  YYSYMBOL_PARAM_singleStmt = 169,         /* PARAM_singleStmt  */
  YYSYMBOL_PARAM_multipleStmt = 170,       /* PARAM_multipleStmt  */
  YYSYMBOL_optArraySize = 171,             /* optArraySize  */
  YYSYMBOL_paramSingleInit = 172,          /* paramSingleInit  */
  YYSYMBOL_paramMultipleInit = 173,        /* paramMultipleInit  */
  YYSYMBOL_paramMultInitList = 174,        /* paramMultInitList  */
  YYSYMBOL_paramSingleItemDecl = 175,      /* paramSingleItemDecl  */
  YYSYMBOL_paramSingleItemUse = 176,       /* paramSingleItemUse  */
  YYSYMBOL_paramMultipleItem = 177,        /* paramMultipleItem  */
  YYSYMBOL_stateMultipleItem = 178,        /* stateMultipleItem  */
  YYSYMBOL_stateSingleItem = 179,          /* stateSingleItem  */
  YYSYMBOL_stateMaterialItem = 180,        /* stateMaterialItem  */
  YYSYMBOL_stateMatProperty = 181,         /* stateMatProperty  */
  YYSYMBOL_stateLightItem = 182,           /* stateLightItem  */
  YYSYMBOL_stateLightProperty = 183,       /* stateLightProperty  */
  YYSYMBOL_stateSpotProperty = 184,        /* stateSpotProperty  */
  YYSYMBOL_stateLightModelItem = 185,      /* stateLightModelItem  */
  YYSYMBOL_stateLModProperty = 186,        /* stateLModProperty  */
  YYSYMBOL_stateLightProdItem = 187,       /* stateLightProdItem  */
  YYSYMBOL_stateLProdProperty = 188,       /* stateLProdProperty  */
  YYSYMBOL_stateTexEnvItem = 189,          /* stateTexEnvItem  */
  YYSYMBOL_stateTexEnvProperty = 190,      /* stateTexEnvProperty  */
  YYSYMBOL_ambDiffSpecProperty = 191,      /* ambDiffSpecProperty  */
  YYSYMBOL_stateLightNumber = 192,         /* stateLightNumber  */
  YYSYMBOL_stateTexGenItem = 193,          /* stateTexGenItem  */
  YYSYMBOL_stateTexGenType = 194,          /* stateTexGenType  */
  YYSYMBOL_stateTexGenCoord = 195,         /* stateTexGenCoord  */
  YYSYMBOL_stateFogItem = 196,             /* stateFogItem  */
  YYSYMBOL_stateFogProperty = 197,         /* stateFogProperty  */
  YYSYMBOL_stateClipPlaneItem = 198,       /* stateClipPlaneItem  */
  YYSYMBOL_stateClipPlaneNum = 199,        /* stateClipPlaneNum  */
  YYSYMBOL_statePointItem = 200,           /* statePointItem  */
  YYSYMBOL_statePointProperty = 201,       /* statePointProperty  */
  YYSYMBOL_stateMatrixRow = 202,           /* stateMatrixRow  */
  YYSYMBOL_stateMatrixRows = 203,          /* stateMatrixRows  */
  YYSYMBOL_optMatrixRows = 204,            /* optMatrixRows  */
  YYSYMBOL_stateMatrixItem = 205,          /* stateMatrixItem  */
  YYSYMBOL_stateOptMatModifier = 206,      /* stateOptMatModifier  */
  YYSYMBOL_stateMatModifier = 207,         /* stateMatModifier  */
  YYSYMBOL_stateMatrixRowNum = 208,        /* stateMatrixRowNum  */
  YYSYMBOL_stateMatrixName = 209,          /* stateMatrixName  */
  YYSYMBOL_stateOptModMatNum = 210,        /* stateOptModMatNum  */
  YYSYMBOL_stateModMatNum = 211,           /* stateModMatNum  */
  YYSYMBOL_statePaletteMatNum = 212,       /* statePaletteMatNum  */
  YYSYMBOL_stateProgramMatNum = 213,       /* stateProgramMatNum  */
  YYSYMBOL_stateDepthItem = 214,           /* stateDepthItem  */
  YYSYMBOL_programSingleItem = 215,        /* programSingleItem  */
  YYSYMBOL_programMultipleItem = 216,      /* programMultipleItem  */
  YYSYMBOL_progEnvParams = 217,            /* progEnvParams  */
  YYSYMBOL_progEnvParamNums = 218,         /* progEnvParamNums  */
  YYSYMBOL_progEnvParam = 219,             /* progEnvParam  */
  YYSYMBOL_progLocalParams = 220,          /* progLocalParams  */
  YYSYMBOL_progLocalParamNums = 221,       /* progLocalParamNums  */
  YYSYMBOL_progLocalParam = 222,           /* progLocalParam  */
  YYSYMBOL_progEnvParamNum = 223,          /* progEnvParamNum  */
  YYSYMBOL_progLocalParamNum = 224,        /* progLocalParamNum  */
  YYSYMBOL_paramConstDecl = 225,           /* paramConstDecl  */
  YYSYMBOL_paramConstUse = 226,            /* paramConstUse  */
  YYSYMBOL_paramConstScalarDecl = 227,     /* paramConstScalarDecl  */
  YYSYMBOL_paramConstScalarUse = 228,      /* paramConstScalarUse  */
  YYSYMBOL_paramConstVector = 229,         /* paramConstVector  */
  YYSYMBOL_signedFloatConstant = 230,      /* signedFloatConstant  */
  YYSYMBOL_optionalSign = 231,             /* optionalSign  */
  YYSYMBOL_TEMP_statement = 232,           /* TEMP_statement  */
  YYSYMBOL_233_1 = 233,                    /* @1  */
  YYSYMBOL_ADDRESS_statement = 234,        /* ADDRESS_statement  */
  YYSYMBOL_235_2 = 235,                    /* @2  */
  YYSYMBOL_varNameList = 236,              /* varNameList  */
  YYSYMBOL_OUTPUT_statement = 237,         /* OUTPUT_statement  */
  YYSYMBOL_resultBinding = 238,            /* resultBinding  */
  YYSYMBOL_resultColBinding = 239,         /* resultColBinding  */
  YYSYMBOL_optResultFaceType = 240,        /* optResultFaceType  */
  YYSYMBOL_optResultColorType = 241,       /* optResultColorType  */
  YYSYMBOL_optFaceType = 242,              /* optFaceType  */
  YYSYMBOL_optColorType = 243,             /* optColorType  */
  YYSYMBOL_optTexCoordUnitNum = 244,       /* optTexCoordUnitNum  */
  YYSYMBOL_optTexImageUnitNum = 245,       /* optTexImageUnitNum  */
  YYSYMBOL_optLegacyTexUnitNum = 246,      /* optLegacyTexUnitNum  */
  YYSYMBOL_texCoordUnitNum = 247,          /* texCoordUnitNum  */
  YYSYMBOL_texImageUnitNum = 248,          /* texImageUnitNum  */
  YYSYMBOL_legacyTexUnitNum = 249,         /* legacyTexUnitNum  */
  YYSYMBOL_ALIAS_statement = 250,          /* ALIAS_statement  */
  YYSYMBOL_string = 251                    /* string  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 279 "src/lib/mesa/src/mesa/program/program_parse.y"

extern int
_mesa_program_lexer_lex(YYSTYPE *yylval_param, YYLTYPE *yylloc_param,
                        void *yyscanner);

static int
yylex(YYSTYPE *yylval_param, YYLTYPE *yylloc_param,
      struct asm_parser_state *state)
{
   return _mesa_program_lexer_lex(yylval_param, yylloc_param, state->scanner);
}

#line 499 "generated/src/mesa/program/program_parse.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   353

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  267
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  450

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   361


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,   108,   112,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   107,
       2,   113,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   109,     2,   110,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,     2,   115,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   294,   294,   297,   305,   317,   318,   321,   345,   346,
     349,   364,   367,   372,   379,   380,   381,   382,   383,   384,
     385,   388,   389,   390,   393,   399,   405,   411,   418,   424,
     431,   475,   482,   526,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   546,   558,   568,   577,
     590,   612,   619,   652,   659,   675,   734,   777,   786,   808,
     818,   822,   851,   870,   870,   872,   879,   891,   892,   893,
     896,   910,   924,   944,   955,   967,   969,   970,   971,   972,
     975,   975,   975,   975,   976,   979,   980,   981,   982,   983,
     984,   987,  1006,  1010,  1016,  1020,  1024,  1028,  1032,  1036,
    1041,  1047,  1058,  1060,  1064,  1068,  1072,  1078,  1078,  1080,
    1098,  1124,  1127,  1142,  1148,  1154,  1155,  1162,  1168,  1174,
    1182,  1188,  1194,  1202,  1208,  1214,  1222,  1223,  1226,  1227,
    1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1239,
    1248,  1252,  1256,  1262,  1271,  1275,  1279,  1288,  1292,  1298,
    1304,  1311,  1316,  1324,  1334,  1336,  1344,  1350,  1354,  1358,
    1364,  1375,  1384,  1388,  1393,  1397,  1401,  1405,  1411,  1418,
    1422,  1428,  1436,  1447,  1454,  1458,  1464,  1473,  1483,  1487,
    1505,  1514,  1517,  1523,  1527,  1531,  1537,  1548,  1553,  1558,
    1563,  1568,  1573,  1581,  1584,  1589,  1602,  1610,  1621,  1629,
    1629,  1631,  1631,  1633,  1643,  1648,  1655,  1665,  1674,  1679,
    1686,  1696,  1706,  1718,  1718,  1719,  1719,  1721,  1731,  1739,
    1749,  1757,  1765,  1774,  1785,  1789,  1795,  1796,  1797,  1800,
    1800,  1803,  1803,  1806,  1813,  1822,  1836,  1845,  1854,  1858,
    1867,  1876,  1887,  1894,  1904,  1932,  1941,  1953,  1956,  1965,
    1976,  1977,  1978,  1981,  1982,  1983,  1986,  1987,  1990,  1991,
    1994,  1995,  1998,  2009,  2020,  2031,  2057,  2058
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ARBvp_10", "ARBfp_10",
  "ADDRESS", "ALIAS", "ATTRIB", "OPTION", "OUTPUT", "PARAM", "TEMP", "END",
  "BIN_OP", "BINSC_OP", "SAMPLE_OP", "SCALAR_OP", "TRI_OP", "VECTOR_OP",
  "ARL", "KIL", "SWZ", "TXD_OP", "INTEGER", "REAL", "AMBIENT",
  "ATTENUATION", "BACK", "CLIP", "COLOR", "DEPTH", "DIFFUSE", "DIRECTION",
  "EMISSION", "ENV", "EYE", "FOG", "FOGCOORD", "FRAGMENT", "FRONT", "HALF",
  "INVERSE", "INVTRANS", "LIGHT", "LIGHTMODEL", "LIGHTPROD", "LOCAL",
  "MATERIAL", "MAT_PROGRAM", "MATRIX", "MATRIXINDEX", "MODELVIEW", "MVP",
  "NORMAL", "OBJECT", "PALETTE", "PARAMS", "PLANE", "POINT_TOK",
  "POINTSIZE", "POSITION", "PRIMARY", "PROGRAM", "PROJECTION", "RANGE",
  "RESULT", "ROW", "SCENECOLOR", "SECONDARY", "SHININESS", "SIZE_TOK",
  "SPECULAR", "SPOT", "STATE", "TEXCOORD", "TEXENV", "TEXGEN", "TEXGEN_Q",
  "TEXGEN_R", "TEXGEN_S", "TEXGEN_T", "TEXTURE", "TRANSPOSE",
  "TEXTURE_UNIT", "TEX_1D", "TEX_2D", "TEX_3D", "TEX_CUBE", "TEX_RECT",
  "TEX_SHADOW1D", "TEX_SHADOW2D", "TEX_SHADOWRECT", "TEX_ARRAY1D",
  "TEX_ARRAY2D", "TEX_ARRAYSHADOW1D", "TEX_ARRAYSHADOW2D", "VERTEX",
  "VTXATTRIB", "IDENTIFIER", "USED_IDENTIFIER", "MASK4", "MASK3", "MASK2",
  "MASK1", "SWIZZLE", "DOT_DOT", "DOT", "';'", "','", "'['", "']'", "'+'",
  "'-'", "'='", "'{'", "'}'", "$accept", "program", "language",
  "optionSequence", "option", "statementSequence", "statement",
  "instruction", "ALU_instruction", "TexInstruction", "ARL_instruction",
  "VECTORop_instruction", "SCALARop_instruction", "BINSCop_instruction",
  "BINop_instruction", "TRIop_instruction", "SAMPLE_instruction",
  "KIL_instruction", "TXD_instruction", "texImageUnit", "texTarget",
  "SWZ_instruction", "scalarSrcReg", "scalarUse", "swizzleSrcReg",
  "maskedDstReg", "maskedAddrReg", "extendedSwizzle", "extSwizComp",
  "extSwizSel", "srcReg", "dstReg", "progParamArray", "progParamArrayMem",
  "progParamArrayAbs", "progParamArrayRel", "addrRegRelOffset",
  "addrRegPosOffset", "addrRegNegOffset", "addrReg", "addrComponent",
  "addrWriteMask", "scalarSuffix", "swizzleSuffix", "optionalMask",
  "namingStatement", "ATTRIB_statement", "attribBinding", "vtxAttribItem",
  "vtxAttribNum", "vtxWeightNum", "fragAttribItem", "PARAM_statement",
  "PARAM_singleStmt", "PARAM_multipleStmt", "optArraySize",
  "paramSingleInit", "paramMultipleInit", "paramMultInitList",
  "paramSingleItemDecl", "paramSingleItemUse", "paramMultipleItem",
  "stateMultipleItem", "stateSingleItem", "stateMaterialItem",
  "stateMatProperty", "stateLightItem", "stateLightProperty",
  "stateSpotProperty", "stateLightModelItem", "stateLModProperty",
  "stateLightProdItem", "stateLProdProperty", "stateTexEnvItem",
  "stateTexEnvProperty", "ambDiffSpecProperty", "stateLightNumber",
  "stateTexGenItem", "stateTexGenType", "stateTexGenCoord", "stateFogItem",
  "stateFogProperty", "stateClipPlaneItem", "stateClipPlaneNum",
  "statePointItem", "statePointProperty", "stateMatrixRow",
  "stateMatrixRows", "optMatrixRows", "stateMatrixItem",
  "stateOptMatModifier", "stateMatModifier", "stateMatrixRowNum",
  "stateMatrixName", "stateOptModMatNum", "stateModMatNum",
  "statePaletteMatNum", "stateProgramMatNum", "stateDepthItem",
  "programSingleItem", "programMultipleItem", "progEnvParams",
  "progEnvParamNums", "progEnvParam", "progLocalParams",
  "progLocalParamNums", "progLocalParam", "progEnvParamNum",
  "progLocalParamNum", "paramConstDecl", "paramConstUse",
  "paramConstScalarDecl", "paramConstScalarUse", "paramConstVector",
  "signedFloatConstant", "optionalSign", "TEMP_statement", "@1",
  "ADDRESS_statement", "@2", "varNameList", "OUTPUT_statement",
  "resultBinding", "resultColBinding", "optResultFaceType",
  "optResultColorType", "optFaceType", "optColorType",
  "optTexCoordUnitNum", "optTexImageUnitNum", "optLegacyTexUnitNum",
  "texCoordUnitNum", "texImageUnitNum", "legacyTexUnitNum",
  "ALIAS_statement", "string", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,    59,    44,    91,
      93,    43,    45,    61,   123,   125
};
#endif

#define YYPACT_NINF (-383)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-63)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     117,  -383,  -383,    30,  -383,  -383,    25,    78,  -383,   177,
    -383,  -383,   -36,  -383,   -21,   -19,    -1,     1,  -383,  -383,
     -33,   -33,   -33,   -33,   -33,   -33,   -17,   106,   -33,   -33,
    -383,    52,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,    54,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,    14,    51,    58,    65,    44,    14,
      86,  -383,    72,    67,  -383,    77,   119,   120,   123,   124,
    -383,   125,   131,  -383,  -383,  -383,   -16,   127,   128,  -383,
    -383,  -383,   134,   145,   -15,   178,   115,   -26,  -383,   134,
     -14,  -383,  -383,  -383,  -383,   136,  -383,   106,  -383,  -383,
    -383,  -383,  -383,   106,   106,   106,   106,   106,   106,  -383,
    -383,  -383,  -383,    31,    80,    64,   -10,   137,   106,    32,
     138,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
     -16,   106,   150,  -383,  -383,  -383,  -383,   139,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,   202,  -383,  -383,   227,    49,
     228,  -383,   146,   147,   -16,   148,  -383,   149,  -383,  -383,
      73,  -383,  -383,   136,  -383,   143,   151,   152,   189,     5,
     153,    28,   154,    92,   100,     2,   155,   136,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   192,  -383,
      73,  -383,   157,  -383,  -383,   136,   158,  -383,    35,  -383,
    -383,  -383,  -383,    -3,   160,   163,  -383,   159,  -383,  -383,
     164,  -383,  -383,  -383,  -383,   165,   106,   106,  -383,   156,
     190,   106,  -383,  -383,  -383,  -383,   253,   254,   255,  -383,
    -383,  -383,  -383,   256,  -383,  -383,  -383,  -383,   213,   256,
       4,   172,   173,  -383,   174,  -383,   136,     7,  -383,  -383,
    -383,   261,   257,    16,   176,  -383,   264,  -383,   265,   106,
    -383,  -383,   179,  -383,  -383,   187,   106,   106,   180,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,   182,   184,   185,  -383,
     186,  -383,   188,  -383,   194,  -383,   195,  -383,   196,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,   272,   274,  -383,   276,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,   197,  -383,  -383,
    -383,  -383,   144,   277,  -383,   198,  -383,   199,    39,  -383,
    -383,   118,  -383,   193,     3,   203,    -8,   279,  -383,   116,
     106,  -383,  -383,   258,   102,    92,  -383,   200,  -383,   204,
    -383,   206,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   207,
    -383,  -383,   106,  -383,   289,   290,  -383,   106,  -383,  -383,
    -383,   106,    91,    64,    41,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,   208,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,   287,  -383,  -383,    13,  -383,  -383,  -383,  -383,
      50,  -383,  -383,  -383,  -383,   212,   214,   218,   219,  -383,
     263,    -8,  -383,  -383,  -383,  -383,  -383,  -383,   106,  -383,
     106,   190,   253,   254,   221,  -383,  -383,   217,   215,   226,
     211,   230,   229,   231,   277,  -383,   106,   116,  -383,   253,
    -383,   254,   -47,  -383,  -383,  -383,  -383,   277,   232,  -383
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     3,     4,     0,     6,     1,     9,     0,     5,     0,
     266,   267,     0,   231,     0,     0,     0,     0,   229,     2,
       0,     0,     0,     0,     0,     0,     0,   228,     0,     0,
       8,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      21,    22,    23,    20,     0,    85,    86,   107,   108,    87,
      88,    89,    90,     7,     0,     0,     0,     0,     0,     0,
       0,    61,     0,    84,    60,     0,     0,     0,     0,     0,
      72,     0,     0,   226,   227,    31,     0,     0,     0,    10,
      11,   234,   232,     0,     0,     0,   111,   228,   109,   230,
     243,   241,   237,   239,   236,   256,   238,   228,    80,    81,
      82,    83,    50,   228,   228,   228,   228,   228,   228,    74,
      51,   219,   218,     0,     0,     0,     0,    56,   228,    79,
       0,    57,    59,   120,   121,   199,   200,   122,   215,   216,
       0,   228,     0,   265,    91,   235,   112,     0,   113,   117,
     118,   119,   213,   214,   217,     0,   246,   245,     0,   247,
       0,   240,     0,     0,     0,     0,    26,     0,    25,    24,
     253,   105,   103,   256,    93,     0,     0,     0,     0,     0,
       0,   250,     0,   250,     0,     0,   260,   256,   128,   129,
     130,   131,   133,   132,   134,   135,   136,   137,     0,   138,
     253,    97,     0,    95,    94,   256,     0,    92,     0,    77,
      76,    78,    49,     0,     0,     0,   233,     0,   225,   224,
       0,   248,   249,   242,   262,     0,   228,   228,    47,     0,
       0,   228,   254,   255,   104,   106,     0,     0,     0,   198,
     169,   170,   168,     0,   151,   252,   251,   150,     0,     0,
       0,     0,   193,   189,     0,   188,   256,   181,   175,   174,
     173,     0,     0,     0,     0,    96,     0,    98,     0,   228,
     220,    65,     0,    63,    64,     0,   228,   228,     0,   110,
     244,   257,    28,    27,    75,    48,   258,     0,     0,   211,
       0,   212,     0,   172,     0,   160,     0,   152,     0,   157,
     158,   141,   142,   159,   139,   140,     0,     0,   187,     0,
     190,   183,   185,   184,   180,   182,   264,     0,   156,   155,
     162,   163,     0,     0,   102,     0,   101,     0,     0,    58,
      73,    67,    46,     0,     0,     0,   228,     0,    33,     0,
     228,   206,   210,     0,     0,   250,   197,     0,   195,     0,
     196,     0,   261,   167,   166,   164,   165,   161,   186,     0,
      99,   100,   228,   221,     0,     0,    66,   228,    54,    53,
      55,   228,     0,     0,     0,   115,   123,   126,   124,   201,
     202,   125,   263,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    30,    29,   171,   146,
     148,   145,     0,   143,   144,     0,   192,   194,   191,   176,
       0,    70,    68,    71,    69,     0,     0,     0,     0,   127,
     178,   228,   114,   259,   149,   147,   153,   154,   228,   222,
     228,     0,     0,     0,     0,   177,   116,     0,     0,     0,
       0,   204,     0,   208,     0,   223,   228,     0,   203,     0,
     207,     0,     0,    52,    32,   205,   209,     0,     0,   179
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   -84,
     -97,  -383,   -99,  -383,   -92,   191,  -383,  -383,  -346,  -383,
     -78,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   135,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,   259,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,   -70,  -383,   -86,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -317,   105,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   -18,
    -383,  -383,  -378,  -383,  -383,  -383,  -383,  -383,  -383,   260,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -377,  -382,   266,
    -383,  -383,  -383,   -85,  -115,   -87,  -383,  -383,  -383,  -383,
     291,  -383,   267,  -383,  -383,  -383,  -169,   161,  -153,  -383,
    -383,  -383,  -383,  -383,  -383,    22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     6,     8,     9,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,   277,
     386,    43,   153,   218,    75,    62,    71,   322,   323,   359,
     119,    63,   120,   262,   263,   264,   356,   402,   404,    72,
     321,   110,   275,   202,   102,    44,    45,   121,   197,   317,
     315,   164,    46,    47,    48,   137,    88,   269,   364,   138,
     122,   365,   366,   123,   178,   294,   179,   393,   415,   180,
     237,   181,   416,   182,   309,   295,   286,   183,   312,   347,
     184,   232,   185,   284,   186,   250,   187,   409,   425,   188,
     304,   305,   349,   247,   298,   339,   341,   337,   189,   124,
     368,   369,   430,   125,   370,   432,   126,   280,   282,   371,
     127,   142,   128,   129,   144,    76,    49,    59,    50,    54,
      82,    51,    64,    96,   149,   213,   238,   224,   151,   328,
     252,   215,   373,   307,    52,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     145,   139,   143,   198,   240,   152,   156,   111,   112,   159,
     225,   405,   155,   146,   157,   158,   154,   394,   154,   190,
     261,   154,   113,   113,   253,   147,   358,   191,   248,   289,
       5,   145,    60,     7,   230,   290,   114,   291,   289,   205,
     192,   433,   257,   193,   290,   431,   114,   115,   301,   302,
     194,   310,   204,   234,   362,   235,   442,   115,   447,   446,
     160,   231,   445,   399,   195,   363,    61,   236,   161,   448,
     311,    53,   249,   292,   428,   293,   219,    55,   417,    56,
     116,   116,    70,   117,   293,    73,    74,   196,   118,   303,
     443,   162,   167,   300,   168,   148,    70,    57,   118,    58,
     169,    10,    11,    73,    74,   163,   118,   170,   171,   172,
     211,   173,    81,   174,   165,    90,    91,   212,   273,   235,
       1,     2,   175,    92,   272,   407,   166,   289,   389,   278,
     154,   236,   199,   290,   222,   200,   201,   408,   136,   176,
     177,   223,   390,   259,   318,    93,    94,   352,   241,   411,
     260,   242,   243,    86,   353,   244,   412,    87,   418,    79,
      95,    80,   391,   245,    83,   419,   395,    98,    99,   100,
     101,    84,   145,   293,   392,   325,    10,    11,    85,   324,
      97,   246,    13,    14,    15,   103,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,    65,    66,    67,    68,    69,    73,    74,    77,
      78,   343,   344,   345,   346,   208,   209,   104,   105,   354,
     355,   106,   107,   108,   109,   130,   131,   400,   387,   145,
     367,   143,   132,    60,   133,   150,   -62,   203,   206,   207,
     210,   214,   226,   229,   216,   217,   220,   221,   254,   274,
     227,   228,   233,   239,   251,   145,   256,   258,   266,   406,
     324,   267,   268,   276,   270,   271,   279,   281,   283,   285,
     287,   296,   297,   299,   306,   313,   308,   314,   316,   319,
     320,   327,   329,   330,   326,   336,   331,   338,   332,   340,
     348,   357,   372,   427,   333,   334,   335,   342,   350,   351,
     396,   361,   401,   403,   397,   388,   398,   399,   413,   414,
     420,   438,   421,   436,   145,   367,   143,   422,   423,   424,
     434,   145,   435,   324,   437,   439,   441,   429,   265,   440,
     444,   426,   449,   134,   288,   410,   360,   140,     0,   324,
      89,   255,   135,   141
};

static const yytype_int16 yycheck[] =
{
      87,    87,    87,   118,   173,    97,   105,    23,    24,   108,
     163,   357,   104,    27,   106,   107,   103,   334,   105,    29,
      23,   108,    38,    38,   177,    39,    23,    37,    26,    25,
       0,   118,    65,     8,    29,    31,    62,    33,    25,   131,
      50,   423,   195,    53,    31,   422,    62,    73,    41,    42,
      60,    35,   130,    25,    62,    27,   434,    73,   105,   441,
      29,    56,   439,   110,    74,    73,    99,    39,    37,   447,
      54,   107,    70,    69,   420,    71,   154,    98,   395,    98,
      96,    96,    99,    99,    71,   111,   112,    97,   114,    82,
     436,    60,    28,   246,    30,   109,    99,    98,   114,    98,
      36,    98,    99,   111,   112,    74,   114,    43,    44,    45,
      61,    47,    98,    49,    34,    29,    30,    68,   217,    27,
       3,     4,    58,    37,   216,    34,    46,    25,    26,   221,
     217,    39,   100,    31,    61,   103,   104,    46,    23,    75,
      76,    68,    40,   108,   259,    59,    60,   108,    48,   108,
     115,    51,    52,   109,   115,    55,   115,   113,   108,   107,
      74,   107,    60,    63,   113,   115,   335,   100,   101,   102,
     103,   113,   259,    71,    72,   267,    98,    99,   113,   266,
     108,    81,     5,     6,     7,   108,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    21,    22,    23,    24,    25,   111,   112,    28,
      29,    77,    78,    79,    80,    23,    24,   108,   108,   111,
     112,   108,   108,   108,   103,   108,   108,   352,   330,   326,
     326,   326,   108,    65,    99,   109,   109,   109,    98,   110,
      23,    23,   109,    64,   108,   108,   108,   108,    66,   103,
     109,   109,   109,   109,   109,   352,   109,   109,   108,   361,
     357,   108,   113,    83,   110,   110,    23,    23,    23,    23,
      67,   109,   109,   109,    23,   109,    29,    23,    23,   110,
     103,   109,   108,   108,   114,    23,   110,    23,   110,    23,
      23,   108,    23,   418,   110,   110,   110,   110,   110,   110,
     110,   108,    23,    23,   110,    57,   110,   110,   110,    32,
     108,   110,   108,   108,   411,   411,   411,   109,   109,    66,
     109,   418,   115,   420,   108,   105,   105,   421,   203,   110,
     437,   411,   110,    84,   239,   363,   324,    87,    -1,   436,
      59,   190,    85,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,   117,   118,     0,   119,     8,   120,   121,
      98,    99,   251,     5,     6,     7,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   137,   161,   162,   168,   169,   170,   232,
     234,   237,   250,   107,   235,    98,    98,    98,    98,   233,
      65,    99,   141,   147,   238,   141,   141,   141,   141,   141,
      99,   142,   155,   111,   112,   140,   231,   141,   141,   107,
     107,    98,   236,   113,   113,   113,   109,   113,   172,   236,
      29,    30,    37,    59,    60,    74,   239,   108,   100,   101,
     102,   103,   160,   108,   108,   108,   108,   108,   108,   103,
     157,    23,    24,    38,    62,    73,    96,    99,   114,   146,
     148,   163,   176,   179,   215,   219,   222,   226,   228,   229,
     108,   108,   108,    99,   163,   238,    23,   171,   175,   179,
     215,   225,   227,   229,   230,   231,    27,    39,   109,   240,
     109,   244,   140,   138,   231,   140,   138,   140,   140,   138,
      29,    37,    60,    74,   167,    34,    46,    28,    30,    36,
      43,    44,    45,    47,    49,    58,    75,    76,   180,   182,
     185,   187,   189,   193,   196,   198,   200,   202,   205,   214,
      29,    37,    50,    53,    60,    74,    97,   164,   230,   100,
     103,   104,   159,   109,   146,   140,    98,   110,    23,    24,
      23,    61,    68,   241,    23,   247,   108,   108,   139,   146,
     108,   108,    61,    68,   243,   244,   109,   109,   109,    64,
      29,    56,   197,   109,    25,    27,    39,   186,   242,   109,
     242,    48,    51,    52,    55,    63,    81,   209,    26,    70,
     201,   109,   246,   244,    66,   243,   109,   244,   109,   108,
     115,    23,   149,   150,   151,   155,   108,   108,   113,   173,
     110,   110,   140,   138,   103,   158,    83,   135,   140,    23,
     223,    23,   224,    23,   199,    23,   192,    67,   192,    25,
      31,    33,    69,    71,   181,   191,   109,   109,   210,   109,
     244,    41,    42,    82,   206,   207,    23,   249,    29,   190,
      35,    54,   194,   109,    23,   166,    23,   165,   230,   110,
     103,   156,   143,   144,   231,   140,   114,   109,   245,   108,
     108,   110,   110,   110,   110,   110,    23,   213,    23,   211,
      23,   212,   110,    77,    78,    79,    80,   195,    23,   208,
     110,   110,   108,   115,   111,   112,   152,   108,    23,   145,
     251,   108,    62,    73,   174,   177,   178,   179,   216,   217,
     220,   225,    23,   248,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,   136,   140,    57,    26,
      40,    60,    72,   183,   191,   242,   110,   110,   110,   110,
     230,    23,   153,    23,   154,   144,   140,    34,    46,   203,
     205,   108,   115,   110,    32,   184,   188,   191,   108,   115,
     108,   108,   109,   109,    66,   204,   177,   230,   144,   135,
     218,   223,   221,   224,   109,   115,   108,   108,   110,   105,
     110,   105,   208,   144,   136,   223,   224,   105,   208,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   118,   118,   119,   119,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   145,   146,   146,   146,   146,
     147,   147,   148,   149,   149,   150,   151,   152,   152,   152,
     153,   154,   155,   156,   157,   158,   159,   159,   159,   159,
     160,   160,   160,   160,   160,   161,   161,   161,   161,   161,
     161,   162,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   165,   166,   167,   167,   167,   167,   168,   168,   169,
     170,   171,   171,   172,   173,   174,   174,   175,   175,   175,
     176,   176,   176,   177,   177,   177,   178,   178,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   180,
     181,   181,   181,   182,   183,   183,   183,   183,   183,   184,
     185,   186,   186,   187,   188,   189,   190,   191,   191,   191,
     192,   193,   194,   194,   195,   195,   195,   195,   196,   197,
     197,   198,   199,   200,   201,   201,   202,   203,   204,   204,
     205,   206,   206,   207,   207,   207,   208,   209,   209,   209,
     209,   209,   209,   210,   210,   211,   212,   213,   214,   215,
     215,   216,   216,   217,   218,   218,   219,   220,   221,   221,
     222,   223,   224,   225,   225,   226,   226,   227,   228,   228,
     229,   229,   229,   229,   230,   230,   231,   231,   231,   233,
     232,   235,   234,   236,   236,   237,   238,   238,   238,   238,
     238,   238,   239,   240,   240,   240,   240,   241,   241,   241,
     242,   242,   242,   243,   243,   243,   244,   244,   245,   245,
     246,   246,   247,   248,   249,   250,   251,   251
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     1,     2,     0,     3,     2,     0,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     6,     6,     8,
       8,     2,    12,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     2,     2,     3,
       2,     2,     7,     2,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     4,     2,     2,     1,     1,     2,     1,     2,     4,
       4,     1,     1,     1,     2,     1,     2,     1,     1,     3,
       6,     0,     1,     2,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       1,     1,     1,     5,     1,     1,     1,     2,     1,     1,
       2,     1,     2,     6,     1,     3,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     5,     1,     2,     1,     1,     5,     2,     0,     6,
       3,     0,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     4,     4,     0,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     5,     1,     3,     5,     5,     1,     3,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     7,     9,     2,     2,     1,     1,     0,     0,
       3,     0,     3,     3,     1,     4,     2,     2,     2,     2,
       3,     2,     3,     0,     3,     1,     1,     0,     1,     1,
       0,     1,     1,     0,     1,     1,     0,     3,     0,     3,
       0,     3,     1,     1,     1,     4,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, state, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, state); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct asm_parser_state *state)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (state);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct asm_parser_state *state)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, state);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, struct asm_parser_state *state)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), state);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, state); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct asm_parser_state *state)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (state);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (struct asm_parser_state *state)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, state);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* language: ARBvp_10  */
#line 298 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->prog->Target != GL_VERTEX_PROGRAM_ARB) {
	      yyerror(& (yylsp[0]), state, "invalid fragment program header");

	   }
	   state->mode = ARB_vertex;
	}
#line 2217 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 4: /* language: ARBfp_10  */
#line 306 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->prog->Target != GL_FRAGMENT_PROGRAM_ARB) {
	      yyerror(& (yylsp[0]), state, "invalid vertex program header");
	   }
	   state->mode = ARB_fragment;

	   state->option.TexRect =
	      (state->ctx->Extensions.NV_texture_rectangle != GL_FALSE);
	}
#line 2231 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 7: /* option: OPTION string ';'  */
#line 322 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   int valid = 0;

	   if (state->mode == ARB_vertex) {
	      valid = _mesa_ARBvp_parse_option(state, (yyvsp[-1].string));
	   } else if (state->mode == ARB_fragment) {
	      valid = _mesa_ARBfp_parse_option(state, (yyvsp[-1].string));
	   }


	   free((yyvsp[-1].string));

	   if (!valid) {
	      const char *const err_str = (state->mode == ARB_vertex)
		 ? "invalid ARB vertex program option"
		 : "invalid ARB fragment program option";

	      yyerror(& (yylsp[-1]), state, err_str);
	      YYERROR;
	   }
	}
#line 2257 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 10: /* statement: instruction ';'  */
#line 350 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((yyvsp[-1].inst) != NULL) {
	      if (state->inst_tail == NULL) {
		 state->inst_head = (yyvsp[-1].inst);
	      } else {
		 state->inst_tail->next = (yyvsp[-1].inst);
	      }

	      state->inst_tail = (yyvsp[-1].inst);
	      (yyvsp[-1].inst)->next = NULL;

              state->prog->arb.NumInstructions++;
	   }
	}
#line 2276 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 12: /* instruction: ALU_instruction  */
#line 368 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = (yyvsp[0].inst);
           state->prog->arb.NumAluInstructions++;
	}
#line 2285 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 13: /* instruction: TexInstruction  */
#line 373 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = (yyvsp[0].inst);
           state->prog->arb.NumTexInstructions++;
	}
#line 2294 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 24: /* ARL_instruction: ARL maskedAddrReg ',' scalarSrcReg  */
#line 394 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = asm_instruction_ctor(OPCODE_ARL, & (yyvsp[-2].dst_reg), & (yyvsp[0].src_reg), NULL, NULL);
	}
#line 2302 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 25: /* VECTORop_instruction: VECTOR_OP maskedDstReg ',' swizzleSrcReg  */
#line 400 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = asm_instruction_copy_ctor(& (yyvsp[-3].temp_inst), & (yyvsp[-2].dst_reg), & (yyvsp[0].src_reg), NULL, NULL);
	}
#line 2310 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 26: /* SCALARop_instruction: SCALAR_OP maskedDstReg ',' scalarSrcReg  */
#line 406 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = asm_instruction_copy_ctor(& (yyvsp[-3].temp_inst), & (yyvsp[-2].dst_reg), & (yyvsp[0].src_reg), NULL, NULL);
	}
#line 2318 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 27: /* BINSCop_instruction: BINSC_OP maskedDstReg ',' scalarSrcReg ',' scalarSrcReg  */
#line 412 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = asm_instruction_copy_ctor(& (yyvsp[-5].temp_inst), & (yyvsp[-4].dst_reg), & (yyvsp[-2].src_reg), & (yyvsp[0].src_reg), NULL);
	}
#line 2326 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 28: /* BINop_instruction: BIN_OP maskedDstReg ',' swizzleSrcReg ',' swizzleSrcReg  */
#line 419 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = asm_instruction_copy_ctor(& (yyvsp[-5].temp_inst), & (yyvsp[-4].dst_reg), & (yyvsp[-2].src_reg), & (yyvsp[0].src_reg), NULL);
	}
#line 2334 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 29: /* TRIop_instruction: TRI_OP maskedDstReg ',' swizzleSrcReg ',' swizzleSrcReg ',' swizzleSrcReg  */
#line 426 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = asm_instruction_copy_ctor(& (yyvsp[-7].temp_inst), & (yyvsp[-6].dst_reg), & (yyvsp[-4].src_reg), & (yyvsp[-2].src_reg), & (yyvsp[0].src_reg));
	}
#line 2342 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 30: /* SAMPLE_instruction: SAMPLE_OP maskedDstReg ',' swizzleSrcReg ',' texImageUnit ',' texTarget  */
#line 432 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = asm_instruction_copy_ctor(& (yyvsp[-7].temp_inst), & (yyvsp[-6].dst_reg), & (yyvsp[-4].src_reg), NULL, NULL);
	   if ((yyval.inst) != NULL) {
	      const GLbitfield tex_mask = (1U << (yyvsp[-2].integer));
	      GLbitfield shadow_tex = 0;
	      GLbitfield target_mask = 0;


	      (yyval.inst)->Base.TexSrcUnit = (yyvsp[-2].integer);

	      if ((yyvsp[0].integer) < 0) {
		 shadow_tex = tex_mask;

		 (yyval.inst)->Base.TexSrcTarget = -(yyvsp[0].integer);
		 (yyval.inst)->Base.TexShadow = 1;
	      } else {
		 (yyval.inst)->Base.TexSrcTarget = (yyvsp[0].integer);
	      }

	      target_mask = (1U << (yyval.inst)->Base.TexSrcTarget);

	      /* If this texture unit was previously accessed and that access
	       * had a different texture target, generate an error.
	       *
	       * If this texture unit was previously accessed and that access
	       * had a different shadow mode, generate an error.
	       */
	      if ((state->prog->TexturesUsed[(yyvsp[-2].integer)] != 0)
		  && ((state->prog->TexturesUsed[(yyvsp[-2].integer)] != target_mask)
		      || ((state->prog->ShadowSamplers & tex_mask)
			  != shadow_tex))) {
		 yyerror(& (yylsp[0]), state,
			 "multiple targets used on one texture image unit");
		 YYERROR;
	      }


	      state->prog->TexturesUsed[(yyvsp[-2].integer)] |= target_mask;
	      state->prog->ShadowSamplers |= shadow_tex;
	   }
	}
#line 2388 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 31: /* KIL_instruction: KIL swizzleSrcReg  */
#line 476 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = asm_instruction_ctor(OPCODE_KIL, NULL, & (yyvsp[0].src_reg), NULL, NULL);
	   state->fragment.UsesKill = 1;
	}
#line 2397 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 32: /* TXD_instruction: TXD_OP maskedDstReg ',' swizzleSrcReg ',' swizzleSrcReg ',' swizzleSrcReg ',' texImageUnit ',' texTarget  */
#line 483 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.inst) = asm_instruction_copy_ctor(& (yyvsp[-11].temp_inst), & (yyvsp[-10].dst_reg), & (yyvsp[-8].src_reg), & (yyvsp[-6].src_reg), & (yyvsp[-4].src_reg));
	   if ((yyval.inst) != NULL) {
	      const GLbitfield tex_mask = (1U << (yyvsp[-2].integer));
	      GLbitfield shadow_tex = 0;
	      GLbitfield target_mask = 0;


	      (yyval.inst)->Base.TexSrcUnit = (yyvsp[-2].integer);

	      if ((yyvsp[0].integer) < 0) {
		 shadow_tex = tex_mask;

		 (yyval.inst)->Base.TexSrcTarget = -(yyvsp[0].integer);
		 (yyval.inst)->Base.TexShadow = 1;
	      } else {
		 (yyval.inst)->Base.TexSrcTarget = (yyvsp[0].integer);
	      }

	      target_mask = (1U << (yyval.inst)->Base.TexSrcTarget);

	      /* If this texture unit was previously accessed and that access
	       * had a different texture target, generate an error.
	       *
	       * If this texture unit was previously accessed and that access
	       * had a different shadow mode, generate an error.
	       */
	      if ((state->prog->TexturesUsed[(yyvsp[-2].integer)] != 0)
		  && ((state->prog->TexturesUsed[(yyvsp[-2].integer)] != target_mask)
		      || ((state->prog->ShadowSamplers & tex_mask)
			  != shadow_tex))) {
		 yyerror(& (yylsp[0]), state,
			 "multiple targets used on one texture image unit");
		 YYERROR;
	      }


	      state->prog->TexturesUsed[(yyvsp[-2].integer)] |= target_mask;
	      state->prog->ShadowSamplers |= shadow_tex;
	   }
	}
#line 2443 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 33: /* texImageUnit: TEXTURE_UNIT optTexImageUnitNum  */
#line 527 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 2451 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 34: /* texTarget: TEX_1D  */
#line 532 "src/lib/mesa/src/mesa/program/program_parse.y"
                   { (yyval.integer) = TEXTURE_1D_INDEX; }
#line 2457 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 35: /* texTarget: TEX_2D  */
#line 533 "src/lib/mesa/src/mesa/program/program_parse.y"
                   { (yyval.integer) = TEXTURE_2D_INDEX; }
#line 2463 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 36: /* texTarget: TEX_3D  */
#line 534 "src/lib/mesa/src/mesa/program/program_parse.y"
                   { (yyval.integer) = TEXTURE_3D_INDEX; }
#line 2469 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 37: /* texTarget: TEX_CUBE  */
#line 535 "src/lib/mesa/src/mesa/program/program_parse.y"
                   { (yyval.integer) = TEXTURE_CUBE_INDEX; }
#line 2475 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 38: /* texTarget: TEX_RECT  */
#line 536 "src/lib/mesa/src/mesa/program/program_parse.y"
                   { (yyval.integer) = TEXTURE_RECT_INDEX; }
#line 2481 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 39: /* texTarget: TEX_SHADOW1D  */
#line 537 "src/lib/mesa/src/mesa/program/program_parse.y"
                         { (yyval.integer) = -TEXTURE_1D_INDEX; }
#line 2487 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 40: /* texTarget: TEX_SHADOW2D  */
#line 538 "src/lib/mesa/src/mesa/program/program_parse.y"
                         { (yyval.integer) = -TEXTURE_2D_INDEX; }
#line 2493 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 41: /* texTarget: TEX_SHADOWRECT  */
#line 539 "src/lib/mesa/src/mesa/program/program_parse.y"
                         { (yyval.integer) = -TEXTURE_RECT_INDEX; }
#line 2499 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 42: /* texTarget: TEX_ARRAY1D  */
#line 540 "src/lib/mesa/src/mesa/program/program_parse.y"
                              { (yyval.integer) = TEXTURE_1D_ARRAY_INDEX; }
#line 2505 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 43: /* texTarget: TEX_ARRAY2D  */
#line 541 "src/lib/mesa/src/mesa/program/program_parse.y"
                              { (yyval.integer) = TEXTURE_2D_ARRAY_INDEX; }
#line 2511 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 44: /* texTarget: TEX_ARRAYSHADOW1D  */
#line 542 "src/lib/mesa/src/mesa/program/program_parse.y"
                              { (yyval.integer) = -TEXTURE_1D_ARRAY_INDEX; }
#line 2517 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 45: /* texTarget: TEX_ARRAYSHADOW2D  */
#line 543 "src/lib/mesa/src/mesa/program/program_parse.y"
                              { (yyval.integer) = -TEXTURE_2D_ARRAY_INDEX; }
#line 2523 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 46: /* SWZ_instruction: SWZ maskedDstReg ',' srcReg ',' extendedSwizzle  */
#line 547 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   /* FIXME: Is this correct?  Should the extenedSwizzle be applied
	    * FIXME: to the existing swizzle?
	    */
	   (yyvsp[-2].src_reg).Base.Swizzle = (yyvsp[0].swiz_mask).swizzle;
	   (yyvsp[-2].src_reg).Base.Negate = (yyvsp[0].swiz_mask).mask;

	   (yyval.inst) = asm_instruction_copy_ctor(& (yyvsp[-5].temp_inst), & (yyvsp[-4].dst_reg), & (yyvsp[-2].src_reg), NULL, NULL);
	}
#line 2537 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 47: /* scalarSrcReg: optionalSign scalarUse  */
#line 559 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.src_reg) = (yyvsp[0].src_reg);

	   if ((yyvsp[-1].negate)) {
	      (yyval.src_reg).Base.Negate = ~(yyval.src_reg).Base.Negate;
	   }
	}
#line 2549 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 48: /* scalarUse: srcReg scalarSuffix  */
#line 569 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.src_reg) = (yyvsp[-1].src_reg);

	   (yyval.src_reg).Base.Swizzle = _mesa_combine_swizzles((yyval.src_reg).Base.Swizzle,
						    (yyvsp[0].swiz_mask).swizzle);
	}
#line 2560 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 49: /* swizzleSrcReg: optionalSign srcReg swizzleSuffix  */
#line 578 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.src_reg) = (yyvsp[-1].src_reg);

	   if ((yyvsp[-2].negate)) {
	      (yyval.src_reg).Base.Negate = ~(yyval.src_reg).Base.Negate;
	   }

	   (yyval.src_reg).Base.Swizzle = _mesa_combine_swizzles((yyval.src_reg).Base.Swizzle,
						    (yyvsp[0].swiz_mask).swizzle);
	}
#line 2575 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 50: /* maskedDstReg: dstReg optionalMask  */
#line 591 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.dst_reg) = (yyvsp[-1].dst_reg);
	   (yyval.dst_reg).WriteMask = (yyvsp[0].swiz_mask).mask;

	   if ((yyval.dst_reg).File == PROGRAM_OUTPUT) {
	      /* Technically speaking, this should check that it is in
	       * vertex program mode.  However, PositionInvariant can never be
	       * set in fragment program mode, so it is somewhat irrelevant.
	       */
	      if (state->option.PositionInvariant
	       && ((yyval.dst_reg).Index == VARYING_SLOT_POS)) {
		 yyerror(& (yylsp[-1]), state, "position-invariant programs cannot "
			 "write position");
		 YYERROR;
	      }

              state->prog->info.outputs_written |= BITFIELD64_BIT((yyval.dst_reg).Index);
	   }
	}
#line 2599 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 51: /* maskedAddrReg: addrReg addrWriteMask  */
#line 613 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   set_dst_reg(& (yyval.dst_reg), PROGRAM_ADDRESS, 0);
	   (yyval.dst_reg).WriteMask = (yyvsp[0].swiz_mask).mask;
	}
#line 2608 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 52: /* extendedSwizzle: extSwizComp ',' extSwizComp ',' extSwizComp ',' extSwizComp  */
#line 620 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   const unsigned xyzw_valid =
	      ((yyvsp[-6].ext_swizzle).xyzw_valid << 0)
	      | ((yyvsp[-4].ext_swizzle).xyzw_valid << 1)
	      | ((yyvsp[-2].ext_swizzle).xyzw_valid << 2)
	      | ((yyvsp[0].ext_swizzle).xyzw_valid << 3);
	   const unsigned rgba_valid =
	      ((yyvsp[-6].ext_swizzle).rgba_valid << 0)
	      | ((yyvsp[-4].ext_swizzle).rgba_valid << 1)
	      | ((yyvsp[-2].ext_swizzle).rgba_valid << 2)
	      | ((yyvsp[0].ext_swizzle).rgba_valid << 3);

	   /* All of the swizzle components have to be valid in either RGBA
	    * or XYZW.  Note that 0 and 1 are valid in both, so both masks
	    * can have some bits set.
	    *
	    * We somewhat deviate from the spec here.  It would be really hard
	    * to figure out which component is the error, and there probably
	    * isn't a lot of benefit.
	    */
	   if ((rgba_valid != 0x0f) && (xyzw_valid != 0x0f)) {
	      yyerror(& (yylsp[-6]), state, "cannot combine RGBA and XYZW swizzle "
		      "components");
	      YYERROR;
	   }

	   (yyval.swiz_mask).swizzle = MAKE_SWIZZLE4((yyvsp[-6].ext_swizzle).swz, (yyvsp[-4].ext_swizzle).swz, (yyvsp[-2].ext_swizzle).swz, (yyvsp[0].ext_swizzle).swz);
	   (yyval.swiz_mask).mask = ((yyvsp[-6].ext_swizzle).negate) | ((yyvsp[-4].ext_swizzle).negate << 1) | ((yyvsp[-2].ext_swizzle).negate << 2)
	      | ((yyvsp[0].ext_swizzle).negate << 3);
	}
#line 2643 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 53: /* extSwizComp: optionalSign extSwizSel  */
#line 653 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.ext_swizzle) = (yyvsp[0].ext_swizzle);
	   (yyval.ext_swizzle).negate = ((yyvsp[-1].negate)) ? 1 : 0;
	}
#line 2652 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 54: /* extSwizSel: INTEGER  */
#line 660 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (((yyvsp[0].integer) != 0) && ((yyvsp[0].integer) != 1)) {
	      yyerror(& (yylsp[0]), state, "invalid extended swizzle selector");
	      YYERROR;
	   }

	   (yyval.ext_swizzle).swz = ((yyvsp[0].integer) == 0) ? SWIZZLE_ZERO : SWIZZLE_ONE;
           (yyval.ext_swizzle).negate = 0;

	   /* 0 and 1 are valid for both RGBA swizzle names and XYZW
	    * swizzle names.
	    */
	   (yyval.ext_swizzle).xyzw_valid = 1;
	   (yyval.ext_swizzle).rgba_valid = 1;
	}
#line 2672 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 55: /* extSwizSel: string  */
#line 676 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   char s;

	   if (strlen((yyvsp[0].string)) > 1) {
	      yyerror(& (yylsp[0]), state, "invalid extended swizzle selector");
	      YYERROR;
	   }

	   s = (yyvsp[0].string)[0];
	   free((yyvsp[0].string));

           (yyval.ext_swizzle).rgba_valid = 0;
           (yyval.ext_swizzle).xyzw_valid = 0;
           (yyval.ext_swizzle).negate = 0;

	   switch (s) {
	   case 'x':
	      (yyval.ext_swizzle).swz = SWIZZLE_X;
	      (yyval.ext_swizzle).xyzw_valid = 1;
	      break;
	   case 'y':
	      (yyval.ext_swizzle).swz = SWIZZLE_Y;
	      (yyval.ext_swizzle).xyzw_valid = 1;
	      break;
	   case 'z':
	      (yyval.ext_swizzle).swz = SWIZZLE_Z;
	      (yyval.ext_swizzle).xyzw_valid = 1;
	      break;
	   case 'w':
	      (yyval.ext_swizzle).swz = SWIZZLE_W;
	      (yyval.ext_swizzle).xyzw_valid = 1;
	      break;

	   case 'r':
	      (yyval.ext_swizzle).swz = SWIZZLE_X;
	      (yyval.ext_swizzle).rgba_valid = 1;
	      break;
	   case 'g':
	      (yyval.ext_swizzle).swz = SWIZZLE_Y;
	      (yyval.ext_swizzle).rgba_valid = 1;
	      break;
	   case 'b':
	      (yyval.ext_swizzle).swz = SWIZZLE_Z;
	      (yyval.ext_swizzle).rgba_valid = 1;
	      break;
	   case 'a':
	      (yyval.ext_swizzle).swz = SWIZZLE_W;
	      (yyval.ext_swizzle).rgba_valid = 1;
	      break;

	   default:
	      yyerror(& (yylsp[0]), state, "invalid extended swizzle selector");
	      YYERROR;
	      break;
	   }
	}
#line 2733 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 56: /* srcReg: USED_IDENTIFIER  */
#line 735 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   struct asm_symbol *const s = (struct asm_symbol *)
              _mesa_symbol_table_find_symbol(state->st, (yyvsp[0].string));

	   free((yyvsp[0].string));

	   if (s == NULL) {
	      yyerror(& (yylsp[0]), state, "invalid operand variable");
	      YYERROR;
	   } else if ((s->type != at_param) && (s->type != at_temp)
		      && (s->type != at_attrib)) {
	      yyerror(& (yylsp[0]), state, "invalid operand variable");
	      YYERROR;
	   } else if ((s->type == at_param) && s->param_is_array) {
	      yyerror(& (yylsp[0]), state, "non-array access to array PARAM");
	      YYERROR;
	   }

	   init_src_reg(& (yyval.src_reg));
	   switch (s->type) {
	   case at_temp:
	      set_src_reg(& (yyval.src_reg), PROGRAM_TEMPORARY, s->temp_binding);
	      break;
	   case at_param:
              set_src_reg_swz(& (yyval.src_reg), s->param_binding_type,
                              s->param_binding_begin,
                              s->param_binding_swizzle);
	      break;
	   case at_attrib:
	      set_src_reg(& (yyval.src_reg), PROGRAM_INPUT, s->attrib_binding);
              state->prog->info.inputs_read |= BITFIELD64_BIT((yyval.src_reg).Base.Index);

	      if (!validate_inputs(& (yylsp[0]), state)) {
		 YYERROR;
	      }
	      break;

	   default:
	      YYERROR;
	      break;
	   }
	}
#line 2780 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 57: /* srcReg: attribBinding  */
#line 778 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   set_src_reg(& (yyval.src_reg), PROGRAM_INPUT, (yyvsp[0].attrib));
           state->prog->info.inputs_read |= BITFIELD64_BIT((yyval.src_reg).Base.Index);

	   if (!validate_inputs(& (yylsp[0]), state)) {
	      YYERROR;
	   }
	}
#line 2793 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 58: /* srcReg: progParamArray '[' progParamArrayMem ']'  */
#line 787 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (! (yyvsp[-1].src_reg).Base.RelAddr
	       && ((unsigned) (yyvsp[-1].src_reg).Base.Index >= (yyvsp[-3].sym)->param_binding_length)) {
	      yyerror(& (yylsp[-1]), state, "out of bounds array access");
	      YYERROR;
	   }

	   init_src_reg(& (yyval.src_reg));
	   (yyval.src_reg).Base.File = (yyvsp[-3].sym)->param_binding_type;

	   if ((yyvsp[-1].src_reg).Base.RelAddr) {
              state->prog->arb.IndirectRegisterFiles |= (1 << (yyval.src_reg).Base.File);
	      (yyvsp[-3].sym)->param_accessed_indirectly = 1;

	      (yyval.src_reg).Base.RelAddr = 1;
	      (yyval.src_reg).Base.Index = (yyvsp[-1].src_reg).Base.Index;
	      (yyval.src_reg).Symbol = (yyvsp[-3].sym);
	   } else {
	      (yyval.src_reg).Base.Index = (yyvsp[-3].sym)->param_binding_begin + (yyvsp[-1].src_reg).Base.Index;
	   }
	}
#line 2819 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 59: /* srcReg: paramSingleItemUse  */
#line 809 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
           gl_register_file file = ((yyvsp[0].temp_sym).name != NULL)
	      ? (yyvsp[0].temp_sym).param_binding_type
	      : PROGRAM_CONSTANT;
           set_src_reg_swz(& (yyval.src_reg), file, (yyvsp[0].temp_sym).param_binding_begin,
                           (yyvsp[0].temp_sym).param_binding_swizzle);
	}
#line 2831 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 60: /* dstReg: resultBinding  */
#line 819 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   set_dst_reg(& (yyval.dst_reg), PROGRAM_OUTPUT, (yyvsp[0].result));
	}
#line 2839 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 61: /* dstReg: USED_IDENTIFIER  */
#line 823 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   struct asm_symbol *const s = (struct asm_symbol *)
              _mesa_symbol_table_find_symbol(state->st, (yyvsp[0].string));

	   free((yyvsp[0].string));

	   if (s == NULL) {
	      yyerror(& (yylsp[0]), state, "invalid operand variable");
	      YYERROR;
	   } else if ((s->type != at_output) && (s->type != at_temp)) {
	      yyerror(& (yylsp[0]), state, "invalid operand variable");
	      YYERROR;
	   }

	   switch (s->type) {
	   case at_temp:
	      set_dst_reg(& (yyval.dst_reg), PROGRAM_TEMPORARY, s->temp_binding);
	      break;
	   case at_output:
	      set_dst_reg(& (yyval.dst_reg), PROGRAM_OUTPUT, s->output_binding);
	      break;
	   default:
	      set_dst_reg(& (yyval.dst_reg), s->param_binding_type, s->param_binding_begin);
	      break;
	   }
	}
#line 2870 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 62: /* progParamArray: USED_IDENTIFIER  */
#line 852 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   struct asm_symbol *const s = (struct asm_symbol *)
              _mesa_symbol_table_find_symbol(state->st, (yyvsp[0].string));

	   free((yyvsp[0].string));

	   if (s == NULL) {
	      yyerror(& (yylsp[0]), state, "invalid operand variable");
	      YYERROR;
	   } else if ((s->type != at_param) || !s->param_is_array) {
	      yyerror(& (yylsp[0]), state, "array access to non-PARAM variable");
	      YYERROR;
	   } else {
	      (yyval.sym) = s;
	   }
	}
#line 2891 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 65: /* progParamArrayAbs: INTEGER  */
#line 873 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   init_src_reg(& (yyval.src_reg));
	   (yyval.src_reg).Base.Index = (yyvsp[0].integer);
	}
#line 2900 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 66: /* progParamArrayRel: addrReg addrComponent addrRegRelOffset  */
#line 880 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   /* FINISHME: Add support for multiple address registers.
	    */
	   /* FINISHME: Add support for 4-component address registers.
	    */
	   init_src_reg(& (yyval.src_reg));
	   (yyval.src_reg).Base.RelAddr = 1;
	   (yyval.src_reg).Base.Index = (yyvsp[0].integer);
	}
#line 2914 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 67: /* addrRegRelOffset: %empty  */
#line 891 "src/lib/mesa/src/mesa/program/program_parse.y"
                               { (yyval.integer) = 0; }
#line 2920 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 68: /* addrRegRelOffset: '+' addrRegPosOffset  */
#line 892 "src/lib/mesa/src/mesa/program/program_parse.y"
                               { (yyval.integer) = (yyvsp[0].integer); }
#line 2926 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 69: /* addrRegRelOffset: '-' addrRegNegOffset  */
#line 893 "src/lib/mesa/src/mesa/program/program_parse.y"
                               { (yyval.integer) = -(yyvsp[0].integer); }
#line 2932 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 70: /* addrRegPosOffset: INTEGER  */
#line 897 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (((yyvsp[0].integer) < 0) || ((yyvsp[0].integer) > (state->limits->MaxAddressOffset - 1))) {
              char s[100];
              snprintf(s, sizeof(s),
                             "relative address offset too large (%d)", (yyvsp[0].integer));
	      yyerror(& (yylsp[0]), state, s);
	      YYERROR;
	   } else {
	      (yyval.integer) = (yyvsp[0].integer);
	   }
	}
#line 2948 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 71: /* addrRegNegOffset: INTEGER  */
#line 911 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (((yyvsp[0].integer) < 0) || ((yyvsp[0].integer) > state->limits->MaxAddressOffset)) {
              char s[100];
              snprintf(s, sizeof(s),
                             "relative address offset too large (%d)", (yyvsp[0].integer));
	      yyerror(& (yylsp[0]), state, s);
	      YYERROR;
	   } else {
	      (yyval.integer) = (yyvsp[0].integer);
	   }
	}
#line 2964 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 72: /* addrReg: USED_IDENTIFIER  */
#line 925 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   struct asm_symbol *const s = (struct asm_symbol *)
              _mesa_symbol_table_find_symbol(state->st, (yyvsp[0].string));

	   free((yyvsp[0].string));

	   if (s == NULL) {
	      yyerror(& (yylsp[0]), state, "invalid array member");
	      YYERROR;
	   } else if (s->type != at_address) {
	      yyerror(& (yylsp[0]), state,
		      "invalid variable for indexed array access");
	      YYERROR;
	   } else {
	      (yyval.sym) = s;
	   }
	}
#line 2986 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 73: /* addrComponent: MASK1  */
#line 945 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((yyvsp[0].swiz_mask).mask != WRITEMASK_X) {
	      yyerror(& (yylsp[0]), state, "invalid address component selector");
	      YYERROR;
	   } else {
	      (yyval.swiz_mask) = (yyvsp[0].swiz_mask);
	   }
	}
#line 2999 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 74: /* addrWriteMask: MASK1  */
#line 956 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((yyvsp[0].swiz_mask).mask != WRITEMASK_X) {
	      yyerror(& (yylsp[0]), state,
		      "address register write mask must be \".x\"");
	      YYERROR;
	   } else {
	      (yyval.swiz_mask) = (yyvsp[0].swiz_mask);
	   }
	}
#line 3013 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 79: /* swizzleSuffix: %empty  */
#line 972 "src/lib/mesa/src/mesa/program/program_parse.y"
                       { (yyval.swiz_mask).swizzle = SWIZZLE_NOOP; (yyval.swiz_mask).mask = WRITEMASK_XYZW; }
#line 3019 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 84: /* optionalMask: %empty  */
#line 976 "src/lib/mesa/src/mesa/program/program_parse.y"
                       { (yyval.swiz_mask).swizzle = SWIZZLE_NOOP; (yyval.swiz_mask).mask = WRITEMASK_XYZW; }
#line 3025 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 91: /* ATTRIB_statement: ATTRIB IDENTIFIER '=' attribBinding  */
#line 988 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   struct asm_symbol *const s =
	      declare_variable(state, (yyvsp[-2].string), at_attrib, & (yylsp[-2]));

	   if (s == NULL) {
	      free((yyvsp[-2].string));
	      YYERROR;
	   } else {
	      s->attrib_binding = (yyvsp[0].attrib);
	      state->InputsBound |= BITFIELD64_BIT(s->attrib_binding);

	      if (!validate_inputs(& (yylsp[0]), state)) {
		 YYERROR;
	      }
	   }
	}
#line 3046 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 92: /* attribBinding: VERTEX vtxAttribItem  */
#line 1007 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = (yyvsp[0].attrib);
	}
#line 3054 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 93: /* attribBinding: FRAGMENT fragAttribItem  */
#line 1011 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = (yyvsp[0].attrib);
	}
#line 3062 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 94: /* vtxAttribItem: POSITION  */
#line 1017 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VERT_ATTRIB_POS;
	}
#line 3070 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 95: /* vtxAttribItem: NORMAL  */
#line 1021 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VERT_ATTRIB_NORMAL;
	}
#line 3078 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 96: /* vtxAttribItem: COLOR optColorType  */
#line 1025 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VERT_ATTRIB_COLOR0 + (yyvsp[0].integer);
	}
#line 3086 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 97: /* vtxAttribItem: FOGCOORD  */
#line 1029 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VERT_ATTRIB_FOG;
	}
#line 3094 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 98: /* vtxAttribItem: TEXCOORD optTexCoordUnitNum  */
#line 1033 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VERT_ATTRIB_TEX0 + (yyvsp[0].integer);
	}
#line 3102 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 99: /* vtxAttribItem: MATRIXINDEX '[' vtxWeightNum ']'  */
#line 1037 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   yyerror(& (yylsp[-3]), state, "GL_ARB_matrix_palette not supported");
	   YYERROR;
	}
#line 3111 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 100: /* vtxAttribItem: VTXATTRIB '[' vtxAttribNum ']'  */
#line 1042 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VERT_ATTRIB_GENERIC0 + (yyvsp[-1].integer);
	}
#line 3119 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 101: /* vtxAttribNum: INTEGER  */
#line 1048 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((unsigned) (yyvsp[0].integer) >= state->limits->MaxAttribs) {
	      yyerror(& (yylsp[0]), state, "invalid vertex attribute reference");
	      YYERROR;
	   }

	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3132 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 103: /* fragAttribItem: POSITION  */
#line 1061 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VARYING_SLOT_POS;
	}
#line 3140 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 104: /* fragAttribItem: COLOR optColorType  */
#line 1065 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VARYING_SLOT_COL0 + (yyvsp[0].integer);
	}
#line 3148 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 105: /* fragAttribItem: FOGCOORD  */
#line 1069 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VARYING_SLOT_FOGC;
	}
#line 3156 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 106: /* fragAttribItem: TEXCOORD optTexCoordUnitNum  */
#line 1073 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.attrib) = VARYING_SLOT_TEX0 + (yyvsp[0].integer);
	}
#line 3164 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 109: /* PARAM_singleStmt: PARAM IDENTIFIER paramSingleInit  */
#line 1081 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   struct asm_symbol *const s =
	      declare_variable(state, (yyvsp[-1].string), at_param, & (yylsp[-1]));

	   if (s == NULL) {
	      free((yyvsp[-1].string));
	      YYERROR;
	   } else {
	      s->param_binding_type = (yyvsp[0].temp_sym).param_binding_type;
	      s->param_binding_begin = (yyvsp[0].temp_sym).param_binding_begin;
	      s->param_binding_length = (yyvsp[0].temp_sym).param_binding_length;
              s->param_binding_swizzle = (yyvsp[0].temp_sym).param_binding_swizzle;
	      s->param_is_array = 0;
	   }
	}
#line 3184 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 110: /* PARAM_multipleStmt: PARAM IDENTIFIER '[' optArraySize ']' paramMultipleInit  */
#line 1099 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (((yyvsp[-2].integer) != 0) && ((unsigned) (yyvsp[-2].integer) != (yyvsp[0].temp_sym).param_binding_length)) {
	      free((yyvsp[-4].string));
	      yyerror(& (yylsp[-2]), state,
		      "parameter array size and number of bindings must match");
	      YYERROR;
	   } else {
	      struct asm_symbol *const s =
		 declare_variable(state, (yyvsp[-4].string), (yyvsp[0].temp_sym).type, & (yylsp[-4]));

	      if (s == NULL) {
		 free((yyvsp[-4].string));
		 YYERROR;
	      } else {
		 s->param_binding_type = (yyvsp[0].temp_sym).param_binding_type;
		 s->param_binding_begin = (yyvsp[0].temp_sym).param_binding_begin;
		 s->param_binding_length = (yyvsp[0].temp_sym).param_binding_length;
                 s->param_binding_swizzle = SWIZZLE_XYZW;
		 s->param_is_array = 1;
	      }
	   }
	}
#line 3211 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 111: /* optArraySize: %empty  */
#line 1124 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = 0;
	}
#line 3219 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 112: /* optArraySize: INTEGER  */
#line 1128 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (((yyvsp[0].integer) < 1) || ((unsigned) (yyvsp[0].integer) > state->limits->MaxParameters)) {
              char msg[100];
              snprintf(msg, sizeof(msg),
                             "invalid parameter array size (size=%d max=%u)",
                             (yyvsp[0].integer), state->limits->MaxParameters);
	      yyerror(& (yylsp[0]), state, msg);
	      YYERROR;
	   } else {
	      (yyval.integer) = (yyvsp[0].integer);
	   }
	}
#line 3236 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 113: /* paramSingleInit: '=' paramSingleItemDecl  */
#line 1143 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.temp_sym) = (yyvsp[0].temp_sym);
	}
#line 3244 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 114: /* paramMultipleInit: '=' '{' paramMultInitList '}'  */
#line 1149 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.temp_sym) = (yyvsp[-1].temp_sym);
	}
#line 3252 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 116: /* paramMultInitList: paramMultInitList ',' paramMultipleItem  */
#line 1156 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyvsp[-2].temp_sym).param_binding_length += (yyvsp[0].temp_sym).param_binding_length;
	   (yyval.temp_sym) = (yyvsp[-2].temp_sym);
	}
#line 3261 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 117: /* paramSingleItemDecl: stateSingleItem  */
#line 1163 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset(& (yyval.temp_sym), 0, sizeof((yyval.temp_sym)));
	   (yyval.temp_sym).param_binding_begin = ~0;
	   initialize_symbol_from_state(state->prog, & (yyval.temp_sym), (yyvsp[0].state));
	}
#line 3271 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 118: /* paramSingleItemDecl: programSingleItem  */
#line 1169 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset(& (yyval.temp_sym), 0, sizeof((yyval.temp_sym)));
	   (yyval.temp_sym).param_binding_begin = ~0;
	   initialize_symbol_from_param(state->prog, & (yyval.temp_sym), (yyvsp[0].state));
	}
#line 3281 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 119: /* paramSingleItemDecl: paramConstDecl  */
#line 1175 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset(& (yyval.temp_sym), 0, sizeof((yyval.temp_sym)));
	   (yyval.temp_sym).param_binding_begin = ~0;
	   initialize_symbol_from_const(state->prog, & (yyval.temp_sym), & (yyvsp[0].vector), GL_TRUE);
	}
#line 3291 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 120: /* paramSingleItemUse: stateSingleItem  */
#line 1183 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset(& (yyval.temp_sym), 0, sizeof((yyval.temp_sym)));
	   (yyval.temp_sym).param_binding_begin = ~0;
	   initialize_symbol_from_state(state->prog, & (yyval.temp_sym), (yyvsp[0].state));
	}
#line 3301 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 121: /* paramSingleItemUse: programSingleItem  */
#line 1189 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset(& (yyval.temp_sym), 0, sizeof((yyval.temp_sym)));
	   (yyval.temp_sym).param_binding_begin = ~0;
	   initialize_symbol_from_param(state->prog, & (yyval.temp_sym), (yyvsp[0].state));
	}
#line 3311 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 122: /* paramSingleItemUse: paramConstUse  */
#line 1195 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset(& (yyval.temp_sym), 0, sizeof((yyval.temp_sym)));
	   (yyval.temp_sym).param_binding_begin = ~0;
	   initialize_symbol_from_const(state->prog, & (yyval.temp_sym), & (yyvsp[0].vector), GL_TRUE);
	}
#line 3321 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 123: /* paramMultipleItem: stateMultipleItem  */
#line 1203 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset(& (yyval.temp_sym), 0, sizeof((yyval.temp_sym)));
	   (yyval.temp_sym).param_binding_begin = ~0;
	   initialize_symbol_from_state(state->prog, & (yyval.temp_sym), (yyvsp[0].state));
	}
#line 3331 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 124: /* paramMultipleItem: programMultipleItem  */
#line 1209 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset(& (yyval.temp_sym), 0, sizeof((yyval.temp_sym)));
	   (yyval.temp_sym).param_binding_begin = ~0;
	   initialize_symbol_from_param(state->prog, & (yyval.temp_sym), (yyvsp[0].state));
	}
#line 3341 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 125: /* paramMultipleItem: paramConstDecl  */
#line 1215 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset(& (yyval.temp_sym), 0, sizeof((yyval.temp_sym)));
	   (yyval.temp_sym).param_binding_begin = ~0;
	   initialize_symbol_from_const(state->prog, & (yyval.temp_sym), & (yyvsp[0].vector), GL_FALSE);
	}
#line 3351 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 126: /* stateMultipleItem: stateSingleItem  */
#line 1222 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3357 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 127: /* stateMultipleItem: STATE stateMatrixRows  */
#line 1223 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3363 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 128: /* stateSingleItem: STATE stateMaterialItem  */
#line 1226 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3369 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 129: /* stateSingleItem: STATE stateLightItem  */
#line 1227 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3375 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 130: /* stateSingleItem: STATE stateLightModelItem  */
#line 1228 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3381 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 131: /* stateSingleItem: STATE stateLightProdItem  */
#line 1229 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3387 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 132: /* stateSingleItem: STATE stateTexGenItem  */
#line 1230 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3393 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 133: /* stateSingleItem: STATE stateTexEnvItem  */
#line 1231 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3399 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 134: /* stateSingleItem: STATE stateFogItem  */
#line 1232 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3405 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 135: /* stateSingleItem: STATE stateClipPlaneItem  */
#line 1233 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3411 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 136: /* stateSingleItem: STATE statePointItem  */
#line 1234 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3417 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 137: /* stateSingleItem: STATE stateMatrixRow  */
#line 1235 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3423 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 138: /* stateSingleItem: STATE stateDepthItem  */
#line 1236 "src/lib/mesa/src/mesa/program/program_parse.y"
                                          { memcpy((yyval.state), (yyvsp[0].state), sizeof((yyval.state))); }
#line 3429 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 139: /* stateMaterialItem: MATERIAL optFaceType stateMatProperty  */
#line 1240 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = STATE_MATERIAL;
	   (yyval.state)[1] = (yyvsp[-1].integer);
	   (yyval.state)[2] = (yyvsp[0].integer);
	}
#line 3440 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 140: /* stateMatProperty: ambDiffSpecProperty  */
#line 1249 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3448 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 141: /* stateMatProperty: EMISSION  */
#line 1253 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_EMISSION;
	}
#line 3456 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 142: /* stateMatProperty: SHININESS  */
#line 1257 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_SHININESS;
	}
#line 3464 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 143: /* stateLightItem: LIGHT '[' stateLightNumber ']' stateLightProperty  */
#line 1263 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = STATE_LIGHT;
	   (yyval.state)[1] = (yyvsp[-2].integer);
	   (yyval.state)[2] = (yyvsp[0].integer);
	}
#line 3475 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 144: /* stateLightProperty: ambDiffSpecProperty  */
#line 1272 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3483 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 145: /* stateLightProperty: POSITION  */
#line 1276 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_POSITION;
	}
#line 3491 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 146: /* stateLightProperty: ATTENUATION  */
#line 1280 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (!state->ctx->Extensions.EXT_point_parameters) {
	      yyerror(& (yylsp[0]), state, "GL_ARB_point_parameters not supported");
	      YYERROR;
	   }

	   (yyval.integer) = STATE_ATTENUATION;
	}
#line 3504 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 147: /* stateLightProperty: SPOT stateSpotProperty  */
#line 1289 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3512 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 148: /* stateLightProperty: HALF  */
#line 1293 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_HALF_VECTOR;
	}
#line 3520 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 149: /* stateSpotProperty: DIRECTION  */
#line 1299 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_SPOT_DIRECTION;
	}
#line 3528 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 150: /* stateLightModelItem: LIGHTMODEL stateLModProperty  */
#line 1305 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = (yyvsp[0].state)[0];
	   (yyval.state)[1] = (yyvsp[0].state)[1];
	}
#line 3537 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 151: /* stateLModProperty: AMBIENT  */
#line 1312 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = STATE_LIGHTMODEL_AMBIENT;
	}
#line 3546 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 152: /* stateLModProperty: optFaceType SCENECOLOR  */
#line 1317 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = STATE_LIGHTMODEL_SCENECOLOR;
	   (yyval.state)[1] = (yyvsp[-1].integer);
	}
#line 3556 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 153: /* stateLightProdItem: LIGHTPROD '[' stateLightNumber ']' optFaceType stateLProdProperty  */
#line 1325 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = STATE_LIGHTPROD;
	   (yyval.state)[1] = (yyvsp[-3].integer);
	   (yyval.state)[2] = (yyvsp[-1].integer);
	   (yyval.state)[3] = (yyvsp[0].integer);
	}
#line 3568 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 155: /* stateTexEnvItem: TEXENV optLegacyTexUnitNum stateTexEnvProperty  */
#line 1337 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = (yyvsp[0].integer);
	   (yyval.state)[1] = (yyvsp[-1].integer);
	}
#line 3578 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 156: /* stateTexEnvProperty: COLOR  */
#line 1345 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_TEXENV_COLOR;
	}
#line 3586 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 157: /* ambDiffSpecProperty: AMBIENT  */
#line 1351 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_AMBIENT;
	}
#line 3594 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 158: /* ambDiffSpecProperty: DIFFUSE  */
#line 1355 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_DIFFUSE;
	}
#line 3602 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 159: /* ambDiffSpecProperty: SPECULAR  */
#line 1359 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_SPECULAR;
	}
#line 3610 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 160: /* stateLightNumber: INTEGER  */
#line 1365 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((unsigned) (yyvsp[0].integer) >= state->MaxLights) {
	      yyerror(& (yylsp[0]), state, "invalid light selector");
	      YYERROR;
	   }

	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3623 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 161: /* stateTexGenItem: TEXGEN optTexCoordUnitNum stateTexGenType stateTexGenCoord  */
#line 1376 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = STATE_TEXGEN;
	   (yyval.state)[1] = (yyvsp[-2].integer);
	   (yyval.state)[2] = (yyvsp[-1].integer) + (yyvsp[0].integer);
	}
#line 3634 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 162: /* stateTexGenType: EYE  */
#line 1385 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_TEXGEN_EYE_S;
	}
#line 3642 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 163: /* stateTexGenType: OBJECT  */
#line 1389 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_TEXGEN_OBJECT_S;
	}
#line 3650 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 164: /* stateTexGenCoord: TEXGEN_S  */
#line 1394 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_TEXGEN_EYE_S - STATE_TEXGEN_EYE_S;
	}
#line 3658 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 165: /* stateTexGenCoord: TEXGEN_T  */
#line 1398 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_TEXGEN_EYE_T - STATE_TEXGEN_EYE_S;
	}
#line 3666 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 166: /* stateTexGenCoord: TEXGEN_R  */
#line 1402 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_TEXGEN_EYE_R - STATE_TEXGEN_EYE_S;
	}
#line 3674 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 167: /* stateTexGenCoord: TEXGEN_Q  */
#line 1406 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_TEXGEN_EYE_Q - STATE_TEXGEN_EYE_S;
	}
#line 3682 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 168: /* stateFogItem: FOG stateFogProperty  */
#line 1412 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = (yyvsp[0].integer);
	}
#line 3691 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 169: /* stateFogProperty: COLOR  */
#line 1419 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_FOG_COLOR;
	}
#line 3699 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 170: /* stateFogProperty: PARAMS  */
#line 1423 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_FOG_PARAMS;
	}
#line 3707 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 171: /* stateClipPlaneItem: CLIP '[' stateClipPlaneNum ']' PLANE  */
#line 1429 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = STATE_CLIPPLANE;
	   (yyval.state)[1] = (yyvsp[-2].integer);
	}
#line 3717 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 172: /* stateClipPlaneNum: INTEGER  */
#line 1437 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((unsigned) (yyvsp[0].integer) >= state->MaxClipPlanes) {
	      yyerror(& (yylsp[0]), state, "invalid clip plane selector");
	      YYERROR;
	   }

	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3730 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 173: /* statePointItem: POINT_TOK statePointProperty  */
#line 1448 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = (yyvsp[0].integer);
	}
#line 3739 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 174: /* statePointProperty: SIZE_TOK  */
#line 1455 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_POINT_SIZE;
	}
#line 3747 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 175: /* statePointProperty: ATTENUATION  */
#line 1459 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_POINT_ATTENUATION;
	}
#line 3755 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 176: /* stateMatrixRow: stateMatrixItem ROW '[' stateMatrixRowNum ']'  */
#line 1465 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = (yyvsp[-4].state)[0] + (yyvsp[-4].state)[2];
	   (yyval.state)[1] = (yyvsp[-4].state)[1];
	   (yyval.state)[2] = (yyvsp[-1].integer);
	   (yyval.state)[3] = (yyvsp[-1].integer);
	}
#line 3766 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 177: /* stateMatrixRows: stateMatrixItem optMatrixRows  */
#line 1474 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = (yyvsp[-1].state)[0] + (yyvsp[-1].state)[2];
	   (yyval.state)[1] = (yyvsp[-1].state)[1];
	   (yyval.state)[2] = (yyvsp[0].state)[2];
	   (yyval.state)[3] = (yyvsp[0].state)[3];
	}
#line 3777 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 178: /* optMatrixRows: %empty  */
#line 1483 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[2] = 0;
	   (yyval.state)[3] = 3;
	}
#line 3786 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 179: /* optMatrixRows: ROW '[' stateMatrixRowNum DOT_DOT stateMatrixRowNum ']'  */
#line 1488 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   /* It seems logical that the matrix row range specifier would have
	    * to specify a range or more than one row (i.e., $5 > $3).
	    * However, the ARB_vertex_program spec says "a program will fail
	    * to load if <a> is greater than <b>."  This means that $3 == $5
	    * is valid.
	    */
	   if ((yyvsp[-3].integer) > (yyvsp[-1].integer)) {
	      yyerror(& (yylsp[-3]), state, "invalid matrix row range");
	      YYERROR;
	   }

	   (yyval.state)[2] = (yyvsp[-3].integer);
	   (yyval.state)[3] = (yyvsp[-1].integer);
	}
#line 3806 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 180: /* stateMatrixItem: MATRIX stateMatrixName stateOptMatModifier  */
#line 1506 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = (yyvsp[-1].state)[0];
	   (yyval.state)[1] = (yyvsp[-1].state)[1];
	   (yyval.state)[2] = (yyvsp[0].integer);
	}
#line 3816 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 181: /* stateOptMatModifier: %empty  */
#line 1514 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_MATRIX_NO_MODIFIER;
	}
#line 3824 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 182: /* stateOptMatModifier: stateMatModifier  */
#line 1518 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3832 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 183: /* stateMatModifier: INVERSE  */
#line 1524 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_MATRIX_INVERSE;
	}
#line 3840 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 184: /* stateMatModifier: TRANSPOSE  */
#line 1528 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_MATRIX_TRANSPOSE;
	}
#line 3848 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 185: /* stateMatModifier: INVTRANS  */
#line 1532 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = STATE_MATRIX_INVTRANS;
	}
#line 3856 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 186: /* stateMatrixRowNum: INTEGER  */
#line 1538 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((yyvsp[0].integer) > 3) {
	      yyerror(& (yylsp[0]), state, "invalid matrix row reference");
	      YYERROR;
	   }

	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3869 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 187: /* stateMatrixName: MODELVIEW stateOptModMatNum  */
#line 1549 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = STATE_MODELVIEW_MATRIX;
	   (yyval.state)[1] = (yyvsp[0].integer);
	}
#line 3878 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 188: /* stateMatrixName: PROJECTION  */
#line 1554 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = STATE_PROJECTION_MATRIX;
	   (yyval.state)[1] = 0;
	}
#line 3887 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 189: /* stateMatrixName: MVP  */
#line 1559 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = STATE_MVP_MATRIX;
	   (yyval.state)[1] = 0;
	}
#line 3896 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 190: /* stateMatrixName: TEXTURE optTexCoordUnitNum  */
#line 1564 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = STATE_TEXTURE_MATRIX;
	   (yyval.state)[1] = (yyvsp[0].integer);
	}
#line 3905 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 191: /* stateMatrixName: PALETTE '[' statePaletteMatNum ']'  */
#line 1569 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   yyerror(& (yylsp[-3]), state, "GL_ARB_matrix_palette not supported");
	   YYERROR;
	}
#line 3914 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 192: /* stateMatrixName: MAT_PROGRAM '[' stateProgramMatNum ']'  */
#line 1574 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = STATE_PROGRAM_MATRIX;
	   (yyval.state)[1] = (yyvsp[-1].integer);
	}
#line 3923 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 193: /* stateOptModMatNum: %empty  */
#line 1581 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = 0;
	}
#line 3931 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 194: /* stateOptModMatNum: '[' stateModMatNum ']'  */
#line 1585 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = (yyvsp[-1].integer);
	}
#line 3939 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 195: /* stateModMatNum: INTEGER  */
#line 1590 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   /* Since GL_ARB_vertex_blend isn't supported, only modelview matrix
	    * zero is valid.
	    */
	   if ((yyvsp[0].integer) != 0) {
	      yyerror(& (yylsp[0]), state, "invalid modelview matrix index");
	      YYERROR;
	   }

	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3955 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 196: /* statePaletteMatNum: INTEGER  */
#line 1603 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   /* Since GL_ARB_matrix_palette isn't supported, just let any value
	    * through here.  The error will be generated later.
	    */
	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3966 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 197: /* stateProgramMatNum: INTEGER  */
#line 1611 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((unsigned) (yyvsp[0].integer) >= state->MaxProgramMatrices) {
	      yyerror(& (yylsp[0]), state, "invalid program matrix selector");
	      YYERROR;
	   }

	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 3979 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 198: /* stateDepthItem: DEPTH RANGE  */
#line 1622 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = STATE_DEPTH_RANGE;
	}
#line 3988 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 203: /* progEnvParams: PROGRAM ENV '[' progEnvParamNums ']'  */
#line 1634 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = state->state_param_enum;
	   (yyval.state)[1] = STATE_ENV;
	   (yyval.state)[2] = (yyvsp[-1].state)[0];
	   (yyval.state)[3] = (yyvsp[-1].state)[1];
	}
#line 4000 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 204: /* progEnvParamNums: progEnvParamNum  */
#line 1644 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = (yyvsp[0].integer);
	   (yyval.state)[1] = (yyvsp[0].integer);
	}
#line 4009 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 205: /* progEnvParamNums: progEnvParamNum DOT_DOT progEnvParamNum  */
#line 1649 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = (yyvsp[-2].integer);
	   (yyval.state)[1] = (yyvsp[0].integer);
	}
#line 4018 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 206: /* progEnvParam: PROGRAM ENV '[' progEnvParamNum ']'  */
#line 1656 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = state->state_param_enum;
	   (yyval.state)[1] = STATE_ENV;
	   (yyval.state)[2] = (yyvsp[-1].integer);
	   (yyval.state)[3] = (yyvsp[-1].integer);
	}
#line 4030 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 207: /* progLocalParams: PROGRAM LOCAL '[' progLocalParamNums ']'  */
#line 1666 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = state->state_param_enum;
	   (yyval.state)[1] = STATE_LOCAL;
	   (yyval.state)[2] = (yyvsp[-1].state)[0];
	   (yyval.state)[3] = (yyvsp[-1].state)[1];
	}
#line 4042 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 208: /* progLocalParamNums: progLocalParamNum  */
#line 1675 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = (yyvsp[0].integer);
	   (yyval.state)[1] = (yyvsp[0].integer);
	}
#line 4051 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 209: /* progLocalParamNums: progLocalParamNum DOT_DOT progLocalParamNum  */
#line 1680 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.state)[0] = (yyvsp[-2].integer);
	   (yyval.state)[1] = (yyvsp[0].integer);
	}
#line 4060 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 210: /* progLocalParam: PROGRAM LOCAL '[' progLocalParamNum ']'  */
#line 1687 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   memset((yyval.state), 0, sizeof((yyval.state)));
	   (yyval.state)[0] = state->state_param_enum;
	   (yyval.state)[1] = STATE_LOCAL;
	   (yyval.state)[2] = (yyvsp[-1].integer);
	   (yyval.state)[3] = (yyvsp[-1].integer);
	}
#line 4072 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 211: /* progEnvParamNum: INTEGER  */
#line 1697 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((unsigned) (yyvsp[0].integer) >= state->limits->MaxEnvParams) {
	      yyerror(& (yylsp[0]), state, "invalid environment parameter reference");
	      YYERROR;
	   }
	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 4084 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 212: /* progLocalParamNum: INTEGER  */
#line 1707 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((unsigned) (yyvsp[0].integer) >= state->limits->MaxLocalParams) {
	      yyerror(& (yylsp[0]), state, "invalid local parameter reference");
	      YYERROR;
	   }
	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 4096 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 217: /* paramConstScalarDecl: signedFloatConstant  */
#line 1722 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.vector).count = 4;
	   (yyval.vector).data[0].f = (yyvsp[0].real);
	   (yyval.vector).data[1].f = (yyvsp[0].real);
	   (yyval.vector).data[2].f = (yyvsp[0].real);
	   (yyval.vector).data[3].f = (yyvsp[0].real);
	}
#line 4108 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 218: /* paramConstScalarUse: REAL  */
#line 1732 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.vector).count = 1;
	   (yyval.vector).data[0].f = (yyvsp[0].real);
	   (yyval.vector).data[1].f = (yyvsp[0].real);
	   (yyval.vector).data[2].f = (yyvsp[0].real);
	   (yyval.vector).data[3].f = (yyvsp[0].real);
	}
#line 4120 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 219: /* paramConstScalarUse: INTEGER  */
#line 1740 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.vector).count = 1;
	   (yyval.vector).data[0].f = (float) (yyvsp[0].integer);
	   (yyval.vector).data[1].f = (float) (yyvsp[0].integer);
	   (yyval.vector).data[2].f = (float) (yyvsp[0].integer);
	   (yyval.vector).data[3].f = (float) (yyvsp[0].integer);
	}
#line 4132 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 220: /* paramConstVector: '{' signedFloatConstant '}'  */
#line 1750 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.vector).count = 4;
	   (yyval.vector).data[0].f = (yyvsp[-1].real);
	   (yyval.vector).data[1].f = 0.0f;
	   (yyval.vector).data[2].f = 0.0f;
	   (yyval.vector).data[3].f = 1.0f;
	}
#line 4144 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 221: /* paramConstVector: '{' signedFloatConstant ',' signedFloatConstant '}'  */
#line 1758 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.vector).count = 4;
	   (yyval.vector).data[0].f = (yyvsp[-3].real);
	   (yyval.vector).data[1].f = (yyvsp[-1].real);
	   (yyval.vector).data[2].f = 0.0f;
	   (yyval.vector).data[3].f = 1.0f;
	}
#line 4156 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 222: /* paramConstVector: '{' signedFloatConstant ',' signedFloatConstant ',' signedFloatConstant '}'  */
#line 1767 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.vector).count = 4;
	   (yyval.vector).data[0].f = (yyvsp[-5].real);
	   (yyval.vector).data[1].f = (yyvsp[-3].real);
	   (yyval.vector).data[2].f = (yyvsp[-1].real);
	   (yyval.vector).data[3].f = 1.0f;
	}
#line 4168 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 223: /* paramConstVector: '{' signedFloatConstant ',' signedFloatConstant ',' signedFloatConstant ',' signedFloatConstant '}'  */
#line 1776 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.vector).count = 4;
	   (yyval.vector).data[0].f = (yyvsp[-7].real);
	   (yyval.vector).data[1].f = (yyvsp[-5].real);
	   (yyval.vector).data[2].f = (yyvsp[-3].real);
	   (yyval.vector).data[3].f = (yyvsp[-1].real);
	}
#line 4180 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 224: /* signedFloatConstant: optionalSign REAL  */
#line 1786 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.real) = ((yyvsp[-1].negate)) ? -(yyvsp[0].real) : (yyvsp[0].real);
	}
#line 4188 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 225: /* signedFloatConstant: optionalSign INTEGER  */
#line 1790 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.real) = (float)(((yyvsp[-1].negate)) ? -(yyvsp[0].integer) : (yyvsp[0].integer));
	}
#line 4196 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 226: /* optionalSign: '+'  */
#line 1795 "src/lib/mesa/src/mesa/program/program_parse.y"
                         { (yyval.negate) = FALSE; }
#line 4202 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 227: /* optionalSign: '-'  */
#line 1796 "src/lib/mesa/src/mesa/program/program_parse.y"
                         { (yyval.negate) = TRUE;  }
#line 4208 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 228: /* optionalSign: %empty  */
#line 1797 "src/lib/mesa/src/mesa/program/program_parse.y"
                         { (yyval.negate) = FALSE; }
#line 4214 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 229: /* @1: %empty  */
#line 1800 "src/lib/mesa/src/mesa/program/program_parse.y"
                     { (yyval.integer) = (yyvsp[0].integer); }
#line 4220 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 231: /* @2: %empty  */
#line 1803 "src/lib/mesa/src/mesa/program/program_parse.y"
                           { (yyval.integer) = (yyvsp[0].integer); }
#line 4226 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 233: /* varNameList: varNameList ',' IDENTIFIER  */
#line 1807 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (!declare_variable(state, (yyvsp[0].string), (yyvsp[-3].integer), & (yylsp[0]))) {
	      free((yyvsp[0].string));
	      YYERROR;
	   }
	}
#line 4237 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 234: /* varNameList: IDENTIFIER  */
#line 1814 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (!declare_variable(state, (yyvsp[0].string), (yyvsp[-1].integer), & (yylsp[0]))) {
	      free((yyvsp[0].string));
	      YYERROR;
	   }
	}
#line 4248 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 235: /* OUTPUT_statement: OUTPUT IDENTIFIER '=' resultBinding  */
#line 1823 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   struct asm_symbol *const s =
	      declare_variable(state, (yyvsp[-2].string), at_output, & (yylsp[-2]));

	   if (s == NULL) {
	      free((yyvsp[-2].string));
	      YYERROR;
	   } else {
	      s->output_binding = (yyvsp[0].result);
	   }
	}
#line 4264 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 236: /* resultBinding: RESULT POSITION  */
#line 1837 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      (yyval.result) = VARYING_SLOT_POS;
	   } else {
	      yyerror(& (yylsp[0]), state, "invalid program result name");
	      YYERROR;
	   }
	}
#line 4277 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 237: /* resultBinding: RESULT FOGCOORD  */
#line 1846 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      (yyval.result) = VARYING_SLOT_FOGC;
	   } else {
	      yyerror(& (yylsp[0]), state, "invalid program result name");
	      YYERROR;
	   }
	}
#line 4290 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 238: /* resultBinding: RESULT resultColBinding  */
#line 1855 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.result) = (yyvsp[0].result);
	}
#line 4298 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 239: /* resultBinding: RESULT POINTSIZE  */
#line 1859 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      (yyval.result) = VARYING_SLOT_PSIZ;
	   } else {
	      yyerror(& (yylsp[0]), state, "invalid program result name");
	      YYERROR;
	   }
	}
#line 4311 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 240: /* resultBinding: RESULT TEXCOORD optTexCoordUnitNum  */
#line 1868 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      (yyval.result) = VARYING_SLOT_TEX0 + (yyvsp[0].integer);
	   } else {
	      yyerror(& (yylsp[-1]), state, "invalid program result name");
	      YYERROR;
	   }
	}
#line 4324 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 241: /* resultBinding: RESULT DEPTH  */
#line 1877 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_fragment) {
	      (yyval.result) = FRAG_RESULT_DEPTH;
	   } else {
	      yyerror(& (yylsp[0]), state, "invalid program result name");
	      YYERROR;
	   }
	}
#line 4337 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 242: /* resultColBinding: COLOR optResultFaceType optResultColorType  */
#line 1888 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.result) = (yyvsp[-1].integer) + (yyvsp[0].integer);
	}
#line 4345 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 243: /* optResultFaceType: %empty  */
#line 1894 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      (yyval.integer) = VARYING_SLOT_COL0;
	   } else {
	      if (state->option.DrawBuffers)
		 (yyval.integer) = FRAG_RESULT_DATA0;
	      else
		 (yyval.integer) = FRAG_RESULT_COLOR;
	   }
	}
#line 4360 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 244: /* optResultFaceType: '[' INTEGER ']'  */
#line 1905 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      yyerror(& (yylsp[-2]), state, "invalid program result name");
	      YYERROR;
	   } else {
	      if (!state->option.DrawBuffers) {
		 /* From the ARB_draw_buffers spec (same text exists
		  * for ATI_draw_buffers):
		  *
		  *     If this option is not specified, a fragment
		  *     program that attempts to bind
		  *     "result.color[n]" will fail to load, and only
		  *     "result.color" will be allowed.
		  */
		 yyerror(& (yylsp[-2]), state,
			 "result.color[] used without "
			 "`OPTION ARB_draw_buffers' or "
			 "`OPTION ATI_draw_buffers'");
		 YYERROR;
	      } else if ((yyvsp[-1].integer) >= state->MaxDrawBuffers) {
		 yyerror(& (yylsp[-2]), state,
			 "result.color[] exceeds MAX_DRAW_BUFFERS_ARB");
		 YYERROR;
	      }
	      (yyval.integer) = FRAG_RESULT_DATA0 + (yyvsp[-1].integer);
	   }
	}
#line 4392 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 245: /* optResultFaceType: FRONT  */
#line 1933 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      (yyval.integer) = VARYING_SLOT_COL0;
	   } else {
	      yyerror(& (yylsp[0]), state, "invalid program result name");
	      YYERROR;
	   }
	}
#line 4405 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 246: /* optResultFaceType: BACK  */
#line 1942 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      (yyval.integer) = VARYING_SLOT_BFC0;
	   } else {
	      yyerror(& (yylsp[0]), state, "invalid program result name");
	      YYERROR;
	   }
	}
#line 4418 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 247: /* optResultColorType: %empty  */
#line 1953 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   (yyval.integer) = 0;
	}
#line 4426 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 248: /* optResultColorType: PRIMARY  */
#line 1957 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      (yyval.integer) = 0;
	   } else {
	      yyerror(& (yylsp[0]), state, "invalid program result name");
	      YYERROR;
	   }
	}
#line 4439 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 249: /* optResultColorType: SECONDARY  */
#line 1966 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if (state->mode == ARB_vertex) {
	      (yyval.integer) = 1;
	   } else {
	      yyerror(& (yylsp[0]), state, "invalid program result name");
	      YYERROR;
	   }
	}
#line 4452 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 250: /* optFaceType: %empty  */
#line 1976 "src/lib/mesa/src/mesa/program/program_parse.y"
                { (yyval.integer) = 0; }
#line 4458 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 251: /* optFaceType: FRONT  */
#line 1977 "src/lib/mesa/src/mesa/program/program_parse.y"
                { (yyval.integer) = 0; }
#line 4464 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 252: /* optFaceType: BACK  */
#line 1978 "src/lib/mesa/src/mesa/program/program_parse.y"
                { (yyval.integer) = 1; }
#line 4470 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 253: /* optColorType: %empty  */
#line 1981 "src/lib/mesa/src/mesa/program/program_parse.y"
                    { (yyval.integer) = 0; }
#line 4476 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 254: /* optColorType: PRIMARY  */
#line 1982 "src/lib/mesa/src/mesa/program/program_parse.y"
                    { (yyval.integer) = 0; }
#line 4482 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 255: /* optColorType: SECONDARY  */
#line 1983 "src/lib/mesa/src/mesa/program/program_parse.y"
                    { (yyval.integer) = 1; }
#line 4488 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 256: /* optTexCoordUnitNum: %empty  */
#line 1986 "src/lib/mesa/src/mesa/program/program_parse.y"
                                   { (yyval.integer) = 0; }
#line 4494 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 257: /* optTexCoordUnitNum: '[' texCoordUnitNum ']'  */
#line 1987 "src/lib/mesa/src/mesa/program/program_parse.y"
                                   { (yyval.integer) = (yyvsp[-1].integer); }
#line 4500 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 258: /* optTexImageUnitNum: %empty  */
#line 1990 "src/lib/mesa/src/mesa/program/program_parse.y"
                                   { (yyval.integer) = 0; }
#line 4506 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 259: /* optTexImageUnitNum: '[' texImageUnitNum ']'  */
#line 1991 "src/lib/mesa/src/mesa/program/program_parse.y"
                                   { (yyval.integer) = (yyvsp[-1].integer); }
#line 4512 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 260: /* optLegacyTexUnitNum: %empty  */
#line 1994 "src/lib/mesa/src/mesa/program/program_parse.y"
                                   { (yyval.integer) = 0; }
#line 4518 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 261: /* optLegacyTexUnitNum: '[' legacyTexUnitNum ']'  */
#line 1995 "src/lib/mesa/src/mesa/program/program_parse.y"
                                   { (yyval.integer) = (yyvsp[-1].integer); }
#line 4524 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 262: /* texCoordUnitNum: INTEGER  */
#line 1999 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((unsigned) (yyvsp[0].integer) >= state->MaxTextureCoordUnits) {
	      yyerror(& (yylsp[0]), state, "invalid texture coordinate unit selector");
	      YYERROR;
	   }

	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 4537 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 263: /* texImageUnitNum: INTEGER  */
#line 2010 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((unsigned) (yyvsp[0].integer) >= state->MaxTextureImageUnits) {
	      yyerror(& (yylsp[0]), state, "invalid texture image unit selector");
	      YYERROR;
	   }

	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 4550 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 264: /* legacyTexUnitNum: INTEGER  */
#line 2021 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   if ((unsigned) (yyvsp[0].integer) >= state->MaxTextureUnits) {
	      yyerror(& (yylsp[0]), state, "invalid texture unit selector");
	      YYERROR;
	   }

	   (yyval.integer) = (yyvsp[0].integer);
	}
#line 4563 "generated/src/mesa/program/program_parse.tab.c"
    break;

  case 265: /* ALIAS_statement: ALIAS IDENTIFIER '=' USED_IDENTIFIER  */
#line 2032 "src/lib/mesa/src/mesa/program/program_parse.y"
        {
	   struct asm_symbol *exist = (struct asm_symbol *)
              _mesa_symbol_table_find_symbol(state->st, (yyvsp[-2].string));
	   struct asm_symbol *target = (struct asm_symbol *)
              _mesa_symbol_table_find_symbol(state->st, (yyvsp[0].string));

	   free((yyvsp[0].string));

	   if (exist != NULL) {
	      char m[1000];
	      snprintf(m, sizeof(m), "redeclared identifier: %s", (yyvsp[-2].string));
	      free((yyvsp[-2].string));
	      yyerror(& (yylsp[-2]), state, m);
	      YYERROR;
	   } else if (target == NULL) {
	      free((yyvsp[-2].string));
	      yyerror(& (yylsp[0]), state,
		      "undefined variable binding in ALIAS statement");
	      YYERROR;
	   } else {
              _mesa_symbol_table_add_symbol(state->st, (yyvsp[-2].string), target);
	   }
	}
#line 4591 "generated/src/mesa/program/program_parse.tab.c"
    break;


#line 4595 "generated/src/mesa/program/program_parse.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, state, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, state);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, state, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, state);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, state);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 2061 "src/lib/mesa/src/mesa/program/program_parse.y"


void
asm_instruction_set_operands(struct asm_instruction *inst,
			     const struct prog_dst_register *dst,
			     const struct asm_src_register *src0,
			     const struct asm_src_register *src1,
			     const struct asm_src_register *src2)
{
   /* In the core ARB extensions only the KIL instruction doesn't have a
    * destination register.
    */
   if (dst == NULL) {
      init_dst_reg(& inst->Base.DstReg);
   } else {
      inst->Base.DstReg = *dst;
   }

   if (src0 != NULL) {
      inst->Base.SrcReg[0] = src0->Base;
      inst->SrcReg[0] = *src0;
   } else {
      init_src_reg(& inst->SrcReg[0]);
   }

   if (src1 != NULL) {
      inst->Base.SrcReg[1] = src1->Base;
      inst->SrcReg[1] = *src1;
   } else {
      init_src_reg(& inst->SrcReg[1]);
   }

   if (src2 != NULL) {
      inst->Base.SrcReg[2] = src2->Base;
      inst->SrcReg[2] = *src2;
   } else {
      init_src_reg(& inst->SrcReg[2]);
   }
}


struct asm_instruction *
asm_instruction_ctor(enum prog_opcode op,
		     const struct prog_dst_register *dst,
		     const struct asm_src_register *src0,
		     const struct asm_src_register *src1,
		     const struct asm_src_register *src2)
{
   struct asm_instruction *inst = CALLOC_STRUCT(asm_instruction);

   if (inst) {
      _mesa_init_instructions(& inst->Base, 1);
      inst->Base.Opcode = op;

      asm_instruction_set_operands(inst, dst, src0, src1, src2);
   }

   return inst;
}


struct asm_instruction *
asm_instruction_copy_ctor(const struct prog_instruction *base,
			  const struct prog_dst_register *dst,
			  const struct asm_src_register *src0,
			  const struct asm_src_register *src1,
			  const struct asm_src_register *src2)
{
   struct asm_instruction *inst = CALLOC_STRUCT(asm_instruction);

   if (inst) {
      _mesa_init_instructions(& inst->Base, 1);
      inst->Base.Opcode = base->Opcode;
      inst->Base.Saturate = base->Saturate;

      asm_instruction_set_operands(inst, dst, src0, src1, src2);
   }

   return inst;
}


void
init_dst_reg(struct prog_dst_register *r)
{
   memset(r, 0, sizeof(*r));
   r->File = PROGRAM_UNDEFINED;
   r->WriteMask = WRITEMASK_XYZW;
}


/** Like init_dst_reg() but set the File and Index fields. */
void
set_dst_reg(struct prog_dst_register *r, gl_register_file file, GLint index)
{
   const GLint maxIndex = 1 << INST_INDEX_BITS;
   const GLint minIndex = 0;
   assert(index >= minIndex);
   (void) minIndex;
   assert(index <= maxIndex);
   (void) maxIndex;
   assert(file == PROGRAM_TEMPORARY ||
	  file == PROGRAM_ADDRESS ||
	  file == PROGRAM_OUTPUT);
   memset(r, 0, sizeof(*r));
   r->File = file;
   r->Index = index;
   r->WriteMask = WRITEMASK_XYZW;
}


void
init_src_reg(struct asm_src_register *r)
{
   memset(r, 0, sizeof(*r));
   r->Base.File = PROGRAM_UNDEFINED;
   r->Base.Swizzle = SWIZZLE_NOOP;
   r->Symbol = NULL;
}


/** Like init_src_reg() but set the File and Index fields.
 * \return GL_TRUE if a valid src register, GL_FALSE otherwise
 */
void
set_src_reg(struct asm_src_register *r, gl_register_file file, GLint index)
{
   set_src_reg_swz(r, file, index, SWIZZLE_XYZW);
}


void
set_src_reg_swz(struct asm_src_register *r, gl_register_file file, GLint index,
                GLuint swizzle)
{
   const GLint maxIndex = (1 << INST_INDEX_BITS) - 1;
   const GLint minIndex = -(1 << INST_INDEX_BITS);
   assert(file < PROGRAM_FILE_MAX);
   assert(index >= minIndex);
   (void) minIndex;
   assert(index <= maxIndex);
   (void) maxIndex;
   memset(r, 0, sizeof(*r));
   r->Base.File = file;
   r->Base.Index = index;
   r->Base.Swizzle = swizzle;
   r->Symbol = NULL;
}


/**
 * Validate the set of inputs used by a program
 *
 * Validates that legal sets of inputs are used by the program.  In this case
 * "used" included both reading the input or binding the input to a name using
 * the \c ATTRIB command.
 *
 * \return
 * \c TRUE if the combination of inputs used is valid, \c FALSE otherwise.
 */
int
validate_inputs(struct YYLTYPE *locp, struct asm_parser_state *state)
{
   const GLbitfield64 inputs = state->prog->info.inputs_read | state->InputsBound;
   GLbitfield ff_inputs = 0;

   /* Since Mesa internal attribute indices are different from
    * how NV_vertex_program defines attribute aliasing, we have to construct
    * a separate usage mask based on how the aliasing is defined.
    *
    * Note that attribute aliasing is optional if NV_vertex_program is
    * unsupported.
    */
   if (inputs & VERT_BIT_POS)
      ff_inputs |= 1 << 0;
   if (inputs & VERT_BIT_NORMAL)
      ff_inputs |= 1 << 2;
   if (inputs & VERT_BIT_COLOR0)
      ff_inputs |= 1 << 3;
   if (inputs & VERT_BIT_COLOR1)
      ff_inputs |= 1 << 4;
   if (inputs & VERT_BIT_FOG)
      ff_inputs |= 1 << 5;

   ff_inputs |= ((inputs & VERT_BIT_TEX_ALL) >> VERT_ATTRIB_TEX0) << 8;

   if ((ff_inputs & (inputs >> VERT_ATTRIB_GENERIC0)) != 0) {
      yyerror(locp, state, "illegal use of generic attribute and name attribute");
      return 0;
   }

   return 1;
}


struct asm_symbol *
declare_variable(struct asm_parser_state *state, char *name, enum asm_type t,
		 struct YYLTYPE *locp)
{
   struct asm_symbol *s = NULL;
   struct asm_symbol *exist = (struct asm_symbol *)
      _mesa_symbol_table_find_symbol(state->st, name);


   if (exist != NULL) {
      yyerror(locp, state, "redeclared identifier");
   } else {
      s = calloc(1, sizeof(struct asm_symbol));
      s->name = name;
      s->type = t;

      switch (t) {
      case at_temp:
         if (state->prog->arb.NumTemporaries >= state->limits->MaxTemps) {
	    yyerror(locp, state, "too many temporaries declared");
	    free(s);
	    return NULL;
	 }

         s->temp_binding = state->prog->arb.NumTemporaries;
         state->prog->arb.NumTemporaries++;
	 break;

      case at_address:
         if (state->prog->arb.NumAddressRegs >=
             state->limits->MaxAddressRegs) {
	    yyerror(locp, state, "too many address registers declared");
	    free(s);
	    return NULL;
	 }

	 /* FINISHME: Add support for multiple address registers.
	  */
         state->prog->arb.NumAddressRegs++;
	 break;

      default:
	 break;
      }

      _mesa_symbol_table_add_symbol(state->st, s->name, s);
      s->next = state->sym;
      state->sym = s;
   }

   return s;
}


int add_state_reference(struct gl_program_parameter_list *param_list,
			const gl_state_index16 tokens[STATE_LENGTH])
{
   const GLuint size = 4; /* XXX fix */
   char *name;
   GLint index;

   name = _mesa_program_state_string(tokens);
   index = _mesa_add_parameter(param_list, PROGRAM_STATE_VAR, name,
                               size, GL_NONE, NULL, tokens, true);
   param_list->StateFlags |= _mesa_program_state_flags(tokens);

   /* free name string here since we duplicated it in add_parameter() */
   free(name);

   return index;
}


int
initialize_symbol_from_state(struct gl_program *prog,
			     struct asm_symbol *param_var,
			     const gl_state_index16 tokens[STATE_LENGTH])
{
   int idx = -1;
   gl_state_index16 state_tokens[STATE_LENGTH];


   memcpy(state_tokens, tokens, sizeof(state_tokens));

   param_var->type = at_param;
   param_var->param_binding_type = PROGRAM_STATE_VAR;

   /* If we are adding a STATE_MATRIX that has multiple rows, we need to
    * unroll it and call add_state_reference() for each row
    */
   if (state_tokens[0] >= STATE_MODELVIEW_MATRIX &&
       state_tokens[0] <= STATE_PROGRAM_MATRIX_INVTRANS
       && (state_tokens[2] != state_tokens[3])) {
      int row;
      const int first_row = state_tokens[2];
      const int last_row = state_tokens[3];

      for (row = first_row; row <= last_row; row++) {
	 state_tokens[2] = state_tokens[3] = row;

	 idx = add_state_reference(prog->Parameters, state_tokens);
	 if (param_var->param_binding_begin == ~0U) {
	    param_var->param_binding_begin = idx;
            param_var->param_binding_swizzle = SWIZZLE_XYZW;
         }

	 param_var->param_binding_length++;
      }
   }
   else {
      idx = add_state_reference(prog->Parameters, state_tokens);
      if (param_var->param_binding_begin == ~0U) {
	 param_var->param_binding_begin = idx;
         param_var->param_binding_swizzle = SWIZZLE_XYZW;
      }
      param_var->param_binding_length++;
   }

   return idx;
}


int
initialize_symbol_from_param(struct gl_program *prog,
			     struct asm_symbol *param_var,
			     const gl_state_index16 tokens[STATE_LENGTH])
{
   int idx = -1;
   gl_state_index16 state_tokens[STATE_LENGTH];


   memcpy(state_tokens, tokens, sizeof(state_tokens));

   assert((state_tokens[0] == STATE_VERTEX_PROGRAM)
	  || (state_tokens[0] == STATE_FRAGMENT_PROGRAM));
   assert((state_tokens[1] == STATE_ENV)
	  || (state_tokens[1] == STATE_LOCAL));

   /*
    * The param type is STATE_VAR.  The program parameter entry will
    * effectively be a pointer into the LOCAL or ENV parameter array.
    */
   param_var->type = at_param;
   param_var->param_binding_type = PROGRAM_STATE_VAR;

   /* If we are adding a STATE_ENV or STATE_LOCAL that has multiple elements,
    * we need to unroll it and call add_state_reference() for each row
    */
   if (state_tokens[2] != state_tokens[3]) {
      int row;
      const int first_row = state_tokens[2];
      const int last_row = state_tokens[3];

      for (row = first_row; row <= last_row; row++) {
	 state_tokens[2] = state_tokens[3] = row;

	 idx = add_state_reference(prog->Parameters, state_tokens);
	 if (param_var->param_binding_begin == ~0U) {
	    param_var->param_binding_begin = idx;
            param_var->param_binding_swizzle = SWIZZLE_XYZW;
         }
	 param_var->param_binding_length++;
      }
   }
   else {
      idx = add_state_reference(prog->Parameters, state_tokens);
      if (param_var->param_binding_begin == ~0U) {
	 param_var->param_binding_begin = idx;
         param_var->param_binding_swizzle = SWIZZLE_XYZW;
      }
      param_var->param_binding_length++;
   }

   return idx;
}


/**
 * Put a float/vector constant/literal into the parameter list.
 * \param param_var  returns info about the parameter/constant's location,
 *                   binding, type, etc.
 * \param vec  the vector/constant to add
 * \param allowSwizzle  if true, try to consolidate constants which only differ
 *                      by a swizzle.  We don't want to do this when building
 *                      arrays of constants that may be indexed indirectly.
 * \return index of the constant in the parameter list.
 */
int
initialize_symbol_from_const(struct gl_program *prog,
			     struct asm_symbol *param_var,
			     const struct asm_vector *vec,
                             GLboolean allowSwizzle)
{
   unsigned swizzle;
   const int idx = _mesa_add_unnamed_constant(prog->Parameters,
                                              vec->data, vec->count,
                                              allowSwizzle ? &swizzle : NULL);

   param_var->type = at_param;
   param_var->param_binding_type = PROGRAM_CONSTANT;

   if (param_var->param_binding_begin == ~0U) {
      param_var->param_binding_begin = idx;
      param_var->param_binding_swizzle = allowSwizzle ? swizzle : SWIZZLE_XYZW;
   }
   param_var->param_binding_length++;

   return idx;
}


char *
make_error_string(const char *fmt, ...)
{
   int length;
   char *str;
   va_list args;


   /* Call vsnprintf once to determine how large the final string is.  Call it
    * again to do the actual formatting.  from the vsnprintf manual page:
    *
    *    Upon successful return, these functions return the number of
    *    characters printed  (not including the trailing '\0' used to end
    *    output to strings).
    */
   va_start(args, fmt);
   length = 1 + vsnprintf(NULL, 0, fmt, args);
   va_end(args);

   str = malloc(length);
   if (str) {
      va_start(args, fmt);
      vsnprintf(str, length, fmt, args);
      va_end(args);
   }

   return str;
}


void
yyerror(YYLTYPE *locp, struct asm_parser_state *state, const char *s)
{
   char *err_str;


   err_str = make_error_string("glProgramStringARB(%s)\n", s);
   if (err_str) {
      _mesa_error(state->ctx, GL_INVALID_OPERATION, "%s", err_str);
      free(err_str);
   }

   err_str = make_error_string("line %u, char %u: error: %s\n",
			       locp->first_line, locp->first_column, s);
   _mesa_set_program_error(state->ctx, locp->position, err_str);

   if (err_str) {
      free(err_str);
   }
}


GLboolean
_mesa_parse_arb_program(struct gl_context *ctx, GLenum target, const GLubyte *str,
			GLsizei len, struct asm_parser_state *state)
{
   struct asm_instruction *inst;
   unsigned i;
   GLubyte *strz;
   GLboolean result = GL_FALSE;
   void *temp;
   struct asm_symbol *sym;

   state->ctx = ctx;
   state->prog->Target = target;
   state->prog->Parameters = _mesa_new_parameter_list();

   /* Make a copy of the program string and force it to be NUL-terminated.
    */
   strz = (GLubyte *) ralloc_size(state->mem_ctx, len + 1);
   if (strz == NULL) {
      if (state->prog->Parameters) {
         _mesa_free_parameter_list(state->prog->Parameters);
         state->prog->Parameters = NULL;
      }
      _mesa_error(ctx, GL_OUT_OF_MEMORY, "glProgramStringARB");
      return GL_FALSE;
   }
   memcpy (strz, str, len);
   strz[len] = '\0';

   state->prog->String = strz;

   state->st = _mesa_symbol_table_ctor();

   state->limits = (target == GL_VERTEX_PROGRAM_ARB)
      ? & ctx->Const.Program[MESA_SHADER_VERTEX]
      : & ctx->Const.Program[MESA_SHADER_FRAGMENT];

   state->MaxTextureImageUnits = ctx->Const.Program[MESA_SHADER_FRAGMENT].MaxTextureImageUnits;
   state->MaxTextureCoordUnits = ctx->Const.MaxTextureCoordUnits;
   state->MaxTextureUnits = ctx->Const.MaxTextureUnits;
   state->MaxClipPlanes = ctx->Const.MaxClipPlanes;
   state->MaxLights = ctx->Const.MaxLights;
   state->MaxProgramMatrices = ctx->Const.MaxProgramMatrices;
   state->MaxDrawBuffers = ctx->Const.MaxDrawBuffers;

   state->state_param_enum = (target == GL_VERTEX_PROGRAM_ARB)
      ? STATE_VERTEX_PROGRAM : STATE_FRAGMENT_PROGRAM;

   _mesa_set_program_error(ctx, -1, NULL);

   _mesa_program_lexer_ctor(& state->scanner, state, (const char *) str, len);
   yyparse(state);
   _mesa_program_lexer_dtor(state->scanner);


   if (ctx->Program.ErrorPos != -1) {
      goto error;
   }

   if (! _mesa_layout_parameters(state)) {
      struct YYLTYPE loc;

      loc.first_line = 0;
      loc.first_column = 0;
      loc.position = len;

      yyerror(& loc, state, "invalid PARAM usage");
      goto error;
   }



   /* Add one instruction to store the "END" instruction.
    */
   state->prog->arb.Instructions =
      rzalloc_array(state->mem_ctx, struct prog_instruction,
                    state->prog->arb.NumInstructions + 1);

   if (state->prog->arb.Instructions == NULL) {
      goto error;
   }

   inst = state->inst_head;
   for (i = 0; i < state->prog->arb.NumInstructions; i++) {
      struct asm_instruction *const temp = inst->next;

      state->prog->arb.Instructions[i] = inst->Base;
      inst = temp;
   }

   /* Finally, tag on an OPCODE_END instruction */
   {
      const GLuint numInst = state->prog->arb.NumInstructions;
      _mesa_init_instructions(state->prog->arb.Instructions + numInst, 1);
      state->prog->arb.Instructions[numInst].Opcode = OPCODE_END;
   }
   state->prog->arb.NumInstructions++;

   state->prog->arb.NumParameters = state->prog->Parameters->NumParameters;
   state->prog->arb.NumAttributes =
      util_bitcount64(state->prog->info.inputs_read);

   /*
    * Initialize native counts to logical counts.  The device driver may
    * change them if program is translated into a hardware program.
    */
   state->prog->arb.NumNativeInstructions = state->prog->arb.NumInstructions;
   state->prog->arb.NumNativeTemporaries = state->prog->arb.NumTemporaries;
   state->prog->arb.NumNativeParameters = state->prog->arb.NumParameters;
   state->prog->arb.NumNativeAttributes = state->prog->arb.NumAttributes;
   state->prog->arb.NumNativeAddressRegs = state->prog->arb.NumAddressRegs;

   result = GL_TRUE;

error:
   for (inst = state->inst_head; inst != NULL; inst = temp) {
      temp = inst->next;
      free(inst);
   }

   state->inst_head = NULL;
   state->inst_tail = NULL;

   for (sym = state->sym; sym != NULL; sym = temp) {
      temp = sym->next;

      free((void *) sym->name);
      free(sym);
   }
   state->sym = NULL;

   _mesa_symbol_table_dtor(state->st);
   state->st = NULL;

   if (result != GL_TRUE) {
      if (state->prog->Parameters) {
         _mesa_free_parameter_list(state->prog->Parameters);
         state->prog->Parameters = NULL;
      }
      ralloc_free(state->prog->String);
      state->prog->String = NULL;
   }

   return result;
}
