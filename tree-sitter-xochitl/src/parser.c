#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 92
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_identifier = 1,
  sym_proc_name = 2,
  anon_sym_DOT = 3,
  sym_comment = 4,
  sym_filename = 5,
  anon_sym_ATmixin = 6,
  anon_sym_ATimport = 7,
  anon_sym_meta = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_AT = 11,
  sym_numeric = 12,
  anon_sym_LT = 13,
  anon_sym_GT = 14,
  anon_sym_COMMA = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_STAR_STAR = 20,
  anon_sym_PERCENT = 21,
  anon_sym_let = 22,
  anon_sym_EQ = 23,
  anon_sym_COLON = 24,
  anon_sym_def = 25,
  anon_sym_DASH_GT = 26,
  sym_code = 27,
  sym_accessor = 28,
  sym__mixmet = 29,
  sym_mixin = 30,
  sym_meta_def = 31,
  sym_meta = 32,
  sym_tuple_access = 33,
  sym_tuple = 34,
  sym__expression = 35,
  sym_parens = 36,
  sym__math = 37,
  sym_math1 = 38,
  sym_math2 = 39,
  sym_math3 = 40,
  sym__definition = 41,
  sym_const_def = 42,
  sym_param = 43,
  sym_proc_def = 44,
  sym_call = 45,
  sym_argument = 46,
  sym_parent = 47,
  aux_sym_code_repeat1 = 48,
  aux_sym_tuple_repeat1 = 49,
  aux_sym_proc_def_repeat1 = 50,
  aux_sym_proc_def_repeat2 = 51,
  aux_sym_call_repeat1 = 52,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_identifier] = "identifier",
  [sym_proc_name] = "proc_name",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [sym_filename] = "filename",
  [anon_sym_ATmixin] = "@mixin",
  [anon_sym_ATimport] = "@import",
  [anon_sym_meta] = "meta",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [sym_numeric] = "numeric",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_PERCENT] = "%",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_def] = "def",
  [anon_sym_DASH_GT] = "->",
  [sym_code] = "code",
  [sym_accessor] = "accessor",
  [sym__mixmet] = "_mixmet",
  [sym_mixin] = "mixin",
  [sym_meta_def] = "meta_def",
  [sym_meta] = "meta",
  [sym_tuple_access] = "tuple_access",
  [sym_tuple] = "tuple",
  [sym__expression] = "_expression",
  [sym_parens] = "parens",
  [sym__math] = "_math",
  [sym_math1] = "math1",
  [sym_math2] = "math2",
  [sym_math3] = "math3",
  [sym__definition] = "_definition",
  [sym_const_def] = "const_def",
  [sym_param] = "param",
  [sym_proc_def] = "proc_def",
  [sym_call] = "call",
  [sym_argument] = "argument",
  [sym_parent] = "parent",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_proc_def_repeat1] = "proc_def_repeat1",
  [aux_sym_proc_def_repeat2] = "proc_def_repeat2",
  [aux_sym_call_repeat1] = "call_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATmixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym__mixmet] = {
    .visible = false,
    .named = true,
  },
  [sym_mixin] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_def] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_access] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parens] = {
    .visible = true,
    .named = true,
  },
  [sym__math] = {
    .visible = false,
    .named = true,
  },
  [sym_math1] = {
    .visible = true,
    .named = true,
  },
  [sym_math2] = {
    .visible = true,
    .named = true,
  },
  [sym_math3] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_const_def] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_def] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_parent] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_def_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(46);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_numeric);
      if (lookahead == '.')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_numeric);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'i')
        ADVANCE(21);
      if (lookahead == 'm')
        ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'm')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'p')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'o')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'r')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 't')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    case 27:
      if (lookahead == 'i')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'x')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'i')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'n')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      END_STATE();
    case 32:
      if (lookahead == 'e')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'f')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 't')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 38:
      if (lookahead == 'e')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 't')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'a')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/')
        ADVANCE(44);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(47);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(51);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_filename);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(54);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(55);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(58);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(46);
      END_STATE();
    case 59:
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'l')
        ADVANCE(61);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(60);
      if (lookahead == '$' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(63);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(65);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(66);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(67);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(70);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(69);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(46);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 71:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(70);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(71);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(46);
      END_STATE();
    case 72:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(70);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(72);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(46);
      END_STATE();
    case 73:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(70);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(73);
      END_STATE();
    case 74:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(70);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(74);
      END_STATE();
    case 75:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(70);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(75);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 51},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 58},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 71},
  [38] = {.lex_state = 72},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 55},
  [43] = {.lex_state = 55},
  [44] = {.lex_state = 58},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 73},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 55},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 72},
  [55] = {.lex_state = 74},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 55},
  [64] = {.lex_state = 55},
  [65] = {.lex_state = 55},
  [66] = {.lex_state = 58},
  [67] = {.lex_state = 71},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 75},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 74},
  [73] = {.lex_state = 75},
  [74] = {.lex_state = 75},
  [75] = {.lex_state = 75},
  [76] = {.lex_state = 73},
  [77] = {.lex_state = 55},
  [78] = {.lex_state = 57},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 57},
  [81] = {.lex_state = 55},
  [82] = {.lex_state = 71},
  [83] = {.lex_state = 74},
  [84] = {.lex_state = 75},
  [85] = {.lex_state = 74},
  [86] = {.lex_state = 55},
  [87] = {.lex_state = 55},
  [88] = {.lex_state = 55},
  [89] = {.lex_state = 55},
  [90] = {.lex_state = 55},
  [91] = {.lex_state = 55},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_proc_name] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_ATmixin] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(3),
    [sym_numeric] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_code] = STATE(8),
    [sym__mixmet] = STATE(9),
    [sym_mixin] = STATE(9),
    [sym_meta_def] = STATE(9),
    [sym_meta] = STATE(9),
    [sym__definition] = STATE(9),
    [sym_const_def] = STATE(9),
    [sym_proc_def] = STATE(9),
    [sym_call] = STATE(9),
    [aux_sym_code_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_proc_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(19),
  },
  [2] = {
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(23),
  },
  [3] = {
    [sym_comment] = ACTIONS(9),
    [sym_filename] = ACTIONS(25),
  },
  [4] = {
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [5] = {
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [6] = {
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(9),
  },
  [7] = {
    [sym_proc_name] = ACTIONS(33),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [sym__mixmet] = STATE(17),
    [sym_mixin] = STATE(17),
    [sym_meta_def] = STATE(17),
    [sym_meta] = STATE(17),
    [sym__definition] = STATE(17),
    [sym_const_def] = STATE(17),
    [sym_proc_def] = STATE(17),
    [sym_call] = STATE(17),
    [aux_sym_code_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_proc_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(19),
  },
  [10] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(39),
  },
  [11] = {
    [sym_argument] = STATE(21),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(43),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_proc_name] = ACTIONS(45),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(45),
    [anon_sym_ATimport] = ACTIONS(45),
    [anon_sym_meta] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_let] = ACTIONS(45),
    [anon_sym_def] = ACTIONS(45),
  },
  [13] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(49),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_proc_name] = ACTIONS(51),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(51),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_meta] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_let] = ACTIONS(51),
    [anon_sym_def] = ACTIONS(51),
  },
  [15] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(55),
  },
  [16] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(57),
  },
  [17] = {
    [sym__mixmet] = STATE(17),
    [sym_mixin] = STATE(17),
    [sym_meta_def] = STATE(17),
    [sym_meta] = STATE(17),
    [sym__definition] = STATE(17),
    [sym_const_def] = STATE(17),
    [sym_proc_def] = STATE(17),
    [sym_call] = STATE(17),
    [aux_sym_code_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_proc_name] = ACTIONS(61),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(64),
    [anon_sym_ATimport] = ACTIONS(64),
    [anon_sym_meta] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_let] = ACTIONS(73),
    [anon_sym_def] = ACTIONS(76),
  },
  [18] = {
    [sym_argument] = STATE(26),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(79),
  },
  [19] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(81),
  },
  [20] = {
    [sym_parent] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_proc_name] = ACTIONS(83),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(83),
    [anon_sym_ATimport] = ACTIONS(83),
    [anon_sym_meta] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_def] = ACTIONS(83),
    [anon_sym_DASH_GT] = ACTIONS(87),
  },
  [21] = {
    [aux_sym_call_repeat1] = STATE(31),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(89),
  },
  [22] = {
    [sym__mixmet] = STATE(33),
    [sym_mixin] = STATE(33),
    [sym_meta_def] = STATE(33),
    [sym_meta] = STATE(33),
    [sym__definition] = STATE(33),
    [sym_const_def] = STATE(33),
    [sym_proc_def] = STATE(33),
    [sym_call] = STATE(33),
    [aux_sym_code_repeat1] = STATE(33),
    [sym_proc_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(19),
  },
  [23] = {
    [sym_accessor] = STATE(37),
    [sym_tuple_access] = STATE(37),
    [sym_tuple] = STATE(38),
    [sym__expression] = STATE(38),
    [sym_parens] = STATE(38),
    [sym__math] = STATE(38),
    [sym_math1] = STATE(38),
    [sym_math2] = STATE(38),
    [sym_math3] = STATE(38),
    [sym_identifier] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_numeric] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
  },
  [24] = {
    [sym__mixmet] = STATE(42),
    [sym_mixin] = STATE(42),
    [sym_meta_def] = STATE(42),
    [sym_meta] = STATE(42),
    [sym_const_def] = STATE(42),
    [sym_param] = STATE(41),
    [sym_call] = STATE(42),
    [aux_sym_proc_def_repeat2] = STATE(42),
    [sym_identifier] = ACTIONS(101),
    [sym_proc_name] = ACTIONS(103),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(109),
  },
  [25] = {
    [sym_parent] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_proc_name] = ACTIONS(111),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(111),
    [anon_sym_ATimport] = ACTIONS(111),
    [anon_sym_meta] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_def] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(87),
  },
  [26] = {
    [aux_sym_call_repeat1] = STATE(45),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(89),
  },
  [27] = {
    [sym_accessor] = STATE(37),
    [sym_tuple_access] = STATE(37),
    [sym_tuple] = STATE(46),
    [sym__expression] = STATE(46),
    [sym_parens] = STATE(46),
    [sym__math] = STATE(46),
    [sym_math1] = STATE(46),
    [sym_math2] = STATE(46),
    [sym_math3] = STATE(46),
    [sym_identifier] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_numeric] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(99),
  },
  [28] = {
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_proc_name] = ACTIONS(111),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(111),
    [anon_sym_ATimport] = ACTIONS(111),
    [anon_sym_meta] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_def] = ACTIONS(111),
  },
  [30] = {
    [sym_argument] = STATE(48),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [aux_sym_call_repeat1] = STATE(49),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(89),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_proc_name] = ACTIONS(121),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(121),
    [anon_sym_ATimport] = ACTIONS(121),
    [anon_sym_meta] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_let] = ACTIONS(121),
    [anon_sym_def] = ACTIONS(121),
  },
  [33] = {
    [sym__mixmet] = STATE(51),
    [sym_mixin] = STATE(51),
    [sym_meta_def] = STATE(51),
    [sym_meta] = STATE(51),
    [sym__definition] = STATE(51),
    [sym_const_def] = STATE(51),
    [sym_proc_def] = STATE(51),
    [sym_call] = STATE(51),
    [aux_sym_code_repeat1] = STATE(51),
    [sym_proc_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(19),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_proc_name] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(129),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(127),
    [anon_sym_ATimport] = ACTIONS(127),
    [anon_sym_meta] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_STAR_STAR] = ACTIONS(127),
    [anon_sym_PERCENT] = ACTIONS(127),
    [anon_sym_let] = ACTIONS(127),
    [anon_sym_def] = ACTIONS(127),
  },
  [35] = {
    [sym_accessor] = STATE(37),
    [sym_tuple_access] = STATE(37),
    [sym_tuple] = STATE(54),
    [sym__expression] = STATE(54),
    [sym_parens] = STATE(54),
    [sym__math] = STATE(54),
    [sym_math1] = STATE(54),
    [sym_math2] = STATE(54),
    [sym_math3] = STATE(54),
    [sym_identifier] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_numeric] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(99),
  },
  [36] = {
    [sym_accessor] = STATE(37),
    [sym_tuple_access] = STATE(37),
    [sym_tuple] = STATE(55),
    [sym__expression] = STATE(55),
    [sym_parens] = STATE(55),
    [sym__math] = STATE(55),
    [sym_math1] = STATE(55),
    [sym_math2] = STATE(55),
    [sym_math3] = STATE(55),
    [sym_identifier] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_numeric] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(99),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_proc_name] = ACTIONS(127),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(127),
    [anon_sym_ATimport] = ACTIONS(127),
    [anon_sym_meta] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_STAR_STAR] = ACTIONS(127),
    [anon_sym_PERCENT] = ACTIONS(127),
    [anon_sym_let] = ACTIONS(127),
    [anon_sym_def] = ACTIONS(127),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_proc_name] = ACTIONS(139),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(139),
    [anon_sym_ATimport] = ACTIONS(139),
    [anon_sym_meta] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(139),
    [anon_sym_def] = ACTIONS(139),
  },
  [39] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(153),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_proc_name] = ACTIONS(155),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(155),
    [anon_sym_ATimport] = ACTIONS(155),
    [anon_sym_meta] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(157),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(155),
  },
  [41] = {
    [aux_sym_proc_def_repeat1] = STATE(62),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(161),
  },
  [42] = {
    [sym__mixmet] = STATE(64),
    [sym_mixin] = STATE(64),
    [sym_meta_def] = STATE(64),
    [sym_meta] = STATE(64),
    [sym_const_def] = STATE(64),
    [sym_call] = STATE(64),
    [aux_sym_proc_def_repeat2] = STATE(64),
    [sym_proc_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_proc_name] = ACTIONS(165),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(165),
    [anon_sym_ATimport] = ACTIONS(165),
    [anon_sym_meta] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(167),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_def] = ACTIONS(165),
  },
  [44] = {
    [sym_parent] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_proc_name] = ACTIONS(165),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(165),
    [anon_sym_ATimport] = ACTIONS(165),
    [anon_sym_meta] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(167),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_def] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(87),
  },
  [45] = {
    [aux_sym_call_repeat1] = STATE(49),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(89),
  },
  [46] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_proc_name] = ACTIONS(173),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(173),
    [anon_sym_ATimport] = ACTIONS(173),
    [anon_sym_meta] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_let] = ACTIONS(173),
    [anon_sym_def] = ACTIONS(173),
  },
  [48] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
  },
  [49] = {
    [aux_sym_call_repeat1] = STATE(49),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(179),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_proc_name] = ACTIONS(182),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(182),
    [anon_sym_ATimport] = ACTIONS(182),
    [anon_sym_meta] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(184),
    [anon_sym_let] = ACTIONS(182),
    [anon_sym_def] = ACTIONS(182),
  },
  [51] = {
    [sym__mixmet] = STATE(51),
    [sym_mixin] = STATE(51),
    [sym_meta_def] = STATE(51),
    [sym_meta] = STATE(51),
    [sym__definition] = STATE(51),
    [sym_const_def] = STATE(51),
    [sym_proc_def] = STATE(51),
    [sym_call] = STATE(51),
    [aux_sym_code_repeat1] = STATE(51),
    [sym_proc_name] = ACTIONS(61),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(64),
    [anon_sym_ATimport] = ACTIONS(64),
    [anon_sym_meta] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_let] = ACTIONS(73),
    [anon_sym_def] = ACTIONS(76),
  },
  [52] = {
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [sym_comment] = ACTIONS(9),
    [sym_numeric] = ACTIONS(188),
  },
  [54] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
  },
  [55] = {
    [aux_sym_tuple_repeat1] = STATE(72),
    [sym_comment] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
  },
  [56] = {
    [sym_accessor] = STATE(37),
    [sym_tuple_access] = STATE(37),
    [sym_tuple] = STATE(73),
    [sym__expression] = STATE(73),
    [sym_parens] = STATE(73),
    [sym__math] = STATE(73),
    [sym_math1] = STATE(73),
    [sym_math2] = STATE(73),
    [sym_math3] = STATE(73),
    [sym_identifier] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_numeric] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(99),
  },
  [57] = {
    [sym_accessor] = STATE(37),
    [sym_tuple_access] = STATE(37),
    [sym_tuple] = STATE(74),
    [sym__expression] = STATE(74),
    [sym_parens] = STATE(74),
    [sym__math] = STATE(74),
    [sym_math1] = STATE(74),
    [sym_math2] = STATE(74),
    [sym_math3] = STATE(74),
    [sym_identifier] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_numeric] = ACTIONS(198),
    [anon_sym_LT] = ACTIONS(99),
  },
  [58] = {
    [sym_accessor] = STATE(37),
    [sym_tuple_access] = STATE(37),
    [sym_tuple] = STATE(75),
    [sym__expression] = STATE(75),
    [sym_parens] = STATE(75),
    [sym__math] = STATE(75),
    [sym_math1] = STATE(75),
    [sym_math2] = STATE(75),
    [sym_math3] = STATE(75),
    [sym_identifier] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_numeric] = ACTIONS(200),
    [anon_sym_LT] = ACTIONS(99),
  },
  [59] = {
    [sym_accessor] = STATE(37),
    [sym_tuple_access] = STATE(37),
    [sym_tuple] = STATE(76),
    [sym__expression] = STATE(76),
    [sym_parens] = STATE(76),
    [sym__math] = STATE(76),
    [sym_math1] = STATE(76),
    [sym_math2] = STATE(76),
    [sym_math3] = STATE(76),
    [sym_identifier] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_numeric] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(99),
  },
  [60] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(204),
  },
  [61] = {
    [sym_param] = STATE(78),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(9),
  },
  [62] = {
    [aux_sym_proc_def_repeat1] = STATE(80),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(161),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_proc_name] = ACTIONS(210),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(210),
    [anon_sym_ATimport] = ACTIONS(210),
    [anon_sym_meta] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_AT] = ACTIONS(212),
    [anon_sym_let] = ACTIONS(210),
    [anon_sym_def] = ACTIONS(210),
  },
  [64] = {
    [sym__mixmet] = STATE(64),
    [sym_mixin] = STATE(64),
    [sym_meta_def] = STATE(64),
    [sym_meta] = STATE(64),
    [sym_const_def] = STATE(64),
    [sym_call] = STATE(64),
    [aux_sym_proc_def_repeat2] = STATE(64),
    [sym_proc_name] = ACTIONS(214),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(217),
    [anon_sym_ATimport] = ACTIONS(217),
    [anon_sym_meta] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_AT] = ACTIONS(225),
    [anon_sym_let] = ACTIONS(228),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_proc_name] = ACTIONS(231),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(231),
    [anon_sym_ATimport] = ACTIONS(231),
    [anon_sym_meta] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_let] = ACTIONS(231),
    [anon_sym_def] = ACTIONS(231),
  },
  [66] = {
    [sym_parent] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_proc_name] = ACTIONS(231),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(231),
    [anon_sym_ATimport] = ACTIONS(231),
    [anon_sym_meta] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_let] = ACTIONS(231),
    [anon_sym_def] = ACTIONS(231),
    [anon_sym_DASH_GT] = ACTIONS(87),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_proc_name] = ACTIONS(235),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(235),
    [anon_sym_ATimport] = ACTIONS(235),
    [anon_sym_meta] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_STAR_STAR] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_let] = ACTIONS(235),
    [anon_sym_def] = ACTIONS(235),
  },
  [68] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(239),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_proc_name] = ACTIONS(241),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(241),
    [anon_sym_ATimport] = ACTIONS(241),
    [anon_sym_meta] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_STAR_STAR] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_let] = ACTIONS(241),
    [anon_sym_def] = ACTIONS(241),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_proc_name] = ACTIONS(245),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(245),
    [anon_sym_ATimport] = ACTIONS(245),
    [anon_sym_meta] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_STAR_STAR] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_let] = ACTIONS(245),
    [anon_sym_def] = ACTIONS(245),
  },
  [71] = {
    [sym_accessor] = STATE(37),
    [sym_tuple_access] = STATE(37),
    [sym_tuple] = STATE(83),
    [sym__expression] = STATE(83),
    [sym_parens] = STATE(83),
    [sym__math] = STATE(83),
    [sym_math1] = STATE(83),
    [sym_math2] = STATE(83),
    [sym_math3] = STATE(83),
    [sym_identifier] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_numeric] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(99),
  },
  [72] = {
    [aux_sym_tuple_repeat1] = STATE(85),
    [sym_comment] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(194),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_proc_name] = ACTIONS(253),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(253),
    [anon_sym_ATimport] = ACTIONS(253),
    [anon_sym_meta] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_def] = ACTIONS(253),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_proc_name] = ACTIONS(257),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(257),
    [anon_sym_ATimport] = ACTIONS(257),
    [anon_sym_meta] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_STAR_STAR] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(257),
    [anon_sym_def] = ACTIONS(257),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_proc_name] = ACTIONS(261),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(261),
    [anon_sym_ATimport] = ACTIONS(261),
    [anon_sym_meta] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_STAR_STAR] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(261),
    [anon_sym_let] = ACTIONS(261),
    [anon_sym_def] = ACTIONS(261),
  },
  [76] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
  },
  [77] = {
    [sym__mixmet] = STATE(87),
    [sym_mixin] = STATE(87),
    [sym_meta_def] = STATE(87),
    [sym_meta] = STATE(87),
    [sym_const_def] = STATE(87),
    [sym_call] = STATE(87),
    [aux_sym_proc_def_repeat2] = STATE(87),
    [sym_proc_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
  },
  [78] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
  },
  [79] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(271),
  },
  [80] = {
    [aux_sym_proc_def_repeat1] = STATE(80),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(273),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [sym_proc_name] = ACTIONS(276),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(276),
    [anon_sym_ATimport] = ACTIONS(276),
    [anon_sym_meta] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_AT] = ACTIONS(278),
    [anon_sym_let] = ACTIONS(276),
    [anon_sym_def] = ACTIONS(276),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [sym_proc_name] = ACTIONS(280),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(280),
    [anon_sym_ATimport] = ACTIONS(280),
    [anon_sym_meta] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_AT] = ACTIONS(282),
    [anon_sym_LT] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(282),
    [anon_sym_SLASH] = ACTIONS(280),
    [anon_sym_STAR_STAR] = ACTIONS(280),
    [anon_sym_PERCENT] = ACTIONS(280),
    [anon_sym_let] = ACTIONS(280),
    [anon_sym_def] = ACTIONS(280),
  },
  [83] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_STAR_STAR] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym_proc_name] = ACTIONS(286),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(286),
    [anon_sym_ATimport] = ACTIONS(286),
    [anon_sym_meta] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(286),
    [anon_sym_STAR_STAR] = ACTIONS(286),
    [anon_sym_PERCENT] = ACTIONS(286),
    [anon_sym_let] = ACTIONS(286),
    [anon_sym_def] = ACTIONS(286),
  },
  [85] = {
    [aux_sym_tuple_repeat1] = STATE(85),
    [sym_comment] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(290),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_proc_name] = ACTIONS(293),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(293),
    [anon_sym_ATimport] = ACTIONS(293),
    [anon_sym_meta] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(295),
    [anon_sym_let] = ACTIONS(293),
    [anon_sym_def] = ACTIONS(293),
  },
  [87] = {
    [sym__mixmet] = STATE(64),
    [sym_mixin] = STATE(64),
    [sym_meta_def] = STATE(64),
    [sym_meta] = STATE(64),
    [sym_const_def] = STATE(64),
    [sym_call] = STATE(64),
    [aux_sym_proc_def_repeat2] = STATE(64),
    [sym_proc_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
  },
  [88] = {
    [sym__mixmet] = STATE(90),
    [sym_mixin] = STATE(90),
    [sym_meta_def] = STATE(90),
    [sym_meta] = STATE(90),
    [sym_const_def] = STATE(90),
    [sym_call] = STATE(90),
    [aux_sym_proc_def_repeat2] = STATE(90),
    [sym_proc_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [sym_proc_name] = ACTIONS(299),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(299),
    [anon_sym_ATimport] = ACTIONS(299),
    [anon_sym_meta] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_let] = ACTIONS(299),
    [anon_sym_def] = ACTIONS(299),
  },
  [90] = {
    [sym__mixmet] = STATE(64),
    [sym_mixin] = STATE(64),
    [sym_meta_def] = STATE(64),
    [sym_meta] = STATE(64),
    [sym_const_def] = STATE(64),
    [sym_call] = STATE(64),
    [aux_sym_proc_def_repeat2] = STATE(64),
    [sym_proc_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(11),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_proc_name] = ACTIONS(305),
    [sym_comment] = ACTIONS(9),
    [anon_sym_ATmixin] = ACTIONS(305),
    [anon_sym_ATimport] = ACTIONS(305),
    [anon_sym_meta] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_let] = ACTIONS(305),
    [anon_sym_def] = ACTIONS(305),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_code, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_code, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_mixin, 2),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_mixin, 2),
  [49] = {.count = 1, .reusable = true}, SHIFT(22),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_meta, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(23),
  [57] = {.count = 1, .reusable = true}, SHIFT(24),
  [59] = {.count = 1, .reusable = true}, REDUCE(aux_sym_code_repeat1, 2),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(4),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(5),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(6),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(7),
  [79] = {.count = 1, .reusable = true}, SHIFT(25),
  [81] = {.count = 1, .reusable = true}, SHIFT(27),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_call, 3),
  [87] = {.count = 1, .reusable = true}, SHIFT(28),
  [89] = {.count = 1, .reusable = true}, SHIFT(30),
  [91] = {.count = 1, .reusable = true}, SHIFT(32),
  [93] = {.count = 1, .reusable = true}, SHIFT(34),
  [95] = {.count = 1, .reusable = true}, SHIFT(35),
  [97] = {.count = 1, .reusable = true}, SHIFT(38),
  [99] = {.count = 1, .reusable = true}, SHIFT(36),
  [101] = {.count = 1, .reusable = false}, SHIFT(39),
  [103] = {.count = 1, .reusable = false}, SHIFT(2),
  [105] = {.count = 1, .reusable = false}, SHIFT(4),
  [107] = {.count = 1, .reusable = true}, SHIFT(40),
  [109] = {.count = 1, .reusable = false}, SHIFT(6),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_call, 4),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_call, 4),
  [115] = {.count = 1, .reusable = true}, SHIFT(44),
  [117] = {.count = 1, .reusable = true}, SHIFT(46),
  [119] = {.count = 1, .reusable = true}, SHIFT(47),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_meta_def, 4),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_meta_def, 4),
  [125] = {.count = 1, .reusable = true}, SHIFT(50),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(52),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(53),
  [135] = {.count = 1, .reusable = true}, SHIFT(54),
  [137] = {.count = 1, .reusable = true}, SHIFT(55),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_const_def, 4),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_const_def, 4),
  [143] = {.count = 1, .reusable = true}, SHIFT(56),
  [145] = {.count = 1, .reusable = false}, SHIFT(57),
  [147] = {.count = 1, .reusable = true}, SHIFT(57),
  [149] = {.count = 1, .reusable = true}, SHIFT(58),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [153] = {.count = 1, .reusable = true}, SHIFT(59),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_proc_def, 4),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_proc_def, 4),
  [159] = {.count = 1, .reusable = true}, SHIFT(60),
  [161] = {.count = 1, .reusable = true}, SHIFT(61),
  [163] = {.count = 1, .reusable = true}, SHIFT(63),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_call, 5),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_call, 5),
  [169] = {.count = 1, .reusable = true}, SHIFT(66),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_argument, 3),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_parent, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_parent, 2),
  [177] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_repeat1, 2),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(30),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_meta_def, 5),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_meta_def, 5),
  [186] = {.count = 1, .reusable = true}, SHIFT(67),
  [188] = {.count = 1, .reusable = true}, SHIFT(68),
  [190] = {.count = 1, .reusable = true}, SHIFT(69),
  [192] = {.count = 1, .reusable = true}, SHIFT(70),
  [194] = {.count = 1, .reusable = true}, SHIFT(71),
  [196] = {.count = 1, .reusable = true}, SHIFT(73),
  [198] = {.count = 1, .reusable = true}, SHIFT(74),
  [200] = {.count = 1, .reusable = true}, SHIFT(75),
  [202] = {.count = 1, .reusable = true}, SHIFT(76),
  [204] = {.count = 1, .reusable = true}, SHIFT(77),
  [206] = {.count = 1, .reusable = true}, SHIFT(39),
  [208] = {.count = 1, .reusable = true}, SHIFT(79),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_proc_def, 5),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_proc_def, 5),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_proc_def_repeat2, 2), SHIFT_REPEAT(2),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_proc_def_repeat2, 2), SHIFT_REPEAT(3),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_proc_def_repeat2, 2), SHIFT_REPEAT(4),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym_proc_def_repeat2, 2),
  [225] = {.count = 2, .reusable = false}, REDUCE(aux_sym_proc_def_repeat2, 2), SHIFT_REPEAT(5),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_proc_def_repeat2, 2), SHIFT_REPEAT(6),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_call, 6),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_call, 6),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_accessor, 3),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_accessor, 3),
  [239] = {.count = 1, .reusable = true}, SHIFT(82),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_parens, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_parens, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [249] = {.count = 1, .reusable = true}, SHIFT(83),
  [251] = {.count = 1, .reusable = true}, SHIFT(84),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_math1, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_math1, 3),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_math2, 3),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_math2, 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_math3, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_math3, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_param, 3),
  [267] = {.count = 1, .reusable = true}, SHIFT(86),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_proc_def_repeat1, 2),
  [271] = {.count = 1, .reusable = true}, SHIFT(88),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_proc_def_repeat1, 2), SHIFT_REPEAT(61),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_call, 7),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_call, 7),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_tuple_access, 4),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_tuple_access, 4),
  [284] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(71),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_proc_def, 7),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_proc_def, 7),
  [297] = {.count = 1, .reusable = true}, SHIFT(89),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_proc_def, 8),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_proc_def, 8),
  [303] = {.count = 1, .reusable = true}, SHIFT(91),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_proc_def, 9),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_proc_def, 9),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xochitl() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
