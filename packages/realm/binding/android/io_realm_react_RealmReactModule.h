/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_realm_react_RealmReactModule */

#ifndef _Included_io_realm_react_RealmReactModule
#define _Included_io_realm_react_RealmReactModule
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_realm_react_RealmReactModule
 * Method:    setDefaultRealmFileDirectory
 * Signature: (Ljava/lang/String;Landroid/content/res/AssetManager;)V
 */
JNIEXPORT void JNICALL Java_io_realm_react_RealmReactModule_setDefaultRealmFileDirectory(JNIEnv*, jobject, jstring,
                                                                                         jobject);

/*
 * Class:     io_realm_react_RealmReactModule
 * Method:    install
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_react_RealmReactModule_install(JNIEnv*, jobject, jlong);

/*
 * Class:     io_realm_react_RealmReactModule
 * Method:    invalidateCaches
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_realm_react_RealmReactModule_invalidateCaches(JNIEnv*, jobject);

/*
 * Class:     io_realm_react_RealmReactModule
 * Method:    setupFlushUiQueue
 * Signature: (Lcom/facebook/react/turbomodule/core/CallInvokerHolderImpl;)V
 */
// JNIEXPORT void JNICALL Java_io_realm_react_RealmReactModule_setupFlushUiQueue
// (JNIEnv *, jobject, jobject);

JNIEXPORT void JNICALL Java_io_realm_react_RealmReactModule_setupFlushUiQueue(JNIEnv*, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif