// This file is generated by Tools/cases_generator/generate_cases.py
// from:
//   Python/bytecodes.c
// Do not edit!

#ifndef NEED_OPCODE_METADATA
extern int _PyOpcode_num_popped(int opcode, int oparg, bool jump);
#else
int
_PyOpcode_num_popped(int opcode, int oparg, bool jump) {
    switch(opcode) {
        case NOP:
            return 0;
        case RESUME:
            return 0;
        case INSTRUMENTED_RESUME:
            return 0;
        case LOAD_CLOSURE:
            return 0;
        case LOAD_FAST_CHECK:
            return 0;
        case LOAD_FAST:
            return 0;
        case LOAD_FAST_AND_CLEAR:
            return 0;
        case LOAD_CONST:
            return 0;
        case STORE_FAST:
            return 1;
        case LOAD_FAST__LOAD_FAST:
            return 0+0;
        case LOAD_FAST__LOAD_CONST:
            return 0+0;
        case STORE_FAST__LOAD_FAST:
            return 1+0;
        case STORE_FAST__STORE_FAST:
            return 1+1;
        case LOAD_CONST__LOAD_FAST:
            return 0+0;
        case POP_TOP:
            return 1;
        case PUSH_NULL:
            return 0;
        case END_FOR:
            return 2;
        case INSTRUMENTED_END_FOR:
            return 2;
        case END_SEND:
            return 2;
        case INSTRUMENTED_END_SEND:
            return 2;
        case UNARY_NEGATIVE:
            return 1;
        case UNARY_NOT:
            return 1;
        case UNARY_INVERT:
            return 1;
        case BINARY_OP_MULTIPLY_INT:
            return 2;
        case BINARY_OP_ADD_INT:
            return 2;
        case BINARY_OP_SUBTRACT_INT:
            return 2;
        case BINARY_OP_MULTIPLY_FLOAT:
            return 2;
        case BINARY_OP_ADD_FLOAT:
            return 2;
        case BINARY_OP_SUBTRACT_FLOAT:
            return 2;
        case BINARY_OP_ADD_UNICODE:
            return 2;
        case BINARY_OP_INPLACE_ADD_UNICODE:
            return 2;
        case BINARY_SUBSCR:
            return 2;
        case BINARY_SLICE:
            return 3;
        case STORE_SLICE:
            return 4;
        case BINARY_SUBSCR_LIST_INT:
            return 2;
        case BINARY_SUBSCR_TUPLE_INT:
            return 2;
        case BINARY_SUBSCR_DICT:
            return 2;
        case BINARY_SUBSCR_GETITEM:
            return 2;
        case LIST_APPEND:
            return (oparg-1) + 2;
        case SET_ADD:
            return (oparg-1) + 2;
        case STORE_SUBSCR:
            return 3;
        case STORE_SUBSCR_LIST_INT:
            return 3;
        case STORE_SUBSCR_DICT:
            return 3;
        case DELETE_SUBSCR:
            return 2;
        case CALL_INTRINSIC_1:
            return 1;
        case CALL_INTRINSIC_2:
            return 2;
        case RAISE_VARARGS:
            return oparg;
        case INTERPRETER_EXIT:
            return 1;
        case RETURN_VALUE:
            return 1;
        case INSTRUMENTED_RETURN_VALUE:
            return 1;
        case RETURN_CONST:
            return 0;
        case INSTRUMENTED_RETURN_CONST:
            return 0;
        case GET_AITER:
            return 1;
        case GET_ANEXT:
            return 1;
        case GET_AWAITABLE:
            return 1;
        case SEND:
            return 2;
        case SEND_GEN:
            return 2;
        case INSTRUMENTED_YIELD_VALUE:
            return 1;
        case YIELD_VALUE:
            return 1;
        case POP_EXCEPT:
            return 1;
        case RERAISE:
            return oparg + 1;
        case END_ASYNC_FOR:
            return 2;
        case CLEANUP_THROW:
            return 3;
        case LOAD_ASSERTION_ERROR:
            return 0;
        case LOAD_BUILD_CLASS:
            return 0;
        case STORE_NAME:
            return 1;
        case DELETE_NAME:
            return 0;
        case UNPACK_SEQUENCE:
            return 1;
        case UNPACK_SEQUENCE_TWO_TUPLE:
            return 1;
        case UNPACK_SEQUENCE_TUPLE:
            return 1;
        case UNPACK_SEQUENCE_LIST:
            return 1;
        case UNPACK_EX:
            return 1;
        case STORE_ATTR:
            return 2;
        case DELETE_ATTR:
            return 1;
        case STORE_GLOBAL:
            return 1;
        case DELETE_GLOBAL:
            return 0;
        case LOAD_LOCALS:
            return 0;
        case LOAD_NAME:
            return 0;
        case LOAD_FROM_DICT_OR_GLOBALS:
            return 1;
        case LOAD_GLOBAL:
            return 0;
        case LOAD_GLOBAL_MODULE:
            return 0;
        case LOAD_GLOBAL_BUILTIN:
            return 0;
        case DELETE_FAST:
            return 0;
        case MAKE_CELL:
            return 0;
        case DELETE_DEREF:
            return 0;
        case LOAD_FROM_DICT_OR_DEREF:
            return 1;
        case LOAD_DEREF:
            return 0;
        case STORE_DEREF:
            return 1;
        case COPY_FREE_VARS:
            return 0;
        case BUILD_STRING:
            return oparg;
        case BUILD_TUPLE:
            return oparg;
        case BUILD_LIST:
            return oparg;
        case LIST_EXTEND:
            return (oparg-1) + 2;
        case SET_UPDATE:
            return (oparg-1) + 2;
        case BUILD_SET:
            return oparg;
        case BUILD_MAP:
            return oparg*2;
        case SETUP_ANNOTATIONS:
            return 0;
        case BUILD_CONST_KEY_MAP:
            return oparg + 1;
        case DICT_UPDATE:
            return 1;
        case DICT_MERGE:
            return 1;
        case MAP_ADD:
            return 2;
        case INSTRUMENTED_LOAD_SUPER_ATTR:
            return 3;
        case LOAD_SUPER_ATTR:
            return 3;
        case LOAD_SUPER_ATTR_ATTR:
            return 3;
        case LOAD_SUPER_ATTR_METHOD:
            return 3;
        case LOAD_ATTR:
            return 1;
        case LOAD_ATTR_INSTANCE_VALUE:
            return 1;
        case LOAD_ATTR_MODULE:
            return 1;
        case LOAD_ATTR_WITH_HINT:
            return 1;
        case LOAD_ATTR_SLOT:
            return 1;
        case LOAD_ATTR_CLASS:
            return 1;
        case LOAD_ATTR_PROPERTY:
            return 1;
        case LOAD_ATTR_GETATTRIBUTE_OVERRIDDEN:
            return 1;
        case STORE_ATTR_INSTANCE_VALUE:
            return 2;
        case STORE_ATTR_WITH_HINT:
            return 2;
        case STORE_ATTR_SLOT:
            return 2;
        case COMPARE_OP:
            return 2;
        case COMPARE_OP_FLOAT:
            return 2;
        case COMPARE_OP_INT:
            return 2;
        case COMPARE_OP_STR:
            return 2;
        case IS_OP:
            return 2;
        case CONTAINS_OP:
            return 2;
        case CHECK_EG_MATCH:
            return 2;
        case CHECK_EXC_MATCH:
            return 2;
        case IMPORT_NAME:
            return 2;
        case IMPORT_FROM:
            return 1;
        case JUMP_FORWARD:
            return 0;
        case JUMP_BACKWARD:
            return 0;
        case ENTER_EXECUTOR:
            return 0;
        case POP_JUMP_IF_FALSE:
            return 1;
        case POP_JUMP_IF_TRUE:
            return 1;
        case POP_JUMP_IF_NOT_NONE:
            return 1;
        case POP_JUMP_IF_NONE:
            return 1;
        case JUMP_BACKWARD_NO_INTERRUPT:
            return 0;
        case GET_LEN:
            return 1;
        case MATCH_CLASS:
            return 3;
        case MATCH_MAPPING:
            return 1;
        case MATCH_SEQUENCE:
            return 1;
        case MATCH_KEYS:
            return 2;
        case GET_ITER:
            return 1;
        case GET_YIELD_FROM_ITER:
            return 1;
        case FOR_ITER:
            return 1;
        case INSTRUMENTED_FOR_ITER:
            return 0;
        case FOR_ITER_LIST:
            return 1;
        case FOR_ITER_TUPLE:
            return 1;
        case FOR_ITER_RANGE:
            return 1;
        case FOR_ITER_GEN:
            return 1;
        case BEFORE_ASYNC_WITH:
            return 1;
        case BEFORE_WITH:
            return 1;
        case WITH_EXCEPT_START:
            return 4;
        case PUSH_EXC_INFO:
            return 1;
        case LOAD_ATTR_METHOD_WITH_VALUES:
            return 1;
        case LOAD_ATTR_METHOD_NO_DICT:
            return 1;
        case LOAD_ATTR_METHOD_LAZY_DICT:
            return 1;
        case KW_NAMES:
            return 0;
        case INSTRUMENTED_CALL:
            return 0;
        case CALL:
            return oparg + 2;
        case CALL_BOUND_METHOD_EXACT_ARGS:
            return oparg + 2;
        case CALL_PY_EXACT_ARGS:
            return oparg + 2;
        case CALL_PY_WITH_DEFAULTS:
            return oparg + 2;
        case CALL_NO_KW_TYPE_1:
            return oparg + 2;
        case CALL_NO_KW_STR_1:
            return oparg + 2;
        case CALL_NO_KW_TUPLE_1:
            return oparg + 2;
        case CALL_BUILTIN_CLASS:
            return oparg + 2;
        case CALL_NO_KW_BUILTIN_O:
            return oparg + 2;
        case CALL_NO_KW_BUILTIN_FAST:
            return oparg + 2;
        case CALL_BUILTIN_FAST_WITH_KEYWORDS:
            return oparg + 2;
        case CALL_NO_KW_LEN:
            return oparg + 2;
        case CALL_NO_KW_ISINSTANCE:
            return oparg + 2;
        case CALL_NO_KW_LIST_APPEND:
            return oparg + 2;
        case CALL_NO_KW_METHOD_DESCRIPTOR_O:
            return oparg + 2;
        case CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS:
            return oparg + 2;
        case CALL_NO_KW_METHOD_DESCRIPTOR_NOARGS:
            return oparg + 2;
        case CALL_NO_KW_METHOD_DESCRIPTOR_FAST:
            return oparg + 2;
        case INSTRUMENTED_CALL_FUNCTION_EX:
            return 0;
        case CALL_FUNCTION_EX:
            return ((oparg & 1) ? 1 : 0) + 3;
        case MAKE_FUNCTION:
            return ((oparg & MAKE_FUNCTION_DEFAULTS) ? 1 : 0) + ((oparg & MAKE_FUNCTION_KWDEFAULTS) ? 1 : 0) + ((oparg & MAKE_FUNCTION_ANNOTATIONS) ? 1 : 0) + ((oparg & MAKE_FUNCTION_CLOSURE) ? 1 : 0) + 1;
        case RETURN_GENERATOR:
            return 0;
        case BUILD_SLICE:
            return ((oparg == 3) ? 1 : 0) + 2;
        case FORMAT_VALUE:
            return (((oparg & FVS_MASK) == FVS_HAVE_SPEC) ? 1 : 0) + 1;
        case COPY:
            return (oparg-1) + 1;
        case BINARY_OP:
            return 2;
        case SWAP:
            return (oparg-2) + 2;
        case INSTRUMENTED_INSTRUCTION:
            return 0;
        case INSTRUMENTED_JUMP_FORWARD:
            return 0;
        case INSTRUMENTED_JUMP_BACKWARD:
            return 0;
        case INSTRUMENTED_POP_JUMP_IF_TRUE:
            return 0;
        case INSTRUMENTED_POP_JUMP_IF_FALSE:
            return 0;
        case INSTRUMENTED_POP_JUMP_IF_NONE:
            return 0;
        case INSTRUMENTED_POP_JUMP_IF_NOT_NONE:
            return 0;
        case EXTENDED_ARG:
            return 0;
        case CACHE:
            return 0;
        case RESERVED:
            return 0;
        default:
            return -1;
    }
}
#endif

