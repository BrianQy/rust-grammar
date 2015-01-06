enum Token {
  SHL = 257, // Parser generators reserve 0-256 for char literals
  SHR,
  LE,
  EQEQ,
  NE,
  GE,
  ANDAND,
  OROR,
  BINOPEQ,
  DOTDOT,
  DOTDOTDOT,
  MOD_SEP,
  RARROW,
  FAT_ARROW,
  LIT_BYTE,
  LIT_CHAR,
  LIT_INTEGER,
  LIT_FLOAT,
  LIT_STR,
  LIT_STR_RAW,
  LIT_BINARY,
  LIT_BINARY_RAW,
  IDENT,
  UNDERSCORE,
  LIFETIME,

  // keywords
  SELF,
  STATIC,
  AS,
  BREAK,
  CRATE,
  ELSE,
  ENUM,
  EXTERN,
  FALSE,
  FN,
  FOR,
  IF,
  IMPL,
  IN,
  LET,
  LOOP,
  MATCH,
  MOD,
  MOVE,
  MUT,
  ONCE,
  PRIV,
  PUB,
  REF,
  RETURN,
  STRUCT,
  TRUE,
  TRAIT,
  TYPE,
  UNSAFE,
  USE,
  WHILE,
  CONTINUE,
  PROC,
  BOX,
  CONST,
  WHERE,
  TYPEOF,
  INNER_DOC_COMMENT,
  OUTER_DOC_COMMENT,

  // not in rustc:
  SHEBANG,
  STATIC_LIFETIME
};

void print_token(int token);
