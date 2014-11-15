$NetBSD$

--- Modules/opcode.h.orig	2014-11-14 22:11:15.251396096 +0000
+++ Modules/opcode.h
@@ -0,0 +1,159 @@
+#ifndef Py_OPCODE_H
+#define Py_OPCODE_H
+#ifdef __cplusplus
+extern "C" {
+#endif
+
+
+/* Instruction opcodes for compiled code */
+
+#define POP_TOP         1
+#define ROT_TWO         2
+#define ROT_THREE       3
+#define DUP_TOP         4
+#define DUP_TOP_TWO     5
+#define NOP             9
+
+#define UNARY_POSITIVE  10
+#define UNARY_NEGATIVE  11
+#define UNARY_NOT       12
+
+#define UNARY_INVERT    15
+
+#define BINARY_POWER    19
+
+#define BINARY_MULTIPLY 20
+
+#define BINARY_MODULO   22
+#define BINARY_ADD      23
+#define BINARY_SUBTRACT 24
+#define BINARY_SUBSCR   25
+#define BINARY_FLOOR_DIVIDE 26
+#define BINARY_TRUE_DIVIDE 27
+#define INPLACE_FLOOR_DIVIDE 28
+#define INPLACE_TRUE_DIVIDE 29
+
+#define STORE_MAP       54
+#define INPLACE_ADD     55
+#define INPLACE_SUBTRACT        56
+#define INPLACE_MULTIPLY        57
+
+#define INPLACE_MODULO  59
+#define STORE_SUBSCR    60
+#define DELETE_SUBSCR   61
+
+#define BINARY_LSHIFT   62
+#define BINARY_RSHIFT   63
+#define BINARY_AND      64
+#define BINARY_XOR      65
+#define BINARY_OR       66
+#define INPLACE_POWER   67
+#define GET_ITER        68
+#define PRINT_EXPR      70
+#define LOAD_BUILD_CLASS 71
+#define YIELD_FROM      72
+
+#define INPLACE_LSHIFT  75
+#define INPLACE_RSHIFT  76
+#define INPLACE_AND     77
+#define INPLACE_XOR     78
+#define INPLACE_OR      79
+#define BREAK_LOOP      80
+#define WITH_CLEANUP    81
+
+#define RETURN_VALUE    83
+#define IMPORT_STAR     84
+
+#define YIELD_VALUE     86
+#define POP_BLOCK       87
+#define END_FINALLY     88
+#define POP_EXCEPT      89
+
+#define HAVE_ARGUMENT   90      /* Opcodes from here have an argument: */
+
+#define STORE_NAME      90      /* Index in name list */
+#define DELETE_NAME     91      /* "" */
+#define UNPACK_SEQUENCE 92      /* Number of sequence items */
+#define FOR_ITER        93
+#define UNPACK_EX       94      /* Num items before variable part +
+                                   (Num items after variable part << 8) */
+
+#define STORE_ATTR      95      /* Index in name list */
+#define DELETE_ATTR     96      /* "" */
+#define STORE_GLOBAL    97      /* "" */
+#define DELETE_GLOBAL   98      /* "" */
+
+#define LOAD_CONST      100     /* Index in const list */
+#define LOAD_NAME       101     /* Index in name list */
+#define BUILD_TUPLE     102     /* Number of tuple items */
+#define BUILD_LIST      103     /* Number of list items */
+#define BUILD_SET       104     /* Number of set items */
+#define BUILD_MAP       105     /* Always zero for now */
+#define LOAD_ATTR       106     /* Index in name list */
+#define COMPARE_OP      107     /* Comparison operator */
+#define IMPORT_NAME     108     /* Index in name list */
+#define IMPORT_FROM     109     /* Index in name list */
+
+#define JUMP_FORWARD    110     /* Number of bytes to skip */
+#define JUMP_IF_FALSE_OR_POP 111        /* Target byte offset from beginning of code */
+#define JUMP_IF_TRUE_OR_POP 112 /* "" */
+#define JUMP_ABSOLUTE   113     /* "" */
+#define POP_JUMP_IF_FALSE 114   /* "" */
+#define POP_JUMP_IF_TRUE 115    /* "" */
+
+#define LOAD_GLOBAL     116     /* Index in name list */
+
+#define CONTINUE_LOOP   119     /* Start of loop (absolute) */
+#define SETUP_LOOP      120     /* Target address (relative) */
+#define SETUP_EXCEPT    121     /* "" */
+#define SETUP_FINALLY   122     /* "" */
+
+#define LOAD_FAST       124     /* Local variable number */
+#define STORE_FAST      125     /* Local variable number */
+#define DELETE_FAST     126     /* Local variable number */
+
+#define RAISE_VARARGS   130     /* Number of raise arguments (1, 2 or 3) */
+/* CALL_FUNCTION_XXX opcodes defined below depend on this definition */
+#define CALL_FUNCTION   131     /* #args + (#kwargs<<8) */
+#define MAKE_FUNCTION   132     /* #defaults + #kwdefaults<<8 + #annotations<<16 */
+#define BUILD_SLICE     133     /* Number of items */
+
+#define MAKE_CLOSURE    134     /* same as MAKE_FUNCTION */
+#define LOAD_CLOSURE    135     /* Load free variable from closure */
+#define LOAD_DEREF      136     /* Load and dereference from closure cell */ 
+#define STORE_DEREF     137     /* Store into cell */ 
+#define DELETE_DEREF    138     /* Delete closure cell */ 
+
+/* The next 3 opcodes must be contiguous and satisfy
+   (CALL_FUNCTION_VAR - CALL_FUNCTION) & 3 == 1  */
+#define CALL_FUNCTION_VAR          140  /* #args + (#kwargs<<8) */
+#define CALL_FUNCTION_KW           141  /* #args + (#kwargs<<8) */
+#define CALL_FUNCTION_VAR_KW       142  /* #args + (#kwargs<<8) */
+
+#define SETUP_WITH 143
+
+/* Support for opargs more than 16 bits long */
+#define EXTENDED_ARG  144
+
+#define LIST_APPEND     145
+#define SET_ADD         146
+#define MAP_ADD         147
+
+#define LOAD_CLASSDEREF   148
+
+/* EXCEPT_HANDLER is a special, implicit block type which is created when
+   entering an except handler. It is not an opcode but we define it here
+   as we want it to be available to both frameobject.c and ceval.c, while
+   remaining private.*/
+#define EXCEPT_HANDLER 257
+
+
+enum cmp_op {PyCmp_LT=Py_LT, PyCmp_LE=Py_LE, PyCmp_EQ=Py_EQ, PyCmp_NE=Py_NE, PyCmp_GT=Py_GT, PyCmp_GE=Py_GE,
+             PyCmp_IN, PyCmp_NOT_IN, PyCmp_IS, PyCmp_IS_NOT, PyCmp_EXC_MATCH, PyCmp_BAD};
+
+#define HAS_ARG(op) ((op) >= HAVE_ARGUMENT)
+
+#ifdef __cplusplus
+}
+#endif
+#endif /* !Py_OPCODE_H */