#ifndef NEED_OPCODE_METADATA
extern int _PyOpcode_num_pushed(int opcode, int oparg, bool jump);
#else
int
_PyOpcode_num_pushed(int opcode, int oparg, bool jump) {
    switch(opcode) {
        case NOP:
            return 0;
        case RESUME:
            return 0;
        case INSTRUMENTED_RESUME:
            return 0;
        case LOAD_CLOSURE:
            return 1;
        case LOAD_FAST_CHECK:
            return 1;
        case LOAD_FAST:
            return 1;
        case LOAD_FAST_AND_CLEAR:
            return 1;
        case LOAD_CONST:
            return 1;
        case STORE_FAST:
            return 0;
        case LOAD_FAST__LOAD_FAST:
            return 1+1;
        case LOAD_FAST__LOAD_CONST:
            return 1+1;
        case STORE_FAST__LOAD_FAST:
            return 0+1;
        case STORE_FAST__STORE_FAST:
            return 0+0;
        case LOAD_CONST__LOAD_FAST:
            return 1+1;
        case POP_TOP:
            return 0;
        case PUSH_NULL:
            return 1;
        case END_FOR:
            return 0;
        case INSTRUMENTED_END_FOR:
            return 0;
        case END_SEND:
            return 1;
        case INSTRUMENTED_END_SEND:
            return 1;
        case UNARY_NEGATIVE:
            return 1;
        case UNARY_NOT:
            return 1;
        case UNARY_INVERT:
            return 1;
        case BINARY_OP_MULTIPLY_INT:
            return 1;
        case BINARY_OP_ADD_INT:
            return 1;
        case BINARY_OP_SUBTRACT_INT:
            return 1;
        case BINARY_OP_MULTIPLY_FLOAT:
            return 1;
        case BINARY_OP_ADD_FLOAT:
            return 1;
        case BINARY_OP_SUBTRACT_FLOAT:
            return 1;
        case BINARY_OP_ADD_UNICODE:
            return 1;
        case BINARY_OP_INPLACE_ADD_UNICODE:
            return 0;
        case BINARY_SUBSCR:
            return 1;
        case BINARY_SLICE:
            return 1;
        case STORE_SLICE:
            return 0;
        case BINARY_SUBSCR_LIST_INT:
            return 1;
        case BINARY_SUBSCR_TUPLE_INT:
            return 1;
        case BINARY_SUBSCR_DICT:
            return 1;
        case BINARY_SUBSCR_GETITEM:
            return 1;
        case LIST_APPEND:
            return (oparg-1) + 1;
        case SET_ADD:
            return (oparg-1) + 1;
        case STORE_SUBSCR:
            return 0;
        case STORE_SUBSCR_LIST_INT:
            return 0;
        case STORE_SUBSCR_DICT:
            return 0;
        case DELETE_SUBSCR:
            return 0;
        case CALL_INTRINSIC_1:
            return 1;
        case CALL_INTRINSIC_2:
            return 1;
        case RAISE_VARARGS:
            return 0;
        case INTERPRETER_EXIT:
            return 0;
        case RETURN_VALUE:
            return 0;
        case INSTRUMENTED_RETURN_VALUE:
            return 0;
        case RETURN_CONST:
            return 0;
        case INSTRUMENTED_RETURN_CONST:
            return 0;
        case GET_AITER:
            return 1;
        case GET_ANEXT:
            return 2;
        case GET_AWAITABLE:
            return 1;
        case SEND:
            return 2;
        case SEND_GEN:
            return 2;
        case INSTRUMENTED_YIELD_VALUE:
            return 1;
        case YIELD_VALUE:
            return 1;
        case POP_EXCEPT:
            return 0;
        case RERAISE:
            return oparg;
        case END_ASYNC_FOR:
            return 0;
        case CLEANUP_THROW:
            return 2;
        case LOAD_ASSERTION_ERROR:
            return 1;
        case LOAD_BUILD_CLASS:
            return 1;
        case STORE_NAME:
            return 0;
        case DELETE_NAME:
            return 0;
        case UNPACK_SEQUENCE:
            return oparg;
        case UNPACK_SEQUENCE_TWO_TUPLE:
            return oparg;
        case UNPACK_SEQUENCE_TUPLE:
            return oparg;
        case UNPACK_SEQUENCE_LIST:
            return oparg;
        case UNPACK_EX:
            return (oparg & 0xFF) + (oparg >> 8) + 1;
        case STORE_ATTR:
            return 0;
        case DELETE_ATTR:
            return 0;
        case STORE_GLOBAL:
            return 0;
        case DELETE_GLOBAL:
            return 0;
        case LOAD_LOCALS:
            return 1;
        case LOAD_NAME:
            return 1;
        case LOAD_FROM_DICT_OR_GLOBALS:
            return 1;
        case LOAD_GLOBAL:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_GLOBAL_MODULE:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_GLOBAL_BUILTIN:
            return ((oparg & 1) ? 1 : 0) + 1;
        case DELETE_FAST:
            return 0;
        case MAKE_CELL:
            return 0;
        case DELETE_DEREF:
            return 0;
        case LOAD_FROM_DICT_OR_DEREF:
            return 1;
        case LOAD_DEREF:
            return 1;
        case STORE_DEREF:
            return 0;
        case COPY_FREE_VARS:
            return 0;
        case BUILD_STRING:
            return 1;
        case BUILD_TUPLE:
            return 1;
        case BUILD_LIST:
            return 1;
        case LIST_EXTEND:
            return (oparg-1) + 1;
        case SET_UPDATE:
            return (oparg-1) + 1;
        case BUILD_SET:
            return 1;
        case BUILD_MAP:
            return 1;
        case SETUP_ANNOTATIONS:
            return 0;
        case BUILD_CONST_KEY_MAP:
            return 1;
        case DICT_UPDATE:
            return 0;
        case DICT_MERGE:
            return 0;
        case MAP_ADD:
            return 0;
        case INSTRUMENTED_LOAD_SUPER_ATTR:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_SUPER_ATTR:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_SUPER_ATTR_ATTR:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_SUPER_ATTR_METHOD:
            return 2;
        case LOAD_ATTR:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_ATTR_INSTANCE_VALUE:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_ATTR_MODULE:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_ATTR_WITH_HINT:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_ATTR_SLOT:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_ATTR_CLASS:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_ATTR_PROPERTY:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_ATTR_GETATTRIBUTE_OVERRIDDEN:
            return ((oparg & 1) ? 1 : 0) + 1;
        case STORE_ATTR_INSTANCE_VALUE:
            return 0;
        case STORE_ATTR_WITH_HINT:
            return 0;
        case STORE_ATTR_SLOT:
            return 0;
        case COMPARE_OP:
            return 1;
        case COMPARE_OP_FLOAT:
            return 1;
        case COMPARE_OP_INT:
            return 1;
        case COMPARE_OP_STR:
            return 1;
        case IS_OP:
            return 1;
        case CONTAINS_OP:
            return 1;
        case CHECK_EG_MATCH:
            return 2;
        case CHECK_EXC_MATCH:
            return 2;
        case IMPORT_NAME:
            return 1;
        case IMPORT_FROM:
            return 2;
        case JUMP_FORWARD:
            return 0;
        case JUMP_BACKWARD:
            return 0;
        case ENTER_EXECUTOR:
            return 0;
        case POP_JUMP_IF_FALSE:
            return 0;
        case POP_JUMP_IF_TRUE:
            return 0;
        case POP_JUMP_IF_NOT_NONE:
            return 0;
        case POP_JUMP_IF_NONE:
            return 0;
        case JUMP_BACKWARD_NO_INTERRUPT:
            return 0;
        case GET_LEN:
            return 2;
        case MATCH_CLASS:
            return 1;
        case MATCH_MAPPING:
            return 2;
        case MATCH_SEQUENCE:
            return 2;
        case MATCH_KEYS:
            return 3;
        case GET_ITER:
            return 1;
        case GET_YIELD_FROM_ITER:
            return 1;
        case FOR_ITER:
            return 2;
        case INSTRUMENTED_FOR_ITER:
            return 0;
        case FOR_ITER_LIST:
            return 2;
        case FOR_ITER_TUPLE:
            return 2;
        case FOR_ITER_RANGE:
            return 2;
        case FOR_ITER_GEN:
            return 2;
        case BEFORE_ASYNC_WITH:
            return 2;
        case BEFORE_WITH:
            return 2;
        case WITH_EXCEPT_START:
            return 5;
        case PUSH_EXC_INFO:
            return 2;
        case LOAD_ATTR_METHOD_WITH_VALUES:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_ATTR_METHOD_NO_DICT:
            return ((oparg & 1) ? 1 : 0) + 1;
        case LOAD_ATTR_METHOD_LAZY_DICT:
            return ((oparg & 1) ? 1 : 0) + 1;
        case KW_NAMES:
            return 0;
        case INSTRUMENTED_CALL:
            return 0;
        case CALL:
            return 1;
        case CALL_BOUND_METHOD_EXACT_ARGS:
            return 1;
        case CALL_PY_EXACT_ARGS:
            return 1;
        case CALL_PY_WITH_DEFAULTS:
            return 1;
        case CALL_NO_KW_TYPE_1:
            return 1;
        case CALL_NO_KW_STR_1:
            return 1;
        case CALL_NO_KW_TUPLE_1:
            return 1;
        case CALL_BUILTIN_CLASS:
            return 1;
        case CALL_NO_KW_BUILTIN_O:
            return 1;
        case CALL_NO_KW_BUILTIN_FAST:
            return 1;
        case CALL_BUILTIN_FAST_WITH_KEYWORDS:
            return 1;
        case CALL_NO_KW_LEN:
            return 1;
        case CALL_NO_KW_ISINSTANCE:
            return 1;
        case CALL_NO_KW_LIST_APPEND:
            return 1;
        case CALL_NO_KW_METHOD_DESCRIPTOR_O:
            return 1;
        case CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS:
            return 1;
        case CALL_NO_KW_METHOD_DESCRIPTOR_NOARGS:
            return 1;
        case CALL_NO_KW_METHOD_DESCRIPTOR_FAST:
            return 1;
        case INSTRUMENTED_CALL_FUNCTION_EX:
            return 0;
        case CALL_FUNCTION_EX:
            return 1;
        case MAKE_FUNCTION:
            return 1;
        case RETURN_GENERATOR:
            return 0;
        case BUILD_SLICE:
            return 1;
        case FORMAT_VALUE:
            return 1;
        case COPY:
            return (oparg-1) + 2;
        case BINARY_OP:
            return 1;
        case SWAP:
            return (oparg-2) + 2;
        case INSTRUMENTED_INSTRUCTION:
            return 0;
        case INSTRUMENTED_JUMP_FORWARD:
            return 0;
        case INSTRUMENTED_JUMP_BACKWARD:
            return 0;
        case INSTRUMENTED_POP_JUMP_IF_TRUE:
            return 0;
        case INSTRUMENTED_POP_JUMP_IF_FALSE:
            return 0;
        case INSTRUMENTED_POP_JUMP_IF_NONE:
            return 0;
        case INSTRUMENTED_POP_JUMP_IF_NOT_NONE:
            return 0;
        case EXTENDED_ARG:
            return 0;
        case CACHE:
            return 0;
        case RESERVED:
            return 0;
        default:
            return -1;
    }
}
#endif

enum InstructionFormat { INSTR_FMT_IB, INSTR_FMT_IBC, INSTR_FMT_IBC00, INSTR_FMT_IBC000, INSTR_FMT_IBC00000000, INSTR_FMT_IBIB, INSTR_FMT_IX, INSTR_FMT_IXC, INSTR_FMT_IXC000 };
struct opcode_metadata {
    bool valid_entry;
    enum InstructionFormat instr_format;
};

#ifndef NEED_OPCODE_METADATA
extern const struct opcode_metadata _PyOpcode_opcode_metadata[256];
#else
const struct opcode_metadata _PyOpcode_opcode_metadata[256] = {
    [NOP] = { true, INSTR_FMT_IX },
    [RESUME] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_RESUME] = { true, INSTR_FMT_IB },
    [LOAD_CLOSURE] = { true, INSTR_FMT_IB },
    [LOAD_FAST_CHECK] = { true, INSTR_FMT_IB },
    [LOAD_FAST] = { true, INSTR_FMT_IB },
    [LOAD_FAST_AND_CLEAR] = { true, INSTR_FMT_IB },
    [LOAD_CONST] = { true, INSTR_FMT_IB },
    [STORE_FAST] = { true, INSTR_FMT_IB },
    [LOAD_FAST__LOAD_FAST] = { true, INSTR_FMT_IBIB },
    [LOAD_FAST__LOAD_CONST] = { true, INSTR_FMT_IBIB },
    [STORE_FAST__LOAD_FAST] = { true, INSTR_FMT_IBIB },
    [STORE_FAST__STORE_FAST] = { true, INSTR_FMT_IBIB },
    [LOAD_CONST__LOAD_FAST] = { true, INSTR_FMT_IBIB },
    [POP_TOP] = { true, INSTR_FMT_IX },
    [PUSH_NULL] = { true, INSTR_FMT_IX },
    [END_FOR] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_END_FOR] = { true, INSTR_FMT_IX },
    [END_SEND] = { true, INSTR_FMT_IX },
    [INSTRUMENTED_END_SEND] = { true, INSTR_FMT_IX },
    [UNARY_NEGATIVE] = { true, INSTR_FMT_IX },
    [UNARY_NOT] = { true, INSTR_FMT_IX },
    [UNARY_INVERT] = { true, INSTR_FMT_IX },
    [BINARY_OP_MULTIPLY_INT] = { true, INSTR_FMT_IBC },
    [BINARY_OP_ADD_INT] = { true, INSTR_FMT_IBC },
    [BINARY_OP_SUBTRACT_INT] = { true, INSTR_FMT_IBC },
    [BINARY_OP_MULTIPLY_FLOAT] = { true, INSTR_FMT_IBC },
    [BINARY_OP_ADD_FLOAT] = { true, INSTR_FMT_IBC },
    [BINARY_OP_SUBTRACT_FLOAT] = { true, INSTR_FMT_IBC },
    [BINARY_OP_ADD_UNICODE] = { true, INSTR_FMT_IBC },
    [BINARY_OP_INPLACE_ADD_UNICODE] = { true, INSTR_FMT_IB },
    [BINARY_SUBSCR] = { true, INSTR_FMT_IXC },
    [BINARY_SLICE] = { true, INSTR_FMT_IX },
    [STORE_SLICE] = { true, INSTR_FMT_IX },
    [BINARY_SUBSCR_LIST_INT] = { true, INSTR_FMT_IXC },
    [BINARY_SUBSCR_TUPLE_INT] = { true, INSTR_FMT_IXC },
    [BINARY_SUBSCR_DICT] = { true, INSTR_FMT_IXC },
    [BINARY_SUBSCR_GETITEM] = { true, INSTR_FMT_IXC },
    [LIST_APPEND] = { true, INSTR_FMT_IB },
    [SET_ADD] = { true, INSTR_FMT_IB },
    [STORE_SUBSCR] = { true, INSTR_FMT_IXC },
    [STORE_SUBSCR_LIST_INT] = { true, INSTR_FMT_IXC },
    [STORE_SUBSCR_DICT] = { true, INSTR_FMT_IXC },
    [DELETE_SUBSCR] = { true, INSTR_FMT_IX },
    [CALL_INTRINSIC_1] = { true, INSTR_FMT_IB },
    [CALL_INTRINSIC_2] = { true, INSTR_FMT_IB },
    [RAISE_VARARGS] = { true, INSTR_FMT_IB },
    [INTERPRETER_EXIT] = { true, INSTR_FMT_IX },
    [RETURN_VALUE] = { true, INSTR_FMT_IX },
    [INSTRUMENTED_RETURN_VALUE] = { true, INSTR_FMT_IX },
    [RETURN_CONST] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_RETURN_CONST] = { true, INSTR_FMT_IB },
    [GET_AITER] = { true, INSTR_FMT_IX },
    [GET_ANEXT] = { true, INSTR_FMT_IX },
    [GET_AWAITABLE] = { true, INSTR_FMT_IB },
    [SEND] = { true, INSTR_FMT_IBC },
    [SEND_GEN] = { true, INSTR_FMT_IBC },
    [INSTRUMENTED_YIELD_VALUE] = { true, INSTR_FMT_IX },
    [YIELD_VALUE] = { true, INSTR_FMT_IX },
    [POP_EXCEPT] = { true, INSTR_FMT_IX },
    [RERAISE] = { true, INSTR_FMT_IB },
    [END_ASYNC_FOR] = { true, INSTR_FMT_IX },
    [CLEANUP_THROW] = { true, INSTR_FMT_IX },
    [LOAD_ASSERTION_ERROR] = { true, INSTR_FMT_IX },
    [LOAD_BUILD_CLASS] = { true, INSTR_FMT_IX },
    [STORE_NAME] = { true, INSTR_FMT_IB },
    [DELETE_NAME] = { true, INSTR_FMT_IB },
    [UNPACK_SEQUENCE] = { true, INSTR_FMT_IBC },
    [UNPACK_SEQUENCE_TWO_TUPLE] = { true, INSTR_FMT_IBC },
    [UNPACK_SEQUENCE_TUPLE] = { true, INSTR_FMT_IBC },
    [UNPACK_SEQUENCE_LIST] = { true, INSTR_FMT_IBC },
    [UNPACK_EX] = { true, INSTR_FMT_IB },
    [STORE_ATTR] = { true, INSTR_FMT_IBC000 },
    [DELETE_ATTR] = { true, INSTR_FMT_IB },
    [STORE_GLOBAL] = { true, INSTR_FMT_IB },
    [DELETE_GLOBAL] = { true, INSTR_FMT_IB },
    [LOAD_LOCALS] = { true, INSTR_FMT_IB },
    [LOAD_NAME] = { true, INSTR_FMT_IB },
    [LOAD_FROM_DICT_OR_GLOBALS] = { true, INSTR_FMT_IB },
    [LOAD_GLOBAL] = { true, INSTR_FMT_IBC000 },
    [LOAD_GLOBAL_MODULE] = { true, INSTR_FMT_IBC000 },
    [LOAD_GLOBAL_BUILTIN] = { true, INSTR_FMT_IBC000 },
    [DELETE_FAST] = { true, INSTR_FMT_IB },
    [MAKE_CELL] = { true, INSTR_FMT_IB },
    [DELETE_DEREF] = { true, INSTR_FMT_IB },
    [LOAD_FROM_DICT_OR_DEREF] = { true, INSTR_FMT_IB },
    [LOAD_DEREF] = { true, INSTR_FMT_IB },
    [STORE_DEREF] = { true, INSTR_FMT_IB },
    [COPY_FREE_VARS] = { true, INSTR_FMT_IB },
    [BUILD_STRING] = { true, INSTR_FMT_IB },
    [BUILD_TUPLE] = { true, INSTR_FMT_IB },
    [BUILD_LIST] = { true, INSTR_FMT_IB },
    [LIST_EXTEND] = { true, INSTR_FMT_IB },
    [SET_UPDATE] = { true, INSTR_FMT_IB },
    [BUILD_SET] = { true, INSTR_FMT_IB },
    [BUILD_MAP] = { true, INSTR_FMT_IB },
    [SETUP_ANNOTATIONS] = { true, INSTR_FMT_IX },
    [BUILD_CONST_KEY_MAP] = { true, INSTR_FMT_IB },
    [DICT_UPDATE] = { true, INSTR_FMT_IB },
    [DICT_MERGE] = { true, INSTR_FMT_IB },
    [MAP_ADD] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_LOAD_SUPER_ATTR] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_SUPER_ATTR] = { true, INSTR_FMT_IBC },
    [LOAD_SUPER_ATTR_ATTR] = { true, INSTR_FMT_IBC },
    [LOAD_SUPER_ATTR_METHOD] = { true, INSTR_FMT_IBC },
    [LOAD_ATTR] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_ATTR_INSTANCE_VALUE] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_ATTR_MODULE] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_ATTR_WITH_HINT] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_ATTR_SLOT] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_ATTR_CLASS] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_ATTR_PROPERTY] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_ATTR_GETATTRIBUTE_OVERRIDDEN] = { true, INSTR_FMT_IBC00000000 },
    [STORE_ATTR_INSTANCE_VALUE] = { true, INSTR_FMT_IXC000 },
    [STORE_ATTR_WITH_HINT] = { true, INSTR_FMT_IBC000 },
    [STORE_ATTR_SLOT] = { true, INSTR_FMT_IXC000 },
    [COMPARE_OP] = { true, INSTR_FMT_IBC },
    [COMPARE_OP_FLOAT] = { true, INSTR_FMT_IBC },
    [COMPARE_OP_INT] = { true, INSTR_FMT_IBC },
    [COMPARE_OP_STR] = { true, INSTR_FMT_IBC },
    [IS_OP] = { true, INSTR_FMT_IB },
    [CONTAINS_OP] = { true, INSTR_FMT_IB },
    [CHECK_EG_MATCH] = { true, INSTR_FMT_IX },
    [CHECK_EXC_MATCH] = { true, INSTR_FMT_IX },
    [IMPORT_NAME] = { true, INSTR_FMT_IB },
    [IMPORT_FROM] = { true, INSTR_FMT_IB },
    [JUMP_FORWARD] = { true, INSTR_FMT_IB },
    [JUMP_BACKWARD] = { true, INSTR_FMT_IB },
    [ENTER_EXECUTOR] = { true, INSTR_FMT_IB },
    [POP_JUMP_IF_FALSE] = { true, INSTR_FMT_IB },
    [POP_JUMP_IF_TRUE] = { true, INSTR_FMT_IB },
    [POP_JUMP_IF_NOT_NONE] = { true, INSTR_FMT_IB },
    [POP_JUMP_IF_NONE] = { true, INSTR_FMT_IB },
    [JUMP_BACKWARD_NO_INTERRUPT] = { true, INSTR_FMT_IB },
    [GET_LEN] = { true, INSTR_FMT_IX },
    [MATCH_CLASS] = { true, INSTR_FMT_IB },
    [MATCH_MAPPING] = { true, INSTR_FMT_IX },
    [MATCH_SEQUENCE] = { true, INSTR_FMT_IX },
    [MATCH_KEYS] = { true, INSTR_FMT_IX },
    [GET_ITER] = { true, INSTR_FMT_IX },
    [GET_YIELD_FROM_ITER] = { true, INSTR_FMT_IX },
    [FOR_ITER] = { true, INSTR_FMT_IBC },
    [INSTRUMENTED_FOR_ITER] = { true, INSTR_FMT_IB },
    [FOR_ITER_LIST] = { true, INSTR_FMT_IBC },
    [FOR_ITER_TUPLE] = { true, INSTR_FMT_IBC },
    [FOR_ITER_RANGE] = { true, INSTR_FMT_IBC },
    [FOR_ITER_GEN] = { true, INSTR_FMT_IBC },
    [BEFORE_ASYNC_WITH] = { true, INSTR_FMT_IX },
    [BEFORE_WITH] = { true, INSTR_FMT_IX },
    [WITH_EXCEPT_START] = { true, INSTR_FMT_IX },
    [PUSH_EXC_INFO] = { true, INSTR_FMT_IX },
    [LOAD_ATTR_METHOD_WITH_VALUES] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_ATTR_METHOD_NO_DICT] = { true, INSTR_FMT_IBC00000000 },
    [LOAD_ATTR_METHOD_LAZY_DICT] = { true, INSTR_FMT_IBC00000000 },
    [KW_NAMES] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_CALL] = { true, INSTR_FMT_IB },
    [CALL] = { true, INSTR_FMT_IBC00 },
    [CALL_BOUND_METHOD_EXACT_ARGS] = { true, INSTR_FMT_IBC00 },
    [CALL_PY_EXACT_ARGS] = { true, INSTR_FMT_IBC00 },
    [CALL_PY_WITH_DEFAULTS] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_TYPE_1] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_STR_1] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_TUPLE_1] = { true, INSTR_FMT_IBC00 },
    [CALL_BUILTIN_CLASS] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_BUILTIN_O] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_BUILTIN_FAST] = { true, INSTR_FMT_IBC00 },
    [CALL_BUILTIN_FAST_WITH_KEYWORDS] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_LEN] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_ISINSTANCE] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_LIST_APPEND] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_METHOD_DESCRIPTOR_O] = { true, INSTR_FMT_IBC00 },
    [CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_METHOD_DESCRIPTOR_NOARGS] = { true, INSTR_FMT_IBC00 },
    [CALL_NO_KW_METHOD_DESCRIPTOR_FAST] = { true, INSTR_FMT_IBC00 },
    [INSTRUMENTED_CALL_FUNCTION_EX] = { true, INSTR_FMT_IX },
    [CALL_FUNCTION_EX] = { true, INSTR_FMT_IB },
    [MAKE_FUNCTION] = { true, INSTR_FMT_IB },
    [RETURN_GENERATOR] = { true, INSTR_FMT_IX },
    [BUILD_SLICE] = { true, INSTR_FMT_IB },
    [FORMAT_VALUE] = { true, INSTR_FMT_IB },
    [COPY] = { true, INSTR_FMT_IB },
    [BINARY_OP] = { true, INSTR_FMT_IBC },
    [SWAP] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_INSTRUCTION] = { true, INSTR_FMT_IX },
    [INSTRUMENTED_JUMP_FORWARD] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_JUMP_BACKWARD] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_POP_JUMP_IF_TRUE] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_POP_JUMP_IF_FALSE] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_POP_JUMP_IF_NONE] = { true, INSTR_FMT_IB },
    [INSTRUMENTED_POP_JUMP_IF_NOT_NONE] = { true, INSTR_FMT_IB },
    [EXTENDED_ARG] = { true, INSTR_FMT_IB },
    [CACHE] = { true, INSTR_FMT_IX },
    [RESERVED] = { true, INSTR_FMT_IX },
};
#endif
