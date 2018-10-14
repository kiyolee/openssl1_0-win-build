/* crypto/dso/dso_err.c */
/* ====================================================================
 * Copyright (c) 1999-2006 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/*
 * NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/dso.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_DSO,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_DSO,0,reason)

static ERR_STRING_DATA DSO_str_functs[] = {
    {ERR_FUNC(DSO_F_BEOS_BIND_FUNC), "BEOS_BIND_FUNC"},
    {ERR_FUNC(DSO_F_BEOS_BIND_VAR), "BEOS_BIND_VAR"},
    {ERR_FUNC(DSO_F_BEOS_LOAD), "BEOS_LOAD"},
    {ERR_FUNC(DSO_F_BEOS_NAME_CONVERTER), "BEOS_NAME_CONVERTER"},
    {ERR_FUNC(DSO_F_BEOS_UNLOAD), "BEOS_UNLOAD"},
    {ERR_FUNC(DSO_F_DLFCN_BIND_FUNC), "DLFCN_BIND_FUNC"},
    {ERR_FUNC(DSO_F_DLFCN_BIND_VAR), "DLFCN_BIND_VAR"},
    {ERR_FUNC(DSO_F_DLFCN_LOAD), "DLFCN_LOAD"},
    {ERR_FUNC(DSO_F_DLFCN_MERGER), "DLFCN_MERGER"},
    {ERR_FUNC(DSO_F_DLFCN_NAME_CONVERTER), "DLFCN_NAME_CONVERTER"},
    {ERR_FUNC(DSO_F_DLFCN_UNLOAD), "DLFCN_UNLOAD"},
    {ERR_FUNC(DSO_F_DL_BIND_FUNC), "DL_BIND_FUNC"},
    {ERR_FUNC(DSO_F_DL_BIND_VAR), "DL_BIND_VAR"},
    {ERR_FUNC(DSO_F_DL_LOAD), "DL_LOAD"},
    {ERR_FUNC(DSO_F_DL_MERGER), "DL_MERGER"},
    {ERR_FUNC(DSO_F_DL_NAME_CONVERTER), "DL_NAME_CONVERTER"},
    {ERR_FUNC(DSO_F_DL_UNLOAD), "DL_UNLOAD"},
    {ERR_FUNC(DSO_F_DSO_BIND_FUNC), "DSO_bind_func"},
    {ERR_FUNC(DSO_F_DSO_BIND_VAR), "DSO_bind_var"},
    {ERR_FUNC(DSO_F_DSO_CONVERT_FILENAME), "DSO_convert_filename"},
    {ERR_FUNC(DSO_F_DSO_CTRL), "DSO_ctrl"},
    {ERR_FUNC(DSO_F_DSO_FREE), "DSO_free"},
    {ERR_FUNC(DSO_F_DSO_GET_FILENAME), "DSO_get_filename"},
    {ERR_FUNC(DSO_F_DSO_GET_LOADED_FILENAME), "DSO_get_loaded_filename"},
    {ERR_FUNC(DSO_F_DSO_GLOBAL_LOOKUP), "DSO_global_lookup"},
    {ERR_FUNC(DSO_F_DSO_LOAD), "DSO_load"},
    {ERR_FUNC(DSO_F_DSO_MERGE), "DSO_merge"},
    {ERR_FUNC(DSO_F_DSO_NEW_METHOD), "DSO_new_method"},
    {ERR_FUNC(DSO_F_DSO_PATHBYADDR), "DSO_pathbyaddr"},
    {ERR_FUNC(DSO_F_DSO_SET_FILENAME), "DSO_set_filename"},
    {ERR_FUNC(DSO_F_DSO_SET_NAME_CONVERTER), "DSO_set_name_converter"},
    {ERR_FUNC(DSO_F_DSO_UP_REF), "DSO_up_ref"},
    {ERR_FUNC(DSO_F_GLOBAL_LOOKUP_FUNC), "GLOBAL_LOOKUP_FUNC"},
    {ERR_FUNC(DSO_F_PATHBYADDR), "PATHBYADDR"},
    {ERR_FUNC(DSO_F_VMS_BIND_SYM), "VMS_BIND_SYM"},
    {ERR_FUNC(DSO_F_VMS_LOAD), "VMS_LOAD"},
    {ERR_FUNC(DSO_F_VMS_MERGER), "VMS_MERGER"},
    {ERR_FUNC(DSO_F_VMS_UNLOAD), "VMS_UNLOAD"},
    {ERR_FUNC(DSO_F_WIN32_BIND_FUNC), "WIN32_BIND_FUNC"},
    {ERR_FUNC(DSO_F_WIN32_BIND_VAR), "WIN32_BIND_VAR"},
    {ERR_FUNC(DSO_F_WIN32_GLOBALLOOKUP), "WIN32_GLOBALLOOKUP"},
    {ERR_FUNC(DSO_F_WIN32_GLOBALLOOKUP_FUNC), "WIN32_GLOBALLOOKUP_FUNC"},
    {ERR_FUNC(DSO_F_WIN32_JOINER), "WIN32_JOINER"},
    {ERR_FUNC(DSO_F_WIN32_LOAD), "WIN32_LOAD"},
    {ERR_FUNC(DSO_F_WIN32_MERGER), "WIN32_MERGER"},
    {ERR_FUNC(DSO_F_WIN32_NAME_CONVERTER), "WIN32_NAME_CONVERTER"},
    {ERR_FUNC(DSO_F_WIN32_PATHBYADDR), "WIN32_PATHBYADDR"},
    {ERR_FUNC(DSO_F_WIN32_SPLITTER), "WIN32_SPLITTER"},
    {ERR_FUNC(DSO_F_WIN32_UNLOAD), "WIN32_UNLOAD"},
    {0, NULL}
};

static ERR_STRING_DATA DSO_str_reasons[] = {
    {ERR_REASON(DSO_R_CTRL_FAILED), "control command failed"},
    {ERR_REASON(DSO_R_DSO_ALREADY_LOADED), "dso already loaded"},
    {ERR_REASON(DSO_R_EMPTY_FILE_STRUCTURE), "empty file structure"},
    {ERR_REASON(DSO_R_FAILURE), "failure"},
    {ERR_REASON(DSO_R_FILENAME_TOO_BIG), "filename too big"},
    {ERR_REASON(DSO_R_FINISH_FAILED), "cleanup method function failed"},
    {ERR_REASON(DSO_R_INCORRECT_FILE_SYNTAX), "incorrect file syntax"},
    {ERR_REASON(DSO_R_LOAD_FAILED), "could not load the shared library"},
    {ERR_REASON(DSO_R_NAME_TRANSLATION_FAILED), "name translation failed"},
    {ERR_REASON(DSO_R_NO_FILENAME), "no filename"},
    {ERR_REASON(DSO_R_NO_FILE_SPECIFICATION), "no file specification"},
    {ERR_REASON(DSO_R_NULL_HANDLE), "a null shared library handle was used"},
    {ERR_REASON(DSO_R_SET_FILENAME_FAILED), "set filename failed"},
    {ERR_REASON(DSO_R_STACK_ERROR), "the meth_data stack is corrupt"},
    {ERR_REASON(DSO_R_SYM_FAILURE),
     "could not bind to the requested symbol name"},
    {ERR_REASON(DSO_R_UNLOAD_FAILED), "could not unload the shared library"},
    {ERR_REASON(DSO_R_UNSUPPORTED), "functionality not supported"},
    {0, NULL}
};

#endif

void ERR_load_DSO_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(DSO_str_functs[0].error) == NULL) {
        ERR_load_strings(0, DSO_str_functs);
        ERR_load_strings(0, DSO_str_reasons);
    }
#endif
}
