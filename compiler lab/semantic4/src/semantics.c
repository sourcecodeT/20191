/*
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#include "semantics.h"
#include "error.h"
#include <stdlib.h>
#include <string.h>

extern SymTab *symtab;
extern Token *currentToken;

Object *lookupObject(char *name) {
  Scope *scope = symtab->currentScope;
  Object *obj;

  while (scope != NULL) {
    obj = findObject(scope->objList, name);
    if (obj != NULL)
      return obj;
    scope = scope->outer;
  }

  obj = findObject(symtab->globalObjectList, name);
  if (obj != NULL)
    return obj;
  return NULL;
}

void checkFreshIdent(char *name) {
  // TODO semantics-3
  if (findObject(symtab->currentScope->objList, name) != NULL)
    error(ERR_DUPLICATE_IDENT, currentToken->lineNo, currentToken->colNo);
}

Object *checkDeclaredIdent(char *name) {
  // TODO semantics-3
  Object *obj = lookupObject(name);
  if (obj == NULL) {
    error(ERR_UNDECLARED_IDENT, currentToken->lineNo, currentToken->colNo);
  }
  return obj;
}

Object *checkDeclaredConstant(char *name) {
  // TODO semantics-3
  Object *obj = lookupObject(name);
  if (obj == NULL)
    error(ERR_UNDECLARED_CONSTANT, currentToken->lineNo, currentToken->colNo);
  if (obj->kind != OBJ_CONSTANT)
    error(ERR_INVALID_CONSTANT, currentToken->lineNo, currentToken->colNo);

  return obj;
}

Object *checkDeclaredType(char *name) {
  // TODO semantics-3
  Object *obj = lookupObject(name);
  if (obj == NULL)
    error(ERR_UNDECLARED_TYPE, currentToken->lineNo, currentToken->colNo);
  if (obj->kind != OBJ_TYPE)
    error(ERR_INVALID_TYPE, currentToken->lineNo, currentToken->colNo);

  return obj;
}

Object *checkDeclaredVariable(char *name) {
  // TODO semantics-3
  Object *obj = lookupObject(name);
  if (obj == NULL)
    error(ERR_UNDECLARED_VARIABLE, currentToken->lineNo, currentToken->colNo);
  if (obj->kind != OBJ_VARIABLE)
    error(ERR_INVALID_VARIABLE, currentToken->lineNo, currentToken->colNo);

  return obj;
}

Object *checkDeclaredFunction(char *name) {
  // TODO semantics-3
  Object *obj = lookupObject(name);
  if (obj == NULL)
    error(ERR_UNDECLARED_FUNCTION, currentToken->lineNo, currentToken->colNo);
  if (obj->kind != OBJ_FUNCTION)
    error(ERR_INVALID_FUNCTION, currentToken->lineNo, currentToken->colNo);

  return obj;
}

Object *checkDeclaredProcedure(char *name) {
  // TODO semantics-3
  Object *obj = lookupObject(name);
  if (obj == NULL)
    error(ERR_UNDECLARED_PROCEDURE, currentToken->lineNo, currentToken->colNo);
  if (obj->kind != OBJ_PROCEDURE)
    error(ERR_INVALID_PROCEDURE, currentToken->lineNo, currentToken->colNo);

  return obj;
}

Object *checkDeclaredLValueIdent(char *name) {
  // TODO semantics-3
  Object *obj = lookupObject(name);
  if (obj == NULL)
    error(ERR_UNDECLARED_IDENT, currentToken->lineNo, currentToken->colNo);

  switch (obj->kind) {
    case OBJ_VARIABLE:
    case OBJ_PARAMETER:
      break;
    case OBJ_FUNCTION:
      if (obj != symtab->currentScope->owner)
        error(ERR_INVALID_IDENT, currentToken->lineNo, currentToken->colNo);
      break;
    default:
      error(ERR_INVALID_IDENT, currentToken->lineNo, currentToken->colNo);
  }

  return obj;
}

void checkIntType(Type *type) {
  // TODO semantics-4
  if (type->typeClass != TP_INT) {
    error(ERR_TYPE_INCONSISTENCY, currentToken->lineNo, currentToken->colNo);
  }
}

void checkCharType(Type *type) {
  // TODO semantics-4
  if (type->typeClass != TP_CHAR) {
    error(ERR_TYPE_INCONSISTENCY, currentToken->lineNo, currentToken->colNo);
  }
}

void checkBasicType(Type *type) {
  // TODO semantics-4
  if (type->typeClass != TP_INT) {
    if (type->typeClass != TP_CHAR) {
      error(ERR_TYPE_INCONSISTENCY, currentToken->lineNo, currentToken->colNo);
    }
  }
}

void checkArrayType(Type *type) {
  // TODO semantics-4
  if (type->typeClass != TP_ARRAY) {
    error(ERR_TYPE_INCONSISTENCY, currentToken->lineNo, currentToken->colNo);
  }
}

void checkTypeEquality(Type *type1, Type *type2) {
  // TODO semantics-4
  if (type1->typeClass != type2->typeClass) {
    error(ERR_TYPE_INCONSISTENCY, currentToken->lineNo, currentToken->colNo);
  }

  if (type1->typeClass == TP_ARRAY) {
    if (type1->arraySize != type2->arraySize) {
      error(ERR_TYPE_INCONSISTENCY, currentToken->lineNo, currentToken->colNo);
    }

    checkTypeEquality(type1->elementType, type2->elementType);
  }
}
