#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@gtlForeachStatementInstruction iterateOnMap'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap> gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_iterateOnMap (const int32_t inClassIndex,
                                        extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap inMethod) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_iterateOnMap (const cPtr_gtlForeachStatementInstruction * inObject,
                                       GALGAS_gtlContext & io_context,
                                       GALGAS_gtlData & io_vars,
                                       GALGAS_library & io_lib,
                                       GALGAS_string & io_outputString,
                                       const GALGAS_gtlMap constin_iterableMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlForeachStatementInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.count ()) {
      f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.count ()) {
           f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, constin_iterableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_iterateOnMap (const cPtr_gtlForeachStatementInstruction * inObject,
                                                                         GALGAS_gtlContext & ioArgument_context,
                                                                         GALGAS_gtlData & ioArgument_vars,
                                                                         GALGAS_library & ioArgument_lib,
                                                                         GALGAS_string & ioArgument_outputString,
                                                                         const GALGAS_gtlMap constinArgument_iterableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_keyName.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 621)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (GALGAS_string ("KEY"), object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 622))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 622)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mAttribute_keyName ;
  }
  GALGAS_lstring var_actualKeyName_18143 = temp_0 ;
  cEnumerator_gtlVarMap enumerator_18256 (constinArgument_iterableMap.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 627)), kEnumeration_up) ;
  GALGAS_uint index_18230 ((uint32_t) 0) ;
  const bool bool_2 = true ;
  if (enumerator_18256.hasCurrentObject () && bool_2) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 629)) ;
    while (enumerator_18256.hasCurrentObject () && bool_2) {
      {
      ioArgument_vars.insulate (HERE) ;
      cPtr_gtlData * ptr_18353 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_18353, object->mAttribute_variableName, enumerator_18256.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 631)) ;
      }
      {
      ioArgument_vars.insulate (HERE) ;
      cPtr_gtlData * ptr_18402 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_18402, var_actualKeyName_18143, GALGAS_gtlString::constructor_new (object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 633)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 633)), enumerator_18256.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 633))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 632)) ;
      }
      {
      ioArgument_vars.insulate (HERE) ;
      cPtr_gtlData * ptr_18516 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_18516, object->mAttribute_indexName, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 636)), index_18230.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 636))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 635)) ;
      }
      extensionMethod_execute (object->mAttribute_doList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 638)) ;
      enumerator_18256.gotoNextObject () ;
      index_18230.increment () ;
      if (enumerator_18256.hasCurrentObject () && bool_2) {
        extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 640)) ;
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 642)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_iterateOnMap (void) {
  enterExtensionMethod_iterateOnMap (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                     extensionMethod_gtlForeachStatementInstruction_iterateOnMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlForeachStatementInstruction_iterateOnMap (void) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_iterateOnMap (defineExtensionMethod_gtlForeachStatementInstruction_iterateOnMap,
                                                                        freeExtensionMethod_gtlForeachStatementInstruction_iterateOnMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@gtlForeachStatementInstruction iterateOnList'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList> gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_iterateOnList (const int32_t inClassIndex,
                                         extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList inMethod) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_iterateOnList (const cPtr_gtlForeachStatementInstruction * inObject,
                                        GALGAS_gtlContext & io_context,
                                        GALGAS_gtlData & io_vars,
                                        GALGAS_library & io_lib,
                                        GALGAS_string & io_outputString,
                                        const GALGAS_gtlList constin_iterableList,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlForeachStatementInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.count ()) {
      f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.count ()) {
           f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, constin_iterableList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_iterateOnList (const cPtr_gtlForeachStatementInstruction * inObject,
                                                                          GALGAS_gtlContext & ioArgument_context,
                                                                          GALGAS_gtlData & ioArgument_vars,
                                                                          GALGAS_library & ioArgument_lib,
                                                                          GALGAS_string & ioArgument_outputString,
                                                                          const GALGAS_gtlList constinArgument_iterableList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_keyName.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 653)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 654)), GALGAS_string ("a key variable cannot be define when iterating on a list"), fixItArray1  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 654)) ;
  }
  cEnumerator_list enumerator_19149 (constinArgument_iterableList.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 656)), kEnumeration_up) ;
  GALGAS_uint index_19122 ((uint32_t) 0) ;
  const bool bool_2 = true ;
  if (enumerator_19149.hasCurrentObject () && bool_2) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 658)) ;
    while (enumerator_19149.hasCurrentObject () && bool_2) {
      {
      ioArgument_vars.insulate (HERE) ;
      cPtr_gtlData * ptr_19246 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_19246, object->mAttribute_variableName, enumerator_19149.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 660)) ;
      }
      {
      ioArgument_vars.insulate (HERE) ;
      cPtr_gtlData * ptr_19295 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_19295, object->mAttribute_indexName, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 662)), index_19122.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 662))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 661)) ;
      }
      extensionMethod_execute (object->mAttribute_doList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 664)) ;
      enumerator_19149.gotoNextObject () ;
      index_19122.increment () ;
      if (enumerator_19149.hasCurrentObject () && bool_2) {
        extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 666)) ;
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 668)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_iterateOnList (void) {
  enterExtensionMethod_iterateOnList (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                      extensionMethod_gtlForeachStatementInstruction_iterateOnList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlForeachStatementInstruction_iterateOnList (void) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_iterateOnList (defineExtensionMethod_gtlForeachStatementInstruction_iterateOnList,
                                                                         freeExtensionMethod_gtlForeachStatementInstruction_iterateOnList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@gtlForeachStatementInstruction iterateOnSet'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet> gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_iterateOnSet (const int32_t inClassIndex,
                                        extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet inMethod) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_iterateOnSet (const cPtr_gtlForeachStatementInstruction * inObject,
                                       GALGAS_gtlContext & io_context,
                                       GALGAS_gtlData & io_vars,
                                       GALGAS_library & io_lib,
                                       GALGAS_string & io_outputString,
                                       const GALGAS_gtlSet constin_iterableSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlForeachStatementInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.count ()) {
      f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.count ()) {
           f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, constin_iterableSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_iterateOnSet (const cPtr_gtlForeachStatementInstruction * inObject,
                                                                         GALGAS_gtlContext & ioArgument_context,
                                                                         GALGAS_gtlData & ioArgument_vars,
                                                                         GALGAS_library & ioArgument_lib,
                                                                         GALGAS_string & ioArgument_outputString,
                                                                         const GALGAS_gtlSet constinArgument_iterableSet,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_keyName.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 679)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 680)), GALGAS_string ("a key variable cannot be define when iterating on a set"), fixItArray1  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 680)) ;
  }
  cEnumerator_stringset enumerator_19919 (constinArgument_iterableSet.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 682)), kEnumeration_up) ;
  GALGAS_uint index_19893 ((uint32_t) 0) ;
  const bool bool_2 = true ;
  if (enumerator_19919.hasCurrentObject () && bool_2) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 684)) ;
    while (enumerator_19919.hasCurrentObject () && bool_2) {
      {
      ioArgument_vars.insulate (HERE) ;
      cPtr_gtlData * ptr_20016 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_20016, object->mAttribute_variableName, GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 688)), enumerator_19919.current_key (HERE)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 686)) ;
      }
      {
      ioArgument_vars.insulate (HERE) ;
      cPtr_gtlData * ptr_20123 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_20123, object->mAttribute_indexName, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 691)), index_19893.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 691))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 690)) ;
      }
      extensionMethod_execute (object->mAttribute_doList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 693)) ;
      enumerator_19919.gotoNextObject () ;
      index_19893.increment () ;
      if (enumerator_19919.hasCurrentObject () && bool_2) {
        extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 695)) ;
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 697)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_iterateOnSet (void) {
  enterExtensionMethod_iterateOnSet (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                     extensionMethod_gtlForeachStatementInstruction_iterateOnSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlForeachStatementInstruction_iterateOnSet (void) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_iterateOnSet (defineExtensionMethod_gtlForeachStatementInstruction_iterateOnSet,
                                                                        freeExtensionMethod_gtlForeachStatementInstruction_iterateOnSet) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlForStatementInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlForStatementInstruction * p = (const cPtr_gtlForStatementInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlForStatementInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_identifier.objectCompare (p->mAttribute_identifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_iterable.objectCompare (p->mAttribute_iterable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_betweenList.objectCompare (p->mAttribute_betweenList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_doList.objectCompare (p->mAttribute_doList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlForStatementInstruction::objectCompare (const GALGAS_gtlForStatementInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlForStatementInstruction::GALGAS_gtlForStatementInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlForStatementInstruction GALGAS_gtlForStatementInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlForStatementInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_gtlExpressionList::constructor_emptyList (HERE),
                                                             GALGAS_gtlInstructionList::constructor_emptyList (HERE),
                                                             GALGAS_gtlInstructionList::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlForStatementInstruction::GALGAS_gtlForStatementInstruction (const cPtr_gtlForStatementInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlForStatementInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlForStatementInstruction GALGAS_gtlForStatementInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                      const GALGAS_string & inAttribute_signature,
                                                                                      const GALGAS_lstring & inAttribute_identifier,
                                                                                      const GALGAS_gtlExpressionList & inAttribute_iterable,
                                                                                      const GALGAS_gtlInstructionList & inAttribute_betweenList,
                                                                                      const GALGAS_gtlInstructionList & inAttribute_doList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlForStatementInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_identifier.isValid () && inAttribute_iterable.isValid () && inAttribute_betweenList.isValid () && inAttribute_doList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlForStatementInstruction (inAttribute_where, inAttribute_signature, inAttribute_identifier, inAttribute_iterable, inAttribute_betweenList, inAttribute_doList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlForStatementInstruction::getter_identifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlForStatementInstruction * p = (const cPtr_gtlForStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlForStatementInstruction) ;
    result = p->mAttribute_identifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlForStatementInstruction::getter_identifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_identifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList GALGAS_gtlForStatementInstruction::getter_iterable (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlForStatementInstruction * p = (const cPtr_gtlForStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlForStatementInstruction) ;
    result = p->mAttribute_iterable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList cPtr_gtlForStatementInstruction::getter_iterable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_iterable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlForStatementInstruction::getter_betweenList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlForStatementInstruction * p = (const cPtr_gtlForStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlForStatementInstruction) ;
    result = p->mAttribute_betweenList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlForStatementInstruction::getter_betweenList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_betweenList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlForStatementInstruction::getter_doList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlForStatementInstruction * p = (const cPtr_gtlForStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlForStatementInstruction) ;
    result = p->mAttribute_doList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlForStatementInstruction::getter_doList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_doList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @gtlForStatementInstruction class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlForStatementInstruction::cPtr_gtlForStatementInstruction (const GALGAS_location & in_where,
                                                                  const GALGAS_string & in_signature,
                                                                  const GALGAS_lstring & in_identifier,
                                                                  const GALGAS_gtlExpressionList & in_iterable,
                                                                  const GALGAS_gtlInstructionList & in_betweenList,
                                                                  const GALGAS_gtlInstructionList & in_doList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_identifier (in_identifier),
mAttribute_iterable (in_iterable),
mAttribute_betweenList (in_betweenList),
mAttribute_doList (in_doList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlForStatementInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlForStatementInstruction ;
}

void cPtr_gtlForStatementInstruction::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@gtlForStatementInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_identifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_iterable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_betweenList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_doList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlForStatementInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlForStatementInstruction (mAttribute_where, mAttribute_signature, mAttribute_identifier, mAttribute_iterable, mAttribute_betweenList, mAttribute_doList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlForStatementInstruction type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlForStatementInstruction ("gtlForStatementInstruction",
                                                   & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlForStatementInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlForStatementInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlForStatementInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlForStatementInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlForStatementInstruction GALGAS_gtlForStatementInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlForStatementInstruction result ;
  const GALGAS_gtlForStatementInstruction * p = (const GALGAS_gtlForStatementInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlForStatementInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlForStatementInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlLoopStatementInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_identifier.objectCompare (p->mAttribute_identifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_start.objectCompare (p->mAttribute_start) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_stop.objectCompare (p->mAttribute_stop) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_step.objectCompare (p->mAttribute_step) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_upDown.objectCompare (p->mAttribute_upDown) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_beforeList.objectCompare (p->mAttribute_beforeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_betweenList.objectCompare (p->mAttribute_betweenList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_afterList.objectCompare (p->mAttribute_afterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_doList.objectCompare (p->mAttribute_doList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlLoopStatementInstruction::objectCompare (const GALGAS_gtlLoopStatementInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLoopStatementInstruction::GALGAS_gtlLoopStatementInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLoopStatementInstruction::GALGAS_gtlLoopStatementInstruction (const cPtr_gtlLoopStatementInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLoopStatementInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLoopStatementInstruction GALGAS_gtlLoopStatementInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                        const GALGAS_string & inAttribute_signature,
                                                                                        const GALGAS_lstring & inAttribute_identifier,
                                                                                        const GALGAS_gtlExpression & inAttribute_start,
                                                                                        const GALGAS_gtlExpression & inAttribute_stop,
                                                                                        const GALGAS_gtlExpression & inAttribute_step,
                                                                                        const GALGAS_sint_36__34_ & inAttribute_upDown,
                                                                                        const GALGAS_gtlInstructionList & inAttribute_beforeList,
                                                                                        const GALGAS_gtlInstructionList & inAttribute_betweenList,
                                                                                        const GALGAS_gtlInstructionList & inAttribute_afterList,
                                                                                        const GALGAS_gtlInstructionList & inAttribute_doList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlLoopStatementInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_identifier.isValid () && inAttribute_start.isValid () && inAttribute_stop.isValid () && inAttribute_step.isValid () && inAttribute_upDown.isValid () && inAttribute_beforeList.isValid () && inAttribute_betweenList.isValid () && inAttribute_afterList.isValid () && inAttribute_doList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLoopStatementInstruction (inAttribute_where, inAttribute_signature, inAttribute_identifier, inAttribute_start, inAttribute_stop, inAttribute_step, inAttribute_upDown, inAttribute_beforeList, inAttribute_betweenList, inAttribute_afterList, inAttribute_doList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlLoopStatementInstruction::getter_identifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
    result = p->mAttribute_identifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlLoopStatementInstruction::getter_identifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_identifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlLoopStatementInstruction::getter_start (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
    result = p->mAttribute_start ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlLoopStatementInstruction::getter_start (UNUSED_LOCATION_ARGS) const {
  return mAttribute_start ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlLoopStatementInstruction::getter_stop (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
    result = p->mAttribute_stop ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlLoopStatementInstruction::getter_stop (UNUSED_LOCATION_ARGS) const {
  return mAttribute_stop ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlLoopStatementInstruction::getter_step (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
    result = p->mAttribute_step ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlLoopStatementInstruction::getter_step (UNUSED_LOCATION_ARGS) const {
  return mAttribute_step ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_gtlLoopStatementInstruction::getter_upDown (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
    result = p->mAttribute_upDown ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ cPtr_gtlLoopStatementInstruction::getter_upDown (UNUSED_LOCATION_ARGS) const {
  return mAttribute_upDown ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlLoopStatementInstruction::getter_beforeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
    result = p->mAttribute_beforeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlLoopStatementInstruction::getter_beforeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_beforeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlLoopStatementInstruction::getter_betweenList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
    result = p->mAttribute_betweenList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlLoopStatementInstruction::getter_betweenList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_betweenList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlLoopStatementInstruction::getter_afterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
    result = p->mAttribute_afterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlLoopStatementInstruction::getter_afterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_afterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlLoopStatementInstruction::getter_doList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoopStatementInstruction * p = (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoopStatementInstruction) ;
    result = p->mAttribute_doList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlLoopStatementInstruction::getter_doList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_doList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @gtlLoopStatementInstruction class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlLoopStatementInstruction::cPtr_gtlLoopStatementInstruction (const GALGAS_location & in_where,
                                                                    const GALGAS_string & in_signature,
                                                                    const GALGAS_lstring & in_identifier,
                                                                    const GALGAS_gtlExpression & in_start,
                                                                    const GALGAS_gtlExpression & in_stop,
                                                                    const GALGAS_gtlExpression & in_step,
                                                                    const GALGAS_sint_36__34_ & in_upDown,
                                                                    const GALGAS_gtlInstructionList & in_beforeList,
                                                                    const GALGAS_gtlInstructionList & in_betweenList,
                                                                    const GALGAS_gtlInstructionList & in_afterList,
                                                                    const GALGAS_gtlInstructionList & in_doList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_identifier (in_identifier),
mAttribute_start (in_start),
mAttribute_stop (in_stop),
mAttribute_step (in_step),
mAttribute_upDown (in_upDown),
mAttribute_beforeList (in_beforeList),
mAttribute_betweenList (in_betweenList),
mAttribute_afterList (in_afterList),
mAttribute_doList (in_doList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlLoopStatementInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLoopStatementInstruction ;
}

void cPtr_gtlLoopStatementInstruction::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@gtlLoopStatementInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_identifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_start.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_stop.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_step.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_upDown.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_beforeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_betweenList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_afterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_doList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlLoopStatementInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLoopStatementInstruction (mAttribute_where, mAttribute_signature, mAttribute_identifier, mAttribute_start, mAttribute_stop, mAttribute_step, mAttribute_upDown, mAttribute_beforeList, mAttribute_betweenList, mAttribute_afterList, mAttribute_doList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlLoopStatementInstruction type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLoopStatementInstruction ("gtlLoopStatementInstruction",
                                                    & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlLoopStatementInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLoopStatementInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlLoopStatementInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLoopStatementInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLoopStatementInstruction GALGAS_gtlLoopStatementInstruction::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlLoopStatementInstruction result ;
  const GALGAS_gtlLoopStatementInstruction * p = (const GALGAS_gtlLoopStatementInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLoopStatementInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLoopStatementInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlRepeatStatementInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlRepeatStatementInstruction * p = (const cPtr_gtlRepeatStatementInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlRepeatStatementInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_limit.objectCompare (p->mAttribute_limit) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_condition.objectCompare (p->mAttribute_condition) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_continueList.objectCompare (p->mAttribute_continueList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_doList.objectCompare (p->mAttribute_doList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlRepeatStatementInstruction::objectCompare (const GALGAS_gtlRepeatStatementInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlRepeatStatementInstruction::GALGAS_gtlRepeatStatementInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlRepeatStatementInstruction::GALGAS_gtlRepeatStatementInstruction (const cPtr_gtlRepeatStatementInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlRepeatStatementInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlRepeatStatementInstruction GALGAS_gtlRepeatStatementInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                            const GALGAS_string & inAttribute_signature,
                                                                                            const GALGAS_gtlExpression & inAttribute_limit,
                                                                                            const GALGAS_gtlExpression & inAttribute_condition,
                                                                                            const GALGAS_gtlInstructionList & inAttribute_continueList,
                                                                                            const GALGAS_gtlInstructionList & inAttribute_doList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlRepeatStatementInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_limit.isValid () && inAttribute_condition.isValid () && inAttribute_continueList.isValid () && inAttribute_doList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlRepeatStatementInstruction (inAttribute_where, inAttribute_signature, inAttribute_limit, inAttribute_condition, inAttribute_continueList, inAttribute_doList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlRepeatStatementInstruction::getter_limit (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlRepeatStatementInstruction * p = (const cPtr_gtlRepeatStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlRepeatStatementInstruction) ;
    result = p->mAttribute_limit ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlRepeatStatementInstruction::getter_limit (UNUSED_LOCATION_ARGS) const {
  return mAttribute_limit ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlRepeatStatementInstruction::getter_condition (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlRepeatStatementInstruction * p = (const cPtr_gtlRepeatStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlRepeatStatementInstruction) ;
    result = p->mAttribute_condition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlRepeatStatementInstruction::getter_condition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_condition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlRepeatStatementInstruction::getter_continueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlRepeatStatementInstruction * p = (const cPtr_gtlRepeatStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlRepeatStatementInstruction) ;
    result = p->mAttribute_continueList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlRepeatStatementInstruction::getter_continueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_continueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlRepeatStatementInstruction::getter_doList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlRepeatStatementInstruction * p = (const cPtr_gtlRepeatStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlRepeatStatementInstruction) ;
    result = p->mAttribute_doList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlRepeatStatementInstruction::getter_doList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_doList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @gtlRepeatStatementInstruction class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlRepeatStatementInstruction::cPtr_gtlRepeatStatementInstruction (const GALGAS_location & in_where,
                                                                        const GALGAS_string & in_signature,
                                                                        const GALGAS_gtlExpression & in_limit,
                                                                        const GALGAS_gtlExpression & in_condition,
                                                                        const GALGAS_gtlInstructionList & in_continueList,
                                                                        const GALGAS_gtlInstructionList & in_doList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_limit (in_limit),
mAttribute_condition (in_condition),
mAttribute_continueList (in_continueList),
mAttribute_doList (in_doList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlRepeatStatementInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlRepeatStatementInstruction ;
}

void cPtr_gtlRepeatStatementInstruction::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@gtlRepeatStatementInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_limit.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_condition.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_continueList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_doList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlRepeatStatementInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlRepeatStatementInstruction (mAttribute_where, mAttribute_signature, mAttribute_limit, mAttribute_condition, mAttribute_continueList, mAttribute_doList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @gtlRepeatStatementInstruction type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlRepeatStatementInstruction ("gtlRepeatStatementInstruction",
                                                      & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlRepeatStatementInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlRepeatStatementInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlRepeatStatementInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlRepeatStatementInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlRepeatStatementInstruction GALGAS_gtlRepeatStatementInstruction::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlRepeatStatementInstruction result ;
  const GALGAS_gtlRepeatStatementInstruction * p = (const GALGAS_gtlRepeatStatementInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlRepeatStatementInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlRepeatStatementInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlErrorStatementInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlErrorStatementInstruction * p = (const cPtr_gtlErrorStatementInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlErrorStatementInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_identifier.objectCompare (p->mAttribute_identifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_hereInstead.objectCompare (p->mAttribute_hereInstead) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_errorMessage.objectCompare (p->mAttribute_errorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlErrorStatementInstruction::objectCompare (const GALGAS_gtlErrorStatementInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlErrorStatementInstruction::GALGAS_gtlErrorStatementInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlErrorStatementInstruction::GALGAS_gtlErrorStatementInstruction (const cPtr_gtlErrorStatementInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlErrorStatementInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlErrorStatementInstruction GALGAS_gtlErrorStatementInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                          const GALGAS_string & inAttribute_signature,
                                                                                          const GALGAS_gtlVarPath & inAttribute_identifier,
                                                                                          const GALGAS_bool & inAttribute_hereInstead,
                                                                                          const GALGAS_gtlExpression & inAttribute_errorMessage
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlErrorStatementInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_identifier.isValid () && inAttribute_hereInstead.isValid () && inAttribute_errorMessage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlErrorStatementInstruction (inAttribute_where, inAttribute_signature, inAttribute_identifier, inAttribute_hereInstead, inAttribute_errorMessage COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath GALGAS_gtlErrorStatementInstruction::getter_identifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlVarPath result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlErrorStatementInstruction * p = (const cPtr_gtlErrorStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlErrorStatementInstruction) ;
    result = p->mAttribute_identifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath cPtr_gtlErrorStatementInstruction::getter_identifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_identifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_gtlErrorStatementInstruction::getter_hereInstead (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlErrorStatementInstruction * p = (const cPtr_gtlErrorStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlErrorStatementInstruction) ;
    result = p->mAttribute_hereInstead ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_gtlErrorStatementInstruction::getter_hereInstead (UNUSED_LOCATION_ARGS) const {
  return mAttribute_hereInstead ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlErrorStatementInstruction::getter_errorMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlErrorStatementInstruction * p = (const cPtr_gtlErrorStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlErrorStatementInstruction) ;
    result = p->mAttribute_errorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlErrorStatementInstruction::getter_errorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_errorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @gtlErrorStatementInstruction class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlErrorStatementInstruction::cPtr_gtlErrorStatementInstruction (const GALGAS_location & in_where,
                                                                      const GALGAS_string & in_signature,
                                                                      const GALGAS_gtlVarPath & in_identifier,
                                                                      const GALGAS_bool & in_hereInstead,
                                                                      const GALGAS_gtlExpression & in_errorMessage
                                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_identifier (in_identifier),
mAttribute_hereInstead (in_hereInstead),
mAttribute_errorMessage (in_errorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlErrorStatementInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlErrorStatementInstruction ;
}

void cPtr_gtlErrorStatementInstruction::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@gtlErrorStatementInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_identifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_hereInstead.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_errorMessage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlErrorStatementInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlErrorStatementInstruction (mAttribute_where, mAttribute_signature, mAttribute_identifier, mAttribute_hereInstead, mAttribute_errorMessage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @gtlErrorStatementInstruction type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlErrorStatementInstruction ("gtlErrorStatementInstruction",
                                                     & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlErrorStatementInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlErrorStatementInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlErrorStatementInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlErrorStatementInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlErrorStatementInstruction GALGAS_gtlErrorStatementInstruction::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlErrorStatementInstruction result ;
  const GALGAS_gtlErrorStatementInstruction * p = (const GALGAS_gtlErrorStatementInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlErrorStatementInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlErrorStatementInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlWarningStatementInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlWarningStatementInstruction * p = (const cPtr_gtlWarningStatementInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlWarningStatementInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_identifier.objectCompare (p->mAttribute_identifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_hereInstead.objectCompare (p->mAttribute_hereInstead) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_warningMessage.objectCompare (p->mAttribute_warningMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlWarningStatementInstruction::objectCompare (const GALGAS_gtlWarningStatementInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWarningStatementInstruction::GALGAS_gtlWarningStatementInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWarningStatementInstruction::GALGAS_gtlWarningStatementInstruction (const cPtr_gtlWarningStatementInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlWarningStatementInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWarningStatementInstruction GALGAS_gtlWarningStatementInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                              const GALGAS_string & inAttribute_signature,
                                                                                              const GALGAS_gtlVarPath & inAttribute_identifier,
                                                                                              const GALGAS_bool & inAttribute_hereInstead,
                                                                                              const GALGAS_gtlExpression & inAttribute_warningMessage
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlWarningStatementInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_identifier.isValid () && inAttribute_hereInstead.isValid () && inAttribute_warningMessage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlWarningStatementInstruction (inAttribute_where, inAttribute_signature, inAttribute_identifier, inAttribute_hereInstead, inAttribute_warningMessage COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath GALGAS_gtlWarningStatementInstruction::getter_identifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlVarPath result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlWarningStatementInstruction * p = (const cPtr_gtlWarningStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlWarningStatementInstruction) ;
    result = p->mAttribute_identifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath cPtr_gtlWarningStatementInstruction::getter_identifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_identifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_gtlWarningStatementInstruction::getter_hereInstead (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlWarningStatementInstruction * p = (const cPtr_gtlWarningStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlWarningStatementInstruction) ;
    result = p->mAttribute_hereInstead ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_gtlWarningStatementInstruction::getter_hereInstead (UNUSED_LOCATION_ARGS) const {
  return mAttribute_hereInstead ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlWarningStatementInstruction::getter_warningMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlWarningStatementInstruction * p = (const cPtr_gtlWarningStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlWarningStatementInstruction) ;
    result = p->mAttribute_warningMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlWarningStatementInstruction::getter_warningMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_warningMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @gtlWarningStatementInstruction class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlWarningStatementInstruction::cPtr_gtlWarningStatementInstruction (const GALGAS_location & in_where,
                                                                          const GALGAS_string & in_signature,
                                                                          const GALGAS_gtlVarPath & in_identifier,
                                                                          const GALGAS_bool & in_hereInstead,
                                                                          const GALGAS_gtlExpression & in_warningMessage
                                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_identifier (in_identifier),
mAttribute_hereInstead (in_hereInstead),
mAttribute_warningMessage (in_warningMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlWarningStatementInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWarningStatementInstruction ;
}

void cPtr_gtlWarningStatementInstruction::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@gtlWarningStatementInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_identifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_hereInstead.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_warningMessage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlWarningStatementInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlWarningStatementInstruction (mAttribute_where, mAttribute_signature, mAttribute_identifier, mAttribute_hereInstead, mAttribute_warningMessage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @gtlWarningStatementInstruction type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlWarningStatementInstruction ("gtlWarningStatementInstruction",
                                                       & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlWarningStatementInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWarningStatementInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlWarningStatementInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlWarningStatementInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWarningStatementInstruction GALGAS_gtlWarningStatementInstruction::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlWarningStatementInstruction result ;
  const GALGAS_gtlWarningStatementInstruction * p = (const GALGAS_gtlWarningStatementInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlWarningStatementInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlWarningStatementInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlPrintStatementInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlPrintStatementInstruction * p = (const cPtr_gtlPrintStatementInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlPrintStatementInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_carriageReturn.objectCompare (p->mAttribute_carriageReturn) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_messageToPrint.objectCompare (p->mAttribute_messageToPrint) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlPrintStatementInstruction::objectCompare (const GALGAS_gtlPrintStatementInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlPrintStatementInstruction::GALGAS_gtlPrintStatementInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlPrintStatementInstruction::GALGAS_gtlPrintStatementInstruction (const cPtr_gtlPrintStatementInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlPrintStatementInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlPrintStatementInstruction GALGAS_gtlPrintStatementInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                          const GALGAS_string & inAttribute_signature,
                                                                                          const GALGAS_bool & inAttribute_carriageReturn,
                                                                                          const GALGAS_gtlExpression & inAttribute_messageToPrint
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlPrintStatementInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_carriageReturn.isValid () && inAttribute_messageToPrint.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlPrintStatementInstruction (inAttribute_where, inAttribute_signature, inAttribute_carriageReturn, inAttribute_messageToPrint COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_gtlPrintStatementInstruction::getter_carriageReturn (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlPrintStatementInstruction * p = (const cPtr_gtlPrintStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlPrintStatementInstruction) ;
    result = p->mAttribute_carriageReturn ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_gtlPrintStatementInstruction::getter_carriageReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_carriageReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlPrintStatementInstruction::getter_messageToPrint (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlPrintStatementInstruction * p = (const cPtr_gtlPrintStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlPrintStatementInstruction) ;
    result = p->mAttribute_messageToPrint ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlPrintStatementInstruction::getter_messageToPrint (UNUSED_LOCATION_ARGS) const {
  return mAttribute_messageToPrint ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @gtlPrintStatementInstruction class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlPrintStatementInstruction::cPtr_gtlPrintStatementInstruction (const GALGAS_location & in_where,
                                                                      const GALGAS_string & in_signature,
                                                                      const GALGAS_bool & in_carriageReturn,
                                                                      const GALGAS_gtlExpression & in_messageToPrint
                                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_carriageReturn (in_carriageReturn),
mAttribute_messageToPrint (in_messageToPrint) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlPrintStatementInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlPrintStatementInstruction ;
}

void cPtr_gtlPrintStatementInstruction::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@gtlPrintStatementInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_carriageReturn.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_messageToPrint.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlPrintStatementInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlPrintStatementInstruction (mAttribute_where, mAttribute_signature, mAttribute_carriageReturn, mAttribute_messageToPrint COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @gtlPrintStatementInstruction type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlPrintStatementInstruction ("gtlPrintStatementInstruction",
                                                     & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlPrintStatementInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlPrintStatementInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlPrintStatementInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlPrintStatementInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlPrintStatementInstruction GALGAS_gtlPrintStatementInstruction::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlPrintStatementInstruction result ;
  const GALGAS_gtlPrintStatementInstruction * p = (const GALGAS_gtlPrintStatementInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlPrintStatementInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlPrintStatementInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlSortStatementInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlSortStatementInstruction * p = (const cPtr_gtlSortStatementInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlSortStatementInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_variablePath.objectCompare (p->mAttribute_variablePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_order.objectCompare (p->mAttribute_order) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlSortStatementInstruction::objectCompare (const GALGAS_gtlSortStatementInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSortStatementInstruction::GALGAS_gtlSortStatementInstruction (void) :
GALGAS_gtlAbstractSortInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSortStatementInstruction GALGAS_gtlSortStatementInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlSortStatementInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_string::constructor_default (HERE),
                                                              GALGAS_gtlVarPath::constructor_emptyList (HERE),
                                                              GALGAS_lsint::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSortStatementInstruction::GALGAS_gtlSortStatementInstruction (const cPtr_gtlSortStatementInstruction * inSourcePtr) :
GALGAS_gtlAbstractSortInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlSortStatementInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSortStatementInstruction GALGAS_gtlSortStatementInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                        const GALGAS_string & inAttribute_signature,
                                                                                        const GALGAS_gtlVarPath & inAttribute_variablePath,
                                                                                        const GALGAS_lsint & inAttribute_order
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlSortStatementInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_variablePath.isValid () && inAttribute_order.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlSortStatementInstruction (inAttribute_where, inAttribute_signature, inAttribute_variablePath, inAttribute_order COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_gtlSortStatementInstruction::getter_order (UNUSED_LOCATION_ARGS) const {
  GALGAS_lsint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlSortStatementInstruction * p = (const cPtr_gtlSortStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlSortStatementInstruction) ;
    result = p->mAttribute_order ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint cPtr_gtlSortStatementInstruction::getter_order (UNUSED_LOCATION_ARGS) const {
  return mAttribute_order ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @gtlSortStatementInstruction class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlSortStatementInstruction::cPtr_gtlSortStatementInstruction (const GALGAS_location & in_where,
                                                                    const GALGAS_string & in_signature,
                                                                    const GALGAS_gtlVarPath & in_variablePath,
                                                                    const GALGAS_lsint & in_order
                                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlAbstractSortInstruction (in_where, in_signature, in_variablePath COMMA_THERE),
mAttribute_order (in_order) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlSortStatementInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSortStatementInstruction ;
}

void cPtr_gtlSortStatementInstruction::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@gtlSortStatementInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_variablePath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_order.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlSortStatementInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlSortStatementInstruction (mAttribute_where, mAttribute_signature, mAttribute_variablePath, mAttribute_order COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlSortStatementInstruction type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlSortStatementInstruction ("gtlSortStatementInstruction",
                                                    & kTypeDescriptor_GALGAS_gtlAbstractSortInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlSortStatementInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSortStatementInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlSortStatementInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlSortStatementInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSortStatementInstruction GALGAS_gtlSortStatementInstruction::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlSortStatementInstruction result ;
  const GALGAS_gtlSortStatementInstruction * p = (const GALGAS_gtlSortStatementInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlSortStatementInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlSortStatementInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlTabStatementInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlTabStatementInstruction * p = (const cPtr_gtlTabStatementInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlTabStatementInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_tabValue.objectCompare (p->mAttribute_tabValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlTabStatementInstruction::objectCompare (const GALGAS_gtlTabStatementInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTabStatementInstruction::GALGAS_gtlTabStatementInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTabStatementInstruction::GALGAS_gtlTabStatementInstruction (const cPtr_gtlTabStatementInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlTabStatementInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTabStatementInstruction GALGAS_gtlTabStatementInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                      const GALGAS_string & inAttribute_signature,
                                                                                      const GALGAS_gtlExpression & inAttribute_tabValue
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlTabStatementInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_tabValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlTabStatementInstruction (inAttribute_where, inAttribute_signature, inAttribute_tabValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlTabStatementInstruction::getter_tabValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlTabStatementInstruction * p = (const cPtr_gtlTabStatementInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlTabStatementInstruction) ;
    result = p->mAttribute_tabValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlTabStatementInstruction::getter_tabValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_tabValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @gtlTabStatementInstruction class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlTabStatementInstruction::cPtr_gtlTabStatementInstruction (const GALGAS_location & in_where,
                                                                  const GALGAS_string & in_signature,
                                                                  const GALGAS_gtlExpression & in_tabValue
                                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_tabValue (in_tabValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlTabStatementInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTabStatementInstruction ;
}

void cPtr_gtlTabStatementInstruction::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@gtlTabStatementInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_tabValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlTabStatementInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlTabStatementInstruction (mAttribute_where, mAttribute_signature, mAttribute_tabValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlTabStatementInstruction type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTabStatementInstruction ("gtlTabStatementInstruction",
                                                   & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlTabStatementInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTabStatementInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlTabStatementInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTabStatementInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTabStatementInstruction GALGAS_gtlTabStatementInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlTabStatementInstruction result ;
  const GALGAS_gtlTabStatementInstruction * p = (const GALGAS_gtlTabStatementInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlTabStatementInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTabStatementInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlSetterCallInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlSetterCallInstruction * p = (const cPtr_gtlSetterCallInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlSetterCallInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_target.objectCompare (p->mAttribute_target) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_setterName.objectCompare (p->mAttribute_setterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_arguments.objectCompare (p->mAttribute_arguments) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlSetterCallInstruction::objectCompare (const GALGAS_gtlSetterCallInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterCallInstruction::GALGAS_gtlSetterCallInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterCallInstruction GALGAS_gtlSetterCallInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlSetterCallInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_gtlVarPath::constructor_emptyList (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_gtlExpressionList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterCallInstruction::GALGAS_gtlSetterCallInstruction (const cPtr_gtlSetterCallInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlSetterCallInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterCallInstruction GALGAS_gtlSetterCallInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                  const GALGAS_string & inAttribute_signature,
                                                                                  const GALGAS_gtlVarPath & inAttribute_target,
                                                                                  const GALGAS_lstring & inAttribute_setterName,
                                                                                  const GALGAS_gtlExpressionList & inAttribute_arguments
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlSetterCallInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_target.isValid () && inAttribute_setterName.isValid () && inAttribute_arguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlSetterCallInstruction (inAttribute_where, inAttribute_signature, inAttribute_target, inAttribute_setterName, inAttribute_arguments COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath GALGAS_gtlSetterCallInstruction::getter_target (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlVarPath result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlSetterCallInstruction * p = (const cPtr_gtlSetterCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlSetterCallInstruction) ;
    result = p->mAttribute_target ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath cPtr_gtlSetterCallInstruction::getter_target (UNUSED_LOCATION_ARGS) const {
  return mAttribute_target ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlSetterCallInstruction::getter_setterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlSetterCallInstruction * p = (const cPtr_gtlSetterCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlSetterCallInstruction) ;
    result = p->mAttribute_setterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlSetterCallInstruction::getter_setterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_setterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList GALGAS_gtlSetterCallInstruction::getter_arguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlSetterCallInstruction * p = (const cPtr_gtlSetterCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlSetterCallInstruction) ;
    result = p->mAttribute_arguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList cPtr_gtlSetterCallInstruction::getter_arguments (UNUSED_LOCATION_ARGS) const {
  return mAttribute_arguments ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlSetterCallInstruction class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlSetterCallInstruction::cPtr_gtlSetterCallInstruction (const GALGAS_location & in_where,
                                                              const GALGAS_string & in_signature,
                                                              const GALGAS_gtlVarPath & in_target,
                                                              const GALGAS_lstring & in_setterName,
                                                              const GALGAS_gtlExpressionList & in_arguments
                                                              COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_target (in_target),
mAttribute_setterName (in_setterName),
mAttribute_arguments (in_arguments) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlSetterCallInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSetterCallInstruction ;
}

void cPtr_gtlSetterCallInstruction::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@gtlSetterCallInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_target.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_setterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_arguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlSetterCallInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlSetterCallInstruction (mAttribute_where, mAttribute_signature, mAttribute_target, mAttribute_setterName, mAttribute_arguments COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlSetterCallInstruction type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlSetterCallInstruction ("gtlSetterCallInstruction",
                                                 & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlSetterCallInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSetterCallInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlSetterCallInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlSetterCallInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterCallInstruction GALGAS_gtlSetterCallInstruction::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlSetterCallInstruction result ;
  const GALGAS_gtlSetterCallInstruction * p = (const GALGAS_gtlSetterCallInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlSetterCallInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlSetterCallInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension setter '@debuggerContext appendInstructionToStepDo'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_appendInstructionToStepDo> gExtensionModifierTable_debuggerContext_appendInstructionToStepDo ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_appendInstructionToStepDo (const int32_t inClassIndex,
                                                     extensionSetterSignature_debuggerContext_appendInstructionToStepDo inModifier) {
  gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_appendInstructionToStepDo (cPtr_debuggerContext * inObject,
                                                    GALGAS_gtlInstruction in_instruction,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_appendInstructionToStepDo f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.count ()) {
      f = gExtensionModifierTable_debuggerContext_appendInstructionToStepDo (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.count ()) {
           f = gExtensionModifierTable_debuggerContext_appendInstructionToStepDo (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_instruction, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_appendInstructionToStepDo (cPtr_debuggerContext * inObject,
                                                                       GALGAS_gtlInstruction inArgument_instruction,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mAttribute_doList.addAssign_operation (inArgument_instruction  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 130)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_appendInstructionToStepDo (void) {
  enterExtensionSetter_appendInstructionToStepDo (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                                  extensionSetter_debuggerContext_appendInstructionToStepDo) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_appendInstructionToStepDo (void) {
  gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_appendInstructionToStepDo (defineExtensionSetter_debuggerContext_appendInstructionToStepDo,
                                                                      freeExtensionModifier_debuggerContext_appendInstructionToStepDo) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension setter '@debuggerContext deleteStepDoInstruction'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteStepDoInstruction> gExtensionModifierTable_debuggerContext_deleteStepDoInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteStepDoInstruction (const int32_t inClassIndex,
                                                   extensionSetterSignature_debuggerContext_deleteStepDoInstruction inModifier) {
  gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteStepDoInstruction (cPtr_debuggerContext * inObject,
                                                  const GALGAS_lbigint constin_numToDelete,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteStepDoInstruction f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteStepDoInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteStepDoInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_deleteStepDoInstruction (cPtr_debuggerContext * inObject,
                                                                     const GALGAS_lbigint constinArgument_numToDelete,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 137)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger.galgas", 137)).getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 137)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_numToDeleteUInt_5322 = constinArgument_numToDelete.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 138)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_numToDeleteUInt_5322.objectCompare (object->mAttribute_doList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 139)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_gtlInstruction var_instruction_5448 ;
      {
      object->mAttribute_doList.setter_removeAtIndex (var_instruction_5448, var_numToDeleteUInt_5322, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 140)) ;
      }
      inCompiler->printMessage (GALGAS_string ("Command: ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 141)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 142))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 142)) ;
      callExtensionMethod_display ((const cPtr_gtlInstruction *) var_instruction_5448.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 143)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 144))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 144)) ;
      inCompiler->printMessage (GALGAS_string (" deleted\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 145)) ;
    }else if (kBoolFalse == test_1) {
      inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 147))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 147)) ;
      inCompiler->printMessage (GALGAS_string ("no do command at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 148)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 148)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 148))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 148)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 151))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 151)) ;
    inCompiler->printMessage (GALGAS_string ("no do command at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 152)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 152))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 152)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_deleteStepDoInstruction (void) {
  enterExtensionSetter_deleteStepDoInstruction (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                                extensionSetter_debuggerContext_deleteStepDoInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_deleteStepDoInstruction (void) {
  gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_deleteStepDoInstruction (defineExtensionSetter_debuggerContext_deleteStepDoInstruction,
                                                                    freeExtensionModifier_debuggerContext_deleteStepDoInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension setter '@debuggerContext deleteAllStepDoInstructions'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteAllStepDoInstructions> gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteAllStepDoInstructions (const int32_t inClassIndex,
                                                       extensionSetterSignature_debuggerContext_deleteAllStepDoInstructions inModifier) {
  gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteAllStepDoInstructions (cPtr_debuggerContext * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteAllStepDoInstructions f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_deleteAllStepDoInstructions (cPtr_debuggerContext * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mAttribute_doList = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 159)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_deleteAllStepDoInstructions (void) {
  enterExtensionSetter_deleteAllStepDoInstructions (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                                    extensionSetter_debuggerContext_deleteAllStepDoInstructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_deleteAllStepDoInstructions (void) {
  gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_deleteAllStepDoInstructions (defineExtensionSetter_debuggerContext_deleteAllStepDoInstructions,
                                                                        freeExtensionModifier_debuggerContext_deleteAllStepDoInstructions) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@debuggerContext listStepDoInstructions'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_debuggerContext_listStepDoInstructions> gExtensionMethodTable_debuggerContext_listStepDoInstructions ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_listStepDoInstructions (const int32_t inClassIndex,
                                                  extensionMethodSignature_debuggerContext_listStepDoInstructions inMethod) {
  gExtensionMethodTable_debuggerContext_listStepDoInstructions.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_listStepDoInstructions (const cPtr_debuggerContext * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_listStepDoInstructions f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_listStepDoInstructions.count ()) {
      f = gExtensionMethodTable_debuggerContext_listStepDoInstructions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_listStepDoInstructions.count ()) {
           f = gExtensionMethodTable_debuggerContext_listStepDoInstructions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_listStepDoInstructions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_debuggerContext_listStepDoInstructions (const cPtr_debuggerContext * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_doList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Step do commands:\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 166)) ;
    cEnumerator_gtlInstructionList enumerator_6282 (object->mAttribute_doList, kEnumeration_up) ;
    GALGAS_uint index_6258 ((uint32_t) 0) ;
    while (enumerator_6282.hasCurrentObject ()) {
      inCompiler->printMessage (index_6258.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 168)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 4U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 169))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 169)) ;
      callExtensionMethod_display ((const cPtr_gtlInstruction *) enumerator_6282.current_instruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 170)) ;
      inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 171)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 172))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 172)) ;
      enumerator_6282.gotoNextObject () ;
      index_6258.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 167)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("No step do commands\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 175)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_debuggerContext_listStepDoInstructions (void) {
  enterExtensionMethod_listStepDoInstructions (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                               extensionMethod_debuggerContext_listStepDoInstructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_debuggerContext_listStepDoInstructions (void) {
  gExtensionMethodTable_debuggerContext_listStepDoInstructions.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_debuggerContext_listStepDoInstructions (defineExtensionMethod_debuggerContext_listStepDoInstructions,
                                                                   freeExtensionMethod_debuggerContext_listStepDoInstructions) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension setter '@debuggerContext setBreakpoint'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_setBreakpoint> gExtensionModifierTable_debuggerContext_setBreakpoint ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setBreakpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_debuggerContext_setBreakpoint inModifier) {
  gExtensionModifierTable_debuggerContext_setBreakpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setBreakpoint (cPtr_debuggerContext * inObject,
                                        const GALGAS_string constin_fileName,
                                        const GALGAS_uint constin_lineNum,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_setBreakpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_setBreakpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_setBreakpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_setBreakpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_setBreakpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_setBreakpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_fileName, constin_lineNum, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_setBreakpoint (cPtr_debuggerContext * inObject,
                                                           const GALGAS_string constinArgument_fileName,
                                                           const GALGAS_uint constinArgument_lineNum,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  GALGAS_string var_signature_6741 = constinArgument_fileName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 184)).add_operation (constinArgument_lineNum.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 184)).getter_md_35_ (SOURCE_FILE ("gtl_debugger.galgas", 184)) ;
  GALGAS_bool var_notThere_6791 = GALGAS_bool (true) ;
  cEnumerator_gtlBreakpointList enumerator_6824 (object->mAttribute_breakpoints, kEnumeration_up) ;
  while (enumerator_6824.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_6824.current_breakpoint (HERE).getter_signature (SOURCE_FILE ("gtl_debugger.galgas", 187)).objectCompare (var_signature_6741)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_notThere_6791 = GALGAS_bool (false) ;
    }
    enumerator_6824.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = var_notThere_6791.boolEnum () ;
  if (kBoolTrue == test_1) {
    object->mAttribute_breakpoints.addAssign_operation (GALGAS_gtlBreakpoint::constructor_new (constinArgument_fileName, constinArgument_lineNum, var_signature_6741  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 192))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 192)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_setBreakpoint (void) {
  enterExtensionSetter_setBreakpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                      extensionSetter_debuggerContext_setBreakpoint) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_setBreakpoint (void) {
  gExtensionModifierTable_debuggerContext_setBreakpoint.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_setBreakpoint (defineExtensionSetter_debuggerContext_setBreakpoint,
                                                          freeExtensionModifier_debuggerContext_setBreakpoint) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@debuggerContext listBreakpoints'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_debuggerContext_listBreakpoints> gExtensionMethodTable_debuggerContext_listBreakpoints ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_listBreakpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_debuggerContext_listBreakpoints inMethod) {
  gExtensionMethodTable_debuggerContext_listBreakpoints.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_listBreakpoints (const cPtr_debuggerContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_listBreakpoints f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_listBreakpoints.count ()) {
      f = gExtensionMethodTable_debuggerContext_listBreakpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_listBreakpoints.count ()) {
           f = gExtensionMethodTable_debuggerContext_listBreakpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_listBreakpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_debuggerContext_listBreakpoints (const cPtr_debuggerContext * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_breakpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 199)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Breakpoints:\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 200)) ;
    cEnumerator_gtlBreakpointList enumerator_7224 (object->mAttribute_breakpoints, kEnumeration_up) ;
    GALGAS_uint index_7204 ((uint32_t) 0) ;
    while (enumerator_7224.hasCurrentObject ()) {
      inCompiler->printMessage (index_7204.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 202)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 4U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 202)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 202))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 202)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 203))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 203)) ;
      inCompiler->printMessage (enumerator_7224.current_breakpoint (HERE).getter_fileName (SOURCE_FILE ("gtl_debugger.galgas", 204)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 204)).add_operation (enumerator_7224.current_breakpoint (HERE).getter_lineNum (SOURCE_FILE ("gtl_debugger.galgas", 204)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 204))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 204)) ;
      inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 205)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 206))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 206)) ;
      enumerator_7224.gotoNextObject () ;
      index_7204.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 201)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("No breakpoint\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 209)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_debuggerContext_listBreakpoints (void) {
  enterExtensionMethod_listBreakpoints (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                        extensionMethod_debuggerContext_listBreakpoints) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_debuggerContext_listBreakpoints (void) {
  gExtensionMethodTable_debuggerContext_listBreakpoints.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_debuggerContext_listBreakpoints (defineExtensionMethod_debuggerContext_listBreakpoints,
                                                            freeExtensionMethod_debuggerContext_listBreakpoints) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension setter '@debuggerContext deleteBreakpoint'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteBreakpoint> gExtensionModifierTable_debuggerContext_deleteBreakpoint ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteBreakpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_debuggerContext_deleteBreakpoint inModifier) {
  gExtensionModifierTable_debuggerContext_deleteBreakpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteBreakpoint (cPtr_debuggerContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteBreakpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteBreakpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteBreakpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteBreakpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteBreakpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteBreakpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_deleteBreakpoint (cPtr_debuggerContext * inObject,
                                                              const GALGAS_lbigint constinArgument_numToDelete,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 217)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger.galgas", 217)).getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 217)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_numToDeleteUInt_7767 = constinArgument_numToDelete.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 218)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_numToDeleteUInt_7767.objectCompare (object->mAttribute_breakpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 219)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_gtlBreakpoint var_bp_7893 ;
      {
      object->mAttribute_breakpoints.setter_removeAtIndex (var_bp_7893, var_numToDeleteUInt_7767, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 220)) ;
      }
      inCompiler->printMessage (GALGAS_string ("Breakpoint: ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 221)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 222))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 222)) ;
      inCompiler->printMessage (var_bp_7893.getter_fileName (SOURCE_FILE ("gtl_debugger.galgas", 223)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 223)).add_operation (var_bp_7893.getter_lineNum (SOURCE_FILE ("gtl_debugger.galgas", 223)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 223))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 223)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 224))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 224)) ;
      inCompiler->printMessage (GALGAS_string (" deleted\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 225)) ;
    }else if (kBoolFalse == test_1) {
      inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 227))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 227)) ;
      inCompiler->printMessage (GALGAS_string ("no breakpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 228)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 228)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 228))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 228)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 231))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 231)) ;
    inCompiler->printMessage (GALGAS_string ("no breakpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 232)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 232))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 232)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_deleteBreakpoint (void) {
  enterExtensionSetter_deleteBreakpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                         extensionSetter_debuggerContext_deleteBreakpoint) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_deleteBreakpoint (void) {
  gExtensionModifierTable_debuggerContext_deleteBreakpoint.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_deleteBreakpoint (defineExtensionSetter_debuggerContext_deleteBreakpoint,
                                                             freeExtensionModifier_debuggerContext_deleteBreakpoint) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension setter '@debuggerContext deleteAllBreakpoints'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteAllBreakpoints> gExtensionModifierTable_debuggerContext_deleteAllBreakpoints ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteAllBreakpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_debuggerContext_deleteAllBreakpoints inModifier) {
  gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteAllBreakpoints (cPtr_debuggerContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteAllBreakpoints f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteAllBreakpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteAllBreakpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_deleteAllBreakpoints (cPtr_debuggerContext * inObject,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mAttribute_breakpoints = GALGAS_gtlBreakpointList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 239)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_deleteAllBreakpoints (void) {
  enterExtensionSetter_deleteAllBreakpoints (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                             extensionSetter_debuggerContext_deleteAllBreakpoints) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_deleteAllBreakpoints (void) {
  gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_deleteAllBreakpoints (defineExtensionSetter_debuggerContext_deleteAllBreakpoints,
                                                                 freeExtensionModifier_debuggerContext_deleteAllBreakpoints) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension setter '@debuggerContext setWatchpoint'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_setWatchpoint> gExtensionModifierTable_debuggerContext_setWatchpoint ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setWatchpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_debuggerContext_setWatchpoint inModifier) {
  gExtensionModifierTable_debuggerContext_setWatchpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setWatchpoint (cPtr_debuggerContext * inObject,
                                        const GALGAS_gtlExpression constin_watchExpression,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_setWatchpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_setWatchpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_setWatchpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_setWatchpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_setWatchpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_setWatchpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_watchExpression, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_setWatchpoint (cPtr_debuggerContext * inObject,
                                                           const GALGAS_gtlExpression constinArgument_watchExpression,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mAttribute_watchpoints.addAssign_operation (constinArgument_watchExpression  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 246)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_setWatchpoint (void) {
  enterExtensionSetter_setWatchpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                      extensionSetter_debuggerContext_setWatchpoint) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_setWatchpoint (void) {
  gExtensionModifierTable_debuggerContext_setWatchpoint.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_setWatchpoint (defineExtensionSetter_debuggerContext_setWatchpoint,
                                                          freeExtensionModifier_debuggerContext_setWatchpoint) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@debuggerContext listWatchpoints'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_debuggerContext_listWatchpoints> gExtensionMethodTable_debuggerContext_listWatchpoints ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_listWatchpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_debuggerContext_listWatchpoints inMethod) {
  gExtensionMethodTable_debuggerContext_listWatchpoints.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_listWatchpoints (const cPtr_debuggerContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_listWatchpoints f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_listWatchpoints.count ()) {
      f = gExtensionMethodTable_debuggerContext_listWatchpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_listWatchpoints.count ()) {
           f = gExtensionMethodTable_debuggerContext_listWatchpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_listWatchpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_debuggerContext_listWatchpoints (const cPtr_debuggerContext * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_watchpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 252)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Watchpoints:\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 253)) ;
    cEnumerator_gtlExpressionList enumerator_8933 (object->mAttribute_watchpoints, kEnumeration_up) ;
    GALGAS_uint index_8913 ((uint32_t) 0) ;
    while (enumerator_8933.hasCurrentObject ()) {
      inCompiler->printMessage (index_8913.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 255)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 4U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 255)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 255))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 255)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 256))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 256)) ;
      inCompiler->printMessage (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_8933.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 257))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 257)) ;
      inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 258)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 259))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 259)) ;
      enumerator_8933.gotoNextObject () ;
      index_8913.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 254)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("No Watchpoint\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 262)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_debuggerContext_listWatchpoints (void) {
  enterExtensionMethod_listWatchpoints (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                        extensionMethod_debuggerContext_listWatchpoints) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_debuggerContext_listWatchpoints (void) {
  gExtensionMethodTable_debuggerContext_listWatchpoints.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_debuggerContext_listWatchpoints (defineExtensionMethod_debuggerContext_listWatchpoints,
                                                            freeExtensionMethod_debuggerContext_listWatchpoints) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension setter '@debuggerContext deleteWatchpoint'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteWatchpoint> gExtensionModifierTable_debuggerContext_deleteWatchpoint ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteWatchpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_debuggerContext_deleteWatchpoint inModifier) {
  gExtensionModifierTable_debuggerContext_deleteWatchpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteWatchpoint (cPtr_debuggerContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteWatchpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteWatchpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteWatchpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteWatchpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteWatchpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteWatchpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_deleteWatchpoint (cPtr_debuggerContext * inObject,
                                                              const GALGAS_lbigint constinArgument_numToDelete,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 270)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger.galgas", 270)).getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 270)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_numToDeleteUInt_9443 = constinArgument_numToDelete.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 271)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_numToDeleteUInt_9443.objectCompare (object->mAttribute_watchpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 272)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_gtlExpression var_wp_9569 ;
      {
      object->mAttribute_watchpoints.setter_removeAtIndex (var_wp_9569, var_numToDeleteUInt_9443, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 273)) ;
      }
      inCompiler->printMessage (GALGAS_string ("Watchpoint: ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 274)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 275))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 275)) ;
      inCompiler->printMessage (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) var_wp_9569.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 276))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 276)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 277))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 277)) ;
      inCompiler->printMessage (GALGAS_string (" deleted\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 278)) ;
    }else if (kBoolFalse == test_1) {
      inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 280))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 280)) ;
      inCompiler->printMessage (GALGAS_string ("no watchpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 281)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 281)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 281))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 281)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 284))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 284)) ;
    inCompiler->printMessage (GALGAS_string ("no watchpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 285)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 285)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 285))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 285)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_deleteWatchpoint (void) {
  enterExtensionSetter_deleteWatchpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                         extensionSetter_debuggerContext_deleteWatchpoint) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_deleteWatchpoint (void) {
  gExtensionModifierTable_debuggerContext_deleteWatchpoint.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_deleteWatchpoint (defineExtensionSetter_debuggerContext_deleteWatchpoint,
                                                             freeExtensionModifier_debuggerContext_deleteWatchpoint) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension setter '@debuggerContext deleteAllWatchpoints'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteAllWatchpoints> gExtensionModifierTable_debuggerContext_deleteAllWatchpoints ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteAllWatchpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_debuggerContext_deleteAllWatchpoints inModifier) {
  gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteAllWatchpoints (cPtr_debuggerContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteAllWatchpoints f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteAllWatchpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteAllWatchpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_deleteAllWatchpoints (cPtr_debuggerContext * inObject,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mAttribute_watchpoints = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 292)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_deleteAllWatchpoints (void) {
  enterExtensionSetter_deleteAllWatchpoints (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                             extensionSetter_debuggerContext_deleteAllWatchpoints) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_deleteAllWatchpoints (void) {
  gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_deleteAllWatchpoints (defineExtensionSetter_debuggerContext_deleteAllWatchpoints,
                                                                 freeExtensionModifier_debuggerContext_deleteAllWatchpoints) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@debuggerContext breakOn'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_debuggerContext_breakOn> gExtensionGetterTable_debuggerContext_breakOn ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_breakOn (const int32_t inClassIndex,
                                   enterExtensionGetter_debuggerContext_breakOn inGetter) {
  gExtensionGetterTable_debuggerContext_breakOn.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_breakOn (const cPtr_debuggerContext * inObject,
                                         const GALGAS_gtlInstruction & in_instruction,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_debuggerContext_breakOn f = NULL ;
    if (classIndex < gExtensionGetterTable_debuggerContext_breakOn.count ()) {
      f = gExtensionGetterTable_debuggerContext_breakOn (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_debuggerContext_breakOn.count ()) {
           f = gExtensionGetterTable_debuggerContext_breakOn (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_debuggerContext_breakOn.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_instruction, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_debuggerContext_breakOn (const cPtr_debuggerContext * inObject,
                                                            const GALGAS_gtlInstruction & constinArgument_instruction,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_breakOn ; // Returned variable
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  result_breakOn = GALGAS_bool (false) ;
  cEnumerator_gtlBreakpointList enumerator_10402 (object->mAttribute_breakpoints, kEnumeration_up) ;
  while (enumerator_10402.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_instruction.getter_signature (SOURCE_FILE ("gtl_debugger.galgas", 302)).objectCompare (enumerator_10402.current_breakpoint (HERE).getter_signature (SOURCE_FILE ("gtl_debugger.galgas", 302)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_breakOn = GALGAS_bool (true) ;
    }
    enumerator_10402.gotoNextObject () ;
  }
//---
  return result_breakOn ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_debuggerContext_breakOn (void) {
  enterExtensionGetter_breakOn (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                extensionGetter_debuggerContext_breakOn) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_debuggerContext_breakOn (void) {
  gExtensionGetterTable_debuggerContext_breakOn.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_debuggerContext_breakOn (defineExtensionGetter_debuggerContext_breakOn,
                                                    freeExtensionGetter_debuggerContext_breakOn) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@debuggerContext watchOn'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_debuggerContext_watchOn> gExtensionGetterTable_debuggerContext_watchOn ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_watchOn (const int32_t inClassIndex,
                                   enterExtensionGetter_debuggerContext_watchOn inGetter) {
  gExtensionGetterTable_debuggerContext_watchOn.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_watchOn (const cPtr_debuggerContext * inObject,
                                         const GALGAS_gtlContext & in_context,
                                         const GALGAS_gtlData & in_vars,
                                         const GALGAS_library & in_lib,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_debuggerContext_watchOn f = NULL ;
    if (classIndex < gExtensionGetterTable_debuggerContext_watchOn.count ()) {
      f = gExtensionGetterTable_debuggerContext_watchOn (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_debuggerContext_watchOn.count ()) {
           f = gExtensionGetterTable_debuggerContext_watchOn (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_debuggerContext_watchOn.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_context, in_vars, in_lib, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_debuggerContext_watchOn (const cPtr_debuggerContext * inObject,
                                                            const GALGAS_gtlContext & constinArgument_context,
                                                            const GALGAS_gtlData & constinArgument_vars,
                                                            const GALGAS_library & constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_watchOn ; // Returned variable
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  result_watchOn = GALGAS_bool (false) ;
  cEnumerator_gtlExpressionList enumerator_10747 (object->mAttribute_watchpoints, kEnumeration_up) ;
  while (enumerator_10747.hasCurrentObject ()) {
    GALGAS_gtlData var_watchResult_10775 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_10747.current_expression (HERE).ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 317)) ;
    const enumGalgasBool test_0 = GALGAS_bool (var_watchResult_10775.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (var_watchResult_10775.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_watchResult_10775.ptr ())) {
          temp_1 = (cPtr_gtlBool *) var_watchResult_10775.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", var_watchResult_10775.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_debugger.galgas", 319)) ;
        }
      }
      GALGAS_bool var_matchWatch_10869 = temp_1.getter_value (SOURCE_FILE ("gtl_debugger.galgas", 319)) ;
      const enumGalgasBool test_2 = var_matchWatch_10869.boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 321))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 321)) ;
        inCompiler->printMessage (GALGAS_string ("match ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 322)) ;
        inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 323))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 323)) ;
        inCompiler->printMessage (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_10747.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 324))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 324)) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 325)) ;
        inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 326))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 326)) ;
        result_watchOn = GALGAS_bool (true) ;
      }
    }
    enumerator_10747.gotoNextObject () ;
  }
//---
  return result_watchOn ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_debuggerContext_watchOn (void) {
  enterExtensionGetter_watchOn (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                extensionGetter_debuggerContext_watchOn) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_debuggerContext_watchOn (void) {
  gExtensionGetterTable_debuggerContext_watchOn.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_debuggerContext_watchOn (defineExtensionGetter_debuggerContext_watchOn,
                                                    freeExtensionGetter_debuggerContext_watchOn) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension method '@debuggerContext hereWeAre'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_debuggerContext_hereWeAre> gExtensionMethodTable_debuggerContext_hereWeAre ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_hereWeAre (const int32_t inClassIndex,
                                     extensionMethodSignature_debuggerContext_hereWeAre inMethod) {
  gExtensionMethodTable_debuggerContext_hereWeAre.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_hereWeAre (const cPtr_debuggerContext * inObject,
                                    const GALGAS_uint constin_window,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_hereWeAre f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_hereWeAre.count ()) {
      f = gExtensionMethodTable_debuggerContext_hereWeAre (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_hereWeAre.count ()) {
           f = gExtensionMethodTable_debuggerContext_hereWeAre (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_hereWeAre.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_window, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_debuggerContext_hereWeAre (const cPtr_debuggerContext * inObject,
                                                       const GALGAS_uint constinArgument_window,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  GALGAS_uint var_indentation_11338 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlInstructionListContextStack enumerator_11409 (object->mAttribute_contextStack.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 338)), kEnumeration_up) ;
  while (enumerator_11409.hasCurrentObject ()) {
    inCompiler->printMessage (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_indentation_11338  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 339))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 339)) ;
    const GALGAS_debuggerContext temp_0 = object ;
    callExtensionMethod_displayWithLocation ((const cPtr_gtlInstruction *) enumerator_11409.current_instructionList (HERE).getter_instructionAtIndex (enumerator_11409.current_nextInstructionIndex (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 340)).ptr (), temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 340)) ;
    var_indentation_11338 = var_indentation_11338.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 341)) ;
    enumerator_11409.gotoNextObject () ;
  }
  GALGAS_string var_identationString_11627 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_indentation_11338  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 344)) ;
  GALGAS_uint var_startIndex_11701 ;
  GALGAS_uint var_displayLength_11723 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_nextInstructionIndex.objectCompare (constinArgument_window)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_startIndex_11701 = object->mAttribute_nextInstructionIndex.substract_operation (constinArgument_window, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 349)) ;
  }else if (kBoolFalse == test_1) {
    var_startIndex_11701 = GALGAS_uint ((uint32_t) 0U) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_startIndex_11701.add_operation (constinArgument_window.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 353)).objectCompare (object->mAttribute_instructionList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 353)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_displayLength_11723 = GALGAS_uint ((uint32_t) 2U).multiply_operation (constinArgument_window, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 354)) ;
  }else if (kBoolFalse == test_2) {
    var_displayLength_11723 = object->mAttribute_instructionList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 356)).substract_operation (var_startIndex_11701, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 356)) ;
  }
  inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 358))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 358)) ;
  cEnumerator_gtlInstructionList enumerator_12131 (object->mAttribute_instructionList.getter_subListWithRange (GALGAS_range::constructor_new (var_startIndex_11701, var_displayLength_11723  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 360)), kEnumeration_up) ;
  GALGAS_uint index_12032 ((uint32_t) 0) ;
  while (enumerator_12131.hasCurrentObject ()) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, index_12032.add_operation (var_startIndex_11701, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 363)).objectCompare (object->mAttribute_nextInstructionIndex)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->printMessage (function_red (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 364)).add_operation (function_bold (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 364))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 364)) ;
      inCompiler->printMessage (var_identationString_11627.add_operation (GALGAS_string (">>> "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 365))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 365)) ;
      inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 366))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 366)) ;
    }else if (kBoolFalse == test_3) {
      inCompiler->printMessage (var_identationString_11627.add_operation (GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 368))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 368)) ;
    }
    const GALGAS_debuggerContext temp_4 = object ;
    callExtensionMethod_displayWithLocation ((const cPtr_gtlInstruction *) enumerator_12131.current_instruction (HERE).ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 370)) ;
    enumerator_12131.gotoNextObject () ;
    index_12032.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 359)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_debuggerContext_hereWeAre (void) {
  enterExtensionMethod_hereWeAre (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                  extensionMethod_debuggerContext_hereWeAre) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_debuggerContext_hereWeAre (void) {
  gExtensionMethodTable_debuggerContext_hereWeAre.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_debuggerContext_hereWeAre (defineExtensionMethod_debuggerContext_hereWeAre,
                                                      freeExtensionMethod_debuggerContext_hereWeAre) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension setter '@debuggerContext pushInstructionList'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_pushInstructionList> gExtensionModifierTable_debuggerContext_pushInstructionList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_pushInstructionList (const int32_t inClassIndex,
                                               extensionSetterSignature_debuggerContext_pushInstructionList inModifier) {
  gExtensionModifierTable_debuggerContext_pushInstructionList.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_pushInstructionList (cPtr_debuggerContext * inObject,
                                              const GALGAS_gtlInstructionList constin_instructions,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_pushInstructionList f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_pushInstructionList.count ()) {
      f = gExtensionModifierTable_debuggerContext_pushInstructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_pushInstructionList.count ()) {
           f = gExtensionModifierTable_debuggerContext_pushInstructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_pushInstructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_instructions, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_pushInstructionList (cPtr_debuggerContext * inObject,
                                                                 const GALGAS_gtlInstructionList constinArgument_instructions,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mAttribute_contextStack.addAssign_operation (object->mAttribute_nextInstructionIndex, object->mAttribute_instructionList  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 379)) ;
  object->mAttribute_nextInstructionIndex = GALGAS_uint ((uint32_t) 0U) ;
  object->mAttribute_instructionList = constinArgument_instructions ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_pushInstructionList (void) {
  enterExtensionSetter_pushInstructionList (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                            extensionSetter_debuggerContext_pushInstructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_pushInstructionList (void) {
  gExtensionModifierTable_debuggerContext_pushInstructionList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_pushInstructionList (defineExtensionSetter_debuggerContext_pushInstructionList,
                                                                freeExtensionModifier_debuggerContext_pushInstructionList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension setter '@debuggerContext popInstructionList'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_popInstructionList> gExtensionModifierTable_debuggerContext_popInstructionList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_popInstructionList (const int32_t inClassIndex,
                                              extensionSetterSignature_debuggerContext_popInstructionList inModifier) {
  gExtensionModifierTable_debuggerContext_popInstructionList.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_popInstructionList (cPtr_debuggerContext * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_popInstructionList f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_popInstructionList.count ()) {
      f = gExtensionModifierTable_debuggerContext_popInstructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_popInstructionList.count ()) {
           f = gExtensionModifierTable_debuggerContext_popInstructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_popInstructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_popInstructionList (cPtr_debuggerContext * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  {
  object->mAttribute_contextStack.setter_popLast (object->mAttribute_nextInstructionIndex, object->mAttribute_instructionList, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 386)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_popInstructionList (void) {
  enterExtensionSetter_popInstructionList (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                           extensionSetter_debuggerContext_popInstructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_popInstructionList (void) {
  gExtensionModifierTable_debuggerContext_popInstructionList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_popInstructionList (defineExtensionSetter_debuggerContext_popInstructionList,
                                                               freeExtensionModifier_debuggerContext_popInstructionList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension setter '@debuggerContext getCommand'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_getCommand> gExtensionModifierTable_debuggerContext_getCommand ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_getCommand (const int32_t inClassIndex,
                                      extensionSetterSignature_debuggerContext_getCommand inModifier) {
  gExtensionModifierTable_debuggerContext_getCommand.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_getCommand (cPtr_debuggerContext * inObject,
                                     GALGAS_string & out_command,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_command.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_getCommand f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_getCommand.count ()) {
      f = gExtensionModifierTable_debuggerContext_getCommand (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_getCommand.count ()) {
           f = gExtensionModifierTable_debuggerContext_getCommand (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_getCommand.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, out_command, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_getCommand (cPtr_debuggerContext * inObject,
                                                        GALGAS_string & outArgument_command,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  {
  object->mAttribute_commandInput.insulate (HERE) ;
  cPtr_debugCommandInput * ptr_12957 = (cPtr_debugCommandInput *) object->mAttribute_commandInput.ptr () ;
  callExtensionSetter_getCommand ((cPtr_debugCommandInput *) ptr_12957, outArgument_command, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 393)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_getCommand (void) {
  enterExtensionSetter_getCommand (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                   extensionSetter_debuggerContext_getCommand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_getCommand (void) {
  gExtensionModifierTable_debuggerContext_getCommand.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_getCommand (defineExtensionSetter_debuggerContext_getCommand,
                                                       freeExtensionModifier_debuggerContext_getCommand) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract extension getter '@gtlExpression stringRepresentation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlExpression_stringRepresentation> gExtensionGetterTable_gtlExpression_stringRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_stringRepresentation (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlExpression_stringRepresentation inGetter) {
  gExtensionGetterTable_gtlExpression_stringRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlExpression_stringRepresentation (void) {
  gExtensionGetterTable_gtlExpression_stringRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpression_stringRepresentation (NULL,
                                                               freeExtensionGetter_gtlExpression_stringRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlExpression_stringRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlExpression_stringRepresentation.count ()) {
      f = gExtensionGetterTable_gtlExpression_stringRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlExpression_stringRepresentation.count ()) {
           f = gExtensionGetterTable_gtlExpression_stringRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlExpression_stringRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract extension getter '@gtlData stringRepresentation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_stringRepresentation> gExtensionGetterTable_gtlData_stringRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_stringRepresentation (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlData_stringRepresentation inGetter) {
  gExtensionGetterTable_gtlData_stringRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_stringRepresentation (void) {
  gExtensionGetterTable_gtlData_stringRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_stringRepresentation (NULL,
                                                         freeExtensionGetter_gtlData_stringRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_stringRepresentation (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_stringRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_stringRepresentation.count ()) {
      f = gExtensionGetterTable_gtlData_stringRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_stringRepresentation.count ()) {
           f = gExtensionGetterTable_gtlData_stringRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_stringRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension Getter '@lsint stringRepresentation'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_lsint & inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lsint temp_0 = inObject ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, GALGAS_sint ((int32_t) 0L).objectCompare (temp_0.getter_sint (SOURCE_FILE ("gtl_debugger.galgas", 1106)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("<") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string (">") ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlDoNotInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlDoNotInstruction * p = (const cPtr_gtlDoNotInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlDoNotInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_numToDelete.objectCompare (p->mAttribute_numToDelete) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlDoNotInstruction::objectCompare (const GALGAS_gtlDoNotInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotInstruction::GALGAS_gtlDoNotInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotInstruction GALGAS_gtlDoNotInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlDoNotInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_lbigint::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotInstruction::GALGAS_gtlDoNotInstruction (const cPtr_gtlDoNotInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlDoNotInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotInstruction GALGAS_gtlDoNotInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                        const GALGAS_string & inAttribute_signature,
                                                                        const GALGAS_lbigint & inAttribute_numToDelete
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoNotInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_numToDelete.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlDoNotInstruction (inAttribute_where, inAttribute_signature, inAttribute_numToDelete COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_gtlDoNotInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlDoNotInstruction * p = (const cPtr_gtlDoNotInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlDoNotInstruction) ;
    result = p->mAttribute_numToDelete ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cPtr_gtlDoNotInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  return mAttribute_numToDelete ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @gtlDoNotInstruction class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlDoNotInstruction::cPtr_gtlDoNotInstruction (const GALGAS_location & in_where,
                                                    const GALGAS_string & in_signature,
                                                    const GALGAS_lbigint & in_numToDelete
                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_numToDelete (in_numToDelete) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlDoNotInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoNotInstruction ;
}

void cPtr_gtlDoNotInstruction::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@gtlDoNotInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_numToDelete.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlDoNotInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlDoNotInstruction (mAttribute_where, mAttribute_signature, mAttribute_numToDelete COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlDoNotInstruction type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDoNotInstruction ("gtlDoNotInstruction",
                                            & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlDoNotInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoNotInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlDoNotInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDoNotInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotInstruction GALGAS_gtlDoNotInstruction::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoNotInstruction result ;
  const GALGAS_gtlDoNotInstruction * p = (const GALGAS_gtlDoNotInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlDoNotInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDoNotInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlWatchpointInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlWatchpointInstruction * p = (const cPtr_gtlWatchpointInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlWatchpointInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_signature.objectCompare (p->mAttribute_signature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_watchExpression.objectCompare (p->mAttribute_watchExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlWatchpointInstruction::objectCompare (const GALGAS_gtlWatchpointInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointInstruction::GALGAS_gtlWatchpointInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointInstruction::GALGAS_gtlWatchpointInstruction (const cPtr_gtlWatchpointInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlWatchpointInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointInstruction GALGAS_gtlWatchpointInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                  const GALGAS_string & inAttribute_signature,
                                                                                  const GALGAS_gtlExpression & inAttribute_watchExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_watchExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlWatchpointInstruction (inAttribute_where, inAttribute_signature, inAttribute_watchExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlWatchpointInstruction::getter_watchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlWatchpointInstruction * p = (const cPtr_gtlWatchpointInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlWatchpointInstruction) ;
    result = p->mAttribute_watchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlWatchpointInstruction::getter_watchExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_watchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlWatchpointInstruction class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlWatchpointInstruction::cPtr_gtlWatchpointInstruction (const GALGAS_location & in_where,
                                                              const GALGAS_string & in_signature,
                                                              const GALGAS_gtlExpression & in_watchExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mAttribute_watchExpression (in_watchExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlWatchpointInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointInstruction ;
}

void cPtr_gtlWatchpointInstruction::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@gtlWatchpointInstruction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_watchExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlWatchpointInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlWatchpointInstruction (mAttribute_where, mAttribute_signature, mAttribute_watchExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlWatchpointInstruction type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlWatchpointInstruction ("gtlWatchpointInstruction",
                                                 & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlWatchpointInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlWatchpointInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlWatchpointInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointInstruction GALGAS_gtlWatchpointInstruction::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointInstruction result ;
  const GALGAS_gtlWatchpointInstruction * p = (const GALGAS_gtlWatchpointInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlWatchpointInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlWatchpointInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_gtl_debugger_grammar [] = {
// At index 0 : <gtl_expression>, in file 'gtl_debugger_expression_parser.ggs', line 33
  NONTERMINAL (5) // <gtl_relation_term>
, NONTERMINAL (24) // <select_gtl_5F_debugger_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 3 : <gtl_variable>, in file 'gtl_debugger_expression_parser.ggs', line 667
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_gtl_5F_debugger_5F_expression_5F_parser_21>
, NONTERMINAL (44) // <select_gtl_5F_debugger_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 7 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 37
, NONTERMINAL (10) // <select_gtl_5F_debugger_5F_parser_0>
, END_PRODUCTION
// At index 9 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 52
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_help) // $help$
, END_PRODUCTION
// At index 11 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 63
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_step) // $step$
, END_PRODUCTION
// At index 13 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 74
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_load) // $load$
, NONTERMINAL (11) // <select_gtl_5F_debugger_5F_parser_1>
, END_PRODUCTION
// At index 16 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 92
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_hist) // $hist$
, END_PRODUCTION
// At index 18 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 103
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_break) // $break$
, NONTERMINAL (12) // <select_gtl_5F_debugger_5F_parser_2>
, END_PRODUCTION
// At index 21 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 169
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_watch) // $watch$
, NONTERMINAL (15) // <select_gtl_5F_debugger_5F_parser_5>
, END_PRODUCTION
// At index 24 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 207
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_do) // $do$
, NONTERMINAL (17) // <select_gtl_5F_debugger_5F_parser_7>
, END_PRODUCTION
// At index 27 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 244
, END_PRODUCTION
// At index 28 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 254
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_let) // $let$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (19) // <select_gtl_5F_debugger_5F_parser_9>
, END_PRODUCTION
// At index 32 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 368
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_unlet) // $unlet$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 35 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 381
, NONTERMINAL (3) // <gtl_step_do_command>
, END_PRODUCTION
// At index 37 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 388
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables) // $variables$
, END_PRODUCTION
// At index 39 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 400
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display) // $display$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 42 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 413
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print) // $print$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 45 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 427
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list) // $list$
, NONTERMINAL (20) // <select_gtl_5F_debugger_5F_parser_10>
, END_PRODUCTION
// At index 48 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 448
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if) // $if$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then) // $then$
, NONTERMINAL (4) // <gtl_step_do_command_list>
, NONTERMINAL (21) // <select_gtl_5F_debugger_5F_parser_11>
, NONTERMINAL (22) // <select_gtl_5F_debugger_5F_parser_12>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if) // $if$
, END_PRODUCTION
// At index 57 : <gtl_step_do_command_list>, in file 'gtl_debugger_parser.ggs', line 481
, NONTERMINAL (23) // <select_gtl_5F_debugger_5F_parser_13>
, END_PRODUCTION
// At index 59 : <gtl_relation_term>, in file 'gtl_debugger_expression_parser.ggs', line 53
, NONTERMINAL (6) // <gtl_relation_factor>
, NONTERMINAL (25) // <select_gtl_5F_debugger_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 62 : <gtl_relation_factor>, in file 'gtl_debugger_expression_parser.ggs', line 69
, NONTERMINAL (7) // <gtl_simple_expression>
, NONTERMINAL (26) // <select_gtl_5F_debugger_5F_expression_5F_parser_2>
, END_PRODUCTION
// At index 65 : <gtl_simple_expression>, in file 'gtl_debugger_expression_parser.ggs', line 117
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 68 : <gtl_term>, in file 'gtl_debugger_expression_parser.ggs', line 162
, NONTERMINAL (9) // <gtl_factor>
, NONTERMINAL (28) // <select_gtl_5F_debugger_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 71 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 192
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 75 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 208
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) // $not$
, NONTERMINAL (9) // <gtl_factor>
, END_PRODUCTION
// At index 78 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 220
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (9) // <gtl_factor>
, END_PRODUCTION
// At index 81 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 232
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (9) // <gtl_factor>
, END_PRODUCTION
// At index 84 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 244
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (9) // <gtl_factor>
, END_PRODUCTION
// At index 87 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 256
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes) // $yes$
, END_PRODUCTION
// At index 89 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 269
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no) // $no$
, END_PRODUCTION
// At index 91 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 282
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 93 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 295
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double) // $literal_double$
, END_PRODUCTION
// At index 95 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 308
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 97 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 321
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char) // $literal_char$
, END_PRODUCTION
// At index 99 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 335
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (29) // <select_gtl_5F_debugger_5F_expression_5F_parser_5>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 105 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 369
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (31) // <select_gtl_5F_debugger_5F_expression_5F_parser_7>
, END_PRODUCTION
// At index 108 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 401
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists) // $exists$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (34) // <select_gtl_5F_debugger_5F_expression_5F_parser_10>
, END_PRODUCTION
// At index 112 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 420
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof) // $typeof$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 115 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 429
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true) // $true$
, END_PRODUCTION
// At index 117 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 445
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false) // $false$
, END_PRODUCTION
// At index 119 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 461
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum) // $literal_enum$
, END_PRODUCTION
// At index 121 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 477
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 124 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 514
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist) // $emptylist$
, END_PRODUCTION
// At index 126 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 533
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap) // $emptymap$
, END_PRODUCTION
// At index 128 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 552
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof) // $mapof$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (35) // <select_gtl_5F_debugger_5F_expression_5F_parser_11>
, END_PRODUCTION
// At index 132 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 576
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof) // $listof$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 136 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 587
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_) // $@($
, NONTERMINAL (36) // <select_gtl_5F_debugger_5F_expression_5F_parser_12>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 140 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 606
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_) // $@[$
, NONTERMINAL (38) // <select_gtl_5F_debugger_5F_expression_5F_parser_14>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 144 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 627
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_) // $@{$
, NONTERMINAL (40) // <select_gtl_5F_debugger_5F_expression_5F_parser_16>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 148 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 648
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_) // $@!$
, NONTERMINAL (42) // <select_gtl_5F_debugger_5F_expression_5F_parser_18>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_) // $!$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 152 : <select_gtl_5F_debugger_5F_parser_0>, in file 'gtl_debugger_parser.ggs', line 40
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont) // $cont$
, END_PRODUCTION
// At index 154 : <select_gtl_5F_debugger_5F_parser_0>, in file 'gtl_debugger_parser.ggs', line 40
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue) // $continue$
, END_PRODUCTION
// At index 156 : <select_gtl_5F_debugger_5F_parser_1>, in file 'gtl_debugger_parser.ggs', line 79
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 158 : <select_gtl_5F_debugger_5F_parser_1>, in file 'gtl_debugger_parser.ggs', line 79
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 160 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) // $not$
, NONTERMINAL (13) // <select_gtl_5F_debugger_5F_parser_3>
, END_PRODUCTION
// At index 163 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
, NONTERMINAL (14) // <select_gtl_5F_debugger_5F_parser_4>
, END_PRODUCTION
// At index 165 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 167 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
, END_PRODUCTION
// At index 168 : <select_gtl_5F_debugger_5F_parser_3>, in file 'gtl_debugger_parser.ggs', line 109
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 170 : <select_gtl_5F_debugger_5F_parser_3>, in file 'gtl_debugger_parser.ggs', line 109
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) // $all$
, END_PRODUCTION
// At index 172 : <select_gtl_5F_debugger_5F_parser_4>, in file 'gtl_debugger_parser.ggs', line 124
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_) // $.$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 178 : <select_gtl_5F_debugger_5F_parser_4>, in file 'gtl_debugger_parser.ggs', line 124
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 180 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) // $not$
, NONTERMINAL (16) // <select_gtl_5F_debugger_5F_parser_6>
, END_PRODUCTION
// At index 183 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 187 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
, END_PRODUCTION
// At index 188 : <select_gtl_5F_debugger_5F_parser_6>, in file 'gtl_debugger_parser.ggs', line 175
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 190 : <select_gtl_5F_debugger_5F_parser_6>, in file 'gtl_debugger_parser.ggs', line 175
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) // $all$
, END_PRODUCTION
// At index 192 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
, NONTERMINAL (3) // <gtl_step_do_command>
, END_PRODUCTION
// At index 194 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) // $not$
, NONTERMINAL (18) // <select_gtl_5F_debugger_5F_parser_8>
, END_PRODUCTION
// At index 197 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
, END_PRODUCTION
// At index 198 : <select_gtl_5F_debugger_5F_parser_8>, in file 'gtl_debugger_parser.ggs', line 221
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 200 : <select_gtl_5F_debugger_5F_parser_8>, in file 'gtl_debugger_parser.ggs', line 221
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) // $all$
, END_PRODUCTION
// At index 202 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_) // $:=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 205 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_) // $+=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 208 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_) // $-=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 211 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_) // $*=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 214 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_) // $/=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 217 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_) // $mod=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 220 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_) // $<<=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 223 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_) // $>>=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 226 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_) // $&=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 229 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_) // $|=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 232 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_) // $^=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 235 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, END_PRODUCTION
// At index 236 : <select_gtl_5F_debugger_5F_parser_10>, in file 'gtl_debugger_parser.ggs', line 432
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 238 : <select_gtl_5F_debugger_5F_parser_10>, in file 'gtl_debugger_parser.ggs', line 432
, END_PRODUCTION
// At index 239 : <select_gtl_5F_debugger_5F_parser_11>, in file 'gtl_debugger_parser.ggs', line 455
, END_PRODUCTION
// At index 240 : <select_gtl_5F_debugger_5F_parser_11>, in file 'gtl_debugger_parser.ggs', line 455
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif) // $elsif$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then) // $then$
, NONTERMINAL (4) // <gtl_step_do_command_list>
, NONTERMINAL (21) // <select_gtl_5F_debugger_5F_parser_11>
, END_PRODUCTION
// At index 246 : <select_gtl_5F_debugger_5F_parser_12>, in file 'gtl_debugger_parser.ggs', line 465
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else) // $else$
, NONTERMINAL (4) // <gtl_step_do_command_list>
, END_PRODUCTION
// At index 249 : <select_gtl_5F_debugger_5F_parser_12>, in file 'gtl_debugger_parser.ggs', line 465
, END_PRODUCTION
// At index 250 : <select_gtl_5F_debugger_5F_parser_13>, in file 'gtl_debugger_parser.ggs', line 486
, END_PRODUCTION
// At index 251 : <select_gtl_5F_debugger_5F_parser_13>, in file 'gtl_debugger_parser.ggs', line 486
, NONTERMINAL (3) // <gtl_step_do_command>
, NONTERMINAL (23) // <select_gtl_5F_debugger_5F_parser_13>
, END_PRODUCTION
// At index 254 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
, END_PRODUCTION
// At index 255 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (5) // <gtl_relation_term>
, NONTERMINAL (24) // <select_gtl_5F_debugger_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 259 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (5) // <gtl_relation_term>
, NONTERMINAL (24) // <select_gtl_5F_debugger_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 263 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>, in file 'gtl_debugger_expression_parser.ggs', line 57
, END_PRODUCTION
// At index 264 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>, in file 'gtl_debugger_expression_parser.ggs', line 57
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (6) // <gtl_relation_factor>
, NONTERMINAL (25) // <select_gtl_5F_debugger_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 268 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, END_PRODUCTION
// At index 269 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_) // $==$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 272 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_) // $!=$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 275 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_) // $<=$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 278 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_) // $>=$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 281 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_) // $>$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 284 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_) // $<$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 287 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, END_PRODUCTION
// At index 288 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_) // $<<$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 292 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_) // $>>$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 296 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 300 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_) // $.$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 304 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 308 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
, END_PRODUCTION
// At index 309 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (9) // <gtl_factor>
, NONTERMINAL (28) // <select_gtl_5F_debugger_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 313 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_) // $/$
, NONTERMINAL (9) // <gtl_factor>
, NONTERMINAL (28) // <select_gtl_5F_debugger_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 317 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod) // $mod$
, NONTERMINAL (9) // <gtl_factor>
, NONTERMINAL (28) // <select_gtl_5F_debugger_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 321 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>, in file 'gtl_debugger_expression_parser.ggs', line 348
, END_PRODUCTION
// At index 322 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>, in file 'gtl_debugger_expression_parser.ggs', line 348
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (30) // <select_gtl_5F_debugger_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 326 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>, in file 'gtl_debugger_expression_parser.ggs', line 351
, END_PRODUCTION
// At index 327 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>, in file 'gtl_debugger_expression_parser.ggs', line 351
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (30) // <select_gtl_5F_debugger_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 331 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>, in file 'gtl_debugger_expression_parser.ggs', line 373
, END_PRODUCTION
// At index 332 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>, in file 'gtl_debugger_expression_parser.ggs', line 373
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) // $($
, NONTERMINAL (32) // <select_gtl_5F_debugger_5F_expression_5F_parser_8>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 336 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>, in file 'gtl_debugger_expression_parser.ggs', line 381
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (33) // <select_gtl_5F_debugger_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 339 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>, in file 'gtl_debugger_expression_parser.ggs', line 381
, END_PRODUCTION
// At index 340 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>, in file 'gtl_debugger_expression_parser.ggs', line 382
, END_PRODUCTION
// At index 341 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>, in file 'gtl_debugger_expression_parser.ggs', line 382
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (33) // <select_gtl_5F_debugger_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 345 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>, in file 'gtl_debugger_expression_parser.ggs', line 405
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default) // $default$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 350 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>, in file 'gtl_debugger_expression_parser.ggs', line 405
, END_PRODUCTION
// At index 351 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>, in file 'gtl_debugger_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 354 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>, in file 'gtl_debugger_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 356 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>, in file 'gtl_debugger_expression_parser.ggs', line 592
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (37) // <select_gtl_5F_debugger_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 359 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>, in file 'gtl_debugger_expression_parser.ggs', line 592
, END_PRODUCTION
// At index 360 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>, in file 'gtl_debugger_expression_parser.ggs', line 593
, END_PRODUCTION
// At index 361 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>, in file 'gtl_debugger_expression_parser.ggs', line 593
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (37) // <select_gtl_5F_debugger_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 365 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>, in file 'gtl_debugger_expression_parser.ggs', line 611
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (39) // <select_gtl_5F_debugger_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 370 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>, in file 'gtl_debugger_expression_parser.ggs', line 611
, END_PRODUCTION
// At index 371 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>, in file 'gtl_debugger_expression_parser.ggs', line 612
, END_PRODUCTION
// At index 372 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>, in file 'gtl_debugger_expression_parser.ggs', line 612
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (39) // <select_gtl_5F_debugger_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 378 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>, in file 'gtl_debugger_expression_parser.ggs', line 632
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_debugger_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 383 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>, in file 'gtl_debugger_expression_parser.ggs', line 632
, END_PRODUCTION
// At index 384 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>, in file 'gtl_debugger_expression_parser.ggs', line 633
, END_PRODUCTION
// At index 385 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>, in file 'gtl_debugger_expression_parser.ggs', line 633
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_debugger_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 391 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>, in file 'gtl_debugger_expression_parser.ggs', line 653
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (43) // <select_gtl_5F_debugger_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 394 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>, in file 'gtl_debugger_expression_parser.ggs', line 653
, END_PRODUCTION
// At index 395 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>, in file 'gtl_debugger_expression_parser.ggs', line 654
, END_PRODUCTION
// At index 396 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>, in file 'gtl_debugger_expression_parser.ggs', line 654
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (43) // <select_gtl_5F_debugger_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 400 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>, in file 'gtl_debugger_expression_parser.ggs', line 671
, END_PRODUCTION
// At index 401 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>, in file 'gtl_debugger_expression_parser.ggs', line 671
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_) // $::$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_gtl_5F_debugger_5F_expression_5F_parser_21>
, NONTERMINAL (44) // <select_gtl_5F_debugger_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 406 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>, in file 'gtl_debugger_expression_parser.ggs', line 673
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (46) // <select_gtl_5F_debugger_5F_expression_5F_parser_22>
, END_PRODUCTION
// At index 411 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>, in file 'gtl_debugger_expression_parser.ggs', line 673
, END_PRODUCTION
// At index 412 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>, in file 'gtl_debugger_expression_parser.ggs', line 678
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (47) // <select_gtl_5F_debugger_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 417 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>, in file 'gtl_debugger_expression_parser.ggs', line 678
, END_PRODUCTION
// At index 418 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>, in file 'gtl_debugger_expression_parser.ggs', line 683
, END_PRODUCTION
// At index 419 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>, in file 'gtl_debugger_expression_parser.ggs', line 683
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (47) // <select_gtl_5F_debugger_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 424 : <>, in file '.ggs', line 0
, NONTERMINAL (2) // <gtl_debugger_command>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_gtl_debugger_grammar [154] = {
 {"<gtl_expression>", "gtl_debugger_expression_parser", 0}, // at index 0
 {"<gtl_variable>", "gtl_debugger_expression_parser", 3}, // at index 1
 {"<gtl_debugger_command>", "gtl_debugger_parser", 7}, // at index 2
 {"<gtl_debugger_command>", "gtl_debugger_parser", 9}, // at index 3
 {"<gtl_debugger_command>", "gtl_debugger_parser", 11}, // at index 4
 {"<gtl_debugger_command>", "gtl_debugger_parser", 13}, // at index 5
 {"<gtl_debugger_command>", "gtl_debugger_parser", 16}, // at index 6
 {"<gtl_debugger_command>", "gtl_debugger_parser", 18}, // at index 7
 {"<gtl_debugger_command>", "gtl_debugger_parser", 21}, // at index 8
 {"<gtl_debugger_command>", "gtl_debugger_parser", 24}, // at index 9
 {"<gtl_debugger_command>", "gtl_debugger_parser", 27}, // at index 10
 {"<gtl_debugger_command>", "gtl_debugger_parser", 28}, // at index 11
 {"<gtl_debugger_command>", "gtl_debugger_parser", 32}, // at index 12
 {"<gtl_debugger_command>", "gtl_debugger_parser", 35}, // at index 13
 {"<gtl_step_do_command>", "gtl_debugger_parser", 37}, // at index 14
 {"<gtl_step_do_command>", "gtl_debugger_parser", 39}, // at index 15
 {"<gtl_step_do_command>", "gtl_debugger_parser", 42}, // at index 16
 {"<gtl_step_do_command>", "gtl_debugger_parser", 45}, // at index 17
 {"<gtl_step_do_command>", "gtl_debugger_parser", 48}, // at index 18
 {"<gtl_step_do_command_list>", "gtl_debugger_parser", 57}, // at index 19
 {"<gtl_relation_term>", "gtl_debugger_expression_parser", 59}, // at index 20
 {"<gtl_relation_factor>", "gtl_debugger_expression_parser", 62}, // at index 21
 {"<gtl_simple_expression>", "gtl_debugger_expression_parser", 65}, // at index 22
 {"<gtl_term>", "gtl_debugger_expression_parser", 68}, // at index 23
 {"<gtl_factor>", "gtl_debugger_expression_parser", 71}, // at index 24
 {"<gtl_factor>", "gtl_debugger_expression_parser", 75}, // at index 25
 {"<gtl_factor>", "gtl_debugger_expression_parser", 78}, // at index 26
 {"<gtl_factor>", "gtl_debugger_expression_parser", 81}, // at index 27
 {"<gtl_factor>", "gtl_debugger_expression_parser", 84}, // at index 28
 {"<gtl_factor>", "gtl_debugger_expression_parser", 87}, // at index 29
 {"<gtl_factor>", "gtl_debugger_expression_parser", 89}, // at index 30
 {"<gtl_factor>", "gtl_debugger_expression_parser", 91}, // at index 31
 {"<gtl_factor>", "gtl_debugger_expression_parser", 93}, // at index 32
 {"<gtl_factor>", "gtl_debugger_expression_parser", 95}, // at index 33
 {"<gtl_factor>", "gtl_debugger_expression_parser", 97}, // at index 34
 {"<gtl_factor>", "gtl_debugger_expression_parser", 99}, // at index 35
 {"<gtl_factor>", "gtl_debugger_expression_parser", 105}, // at index 36
 {"<gtl_factor>", "gtl_debugger_expression_parser", 108}, // at index 37
 {"<gtl_factor>", "gtl_debugger_expression_parser", 112}, // at index 38
 {"<gtl_factor>", "gtl_debugger_expression_parser", 115}, // at index 39
 {"<gtl_factor>", "gtl_debugger_expression_parser", 117}, // at index 40
 {"<gtl_factor>", "gtl_debugger_expression_parser", 119}, // at index 41
 {"<gtl_factor>", "gtl_debugger_expression_parser", 121}, // at index 42
 {"<gtl_factor>", "gtl_debugger_expression_parser", 124}, // at index 43
 {"<gtl_factor>", "gtl_debugger_expression_parser", 126}, // at index 44
 {"<gtl_factor>", "gtl_debugger_expression_parser", 128}, // at index 45
 {"<gtl_factor>", "gtl_debugger_expression_parser", 132}, // at index 46
 {"<gtl_factor>", "gtl_debugger_expression_parser", 136}, // at index 47
 {"<gtl_factor>", "gtl_debugger_expression_parser", 140}, // at index 48
 {"<gtl_factor>", "gtl_debugger_expression_parser", 144}, // at index 49
 {"<gtl_factor>", "gtl_debugger_expression_parser", 148}, // at index 50
 {"<select_gtl_5F_debugger_5F_parser_0>", "gtl_debugger_parser", 152}, // at index 51
 {"<select_gtl_5F_debugger_5F_parser_0>", "gtl_debugger_parser", 154}, // at index 52
 {"<select_gtl_5F_debugger_5F_parser_1>", "gtl_debugger_parser", 156}, // at index 53
 {"<select_gtl_5F_debugger_5F_parser_1>", "gtl_debugger_parser", 158}, // at index 54
 {"<select_gtl_5F_debugger_5F_parser_2>", "gtl_debugger_parser", 160}, // at index 55
 {"<select_gtl_5F_debugger_5F_parser_2>", "gtl_debugger_parser", 163}, // at index 56
 {"<select_gtl_5F_debugger_5F_parser_2>", "gtl_debugger_parser", 165}, // at index 57
 {"<select_gtl_5F_debugger_5F_parser_2>", "gtl_debugger_parser", 167}, // at index 58
 {"<select_gtl_5F_debugger_5F_parser_3>", "gtl_debugger_parser", 168}, // at index 59
 {"<select_gtl_5F_debugger_5F_parser_3>", "gtl_debugger_parser", 170}, // at index 60
 {"<select_gtl_5F_debugger_5F_parser_4>", "gtl_debugger_parser", 172}, // at index 61
 {"<select_gtl_5F_debugger_5F_parser_4>", "gtl_debugger_parser", 178}, // at index 62
 {"<select_gtl_5F_debugger_5F_parser_5>", "gtl_debugger_parser", 180}, // at index 63
 {"<select_gtl_5F_debugger_5F_parser_5>", "gtl_debugger_parser", 183}, // at index 64
 {"<select_gtl_5F_debugger_5F_parser_5>", "gtl_debugger_parser", 187}, // at index 65
 {"<select_gtl_5F_debugger_5F_parser_6>", "gtl_debugger_parser", 188}, // at index 66
 {"<select_gtl_5F_debugger_5F_parser_6>", "gtl_debugger_parser", 190}, // at index 67
 {"<select_gtl_5F_debugger_5F_parser_7>", "gtl_debugger_parser", 192}, // at index 68
 {"<select_gtl_5F_debugger_5F_parser_7>", "gtl_debugger_parser", 194}, // at index 69
 {"<select_gtl_5F_debugger_5F_parser_7>", "gtl_debugger_parser", 197}, // at index 70
 {"<select_gtl_5F_debugger_5F_parser_8>", "gtl_debugger_parser", 198}, // at index 71
 {"<select_gtl_5F_debugger_5F_parser_8>", "gtl_debugger_parser", 200}, // at index 72
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 202}, // at index 73
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 205}, // at index 74
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 208}, // at index 75
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 211}, // at index 76
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 214}, // at index 77
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 217}, // at index 78
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 220}, // at index 79
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 223}, // at index 80
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 226}, // at index 81
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 229}, // at index 82
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 232}, // at index 83
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 235}, // at index 84
 {"<select_gtl_5F_debugger_5F_parser_10>", "gtl_debugger_parser", 236}, // at index 85
 {"<select_gtl_5F_debugger_5F_parser_10>", "gtl_debugger_parser", 238}, // at index 86
 {"<select_gtl_5F_debugger_5F_parser_11>", "gtl_debugger_parser", 239}, // at index 87
 {"<select_gtl_5F_debugger_5F_parser_11>", "gtl_debugger_parser", 240}, // at index 88
 {"<select_gtl_5F_debugger_5F_parser_12>", "gtl_debugger_parser", 246}, // at index 89
 {"<select_gtl_5F_debugger_5F_parser_12>", "gtl_debugger_parser", 249}, // at index 90
 {"<select_gtl_5F_debugger_5F_parser_13>", "gtl_debugger_parser", 250}, // at index 91
 {"<select_gtl_5F_debugger_5F_parser_13>", "gtl_debugger_parser", 251}, // at index 92
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_0>", "gtl_debugger_expression_parser", 254}, // at index 93
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_0>", "gtl_debugger_expression_parser", 255}, // at index 94
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_0>", "gtl_debugger_expression_parser", 259}, // at index 95
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_1>", "gtl_debugger_expression_parser", 263}, // at index 96
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_1>", "gtl_debugger_expression_parser", 264}, // at index 97
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 268}, // at index 98
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 269}, // at index 99
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 272}, // at index 100
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 275}, // at index 101
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 278}, // at index 102
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 281}, // at index 103
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 284}, // at index 104
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 287}, // at index 105
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 288}, // at index 106
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 292}, // at index 107
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 296}, // at index 108
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 300}, // at index 109
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 304}, // at index 110
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_4>", "gtl_debugger_expression_parser", 308}, // at index 111
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_4>", "gtl_debugger_expression_parser", 309}, // at index 112
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_4>", "gtl_debugger_expression_parser", 313}, // at index 113
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_4>", "gtl_debugger_expression_parser", 317}, // at index 114
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_5>", "gtl_debugger_expression_parser", 321}, // at index 115
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_5>", "gtl_debugger_expression_parser", 322}, // at index 116
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_6>", "gtl_debugger_expression_parser", 326}, // at index 117
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_6>", "gtl_debugger_expression_parser", 327}, // at index 118
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_7>", "gtl_debugger_expression_parser", 331}, // at index 119
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_7>", "gtl_debugger_expression_parser", 332}, // at index 120
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_8>", "gtl_debugger_expression_parser", 336}, // at index 121
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_8>", "gtl_debugger_expression_parser", 339}, // at index 122
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_9>", "gtl_debugger_expression_parser", 340}, // at index 123
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_9>", "gtl_debugger_expression_parser", 341}, // at index 124
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_10>", "gtl_debugger_expression_parser", 345}, // at index 125
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_10>", "gtl_debugger_expression_parser", 350}, // at index 126
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_11>", "gtl_debugger_expression_parser", 351}, // at index 127
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_11>", "gtl_debugger_expression_parser", 354}, // at index 128
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_12>", "gtl_debugger_expression_parser", 356}, // at index 129
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_12>", "gtl_debugger_expression_parser", 359}, // at index 130
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_13>", "gtl_debugger_expression_parser", 360}, // at index 131
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_13>", "gtl_debugger_expression_parser", 361}, // at index 132
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_14>", "gtl_debugger_expression_parser", 365}, // at index 133
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_14>", "gtl_debugger_expression_parser", 370}, // at index 134
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_15>", "gtl_debugger_expression_parser", 371}, // at index 135
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_15>", "gtl_debugger_expression_parser", 372}, // at index 136
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_16>", "gtl_debugger_expression_parser", 378}, // at index 137
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_16>", "gtl_debugger_expression_parser", 383}, // at index 138
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_17>", "gtl_debugger_expression_parser", 384}, // at index 139
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_17>", "gtl_debugger_expression_parser", 385}, // at index 140
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_18>", "gtl_debugger_expression_parser", 391}, // at index 141
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_18>", "gtl_debugger_expression_parser", 394}, // at index 142
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_19>", "gtl_debugger_expression_parser", 395}, // at index 143
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_19>", "gtl_debugger_expression_parser", 396}, // at index 144
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_20>", "gtl_debugger_expression_parser", 400}, // at index 145
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_20>", "gtl_debugger_expression_parser", 401}, // at index 146
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_21>", "gtl_debugger_expression_parser", 406}, // at index 147
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_21>", "gtl_debugger_expression_parser", 411}, // at index 148
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_22>", "gtl_debugger_expression_parser", 412}, // at index 149
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_22>", "gtl_debugger_expression_parser", 417}, // at index 150
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_23>", "gtl_debugger_expression_parser", 418}, // at index 151
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_23>", "gtl_debugger_expression_parser", 419}, // at index 152
 {"<>", "", 424} // at index 153
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_gtl_debugger_grammar [154] = {
0, // index 0 : <gtl_expression>, in file 'gtl_debugger_expression_parser.ggs', line 33
3, // index 1 : <gtl_variable>, in file 'gtl_debugger_expression_parser.ggs', line 667
7, // index 2 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 37
9, // index 3 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 52
11, // index 4 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 63
13, // index 5 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 74
16, // index 6 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 92
18, // index 7 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 103
21, // index 8 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 169
24, // index 9 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 207
27, // index 10 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 244
28, // index 11 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 254
32, // index 12 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 368
35, // index 13 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 381
37, // index 14 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 388
39, // index 15 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 400
42, // index 16 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 413
45, // index 17 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 427
48, // index 18 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 448
57, // index 19 : <gtl_step_do_command_list>, in file 'gtl_debugger_parser.ggs', line 481
59, // index 20 : <gtl_relation_term>, in file 'gtl_debugger_expression_parser.ggs', line 53
62, // index 21 : <gtl_relation_factor>, in file 'gtl_debugger_expression_parser.ggs', line 69
65, // index 22 : <gtl_simple_expression>, in file 'gtl_debugger_expression_parser.ggs', line 117
68, // index 23 : <gtl_term>, in file 'gtl_debugger_expression_parser.ggs', line 162
71, // index 24 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 192
75, // index 25 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 208
78, // index 26 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 220
81, // index 27 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 232
84, // index 28 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 244
87, // index 29 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 256
89, // index 30 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 269
91, // index 31 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 282
93, // index 32 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 295
95, // index 33 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 308
97, // index 34 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 321
99, // index 35 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 335
105, // index 36 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 369
108, // index 37 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 401
112, // index 38 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 420
115, // index 39 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 429
117, // index 40 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 445
119, // index 41 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 461
121, // index 42 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 477
124, // index 43 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 514
126, // index 44 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 533
128, // index 45 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 552
132, // index 46 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 576
136, // index 47 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 587
140, // index 48 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 606
144, // index 49 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 627
148, // index 50 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 648
152, // index 51 : <select_gtl_5F_debugger_5F_parser_0>, in file 'gtl_debugger_parser.ggs', line 40
154, // index 52 : <select_gtl_5F_debugger_5F_parser_0>, in file 'gtl_debugger_parser.ggs', line 40
156, // index 53 : <select_gtl_5F_debugger_5F_parser_1>, in file 'gtl_debugger_parser.ggs', line 79
158, // index 54 : <select_gtl_5F_debugger_5F_parser_1>, in file 'gtl_debugger_parser.ggs', line 79
160, // index 55 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
163, // index 56 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
165, // index 57 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
167, // index 58 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
168, // index 59 : <select_gtl_5F_debugger_5F_parser_3>, in file 'gtl_debugger_parser.ggs', line 109
170, // index 60 : <select_gtl_5F_debugger_5F_parser_3>, in file 'gtl_debugger_parser.ggs', line 109
172, // index 61 : <select_gtl_5F_debugger_5F_parser_4>, in file 'gtl_debugger_parser.ggs', line 124
178, // index 62 : <select_gtl_5F_debugger_5F_parser_4>, in file 'gtl_debugger_parser.ggs', line 124
180, // index 63 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
183, // index 64 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
187, // index 65 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
188, // index 66 : <select_gtl_5F_debugger_5F_parser_6>, in file 'gtl_debugger_parser.ggs', line 175
190, // index 67 : <select_gtl_5F_debugger_5F_parser_6>, in file 'gtl_debugger_parser.ggs', line 175
192, // index 68 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
194, // index 69 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
197, // index 70 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
198, // index 71 : <select_gtl_5F_debugger_5F_parser_8>, in file 'gtl_debugger_parser.ggs', line 221
200, // index 72 : <select_gtl_5F_debugger_5F_parser_8>, in file 'gtl_debugger_parser.ggs', line 221
202, // index 73 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
205, // index 74 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
208, // index 75 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
211, // index 76 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
214, // index 77 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
217, // index 78 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
220, // index 79 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
223, // index 80 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
226, // index 81 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
229, // index 82 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
232, // index 83 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
235, // index 84 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
236, // index 85 : <select_gtl_5F_debugger_5F_parser_10>, in file 'gtl_debugger_parser.ggs', line 432
238, // index 86 : <select_gtl_5F_debugger_5F_parser_10>, in file 'gtl_debugger_parser.ggs', line 432
239, // index 87 : <select_gtl_5F_debugger_5F_parser_11>, in file 'gtl_debugger_parser.ggs', line 455
240, // index 88 : <select_gtl_5F_debugger_5F_parser_11>, in file 'gtl_debugger_parser.ggs', line 455
246, // index 89 : <select_gtl_5F_debugger_5F_parser_12>, in file 'gtl_debugger_parser.ggs', line 465
249, // index 90 : <select_gtl_5F_debugger_5F_parser_12>, in file 'gtl_debugger_parser.ggs', line 465
250, // index 91 : <select_gtl_5F_debugger_5F_parser_13>, in file 'gtl_debugger_parser.ggs', line 486
251, // index 92 : <select_gtl_5F_debugger_5F_parser_13>, in file 'gtl_debugger_parser.ggs', line 486
254, // index 93 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
255, // index 94 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
259, // index 95 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
263, // index 96 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>, in file 'gtl_debugger_expression_parser.ggs', line 57
264, // index 97 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>, in file 'gtl_debugger_expression_parser.ggs', line 57
268, // index 98 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
269, // index 99 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
272, // index 100 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
275, // index 101 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
278, // index 102 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
281, // index 103 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
284, // index 104 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
287, // index 105 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
288, // index 106 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
292, // index 107 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
296, // index 108 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
300, // index 109 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
304, // index 110 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
308, // index 111 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
309, // index 112 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
313, // index 113 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
317, // index 114 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
321, // index 115 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>, in file 'gtl_debugger_expression_parser.ggs', line 348
322, // index 116 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>, in file 'gtl_debugger_expression_parser.ggs', line 348
326, // index 117 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>, in file 'gtl_debugger_expression_parser.ggs', line 351
327, // index 118 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>, in file 'gtl_debugger_expression_parser.ggs', line 351
331, // index 119 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>, in file 'gtl_debugger_expression_parser.ggs', line 373
332, // index 120 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>, in file 'gtl_debugger_expression_parser.ggs', line 373
336, // index 121 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>, in file 'gtl_debugger_expression_parser.ggs', line 381
339, // index 122 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>, in file 'gtl_debugger_expression_parser.ggs', line 381
340, // index 123 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>, in file 'gtl_debugger_expression_parser.ggs', line 382
341, // index 124 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>, in file 'gtl_debugger_expression_parser.ggs', line 382
345, // index 125 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>, in file 'gtl_debugger_expression_parser.ggs', line 405
350, // index 126 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>, in file 'gtl_debugger_expression_parser.ggs', line 405
351, // index 127 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>, in file 'gtl_debugger_expression_parser.ggs', line 557
354, // index 128 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>, in file 'gtl_debugger_expression_parser.ggs', line 557
356, // index 129 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>, in file 'gtl_debugger_expression_parser.ggs', line 592
359, // index 130 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>, in file 'gtl_debugger_expression_parser.ggs', line 592
360, // index 131 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>, in file 'gtl_debugger_expression_parser.ggs', line 593
361, // index 132 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>, in file 'gtl_debugger_expression_parser.ggs', line 593
365, // index 133 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>, in file 'gtl_debugger_expression_parser.ggs', line 611
370, // index 134 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>, in file 'gtl_debugger_expression_parser.ggs', line 611
371, // index 135 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>, in file 'gtl_debugger_expression_parser.ggs', line 612
372, // index 136 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>, in file 'gtl_debugger_expression_parser.ggs', line 612
378, // index 137 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>, in file 'gtl_debugger_expression_parser.ggs', line 632
383, // index 138 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>, in file 'gtl_debugger_expression_parser.ggs', line 632
384, // index 139 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>, in file 'gtl_debugger_expression_parser.ggs', line 633
385, // index 140 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>, in file 'gtl_debugger_expression_parser.ggs', line 633
391, // index 141 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>, in file 'gtl_debugger_expression_parser.ggs', line 653
394, // index 142 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>, in file 'gtl_debugger_expression_parser.ggs', line 653
395, // index 143 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>, in file 'gtl_debugger_expression_parser.ggs', line 654
396, // index 144 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>, in file 'gtl_debugger_expression_parser.ggs', line 654
400, // index 145 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>, in file 'gtl_debugger_expression_parser.ggs', line 671
401, // index 146 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>, in file 'gtl_debugger_expression_parser.ggs', line 671
406, // index 147 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>, in file 'gtl_debugger_expression_parser.ggs', line 673
411, // index 148 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>, in file 'gtl_debugger_expression_parser.ggs', line 673
412, // index 149 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>, in file 'gtl_debugger_expression_parser.ggs', line 678
417, // index 150 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>, in file 'gtl_debugger_expression_parser.ggs', line 678
418, // index 151 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>, in file 'gtl_debugger_expression_parser.ggs', line 683
419, // index 152 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>, in file 'gtl_debugger_expression_parser.ggs', line 683
424 // index 153 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_gtl_debugger_grammar [50] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_variable>
2, // at 2 : <gtl_debugger_command>
14, // at 3 : <gtl_step_do_command>
19, // at 4 : <gtl_step_do_command_list>
20, // at 5 : <gtl_relation_term>
21, // at 6 : <gtl_relation_factor>
22, // at 7 : <gtl_simple_expression>
23, // at 8 : <gtl_term>
24, // at 9 : <gtl_factor>
51, // at 10 : <select_gtl_5F_debugger_5F_parser_0>
53, // at 11 : <select_gtl_5F_debugger_5F_parser_1>
55, // at 12 : <select_gtl_5F_debugger_5F_parser_2>
59, // at 13 : <select_gtl_5F_debugger_5F_parser_3>
61, // at 14 : <select_gtl_5F_debugger_5F_parser_4>
63, // at 15 : <select_gtl_5F_debugger_5F_parser_5>
66, // at 16 : <select_gtl_5F_debugger_5F_parser_6>
68, // at 17 : <select_gtl_5F_debugger_5F_parser_7>
71, // at 18 : <select_gtl_5F_debugger_5F_parser_8>
73, // at 19 : <select_gtl_5F_debugger_5F_parser_9>
85, // at 20 : <select_gtl_5F_debugger_5F_parser_10>
87, // at 21 : <select_gtl_5F_debugger_5F_parser_11>
89, // at 22 : <select_gtl_5F_debugger_5F_parser_12>
91, // at 23 : <select_gtl_5F_debugger_5F_parser_13>
93, // at 24 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>
96, // at 25 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>
98, // at 26 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>
105, // at 27 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>
111, // at 28 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>
115, // at 29 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>
117, // at 30 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>
119, // at 31 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>
121, // at 32 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>
123, // at 33 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>
125, // at 34 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>
127, // at 35 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>
129, // at 36 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>
131, // at 37 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>
133, // at 38 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>
135, // at 39 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>
137, // at 40 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>
139, // at 41 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>
141, // at 42 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>
143, // at 43 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>
145, // at 44 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>
147, // at 45 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>
149, // at 46 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>
151, // at 47 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>
153, // at 48 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_gtl_debugger_grammar [] = {
// At index 0 : <gtl_expression> only one production, no choice
  -1,
// At index 1 : <gtl_variable> only one production, no choice
  -1,
// At index 2 : <gtl_debugger_command>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_help, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_step, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_load, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_hist, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_break, -1, // Choice 6
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_watch, -1, // Choice 7
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_do, -1, // Choice 8
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 9
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_let, -1, // Choice 10
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_unlet, -1, // Choice 11
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, -1, // Choice 12
  -1,
// At index 32 : <gtl_step_do_command>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, -1, // Choice 5
  -1,
// At index 43 : <gtl_step_do_command_list> only one production, no choice
  -1,
// At index 44 : <gtl_relation_term> only one production, no choice
  -1,
// At index 45 : <gtl_relation_factor> only one production, no choice
  -1,
// At index 46 : <gtl_simple_expression> only one production, no choice
  -1,
// At index 47 : <gtl_term> only one production, no choice
  -1,
// At index 48 : <gtl_factor>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes, -1, // Choice 6
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no, -1, // Choice 7
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 8
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double, -1, // Choice 9
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, -1, // Choice 10
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char, -1, // Choice 11
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, -1, // Choice 12
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, -1, // Choice 13
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists, -1, // Choice 14
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof, -1, // Choice 15
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true, -1, // Choice 16
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false, -1, // Choice 17
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum, -1, // Choice 18
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_, -1, // Choice 19
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist, -1, // Choice 20
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap, -1, // Choice 21
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof, -1, // Choice 22
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof, -1, // Choice 23
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_, -1, // Choice 24
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_, -1, // Choice 25
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_, -1, // Choice 26
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_, -1, // Choice 27
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 103 : <select_gtl_5F_debugger_5F_parser_0>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue, -1, // Choice 2
  -1,
// At index 108 : <select_gtl_5F_debugger_5F_parser_1>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, -1, // Choice 2
  -1,
// At index 113 : <select_gtl_5F_debugger_5F_parser_2>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 4
  -1,
// At index 123 : <select_gtl_5F_debugger_5F_parser_3>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all, -1, // Choice 2
  -1,
// At index 128 : <select_gtl_5F_debugger_5F_parser_4>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 2
  -1,
// At index 133 : <select_gtl_5F_debugger_5F_parser_5>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 3
  -1,
// At index 140 : <select_gtl_5F_debugger_5F_parser_6>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all, -1, // Choice 2
  -1,
// At index 145 : <select_gtl_5F_debugger_5F_parser_7>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 3
  -1,
// At index 156 : <select_gtl_5F_debugger_5F_parser_8>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all, -1, // Choice 2
  -1,
// At index 161 : <select_gtl_5F_debugger_5F_parser_9>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, -1, // Choice 6
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, -1, // Choice 7
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, -1, // Choice 8
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, -1, // Choice 9
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, -1, // Choice 10
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, -1, // Choice 11
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 12
  -1,
// At index 186 : <select_gtl_5F_debugger_5F_parser_10>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 199 : <select_gtl_5F_debugger_5F_parser_11>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, -1, // Choice 2
  -1,
// At index 205 : <select_gtl_5F_debugger_5F_parser_12>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 210 : <select_gtl_5F_debugger_5F_parser_13>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, -1, // Choice 2
  -1,
// At index 221 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, -1, // Choice 3
  -1,
// At index 244 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 267 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, -1, // Choice 6
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, -1, // Choice 7
  -1,
// At index 301 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, -1, // Choice 6
  -1,
// At index 339 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, -1, // Choice 4
  -1,
// At index 378 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 383 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 388 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, -1, // Choice 2
  -1,
// At index 426 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 457 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 462 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 500 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 505 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 536 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 541 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, -1, // Choice 2
  -1,
// At index 546 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 551 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, -1, // Choice 2
  -1,
// At index 556 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 561 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, -1, // Choice 2
  -1,
// At index 592 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 597 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 648 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 700 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 752 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, -1, // Choice 2
  -1,
// At index 804 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_gtl_debugger_grammar [50] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_variable>
2, // at 2 : <gtl_debugger_command>
32, // at 3 : <gtl_step_do_command>
43, // at 4 : <gtl_step_do_command_list>
44, // at 5 : <gtl_relation_term>
45, // at 6 : <gtl_relation_factor>
46, // at 7 : <gtl_simple_expression>
47, // at 8 : <gtl_term>
48, // at 9 : <gtl_factor>
103, // at 10 : <select_gtl_5F_debugger_5F_parser_0>
108, // at 11 : <select_gtl_5F_debugger_5F_parser_1>
113, // at 12 : <select_gtl_5F_debugger_5F_parser_2>
123, // at 13 : <select_gtl_5F_debugger_5F_parser_3>
128, // at 14 : <select_gtl_5F_debugger_5F_parser_4>
133, // at 15 : <select_gtl_5F_debugger_5F_parser_5>
140, // at 16 : <select_gtl_5F_debugger_5F_parser_6>
145, // at 17 : <select_gtl_5F_debugger_5F_parser_7>
156, // at 18 : <select_gtl_5F_debugger_5F_parser_8>
161, // at 19 : <select_gtl_5F_debugger_5F_parser_9>
186, // at 20 : <select_gtl_5F_debugger_5F_parser_10>
199, // at 21 : <select_gtl_5F_debugger_5F_parser_11>
205, // at 22 : <select_gtl_5F_debugger_5F_parser_12>
210, // at 23 : <select_gtl_5F_debugger_5F_parser_13>
221, // at 24 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>
244, // at 25 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>
267, // at 26 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>
301, // at 27 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>
339, // at 28 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>
378, // at 29 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>
383, // at 30 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>
388, // at 31 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>
426, // at 32 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>
457, // at 33 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>
462, // at 34 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>
500, // at 35 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>
505, // at 36 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>
536, // at 37 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>
541, // at 38 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>
546, // at 39 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>
551, // at 40 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>
556, // at 41 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>
561, // at 42 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>
592, // at 43 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>
597, // at 44 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>
648, // at 45 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>
700, // at 46 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>
752, // at 47 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>
804, // at 48 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'gtl_expression' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_expression_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_expression_i0_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_expression_i0_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'gtl_variable' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_variable_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_variable_i32_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_variable_ (GALGAS_gtlVarPath & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_variable_i32_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_debugger_command' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_debugger_5F_command_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i0_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i1_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i2_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i3_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i4_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i5_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i6_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i7_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i8_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i9_parse(inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i10_parse(inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i11_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_debugger_5F_command_ (GALGAS_gtlInstruction & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i0_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i1_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i2_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i3_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i4_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i5_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i6_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i7_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i8_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i9_(parameter_1, inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i10_(parameter_1, inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i11_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_debugger_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_gtl_5F_debugger_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_debugger_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_debugger_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_debugger_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_debugger_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_gtl_debugger_grammar, gProductionNames_gtl_debugger_grammar, gProductionIndexes_gtl_debugger_grammar,
                                    gFirstProductionIndexes_gtl_debugger_grammar, gDecision_gtl_debugger_grammar, gDecisionIndexes_gtl_debugger_grammar, 424) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_gtlInstruction &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_gtl_5F_debugger_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_gtl_5F_debugger_5F_scanner (inCompiler, "", "", filePath COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performTopDownParsing (gProductions_gtl_debugger_grammar, gProductionNames_gtl_debugger_grammar, gProductionIndexes_gtl_debugger_grammar,
                                                      gFirstProductionIndexes_gtl_debugger_grammar, gDecision_gtl_debugger_grammar, gDecisionIndexes_gtl_debugger_grammar, 424) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_gtl_5F_debugger_5F_grammar grammar ;
        grammar.nt_gtl_5F_debugger_5F_command_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_gtlInstruction &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_gtl_5F_debugger_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_gtl_5F_debugger_5F_scanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_gtl_debugger_grammar, gProductionNames_gtl_debugger_grammar, gProductionIndexes_gtl_debugger_grammar,
                                                    gFirstProductionIndexes_gtl_debugger_grammar, gDecision_gtl_debugger_grammar, gDecisionIndexes_gtl_debugger_grammar, 424) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_gtl_5F_debugger_5F_grammar grammar ;
      grammar.nt_gtl_5F_debugger_5F_command_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_step_do_command' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_step_5F_do_5F_command_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i12_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i13_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i14_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i15_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i16_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_step_5F_do_5F_command_ (GALGAS_gtlInstruction & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i12_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i13_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i14_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i15_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i16_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'gtl_step_do_command_list' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_step_5F_do_5F_command_5F_list_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_5F_list_i17_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_step_5F_do_5F_command_5F_list_ (GALGAS_gtlInstructionList & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_5F_list_i17_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'gtl_relation_term' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_relation_5F_term_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_relation_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_relation_factor' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_relation_5F_factor_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_relation_5F_factor_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'gtl_simple_expression' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_simple_5F_expression_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_simple_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'gtl_term' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_term_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_term_i4_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_term_i4_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_factor' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_factor_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i5_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i6_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i7_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i8_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i9_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i10_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i11_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i12_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i13_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i14_parse(inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i15_parse(inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i16_parse(inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i17_parse(inLexique) ;
    break ;
  case 14 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i18_parse(inLexique) ;
    break ;
  case 15 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i19_parse(inLexique) ;
    break ;
  case 16 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i20_parse(inLexique) ;
    break ;
  case 17 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i21_parse(inLexique) ;
    break ;
  case 18 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i22_parse(inLexique) ;
    break ;
  case 19 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i23_parse(inLexique) ;
    break ;
  case 20 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i24_parse(inLexique) ;
    break ;
  case 21 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i25_parse(inLexique) ;
    break ;
  case 22 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i26_parse(inLexique) ;
    break ;
  case 23 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i27_parse(inLexique) ;
    break ;
  case 24 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i28_parse(inLexique) ;
    break ;
  case 25 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i29_parse(inLexique) ;
    break ;
  case 26 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i30_parse(inLexique) ;
    break ;
  case 27 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i31_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_factor_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i5_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i6_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i7_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i8_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i9_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i10_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i11_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i12_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i13_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i14_(parameter_1, inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i15_(parameter_1, inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i16_(parameter_1, inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i17_(parameter_1, inLexique) ;
    break ;
  case 14 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i18_(parameter_1, inLexique) ;
    break ;
  case 15 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i19_(parameter_1, inLexique) ;
    break ;
  case 16 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i20_(parameter_1, inLexique) ;
    break ;
  case 17 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i21_(parameter_1, inLexique) ;
    break ;
  case 18 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i22_(parameter_1, inLexique) ;
    break ;
  case 19 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i23_(parameter_1, inLexique) ;
    break ;
  case 20 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i24_(parameter_1, inLexique) ;
    break ;
  case 21 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i25_(parameter_1, inLexique) ;
    break ;
  case 22 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i26_(parameter_1, inLexique) ;
    break ;
  case 23 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i27_(parameter_1, inLexique) ;
    break ;
  case 24 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i28_(parameter_1, inLexique) ;
    break ;
  case 25 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i29_(parameter_1, inLexique) ;
    break ;
  case 26 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i30_(parameter_1, inLexique) ;
    break ;
  case 27 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i31_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_0' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_0 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_1' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_1 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_2' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_2 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_3' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_3 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_4' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_4 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_5' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_5 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_6' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_6 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_7' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_7 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_8' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_8 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_9' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_9 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_debugger_5F_parser_10' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_10 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_debugger_5F_parser_11' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_11 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_debugger_5F_parser_12' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_12 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_debugger_5F_parser_13' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_13 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_0' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_0 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_1' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_1 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_2' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_2 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_3' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_3 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_4' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_4 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_5' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_5 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_6' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_6 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_7' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_7 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_8' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_8 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_9' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_9 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_10' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_10 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_11' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_11 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_12' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_12 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_13' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_13 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_14' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_14 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_15' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_15 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_16' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_16 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_17' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_17 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_18' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_18 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_19' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_19 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_20' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_20 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_21' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_21 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_22' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_22 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_23' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_23 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_object_5F_t::objectCompare (const GALGAS_object_5F_t & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t::GALGAS_object_5F_t (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t::GALGAS_object_5F_t (const cPtr_object_5F_t * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_object_5F_t) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_object_5F_t::getter_oil_5F_desc (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_object_5F_t * p = (const cPtr_object_5F_t *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_object_5F_t) ;
    result = p->mAttribute_oil_5F_desc ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_object_5F_t::getter_oil_5F_desc (UNUSED_LOCATION_ARGS) const {
  return mAttribute_oil_5F_desc ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_object_5F_t::getter_location (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_object_5F_t * p = (const cPtr_object_5F_t *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_object_5F_t) ;
    result = p->mAttribute_location ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_object_5F_t::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @object_t class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_object_5F_t::cPtr_object_5F_t (const GALGAS_lstring & in_oil_5F_desc,
                                    const GALGAS_location & in_location
                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_oil_5F_desc (in_oil_5F_desc),
mAttribute_location (in_location) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @object_t type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_object_5F_t ("object_t",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_object_5F_t::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_object_5F_t ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_object_5F_t::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_object_5F_t (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_object_5F_t::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_object_5F_t result ;
  const GALGAS_object_5F_t * p = (const GALGAS_object_5F_t *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_object_5F_t *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("object_t", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_impType::objectCompare (const GALGAS_impType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType::GALGAS_impType (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType::GALGAS_impType (const cPtr_impType * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationList GALGAS_impType::getter_locations (UNUSED_LOCATION_ARGS) const {
  GALGAS_locationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_locations ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationList cPtr_impType::getter_locations (UNUSED_LOCATION_ARGS) const {
  return mAttribute_locations ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataType GALGAS_impType::getter_type (UNUSED_LOCATION_ARGS) const {
  GALGAS_dataType result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_type ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataType cPtr_impType::getter_type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_impType::getter_name (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_name ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_impType::getter_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_name ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_impType::getter_multiple (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_multiple ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_impType::getter_multiple (UNUSED_LOCATION_ARGS) const {
  return mAttribute_multiple ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_impType::getter_descs (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_descs ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_impType::getter_descs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_descs ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @impType class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impType::cPtr_impType (const GALGAS_locationList & in_locations,
                            const GALGAS_dataType & in_type,
                            const GALGAS_lstring & in_name,
                            const GALGAS_bool & in_multiple,
                            const GALGAS_lstringlist & in_descs
                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_locations (in_locations),
mAttribute_type (in_type),
mAttribute_name (in_name),
mAttribute_multiple (in_multiple),
mAttribute_descs (in_descs) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @impType type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impType ("impType",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType GALGAS_impType::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_impType result ;
  const GALGAS_impType * p = (const GALGAS_impType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension getter '@impType mergeWithType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_impType_mergeWithType> gExtensionGetterTable_impType_mergeWithType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_mergeWithType (const int32_t inClassIndex,
                                         enterExtensionGetter_impType_mergeWithType inGetter) {
  gExtensionGetterTable_impType_mergeWithType.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_impType_mergeWithType (void) {
  gExtensionGetterTable_impType_mergeWithType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_impType_mergeWithType (NULL,
                                                  freeExtensionGetter_impType_mergeWithType) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType callExtensionGetter_mergeWithType (const cPtr_impType * inObject,
                                                  GALGAS_impType in_typeToMerge,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_impType result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_impType_mergeWithType f = NULL ;
    if (classIndex < gExtensionGetterTable_impType_mergeWithType.count ()) {
      f = gExtensionGetterTable_impType_mergeWithType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_impType_mergeWithType.count ()) {
           f = gExtensionGetterTable_impType_mergeWithType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_impType_mergeWithType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_typeToMerge, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@impType autoAllowed'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_impType_autoAllowed> gExtensionGetterTable_impType_autoAllowed ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_autoAllowed (const int32_t inClassIndex,
                                       enterExtensionGetter_impType_autoAllowed inGetter) {
  gExtensionGetterTable_impType_autoAllowed.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_autoAllowed (const cPtr_impType * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_impType_autoAllowed f = NULL ;
    if (classIndex < gExtensionGetterTable_impType_autoAllowed.count ()) {
      f = gExtensionGetterTable_impType_autoAllowed (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_impType_autoAllowed.count ()) {
           f = gExtensionGetterTable_impType_autoAllowed (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_impType_autoAllowed.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_impType_autoAllowed (const cPtr_impType * /* inObject */,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_impType_autoAllowed (void) {
  enterExtensionGetter_autoAllowed (kTypeDescriptor_GALGAS_impType.mSlotID,
                                    extensionGetter_impType_autoAllowed) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_impType_autoAllowed (void) {
  gExtensionGetterTable_impType_autoAllowed.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_impType_autoAllowed (defineExtensionGetter_impType_autoAllowed,
                                                freeExtensionGetter_impType_autoAllowed) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impStructType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impStructType * p = (const cPtr_impStructType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impStructType) ;
  if (kOperandEqual == result) {
    result = mAttribute_locations.objectCompare (p->mAttribute_locations) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_descs.objectCompare (p->mAttribute_descs) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_structAttributes.objectCompare (p->mAttribute_structAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impStructType::objectCompare (const GALGAS_impStructType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impStructType::GALGAS_impStructType (void) :
GALGAS_impType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impStructType::GALGAS_impStructType (const cPtr_impStructType * inSourcePtr) :
GALGAS_impType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impStructType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impStructType GALGAS_impStructType::constructor_new (const GALGAS_locationList & inAttribute_locations,
                                                            const GALGAS_dataType & inAttribute_type,
                                                            const GALGAS_lstring & inAttribute_name,
                                                            const GALGAS_bool & inAttribute_multiple,
                                                            const GALGAS_lstringlist & inAttribute_descs,
                                                            const GALGAS_implementationObjectMap & inAttribute_structAttributes
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_impStructType result ;
  if (inAttribute_locations.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_descs.isValid () && inAttribute_structAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impStructType (inAttribute_locations, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_descs, inAttribute_structAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_impStructType::getter_structAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_implementationObjectMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_impStructType * p = (const cPtr_impStructType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impStructType) ;
    result = p->mAttribute_structAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap cPtr_impStructType::getter_structAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_structAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @impStructType class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impStructType::cPtr_impStructType (const GALGAS_locationList & in_locations,
                                        const GALGAS_dataType & in_type,
                                        const GALGAS_lstring & in_name,
                                        const GALGAS_bool & in_multiple,
                                        const GALGAS_lstringlist & in_descs,
                                        const GALGAS_implementationObjectMap & in_structAttributes
                                        COMMA_LOCATION_ARGS) :
cPtr_impType (in_locations, in_type, in_name, in_multiple, in_descs COMMA_THERE),
mAttribute_structAttributes (in_structAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impStructType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impStructType ;
}

void cPtr_impStructType::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@impStructType:" ;
  mAttribute_locations.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_descs.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_structAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impStructType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impStructType (mAttribute_locations, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_descs, mAttribute_structAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @impStructType type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impStructType ("impStructType",
                                      & kTypeDescriptor_GALGAS_impType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impStructType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impStructType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impStructType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impStructType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impStructType GALGAS_impStructType::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_impStructType result ;
  const GALGAS_impStructType * p = (const GALGAS_impStructType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impStructType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impStructType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impVoid::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impVoid * p = (const cPtr_impVoid *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impVoid) ;
  if (kOperandEqual == result) {
    result = mAttribute_locations.objectCompare (p->mAttribute_locations) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_descs.objectCompare (p->mAttribute_descs) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impVoid::objectCompare (const GALGAS_impVoid & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impVoid::GALGAS_impVoid (void) :
GALGAS_impType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impVoid::GALGAS_impVoid (const cPtr_impVoid * inSourcePtr) :
GALGAS_impType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impVoid) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impVoid GALGAS_impVoid::constructor_new (const GALGAS_locationList & inAttribute_locations,
                                                const GALGAS_dataType & inAttribute_type,
                                                const GALGAS_lstring & inAttribute_name,
                                                const GALGAS_bool & inAttribute_multiple,
                                                const GALGAS_lstringlist & inAttribute_descs
                                                COMMA_LOCATION_ARGS) {
  GALGAS_impVoid result ;
  if (inAttribute_locations.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_descs.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impVoid (inAttribute_locations, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_descs COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @impVoid class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impVoid::cPtr_impVoid (const GALGAS_locationList & in_locations,
                            const GALGAS_dataType & in_type,
                            const GALGAS_lstring & in_name,
                            const GALGAS_bool & in_multiple,
                            const GALGAS_lstringlist & in_descs
                            COMMA_LOCATION_ARGS) :
cPtr_impType (in_locations, in_type, in_name, in_multiple, in_descs COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impVoid::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impVoid ;
}

void cPtr_impVoid::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@impVoid:" ;
  mAttribute_locations.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_descs.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impVoid::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impVoid (mAttribute_locations, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_descs COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @impVoid type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impVoid ("impVoid",
                                & kTypeDescriptor_GALGAS_impType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impVoid::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impVoid ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impVoid::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impVoid (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impVoid GALGAS_impVoid::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_impVoid result ;
  const GALGAS_impVoid * p = (const GALGAS_impVoid *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impVoid *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impVoid", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impAutoDefaultType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impAutoDefaultType * p = (const cPtr_impAutoDefaultType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impAutoDefaultType) ;
  if (kOperandEqual == result) {
    result = mAttribute_locations.objectCompare (p->mAttribute_locations) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_descs.objectCompare (p->mAttribute_descs) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_withAuto.objectCompare (p->mAttribute_withAuto) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_defaultValue.objectCompare (p->mAttribute_defaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impAutoDefaultType::objectCompare (const GALGAS_impAutoDefaultType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impAutoDefaultType::GALGAS_impAutoDefaultType (void) :
GALGAS_impType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impAutoDefaultType::GALGAS_impAutoDefaultType (const cPtr_impAutoDefaultType * inSourcePtr) :
GALGAS_impType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impAutoDefaultType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impAutoDefaultType GALGAS_impAutoDefaultType::constructor_new (const GALGAS_locationList & inAttribute_locations,
                                                                      const GALGAS_dataType & inAttribute_type,
                                                                      const GALGAS_lstring & inAttribute_name,
                                                                      const GALGAS_bool & inAttribute_multiple,
                                                                      const GALGAS_lstringlist & inAttribute_descs,
                                                                      const GALGAS_bool & inAttribute_withAuto,
                                                                      const GALGAS_object_5F_t & inAttribute_defaultValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_impAutoDefaultType result ;
  if (inAttribute_locations.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_descs.isValid () && inAttribute_withAuto.isValid () && inAttribute_defaultValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impAutoDefaultType (inAttribute_locations, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_descs, inAttribute_withAuto, inAttribute_defaultValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_impAutoDefaultType::getter_withAuto (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_impAutoDefaultType * p = (const cPtr_impAutoDefaultType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impAutoDefaultType) ;
    result = p->mAttribute_withAuto ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_impAutoDefaultType::getter_withAuto (UNUSED_LOCATION_ARGS) const {
  return mAttribute_withAuto ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_impAutoDefaultType::getter_defaultValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_object_5F_t result ;
  if (NULL != mObjectPtr) {
    const cPtr_impAutoDefaultType * p = (const cPtr_impAutoDefaultType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impAutoDefaultType) ;
    result = p->mAttribute_defaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t cPtr_impAutoDefaultType::getter_defaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_defaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @impAutoDefaultType class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impAutoDefaultType::cPtr_impAutoDefaultType (const GALGAS_locationList & in_locations,
                                                  const GALGAS_dataType & in_type,
                                                  const GALGAS_lstring & in_name,
                                                  const GALGAS_bool & in_multiple,
                                                  const GALGAS_lstringlist & in_descs,
                                                  const GALGAS_bool & in_withAuto,
                                                  const GALGAS_object_5F_t & in_defaultValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_impType (in_locations, in_type, in_name, in_multiple, in_descs COMMA_THERE),
mAttribute_withAuto (in_withAuto),
mAttribute_defaultValue (in_defaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impAutoDefaultType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impAutoDefaultType ;
}

void cPtr_impAutoDefaultType::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@impAutoDefaultType:" ;
  mAttribute_locations.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_descs.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_withAuto.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_defaultValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impAutoDefaultType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impAutoDefaultType (mAttribute_locations, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_descs, mAttribute_withAuto, mAttribute_defaultValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @impAutoDefaultType type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impAutoDefaultType ("impAutoDefaultType",
                                           & kTypeDescriptor_GALGAS_impType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impAutoDefaultType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impAutoDefaultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impAutoDefaultType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impAutoDefaultType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impAutoDefaultType GALGAS_impAutoDefaultType::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_impAutoDefaultType result ;
  const GALGAS_impAutoDefaultType * p = (const GALGAS_impAutoDefaultType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impAutoDefaultType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impAutoDefaultType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension method '@impAutoDefaultType setDefault'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impAutoDefaultType_setDefault> gExtensionMethodTable_impAutoDefaultType_setDefault ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_setDefault (const int32_t inClassIndex,
                                      extensionMethodSignature_impAutoDefaultType_setDefault inMethod) {
  gExtensionMethodTable_impAutoDefaultType_setDefault.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_setDefault (const cPtr_impAutoDefaultType * inObject,
                                     GALGAS_objectAttributes & io_attributes,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impAutoDefaultType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impAutoDefaultType_setDefault f = NULL ;
    if (classIndex < gExtensionMethodTable_impAutoDefaultType_setDefault.count ()) {
      f = gExtensionMethodTable_impAutoDefaultType_setDefault (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impAutoDefaultType_setDefault.count ()) {
           f = gExtensionMethodTable_impAutoDefaultType_setDefault (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impAutoDefaultType_setDefault.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_attributes, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impAutoDefaultType_setDefault (const cPtr_impAutoDefaultType * inObject,
                                                           GALGAS_objectAttributes & ioArgument_attributes,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impAutoDefaultType * object = inObject ;
  macroValidSharedObject (object, cPtr_impAutoDefaultType) ;
  const enumGalgasBool test_0 = ioArgument_attributes.getter_objectParams (SOURCE_FILE ("implementation_types.galgas", 489)).getter_hasKey (object->mAttribute_name.getter_string (SOURCE_FILE ("implementation_types.galgas", 489)) COMMA_SOURCE_FILE ("implementation_types.galgas", 489)).operator_not (SOURCE_FILE ("implementation_types.galgas", 489)).boolEnum () ;
  if (kBoolTrue == test_0) {
    if (object->mAttribute_defaultValue.isValid ()) {
      if (object->mAttribute_defaultValue.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void) {
      }else if (object->mAttribute_defaultValue.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_auto) {
        GALGAS_identifierMap var_attr_13319 = ioArgument_attributes.getter_objectParams (SOURCE_FILE ("implementation_types.galgas", 493)) ;
        {
        var_attr_13319.setter_put (object->mAttribute_name, object->mAttribute_defaultValue, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 494)) ;
        }
        {
        ioArgument_attributes.setter_setObjectParams (var_attr_13319 COMMA_SOURCE_FILE ("implementation_types.galgas", 495)) ;
        }
      }else{
        GALGAS_identifierMap var_attr_13515 = ioArgument_attributes.getter_objectParams (SOURCE_FILE ("implementation_types.galgas", 498)) ;
        {
        var_attr_13515.setter_put (object->mAttribute_name, object->mAttribute_defaultValue, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 499)) ;
        }
        {
        ioArgument_attributes.setter_setObjectParams (var_attr_13515 COMMA_SOURCE_FILE ("implementation_types.galgas", 500)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impAutoDefaultType_setDefault (void) {
  enterExtensionMethod_setDefault (kTypeDescriptor_GALGAS_impAutoDefaultType.mSlotID,
                                   extensionMethod_impAutoDefaultType_setDefault) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impAutoDefaultType_setDefault (void) {
  gExtensionMethodTable_impAutoDefaultType_setDefault.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impAutoDefaultType_setDefault (defineExtensionMethod_impAutoDefaultType_setDefault,
                                                          freeExtensionMethod_impAutoDefaultType_setDefault) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_refType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_refType * p = (const cPtr_refType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_refType) ;
  if (kOperandEqual == result) {
    result = mAttribute_locations.objectCompare (p->mAttribute_locations) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_descs.objectCompare (p->mAttribute_descs) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_ref.objectCompare (p->mAttribute_ref) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_refType::objectCompare (const GALGAS_refType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_refType::GALGAS_refType (void) :
GALGAS_impType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_refType::GALGAS_refType (const cPtr_refType * inSourcePtr) :
GALGAS_impType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_refType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_refType GALGAS_refType::constructor_new (const GALGAS_locationList & inAttribute_locations,
                                                const GALGAS_dataType & inAttribute_type,
                                                const GALGAS_lstring & inAttribute_name,
                                                const GALGAS_bool & inAttribute_multiple,
                                                const GALGAS_lstringlist & inAttribute_descs,
                                                const GALGAS_lstring & inAttribute_ref
                                                COMMA_LOCATION_ARGS) {
  GALGAS_refType result ;
  if (inAttribute_locations.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_descs.isValid () && inAttribute_ref.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_refType (inAttribute_locations, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_descs, inAttribute_ref COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_refType::getter_ref (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_refType * p = (const cPtr_refType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_refType) ;
    result = p->mAttribute_ref ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_refType::getter_ref (UNUSED_LOCATION_ARGS) const {
  return mAttribute_ref ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @refType class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_refType::cPtr_refType (const GALGAS_locationList & in_locations,
                            const GALGAS_dataType & in_type,
                            const GALGAS_lstring & in_name,
                            const GALGAS_bool & in_multiple,
                            const GALGAS_lstringlist & in_descs,
                            const GALGAS_lstring & in_ref
                            COMMA_LOCATION_ARGS) :
cPtr_impType (in_locations, in_type, in_name, in_multiple, in_descs COMMA_THERE),
mAttribute_ref (in_ref) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_refType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_refType ;
}

void cPtr_refType::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@refType:" ;
  mAttribute_locations.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_descs.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_ref.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_refType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_refType (mAttribute_locations, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_descs, mAttribute_ref COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @refType type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_refType ("refType",
                                & kTypeDescriptor_GALGAS_impType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_refType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_refType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_refType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_refType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_refType GALGAS_refType::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_refType result ;
  const GALGAS_refType * p = (const GALGAS_refType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_refType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("refType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_implementationObject::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_implementationObject * p = (const cPtr_implementationObject *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_implementationObject) ;
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_attributes.objectCompare (p->mAttribute_attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_implementationObject::objectCompare (const GALGAS_implementationObject & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject::GALGAS_implementationObject (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject GALGAS_implementationObject::constructor_default (LOCATION_ARGS) {
  return GALGAS_implementationObject::constructor_new (GALGAS_lbool::constructor_default (HERE),
                                                       GALGAS_implementationObjectMap::constructor_emptyMap (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject::GALGAS_implementationObject (const cPtr_implementationObject * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implementationObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject GALGAS_implementationObject::constructor_new (const GALGAS_lbool & inAttribute_multiple,
                                                                          const GALGAS_implementationObjectMap & inAttribute_attributes
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implementationObject result ;
  if (inAttribute_multiple.isValid () && inAttribute_attributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_implementationObject (inAttribute_multiple, inAttribute_attributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_implementationObject::getter_multiple (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementationObject * p = (const cPtr_implementationObject *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementationObject) ;
    result = p->mAttribute_multiple ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool cPtr_implementationObject::getter_multiple (UNUSED_LOCATION_ARGS) const {
  return mAttribute_multiple ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_implementationObject::getter_attributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_implementationObjectMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementationObject * p = (const cPtr_implementationObject *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementationObject) ;
    result = p->mAttribute_attributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap cPtr_implementationObject::getter_attributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_attributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationObject::setter_setMultiple (GALGAS_lbool inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_implementationObject * p = (cPtr_implementationObject *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementationObject) ;
    p->mAttribute_multiple = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_implementationObject::setter_setMultiple (GALGAS_lbool inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_multiple = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationObject::setter_setAttributes (GALGAS_implementationObjectMap inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_implementationObject * p = (cPtr_implementationObject *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementationObject) ;
    p->mAttribute_attributes = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_implementationObject::setter_setAttributes (GALGAS_implementationObjectMap inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_attributes = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @implementationObject class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_implementationObject::cPtr_implementationObject (const GALGAS_lbool & in_multiple,
                                                      const GALGAS_implementationObjectMap & in_attributes
                                                      COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_multiple (in_multiple),
mAttribute_attributes (in_attributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_implementationObject::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementationObject ;
}

void cPtr_implementationObject::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@implementationObject:" ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_attributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_implementationObject::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_implementationObject (mAttribute_multiple, mAttribute_attributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @implementationObject type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementationObject ("implementationObject",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_implementationObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementationObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_implementationObject::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementationObject (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject GALGAS_implementationObject::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_implementationObject result ;
  const GALGAS_implementationObject * p = (const GALGAS_implementationObject *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementationObject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementationObject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impRangedType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impRangedType * p = (const cPtr_impRangedType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impRangedType) ;
  if (kOperandEqual == result) {
    result = mAttribute_locations.objectCompare (p->mAttribute_locations) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_descs.objectCompare (p->mAttribute_descs) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_withAuto.objectCompare (p->mAttribute_withAuto) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_defaultValue.objectCompare (p->mAttribute_defaultValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_setOrRange.objectCompare (p->mAttribute_setOrRange) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impRangedType::objectCompare (const GALGAS_impRangedType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impRangedType::GALGAS_impRangedType (void) :
GALGAS_impAutoDefaultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impRangedType::GALGAS_impRangedType (const cPtr_impRangedType * inSourcePtr) :
GALGAS_impAutoDefaultType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impRangedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impRangedType GALGAS_impRangedType::constructor_new (const GALGAS_locationList & inAttribute_locations,
                                                            const GALGAS_dataType & inAttribute_type,
                                                            const GALGAS_lstring & inAttribute_name,
                                                            const GALGAS_bool & inAttribute_multiple,
                                                            const GALGAS_lstringlist & inAttribute_descs,
                                                            const GALGAS_bool & inAttribute_withAuto,
                                                            const GALGAS_object_5F_t & inAttribute_defaultValue,
                                                            const GALGAS_attributeRange & inAttribute_setOrRange
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_impRangedType result ;
  if (inAttribute_locations.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_descs.isValid () && inAttribute_withAuto.isValid () && inAttribute_defaultValue.isValid () && inAttribute_setOrRange.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impRangedType (inAttribute_locations, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_descs, inAttribute_withAuto, inAttribute_defaultValue, inAttribute_setOrRange COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeRange GALGAS_impRangedType::getter_setOrRange (UNUSED_LOCATION_ARGS) const {
  GALGAS_attributeRange result ;
  if (NULL != mObjectPtr) {
    const cPtr_impRangedType * p = (const cPtr_impRangedType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impRangedType) ;
    result = p->mAttribute_setOrRange ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeRange cPtr_impRangedType::getter_setOrRange (UNUSED_LOCATION_ARGS) const {
  return mAttribute_setOrRange ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @impRangedType class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impRangedType::cPtr_impRangedType (const GALGAS_locationList & in_locations,
                                        const GALGAS_dataType & in_type,
                                        const GALGAS_lstring & in_name,
                                        const GALGAS_bool & in_multiple,
                                        const GALGAS_lstringlist & in_descs,
                                        const GALGAS_bool & in_withAuto,
                                        const GALGAS_object_5F_t & in_defaultValue,
                                        const GALGAS_attributeRange & in_setOrRange
                                        COMMA_LOCATION_ARGS) :
cPtr_impAutoDefaultType (in_locations, in_type, in_name, in_multiple, in_descs, in_withAuto, in_defaultValue COMMA_THERE),
mAttribute_setOrRange (in_setOrRange) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impRangedType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impRangedType ;
}

void cPtr_impRangedType::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@impRangedType:" ;
  mAttribute_locations.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_descs.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_withAuto.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_defaultValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_setOrRange.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impRangedType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impRangedType (mAttribute_locations, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_descs, mAttribute_withAuto, mAttribute_defaultValue, mAttribute_setOrRange COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @impRangedType type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impRangedType ("impRangedType",
                                      & kTypeDescriptor_GALGAS_impAutoDefaultType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impRangedType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impRangedType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impRangedType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impRangedType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impRangedType GALGAS_impRangedType::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_impRangedType result ;
  const GALGAS_impRangedType * p = (const GALGAS_impRangedType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impRangedType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impRangedType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impBoolType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impBoolType * p = (const cPtr_impBoolType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impBoolType) ;
  if (kOperandEqual == result) {
    result = mAttribute_locations.objectCompare (p->mAttribute_locations) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_descs.objectCompare (p->mAttribute_descs) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_withAuto.objectCompare (p->mAttribute_withAuto) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_defaultValue.objectCompare (p->mAttribute_defaultValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_trueSubAttributes.objectCompare (p->mAttribute_trueSubAttributes) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_falseSubAttributes.objectCompare (p->mAttribute_falseSubAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impBoolType::objectCompare (const GALGAS_impBoolType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impBoolType::GALGAS_impBoolType (void) :
GALGAS_impAutoDefaultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impBoolType::GALGAS_impBoolType (const cPtr_impBoolType * inSourcePtr) :
GALGAS_impAutoDefaultType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impBoolType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impBoolType GALGAS_impBoolType::constructor_new (const GALGAS_locationList & inAttribute_locations,
                                                        const GALGAS_dataType & inAttribute_type,
                                                        const GALGAS_lstring & inAttribute_name,
                                                        const GALGAS_bool & inAttribute_multiple,
                                                        const GALGAS_lstringlist & inAttribute_descs,
                                                        const GALGAS_bool & inAttribute_withAuto,
                                                        const GALGAS_object_5F_t & inAttribute_defaultValue,
                                                        const GALGAS_implementationObjectMap & inAttribute_trueSubAttributes,
                                                        const GALGAS_implementationObjectMap & inAttribute_falseSubAttributes
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_impBoolType result ;
  if (inAttribute_locations.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_descs.isValid () && inAttribute_withAuto.isValid () && inAttribute_defaultValue.isValid () && inAttribute_trueSubAttributes.isValid () && inAttribute_falseSubAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impBoolType (inAttribute_locations, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_descs, inAttribute_withAuto, inAttribute_defaultValue, inAttribute_trueSubAttributes, inAttribute_falseSubAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_impBoolType::getter_trueSubAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_implementationObjectMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_impBoolType * p = (const cPtr_impBoolType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impBoolType) ;
    result = p->mAttribute_trueSubAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap cPtr_impBoolType::getter_trueSubAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_trueSubAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_impBoolType::getter_falseSubAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_implementationObjectMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_impBoolType * p = (const cPtr_impBoolType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impBoolType) ;
    result = p->mAttribute_falseSubAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap cPtr_impBoolType::getter_falseSubAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_falseSubAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @impBoolType class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impBoolType::cPtr_impBoolType (const GALGAS_locationList & in_locations,
                                    const GALGAS_dataType & in_type,
                                    const GALGAS_lstring & in_name,
                                    const GALGAS_bool & in_multiple,
                                    const GALGAS_lstringlist & in_descs,
                                    const GALGAS_bool & in_withAuto,
                                    const GALGAS_object_5F_t & in_defaultValue,
                                    const GALGAS_implementationObjectMap & in_trueSubAttributes,
                                    const GALGAS_implementationObjectMap & in_falseSubAttributes
                                    COMMA_LOCATION_ARGS) :
cPtr_impAutoDefaultType (in_locations, in_type, in_name, in_multiple, in_descs, in_withAuto, in_defaultValue COMMA_THERE),
mAttribute_trueSubAttributes (in_trueSubAttributes),
mAttribute_falseSubAttributes (in_falseSubAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impBoolType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impBoolType ;
}

void cPtr_impBoolType::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@impBoolType:" ;
  mAttribute_locations.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_descs.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_withAuto.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_defaultValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_trueSubAttributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_falseSubAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impBoolType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impBoolType (mAttribute_locations, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_descs, mAttribute_withAuto, mAttribute_defaultValue, mAttribute_trueSubAttributes, mAttribute_falseSubAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @impBoolType type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impBoolType ("impBoolType",
                                    & kTypeDescriptor_GALGAS_impAutoDefaultType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impBoolType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impBoolType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impBoolType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impBoolType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impBoolType GALGAS_impBoolType::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_impBoolType result ;
  const GALGAS_impBoolType * p = (const GALGAS_impBoolType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impBoolType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impBoolType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impEnumType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impEnumType * p = (const cPtr_impEnumType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impEnumType) ;
  if (kOperandEqual == result) {
    result = mAttribute_locations.objectCompare (p->mAttribute_locations) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_descs.objectCompare (p->mAttribute_descs) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_withAuto.objectCompare (p->mAttribute_withAuto) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_defaultValue.objectCompare (p->mAttribute_defaultValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_valuesMap.objectCompare (p->mAttribute_valuesMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impEnumType::objectCompare (const GALGAS_impEnumType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impEnumType::GALGAS_impEnumType (void) :
GALGAS_impAutoDefaultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impEnumType::GALGAS_impEnumType (const cPtr_impEnumType * inSourcePtr) :
GALGAS_impAutoDefaultType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impEnumType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impEnumType GALGAS_impEnumType::constructor_new (const GALGAS_locationList & inAttribute_locations,
                                                        const GALGAS_dataType & inAttribute_type,
                                                        const GALGAS_lstring & inAttribute_name,
                                                        const GALGAS_bool & inAttribute_multiple,
                                                        const GALGAS_lstringlist & inAttribute_descs,
                                                        const GALGAS_bool & inAttribute_withAuto,
                                                        const GALGAS_object_5F_t & inAttribute_defaultValue,
                                                        const GALGAS_enumValues & inAttribute_valuesMap
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_impEnumType result ;
  if (inAttribute_locations.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_descs.isValid () && inAttribute_withAuto.isValid () && inAttribute_defaultValue.isValid () && inAttribute_valuesMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impEnumType (inAttribute_locations, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_descs, inAttribute_withAuto, inAttribute_defaultValue, inAttribute_valuesMap COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues GALGAS_impEnumType::getter_valuesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumValues result ;
  if (NULL != mObjectPtr) {
    const cPtr_impEnumType * p = (const cPtr_impEnumType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impEnumType) ;
    result = p->mAttribute_valuesMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues cPtr_impEnumType::getter_valuesMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_valuesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @impEnumType class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impEnumType::cPtr_impEnumType (const GALGAS_locationList & in_locations,
                                    const GALGAS_dataType & in_type,
                                    const GALGAS_lstring & in_name,
                                    const GALGAS_bool & in_multiple,
                                    const GALGAS_lstringlist & in_descs,
                                    const GALGAS_bool & in_withAuto,
                                    const GALGAS_object_5F_t & in_defaultValue,
                                    const GALGAS_enumValues & in_valuesMap
                                    COMMA_LOCATION_ARGS) :
cPtr_impAutoDefaultType (in_locations, in_type, in_name, in_multiple, in_descs, in_withAuto, in_defaultValue COMMA_THERE),
mAttribute_valuesMap (in_valuesMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impEnumType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impEnumType ;
}

void cPtr_impEnumType::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@impEnumType:" ;
  mAttribute_locations.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_descs.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_withAuto.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_defaultValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_valuesMap.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impEnumType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impEnumType (mAttribute_locations, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_descs, mAttribute_withAuto, mAttribute_defaultValue, mAttribute_valuesMap COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @impEnumType type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impEnumType ("impEnumType",
                                    & kTypeDescriptor_GALGAS_impAutoDefaultType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impEnumType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impEnumType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impEnumType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impEnumType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impEnumType GALGAS_impEnumType::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_impEnumType result ;
  const GALGAS_impEnumType * p = (const GALGAS_impEnumType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impEnumType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impEnumType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@impType checkAttributeReferences'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_checkAttributeReferences> gExtensionMethodTable_impType_checkAttributeReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkAttributeReferences (const int32_t inClassIndex,
                                                    extensionMethodSignature_impType_checkAttributeReferences inMethod) {
  gExtensionMethodTable_impType_checkAttributeReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkAttributeReferences (const cPtr_impType * inObject,
                                                   const GALGAS_implementation constin_imp,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_checkAttributeReferences f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_checkAttributeReferences.count ()) {
      f = gExtensionMethodTable_impType_checkAttributeReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_checkAttributeReferences.count ()) {
           f = gExtensionMethodTable_impType_checkAttributeReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_checkAttributeReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_imp, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_checkAttributeReferences (const cPtr_impType * /* inObject */,
                                                              const GALGAS_implementation /* constinArgument_imp */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_checkAttributeReferences (void) {
  enterExtensionMethod_checkAttributeReferences (kTypeDescriptor_GALGAS_impType.mSlotID,
                                                 extensionMethod_impType_checkAttributeReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_checkAttributeReferences (void) {
  gExtensionMethodTable_impType_checkAttributeReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_checkAttributeReferences (defineExtensionMethod_impType_checkAttributeReferences,
                                                             freeExtensionMethod_impType_checkAttributeReferences) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension getter '@implementationObject mergeImplementationObjectWith'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_implementationObject_mergeImplementationObjectWith> gExtensionGetterTable_implementationObject_mergeImplementationObjectWith ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_mergeImplementationObjectWith (const int32_t inClassIndex,
                                                         enterExtensionGetter_implementationObject_mergeImplementationObjectWith inGetter) {
  gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject callExtensionGetter_mergeImplementationObjectWith (const cPtr_implementationObject * inObject,
                                                                               const GALGAS_implementationObject & in_objToMerge,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_implementationObject result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementationObject) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_implementationObject_mergeImplementationObjectWith f = NULL ;
    if (classIndex < gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.count ()) {
      f = gExtensionGetterTable_implementationObject_mergeImplementationObjectWith (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.count ()) {
           f = gExtensionGetterTable_implementationObject_mergeImplementationObjectWith (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_objToMerge, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_implementationObject extensionGetter_implementationObject_mergeImplementationObjectWith (const cPtr_implementationObject * inObject,
                                                                                                       const GALGAS_implementationObject & constinArgument_objToMerge,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implementationObject result_mergedObj ; // Returned variable
  const cPtr_implementationObject * object = inObject ;
  macroValidSharedObject (object, cPtr_implementationObject) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_multiple.objectCompare (constinArgument_objToMerge.getter_multiple (SOURCE_FILE ("implementation_types.galgas", 986)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (gOption_goil_5F_options_warnMultiple.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticWarning (constinArgument_objToMerge.getter_multiple (SOURCE_FILE ("implementation_types.galgas", 988)).getter_location (SOURCE_FILE ("implementation_types.galgas", 988)), GALGAS_string ("multiple redefinition"), fixItArray2  COMMA_SOURCE_FILE ("implementation_types.galgas", 988)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (object->mAttribute_multiple.getter_location (SOURCE_FILE ("implementation_types.galgas", 989)), GALGAS_string ("was defined here"), fixItArray3  COMMA_SOURCE_FILE ("implementation_types.galgas", 989)) ;
    }
  }
  result_mergedObj = GALGAS_implementationObject::constructor_new (object->mAttribute_multiple, extensionGetter_mergeImplementationObjectAttributesWith (object->mAttribute_attributes, constinArgument_objToMerge.getter_attributes (SOURCE_FILE ("implementation_types.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 1002))  COMMA_SOURCE_FILE ("implementation_types.galgas", 1002)) ;
//---
  return result_mergedObj ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_implementationObject_mergeImplementationObjectWith (void) {
  enterExtensionGetter_mergeImplementationObjectWith (kTypeDescriptor_GALGAS_implementationObject.mSlotID,
                                                      extensionGetter_implementationObject_mergeImplementationObjectWith) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_implementationObject_mergeImplementationObjectWith (void) {
  gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_implementationObject_mergeImplementationObjectWith (defineExtensionGetter_implementationObject_mergeImplementationObjectWith,
                                                                               freeExtensionGetter_implementationObject_mergeImplementationObjectWith) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void * p = (const cPtr_void *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void::objectCompare (const GALGAS_void & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void::GALGAS_void (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void GALGAS_void::constructor_default (LOCATION_ARGS) {
  return GALGAS_void::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)
                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void::GALGAS_void (const cPtr_void * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void GALGAS_void::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                          const GALGAS_location & inAttribute_location
                                          COMMA_LOCATION_ARGS) {
  GALGAS_void result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void (inAttribute_oil_5F_desc, inAttribute_location COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                            Pointer class for @void class                                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void::cPtr_void (const GALGAS_lstring & in_oil_5F_desc,
                      const GALGAS_location & in_location
                      COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void ;
}

void cPtr_void::description (C_String & ioString,
                             const int32_t inIndentation) const {
  ioString << "[@void:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void (mAttribute_oil_5F_desc, mAttribute_location COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @void type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void ("void",
                             & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void GALGAS_void::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_void result ;
  const GALGAS_void * p = (const GALGAS_void *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_auto::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_auto * p = (const cPtr_auto *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_auto) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_auto::objectCompare (const GALGAS_auto & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto::GALGAS_auto (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto GALGAS_auto::constructor_default (LOCATION_ARGS) {
  return GALGAS_auto::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)
                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto::GALGAS_auto (const cPtr_auto * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_auto) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto GALGAS_auto::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                          const GALGAS_location & inAttribute_location
                                          COMMA_LOCATION_ARGS) {
  GALGAS_auto result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_auto (inAttribute_oil_5F_desc, inAttribute_location COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                            Pointer class for @auto class                                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_auto::cPtr_auto (const GALGAS_lstring & in_oil_5F_desc,
                      const GALGAS_location & in_location
                      COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_auto::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_auto ;
}

void cPtr_auto::description (C_String & ioString,
                             const int32_t inIndentation) const {
  ioString << "[@auto:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_auto::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_auto (mAttribute_oil_5F_desc, mAttribute_location COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @auto type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_auto ("auto",
                             & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_auto::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_auto ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_auto::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_auto (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto GALGAS_auto::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_auto result ;
  const GALGAS_auto * p = (const GALGAS_auto *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_auto *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("auto", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_multipleAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_multipleAttribute * p = (const cPtr_multipleAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_multipleAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_items.objectCompare (p->mAttribute_items) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_multipleAttribute::objectCompare (const GALGAS_multipleAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute::GALGAS_multipleAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute GALGAS_multipleAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_multipleAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_identifierList::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute::GALGAS_multipleAttribute (const cPtr_multipleAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multipleAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute GALGAS_multipleAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                    const GALGAS_location & inAttribute_location,
                                                                    const GALGAS_identifierList & inAttribute_items
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_multipleAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_items.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_multipleAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_items COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList GALGAS_multipleAttribute::getter_items (UNUSED_LOCATION_ARGS) const {
  GALGAS_identifierList result ;
  if (NULL != mObjectPtr) {
    const cPtr_multipleAttribute * p = (const cPtr_multipleAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multipleAttribute) ;
    result = p->mAttribute_items ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList cPtr_multipleAttribute::getter_items (UNUSED_LOCATION_ARGS) const {
  return mAttribute_items ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @multipleAttribute class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_multipleAttribute::cPtr_multipleAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                                const GALGAS_location & in_location,
                                                const GALGAS_identifierList & in_items
                                                COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_items (in_items) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_multipleAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleAttribute ;
}

void cPtr_multipleAttribute::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@multipleAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_items.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_multipleAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_multipleAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_items COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @multipleAttribute type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleAttribute ("multipleAttribute",
                                          & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_multipleAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_multipleAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute GALGAS_multipleAttribute::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_multipleAttribute result ;
  const GALGAS_multipleAttribute * p = (const GALGAS_multipleAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_boolAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolAttribute * p = (const cPtr_boolAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_subAttributes.objectCompare (p->mAttribute_subAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_boolAttribute::objectCompare (const GALGAS_boolAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute::GALGAS_boolAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute GALGAS_boolAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_location::constructor_nowhere (HERE),
                                                GALGAS_bool::constructor_default (HERE),
                                                GALGAS_objectAttributes::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute::GALGAS_boolAttribute (const cPtr_boolAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute GALGAS_boolAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                            const GALGAS_location & inAttribute_location,
                                                            const GALGAS_bool & inAttribute_value,
                                                            const GALGAS_objectAttributes & inAttribute_subAttributes
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid () && inAttribute_subAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value, inAttribute_subAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_boolAttribute::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolAttribute * p = (const cPtr_boolAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAttribute) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_boolAttribute::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_boolAttribute::getter_subAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectAttributes result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolAttribute * p = (const cPtr_boolAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAttribute) ;
    result = p->mAttribute_subAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes cPtr_boolAttribute::getter_subAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_subAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_boolAttribute::setter_setSubAttributes (GALGAS_objectAttributes inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_boolAttribute * p = (cPtr_boolAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAttribute) ;
    p->mAttribute_subAttributes = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_boolAttribute::setter_setSubAttributes (GALGAS_objectAttributes inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_subAttributes = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @boolAttribute class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_boolAttribute::cPtr_boolAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                        const GALGAS_location & in_location,
                                        const GALGAS_bool & in_value,
                                        const GALGAS_objectAttributes & in_subAttributes
                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value),
mAttribute_subAttributes (in_subAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_boolAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAttribute ;
}

void cPtr_boolAttribute::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@boolAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_subAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_boolAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value, mAttribute_subAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @boolAttribute type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolAttribute ("boolAttribute",
                                      & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_boolAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_boolAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute GALGAS_boolAttribute::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolAttribute result ;
  const GALGAS_boolAttribute * p = (const GALGAS_boolAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumAttribute * p = (const cPtr_enumAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_subAttributes.objectCompare (p->mAttribute_subAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumAttribute::objectCompare (const GALGAS_enumAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute::GALGAS_enumAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute GALGAS_enumAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_location::constructor_nowhere (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_objectAttributes::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute::GALGAS_enumAttribute (const cPtr_enumAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute GALGAS_enumAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                            const GALGAS_location & inAttribute_location,
                                                            const GALGAS_string & inAttribute_value,
                                                            const GALGAS_objectAttributes & inAttribute_subAttributes
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid () && inAttribute_subAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value, inAttribute_subAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumAttribute::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumAttribute * p = (const cPtr_enumAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumAttribute) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_enumAttribute::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_enumAttribute::getter_subAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectAttributes result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumAttribute * p = (const cPtr_enumAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumAttribute) ;
    result = p->mAttribute_subAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes cPtr_enumAttribute::getter_subAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_subAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @enumAttribute class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumAttribute::cPtr_enumAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                        const GALGAS_location & in_location,
                                        const GALGAS_string & in_value,
                                        const GALGAS_objectAttributes & in_subAttributes
                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value),
mAttribute_subAttributes (in_subAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumAttribute ;
}

void cPtr_enumAttribute::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@enumAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_subAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value, mAttribute_subAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @enumAttribute type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumAttribute ("enumAttribute",
                                      & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute GALGAS_enumAttribute::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumAttribute result ;
  const GALGAS_enumAttribute * p = (const GALGAS_enumAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_objectRefAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_objectRefAttribute * p = (const cPtr_objectRefAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_objectRefAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_objectRefAttribute::objectCompare (const GALGAS_objectRefAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectRefAttribute::GALGAS_objectRefAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectRefAttribute GALGAS_objectRefAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_objectRefAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectRefAttribute::GALGAS_objectRefAttribute (const cPtr_objectRefAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_objectRefAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectRefAttribute GALGAS_objectRefAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                      const GALGAS_location & inAttribute_location,
                                                                      const GALGAS_lstring & inAttribute_value
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_objectRefAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_objectRefAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_objectRefAttribute::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_objectRefAttribute * p = (const cPtr_objectRefAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_objectRefAttribute) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_objectRefAttribute::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @objectRefAttribute class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_objectRefAttribute::cPtr_objectRefAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                                  const GALGAS_location & in_location,
                                                  const GALGAS_lstring & in_value
                                                  COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_objectRefAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectRefAttribute ;
}

void cPtr_objectRefAttribute::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@objectRefAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_objectRefAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_objectRefAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @objectRefAttribute type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectRefAttribute ("objectRefAttribute",
                                           & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectRefAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectRefAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectRefAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectRefAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectRefAttribute GALGAS_objectRefAttribute::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectRefAttribute result ;
  const GALGAS_objectRefAttribute * p = (const GALGAS_objectRefAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectRefAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectRefAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_33__32__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_33__32__5F_class * p = (const cPtr_uint_33__32__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_33__32__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_33__32__5F_class::objectCompare (const GALGAS_uint_33__32__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class::GALGAS_uint_33__32__5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class GALGAS_uint_33__32__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_uint_33__32__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_uint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class::GALGAS_uint_33__32__5F_class (const cPtr_uint_33__32__5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_33__32__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class GALGAS_uint_33__32__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                            const GALGAS_location & inAttribute_location,
                                                                            const GALGAS_uint & inAttribute_value
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_33__32__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uint_33__32__5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_33__32__5F_class * p = (const cPtr_uint_33__32__5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_33__32__5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_uint_33__32__5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @uint32_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_33__32__5F_class::cPtr_uint_33__32__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                        const GALGAS_location & in_location,
                                                        const GALGAS_uint & in_value
                                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_33__32__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32__5F_class ;
}

void cPtr_uint_33__32__5F_class::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@uint32_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_33__32__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_33__32__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @uint32_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_33__32__5F_class ("uint32_class",
                                              & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_33__32__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_33__32__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_33__32__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class GALGAS_uint_33__32__5F_class::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32__5F_class result ;
  const GALGAS_uint_33__32__5F_class * p = (const GALGAS_uint_33__32__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_33__32__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint32_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sint_33__32__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_33__32__5F_class * p = (const cPtr_sint_33__32__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_33__32__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sint_33__32__5F_class::objectCompare (const GALGAS_sint_33__32__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class::GALGAS_sint_33__32__5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class GALGAS_sint_33__32__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_sint_33__32__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_sint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class::GALGAS_sint_33__32__5F_class (const cPtr_sint_33__32__5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_33__32__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class GALGAS_sint_33__32__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                            const GALGAS_location & inAttribute_location,
                                                                            const GALGAS_sint & inAttribute_value
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_33__32__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint GALGAS_sint_33__32__5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint result ;
  if (NULL != mObjectPtr) {
    const cPtr_sint_33__32__5F_class * p = (const cPtr_sint_33__32__5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sint_33__32__5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint cPtr_sint_33__32__5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @sint32_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sint_33__32__5F_class::cPtr_sint_33__32__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                        const GALGAS_location & in_location,
                                                        const GALGAS_sint & in_value
                                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sint_33__32__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_33__32__5F_class ;
}

void cPtr_sint_33__32__5F_class::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@sint32_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sint_33__32__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_33__32__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @sint32_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_33__32__5F_class ("sint32_class",
                                              & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_33__32__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_33__32__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_33__32__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_33__32__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class GALGAS_sint_33__32__5F_class::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32__5F_class result ;
  const GALGAS_sint_33__32__5F_class * p = (const GALGAS_sint_33__32__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_33__32__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint32_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_36__34__5F_class * p = (const cPtr_uint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_36__34__5F_class::objectCompare (const GALGAS_uint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class::GALGAS_uint_36__34__5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class GALGAS_uint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_uint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_uint_36__34_::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class::GALGAS_uint_36__34__5F_class (const cPtr_uint_36__34__5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class GALGAS_uint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                            const GALGAS_location & inAttribute_location,
                                                                            const GALGAS_uint_36__34_ & inAttribute_value
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34__5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_36__34__5F_class * p = (const cPtr_uint_36__34__5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_36__34__5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ cPtr_uint_36__34__5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @uint64_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_36__34__5F_class::cPtr_uint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                        const GALGAS_location & in_location,
                                                        const GALGAS_uint_36__34_ & in_value
                                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34__5F_class ;
}

void cPtr_uint_36__34__5F_class::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@uint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @uint64_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34__5F_class ("uint64_class",
                                              & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class GALGAS_uint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34__5F_class result ;
  const GALGAS_uint_36__34__5F_class * p = (const GALGAS_uint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_36__34__5F_class * p = (const cPtr_sint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sint_36__34__5F_class::objectCompare (const GALGAS_sint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class::GALGAS_sint_36__34__5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class GALGAS_sint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_sint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_sint_36__34_::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class::GALGAS_sint_36__34__5F_class (const cPtr_sint_36__34__5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class GALGAS_sint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                            const GALGAS_location & inAttribute_location,
                                                                            const GALGAS_sint_36__34_ & inAttribute_value
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_sint_36__34__5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_sint_36__34__5F_class * p = (const cPtr_sint_36__34__5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sint_36__34__5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ cPtr_sint_36__34__5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @sint64_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sint_36__34__5F_class::cPtr_sint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                        const GALGAS_location & in_location,
                                                        const GALGAS_sint_36__34_ & in_value
                                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34__5F_class ;
}

void cPtr_sint_36__34__5F_class::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@sint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @sint64_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34__5F_class ("sint64_class",
                                              & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class GALGAS_sint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34__5F_class result ;
  const GALGAS_sint_36__34__5F_class * p = (const GALGAS_sint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_float_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_float_5F_class * p = (const cPtr_float_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_float_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_float_5F_class::objectCompare (const GALGAS_float_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class::GALGAS_float_5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class GALGAS_float_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_float_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE),
                                                 GALGAS_double::constructor_default (HERE)
                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class::GALGAS_float_5F_class (const cPtr_float_5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_float_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class GALGAS_float_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                              const GALGAS_location & inAttribute_location,
                                                              const GALGAS_double & inAttribute_value
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_float_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_float_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_float_5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (NULL != mObjectPtr) {
    const cPtr_float_5F_class * p = (const cPtr_float_5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_float_5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double cPtr_float_5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @float_class class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_float_5F_class::cPtr_float_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                          const GALGAS_location & in_location,
                                          const GALGAS_double & in_value
                                          COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_float_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_float_5F_class ;
}

void cPtr_float_5F_class::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "[@float_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_float_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_float_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @float_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_float_5F_class ("float_class",
                                       & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_float_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_float_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_float_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_float_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class GALGAS_float_5F_class::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_float_5F_class result ;
  const GALGAS_float_5F_class * p = (const GALGAS_float_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_float_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("float_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_string_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_string_5F_class * p = (const cPtr_string_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_string_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_string_5F_class::objectCompare (const GALGAS_string_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class::GALGAS_string_5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class GALGAS_string_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_string_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE),
                                                  GALGAS_string::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class::GALGAS_string_5F_class (const cPtr_string_5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_string_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class GALGAS_string_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                const GALGAS_location & inAttribute_location,
                                                                const GALGAS_string & inAttribute_value
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_string_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_string_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_string_5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_string_5F_class * p = (const cPtr_string_5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_string_5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_string_5F_class::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @string_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_string_5F_class::cPtr_string_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                            const GALGAS_location & in_location,
                                            const GALGAS_string & in_value
                                            COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_string_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_string_5F_class ;
}

void cPtr_string_5F_class::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@string_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_string_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_string_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @string_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_string_5F_class ("string_class",
                                        & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_string_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_string_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_string_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_string_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class GALGAS_string_5F_class::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string_5F_class result ;
  const GALGAS_string_5F_class * p = (const GALGAS_string_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_string_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("string_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_stringAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringAttribute * p = (const cPtr_stringAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_stringAttribute::objectCompare (const GALGAS_stringAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute::GALGAS_stringAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute GALGAS_stringAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_stringAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE),
                                                  GALGAS_string::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute::GALGAS_stringAttribute (const cPtr_stringAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute GALGAS_stringAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                const GALGAS_location & inAttribute_location,
                                                                const GALGAS_string & inAttribute_value
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_stringAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_stringAttribute::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_stringAttribute * p = (const cPtr_stringAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAttribute) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_stringAttribute::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @stringAttribute class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_stringAttribute::cPtr_stringAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                            const GALGAS_location & in_location,
                                            const GALGAS_string & in_value
                                            COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_stringAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAttribute ;
}

void cPtr_stringAttribute::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@stringAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_stringAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @stringAttribute type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringAttribute ("stringAttribute",
                                        & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute GALGAS_stringAttribute::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_stringAttribute result ;
  const GALGAS_stringAttribute * p = (const GALGAS_stringAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structAttribute * p = (const cPtr_structAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_structName.objectCompare (p->mAttribute_structName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_subAttributes.objectCompare (p->mAttribute_subAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structAttribute::objectCompare (const GALGAS_structAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute::GALGAS_structAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute GALGAS_structAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_structAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_objectAttributes::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute::GALGAS_structAttribute (const cPtr_structAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute GALGAS_structAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                const GALGAS_location & inAttribute_location,
                                                                const GALGAS_lstring & inAttribute_structName,
                                                                const GALGAS_objectAttributes & inAttribute_subAttributes
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_structName.isValid () && inAttribute_subAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_structName, inAttribute_subAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structAttribute::getter_structName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structAttribute * p = (const cPtr_structAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structAttribute) ;
    result = p->mAttribute_structName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_structAttribute::getter_structName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_structName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_structAttribute::getter_subAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectAttributes result ;
  if (NULL != mObjectPtr) {
    const cPtr_structAttribute * p = (const cPtr_structAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structAttribute) ;
    result = p->mAttribute_subAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes cPtr_structAttribute::getter_subAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_subAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @structAttribute class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structAttribute::cPtr_structAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                            const GALGAS_location & in_location,
                                            const GALGAS_lstring & in_structName,
                                            const GALGAS_objectAttributes & in_subAttributes
                                            COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_structName (in_structName),
mAttribute_subAttributes (in_subAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structAttribute ;
}

void cPtr_structAttribute::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@structAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_structName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_subAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_structName, mAttribute_subAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @structAttribute type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structAttribute ("structAttribute",
                                        & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute GALGAS_structAttribute::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structAttribute result ;
  const GALGAS_structAttribute * p = (const GALGAS_structAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_bool_5F_t::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bool_5F_t * p = (const cPtr_bool_5F_t *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bool_5F_t) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_bool_5F_t::objectCompare (const GALGAS_bool_5F_t & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t::GALGAS_bool_5F_t (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t GALGAS_bool_5F_t::constructor_default (LOCATION_ARGS) {
  return GALGAS_bool_5F_t::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_location::constructor_nowhere (HERE),
                                            GALGAS_bool::constructor_default (HERE)
                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t::GALGAS_bool_5F_t (const cPtr_bool_5F_t * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bool_5F_t) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t GALGAS_bool_5F_t::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                    const GALGAS_location & inAttribute_location,
                                                    const GALGAS_bool & inAttribute_value
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bool_5F_t result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bool_5F_t (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bool_5F_t::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_bool_5F_t * p = (const cPtr_bool_5F_t *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bool_5F_t) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_bool_5F_t::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                           Pointer class for @bool_t class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_bool_5F_t::cPtr_bool_5F_t (const GALGAS_lstring & in_oil_5F_desc,
                                const GALGAS_location & in_location,
                                const GALGAS_bool & in_value
                                COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_bool_5F_t::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bool_5F_t ;
}

void cPtr_bool_5F_t::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@bool_t:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_bool_5F_t::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bool_5F_t (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @bool_t type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bool_5F_t ("bool_t",
                                  & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bool_5F_t::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bool_5F_t ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bool_5F_t::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bool_5F_t (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t GALGAS_bool_5F_t::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bool_5F_t result ;
  const GALGAS_bool_5F_t * p = (const GALGAS_bool_5F_t *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bool_5F_t *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bool_t", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_uint_33__32__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_uint_33__32__5F_class * p = (const cPtr_void_5F_uint_33__32__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_uint_33__32__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_uint_33__32__5F_class::objectCompare (const GALGAS_void_5F_uint_33__32__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class::GALGAS_void_5F_uint_33__32__5F_class (void) :
GALGAS_uint_33__32__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class GALGAS_void_5F_uint_33__32__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_uint_33__32__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_uint::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class::GALGAS_void_5F_uint_33__32__5F_class (const cPtr_void_5F_uint_33__32__5F_class * inSourcePtr) :
GALGAS_uint_33__32__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_uint_33__32__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class GALGAS_void_5F_uint_33__32__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_uint & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_33__32__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_uint_33__32__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_uint32_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_uint_33__32__5F_class::cPtr_void_5F_uint_33__32__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_uint & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_uint_33__32__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_uint_33__32__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_33__32__5F_class ;
}

void cPtr_void_5F_uint_33__32__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_uint32_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_uint_33__32__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_uint_33__32__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_uint32_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_uint_33__32__5F_class ("void_uint32_class",
                                                      & kTypeDescriptor_GALGAS_uint_33__32__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_uint_33__32__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_33__32__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_uint_33__32__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_uint_33__32__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class GALGAS_void_5F_uint_33__32__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_33__32__5F_class result ;
  const GALGAS_void_5F_uint_33__32__5F_class * p = (const GALGAS_void_5F_uint_33__32__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_uint_33__32__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_uint32_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_sint_33__32__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_sint_33__32__5F_class * p = (const cPtr_void_5F_sint_33__32__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_sint_33__32__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_sint_33__32__5F_class::objectCompare (const GALGAS_void_5F_sint_33__32__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class::GALGAS_void_5F_sint_33__32__5F_class (void) :
GALGAS_sint_33__32__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class GALGAS_void_5F_sint_33__32__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_sint_33__32__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_sint::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class::GALGAS_void_5F_sint_33__32__5F_class (const cPtr_void_5F_sint_33__32__5F_class * inSourcePtr) :
GALGAS_sint_33__32__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_sint_33__32__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class GALGAS_void_5F_sint_33__32__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_sint & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_33__32__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_sint_33__32__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_sint32_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_sint_33__32__5F_class::cPtr_void_5F_sint_33__32__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_sint & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_sint_33__32__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_sint_33__32__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_33__32__5F_class ;
}

void cPtr_void_5F_sint_33__32__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_sint32_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_sint_33__32__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_sint_33__32__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_sint32_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_sint_33__32__5F_class ("void_sint32_class",
                                                      & kTypeDescriptor_GALGAS_sint_33__32__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_sint_33__32__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_33__32__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_sint_33__32__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_sint_33__32__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class GALGAS_void_5F_sint_33__32__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_33__32__5F_class result ;
  const GALGAS_void_5F_sint_33__32__5F_class * p = (const GALGAS_void_5F_sint_33__32__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_sint_33__32__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_sint32_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_uint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_uint_36__34__5F_class * p = (const cPtr_void_5F_uint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_uint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_uint_36__34__5F_class::objectCompare (const GALGAS_void_5F_uint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class::GALGAS_void_5F_uint_36__34__5F_class (void) :
GALGAS_uint_36__34__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class GALGAS_void_5F_uint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_uint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_uint_36__34_::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class::GALGAS_void_5F_uint_36__34__5F_class (const cPtr_void_5F_uint_36__34__5F_class * inSourcePtr) :
GALGAS_uint_36__34__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_uint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class GALGAS_void_5F_uint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_uint_36__34_ & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_uint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_uint64_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_uint_36__34__5F_class::cPtr_void_5F_uint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_uint_36__34_ & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_uint_36__34__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_uint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_36__34__5F_class ;
}

void cPtr_void_5F_uint_36__34__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_uint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_uint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_uint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_uint64_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_uint_36__34__5F_class ("void_uint64_class",
                                                      & kTypeDescriptor_GALGAS_uint_36__34__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_uint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_uint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_uint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class GALGAS_void_5F_uint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_36__34__5F_class result ;
  const GALGAS_void_5F_uint_36__34__5F_class * p = (const GALGAS_void_5F_uint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_uint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_uint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_sint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_sint_36__34__5F_class * p = (const cPtr_void_5F_sint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_sint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_sint_36__34__5F_class::objectCompare (const GALGAS_void_5F_sint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class::GALGAS_void_5F_sint_36__34__5F_class (void) :
GALGAS_sint_36__34__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class GALGAS_void_5F_sint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_sint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_sint_36__34_::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class::GALGAS_void_5F_sint_36__34__5F_class (const cPtr_void_5F_sint_36__34__5F_class * inSourcePtr) :
GALGAS_sint_36__34__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_sint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class GALGAS_void_5F_sint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_sint_36__34_ & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_sint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_sint64_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_sint_36__34__5F_class::cPtr_void_5F_sint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_sint_36__34_ & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_sint_36__34__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_sint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_36__34__5F_class ;
}

void cPtr_void_5F_sint_36__34__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_sint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_sint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_sint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_sint64_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_sint_36__34__5F_class ("void_sint64_class",
                                                      & kTypeDescriptor_GALGAS_sint_36__34__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_sint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_sint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_sint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class GALGAS_void_5F_sint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_36__34__5F_class result ;
  const GALGAS_void_5F_sint_36__34__5F_class * p = (const GALGAS_void_5F_sint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_sint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_sint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_float_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_float_5F_class * p = (const cPtr_void_5F_float_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_float_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_float_5F_class::objectCompare (const GALGAS_void_5F_float_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class::GALGAS_void_5F_float_5F_class (void) :
GALGAS_float_5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class GALGAS_void_5F_float_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_float_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_double::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class::GALGAS_void_5F_float_5F_class (const cPtr_void_5F_float_5F_class * inSourcePtr) :
GALGAS_float_5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_float_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class GALGAS_void_5F_float_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                              const GALGAS_location & inAttribute_location,
                                                                              const GALGAS_double & inAttribute_value
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_float_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_float_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @void_float_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_float_5F_class::cPtr_void_5F_float_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                          const GALGAS_location & in_location,
                                                          const GALGAS_double & in_value
                                                          COMMA_LOCATION_ARGS) :
cPtr_float_5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_float_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_float_5F_class ;
}

void cPtr_void_5F_float_5F_class::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@void_float_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_float_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_float_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_float_class type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_float_5F_class ("void_float_class",
                                               & kTypeDescriptor_GALGAS_float_5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_float_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_float_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_float_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_float_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class GALGAS_void_5F_float_5F_class::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_float_5F_class result ;
  const GALGAS_void_5F_float_5F_class * p = (const GALGAS_void_5F_float_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_float_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_float_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_string_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_string_5F_class * p = (const cPtr_void_5F_string_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_string_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_string_5F_class::objectCompare (const GALGAS_void_5F_string_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class::GALGAS_void_5F_string_5F_class (void) :
GALGAS_string_5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class GALGAS_void_5F_string_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_string_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_string::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class::GALGAS_void_5F_string_5F_class (const cPtr_void_5F_string_5F_class * inSourcePtr) :
GALGAS_string_5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_string_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class GALGAS_void_5F_string_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                const GALGAS_location & inAttribute_location,
                                                                                const GALGAS_string & inAttribute_value
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_string_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_string_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_string_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_string_5F_class::cPtr_void_5F_string_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                            const GALGAS_location & in_location,
                                                            const GALGAS_string & in_value
                                                            COMMA_LOCATION_ARGS) :
cPtr_string_5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_string_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_string_5F_class ;
}

void cPtr_void_5F_string_5F_class::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@void_string_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_string_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_string_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_string_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_string_5F_class ("void_string_class",
                                                & kTypeDescriptor_GALGAS_string_5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_string_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_string_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_string_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_string_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class GALGAS_void_5F_string_5F_class::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_string_5F_class result ;
  const GALGAS_void_5F_string_5F_class * p = (const GALGAS_void_5F_string_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_string_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_string_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_bool_5F_t::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_bool_5F_t * p = (const cPtr_void_5F_bool_5F_t *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_bool_5F_t) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_bool_5F_t::objectCompare (const GALGAS_void_5F_bool_5F_t & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t::GALGAS_void_5F_bool_5F_t (void) :
GALGAS_bool_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t GALGAS_void_5F_bool_5F_t::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_bool_5F_t::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_bool::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t::GALGAS_void_5F_bool_5F_t (const cPtr_void_5F_bool_5F_t * inSourcePtr) :
GALGAS_bool_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_bool_5F_t) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t GALGAS_void_5F_bool_5F_t::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                    const GALGAS_location & inAttribute_location,
                                                                    const GALGAS_bool & inAttribute_value
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_bool_5F_t result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_bool_5F_t (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @void_bool_t class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_bool_5F_t::cPtr_void_5F_bool_5F_t (const GALGAS_lstring & in_oil_5F_desc,
                                                const GALGAS_location & in_location,
                                                const GALGAS_bool & in_value
                                                COMMA_LOCATION_ARGS) :
cPtr_bool_5F_t (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_bool_5F_t::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_bool_5F_t ;
}

void cPtr_void_5F_bool_5F_t::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@void_bool_t:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_bool_5F_t::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_bool_5F_t (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @void_bool_t type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_bool_5F_t ("void_bool_t",
                                          & kTypeDescriptor_GALGAS_bool_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_bool_5F_t::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_bool_5F_t ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_bool_5F_t::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_bool_5F_t (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t GALGAS_void_5F_bool_5F_t::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_bool_5F_t result ;
  const GALGAS_void_5F_bool_5F_t * p = (const GALGAS_void_5F_bool_5F_t *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_bool_5F_t *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_bool_t", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_oil_5F_obj::objectCompare (const GALGAS_oil_5F_obj & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_oil_5F_obj::GALGAS_oil_5F_obj (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_oil_5F_obj::GALGAS_oil_5F_obj (const cPtr_oil_5F_obj * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_oil_5F_obj) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_oil_5F_obj::getter_desc (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_oil_5F_obj * p = (const cPtr_oil_5F_obj *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_oil_5F_obj) ;
    result = p->mAttribute_desc ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_oil_5F_obj::getter_desc (UNUSED_LOCATION_ARGS) const {
  return mAttribute_desc ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @oil_obj class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_oil_5F_obj::cPtr_oil_5F_obj (const GALGAS_lstring & in_desc
                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_desc (in_desc) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @oil_obj type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_oil_5F_obj ("oil_obj",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_oil_5F_obj::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_oil_5F_obj ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_oil_5F_obj::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_oil_5F_obj (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_oil_5F_obj GALGAS_oil_5F_obj::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_oil_5F_obj result ;
  const GALGAS_oil_5F_obj * p = (const GALGAS_oil_5F_obj *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_oil_5F_obj *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("oil_obj", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension method '@object_t set'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_object_5F_t_set> gExtensionMethodTable_object_5F_t_set ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_set (const int32_t inClassIndex,
                               extensionMethodSignature_object_5F_t_set inMethod) {
  gExtensionMethodTable_object_5F_t_set.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_set (const cPtr_object_5F_t * inObject,
                              const GALGAS_lstring constin_name,
                              GALGAS_gtlData & io_result,
                              C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_object_5F_t) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_object_5F_t_set f = NULL ;
    if (classIndex < gExtensionMethodTable_object_5F_t_set.count ()) {
      f = gExtensionMethodTable_object_5F_t_set (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_object_5F_t_set.count ()) {
           f = gExtensionMethodTable_object_5F_t_set (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_object_5F_t_set.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_name, io_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_object_5F_t_set (const cPtr_object_5F_t * /* inObject */,
                                             const GALGAS_lstring constinArgument_name,
                                             GALGAS_gtlData & /* ioArgument_result */,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 28)), GALGAS_string ("Attribute: ").add_operation (constinArgument_name.getter_string (SOURCE_FILE ("systemConfig.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 28)).add_operation (GALGAS_string (", Internal error"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 28)), fixItArray0  COMMA_SOURCE_FILE ("systemConfig.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_object_5F_t_set (void) {
  enterExtensionMethod_set (kTypeDescriptor_GALGAS_object_5F_t.mSlotID,
                            extensionMethod_object_5F_t_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_object_5F_t_set (void) {
  gExtensionMethodTable_object_5F_t_set.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_object_5F_t_set (defineExtensionMethod_object_5F_t_set,
                                            freeExtensionMethod_object_5F_t_set) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_applicationDefinition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_applicationDefinition) ;
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_cpuDescription.objectCompare (p->mAttribute_cpuDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_version.objectCompare (p->mAttribute_version) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_versionDescription.objectCompare (p->mAttribute_versionDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_objects.objectCompare (p->mAttribute_objects) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_applicationDefinition::objectCompare (const GALGAS_applicationDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition::GALGAS_applicationDefinition (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition GALGAS_applicationDefinition::constructor_default (LOCATION_ARGS) {
  return GALGAS_applicationDefinition::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_objectsMap::constructor_emptyMap (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition::GALGAS_applicationDefinition (const cPtr_applicationDefinition * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_applicationDefinition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition GALGAS_applicationDefinition::constructor_new (const GALGAS_lstring & inAttribute_name,
                                                                            const GALGAS_lstring & inAttribute_cpuDescription,
                                                                            const GALGAS_lstring & inAttribute_version,
                                                                            const GALGAS_lstring & inAttribute_versionDescription,
                                                                            const GALGAS_objectsMap & inAttribute_objects
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_applicationDefinition result ;
  if (inAttribute_name.isValid () && inAttribute_cpuDescription.isValid () && inAttribute_version.isValid () && inAttribute_versionDescription.isValid () && inAttribute_objects.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_applicationDefinition (inAttribute_name, inAttribute_cpuDescription, inAttribute_version, inAttribute_versionDescription, inAttribute_objects COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_applicationDefinition::getter_name (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_name ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_applicationDefinition::getter_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_name ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_applicationDefinition::getter_cpuDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_cpuDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_applicationDefinition::getter_cpuDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_cpuDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_applicationDefinition::getter_version (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_version ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_applicationDefinition::getter_version (UNUSED_LOCATION_ARGS) const {
  return mAttribute_version ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_applicationDefinition::getter_versionDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_versionDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_applicationDefinition::getter_versionDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_versionDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap GALGAS_applicationDefinition::getter_objects (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectsMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_objects ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap cPtr_applicationDefinition::getter_objects (UNUSED_LOCATION_ARGS) const {
  return mAttribute_objects ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setName (GALGAS_lstring inValue
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_name = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setName (GALGAS_lstring inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_name = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setCpuDescription (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_cpuDescription = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setCpuDescription (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_cpuDescription = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setVersion (GALGAS_lstring inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_version = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setVersion (GALGAS_lstring inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_version = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setVersionDescription (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_versionDescription = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setVersionDescription (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_versionDescription = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setObjects (GALGAS_objectsMap inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_objects = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setObjects (GALGAS_objectsMap inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_objects = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @applicationDefinition class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_applicationDefinition::cPtr_applicationDefinition (const GALGAS_lstring & in_name,
                                                        const GALGAS_lstring & in_cpuDescription,
                                                        const GALGAS_lstring & in_version,
                                                        const GALGAS_lstring & in_versionDescription,
                                                        const GALGAS_objectsMap & in_objects
                                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_name (in_name),
mAttribute_cpuDescription (in_cpuDescription),
mAttribute_version (in_version),
mAttribute_versionDescription (in_versionDescription),
mAttribute_objects (in_objects) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_applicationDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationDefinition ;
}

void cPtr_applicationDefinition::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@applicationDefinition:" ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_cpuDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_version.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_versionDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_objects.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_applicationDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_applicationDefinition (mAttribute_name, mAttribute_cpuDescription, mAttribute_version, mAttribute_versionDescription, mAttribute_objects COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @applicationDefinition type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_applicationDefinition ("applicationDefinition",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_applicationDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_applicationDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationDefinition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition GALGAS_applicationDefinition::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_applicationDefinition result ;
  const GALGAS_applicationDefinition * p = (const GALGAS_applicationDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_applicationDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@applicationDefinition applicationWithDefaults'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_applicationDefinition_applicationWithDefaults> gExtensionGetterTable_applicationDefinition_applicationWithDefaults ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_applicationWithDefaults (const int32_t inClassIndex,
                                                   enterExtensionGetter_applicationDefinition_applicationWithDefaults inGetter) {
  gExtensionGetterTable_applicationDefinition_applicationWithDefaults.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition callExtensionGetter_applicationWithDefaults (const cPtr_applicationDefinition * inObject,
                                                                          const GALGAS_implementation & in_imp,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_applicationDefinition result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_applicationDefinition) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_applicationDefinition_applicationWithDefaults f = NULL ;
    if (classIndex < gExtensionGetterTable_applicationDefinition_applicationWithDefaults.count ()) {
      f = gExtensionGetterTable_applicationDefinition_applicationWithDefaults (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_applicationDefinition_applicationWithDefaults.count ()) {
           f = gExtensionGetterTable_applicationDefinition_applicationWithDefaults (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_applicationDefinition_applicationWithDefaults.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_imp, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_applicationDefinition extensionGetter_applicationDefinition_applicationWithDefaults (const cPtr_applicationDefinition * inObject,
                                                                                                   const GALGAS_implementation & /* constinArgument_imp */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_applicationDefinition result_result ; // Returned variable
  const cPtr_applicationDefinition * object = inObject ;
  macroValidSharedObject (object, cPtr_applicationDefinition) ;
  const GALGAS_applicationDefinition temp_0 = object ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_applicationDefinition_applicationWithDefaults (void) {
  enterExtensionGetter_applicationWithDefaults (kTypeDescriptor_GALGAS_applicationDefinition.mSlotID,
                                                extensionGetter_applicationDefinition_applicationWithDefaults) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_applicationDefinition_applicationWithDefaults (void) {
  gExtensionGetterTable_applicationDefinition_applicationWithDefaults.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_applicationDefinition_applicationWithDefaults (defineExtensionGetter_applicationDefinition_applicationWithDefaults,
                                                                          freeExtensionGetter_applicationDefinition_applicationWithDefaults) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@implementationObject verifyApplication'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_implementationObject_verifyApplication> gExtensionMethodTable_implementationObject_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyApplication (const int32_t inClassIndex,
                                             extensionMethodSignature_implementationObject_verifyApplication inMethod) {
  gExtensionMethodTable_implementationObject_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyApplication (const cPtr_implementationObject * inObject,
                                            const GALGAS_objectKind constin_objectsOfKind,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementationObject) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_implementationObject_verifyApplication f = NULL ;
    if (classIndex < gExtensionMethodTable_implementationObject_verifyApplication.count ()) {
      f = gExtensionMethodTable_implementationObject_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_implementationObject_verifyApplication.count ()) {
           f = gExtensionMethodTable_implementationObject_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_implementationObject_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_objectsOfKind, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implementationObject_verifyApplication (const cPtr_implementationObject * inObject,
                                                                    const GALGAS_objectKind constinArgument_objectsOfKind,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementationObject * object = inObject ;
  macroValidSharedObject (object, cPtr_implementationObject) ;
  cEnumerator_objectKindMap enumerator_1305 (constinArgument_objectsOfKind.getter_objects (SOURCE_FILE ("semantic_verification.galgas", 46)), kEnumeration_up) ;
  while (enumerator_1305.hasCurrentObject ()) {
    cEnumerator_implementationObjectMap enumerator_1334 (object->mAttribute_attributes, kEnumeration_up) ;
    while (enumerator_1334.hasCurrentObject ()) {
      callExtensionMethod_verifyApplication ((const cPtr_impType *) enumerator_1334.current_type (HERE).ptr (), enumerator_1305.current_attributes (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 48)) ;
      enumerator_1334.gotoNextObject () ;
    }
    enumerator_1305.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implementationObject_verifyApplication (void) {
  enterExtensionMethod_verifyApplication (kTypeDescriptor_GALGAS_implementationObject.mSlotID,
                                          extensionMethod_implementationObject_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_implementationObject_verifyApplication (void) {
  gExtensionMethodTable_implementationObject_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementationObject_verifyApplication (defineExtensionMethod_implementationObject_verifyApplication,
                                                                   freeExtensionMethod_implementationObject_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension method '@impType verifyApplication'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_verifyApplication> gExtensionMethodTable_impType_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyApplication (const int32_t inClassIndex,
                                             extensionMethodSignature_impType_verifyApplication inMethod) {
  gExtensionMethodTable_impType_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyApplication (const cPtr_impType * inObject,
                                            const GALGAS_objectAttributes constin_attrs,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_verifyApplication f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_verifyApplication.count ()) {
      f = gExtensionMethodTable_impType_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_verifyApplication.count ()) {
           f = gExtensionMethodTable_impType_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attrs, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_verifyApplication (const cPtr_impType * inObject,
                                                       const GALGAS_objectAttributes constinArgument_attrs,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impType * object = inObject ;
  macroValidSharedObject (object, cPtr_impType) ;
  cEnumerator_identifierMap enumerator_1580 (constinArgument_attrs.getter_objectParams (SOURCE_FILE ("semantic_verification.galgas", 56)), kEnumeration_up) ;
  while (enumerator_1580.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1580.current_lkey (HERE).getter_string (SOURCE_FILE ("semantic_verification.galgas", 57)).objectCompare (object->mAttribute_name.getter_string (SOURCE_FILE ("semantic_verification.galgas", 57)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_impType temp_1 = object ;
      callExtensionMethod_verifyMultipleType ((const cPtr_impType *) temp_1.ptr (), enumerator_1580.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 58)) ;
    }
    enumerator_1580.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_verifyApplication (void) {
  enterExtensionMethod_verifyApplication (kTypeDescriptor_GALGAS_impType.mSlotID,
                                          extensionMethod_impType_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_verifyApplication (void) {
  gExtensionMethodTable_impType_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyApplication (defineExtensionMethod_impType_verifyApplication,
                                                      freeExtensionMethod_impType_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@impType verifyType'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_verifyType> gExtensionMethodTable_impType_verifyType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyType (const int32_t inClassIndex,
                                      extensionMethodSignature_impType_verifyType inMethod) {
  gExtensionMethodTable_impType_verifyType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyType (const cPtr_impType * inObject,
                                     const GALGAS_object_5F_t constin_attr,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_verifyType f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_verifyType.count ()) {
      f = gExtensionMethodTable_impType_verifyType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_verifyType.count ()) {
           f = gExtensionMethodTable_impType_verifyType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_verifyType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attr, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_verifyType (const cPtr_impType * /* inObject */,
                                                const GALGAS_object_5F_t constinArgument_attr,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (constinArgument_attr.getter_location (SOURCE_FILE ("semantic_verification.galgas", 66)), GALGAS_string ("Internal error, a generic type should not be instantiated"), fixItArray0  COMMA_SOURCE_FILE ("semantic_verification.galgas", 66)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_verifyType (void) {
  enterExtensionMethod_verifyType (kTypeDescriptor_GALGAS_impType.mSlotID,
                                   extensionMethod_impType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_verifyType (void) {
  gExtensionMethodTable_impType_verifyType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyType (defineExtensionMethod_impType_verifyType,
                                               freeExtensionMethod_impType_verifyType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@impType verifyMultipleType'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_verifyMultipleType> gExtensionMethodTable_impType_verifyMultipleType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyMultipleType (const int32_t inClassIndex,
                                              extensionMethodSignature_impType_verifyMultipleType inMethod) {
  gExtensionMethodTable_impType_verifyMultipleType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyMultipleType (const cPtr_impType * inObject,
                                             const GALGAS_object_5F_t constin_attr,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_verifyMultipleType f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_verifyMultipleType.count ()) {
      f = gExtensionMethodTable_impType_verifyMultipleType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_verifyMultipleType.count ()) {
           f = gExtensionMethodTable_impType_verifyMultipleType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_verifyMultipleType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attr, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_verifyMultipleType (const cPtr_impType * inObject,
                                                        const GALGAS_object_5F_t constinArgument_attr,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impType * object = inObject ;
  macroValidSharedObject (object, cPtr_impType) ;
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_multipleAttribute) {
      GALGAS_multipleAttribute cast_2080_ma ((cPtr_multipleAttribute *) constinArgument_attr.ptr ()) ;
      cEnumerator_identifierList enumerator_2108 (cast_2080_ma.getter_items (SOURCE_FILE ("semantic_verification.galgas", 74)), kEnumeration_up) ;
      while (enumerator_2108.hasCurrentObject ()) {
        const GALGAS_impType temp_0 = object ;
        callExtensionMethod_verifyType ((const cPtr_impType *) temp_0.ptr (), enumerator_2108.current_item (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 75)) ;
        enumerator_2108.gotoNextObject () ;
      }
    }else{
      const GALGAS_impType temp_1 = object ;
      callExtensionMethod_verifyType ((const cPtr_impType *) temp_1.ptr (), constinArgument_attr, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 78)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_verifyMultipleType (void) {
  enterExtensionMethod_verifyMultipleType (kTypeDescriptor_GALGAS_impType.mSlotID,
                                           extensionMethod_impType_verifyMultipleType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_verifyMultipleType (void) {
  gExtensionMethodTable_impType_verifyMultipleType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyMultipleType (defineExtensionMethod_impType_verifyMultipleType,
                                                       freeExtensionMethod_impType_verifyMultipleType) ;

